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

	//uint8_t i;

	lnx_UART_EN_LANE = 1; //test

	//for(i=0; i<17; i++) {
	//Printf("\r\n train_cds=%d, cds=%06lx", i, cmx_train_cds_tb[i]);
	//}

	Printf("\r\nTRX TRAIN Start");
	Printf("\r\ntrain_st,cds,");
	#if _DBG_PRINT_CDS_TAP
	Printf("cds_f0a_d_t_e,cds_f0a_d_m_e,cds_f0a_d_b_e,cds_f0a_d_t_o,cds_f0a_d_m_o,cds_f0a_d_b_o,"); 
	Printf("cds_f0a_s_t_e,cds_f0a_s_m_e,cds_f0a_s_b_e,cds_f0a_s_t_o,cds_f0a_s_m_o,cds_f0a_s_b_o,");
	Printf("cds_f0b_d_t_e,cds_f0b_d_m_e,cds_f0b_d_b_e,cds_f0b_d_t_o,cds_f0b_d_m_o,cds_f0b_d_b_o,"); 
	Printf("cds_f0b_s_t_e,cds_f0b_s_m_e,cds_f0b_s_b_e,cds_f0b_s_t_o,cds_f0b_s_m_o,cds_f0b_s_b_o,"); 
	Printf("cds_f0k_d_t_e,cds_f0k_d_m_e,cds_f0k_d_b_e,cds_f0k_d_t_o,cds_f0k_d_m_o,cds_f0k_d_b_o,"); 
	Printf("cds_f0k_s_t_e,cds_f0k_s_m_e,cds_f0k_s_b_e,cds_f0k_s_t_o,cds_f0k_s_m_o,cds_f0k_s_b_o,");
	Printf("cds_f1_d_t_e,cds_f1_d_m_e,cds_f1_d_b_e,cds_f1_d_t_o,cds_f1_d_m_o,cds_f1_d_b_o,");
	Printf("cds_f1_s_t_e,cds_f1_s_m_e,cds_f1_s_b_e,cds_f1_s_t_o,cds_f1_s_m_o,cds_f1_s_b_o,"); 
	#endif	//_DBG_PRINT_CDS_TAP

	Printf("f0b, f1, f2, f3, f4, f5, f6, f7, v_t, v_m, v_b, vrefshift, f0a, f0a_max, f0k, eye_pass,##,e0,outer_eye,"); 
	Printf("r, c, r1, r2, c1, c1x, c2, ctle_bypass1, rl2, rl2_tune,res_f0,res_f1, res_f2, res_f34,res_f567,res_vref,f1p5_e,f1p5_o,sat, oe_sat,sumFtap, bst, lvl,");
	//Printf("vr_sat,step_res,");
	Printf("ph_ofst_a, align90_ref,ph_ctrl_mode,cdr_become_worse, adapt_data_en, adapt_slicer_en, ctrl_cdr_phase_on, fn1, fn2");
	#if _DBG_TXTRAIN
	Printf("t_g0, t_g1, t_gn1, o_g0, o_g1, o_gn1,");
	#endif
	//Printf(",em_pre,em_pos");
	Printf("sum_boost_target_k,sum_boost_target_c");

	Printf(",f0b_vote_cnt,sum_diff,norm_f0b,norm_c1,norm_f0b_his_thrs, train_rl2_tune, norm_rl2_tune");

}

