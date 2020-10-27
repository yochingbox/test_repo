/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file ph_ctrl_rom.c
* \purpose Phase Control Rom code
* \History
*	5/1/2020 Heejeong Ryu		moved some function from ph_ctrl.c
*/

#include "common.h"
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg CSEG
#endif

#define tag_CDR_HALF_UI_PI_CODE half_ui_code 

/* **************************************************
 * EOM_PHASE_UPDATE
 *      move update_ph code from current phase
 * Args:
 *      eom_dpher_tgt
 * Inputs:
 *      tag_CDR_OS_PH_JMP_STEP
 * Outputs:
 *      reg_ALIGN90_REF_LANE_5_0
 */
void move_eom_phase(int16_t update_ph) BANKING_CTRL {
	int16_t ph_os_tmp;

//// 	#if (_DBG_PHASE_TRAIN)// || _DBG_RXTRAIN
//if(update_ph != 0)
//	Printf("\r\n\t\t eom_ph=%d --> move %d code:",reg_EOM_DPHER_LANE_6_0, update_ph);
//	#endif
	while( update_ph != 0 ) 
	{		
		ph_os_tmp = (int16_t)reg_EOM_DPHER_LANE_6_0;
		
		if(update_ph >= tag_CDR_OS_PH_JMP_STEP) {
			update_ph -= tag_CDR_OS_PH_JMP_STEP;
			ph_os_tmp += tag_CDR_OS_PH_JMP_STEP;
		}
		else if(update_ph <= -tag_CDR_OS_PH_JMP_STEP) {
			update_ph += tag_CDR_OS_PH_JMP_STEP;
			ph_os_tmp -= tag_CDR_OS_PH_JMP_STEP;	
		}
		else {
			ph_os_tmp += update_ph;	
			update_ph = 0;
		}
	
 		reg_EOM_DPHER_LANE_6_0 = (uint8_t)ph_os_tmp & 0x7f;		
		short_delay(); //delay01(10);
		reg_EOM_DPHERCK_LANE = 1;
		reg_EOM_DPHERCK_LANE = 0;
		
//		#if (_DBG_PHASE_TRAIN)// || _DBG_RXTRAIN)
//		Printf(" %d(%d),", update_ph, reg_EOM_DPHER_LANE_6_0);
//		#endif
	
	}		
}


