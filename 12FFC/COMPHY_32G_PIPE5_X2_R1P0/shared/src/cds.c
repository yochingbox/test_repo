/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file dfe_adaptation.c
* \purpose dfe adaptation & cdr_dfe_scheme
* \History
*	1/12/2015 Heejeong Ryu		Initial, Separate CDS from dfe_adapt 
*/
#include "common.h"
#define _DEBUG 	_DBG_CDS

#ifdef USE_BANKING
#pragma codeseg BANK1
#pragma constseg BANK1
#endif

#define set_slicer_data_sampler_adapt_PCIe() 	reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0x0c
#define set_PCIe_fb_mode() 						data_slic_fb_mode = 1

#ifndef _28G_X2_DFE
// slpr reset with calibration value
void sampler_load_reset(void) BANKING_CTRL {
	
	uint8_t i;
	int8_t ofst;	
	
	if( dfe_dis == 1 ) return;
	
   reg_OFST_RES_LANE_1_0 = lnx_CAL_SAMPLER_RES_LANE_7_0;

	SAMPLER_CAL_SAVE = (uint8_t*)&CAL_SAVE_DATA4_LANE;  
	for(i=0; i<10; i++, SAMPLER_CAL_SAVE++) {
		ofst = (int8_t)*SAMPLER_CAL_SAVE;	
		set_ofst(i, ofst);			
	}
	
	#if _DBG_CDS
	if(do_rxinit) {
    Printf("\r\ncal_ofst: %d %d %d %d %d %d %d %d  %d %d", 
	(int8_t)lnx_CAL_OFST_F1P_D_E_LANE_7_0, (int8_t)lnx_CAL_OFST_F1N_D_E_LANE_7_0,
	(int8_t)lnx_CAL_OFST_F1P_S_E_LANE_7_0, (int8_t)lnx_CAL_OFST_F1N_S_E_LANE_7_0,
	(int8_t)lnx_CAL_OFST_F1P_D_O_LANE_7_0, (int8_t)lnx_CAL_OFST_F1N_D_O_LANE_7_0, 
	(int8_t)lnx_CAL_OFST_F1P_S_O_LANE_7_0, (int8_t)lnx_CAL_OFST_F1N_S_O_LANE_7_0, 
	(int8_t)lnx_CAL_OFST_EDGE_E_LANE_7_0,  (int8_t)lnx_CAL_OFST_EDGE_O_LANE_7_0);	
	
	Printf("\r\ndfe_dc:  %d %d %d %d %d %d %d %d \r\n", 
	(int8_t)reg_DFE_DC_D_P_E_2C_LANE_7_0, (int8_t)reg_DFE_DC_D_N_E_2C_LANE_7_0,
	(int8_t)reg_DFE_DC_S_P_E_2C_LANE_7_0, (int8_t)reg_DFE_DC_S_N_E_2C_LANE_7_0,
	(int8_t)reg_DFE_DC_D_P_O_2C_LANE_7_0, (int8_t)reg_DFE_DC_D_N_O_2C_LANE_7_0,
	(int8_t)reg_DFE_DC_S_P_O_2C_LANE_7_0, (int8_t)reg_DFE_DC_S_N_O_2C_LANE_7_0 );	
    
	print_osft_f1p();
	}
	#endif
	
}