void debug_print(void) BANKING_CTRL{

	if(!lnx_UART_EN_LANE) return;

	Printf("\r\n"/*, ctrl_max_dfe_adapt_shift*/ );
	Printf("%d",train_st);
	Printf(",%06lx", (uint32_t)cmx_train_cds_tb[train_cds]); //cds_table[cds_tb_inx]);

	#if _DBG_PRINT_CDS_TAP
    Printf(",%d", cds56.f.f0a.d_top_e); 
    Printf(",%d", cds56.f.f0a.d_mid_e); 
    Printf(",%d", cds56.f.f0a.d_bot_e); 
    Printf(",%d", cds56.f.f0a.d_top_o); 
    Printf(",%d", cds56.f.f0a.d_mid_o); 
    Printf(",%d", cds56.f.f0a.d_bot_o); 
    Printf(",%d", cds56.f.f0a.s_top_e); 
    Printf(",%d", cds56.f.f0a.s_mid_e); 
    Printf(",%d", cds56.f.f0a.s_bot_e); 
    Printf(",%d", cds56.f.f0a.s_top_o); 
    Printf(",%d", cds56.f.f0a.s_mid_o); 
    Printf(",%d", cds56.f.f0a.s_bot_o); 
	
    Printf(",%d", cds56.f.f0b.d_top_e); 
    Printf(",%d", cds56.f.f0b.d_mid_e); 
    Printf(",%d", cds56.f.f0b.d_bot_e); 
    Printf(",%d", cds56.f.f0b.d_top_o); 
    Printf(",%d", cds56.f.f0b.d_mid_o); 
    Printf(",%d", cds56.f.f0b.d_bot_o); 
    Printf(",%d", cds56.f.f0b.s_top_e); 
    Printf(",%d", cds56.f.f0b.s_mid_e); 
    Printf(",%d", cds56.f.f0b.s_bot_e); 
    Printf(",%d", cds56.f.f0b.s_top_o); 
    Printf(",%d", cds56.f.f0b.s_mid_o); 
    Printf(",%d", cds56.f.f0b.s_bot_o); 

    Printf(",%d", cds56.f.f0k.d_top_e); 
    Printf(",%d", cds56.f.f0k.d_mid_e); 
    Printf(",%d", cds56.f.f0k.d_bot_e); 
    Printf(",%d", cds56.f.f0k.d_top_o); 
    Printf(",%d", cds56.f.f0k.d_mid_o); 
    Printf(",%d", cds56.f.f0k.d_bot_o); 
    Printf(",%d", cds56.f.f0k.s_top_e); 
    Printf(",%d", cds56.f.f0k.s_mid_e); 
    Printf(",%d", cds56.f.f0k.s_bot_e); 
    Printf(",%d", cds56.f.f0k.s_top_o); 
    Printf(",%d", cds56.f.f0k.s_mid_o); 
    Printf(",%d", cds56.f.f0k.s_bot_o); 

    Printf(",%d", cds56.f.dfe_2c.f1_d_top_e); 
    Printf(",%d", cds56.f.dfe_2c.f1_d_mid_e); 
    Printf(",%d", cds56.f.dfe_2c.f1_d_bot_e); 
    Printf(",%d", cds56.f.dfe_2c.f1_d_top_o); 
    Printf(",%d", cds56.f.dfe_2c.f1_d_mid_o); 
    Printf(",%d", cds56.f.dfe_2c.f1_d_bot_o); 
    Printf(",%d", cds56.f.dfe_2c.f1_s_top_e); 
    Printf(",%d", cds56.f.dfe_2c.f1_s_mid_e); 
    Printf(",%d", cds56.f.dfe_2c.f1_s_bot_e); 
    Printf(",%d", cds56.f.dfe_2c.f1_s_top_o); 
    Printf(",%d", cds56.f.dfe_2c.f1_s_mid_o); 
    Printf(",%d", cds56.f.dfe_2c.f1_s_bot_o); 
	
	#endif //_DBG_PRINT_CDS_TAP

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
	Printf(",%d", train.f0k);
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
	
	Printf(",%d", train.fn1  ); 			
	Printf(",%d", train.fn2  ); 			
	#if _DBG_TXTRAIN
	//if(!ctrl_rx_train_on ) 
	{	
	//Printf(",train_g0/1/n1");
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
	
	Printf(",%d", tag_SUMF_BOOST_TARGET_K);
	Printf(",%d", tag_SUMF_BOOST_TARGET_C);

	Printf(",%d,%d,%d,%d,%d,%d,%d", f0b_vote_cnt, sum_f0b_diff, lnx_NORM_F0B_LANE_7_0, lnx_ADAPT_C1_INX_LANE_7_0, norm_f0b_his_thrs, train_rl2_tune, norm_rl2_tune );


}

#endif

