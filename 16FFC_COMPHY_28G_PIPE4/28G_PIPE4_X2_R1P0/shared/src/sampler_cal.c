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
#pragma codeseg BANK1
#pragma constseg BANK1
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
#define FFE_PULSE_EN 			reg_FFE_PULSE_EN_LANE
#define PU_F1P_D_E 				reg_PU_F1P_D_E_LANE
#define PU_F1P_D_O 				reg_PU_F1P_D_O_LANE
#define PU_F1P_S_E 				reg_PU_F1P_S_E_LANE
#define PU_F1P_S_O 				reg_PU_F1P_S_O_LANE
#define PU_F1N_D_E 				reg_PU_F1N_D_E_LANE
#define PU_F1N_D_O 				reg_PU_F1N_D_O_LANE
#define PU_F1N_S_E 				reg_PU_F1N_S_E_LANE
#define PU_F1N_S_O 				reg_PU_F1N_S_O_LANE
#define PU_OS 					reg_PU_OS_LANE
#define PU_VCM 					reg_PU_VCM_LANE
#define EOM_EN_D 				reg_EOM_EN_D_LANE
#define EOM_EN_S 				reg_EOM_EN_S_LANE
#define OFST_RES 				reg_OFST_RES_LANE_1_0
#define OFST_F1P_SIGN_D_E 		reg_OFST_F1P_SIGN_D_E
#define OFST_F1P_POS_D_E 		reg_OFST_F1P_POS_D_E_LANE_4_0
#define OFST_F1P_NEG_D_E 		reg_OFST_F1P_NEG_D_E_LANE_4_0
#define OFST_F1N_SIGN_D_E 		reg_OFST_F1N_SIGN_D_E
#define OFST_F1N_POS_D_E 		reg_OFST_F1N_POS_D_E_LANE_4_0
#define OFST_F1N_NEG_D_E 		reg_OFST_F1N_NEG_D_E_LANE_4_0
#define OFST_F1P_SIGN_D_O 		reg_OFST_F1P_SIGN_D_O
#define OFST_F1P_POS_D_O 		reg_OFST_F1P_POS_D_O_LANE_4_0
#define OFST_F1P_NEG_D_O 		reg_OFST_F1P_NEG_D_O_LANE_4_0
#define OFST_F1N_SIGN_D_O 		reg_OFST_F1N_SIGN_D_O
#define OFST_F1N_POS_D_O 		reg_OFST_F1N_POS_D_O_LANE_4_0
#define OFST_F1N_NEG_D_O 		reg_OFST_F1N_NEG_D_O_LANE_4_0
#define OFST_F1P_SIGN_S_E 		reg_OFST_F1P_SIGN_S_E
#define OFST_F1P_POS_S_E 		reg_OFST_F1P_POS_S_E_LANE_4_0
#define OFST_F1P_NEG_S_E 		reg_OFST_F1P_NEG_S_E_LANE_4_0
#define OFST_F1N_SIGN_S_E 		reg_OFST_F1N_SIGN_S_E
#define OFST_F1N_POS_S_E 		reg_OFST_F1N_POS_S_E_LANE_4_0
#define OFST_F1N_NEG_S_E 		reg_OFST_F1N_NEG_S_E_LANE_4_0
#define OFST_F1P_SIGN_S_O 		reg_OFST_F1P_SIGN_S_O
#define OFST_F1P_POS_S_O 		reg_OFST_F1P_POS_S_O_LANE_4_0
#define OFST_F1P_NEG_S_O 		reg_OFST_F1P_NEG_S_O_LANE_4_0
#define OFST_F1N_SIGN_S_O 		reg_OFST_F1N_SIGN_S_O
#define OFST_F1N_POS_S_O 		reg_OFST_F1N_POS_S_O_LANE_4_0
#define OFST_F1N_NEG_S_O 		reg_OFST_F1N_NEG_S_O_LANE_4_0
#define OFST_EDGE_SIGN_E 		reg_OFST_EDGE_SIGN_E
#define OFST_EDGE_POS_E 		reg_OFST_EDGE_POS_E_LANE_4_0
#define OFST_EDGE_NEG_E 		reg_OFST_EDGE_NEG_E_LANE_4_0
#define OFST_EDGE_SIGN_O 		reg_OFST_EDGE_SIGN_O
#define OFST_EDGE_POS_O 		reg_OFST_EDGE_POS_O_LANE_4_0
#define OFST_EDGE_NEG_O 		reg_OFST_EDGE_NEG_O_LANE_4_0
#define VOFF_POS 				reg_ANA_RX_VOFF_POS_RD_LANE 

