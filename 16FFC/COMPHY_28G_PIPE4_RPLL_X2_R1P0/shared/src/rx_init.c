/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file train_if.c
* \purpose RX_Init module
* \History
*	11/21/2015 Heejeong Ryu		Initial 
*/
#include "common.h"

#ifdef USE_BANKING
#pragma codeseg BANK1
#endif

/**
 * \module RX_Init
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NODE>  
 * \note
*/
#define dfe_adapt_lpnum_3_0			reg_DFE_ADAPT_LPNUM_LANE_9_0_b0
#define dfe_adapt_lpnum_9_4			reg_DFE_ADAPT_LPNUM_LANE_9_0_b1

void RX_Init(void) BANKING_CTRL {
	
	if(do_rxinit || cmx_AUTO_RX_INIT_EN) {
	reg_RX_INIT_DONE_LANE = 0; //??
	reg_INT_RX_INIT_RISE_ISR_LANE = 0;
	//dfe_hardware_cont_stop();
	reg_DFE_ADAPT_CONT_LANE = 0;
	reg_DFE_START_LANE = 0;

    reg_ANA_TX_IDLE_FORCE_LANE = 0;
    reg_ANA_TX_IDLE_LANE = 0;

	#ifndef SUPPORT_RX_INIT_USE_CDS

	//reset dfe/dtl
	reg_SEL_MU_F_LANE = 0; 
	reg_ANA_RX_SEL_MU_F_LANE = 0;
	reg_RESET_DTL_SYNC_LANE = 1; 
	reg_RESET_DTL_SYNC_LANE = 0; 	
	
	if(rxinit_4_spdchg_en) {
		reg_DFE_INIT_SEL_LANE = 0; //load from cal
		CKCON = 0x07 ; //MCU WAIT time the slowest
		reg_RESET_DFE_LANE = 1;
		CKCON = 0x00 ; //MCU WAIT time setting back to normal.
		reg_ANA_REG_DFEE_RST_LANE = 1;
		reg_ANA_REG_DFEO_RST_LANE = 1;
		reg_RESET_DFE_LANE = 0;
		reg_ANA_REG_DFEE_RST_LANE = 0;
		reg_ANA_REG_DFEO_RST_LANE = 0;	
		
		if(reg_INT_DFE_EN_LANE==0) {
			reg_DFE_EN_FM_REG_LANE = 1; reg_DFE_EN_LANE = 1; 
		}	
		dc_load(0);
		reg_DFE_EN_FM_REG_LANE = 0; 		
	}
	else	
		delay01(20); 
		
	reg_SEL_MU_F_LANE = 1; 
	reg_ANA_RX_SEL_MU_F_LANE = 1;

	//Get ready for train
	TX_TRAIN_CTRL_LANE.VAL &= 0xa01fff02;
	reg_PHY_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 1;
	reg_PHY_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 0;
	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.VAL = 0x0004030b;
	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.VAL = 0;
	RX_LANE_INTERRUPT_REG1.BT.B3 = 0x60;
	RX_LANE_INTERRUPT_REG1.BT.B3 = 0;

	delay01(20); //30

	/*
	//dfe fine
	reg_DFE_COARSE_STEP_EN_LANE = 0; 
	reg_DFE_FINE_STEP_EN_LANE = 1;
    reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0;
    reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;
    if(dfe_dis) {
        reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0;
    } else {
        reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0x1; //lock_dfe_on
    }
	reg_DFE_F0B_MODE_LANE = 0;
	reg_DFE_F0D_MODE_LANE = 0;
	reg_DFE_UPDATE_DC_EN_LANE = 0;
    reg_DFE_ADAPT_LPNUM_LANE_9_0_b0 = 0;
    reg_DFE_ADAPT_LPNUM_LANE_9_0_b1 = 0;
    reg_DFE_POL_LPNUM_LANE_9_0_b0 = 0;
    reg_DFE_POL_LPNUM_LANE_9_0_b1 = 0;
	if(dfe_dis==0) {
		timeout_start(5); //5us
		reg_DFE_START_LANE = 0;
		reg_DFE_START_LANE = 1;
		while(!reg_DFE_DONE_LANE) {
			if(timeout) break;
		}
		reg_DFE_START_LANE = 0;
	}		
	//reg_DFE_COARSE_STEP_EN_LANE = 0; //no need
	reg_DFE_FINE_STEP_EN_LANE = 0;
	*/
	
	#else
	if(dfe_dis==0) cdr_dfe_init();
	ctrl_cdr_phase_on = 0;
	reg_CLK_RXACCAP_SEL_LANE_1_0 = 2;
	
	//new cds
	lnx_DFE_SAVE_EN_LANE = 0;
	//lnx_RESET_PH_EN_DTL_LANE = 1;
	lnx_LOCK_DFE_ON_LANE = 1; 
	
	#if tag_RX_FAST_ACQ_EN
    cds_tb = cds_table[CDS_FASTACQ];
	#else
    cds_tb = cds_table[CDS_RXINIT];
	#endif
    cdr_dfe_scheme();
	lnx_LOCK_DFE_ON_LANE = 0; 
		
	#endif //SUPPORT_RX_INIT_USE_CDS
	
	rxinit_4_spdchg_en = 0;
	do_rxinit = 0; //avoid duplicate
	rx_init_done = 1;

	reg_RX_INIT_DONE_LANE = 1; //??
	
	}
	
	//next stage
	pre_normal_process();	
	
	tempc_step_state = 0; //??	//reset tempc step state
	pllcal_first_time = 1;

	//reg_DFE_TAP_SIGN_MODE_LANE = 1;

	PHY_STATUS = ST_NORMAL;

}

void pre_normal_process(void) BANKING_CTRL {

	reg_MCU_DEBUG0_LANE_7_0 = 0x21;
	
	// restart normal process
	timeout2 = 1;
	timeout = 1; 
	reg_PWM2_EN_LANE = 0; 
	reg_PWM1_EN_LANE = 0; //reset pwm_cnt to 1
	reg_PWM1_EN_LANE = 1; 
	reg_TIMER_2_SEL_LANE_1_0 = 0x01;	//use PWM1 1u unit timer
	
	//set_ctle_accap(1); //slow
	reg_CLK_RXACCAP_SEL_LANE_1_0 = 1; //use REFCLK
	reg_FFE_PULSE_DIV_LANE_2_0 = 0; //HR: Zhendong recommanded for leakage. //2;
    cal_half_code();	

	if(	rx_init_done==1 ) {
	if(dfe_dis==0) {
		dfe_hardware_cont_run();		
		#if(tag_edge_sampler_normal_en == 1) 
		save_sampler_edge();
		#endif
	}
	}
}

