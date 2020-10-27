/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file power_pcie.c
* \purpose power control for PCIe
* \History
*	04/15/2019 Heejeong Ryu		Initial & clean up
*/

#include "common.h"
#include "pll_sharing.h"
#include "pll_state.h"

#ifdef USE_BANKING
#pragma codeseg BANK1
#endif

#if defined _PCIE_BUILD || defined _USB_BUILD

void Pcie_Power_Management(void) BANKING_CTRL {

		if(reg_INT_POWER_STATE_VALID_CHG_RISING_ISR_LANE) {		
			reg_INT_POWER_STATE_VALID_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_INT_POWER_STATE_VALID_CHG_RISING_ISR_CLEAR_LANE = 0;
		
			if( reg_PIN_PU_PLL_RD_LANE==0 || reg_PIN_PU_TX_RD_LANE==0 )  
				Power_P2(); 	
			else if(reg_PIN_PU_RX_RD_LANE==0) {
				if(reg_ANA_PU_TX_LANE==0) 
					Power_P2_P1();
				else 
					Power_P0s_P1(); 			
			}	
			if(reg_PIN_PU_RX_RD_LANE) {
				Power_P1_P0();
			}	
		}	
		
		if(reg_INT_TXDETRX_EN_CHG_RISING_ISR_LANE ) {
			reg_INT_TXDETRX_EN_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_INT_TXDETRX_EN_CHG_RISING_ISR_CLEAR_LANE = 0;
			
			if( reg_PIN_TXDETRX_EN_RD_LANE == 1) {			
				if( reg_PIN_PU_PLL_RD_LANE==0 || reg_PIN_PU_TX_RD_LANE==0 ) 
					Power_P2_TXDETRX();
				else if(reg_PIN_PU_RX_RD_LANE==0) 
					Power_P1_TXDETRX();
				else {	
					Power_P0_TXDETRX();
				}	
			}			
		}						

		if(reg_INT_TXDETRX_EN_CHG_FALLING_ISR_LANE ) {
			reg_INT_TXDETRX_EN_CHG_FALLING_ISR_CLEAR_LANE = 1;
			reg_INT_TXDETRX_EN_CHG_FALLING_ISR_CLEAR_LANE = 0;
			reg_PIN_TXDETRX_VALID_LANE = 0;								
		}
		
		if(reg_INT_REFCLK_DIS_CHG_RISING_ISR_LANE) {
			reg_INT_REFCLK_DIS_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_INT_REFCLK_DIS_CHG_RISING_ISR_CLEAR_LANE = 0;
			Power_P1_P1CLKREQ();	
		}
	
		if( reg_INT_BEACON_TX_EN_CHG_RISING_ISR_LANE ) {
			reg_INT_BEACON_TX_EN_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_INT_BEACON_TX_EN_CHG_RISING_ISR_CLEAR_LANE = 0;
			
			if( reg_PIN_TX_ACJTAG_EN_RD_LANE==1 && reg_PIN_PU_PLL_RD_LANE==0) { 
				Power_P2_BEACON();
			}	
		}
		
		if( reg_INT_REFCLK_DIS_CHG_FALLING_ISR_LANE ) {
			Power_P1_P1CLKREQ_Wakeup();
		}		

		
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

reg_MCU_DEBUG0_LANE_7_0 = 0x33;

	PHY_STATUS = ST_P1;

	turn_off_rx_cont_cal();
	
	//PM_CTRL_INTERRUPT_REG1_LANE.BT.B2 = 0;
	//dfe_hardware_cont_stop();
	if(reg_DFE_ADAPT_CONT_LANE == 1) 
	{
		reg_DFE_ADAPT_CONT_LANE = 0;
//	//	while(!reg_DFE_DONE_LANE);
		reg_DFE_START_LANE = 0;
	}
	
	if(reg_PIN_PU_RX_RD_LANE==0 && reg_ANA_PU_RX_LANE) {
		//if((cmx_BYPASS_PU_RX_P1==0 && reg_PIN_PU_RX_RD_LANE==0) || reg_PIN_PU_PLL_RD_LANE==0) 
		{
		//	delay(10);
			//reg_DTL_CLK_OFF_LANE = 1;
			//reg_DTL_FLOOP_FREEZE_LANE = 1;			
			////reg_DTL_FLOOP_EN_LANE  = 0;
			////reg_DFE_CLK_OFF_LANE = 1;
			////reg_RESET_DTL_SYNC_LANE = 1; 
			////reg_RESET_DTL_LANE = 1;
			////CKCON = 0x07 ;  //MCU WAIT time the slowest
			////reg_RESET_DFE_LANE = 1;
			////CKCON = 0x00 ; //MCU WAIT time setting back to normal.
		}	
		drv_rx_off_dig_prot_en();
		
		rx_init_done = 0;	
	
		//if(/*cmx_BYPASS_PU_RX_P1==0 && */reg_PIN_PU_PLL_RD_LANE==0) {
		drv_rx_off_seq();	
		//}	

		drv_tx_loz2hiz();
	}
	
	if( reg_PIN_PU_PLL_RD_LANE == 0) {
		reg_MCU_DEBUG0_LANE_7_0 = 0x38;
		reg_INT_POWER_STATE_VALID_CHG_RISING_ISR_CLEAR_LANE = 1;
		reg_INT_POWER_STATE_VALID_CHG_RISING_ISR_CLEAR_LANE = 0;	
		Power_P2();
		//return;
		//SYNC_STATUS_LANE_EN = 0;
	}
	//else 
	//{
		//PHY_STATUS = ST_P1_WK;
		//SYNC_STATUS_LANE_EN = 1;

		//TODO
		//if(reg_PIN_PU_RX_RD_LANE==1) { //corner case
		//	//do_wake = 1;
		//	Power_P1_P0();
		//}
		//else if( SYNC_SATUS_P2_2_P1_ON ) {
		//	//txlane_align(); //moved to hardware
		//	SYNC_SATUS_P2_2_P1_ON = 0;
		//	if(mcuid==master_mcu) {
		//		reg_DTX_CLK_OFF = 0;
		//		delay(10);
		//		reg_RESET_DTX	= 0;
		//	}
		//	else while(reg_RESET_DTX);
		//}
		//else if(cmx_PLL_CONT_CAL_EN_L1) {
		//	P1_cont_cal = 1;
		//	PHY_STATUS = ST_NORMAL;								
		//}	
			
		//reg_PIN_PLL_READY_TX_LANE = 1;
			
	//}
	
reg_MCU_DEBUG0_LANE_7_0 = 0x39;
	
}

