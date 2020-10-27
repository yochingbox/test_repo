/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file ram_dfe_adapt.c
* \purpose DFE Adapt Partial ram code
* \History
*	8/1/2019 Heejeong Ryu		Initial 
*/

#include "common.h"

#ifdef USE_BANKING
#pragma codeseg BANK3
#pragma constseg BANK3
#endif

#ifdef SUPPORT_DFE_UPDATE_EN_DEBUG

void dfe_cdr_phase_opt_ram(void) BANKING_CTRL {
	
	#if _DEBUG
	//DBG_Printf("\r\n++(dfe_cdr_phase_opt_ram)");// ctrl_cdr_phase_on=%d opt_phase=%d",ctrl_cdr_phase_on, opt_phase_os);
	#endif
	if( cmx_TRAIN_SIM_EN ) return;
	
    #if (tag_CDR_OPT_PHASE_BEFORE_DFE) //1
	   train.phase_offset_data = opt.phase_offset_data;
	   #if _DEBUG
	   //DBG_Printf("\r\n++(dfe_cdr_phase_opt_ram) opt_phase_offset=%d", cdr.opt_phase_offset);
	   #endif
	   phase_control_func();
	#endif

	if(tx_status_pcie_mode) 
	{
		if(	pcie_f0b_en ) 
			cds_tb = cds_table[CDS_DEFAULT_PCIE_F0B];			
		else  cds_tb = cds_table[CDS_DEFAULT_PCIE];
	}	
	else
		cds_tb = cds_table[CDS_DEFAULT];
		
	dfe_adaptation_ram();
	
	if(ctrl_cdr_phase_on ) {	
		if( tx_status_pcie_mode ) 
		{
		}	
		else 
		{ 
			#ifdef _SATA_SERDES_BUILD 
			cds_tb = cds_table[CDS_DEFAULT_PHASE_MOVE_DFE_EN];
			cdr_phase_opt();
			#endif	
		}
	}
}
#endif

/*
void cdr_dfe_init_ram(void) BANKING_CTRL {
	
	//reg_ANA_TX_EM_PEAK_EN_LANE = 1;
	// dfe init
	//reg_DFE_EN_LANE = 1;  reg_DFE_DIS_LANE = 0;
	//reg_DFE_ADAPT_ODD_EN_LANE = 1; //??
	//reg_DFE_ADAPT_EVEN_EN_LANE = 1; //??
	
	//f1_adjust_thresh_1 = tag_F1_ADJUST_THRESH_1;
	//f1_adjust_thresh_2 = tag_F1_ADJUST_THRESH_2;
	f1_ofst_adjustment_en = 0; //1 //hardware has bug
	
	//disable_all_tap_adapt();
	
	//todo
	//dfe_f0_res_sel     = 0;			
	//dfe_f1_res_sel     = 3;		//todo	
	//dfe_f234_res_sel   = 1;	 	
	//dfe_f567_res_sel   = 1;		
	//dfe_f8to15_res_sel = 1;		
	//dfe_ffloat_res_sel = 1;		
	//dfe_ofst_res_sel   = 3;		
	
	#ifdef SUPPORT_EN_DFE_CTRL
	UPHY14_TRX_ANAREG_BOT_21.BT.B0 = (UPHY14_TRX_ANAREG_BOT_21.BT.B0 & 0xf0) | (reg_MCU_DEBUG_CMN_4_7_0 & 0x0f);
	if(reg_MCU_DEBUG_CMN_4_7_0&0x10) dfe_ffloat_en = 1;
	else dfe_ffloat_en = 0;		
	#else 
	dfe_f0_en	  = 1;
	dfe_f1to3_en  = 1;
	dfe_f4to7_en  = 1;
	dfe_f8to15_en = 1;
	dfe_ffloat_en = 0; //1
	#endif
	
	//dfe_floating_tap_sel = 1;	//--> temp, move to user setting	 

	reg_DFE_MMSE_MODE_LANE = MMSE_ADAPT_MODE;
	
	data_slicer_path_switch_eve = 0;
    data_slicer_path_switch_odd = 0;
	
	f1p_f1n_fb_mode = 0;
	f0_fb_mode = 0;
	#ifdef _PCIE_USB_BUILD
	if(tx_status_pcie_mode) {
		reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0x0c; //set_slicer_data_sampler_adapt_PCIe() 	
		data_slic_fb_mode = 1; //set_PCIe_fb_mode();		
	}
	#endif	// _PCIE_USB_BUILD

}	
*/

