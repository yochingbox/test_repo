/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file pwr_drv.c
* \purpose power control drive functions for not phy_mode specific
* \History
*	4/22/2019   Heejeong Ryu	splitted power driver and power management, clean up, added pwr_drv.c
*   
*/

#include "common.h"
#ifdef USE_BANKING
#pragma codeseg BANK1
#endif

//Default value toggle before initial power on (Only necessary ones are present)
void drv_default_toggle(void) BANKING_CTRL {
  reg_EOM_RESET_INTP_EXT_LANE = 1;
  reg_PLL_TS_TX_INTPRESET_EXT_LANE = 1;
  reg_PLL_RS_TX_INTPRESET_EXT_LANE = 1;
  reg_RESET_INTP_EXT_LANE = 1;
  reg_DTL_FLOOP_FREEZE_LANE = 1;
  reg_ANA_RX_DTL_LOOP_FREEZE_LANE = 1;
} 

//Full power on seq, analog circuit up (Initial Power On)
void drv_power_on_seq(void) BANKING_CTRL {

  check_pu_ivref();  

  delay(T_5us);
  reg_ANA_PU_SQ_LANE = 1;

  delay(T_15us);

  while(!reg_PIN_PU_PLL_RD_LANE);

  if(pll_sel != TS_ON)  {
	reg_ANA_PLL_RS_PU_PLL_LANE = 1;
	delay(Tus);
	reg_ANA_PLL_RS_PU_PLL_DLY_LANE = 1;
  }
  if(pll_sel != RS_ON)  {
	reg_ANA_PLL_TS_PU_PLL_LANE = 1;
	delay(Tus);
	reg_ANA_PLL_TS_PU_PLL_DLY_LANE = 1;
  }
  
  while(!reg_PIN_PU_RX_RD_LANE & !reg_PIN_PU_PLL_RD_LANE);

  reg_ANA_PU_RX_LANE = 1;
  delay(Tus);
  reg_ANA_PU_RX_DLY_LANE = 1;
  
  delay(T_20us);
  delay(T_20us);

  reg_EOM_RESET_INTP_EXT_LANE = 0;
  reg_PLL_TS_TX_INTPRESET_EXT_LANE = 0;
  reg_PLL_RS_TX_INTPRESET_EXT_LANE = 0;
  reg_RESET_INTP_EXT_LANE = 0;

  while(!reg_PIN_PU_PLL_RD_LANE & !reg_PIN_PU_RX_RD_LANE & !reg_PIN_PU_TX_RD_LANE);

  reg_ANA_PU_TX_LANE = 1;
  //delay(T_10us);
}

//Full power on seq, digital clk_gating/reset release (Initial Power On & TRX Spd_chg)
void drv_power_on_dig_prot_dis(void) BANKING_CTRL {
  int prev_bypass_val = cmx_BYPASS_DELAY_2_0;

  reg_DTL_FLOOP_FREEZE_LANE = 0;
  reg_ANA_RX_DTL_LOOP_FREEZE_LANE = 0;

  if(phy_mode == PCIE || phy_mode == USB) {  
    if(reg_MASTER_LANE_EN_LANE){
    //Avoid too much bypass of this delay in simulation
      if(cmx_BYPASS_DELAY_2_0 >= 4){
	cmx_BYPASS_DELAY_2_0 = 0;
      }
      delay(T_5us);
      cmx_BYPASS_DELAY_2_0 = prev_bypass_val;
    }
    reg_RESET_TX_SYNC_LANE = 0; 
  }
  
  delay(Tus);

  reg_PLL_RS_DTX_CLK_OFF_LANE = 0;
  reg_PLL_TS_DTX_CLK_OFF_LANE = 0;
  reg_DTL_CLK_OFF_LANE = 0;
  reg_DFE_CLK_OFF_LANE = 0;
  reg_RX_CLK_EN_LANE = 1;
  reg_TXFIR_CLK_OFF_LANE = 0;

  delay(Tus);

  reg_TXRESET_FIR_LANE = 0;

  delay(Tus);

  reg_TX_CLK_EN_LANE = 1; 

  delay(Tus);

  reg_RESET_PLL_TS_DTX_LANE = 0;
  reg_RESET_PLL_RS_DTX_LANE = 0;
  reg_RESET_DTL_LANE = 0;
  reg_RESET_DFE_LANE = 0;
  reg_RESET_DFE_LANE = 1;
  reg_RESET_DFE_LANE = 0;
  
  short_delay_4g();
  //delay(T_10us); //simulation fail because reset_dtx need some time with bypass_delay

  switch(pll_sel) {    //wait for corresponding PLL to lock
    case BOTH_ON:
    case SWAP_BOTH_ON:
      while(!reg_ANA_PLL_TS_LOCK_RD_LANE || !reg_ANA_PLL_RS_LOCK_RD_LANE);
      break;
    case RS_ON:
      while(!reg_ANA_PLL_RS_LOCK_RD_LANE);
      break; 	
    case TS_ON:
      while(!reg_ANA_PLL_TS_LOCK_RD_LANE);
      break;
  }

  if (!reg_TX_SFT_RST_CHG_RISING_ISR_LANE) {
    reg_PIN_PLL_READY_TX_LANE = 1;
  }

  if (!reg_RX_SFT_RST_CHG_RISING_ISR_LANE) {
    reg_PIN_PLL_READY_RX_LANE = 1;
  }

  reg_PWRON_SEQ_LANE = 0;

}

