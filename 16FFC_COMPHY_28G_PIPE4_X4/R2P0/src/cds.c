/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file dfe_adaptation.c
* \purpose dfe adaptation & cdr_dfe_scheme
* \History
*	1/12/2015 Heejeong Ryu		Initial, Separate CDS from dfe_adapt 
*/
#include "common.h"
#include "cds.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK1
#endif

#define _DEBUG 	_DBG_DFE

#define set_slicer_data_sampler_adapt_PCIe() 	reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0x0c
#define set_PCIe_fb_mode() 						data_slic_fb_mode = 1

/**
 * \module cdr_dfe_scheme 
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input:  
 *    Output: 
*/
void cdr_dfe_scheme(void) BANKING_CTRL {
	//uint8_t	left_eye_height, min_f0d, gm_bin;
	int8_t phase_offset_data;
	uint8_t dfe_adapt_lpnum, pol_lpnum;
	cdr_dfe_scheme_stage = IDLE_STATE;
	
	if((dfe_dis == 1 || cmx_SKIP_CDR_DFE_SCHEME==1 ) && reg_RX_INIT_DONE_LANE==1) {
		cds.eye_check_pass = 1;
		#ifdef 	SUPPORT_TX_TRAIN_IF_REMOTE_CONTROL_MAIN
		if(TX_REMOTE_CTRL_REQ) { 
			remote_ctrl();
		}	
		#endif		
		return;
	}	
	
	//left_eye_height = 0;
	phase_offset_data = 0;

	if((cds_tb&reset_bypass) == 0)	{	 //INITIALIZATION_STAGE:
		cdr_dfe_scheme_stage = INITIALIZATION_STAGE;

		//cdr_dfe_init(); //move to train init
		
		reg_SEL_MU_F_LANE = 0; reg_ANA_RX_SEL_MU_F_LANE = 0;
		//reset dfe/dtl
		reg_RESET_DTL_LANE = 1;	
		CKCON = 0x07 ; //MCU WAIT time the slowest
		reg_RESET_DFE_LANE = 1;
		CKCON = 0x00 ; //MCU WAIT time setting back to normal.
		reg_RESET_DTL_LANE = 0;	
		reg_RESET_DFE_LANE = 0;
		reg_ANA_REG_DFEE_RST_LANE = 1;
		reg_ANA_REG_DFEO_RST_LANE = 1;
		reg_ANA_REG_DFEE_RST_LANE = 0;
		reg_ANA_REG_DFEO_RST_LANE = 0;

		if(!do_rxinit)	
			dfe_load_reset();		
		sampler_load_reset();

		// DFE f1 and ofst adjustment
		f1_ofst_adjustment_en = 0;
		// sampler settling mode
		//fd4to30_charge_modeling_ = CONST_IDEAL_TYPE;
	    // dfe polarity control
	    //pol_hold_time = 2; //1; //2;			
		//pol_swch_time_7_0 = 16; pol_swch_time_9_8 = 0;		
		//pol_table_loop_num_1_0 = 2; pol_table_loop_num_9_2 = 0; //10 - > 1
		
		//pattern_protect_dis = 1;
		
		//eom_offset = 0;

		disable_all_tap_adapt();	

		if(ctrl_cdr_phase_on)
			phase_control_func_0(phase_offset_data, train.phase_offset_esm);			
	
		if(!do_rxinit)
			dfe_save();

	}

	if((cds_tb&coarse_dtl_bypass) == 0)	{ // CDR_COARSE_STATE:
		cdr_dfe_scheme_stage = CDR_COARSE_STATE;
		// CDR setting (mu_f and mu_p)
		//reg_SEL_MU_F_LANE = 0; reg_ANA_RX_SEL_MU_F_LANE = 0;
		//dtl_frequ_gain_ = 2;     
	    //dtl_phase_gain_ = 256;  		
		// DFE tap adaptation
		disable_all_tap_adapt();

		// DFE FSM setting
		reg_DFE_EVEN_ODD_SIM_ADAPT_LANE = 1;
		reg_DFE_ADAPT_EVEN_EN_LANE = 1;
		reg_DFE_ADAPT_ODD_EN_LANE = 1;			
		if(tx_status_pcie_mode) {
			//set_slicer_data_sampler_adapt_PCIe();	
			//set_PCIe_fb_mode();		
		}
		else {
			set_slicer_data_sampler_adapt(SLICER_SMPL_ONLY);
			set_mmse_fb_mode();
		}	
		//pol_hold_time = 2; //1; //2;			
		//pol_swch_time_7_0 = 63; pol_swch_time_9_8 = 0;		
		//pol_table_loop_num_1_0 = 1; pol_table_loop_num_9_2 = 0; // 128 10 - > 1	
		
		if(!do_rxinit)	{
			dfe_fsm_run_state(DFE_FSM_DTL_STATE); 			
		}	
		else {
			switch(gen_tx) {
			case 0: dfe_adapt_lpnum=0; break;
			case 1: dfe_adapt_lpnum=1; break;
			case 2: dfe_adapt_lpnum=3; break;
			case 3: dfe_adapt_lpnum=7; break;
			case 4: dfe_adapt_lpnum=15; break;								
			}
			dfe_fsm_run(dfe_adapt_lpnum,0);
		}
			
		reg_SEL_MU_F_LANE = 1; reg_ANA_RX_SEL_MU_F_LANE = 1;
	}	
	
   if(cds_tb&phase_move_with_dfe_en) { 
		cdr_dfe_scheme_stage = PHASE_MOVE_WITH_DFE_STATE;

		dfe_load();
		
		#if tag_DFE_ADAPT_F0A_EN
		if(cds_tb&dfe_adapt_f0a_en) {
			cds_f0a_dfe();
		}
		#endif
		
		while( phase_offset_data != train.phase_offset_data ) {		
			cds_coarse_dfe();
			
			disable_all_tap_adapt();
			
			if((abs(phase_offset_data-train.phase_offset_data)) < tag_OS_PH_ADJ_THRE) {
				phase_offset_data = train.phase_offset_data;
			}
			else phase_offset_data += tag_OS_PH_ADJ_THRE * (train.phase_offset_data>phase_offset_data?+1:-1);
			phase_control_func_0(phase_offset_data, train.phase_offset_esm);
		}
		
		dfe_save();
	}	

	if((cds_tb&reset_bypass)==0 && ctrl_cdr_phase_on)
	{
		phase_control_func_0(train.phase_offset_data, train.phase_offset_esm);
	}	

	if(cds_tb&dfe_adapt_en) 
	{
		dfe_load();

		#if tag_DFE_ADAPT_F0A_EN==1
		if(cds_tb&dfe_adapt_f0a_en) {
			cds_f0a_dfe();
		}
		#endif
		
		if(cds_tb&coarse_dfe_en) {
			cds_coarse_dfe();
		}

		if(cds_tb&fine_dfe_en) { // 
			cdr_dfe_scheme_stage = DFE_FINE_ADAPT_STATE;
		
			if(cds_tb&lock_dfe_on) disable_all_tap_adapt();
			else enable_all_tap_adapt();
			// DFE adaptation step size
			reg_DFE_COARSE_STEP_EN_LANE = 0; reg_DFE_FINE_STEP_EN_LANE = 1;
			//adapt_step_size = 32;
			reg_DFE_STEP_FINE_FFX_LANE_3_0 = 0x06; //2048*1/64
			reg_DFE_STEP_FINE_FX_LANE_3_0  = 0x06;
			reg_DFE_STEP_FINE_F0_LANE_3_0  = 0x06;
			
			if(tx_status_pcie_mode) {
				//set_slicer_data_sampler_adapt_PCIe();	
				//set_PCIe_fb_mode();		
			}
			else {
				set_slicer_data_sampler_adapt(BOTH_SMPL);
				set_mmse_fb_mode();
			}	
			/*data_slic_fb_mode = 0;
			f1p_f1n_fb_mode = 0;
			f0_fb_mode = 0;*/

			//pol_table_loop_num_1_0 = 1; pol_table_loop_num_9_2 = 0; // 1	
			
			if(!do_rxinit)
				dfe_fsm_run_state(DFE_FSM_DFE_FINE_STATE); 
			else {
				switch(gen_tx) {
				case 0: dfe_adapt_lpnum=0; break;
				case 1: dfe_adapt_lpnum=1; break;
				case 2: dfe_adapt_lpnum=3; break;
				case 3: dfe_adapt_lpnum=7; break;
				case 4: dfe_adapt_lpnum=15; break;								
				}
				dfe_fsm_run(dfe_adapt_lpnum,0);
			}
		}
	
		/* //comment the F0/F2/F3 accurate adaptation, need future investigation
		if(cds_tb&accu_dfe_en) { // DFE_ACCU_ADAPT_STATE:
			cdr_dfe_scheme_stage = DFE_ACCU_ADAPT_STATE;
			// DFE adaptation step size
			disable_all_tap_adapt();
			reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0x0d;
			f0b_en = 0;		
			f0d_en = 0;
			ofst_en = 0; 
			pol_table_loop_num_1_0 = 0; pol_table_loop_num_9_2 = 4; // pol_loop_num = 16
			reg_DFE_COARSE_STEP_EN_LANE = 0; reg_DFE_FINE_STEP_EN_LANE = 0;
			//adapt_step_size = 8;
			reg_DFE_STEP_ACCU_FFX_LANE_3_0 = 0x08; //2048*1/256
			reg_DFE_STEP_ACCU_FX_LANE_3_0  = 0x08; 
			reg_DFE_STEP_ACCU_F0_LANE_3_0  = 0x08;
			// DFE feedback setting
			data_slic_fb_mode = 0;
			f1p_f1n_fb_mode = 0;
			f0_fb_mode = 0;
					
			dfe_fsm_run();		
		}
		*/
	
		if(cds_tb&accu_dfe_en) { // DFE_ACCU_ADAPT_STATE:
			cdr_dfe_scheme_stage = DFE_ACCU_ADAPT_STATE;
			// DFE adaptation step size
			if(cds_tb&lock_dfe_on) disable_all_tap_adapt();
			else enable_all_tap_adapt();
			//pol_table_loop_num_1_0 = 0; pol_table_loop_num_9_2 = 2; //8

			reg_DFE_COARSE_STEP_EN_LANE = 0; reg_DFE_FINE_STEP_EN_LANE = 0;
			//adapt_step_size = 8;
			//reg_DFE_STEP_ACCU_FFX_LANE_3_0 = 0x08; //2048*1/256 //removed default=8
			//reg_DFE_STEP_ACCU_FX_LANE_3_0  = 0x08; 
			//reg_DFE_STEP_ACCU_F0_LANE_3_0  = 0x08;
			
			if(tx_status_pcie_mode) {
				//set_slicer_data_sampler_adapt_PCIe();	
				//set_PCIe_fb_mode();		
			}
			else {
				set_slicer_data_sampler_adapt(BOTH_SMPL);
				set_mmse_fb_mode();
			}	
			/*data_slic_fb_mode = 0;
			f1p_f1n_fb_mode = 0;
			f0_fb_mode = 0;*/
			//pol_table_loop_num_1_0 = 1; pol_table_loop_num_9_2 = 0; // 1

		    dfe_fsm_run_state(DFE_FSM_DFE_ACCU_STATE); 
			
			if(cdr_state == TRAIN_ON && PHY_STATUS!=ST_DTL) dfe_save();
			//else if(cdr_state == NORM_ON) 
			//{
			//	norm_f1 = (int8_t)(reg_DFE_F1_E_2C_LANE_7_0); 
			//	norm_f1 += (int8_t)(reg_DFE_F1_O_2C_LANE_7_0); 
			//	norm_f1 = norm_f1>>1;
			//}
		}	
	}
	
	if(cds_tb&ofst_adapt_en && dfe_dis==0)  { // OFST_ADAPT_STATE:
		cdr_dfe_scheme_stage = OFST_ADAPT_STATE;
		dfe_load();
		// DFE adaptation step size
		disable_all_tap_adapt();
		//reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0x0d;
		ofst_en = 1; 
		//pol_table_loop_num_1_0 = 2; pol_table_loop_num_9_2 = 0; // pol_loop_num = 2
		reg_DFE_COARSE_STEP_EN_LANE = 0; reg_DFE_FINE_STEP_EN_LANE = 0;
		//adapt_step_size = 8;
		//reg_DFE_STEP_ACCU_FFX_LANE_3_0 = 0x08; //2048*1/256 //removed default=8
		//reg_DFE_STEP_ACCU_FX_LANE_3_0  = 0x08; 
		//reg_DFE_STEP_ACCU_F0_LANE_3_0  = 0x08;
		if(tx_status_pcie_mode) {
			//set_slicer_data_sampler_adapt_PCIe();	
			//set_PCIe_fb_mode();		
		}
		else {
			set_slicer_data_sampler_adapt(BOTH_SMPL);
			set_mmse_fb_mode();
		}	
		// DFE feedback setting
		//set_mmse_fb_mode();
		/*data_slic_fb_mode = 0;
		f1p_f1n_fb_mode = 0;
		f0_fb_mode = 0;*/
				
		dfe_fsm_run_state(DFE_FSM_OFST_STATE); 
		
		sampler_train_save();
	}

	if( cds_tb&f0b_adapt_en )	{ 
		cdr_dfe_scheme_stage = F0B_FINE_MEASURE_STATE;
		dfe_load();
	   //-- F0B_FINE_MEASURE_STATE:
		reg_DFE_COARSE_STEP_EN_LANE = 0; reg_DFE_FINE_STEP_EN_LANE = 1;
		disable_all_tap_adapt();
		reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0x01;
		f0b_en = 1;		
		f0d_en = 0;
		ofst_en = 0; 
		// DFE adaptation step size
		//adapt_step_size = 32;
		//pol_table_loop_num_1_0 = 1; pol_table_loop_num_9_2 = 0; // pol_loop_num = 1
		reg_DFE_STEP_FINE_F0_LANE_3_0  = 0x06; //1/64
		//set_slicer_data_sampler_adapt(BOTH_SMPL);
		//set_mmse_fb_mode();
		
		dfe_fsm_run_state(DFE_FSM_F0B_STATE); 

//skip_dfe_adpt:		
		//-- F0B_ACCU_MEASURE_STATE:
		cdr_dfe_scheme_stage = F0B_ACCU_MEASURE_STATE;
		set_slicer_data_sampler_adapt(BOTH_SMPL);
		set_mmse_fb_mode();
		reg_DFE_COARSE_STEP_EN_LANE = 0; reg_DFE_FINE_STEP_EN_LANE = 0;
		// DFE adaptation step size
		//adapt_step_size = 8;
		//reg_DFE_STEP_ACCU_F0_LANE_3_0  = 0x08; //removed default=8
		dfe_fsm_run_state(DFE_FSM_F0B_STATE); 

		cds.f0_slicer = (reg_DFE_F0_S_P_E_2C_LANE_7_0 + reg_DFE_F0_S_N_E_2C_LANE_7_0 + reg_DFE_F0_S_P_O_2C_LANE_7_0 + reg_DFE_F0_S_N_O_2C_LANE_7_0) / 4;
		cds.f0_data = (reg_DFE_F0_D_P_E_2C_LANE_7_0 + reg_DFE_F0_D_N_E_2C_LANE_7_0 + reg_DFE_F0_D_P_O_2C_LANE_7_0 + reg_DFE_F0_D_N_O_2C_LANE_7_0) / 4; 
	}	

	if(cds_tb&f0d_adapt_en)	{ 
		cdr_dfe_scheme_stage = F0D_COARSE_MEASURE_STATE;	
		
		dfe_load();
				
		f0d_measure();
		cds.f0d_data_center = get_f0d_data();
		cds.f0d_slicer_center = get_f0d_slicer();
	#if _DBG_PHASE_ADAPT
		reg_MCU_DEBUGA_LANE_7_0 = reg_EOM_DPHER_LANE_6_0;
	#endif	
	#if _DBG_RXTRAIN
	    //Printf("\tf0d_d_pe/ne/po/no/center(%d,%d,%d,%d):%d", dfe_f0_f1p_d_eve, dfe_f0_f1n_d_eve, dfe_f0_f1p_d_odd, dfe_f0_f1n_d_odd, cds.f0d_data_center);
	    //Printf(" f0d_s(%d,%d,%d,%d):%d", dfe_f0_f1p_s_eve, dfe_f0_f1n_s_eve, dfe_f0_f1p_s_odd, dfe_f0_f1n_s_odd, cds.f0d_slicer_center);
	#endif	
		
		if(cds_tb&vh_eo_mode) 
		{			
			dfe_load();
			//train.phase_offset_esm = norm_eom_ph_os_l; 
			phase_control_func_0(train.phase_offset_data, norm_eom_ph_os_l);
			f0d_measure();
			//cds.f0d_data_left = get_f0d_data();
			cds.f0d_slicer_left = get_f0d_slicer();
	#if _DBG_PHASE_ADAPT
		reg_MCU_DEBUGB_LANE_7_0 = reg_EOM_DPHER_LANE_6_0;
	#endif	
			#if _DEBUG || _DBG_PHASE_ADAPT
			//DBG_Printf("\r\n l -- f0d_l=%d", cds.f0d_slicer_left);
			//DBG_Printf(" - ph(%d,%d)=(%d,%d)", train.phase_offset_data,norm_eom_ph_os_l,reg_ALIGN90_REF_LANE_5_0, reg_EOM_DPHER_LANE_6_0);
			//DBG_Printf(" eom_en_sde(%d,%d,%d)",EOM_EN_S,EOM_EN_D,EOM_EN_E);
			#endif
		
			dfe_load();
			//train.phase_offset_esm = norm_eom_ph_os_r; 
			phase_control_func_0(train.phase_offset_data, norm_eom_ph_os_r);
			f0d_measure();
			//cds.f0d_data_right = get_f0d_data();
			cds.f0d_slicer_right = get_f0d_slicer();
	#if _DBG_PHASE_ADAPT
		reg_MCU_DEBUGC_LANE_7_0 = reg_EOM_DPHER_LANE_6_0;
	#endif	
			#if _DEBUG || _DBG_PHASE_ADAPT
			//DBG_Printf("\r\n r -- f0d_r=%d", cds.f0d_slicer_right);
			//DBG_Printf(" - ph(%d,%d)=(%d,%d)", train.phase_offset_data,norm_eom_ph_os_r,reg_ALIGN90_REF_LANE_5_0, reg_EOM_DPHER_LANE_6_0);
			//DBG_Printf(" eom_en_sde(%d,%d,%d)",EOM_EN_S,EOM_EN_D,EOM_EN_E);
			#endif
		
			dfe_load();
			train.phase_offset_esm = norm_eom_ph_os_c; 
			phase_control_func_0(train.phase_offset_data, norm_eom_ph_os_c);
			#if _DEBUG || _DBG_PHASE_ADAPT
			//DBG_Printf("\r\n c -- f0d_c=%d", cds.f0d_slicer_center);
			//DBG_Printf(" - ph(%d,%d)=(%d,%d)", train.phase_offset_data,train.phase_offset_esm,reg_ALIGN90_REF_LANE_5_0, reg_EOM_DPHER_LANE_6_0);
			//DBG_Printf(" eom_en_sde(%d,%d,%d)",EOM_EN_S,EOM_EN_D,EOM_EN_E);
			#endif
		} 
		
	}
	
	//-- EYE_CHECK_STATE:
	if((cds_tb&eye_check_bypass)==0 && dfe_dis==0) {
		
		dfe_load();
		//reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0x0c; //[3]f1p_slic_samp_adapt_en = true;
		                                       //[2]f1n_slic_samp_adapt_en = true;
											   //[1]f1p_data_samp_adapt_en = true;
		                                       //[0]f1n_data_samp_adapt_en = true;
		
		check_eye_check_pass(3);

		eye_check_en = 0;

		dfe_load();
	}
	else cds.eye_check_pass = 1;
		
/*	
	    //--DFE_MAXEO_FINE_ADAPT_STATE:
		cdr_dfe_scheme_stage = DFE_MAXEO_FINE_ADAPT_STATE; 
		// DFE tap adaptation
		enable_all_tap_adapt();
		reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0x02;
		f0b_en = 0;
		// DFE f1 and ofst adjustment
		f1_ofst_adjustment_en = 1;
		// DFE adaptation algorithm 
		adapt_alg = MAXEO_ADAPT_MODE;
		// DFE adaptation step size
		reg_DFE_STEP_FINE_FX_LANE_3_0 = 6; //1/64 = 32
		reg_DFE_STEP_FINE_EO_DN_LANE_3_0 = 3; //1/8 = 256
		reg_DFE_STEP_FINE_EO_UP_LANE_3_0 = 6; //1/64  = 32
		dfe_fsm_run();		
		cdr_dfe_scheme_stage = DFE_MAXEO_ACCU_ADAPT_STATE; 
	
	    //-- DFE_MAXEO_ACCU_ADAPT_STATE:
		// DFE adaptation step size
		reg_DFE_STEP_ACCU_FX_LANE_3_0 = 8; //1/256 = 8
		reg_DFE_STEP_FINE_EO_DN_LANE_3_0 = 3; //1/8 = 256
		reg_DFE_STEP_FINE_EO_UP_LANE_3_0 = 6; //1/64  = 32
		dfe_fsm_run();		
		cdr_dfe_scheme_stage = EYEWIDTH_MEASURE_INIT_STATE; 
	
	
	    //-- EYEWIDTH_MEASURE_INIT_STATE:	
		// load f0d
		//load_min_f0d();
		// dfe tap adaptation
		disable_all_tap_adapt();
		reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0x01;
		f0d_en = 1;
		// DFE feedback setting
		f0_fb_mode = 1;
		// DFE adaptation step size
		reg_DFE_STEP_FINE_EO_DN_LANE_3_0 = 7; //1/128 = 16
		reg_DFE_STEP_FINE_EO_UP_LANE_3_0 = 1; //1/2  = 1024
		// DFE FSM setting
		reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0x0f; 
		cdr_dfe_scheme_stage = EYEWIDTH_LEFT_MEASURE_STATE;
		center_phase = cdr_align90;
		left_phase = cdr_align90 - 10;
		right_phase = cdr_align90 + 10;
		left_search_run_index = 0;
		right_search_run_index = 0;
			
	    //-- EYEWIDTH_LEFT_MEASURE_STATE:
		//left_eye_height = min( ); 
		if (left_search_run_index == 0) {
			left_eye_height = 0;
			// adjust left phase
			cdr_align90 = left_phase;
			// run DFE FSM 4 times
			dfe_fsm_run();
		}
		else if (left_search_run_index < 32 && (left_eye_height < 1 || left_eye_height > 4)) {
			// adjust left phase
			if (left_eye_height < 1)
				left_phase++;
			else if (left_eye_height > 4)
				left_phase -= 3;
			cdr_align90 = left_phase;
			// run DFE FSM 4 times
			dfe_fsm_run();
		}
		else {
			left_eye_width = center_phase - left_phase;
			cdr_dfe_scheme_stage = EYEWIDTH_RIGHT_MEASURE_STATE;  
		}
		left_search_run_index++;
   	
	    //-- EYEWIDTH_RIGHT_MEASURE_STATE:
		//right_eye_height = min(eve_dfe_->dfe_f0to30_dig_2c_[0], odd_dfe_->dfe_f0to30_dig_2c_[0]);
		if (right_search_run_index == 0) { 
			right_eye_height = 0;
			// adjust right phase
			cdr_align90 = right_phase;
			// run DFE FSM 4 times
			dfe_fsm_run();
		}
		else if (right_search_run_index < 32 && (right_eye_height < 1 || right_eye_height > 4)) {
			// adjust right phase
			if (right_eye_height < 1)
				right_phase--;
			else if (right_eye_height > 4)
				right_phase += 3;
			cdr_align90 = right_phase;
			// run DFE FSM 4 times
			dfe_fsm_run();
		}
		else {
			right_eye_width = right_phase - center_phase;
			effect_eye_width = min(left_eye_width, right_eye_width);			
			cdr_dfe_scheme_stage = is_accu_phase_adapt ? PHASE_ACCU_ADAPT_PER_EYEWIDTH_STATE : PHASE_FINE_ADAPT_PER_EYEWIDTH_STATE;  
		}
		right_search_run_index++;
	
	
	    //-- PHASE_FINE_ADAPT_PER_EYEWIDTH_STATE:
		phase_fine_adapt_run_index++;
		// adjust phase
		adapted_phase = (left_phase + right_phase)>>1;
		center_phase = adapted_phase;
		cdr_align90  = adapted_phase;
		// Measure left and right eye width
		left_search_run_index = 0;
		right_search_run_index = 0;
		if (phase_fine_adapt_run_index >= 1) { //2
			is_accu_phase_adapt = 1;
			cdr_dfe_scheme_stage = EYE_HEIGHT_MEASURE_STATE; 
		}
		else 
			cdr_dfe_scheme_stage = DFE_MAXEO_FINE_ADAPT_STATE;
		
	    // -- PHASE_ACCU_ADAPT_PER_EYEWIDTH_STATE:
		phase_accu_adapt_run_index++;
		// adapted phase
		adapted_phase +=  (right_eye_width - left_eye_width)>>4; 
		center_phase = (adapted_phase + adapted_phase + 1)>>2;
		cdr_align90 = center_phase;
		// Measure left and right eye width
		cdr_dfe_scheme_stage = DFE_MAXEO_FINE_ADAPT_STATE;
		left_search_run_index = 0;
		right_search_run_index = 0;
		//if (phase_accu_adapt_run_index >= 0) { //30
		//	cdr_dfe_scheme_stage = EYE_HEIGHT_MEASURE_STATE;  
		//}
		
	    //-- EYE_HEIGHT_MEASURE_STATE: 
		// COMM set f0d value
		//eye_check_k = 1;
		//eye_check_c = 0;
		//eye_check_set_f0d_value();
		// DFE tap adaptation
		disable_all_tap_adapt();
		eye_check_en = 1;
		// DFE feedback setting
		data_slic_fb_mode = 0;
		f1p_f1n_fb_mode = 0;
		f0_fb_mode = 0;
		// run DFE FSM 2 times
		dfe_fsm_run();
		// next cdr_dfe_stage
		cdr_dfe_scheme_stage = EYE_HEIGHT_RESULT_STATE;
		
	    //--  EYE_HEIGHT_RESULT_STATE: 
		//ec_valid_vote_num = valid_vote_counter + valid_vote_counter;
		//ec_error_vote_num = error_vote_counter + error_vote_counter;
		//ec_error_ratio = ec_error_vote_num/ec_valid_vote_num;
		// next cdr_dfe_stage
		cdr_dfe_scheme_stage = EYE_DIAGRAM_CAPTURE_STATE;
*/			
	    // -- EYE_DIAGRAM_CAPTURE_STATE:
		//capturing_eye_diagram_en = true;
		// DFE tap adaptation
		disable_all_tap_adapt();

		eye_check_en = 0;
		
    //Printf(" + end: %d %d %d %d \r\n", reg_DFE_F0_S_P_E_2C_LANE_7_0, reg_DFE_F0_S_N_E_2C_LANE_7_0, reg_DFE_F0_S_P_O_2C_LANE_7_0, reg_DFE_F0_S_N_O_2C_LANE_7_0); 
	
		//step by step debug
		if(lnx_DFE_DBG_STEP_MODE_LANE_7_0==1) {
			lnx_DFE_DBG_STEP_LANE_7_0 = 1; 		
			while(lnx_DFE_DBG_STEP_LANE_7_0==1);		
		}
		
		// during rpta, run continuous calibration to solve temp ramping issue. -- > not working!, why??
		//if(lnx_PHASE_ADAPT_ENABLE_LANE==1 && PHY_STATUS==ST_NORMAL) {
		//	Cal_Cont();
		//}

#if (_DEBUG & _DBG_RXTRAIN )	
//	if(lnx_RX_TRAIN_ONLY_DFE_LANE==1) {	
//		debug_print();
//	}
#endif
		
 	//#if (_DEBUG && _DBG_PHASE_ADAPT)
	//{
	//	Printf("\r\n -- cds.fx: %d %d %d %d %d %d %d %d %d, eo:%d, ep:%d", cds.f0a_slicer, cds.f0_slicer, cds.f1, cds.f2_slicer, cds.f3_slicer, cds.f4, cds.f5, cds.f6, cds.f7, cds.f0d_slicer_center, cds.eye_check_pass); 
	//    Printf("\r\n -- eom_en_sde(%d,%d,%d)",EOM_EN_S,EOM_EN_D,EOM_EN_E);
	//	Printf(" ph_dat:%d(%d,%d), ph_esm:%d(%d)", train.phase_offset_data, cdr_align90, (uint8_t)reg_EOM_DPHER_LANE_6_0, train.phase_offset_esm, reg_EOM_DPHER_LANE_6_0);
	//}
	//#endif
	
	
}

