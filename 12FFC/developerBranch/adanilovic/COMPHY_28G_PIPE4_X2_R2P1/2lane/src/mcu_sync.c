/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file mcu_sync.c
* \purpose MCU Sync Bus control For X2
* \History
*	8/28/2017 Heejeong Ryu		separate file from shared  
*/

#include "common.h"

#ifdef USE_BANKING
#pragma codeseg BANK1
#endif


#if 0
void master_sync_request(void) BANKING_CTRL	{ 
	if(serdes_ring_lane_en==0) { 
		/*if(reg_PHY_CONFIG_1_0&0x02) {
			reg_MCU_LOCAL_COMMAND_7_0 = 0x04;
			reg_MCU_LOCAL_REQ = 0;
			reg_MCU_LOCAL_REQ = 1;
			
			while(reg_MCU_REMOTE_ACK_RD==0 || reg_MCU_REMOTE_STATUS_RD_7_0!=4);
		}*/	
	
		SYNC_STATUS_LANE = ACK; SYNC_REQUEST_LANE = WAIT; 
		while(!reg_MCU_STATUS1_AND_31_0_b0) {
			if(cmx_LANE_DIS_LANE0_7_0 || cmx_LANE_DIS_LANE1_7_0) break;
		} 
	}
}

void master_sync_clean(void) BANKING_CTRL {
	if(serdes_ring_lane_en==0) { 
		/*if(reg_PHY_CONFIG_1_0&0x02) {
			reg_MCU_LOCAL_COMMAND_7_0 = 0x00; //request status clear
			reg_MCU_LOCAL_REQ = 0;
			reg_MCU_LOCAL_REQ = 1;
			
			while(reg_MCU_REMOTE_ACK_RD!=0 || reg_MCU_REMOTE_STATUS_RD_7_0!=0);
		}*/	
		
		SYNC_STATUS_LANE = IDLE; SYNC_REQUEST_LANE = IDLE; 
		while(reg_MCU_STATUS1_OR_31_0_b0) {
			if(cmx_LANE_DIS_LANE0_7_0 || cmx_LANE_DIS_LANE1_7_0) break;
		} 
	}
}	
		
void slave_sync_wait(void) BANKING_CTRL {
	if(serdes_ring_lane_en==0) {	
	
		while(SYNC_REQEST_LANE_READ!=WAIT){
			if(cmx_LANE_DIS_LANE0_7_0 || cmx_LANE_DIS_LANE1_7_0) break;
		} 
		SYNC_STATUS_LANE = ACK; 
	
		//---
		
		//if(reg_PHY_CONFIG_1_0&0x01) {
		//	while(reg_MCU_REMOTE_REQ_RD!=0 || reg_MCU_REMOTE_COMMAND_RD_7_0!=0);
        //
		//	reg_MCU_LOCAL_STATUS_7_0 = 0x00;
		//	reg_MCU_LOCAL_ACK = 0;			
		//}			
		
		while(SYNC_REQEST_LANE_READ!=IDLE){
			if(cmx_LANE_DIS_LANE0_7_0 || cmx_LANE_DIS_LANE1_7_0) break;
		} 
		SYNC_STATUS_LANE = IDLE; 
	}
}
#endif
// ---

/* not used
void pcie_master_sync_request(void)	BANKING_CTRL { 
	if(serdes_ring_lane_en==0) { 
		SYNC_STATUS_LANE = ACK; SYNC_REQUEST_LANE = WAIT; 
		sync_check = 0; 
		do { 
		  sync_check = (((SYNC_STATUS_LANE1_EN_READ==1)? SYNC_STATUS_LANE1_READ:1) 
			      //&& ((SYNC_STATUS_LANE2_EN_READ==1)? SYNC_STATUS_LANE2_READ:1) 
			      //&& ((SYNC_STATUS_LANE3_EN_READ==1)? SYNC_STATUS_LANE3_READ:1) 
				  ); 
		} while(!sync_check); }	
}				
							
void pcie_master_sync_clean(void) BANKING_CTRL { 
	if(serdes_ring_lane_en==0) { 
		SYNC_STATUS_LANE = IDLE; SYNC_REQUEST_LANE = IDLE; 
		sync_check = 0; 
		do { 
		  sync_check = (((SYNC_STATUS_LANE1_EN_READ==1)? SYNC_STATUS_LANE1_READ:0) 
			     //|| ((SYNC_STATUS_LANE2_EN_READ==1)? SYNC_STATUS_LANE2_READ:0) 
			     //|| ((SYNC_STATUS_LANE3_EN_READ==1)? SYNC_STATUS_LANE3_READ:0) 
				 ); 
		} while(sync_check);  
	}	
}	
*/
// ---


void check_master_phy_status(uint8_t cmd) BANKING_CTRL {
	
	if(reg_MASTER_PHY_EN) return;
			
		//check master phy status
	if(mcuid==master_mcu) {
		sync_check = 0;
		do {
			reg_MCU_LOCAL_COMMAND_7_0 = cmd;
			reg_MCU_LOCAL_REQ = 0;		
			reg_MCU_LOCAL_REQ = 1;		
	
			delay01(10);	
			
			sync_check = (reg_MCU_REMOTE_ACK_RD==1 && reg_MCU_REMOTE_STATUS_RD_7_0==cmd);				
		
		} while(!sync_check);	
		
	} 
	else {
		while(!(reg_MCU_REMOTE_ACK_RD==1 && reg_MCU_REMOTE_STATUS_RD_7_0==cmd));
	}	
		
		// clear command/status
	if(mcuid==master_mcu) {
		sync_check = 0;
		do {
			reg_MCU_LOCAL_COMMAND_7_0 = CHECK_CLEAR;
			reg_MCU_LOCAL_REQ = 0;		
			reg_MCU_LOCAL_REQ = 1;		
	
			delay01(10);	
			
			sync_check = (reg_MCU_REMOTE_ACK_RD==0 && reg_MCU_REMOTE_STATUS_RD_7_0==CHECK_CLEAR);				
		
		} while(!sync_check);	
	} 
	else {
		while(!(reg_MCU_REMOTE_ACK_RD==0 && reg_MCU_REMOTE_STATUS_RD_7_0==CHECK_CLEAR));
	}	
			
		
}

