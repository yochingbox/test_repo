/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file power.c
* \purpose power control
* \History
*	10/5/2017 Heejeong Ryu		Initial 
*/

#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK2
#endif

void pu_ivref_on(void) BANKING_CTRL {

	EA = 0;
	reg_ANA_PU_IVREF = 1;
	delay01(10);
	reg_ANA_PU_IVREF_DLY1 = 1;
	delay01(10);
	reg_ANA_PU_IVREF_DLY2 = 1;
	delay01(10);
	reg_ANA_PU_IVREF_DLY3 = 1;
	EA = 1;

}

void check_pu_ivref(void) BANKING_CTRL {
	do {
		if(reg_ANA_PU_IVREF_DLY3) break;
	} while(1);

}

void pu_rx_on(void) BANKING_CTRL {

	EA = 0;
	reg_ANA_PU_PLL = 1; //need gate pu_rx
	reg_ANA_PU_RX_LANE = 1;	
	delay01(5);
	reg_ANA_PU_RX_DLY_LANE = 1;
	delay01(4);
	reg_FFE_PULSE_EN_LANE = 1;
	reg_ANA_RX_PU_DLY2_LANE = 1;
	EA =1;
	
}

void pu_rx_off(void) BANKING_CTRL {
	EA = 0;
	reg_FFE_PULSE_EN_LANE = 0;
	reg_ANA_PU_RX_LANE = 0;
	reg_ANA_PU_RX_DLY_LANE = 0;
	reg_ANA_RX_PU_DLY2_LANE = 0;
	EA = 1;
}

void pu_pll_off(void) BANKING_CTRL { //off - reset_ana*, ana_pu_pll_*,  pll_clk_ready_*, dtx_clk_off*, reset_dtx*

	if(mcuid== master_mcu) { 
						
		reg_DTX_CLK_OFF = 1;	reg_DTX_CLK_OFF_RING = 1;
		reg_RESET_DTX	= 1; 	reg_RESET_DTX_RING = 1;
		
		pll_clk_ready_all_0();
		
		delay01(10);
		reg_RESET_ANA = 1;	reg_RESET_ANA_RING = 1;	
		reg_ANA_PU_PLL_DLY = 0; reg_ANA_PU_PLL_DLY_RING = 0;
		reg_ANA_PU_PLL = 0; reg_ANA_PU_PLL_RING = 0; 

		SYNC_SATUS_PLL_OR_CHG = 1;	
		
	} 		
	
	while(reg_ANA_PU_PLL || reg_ANA_PU_PLL_RING );

}

void pll_clk_ready_1(void) BANKING_CTRL { // //ana_pll_clk_ready**=1
	//delay01(20);
	reg_ANA_PLL_CLK_READY_PRE0 = 1;	
	delay01(5);
	reg_ANA_PLL_CLK_READY_PRE1 = 1;	
	delay01(5);
	reg_ANA_PLL_CLK_READY = 1; 
}	

void pll_clk_ready_0(void) BANKING_CTRL { //ana_pll_clk_ready lc=0
	reg_ANA_PLL_CLK_READY = 0; 
	reg_ANA_PLL_CLK_READY_PRE1 =0;	
	reg_ANA_PLL_CLK_READY_PRE0 = 0;
}

void pll_clk_ready_ring_0(void) BANKING_CTRL { //ana_pll_clk_ready ring=0
	reg_ANA_PLL_CLK_READY_RING = 0; 
	reg_ANA_PLL_CLK_READY_PRE1_RING =0;	
	reg_ANA_PLL_CLK_READY_PRE0_RING = 0;
}

void pll_clk_ready_ring_1(void) BANKING_CTRL { // //ana_pll_clk_ready**=1
	reg_ANA_PLL_CLK_READY_PRE0_RING = 1;
	delay01(5);
	reg_ANA_PLL_CLK_READY_PRE1_RING = 1;
	delay01(5);
	reg_ANA_PLL_CLK_READY_RING = 1;		

}	

