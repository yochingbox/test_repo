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
#ifdef _SATA_SERDES_BUILD

#ifdef SUPPORT_TX_TRAIN

/****************************************
 * TX Train Control
 * Inputs: 
 *      train.eo
 *      train.saturated
 *      train.level
 * Outputs:
 *      ctrl_tx_train_done
 *      ctrl_trx_ffe_updated
 *      tx.blind_training
*****************************************/
void tx_train_control(void)
{
    //DBG_PS("\r\n\r\n-tx_ctrl");
	if ( (tx.num_tx_loop >= tag_TX_MAX_LOOP) || //1
        ( (train.eo >= tag_TX_EO_BYPASS_THRES) && train.saturated==0) || //tag_TX_EO_BYPASS_THRES=60 //15
        (train.level >= 5))
	{
		//DBG_PS("\r\n\r\nDone");
		ctrl_tx_train_done = 1;
		tx.num_tx_loop = 0;
	}else{ 
		//DBG_PS("\r\n\r\n~Done");
		ctrl_tx_train_done = 0;
		tx.num_tx_loop ++; // update counter of Number of TX loop by adding one
	}
	tx.blind_training = 0;//(tag_BLIND_TRAIN_EN && !opt.eye_check_pass); //tag_BLIND_TRAIN_EN=0
	#if _DEBUG
    //DBG_Printf("\r\n++(tx_train_control):num_tx_loop:%d",tx.num_tx_loop);
	#endif
}

/****************************************
 * TX FFE Train
 * Inputs: 
 *      tx.blind_training
 *      train.eo
 *      train.saturated
 *      train.level
 * Callee:
 *      tx_blind_train()
 *      tx_preset_sweep()
 *      tx_g01n1_train()
*****************************************/
void tx_ffe_train(void)
{
	#if _SUPPORT_BLIND_TRAIN
	if (tx.blind_training) tx_blind_train();
	else 
	#endif 
	{
		if( (train.level < 5) &&
				((train.eo < tag_TX_EO_BYPASS_THRES) || train.saturated))
		{
			#if tag_TX_SWEEP_PRESET_EN
			if(tx_sweep_preset_en)  tx_preset_sweep(); //tag_TX_SWEEP_PRESET_EN=0
			#endif
			if(tx_adapt_g0_en)      tx_g0_train();     //tag_TX_ADAPT_G0_EN=1
			if(tx_adapt_gn1_en)     tx_gn1_train();    //tag_TX_ADAPT_GN1_EN=1
			if(tx_adapt_g1_en)      tx_g1_train();     //tag_TX_ADAPT_G1_EN=0
		}
	}
}

/****************************************
 * TX Blind Train
 *      If the Eye is too close to get 
 *      reliable DFE results
*****************************************/
#if _SUPPORT_BLIND_TRAIN
void tx_blind_train()
{
    //DBG_PS("\r\n====>tx_blind_train<====");
	
    if(tx.gn1_is_min && tx.g0_is_max && tx.g1_is_min){
		if( tag_TX_BLIND_TRAIN_NO_RESET==0 )
		{
			tx_reset(train.tx_preset_index);
			dfe_cdr_phase_opt();
		}
    }
	else
	{
		if( tx_adapt_g0_en && tx.g0_is_max==0 )
		{
			//tx.g0_update = tag_TX_BLIND_OFFSET_G0;
			update_g0(tag_TX_BLIND_OFFSET_G0);
		}
		else 
		{
			if (tx_adapt_gn1_en && tx.gn1_is_min==0)
			{
				//tx.gn1_update = tag_TX_BLIND_OFFSET_GN1;
				update_gn1(tag_TX_BLIND_OFFSET_GN1);
			}
			if (tx_adapt_g1_en && tx.g1_is_min==0)
			{
				//tx.g1_update = tag_TX_BLIND_OFFSET_G1;
				update_g1(tag_TX_BLIND_OFFSET_G1);
			}
		}
    }
    update_opt_trx_ffe();
}
#endif //_SUPPORT_BLIND_TRAIN


#endif //SUPPORT_TX_TRAIN

#endif //_SATA_SERDES_BUILD
#endif // not ATE_FW
