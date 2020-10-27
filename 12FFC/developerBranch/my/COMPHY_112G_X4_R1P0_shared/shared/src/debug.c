/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file debug.c
* \purpose debug functions
* \History
*	05/14/2019 Xunzhi Wang		Initial 
*/
#include "common.h"
#include "driver.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg BANK2
#endif

#define _RX_TRAIN_DEBUG

#define _PH_TRAIN_ADV_DEBUG
#define _RTPA_DEBUG

#ifdef _PH_TRAIN_ADV_DEBUG
// added by JL
void DBG_Printf_f0fx_ds_p1234() BANKING_CTRL
{
    uint8_t p_idx, ds_idx;

    DBG_Printf(",***");

    for (p_idx = 0; p_idx < NUM_PATH; p_idx++){
        for (ds_idx = 0; ds_idx < NUM_DS; ds_idx++){
            DBG_Printf(",%d", train.fn3_tmb[p_idx][ds_idx]);
        }
    }

    for (p_idx = 0; p_idx < NUM_PATH; p_idx++){
        for (ds_idx = 0; ds_idx < NUM_DS; ds_idx++){
            DBG_Printf(",%d", train.fn2_tmb[p_idx][ds_idx]);
        }
    }

    for (p_idx = 0; p_idx < NUM_PATH; p_idx++){
        for (ds_idx = 0; ds_idx < NUM_DS; ds_idx++){
            DBG_Printf(",%d", train.fn1_tmb[p_idx][ds_idx]);
        }
    }

    for (p_idx = 0; p_idx < NUM_PATH; p_idx++){
        for (ds_idx = 0; ds_idx < NUM_DS; ds_idx++){
            DBG_Printf(",%d", train.f0d_tmb[p_idx][ds_idx]);
        }
    }

    for (p_idx = 0; p_idx < NUM_PATH; p_idx++){
        for (ds_idx = 0; ds_idx < NUM_DS; ds_idx++){
            DBG_Printf(",%d", train.f1_tmb[p_idx][ds_idx]);
        }
    }
}
//
#endif


