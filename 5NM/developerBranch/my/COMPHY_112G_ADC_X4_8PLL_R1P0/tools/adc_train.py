#!/bin/python2

"""
The top ADC-training documentation

DSP spec: https://sp.marvell.com/central/hsio/Projects/PHY_IPs/design_spec/COMPHY_112G_ADC_X4/rx_eq_top/DSP/112G_ADC_SerDes_Receiver_Training_Control.docx
"""

from hw_drivers import *
#from matlab_drivers import *
from numpy import zeros, ones, abs, linspace, arange
from scipy import optimize

enable_plot = 0

if (enable_plot == 1):
    import matplotlib.pyplot
    snr_dp_list = list()
    mse_dp_list = list()

trx_train_tx_train_enable = 1


def rx_blind_train(rx_train_blind_max_trial, rx_train_blind_adc_sat_th, rx_train_blind_adc_th1 = 60,  
                   rx_train_blind_phase_scan_en = 1, rx_train_blind_phase_scan_ppm = 0x8000, 
                   rx_train_blind_ctle_c_step = 1, rx_train_blind_r_step = 1, rx_train_blind_gain_coarse_step = 1):
    """
    RX blind train

    DSP spec section 5.2
    Controls: Table 20
    """
    # set an initial ctle now
    #set_ctle(2,30,6)

    # rotate DPHER phase
    if rx_train_blind_phase_scan_en == 1:
        phase_scan_en(rx_train_blind_phase_scan_ppm)

    for num_trial in range(rx_train_blind_max_trial):
        set_dp_lp(0)
        sft_dcs_lp0_rms, _, _ = sh_sig_mnt(True,0)
        
        set_dp_hp(0)
        sft_dcs_hp0_rms, _, _ = sh_sig_mnt(True,0)
        adc_in_rms, adc_in_sat, _ = adc_sig_mnt(True,rx_train_blind_adc_th1)

        if sft_dcs_hp0_rms > sft_dcs_lp0_rms: # too much high-frequencies
            C_sat = ctle_C_incdec(-rx_train_blind_ctle_c_step)
            if C_sat < 0: # saturated C control
                if adc_in_sat > rx_train_blind_adc_sat_th: # nothing to do that reduce overall gain further - avoid saturation at all cost
                    GC_sat = ctle_gain_coarse_incdec(-rx_train_blind_gain_coarse_step)
                    if GC_sat > 0: # saturated gain_coarse_step
                        R_sat = ctle_R_incdec(+rx_train_blind_r_step)
                    #R_sat = ctle_R_incdec(+R_step)
                else: # not saturating hence try to increase low-frequency
                    R_sat = ctle_R_incdec(-rx_train_blind_r_step)
                    if R_sat < 0: #saturated DC control
                        GC_sat = ctle_gain_coarse_incdec(+rx_train_blind_gain_coarse_step)
        else: ## to much low-frequencies
            if adc_in_sat > rx_train_blind_adc_sat_th: # avoid saturation at all cost
                GC_sat = ctle_gain_coarse_incdec(-rx_train_blind_gain_coarse_step)
                #if GC_sat < 0: # saturated gain_coarse_step
                #    R_sat = ctle_R_incdec(+R_step)
                #    if R_sat > 0: # no choice that reduce peak gain
                #        C_sat = ctle_C_incdec(-C_step)
                #R_sat = ctle_R_incdec(+R_step)
                #if R_sat > 0: # no choice that reduce peak gain
                #    C_sat = ctle_C_incdec(-C_step)
            else:
                C_sat = ctle_C_incdec(+rx_train_blind_ctle_c_step)
                if C_sat > 0:
                    R_sat = ctle_R_incdec(+rx_train_blind_r_step)

#        snr_dp = mse_mnt(False, 4) /2.0**5
#        snr_dp_list.append(snr_dp)
#        mse_dp = read_mse() / 2.0**16
#        mse_dp_list.append(mse_dp)
    if rx_train_blind_phase_scan_en == 1:
        phase_scan_dis()