void cds_coarse_dfe(void) BANKING_CTRL {

	cdr_dfe_scheme_stage = DFE_COARSE_ADAPT_STATE;
	
	if(cds_tb&lock_dfe_on) disable_all_tap_adapt();
	else enable_all_tap_adapt();
	// DFE adaptation step size
	reg_DFE_COARSE_STEP_EN_LANE = 1; reg_DFE_FINE_STEP_EN_LANE = 0;
	//adapt_step_size = 32;
	reg_DFE_STEP_COARSE_FFX_LANE_3_0 = 0x04; //2048*1/16
	reg_DFE_STEP_COARSE_FX_LANE_3_0  = 0x04;
	reg_DFE_STEP_COARSE_F0_LANE_3_0  = 0x04;
	
	if(tx_status_pcie_mode) {
		//set_slicer_data_sampler_adapt_PCIe();	
		//set_PCIe_fb_mode();		
	}
	else {
		set_slicer_data_sampler_adapt(SLICER_SMPL_ONLY);
		set_mmse_fb_mode();
	}	
	///data_slic_fb_mode = 0;
	//f1p_f1n_fb_mode = 0;
	//f0fb_mode = 0;
	//pol_table_loop_num_1_0 = 1; pol_table_loop_num_9_2 = 0; // 128 10 - > 1
	
	dfe_fsm_run_state(DFE_FSM_DFE_CORASE_STATE); 
}

