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
#pragma codeseg BANK1
#endif

#ifdef _PCIE_USB 

void txloz2hiz(void) BANKING_CTRL {
	if(reg_PIN_TX_IDLE_HIZ_RD_LANE) {
		reg_ANA_TX_LESS_CUR_IDLE_LANE = 1;
		delay01(1);
		reg_ANA_TX_IDLE_HIZ_EN_LANE = 1;
	}
}

void txhiz2loz(void) BANKING_CTRL {
	if(!reg_PIN_TX_IDLE_HIZ_RD_LANE) {
		reg_ANA_TX_IDLE_HIZ_EN_LANE = 0;
		delay01(1);
		reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
	}
}

void txloz2hiz_quick(void) BANKING_CTRL {
	reg_ANA_TX_IDLE_HIZ_EN_LANE = 0;
	reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
	delay01(200);
	reg_ANA_TX_LESS_CUR_IDLE_LANE = 1;
	reg_ANA_TX_IDLE_HIZ_EN_LANE = 1;
}

void txdetrx(void) BANKING_CTRL {
	delay01(1);
	reg_ANA_TX_LESS_CUR_IDLE_LANE = 1;
	delay01(1);
	reg_ANA_TX_IDLE_HIZ_EN_LANE = 1;	
	reg_ANA_TXDETRX_START_LANE = 1;
	
	while(!reg_TXDETRX_SAMPLE_DONE_LANE);
	delay01(1);

	reg_ANA_TXDETRX_START_LANE = 0;
	delay01(1);	
	reg_ANA_TX_IDLE_HIZ_EN_LANE = 0;
	delay01(1);
	reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
	reg_ANA_TXDETRX_EN_LANE = 0;
}


