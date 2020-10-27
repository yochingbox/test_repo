/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file TRX_Train.c
* \purpose trx train for 56G 7nm
* \History
*	5/15/2019 Heejeong Ryu		Initial 
*/
#define _DEBUG _DBG_TRXTRAIN
#include "common.h"
#include "driver.h"

#pragma constseg CSEG

void TRX_Train(void) {
	uint16_t timer_chk;
	
	PHY_STATUS = ST_TRXTRAIN;

	if( reg_TX_TRAIN_ENABLE_ISR_LANE ) {
		reg_TX_TRAIN_ENABLE_ISR_CLEAR_LANE = 1;
		reg_TX_TRAIN_ENABLE_ISR_CLEAR_LANE = 0;
		
		do_train = 1;
	}	
	else if( reg_RX_TRAIN_ENABLE_ISR_LANE ) {
		reg_RX_TRAIN_ENABLE_ISR_CLEAR_LANE = 1;
		reg_RX_TRAIN_ENABLE_ISR_CLEAR_LANE = 0;		
		
		do_rxtrain = 1;
	}
	
		reg_DFE_MCU_CLK_EN_LANE = 0;
		set_dfe_cont(0);
		do_phase_adapt = 0; //disable rpta	
		
	if( do_train | do_rxtrain) {

		if(lnx_RX_TRAIN_ONLY_DFE_LANE) {
			//reg_DFE_TAP_SIGN_MODE_LANE = 0;
			reg_PIN_GPO_LANE_7_0 = 1;
			cds_init();			
			adapt_slicer_en = drv_ADAPT_SLICER_EN;
			adapt_data_en =	drv_ADAPT_DATA_EN;
			dfe_adaptation();
			reg_PIN_GPO_LANE_7_0 = 0;	

 		}
		else { //normal

			//TODO
			lnx_TX_TRAIN_COMPLETE_INT_LANE = 0; //temp
			
			//if(link_train_mode==0) 
			//if(do_train)	
			//train_if_init();
			timeout2_start(TRAINING_TIMER, 3000000L);
			reg_PIN_GPO_LANE_7_0 = 1;
			trx_train_one_time();
			reg_PIN_GPO_LANE_7_0 = 0;

			timeout2_stop(TRAINING_TIMER);
			TRAIN_TIME.VAL = (uint16_t)timer2_check(TRAINING_TIMER);
			MCU_DEBUG_LANE.VAL = 0;
			MCU_DEBUG_LANE.VAL = timer2_check(TRAINING_TIMER);
			//timer_chk = ~TMR2;	
			//timer_chk = 5000 - timer_chk;
			//lnx_TRAIN_TIME_RD_LANE_15_0 = timer_chk;
			
		}
		
		if(do_train) {
			
			while(reg_INT_REMOTE_STATUS_ACK_LANE);

			#ifdef _PCIE_BUILD	
			reg_TX_FFE_TRAIN_DONE_LANE = 1;
			#endif
			
			reg_INT_TX_TRAIN_COMPLETE_LANE = 0;
			reg_INT_TX_TRAIN_COMPLETE_LANE = 1;	
			reg_INT_TX_TRAIN_COMPLETE_LANE = 0;
			
			#ifndef _PCIE_BUILD	
			if(link_train_mode==0)
			while((reg_REMOTE_STATUS_BITS_LANE_15_0_b1&0x80)==0);		
			#endif	
				// Wait (reg_TX_TRAIN_COMP_WAIT_FRAME_LANE_6_0*0.4us)
				// r1.0 only got 3 bits: so hard code in code
			delay(15*4);// 0.1us unit
			
			#ifdef _SERDES_BUILD
			reg_TRAIN_TX_SEL_BITS_LANE = reg_TX_SEL_BITS_LANE;//save_train_tx_sel_bits_lane;
			reg_TRAIN_RX_SEL_BITS_LANE = reg_RX_SEL_BITS_LANE;//save_train_rx_sel_bits_lane;
			// M-1587 Gray code; IPCE_COMPHY-1424
			if(lnx_TX_TRAIN_CODING_MODE_LANE==0){
				// restore user setting
				reg_TXDATA_PRE_CODE_EN_LANE = save_gray_code_en>>3&1;
				reg_TXDATA_GRAY_CODE_EN_LANE = save_gray_code_en>>2&1;
				reg_RXDATA_PRE_CODE_EN_LANE = save_gray_code_en>>1&1;
				reg_RXDATA_GRAY_CODE_EN_LANE = save_gray_code_en&1;
			}else{
				// use the last algorithm coding selection
				// set TX from remote request
				switch(reg_REMOTE_CTRL_BITS_LANE_15_0>>8&0x3){
				case 2: reg_TXDATA_GRAY_CODE_EN_LANE = 1; break;
				case 3: reg_TXDATA_PRE_CODE_EN_LANE = 1; break;
				}
				// set RX from local request (remote TX)
				switch(reg_INT_LOCAL_CTRL_PAT_LANE_1_0){
				case 2: reg_RXDATA_GRAY_CODE_EN_LANE = 1; break;
				case 3: reg_RXDATA_PRE_CODE_EN_LANE = 1; break;
				}
			}
		
			save_pt_tx_en_lane = reg_PT_TX_EN_LANE;
			reg_PT_TX_EN_LANE = 1;	//to keep CDR lock, send out PRBS pattern within train_complete to train_enable=0				
	
			//clear DTL clamping info before normal data transfer
			reg_CLEAR_DTL_CLAMPING_TRIGGERED_LANE=1;
			reg_CLEAR_DTL_CLAMPING_TRIGGERED_LANE=0;
	
			// clear repeater mode clamping flag 
			reg_PLL_TS_DTX_CLAMPING_TRIGGER_CLEAR_LANE = 1; //reg_DTX_CLAMPING_TRIGGER_CLEAR_LANE=1;
			reg_PLL_TS_DTX_CLAMPING_TRIGGER_CLEAR_LANE = 0; //reg_DTX_CLAMPING_TRIGGER_CLEAR_LANE=0;
			#endif //_SERDES_BUILD
	
			// OLDER place for reg_INT_TX_TRAIN_COMPLETE_LANE
			//lnx_TRAIN_DONE_LANE = ctrl_trx_train_done;						
			
		
			set_train_comp();
			lnx_TX_TRAIN_COMPLETE_INT_LANE = 1;

			lnx_TRAIN_DONE_LANE = ctrl_trx_train_done;
			lnx_TRAIN_PASS_LANE = ctrl_trx_train_pass;

			while( reg_TX_TRAIN_DISABLE_ISR_LANE==0 );
			reg_TX_TRAIN_DISABLE_ISR_CLEAR_LANE = 1;
			reg_TX_TRAIN_DISABLE_ISR_CLEAR_LANE = 0;
			
			do_train = 0;
		
			#ifdef _PCIE_BUILD	
			reg_TX_FFE_TRAIN_DONE_LANE = 0;					
			#endif
			
		}	
		
		if( do_rxtrain ) {
            //clear DTL clamping info before normal data transfer
            reg_CLEAR_DTL_CLAMPING_TRIGGERED_LANE=1;
            reg_CLEAR_DTL_CLAMPING_TRIGGERED_LANE=0;
            
			// clear repeater mode clamping flag 
			reg_PLL_TS_DTX_CLAMPING_TRIGGER_CLEAR_LANE = 1; //reg_DTX_CLAMPING_TRIGGER_CLEAR_LANE=1;
			reg_PLL_TS_DTX_CLAMPING_TRIGGER_CLEAR_LANE = 0; //reg_DTX_CLAMPING_TRIGGER_CLEAR_LANE=0;

			reg_INT_RX_TRAIN_COMPLETE_LANE = 0;
			reg_INT_RX_TRAIN_COMPLETE_LANE = 1;
			reg_INT_RX_TRAIN_COMPLETE_LANE = 0;

			lnx_TRAIN_DONE_LANE = ctrl_trx_train_done;
			lnx_TRAIN_PASS_LANE = ctrl_trx_train_pass;

			while(reg_RX_TRAIN_DISABLE_ISR_LANE==0);
			
			reg_RX_TRAIN_DISABLE_ISR_CLEAR_LANE = 1;
			reg_RX_TRAIN_DISABLE_ISR_CLEAR_LANE = 0;

			do_rxtrain = 0;
		}

	}	
	else { //abort 
		//load dfe_tap/phase from mem data.
		opt2train();

		//pin control - no train fail, no complete
		delay(Tus);
	}


	lnx_G0_INDEX_LANE_7_0 = opt.g0_index;
	lnx_G1_INDEX_LANE_7_0 = opt.g1_index;
	lnx_GN1_INDEX_LANE_7_0 = opt.gn1_index;
	lnx_GN2_INDEX_LANE_7_0 = train.gn2_index;

	if(lnx_PATTERN_PROTECT_EN_LANE==1) pattern_protect_dis = 0;
	//timeout_stop2;
	//timeout2 = 1;
	timeout = 1; 
	reg_PWM2_EN_LANE = 0; 
	reg_PWM1_EN_LANE = 0; //reset pwm_cnt to 1
	reg_PWM1_EN_LANE = 1; 
	reg_TIMER_2_SEL_LANE_1_0 = 0x01;	//use PWM1 1u unit timer
	rx_ctle_adapt_en = 0;

        //save power turn off floating taps in digital and analog
       
	if (tag_FLOATING_TAP_DISABLE_EN) 
		turn_off_floating_taps();
	else set_dfe_cont(1);
	
	//lnx_PHASE_ADAPT_ENABLE_LANE = 1; //debug
	
	//if(lnx_PATTERN_PROTECT_EN_LANE==1) pattern_protect_dis = 0;
	//reg_DFE_TAP_SIGN_MODE_LANE = 1; // Analog error patch. during normal should be 1. don't want to change dfe sign.

	PHY_STATUS = ST_NORMAL; 
    //reg_PIN_GPO_LANE_7_0 = 0;

//#ifdef _DBG_TRAIN_TIMER
//	timer2_stop(TRAINING_TIMER);
//#endif
	
}


