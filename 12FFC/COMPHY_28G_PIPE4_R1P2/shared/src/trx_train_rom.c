/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file TRX_Train_rom.c
* \purpose trx train ROM code
* \History
*	5/03/2020 Heejeong Ryu		Moved train code to ROM
*/

#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg BANK2
#endif

void link_train_complete(void) BANKING_CTRL {
	timeout_start(5000); //5mS
	
//	#ifdef _PCIE_USB_BUILD	
	if( tx_pipe4_en==1 )
	 reg_TX_FFE_TRAIN_DONE_LANE = 1;
//	#endif

	 reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 1;		
	reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 1;
	while( reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE ) { //wait for PIPE deassert.
	   	if(lnx_SQ_AUTO_TRAIN_LANE) {
//			#if _DEBUG
			//DBG_Printf("\r\n Finish SQ Auto txTrain >>>");
//			#endif			
			reg_TX_TRAIN_ENABLE_LANE = 0;
			break;
		}
		if(PHY_NS != ST_INIT) break;

	   if( lnx_TX_TRAIN_STATUS_DET_TIMER_ENABLE_LANE==1 && timeout ) break;
	} 
	timeout_stop;
	
	reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 0;
	reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 0;	
	//reg_TX_TRAIN_FAILED_LANE = 0;

	do_train = 0;

//	#ifdef _PCIE_USB_BUILD	
	if( tx_pipe4_en==1 ) reg_TX_FFE_TRAIN_DONE_LANE = 0;					
//	#endif
	
}