/**
 * \module P0s_P1
 * 
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: PIN_RX: H->L
 *    Output: 
*/
void Power_P0s_P1( void ) BANKING_CTRL {

	//EA = 0;
	//clear_normal_mode_cal_en();
	//EA = 1;

	//#ifndef _28G_X2
	//PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0; //reg_INT_POWER_STATE_VALID_RISE_ISR_LANE = 0;
	//#else
	//reg_INT_POWER_STATE_VALID_RISE_ISR_CLEAR_LANE = 1;
	//reg_INT_POWER_STATE_VALID_RISE_ISR_CLEAR_LANE = 0;
	//#endif
	//PM_CTRL_INTERRUPT_REG1_LANE.BT.B2 = 0;
	
//	delay01(10);
	reg_DTL_CLK_OFF_LANE = 1;
	reg_DFE_CLK_OFF_LANE = 1;
	reg_RESET_DTL_LANE = 1;
	CKCON = 0x07 ;  //MCU WAIT time the slowest
	reg_RESET_DFE_LANE = 1;
	CKCON = 0x00 ; //MCU WAIT time setting back to normal.
	
	reg_PIN_PLL_READY_RX_LANE = 0;
		
	txloz2hiz();

	pu_rx_off();	

	if( reg_PIN_PU_PLL_RD_LANE == 0) {
		PHY_STATUS = ST_P2;
		reg_PIN_PLL_READY_TX_LANE = 0;
		SYNC_STATUS_LANE_EN = 0;
	}
	else {
		PHY_STATUS = ST_P1_WK;
		SYNC_STATUS_LANE_EN = 1;

		if(reg_PIN_PU_RX_RD_LANE==1) { //corner case
			do_wake = 1;
		}
		else if( SYNC_SATUS_P2_2_P1_ON ) {
			txlane_align();
			SYNC_SATUS_P2_2_P1_ON = 0;
		}
		reg_PIN_PLL_READY_TX_LANE = 1;
			
	}
}

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
void Power_P1_P2( void ) BANKING_CTRL {

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
	else if( reg_PU_PLL_OR && SYNC_SATUS_PLL_OR_PLL_OFF_READ ) {
		pu_pll_on();
	}
	
	reg_ANA_PU_TX_LANE = 0;	
	
	PHY_STATUS = ST_P2_WK;
	
	if(reg_PIN_REFCLK_DIS_RD) {
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

//void Power_P1_P1CLKREQ(void) {
//	Power_P1_P2();
//	PHY_STATUS = ST_P1CLKREQ_WK;
//}

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
void Power_P2_P1(void) BANKING_CTRL {

	do {
		if(reg_PIN_REFCLK_DIS_RD) {
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
		if(reg_PIN_PU_PLL_RD_LANE) 	do_wake = 1;

	} while(!do_wake); 

	SYNC_STATUS_LANE_EN = 1; 
	
	if(reg_PIN_PU_TX_RD_LANE==1 && reg_PIN_PU_RX_RD_LANE == 1) {
		PHY_STATUS = ST_P2_P0;
		return;
	}

	reg_REFCLK_DIS_FM_PM = 0; 	
	
    reg_ANA_PU_TX_LANE  = 1;
	
	if(reg_PU_PLL_OR && SYNC_SATUS_PLL_OR_PLL_OFF_READ) { 	
		pu_pll_on();		
	}
	
	delay01(50);
	txlane_align();
	SYNC_SATUS_P2_2_P1_ON = 0;

	// Don't delay if both reg_INIT_TXFOFFS and reg_INIT_TXFOFFS_RING are 0.
	if (reg_INIT_TXFOFFS_9_0_b0 || reg_INIT_TXFOFFS_9_0_b1 || reg_INIT_TXFOFFS_RING_9_0_b0 || reg_INIT_TXFOFFS_RING_9_0_b1) {
		delay01(50);
	}
	//txdigital_align();
	reg_PIN_PLL_READY_TX_LANE = 1;

	if( reg_PIN_PU_RX_RD_LANE == 0 )
		do_wake = 0;
	PHY_STATUS = ST_P1_WK; 
}

/**
 * \module P1_P0
 * 
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: PIN_PU_PLL=H, PIN_PU_TX=H, PIN_PU_RX: L->H
 *    Output: 
*/
void Power_P1_P0(void) BANKING_CTRL {
	if(reg_INT_TXDETRX_EN_CHG_ISR_LANE ) {
		PHY_STATUS = ST_P1_TXDETRX;
		return;	
	}
	else while(!do_wake); 

	pu_rx_on();

	txhiz2loz();
	
	load_cal_data_dll();
	
	delay01(25); 
	
	DTL_DTX_DFE_clkoff_reset_0();
/*	reg_DTL_CLK_OFF_LANE= 0; 
	reg_DFE_CLK_OFF_LANE = 0; 
	
	delay01(10);
	reg_RESET_DTL_LANE = 0;
	reg_RESET_DFE_LANE = 0;
*/	
	reg_PIN_PLL_READY_RX_LANE = 1;

 #ifdef SUPPORT_PCIE_TXFFE_WA_FORCE_CTRL
	txffe_force_ctrl();
  #endif

    if(cmx_AUTO_RX_INIT_EN == 0)
		PHY_STATUS = ST_PLLREADY; 
	else	
		PHY_STATUS = ST_DTL;

}

void Power_P2_P0(void) BANKING_CTRL {
	reg_REFCLK_DIS_FM_PM = 0;

	reg_ANA_PU_TX_LANE = 1;
	pu_rx_on();

	if(mcuid== master_mcu) {
		//fast startup
		#ifndef SUPPORT_LCPLL_ALWAYS_ON
		// if(lc_pll_used || ring_use_250m) //LCPLL always on
		if ((lc_pll_used || ring_use_250m) && (reg_TX_CK_SEL_LANE == 0))
		#endif
		pll_fast_cal();
		// if(ring_pll_enabled) {
		if (reg_TX_CK_SEL_LANE) {
			ring_pll_fast_cal();
		}
		// Fast startup only bringup one PLL
		// Set the flag to let speed change know fast startup ran
		invalidate_pll_rate = 1;

		SYNC_SATUS_PLL_OR_PLL_OFF = 0;

	}
	else check_pll_clk_ready_pcie();

	txhiz2loz();

	load_cal_data_dll();

	txlane_align();
	SYNC_SATUS_P2_2_P1_ON = 0;

	DTL_DTX_DFE_clkoff_reset_0();

	delay01(100);

	reg_PIN_PLL_READY_TX_LANE = 1;
	reg_PIN_PLL_READY_RX_LANE = 1;

#ifdef SUPPORT_PCIE_TXFFE_WA_FORCE_CTRL
	txffe_force_ctrl();
#endif

	if(cmx_AUTO_RX_INIT_EN == 0)
		PHY_STATUS = ST_PLLREADY;
	else
		PHY_STATUS = ST_DTL;

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
void Power_P1CLKREQ_P1(void) BANKING_CTRL {
	
	TCON  = 0x04; //EX0=LVL 
	reg_INT_REFCLK_DIS_CHG_ISR_LANE = 0;
	reg_INT0_REFCLK_DIS_EN_INT_EN_LANE = 1;
	PCON = 0x8a; //mcu stop 
	
	//wait for mcu wakeup
	TCON  = 0x05; //EX0=FALL	
	reg_INT0_REFCLK_DIS_EN_INT_EN_LANE = 0;
	reg_REFCLK_DIS_FM_PM = 0; 
	reg_INT_REFCLK_DIS_CHG_ISR_LANE = 0;
	
	txloz2hiz();
	
	if( reg_PU_IVREF_FELL == 1 ) {
		if( reg_PU_BG_FELL == 1)  
			PHY_STATUS = ST_P1OFF_WK;
		else PHY_STATUS = ST_P1SNOOZE_WK;	

		reg_ANA_PU_SQ_LANE = 0; 
		PM_CMN_REG2.BT.B2 = 0;
		
		if(mcuid== master_mcu) {
			//master_sync_request();		
			//PM_CMN_REG2.BT.B2 = 0;
			/*
			reg_ANA_PU_IVREF_DLY3 = 0;
			reg_ANA_PU_IVREF_DLY2 = 0;
			reg_ANA_PU_IVREF_DLY1 = 0;
			reg_ANA_PU_IVREF = 0;			
			*/

			if( reg_PU_BG_FELL == 1) //will be cleared by hardware when ANA_PU_IVREF=1
				delay01(200);
			
			pu_ivref_on();
			
			//pcie_master_sync_clean();		
		} else { 
		//slave_sync_wait(); 
			check_pu_ivref();
		}
		delay01(20);
	}
	
	while(reg_PIN_PU_PLL_RD_LANE==0 || reg_PIN_PU_TX_RD_LANE==0){
		if(reg_PIN_REFCLK_DIS_RD) {
			PHY_STATUS = ST_P1CLKREQ_WK;
			reg_ANA_PU_SQ_LANE=1; // To make it same as before reducing delay from 20us to 2us
			return;
		}	
	}
	
	reg_ANA_PU_TX_LANE = 1;
	pu_pll_on();
	reg_ANA_PU_SQ_LANE=1;
	
	delay01(50);
	txlane_align();

	if( PHY_STATUS == ST_P1OFF_WK ) { 
		reg_ANA_TX_IDLE_HIZ_EN_LANE = 0; //LOZ idle time		
		reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
		delay01(400);
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

/**
 * \module Poff_TXDETRX
 * 
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: PIN_TXDECTRX_EN: L->H->L
 *    Output: 
*/
void P0Off_TXDETRX(void) BANKING_CTRL {
	PHY_STATUS = ST_POFF_TXDETRX;

	delay01(200);

	if(mcuid== master_mcu) {	
		//master_sync_request();				
		pu_ivref_on();	
		//pcie_master_sync_clean();		
	} else { 
	//slave_sync_wait(); 
		check_pu_ivref();
	}
	
	delay01(200);
	reg_ANA_PU_TX_LANE = 1;
	delay01(1);
	reg_ANA_TXDETRX_EN_LANE = 1;
	delay01(200);
	
	txdetrx();
	/*
	reg_ANA_TX_LESS_CUR_IDLE_LANE = 1;
	delay01(1);
	reg_ANA_TX_IDLE_HIZ_EN_LANE = 1;
	reg_ANA_TXDETRX_START_LANE = 1;
	
	while(!reg_TXDETRX_SAMPLE_DONE_LANE);
	delay01(1);
	
	reg_ANA_TXDETRX_START_LANE = 0;
	delay01(1);
	reg_ANA_TX_IDLE_HIZ_EN_LANE = 0;
	delay01(1);
	reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
	//reg_PIN_TXDETRX_VALID_LANE = 1; //??
	reg_ANA_TXDETRX_EN_LANE = 0;
	*/	
	reg_PIN_TXDETRX_VALID_LANE = 1;
	
	reg_ANA_PU_TX_LANE = 0;
	
	//if(mcuid== master_mcu) {
	//	master_sync_request();		
		PM_CMN_REG2.BT.B2 = 0; //pu_ivref**=0
	//	pcie_master_sync_clean();		
	//} else { slave_sync_wait(); }

	while(reg_PIN_TXDETRX_EN_RD_LANE);

	reg_PIN_TXDETRX_VALID_LANE = 0;

}

/**
 * \module P0_TXDETRX
 * 
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: PIN_TXDECTRX_EN: L->H
 *    Output: 
*/
void Power_P0_TXDETRX(void) BANKING_CTRL {
	
	reg_ANA_TXDETRX_EN_LANE = 1;
	
	txdetrx();
	/*
	delay01(1);
	reg_ANA_TX_LESS_CUR_IDLE_LANE = 1;
	delay01(1);
	reg_ANA_TX_IDLE_HIZ_EN_LANE = 1;	
	reg_ANA_TXDETRX_START_LANE = 1;
	
	while(!reg_TXDETRX_SAMPLE_DONE_LANE);
	delay01(1);

	reg_ANA_TXDETRX_START_LANE = 0;
	delay01(1);	
	reg_ANA_TX_IDLE_HIZ_EN_LANE = 0;
	delay01(1);
	reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
	reg_ANA_TXDETRX_EN_LANE = 0;
	*/
	delay01(200);
	reg_PIN_TXDETRX_VALID_LANE = 1;	
	
	while(reg_PIN_TXDETRX_EN_RD_LANE);

	reg_PIN_TXDETRX_VALID_LANE = 0;
	
	PHY_STATUS = ST_PLLREADY ; 
	
}

/**
 * \module P1_TXDETRX
 * 
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: PIN_TXDECTRX_EN: L->H
 *    Output: 
*/
void Power_P1_TXDETRX(void) BANKING_CTRL {

	reg_INT_TXDETRX_EN_CHG_ISR_LANE = 0;
	delay01(1);
	txloz2hiz_quick();
	
	reg_ANA_TXDETRX_EN_LANE = 1;

	reg_ANA_TXDETRX_START_LANE = 1;
	
	while(!reg_TXDETRX_SAMPLE_DONE_LANE);

	delay01(1);
	reg_ANA_TXDETRX_START_LANE = 0;
	delay01(1);
	reg_ANA_TXDETRX_EN_LANE = 0;
	
	txloz2hiz_quick();

	reg_PIN_TXDETRX_VALID_LANE = 1;
	
	while(reg_PIN_TXDETRX_EN_RD_LANE);
	
	reg_PIN_TXDETRX_VALID_LANE = 0;
	
	//do_wake = 0;
	PHY_STATUS = ST_P1_WK ; 
	
}
/**
 * \module P2_TXDETRX
 * 
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: PIN_TXDECTRX_EN: L->H
 *    Output: 
*/
void Power_P2_TXDETRX(void) BANKING_CTRL {
	reg_INT_TXDETRX_EN_CHG_ISR_LANE = 0;
	reg_ANA_PU_TX_LANE = 1;
	
	delay01(1);
	txloz2hiz_quick();
	
	reg_ANA_TXDETRX_EN_LANE = 1;
	delay01(1);
	reg_ANA_TXDETRX_START_LANE = 1;
	
	while(!reg_TXDETRX_SAMPLE_DONE_LANE);

	delay01(1);
	reg_ANA_TXDETRX_START_LANE = 0;
	reg_ANA_TXDETRX_EN_LANE = 0;
	
	txloz2hiz_quick();

	reg_ANA_PU_TX_LANE = 0;

	reg_PIN_TXDETRX_VALID_LANE = 1;
	
	while(reg_PIN_TXDETRX_EN_RD_LANE);
	
	reg_PIN_TXDETRX_VALID_LANE = 0;
	
	//do_wake = 0;
	PHY_STATUS = ST_P2_WK ; 
	
}

/**
 * \module P2_BEACON
 * 
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: PIN_TX_ACJTAG_EN: L->H
 *    Output: 
*/
void Power_P2_BEACON(void) BANKING_CTRL {
	/* HR: expect delay>1uS between PIN_PU_PLL=0 to PIN_TX_ACJTAG_EN=1.
		if( reg_ANA_PU_TX_LANE == 1 ) { //conner case	
		reg_DTX_CLK_OFF = 1; reg_DTX_CLK_OFF_RING = 1;
	
		if(mcuid== master_mcu) { 
			master_sync_request();		
			
			reg_RESET_DTX	= 1; reg_RESET_DTX_RING = 1;
			reg_ANA_PLL_CLK_READY = 0;
			reg_ANA_PU_PLL2 = 0;
			reg_ANA_PU_PLL_RING = 0;
			reg_ANA_PLL_CLK_READY_RING = 0;
			reg_ANA_PLL_CLK_READY_PRE1 =0;	
			reg_ANA_PLL_CLK_READY_PRE0 = 0;	
	
			delay01(10);
			reg_RESET_ANA = 1;	reg_RESET_ANA_RING = 1;	
			reg_ANA_PU_PLL_DLY = 0;
			reg_ANA_PU_PLL = 0;
			pcie_master_sync_clean();		
		} else { slave_sync_wait(); }

		//reg_ANA_PU_TX_LANE = 0;	
	}*/
	
	reg_ANA_PU_TX_LANE = 1;
	delay01(4);
	reg_ANA_TX_IDLE_HIZ_EN_LANE = 0;
	delay01(5);
    reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
	
	reg_ANA_BEACON_EN_LANE = 1;
	
	while(!do_wake);
	
	reg_ANA_TX_LESS_CUR_IDLE_LANE = 1;
	delay01(1);
	reg_ANA_TX_IDLE_HIZ_EN_LANE = 1;
	delay01(1);
	reg_ANA_PU_TX_LANE = 0;
	 
	PHY_STATUS = ST_P2_WK; 
	
	do_wake = 0;
	
}

#endif //_PCIE_USB
