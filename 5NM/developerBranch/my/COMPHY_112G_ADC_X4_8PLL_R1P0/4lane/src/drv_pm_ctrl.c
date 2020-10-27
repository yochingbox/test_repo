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
#ifdef DRV_PWR_V0
  reg_RX_GB_FIFO_RD_CLK_EN_LANE = 0;
  reg_RX_GB_FIFO_WR_CLK_EN_LANE = 0;
#else
  reg_RX_GB_DATA_CLK_EN_LANE = 0;
  reg_RX_GB_ADCCLK_EN_LANE = 0;
#endif
}

void drv_rx_default_toggle(void) BANKING_CTRL {
#ifdef DRV_PWR_V0
  reg_RX_GB_FIFO_RD_CLK_EN_LANE = 0;
  reg_RX_GB_FIFO_WR_CLK_EN_LANE = 0;
#else
  reg_RX_GB_DATA_CLK_EN_LANE = 0;
  reg_RX_GB_ADCCLK_EN_LANE = 0;
#endif
}

void drv_tx_default_toggle(void) BANKING_CTRL {

}

//Power on seq, analog circuit up
void drv_power_on_seq(void) BANKING_CTRL {

  check_pu_ivref();

  delay(T_5us);
  reg_ANA_PU_SQ_LANE = 1;

  delay(T_35us);

  //while((reg_MCU_DEBUGA_LANE_7_0=0xB9)&&!reg_PIN_PU_PLL_RD_LANE);
  wait_for(reg_PIN_PU_PLL_RD_LANE,0);

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

  while((reg_MCU_DEBUGA_LANE_7_0=0xBA)&&!reg_PIN_PU_RX_RD_LANE & !reg_PIN_PU_PLL_RD_LANE);
 // wait_for(reg_PIN_PU_RX_RD_LANE|reg_PIN_PU_PLL_RD_LANE,0);

  reg_ANA_PU_RX_LANE = 1;
  delay(Tus);
  reg_ANA_PU_RX_DLY_LANE = 1;
#ifdef DRV_PWR_V0
  reg_RX_RXCLK_EN_LANE = 1;
#endif

  delay(T_40us);

  while((reg_MCU_DEBUGA_LANE_7_0=0xBB)&&!reg_PIN_PU_PLL_RD_LANE & !reg_PIN_PU_RX_RD_LANE & !reg_PIN_PU_TX_RD_LANE);
 // wait_for(!(!reg_PIN_PU_PLL_RD_LANE & !reg_PIN_PU_RX_RD_LANE & !reg_PIN_PU_TX_RD_LANE),0);

  reg_ANA_PU_TX_LANE = 1;
}

//Power on seq, digital clk_gating/reset release
void drv_power_on_dig_prot_dis(void) BANKING_CTRL { 
  int i;

  reg_PLL_RS_DTX_CLK_OFF_LANE = 0;
  reg_PLL_TS_DTX_CLK_OFF_LANE = 0;

  reg_TX_FIR_CLK_OFF_LANE = 0;

  delay(Tus);

  reg_TX_RESET_FIR_LANE = 0;

  delay(Tus);

  reg_TX_CLK_EN_LANE = 1; 

  reg_RX_CLK_EN_LANE = 1;
  reg_DTL_RST_LANE = 0;

  delay(Tus);

  reg_RESET_PLL_TS_DTX_LANE = 0;
  reg_RESET_PLL_RS_DTX_LANE = 0;
  
  drv_rx_gb_fifo_clk_toggle();

//  short_delay_4g();
  delay(T_10us);

  switch(pll_sel) {    //wait for corresponding PLL to lock
    case BOTH_ON:
    case SWAP_BOTH_ON:
      //while((reg_MCU_DEBUGA_LANE_7_0=0xBC)&&!reg_ANA_PLL_TS_LOCK_RD_LANE || !reg_ANA_PLL_RS_LOCK_RD_LANE);
      wait_for(reg_ANA_PLL_TS_LOCK_RD_LANE && reg_ANA_PLL_RS_LOCK_RD_LANE,0);
      break;
    case RS_ON:
      //while((reg_MCU_DEBUGA_LANE_7_0=0xBD)&&!reg_ANA_PLL_RS_LOCK_RD_LANE);
      wait_for(reg_ANA_PLL_RS_LOCK_RD_LANE,0);
      break; 	
    case TS_ON:
      //while((reg_MCU_DEBUGA_LANE_7_0=0xBE)&&!reg_ANA_PLL_TS_LOCK_RD_LANE);
      wait_for(reg_ANA_PLL_TS_LOCK_RD_LANE,0);
      break;
  }

  reg_PWRON_SEQ_LANE = 0;

  if (!reg_TX_SFT_RST_CHG_RISING_ISR_LANE && !reg_TX_SFT_RST_CHG_FALLING_ISR_LANE && !reg_INT_PHY_GEN_TX_CHG_ISR_LANE && !reg_INT_PU_TX_CHG_FALLING_ISR_LANE && !reg_INT_PU_TX_CHG_RISING_ISR_LANE) {
    reg_PIN_PLL_READY_TX_LANE = 1;
  }

  if (!reg_RX_SFT_RST_CHG_RISING_ISR_LANE && !reg_RX_SFT_RST_CHG_FALLING_ISR_LANE && !reg_INT_PHY_GEN_RX_CHG_ISR_LANE && !reg_INT_PU_RX_CHG_FALLING_ISR_LANE && !reg_INT_PU_RX_CHG_RISING_ISR_LANE) {
    reg_PIN_PLL_READY_RX_LANE = 1;
  }


}

