/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file cli.c
* \purpose Test 
* \History
*	6/27/2017 Heejeong Ryu		Initial 
*/
#include "common.h"

#ifdef SUPPORT_CLI
void cli_monitor(void) {

	if(lnx_FORCE_CDS_CTRL_EN_LANE) {
		cdr_state = lnx_FORCE_CDS_STATE_LANE;
		cds_tb = lnx_FORCE_CDS_CTRL_LANE_15_0;
	}
	adapt_slicer_en = lnx_ADAPT_SLICER_EN_LANE_7_0;
	adapt_data_en =	lnx_ADAPT_DATA_EN_LANE_7_0;
	train.phase_offset_data = (int8_t)lnx_TRAIN_PH_OS_DATA_2C_LANE_7_0;
	train.phase_offset_esm = (int8_t)lnx_TRAIN_PH_OS_ESM_2C_LANE_7_0;
	ph_control_mode = tag_TRAIN_PH_CONTROL_MODE;
	
	switch(lnx_CLI_CMD_LANE_7_0) {
	case 0x01: cdr_dfe_init(); cdr_dfe_scheme(); break;
	case 0x02: dfe_adaptation(); break;
	case 0x03: phase_control_func(); break;		
	case 0x04: dfe_save(); break;		
	case 0x11: set_ph_mode(); break;
#ifdef SUPPORT_NEW_CDS
	case 0x12: set_ph_dat(train.phase_offset_data); break;	
	case 0x13: set_ph_esm(train.phase_offset_esm); break;
#endif
	case 0x16: if(cmx_EOM_ALIGN_CAL_EN) eom_align_cal(); break;	
	case 0x17: eom_ui_align(); break;		
	default: break;
	}
	
	lnx_CLI_START_LANE = 0;
}

#endif