/**
 * \module P2
 * 
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: PIN_PU_PLL, PIN_PU_TX: H->L
 *    Output: 
*/
void Power_P2( void ) BANKING_CTRL {

	PHY_STATUS = ST_P2;

	turn_off_tx_cont_cal();
	turn_off_rx_cont_cal();
	
	if(reg_ANA_PU_RX_LANE) {
        reg_MCU_DEBUG0_LANE_7_0 = 0x81;
		//TODO
		//dfe_hardware_cont_stop();
		//reg_DFE_ADAPT_CONT_LANE = 0;
		//reg_DFE_START_LANE = 0;
		
		drv_rx_off_dig_prot_en();		
		//TODO save_cont_cal_rx();
		drv_rx_off_seq();

		drv_tx_loz2hiz();
	}

	
	drv_tx_off_dig_prot_en();	
	//TODO save_cont_cal_tx();
	drv_tx_off_seq(); 
	
    if(pll_sharing__get_pu_pll_or(mcuid) == false) {
        reg_MCU_DEBUG0_LANE_7_0 = 0x82;
        //TODO: forward to master MCU to handle
		tx_pll_dig_off();
		if(pll_sel != TS_ON) rx_pll_dig_off();
		tx_pll_ana_off();
		if(pll_sel != TS_ON) rx_pll_ana_off();
		SYNC_SATUS_PLL_OR_OFF = 1;		
	}
	//else if( reg_PU_PLL_OR==1/* && SYNC_SATUS_PLL_OR_PLL_OFF_READ */) { //TODO
	//	pu_pll_ts_on();
	//	drv_pll_ts_on_seq();
	//	ts_pll_fast_cal();
	//	drv_pll_ts_on_dig_prot_dis();
	//	SYNC_SATUS_PLL_OR_OFF = 0;
	//}
	
	
	//PHY_STATUS = ST_P2_WK;	
	//if(reg_PIN_REFCLK_DIS_RD && reg_PU_PLL_OR==0) {
	//	if(reg_P2_STATE_LANE == 1) {
	//		//reg_REFCLK_DIS_FM_PM_LANE = 1;
	//	}
	//	else {
	//		PHY_STATUS = ST_P1CLKREQ_WK;
	//		//do_wake = 0;
	//	}
	//}
	//else if(reg_INT_TXDETRX_EN_CHG_RISING_ISR_LANE ) {
	//	PHY_STATUS = ST_P2_TXDETRX;
	//}
	
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

	PHY_STATUS = ST_P2_WK;

	//bool pll_already_on = 0;
    //
	do {
		if(reg_PIN_REFCLK_DIS_RD_LANE  && reg_PU_PLL_OR==0) {
			if(reg_P2_STATE_LANE == 1) {
				reg_REFCLK_DIS_FM_PM_LANE = 1;
			}
			else {
				//PHY_STATUS = ST_P1CLKREQ_WK;
				//do_wake = 0;
				return;
			}
		}
		if(reg_INT_TXDETRX_EN_CHG_RISING_ISR_LANE ) {
			//PHY_STATUS = ST_P2_TXDETRX;
			return;
		}
		if( reg_PIN_TX_ACJTAG_EN_RD_LANE ) { 
			//PHY_STATUS = ST_P2_BEACON;
			return;
		}
		if (reg_PIN_PU_PLL_RD_LANE )
			break; // handles the case that PIN_PU_PLL went high, but the interrupt is cleared by mcu_reset call

		if(reg_TX_SFT_RST_CHG_RISING_ISR_LANE) return;
	
	} while(1);
	//
	//reg_INT_POWER_STATE_VALID_CHG_RISING_ISR_CLEAR_LANE = 1;
	//reg_INT_POWER_STATE_VALID_CHG_RISING_ISR_CLEAR_LANE = 0;
		

	//SYNC_STATUS_LANE_EN = 1;
	
	//if(reg_PIN_PU_TX_RD_LANE==1 && reg_PIN_PU_RX_RD_LANE == 1) {
	//	PHY_STATUS = ST_P2_P0;
	//	return;
	//}

	reg_MCU_DEBUG0_LANE_7_0 = 0x15;


	//if(reg_PU_PLL_OR ){//&& SYNC_SATUS_PLL_OR_PLL_OFF_READ){
		reg_REFCLK_DIS_FM_PM_LANE = 0;
        pll_request_pll_access((uint8_t)PLL_SEQUENCE__Power_P2_P1);
        pll_drv_pll_power_p2_to_p1();
        pll_free_pll();
	//}
	//else pll_already_on = 1;

	//SYNC_SATUS_P2_2_P1_ON = 0;
	drv_tx_on_seq();
	//TODO load_tx_cal(); 
	drv_tx_on_dig_prot_dis();
	
	turn_on_tx_cont_cal();
	
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
	
	reg_MCU_DEBUG0_LANE_7_0 = 0x23;
	PHY_STATUS = ST_P1_WK;
	
	//while(!do_wake){
	//	if(reg_PIN_PU_RX_RD_LANE) do_wake = 1;
	//	if(reg_INT_TXDETRX_EN_CHG_RISING_ISR_LANE ) {
	//		PHY_STATUS = ST_P1_TXDETRX;
	//		return;	
	//	}
	//}
	//do_wake = 0;
	if(reg_ANA_PU_TX_LANE==0) {
	    reg_MCU_DEBUG0_LANE_7_0 = 0x71;
		if(pll_sharing__get_pu_pll_or(mcuid)){//&& SYNC_SATUS_PLL_OR_PLL_OFF_READ){
	        reg_MCU_DEBUG0_LANE_7_0 = 0x72;
            //TODO: forward to master MCU
			tx_pll_ana_on();
			if(pll_sel != TS_ON) rx_pll_ana_on(); 
			tx_pll_fast_cal_sel();
			if(pll_sel != TS_ON) rx_pll_fast_cal_sel();
			SYNC_SATUS_PLL_OR_OFF = 0;
			delay(50);
			tx_pll_dig_on(); //pu_pll_ts_on();
		}
		//else pll_already_on = 1;
	
		//SYNC_SATUS_P2_2_P1_ON = 0;
		drv_tx_on_seq();
		//TODO load_tx_cal(); 
		drv_tx_on_dig_prot_dis();
	}	
	
	drv_tx_hiz2loz();

	drv_rx_on_seq();
	//TODO load_rx_cal();

	turn_on_tx_cont_cal();
	turn_on_rx_cont_cal();
	
	reg_MCU_DEBUG0_LANE_7_0 = 0x73;
	drv_rx_on_dig_prot_dis();	
    reg_MCU_DEBUG0_LANE_7_0 = 0x79;
		
	//TODO	
	//reg_RXDCC_EN_DLLCLK_LANE = 1;
	//reg_RXDCC_EN_DATACLK_LANE = 1;
	//reg_RXDCC_EN_EOMCLK_LANE = 1;			
	//if(cmx_BYPASS_PU_RX_P1==0) load_cal_data_dll();
	
	rx_init_done = 0;

		

	//if(cmx_AUTO_RX_INIT_EN == 0)
	//	PHY_STATUS = ST_PLLREADY; 
	//else	
	//	PHY_STATUS = ST_DTL;

}

