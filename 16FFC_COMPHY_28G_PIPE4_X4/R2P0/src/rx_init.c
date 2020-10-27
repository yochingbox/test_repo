/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file train_if.c
* \purpose RX_Init module
* \History
*	11/21/2015 Heejeong Ryu		Initial 
*/
#include "common.h"

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

void RX_Init(void) {
	
	uint8_t pol_swch_time_l, pol_swch_time_h;

	reg_RX_INIT_DONE_LANE = 0; //??
	//dfe_hardware_cont_stop();
	reg_DFE_ADAPT_CONT_LANE = 0;
	reg_DFE_START_LANE = 0;

	if(dfe_dis==0) cdr_dfe_init();
	ctrl_cdr_phase_on = 0;
	pol_swch_time_l = pol_swch_time_7_0; pol_swch_time_h = pol_swch_time_9_8;		
	pol_swch_time_7_0 = 0; pol_swch_time_9_8 = 0;				
	#if tag_RX_FAST_ACQ_EN
    cds_tb = cds_table[CDS_FASTACQ];
	#else
    cds_tb = cds_table[CDS_RXINIT];
	#endif
	cdr_state = TRAIN_ON;
    cdr_dfe_scheme();
	pol_swch_time_7_0 = pol_swch_time_l; pol_swch_time_9_8 = pol_swch_time_h;	//restore			
	
	reg_RX_INIT_DONE_LANE = 1; //??
	
	//next stage
	timeout2 = 1;
	timeout = 1; 
	tempc_step_state = 0; //	//reset tempc step state
	pllcal_first_time = 1;
	reg_PWM2_EN_LANE = 0; 
	reg_PWM1_EN_LANE = 0; //reset pwm_cnt to 1
	reg_PWM1_EN_LANE = 1; 
	reg_TIMER_2_SEL_LANE_1_0 = 0x01;	//use PWM1 1u unit timer
	
	if( lnx_CKFW_EN_LANE ) {
		set_accap_sel(ACCAP_CKFW);
		reg_FFE_PULSE_DIV_LANE_2_0 = 0;
	}	
	else {
		set_accap_sel(ACCAP_REFCLK);
		reg_FFE_PULSE_DIV_LANE_2_0 = 5;
	}	

	if(dfe_dis==0) {
		dfe_hardware_cont_run();		
		#if(tag_edge_sampler_normal_en == 1) 
		save_sampler_edge();
		#endif
	}

	//reg_DFE_TAP_SIGN_MODE_LANE = 1;

	do_rxinit = 0; //avoid duplicate
	
	PHY_STATUS = ST_NORMAL;

}

