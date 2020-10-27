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
#pragma codeseg BANK3
#pragma constseg BANK3
#endif

#ifdef SUPPORT_DFE_UPDATE_EN_DEBUG

//control
#define HOLD 	0
#define INC		1
#define DEC 	2

bool get_tx_status_ram(uint8_t check) BANKING_CTRL
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
			cdr_dfe_scheme_ram();	
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

void Send_ctrl_to_tx_ram(uint16_t dat) BANKING_CTRL
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
			if(get_tx_status_ram(0)) {
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
		if(get_tx_status_ram(1)) {
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
			get_tx_status_ram(0);
			if((device_remote_status_bits_lo&0x3f)!=0 ) // get 0?
				tx_ctrl_stat = _EXIT_FAIL;
		
			#ifdef _SUPPORT_TRAIN_IF_RX_DEBUG
			DBG_Printf("\r\n[R] RS: %04x --", reg_REMOTE_STATUS_FIELD_RD_LANE_15_0);
			#endif		
			
		}
	timeout = 0;

} 

#endif

