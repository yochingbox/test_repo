import time
from numpy import log2, zeros
from math import floor

# dummy register read/write
from dummy_reg_drivers import read, write
# real chip controls
# from cap2 import read, write
# matlab control

import sys
if sys.platform == 'linux2' or sys.platform == 'linux': # due to our IT Linux structure
    matlab_dir = "/mrvl2g/caev3/eda/MATHWORKS/MATLAB/7.14"
    sys.path.insert(1,'matlab_wrapper_master')
else:
     matlab_dir = None
import matlab_wrapper
import platform
import os

# dummy ctle state control
ctle_R = 0
ctle_C = 0
ctle_gain_coarse = 6 # programmable
# Matlab related
RS1 = 0
RS2 = 0
Cinnet = 15
CL1 = 15
CS1=0
CS2=0
sat_level = zeros(2)
hlp_set = 0
# output variables
mse = 0
sat = [0, 0]
ffe = zeros(29)
dfe = 0.0
gain = 0.0
ffe_dtl = zeros(7)
gain_dtl = 0.0
pwr_hlp = zeros(4)
chnl_id = 0
tx_ampl = 1.0

# TX-FFE state [ cm3, cm2, cm1, c0, c1 ]
TX_FFE = [0.0, 0.0, 0.0, 1.0, 0.0]

cds_list = ["DEFAULT","RXINIT","SAVE","RXTRAIN","TRXTRAIN","TXFFETRAIN","TRXFINAL"]

# Start MATLAB engine
matlab = matlab_wrapper.MatlabSession(matlab_root=matlab_dir)
    
# function to initialize
def train_init(seed=0, chnl_idx=0, tx_amp=1.0):
    global CS1, CS2, CL1, Cinnet, RS1, RS2, ctle_gain_coarse, TX_FFE
    global mse, sat, ffe, dfe, gain, ffe_dtl, gain_dtl, pwr_hlp, sat_level, chnl_id, tx_ampl
    # dummy ctle state control
    chnl_id = chnl_idx
    tx_ampl = tx_amp
    ctle_R = 0
    ctle_C = 0
    ctle_gain_coarse = 6 # programmable
    # Matlab related
    RS1 = 0
    RS2 = 0
    Cinnet = 15
    CL1 = 15    
    CS1=0
    CS2=0
    sat_level = zeros(2)
    hlp_set = 0
    # output variables
    mse = 0
    sat = [0, 0]
    ffe = zeros(29)
    dfe = 0.0
    gain = 0.0
    ffe_dtl = zeros(7)
    gain_dtl = 0.0
    pwr_hlp = zeros(4)
    TX_FFE = [0.0, 0.0, 0.0, 1.0, 0.0]

    local_dir = os.getcwd();
    matlab.eval("addpath('" + local_dir + "/data path')")
    #matlab.eval("rng('shuffle')") # 
    matlab.eval("rng("+str(seed)+")") # 
    print "Training started"

# function to stop
def train_close():
    #mat_run()
    print "Training completed"


# TX-FFE state [ cm3, cm2, cm1, c0, c1 ]




def mat_run():
    global CS1, CS2, CL1, Cinnet, RS1, RS2, ctle_gain_coarse, TX_FFE
    global mse, sat, ffe, dfe, gain, ffe_dtl, gain_dtl, pwr_hlp, sat_level, chnl_id, tx_ampl
    ctle = [CS1, CS2, CL1, Cinnet, RS1, RS2, ctle_gain_coarse]
    #sat_level = 0.9
    mse, sat, ffe, dfe, gain, ffe_dtl, gain_dtl, pwr_hlp = matlab.workspace.simpleDataPathModel(ctle, TX_FFE, sat_level, chnl_id, tx_ampl, nout=8)
    #print('MSE=' + str(mse) + ' SAT=' + str(sat))
    return mse, sat, ffe, dfe, gain, ffe_dtl, gain_dtl

# function approximation -10*log10(x/65536) 0<x<65535
# DSP spec appendix A
# input:  mse U16.16
# output: snr U11.5
def snr_approx(mse):
    frac_bits = 5
    frac_pw = 2**frac_bits
    if mse <= 16: # limit higher snr
        snr = 36 * frac_pw
    elif mse >= 16384: # limit smaller snr
        snr = 6 * frac_pw
    else:
        m = floor(log2(mse)) # closer power of 2 less than number - typically provided as MSB in integeter in MCU
        if mse < 2**(m) + 2**(m-1):   
            # linear interpolator between 2^m and 1.5*2^m
            snr = ((12*(16-m)-7)*(mse-2**m) + 12*(16-m)*(2**m+2.**(m-1)-mse)+2**(m-frac_bits))/2**(m+1-frac_bits)
        else:
            # linear interpolator between 1.5*2^m and 2*2^m
            snr = (12*(16-m-1)*(mse-2**m-2**(m-1)) + (12*(16-m)-7)*(2**(m+1)-mse)+2**(m-frac_bits))/2**(m+1-frac_bits)
        # fixed point number - automatic by previous operation in C fixed point
        snr = floor(snr)
    return snr
    