#define smpl_size	4			//2/4/6/8
#define n_programmable			lnx_SAMPLER_SAMPLE_SIZE_LANE_7_0	//1/8/16/32/64

__code uint8_t r_training_bound_tb[] = {
    19, //dummy
	19, //31*0.6   //OFST_RES=0 //0.8,0.7,0.6,0.5
	22, //31*0.7   //OFST_RES=1
	25  //31*0.8   //OFST_RES=2
};

void sampler_sel(uint8_t sw) BANKING_CTRL
{
	switch (sw) {
	case OFST_F1P_D_E:
		SIGN_POS = (uint8_t*)&ANA_DFEE_REG_1E;
		NEG = (uint8_t*)&ANA_DFEE_REG_1F;
		break;
	case OFST_F1N_D_E:
		SIGN_POS = (uint8_t*)&ANA_DFEE_REG_20;
		NEG = (uint8_t*)&ANA_DFEE_REG_21;
		break;
	case OFST_F1P_D_O:
		SIGN_POS = (uint8_t*)&ANA_DFEO_REG_1E;
		NEG = (uint8_t*)&ANA_DFEO_REG_1F;
		break;
	case OFST_F1N_D_O:
		SIGN_POS = (uint8_t*)&ANA_DFEO_REG_20;
		NEG = (uint8_t*)&ANA_DFEO_REG_21;
		break;
	case OFST_F1P_S_E:
		SIGN_POS = (uint8_t*)&ANA_DFEE_REG_22;
		NEG = (uint8_t*)&ANA_DFEE_REG_23;
		break;
	case OFST_F1N_S_E:
		SIGN_POS = (uint8_t*)&ANA_DFEE_REG_24;
		NEG = (uint8_t*)&ANA_DFEE_REG_25;
		break;
	case OFST_F1P_S_O:
		SIGN_POS = (uint8_t*)&ANA_DFEO_REG_22;
		NEG = (uint8_t*)&ANA_DFEO_REG_23;
		break;
	case OFST_F1N_S_O:
		SIGN_POS = (uint8_t*)&ANA_DFEO_REG_24;
		NEG = (uint8_t*)&ANA_DFEO_REG_25;
		break;
	case OFST_EDGE_E:
		SIGN_POS = (uint8_t*)&ANA_DFEE_REG_26;
		NEG = (uint8_t*)&ANA_DFEE_REG_27;
		break;
	case OFST_EDGE_O:
		SIGN_POS = (uint8_t*)&ANA_DFEO_REG_26;
		NEG = (uint8_t*)&ANA_DFEO_REG_27;
		break;
	}

	SAMPLER_CAL_SAVE = (uint8_t*)&CAL_SAVE_DATA4_LANE; SAMPLER_CAL_SAVE+=sw;
	SAMPLER_TRAIN_SAVE = (uint8_t*)&TRAIN_SAVE_DATA1_LANE; SAMPLER_TRAIN_SAVE+=sw;
	
}

__code uint8_t samper_cal_sel_tb[] = { 0, 0, 3, 3, 1, 1, 4, 4, 2, 5 };
__code uint8_t sampler_f1_pol_tb[] = { 1, 0, 1, 0, 1, 0, 1, 0, 0, 0 };

void sampler_cal_sel(uint8_t sw) BANKING_CTRL
{
	SAMPLER_CAL_SEL = samper_cal_sel_tb[sw];
	if(sw < OFST_F1P_S_E ) 
		DFE_F1_POL_D = sampler_f1_pol_tb[sw];
	else if(sw < OFST_EDGE_E ) 	
		DFE_F1_POL_S = sampler_f1_pol_tb[sw];		
}