def init_adc_sat_check(rx_train_adc_sat_check_small_sig_th = 64,rx_train_adc_sat_check_th1 = 48,
                       rx_train_adc_sat_check_large_sig_th = 32, rx_train_adc_sat_check_th2 = 16,
                       rx_train_adc_sat_check_phase_scan_en = 1, rx_train_adc_sat_check_phase_scan_ppm = 0x8000):
    """
    The initial  set of CTLE to avoid too small or to LARGE ADC input signal

    DSP section 5.1
    Controls: Table 19
    """
    # example - rate dependent and not-hardcoded forever
    init_set = [[1, 30, 4], # nominal
                [0, 60, 6],  # small signal
                [0, 0, 0]   # large signal
                ]

    set_ctle(init_set[0][0],init_set[0][1],init_set[0][2])

    # rotate DPHER phase
    if rx_train_adc_sat_check_phase_scan_en == 1:
        phase_scan_en(rx_train_adc_sat_check_phase_scan_ppm)

    for check_num in range(0,2):
        adc_in_rms, adc_in_th1, adc_in_th2 = adc_sig_mnt(True,rx_train_adc_sat_check_th1,rx_train_adc_sat_check_th2)
        if adc_in_th2 < rx_train_adc_sat_check_small_sig_th*2**8: # small signal
            if (check_num == 0):
                set_ctle(init_set[1][0],init_set[1][1],init_set[1][2])
            else:
                print('too small signal')
        elif adc_in_th1 > rx_train_adc_sat_check_large_sig_th*2**8: # large signal
            if (check_num == 0):
                set_ctle(init_set[2][0],init_set[2][1],init_set[2][2])
            else:
                print('too LARGE signal')
        else:
            break
        #elif adc_in_rms < aa:
        #    a
        #elif adc_in_rms > aa:
        #    a
        # further changes

    if rx_train_adc_sat_check_phase_scan_en == 1:
        phase_scan_dis()


def txffe_shape_base_train(tx_train_min_trial, tx_train_max_trial, tx_train_adapt_en = [1,0,1,1,0], tx_train_g1_high_th = 10, tx_train_g1_low_th = -10, 
                           tx_train_gn1_high_th = 10, tx_train_gn1_low_th = -10, tx_train_gn2_high_th = 7, tx_train_gn2_low_th = -7,
                           tx_train_gn3_high_th = 7, tx_train_gn3_low_th = -7):
    """
    TX FFE shaped based criteria - using ffe_dtl is this case
   
    DSP spec section 6.1
    Controls: Table 22
    TBD: to add cursor update function and limitations of changes
    """

    Cx_high_th = [tx_train_g1_high_th, 32, tx_train_gn1_high_th, tx_train_gn2_high_th, tx_train_gn3_high_th] 
    Cx_low_th  = [tx_train_g1_low_th,  32, tx_train_gn1_low_th,  tx_train_gn2_low_th,  tx_train_gn3_low_th]
    # direction of upgrading
    # [C1 C0 Cm1 Cm2 Cm3]
    # control/rate dependent - C1 C0 Cm1 basic one (10G/25G),  +Cm2 (50G), +Cm3 (100G) but not supported in 7nm test-chip
    tx_dir = [0, 0, 0, 0, 0]
    maintap = 3
    p2pfix = 1 # flag to control peak to peak, 1 to maintain peak to peak
    for num_trial in range(tx_train_max_trial):
        # simplification 1 change at a time
        for t in [0, 2, 3, 4]: # C1, Cm1, Cm2, Cm3
            cds('txffetrain')
            set_lms_continous()
            snr_dtl = mse_mnt(True, 5)

            if not(check_cdr_lock() or snr_dtl > 9*2**5):
                print('Possible loss of lock')

            ffe_dtl = read_ffe_dtl()
            if tx_train_adapt_en[t] == 1:
                if ffe_dtl[maintap+1-t] < Cx_low_th[t]:
                    tx_dir[t] = -1
                elif ffe_dtl[maintap+1-t] > Cx_high_th[t]:
                    tx_dir[t] = +1
            
            update_flag, max_flag, min_flag = set_TXFFE_tap(t, tx_dir[t], p2pfix)
          
        if num_trial > tx_train_min_trial:
            if all(v == 0 for v in tx_dir):
                print('no change in tx-fir, exiting shape based adpatation')
                break