# analog ctle DC control super simplified 
def ctle_R_incdec(step):
    Rmin = 0
    Rmax = 13 # can be programmed
    sat_ind = 0

    global ctle_R
    if step > 0:
        if ctle_R+step <= Rmax:
            ctle_R = ctle_R+step
        elif ctle_R < Rmax:
            ctle_R = Rmax
            sat_ind = 2
        else:
            sat_ind = 1
    else:
        if ctle_R+step >= Rmin:
            ctle_R = ctle_R+step
        elif ctle_R > Rmin:
            ctle_R = Rmin
            sat_ind = -2
        else:
            sat_ind = -1
    global ctle_C
    global ctle_gain_coarse
    set_ctle(ctle_R, ctle_C, ctle_gain_coarse)
    #print('CTLE: set R=' + str(ctle_R) + ' C=' + str(ctle_C))

    return sat_ind

# analog ctle DC control super simplified 
def ctle_C_incdec(step, iscode=False):
    Cmin = 0
    Cmax = 124 # max number of code
    sat_ind = 0
    # half-dB step of peak-gain mapping
    # [[code1, delta1], [code2, delta2], ...]
    C_diff = [[12, 2], [42, 3], [80, 5], [100, 10], [124, 20]]
    #C_map = [0,2,5,7,10,13,16,18,20,23,25,27,30,32,34,36,39,42,47,53,61,63,66,69,74,80,92,105,124]

    global ctle_C
    if step > 0:
        if iscode:
            ctle_C_new = ctle_C + step
        else:
            for C_zone in range(0,len(C_diff)):
                if ctle_C < C_diff[C_zone][0]:
                    ctle_C_new = ctle_C + C_diff[C_zone][1]*step
                    break
        if ctle_C_new <= Cmax:
            ctle_C = ctle_C_new
        elif ctle_C < Cmax:
            ctle_C = Cmax
            sat_ind = 2
        else:
            sat_ind = 1
    else:
        if iscode:
            ctle_C_new = ctle_C + step
        else:
            for C_zone in range(0,len(C_diff)):
                if ctle_C < C_diff[C_zone][0]:
                    ctle_C_new = ctle_C + C_diff[C_zone][1]*step
                    break
        if ctle_C_new >= Cmin:
            ctle_C = ctle_C_new
        elif ctle_C > Cmin:
            ctle_C = Cmin
            sat_ind = -2
        else:
            sat_ind = -1
    global ctle_R
    global ctle_gain_coarse
    set_ctle(ctle_R, ctle_C, ctle_gain_coarse)
    #print('CTLE: set R=' + str(ctle_R) + ' C=' + str(ctle_C))

    return sat_ind

def ctle_gain_coarse_incdec(step):
    GCmin = 0 # min allowed - 0 pr speed related
    GCmax = 7 # maxallowed = 15 or speed related
    sat_ind = 0

    global ctle_gain_coarse
    if step > 0:
        if ctle_gain_coarse+step <= GCmax:
            ctle_gain_coarse = ctle_gain_coarse+step
        elif ctle_gain_coarse < GCmax:
            ctle_gain_coarse = GCmax
            sat_ind = 2
        else:
            sat_ind = 1
    else:
        if ctle_gain_coarse+step >= GCmin:
            ctle_gain_coarse = ctle_gain_coarse+step
        elif ctle_gain_coarse > GCmin:
            ctle_gain_coarse = GCmin
            sat_ind = -2
        else:
            sat_ind = -1
    global ctle_R
    global ctle_C
    set_ctle(ctle_R, ctle_C, ctle_gain_coarse)

    return sat_ind

def set_ctle(R,C,gain_coarse, use_table = 0):
    global ctle_R
    global ctle_C
    ctle_R = R
    ctle_C = C
    global RS1, RS2, Cinnet, CL1, CS1, CS2, ctle_gain_coarse
    ctle_gain_coarse = gain_coarse
    if use_table:
        # one-dB step of DC-gain mapping
        #R_ma
        # half-dB step of peak-gain mapping
        C_map = [0,2,5,7,10,13,16,18,20,23,25,27,30,32,34,36,39,42,47,53,61,63,66,69,74,80,92,105,124]
        ctle_C = C_map[C]

    # DC gain
    if ctle_R < 16:
        RS1 = ctle_R
        RS2 = 0
    else:
        RS1 = 15
        RS2 = ctle_R-15
    
    # Peak gain
    if ctle_C < 16:
        Cinnet = 15-ctle_C
        CL1 = 15
        CS1=0
        CS2=0
    elif ctle_C < 31:
        Cinnet = 0
        CL1 = 15 - (ctle_C-15)
        CS1=0
        CS2=0
    elif ctle_C < 62:
        Cinnet = 0;
        CL1 = 0;
        CS1=ctle_C-30; #CS1A
        CS2=0;
    elif ctle_C < 93:
        Cinnet = 0
        CL1 = 0
        CS1=31
        CS2=ctle_C-61
    else:
        Cinnet = 0
        CL1 = 0
        CS1=31+(ctle_C-92) #CS1B
        CS2=31
    print('CTLE: set R=' + str(ctle_R) + ' C=' + str(ctle_C) + ' gain_coarse=' + str(ctle_gain_coarse))