//void Power_P2_P0(void) BANKING_CTRL {
//	bool pll_already_on = 0;
	//reg_REFCLK_DIS_FM_PM_LANE = 0; 	

//	reg_ANA_PU_TX_LANE = 1;	
//	pu_rx_on();

	//if( SYNC_SATUS_PLL_OR_PLL_OFF==1 ) 
	//{
	//	if(slave_phy_on==0 && mcuid== master_mcu) {
	//		//fast startup
	//		pll_fast_cal(); 
	//		//SYNC_SATUS_PLL_OR_PLL_OFF = 0;
	//
	//	}
    //
	//	if(slave_phy_on) {
	//		check_master_phy_status(CHECK_MP_PLL_CLK_READY_ON);
	//		pll_clk_ready_1();
	//		if(ring_pll_enabled) {
	//			check_master_phy_status(CHECK_MP_PLL_CLK_READY_RING_ON);
	//			pll_clk_ready_ring_1();
	//		}
	//	}	
	//	
	//	check_pll_clk_ready_pcie();
	//}
	//else 
//	{
//		pll_already_on = 1;
//	}	
	
    //txhiz2loz();
		
	//TODO	
	//reg_RXDCC_EN_DLLCLK_LANE = 1;
	//reg_RXDCC_EN_DATACLK_LANE = 1;
	//reg_RXDCC_EN_EOMCLK_LANE = 1;			
	//load_cal_data_dll();
	
	//txlane_align();
	//SYNC_SATUS_P2_2_P1_ON = 0;
	
	//DTL_DTX_DFE_clkoff_reset_0();

