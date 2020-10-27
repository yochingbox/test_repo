/****************************************
 * Phase Adaptation
 * Inputs: none 
 * Outputs: phase_c
            eom_ph   
*****************************************/
#define _DEBUG  _DBG_PHASE_ADAPT
#include "common.h"
#ifdef USE_BANKING
#pragma codeseg BANK1
#pragma constseg CSEG
#endif

#ifdef SUPPORT_REALTIME_PHASE_ADAPT
/****************************************
 * Phase Adaptation
 * Inputs: none 
    EOM_ADAPT_STEP_SIZE 7 //7(default,best) 8 9 10 = Norm_f1_vote_step_size
    EOM_CONV_NUM  1024 //1024 2047 4096(default) 8192 = Norm_f1_convergence
    PH_ADAPT_STEP_SIZE 6 //0 1 2 3 4(default) 5 6(best) 7 = Norm_lr_vote_step 
    PH_CONV_NUM  4 //4 8 16(default,best) 32  = Norm_lr_convergence
 * Outputs: phase_c
            eom_ph   
*****************************************/
#define F0D_THRESHOLD lnx_F0D_THRE_LANE_7_0 //4 //4(default) 8 16 64
#define MAX_F0D 	(2+lnx_RPTA_F0D_OFFSET_LANE_7_0)
#define MIN_F0D		(1+lnx_RPTA_F0D_OFFSET_LANE_7_0)
#define MAX_OFF		1 //0
#define STEP_SIZE	1
#define EOM_CONV_NUM	lnx_EOM_CONV_NUM_LANE_15_0 //1024
#define PH_CONV_NUM     lnx_PH_CONV_NUM_LANE_7_0 //4
#define EOM_ADAPT_STEP_SIZE  lnx_EOM_ADAPT_STEP_SIZE_LANE_7_0 // 7
#define PH_ADAPT_STEP_SIZE   lnx_PH_ADAPT_STEP_SIZE_LANE_7_0 // 6

#define EOM_CONV_CNT_TRESHOLD	30
#define PH_CONV_CNT_TRESHOLD	10

#define _TEST_PHASE_ADAPT
#define tag_PHASE_ADAPT_MODE_LANE	0 //lnx_PHASE_ADAPT_MODE_LANE //1

#ifdef _TEST_PHASE_ADAPT
__xdata int8_t  Align90_CLK_OFFSET, EOM_CLK_OFFSET;

void get_offset_number(void) BANKING_CTRL
{	
	Align90_CLK_OFFSET  = (int8_t)lnx_DATA_CLK_OFFSET_2C_LANE_7_0;
	EOM_CLK_OFFSET = (int8_t)lnx_EOM_CLK_OFFSET_2C_LANE_7_0;
}
#else
	#define Align90_CLK_OFFSET 0
	#define EOM_CLK_OFFSET     0
#endif

#ifdef SUPPORT_REALTIME_PHASE_ADAPT
void Phase_Adaptation(void) BANKING_CTRL {

	if(eom_ext_mode==1 || dfe_dis == 1) return;
	
	if( do_phase_adapt ){
		if( lnx_PHASE_ADAPT_ENABLE_LANE == 0 ) {	//requested stop
			lnx_RD_DFE_F0D_LANE_7_0 = train.eo_slicer;
			Data_Path_DFE_Adapt();		
			do_phase_adapt = 0;  
			PH_CONV_CNT = 0;
			EOM_CONV_CNT = 0;
			ph_conv_dir= 0;
			eom_conv_dir = 0;
			f1_ofst_adjustment_en = 0;		
#ifdef SUPPORT_EXT_MEM
			dfe_hardware_cont_run_ram();
			cal_half_code_ram();
#else
			dfe_hardware_cont_run();
			cal_half_code();
#endif
			#if _DEBUG
			DBG_Printf("\r\n(Phase_Adaptation)-- End"); 
			#endif			
			
			//reg_EOM_CLK_EN_LANE = 0; //todo: save power

			return;
		}	
	}
	else {
	  if( lnx_PHASE_ADAPT_ENABLE_LANE  == 1 ) {
			do_phase_adapt = 1; Phase_Adapt_Inited = 0; //start
	  }
	  else return; //idle mode
	}

	if(Phase_Adapt_Inited == 0)
		Init_Phase_Adapt();

	train.phase_offset_esm = adapt_eom_phase_save; 
	
	if(lnx_F1_ALIGN_SKIP_LANE==0) { 
			EOM_Clock_Alignment();
	}
	
	#if ( tag_PHASE_ADAPT_MODE_LANE==1 ) 
		Data_EOM_Align90_Adapt_EyeHeihgtMode();
	#else
		Data_EOM_Align90_Adapt_EyeWidthMode(); 
	#endif	
	
	#if tag_f1_align_skip_en
	if( EOM_CONV_CNT > EOM_CONV_CNT_TRESHOLD) {
		lnx_F1_ALIGN_SKIP_LANE = 1;
		//lnx_PHASE_ADAPT_UI_ALIGN_SKIP_LANE = 1;	
	}
	#endif
	
	#if tag_PHASE_ADAPT_TEMP_AUTO_CTRL
	if( (PH_CONV_CNT > PH_CONV_CNT_TRESHOLD) && lnx_PHASE_ADAPT_TEMP_AUTO_EN_LANE==1) {
		opt.phase_offset_data = train.phase_offset_data;
		lnx_PHASE_ADAPT_ENABLE_LANE = 0; 		
		
		#if _DEBUG
		DBG_Printf("\r\n(Phase_Adaptation)-- auto temp disable : PH_CONV_CNT=%d ", PH_CONV_CNT); 
		#endif			
		
	}
	#endif
	
}