//Full power off seq, digital clk_gating/reset assert (TRX Spd_chg)
void drv_power_off_dig_prot_en(void) BANKING_CTRL {
  
//  delay(Tus);

//  reg_DTL_FLOOP_FREEZE_LANE = 0;
//  reg_ANA_RX_DTL_LOOP_FREEZE_LANE = 0;

  reg_PIN_PLL_READY_RX_LANE = 0;
  reg_PIN_PLL_READY_TX_LANE = 0;
  
  delay(T_2us);

  reg_RESET_DTL_LANE = 1;
  reg_RESET_DFE_LANE = 1;
  reg_RESET_PLL_TS_DTX_LANE = 1;
  reg_RESET_PLL_RS_DTX_LANE = 1;
  reg_TX_CLK_EN_LANE = 0;
  reg_TXRESET_FIR_LANE = 1;
  reg_TXFIR_CLK_OFF_LANE = 1;
  reg_RX_CLK_EN_LANE = 0;
  reg_DTL_CLK_OFF_LANE = 1;
  reg_PLL_RS_DTX_CLK_OFF_LANE = 1;
  reg_PLL_TS_DTX_CLK_OFF_LANE = 1;
  reg_DFE_CLK_OFF_LANE = 1;

  if(phy_mode == PCIE || phy_mode == USB) {  
    reg_RESET_TX_SYNC_LANE = 1; 
  }

}

//RX_OFF seq, digital clk_gating/reset assert:
void drv_rx_off_dig_prot_en(void) BANKING_CTRL {
  reg_PIN_PLL_READY_RX_LANE = 0;
  reg_RESET_DFE_LANE = 1;
  reg_RESET_DTL_LANE = 1;
  reg_DFE_CLK_OFF_LANE = 1;
  reg_DTL_CLK_OFF_LANE = 1;
  reg_RX_CLK_EN_LANE = 0;
}

//RX_OFF seq, analog circuit off:
void drv_rx_off_seq(void) BANKING_CTRL {
  reg_ANA_PU_RX_DLY_LANE = 0;
  reg_ANA_PU_RX_LANE = 0;
}

//PLL_RS_OFF seq, digital clk_gating/reset assert:
void drv_pll_rs_off_dig_prot_en(void) BANKING_CTRL {
  reg_RESET_PLL_RS_DTX_LANE = 1;
  reg_PLL_RS_DTX_CLK_OFF_LANE = 1;
}

