#!/bin/python2

"""
The top ADC-training documentation

DSP spec: https://sp.marvell.com/central/hsio/Projects/PHY_IPs/design_spec/COMPHY_112G_ADC_X4/rx_eq_top/DSP/112G_ADC_SerDes_Receiver_Training_Control.docx
"""

from hw_drivers import *
#from matlab_drivers import *
from numpy import zeros, ones, abs, linspace, arange, log10, absolute, argmin, argmax
from scipy import optimize

enable_plot = 1
first_iter = 0
# Read-out registers for trx_train_txffe_det_preset() debug
tx_train_tp_det_preset_lp_val = 0
tx_train_tp_det_preset_hp_val = 0
tx_train_tp_det_preset_num = 0 

# Read-out registers for trx_opt() debug
trx_train_tp_trx_opt_lp0_val   = 0
trx_train_tp_trx_opt_hp0_val   = 0
trx_train_tp_trx_opt_triggered = 0

#Read-out registers for bw_gain debug
rx_train_tp_lr_sr_bw_gain_lp_val = 0
rx_train_tp_lr_sr_bw_gain_hp_val = 0

#Read-out registers for blind training best config pick debug
rx_train_tp_blind_best_sft_dcs_lp0_rms = 0
rx_train_tp_blind_best_sft_dcs_hp0_rms = 0
rx_train_tp_blind_best_R = 0
rx_train_tp_blind_best_C = 0
rx_train_tp_blind_best_GC = 0
rx_train_tp_blind_best_config_updated_flag = 0

if (enable_plot == 1):
    import matplotlib.pyplot
    snr_dp_list = list()
    mse_dp_list = list()

trx_train_tx_train_en = 1
trx_train_snr_len = 6
trx_train_snr_dtl_check = 224 # snr_dtl is 7 at 224
trx_train_dfe_opt_en = 1
trx_train_flt_opt_en = 1
trx_train_agc_en = 1
trx_train_trx_opt_en = 0
rx_train_ctle_tune_en = 1
trx_train_dp_pst1_fz_dfe_en = 1
trx_train_dtl_phase_opt_en = 1
rx_train_mid_freq_tune_en = 1
trx_train_trx_opt_fine_en = 1
trx_train_pat_prot_en = 1
tx_train_shape_based_train_en = 1
trx_train_end_dtl_pst1_skip_en = 1

trx_train_ffe_len_opt_en = 0
trx_train_lr_sr_bw_gain_train_en = 0

trx_train_end_dtl_pre1_pst1_frz  = 0
trx_train_gao_bg_en              = 1


def rx_lr_sr_bw_gain_train(rx_train_lr_bw_gain_adc_sat_th           = 655, #1% 655x1
                           rx_train_sr_bw_gain_adc_sat_th           = 2600, #4% 655x4
                           rx_train_lr_sr_bw_gain_adc_th1           = 54,
                           rx_train_lr_sr_bw_gain_adc_th2           = 40,
                           rx_train_lr_sr_bw_gain_phase_scan_en     = 1,
                           rx_train_lr_sr_bw_gain_phase_scan_ppm    = 0x8000,
                           rx_train_sr_bw_cur_tia_red_delta         = 3, #relative delta not absolute value
                           rx_train_sr_bw_cur1_red_delta            = 2,
                           rx_train_sr_bw_cur2_red_delta            = 2,
                           rx_train_lr_hp_lp_ration_min             = 128, # 0.5
                           rx_train_lr_hp_lp_ration_max             = 232, # 0.9
                           rx_train_lr_hp_lp_ration_step            = 13, # 0.05
                           rx_train_lr_bw_gain_train_en             = 1,
                           rx_train_sr_bw_gain_train_en             = 1,
                           rx_train_lr_force_speed_en               = 0,
                           rx_train_sr_bw_cur_red_method            = 0):
    """
    RX Short and long reach bandwidth and gain training

    DSP spec section 5.6
    Controls: Table 26

    """ 
    
    #initialize     
    cur_controlled_triggered = 1
    
    if rx_train_lr_sr_bw_gain_phase_scan_en==1:
        phase_scan_en(rx_train_lr_sr_bw_gain_phase_scan_ppm)           
    
    #measure frequency component
    set_dp_lp(0)
    sft_dcs_lp0_rms, _, _ = sh_sig_mnt(True,0)    
    set_dp_hp(0)
    sft_dcs_hp0_rms, _, _ = sh_sig_mnt(True,0)
    
    #measeure ADC saturation
    adc_in_rms, adc_in_sat, adc_in_sat2 = adc_sig_mnt(True,rx_train_lr_sr_bw_gain_adc_th1,rx_train_lr_sr_bw_gain_adc_th2)    
    print('lp={},hp={},sat1={}, sat2={}, rms={},hp/lp={:.3}'.format(sft_dcs_lp0_rms,sft_dcs_hp0_rms,adc_in_sat,adc_in_sat2,adc_in_rms,sft_dcs_hp0_rms/(sft_dcs_lp0_rms*1.0)))
    
    #calculate ratio of frequency compoent
    # hp_lp_ration Unsinged 8 bit
    # add tp 
    global rx_train_tp_lr_sr_bw_gain_lp_val, rx_train_tp_lr_sr_bw_gain_hp_val
    rx_train_tp_lr_sr_bw_gain_lp_val = sft_dcs_lp0_rms
    rx_train_tp_lr_sr_bw_gain_hp_val = sft_dcs_hp0_rms
    
    global ctle_cur1_init, ctle_cur2_init, ctle_cur_tia_init
