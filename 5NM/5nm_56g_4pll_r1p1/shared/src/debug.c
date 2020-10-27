/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file debug.c
* \purpose debug print
* \History
*	9/18/2015 Heejeong Ryu		Initial 
*/
#include "common.h"

#ifdef USE_BANKING
#pragma codeseg BANK3
#endif

#ifdef _LAB

void debug_print_head(void) BANKING_CTRL{
	Printf("\r\nTRX TRAIN Start");
	Printf("\r\ncds,f0, f1, f2, f3, f4, f5, f6, f7, v_t, v_m, v_b, vrefshift, f0a, f0a_max, f0_data, eye_pass,##,e0,outer_eye,"); 
	Printf("r, c, r1, r2, c1, c1x, c2, ctle_bypass1, rl2, rl2_tune,res_f0,res_f1, res_f2, res_f34,res_f567,res_vref,f1p5_e,f1p5_o,sat, oe_sat,sumFtap, bst, lvl,");
	//Printf("vr_sat,step_res,");
	Printf("ph_ofst_a, align90_ref,ph_ctrl_mode,cdr_become_worse, adapt_data_en, adapt_slicer_en, ctrl_cdr_phase_on, fn1, fn2, t_g0, t_g1, t_gn1, o_g0, o_g1, o_gn1");
	//Printf(",em_pre,em_pos");
}

void debug_print(void) BANKING_CTRL{

	Printf("\r\n"/*, ctrl_max_dfe_adapt_shift*/ );
	Printf("%06lx", (uint32_t)cds_table[cds_tb_inx]);
    Printf(",%d", train.f0); 
    Printf(",%d", train.f1); 
    Printf(",%d", train.f2); 
    Printf(",%d", train.f3); 
    Printf(",%d", train.f4); 
    Printf(",%d", train.f5); 
    Printf(",%d", train.f6); 
    Printf(",%d", train.f7); 
	Printf(",%d", sum_vref_top);
	Printf(",%d", sum_vref_mid);
	Printf(",%d", sum_vref_bot);
	Printf(",%d", reg_VREF_SHIFT_LANE_1_0);

    Printf(",%d", train.f0a); 
	Printf(",%d", train.f0a_max);
	Printf(",%d", train.f0_data);
    Printf(",%d", train.eye_check_pass); 
	Printf(",==,%d", train.eo);
	Printf(",%d", train.outer_eye);
	
    //Printf(" slpr=(%d,", adapt_data_en);
    //Printf("%d)", adapt_slicer_en);

	#if _DBG_RXTRAIN
	//if(!ctrl_tx_train_on ) 
	{	
    Printf(",%d", train.r);
    Printf(",%d", train.c);
	Printf(",%d", reg_CTLE_RES1_SEL_LANE_3_0);
	Printf(",%d", reg_CTLE_RES2_SEL_LANE_3_0);
	Printf(",%d", reg_CTLE_CAP1_SEL_LANE_3_0);
	Printf(",%d", reg_CTLE_CAP1_SEL_EXTRA_LANE_2_0);
	Printf(",%d", reg_CTLE_CAP2_SEL_LANE_3_0);
	Printf(",%d", reg_CTLE_BYPASS1_EN_LANE);
	Printf(",%d", reg_CTLE_RL2_SEL_LANE_3_0);
	Printf(",%d", reg_CTLE_RL2_TUNE_G_LANE_2_0);

    Printf(",%d", dfe_f0_res_sel); 	
    Printf(",%d", dfe_f1_res_sel); 	
    Printf(",%d", dfe_f2_res_sel); 	
    Printf(",%d", dfe_f34_res_sel); 	
    Printf(",%d", dfe_f567_res_sel); 	
    //Printf(",%d", dfe_f8to10_res_sel);	
    //Printf(",%d", dfe_f11to15_res_sel); 	
    Printf(",%d", dfe_vref_res_sel);

    Printf(",%d", reg_DFE_F1P5_E_LANE_5_0); 	
    Printf(",%d", reg_DFE_F1P5_O_LANE_5_0); 	
	
	
	}
	#endif
	
    Printf(",%d", train.saturated);
    Printf(",%d", train.oe_saturate);
    Printf(",%d", train.sumFtap);
    Printf(",%d", train.boost);
    Printf(",%d", train.level);

	#if _DBG_RXTRAIN
	//if(!ctrl_tx_train_on ) 
	{	
    //Printf(" eom_en_sde(%d,",EOM_EN_S);
    //Printf("%d,",EOM_EN_D);
    //Printf("%d)",EOM_EN_E); 
    Printf(",%d", train.phase_offset_data );
    Printf(",%d", (reg_RX_ALIGN90_CAL_SETTING_LANE_7_0&0x7f) );
	Printf(",%d", ph_control_mode );
	Printf(",%d", cdr.become_worse);
	Printf(",%d", adapt_data_en);
	Printf(",%d", adapt_slicer_en);
	Printf(",%d", ctrl_cdr_phase_on);	
	
    //Printf(",%d", train.phase_offset_esm );
   // Printf("=(%d,", cdr_align90);
   // Printf("%d)", (uint8_t)reg_EOM_DPHER_LANE_6_0 );
	//print_osft_f1p();
	}
	#endif
	
	#if _DBG_TXTRAIN
	//if(!ctrl_rx_train_on ) 
	{	
	//Printf(",train_g0/1/n1");
	Printf(",%d", train.fn1  ); 			
	Printf(",%d", train.fn2  ); 			
	Printf(",%d", train.g0_index);
	Printf(",%d", train.g1_index);
	Printf(",%d", train.gn1_index);
	//Printf("=(%d,", reg_TX_EM_PEAK_CTRL_LANE_3_0);
	//Printf("%d,", reg_TX_EM_PO_CTRL_LANE_3_0);
	//Printf("%d)", reg_TX_EM_PRE_CTRL_LANE_3_0);
	//#endif	
	//Printf(" txffe_rd(%d,", ((reg_ANA_TX_EM_PEAK_CTRL_RD_LANE_3_0_b1<<2)+reg_ANA_TX_EM_PEAK_CTRL_RD_LANE_3_0_b0));
	//Printf("%d,", reg_ANA_TX_EM_POST_CTRL_RD_LANE_3_0);
	//Printf("%d)", reg_ANA_TX_EM_PRE_CTRL_RD_LANE_3_0);
	//#if _DBG_TXTRAIN	
	Printf(",%d", opt.g0_index);
	Printf(",%d", opt.g1_index);
	Printf(",%d", opt.gn1_index);
	//Printf(",min/max,%d,%d,%d,%d,%d,%d", tx.g0_is_min, tx.g0_is_max, tx.g1_is_min, tx.g1_is_max, tx.gn1_is_min, tx.gn1_is_max ); 			
	}
	#endif
	
}

#endif
