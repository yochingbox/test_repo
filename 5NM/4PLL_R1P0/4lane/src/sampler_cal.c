/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file sampler_cal.c
* \purpose Sampler calibration
* \History
*	7/29/2019 Heejeong Ryu		Copied from 112G-A 
*/
#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK3
#pragma constseg BANK3
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

//#define TIMEOUT_SMPLR_CAL		1000

void config_sampler_ext(uint8_t val) BANKING_CTRL {
	if(BYPASS_DELAY>0) return;
	reg_SMPLR_D_BOT_E_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_D_BOT_O_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_D_MID_E_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_D_MID_O_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_D_TOP_E_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_D_TOP_O_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_S_BOT_E_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_S_BOT_O_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_S_MID_E_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_S_MID_O_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_S_TOP_E_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_S_TOP_O_CAL_INDV_EXT_EN_LANE = val;
	reg_SMPLR_EDGE_E_CAL_INDV_EXT_EN_LANE  = val;
	reg_SMPLR_EDGE_O_CAL_INDV_EXT_EN_LANE  = val;
}


void smplr_to_dfe_ofst(void) BANKING_CTRL {
	//uint8_t mask_dc;

	//mask_dc = (reg_DFE_DC_SIGN_XOR_LANE << 5) & 0x3f;

	#ifdef _56G_5NM
	reg_DFE_FEXTDC_D_BOT_E_LANE_6_0 = 0x40 ^ lnx_CAL_SMPLR_D_BOT_E_LANE_7_0;
	reg_DFE_FEXTDC_D_MID_E_LANE_6_0 = 0x40 ^ lnx_CAL_SMPLR_D_MID_E_LANE_7_0;
	reg_DFE_FEXTDC_D_TOP_E_LANE_6_0 = 0x40 ^ lnx_CAL_SMPLR_D_TOP_E_LANE_7_0;
	reg_DFE_FEXTDC_S_BOT_E_LANE_6_0 = 0x40 ^ lnx_CAL_SMPLR_S_BOT_E_LANE_7_0;
	reg_DFE_FEXTDC_S_MID_E_LANE_6_0 = 0x40 ^ lnx_CAL_SMPLR_S_MID_E_LANE_7_0;
	reg_DFE_FEXTDC_S_TOP_E_LANE_6_0 = 0x40 ^ lnx_CAL_SMPLR_S_TOP_E_LANE_7_0;
	reg_DFE_FEXTDC_E_E_LANE_6_0     = 0x40 ^ lnx_CAL_SMPLR_EDGE_E_LANE_7_0;

	reg_DFE_FEXTDC_D_BOT_O_LANE_6_0 = 0x40 ^ lnx_CAL_SMPLR_D_BOT_O_LANE_7_0;
	reg_DFE_FEXTDC_D_MID_O_LANE_6_0 = 0x40 ^ lnx_CAL_SMPLR_D_MID_O_LANE_7_0;
	reg_DFE_FEXTDC_D_TOP_O_LANE_6_0 = 0x40 ^ lnx_CAL_SMPLR_S_TOP_O_LANE_7_0;
	reg_DFE_FEXTDC_S_BOT_O_LANE_6_0 = 0x40 ^ lnx_CAL_SMPLR_S_BOT_O_LANE_7_0;
	reg_DFE_FEXTDC_S_MID_O_LANE_6_0 = 0x40 ^ lnx_CAL_SMPLR_S_MID_O_LANE_7_0;
	reg_DFE_FEXTDC_S_TOP_O_LANE_6_0 = 0x40 ^ lnx_CAL_SMPLR_D_TOP_O_LANE_7_0;
	reg_DFE_FEXTDC_E_O_LANE_6_0     = 0x40 ^ lnx_CAL_SMPLR_EDGE_O_LANE_7_0;

	#else 
		
	reg_DFE_FEXTDC_D_BOT_E_LANE_5_0 = 0x20 ^ lnx_CAL_SMPLR_D_BOT_E_LANE_7_0;
	reg_DFE_FEXTDC_D_MID_E_LANE_5_0 = 0x20 ^ lnx_CAL_SMPLR_D_MID_E_LANE_7_0;
	reg_DFE_FEXTDC_D_TOP_E_LANE_5_0 = 0x20 ^ lnx_CAL_SMPLR_D_TOP_E_LANE_7_0;
	reg_DFE_FEXTDC_S_BOT_E_LANE_5_0 = 0x20 ^ lnx_CAL_SMPLR_S_BOT_E_LANE_7_0;
	reg_DFE_FEXTDC_S_MID_E_LANE_5_0 = 0x20 ^ lnx_CAL_SMPLR_S_MID_E_LANE_7_0;
	reg_DFE_FEXTDC_S_TOP_E_LANE_5_0 = 0x20 ^ lnx_CAL_SMPLR_S_TOP_E_LANE_7_0;
	reg_DFE_FEXTDC_E_E_LANE_6_0     = 0x40 ^ lnx_CAL_SMPLR_EDGE_E_LANE_7_0;

	reg_DFE_FEXTDC_D_BOT_O_LANE_5_0 = 0x20 ^ lnx_CAL_SMPLR_D_BOT_O_LANE_7_0;
	reg_DFE_FEXTDC_D_MID_O_LANE_5_0 = 0x20 ^ lnx_CAL_SMPLR_D_MID_O_LANE_7_0;
	reg_DFE_FEXTDC_D_TOP_O_LANE_5_0 = 0x20 ^ lnx_CAL_SMPLR_S_TOP_O_LANE_7_0;
	reg_DFE_FEXTDC_S_BOT_O_LANE_5_0 = 0x20 ^ lnx_CAL_SMPLR_S_BOT_O_LANE_7_0;
	reg_DFE_FEXTDC_S_MID_O_LANE_5_0 = 0x20 ^ lnx_CAL_SMPLR_S_MID_O_LANE_7_0;
	reg_DFE_FEXTDC_S_TOP_O_LANE_5_0 = 0x20 ^ lnx_CAL_SMPLR_D_TOP_O_LANE_7_0;
	reg_DFE_FEXTDC_E_O_LANE_6_0     = 0x40 ^ lnx_CAL_SMPLR_EDGE_O_LANE_7_0;

	#endif		

}

