// Author: mxlin 2020-08-10
// Auto generated by IPDOC
  #include "common.h"
  #ifdef USE_BANKING
  #pragma codeseg BANK1
  #pragma constseg BANK1
  #endif
  void rx_eom_cont(void) BANKING_CTRL {
    reg_EOM_CLK_EN_LANE = 1;
    reg_EOM_DCCEN_LANE = 1;
    reg_PU_EOM_ALIGN90_DCC_CMP_LANE = 1;
    if(reg_PIN_PHY_MODE_RD_2_0 == 3){
      reg_RX_EOM_DLL_CAL_BYPASS_EN_LANE = 0;
      reg_RX_EOM_PI_CAL_BYPASS_EN_LANE = 0;
      reg_RX_EOM_PI_DCC_CAL_BYPASS_EN_LANE = 0;
      reg_RX_EOM_DLL_CAL_SINGLE_EN_LANE = 0;
      reg_RX_EOM_PI_CAL_SINGLE_EN_LANE = 0;
      reg_RX_EOM_PI_DCC_CAL_SINGLE_EN_LANE = 0;
      reg_RX_EOM_TOP_START_LANE = 0;
      reg_RX_EOM_TOP_START_LANE = 1;
      delay(Tus);
      while(reg_RX_EOM_TOP_DONE_LANE == 0){
      }
      reg_RX_EOM_TOP_START_LANE = 0;
      reg_RX_EOM_DLL_CAL_SINGLE_EN_LANE = 1;
      reg_RX_EOM_PI_CAL_SINGLE_EN_LANE = 1;
      reg_RX_EOM_PI_DCC_CAL_SINGLE_EN_LANE = 1;
    }
    reg_RX_EOM_TOP_CONT_START_LANE = 1;
  }
