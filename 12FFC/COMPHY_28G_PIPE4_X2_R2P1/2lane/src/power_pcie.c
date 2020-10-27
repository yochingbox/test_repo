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

#ifdef _PCIE_USB_BUILD 

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

	reg_DFE_ADAPT_CONT_LANE = 0;
	reg_DFE_START_LANE = 0;
	reg_DTL_CLK_OFF_LANE = 1;
	reg_DFE_CLK_OFF_LANE = 1;
	reg_RESET_DTL_LANE = 1;
	CKCON = 0x07 ;  //MCU WAIT time the slowest
	reg_RESET_DFE_LANE = 1;
	CKCON = 0x00 ; //MCU WAIT time setting back to normal.
	
	reg_PIN_PLL_READY_RX_LANE = 0;
		
	//txloz2hiz();
	if(reg_PIN_TX_IDLE_HIZ_RD_LANE) {
		reg_ANA_TX_LESS_CUR_IDLE_LANE = 1;
		short_delay(); //delay01(1);
		reg_ANA_TX_IDLE_HIZ_EN_LANE = 1;
	}

	//pu_rx_off();	
	reg_FFE_PULSE_EN_LANE = 0;
	reg_ANA_PU_RX_LANE = 0;
	reg_ANA_PU_RX_DLY_LANE = 0;
	reg_ANA_RX_PU_DLY2_LANE = 0;
	
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
			if(mcuid==master_mcu) {
				reg_DTX_CLK_OFF = 0;	reg_DTX_CLK_OFF_RING = 0;	
				delay01(10);
				reg_RESET_DTX	= 0;	reg_RESET_DTX_RING = 0;
			}
			else while(reg_RESET_DTX_RING);
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
		//dfe_hardware_cont_stop();
		reg_DFE_ADAPT_CONT_LANE = 0;
		reg_DFE_START_LANE = 0;		
		reg_DTL_CLK_OFF_LANE= 1; 
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
		pu_pll_on();
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
void Power_P2_P1(void) BANKING_CTRL {

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
		#ifdef SUPPORT_CMD_IF
		if(PHY_MCU_REMOTE_REQ_LANE && lnx_PHY_MCU_LOCAL_ACK_LANE==0) 
			cmd_if();	
		#endif
		} while(!do_wake);

	SYNC_STATUS_LANE_EN = 1;
	
	if(reg_PIN_PU_TX_RD_LANE==1 && reg_PIN_PU_RX_RD_LANE == 1) {
		PHY_STATUS = ST_P2_P0;
		return;
	}

	reg_REFCLK_DIS_FM_PM = 0;

	reg_ANA_PU_TX_LANE = 1;

	if(reg_PU_PLL_OR && SYNC_SATUS_PLL_OR_PLL_OFF_READ) {
		pu_pll_on();
		delay01(50);
	}
	else pll_already_on = 1;

	txlane_align();
	SYNC_SATUS_P2_2_P1_ON = 0;

	if(mcuid==master_mcu) {
	reg_DTX_CLK_OFF = 0;	reg_DTX_CLK_OFF_RING = 0;	
	delay01(10);
	reg_RESET_DTX	= 0;	reg_RESET_DTX_RING = 0;
	}
	else while(reg_RESET_DTX_RING);
	
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
	while(!do_wake){
		if(reg_PIN_PU_RX_RD_LANE) break;
		if(reg_INT_TXDETRX_EN_CHG_ISR_LANE ) {
			PHY_STATUS = ST_P1_TXDETRX;
			return;	
		}
		#ifdef SUPPORT_CMD_IF
		if(PHY_MCU_REMOTE_REQ_LANE && lnx_PHY_MCU_LOCAL_ACK_LANE==0) 
			cmd_if();
		#endif	
	}
	do_wake = 0;
	
	pu_rx_on();

	txhiz2loz();
	
	reg_RXDCC_EN_DLLCLK_LANE = 1;
	reg_RXDCC_EN_DATACLK_LANE = 1;
	reg_RXDCC_EN_EOMCLK_LANE = 1;			
	load_cal_data_dll();
	
	delay01(25); 
	
	DTL_DTX_DFE_clkoff_reset_0();
	
	rx_init_done = 0;

	//if(cmx_AUTO_RX_INIT_EN == 0)
	//	PHY_STATUS = ST_PLLREADY; 
	//else	
		PHY_STATUS = ST_DTL;

	reg_PIN_PLL_READY_RX_LANE = 1;
	
}

