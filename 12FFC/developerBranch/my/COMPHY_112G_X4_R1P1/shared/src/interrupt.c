/******************************************************************
 * 	        Marvell Semiconductor
 *******************************************************************
 * \file interrupt.c
 * \purpose Interrupt
 * \History
 *	10/13/2015 Heejeong Ryu		Initial
 */
#include "common.h"

static inline void mcu_reset(void) {
	PHY_INT_LANE = 0xFF;
	SRST = 1;
	SRST = 1;
}


void timer1_isr (void) __interrupt (3) __using (2)
		{
	EA         = 0;
	TR1        = 0;
	TF1        = 0;
	timeout    = 1;
	EA         = 1;
		}
/*
void timer2_isr (void) __interrupt (5) __using (2)
		{
	EA         = 0;
	PHY_INT_LANE = 0xF2;
	T2CON		 = 0x78;//60;
	TF2        = 0;
	timeout2   = 1;
	//#if tag_TRAIN_TIME_OUT_EN
	//if(lnx_TX_TRAIN_TIMER_ENABLE_LANE && do_train) {
	//	reg_TX_TRAIN_FAILED_LANE = 1;
	//	lnx_TX_TRAIN_FAIL_INT_LANE = 1;
	//}
	//else 
	//if(lnx_RX_TRAIN_TIMER_ENABLE_LANE && do_rxtrain) {
	//	reg_RX_TRAIN_FAILED_LANE = 1;
	//}	
	//#endif
	PHY_INT_LANE = 0xFF;
	EA         = 1;
		}
*/
void timer2_isr (void) __interrupt (5) __using (2) {
	EA         = 0;
	timerMSB = timerMSB + 1;
	timer2_msb++;
	TF2 = 0;
	if(EXF2){
		EXF2 = 0;
	}
	EA         = 1;
}
void int0_isr (void) __interrupt (0)  __using (2)  
		{
	//PHY_INT_LANE = 13;
	//if(reg_INT_REFCLK_DIS_CHG_ISR_LANE == 1) //no need
	//	reg_INT_REFCLK_DIS_CHG_ISR_LANE = 0;
	//reg_MCU_DEBUG2_LANE_7_0++; //test
	//PHY_INT_LANE = 0xFF;
		}

void int3_isr (void) __interrupt (10)  __using (2) //refclk_dis
		{
#ifdef DEVELOP_TEMP
	EA = 0;

	PHY_INT_LANE = 3;

	PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0;


	if( reg_INT_REFCLK_DIS_CHG_ISR_LANE ) {
		//reg_INT_REFCLK_DIS_CHG_ISR_LANE = 0;
		reg_INT_REFCLK_DIS_CHG_ISR_CLEAR_LANE = 1;
		reg_INT_REFCLK_DIS_CHG_ISR_CLEAR_LANE = 0;

		if(reg_PIN_REFCLK_DIS_RD==1 && reg_PIN_PU_PLL_RD_LANE==0) {
			if(PHY_STATUS != ST_SLUMBER) {
				PHY_NS = ST_SLUMBER;
				SYNC_STATUS_LANE_EN = 0;
#ifdef  RESET_MCU_SPEED_UP
				if(!cont_cal_on)
					mcu_reset();
#endif		
			}
		}
	}

	if( reg_INT_PU_IVREF_CHG_ISR_LANE ) {
		//reg_INT_PU_IVREF_CHG_ISR_LANE = 0;
		reg_INT_PU_IVREF_CHG_ISR_CLEAR_LANE = 1;
		reg_INT_PU_IVREF_CHG_ISR_CLEAR_LANE = 0;

		//if(reg_PIN_PU_IVREF_RD==0 && reg_PIN_PU_PLL_RD_LANE==0 && mcuid== master_mcu ) {
		if(reg_PIN_PU_IVREF_RD==0 && reg_PIN_PU_PLL_RD_LANE==0) {
			PM_CMN_REG2.BT.B2 = 0x0e; //reg_ANA_PU_IVREF_DLY3 = 0;
			PM_CMN_REG2.BT.B2 = 0x0c; //reg_ANA_PU_IVREF_DLY2 = 0;
			PM_CMN_REG2.BT.B2 = 0x08; //reg_ANA_PU_IVREF_DLY1 = 0;
			PM_CMN_REG2.BT.B2 = 0;
			SYNC_STATUS_LANE_EN = 0;
		}
	}

	PHY_INT_LANE = 0xFF;

	EA = 1;
#endif
		}

//void int1_isr (void) __interrupt (2)  __using (2) 
//		{
//		}
//
//void int8_isr (void) __interrupt (17)  __using (2)
//		{
//		}
//

