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
#include "mcu_command.h"
#include "pll_sharing.h"

#ifdef USE_BANKING
#pragma codeseg BANK3
#endif

extern uint8_t pin_reset_core_tx_sample;

//Default value toggle before initial power on (Only necessary ones are present)
void drv_default_toggle(void) BANKING_CTRL {
  reg_EOM_RESET_INTP_EXT_LANE = 1;
  reg_PLL_TS_TX_INTPRESET_EXT_LANE = 1;
  reg_PLL_RS_TX_INTPRESET_EXT_LANE = 1;
  reg_RESET_INTP_EXT_LANE = 1;
  reg_DTL_FLOOP_FREEZE_LANE = 1;
  reg_ANA_RX_DTL_LOOP_FREEZE_LANE = 1;
} 

void drv_pll_power_on() BANKING_CTRL {
  if(pll_sel != TS_ON)  {
    pll_access_route(PLL__RS_OR_TS__RS, MCU_POWER_UP_RS_PLL);
  }

  if(pll_sel != RS_ON)  {
    pll_access_route(PLL__RS_OR_TS__TS, MCU_POWER_UP_TS_PLL);
  }
}

void drv_pll_intpreset_ext() BANKING_CTRL {
  if(pll_sel != TS_ON)  {
    pll_access_route(PLL__RS_OR_TS__RS, MCU_RESET_INTPRESET_EXT_RS);
  }

  if(pll_sel != RS_ON)  {
    pll_access_route(PLL__RS_OR_TS__TS, MCU_RESET_INTPRESET_EXT_TS);
  }
}

void drv_pll_reset_ana_lane() BANKING_CTRL {
  if(pll_sel != RS_ON) {
    pll_access_route(PLL__RS_OR_TS__TS, MCU_SPD_CHG_CLR_RESET_PLL_TS);
  }

  if(pll_sel != TS_ON) {
    pll_access_route(PLL__RS_OR_TS__RS, MCU_SPD_CHG_CLR_RESET_PLL_RS);
  }
}

//Full power on seq, analog circuit up (Initial Power On)
//Should only be called if PIN_PU_PLL_RD_LANE, PIN_PU_RX_RD_LANE and PIN_PU_TX_RD_LANE are all high
void drv_power_on_seq(void) BANKING_CTRL {

  check_pu_ivref();  

  delay(T_5us);
  reg_ANA_PU_SQ_LANE = 1;

  delay(T_15us);

  //while(!reg_PIN_PU_PLL_RD_LANE);
    
  drv_pll_power_on();
  
  //while(!reg_PIN_PU_RX_RD_LANE & !reg_PIN_PU_PLL_RD_LANE);

  reg_ANA_PU_RX_LANE = 1;
  delay(Tus);
  reg_ANA_PU_RX_DLY_LANE = 1;
  
  delay(T_40us);
  reg_EOM_RESET_INTP_EXT_LANE = 0;

  drv_pll_intpreset_ext();

  reg_RESET_INTP_EXT_LANE = 0;

  //while(!reg_PIN_PU_PLL_RD_LANE & !reg_PIN_PU_RX_RD_LANE & !reg_PIN_PU_TX_RD_LANE);

  reg_ANA_PU_TX_LANE = 1;
  //delay(T_10us);
}

void wait_for_pll_lock() BANKING_CTRL {
  switch(pll_sel) {    //wait for corresponding PLL to lock
    case BOTH_ON:
    case SWAP_BOTH_ON:
      while(!drv_pll_read_pll_ts_lock() || !drv_pll_read_pll_rs_lock());
      break;
    case RS_ON:
      while(!drv_pll_read_pll_rs_lock());
      break; 	
    case TS_ON:
      while(!drv_pll_read_pll_ts_lock());
      break;
  }
}

void wait_for_rx_pll_lock() BANKING_CTRL {
  switch(pll_sel) {    //wait for corresponding PLL to lock
    case BOTH_ON:
    case RS_ON:
      while(!drv_pll_read_pll_rs_lock());
      break;
    case SWAP_BOTH_ON:
    case TS_ON:
      while(!drv_pll_read_pll_ts_lock());
      break;
  }
}

