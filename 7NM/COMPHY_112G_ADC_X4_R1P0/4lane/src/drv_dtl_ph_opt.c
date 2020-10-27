#include "common.h"
#include "driver.h"

// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg CSEG
#endif


void drv_dtl_ph_opt (uint8_t cont_en) BANKING_CTRL 
{

    uint8_t sav_RX_DP_LMS_TOP_EN_LANE;
    uint8_t sav_RX_DTL_LMS_TOP_EN_LANE;
    uint8_t sav_RX_DTL_LMS_FFE_PRE1_EN_LANE;
    uint8_t sav_RX_DTL_LMS_FFE_PST1_EN_LANE;
    uint8_t avg_num, avg_div;
    uint8_t step_num;
    uint16_t snr, avg_snr, best_snr;
    int8_t dtl_ffe_pre1, best_dtl_ffe_pre1;

    int8_t i, j;

    //set MSE to DP mode
    reg_MSE_DTL_SEL_LANE = 0;

    //save current FFE PRE1 enable
    sav_RX_DP_LMS_TOP_EN_LANE = reg_RX_DP_LMS_TOP_EN_LANE;
    sav_RX_DTL_LMS_TOP_EN_LANE = reg_RX_DTL_LMS_TOP_EN_LANE;
    sav_RX_DTL_LMS_FFE_PRE1_EN_LANE = reg_RX_DTL_LMS_FFE_PRE1_EN_LANE;
    sav_RX_DTL_LMS_FFE_PST1_EN_LANE = reg_RX_DTL_LMS_FFE_PST1_EN_LANE;

    //set LMS enable
    reg_RX_DP_LMS_TOP_EN_LANE = 0; //turn off LMS
    reg_RX_DTL_LMS_TOP_EN_LANE = 0;
    reg_RX_DTL_LMS_FFE_PRE1_EN_LANE = 0;
    reg_RX_DTL_LMS_FFE_PST1_EN_LANE = 1;

    //save current FFE PRE1 tap
    reg_RX_EQ_RD_REQ_LANE = 1;
    reg_RX_EQ_RD_REQ_LANE = 0;
    dtl_ffe_pre1 = (int8_t)(reg_RX_DTL_LMS_FFE_PRE1_COE_LANE_5_0 << 2) >> 2;

    //check initial SNR
    drv_mse_run();
    drv_mse_read();
    snr = snr_approx(reg_MSE_VAL_LANE_15_0);
    drv_mse_exit();
    reg_DTL_PH_OPT_INIT_SNR_LANE_15_0 = snr;

    //set DTL FFE PRE1 tap force only
    drv_set_dtl_lms_ld(0);
    reg_RX_DTL_LMS_FFE_PRE1_LD_LANE = 1;

    //set start point
    reg_DTL_PH_OPT_FAIL_LANE = 1;
    best_snr = 0;
    best_dtl_ffe_pre1 = dtl_ffe_pre1;
    avg_div = (reg_DTL_PH_OPT_AVG_NUM_LANE_2_0 >= 6) ? 6 : reg_DTL_PH_OPT_AVG_NUM_LANE_2_0; //overflow protection
    avg_num = (avg_div == 0) ? 1 : (1 << avg_div);

    //move to one side
    step_num = cont_en ? reg_DTL_PH_OPT_CONT_STEP_NUM_LANE_5_0 : reg_DTL_PH_OPT_TRAIN_STEP_NUM_LANE_5_0;

    for(i = 0; i <= step_num; i += reg_DTL_PH_OPT_STEP_LANE_2_0)
    {
      if((dtl_ffe_pre1 - reg_DTL_PH_OPT_STEP_LANE_2_0) < -32) break;
      dtl_ffe_pre1 = dtl_ffe_pre1 - reg_DTL_PH_OPT_STEP_LANE_2_0;
      reg_RX_DTL_LMS_FFE_PRE1_EXT_LANE_5_0 = dtl_ffe_pre1;
      reg_RX_DTL_LMS_TOP_LD_LANE = 1;
      reg_RX_DTL_LMS_TOP_LD_LANE = 0;
      reg_RX_DTL_LMS_TOP_EN_LANE = 1;
      wait_converge (reg_DTL_PH_OPT_MOVE_TIMER_LANE_15_0);
      reg_RX_DTL_LMS_TOP_EN_LANE = 0;
      reg_RX_DP_LMS_TOP_EN_LANE = 1;
      wait_converge (reg_DTL_PH_OPT_MOVE_TIMER_LANE_15_0);
      reg_RX_DP_LMS_TOP_EN_LANE = 0;
    }

    //search best pre1
    for(i = 0; i <= (step_num<<1); i += reg_DTL_PH_OPT_STEP_LANE_2_0)
    {
      if((dtl_ffe_pre1 + reg_DTL_PH_OPT_STEP_LANE_2_0) > 31) break;
      dtl_ffe_pre1 = dtl_ffe_pre1 + reg_DTL_PH_OPT_STEP_LANE_2_0;
      reg_RX_DTL_LMS_FFE_PRE1_EXT_LANE_5_0 = dtl_ffe_pre1;
      reg_RX_DTL_LMS_TOP_LD_LANE = 1;
      reg_RX_DTL_LMS_TOP_LD_LANE = 0;
      reg_RX_DTL_LMS_TOP_EN_LANE = 1;
      wait_converge (reg_DTL_PH_OPT_SEARCH_TIMER_LANE_15_0);
      reg_RX_DTL_LMS_TOP_EN_LANE = 0;

      reg_RX_DP_LMS_TOP_EN_LANE = 1;
      avg_snr = 0;
      for(j = 0; j < avg_num; j++)
      {
        //wait DP adapt
        wait_converge (reg_DTL_PH_OPT_SEARCH_TIMER_LANE_15_0);

        //check SNR
        drv_mse_run();
        drv_mse_read();
        snr = snr_approx(reg_MSE_VAL_LANE_15_0);
        drv_mse_exit();

        avg_snr += snr;
      }
      avg_snr = avg_snr >> avg_div;
      reg_RX_DP_LMS_TOP_EN_LANE = 0;

      if(avg_snr > best_snr)
      {
        best_snr = avg_snr;
        best_dtl_ffe_pre1 = dtl_ffe_pre1;
        reg_DTL_PH_OPT_FAIL_LANE = 0;
      }

    }

    reg_DTL_PH_OPT_BEST_SNR_LANE_15_0 = best_snr;
    reg_DTL_PH_OPT_BEST_FFE_PRE1_LANE_5_0 = best_dtl_ffe_pre1;

    //move to best pre1
    while(best_dtl_ffe_pre1 < dtl_ffe_pre1)
    {
      dtl_ffe_pre1 = dtl_ffe_pre1 - reg_DTL_PH_OPT_STEP_LANE_2_0;
      reg_RX_DTL_LMS_FFE_PRE1_EXT_LANE_5_0 = dtl_ffe_pre1;
      reg_RX_DTL_LMS_TOP_LD_LANE = 1;
      reg_RX_DTL_LMS_TOP_LD_LANE = 0;
      reg_RX_DTL_LMS_TOP_EN_LANE = 1;
      wait_converge (reg_DTL_PH_OPT_MOVE_TIMER_LANE_15_0);
      reg_RX_DTL_LMS_TOP_EN_LANE = 0;
      reg_RX_DP_LMS_TOP_EN_LANE = 1;
      wait_converge (reg_DTL_PH_OPT_MOVE_TIMER_LANE_15_0);
      reg_RX_DP_LMS_TOP_EN_LANE = 0;
    }

    //check final SNR
    drv_mse_run();
    drv_mse_read();
    snr = snr_approx(reg_MSE_VAL_LANE_15_0);
    drv_mse_exit();

    reg_RX_EQ_RD_REQ_LANE = 1;
    reg_RX_EQ_RD_REQ_LANE = 0;

    reg_DTL_PH_OPT_FINAL_SNR_LANE_15_0 = snr;
    reg_DTL_PH_OPT_FINAL_FFE_PRE1_LANE_5_0 = reg_RX_DTL_LMS_FFE_PRE1_COE_LANE_5_0;

    //recover LMS force enable
    drv_set_dtl_lms_ld(1);
    reg_RX_DTL_LMS_FFE_PRE1_EXT_LANE_5_0 = 0;
    reg_RX_DTL_LMS_FFE_PRE1_EN_LANE = sav_RX_DTL_LMS_FFE_PRE1_EN_LANE;
    reg_RX_DTL_LMS_FFE_PST1_EN_LANE = sav_RX_DTL_LMS_FFE_PST1_EN_LANE;
    reg_RX_DTL_LMS_TOP_EN_LANE = sav_RX_DTL_LMS_TOP_EN_LANE;
    reg_RX_DP_LMS_TOP_EN_LANE = sav_RX_DP_LMS_TOP_EN_LANE;

}
