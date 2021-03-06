//--------------------------------------------------------------------
//  Company:        Marvell Semiconductor
//  Filename:       drv_eom.c
//  Description:    EOM Firmware Driver
//
//  History:
//  06/25/2019:     Bin Sheng, Initial Version
//--------------------------------------------------------------------

#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK1
#pragma constseg CSEG
#endif

__code uint8_t PRE_H_TB[]   = {  4, 4, 4, 2, 1, 0, 4 };
__code uint8_t PST_H_TB[]   = { 11,11,11, 5, 2, 1,11 };
__code uint8_t PRE_FFE_TB[] = {  4, 4, 4, 2, 1, 1, 4 };
__code uint8_t PST_FFE_TB[] = { 20,20,10, 5, 2, 2,20 };
__code uint8_t ADC_SEL_TB[] = {  8, 8, 4, 2, 1, 1, 8 };
__code int16_t UI_PHASE_TB[] = { 64, 128, 256, 512, 1024, 2048, 64 };
__code int16_t EYE_CHECK_STEP_TB[] = { 2, 4, 8, 16, 32, 64, 2 };

#define L1 PRE_H_TB[eom_rx_dp_par]
#define L2 PST_H_TB[eom_rx_dp_par]
#define M1 PRE_FFE_TB[eom_rx_dp_par]
#define M2 PST_FFE_TB[eom_rx_dp_par]
#define EOM_CDR_REDUCE_STEP 4
#define EOM_F0_IDX 16
#define EOM_F1_IDX 17
#define EOM_CHEST_MODE 0

uint8_t eom_rx_dp_par;
uint8_t eom_rx_pam2_en;
uint8_t eom_saved_chest_clk_en;
uint8_t eom_saved_rx_dp_lms_top_en;
uint8_t eom_saved_rx_adc_if_top_en;
uint8_t eom_saved_rx_skew_cal_en;
uint8_t eom_saved_rx_dtl_lms_top_en;
uint8_t eom_saved_rx_dtl_lpf_frz;
uint8_t eom_saved_rx_dtl_lpf_ki_en;
uint8_t eom_saved_rx_pu_eom_pi;
uint8_t eom_saved_rx_pu_eom_dly;
uint8_t eom_saved_rx_adc_if_eom_ofst_en;
uint8_t eom_saved_rx_adc_if_eom_gain_en;

int16_t drv_eom_chest_wa(void) BANKING_CTRL {
    int32_t chest_val0,chest_val1,chest_val;
    int16_t chest_val_out;

    reg_CHEST_IN_SEL_LANE_1_0 = 0;
    reg_CHEST_START_LANE = 1;
    while (!reg_CHEST_DONE_LANE);
    reg_CHEST_START_LANE = 0;

    chest_val0 = ((uint32_t)reg_CHEST_VAL_LANE_28_21 << 24) |
                 ((uint32_t)reg_CHEST_VAL_LANE_20_13 << 16) |
                 ((uint32_t)reg_CHEST_VAL_LANE_12_5  <<  8) |
                 ((uint32_t)reg_CHEST_VAL_LANE_4_0   <<  3);

    chest_val0 = chest_val0 >> (5 + reg_CHEST_LEN_LANE_3_0); //16 MSB = S16.12

    reg_CHEST_IN_SEL_LANE_1_0 = 1;
    reg_CHEST_START_LANE = 1;
    while (!reg_CHEST_DONE_LANE);
    reg_CHEST_START_LANE = 0;

    chest_val1 = ((uint32_t)reg_CHEST_VAL_LANE_28_21 << 24) |
                 ((uint32_t)reg_CHEST_VAL_LANE_20_13 << 16) |
                 ((uint32_t)reg_CHEST_VAL_LANE_12_5  <<  8) |
                 ((uint32_t)reg_CHEST_VAL_LANE_4_0   <<  3);

    chest_val1 = chest_val1 >> (5 + reg_CHEST_LEN_LANE_3_0); //16 MSB = S16.12

    chest_val = chest_val0 - chest_val1;

    if (eom_rx_pam2_en) chest_val = chest_val / 3;
    else chest_val = chest_val * 3 / 5;

    chest_val_out = (int16_t)chest_val;

    return chest_val_out;
}