void set_sampler(int8_t val) BANKING_CTRL {
	uint8_t dat;

	if (val>=0) {
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

void sampler_cal() BANKING_CTRL {
	int8_t i,j,k;
	uint8_t ntimes, ntimes_shft, out_of_bound;
	int8_t  offset;
	uint8_t ofst_res_f;
	int16_t offset_sum_neg, offset_sum_pos;
	int8_t  ofst_bnd; 

	lnx_SAMPLER_RES_CAL_DONE_LANE = 0;
	lnx_SAMPLER_CAL_DONE_LANE = 0;

	// init
	reg_DFE_CTRL_ANA_BYPASS_LANE = 1;
	SMPLR_CAL_EN = 1; reg_SMPLR_CAL_EN_DLY_LANE = 1;
	DATA_SLICER_PATH_SWITCH_E = 0;
	DATA_SLICER_PATH_SWITCH_O = 0;
	DFE_F1_POL_EN_D = 1;
	DFE_F1_POL_EN_S = 1;
	PU_DFE = 0;
	PU_LB = 0;	reg_PU_LB_DLY_LANE = 0; //should be 0.
	FFE_PULSE_EN = 0;
    reg_RX_PULSE_SHORTB_LANE = 0;
	PU_F1P_D_E = 1; //sequence
	PU_F1P_D_O = 1;
	PU_F1N_D_E = 1;
	PU_F1N_D_O = 1;
	PU_F1P_S_E = 1;
	PU_F1P_S_O = 1;
    PU_F1N_S_E = 1;
    PU_F1N_S_O = 1;
    PU_OS = 1;
    PU_VCM = 1;
    EOM_EN_D = 0;
    EOM_EN_S = 0;
    OFST_RES = 0;
	reg_EN_DFE_F1TO3_LANE = 0;
	reg_PATH_DISABLE_EDGE_LANE = 0;
	
	// enable ane dfe clock path
	CKCON = 0x07 ;  //MCU WAIT time the slowest
	reg_RESET_DFE_LANE = 0;
	CKCON = 0x00 ; //MCU WAIT time setting back to normal.
	reg_ANA_REG_DFEE_RST_LANE = 0;
	reg_ANA_REG_DFEO_RST_LANE = 0;
	reg_DFE_CLK_OFF_LANE = 1;		// First, disable DFE_CLK
	reg_DFE_MCU_CLK_EN_LANE = 1;	// Second, enable DFE_MCU_CLK
	reg_DFE_EN_LANE = 0; 

	delay01(10);

	if( cmx_SAMPLER_CAL_EXT_EN ) {
		OFST_RES = lnx_CAL_SAMPLER_RES_LANE_7_0;	
		//sampler_load_reset();
		for(i=0; i<10; i++) {
			sampler_sel(i);
			offset = *SAMPLER_CAL_SAVE;
			set_sampler(offset);
		}		
		lnx_SAMPLER_RES_CAL_DONE_LANE = 1;
		lnx_SAMPLER_CAL_DONE_LANE = 1;
		goto skip_out;
	}	
	
	PHY_STATUS = ST_SAMPLER_CAL;

	lnx_SAMPLER_CAL_PASS_LANE = 0;
	
	//sampler resolution training start
	{
		ofst_res_f = 1;
		j = 1;
		for(i=0; i<10; i++)	{
		
			sampler_sel(i);
			sampler_cal_sel(i);
			
			while (j <= 3) {
				OFST_RES = j;
				offset = r_training_bound_tb[j]; //always use 80%
				*SIGN_POS = 0x20 | offset;	
				*NEG = offset;	
				
				out_of_bound = 0;
				delay01(20); // 2us, 4us, 8us and 16us programmable
				for (k=1; k<=smpl_size; k++) {
					if (VOFF_POS == 1) {
						out_of_bound = 1;
						break;
					}
				}
				
				*SIGN_POS = offset;
				delay01(20); // 2us, 4us, 8us and 16us programmable
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
					if(j<3) {
						j = j + 1;	OFST_RES = j;
					}
					else break;	
				}
			}
			
			if (ofst_res_f > OFST_RES) {
				OFST_RES = ofst_res_f;
			}	
			else {	
				ofst_res_f = OFST_RES;
			}
		}
		
		lnx_CAL_SAMPLER_RES_LANE_7_0 = OFST_RES;
		ofst_bnd = r_training_bound_tb[OFST_RES]; ofst_bnd<<=1;
	}	
	lnx_SAMPLER_RES_CAL_DONE_LANE = 1; 
	
	//-------------------------------------------
	//sampler calibration start
	// mapping ntimes_shft corresponding to n_programmable
	if (n_programmable == 8) {ntimes_shft = 3;}
	else if (n_programmable == 16) {ntimes_shft = 4;}
	else if (n_programmable == 32) {ntimes_shft = 5;}
	else if (n_programmable == 64) {ntimes_shft = 6;}
	else { n_programmable=1; ntimes_shft = 0;}
	
	for(i=0; i<10; i++) {

		sampler_sel(i);
		sampler_cal_sel(i);

		offset_sum_neg = 0;
		for (ntimes=0; ntimes < n_programmable; ntimes++) {
			for( offset=-ofst_bnd; offset<=ofst_bnd; offset++ ) { //80% sweep
				set_sampler(offset);
				delay01(5); // 250ns, 500ns, 1us and 2us programmable
				if(VOFF_POS == 1) break; 
			}
			offset_sum_neg += offset;
		}
		offset_sum_neg >>= ntimes_shft;
		
		offset_sum_pos = 0;
		for (ntimes=0; ntimes < n_programmable; ntimes++) {
			for( offset=ofst_bnd; offset>=-ofst_bnd; offset-- ) {
				set_sampler(offset);
				delay01(5); // 250ns, 500ns, 1us and 2us programmable
				if(VOFF_POS == 0) break; 
			}
			offset_sum_pos += offset;
		}
		offset_sum_pos >>= ntimes_shft;
		
		//average offset
		if( lnx_SAMPLER_CAL_AVG_MODE_LANE_7_0 == 0)		
		offset = (offset_sum_neg + offset_sum_pos) >> 1;
		else if( lnx_SAMPLER_CAL_AVG_MODE_LANE_7_0 == 1) offset = offset_sum_pos;
		else offset = offset_sum_neg;
		
		set_sampler(offset);
		*SAMPLER_CAL_SAVE = offset;
		*SAMPLER_TRAIN_SAVE = offset;
	}

	lnx_SAMPLER_CAL_PASS_LANE = 1;
	
skip_out:

	SMPLR_CAL_EN = 0; 
	reg_SMPLR_CAL_EN_DLY_LANE = 0;	
	lnx_SAMPLER_CAL_DONE_LANE = 1;	

	reg_DFE_MCU_CLK_EN_LANE = 0;	
	reg_ANA_PU_DFE_LANE = 1; 
	reg_EN_DFE_F1TO3_LANE = 1;
	reg_DFE_CTRL_ANA_BYPASS_LANE = 0;
	reg_FFE_PULSE_EN_LANE = 1; //restore
    reg_RX_PULSE_SHORTB_LANE = 1;
	reg_DFE_EN_LANE = dfe_dis==0;  reg_DFE_DIS_LANE = dfe_dis;


}

int8_t get_sampler(void) BANKING_CTRL {
	int8_t dat;
	
	dat = (int8_t)*NEG;	
	dat += (int8_t)((*SIGN_POS) & 0x1f); 
	if(*SIGN_POS & 0x20) dat = -dat;

	return dat;
}

#if tag_edge_sampler_normal_en
void Edge_Sampler_Update(void) BANKING_CTRL {
	int8_t f1p_e, f1p_o, diff_e, diff_o;
	int8_t edge_e, edge_o;
	uint8_t step_size;	

	if( lnx_EDGE_SAMPLER_ADJ_LANE_7_0 == 0 ) return;
	step_size = lnx_EDGE_SAMPLER_ADJ_LANE_7_0;	
	
	// ---
	sampler_sel(OFST_F1P_D_E);
	f1p_e = get_sampler();
	diff_e = f1p_e - f1p_e_old;  
	#if _DEBUG
	Printf("\r\n f1p_e - f1p_e_old =(%d - %d) = %d ",f1p_e,  f1p_e_old, diff_e );	
	#endif
	if(step_size==1) diff_e >>= 1;
	else if(step_size==3) diff_e <<= 1;
	
	#if _DEBUG
	Printf(" --> %d ", diff_e );	
	#endif
	
	sampler_sel(OFST_EDGE_E);
	edge_e = get_sampler();	
	set_sampler(edge_e + diff_e);

	#if _DEBUG
	Printf("\r\n edge_e %d : ->  %d ",edge_e, (edge_e + diff_e) );	
	#endif
	
	// --- 
	sampler_sel(OFST_F1P_D_O);
	f1p_o = get_sampler();
	diff_o = f1p_o - f1p_o_old;  
	if(step_size==1) diff_o >>= 1;
	else if(step_size==3) diff_o <<= 1;

	sampler_sel(OFST_EDGE_O);
	edge_o = get_sampler();	
	set_sampler(edge_o + diff_o);

	f1p_e_old = f1p_e;	f1p_o_old = f1p_o;

}

void  save_sampler_edge(void) BANKING_CTRL{
		sampler_sel(OFST_F1P_D_E);
		f1p_e_old = get_sampler();
		sampler_sel(OFST_F1P_D_O);
		f1p_o_old = get_sampler();
}

#endif


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

void print_osft_f1p(void) BANKING_CTRL
{
	int8_t i, dat;
	
	Printf(" ofst(p/nDe/o,p/nSe/o,ee,eo)=", dat);		
	for(i=0; i<10; i++) {
		sampler_sel(i);
		dat = get_sampler();
		Printf("%d,", dat);		
	}
}
#endif