// From dfe_adaptation
void debug_training() BANKING_CTRL
{
    int8_t fx = 0; //added by JL

#ifdef _RX_TRAIN_DEBUG

	DBG_Printf("\n\r%d", train.f0);
	DBG_Printf(",%d", train.f1);
	DBG_Printf(",%d", train.f2);
	DBG_Printf(",%d", train.f3);

	DBG_Printf(",%d", train.f4);
	DBG_Printf(",%d", train.f5);
	DBG_Printf(",%d", train.f6);
	DBG_Printf(",%d", train.f7);
	DBG_Printf(",%d", sum_vref_top);
	DBG_Printf(",%d", sum_vref_mid);
	DBG_Printf(",%d", sum_vref_bot);
	DBG_Printf(",%d", reg_VREF_SHIFT_LANE_1_0);
	//DBG_Printf("  %d", train.eye_check_pass);

	DBG_Printf(",%d", train.f0a);
	DBG_Printf(",%d", train.f0a_max);
	DBG_Printf(",%d", train.f0_data);
	DBG_Printf(",%d", train.eye_check_pass);
	DBG_Printf(",%d", train.eo);
	DBG_Printf(",%d", train.outer_eye);
	DBG_Printf(",%d", train.saturated);
	DBG_Printf(",%d", train.sumFtap);
	DBG_Printf(",%d", train.boost);
	DBG_Printf(",%d", train.level);
	DBG_Printf(",%d", cds112.f.vref_saturate);

#if _DBG_RXTRAIN
	//if(!ctrl_tx_train_on )
	{
		DBG_Printf(",%d", train_r);
		DBG_Printf(",%d", train_c);
		DBG_Printf(",%d", reg_CTLE_RES1_SEL_LANE_3_0);
		DBG_Printf(",%d", reg_CTLE_RS2_SEL_G_P2_LANE_3_0);
		DBG_Printf(",%d", reg_CTLE_RL2_SEL_G_P1_LANE_3_0);

		DBG_Printf(",%d",reg_CTLE_CAP1_SEL_LANE_5_0);
		DBG_Printf(",%d",reg_CTLE_CAP2_SEL_LANE_4_0);

		DBG_Printf(",%d",reg_DFE_RES_VREF_LANE_1_0);
		DBG_Printf(",%d",ctrl_step_res_dfe);
		//DBG_Printf("  %d",dfe_f1_res_sel);
		DBG_Printf(",%d",dfe_f2_res_sel);
		DBG_Printf(",%d",dfe_f34_res_sel);
		DBG_Printf(",%d",dfe_f5678_res_sel);
		DBG_Printf(",%d",dfe_f9to14_res_sel);

	}
#endif

	//Printf(" f0a_max:%d", train.f0a_max);

#if _DBG_RXTRAIN
	//if(!ctrl_tx_train_on )
	{
		//Printf(" eom_en_sde(%d,",EOM_EN_S);
		//Printf("%d,",EOM_EN_D);
		//Printf("%d)",EOM_EN_E);

		DBG_Printf(",%d", train.phase_offset_data );
		DBG_Printf(",%d", cdr.ini_phase_offset);
		DBG_Printf(",%d", cdr.min_phase_os);
		DBG_Printf(",%d", cdr.max_phase_os);
		DBG_Printf(",%d", drv_PH_OS_DAT );
		DBG_Printf(",%d", (reg_RX_ALIGN90_DE_CAL_SETTING_LANE_10_3 << 3) | reg_RX_ALIGN90_DE_CAL_SETTING_LANE_2_0);
		DBG_Printf(",%d", cdr.become_worse);
		DBG_Printf(",%d", reg_MCU_DEBUGE_LANE_7_0);
		/*DBG_Printf("  %d", cds112.f.f0b.d_top_p2);
		DBG_Printf("  %d", cds112.f.f0b.d_mid_p2);
		DBG_Printf("  %d", cds112.f.f0b.d_bot_p2);
		DBG_Printf("  %d", cds112.f.f0b.d_top_p4);
		DBG_Printf("  %d", cds112.f.f0b.d_mid_p4);
		DBG_Printf("  %d", cds112.f.f0b.d_bot_p4);

		DBG_Printf("  %d", cds112.f.f0b.s_top_p2);
		DBG_Printf("  %d", cds112.f.f0b.s_mid_p2);
		DBG_Printf("  %d", cds112.f.f0b.s_bot_p2);
		DBG_Printf("  %d", cds112.f.f0b.s_top_p4);
		DBG_Printf("  %d", cds112.f.f0b.s_mid_p4);
		DBG_Printf("  %d", cds112.f.f0b.s_bot_p4);
		DBG_Printf("  %d", reg_MCU_DEBUG0_LANE_7_0);
		DBG_Printf("  %d", reg_MCU_DEBUG2_LANE_7_0);
		DBG_Printf("  %d", reg_MCU_DEBUG4_LANE_7_0);
		DBG_Printf("  %d", reg_MCU_DEBUG6_LANE_7_0);*/


		/*DBG_Printf("  %d", reg_MCU_DEBUG6_LANE_7_0);
    		DBG_Printf("  %d", reg_ALIGN90_GM_LANE_2_0);
    		DBG_Printf("  %d", reg_ALIGN90_DAC_LANE_6_0);
    		DBG_Printf("  %d", lnx_RXALIGN90_CAL_DONE_LANE);
    		DBG_Printf("  %d", lnx_RXALIGN90_CAL_PASS_LANE);*/
		//DBG_Printf("  %d", (uint8_t)reg_EOM_DPHER_LANE_6_0 );
		//print_osft_f1p();
	}
#endif
	//if(!ctrl_rx_train_on )
#if _DBG_TXTRAIN
	{
		DBG_Printf(",==");
		
		DBG_Printf(",%d", train.fn1);
		DBG_Printf(",%d", train.fn2);
		DBG_Printf(",%d", train.g0_index);
		DBG_Printf(",%d", train.g1_index);
		DBG_Printf(",%d", train.gn1_index);
		DBG_Printf(",%d", train.gn2_index);
		//DBG_Printf("=(%d,", reg_TX_EM_PEAK_CTRL_LANE_3_0);
		//DBG_Printf("%d,", reg_TX_EM_PO_CTRL_LANE_3_0);
		//DBG_Printf("%d)", reg_TX_EM_PRE_CTRL_LANE_3_0);
		DBG_Printf(",%d", opt.g0_index);
		DBG_Printf(",%d", opt.g1_index);
		DBG_Printf(",%d", opt.gn1_index);
		DBG_Printf(",%d", opt.gn2_index);
		//DBG_Printf("  %d", reg_FM_TRAIN_TX_AMP_LANE_6_0); //c0
		//DBG_Printf("  %d", reg_FM_TRAIN_TX_EMPH1_LANE_4_0); //c1
		//DBG_Printf("  %d", reg_FM_TRAIN_TX_EMPH0_LANE_4_0); //cn1
		//DBG_Printf("  %d", reg_FM_TRAIN_TX_EMPH2_LANE_4_0); //cn2
		DBG_Printf(",%d", reg_TO_ANA_TX_FIR_C0_LANE_5_0);
		DBG_Printf(",%d", reg_TO_ANA_TX_FIR_C1_LANE_5_0);
		DBG_Printf(",%d", reg_TO_ANA_TX_FIR_C2_LANE_5_0);
		DBG_Printf(",%d", reg_TO_ANA_TX_FIR_C3_LANE_5_0);
		DBG_Printf(",%d", reg_TO_ANA_TX_FIR_C4_LANE_5_0);
		DBG_Printf(",%d", reg_TO_ANA_TX_FIR_C5_LANE_5_0);
#if _DBG_F0X
		DBG_Printf(",%d", train.f1_qr);
		DBG_Printf(",%d", train.fn3);
		DBG_Printf(",%d", train.fn4);
		DBG_Printf(",%d", train.fn5);
#endif		
	}
#endif

// Added by JL
    #if _DBG_PHASE_TRAIN_ADV
        DBG_Printf_f0fx_ds_p1234();
        if (reg_DFE_F0X_SEL_LANE_4_0 == DFE_FX_SEL_FN5)
            fx = -5;
        else if (reg_DFE_F0X_SEL_LANE_4_0 == DFE_FX_SEL_FN4)
            fx = -4;
        else if (reg_DFE_F0X_SEL_LANE_4_0 == DFE_FX_SEL_FN3)
            fx = -3;
        else if (reg_DFE_F0X_SEL_LANE_4_0 == DFE_FX_SEL_FN2)
            fx = -2;
        else if (reg_DFE_F0X_SEL_LANE_4_0 == DFE_FX_SEL_FN1)
            fx = -1;
        else if (reg_DFE_F0X_SEL_LANE_4_0 == DFE_FX_SEL_FP1)
            fx = 1;
            
        DBG_Printf(",%d", fx);
        //
    #endif 

#endif
}