void Power_P2_P0(void) BANKING_CTRL {
	bool pll_already_on = 0;
	reg_REFCLK_DIS_FM_PM = 0; 	

	reg_ANA_PU_TX_LANE = 1;	
	pu_rx_on();

	if( SYNC_SATUS_PLL_OR_PLL_OFF==1 ) {		
		if(mcuid== master_mcu) {
			if(slave_phy_on==0) {
				//fast startup
				#ifndef SUPPORT_LCPLL_ALWAYS_ON
				if(lc_pll_used || ring_use_250m) //LCPLL always on
				#endif
				pll_fast_cal(); 
				if(ring_pll_enabled) {
					ring_pll_fast_cal();
				}
		
				SYNC_SATUS_PLL_OR_PLL_OFF = 0;
		
			}
			else { //	slave_phy_on && master_act_on
				delay01(200); //20us
				check_master_phy_status(CHECK_MP_PLL_CLK_READY_ON);
				pll_clk_ready_1();
				if(ring_pll_enabled) {
					delay01(200); //20us
					check_master_phy_status(CHECK_MP_PLL_CLK_READY_RING_ON);
					pll_clk_ready_ring_1();
				}
			}	
		}
		check_pll_clk_ready_pcie();
	}
	else {
		pll_already_on = 1;
	}	
	
    txhiz2loz();
		
	reg_RXDCC_EN_DLLCLK_LANE = 1;
	reg_RXDCC_EN_DATACLK_LANE = 1;
	reg_RXDCC_EN_EOMCLK_LANE = 1;			
	load_cal_data_dll();
	
	txlane_align();
	SYNC_SATUS_P2_2_P1_ON = 0;
	
	DTL_DTX_DFE_clkoff_reset_0();

	if(!pll_already_on)	
		delay01(100);
	
	rx_init_done = 0;

	//if(cmx_AUTO_RX_INIT_EN == 0)
	//	PHY_STATUS = ST_PLLREADY; 
	//else	
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
void Power_P1CLKREQ_P1(void) BANKING_CTRL {

	if(cmx_BYPASS_MCU_STOP==0) {
		TCON  = 0x04; //EX0=LVL 
		reg_INT_REFCLK_DIS_CHG_ISR_CLEAR_LANE = 1;
		reg_INT_REFCLK_DIS_CHG_ISR_CLEAR_LANE = 0;
		reg_INT0_REFCLK_DIS_EN_INT_EN_LANE = 1;
		PCON = 0x8a; //mcu stop 
	
		//wait for mcu wakeup
		
		TCON  = 0x05; //EX0=FALL
	}
	else {
		reg_INT_REFCLK_DIS_CHG_ISR_CLEAR_LANE = 1;
		reg_INT_REFCLK_DIS_CHG_ISR_CLEAR_LANE = 0;
		if(mcuid == master_mcu) {
			reg_REFCLK_DIS_ACK_FORCE = 1;
			reg_REFCLK_DIS_ACK = 1;
		}
		
		while(reg_PIN_REFCLK_DIS_RD);
		
		if(mcuid == master_mcu) {
			reg_REFCLK_DIS_ACK = 0;
			reg_REFCLK_DIS_ACK_FORCE = 0;
		}
		
	}
	
	reg_INT0_REFCLK_DIS_EN_INT_EN_LANE = 0;
	reg_REFCLK_DIS_FM_PM = 0; 
	reg_INT_REFCLK_DIS_CHG_ISR_CLEAR_LANE = 1;
	reg_INT_REFCLK_DIS_CHG_ISR_CLEAR_LANE = 0;
	
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

			if( reg_PU_BG_FELL == 1) //will be cleared by hardware when ANA_PU_IVREF=1
				delay01(200);

			#ifdef _28G_X1
			if(BYPASS_POWERON_DELAY) {
				//pu_ivref up
				delay01(100); //1us
				PM_CMN_REG2.BT.B2 = 0x08;
				delay01(100); //1us
				PM_CMN_REG2.BT.B2 = 0x0c;
				delay01(100); //1us
				PM_CMN_REG2.BT.B2 = 0x0e;
				delay01(100); //1us
				PM_CMN_REG2.BT.B2 = 0x0f;						
			}
			else 
			#endif	
			pu_ivref_on();

		} else {
			check_pu_ivref();
		}
		
		#ifdef _28G_X1
		if(BYPASS_POWERON_DELAY) { //for 4G MCUCLK
			delay01(500);
		}
		else 
		#endif	
		delay01(50);
		
		reg_ANA_PU_SQ_LANE=1;
		
		#ifdef _28G_X1
		if(BYPASS_POWERON_DELAY) { //for 4G MCUCLK
			reg_MCU_DEBUG0_LANE_7_0 = 10;
			while(reg_MCU_DEBUG0_LANE_7_0-->0)
				delay01(150);
		}
		else 
		#endif	
		delay01(150);
	}

	while(reg_PIN_PU_PLL_RD_LANE==0 || reg_PIN_PU_TX_RD_LANE==0){
		if(reg_PIN_REFCLK_DIS_RD) {
			PHY_STATUS = ST_P1CLKREQ_WK;
			return;
		}
	}

	reg_ANA_PU_TX_LANE = 1;

	pu_pll_on();

	delay01(50);
	txlane_align();

	if(mcuid==master_mcu) {
		reg_DTX_CLK_OFF = 0;	reg_DTX_CLK_OFF_RING = 0;	
		delay01(10);
		reg_RESET_DTX	= 0;	reg_RESET_DTX_RING = 0;
	}
	else while(reg_RESET_DTX_RING);
	
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

	if( cmx_TX_LANE_ALIGN_OFF==0 ) {
		if(mcuid== master_mcu) {	
			pu_ivref_on();	
		} else { 
			check_pu_ivref();
		}
	}
	else {
		if(reg_ANA_PU_IVREF_DLY3==0) {			
			//pu_ivref up
			PM_CMN_REG2.BT.B2 = PM_CMN_REG2.BT.B2 | 0x08;
			delay01(10); //1us
			PM_CMN_REG2.BT.B2 = PM_CMN_REG2.BT.B2 | 0x0c;
			delay01(10); //1us
			PM_CMN_REG2.BT.B2 = PM_CMN_REG2.BT.B2 | 0x0e;
			delay01(10); //1us
			PM_CMN_REG2.BT.B2 = PM_CMN_REG2.BT.B2 | 0x0f;				
		}			
	}		

	delay01(200);
	reg_ANA_PU_TX_LANE = 1;
	short_delay();//delay01(1);
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
	
	if(reg_PIN_PU_IVREF_RD==0) {
		PM_CMN_REG2.BT.B2 = 0; //pu_ivref**=0
	}
	
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
	
	rx_init_done = 0;

	//if(cmx_AUTO_RX_INIT_EN == 0)
	//	PHY_STATUS = ST_PLLREADY; 
	//else	
		PHY_STATUS = ST_DTL;
	
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

	//virtual tdr
	if(cmx_VIRTUAL_TDR_SIM_EN) {
		if(reg_ANA_DPHY_SQ_DETECTED_LANE)  //lane reduce test by sq_detect
			reg_TRX_VIRTUAL_CTRL_LANE = 1; //3fc[0]
		else	
			reg_TRX_VIRTUAL_CTRL_LANE = 0;
	}

	short_delay();//delay01(1);
	txloz2hiz_quick();
	
	reg_ANA_TXDETRX_EN_LANE = 1;

	reg_ANA_TXDETRX_START_LANE = 1;
	
	while(!reg_TXDETRX_SAMPLE_DONE_LANE);

	short_delay();//delay01(1);
	reg_ANA_TXDETRX_START_LANE = 0;
	short_delay();//delay01(1);
	reg_ANA_TXDETRX_EN_LANE = 0;
	
	txloz2hiz_quick();

	reg_PIN_TXDETRX_VALID_LANE = 1;
	
	while(reg_PIN_TXDETRX_EN_RD_LANE);
	
	reg_PIN_TXDETRX_VALID_LANE = 0;
	
	if(cmx_LOAD_CTLE_SPDTBL_TXDETRX_EN)
		TRAIN_CONTROL_9.BT.B1 &= 0x03; //clear rxtrain pass

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
	
	short_delay();//delay01(1);
	txloz2hiz_quick();
	
	reg_ANA_TXDETRX_EN_LANE = 1;
	short_delay();//delay01(1);
	reg_ANA_TXDETRX_START_LANE = 1;
	
	while(!reg_TXDETRX_SAMPLE_DONE_LANE);

	short_delay();//delay01(1);
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
	short_delay();//delay01(1);
	reg_ANA_TX_IDLE_HIZ_EN_LANE = 1;
	short_delay();//delay01(1);
	reg_ANA_PU_TX_LANE = 0;
	 
	PHY_STATUS = ST_P2_WK; 
	
	do_wake = 0;
	
}

void reset_pwr_reg(void) BANKING_CTRL {
	reg_PIN_PLL_READY_RX_LANE = 0;
	reg_PIN_PLL_READY_TX_LANE =	0;
	
	short_delay();
	short_delay();

	if(mcuid==master_mcu) {
		while(1) {
			if(mcuid==MCU_LANE0 && SYNC_STATUS_LANE1_EN_READ==0) break;
			else if( SYNC_STATUS_LANE0_EN_READ==0) break;
		}	
	}
	else {
		SYNC_STATUS_LANE_EN = 0;
	}
	
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
	//reg_REG_DTL_LOOP_FREEZE_LANE = 1; //To fix link enable/disable test failure
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
	
	reg_LANE_ALIGN_READY_OUT = 0; 
	reg_LANE_ALIGN_READY_OUT_FORCE = 0;
	reg_TXCLK_SYNC_START_OUT = 0;		
	
}

//--	   


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

#endif //_PCIE_USB_BUILD