#if tag_DFE_ADAPT_F0A_EN
void cds_f0a_dfe(void) BANKING_CTRL {

	cdr_dfe_scheme_stage = DFE_ADAPT_F0A_STATE;
	// CDR setting (mu_f and mu_p)
	//dtl_frequ_gain_ = 1;    
	//dtl_phase_gain_ = 128; 
	disable_all_tap_adapt(); 

	reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0x01;
	//f0a_en = true;

	// DFE adaptation step size
	reg_DFE_STEP_COARSE_F0_LANE_3_0 = 0x4; //adapt_step_size = 128;
	
	set_slicer_data_sampler_adapt(SLICER_SMPL_ONLY);

	// DFE feedback setting
	set_mmse_fb_mode();
	/*f0_fb_mode = 0;
	f1p_f1n_fb_mode = 1;
	data_slic_fb_mode = 1;*/
	//pol_table_loop_num_1_0 = 0; pol_table_loop_num_9_2 = 2; //16 
	
	dfe_fsm_run_state(DFE_FSM_F0A_STATE); 
	
	//get_f0a_max();
	//if( train.f0a_max > 200)              
    //	goto skip_dfe_adpt; cdr_dfe_scheme_stage = F0B_ACCU_MEASURE_STATE; 
	//else
	//	cdr_dfe_scheme_stage = PHASE_MOVE_WITH_DFE_STATE;		
}
#endif