#ifdef SUPPORT_DFE_UPDATE_EN_DEBUG

void dfe_adaptation_ram ( void ) BANKING_CTRL {

    uint8_t cnt, max_cnt ;
	int8_t dfe_err_loop_cnt;
	
	lnx_DFE_CAL_DONE_LANE = 0; //for indicator for bitmatch

	//is_accu_phase_adapt = 0;
	
	//DBG_Printf("\r\n++(dfe_adaptation) ---\n");
	/* now always one time run!!*/
	#if tag_CDR_MAX_DFE_ADAPT_FORCE0==0
	if (ctrl_cdr_phase_on) 	{                         
		if(ctrl_rx_train_mode)			
			ctrl_max_dfe_adapt_shift = do_train ? tag_CDR_MAX_DFE_ADAPT1 : tag_CDR_MAX_DFE_ADAPT0;
		else
			ctrl_max_dfe_adapt_shift = 0;
	}
	else if (ctrl_tx_train_on) { 
		ctrl_max_dfe_adapt_shift = tag_TX_MAX_DFE_ADAPT;
	}
	else {  
		if(ctrl_rx_train_mode)			
			ctrl_max_dfe_adapt_shift = do_train ? tag_RX_MAX_DFE_ADAPT1 : tag_RX_MAX_DFE_ADAPT0;
		else 	
			ctrl_max_dfe_adapt_shift = tag_RX_MAX_DFE_ADAPT0;
	}
	
	if( ctrl_max_dfe_adapt_shift > 0 ) {
		memset0((uint8_t *)&sum, sizeof(Status_SUM_CDS_t));		
		half_shift = ctrl_max_dfe_adapt_shift==0? 0: 0x01 << (ctrl_max_dfe_adapt_shift-1);
	}
	
	dfe_max_cnt = 0x01<<ctrl_max_dfe_adapt_shift;
	#endif
	
	#if tag_CDR_MAX_DFE_ADAPT_FORCE0==0
    for (cnt=0;cnt<max_cnt;cnt++)	
	#endif
	{ 
		#ifndef BITMATCH
		if(lnx_FORCE_CDS_CTRL_EN_LANE) 
			cds_tb = lnx_FORCE_CDS_CTRL_LANE_15_0;		
		//else if(cds_dfe_ofst || dfe_ofst_adapt_en)	
		//	cds_tb = cds_table[CDS_DFE_OFST];	
		//else if(tx_status_pcie_mode)
		//	cds_tb = cds_table[CDS_DEFAULT_PCIE];
		//else if(ctrl_cdr_phase_on) 
		//	cds_tb = cds_table[CDS_DEFAULT_PHASE_MOVE_DFE_EN];
		//else
		//	cds_tb = cds_table[CDS_DEFAULT];
			
		dfe_err_found = 0;	dfe_err_loop_cnt = 3;
		do {	
			cdr_dfe_scheme_ram();
			if(dfe_err_found==0) break;
			
			//step by step debug
			if(lnx_DFE_DBG_STEP_MODE_LANE_7_0==1) {
				lnx_DFE_DBG_STEP_LANE_7_0 = 1; 		
				while(lnx_DFE_DBG_STEP_LANE_7_0==1);		
			}			
			
		} while( dfe_err_loop_cnt-->0);		
		#else
		BITMATCH_SYNC_EN = 1; BITMATCH_SYNC_EN = 0;
		#endif
		
	#if _DEBUG
	//Printf("\r\n ++ %d, %d, %d ", ctrl_max_dfe_adapt_shift, dfe_max_cnt, half_shift );
    //Printf(" train.fx: %d %d %d %d %d %d %d %d %d, eo:%d, eye_ck_p:%d", train.f0a, train.f0, train.f1, train.f2, train.f3, train.f4, train.f5, train.f6, train.f7, train.f0d, train.eye_check_pass); 
    //Printf(" (r,c):(%d,%d), dfe_res:%d, ",train_r,train_c,ctrl_step_res_dfe);
    //Printf(" saturated:%d, sumFtap:%d, boost:%d lvl:%d, phase:%d(%d)", train_saturated,train.sumFtap,train.boost, train.level, phase_offset_data, cdr_align90);
	#endif
			
	#if tag_CDR_MAX_DFE_ADAPT_FORCE0==0
		if( ctrl_max_dfe_adapt_shift > 0 ) {
			sum.f0a_data += cds.f0a_data; 
			sum.f0a_slicer += cds.f0a_slicer;
			sum.f0a_max_data += cds.f0a_max_data; 
			sum.f0a_max_slicer += cds.f0a_max_slicer;
			sum.f0_data +=  cds.f0_data;
			sum.f0_slicer +=  cds.f0_slicer;
			sum.f1 +=  cds.f1;
			sum.f2_data +=  cds.f2_data;
			sum.f2_slicer +=  cds.f2_slicer;
			sum.f3_data +=  cds.f3_data;
			sum.f3_slicer +=  cds.f3_slicer;
			sum.f4 +=  cds.f4;
			sum.f5 +=  cds.f5;
			sum.f6 +=  cds.f6;
			sum.f7 +=  cds.f7;
			sum.f0d_data += cds.f0d_data_center;
			sum.f0d_slicer += cds.f0d_slicer_center;
			sum.ofst_data += cds.cds.ofst_data;
			sum.ofst_slicer += cds.cds.ofst_slicer;
			sum.eye_check_pass += ((cds.eye_check_pass<<1) -1);		
		}
	#endif
		#if _DEBUG
		//print_cds();
		#endif		
     }

	 DFE_Final_Calculation();
	train.saturated |= (reg_DFE_F0_SAT_E_LANE || reg_DFE_F0_SAT_O_LANE);
	
    level_ffe();

#if (_DEBUG)// & _DBG_RXTRAIN )	
	// DBG_PS("\r\n-- end of dfe");
	//print_train();
	debug_print();
#endif
	
	lnx_DFE_CAL_DONE_LANE = 1; 

	//for debug
	lnx_TRAIN_F0A_MAX_LANE_7_0 = train.f0a_max;
	lnx_TRAIN_F0A_LANE_7_0 = train.f0a;
	lnx_TRAIN_F0D_LANE_7_0 = train.eo;
	lnx_TRAIN_F0B_LANE_7_0 = train.f0;
	
}