void Init_Phase_Adapt(void) BANKING_CTRL {
	//int8_t delta;
	//reg_EOM_CLK_EN_LANE = 1;
	
#ifdef SUPPORT_EXT_MEM
	dfe_hardware_cont_stop_ram();	
#else
	dfe_hardware_cont_stop();	
#endif
	
		//-- Init
	    //train.phase_offset_data = opt.phase_offset_data; //start from previous rtpa value
		if(lnx_FORCE_INI_PHASE_OFFSET_EN_LANE) {
			train.phase_offset_data = (int8_t)lnx_INI_PHASE_ADAPT_OFFSET_2C_LANE_7_0;
		}
		#ifdef _TEST_PHASE_ADAPT
			get_offset_number();
			train.phase_offset_data = train.phase_offset_data + Align90_CLK_OFFSET; // cal or train result
			train.phase_offset_esm = train.phase_offset_esm + EOM_CLK_OFFSET;
		#endif //_TEST_PHASE_ADAPT

		if(tag_F1_VOFF_ADJUST_EN) {
			f1_ofst_adjustment_en = 1;
		}
		Data_Path_DFE_Adapt();          	
		
		adapt_data_en = 0;
		adapt_slicer_en = 1;
		ph_control_mode = 1;
#ifdef SUPPORT_EXT_MEM
		set_ph_mode_ram();
#else
		set_ph_mode();
#endif
		phase_control_func();
		
		phase_offset = 10;
		eom_vote_acc = 0;
		phase_vote_acc = 0;
		
		f0d_c_pre = 0;
		f0d_l_pre = 0;
		f0d_r_pre = 0;
		phase_l_offset = 0;
		phase_r_offset = 0;
		norm_eom_ph_os_l = 0; norm_eom_ph_os_c = 0; norm_eom_ph_os_r = 0;
		
		PH_CONV_CNT = 0;
		EOM_CONV_CNT = 0;
		ph_conv_dir= 0;
		eom_conv_dir = 0;

		//adapt_eom_phase_save = 0;
		//train.phase_offset_esm = 0;
		adapt_eom_phase_save = train.phase_offset_esm;

		#if _DEBUG
		DBG_Printf("\r\n(Phase_Adaptation Init)-- Align90_CLK_OFFSET=%d, EOM_CLK_OFFSET=%d\r\n\tPH_ADAPT_STEP_SIZE=%d, PH_CONV_NUM=%d, EOM_ADAPT_STEP_SIZE=%d, EOM_CONV_NUM=%d", Align90_CLK_OFFSET, EOM_CLK_OFFSET, (0x01<<PH_ADAPT_STEP_SIZE), PH_CONV_NUM, (0x1<<EOM_ADAPT_STEP_SIZE),EOM_CONV_NUM) ;
		DBG_Printf("-- ph(%d, %d)=(%d,%d), phase_offset=%d, halfUI=%d", train.phase_offset_data, train.phase_offset_esm, reg_ALIGN90_REF_LANE_5_0, reg_EOM_DPHER_LANE_6_0, phase_offset, half_ui_code); 
		#endif

		lnx_F1_ALIGN_SKIP_LANE = 0;
		lnx_PHASE_ADAPT_UI_ALIGN_SKIP_LANE = 0;
		
		detect_sat = 0;
		Phase_Adapt_Inited = 1;		
				
}