void trx_train_one_time(void) {

	#if _DEBUG
	debug_print_head();
	#endif

    trx_train_init();
	
	while(1){
		trx_train_control();
		if( ctrl_trx_train_done ) break;

		if(ctrl_rx_train_on) {
#if _DEBUG
			DBG_Printf("\r\nRX TRAIN");
#endif
			#ifdef SUPPORT_DUMMY_TRAIN
			if(cmx_TRAIN_SIM_EN) rx_train_dummy();
			else 
			#endif
				rx_train();
		}
		else if(ctrl_tx_train_on) {
#if _DEBUG
			DBG_Printf("\r\n TX TRAIN");
#endif
			#ifdef SUPPORT_DUMMY_TRAIN
			if(cmx_TRAIN_SIM_EN && phy_mode != PCIE) tx_train_dummy();
			else 
			#endif
			tx_train();
		}
	}
  
	trx_train_end();

	#if _DEBUG
    //DBG_PS("\r\nTRX TRAIN RESULT");print_train();
 	DBG_Printf("\r\nTRX TRAIN End");
	#endif

}

void trx_train_init(void) {

	int8_t tsen_dat;
	uint32_t temp32;
	uint8_t  index;

	pam2_en = reg_RX_PAM2_EN_LANE;
	tx_pam2_en = reg_TX_PAM2_EN_LANE;
	
	tag_THRE_EXCELLENT = 31;

//#if tag_TRAIN_TIME_OUT_EN
//	reg_TIMER_2_SEL_LANE_1_0 = 0x02;	////use PWM2 1m unit timer
//	reg_PWM2_EN_LANE = 0;
//	reg_PWM2_EN_LANE = 1;
//	if(lnx_TX_TRAIN_TIMER_ENABLE_LANE && do_train) {
//		timeout2_start(lnx_TRX_TRAIN_TIMER_LANE_15_0+1);
//	}
//	else if(lnx_RX_TRAIN_TIMER_ENABLE_LANE && do_rxtrain) {
//		timeout2_start(lnx_RX_TRAIN_TIMER_LANE_15_0+1);
//	}
//#endif
//
	train_status_reset();

	reg_RESET_DFE_TAP_MODE_LANE = 0; //0: reset dfe to 0, 1: xdat previous save -> sm

	adapt_data_en = 1; // force to set both sampler to 1 tag_TRAIN_USE_D; //0
	adapt_slicer_en = 1; //tag_TRAIN_USE_S; //1

	#ifdef _56G_7NM
	reg_EN_DFE_F1P5_LANE = lnx_DFE_F1P5_EN_LANE;  //
	#endif
	
	//reg_DFE_TAP_SIGN_MODE_LANE = 0;
	pattern_protect_dis = 1;
	cds_init();

	// do not reset phase when in trx_train
	tag_RESET_PH_EN_DTL = 0;
	cds_call = CDS_EN_DEFAULT;

	// RX_init
	if (!tag_RX_NO_INIT) //0
	{
		//DBG_PS("\r\n\t -rx_init");
		train.r = tag_RX_RXFFE_R_INI;  //0
		train.c = tag_RX_RXFFE_C_INI;  //15
		Set_Rx_FFE();
		// modified for short channel
		//reg_CTLE_RL1_SEL_LANE_3_0 = 0xF;
		//reg_CTLE_CURRENT1_SEL_LANE_3_0 = 0xF;

		//reset dfe_res

		//DBG_Printf("\r\n++(DFE_Final_Calculation) ---\n");
		//DBG_Printf("\r\n sum       %d %d %d %d %d %d, %d %d", sum_f0a, sum_f0, sum_f1, sum_f2, sum_f3, sum_f4, sum_f5, sum_f0d, sum_eye_check_pass);

		switch (rate_mode)
		{
			//case QR:
			//	f1_sat_thresh = 63;
			//	f2_sat_thresh = tag_DFE_F2_SAT_THRES;
			//	dfe_f0_res_sel = 3;
			//	//dfe_res_f1 = 3;
			//	dfe_f2_res_sel = 3;
			//	dfe_f567_res_sel = 1;
			//	dfe_f8to10_res_sel = 1;
			//	dfe_f11to15_res_sel = 1;
			//	//dfe_ffloat_res_sel = 1;
			//	dfe_ofst_res_sel = 1;
			//	reg_DFE_RES_VREF_LANE_1_0 = tag_VREF_RES_INI;
			//	reg_VREF_SHIFT_LANE_1_0 = 1;
			//	reg_DFE_F0X_SEL_LANE_4_0 = DFE_FX_SEL_FN2;
			//	break;
			case HR:
				f1_sat_thresh = tag_DFE_F1_SAT_THRES;
				f2_sat_thresh = tag_DFE_F2_SAT_THRES;
				dfe_f0_res_sel = 3;
				dfe_res_f1 = 1; //3;
				dfe_f2_res_sel = 3;
				dfe_f34_res_sel = 1; 
				dfe_f567_res_sel = 1;
				dfe_f8to10_res_sel = 1;
				dfe_f11to15_res_sel = 1;
				//dfe_ffloat_res_sel = 1;
				dfe_ofst_res_sel = 1;
				reg_DFE_RES_VREF_LANE_1_0 = tag_VREF_RES_INI; //3
				reg_VREF_SHIFT_LANE_1_0 = 1;
				reg_DFE_F0X_SEL_LANE_4_0 = DFE_FX_SEL_FN2;
				
			   {		
				if(tag_RL2_ADAPT_EN) {
				    
				    if( lnx_FORCE_CTLE_RL2_TUNE_TRACK_EN_LANE ) norm_rl2_tune = lnx_FORCE_CTLE_RL2_TUNE_TRACK_INDEX_LANE_1_0;
				    else 					norm_rl2_tune = get_rl2_tune_per_temp(read_tsen());
				    
                                    if( lnx_FORCE_CTLE_RL2_TUNE_TRAIN_EN_LANE ) train_rl2_tune = lnx_FORCE_CTLE_RL2_TUNE_TRAIN_INDEX_LANE_2_0;
				    else 					train_rl2_tune = lnx_INI_RL2_TRAIN_LANE_2_0; //3	
					
				    reg_CTLE_RL2_TUNE_G_LANE_2_0 = conv_bin2gray(norm_rl2_tune + train_rl2_tune);

		#if _DBG_CTLE_ADAPT
		DBG_Printf("\r\n rl2_init: train_rl2=%d norm_rl2=%d", train_rl2_tune, norm_rl2_tune);
		#endif

			
				}
			   }

                #ifdef _56G_7NM
				reg_CTLE_BYPASS1_EN_LANE = 0;
                #else //#ifdef _56G_7NM
				reg_CTLE_BYPASS1_EN_LANE_1_0 = 0;
                #endif // #else //#ifdef _56G_7NM
				break;
			case FR:
				break;
		}

		reg_DFE_SAT_EN_LANE_1_0 = 0; //hardware has bug??

		if(pam2_en)
		{
			reg_DFE_RES_DOUBLE_LANE_1_0 = 1;
			reg_DFE_F0_RES_DOUBLE_LANE = 1;
			//tag_SUMF_BOOST_TARGET_C = 18;
			tag_FINAL_GAIN_ADJUST = 0;
			tag_THRE_EXCELLENT = 60;
		}else
		{
			reg_DFE_RES_DOUBLE_LANE_1_0 = 0;
			reg_DFE_F0_RES_DOUBLE_LANE = 0;
			//tag_SUMF_BOOST_TARGET_C = 96;
			tag_CDR_PHASE_OPT_FIRST_EN = 1;
		}
		//tag_SUMF_BOOST_TARGET_K = 7;

		if (reg_PIN_PHY_GEN_RX_RD_LANE_5_0 == 4) {
			tag_CDR_PHASE_OPT_EN = 0;
            #ifdef _56G_7NM
            reg_CTLE_BYPASS1_EN_LANE = 1;
            #else //#ifdef _56G_7NM
            reg_CTLE_BYPASS1_EN_LANE_1_0 = 1;
            #endif // #else //#ifdef _56G_7NM
		}
		else {
		//	tag_CDR_PHASE_OPT_EN = 1;
		}

		//
		train.phase_offset_esm = 0;	
		opt.phase_offset_esm = 0;
		train.phase_offset_data = (int8_t)lnx_INI_PHASE_OFFSET_LANE_7_0; //0//-14; //0;  //load phase as calibration result
		opt.phase_offset_data = (int8_t)lnx_INI_PHASE_OFFSET_LANE_7_0; //0//-14; //0;
		reg_CUR_PH_OS_DAT_LANE_7_0 = lnx_CAL_PHASE_LANE_7_0-(reg_RX_ALIGN90_CAL_SETTING_LANE_7_0&0x7f);

		//
		ph_control_mode = 0; // force to mode0 //tag_TRAIN_PH_CONTROL_MODE; 
		//cdr.min_phase_os = (ph_control_mode == 0 || ph_control_mode == 1)? tag_CDR_MIN_PHASE_OS_MODE01:tag_CDR_MIN_PHASE_OS_MODE23;
		//cdr.max_phase_os = (ph_control_mode == 0 || ph_control_mode == 1)? tag_CDR_MAX_PHASE_OS_MODE01:tag_CDR_MAX_PHASE_OS_MODE23;
		cdr.min_phase_os = tag_CDR_MIN_PHASE_OS_MODE01;
		cdr.max_phase_os = tag_CDR_MAX_PHASE_OS_MODE01;

		set_ph_mode(ph_control_mode); //new phase move function

		phase_control_func();

#ifdef _MOVE_PHASE_CDS
		dfe_adaptation();
#endif
		// TX init
		//if (do_train) {
		//	if(link_train_mode==0) train_if_init();
		//	prbs_checker_init ();
		//	//TODO
		//	//if (tag_TX_NO_INIT==0) //0
		//	//{
		//	//	reg_MCU_DEBUG0_LANE_7_0 = 0x80;
        //    //
		//	//	tx_reset(train.tx_preset_index); //3
		//	//	
		//	//	reg_MCU_DEBUG0_LANE_7_0 = 0x89;
		//	//	dfe_cdr_phase_opt();
		//	//}
        //
		//	train2opt();
		//}
#if _DEBUG
		//print_ph_ctrl_status();
#endif

		/*switch(gen_rx) 	{
			case 0:  ctrl_rx_train_mode = reg_G1_RX_TRAIN_MODE; break; 
			case 1:  ctrl_rx_train_mode = reg_G2_RX_TRAIN_MODE;  break; 
			case 2:  ctrl_rx_train_mode = reg_G3_RX_TRAIN_MODE;  break; 
			case 3:  ctrl_rx_train_mode = reg_G4_RX_TRAIN_MODE;  break;
			}*/
		ctrl_rx_train_mode = 0; 
	}	
	// TX init
	if (do_train) {
		// M-1587 Gray code; IPCE_COMPHY-1424
		save_gray_code_en = (uint8_t)reg_TXDATA_PRE_CODE_EN_LANE<<3 | (uint8_t)reg_TXDATA_GRAY_CODE_EN_LANE<<2 | (uint8_t)reg_RXDATA_PRE_CODE_EN_LANE<<1 | (uint8_t)reg_RXDATA_GRAY_CODE_EN_LANE;
		reg_TXDATA_PRE_CODE_EN_LANE = 0;
		reg_TXDATA_GRAY_CODE_EN_LANE = 0;
		reg_RXDATA_PRE_CODE_EN_LANE = 0;
		reg_RXDATA_GRAY_CODE_EN_LANE = 0;
		reg_REMOTE_RD_REQ_LANE = 1;
		// M-1587 
		//save_train_tx_sel_bits_lane = reg_TRAIN_TX_SEL_BITS_LANE;
		//save_train_rx_sel_bits_lane = reg_TRAIN_RX_SEL_BITS_LANE;

		if(link_train_mode==0) {
			train_if_init();
			prbs_checker_init ();
			
			if (tag_TX_NO_INIT==0) //0
			{
				cds_call = CDS_EN_FASTACQ;
				dfe_adaptation();
				tx_reset(train.tx_preset_index); //3
				dfe_adaptation();
				cds_call = CDS_EN_DEFAULT;
			}
		}
		//train2opt();
	}

	train.r = tag_RXFFE_R_GAIN_TRAIN;  //3
	train.c = tag_RXFFE_C_GAIN_TRAIN;  //15
	Set_Rx_FFE();

		ctrl_cdr_phase_on = 0;
		//adjust sumf_boost_target_c, cdr_midpoint_phase_os by temp
	tsen_dat = read_tsen();
	if( tsen_dat < 30 ) { //<30' 
		cdr_midpoint_phase_os = 0;
	}
	else if( tsen_dat > 70 ) {// >70'
		cdr_midpoint_phase_os = 4;
	}
	else { 
		cdr_midpoint_phase_os = 2;
	}

	//set_ctle_tune((tsen_dat>>4)+6); //should remove! 

	//Dfe_isi_res_adapt_en = 0;
	// CDR Phase Optimization    //1                     //0  

#ifdef _DEBUG
	//DBG_Printf("\r\nTRAIN_PH_CONTROL_MODE : %d ",tag_TRAIN_PH_CONTROL_MODE);	
#endif

	//dfe_cdr_phase_opt(); 

	gain_train_with_c = tag_GAIN_TRAIN_WITH_C;   //1
	//gain_train_with_sampler = tag_GAIN_TRAIN_WITH_SAMPLER;

	DBG_Printf("\r\n adapt_data_en=%d, adapt_slicer_en=%d",adapt_data_en, adapt_slicer_en);
	
	if (tag_GAIN_TRAIN_INIT_EN) //1
	{		
		train.r = tag_RXFFE_R_GAIN_TRAIN;  //3
		train.c = tag_RXFFE_C_GAIN_TRAIN;  //15
		Set_Rx_FFE();

		ctrl_cdr_phase_on = 0;

		dfe_res_f0a_low_thres_01 = tag_DFE_RES_F0A_LOW_THRES_01_INIT; //30
		dfe_res_f0a_low_thres_0 = tag_DFE_RES_F0A_LOW_THRES_0_INIT; //30
		dfe_res_f0a_low_thres_1 = tag_DFE_RES_F0A_LOW_THRES_1_INIT; //11
		dfe_res_f0a_low_thres_2 = tag_DFE_RES_F0A_LOW_THRES_2_INIT; //10
		dfe_res_f0a_low_thres_3 = tag_DFE_RES_F0A_LOW_THRES_3_INIT; //6
		dfe_res_f0a_high_thres = tag_DFE_RES_F0A_HIGH_THRES_INIT;

		if(lnx_DFE_RES_F0A_HIGH_THRES_INIT_FORCE_LANE){
			if(reg_RX_PAM2_EN_LANE==0){// 56g
                lnx_DFE_FX_SUM_SAT_THRES_LANE_7_0 = lnx_DFE_RES_F0A_HIGH_THRES_INIT_56G_INTERCEPT_LANE_7_0-tsen_dat/(lnx_DFE_RES_F0A_HIGH_THRES_INIT_56G_SLOPE_LANE_7_0?lnx_DFE_RES_F0A_HIGH_THRES_INIT_56G_SLOPE_LANE_7_0:1);
            }else{// pam2
                lnx_DFE_FX_SUM_SAT_THRES_LANE_7_0 = lnx_DFE_RES_F0A_HIGH_THRES_INIT_PAM2_INTERCEPT_LANE_7_0-tsen_dat/(lnx_DFE_RES_F0A_HIGH_THRES_INIT_PAM2_SLOPE_LANE_7_0?lnx_DFE_RES_F0A_HIGH_THRES_INIT_PAM2_SLOPE_LANE_7_0:1);
            }
        }
		
		gain_train();
		//if (short_flag) train.c = 0;

		if (train.r !=  tag_RX_RXFFE_R_INI) {
			train.r = tag_RX_RXFFE_R_INI;  //0
#if( tag_GAIN_TRAIN_WITH_C == 0)
			{
				train.c = tag_RX_RXFFE_C_INI; //15
			}
#endif
			Set_Rx_FFE();
			dfe_cdr_phase_opt();		
		}
	}
  

	// re-adapt DFE after finishing gain train
	DBG_PS("\r\nGain Train Finalize");
	cds_call = CDS_EN_DEFAULT;
	dfe_cdr_phase_opt();		
	train2opt(); 


	if (!pam2_en && !short_flag && lnx_INIT_PHASE_TRAIN_EN_LANE && tag_CDR_PHASE_OPT_EN) {
		// initial phase train
		train.r = tag_RX_RXFFE_R_INI;  //0
		Set_Rx_FFE();
		if (opt.eo<5) { //for long channel
			ctrl_cdr_phase_on = 1;
			//train_step = 1; ??
		}	
		else
			ctrl_cdr_phase_on = 0;
		dfe_cdr_phase_opt();
		train2opt();
		cds_call = CDS_EN_DEFAULT;
	}

	ctrl_cdr_phase_on = 0;

	DBG_PS("\r\nDFE Res Train (F0)");
	// 10 is just a timeout protection, code should break out before that
	if(!pam2_en) {
		index = 0; 
		f0_res_min = 0;
		f1_res_min = 0;
		f2_res_min = 0;
		f34_res_min = 0;
		f567_res_min = 0;
		vref_res_min = 0;
		vrefshift_min = 1;
		do dfe_cdr_phase_opt();
		while (update_dfe_res(0, 1, 0) || index++ < 5) ;
		dfe_cdr_phase_opt();
	}
	train2opt();

	//// Initail call CTLE Train. TODO: register option?
	//if(do_train) {
	////	rx_ffe_train();
	//	opt2train();
	//}

	//if(opt.eo < 10)  //[HR] 10 is better than 15 based on Fang's test result.
	if(!opt.eye_check_pass)
		ctrl_cdr_phase_on = tag_CDR_PHASE_OPT_EN && tag_CDR_PHASE_OPT_FIRST_EN;
	//else	
	//	ctrl_cdr_phase_on = 0;

	if (ctrl_cdr_phase_on)
	{
		//DBG_PS("\r\n\t -CDR Phase Opt");
		//train.r = 0; train.c = 15;
		//Set_Rx_FFE();
		dfe_cdr_phase_opt();
		train2opt(); 

		ctrl_cdr_phase_on = 0;
		//train.r = tag_RX_RXFFE_R_INI;  //0
		//train.c = tag_RX_RXFFE_C_INI; //15
		//Set_Rx_FFE();
		//dfe_cdr_phase_opt();
        //
		//train2opt(); 
	}

	DBG_PS("\r\nTRX TRAIN INIT Done");
	
}