/**
 * \module  
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    DMA0 : move mem(sm) to dfe_fext 
 *    DMA1 : set dfe_fext=0
 *    DMA2 : move dfe_2c to mem
 *    DMA3 : move dfe_sm to dfe_fext  
*/

void dfe_load_reset(void) BANKING_CTRL {
	
// dfe_reset does clear.	
	reg_DFE_FEXT0_D_P_E_LANE_5_0 = 32;
	reg_DFE_FEXT0_D_N_E_LANE_5_0 = 32;
	reg_DFE_FEXT0_S_P_E_LANE_5_0 = 32;
	reg_DFE_FEXT0_S_N_E_LANE_5_0 = 32;
	reg_DFE_FEXT0_D_P_O_LANE_5_0 = 32;
	reg_DFE_FEXT0_D_N_O_LANE_5_0 = 32;
	reg_DFE_FEXT0_S_P_O_LANE_5_0 = 32;
	reg_DFE_FEXT0_S_N_O_LANE_5_0 = 32;	
	//DFE_FEN_EVEN_REG.VAL = 0xffffffff;
	//DFE_FEN_ODD_REG.VAL = 0xffffffff;
	//DFE_FEN_EVEN_REG.VAL = 0;
	//DFE_FEN_ODD_REG.VAL = 0;
	DFE_FEN_EVEN_REG.BT.B0 = 0x0f;
	DFE_FEN_EVEN_REG.BT.B0 = 0;
	DFE_FEN_ODD_REG.BT.B0 = 0x0f;
	DFE_FEN_ODD_REG.BT.B0 = 0;
	
}

// slpr reset with calibration value
void sampler_load_reset(void) BANKING_CTRL {
	
	uint8_t i, ofst_sm, ofst_sp, ofst_n;
	int8_t ofst;	
	
	if( dfe_dis == 1 ) return;
	
	SAMPLER_CAL_SAVE = (uint8_t*)&CAL_SAVE_DATA4_LANE; 
	for(i=0; i<8; i++, SAMPLER_CAL_SAVE++) {
		ofst = (int8_t)*SAMPLER_CAL_SAVE;			
		if(ofst>0) {
			ofst_sm = ofst;
			ofst_n = ofst>>1;
			ofst_sp = ofst_sm - ofst_n;
		}	
		else {
			ofst = -ofst;
			ofst_sm = ofst + 0x40;
			ofst_n = ofst>>1;
			ofst_sp = (ofst - ofst_n)|0x20;			
		}	

		switch(i) {			
		case OFST_F1P_D_E: DFE_DC_EVEN_REG8.BT.B0 = ofst_sm|0x80; reg_DFE_FENDC_D_P_E_LANE = 0; 
						   ANA_DFEE_REG_1E.BT.B0 = 	ofst_sp; ANA_DFEE_REG_1F.BT.B0 = ofst_n;	break; //Keep sequence! hardware has bug
		case OFST_F1N_D_E: DFE_DC_EVEN_REG8.BT.B1 = ofst_sm|0x80; reg_DFE_FENDC_D_N_E_LANE = 0; 
						   ANA_DFEE_REG_20.BT.B0 = 	ofst_sp; ANA_DFEE_REG_21.BT.B0 = ofst_n;	break;
		case OFST_F1P_D_O: DFE_DC_ODD_REG8.BT.B0 = ofst_sm|0x80; reg_DFE_FENDC_D_P_O_LANE = 0; 
						   ANA_DFEO_REG_1E.BT.B0 = 	ofst_sp; ANA_DFEO_REG_1F.BT.B0 = ofst_n;	break;
		case OFST_F1N_D_O: DFE_DC_ODD_REG8.BT.B1 = ofst_sm|0x80; reg_DFE_FENDC_D_N_O_LANE = 0; 
						   ANA_DFEO_REG_20.BT.B0 = 	ofst_sp; ANA_DFEO_REG_21.BT.B0 = ofst_n;	break;
		case OFST_F1P_S_E: DFE_DC_EVEN_REG8.BT.B2 = ofst_sm|0x80; reg_DFE_FENDC_S_P_E_LANE = 0; 
						   ANA_DFEE_REG_22.BT.B0 = 	ofst_sp; ANA_DFEE_REG_23.BT.B0 = ofst_n;	break;
		case OFST_F1N_S_E: DFE_DC_EVEN_REG8.BT.B3 = ofst_sm|0x80; reg_DFE_FENDC_S_N_E_LANE = 0; 
						   ANA_DFEE_REG_24.BT.B0 = 	ofst_sp; ANA_DFEE_REG_25.BT.B0 = ofst_n;	break;
		case OFST_F1P_S_O: DFE_DC_ODD_REG8.BT.B2 = ofst_sm|0x80; reg_DFE_FENDC_S_P_O_LANE = 0; 
						   ANA_DFEO_REG_22.BT.B0 = 	ofst_sp; ANA_DFEO_REG_23.BT.B0 = ofst_n;	break;
		case OFST_F1N_S_O: DFE_DC_ODD_REG8.BT.B3 = ofst_sm|0x80; reg_DFE_FENDC_S_N_O_LANE = 0; 
						   ANA_DFEO_REG_24.BT.B0 = 	ofst_sp; ANA_DFEO_REG_25.BT.B0 = ofst_n;	break;
		case OFST_EDGE_E:  ANA_DFEE_REG_26.BT.B0 = 	ofst_sp; ANA_DFEE_REG_27.BT.B0 = ofst_n;	break;
		case OFST_EDGE_O:  ANA_DFEO_REG_26.BT.B0 = 	ofst_sp; ANA_DFEO_REG_27.BT.B0 = ofst_n;	break;					   
						   
		}	
	}

}

void sampler_train_save(void) BANKING_CTRL {
	int8_t i;
	int16_t sum;
	
	lnx_TRAIN_OFST_F1P_D_E_LANE_7_0	= reg_DFE_DC_D_P_E_2C_LANE_7_0;
	lnx_TRAIN_OFST_F1N_D_E_LANE_7_0	= reg_DFE_DC_D_N_E_2C_LANE_7_0;
	lnx_TRAIN_OFST_F1P_D_O_LANE_7_0	= reg_DFE_DC_D_P_O_2C_LANE_7_0;
	lnx_TRAIN_OFST_F1N_D_O_LANE_7_0	= reg_DFE_DC_D_N_O_2C_LANE_7_0;
	lnx_TRAIN_OFST_F1P_S_E_LANE_7_0 = reg_DFE_DC_S_P_E_2C_LANE_7_0;
	lnx_TRAIN_OFST_F1N_S_E_LANE_7_0 = reg_DFE_DC_S_N_E_2C_LANE_7_0;
	lnx_TRAIN_OFST_F1P_S_O_LANE_7_0 = reg_DFE_DC_S_P_O_2C_LANE_7_0;
	lnx_TRAIN_OFST_F1N_S_O_LANE_7_0 = reg_DFE_DC_S_N_O_2C_LANE_7_0;
	
	for(i=OFST_EDGE_E; i<10; i++) {
		sampler_sel(i);
		*SAMPLER_TRAIN_SAVE = get_sampler();
	}
	
	if(do_phase_adapt) 
	{
		sum = (int8_t)lnx_TRAIN_OFST_F1P_D_E_LANE_7_0;
		sum -= (int8_t)lnx_TRAIN_OFST_F1N_D_E_LANE_7_0;
		sum += (int8_t)lnx_TRAIN_OFST_F1P_D_O_LANE_7_0;
		sum -= (int8_t)lnx_TRAIN_OFST_F1N_D_O_LANE_7_0;		
		cds.ofst_data = (int8_t)sum;
		
		sum = (int8_t)lnx_TRAIN_OFST_F1P_S_E_LANE_7_0;
		sum -= (int8_t)lnx_TRAIN_OFST_F1N_S_E_LANE_7_0;
		sum += (int8_t)lnx_TRAIN_OFST_F1P_S_O_LANE_7_0;
		sum -= (int8_t)lnx_TRAIN_OFST_F1N_S_O_LANE_7_0;		
		cds.ofst_slicer = (int8_t)sum;
		
		if (cdr_state == NORM_ON)  {
			norm_ofst = cds.ofst_slicer;	
		}
		#if _DBG_PHASE_ADAPT
		//Printf("\r\n dfe_dc- (d): %d %d %d %d, (s): %d %d %d %d ", 
		//(int8_t)reg_DFE_DC_D_P_E_2C_LANE_7_0, (int8_t)reg_DFE_DC_D_N_E_2C_LANE_7_0,	(int8_t)reg_DFE_DC_D_P_O_2C_LANE_7_0, (int8_t)reg_DFE_DC_D_N_O_2C_LANE_7_0,
		//(int8_t)reg_DFE_DC_S_P_E_2C_LANE_7_0, (int8_t)reg_DFE_DC_S_N_E_2C_LANE_7_0, (int8_t)reg_DFE_DC_S_P_O_2C_LANE_7_0, (int8_t)reg_DFE_DC_S_N_O_2C_LANE_7_0 );	
		//Printf(" cds.ofst_data: %d  cds.ofst_slicer: %d, cdr_state=%d ", cds.ofst_data, cds.ofst_slicer, cdr_state);			
		//Printf(" ** f1 %d %d", (int8_t)reg_DFE_F1_E_2C_LANE_7_0, (int8_t)reg_DFE_F1_O_2C_LANE_7_0);				
		#endif
	}
	
	
}

