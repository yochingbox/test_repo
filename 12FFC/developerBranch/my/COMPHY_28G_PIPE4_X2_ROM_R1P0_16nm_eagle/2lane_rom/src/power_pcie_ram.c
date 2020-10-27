/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file power.c
* \purpose power control for PCIE, USB
* \History
*	10/15/2015 Heejeong Ryu		Initial 
*/

#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK3
#endif

#ifdef _PCIE_USB_BUILD 

#ifdef SUPPORT_SHRTR_PATCH

/**
 * \module P1_P2
 * 
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: PIN_PU_PLL, PIN_PU_TX: H->L
 *    Output: 
*/
void Power_P1_P2_ram( void ) BANKING_CTRL {

	if(reg_ANA_RX_PU_DLY2_LANE) {
		reg_DTL_CLK_OFF_LANE = 1;
		reg_DFE_CLK_OFF_LANE = 1;
		reg_RESET_DTL_LANE = 1;
		CKCON = 0x07 ;  //MCU WAIT time the slowest
		reg_RESET_DFE_LANE = 1;
		CKCON = 0x00 ; //MCU WAIT time setting back to normal.
		txloz2hiz();
		pu_rx_off();			
	}
	
	reg_ANA_TXDETRX_START_LANE = 0;
	reg_ANA_TXDETRX_EN_LANE = 0;
	reg_PIN_TXDETRX_VALID_LANE = 0;

	//delay01(10);

	if( reg_PU_PLL_OR==0 ) {
		pu_pll_off();
	}
	else if( reg_PU_PLL_OR==1 && SYNC_SATUS_PLL_OR_PLL_OFF_READ ) {
		pu_pll_on_ram();
	}
	
	reg_ANA_PU_TX_LANE = 0;	
	
	PHY_STATUS = ST_P2_WK;
	
	if(reg_PIN_REFCLK_DIS_RD && reg_PU_PLL_OR==0) {
		if(reg_P2_STATE_LANE == 1) {
			reg_REFCLK_DIS_FM_PM = 1;
		}
		else {
			PHY_STATUS = ST_P1CLKREQ_WK;
			//do_wake = 0;
		}
	}
	else if(reg_INT_TXDETRX_EN_CHG_ISR_LANE ) {
		PHY_STATUS = ST_P2_TXDETRX;
	}
	
}

/**
 * \module P2_P1
 * 
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: PIN_PU_PLL, PIN_PU_TX: H->L, PIN_PU_RX:L
 *    Output: 
*/
void Power_P2_P1_ram(void) BANKING_CTRL {

	bool pll_already_on = 0;

	do {
		if(reg_PIN_REFCLK_DIS_RD  && reg_PU_PLL_OR==0) {
			if(reg_P2_STATE_LANE == 1) {
				reg_REFCLK_DIS_FM_PM = 1;
			}
			else {
				PHY_STATUS = ST_P1CLKREQ_WK;
				//do_wake = 0;
				return;
			}
		}
		if(reg_INT_TXDETRX_EN_CHG_ISR_LANE ) {
			PHY_STATUS = ST_P2_TXDETRX;
			return;
		}
		if( reg_PIN_TX_ACJTAG_EN_RD_LANE==1 ) { 
			PHY_STATUS = ST_P2_BEACON;
			return;
		}
		if ( 1 == reg_PIN_PU_PLL_RD_LANE )
			do_wake = 1; // handles the case that PIN_PU_PLL went high, but the interrupt is cleared by mcu_reset call
		} while(!do_wake);

	SYNC_STATUS_LANE_EN = 1;
	
	if(reg_PIN_PU_TX_RD_LANE==1 && reg_PIN_PU_RX_RD_LANE == 1) {
		PHY_STATUS = ST_P2_P0;
		return;
	}

	reg_REFCLK_DIS_FM_PM = 0;

	reg_ANA_PU_TX_LANE = 1;

	if(reg_PU_PLL_OR && SYNC_SATUS_PLL_OR_PLL_OFF_READ) {
		pu_pll_on_ram();
		delay01(50);
	}
	else pll_already_on = 1;

	txlane_align();
	SYNC_SATUS_P2_2_P1_ON = 0;

	// Don't delay if both reg_INIT_TXFOFFS and reg_INIT_TXFOFFS_RING are 0.
	if (pll_already_on==0 && 
			(reg_INIT_TXFOFFS_9_0_b0 || reg_INIT_TXFOFFS_9_0_b1 || reg_INIT_TXFOFFS_RING_9_0_b0 || reg_INIT_TXFOFFS_RING_9_0_b1) ){
		delay01(50);
	}
	//txdigital_align();

	if( reg_PIN_PU_RX_RD_LANE == 0 )
		do_wake = 0;
	PHY_STATUS = ST_P1_WK;

	reg_PIN_PLL_READY_TX_LANE = 1;
}

