from numpy import log2
from math import floor
#from enum import Enum

# dummy register read/write
#from dummy_reg_drivers import *
from matlab_reg_drivers import *
# real chip controls
# from cap2 import read, write

# dummy ctle state control
ctle_R = 0
ctle_C = 0
ctle_gain_coarse = 6 # programmable
use_table = 0

# TX FFE Train varaibles
READY = 0
UPDATED = 1
MIN = 2
MAX = 3
ST_HOLD = 0
ST_INC = 1
ST_DEC = 2
ST_NO_EQ = 3
# TX FFE Preset 
CE_NORMAL = 0
CE_REF1 = 0x0400
CE_REF2 = 0x0800
CE_NO_EQ = 0x0C00


# function to initialize
def train_init():
    reset_time()
    mat_init()
    print "Training started"

# function to stop
def train_close():
    print "Training completed"
    print("Elapsed time " + str(get_time()) + " us")

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
    
# analog ctle DC control 
# step: code step
def ctle_R_incdec(step):
    Rmin = 0
    Rmax = 13 # can be programmed
    sat_ind = 0

    global ctle_R, ctle_gain_coarse
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
    set_ctle(ctle_R, ctle_C, ctle_gain_coarse)
    return sat_ind

# analog ctle peak control
# iscode: True, change by code; False, change by 0.5dB/step 
# step: step
def ctle_C_incdec(step, iscode=False):
    Cmin = 0
    Cmax = 124 # max number of code
    sat_ind = 0
    # half-dB step of peak-gain mapping
    # [[code1, delta1], [code2, delta2], ...]
    C_diff = [[12, 2], [42, 3], [80, 5], [100, 10], [125, 20]]
    #C_map = [0,2,5,7,10,13,16,18,20,23,25,27,30,32,34,36,39,42,47,53,61,63,66,69,74,80,92,105,124]

    global ctle_C, ctle_gain_coarse
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
    set_ctle(ctle_R, ctle_C, ctle_gain_coarse)

    return sat_ind


def set_ctle(R,C,gain_coarse,use_table = 0):
    global ctle_R
    global ctle_C
    global ctle_gain_coarse
    ctle_R = R
    ctle_C = C
    ctle_gain_coarse = gain_coarse

    if use_table:
        # one-dB step of DC-gain mapping
        #R_ma
        # half-dB step of peak-gain mapping
        C_map = [0,2,5,7,10,13,16,18,20,23,25,27,30,32,34,36,39,42,47,53,61,63,66,69,74,80,92,105,124]
        ctle_C = C_map[C]

    # gain-coarse
    write('rx_ctle_gain_coarse_lane[3:0]', ctle_gain_coarse)

    # DC gain
    if ctle_R < 16:
        write('rx_ctle_rs1_ctrl_lane[3:0]', ctle_R)
        write('rx_ctle_rs2_ctrl_lane[4:0]', 0)
    else:
        write('rx_ctle_rs1_ctrl_lane[3:0]', 15)
        write('rx_ctle_rs2_ctrl_lane[4:0]', ctle_R-15)
    
    # Peak gain
    rsv_msbs = read('rx_top_rsv_lane[7:0]') & 0xf0
    if ctle_C < 16:
        write('rx_top_rsv_lane[7:0]', rsv_msbs | int(15-ctle_C))
        write('rx_ctle_cl1_ctrl_lane[3:0]', 15)
        write('rx_ctle_cs1_ctrl_lane[5:0]', 0)
        write('rx_ctle_cs2_ctrl_lane[4:0]', 0)
    elif ctle_C < 31:
        write('rx_top_rsv_lane[7:0]', rsv_msbs)
        write('rx_ctle_cl1_ctrl_lane[3:0]', 15 - (ctle_C-15))
        write('rx_ctle_cs1_ctrl_lane[5:0]', 0)
        write('rx_ctle_cs2_ctrl_lane[4:0]', 0)
    elif ctle_C < 62:
        write('rx_top_rsv_lane[7:0]', rsv_msbs)
        write('rx_ctle_cl1_ctrl_lane[3:0]', 0)
        write('rx_ctle_cs1_ctrl_lane[5:0]', ctle_C-30) #CS1A
        write('rx_ctle_cs2_ctrl_lane[4:0]', 0)
    elif ctle_C < 93:
        write('rx_top_rsv_lane[7:0]', rsv_msbs)
        write('rx_ctle_cl1_ctrl_lane[3:0]', 0)
        write('rx_ctle_cs1_ctrl_lane[5:0]', 31)
        write('rx_ctle_cs2_ctrl_lane[4:0]', ctle_C-61)
    else:
        write('rx_top_rsv_lane[7:0]', rsv_msbs)
        write('rx_ctle_cl1_ctrl_lane[3:0]', 0)
        write('rx_ctle_cs1_ctrl_lane[5:0]', 31+(ctle_C-92)) #CS1B
        write('rx_ctle_cs2_ctrl_lane[4:0]', 31)
    print('CTLE: set R=' + str(ctle_R) + ' C=' + str(ctle_C) + ' gain_coarse=' + str(ctle_gain_coarse))

def get_ctle():
    global ctle_R
    global ctle_C
    global ctle_gain_coarse
    return [ctle_R, ctle_C, ctle_gain_coarse]

