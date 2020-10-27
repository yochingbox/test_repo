/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file tx_train.c
* \purpose tx train
* \History
*	12/03/2015 Heejeong Ryu		Initial 
*/
#include "common.h"

#ifdef USE_BANKING
#pragma codeseg BANK3
#pragma constseg BANK3
#endif

#define _DEBUG _DBG_TXTRAIN
/****************************************
 * TX Training
 * Inputs: 
 *      ctrl_tx_train_done
 * Outputs:
 *      train_g0_index
 *      train_g1_index
 *      train_gn1_index
*****************************************/

#ifdef SUPPORT_TX_TRAIN
void tx_train_ram(void) BANKING_CTRL
{
	#if _DEBUG
	//DBG_Printf("\r\n++(tx_train)");
	#endif
	PHY_STATUS = ST_TXTRAIN;
	// local constants
	tx_train_initial_ram();
	//reg_MCU_DEBUG0_LANE_7_0 = 0x56;
	while (1)
	{
		if( phy_mode == PCIE ) 
		{
			#ifdef _PCIE_USB_BUILD 
			#ifdef _PCIE_USB 
			if( reg_EYE_OPEN_EN_RD_LANE ) {
				/*if(lnx_DIS_BYPASS_RXTRAIN_IN_FOM_LANE){			
					#ifdef SUPPORT_DUMMY_TRAIN
					if(cmx_TRAIN_SIM_EN) rx_train_dummy();
					else 
					#endif
					rx_train_ram();
				}	
				else */
				{
					cds_tb = cds_table[CDS_DEFAULT_PCIE];
					//cdr_dfe_init_ram();
					#ifdef SUPPORT_DFE_UPDATE_EN_DEBUG
					dfe_adaptation_ram();
					#else
					dfe_adaptation();
					#endif	
				}	
				#ifdef SUPPORT_DFE_UPDATE_EN_DEBUG
				Send_ctrl_to_tx_ram(0);
				#else
				Send_ctrl_to_tx(0);	
				#endif
				//do_train = 0;	//directly abort
				//reg_MCU_DEBUG0_LANE_7_0++;
			} 
			else {			
				//#ifdef SUPPORT_PCIE_F0D_OPT
				//tx_train_control();
				//if (ctrl_tx_train_done)	break;		
				//tx_ffe_train();					
				//#else 
				//if(lnx_PCIE_RXTRAIN_ON_BEFORE_DIR_LANE) 
				{
					rx_train_ram();
				}
				#ifdef SUPPORT_DFE_UPDATE_EN_DEBUG
				tx_train_PCIe_org_ram();
				#else
				tx_train_PCIe_org();	
				#endif	
				ctrl_tx_train_done = 1;
				ctrl_rx_train_done = 0;
				//ctrl_trx_train_done = 1; 
				//#endif
				break;//return;					
			}
			
			//if( reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE==0 ) {
			//	ctrl_tx_train_done = 1;	
			//	ctrl_trx_train_done = 1; //fast done
			//	break;//return;				
			//}			
			#endif //_PCIE_USB
			#endif //_PCIE_USB_BUILD
		}	
		else 
		{
			#ifdef 	_SATA_SERDES_BUILD
			tx_train_control();
			if (ctrl_tx_train_done)	break;		
			tx_ffe_train();	
			#endif //_SATA_SERDES_BUILD
		}	
	}

	tx_train_end_ram();
	//reg_MCU_DEBUG0_LANE_7_0 = 0x59;
	
}

/****************************************
 * TX Train initial
 * Inputs: 
 *      opt g01n1 setting
 * Outputs:
 *      initialize train and loop cntr
*****************************************/
void tx_train_initial_ram(void) BANKING_CTRL
{
	#if _DEBUG
    //DBG_PS("tx_init");
	#endif
    ctrl_trx_ffe_updated = 1;
	ctrl_cdr_phase_on = 0;
	tx.num_tx_loop = 0;

    opt2train_ram();// load the optimal eo for train

	#if _DEBUG
    //DBG_Printf(" train_g0/g1/gn1(%d,%d,%d) opt(%d,%d,%d)",train_g0_index,train_g1_index,train_gn1_index,opt_g0_index,opt_g1_index,opt_gn1_index );
	#endif

}

/****************************************
 * TX Train End
 *      Apply train with opt value
*****************************************/
void tx_train_end_ram(void) BANKING_CTRL
{	
	#if _DEBUG
    //DBG_PS("--(tx_end)");
	#endif
	update_opt_trx_ffe();

    opt2train_ram();
	
	#ifdef _PCIE_USB_BUILD 
	//if( tx_pipe4_en==1 )
	 reg_TX_FFE_TRAIN_DONE_LANE = 1;
	#endif //_PCIE_USB_BUILD

}

#ifdef SUPPORT_DFE_UPDATE_EN_DEBUG