/*
int16_t drv_eom_chest_wa(void) BANKING_CTRL {

    int16_t tmp0,tmp1;

    reg_CHEST_IN_SEL_LANE_1_0 = 0;
    tmp0 = drv_eom_chest();
    tmp0 >>= 1;

    reg_CHEST_IN_SEL_LANE_1_0 = 1;
    tmp1 = drv_eom_chest();
    tmp1 >>= 1;

    return (tmp0 - tmp1);
}
*/

bool check_eye(void) BANKING_CTRL {

    uint32_t  rd_mid_h_cnt;
    uint32_t  rd_mid_l_cnt;
    uint32_t  rd_top_h_cnt;
    uint32_t  rd_top_l_cnt;
    uint32_t  ber, ber_mid, ber_top;
    bool      eye_open;

    reg_EOM_HIST_DELTA_TH_TOP_LANE_6_0 = 0x40;
    reg_EOM_HIST_DELTA_TH_MID_LANE_7_0 = 0;

    reg_RX_EQ_EOM_RST_LANE = 1;
    reg_RX_EQ_EOM_RST_LANE = 0;

    reg_EOM_HIST_EN_LANE = 1;
    while(!reg_EOM_HIST_DONE_LANE);
    reg_EOM_HIST_EN_LANE = 0;

    rd_mid_h_cnt = ((uint32_t)reg_EOM_HIST_MID_H_CNT_LANE_31_0_b3<<24) |((uint32_t)reg_EOM_HIST_MID_H_CNT_LANE_31_0_b1<<16) |((uint32_t)reg_EOM_HIST_MID_H_CNT_LANE_31_0_b1<<8) | reg_EOM_HIST_MID_H_CNT_LANE_31_0_b0;
    rd_mid_l_cnt = ((uint32_t)reg_EOM_HIST_MID_L_CNT_LANE_31_0_b3<<24) |((uint32_t)reg_EOM_HIST_MID_L_CNT_LANE_31_0_b1<<16) |((uint32_t)reg_EOM_HIST_MID_L_CNT_LANE_31_0_b1<<8) | reg_EOM_HIST_MID_L_CNT_LANE_31_0_b0;
    rd_top_h_cnt = ((uint32_t)reg_EOM_HIST_TOP_H_CNT_LANE_31_0_b3<<24) |((uint32_t)reg_EOM_HIST_TOP_H_CNT_LANE_31_0_b1<<16) |((uint32_t)reg_EOM_HIST_TOP_H_CNT_LANE_31_0_b1<<8) | reg_EOM_HIST_TOP_H_CNT_LANE_31_0_b0;
    rd_top_l_cnt = ((uint32_t)reg_EOM_HIST_TOP_L_CNT_LANE_31_0_b3<<24) |((uint32_t)reg_EOM_HIST_TOP_L_CNT_LANE_31_0_b1<<16) |((uint32_t)reg_EOM_HIST_TOP_L_CNT_LANE_31_0_b1<<8) | reg_EOM_HIST_TOP_L_CNT_LANE_31_0_b0;

    if(eom_rx_pam2_en){
        ber = rd_mid_h_cnt + rd_mid_l_cnt;
        if (ber==0) eye_open = 1;
        else eye_open = 0;
    }
    else {
        ber_mid = rd_mid_h_cnt + rd_mid_l_cnt;
        ber_top = rd_top_h_cnt + rd_top_l_cnt;
        if(ber_mid < ber_top) ber = ber_mid;
        else ber = ber_top;
        if (ber<=8) eye_open = 1;
        else eye_open = 0;
    }

    return eye_open;
}

