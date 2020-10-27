/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file train_if.c
* \purpose RX_Init module
* \History
*	11/21/2015 Heejeong Ryu		Initial 
*/
#include "common.h"
//#include "cdr_dfe_scheme.h"
//#include "ph_ctrl.h"

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
#if 0 //def _56G_R1P0
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
	reg_RESET_DTL_LANE = 1;	
	reg_RESET_DFE_LANE = 1;
	reg_RESET_DTL_LANE = 0;	
	reg_RESET_DFE_LANE = 0;
    reg_ANA_REG_DFEE_RST_LANE = 1;
    reg_ANA_REG_DFEO_RST_LANE = 1;
    reg_ANA_REG_DFEE_RST_LANE = 0;
    reg_ANA_REG_DFEO_RST_LANE = 0;

	
	//todo: dtl
	reg_SEL_MU_F_LANE = 0; reg_ANA_RX_SEL_MU_F_LANE = 0;
	//short_delay();
	reg_SEL_MU_F_LANE = 1; reg_ANA_RX_SEL_MU_F_LANE = 1;
	
    //sampler_load_reset();	// ToDo: clarify whether it is needed. Restore sampler calibration result

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
	
	dfe_fsm_run();
	reg_DFE_COARSE_STEP_EN_LANE = 0; reg_DFE_FINE_STEP_EN_LANE = 0;
	
	//load train_phase
	//cdr_phase_update(train_phase_os); 
	#else
    cds = cds_table[CDS_FASTACQ];
	cdr_state = TRAIN_ON;
    cdr_dfe_scheme();
	
	//this should be temp. need to remove after full CDS.
	sampler_load_reset();
	
	#endif
	
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
	
	dfe_hardware_cont_run();
	
	#if(tag_edge_sampler_normal_en == 1) 
    {	
		sampler_sel(OFST_F1P_D_E);
		f1p_e_old = get_sampler();
		sampler_sel(OFST_F1P_D_O);
		f1p_o_old = get_sampler();
	}
	#endif

	//reg_DFE_TAP_SIGN_MODE_LANE = 1;
#else
    reg_SEL_MU_F_LANE = 0; reg_ANA_RX_SEL_MU_F_LANE = 0;
    delay(T_2us);
    reg_RESET_DTL_LANE = 1;
    //CKCON = 0x07 ; //MCU WAIT time the slowest
    //CKCON = 0x00 ; //MCU WAIT time setting back to normal.
    reg_RESET_DTL_LANE = 0;

    reg_SEL_MU_F_LANE = 1; reg_ANA_RX_SEL_MU_F_LANE = 1;
    delay(Tus);
    reg_RX_INIT_DONE_LANE = 1; //??
#endif

    do_rxinit = 0; //avoid duplicate

	PHY_STATUS = ST_NORMAL;

}