# remote Tx control
def set_TXFFE_tap(tap, tx_dir, p2pfix):
    update_flag = 0
    max_flag = 0
    min_flag = 0
    READY = 0

    global ST_HOLD, ST_INC, ST_DEC

    if tx_dir == 0:
        return update_flag, max_flag, min_flag

    if (tap == 1) and (p2pfix==0): # update C0 standalone only when p2pfix flag is disabled
        if tx_dir > 0: #increase C0
            update_flag, max_flag, min_flag = req_local_ctrl(CE_NORMAL, ST_HOLD, ST_INC, ST_HOLD, ST_HOLD)
        else: 
            update_flag, max_flag, min_flag = req_local_ctrl(CE_NORMAL, ST_HOLD, ST_DEC, ST_HOLD, ST_HOLD)

    
    elif tap == 0: # C1
        if tx_dir > 0: # Increase C1 
            update_flag, max_flag, min_flag = req_local_ctrl(CE_NORMAL, ST_INC, ST_HOLD, ST_HOLD, ST_HOLD) 
            if (update_flag==1) and (p2pfix==1): # then increase C0 if p2pfix is enabled
                update_flag, max_flag, min_flag = req_local_ctrl(CE_NORMAL, ST_HOLD, ST_INC, ST_HOLD, ST_HOLD)
                if (update_flag==0): # revert back C1 if last update is unsucessful
                    update_flag, max_flag, min_flag = req_local_ctrl(CE_NORMAL, ST_DEC, ST_HOLD, ST_HOLD, ST_HOLD) 
                    if (update_flag==0): # crictical error if unsuccessful 
                        update_flag = -1
                    else: #set the correct flag if revert back is successful 
                        update_flag = 0
        else: # Decrease C1
            if (p2pfix==1):  # Decrease C0 first if p2pfix is enabled
                update_flag, max_flag, min_flag = req_local_ctrl(CE_NORMAL, ST_HOLD, ST_DEC, ST_HOLD, ST_HOLD)
                if (update_flag==1): # then decrease C1 if the first update is successful
                    update_flag, max_flag, min_flag = req_local_ctrl(CE_NORMAL, ST_DEC, ST_HOLD, ST_HOLD, ST_HOLD)
                    if (update_flag==0): # revert back C0 if last update is unsucessful
                        update_flag, max_flag, min_flag = req_local_ctrl(CE_NORMAL, ST_HOLD, ST_INC, ST_HOLD, ST_HOLD)
                        if (update_flag==0): # crictical error if unsuccessful 
                            update_flag = -1
                        else: #set the correct flag if revert back is successful 
                            update_flag = 0
            else: # if p2pfix flag is disabled decrease C1
                update_flag, max_flag, min_flag = req_local_ctrl(CE_NORMAL, ST_DEC, ST_HOLD, ST_HOLD, ST_HOLD)

    elif tap == 2: # Cm1
        if tx_dir > 0: # Increase Cm1 
            update_flag, max_flag, min_flag = req_local_ctrl(CE_NORMAL, ST_HOLD, ST_HOLD, ST_INC, ST_HOLD)
            if (update_flag==1) and (p2pfix==1): # then increase C0 if p2pfix is enabled
                update_flag, max_flag, min_flag = req_local_ctrl(CE_NORMAL, ST_HOLD, ST_INC, ST_HOLD, ST_HOLD)
                if (update_flag==0): # revert back Cm1 if last update is unsucessful
                    update_flag, max_flag, min_flag = req_local_ctrl(CE_NORMAL, ST_HOLD, ST_HOLD, ST_DEC, ST_HOLD)
                    if (update_flag==0): # crictical error if unsuccessful 
                        update_flag = -1
                    else: #set the correct flag if revert back is successful 
                        update_flag = 0
        else: # Decrease Cm1
            if (p2pfix==1):  # Decrease C0 first if p2pfix is enabled
                update_flag, max_flag, min_flag = req_local_ctrl(CE_NORMAL, ST_HOLD, ST_DEC, ST_HOLD, ST_HOLD)
                if (update_flag==1): # then decrease Cm1 if the first update is successful
                    update_flag, max_flag, min_flag = req_local_ctrl(CE_NORMAL, ST_HOLD, ST_HOLD, ST_DEC, ST_HOLD)
                    if (update_flag==0): # revert back C0 if last update is unsucessful
                        update_flag, max_flag, min_flag = req_local_ctrl(CE_NORMAL, ST_HOLD, ST_INC, ST_HOLD, ST_HOLD)
                        if (update_flag==0): # crictical error if unsuccessful 
                            update_flag = -1
                        else: #set the correct flag if revert back is successful 
                            update_flag = 0
            else: # if p2pfix flag is disabled decrease Cm1
                update_flag, max_flag, min_flag = req_local_ctrl(CE_NORMAL, ST_HOLD, ST_HOLD, ST_DEC, ST_HOLD)

    elif tap == 3: # Cm2
        if tx_dir < 0: # Decrease Cm2
            update_flag, max_flag, min_flag = req_local_ctrl(CE_NORMAL, ST_HOLD, ST_HOLD, ST_HOLD, ST_DEC)
            if (update_flag==1) and (p2pfix==1): # then increase C0 if p2pfix is enabled
                update_flag, max_flag, min_flag = req_local_ctrl(CE_NORMAL, ST_HOLD, ST_INC, ST_HOLD, ST_HOLD)
                if (update_flag==0): # revert back Cm2 if last update is unsucessful
                    update_flag, max_flag, min_flag = req_local_ctrl(CE_NORMAL, ST_HOLD, ST_HOLD, ST_HOLD, ST_INC)
                    if (update_flag==0): # crictical error if unsuccessful 
                        update_flag = -1
                    else: #set the correct flag if revert back is successful 
                        update_flag = 0
        else: # increase Cm2
            #TO DO: update_gn2(tx_dir, p2pfix)
            if (p2pfix==1):  # Decrease C0 first if p2pfix is enabled
                update_flag, max_flag, min_flag = req_local_ctrl(CE_NORMAL, ST_HOLD, ST_DEC, ST_HOLD, ST_HOLD)
                if (update_flag==1): # then increase Cm2 if the first update is successful
                    update_flag, max_flag, min_flag = req_local_ctrl(CE_NORMAL, ST_HOLD, ST_HOLD, ST_HOLD, ST_INC)
                    if (update_flag==0): # revert back C0 if last update is unsucessful
                        update_flag, max_flag, min_flag = req_local_ctrl(CE_NORMAL, ST_HOLD, ST_INC, ST_HOLD, ST_HOLD)
                        if (update_flag==0): # crictical error if unsuccessful 
                            update_flag = -1
                        else: #set the correct flag if revert back is successful 
                            update_flag = 0
            else: # if p2pfix flag is disabled increase Cm2
                update_flag, max_flag, min_flag = req_local_ctrl(CE_NORMAL, ST_HOLD, ST_HOLD, ST_HOLD, ST_INC)

    return update_flag, max_flag, min_flag

# remote Tx control
def set_TXFFE_tap_depreciated(tap, tx_dir, p2pfix):
    update_flag = 0
    max_flag = 0
    min_flag = 0

    if tx_dir == 0:
        return update_flag, max_flag, min_flag

    if (tap == 1) and (p2pfix==0): # update C0 standalone only when p2pfix flag is disabled
        update_flag, max_flag, min_flag = update_g0(tx_dir, p2pfix)
    
    elif tap == 0: # C1
        update_flag, max_flag, min_flag = update_g1(tx_dir, p2pfix)

    elif tap == 2: # Cm1
        update_flag, max_flag, min_flag = update_gn1(tx_dir, p2pfix)

    elif tap == 3: # Cm2
         update_flag, max_flag, min_flag = update_gn2(tx_dir, p2pfix)

    elif tap == 4: # Cm3
        update_flag, max_flag, min_flag = update_gn3(tx_dir, p2pfix)

    return update_flag, max_flag, min_flag