void set_ofst(uint8_t no, int8_t ofst) BANKING_CTRL {
	
	uint8_t dc_sm, ofst_sp, ofst_n;
	
/*	if(ofst>0) { 
		dc_sm = ofst;  
		ofst_n = ofst>>1;
		ofst_sp = (ofst - ofst_n)|0x20;
	}	
	else { 
		ofst = -ofst;
		dc_sm = ofst + 0x40;  //ofst -> dc: sign reversed.
		ofst_n = ofst>>1;
		ofst_sp = ofst - ofst_n;			
	}	
*/
	if(ofst>0) { 
		dc_sm = ofst + 0x40;  //ofst -> dc: sign reversed.;  
		ofst_n = ofst>>1;
		ofst_sp = (ofst - ofst_n); //|0x20;
	}	
	else { 
		ofst = -ofst;
		dc_sm = ofst;// + 0x40;  //ofst -> dc: sign reversed.
		ofst_n = ofst>>1;
		ofst_sp = (ofst - ofst_n)|0x20;		
	}	

	
	switch(no) {			
	case OFST_F1P_D_E: DFE_DC_EVEN_REG8.BT.B0 = dc_sm;  reg_DFE_FENDC_D_P_E_LANE = 1;	reg_DFE_FENDC_D_P_E_LANE = 0; //Keep sequence! hardware has bug
					   ANA_DFEE_REG_1E.BT.B0 = 	ofst_sp; ANA_DFEE_REG_1F.BT.B0 = ofst_n;  break; 	
	case OFST_F1N_D_E: DFE_DC_EVEN_REG8.BT.B1 = dc_sm; reg_DFE_FENDC_D_N_E_LANE = 1; reg_DFE_FENDC_D_N_E_LANE = 0; 
					   ANA_DFEE_REG_20.BT.B0 = 	ofst_sp; ANA_DFEE_REG_21.BT.B0 = ofst_n;  break;
	case OFST_F1P_D_O: DFE_DC_ODD_REG8.BT.B0 = dc_sm; reg_DFE_FENDC_D_P_O_LANE = 1; reg_DFE_FENDC_D_P_O_LANE = 0;
					   ANA_DFEO_REG_1E.BT.B0 = 	ofst_sp; ANA_DFEO_REG_1F.BT.B0 = ofst_n;  break;
	case OFST_F1N_D_O: DFE_DC_ODD_REG8.BT.B1 = dc_sm; reg_DFE_FENDC_D_N_O_LANE = 1; reg_DFE_FENDC_D_N_O_LANE = 0;
					   ANA_DFEO_REG_20.BT.B0 = 	ofst_sp; ANA_DFEO_REG_21.BT.B0 = ofst_n;  break;
	case OFST_F1P_S_E: DFE_DC_EVEN_REG8.BT.B2 = dc_sm; reg_DFE_FENDC_S_P_E_LANE = 1; reg_DFE_FENDC_S_P_E_LANE = 0;
					   ANA_DFEE_REG_22.BT.B0 = 	ofst_sp; ANA_DFEE_REG_23.BT.B0 = ofst_n;  break;
	case OFST_F1N_S_E: DFE_DC_EVEN_REG8.BT.B3 = dc_sm; reg_DFE_FENDC_S_N_E_LANE = 1; reg_DFE_FENDC_S_N_E_LANE = 0;
					   ANA_DFEE_REG_24.BT.B0 = 	ofst_sp; ANA_DFEE_REG_25.BT.B0 = ofst_n;  break;
	case OFST_F1P_S_O: DFE_DC_ODD_REG8.BT.B2 = dc_sm; reg_DFE_FENDC_S_P_O_LANE = 1; reg_DFE_FENDC_S_P_O_LANE = 0; 
					   ANA_DFEO_REG_22.BT.B0 = 	ofst_sp; ANA_DFEO_REG_23.BT.B0 = ofst_n;  break;
	case OFST_F1N_S_O: DFE_DC_ODD_REG8.BT.B3 = dc_sm; reg_DFE_FENDC_S_N_O_LANE = 1; reg_DFE_FENDC_S_N_O_LANE = 0; 
					   ANA_DFEO_REG_24.BT.B0 = 	ofst_sp; ANA_DFEO_REG_25.BT.B0 = ofst_n;  break;
	case OFST_EDGE_E:  ANA_DFEE_REG_26.BT.B0 = 	ofst_sp; ANA_DFEE_REG_27.BT.B0 = ofst_n;  break;
	case OFST_EDGE_O:  ANA_DFEO_REG_26.BT.B0 = 	ofst_sp; ANA_DFEO_REG_27.BT.B0 = ofst_n;  break;			   						   
	}	

}

void disable_all_tap_adapt(void) BANKING_CTRL {
	
	reg_DFE_UPDATE_EN_LANE_15_0 = 0;
	reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;
	f0b_en = 0;		
	f0d_en = 0;
	ofst_en = 0; 
	reg_DFE_COARSE_STEP_EN_LANE = 0; 
	reg_DFE_FINE_STEP_EN_LANE = 0;
	reg_DFE_F0_COARSE_STEP_EN_LANE = 0; 
	reg_DFE_F0_FINE_STEP_EN_LANE = 0;
} 

#endif //_28G_X2_DFE

void cdr_dfe_init(void) BANKING_CTRL {
	
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

	reg_DFE_MMSE_MODE_LANE = MMSE_ADAPT_MODE;
	
	data_slicer_path_switch_eve = 0;
	data_slicer_path_switch_odd = 0;
	
	f1p_f1n_fb_mode = 0;
	f0_fb_mode = 0;
	#ifdef _PCIE_USB_BUILD
	if(tx_status_pcie_mode) {
		set_slicer_data_sampler_adapt_PCIe();	
		set_PCIe_fb_mode();		
	}
	#endif	// _PCIE_USB_BUILD

}	


#ifdef SUPPORT_RXFFE_ACCAP_EN