void drv_eom_prepare(void) BANKING_CTRL {

    eom_saved_rx_dp_lms_top_en = reg_RX_DP_LMS_TOP_EN_LANE;
    eom_saved_rx_adc_if_top_en = reg_RX_ADC_IF_TOP_EN_LANE;
    eom_saved_rx_skew_cal_en   = reg_RX_SKEW_CAL_EN_LANE;

    if(reg_RX_TH_SEL_LANE_1_0 == 3) eom_rx_dp_par = 0;
    else if(reg_RX_TH_SEL_LANE_1_0 == 2) eom_rx_dp_par = 1 + reg_RX_RATE_MODE_LANE_1_0;
    else if(reg_RX_TH_SEL_LANE_1_0 == 1) eom_rx_dp_par = 2 + reg_RX_RATE_MODE_LANE_1_0;
    else eom_rx_dp_par = 3 + reg_RX_RATE_MODE_LANE_1_0;

    reg_EOM_ISI_CUR_SEL_LANE_5_0 = L2;
    reg_RX_EQ_EOM_CLK_EN_LANE = 1;
    eom_rx_pam2_en = reg_RX_PAM2_EN_LANE;
    reg_EOM_HIST_LEN_LANE_5_0 = 0x16;
    reg_CHEST_LEN_LANE_3_0 = 0x8;
    drv_pwr_opt(0);

    if(reg_EOM_REC_MODE_LANE){
        eom_saved_rx_dtl_lms_top_en = reg_RX_DTL_LMS_TOP_EN_LANE;
        eom_saved_rx_dtl_lpf_ki_en = reg_RX_DTL_LPF_KI_EN_LANE;
        eom_saved_rx_dtl_lpf_frz = reg_RX_DTL_LPF_FRZ_LANE;

        reg_RX_DP_LMS_TOP_EN_LANE = 0;   delay(T_p5us);
        reg_RX_DTL_LMS_TOP_EN_LANE = 0;  delay(T_p5us);
        reg_RX_ADC_IF_TOP_EN_LANE = 0;   delay(T_p5us);
        reg_RX_SKEW_CAL_EN_LANE = 0;     delay(T_p5us);

        //Reduce CDR bandwidth
        //To be added:

        reg_RX_DTL_LPF_KI_EN_LANE = 0;
        reg_RX_DTL_LPF_FRZ_LANE = 0;
    }else{
        eom_saved_chest_clk_en = reg_CHEST_CLK_EN_LANE;
        eom_saved_rx_pu_eom_pi = reg_RX_PU_EOM_PI_LANE;
        eom_saved_rx_pu_eom_dly = reg_RX_PU_EOM_DLY_LANE;
        eom_saved_rx_adc_if_eom_ofst_en = reg_RX_ADC_IF_EOM_OFST_EN_LANE;
        eom_saved_rx_adc_if_eom_gain_en = reg_RX_ADC_IF_EOM_GAIN_EN_LANE;

        reg_RX_PU_EOM_PI_LANE = 0;
        reg_RX_PU_EOM_DLY_LANE = 0;
        delay(T_p125us); 
        //turn on PU_EOM_PI, wait 2us, then turn on PU_EOM_DLY
        reg_RX_PU_EOM_PI_LANE = 1;
        delay(T_2us); 
        reg_RX_PU_EOM_DLY_LANE = 1;

        //EOM OFST calibration
        reg_RX_ADC_IF_TOP_EN_LANE = 0;
        reg_RX_ADC_IF_EOM_OFST_EN_LANE = 1;
        reg_RX_ADC_IF_EOM_GAIN_EN_LANE = 0;
        reg_RX_ADC_IF_TOP_EN_LANE = 1;
        wait_converge(400); //2ms
        reg_RX_ADC_IF_TOP_EN_LANE = 0;

        //Freeze all data path adaptation loops
        // LMS loops: FFE, GAIN, DFE
        // Baseline wander: BLW
        reg_RX_DP_LMS_TOP_EN_LANE = 0;

        // ADC calibration loops: gain, offset, skew
        reg_RX_SKEW_CAL_EN_LANE = 0;

        //Align ADC_EOM and ADC_00
        reg_CHEST_CLK_EN_LANE = 1;
        reg_CHEST_MODE_LANE_1_0 = EOM_CHEST_MODE;
        reg_CHEST_ADC_SEL_LANE_5_0 = ADC_SEL_TB[eom_rx_dp_par];
        drv_eom_align_adc00();

        //EOM OFST and GAIN calibration
        reg_RX_ADC_IF_TOP_EN_LANE = 0;
        reg_RX_ADC_IF_EOM_OFST_EN_LANE = 1;
        reg_RX_ADC_IF_EOM_GAIN_EN_LANE = 1;
        reg_RX_ADC_IF_TOP_EN_LANE = 1;
        wait_converge(400); //2ms
        reg_RX_ADC_IF_TOP_EN_LANE = 0;
        reg_RX_ADC_IF_EOM_OFST_EN_LANE = 0;
        reg_RX_ADC_IF_EOM_GAIN_EN_LANE = 0;

        //restore ADC calibration
        reg_RX_ADC_IF_TOP_EN_LANE = eom_saved_rx_adc_if_top_en;
    }

}

