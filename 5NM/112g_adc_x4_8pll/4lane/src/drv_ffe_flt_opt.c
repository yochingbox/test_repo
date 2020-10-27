#include "common.h"
#include "driver.h"

// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg CSEG
#endif

//reg_FFE_FLT_OPT_START_LANE_5_0
//reg_FFE_FLT_OPT_STOP_LANE_5_0
//reg_FFE_FLT_OPT_STEP_LANE_2_0
//reg_FFE_FLT_OPT_AVG_NUM_LANE_2_0 0->1 1->2 2->4 3->8 4->16
//reg_FFE_FLT_OPT_TIMER_LANE_15_0
//reg_FFE_FLT_OPT_MAX_SNR_TH_LANE_15_0
//reg_FFE_FLT_OPT_DLT_SNR_TH_LANE_15_0
//reg_FFE_FLT_OPT_PWR_TH_LANE_7_0
//reg_FFE_FLT_OPT_TIMER_LANE_15_0
//reg_FFE_FLT_OPT_MAX_SNR_LANE_15_0
//reg_FFE_FLT_OPT_MIN_SNR_LANE_15_0
//reg_FFE_FLT_OPT_MAX_PWR_LANE_7_0
//reg_FFE_FLT_OPT_MAX_SNR_POS_LANE_5_0
//reg_FFE_FLT_OPT_MAX_PWR_POS_LANE_5_0
//reg_FFE_FLT_OPT_BEST_POS_LANE_5_0

uint8_t drv_ffe_flt_pwr () BANKING_CTRL 
{

    int8_t ffe_flt_coe[8];
    uint8_t ffe_flt_pwr;
    uint8_t i;

    reg_RX_EQ_RD_REQ_LANE = 1;
    reg_RX_EQ_RD_REQ_LANE = 0;

    ffe_flt_coe[0] = (int8_t)(reg_RX_DP_LMS_FFE_FLT1_B0_COE_LANE_2_0 << 5) >> 5;
    ffe_flt_coe[1] = (int8_t)(reg_RX_DP_LMS_FFE_FLT2_B0_COE_LANE_2_0 << 5) >> 5;
    ffe_flt_coe[2] = (int8_t)(reg_RX_DP_LMS_FFE_FLT3_B0_COE_LANE_2_0 << 5) >> 5;
    ffe_flt_coe[3] = (int8_t)(reg_RX_DP_LMS_FFE_FLT4_B0_COE_LANE_2_0 << 5) >> 5;
    ffe_flt_coe[4] = (int8_t)(reg_RX_DP_LMS_FFE_FLT1_B1_COE_LANE_2_0 << 5) >> 5;
    ffe_flt_coe[5] = (int8_t)(reg_RX_DP_LMS_FFE_FLT2_B1_COE_LANE_2_0 << 5) >> 5;
    ffe_flt_coe[6] = (int8_t)(reg_RX_DP_LMS_FFE_FLT3_B1_COE_LANE_2_0 << 5) >> 5;
    ffe_flt_coe[7] = (int8_t)(reg_RX_DP_LMS_FFE_FLT4_B1_COE_LANE_2_0 << 5) >> 5;

    ffe_flt_pwr = 0;

    for(i = 0; i < 8; i++)
    {
      ffe_flt_pwr += ffe_flt_coe[i] * ffe_flt_coe[i];
    }
    return ffe_flt_pwr;
}