//Full power off seq, digital clk_gating/reset assert (TRX Spd_chg)
void drv_power_off_dig_prot_en(void) BANKING_CTRL {

  reg_PIN_PLL_READY_TX_LANE = 0;
  reg_PIN_PLL_READY_RX_LANE = 0;

#ifdef DRV_PWR_V0
  reg_RX_GB_FIFO_WR_CLK_EN_LANE = 0;
  reg_RX_GB_FIFO_RD_CLK_EN_LANE = 0;
#else
  reg_RX_GB_ADCCLK_EN_LANE = 0;
  reg_RX_GB_DATA_CLK_EN_LANE = 0;
#endif
  reg_RX_GB_RST_LANE = 1;

  reg_RESET_PLL_TS_DTX_LANE = 1;
  reg_RESET_PLL_RS_DTX_LANE = 1;

  reg_TX_CLK_EN_LANE = 0;
  reg_TX_RESET_FIR_LANE = 1;
  reg_TX_FIR_CLK_OFF_LANE = 1;

  reg_RX_CLK_EN_LANE = 0;

  reg_PLL_RS_DTX_CLK_OFF_LANE = 1;
  reg_PLL_TS_DTX_CLK_OFF_LANE = 1;

}

//RX_OFF seq, digital clk_gating/reset assert:
void drv_rx_off_dig_prot_en(void) BANKING_CTRL {
  reg_PIN_PLL_READY_RX_LANE = 0;
#ifdef DRV_PWR_V0
  reg_RX_GB_FIFO_WR_CLK_EN_LANE = 0;
  reg_RX_GB_FIFO_RD_CLK_EN_LANE = 0;
#else
  reg_RX_GB_ADCCLK_EN_LANE = 0;
  reg_RX_GB_DATA_CLK_EN_LANE = 0;
#endif
  reg_RX_GB_RST_LANE = 1;
  reg_RX_CLK_EN_LANE = 0;
}