void drv_eom_align_adc00(void) BANKING_CTRL {

    int16_t h_0, h_1ui, h_n1ui;
    int16_t ui_phase_num;
    int16_t coarse_ofst, fine_ofst;
    int16_t i;
    int16_t h1,tmp;
    int8_t  left = 0, right = 0;
    bool    open_flag = 0, left_found = 0, right_found = 0;
    uint8_t step;
    uint8_t saved_hist_len;

    ui_phase_num = UI_PHASE_TB[eom_rx_dp_par];
    step = EYE_CHECK_STEP_TB[eom_rx_dp_par];

    reg_CHEST_IN_SEL_LANE_1_0 = 1;
    reg_CHEST_DCS_SEL_LANE_5_0 = EOM_F0_IDX;

    h_0 = drv_eom_chest();

    drv_eom_move_phase(ui_phase_num);
    h_1ui = drv_eom_chest();

    drv_eom_move_phase(-2*ui_phase_num);
    h_n1ui = drv_eom_chest();

    coarse_ofst = (h_0 >= h_1ui && h_0 >= h_n1ui) ? 0 :
                                (h_1ui >= h_n1ui) ? ui_phase_num : -ui_phase_num;

    drv_eom_move_phase(coarse_ofst + (ui_phase_num/2));

    reg_CHEST_IN_SEL_LANE_1_0 = 2;
    reg_CHEST_DCS_SEL_LANE_5_0 = EOM_F1_IDX;
    h1 = drv_eom_chest_wa();

    if(h1 < 0) h1 = -h1;
    tmp = h1;
    fine_ofst = -ui_phase_num/2;

    for(i=1;i<=ui_phase_num;i++){
        drv_eom_move_phase(1);
        h1 = drv_eom_chest_wa();
        if(h1 < 0) h1 = -h1;

        if(h1 < tmp) {
            tmp = h1;
            fine_ofst = i - ui_phase_num/2;
        }
    }

    drv_eom_move_phase(-ui_phase_num/2 + fine_ofst);

    // Search the center
    saved_hist_len = reg_EOM_HIST_LEN_LANE_5_0;
    reg_EOM_HIST_LEN_LANE_5_0 = 0xe;
    drv_eom_move_phase(-ui_phase_num);
    for (i=0;i<=64;i++){
        if(!left_found || !right_found){
            drv_eom_set_recon_flt();
            open_flag = check_eye();
        }

        if(!left_found && open_flag){
            left = i - 32;
            left_found = 1;
        }

        if(left_found && !right_found && !open_flag){
            right = i - 33;
            right_found = 1;
        }
        drv_eom_move_phase(step);
    }
    drv_eom_move_phase(-ui_phase_num + (left + right - 2) * step / 2);
    reg_EOM_HIST_LEN_LANE_5_0 = saved_hist_len;
}

