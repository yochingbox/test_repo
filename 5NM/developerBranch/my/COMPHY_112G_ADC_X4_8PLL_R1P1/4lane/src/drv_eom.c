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
#pragma constseg BANK1
#endif

__code uint8_t PRE_H_TB[]   = {  4, 4, 4, 2, 1, 0, 4, 4 };
__code uint8_t PST_H_TB[]   = { 11,11,11, 5, 2, 1,11,11 };
__code uint8_t PRE_FFE_TB[] = {  4, 4, 4, 2, 1, 1, 4, 4 };
__code uint8_t PST_FFE_TB[] = { 20,20,10, 5, 2, 2,20,20 };
__code uint8_t ADC_SEL_TB[] = {  8, 8, 4, 2, 1, 1, 8, 8 };
__code int16_t UI_PHASE_TB[] = { 64, 128, 256, 512, 1024, 2048, 64, 64 };

#define L1 PRE_H_TB[eom_rx_dp_par]
#define L2 PST_H_TB[eom_rx_dp_par]
#define M1 PRE_FFE_TB[eom_rx_dp_par]
#define M2 PST_FFE_TB[eom_rx_dp_par]
#define EOM_CDR_REDUCE_STEP 4
#define EOM_F0_IDX 16
#define EOM_F1_IDX 17
#define EOM_CHEST_LEN 0
#define EOM_CHEST_MODE 0

uint8_t eom_rx_dp_par;
uint8_t eom_rx_pam2_en;

void drv_eom_prepare(void) BANKING_CTRL {

    if(reg_RX_TH_SEL_LANE_1_0 == 3) eom_rx_dp_par = 0;
    else if(reg_RX_TH_SEL_LANE_1_0 == 2) eom_rx_dp_par = 1 + reg_RX_RATE_MODE_LANE_1_0;
    else if(reg_RX_TH_SEL_LANE_1_0 == 1) eom_rx_dp_par = 2 + reg_RX_RATE_MODE_LANE_1_0;
    else eom_rx_dp_par = 3 + reg_RX_RATE_MODE_LANE_1_0;

    reg_EOM_ISI_CUR_SEL_LANE_5_0 = L2;
    reg_RX_EQ_EOM_CLK_EN_LANE = 1;
    eom_rx_pam2_en = reg_RX_PAM2_EN_LANE;

    if(reg_EOM_REC_MODE_LANE){
        reg_RX_DP_LMS_TOP_EN_LANE = 0;   delay(T_p5us);
        reg_RX_DTL_LMS_TOP_EN_LANE = 0;  delay(T_p5us);
        reg_RX_ADC_IF_TOP_EN_LANE = 0;   delay(T_p5us);
        reg_RX_SKEW_CAL_EN_LANE = 0;     delay(T_p5us);

        //Reduce CDR bandwidth
        //To be added:

        reg_RX_DTL_LPF_KI_EN_LANE = 0;
        reg_RX_DTL_LPF_FRZ_LANE = 0;
    }else{
        reg_RX_PU_EOM_PI_LANE = 1;
        reg_RX_PU_EOM_DLY_LANE = 1;
        reg_CHEST_CLK_EN_LANE = 1;
        reg_CHEST_MODE_LANE_1_0 = EOM_CHEST_MODE;

        reg_CHEST_ADC_SEL_LANE_5_0 = ADC_SEL_TB[eom_rx_dp_par];
        reg_CHEST_LEN_LANE_3_0 = EOM_CHEST_LEN; //change only if the default value doesn't work
            
        //Align ADC_EOM and ADC_00
        drv_eom_align_adc00();

        //Freeze all data path adaptation loops
        // LMS loops: FFE, GAIN, DFE
        // Baseline wander: BLW
        reg_RX_DP_LMS_TOP_EN_LANE = 0;

        // ADC calibration loops: gain, offset, skew
        reg_RX_ADC_IF_TOP_EN_LANE = 0;
        reg_RX_SKEW_CAL_EN_LANE = 0;
    }

}

