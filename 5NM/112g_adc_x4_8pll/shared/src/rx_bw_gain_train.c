/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file rx_bw_gain_train.c
* \purpose trx train for 112G_ADC 7nm
* \History
*	7/29/2020 Minh Tran     Initial 
*/
#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK3
#pragma constseg CSEG
#endif

static void set_rx_ctle_cur1(bool sel, bool sel2, uint8_t cur) {
    if (sel)
        reg_RX_CTLE_CUR1_SEL_LANE_3_0 = cur;
    else if (sel2)
        reg_RX_CTLE_CUR1_SEL2_LANE_2_0 = cur;
}

static void set_rx_ctle_cur2(bool sel, bool sel2, uint8_t cur) {
    if (sel)
        reg_RX_CTLE_CUR2_SEL_LANE_3_0 = cur;
    else if (sel2)
        reg_RX_CTLE_CUR2_SEL2_LANE_2_0 = cur;
}

#if 0
static void set_rx_ctle_cur_tia(bool sel, bool sel2, uint8_t cur) {
    if (sel)
        reg_RX_CTLE_CUR_TIA_SEL_LANE_3_0 = cur;
    else if (sel2)
        reg_RX_CTLE_CUR_TIA_SEL2_LANE_2_0 = cur;
}
#endif

/*
 * RX Short and long reach bandwidth and gain training
 *
 * DSP spec section 5.6
 * Controls: Table 26
 */
