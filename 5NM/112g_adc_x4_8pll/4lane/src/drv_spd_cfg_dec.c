/*******************************************************************
* \file drv_spd_cfg_dec.c
* \hardware driver of PIN_SPD_CFG pin decoding and speed setting
* \Usage: call drv_spd_cfg_dec() before powering up, after lnx_REFCLK_FREQ_RD_LANE_15_0 and reg_PIN_MCU_FREQ_RD_15_0 are set
* \History
*   7/18/2019   Lisa Wang initial version
*   10/17/2019  Lisa Wang start 5nm design based on 7nm
*   09/28/2020  Lisa Wang updated based on latest 5nm 56G 
*   
*/

#include "common.h"
#ifdef USE_BANKING
#pragma codeseg BANK1
#endif

#define SPD_CFG 	reg_PIN_SPD_CFG_RD_3_0

void drv_spd_cfg_dec(void) BANKING_CTRL {
  //reg_MCU_DEBUG3_LANE_7_0=2;
  //input reg_PIN_SPD_CFG_RD_3_0
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
  uint8_t spd_cfg_rd;
  uint8_t pll_tsrs_switch;
#ifdef DRV_SPD_CFG_DEC_V0
  uint8_t pll_tsrs_switch0;
  uint8_t pll_tsrs_switch1;
  uint8_t pll_tsrs_switch2;
  uint8_t pll_tsrs_switch3;
#endif // #ifdef DRV_SPD_CFG_DEC_V0

#ifdef DRV_SPD_CFG_DEC_V1
  int rs_mcu_ctrl_sel=0;
  int ts_mcu_ctrl_sel=0;
  int txclk_sel=0;
  int rxclk_sel=0;
#endif // #ifdef DRV_SPD_CFG_DEC_V1

  reg_MCU_DEBUG1_LANE_7_0 = 7;

#ifdef DRV_SPD_CFG_DEC_V0
  pll_tsrs_switch0 = reg_PLL_TSRS_SWITCH_LANE0;
  pll_tsrs_switch1 = reg_PLL_TSRS_SWITCH_LANE1;
  pll_tsrs_switch2 = reg_PLL_TSRS_SWITCH_LANE2;
  pll_tsrs_switch3 = reg_PLL_TSRS_SWITCH_LANE3;
#endif // #ifdef DRV_SPD_CFG_DEC_V0
  spd_cfg_rd = SPD_CFG;
  pll_tsrs_switch = lnx_PLL_TSRS_SWITCH_XDAT_LANE;

#ifdef DRV_SPD_CFG_DEC_V1
  if(mcuid != MCU_CMN) {
  if (spd_cfg_rd == 0) {
    reg_SHARE_PLL_MODE_LANE_1_0 = 0;
  }
  if (spd_cfg_rd == 1) {
    reg_SHARE_PLL_MODE_LANE_1_0 = 1;
  }  if (spd_cfg_rd == 2 | spd_cfg_rd == 3) {
    reg_SHARE_PLL_MODE_LANE_1_0 = 2;
  }
  if (spd_cfg_rd == 4 | spd_cfg_rd == 5) {
    reg_SHARE_PLL_MODE_LANE_1_0 = 3;
  }
  if(spd_cfg_rd == 0 | spd_cfg_rd == 1) {   //for new version, use remote side for max configuration
    reg_PLL_TS_MCU_CTRL_SEL_LANE = 1;
    reg_PLL_RS_MCU_CTRL_SEL_LANE = 1;
  }
  if(spd_cfg_rd == 2 | spd_cfg_rd == 4) {
    rs_mcu_ctrl_sel = 1;
   
    if(pll_tsrs_switch) {
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
  reg_ANA_TSEN_ADC_CLK_CNT_15_0 = (reg_PIN_MCU_FREQ_RD_15_0 >>2) -1;
  reg_CMN_DIG_CAL2M_DIV_7_0 = (reg_PIN_MCU_FREQ_RD_15_0 >>1) -1;
  }
  else {
  //reg_TRX_TXCLK_SEL_LANE reg_TRX_RXCLK_SEL_LANE
  if(spd_cfg_rd !=0) { //SPD_CFG not 0, then they are opposite
    if(reg_LANE_ID_RD_LANE_1_0 == 1) { //lane1
      if(spd_cfg_rd == 2) {
        txclk_sel = 1;
      } 
    }
    if(reg_LANE_ID_RD_LANE_1_0 == 2) { //lane2
      if(spd_cfg_rd == 4) {
        txclk_sel = 1;
      } 
    }
    if(reg_LANE_ID_RD_LANE_1_0 == 3) { //lane3
      if(spd_cfg_rd == 2 || spd_cfg_rd == 4) {
        txclk_sel = 1;
      } 
    }
    //RXCLK_SEL is !TXCLK_SEL
    if(!txclk_sel) {
      rxclk_sel = 1;
    }
  }
  if(pll_tsrs_switch) {
    txclk_sel = !txclk_sel;
    rxclk_sel = !rxclk_sel;
  }
  reg_TRX_TXCLK_SEL_LANE = txclk_sel;
  reg_TRX_RXCLK_SEL_LANE = rxclk_sel;
  //lnx_PLL_SEL_LANE_1_0
  lnx_PLL_SEL_LANE_1_0 = reg_TRX_TXCLK_SEL_LANE<<1;
  lnx_PLL_SEL_LANE_1_0 += reg_TRX_RXCLK_SEL_LANE;
  
  //determine if MCU of this lane has access to PLL registers
  if(spd_cfg_rd == 0) lnx_MCU_CTRL_PLL_LANE_1_0 = 3; //For CFG0, all MCU has control to both PLL TS and RS
  if(spd_cfg_rd == 1) lnx_MCU_CTRL_PLL_LANE_1_0 = 2;
  if(spd_cfg_rd == 2) {
    if((reg_LANE_ID_RD_LANE_1_0 == 0) || (reg_LANE_ID_RD_LANE_1_0 == 2)) lnx_MCU_CTRL_PLL_LANE_1_0 = 2;
    else lnx_MCU_CTRL_PLL_LANE_1_0 = 1;
  } 
  if(spd_cfg_rd == 3) {
    if((reg_LANE_ID_RD_LANE_1_0 == 0) || (reg_LANE_ID_RD_LANE_1_0 == 2)) lnx_MCU_CTRL_PLL_LANE_1_0 = 2;
  }
  if(spd_cfg_rd == 4) {
    if(reg_LANE_ID_RD_LANE_1_0 == 1) lnx_MCU_CTRL_PLL_LANE_1_0 = 2;
    else if (reg_LANE_ID_RD_LANE_1_0 == 2) lnx_MCU_CTRL_PLL_LANE_1_0 = 1;
  }
  if(spd_cfg_rd == 5) {
    if(reg_LANE_ID_RD_LANE_1_0 == 1) lnx_MCU_CTRL_PLL_LANE_1_0 = 2;
  }

  if(pll_tsrs_switch) {
    if(lnx_MCU_CTRL_PLL_LANE_1_0 == 2) {
      lnx_MCU_CTRL_PLL_LANE_1_0 = 1;
    }
    else if(lnx_MCU_CTRL_PLL_LANE_1_0 == 1) {
      lnx_MCU_CTRL_PLL_LANE_1_0 = 2;
    }
  }

  //------------------following code didn't consider switch yet.----------------------

  if(reg_LANE_ID_RD_LANE_1_0 == 0) { //lane0 MCU always control 100M_125M
    reg_ANA_PLL_TS_CLK100MOR125M_EN_LANE = cmx_ANA_CLK100M_125M_EN;
    reg_ANA_PLL_TS_CLK100M_125M_SEL_LANE = cmx_ANA_CLK100M_125M_SEL;
  }
  if(reg_LANE_ID_RD_LANE_1_0 == 2) { //lane2 MCU control 100M_125M in CFG2 and CFG3
    if(spd_cfg_rd == 2 || spd_cfg_rd == 3) {
      reg_ANA_PLL_TS_CLK100MOR125M_EN_LANE = cmx_ANA_CLK100M_125M_EN;
      reg_ANA_PLL_TS_CLK100M_125M_SEL_LANE = cmx_ANA_CLK100M_125M_SEL;
    }
  }
  if(reg_LANE_ID_RD_LANE_1_0 == 3) { //lane3 MCU control 100M_125M in CFG0 and CFG1
    if(spd_cfg_rd == 0 || spd_cfg_rd == 1) {
      reg_ANA_PLL_TS_CLK100MOR125M_EN_LANE = cmx_ANA_CLK100M_125M_EN;
      reg_ANA_PLL_TS_CLK100M_125M_SEL_LANE = cmx_ANA_CLK100M_125M_SEL;
    }
  }
  //TRX refclk div
//  reg_REF1M_GEN_DIV_LANE_7_0 = (lnx_REFCLK_FREQ_RD_LANE_15_0>>2) -1;
  reg_REF1M_GEN_DIV_LANE_8_0_b0 = ((lnx_REFCLK_FREQ_RD_LANE_15_0>>2) -1) & 0xff;
  reg_REF1M_GEN_DIV_LANE_8_0_b1 = (((lnx_REFCLK_FREQ_RD_LANE_15_0>>2) -1) >> 8) & 0x1;



#ifdef DRV_SPD_CFG_DEC_V0
  reg_TRX_DIG_CAL2M_DIV_TOP_LANE_7_0 = (reg_PIN_MCU_FREQ_RD_15_0 >>1) -1;
#else
  reg_RX_DIG_CAL2M_DIV_TOP_LANE_7_0 = (reg_PIN_MCU_FREQ_RD_15_0 >>1) -1;
  reg_TX_DIG_CAL2M_DIV_TOP_LANE_7_0 = (reg_PIN_MCU_FREQ_RD_15_0 >>1) -1;
#endif
  reg_TRX_DIG_CAL2M_DIV_BOT_LANE_7_0 = (reg_PIN_MCU_FREQ_RD_15_0 >>1) -1;
  //PLL refclk div
  reg_PLL_RS_DIG_CAL2M_DIV_LANE_7_0 = (reg_PIN_MCU_FREQ_RD_15_0 >>1) -1;
  reg_PLL_TS_DIG_CAL2M_DIV_LANE_7_0 = (reg_PIN_MCU_FREQ_RD_15_0 >>1) -1;
  reg_PLL_RS_REF1M_GEN_DIV_LANE_7_0 = (lnx_REFCLK_FREQ_RD_LANE_15_0>>2) -1;
  reg_PLL_TS_REF1M_GEN_DIV_LANE_7_0 = (lnx_REFCLK_FREQ_RD_LANE_15_0>>2) -1;
}
  reg_MCU_DEBUG1_LANE_7_0 = 8;

}