def get_ctle():
    global ctle_R
    global ctle_C
    global ctle_gain_coarse
    return [ctle_R, ctle_C, ctle_gain_coarse]

# remote Tx control
def set_TXFFE_preset(num_preset):
    # code to set one of the preset
    global TX_FFE
    TX_presets = {
		1: [0.0, 0.0,  0.0, 1.0,  0.0],
		2: [0.0, 0.0, -0.15, 0.75, -0.1],
		3: [0.0, 0.0, -0.25, 0.75, 0.0]
		}
    TX_out = TX_presets.get(num_preset)
    if TX_out is None:
        print "Invalid Preset"
    else:
        TX_FFE = TX_out
        print('set TX preset ' + str(num_preset))
    print TX_FFE


def set_TXFFE_tap(tap, tx_dir, p2pfix):
    update_flag = 0
    max_flag = 0
    min_flag = 0

    if tx_dir == 0:
        return update_flag, max_flag, min_flag

    if (tap == 1) and (p2pfix==0): # update C0 standalone only when p2pfix flag is disabled
        update_flag, max_flag, min_flag = set_TXFFE_incdec([0, tx_dir, 0, 0, 0])
    
    elif tap == 0: # C1
        if tx_dir > 0: # Increase C1 
            update_flag, max_flag, min_flag = set_TXFFE_incdec([tx_dir, 0, 0, 0, 0])
            if (update_flag==1) and (p2pfix==1): # then increase C0 if p2pfix is enabled
                update_flag, max_flag, min_flag = set_TXFFE_incdec([0, tx_dir, 0, 0, 0])
                if (update_flag==0): # revert back C1 if last update is unsucessful
                    update_flag, max_flag, min_flag = set_TXFFE_incdec([-tx_dir, 0, 0, 0, 0])
                    if (update_flag==0): # crictical error if unsuccessful 
                        update_flag = -1
                    else: #set the correct flag if revert back is successful 
                        update_flag = 0
        else: # Decrease C1
            if (p2pfix==1):  # Decrease C0 first if p2pfix is enabled
                update_flag, max_flag, min_flag = set_TXFFE_incdec([0, tx_dir, 0, 0, 0])
                if (update_flag==1): # then decrease C1 if the first update is successful
                    update_flag, max_flag, min_flag = set_TXFFE_incdec([tx_dir, 0, 0, 0, 0])
                    if (update_flag==0): # revert back C0 if last update is unsucessful
                        update_flag, max_flag, min_flag = set_TXFFE_incdec([0, -tx_dir, 0, 0, 0])
                        if (update_flag==0): # crictical error if unsuccessful 
                            update_flag = -1
                        else: #set the correct flag if revert back is successful 
                            update_flag = 0
            else: # if p2pfix flag is disabled decrease C1
                update_flag, max_flag, min_flag = set_TXFFE_incdec([tx_dir, 0, 0, 0, 0])

    elif tap == 2: # Cm1
        if tx_dir > 0: # Increase Cm1 
            update_flag, max_flag, min_flag = set_TXFFE_incdec([0, 0, tx_dir, 0, 0])
            if (update_flag==1) and (p2pfix==1): # then increase C0 if p2pfix is enabled
                update_flag, max_flag, min_flag = set_TXFFE_incdec([0, tx_dir, 0, 0, 0])
                if (update_flag==0): # revert back Cm1 if last update is unsucessful
                    update_flag, max_flag, min_flag = set_TXFFE_incdec([ 0, 0, -tx_dir, 0, 0])
                    if (update_flag==0): # crictical error if unsuccessful 
                        update_flag = -1
                    else: #set the correct flag if revert back is successful 
                        update_flag = 0
        else: # Decrease Cm1
            if (p2pfix==1):  # Decrease C0 first if p2pfix is enabled
                update_flag, max_flag, min_flag = set_TXFFE_incdec([0, tx_dir, 0, 0, 0])
                if (update_flag==1): # then decrease Cm1 if the first update is successful
                    update_flag, max_flag, min_flag = set_TXFFE_incdec([ 0, 0, tx_dir, 0, 0])
                    if (update_flag==0): # revert back C0 if last update is unsucessful
                        update_flag, max_flag, min_flag = set_TXFFE_incdec([0, -tx_dir, 0, 0, 0])
                        if (update_flag==0): # crictical error if unsuccessful 
                            update_flag = -1
                        else: #set the correct flag if revert back is successful 
                            update_flag = 0
            else: # if p2pfix flag is disabled decrease Cm1
                update_flag, max_flag, min_flag = set_TXFFE_incdec([ 0, 0, tx_dir, 0, 0])

    elif tap == 3: # Cm2
        if tx_dir < 0: # Decrease Cm2
            update_flag, max_flag, min_flag = set_TXFFE_incdec([0, 0, 0, tx_dir, 0])
            if (update_flag==1) and (p2pfix==1): # then increase C0 if p2pfix is enabled
                update_flag, max_flag, min_flag = set_TXFFE_incdec([0, -tx_dir, 0, 0, 0])
                if (update_flag==0): # revert back Cm2 if last update is unsucessful
                    update_flag, max_flag, min_flag = set_TXFFE_incdec([0, 0, 0, -tx_dir, 0])
                    if (update_flag==0): # crictical error if unsuccessful 
                        update_flag = -1
                    else: #set the correct flag if revert back is successful 
                        update_flag = 0
        else: # increase Cm2
            if (p2pfix==1):  # Decrease C0 first if p2pfix is enabled
                update_flag, max_flag, min_flag = set_TXFFE_incdec([0, -tx_dir, 0, 0, 0])
                if (update_flag==1): # then increase Cm2 if the first update is successful
                    update_flag, max_flag, min_flag = set_TXFFE_incdec([ 0, 0, 0, tx_dir, 0])
                    if (update_flag==0): # revert back C0 if last update is unsucessful
                        update_flag, max_flag, min_flag = set_TXFFE_incdec([0, tx_dir, 0, 0, 0])
                        if (update_flag==0): # crictical error if unsuccessful 
                            update_flag = -1
                        else: #set the correct flag if revert back is successful 
                            update_flag = 0
            else: # if p2pfix flag is disabled increase Cm2
                update_flag, max_flag, min_flag = set_TXFFE_incdec([ 0, 0, 0, tx_dir, 0])

    elif tap == 4: # Cm3
        if tx_dir > 0: # Increase Cm3 
            update_flag, max_flag, min_flag = set_TXFFE_incdec([0, 0, 0, 0, tx_dir])
            if (update_flag==1) and (p2pfix==1): # then increase C0 if p2pfix is enabled
                update_flag, max_flag, min_flag = set_TXFFE_incdec([0, tx_dir, 0, 0, 0])
                if (update_flag==0): # revert back Cm3 if last update is unsucessful
                    update_flag, max_flag, min_flag = set_TXFFE_incdec([0, 0, 0, 0, -tx_dir])
                    if (update_flag==0): # crictical error if unsuccessful 
                        update_flag = -1
                    else: #set the correct flag if revert back is successful 
                        update_flag = 0
        else: # Decrease Cm3
            if (p2pfix==1):  # Decrease C0 first if p2pfix is enabled
                update_flag, max_flag, min_flag = set_TXFFE_incdec([0, tx_dir, 0, 0, 0])
                if (update_flag==1): # then decrease Cm3 if the first update is successful
                    update_flag, max_flag, min_flag = set_TXFFE_incdec([ 0, 0, 0, 0, tx_dir])
                    if (update_flag==0): # revert back C0 if last update is unsucessful
                        update_flag, max_flag, min_flag = set_TXFFE_incdec([0, -tx_dir, 0, 0, 0])
                        if (update_flag==0): # crictical error if unsuccessful 
                            update_flag = -1
                        else: #set the correct flag if revert back is successful 
                            update_flag = 0
            else: # if p2pfix flag is disabled decrease Cm3
                update_flag, max_flag, min_flag = set_TXFFE_incdec([ 0, 0, 0, 0, tx_dir])

    return update_flag, max_flag, min_flag
    