//RX_OFF seq, analog circuit off:
void drv_rx_off_seq(void) BANKING_CTRL {
  reg_RX_RESET_ANA_LANE = 1;
  //Extra sequence for digital DTL_RST/DTL_RST_SYNC assertion after RX_RESET_ANA
  reg_DTL_RST_LANE = 1;
  reg_DTL_RST_SYNC_LANE = 1;
  //
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

  reg_RX_CLK_EN_LANE = 1;
  reg_DTL_RST_LANE = 0;
  delay(Tus);

  drv_rx_gb_fifo_clk_toggle();

  delay(T_10us);

  switch(pll_sel) {    //wait for corresponding PLL to lock
    case BOTH_ON:
    case RS_ON:
      //while((reg_MCU_DEBUGA_LANE_7_0=0xBF)&&!reg_ANA_PLL_RS_LOCK_RD_LANE);
      wait_for(reg_ANA_PLL_RS_LOCK_RD_LANE,0);
      break;
    case SWAP_BOTH_ON:
    case TS_ON:
      //while((reg_MCU_DEBUGA_LANE_7_0=0xC0)&&!reg_ANA_PLL_TS_LOCK_RD_LANE);
      wait_for(reg_ANA_PLL_TS_LOCK_RD_LANE,0);
      break;
  }

  if (!reg_RX_SFT_RST_CHG_RISING_ISR_LANE && !reg_RX_SFT_RST_CHG_FALLING_ISR_LANE && !reg_INT_PHY_GEN_RX_CHG_ISR_LANE && !reg_INT_PU_RX_CHG_FALLING_ISR_LANE && !reg_INT_PU_RX_CHG_RISING_ISR_LANE) {
    reg_PIN_PLL_READY_RX_LANE = 1;
  }
}

//TX_OFF seq, digital clk_gating/reset assert:
void drv_tx_off_dig_prot_en(void) BANKING_CTRL {
  reg_PIN_PLL_READY_TX_LANE = 0;
  reg_TX_RESET_FIR_LANE = 1;
  reg_TX_FIR_CLK_OFF_LANE = 1;
  reg_TX_CLK_EN_LANE = 0;
}

//TX_OFF seq, analog circuit off:
void drv_tx_off_seq(void) BANKING_CTRL {
  reg_TX_RESET_ANA_LANE = 1;  
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
}

//TX_ON seq, digital clk_gating/reset release:
void drv_tx_on_dig_prot_dis(void) BANKING_CTRL {
  reg_TX_FIR_CLK_OFF_LANE = 0;
  delay(Tus);
  reg_TX_RESET_FIR_LANE = 0;
  delay(Tus);
  reg_TX_CLK_EN_LANE = 1;
  delay(T_10us);

  switch(pll_sel) {    //wait for corresponding PLL to lock
    case BOTH_ON:
    case TS_ON:
      //while((reg_MCU_DEBUGA_LANE_7_0=0xC1)&&!reg_ANA_PLL_TS_LOCK_RD_LANE);
      wait_for(reg_ANA_PLL_TS_LOCK_RD_LANE,0);
      break;
    case SWAP_BOTH_ON:
    case RS_ON:
      //while((reg_MCU_DEBUGA_LANE_7_0=0xC2)&&!reg_ANA_PLL_RS_LOCK_RD_LANE);
      while((reg_MCU_DEBUGA_LANE_7_0=0xC3)&&reg_ANA_PLL_RS_LOCK_RD_LANE,0);
      break;
  }
  
  if (!reg_TX_SFT_RST_CHG_RISING_ISR_LANE && !reg_TX_SFT_RST_CHG_FALLING_ISR_LANE && !reg_INT_PHY_GEN_TX_CHG_ISR_LANE && !reg_INT_PU_TX_CHG_FALLING_ISR_LANE && !reg_INT_PU_TX_CHG_RISING_ISR_LANE) {
    reg_PIN_PLL_READY_TX_LANE = 1;
  }
}

//Put GB FIFO control to a separated function for calling flexibility
void drv_rx_gb_fifo_clk_toggle(void) BANKING_CTRL {
  uint8_t i;
//OFF
  #ifdef DRV_PWR_V0
    reg_RX_GB_FIFO_WR_CLK_EN_LANE = 0;
    reg_RX_GB_FIFO_RD_CLK_EN_LANE = 0;
  #else
    reg_RX_GB_ADCCLK_EN_LANE = 0;
    reg_RX_GB_DATA_CLK_EN_LANE = 0;
  #endif
  reg_RX_GB_RST_LANE = 1;

//ON
  reg_RX_GB_RST_LANE = 0;

  #ifdef DRV_PWR_V0
    reg_RX_GB_FIFO_RD_CLK_EN_LANE = 1;
    if(cmx_BYPASS_DELAY_2_0 > 0){
      for(i = 0; i < 100; i++){
        reg_RX_GB_FIFO_RD_CLK_EN_LANE = 1;
      }
    }
    else{
      delay(T_p25us);
    }
    reg_RX_GB_FIFO_WR_CLK_EN_LANE = 1;
  #else
    reg_RX_GB_DATA_CLK_EN_LANE = 1;
    if(cmx_BYPASS_DELAY_2_0 > 0){
      for(i = 0; i < 100; i++){
        reg_RX_GB_DATA_CLK_EN_LANE = 1;
      }
    }
    else{
      delay(T_p25us);
    }
    reg_RX_GB_ADCCLK_EN_LANE = 1; 
  #endif

}