bool rx_lr_sr_bw_gain_train(void) BANKING_CTRL
{
    bool cur_controlled_triggered, sel, sel2;
    uint16_t sft_dcs_lp0_rms, sft_dcs_hp0_rms;
    uint16_t adc_in_rms, adc_in_sat, adc_in_sat2;
    uint8_t cur2, cur1, cur_tia, rx_speed;
    uint8_t rx_train_sr_bw_cur_tia_lim, rx_train_sr_bw_cur1_lim, rx_train_sr_bw_cur2_lim;
    int8_t Ctle_R, Ctle_C, Ctle_GC;
    int Nx;

    TRAIN_STATUS = RX_BW_GAIN_TRAIN_START;

    // initialize
    cur_controlled_triggered = 1;

    if (lnx_RX_TRAIN_LR_SR_BW_GAIN_PHASE_SCAN_EN_LANE)
        drv_ph_scn_en(lnx_RX_TRAIN_LR_SR_BW_GAIN_PHASE_SCAN_PPM_LANE_15_0);

    // measure frequency component
    //set_dp_lp(0)
    //sft_dcs_lp0_rms, _, _ = sh_sig_mnt(True,0)
    //set_dp_hp(0)
    //sft_dcs_hp0_rms, _, _ = sh_sig_mnt(True,0)
    drv_adc_to_dp_sigmnt_init();
    drv_shared_sigmnt_init();

    set_dp_lp(0);
    drv_sigmnt_shared_in_abs = 1;
    drv_sigmnt_shared_rot    = 1;
    drv_sigmnt_shared_len    = 8;
 
    drv_shared_sigmnt();
    sft_dcs_lp0_rms = drv_sigmnt_shared_ave;
 
    set_dp_hp(0);
    drv_shared_sigmnt();
    sft_dcs_hp0_rms = drv_sigmnt_shared_ave;

    // measure ADC saturation
    // adc_in_rms, adc_in_sat, adc_in_sat2 = adc_sig_mnt(True,rx_train_lr_sr_bw_gain_adc_th1,rx_train_lr_sr_bw_gain_adc_th2)
    adc_sig_mnt(lnx_RX_TRAIN_LR_SR_BW_GAIN_ADC_TH1_LANE_5_0, lnx_RX_TRAIN_LR_SR_BW_GAIN_ADC_TH2_LANE_5_0);
    //drv_sigmnt_adc_to_dp_in_abs = 1;
    //drv_sigmnt_adc_to_dp_th1    = lnx_RX_TRAIN_LR_SR_BW_GAIN_ADC_TH1_LANE_5_0;
    //drv_sigmnt_adc_to_dp_th2    = lnx_RX_TRAIN_LR_SR_BW_GAIN_ADC_TH2_LANE_5_0;
    //drv_sigmnt_adc_to_dp_rot    = 1;
    //drv_sigmnt_adc_to_dp_len    = 8;//0;//8;

    //drv_adc_to_dp_sigmnt();
    adc_in_rms = drv_sigmnt_adc_to_dp_ave;
    adc_in_sat = drv_sigmnt_adc_to_dp_cdf1;
    adc_in_sat2 = drv_sigmnt_adc_to_dp_cdf2;

    // print('lp={},hp={},sat1={}, sat2={}, rms={},hp/lp={:.3}'.format(sft_dcs_lp0_rms,sft_dcs_hp0_rms,adc_in_sat,adc_in_sat2,adc_in_rms,sft_dcs_hp0_rms/(sft_dcs_lp0_rms*1.0)))

    //calculate ratio of frequency compoent
    // hp_lp_ration Unsinged 8 bit
    // add tp 
    //global rx_train_tp_lr_sr_bw_gain_lp_val, rx_train_tp_lr_sr_bw_gain_hp_val
    lnx_RX_TRAIN_TP_LR_SR_BW_GAIN_LP_LANE_15_0 = sft_dcs_lp0_rms;
    lnx_RX_TRAIN_TP_LR_SR_BW_GAIN_HP_LANE_15_0 = sft_dcs_hp0_rms;

    //global ctle_cur1_init, ctle_cur2_init, ctle_cur_tia_init
//    if sft_dcs_hp0_rms <= sft_dcs_lp0_rms:
//        hp_lp_ration = (sft_dcs_hp0_rms*(2**8))/(sft_dcs_lp0_rms*1.0)
//    else:
//        hp_lp_ration = 2**8

    // read current values
    cur2 = reg_RX_CTLE_CUR2_SEL_LANE_3_0;
    cur1 = reg_RX_CTLE_CUR1_SEL_LANE_3_0;
    cur_tia = reg_RX_CTLE_CUR_TIA_SEL_LANE_3_0;
    rx_speed = reg_PHY_GEN_RX_LANE_5_0;

    // Ctle_R, Ctle_C, Ctle_GC = get_ctle()
    Ctle_R = signed_ctle_R;
    Ctle_C = signed_ctle_C;
    Ctle_GC = signed_ctle_GC;

    if (lnx_RX_TRAIN_LR_SR_BW_GAIN_PHASE_SCAN_EN_LANE)
        drv_ph_scn_dis();

    // if adc_in_sat < rx_train_lr_bw_gain_adc_sat_th and (sft_dcs_hp0_rms*(2**8) < sft_dcs_lp0_rms*rx_train_lr_hp_lp_ration_max) and rx_train_lr_bw_gain_train_en==1: #lr channels
    if ((adc_in_sat < lnx_RX_TRAIN_LR_BW_GAIN_ADC_SAT_TH_LANE_15_0) &&
        (((uint32_t)sft_dcs_hp0_rms << 8) < ((uint32_t)sft_dcs_lp0_rms * lnx_RX_TRAIN_LR_HP_LP_RATION_MAX_LANE_7_0)) &&
        lnx_RX_TRAIN_LR_BW_GAIN_TRAIN_EN_LANE) { // lr channels

        sel = 0; sel2 = 0;
        if ((rx_speed == 34) || (rx_speed == 35) || (rx_speed == 37) || (rx_speed == 38) || (rx_speed == 45)) {
            //cur2_var_str = 'RX_CTLE_CUR2_SEL_LANE[3:0]'
            //cur1_var_str = 'RX_CTLE_CUR1_SEL_LANE[3:0]'
            //cur_tia_var_str = 'RX_CTLE_CUR_TIA_SEL_LANE[3:0]'
            sel = 1;
        }
        else if ((rx_speed == 39) || (rx_speed == 40) || (rx_speed == 41)) {
            //cur2_var_str = 'RX_CTLE_CUR2_SEL2_LANE[2:0]'
            //cur1_var_str = 'RX_CTLE_CUR1_SEL2_LANE[2:0]'
            //cur_tia_var_str = 'RX_CTLE_CUR_TIA_SEL2_LANE[2:0]'
            sel2 = 1;
            //also initialize the variables
            cur2 = reg_RX_CTLE_CUR2_SEL2_LANE_2_0;
            cur1 = reg_RX_CTLE_CUR1_SEL2_LANE_2_0;
            cur_tia = reg_RX_CTLE_CUR_TIA_SEL2_LANE_2_0;
        }

        // Increase gain/bw appropriately based on ratio of frequency component
        if ((rx_speed == 34) || (rx_speed == 35) || (rx_speed == 37) || (rx_speed == 38) || (rx_speed == 45) ||
            (rx_speed == 39) || (rx_speed == 40) || (rx_speed == 41) || lnx_RX_TRAIN_LR_FORCE_SPEED_EN_LANE) { // or force_en = 0
            if ((((uint32_t)sft_dcs_lp0_rms*(lnx_RX_TRAIN_LR_HP_LP_RATION_MIN_LANE_7_0+7*(uint32_t)lnx_RX_TRAIN_LR_HP_LP_RATION_STEP_LANE_7_0)) <= ((uint32_t)sft_dcs_hp0_rms << 8)) &&
                (((uint32_t)sft_dcs_hp0_rms << 8) < ((uint32_t)sft_dcs_lp0_rms*lnx_RX_TRAIN_LR_HP_LP_RATION_MAX_LANE_7_0)))  // 0.85 to 0.9
            {
                //set_ctle(Ctle_R, Ctle_C, Ctle_GC+1)
                //set_ctle(Ctle_R, Ctle_C);
                set_gain_coarse(Ctle_GC+1);
            }
            else if ((((uint32_t)sft_dcs_lp0_rms*(lnx_RX_TRAIN_LR_HP_LP_RATION_MIN_LANE_7_0+6*(uint32_t)lnx_RX_TRAIN_LR_HP_LP_RATION_STEP_LANE_7_0)) <= ((uint32_t)sft_dcs_hp0_rms << 8)) &&
                (((uint32_t)sft_dcs_hp0_rms << 8) < ((uint32_t)sft_dcs_lp0_rms*(lnx_RX_TRAIN_LR_HP_LP_RATION_MIN_LANE_7_0+7*(uint32_t)lnx_RX_TRAIN_LR_HP_LP_RATION_STEP_LANE_7_0))))  // 0.8 to 0.85
            {
                //set_ctle(Ctle_R, Ctle_C, Ctle_GC+2)
                //set_ctle(Ctle_R, Ctle_C);
                set_gain_coarse(Ctle_GC+2);
            }
            else if ((((uint32_t)sft_dcs_lp0_rms*(lnx_RX_TRAIN_LR_HP_LP_RATION_MIN_LANE_7_0+5*(uint32_t)lnx_RX_TRAIN_LR_HP_LP_RATION_STEP_LANE_7_0)) <= ((uint32_t)sft_dcs_hp0_rms << 8)) &&
                (((uint32_t)sft_dcs_hp0_rms << 8) < ((uint32_t)sft_dcs_lp0_rms*(lnx_RX_TRAIN_LR_HP_LP_RATION_MIN_LANE_7_0+6*(uint32_t)lnx_RX_TRAIN_LR_HP_LP_RATION_STEP_LANE_7_0))))  //  0.75 to 0.8
            {
                //set_ctle(Ctle_R, Ctle_C, Ctle_GC+2);
                //set_ctle(Ctle_R, Ctle_C);
                set_gain_coarse(Ctle_GC+2);
                set_rx_ctle_cur1(sel, sel2, cur1);
                set_rx_ctle_cur2(sel, sel2, cur2+1);
            }
            else if ((((uint32_t)sft_dcs_lp0_rms*(lnx_RX_TRAIN_LR_HP_LP_RATION_MIN_LANE_7_0+4*lnx_RX_TRAIN_LR_HP_LP_RATION_STEP_LANE_7_0)) <= ((uint32_t)sft_dcs_hp0_rms << 8)) &&
                (((uint32_t)sft_dcs_hp0_rms << 8) < ((uint32_t)sft_dcs_lp0_rms*(lnx_RX_TRAIN_LR_HP_LP_RATION_MIN_LANE_7_0+5*lnx_RX_TRAIN_LR_HP_LP_RATION_STEP_LANE_7_0))))  // 0.7 to 0.75
            {
                //set_ctle(Ctle_R, Ctle_C, Ctle_GC+2);
                //set_ctle(Ctle_R, Ctle_C);
                set_gain_coarse(Ctle_GC+2);
                set_rx_ctle_cur1(sel, sel2, cur1);
                set_rx_ctle_cur2(sel, sel2, cur2+2);
            }
            else if ((((uint32_t)sft_dcs_lp0_rms*(lnx_RX_TRAIN_LR_HP_LP_RATION_MIN_LANE_7_0+3*(uint32_t)lnx_RX_TRAIN_LR_HP_LP_RATION_STEP_LANE_7_0)) <= ((uint32_t)sft_dcs_hp0_rms << 8)) &&
                (((uint32_t)sft_dcs_hp0_rms << 8) < ((uint32_t)sft_dcs_lp0_rms*(lnx_RX_TRAIN_LR_HP_LP_RATION_MIN_LANE_7_0+4*(uint32_t)lnx_RX_TRAIN_LR_HP_LP_RATION_STEP_LANE_7_0))))  // 0.65 to 0.7
            {
                //set_ctle(Ctle_R, Ctle_C, Ctle_GC+2);
                //set_ctle(Ctle_R, Ctle_C);
                set_gain_coarse(Ctle_GC+2);
                set_rx_ctle_cur1(sel, sel2, cur1+1);
                set_rx_ctle_cur2(sel, sel2, cur2+2);
            }
            else if ((((uint32_t)sft_dcs_lp0_rms*(lnx_RX_TRAIN_LR_HP_LP_RATION_MIN_LANE_7_0+2*(uint32_t)lnx_RX_TRAIN_LR_HP_LP_RATION_STEP_LANE_7_0)) <= ((uint32_t)sft_dcs_hp0_rms << 8)) &&
                (((uint32_t)sft_dcs_hp0_rms << 8) < ((uint32_t)sft_dcs_lp0_rms*(lnx_RX_TRAIN_LR_HP_LP_RATION_MIN_LANE_7_0+3*(uint32_t)lnx_RX_TRAIN_LR_HP_LP_RATION_STEP_LANE_7_0))))  // 0.6 to 0.65
            {
                //set_ctle(Ctle_R, Ctle_C, Ctle_GC+2);
                //set_ctle(Ctle_R, Ctle_C);
                set_gain_coarse(Ctle_GC+2);
                set_rx_ctle_cur1(sel, sel2, cur1+2);
                set_rx_ctle_cur2(sel, sel2, cur2+2);
            }
            else if ((((uint32_t)sft_dcs_lp0_rms*(lnx_RX_TRAIN_LR_HP_LP_RATION_MIN_LANE_7_0+lnx_RX_TRAIN_LR_HP_LP_RATION_STEP_LANE_7_0)) <= ((uint32_t)sft_dcs_hp0_rms << 8)) &&
                (((uint32_t)sft_dcs_hp0_rms << 8) < ((uint32_t)sft_dcs_lp0_rms*(lnx_RX_TRAIN_LR_HP_LP_RATION_MIN_LANE_7_0+2*(uint32_t)lnx_RX_TRAIN_LR_HP_LP_RATION_STEP_LANE_7_0))))  // 0.55 to 0.6
            {
                //set_ctle(Ctle_R, Ctle_C, Ctle_GC+2);
                //set_ctle(Ctle_R, Ctle_C);
                set_gain_coarse(Ctle_GC+2);
                set_rx_ctle_cur1(sel, sel2, cur1+2);
                set_rx_ctle_cur2(sel, sel2, cur2+3);
            }
            else if ((((uint32_t)sft_dcs_lp0_rms*lnx_RX_TRAIN_LR_HP_LP_RATION_MIN_LANE_7_0) <= ((uint32_t)sft_dcs_hp0_rms << 8)) &&
                (((uint32_t)sft_dcs_hp0_rms << 8) < ((uint32_t)sft_dcs_lp0_rms*(lnx_RX_TRAIN_LR_HP_LP_RATION_MIN_LANE_7_0+lnx_RX_TRAIN_LR_HP_LP_RATION_STEP_LANE_7_0))))  // 0.5 to 0.55
            {
                //set_ctle(Ctle_R, Ctle_C, Ctle_GC+2);
                //set_ctle(Ctle_R, Ctle_C);
                set_gain_coarse(Ctle_GC+2);
                set_rx_ctle_cur1(sel, sel2, cur1+2);
                if (sel2)
                    set_rx_ctle_cur2(sel, sel2, cur2+3);
                else
                    set_rx_ctle_cur2(sel, sel2, cur2+4);
            }
            else if (((uint32_t)sft_dcs_hp0_rms << 8) < ((uint32_t)sft_dcs_lp0_rms*lnx_RX_TRAIN_LR_HP_LP_RATION_MIN_LANE_7_0))  // 0.5
            {
                //set_ctle(Ctle_R, Ctle_C, Ctle_GC+2);
                //set_ctle(Ctle_R, Ctle_C);
                set_gain_coarse(Ctle_GC+2);
                if (sel2) {
                    set_rx_ctle_cur1(sel, sel2, cur1+3);
                    set_rx_ctle_cur2(sel, sel2, cur2+3);
                }
                else {
                    set_rx_ctle_cur1(sel, sel2, cur1+4);
                    set_rx_ctle_cur2(sel, sel2, cur2+4);
                }
            }

            // print('LR currents cur_tia={},cur1={},cur2={}'.format(read('RX_CTLE_CUR_TIA_SEL_LANE[3:0]'),read('RX_CTLE_CUR1_SEL_LANE[3:0]'),read('RX_CTLE_CUR2_SEL_LANE[3:0]')))
        } 
        else
            cur_controlled_triggered = 0;
    }
    else if ((adc_in_sat > lnx_RX_TRAIN_SR_BW_GAIN_ADC_SAT_TH_LANE_15_0) && (lnx_RX_TRAIN_SR_BW_GAIN_TRAIN_EN_LANE)) { // sr channels
        if (lnx_RX_TRAIN_LR_SR_BW_GAIN_PHASE_SCAN_EN_LANE)
            drv_ph_scn_en(lnx_RX_TRAIN_LR_SR_BW_GAIN_PHASE_SCAN_PPM_LANE_15_0);

        // measure ADC satuation 
        // adc_in_rms, adc_in_sat, adc_in_sat2 = adc_sig_mnt(True,rx_train_lr_sr_bw_gain_adc_th1,rx_train_lr_sr_bw_gain_adc_th2)
        adc_sig_mnt(lnx_RX_TRAIN_LR_SR_BW_GAIN_ADC_TH1_LANE_5_0, lnx_RX_TRAIN_LR_SR_BW_GAIN_ADC_TH2_LANE_5_0);
        //drv_sigmnt_adc_to_dp_in_abs = 1;
        //drv_sigmnt_adc_to_dp_th1    = lnx_RX_TRAIN_LR_SR_BW_GAIN_ADC_TH1_LANE_5_0;
        //drv_sigmnt_adc_to_dp_th2    = lnx_RX_TRAIN_LR_SR_BW_GAIN_ADC_TH2_LANE_5_0;
        //drv_sigmnt_adc_to_dp_rot    = 1;
        //drv_sigmnt_adc_to_dp_len    = 8;

        //drv_adc_to_dp_sigmnt();
        adc_in_rms = drv_sigmnt_adc_to_dp_ave;
        adc_in_sat = drv_sigmnt_adc_to_dp_cdf1;
        adc_in_sat2 = drv_sigmnt_adc_to_dp_cdf2;

        //rx_train_sr_bw_cur_tia_lim = ctle_cur_tia_init - rx_train_sr_bw_cur_tia_red_delta if (ctle_cur_tia_init >= rx_train_sr_bw_cur_tia_red_delta) else 0
        rx_train_sr_bw_cur_tia_lim = (ctle_cur_tia_init >= lnx_RX_TRAIN_SR_BW_CUR_TIA_RED_DELTA_LANE_3_0) ? (ctle_cur_tia_init - lnx_RX_TRAIN_SR_BW_CUR_TIA_RED_DELTA_LANE_3_0) : 0;
        //rx_train_sr_bw_cur1_lim = ctle_cur1_init - rx_train_sr_bw_cur1_red_delta if (ctle_cur1_init >= rx_train_sr_bw_cur1_red_delta) else 0
        rx_train_sr_bw_cur1_lim = (ctle_cur1_init >= lnx_RX_TRAIN_SR_BW_CUR1_RED_DELTA_3_0) ? (ctle_cur1_init - lnx_RX_TRAIN_SR_BW_CUR1_RED_DELTA_3_0) : 0;
        //rx_train_sr_bw_cur2_lim = ctle_cur2_init - rx_train_sr_bw_cur2_red_delta if (ctle_cur2_init >= rx_train_sr_bw_cur2_red_delta) else 0
        rx_train_sr_bw_cur2_lim = (ctle_cur2_init >= lnx_RX_TRAIN_SR_BW_CUR2_RED_DELTA_3_0) ? (ctle_cur2_init - lnx_RX_TRAIN_SR_BW_CUR2_RED_DELTA_3_0) : 0;

        Nx = 0; // used for 10G update
        while (adc_in_sat > lnx_RX_TRAIN_SR_BW_GAIN_ADC_SAT_TH_LANE_15_0) { // keep reducing currents in closed loop
            if (lnx_RX_TRAIN_SR_BW_CUR_RED_METHOD_LANE == 0) {  // Use previous code when "method" == 0
                if (cur_tia > rx_train_sr_bw_cur_tia_lim) { // reduce cur_tia first
                    cur_tia = cur_tia-1;
                    reg_RX_CTLE_CUR_TIA_SEL_LANE_3_0 = cur_tia;
                }
                else { // reduce cur1 and cur2 after reaching the limit on cur_tia
                    if ((cur1 > rx_train_sr_bw_cur1_lim) && (cur2 > rx_train_sr_bw_cur2_lim)) { // delta + protect it via positive 
                        cur2 = cur2-1;
                        cur1 = cur1-1;
                        reg_RX_CTLE_CUR1_SEL_LANE_3_0 = cur1;
                        reg_RX_CTLE_CUR2_SEL_LANE_3_0 = cur2;
                    }
                    else {
                        // reached the limit
                        // if still saturated, nothing to do, break
                        break;
                    }
                }
            }
            else {  // only for 10G: decrease 1 step in round-robin fashion - cur_tia, cur2, then cur1
                if ((Nx%3 == 0) && (cur_tia > rx_train_sr_bw_cur_tia_lim)) { // reduce cur_tia first
                    cur_tia = cur_tia-1;
                    reg_RX_CTLE_CUR_TIA_SEL_LANE_3_0 = cur_tia;
                }
                else if ((Nx%3 == 1) && (cur2 > rx_train_sr_bw_cur2_lim)) { // reduce cur2 next
                    cur2 = cur2-1;
                    reg_RX_CTLE_CUR2_SEL_LANE_3_0 = cur2;
                }
                else if ((Nx%3 == 2) && (cur1 > rx_train_sr_bw_cur1_lim)) { // finally reduce cur1
                    cur1 = cur1-1;
                    reg_RX_CTLE_CUR1_SEL_LANE_3_0 = cur1;
                }
                else {
                    // reached the limit
                    // if still saturated, nothing to do, break
                    break;
                }
                Nx = Nx + 1;
            }


            // adc_in_rms, adc_in_sat, adc_in_sat2 = adc_sig_mnt(True,rx_train_lr_sr_bw_gain_adc_th1,rx_train_lr_sr_bw_gain_adc_th2)
            adc_sig_mnt(lnx_RX_TRAIN_LR_SR_BW_GAIN_ADC_TH1_LANE_5_0, lnx_RX_TRAIN_LR_SR_BW_GAIN_ADC_TH2_LANE_5_0);
	    //drv_sigmnt_adc_to_dp_in_abs = 1;
	    //drv_sigmnt_adc_to_dp_th1    = lnx_RX_TRAIN_LR_SR_BW_GAIN_ADC_TH1_LANE_5_0;
	    //drv_sigmnt_adc_to_dp_th2    = lnx_RX_TRAIN_LR_SR_BW_GAIN_ADC_TH2_LANE_5_0;
	    //drv_sigmnt_adc_to_dp_rot    = 1;
	    //drv_sigmnt_adc_to_dp_len    = 8;

	    //drv_adc_to_dp_sigmnt();
	    adc_in_rms = drv_sigmnt_adc_to_dp_ave;
	    adc_in_sat = drv_sigmnt_adc_to_dp_cdf1;
	    adc_in_sat2 = drv_sigmnt_adc_to_dp_cdf2;
            // print('cur_tia={},cur1={},cur2={}, rms={}, sat1={},sat2={}'.format(cur_tia,cur1,cur2,adc_in_rms,adc_in_sat,adc_in_sat2))
        }

        if (lnx_RX_TRAIN_LR_SR_BW_GAIN_PHASE_SCAN_EN_LANE)
            drv_ph_scn_dis();

        //if trx_train_tx_train_en == 0: 
        //    rx_blind_train();
    }
    else
        cur_controlled_triggered = 0;

    TRAIN_STATUS = RX_BW_GAIN_TRAIN_END;

    return (cur_controlled_triggered);
}

