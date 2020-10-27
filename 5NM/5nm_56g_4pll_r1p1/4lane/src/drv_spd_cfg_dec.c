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
#include "pll_sharing.h"

/*#ifdef USE_BANKING*/
/*#pragma codeseg BANK1*/
/*#endif*/

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
  // use variable to store register values to avoid too many read to save time
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
  #ifndef CONFIG_5NM_56G_X4_4PLL_R1P0
  if(spd_cfg_rd == 0 | spd_cfg_rd == 1) {   //for new version, use remote side for max configuration
    reg_PLL_TS_MCU_CTRL_SEL_LANE = 1;
    reg_PLL_RS_MCU_CTRL_SEL_LANE = 1;
  }
  #endif // #CONFIG_5NM_56G_X4_4PLL_R1P0
  if(spd_cfg_rd == 2 | spd_cfg_rd == 4) {
    rs_mcu_ctrl_sel = 1;
    reg_MCU_DEBUG3_LANE_7_0 = 1;
    if(pll_tsrs_switch) {
      reg_PLL_TS_MCU_CTRL_SEL_LANE = rs_mcu_ctrl_sel;
      reg_PLL_RS_MCU_CTRL_SEL_LANE = ts_mcu_ctrl_sel;
      reg_MCU_DEBUG3_LANE_7_0 = 2;
    }
    else {
      reg_MCU_DEBUG3_LANE_7_0 = 3;
      reg_PLL_TS_MCU_CTRL_SEL_LANE = ts_mcu_ctrl_sel;
      reg_MCU_DEBUG3_LANE_7_0 = 4;
      reg_PLL_RS_MCU_CTRL_SEL_LANE = rs_mcu_ctrl_sel;  
      reg_MCU_DEBUG3_LANE_7_0 = 5;
    }
  }
  }
