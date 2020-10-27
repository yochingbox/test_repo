/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file sampler_cal.c
* \purpose Sampler calibration
* \History
*	10/15/2015 Heejeong Ryu		Initial 
*/
#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg BANK2
#endif

/**
 * \module Sampler Calibration
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input:  VOFF_POS
 *    Output: 
*/
#if 0
#define SMPLR_CAL_EN 			reg_SMPLR_CAL_EN_LANE
#define SAMPLER_CAL_SEL 		reg_SMPLR_CAL_SEL_LANE_2_0
#define DATA_SLICER_PATH_SWITCH_E reg_ANA_RX_DATA_SLICER_PATH_SWITCH_E_LANE 
#define DATA_SLICER_PATH_SWITCH_O reg_ANA_RX_DATA_SLICER_PATH_SWITCH_O_LANE 


#define DFE_F1_POL_EN_D 		reg_ANA_RX_DFE_F1_POL_EN_D_LANE  
#define DFE_F1_POL_EN_S 		reg_ANA_RX_DFE_F1_POL_EN_S_LANE  
#define DFE_F1_POL_D 			reg_ANA_RX_DFE_F1_POL_D_LANE
#define DFE_F1_POL_S 			reg_ANA_RX_DFE_F1_POL_S_LANE
#define PU_DFE 					reg_ANA_PU_DFE_LANE 
#define PU_LB 					reg_PU_LB_LANE



#define OFST_EDGE_SIGN_E 		reg_OFST_EDGE_SIGN_E_LANE
#define OFST_EDGE_POS_E 		reg_OFST_EDGE_POS_E_LANE_4_0
#define OFST_EDGE_NEG_E 		reg_OFST_EDGE_NEG_E_LANE_4_0
#define OFST_EDGE_SIGN_O 		reg_OFST_EDGE_SIGN_O_LANE
#define OFST_EDGE_POS_O 		reg_OFST_EDGE_POS_O_LANE_4_0
#define OFST_EDGE_NEG_O 		reg_OFST_EDGE_NEG_O_LANE_4_0
#define OFST_RES 				reg_OFST_RES_LANE_1_0
#define PU_OS 					reg_PU_OS_LANE
#define PU_VCM 					reg_PU_VCM_LANE
#define EOM_EN_D 				reg_EOM_EN_D_LANE
#define EOM_EN_S 				reg_EOM_EN_S_LANE
#define VOFF_POS 				reg_ANA_RX_VOFF_POS_RD_LANE 

#define	EN_DFE_VREF				reg_EN_DFE_VREF_LANE

#define	EN_DFE_F0				reg_EN_DFE_F0_LANE
#define EN_DFE_F1TO2			reg_EN_DFE_F1TO2_LANE
#define	EN_DFE_F1P5				reg_EN_DFE_F1P5_LANE
#define	EN_DFE_F3TO7			reg_EN_DFE_F3TO7_LANE
#define	EN_DFE_F8TO10			reg_EN_DFE_F8TO10_LANE
#define	EN_DFE_F11TO15			reg_EN_DFE_F11TO15_LANE
#define	EN_DFE_FLOATING			reg_EN_DFE_FLOATING_LANE
#define PATH_DISABLE_S			reg_PATH_DISABLE_S_LANE
#define PATH_DISABLE_D			reg_PATH_DISABLE_D_LANE
#define PATH_DISABLE_EDGE		reg_PATH_DISABLE_EDGE_LANE

#define PU_SMPLR_D_E			reg_PU_SMPLR_D_E_LANE_2_0
#define PU_SMPLR_D_O			reg_PU_SMPLR_D_O_LANE_2_0
#define PU_SMPLR_S_E			reg_PU_SMPLR_S_E_LANE_2_0
#define PU_SMPLR_S_O			reg_PU_SMPLR_S_O_LANE_2_0

#define	DFE_VREF_SIGN_BOT_E		reg_DFE_VREF_SIGN_BOT_E_LANE
#define	DFE_VREF_SIGN_MID_E		reg_DFE_VREF_SIGN_MID_E_LANE
#define	DFE_VREF_SIGN_BOT_O		reg_DFE_VREF_SIGN_BOT_O_LANE
#define	DFE_VREF_SIGN_MID_O		reg_DFE_VREF_SIGN_MID_O_LANE
#define	DFE_VREF_SIGN_TOP_E		reg_DFE_VREF_SIGN_TOP_E_LANE
#define	DFE_VREF_SIGN_TOP_O		reg_DFE_VREF_SIGN_TOP_O_LANE

#define	DFE_VREF_NEG_TOP_E		reg_DFE_VREF_NEG_TOP_E_LANE_4_0
#define	DFE_VREF_POS_TOP_E		reg_DFE_VREF_POS_TOP_E_LANE_4_0
#define	DFE_VREF_NEG_TOP_O		reg_DFE_VREF_NEG_TOP_O_LANE_4_0
#define	DFE_VREF_POS_TOP_O		reg_DFE_VREF_POS_TOP_O_LANE_4_0

#define	DFE_VREF_NEG_MID_E		reg_DFE_VREF_NEG_MID_E_LANE_4_0
#define	DFE_VREF_POS_MID_E		reg_DFE_VREF_POS_MID_E_LANE_4_0
#define	DFE_VREF_NEG_MID_O		reg_DFE_VREF_NEG_MID_O_LANE_4_0
#define	DFE_VREF_POS_MID_O		reg_DFE_VREF_POS_MID_O_LANE_4_0

#define	DFE_VREF_NEG_BOT_E		reg_DFE_VREF_NEG_BOT_E_LANE_4_0
#define	DFE_VREF_POS_BOT_E		reg_DFE_VREF_POS_BOT_E_LANE_4_0
#define	DFE_VREF_NEG_BOT_O		reg_DFE_VREF_NEG_BOT_O_LANE_4_0
#define	DFE_VREF_POS_BOT_O		reg_DFE_VREF_POS_BOT_O_LANE_4_0

#define ACCAP_DISABLE_RIGHT		reg_ACCAP_DISABLE_RIGHT_LANE
#define ACCAP_DISABLE_LEFT		reg_ACCAP_DISABLE_LEFT_LANE

#define	OFST_D_TOP_E			reg_OFST_D_TOP_E_LANE_5_0
#define	OFST_S_TOP_E			reg_OFST_S_TOP_E_LANE_5_0
#define OFST_D_TOP_O			reg_OFST_D_TOP_O_LANE_5_0
#define OFST_S_TOP_O			reg_OFST_S_TOP_O_LANE_5_0

#define OFST_D_MID_E			reg_OFST_D_MID_E_LANE_5_0
#define OFST_S_MID_E			reg_OFST_S_MID_E_LANE_5_0
#define OFST_D_MID_O			reg_OFST_D_MID_O_LANE_5_0
#define OFST_S_MID_O			reg_OFST_S_MID_O_LANE_5_0

#define OFST_D_BOT_E			reg_OFST_D_BOT_E_LANE_5_0
#define OFST_S_BOT_E			reg_OFST_S_BOT_E_LANE_5_0
#define OFST_D_BOT_O			reg_OFST_D_BOT_O_LANE_5_0
#define OFST_S_BOT_O			reg_OFST_S_BOT_O_LANE_5_0

