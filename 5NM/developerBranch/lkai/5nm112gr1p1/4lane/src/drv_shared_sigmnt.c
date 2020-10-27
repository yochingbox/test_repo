//--------------------------------------------------------------------
//  Company:        Marvell Semiconductor
//  Filename:       drv_shared_sigmnt.c
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

bool drv_shared_sigmnt() BANKING_CTRL{
uint32_t sigmnt_shared_ave_val = 0;
uint32_t sigmnt_shared_cdf1_val = 0;
uint32_t sigmnt_shared_cdf2_val = 0;

//bool *sigmnt_shared_done = &(bool)reg_SIGMNT_SHARED_DONE_LANE;
bool pass_sig = 1;

//Sequence
reg_SIGMNT_SHARED_CLK_EN_LANE = 1;
reg_SIGMNT_SHARED_START_LANE = 1;

wait_for(reg_SIGMNT_SHARED_DONE_LANE,2500);
if(timeout) {pass_sig=0;}

reg_SIGMNT_SHARED_START_LANE = 0;

wait_for(!reg_SIGMNT_SHARED_DONE_LANE,1);
if(timeout) {pass_sig=0;}

//Results Processing
sigmnt_shared_ave_val = ((uint32_t)reg_SIGMNT_SHARED_AVE_LANE_28_21 << 21) + 
                        ((uint32_t)reg_SIGMNT_SHARED_AVE_LANE_20_13 << 13) +
                        ((uint32_t)reg_SIGMNT_SHARED_AVE_LANE_12_5 << 5) +
                        ((uint32_t)reg_SIGMNT_SHARED_AVE_LANE_4_0); //S29.20
sigmnt_shared_ave_val = sigmnt_shared_ave_val << (20-(8+reg_SIGMNT_SHARED_LEN_LANE_3_0));
sigmnt_shared_ave_val = sigmnt_shared_ave_val >> 13; //S9.7
lnx_SIGMNT_SHARED_VAL_AVE_LANE_15_8 = (sigmnt_shared_ave_val >> 8) & 0Xff;
lnx_SIGMNT_SHARED_VAL_AVE_LANE_7_0 = sigmnt_shared_ave_val & 0xff; //drv_SIGM..

sigmnt_shared_cdf1_val = ((uint32_t)reg_SIGMNT_SHARED_CDF_TH1_LANE_19_12 << 12) + 
                         ((uint32_t)reg_SIGMNT_SHARED_CDF_TH1_LANE_11_4 << 4) +
                         ((uint32_t)reg_SIGMNT_SHARED_CDF_TH1_LANE_3_0);
sigmnt_shared_cdf1_val = sigmnt_shared_cdf1_val << (20-(8+reg_SIGMNT_SHARED_LEN_LANE_3_0));
sigmnt_shared_cdf1_val = sigmnt_shared_cdf1_val >> 4;
lnx_SIGMNT_SHARED_VAL_CDF1_LANE_15_8 = (sigmnt_shared_cdf1_val >> 8) & 0xff;
lnx_SIGMNT_SHARED_VAL_CDF1_LANE_7_0 = sigmnt_shared_cdf1_val & 0xff;

sigmnt_shared_cdf2_val = ((uint32_t)reg_SIGMNT_SHARED_CDF_TH2_LANE_19_12<<12) + 
                         ((uint32_t)reg_SIGMNT_SHARED_CDF_TH2_LANE_11_4<<4) +
                         ((uint32_t)reg_SIGMNT_SHARED_CDF_TH2_LANE_3_0); //S29.20
sigmnt_shared_cdf2_val = sigmnt_shared_cdf2_val << (20-(8+reg_SIGMNT_SHARED_LEN_LANE_3_0));
sigmnt_shared_cdf2_val = sigmnt_shared_cdf2_val >> 4;
lnx_SIGMNT_SHARED_VAL_CDF2_LANE_15_8 = (sigmnt_shared_cdf2_val >> 8) & 0xff;
lnx_SIGMNT_SHARED_VAL_CDF2_LANE_7_0 = sigmnt_shared_cdf2_val & 0xff;

return pass_sig;
}