#    if sft_dcs_hp0_rms <= sft_dcs_lp0_rms:
#        hp_lp_ration = (sft_dcs_hp0_rms*(2**8))/(sft_dcs_lp0_rms*1.0)
#    else:
#        hp_lp_ration = 2**8
    
    #read current values
    cur2 = read('RX_CTLE_CUR2_SEL_LANE[3:0]')
    cur1 = read('RX_CTLE_CUR1_SEL_LANE[3:0]')
    cur_tia = read('RX_CTLE_CUR_TIA_SEL_LANE[3:0]')
    rx_speed = read('PHY_GEN_RX_LANE[5:0]')
    
    Ctle_R, Ctle_C, Ctle_GC = get_ctle()
    
    if rx_train_lr_sr_bw_gain_phase_scan_en==1:    
        phase_scan_dis()    
    if adc_in_sat < rx_train_lr_bw_gain_adc_sat_th and (sft_dcs_hp0_rms*(2**8) < sft_dcs_lp0_rms*rx_train_lr_hp_lp_ration_max) and rx_train_lr_bw_gain_train_en==1: #lr channels
        if (rx_speed == 34 or rx_speed == 35 or rx_speed == 37 or rx_speed == 38 or rx_speed == 45): #or force_en = 0
            cur2_var_str = 'RX_CTLE_CUR2_SEL_LANE[3:0]'
            cur1_var_str = 'RX_CTLE_CUR1_SEL_LANE[3:0]'
            cur_tia_var_str = 'RX_CTLE_CUR_TIA_SEL_LANE[3:0]'
        elif (rx_speed == 39 or rx_speed == 40 or rx_speed == 41):
            cur2_var_str = 'RX_CTLE_CUR2_SEL2_LANE[2:0]'
            cur1_var_str = 'RX_CTLE_CUR1_SEL2_LANE[2:0]'
            cur_tia_var_str = 'RX_CTLE_CUR_TIA_SEL2_LANE[2:0]'
            #also initialize the variables
            cur2 = read('RX_CTLE_CUR2_SEL2_LANE[2:0]')
            cur1 = read('RX_CTLE_CUR1_SEL2_LANE[2:0]')
            cur_tia = read('RX_CTLE_CUR_TIA_SEL2_LANE[2:0]')
            
        # Increase gain/bw appropriately based on ratio of frequency compoent
        if (rx_speed == 34 or rx_speed == 35 or rx_speed == 37 or rx_speed == 38 or rx_speed == 45 or  
            rx_speed == 39 or rx_speed == 40 or rx_speed == 41 or rx_train_lr_force_speed_en): #or force_en = 0
            if  sft_dcs_lp0_rms*(rx_train_lr_hp_lp_ration_min+7*rx_train_lr_hp_lp_ration_step) <= sft_dcs_hp0_rms*(2**8) < sft_dcs_lp0_rms*rx_train_lr_hp_lp_ration_max:# 0.85 to 0.9
                set_ctle(Ctle_R, Ctle_C, Ctle_GC+1)
            elif sft_dcs_lp0_rms*(rx_train_lr_hp_lp_ration_min+6*rx_train_lr_hp_lp_ration_step) <= sft_dcs_hp0_rms*(2**8) < sft_dcs_lp0_rms*(rx_train_lr_hp_lp_ration_min+7*rx_train_lr_hp_lp_ration_step):# 0.8 to 0.85
                set_ctle(Ctle_R, Ctle_C, Ctle_GC+2)
            elif sft_dcs_lp0_rms*(rx_train_lr_hp_lp_ration_min+5*rx_train_lr_hp_lp_ration_step) <= sft_dcs_hp0_rms*(2**8) < sft_dcs_lp0_rms*(rx_train_lr_hp_lp_ration_min+6*rx_train_lr_hp_lp_ration_step): # 0.75 to 0.8
                set_ctle(Ctle_R, Ctle_C, Ctle_GC+2)
                write(cur1_var_str,cur1+0)
                write(cur2_var_str,cur2+1)
            elif sft_dcs_lp0_rms*(rx_train_lr_hp_lp_ration_min+4*rx_train_lr_hp_lp_ration_step) <= sft_dcs_hp0_rms*(2**8) < sft_dcs_lp0_rms*(rx_train_lr_hp_lp_ration_min+5*rx_train_lr_hp_lp_ration_step): # 0.7 to 0.75
                set_ctle(Ctle_R, Ctle_C, Ctle_GC+2)
                write(cur1_var_str,cur1+0)
                write(cur2_var_str,cur2+2)
            elif sft_dcs_lp0_rms*(rx_train_lr_hp_lp_ration_min+3*rx_train_lr_hp_lp_ration_step) <= sft_dcs_hp0_rms*(2**8) < sft_dcs_lp0_rms*(rx_train_lr_hp_lp_ration_min+4*rx_train_lr_hp_lp_ration_step): # 0.65 to 0.7
                set_ctle(Ctle_R, Ctle_C, Ctle_GC+2)
                write(cur1_var_str,cur1+1)
                write(cur2_var_str,cur2+2)
            elif sft_dcs_lp0_rms*(rx_train_lr_hp_lp_ration_min+2*rx_train_lr_hp_lp_ration_step) <= sft_dcs_hp0_rms*(2**8) < sft_dcs_lp0_rms*(rx_train_lr_hp_lp_ration_min+3*rx_train_lr_hp_lp_ration_step): # 0.6 to 0.65
                set_ctle(Ctle_R, Ctle_C, Ctle_GC+2)
                write(cur1_var_str,cur1+2)
                write(cur2_var_str,cur2+2)
            elif sft_dcs_lp0_rms*(rx_train_lr_hp_lp_ration_min+rx_train_lr_hp_lp_ration_step) <= sft_dcs_hp0_rms*(2**8) < sft_dcs_lp0_rms*(rx_train_lr_hp_lp_ration_min+2*rx_train_lr_hp_lp_ration_step): # 0.55 to 0.6
                set_ctle(Ctle_R, Ctle_C, Ctle_GC+2)
                write(cur1_var_str,cur1+2)
                write(cur2_var_str,cur2+3)
            elif sft_dcs_lp0_rms*rx_train_lr_hp_lp_ration_min <= sft_dcs_hp0_rms*(2**8) < sft_dcs_lp0_rms*(rx_train_lr_hp_lp_ration_min+rx_train_lr_hp_lp_ration_step): # 0.5 to 0.55
                set_ctle(Ctle_R, Ctle_C, Ctle_GC+2)
                write(cur1_var_str,cur1+2)
                if rx_speed == 39 or rx_speed == 40 or rx_speed == 41:
                    write(cur2_var_str,cur2+3)
                else:
                    write(cur2_var_str,cur2+4)
            elif sft_dcs_hp0_rms*(2**8) < sft_dcs_lp0_rms*rx_train_lr_hp_lp_ration_min: #0.5
                set_ctle(Ctle_R, Ctle_C, Ctle_GC+2)
                if rx_speed == 39 or rx_speed == 40 or rx_speed == 41:
                    write(cur1_var_str,cur1+3)
                    write(cur2_var_str,cur2+3)
                else:
                    write(cur1_var_str,cur1+4)
                    write(cur2_var_str,cur2+4)
            
            print('LR currents cur_tia={},cur1={},cur2={}'.format(read(cur_tia_var_str),read(cur1_var_str),read(cur2_var_str)))
        else:
            cur_controlled_triggered = 0
        
    elif adc_in_sat > rx_train_sr_bw_gain_adc_sat_th and rx_train_sr_bw_gain_train_en==1: #sr channels
        if rx_train_lr_sr_bw_gain_phase_scan_en==1:        
            phase_scan_en(rx_train_lr_sr_bw_gain_phase_scan_ppm)
        #measure ADC satuation 
        adc_in_rms, adc_in_sat, adc_in_sat2 = adc_sig_mnt(True,rx_train_lr_sr_bw_gain_adc_th1,rx_train_lr_sr_bw_gain_adc_th2)
        
        rx_train_sr_bw_cur_tia_lim = ctle_cur_tia_init - rx_train_sr_bw_cur_tia_red_delta if (ctle_cur_tia_init >= rx_train_sr_bw_cur_tia_red_delta) else 0            
        rx_train_sr_bw_cur1_lim = ctle_cur1_init - rx_train_sr_bw_cur1_red_delta if (ctle_cur1_init >= rx_train_sr_bw_cur1_red_delta) else 0
        rx_train_sr_bw_cur2_lim = ctle_cur2_init - rx_train_sr_bw_cur2_red_delta if (ctle_cur2_init >= rx_train_sr_bw_cur2_red_delta) else 0
        
        Nx = 0 # used for 10G update
        while (adc_in_sat > rx_train_sr_bw_gain_adc_sat_th): #keep reducing currents in closed loop
            if rx_train_sr_bw_cur_red_method == 0:  # Use previous code when "method" == 0
                if (cur_tia > rx_train_sr_bw_cur_tia_lim): # reduce cur_tia first
                    cur_tia = cur_tia-1
                    write('RX_CTLE_CUR_TIA_SEL_LANE[3:0]',cur_tia)
                else: # reduce cur1 and cur2 after reaching the limit on cur_tia
                    if (cur1 > rx_train_sr_bw_cur1_lim) and (cur2 > rx_train_sr_bw_cur2_lim): #delta + protect it via positive 
                        cur2 = cur2-1
                        cur1 = cur1-1
                        write('RX_CTLE_CUR1_SEL_LANE[3:0]',cur1)
                        write('RX_CTLE_CUR2_SEL_LANE[3:0]',cur2)
                    else: 
                        #reached the limit
                        #if still saturated, nothing to do, break
                        break
            else:  # only for 10G: decrease 1 step in round-robin fashion - cur_tia, cur2, then cur1
                if (Nx%3 == 0) and (cur_tia > rx_train_sr_bw_cur_tia_lim): # reduce cur_tia first
                    cur_tia = cur_tia-1
                    write('RX_CTLE_CUR_TIA_SEL_LANE[3:0]',cur_tia)
                elif (Nx%3 == 1) and (cur2 > rx_train_sr_bw_cur2_lim): # reduce cur2 next
                        cur2 = cur2-1
                        write('RX_CTLE_CUR2_SEL_LANE[3:0]',cur2)
                elif (Nx%3 == 2) and (cur1 > rx_train_sr_bw_cur1_lim): # finally reduce cur1
                        cur1 = cur1-1
                        write('RX_CTLE_CUR1_SEL_LANE[3:0]',cur1)
                else: 
                    #reached the limit
                    #if still saturated, nothing to do, break
                    break            
                Nx = Nx + 1

            adc_in_rms, adc_in_sat, adc_in_sat2 = adc_sig_mnt(True,rx_train_lr_sr_bw_gain_adc_th1,rx_train_lr_sr_bw_gain_adc_th2)            
            print('cur_tia={},cur1={},cur2={}, rms={}, sat1={},sat2={}'.format(cur_tia,cur1,cur2,adc_in_rms,adc_in_sat,adc_in_sat2))
        
        if rx_train_lr_sr_bw_gain_phase_scan_en==1:    
            phase_scan_dis()
#        if trx_train_tx_train_en == 0: 
#            rx_blind_train()
            
    else:
        cur_controlled_triggered = 0

    return cur_controlled_triggered


def rx_blind_train(rx_train_blind_max_trial = 40, 
                   rx_train_blind_adc_sat_th = 7, 
                   rx_train_blind_adc_th1 = 56,  
                   rx_train_blind_phase_scan_en = 1, 
                   rx_train_blind_phase_scan_ppm = 0x8000, 
                   rx_train_blind_ctle_c_step = 1, 
                   rx_train_blind_r_step = 1, 
                   rx_train_blind_gain_coarse_step = 1,
                   rx_train_blind_ctle_R_max = 7,
                   rx_train_blind_alt_search_en = 0,
                   rx_train_blind_adc_overflow_sat_th = 700,
                   rx_train_blind_adc_th2             = 40,
                   rx_train_blind_adc_sat_th2         = 7, #7
                   rx_train_blind_alt_reduc_route_en  = 0,
                   rx_train_blind_best_config_en      = 1):
    """
    RX blind train

    DSP spec section 5.3
    Controls: Table 22
    """
    # rotate DPHER phase
    if rx_train_blind_phase_scan_en == 1:
        phase_scan_en(rx_train_blind_phase_scan_ppm)

    # inc & dec flags to control coarse gain at low speeds / PAM2
    # only active if rx_train_blind_alt_search_en==1
    GC_inc_en = 1
    GC_dec_en = 1
    R_sat= 0; C_sat= 0; GC_sat= 0
    
    set_dp_lp(0)
    sft_dcs_lp0_rms, _, _ = sh_sig_mnt(True,0)
    
    set_dp_hp(0)
    sft_dcs_hp0_rms, _, _ = sh_sig_mnt(True,0)
    
    adc_in_rms, adc_in_sat, adc_in_sat2 = adc_sig_mnt(True,rx_train_blind_adc_th1,rx_train_blind_adc_th2)

    best_R, best_C, best_GC = get_ctle()
    best_sft_dcs_lp0_rms = sft_dcs_lp0_rms
    best_sft_dcs_hp0_rms = sft_dcs_hp0_rms
    best_adc_in_sat = 0 # 16 bit unsigned
    best_config_updated_flag = 0
    last_R = 0 
    last_C = 0
    last_GC = 0