void DFE_Oncewhile_Adapt(void) BANKING_CTRL {
	if(tag_DFE_ADAPT_NORMAL_SOFT_CONT_EN==0) return;
	if(lnx_DFE_ADAPT_NORMAL_FORCE_SKIP_LANE == 0 && lnx_PHASE_ADAPT_ENABLE_LANE==0 && dfe_dis == 0 &&  eom_ext_mode==0) 
	{
		dfe_norm_cnt++;
		if(dfe_norm_cnt>3) { //100) { 
			dfe_norm_cnt = 0;
#ifdef SUPPORT_EXT_MEM
			dfe_load_type_ram(1); 	
			enable_all_tap_adapt_ram();	
#else
			dfe_load_type(1); 	
			enable_all_tap_adapt();	
#endif
			reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0;	//for f0/f2/f3/ofst
			reg_DFE_UPDATE_EN_LANE_15_0_b0 &= 0x0d;
			ofst_en = 1; 
			// DFE feedback setting
			data_slic_fb_mode = 0;
			f1p_f1n_fb_mode = 0;
			f0_fb_mode = 0;
			reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0x0f; //[3]f1p_slic_samp_adapt_en = true;
		                                       //[2]f1n_slic_samp_adapt_en = true;
											   //[1]f1p_data_samp_adapt_en = true;
		                                       //[0]f1n_data_samp_adapt_en = true;
					
			#ifndef SUPPORT_NEW_CDS
			dfe_fsm_run(16,16); 
			#else
#ifdef SUPPORT_EXT_MEM
			dfe_fsm_ram(0x1010, 4);
#else
			dfe_fsm(0x1010, 4);
#endif
			#endif

#ifdef SUPPORT_EXT_MEM
			enable_all_tap_adapt_ram();
#else
			enable_all_tap_adapt();
#endif
			reg_DFE_UPDATE_EN_LANE_15_0_b0 &= 0xf0;
			ofst_en = 0; 
			#ifndef SUPPORT_NEW_CDS
			dfe_fsm_run(16,1); 
			#else
#ifdef SUPPORT_EXT_MEM
			dfe_fsm_ram(0x1001, 4);
#else
			dfe_fsm(0x1001, 4);
#endif
			#endif
			
#ifdef SUPPORT_EXT_MEM
			dfe_save_ram(); 
#else
			dfe_save(); 
#endif
		  }
	}
}

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
#ifdef SUPPORT_EXT_MEM
				Edge_Sampler_Update_ram();					
#else
				Edge_Sampler_Update();					
#endif
		}		
	}
	else {
		//if(reg_PIN_GPO_LANE_7_0 == 1) 	reg_PIN_GPO_LANE_7_0 = 0; //debug
		//else reg_PIN_GPO_LANE_7_0 = 1;
		
		DFE_Oncewhile_Adapt();	
#ifdef SUPPORT_EXT_MEM
		Edge_Sampler_Update_ram();
#else
		Edge_Sampler_Update();
#endif
	}	
}
#endif


