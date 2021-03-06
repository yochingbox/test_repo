// Author: mxlin 2020-08-12
// Auto generated by IPDOC
  #include "common.h"
  #ifdef USE_BANKING
  #pragma codeseg BANK1
  #pragma constseg BANK1
  #endif
  void rx_eom(void) BANKING_CTRL {
    uint8_t VAR_RX_EOM_DLL_CAL_SINGLE_EN_TEMP_SAVE;
    uint8_t VAR_RX_EOM_PI_CAL_SINGLE_EN_TEMP_SAVE;
    uint8_t VAR_RX_EOM_PI_DCC_CAL_SINGLE_EN_TEMP_SAVE;
    if(reg_PIN_PHY_MODE_RD_2_0 == 3){
      VAR_RX_EOM_DLL_CAL_SINGLE_EN_TEMP_SAVE = reg_RX_EOM_DLL_CAL_SINGLE_EN_LANE;
      VAR_RX_EOM_PI_CAL_SINGLE_EN_TEMP_SAVE = reg_RX_EOM_PI_CAL_SINGLE_EN_LANE;
      VAR_RX_EOM_PI_DCC_CAL_SINGLE_EN_TEMP_SAVE = reg_RX_EOM_PI_DCC_CAL_SINGLE_EN_LANE;
      reg_RX_EOM_DLL_CAL_SINGLE_EN_LANE = 0;
      reg_RX_EOM_PI_CAL_SINGLE_EN_LANE = 0;
      reg_RX_EOM_PI_DCC_CAL_SINGLE_EN_LANE = 0;
      reg_RX_EOM_TOP_START_LANE = 0;
      reg_RX_EOM_TOP_START_LANE = 1;
      delay(Tus);
      while(reg_RX_EOM_TOP_DONE_LANE == 0){
      }
      reg_RX_EOM_TOP_START_LANE = 0;
      reg_RX_EOM_DLL_CAL_SINGLE_EN_LANE = VAR_RX_EOM_DLL_CAL_SINGLE_EN_TEMP_SAVE;
      reg_RX_EOM_PI_CAL_SINGLE_EN_LANE = VAR_RX_EOM_PI_CAL_SINGLE_EN_TEMP_SAVE;
      reg_RX_EOM_PI_DCC_CAL_SINGLE_EN_LANE = VAR_RX_EOM_PI_DCC_CAL_SINGLE_EN_TEMP_SAVE;
    }
    if(reg_RXSPEED_DIV_LANE_2_0&0X04  ){
      reg_RX_EOM_PI_DCC_CAL_BYPASS_EN_LANE = 1;
    }
    else{
      reg_RX_EOM_PI_DCC_CAL_BYPASS_EN_LANE = 0;
    }
    if(reg_RXSPEED_DIV_LANE_2_0&0X03 != 0){
      reg_RX_EOM_PI_CAL_BYPASS_EN_LANE = 1;
    }
    else{
      reg_RX_EOM_PI_CAL_BYPASS_EN_LANE = 0;
    }
    reg_EOM_CLK_EN_LANE = 1;
    reg_EOM_DLL_REF_FILT_BW_LANE = 1;
    reg_EOM_DLL_HI_BW_LANE = 1;
    reg_RX_EOM_DLL_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 4;
    reg_RX_EOM_DLL_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 = 1;
    reg_EOM_DCCEN_LANE = 1;
    reg_RXDCC_HG_EOMCLK_LANE = 0;
    reg_PU_EOM_ALIGN90_DCC_CMP_LANE = 1;
    reg_RX_EOM_PI_CAL_VAL_MAX_LANE_7_0 = 0XFF;
    reg_RX_EOM_PI_CAL_VAL_MAX_LANE_10_8 = 0X4;
    reg_RX_EOM_TOP_START_LANE = 0;
    reg_RX_EOM_TOP_START_LANE = 1;
    delay(Tus);
    while(reg_RX_EOM_TOP_DONE_LANE == 0){
    }
    reg_RX_EOM_TOP_START_LANE = 0;
    if(reg_RX_EOM_DLL_CAL_TIMEOUT_RD_LANE || reg_RX_EOM_PI_CAL_TIMEOUT_RD_LANE  || reg_RX_EOM_PI_DCC_CAL_TIMEOUT_RD_LANE == 1){
      lnx_RX_EOM_CAL_PASS_LANE = 0;
    }
    else{
      lnx_RX_EOM_CAL_PASS_LANE = 1;
    }
    reg_EOM_CLK_EN_LANE = 0;
    reg_EOM_DCCEN_LANE = 0;
    reg_PU_EOM_ALIGN90_DCC_CMP_LANE = 0;
  }