def set_TXFFE_incdec(dir_list):
    global TX_FFE
    TXFFE_step = 1.0/32.0
    # list of min-max coefficient values
    Cxmin = [-0.3, 0.5, -0.3, 0.0, -0.05]
    Cxmax = [ 0.0, 1.0,  0.0, 0.1,  0.0 ]
    sat = [0, 0, 0, 0, 0]
    update_flag = 0
    max_flag = 0
    min_flag = 0
        
    for i in range(len(dir_list)):
        if dir_list[i] == +1:
            if TX_FFE[len(TX_FFE)-1-i]+TXFFE_step <= Cxmax[i]:
                TX_FFE[len(TX_FFE)-1-i] = TX_FFE[len(TX_FFE)-1-i]+TXFFE_step
                if (sum(abs(number) for number in TX_FFE)) > 1.01:
                    TX_FFE[len(TX_FFE)-1-i] = TX_FFE[len(TX_FFE)-1-i]-TXFFE_step
                    update_flag = 0
                else:
                    print('increasing C' + str(1-i))
                    update_flag = 1
            else:
                TX_FFE[len(TX_FFE)-1-i] = Cxmax[i]
                max_flag = 1 #sat[i] = +1
                print('maximum C' + str(1-i))
        elif dir_list[i] == -1:
            if TX_FFE[len(TX_FFE)-1-i]-TXFFE_step >= Cxmin[i]:
                TX_FFE[len(TX_FFE)-1-i] = TX_FFE[len(TX_FFE)-1-i]-TXFFE_step
                if (sum(abs(number) for number in TX_FFE)) > 1.01:
                    TX_FFE[len(TX_FFE)-1-i] = TX_FFE[len(TX_FFE)-1-i]+TXFFE_step
                    update_flag = 0
                else:
                    print('decreasing C' + str(1-i))
                    update_flag = 1

            else:
                TX_FFE[len(TX_FFE)-1-i] = Cxmin[i]
                min_flag = 1 #sat[i] = -1
                print('minimum C' + str(1-i))
        else:
            print('holding C' + str(1-i))
        # request change in an order to get it done

    return update_flag, max_flag, min_flag 

