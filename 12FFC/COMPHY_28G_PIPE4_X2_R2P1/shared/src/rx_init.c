/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file train_if.c
* \purpose RX_Init module
* \History
*	11/21/2015 Heejeong Ryu		Initial 
*/
#include "common.h"

#ifndef _28G_X1
#ifdef USE_BANKING
#pragma codeseg BANK1
#endif

#endif //_28G_X1

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

void RX_Init(void) RXINIT_BANK {
	
	if(do_rxinit || cmx_AUTO_RX_INIT_EN) {
	reg_RX_INIT_DONE_LANE = 0; //??
	reg_INT_RX_INIT_RISE_ISR_LANE = 0;
	//dfe_hardware_cont_stop();
	reg_DFE_ADAPT_CONT_LANE = 0;
	reg_DFE_START_LANE = 0;

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
	
	//if(phy_mode != SATA) rxinit_4_spdchg_en = 1;
	if(rxinit_4_spdchg_en) {
		#ifdef _28G_X2
		reg_DFE_INIT_SEL_LANE = 0; //load from cal
		#endif
		CKCON = 0x07 ; //MCU WAIT time the slowest
		reg_RESET_DFE_LANE = 1;
		CKCON = 0x00 ; //MCU WAIT time setting back to normal.
		reg_RESET_DFE_LANE = 0;
		//reg_ANA_REG_DFEE_RST_LANE = 1;
		//reg_ANA_REG_DFEO_RST_LANE = 1;
		//reg_ANA_REG_DFEE_RST_LANE = 0;
		//reg_ANA_REG_DFEO_RST_LANE = 0;	
		
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

void pre_normal_process(void) RXINIT_BANK {

	//reg_MCU_DEBUG0_LANE_7_0 = 0x21;
	
	// restart normal process
	timeout2 = 1;
	timeout = 1; 
	reg_PWM2_EN_LANE = 0; 
	reg_PWM1_EN_LANE = 0; //reset pwm_cnt to 1
	reg_PWM1_EN_LANE = 1; 
	reg_TIMER_2_SEL_LANE_1_0 = 0x01;	//use PWM1 1u unit timer

	if(	rx_init_done==1 ) {
		
	#ifdef _PCIE_USB_BUILD
        if(phy_mode==PCIE) {
			
            reg_CLK_RXACCAP_SEL_LANE_1_0  = 2;
			
			if(gen_rx==3) 
				reg_FFE_PULSE_DIV_LANE_2_0 = 3; 
			else 
				reg_FFE_PULSE_DIV_LANE_2_0 = 2;
       }
		else 
		set_ctle_accap(1); //slow
	#else 	
	#ifndef SUPPORT_FFE_PULSE_DIV_VAL
		set_ctle_accap(1); //slow
	#else	
		//reg_CLK_RXACCAP_SEL_LANE_1_0 = 1; //use REFCLK
		reg_CLK_RXACCAP_SEL_LANE_1_0 = 2; //use DMUX //recommand by TSB
		//#ifdef SUPPORT_SASGEN4_PS_MISDETECT_FIX
		//	reg_FFE_PULSE_DIV_LANE_2_0 = 4; 
		//#endif
		if(gen_rx == 2)	
			reg_FFE_PULSE_DIV_LANE_2_0 = cmx_NORMAL_FFE_PULSE_DIV_GEN3_2_0; //3
		else if(gen_rx == 3)	
			reg_FFE_PULSE_DIV_LANE_2_0 = cmx_NORMAL_FFE_PULSE_DIV_GEN4_2_0; //3
		else if(gen_rx == 4)	
			reg_FFE_PULSE_DIV_LANE_2_0 = cmx_NORMAL_FFE_PULSE_DIV_GEN5_2_0; //4
		else 
			reg_FFE_PULSE_DIV_LANE_2_0 = cmx_NORMAL_FFE_PULSE_DIV_2_0; //2; 
	#endif //SUPPORT_FFE_PULSE_DIV_VAL
	#endif //_PCIE_USB_BUILD	
		cal_half_code();	
	
		if(dfe_dis==0) {
			#ifndef SUPPORT_SMPLR_INTEVAL_EQ_EN
			dfe_hardware_cont_run();		
			#else
			dfe_hardware_cont_run_ram();
			#endif
			#if(tag_edge_sampler_normal_en == 1) 
			save_sampler_edge();
			#endif
		}
	}

	//no need to be here!
	//if(phy_mode == PCIE && (gen_rx==1 || gen_rx==0) && ((TRAIN_CONTROL_9.BT.B1 & (0x01<<gen_rx)) == (0x01<<gen_rx)) ) {
	//	UPHY14_TRX_ANAREG_TOP_128.BT.B0 = rc_save[gen_rx][1]; //ffe_cap1/res1
	//	UPHY14_TRX_ANAREG_BOT_0.BT.B0   = rc_save[gen_rx][2]; //ffe_cap2/res2/E
	//	UPHY14_TRX_ANAREG_TOP_129.BT.B0 = rc_save[gen_rx][3]; //ffe_cap2/res2/O
	//}
	
}

#ifdef SUPPORT_SMPLR_INTEVAL_EQ_EN
void dfe_hardware_cont_run_ram(void) RXINIT_BANK {//// hardware cont run

	if(cmx_TRAIN_SIM_EN) return;
	if(reg_DFE_ADAPT_CONT_LANE) return;
	if( dfe_dis == 1 ) return;	
	if(tag_DFE_ADAPT_NORMAL_SOFT_CONT_EN || lnx_DFE_ADAPT_NORMAL_FORCE_SKIP_LANE ) return;
	
	dfe_load_type(1); 	
	pol_table_loop_num_1_0 = 2; pol_table_loop_num_9_2 = 5; //1  -> 0x16 
	enable_all_tap_adapt();		
	reg_DFE_UPDATE_EN_LANE_15_0_b0 &= 0xfd;
	ofst_en = 1; 
	// DFE feedback setting
	data_slic_fb_mode = 0;
	f1p_f1n_fb_mode = 0;
	f0_fb_mode = 0;
	
	adapt_data_en = 1;
	adapt_slicer_en = 1;
    set_slicer_data_sampler_adapt(BOTH_SMPL);											   

	if(!cmx_DFE_DC_INTERVAL_EQ_EN) {
		reg_DFE_ADAPT_CONT_LANE = 1;

		reg_DFE_START_LANE = 0;
		reg_DFE_START_LANE = 1;
	}
	else {
		timeout2_start((uint16_t)100); //10000//10msec (1usec uint)	 
	}	
	
	if(lnx_MAXEO_ADAPT_NORMAL_MODE_EN_LANE) { 
		reg_DFE_MMSE_MODE_LANE = MAXEO_ADAPT_MODE;	
		reg_DFE_MAXEO_LOW_MODE_LANE = 1;		
		//delay01(100);	
		f0d_en = 1;		
	}

}
#endif

