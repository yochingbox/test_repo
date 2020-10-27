/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file train_if.c
* \purpose train interface protocol module
* \History
*	11/21/2015 Heejeong Ryu		Initial 
*/
#include "common.h"
#include "cdr_dfe_scheme.h"
#include "ph_ctrl.h"
#include "driver.h"

//control
#define HOLD 	0
#define INC		1
#define DEC 	2

                       //0=x, 1=ref1, 2=ref2, 3=n0_eq , 4=init, preset   
__code uint8_t c1_default[] = {  0, 11,  6,  0,  11,  0}; 
__code uint8_t c0_default[] = {  0, 0,   0,  0,  0,  0}; 
__code uint8_t cn1_default[] = { 0, 7,   4,  0,  2,  0}; 


__code uint8_t valid_coe_tb[] = {0x00, 0x01, 0x02, 0x04, 0x05, 0x08, 0x0a, 0x10, 0x14, 0x20, 0x28 };

#ifndef _56G_R1P0
void frame_marker_ready(void) {   	
	//uint16_t tx_train_frame_det_timer = 0;

	#ifdef _SUPPORT_TRAIN_IF_RX_DEBUG
	DBG_Printf("\r\n txtrain start frame lock wait..");
	#endif
 
	timeout = 0;
	//tx_train_frame_det_timer = (lnx_TX_TRAIN_FRAME_DET_TIMER_LANE_7_0 + 1)>>1 * 1000;
	//tx_train_frame_det_timer = 1000; //(lnx_TX_TRAIN_FRAME_DET_TIMER_LANE_7_0 + 1)>>1 * 1000;
	//timeout2_start(tx_train_frame_det_timer);
	timeout_start(1);  //1us //0.5uS
	while(reg_FRAME_LOCK_ISR_LANE==0 ) {
		if(timeout || TMR1==0) {
			lnx_TX_TRAIN_FRAME_LOCK_DET_FAIL_INT_LANE = 1;
			if(lnx_TX_TRAIN_FRAME_DET_TIMER_ENABLE_LANE == 1) break;
		}
		#if _DEBUG || _DBG_TRXTRAIN
		//DBG_Printf("^");
		#endif			
	}		
	
	#ifdef _SUPPORT_TRAIN_IF_RX_DEBUG
	if(lnx_TX_TRAIN_FRAME_LOCK_DET_FAIL_INT_LANE) {
		DBG_Printf(" ---> frame lock timeout!");
	}
	else {
		DBG_Printf("done");
	}
	#endif
}
#endif

void request_local_status(uint16_t dat)
{
#ifdef _56G_R1P0

#else
	if( train_comp && link_train_mode==0) 
	   reg_LOCAL_STATUS_FIELD_LANE_15_0 = dat | 0x8000 ;
	else 
	   reg_LOCAL_STATUS_FIELD_LANE_15_0 = dat;
	
	reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; 
	reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
#endif
}