//-------------------

//Misc internal functions
void DTL_DTX_DFE_clkoff_reset_0(void) BANKING_CTRL {

#ifndef _112G_ADC
	reg_DTX_CLK_OFF_LANE = 0;
	delay(Tus);
	reg_RESET_DTX_LANE = 0;

#endif

}

void DTL_DTX_DFE_clkoff_reset_1(void) BANKING_CTRL {

#ifndef _112G_ADC
	reg_DTX_CLK_OFF_LANE = 1;
	reg_RESET_DTX_LANE = 1;
#endif

}

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

void check_pll_clk_ready(void) BANKING_CTRL {
	do {
		if(reg_ANA_PLL_RS_CLK_READY_LANE && reg_ANA_PLL_TS_CLK_READY_LANE) break;
		if(PHY_NS!=ST_INIT) break;
	} while((reg_MCU_DEBUGA_LANE_7_0=0xC4)&&1);
}

void check_pll_rs_clk_ready(void) BANKING_CTRL {
	do {
		if(reg_ANA_PLL_RS_CLK_READY_LANE) break;
		if(PHY_NS!=ST_INIT) break;
	} while((reg_MCU_DEBUGA_LANE_7_0=0xC5)&&1);
} 

void check_pll_ts_clk_ready(void) BANKING_CTRL {
	do {
		if(reg_ANA_PLL_TS_CLK_READY_LANE) break;
		if(PHY_NS!=ST_INIT) break;
	} while((reg_MCU_DEBUGA_LANE_7_0=0xC6)&&1);
} 

// IVREF on general sequence
void pu_ivref_on(void) BANKING_CTRL {

	reg_ANA_PU_IVREF = 1;
	delay(Tus);
       #ifdef DRV_PWR_V0
	reg_ANA_CMN_ANA_RSVD_IN_15_0_b0 |= 0x01; //CMN_ANA_RSVD_IN[0] : PU_CHGPMP
       #endif
	delay(Tus);
	reg_ANA_PU_IVREF_DLY1 = 1;
	delay(Tus);
	reg_ANA_PU_IVREF_DLY2 = 1;
	delay(Tus);
	reg_ANA_PU_IVREF_DLY3 = 1;
	delay(T_20us);
       #ifdef DRV_PWR_V0
	reg_ANA_CMN_ANA_RSVD_IN_15_0_b0  |= 0x02; //CMN_ANA_RSVD_IN[1] : PU_MASTER_REG
       #else
	reg_ANA_PU_MASREG   = 1;
       #endif
}