//PLL_RS_OFF seq, analog circuit off
void drv_pll_rs_off_seq(void) BANKING_CTRL {
  reg_ANA_PLL_RS_CLK_READY_LANE = 0; 
  delay(T_2us);
  reg_PLL_RS_RESET_ANA_LANE = 1;
  reg_ANA_PLL_RS_PU_PLL_DLY_LANE = 0;
  reg_ANA_PLL_RS_PU_PLL_LANE = 0;
}

//TX_OFF seq, digital clk_gating/reset assert:
void drv_tx_off_dig_prot_en(void) BANKING_CTRL {
  reg_PIN_PLL_READY_TX_LANE = 0;
  reg_TXRESET_FIR_LANE = 1;
  reg_TXFIR_CLK_OFF_LANE = 1;
  if(phy_mode == PCIE || phy_mode == USB) {  
    reg_RESET_TX_SYNC_LANE = 1; 
  }
  reg_TX_CLK_EN_LANE = 0;
}

//TX_OFF seq, analog circuit off:
void drv_tx_off_seq(void) BANKING_CTRL {
  reg_ANA_PU_TX_LANE = 0;
}

//PLL_TS_OFF seq, digital clk_gating/reset assert:
void drv_pll_ts_off_dig_prot_en(void) BANKING_CTRL {
  reg_RESET_PLL_TS_DTX_LANE = 1;
  reg_PLL_TS_DTX_CLK_OFF_LANE = 1;
}

//PLL_TS_OFF seq, analog circuit off
void drv_pll_ts_off_seq(void) BANKING_CTRL {
  reg_ANA_PLL_TS_CLK_READY_LANE = 0; 
  delay(T_2us);
  reg_PLL_TS_RESET_ANA_LANE = 1;
  reg_ANA_PLL_TS_PU_PLL_DLY_LANE = 0;
  reg_ANA_PLL_TS_PU_PLL_LANE = 0;
}


//PLL_RS_ON seq, analog circuit on
void drv_pll_rs_on_seq(void) BANKING_CTRL {
  reg_ANA_PLL_RS_PU_PLL_LANE = 1;
  delay(Tus);
  reg_ANA_PLL_RS_PU_PLL_DLY_LANE = 1;
  delay(Tus);
  reg_PLL_RS_RESET_ANA_LANE = 0;
}

//PLL_RS_ON seq, digital clk_gating/reset release:
void drv_pll_rs_on_dig_prot_dis(void) BANKING_CTRL {
  reg_PLL_RS_DTX_CLK_OFF_LANE = 0;
  delay(Tus);
  reg_RESET_PLL_RS_DTX_LANE = 0;
}

//RX_ON seq, analog circuit on:
void drv_rx_on_seq(void) BANKING_CTRL {
  reg_ANA_PU_RX_LANE = 1;
  delay(T_2us);
  reg_ANA_PU_RX_DLY_LANE = 1;
}

//RX_ON seq, digital clk_gating/reset release:
void drv_rx_on_dig_prot_dis(void) BANKING_CTRL {
  delay(T_3us);
  reg_RX_CLK_EN_LANE = 1;
  reg_DTL_CLK_OFF_LANE = 0;
  reg_DFE_CLK_OFF_LANE = 0;
  delay(Tus);
  reg_RESET_DTL_LANE = 0;
  reg_RESET_DFE_LANE = 0;
  delay(T_10us);

  switch(pll_sel) {    //wait for corresponding PLL to lock
    case BOTH_ON:
    case RS_ON:
      while(!reg_ANA_PLL_RS_LOCK_RD_LANE);
      break;
    case SWAP_BOTH_ON:
    case TS_ON:
      while(!reg_ANA_PLL_TS_LOCK_RD_LANE);
      break;
  }

  if (!reg_RX_SFT_RST_CHG_RISING_ISR_LANE) {
    reg_PIN_PLL_READY_RX_LANE = 1;
  }
}

//PLL_TS_ON seq, analog circuit on
void drv_pll_ts_on_seq(void) BANKING_CTRL {
  reg_ANA_PLL_TS_PU_PLL_LANE = 1;
  delay(Tus);
  reg_ANA_PLL_TS_PU_PLL_DLY_LANE = 1;
  delay(Tus);
  reg_PLL_TS_RESET_ANA_LANE = 0;
}