def set_single_TXFFE_incdec(step, tap):
    tx_grad = [0,0,0,0,0]
    sat = 0
    if tap == 1: # C0
        tx_grad[1] = step
        tx_sat = set_TXFFE_incdec(tx_grad)
        sat = tx_sat[1]
    elif tap == 3: # Cm2
        if step > 0:
            tx_grad[1] = -step
        else:
            tx_grad[3] = step
        tx_sat = set_TXFFE_incdec(tx_grad)
        if step > 0:
            tx_grad[1] = 0
            tx_grad[3] = step
        else:
            tx_grad[3] = 0
            tx_grad[1] = -step
        tx_sat = set_TXFFE_incdec(tx_grad)
        sat = tx_sat[3]
    else: # C1, Cm1, Cm3
        if step < 0:
            tx_grad[1] = step
        else:
            tx_grad[tap] = step
        tx_sat = set_TXFFE_incdec(tx_grad)
        if step < 0:
            tx_grad[1] = 0
            tx_grad[tap] = step
        else:
            tx_grad[tap] = 0
            tx_grad[1] = step
        tx_sat = set_TXFFE_incdec(tx_grad)
        sat = tx_sat[tap]

    return sat



# DESIGN DRIVER FUNCTIONS #
# design driver are responsability of digital designers
# provided here as expected use - please check with designers
# reference t_rx_eq.v and t_task_rx_mse.v
def mse_mnt(dtl_sel, len):
    #write('mse_start_lane', 0)
    #write('mse_en_lane', 1)
    #write('reg_mse_ani_adapt_en_lane',0)
    #if dtl_sel:
    #    write('reg_mse_dtl_sel_lane',1)
    #else:
    #    write('reg_mse_dtl_sel_lane',0)
    #write('reg_mse_mode',0)
    #write('reg_mse_cont_mode_lane',0)
    #write('reg_mse_len_lane[3:0]',len)
    #write('reg_mse_rd_req_lane',0)

    #write("reg_mse_start_lane", 1)
    #timeout = 1
    #while(read('reg_mse_done_lane') == 0 and timeout > 0):
    #    time.sleep(0.1)
    #    train_timeout -= 0.1
    
    #if(timeout <= 0):
    #    val = -1
    #else:
    #    write('reg_mse_rd_req_lane',1)
    #    mse = read('reg_mse_val_lane[15:0]')
    #    val = snr_approx(mse)
    #    write('reg_mse_rd_req_lane',0)
    #write('reg_mse_start_lane', 0)
    if dtl_sel:
        val = -1
    else:
        mat_run()
        val = snr_approx(mse)
    return val

# TBD
#def ehm_mnt(dtl_sel, len, ani_init, ani_step, der0_frac, der0_shift):