#endif //SUPPORT_DFE_UPDATE_EN_DEBUG

void dfe_hardware_cont_run_ram(void) BANKING_CTRL {//// hardware cont run

	if(cmx_TRAIN_SIM_EN) return;
	if(reg_DFE_ADAPT_CONT_LANE) return;
	if( dfe_dis == 1 ) return;	
	if( dfe_stop == 1 ) return;	
	//if(tag_DFE_ADAPT_NORMAL_SOFT_CONT_EN || lnx_DFE_ADAPT_NORMAL_FORCE_SKIP_LANE ) return;
	
	dfe_load_type(1); 	
	pol_table_loop_num_1_0 = 2; pol_table_loop_num_9_2 = 5; //1  -> 0x16 
	enable_all_tap_adapt();		
	reg_DFE_UPDATE_EN_LANE_15_0_b0 &= 0xfd;
	//if(reg_MCU_DEBUG_CMN_3_7_0&0x01){
	//	reg_DFE_UPDATE_EN_LANE_15_0_b0 &= 01;
	//	reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0;
	//  reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;		
	//}	
	ofst_en = 1; 
	// DFE feedback setting
	data_slic_fb_mode = 0;
	f1p_f1n_fb_mode = 0;
	f0_fb_mode = 0;
	
	adapt_data_en = 1;
	adapt_slicer_en = 1;
    set_slicer_data_sampler_adapt(BOTH_SMPL);											   

	reg_DFE_ADAPT_CONT_LANE = 1;

	reg_DFE_START_LANE = 0;
	reg_DFE_START_LANE = 1;

	//if(lnx_MAXEO_ADAPT_NORMAL_MODE_EN_LANE) { 
	//	reg_DFE_MMSE_MODE_LANE = MAXEO_ADAPT_MODE;	
	//	reg_DFE_MAXEO_LOW_MODE_LANE = 1;		
	//	//delay01(100);	
	//	f0d_en = 1;		
	//}

}



//===============
//dfe tap value overwrite test
#ifdef SUPPORT_DFE_TAP_REWRITE
void dfe_tap_rewrite(void) BANKING_CTRL {
	
	dfe_hardware_cont_stop();
	
	dfe_save();
	
	dfe_load_type(1);

	dfe_hardware_cont_run_ram(); 
}	
#endif