def update_g0(update, p2pfix):          
	cnt = 16

	if (update > 0 and tx.g0_is_max==0):
		cnt = cnt - 1
		while cnt >= 0:
			if(update > 0 and  tx.g0_is_max==0):
				req_local_ctrl(CE_NORMAL, 0, 1, 0, 0)	
				if(cmx_PIPE4_EN==0 or tx.g0_is_max==0):
					train.g0_index = train.g0_index + 1
					update = update - 1		               
			else: 
				##dfe_cdr_phase_opt();
				break						
		
	elif(update < 0 and tx.g0_is_min==0):
		cnt = cnt - 1 
		while(cnt >= 0): 
			if(update < 0 and tx.g0_is_min==0): 
				req_local_ctrl(CE_NORMAL, 0, 2, 0, 0)
				if(tx.g0_is_min==0 or cmx_PIPE4_EN==0):
					update = update + 1
					train.g0_index = train.g0_index -1
			else: 
				#dfe_cdr_phase_opt()
			   break
	return update_flag, tx.g0_is_max, tx.g0_is_min

def update_gn1(update, tag_TX_TRAIN_P2P_HOLD):
	cnt = 16
	if (update > 0 and tx.gn1_is_max==0):
		cnt = cnt - 1
		while(cnt>0):		
			if(update >0 and tx.gn1_is_max==0):
				req_local_ctrl(CE_NORMAL, 0, 0, 2, 0)		
				if(tag_TX_TRAIN_P2P_HOLD):
					req_local_ctrl(CE_NORMAL, 0, 1, 0, 0)		
								
				if(tx.gn1_is_max==0 or cmx_PIPE4_EN==0):
					update = update - 1 
					train.gn1_index = train.gn1_index + 1 
					train.g0_index -= tag_TX_TRAIN_P2P_HOLD;
				
			
			else: 
				##dfe_cdr_phase_opt();
				##DBG_Printf(" g-1max");
				break
			
		
				
	elif (update < 0 and tx.gn1_is_min==0):
		cnt = cnt -1
		while(cnt>0):
			if(update <0 and tx.gn1_is_min==0):
				req_local_ctrl(CE_NORMAL, 0, 0, 1, 0)		
				if(tag_TX_TRAIN_P2P_HOLD):
					req_local_ctrl(CE_NORMAL, 0, 2, 0, 0)	
	
				if(tx.gn1_is_min==0 or cmx_PIPE4_EN==0):
					update = update + 1
					train.gn1_index = train.gn1_index - 1 
					train.g0_index += 1 if tag_TX_TRAIN_P2P_HOLD == 1 else 0
			else:
				##dfe_cdr_phase_opt();
				##DBG_Printf(" g-1min");
				break;
	return update_flag, tx.gn1_is_max, tx.gn1_is_min


def set_TXFFE_preset(num_preset):
    # code to set one of the preset
    print('set TX preset ' + str(num_preset))
    set_lms_continous()
    req_local_ctrl(num_preset, 0, 0, 0, 0)
    # for matlab use only
    mat_TXFFE_preset(num_preset)
    # do we have to disble the continuous mode
    disable_lms_continous()
    
def set_TXFFE_incdec(dir_list):
    # list of min-max coefficient values
#    Cxmin = [-0.3, 0.5, -0.3, 0.0, -0.05]
#    Cxmax = [ 0.0, 1.0,  0.0, 0.1,  0.0 ]
    update_flag = 0
    max_flag = 0
    min_flag = 0
    for i in range(len(dir_list)):
        if dir_list[i] == +1:
            print('increasing C' + str(1-i))
            update_flag = 1
            max_flag = 0
        elif dir_list[i] == -1:
            update_flag = 1
            min_flag = 0
            print('decreasing C' + str(1-i))
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
    write('mse_start_lane', 0)
    write('mse_en_lane', 1)
    write('mse_ani_adapt_en_lane',0)
    if dtl_sel:
        write('mse_dtl_sel_lane',1)
    else:
        write('mse_dtl_sel_lane',0)
    write('mse_mode',0)
    write('mse_cont_mode_lane',0)
    write('mse_len_lane[3:0]',len)
    write('mse_rd_req_lane',0)

    write("mse_start_lane", 1)

    if while_wait('mse_done_lane',1000) <= 0:
        val = -1
    else:
        # run MATLAB
        mat_run()
        write('mse_rd_req_lane',1)
        mse = read('mse_val_lane[15:0]')
        val = snr_approx(mse)
        write('mse_rd_req_lane',0)
    write('mse_start_lane', 0)

    return val

# TBD
#def ehm_mnt(dtl_sel, len, ani_init, ani_step, der0_frac, der0_shift):