//	if(!pll_already_on)	
//		delay(100);
	
//	rx_init_done = 0;

	//if(cmx_AUTO_RX_INIT_EN == 0)
	//	PHY_STATUS = ST_PLLREADY; 
	//else	
//		PHY_STATUS = ST_DTL;

//	reg_PIN_PLL_READY_TX_LANE = 1;
//	reg_PIN_PLL_READY_RX_LANE = 1;
//}

/**
 * \module P1_P1CLKREQ
 *        p1 -> p1.clkreq, p1 -> p1.off, p1 ->p1.snooze
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: PIN_PU_PLL, PIN_PU_TX: H->L
 *           PIN_REFCLK_DIS : L->H
 *    Output: 
*/
void Power_P1_P1CLKREQ(void) BANKING_CTRL {
	
	reg_MCU_DEBUG0_LANE_7_0 = 0x13;
	
	if(reg_PIN_PLL_READY_TX_LANE){
		Power_P2();
	}	
	
	if( !reg_PIN_REFCLK_DIS_RD_LANE ) return;

	PHY_STATUS = ST_P1CLKREQ_WK;

	if( reg_P2_STATE_LANE ) {
		reg_REFCLK_DIS_FM_PM_LANE = 1;
	}	
	else {
		reg_REFCLK_DIS_ACK_FORCE_LANE = 1;
		reg_REFCLK_DIS_ACK_LANE = 1;
	}

}

