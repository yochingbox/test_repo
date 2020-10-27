// Author: ckunwang 2020-08-27
// Auto generated by IPDOC
  #include "common.h"
  #ifdef USE_BANKING
  #pragma codeseg BANK1
  #pragma constseg BANK1
  #endif
#ifndef _5FF_COMPHY_112G_ADC_X4_8PLL_R1P0
  void tx_imp(void) BANKING_CTRL {}
#else
  void tx_imp(void) BANKING_CTRL {
    uint8_t TDLY_IMP;
    uint8_t VAR_TXIMP_CAL_N_PASS1;
    uint8_t VAR_TXIMP_N_1;
    uint8_t VAR_TXIMP_CAL_N_PASS2;
    uint8_t VAR_TXIMP_N_2;
    uint8_t VAR_TXIMP_CAL_N_PASS3;
    uint8_t VAR_TXIMP_N_3;
    uint8_t VAR_TXIMP_CAL_N_PASS4;
    uint8_t VAR_TXIMP_N_4;
    uint8_t VAR_TXIMP_CAL_P_PASS1;
    uint8_t VAR_TXIMP_P_1;
    uint8_t VAR_TXIMP_CAL_P_PASS2;
    uint8_t VAR_TXIMP_P_2;
    uint8_t VAR_TXIMP_CAL_P_PASS3;
    uint8_t VAR_TXIMP_P_3;
    uint8_t VAR_TXIMP_CAL_P_PASS4;
    uint8_t VAR_TXIMP_P_4;
    TDLY_IMP = 5;
    reg_TX_IMP_N_CAL_INDV_EXT_EN_LANE = 0;
    reg_TX_IMP_P_CAL_INDV_EXT_EN_LANE = 0;
    reg_TXIMPCAL_EN = 0;
    reg_TXIMPCAL_EN_LANE = 0;
    reg_VTH_TXIMPCAL_PMOS_2_0 = 4;
    reg_VTH_TXIMPCAL_NMOS_2_0 = 4;
    reg_TXCAL_EN_LANE = 1;
    reg_TXIMPCAL_DRVAMP_3_0 = reg_TX_VREF_TX_SEL_LANE_3_0;
    reg_TX_E2C_DCC_CAL_BYPASS_EN_LANE = 1;
    reg_TX_ALIGN90_HS_CAL_BYPASS_EN_LANE = 1;
    reg_TX_ALIGN90_LS_CAL_BYPASS_EN_LANE = 1;
    reg_TX_DCC_A90_CAL_BYPASS_EN_LANE = 1;
    reg_TX_DCC_A0_CAL_BYPASS_EN_LANE = 1;
    reg_TX_IMP_N_CAL_BYPASS_EN_LANE = 0;
    reg_TX_IMP_P_CAL_BYPASS_EN_LANE = 1;
    reg_TX_IMP_ICCN_CAL_BYPASS_EN_LANE = 1;
    reg_TX_IMP_ICCP_CAL_BYPASS_EN_LANE = 1;
    reg_TX_IMP_TEMPC_PCAL_BYPASS_EN_LANE = 1;
    reg_TX_IMP_TEMPC_NCAL_BYPASS_EN_LANE = 1;
    reg_TXIMPCAL_EN_LANE = 1;
    reg_TX_IMPCAL_NMOS_LANE = 1;
    reg_TX_IMPCAL_2ND_EN_LANE = 0;
    reg_TX_IMPCAL_NSIDE_LANE = 0;
    reg_TXIMPCAL_EN = 1;
    delay(TDLY_IMP*Tus);
    reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
    reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 1;
    delay(Tus);
    while(reg_TX_ALIGN90_DCC_IMP_TOP_DONE_LANE == 0){
    }
    reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
    if(reg_TX_IMP_N_CAL_TIMEOUT_RD_LANE == 1){
      VAR_TXIMP_CAL_N_PASS1 = 0;
    }
    else{
      VAR_TXIMP_CAL_N_PASS1 = 1;
    }
    VAR_TXIMP_N_1 = reg_TX_IMP_N_CAL_RESULT_RD_LANE_6_0;
    reg_TX_IMPCAL_NSIDE_LANE = 1;
    delay(TDLY_IMP*Tus);
    reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
    reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 1;
    delay(Tus);
    while(reg_TX_ALIGN90_DCC_IMP_TOP_DONE_LANE == 0){
    }
    reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
    if(reg_TX_IMP_N_CAL_TIMEOUT_RD_LANE == 1){
      VAR_TXIMP_CAL_N_PASS2 = 0;
    }
    else{
      VAR_TXIMP_CAL_N_PASS2 = 1;
    }
    VAR_TXIMP_N_2 = reg_TX_IMP_N_CAL_RESULT_RD_LANE_6_0;
    reg_TX_IMPCAL_2ND_EN_LANE = 1;
    delay(TDLY_IMP*Tus);
    reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
    reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 1;
    delay(Tus);
    while(reg_TX_ALIGN90_DCC_IMP_TOP_DONE_LANE == 0){
    }
    reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
    if(reg_TX_IMP_N_CAL_TIMEOUT_RD_LANE == 1){
      VAR_TXIMP_CAL_N_PASS3 = 0;
    }
    else{
      VAR_TXIMP_CAL_N_PASS3 = 1;
    }
    VAR_TXIMP_N_3 = reg_TX_IMP_N_CAL_RESULT_RD_LANE_6_0;
    reg_TX_IMPCAL_NSIDE_LANE = 0;
    delay(TDLY_IMP*Tus);
    reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
    reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 1;
    delay(Tus);
    while(reg_TX_ALIGN90_DCC_IMP_TOP_DONE_LANE == 0){
    }
    reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
    if(reg_TX_IMP_N_CAL_TIMEOUT_RD_LANE == 1){
      VAR_TXIMP_CAL_N_PASS4 = 0;
    }
    else{
      VAR_TXIMP_CAL_N_PASS4 = 1;
    }
    VAR_TXIMP_N_4 = reg_TX_IMP_N_CAL_RESULT_RD_LANE_6_0;
    reg_TX_IMP_N_CAL_RESULT_EXT_LANE_6_0 = (VAR_TXIMP_N_1*VAR_TXIMP_CAL_N_PASS1+VAR_TXIMP_N_2*VAR_TXIMP_CAL_N_PASS2+VAR_TXIMP_N_3*VAR_TXIMP_CAL_N_PASS3+VAR_TXIMP_N_4*VAR_TXIMP_CAL_N_PASS4)/(VAR_TXIMP_CAL_N_PASS1+VAR_TXIMP_CAL_N_PASS2+VAR_TXIMP_CAL_N_PASS3+VAR_TXIMP_CAL_N_PASS4);
    reg_TX_IMP_N_CAL_INDV_EXT_EN_LANE = 1;
    reg_TXIMPCAL_EN = 0;
    reg_TXIMPCAL_EN_LANE = 0;
    reg_TX_E2C_DCC_CAL_BYPASS_EN_LANE = 1;
    reg_TX_ALIGN90_HS_CAL_BYPASS_EN_LANE = 1;
    reg_TX_ALIGN90_LS_CAL_BYPASS_EN_LANE = 1;
    reg_TX_DCC_A90_CAL_BYPASS_EN_LANE = 1;
    reg_TX_DCC_A0_CAL_BYPASS_EN_LANE = 1;
    reg_TX_IMP_N_CAL_BYPASS_EN_LANE = 1;
    reg_TX_IMP_P_CAL_BYPASS_EN_LANE = 0;
    reg_TX_IMP_ICCN_CAL_BYPASS_EN_LANE = 1;
    reg_TX_IMP_ICCP_CAL_BYPASS_EN_LANE = 1;
    reg_TX_IMP_TEMPC_PCAL_BYPASS_EN_LANE = 1;
    reg_TX_IMP_TEMPC_NCAL_BYPASS_EN_LANE = 1;
    reg_TXIMPCAL_EN_LANE = 1;
    reg_TX_IMPCAL_NMOS_LANE = 0;
    reg_TX_IMPCAL_2ND_EN_LANE = 0;
    reg_TX_IMPCAL_NSIDE_LANE = 0;
    reg_TXIMPCAL_EN = 1;
    delay(TDLY_IMP*Tus);
    reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
    reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 1;
    delay(Tus);
    while(reg_TX_ALIGN90_DCC_IMP_TOP_DONE_LANE == 0){
    }
    reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
    if(reg_TX_IMP_P_CAL_TIMEOUT_RD_LANE == 1){
      VAR_TXIMP_CAL_P_PASS1 = 0;
    }
    else{
      VAR_TXIMP_CAL_P_PASS1 = 1;
    }
    VAR_TXIMP_P_1 = reg_TX_IMP_P_CAL_RESULT_RD_LANE_6_0;
    reg_TX_IMPCAL_NSIDE_LANE = 1;
    delay(TDLY_IMP*Tus);
    reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
    reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 1;
    delay(Tus);
    while(reg_TX_ALIGN90_DCC_IMP_TOP_DONE_LANE == 0){
    }
    reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
    if(reg_TX_IMP_P_CAL_TIMEOUT_RD_LANE == 1){
      VAR_TXIMP_CAL_P_PASS2 = 0;
    }
    else{
      VAR_TXIMP_CAL_P_PASS2 = 1;
    }
    VAR_TXIMP_P_2 = reg_TX_IMP_P_CAL_RESULT_RD_LANE_6_0;
    reg_TX_IMPCAL_2ND_EN_LANE = 1;
    delay(TDLY_IMP*Tus);
    reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
    reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 1;
    delay(Tus);
    while(reg_TX_ALIGN90_DCC_IMP_TOP_DONE_LANE == 0){
    }
    reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
    if(reg_TX_IMP_P_CAL_TIMEOUT_RD_LANE == 1){
      VAR_TXIMP_CAL_P_PASS3 = 0;
    }
    else{
      VAR_TXIMP_CAL_P_PASS3 = 1;
    }
    VAR_TXIMP_P_3 = reg_TX_IMP_P_CAL_RESULT_RD_LANE_6_0;
    reg_TX_IMPCAL_NSIDE_LANE = 0;
    delay(TDLY_IMP*Tus);
    reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
    reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 1;
    delay(Tus);
    while(reg_TX_ALIGN90_DCC_IMP_TOP_DONE_LANE == 0){
    }
    reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
    if(reg_TX_IMP_P_CAL_TIMEOUT_RD_LANE == 1){
      VAR_TXIMP_CAL_P_PASS4 = 0;
    }
    else{
      VAR_TXIMP_CAL_P_PASS4 = 1;
    }
    if(VAR_TXIMP_CAL_P_PASS1 && VAR_TXIMP_CAL_P_PASS2 && VAR_TXIMP_CAL_P_PASS3 && VAR_TXIMP_CAL_P_PASS4 && VAR_TXIMP_CAL_N_PASS1 && VAR_TXIMP_CAL_N_PASS2 && VAR_TXIMP_CAL_N_PASS3 && VAR_TXIMP_CAL_N_PASS4 == 1){
      lnx_TXIMP_CAL_PASS_LANE = 1;
    }
    else{
      lnx_TXIMP_CAL_PASS_LANE = 0;
    }
    VAR_TXIMP_P_4 = reg_TX_IMP_P_CAL_RESULT_RD_LANE_6_0;
    reg_TX_IMP_N_CAL_RESULT_EXT_LANE_6_0 = (VAR_TXIMP_P_1*VAR_TXIMP_CAL_P_PASS1+VAR_TXIMP_P_2*VAR_TXIMP_CAL_P_PASS2+VAR_TXIMP_P_3*VAR_TXIMP_CAL_P_PASS3+VAR_TXIMP_P_4*VAR_TXIMP_CAL_P_PASS4)/（VAR_TXIMP_CAL_P_PASS1+VAR_TXIMP_CAL_P_PASS2+VAR_TXIMP_CAL_P_PASS3+VAR_TXIMP_CAL_P_PASS4）;
    reg_TX_IMP_N_CAL_INDV_EXT_EN_LANE = 1;
    reg_TXIMPCAL_EN = 0;
    reg_TXIMPCAL_EN_LANE = 0;
  }
#endif