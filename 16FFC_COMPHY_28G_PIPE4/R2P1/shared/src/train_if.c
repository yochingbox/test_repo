/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file train_if.c
* \purpose train interface protocol module
* \History
*	11/21/2015 Heejeong Ryu		Initial 
*/
#include "common.h"
#ifdef USE_BANKING
#ifdef _28G_X2
#pragma codeseg BANK1
#pragma constseg CSEG
#else
#pragma codeseg BANK4
#pragma constseg CSEG
#endif
#endif
//control
#define HOLD 	0
#define INC		1
#define DEC 	2

//                       //0=x, 1=ref1, 2=ref2, 3=n0_eq , 4=init, preset   
//__code uint8_t c1_default[] = {  0, 11,  6,  0,  11,  0}; 
//__code uint8_t c0_default[] = {  0, 0,   0,  0,  0,  0}; 
//__code uint8_t cn1_default[] = { 0, 7,   4,  0,  2,  0}; 

#ifdef _SATA_SERDES_BUILD
void frame_marker_ready(void) BANKING_CTRL {   	
	//uint16_t tx_train_frame_det_timer = 0;
	
	#ifdef _SUPPORT_TRAIN_IF_RX_DEBUG
	DBG_Printf("\r\n txtrain start frame lock wait..");
	#endif
 
	while(reg_FRAME_LOCK_LANE==0 ) {
		if(lnx_TX_TRAIN_FRAME_LOCK_DET_FAIL_INT_LANE) {
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
#endif //_SATA_SERDES_BUILD

void request_local_status(void) BANKING_CTRL
{
	uint16_t dat;
	//uint8_t error_status;

	EA = 0;		
		
	#ifdef SUPPORT_SAS_TXTRAIN_IF_ERROR_HANDLE
	if(phy_mode <= SAS &&  reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE==0) {	
		if(remote_error_check(0)==_EXIT_SUCCESS) { 	
		
			//error_status = (reg_LOCAL_CTRL_FIELD_LANE_15_0_b1&0xe0)==0xe0?1:0;
			//if(error_status) {
			//	reg_LOCAL_CTRL_FIELD_LANE_15_0 = save_local_ctrl;
			//	reg_LOCAL_CTRL_FIELD_VALID_LANE = 1; 
			//	reg_LOCAL_CTRL_FIELD_VALID_LANE = 0;				
			//}			    
			
			dat = reg_LOCAL_STATUS_FIELD_LANE_15_0;
			dat &= 0x3fff;
			if(link_train_mode==0) {			
				if( train_comp ) 
					dat |= 0x8000 ;
				//else if( tx_init_bit )
				//	dat |= 0x4000 ;					
			}	
			
			reg_LOCAL_STATUS_FIELD_LANE_15_0 = dat;			
			reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; 
			reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
		}
	}
	else 	
	#endif
	{
			dat = reg_LOCAL_STATUS_FIELD_LANE_15_0;
			dat &= 0x3fff;
			if(link_train_mode==0) {			
				if( train_comp ) 
					dat |= 0x8000 ;
				else if( tx_init_bit && phy_mode <= SAS)
					dat |= 0x4000 ;					
			}	
			
			reg_LOCAL_STATUS_FIELD_LANE_15_0 = dat;
			reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; 
			reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
	}	
	EA = 1;
	
}

#ifdef SUPPORT_SAS_TXTRAIN_IF_ERROR_HANDLE
uint8_t remote_error_check(uint16_t dat) BANKING_CTRL {
	uint8_t ce, error_code;
	error_code = _EXIT_SUCCESS;
	
	ce = 0;	
	if( (device_remote_control_bits_hi&0xe0) == 0) { //pattern check
		ce = (uint8_t)((device_remote_control_bits_hi>>2) & 0x03);
	}
	else if( (device_remote_control_bits_hi&0xe0) == 0xe0) { 
		//error code coming, do nothing
		return _EXIT_DO_NOTHING;		
	}
	else { 
		error_code = RESERVED_PATTERN_TYPE;
	}			

	if( (((device_remote_control_bits_hi&0xe0)==0)&&((device_remote_control_bits & 0x13c0) ||  //0001 0011 1100 0000
		(device_remote_status_bits & 0x1fc0))) || //0001 1111 1100 0000
		 (((device_remote_control_bits_hi&0xe0)==0xe0)&&((device_remote_control_bits & 0x13c0) ||  //0001 0011 1100 0000
		(device_remote_status_bits & 0xdfc0))) //1101 1111 1100 0000 				
		) {		
		error_code = RESERVED_TTIU_BIT_SET_TO_ONE;
	}
	
	//redundant
	//if(ce>0 && ((device_remote_control_bits_lo&0x3f) != 0)) {
	//	error_code = RESERVED_COMB_COE_REQ; 
	//}
	
	ce = device_remote_control_bits_lo & 0x3f;			
	if((ce&0x03)==0x03) error_code = RESERVED_COE_1_REQ;
	if((ce&0x0c)==0x0c) {
		if(error_code==0) error_code = RESERVED_COE_2_REQ;
		else error_code = MULTI_RESERVED_COE_REQ;
	}	
	if((ce&0x30)==0x30) {
		if(error_code==0) error_code = RESERVED_COE_3_REQ;
		else error_code = MULTI_RESERVED_COE_REQ;
	}		
	
	if(error_code>0) {	
		//if((reg_LOCAL_CTRL_FIELD_LANE_15_0_b1&0xe0) != 0xe0) {
		//	save_local_ctrl = reg_LOCAL_CTRL_FIELD_LANE_15_0;
		//	//save_local_status = reg_LOCAL_STATUS_FIELD_LANE_15_0;
		//}
		reg_LOCAL_CTRL_FIELD_LANE_15_0_b1 = (device_remote_control_bits_hi & 0x0c)|0xe0 ; //(rm_ctrl.v&0x1fff)|0xe000; 	 
		reg_LOCAL_CTRL_FIELD_LANE_15_0_b0 = device_remote_control_bits_lo&0x3f;
		reg_LOCAL_STATUS_FIELD_LANE_15_0 = (uint16_t)error_code;
		#ifdef _28G_X2
		reg_LOCAL_ERROR_FIELD_VALID_LANE = 1; reg_LOCAL_ERROR_FIELD_VALID_LANE = 0;
		lnx_ERROR_TTIU_DETECTED_LANE = 1;
		#else
		//cannot support error code in 28G X4 Design
		reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
		#endif		

		delay01(10);

		reg_LOCAL_CTRL_FIELD_LANE_15_0 = dat; //save_local_ctrl;
		reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0;
		reg_LOCAL_CTRL_FIELD_VALID_LANE = 1; reg_LOCAL_CTRL_FIELD_VALID_LANE = 0;
		reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;			
		
	}	
	
	if((device_remote_control_bits_hi&0xe0)==0xe0) error_code = _EXIT_DO_NOTHING;
	
	return error_code;
}
#endif //SUPPORT_SAS_TXTRAIN_IF_ERROR_HANDLE

bool request_local_ctrl(uint16_t dat) BANKING_CTRL
{
	uint8_t error_status, stat;
	stat = _EXIT_SUCCESS;
	#ifdef _SUPPORT_TRAIN_IF_RX_DEBUG
	reg_MCU_DEBUG7_LANE_7_0 = 0;
	reg_MCU_DEBUG6_LANE_7_0 = 0;
	#endif
	#ifdef _SUPPORT_TRAIN_IF_MEASURE
	reg_PIN_GPO_LANE_7_0 = reg_PIN_GPO_LANE_7_0 | 0x02;
	#endif
			
	save_local_ctrl = dat;
	
	#ifdef SUPPORT_SAS_TXTRAIN_IF_ERROR_HANDLE
	if(phy_mode <= SAS && reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE==0) {	
		EA = 0;		
		if(remote_error_check(dat)==_EXIT_SUCCESS) { 	
			//error_status = (reg_LOCAL_CTRL_FIELD_LANE_15_0_b1&0xe0)==0xe0?1:0;
			//if(error_status) {
			//	reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0; //error clear with status=0      //save_local_status;
			//}	
			reg_LOCAL_CTRL_FIELD_LANE_15_0 = dat;		
			reg_LOCAL_CTRL_FIELD_VALID_LANE = 0;
			reg_LOCAL_CTRL_FIELD_VALID_LANE = 1; 
			reg_LOCAL_CTRL_FIELD_VALID_LANE = 0;
			lnx_ERROR_TTIU_DETECTED_LANE = 0;
			//if(error_status) {
			//	reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;		
			//}	
		}
		else 
			stat = _EXIT_FAIL;
		
		EA = 1;		
	}
	else 
	#endif //SUPPORT_SAS_TXTRAIN_IF_ERROR_HANDLE
	{
		if(link_train_mode || tx_pipe4_en) {
			while(reg_PIN_LOCAL_CTRL_FIELD_READY_RD_LANE==0){
				if(reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE==0) break;
			}
		}
		
		reg_LOCAL_CTRL_FIELD_LANE_15_0 = dat;		
		reg_LOCAL_CTRL_FIELD_VALID_LANE = 0;	
		reg_LOCAL_CTRL_FIELD_VALID_LANE = 1; 
		reg_LOCAL_CTRL_FIELD_VALID_LANE = 0;	
	}
	
	short_delay();//delay01(10);
	
	#ifdef _SUPPORT_TRAIN_IF_MEASURE
	reg_PIN_GPO_LANE_7_0 = reg_PIN_GPO_LANE_7_0 & 0xfd;
	#endif
	#ifdef _SUPPORT_TRAIN_IF_RX_DEBUG
	DBG_Printf("\r\n[R] LC: %04x", reg_LOCAL_CTRL_FIELD_LANE_15_0);
	#endif

	return stat;
}

bool get_tx_status(uint8_t check) BANKING_CTRL
{
	uint16_t dat;
	uint8_t err_status = 0;
	
	dat = reg_LOCAL_CTRL_FIELD_LANE_15_0;
	//lnx_TX_TRAIN_STATUS_DET_TIMEOUT_INT_LANE=0;	
	//DBG_Printf("\r\n Enter status loop" );
	timeout_start(2000); //2mS
	 do {
		
		if(reg_REMOTE_STATUS_VALID_ISR_LANE==0) continue;	
		#ifdef _28G_X2
		reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 1;
		reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 0;
		#else
		reg_REMOTE_STATUS_VALID_ISR_LANE = 0;
		#endif

		#ifdef SUPPORT_SAS_TXTRAIN_IF_ERROR_HANDLE
		if(phy_mode <= SAS && do_rx_apta==0) {
			EA = 0;
			err_status = remote_error_check(dat);		
			EA = 1;
			if(err_status) break;
		}
		#endif
		
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
		
		if(cmx_TRAIN_SIM_EN==0 && !tx_status_pcie_mode) {
			cds_tb = cds_table[CDS_DATAADAPT];  //dfe_acc 
			cdr_dfe_scheme();	
			err_status = lnx_CDS_ERR_CODE_LANE_7_0;
			if(err_status) break;
		}	

	//} while( reg_REMOTE_STATUS_VALID_ISR_LANE==0); //bug! cannot check.
	} while(1);
	
	timeout_stop;
	//DBG_Printf(". done" );
	
	#ifdef _28G_X2
	reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 1;
	reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 0;
	#else
	reg_REMOTE_STATUS_VALID_ISR_LANE = 0;
	#endif
	
	#ifdef _SUPPORT_TRAIN_IF_RX_DEBUG
	DBG_Printf("\r\n[R] RS: %04x ", reg_REMOTE_STATUS_FIELD_RD_LANE_15_0 );
	DBG_Printf(" - c1=%d, c0=%d, cn1=%d (RC:%02x%02x, c1/c0/cn1=%02x:%02x:%02x)-%x", tx_emph1_index, tx_amp_index, tx_emph0_index, reg_MCU_DEBUG4_LANE_7_0,reg_MCU_DEBUG5_LANE_7_0, reg_MCU_DEBUG9_LANE_7_0, reg_MCU_DEBUGA_LANE_7_0, reg_MCU_DEBUGB_LANE_7_0, reg_MCU_DEBUG6_LANE_7_0);
	#endif
	
	return err_status;
}

void Send_ctrl_to_tx(uint16_t dat) BANKING_CTRL
{
	#if _DEBUG || _DBG_TRXTRAIN
 	DBG_Printf("\r\n++(Send_ctrl_to_tx) : %x", dat);
	#endif
	
		tx_ctrl_stat = _EXIT_SUCCESS;
		
		#ifdef _28G_X2
		reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 1;
		reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 0;
		#else
		reg_REMOTE_STATUS_VALID_ISR_LANE = 0;
		#endif
		
		#ifdef SUPPORT_APTA_TX_TRAIN
		if(do_rx_apta==1 && apta_rm_state_err==1) { 
			request_local_ctrl(0x0400);
			
			//check ack
			if(get_tx_status(0)) {
				tx_ctrl_stat = _EXIT_FAIL;
				return;
			}	
			
			apta_rm_state_err = 0;
			
		}
		#endif

		if( tx_pipe4_en && reg_EYE_OPEN_EN_RD_LANE ) {
			reg_EYE_OPEN_LANE_5_0 = train.eo;
			reg_LOCAL_CTRL_FIELD_VALID_LANE = 1; 
			reg_LOCAL_CTRL_FIELD_VALID_LANE = 0;			
		}
		else {
			if(request_local_ctrl(dat)!= _EXIT_SUCCESS) {
				tx_ctrl_stat = _EXIT_FAIL;
				return;		
			}	
		}
		
		//check ack
		if(get_tx_status(1)) {
			tx_ctrl_stat = _EXIT_FAIL;
			return;
		}	
		
		if( (reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b0&0x3f)!=0 ) { // get !0?

			#ifdef SUPPORT_APTA_TX_TRAIN
			if((reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b0&0x3f)==0x3f && do_rx_apta==1) {
				apta_rm_state_err = 1;
				return;
			}
			#endif
			
			// -- check min/max
			tx.g0_is_max  = reg_REMOTE_STATUS_G0_LANE_1_0 == 3;
			tx.g0_is_min  = reg_REMOTE_STATUS_G0_LANE_1_0 == 2;
			tx.gn1_is_max = reg_REMOTE_STATUS_GN1_LANE_1_0 == 3;
			tx.gn1_is_min = reg_REMOTE_STATUS_GN1_LANE_1_0 == 2;
			tx.g1_is_max  = reg_REMOTE_STATUS_G1_LANE_1_0 == 3;
			tx.g1_is_min  = reg_REMOTE_STATUS_G1_LANE_1_0 == 2;
			
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
		else 
			tx_ctrl_stat = _EXIT_FAIL;
			
		//send hold
		if(tx_pipe4_en==0 && do_rx_apta==0) 
		{
			request_local_ctrl(0); 
			
			//check ready
			get_tx_status(0);
			if((device_remote_status_bits_lo&0x3f)!=0 ) // get 0?
				tx_ctrl_stat = _EXIT_FAIL;
		
			#ifdef _SUPPORT_TRAIN_IF_RX_DEBUG
			DBG_Printf("\r\n[R] RS: %04x --", reg_REMOTE_STATUS_FIELD_RD_LANE_15_0);
			#endif		
			
		}
	timeout = 0;

} 

void trainif_init(void) BANKING_CTRL
{
#ifdef _SATA_SERDES_BUILD
	//c1_valid = 0; c0_valid = 0; cn1_valid = 0;

	/*if( phy_mode == SERDES )*/ frame_marker_ready();	//SAS need also frame lock check.

	if( phy_mode <= SAS ) sq_wait();
	
	train_comp = 0; 
	tx_init_bit = 0; 

	if(	/*(tx_init_bit == 1) &&*/ (phy_mode != SERDES)) { //!Ethernet

		request_local_status();  
		short_delay();//delay01(10);
		
		//wait remote tx_init_bit=0
		while((/*reg_REMOTE_STATUS_VALID_ISR_LANE==0 ||*/ (reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b1&0x40)) ){
			if(reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE==0) break;
		}					
	}	
#endif //_SATA_SERDES_BUILD
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

//#ifdef _28G_X2
/*
void txffe_force_ouput(void) BANKING_CTRL {
	uint8_t gen;
	
	gen = gen_tx;
	if(gen>4) gen = 0;
	
	reg_ANA_TX_EM_PEAK_EN_LANE = 1; 
	reg_ANA_TX_EM_PO_EN_LANE = 1;		
	reg_ANA_TX_EM_PRE_EN_LANE = 1;

	reg_TX_EM_CTRL_REG_EN_LANE = 1;
	reg_TX_EM_CTRL_PIPE_SEL_LANE = 0;
	
	LINK_TRAIN_MODE0.BT.B0 = txffe_save[gen][0]; //[7:4]em_po
	LINK_TRAIN_MODE0.BT.B1 = txffe_save[gen][1]; //[7:4]em_peak [3:0]em_pre		

}
*/

void txtrain_force_restart(void) BANKING_CTRL{

		EA = 0;
		
		reg_PIN_TX_TRAIN_ENABLE_ISR_LANE = 0;
		#ifdef SUPPORT_ETHERNET_SEL_BIT_CTRL
		if(phy_mode==SERDES) { reg_TX_SEL_BITS_LANE = 1; reg_RX_SEL_BITS_LANE = 1; } //force to 32bit
		#endif
		reg_TX_TRAIN_ON_LANE = 1;// for internal hardware tx-train design

		do_train = 1; PHY_STATUS = ST_TRXTRAIN;
		train_comp = 0;  	
 
		timeout = 0;
		timeout_stop2;
		reg_FRAME_LOCK_ISR_LANE = 0;
		reg_FRAME_UNLOCK_ISR_LANE = 0;
		reg_REMOTE_STATUS_VALID_ISR_LANE = 0;
		lnx_TX_TRAIN_FRAME_LOCK_DET_FAIL_INT_LANE = 0;
		
		#ifdef SUPPORT_LINK_TRAIN_MODE	
		if(link_train_mode) {
			reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0; 
			reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; 
			reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
		}
		else
		#endif //SUPPORT_LINK_TRAIN_MODE			
		{
		#ifdef SUPPORT_AUTO_TRAIN_MODE
			tx_init_bit = 1;
			if(phy_mode == SERDES) { //Ethernet
				reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0x0000; //tx_comp=0
				reg_LOCAL_CTRL_FIELD_LANE_15_0 = 0;        //hold
			}	
			else {	//sas
				reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0x4000; //tx_comp=0,tx_init=1
				reg_LOCAL_CTRL_FIELD_LANE_15_0 = 0;		   //hold	
			}
			reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; 
			reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
			reg_LOCAL_CTRL_FIELD_VALID_LANE = 1; 
			reg_LOCAL_CTRL_FIELD_VALID_LANE = 0;
		#endif	//SUPPORT_AUTO_TRAIN_MODE
		}		
		
		EA = 1;
}

//#endif //_28G_X2


