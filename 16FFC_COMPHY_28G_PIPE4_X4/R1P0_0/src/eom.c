#include "common.h"

void Check_EOM_Stage_fmExt(void)
{
#ifdef SUPPORT_EOM 
	uint8_t	cnt, i;
	int16_t new_esm_ph;
	uint8_t	dec_ratio;
	
	new_esm_ph = 0;
    dec_ratio = reg_RX_SPEED_DIV_LANE_2_0&0x03;
	
    if(lnx_ESM_EN_LANE==1 && lnx_EOM_READY_LANE==0)
	{
		dfe_hardware_cont_stop();

		//reg_EOM_CLK_EN_LANE = 1;	//todo
		
		save_pu_f1p_s_o = reg_PU_F1P_S_O_LANE; 
		save_pu_f1p_s_e = reg_PU_F1P_S_E_LANE; 
		save_dfe_adapt_splr = reg_DFE_ADAPT_SPLR_EN_LANE_3_0; 
		save_dfe_adapt_e_en = reg_DFE_ADAPT_EVEN_EN_LANE;
		save_dfe_adapt_o_en = reg_DFE_ADAPT_ODD_EN_LANE;
		save_eom_en_s = reg_EOM_EN_S_LANE;
		save_eom_en_d = reg_EOM_EN_D_LANE;
		save_dfe_en = reg_DFE_EN_LANE;
		
		save_dfe_dis = dfe_dis;

		dfe_dis = 0;
		//reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = lnx_ESM_DFE_ADAPT_SPLR_EN_LANE_3_0;
		
		// -- select eye based on data rate
		if( dec_ratio == 0x3) {
            reg_PU_F1P_S_O_LANE = 1;
            reg_DFE_ADAPT_EVEN_EN_LANE = 0;
            reg_DFE_ADAPT_ODD_EN_LANE  = 1;
        }
		else if( dec_ratio == 0x2) {
            reg_PU_F1P_S_E_LANE = 1;
            reg_DFE_ADAPT_EVEN_EN_LANE = 1;
            reg_DFE_ADAPT_ODD_EN_LANE  = 0;
        }
		else if( dec_ratio == 0x1) {
            reg_DFE_ADAPT_EVEN_EN_LANE = 0;
            reg_DFE_ADAPT_ODD_EN_LANE  = 1;
        }
        else {
            reg_DFE_ADAPT_EVEN_EN_LANE = 1;
            reg_DFE_ADAPT_ODD_EN_LANE  = 1;
        }
		
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
		
		#ifdef USE_DMA_DFE
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
		
		eom_align_cal(); cal_eom_dpher = reg_EOM_DPHER_LANE_6_0;
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
		return;
	}

	if(lnx_ESM_EN_LANE==1 && lnx_EOM_READY_LANE==1 && lnx_EOM_DFE_CALL_LANE==1)
	{	
	    lnx_EOM_DFE_CALL_LANE = 0;
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
		
		check_eye_check_pass(lnx_ESM_VOLTAGE_LANE_5_0);
		
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

		reg_PU_F1P_S_O_LANE = save_pu_f1p_s_o; 
		reg_PU_F1P_S_E_LANE = save_pu_f1p_s_e;
		reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = save_dfe_adapt_splr; 
		reg_DFE_ADAPT_EVEN_EN_LANE = save_dfe_adapt_e_en; 
		reg_DFE_ADAPT_ODD_EN_LANE = save_dfe_adapt_o_en; 
		reg_DFE_EN_LANE = save_dfe_en;
		dfe_dis = save_dfe_dis;
		
		#ifdef USE_DMA_DFE
		dfe_load();
		#else
		reg_DFE_FEXT0_D_P_E_LANE_5_0 = dfe_sm.f0_d_p_e;
		reg_DFE_FEXT0_D_N_E_LANE_5_0 = dfe_sm.f0_d_n_e;
		reg_DFE_FEXT0_S_P_E_LANE_5_0 = dfe_sm.f0_s_p_e;
		reg_DFE_FEXT0_S_N_E_LANE_5_0 = dfe_sm.f0_s_n_e;
		reg_DFE_FEXT0_D_P_O_LANE_5_0 = dfe_sm.f0_d_p_o;
		reg_DFE_FEXT0_D_N_O_LANE_5_0 = dfe_sm.f0_d_n_o;
		reg_DFE_FEXT0_S_P_O_LANE_5_0 = dfe_sm.f0_s_p_o;
		reg_DFE_FEXT0_S_N_O_LANE_5_0 = dfe_sm.f0_s_n_o;
		DFE_FEN_EVEN_REG.BT.B0 = 0x0f;
		DFE_FEN_EVEN_REG.BT.B0 = 0x00;
		DFE_FEN_ODD_REG.BT.B0 = 0x0f;
		DFE_FEN_ODD_REG.BT.B0 = 0x00;
		#endif

		if(lnx_PHASE_ADAPT_ENABLE_LANE==0) 
			dfe_hardware_cont_run();
	}
#endif	
}