//PLL_TS_ON seq, digital clk_gating/reset release:
void drv_pll_ts_on_dig_prot_dis(void) BANKING_CTRL {
  reg_PLL_TS_DTX_CLK_OFF_LANE = 0;
  delay(Tus);
  reg_RESET_PLL_TS_DTX_LANE = 0;
}

//TX_ON seq, analog circuit on:
void drv_tx_on_seq(void) BANKING_CTRL {
  reg_ANA_PU_TX_LANE = 1;
  //delay(T_10us);
  //reg_TX_RESET_ANA_LANE = 0;
}

//TX_ON seq, digital clk_gating/reset release:
void drv_tx_on_dig_prot_dis(void) BANKING_CTRL {
  int prev_bypass_val = cmx_BYPASS_DELAY_2_0;

  if(phy_mode == PCIE || phy_mode == USB) {  
    if(reg_MASTER_LANE_EN_LANE){
    //Avoid too much bypass of this delay in simulation
      if(cmx_BYPASS_DELAY_2_0 >= 4){
	cmx_BYPASS_DELAY_2_0 = 0;
      }
      delay(T_5us);
      cmx_BYPASS_DELAY_2_0 = prev_bypass_val;
    }
    reg_RESET_TX_SYNC_LANE = 0; 
  }
  delay(Tus);
  reg_TXFIR_CLK_OFF_LANE = 0;
  delay(Tus);
  reg_TXRESET_FIR_LANE = 0;
  delay(Tus);
  reg_TX_CLK_EN_LANE = 1;

  if(PHY_STATUS == ST_P1OFF_WK){
    reg_ANA_TX_HIZ_EN_LANE = 0;
    delay(T_20us);
    delay(T_20us);
    reg_ANA_TX_HIZ_EN_LANE = 1;
  }

  delay(T_10us);

  switch(pll_sel) {    //wait for corresponding PLL to lock
    case BOTH_ON:
    case TS_ON:
      while(!reg_ANA_PLL_TS_LOCK_RD_LANE);
      break;
    case SWAP_BOTH_ON:
    case RS_ON:
      while(!reg_ANA_PLL_RS_LOCK_RD_LANE);
      break;
  }

  if (!reg_TX_SFT_RST_CHG_RISING_ISR_LANE) {
    reg_PIN_PLL_READY_TX_LANE = 1;
  }
}

//TX LOZ to HIZ
void drv_tx_loz2hiz(void) BANKING_CTRL {
  while(!reg_PIN_TX_IDLE_RD_LANE);     // Wait for TX_LOZ_IDLE controlled by HW to continue

  if(reg_PIN_TX_IDLE_HIZ_RD_LANE) {
    delay(T_p125us);
    reg_ANA_TX_HIZ_EN_LANE = 1;
  }
}

//TX HIZ to LOZ
void drv_tx_hiz2loz(void) BANKING_CTRL {
  if(!reg_PIN_TX_IDLE_HIZ_RD_LANE) {
    reg_ANA_TX_HIZ_EN_LANE = 0;
    delay(T_p125us);
  }
}

//-------------------

void pll_clk_ready_all_0(void) BANKING_CTRL { 
	reg_ANA_PLL_RS_CLK_READY_LANE = 0;
	reg_ANA_PLL_TS_CLK_READY_LANE = 0;
}

void pll_clk_rs_ready_0(void) BANKING_CTRL { 
	reg_ANA_PLL_RS_CLK_READY_LANE = 0;
}

void pll_clk_ts_ready_0(void) BANKING_CTRL { 
	reg_ANA_PLL_TS_CLK_READY_LANE = 0;
}

void pll_clk_ready_all_1(void) BANKING_CTRL { 
	reg_ANA_PLL_RS_CLK_READY_LANE = 1;
	reg_ANA_PLL_TS_CLK_READY_LANE = 1;
}

void pll_clk_rs_ready_1(void) BANKING_CTRL { 
	reg_ANA_PLL_RS_CLK_READY_LANE = 1;
}