void Power_P2_P0_ram(void) BANKING_CTRL {
	bool pll_already_on = 0;
	reg_REFCLK_DIS_FM_PM = 0; 	

	reg_ANA_PU_TX_LANE = 1;	
	pu_rx_on();

	if( SYNC_SATUS_PLL_OR_PLL_OFF==1 ) {
		if(slave_phy_on==0 && mcuid== master_mcu) {
			//fast startup
			#ifndef SUPPORT_LCPLL_ALWAYS_ON
			if(lc_pll_used || ring_use_250m) //LCPLL always on
			#endif
			pll_fast_cal_ram(); 
			if(ring_pll_enabled) {
				ring_pll_fast_cal();
			}
	
			SYNC_SATUS_PLL_OR_PLL_OFF = 0;
	
		}

		if(slave_phy_on) {
			check_master_phy_status(CHECK_MP_PLL_CLK_READY_ON);
			pll_clk_ready_1();
			if(ring_pll_enabled) {
				check_master_phy_status(CHECK_MP_PLL_CLK_READY_RING_ON);
				pll_clk_ready_ring_1();
			}
		}	
		
		check_pll_clk_ready_pcie();
	}
	else {
		pll_already_on = 1;
	}	
	
    txhiz2loz();
		
	load_cal_data_dll();
	
	txlane_align();
	SYNC_SATUS_P2_2_P1_ON = 0;
	
	DTL_DTX_DFE_clkoff_reset_0();

	if(!pll_already_on)	
		delay01(100);
	
	if(cmx_AUTO_RX_INIT_EN == 0)
		PHY_STATUS = ST_PLLREADY; 
	else	
		PHY_STATUS = ST_DTL;

	reg_PIN_PLL_READY_TX_LANE = 1;
	reg_PIN_PLL_READY_RX_LANE = 1;
}

/**
 * \module P1CLKREQ_P1
 *        p1.clkreq -> p1, p1.off -> p1, p1.snooze ->p1
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: PIN_PU_PLL, PIN_PU_TX: L->H
 *           PIN_REFCLK_DIS : H->L
 *    Output: 
*/
void Power_P1CLKREQ_P1_ram(void) BANKING_CTRL {

	TCON  = 0x04; //EX0=LVL 
	reg_INT_REFCLK_DIS_CHG_ISR_LANE = 0;
	reg_INT0_REFCLK_DIS_EN_INT_EN_LANE = 1;
	PCON = 0x8a; //mcu stop 

	//wait for mcu wakeup
	TCON  = 0x05; //EX0=FALL
	reg_INT0_REFCLK_DIS_EN_INT_EN_LANE = 0;
	reg_REFCLK_DIS_FM_PM = 0; 
	reg_INT_REFCLK_DIS_CHG_ISR_LANE = 0;

	//txloz2hiz();
	if(reg_PIN_TX_IDLE_HIZ_RD_LANE) {
		reg_ANA_TX_LESS_CUR_IDLE_LANE = 1;
		short_delay(); //delay01(1);
		reg_ANA_TX_IDLE_HIZ_EN_LANE = 1;
	}	

	if( reg_PU_IVREF_FELL == 1 ) {
		if( reg_PU_BG_FELL == 1)
			PHY_STATUS = ST_P1OFF_WK;
		else PHY_STATUS = ST_P1SNOOZE_WK;

		reg_ANA_PU_SQ_LANE = 0;
		PM_CMN_REG2.BT.B2 = 0;

		if(mcuid== master_mcu) {
			//master_sync_request();

			if( reg_PU_BG_FELL == 1) //will be cleared by hardware when ANA_PU_IVREF=1
				delay01(200);

			pu_ivref_on();

			//pcie_master_sync_clean();
		} else {
		//slave_sync_wait();
			check_pu_ivref();
		}
		delay01(50);
		reg_ANA_PU_SQ_LANE=1;
		delay01(150);
	}

	while(reg_PIN_PU_PLL_RD_LANE==0 || reg_PIN_PU_TX_RD_LANE==0){
		if(reg_PIN_REFCLK_DIS_RD) {
			PHY_STATUS = ST_P1CLKREQ_WK;
			return;
		}
	}

	reg_ANA_PU_TX_LANE = 1;

	pu_pll_on_ram();

	delay01(50);
	txlane_align();

	if( PHY_STATUS == ST_P1OFF_WK ) { 
		reg_ANA_TX_IDLE_HIZ_EN_LANE = 0; //LOZ idle time
		reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
		reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
		reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
		delay01(400); //ana_tx_idle_hiz_en low must be larger than 40 us
		reg_ANA_TX_LESS_CUR_IDLE_LANE = 1;
		reg_ANA_TX_IDLE_HIZ_EN_LANE = 1;
	}

	// Don't delay if both reg_INIT_TXFOFFS and reg_INIT_TXFOFFS_RING are 0.
	if (reg_INIT_TXFOFFS_9_0_b0 || reg_INIT_TXFOFFS_9_0_b1 || reg_INIT_TXFOFFS_RING_9_0_b0 || reg_INIT_TXFOFFS_RING_9_0_b1) {
		delay01(50);
	}

	if( reg_PIN_PU_RX_RD_LANE == 0 )
		do_wake = 0;
	PHY_STATUS = ST_P1_WK;
	//txdigital_align();
	reg_PIN_PLL_READY_TX_LANE = 1;
}

#endif //SUPPORT_SHRTR_PATCH
#endif //_PCIE_USB_BUILD
