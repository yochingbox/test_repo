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

#define _RX_TRAIN_DEBUG _DBG_RXTRAIN

#define _PH_TRAIN_ADV_DEBUG _DBG_PHASE_TRAIN_ADV

// lnx_CLI_DEBUG0_LANE_7_0
// 7:4 pause_state_to_trap
// 2: auto_trap_en: automatically trap next pause_state after release
// 1: trapped_flag: read only
// 0: trap_request
// trap: set pause_state_to_trap and trap_request, then FW sets trapped_flag when it reaches pause_state_to_trap
// auto_trap: set auto_trap_en, then FW sets trapped_flag, pause_state_to_trap and trap_request when it reaches next pause_state
// release: clear trap_request or change pause_state_to_trap
void check_pause_state(uint8_t pause_state) BANKING_CTRL{
	if(lnx_CLI_DEBUG0_LANE_7_0&0x4){
		lnx_CLI_DEBUG0_LANE_7_0 &= ~0xf1;
		lnx_CLI_DEBUG0_LANE_7_0 |= (pause_state<<4|0x1);
	}
	if((lnx_CLI_DEBUG0_LANE_7_0&0xf1)==(pause_state<<4|0x1)){
		if(pause_state==PAUSE_ST_DTL){
			trx_train_init();
		}
		// trapped count
		lnx_CLI_DEBUG1_LANE_7_0++;
		do{
			lnx_CLI_DEBUG0_LANE_7_0|=0x2;
/*			if(pause_state==PAUSE_ST_TEST_B){*/
/*				if(lnx_CLI_DEBUG3_LANE_7_0==1){*/
/*					//cds_call = CDS_EN_RECOVER;*/
/*					cds_call = 0x000031;*/
/*					dfe_cdr_phase_opt();*/
/*					record_train_result(51);//50*/
/*					cds_call = 0x420F00;*/
/*					dfe_cdr_phase_opt();*/
/*					lnx_CLI_DEBUG3_LANE_7_0=0;*/
/*				}*/
/*			}*/
			delay_ram(T_10us);
		}while((lnx_CLI_DEBUG0_LANE_7_0&0xf1)==(pause_state<<4|0x1));
		lnx_CLI_DEBUG0_LANE_7_0&=~0x2;
	}
}