void drv_eom_align_adc00(void) BANKING_CTRL {

    int16_t h_0, h_1ui, h_n1ui;
    int16_t ui_phase_num;
    int16_t coarse_ofst, fine_ofst;
    int16_t i;
    int16_t h1,tmp;

    ui_phase_num = UI_PHASE_TB[eom_rx_dp_par];

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
    h1 = drv_eom_chest();

    if(h1 < 0) h1 = -h1;
    tmp = h1;
    fine_ofst = -ui_phase_num/2;
    
    for(i=1;i<=ui_phase_num;i++){
        drv_eom_move_phase(1);
        h1 = drv_eom_chest();
        if(h1 < 0) h1 = -h1;

        if(h1 < tmp) {
            tmp = h1;
            fine_ofst = i - ui_phase_num/2;
        }
    }

    drv_eom_move_phase(-ui_phase_num/2 + fine_ofst);

}

void drv_eom_move_phase(int16_t target) BANKING_CTRL {

    int16_t i;
    uint8_t cur_code;

    cur_code = reg_RX_EOM_DPHER_OFST_LANE_7_0;

    if(target>=0){
        for(i=1;i<=target;i++){
            cur_code += 1;
            reg_RX_EOM_DPHER_OFST_LANE_7_0 = cur_code;
            reg_RX_EOM_DPHER_OFST_VALID_LANE = 1;
            reg_RX_EOM_DPHER_OFST_VALID_LANE = 0;
        }
    } else {
        for(i=-1;i>=target;i--){
            cur_code -= 1;
            reg_RX_EOM_DPHER_OFST_LANE_7_0 = cur_code;
            reg_RX_EOM_DPHER_OFST_VALID_LANE = 1;
            reg_RX_EOM_DPHER_OFST_VALID_LANE = 0;
        }
    }
}