#endif // #ifdef DRV_SPD_CFG_DEC_V1

  if(mcuid == MCU_CMN) {
  //100M_125M control, these PLL registers can only be controlled by MCUs which are in control PLL
  //if in PCIE mode, enable and set to 100M, 
  //In SAS mode, set to 125M
  
  #if defined _PCIE_BUILD
    cmx_ANA_CLK100M_125M_EN = 1;
    cmx_ANA_CLK100M_125M_SEL = 0;
  #endif //#if defined _PCIE_BUILD
  #if defined _SAS_BUILD
    cmx_ANA_CLK100M_125M_SEL = 1;
  #endif //#if defined _SAS_BUILD
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
#ifdef DRV_SPD_CFG_DEC_V0
  if(pll_tsrs_switch0 && reg_LANE_ID_RD_LANE_1_0==0) {
    txclk_sel = !txclk_sel;
    rxclk_sel = !rxclk_sel;
  }
  if(pll_tsrs_switch1 && reg_LANE_ID_RD_LANE_1_0==1) {
    txclk_sel = !txclk_sel;
    rxclk_sel = !rxclk_sel;
  }
  if(pll_tsrs_switch2 && reg_LANE_ID_RD_LANE_1_0==2) {
    txclk_sel = !txclk_sel;
    rxclk_sel = !rxclk_sel;
  }
  if(pll_tsrs_switch3 && reg_LANE_ID_RD_LANE_1_0==3) {
    txclk_sel = !txclk_sel;
    rxclk_sel = !rxclk_sel;
  }
#endif // #ifdef DRV_SPD_CFG_DEC_V0
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

  if(lnx_MCU_CTRL_PLL_LANE_1_0 == 2) {
    reg_ANA_PLL_TS_CLK100MOR125M_EN_LANE = cmx_ANA_CLK100M_125M_EN;
    reg_ANA_PLL_TS_CLK100M_125M_SEL_LANE = cmx_ANA_CLK100M_125M_SEL;
  }
  if(lnx_MCU_CTRL_PLL_LANE_1_0 == 1) {
    reg_ANA_PLL_RS_CLK100MOR125M_EN_LANE = cmx_ANA_CLK100M_125M_EN;
    reg_ANA_PLL_RS_CLK100M_125M_SEL_LANE = cmx_ANA_CLK100M_125M_SEL;
  }
  if(lnx_MCU_CTRL_PLL_LANE_1_0 == 3) {
    reg_ANA_PLL_TS_CLK100MOR125M_EN_LANE = cmx_ANA_CLK100M_125M_EN;
    reg_ANA_PLL_TS_CLK100M_125M_SEL_LANE = cmx_ANA_CLK100M_125M_SEL;
    reg_ANA_PLL_RS_CLK100MOR125M_EN_LANE = cmx_ANA_CLK100M_125M_EN;
    reg_ANA_PLL_RS_CLK100M_125M_SEL_LANE = cmx_ANA_CLK100M_125M_SEL;
  }
  //TRX refclk div
#ifdef DRV_SPD_CFG_DEC_V0
  reg_REF1M_GEN_DIV_LANE_7_0 = (lnx_REFCLK_FREQ_RD_LANE_15_0>>2) -1;
  reg_TRX_DIG_CAL2M_DIV_TOP_LANE_7_0 = (lnx_REFCLK_FREQ_RD_LANE_15_0>>3) -1;
  reg_TRX_DIG_CAL2M_DIV_BOT_LANE_7_0 = (lnx_REFCLK_FREQ_RD_LANE_15_0>>3) -1;
#endif // #ifdef DRV_SPD_CFG_DEC_V0
#ifdef DRV_SPD_CFG_DEC_V1
  #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
  reg_REF1M_GEN_DIV_LANE_8_0_b0 = ((lnx_REFCLK_FREQ_RD_LANE_15_0>>2) -1) & 0xff;
  reg_REF1M_GEN_DIV_LANE_8_0_b1 = (((lnx_REFCLK_FREQ_RD_LANE_15_0>>2) -1) >> 8) & 0x1;
  #endif

  #ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
  reg_REF1M_GEN_DIV_LANE_7_0 = (lnx_REFCLK_FREQ_RD_LANE_15_0>>2) -1;
  #endif

  #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
  reg_TX_DIG_CAL2M_DIV_TOP_LANE_7_0 = (reg_PIN_MCU_FREQ_RD_15_0 >>1) -1;
  reg_TX_DIG_CAL2M_DIV_BOT_LANE_7_0 = (reg_PIN_MCU_FREQ_RD_15_0 >>1) -1;
  reg_RX_DIG_CAL2M_DIV_TOP_LANE_7_0 = (reg_PIN_MCU_FREQ_RD_15_0 >>1) -1;
  reg_RX_DIG_CAL2M_DIV_BOT_LANE_7_0 = (reg_PIN_MCU_FREQ_RD_15_0 >>1) -1;
  #endif
  #ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
  reg_TX_DIG_CAL2M_DIV_TOP_LANE_7_0 = (lnx_REFCLK_FREQ_RD_LANE_15_0>>3) -1;
  reg_TX_DIG_CAL2M_DIV_BOT_LANE_7_0 = (lnx_REFCLK_FREQ_RD_LANE_15_0>>3) -1;
  reg_RX_DIG_CAL2M_DIV_TOP_LANE_7_0 = (lnx_REFCLK_FREQ_RD_LANE_15_0>>3) -1;
  reg_RX_DIG_CAL2M_DIV_BOT_LANE_7_0 = (lnx_REFCLK_FREQ_RD_LANE_15_0>>3) -1;
  #endif

#endif // #ifdef DRV_SPD_CFG_DEC_V1
  //PLL refclk div
  #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
  if(pll_access_allowed(PLL__RS_OR_TS__RS)) {
    reg_PLL_RS_DIG_CAL2M_DIV_LANE_7_0 = (reg_PIN_MCU_FREQ_RD_15_0    >>1) -1;
    reg_PLL_RS_REF1M_GEN_DIV_LANE_7_0 = (lnx_REFCLK_FREQ_RD_LANE_15_0>>2) -1;
    rx_pll_refclk_sel();
  }

  if(pll_access_allowed(PLL__RS_OR_TS__TS)) {
    reg_PLL_TS_DIG_CAL2M_DIV_LANE_7_0 = (reg_PIN_MCU_FREQ_RD_15_0    >>1) -1;
    reg_PLL_TS_REF1M_GEN_DIV_LANE_7_0 = (lnx_REFCLK_FREQ_RD_LANE_15_0>>2) -1;
    tx_pll_refclk_sel();
  }

  reg_ANA_REFCLK_SEL     = reg_PIN_REFCLK_SEL_RX_RD_LANE; 
  reg_REFCLK_SEL_RX_LANE = reg_PIN_REFCLK_SEL_RX_RD_LANE;
  reg_REFCLK_SEL_TX_LANE = reg_PIN_REFCLK_SEL_TX_RD_LANE;
  #endif

  #ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
  if(pll_access_allowed(PLL__RS_OR_TS__RS)) {
    reg_PLL_RS_DIG_CAL2M_DIV_LANE_7_0 = (lnx_REFCLK_FREQ_RD_LANE_15_0>>3) -1;
    reg_PLL_RS_REF1M_GEN_DIV_LANE_7_0 = (lnx_REFCLK_FREQ_RD_LANE_15_0>>2) -1;
    reg_ANA_PLL_RS_REFCLK_SEL_LANE = reg_PIN_REFCLK_SEL_RD_LANE;
  }

  if(pll_access_allowed(PLL__RS_OR_TS__TS)) {
    reg_PLL_TS_DIG_CAL2M_DIV_LANE_7_0 = (lnx_REFCLK_FREQ_RD_LANE_15_0>>3) -1;
    reg_PLL_TS_REF1M_GEN_DIV_LANE_7_0 = (lnx_REFCLK_FREQ_RD_LANE_15_0>>2) -1;
    reg_ANA_PLL_TS_REFCLK_SEL_LANE = reg_PIN_REFCLK_SEL_RD_LANE;
  }

  reg_ANA_REFCLK_SEL = reg_PIN_REFCLK_SEL_RD_LANE; 
  #endif
}