void trx_train_control(void) {
    //DBG_Printf("\r\ntrx_ctrl");

	#if _DEBUG
	//DBG_Printf("\r\n ctrl_rx_train_done=%d ctrl_tx_train_done=%d ctrl_trx_train_done=%d", ctrl_rx_train_done, ctrl_tx_train_done, ctrl_trx_train_done);
    #endif
	
	if (ctrl_rx_only_mode) // if in the RX_only training mode
	{
		if (ctrl_rx_train_done) // if RX training is done
		{
			ctrl_trx_train_done = 1; // return training done
			//ctrl_trx_train_pass = opt.good_eo; // return training pass //moved to train end
		}
		else // if RX training is not done
		{
			ctrl_rx_train_on = 1; // train RX FFE in the next
			ctrl_tx_train_on = 0; // train RX FFE in the next
			rx.blind_training = 0;
			//ptr_rx_mnr = rx_max_num_round_setting[1]; //setting1
		}
	}
	else // if in the TRX training mode
	{
		if (opt.excellent_eo && (opt.saturated==0)) // if EO is excellent and not saturated
		{
			ctrl_rx_only_mode = 1; // set RX_only_mode = 1
			ctrl_rx_train_on = 1; // train RX FFE in the next for the last time
			ctrl_tx_train_on = 0; 
			rx.blind_training = 0;
            //ptr_rx_mnr = rx_max_num_round_setting[2]; //setting2
		}
		else if (ctrl_rx_train_done) // if RX training is done
		{
			ctrl_rx_train_on = 0; // train TX FFE in the next
			ctrl_tx_train_on = 1; // train TX FFE in the next
		}
		else if (ctrl_tx_train_done) // if TX training is done
		{
			if (opt.eye_check_pass==0) {
				ctrl_rx_train_on = 1; // train RX FFE in the next
				ctrl_tx_train_on = 0; // train RX FFE in the next
				ctrl_trx_train_done = 0; // return training is not yet done 
				DBG_Printf("\r\nEye check failed, doing re-train");
			}
			else {
				ctrl_rx_train_on = 0; // train RX FFE in the next
				ctrl_tx_train_on = 0; // train RX FFE in the next
				ctrl_trx_train_done = 1; // return training done
			}
			#if tag_BLIND_TRAIN_EN  //     0
			if (opt.eye_check_pass==0) // if eye check is failed
			{
				if (ctrl_num_blind_loop >= tag_MAX_BLIND_LOOP) // if the number of blind loops reaches the maximum number
				{
					ctrl_trx_train_done = 1; // return training done
					ctrl_trx_train_pass = 0; // return training fail
				}
				else
				{
					ctrl_num_blind_loop ++; // update the number of blind loops by adding one
					rx.blind_training = 1; // RX blind training
                    //ptr_rx_mnr = rx_max_num_round_setting[3]; //setting3
				}
			}
			else
			#endif
			{
				rx.blind_training = 0; // not RX blind training
				// if same best TRX FFE or the number of big loop loops
				// reaches the maximum number
				if ((ctrl_trx_ffe_updated==0 /*&& tx.status_detected*/) || (ctrl_num_big_loop>=tag_MAX_BIG_LOOP))
				{
					ctrl_rx_only_mode = 1; 
                    //ptr_rx_mnr = rx_max_num_round_setting[2]; //setting2
				}
				else
				{
					ctrl_num_big_loop ++; // update the number of big training loops by adding one
                //    //ptr_rx_mnr = rx_max_num_round_setting[4]; //setting4
				} // end if same best EO TRX or the number of big loop loops reaches the maximum number
			} // end if eye check if failed
		}
		else // the first time of training
		{
			//ctrl_rx_train_on = 1; // train RX in the next
			//ctrl_tx_train_on = 0; // train RX in the next
			rx.blind_training = 1; // not RX blind training
			//ptr_rx_mnr = rx_max_num_round_setting[5]; //setting5
			//HR: to skip first RX_TRAIN.
			ctrl_rx_train_on = 1; // train TX FFE in the next
			ctrl_tx_train_on = 0; // train TX FFE in the next
				
		} // end if EO is excellent and not saturated
	} // end if RX_only_mode

	
	#if (tag_RX_TEST_FFE_MODE) //0 if in the test mode
	{
        //ptr_rx_mnr = rx_max_num_round_setting[0]; //setting0
    }
	#endif
	
	
	if( ctrl_trx_train_done==0 ) // is not training done, we will train RX or TX
	{
	   ctrl_rx_train_done = 0; // reset flag
	   ctrl_tx_train_done = 0; // reset flag
	   ctrl_trx_ffe_updated = 0; // reset flag
	}

	#if _DEBUG
	//Printf("--> ctrl_cdr_phase_on=%d, ctrl_tx_train_on=%d, ctrl_rx_train_on=%d, train_pass=%d ", ctrl_cdr_phase_on,ctrl_tx_train_on,ctrl_rx_train_on, ctrl_trx_train_pass);
	#endif

	//lnx_TRAIN_DONE_LANE = ctrl_trx_train_done;
}


