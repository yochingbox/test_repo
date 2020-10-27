#include "common.h"
#include "driver.h"

// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg CSEG
#endif

#define FFE_PRE_N 6
#define FFE_PST_N 16
#define FFE_FLT_N 8

//reg_FFE_LEN_OPT_PRE_START_TAP_LANE_2_0
//reg_FFE_LEN_OPT_PST_START_TAP_LANE_4_0
//reg_FFE_LEN_OPT_FLT_START_TAP_LANE_2_0
//reg_FFE_LEN_OPT_CUMSUM_TH_LANE_2_0
//reg_FFE_LEN_OPT_FFE_TH_LANE_1_0
//reg_FFE_LEN_OPT_FFE_LD_ZERO_LANE

//reg_FFE_LEN_OPT_PRE_STOP_TAP_LANE_2_0
//reg_FFE_LEN_OPT_PST_STOP_TAP_LANE_4_0
//reg_FFE_LEN_OPT_FLT_STOP_TAP_MIN_LANE_2_0
//reg_FFE_LEN_OPT_FLT_STOP_TAP_MAX_LANE_2_0

//start at pre8 only check value
//then pre7 check value and (pre8+pre7)/2
//then pre6 check value and (pre8+pre7+pre6)/3

void drv_ffe_len_opt () BANKING_CTRL
{

    uint8_t sav_RX_DP_LMS_TOP_EN_LANE;
    int8_t ffe_pre_coe[FFE_PRE_N];
    int8_t ffe_pst_coe[FFE_PST_N];
    int8_t ffe_flt_coe[FFE_FLT_N];
    uint8_t ffe_pre_dis[FFE_PRE_N] = {0};
    uint8_t ffe_pst_dis[FFE_PST_N] = {0};
    uint8_t ffe_flt_dis[FFE_FLT_N] = {0};
    uint8_t ffe_pre_dis_arr;
    uint16_t ffe_pst_dis_arr;
    uint8_t ffe_flt_dis_arr;
    uint16_t cumsum;
    int8_t i, j, num;


    //disable all tap force
    drv_set_dp_lms_ld(0);

    //save current LMS TOP enable
    sav_RX_DP_LMS_TOP_EN_LANE = reg_RX_DP_LMS_TOP_EN_LANE;

    //disable LMS
    reg_RX_DP_LMS_TOP_EN_LANE = 0; //turn off LMS

    //save current FFE tap
    reg_RX_EQ_RD_REQ_LANE = 1;
    reg_RX_EQ_RD_REQ_LANE = 0;

    ffe_pre_coe[0]  = (int8_t)(reg_RX_DP_LMS_FFE_PRE1_COE_LANE_6_0 << 1) >> 1;
    ffe_pre_coe[1]  = (int8_t)(reg_RX_DP_LMS_FFE_PRE2_COE_LANE_5_0 << 2) >> 2;
    ffe_pre_coe[2]  = (int8_t)(reg_RX_DP_LMS_FFE_PRE3_COE_LANE_4_0 << 3) >> 3;
    ffe_pre_coe[3]  = (int8_t)(reg_RX_DP_LMS_FFE_PRE4_COE_LANE_4_0 << 3) >> 3;
    ffe_pre_coe[4]  = (int8_t)(reg_RX_DP_LMS_FFE_PRE5_COE_LANE_2_0 << 5) >> 5;
    ffe_pre_coe[5]  = (int8_t)(reg_RX_DP_LMS_FFE_PRE6_COE_LANE_2_0 << 5) >> 5;

    ffe_pst_coe[0]  = (int8_t)(reg_RX_DP_LMS_FFE_PST1_COE_LANE_6_0  << 1) >> 1;
    ffe_pst_coe[1]  = (int8_t)(reg_RX_DP_LMS_FFE_PST2_COE_LANE_5_0  << 2) >> 2;
    ffe_pst_coe[2]  = (int8_t)(reg_RX_DP_LMS_FFE_PST3_COE_LANE_4_0  << 3) >> 3;
    ffe_pst_coe[3]  = (int8_t)(reg_RX_DP_LMS_FFE_PST4_COE_LANE_3_0  << 4) >> 4;
    ffe_pst_coe[4]  = (int8_t)(reg_RX_DP_LMS_FFE_PST5_COE_LANE_3_0  << 4) >> 4;
    ffe_pst_coe[5]  = (int8_t)(reg_RX_DP_LMS_FFE_PST6_COE_LANE_3_0  << 4) >> 4;
    ffe_pst_coe[6]  = (int8_t)(reg_RX_DP_LMS_FFE_PST7_COE_LANE_2_0  << 5) >> 5;
    ffe_pst_coe[7]  = (int8_t)(reg_RX_DP_LMS_FFE_PST8_COE_LANE_2_0  << 5) >> 5;
    ffe_pst_coe[8]  = (int8_t)(reg_RX_DP_LMS_FFE_PST9_COE_LANE_2_0  << 5) >> 5;
    ffe_pst_coe[9]  = (int8_t)(reg_RX_DP_LMS_FFE_PST10_COE_LANE_2_0 << 5) >> 5;
    ffe_pst_coe[10] = (int8_t)(reg_RX_DP_LMS_FFE_PST11_COE_LANE_2_0 << 5) >> 5;
    ffe_pst_coe[11] = (int8_t)(reg_RX_DP_LMS_FFE_PST12_COE_LANE_2_0 << 5) >> 5;
    ffe_pst_coe[12] = (int8_t)(reg_RX_DP_LMS_FFE_PST13_COE_LANE_2_0 << 5) >> 5;
    ffe_pst_coe[13] = (int8_t)(reg_RX_DP_LMS_FFE_PST14_COE_LANE_2_0 << 5) >> 5;
    ffe_pst_coe[14] = (int8_t)(reg_RX_DP_LMS_FFE_PST15_COE_LANE_2_0 << 5) >> 5;
    ffe_pst_coe[15] = (int8_t)(reg_RX_DP_LMS_FFE_PST16_COE_LANE_2_0 << 5) >> 5;

    ffe_flt_coe[0]  = (int8_t)(reg_RX_DP_LMS_FFE_FLT1_B0_COE_LANE_2_0 << 5) >> 5;
    ffe_flt_coe[1]  = (int8_t)(reg_RX_DP_LMS_FFE_FLT2_B0_COE_LANE_2_0 << 5) >> 5;
    ffe_flt_coe[2]  = (int8_t)(reg_RX_DP_LMS_FFE_FLT3_B0_COE_LANE_2_0 << 5) >> 5;
    ffe_flt_coe[3]  = (int8_t)(reg_RX_DP_LMS_FFE_FLT4_B0_COE_LANE_2_0 << 5) >> 5;
    ffe_flt_coe[4]  = (int8_t)(reg_RX_DP_LMS_FFE_FLT1_B1_COE_LANE_2_0 << 5) >> 5;
    ffe_flt_coe[5]  = (int8_t)(reg_RX_DP_LMS_FFE_FLT2_B1_COE_LANE_2_0 << 5) >> 5;
    ffe_flt_coe[6]  = (int8_t)(reg_RX_DP_LMS_FFE_FLT3_B1_COE_LANE_2_0 << 5) >> 5;
    ffe_flt_coe[7]  = (int8_t)(reg_RX_DP_LMS_FFE_FLT4_B1_COE_LANE_2_0 << 5) >> 5;

    //search from last pre tap
    cumsum = 0;
    num = 0;
    reg_FFE_LEN_OPT_PRE_STOP_TAP_LANE_2_0 = 0;

    for(i = FFE_PRE_N - 1; i >= reg_FFE_LEN_OPT_PRE_START_TAP_LANE_2_0; i--)
    {
      num++;

      cumsum += (int16_t)abs(ffe_pre_coe[i]);

      if((abs(ffe_pre_coe[i]) > reg_FFE_LEN_OPT_FFE_TH_LANE_1_0) | (num > 1) & (cumsum > reg_FFE_LEN_OPT_CUMSUM_TH_LANE_2_0))
      {
        break;
      }
      else
      {
        ffe_pre_dis[i] = 1;
        reg_FFE_LEN_OPT_PRE_STOP_TAP_LANE_2_0 = i;
      }
    }

    //search from last pst tap
    cumsum = 0;
    num = 0;
    reg_FFE_LEN_OPT_PST_STOP_TAP_LANE_4_0 = 0;

    for(i = FFE_PST_N - 1; i >= reg_FFE_LEN_OPT_PST_START_TAP_LANE_4_0; i--)
    {
      num++;

      cumsum += (int16_t)abs(ffe_pst_coe[i]);

      if((abs(ffe_pst_coe[i]) > reg_FFE_LEN_OPT_FFE_TH_LANE_1_0) | (num > 1) & (cumsum > reg_FFE_LEN_OPT_CUMSUM_TH_LANE_2_0))
      {
        break;
      }
      else
      {
        ffe_pst_dis[i] = 1;
        reg_FFE_LEN_OPT_PST_STOP_TAP_LANE_4_0 = i;
      }
    }

    //search from both dir flt tap
    //the reflection could centered in any of the taps
    cumsum = 0;
    num = 0;
    reg_FFE_LEN_OPT_FLT_STOP_TAP_MIN_LANE_2_0 = 0;

    for(i = reg_FFE_LEN_OPT_FLT_START_TAP_LANE_2_0; i < FFE_FLT_N; i++)
    {
      num++;

      cumsum += (int16_t)abs(ffe_flt_coe[i]);

      if((abs(ffe_flt_coe[i]) > reg_FFE_LEN_OPT_FFE_TH_LANE_1_0) | (num > 1) & (cumsum > reg_FFE_LEN_OPT_CUMSUM_TH_LANE_2_0))
      {
        break;
      }
      else
      {
        ffe_flt_dis[i] = 1;
        reg_FFE_LEN_OPT_FLT_STOP_TAP_MIN_LANE_2_0 = i;
      }
    }

    cumsum = 0;
    num = 0;
    reg_FFE_LEN_OPT_FLT_STOP_TAP_MAX_LANE_2_0 = 0;

    for(j = FFE_FLT_N - 1; j > i; j--)
    {
      num++;

      cumsum += (int16_t)abs(ffe_flt_coe[j]);

      if((abs(ffe_flt_coe[j]) > reg_FFE_LEN_OPT_FFE_TH_LANE_1_0) | (num > 1) & (cumsum > reg_FFE_LEN_OPT_CUMSUM_TH_LANE_2_0))
      {
        break;
      }
      else
      {
        ffe_flt_dis[j] = 1;
        reg_FFE_LEN_OPT_FLT_STOP_TAP_MAX_LANE_2_0 = j;
      }
    }

    ffe_pre_dis_arr = 0;
    for (i = 0; i < FFE_PRE_N; i++) {
      ffe_pre_dis_arr |= (ffe_pre_dis[i] << i);
    }

    ffe_pst_dis_arr = 0;
    for (i = 0; i < FFE_PST_N; i++) {
      ffe_pst_dis_arr |= (ffe_pst_dis[i] << i);
    }

    ffe_flt_dis_arr = 0;
    for (i = 0; i < FFE_FLT_N; i++) {
      ffe_flt_dis_arr |= (ffe_flt_dis[i] << i);
    }

    //set disabled tap value to 0
    if(reg_FFE_LEN_OPT_FFE_LD_ZERO_LANE)
    {
      if(ffe_pre_dis[0] ) {reg_RX_DP_LMS_FFE_PRE1_EXT_LANE_6_0  = 0;}
      if(ffe_pre_dis[1] ) {reg_RX_DP_LMS_FFE_PRE2_EXT_LANE_5_0  = 0;}
      if(ffe_pre_dis[2] ) {reg_RX_DP_LMS_FFE_PRE3_EXT_LANE_4_0  = 0;}
      if(ffe_pre_dis[3] ) {reg_RX_DP_LMS_FFE_PRE4_EXT_LANE_4_0  = 0;}
      if(ffe_pre_dis[4] ) {reg_RX_DP_LMS_FFE_PRE5_EXT_LANE_2_0  = 0;}
      if(ffe_pre_dis[5] ) {reg_RX_DP_LMS_FFE_PRE6_EXT_LANE_2_0  = 0;}

      if(ffe_pst_dis[0] ) {reg_RX_DP_LMS_FFE_PST1_EXT_LANE_6_0  = 0;}
      if(ffe_pst_dis[1] ) {reg_RX_DP_LMS_FFE_PST2_EXT_LANE_5_0  = 0;}
      if(ffe_pst_dis[2] ) {reg_RX_DP_LMS_FFE_PST3_EXT_LANE_4_0  = 0;}
      if(ffe_pst_dis[3] ) {reg_RX_DP_LMS_FFE_PST4_EXT_LANE_3_0  = 0;}
      if(ffe_pst_dis[4] ) {reg_RX_DP_LMS_FFE_PST5_EXT_LANE_3_0  = 0;}
      if(ffe_pst_dis[5] ) {reg_RX_DP_LMS_FFE_PST6_EXT_LANE_3_0  = 0;}
      if(ffe_pst_dis[6] ) {reg_RX_DP_LMS_FFE_PST7_EXT_LANE_2_0  = 0;}
      if(ffe_pst_dis[7] ) {reg_RX_DP_LMS_FFE_PST8_EXT_LANE_2_0  = 0;}
      if(ffe_pst_dis[8] ) {reg_RX_DP_LMS_FFE_PST9_EXT_LANE_2_0  = 0;}
      if(ffe_pst_dis[9] ) {reg_RX_DP_LMS_FFE_PST10_EXT_LANE_2_0 = 0;}
      if(ffe_pst_dis[10]) {reg_RX_DP_LMS_FFE_PST11_EXT_LANE_2_0 = 0;}
      if(ffe_pst_dis[11]) {reg_RX_DP_LMS_FFE_PST12_EXT_LANE_2_0 = 0;}
      if(ffe_pst_dis[12]) {reg_RX_DP_LMS_FFE_PST13_EXT_LANE_2_0 = 0;}
      if(ffe_pst_dis[13]) {reg_RX_DP_LMS_FFE_PST14_EXT_LANE_2_0 = 0;}
      if(ffe_pst_dis[14]) {reg_RX_DP_LMS_FFE_PST15_EXT_LANE_2_0 = 0;}
      if(ffe_pst_dis[15]) {reg_RX_DP_LMS_FFE_PST16_EXT_LANE_2_0 = 0;}

      if(ffe_flt_dis[0] ) {reg_RX_DP_LMS_FFE_FLT1_B0_EXT_LANE_2_0  = 0;}
      if(ffe_flt_dis[1] ) {reg_RX_DP_LMS_FFE_FLT2_B0_EXT_LANE_2_0  = 0;}
      if(ffe_flt_dis[2] ) {reg_RX_DP_LMS_FFE_FLT3_B0_EXT_LANE_2_0  = 0;}
      if(ffe_flt_dis[3] ) {reg_RX_DP_LMS_FFE_FLT4_B0_EXT_LANE_2_0  = 0;}
      if(ffe_flt_dis[4] ) {reg_RX_DP_LMS_FFE_FLT1_B1_EXT_LANE_2_0  = 0;}
      if(ffe_flt_dis[5] ) {reg_RX_DP_LMS_FFE_FLT2_B1_EXT_LANE_2_0  = 0;}
      if(ffe_flt_dis[6] ) {reg_RX_DP_LMS_FFE_FLT3_B1_EXT_LANE_2_0  = 0;}
      if(ffe_flt_dis[7] ) {reg_RX_DP_LMS_FFE_FLT4_B1_EXT_LANE_2_0  = 0;}

      reg_RX_DP_LMS_FFE_PRE_LD_LANE_5_0 = ffe_pre_dis_arr;
      reg_RX_DP_LMS_FFE_PST_LD_LANE_15_0 = ffe_pst_dis_arr;
      reg_RX_DP_LMS_FFE_FLT_B0_LD_LANE_3_0 = ffe_flt_dis_arr;
      reg_RX_DP_LMS_FFE_FLT_B1_LD_LANE_3_0 = ffe_flt_dis_arr >> 4;

      reg_RX_DP_LMS_TOP_LD_LANE = 1;
      reg_RX_DP_LMS_TOP_LD_LANE = 0;
    }

    //turn off taps
    reg_RX_DP_LMS_FFE_PRE_EN_LANE_5_0 = ~ffe_pre_dis_arr;
    reg_RX_DP_LMS_FFE_PST_EN_LANE_15_0 = ~ffe_pst_dis_arr;
    reg_RX_DP_LMS_FFE_FLT_B0_EN_LANE_3_0 = ~ffe_flt_dis_arr;
    reg_RX_DP_LMS_FFE_FLT_B1_EN_LANE_3_0 = ~ffe_flt_dis_arr >> 4;

    //recover LMS enable
    drv_set_dp_lms_ld(1);
    reg_RX_DP_LMS_TOP_EN_LANE = sav_RX_DP_LMS_TOP_EN_LANE;

}
