/*******************************************************************
* \file drv_spd_cfg_dec.c
* \hardware driver of PIN_SPD_CFG pin decoding and speed setting
* \Usage: call drv_spd_cfg_dec() before powering up, after lnx_REFCLK_FREQ_RD_LANE_15_0 and cmx_MCU_FREQ_15_0 are set
* \History
*	7/18/2019   Lisa Wang initial version
*   10/17/2019  Lisa Wang start 5nm design based on 7nm and removed MCU_CTRL*, since they are moved to PLL hardware from driver
*   
*/

#include "common.h"
#ifdef USE_BANKING
#pragma codeseg BANK1
#endif

void drv_spd_cfg_dec(void) BANKING_CTRL {
  //input SPD_CFG
  //input reg_LANE_ID_RD_LANE_1_0
  //input reg_PLL_TSRS_SWITCH_LANE0/1/2/3
  //output reg_SHARE_PLL_MODE_CMN_1_0 reg_SHARE_PLL_MODE_LANE_1_0 0: txrx separate, 1/2/3: 1/2/4/reserved TRX share 1 PLL 
  //output reg_PLL_R/TS_MCU_CTRL_SEL0/1/2/3
  //output lnx_PLL_SEL_LANE_1_0     [1]: TXCLK_SEL  [0]: RXCLK_SEL
  //output lnx_MCU_CTRL_PLL_LANE_1_0    [1]: MCU's control on TS PLL [0]: MCU's control on RS PLL
  //output reg_TRX_RXCLK_SEL_LANE reg_TRX_TXCLK_SEL_LANE
  //output reg_ANA_PLL_RS_CLK100MOR125M_EN_LANE
  //output reg_ANA_PLL_TS_CLK100MOR125M_EN_LANE
  //output reg_ANA_PLL_RS_CLK100M_125M_SEL_LANE
  //output reg_ANA_PLL_TS_CLK100M_125M_SEL_LANE
  //output REFCLK div/MCU div
#ifdef DRV_SPD_CFG_DEC_V1
  int rs_mcu_ctrl_sel=0;
  int ts_mcu_ctrl_sel=0;
  if(mcuid == MCU_CMN) {
  if (SPD_CFG == 0) {
    reg_SHARE_PLL_MODE_CMN_1_0 = 0;
  }
  if (SPD_CFG == 1) {
    reg_SHARE_PLL_MODE_CMN_1_0 = 1;
  }  if (SPD_CFG == 2 | SPD_CFG == 3) {
    reg_SHARE_PLL_MODE_CMN_1_0 = 2;
  }
  if (SPD_CFG == 4 | SPD_CFG == 5) {
    reg_SHARE_PLL_MODE_CMN_1_0 = 3;
  }
  }
  else {
  if (SPD_CFG == 0) {
    reg_SHARE_PLL_MODE_LANE_1_0 = 0;
  }
  if (SPD_CFG == 1) {
    reg_SHARE_PLL_MODE_LANE_1_0 = 1;
  }  if (SPD_CFG == 2 | SPD_CFG == 3) {
    reg_SHARE_PLL_MODE_LANE_1_0 = 2;
  }
  if (SPD_CFG == 4 | SPD_CFG == 5) {
    reg_SHARE_PLL_MODE_LANE_1_0 = 3;
  }
  if(SPD_CFG == 2 | SPD_CFG == 4) {
    rs_mcu_ctrl_sel = 1;
   
  if(lnx_PLL_TSRS_SWITCH_XDAT_LANE) {
    reg_PLL_TS_MCU_CTRL_SEL_LANE = rs_mcu_ctrl_sel;
    reg_PLL_RS_MCU_CTRL_SEL_LANE = ts_mcu_ctrl_sel;
  }
  else {
    reg_PLL_TS_MCU_CTRL_SEL_LANE = ts_mcu_ctrl_sel;
    reg_PLL_RS_MCU_CTRL_SEL_LANE = rs_mcu_ctrl_sel;  
  }
  }
  }
#endif // #ifdef DRV_SPD_CFG_DEC_V1

  if(mcuid == MCU_CMN) {
  //100M_125M control, these PLL registers can only be controlled by MCUs which are in control PLL
  //if in PCIE mode, enable and set to 100M, 
  //In SAS mode, set to 125M
  if(phy_mode == PCIE) {
    cmx_ANA_CLK100M_125M_EN = 1;
    cmx_ANA_CLK100M_125M_SEL = 0;
  }
  if(phy_mode == SAS) {
    cmx_ANA_CLK100M_125M_SEL = 1;
  }
  //CMN clk div for MCU clock domain counter
  reg_ANA_TSEN_ADC_CLK_CNT_15_0 = (cmx_MCU_FREQ_15_0 >>2) -1;
  reg_CMN_DIG_CAL2M_DIV_7_0 = (cmx_MCU_FREQ_15_0 >>1) -1;
  }
  else {
  //reg_TRX_TXCLK_SEL_LANE reg_TRX_RXCLK_SEL_LANE
  if(SPD_CFG !=0) { //SPD_CFG not 0, then they are opposite
    if(reg_LANE_ID_RD_LANE_1_0 == 1) { //lane1
      if(SPD_CFG == 2) {
        reg_TRX_TXCLK_SEL_LANE = 1;
      } 
    }

    if(reg_LANE_ID_RD_LANE_1_0 == 2) { //lane2
      if(SPD_CFG == 4) {
        reg_TRX_TXCLK_SEL_LANE = 1;
      } 
    }

    if(reg_LANE_ID_RD_LANE_1_0 == 3) { //lane3
      if(SPD_CFG == 2 || SPD_CFG == 4) {
        reg_TRX_TXCLK_SEL_LANE = 1;
      } 
    }
    //RXCLK_SEL is !TXCLK_SEL
    if(!reg_TRX_TXCLK_SEL_LANE) {
      reg_TRX_RXCLK_SEL_LANE = 1;
    }
  }
#ifdef DRV_SPD_CFG_DEC_V0
  if(reg_PLL_TSRS_SWITCH_LANE0 && reg_LANE_ID_RD_LANE_1_0==0) {
    reg_TRX_TXCLK_SEL_LANE = !reg_TRX_TXCLK_SEL_LANE;
    reg_TRX_RXCLK_SEL_LANE = !reg_TRX_RXCLK_SEL_LANE;
  }
  if(reg_PLL_TSRS_SWITCH_LANE1 && reg_LANE_ID_RD_LANE_1_0==1) {
    reg_TRX_TXCLK_SEL_LANE = !reg_TRX_TXCLK_SEL_LANE;
    reg_TRX_RXCLK_SEL_LANE = !reg_TRX_RXCLK_SEL_LANE;
  }
  if(reg_PLL_TSRS_SWITCH_LANE2 && reg_LANE_ID_RD_LANE_1_0==2) {
    reg_TRX_TXCLK_SEL_LANE = !reg_TRX_TXCLK_SEL_LANE;
    reg_TRX_RXCLK_SEL_LANE = !reg_TRX_RXCLK_SEL_LANE;
  }
  if(reg_PLL_TSRS_SWITCH_LANE3 && reg_LANE_ID_RD_LANE_1_0==3) {
    reg_TRX_TXCLK_SEL_LANE = !reg_TRX_TXCLK_SEL_LANE;
    reg_TRX_RXCLK_SEL_LANE = !reg_TRX_RXCLK_SEL_LANE;
  }
#endif // #ifdef DRV_SPD_CFG_DEC_V0

  //lnx_PLL_SEL_LANE_1_0
  lnx_PLL_SEL_LANE_1_0 = reg_TRX_TXCLK_SEL_LANE<<1;
  lnx_PLL_SEL_LANE_1_0 += reg_TRX_RXCLK_SEL_LANE;
  
  //------------------following code didn't consider switch yet.----------------------
  //determine if MCU of this lane has access to PLL registers
  if(SPD_CFG == 0) lnx_MCU_CTRL_PLL_LANE_1_0 = 3; //For CFG0, all MCU has control to both PLL TS and RS
  if(SPD_CFG == 1) lnx_MCU_CTRL_PLL_LANE_1_0 = 2;
  if(SPD_CFG == 2) {
    if((reg_LANE_ID_RD_LANE_1_0 == 0) || (reg_LANE_ID_RD_LANE_1_0 == 2)) lnx_MCU_CTRL_PLL_LANE_1_0 = 2;
    else lnx_MCU_CTRL_PLL_LANE_1_0 = 1;
  } 
  if(SPD_CFG == 3) {
    if((reg_LANE_ID_RD_LANE_1_0 == 0) || (reg_LANE_ID_RD_LANE_1_0 == 2)) lnx_MCU_CTRL_PLL_LANE_1_0 = 2;
  }
  if(SPD_CFG == 4) {
    if(reg_LANE_ID_RD_LANE_1_0 == 0) lnx_MCU_CTRL_PLL_LANE_1_0 = 2;
    else if (reg_LANE_ID_RD_LANE_1_0 == 2) lnx_MCU_CTRL_PLL_LANE_1_0 = 1;
  }
  if(SPD_CFG == 5) {
    if(reg_LANE_ID_RD_LANE_1_0 == 0) lnx_MCU_CTRL_PLL_LANE_1_0 = 2;
  }


  if(reg_LANE_ID_RD_LANE_1_0 == 0) { //lane0 MCU always control 100M_125M
    reg_ANA_PLL_TS_CLK100MOR125M_EN_LANE = cmx_ANA_CLK100M_125M_EN;
    reg_ANA_PLL_TS_CLK100M_125M_SEL_LANE = cmx_ANA_CLK100M_125M_SEL;
  }
  if(reg_LANE_ID_RD_LANE_1_0 == 2) { //lane2 MCU control 100M_125M in CFG2 and CFG3
    if(SPD_CFG == 2 || SPD_CFG == 3) {
      reg_ANA_PLL_TS_CLK100MOR125M_EN_LANE = cmx_ANA_CLK100M_125M_EN;
      reg_ANA_PLL_TS_CLK100M_125M_SEL_LANE = cmx_ANA_CLK100M_125M_SEL;
    }
  }
  if(reg_LANE_ID_RD_LANE_1_0 == 3) { //lane3 MCU control 100M_125M in CFG0 and CFG1
    if(SPD_CFG == 0 || SPD_CFG == 1) {
      reg_ANA_PLL_TS_CLK100MOR125M_EN_LANE = cmx_ANA_CLK100M_125M_EN;
      reg_ANA_PLL_TS_CLK100M_125M_SEL_LANE = cmx_ANA_CLK100M_125M_SEL;
    }
  }
  //TRX refclk div
#ifdef DRV_SPD_CFG_DEC_V0
  reg_REF1M_GEN_DIV_LANE_7_0 = (lnx_REFCLK_FREQ_RD_LANE_15_0>>2) -1;
  reg_TRX_DIG_CAL2M_DIV_TOP_LANE_7_0 = (lnx_REFCLK_FREQ_RD_LANE_15_0>>3) -1;
  reg_TRX_DIG_CAL2M_DIV_BOT_LANE_7_0 = (lnx_REFCLK_FREQ_RD_LANE_15_0>>3) -1;
#endif // #ifdef DRV_SPD_CFG_DEC_V0
#ifdef DRV_SPD_CFG_DEC_V1
  reg_REF1M_GEN_DIV_LANE_7_0 = (lnx_REFCLK_FREQ_RD_LANE_15_0>>2) -1;
  reg_TX_DIG_CAL2M_DIV_TOP_LANE_7_0 = (lnx_REFCLK_FREQ_RD_LANE_15_0>>3) -1;
  reg_TX_DIG_CAL2M_DIV_BOT_LANE_7_0 = (lnx_REFCLK_FREQ_RD_LANE_15_0>>3) -1;
  reg_RX_DIG_CAL2M_DIV_TOP_LANE_7_0 = (lnx_REFCLK_FREQ_RD_LANE_15_0>>3) -1;
  reg_RX_DIG_CAL2M_DIV_BOT_LANE_7_0 = (lnx_REFCLK_FREQ_RD_LANE_15_0>>3) -1;
#endif // #ifdef DRV_SPD_CFG_DEC_V1
  //PLL refclk div
  reg_PLL_RS_DIG_CAL2M_DIV_LANE_7_0 = (lnx_REFCLK_FREQ_RD_LANE_15_0>>3) -1;
  reg_PLL_TS_DIG_CAL2M_DIV_LANE_7_0 = (lnx_REFCLK_FREQ_RD_LANE_15_0>>3) -1;
  reg_PLL_RS_REF1M_GEN_DIV_LANE_7_0 = (lnx_REFCLK_FREQ_RD_LANE_15_0>>2) -1;
  reg_PLL_TS_REF1M_GEN_DIV_LANE_7_0 = (lnx_REFCLK_FREQ_RD_LANE_15_0>>2) -1;
}
}