def txffe_gradient_base_train(tx_train_opt_ext_iter_max = 1, tx_train_opt_int_iter_max = 2, tx_train_opt_adapt_dir = [1,1,0,1] , gradient = [-1,-1,-1,-1], 
                              tx_train_opt_snr_th = 16, tx_train_opt_adc_sat_th = 655, tx_train_opt_adc_th1 = 60):
    """
    TX FFE gradient based adaptation
   
    DSP spec section 6.2.1
    Controls: Table 25
    """
    snr_dp = mse_mnt(False, 4)
    p2pfix = 1
    txffe_updated = 0
    for ext_iter in range(tx_train_opt_ext_iter_max):
        for tap in range(len(gradient)):  
            for iter in range(tx_train_opt_int_iter_max):
                if (tx_train_opt_adapt_dir[tap] == 1):
                    cds('txffetrain')
                    set_lms_continous()
                    
                    #cdr lock checking 
                    snr_dtl = mse_mnt(True, 5)
                    if not(check_cdr_lock() or snr_dtl > 9*2**5):
                        print('Possible loss of lock')
                    
                    snr_dp = mse_mnt(False, 4)
                    update_flag, max_flag, min_flag = set_TXFFE_tap(len(gradient) - tap -1, gradient[tap], p2pfix) 
                    if (update_flag == 1):
                        cds('txffetrain')
                        snr_dp_check = mse_mnt(False, 4)
                        adc_in_rms, adc_in_sat, _ = adc_sig_mnt(True,tx_train_opt_adc_th1, 0)
                        if ((snr_dp_check > snr_dp + tx_train_opt_snr_th) and (adc_in_sat < tx_train_opt_adc_sat_th)):
                            snr_dp = snr_dp_check
                            txffe_updated  = 1
                        else:
                            gradient[tap] = -1 * gradient[tap]
                            set_lms_continous()
                            update_flag, max_flag, min_flag = set_TXFFE_tap(len(gradient) - tap -1, gradient[tap], p2pfix)
                            #cds()
                    else:
                        if (max_flag == 1):
                            gradient[tap] = -1
                        elif (min_flag == 1):
                            gradient[tap] = 1
    return gradient, txffe_updated

def cost_fun(trx_train_snr_sat_loss=2*2**5, trx_train_adc_in_sat_th = 60, trx_train_adc_in_th = 7, trx_train_snr_check = 10*2**5):
    """
    TRX Optimization cost function

    DSP spec section 7.1.1
    Controls: Table 23 (portion)
    """

    # Data path
    cds() # argument TBD
    snr_dp = mse_mnt(False, 4)

    if snr_dp < trx_train_snr_check:
        print('Bad data path setting or not locked')

    adc_in_sat_1em4 = adc_in_pkpk()

    if adc_in_sat_1em4 > trx_train_adc_in_sat_th:
        cost_function = snr_dp - trx_train_snr_sat_loss
    else:
        cost_function = snr_dp

    return cost_function, snr_dp, adc_in_sat_1em4 # first output is the one for FW

def trx_train_txffe_det_preset():
    """
    TX FFE preset selection

    DSP spec section 6.3
    """
    # checking the high and low frequency component
    set_dp_lp(0)
    sft_dcs_lp0_rms, _, _ = sh_sig_mnt(True,0)
        
    set_dp_hp(0)
    sft_dcs_hp0_rms, _, _ = sh_sig_mnt(True,0)
    
    # set TXFFE preset based on frequecy component
    if sft_dcs_lp0_rms > sft_dcs_hp0_rms:  # more high-frequencies after RX blind training - it is a short channel
        preset_num = 1
    else:
        set_dp_lp(2)
        sft_dcs_lp2_rms, _, _ = sh_sig_mnt(True,0)
        set_dp_hp(2)
        sft_dcs_bp_rms, _, _ = sh_sig_mnt(True,0)
        if sft_dcs_lp2_rms > sft_dcs_bp_rms:
            preset_num=2
        else:
            preset_num=3
    return preset_num