void Power_P1_P1CLKREQ_Wakeup(void) BANKING_CTRL {	
	//------
	//while(reg_INT_REFCLK_DIS_CHG_FALLING_ISR_LANE==0){
	//	if(reg_TX_SFT_RST_CHG_RISING_ISR_LANE) {
	//		reg_REFCLK_DIS_FM_PM_LANE = 0; 
	//		reg_REFCLK_DIS_ACK_FORCE_LANE = 0;
	//		reg_REFCLK_DIS_ACK_LANE = 0;			
	//		return;	
	//	}	
	//}	
	
	//------
	reg_INT_REFCLK_DIS_CHG_FALLING_ISR_CLEAR_LANE = 1;
	reg_INT_REFCLK_DIS_CHG_FALLING_ISR_CLEAR_LANE = 0;		

			
	reg_REFCLK_DIS_FM_PM_LANE = 0; 
	reg_REFCLK_DIS_ACK_FORCE_LANE = 0;
	reg_REFCLK_DIS_ACK_LANE = 0;

	//drv_tx_loz2hiz();

	if( reg_PU_IVREF_FELL == 1 ) {
		if( reg_PU_BG_FELL == 1) PHY_STATUS = ST_P1OFF_WK;
		else PHY_STATUS = ST_P1SNOOZE_WK;

		reg_ANA_PU_SQ_LANE = 0;
		
		check_pu_ivref();
		
		delay(50);
		
		reg_ANA_PU_SQ_LANE=1;
		
		delay(150);
	}

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

	delay(200);

	//TODO
	//if( cmx_TX_LANE_ALIGN_OFF==0 ) {
	//	if(mcuid== master_mcu) {	
	//		pu_ivref_on();	
	//	} else { 
	//		check_pu_ivref();
	//	}
	//}
	//else 
	{
		if(reg_ANA_PU_IVREF_DLY3==0) {			
			//pu_ivref up
			PM_CMN_REG2.BT.B2 = PM_CMN_REG2.BT.B2 | 0x08;
			delay(10); //1us
			PM_CMN_REG2.BT.B2 = PM_CMN_REG2.BT.B2 | 0x0c;
			delay(10); //1us
			PM_CMN_REG2.BT.B2 = PM_CMN_REG2.BT.B2 | 0x0e;
			delay(10); //1us
			PM_CMN_REG2.BT.B2 = PM_CMN_REG2.BT.B2 | 0x0f;				
		}			
	}		

	delay(200);
	reg_ANA_PU_TX_LANE = 1;
	short_delay();//delay(1);
	reg_ANA_TXDETRX_EN_LANE = 1;
	delay(200);
	
	txdetrx();

	reg_PIN_TXDETRX_VALID_LANE = 1;
	
	reg_ANA_TXDETRX_EN_LANE = 0;
	
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
	
	PHY_STATUS = ST_TXDETRX;
	
	reg_ANA_TXDETRX_EN_LANE = 1;
	
	txdetrx();
	reg_ANA_TXDETRX_EN_LANE = 0;
	delay(200);
	reg_PIN_TXDETRX_VALID_LANE = 1;	

	
	//while(reg_PIN_TXDETRX_EN_RD_LANE);
    //
	//reg_PIN_TXDETRX_VALID_LANE = 0;
	
	//rx_init_done = 0;

	//if(cmx_AUTO_RX_INIT_EN == 0)
	//	PHY_STATUS = ST_PLLREADY; 
	//else	
		//PHY_STATUS = ST_DTL;
	
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

	PHY_STATUS = ST_P1_TXDETRX;
	
	//virtual tdr
	//if(cmx_VIRTUAL_TDR_SIM_EN) {
	//	if(reg_ANA_DPHY_SQ_DETECTED_LANE)  //lane reduce test by sq_detect
	//		reg_TRX_VIRTUAL_CTRL_LANE = 1; //3fc[0]
	//	else	
	//		reg_TRX_VIRTUAL_CTRL_LANE = 0;
	//}

	short_delay();//delay(1);
	txloz2hiz_quick();
	
	reg_ANA_TXDETRX_EN_LANE = 1;

	reg_ANA_TXDETRX_START_LANE = 1;
	
	while(!reg_TXDETRX_SAMPLE_DONE_LANE){
		if(reg_TX_SFT_RST_CHG_RISING_ISR_LANE) return;
	}	

	short_delay();//delay(1);
	reg_ANA_TXDETRX_START_LANE = 0;
	short_delay();//delay(1);
	reg_ANA_TXDETRX_EN_LANE = 0;
	
	txloz2hiz_quick();

	reg_PIN_TXDETRX_VALID_LANE = 1;
	
	//while(reg_PIN_TXDETRX_EN_RD_LANE);
	//
	//reg_PIN_TXDETRX_VALID_LANE = 0;
	
	//TODO
	//if(cmx_LOAD_CTLE_SPDTBL_TXDETRX_EN)
	//	TRAIN_CONTROL_9.BT.B1 = 0; //clear rxtrain pass
				
	//do_wake = 0;
	//PHY_STATUS = ST_P1_WK ; 
	
}
/**
 * \module P2_TXDETRX
 * 
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Desc:  P2 Tx Detect Rx is only for USB. Not PCIe
 *    Input: PIN_TXDECTRX_EN: L->H
 *    Output: 
*/
void Power_P2_TXDETRX(void) BANKING_CTRL {
	
	PHY_STATUS = ST_P2_TXDETRX;
	
	reg_ANA_PU_TX_LANE = 1;
	
	short_delay();//delay(1);
	txloz2hiz_quick();
	
	reg_ANA_TXDETRX_EN_LANE = 1;
	short_delay();//delay(1);
	reg_ANA_TXDETRX_START_LANE = 1;
	
	while(!reg_TXDETRX_SAMPLE_DONE_LANE){
		if(reg_TX_SFT_RST_CHG_RISING_ISR_LANE) return;
	}	

	short_delay();//delay(1);
	reg_ANA_TXDETRX_START_LANE = 0;
	reg_ANA_TXDETRX_EN_LANE = 0;
	
	txloz2hiz_quick();

	reg_ANA_PU_TX_LANE = 0;

	reg_PIN_TXDETRX_VALID_LANE = 1;
	
	//while(reg_PIN_TXDETRX_EN_RD_LANE);
	//
	//reg_PIN_TXDETRX_VALID_LANE = 0;
	
	//do_wake = 0;
	//PHY_STATUS = ST_P2_WK ; 
	
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
	
	PHY_STATUS = ST_P2_BEACON;
	
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
	
			delay(10);
			reg_RESET_ANA = 1;	reg_RESET_ANA_RING = 1;	
			reg_ANA_PU_PLL_DLY = 0;
			reg_ANA_PU_PLL = 0;
			pcie_master_sync_clean();		
		} else { slave_sync_wait(); }

		//reg_ANA_PU_TX_LANE = 0;	
	}*/
	
	reg_ANA_PU_TX_LANE = 1;
	delay(4);
	reg_ANA_TX_HIZ_EN_LANE = 0;
	delay(5);
   // reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
	
	while(!reg_INT_BEACON_TX_EN_CHG_FALLING_ISR_LANE || reg_PIN_TX_ACJTAG_EN_RD_LANE);
	
	reg_INT_BEACON_TX_EN_CHG_FALLING_ISR_CLEAR_LANE = 1;
	reg_INT_BEACON_TX_EN_CHG_FALLING_ISR_CLEAR_LANE = 0;
	
	//reg_ANA_TX_LESS_CUR_IDLE_LANE = 1;
	short_delay();//delay(1);
	reg_ANA_TX_HIZ_EN_LANE = 1;
	short_delay();//delay(1);
	reg_ANA_PU_TX_LANE = 0;
	 
	PHY_STATUS = ST_P2_WK; 
	
	//do_wake = 0;
	
}


#endif //_PCIE_BUILD