void tx_train_PCIe_org_ram(void) BANKING_CTRL {
	int8_t cnt, i, update;
	uint8_t fs;
	
	pcie_f0b_en = 1;;
	update = 0;

	cnt = 20;
	if(tx_adapt_gn1_en) {				
		if( (cmx_BYPASS_P4_JUMP_GN1_TRAIN_GEN3==0 && gen_tx==2) ||
			(cmx_BYPASS_P4_JUMP_GN1_TRAIN_GEN4==0 && gen_tx==3) )
		{
		while( cnt-->0 ) {
			req_local_ctrl_ram(CE_NORMAL, 0, tag_TX_TRAIN_P2P_HOLD, 1);		
			train_gn1_index++; 
			train_g0_index += tag_TX_TRAIN_P2P_HOLD;
			if(tx.gn1_is_max) break;
		}	
		}
	}
	
	cnt = 20;
	if(tx_adapt_g1_en) {	
		if( (cmx_BYPASS_P4_JUMP_G1_TRAIN_GEN3==0 && gen_tx==2) ||
			(cmx_BYPASS_P4_JUMP_G1_TRAIN_GEN4==0 && gen_tx==3) )
		{
		while( cnt-->0 ) {
			req_local_ctrl_ram(CE_NORMAL, 1, tag_TX_TRAIN_P2P_HOLD, 0);		
			train_g1_index++; 
			train_g0_index += tag_TX_TRAIN_P2P_HOLD;
			if(tx.g1_is_max) break;
		}		
		}
	}
	
	if(tx_adapt_gn1_en) {				
	// set with FS table - 2
	fs = reg_REMOTE_FS_LANE_5_0;
	if( fs <= 31 ) cnt = 1; // 3;
	else if( fs <= 40 ) cnt = 2; //4;
	else if( fs <= 49 ) cnt = 3; //5;
	else if( fs <= 58 ) cnt = 4; //6;
	else cnt = 5; //7;
	
	cnt++;
	while( cnt-->0 ) {
		req_local_ctrl_ram(CE_NORMAL, 0, tag_TX_TRAIN_P2P_HOLD, 2);		
		train_gn1_index--; 
		train_g0_index -= tag_TX_TRAIN_P2P_HOLD;
		if(tx.gn1_is_min) break;
	}		
	
	dfe_cdr_phase_opt_ram();
	
	train2opt(); 
	
	reg_MCU_DEBUGC_LANE_7_0 = (uint8_t)train.fn1; 
	reg_MCU_DEBUGF_LANE_7_0 = 0xaa;
	
	if(train.fn1 <= tag_PCIE_GN1_FN1_THRE && !train.saturated) {
		pcie_f0b_en = 0;
		return;
	}	

	for(i=0; i<tag_PCIE_GN1_STEP_NUM; i++) {
		req_local_ctrl_ram(CE_NORMAL, 0, tag_TX_TRAIN_P2P_HOLD, 2);				
		train_gn1_index--; 
		train_g0_index -= tag_TX_TRAIN_P2P_HOLD;
		dfe_cdr_phase_opt_ram();		
		compare_g1n1(0);
		if(train.fn1 <= tag_PCIE_GN1_FN1_THRE && !train.saturated) break;
		if(tx.gn1_is_min) break;
	}

	reg_MCU_DEBUGC_LANE_7_0 = (uint8_t)train.fn1; 
	reg_MCU_DEBUGF_LANE_7_0 = i; 
	
	update = opt_gn1_index - train_gn1_index;
	reg_MCU_DEBUGB_LANE_7_0 = (uint8_t)update;
	
	if( update!=0 ) {
		cnt = tag_PCIE_GN1_STEP_NUM;
		while (cnt-->0) {
			if(update > 0 && tx.gn1_is_max==0) {
				req_local_ctrl_ram(CE_NORMAL, 0, tag_TX_TRAIN_P2P_HOLD, 1);						
				train_gn1_index ++;
				train_g0_index += tag_TX_TRAIN_P2P_HOLD;
				update--;
			}
			else if(update < 0 && tx.gn1_is_min==0) {		
				req_local_ctrl_ram(CE_NORMAL, 0, tag_TX_TRAIN_P2P_HOLD, 2);				
				train_gn1_index--; 
				train_g0_index -= tag_TX_TRAIN_P2P_HOLD;
				update++;
			}
			else break;
		}			
	}
	}
		
	if(tx_adapt_g1_en) {	
		if((cmx_PCIE_G1_OPT_TRAIN_EN_GEN3 && gen_tx==2) || 
			(cmx_PCIE_G1_OPT_TRAIN_EN_GEN4 && gen_tx==3))
			{

			dfe_cdr_phase_opt_ram();
			
			if(train.fn1 <= tag_PCIE_GN1_FN1_THRE && !train.saturated) {
				pcie_f0b_en = 0;
				return;
			}	
			
			for(i=0; i<tag_PCIE_G1_STEP_NUM; i++) {
				req_local_ctrl_ram(CE_NORMAL, 1, (tag_TX_TRAIN_P2P_HOLD ? 2 : 0), 0);				
				train_g1_index++; 
				train_g0_index -= tag_TX_TRAIN_P2P_HOLD;
				dfe_cdr_phase_opt_ram();		
				compare_g1n1(1);
				if(train.fn1 <= tag_PCIE_GN1_FN1_THRE && !train.saturated) break;
				if(tx.g1_is_max) break;
			}
			
			update = opt_g1_index - train_g1_index;
			reg_MCU_DEBUGB_LANE_7_0 = (uint8_t)update;
			
			if( update!=0 ) {
				cnt = tag_PCIE_G1_STEP_NUM;
				while (cnt-->0) {
					if(update > 0 && tx.g1_is_max==0) {
						req_local_ctrl_ram(CE_NORMAL, 1, (tag_TX_TRAIN_P2P_HOLD ? 2 : 0), 0);						
						train_g1_index ++;
						train_g0_index -= tag_TX_TRAIN_P2P_HOLD;
						update--;
					}
					else if(update < 0 && tx.g1_is_min==0) {		
						req_local_ctrl_ram(CE_NORMAL, 2, tag_TX_TRAIN_P2P_HOLD, 0);				
						train_g1_index--; 
						train_g0_index += tag_TX_TRAIN_P2P_HOLD;
						update++;
					}
					else break;
				}			
			}	
		}	
	}	
	pcie_f0b_en = 0;

}	
#endif //SUPPORT_DFE_UPDATE_EN_DEBUG
#endif