void pll_clk_ts_ready_1(void) BANKING_CTRL { 
	reg_ANA_PLL_TS_CLK_READY_LANE = 1;
}

void check_pll_rs_clk_ready(void) BANKING_CTRL {
	do {
		if(reg_ANA_PLL_RS_CLK_READY_LANE) break;
		if(PHY_NS!=ST_INIT) break;
	} while(1);
} 

void check_pll_ts_clk_ready(void) BANKING_CTRL {
	do {
		if(reg_ANA_PLL_TS_CLK_READY_LANE) break;
		if(PHY_NS!=ST_INIT) break;
	} while(1);
} 

// IVREF on general sequence
void pu_ivref_on(void) BANKING_CTRL {
	reg_ANA_PU_IVREF = 1;
	delay(Tus);
	reg_ANA_CMN_ANA_RSVD_IN_15_0_b0  |= 0x01; //CMN_ANA_RSVD_IN[0] : PU_CHGPMP 
	delay(Tus);
	reg_ANA_PU_IVREF_DLY1 = 1;
	delay(Tus);
	reg_ANA_PU_IVREF_DLY2 = 1;
	delay(Tus);
	reg_ANA_PU_IVREF_DLY3 = 1;		
	delay(T_20us);
	reg_ANA_CMN_ANA_RSVD_IN_15_0_b0  |= 0x02; //CMN_ANA_RSVD_IN[1] : PU_MASTER_REG
}

void check_pu_ivref(void) BANKING_CTRL {

	do {
		if(reg_ANA_PU_IVREF_DLY3) break;
	} while(1);
}

void pu_pll_rs_off(void) BANKING_CTRL { 

	reg_PLL_RS_DTX_CLK_OFF_LANE = 1;
	reg_RESET_PLL_RS_DTX_LANE = 1;
	pll_clk_rs_ready_0();
	delay(Tus);
	reg_PLL_RS_RESET_ANA_LANE = 1;
	reg_ANA_PLL_RS_PU_PLL_DLY_LANE = 0;
	reg_ANA_PLL_RS_PU_PLL_LANE = 0;

}

void pu_pll_ts_off(void) BANKING_CTRL { 

	reg_PLL_TS_DTX_CLK_OFF_LANE = 1;
	reg_RESET_PLL_TS_DTX_LANE = 1;
	pll_clk_ts_ready_0();
	delay(Tus);
//	reg_TX_RESET_ANA_LANE = 1;
	reg_ANA_PLL_TS_PU_PLL_DLY_LANE = 0;
	reg_ANA_PLL_TS_PU_PLL_LANE = 0;

}

void pu_pll_rs_on(void) BANKING_CTRL { 

	reg_PLL_RS_DTX_CLK_OFF_LANE = 0;
	delay(Tus);
	reg_RESET_PLL_RS_DTX_LANE = 0;
}

void pu_pll_ts_on(void) BANKING_CTRL { 

	reg_PLL_TS_DTX_CLK_OFF_LANE = 0;
	delay(Tus);
	reg_RESET_PLL_TS_DTX_LANE = 0;
}

void txdetrx(void) BANKING_CTRL {
	delay(1);
	//reg_ANA_TX_LESS_CUR_IDLE_LANE = 1;
	//delay(1);
	reg_ANA_TX_HIZ_EN_LANE = 1;	
	reg_ANA_TXDETRX_START_LANE = 1;
	
	while(!reg_TXDETRX_SAMPLE_DONE_LANE);
	delay(1);

	reg_ANA_TXDETRX_START_LANE = 0;
	delay(1);	
	reg_ANA_TX_HIZ_EN_LANE = 0;
	delay(1);
	//reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
	reg_ANA_TX_HIZ_EN_LANE = 0;
}

void txloz2hiz_quick(void) BANKING_CTRL {
	reg_ANA_TX_HIZ_EN_LANE = 0;
//	reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
	delay(200);
//	reg_ANA_TX_LESS_CUR_IDLE_LANE = 1;
	reg_ANA_TX_HIZ_EN_LANE = 1;
}