# basic adc_sig_mnt looking at adc input and maximum 1 threshold
# adc_sig_mnt(diff_mode, diff_sel_eom, diff_adc_sel, random, abs, mode, rot, length, idx) or passing structure
# t_task.sigmnt.sv
def adc_sig_mnt(abs_mode, th1, th2=0):
    len = 8
    rot = True
    write('sigmnt_adc_to_dp_start_lane', 0)
    if abs_mode:
        write('sigmnt_adc_to_dp_in_abs_lane', 1)
    else:
        write('sigmnt_adc_to_dp_in_abs_lane', 0)
    #write('sigmnt_adc_to_dp_mode', th_mode)
    write('sigmnt_adc_to_dp_rot_lane',rot)
    write('sigmnt_adc_to_dp_len_lane[3:0]',len) # 2^16 samples
    write('sigmnt_adc_to_dp_th1_lane[6:0]',th1)
    write('sigmnt_adc_to_dp_th2_lane[6:0]',th2)
    #write('sigmnt_adc_to_dp_diff_sel_eom_lane', sel_eom)
    #write('sigmnt_adc_to_dp_diff_mode_en_lane', diff_mode)
    #write('sigmnt_adc_to_dp_diff_adc_sel_lane[2:0]', diff_adc_sel)
    #write('sigmnt_adc_to_dp_idx_sel_lane[5:0]', idx_sel)

    #write('sigmnt_adc_to_dp_clk_en_lane',1)
    write('sigmnt_adc_to_dp_start_lane', 1)

    if while_wait('sigmnt_adc_to_dp_done_lane',1000) <= 0:
        val_mean = 0xFFFF
        val_th1 = 0xFFFF
        val_th2 = 0xFFFF
    else:
        # run MATLAB
        mat_run()
        #raw_mean = read('sigmnt_adc_to_dp_ave[26:0]')
        #val_mean = int(raw_mean / 2**(8+len) * 2**9) ## a shift depending on accumulation length
        raw_mean_26_19 = read('sigmnt_adc_to_dp_ave_lane[26:19]')
        raw_mean_18_11 = read('sigmnt_adc_to_dp_ave_lane[18:11]')
        raw_mean_10_3 = read('sigmnt_adc_to_dp_ave_lane[10:3]')
        raw_mean_2_0 = read('sigmnt_adc_to_dp_ave_lane[2:0]')
        val_mean = int((float(raw_mean_26_19 * 2**19 + raw_mean_18_11 * 2**11 + raw_mean_10_3 * 2**3 + raw_mean_2_0) / 2**(8+len)) * 2**9) ## a shift depending on accumulation length
        #val_mean = int(int(raw_mean_26_19/ 2**19) & (2**(26-19+1)-1)  + int(raw_mean_18_11/ 2**11) & (2**(18-11+1)-1)
        #              + int(raw_mean_10_3/ 2**3) & (2**(10-3+1)-1) + int(raw_mean_2_0/ 2**0) & (2**(2-0+1)-1) )
        #raw_th1 = read('sigmnt_adc_to_dp_cdf_th1[19:0]')
        #val_th1 = int(raw_th1 / 2**(8+len) * 2**16) ## a shift depending on accumulation length
        raw_th1_19_12 = read('sigmnt_adc_to_dp_cdf_th1_lane[19:12]')
        raw_th1_11_4 = read('sigmnt_adc_to_dp_cdf_th1_lane[11:4]')
        raw_th1_3_0 = read('sigmnt_adc_to_dp_cdf_th1_lane[3:0]')
        val_th1 = int((float(raw_th1_19_12 * 2**12 + raw_th1_11_4 * 2**4 + raw_th1_3_0) / 2**(8+len)) * 2**16) ## a shift depending on accumulation length
        #raw_th2 = read('sigmnt_adc_to_dp_cdf_th2[19:0]')
        #val_th2 = int(raw_th2 / 2**(8+len) * 2**16) ## a shift depending on accumulation length
        raw_th2_19_16 = read('sigmnt_adc_to_dp_cdf_th2_lane[19:16]')
        raw_th2_15_8 = read('sigmnt_adc_to_dp_cdf_th2_lane[15:8]')
        raw_th2_7_0 = read('sigmnt_adc_to_dp_cdf_th2_lane[7:0]')
        val_th2 = int((float(raw_th2_19_16 * 2**16 + raw_th2_15_8 * 2**8 + raw_th2_7_0)/ 2**(8+len)) * 2**16) ## a shift depending on accumulation length
    # define the quantization
    write('sigmnt_adc_to_dp_start_lane', 0)
    #write('sigmnt_adc_to_dp_clk_en_lane',0)

    return val_mean, val_th1, val_th2

# identical by shared monitor
# basic adc_sig_mnt looking at adc input and maximum 1 threshold
# sh_sig_mnt(diff_mode, diff_sel_eom, diff_adc_sel, random, abs, mode, rot, length, idx) or passing structure
# t_task.sigmnt.sv
def sh_sig_mnt(abs_mode, th1, th2=0):
    len = 8
    rot = True
    sel = 2 # sft_dcs
    write('sigmnt_shared_start_lane', 0)
    write('sigmnt_shared_in_abs_lane', abs_mode)
    #write('sigmnt_shared_mode', th_mode)
    write('sigmnt_shared_sel_lane[2:0]',sel)
    write('sigmnt_shared_rot_lane',rot)
    write('sigmnt_shared_len_lane[3:0]',len) # 2^16 samples
    #write('sigmnt_shared_th1[6:0]',th1)
    write('sigmnt_shared_th1_lane[7:0]',th1 & 0xff)
    write('sigmnt_shared_th1_lane[8]',int(th1 / 2**8))
    #write('sigmnt_shared_th2[6:0]',th2)
    write('sigmnt_shared_th2_lane[7:0]',th2 & 0xff)
    write('sigmnt_shared_th2_lane[8]',int(th2 / 2**8))
    #write('sigmnt_shared_idx_sel_lane[5:0]', idx_sel)

    #write('sigmnt_shared_clk_en_lane',1)
    write('sigmnt_shared_start_lane', 1)
    
    if while_wait('sigmnt_shared_done_lane',1000) <= 0:
        val_mean = 0xFFFF
        val_th1 = 0xFFFF
        val_th2 = 0xFFFF
    else:
        # run MATLAB
        mat_run()
        #raw_mean = read('sigmnt_shared_ave[28:0]')
        #val_mean = int(raw_mean / 2**(8+len) * 2**7) ## a shift depending on accumulation length
        raw_mean_28_21 = read('sigmnt_shared_ave_lane[28:21]')
        raw_mean_20_13 = read('sigmnt_shared_ave_lane[20:13]')
        raw_mean_12_5 = read('sigmnt_shared_ave_lane[12:5]')
        raw_mean_4_0 = read('sigmnt_shared_ave_lane[4:0]')
        val_mean = int( (float(raw_mean_28_21 * 2**21 + raw_mean_20_13 * 2**13 + raw_mean_12_5 * 2**5 + raw_mean_4_0) / 2**(8+len)) * 2**7) ## a shift depending on accumulation length
        #raw_th1 = read('sigmnt_shared_cdf_th1[19:0]')
        #val_th1 = int(raw_th1 / 2**(8+len) * 2**16) ## a shift depending on accumulation length
        raw_th1_19_12 = read('sigmnt_shared_cdf_th1_lane[19:12]')
        raw_th1_11_4 = read('sigmnt_shared_cdf_th1_lane[11:4]')
        raw_th1_3_0 = read('sigmnt_shared_cdf_th1_lane[3:0]')
        val_th1 = int( (float(raw_th1_19_12 * 2**12 + raw_th1_11_4 * 2**4 + raw_th1_3_0) / 2**(8+len)) * 2**16) ## a shift depending on accumulation length
        #raw_th2 = read('sigmnt_shared_cdf_th2[19:0]')
        #val_th2 = int(raw_th2 / 2**(8+len) * 2**16) ## a shift depending on accumulation length
        raw_th2_19_12 = read('sigmnt_shared_cdf_th2_lane[19:12]')
        raw_th2_11_4 = read('sigmnt_shared_cdf_th2_lane[11:4]')
        raw_th2_3_0 = read('sigmnt_shared_cdf_th2_lane[3:0]')
        val_th2 = int( (float(raw_th2_19_12 * 2**12 + raw_th2_11_4 * 2**4 + raw_th2_3_0) / 2**(8+len)) * 2**16) ## a shift depending on accumulation length

    write('sigmnt_shared_start_lane', 0)
    #write('sigmnt_shared_clk_en_lane',0)

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
        if adc_in_level > 1.0: # floating point representation
            adc_in_level = 1.0
            break
        elif adc_in_level < 0.0:
            adc_in_level = 0.0
            break
    return adc_in_level