/*#define	OFST_D_TOP_E			reg_OFST_D_TOP_E_LANE_5_0
#define	OFST_D_TOP_E			reg_OFST_D_TOP_E_LANE_5_0

#define	OFST_D_TOP_E			reg_OFST_D_TOP_E_LANE_5_0
#define	OFST_D_TOP_E			reg_OFST_D_TOP_E_LANE_5_0
#define	OFST_D_TOP_E			reg_OFST_D_TOP_E_LANE_5_0
#define	OFST_D_TOP_E			reg_OFST_D_TOP_E_LANE_5_0
#define	OFST_D_TOP_E			reg_OFST_D_TOP_E_LANE_5_0
#define	OFST_D_TOP_E			reg_OFST_D_TOP_E_LANE_5_0*/


#define smpl_size	4			//2/4/6/8
#define n_programmable			lnx_SAMPLER_SAMPLE_SIZE_LANE_7_0	//1/8/16/32/64

/*__code uint8_t r_training_bound_tb[] = {
    19, //dummy
	19, //31*0.6   //OFST_RES=0 //0.8,0.7,0.6,0.5
	22, //31*0.7   //OFST_RES=1
	25  //31*0.8   //OFST_RES=2
};*/

__code uint8_t r_training_bound_tb[] = {
	16, //31*0.5   //OFST_RES=0 //0.8,0.7,0.6,0.5
	31 //31*0.7   //OFST_RES=1
};

void sampler_init(void) BANKING_CTRL
{
	uint8_t i;

	PU_VCM = 1;
	PU_OS = 1;
	PU_LB = 0;
	PU_DFE = 1;
	EN_DFE_VREF = 1;
	EN_DFE_F0 = 0;
	EN_DFE_F1TO2 = 0;
	EN_DFE_F1P5 = 0;
	EN_DFE_F3TO7 = 0;
	EN_DFE_F8TO10 = 0;
	EN_DFE_F11TO15 = 0;
	EN_DFE_FLOATING = 0;

	EOM_EN_D = 0;
	EOM_EN_S = 0;
	EOM_EN_E = 0;
	PATH_DISABLE_S = 0;
	PATH_DISABLE_D = 0;
	PATH_DISABLE_EDGE = 0;

	PU_SMPLR_D_E = 7;
	PU_SMPLR_D_O = 7;
	PU_SMPLR_S_E = 7;
	PU_SMPLR_S_O = 7;

	OFST_RES = 0;
	OFST_D_TOP_E = 16;
	OFST_S_TOP_E = 16;
	OFST_D_TOP_O = 16;
	OFST_S_TOP_O = 16;

	OFST_D_MID_E = 16;
	OFST_S_MID_E = 16;
	OFST_D_MID_O = 16;
	OFST_S_MID_O = 16;

	OFST_D_BOT_E = 16;
	OFST_S_BOT_E = 16;
	OFST_D_BOT_O = 16;
	OFST_S_BOT_O = 16;

	OFST_EDGE_SIGN_E = 0;
	OFST_EDGE_SIGN_O = 0;
	OFST_EDGE_POS_E = 0;
	OFST_EDGE_NEG_E = 0;
	OFST_EDGE_POS_O = 0;
	OFST_EDGE_NEG_O = 0;

	DFE_VREF_SIGN_BOT_E = 0;
	DFE_VREF_SIGN_MID_E = 0;
	DFE_VREF_SIGN_TOP_E = 0;
	DFE_VREF_SIGN_BOT_O = 0;
	DFE_VREF_SIGN_MID_O = 0;
	DFE_VREF_SIGN_TOP_O = 0;

	DFE_VREF_NEG_TOP_E = 0;
	DFE_VREF_POS_TOP_E = 0;
	DFE_VREF_NEG_TOP_O = 0;
	DFE_VREF_POS_TOP_O = 0;

	DFE_VREF_NEG_MID_E = 0;
	DFE_VREF_POS_MID_E = 0;
	DFE_VREF_NEG_MID_O = 0;
	DFE_VREF_POS_MID_O = 0;

	DFE_VREF_NEG_BOT_E = 0;
	DFE_VREF_POS_BOT_E = 0;
	DFE_VREF_NEG_BOT_O = 0;
	DFE_VREF_POS_BOT_O = 0;

	ACCAP_DISABLE_RIGHT = 1;
	ACCAP_DISABLE_LEFT = 1;

}

void OFST_D_S_init(uint8_t dat) BANKING_CTRL
{
	OFST_D_TOP_E = (uint8_t)(0x20 | dat);
	OFST_S_TOP_E = (uint8_t)(0x20 | dat);
	OFST_D_TOP_O = (uint8_t)(0x20 | dat);
	OFST_S_TOP_O = (uint8_t)(0x20 | dat);

	OFST_D_MID_E = (uint8_t)(0x20 | dat);
	OFST_S_MID_E = (uint8_t)(0x20 | dat);
	OFST_D_MID_O = (uint8_t)(0x20 | dat);
	OFST_S_MID_O = (uint8_t)(0x20 | dat);

	OFST_D_BOT_E = (uint8_t)(0x20 | dat);
	OFST_S_BOT_E = (uint8_t)(0x20 | dat);
	OFST_D_BOT_O = (uint8_t)(0x20 | dat);
	OFST_S_BOT_O = (uint8_t)(0x20 | dat);

}
void OFST_EDGE_init(uint8_t dat) BANKING_CTRL {
	OFST_EDGE_POS_E = (uint8_t)dat;
	OFST_EDGE_NEG_E = (uint8_t)dat;
	OFST_EDGE_POS_O = (uint8_t)dat;
	OFST_EDGE_NEG_O = (uint8_t)dat;
}

