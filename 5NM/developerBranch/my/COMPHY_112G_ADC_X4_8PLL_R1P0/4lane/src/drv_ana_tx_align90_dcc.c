// Author: xinping 2020-08-19
// Auto generated by IPDOC
  #include "common.h"
  #ifdef USE_BANKING
  #pragma codeseg BANK1
  #pragma constseg BANK1
  #endif
  void tx_align90_dcc(void) BANKING_CTRL {
    uint8_t T;
    T = 1;
    reg_TXCAL_EN_LANE = 1;
    reg_TXDCC_EN_LANE = 1;
    reg_TXDCC_HG_LANE = 0;
    reg_TX_ALIGN90_HS_CAL_BYPASS_EN_LANE = 0;
    reg_TX_E2C_DCC_CAL_BYPASS_EN_LANE = 0;
    reg_TX_DCC_A0_CAL_BYPASS_EN_LANE = 0;
    reg_TX_DCC_A90_CAL_BYPASS_EN_LANE = 0;
    reg_TX_ALIGN90_LS_CAL_BYPASS_EN_LANE = 1;
    reg_TX_IMP_N_CAL_BYPASS_EN_LANE = 1;
    reg_TX_IMP_P_CAL_BYPASS_EN_LANE = 1;
    reg_TX_IMP_ICCN_CAL_BYPASS_EN_LANE = 1;
    reg_TX_IMP_ICCP_CAL_BYPASS_EN_LANE = 1;
    reg_TX_IMP_TEMPC_PCAL_BYPASS_EN_LANE = 1;
    reg_TX_IMP_TEMPC_NCAL_BYPASS_EN_LANE = 1;
    if(reg_TXSPEED_DIV_LANE_2_0 != 0){
      reg_TXDCC_PDIV_EN_LANE = 1;
      reg_TX_E2C_DCC_CAL_BYPASS_EN_LANE = 1;
      reg_TX_ALIGN90_HS_CAL_BYPASS_EN_LANE = 1;
      reg_TX_ALIGN90_LS_CAL_BYPASS_EN_LANE = 0;
    }
    reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
    reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 1;
    delay(Tus);
    while(reg_TX_ALIGN90_DCC_IMP_TOP_DONE_LANE == 0){
    }
    reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
    if(reg_TX_E2C_DCC_CAL_TIMEOUT_RD_LANE||reg_TX_ALIGN90_HS_CAL_TIMEOUT_RD_LANE||reg_TX_ALIGN90_LS_CAL_TIMEOUT_RD_LANE||reg_TX_DCC_A0_CAL_BYPASS_EN_LANE||reg_TX_DCC_A90_CAL_BYPASS_EN_LANE == 1){
      lnx_TXDCC_CAL_PASS_LANE = 0;
    }
    else{
      lnx_TXDCC_CAL_PASS_LANE = 1;
    }
  }