void drv_eom_move_phase(int16_t update_ph) BANKING_CTRL {

    int16_t ph_os_tmp;

    while( update_ph != 0 )
    {
        ph_os_tmp = (int16_t)reg_RX_EOM_DPHER_OFST_LANE_7_0;
        
        if(update_ph >= tag_CDR_OS_PH_JMP_STEP) {
            update_ph -= tag_CDR_OS_PH_JMP_STEP;
            ph_os_tmp += tag_CDR_OS_PH_JMP_STEP;
        }
        else if(update_ph <= -tag_CDR_OS_PH_JMP_STEP) {
            update_ph += tag_CDR_OS_PH_JMP_STEP;
            ph_os_tmp -= tag_CDR_OS_PH_JMP_STEP;	
        }
        else {
            ph_os_tmp += update_ph;	
            update_ph = 0;
        }

        reg_RX_EOM_DPHER_OFST_LANE_7_0 = (uint8_t)ph_os_tmp;
        reg_RX_EOM_DPHER_OFST_VALID_LANE = 1;
        reg_RX_EOM_DPHER_OFST_VALID_LANE = 0;
    }
}


void drv_eom_set_recon_flt(void) BANKING_CTRL {

    uint8_t eom_max_idx;
    uint8_t i,j;
    int16_t delta_h[20]; //S16.13                         //S16.12
    int8_t ffe[20];      //S8.6                           //S8.6
    int16_t conv[20];    //S29.19 (S24.19 acc 20)         //S28.18 (S23.18 acc 20)
    uint16_t gain;       //U11.6
    int32_t mult, acc;
    uint32_t acc_hi, acc_li;
    int32_t acc_hi_mult, acc_li_mult;
    int32_t acc_out;
    bool acc_sign;

    eom_max_idx = L1 + L2 + M1;

    reg_CHEST_IN_SEL_LANE_1_0 = 2;

    for(i=0;i<=eom_max_idx;i++){
        if( i <= (L1 + L2) ){
            reg_CHEST_DCS_SEL_LANE_5_0 = 16 - L1 + i;
            delta_h[i] = drv_eom_chest_wa();
        } else delta_h[i] = 0;
    }

    reg_RX_DP_LMS_REQ_LANE = 1;
    reg_RX_DP_LMS_REQ_LANE = 0;
    delay(T_p125us);

#ifdef DRV_CDS_V0
    ffe[ 0] = (int8_t)(reg_RX_DP_LMS_FFE_PRE4_COE_LANE_2_0  << 5) >> 5;
    ffe[ 1] = (int8_t)(reg_RX_DP_LMS_FFE_PRE3_COE_LANE_3_0  << 4) >> 4;
    ffe[ 2] = (int8_t)(reg_RX_DP_LMS_FFE_PRE2_COE_LANE_4_0  << 3) >> 3;
    ffe[ 3] = (int8_t)(reg_RX_DP_LMS_FFE_PRE1_COE_LANE_6_0  << 1) >> 1;
    ffe[ 4] = 0x40;
    ffe[ 5] = (int8_t)(reg_RX_DP_LMS_FFE_PST1_COE_LANE_6_0  << 1) >> 1;
    ffe[ 6] = (int8_t)(reg_RX_DP_LMS_FFE_PST2_COE_LANE_5_0  << 2) >> 2;
    ffe[ 7] = (int8_t)(reg_RX_DP_LMS_FFE_PST3_COE_LANE_4_0  << 3) >> 3;
    ffe[ 8] = (int8_t)(reg_RX_DP_LMS_FFE_PST4_COE_LANE_3_0  << 4) >> 4;
    ffe[ 9] = (int8_t)(reg_RX_DP_LMS_FFE_PST5_COE_LANE_3_0  << 4) >> 4;
    ffe[10] = (int8_t)(reg_RX_DP_LMS_FFE_PST6_COE_LANE_3_0  << 4) >> 4;
    ffe[11] = (int8_t)(reg_RX_DP_LMS_FFE_PST7_COE_LANE_2_0  << 5) >> 5;
    ffe[12] = (int8_t)(reg_RX_DP_LMS_FFE_PST8_COE_LANE_2_0  << 5) >> 5;
    ffe[13] = (int8_t)(reg_RX_DP_LMS_FFE_PST9_COE_LANE_2_0  << 5) >> 5;
    ffe[14] = (int8_t)(reg_RX_DP_LMS_FFE_PST10_COE_LANE_2_0 << 5) >> 5;
    ffe[15] = (int8_t)(reg_RX_DP_LMS_FFE_PST11_COE_LANE_2_0 << 5) >> 5;
    ffe[16] = (int8_t)(reg_RX_DP_LMS_FFE_PST12_COE_LANE_2_0 << 5) >> 5;
    ffe[17] = (int8_t)(reg_RX_DP_LMS_FFE_PST13_COE_LANE_2_0 << 5) >> 5;
    ffe[18] = (int8_t)(reg_RX_DP_LMS_FFE_PST14_COE_LANE_2_0 << 5) >> 5;
    ffe[19] = (int8_t)(reg_RX_DP_LMS_FFE_PST15_COE_LANE_2_0 << 5) >> 5;
#endif

#ifdef DRV_CDS_V1
    ffe[ 0] = (int8_t)(reg_RX_DP_LMS_FFE_PRE4_COE_LANE_4_0  << 3) >> 3;
    ffe[ 1] = (int8_t)(reg_RX_DP_LMS_FFE_PRE3_COE_LANE_4_0  << 3) >> 3;
    ffe[ 2] = (int8_t)(reg_RX_DP_LMS_FFE_PRE2_COE_LANE_5_0  << 2) >> 2;
    ffe[ 3] = (int8_t)(reg_RX_DP_LMS_FFE_PRE1_COE_LANE_6_0  << 1) >> 1;
    ffe[ 4] = 0x40;
    ffe[ 5] = (int8_t)(reg_RX_DP_LMS_FFE_PST1_COE_LANE_6_0  << 1) >> 1;
    ffe[ 6] = (int8_t)(reg_RX_DP_LMS_FFE_PST2_COE_LANE_5_0  << 2) >> 2;
    ffe[ 7] = (int8_t)(reg_RX_DP_LMS_FFE_PST3_COE_LANE_4_0  << 3) >> 3;
    ffe[ 8] = (int8_t)(reg_RX_DP_LMS_FFE_PST4_COE_LANE_3_0  << 4) >> 4;
    ffe[ 9] = (int8_t)(reg_RX_DP_LMS_FFE_PST5_COE_LANE_3_0  << 4) >> 4;
    ffe[10] = (int8_t)(reg_RX_DP_LMS_FFE_PST6_COE_LANE_3_0  << 4) >> 4;
    ffe[11] = (int8_t)(reg_RX_DP_LMS_FFE_PST7_COE_LANE_2_0  << 5) >> 5;
    ffe[12] = (int8_t)(reg_RX_DP_LMS_FFE_PST8_COE_LANE_2_0  << 5) >> 5;
    ffe[13] = (int8_t)(reg_RX_DP_LMS_FFE_PST9_COE_LANE_2_0  << 5) >> 5;
    ffe[14] = (int8_t)(reg_RX_DP_LMS_FFE_PST10_COE_LANE_2_0 << 5) >> 5;
    ffe[15] = (int8_t)(reg_RX_DP_LMS_FFE_PST11_COE_LANE_2_0 << 5) >> 5;
    ffe[16] = (int8_t)(reg_RX_DP_LMS_FFE_PST12_COE_LANE_2_0 << 5) >> 5;
    ffe[17] = (int8_t)(reg_RX_DP_LMS_FFE_PST13_COE_LANE_2_0 << 5) >> 5;
    ffe[18] = (int8_t)(reg_RX_DP_LMS_FFE_PST14_COE_LANE_2_0 << 5) >> 5;
    ffe[19] = (int8_t)(reg_RX_DP_LMS_FFE_PST15_COE_LANE_2_0 << 5) >> 5;
#endif

    for(i=0;i<=eom_max_idx;i++) ffe[i] = ffe[i+4-M1];

#ifdef DRV_CDS_V0
    gain = ((uint16_t)reg_RX_DP_LMS_GAIN_COE_LANE_10_8 << 8) | reg_RX_DP_LMS_GAIN_COE_LANE_7_0;
#endif

#ifdef DRV_CDS_V1
    gain = ((uint16_t)reg_RX_DP_LMS_GAIN_COE_LANE_10_0_b1 <<8) | reg_RX_DP_LMS_GAIN_COE_LANE_10_0_b0;
#endif

    for(i=0;i<=eom_max_idx;i++){
        acc = 0;
        for(j=0;j<=i;j++){
            mult = (int32_t)delta_h[j] * ffe[i-j];  // S16.13 * S8.6 = S23.19
            acc += mult;                            // S28.19
        }

        acc_sign = (acc >> 31) & 0x1;
        if(acc_sign)
            acc = -acc;

        acc_hi = (uint32_t)((acc >> 16) & 0xffff);
        acc_hi_mult = acc_hi * gain;
        if (acc_sign)
            acc_hi_mult = -acc_hi_mult;

        acc_li = (uint32_t)(acc & 0xffff);
        acc_li_mult = acc_li * gain;
        if (acc_sign)
            acc_li_mult = -acc_li_mult;

        acc_li_mult = acc_li_mult >> 16;
        acc_out = acc_hi_mult + acc_li_mult;

        //acc_out = (long long)acc * gain;           // S28.19 * U11.6 = S39.25       //S28.18 * U11.6 = S39.24
        acc_out = acc_out / 3;          // S38.25

        acc_out >>= 1;                  // S20.7

        // to S9.7
        if(acc_out > 255) conv[i] = 255;
        else if(acc_out < -256) conv[i] = -256;
        else conv[i] = (int16_t) acc_out;
    }

    for(i=0;i<16;i++){
        if(i<=(L1+L2)) conv[i] = conv[M1+i];     // (M1+i) is in [1,19]
        else conv[i] = 0;
    }

    reg_EOM_COEF15_LANE_8_0_b1 = (conv[15] >> 7) & 0x3;
    reg_EOM_COEF15_LANE_8_0_b0 = conv[15] & 0x7f;
    reg_EOM_COEF14_LANE_8_0_b1 = (conv[14] >> 8) & 0x1;
    reg_EOM_COEF14_LANE_8_0_b0 = conv[14] & 0xff;

    reg_EOM_COEF13_LANE_8_0_b1 = (conv[13] >> 6) & 0x7;
    reg_EOM_COEF13_LANE_8_0_b0 = conv[13] & 0x3f;
    reg_EOM_COEF12_LANE_8_0_b1 = (conv[12] >> 7) & 0x3;
    reg_EOM_COEF12_LANE_8_0_b0 = conv[12] & 0x7f;
    reg_EOM_COEF11_LANE_8_0_b1 = (conv[11] >> 8) & 0x1;
    reg_EOM_COEF11_LANE_8_0_b0 = conv[11] & 0xff;

    reg_EOM_COEF10_LANE_8_0_b1 = (conv[10] >> 6) & 0x7;
    reg_EOM_COEF10_LANE_8_0_b0 = conv[10] & 0x3f;
    reg_EOM_COEF9_LANE_8_0_b1  = (conv[9] >> 7) & 0x3;
    reg_EOM_COEF9_LANE_8_0_b0  = conv[9] & 0x7f;
    reg_EOM_COEF8_LANE_8_0_b1  = (conv[8] >> 8) & 0x1;
    reg_EOM_COEF8_LANE_8_0_b0  = conv[8] & 0xff;

    reg_EOM_COEF7_LANE_8_0_b1  = (conv[7] >> 6) & 0x7;
    reg_EOM_COEF7_LANE_8_0_b0  = conv[7] & 0x3f;
    reg_EOM_COEF6_LANE_8_0_b1  = (conv[6] >> 7) & 0x3;
    reg_EOM_COEF6_LANE_8_0_b0  = conv[6] & 0x7f;
    reg_EOM_COEF5_LANE_8_0_b1  = (conv[5] >> 8) & 0x1;
    reg_EOM_COEF5_LANE_8_0_b0  = conv[5] & 0xff;

    reg_EOM_COEF4_LANE_8_0_b1  = (conv[4] >> 6) & 0x7;
    reg_EOM_COEF4_LANE_8_0_b0  = conv[4] & 0x3f;
    reg_EOM_COEF3_LANE_8_0_b1  = (conv[3] >> 7) & 0x3;
    reg_EOM_COEF3_LANE_8_0_b0  = conv[3] & 0x7f;
    reg_EOM_COEF2_LANE_8_0_b1  = (conv[2] >> 8) & 0x1;
    reg_EOM_COEF2_LANE_8_0_b0  = conv[2] & 0xff;

    reg_EOM_COEF1_LANE_8_0_b1  = (conv[1] >> 7) & 0x3;
    reg_EOM_COEF1_LANE_8_0_b0  = conv[1] & 0x7f;
    reg_EOM_COEF0_LANE_8_0_b1  = (conv[0] >> 8) & 0x1;
    reg_EOM_COEF0_LANE_8_0_b0  = conv[0] & 0xff;

}