#ifndef _56G_R1P0
void sampler_sel(uint8_t sw) BANKING_CTRL
{

	switch (sw) {
		case OFST_F1P_D_E:
			SAMPLER_CAL_SEL = 0;
			DFE_F1_POL_D = 1;
			SIGN_POS = (uint8_t*)&ANA_DFEE_REG_1E;
			NEG = (uint8_t*)&ANA_DFEE_REG_1F;
			break;
		case OFST_F1N_D_E:
			SAMPLER_CAL_SEL = 0;
			DFE_F1_POL_D = 0;
			SIGN_POS = (uint8_t*)&ANA_DFEE_REG_20;
			NEG = (uint8_t*)&ANA_DFEE_REG_21;
			break;
		case OFST_F1P_D_O:
			SAMPLER_CAL_SEL = 3;
			DFE_F1_POL_D = 1;
			SIGN_POS = (uint8_t*)&ANA_DFEO_REG_1E;
			NEG = (uint8_t*)&ANA_DFEO_REG_1F;
			break;
		case OFST_F1N_D_O:
			SAMPLER_CAL_SEL = 3;
			DFE_F1_POL_D = 0;
			SIGN_POS = (uint8_t*)&ANA_DFEO_REG_20;
			NEG = (uint8_t*)&ANA_DFEO_REG_21;
			break;
		case OFST_F1P_S_E:
			SAMPLER_CAL_SEL = 1;
			DFE_F1_POL_S = 1;
			SIGN_POS = (uint8_t*)&ANA_DFEE_REG_22;
			NEG = (uint8_t*)&ANA_DFEE_REG_23;
			break;
		case OFST_F1N_S_E:
			SAMPLER_CAL_SEL = 1;
			DFE_F1_POL_S = 0;
			SIGN_POS = (uint8_t*)&ANA_DFEE_REG_24;
			NEG = (uint8_t*)&ANA_DFEE_REG_25;
			break;
		case OFST_F1P_S_O:
			SAMPLER_CAL_SEL = 4;
			DFE_F1_POL_S = 1;
			SIGN_POS = (uint8_t*)&ANA_DFEO_REG_22;
			NEG = (uint8_t*)&ANA_DFEO_REG_23;
			break;
		case OFST_F1N_S_O:
			SAMPLER_CAL_SEL = 4;
			DFE_F1_POL_S = 0;
			SIGN_POS = (uint8_t*)&ANA_DFEO_REG_24;
			NEG = (uint8_t*)&ANA_DFEO_REG_25;
			break;
		case OFST_EDGE_E:
			SAMPLER_CAL_SEL = 2;
			SIGN_POS = (uint8_t*)&ANA_DFEE_REG_26;
			NEG = (uint8_t*)&ANA_DFEE_REG_27;
			break;
		case OFST_EDGE_O:
			SAMPLER_CAL_SEL = 5;
			SIGN_POS = (uint8_t*)&ANA_DFEO_REG_26;
			NEG = (uint8_t*)&ANA_DFEO_REG_27;
			break;
	}

	SAMPLER_CAL_SAVE = (uint8_t*)&CAL_SAVE_DATA4_LANE; SAMPLER_CAL_SAVE+=sw;
	//SAMPLER_TRAIN_SAVE = (uint8_t*)&TRAIN_SAVE_DATA1_LANE; SAMPLER_TRAIN_SAVE+=sw;
	
}
#else
void sampler_sel(uint8_t sw) BANKING_CTRL
{

	switch (sw) {
		case OFST_TOP_D_E:
			SAMPLER_CAL_SEL = 0;
			//DFE_F1_POL_D = 1;
			SIGN_POS = (uint8_t*)&DFEE_REG58;
			NEG = (uint8_t*)&DFEE_REG58;
			break;
		case OFST_MID_D_E:
			SAMPLER_CAL_SEL = 1;
			//DFE_F1_POL_D = 0;
			SIGN_POS = (uint8_t*)&DFEE_REG57;
			NEG = (uint8_t*)&DFEE_REG57;
			break;
		case OFST_BOT_D_E:
			SAMPLER_CAL_SEL = 2;
			//DFE_F1_POL_D = 1;
			SIGN_POS = (uint8_t*)&DFEE_REG56;
			NEG = (uint8_t*)&DFEE_REG56;
			break;
		case OFST_TOP_D_O:
			SAMPLER_CAL_SEL = 3;
			//DFE_F1_POL_D = 0;
			SIGN_POS = (uint8_t*)&DFEO_REG58;
			NEG = (uint8_t*)&DFEO_REG58;
			break;
		case OFST_MID_D_O:
			SAMPLER_CAL_SEL = 4;
			//DFE_F1_POL_S = 1;
			SIGN_POS = (uint8_t*)&DFEO_REG57;
			NEG = (uint8_t*)&DFEO_REG57;
			break;
		case OFST_BOT_D_O:
			SAMPLER_CAL_SEL = 5;
			//DFE_F1_POL_S = 0;
			SIGN_POS = (uint8_t*)&DFEO_REG56;
			NEG = (uint8_t*)&DFEO_REG56;
			break;
		case OFST_TOP_S_E:
			SAMPLER_CAL_SEL = 6;
			//DFE_F1_POL_S = 1;
			SIGN_POS = (uint8_t*)&DFEE_REG61;
			NEG = (uint8_t*)&DFEE_REG61;
			break;
		case OFST_MID_S_E:
			SAMPLER_CAL_SEL = 7;
			//DFE_F1_POL_S = 0;
			SIGN_POS = (uint8_t*)&DFEE_REG60;
			NEG = (uint8_t*)&DFEE_REG60;
			break;
		case OFST_BOT_S_E:
			SAMPLER_CAL_SEL = 8;
			//DFE_F1_POL_S = 0;
			SIGN_POS = (uint8_t*)&DFEE_REG59;
			NEG = (uint8_t*)&DFEE_REG59;
			break;

		case OFST_TOP_S_O:
			SAMPLER_CAL_SEL = 9;
			//DFE_F1_POL_S = 0;
			SIGN_POS = (uint8_t*)&DFEO_REG61;
			NEG = (uint8_t*)&DFEO_REG61;
			break;
		case OFST_MID_S_O:
			SAMPLER_CAL_SEL = 10;
			//DFE_F1_POL_S = 0;
			SIGN_POS = (uint8_t*)&DFEO_REG60;
			NEG = (uint8_t*)&DFEO_REG60;
			break;
		case OFST_BOT_S_O:
			SAMPLER_CAL_SEL = 11;
			//DFE_F1_POL_S = 0;
			SIGN_POS = (uint8_t*)&DFEO_REG59;
			NEG = (uint8_t*)&DFEO_REG59;
			break;

		case OFST_EDGE_E:
			SAMPLER_CAL_SEL = 12;
			SIGN_POS = (uint8_t*)&DFEE_REG63;
			NEG = (uint8_t*)&DFEE_REG62;
			break;
		case OFST_EDGE_O:
			SAMPLER_CAL_SEL = 13;
			SIGN_POS = (uint8_t*)&DFEO_REG63;
			NEG = (uint8_t*)&DFEO_REG62;
			break;
	}
	SAMPLER_CAL_SAVE = (uint8_t*)&CAL_SAVE_DATA4_LANE; SAMPLER_CAL_SAVE+=sw;
	//SAMPLER_TRAIN_SAVE = (uint8_t*)&TRAIN_SAVE_DATA1_LANE; SAMPLER_TRAIN_SAVE+=sw;
	//RESULT = (uint8_t*)&CAL_SAVE_DATA4_LANE; RESULT+=sw;
}
#endif

#ifndef _56G_R1P0
void set_sampler(int8_t val) BANKING_CTRL {
	uint8_t dat;
	if(val>=0) {
	    dat = (uint8_t)(val>>1);
		*NEG = dat;	
		*SIGN_POS = (uint8_t)(val-dat);	
	}
	else {
		val = -val; 
		dat = (uint8_t)(val>>1);
		*SIGN_POS = 0x20 | dat;	
		*NEG = (uint8_t)(val-dat);				
	}
}
#else
void set_sampler(int8_t val) BANKING_CTRL {
	uint8_t dat;
	if(val>=0) {
	    dat = (uint8_t)(val>>1);
	    if (SAMPLER_CAL_SEL < 12){
	    	*SIGN_POS = (uint8_t)(dat);
	    	//*NEG = dat;
	    }
	    else{
	    	*SIGN_POS = (uint8_t)(0x20 | (val-dat));
	    	*NEG = (uint8_t)dat;
	    }

	}
	else {
		val = -val;
		dat = (uint8_t)(val>>1);
		if (SAMPLER_CAL_SEL < 12){
			*NEG = (uint8_t)(0x20 | dat);
			//*SIGN_POS = 0x20 | dat;
		}
		else{
			*NEG = (uint8_t)(val-dat);
			*SIGN_POS = (uint8_t)dat;
		}
	}
}
#endif

