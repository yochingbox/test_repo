#include "common.h"
#include "driver.h"

// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg CSEG
#endif

//assume DFE value is postive number
//reg_DFE_OPT_FFE_PST1_MAX_LANE_6_0 is postive value, [6] must be 0. 

void drv_dfe_opt () BANKING_CTRL
{

    //uint8_t sav_RX_DP_LMS_DFE_COE_LANE;
    uint8_t sav_RX_DP_LMS_BLW_EN_LANE;
    uint8_t best_dfe;
    uint16_t snr, best_snr, mse, best_mse;
    int8_t dp_ffe_pst1, dp_ffe_pst1_abs;

    int8_t i, j;

    //set MSE to DP mode
    reg_MSE_DTL_SEL_LANE = 0;

    //save current BLW enable
    sav_RX_DP_LMS_BLW_EN_LANE = reg_RX_DP_LMS_BLW_EN_LANE;

    //set LMS enable
    reg_RX_DP_LMS_TOP_EN_LANE = 0; //turn off LMS
    reg_RX_DP_LMS_DFE_EN_LANE = 0;
    reg_RX_DP_LMS_BLW_EN_LANE = 0;

    //save current DFE tap
    reg_RX_EQ_RD_REQ_LANE = 1;
    reg_RX_EQ_RD_REQ_LANE = 0;
    //sav_RX_DP_LMS_DFE_COE_LANE = reg_RX_DP_LMS_DFE_COE_LANE_5_0;

    //set DFE tap force only
    drv_set_dp_lms_ld(0);
    reg_RX_DP_LMS_DFE_LD_LANE = 1;

    //sweep DFE tap
    reg_DFE_OPT_FAIL_LANE = 1;
    best_mse = 0;
    best_snr = 0;
    best_dfe = reg_RX_DP_LMS_DFE_COE_LANE_5_0;

    for(i = reg_DFE_OPT_DFE_MIN_LANE_5_0; i <= reg_DFE_OPT_DFE_MAX_LANE_5_0; i += reg_DFE_OPT_DFE_STEP_LANE_2_0)
    {
      reg_RX_DP_LMS_DFE_EXT_LANE_5_0 = i;
      reg_RX_DP_LMS_TOP_LD_LANE = 1;
      reg_RX_DP_LMS_TOP_LD_LANE = 0;
      reg_RX_DP_LMS_TOP_EN_LANE = 1;
      wait_converge (reg_DFE_OPT_TIMER_LANE_15_0);
      reg_RX_DP_LMS_TOP_EN_LANE = 0;

      //check FFE pst1
      reg_RX_EQ_RD_REQ_LANE = 1;
      reg_RX_EQ_RD_REQ_LANE = 0;

      if(reg_RX_DP_LMS_FFE_PST1_COE_LANE_6_0 & 0x40)
      {
      	dp_ffe_pst1 = 0xc0 | reg_RX_DP_LMS_FFE_PST1_COE_LANE_6_0;
      }
      else
      {
      	dp_ffe_pst1 = reg_RX_DP_LMS_FFE_PST1_COE_LANE_6_0;
      }
      dp_ffe_pst1_abs = abs(dp_ffe_pst1);

      if(dp_ffe_pst1_abs > reg_DFE_OPT_FFE_PST1_MAX_LANE_6_0)
      {
        break;
      }

      //check SNR
      drv_mse_run();
      drv_mse_read();
      mse = reg_MSE_VAL_LANE_15_0;
      snr = snr_approx(reg_MSE_VAL_LANE_15_0);
      drv_mse_exit();

      if(snr > best_snr)
      {
        best_mse = mse;
        best_snr = snr;
        best_dfe = i;
        reg_DFE_OPT_FAIL_LANE = 0;
      }

    }

    reg_DFE_OPT_BEST_MSE_LANE_15_0 = best_mse;
    reg_DFE_OPT_BEST_SNR_LANE_15_0 = best_snr;
    reg_DFE_OPT_BEST_DFE_LANE_5_0 = best_dfe;

    for(j = reg_RX_DP_LMS_DFE_EXT_LANE_5_0; j >= best_dfe; j -= reg_DFE_OPT_DFE_STEP_LANE_2_0)
    {
      reg_RX_DP_LMS_DFE_EXT_LANE_5_0 = j;
      reg_RX_DP_LMS_TOP_LD_LANE = 1;
      reg_RX_DP_LMS_TOP_LD_LANE = 0;
      reg_RX_DP_LMS_TOP_EN_LANE = 1;
      wait_converge (reg_DFE_OPT_TIMER_LANE_15_0);
      reg_RX_DP_LMS_TOP_EN_LANE = 0;
    }

    //run last LMS with BLW
    reg_RX_DP_LMS_BLW_EN_LANE = sav_RX_DP_LMS_BLW_EN_LANE;
    reg_RX_DP_LMS_TOP_EN_LANE = 1;
    wait_converge (reg_DFE_OPT_TIMER_LANE_15_0);
    reg_RX_DP_LMS_TOP_EN_LANE = 0;

    //recover LMS force enable
    drv_set_dp_lms_ld(1);
    reg_RX_DP_LMS_DFE_EXT_LANE_5_0 = 0;

}

