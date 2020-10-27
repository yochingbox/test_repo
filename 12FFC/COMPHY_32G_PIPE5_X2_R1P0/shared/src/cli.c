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

/*
	if(lnx_FORCE_CDS_CTRL_EN_LANE) {
		cdr_state = lnx_FORCE_CDS_STATE_LANE;
		cds_tb = lnx_FORCE_CDS_CTRL_LANE_15_0;
	}
	adapt_slicer_en = lnx_ADAPT_SLICER_EN_LANE_7_0;
	adapt_data_en =	lnx_ADAPT_DATA_EN_LANE_7_0;
	train.phase_offset_data = (int8_t)lnx_TRAIN_PH_OS_DATA_2C_LANE_7_0;
	train.phase_offset_esm = (int8_t)lnx_TRAIN_PH_OS_ESM_2C_LANE_7_0;
	ph_control_mode = tag_TRAIN_PH_CONTROL_MODE;
*/	
	switch(lnx_CLI_CMD_LANE_7_0) {
	//case 0x01: cdr_dfe_init(); cdr_dfe_scheme(); break;
	//case 0x02: dfe_adaptation(); break;
	//case 0x03: phase_control_func(); break;		
	//case 0x04: dfe_save(); break;	
    //case 0x05: dc_load_ram(0); break;	
	//case 0x11: set_ph_mode(); break;		
	//case 0x12: set_ph_dat(train.phase_offset_data); break;	
	//case 0x13: set_ph_esm(train.phase_offset_esm); break;	
	//case 0x16: eom_align_cal_ram(); break;	
	case 0x17:  
		#ifdef 	_28G_X2
#ifdef SUPPORT_EXT_MEM
		eom_align_cal_ram(); 
#else
		eom_align_cal(); 
#endif
		#else
		eom_align_cal_01(); 
		#endif	
	break;		
	//#ifdef SUPPORT_PCIE_TXFFE_WA_FORCE_CTRL
	//case 0x18: txffe_force_ctrl(); break;
	//#endif

        case 0x23: set_remote_tx(); break;

	default: break;
	}
	
	lnx_CLI_START_LANE = 0;
}

#endif