void sampler_load(void) BANKING_CTRL
{
	uint8_t offset, i;
	for(i=0; i<14; i++) {
		sampler_sel(i);
		offset = *SAMPLER_CAL_SAVE;
		set_sampler(offset);
	}
}
void sampler_cal() BANKING_CTRL {
	int8_t i,j,k;
	uint8_t ntimes, ntimes_shft, out_of_bound;
	int8_t  offset;
	uint8_t ofst_res_f;
	int16_t offset_sum_neg, offset_sum_pos;
	int8_t  ofst_bnd; 

	PHY_STATUS = ST_SAMPLER_CAL;
	
	lnx_SAMPLER_RES_CAL_DONE_LANE = 0;
	lnx_SAMPLER_CAL_DONE_LANE = 0;
	lnx_SAMPLER_CAL_PASS_LANE = 0;
	
	// init
	reg_DFE_CTRL_ANA_BYPASS_LANE = 1;
	//SMPLR_CAL_EN = 1; reg_SMPLR_CAL_EN_DLY_LANE = 1;
	DATA_SLICER_PATH_SWITCH_E = 0;
	DATA_SLICER_PATH_SWITCH_O = 0;
	//DFE_F1_POL_EN_D = 1;
	//DFE_F1_POL_EN_S = 1;
	reg_PU_LB_DLY_LANE = 0; //should be 0.

#ifndef _56G_R1P0
	FFE_PULSE_EN = 0;
	PU_F1P_D_E = 1;
	PU_F1P_D_O = 1;
	PU_F1N_D_E = 1;
	PU_F1N_D_O = 1;
	PU_F1P_S_E = 1;
	PU_F1P_S_O = 1;
    PU_F1N_S_E = 1;
    PU_F1N_S_O = 1;

    PU_DFE = 0;
    PU_LB = 0;
    PU_OS = 1;
    PU_VCM = 1;
    EOM_EN_D = 0;
    EOM_EN_S = 0;
    OFST_RES = 0;
	reg_EN_DFE_F1TO3_LANE = 0;
#endif
	
	// enable ane dfe clock path
	reg_RESET_DFE_LANE = 0;
	reg_ANA_REG_DFEE_RST_LANE = 0;
	reg_ANA_REG_DFEO_RST_LANE = 0;
	reg_DFE_CLK_OFF_LANE = 1;		// First, disable DFE_CLK
	reg_DFE_MCU_CLK_EN_LANE = 1;	// Second, enable DFE_MCU_CLK
	reg_DFE_EN_LANE = 0; reg_DFE_DIS_LANE = 1;

	sampler_init();
	SMPLR_CAL_EN = 1; reg_SMPLR_CAL_EN_DLY_LANE = 1;
	delay_ram(Tus);
	
	//sampler resolution training start
	if( cmx_SAMPLER_CAL_EXT_EN ) {
		OFST_RES = lnx_CAL_SAMPLER_RES_LANE_7_0;
		//sampler_load_reset();
		lnx_SAMPLER_RES_CAL_DONE_LANE = 1;
		lnx_SAMPLER_CAL_DONE_LANE = 1;
		goto skip_out;
	}
	//else {
		ofst_res_f = 1;
		j = 0;
		//for(i=0; i<10; i++)	{
		for(i=0; i<12; i++)	{

			sampler_sel(i);
			
			while (j <= 1) {
				OFST_RES = j;
				offset = r_training_bound_tb[j]; //always use 80%
				//*SIGN_POS = 0x20 | offset;
				*NEG =  0x20 | offset;
				
				out_of_bound = 0;
				delay_ram(T_2us); // 2us, 4us, 8us and 16us programmable
				for (k=1; k<=smpl_size; k++) {
					if (VOFF_POS == 1) {
						out_of_bound = 1;
						break;
					}
				}
				
				*SIGN_POS = offset;
				delay_ram(T_2us); // 2us, 4us, 8us and 16us programmable
				for (k=1; k<=smpl_size; k++) {
					if (VOFF_POS == 0) {
						out_of_bound = 1;
						break;
					}
				}
	
				if (out_of_bound == 0) { 
					break; 			
				}
				else {	
					if(j<1) {
						j = j + 1;	OFST_RES = j;
					}
					else break;
				}
			}
			
			if (OFST_RES == 1)
				break;
			/*if (ofst_res_f > OFST_RES) {
				OFST_RES = ofst_res_f;
			}	
			else {	
				ofst_res_f = OFST_RES;
			}*/
		}
		
		lnx_CAL_SAMPLER_RES_LANE_7_0 = OFST_RES;
		ofst_bnd = r_training_bound_tb[OFST_RES]; ofst_bnd<<=1;
	//}
	lnx_SAMPLER_RES_CAL_DONE_LANE = 1; 
	
	//-------------------------------------------
	//sampler calibration start
//	ntimes_shft = n_programmable;
	if (n_programmable == 8) {ntimes_shft = 3;}
	else if (n_programmable == 16) {ntimes_shft = 4;}
	else if (n_programmable == 32) {ntimes_shft = 5;}
	else if (n_programmable == 64) {ntimes_shft = 6;}
	else { n_programmable=1; ntimes_shft = 0;}
	
	OFST_D_S_init(r_training_bound_tb[OFST_RES]);
	OFST_EDGE_init(r_training_bound_tb[1]);
	for(i=0; i<14; i++) {

		sampler_sel(i);

		/*if( cmx_SAMPLER_CAL_EXT_EN ) {
			offset = *SAMPLER_CAL_SAVE;
		}
		else {*/
		if (i>=12)
		{
			ofst_bnd = r_training_bound_tb[1];
			ofst_bnd<<=1;
		}

		offset_sum_neg = 0;
		for (ntimes=0; ntimes < n_programmable; ntimes++) {
#if 0
			for( offset=-ofst_bnd; offset<=ofst_bnd; offset++ ) { //80% sweep
				set_sampler(offset);
				delay_ram(T_p5us); // 250ns, 500ns, 1us and 2us programmable
				if(VOFF_POS == 1 || offset == ofst_bnd) break;
			}
#else
			for( offset=-ofst_bnd; offset<=ofst_bnd; offset++ ) { //80% sweep
				set_sampler(offset);
				delay_ram(T_2us); // 250ns, 500ns, 1us and 2us programmable
				if(VOFF_POS == 1 || offset == ofst_bnd) break;
				if (i<12)
					offset = offset + 1;
			}
#endif
			offset_sum_neg += offset;
		}
		offset_sum_neg >>= ntimes_shft;

		offset_sum_pos = 0;
		for (ntimes=0; ntimes < n_programmable; ntimes++) {
#if 0
			for( offset=ofst_bnd; offset>=-ofst_bnd; offset-- ) {
				set_sampler(offset);
				delay_ram(T_p5us); // 250ns, 500ns, 1us and 2us programmable
				if(VOFF_POS == 0 || offset == -ofst_bnd) break;
			}
#else
			for( offset=ofst_bnd; offset>=-ofst_bnd; offset-- ) {
				set_sampler(offset);
				delay_ram(T_2us); // 250ns, 500ns, 1us and 2us programmable
				if(VOFF_POS == 0 || offset == -ofst_bnd) break;
				if (i<12)
					offset = offset - 1;
			}
#endif
			offset_sum_pos += offset;
		}
		offset_sum_pos >>= ntimes_shft;

		//average offset
		if( lnx_SAMPLER_CAL_AVG_MODE_LANE_7_0 == 0)
			offset = (offset_sum_neg + offset_sum_pos) >> 1;
		else if( lnx_SAMPLER_CAL_AVG_MODE_LANE_7_0 == 1) offset = offset_sum_pos;
		else offset = offset_sum_neg;
	//}
	set_sampler(offset);
	*SAMPLER_CAL_SAVE = offset;
	//*RESULT = offset;
	}

	lnx_SAMPLER_CAL_PASS_LANE = 1;

skip_out:	

	SMPLR_CAL_EN = 0; 
	reg_SMPLR_CAL_EN_DLY_LANE = 0;	
	lnx_SAMPLER_CAL_DONE_LANE = 1;	

	reg_DFE_MCU_CLK_EN_LANE = 0;	
	reg_ANA_PU_DFE_LANE = 1; 
	//reg_EN_DFE_F1TO3_LANE = 1;
	reg_DFE_CTRL_ANA_BYPASS_LANE = 0;

	EN_DFE_F0 = 1;
	EN_DFE_F1TO2 = 1;
	EN_DFE_F1P5 = 1;
	EN_DFE_F3TO7 = 1;
	EN_DFE_F8TO10 = 1;
	EN_DFE_F11TO15 = 1;
	EN_DFE_FLOATING = 1;
	SMPLR_CAL_EN = 0;
	ACCAP_DISABLE_RIGHT = 0;
	ACCAP_DISABLE_LEFT = 0;
}