#if 0 //def SUPPORT_REALTIME_PHASE_ADAPT
void f1_ofst_adjust(void) BANKING_CTRL { //ofst to f1 transfer

	int8_t ofst, f1_adjust_thresh;

	f1_adjust_thresh = f1_adjust_thresh_1;
	ofst = cds.ofst_data + cds.ofst_slicer;
	
	if(	ofst > f1_adjust_thresh) {
	
		dfe_sm.f1_e++; dfe_sm.f1_o++;
		reg_DFE_FEXT1_E_LANE_5_0 = dfe_sm.f1_e;
		reg_DFE_FEXT1_O_LANE_5_0 = dfe_sm.f1_o;
		reg_DFE_FEN1_E_LANE = 1; reg_DFE_FEN1_O_LANE = 1;
		reg_DFE_FEN1_E_LANE = 0; reg_DFE_FEN1_O_LANE = 0;
		
		set_ofst(OFST_F1P_D_E, (int8_t)--lnx_TRAIN_OFST_F1P_D_E_LANE_7_0); 
		set_ofst(OFST_F1P_D_O, (int8_t)--lnx_TRAIN_OFST_F1P_D_O_LANE_7_0);			
		set_ofst(OFST_F1P_S_E, (int8_t)--lnx_TRAIN_OFST_F1P_S_E_LANE_7_0);
		set_ofst(OFST_F1P_S_O, (int8_t)--lnx_TRAIN_OFST_F1P_S_O_LANE_7_0);			
		set_ofst(OFST_F1N_D_E, (int8_t)++lnx_TRAIN_OFST_F1N_D_E_LANE_7_0); 
		set_ofst(OFST_F1N_D_O, (int8_t)++lnx_TRAIN_OFST_F1N_D_O_LANE_7_0);			
		set_ofst(OFST_F1N_S_E, (int8_t)++lnx_TRAIN_OFST_F1N_S_E_LANE_7_0);
		set_ofst(OFST_F1N_S_O, (int8_t)++lnx_TRAIN_OFST_F1N_S_O_LANE_7_0);			
		
		f1_adjust_thresh = f1_adjust_thresh_1;
		
		#if _DBG_PHASE_ADAPT||_DBG_PHASE_TRAIN
		Printf("\r\nf1adj..dfe_dc- (d): %d %d %d %d, (s): %d %d %d %d ", 
		(int8_t)reg_DFE_DC_D_P_E_2C_LANE_7_0, (int8_t)reg_DFE_DC_D_N_E_2C_LANE_7_0,	(int8_t)reg_DFE_DC_D_P_O_2C_LANE_7_0, (int8_t)reg_DFE_DC_D_N_O_2C_LANE_7_0,
		(int8_t)reg_DFE_DC_S_P_E_2C_LANE_7_0, (int8_t)reg_DFE_DC_S_N_E_2C_LANE_7_0, (int8_t)reg_DFE_DC_S_P_O_2C_LANE_7_0, (int8_t)reg_DFE_DC_S_N_O_2C_LANE_7_0 );	
		Printf(" cds.ofst_data=%d  cds.ofst_slicer=%d cdr_state=%d ", cds.ofst_data, cds.ofst_slicer, cdr_state);			
		Printf(" ** f1+ %d %d", (int8_t)reg_DFE_F1_E_2C_LANE_7_0, (int8_t)reg_DFE_F1_O_2C_LANE_7_0);				
		#endif
	}
	else if(ofst < -f1_adjust_thresh){
		
		dfe_sm.f1_e--; dfe_sm.f1_o--;
		reg_DFE_FEXT1_E_LANE_5_0 = dfe_sm.f1_e;
		reg_DFE_FEXT1_O_LANE_5_0 = dfe_sm.f1_o;
		reg_DFE_FEN1_E_LANE = 1; reg_DFE_FEN1_O_LANE = 1;
		reg_DFE_FEN1_E_LANE = 0; reg_DFE_FEN1_O_LANE = 0;
		
		set_ofst(OFST_F1P_D_E, (int8_t)++lnx_TRAIN_OFST_F1P_D_E_LANE_7_0); 
		set_ofst(OFST_F1P_D_O, (int8_t)++lnx_TRAIN_OFST_F1P_D_O_LANE_7_0);			
		set_ofst(OFST_F1P_S_E, (int8_t)++lnx_TRAIN_OFST_F1P_S_E_LANE_7_0);
		set_ofst(OFST_F1P_S_O, (int8_t)++lnx_TRAIN_OFST_F1P_S_O_LANE_7_0);			
		set_ofst(OFST_F1N_D_E, (int8_t)--lnx_TRAIN_OFST_F1N_D_E_LANE_7_0); 
		set_ofst(OFST_F1N_D_O, (int8_t)--lnx_TRAIN_OFST_F1N_D_O_LANE_7_0);			
		set_ofst(OFST_F1N_S_E, (int8_t)--lnx_TRAIN_OFST_F1N_S_E_LANE_7_0);
		set_ofst(OFST_F1N_S_O, (int8_t)--lnx_TRAIN_OFST_F1N_S_O_LANE_7_0);			

		#if _DBG_PHASE_ADAPT||_DBG_PHASE_TRAIN
		Printf("\r\nf1adj..dfe_dc+ (d): %d %d %d %d, (s): %d %d %d %d ", 
		(int8_t)reg_DFE_DC_D_P_E_2C_LANE_7_0, (int8_t)reg_DFE_DC_D_N_E_2C_LANE_7_0,	(int8_t)reg_DFE_DC_D_P_O_2C_LANE_7_0, (int8_t)reg_DFE_DC_D_N_O_2C_LANE_7_0,
		(int8_t)reg_DFE_DC_S_P_E_2C_LANE_7_0, (int8_t)reg_DFE_DC_S_N_E_2C_LANE_7_0, (int8_t)reg_DFE_DC_S_P_O_2C_LANE_7_0, (int8_t)reg_DFE_DC_S_N_O_2C_LANE_7_0 );	
		Printf(" cds.ofst_data=%d  cds.ofst_slicer=%d cdr_state=%d ", cds.ofst_data, cds.ofst_slicer, cdr_state);			
		Printf(" ** f1- %d %d", (int8_t)reg_DFE_F1_E_2C_LANE_7_0, (int8_t)reg_DFE_F1_O_2C_LANE_7_0);				
		#endif

		f1_adjust_thresh = f1_adjust_thresh_1;		
	}
	else {
		f1_adjust_thresh = f1_adjust_thresh_2;
	}
			
	dfe_2c.f1_e     = reg_DFE_F1_E_2C_LANE_7_0; 
	dfe_2c.f1_o     = reg_DFE_F1_O_2C_LANE_7_0; 
	cds.f1 = (dfe_2c.f1_e + dfe_2c.f1_o ) >> 1;
	sampler_train_save();		

}

#endif