void EOM_Clock_Alignment(void) BANKING_CTRL {
	//uint16_t rpta_loop_cnt = 0;
	//int16_t  rpta_vote = 0;
	//int8_t  ph_eom;
	rpta_loop_cnt = 0;
	rpta_vote = 0;
	
	#if _DEBUG
	//DBG_Printf("\r\n(EOM_Clock_Alignment) - ");
	#endif
	
	do {	

		adapt_data_en = 0;
		adapt_slicer_en = 1;
		ph_control_mode = 1;
#ifdef SUPPORT_EXT_MEM
		set_ph_mode_ram();
#else
		set_ph_mode();
#endif
		phase_control_func();
		lnx_EOM_PHASE_UI_ALIGN_FAILED_LANE =	_EXIT_SUCCESS; 

		if(lnx_PHASE_ADAPT_UI_ALIGN_SKIP_LANE==0) 
			EOM_clock_analog_align();		
		if( lnx_EOM_PHASE_UI_ALIGN_FAILED_LANE == _EXIT_SUCCESS ) {
			EOM_clock_DFE_Adapt();
				
			#if _DEBUG
			//DBG_Printf("\r\n\t\t -(Error_Path) %d: data_ofst=%d eom_ofst=%d ph_esm=%d(%d)",rpta_loop_cnt, train_ofst_save, norm_ofst, train.phase_offset_esm, reg_EOM_DPHER_LANE_6_0);
			//DBG_Printf(" eom_en_sde(%d,%d,%d)",EOM_EN_S,EOM_EN_D,EOM_EN_E);
			#endif
//#if 1
				if( norm_ofst > train_ofst_save )
					eom_vote_acc += 1;
				else if ( norm_ofst < train_ofst_save )
					eom_vote_acc -= 1;
#ifdef SUPPORT_EXT_MEM
				if(abs_ram(norm_ofst-train_ofst_save)<=1)  eom_data_align_success=1;
#else
				if(abs(norm_ofst-train_ofst_save)<=1)  eom_data_align_success=1;
#endif
				else eom_data_align_success=0;
//				//for testing only by Enya
//#else // for test to compare DC and f1 for clock alignment
//				if( norm_ofst > train_ofst )
//					eom_vote_acc += 1;
//				else if ( norm_ofst < train_ofst )
//					eom_vote_acc -= 1;
//				if(abs_ram(norm_ofst-train_ofst)<=1)  eom_data_align_success=1;
//				else eom_data_align_success=0;
//#endif
				
			if(eom_vote_acc>0)
				rpta_vote = eom_vote_acc>>EOM_ADAPT_STEP_SIZE;
			else if(eom_vote_acc<0)
				rpta_vote = -( (~eom_vote_acc)>>EOM_ADAPT_STEP_SIZE);

			#if _DEBUG
			//DBG_Printf(" #EOM_CONV_CNT=%d eom_vote_acc=%d vote=%d", EOM_CONV_CNT, eom_vote_acc, rpta_vote);
			#endif
			
			if(rpta_vote!=0) {

		#if _DBG_PHASE_ADAPT
		//Printf("\r\n dfe_dc- (d): %d %d %d %d, (s): %d %d %d %d ", 
		//(int8_t)reg_DFE_DC_D_P_E_2C_LANE_7_0, (int8_t)reg_DFE_DC_D_N_E_2C_LANE_7_0,	(int8_t)reg_DFE_DC_D_P_O_2C_LANE_7_0, (int8_t)reg_DFE_DC_D_N_O_2C_LANE_7_0,
		//(int8_t)reg_DFE_DC_S_P_E_2C_LANE_7_0, (int8_t)reg_DFE_DC_S_N_E_2C_LANE_7_0, (int8_t)reg_DFE_DC_S_P_O_2C_LANE_7_0, (int8_t)reg_DFE_DC_S_N_O_2C_LANE_7_0 );	
		//Printf(" ofst_data: %d  ofst_slicer: %d ", train.ofst_data, train.ofst_slicer);		
		#endif
				#if _DEBUG
				DBG_Printf("\r\n\t\t -(Error_Path) %d:%d: data_ofst=%d eom_ofst=%d ph_esm=%d(%d)",EOM_CONV_CNT, rpta_loop_cnt, train_ofst_save, norm_ofst, train.phase_offset_esm, reg_EOM_DPHER_LANE_6_0);
				DBG_Printf(" eom_vote_acc=%d vote=%d ", eom_vote_acc, rpta_vote);
				#endif
				train.phase_offset_esm += rpta_vote;
				
				//if(rpta_vote>0) eom_conv_dir += 1; 				
				//eom_conv_dir <<= 1;
				//eom_conv_dir &= 0x03;
				//if(eom_conv_dir=0x01 || eom_conv_dir==0x02) {	eom_data_align_success=1; EOM_CONV_CNT++;}
				//else eom_data_align_success = 0;
				//else EOM_CONV_CNT = 0;
				
				ph_control_mode = 1;
#ifdef SUPPORT_EXT_MEM
				set_ph_mode_ram();
#else
				set_ph_mode();
#endif
				phase_control_func();
				eom_vote_acc = 0;
				rpta_vote = 0;
				//voted = 1;
				#if _DEBUG
				DBG_Printf(" -> ph_esm=%d", train.phase_offset_esm);
				#endif
			
			}		
		}
		
		//if(tag_F1_VOFF_ADJUST_EN) {
		//	f1_ofst_adjust();
		//	Data_Path_DFE_Adapt();   
		//}
		
#ifdef SUPPORT_EXT_MEM
		if( (abs_ram(train.f1) > tag_DFE_F1_SAT_THRES) || (train.f0a >= tag_DFE_F0_SAT_THRES) || ofst_sat ) {
#else
		if( (abs(train.f1) > tag_DFE_F1_SAT_THRES) || (train.f0a >= tag_DFE_F0_SAT_THRES) || ofst_sat ) {
#endif
			// protect saturation
			if(lnx_PHASE_ADAPT_SAT_DETECT_LANE==0) {
				lnx_PHASE_ADAPT_SAT_DETECT_LANE = 1;
				#if _DEBUG
				DBG_Printf("\r\n(Phase_Adaptation)-- saturated detect: train.ofst=%d train.f0a=%d",train.ofst, train.f0a); 
				#endif		
				break;	
			}
		}
		else lnx_PHASE_ADAPT_SAT_DETECT_LANE = 0;
		
		#if _DEBUG
		//DBG_Printf("\r\n\t\t -(Data_Path) fx: %d %d %d %d %d %d %d %d %d, eo:%d, ep:%d", train.f0a, train.f0, train.f1, train.f2, train.f3, train.f4, train.f5, train.f6, train.f7, train.f0d, train.eye_check_pass); 
	    //DBG_Printf(" eom_en_sde(%d,%d,%d)",EOM_EN_S,EOM_EN_D,EOM_EN_E);
		//DBG_Printf(" cal_ph=%d, ph_dat=%d, ph_esm=%d ", cal_phase, train.phase_offset_data, train.phase_offset_esm);
		#endif
			
	} while((rpta_loop_cnt++ < EOM_CONV_NUM) && lnx_PHASE_ADAPT_ENABLE_LANE);		

}

#if tag_PHASE_ADAPT_MODE_LANE==1
void Data_EOM_Align90_Adapt_EyeHeihgtMode(void) BANKING_CTRL
{
	//uint16_t rpta_loop_cnt = 0; 
	//int16_t  vote = 0;
	//int8_t  ph_eom;
	rpta_loop_cnt = 0;
	rpta_vote = 0;

	#if _DEBUG
	//DBG_Printf("\r\n ++(Data_EOM_Align90_Adapt) - ");
	//debug_print();
	#endif
	
	do 	{	
		
		if( train.f0<tag_DFE_F0_SAT_THRES ) {

		 adapt_data_en = 0;
		 adapt_slicer_en = 1;
		ph_control_mode = 1;
#ifdef SUPPORT_EXT_MEM
		set_ph_mode_ram();
#else
		set_ph_mode();
#endif
		phase_control_func();
		lnx_EOM_PHASE_UI_ALIGN_FAILED_LANE =	_EXIT_SUCCESS; 
		 
		if(lnx_PHASE_ADAPT_UI_ALIGN_SKIP_LANE==0) 
			EOM_clock_analog_align();		
		
		if( lnx_EOM_PHASE_UI_ALIGN_FAILED_LANE == _EXIT_SUCCESS ) {
			norm_eom_ph_os_c = train.phase_offset_esm;
			norm_eom_ph_os_l = train.phase_offset_esm - phase_offset;
			norm_eom_ph_os_r = train.phase_offset_esm + phase_offset;
			
			F0d_measurement();
			
			#if _DEBUG
			//DBG_Printf("\r\n\t\t -(1) %d: f0d_c=%d, f0d_l=%d, f0d_r=%d, f0d_c_pre=%d, f0d_l_pre=%d, f0d_r_pre=%d", rpta_loop_cnt,train.eo_slicer, train.f0d_slicer_left, train.f0d_slicer_right, f0d_c_pre, f0d_l_pre, f0d_r_pre);
			
			//DBG_Printf("\r\n\t\t - #ph_cnv:%d ph(%d,%d)=(%d,%d), l/r=(%d,%d)", rpta_loop_cnt, train.phase_offset_data,train.phase_offset_esm,reg_ALIGN90_REF_LANE_5_0, reg_EOM_DPHER_LANE_6_0, norm_eom_ph_os_l, norm_eom_ph_os_r);
			DBG_Printf(" f0d_c=%d, f0d_l=%d, f0d_r=%d phase_vote_acc=%d, vote=%d", train.eo_slicer, train.f0d_slicer_left, train.f0d_slicer_right, phase_vote_acc, vote);
			#endif
			
			//-- Compare with pre-F0d 
			if( (f0d_c_pre -  train.eo_slicer) > F0D_THRESHOLD ) 	train.eo_slicer = f0d_c_pre;
			if( (f0d_l_pre -  train.f0d_slicer_left) > F0D_THRESHOLD ) 	train.f0d_slicer_left = f0d_l_pre;
			if( (f0d_r_pre -  train.f0d_slicer_right) > F0D_THRESHOLD ) 	train.f0d_slicer_right = f0d_r_pre;
	
			f0d_c_pre = train.eo_slicer;
			f0d_l_pre = train.f0d_slicer_left;
			f0d_r_pre = train.f0d_slicer_right;
	
			if( (phase_offset>1) && (train.f0d_slicer_left==0) && (train.f0d_slicer_right==0) ) 
			{
				phase_offset--;	
				#if _DEBUG
				DBG_Printf("\r\n phase_offset=%d changed!!",phase_offset);
				#endif
			}
			else 
			{			
				//Early Late Vote	
				if( train.f0d_slicer_left > train.eo_slicer )
					phase_vote_acc -= 1;
				else if( train.f0d_slicer_right > train.eo_slicer )
					phase_vote_acc += 1;
				else if( train.f0d_slicer_left > train.f0d_slicer_right )
					phase_vote_acc -= 1;
				else if( train.f0d_slicer_right > train.f0d_slicer_left )
					phase_vote_acc += 1;	
			
				if(phase_vote_acc>0) 
					rpta_vote = phase_vote_acc>>PH_ADAPT_STEP_SIZE;
				else if(phase_vote_acc<0) 
					rpta_vote = -((~phase_vote_acc)>>PH_ADAPT_STEP_SIZE);
			
				#if _DEBUG
				//DBG_Printf("\r\n\t\t - cnv=%d - phase_vote_acc=%d, vote=%d", rpta_loop_cnt, phase_vote_acc, rpta_vote);
				#endif
				
				if(rpta_vote!=0) 
				{
					#if _DEBUG
					//DBG_Printf("\r\n\t\t - #ph_cnv:%d:%d ph(%d,%d)=(%d,%d), l/r=(%d,%d)", PH_CONV_CNT, rpta_loop_cnt, train.phase_offset_data,train.phase_offset_esm,reg_ALIGN90_REF_LANE_5_0, reg_EOM_DPHER_LANE_6_0, norm_eom_ph_os_l, norm_eom_ph_os_r);
					//DBG_Printf(" f0d_c=%d, f0d_l=%d, f0d_r=%d phase_vote_acc=%d, vote=%d", train.eo_slicer, train.f0d_slicer_left, train.f0d_slicer_right, phase_vote_acc, rpta_vote);
					#endif
					
					#if (tag_CDR_ALIGN90_INC_IS_CLOCK_DELAY==1)	
					if( ((cal_phase - train.phase_offset_data + rpta_vote) == tag_CDR_PHASE_MAX) || 
					((cal_phase - train.phase_offset_data + rpta_vote) == tag_CDR_PHASE_MIN) ) {
						#if _DEBUG
						DBG_Printf(" -> hit max/min!"); 
						#endif
					
					}
					#else
					if( ((cal_phase + train.phase_offset_data + rpta_vote) == tag_CDR_PHASE_MAX) || 
					((cal_phase + train.phase_offset_data + rpta_vote) == tag_CDR_PHASE_MIN) ) {
						#if _DEBUG
						DBG_Printf(" -> hit max/min!"); 
						#endif
					
					}
					#endif
					else {
					
						//train.phase_offset_esm += rpta_vote;
						train.phase_offset_data += rpta_vote;
						ph_control_mode = 1;
#ifdef SUPPORT_EXT_MEM
						set_ph_mode_ram();
#else
						set_ph_mode();
#endif
						phase_control_func();
						
						#if tag_PHASE_ADAPT_TEMP_AUTO_CTRL
						if(rpta_vote>0) ph_conv_dir += 1; 				
						ph_conv_dir <<= 1;
						ph_conv_dir &= 0x03;
						if(ph_conv_dir==0x01 || ph_conv_dir==0x02) PH_CONV_CNT++;
						//else PH_CONV_CNT = 0;
						#endif
						
						#if _DEBUG
						DBG_Printf("\r\n\t\t - #ph_cnv: -> ph(%d, %d)=(%d,%d)", train.phase_offset_data, train.phase_offset_esm, reg_ALIGN90_REF_LANE_5_0, reg_EOM_DPHER_LANE_6_0); 
						#endif
					}

					phase_vote_acc = 0;
					rpta_vote = 0;
					
				}		
		
		   }   
		   
			#if _DEBUG
			//DBG_Printf(" #cnt=%d", PH_CONV_CNT);
			#endif
		 }
		}
		
		Data_Path_DFE_Adapt();
		
#ifdef SUPPORT_EXT_MEM
		if( (abs_ram(train.f1) > tag_DFE_F1_SAT_THRES) || train.f0a >= tag_DFE_F0_SAT_THRES || ofst_sat ) {
#else
		if( (abs(train.f1) > tag_DFE_F1_SAT_THRES) || train.f0a >= tag_DFE_F0_SAT_THRES || ofst_sat ) {
#endif
			// protect saturation
			if(lnx_PHASE_ADAPT_SAT_DETECT_LANE==0) {
				lnx_PHASE_ADAPT_SAT_DETECT_LANE = 1;
				#if _DEBUG
				DBG_Printf("\r\n(Phase_Adaptation)-- saturated detect: train.ofst=%d train.f0a=%d",train.ofst, train.f0a); 
				#endif		
				break;	
			}
		}
		else lnx_PHASE_ADAPT_SAT_DETECT_LANE = 0;

	} while(rpta_loop_cnt++ < PH_CONV_NUM && lnx_PHASE_ADAPT_ENABLE_LANE);

}
#else
void Data_EOM_Align90_Adapt_EyeWidthMode(void) BANKING_CTRL {
	rpta_loop_cnt = 0;
	rpta_vote = 0;
	
	#if _DEBUG
	//DBG_Printf("\r\n (Data_EOM_Align90_Adapt) - ");
	#endif	
	
	do 	{	
		
		adapt_data_en = 0;
		adapt_slicer_en = 1;
		ph_control_mode = 1;
		phase_control_func();
		lnx_EOM_PHASE_UI_ALIGN_FAILED_LANE = _EXIT_SUCCESS; 
			
		if(lnx_PHASE_ADAPT_UI_ALIGN_SKIP_LANE==0) 
			EOM_clock_analog_align();		
		
		if( lnx_EOM_PHASE_UI_ALIGN_FAILED_LANE == _EXIT_SUCCESS ) 		
		{
			//-- f0d calculation (center, left, right)
			norm_eom_ph_os_c = train.phase_offset_esm;
			norm_eom_ph_os_l = train.phase_offset_esm + phase_l_offset;
			norm_eom_ph_os_r = train.phase_offset_esm + phase_r_offset;
			
			F0d_measurement();

			#if _DEBUG
			DBG_Printf("\r\n\t\t -(2) %d(%d):f0d_c=%d %d(%d):f0d_l=%d, %d(%d):f0d_r=%d pl/pr(%d,%d)", 
			norm_eom_ph_os_c, reg_MCU_DEBUGA_LANE_7_0, train.eo_slicer,
			norm_eom_ph_os_l, reg_MCU_DEBUGB_LANE_7_0, train.f0d_slicer_left, 
			norm_eom_ph_os_r, reg_MCU_DEBUGC_LANE_7_0, train.f0d_slicer_right, 
			phase_l_offset, phase_r_offset);
			DBG_Printf(" - ph(%d,%d)=(%d,%d) ", train.phase_offset_data,train.phase_offset_esm,reg_ALIGN90_REF_LANE_5_0, reg_EOM_DPHER_LANE_6_0);
			#endif
						
			//-- Compare F0d 
			if( train.f0d_slicer_left > MAX_F0D ) //2
				phase_l_offset -= STEP_SIZE; //1
			else if(train.f0d_slicer_left < MIN_F0D ) //1
				phase_l_offset += STEP_SIZE;
#ifdef SUPPORT_EXT_MEM
			phase_l_offset = clamp_ram( phase_l_offset, +half_ui_code, -half_ui_code);	
#else
			phase_l_offset = clamp( phase_l_offset, +half_ui_code, -half_ui_code);	
#endif
			
			if( train.f0d_slicer_right > MAX_F0D )
				phase_r_offset += STEP_SIZE;
			else if( train.f0d_slicer_right < MIN_F0D ) 
				phase_r_offset -= STEP_SIZE;	
#ifdef SUPPORT_EXT_MEM
			phase_r_offset = clamp_ram( phase_r_offset, +half_ui_code, -half_ui_code);				
#else
			phase_r_offset = clamp( phase_r_offset, +half_ui_code, -half_ui_code);				
#endif
					
			//Early Late Vote
			if((phase_l_offset+phase_r_offset) < -MAX_OFF) //1
				phase_vote_acc--;
			if((phase_l_offset+phase_r_offset) > MAX_OFF)
				phase_vote_acc++;
				
			if(phase_vote_acc > 0)
				rpta_vote = phase_vote_acc>>PH_ADAPT_STEP_SIZE;
			else if(phase_vote_acc < 0) 
				rpta_vote = -((~phase_vote_acc)>>PH_ADAPT_STEP_SIZE);
			
			
			#if _DEBUG
			DBG_Printf(" phase_vote_acc=%d, vote=%d", phase_vote_acc, rpta_vote);
			#endif
			
			if(rpta_vote!=0) 
			{
				#if _DEBUG
				DBG_Printf("\r\n\t\t - #ph_cnv:%d:%d ph(%d,%d)=(%d,%d)", PH_CONV_CNT, rpta_loop_cnt, train.phase_offset_data,train.phase_offset_esm,reg_ALIGN90_REF_LANE_5_0, reg_EOM_DPHER_LANE_6_0);
				DBG_Printf(" %d:f0d_c=%d %d:f0d_l=%d, %d:f0d_r=%d pl/pr=(%d,%d)", norm_eom_ph_os_c, train.eo_slicer,norm_eom_ph_os_l, train.f0d_slicer_left, norm_eom_ph_os_r,cds.f0d_slicer_right, phase_l_offset, phase_r_offset);
				DBG_Printf(" phase_vote_acc=%d, vote=%d", phase_vote_acc, rpta_vote);
				#endif
			
				#if (tag_CDR_ALIGN90_INC_IS_CLOCK_DELAY==1)	
				if( ((cal_phase - train.phase_offset_data + rpta_vote) == tag_CDR_PHASE_MAX) || 
				((cal_phase - train.phase_offset_data + rpta_vote) == tag_CDR_PHASE_MIN) ) {
					#if _DEBUG
					DBG_Printf(" -> hit max/min!"); 
					#endif
					
				}
				#else
				if( ((cal_phase + train.phase_offset_data + rpta_vote) == tag_CDR_PHASE_MAX) || 
				((cal_phase + train.phase_offset_data + rpta_vote) == tag_CDR_PHASE_MIN) ) {
					#if _DEBUG
					DBG_Printf(" -> hit max/min!"); 
					#endif
					
				}
				#endif
				else {

					//train.phase_offset_esm += rpta_vote;
					train.phase_offset_data += rpta_vote;
					//Data_Path_DFE_Adapt();								
				}
				
				lnx_EYE_LEFT_RTPA_2C_LANE_7_0 = norm_eom_ph_os_l;
				lnx_EYE_RIGHT_RTPA_2C_LANE_7_0 = norm_eom_ph_os_r;
				lnx_EYE_MID_RTPA_2C_LANE_7_0 = train.phase_offset_esm; //norm_eom_ph_os_c;		
				//lnx_ADAPT_PHASE_OFFSET_DATA_2C_LANE_7_0 = train.phase_offset_data;

				#if tag_PHASE_ADAPT_TEMP_AUTO_CTRL
				if(rpta_vote>0) ph_conv_dir += 1; 				
				ph_conv_dir <<= 1;
				ph_conv_dir &= 0x03;
				if(ph_conv_dir==0x01 || ph_conv_dir==0x02) PH_CONV_CNT++;
				//else PH_CONV_CNT = 0;
				#endif
				
				phase_vote_acc = 0;
				rpta_vote = 0;
				
				#if _DEBUG
				DBG_Printf(" -> ph(%d, %d)=(%d,%d): l/r/m(%d,%d,%d)", train.phase_offset_data, train.phase_offset_esm, reg_ALIGN90_REF_LANE_5_0, reg_EOM_DPHER_LANE_6_0, norm_eom_ph_os_l, norm_eom_ph_os_r, norm_eom_ph_os_c); 
				#endif
	
			}		
		   
			//DBG_Printf(" #cnt=%d", PH_CONV_CNT);
	
		}
		
		Data_Path_DFE_Adapt();		
		
#ifdef SUPPORT_EXT_MEM
		if( (abs_ram(train.f1) > tag_DFE_F1_SAT_THRES) || train.f0a >= tag_DFE_F0_SAT_THRES || ofst_sat ) {
#else
		if( (abs(train.f1) > tag_DFE_F1_SAT_THRES) || train.f0a >= tag_DFE_F0_SAT_THRES || ofst_sat ) {
#endif
			// protect saturation
			if(lnx_PHASE_ADAPT_SAT_DETECT_LANE==0) {
				lnx_PHASE_ADAPT_SAT_DETECT_LANE = 1;
				#if _DEBUG
				DBG_Printf("\r\n(Phase_Adaptation)-- saturated detect: train.ofst=%d train.f0a=%d",train.ofst, train.f0a); 
				#endif		
				break;	
			}
		}
		else lnx_PHASE_ADAPT_SAT_DETECT_LANE = 0;
		

	} while( rpta_loop_cnt++ < PH_CONV_NUM && lnx_PHASE_ADAPT_ENABLE_LANE) ;
	
	//DBG_Printf("\r\n\t\t -(DATA_PATH) fx=%x %x %x %x %x %x",reg_DFE_F0_5_0, reg_DFE_F1_5_0, reg_DFE_F2_4_0, reg_DFE_F3_3_0, reg_DFE_F4_3_0, reg_DFE_F5_3_0 );

	#if _DEBUG
	//DBG_Printf(" - end"); 
	#endif
	

}
#endif
       
void Data_Path_DFE_Adapt(void) BANKING_CTRL {
	if(lnx_FORCE_PHASE_OFFSET_DATA_EN_LANE) return;
	
	#if _DEBUG || _DBG_PHASE_ADAPT
	//DBG_Printf("\r\nData_Path_DFE_Adapt:  pt=%d", reg_PT_PASS_LANE);
	#endif
	
	adapt_eom_phase_save = train.phase_offset_esm;
	adapt_data_en = 1;
	adapt_slicer_en = 1;
	ph_control_mode = 0;
#ifdef SUPPORT_EXT_MEM
	set_ph_mode_ram();
#else
	set_ph_mode();
#endif
	phase_control_func_0(train.phase_offset_data, 0);
	train.phase_offset_esm = adapt_eom_phase_save;

	cds_tb = cds_table[CDS_DFE_OFST];
	dfe_adaptation(); 
	
	//train.f0 = (train.f0_data + train.f0_slicer + 1)>>1;
	//train.f0a = (train.f0a_data + train.f0a_slicer + 1)>>1;
	train_ofst_save = train.ofst_slicer;
	//Cal_Cont();
	#if _DEBUG || _DBG_PHASE_ADAPT
	//DBG_Printf(" f0a=%d", train.f0a);
	#endif
}
#endif

void EOM_clock_DFE_Adapt(void) BANKING_CTRL {
	adapt_data_en = 0;
	adapt_slicer_en = 1;
	ph_control_mode = 1;
#ifdef SUPPORT_EXT_MEM
	set_ph_mode_ram();
#else
	set_ph_mode();
#endif
	phase_control_func();

	cds_tb = cds_table[CDS_EOMADAPT];
	dfe_adaptation(); 	
	norm_ofst = train.ofst_slicer;
	
	//TODO: need to update??
	//if((reg_MCU_DEBUGF_LANE_7_0 & 0x1) == 0) {
	//	norm_ofst = cds.ofst_slicer;
	//	train_ofst = train.ofst;
	//}else{
	//	norm_ofst = cds.f1; //for testing only
	//	train_ofst = train.f1;
	//}
	
		//Cal_Cont();
}

void F0d_measurement(void) BANKING_CTRL {

	adapt_data_en = 0;
	adapt_slicer_en = 1;
	ph_control_mode = 1;
#ifdef SUPPORT_EXT_MEM
	set_ph_mode_ram();	
#else
	set_ph_mode();	
#endif
	phase_control_func();

	cds_tb = cds_table[CDS_F0D]; 
	lnx_VH_EO_MODE_LANE = 1;
	dfe_adaptation(); 
	lnx_VH_EO_MODE_LANE = 0;
		
	//Cal_Cont();

}
#endif

//Initialize EOM_DPHER with Calibration result (EOM_DPHER_SYNCED)
//Rotate EOM_DPHER by 128 (with programmable step size)
//do {
//call eye_check function
//} while ( ! eye_check_pass);
void EOM_clock_analog_align(void) BANKING_CTRL {
	uint8_t dec_num;
	uint8_t i;
	uint16_t total_cnt = 540;

	#if _DEBUG
	//DBG_Printf("\r\n(EOM_clock_analog_align)"); 	
	#endif
	
#ifdef SUPPORT_EXT_MEM
	set_slicer_data_sampler_adapt_ram(SLICER_SMPL_ONLY);
#else
	set_slicer_data_sampler_adapt(SLICER_SMPL_ONLY);
#endif
	data_slic_fb_mode = 0; 
	
	dec_num = cdr_ui_pi_code_num;
	
	do {
		cds_tb = cds_table[CDS_EYECHECK];  
		cdr_dfe_scheme();
		if(cds28.eye_check_pass) {
			#if _DEBUG || _DBG_PHASE_TRAIN
		  	//DBG_Printf(" *(%d)", total_cnt);
			#endif
			break; 
		}
		for(i = 0; i < dec_num; ++ i) {		
			//move_eom_phase(128); //move 2UI; 180'
			move_eom_phase(64); //move 1UI; 90'
		}
		
	} while (total_cnt-->0);

	lnx_EOM_PHASE_UI_ALIGN_FAILED_LANE = cds28.eye_check_pass==1? _EXIT_SUCCESS:_EXIT_FAIL;	
	
	#if _DEBUG || _DBG_PHASE_TRAIN	
	if(lnx_EOM_PHASE_UI_ALIGN_FAILED_LANE == _EXIT_FAIL) {
		DBG_Printf("@(%d) ", reg_EOM_DPHER_LANE_6_0);
	}
	#endif	
	
}


#if _DEBUG
//void debug_print(void) {
//		//DBG_Printf("\r\n\t\t -fx: %d %d %d %d %d %d %d %d %d, eo:%d, ep:%d", train.f0a, train.f0, cds.f1, train.f2, train.f3, train.f4, train.f5, train.f6, train.f7, train.eo, train.eye_check_pass); 
//		DBG_Printf("\r\n\t\t -- cds.fx: %d %d %d %d %d %d %d %d %d, eo:%d, ep:%d", cds.f0a_slicer, cds.f0_slicer, cds.f1, cds.f2_slicer, cds.f3_slicer, cds.f4, cds.f5, cds.f6, cds.f7, cds.f0d_slicer_center, cds.eye_check_pass); 
//	    DBG_Printf(" eom_en_sde(%d,%d,%d)",EOM_EN_S,EOM_EN_D,EOM_EN_E);
//		DBG_Printf(" cal_ph=%d, cal_eom_dpher=%d", cal_phase, cal_eom_dpher );
//		DBG_Printf(" ph(%d, %d)=(%d,%d)", train.phase_offset_data, train.phase_offset_esm, reg_ALIGN90_REF_LANE_5_0, reg_EOM_DPHER_LANE_6_0); 
//}	
#endif
