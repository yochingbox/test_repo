/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file sampler_cal.c
* \purpose Sampler calibration
* \History
*	3/20/2019 Heejeong Ryu		created for ROM code update
*/
#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK1
#pragma constseg BANK1
#endif

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

__code uint8_t r_training_bound_tb0[] = {
    19, //dummy
	19, //31*0.6   //OFST_RES=0 //0.8,0.7,0.6,0.5
	22, //31*0.7   //OFST_RES=1
	25  //31*0.8   //OFST_RES=2
};

	
void sampler_cal_ram() BANKING_CTRL {
	int8_t i,j,k;
	uint8_t ntimes, ntimes_shft, out_of_bound;
	int8_t  offset;
	uint8_t ofst_res_f;
	int16_t offset_sum_neg, offset_sum_pos;
	int8_t  ofst_bnd; 

	PHY_STATUS = ST_SAMPLER_CAL;
	lnx_SAMPLER_RES_CAL_DONE_LANE = 0;
	lnx_SAMPLER_CAL_DONE_LANE = 0;

	// init
	offset = 0;
	if(cal_start_on==0) {
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
	if(phy_mode == SERDES)
	reg_PATH_DISABLE_EDGE_LANE = 0;
	
	// enable ane dfe clock path
	CKCON = 0x07 ;  //MCU WAIT time the slowest
	reg_RESET_DFE_LANE = 0;
	CKCON = 0x00 ; //MCU WAIT time setting back to normal.
	reg_ANA_REG_DFEE_RST_LANE = 0;
	reg_ANA_REG_DFEO_RST_LANE = 0;
	reg_DFE_CLK_OFF_LANE = 1;		// First, disable DFE_CLK
	reg_DFE_MCU_CLK_EN_LANE = 1;	// Second, enable DFE_MCU_CLK
	reg_DFE_EN_LANE = 0; reg_DFE_DIS_LANE = 1;

	delay01(100); //10
	}
	
	if( cmx_SAMPLER_CAL_EXT_EN ) {
		OFST_RES = lnx_CAL_SAMPLER_RES_LANE_7_0;	
		//sampler_load_reset();
		for(i=0; i<10; i++) {
			sampler_sel(i);
			//offset = -8; //test
#ifdef _28G_X2_DFE				
			if(offset >= 0)
				*SAMPLER_CAL_SM_SAVE = offset | 0x40;
			else
				*SAMPLER_CAL_SM_SAVE = -offset;
#else				
			*SAMPLER_CAL_SAVE = offset; 
#endif				
			offset = *SAMPLER_CAL_SAVE;
			set_sampler(offset);
		}		

		/*//test
		reg_DFE_FEXTDC_D_P_E_LANE_6_0 = 0x51;
		reg_DFE_FEXTDC_D_N_E_LANE_6_0 = 0x52;
		reg_DFE_FEXTDC_S_P_E_LANE_6_0 = 0x53;
		reg_DFE_FEXTDC_S_N_E_LANE_6_0 = 0x54;
		reg_DFE_FEXTDC_D_P_O_LANE_6_0 = 0x55;
        reg_DFE_FEXTDC_D_N_O_LANE_6_0 = 0x56;
		reg_DFE_FEXTDC_S_P_O_LANE_6_0 = 0x57;
		reg_DFE_FEXTDC_S_N_O_LANE_6_0 = 0x58;		
		*/
		lnx_SAMPLER_RES_CAL_DONE_LANE = 1;
		lnx_SAMPLER_CAL_DONE_LANE = 1;
		
		if(cal_start_on) return;
		else goto skip_out;
	}	
		
	//PHY_STATUS = ST_SAMPLER_CAL;
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
				offset = r_training_bound_tb0[j]; //always use 80%
				*SIGN_POS = 0x20 | offset;	
				*NEG = offset;	
				
				out_of_bound = 0;
				delay01(160); //20 // 2us, 4us, 8us and 16us programmable
				for (k=1; k<=smpl_size; k++) {
					if (VOFF_POS == 1) {
						out_of_bound = 1;
						break;
					}
				}
				
				*SIGN_POS = offset;
				delay01(160); //20 // 2us, 4us, 8us and 16us programmable
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
		ofst_bnd = r_training_bound_tb0[OFST_RES]; ofst_bnd<<=1;
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
				delay01(50); //5 // 250ns, 500ns, 1us and 2us programmable
				if(VOFF_POS == 1) break; 
			}
			offset_sum_neg += offset;
		}
		offset_sum_neg >>= ntimes_shft;
		
		offset_sum_pos = 0;
		for (ntimes=0; ntimes < n_programmable; ntimes++) {
			for( offset=ofst_bnd; offset>=-ofst_bnd; offset-- ) {
				set_sampler(offset);
				delay01(50); //5 // 250ns, 500ns, 1us and 2us programmable
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
#ifdef _28G_X2_DFE	
		if(offset >= 0)
			*SAMPLER_CAL_SM_SAVE = offset | 0x40;
		else
			*SAMPLER_CAL_SM_SAVE = -offset;		
#else			
		*SAMPLER_CAL_SAVE = offset;
		//*SAMPLER_TRAIN_SAVE = offset;
#endif			
	}
	
	lnx_SAMPLER_CAL_PASS_LANE = 1;
	
skip_out:
#ifndef _28G_X2_DFE
	dc_load(2);	//save to dfe_sm, dfe_fextdc
#endif

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