#    best_adc_in_rms = adc_in_rms
#    best_adc_in_sat = adc_in_sat
#    best_adc_in_sat2 = adc_in_sat2
    inc_route_visited_flag = 0
    for num_trial in range(rx_train_blind_max_trial):
        inc_route_visited_flag = 0
        Ctle_R, Ctle_C, Ctle_GC = get_ctle()
        print('lp={},hp={},sat1={}, sat2={}, rms={},hp/lp={:.3}'.format(sft_dcs_lp0_rms,sft_dcs_hp0_rms,adc_in_sat,adc_in_sat2,adc_in_rms,sft_dcs_hp0_rms/(sft_dcs_lp0_rms*1.0)))
        
        if adc_in_sat > rx_train_blind_adc_sat_th: # take the reduction route
            if rx_train_blind_alt_reduc_route_en==1: #alternate route for 106G and 53G
                if sft_dcs_hp0_rms > sft_dcs_lp0_rms: # too much high frequency
                    C_sat = ctle_C_incdec(-rx_train_blind_ctle_c_step)#reduce the high frequency
                    if C_sat < 0:
                        GC_sat = ctle_gain_coarse_incdec(-rx_train_blind_gain_coarse_step)
                else: # too much low frequency
                    if get_ctle()[0] < rx_train_blind_ctle_R_max:
                        R_sat = ctle_R_incdec(+rx_train_blind_r_step) #reduce the low frequency
                    else: 
                        if adc_in_sat > rx_train_blind_adc_overflow_sat_th: #rx_train_blind_adc_sat_th * 100
                            C_sat = ctle_C_incdec(-rx_train_blind_ctle_c_step)
                            if (C_sat < 0):
                                GC_sat = ctle_gain_coarse_incdec(-rx_train_blind_gain_coarse_step)
            else:
                if GC_dec_en:
                    GC_sat = ctle_gain_coarse_incdec(-rx_train_blind_gain_coarse_step) #reduce overall gain
                    GC_inc_en = 0 if rx_train_blind_alt_search_en else 1  # equivalent to c ternary expression
                if GC_sat < 0 or not GC_dec_en: #can not reduce overall gain anymore
                    if sft_dcs_hp0_rms > sft_dcs_lp0_rms: # too much high frequency
                        C_sat = ctle_C_incdec(-rx_train_blind_ctle_c_step) #reduce the high frequency
                    else: # too much low frequency
                        if get_ctle()[0] < rx_train_blind_ctle_R_max:
                            R_sat = ctle_R_incdec(+rx_train_blind_r_step) #reduce the low frequency
                        else: 
                            if adc_in_sat > rx_train_blind_adc_overflow_sat_th: #rx_train_blind_adc_sat_th * 100
                                C_sat = ctle_C_incdec(-rx_train_blind_ctle_c_step)
                                #R_sat = ctle_R_incdec(-rx_train_blind_r_step)
                            

        else: #take the increment route
            R_sat = C_sat = GC_sat = 1
            if sft_dcs_hp0_rms > sft_dcs_lp0_rms: # increase low frequency
                R_sat = ctle_R_incdec(-rx_train_blind_r_step) 
                if R_sat < 0 and GC_inc_en: # saturated R control
                    #Ctle_C = get_ctle()[1]
                    if (adc_in_sat2 > rx_train_blind_adc_sat_th2) and (rx_train_blind_alt_search_en==0): # BW-KILL region - and ctle_C < 31 ?
                        C_sat = ctle_C_incdec(-rx_train_blind_ctle_c_step)
                    else:
                        GC_sat = ctle_gain_coarse_incdec(+rx_train_blind_gain_coarse_step) #increase overall gain
            else:
                C_sat = ctle_C_incdec(+rx_train_blind_ctle_c_step) # increase high frequency
                GC_dec_en = 0 if rx_train_blind_alt_search_en else 1  # equivalent to c ternary expression
                if C_sat > 0 and GC_inc_en: # saturated C control
                    #Ctle_C = get_ctle()[1]
                    if (adc_in_sat2 > rx_train_blind_adc_sat_th2) and (get_ctle()[0] < rx_train_blind_ctle_R_max) and (rx_train_blind_alt_search_en==0): # BW-KILL region - and ctle_C < 31 ?
                        R_sat = ctle_R_incdec(+rx_train_blind_r_step)
                    else:
                        GC_sat = ctle_gain_coarse_incdec(+rx_train_blind_gain_coarse_step) #increase overall gain
            
            inc_route_visited_flag = (R_sat==0) or (C_sat==0) or (GC_sat==0) # atleast one of them is zero ()
            print ('CTLE Updated in Increment Route?: ', inc_route_visited_flag)
        
        # save best equalization
        adc_in_rms, adc_in_sat, adc_in_sat2 = adc_sig_mnt(True,rx_train_blind_adc_th1,rx_train_blind_adc_th2)
        
        # only update best adc_in_sat when increment route was visited, 
        # otherwise keep best_adc_in_sat at a small value  
        if inc_route_visited_flag == 1:
            best_adc_in_sat = adc_in_sat
              
        set_dp_lp(0)
        sft_dcs_lp0_rms, _, _ = sh_sig_mnt(True,0)
        
        set_dp_hp(0)
        sft_dcs_hp0_rms, _, _ = sh_sig_mnt(True,0)        
                    
        
        #choose the best equalization
        if adc_in_sat < rx_train_blind_adc_sat_th or inc_route_visited_flag==1: # No saturation and very small saturation
            # update best config based on abs(1-hp/lp)
            # a lower abs(1-hp/lp) indicate better equalization
            if abs(sft_dcs_hp0_rms - sft_dcs_lp0_rms) * best_sft_dcs_lp0_rms < abs(best_sft_dcs_hp0_rms - best_sft_dcs_lp0_rms) * sft_dcs_lp0_rms:
                best_sft_dcs_lp0_rms = sft_dcs_lp0_rms
                best_sft_dcs_hp0_rms = sft_dcs_hp0_rms
                best_R, best_C, best_GC = get_ctle()
                print('Best Config Updated: R = {}, C = {}, GC = {}'.format(best_R, best_C, best_GC))
                print('best hp/lp={:.3}'.format(sft_dcs_hp0_rms/(sft_dcs_lp0_rms*1.0)))
                best_config_updated_flag = 1
                
        elif adc_in_sat > rx_train_blind_adc_sat_th and adc_in_sat < best_adc_in_sat: # small saturation
                # Saturated and only possible excetion with decreaseing saturation and improving equalizaiton
                # no need to check abs(1-hp/lp)
                best_adc_in_sat = adc_in_sat
                best_R, best_C, best_GC = get_ctle()
                print('Best Config Updated with reduced saturation: R = {}, C = {}, GC = {}'.format(best_R, best_C, best_GC))
                best_config_updated_flag = 1
                
        # check last move with previuos setting
        if (num_trial == rx_train_blind_max_trial-2):
            sft_dcs_lp0_rms_last = sft_dcs_lp0_rms
            sft_dcs_hp0_rms_last = sft_dcs_hp0_rms
            last_R, last_C, last_GC = get_ctle()

   
    if best_config_updated_flag == 1 and rx_train_blind_best_config_en==1: 
        set_ctle(best_R, best_C, best_GC)        
    else:
        print('hp-lp_last={},hp-lp_prev={}'.format(abs(sft_dcs_hp0_rms_last-sft_dcs_lp0_rms_last),abs(sft_dcs_hp0_rms-sft_dcs_lp0_rms)))
        if abs(sft_dcs_hp0_rms_last-sft_dcs_lp0_rms_last) > abs(sft_dcs_hp0_rms-sft_dcs_lp0_rms):
            set_ctle(last_R, last_C, last_GC)
        
    if rx_train_blind_phase_scan_en == 1:
        phase_scan_dis()
        
    global rx_train_tp_blind_best_sft_dcs_lp0_rms, rx_train_tp_blind_best_sft_dcs_hp0_rms, rx_train_tp_blind_best_config_updated_flag
    global rx_train_tp_blind_best_R, rx_train_tp_blind_best_C, rx_train_tp_blind_best_GC 
    
    rx_train_tp_blind_best_sft_dcs_lp0_rms = best_sft_dcs_lp0_rms
    rx_train_tp_blind_best_sft_dcs_hp0_rms = best_sft_dcs_hp0_rms
    rx_train_tp_blind_best_R = best_R
    rx_train_tp_blind_best_C = best_C
    rx_train_tp_blind_best_GC = best_GC
    rx_train_tp_blind_best_config_updated_flag = best_config_updated_flag
    


def init_adc_sat_check(rx_train_adc_sat_check_small_sig_th = 64,
                       rx_train_adc_sat_check_th1 = 32,
                       rx_train_adc_sat_check_large_sig_th = 8,
                       rx_train_adc_sat_check_th2 = 56 ,
                       rx_train_adc_sat_check_phase_scan_en = 1,
                       rx_train_adc_sat_check_phase_scan_ppm = 0x8000,
                       rx_train_adc_sat_check_nominal_signal_R = 2,
                       rx_train_adc_sat_check_nominal_signal_C = 70,
                       rx_train_adc_sat_check_nominal_signal_coarse_gain = 0,
                       rx_train_adc_sat_check_small_signal_R = 1,
                       rx_train_adc_sat_check_small_signal_C = 80,
                       rx_train_adc_sat_check_small_signal_coarse_gain = 0,
                       rx_train_adc_sat_check_large_signal_R = 3,
                       rx_train_adc_sat_check_large_signal_C = 60,
                       rx_train_adc_sat_check_large_signal_coarse_gain = 0,
                       rx_train_blind_alt_reduc_route_en  = 0):
    """
    The initial  set of CTLE to avoid too small or to LARGE ADC input signal

    DSP section 5.2
    Controls: Table 20
    """
    init_set = [[rx_train_adc_sat_check_nominal_signal_R, rx_train_adc_sat_check_nominal_signal_C, rx_train_adc_sat_check_nominal_signal_coarse_gain],
                [rx_train_adc_sat_check_small_signal_R, rx_train_adc_sat_check_small_signal_C, rx_train_adc_sat_check_small_signal_coarse_gain],
                [rx_train_adc_sat_check_large_signal_R, rx_train_adc_sat_check_large_signal_C, rx_train_adc_sat_check_large_signal_coarse_gain]]

    set_ctle(init_set[1][0],init_set[1][1],init_set[1][2])
    # rotate DPHER phase
    if rx_train_adc_sat_check_phase_scan_en == 1:
        phase_scan_en(rx_train_adc_sat_check_phase_scan_ppm)
        
    adc_in_rms, adc_in_th1, adc_in_th2 = adc_sig_mnt(True,rx_train_adc_sat_check_th1,rx_train_adc_sat_check_th2)
    if adc_in_th2 > rx_train_adc_sat_check_large_sig_th*2**8: # large signal
        set_ctle(init_set[0][0],init_set[0][1],init_set[0][2]) # reduce the signal to nominal
        adc_in_rms, adc_in_th1, adc_in_th2 = adc_sig_mnt(True,rx_train_adc_sat_check_th1,rx_train_adc_sat_check_th2)
        if adc_in_th2 > rx_train_adc_sat_check_large_sig_th*2**8: #still large signal
            set_ctle(init_set[2][0],init_set[2][1],init_set[2][2]) #reduce the signal to large
    
    if rx_train_blind_alt_reduc_route_en==0:  #speed-table entry 
        for check_num in range(0,2):
            adc_in_rms, adc_in_th1, adc_in_th2 = adc_sig_mnt(True,rx_train_adc_sat_check_th1,rx_train_adc_sat_check_th2)
            if (adc_in_th1 > rx_train_adc_sat_check_small_sig_th*2**8) and (adc_in_th2 > rx_train_adc_sat_check_large_sig_th*2**8):
                ctle_gain_coarse_incdec(-1)
            elif (adc_in_th1 < rx_train_adc_sat_check_small_sig_th*2**8) and (adc_in_th2 < rx_train_adc_sat_check_large_sig_th*2**8):
                ctle_gain_coarse_incdec(+1)

    if rx_train_adc_sat_check_phase_scan_en == 1:
        phase_scan_dis()