void int9_isr (void) __interrupt (18)  __using (2)// sata_sas pm ctrl
		{

#ifdef DEVELOP_TEMP
	EA = 0;
	PHY_INT_LANE = 9;

	PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0;
	//reg_RX_TRAIN_ENABLE_ISR_LANE = 0;
	//reg_TX_TRAIN_ENABLE_ISR_LANE = 0;
	reg_RX_TRAIN_ENABLE_ISR_CLEAR_LANE = 1;
	reg_RX_TRAIN_ENABLE_ISR_CLEAR_LANE = 0;
	reg_TX_TRAIN_ENABLE_ISR_CLEAR_LANE = 1;
	reg_TX_TRAIN_ENABLE_ISR_CLEAR_LANE = 0;	

	//reg_INT_PU_PLL_CHG_ISR_CLEAR_LANE = 1;
	//reg_INT_PU_PLL_CHG_ISR_CLEAR_LANE = 0;

	//reg_INT_PU_TX_CHG_ISR_CLEAR_LANE = 1;
	//reg_INT_PU_TX_CHG_ISR_CLEAR_LANE = 0;

	//reg_INT_PU_RX_CHG_ISR_CLEAR_LANE = 1;
	//reg_INT_PU_RX_CHG_ISR_CLEAR_LANE = 0;

	//reg_INT_REFCLK_DIS_CHG_ISR_CLEAR_LANE = 1;
	//reg_INT_REFCLK_DIS_CHG_ISR_CLEAR_LANE = 0;

	//reg_INT_PU_IVREF_CHG_ISR_CLEAR_LANE = 1;
	//reg_INT_PU_IVREF_CHG_ISR_CLEAR_LANE = 0;
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0xe6; //1110_0110
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0;
	
	switch(PHY_STATUS) {
	case ST_SLUMBER_CLK:
	case ST_SLUMBER_WK:
	case ST_SLUMBER:
		if(reg_PIN_PU_PLL_RD_LANE == 1){
			SYNC_STATUS_LANE_EN = 1;
			do_wake = 1;
		}
		break;
	case ST_PSLUMBER_TX:
	case ST_PSLUMBER_RX:
		if(reg_PIN_PU_TX_RD_LANE==1 && reg_PIN_PU_RX_RD_LANE == 1){
			do_wake = 1;
		}
		else {
			reg_PIN_PLL_READY_TX_LANE    = reg_PIN_PU_TX_RD_LANE;
			reg_PIN_PLL_READY_RX_LANE    = reg_PIN_PU_RX_RD_LANE;

			if(reg_PIN_PU_PLL_RD_LANE == 0)	{ PHY_NS = ST_SLUMBER; SYNC_STATUS_LANE_EN = 0; }
			else if(reg_PIN_PU_TX_RD_LANE == 0)  PHY_NS = ST_PSLUMBER_TX;
			else if(reg_PIN_PU_RX_RD_LANE == 0) PHY_NS = ST_PSLUMBER_RX;
#ifdef  RESET_MCU_SPEED_UP	
			mcu_reset();
#endif
		}
		break;
	default:
		if(reg_PIN_PU_PLL_RD_LANE == 0){
			PHY_NS = ST_SLUMBER;
lnx_INTERRUPT_DEBUG2_LANE_7_0++;			
			reg_PIN_PLL_READY_TX_LANE    = 0;
			reg_PIN_PLL_READY_RX_LANE    = 0;
#ifdef	RESET_MCU_SPEED_UP
			if(!cont_cal_on)
				mcu_reset();
#endif
		}
		else {
			if(reg_PIN_PU_TX_RD_LANE == 0) {
				reg_PIN_PLL_READY_TX_LANE    = 0;
				reg_PIN_PLL_READY_RX_LANE    = reg_PIN_PU_RX_RD_LANE;
				PHY_NS = ST_PSLUMBER_TX;
#ifdef	RESET_MCU_SPEED_UP
if(!cont_cal_on)
	mcu_reset();
#endif
			}
			else if(reg_PIN_PU_RX_RD_LANE == 0){
				reg_PIN_PLL_READY_TX_LANE    = 1;
				reg_PIN_PLL_READY_RX_LANE    = 0;
				PHY_NS = ST_PSLUMBER_RX;
#ifdef	RESET_MCU_SPEED_UP
				if(!cont_cal_on)
					mcu_reset();
#endif
			}
		}
	}

	PHY_INT_LANE = 0xFF;
	EA = 1;
#endif
		}


