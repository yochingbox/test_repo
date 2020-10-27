/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file tx_train_if.c
* \purpose tx train
* \History
*	8/4/2020 Heejeong Ryu		Initial 
*/
#include "common.h"

#define _DEBUG _DBG_TRAIN_IF_LVL0

#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg BANK2
#endif

/******************************************************
 * Request Local Control
*******************************************************/ 

void req_local_ctrl(uint8_t ce, uint8_t c1, uint8_t c0, uint8_t cn1, uint8_t cn2) BANKING_CTRL {
	bool hit_limit = 0;
	uint8_t remote_status_g;
	
	set_dfe_cont(1);	

	drv_TXTRAIN_CTRL_PAT = 3;
	#ifdef _SERDES_BUILD
	if(lnx_TX_TRAIN_CODING_MODE_LANE==1){
		// set TX req from saved RX setting
		if(save_gray_code_en>>1&1)// pre
			drv_TXTRAIN_CTRL_PAT = 3;
		else if(save_gray_code_en&1)// gray
			drv_TXTRAIN_CTRL_PAT = 2;
	}
	#endif
	drv_TXTRAIN_CTRL_PRESET = ce;
	drv_TXTRAIN_CTRL_C1 = c1;
	drv_TXTRAIN_CTRL_C0 = c0;
	drv_TXTRAIN_CTRL_CN1 = cn1;
	drv_TXTRAIN_CTRL_CN2 = cn2;

	do{
		set_remote_tx();

	#if _DEBUG
    //DBG_Printf("\r\n ce c1 c0 cn1 cn2 (%d %d %d %d %d) ", drv_TXTRAIN_CTRL_PRESET,drv_TXTRAIN_CTRL_C1,drv_TXTRAIN_CTRL_C0,drv_TXTRAIN_CTRL_CN1,drv_TXTRAIN_CTRL_CN2 );
	#endif

		if(drv_TXTRAIN_STATUS_VALID) {
	// -- check min/max
	if(!tx_pam2_en) { //pam4
		if(c0!=0) {
			tx.g0_is_max  = 0; tx.g0_is_min  = 0;				
			remote_status_g = drv_TXTRAIN_STATUS_C0;
			hit_limit = remote_status_g==2 || remote_status_g==4 || remote_status_g==6;
			if(hit_limit) {
				if(c0==ST_INC) { tx.g0_is_max  = 1; DBG_Printf(" g0max");}
				else if(c0==ST_DEC) { tx.g0_is_min  = 1; DBG_Printf(" g0min");}	
			}			
		}
		if(cn1!=0) {
			tx.gn1_is_max  = 0; tx.gn1_is_min  = 0;
			remote_status_g = drv_TXTRAIN_STATUS_CN1;
			hit_limit = remote_status_g==2 || remote_status_g==4 || remote_status_g==6;
			if(hit_limit) {
				if(cn1==ST_INC) { tx.gn1_is_max  = 1; DBG_Printf(" gn1max");}
				else if(cn1==ST_DEC) { tx.gn1_is_min  = 1; DBG_Printf(" gn1min"); }		
			}		
		}			
		if(c1!=0) {
			tx.g1_is_max  = 0; tx.g1_is_min  = 0;
			remote_status_g = drv_TXTRAIN_STATUS_C1;
			hit_limit = remote_status_g==2 || remote_status_g==4 || remote_status_g==6;
			if(hit_limit) {
				if(c1==ST_INC) { tx.g1_is_max  = 1; DBG_Printf(" g1max"); }
				else if(c1==ST_DEC) { tx.g1_is_min  = 1; DBG_Printf(" g1min"); }		
			}		
		}			
		if(cn2!=0) {
			tx.gn2_is_max  = 0; tx.gn2_is_min  = 0;
			remote_status_g = drv_TXTRAIN_STATUS_CN2;
			hit_limit = remote_status_g==2 || remote_status_g==4 || remote_status_g==6;
			if(hit_limit) {
				if(cn2==ST_INC) { tx.gn2_is_max  = 1; DBG_Printf(" gn2max"); }
				else if(cn2==ST_DEC) { tx.gn2_is_min  = 1;	DBG_Printf(" gn2min"); }
			}		
		}		
	}
	else {	//pam2
		tx.g0_is_max  = drv_TXTRAIN_STATUS_C0 == 3;
		tx.g0_is_min  = drv_TXTRAIN_STATUS_C0 == 2;
		tx.gn1_is_max = drv_TXTRAIN_STATUS_CN1 == 3;
		tx.gn1_is_min = drv_TXTRAIN_STATUS_CN1 == 2;
		tx.g1_is_max  = drv_TXTRAIN_STATUS_C1 == 3;
		tx.g1_is_min  = drv_TXTRAIN_STATUS_C1 == 2;
	}

	#if _DEBUG
//		DBG_Printf("\r\n remote_status:%02x  (max min): g0(%d %d) gn1(%d %d) g1(%d %d) gn2(%d %d)",remote_status_g, tx.g0_is_max, tx.g0_is_min, tx.gn1_is_max,tx.gn1_is_min,tx.g1_is_max,tx.g1_is_min,tx.g1_is_max,tx.g1_is_min,tx.gn2_is_max, tx.gn2_is_min);
	#endif

		}

   		if(lnx_TX_TRAIN_IF_DEBUG_STEP_MODE_LANE_7_0==1) {
			lnx_DFE_DBG_STEP_LANE_7_0 = 1; 		
			while(lnx_DFE_DBG_STEP_LANE_7_0==1);	
   		}
	
		if(drv_TXTRAIN_STATUS_VALID) break;			
	
	} while ( (reg_TRX_TRAIN_TIMEOUT_ISR_LANE==0 ) && reg_TX_TRAIN_ENABLE_RD_LANE); 
	
	set_dfe_cont(0);

}

