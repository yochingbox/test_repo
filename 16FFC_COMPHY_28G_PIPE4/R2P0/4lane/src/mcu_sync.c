/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file mcu_sync.c
* \purpose MCU Sync Bus control For X4
* \History
*	8/28/2017 Heejeong Ryu		separate file from shared  
*/

#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK1
#endif

void master_sync_request(void)	BANKING_CTRL{ 
	if(serdes_ring_lane_en==0) { 
		SYNC_STATUS_LANE = ACK; SYNC_REQUEST_LANE = WAIT; 
		while(!reg_MCU_STATUS1_AND_31_0_b0); 
	}
}

void master_sync_clean(void) BANKING_CTRL {
	if(serdes_ring_lane_en==0) { 
		SYNC_STATUS_LANE = IDLE; SYNC_REQUEST_LANE = IDLE; 
		while(reg_MCU_STATUS1_OR_31_0_b0); 
	}
}	
		
void slave_sync_wait(void) BANKING_CTRL {
	if(serdes_ring_lane_en==0) {	
		while(SYNC_REQEST_LANE_READ!=WAIT); 
		SYNC_STATUS_LANE = ACK; 
		while(SYNC_REQEST_LANE_READ!=IDLE); 
		SYNC_STATUS_LANE = IDLE; 
	}
}

// ---

void pcie_master_sync_request(void)	BANKING_CTRL { 
	if(serdes_ring_lane_en==0) { 
		SYNC_STATUS_LANE = ACK; SYNC_REQUEST_LANE = WAIT; 
		sync_check = 0; 
		do { 
		  sync_check = (((SYNC_STATUS_LANE1_EN_READ==1)? SYNC_STATUS_LANE1_READ:1) 
			      && ((SYNC_STATUS_LANE2_EN_READ==1)? SYNC_STATUS_LANE2_READ:1) 
			      && ((SYNC_STATUS_LANE3_EN_READ==1)? SYNC_STATUS_LANE3_READ:1) 
				  ); 
		} while(!sync_check); }	
}				
							
void pcie_master_sync_clean(void)	BANKING_CTRL { 
	if(serdes_ring_lane_en==0) { 
		SYNC_STATUS_LANE = IDLE; SYNC_REQUEST_LANE = IDLE; 
		sync_check = 0; 
		do { 
		  sync_check = (((SYNC_STATUS_LANE1_EN_READ==1)? SYNC_STATUS_LANE1_READ:0) 
			     || ((SYNC_STATUS_LANE2_EN_READ==1)? SYNC_STATUS_LANE2_READ:0) 
			     || ((SYNC_STATUS_LANE3_EN_READ==1)? SYNC_STATUS_LANE3_READ:0) 
				 ); 
		} while(sync_check);  
	}	
}	


