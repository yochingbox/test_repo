/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file train_if.c
* \purpose RX_Init module
* \History
*	11/21/2015 Heejeong Ryu		Initial 
*/
#include "common.h"

//#ifdef USE_BANKING
//#pragma codeseg BANK1
//#endif

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

#ifdef _PCIE_USB_BUILD
//void time_delay_1msec(void) {
//	uint16_t t;
//	
//	t = 0;
//	do {	
//		short_delay(); //100nsec
//	} while(t++<(cmx_RXINIT_DELAY_ENTER_15_0)); //625); //5000); //10000);	
//}	
//
void RX_Init(void) {
	
	int8_t i;
	
	if(do_rxinit || cmx_AUTO_RX_INIT_EN) {		
	reg_RX_INIT_DONE_LANE = 0; //??
	lnx_RX_INIT_DONE_INT_LANE = 0;
	reg_INT_RX_INIT_RISE_ISR_LANE = 0;
	//dfe_hardware_cont_stop();
	reg_DFE_ADAPT_CONT_LANE = 0;
	reg_DFE_START_LANE = 0;

	#ifdef SUPPORT_L1EXT_RXFOFFS
	reg_REG_SQ_DET_LANE = 1; reg_REG_SQUELCH_PLOOP_ON_LANE = 0; reg_INT_SQ_LPF_EN_LANE = 0; reg_ANA_RX_SQ_OUT_FM_REG_LANE = 1; reg_ANA_RX_SQ_OUT_LANE = 1;		
	reg_RESET_DTL_SYNC_LANE = 1; 
	reg_DTL_FLOOP_EN_LANE  = 0;
	#endif
	
	//while(reg_PIN_RX_SQ_OUT_LPF_RD_LANE || reg_PIN_RX_SQ_OUT_LPF_RD_LANE);

	//reg_DTL_CLK_OFF_LANE = 0; //patch
	//time_delay_1msec();
	reg_DTL_FLOOP_FREEZE_LANE = 0;
	
	#ifndef SUPPORT_RX_INIT_USE_CDS
	//reset dfe/dtl
	reg_SEL_MU_F_LANE = 0; 
	reg_ANA_RX_SEL_MU_F_LANE = 0;
	#ifndef _28G_X2
    // Work around reset_dtl glitch in floop		
    reg_DTL_FLOOP_EN_LANE  = 0;
    reg_RESET_DTL_LANE = 1; 
    reg_RESET_DTL_LANE = 0; 
    reg_DTL_FLOOP_EN_LANE  = 1;
	#else
    //reg_RESET_DTL_LANE = 0; 	
    //reg_RESET_DTL_SYNC_LANE = 0; 	
    //reg_DTL_FLOOP_EN_LANE  = 1;
	#endif
	
	if(rxinit_4_spdchg_en) {
		#ifdef _28G_X2
		reg_DFE_INIT_SEL_LANE = 0; //load from cal
		#endif
		CKCON = 0x07 ; //MCU WAIT time the slowest
		reg_RESET_DFE_LANE = 1;
		CKCON = 0x00 ; //MCU WAIT time setting back to normal.
		reg_RESET_DFE_LANE = 0;
		reg_ANA_REG_DFEE_RST_LANE = 1;
		reg_ANA_REG_DFEO_RST_LANE = 1;
		reg_ANA_REG_DFEE_RST_LANE = 0;
		reg_ANA_REG_DFEO_RST_LANE = 0;	
    
		#ifdef _28G_X2
		if(reg_INT_DFE_EN_LANE==0) {  
			reg_DFE_EN_FM_REG_LANE = 1; reg_DFE_EN_LANE = 1; 
		}	
		dc_load(0);
		reg_DFE_EN_FM_REG_LANE = 0; 		
		#else
		sampler_load_reset();
		#endif
		
	}
		
	delay01(20);
	
	reg_SEL_MU_F_LANE = 1; 
	reg_ANA_RX_SEL_MU_F_LANE = 1;
	
	//Get ready for train
	#ifdef _28G_X2
	reg_PHY_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 1;
	reg_PHY_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 0;
	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.VAL = 0x0004030b; 
	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.VAL = 0;	
	RX_LANE_INTERRUPT_REG1.BT.B3 = 0x60;
	RX_LANE_INTERRUPT_REG1.BT.B3 = 0;	
	#else
	delay01(10);  		
	#endif

	//delay01(20); //30 	
	
	//delay01((int16_t)cmx_RXINIT_DONE_DELAY_15_0); 

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

	rx_init_done = 1;

	//short calibration filter	
	PLLAMP_CAL_STEP_SIZE = 1;      	 
	TXDCC_PDIV_CAL_STEP_SIZE = 1;  	
	TXDCC_CAL_STEP_SIZE = 1;       	
	TXDETECT_CAL_STEP_SIZE = 1;    	
	//RXDLL_CAL_STEP_SIZE = 1;     not used  	
	// EOM_DLL_CAL_STEP_SIZE = 1;   not used  	
		
	pre_normal_process();		

	#ifdef _PCIE_USB_BUILD
	
	#ifdef SUPPORT_CONT_CAL_RXINIT
	i = cmx_RXINIT_CONT_CAL_LOOP_CNT_7_0;
	while (i-->0) {
		Cont_Cal_Power_state(); //Cal_Cont();
	}	

		//restore calibration filter	
		PLLDCC_CAL_STEP_SIZE = 0x20;
		RXDCC_DATA_CAL_STEP_SIZE = 0x20;
		RXDCC_DLL_CAL_STEP_SIZE = 0x20;
		cmx_TEMPC_STEP_CTRL_2_0 = 2; 
		PLLAMP_CAL_STEP_SIZE = 0x20;      	 
		TXDCC_PDIV_CAL_STEP_SIZE = 0x20;  	
		TXDCC_CAL_STEP_SIZE = 0x20;       	
		TXDETECT_CAL_STEP_SIZE = 0x20;    	
		//RXDLL_CAL_STEP_SIZE = 0x20;   //not used    	
		ALIGN90_CAL_STEP_SIZE = 0x20;     	
	#endif //SUPPORT_CONT_CAL_RXINIT
	
		//history log
		if(gen_rx==2) {
			TRAIN_CONTROL_15.BT.B3 |= 0x02;  
		}
		else if(gen_rx==3) {
			TRAIN_CONTROL_16.BT.B3 |= 0x02;	  
		}
		#endif //_PCIE_USB_BUILD
		
		do_rxinit = 0; //avoid duplicate
		rxinit_4_spdchg_en = 0;
		

		#ifdef SUPPORT_L1EXT_W_DTX
		i = 0;
		if(mcuid== master_mcu || 
		 ( mcuid!= master_mcu && ((master_mcu==MCU_LANE0 && SYNC_STATUS_LANE0_EN_READ==0) || 
			(master_mcu==MCU_LANE1 && SYNC_STATUS_LANE1_EN_READ==0))))	
		{
			reg_DTX_CLK_OFF = 1;			
			i = 1;	
		}		
		else while(reg_DTX_CLK_OFF==0);
		 
		short_delay();
		
		reg_INIT_TXFOFFS_9_0_b0 = 0;
		reg_INIT_TXFOFFS_9_0_b1 = 0;
		
		short_delay();
		if(i) reg_DTX_CLK_OFF = 0;
		#endif
		
		lnx_RX_INIT_DONE_INT_LANE = 1;
		
		if(cmx_RXINIT_DONE_DELAY_15_0 == 0 ) {
			#ifdef SUPPORT_L1EXT_RXFOFFS
			reg_REG_SQ_DET_LANE = 0; reg_REG_SQUELCH_PLOOP_ON_LANE = 1; reg_INT_SQ_LPF_EN_LANE = 1; reg_ANA_RX_SQ_OUT_FM_REG_LANE = 0; reg_ANA_RX_SQ_OUT_LANE = 0;		
			reg_RESET_DTL_SYNC_LANE = 0; 
			reg_DTL_FLOOP_EN_LANE  = 1;
			#endif
			
			reg_RX_INIT_DONE_LANE = 1; 			
		}	
		else {
			//timer3 enable
			reg_INT4_TIMER3_INT_EN_LANE = 1;
			reg_TIMER_3_EN_LANE = 0;
			reg_TIMER_3_EN_LANE = 1;
			
		}	
	}	

	//next stage
	
	//tempc_step_state = 0; //??	//reset tempc step state
	//pllcal_first_time = 1;

	//reg_DFE_TAP_SIGN_MODE_LANE = 1;

	PHY_STATUS = ST_NORMAL;
	
}

