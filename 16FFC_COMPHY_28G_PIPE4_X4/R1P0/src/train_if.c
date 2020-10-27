/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file train_if.c
* \purpose train interface protocol module
* \History
*	11/21/2015 Heejeong Ryu		Initial 
*/
#include "common.h"

//control
#define HOLD 	0
#define INC		1
#define DEC 	2

                       //0=x, 1=ref1, 2=ref2, 3=n0_eq , 4=init, preset   
__code uint8_t c1_default[] = {  0, 11,  6,  0,  11,  0}; 
__code uint8_t c0_default[] = {  0, 0,   0,  0,  0,  0}; 
__code uint8_t cn1_default[] = { 0, 7,   4,  0,  2,  0}; 

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

void request_local_status(uint16_t dat)
{
	if( train_comp && link_train_mode==0) 
	   reg_LOCAL_STATUS_FIELD_LANE_15_0 = dat | 0x8000 ;
	else 
	   reg_LOCAL_STATUS_FIELD_LANE_15_0 = dat;
	
	reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; 
	reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
	
}

void request_local_ctrl(uint16_t dat)
{
	//#ifdef _SUPPORT_TRAIN_IF_RX_DEBUG
	//reg_MCU_DEBUG7_LANE_7_0 = 0;
	//reg_MCU_DEBUG6_LANE_7_0 = 0;
	//#endif
	#ifdef _SUPPORT_TRAIN_IF_MEASURE
	reg_PIN_GPO_LANE_7_0 = reg_PIN_GPO_LANE_7_0 | 0x02;
	#endif
 	reg_LOCAL_CTRL_FIELD_LANE_15_0 = dat;
	
	reg_LOCAL_CTRL_FIELD_VALID_LANE = 1; 
	reg_LOCAL_CTRL_FIELD_VALID_LANE = 0;

	short_delay(); //delay(Tus);
	
	#ifdef _SUPPORT_TRAIN_IF_MEASURE
	reg_PIN_GPO_LANE_7_0 = reg_PIN_GPO_LANE_7_0 & 0xfd;
	#endif
	#ifdef _SUPPORT_TRAIN_IF_RX_DEBUG
	DBG_Printf("\r\n[R] LC: %04x", reg_LOCAL_CTRL_FIELD_LANE_15_0);
	#endif

}

void get_tx_status(uint8_t check) {
	
	//lnx_TX_TRAIN_STATUS_DET_TIMEOUT_INT_LANE=0;	
	//DBG_Printf("\r\n Enter status loop" );
	timeout_start(2000); //2mS
	 do {
		if(cmx_TRAIN_SIM_EN==0 && !tx_status_pcie_mode) {
			cds_tb = cds_table[CDS_DATAADAPT];  //dfe_acc 
			cdr_state = TRAIN_ON;
			cdr_dfe_scheme();		
		}	

		if(check==0) {
			if( (device_remote_status_bits_lo&0x3f)==0 ) break;
		}
		else {
			if( (device_remote_status_bits_lo&0x3f)!=0 ) break;
		}
		
		if( lnx_TX_TRAIN_STATUS_DET_TIMER_ENABLE_LANE==1) {
			if( timeout || TMR1==0) { 
				lnx_TX_TRAIN_STATUS_DET_TIMEOUT_INT_LANE=1; 
				#if _DEBUG || _DBG_TRXTRAIN
				//DBG_Printf("%");
				#endif							
				break;} 
		}					
	//} while( reg_REMOTE_STATUS_VALID_ISR_LANE==0); //bug! cannot check.
	} while(1);
	
	timeout_stop;
	//DBG_Printf(". done" );
	           
	
	reg_REMOTE_STATUS_VALID_ISR_LANE = 0;
	
	#ifdef _SUPPORT_TRAIN_IF_RX_DEBUG
	DBG_Printf("\r\n[T] RS: %04x ", reg_REMOTE_STATUS_FIELD_RD_LANE_15_0 );
	DBG_Printf(" - c1=%d, c0=%d, cn1=%d (RC:%02x%02x, c1/c0/cn1=%02x:%02x:%02x)-%x", tx_emph1_index, tx_amp_index, tx_emph0_index, reg_MCU_DEBUG4_LANE_7_0,reg_MCU_DEBUG5_LANE_7_0, reg_MCU_DEBUG9_LANE_7_0, reg_MCU_DEBUGA_LANE_7_0, reg_MCU_DEBUGB_LANE_7_0, reg_MCU_DEBUG6_LANE_7_0);
	#endif
	
}