def txffe_shape_base_train(tx_train_min_trial, tx_train_max_trial, tx_train_adapt_en = [0,0,1,0,0], tx_train_g1_high_th = 20, tx_train_g1_low_th = -20, 
                           tx_train_gn1_high_th = 15, tx_train_gn1_low_th = -15, tx_train_gn2_high_th = 7, tx_train_gn2_low_th = -7,
                           tx_train_gn3_high_th = 7, tx_train_gn3_low_th = -7, tx_train_phase_opt_step = 2):
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
    
    maintap = 3
    p2pfix = 1 # flag to     #            [0, 0, 0]   # largecontrol peak to peak, 1 to maintain peak to peak
    tx_dir = [0, 0, 0, 0, 0]
    for num_trial in range(tx_train_max_trial):
        tx_dir = [0, 0, 0, 0, 0]
        # simplification 1 change at a time
        for t in [0, 2, 3, 4]: # C1, Cm1, Cm2, Cm3
        #for t in [2]: #Cm2, Cm1, C1
            #cds('txffetrain')
            write('rx_dtl_lms_ffe_pre1_en_lane', 1)
            write('rx_dtl_lms_ffe_pst1_en_lane', 0)            
            set_lms_continous()
            snr_dtl = mse_mnt(True, trx_train_snr_len)

            if not(check_cdr_lock() or snr_dtl > trx_train_snr_dtl_check):
                print('Possible loss of lock')

            ffe_dtl = read_ffe_dtl()
            if tx_train_adapt_en[t] == 1:
                if ffe_dtl[maintap+1-t] < Cx_low_th[t]:
                    tx_dir[t] = -1
                elif ffe_dtl[maintap+1-t] > Cx_high_th[t]:
                    tx_dir[t] = +1
            
            update_flag, max_flag, min_flag = set_TXFFE_tap(t, tx_dir[t], p2pfix)
            write('rx_dtl_lms_ffe_pre1_en_lane', 0)
            write('rx_dtl_lms_ffe_pst1_en_lane', 1)
            if tx_train_adapt_en[t] == 1 and tx_dir[t] != 0:
                dtl_phase_opt(step_num = tx_train_phase_opt_step) # smaller step_num 
                #time.sleep(0.001)
            disable_lms_continous()

        if num_trial > tx_train_min_trial:
            if all(v == 0 for v in tx_dir):
                print('no change in tx-fir, exiting shape based adpatation')
                break

def txffe_gradient_base_train(tx_train_opt_ext_iter_max = 1, tx_train_opt_int_iter_max = 2, tx_train_opt_adapt_dir = [1,1,0,1] , gradient = [-1,-1,-1,-1], 
                              tx_train_opt_snr_th = 0, tx_train_opt_adc_sat_th = 7, tx_train_opt_adc_th1 = 56, tx_train_opt_gradient_timer = 0.001):
    """
    TX FFE gradient based adaptation
   
    DSP spec section 6.2.1
    Controls: Table 25
    """
    set_lms_continous()
    time.sleep(tx_train_opt_gradient_timer)
    snr_dp = mse_mnt(False, trx_train_snr_len)
    p2pfix = 1
    txffe_updated = 0
    for ext_iter in range(tx_train_opt_ext_iter_max):
        for tap in range(len(gradient)):  
            for iter in range(tx_train_opt_int_iter_max):
                if (tx_train_opt_adapt_dir[tap] == 1):
                    #cds('txffetrain')
                    #set_lms_continous()
                    
                    #cdr lock checking 
                    snr_dtl = mse_mnt(True, trx_train_snr_len)
                    if not(check_cdr_lock() or snr_dtl > trx_train_snr_dtl_check):
                        print('Possible loss of lock')
                    
                    snr_dp = mse_mnt(False, trx_train_snr_len)
                    update_flag, max_flag, min_flag = set_TXFFE_tap(len(gradient) - tap -1, gradient[tap], p2pfix) 
                    time.sleep(tx_train_opt_gradient_timer)
                    if (update_flag == 1):
                        #cds('txffetrain')
                        snr_dp_check = mse_mnt(False, trx_train_snr_len)
                        adc_in_rms, adc_in_sat, _ = adc_sig_mnt(True,tx_train_opt_adc_th1, 0)
                        if ((snr_dp_check > snr_dp + tx_train_opt_snr_th) and (adc_in_sat < tx_train_opt_adc_sat_th)):
                            snr_dp = snr_dp_check
                            txffe_updated  = 1
                        else:
                            gradient[tap] = -1 * gradient[tap]
                            #set_lms_continous()
                            update_flag, max_flag, min_flag = set_TXFFE_tap(len(gradient) - tap -1, gradient[tap], p2pfix)
                            time.sleep(tx_train_opt_gradient_timer)
                            #cds()
                    else:
                        if (max_flag == 1):
                            gradient[tap] = -1
                        elif (min_flag == 1):
                            gradient[tap] = 1
    disable_lms_continous()
    return gradient, txffe_updated

def cost_fun(trx_train_snr_sat_loss=2*2**5, trx_train_adc_in_sat_th = 60, trx_train_adc_in_th = 7, trx_train_snr_check = 10*2**5):
    """
    TRX Optimization cost function

    DSP spec section 7.1.1
    Controls: Table 23 (portion)
    """

    # Data path
    cds() # argument TBD
    snr_dp = mse_mnt(False, trx_train_snr_len)

    if snr_dp < trx_train_snr_check:
        print('Bad data path setting or not locked')

    adc_in_sat_1em4 = adc_in_pkpk()

    if adc_in_sat_1em4 > trx_train_adc_in_sat_th:
        cost_function = snr_dp - trx_train_snr_sat_loss
    else:
        cost_function = snr_dp

    return cost_function, snr_dp, adc_in_sat_1em4 # first output is the one for FW

def trx_train_txffe_det_preset(tx_train_det_preset_lp_multiplier = 15, # default= 15
                               tx_train_det_preset_hp_multiplier = 16, # default= 16
                               tx_train_det_preset_phase_scan_en = 1,
                               tx_train_det_preset_scan_ppm   = 0x8000,
                               trx_train_txffe_preset_ext_en = 0,
                               trx_train_txffe_preset_ext    = 3):
    """
    TX FFE preset selection

    DSP spec section 6.3
    """
    global tx_train_tp_det_preset_lp_val, tx_train_tp_det_preset_hp_val, tx_train_tp_det_preset_num
    # checking the high and low frequency component
    
    
    if trx_train_txffe_preset_ext_en==1:
        return trx_train_txffe_preset_ext
    
    if tx_train_det_preset_phase_scan_en==1:
        phase_scan_en(tx_train_det_preset_scan_ppm)
    
    set_dp_lp(0)
    sft_dcs_lp0_rms, _, _ = sh_sig_mnt(True,0)
        
    set_dp_hp(0)
    sft_dcs_hp0_rms, _, _ = sh_sig_mnt(True,0)
    
    if (sft_dcs_lp0_rms*tx_train_det_preset_lp_multiplier) > (tx_train_det_preset_hp_multiplier* sft_dcs_hp0_rms):
        if read('rx_pam2_en_lane')==0:
            preset_num = CE_P3_PRE_ONLY
        else:
            preset_num = CE_CL72_INIT_PRE_POST
    else:
        if read('rx_pam2_en_lane')==0:
            preset_num = CE_P1_NO_EQ
        else:
            preset_num = CE_CL72_PRESET_NO_EQ
    
    #read-out registers
    tx_train_tp_det_preset_lp_val = sft_dcs_lp0_rms
    tx_train_tp_det_preset_hp_val = sft_dcs_hp0_rms
    tx_train_tp_det_preset_num = preset_num                                      
    # set TXFFE preset based on frequecy component
#    if sft_dcs_lp0_rms > sft_dcs_hp0_rms:  # more high-frequencies after RX blind training - it is a short channel
#        preset_num = 1
#    else:
#        set_dp_lp(2)
#        sft_dcs_lp2_rms, _, _ = sh_sig_mnt(True,0)
#        set_dp_hp(2)
#        sft_dcs_bp_rms, _, _ = sh_sig_mnt(True,0)
#        if sft_dcs_lp2_rms > sft_dcs_bp_rms:
#            preset_num=2
#        else:
#            preset_num=3
    if tx_train_det_preset_phase_scan_en==1:
        phase_scan_dis()           
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
            snr_dp = mse_mnt(False, trx_train_snr_len)
            for iter_num in range (tx_train_preset_ctle_comp_iter_max):
                R_sat = ctle_R_incdec(-tx_train_preset_ctle_comp_r_step)
                cds('txffetrain')
                snr_dp_up = mse_mnt(False, trx_train_snr_len)
                if snr_dp_up > snr_dp:
                    snr_dp = snr_dp_up
                else:
                    R_sat = ctle_R_incdec(+tx_train_preset_ctle_comp_r_step)
                    cds('txffetrain')
                    snr_dp = mse_mnt(False, trx_train_snr_len)
                    break

def jump_ctle(R,C,use_table=0):
    Ctle_R = get_ctle()[0]
    Ctle_C = get_ctle()[1]
    Ctle_R_des = R
    Ctle_C_des = C

def mse_mnt_ave(dtl_sel=True,len=6,Nave=0):
        '''Return SNR averaged over "Nave" measurments
        '''
        if Nave == 0:
            return mse_mnt(dtl_sel,len)
        elif Nave > 0:
            mse = 0
            for ix in range(Nave):
                mse += mse_mnt(dtl_sel,len)
            return mse/Nave