void pre_normal_process(void)  {

	// restart normal process
	if(rxinit_4_spdchg_en) {
		timeout2 = 1;
		timeout = 1; 
		reg_PWM2_EN_LANE = 0; 
		reg_PWM1_EN_LANE = 0; //reset pwm_cnt to 1
		reg_PWM1_EN_LANE = 1; 
		reg_TIMER_2_SEL_LANE_1_0 = 0x01;	//use PWM1 1u unit timer
	}	
	
	//if(	rx_init_done==1 ) {
		set_ctle_accap(1); //slow
		reg_FFE_PULSE_DIV_LANE_2_0 = 2;
		cal_half_code();	
	
		if(dfe_dis==0) {
			dfe_hardware_cont_run();		
			#if(tag_edge_sampler_normal_en == 1) 
			save_sampler_edge();
			#endif
		}
	//}	
	
}

#else 

void RX_Init(void)  {
	
	if(do_rxinit || cmx_AUTO_RX_INIT_EN) {
	reg_RX_INIT_DONE_LANE = 0; //??
	reg_INT_RX_INIT_RISE_ISR_LANE = 0;
	//dfe_hardware_cont_stop();
	reg_DFE_ADAPT_CONT_LANE = 0;
	reg_DFE_START_LANE = 0;

	reg_ANA_TX_IDLE_FORCE_LANE = 0;
	reg_ANA_TX_IDLE_LANE = 0; //3.125G Ring Lane doesn't clear??
	
	#ifndef SUPPORT_RX_INIT_USE_CDS
	//reset dfe/dtl
	reg_SEL_MU_F_LANE = 0; 
	reg_ANA_RX_SEL_MU_F_LANE = 0;
	#ifndef _28G_X2
    // Work around reset_dtl glitch in floop		
    reg_DTL_FLOOP_EN_LANE  = 0;
    reg_RESET_DTL_LANE = 1; 
    reg_RESET_DTL_LANE = 0; 
    reg_DTL_FLOOP_EN_LANE  = 1;
	#else
    reg_RESET_DTL_SYNC_LANE = 1; 
    reg_RESET_DTL_SYNC_LANE = 0; 	
	#endif
	
	if(phy_mode != SATA) rxinit_4_spdchg_en = 1;
	if(rxinit_4_spdchg_en) {
		#ifdef _28G_X2
		//reg_DFE_INIT_SEL_LANE = 0; //load from cal
		#endif
		CKCON = 0x07 ; //MCU WAIT time the slowest
		reg_RESET_DFE_LANE = 1;
		CKCON = 0x00 ; //MCU WAIT time setting back to normal.
		reg_RESET_DFE_LANE = 0;
		reg_ANA_REG_DFEE_RST_LANE = 1;
		reg_ANA_REG_DFEO_RST_LANE = 1;
		reg_ANA_REG_DFEE_RST_LANE = 0;
		reg_ANA_REG_DFEO_RST_LANE = 0;	
		#ifdef _28G_X2
		if(reg_INT_DFE_EN_LANE==0) {  
			reg_DFE_EN_FM_REG_LANE = 1; reg_DFE_EN_LANE = 1; 
		}	
		dc_load(0);
		reg_DFE_EN_FM_REG_LANE = 0; 		
		#else
		sampler_load_reset();
		#endif
		
		delay01(2000);
	}
	else	
		delay01(20); 
		
	reg_SEL_MU_F_LANE = 1; 
	reg_ANA_RX_SEL_MU_F_LANE = 1;
	
	//Get ready for train
	#ifdef _28G_X2
	reg_PHY_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 1;
	reg_PHY_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 0;
	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.VAL = 0x0004030b; 
	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.VAL = 0;	
	RX_LANE_INTERRUPT_REG1.BT.B3 = 0x60;
	RX_LANE_INTERRUPT_REG1.BT.B3 = 0;	
	#else
	delay01(10);  		
	#endif

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

	//reg_RX_INIT_DONE_LANE = 1; //??

}

void pre_normal_process(void)  {

	//reg_MCU_DEBUG0_LANE_7_0 = 0x21;
	
	// restart normal process
	timeout2 = 1;
	timeout = 1; 
	reg_PWM2_EN_LANE = 0; 
	reg_PWM1_EN_LANE = 0; //reset pwm_cnt to 1
	reg_PWM1_EN_LANE = 1; 
	reg_TIMER_2_SEL_LANE_1_0 = 0x01;	//use PWM1 1u unit timer
	
	set_ctle_accap(1); //slow
	reg_FFE_PULSE_DIV_LANE_2_0 = 2;
	cal_half_code();	

	if(dfe_dis==0) {
		dfe_hardware_cont_run();		
		#if(tag_edge_sampler_normal_en == 1) 
		save_sampler_edge();
		#endif
	}

}

#endif	

#ifdef SUPPORT_SMPLR_INTEVAL_EQ_EN
void dfe_sampler_interval_eq(void)  {
	uint8_t saved_lpnum_l,  saved_lpnum_h, i,j;
	uint16_t lpcnt;
	bool saved_f1_dc_adj;
	
	if(rx_init_done==0 || timeout2==0) return;
	if( lnx_DFE_CORE_BYPASS_LANE==1 || dfe_dis == 1 || pin_dfe_en==0 || eom_ext_mode==1) return;
	timeout_stop2;
	
	saved_lpnum_l = reg_DFE_ADAPT_LPNUM_LANE_9_0_b0; saved_lpnum_h = reg_DFE_ADAPT_LPNUM_LANE_9_0_b1;
	lpcnt = saved_lpnum_h; lpcnt<<=4; lpcnt+=saved_lpnum_l;
	saved_f1_dc_adj = reg_DFE_ADAPT_ADJ_F1_DC_EN_LANE;
	
	reg_DFE_ADAPT_LPNUM_LANE_9_0_b1 = 0;
	reg_DFE_ADAPT_LPNUM_LANE_9_0_b0 = 0;
	reg_DFE_ADAPT_ADJ_F1_DC_EN_LANE = 0;
	
	while(lpcnt-->0) {
		for(i= 0;i<4;i++){ 
			reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 1<<i; 
			reg_DFE_START_LANE = 1; 
			j=50;
			while(j-->0) {
				if(reg_DFE_DONE_LANE) {
					reg_DFE_START_LANE = 0; 
				}	
				delay01(10);
				if(reg_DFE_START_LANE==0) break;
			}
			
			if(reg_DFE_START_LANE) { //dfe hang for 50usec?
				reg_DFE_START_LANE = 0;
				CKCON = 0x07; 			// MCU WAIT time the slowest
				reg_RESET_DFE_LANE = 1;
				reg_RESET_DFE_LANE = 0;
				CKCON = 0x00; 			// MCU WAIT time setting back to normal.
				reg_ANA_REG_DFEE_RST_LANE = 1;
				reg_ANA_REG_DFEO_RST_LANE = 1;
				reg_ANA_REG_DFEE_RST_LANE = 0;
				reg_ANA_REG_DFEO_RST_LANE = 0;
				dfe_load_type(1);
				dc_load(1); 				
				delay01(10);
				lnx_CDS_ERR_CODE_LANE_7_0 |= 0x10;
			}	
		}		
	}

	reg_DFE_ADAPT_LPNUM_LANE_9_0_b0 = saved_lpnum_l; 
	reg_DFE_ADAPT_LPNUM_LANE_9_0_b1 = saved_lpnum_h;
	reg_DFE_ADAPT_ADJ_F1_DC_EN_LANE = saved_f1_dc_adj;
	
	if(force_exit_cal) {
		timeout2_start((uint16_t)100); //refresh timer 10msec (1usec uint) 	
	}
	else {	
		timeout2_start((uint16_t)10000); //refresh timer 10msec (1usec uint) 	
	}
}

#endif	