void dfe_load(void) BANKING_CTRL {

	#if 1
	memcpy((uint8_t *)&DFE_FEXT_EVEN_REG0, (uint8_t *)&dfe_sm, sizeof(Status_dfe_sm_t));
	#else	
	reg_DFE_FEXT0_D_P_E_LANE_5_0      = dfe_sm.f0_d_p_e; 
	reg_DFE_FEXT0_D_N_E_LANE_5_0      = dfe_sm.f0_d_n_e;
	reg_DFE_FEXT0_D_P_O_LANE_5_0      = dfe_sm.f0_d_p_o; 
	reg_DFE_FEXT0_D_N_O_LANE_5_0      = dfe_sm.f0_d_n_o; 
	reg_DFE_FEXT2_D_P_E_LANE_5_0      = dfe_sm.f2_d_p_e; 
	reg_DFE_FEXT2_D_N_E_LANE_5_0      = dfe_sm.f2_d_n_e; 
	reg_DFE_FEXT3_D_P_E_LANE_4_0      = dfe_sm.f3_d_p_e; 
	reg_DFE_FEXT3_D_N_E_LANE_4_0      = dfe_sm.f3_d_n_e; 
	reg_DFE_FEXT0_S_P_E_LANE_5_0      = dfe_sm.f0_s_p_e; 
	reg_DFE_FEXT0_S_N_E_LANE_5_0      = dfe_sm.f0_s_n_e;
	reg_DFE_FEXT0_S_P_O_LANE_5_0      = dfe_sm.f0_s_p_o; 
	reg_DFE_FEXT0_S_N_O_LANE_5_0      = dfe_sm.f0_s_n_o; 
	reg_DFE_FEXT2_S_P_E_LANE_5_0      = dfe_sm.f2_s_p_e; 
	reg_DFE_FEXT2_S_N_E_LANE_5_0      = dfe_sm.f2_s_n_e; 
	reg_DFE_FEXT3_S_P_E_LANE_4_0      = dfe_sm.f3_s_p_e; 
	reg_DFE_FEXT3_S_N_E_LANE_4_0      = dfe_sm.f3_s_n_e; 	
	reg_DFE_FEXT1_E_LANE_5_0          = dfe_sm.f1_e;     
	reg_DFE_FEXT4_E_LANE_5_0          = dfe_sm.f4_e;     
	reg_DFE_FEXT5_E_LANE_5_0          = dfe_sm.f5_e;		
	reg_DFE_FEXT6_E_LANE_5_0          = dfe_sm.f6_e;     
	reg_DFE_FEXT7_E_LANE_4_0          = dfe_sm.f7_e;     
	reg_DFE_FEXT2_D_P_O_LANE_5_0      = dfe_sm.f2_s_p_o; 
	reg_DFE_FEXT2_D_N_O_LANE_5_0      = dfe_sm.f2_s_n_o; 
	reg_DFE_FEXT3_D_P_O_LANE_4_0      = dfe_sm.f3_s_p_o; 
	reg_DFE_FEXT3_D_N_O_LANE_4_0      = dfe_sm.f3_s_n_o;
	reg_DFE_FEXT2_S_P_O_LANE_5_0      = dfe_sm.f2_s_p_o; 
	reg_DFE_FEXT2_S_N_O_LANE_5_0      = dfe_sm.f2_s_n_o; 
	reg_DFE_FEXT3_S_P_O_LANE_4_0      = dfe_sm.f3_s_p_o; 
	reg_DFE_FEXT3_S_N_O_LANE_4_0      = dfe_sm.f3_s_n_o;
	reg_DFE_FEXT1_O_LANE_5_0          = dfe_sm.f1_o;     
	reg_DFE_FEXT4_O_LANE_5_0          = dfe_sm.f4_o;     
	reg_DFE_FEXT5_O_LANE_5_0          = dfe_sm.f5_o;		
	reg_DFE_FEXT6_O_LANE_5_0          = dfe_sm.f6_o;     
	reg_DFE_FEXT7_O_LANE_4_0          = dfe_sm.f7_o;     
	#endif

	DFE_FEN_EVEN_REG.VAL = 0xffffffff;
	DFE_FEN_ODD_REG.VAL = 0xffffffff;
	DFE_FEN_EVEN_REG.VAL = 0;
	DFE_FEN_ODD_REG.VAL = 0;

}