def ctle_grid_search(rx_train_opt_R_iter_max = 1, 
                     rx_train_opt_C_iter_max = 2,
                     rx_train_opt_GC_iter_max = 1,
                     rx_train_opt_R_step = 1,
                     rx_train_opt_C_step = 3,
                     rx_train_opt_GC_step = 1,
                     rx_train_opt_adc_sat_th = 7,
                     rx_train_opt_adc_th1 = 60,
                     rx_train_opt_snr_th = 0, 
                     rx_train_opt_snr_nave = 16,
                     cds_mode = 'rxtrain'):
    """
    CTLE grid search
    
    DSP spec section 5.3.1
    Controls: Table 23
    """
    global trx_train_ctle_C_min, trx_train_ctle_C_max, trx_train_ctle_R_min, trx_train_ctle_R_max, trx_train_ctle_GC_min, trx_train_ctle_GC_max
    Cmin  = trx_train_ctle_C_min
    Cmax  = trx_train_ctle_C_max 
    Rmin  = trx_train_ctle_R_min
    Rmax  = trx_train_ctle_R_max
    GCmin = trx_train_ctle_GC_min
    GCmax = trx_train_ctle_GC_max
    
    Nave = rx_train_opt_snr_nave
    
    Ctle_R = get_ctle()[0]
    Ctle_C = get_ctle()[1]
    Ctle_GC = get_ctle()[2]
        
    use_table = 0
    C_map = [0,2,5,7,10,13,16,18,20,23,25,27,30,32,34,36,39,42,47,53,61,63,66,69,74,80,92,105,124]
    init_cost_function = mse_mnt_ave(False, trx_train_snr_len, Nave)
    init_Ctle_R = Ctle_R
    init_Ctle_C = Ctle_C

    if (use_table==1): # TO-DO
        R_grid = arange(max(Rmin,Ctle_R-rx_train_opt_R_step*rx_train_opt_R_iter_max),min(Rmax,Ctle_R+rx_train_opt_R_step*rx_train_opt_R_iter_max), rx_train_opt_R_step)
        #making sure C is in list
        diff_C = [abs(x - Ctle_C) for x in C_map]
        C_idx = diff_C.index(min(diff_C))
        Ctle_C = C_map[C_idx]
        set_ctle(Ctle_R,Ctle_C,ctle_coarse_gain,0)
        C_grid = arange(max(0,C_idx-rx_train_opt_C_step*rx_train_opt_C_iter_max),min(len(C_map) - 1,C_idx+rx_train_opt_C_step*rx_train_opt_C_iter_max),rx_train_opt_C_step)
    else:
        R_grid = arange(max(Rmin,Ctle_R-rx_train_opt_R_step*rx_train_opt_R_iter_max),min(Rmax,Ctle_R+rx_train_opt_R_step*rx_train_opt_R_iter_max)+1, rx_train_opt_R_step)
        C_grid = arange(max(Cmin,Ctle_C-rx_train_opt_C_step*rx_train_opt_C_iter_max),min(Cmax,Ctle_C+rx_train_opt_C_step*rx_train_opt_C_iter_max)+1 , rx_train_opt_C_step)
        GC_grid = arange(max(GCmin,Ctle_GC-rx_train_opt_GC_step*rx_train_opt_GC_iter_max),min(GCmax,Ctle_GC+rx_train_opt_GC_step*rx_train_opt_GC_iter_max)+1 , rx_train_opt_GC_step)

    cost_function_list = zeros(len(GC_grid), dtype=int)
    R_list = zeros(len(GC_grid), dtype=int)
    C_list = zeros(len(GC_grid), dtype=int)
    num_iter = 0
    set_lms_continous()
    
    # Move to the starting point in the grid
    ctle_walk(R_grid[0],C_grid[0],GC_grid[0])
    # # update the initial cost function
    # init_cost_function = mse_mnt_ave(False, trx_train_snr_len, Nave)
    # init_Ctle_R = rc_list[0][0]
    # init_Ctle_C = rc_list[0][1]

    for GC in GC_grid:
        cost_function = init_cost_function
        Ctle_R = init_Ctle_R
        Ctle_C = init_Ctle_C
        for C in C_grid:
            for R in R_grid:
                set_ctle(R,C,GC,use_table)
                #cds(cds_mode)
                snr_dtl = mse_mnt_ave(True, trx_train_snr_len, Nave)
                if not(check_cdr_lock() or snr_dtl > trx_train_snr_dtl_check):
                    print('Possible loss of lock')
                    new_cost_function = cost_function
                else:
                    new_cost_function = mse_mnt_ave(False, trx_train_snr_len, Nave)
                
                if new_cost_function > cost_function + rx_train_opt_snr_th:
                    adc_in_rms, adc_in_sat, _ = adc_sig_mnt(True,rx_train_opt_adc_th1, 0)
                    if adc_in_sat < rx_train_opt_adc_sat_th:
                        Ctle_R = R
                        Ctle_C = C
                        cost_function = new_cost_function
                        print("CTLE Updated")
                    else:
                        print("Too much Saturation")
            # reverse direction of the R list for next iteration
            R_grid = R_grid[::-1]
        #saving the result
        cost_function_list[num_iter] = cost_function
        R_list[num_iter] = Ctle_R
        C_list[num_iter] = Ctle_C
        num_iter = num_iter+1
        # reverse the order of the C list for next iteration of GC
        C_grid = C_grid[::-1]
    
    best_idx = argmax(cost_function_list)
    Ctle_R = R_list[best_idx]
    Ctle_C = C_list[best_idx]
    Ctle_GC = GC_grid[best_idx]
    
    print('SNR after iteration: ', cost_function_list[best_idx]/2.0**5)
    
    print('Setting Best CTLE after Iteration: ')
    # Move slowly to the final CTLE R & C value one step at a time
    ctle_walk(Ctle_R, Ctle_C, Ctle_GC)
    disable_lms_continous()

def ctle_walk(Ctle_R, Ctle_C, Ctle_GC, rx_train_opt_ctle_walk_timer =  20e-6):
    '''Update CTLE from current value to the specified value
    changing each parameter only one step at a time.
    '''


    # Move slowly to the final CTLE R & C value one step at a time
    wait_time = rx_train_opt_ctle_walk_timer  # TODO: not sure if wait timer is needed???

    # get the current CTLE settings
    Rx, Cx, GCx = get_ctle()
    Rupdate = True
    Cupdate = True
    GCupdate = True
    while Rupdate or Cupdate or GCupdate:
        # update coarse gain one step if needed
        if Ctle_GC > GCx:
            GCx += 1
            set_ctle(Rx, Cx, GCx)
            time.sleep(wait_time)
        elif Ctle_GC < GCx:
            GCx += -1
            set_ctle(Rx, Cx, GCx)
            time.sleep(wait_time)
        else:
            GCupdate = False
        # update R one step if needed
        if Ctle_R > Rx:
            Rx += 1
            set_ctle(Rx, Cx, GCx)
            time.sleep(wait_time)
        elif Ctle_R < Rx:
            Rx += -1
            set_ctle(Rx, Cx, GCx)
            time.sleep(wait_time)
        else:
            Rupdate = False
        # update C one step if needed
        if Ctle_C > Cx:
            Cx += 1
            set_ctle(Rx, Cx, GCx)
            time.sleep(wait_time)
        elif Ctle_C < Cx:
            Cx += -1
            set_ctle(Rx, Cx, GCx)
            time.sleep(wait_time)
        else:
            Cupdate = False

def trx_opt_fine(trx_train_fine_iter_num = 2, trx_train_fine_CTLE_R_en = 1,trx_train_fine_CTLE_C_en = 1,
                 trx_train_fine_ctle_tune_r_step=2,trx_train_fine_ctle_tune_c_step=6, 
                 trx_train_fine_ctle_tune_rc_snr_th=8):
    """
    TRX optimization
    
    DSP spec section 7.2 
    Controls: Table 32
    """
    tx_ffe_gradient = [1,-1,-1,-1]
    move_id = 0
    
    if trx_train_tx_train_en == 1:

        set_lms_continous()        
        #global_best = mse_mnt(False, trx_train_snr_len)

        for iter_num in range(trx_train_fine_iter_num):
            if (trx_train_tx_train_en == 1):
                tx_ffe_gradient, txffe_updated = txffe_gradient_base_train(1, 2, [1,1,0,1] , tx_ffe_gradient, 0, 7, 56)
                move_id = (move_id or txffe_updated)

        disable_lms_continous()

    # go back to R and C since tx-fir could have affect both DC and peak        
    if trx_train_fine_CTLE_R_en==1:
        R_start = get_ctle()[0]
        R_stop = min(R_start+trx_train_fine_ctle_tune_r_step,trx_train_ctle_R_max)
        smooth_ctrl_opt('R',trx_train_fine_ctle_tune_rc_snr_th,R_start,R_stop,1)
        if get_ctle()[0] == R_start:
            R_stop = max(R_start-trx_train_fine_ctle_tune_r_step,trx_train_ctle_R_min)
            smooth_ctrl_opt('R',trx_train_fine_ctle_tune_rc_snr_th,R_start,R_stop,-1)
                
    if trx_train_fine_CTLE_C_en==1:
        C_start = get_ctle()[1]
        C_stop = max(C_start-trx_train_fine_ctle_tune_c_step,trx_train_ctle_C_min)
        smooth_ctrl_opt('C',trx_train_fine_ctle_tune_rc_snr_th,C_start,C_stop,-1)
        if get_ctle()[1] == C_start:
            C_stop = min(C_start+trx_train_fine_ctle_tune_c_step,trx_train_ctle_C_max)
            smooth_ctrl_opt('C',trx_train_fine_ctle_tune_rc_snr_th,C_start,C_stop,1)
    
