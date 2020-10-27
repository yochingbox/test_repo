//--------------------------------------------------------------------
//  Company:        Marvell Semiconductor
//  Filename:       drv_adc_to_dp_sigmnt.c
//  Description:    Signal Monitor Firmware Driver
//
//  History:
//  03/23/2019:     Chuan Lyu, Initial Version
//--------------------------------------------------------------------
#include "common.h"
#include "driver.h"

// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg CSEG
#endif

bool drv_adc_to_dp_sigmnt() BANKING_CTRL{
uint32_t sigmnt_adc_to_dp_ave_val = 0;
uint32_t sigmnt_adc_to_dp_cdf1_val = 0;
uint32_t sigmnt_adc_to_dp_cdf2_val = 0;

//uint8_t *sigmnt_adc_to_dp_done;
bool pass_sig=1;

//sigmnt_adc_to_dp_done = &(bool)reg_SIGMNT_ADC_TO_DP_DONE_LANE;
//Sequence
reg_SIGMNT_ADC_TO_DP_CLK_EN_LANE = 1;
reg_SIGMNT_ADC_TO_DP_START_LANE = 1;
//Time out: Tmax_dig_clk * Max_num_cycle = 2.36ns * 2**20 = 2468.37us
wait_for(reg_SIGMNT_ADC_TO_DP_DONE_LANE,2500);
if(timeout) {pass_sig=0;}

reg_SIGMNT_ADC_TO_DP_START_LANE = 0;

wait_for(!reg_SIGMNT_ADC_TO_DP_DONE_LANE,1);
if(timeout) {pass_sig=0;}

//Result processing
sigmnt_adc_to_dp_ave_val = ((uint32_t)reg_SIGMNT_ADC_TO_DP_AVE_LANE_26_19 << 19) + 
                           ((uint32_t)reg_SIGMNT_ADC_TO_DP_AVE_LANE_18_11 << 11) +
                           ((uint32_t)reg_SIGMNT_ADC_TO_DP_AVE_LANE_10_3 << 3) +
                           ((uint32_t)reg_SIGMNT_ADC_TO_DP_AVE_LANE_2_0); //S26.20;
sigmnt_adc_to_dp_ave_val = sigmnt_adc_to_dp_ave_val << (20-(8+reg_SIGMNT_ADC_TO_DP_LEN_LANE_3_0));
sigmnt_adc_to_dp_ave_val = sigmnt_adc_to_dp_ave_val >> 11; //S9.6
lnx_SIGMNT_ADC_TO_DP_VAL_AVE_LANE_15_8 = (sigmnt_adc_to_dp_ave_val >> 8) & 0xff;
lnx_SIGMNT_ADC_TO_DP_VAL_AVE_LANE_7_0 = sigmnt_adc_to_dp_ave_val & 0xff;

sigmnt_adc_to_dp_cdf1_val = ((uint32_t)reg_SIGMNT_ADC_TO_DP_CDF_TH1_LANE_19_12 << 12) +
                            ((uint32_t)reg_SIGMNT_ADC_TO_DP_CDF_TH1_LANE_11_4 << 4) +
                            ((uint32_t)reg_SIGMNT_ADC_TO_DP_CDF_TH1_LANE_3_0);
sigmnt_adc_to_dp_cdf1_val = sigmnt_adc_to_dp_cdf1_val << (20-(8+reg_SIGMNT_ADC_TO_DP_LEN_LANE_3_0));
sigmnt_adc_to_dp_cdf1_val = sigmnt_adc_to_dp_cdf1_val >> 4;
lnx_SIGMNT_ADC_TO_DP_VAL_CDF1_LANE_15_8 = (sigmnt_adc_to_dp_cdf1_val >> 8) & 0xff;
lnx_SIGMNT_ADC_TO_DP_VAL_CDF1_LANE_7_0 = sigmnt_adc_to_dp_cdf1_val & 0xff;

sigmnt_adc_to_dp_cdf2_val = ((uint32_t)reg_SIGMNT_ADC_TO_DP_CDF_TH2_LANE_19_16 << 16) +
                            ((uint32_t)reg_SIGMNT_ADC_TO_DP_CDF_TH2_LANE_15_8 << 8) +
                            ((uint32_t)reg_SIGMNT_ADC_TO_DP_CDF_TH2_LANE_7_0);
sigmnt_adc_to_dp_cdf2_val = sigmnt_adc_to_dp_cdf2_val << (20-(8+reg_SIGMNT_ADC_TO_DP_LEN_LANE_3_0));
sigmnt_adc_to_dp_cdf2_val = sigmnt_adc_to_dp_cdf2_val >> 4;
lnx_SIGMNT_ADC_TO_DP_VAL_CDF2_LANE_15_8 = (sigmnt_adc_to_dp_cdf2_val >> 8) & 0xff;
lnx_SIGMNT_ADC_TO_DP_VAL_CDF2_LANE_7_0 = sigmnt_adc_to_dp_cdf2_val & 0xff;

return pass_sig;
}