//#if 0
//void vref_train(void)
//{
//	uint8_t step_number = 0;
//	uint8_t vref_res_table_size;
//	uint8_t vref_res_index;
//
//	vref_res_table_size = tag_VREF_TBL_SIZE;
//	vref_res_index = tag_VREF_RES_INI;
//
//	while (step_number < vref_res_table_size + 1)
//	{
//		reg_DFE_RES_VREF_LANE_1_0 = vref_res_index;
//		dfe_cdr_phase_opt();
//		step_number ++;
//
//		if ((max(abs16(sum_vref_top),abs16(sum_vref_bot)) < tag_VREF_RES_LOW_THRES) && (vref_res_index >=1) )
//		{
//			vref_res_index --;
//		}
//		else if ((min(abs16(sum_vref_top),abs16(sum_vref_bot)) >= tag_VREF_RES_HIGH_THRES) && (vref_res_index < vref_res_table_size - 1))
//		{
//			vref_res_index ++;
//		}
//		else
//		{
//			break;
//		}
//
//	}
//}
//#endif

uint8_t update_dfe_res(bool vref_en, bool f0_en, bool isi_en) {
	/* 56G DFE Resolution Update */
	//const int8_t f0_low_th[] = {tag_DFE_RES_F0A_LOW_01, tag_DFE_RES_F0A_LOW_01, tag_DFE_RES_F0A_LOW_2, tag_DFE_RES_F0A_LOW_3};
	const int8_t f1_low_th[] = {tag_DFE_RES_F1_LOW_01, tag_DFE_RES_F1_LOW_01, tag_DFE_RES_F1_LOW_2, tag_DFE_RES_F1_LOW_3};
	const int8_t f2_low_th[] = {tag_DFE_RES_F2_LOW_01, tag_DFE_RES_F2_LOW_01, tag_DFE_RES_F2_LOW_2, tag_DFE_RES_F2_LOW_3};
	int8_t vote, vref_max;
	int8_t isi_val;
	uint8_t updated = 0;

	// custom CDS call (no reset, just continue adapting DFE)
	cds_call = CDS_EN_RESTRAIN;
	reg_CDS_VREF_VAL_FORCE_LANE = 0;
	reg_CDS_VREF_VAL_LANE_5_0 = 25;

	if(f0_en) {
		vote = vote_res(
				dfe_f0_res_sel,
				tag_DFE_F0_RES_SEL_MAX,
				lnx_DFE_F0_RES_THRS_LANE_7_0,
				lnx_DFE_F0_RES_THRS_LANE_7_0, //tag_DFE_RES_F0A_HIGH,
				(int8_t) train.f0a_max,
				f0_res_min);

		//DBG_PS("\r\n ++++++++++++++++ (F0): f0_res= %d, thrs=%d f0a_max=%d, vote=%d",dfe_f0_res_sel,lnx_DFE_F0_RES_THRS_LANE_7_0, (int8_t) train.f0a_max, vote);
		if(vote==+1) f0_res_min = dfe_f0_res_sel + 1; 
		dfe_f0_res_sel += vote;
		//DBG_PS("  ==> f0_res= %d, res_min=%d",dfe_f0_res_sel,f0_res_min);
		updated += vote ? 1 : 0;
	}
	if(vref_en) {
		vref_max = max(abs((int8_t) sum_vref_top), abs((int8_t) sum_vref_bot));
		vote = vote_res(
				dfe_vref_res_sel,
				tag_DFE_VREF_RES_SEL_MAX,
				tag_DFE_RES_VREF_LOW_THRES,
				tag_DFE_RES_VREF_HIGH,
				vref_max,
				0);
		dfe_vref_res_sel += vote;
		if(!vote) { 
			// adjust vref_shift if vref_res has reached its limit
			vote = vote_res(
					reg_VREF_SHIFT_LANE_1_0,
					tag_DFE_VREF_SHIFT_SEL_MAX,
					tag_DFE_RES_VREF_LOW_THRES,
					tag_DFE_RES_VREF_HIGH,
					vref_max,
					1); //vref_shift 1 & 0 are the same
			reg_VREF_SHIFT_LANE_1_0 += vote;
			if (vote) {
				cds_call=CDS_EN_RECOVER;
				reg_CDS_VREF_VAL_FORCE_LANE = 1;
			}
		}
		updated += vote ? 1 : 0;
	}
	if(isi_en) {
		// f1_res
		isi_val = abs(train.f1);
		vote = vote_res(
				dfe_f1_res_sel,
				tag_DFE_F1_RES_SEL_MAX,
				f1_low_th[dfe_f1_res_sel],
				tag_DFE_RES_F1_HIGH,
				isi_val,
				0);
		dfe_f1_res_sel += vote;
		updated += vote ? 1 : 0;
		// f2_res
		isi_val = abs(train.f2);
		vote = vote_res(
				dfe_f2_res_sel,
				tag_DFE_F2_RES_SEL_MAX,
				f2_low_th[dfe_f2_res_sel],
				tag_DFE_RES_F2_HIGH,
				isi_val,
				0);
		dfe_f2_res_sel += vote; 
		updated += vote ? 1 : 0;
		// f34_res
		isi_val = max(abs(train.f3), abs(train.f4));
		vote = vote_res(
				dfe_f34_res_sel,
				tag_DFE_F34_RES_SEL_MAX,
				tag_DFE_RES_F3TO4_LOW,
				tag_DFE_RES_F3TO4_HIGH,
				isi_val,
				0);
		dfe_f34_res_sel += vote;
		updated += vote ? 1 : 0;		
		// f567_res
		isi_val = max(max(abs(train.f5), abs(train.f6)), abs(train.f7));
		vote = vote_res(
				dfe_f567_res_sel,
				tag_DFE_F567_RES_SEL_MAX,
				tag_DFE_RES_F5TO7_LOW,
				tag_DFE_RES_F5TO7_HIGH,
				isi_val,
				0);
		dfe_f567_res_sel += vote;
		updated += vote ? 1 : 0;
		//// f8to10	
		//vote = vote_res(
		//		dfe_f8to10_res_sel,
		//		tag_DFE_F914_RES_SEL_MAX,
		//		tag_DFE_RES_F9TO14_LOW,
		//		tag_DFE_RES_F9TO14_HIGH,
		//		max(max(abs(train.f8), abs(train.f9)), abs(train.f10)), 0);// : 0;
		//dfe_f8to10_res_sel += vote;
		//updated += vote ? 1 : 0;
		//// f11to15	
		
	}

	return updated;
}