int8_t get_sampler(void) BANKING_CTRL {
	int8_t dat;
#ifndef _56G_R1P0
	dat = (int8_t)*NEG;	
	dat += (int8_t)((*SIGN_POS) & 0x1f); 
	if(*SIGN_POS & 0x20) dat = -dat;

	return dat;
#endif
}

#ifdef _LAB
//__code char string_tb[] = { 
//"ofst_f1p_d_e",
//"ofst_f1n_d_e",
//"ofst_f1p_d_o",
//"ofst_f1n_d_o",
//"ofst_f1p_s_e",
//"ofst_f1n_s_e",
//"ofst_f1p_s_o",
//"ofst_f1n_s_o",
//"ofst_edge_e",
//"ofst_edge_o" };

void print_osft_f1p(void) BANKING_CTRL {
	int8_t i, dat;
	
	Printf(" ofst(p/nDe/o,p/nSe/o,ee,eo)=", dat);		
	for(i=0; i<10; i++) {
		sampler_sel(i);
		dat = get_sampler();
		Printf("%d,", dat);		
	}
}
#endif

#else
#define OFST_RES 				reg_OFST_RES_LANE
//#define TIMEOUT_SMPLR_CAL		1000

void config_sampler_p1to3_ext(uint8_t val) BANKING_CTRL
{
	reg_SMPLR_D_BOT_P1_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_D_BOT_P3_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_D_MID_P1_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_D_MID_P3_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_D_TOP_P1_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_D_TOP_P3_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_EDGE_P1_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_EDGE_P3_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_S_BOT_P1_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_S_BOT_P3_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_S_MID_P1_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_S_MID_P3_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_S_TOP_P1_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_S_TOP_P3_CAL_INDV_EXT_EN_LANE = val;
}
void config_sampler_p2to4_ext(uint8_t val) BANKING_CTRL
{
	reg_SMPLR_D_BOT_P2_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_D_BOT_P4_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_D_MID_P2_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_D_MID_P4_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_D_TOP_P2_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_D_TOP_P4_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_EDGE_P2_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_EDGE_P4_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_S_BOT_P2_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_S_BOT_P4_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_S_MID_P2_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_S_MID_P4_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_S_TOP_P2_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_S_TOP_P4_CAL_INDV_EXT_EN_LANE = val;
}

void smplr_to_dfe_ofst_P1P3(void) BANKING_CTRL
{
	uint8_t mask_dc;

	//mask_dc = (reg_DFE_DC_SIGN_XOR_LANE << 5) & 0x3f;
	mask_dc = 0x20;

	reg_DFE_FEXTDC_D_BOT_P1_LANE_5_0 = mask_dc ^ lnx_cal_smplr_d_bot_p1_result_lane;
	reg_DFE_FEXTDC_D_MID_P1_LANE_5_0 = mask_dc ^ lnx_cal_smplr_d_mid_p1_result_lane;
	reg_DFE_FEXTDC_D_TOP_P1_LANE_5_0 = mask_dc ^ lnx_cal_smplr_d_top_p1_result_lane;
	reg_DFE_FEXTDC_S_BOT_P1_LANE_5_0 = mask_dc ^ lnx_cal_smplr_s_bot_p1_result_lane;
	reg_DFE_FEXTDC_S_MID_P1_LANE_5_0 = mask_dc ^ lnx_cal_smplr_s_mid_p1_result_lane;
	reg_DFE_FEXTDC_S_TOP_P1_LANE_5_0 = mask_dc ^ lnx_cal_smplr_s_top_p1_result_lane;
	reg_DFE_FEXTDC_E_P1_LANE_6_0     = (((~lnx_cal_smplr_edge_p1_result_pn_sign_lane) << 6) \
			| (lnx_cal_smplr_edge_p1_result_p_sign_lane + lnx_cal_smplr_edge_p1_result_n_sign_lane));

	reg_DFE_FEXTDC_D_BOT_P3_LANE_5_0 = mask_dc ^ lnx_cal_smplr_d_bot_p3_result_lane;
	reg_DFE_FEXTDC_D_MID_P3_LANE_5_0 = mask_dc ^ lnx_cal_smplr_d_mid_p3_result_lane;
	reg_DFE_FEXTDC_D_TOP_P3_LANE_5_0 = mask_dc ^ lnx_cal_smplr_d_top_p3_result_lane;
	reg_DFE_FEXTDC_S_BOT_P3_LANE_5_0 = mask_dc ^ lnx_cal_smplr_s_bot_p3_result_lane;
	reg_DFE_FEXTDC_S_MID_P3_LANE_5_0 = mask_dc ^ lnx_cal_smplr_s_mid_p3_result_lane;
	reg_DFE_FEXTDC_S_TOP_P3_LANE_5_0 = mask_dc ^ lnx_cal_smplr_s_top_p3_result_lane;
	reg_DFE_FEXTDC_E_P3_LANE_6_0     = (((~lnx_cal_smplr_edge_p3_result_pn_sign_lane) << 6) \
			| (lnx_cal_smplr_edge_p3_result_p_sign_lane + lnx_cal_smplr_edge_p3_result_n_sign_lane));

#if 0
	reg_OFST_D_BOT_P1_LANE_5_0 = reg_SMPLR_D_BOT_P1_CAL_RESULT_RD_LANE_5_0;
	reg_OFST_D_MID_P1_LANE_5_0 = reg_SMPLR_D_MID_P1_CAL_RESULT_RD_LANE_5_0;
	reg_OFST_D_TOP_P1_LANE_5_0 = reg_SMPLR_D_TOP_P1_CAL_RESULT_RD_LANE_5_0;
	reg_OFST_S_BOT_P1_LANE_5_0 = reg_SMPLR_S_BOT_P1_CAL_RESULT_RD_LANE_5_0;
	reg_OFST_S_MID_P1_LANE_5_0 = reg_SMPLR_S_MID_P1_CAL_RESULT_RD_LANE_5_0;
	reg_OFST_S_TOP_P1_LANE_5_0 = reg_SMPLR_S_TOP_P1_CAL_RESULT_RD_LANE_5_0;
	reg_OFST_EDGE_NEG_P1_LANE_4_0 = reg_SMPLR_EDGE_P1_CAL_RESULT_N_RD_LANE_4_0;
	reg_OFST_EDGE_POS_P1_LANE_4_0 = reg_SMPLR_EDGE_P1_CAL_RESULT_P_RD_LANE_4_0;
	reg_OFST_EDGE_SIGN_P1_LANE    = reg_SMPLR_EDGE_P1_CAL_RESULT_PN_SIGN_RD_LANE;

	reg_OFST_D_BOT_P3_LANE_5_0 = reg_SMPLR_D_BOT_P3_CAL_RESULT_RD_LANE_5_0;
    reg_OFST_D_MID_P3_LANE_5_0 = reg_SMPLR_D_MID_P3_CAL_RESULT_RD_LANE_5_0;
    reg_OFST_D_TOP_P3_LANE_5_0 = reg_SMPLR_D_TOP_P3_CAL_RESULT_RD_LANE_5_0;
    reg_OFST_S_BOT_P3_LANE_5_0 = reg_SMPLR_S_BOT_P3_CAL_RESULT_RD_LANE_5_0;
    reg_OFST_S_MID_P3_LANE_5_0 = reg_SMPLR_S_MID_P3_CAL_RESULT_RD_LANE_5_0;
    reg_OFST_S_TOP_P3_LANE_5_0 = reg_SMPLR_S_TOP_P3_CAL_RESULT_RD_LANE_5_0;
    reg_OFST_EDGE_NEG_P3_LANE_4_0 = reg_SMPLR_EDGE_P3_CAL_RESULT_N_RD_LANE_4_0;
    reg_OFST_EDGE_POS_P3_LANE_4_0 = reg_SMPLR_EDGE_P3_CAL_RESULT_P_RD_LANE_4_0;
    reg_OFST_EDGE_SIGN_P3_LANE    = reg_SMPLR_EDGE_P3_CAL_RESULT_PN_SIGN_RD_LANE;
#endif
}

