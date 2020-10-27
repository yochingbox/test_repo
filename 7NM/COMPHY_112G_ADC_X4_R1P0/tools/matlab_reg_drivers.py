#!/usr/bin/env python2

import time
reg_verbose = True
total_time_us = 0
reg_rw_time = 0.1 #us

# MATLAB initialization
import platform
import os
import sys
if sys.platform == 'linux2' or sys.platform == 'linux': # due to our IT Linux structure
    matlab_dir = "/mrvl2g/caev3/eda/MATHWORKS/MATLAB/7.14"
    sys.path.insert(1,'matlab_wrapper_master')
else:
     matlab_dir = None
import matlab_wrapper
# Start MATLAB engine
matlab = matlab_wrapper.MatlabSession(matlab_root=matlab_dir)

from numpy import zeros
# MATLAB state information
# Matlab related
RS1 = 0
RS2 = 0
Cinnet = 15
CL1 = 15
CS1=0
CS2=0
ctle_gain_coarse = 0
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
adc_to_dp_len = 0
adc_to_dp_abs = 0
sh_len = 0
sh_abs = 0
chnl_id = 0
tx_ampl = 1.0

# TX-FFE state [ cm3, cm2, cm1, c0, c1 ]
TX_FFE = [0.0, 0.0, 0.0, 1.0, 0.0]

# function to initialize
def mat_init(seed=0, chnl_idx=0, tx_amp=1.0):
    global CS1, CS2, CL1, Cinnet, RS1, RS2, ctle_gain_coarse, TX_FFE
    global mse, sat, ffe, dfe, gain, ffe_dtl, gain_dtl, pwr_hlp, sat_level, tx_ampl, chnl_id
    chnl_id = chnl_idx
    tx_ampl = tx_amp
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
    matlab.eval("rng("+str(seed)+")") # 

def mat_run():
    global CS1, CS2, CL1, Cinnet, RS1, RS2, ctle_gain_coarse, TX_FFE
    global mse, sat, ffe, dfe, gain, ffe_dtl, gain_dtl, pwr_hlp, sat_level, chnl_id, tx_ampl
    ctle = [CS1, CS2, CL1, Cinnet, RS1, RS2, ctle_gain_coarse]
    #sat_level = 0.9
    mse, sat, ffe, dfe, gain, ffe_dtl, gain_dtl, pwr_hlp = matlab.workspace.simpleDataPathModel(ctle, TX_FFE, sat_level,chnl_id,tx_ampl,nout=8)
    #print('MSE=' + str(mse) + ' SAT=' + str(sat))
    return mse, sat, ffe, dfe, gain, ffe_dtl, gain_dtl

# remote Tx control
def mat_TXFFE_preset(num_preset):
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
        print('MATLAB: set TX preset ' + str(num_preset))
    print TX_FFE

def mat_TXFFE_incdec(dir_list):
    global TX_FFE
    TXFFE_step = 1.0/63.0 #1/32
    # list of min-max coefficient values
    Cxmin = [-16.0/63.0, 35.0/63.0, -22.0/63.0, 0.0, -5.0/63.0] #[-0.3, 0.5, -0.3, 0.0, -0.05]
    Cxmax = [ 0.0, 1.0,  0.0, 9.0/63.0,  0.0 ] #[ 0.0, 1.0,  0.0, 0.1,  0.0 ]
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

def mat_set_lp(num_set):
    global hlp_set
    hlp_set = 3+num_set

def mat_set_hp(num_set):
    global hlp_set
    hlp_set = num_set

def mat_sh_sig_mnt(id,range):
    global sh_len, sh_abs, pwr_hlp, hlp_set
    val = [0,0,0]

    if sh_abs: # supporting only average
        if hlp_set < len(pwr_hlp):
            val[0] = int(pwr_hlp[hlp_set] * 2**(8+sh_len))
        else:
            val_mean = -1
            print('not supported configuration index')
        val[1] = -1
        val[2] = -1
    else:
        print('not supported mode')
        val[0] = -1
        val[1] = -1
        val[2] = -1

    # TO DO right precision and range applied
    #return val[id]
    return (int(val[id] / 2** min(range))) & (2 ** (range[1] - range[0] +1) - 1)

def mat_adc_to_dp_sig_mnt(id,range):
    global adc_to_dp_len, adc_to_dp_abs, sat
    val = [0,0,0]

    if adc_to_dp_abs :
        val[0] = int(sat[0] * 2**(8+adc_to_dp_len))
        val[1] = int(sat[1] * 2**(8+adc_to_dp_len))
        val[2] = int(sat[2] * 2**(8+adc_to_dp_len))
    else:
        val[0] = int(sat[3] * 2**(8+adc_to_dp_len))
        val[1] = int(sat[4] * 2**(8+adc_to_dp_len))
        val[2] = int(sat[5] * 2**(8+adc_to_dp_len))

    # TO DO right precision and range applied
    return (int(val[id] / 2** min(range))) & (2 ** (range[1] - range[0] +1) - 1)
    #return val[id]

