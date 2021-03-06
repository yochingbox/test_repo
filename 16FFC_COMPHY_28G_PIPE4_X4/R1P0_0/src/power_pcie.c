/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file power.c
* \purpose power control for PCIE, USB
* \History
*	10/15/2015 Heejeong Ryu		Initial 
*/

#include "common.h"

#ifdef _PCIE_USB 

void txloz2hiz(void) {
	if(reg_PIN_TX_IDLE_HIZ_RD_LANE) {
		delay(T_p125us);
		reg_ANA_TX_LESS_CUR_IDLE_LANE = 1;
		delay(T_p125us);
		reg_ANA_TX_IDLE_HIZ_EN_LANE = 1;
	}
}

void txhiz2loz(void) {
	if(!reg_PIN_TX_IDLE_HIZ_RD_LANE) {
		reg_ANA_TX_IDLE_HIZ_EN_LANE = 0;
		delay(T_p125us);
		reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
	}
}

void txloz2hiz_quick(void) {
	reg_ANA_TX_IDLE_HIZ_EN_LANE = 0;
	reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
	delay(T_20us);
	reg_ANA_TX_LESS_CUR_IDLE_LANE = 1;
	reg_ANA_TX_IDLE_HIZ_EN_LANE = 1;
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
void Power_P0s_P1( void ) {

	if(reg_DFE_ADAPT_CONT_LANE == 1) 	{
		reg_DFE_ADAPT_CONT_LANE = 0;
		//while(!reg_DFE_DONE_LANE);
		reg_DFE_START_LANE = 0;
	}

	reg_INT_POWER_STATE_VALID_RISE_ISR_LANE = 0;
	PM_CTRL_INTERRUPT_REG1_LANE.BT.B2 = 0;
	
//	delay(Tus);
	reg_DTL_CLK_OFF_LANE = 1;
	reg_DFE_CLK_OFF_LANE = 1;
	reg_RESET_DTL_LANE = 1;
	CKCON = 0x07 ;  //MCU WAIT time the slowest
	reg_RESET_DFE_LANE = 1;
	CKCON = 0x00 ; //MCU WAIT time setting back to normal.
	
	reg_PIN_PLL_READY_RX_LANE = 0;
		
	reg_FFE_PULSE_EN_LANE = 0;
	reg_ANA_PU_RX_LANE = 0;
	reg_ANA_PU_RX_DLY_LANE = 0;
	
	txloz2hiz();

	if( reg_PIN_PU_PLL_RD_LANE == 0) {
		PHY_STATUS = ST_P2;
		reg_PIN_PLL_READY_TX_LANE = 0;
		SYNC_STATUS_LANE_EN = 0;
	}
	else {
		PHY_STATUS = ST_P1_WK;
		reg_PIN_PLL_READY_TX_LANE = 1;
		SYNC_STATUS_LANE_EN = 1;

		if(reg_PIN_PU_RX_RD_LANE==1) { //corner case
			do_wake = 1;
		}
		else if( SYNC_SATUS_P2_2_P1_ON ) {
			txlane_align();
			SYNC_SATUS_P2_2_P1_ON = 0;
		}
			
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
void Power_P1_P2( void ) {

	delay(Tus);

	if( reg_PU_PLL_OR==0 ) {
		if(mcuid==MCU_LANE0) { 
			//pcie_master_sync_request();				
			reg_DTX_CLK_OFF = 1;	reg_DTX_CLK_OFF_RING = 1;
			reg_RESET_DTX	= 1; 	reg_RESET_DTX_RING = 1;
			
			pll_clk_ready_all_0();
			
			delay(Tus);
			reg_RESET_ANA = 1;	reg_RESET_ANA_RING = 1;	
			reg_ANA_PU_PLL_DLY = 0; reg_ANA_PU_PLL_DLY_RING = 0;
			reg_ANA_PU_PLL = 0; reg_ANA_PU_PLL_RING = 0; 

			SYNC_SATUS_PLL_OR_CHG = 1;	
			//pcie_master_sync_clean();		

		} 
		//else { slave_sync_wait(); }
	}
	
	reg_ANA_PU_TX_LANE = 0;	
	
	PHY_STATUS = ST_P2_WK;
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
void Power_P2_P1(void) {

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
	} while(!do_wake); 

	if(reg_PIN_PU_TX_RD_LANE==1 && reg_PIN_PU_RX_RD_LANE == 1) {
		PHY_STATUS = ST_P2_P0;
		return;
	}

	reg_REFCLK_DIS_FM_PM = 0; 	
	
    reg_ANA_PU_TX_LANE  = 1;
	
	if(reg_PU_PLL_OR && SYNC_SATUS_PLL_OR_CHG_READ) { 	
		if(mcuid==MCU_LANE0) {
			pcie_master_sync_request();		
				/*reg_ANA_PU_PLL = 1;
			delay(T_p5us);
			reg_ANA_PU_PLL_DLY = 1;*/ // this code is in pll_fast_cal()
			//fast startup
			pll_fast_cal();			
			//pll_clk_ready_1(); //move to inside pll_fast_cal()		
			if(ring_pll_enabled) {
				ring_pll_fast_cal();			
			}		
	
			reg_DTX_CLK_OFF = 0;	reg_DTX_CLK_OFF_RING = 0;	
			delay(Tus);
			reg_RESET_DTX	= 0;	reg_RESET_DTX_RING = 0;
			
			SYNC_SATUS_PLL_OR_CHG = 0;
			
			pcie_master_sync_clean();		
		} else { slave_sync_wait(); }
	}
	
	delay(T_5us);
	txlane_align();
	
	delay(T_5us);
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
void Power_P1_P0(void) { 
	if(reg_INT_TXDETRX_EN_CHG_ISR_LANE ) {
		PHY_STATUS = ST_P1_TXDETRX;
		return;	
	}
	else while(!do_wake); 

	reg_ANA_PU_RX_LANE = 1;	
	delay(T_p5us);
	reg_ANA_PU_RX_DLY_LANE = 1;
	delay(T_p4us);
	reg_FFE_PULSE_EN_LANE = 1;

	txhiz2loz();
	
	load_cal_data();
	
	delay(T_2p5us); 
	reg_DTL_CLK_OFF_LANE= 0; 
	reg_DFE_CLK_OFF_LANE = 0; 
	
	delay(Tus);
	reg_RESET_DTL_LANE = 0;
	reg_RESET_DFE_LANE = 0;
	
	reg_PIN_PLL_READY_RX_LANE = 1;
	
	if(cmx_AUTO_RX_INIT_EN == 1)
		PHY_STATUS = ST_PLLREADY; 
	else	
		PHY_STATUS = ST_DTL;

}

void Power_P2_P0(void) {
	reg_REFCLK_DIS_FM_PM = 0; 	

	reg_ANA_PU_TX_LANE = 1;	

	if(mcuid==MCU_LANE0) {
		pcie_master_sync_request();		
		//fast startup
		pll_fast_cal();			
		//pll_clk_ready_1(); //move to inside pll_fast_cal()		
		if(ring_pll_enabled) {
			ring_pll_fast_cal();
		}		
		
		pcie_master_sync_clean();		
	} else { slave_sync_wait(); }

   reg_ANA_PU_RX_LANE = 1;
   delay(T_p5us);
   reg_ANA_PU_RX_DLY_LANE = 1;
   delay(T_p4us);
   reg_FFE_PULSE_EN_LANE = 1;

   txhiz2loz();
		
	load_cal_data();

	reg_DTX_CLK_OFF = 0;	reg_DTX_CLK_OFF_RING = 0;
	reg_DTL_CLK_OFF_LANE= 0; 
	reg_DFE_CLK_OFF_LANE = 0; 
	
	delay(Tus);
	reg_RESET_DTX	= 0;	reg_RESET_DTX_RING = 0;
	reg_RESET_DTL_LANE = 0;
	reg_RESET_DFE_LANE = 0;

	delay(T_5us);
	txlane_align();
	
	delay(T_5us);
	//txdigital_align();
	reg_PIN_PLL_READY_TX_LANE = 1;
	reg_PIN_PLL_READY_RX_LANE = 1;
	
	if(cmx_AUTO_RX_INIT_EN == 1)
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
void Power_P1CLKREQ_P1(void) { 
	
	TCON  = 0x04; //EX0=LVL 
	reg_INT_REFCLK_DIS_CHG_ISR_LANE = 0;
	PCON = 0x8a; //mcu stop 
	
	//wait for mcu wakeup
	TCON  = 0x05; //EX0=FALL
	
	reg_REFCLK_DIS_FM_PM = 0; 
	reg_INT_REFCLK_DIS_CHG_ISR_LANE = 0;
	
	txloz2hiz();
	
	if( reg_PU_IVREF_FELL == 1 ) {
		if( reg_PU_BG_FELL == 1)  
			PHY_STATUS = ST_P1OFF_WK;
		else PHY_STATUS = ST_P1SNOOZE_WK;	

		reg_ANA_PU_SQ_LANE = 0; 
		if(mcuid==MCU_LANE0) {
			master_sync_request();		
			PM_CMN_REG2.BT.B2 = 0;
			/*
			reg_ANA_PU_IVREF_DLY3 = 0;
			reg_ANA_PU_IVREF_DLY2 = 0;
			reg_ANA_PU_IVREF_DLY1 = 0;
			reg_ANA_PU_IVREF = 0;			
			*/

			if( reg_PU_BG_FELL == 1) //will be cleared by hardware when ANA_PU_IVREF=1
				delay(T_20us);
			
			reg_ANA_PU_IVREF = 1;
			delay(Tus);
			reg_ANA_PU_IVREF_DLY1 = 1;
			delay(Tus);
			reg_ANA_PU_IVREF_DLY2 = 1;
			delay(Tus);
			reg_ANA_PU_IVREF_DLY3 = 1;
			
			pcie_master_sync_clean();		
		}	else { slave_sync_wait(); }
		delay(T_5us);
		reg_ANA_PU_SQ_LANE=1;
		delay(T_20us);
	}
	
	while(reg_PIN_PU_PLL_RD_LANE==0 || reg_PIN_PU_TX_RD_LANE==0);
	
	reg_ANA_PU_TX_LANE = 1;
	
	if(mcuid==MCU_LANE0) {
		master_sync_request();		
		//fast startup
		pll_fast_cal();			
		//pll_clk_ready_1(); //move to inside pll_fast_cal()		
		if(ring_pll_enabled) {
			ring_pll_fast_cal();
		}		
		
		reg_DTX_CLK_OFF = 0;	reg_DTX_CLK_OFF_RING = 0;
	
		delay(Tus);
		reg_RESET_DTX	= 0;	reg_RESET_DTX_RING = 0;
		
		pcie_master_sync_clean();		
	} else { slave_sync_wait(); }
	
	delay(T_5us);
	txlane_align();

	if( PHY_STATUS == ST_P1OFF_WK ) { 
		reg_ANA_TX_IDLE_HIZ_EN_LANE = 0; //LOZ idle time		
		delay(T_40us);
		reg_ANA_TX_IDLE_HIZ_EN_LANE = 1;
	}

	delay(T_5us);
	
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
void P0Off_TXDETRX(void) {
	PHY_STATUS = ST_POFF_TXDETRX;

	delay(T_20us);

	if(mcuid==MCU_LANE0) {
		master_sync_request();		
		reg_ANA_PU_IVREF = 1;
		delay(Tus);
		reg_ANA_PU_IVREF_DLY1 = 1;
		delay(Tus);
		reg_ANA_PU_IVREF_DLY2 = 1;
		delay(Tus);
		reg_ANA_PU_IVREF_DLY3 = 1;

		pcie_master_sync_clean();		
	} else { slave_sync_wait(); }
	
	delay(T_20us);
	reg_ANA_PU_TX_LANE = 1;
	delay(T_p125us);
	reg_ANA_TXDETRX_EN_LANE = 1;
	delay(T_20us);
	reg_ANA_TX_LESS_CUR_IDLE_LANE = 1;
	delay(T_p125us);
	reg_ANA_TX_IDLE_HIZ_EN_LANE = 1;
	reg_ANA_TXDETRX_START_LANE = 1;
	
	while(!reg_TXDETRX_SAMPLE_DONE_LANE);

	delay(T_p125us);
	reg_ANA_TXDETRX_START_LANE = 0;
	delay(T_p125us);
	reg_ANA_TX_IDLE_HIZ_EN_LANE = 0;
	delay(T_p125us);
	reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
	reg_PIN_TXDETRX_VALID_LANE = 1;
	reg_ANA_TXDETRX_EN_LANE = 0;
	
	reg_ANA_PU_TX_LANE = 0;
	
	if(mcuid==MCU_LANE0) {
		master_sync_request();		
		PM_CMN_REG2.BT.B2 = 0; //pu_ivref**=0
		pcie_master_sync_clean();		
	} else { slave_sync_wait(); }

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
void Power_P0_TXDETRX(void) { 
	
	reg_ANA_TXDETRX_EN_LANE = 1;

	delay(T_p125us);
	reg_ANA_TX_LESS_CUR_IDLE_LANE = 1;
	delay(T_p125us);
	reg_ANA_TX_IDLE_HIZ_EN_LANE = 1;
	
	reg_ANA_TXDETRX_START_LANE = 1;
	
	while(!reg_TXDETRX_SAMPLE_DONE_LANE);
	delay(T_p125us);

	reg_ANA_TXDETRX_START_LANE = 0;
	delay(T_p125us);
	
	reg_ANA_TX_IDLE_HIZ_EN_LANE = 0;
	delay(T_p125us);
	reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;

	reg_ANA_TXDETRX_EN_LANE = 0;
	
	delay(T_20us);
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
void Power_P1_TXDETRX(void) { 

	reg_INT_TXDETRX_EN_CHG_ISR_LANE = 0;
	delay(T_p125us);
	txloz2hiz_quick();
	
	reg_ANA_TXDETRX_EN_LANE = 1;

	reg_ANA_TXDETRX_START_LANE = 1;
	
	while(!reg_TXDETRX_SAMPLE_DONE_LANE);

	delay(T_p125us);
	reg_ANA_TXDETRX_START_LANE = 0;
	delay(T_p125us);
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
void Power_P2_TXDETRX(void) { 
	reg_INT_TXDETRX_EN_CHG_ISR_LANE = 0;
	reg_ANA_PU_TX_LANE = 1;
	
	delay(T_p125us);
	txloz2hiz_quick();
	
	reg_ANA_TXDETRX_EN_LANE = 1;
	delay(T_p125us);
	reg_ANA_TXDETRX_START_LANE = 1;
	
	while(!reg_TXDETRX_SAMPLE_DONE_LANE);

	delay(T_p125us);
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
void Power_P2_BEACON(void) {  
	/* HR: expect delay>1uS between PIN_PU_PLL=0 to PIN_TX_ACJTAG_EN=1.
		if( reg_ANA_PU_TX_LANE == 1 ) { //conner case	
		reg_DTX_CLK_OFF = 1; reg_DTX_CLK_OFF_RING = 1;
	
		if(mcuid==MCU_LANE0) { 
			master_sync_request();		
			
			reg_RESET_DTX	= 1; reg_RESET_DTX_RING = 1;
			reg_ANA_PLL_CLK_READY = 0;
			reg_ANA_PU_PLL2 = 0;
			reg_ANA_PU_PLL_RING = 0;
			reg_ANA_PLL_CLK_READY_RING = 0;
			reg_ANA_PLL_CLK_READY_PRE1 =0;	
			reg_ANA_PLL_CLK_READY_PRE0 = 0;	
	
			delay(Tus);
			reg_RESET_ANA = 1;	reg_RESET_ANA_RING = 1;	
			reg_ANA_PU_PLL_DLY = 0;
			reg_ANA_PU_PLL = 0;
			pcie_master_sync_clean();		
		} else { slave_sync_wait(); }

		//reg_ANA_PU_TX_LANE = 0;	
	}*/
	
	reg_ANA_PU_TX_LANE = 1;
	delay(T_p4us);
	reg_ANA_TX_IDLE_HIZ_EN_LANE = 0;
	delay(T_p5us);
    reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
	
	reg_ANA_BEACON_EN_LANE = 1;
	
	while(!do_wake);
	
	reg_ANA_TX_LESS_CUR_IDLE_LANE = 1;
	delay(T_p125us);
	reg_ANA_TX_IDLE_HIZ_EN_LANE = 1;
	delay(T_p125us);
	reg_ANA_PU_TX_LANE = 0;
	 
	PHY_STATUS = ST_P2_WK; 
	
	do_wake = 0;
	
}

#endif //_PCIE_USB