# basic adc_sig_mnt looking at adc input and maximum 1 threshold
# adc_sig_mnt(diff_mode, diff_sel_eom, diff_adc_sel, random, abs, mode, rot, length, idx) or passing structure
# t_task.sigmnt.sv
def adc_sig_mnt(abs_mode, th1, th2=0):
    reg_len = 8
    #reg_rot = True
    #write('reg_sigmnt_adc_to_dp_start_lane', 0)
    #write('reg_sigmnt_adc_to_dp_in_abs', abs_mode)
    #write('reg_sigmnt_adc_to_dp_mode', th_mode)
    #write('reg_sigmnt_adc_to_dp_rot',reg_rot)
    #write('reg_sigmnt_adc_to_dp_len[3:0]',reg_len) # 2^16 samples
    #write('reg_sigmnt_adc_to_dp_th1[6:0]',th1)
    ##write('reg_sigmnt_adc_to_dp_th2[6:0]',th2)
    ##write('sigmnt_adc_to_dp_diff_sel_eom_lane', sel_eom)
    ##write('sigmnt_adc_to_dp_diff_mode_en_lane', diff_mode)
    ##write('sigmnt_adc_to_dp_diff_adc_sel_lane[2:0]', diff_adc_sel)
    ##write('sigmnt_adc_to_dp_idx_sel_lane[5:0]', idx_sel)

    ##write('reg_sigmnt_adc_to_dp_clk_en_lane',1)
    #write('reg_sigmnt_adc_to_dp_start_lane', 1)
    #timeout = 1
    #while(read('reg_rd_sigmnt_adc_to_dp_done_lane') == 0 and timeout > 0):
    #    time.sleep(0.1)
    #    timeout -= 0.1
    
    #if(timeout <= 0):
    #    val = 0xFFFF
    #else:
    #    if th_mode:
    #        raw = read('reg_rd_sigmnt_adc_to_dp_ave[26:0]')
    #    else:
    #        raw = read('reg_rd_sigmnt_adc_to_dp_cdf_th1[19:0]')
    #        #raw2 = read('reg_rd_sigmnt_adc_to_dp_cdf_th2[19:0]')
    #    val = raw / 2**(8+reg_len) ## a shift depending on accumulation length
    ## define the quantization
    #write('reg_sigmnt_adc_to_dp_start_lane', 0)
    ##write('reg_sigmnt_adc_to_dp_clk_en_lane',0)
    global sat_level, sat
    sat_level = [th1, th2]
    mat_run()
    if abs_mode :
        val_mean = int(sat[0] * 2**9)
        val_th1 = int(sat[1] * 2**16)
        val_th2 = int(sat[2] * 2**16)
    else:
        val_mean = int(sat[3] * 2**9)
        val_th1 = int(sat[4] * 2**16)
        val_th2 = int(sat[5] * 2**16)

    return val_mean,val_th1,val_th2

# identical by shared monitor
# basic adc_sig_mnt looking at adc input and maximum 1 threshold
# sh_sig_mnt(diff_mode, diff_sel_eom, diff_adc_sel, random, abs, mode, rot, length, idx) or passing structure
# t_task.sigmnt.sv
def sh_sig_mnt(abs_mode, th1, th2=0):
    reg_len = 8
    #reg_rot = True
    #reg_sel = 2 # sft_dcs
    #write('reg_sigmnt_shared_start_lane', 0)
    #write('reg_sigmnt_shared_in_abs', abs_mode)
    #write('reg_sigmnt_shared_mode', th_mode)
    #write('reg_sigmnt_shared_sel_lane[2:0]',reg_sel)
    #write('reg_sigmnt_shared_rot',reg_rot)
    #write('reg_sigmnt_shared_len[3:0]',reg_len) # 2^16 samples
    #write('reg_sigmnt_shared_th1[6:0]',th1)
    ##write('reg_sigmnt_shared_th2[6:0]',th2)
    ##write('sigmnt_shared_idx_sel_lane[5:0]', idx_sel)

    ##write('reg_sigmnt_shared_clk_en_lane',1)
    #write('reg_sigmnt_shared_start_lane', 1)
    #timeout = 1
    #while(read('reg_rd_sigmnt_shared_done_lane') == 0 and timeout > 0):
    #    time.sleep(0.1)
    #    timeout -= 0.1
    
    #if(timeout <= 0):
    #    val = 0xFFFF
    #else:
    #    if th_mode:
    #        raw = read('reg_rd_sigmnt_shared_ave[26:0]')
    #    else:
    #        raw = read('reg_rd_sigmnt_shared_cdf_th1[19:0]')
    #        #raw2 = read('reg_rd_sigmnt_shared_cdf_th2[19:0]')
    #    val = raw / 2**(8+reg_len) ## a shift depending on accumulation length
    #write('reg_sigmnt_shared_start_lane', 0)
    ##write('reg_sigmnt_shared_clk_en_lane',0)

    global hlp_set, pwr_hlp
    mat_run()
    if abs_mode: # supporting only average
        if hlp_set < len(pwr_hlp):
            val_mean = int(pwr_hlp[hlp_set] * 2**7)
        else:
            val_mean = -1
            print('not supported configuration index')
        val_th1 = -1
        val_th2 = -1
    else:
        print('not supported mode')
        val_mean = -1
        val_th1 = -1
        val_th2 = -1

    return val_mean, val_th1, val_th2

# both sig_mnt operation
#def both_sig_mnt():
#    adc_sig_mnt_config()
#    adc_sh_sig_mnt_config()

    # wait for both

# channel estimator TBD not currently used in training