#if 0
// number can be in [1,6]
void record_train_result(uint8_t number) BANKING_CTRL {
	uint8_t base;
	if(number>6) return;// can only support up to 6 copies
	base = (number-1) * 8;
	dsp_debug[base] = train_step;
	dsp_debug[base+1] = sum_vref_top>>8&0xff;//opt_r;
	dsp_debug[base+2] = sum_vref_top&0xff;//opt_c;
	dsp_debug[base+3] = opt.phase_offset_data;
	dsp_debug[base+4] = train.f0a_max;//train.f0;
	dsp_debug[base+5] = train.eo;
	dsp_debug[base+6] = train.level;
	dsp_debug[base+7] = dfe_res_f0a_high_thres;//number;
}
#endif
#if 0
// number can be in [1,6]
void record_train_result(uint8_t number) BANKING_CTRL {
	uint8_t base;
	if(number>6) return;// can only support up to 6 copies
	base = (number-1) * 2;
	dsp_debug[base] = convert_rx_align90_de_reg_to_code();
	dsp_debug[base+1] = convert_rx_align90_dd_reg_to_code();
}
#endif
#if 1
// number can be in [1,10]
void record_train_result(uint8_t number) BANKING_CTRL {
	uint8_t base;
	uint8_t temp = 0;
//	if(number>10) return;
/*	if(dsp_debug[0]<50){*/
/*		dsp_debug[0]++;*/
/*		dsp_debug[dsp_debug[0]] = 1<<ctrl_max_dfe_adapt_shift;//train.eo;*/
/*	}*/
/*	return;*/

	base = (number-1) * 1;
	if(base>=39){
/*			temp = base+dsp_debug[11]/5*3;*/
/*			if(temp+2<sizeof(dsp_debug)){*/
/*				dsp_debug[temp] = TRX_TRAIN0.BT.B3;*/
/*				dsp_debug[temp+1] = TRX_TRAIN1.BT.B1;*/
/*				dsp_debug[temp+2] = reg_INT_LOCAL_CTRL_RESET_LANE<<7;*/
/*				dsp_debug[temp+2]|= reg_INT_LOCAL_CTRL_G0_LANE_1_0<<5;*/
/*				dsp_debug[temp+2]|= drv_TXTRAIN_STATUS_VALID<<4;*/
/*				dsp_debug[temp+2]|= reg_INT_TX_PRESET_INDEX_LANE_3_0;*/
/*			}*/
		dsp_debug[base] = reg_DFE_VREF_TOP_P2_SM_LANE_6_0;
		dsp_debug[base+1] = reg_DFE_VREF_BOT_P2_SM_LANE_6_0;
		temp = dfe_vref_res_sel;
		dsp_debug[base+2] = temp;
		temp = reg_VREF_SHIFT_LANE_1_0;
		dsp_debug[base+3] = temp;
		return;
	}
	if(base>=12){//from 16, 0x6fdc
		if(12+dsp_debug[11]<23){
			dsp_debug[12+dsp_debug[11]] = train.eo;
			//dsp_debug[12+dsp_debug[11]] = reg_REMOTE_CTRL_BITS_LANE_15_0>>8&0xff;
		}
		dsp_debug[11]++;
		return;
	}
	
	dsp_debug[base] = train.eo;//reg_DFE_VREF_TOP_P2_SM_LANE_6_0;
	dsp_debug[base+25] = reg_DFE_VREF_BOT_P2_SM_LANE_6_0;
//	dsp_debug[base+1] = convert_rx_align90_dd_reg_to_code();
#if 0
	if(number==5){
		dsp_debug[12] = reg_DFE_F0_D_TOP_P2_SM_LANE_5_0;
		dsp_debug[13] = reg_DFE_F0_D_TOP_P4_SM_LANE_5_0;
		dsp_debug[14] = reg_DFE_F0_D_MID_P2_SM_LANE_5_0;
		dsp_debug[15] = reg_DFE_F0_D_MID_P4_SM_LANE_5_0;
		dsp_debug[16] = reg_DFE_F0_D_BOT_P2_SM_LANE_5_0;
		dsp_debug[17] = reg_DFE_F0_D_BOT_P4_SM_LANE_5_0;
		dsp_debug[18] = reg_DFE_F0_S_TOP_P2_SM_LANE_5_0;
		dsp_debug[19] = reg_DFE_F0_S_TOP_P4_SM_LANE_5_0;
		dsp_debug[20] = reg_DFE_F0_S_MID_P2_SM_LANE_5_0;
		dsp_debug[21] = reg_DFE_F0_S_MID_P4_SM_LANE_5_0;
		dsp_debug[22] = reg_DFE_F0_S_BOT_P2_SM_LANE_5_0;
		dsp_debug[23] = reg_DFE_F0_S_BOT_P4_SM_LANE_5_0;
	}
#endif
}
#endif

void record_temp(uint8_t number, uint8_t ctle_sel2) BANKING_CTRL {
#ifdef SUPPORT_RECORD_TEMP
	uint8_t base;
	uint8_t i;
	//if(number>6) number=number%6; // can only support up to 6 copies
	//base = (number-1) * 2;
	base = 32;
	for(i=8-1;i>0;i--){
		dsp_debug[base+i*2] = dsp_debug[base+(i-1)*2];
		dsp_debug[base+i*2+1] = dsp_debug[base+(i-1)*2+1];
	}
	dsp_debug[base] = temp_pre&0xff;
	dsp_debug[base+1] = ctle_sel2;
#endif
}

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

uint16_t read_testbus0(uint8_t sel_hi, uint8_t sel_low) BANKING_CTRL{
	uint16_t data = 0;
	reg_TESTBUS_SEL_HI0_LANE_5_0 = sel_hi;
	reg_TESTBUS_SEL_LO0_LANE_5_0 = sel_low;
	mcu_request_lane[mcuid] |= 0x2;
	mcu_response_delay();
	while((mcu_response_status[mcuid]>>1&0x1)==0);
	data = mcu_response_data[mcuid];
	mcu_request_lane[mcuid] &= ~0x2;
	return data;
}

// debug.c
// For MCU_CMN
void handle_testbus_request() BANKING_CTRL{
	uint8_t i = 0;

	for(i=0;i<4;i++){
		// also check mcu_response_status to not read multiple times to prevent mcu_response_data glitch
		if((mcu_request_lane[i]&0x2)!=0 && (mcu_response_status[i]&0x2)==0){
			reg_TESTBUS_LANE_SEL0_2_0 = i;
			mcu_response_data[i] = reg_DIG_TEST_BUS_15_0;
			mcu_response_status[i] |= 0x2;
		}
	}
}