int8_t vote_res(uint8_t res, uint8_t res_max, int8_t low_th, int8_t high_th,
                int8_t val, uint8_t res_min) {
	/* DFE resolution voting, used by update_dfe_res() */
	if (val < low_th && res > res_min ) return -1;
	else if (val > high_th && res < res_max) return +1;
	else return 0;
}

//#if 0
//void update_dfe_res()
//{
//	int8_t dfe_res_f1_low;
//	uint8_t res_f0, res_f1, res_f2, res_f3, res_f5, rate_mode; //res_f4, res_f5, res_f6, res_f7, rate_mode;
//	uint8_t res_updated = 0;
//
//	rate_mode = reg_DFE_RATE_MODE_LANE_1_0;
//
//	// get rate-dependent resolution settings
//	switch (rate_mode)
//	{
//		case QR:
//		case HR:
//			res_f0 = dfe_f0_res_sel;
//			res_f1 = dfe_f2_res_sel;
//			res_f2 = dfe_f34_res_sel;
//			res_f3 = dfe_f567_res_sel;
//			//res_f4 = dfe_f567_res_sel;
//			res_f5 = dfe_f9to14_res_sel;
//			//res_f6 = dfe_f9to14_res_sel;
//			//res_f7 = dfe_f9to14_res_sel;
//			break;
//		case FR:
//			break;
//	}
//
///* START: New Code */	
//	// F0 Resolution Adjustment
////#if 0
////	if (res_f0 == 0 || res_f0 == 1)
////	{
////		u_low_th = tag_DFE_RES_F0A_LOW_01; //20
////	}
////	else if (res_f0 == 2)
////	{
////		u_low_th = tag_DFE_RES_F0A_LOW_2; //22
////	}
////	else // dfe_res_f0 == 3
////	{
////		u_low_th = tag_DFE_RES_F0A_LOW_3; //24
////	}
////	if (train.f0a < 30 && res_f0>0 )
////	{
////		res_f0--; //	take min
////		res_updated = 1;
////	}
////	else if (train.f0a > tag_DFE_RES_F0A_HIGH && res_f0 < tag_DFE_F0_RES_SEL_MAX)
////	{
////		res_f0++; //	take max
////		res_updated = 1;
////	}
////#endif
///* END: New Code */	
//
//	if (res_f1 == 0 || res_f1 == 1)
//	{
//		dfe_res_f1_low = tag_DFE_RES_F1_LOW_01; //20
//	}
//	else if (res_f1 == 2)
//	{
//		dfe_res_f1_low = tag_DFE_RES_F1_LOW_2; //22
//	}
//	else // dfe_res_f1 == 3
//	{
//		dfe_res_f1_low = tag_DFE_RES_F1_LOW_3; //24
//
//	}
//	if (abs(train.f1) < dfe_res_f1_low && res_f1>0 )
//	{
//		res_f1 = res_f1 - 1; //	take min
//		res_updated = 1;
//	}
//	else if (abs(train.f1) > tag_DFE_REA_F1_HIGH && res_f1 < tag_DFE_F1_RES_SEL_MAX)
//	{
//		res_f1 = res_f1 + 1; //	take max
//		res_updated = 1;
//	}
//
//	if ( abs(train.f2) < tag_DFE_REA_F2_LOW && res_f2>0 )
//	{
//		res_f2 = res_f2 - 1; //	take min
//		res_updated = 1;
//	}
//	else if ( abs(train.f2) > tag_DFE_REA_F2_HIGH && res_f2 < tag_DFE_F2_RES_SEL_MAX )
//	{
//		res_f2 = res_f2 + 1; //	take max
//		res_updated = 1;
//	}
//
//	if ( abs(train.f3) < tag_DFE_REA_F3_LOW && abs(train.f4) < tag_DFE_REA_F4_LOW && res_f3>0 )
//	{
//		res_f3 = res_f3 -1; // take min;
//		res_updated = 1;
//	}
//	else if ( (abs(train.f3) > tag_DFE_REA_F3_HIGH || abs(train.f4) > tag_DFE_REA_F4_HIGH) && res_f3 < tag_DFE_F34_RES_SEL_MAX  )
//	{
//		res_f3 = res_f3 + 1;
//		res_updated = 1;
//	}
//
//	if ( abs(train.f5) < tag_DFE_REA_F5_LOW && abs(train.f6) < tag_DFE_REA_F6_LOW && abs(train.f7) < tag_DFE_REA_F7_LOW && res_f5>0)
//	{
//		res_f5 = res_f5 -1; //take min;
//		res_updated = 1;
//	}
//	else if ( abs(train.f5) > tag_DFE_REA_F5_HIGH || abs(train.f6) > tag_DFE_REA_F6_HIGH && abs(train.f7) > tag_DFE_REA_F7_HIGH && res_f5 < tag_DFE_F567_RES_SEL_MAX )
//	{
//		res_f5 = res_f5 + 1;
//		res_updated = 1;
//	}
//
//	/*
//	val = abs(train.f8);
//	val = max( abs(train.f9), val);
//	val = max( abs(train.f10), val);
//	val = max( abs(train.f11), val);
//	val = max( abs(train.f12), val);
//	val = max( abs(train.f13), val);
//	val = max( abs(train.f14), val);
//	val = max( abs(train.f15), val);
//
//	//if (max (abs(train.f8),abs(train.f9), abs(train.f10),abs(train.f11),abs(train.f12),abs(train.f13),abs(train.f14),abs(train.f15)) < 10)
//	if(val < 10  && dfe_f8to15_res_sel>0)
//	{
//		dfe_f8to15_res_sel = dfe_f8to15_res_sel - 1;//take min
//	}
//	//else if (max (abs(train.f8),abs(train.f9), abs(train.f10),abs(train.f11),abs(train.f12),abs(train.f13),abs(train.f14),abs(train.f15)) >14)
//	else if (val>14 && dfe_f8to15_res_sel<tag_DFE_F8TO15_RES_SEL_MAX)
//	{
//		dfe_f8to15_res_sel = dfe_f8to15_res_sel + 1; //	take max
//	}
//
//	val = abs(train.ff1);
//	val = max( abs(train.ff2), val);
//	val = max( abs(train.ff3), val);
//	val = max( abs(train.ff4), val);
//	val = max( abs(train.ff5), val);
//	val = max( abs(train.ff6), val);
//
//	//if (max (abs(train.ff1),abs(train.ff2), abs(train.ff3),abs(train.ff4),abs(train.ff5),abs(train.ff6)) < 20)
//	if ( val< 20 && dfe_ffloat_res_sel>0)
//	{
//		dfe_ffloat_res_sel = dfe_ffloat_res_sel - 1;
//		take min
//	}
//	//else if (max (abs(train.ff1),abs(train.ff2), abs(train.ff3),abs(train.ff4),abs(train.ff5),abs(train.ff6)) > 28)
//	else if (val> 28 && dfe_ffloat_res_sel < tag_DFE_FFLOAT_RES_SEL_MAX)
//	{
//		dfe_ffloat_res_sel = dfe_ffloat_res_sel + 1;
//		take max
//	}
//	*/
//	switch (rate_mode)
//		{
//			case QR:
//
//			case HR:
//				dfe_f0_res_sel = res_f0;
//				dfe_f2_res_sel = res_f1;
//				dfe_f34_res_sel = res_f2;
//				dfe_f567_res_sel = res_f3;
//				dfe_f9to14_res_sel = res_f5;
//				break;
//			case FR:
//				break;
//		}
//
////	return res_updated;
//}
//#endif