// balancing banks
void req_local_ctrl(uint8_t ce, uint8_t c1, uint8_t c0, uint8_t cn1, uint8_t cn2) BANKING_CTRL
{
	bool hit_limit = 0;
	uint8_t remote_status_g;
	
	// IPCE_COMPHY-1424 add option to take user settings
	// default pre code
	drv_TXTRAIN_CTRL_PAT = 3;
	if(lnx_TX_TRAIN_CODING_MODE_LANE==1){
		// set TX req from saved RX setting
		if(save_gray_code_en>>1&1)// pre
			drv_TXTRAIN_CTRL_PAT = 3;
		else if(save_gray_code_en&1)// gray
			drv_TXTRAIN_CTRL_PAT = 2;
	}
	drv_TXTRAIN_CTRL_PRESET = ce;
	drv_TXTRAIN_CTRL_C1 = c1;
	drv_TXTRAIN_CTRL_C0 = c0;
	drv_TXTRAIN_CTRL_CN1 = cn1;
	drv_TXTRAIN_CTRL_CN2 = cn2;
	set_dfe_cont(1);
	set_remote_tx();
	set_dfe_cont(0);

	#if _DEBUG
    DBG_PS("\r\n c1,c0,cn1,cn2=(%d,%d,%d,%d):  ",c1,c0,cn1,cn2);
	#endif

	// -- check min/max
	if(reg_ETHERNET_MODE_LANE_1_0 == 2) { //pam4
		if(c0!=0) {
			tx.g0_is_max  = 0; tx.g0_is_min  = 0;				
			remote_status_g = drv_TXTRAIN_STATUS_C0;
			hit_limit = remote_status_g==2 || remote_status_g==4 || remote_status_g==6;
			if(hit_limit) {
				if(c0==ST_INC) { tx.g0_is_max  = 1; DBG_Printf(" g0max");}
				else if(c0==ST_DEC) { tx.g0_is_min  = 1; DBG_Printf(" g0min");}	
			}			
		}
		if(cn1!=0) {
			tx.gn1_is_max  = 0; tx.gn1_is_min  = 0;
			remote_status_g = drv_TXTRAIN_STATUS_CN1;
			hit_limit = remote_status_g==2 || remote_status_g==4 || remote_status_g==6;
			if(hit_limit) {
				if(cn1==ST_INC) { tx.gn1_is_max  = 1; DBG_Printf(" gn1max");}
				else if(cn1==ST_DEC) { tx.gn1_is_min  = 1; DBG_Printf(" gn1min"); }		
			}		
		}			
		if(c1!=0) {
			tx.g1_is_max  = 0; tx.g1_is_min  = 0;
			remote_status_g = drv_TXTRAIN_STATUS_C1;
			hit_limit = remote_status_g==2 || remote_status_g==4 || remote_status_g==6;
			if(hit_limit) {
				if(c1==ST_INC) { tx.g1_is_max  = 1; DBG_Printf(" g1max"); }
				else if(c1==ST_DEC) { tx.g1_is_min  = 1; DBG_Printf(" g1min"); }		
			}		
		}			
		if(cn2!=0) {
			tx.gn2_is_max  = 0; tx.gn2_is_min  = 0;
			remote_status_g = drv_TXTRAIN_STATUS_CN2;
			hit_limit = remote_status_g==2 || remote_status_g==4 || remote_status_g==6;
			if(hit_limit) {
				if(cn2==ST_INC) { tx.gn2_is_max  = 1; DBG_Printf(" gn2max"); }
				else if(cn2==ST_DEC) { tx.gn2_is_min  = 1;	DBG_Printf(" gn2min"); }
			}		
		}		
	}
	else {	//pam2
		tx.g0_is_max  = drv_TXTRAIN_STATUS_C0 == 3;
		tx.g0_is_min  = drv_TXTRAIN_STATUS_C0 == 2;
		// tx.gn1_is_max = drv_TXTRAIN_STATUS_CN1 == 3;
		// tx.gn1_is_min = drv_TXTRAIN_STATUS_CN1 == 2;
		tx.g1_is_max  = drv_TXTRAIN_STATUS_C1 == 3;
		tx.g1_is_min  = drv_TXTRAIN_STATUS_C1 == 2;
	}

	#if _DEBUG
		DBG_PS("%02x", remote_status_g);
	#endif
}