/*
void get_tx_status()
{
	//lnx_TX_TRAIN_STATUS_DET_TIMEOUT_INT_LANE=0;	
	//DBG_Printf("\r\n Enter status loop" );
	timeout_start(2000); //2mS
	do {
		if(lnx_FAST_DFE_TIMER_EN_LANE==0) {
			cds = cds_table[CDS_STATUS_DATAADAPT];  //dfe_acc 
			cdr_state = TRAIN_ON;
			cdr_dfe_scheme();		
		}	
		if( lnx_TX_TRAIN_STATUS_DET_TIMER_ENABLE_LANE==1) {
			if( timeout || TMR1==0) { 
				lnx_TX_TRAIN_STATUS_DET_TIMEOUT_INT_LANE=1; 
				#if _DEBUG || _DBG_TRXTRAIN
				//DBG_Printf("%");
				#endif							
				break;} 
		}	
	} while(reg_INT_REMOTE_STATUS_ACK_LANE==0);
	
	timeout_stop;
	//DBG_Printf(". done" );
	
	#ifdef _SUPPORT_TRAIN_IF_RX_DEBUG
	DBG_Printf("\r\n[R] RS: %04x ", reg_REMOTE_STATUS_FIELD_LANE_15_0 );
	DBG_Printf(" - c1=%d, c0=%d, cn1=%d (RC:%02x%02x, c1/c0/cn1=%02x:%02x:%02x)-%x", tx_emph1_index, tx_amp_index, tx_emph0_index, reg_MCU_DEBUG4_LANE_7_0,reg_MCU_DEBUG5_LANE_7_0, reg_MCU_DEBUG9_LANE_7_0, reg_MCU_DEBUGA_LANE_7_0, reg_MCU_DEBUGB_LANE_7_0, reg_MCU_DEBUG6_LANE_7_0);
	#endif

}
*/
#ifndef _56GR1P1_TRAIN
void pam2_local_ctrl(uint8_t ce, uint8_t c1, uint8_t c0, uint8_t cn1) {

	tx_ctrl_stat = _EXIT_SUCCESS;

	while(reg_INT_REMOTE_STATUS_ACK_LANE);

	if( ce ) {			
		reg_INT_LOCAL_CTRL_RESET_LANE = 1;
		reg_INT_TX_PRESET_INDEX_LANE_3_0 = ce;
		reg_INT_LOCAL_CTRL_G0_LANE_1_0 = 0;
		reg_INT_LOCAL_CTRL_G1_LANE_1_0 = 0;
		reg_INT_LOCAL_CTRL_GN1_LANE_1_0 = 0;
	}
	else {		
		reg_INT_TX_PRESET_INDEX_LANE_3_0 = 0;
		reg_INT_LOCAL_CTRL_G0_LANE_1_0 = c0;
		reg_INT_LOCAL_CTRL_G1_LANE_1_0 = c1;
		reg_INT_LOCAL_CTRL_GN1_LANE_1_0 = cn1;
	}
	
	reg_INT_LOCAL_CTRL_REQ_LANE = 1;
	
	while(!reg_INT_REMOTE_STATUS_ACK_LANE);

	// -- check min/max
	tx.g0_is_max  = reg_INT_REMOTE_STATUS_G0_LANE_1_0 == 3;
	tx.g0_is_min  = reg_INT_REMOTE_STATUS_G0_LANE_1_0 == 2;
	tx.gn1_is_max = reg_INT_REMOTE_STATUS_GN1_LANE_1_0 == 3;
	tx.gn1_is_min = reg_INT_REMOTE_STATUS_GN1_LANE_1_0 == 2;
	tx.g1_is_max  = reg_INT_REMOTE_STATUS_G1_LANE_1_0 == 3;
	tx.g1_is_min  = reg_INT_REMOTE_STATUS_G1_LANE_1_0 == 2;
	
	#ifdef _SUPPORT_TRAIN_IF_RX_DEBUG
	//DBG_Printf(" REMOTE STATUS = gn1:%x g0:%x g1:%x", reg_REMOTE_STATUS_GN1_LANE_1_0, reg_REMOTE_STATUS_G0_LANE_1_0, reg_REMOTE_STATUS_G1_LANE_1_0);
	//DBG_Printf(" LS(%02x%02x)-%02x", reg_MCU_DEBUG_LANE_31_0_b1,reg_MCU_DEBUG_LANE_31_0_b0, reg_MCU_DEBUG7_LANE_7_0);
	#endif
	
	if(tag_TX_TRAIN_P2P_HOLD){
		tx.gn1_is_max = tx.gn1_is_max /*|| tx.g0_is_max*/;
		tx.gn1_is_min = tx.gn1_is_min || tx.g0_is_min;
		tx.g1_is_max  = tx.g1_is_max  || tx.g0_is_max;
		tx.g1_is_min  = tx.g1_is_min  || tx.g0_is_min;
	}
	
}

void pam4_local_ctrl(uint8_t ce, uint8_t c1, uint8_t c0, uint8_t cn1, uint8_t cn2) {

		BIT hit_limit = 0;
		tx_ctrl_stat = _EXIT_SUCCESS;
		
		while(reg_INT_REMOTE_STATUS_ACK_LANE);
		
		if( ce ) {	
			reg_INT_LOCAL_CTRL_PAT_LANE_1_0 = 2; //TODO : 2 or 3 from algorithm
			reg_INT_LOCAL_CTRL_RESET_LANE = 1;
			reg_INT_TX_PRESET_INDEX_LANE_3_0 = ce;
			reg_INT_LOCAL_CTRL_SEL_LANE_2_0 = 0; 
			reg_INT_LOCAL_CTRL_G_LANE_1_0 = 0;
		}
		else {
			reg_INT_LOCAL_CTRL_PAT_LANE_1_0 = 2; //TODO : 2 or 3 from algorithm 
			reg_INT_TX_PRESET_INDEX_LANE_3_0 = 0;
			if(c0) { 
				reg_INT_LOCAL_CTRL_SEL_LANE_2_0 = 0; 
				reg_INT_LOCAL_CTRL_G_LANE_1_0 = c0;
			}	
			if(c1) { 
				reg_INT_LOCAL_CTRL_SEL_LANE_2_0 = 1; 
				reg_INT_LOCAL_CTRL_G_LANE_1_0 = c1;
			}	
			if(cn1) { 
				reg_INT_LOCAL_CTRL_SEL_LANE_2_0 = 7; 
				reg_INT_LOCAL_CTRL_G_LANE_1_0 = cn1;
			}	
			if(cn2) { 
				reg_INT_LOCAL_CTRL_SEL_LANE_2_0 = 6; 
				reg_INT_LOCAL_CTRL_G_LANE_1_0 = cn2;
			}	
		}

		reg_INT_LOCAL_CTRL_REQ_LANE = 1;
	
		//check ack		
		while(reg_INT_REMOTE_STATUS_ACK_LANE==0); //get_tx_status();

		if(reg_INT_REMOTE_STATUS_G_LANE_2_0 == 1) { //updated
			hit_limit = 0;
		}
		else if(reg_INT_REMOTE_STATUS_G_LANE_2_0==6 || reg_INT_REMOTE_STATUS_G_LANE_2_0==4 || reg_INT_REMOTE_STATUS_G_LANE_2_0==2) {
			hit_limit = 1;
		}
		
		if(reg_INT_LOCAL_CTRL_G_LANE_1_0 == 1) { //INC
			switch(reg_INT_REMOTE_STATUS_SEL_LANE_2_0) {
			case 0: //C0
				tx.g0_is_max  = hit_limit;
			break;
			case 1: //C1
				tx.g1_is_max  = hit_limit;
			break;
			case 7: //CN1
				tx.gn1_is_max = hit_limit;
			break;
			case 6: //CN2
				tx.gn2_is_max = hit_limit;
			break;
			}
		}
		else if(reg_INT_LOCAL_CTRL_G_LANE_1_0 == 2) { //DEC
			switch(reg_INT_REMOTE_STATUS_SEL_LANE_2_0) {
			case 0: //C0
				tx.g0_is_min  = hit_limit;	
			break;
			case 1: //C1
				tx.g1_is_min  = hit_limit;
			break;
			case 7: //CN1
				tx.gn1_is_min = hit_limit;
			break;
			case 6: //CN2
				tx.gn2_is_min = hit_limit;
			break;
			}			
		}
		
}
#endif