void trx_train_end()
{
	uint8_t num, index;

	if(cmx_TRAIN_SIM_EN) return; //TODO
#if _DEBUG
	DBG_Printf("\r\ntrx_end");            
#endif
#if 0
       if (tag_GAIN_TRAIN_END_EN)
	{
		gain_train_with_c = 0;
		//gain_train_with_sampler = tag_GAIN_TRAIN_WITH_SAMPLER;//0

		opt2train();
		ctrl_cdr_phase_on = 0;

		dfe_res_f0a_low_thres_01 = tag_DFE_RES_F0A_LOW_THRES_01_END;
		dfe_res_f0a_low_thres_2 = tag_DFE_RES_F0A_LOW_THRES_2_END;
		dfe_res_f0a_low_thres_3 = tag_DFE_RES_F0A_LOW_THRES_3_END;
		dfe_res_f0a_high_thres = tag_DFE_RES_F0A_HIGH_THRES_END;

		gain_train();
		train2opt();
	}
#endif


	if (pam2_en){		
		
	}
	else {
	
		#if tag_DFE_ISI_RES_ADAPT_EN==1 //1
		#if _DEBUG
		DBG_Printf("\r\n  res_adapt");
		#endif
		//Dfe_isi_res_adapt_en = 1;
		//dfe_cdr_phase_opt();
		//train2opt();
		//Dfe_isi_res_adapt_en = 0;
		DBG_PS("\r\nFinal DFE Res Train (Vref & ISI only)");
		DBG_PS("\r\n-------------------------------------");
		ctrl_cdr_phase_on = 0;
		// 5 is just a timeout protection, code should break out before that
		index = 0;
		f0_res_min = 0;
		cds_call = CDS_EN_RESTRAIN;
		dfe_cdr_phase_opt();
		while (update_dfe_res(1, 0, 0) || index++ < 5) dfe_cdr_phase_opt();
		//while (update_dfe_res(0, 0, 1) && index++ < 5) dfe_cdr_phase_opt();
		train2opt();
		#endif
	}

/* -- Bike's Note: 	 
The phase_offset_data inside opt set is the optimal phase offset when ph_control_mode = train_ph_control_mode. 
The final trained (current) phase_offset_data is the phase offset when ph_control_mode = 0. 
We want to record this phase offset for test purpose and hence introduce a new variable named opt_phase_offset_normal. 
Update this variable right after advanced clock alignment function.

## No phase_offset_normal in train set or opt set.
## the global variable of the current phase_offset_data is the input for phase control function.
## during training, the phase_offset_data in train set always follow up with the current phase_offset_data.
## the phase_offset_data in opt set only updates when needed.
## When we enter into tracking mode, the real time phase adaptation algorithm just keep using the current phase_offset_data.
*/	
	if(ph_control_mode == 2 || ph_control_mode == 3 ) {  
		advanced_clk_align();  
	}
	
	ph_control_mode = 0;
	//cdr.min_phase_os = (ph_control_mode == 0 || ph_control_mode == 1)? tag_CDR_MIN_PHASE_OS_MODE01:tag_CDR_MIN_PHASE_OS_MODE23;
	//cdr.max_phase_os = (ph_control_mode == 0 || ph_control_mode == 1)? tag_CDR_MAX_PHASE_OS_MODE01:tag_CDR_MAX_PHASE_OS_MODE23;
	cdr.min_phase_os = tag_CDR_MIN_PHASE_OS_MODE01;
	cdr.max_phase_os = tag_CDR_MAX_PHASE_OS_MODE01;
	phase_control_func();	

	#if _DEBUG
	//print_ph_ctrl_status();
	#endif
	
	cds_call = CDS_EN_RESTRAIN;
	dfe_adaptation();
	train2opt();
	
	#if _DEBUG
	Printf("\r\n adapt_data_en=%d, adapt_slicer_en=%d",(uint16_t)adapt_data_en, (uint16_t)adapt_slicer_en);
	#endif
	
	#if ( tag_FINAL_BOTH_SAMPLER_ADAPT )  //1
		adapt_data_en = 1;
		adapt_slicer_en = 1;
		cds_call = CDS_EN_FINAL;
		dfe_adaptation();
	#endif

	// revert phase reset enable to default (1) 
	tag_RESET_PH_EN_DTL = 1;

	if(do_train){
		// PRBS checking test
		for(index=0;index<1/*lnx_PRBS_DEBUG1_LANE_7_0*/;index++){ //TODO
			prbs_checker_start();
			prbs_checker_check_ber();
			prbs_checker_stop();
		}
		prbs_checker_uninit();
	}
	
	ctrl_trx_train_pass = opt.good_eo; // return training pass

	{
/*	
	if(lnx_FORCE_CTLE_R_INDEX_EN_LANE || lnx_FORCE_PHASE_EN_LANE || lnx_FORCE_CTLE_RL2_TUNE_EN_LANE ) {
		if(lnx_FORCE_CTLE_R_INDEX_EN_LANE) {
			train.r = lnx_FORCE_CTLE_R_INDEX_TRAIN_LANE_7_0;
			Set_Rx_FFE();
		}
		if(lnx_FORCE_PHASE_EN_LANE) {
			train.phase_offset_data = (int8_t)lnx_FORCE_PHASE_OFFSET_TRAIN_LANE_7_0;
		}	
		//if(lnx_FORCE_CTLE_RL2_TUNE_EN_LANE) {
	//		reg_CTLE_RL2_TUNE_G_LANE_2_0 = lnx_FORCE_CTLE_RL2_TUNE_G_LANE_2_0; 
	//	}	
		cds_call = CDS_EN_GAINTRAIN;
		dfe_adaptation();

		cds_call = CDS_EN_FINAL;
		dfe_adaptation();		
	}
*/	
	//TODO train2optrcd();
	lnx_OPT_F0B_LANE_7_0 = train.f0;
	lnx_OPT_F1_LANE_7_0 = train.f1;
	lnx_OPT_FN1_LANE_7_0 = (uint8_t)train.fn1;
	lnx_OPT_VREF_LANE_7_0 = (uint8_t)((abs16(sum_vref_top)+abs16(sum_vref_bot))>>1);               
	lnx_OPT_R_INDEX_LANE_7_0 = train.r;
	lnx_OPT_C_INDEX_LANE_7_0 = train.c;

	lnx_OPT_PHASE_DATA_LANE_7_0 =  (uint8_t)train.phase_offset_data;


#if _DEBUG	
	DBG_Printf("\r\n opt_f0b: %d", lnx_OPT_F0B_LANE_7_0);
	DBG_Printf(" opt_fn1: %d", (int8_t)lnx_OPT_FN1_LANE_7_0);
	DBG_Printf(" opt_f1: %d", lnx_OPT_F1_LANE_7_0);
	DBG_Printf(" |sum_vref_t/m/b|=(%d", sum_vref_top);
	DBG_Printf(" %d", sum_vref_mid);
	DBG_Printf(" %d)", sum_vref_bot);
	DBG_Printf("==> avg:%d", (int8_t)lnx_OPT_VREF_LANE_7_0);
#endif

	}

	tsen_dat_train = read_tsen();
         	
	//reg_EOM_CLK_EN_LANE = 0; //save power
	#if _DEBUG
    //DBG_Printf("\r\ntrx_end finish");            
	#endif
}

__code const uint8_t gt0_dfe_res[] = {0, 1, 2, 3 };
//__code const uint8_t gt1_dfe_res[] = {0, 1, 2, 3, 3,  3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3  };//also need to change pw
__code const uint8_t gt1_dfe_res[] = {3, 3,  3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3  };//also need to change pw
__code const uint8_t gt1_c []      = {15, 15, 15, 15, 15, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0}; //gain_index pw
__code const uint8_t gt2_dfe_res[] = {0, 1, 2, 3, 1, 2, 3 };
#define tag_HR_GAIN_C_TABLE_SIZE (21-3)
__code uint8_t HR_gain_C_table[] = {  17, 16, 15, 14, 13, 12, 11, 10, 9,  8, 7, 6, 5,  4, 3, 2, 1, 0  };

