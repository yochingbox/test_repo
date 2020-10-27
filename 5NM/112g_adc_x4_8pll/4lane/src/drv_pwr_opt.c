#include "common.h"
#include "driver.h"

// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg CSEG
#endif

void drv_pwr_opt (uint8_t en) BANKING_CTRL
{

   //DP run/stop
   reg_RX_DP_LMS_RUN_TIME_LANE_5_0  = reg_CDS_DP_LMS_RUN_TIME_LANE_5_0;
   reg_RX_DP_LMS_STOP_TIME_LANE_5_0 = reg_CDS_DP_LMS_STOP_TIME_LANE_5_0;
   reg_RX_DP_LMS_RUN_STOP_EN_LANE   = reg_CDS_DP_LMS_RUN_STOP_EN_LANE & en;

   //DTL run/stop
   reg_RX_DTL_LMS_RUN_TIME_LANE_5_0  = reg_CDS_DTL_LMS_RUN_TIME_LANE_5_0;
   reg_RX_DTL_LMS_STOP_TIME_LANE_5_0 = reg_CDS_DTL_LMS_STOP_TIME_LANE_5_0;
   reg_RX_DTL_LMS_RUN_STOP_EN_LANE   = reg_CDS_DTL_LMS_RUN_STOP_EN_LANE & en;

   //ADC CAL run/stop
   reg_RX_ADC_IF_RUN_TIME_LANE_5_0  = reg_BG_ADC_IF_RUN_TIME_LANE_5_0;
   reg_RX_ADC_IF_STOP_TIME_LANE_5_0 = reg_BG_ADC_IF_STOP_TIME_LANE_5_0;
   reg_RX_ADC_IF_RUN_STOP_EN_LANE   = reg_BG_ADC_IF_RUN_STOP_EN_LANE & en;

   //Turn off frame sync det, PT/Train have different enable control
   reg_FRAME_SYNC_DET_CLK_EN_LANE = !reg_PWR_OPT_TEST_FUNC_CLK_OFF_LANE | !en;

   //Turn off Monitor clock
   reg_RX_EQ_MON_CLK_EN_LANE = !reg_PWR_OPT_TEST_FUNC_CLK_OFF_LANE | !en;

   //Turn off EOM clock
   reg_RX_EQ_EOM_CLK_EN_LANE = !reg_PWR_OPT_TEST_FUNC_CLK_OFF_LANE | !en;

}