void Send_ctrl_to_tx(uint16_t dat)
{
	#if _DEBUG || _DBG_TRXTRAIN
 	//DBG_Printf("\r\n++(Send_ctrl_to_tx) : %x", dat);
	#endif
	
		tx_ctrl_stat = _EXIT_SUCCESS;

		reg_REMOTE_STATUS_VALID_ISR_LANE = 0;
		//reg_REMOTE_CTRL_VALID_ISR_LANE = 0; 
		
		if( reg_EYE_OPEN_EN_RD_LANE ) {
			//cds_tb = cds_table[CDS_DATAF0D];
			//cdr_state = TRAIN_ON;
			//cdr_dfe_scheme();
			reg_EYE_OPEN_LANE_5_0 = train.eo; 
			reg_LOCAL_CTRL_FIELD_VALID_LANE = 1; 
			reg_LOCAL_CTRL_FIELD_VALID_LANE = 0;			
		}
		else {
			request_local_ctrl(dat);	
		}
		
		//check ack
		get_tx_status(1);
		if( (reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b0&0x3f)!=0 ) { // get !0?
		
			// -- check min/max
			tx.g0_is_max  = reg_REMOTE_STATUS_G0_LANE_1_0 == 3;
			tx.g0_is_min  = reg_REMOTE_STATUS_G0_LANE_1_0 == 2;
			tx.gn1_is_max = reg_REMOTE_STATUS_GN1_LANE_1_0 == 3;
			tx.gn1_is_min = reg_REMOTE_STATUS_GN1_LANE_1_0 == 2;
			tx.g1_is_max  = reg_REMOTE_STATUS_G1_LANE_1_0 == 3;
			tx.g1_is_min  = reg_REMOTE_STATUS_G1_LANE_1_0 == 2;
			
			#ifdef _SUPPORT_TRAIN_IF_RX_DEBUG
			DBG_Printf(" REMOTE STATUS = gn1:%x g0:%x g1:%x", reg_REMOTE_STATUS_GN1_LANE_1_0, reg_REMOTE_STATUS_G0_LANE_1_0, reg_REMOTE_STATUS_G1_LANE_1_0);
			//DBG_Printf(" LS(%02x%02x)-%02x", reg_MCU_DEBUG_LANE_31_0_b1,reg_MCU_DEBUG_LANE_31_0_b0, reg_MCU_DEBUG7_LANE_7_0);
			#endif
			
			if(tag_TX_TRAIN_P2P_HOLD){
				tx.gn1_is_max = tx.gn1_is_max /*|| tx.g0_is_max*/;
				tx.gn1_is_min = tx.gn1_is_min || tx.g0_is_min;
				tx.g1_is_max  = tx.g1_is_max  || tx.g0_is_max;
				tx.g1_is_min  = tx.g1_is_min  || tx.g0_is_min;
			}
		}
		else 
			tx_ctrl_stat = _EXIT_FAIL;
			
		//send hold
		if(tx_pipe4_en==0) {
			request_local_ctrl(0); 
			
			//check ready
			get_tx_status(0);
			if((device_remote_status_bits_lo&0x3f)!=0 ) // get 0?
				tx_ctrl_stat = _EXIT_FAIL;
		
			#ifdef _SUPPORT_TRAIN_IF_RX_DEBUG
			//DBG_Printf("\r\n[R] RS: %04x --", reg_REMOTE_STATUS_FIELD_LANE_15_0);
			#endif
			
		}
	timeout = 0;

} 

void trainif_init(void)
{
	//c1_valid = 0; c0_valid = 0; cn1_valid = 0;

	/*if( phy_mode == SERDES )*/ frame_marker_ready();	//SAS need also frame lock check.
	if( phy_mode == SAS ) sq_wait();

	if(	/*(tx_init_bit == 1) &&*/ (phy_mode != SERDES)) { //!Ethernet
		request_local_status(0); //READY 
		delay(Tus);
		
		//wait tx_init_bit=0
		while((reg_REMOTE_STATUS_VALID_ISR_LANE==0 || ((reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b1&0x40)!=0x00)) );
								
	}

	train_comp = 0; 
	tx_init_bit = 0; 
	
}

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
