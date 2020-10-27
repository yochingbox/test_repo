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

#ifdef SUPPORT_ROM_CODE

void pu_ivref_on(void) BANKING_CTRL {

	EA = 0;
	reg_ANA_PU_IVREF = 1;
	delay01(10); //1us
	reg_ANA_PU_IVREF_DLY1 = 1;
	delay01(10); //1us
	reg_ANA_PU_IVREF_DLY2 = 1;
	delay01(10); //1us
	reg_ANA_PU_IVREF_DLY3 = 1;
	EA = 1;

}

void check_pu_ivref(void) BANKING_CTRL {
	do {
		if(reg_ANA_PU_IVREF_DLY3 /*|| reg_PU_IVREF_FELL==0*/) break;
	} while(1);
}

void pu_rx_on(void) BANKING_CTRL {

	EA = 0;
	
	//need gate pu_rx
	#ifdef SUPPORT_X2_RING_LANE
	if(serdes_ring_lane_en && tag_ringpll_ind_en) {
		if(ring_lane_sel) 
			reg_ANA_PU_PLL_RING = 1; 
		else 	
			reg_ANA_PU_PLL = 1; 
	}
	else 
	#endif
	{
		reg_ANA_PU_PLL = 1; 
	}	
		
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

void pu_ringpll_off(void) BANKING_CTRL { 
	reg_DTX_CLK_OFF_RING = 1;
	reg_RESET_DTX_RING = 1;

	pll_clk_ready_ring_0();

	delay01(10);
	reg_RESET_ANA_RING = 1;
	reg_ANA_PU_PLL_DLY_RING = 0;
	reg_ANA_PU_PLL_RING = 0;
}

void pu_lcpll_off(void) BANKING_CTRL { 
	reg_DTX_CLK_OFF = 1;
	reg_RESET_DTX = 1;
	
	pll_clk_ready_0();
	
	delay01(10);
	reg_RESET_ANA = 1;	
	reg_ANA_PU_PLL_DLY = 0;
	reg_ANA_PU_PLL = 0;		
}

void master_pu_pll_off(void) BANKING_CTRL {			
	reg_DTX_CLK_OFF = 1;	reg_DTX_CLK_OFF_RING = 1;
	reg_RESET_DTX	= 1; 	reg_RESET_DTX_RING = 1;

	pll_clk_ready_all_0();

	delay01(10);
	reg_RESET_ANA = 1;	reg_RESET_ANA_RING = 1;
	reg_ANA_PU_PLL_DLY = 0; reg_ANA_PU_PLL_DLY_RING = 0;
	reg_ANA_PU_PLL = 0;	reg_ANA_PU_PLL_RING = 0;
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

void pll_clk_ready_ring_0(void) BANKING_CTRL {
	reg_ANA_PLL_CLK_READY_RING = 0;
	reg_ANA_PLL_CLK_READY_PRE1_RING =0;
	reg_ANA_PLL_CLK_READY_PRE0_RING = 0;
}

void pll_clk_ready_ring_1(void) BANKING_CTRL {
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

#endif //SUPPORT_ROM_CODE
