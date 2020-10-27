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
	
	reg_RX_INIT_DONE_LANE = 0; //??
	dfe_hardware_cont_stop();

	#if 1
	//dfe tap clear
	/*DMASEL = DMA1; 
	DMAM0 = 0x64; //10100100
	DMAM1 = 0x1f;
	DMAS2 = 0; DMAT2 = 0; DMAC2 = 0;
	DMASA = (uint16_t )&DFE_CONTROL_0;
	DMATA = (uint16_t )&DFE_FEXT_EVEN_REG0;
	DMAC = sizeof(Status_dfe_sm_t) - 1;
	DMASEL = 0x81; 
	DFE_FEN_EVEN_REG.VAL = 0xffffffff;
	DFE_FEN_ODD_REG.VAL = 0xffffffff;
	DFE_FEN_EVEN_REG.VAL = 0;
	DFE_FEN_ODD_REG.VAL = 0;
	*/
	//todo:load cal_phase
	//phase_update(0x1f); //1e -> 21
	//cdr_phase_update(cal_phase); 
	
	//reset dfe/dtl
	reg_SEL_MU_F_LANE = 0; reg_ANA_RX_SEL_MU_F_LANE = 0;
	reg_RESET_DTL_LANE = 1;	
	CKCON = 0x07 ; //MCU WAIT time the slowest
	reg_RESET_DFE_LANE = 1;
	CKCON = 0x00 ; //MCU WAIT time setting back to normal.
	reg_RESET_DTL_LANE = 0;	
	reg_RESET_DFE_LANE = 0;
    reg_ANA_REG_DFEE_RST_LANE = 1;
    reg_ANA_REG_DFEO_RST_LANE = 1;
    reg_ANA_REG_DFEE_RST_LANE = 0;
    reg_ANA_REG_DFEO_RST_LANE = 0;

	//todo: dtl
	short_delay();
	reg_SEL_MU_F_LANE = 1; reg_ANA_RX_SEL_MU_F_LANE = 1;
	
    sampler_load_reset();	// Restore sampler calibration result

	//todo: use cds
	//cdr_dfe_init();
    if(dfe_dis) {
        reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0;
        reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0;
        reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;
    } else if(reg_DFE_FULL_RATE_MODE_LANE) {
        reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0x55;
        reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0x55;
        reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;
    } else {
        reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0xff;
        reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0xff;
        reg_DFE_UPDATE_F_EN_LANE_5_0 = 0x3f;
    }
	reg_DFE_COARSE_STEP_EN_LANE = 0; reg_DFE_FINE_STEP_EN_LANE = 1;
	reg_DFE_F0B_MODE_LANE = 0;
	reg_DFE_F0D_MODE_LANE = 0;
	reg_DFE_UPDATE_DC_EN_LANE = 0;
	
	dfe_fsm_run(16,1); //dfe_fsm_run();
	reg_DFE_COARSE_STEP_EN_LANE = 0; reg_DFE_FINE_STEP_EN_LANE = 0;
	
	//load train_phase
	//cdr_phase_update(train_phase_os); 
	#else
    cds = cds_table[CDS_FASTACQ];
	cdr_state = TRAIN_ON;
    cdr_dfe_scheme();
	#endif
	
	reg_RX_INIT_DONE_LANE = 1; //??
	
	//next stage
	timeout2 = 1;
	timeout = 1; 
	tempc_step_state = 0; //	//reset tempc step state
	pllcal_first_time = 1;
	
	if( lnx_CKFW_EN_LANE ) {
		reg_ANA_RSVD6_LANE_7_0 = 0xe0; //use ckfw
		reg_FFE_PULSE_DIV_LANE_2_0 = 0;
	}	
	else {
		reg_ANA_RSVD6_LANE_7_0 = 0xe8; //use REFCLK
		reg_FFE_PULSE_DIV_LANE_2_0 = 5;
	}	

	dfe_hardware_cont_run();
	
	#if(tag_edge_sampler_normal_en == 1) 
	save_sampler_edge();
	#endif

	reg_DFE_TAP_SIGN_MODE_LANE = 1;

	do_rxinit = 0; //avoid duplicate
	
	PHY_STATUS = ST_NORMAL;

}