def trx_train_txffe_set_preset(tx_train_preset_ctle_comp_en = 0, tx_train_preset_ctle_comp_iter_max = 3, tx_train_preset_ctle_comp_r_step = 1, preset_num = 1 ):
    """
    Ask TX FFE preset and CTLE compensation (if enabled)

    DSP spec section 6.3 / 6.3.1
    Controls: Table 27
    """
    set_TXFFE_preset(preset_num)
    #cds('txffetrain')
    if (tx_train_preset_ctle_comp_en == 1):
        if (preset_num == 2) or (preset_num == 3):
            cds('txffetrain')
            snr_dp = mse_mnt(False, 4)
            for iter_num in range (tx_train_preset_ctle_comp_iter_max):
                R_sat = ctle_R_incdec(-tx_train_preset_ctle_comp_r_step)
                cds('txffetrain')
                snr_dp_up = mse_mnt(False, 4)
                if snr_dp_up > snr_dp:
                    snr_dp = snr_dp_up
                else:
                    R_sat = ctle_R_incdec(+tx_train_preset_ctle_comp_r_step)
                    cds('txffetrain')
                    snr_dp = mse_mnt(False, 4)
                    break

def jump_ctle(R,C,use_table=0):
    Ctle_R = get_ctle()[0]
    Ctle_C = get_ctle()[1]
    Ctle_R_des = R
    Ctle_C_des = C


def ctle_grid_search(rx_train_opt_R_iter_max = 2, rx_train_opt_C_iter_max = 4, rx_train_opt_R_step = 1, rx_train_opt_C_step = 3, 
                     rx_train_opt_adc_sat_th = 655, rx_train_opt_adc_th1 = 60, rx_train_opt_snr_th = 16, cds_mode = 'rxtrain'):
    """
    CTLE grid search
    
    DSP spec section 5.3.1
    Controls: Table 23
    """
    Cmin = 0
    Cmax = 124
    Rmin = 0
    Rmax = 13
    Ctle_R = get_ctle()[0]
    Ctle_C = get_ctle()[1]
    ctle_coarse_gain = get_ctle()[2]
    use_table = 0
    C_map = [0,2,5,7,10,13,16,18,20,23,25,27,30,32,34,36,39,42,47,53,61,63,66,69,74,80,92,105,124]
    cost_function = mse_mnt(False, 4)

    if (use_table==1): # TO-DO
        R_grid = arange(max(Rmin,Ctle_R-rx_train_opt_R_step*rx_train_opt_R_iter_max),min(Rmax,Ctle_R+rx_train_opt_R_step*rx_train_opt_R_iter_max), rx_train_opt_R_step)
        #making sure C is in list
        diff_C = [abs(x - Ctle_C) for x in C_map]
        C_idx = diff_C.index(min(diff_C))
        Ctle_C = C_map[C_idx]
        set_ctle(Ctle_R,Ctle_C,ctle_coarse_gain,0)
        C_grid = arange(max(0,C_idx-rx_train_opt_C_step*rx_train_opt_C_iter_max),min(len(C_map) - 1,C_idx+rx_train_opt_C_step*rx_train_opt_C_iter_max),rx_train_opt_C_step)
    else:
        R_grid = arange(max(Rmin,Ctle_R-rx_train_opt_R_step*rx_train_opt_R_iter_max),min(Rmax,Ctle_R+rx_train_opt_R_step*rx_train_opt_R_iter_max), rx_train_opt_R_step)
        C_grid = arange(max(Cmin,Ctle_C-rx_train_opt_C_step*rx_train_opt_C_iter_max),min(Cmax,Ctle_C+rx_train_opt_C_step*rx_train_opt_C_iter_max),rx_train_opt_C_step)

    for R in R_grid:
        for C in C_grid:
            set_ctle(R,C,ctle_coarse_gain,use_table)
            cds(cds_mode)
            #set_lms_continous()
            
            #check cdr locking
            snr_dtl = mse_mnt(True, 5)
            if not(check_cdr_lock() or snr_dtl > 9*2**5):
                print('Possible loss of lock')
            
            new_cost_function = mse_mnt(False, 4)
            if new_cost_function > cost_function + rx_train_opt_snr_th:
                adc_in_rms, adc_in_sat, _ = adc_sig_mnt(True,rx_train_opt_adc_th1, 0)
                if adc_in_sat < rx_train_opt_adc_sat_th:
                    Ctle_R = R
                    Ctle_C = C
                    cost_function = new_cost_function
                else:
                    print("Too much Saturation")
    print('Setting Best CTLE after Iteration: ' )
    set_ctle(Ctle_R,Ctle_C,ctle_coarse_gain,use_table)
    cds('rxtrain')