void int2_isr (void) __interrupt (9) __using (2) //gen
		{
#ifdef DEVELOP_TEMP
	EA = 0;

	PHY_INT_LANE = 0x2;
	SPD_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0x0;
	//reg_RX_TRAIN_ENABLE_ISR_LANE = 0;
	//reg_TX_TRAIN_ENABLE_ISR_LANE = 0;
	reg_RX_TRAIN_ENABLE_ISR_CLEAR_LANE = 1;
	reg_RX_TRAIN_ENABLE_ISR_CLEAR_LANE = 0;
	reg_TX_TRAIN_ENABLE_ISR_CLEAR_LANE = 1;
	reg_TX_TRAIN_ENABLE_ISR_CLEAR_LANE = 0;
	
	//reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 1;
	//reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 1;
 	//reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 0;
    //reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 0;
	SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0xc0; //1100_0000
	SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0;
	

	reg_PIN_PLL_READY_RX_LANE = 0;
	reg_PIN_PLL_READY_TX_LANE = 0;
/*	reg_ANA_RX_DTL_LOOP_FREEZE_LANE = 1;  //analog deleted*/
/*	reg_DTL_FLOOP_FREEZE_LANE = 1;*/
/*	DTL_DTX_DFE_clkoff_reset_1();*/
lnx_SPEED_CHANGE_DEBUG1_LANE_7_0++;

	// protection: do not speed change when pu down
	if(reg_ANA_PU_TX_LANE && reg_ANA_PU_RX_LANE){
		
		//PHY_NS = ST_CAL;
		// Let main handle
#ifdef	RESET_MCU_SPEED_UP
	//if(!cont_cal_on)
		mcu_reset();
#endif
	}
	PHY_INT_LANE = 0xFF;
	EA = 1;
#endif
		}
/*
void int11_isr (void) __interrupt (20)  __using (2)  //rx_train
		{
#ifdef DEVELOP_TEMP
	EA = 0;
	PHY_INT_LANE = 11;

	reg_RX_TRAIN_ENABLE_ISR_CLEAR_LANE = 1;
	reg_RX_TRAIN_ENABLE_ISR_CLEAR_LANE = 0;

	//if( reg_RX_TRAIN_COMPLETE_LANE == 0 )
	{	
		if(!do_rxtrain) { 
			do_rxtrain = 1;
			timeout = 0;
			PHY_NS = ST_TRXTRAIN;
		}
		else { //abort 
			PHY_NS = ST_RXTRAIN;	
			mcu_reset();
		}
	}

	PHY_INT_LANE = 0xFF;

	EA = 1;
#endif
		}
*/

//TODO:		
//1. train_stop: //MTTT timeout, frame lock timeout. failure flag will be trigger bt hardware.
//2. train disable: disable, abort 	
/*	
void int5_isr (void) __interrupt (12) __using (2) //txtrain
{

	EA = 0;
	PHY_INT_LANE = 5;

	reg_TX_TRAIN_ENABLE_ISR_CLEAR_LANE = 1;
	reg_TX_TRAIN_ENABLE_ISR_CLEAR_LANE = 0;

	//if( reg_TX_TRAIN_ENABLE_RD_LANE == 0 )
	{	
		if(!do_train) {
			PHY_NS = ST_TRXTRAIN;
			do_train = 1;

/////////////fixed cross-byte reg
//			save_pt_tx_pattern_sel_lane_5_0_b0 = reg_PT_TX_PATTERN_SEL_LANE_5_0_b0;
//			save_pt_tx_pattern_sel_lane_5_0_b1 = reg_PT_TX_PATTERN_SEL_LANE_5_0_b1;
			save_pt_tx_pattern_sel_lane_5_0 = reg_PT_TX_PATTERN_SEL_LANE_5_0;
			
			if(reg_TX_TRAIN_PAT_SEL_LANE_1_0==1) {
/////////////fixed cross-byte reg
//				reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = 2; //6'h12;
//				reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = 4;                                  
				reg_PT_TX_PATTERN_SEL_LANE_5_0 = 0x12; 
			}
			else if(reg_TX_TRAIN_PAT_SEL_LANE_1_0==2) {
				if(mcuid == MCU_LANE0) {
/////////////fixed cross-byte reg
//					reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = 3; //6'h13;
//					reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = 4;                                  
					reg_PT_TX_PATTERN_SEL_LANE_5_0 = 0x13;
				}
				else if(mcuid == MCU_LANE1) {
/////////////fixed cross-byte reg
//					reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = 0; //6'h14;
//					reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = 5;
					reg_PT_TX_PATTERN_SEL_LANE_5_0 = 0x14;
				}							
				else if(mcuid == MCU_LANE2) {
/////////////fixed cross-byte reg
//					reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = 1; //6'h15;
//					reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = 5;
					reg_PT_TX_PATTERN_SEL_LANE_5_0 = 0x15;
				}							
				else if(mcuid == MCU_LANE3) {
/////////////fixed cross-byte reg
//					reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = 2; //6'h16;
//					reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = 5;
					reg_PT_TX_PATTERN_SEL_LANE_5_0 = 0x16;
				}							
			}			
			else if(reg_TX_TRAIN_PAT_SEL_LANE_1_0==3) {
				if(mcuid == MCU_LANE0) {
/////////////fixed cross-byte reg
//					reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = 0; //6'h1c;
//					reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = 7;
					reg_PT_TX_PATTERN_SEL_LANE_5_0 = 0x1C;
				}
				else if(mcuid == MCU_LANE1) {
/////////////fixed cross-byte reg
//					reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = 1; //6'h1d;
//					reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = 7;
					reg_PT_TX_PATTERN_SEL_LANE_5_0 = 0x1D; 
				}							
				else if(mcuid == MCU_LANE2) {
/////////////fixed cross-byte reg
//					reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = 2; //6'h1e;
//					reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = 7;
					reg_PT_TX_PATTERN_SEL_LANE_5_0 = 0x1E;
				}							
				else if(mcuid == MCU_LANE3) {
/////////////fixed cross-byte reg
//					reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = 3; //6'h1f;
//					reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = 7;
					reg_PT_TX_PATTERN_SEL_LANE_5_0 = 0x1F;
				}							
			}			
		}		
		//TODO: Train abort
		//else { 		
		//	reg_PT_EN_LANE = save_pt_en_lane;	

/////////////fixed cross-byte reg
		//	reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = save_pt_tx_pattern_sel_lane_5_0_b0;
		//	reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = save_pt_tx_pattern_sel_lane_5_0_b1;			
		//	reg_PT_TX_PATTERN_SEL_LANE_5_0 = save_pt_tx_pattern_sel_lane_5_0;			
		//	
		//	//abort
		//	PHY_NS = ST_TXTRAIN;
		//	mcu_reset();
		//}
	}

	PHY_INT_LANE = 0xff;
	EA = 1;

		} */

