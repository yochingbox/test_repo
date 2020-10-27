/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file tx_train.c
* \purpose tx train
* \History
*	12/03/2015 Heejeong Ryu		Initial 
*/
#include "common.h"

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
#ifdef _PCIE_USB_BUILD 

#ifdef _PCIE_USB 

#ifdef SUPPORT_TX_TRAIN

void tx_train_PCIe(void) {
	int8_t cnt, i, update;
	uint8_t fs;
	
	pcie_f0b_en = 1;
	update = 0;

	cnt = 20;
	if(tx_adapt_gn1_en) {				
		if( (cmx_BYPASS_P4_JUMP_GN1_TRAIN_GEN3==0 && gen_tx==2) ||
			(cmx_BYPASS_P4_JUMP_GN1_TRAIN_GEN4==0 && gen_tx==3) )
		{
		while( cnt-->0 ) {
			req_local_ctrl(CE_NORMAL, 0, tag_TX_TRAIN_P2P_HOLD, 1);		
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
			req_local_ctrl(CE_NORMAL, 1, tag_TX_TRAIN_P2P_HOLD, 0);		
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
		req_local_ctrl(CE_NORMAL, 0, tag_TX_TRAIN_P2P_HOLD, 2);		
		train_gn1_index--; 
		train_g0_index -= tag_TX_TRAIN_P2P_HOLD;
		if(tx.gn1_is_min) break;
	}		
	
	dfe_cdr_phase_opt();
	
	train2opt(); 
	
	reg_MCU_DEBUGC_LANE_7_0 = (uint8_t)train.fn1; 
	reg_MCU_DEBUGF_LANE_7_0 = 0xaa;
	
	if(train.fn1 <= tag_PCIE_GN1_FN1_THRE && !train.saturated) {
		pcie_f0b_en = 0;
		return;
	}	

	for(i=0; i<tag_PCIE_GN1_STEP_NUM; i++) {
		req_local_ctrl(CE_NORMAL, 0, tag_TX_TRAIN_P2P_HOLD, 2);				
		train_gn1_index--; 
		train_g0_index -= tag_TX_TRAIN_P2P_HOLD;
		dfe_cdr_phase_opt();		
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
				req_local_ctrl(CE_NORMAL, 0, tag_TX_TRAIN_P2P_HOLD, 1);						
				train_gn1_index ++;
				train_g0_index += tag_TX_TRAIN_P2P_HOLD;
				update--;
			}
			else if(update < 0 && tx.gn1_is_min==0) {		
				req_local_ctrl(CE_NORMAL, 0, tag_TX_TRAIN_P2P_HOLD, 2);				
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

			dfe_cdr_phase_opt();		
			
			if(train.fn1 <= tag_PCIE_GN1_FN1_THRE && !train.saturated) {
				pcie_f0b_en = 0;
				return;
			}	
			
			for(i=0; i<tag_PCIE_G1_STEP_NUM; i++) {
				req_local_ctrl(CE_NORMAL, 1, (tag_TX_TRAIN_P2P_HOLD ? 2 : 0), 0);				
				train_g1_index++; 
				train_g0_index -= tag_TX_TRAIN_P2P_HOLD;
				dfe_cdr_phase_opt();		
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
						req_local_ctrl(CE_NORMAL, 1, (tag_TX_TRAIN_P2P_HOLD ? 2 : 0), 0);						
						train_g1_index ++;
						train_g0_index -= tag_TX_TRAIN_P2P_HOLD;
						update--;
					}
					else if(update < 0 && tx.g1_is_min==0) {		
						req_local_ctrl(CE_NORMAL, 2, tag_TX_TRAIN_P2P_HOLD, 0);				
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

#endif //SUPPORT_TX_TRAIN

#endif //_PCIE_USB 

#endif //_PCIE_USB_BUILD