void check_pu_ivref(void) BANKING_CTRL {

	do {
		if(reg_ANA_PU_IVREF_DLY3) break;
	} while((reg_MCU_DEBUGA_LANE_7_0=0xC7)&&1);
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

void pll_reset_all_0(void) BANKING_CTRL {
	reg_PLL_RS_RESET_ANA_LANE = 0;
	reg_PLL_TS_RESET_ANA_LANE = 0;
}

void pll_reset_all_1(void) BANKING_CTRL {
	reg_PLL_RS_RESET_ANA_LANE = 1;
	reg_PLL_TS_RESET_ANA_LANE = 1;
}

void pll_reset_rs_0(void) BANKING_CTRL {
	reg_PLL_RS_RESET_ANA_LANE = 0;
}

void pll_reset_rs_1(void) BANKING_CTRL {
	reg_PLL_RS_RESET_ANA_LANE = 1;
}

void pll_reset_ts_0(void) BANKING_CTRL {
	reg_PLL_TS_RESET_ANA_LANE = 0;
}

void pll_reset_ts_1(void) BANKING_CTRL {
	reg_PLL_TS_RESET_ANA_LANE = 1;
}

void drv_rx_sft_rst_assert (void) BANKING_CTRL {

//Save NT_CLK_EN and 4X_CLK_EN which should not be cleared and restored after power on again
 	uint8_t rx_nt_clk_en; 
 	uint8_t rx_4x_clk_en; 
 	uint8_t rx_2x_clk_sel; 

	rx_nt_clk_en = reg_RX_RXCLKNT_EN_LANE;
	rx_4x_clk_en = reg_RX_RXCLK4X_EN_LANE;
	rx_2x_clk_sel = (reg_RX_CLKTOP_RSV_LANE_9_2 & 0x02) >> 1;

 	reg_SFT_RST_ALL_RX_LANE = 1;
	reg_ANA_REG_RX_FORCE_LANE = 1;
	reg_ANA_REG_RX_RST_LANE = 1;
	reg_ANA_REG_RX_CAL_FORCE_LANE = 1;
	reg_ANA_REG_RX_CAL_RST_LANE = 1;
	reg_SFT_RST_NO_REG_RX_LANE = 1;
        reg_SFT_RST_ALL_RX_LANE = 0; 
	reg_ANA_REG_RX_FORCE_LANE = 0;
	reg_ANA_REG_RX_RST_LANE = 0;
	reg_ANA_REG_RX_CAL_FORCE_LANE = 0;
	reg_ANA_REG_RX_CAL_RST_LANE = 0;
	reg_SFT_RST_NO_REG_RX_LANE = 0;

	//Set back PU_SQ and NT/4X_CLK_EN
	reg_ANA_PU_SQ_LANE = 1;
	reg_RX_RXCLKNT_EN_LANE = rx_nt_clk_en;
	reg_RX_RXCLK4X_EN_LANE = rx_4x_clk_en;
	reg_RX_CLKTOP_RSV_LANE_9_2 = rx_2x_clk_sel << 1;
}

void drv_tx_sft_rst_assert (void) BANKING_CTRL {
	
	//Save NT_CLK_EN and 4X_CLK_EN which should not be cleared and restored after power on again
 	uint8_t tx_nt_clk_en; 
 	uint8_t tx_4x_clk_en; 
 	uint8_t tx_2x_clk_sel; 

	tx_nt_clk_en = reg_TX_TXCLK_NT_EN_LANE;
	tx_4x_clk_en = reg_TX_TXCLK_4X_EN_LANE;
	tx_2x_clk_sel = reg_TX_RSVD1_LANE_7_0 & 0X01;

	//Cover the PWRON_SEQ pulse caused by TX-only reset with SQ gating to avoid unintended SQ
	reg_SQ_DETECTED_GATE_EN_LANE = 0;

        reg_SFT_RST_ALL_TX_LANE = 1;
	reg_ANA_REG_TX_FORCE_LANE = 1;
	reg_ANA_REG_TX_RST_LANE = 1;
	reg_ANA_REG_TX_CAL_FORCE_LANE = 1;
	reg_ANA_REG_TX_CAL_RST_LANE = 1;
	reg_SFT_RST_NO_REG_TX_LANE = 1;
        reg_SFT_RST_ALL_TX_LANE = 0; 
	reg_ANA_REG_TX_FORCE_LANE = 0;
	reg_ANA_REG_TX_RST_LANE = 0;
	reg_ANA_REG_TX_CAL_FORCE_LANE = 0;
	reg_ANA_REG_TX_CAL_RST_LANE = 0;
	reg_SFT_RST_NO_REG_TX_LANE = 0;

	//Set back PWRON_SEQ and NT/4X_CLK_EN
	reg_PWRON_SEQ_LANE = 0;
	reg_TX_TXCLK_NT_EN_LANE = tx_nt_clk_en;
	reg_TX_TXCLK_4X_EN_LANE = tx_4x_clk_en;
	reg_TX_RSVD1_LANE_7_0 = tx_2x_clk_sel;

	//Cover the PWRON_SEQ pulse caused by TX-only reset with SQ gating to avoid unintended SQ
	reg_SQ_DETECTED_GATE_EN_LANE = 1;
}

void drv_trx_sft_rst_assert (void) BANKING_CTRL {
//Save NT_CLK_EN, 4X_CLK_EN and 4X/2X SEL which should not be cleared and restored after power on again
 	uint8_t rx_nt_clk_en; 
 	uint8_t rx_4x_clk_en; 
 	uint8_t rx_2x_clk_sel; 
 	uint8_t tx_nt_clk_en; 
 	uint8_t tx_4x_clk_en; 
 	uint8_t tx_2x_clk_sel; 

	rx_nt_clk_en = reg_RX_RXCLKNT_EN_LANE;
	rx_4x_clk_en = reg_RX_RXCLK4X_EN_LANE;
	rx_2x_clk_sel = (reg_RX_CLKTOP_RSV_LANE_9_2 & 0x02) >> 1;

	tx_nt_clk_en = reg_TX_TXCLK_NT_EN_LANE;
	tx_4x_clk_en = reg_TX_TXCLK_4X_EN_LANE;
	tx_2x_clk_sel = reg_TX_RSVD1_LANE_7_0 & 0X01;

        reg_SFT_RST_ALL_RX_LANE = 1;
	reg_ANA_REG_RX_FORCE_LANE = 1;
	reg_ANA_REG_RX_RST_LANE = 1;
	reg_ANA_REG_RX_CAL_FORCE_LANE = 1;
	reg_ANA_REG_RX_CAL_RST_LANE = 1;
	reg_SFT_RST_NO_REG_RX_LANE = 1;
        reg_SFT_RST_ALL_RX_LANE = 0; 
	reg_ANA_REG_RX_FORCE_LANE = 0;
	reg_ANA_REG_RX_RST_LANE = 0;
	reg_ANA_REG_RX_CAL_FORCE_LANE = 0;
	reg_ANA_REG_RX_CAL_RST_LANE = 0;
	reg_SFT_RST_NO_REG_RX_LANE = 0;
        reg_SFT_RST_ALL_TX_LANE = 1;
	reg_ANA_REG_TX_FORCE_LANE = 1;
	reg_ANA_REG_TX_RST_LANE = 1;
	reg_ANA_REG_TX_CAL_FORCE_LANE = 1;
	reg_ANA_REG_TX_CAL_RST_LANE = 1;
	reg_SFT_RST_NO_REG_TX_LANE = 1;
        reg_SFT_RST_ALL_TX_LANE = 0; 
	reg_ANA_REG_TX_FORCE_LANE = 0;
	reg_ANA_REG_TX_RST_LANE = 0;
	reg_ANA_REG_TX_CAL_FORCE_LANE = 0;
	reg_ANA_REG_TX_CAL_RST_LANE = 0;
	reg_SFT_RST_NO_REG_TX_LANE = 0;
	reg_ANA_REG_TRX_FORCE_LANE = 1;
	reg_ANA_REG_TRX_RST_LANE = 1;
	reg_ANA_REG_TRX_CAL_FORCE_LANE = 1;
	reg_ANA_REG_TRX_CAL_RST_LANE = 1;
	reg_ANA_REG_TRX_FORCE_LANE = 0;
	reg_ANA_REG_TRX_RST_LANE = 0;
	reg_ANA_REG_TRX_CAL_FORCE_LANE = 0;
	reg_ANA_REG_TRX_CAL_RST_LANE = 0;

	//set back SQ and PWRON_SEQ and NT/4X CLK_EN
	reg_ANA_PU_SQ_LANE = 1;
	reg_PWRON_SEQ_LANE = 0;
	reg_TX_TXCLK_NT_EN_LANE = tx_nt_clk_en;
	reg_TX_TXCLK_4X_EN_LANE = tx_4x_clk_en;
	reg_TX_RSVD1_LANE_7_0 = tx_2x_clk_sel;
	reg_RX_RXCLKNT_EN_LANE = rx_nt_clk_en;
	reg_RX_RXCLK4X_EN_LANE = rx_4x_clk_en;
	reg_RX_CLKTOP_RSV_LANE_9_2 = rx_2x_clk_sel << 1;
}