void wait_for_tx_pll_lock() BANKING_CTRL {
  switch(pll_sel) {    //wait for corresponding PLL to lock
    case BOTH_ON:
    case TS_ON:
      while(!drv_pll_read_pll_ts_lock());
      break;
    case SWAP_BOTH_ON:
    case RS_ON:
      while(!drv_pll_read_pll_rs_lock());
      break;
  }
}

//Full power on seq, digital clk_gating/reset release (Initial Power On & TRX Spd_chg)
void drv_power_on_dig_prot_dis(const bool free_pll) BANKING_CTRL {

  reg_DTL_FLOOP_FREEZE_LANE = 0;
  reg_ANA_RX_DTL_LOOP_FREEZE_LANE = 0;

  reg_TXFIR_CLK_OFF_LANE = 0;

  delay(Tus);               

  reg_TXRESET_FIR_LANE = 0;

  delay(Tus);             

  #if defined _PCIE_BUILD || defined _USB_BUILD
    reg_RESET_TX_SYNC_LANE = 0;
  #endif //#if defined _PCIE_BUILD || defined _USB_BUILD
  
  delay(T_p5us);

  #ifndef _PCIE_BUILD
  if(pll_sel != TS_ON) {
    pll_access_route(PLL__RS_OR_TS__RS, MCU_DRV_RS_PLL_DTC_CLK_OFF);
  }

  if(pll_sel != RS_ON) {
    pll_access_route(PLL__RS_OR_TS__TS, MCU_DRV_TS_PLL_DTC_CLK_OFF);
  }
  #endif

  reg_DTL_CLK_OFF_LANE = 0;  
  reg_DFE_CLK_OFF_LANE = 0; 

  delay(Tus);

  reg_TX_CLK_EN_LANE = 1;  

  delay(Tus);

  reg_RX_CLK_EN_LANE = 1; 

  delay(Tus);

  #ifndef _PCIE_BUILD
  if(pll_sel != TS_ON) {
    pll_access_route(PLL__RS_OR_TS__RS, MCU_DRV_RS_PLL_DTC_LANE_OFF);
  }

  if(pll_sel != RS_ON) {
    pll_access_route(PLL__RS_OR_TS__TS, MCU_DRV_TS_PLL_DTC_LANE_OFF);
  }
  #endif

  if(free_pll) {
    pll_free_pll();
  }

  reg_RESET_DTL_LANE = 0;   
  reg_RESET_DFE_LANE = 0;  
  
  short_delay_4g(); //simulation fail because reset_dtx need some time with bypass_delay
  delay(T_10us); 

  #ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
  wait_for_pll_lock();
  #endif //#ifdef CONFIG_5NM_56G_X4_4PLL_R1P0

  #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
  pll_access_route(PLL__RS_OR_TS__ANY, MCU_WAIT_FOR_PLL_LOCK);
 #endif // #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)

  #ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
    reg_PWRON_SEQ_LANE = 0;     
  #else
    reg_PWRON_SEQ_TX_LANE = 0;     
    reg_PWRON_SEQ_RX_LANE = 0;     
  #endif

#ifdef _SERDES_BUILD
  if (!reg_TX_SFT_RST_CHG_RISING_ISR_LANE && !reg_TX_SFT_RST_CHG_FALLING_ISR_LANE && !reg_INT_PHY_GEN_TX_CHG_ISR_LANE && !reg_INT_PU_TX_CHG_FALLING_ISR_LANE && !reg_INT_PU_TX_CHG_RISING_ISR_LANE) {
#elif _PCIE_BUILD
  if (!reg_RX_SFT_RST_CHG_RISING_ISR_LANE && !reg_RX_SFT_RST_CHG_FALLING_ISR_LANE && !pin_reset_core_tx_sample) {
#else
  if (!reg_RX_SFT_RST_CHG_RISING_ISR_LANE && !reg_RX_SFT_RST_CHG_FALLING_ISR_LANE) {
#endif
    reg_PIN_PLL_READY_TX_LANE = 1;
  }

#ifdef _SERDES_BUILD
  if (!reg_RX_SFT_RST_CHG_RISING_ISR_LANE && !reg_RX_SFT_RST_CHG_FALLING_ISR_LANE && !reg_INT_PHY_GEN_RX_CHG_ISR_LANE && !reg_INT_PU_RX_CHG_FALLING_ISR_LANE && !reg_INT_PU_RX_CHG_RISING_ISR_LANE) {
#elif _PCIE_BUILD
  if (!reg_TX_SFT_RST_CHG_RISING_ISR_LANE && !reg_TX_SFT_RST_CHG_FALLING_ISR_LANE && !pin_reset_core_tx_sample) {
#else
  if (!reg_TX_SFT_RST_CHG_RISING_ISR_LANE && !reg_TX_SFT_RST_CHG_FALLING_ISR_LANE) {
#endif
    reg_PIN_PLL_READY_RX_LANE = 1; 
  }

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

  pll_access_route(PLL__RS_OR_TS__RS, MCU_RS_OFF_DIG_PROT_EN);
  pll_access_route(PLL__RS_OR_TS__TS, MCU_TS_OFF_DIG_PROT_EN);

  reg_TX_CLK_EN_LANE = 0;
  reg_TXRESET_FIR_LANE = 1;
  reg_TXFIR_CLK_OFF_LANE = 1;
  reg_RX_CLK_EN_LANE = 0;
  reg_DTL_CLK_OFF_LANE = 1;
  reg_DFE_CLK_OFF_LANE = 1;

  #if defined _PCIE_BUILD || defined _USB_BUILD
    reg_RESET_TX_SYNC_LANE = 1; 
  #endif //#if defined _PCIE_BUILD || defined _USB_BUILD

}

//RX_OFF seq, digital clk_gating/reset assert:
void drv_rx_off_dig_prot_en(void) BANKING_CTRL {
  #ifndef CONFIG_5NM_56G_X4_4PLL_R1P0
    reg_PIN_RESET_CORE_ACK_RX_LANE = 0;
  #endif
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
  #ifndef CONFIG_5NM_56G_X4_4PLL_R1P0
    reg_PIN_RESET_CORE_ACK_TX_LANE = 0;
  #endif
  reg_PIN_PLL_READY_TX_LANE = 0;
  reg_TXRESET_FIR_LANE = 1;
  reg_TXFIR_CLK_OFF_LANE = 1;
  #if defined _PCIE_BUILD || defined _USB_BUILD
    reg_RESET_TX_SYNC_LANE = 1; 
  #endif //#if defined _PCIE_BUILD || defined _USB_BUILD
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

//RX_ON seq, analog circuit on:
void drv_rx_slow_on_seq(void) BANKING_CTRL {
  drv_rx_on_seq();
  delay(T_40us);
  reg_EOM_RESET_INTP_EXT_LANE = 0;
  reg_RESET_INTP_EXT_LANE = 0;
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

  #ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
  wait_for_rx_pll_lock();
  #endif //#ifdef CONFIG_5NM_56G_X4_4PLL_R1P0

  #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
  pll_access_route(PLL__RS_OR_TS__ANY, MCU_WAIT_FOR_RX_PLL_LOCK);
  #endif // #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)

#ifdef _SERDES_BUILD
  if (!reg_RX_SFT_RST_CHG_RISING_ISR_LANE && !reg_RX_SFT_RST_CHG_FALLING_ISR_LANE && !reg_INT_PHY_GEN_RX_CHG_ISR_LANE && !reg_INT_PU_RX_CHG_FALLING_ISR_LANE && !reg_INT_PU_RX_CHG_RISING_ISR_LANE) {
#elif _PCIE_BUILD
  if (!reg_RX_SFT_RST_CHG_RISING_ISR_LANE && !reg_RX_SFT_RST_CHG_FALLING_ISR_LANE && !pin_reset_core_tx_sample) {
#else
  if (!reg_RX_SFT_RST_CHG_RISING_ISR_LANE && !reg_RX_SFT_RST_CHG_FALLING_ISR_LANE) {
#endif
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

  reg_TXFIR_CLK_OFF_LANE = 0;
  delay(Tus);
  reg_TXRESET_FIR_LANE = 0;
  delay(Tus);

  #if defined _PCIE_BUILD || defined _USB_BUILD
    reg_RESET_TX_SYNC_LANE = 0; 
  #endif //#if defined _PCIE_BUILD || defined _USB_BUILD

  delay(Tus);

  reg_TX_CLK_EN_LANE = 1;

  if(st_p1off_wk_flag == 1){
    reg_ANA_TX_HIZ_EN_LANE = 0;
    delay(T_40us);
    reg_ANA_TX_HIZ_EN_LANE = 1;
    st_p1off_wk_flag = 0;
  }

  delay(T_10us);

  #ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
  wait_for_tx_pll_lock();
  #endif //#ifdef CONFIG_5NM_56G_X4_4PLL_R1P0

  #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
  pll_access_route(PLL__RS_OR_TS__ANY, MCU_WAIT_FOR_TX_PLL_LOCK);
  #endif // #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)

#ifdef _SERDES_BUILD
  if (!reg_TX_SFT_RST_CHG_RISING_ISR_LANE && !reg_TX_SFT_RST_CHG_FALLING_ISR_LANE && !reg_INT_PHY_GEN_TX_CHG_ISR_LANE && !reg_INT_PU_TX_CHG_FALLING_ISR_LANE && !reg_INT_PU_TX_CHG_RISING_ISR_LANE) {
#elif _PCIE_BUILD
  if (!reg_TX_SFT_RST_CHG_RISING_ISR_LANE && !reg_TX_SFT_RST_CHG_FALLING_ISR_LANE && !pin_reset_core_tx_sample) {
#else
  if (!reg_TX_SFT_RST_CHG_RISING_ISR_LANE && !reg_TX_SFT_RST_CHG_FALLING_ISR_LANE) {
#endif
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

void pll_clk_ts_ready_0(void) BANKING_CTRL { 
	reg_ANA_PLL_TS_CLK_READY_LANE = 0;
}

void pll_clk_rs_ready_0(void) BANKING_CTRL { 
	reg_ANA_PLL_RS_CLK_READY_LANE = 0;
}

#if 0
void pll_clk_ready_all_1(void) BANKING_CTRL { 
	reg_ANA_PLL_RS_CLK_READY_LANE = 1;
	reg_ANA_PLL_TS_CLK_READY_LANE = 1;
}
#endif

void pll_clk_rs_ready_1(void) BANKING_CTRL { 
	reg_ANA_PLL_RS_CLK_READY_LANE = 1;
}

void pll_clk_ts_ready_1(void) BANKING_CTRL { 
	reg_ANA_PLL_TS_CLK_READY_LANE = 1;
}

#if 0
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
#endif

// IVREF on general sequence
void pu_ivref_on(void) BANKING_CTRL {
	reg_ANA_PU_IVREF = 1;
	delay(Tus);
//	reg_ANA_CMN_ANA_RSVD_IN_15_0_b0  |= 0x01; //CMN_ANA_RSVD_IN[0] : PU_CHGPMP 
//	delay(Tus);
	reg_ANA_PU_IVREF_DLY1 = 1;
	delay(Tus);
	reg_ANA_PU_IVREF_DLY2 = 1;
	delay(Tus);
	reg_ANA_PU_IVREF_DLY3 = 1;		
	delay(T_20us);
	reg_ANA_PU_MASREG = 1;
}

void check_pu_ivref(void) BANKING_CTRL {

	do {
		if(reg_ANA_PU_IVREF_DLY3) break;
	} while(1);
}

#if 0
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
#endif

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
	delay(T_20us);
//	reg_ANA_TX_LESS_CUR_IDLE_LANE = 1;
	reg_ANA_TX_HIZ_EN_LANE = 1;
}

void drv_rx_sft_rst_assert (void) BANKING_CTRL {
//Save NT_CLK_EN, 4X_CLK_EN and 4X/2X SEL which should not be cleared and restored after power on again
 	uint8_t rx_nt_clk_en; 
 	uint8_t rx_4x_clk_en; 
 	uint8_t rx_2x_clk_sel; 

#ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
	rx_nt_clk_en = reg_RXCLK_NT_EN_LANE;
	rx_4x_clk_en = reg_RXCLK_4X_EN_LANE;
	rx_2x_clk_sel = reg_RXCLK_2X_SEL_LANE;
#endif

        reg_SFT_RST_ALL_RX_LANE = 1;
	reg_SFT_RST_NO_REG_RX_LANE = 1;
    	reg_PIPE_RX_SFT_RST_NO_REG_LANE = 1;
        reg_SFT_RST_ALL_RX_LANE = 0; 
	reg_SFT_RST_NO_REG_RX_LANE = 0;
    	reg_PIPE_RX_SFT_RST_NO_REG_LANE = 0;

//Set back PU_SQ
        reg_ANA_PU_SQ_LANE = 1;
#ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
#else
	reg_PWRON_SEQ_RX_LANE = 0;
#endif

//set back NT/4X_EN and 2X_SEL
#ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
	reg_RXCLK_NT_EN_LANE = rx_nt_clk_en;
	reg_RXCLK_4X_EN_LANE = rx_4x_clk_en;
	reg_RXCLK_2X_SEL_LANE = rx_2x_clk_sel;
#endif
}

void drv_tx_sft_rst_assert (void) BANKING_CTRL {
//Save TXCLK_ALIGN_EN which should not be cleared and restored after power on again
 	uint8_t txclk_align_en;
	
//Save NT_CLK_EN, 4X_CLK_EN and 4X/2X SEL which should not be cleared and restored after power on again 
 	uint8_t tx_nt_clk_en; 
 	uint8_t tx_4x_clk_en; 
 	uint8_t tx_2x_clk_sel;
	
	txclk_align_en = reg_TXCLK_ALIGN_EN_LANE;

#ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
	tx_nt_clk_en = reg_TXCLK_NT_EN_LANE;
	tx_4x_clk_en = reg_TXCLK_4X_EN_LANE;
	tx_2x_clk_sel = reg_TXCLK_2X_SEL_LANE;
#endif 


        reg_SFT_RST_ALL_TX_LANE = 1;
	reg_SFT_RST_NO_REG_TX_LANE = 1;
    	reg_PIPE_TX_SFT_RST_NO_REG_LANE = 1;
        reg_SFT_RST_ALL_TX_LANE = 0; 
	reg_SFT_RST_NO_REG_TX_LANE = 0;
    	reg_PIPE_TX_SFT_RST_NO_REG_LANE = 0;

//Set back PWRON_SEQ and TXCLK_ALIGN_EN
#ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
	reg_PWRON_SEQ_LANE = 0;
#else
	reg_PWRON_SEQ_TX_LANE = 0;
#endif

	reg_TXCLK_ALIGN_EN_LANE = txclk_align_en;

//set back NT/4X_EN and 2X_SEL
#ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
	reg_TXCLK_NT_EN_LANE = tx_nt_clk_en;
	reg_TXCLK_4X_EN_LANE = tx_4x_clk_en;
	reg_TXCLK_2X_SEL_LANE = tx_2x_clk_sel;
#endif
}

void drv_trx_sft_rst_assert (void) BANKING_CTRL {
//Save TXCLK_ALIGN_EN which should not be cleared and restored after power on again
 	uint8_t txclk_align_en;
	
//Save NT_CLK_EN, 4X_CLK_EN and 4X/2X SEL which should not be cleared and restored after power on again
 	uint8_t rx_nt_clk_en; 
 	uint8_t rx_4x_clk_en; 
 	uint8_t rx_2x_clk_sel; 
 	uint8_t tx_nt_clk_en; 
 	uint8_t tx_4x_clk_en; 
 	uint8_t tx_2x_clk_sel;

	txclk_align_en = reg_TXCLK_ALIGN_EN_LANE;

#ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
	rx_nt_clk_en = reg_RXCLK_NT_EN_LANE;
	rx_4x_clk_en = reg_RXCLK_4X_EN_LANE;
	rx_2x_clk_sel = reg_RXCLK_2X_SEL_LANE;

	tx_nt_clk_en = reg_TXCLK_NT_EN_LANE;
	tx_4x_clk_en = reg_TXCLK_4X_EN_LANE;
	tx_2x_clk_sel = reg_TXCLK_2X_SEL_LANE;
#endif

        reg_SFT_RST_ALL_RX_LANE = 1;
	reg_SFT_RST_NO_REG_RX_LANE = 1;
        reg_SFT_RST_ALL_RX_LANE = 0; 
	reg_SFT_RST_NO_REG_RX_LANE = 0;

        reg_SFT_RST_ALL_TX_LANE = 1;
	reg_SFT_RST_NO_REG_TX_LANE = 1;
        reg_SFT_RST_ALL_TX_LANE = 0; 
	reg_SFT_RST_NO_REG_TX_LANE = 0;
	reg_ANA_REG_TRX_FORCE_LANE = 1;
	reg_ANA_REG_TRX_RST_LANE = 1;
	reg_ANA_REG_TRX_FORCE_LANE = 0;
	reg_ANA_REG_TRX_RST_LANE = 0;

//set back SQ and PWRON_SEQ and TXCLK_ALIGN_EN
	reg_ANA_PU_SQ_LANE = 1;
#ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
	reg_PWRON_SEQ_LANE = 0;
#else
	reg_PWRON_SEQ_TX_LANE = 0;
	reg_PWRON_SEQ_RX_LANE = 0;
#endif
	reg_TXCLK_ALIGN_EN_LANE = txclk_align_en;

//set back NT/4X_EN and 2X_SEL
#ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
	reg_TXCLK_NT_EN_LANE = tx_nt_clk_en;
	reg_TXCLK_4X_EN_LANE = tx_4x_clk_en;
	reg_TXCLK_2X_SEL_LANE = tx_2x_clk_sel;
	reg_RXCLK_NT_EN_LANE = rx_nt_clk_en;
	reg_RXCLK_4X_EN_LANE = rx_4x_clk_en;
	reg_RXCLK_2X_SEL_LANE = rx_2x_clk_sel;
#endif

#ifdef _PCIE_BUILD
    	reg_PIPE_TX_SFT_RST_NO_REG_LANE = 1;
    	reg_PIPE_RX_SFT_RST_NO_REG_LANE = 1;

    #ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
	reg_RESET_CORE_FM_PIPE_TX_LANE = 1;
	reg_RESET_CORE_FM_PIPE_RX_LANE = 1;
	wait_for(reg_SFT_RST_NO_REG_TX_RD_LANE,0);  //PIPE_TX/RX_SFT_RST pulse should have overlap, reset_core_ack should have overlap with pipe_sft_rst
    #endif // #ifdef CONFIG_5NM_56G_X4_4PLL_R1P0

    #if defined (CONFIG_5NM_56G_X4_4PLL_R1P1) || defined (CONFIG_5NM_56G_X1_2PLL)
  	wait_for(reg_CORE_RST_ACK_LANE,0);
    #endif // #ifdef CONFIG_5NM_56G_X4_4PLL_R1P1 or CONFIG_5NM_56G_X1_2PLL

    #ifdef SUPPORT_SFT_RST_ISR
	force_delay(T_25us);
    #else // #ifdef SUPPORT_SFT_RST_ISR
    	force_delay(T_100us);	//Temp solution to delay 1ms for PIPE_SFT_RST overlap across lanes
    	force_delay(T_100us);
    	force_delay(T_100us);
    	reg_MCU_DEBUG0_LANE_7_0 = 0xee;
    	force_delay(T_100us);
    	reg_MCU_DEBUG0_LANE_7_0 = 0xef;
    	force_delay(T_100us);
    	force_delay(T_100us);
    	force_delay(T_100us);
    	force_delay(T_100us);
    	force_delay(T_100us);
    	force_delay(T_100us);
    #endif //ifdef SUPPORT_SFT_RST_ISR
 

#endif //PCIE_BUILD
}