void gain_train(void)  
{
	uint8_t step_number;
	uint8_t gain_index, c_index; //largest gain + smallest dfe_res
	uint8_t gain_table_size, dfe_res_f0a_low_thres;
	uint8_t gain_table_index;
	uint8_t credit;
	//bool 	ctrl_sampler_by2;
	step_number = 0;
	gain_index = 0, c_index = 0; //largest gain + smallest dfe_res
	credit = 0;
	
	if (!pam2_en && tag_CDR_PHASE_OPT_EN) {
		opt.phase_offset_data = -40; // 40' degree from cal_ph 90' //-80;
	}

	#if _DEBUG
	DBG_PS("\r\nGain Train: ");
	#endif

	if(cmx_TRAIN_SIM_EN) return;
	cds_call = CDS_EN_GAINTRAIN;
	tag_DFE_LOAD_EN = 0;
	tag_DFE_SAVE_EN = 0;

	short_flag = 0;
	
  while(1)
 {	
	gain_table_size = (gain_train_with_c ? (tag_HR_GAIN_C_TABLE_SIZE) : gt0_size);
	gain_table_index = (gain_train_with_c?1:0);
	gain_index = 0; 

	while (step_number < (gain_table_size + 1))
	{
		switch (gain_table_index)
		{
		case 0:
			ctrl_step_res_dfe = gt0_dfe_res[gain_index];
			break;
		case 1:
			ctrl_step_res_dfe = 3; // fixed 3. gt1_dfe_res[gain_index]; 
			train.c = HR_gain_C_table[gain_index];
			break;
		default:
			ctrl_step_res_dfe = gt0_dfe_res[gain_index];
		}

		Set_Rx_FFE();

		dfe_cdr_phase_opt();	
		step_number ++;

			
		DBG_Printf(" gain_index=%d(size:%d), train.f0a_max=%d train.dfe_saturate=%d, vref_max=%d, credit=%d", gain_index, (gain_table_size-1),train.f0a_max,train.dfe_saturate, max(abs16(sum_vref_top),abs16(sum_vref_bot)), credit);

		if (dfe_res_f0 == 0 )
		{
			dfe_res_f0a_low_thres = dfe_res_f0a_low_thres_0; 
		}
		else if (dfe_res_f0 == 1)
		{
			dfe_res_f0a_low_thres = dfe_res_f0a_low_thres_1; 
		}
		else if (dfe_res_f0 == 2)
		{
			dfe_res_f0a_low_thres = dfe_res_f0a_low_thres_2; 
		}
		else // dfe_res_f0 == 3
		{
			dfe_res_f0a_low_thres = dfe_res_f0a_low_thres_3; 			
		}
	
		//						6
		if ((train.f0a_max < dfe_res_f0a_low_thres) && train.dfe_saturate==0 && train.oe_saturate == 0 && (gain_index >=1) )
		{
			gain_index--;
		}                               // 50                                       
		else if ((    (train.f0a_max >= dfe_res_f0a_high_thres) || 
										//6
					  ((train.f0a_max >= dfe_res_f0a_low_thres) && (/*train.dfe_saturate ||*/ train.oe_saturate)) ||
																		//55
					  (max(abs16(sum_vref_top),abs16(sum_vref_bot)) > tag_VREF_RES_HIGH_THRES) 				  
                 ) 
	        	&& (gain_index < (gain_table_size-1)))
		{
			if(credit==0) //Credit is for variation, but no need for now. 
				gain_index++;
			else
				credit--;
		}
		else if (short_flag && max(abs16(sum_vref_top),abs16(sum_vref_bot)) > tag_VREF_RES_HIGH_THRES 
			&& reg_VREF_SHIFT_LANE_1_0 < 3)
		{
			reg_VREF_SHIFT_LANE_1_0++;
		}
		//else if (((reg_VREF_SHIFT_LANE_1_0 > 1 &&
		//           train.f0a_max >= dfe_res_f0a_high_thres) ||
		//          train.f0a_saturate) &&
		//         (gain_index == gain_table_size - 1))
		else
		{
			// 20200116 John
			//break;
			if(train.dfe_saturate==0) {
				credit++;				
				DBG_Printf(" =====> #%d:credit=%d", step_number, credit);
			}
			
		}
		
		
	}
	
	#if _DBG_OUTER_EYE
		if (train.outer_eye > tag_DFE_OUTER_EYE_THRES && !short_flag && rate_mode == HR)
		{
				DBG_Printf("\r\nCTLE Bypass Activated");
                #ifdef _56G_7NM
                reg_CTLE_BYPASS1_EN_LANE = 1;
                #else //#ifdef _56G_7NM
                reg_CTLE_BYPASS1_EN_LANE_1_0 = 1;
                #endif // #else //#ifdef _56G_7NM
				train.c = 3;//c 15, 14, 13...9 pw
				Set_Rx_FFE();
				short_flag = 1;
		}
	#endif
	
		if((lnx_TRAIN_DEBUG2_LANE_7_0 == 0) && 
           #ifdef _56G_7NM
           (reg_CTLE_BYPASS1_EN_LANE==0) && 
           #else //#ifdef _56G_7NM
           (reg_CTLE_BYPASS1_EN_LANE_1_0==0) && 
           #endif // #else //#ifdef _56G_7NM
           (train.c==0) && ((train.f0a_max >= dfe_res_f0a_high_thres) || 
								((train.f0a_max >= dfe_res_f0a_low_thres) && (train.dfe_saturate || train.oe_saturate)) ||
						(max(abs16(sum_vref_top),abs16(sum_vref_bot)) > tag_VREF_RES_HIGH_THRES ) ) )
		{
            #ifdef _56G_7NM
            reg_CTLE_BYPASS1_EN_LANE = 1;
            #else //#ifdef _56G_7NM
            reg_CTLE_BYPASS1_EN_LANE_1_0 = 1;
            #endif // #else //#ifdef _56G_7NM
			if (pam2_en)
				short_flag = 0;
			else
				short_flag = 1;
			step_number = 0;
		}
		else
		{
			DBG_Printf(", ***Break!!");
			break;
		}	
	
	}
	
	c_index = gain_index;
	cds_call = CDS_EN_DEFAULT;
	tag_DFE_LOAD_EN = 1;
	tag_DFE_SAVE_EN = 1;
	
	if(tag_CDR_PHASE_OPT_EN) {	

		if (pam2_en){
			opt.phase_offset_data = 0;
		}
		else{
			opt.phase_offset_data = -30; //-30' degree from cal_ph //-60;
		} 
		train.phase_offset_data = opt.phase_offset_data; 
	}
//#if 0
//	while (1)
//	{
//		if(max(abs16(sum_vref_top),abs16(sum_vref_bot)) < tag_VREF_RES_LOW_THRES && c_index < 19 && c_index > 0)
//			c_index --;
//		//else if(max(abs16(sum_vref_top),abs16(sum_vref_bot)) > (tag_VREF_RES_HIGH_THRES - 5) && c_index > 0 && c_index < 19)
//		else if(max(abs16(sum_vref_top),abs16(sum_vref_bot)) > tag_VREF_RES_HIGH_THRES && c_index > 0 && c_index < 19)
//			c_index ++;
//		else
//			break;
//#if _DEBUG
//		DBG_Printf("c_ndx=%d\n", c_index);
//#endif
//		train.c = gt1_c[c_index];
//		Set_Rx_FFE();
//		dfe_cdr_phase_opt();
//		
//	}
//#endif
	
}

void update_opt_trx_ffe(){
	#if _DEBUG
    //DBG_Printf("\r\n++(update_opt_trx_ffe) opt.eo=%d train.eo=%d, opt.f0t=%d train.f0t=%d", opt.eo, train.eo, opt.f0t, train.f0t);
    //DBG_Printf(" train_g0/g1/gn1(%d,%d,%d) opt(%d,%d,%d)",train.g0_index,train.g1_index,train.gn1_index,opt.g0_index,opt.g1_index,opt.gn1_index );
	#endif

    if ( (   opt.r == train.r && opt.c == train.c
         && opt.phase_offset_data == train.phase_offset_data
         && opt.g0_index == train.g0_index  && opt.gn1_index == train.gn1_index  && opt.g1_index == train.g1_index
         && opt.tx_preset_index == train.tx_preset_index
        ) && !tag_SAME_SET_ALWAYS_UPDATE &&
        ( tag_SAME_SET_NO_UPDATE || 
            (opt.level > train.level) || // OPT level better
            ( opt.level == train.level && // OPT eye better
            ( ((opt.eo >= train.eo) && ctrl_rx_train_on) ||
              ((opt.f0t >= train.f0t) && ctrl_tx_train_on)))) )
	{
		// do nothing
	#if _DEBUG
       // DBG_Printf("~UPDATE");
	#endif	
	}else{
	#if _DEBUG
       // DBG_Printf("UPDATE");
	#endif
        train2opt();
        //print_train();
        //reg_MCU_DEBUGB_LANE_7_0 = reg_MCU_DEBUGB_LANE_7_0 + 1;
    }

}

void dfe_cdr_phase_opt(void){
	//DBG_Printf("\r\n++(dfe_cdr_phase_opt)");// ctrl_cdr_phase_on=%d opt_phase=%d",ctrl_cdr_phase_on, opt_phase_os);
	if( cmx_TRAIN_SIM_EN ) return;

    #if(tag_CDR_OPT_PHASE_BEFORE_DFE) //1
	   train.phase_offset_data = opt.phase_offset_data;
	   #if _DEBUG
	   //DBG_Printf("\r\n++(dfe_cdr_phase_opt) opt_phase_offset=%d", cdr.opt_phase_offset);
	   #endif
	   phase_control_func();
	  // reg_MCU_DEBUG5_LANE_7_0 = 0xff;
	#endif
	
	dfe_adaptation();
	
	//DBG_Printf("\r\nctrl_cdr_phase_on=%d ",ctrl_cdr_phase_on);

	if(ctrl_cdr_phase_on ) {
		cdr_phase_opt();
		ctrl_cdr_phase_on = 0;
	}

}