# adc sat level at probability
def adc_in_sat_level(abs_mode, probability, prec_shift, level_start, level_step, max_trial):
    adc_in_level = level_start
    for num_trial in range(max_trial):
        _, adc_in_meas, _ = adc_sig_mnt(abs_mode,adc_in_level)
        if (adc_in_meas > probability - probability / 2**prec_shift) and (adc_in_meas < probability + probability / 2**prec_shift):
            break
        elif adc_in_meas > probability:
            adc_in_level = adc_in_level + level_step
        elif adc_in_meas < probability:
            adc_in_level = adc_in_level - level_step
        if adc_in_level > 64: # floating point representation
            adc_in_level = 64
            break
        elif adc_in_level < 0:
            adc_in_level = 0
            break
    return adc_in_level

def adc_in_pkpk(probability = 7): ## 1e-4 is 7
    #probability = 1e-4
    tolerance = 2 #0.25
    adc_in_rms, _, _ = adc_sig_mnt(True,60)
    adc_in_sat_1em4_start = int(adc_in_rms * 3.0 / 2**8) ## sqrt(2/pi)*3.895: mean(abs()) -> sigma -> sigma*3.895 prob 1e-4
    if adc_in_sat_1em4_start > 64:
        adc_in_sat_1em4_start = 60

    adc_in_sat_1em4 = adc_in_sat_level(True, probability, tolerance, adc_in_sat_1em4_start, 1, 16)

    return adc_in_sat_1em4

#
def phase_scan_en(freq_ofst):
    # Turn off DTL
    write('reg_rx_dtl_lpf_frz_lane', 1)
    write('reg_rx_dtl_floop_frz_lane', 1)
    write('reg_dtl_rst_sync_lane', 1)
    write('reg_dtl_rst_lane', 0)
    
    # Set ppm to sweep phase
    write('rx_dtl_freq_ofst_lane[15:0]', freq_ofst)
    write('rx_dtl_freq_ofst_valid_lane', 1)
    write('rx_dtl_freq_ofst_valid_lane', 0)

def phase_scan_dis():
    # Turn off sweep
    write('rx_dtl_freq_ofst_lane[15:0]', 0)
    write('rx_dtl_freq_ofst_valid_lane', 0)
    write('rx_dtl_freq_ofst_valid_lane', 1)
    write('rx_dtl_freq_ofst_valid_lane', 0)

    ## turn on DTL
    #write('reg_rx_dtl_lpf_frz_lane', 0)
    #write('reg_rx_dtl_floop_frz_lane', 0)
    #write('reg_dtl_rst_sync_lane', 0)
    
    # Set ppm to sweep phase

def set_dp_hp(num_set):
    ffe_hp = [[0,-56,16,-6,-10,-7,-3,0,1,1,0,0], \
                 [15,-49,-51,31,-14,3,2,-3,3,-2,1,0]]
    gain_hp = [240, 196]
    #write('reg_rx_dp_lms_ffe_pre8_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_pre7_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_pre6_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_pre5_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_pre4_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_pre3_ext_lane[3:0]', 0)
    #write('reg_rx_dp_lms_ffe_pre2_ext_lane[4:0]', ffe_hp[num_set][0])
    #write('reg_rx_dp_lms_ffe_pre1_ext_lane[6:0]', ffe_hp[num_set][1])
    #write('reg_rx_dp_lms_ffe_pst1_ext_lane[6:0]', ffe_hp[num_set][2])
    #write('reg_rx_dp_lms_ffe_pst2_ext_lane[5:0]', ffe_hp[num_set][3])
    #write('reg_rx_dp_lms_ffe_pst3_ext_lane[4:0]', ffe_hp[num_set][4])
    #write('reg_rx_dp_lms_ffe_pst4_ext_lane[3:0]', ffe_hp[num_set][5])
    #write('reg_rx_dp_lms_ffe_pst5_ext_lane[3:0]', ffe_hp[num_set][6])
    #write('reg_rx_dp_lms_ffe_pst6_ext_lane[3:0]', ffe_hp[num_set][7])
    #write('reg_rx_dp_lms_ffe_pst7_ext_lane[2:0]', ffe_hp[num_set][8])
    #write('reg_rx_dp_lms_ffe_pst8_ext_lane[2:0]', ffe_hp[num_set][9])
    #write('reg_rx_dp_lms_ffe_pst9_ext_lane[2:0]', ffe_hp[num_set][10])
    #write('reg_rx_dp_lms_ffe_pst10_ext_lane[2:0]', ffe_hp[num_set][11])
    #write('reg_rx_dp_lms_ffe_pst11_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_pst12_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_pst13_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_pst14_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_pst15_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_pst16_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_pst17_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_pst18_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_pst19_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_pst20_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_flt1_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_flt2_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_flt3_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_flt4_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_flt5_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_flt6_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_flt7_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_flt8_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_gain_ext_lane[10:4]', gain_hp[num_set] >> 4)
    #write('reg_rx_dp_lms_gain_ext_lane[3:0]', gain_hp[num_set] & 0xf)
    #write('reg_rx_dp_lms_blw_ext_lane[5:0]', 0) # TBD: probably set slightly positive
    #write('reg_rx_dp_lms_dfe_ext_lane[5:0]', 0)

    #write('reg_rx_dp_lms_top_ld_lane', 1)
    global hlp_set
    hlp_set = num_set