void check_pll_clk_ready(void) BANKING_CTRL {
	do {
		if(ring_pll_enabled && reg_ANA_PLL_CLK_READY_RING) break;
		else if(ring_pll_enabled==0 && reg_ANA_PLL_CLK_READY) break;
		if(PHY_NS!=ST_INIT) break;	
	} while(1);
} 

void check_pll_clk_ready_pcie(void) BANKING_CTRL {
	do {
		if(use_ring_pll && reg_ANA_PLL_CLK_READY_RING) break;
		else if(reg_ANA_PLL_CLK_READY) break;
		if(PHY_NS!=ST_INIT) break;	
	} while(1);
} 

void pll_clk_ready_all_0(void) BANKING_CTRL { //ana_pll_clk_ready**=0
	reg_ANA_PLL_CLK_READY = 0; 
	reg_ANA_PLL_CLK_READY_PRE1 =0;	
	reg_ANA_PLL_CLK_READY_PRE0 = 0;
	reg_ANA_PLL_CLK_READY_PRE0_RING = 0;
	reg_ANA_PLL_CLK_READY_PRE1_RING =0;		
	reg_ANA_PLL_CLK_READY_RING = 0;
	
	// don't have to pu_pll_ring=0 here.
	//delay01(10);
	//reg_ANA_PU_PLL_RING = 0;
	//reg_ANA_PU_PLL_DLY_RING = 0;
}

void reset_pwr_reg(void) BANKING_CTRL {
	reg_PIN_PLL_READY_RX_LANE = 0;
	reg_PIN_PLL_READY_TX_LANE =	0;
	
	short_delay();
	short_delay();

	if(mcuid== master_mcu) {
		pll_clk_ready_all_0();
		reg_ANA_PU_IVREF = 1;
		reg_ANA_PU_IVREF_DLY1 =	1;
		reg_ANA_PU_IVREF_DLY2 =	1;
		reg_ANA_PU_IVREF_DLY3 =	1;
		reg_ANA_PU_PLL = 0;
		reg_ANA_PU_PLL_DLY	= 0;
		reg_RESET_ANA = 1;
		reg_REFCLK_DIS_FM_PM = 0;
		reg_RESET_ANA_RING = 1;
		reg_ANA_PU_PLL_RING = 0;
		reg_ANA_PU_PLL_DLY_RING = 0;
		reg_RESET_DTX_RING = 1;
		reg_DTX_CLK_OFF_RING = 1;
		reg_DTX_CLK_OFF	= 1;
		reg_RESET_DTX = 1;
		reg_TX_INTPRESET_EXT = 1;
	}

	reg_ANA_PU_RX_LANE	= 0;
	reg_ANA_PU_RX_DLY_LANE	= 0;
	reg_ANA_PU_TX_LANE = 0;
	reg_ANA_PU_SQ_LANE	= 0;
	reg_DTL_FLOOP_FREEZE_LANE =	1;
	reg_REG_DTL_LOOP_FREEZE_LANE = 1;
	reg_DFE_CLK_OFF_LANE = 1;
	reg_RESET_DTL_LANE = 1;
	reg_RESET_DFE_LANE = 1;
	reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
	reg_ANA_TX_IDLE_HIZ_EN_LANE = 0;
	reg_ANA_BEACON_EN_LANE = 0;
	reg_ANA_TXDETRX_START_LANE = 0;
	reg_ANA_TXDETRX_EN_LANE = 0;
	reg_PIN_TXDETRX_VALID_LANE = 0;
	reg_EOM_RESET_INTP_EXT_LANE = 1;
	reg_RESET_INTP_EXT_LANE = 1;
	
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 0; 
	reg_RXDCC_DAC_SYNC_CLK_LANE = 0;
	reg_TXDCCCAL_EN_LANE = 0;
	reg_RXDCC_CAL_EN_LANE = 0;
	reg_TEMPC_DAC_VALID = 0;
	reg_EOM_ALIGN_EN_LANE = 0;
	reg_TX_TDCAL_EN_LANE = 0;
	
}
	   