def trx_opt(trx_train_iter_min         = 2, 
            trx_train_iter_max         = 5, 
            trx_train_tx_train_en      = 1,  # use global speed_cfg default
            trx_train_CTLE_grid_inc_en = 0, 
            trx_train_CTLE_R_inc       = 1,
            trx_train_CTLE_C_inc       = 2,
			trx_train_dtl_hl_ratio_th  = 128):
    """
    TRX optimization
    
    DSP spec section 7.1
    Controls: Table 28
    """
    global trx_train_tp_trx_opt_lp0_val, trx_train_tp_trx_opt_hp0_val, trx_train_tp_trx_opt_triggered

    
    tx_ffe_gradient = [1,-1,-1,-1]
    move_id = 0
    num_int_trial = 0
    txffe_updated = 0
     
    ffe_dtl = read_ffe_dtl()
    
    lp0  = 0
    hp0  = 0
    hsgn = -1
    # Max possible value for sums ~ 144, so need S9.0. 
    # Comparison requires 7b resolution, so need at least 16b integers
    for tap in ffe_dtl:
        lp0 += tap
        hp0 += hsgn*tap
        hsgn = -1*hsgn

    # Read-out registers for debugging 
    trx_train_tp_trx_opt_lp0_val = lp0  # S9.0
    trx_train_tp_trx_opt_hp0_val = hp0  # S9.0
    trx_train_tp_trx_opt_triggered = 0
    
    if lp0*2**7 < hp0*trx_train_dtl_hl_ratio_th:   # fixed point threshold comparison with 7b resolution
    # Currently only implement RX CTLE tuning
        trx_train_tp_trx_opt_triggered = 1
        ctle_grid_search(cds_mode = debug_rx_train_cds_mode,
                        **kwargs)
    return

            
    global_best = mse_mnt(False, trx_train_snr_len)
    best_R, best_C, best_GC = get_ctle()
    for iter_num in range(trx_train_iter_max):
        R_start, C_start, GC_start = get_ctle()
        ctle_grid_search(rx_train_opt_R_iter_max = 1, 
		 				 rx_train_opt_C_iter_max = 3, 
						 rx_train_opt_GC_iter_max = 1,
                         rx_train_opt_R_step = 1, 
						 rx_train_opt_C_step = 3, 
						 rx_train_opt_GC_step = 1,
                         rx_train_opt_adc_sat_th =7, 
						 rx_train_opt_adc_th1 = 56, 
						 rx_train_opt_snr_th =0, 
                         cds_mode = rx_cds_mode)

        
        new_global_best = mse_mnt(False, trx_train_snr_len)
        if (new_global_best > global_best):
            global_best = new_global_best
            best_R, best_C, best_GC = get_ctle()
        
        #check lock and in unlocked set the best known configuraiton
        snr_dtl = mse_mnt(True, trx_train_snr_len)
        if not(check_cdr_lock() or snr_dtl > trx_train_snr_dtl_check):
            print('Possible loss of lock')
            print('Setting the best known CTLE')
            set_ctle(best_R, best_C, best_GC)
        
        if (R_start== get_ctle()[0]) and (C_start ==get_ctle()[1]) and (GC_start ==get_ctle()[2]):
            move_id = 0
            print("No change in CTLE")
        else:
            move_id = 1

        # for plotting only
        if (enable_plot == 1):
            snr_dp = mse_mnt(False, trx_train_snr_len) /2.0**5
            snr_dp_list.append(snr_dp)
            mse_dp = read_mse() / 2.0**16
            mse_dp_list.append(mse_dp)

        if (trx_train_tx_train_en == 1):
            #txffe_shape_base_train(2, 5)
            #tx_ffe_gradient, txffe_updated = txffe_gradient_base_train( 1, 2, [1,1,0,1] , tx_ffe_gradient, 0, 655, 60)
            tx_ffe_gradient, txffe_updated = txffe_gradient_base_train( 1, 2, [1,1,0,1] , tx_ffe_gradient, 0, 7, 56)
            move_id = (move_id or txffe_updated)
            
            print('Tx FFE is updated? ' + str(txffe_updated))

            #only for matlab
            #print('Tx FFE after Iteration ' + str(iter_num) +':')
            #print(read_tx_ffe())
            
            #for plotting 
            if (enable_plot == 1):
                #cds()
                snr_dp = mse_mnt(False, trx_train_snr_len) / 2.0**5
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
    
    




def train_pass_check(trx_train_pass_check_trx_snr=80,trx_train_pass_check_rx_snr=104):
     if trx_train_tx_train_en == 1:
         if ( mse_mnt(False, trx_train_snr_len)  > trx_train_pass_check_trx_snr * 2.0**2):
             return 1
     else:
         if ( mse_mnt(False, trx_train_snr_len)  > trx_train_pass_check_rx_snr * 2.0**2):
             return 1
 
def ctle_tune_GC_mid(rx_train_coarse_gain_tune_en =1, rx_train_mid_freq_tune_en =1, 
              rx_train_coarse_gain_tune_step = 1, rx_train_ctle_tune_snr_th = 8,
              rx_train_ctle_tune_timer=0.001):
    """
    CTLE tunining
    DSP spec section 5.5
    Controls: Table 25
    """
    set_lms_continous()
    
    if rx_train_coarse_gain_tune_en == 1:
        best_snr_dp = mse_mnt(False, trx_train_snr_len)
        new_snr_dp = best_snr_dp
        GC_sat = 1
        while ((GC_sat >= 0) and (new_snr_dp + rx_train_ctle_tune_snr_th >= best_snr_dp)):
            GC_sat = ctle_gain_coarse_incdec(-rx_train_coarse_gain_tune_step)
            time.sleep(rx_train_ctle_tune_timer)
            if GC_sat >= 0:
                new_snr_dp = mse_mnt(False, trx_train_snr_len)
                if new_snr_dp + rx_train_ctle_tune_snr_th >= best_snr_dp:
                    best_snr_dp = new_snr_dp
                else:
                    ctle_gain_coarse_incdec(+rx_train_coarse_gain_tune_step)
                    time.sleep(rx_train_ctle_tune_timer)
                    break
                
    if rx_train_mid_freq_tune_en == 1:
        best_snr_dp = mse_mnt(False, trx_train_snr_len)
        write('rx_ctle_mid_freq_en_lane',0)
        time.sleep(rx_train_ctle_tune_timer)
        new_snr_dp = mse_mnt(False, trx_train_snr_len) 
        if new_snr_dp <= best_snr_dp + rx_train_ctle_tune_snr_th: 
            write('rx_ctle_mid_freq_en_lane',1)
            time.sleep(rx_train_ctle_tune_timer)

    disable_lms_continous()
    
def smooth_ctrl_opt(reg,snr_th,ctrl_start,ctrl_stop,step=1,rx_train_ctle_tune_timer=0.001):
    """
    Helper funciton for CTLE tunining
    """
    # taking the best measure, better a mid-point?
    snr_best = -1
    ctrl_best = -1
    ctrl_cur = -1
    init_set = get_ctle()
    set_lms_continous()
    if step > 0:
        ctrl_range = range(ctrl_start,ctrl_stop+1,step)
    else:
        ctrl_range = range(ctrl_start,ctrl_stop-1,step)
    for ctrl in ctrl_range:
        ctrl_cur = ctrl
        if reg=='R':
            set_ctle(ctrl,init_set[1],init_set[2])
        elif reg=='C':
            set_ctle(init_set[0],ctrl,init_set[2])
        elif reg=='GC':
            set_ctle(init_set[0],init_set[1],ctrl)
        else:
            write(reg,ctrl)
            time.sleep(rx_train_ctle_tune_timer)
        snr = mse_mnt(False, trx_train_snr_len)
        print('{}={}, SNR={}'.format(reg,ctrl,snr/2.0**5))
        if (snr > snr_best + snr_th):
            snr_best = snr
            ctrl_best = ctrl
            print('Best updated: {}={}, SNR={}'.format(reg,ctrl_best,snr_best/2.0**5))
    if step > 0:
        rev_ctrl_range = range(ctrl_cur,ctrl_best-1,-step)
    else:
        rev_ctrl_range = range(ctrl_cur,ctrl_best+1,-step)       
    for ctrl in rev_ctrl_range:
        if reg=='R':
            set_ctle(ctrl,init_set[1],init_set[2])
        elif reg=='C':
            set_ctle(init_set[0],ctrl,init_set[2])
        elif reg=='GC':
            set_ctle(init_set[0],init_set[1],ctrl)
        else:
            write(reg,ctrl)
        time.sleep(rx_train_ctle_tune_timer)
        if not(reg in ['R', 'C']):
            print('going back: {}={}'.format(reg,ctrl))
    snr = mse_mnt(False, trx_train_snr_len)
    print('Best: {}={}, SNR-best={}, SNR-now={}'.format(reg,ctrl_best,snr_best/2.0**5,snr/2.0**5))
    disable_lms_continous()

def ctle_tune_cur(rx_train_ctle_tune_rl1_en=1,rx_train_ctle_tune_rl1_step_dn=8, 
                  rx_train_ctle_tune_rl1_snr_th=16, rx_train_ctle_tune_cur_snr_th=16, 
                  rx_train_ctle_tune_curtia_en=1, rx_train_ctle_tune_cur1_en=0,
                  rx_train_ctle_tune_cur2_en=0, rx_train_ctle_tune_rl1_extra_en=0,
                  rx_train_ctle_tune_r_en=0, rx_train_ctle_tune_c_en=0,
                  rx_train_ctle_tune_gc_en=0, rx_train_ctle_tune_r_step_up=2,
                  rx_train_ctle_tune_c_step_dn=6, rx_train_ctle_tune_gc_step_up=1,
                  rx_train_ctle_tune_r_step_dn=2, rx_train_ctle_tune_rc_snr_th=8):
    """
    CTLE tunining
    DSP spec section 5.5
    Controls: Table 25
    """
        
    rl1_init = read('rx_ctle_rl1_ctrl_lane[3:0]')
    rl1_min = max(0,rl1_init-rx_train_ctle_tune_rl1_step_dn)
    if rx_train_ctle_tune_rl1_en==1:
        smooth_ctrl_opt('rx_ctle_rl1_ctrl_lane[3:0]',rx_train_ctle_tune_rl1_snr_th,rl1_init,rl1_min,-1)
    if read('rx_ctle_rl1_ctrl_lane[3:0]')>=rl1_init-1: # if rl1 was decreased then it was a short channel, do not touch currents
        cur_max = 7 # bit-width
        if rx_train_ctle_tune_curtia_en==1:
            smooth_ctrl_opt('rx_ctle_cur_tia_sel2_lane[2:0]',rx_train_ctle_tune_cur_snr_th,read('rx_ctle_cur_tia_sel2_lane[2:0]'),cur_max,1)
        if rx_train_ctle_tune_cur1_en==1:
            smooth_ctrl_opt('rx_ctle_cur1_sel2_lane[2:0]',rx_train_ctle_tune_cur_snr_th,read('rx_ctle_cur1_sel2_lane[2:0]'),cur_max,1)
        if rx_train_ctle_tune_cur2_en==1:
            smooth_ctrl_opt('rx_ctle_cur2_sel2_lane[2:0]',rx_train_ctle_tune_cur_snr_th,read('rx_ctle_cur2_sel2_lane[2:0]'),cur_max,1)
        if rx_train_ctle_tune_rl1_extra_en==1:
            smooth_ctrl_opt('rx_ctle_rl1_extra_lane[2:0]',rx_train_ctle_tune_cur_snr_th,read('rx_ctle_rl1_extra_lane[2:0]'),cur_max,1)
    
    # go back to R and C since currents could have affected DC vs peak ratio        
    if rx_train_ctle_tune_r_en==1:
        R_start = get_ctle()[0]
        R_stop = min(R_start+rx_train_ctle_tune_r_step_up,trx_train_ctle_R_max)
        smooth_ctrl_opt('R',rx_train_ctle_tune_rc_snr_th,R_start,R_stop,1)
        if get_ctle()[0] == R_start:
            R_stop = max(R_start-rx_train_ctle_tune_r_step_dn,trx_train_ctle_R_min)
            smooth_ctrl_opt('R',rx_train_ctle_tune_rc_snr_th,R_start,R_stop,-1)
            
    
    if rx_train_ctle_tune_c_en==1:
        C_start = get_ctle()[1]
        C_stop = max(C_start-rx_train_ctle_tune_c_step_dn,trx_train_ctle_C_min)
        smooth_ctrl_opt('C',rx_train_ctle_tune_rc_snr_th,C_start,C_stop,-1)
    
    if rx_train_ctle_tune_gc_en==1:
        GC_start = get_ctle()[2]
        GC_stop = min(GC_start+rx_train_ctle_tune_gc_step_up,trx_train_ctle_GC_max)
        smooth_ctrl_opt('GC',rx_train_ctle_tune_rc_snr_th,GC_start,GC_stop,1)