def trx_opt(trx_train_iter_min = 2, trx_train_iter_max = 10, trx_train_tx_train_enable = 1, 
            trx_train_CTLE_grid_inc_en = 0, trx_train_CTLE_R_inc = 1,trx_train_CTLE_C_inc = 2):
    """
    TRX optimization
    
    DSP spec section 7.1
    Controls: Table 28
    """
    tx_ffe_gradient = [1,-1,-1,-1]
    move_id = 0
    num_int_trial = 0
    txffe_updated = 0
    rx_train_opt_R_iter_max = 2
    rx_train_opt_C_iter_max = 4
    if trx_train_tx_train_enable == 1:
        rx_cds_mode = 'trxtrain'
    else:
        rx_cds_mode = 'rxtrain'
    
    # for plotting only
    if (enable_plot == 1):
        #cds() # this cds call is for plotting only
        snr_dp = mse_mnt(False, 4) /2.0**5
        snr_dp_list.append(snr_dp)
        mse_dp = read_mse() / 2.0**16
        mse_dp_list.append(mse_dp)


    for iter_num in range(trx_train_iter_max):
        R_start, C_start, tmp = get_ctle()
        ctle_grid_search(rx_train_opt_R_iter_max, rx_train_opt_C_iter_max, 1, 3, 655, 60, 0, cds_mode = rx_cds_mode)
        if (R_start== get_ctle()[0]) and (C_start ==get_ctle()[1]):
            move_id = 0
            print("No change in CTLE")
        else:
            move_id = 1

        # for plotting only
        if (enable_plot == 1):
            snr_dp = mse_mnt(False, 4) /2.0**5
            snr_dp_list.append(snr_dp)
            mse_dp = read_mse() / 2.0**16
            mse_dp_list.append(mse_dp)

        if (trx_train_tx_train_enable == 1):
            #txffe_shape_base_train(2, 5)
            tx_ffe_gradient, txffe_updated = txffe_gradient_base_train( 1, 2, [1,1,0,1] , tx_ffe_gradient, 0, 655, 60)
            move_id = (move_id or txffe_updated)
            
            print('Tx FFE is updated? ' + str(txffe_updated))

            #only for matlab
            #print('Tx FFE after Iteration ' + str(iter_num) +':')
            #print(read_tx_ffe())
            
            #for plotting 
            if (enable_plot == 1):
                cds()
                snr_dp = mse_mnt(False, 4) /2.0**5
                snr_dp_list.append(snr_dp)
                mse_dp = read_mse() / 2.0**16
                mse_dp_list.append(mse_dp)

        #check update
        if (move_id == 0):
            num_int_trial = num_int_trial + 1
        else:
            num_int_trial = 0

        #check convergence
        if num_int_trial > trx_train_iter_min:
            if (trx_train_CTLE_grid_inc_en == 1): 
                rx_train_opt_R_iter_max = rx_train_opt_R_iter_max + trx_train_CTLE_R_inc
                rx_train_opt_C_iter_max = rx_train_opt_C_iter_max + trx_train_CTLE_C_inc
                trx_train_CTLE_grid_inc_en = 0
                num_int_trial = 0
            else:
                break
    