void drv_eom_exit(void) BANKING_CTRL {

    uint8_t i;

    reg_RX_DP_LMS_TOP_EN_LANE = eom_saved_rx_dp_lms_top_en;
    reg_RX_ADC_IF_TOP_EN_LANE = eom_saved_rx_adc_if_top_en;
    reg_RX_SKEW_CAL_EN_LANE = eom_saved_rx_skew_cal_en;

    if(reg_EOM_REC_MODE_LANE){
        reg_RX_DTL_LMS_TOP_EN_LANE = eom_saved_rx_dtl_lms_top_en;

        for(i=1;i<=EOM_CDR_REDUCE_STEP;i++){
            reg_RX_DTL_LPF_KI_SHIFT_LANE_4_0 = reg_RX_DTL_LPF_KI_SHIFT_LANE_4_0 + 1;
            reg_RX_DTL_LPF_KP_SHIFT_LANE_3_0 = reg_RX_DTL_LPF_KP_SHIFT_LANE_3_0 + 1;
            delay(T_10us);
        }
        reg_RX_DTL_LPF_KI_EN_LANE = eom_saved_rx_dtl_lpf_ki_en;
        reg_RX_DTL_LPF_FRZ_LANE = eom_saved_rx_dtl_lpf_frz;
    } else {
        reg_CHEST_CLK_EN_LANE = eom_saved_chest_clk_en;

        //turn off PU_EOM_DLY before PU_EOM_PI
        reg_RX_PU_EOM_DLY_LANE = 0;
        reg_RX_PU_EOM_PI_LANE = 0;

        reg_RX_EOM_DPHER_OFST_LANE_7_0 = 0;
        short_delay();
        reg_RX_EOM_DPHER_OFST_VALID_LANE = 1;
        reg_RX_EOM_DPHER_OFST_VALID_LANE = 0;

        //turn on PU_EOM_PI, wait 2us, then turn on PU_EOM_DLY
        reg_RX_PU_EOM_PI_LANE = eom_saved_rx_pu_eom_pi;
        delay(T_2us); 
        reg_RX_PU_EOM_DLY_LANE = eom_saved_rx_pu_eom_dly;
    }
    drv_pwr_opt(1);

}

int16_t drv_eom_chest(void) BANKING_CTRL {

    int32_t chest_val;
    int16_t chest_val_out;

    reg_CHEST_START_LANE = 1;
    while (!reg_CHEST_DONE_LANE);
    reg_CHEST_START_LANE = 0;

    chest_val = ((uint32_t)reg_CHEST_VAL_LANE_28_21 << 24) |
                ((uint32_t)reg_CHEST_VAL_LANE_20_13 << 16) |
                ((uint32_t)reg_CHEST_VAL_LANE_12_5  <<  8) |
                ((uint32_t)reg_CHEST_VAL_LANE_4_0   <<  3);

    chest_val = chest_val >> (4 + reg_CHEST_LEN_LANE_3_0); //16 MSB = S16.13

    if (eom_rx_pam2_en) chest_val = chest_val / 3;
    else chest_val = chest_val * 3 / 5;

    chest_val_out = (int16_t)chest_val;

    return chest_val_out;
}