def set_agc_init_vs_temp(
                        trx_train_bg_agc_gain_init_m40 = 16,  # AGC init gain at -40C
                        trx_train_bg_agc_gain_init_125 = 16,  # AGC init gain at 125C
                        ):
    current_temp = 0 #get_temp_cap2(), comment it out temporarily since the run would fail. 
					 # but need to implement in FW.
    if current_temp < -40:
        agc_init = trx_train_bg_agc_gain_init_m40
    elif current_temp > 125:
        agc_init = trx_train_bg_agc_gain_init_125
    else:
        # linear interpolation between -40C and 125C
        agc_init = trx_train_bg_agc_gain_init_m40 + ((current_temp+40)*(trx_train_bg_agc_gain_init_125-trx_train_bg_agc_gain_init_m40))//165
    # set the initial AGC gain value
    write('bg_agc_gain_init_lane[4:0]',agc_init)
        
def cds_prot(trx_train_dtl_snr_af_cds_th=56):
    global cds_fault_triggered
    cds('default')
    snr_dtl = mse_mnt(True, trx_train_snr_len)
    cds_fault_triggered = 0
    if snr_dtl < trx_train_dtl_snr_af_cds_th*(2.0**2):#(1/2^3)*2^5
        #reverse scan freq
        freq_ofst = read('cds_dtl_freq_ofst_lane[15:0]') #save
        freq_ofst_2comp = 0
        if (freq_ofst >= 2**15):
            freq_ofst_2comp = freq_ofst - 2**16
        else:
            freq_ofst_2comp = freq_ofst
        if (freq_ofst_2comp <= -2**15):
            reverse_freq_ofst = 2**15-1
        else:
            reverse_freq_ofst = -freq_ofst_2comp           
        write('cds_dtl_freq_ofst_lane[15:0]', reverse_freq_ofst,'two')
        cds('default')
        write('cds_dtl_freq_ofst_lane[15:0]',freq_ofst) #restore
        cds_fault_triggered = 1
        
def trx_train_top(trx_train_tx_train_en         = 1, 
                  trx_train_txffe_preset_ext_en = 0,
                  trx_train_txffe_preset_ext    = 3,
                  trx_train_adc_cal_gao_en      = 1,
                  trx_train_adc_cal_skew_en     = 1,
                  trx_train_dfe_start_val       = 0,
                  trx_train_dfe_stop_val        = 25,
                  trx_train_dtl_snr_af_cds_th = 56):
    """
    The TRX train top

    DSP section 8
    Controls: Table 28
    """
      
        
    #check ADC saturation
    if (enable_plot==1):
        snr_dp = mse_mnt(False, trx_train_snr_len) /2.0**5
        snr_dp_list.append(snr_dp)
        mse_dp = read_mse() / 2.0**16
        mse_dp_list.append(mse_dp)
        
        
    init_adc_sat_check()
    
    if (trx_train_tx_train_en == 1 and read('rx_pam2_en_lane')==0): 
        mode_update_flag = set_tx_modulation(ctrl_pat=CP_PAM4_GRAY) 
        
    if (trx_train_tx_train_en == 1) and read('rx_pam2_en_lane')==1: ## save output in read-out register
        preset_num = trx_train_txffe_det_preset()
    
	# run Rx Blind Train
    rx_blind_train()  
 
    # Determine tx ffe preset number
    if (trx_train_tx_train_en == 1) and read('rx_pam2_en_lane')==0: ## save output in read-out register
        preset_num = trx_train_txffe_det_preset()                 

    #BW+gain training for long and short reach channels
    if (trx_train_lr_sr_bw_gain_train_en==1) and (trx_train_tx_train_en == 0):
        cur_controlled_triggered = rx_lr_sr_bw_gain_train()
        #perform a blind training to reduce possible misequalization effect
        if cur_controlled_triggered == 1 and trx_train_blind_after_bw_gain_en==1: #add a register to control
            rx_blind_train()

    cds_prot(trx_train_dtl_snr_af_cds_th)
 
    if (trx_train_adc_cal_gao_en ==1) and (trx_train_tx_train_en==0):
        drv_adc_cal('gao', 'train')     
    if (trx_train_adc_cal_skew_en == 1):
        if (trx_train_adc_cal_gao_en ==1):
            if (trx_train_tx_train_en==0):
                drv_adc_cal('gao', 'background')
            drv_adc_cal('skew','train')
            drv_adc_cal('gao', 'stop')
        
    
    if not(check_cdr_lock() or snr_dtl > trx_train_snr_dtl_check):
        print('Possible loss of lock')
        #TO-DO: handling of cdr unlock issue 
        #while (cdr_lock==0):
        #    do something
        #    TO-DO probably CDS default with different R and C
    
    # for plotting and debug
    if (enable_plot==1):
        snr_dp = mse_mnt(False, trx_train_snr_len) /2.0**5
        snr_dp_list.append(snr_dp)
        mse_dp = read_mse() / 2.0**16
        mse_dp_list.append(mse_dp)

    # Ask for TX FFE update
    if (trx_train_tx_train_en == 1): 
        trx_train_txffe_set_preset(tx_train_preset_ctle_comp_en = 0, 
                                   tx_train_preset_ctle_comp_iter_max = 3, 
                                   tx_train_preset_ctle_comp_r_step = 1,
                                   preset_num = preset_num)
        
        if trx_train_lr_sr_bw_gain_train_en==1:
            cur_controlled_triggered = rx_lr_sr_bw_gain_train()
        
        #if preset_num != 1: # if not pam2
        rx_blind_train()
        cds_prot(trx_train_dtl_snr_af_cds_th)
        #cds('default')
        
        if tx_train_shape_based_train_en == 1:
            txffe_shape_base_train(tx_train_min_trial=2, tx_train_max_trial=8, tx_train_adapt_en = [0,0,1,0,0])        

    if (trx_train_trx_opt_en ==1):
        trx_opt(2,5,trx_train_tx_train_en,0,1,2)
        
    if trx_train_trx_opt_fine_en == 1 and trx_train_tx_train_en == 1:
        trx_opt_fine()
        #cds('default')
        
    if (rx_train_ctle_tune_en ==1):
        ctle_tune_GC_mid(rx_train_coarse_gain_tune_en = 1, rx_train_mid_freq_tune_en = 1,
                  rx_train_coarse_gain_tune_step = 1, rx_train_ctle_tune_snr_th = 16)
        
        ctle_tune_cur(rx_train_ctle_tune_rl1_en=1,rx_train_ctle_tune_rl1_step_dn=8, 
                      rx_train_ctle_tune_rl1_snr_th=16, rx_train_ctle_tune_cur_snr_th=16, 
                      rx_train_ctle_tune_curtia_en=1, rx_train_ctle_tune_cur1_en=0,
                      rx_train_ctle_tune_cur2_en=0, rx_train_ctle_tune_rl1_extra_en=0)
    
    disable_lms_continous()

    if trx_train_dfe_opt_en == 1: 
        dfe_opt(start=trx_train_dfe_start_val, stop=trx_train_dfe_stop_val, verbose=1)
    
    
    if trx_train_flt_opt_en == 1:
        ffe_flt_opt()
            
    # for plotting and debug
    if (enable_plot==1):
        snr_dp = mse_mnt(False, trx_train_snr_len) /2.0**5
        snr_dp_list.append(snr_dp)
        mse_dp = read_mse() / 2.0**16
        mse_dp_list.append(mse_dp)

    ## plotting
    if (enable_plot == 1):
        fig, (ax1, ax2) = matplotlib.pyplot.subplots(2)
        ax1.plot(snr_dp_list)
        ax1.set_ylim()
        ax1.set_title('Data Path SNR')
        ax2.plot(mse_dp_list)
        ax2.set_title('Data Path MSE')
        matplotlib.pyplot.show()
        print("Configuration after training: ")
        #print_config()
        print("SNR after training: ")
        print(snr_dp_list[-1])

def trx_train_param_init():
    global trx_train_tx_train_en
    trx_train_tx_train_en = 0
	
	
def skew_train(bg_skew_cal_blind_en = 0,
               dtl_snr_af_cal_th = 60,
               skew_prot_timer = 5e-4,
               trx_train_snr_len = 6,
               ):
    
    if bg_skew_cal_blind_en==0:
        skew_triggered = 3        
    else:
        skew_triggered = 4
           
    write('TR_SKEW_CAL_BLIND_EN_LANE',bg_skew_cal_blind_en)
    write('BG_SKEW_CAL_BLIND_EN_LANE',bg_skew_cal_blind_en)
    drv_adc_cal('skew','train') #gear shift
    drv_adc_cal('skew','background')
    time.sleep(skew_prot_timer) 
    drv_adc_cal('skew','stop')        
    
    snr_dp = mse_mnt(False, trx_train_snr_len)
    snr_dtl = mse_mnt(True, trx_train_snr_len)  
    if snr_dtl < dtl_snr_af_cal_th*(2.0**2):#(1/2^3)*2^5
        drv_adc_cal('skew','reset')
        cds('default')
        drv_adc_cal('skew','train')
        drv_adc_cal('skew','background')
        time.sleep(skew_prot_timer)
        drv_adc_cal('skew','stop')
        if trx_train_dfe_opt_en == 1: 
            dfe_opt()
        snr_dp = mse_mnt(False, trx_train_snr_len)
        snr_dtl = mse_mnt(True, trx_train_snr_len)            
        
    return snr_dp, snr_dtl, skew_triggered
  
          