def read(reg_name, read_val = 1):
    """ function for readReg assigning 1.0 unless a known register """
    global reg_verbose, total_time_us, reg_rw_time, Cinnet, mse
    #value = 1

    rd_reg = {
        'rx_top_rsv_lane[7:0]' : 'Cinnet',
        'mse_val_lane[15:0]' : 'mse',
        'sigmnt_adc_to_dp_ave_lane[26:19]' : 'mat_adc_to_dp_sig_mnt(0,[19, 26])',
        'sigmnt_adc_to_dp_ave_lane[18:11]' : 'mat_adc_to_dp_sig_mnt(0,[11, 18])',
        'sigmnt_adc_to_dp_ave_lane[10:3]' : 'mat_adc_to_dp_sig_mnt(0,[3, 10])',
        'sigmnt_adc_to_dp_ave_lane[2:0]' : 'mat_adc_to_dp_sig_mnt(0,[0, 2])',
        'sigmnt_adc_to_dp_cdf_th1_lane[19:12]' : 'mat_adc_to_dp_sig_mnt(1,[12, 19])',
        'sigmnt_adc_to_dp_cdf_th1_lane[11:4]' : 'mat_adc_to_dp_sig_mnt(1,[4, 11])',
        'sigmnt_adc_to_dp_cdf_th1_lane[3:0]' : 'mat_adc_to_dp_sig_mnt(1,[0, 3])',
        'sigmnt_adc_to_dp_cdf_th2_lane[19:16]' : 'mat_adc_to_dp_sig_mnt(2,[16, 19])',
        'sigmnt_adc_to_dp_cdf_th2_lane[15:8]' : 'mat_adc_to_dp_sig_mnt(2,[8, 15])',
        'sigmnt_adc_to_dp_cdf_th2_lane[7:0]' : 'mat_adc_to_dp_sig_mnt(2,[0, 7])',
        'sigmnt_shared_ave_lane[28:21]' : 'mat_sh_sig_mnt(0,[21, 28])',
        'sigmnt_shared_ave_lane[20:13]' : 'mat_sh_sig_mnt(0,[13, 20])',
        'sigmnt_shared_ave_lane[12:5]' : 'mat_sh_sig_mnt(0,[5, 12])',
        'sigmnt_shared_ave_lane[4:0]' : 'mat_sh_sig_mnt(0,[0, 4])',
        'sigmnt_shared_cdf_th1_lane[19:12]' : 'mat_sh_sig_mnt(1,[12, 19])',
        'sigmnt_shared_cdf_th1_lane[11:4]' : 'mat_sh_sig_mnt(1,[4, 11])',
        'sigmnt_shared_cdf_th1_lane[3:0]' : 'mat_sh_sig_mnt(1,[0, 3])',
        'sigmnt_shared_cdf_th2_lane[19:12]' : 'mat_sh_sig_mnt(2,[12, 19])',
        'sigmnt_shared_cdf_th2_lane[11:4]' : 'mat_sh_sig_mnt(2,[4, 11])',
        'sigmnt_shared_cdf_th2_lane[3:0]' : 'mat_sh_sig_mnt(2,[0, 3])',
        'sigmnt_shared_ave_lane[28:21]' : 'mat_sh_sig_mnt(0,[21, 28])',
        'sigmnt_shared_ave_lane[20:13]' : 'mat_sh_sig_mnt(0,[13, 20])',
        'sigmnt_shared_ave_lane[12:5]' : 'mat_sh_sig_mnt(0,[5, 12])',
        'sigmnt_shared_ave_lane[4:0]' : 'mat_sh_sig_mnt(0,[0, 4])',
        }
    cmd = rd_reg.get(reg_name)
    if not(cmd is None):
        exec('value=' + cmd)
    else:
        value = read_val  

    if reg_verbose:
        print(reg_name + ' -> ' + str(value))
    total_time_us = total_time_us + reg_rw_time
    return value

def write(reg_name, value):
    global CS1, CS2, CL1, Cinnet, RS1, RS2, ctle_gain_coarse, adc_to_dp_abs, adc_to_dp_len, sh_abs,sh_len, sat_level
    """ function for writeReg assigning to some global variable if necessary"""
    wr_reg = {
        'rx_ctle_gain_coarse_lane[3:0]' : 'ctle_gain_coarse',
        'rx_ctle_rs1_ctrl_lane[3:0]' : 'RS1',
        'rx_ctle_rs2_ctrl_lane[4:0]' : 'RS2',
        'rx_top_rsv_lane[7:0]' : 'Cinnet',
        'rx_ctle_cl1_ctrl_lane[3:0]' : 'CL1',
        'rx_ctle_cs1_ctrl_lane[5:0]' : 'CS1',
        'rx_ctle_cs2_ctrl_lane[4:0]' : 'CS2',
        'sigmnt_adc_to_dp_in_abs_lane' : 'adc_to_dp_abs',
        'sigmnt_adc_to_dp_len_lane[3:0]' : 'adc_to_dp_len',
        'sigmnt_shared_in_abs_lane' : 'sh_abs',
        'sigmnt_shared_len_lane[3:0]' : 'sh_len',
        'sigmnt_adc_to_dp_th1_lane[6:0]' : 'sat_level[0]',
        'sigmnt_adc_to_dp_th2_lane[6:0]' : 'sat_level[1]'
        }
    var = wr_reg.get(reg_name)

    if not(var is None):
        exec(var + '=' + str(value), globals()) 

    #if reg_name == 'sigmnt_adc_to_dp_in_abs_lane':
    #    adc_to_dp_abs = value

    global reg_verbose, total_time_us, reg_rw_time
    if reg_verbose:
        print(reg_name + ' <- ' + str(value))
    total_time_us = total_time_us + reg_rw_time

def wait(timer_us):
    global reg_verbose, total_time_us
    if timer_us < 1:
        wait_time = 0.01
    else:
        wait_time = timer_us/1000.0
    time.sleep(wait_time)
    total_time_us = total_time_us + wait_time*1000

def while_wait(reg_name, timeout_us, timer_step_us=1, target_val=1):
    # target_val not used here since read() return mostly 1 for unknown registerasd
    while(read(reg_name,target_val) != target_val and timeout_us > 0):
        wait(timer_step_us)
        timeout_us -= timer_step_us
    return timeout_us
    
def reset_time():
    global total_time_us
    total_time_us = 0

def get_time():
    global total_time_us
    return total_time_us