def adc_in_pkpk(probability = 7): # 7/2**16~1E-4
    #probability = 1e-4
    tolerance_shift = 2 #0.25
    adc_in_rms, _, _ = adc_sig_mnt(True,60)
    adc_in_sat_1em4_start = int(adc_in_rms * 3.0 / 2**9) ## sqrt(2/pi)*3.895: mean(abs()) -> sigma -> sigma*3.895 prob 1e-4
    if adc_in_sat_1em4_start > 64:
        adc_in_sat_1em4_start = 60

    adc_in_sat_1em4 = adc_in_sat_level(True, probability, tolerance_shift, adc_in_sat_1em4_start, 1, 16)

    return adc_in_sat_1em4

#
def phase_scan_en(freq_ofst):
    # Turn off DTL
    write('dtl_rst_lane', 1)
    write('rx_dtl_lpf_frz_lane', 1)
    write('rx_dtl_floop_frz_lane', 1)
    write('dtl_rst_sync_lane', 1)
    write('dtl_rst_lane', 0)
    
    # Set ppm to sweep phase
    write('rx_dtl_freq_ofst_lane[15:0]', freq_ofst)
    write('rx_dtl_freq_ofst_valid_lane', 1)
    write('rx_dtl_freq_ofst_valid_lane', 0)

def phase_scan_dis():
    # Turn off sweep
    write('rx_dtl_freq_ofst_lane[15:0]', 0)
    #write('rx_dtl_freq_ofst_valid_lane', 0)
    write('rx_dtl_freq_ofst_valid_lane', 1)
    write('rx_dtl_freq_ofst_valid_lane', 0)

    ## turn on DTL
    #write('rx_dtl_lpf_frz_lane', 0)
    #write('rx_dtl_floop_frz_lane', 0)
    #write('dtl_rst_sync_lane', 0)
    
    # Set ppm to sweep phase

def dtl_start():
    write('rx_dtl_lpf_frz_lane', 0)
    write('rx_dtl_floop_frz_lane', 0)
    write('dtl_rst_sync_lane', 0)


def set_dp_hp(num_set):
    """
    High/Band-pass FFE shape coefficient
    for RX blind training and TX FFE preset selection

    Values: Tables 20, 22, 26
    """
    ffe_hp = [[0,-56,16,-6,-10,-7,-3,0,1,1,0,0], \
                 [15,-49,-51,31,-14,3,2,-3,3,-2,1,0],\
                 [-15,-21,-21,-25,10,0,8,-3,0,-3,1,2]]
    gain_hp = [240, 196, 280]
    write('rx_dp_lms_ffe_pre8_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_pre7_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_pre6_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_pre5_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_pre4_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_pre3_ext_lane[3:0]', 0)
    write('rx_dp_lms_ffe_pre2_ext_lane[4:0]', ffe_hp[num_set][0])
    write('rx_dp_lms_ffe_pre1_ext_lane[6:0]', ffe_hp[num_set][1])
    write('rx_dp_lms_ffe_pst1_ext_lane[6:0]', ffe_hp[num_set][2])
    write('rx_dp_lms_ffe_pst2_ext_lane[5:0]', ffe_hp[num_set][3])
    write('rx_dp_lms_ffe_pst3_ext_lane[4:0]', ffe_hp[num_set][4])
    write('rx_dp_lms_ffe_pst4_ext_lane[3:0]', ffe_hp[num_set][5])
    write('rx_dp_lms_ffe_pst5_ext_lane[3:0]', ffe_hp[num_set][6])
    write('rx_dp_lms_ffe_pst6_ext_lane[3:0]', ffe_hp[num_set][7])
    write('rx_dp_lms_ffe_pst7_ext_lane[2:0]', ffe_hp[num_set][8])
    write('rx_dp_lms_ffe_pst8_ext_lane[2:0]', ffe_hp[num_set][9])
    write('rx_dp_lms_ffe_pst9_ext_lane[2:0]', ffe_hp[num_set][10])
    write('rx_dp_lms_ffe_pst10_ext_lane[2:0]', ffe_hp[num_set][11])
    write('rx_dp_lms_ffe_pst11_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_pst12_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_pst13_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_pst14_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_pst15_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_pst16_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_pst17_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_pst18_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_pst19_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_pst20_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_flt1_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_flt2_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_flt3_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_flt4_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_flt5_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_flt6_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_flt7_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_flt8_ext_lane[2:0]', 0)
    write('rx_dp_lms_gain_ext_lane[10:4]', gain_hp[num_set] >> 4)
    write('rx_dp_lms_gain_ext_lane[3:0]', gain_hp[num_set] & 0xf)
    write('rx_dp_lms_blw_ext_lane[5:0]', 0) # TBD: probably set slightly positive
    write('rx_dp_lms_dfe_ext_lane[5:0]', 0)

    write('rx_dp_lms_top_ld_lane', 1)

    # load setting
    mat_set_hp(num_set)

def set_dp_lp(num_set):
    """
    Low-pass FFE shape coefficient
    for RX blind training and TX FFE preset selection

    Values: Tables 20, 22, 26
    """
    ffe_lp = [[15,58,38,13,0,-4,-4,-2,0,0,0,0], \
                 [15,48,53,31,15,6,-1,-3,-3,-2,-1,-1], \
                 [15,50,37,4,-14,-7,3,3,3,-3,-2,-2]]
    gain_lp = [196, 196, 196]
    #print('set_dp_lp TBD')
    write('rx_dp_lms_ffe_pre8_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_pre7_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_pre6_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_pre5_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_pre4_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_pre3_ext_lane[3:0]', 0)
    write('rx_dp_lms_ffe_pre2_ext_lane[4:0]', ffe_lp[num_set][0])
    write('rx_dp_lms_ffe_pre1_ext_lane[6:0]', ffe_lp[num_set][1])
    write('rx_dp_lms_ffe_pst1_ext_lane[6:0]', ffe_lp[num_set][2])
    write('rx_dp_lms_ffe_pst2_ext_lane[5:0]', ffe_lp[num_set][3])
    write('rx_dp_lms_ffe_pst3_ext_lane[4:0]', ffe_lp[num_set][4])
    write('rx_dp_lms_ffe_pst4_ext_lane[3:0]', ffe_lp[num_set][5])
    write('rx_dp_lms_ffe_pst5_ext_lane[3:0]', ffe_lp[num_set][6])
    write('rx_dp_lms_ffe_pst6_ext_lane[3:0]', ffe_lp[num_set][7])
    write('rx_dp_lms_ffe_pst7_ext_lane[2:0]', ffe_lp[num_set][8])
    write('rx_dp_lms_ffe_pst8_ext_lane[2:0]', ffe_lp[num_set][9])
    write('rx_dp_lms_ffe_pst9_ext_lane[2:0]', ffe_lp[num_set][10])
    write('rx_dp_lms_ffe_pst10_ext_lane[2:0]', ffe_lp[num_set][11])
    write('rx_dp_lms_ffe_pst11_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_pst12_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_pst13_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_pst14_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_pst15_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_pst16_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_pst17_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_pst18_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_pst19_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_pst20_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_flt1_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_flt2_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_flt3_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_flt4_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_flt5_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_flt6_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_flt7_ext_lane[2:0]', 0)
    write('rx_dp_lms_ffe_flt8_ext_lane[2:0]', 0)
    write('rx_dp_lms_gain_ext_lane[10:4]', gain_lp[num_set] >> 4)
    write('rx_dp_lms_gain_ext_lane[3:0]', gain_lp[num_set] & 0xf)
    write('rx_dp_lms_blw_ext_lane[5:0]', 0) # TBD: probably set slightly positive
    write('rx_dp_lms_dfe_ext_lane[5:0]', 0)

    write('rx_dp_lms_top_ld_lane', 1)

    # load setting
    mat_set_lp(num_set)

