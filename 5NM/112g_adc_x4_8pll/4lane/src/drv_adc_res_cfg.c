#include "common.h"
#include "driver.h"

// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg CSEG
#endif

//#[res_sel, lsb_remove, delta_zero]
__code uint8_t adc_res[4][3] = {{ 0,  0, 30},  // [0, 0,-2]
                                { 1,  0, 29},  // [1, 0,-3]
                                { 1,  1, 28},  // [1, 1,-4]
                                { 2,  1, 26}}; // [2, 1,-6]

void drv_adc_res_cfg (uint8_t idx, uint8_t loop_ctrl_flag) BANKING_CTRL
{
    uint8_t sav_RX_DP_LMS_TOP_EN_LANE;
    uint8_t sav_RX_DTL_LMS_TOP_EN_LANE;
    uint8_t sav_RX_ADC_IF_TOP_EN_LANE;

    //save current ADC/LMS TOP enable
    sav_RX_DP_LMS_TOP_EN_LANE = reg_RX_DP_LMS_TOP_EN_LANE;
    sav_RX_DTL_LMS_TOP_EN_LANE = reg_RX_DTL_LMS_TOP_EN_LANE;
    sav_RX_ADC_IF_TOP_EN_LANE = reg_RX_ADC_IF_TOP_EN_LANE;

    //disable adapation loop
    if(loop_ctrl_flag)
    {
        drv_adc_cal(ADC_CAL_STOP_GAO);
        reg_RX_DP_LMS_TOP_EN_LANE = 0;
        reg_RX_DTL_LMS_TOP_EN_LANE = 0;
    }

    //load index table
    reg_RX_ADC_RES_SEL_LANE_1_0 = adc_res[idx][0];
    reg_RX_ADC_IF_LSB_REMOVE_LANE_1_0 = adc_res[idx][1];
    reg_RX_ADC_IF_DELTA_ZERO_LANE_4_0 = adc_res[idx][2];

    //start adapation loop for a period
    if(loop_ctrl_flag)
    {
        drv_adc_cal(ADC_CAL_CONT_GAO);
        wait_converge (reg_ADC_RES_TIMER_LANE_15_0);
        reg_RX_DP_LMS_TOP_EN_LANE = 1;
        reg_RX_DTL_LMS_TOP_EN_LANE = 1;
        wait_converge (reg_ADC_RES_TIMER_LANE_15_0);
    }

    //restore previous status
    if(sav_RX_ADC_IF_TOP_EN_LANE & !loop_ctrl_flag) //turn on only if off before
    {
        drv_adc_cal(ADC_CAL_CONT_GAO);
    }
    else if(!sav_RX_ADC_IF_TOP_EN_LANE & loop_ctrl_flag) //turn off only if on before
    {
        drv_adc_cal(ADC_CAL_STOP_GAO);
    }
    reg_RX_DP_LMS_TOP_EN_LANE = sav_RX_DP_LMS_TOP_EN_LANE;
    reg_RX_DTL_LMS_TOP_EN_LANE = sav_RX_DTL_LMS_TOP_EN_LANE;
}