void dfe_save(void) BANKING_CTRL {

	#if 1
	memcpy((uint8_t *)&dfe_sm, (uint8_t *)&DFE_READ_EVEN_SM_REG0, sizeof(Status_dfe_sm_t));
	#else
	dfe_sm.f0_s_p_e = reg_DFE_F0_S_P_E_SM_LANE_5_0;
	dfe_sm.f0_s_n_e = reg_DFE_F0_S_N_E_SM_LANE_5_0;
	dfe_sm.f0_s_p_o = reg_DFE_F0_S_P_O_SM_LANE_5_0;
	dfe_sm.f0_s_n_o = reg_DFE_F0_S_N_O_SM_LANE_5_0;
	dfe_sm.f2_s_p_e = reg_DFE_F2_S_P_E_SM_LANE_5_0;
	dfe_sm.f2_s_n_e = reg_DFE_F2_S_N_E_SM_LANE_5_0;
	dfe_sm.f3_s_p_e = reg_DFE_F3_S_P_E_SM_LANE_4_0;
	dfe_sm.f3_s_n_e = reg_DFE_F3_S_N_E_SM_LANE_4_0;
	dfe_sm.f0_d_p_e = reg_DFE_F0_D_P_E_SM_LANE_5_0;
	dfe_sm.f0_d_n_e = reg_DFE_F0_D_N_E_SM_LANE_5_0;
	dfe_sm.f0_d_p_o = reg_DFE_F0_D_P_O_SM_LANE_5_0;
	dfe_sm.f0_d_n_o = reg_DFE_F0_D_N_O_SM_LANE_5_0;
	dfe_sm.f2_d_p_e = reg_DFE_F2_D_P_E_SM_LANE_5_0;
	dfe_sm.f2_d_n_e = reg_DFE_F2_D_N_E_SM_LANE_5_0;
	dfe_sm.f3_d_p_e = reg_DFE_F3_D_P_E_SM_LANE_4_0;
	dfe_sm.f3_d_n_e = reg_DFE_F3_D_N_E_SM_LANE_4_0;	
	dfe_sm.f1_e     = reg_DFE_F1_E_SM_LANE_5_0; 
	dfe_sm.f4_e     = reg_DFE_F4_E_SM_LANE_5_0;
	dfe_sm.f5_e		= reg_DFE_F5_E_SM_LANE_5_0;
	dfe_sm.f6_e     = reg_DFE_F6_E_SM_LANE_5_0;
	dfe_sm.f7_e     = reg_DFE_F7_E_SM_LANE_4_0;
	dfe_sm.f2_s_p_o = reg_DFE_F2_S_P_O_SM_LANE_5_0;
	dfe_sm.f2_s_n_o = reg_DFE_F2_S_N_O_SM_LANE_5_0;
	dfe_sm.f3_s_p_o = reg_DFE_F3_S_P_O_SM_LANE_4_0;
	dfe_sm.f3_s_n_o = reg_DFE_F3_S_N_O_SM_LANE_4_0;
	dfe_sm.f2_d_p_o = reg_DFE_F2_D_P_O_SM_LANE_5_0;
	dfe_sm.f2_d_n_o = reg_DFE_F2_D_N_O_SM_LANE_5_0;
	dfe_sm.f3_d_p_o = reg_DFE_F3_D_P_O_SM_LANE_4_0;
	dfe_sm.f3_d_n_o = reg_DFE_F3_D_N_O_SM_LANE_4_0;
	dfe_sm.f1_o     = reg_DFE_F1_O_SM_LANE_5_0; 
	dfe_sm.f4_o     = reg_DFE_F4_O_SM_LANE_5_0;
	dfe_sm.f5_o		= reg_DFE_F5_O_SM_LANE_5_0;
	dfe_sm.f6_o     = reg_DFE_F6_O_SM_LANE_5_0;
	dfe_sm.f7_o     = reg_DFE_F7_O_SM_LANE_4_0;
	#endif
	
	#if _DEBUG
    //Printf(" +save dfe_sm_f0: %d %d %d %d \r\n", reg_DFE_F0_S_P_E_SM_LANE_5_0, reg_DFE_F0_S_N_E_SM_LANE_5_0,  reg_DFE_F0_S_P_O_SM_LANE_5_0, reg_DFE_F0_S_N_O_SM_LANE_5_0); 
    //Printf(" +save dfe_sm_m : %d %d %d %d \r\n", dfe_sm.f0_s_p_e, dfe_sm.f0_s_n_e,  dfe_sm.f0_s_p_o, dfe_sm.f0_s_n_o); 
	#endif  	  
	
	#if 1
	memcpy((uint8_t *)&dfe_2c, (uint8_t *)&DFE_READ_EVEN_2C_REG0, sizeof(Status_dfe_2c_t));
	#else
	dfe_2c.f0_s_p_e = reg_DFE_F0_S_P_E_2C_LANE_7_0;
	dfe_2c.f0_s_n_e = reg_DFE_F0_S_N_E_2C_LANE_7_0;
	dfe_2c.f0_s_p_o = reg_DFE_F0_S_P_O_2C_LANE_7_0;
	dfe_2c.f0_s_n_o = reg_DFE_F0_S_N_O_2C_LANE_7_0;
	dfe_2c.f2_s_p_e = reg_DFE_F2_S_P_E_2C_LANE_7_0;
	dfe_2c.f2_s_n_e = reg_DFE_F2_S_N_E_2C_LANE_7_0;
	dfe_2c.f3_s_p_e = reg_DFE_F3_S_P_E_2C_LANE_7_0;
	dfe_2c.f3_s_n_e = reg_DFE_F3_S_N_E_2C_LANE_7_0;
	dfe_2c.f0_d_p_e = reg_DFE_F0_D_P_E_2C_LANE_7_0;
	dfe_2c.f0_d_n_e = reg_DFE_F0_D_N_E_2C_LANE_7_0;
	dfe_2c.f0_d_p_o = reg_DFE_F0_D_P_O_2C_LANE_7_0;
	dfe_2c.f0_d_n_o = reg_DFE_F0_D_N_O_2C_LANE_7_0;
	dfe_2c.f2_d_p_e = reg_DFE_F2_D_P_E_2C_LANE_7_0;
	dfe_2c.f2_d_n_e = reg_DFE_F2_D_N_E_2C_LANE_7_0;
	dfe_2c.f3_d_p_e = reg_DFE_F3_D_P_E_2C_LANE_7_0;
	dfe_2c.f3_d_n_e = reg_DFE_F3_D_N_E_2C_LANE_7_0;
	dfe_2c.f1_e     = reg_DFE_F1_E_2C_LANE_7_0; 
	dfe_2c.f4_e     = reg_DFE_F4_E_2C_LANE_7_0;
	dfe_2c.f5_e		= reg_DFE_F5_E_2C_LANE_7_0;
	dfe_2c.f6_e     = reg_DFE_F6_E_2C_LANE_7_0;
	dfe_2c.f7_e     = reg_DFE_F7_E_2C_LANE_7_0;
	dfe_2c.f2_s_p_o = reg_DFE_F2_S_P_O_2C_LANE_7_0;
	dfe_2c.f2_s_n_o = reg_DFE_F2_S_N_O_2C_LANE_7_0;
	dfe_2c.f3_s_p_o = reg_DFE_F3_S_P_O_2C_LANE_7_0;
	dfe_2c.f3_s_n_o = reg_DFE_F3_S_N_O_2C_LANE_7_0;
	dfe_2c.f2_d_p_o = reg_DFE_F2_D_P_O_2C_LANE_7_0;
	dfe_2c.f2_d_n_o = reg_DFE_F2_D_N_O_2C_LANE_7_0;
	dfe_2c.f3_d_p_o = reg_DFE_F3_D_P_O_2C_LANE_7_0;
	dfe_2c.f3_d_n_o = reg_DFE_F3_D_N_O_2C_LANE_7_0;
	dfe_2c.f1_o     = reg_DFE_F1_O_2C_LANE_7_0; 
	dfe_2c.f4_o     = reg_DFE_F4_O_2C_LANE_7_0;
	dfe_2c.f5_o		= reg_DFE_F5_O_2C_LANE_7_0;
	dfe_2c.f6_o     = reg_DFE_F6_O_2C_LANE_7_0;
	dfe_2c.f7_o     = reg_DFE_F7_O_2C_LANE_7_0;
	#endif
	
	cds.f0a_slicer = (reg_DFE_F0_S_P_E_2C_LANE_7_0 + reg_DFE_F0_S_N_E_2C_LANE_7_0 + reg_DFE_F0_S_P_O_2C_LANE_7_0 + reg_DFE_F0_S_N_O_2C_LANE_7_0) >> 2;
	cds.f0a_data = (reg_DFE_F0_D_P_E_2C_LANE_7_0 + reg_DFE_F0_D_N_E_2C_LANE_7_0 + reg_DFE_F0_D_P_O_2C_LANE_7_0 + reg_DFE_F0_D_N_O_2C_LANE_7_0) >> 2; 
	cds.f1 = (dfe_2c.f1_e + dfe_2c.f1_o ) >> 1;
	cds.f2_data = (dfe_2c.f2_d_p_e + dfe_2c.f2_d_n_e + dfe_2c.f2_d_p_o + dfe_2c.f2_d_n_o ) >> 2; 
	cds.f2_slicer = (dfe_2c.f2_s_p_e + dfe_2c.f2_s_n_e + dfe_2c.f2_s_p_o + dfe_2c.f2_s_n_o ) >> 2; 
	cds.f3_data = (dfe_2c.f3_d_p_e + dfe_2c.f3_d_n_e + dfe_2c.f3_d_p_o + dfe_2c.f3_d_n_o ) >> 2; 
	cds.f3_slicer = (dfe_2c.f3_s_p_e + dfe_2c.f3_s_n_e + dfe_2c.f3_s_p_o + dfe_2c.f3_s_n_o ) >> 2; 
	cds.f4 = (dfe_2c.f4_e + dfe_2c.f4_o) >> 1;
	cds.f5 = (dfe_2c.f5_e + dfe_2c.f5_o) >> 1;
	cds.f6 = (dfe_2c.f6_e + dfe_2c.f6_o) >> 1;
	cds.f7 = (dfe_2c.f7_e + dfe_2c.f7_o) >> 1;
	
	get_f0a_max();	
	
	//sampler_train_save();
}

__code uint8_t dfe_timer_a_tb[2][9] = { //dfe_adapt_lp_num
{ 1, 1, 1, 4, 2, 2, 1, 1, 4, 0 },  //pcie
{ 1, 16, 16, 16, 16, 16, 16, 16, 16, 0 },
};

__code uint8_t dfe_timer_b_tb[2][9] = { //pol_tb_lp_num
{ 1, 1, 1, 1, 1, 1, 1, 1, 2, 0 },  //pcie
{ 1, 1, 8, 1, 1, 1, 2, 1, 2, 0 },
};

void dfe_fsm_run_state(uint8_t stage) BANKING_CTRL {
	//uint16_t loop_num;
	uint8_t adapt_num, pol_num;
	
	if( lnx_DFE_CORE_BYPASS_LANE || dfe_dis == 1 ) return;
	
	if(tx_status_pcie_mode) {
		adapt_num = dfe_timer_a_tb[0][stage];
		pol_num = dfe_timer_b_tb[0][stage];
	}	
	else { 
		#if tag_dfe_test_on==0
		adapt_num = dfe_timer_a_tb[1][stage];
		pol_num = dfe_timer_b_tb[1][stage];
		#else 
		switch(stage) {
		case DFE_FSM_RESET_STATE:
		adapt_num = 1; pol_num = 1; break;
		case DFE_FSM_DTL_STATE:
		adapt_num = tag_dfe_adapt_lp_num_dtl; pol_num = tag_pol_tb_lp_num_dtl; break;
		case DFE_FSM_F0A_STATE:   
		adapt_num = tag_dfe_adapt_lp_num_f0a; pol_num = tag_pol_tb_lp_num_f0a; break;
		case DFE_FSM_DFE_CORASE_STATE:
		adapt_num = tag_dfe_adapt_lp_num_corase; pol_num = tag_pol_tb_lp_num_corase; break;
		case DFE_FSM_DFE_FINE_STATE: 
		adapt_num = tag_dfe_adapt_lp_num_fine; pol_num = tag_pol_tb_lp_num_fine; break;
		case DFE_FSM_DFE_ACCU_STATE:   
		adapt_num = tag_dfe_adapt_lp_num_accu; pol_num = tag_pol_tb_lp_num_accu; break;
		case DFE_FSM_OFST_STATE:   
		adapt_num = tag_dfe_adapt_lp_num_ofst; pol_num = tag_pol_tb_lp_num_ofst; break;
		case DFE_FSM_F0B_STATE:   
		adapt_num = tag_dfe_adapt_lp_num_f0b; pol_num = tag_pol_tb_lp_num_f0b; break;
		case DFE_FSM_F0D_STATE:
		adapt_num = tag_dfe_adapt_lp_num_f0d; pol_num = tag_pol_tb_lp_num_f0d; break;	
		case DFE_FSM_FASTACQ_STATE:
		adapt_num = 0; pol_num = 0; break;			
		}
		#endif
	}
		
	dfe_fsm_run( adapt_num, pol_num );

}

void dfe_fsm_run(uint8_t adapt_num, uint8_t pol_num) BANKING_CTRL {
	//uint16_t loop_num;
	if( lnx_DFE_CORE_BYPASS_LANE || dfe_dis == 1 ) return;

	if(lnx_FAST_DFE_TIMER_EN_LANE) {
		adapt_num = 0; pol_num = 0;
	}
		
		//loop_num = lnx_DFE_ADAPT_LP_NUM_LOAD1_LANE_15_0; 
		dfe_adapt_lpnum_3_0 = (uint8_t)(adapt_num&0x0f); //16
		dfe_adapt_lpnum_9_4 = ((uint8_t)(adapt_num>>4)&0x3f);			

		pol_table_loop_num_1_0 = (uint8_t)(pol_num&0x03); //16 
		pol_table_loop_num_9_2 = (uint8_t)((pol_num>>2)&0x3f); //16

		reg_DFE_START_LANE = 0;
		reg_DFE_START_LANE = 1;
		short_delay(); //delay(Tus);
		while(!reg_DFE_DONE_LANE);
		reg_DFE_START_LANE = 0;
}


void disable_all_tap_adapt(void) BANKING_CTRL {
	
	reg_DFE_UPDATE_EN_LANE_15_0 = 0;
	reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;
	f0b_en = 0;		
	f0d_en = 0;
	ofst_en = 0; 
} 

void enable_all_tap_adapt(void) BANKING_CTRL {
	
	if( reg_DFE_FULL_RATE_MODE_LANE) {
		reg_DFE_UPDATE_EN_LANE_15_0 = 0x5555;
		reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;	
	} else {
		reg_DFE_UPDATE_EN_LANE_15_0 = 0xffff;
		reg_DFE_UPDATE_F_EN_LANE_5_0 = 0x3f;
	}	
	f0b_en = 0;		
	f0d_en = 0;
	ofst_en = 0; 

} 