# cds
# DSP spec section 3
def cds(cds_table = 'default', cds_reset_state_en = 1, cds_load_dtl_lms_en = 0,
        cds_dtl_blind_state_en = 1, cds_dtl_eql_state_en = 1, cds_dtl_coarse_state_en = 1, 
        cds_dtl_fine_state_en = 1, cds_dtl_accu_state_en = 1, cds_load_dp_lms_en = 0,
        cds_dp_blind_state_en = 1, cds_dp_coarse_state_en = 1, cds_dp_fine_state_en = 1,
        cds_dp_accu_state_en = 1, cds_save_state_en = 1, cds_dtl_phase_scan_en = 1, cds_dtl_phase_scan_ppm = 0x8000):
    cds_reset_state_en = {
        'default' : 1,
        'rxinit' :  0,  
        'save' : 0,
        'rxtrain' : 0,
        'trxtrain' : 0,
        'txffetrain' : 0,
        'trxfinal' : 0
        }
    cds_load_dtl_lms_en = {
        'default' : 0,
        'rxinit' :  1,  
        'save' : 0,
        'rxtrain' : 0,
        'trxtrain' : 0,
        'txffetrain' : 0,
        'trxfinal' : 0
        }
    cds_dtl_blind_state_en = {
        'default' : 1,
        'rxinit' :  0,  
        'save' : 0,
        'rxtrain' : 0,
        'trxtrain' : 0,
        'txffetrain' : 0,
        'trxfinal' : 0
        }
    cds_dtl_eql_state_en = {
        'default' : 1,
        'rxinit' :  0,  
        'save' : 0,
        'rxtrain' : 0,
        'trxtrain' : 0,
        'txffetrain' : 0,
        'trxfinal' : 0
        }
    cds_dtl_coarse_state_en = {
        'default' : 1,
        'rxinit' :  1,  
        'save' : 0,
        'rxtrain' : 0,
        'trxtrain' : 0,
        'txffetrain' : 0,
        'trxfinal' : 0
        }
    cds_dtl_fine_state_en = {
        'default' : 1,
        'rxinit' :  0,  
        'save' : 0,
        'rxtrain' : 1,
        'trxtrain' : 1,
        'txffetrain' : 0,
        'trxfinal' : 0
        }
    cds_dtl_accu_state_en = {
        'default' : 1,
        'rxinit' :  1,  
        'save' : 0,
        'rxtrain' : 1,
        'trxtrain' : 1,
        'txffetrain' : 1,
        'trxfinal' : 1
        }
    cds_load_dp_lms_en = {
        'default' : 0,
        'rxinit' :  0,  
        'save' : 0,
        'rxtrain' : 0,
        'trxtrain' : 0,
        'txffetrain' : 0,
        'trxfinal' : 0
        }
    cds_dp_blind_state_en = {
        'default' : 1,
        'rxinit' :  0,  
        'save' : 0,
        'rxtrain' : 0,
        'trxtrain' : 0,
        'txffetrain' : 0,
        'trxfinal' : 0
        }
    cds_dp_coarse_state_en = {
        'default' : 1,
        'rxinit' :  0,  
        'save' : 0,
        'rxtrain' : 1,
        'trxtrain' : 0,
        'txffetrain' : 0,
        'trxfinal' : 0
        }
    cds_dp_fine_state_en = {
        'default' : 1,
        'rxinit' :  0,  
        'save' : 0,
        'rxtrain' : 1,
        'trxtrain' : 1,
        'txffetrain' : 0,
        'trxfinal' : 0
        }
    cds_dp_accu_state_en = {
        'default' : 1,
        'rxinit' :  1,  
        'save' : 0,
        'rxtrain' : 1,
        'trxtrain' : 1,
        'txffetrain' : 1,
        'trxfinal' : 1
        }
    cds_save_state_en = {
        'default' : 1,
        'rxinit' :  0,  
        'save' : 1,
        'rxtrain' : 0,
        'trxtrain' : 0,
        'txffetrain' : 0,
        'trxfinal' : 1
        }
    # setting which are in soft-register, locally given
    dtl_cfg = {
    'blind' : {
        'en' : cds_dtl_blind_state_en[cds_table],
        'ffe_pre_en': [1,1,0],
        'ffe_pst_en': [1,1,0],
        'gain_en': 1,
        'blw_en': 0,
        'ffe_mu': [4,4,4],
        'gain_mu': 2,
        'blw_mu': 5,
        'timer': 20,
        },
    'eql' : {
        'en' : cds_dtl_eql_state_en[cds_table],
        'ffe_pre_en': [1,1,1],
        'ffe_pst_en': [1,1,1],
        'gain_en': 1,
        'blw_en': 1,
        'ffe_mu': [4,4,4],
        'gain_mu': 2,
        'blw_mu': 5,
        'timer': 20,
        },
    'coarse' : {
        'en' : cds_dtl_coarse_state_en[cds_table],
        'ffe_pre_en': [0,0,0],
        'ffe_pst_en': [0,0,0],
        'gain_en': 1,
        'blw_en': 1,
        'ffe_mu': [5,5,5],
        'gain_mu': 3,
        'blw_mu': 5,
        'kp_frac': 4,
        'kp_shift': 0x9,
        'ki_frac': 0,
        'ki_shift': 0xd,
        'timer': 20,
        },
    'fine' : {
        'en' : cds_dtl_fine_state_en[cds_table],
        'ffe_pre_en': [0,1,1],
        'ffe_pst_en': [0,1,1],
        'gain_en': 1,
        'blw_en': 1,
        'ffe_mu': [6,6,6],
        'gain_mu': 4,
        'blw_mu': 5,
        'kp_frac': 0,
        'kp_shift': 0x8,
        'ki_frac': 0,
        'ki_shift': 0xb,
        'timer': 10,
        },
    'accu' : {
        'en' : cds_dtl_accu_state_en[cds_table],
        'ffe_pre_en': [0,1,1],
        'ffe_pst_en': [0,1,1],
        'gain_en': 1,
        'blw_en': 1,
        'ffe_mu': [6,6,6],
        'gain_mu': 4,
        'blw_mu': 5,
        'kp_frac': 0,
        'kp_shift': 0x7,
        'ki_frac': 0,
        'ki_shift': 0x9,
        'timer': 10,
        }
    }
    dp_cfg = {
    'blind' : {
        'en' : cds_dp_blind_state_en[cds_table],
        'ffe_pre_en': [1,1,1,1,1,1,1,1],
        'ffe_pst_en': [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1],
        'ffe_flt_en': [0,0,0,0,0,0,0,0],
        'gain_en': 1,
        'blw_en': 0,
        'dfe_en': 0,
        'ffe_mu': [4,4,4,4,4],
        'gain_mu': 4,
        'blw_mu': 5,
        'dfe_mu': 5,
        'timer': 20,
        },
    'coarse' : {
        'en' : cds_dp_coarse_state_en[cds_table],
        'ffe_pre_en': [1,1,1,1,1,1,1,1],
        'ffe_pst_en': [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1],
        'ffe_flt_en': [1,1,1,1,1,1,1,1],
        'gain_en': 1,
        'blw_en': 1,
        'dfe_en': 1,
        'ffe_mu': [4,4,4,4,4],
        'gain_mu': 6,
        'blw_mu': 5,
        'dfe_mu': 5,
        'timer': 20,
        },
    'fine' : {
        'en' : cds_dp_fine_state_en[cds_table],
        'ffe_pre_en': [1,1,1,1,1,1,1,1],
        'ffe_pst_en': [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1],
        'ffe_flt_en': [1,1,1,1,1,1,1,1],
        'gain_en': 1,
        'blw_en': 1,
        'dfe_en': 1,
        'ffe_mu': [6,6,6,6,6],
        'gain_mu': 5,
        'blw_mu': 5,
        'dfe_mu': 5,
        'timer': 20,
        },
    'accu' : {
        'en' : cds_dp_accu_state_en[cds_table],
        'ffe_pre_en': [1,1,1,1,1,1,1,1],
        'ffe_pst_en': [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1],
        'ffe_flt_en': [1,1,1,1,1,1,1,1],
        'gain_en': 1,
        'blw_en': 1,
        'dfe_en': 1,
        'ffe_mu': [6,6,6,6,6],
        'gain_mu': 6,
        'blw_mu': 5,
        'dfe_mu': 6,
        'timer': 10,
        }
    }

    # load if asked
    # TBD
    #if cds_load_dtl_lms_en == 1:
        # load dtl taps

    # TBD
    #if cds_load_dtl_lms_en == 1:
        # load dp taps

    # DTL
    for state in ['blind', 'eql','coarse','fine','accu']:
        if dtl_cfg[state]['en'] == 1:
            if state == 'blind':
                write('rx_dtl_blind_eql_en_lane',1)
            else:
                write('rx_dtl_blind_eql_en_lane',0)

            #DTL FFE Tap, Gain, and Blw LMS enables
            write('rx_dtl_lms_ffe_pre1_en_lane', dtl_cfg[state]['ffe_pre_en'][0])
            write('rx_dtl_lms_ffe_pre2_en_lane', dtl_cfg[state]['ffe_pre_en'][1])
            write('rx_dtl_lms_ffe_pre3_en_lane', dtl_cfg[state]['ffe_pre_en'][2])
            write('rx_dtl_lms_ffe_pst1_en_lane', dtl_cfg[state]['ffe_pst_en'][0])
            write('rx_dtl_lms_ffe_pst2_en_lane', dtl_cfg[state]['ffe_pst_en'][1])
            write('rx_dtl_lms_ffe_pst3_en_lane', dtl_cfg[state]['ffe_pst_en'][2])
            write('rx_dtl_lms_gain_en_lane',dtl_cfg[state]['gain_en'])
            write('rx_dtl_lms_blw_en_lane',dtl_cfg[state]['blw_en'])

            #DTL FFE Tap, Gain, and Blw MU
            write('rx_dtl_lms_ffe_pre1_mu_lane[3:0]', dtl_cfg[state]['ffe_mu'][0])
            write('rx_dtl_lms_ffe_pst1_mu_lane[3:0]', dtl_cfg[state]['ffe_mu'][1])
            write('rx_dtl_lms_ffe_mu_lane[3:0]',  dtl_cfg[state]['ffe_mu'][2])
            write('rx_dtl_lms_gain_mu_lane[3:0]',  dtl_cfg[state]['gain_mu'])
            write('rx_dtl_lms_blw_mu_lane[3:0]',  dtl_cfg[state]['blw_mu'])

            if (state == 'blind' or state == 'eql') and cds_dtl_phase_scan_en == 1:
                phase_scan_en(cds_dtl_phase_scan_ppm)
            else:
                write('rx_dtl_lpf_kp_frac_lane[2:0]', dtl_cfg[state]['kp_frac'])
                write('rx_dtl_lpf_kp_shift_lane[3:0]', dtl_cfg[state]['kp_shift'])
                write('rx_dtl_lpf_ki_frac_lane', dtl_cfg[state]['ki_frac'])
                write('rx_dtl_lpf_ki_shift_lane[4:0]', dtl_cfg[state]['ki_shift'])
                dtl_start()

            write('rx_dtl_lms_top_en_lane',1)
            wait(dtl_cfg[state]['timer'])
            write('rx_dtl_lms_top_en_lane',0)

            if (state == 'blind' or state == 'eql') and cds_dtl_phase_scan_en == 1:
                phase_scan_dis()

    for state in ['blind', 'coarse','fine','accu']:
        if dp_cfg[state]['en'] == 1:
            if state == 'blind':
                write('rx_dp_blind_error_en_lane',1)
            else:
                write('rx_dp_blind_error_en_lane',0)

            #DTL FFE Tap, Gain, and Blw LMS enables
            write('rx_dp_lms_ffe_pre1_en_lane', dp_cfg[state]['ffe_pre_en'][0])
            write('rx_dp_lms_ffe_pre2_en_lane', dp_cfg[state]['ffe_pre_en'][1])
            write('rx_dp_lms_ffe_pre3_en_lane', dp_cfg[state]['ffe_pre_en'][2])
            write('rx_dp_lms_ffe_pre4_en_lane', dp_cfg[state]['ffe_pre_en'][3])
            write('rx_dp_lms_ffe_pre5_en_lane', dp_cfg[state]['ffe_pre_en'][4])
            write('rx_dp_lms_ffe_pre6_en_lane', dp_cfg[state]['ffe_pre_en'][5])
            write('rx_dp_lms_ffe_pre7_en_lane', dp_cfg[state]['ffe_pre_en'][6])
            write('rx_dp_lms_ffe_pre8_en_lane', dp_cfg[state]['ffe_pre_en'][7])
            write('rx_dp_lms_ffe_pst1_en_lane', dp_cfg[state]['ffe_pst_en'][0])
            write('rx_dp_lms_ffe_pst2_en_lane', dp_cfg[state]['ffe_pst_en'][1])
            write('rx_dp_lms_ffe_pst3_en_lane', dp_cfg[state]['ffe_pst_en'][2])
            write('rx_dp_lms_ffe_pst4_en_lane', dp_cfg[state]['ffe_pst_en'][3])
            write('rx_dp_lms_ffe_pst5_en_lane', dp_cfg[state]['ffe_pst_en'][4])
            write('rx_dp_lms_ffe_pst6_en_lane', dp_cfg[state]['ffe_pst_en'][5])
            write('rx_dp_lms_ffe_pst7_en_lane', dp_cfg[state]['ffe_pst_en'][6])
            write('rx_dp_lms_ffe_pst8_en_lane', dp_cfg[state]['ffe_pst_en'][7])
            write('rx_dp_lms_ffe_pst9_en_lane', dp_cfg[state]['ffe_pst_en'][8])
            write('rx_dp_lms_ffe_pst10_en_lane', dp_cfg[state]['ffe_pst_en'][9])
            write('rx_dp_lms_ffe_pst11_en_lane', dp_cfg[state]['ffe_pst_en'][10])
            write('rx_dp_lms_ffe_pst12_en_lane', dp_cfg[state]['ffe_pst_en'][11])
            write('rx_dp_lms_ffe_pst13_en_lane', dp_cfg[state]['ffe_pst_en'][12])
            write('rx_dp_lms_ffe_pst14_en_lane', dp_cfg[state]['ffe_pst_en'][13])
            write('rx_dp_lms_ffe_pst15_en_lane', dp_cfg[state]['ffe_pst_en'][14])
            write('rx_dp_lms_ffe_pst16_en_lane', dp_cfg[state]['ffe_pst_en'][15])
            write('rx_dp_lms_ffe_pst17_en_lane', dp_cfg[state]['ffe_pst_en'][16])
            write('rx_dp_lms_ffe_pst18_en_lane', dp_cfg[state]['ffe_pst_en'][17])
            write('rx_dp_lms_ffe_pst19_en_lane', dp_cfg[state]['ffe_pst_en'][18])
            write('rx_dp_lms_ffe_pst20_en_lane', dp_cfg[state]['ffe_pst_en'][19])
            write('rx_dp_lms_ffe_flt1_en_lane', dp_cfg[state]['ffe_flt_en'][0])
            write('rx_dp_lms_ffe_flt2_en_lane', dp_cfg[state]['ffe_flt_en'][1])
            write('rx_dp_lms_ffe_flt3_en_lane', dp_cfg[state]['ffe_flt_en'][2])
            write('rx_dp_lms_ffe_flt4_en_lane', dp_cfg[state]['ffe_flt_en'][3])
            write('rx_dp_lms_ffe_flt5_en_lane', dp_cfg[state]['ffe_flt_en'][4])
            write('rx_dp_lms_ffe_flt6_en_lane', dp_cfg[state]['ffe_flt_en'][5])
            write('rx_dp_lms_ffe_flt7_en_lane', dp_cfg[state]['ffe_flt_en'][6])
            write('rx_dp_lms_ffe_flt8_en_lane', dp_cfg[state]['ffe_flt_en'][7])
            write('rx_dp_lms_gain_en_lane',dp_cfg[state]['gain_en'])
            write('rx_dp_lms_blw_en_lane',dp_cfg[state]['blw_en'])
            write('rx_dp_lms_dfe_en_lane',dp_cfg[state]['dfe_en'])

            #DTL FFE Tap, Gain, and Blw MU
            write('rx_dp_lms_ffe_pre_all_mu_lane[3:0]', dp_cfg[state]['ffe_mu'][0])
            write('rx_dp_lms_ffe_pre1_mu_lane[3:0]', dp_cfg[state]['ffe_mu'][1])
            write('rx_dp_lms_ffe_pst1_mu_lane[3:0]', dp_cfg[state]['ffe_mu'][2])
            write('rx_dp_lms_ffe_pst_all_mu_lane[3:0]', dp_cfg[state]['ffe_mu'][3])
            write('rx_dp_lms_ffe_flt_mu_lane[3:0]', dp_cfg[state]['ffe_mu'][4])
            write('rx_dp_lms_gain_mu_lane[3:0]',  dp_cfg[state]['gain_mu'])
            write('rx_dp_lms_blw_mu_lane[3:0]',  dp_cfg[state]['blw_mu'])
            write('rx_dp_lms_dfe_mu_lane[3:0]',  dp_cfg[state]['dfe_mu'])

            write('rx_dp_lms_top_en_lane',1)
            wait(dp_cfg[state]['timer'])
            write('rx_dp_lms_top_en_lane',0)

    # run MATLAB
    mat_run()

