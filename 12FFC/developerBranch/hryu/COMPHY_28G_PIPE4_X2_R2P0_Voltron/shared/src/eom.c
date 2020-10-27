#include "common.h"

#ifndef _28G_X2
#ifdef USE_BANKING
#pragma codeseg BANK4
#endif
#endif
#pragma constseg CSEG

uint8_t sum_32(uint32_t * accumulator, uint32_t * cnt);
__code uint32_t eom_pop_threhold[] = {0x4, 0x28, 0x187, 0xf43, 0x9896, 0x5f5e2, 0x3b9acb, 0x2540be5,\
		0x174876e8, 0xe8d4a511};

void Check_EOM_Stage_fmExt(void) EOM_BANK {
#ifdef SUPPORT_EOM 
	uint8_t	checked_val, i;
	int16_t new_esm_ph;
	uint8_t	dec_ratio;
	uint32_t eom_pop_cnt_p_shifted; //eom_pop_cnt_n_shifted; //to save code size only use p cnt
	
	new_esm_ph = 0;
    dec_ratio = reg_RX_SPEED_DIV_LANE_2_0&0x03;
	
	if(lnx_ESM_EN_LANE==1 && lnx_EOM_READY_LANE==0)
	{
		dfe_hardware_cont_stop();

		//reg_EOM_CLK_EN_LANE = 1;	//todo
		
		save_pu_f1p_s_o = reg_PU_F1P_S_O_LANE; 
		save_pu_f1p_s_e = reg_PU_F1P_S_E_LANE; 
		save_dfe_adapt_splr = reg_DFE_ADAPT_SPLR_EN_LANE_3_0; 
		//save_dfe_adapt_e_en = reg_DFE_ADAPT_EVEN_EN_LANE;
		//save_dfe_adapt_o_en = reg_DFE_ADAPT_ODD_EN_LANE;
		save_adapt_lpnum = reg_DFE_ADAPT_LPNUM_LANE_9_0_b1;
		save_adapt_lpnum <<= 4;	save_adapt_lpnum |= reg_DFE_ADAPT_LPNUM_LANE_9_0_b0;
		
		save_eom_en_s = reg_EOM_EN_S_LANE;
		save_eom_en_d = reg_EOM_EN_D_LANE;
		save_dfe_en = reg_DFE_EN_LANE;
		
		save_dfe_dis = dfe_dis;

		dfe_dis = 0;
		//reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = lnx_ESM_DFE_ADAPT_SPLR_EN_LANE_3_0;
		
		// -- select eye based on data rate
		if( dec_ratio == 0x3) {
            reg_PU_F1P_S_O_LANE = 1;
        //    reg_DFE_ADAPT_EVEN_EN_LANE = 0;
        //    reg_DFE_ADAPT_ODD_EN_LANE  = 1;
        }
		else if( dec_ratio == 0x2) {
            reg_PU_F1P_S_E_LANE = 1;
        //    reg_DFE_ADAPT_EVEN_EN_LANE = 1;
        //    reg_DFE_ADAPT_ODD_EN_LANE  = 0;
        }
		//else if( dec_ratio == 0x1) {
        //    reg_DFE_ADAPT_EVEN_EN_LANE = 0;
        //    reg_DFE_ADAPT_ODD_EN_LANE  = 1;
        //}
        //else {
        //    reg_DFE_ADAPT_EVEN_EN_LANE = 1;
        //    reg_DFE_ADAPT_ODD_EN_LANE  = 1;
        //}
		
        if(lnx_ESM_PATH_SEL_LANE) { 
            //reg_EOM_EN_D_LANE = 0;
            //reg_EOM_EN_S_LANE = 1;
			adapt_slicer_en = 1; adapt_data_en = 0;
            if(dec_ratio == 0)
                reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0xc; 
            else
                reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0x8; 
        }else{
            //reg_EOM_EN_D_LANE = 1;
            //reg_EOM_EN_S_LANE = 0;
			adapt_slicer_en = 0; adapt_data_en = 1;
            if(dec_ratio == 0)
                reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0x3; 
            else
                reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0x2; 
        }
		
		reg_DFE_UPDATE_EN_LANE_15_0 = 0;
		reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;
		reg_DFE_UPDATE_DC_EN_LANE = 0;
		pol_table_loop_num_1_0 = 2; pol_table_loop_num_9_2 = 2; //10
		dfe_adapt_lpnum_3_0 = 5; dfe_adapt_lpnum_9_4 = 0; //5
		
		#if 1
		dfe_save(); //save f0
		#else
		 dfe_sm.f0_d_p_e = reg_DFE_F0_D_P_E_SM_LANE_5_0;
		 dfe_sm.f0_d_n_e = reg_DFE_F0_D_N_E_SM_LANE_5_0;
		 dfe_sm.f0_s_p_e = reg_DFE_F0_S_P_E_SM_LANE_5_0;
		 dfe_sm.f0_s_n_e = reg_DFE_F0_S_N_E_SM_LANE_5_0;
		 dfe_sm.f0_d_p_o = reg_DFE_F0_D_P_O_SM_LANE_5_0;
		 dfe_sm.f0_d_n_o = reg_DFE_F0_D_N_O_SM_LANE_5_0;
		 dfe_sm.f0_s_p_o = reg_DFE_F0_S_P_O_SM_LANE_5_0;
		 dfe_sm.f0_s_n_o = reg_DFE_F0_S_N_O_SM_LANE_5_0;
		#endif	

		#ifdef 	_28G_X2
		eom_align_cal(); 
		#else
		eom_align_cal_01(); 
		#endif
		
		cal_eom_dpher = reg_EOM_DPHER_LANE_6_0;
		PHY_STATUS = ST_NORMAL; 
		
		//ph_control_mode = 1;
		//phase_control_func();
		EOM_EN_D = adapt_data_en==1? 1: tag_EOM_DRIVE_DATA_EN_MODE1; //0
		EOM_EN_S = adapt_slicer_en==1? 1: tag_EOM_DRIVE_DATA_EN_MODE1; 
		EOM_EN_E = 0;
		
		EOM_clock_analog_align();
		#if (_DBG_PHASE_TRAIN || _DBG_PHASE_ADAPT)
		if( lnx_EOM_PHASE_UI_ALIGN_FAILED_LANE != _EXIT_SUCCESS) {
			DBG_Printf("fail!");
		}
		#endif		
		
		eye_check_en = 1;		
		
		lnx_ESM_PHASE_LANE_9_0_b1 = 0; lnx_ESM_PHASE_LANE_9_0_b0 = 0;  cur_esm_phase = 0;
		
		eom_ext_mode = 1;
		lnx_EOM_READY_LANE = 1;  //release
		//Puts("\r\n- Start EOM");
		#if (_DBG_PHASE_TRAIN || _DBG_PHASE_ADAPT)
		//DBG_Printf(" cal_eom_dpher : %d", cal_eom_dpher);
		#endif
		PHY_STATUS = ST_NORMAL; 
		return;
	}

	if(lnx_ESM_EN_LANE==1 && lnx_EOM_READY_LANE==1 && lnx_EOM_DFE_CALL_LANE==1)
	{	
		if(lnx_ESM_PHASE_LANE_9_0_b1 & 0x02) {
			new_esm_ph = 0xfc00 |  (lnx_ESM_PHASE_LANE_9_0_b1<<8) | lnx_ESM_PHASE_LANE_9_0_b0; 
		}
		else {
			new_esm_ph = (lnx_ESM_PHASE_LANE_9_0_b1<<8) | lnx_ESM_PHASE_LANE_9_0_b0;
		}
		
		#if (_DBG_PHASE_TRAIN || _DBG_PHASE_ADAPT)
		//DBG_Printf("\r\n esm_ph=%d ", new_esm_ph);
		#endif
		//eom_phase_update((int16_t)cal_eom_dpher + esm_ph);
		move_eom_phase(new_esm_ph - cur_esm_phase);
		cur_esm_phase = new_esm_ph;
		
		#ifndef SUPPORT_NEW_CDS
		check_eye_check_pass(lnx_ESM_VOLTAGE_LANE_7_0);
		#else
#if 1	//new EOM for 1e^12
		lnx_EOM_ERR_P_CNT_LANE_39_32 = 0;
		ESM_ERR_P_CNT_LOW_LANE.VAL = 0;
		lnx_EOM_POP_P_CNT_LANE_39_32 = 0;
		ESM_POP_P_CNT_LOW_LANE.VAL = 0;

		lnx_EOM_ERR_N_CNT_LANE_39_32 = 0;
		ESM_ERR_N_CNT_LOW_LANE.VAL = 0;
		lnx_EOM_POP_N_CNT_LANE_39_32 = 0;
		ESM_POP_N_CNT_LOW_LANE.VAL = 0;

		checked_val = lnx_EOM_BER_LANE_3_0;
		// Ensure to use val in valid range 3-0xc
		checked_val = ( checked_val < 3 ) ? 3 : ( ( checked_val > 0xc ) ? 0xC : checked_val );
		do{
			// An exit path in case of counters-all-zero issue
			if(lnx_ESM_EN_LANE==0)break;
		
			cds_tb = cds_table[CDS_EYECHECK];
			cdr_dfe_scheme();

			for (i =0; i<2; i++)
			{
				//P CNT bit 39:32
				lnx_EOM_ERR_P_CNT_LANE_39_32 = lnx_EOM_ERR_P_CNT_LANE_39_32 + sum_32((uint32_t*)&ESM_ERR_P_CNT_LOW_LANE, (uint32_t*)((&EOM_ERR_REG0)+i*2));
				lnx_EOM_POP_P_CNT_LANE_39_32 = lnx_EOM_POP_P_CNT_LANE_39_32 + sum_32((uint32_t*)&ESM_POP_P_CNT_LOW_LANE, (uint32_t*)((&EOM_VLD_REG0)+i*2));
				lnx_EOM_POP_P_CNT_LANE_39_32 = lnx_EOM_POP_P_CNT_LANE_39_32 + *((uint8_t*)((&EOM_VLD_REG4) + i + 1));

				//N CNT bit 39:32
				lnx_EOM_ERR_N_CNT_LANE_39_32 = lnx_EOM_ERR_N_CNT_LANE_39_32 + sum_32((uint32_t*)&ESM_ERR_N_CNT_LOW_LANE, (uint32_t*)((&EOM_ERR_REG1)+i*2));
				lnx_EOM_POP_N_CNT_LANE_39_32 = lnx_EOM_POP_N_CNT_LANE_39_32 + sum_32((uint32_t*)&ESM_POP_N_CNT_LOW_LANE, (uint32_t*)((&EOM_VLD_REG1)+i*2));
				lnx_EOM_POP_N_CNT_LANE_39_32 = lnx_EOM_POP_N_CNT_LANE_39_32 + *((uint8_t*)((&EOM_VLD_REG4) + i));
			}
			//right shift 8 bits p cnt
			eom_pop_cnt_p_shifted = (uint32_t)lnx_EOM_POP_P_CNT_LANE_39_32;
			eom_pop_cnt_p_shifted = eom_pop_cnt_p_shifted << 24;
			eom_pop_cnt_p_shifted = eom_pop_cnt_p_shifted | (ESM_POP_P_CNT_LOW_LANE.VAL >> 8);
			//right shift 8 bits n cnt
			/*eom_pop_cnt_n_shifted = (uint32_t)lnx_EOM_POP_N_CNT_LANE_39_32;
			eom_pop_cnt_n_shifted = eom_pop_cnt_n_shifted << 24;
			eom_pop_cnt_n_shifted = eom_pop_cnt_n_shifted | (ESM_ERR_N_CNT_LOW_LANE.VAL >> 8);*/
			//cds_tb = cds_table[CDS_EYECHECK];
			//cdr_dfe_scheme();
		}while(eom_pop_cnt_p_shifted < eom_pop_threhold[ checked_val - 3 ]);// || eom_pop_cnt_n_shifted < eom_pop_threhold[ checked_val - 3 ]); // to save code size only use p cnt
		lnx_EOM_DFE_CALL_LANE = 0;
#else
		cds_tb = cds_table[CDS_EYECHECK];
		cdr_dfe_scheme();
		lnx_EOM_DFE_CALL_LANE = 0;
#endif
		#endif
		
		return;
	}
	
	if( eom_ext_mode==1 && lnx_ESM_EN_LANE==0 )
	{
	
		eye_check_en = 0;
		lnx_EOM_READY_LANE = 0;
	    lnx_EOM_DFE_CALL_LANE = 0;
		eom_ext_mode = 0;
		
		//Puts("\r\n- End EOM");
		reg_EOM_EN_S_LANE = save_eom_en_s;
		reg_EOM_EN_D_LANE = save_eom_en_d;

		#ifdef 	_28G_X2
		eom_align_cal(); 
		#else
		eom_align_cal_01(); 
		#endif

		reg_PU_F1P_S_O_LANE = save_pu_f1p_s_o; 
		reg_PU_F1P_S_E_LANE = save_pu_f1p_s_e;
		reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = save_dfe_adapt_splr; 
		//reg_DFE_ADAPT_EVEN_EN_LANE = save_dfe_adapt_e_en; 
		//reg_DFE_ADAPT_ODD_EN_LANE = save_dfe_adapt_o_en; 
		reg_DFE_ADAPT_LPNUM_LANE_9_0_b0 = (uint8_t)(save_adapt_lpnum&0x0f);
		reg_DFE_ADAPT_LPNUM_LANE_9_0_b1 = ((uint8_t)(save_adapt_lpnum>>4)&0x3f);
		reg_DFE_EN_LANE = save_dfe_en;
		dfe_dis = save_dfe_dis;
		
		#ifndef SUPPORT_NEW_CDS
		dfe_load_f0();
		#else
		dfe_load_type(2);
		#endif

		PHY_STATUS = ST_NORMAL; 
		
		if(lnx_PHASE_ADAPT_ENABLE_LANE==0) 
			dfe_hardware_cont_run();
	}
#endif	
}

uint8_t sum_32(uint32_t * accumulator, uint32_t * cnt) EOM_BANK {
	*accumulator = *accumulator + *cnt;
	if (*accumulator < *cnt)    //overflow
		return 1;
	else
		return 0;
}
