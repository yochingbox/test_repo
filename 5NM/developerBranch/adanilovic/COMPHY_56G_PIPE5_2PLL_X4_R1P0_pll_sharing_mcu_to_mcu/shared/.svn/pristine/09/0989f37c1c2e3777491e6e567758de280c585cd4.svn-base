/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file tx_train_pcie.c
* \purpose tx train for pcie
* \History
*	8/15/2019 Heejeong Ryu		Initial copy from 28G
*/
#include "common.h"

#define _DEBUG _DBG_TXTRAIN
/****************************************
 * TX Training
 * Inputs: 
 *      ctrl_tx_train_done
 * Outputs:
 *      train.g0_index
 *      train.g1_index
 *      train.gn1_index
*****************************************/

void tx_train_PCIe(void) {
	int8_t cnt, i, update;
	uint8_t fs;
	
	update = 0;

	cnt = 20;
	if(tx_adapt_gn1_en) {				
		//if( (cmx_BYPASS_P4_JUMP_GN1_TRAIN_GEN3==0 && gen_tx==2) ||
		//	(cmx_BYPASS_P4_JUMP_GN1_TRAIN_GEN4==0 && gen_tx==3) )
		{
		while( cnt-->0 ) {
			req_local_ctrl(CE_NORMAL, 0, tag_TX_TRAIN_P2P_HOLD, 1,0);		
			train.gn1_index++; 
			train.g0_index += tag_TX_TRAIN_P2P_HOLD;
			if(tx.gn1_is_max) break;
		}	
		}
	}
	
	cnt = 20;
	if(tx_adapt_g1_en) {	
		//if( (cmx_BYPASS_P4_JUMP_G1_TRAIN_GEN3==0 && gen_tx==2) ||
		//	(cmx_BYPASS_P4_JUMP_G1_TRAIN_GEN4==0 && gen_tx==3) )
		{
		while( cnt-->0 ) {
			req_local_ctrl(CE_NORMAL, 1, tag_TX_TRAIN_P2P_HOLD, 0,0);		
			train.g1_index++; 
			train.g0_index += tag_TX_TRAIN_P2P_HOLD;
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
		req_local_ctrl(CE_NORMAL, 0, tag_TX_TRAIN_P2P_HOLD, 2,0);		
		train.gn1_index--; 
		train.g0_index -= tag_TX_TRAIN_P2P_HOLD;
		if(tx.gn1_is_min) break;
	}		
	
	dfe_adaptation();
	
	train2opt(); 
	
	if(train.fn1 <= tag_PCIE_GN1_FN1_THRE && !train.saturated) {
		return;
	}	

	for(i=0; i<tag_PCIE_GN1_STEP_NUM; i++) {
		req_local_ctrl(CE_NORMAL, 0, tag_TX_TRAIN_P2P_HOLD, 2,0);				
		train.gn1_index--; 
		train.g0_index -= tag_TX_TRAIN_P2P_HOLD;
		dfe_adaptation();		
		compare_g1n1(0);
		if(train.fn1 <= tag_PCIE_GN1_FN1_THRE && !train.saturated) break;
		if(tx.gn1_is_min) break;
	}

	update = opt.gn1_index - train.gn1_index;
	
	if( update!=0 ) {
		cnt = tag_PCIE_GN1_STEP_NUM;
		while (cnt-->0) {
			if(update > 0 && tx.gn1_is_max==0) {
				req_local_ctrl(CE_NORMAL, 0, tag_TX_TRAIN_P2P_HOLD, 1,0);						
				train.gn1_index ++;
				train.g0_index += tag_TX_TRAIN_P2P_HOLD;
				update--;
			}
			else if(update < 0 && tx.gn1_is_min==0) {		
				req_local_ctrl(CE_NORMAL, 0, tag_TX_TRAIN_P2P_HOLD, 2,0);				
				train.gn1_index--; 
				train.g0_index -= tag_TX_TRAIN_P2P_HOLD;
				update++;
			}
			else break;
		}			
	}
	}
		
	if(tx_adapt_g1_en) {	
		//if((cmx_PCIE_G1_OPT_TRAIN_EN_GEN3 && gen_tx==2) || 
		//	(cmx_PCIE_G1_OPT_TRAIN_EN_GEN4 && gen_tx==3))
			{

			dfe_adaptation();		
			
			if(train.fn1 <= tag_PCIE_G1_FN1_THRE && !train.saturated) {
				return;
			}	
			
			for(i=0; i<tag_PCIE_G1_STEP_NUM; i++) {
				req_local_ctrl(CE_NORMAL, 1, (tag_TX_TRAIN_P2P_HOLD ? 2 : 0), 0,0);				
				train.g1_index++; 
				train.g0_index -= tag_TX_TRAIN_P2P_HOLD;
				dfe_adaptation();		
				compare_g1n1(1);
				if(train.fn1 <= tag_PCIE_GN1_FN1_THRE && !train.saturated) break;
				if(tx.g1_is_max) break;
			}
			
			update = opt.g1_index - train.g1_index;
			
			if( update!=0 ) {
				cnt = tag_PCIE_G1_STEP_NUM;
				while (cnt-->0) {
					if(update > 0 && tx.g1_is_max==0) {
						req_local_ctrl(CE_NORMAL, 1, (tag_TX_TRAIN_P2P_HOLD ? 2 : 0), 0,0);						
						train.g1_index ++;
						train.g0_index -= tag_TX_TRAIN_P2P_HOLD;
						update--;
					}
					else if(update < 0 && tx.g1_is_min==0) {		
						req_local_ctrl(CE_NORMAL, 2, tag_TX_TRAIN_P2P_HOLD, 0,0);				
						train.g1_index--; 
						train.g0_index += tag_TX_TRAIN_P2P_HOLD;
						update++;
					}
					else break;
				}			
			}	
		}	
	}	

}	