def set_dp_lp(num_set):
    #ffe_lp = [[15,58,38,13,0,-4,-4,-2,0,0,0,0], \
    #             [15,48,53,31,15,6,-1,-3,-3,-2,-1,-1]]
    #gain_lp = [196, 196]
    #print('set_dp_lp TBD')
    #write('reg_rx_dp_lms_ffe_pre8_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_pre7_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_pre6_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_pre5_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_pre4_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_pre3_ext_lane[3:0]', 0)
    #write('reg_rx_dp_lms_ffe_pre2_ext_lane[4:0]', ffe_lp[num_set][0])
    #write('reg_rx_dp_lms_ffe_pre1_ext_lane[6:0]', ffe_lp[num_set][1])
    #write('reg_rx_dp_lms_ffe_pst1_ext_lane[6:0]', ffe_lp[num_set][2])
    #write('reg_rx_dp_lms_ffe_pst2_ext_lane[5:0]', ffe_lp[num_set][3])
    #write('reg_rx_dp_lms_ffe_pst3_ext_lane[4:0]', ffe_lp[num_set][4])
    #write('reg_rx_dp_lms_ffe_pst4_ext_lane[3:0]', ffe_lp[num_set][5])
    #write('reg_rx_dp_lms_ffe_pst5_ext_lane[3:0]', ffe_lp[num_set][6])
    #write('reg_rx_dp_lms_ffe_pst6_ext_lane[3:0]', ffe_lp[num_set][7])
    #write('reg_rx_dp_lms_ffe_pst7_ext_lane[2:0]', ffe_lp[num_set][8])
    #write('reg_rx_dp_lms_ffe_pst8_ext_lane[2:0]', ffe_lp[num_set][9])
    #write('reg_rx_dp_lms_ffe_pst9_ext_lane[2:0]', ffe_lp[num_set][10])
    #write('reg_rx_dp_lms_ffe_pst10_ext_lane[2:0]', ffe_lp[num_set][11])
    #write('reg_rx_dp_lms_ffe_pst11_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_pst12_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_pst13_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_pst14_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_pst15_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_pst16_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_pst17_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_pst18_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_pst19_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_pst20_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_flt1_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_flt2_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_flt3_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_flt4_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_flt5_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_flt6_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_flt7_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_ffe_flt8_ext_lane[2:0]', 0)
    #write('reg_rx_dp_lms_gain_ext_lane[10:4]', gain_lp[num_set] >> 4)
    #write('reg_rx_dp_lms_gain_ext_lane[3:0]', gain_lp[num_set] & 0xf)
    #write('reg_rx_dp_lms_blw_ext_lane[5:0]', 0) # TBD: probably set slightly positive
    #write('reg_rx_dp_lms_dfe_ext_lane[5:0]', 0)

    #write('reg_rx_dp_lms_top_ld_lane', 1)
    global hlp_set
    hlp_set = 3+num_set

# cds
# DSP spec section 3
def cds(cds_table = 'default', cds_reset_state_en = 1, cds_load_dtl_lms_en = 0,
        cds_dtl_blind_state_en = 1, cds_dtl_eql_state_en = 1, cds_dtl_coarse_state_en = 1, 
        cds_dtl_fine_state_en = 1, cds_dtl_accu_state_en = 1, cds_load_dp_lms_en = 0,
        cds_dp_blind_state_en = 1, cds_dp_coarse_state_en = 1, cds_dp_fine_state_en = 1,
        cds_dp_accu_state_en = 1, cds_save_state_en = 1, cds_dtl_phase_scan_en = 1, cds_dtl_phase_scan_ppm = 0x8000):
    
    mat_run()
    #if dtl_en:
    #    print('cds dtl_en TBD')
    #if dp_en:
    #    print('cds dp_en TBD')

def read_ffe_dtl():
    read('ffe_dtl')
    return ffe_dtl

def check_cdr_lock():
    cdr_lock1 = 1 #read('lock_indicator1')
    cdr_lock2 = 1 #read('lock_indicator2')

    return cdr_lock1 == 1 and cdr_lock2 == 1

def set_lms_continous():
    write('reg_rx_dp_lms_top_en_lane',1)
    write('reg_rx_dtl_lms_top_en_lane',1)

def read_mse():
    #read('mse')
    global mse
    return mse

def read_tx_ffe():
    global TX_FFE
    return TX_FFE

def read_gain_coarse():
    global ctle_gain_coarse
    return ctle_gain_coarse
