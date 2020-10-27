// Author: ckunwang 2020-08-31
// Auto generated by IPDOC
  #include "common.h"
  #ifdef USE_BANKING
  #pragma codeseg BANK1
  #pragma constseg BANK1
  #endif
#ifndef _5FF_COMPHY_112G_ADC_X4_8PLL_R1P0
  void tx_tempc(void) BANKING_CTRL {}
#else
  void tx_tempc(void) BANKING_CTRL {
    reg_TX_E2C_DCC_CAL_BYPASS_EN_LANE = 1;
    reg_TX_ALIGN90_HS_CAL_BYPASS_EN_LANE = 1;
    reg_TX_ALIGN90_LS_CAL_BYPASS_EN_LANE = 1;
    reg_TX_DCC_A90_CAL_BYPASS_EN_LANE = 1;
    reg_TX_DCC_A0_CAL_BYPASS_EN_LANE = 1;
    reg_TX_IMP_N_CAL_BYPASS_EN_LANE = 1;
    reg_TX_IMP_P_CAL_BYPASS_EN_LANE = 1;
    reg_TX_IMP_ICCN_CAL_BYPASS_EN_LANE = 0;
    reg_TX_IMP_ICCP_CAL_BYPASS_EN_LANE = 0;
    reg_TX_IMP_TEMPC_PCAL_BYPASS_EN_LANE = 1;
    reg_TX_IMP_TEMPC_NCAL_BYPASS_EN_LANE = 1;
    reg_TXIMP_TEMPC_PMOS_CAL_EN_LANE = 1;
    reg_TXIMP_TEMPC_NMOS_CAL_EN_LANE = 1;
    reg_TXIMP_TEMPC_ICCP_EN_LANE = 1;
    reg_TXIMP_TEMPC_ICCN_EN_LANE = 1;
    delay(5*Tus);
    reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
    reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 1;
    delay(Tus);
    while(reg_TX_ALIGN90_DCC_IMP_TOP_DONE_LANE == 0){
    }
    reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
    if(reg_TX_IMP_TEMPC_PCAL_TIMEOUT_RD_LANE||reg_TX_IMP_TEMPC_NCAL_TIMEOUT_RD_LANE == 1){
      lnx_TXTEMPC_CAL_PASS_LANE = 0;
    }
    else{
      lnx_TXTEMPC_CAL_PASS_LANE = 1;
    }
    reg_TXCAL_EN_LANE = 0;
  }
#endif
