/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file debug.c
* \purpose debug print
* \History
*	9/18/2015 Heejeong Ryu		Initial 
*/
#include "common.h"

#define _DEBUG 	_DBG_DFE

#if (_DEBUG )

#ifdef USE_BANKING
#ifndef _28G_X2
#pragma codeseg BANK4
#else
#pragma codeseg BANK1
#endif
#pragma constseg CSEG 
#endif

void debug_print(void) BANKING_CTRL{

	Printf("\r\n -- %d: %04x", ctrl_max_dfe_adapt_shift, reg_CDS_TB_LANE_15_0 );
    Printf(" train.fx: %d", train.f0a); 
    Printf(" %d", train.f0); 
    Printf(" %d", train.f1); 
	Printf("(%d,%d)", (int8_t)reg_DFE_F1_E_2C_LANE_7_0, (int8_t)reg_DFE_F1_O_2C_LANE_7_0);
    Printf(" %d", train.f2); 
    Printf(" %d", train.f3); 
    Printf(" %d", train.f4); 
    Printf(" %d", train.f5); 
    Printf(" %d", train.f6); 
    Printf(" %d", train.f7); 
    Printf(" %d", train.eye_check_pass); 

	Printf(" ##EO:%d", train.eo);
	
    //Printf(" slpr=(%d,", adapt_data_en);
    //Printf("%d)", adapt_slicer_en);

	//#if _DBG_RXTRAIN
	if(!ctrl_tx_train_on ) 
	{	
    Printf(" (r,c)=(%d,", train_r);
    Printf("%d):", train_c);
	Printf(" (%d,",reg_FFE_RES1_SEL_LANE_3_0);
	Printf("%d,",reg_FFE_RES2_SEL_E_LANE_3_0);
	Printf("%d)/",reg_FFE_RES2_SEL_O_LANE_3_0);
	Printf("(%d,",reg_FFE_CAP1_SEL_LANE_3_0);
	Printf("%d,",reg_FFE_CAP2_SEL_E_LANE_3_0);
	Printf("%d)",reg_FFE_CAP2_SEL_O_LANE_3_0);
    Printf(" dfe_res(%d,",ctrl_step_res_dfe);
    Printf("%d,",dfe_f1_res_sel);
    Printf("%d,",dfe_f234_res_sel);
    Printf("%d)",dfe_f567_res_sel);
	}
	//#endif
    Printf(" sat:%d,", train.saturated);
    Printf(" sumFtap:%d,", train.sumFtap);
    Printf(" bst:%d", train.boost);
    Printf(" lvl:%d,", train.level);
    Printf(" f0a_max:%d", train.f0a_max);

	//#if _DBG_RXTRAIN
	if(!ctrl_tx_train_on ) 
	{	
    //Printf(" eom_en_sde(%d,",EOM_EN_S);
    //Printf("%d,",EOM_EN_D);
    //Printf("%d)",EOM_EN_E); 
    Printf(" ph(%d,", train.phase_offset_data );
    Printf("%d)", train.phase_offset_esm );
    Printf("=(%d,", cdr_align90);
    Printf("%d)", (uint8_t)reg_EOM_DPHER_LANE_6_0 );
	//print_osft_f1p();
	}
	//#endif
	//#if _DBG_TXTRAIN
	if(!ctrl_rx_train_on && ctrl_tx_train_on) 
	{	
	Printf(" train_g0/1/n1(");
	Printf("%d,", train_g0_index);
	Printf("%d,", train_g1_index);
	Printf("%d)", train_gn1_index);
	Printf("=(%d,", reg_TX_EM_PEAK_CTRL_LANE_3_0);
	Printf("%d,", reg_TX_EM_PO_CTRL_LANE_3_0);
	Printf("%d)", reg_TX_EM_PRE_CTRL_LANE_3_0);
	//#endif	
	Printf(" txffe_rd(%d,", ((reg_ANA_TX_EM_PEAK_CTRL_RD_LANE_3_0_b1<<2)+reg_ANA_TX_EM_PEAK_CTRL_RD_LANE_3_0_b0));
	Printf("%d,", reg_ANA_TX_EM_POST_CTRL_RD_LANE_3_0);
	Printf("%d)", reg_ANA_TX_EM_PRE_CTRL_RD_LANE_3_0);
	//#if _DBG_TXTRAIN	
	Printf(" opt_g0/1/n1(%d,", opt_g0_index);
	Printf("%d,", opt_g1_index);
	Printf("%d)", opt_gn1_index);
	Printf(" (min/max(%d/%d, %d/%d, %d/%d)", tx.g0_is_min, tx.g0_is_max, tx.g1_is_min, tx.g1_is_max, tx.gn1_is_min, tx.gn1_is_max ); 			
	}
	//#endif
	Printf(" e_pass=%d", train.eye_check_pass  ); 			
	//Printf(" seledge=%d", reg_SEL_EDGE_DLY_LANE_1_0);
		
}


#endif //_DEBUG