void cdr_dfe_init(void) BANKING_CTRL {

	// dfe init
	//reg_DFE_EN_LANE = 1;  reg_DFE_DIS_LANE = 0;
	reg_DFE_ADAPT_ODD_EN_LANE = 1; //??
	reg_DFE_ADAPT_EVEN_EN_LANE = 1; //??
	
	f1_adjust_thresh_1 = 4; // F1_ADJUST_THRESH_1 = 0,2,4,…,14 (static register)
	f1_adjust_thresh_2 = 2; // F1_ADJUST_THRESH_2 = 0,2,4,…,30 (static register)
	f1_ofst_adjustment_en = 0; //1
	
	//disable_all_tap_adapt();
	
	//todo
	/*dfe_f0_res_sel     = 0;	*/		
	//dfe_f1_res_sel     = 3;		//todo	
	//dfe_f234_res_sel   = 1;	 	
	//dfe_f567_res_sel   = 1;		
	//dfe_f8to15_res_sel = 1;		
	//dfe_ffloat_res_sel = 1;		
	//dfe_ofst_res_sel   = 3;		
	dfe_f0_en	  = 1;
	dfe_f1to3_en  = 1;
	dfe_f4to7_en  = 1;
	dfe_f8to15_en = 1;
	dfe_ffloat_en = 1;
	
	//dfe_floating_tap_sel = 1;	//--> temp, move to user setting	 

	adapt_alg = MMSE_ADAPT_MODE;
	
	data_slicer_path_switch_eve = 0;
    data_slicer_path_switch_odd = 0;
	
	f1p_f1n_fb_mode = 0;
	f0_fb_mode = 0;
	if(tx_status_pcie_mode) {
		set_slicer_data_sampler_adapt_PCIe();	
		set_PCIe_fb_mode();		
	}

	//Tianchen - should not be touch by fw. 2/28/2017
	//analog_tap_reflesh_eve = 1;
	//analog_tap_reflesh_odd = 1;
	
	//pattern_protect_dis = 1; 

    // ----- 	
	//center_phase = cdr_align90;
	//left_phase = cdr_align90;
	//right_phase = cdr_align90; 
	//left_eye_width = 0;
	//right_eye_width = 0;
	
	//*******************************
	// receiver 
	//*******************************
	// DFE finite state machine (FSM)	
	//dfe_fsm_debug_mode = false;
	//capturing_eye_diagram_en = false;
	//dfe_f0_data_use_mode = 0;
	// sampler adapt control (sac)
	//reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0x0f; 
	//tap_sign_control_mode = 0;
	// feedback mode
	//??tap_fb_option = CONST_BASIC_MODE;

	//eye_check_en = 0;
	//counter_threshold = 2048;
	
}	

void get_f0a_max(void) BANKING_CTRL {
		uint8_t max_f0a;
		max_f0a = 0;
		max_f0a = dfe_f0_f1p_s_eve;
		max_f0a = max(dfe_f0_f1n_s_eve, max_f0a);
		max_f0a = max(dfe_f0_f1p_s_odd, max_f0a);
		cds.f0a_max_slicer = max(dfe_f0_f1n_s_odd, max_f0a);

		#if _DEBUG && _DBG_RXTRAIN
		//Printf("\r\n++(get_f0a_max) %d %d %d %d - max_f0a =%d",dfe_f0_f1p_s_eve, dfe_f0_f1n_s_eve, dfe_f0_f1p_s_odd, dfe_f0_f1n_s_odd, cds.f0a_max_slicer );
		#endif
	
		max_f0a = dfe_f0_f1p_d_eve;
		max_f0a = max(dfe_f0_f1n_d_eve, max_f0a);
		max_f0a = max(dfe_f0_f1p_d_odd, max_f0a);
		cds.f0a_max_data = max(dfe_f0_f1n_d_odd, max_f0a);
		
		#if _DEBUG && _DBG_RXTRAIN
		//Printf(" %d %d %d %d  -max_f0a =%d",dfe_f0_f1p_d_eve, dfe_f0_f1n_d_eve, dfe_f0_f1p_d_odd, dfe_f0_f1n_d_odd, cds.f0a_max_data );
		#endif
}

void f0d_measure(void) BANKING_CTRL {	
	
	uint8_t adapt_num, pol_lpnum;
	
		if( cdr_state == NORM_ON)	{ adapt_num = 16; pol_lpnum = 10; }
		else {
			if(tx_status_pcie_mode) {
				adapt_num = 4; pol_lpnum = 2; 			
			}
			else {
				adapt_num = 16; pol_lpnum = 2; 
			}
		}	
		
		//if(lnx_F0D_ACCAP_SEL_REFCLK_LANE) {
		//	reg_ANA_RSVD6_LANE_7_0 = 0xe8; //use REFCLK
		//	reg_FFE_PULSE_DIV_LANE_2_0 = 5;		
		//	delay(Tus);
		//}

	    //-- F0D_COARSE_MEASURE_STATE:
		// dfe tap adaptation
		reg_DFE_COARSE_STEP_EN_LANE = 1; reg_DFE_FINE_STEP_EN_LANE = 1;
		disable_all_tap_adapt();
		reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0x01;
		f0b_en = 0;		
		f0d_en = 1;
		ofst_en = 0; 
		// dfe adaption step size
		reg_DFE_STEP_COARSE_EO_DN_LANE_3_0 = 1;//2; //512=1/2
		reg_DFE_STEP_COARSE_EO_UP_LANE_3_0 = 5;//5; //64=1/32
		reg_DFE_EO_UP_THRE_COARSE_4_0 = 10;//6; 
		if(tx_status_pcie_mode) {
			//set_slicer_data_sampler_adapt_PCIe();	
			//set_PCIe_fb_mode();		
		}
		else {
			set_slicer_data_sampler_adapt(SLICER_SMPL_ONLY);
			set_mmse_fb_mode();
		}	
		/*data_slic_fb_mode = 0;
		f1p_f1n_fb_mode = 0;
		f0_fb_mode = 0;*/
		//pol_table_loop_num_1_0 = 2; pol_table_loop_num_9_2 = 0; //10 - > 1	

		dfe_fsm_run(adapt_num, pol_lpnum);		

	    //-- F0D_FINE_MEASURE_STATE:
		cdr_dfe_scheme_stage = F0D_FINE_MEASURE_STATE;
		// dfe adaption step size
		reg_DFE_COARSE_STEP_EN_LANE = 0; reg_DFE_FINE_STEP_EN_LANE = 1;
		reg_DFE_STEP_FINE_EO_DN_LANE_3_0 = 3; //1/8 =256
		reg_DFE_STEP_FINE_EO_UP_LANE_3_0 = 6; //1/32 =32
		reg_DFE_EO_UP_THRE_FINE_4_0_b0 = 0;// 8
		reg_DFE_EO_UP_THRE_FINE_4_0_b1 = 1;	
		dfe_fsm_run(adapt_num, pol_lpnum);		
		
		//if(lnx_F0D_ACCAP_SEL_REFCLK_LANE) {
		//	reg_ANA_RSVD6_LANE_7_0 = 0xf0;
		//	reg_FFE_PULSE_DIV_LANE_2_0 = 2;		
		//	delay(Tus);
		//}
		
}

#if tag_AVERAGE_EO_MODE
uint8_t get_f0d_data(void) BANKING_CTRL {
	uint16_t avg_f0d;
	
		avg_f0d = dfe_f0_f1p_d_eve;
		avg_f0d += dfe_f0_f1n_d_eve;
		avg_f0d += dfe_f0_f1p_d_odd;
		avg_f0d += dfe_f0_f1n_d_odd;
		avg_f0d >>= 2;

	return 	(uint8_t)avg_f0d;
}

uint8_t get_f0d_slicer(void) BANKING_CTRL {
	uint16_t avg_f0d;
	
		avg_f0d = dfe_f0_f1p_s_eve;
		avg_f0d += dfe_f0_f1n_s_eve;
		avg_f0d += dfe_f0_f1p_s_odd;
		avg_f0d += dfe_f0_f1n_s_odd;
		avg_f0d >>= 2;
		
	return 	(uint8_t)avg_f0d;
}
#else

uint8_t get_f0d_data(void) BANKING_CTRL {
	uint8_t min_f0d;
	
		min_f0d = dfe_f0_f1p_d_eve;
		min_f0d = min(dfe_f0_f1n_d_eve, min_f0d);
		min_f0d = min(dfe_f0_f1p_d_odd, min_f0d);
		min_f0d = min(dfe_f0_f1n_d_odd, min_f0d);

	return 	min_f0d;
}

uint8_t get_f0d_slicer(void) BANKING_CTRL {
	uint8_t min_f0d;
	
		min_f0d = dfe_f0_f1p_s_eve;
		min_f0d = min(dfe_f0_f1n_s_eve, min_f0d);
		min_f0d = min(dfe_f0_f1p_s_odd, min_f0d);
		min_f0d = min(dfe_f0_f1n_s_odd, min_f0d);

	return 	min_f0d;
}
#endif