def skew_prot(trx_train_dtl_snr_af_cal_th = 60, 
              trx_train_skew_prot_timer = 5e-4, #Could not too small for option 2 
              skew_prot_option = 2,
              skew_prot_snr_delta = 0,
              ):
                  
    #save 
    tr_skew_cal_save = read('TR_SKEW_CAL_BLIND_EN_LANE')
    bg_skew_cal_save = read('BG_SKEW_CAL_BLIND_EN_LANE')
    
    skew_prot_triggered = 0 # in FW make a read-only out-register
    
    if skew_prot_option == 1:
        
              
        drv_adc_cal('skew','background')
        time.sleep(trx_train_skew_prot_timer)
        drv_adc_cal('skew','stop')
        
        #Skew Protection 1
        snr_dtl = mse_mnt(True, trx_train_snr_len)
        snr_dp = mse_mnt(False, trx_train_snr_len)
        if snr_dtl < trx_train_dtl_snr_af_cal_th*(2.0**2):#(1/2^3)*2^5
            drv_adc_cal('skew','reset')
            drv_adc_cal('skew','background')
            time.sleep(trx_train_skew_prot_timer)
            drv_adc_cal('skew','stop')
            skew_prot_triggered = 1
            
            #Skew Protection 2 (Blind Skew)
            snr_dtl = mse_mnt(True, trx_train_snr_len)
            snr_dp = mse_mnt(False, trx_train_snr_len)
            if snr_dtl < trx_train_dtl_snr_af_cal_th*(2.0**2):                
                write('TR_SKEW_CAL_BLIND_EN_LANE',1)
                write('BG_SKEW_CAL_BLIND_EN_LANE',1)			
                drv_adc_cal('skew','reset')
                drv_adc_cal('skew','train')
                drv_adc_cal('skew','background')
                time.sleep(trx_train_skew_prot_timer)
                drv_adc_cal('skew','stop')                        
                skew_prot_triggered = 2
                
    elif skew_prot_option == 2:
        
        
        #BG Blind Skew
        snr_dp_bld, _, skew_prot_triggered = skew_train(bg_skew_cal_blind_en = 1,
               dtl_snr_af_cal_th = trx_train_dtl_snr_af_cal_th,
               skew_prot_timer = trx_train_skew_prot_timer,
               trx_train_snr_len = trx_train_snr_len
               )
        
        #BG TED based
        snr_dp_ted, _, skew_prot_triggered = skew_train(bg_skew_cal_blind_en = 0,
               dtl_snr_af_cal_th = trx_train_dtl_snr_af_cal_th,
               skew_prot_timer = trx_train_skew_prot_timer,
               trx_train_snr_len = trx_train_snr_len
               )
        
        #Make a decision
        if (snr_dp_bld + skew_prot_snr_delta) > snr_dp_ted:
            #BG Blind Skew
            snr_dp_bld, _, skew_prot_triggered = skew_train(bg_skew_cal_blind_en = 1,
               dtl_snr_af_cal_th = trx_train_dtl_snr_af_cal_th,
               skew_prot_timer = trx_train_skew_prot_timer,
               trx_train_snr_len = trx_train_snr_len
               )

        
	#restore
    write('BG_SKEW_CAL_BLIND_EN_LANE',bg_skew_cal_save)
    write('TR_SKEW_CAL_BLIND_EN_LANE',tr_skew_cal_save)
    
    return skew_prot_triggered
    

def train_init(trx_train_init_adc_cal_gao_reset = 1,
               trx_train_init_adc_cal_skew_reset = 1,
               trx_train_adc_ref_sel_lane = 3):
    """
    Training Initialization
    DSP spec section 8.1
    Controls: Table 35
    """
    # stop LMS, stop DTL
    # Set the initial AGC gain based on current temperature
    set_agc_init_vs_temp()
    drv_pwr_opt(0)
    write('rx_eq_pat_prot_en_lane',0) 
    cds('reset')

    drv_adc_cal('skew','stop')
    drv_adc_cal('gao','stop')

    # write ADC reference - at the moment to allow configuration from software
    write('rx_adc_ref_sel_lane[2:0]',trx_train_adc_ref_sel_lane)
    if (trx_train_init_adc_cal_skew_reset == 1):
        #reset skew
        drv_adc_cal('skew','reset')

    if (trx_train_init_adc_cal_gao_reset == 1):
        #reset adc-cal
        drv_adc_cal('gao','reset')
        #enable adc-cal
        drv_adc_cal('ofst','startup')
        drv_adc_cal('gain','startup')
    
    # Reloading CTLE Speed Table Value
    global ctle_cur1_init, ctle_cur2_init, ctle_cur_tia_init
    ctle_cur1_init, ctle_cur2_init, ctle_cur_tia_init = load_ctle_from_spt()

    if (rx_train_mid_freq_tune_en==1) and (rx_train_ctle_tune_en ==1):
        write('rx_ctle_rs1_mid_lane[2:0]', 7)
        write('rx_ctle_cs1_mid_lane[2:0]', 7)
        write('rx_ctle_mid_freq_en_lane',1)
    else:
        write('rx_ctle_mid_freq_en_lane',0)

    
def train_end(trx_train_bg_blind_skew_force_th = 24,
              trx_train_ffe_len_opt_en         = 0,
	      trx_train_skew_prot_option       = 1,
              trx_train_skew_prot_snr_delta    = 0,
              trx_train_end_dtl_pst1_en        = 1,
              trx_train_dtl_snr_af_cal_th      = 60,
              trx_train_skew_prot_timer        = 5e-4
              ):
    """
    Training End
    DSP spec section 8.2
    Controls: Table 36
    """
    
    time.sleep(100e-6)
    tp_snr_dtl_bf_skew_prot = mse_mnt(True, trx_train_snr_len)
    #save tp_snr_dtl_bf_skew_prot
	
    skew_prot_triggered = skew_prot(trx_train_dtl_snr_af_cal_th,trx_train_skew_prot_timer)
	
    if trx_train_end_dtl_pre1_pst1_frz == 1: ## freeze both DTL PRE1/PST1 
        write('rx_dtl_lms_ffe_pre1_en_lane', 0)
        write('rx_dtl_lms_ffe_pst1_en_lane', 0)
    else:
        dtl_pst1_zero_triggered = 0
        if trx_train_end_dtl_pst1_en == 1:
            if trx_train_end_dtl_pst1_skip_en == 1:
                dtl_pre1 = read('rx_dtl_lms_ffe_pre1_coe_lane[5:0]','two')                
                if dtl_pre1!=0:
                    write('rx_dtl_lms_ffe_pre1_en_lane', 0)
                    write('rx_dtl_lms_ffe_pst1_en_lane', 1)
                else:
                    dtl_pst1_zero_triggered = 1                
            else:
                write('rx_dtl_lms_ffe_pre1_en_lane', 0)
                write('rx_dtl_lms_ffe_pst1_en_lane', 1)
  
    if trx_train_agc_en == 1:
        drv_adc_cal('AGC','background')
    
    if trx_train_dp_pst1_fz_dfe_en==1:
        write('rx_dp_lms_ffe_pst1_en_lane', 0)
        write('rx_dp_lms_dfe_en_lane', 1) 
    
    time.sleep(100e-6)    
    tp_snr_dtl_bf_ph_opt = mse_mnt(True, trx_train_snr_len)
    #save tp_snr_dtl_bf_ph_opt
        
    if trx_train_dtl_phase_opt_en==1:
        set_lms_continous()
        dtl_phase_opt(reset=1)
        disable_lms_continous()

    time.sleep(100e-6)
    tp_snr_dtl_af_ph_opt = mse_mnt(True, trx_train_snr_len)
    #save tp_snr_dtl_bf_ph_opt

    #write('rx_adc_if_target_pat_frez_en_lane',0)
    if (trx_train_tx_train_en==0) and (trx_train_gao_bg_en == 1):
        drv_adc_cal('gao','background')
    
    time.sleep(100e-6)    
    tp_snr_dtl_af_gao_bg = mse_mnt(True, trx_train_snr_len)
    #save tp_snr_dtl_af_gao_bg
	
    if skew_prot_triggered == 2:
        bg_skew_cal = read('BG_SKEW_CAL_BLIND_EN_LANE')
        write('BG_SKEW_CAL_BLIND_EN_LANE',1)			
        drv_adc_cal('skew','background')
        write('BG_SKEW_CAL_BLIND_EN_LANE',bg_skew_cal)
    else:
        drv_adc_cal('skew','background')
    
    time.sleep(100e-6)    
    tp_snr_dtl_af_skew_bg = mse_mnt(True, trx_train_snr_len)
    #save tp_snr_dtl_af_skew_bg
		
    #drv_pwr_opt(pwr_opt_en=1) #If use it, pt_lock = 0 
       
    write('rx_eq_pat_prot_en_lane',trx_train_pat_prot_en)    
    
    set_lms_continous()
    
    time.sleep(100e-6)
    tp_snr_dtl_af_lms_cont = mse_mnt(True, trx_train_snr_len)
    #save tp_snr_dtl_af_lms_cont
    
    drv_gb_fifo_clk_toggle()
    time.sleep(100e-6)
    
    tp_snr_dtl_af_clk_tog = mse_mnt(True, trx_train_snr_len)
    #save tp_snr_dtl_af_clk_tog
    
    if trx_train_ffe_len_opt_en==1: 
        ffe_len_opt(cumsum_th = 2)
    time.sleep(100e-6)
    
    set_lms_continous()
    time.sleep(200e-6)

    if(train_pass_check()==1):
        print("Training Pass!!!")
        
def train_cont(train_cont_mode_dtl_ph_opt_en=1, train_cont_mode_timer_len = 100):
    """
    Continuous Mode (Tracking)
    DSP spec section 9
    Controls: Table 39
    """
    if not(train_cont_mode_dtl_ph_opt_en and (rx_train_done or tx_train_done)) or read('reg_rd_pin_rx_sq_out_lpf_rd_lane')==1:
        return
    
    if timer_done==1:
        dtl_phase_opt()
        time.sleep(train_cont_mode_timer_len*5/1000.) # ms
    
# just an example of TRX sequence
def main():
    """
    MAIN function, this runs automatically when trx_train_test.py is invoked
    """
    if trx_train_tx_train_en==1:
        drv_tx_train_if_init()
    train_init(trx_train_init_adc_cal_gao_reset = 1, trx_train_init_adc_cal_skew_reset = 1)
    #trx_train_param_init()
    
    trx_train_top(trx_train_tx_train_en, trx_train_adc_cal_gao_en = 1, trx_train_adc_cal_skew_en = 1)
    train_end()

    if trx_train_tx_train_en==1:
        drv_tx_train_comp() 
        #set_lms_continous()
        time.sleep(100e-6) #100 us
        drv_adc_cal('gao','background')
		
if __name__ == "__main__":
    #f = open("training_results_CAd2d_multiple_adapt.txt","a+")
    #for ii in range(20):
    #    snr_dp_list[:] = []
    #    mse_dp_list[:] = []
        main()
    #    f.write(repr(snr_dp_list) + "\n")
    #f.close()