void drv_eom_set_recon_flt(void) BANKING_CTRL {

    uint8_t eom_max_idx;
    uint8_t i,j;
    int16_t delta_h[20]; //S16.13
    int8_t ffe[20];      //S8.6
    int32_t conv[20];    //S29.19 (S24.19 acc 20)
    uint16_t gain;       //U11.6
    signed long long temp;

    eom_max_idx = L1 + L2 + M1;

    reg_CHEST_IN_SEL_LANE_1_0 = 2;

    for(i=0;i<=eom_max_idx;i++){
        if( i <= (L1 + L2) ){
            reg_CHEST_DCS_SEL_LANE_5_0 = 16 - L1 + i;
            delta_h[i] = drv_eom_chest();
        } else delta_h[i] = 0;
    }

    reg_RX_DP_LMS_REQ_LANE = 1;
    reg_RX_DP_LMS_REQ_LANE = 0;

    ffe[ 0] = (int8_t)(reg_RX_DP_LMS_FFE_PRE4_COE_LANE_4_0  << 3) >> 3;
    ffe[ 1] = (int8_t)(reg_RX_DP_LMS_FFE_PRE3_COE_LANE_4_0  << 3) >> 3;
    ffe[ 2] = (int8_t)(reg_RX_DP_LMS_FFE_PRE2_COE_LANE_5_0  << 2) >> 2;
    ffe[ 3] = (int8_t)(reg_RX_DP_LMS_FFE_PRE1_COE_LANE_6_0  << 1) >> 1;
    ffe[ 4] = 0x40;
    ffe[ 5] = (int8_t)(reg_RX_DP_LMS_FFE_PST1_COE_LANE_6_0  << 1) >> 1;
    ffe[ 6] = (int8_t)(reg_RX_DP_LMS_FFE_PST2_COE_LANE_5_0  << 2) >> 2;
    ffe[ 7] = (int8_t)(reg_RX_DP_LMS_FFE_PST3_COE_LANE_4_0  << 3) >> 3;
    ffe[ 8] = (int8_t)(reg_RX_DP_LMS_FFE_PST4_COE_LANE_4_0  << 3) >> 3;
    ffe[ 9] = (int8_t)(reg_RX_DP_LMS_FFE_PST5_COE_LANE_4_0  << 3) >> 3;
    ffe[10] = (int8_t)(reg_RX_DP_LMS_FFE_PST6_COE_LANE_4_0  << 3) >> 3;
    ffe[11] = (int8_t)(reg_RX_DP_LMS_FFE_PST7_COE_LANE_3_0  << 4) >> 4;
    ffe[12] = (int8_t)(reg_RX_DP_LMS_FFE_PST8_COE_LANE_3_0  << 4) >> 4;
    ffe[13] = (int8_t)(reg_RX_DP_LMS_FFE_PST9_COE_LANE_2_0  << 5) >> 5;
    ffe[14] = (int8_t)(reg_RX_DP_LMS_FFE_PST10_COE_LANE_2_0 << 5) >> 5;
    ffe[15] = (int8_t)(reg_RX_DP_LMS_FFE_PST11_COE_LANE_2_0 << 5) >> 5;
    ffe[16] = (int8_t)(reg_RX_DP_LMS_FFE_PST12_COE_LANE_2_0 << 5) >> 5;
    ffe[17] = (int8_t)(reg_RX_DP_LMS_FFE_PST13_COE_LANE_2_0 << 5) >> 5;
    ffe[18] = (int8_t)(reg_RX_DP_LMS_FFE_PST14_COE_LANE_2_0 << 5) >> 5;
    ffe[19] = (int8_t)(reg_RX_DP_LMS_FFE_PST15_COE_LANE_2_0 << 5) >> 5;

    for(i=0;i<=eom_max_idx;i++) ffe[i] = ffe[i+4-M1];

    gain = ((uint16_t)reg_RX_DP_LMS_GAIN_COE_LANE_10_0_b1 <<8) | reg_RX_DP_LMS_GAIN_COE_LANE_10_0_b0;

    for(i=0;i<=eom_max_idx;i++){
        conv[i] = 0;
        for(j=0;j<=i;j++) conv[i] += delta_h[j] * ffe[i-j];

        temp = conv[i] * gain;  // S29.19 * U11.6
        temp /= 3;
        conv[i] = (temp >> 18) & 0xffffffff;

        // to S9.7
        if(conv[i] > 255) conv[i] = 255;
        else if(conv[i] < -256) conv[i] = -256;
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

    if(reg_EOM_REC_MODE_LANE){
        reg_RX_DP_LMS_TOP_EN_LANE = 1;
        reg_RX_DTL_LMS_TOP_EN_LANE = 1;
        reg_RX_ADC_IF_TOP_EN_LANE = 1;
        reg_RX_SKEW_CAL_EN_LANE = 1;
  
        for(i=1;i<=EOM_CDR_REDUCE_STEP;i++){
            reg_RX_DTL_LPF_KI_SHIFT_LANE_4_0 = reg_RX_DTL_LPF_KI_SHIFT_LANE_4_0 + 1;
            reg_RX_DTL_LPF_KP_SHIFT_LANE_3_0 = reg_RX_DTL_LPF_KP_SHIFT_LANE_3_0 + 1;
            delay(T_10us);
        }
        reg_RX_DTL_LPF_FRZ_LANE = 0;
    } else {
        reg_CHEST_CLK_EN_LANE = 0;
        reg_RX_DP_LMS_TOP_EN_LANE = 1;
        reg_RX_ADC_IF_TOP_EN_LANE = 1;
        reg_RX_SKEW_CAL_EN_LANE = 1;
    }

}

int16_t drv_eom_chest(void) BANKING_CTRL {

    int32_t chest_val;
    int16_t chest_val_out;

    reg_CHEST_START_LANE = 1;
    while((reg_MCU_DEBUGA_LANE_7_0=0xB8)&&!reg_CHEST_DONE_LANE);
    reg_CHEST_START_LANE = 0;
    
    chest_val = ((uint32_t)reg_CHEST_VAL_LANE_29_0_b3 << 26) |
                ((uint32_t)reg_CHEST_VAL_LANE_29_0_b2 << 18) |
                ((uint32_t)reg_CHEST_VAL_LANE_29_0_b1 << 10) |
                ((uint32_t)reg_CHEST_VAL_LANE_29_0_b0 <<  2);

    chest_val_out = chest_val >> (4 + EOM_CHEST_LEN); //16 MSB = S16.13

    if (eom_rx_pam2_en) chest_val_out = chest_val_out / 3;
    else chest_val_out = chest_val_out * 3 / 5;

    return chest_val_out;
}