void dfe_hardware_cont_run(void) BANKING_CTRL {//// hardware cont run

	if( BYPASS_DELAY > 0 || dfe_dis == 1 ) return;	
	if(tag_DFE_ADAPT_NORMAL_SOFT_CONT_EN || lnx_DFE_ADAPT_NORMAL_FORCE_SKIP_LANE ) return;
	
	dfe_load();
	pol_table_loop_num_1_0 = 2; pol_table_loop_num_9_2 = 5; //1  -> 0x16 
	enable_all_tap_adapt();		
	reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0xfd;
	f0b_en = 0;		
	f0d_en = 0;
	ofst_en = 1; 
	reg_DFE_COARSE_STEP_EN_LANE = 0; reg_DFE_FINE_STEP_EN_LANE = 0;
	//adapt_step_size = 8;
	//reg_DFE_STEP_ACCU_FFX_LANE_3_0 = 0x08; //2048*1/256 //removed default=8
	//reg_DFE_STEP_ACCU_FX_LANE_3_0  = 0x08;  
	//reg_DFE_STEP_ACCU_F0_LANE_3_0  = 0x08;
	// DFE feedback setting
	data_slic_fb_mode = 0;
	f1p_f1n_fb_mode = 0;
	f0_fb_mode = 0;
	
    //pol_hold_time = 2; 			
    //pol_swch_time_7_0 = 8; pol_swch_time_9_8 = 0;
	reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0x0f; //[3]f1p_slic_samp_adapt_en = true;
		                                       //[2]f1n_slic_samp_adapt_en = true;
											   //[1]f1p_data_samp_adapt_en = true;
		                                       //[0]f1n_data_samp_adapt_en = true;
	//reg_DFE_STEP_ACCU_DC_LANE_3_0 = 8; //removed default=8 

	reg_DFE_ADAPT_CONT_LANE = 1;

	reg_DFE_START_LANE = 0;
	reg_DFE_START_LANE = 1;

	if(lnx_MAXEO_ADAPT_NORMAL_MODE_EN_LANE) {
		adapt_alg = MAXEO_ADAPT_MODE;	
		reg_DFE_MAXEO_LOW_MODE_LANE = 1;		
		delay(T_10us);	
		f0d_en = 1;		
	}

}

void dfe_hardware_cont_stop(void) BANKING_CTRL {
	if(reg_DFE_ADAPT_CONT_LANE == 1) 
	{
		reg_DFE_ADAPT_CONT_LANE = 0;
		delay(T_10us);
		while(reg_DFE_DONE_LANE==0);
		reg_DFE_START_LANE = 0;
	}
}

void DFE_Oncewhile_Adapt(void) BANKING_CTRL {
	if(tag_DFE_ADAPT_NORMAL_SOFT_CONT_EN==0) return;
	if(lnx_DFE_ADAPT_NORMAL_FORCE_SKIP_LANE == 0 && lnx_PHASE_ADAPT_ENABLE_LANE==0 && dfe_dis == 0 &&  eom_ext_mode==0) 
	{
		dfe_norm_cnt++;
		if(dfe_norm_cnt>3) { //100) { 
			dfe_norm_cnt = 0;
			dfe_load();
			//pol_table_loop_num_1_0 = 0; pol_table_loop_num_9_2 = 4; //16 for f0/f2/f3/ofst
			disable_all_tap_adapt();			
			reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0x0d;
			f0b_en = 0;		
			f0d_en = 0;
			ofst_en = 1; 
			reg_DFE_COARSE_STEP_EN_LANE = 0; reg_DFE_FINE_STEP_EN_LANE = 0;
			//adapt_step_size = 8;
			//reg_DFE_STEP_ACCU_FFX_LANE_3_0 = 0x08; //2048*1/256 //removed default=8
			//reg_DFE_STEP_ACCU_FX_LANE_3_0  = 0x08; 
			//reg_DFE_STEP_ACCU_F0_LANE_3_0  = 0x08;
			// DFE feedback setting
			data_slic_fb_mode = 0;
			f1p_f1n_fb_mode = 0;
			f0_fb_mode = 0;
			reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0x0f; //[3]f1p_slic_samp_adapt_en = true;
		                                       //[2]f1n_slic_samp_adapt_en = true;
											   //[1]f1p_data_samp_adapt_en = true;
		                                       //[0]f1n_data_samp_adapt_en = true;
					
			dfe_fsm_run(16,16);

			pol_table_loop_num_1_0 = 1; pol_table_loop_num_9_2 = 0; //1 for other tap except f1 
			enable_all_tap_adapt();
			reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0xf0;
			ofst_en = 0; 
			dfe_fsm_run(16,1);
			
			dfe_save();
		  }
	}
}

#if tag_RXFFE_ACCAP_EN==1
void RxFFE_ACCap(void) BANKING_CTRL {
	if( lnx_CKFW_EN_LANE) {
		if(reg_RX_PULSE_CKFW_LANE) {
			reg_RX_PULSE_CKFW_LANE = 0;	
			//reg_PIN_GPO_LANE_7_0 = 0;	//debug
		}			
		else {
			reg_RX_PULSE_CKFW_LANE = 1;
			//reg_PIN_GPO_LANE_7_0 = 1;   //debug
			
				DFE_Oncewhile_Adapt();	
				Edge_Sampler_Update();					
		}		
	}
	else {
		//if(reg_PIN_GPO_LANE_7_0 == 1) 	reg_PIN_GPO_LANE_7_0 = 0; //debug
		//else reg_PIN_GPO_LANE_7_0 = 1;
		
		DFE_Oncewhile_Adapt();	
		Edge_Sampler_Update();
	}	
}
#endif

void check_eye_check_pass(uint8_t f0_ec) BANKING_CTRL {

	if(lnx_EYE_CHECK_BYPASS_LANE) {
		cds.eye_check_pass = 1;
		return;
	}
	
	eye_check_en = 1;
	
	reg_DFE_UPDATE_EN_LANE_15_0 = 0;
	reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;
	reg_DFE_UPDATE_DC_EN_LANE = 0;
	//reg_DFE_POL_LPNUM_LANE_9_0_b0 = 2; reg_DFE_POL_LPNUM_LANE_9_0_b1 = 2; //10
	//reg_DFE_ADAPT_LPNUM_LANE_9_0_b0 = 5; reg_DFE_ADAPT_LPNUM_LANE_9_0_b1 = 0; //5

    if(reg_DFE_ADAPT_EVEN_EN_LANE) {
    if(reg_DFE_ADAPT_SPLR_EN_LANE_3_0 & 0x1) {
        reg_DFE_FEXT0_D_N_E_LANE_5_0 = f0_ec;
        reg_DFE_FEN0_D_N_E_LANE = 1; }
    if(reg_DFE_ADAPT_SPLR_EN_LANE_3_0 & 0x2) {
        reg_DFE_FEXT0_D_P_E_LANE_5_0 = f0_ec;
        reg_DFE_FEN0_D_P_E_LANE = 1; }
    if(reg_DFE_ADAPT_SPLR_EN_LANE_3_0 & 0x4) {
        reg_DFE_FEXT0_S_N_E_LANE_5_0 = f0_ec;
        reg_DFE_FEN0_S_N_E_LANE = 1; }
    if(reg_DFE_ADAPT_SPLR_EN_LANE_3_0 & 0x8) {
        reg_DFE_FEXT0_S_P_E_LANE_5_0 = f0_ec;
        reg_DFE_FEN0_S_P_E_LANE = 1; }
    }
    if(reg_DFE_ADAPT_ODD_EN_LANE) {
    if(reg_DFE_ADAPT_SPLR_EN_LANE_3_0 & 0x1) {
        reg_DFE_FEXT0_D_N_O_LANE_5_0 = f0_ec;
        reg_DFE_FEN0_D_N_O_LANE = 1; }
    if(reg_DFE_ADAPT_SPLR_EN_LANE_3_0 & 0x2) {
        reg_DFE_FEXT0_D_P_O_LANE_5_0 = f0_ec;
        reg_DFE_FEN0_D_P_O_LANE = 1; }
    if(reg_DFE_ADAPT_SPLR_EN_LANE_3_0 & 0x4) {
        reg_DFE_FEXT0_S_N_O_LANE_5_0 = f0_ec;
        reg_DFE_FEN0_S_N_O_LANE = 1; }
    if(reg_DFE_ADAPT_SPLR_EN_LANE_3_0 & 0x8) {
        reg_DFE_FEXT0_S_P_O_LANE_5_0 = f0_ec;
        reg_DFE_FEN0_S_P_O_LANE = 1; }
    }

	DFE_FEN_EVEN_REG.BT.B0 = 0x00;
	DFE_FEN_ODD_REG.BT.B0 = 0x00;
	
	reg_EOM_CNT_CLR_LANE = 1;
	reg_EOM_CNT_CLR_LANE = 0;
	
	reg_DFE_START_LANE = 0;
	reg_DFE_START_LANE = 1;
	short_delay(); //delay(Tus);
	while(!reg_DFE_DONE_LANE);
	reg_DFE_START_LANE = 0;

	#if _DEBUG || _DBG_PHASE_ADAPT
	//Printf("\r\n err_cnt = %ld, vld_cnt=%ld ", EOM_ERR_REG0.VAL, EOM_VLD_REG0.VAL); 
	#endif
	eye_check_en = 0;
	
	if(EOM_ERR_REG0.VAL < 100L )	cds.eye_check_pass = 1; //reg_EOM_ERR_CNT_P_E_LANE_31_0_b0;
	else cds.eye_check_pass = 0; //255; //if(EOM_VLD_REG0.VAL < 10000L )	eye_check_pass = 0;			

}


void set_mmse_fb_mode(void) BANKING_CTRL {
	if(reg_DFE_ADAPT_SPLR_EN_LANE_3_0==0x0f || cdr_state == NORM_ON) {
		data_slic_fb_mode = 0;
		//f1p_f1n_fb_mode = 0; //move to cds_init
		//f0_fb_mode = 0;	
	}
	else {
		data_slic_fb_mode = 1;
		//f1p_f1n_fb_mode = 0;
		//f0_fb_mode = 0;
	}
}

/**
desc: DFE_ADAPT_SPLR_EN_LANE[3:0] register setting for sclier/data sampler adapt
//[3]f1p_slic_samp_adapt_en
//[2]f1n_slic_samp_adapt_en
//[1]f1p_data_samp_adapt_en
//[0]f1n_data_samp_adapt_en
*/
void set_slicer_data_sampler_adapt(bool flag) BANKING_CTRL {
	
	if (adapt_slicer_en==1 && adapt_data_en==0) {		
		reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0x0c; 
	} 
	#if (tag_NOT_SUPPORT_TRAIN_USE_DAT_ONLY==0)
	else if (adapt_slicer_en==0 && adapt_data_en==1) {		
		reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0x03; 
	}
	#endif
	else { // ((adapt_slicer_en==1 && adapt_data_en==1) || (adapt_slicer_en==0 && adapt_data_en==0))
	  if(flag == SLICER_SMPL_ONLY)
		reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0x0c; 
	  else	
		reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0x0f; 
	}
}