void smplr_to_dfe_ofst_P2P4(void) BANKING_CTRL
{
	uint8_t mask_dc;

	//mask_dc = (reg_DFE_DC_SIGN_XOR_LANE << 5) & 0x3f;
	mask_dc = 0x20;

	reg_DFE_FEXTDC_D_BOT_P2_LANE_5_0 = mask_dc ^ lnx_cal_smplr_d_bot_p2_result_lane;
	reg_DFE_FEXTDC_D_MID_P2_LANE_5_0 = mask_dc ^ lnx_cal_smplr_d_mid_p2_result_lane;
	reg_DFE_FEXTDC_D_TOP_P2_LANE_5_0 = mask_dc ^ lnx_cal_smplr_d_top_p2_result_lane;
	reg_DFE_FEXTDC_S_BOT_P2_LANE_5_0 = mask_dc ^ lnx_cal_smplr_s_bot_p2_result_lane;
	reg_DFE_FEXTDC_S_MID_P2_LANE_5_0 = mask_dc ^ lnx_cal_smplr_s_mid_p2_result_lane;
	reg_DFE_FEXTDC_S_TOP_P2_LANE_5_0 = mask_dc ^ lnx_cal_smplr_s_top_p2_result_lane;
	reg_DFE_FEXTDC_E_P2_LANE_6_0     = (((~lnx_cal_smplr_edge_p2_result_pn_sign_lane) << 6) \
			| (lnx_cal_smplr_edge_p2_result_p_sign_lane + lnx_cal_smplr_edge_p2_result_n_sign_lane));

	reg_DFE_FEXTDC_D_BOT_P4_LANE_5_0 = mask_dc ^ lnx_cal_smplr_d_bot_p4_result_lane;
	reg_DFE_FEXTDC_D_MID_P4_LANE_5_0 = mask_dc ^ lnx_cal_smplr_d_mid_p4_result_lane;
	reg_DFE_FEXTDC_D_TOP_P4_LANE_5_0 = mask_dc ^ lnx_cal_smplr_d_top_p4_result_lane;
	reg_DFE_FEXTDC_S_BOT_P4_LANE_5_0 = mask_dc ^ lnx_cal_smplr_s_bot_p4_result_lane;
	reg_DFE_FEXTDC_S_MID_P4_LANE_5_0 = mask_dc ^ lnx_cal_smplr_s_mid_p4_result_lane;
	reg_DFE_FEXTDC_S_TOP_P4_LANE_5_0 = mask_dc ^ lnx_cal_smplr_s_top_p4_result_lane;
	reg_DFE_FEXTDC_E_P4_LANE_6_0	 = (((~lnx_cal_smplr_edge_p4_result_pn_sign_lane) << 6) | \
			(lnx_cal_smplr_edge_p4_result_p_sign_lane + lnx_cal_smplr_edge_p4_result_n_sign_lane));

#if 0
	reg_OFST_D_BOT_P2_LANE_5_0 = reg_SMPLR_D_BOT_P2_CAL_RESULT_RD_LANE_5_0;
    reg_OFST_D_MID_P2_LANE_5_0 = reg_SMPLR_D_MID_P2_CAL_RESULT_RD_LANE_5_0;
    reg_OFST_D_TOP_P2_LANE_5_0 = reg_SMPLR_D_TOP_P2_CAL_RESULT_RD_LANE_5_0;
    reg_OFST_S_BOT_P2_LANE_5_0 = reg_SMPLR_S_BOT_P2_CAL_RESULT_RD_LANE_5_0;
    reg_OFST_S_MID_P2_LANE_5_0 = reg_SMPLR_S_MID_P2_CAL_RESULT_RD_LANE_5_0;
    reg_OFST_S_TOP_P2_LANE_5_0 = reg_SMPLR_S_TOP_P2_CAL_RESULT_RD_LANE_5_0;
    reg_OFST_EDGE_NEG_P2_LANE_4_0 = reg_SMPLR_EDGE_P2_CAL_RESULT_N_RD_LANE_4_0;
    reg_OFST_EDGE_POS_P2_LANE_4_0 = reg_SMPLR_EDGE_P2_CAL_RESULT_P_RD_LANE_4_0;
    reg_OFST_EDGE_SIGN_P2_LANE    = reg_SMPLR_EDGE_P2_CAL_RESULT_PN_SIGN_RD_LANE;

    reg_OFST_D_BOT_P4_LANE_5_0 = reg_SMPLR_D_BOT_P4_CAL_RESULT_RD_LANE_5_0;
	reg_OFST_D_MID_P4_LANE_5_0 = reg_SMPLR_D_MID_P4_CAL_RESULT_RD_LANE_5_0;
	reg_OFST_D_TOP_P4_LANE_5_0 = reg_SMPLR_D_TOP_P4_CAL_RESULT_RD_LANE_5_0;
	reg_OFST_S_BOT_P4_LANE_5_0 = reg_SMPLR_S_BOT_P4_CAL_RESULT_RD_LANE_5_0;
	reg_OFST_S_MID_P4_LANE_5_0 = reg_SMPLR_S_MID_P4_CAL_RESULT_RD_LANE_5_0;
	reg_OFST_S_TOP_P4_LANE_5_0 = reg_SMPLR_S_TOP_P4_CAL_RESULT_RD_LANE_5_0;
	reg_OFST_EDGE_NEG_P4_LANE_4_0 = reg_SMPLR_EDGE_P4_CAL_RESULT_N_RD_LANE_4_0;
	reg_OFST_EDGE_POS_P4_LANE_4_0 = reg_SMPLR_EDGE_P4_CAL_RESULT_P_RD_LANE_4_0;
	reg_OFST_EDGE_SIGN_P4_LANE    = reg_SMPLR_EDGE_P4_CAL_RESULT_PN_SIGN_RD_LANE;
#endif


}