def read_ffe_dtl():
    read('ffe_dtl')
    return [0, 0, 0, 32, 0, 0, 0]

def check_cdr_lock():
    ##To-Do: start CDR lock
    write('rx_cdr_lock_det_sel_lane[1:0]',2)
    
    cdr_lock = read('rx_cdr_lock_lane')

    return cdr_lock == 1 

def set_lms_continous():
    write('rx_dp_lms_top_en_lane',1)
    write('rx_dtl_lms_top_en_lane',1)

def disable_lms_continous():
    write('rx_dp_lms_top_en_lane',0)
    write('rx_dtl_lms_top_en_lane',0)

def req_local_ctrl(ce, c1, c0, cn1, cn2):
    print("Do a TX FFE request")
    # the follwoing registers have to be returned from 
    update_flag = 1 # from remote_status_g
    max_flag = 0  # max_flag = tx.g*_is_max
    min_flag = 0  #max_flag = tx.g*_is_min 

    dir = {
        0 : 0,
        1 : 1,
        2 : -1
        }
    update_flag, max_flag, min_flag  = mat_TXFFE_incdec([dir.get(c1), dir.get(c0), dir.get(cn1), dir.get(cn2), 0])

    return update_flag, max_flag, min_flag

def read_mse():
    return read('mse_val_lane[15:0]')