//Lane alignment decoding for programming lane_align_ready_mode & strap bit consolidation
#ifdef _PCIE_BUILD
  if(mcuid != MCU_CMN) {    
    #ifdef CONFIG_5NM_56G_X4_4PLL_R1P1
    //Strap bit consolidation
    if(reg_DPHY_ANA_STRAP_ENABLE_LANE == 1) {
      reg_LANE_ALIGN_OFF_LANE = reg_DPHY_ANA_LANE_ALIGN_OFF_LANE;
      reg_TXCLK_ALIGN_EN_LANE = !reg_DPHY_ANA_LANE_ALIGN_OFF_LANE;
      reg_MASTER_LANE_EN_LANE = reg_DPHY_ANA_MASTER_LANE_EN_LANE;
    }
    #endif

    //lane_align_ready_mode decoding
    if(spd_cfg_rd == 0 || spd_cfg_rd == 1 || spd_cfg_rd == 2) {   //Each TX has a PLL to receive phase_offset value
      reg_LANE_ALIGN_READY_MODE_LANE_1_0 = 2;
    }
    else if(spd_cfg_rd == 3) {
      if(mcuid == 0 || mcuid == 2) {           //4PLL configuration, TX0 & 2 send to PLL, TX1 & 3 idle
        reg_LANE_ALIGN_READY_MODE_LANE_1_0 = 2;
      }
      else if(mcuid == 1 || mcuid == 3) { 
        reg_LANE_ALIGN_READY_MODE_LANE_1_0 = 3;
      }
    } 
    else if(spd_cfg_rd == 4) {
      if(mcuid == 1 || mcuid == 2) {           //2PLL configuration, TX1 & 2 send to PLL, TX0 & 3 idle
        reg_LANE_ALIGN_READY_MODE_LANE_1_0 = 2;
      }
      else if(mcuid == 0 || mcuid == 3) { 
        reg_LANE_ALIGN_READY_MODE_LANE_1_0 = 3;
      }
    }
    else if(spd_cfg_rd == 5) {
      if(mcuid == 1) {           //2PLL configuration, LANE1 master lane, TX1 send to PLL, TX0, 2 & 3 idle
        reg_LANE_ALIGN_READY_MODE_LANE_1_0 = 2;
      }
      else if(mcuid == 0 || mcuid == 2 || mcuid == 3) { 
        reg_LANE_ALIGN_READY_MODE_LANE_1_0 = 3;
      }
    }
  }
#endif

  reg_MCU_DEBUG1_LANE_7_0 = 8;

}