void drv_ffe_flt_opt () BANKING_CTRL 
{

    uint8_t sav_RX_DP_LMS_GAIN_EN_LANE;
    uint8_t sav_RX_DP_LMS_BLW_EN_LANE;
    uint8_t sav_RX_DP_LMS_DFE_EN_LANE;
    uint8_t sav_RX_DP_LMS_TOP_EN_LANE;
    uint8_t avg_num, avg_div;
    uint8_t max_snr_pos, max_pwr_pos, best_pos;
    uint16_t snr, max_snr, min_snr, avg_snr;
    uint8_t max_pwr;
    uint16_t avg_pwr;

    uint8_t i, j;

    //set MSE to DP mode
    reg_MSE_DTL_SEL_LANE = 0;

    //save current LMS enable
    sav_RX_DP_LMS_GAIN_EN_LANE = reg_RX_DP_LMS_GAIN_EN_LANE;
    sav_RX_DP_LMS_BLW_EN_LANE = reg_RX_DP_LMS_BLW_EN_LANE;
    sav_RX_DP_LMS_DFE_EN_LANE = reg_RX_DP_LMS_DFE_EN_LANE;
    sav_RX_DP_LMS_TOP_EN_LANE = reg_RX_DP_LMS_TOP_EN_LANE;

    //save current SNR
    reg_RX_DP_LMS_TOP_EN_LANE = 1; //turn on LMS
    wait_converge (reg_FFE_FLT_OPT_TIMER_LANE_15_0);
    reg_RX_DP_LMS_TOP_EN_LANE = 0;

    drv_mse_run();
    drv_mse_read();
    max_snr = snr_approx(reg_MSE_VAL_LANE_15_0);
    min_snr = max_snr;
    max_pwr = 0;
    drv_mse_exit();

    max_snr_pos = reg_RX_DP_FFE_FLT_B0_SEL_LANE_5_0;
    max_pwr_pos = 0;
    avg_div = (reg_FFE_FLT_OPT_AVG_NUM_LANE_2_0 >= 6) ? 6 : reg_FFE_FLT_OPT_AVG_NUM_LANE_2_0; //overflow protection
    avg_num = (avg_div == 0) ? 1 : (1 << avg_div);

    for(i = reg_FFE_FLT_OPT_START_LANE_5_0; i <= reg_FFE_FLT_OPT_STOP_LANE_5_0; i += reg_FFE_FLT_OPT_STEP_LANE_2_0)
    {
      //set position
      reg_RX_DP_FFE_FLT_B0_SEL_LANE_5_0 = i;

      //check SNR and power
      avg_snr = 0;
      avg_pwr = 0;

      for(j = 0; j < avg_num; j++)
      {
        //adapt LMS
        reg_RX_DP_LMS_TOP_EN_LANE = 1;
        wait_converge (reg_FFE_FLT_OPT_TIMER_LANE_15_0);
        reg_RX_DP_LMS_TOP_EN_LANE = 0;

        //check SNR
        drv_mse_run();
        drv_mse_read();
        snr = snr_approx(reg_MSE_VAL_LANE_15_0);
        drv_mse_exit();

        avg_snr += snr;
        avg_pwr += drv_ffe_flt_pwr();
      }
      avg_snr = avg_snr >> avg_div;
      avg_pwr = avg_pwr >> avg_div;
     
      //save max/min SNR, power and position
      if(avg_snr > (max_snr + reg_FFE_FLT_OPT_MAX_SNR_TH_LANE_15_0))
      {
        max_snr = avg_snr;
        max_snr_pos = i;
      }

      if(avg_snr < min_snr)
      {
        min_snr = avg_snr;
      }

      if(avg_pwr > max_pwr)
      {
        max_pwr = avg_pwr;
        max_pwr_pos = i;
      }

    }//end for i

    //select best position
    if((max_snr - min_snr) > reg_FFE_FLT_OPT_DLT_SNR_TH_LANE_15_0)
    {
      best_pos = max_snr_pos;
    }
    else if(max_pwr > reg_FFE_FLT_OPT_PWR_TH_LANE_7_0)
    {
      best_pos = max_pwr_pos;
    }
    else
    {
      best_pos = 0;
    }

    //save result to xdat for debug
    reg_FFE_FLT_OPT_MAX_SNR_LANE_15_0 = max_snr;
    reg_FFE_FLT_OPT_MIN_SNR_LANE_15_0 = min_snr;
    reg_FFE_FLT_OPT_MAX_PWR_LANE_7_0 = max_pwr;
    reg_FFE_FLT_OPT_MAX_SNR_POS_LANE_5_0 = max_snr_pos;
    reg_FFE_FLT_OPT_MAX_PWR_POS_LANE_5_0 = max_pwr_pos;
    reg_FFE_FLT_OPT_BEST_POS_LANE_5_0 = best_pos;

    //restore LMS enable
    reg_RX_DP_LMS_GAIN_EN_LANE = sav_RX_DP_LMS_GAIN_EN_LANE;
    reg_RX_DP_LMS_BLW_EN_LANE = sav_RX_DP_LMS_BLW_EN_LANE;
    reg_RX_DP_LMS_DFE_EN_LANE = sav_RX_DP_LMS_DFE_EN_LANE;

    //set best position and do final adapt
    reg_RX_DP_FFE_FLT_B0_SEL_LANE_5_0 = best_pos;
    reg_RX_DP_LMS_TOP_EN_LANE = 1;
    wait_converge (reg_FFE_FLT_OPT_TIMER_LANE_15_0);
    reg_RX_DP_LMS_TOP_EN_LANE = sav_RX_DP_LMS_TOP_EN_LANE;

}