void int10_isr (void) __interrupt (19)  __using (2) //rx_init
		{
	EA = 0;
	PHY_INT_LANE = 10;

	if( reg_INT_RX_INIT_RISE_ISR_LANE ) {
		//reg_INT_RX_INIT_RISE_ISR_LANE = 0;
		reg_INT_RX_INIT_RISE_ISR_CLEAR_LANE = 1;
		reg_INT_RX_INIT_RISE_ISR_CLEAR_LANE = 0;
lnx_INTERRUPT_DEBUG3_LANE_7_0++;
		// For rx_init checkpoint to be steady
		// Cannot use PHY_STATUS!=ST_DTL (verified by test)
		if((lnx_CLI_DEBUG0_LANE_7_0&0x3)!=0x3){// not trapped
			do_rxinit = 1;
			PHY_NS = ST_DTL; 
			mcu_reset();
		}
	}

	PHY_INT_LANE = 0xFF;
	EA = 1;
		}

		
//void int6_isr (void) __interrupt (13)  __using (2) 
//		{
//
//		}
//
//void int7_isr (void) __interrupt (8)  __using (2) 
//		{
//
//		}
//
//void int12_isr (void) __interrupt (21)  __using (2) 
//		{
//		}

void int4_isr (void) __interrupt (11)  __using (2) //trx_train_timeout_irq | frame_det_timeout_irq
		{
#ifdef DEVELOP_TEMP
	if(reg_TRX_TRAIN_TIMEOUT_ISR_LANE) {
		//reg_TRX_TRAIN_TIMEOUT_ISR_LANE = 1;
		reg_TRX_TRAIN_TIMEOUT_ISR_CLEAR_LANE = 1;
		reg_TRX_TRAIN_TIMEOUT_ISR_CLEAR_LANE = 0;
		if(do_rxtrain){
			PHY_NS = ST_RXTRAIN;
			reg_INT_RX_TRAIN_FAILED_LANE = 1;
			//mcu_reset();
		}
		else if(do_train) {
			PHY_NS = ST_TXTRAIN;
			reg_INT_TX_TRAIN_FAILED_LANE = 1;
			//mcu_reset();
		}
	}	
#endif
}

void uart0_isr(void) __interrupt(4) __using (2)
		{
#ifdef DEVELOP_TEMP
	EA = 0;
	if(RI) {
		RI = 0;
		uart_rx_buf[uart_rx_in++] = SBUF;
		if( uart_rx_in >= UART_RX_BUF_MAX )
			uart_rx_in = 0;
	}

	if(TI) {
		TI = 0;
		uart_rx_busy = 0;
	}

	EA = 1;
#endif
		}