void sampler_cal(void) BANKING_CTRL {

	PHY_STATUS = ST_SAMPLER_CAL;

	lnx_SAMPLER_CAL_DONE_LANE = 0;
	lnx_SAMPLER_CAL_PASS_LANE = 1;

	if (reg_RX_HALFRATE_EN_LANE == 0)
	{
	config_sampler_p1to3_ext(0);
	reg_SMPLR_CAL_EN_P1P3_LANE = 1;
	OFST_RES = 0;
	reg_SMPLR_D_TOP_P1_CAL_TIMEOUT_STEPS_LANE_2_0 = 0x6;
	reg_SMPLR_P1P3_TOP_START_LANE = 1;
	/*timeout_start((uint16_t)TIMEOUT_SMPLR_CAL);
	while (!reg_SMPLR_P1P3_TOP_DONE_LANE && !timeout);
	if (timeout)*/
	while (!reg_SMPLR_P1P3_TOP_DONE_LANE);
	reg_SMPLR_P1P3_TOP_START_LANE = 0;
	if ((reg_SMPLR_D_TOP_P1_CAL_RESULT_RD_LANE_5_0 & 0x1f) > 16 || (reg_SMPLR_D_MID_P1_CAL_RESULT_RD_LANE_5_0 & 0x1f) > 16 || (reg_SMPLR_D_BOT_P1_CAL_RESULT_RD_LANE_5_0 & 0x1f) > 16 ||\
			(reg_SMPLR_D_TOP_P3_CAL_RESULT_RD_LANE_5_0 & 0x1f) > 16 || (reg_SMPLR_D_MID_P3_CAL_RESULT_RD_LANE_5_0 & 0x1f) > 16 || (reg_SMPLR_D_BOT_P3_CAL_RESULT_RD_LANE_5_0 & 0x1f) > 16 ||\
			(reg_SMPLR_S_TOP_P1_CAL_RESULT_RD_LANE_5_0 & 0x1f) > 16 || (reg_SMPLR_S_MID_P1_CAL_RESULT_RD_LANE_5_0 & 0x1f) > 16 || (reg_SMPLR_S_BOT_P1_CAL_RESULT_RD_LANE_5_0 & 0x1f) > 16 ||\
			(reg_SMPLR_S_TOP_P3_CAL_RESULT_RD_LANE_5_0 & 0x1f) > 16 || (reg_SMPLR_S_MID_P3_CAL_RESULT_RD_LANE_5_0 & 0x1f) > 16 || (reg_SMPLR_S_BOT_P3_CAL_RESULT_RD_LANE_5_0 & 0x1f) > 16 ||\
			reg_SMPLR_EDGE_P1_CAL_RESULT_P_RD_LANE_4_0 > 16 || reg_SMPLR_EDGE_P1_CAL_RESULT_N_RD_LANE_4_0 > 16 || reg_SMPLR_EDGE_P3_CAL_RESULT_P_RD_LANE_4_0 > 16 || reg_SMPLR_EDGE_P3_CAL_RESULT_N_RD_LANE_4_0 > 16)
	{
		OFST_RES = 1;
		reg_SMPLR_P1P3_TOP_START_LANE = 1;
		while (!reg_SMPLR_P1P3_TOP_DONE_LANE);
	}
	reg_SMPLR_P1P3_TOP_START_LANE = 0;

	if(reg_SMPLR_D_TOP_P1_CAL_TIMEOUT_RD_LANE || reg_SMPLR_D_MID_P1_CAL_TIMEOUT_RD_LANE || reg_SMPLR_D_BOT_P1_CAL_TIMEOUT_RD_LANE ||\
			reg_SMPLR_D_TOP_P3_CAL_TIMEOUT_RD_LANE || reg_SMPLR_D_MID_P3_CAL_TIMEOUT_RD_LANE || reg_SMPLR_D_BOT_P3_CAL_TIMEOUT_RD_LANE ||\
			reg_SMPLR_S_TOP_P1_CAL_TIMEOUT_RD_LANE || reg_SMPLR_S_MID_P1_CAL_TIMEOUT_RD_LANE || reg_SMPLR_S_BOT_P1_CAL_TIMEOUT_RD_LANE ||\
			reg_SMPLR_S_TOP_P3_CAL_TIMEOUT_RD_LANE || reg_SMPLR_S_MID_P3_CAL_TIMEOUT_RD_LANE || reg_SMPLR_S_BOT_P3_CAL_TIMEOUT_RD_LANE ||\
			reg_SMPLR_EDGE_P1_CAL_TIMEOUT_RD_LANE || reg_SMPLR_EDGE_P3_CAL_TIMEOUT_RD_LANE)
		lnx_SAMPLER_CAL_PASS_LANE = 0;
		//smplr_to_dfe_ofst_P1P3();
		//config_sampler_p1to3_ext(1);
	}

	reg_SMPLR_CAL_EN_P1P3_LANE = 0;

	config_sampler_p2to4_ext(0);
	reg_SMPLR_CAL_EN_P2P4_LANE = 1;
	OFST_RES = 0;
	reg_SMPLR_D_TOP_P2_CAL_TIMEOUT_STEPS_LANE_2_0 = 0x6;
	reg_SMPLR_P2P4_TOP_START_LANE = 1;
	while (!reg_SMPLR_P2P4_TOP_DONE_LANE);
	reg_SMPLR_P2P4_TOP_START_LANE = 0;

	if ((reg_SMPLR_D_TOP_P2_CAL_RESULT_RD_LANE_5_0 & 0x1f) > 16 || (reg_SMPLR_D_MID_P2_CAL_RESULT_RD_LANE_5_0 & 0x1f) > 16 || (reg_SMPLR_D_BOT_P2_CAL_RESULT_RD_LANE_5_0 & 0x1f) > 16 ||\
			(reg_SMPLR_D_TOP_P4_CAL_RESULT_RD_LANE_5_0 & 0x1f) > 16 || (reg_SMPLR_D_MID_P4_CAL_RESULT_RD_LANE_5_0 & 0x1f) > 16 || (reg_SMPLR_D_BOT_P4_CAL_RESULT_RD_LANE_5_0 & 0x1f) > 16 ||\
			(reg_SMPLR_S_TOP_P2_CAL_RESULT_RD_LANE_5_0 & 0x1f) > 16 || (reg_SMPLR_S_MID_P2_CAL_RESULT_RD_LANE_5_0 & 0x1f) > 16 || (reg_SMPLR_S_BOT_P2_CAL_RESULT_RD_LANE_5_0 & 0x1f) > 16 ||\
			(reg_SMPLR_S_TOP_P4_CAL_RESULT_RD_LANE_5_0 & 0x1f) > 16 || (reg_SMPLR_S_MID_P4_CAL_RESULT_RD_LANE_5_0 & 0x1f) > 16 || (reg_SMPLR_S_BOT_P4_CAL_RESULT_RD_LANE_5_0 & 0x1f) > 16 ||\
			reg_SMPLR_EDGE_P2_CAL_RESULT_P_RD_LANE_4_0 > 16 || reg_SMPLR_EDGE_P2_CAL_RESULT_N_RD_LANE_4_0 > 16 || reg_SMPLR_EDGE_P4_CAL_RESULT_P_RD_LANE_4_0 > 16 || reg_SMPLR_EDGE_P4_CAL_RESULT_N_RD_LANE_4_0 > 16)
	{
		OFST_RES = 1;
		reg_SMPLR_P2P4_TOP_START_LANE = 1;
		while (!reg_SMPLR_P2P4_TOP_DONE_LANE);
	}

	reg_SMPLR_P2P4_TOP_START_LANE = 0;

	if(reg_SMPLR_D_TOP_P2_CAL_TIMEOUT_RD_LANE || reg_SMPLR_D_MID_P2_CAL_TIMEOUT_RD_LANE || reg_SMPLR_D_BOT_P2_CAL_TIMEOUT_RD_LANE ||\
			reg_SMPLR_D_TOP_P4_CAL_TIMEOUT_RD_LANE || reg_SMPLR_D_MID_P4_CAL_TIMEOUT_RD_LANE || reg_SMPLR_D_BOT_P4_CAL_TIMEOUT_RD_LANE ||\
			reg_SMPLR_S_TOP_P2_CAL_TIMEOUT_RD_LANE || reg_SMPLR_S_MID_P2_CAL_TIMEOUT_RD_LANE || reg_SMPLR_S_BOT_P2_CAL_TIMEOUT_RD_LANE ||\
			reg_SMPLR_S_TOP_P4_CAL_TIMEOUT_RD_LANE || reg_SMPLR_S_MID_P4_CAL_TIMEOUT_RD_LANE || reg_SMPLR_S_BOT_P4_CAL_TIMEOUT_RD_LANE ||\
			reg_SMPLR_EDGE_P2_CAL_TIMEOUT_RD_LANE || reg_SMPLR_EDGE_P4_CAL_TIMEOUT_RD_LANE)
		lnx_SAMPLER_CAL_PASS_LANE = 0;

	reg_SMPLR_CAL_EN_P2P4_LANE = 0;
	//smplr_to_dfe_ofst_P2P4();
	//config_sampler_p2to4_ext(1);

#if 1
	lnx_cal_smplr_d_top_p1_result_lane = reg_SMPLR_D_TOP_P1_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_smplr_d_mid_p1_result_lane = reg_SMPLR_D_MID_P1_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_smplr_d_bot_p1_result_lane = reg_SMPLR_D_BOT_P1_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_smplr_d_top_p3_result_lane = reg_SMPLR_D_TOP_P3_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_smplr_d_mid_p3_result_lane = reg_SMPLR_D_MID_P3_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_smplr_d_bot_p3_result_lane = reg_SMPLR_D_BOT_P3_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_smplr_s_top_p1_result_lane = reg_SMPLR_S_TOP_P1_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_smplr_s_mid_p1_result_lane = reg_SMPLR_S_MID_P1_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_smplr_s_bot_p1_result_lane = reg_SMPLR_S_BOT_P1_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_smplr_s_top_p3_result_lane = reg_SMPLR_S_TOP_P3_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_smplr_s_mid_p3_result_lane = reg_SMPLR_S_MID_P3_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_smplr_s_bot_p3_result_lane = reg_SMPLR_S_BOT_P3_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_smplr_edge_p1_result_pn_sign_lane = reg_SMPLR_EDGE_P1_CAL_RESULT_PN_SIGN_RD_LANE;
	lnx_cal_smplr_edge_p1_result_p_sign_lane = reg_SMPLR_EDGE_P1_CAL_RESULT_P_RD_LANE_4_0;
	lnx_cal_smplr_edge_p1_result_n_sign_lane = reg_SMPLR_EDGE_P1_CAL_RESULT_N_RD_LANE_4_0;
	lnx_cal_smplr_edge_p3_result_pn_sign_lane = reg_SMPLR_EDGE_P3_CAL_RESULT_PN_SIGN_RD_LANE;
	lnx_cal_smplr_edge_p3_result_p_sign_lane = reg_SMPLR_EDGE_P3_CAL_RESULT_P_RD_LANE_4_0;
	lnx_cal_smplr_edge_p3_result_n_sign_lane = reg_SMPLR_EDGE_P3_CAL_RESULT_N_RD_LANE_4_0;
	lnx_cal_smplr_d_top_p2_result_lane = reg_SMPLR_D_TOP_P2_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_smplr_d_mid_p2_result_lane = reg_SMPLR_D_MID_P2_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_smplr_d_bot_p2_result_lane = reg_SMPLR_D_BOT_P2_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_smplr_d_top_p4_result_lane = reg_SMPLR_D_TOP_P4_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_smplr_d_mid_p4_result_lane = reg_SMPLR_D_MID_P4_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_smplr_d_bot_p4_result_lane = reg_SMPLR_D_BOT_P4_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_smplr_s_top_p2_result_lane = reg_SMPLR_S_TOP_P2_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_smplr_s_mid_p2_result_lane = reg_SMPLR_S_MID_P2_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_smplr_s_bot_p2_result_lane = reg_SMPLR_S_BOT_P2_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_smplr_s_top_p4_result_lane = reg_SMPLR_S_TOP_P4_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_smplr_s_mid_p4_result_lane = reg_SMPLR_S_MID_P4_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_smplr_s_bot_p4_result_lane = reg_SMPLR_S_BOT_P4_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_smplr_edge_p2_result_pn_sign_lane = reg_SMPLR_EDGE_P2_CAL_RESULT_PN_SIGN_RD_LANE;
	lnx_cal_smplr_edge_p2_result_p_sign_lane= reg_SMPLR_EDGE_P2_CAL_RESULT_P_RD_LANE_4_0;
	lnx_cal_smplr_edge_p2_result_n_sign_lane= reg_SMPLR_EDGE_P2_CAL_RESULT_N_RD_LANE_4_0;
	lnx_cal_smplr_edge_p4_result_pn_sign_lane = reg_SMPLR_EDGE_P4_CAL_RESULT_PN_SIGN_RD_LANE;
	lnx_cal_smplr_edge_p4_result_p_sign_lane= reg_SMPLR_EDGE_P4_CAL_RESULT_P_RD_LANE_4_0;
	lnx_cal_smplr_edge_p4_result_n_sign_lane= reg_SMPLR_EDGE_P4_CAL_RESULT_N_RD_LANE_4_0;
#endif

	lnx_SAMPLER_CAL_DONE_LANE = 1;
}

#endif