void sampler_cal(void) BANKING_CTRL {
	
	PHY_STATUS =  ST_SAMPLER_CAL;

    reg_DFE_CTRL_CLK_OFF_LANE = 1;

	if( cmx_SAMPLER_CAL_EXT_EN ) {
        reg_DFE_CTRL_CLK_OFF_LANE = 0;
		lnx_SAMPLER_CAL_DONE_LANE = 1;
		return;
	}	

	//cur_time = get_time();

	config_sampler_ext(0); //disable indv_ext_en

	//odd

    smplr_odd();    //IPDOC driver

	//smplr_to_dfe_ofst();
	//config_sampler_ext(1);
	
	//-- even
    smplr_even();    //IPDOC driver
	
	if((lnx_SAMPLER_CAL_ODD_PASS_LANE  == 1) &&
       (lnx_SAMPLER_CAL_EVEN_PASS_LANE == 1))  {
        lnx_SAMPLER_CAL_PASS_LANE = 1;
    }
    else {
        lnx_SAMPLER_CAL_PASS_LANE = 0;
    }
	
	//smplr_to_dfe_ofst();

	lnx_CAL_SMPLR_D_BOT_E_LANE_7_0 = reg_SMPLR_D_BOT_E_CAL_RESULT_RD_LANE_6_0; 
	lnx_CAL_SMPLR_D_MID_E_LANE_7_0 = reg_SMPLR_D_MID_E_CAL_RESULT_RD_LANE_6_0; 
	lnx_CAL_SMPLR_D_TOP_E_LANE_7_0 = reg_SMPLR_D_TOP_E_CAL_RESULT_RD_LANE_6_0; 
	lnx_CAL_SMPLR_S_BOT_E_LANE_7_0 = reg_SMPLR_S_BOT_E_CAL_RESULT_RD_LANE_6_0; 
	lnx_CAL_SMPLR_S_MID_E_LANE_7_0 = reg_SMPLR_S_MID_E_CAL_RESULT_RD_LANE_6_0; 
	lnx_CAL_SMPLR_S_TOP_E_LANE_7_0 = reg_SMPLR_S_TOP_E_CAL_RESULT_RD_LANE_6_0; 
	lnx_CAL_SMPLR_EDGE_E_LANE_7_0 = (((reg_SMPLR_EDGE_E_CAL_RESULT_PN_SIGN_RD_LANE) << 6) \
			| (reg_SMPLR_EDGE_E_CAL_RESULT_P_RD_LANE_4_0 + reg_SMPLR_EDGE_E_CAL_RESULT_N_RD_LANE_4_0));
			
	lnx_CAL_SMPLR_D_BOT_O_LANE_7_0 = reg_SMPLR_D_BOT_O_CAL_RESULT_RD_LANE_6_0; 
	lnx_CAL_SMPLR_D_MID_O_LANE_7_0 = reg_SMPLR_D_MID_O_CAL_RESULT_RD_LANE_6_0; 
	lnx_CAL_SMPLR_S_TOP_O_LANE_7_0 = reg_SMPLR_D_TOP_O_CAL_RESULT_RD_LANE_6_0; 
	lnx_CAL_SMPLR_S_BOT_O_LANE_7_0 = reg_SMPLR_S_BOT_O_CAL_RESULT_RD_LANE_6_0; 
	lnx_CAL_SMPLR_S_MID_O_LANE_7_0 = reg_SMPLR_S_MID_O_CAL_RESULT_RD_LANE_6_0; 
	lnx_CAL_SMPLR_D_TOP_O_LANE_7_0 = reg_SMPLR_S_TOP_O_CAL_RESULT_RD_LANE_6_0;
	lnx_CAL_SMPLR_EDGE_O_LANE_7_0 = (((reg_SMPLR_EDGE_O_CAL_RESULT_PN_SIGN_RD_LANE) << 6) \
			| (reg_SMPLR_EDGE_O_CAL_RESULT_P_RD_LANE_4_0 + reg_SMPLR_EDGE_O_CAL_RESULT_N_RD_LANE_4_0));     	

	smplr_to_dfe_ofst();
	if(reg_RXSPEED_DIV_LANE_2_0 < 6)
		config_sampler_ext(1);
	else
		config_sampler_ext(0);
	
	lnx_CAL_SAMPLER_RES_LANE_7_0 = reg_OFST_RES_LANE;

	lnx_SAMPLER_CAL_DONE_LANE = 1;

    reg_DFE_CTRL_CLK_OFF_LANE = 0;
}