void train_status_reset(void){
	//uint8_t	i;

	lnx_TRAIN_DONE_LANE = 0;
	lnx_TRAIN_PASS_LANE = 0;
	
	// -- Control
    ctrl_rx_only_mode = !do_train; 
    ctrl_cdr_phase_on = 0;
    ctrl_trx_train_done = 0;
    ctrl_trx_train_pass = 0;
    ctrl_rx_train_done = 0;
    ctrl_tx_train_done = 0;
    ctrl_rx_train_on = 0;
    ctrl_tx_train_on = 0;
    ctrl_trx_ffe_updated = 0;
    //ctrl_num_blind_loop = 0;
    //ctrl_step_res_dfe = 1;
	ctrl_num_big_loop = 0;

	#ifndef USE_DMA_DFE
    // -- CDR Phase Optimization
	cdr.num_count = 0;
	cdr.direction = 0; // go left in the beginning
	cdr.train_f0p = 0;
	cdr.opt_level = 0;
	cdr.opt_f0p = 0;
	cdr.opt_phase_offset = 0;
	cdr.ini_phase_offset = 0;
	cdr.ini_level = 0;
	cdr.ini_f0p = 0;
	cdr.become_worse = 0;
	cdr.phase_small = 0;
	cdr.phase_large = 0;
	cdr.advanced_clock_align_converged = 0;

    // -- TX
	//tx.status_detected = 1; // whether the TX status can be detected
	tx_blind_training = 0; // whether in TX blind training
	tx_ffe_updated = 0; // indicated whether FFE is updated
	tx_num_tx_loop = 0; // the number of TX training loops	
    tx_become_worse = 0;
    tx_num_count = 0;
    tx_direction = 1;
/*
	tx.ini_g0_index = tx.g0_index_preset;
	tx.ini_gn1_index = tx.gn1_index_preset;
	tx.ini_g1_index = tx.g1_index_preset;
	tx.ini_index_is_max = 0;

	tx.gn1_index_small = tx.gn1_index_preset;
	tx.gn1_index_large = tx.gn1_index_preset;
	tx.g1_index_small = tx.g1_index_preset;
	tx.g1_index_large = tx.g1_index_preset;
*/
	// initial value from PHY top in real design

	tx.g0_is_max = 0;
	tx.g0_is_min = 0;
	tx.gn1_is_max = 0;
	tx.gn1_is_min = 0;
	tx.g1_is_max = 0;
	tx.g1_is_min = 0;

    tx.train_overboost = 0;
    tx.opt_overboost = 0;

    // -- RX
	rx.blind_training = 0; // whether in RX blind training
	//rx.ffe_training_on = 0; // turn on/off FFE training
	//rx.dc_gain_triger = 0; // whether DC gain control is triggered
	//rx.dc_gain_done = 0; // if DC gain control is done
	//rx.dc_gain_success = 0; // if DC gain control is successes
	//rx.stage = 3; // indicate the current stage
	//rx.index = 0; // the current index in a FFE training set
	//rx.step_size = 0; // the step size of binary search in Stage 0
	//rx.num_round = 0; // the counter of rounds in each stage
	//rx.step_two = 0; // enable/disable Step two of Stage 0 or 1
	//rx.step_one = 0; // enable/disable Step one of Stage 0 or 1
	//rx.c_updated = 0; // indicate whether the value of C is updated
	//for (i=0;i<16;i++) rx.ffe_set_index[i] = 0; // the index of FFE training set
	//rx.size_ffe_set = 0; // the length of FFEs in the training set
	rx.ffe_updated = 0; // indicate whether the index of RX FFE is updated
	//rx.rc_updated = 0; 
	//rx.ffe_index = 0; // the temporarily saved RX FFE index
	rx.ffe_index2 = 0; //  // another temporarily saved RX FFE index
	//rx.set_opt_update = 0; // indicate the global or set optimal data is used for comparison with training data
	//rx.direction = 0; // the direction during Stage 0

	//rx.become_worse = 0;
	//rx.r_small = 0;
	//rx.r_large = 0;
	//rx.c_small = 0;
	//rx.c_large = 0;   

    rx.train_overboost = 0;
    rx.opt_overboost = 0;

    //reset dfe_res
    /*dfe_f0_res_sel = 3;
    dfe_res_f1 = 3;
    dfe_f2_res_sel = 1;
    dfe_f34_res_sel = 1;
    dfe_f567_res_sel = 1;*/

    // -- OPT
	//opt.r = tag_RX_RXFFE_R_INI; // the index of R
	//opt.c = tag_RX_RXFFE_C_INI; //15 the index of C
	//opt.rx_ffe_index = (tag_RX_RXFFE_C_INI<<4) | tag_RX_RXFFE_R_INI;//tag_RX_RXFFE_INDEX_INI; // the index of RX FFE
	opt.excellent_eo = 0; // indicate whether the EO is excellent
	opt.good_eo = 0; // indicate whether the EO is good
	//opt.poor_eo = 0;
	opt.dfe_saturate = 0;
	opt.dfe_saturate = 0;
	opt.saturated = 0; // indicate whether saturated
	opt.eye_check_pass = 0; // wheather eye check is passed
	opt.eo = 0; // value of eye open
	opt.f0 = 0x20; // value of F0
	opt.f1 = 0;
	opt.f2 = 0;
	opt.f3 = 0;
	opt.f4 = 0;
	opt.f5 = 0;
	opt.f6 = 0;
	opt.f7 = 0;
	opt.fn1 = 0; // value of F-1
	opt.f0a = 0x20; // value of F0A (F0 - F-1)
	opt.f0t = 0;
	//opt_phase_os = cal_phase; 
	opt.level = 0; // level of TRX FFE	
	
	#else
	memset0((uint8_t *)&opt, sizeof(Status_Train_t) + sizeof(Status_TX_t) + sizeof(Status_RX_t));
	#endif

	memset0((uint8_t *)&cds56.f, sizeof(Status_CDS_56G_flat_t));
	
	opt.f0 = 0x20; // value of F0
	opt.f0a = 0x20; // value of F0A (F0 - F-1)
	
	//---
	//phase_fine_adapt_run_index = 0;
	//phase_accu_adapt_run_index = 0;
	
	//---
	
	if(phy_mode == 4) //ethernet
		opt.tx_preset_index = 2;
	else if(phy_mode == 3) //pcie
		opt.tx_preset_index = 5;
	else
		opt.tx_preset_index = 3;	
	
	/*tx_reset(train.tx_preset_index);
	dfe_cdr_phase_opt();*/
	//update_opt_trx_ffe();

	//
	if (do_train) {
		opt.g0_index = 128;
		opt.g1_index = 128;
		opt.gn1_index = 128;
		opt.gn2_index = 128;
	}
	
	if(cmx_TRAIN_SIM_EN) lnx_FAST_DFE_TIMER_EN_LANE = 1;
	
	/*lnx_TX_TRAIN_FAIL_INT_LANE = 0;
	lnx_TX_TRAIN_COMPLETE_INT_LANE = 0;
	lnx_TX_TRAIN_STATUS_DET_TIMEOUT_INT_LANE = 0; 	
	*/
	// --
	r2_adj_on = 0;

	opt2train();

	// reset phase to cal phase with phase_control_mode=0	
		
	train_db_step = 0;

	rx_rl2_adapt_en = 0;
	rx_phase_adapt_en = 0;
	rx_ctle_adapt_en = 0;

}

void opt2train(void) {

	memcpy((uint8_t *)&train, (uint8_t *)&opt, sizeof(Status_Train_t));

	Set_Rx_FFE();
	
}

void train2opt() {

	memcpy((uint8_t *)&opt, (uint8_t *)&train, sizeof(Status_Train_t));
	
}

void train2optrcd() {

	memcpy((uint8_t *)&optrcd, (uint8_t *)&train, sizeof(Status_Train_t));
}


//__code uint8_t bin2grey[] = { 0, 1, 3, 2, 6, 7, 5, 4, 12, 13, 15, 14, 10, 11, 9, 8, };

//CTLE table
__code uint8_t Cap_sel_Table_g[]   = { 0, 1, 1, 2, 2, 6, 6, 7, 7, 4, 12, 15, 14, 11, 9, 8, 8, 8 }; // gray code
                                     //0, 1, 1, 3, 3, 4, 4, 5, 5, 7, 8,  10, 11, 13, 14,15,15,15
__code uint8_t Cap_sel1_extra_Table[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 3, 7 };
__code uint8_t Cap_sel2_e_Table[]  = { 0, 0, 2, 2, 4, 4, 8, 8, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15 };
__code uint8_t Res_sel_Table[]     = { 13, 12, 11, 10, 10, 9, 9, 9, 8, 8, 7, 6, 5, 4, 4, 3 }; 
__code uint8_t Res_sel2_e_Table[]  = { 0, 2, 4, 5, 4, 4, 3, 2, 2, 1, 1, 1, 2, 2, 0, 1 };

void Set_Rx_FFE(void){
	uint8_t r, c;

	#ifdef _56G_7NM
	if(cmx_BYPASS_CTLE_CTRL) return;
	#endif
	
	r = train.r;
	c = train.c;
	train.rx_ffe_index = (c<<4) + r;
	reg_RXTRAIN_R_IDX_LANE_3_0 = r;
	reg_RXTRAIN_C_IDX_LANE_7_0 = c;

	reg_CTLE_RES1_SEL_LANE_3_0 = Res_sel_Table[r];
	if(r2_adj_on!=1) {
		reg_CTLE_RES2_SEL_LANE_3_0 = Res_sel2_e_Table[r];
	}
	#if defined _56G_7NM 
	reg_CTLE_CAP1_SEL_LANE_3_0 = Cap_sel_Table_g[c]; //gray code
	#else
	reg_CTLE_CAP1_SEL_G_LANE_3_0 = Cap_sel_Table_g[c]; //gray code	
	#endif
	reg_CTLE_CAP1_SEL_EXTRA_LANE_2_0 = Cap_sel1_extra_Table[c];
	reg_CTLE_CAP2_SEL_LANE_3_0 = Cap_sel2_e_Table[c];

#if _DEBUG
	//DBG_Printf("\r\n Set_FFE: r=%d c=%d: ana_r1=%d c1=%d", r, c, reg_CTLE_RES1_SEL_LANE_3_0, reg_CTLE_CAP1_SEL_LANE_3_0 );
#endif

}

//#if 0
//#define SQ_RD	((reg_DIG_TEST_BUS_15_0_b1&0x80)==0x80)
//bool read_sq(void) {
//	bool rd_sq = 1;
//	
//	//workaround for hardware bug
//	save_TESTBUS_SEL_HI0_lo = reg_TESTBUS_SEL_HI0_5_0_b0;
//	save_TESTBUS_SEL_HI0_hi = reg_TESTBUS_SEL_HI0_5_0_b1;
//	save_TESTBUS_SEL_LO0 = reg_TESTBUS_SEL_LO0_5_0;
//	
//	reg_TESTBUS_SEL_HI0_5_0_b0 = 2; 
//	reg_TESTBUS_SEL_HI0_5_0_b1 = 3; 
//	reg_TESTBUS_SEL_LO0_5_0 = 1; 	
//
//	rd_sq = SQ_RD;
//	
//	reg_TESTBUS_SEL_HI0_5_0_b0 = save_TESTBUS_SEL_HI0_lo; 
//	reg_TESTBUS_SEL_HI0_5_0_b1 = save_TESTBUS_SEL_HI0_hi; 
//	reg_TESTBUS_SEL_LO0_5_0 = save_TESTBUS_SEL_LO0; 	
//
//	return rd_sq;	
//}
//
//
//void sq_auto_train_enable(void) {
//	uint8_t rd_sq = 0;
//	
//	rd_sq = read_sq();
//	
//	if(pre_sq_rd != rd_sq) { 	
//		pre_sq_rd = rd_sq;
//		if(rd_sq==0 && reg_TX_TRAIN_ENABLE_LANE==0) { //assert tx_train			
//			#if _DEBUG
//			DBG_Printf("\r\n Detect SQ=0, start SQ Auto txTrain--" );
//			#endif
//			reg_TX_TRAIN_ENABLE_LANE = 1;
//		}
//	}
//
//}
//
//void sq_wait(void) {
//	#ifdef _DEBUG
//	//DBG_Printf("\r\n txtrain start sq wait..");
//	#endif
//	
//	timeout_start(500); //0.5uS	
//	while( read_sq()==1 ) {
//		if(timeout) break;
//	}
//}
//#endif

void set_ctle_tune(uint8_t val) {

	if(cmx_BYPASS_CTLE_TUNE) return;
	
	reg_CTLE_CURRENT2_SEL_LANE_3_0 = val; //change to no gray code
	reg_CTLE_RL2_SEL_LANE_3_0 = val; 
}
	
//uint8_t get_ctle_tune(){
	//uint8_t i;
	//for(i=0;i<16;i++){
	//	if(reg_CTLE_CURRENT2_SEL_LANE_3_0==i)
	//		break;
	//}
	//return i;
//}