def trx_opt_deprecated(trx_train_iter_min, trx_train_iter_max, trx_train_adapt_dir = [1,1,1,1,1,1,0]):
    """
    TRX optimization
    Not For Firmware
    DSP spec section 7.1
    Controls: Table 23 - TBD
    just a sketch of a possible gradient based optimization
    it will be definetely more complex
    TBD: many changes
    TBD: FW data structures
    """
    cost_function = 0.0
    move_id = 0

    # set any special setting
    # set_ctle(R,C)
    # set_TXFFE_preset(3)

    current_val = get_ctle() + [0,0,0,0]
    next_val = current_val[:]
    best_val = current_val[:]
    best_iter = 0
    gradient = -ones(len(current_val))
    sat = zeros(len(current_val))
    p2pfix = 1 # flag to control peak to peak, 1 to maintain peak to peak

    for iter_num in range(trx_train_iter_max):
        if iter_num > 0:
            if move_id == 0:
                sat[move_id] = ctle_R_incdec(gradient[move_id])
            elif move_id == 1:
                sat[move_id] = ctle_C_incdec(gradient[move_id])
            else:
                if move_id == 2:
                    tap = 0
                else:
                    tap = move_id-1
                
                update_flag, max_flag, min_flag = set_TXFFE_tap(tap, gradient[move_id], p2pfix) #set_single_TXFFE_incdec(gradient[move_id],tap)
                print(TX_FFE)
                if update_flag:
                    if max_flag: 
                        sat[move_id] = +1
                    elif min_flag:
                         sat[move_id] = -1

            #sat[1] = ctle_C_incdec(gradient[1])
            next_val[0:1] = get_ctle()[0:1] # not uniform distribution
            #sat[2:6] = set_TXFFE_incdec(gradient[2:6])
            current_val = next_val[:]
        
        # update cost-function
        new_cost_function, _, _ = cost_fun()

        if new_cost_function > cost_function:
            cost_function = new_cost_function
            if not (best_val == current_val):
               best_iter = iter_num 
               best_val = current_val[:]
        else:
            gradient[move_id] = -gradient[move_id]
            tx_grad = [0,0,0,0,0]
            if move_id == 0: # go back
                sat[move_id] = ctle_R_incdec(gradient[move_id])
            elif move_id == 1:
                sat[move_id] = ctle_C_incdec(gradient[move_id])
            else:
                if move_id == 2:
                    tap = 0
                else:
                    tap = move_id-1
                update_flag, max_flag, min_flag = set_TXFFE_tap(tap, gradient[move_id], p2pfix)#set_single_TXFFE_incdec(gradient[move_id],tap)
                print(TX_FFE)
                if update_flag:
                    if max_flag: 
                        sat[move_id] = +1
                    elif min_flag:
                         sat[move_id] = -1

        if (sat[move_id] == +1) and (gradient[move_id] == +1):
            gradient[move_id] = -1
        elif (sat[move_id] == -1) and (gradient[move_id] == -1):
            gradient[move_id] = +1

        # conservative go back
        next_val = best_val

        # update position
        if all(v == 0 for v in trx_train_adapt_dir):
            print('nothing to adapt')
            break
        else:
            for i in range(len(trx_train_adapt_dir)):
                move_id = (move_id+1) % len(trx_train_adapt_dir)
                if trx_train_adapt_dir[move_id] == 1:
                    break
        # nothing is happening since iter_min, exit
        if (iter_num > trx_train_iter_min) and (iter_num > best_iter + trx_train_iter_min):
            break

        # update value
        if ((gradient[move_id] == +1) and (sat[move_id] != +1)) or ((gradient[move_id] == -1) and (sat[move_id] != -1)):
            if not(move_id == 1):
                next_val[move_id] = next_val[move_id] + gradient[move_id]
    
    # set optimum and rerun adaptation
    set_ctle(best_val[0], best_val[1],6)
    # TX-FIR?

    new_cost_function, _, _ = cost_fun()

    if abs(new_cost_function-cost_function) > 0.5*2**5:
        print('best configuration has worse performance than before')

def optimize_fun(x):#, *param):
    """
    Not For Firmware
    Optimization cost function for use with a Python only optimizer
    """
    
    txffe_preset = x[3] #param[0]
    set_TXFFE_preset(txffe_preset)   

    # set parameters
    print('desidered R=' + str(x[0]) + ' C=' + str(x[1]))
    set_ctle(round(x[0]),round(x[1]),round(x[2]))
    
    new_cost_function, snr_dp,  adc_in_sat_1em4 = cost_fun()
    print('COST=' + str(new_cost_function) + ' SNR=' + str(snr_dp) + ' PK-PK=' + str(adc_in_sat_1em4))

    return -new_cost_function # minimization