void req_local_ctrl(uint8_t ce, uint8_t c1, uint8_t c0, uint8_t cn1, uint8_t cn2) {

#if 0
	#if _DEBUG || _DBG_TRXTRAIN
 	//DBG_Printf("\r\n++(Send_ctrl_to_tx) : %x", dat);
	#endif

	/*reg_MCU_DEBUG0_LANE_7_0 = 0x78;
	reg_MCU_DEBUG1_LANE_7_0 = pam4_en;
	reg_MCU_DEBUG2_LANE_7_0 = ce;
	reg_MCU_DEBUG3_LANE_7_0 = c1;
	reg_MCU_DEBUG4_LANE_7_0 = c0;
	reg_MCU_DEBUG5_LANE_7_0 = cn1;
	reg_MCU_DEBUG6_LANE_7_0 = cn2;*/
	
	if(pam4_en) {
		pam4_local_ctrl(ce, c1, c0, cn1, cn2);
	}	
	else {
		pam2_local_ctrl(ce, c1, c0, cn1);
	}			

	reg_INT_LOCAL_CTRL_REQ_LANE = 0;
	reg_INT_LOCAL_CTRL_RESET_LANE = 0;

	//TODO time out
#else
	drv_TXTRAIN_CTRL_PAT = 3;
	drv_TXTRAIN_CTRL_PRESET = ce;
	drv_TXTRAIN_CTRL_C1 = c1;
	drv_TXTRAIN_CTRL_C0 = c0;
	drv_TXTRAIN_CTRL_CN1 = cn1;
	drv_TXTRAIN_CTRL_CN2 = cn2;
	set_remote_tx();
#endif
} 

#ifndef _56GR1P1_TRAIN
void trainif_init(void)
{
	//c1_valid = 0; c0_valid = 0; cn1_valid = 0;

	tx_init_bit = 1; 
	
	train_comp = 0; 

	if(	/*(tx_init_bit == 1) &&*/ (phy_mode != SERDES)) { //!Ethernet
		request_local_status(0); //READY 
	}
	
	if( phy_mode == SERDES ) frame_marker_ready();	
	if( phy_mode == SAS ) sq_wait();
}
#endif

/*
void run_tx_ffe_preset( uint8_t inx)
{
	#ifdef _SUPPORT_TRAIN_IF_TX_DEBUG
	DBG_Printf("\r\n++(run_tx_ffe_preset) %d", inx);
	#endif
	
	if(phy_mode == 4) { //Ethernet 
		if(inx == 1) inx = 4;
		else inx = 5;
	}
	
	tx_emph1_index = c1_default[inx]; 
	tx_amp_index = c0_default[inx]; 
	tx_emph0_index = cn1_default[inx];
	
	check_min_max();
	
	if(tx_emph1_is_max)	  	 stat = C1_is_min; 
	else if(tx_emph1_is_min) stat = C1_is_max; 	
	else                     stat = C1_updated; 		
	if(tx_amp_is_max)	  	 stat |= C0_is_min; 					
	else if(tx_amp_is_min)   stat |= C0_is_max; 					
	else				     stat |= C0_updated;                   
	if(tx_emph0_is_max)	  	 stat |= Cn1_is_min; 					
	else if(tx_emph0_is_min) stat |= Cn1_is_max; 					
	else                     stat |= Cn1_updated;
	
	request_local_status(stat);  //update

}
*/



