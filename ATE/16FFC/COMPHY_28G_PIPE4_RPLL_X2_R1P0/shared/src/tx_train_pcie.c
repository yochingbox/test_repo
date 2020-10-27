/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file tx_train.c
* \purpose tx train
* \History
*	12/03/2015 Heejeong Ryu		Initial 
*/
#include "common.h"

#ifndef ATE_FW
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

	if(tx_adapt_g1_en) {
		cnt = 20;
		while( cnt-->0 ) {
			req_local_ctrl(CE_NORMAL, 1, tag_TX_TRAIN_P2P_HOLD, 0);
			train_g1_index++;
			train_g0_index += tag_TX_TRAIN_P2P_HOLD;
			if(tx.g1_is_max) break;
		}
	}

	if(tx_adapt_gn1_en) {
		cnt = 20;
		while( cnt-->0 ) {
			req_local_ctrl(CE_NORMAL, 0, tag_TX_TRAIN_P2P_HOLD, 1);		
			train_gn1_index++; 
			train_g0_index += tag_TX_TRAIN_P2P_HOLD;
			if(tx.gn1_is_max) break;
		}	

		// set with FS table value - 2
		fs = reg_REMOTE_FS_LANE_5_0;
		if( fs <= 31 ) cnt = 1;  //3
		else if( fs <= 40 ) cnt = 2;  //4
		else if( fs <= 49 ) cnt = 3;  //5
		else if( fs <= 58 ) cnt = 4;  //6
		else cnt = 5;  //7

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

	pcie_f0b_en = 0;
}


#endif //SUPPORT_TX_TRAIN

#endif //_PCIE_USB

#endif //_PCIE_USB_BUILD
#endif //_not ATE_FW