def brute_force_search():
    """
    NOT FOR FIRMWARE, ONLY PYTHON TEST-BENCH
    """
    #gain_coarse = 6
    #txffe_preset = 1
    rranges = (slice(0, 4, 1),    # R
               slice(30, 60, 5),  # C
               slice(6,7,1),      # gain_coarse
               slice(1,4,1))      # TX-preset
    result = optimize.brute(func=optimize_fun, ranges=rranges, disp=True, finish=None, full_output=True)
    #bnds = ((0,3),(6,11),(0,5))
    #result = optimize.minimize(optimize_fun, (1,40,4), method='TNC', bounds=bnds, tol=0.25*2**5, options={'maxiter':20,'ftol':1,'disp':True})
    #result = optimize.minimize(optimize_fun, (2,6,5), method='SLSQP', bounds=bnds, tol=0.0625*2**5, options={'maxiter':50,'eps':1,'disp':True})
    #result = optimize.minimize(optimize_fun, (2,6,5), method='Nelder-Mead', bounds=bnds, tol=0.0625*2**5, options={'maxiter':500,'xatol':1,'fatol':0.25*2**5,'disp':True})
    #result = optimize.basinhopping(optimize_fun, (0.4,6,1), T=1.0*2**5, niter=50, disp=True)
    print(result)     
    print('Optimum R=' + str(result[0][0]) + ' C=' + str(result[0][1]) + ' gain_coarse=' + str(result[0][2]) + ' tx-preset=' + str(result[0][3]) + ' cost-function=' + str(-result[1]/32.0))

def trx_train_top(trx_train_tx_train_enable=1, trx_train_txffe_preset_ext_en=0, trx_train_txffe_preset_ext=3):
    """
    The TRX train top

    DSP section 8
    Controls: Table 28
    """

    #check ADC saturation
    init_adc_sat_check()
    # run Rx Blind Train
    rx_blind_train(10,655) # saturation threshold 0.01 is 655

    # for plotting and debug
    if (enable_plot==1):
        snr_dp = mse_mnt(False, 4) /2.0**5
        snr_dp_list.append(snr_dp)
        mse_dp = read_mse() / 2.0**16
        mse_dp_list.append(mse_dp)

    # Determine tx ffe preset number
    if (trx_train_tx_train_enable == 1): ## save output in read-out register
        if (trx_train_txffe_preset_ext_en==0):
            preset_num = trx_train_txffe_det_preset()
        else:
            preset_num = trx_train_txffe_preset_ext


    # check cdr lock
    cds('default')
    snr_dtl = mse_mnt(True, 5)
    if not(check_cdr_lock() or snr_dtl > 9*2**5):
        print('Possible loss of lock')
    #TO-DO: handling of cdr unlock issue 
    #while (cdr_lock==0):
    #    do something

    
    # Ask for TX FFE update
    if (trx_train_tx_train_enable == 1): 
        trx_train_txffe_set_preset(0,3,1,preset_num)

    trx_opt(2,10,trx_train_tx_train_enable,0,1,2)

    # final tuning
    ## TO-DO: ffe-floating, CDR optimization

    ## plotting
    if (enable_plot == 1):
        fig, (ax1, ax2) = matplotlib.pyplot.subplots(2)
        ax1.plot(snr_dp_list)
        ax1.set_ylim(bottom=10)
        ax1.set_title('Data Path SNR')
        ax2.plot(mse_dp_list)
        ax2.set_title('Data Path MSE')
        matplotlib.pyplot.show()
    #

def trx_train_param_init():
    global trx_train_tx_train_enable
    trx_train_tx_train_enable = 1

# just an example of TRX sequence
def main():
    """
    MAIN function, this runs automatically when trx_train_test.py is invoked
    """
    train_init()
    #brute_force_search() # brute-force search Python only
    trx_train_param_init()
    # function under check
    trx_train_top(trx_train_tx_train_enable)
    train_close()
    
    

if __name__ == "__main__":
    #f = open("training_results_CAd2d_multiple_adapt.txt","a+")
    #for ii in range(20):
    #    snr_dp_list[:] = []
    #    mse_dp_list[:] = []
        main()
    #    f.write(repr(snr_dp_list) + "\n")
    #f.close()


