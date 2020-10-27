/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file TRX_Train.c
* \purpose trx train
* \History
*	12/03/2015 Heejeong Ryu		Initial 
*/
#define _DEBUG _DBG_TRXTRAIN
#include "common.h"


void link_train_complete(void) {
	timeout_start(5000); //5mS
	do_train = 0;
	
	if( cmx_PIPE4_EN==1 )
	 reg_TX_FFE_TRAIN_DONE_LANE = 1;

	 reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 1;		
	reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 1;
	while( reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE ) { //wait for PIPE deassert.
	   	if(lnx_SQ_AUTO_TRAIN_LANE) {
			#if _DEBUG
			//DBG_Printf("\r\n Finish SQ Auto txTrain >>>");
			#endif			
			reg_TX_TRAIN_ENABLE_LANE = 0;
			break;
		}

	   if( lnx_TX_TRAIN_STATUS_DET_TIMER_ENABLE_LANE==1 && timeout ) break;
	} 
	timeout_stop;

	if( ctrl_trx_train_pass==0) {
		reg_TX_TRAIN_FAILED_LANE = 1;
		lnx_TX_TRAIN_FAIL_INT_LANE = 1;
	}
	else {
		reg_TX_TRAIN_FAILED_LANE = 0;
		lnx_TX_TRAIN_FAIL_INT_LANE = 0;
	}

	reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 0;
	reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 0;	
	reg_TX_TRAIN_FAILED_LANE = 0;
	
}

void auto_train_complete(void) {

	train_comp = 1; 
	request_local_status(reg_LOCAL_STATUS_FIELD_LANE_15_0);  
	reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 1;
	
	// check tx side train_comp
	timeout_start(5000); //5mS
	while((reg_REMOTE_STATUS_VALID_ISR_LANE==0 || ((reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b1&0x80)!=0x80)) ){
		if( lnx_TX_TRAIN_STATUS_DET_TIMER_ENABLE_LANE==1) {
			if(timeout || TMR1 ==0 ) {
				lnx_TX_TRAIN_STATUS_DET_TIMEOUT_INT_LANE = 1;
				break;
			}
		}
		#if _DEBUG
		DBG_Printf("=");
		#endif			
	}
	timeout_stop;
	if( ctrl_trx_train_pass==0 ) {
		reg_TX_TRAIN_FAILED_LANE = 1;
		lnx_TX_TRAIN_FAIL_INT_LANE = 1;
	}
	else {
		reg_TX_TRAIN_FAILED_LANE = 0;
		lnx_TX_TRAIN_FAIL_INT_LANE = 0;
	}
	
	do_train = 0;
	reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 1;	
	lnx_TX_TRAIN_COMPLETE_INT_LANE = 1;
	while( reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE ) {
		if(lnx_SQ_AUTO_TRAIN_LANE) {
			#if _DEBUG
			//DBG_Printf("\r\n Finish SQ Auto txTrain >>>");
			#endif			
			reg_TX_TRAIN_ENABLE_LANE = 0;
			break;
		}
	}  //wait for hardware check ttui transfer finish.
	reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 0;	
	reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 0;	
	reg_TX_TRAIN_FAILED_LANE = 0;	
		
}


/**
 * \module  TRX_train
 * 
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: 
 *    Output: 
*/
void TRX_Train(void) {

	if( do_train | do_rxtrain) {
		//---------
		reg_DFE_MCU_CLK_EN_LANE = 0;
		
		if(lnx_RX_TRAIN_ONLY_DFE_LANE) {
			adapt_slicer_en = lnx_ADAPT_SLICER_EN_LANE_7_0;
			adapt_data_en =	lnx_ADAPT_DATA_EN_LANE_7_0;
			dfe_hardware_cont_stop();	
			reg_DFE_TAP_SIGN_MODE_LANE = 0;
			reg_ANA_RSVD6_LANE_7_0 = 0xf0; //use DEMUX
			reg_FFE_PULSE_DIV_LANE_2_0 = 2;
			if(lnx_PHASE_CONTROL_FUNC_EN_LANE) {
				train.phase_offset_data = (int8_t)lnx_TRAIN_PH_OS_DATA_2C_LANE_7_0;
				train.phase_offset_esm = (int8_t)lnx_TRAIN_PH_OS_ESM_2C_LANE_7_0;
				ph_control_mode = tag_TRAIN_PH_CONTROL_MODE;
				phase_control_func();
			}
			reg_PIN_GPO_LANE_7_0 = 1;
			//cds = cds_table[CDS_EOMADAPT];
			//cdr_state = NORM_ON;
			//cdr_dfe_scheme();
			dfe_adaptation();
			reg_PIN_GPO_LANE_7_0 = 0;	

 		}
		else { //normal
			reg_PIN_GPO_LANE_7_0 = 1; 			
			trx_train_one_time();
			reg_PIN_GPO_LANE_7_0 = 0;	
			//reg_MCU_DEBUG_LANE_31_0_b0 = TL2;
			//reg_MCU_DEBUG_LANE_31_0_b1 = TH2; 
		}

		// txtrain complete
		if( do_train ) {
		
			if(!link_train_mode) 
				auto_train_complete();			
			else 
				link_train_complete();			    
				
			if( cmx_PIPE4_EN==1 ) {
				while(reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE);
				reg_TX_FFE_TRAIN_DONE_LANE = 0;
			}
			
			reg_TX_TRAIN_ON_LANE = 0; 
			reg_TX_TRAIN_FAILED_LANE = 0;		
        } 
 	    
		if( do_rxtrain ) {
			do_rxtrain = 0;
			reg_RX_TRAIN_COMPLETE_LANE = 1;		
			while( reg_PIN_RX_TRAIN_ENABLE_RD_LANE ); 
			reg_RX_TRAIN_COMPLETE_LANE = 0;		
			reg_RX_TRAIN_ON_LANE = 0; 
			reg_RX_TRAIN_FAILED_LANE = 0;
	    }		
		
    }
	else { //abort 
		//load dfe_tap/phase from mem data.
		opt2train();

		//pin control - no train fail, no complete
		delay(Tus);
		reg_TX_TRAIN_ON_LANE = 0; 
		reg_RX_TRAIN_ON_LANE = 0; 
	}

	train_comp = 0;  	
	timeout_stop2;
	timeout2 = 1;
	timeout = 1; 
	reg_PWM2_EN_LANE = 0; 
	reg_PWM1_EN_LANE = 0; //reset pwm_cnt to 1
	reg_PWM1_EN_LANE = 1; 
	reg_TIMER_2_SEL_LANE_1_0 = 0x01;	//use PWM1 1u unit timer

	if( lnx_CKFW_EN_LANE ) {
		reg_ANA_RSVD6_LANE_7_0 = 0xe0; //use ckfw
		reg_FFE_PULSE_DIV_LANE_2_0 = 0;
	}	
	else {
		reg_ANA_RSVD6_LANE_7_0 = 0xe8; //use REFCLK
		reg_FFE_PULSE_DIV_LANE_2_0 = 5;
	}	
		
	dfe_hardware_cont_run();

	#if(tag_edge_sampler_normal_en == 1) 
 	save_sampler_edge();
	#endif
	
	//lnx_PHASE_ADAPT_ENABLE_LANE = 1; //debug
	
	if(lnx_PATTERN_PROTECT_EN_LANE==1) pattern_protect_dis = 0;
	reg_DFE_TAP_SIGN_MODE_LANE = 1; // Analog error patch. during normal should be 1. don't want to change dfe sign.

	PHY_STATUS = ST_NORMAL; 
 
}

void trx_train_one_time(void) {

	#if _DEBUG
	DBG_Printf("\r\nTRX TRAIN Start");
	#endif
	
    trx_train_init();
	
	#if _DEBUG
	DBG_Printf("\r\nTRX TRAIN INIT Done");
	#endif
	
    while(1){
        trx_train_control();
		
		if( ctrl_trx_train_done ) break;
		
        if(ctrl_rx_train_on) {
			#if _DEBUG
		    DBG_Printf("\r\n##RX TRAIN##");
			#endif
			rx_train();
		}
        else if(ctrl_tx_train_on) {
			#if _DEBUG
		    DBG_Printf("\r\n##TX TRAIN##"); 
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
	
	int16_t tsen_dat;
	uint32_t temp32;
	
	//reg_EOM_CLK_EN_LANE = 1;
	dfe_hardware_cont_stop();	
	do_phase_adapt = 0; //disable rpta	

	#if tag_TRAIN_TIME_OUT_EN
	reg_TIMER_2_SEL_LANE_1_0 = 0x02;	////use PWM2 1m unit timer
	reg_PWM2_EN_LANE = 0;
	reg_PWM2_EN_LANE = 1;
	if(lnx_TX_TRAIN_TIMER_ENABLE_LANE && do_train) {
		timeout2_start(lnx_TRX_TRAIN_TIMER_LANE_15_0+1);
	}
	else if(lnx_RX_TRAIN_TIMER_ENABLE_LANE && do_rxtrain) {
		timeout2_start(lnx_RX_TRAIN_TIMER_LANE_15_0+1);
	}	
	#endif
	
	train_status_reset(); 
	
	ctrl_cdr_phase_on = 0;
	ctrl_rx_only_mode = do_train==0; 
	adapt_data_en = 1; // force to set both sampler to 1 tag_TRAIN_USE_D; //0
	adapt_slicer_en = 1; //tag_TRAIN_USE_S; //1

	reg_DFE_TAP_SIGN_MODE_LANE = 0;
	pattern_protect_dis = 1;
	cdr_dfe_init(); 
	reg_ANA_RSVD6_LANE_7_0 = 0xf0; //use DEMUX
	reg_FFE_PULSE_DIV_LANE_2_0 = 2;
	
	//adjust sumf_boost_target_c, cdr_midpoint_phase_os by temp
	tsen_dat = read_tsen();	
	if( tsen_dat < -259 ) { //<30' 
		sumf_boost_target_c = -85; cdr_midpoint_phase_os = 0;
	}
	else if( tsen_dat > -160 ) {// >70'
		sumf_boost_target_c = -68; cdr_midpoint_phase_os = 4;
	}
	else { 
	 sumf_boost_target_c = -76; cdr_midpoint_phase_os = 2;
    }

	//Dfe_isi_res_adapt_en = 0;
	// CDR Phase Optimization    //1                     //0  
	
	#ifdef _DEBUG
    //DBG_Printf("\r\nTRAIN_PH_CONTROL_MODE : %d ",tag_TRAIN_PH_CONTROL_MODE);	
	#endif

	if( do_train ) {
	//txffe enable
	reg_ANA_TX_EM_PEAK_EN_LANE = 1;
	reg_ANA_TX_EM_PRE_EN_LANE = 1;
	reg_ANA_TX_EM_PO_EN_LANE = 1;
	}

	// RX_init
	if (!tag_RX_NO_INIT) //0
	{
		//DBG_PS("\r\n\t -rx_init");
        train_r = tag_RX_RXFFE_R_INI;  //4
        train_c = tag_RX_RXFFE_C_INI;  //15
		Set_Rx_FFE();
		
		//reset dfe_res
		dfe_f0_res_sel = 3;
		dfe_res_f1 = 3;
		dfe_f234_res_sel = 1;
		dfe_f567_res_sel = 1;
		
		//
		train.phase_offset_esm = 0;	
		opt.phase_offset_esm = 0;
	    train.phase_offset_data = (int8_t)lnx_INI_PHASE_OFFSET_LANE_7_0; //-14; //0;  //load phase as calibration result
		opt.phase_offset_data = (int8_t)lnx_INI_PHASE_OFFSET_LANE_7_0;//-14; //0;
		
		//
		ph_control_mode = 0; // force to mode0 //tag_TRAIN_PH_CONTROL_MODE; 
		cdr.min_phase_os = (ph_control_mode == 0 || ph_control_mode == 1)? tag_CDR_MIN_PHASE_OS_MODE01:tag_CDR_MIN_PHASE_OS_MODE23;
		cdr.max_phase_os = (ph_control_mode == 0 || ph_control_mode == 1)? tag_CDR_MAX_PHASE_OS_MODE01:tag_CDR_MAX_PHASE_OS_MODE23;
	 	
		phase_control_func();

		#if _DEBUG
		print_ph_ctrl_status();
		#endif
		
		/*switch(gen_rx) 	{
		case 0:  ctrl_rx_train_mode = reg_G1_RX_TRAIN_MODE; break; 
		case 1:  ctrl_rx_train_mode = reg_G2_RX_TRAIN_MODE;  break; 
		case 2:  ctrl_rx_train_mode = reg_G3_RX_TRAIN_MODE;  break; 
		case 3:  ctrl_rx_train_mode = reg_G4_RX_TRAIN_MODE;  break;
		}*/
		ctrl_rx_train_mode = 0; 
	}	

	//dfe_cdr_phase_opt(); 

	// TX init --> moved after gain_train for txtrain stuck at the train reset
	//if (do_train) {
	//	//tx_init	
	//	if(link_train_mode==0) trainif_init();		
	//	
	//	if (tag_TX_NO_INIT==0) //0
	//	{
	//		if(cmx_PIPE4_EN==0)  tx_reset(train.tx_preset_index); //3
	//		dfe_cdr_phase_opt();
	//	}
	//}
	//dfe_cdr_phase_opt(); //??
	
    
    //move to after gaintrain
	//ctrl_cdr_phase_on = tag_CDR_PHASE_OPT_EN && tag_CDR_PHASE_OPT_FIRST_EN;
	//if (ctrl_cdr_phase_on)
	//{
	//	//DBG_PS("\r\n\t -CDR Phase Opt");
	//	dfe_cdr_phase_opt();
	//}
	
	//DBG_Printf("\r\n\t (1)train_phase_os=%d, opt_phase=%d ",train_phase_os, opt_phase_os);
	//train2opt();
	//DBG_Printf("\r\n\t (2)train_phase_os=%d, opt_phase=%d ",train_phase_os, opt_phase_os);

 	// Sweep TX Preset                0
	//if (do_train && tag_TX_SWEEP_FIRST_EN)
	//{
	//	ctrl_cdr_phase_on = 0;
	//	tx_preset_sweep();
	//}

	gain_train_with_c = tag_GAIN_TRAIN_WITH_C;   //1
	//gain_train_with_sampler = tag_GAIN_TRAIN_WITH_SAMPLER;

	#if (tag_GAIN_TRAIN_INIT_EN) //1
	{		
        train_r = tag_RXFFE_R_GAIN_TRAIN;  //3
        train_c = tag_RXFFE_C_GAIN_TRAIN;  //15
		Set_Rx_FFE();

		ctrl_cdr_phase_on = 0;
		
		dfe_res_f0a_low_thres_01 = tag_DFE_RES_F0A_LOW_THRES_01_INIT;
		dfe_res_f0a_low_thres_2 = tag_DFE_RES_F0A_LOW_THRES_2_INIT;
		dfe_res_f0a_low_thres_3 = tag_DFE_RES_F0A_LOW_THRES_3_INIT;
		dfe_res_f0a_high_thres = tag_DFE_RES_F0A_HIGH_THRES_INIT;
		
		gain_train();
		
        train_r = tag_RX_RXFFE_R_INI;  //0
        #if( tag_GAIN_TRAIN_WITH_C == 0)
		{
		train_c = tag_RX_RXFFE_C_INI; //15
		}
		#endif
		Set_Rx_FFE();
		dfe_cdr_phase_opt();		
	}
	#endif  
	
	train2opt(); 
	
	if(opt.eo < 10)  //[HR] 10 is better than 15 based on Fang's test result.
		ctrl_cdr_phase_on = tag_CDR_PHASE_OPT_EN && tag_CDR_PHASE_OPT_FIRST_EN;
	else	
		ctrl_cdr_phase_on = 0;
		
	if (ctrl_cdr_phase_on)
	{
		//DBG_PS("\r\n\t -CDR Phase Opt");
		train_r = 0; train_c = 15;
		Set_Rx_FFE();
		dfe_cdr_phase_opt();
		train2opt(); 
		
		ctrl_cdr_phase_on = 0;
		train_r = tag_RX_RXFFE_R_INI;  //0
		train_c = tag_RX_RXFFE_C_INI; //15
		Set_Rx_FFE();
		dfe_cdr_phase_opt();
	
		train2opt(); 
	}
	
	// TX init
	if (do_train) {
		//tx_init	
		if(link_train_mode==0) trainif_init();		
		
		if (tag_TX_NO_INIT==0) //0
		{
			if(cmx_PIPE4_EN==0)  tx_reset(train.tx_preset_index); //3
			dfe_cdr_phase_opt();
		}
		
		train2opt(); 
	}
	
	
    //DBG_PS("\r\ntrx_init end");
	
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
			ctrl_rx_train_on = 1; // train RX FFE in the next
			ctrl_tx_train_on = 0; // train RX FFE in the next
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
			rx.blind_training = 0; // not RX blind training
			//ptr_rx_mnr = rx_max_num_round_setting[5]; //setting5
			//HR: to skip first RX_TRAIN.
			ctrl_rx_train_on = 0; // train TX FFE in the next
			ctrl_tx_train_on = 1; // train TX FFE in the next
				
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
}

void update_dfe_res()
{
	int8_t val, dfe_res_f1_low;
	
	if (dfe_res_f1 == 0 || dfe_res_f1 == 1)
	{
		dfe_res_f1_low = tag_DFE_RES_F1_LOW_01; //20
	}
	else if (dfe_res_f1 == 2)
	{
		dfe_res_f1_low = tag_DFE_RES_F1_LOW_2; //22
	}
	else // dfe_res_f1 == 3
	{
		dfe_res_f1_low = tag_DFE_RES_F1_LOW_3; //24
		
	}
	if (abs(train.f1) < dfe_res_f1_low && dfe_f1_res_sel>0 )
	{
		dfe_f1_res_sel = dfe_f1_res_sel - 1; //	take min
	}
	else if (abs(train.f1) > tag_DFE_REA_F1_HIGH && dfe_f1_res_sel < tag_DFE_F1_RES_SEL_MAX)
	{
		dfe_f1_res_sel = dfe_f1_res_sel + 1; //	take max
	}
	
	if ( abs(train.f2) < tag_DFE_REA_F2_LOW && abs(train.f3) < tag_DFE_REA_F3_LOW && abs(train.f4) < tag_DFE_REA_F4_LOW && dfe_f234_res_sel>0 )
	{
		dfe_f234_res_sel = dfe_f234_res_sel -1; // take min;
	}
	else if ( abs(train.f2) > tag_DFE_REA_F2_HIGH || abs(train.f3) > tag_DFE_REA_F3_HIGH && abs(train.f4) > tag_DFE_REA_F4_HIGH && dfe_f234_res_sel < tag_DFE_F234_RES_SEL_MAX  )
	{
		dfe_f234_res_sel = dfe_f234_res_sel + 1;
	}
	
	if ( abs(train.f5) < tag_DFE_REA_F5_LOW && abs(train.f6) < tag_DFE_REA_F6_LOW && abs(train.f7) < tag_DFE_REA_F7_LOW && dfe_f567_res_sel>0)
	{
		dfe_f567_res_sel = dfe_f567_res_sel -1; //take min;
	}
	else if ( abs(train.f5) > tag_DFE_REA_F5_HIGH || abs(train.f6) > tag_DFE_REA_F6_HIGH && abs(train.f7) > tag_DFE_REA_F7_HIGH && dfe_f567_res_sel < tag_DFE_F567_RES_SEL_MAX )
	{
		dfe_f567_res_sel = dfe_f567_res_sel + 1;
	}
	
	/*
	val = abs(train.f8);
	val = max( abs(train.f9), val);
	val = max( abs(train.f10), val);
	val = max( abs(train.f11), val);
	val = max( abs(train.f12), val);
	val = max( abs(train.f13), val);
	val = max( abs(train.f14), val);
	val = max( abs(train.f15), val);
	
	//if (max (abs(train.f8),abs(train.f9), abs(train.f10),abs(train.f11),abs(train.f12),abs(train.f13),abs(train.f14),abs(train.f15)) < 10)
	if(val < 10  && dfe_f8to15_res_sel>0)
	{
		dfe_f8to15_res_sel = dfe_f8to15_res_sel - 1;//take min
	}
	//else if (max (abs(train.f8),abs(train.f9), abs(train.f10),abs(train.f11),abs(train.f12),abs(train.f13),abs(train.f14),abs(train.f15)) >14)
	else if (val>14 && dfe_f8to15_res_sel<tag_DFE_F8TO15_RES_SEL_MAX)
	{
		dfe_f8to15_res_sel = dfe_f8to15_res_sel + 1; //	take max
	}
	
	val = abs(train.ff1);
	val = max( abs(train.ff2), val);
	val = max( abs(train.ff3), val);
	val = max( abs(train.ff4), val);
	val = max( abs(train.ff5), val);
	val = max( abs(train.ff6), val);

	//if (max (abs(train.ff1),abs(train.ff2), abs(train.ff3),abs(train.ff4),abs(train.ff5),abs(train.ff6)) < 20)
	if ( val< 20 && dfe_ffloat_res_sel>0)
	{
		dfe_ffloat_res_sel = dfe_ffloat_res_sel - 1;
		take min
	}
	//else if (max (abs(train.ff1),abs(train.ff2), abs(train.ff3),abs(train.ff4),abs(train.ff5),abs(train.ff6)) > 28)
	else if (val> 28 && dfe_ffloat_res_sel < tag_DFE_FFLOAT_RES_SEL_MAX)
	{
		dfe_ffloat_res_sel = dfe_ffloat_res_sel + 1;
		take max
	}	
	*/
}

void trx_train_end()
{
	uint8_t num, index;
	
	#if _DEBUG
    DBG_Printf("\r\ntrx_end");            
	#endif

	#if (tag_GAIN_TRAIN_END_EN)
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
	
	#if tag_DFE_ISI_RES_ADAPT_EN==1 //1
		#if _DEBUG
		DBG_Printf("\r\n++(res_adapt)");            
		#endif
		//Dfe_isi_res_adapt_en = 1;
		//dfe_cdr_phase_opt();
		//train2opt();
		//Dfe_isi_res_adapt_en = 0;
		num = 4;
		index = 0;
		ctrl_cdr_phase_on = 0;
		for (index = 0; index < num; index ++)
		{
			dfe_cdr_phase_opt();
			update_dfe_res();
		}
		train2opt();
		
	#endif
	
	
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
	cdr.min_phase_os = (ph_control_mode == 0 || ph_control_mode == 1)? tag_CDR_MIN_PHASE_OS_MODE01:tag_CDR_MIN_PHASE_OS_MODE23;
	cdr.max_phase_os = (ph_control_mode == 0 || ph_control_mode == 1)? tag_CDR_MAX_PHASE_OS_MODE01:tag_CDR_MAX_PHASE_OS_MODE23;
	phase_control_func();	

	#if _DEBUG
	print_ph_ctrl_status();
	#endif
	
	dfe_adaptation();
	train2opt();
	
	#if ( tag_FINAL_BOTH_SAMPLER_ADAPT )  //1
		adapt_data_en = 1;
		adapt_slicer_en = 1;
		dfe_adaptation();
		train2opt();		
	#endif
	
	lnx_TRAIN_PH_OS_DATA_2C_LANE_7_0 = (uint8_t)train.phase_offset_data;
	lnx_TRAIN_PH_OS_ESM_2C_LANE_7_0 = (uint8_t)train.phase_offset_esm;
	
	ctrl_trx_train_pass = opt.good_eo; // return training pass

	tsen_dat_train = read_tsen();
	
	//reg_EOM_CLK_EN_LANE = 0; //save power
	#if _DEBUG
    //DBG_Printf("\r\ntrx_end finish");            
	#endif
	
}

#if( tag_GAIN_TRAIN_WITH_SAMPLER==0)	//0
__code const uint8_t gt0_dfe_res[] = {0, 1, 2, 3 };
__code const uint8_t gt1_dfe_res[] = {0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 };
__code const uint8_t gt1_c []      = {15, 15, 15, 15, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
__code const uint8_t gt2_dfe_res[] = {0, 1, 2, 3, 1, 2, 3 };
#else
__code const uint8_t gt2_sampler_by2[] = {1, 1, 1, 1, 0, 0, 0 }; 
__code const uint8_t gt3_dfe_res[] = {0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 2, 3 };
__code const uint8_t gt3_c []      = {15, 15, 15, 15, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 0, 0, 0};
__code const uint8_t gt3_sampler_by2 [] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0};
#endif
void gain_train(void)  //todo
{
	uint8_t step_number = 0;
	uint8_t gain_index = 0; //largest gain + smallest dfe_res
	uint8_t gain_table_size, dfe_res_f0a_low_thres;
	uint8_t gain_table_index;
	//bool 	ctrl_sampler_by2;

	#if _DEBUG
    DBG_PS("\r\n++(gain_train)");
	#endif
	#if( tag_GAIN_TRAIN_WITH_SAMPLER == 1)	
	{ //0   //22      //7
		gain_table_size = (gain_train_with_c? gt3_size: gt2_size);
		gain_table_index = (gain_train_with_c?3:2);
	}
	#else 
	{         //            1              //19       //4
		gain_table_size = (gain_train_with_c? gt1_size: gt0_size);
		gain_table_index = (gain_train_with_c?1:0);
	}
	#endif
	//DBG_Printf("\r\n\t gain_table_size=%d, gain_table_index=%d", gain_table_size,gain_table_index);
	
	while (step_number < (gain_table_size + 1))
	{
		switch (gain_table_index)
		{
		#if( tag_GAIN_TRAIN_WITH_SAMPLER==0)	
		case 0:
			ctrl_step_res_dfe = gt0_dfe_res[gain_index];
			break;
		case 1: //
			ctrl_step_res_dfe = gt1_dfe_res[gain_index];
			train_c = gt1_c[gain_index];
			break;
		#else	
		case 2:
			ctrl_step_res_dfe = gt2_dfe_res[gain_index];
			ctrl_sampler_by2 = gt2_sampler_by2[gain_index];
			//if( load_sampler(ctrl_sampler_by2) ) set_t0_dfe();
			break;
		case 3:
			ctrl_step_res_dfe = gt3_dfe_res[gain_index];
			train_c = gt3_c[gain_index];
			ctrl_sampler_by2 = gt3_sampler_by2[gain_index];
			//if( load_sampler(ctrl_sampler_by2) ) set_t0_dfe();
			break;
		#endif	
		default:
			ctrl_step_res_dfe = gt0_dfe_res[gain_index];
		}

		Set_Rx_FFE();

		//DBG_Printf("\r\n\t%d: gain_index=%d ctrl_step_res_dfe=%d, c=%d ctrl_sampler_by2=%d", step_number,gain_index,ctrl_step_res_dfe,train_c,ctrl_sampler_by2);
	
		dfe_cdr_phase_opt();	
		step_number ++;
		                  //32
						  
		//DBG_Printf(" train.f0a=%d train_dfe_saturate=%d", train.f0a,train_dfe_saturate);
		
		
		if (dfe_res_f0 == 0 || dfe_res_f0 == 1)
		{
			dfe_res_f0a_low_thres = dfe_res_f0a_low_thres_01; //36
		}
		else if (dfe_res_f0 == 2)
		{
			dfe_res_f0a_low_thres = dfe_res_f0a_low_thres_2; //41
		}
		else // dfe_res_f0 == 3
		{
			dfe_res_f0a_low_thres = dfe_res_f0a_low_thres_3; //44			
		}
	
		if ((train.f0a_max < dfe_res_f0a_low_thres) && train.dfe_saturate==0 && (gain_index >=1) )
		{
			gain_index --;
		}                               // 50                                       32
		else if (((train.f0a_max >= dfe_res_f0a_high_thres) || ((train.f0a_max >= dfe_res_f0a_low_thres) && train.dfe_saturate)) 
	        	&& (gain_index < (gain_table_size-1)))
		{
			gain_index ++;
		}
		else
		{
			break;
		}
	}
	
	
}


void update_opt_trx_ffe(){
	#if _DEBUG
    DBG_Printf("\r\n++(update_opt_trx_ffe) opt.eo=%d train.eo=%d, opt.f0t=%d train.f0t=%d", opt.eo, train.eo, opt.f0t, train.f0t);
    //DBG_Printf(" train_g0/g1/gn1(%d,%d,%d) opt(%d,%d,%d)",train.g0_index,train.g1_index,train.gn1_index,opt.g0_index,opt.g1_index,opt.gn1_index );
	#endif
    if ( (   opt_r == train_r && opt_c == train_c
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
    }
}

void dfe_cdr_phase_opt(void){
	//DBG_Printf("\r\n++(dfe_cdr_phase_opt)");// ctrl_cdr_phase_on=%d opt_phase=%d",ctrl_cdr_phase_on, opt_phase_os);
	if( BYPASS_DELAY != 0 ) return;
	
    #if(tag_CDR_OPT_PHASE_BEFORE_DFE) //1
	   train.phase_offset_data = opt.phase_offset_data;
	   #if _DEBUG
	   //DBG_Printf("\r\n++(dfe_cdr_phase_opt) opt_phase_offset=%d", cdr.opt_phase_offset);
	   #endif
	   phase_control_func();
	#endif
	
	dfe_adaptation();
	
	//DBG_Printf("\r\nctrl_cdr_phase_on=%d ",ctrl_cdr_phase_on);

	if(ctrl_cdr_phase_on ) {
		cdr_phase_opt();
	}
}

void train_status_reset(void){
	//uint8_t	i;

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
	//cdr.advanced_clock_align_converged = 0;

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

    // -- OPT
	//opt_r = tag_RX_RXFFE_R_INI; // the index of R
	//opt_c = tag_RX_RXFFE_C_INI; //15 the index of C
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
	DMASEL = DMA1; 
	DMAM0 = 0x64; //10100100
	DMAM1 = 0x1f;
	DMAS2 = 0; DMAT2 = 0; DMAC2 = 0;
	DMASA = (uint16_t )&DFE_CONTROL_2;
	DMATA = (uint16_t )&opt;
	DMAC = sizeof(Status_Train_t) + sizeof(Status_TX_t) + sizeof(Status_RX_t) - 1;
	DMASEL = 0x81; 
	while(DMASEL&0x80);

	#endif
	
/*	user control
	if(phy_mode == PCIE) 
    {
	  tx_adapt_g0_en = 0;	
      tx_adapt_gn1_en = 0;
      tx_adapt_g1_en = 0;   
	  //tx_pipe4_en = cmx_PIPE4_EN;
    }
    else {
	  tx_adapt_g0_en = 1;	
      tx_adapt_gn1_en = 1;
      tx_adapt_g1_en = 0; //1;   
	  //tx_pipe4_en = 0;
    }
*/	
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

	//
	opt.g0_index = 128;
	opt.g1_index = 128;
	opt.gn1_index = 128;
	
	// -- move to testcase??
	if(SIMENV_ON) {
		lnx_FAST_DFE_TIMER_EN_LANE = 1;
		lnx_THRE_GOOD_LANE_4_0  = 0;
	    lnx_SATURATE_DISABLE_LANE  = 1; 
	    lnx_CDRPHASE_OPT_EN_LANE  = 0;
	    lnx_THRE_POOR_LANE_2_0  = 0;
	    lnx_THRE_EXCELLENT_LANE_5_0 = 0;
	    lnx_EYE_CHECK_BYPASS_LANE  = 1;
		cmx_SKIP_CDR_DFE_SCHEME = 1; // for sim
	}

	lnx_TX_TRAIN_FAIL_INT_LANE = 0; 
	lnx_TX_TRAIN_COMPLETE_INT_LANE = 0;
	lnx_TX_TRAIN_STATUS_DET_TIMEOUT_INT_LANE = 0; 	
	lnx_TX_TRAIN_REMOTE_PATTERN_ERROR_INT_LANE = 0;
	lnx_REMOTE_MULTI_RSV_COE_REQ_ERR_INT_LANE = 0;

	// --
	r2_adj_on = 0;
	opt_r = 0;
	opt_c = 0;

	opt2train();

	// reset phase to cal phase with phase_control_mode=0	
 
}

void opt2train(void) {

	DMASEL = DMA0; 	
	DMAM0 = 0x66; //01100110
	DMAM1 = 0x1f;
	DMAS2 = 0; DMAT2 = 0; DMAC2 = 0;
	DMASA = (uint16_t )&opt;
	DMATA = (uint16_t )&train;
	DMAC = sizeof(Status_Train_t) - 1;
	DMASEL = 0x80;
	while(DMASEL&0x80);

    //train_phase_os          = opt_phase_os ;
    //cdr_phase_update(train_phase_os);
	
    train_r                 = opt_r ;
    train_c                 = opt_c ;
	Set_Rx_FFE();
	
}

void train2opt() {

	DMASEL = DMA0; 	
	DMAM0 = 0x66; //01100110
	DMAM1 = 0x1f;
	DMAS2 = 0; DMAT2 = 0; DMAC2 = 0;
	DMATA = (uint16_t )&opt;
	DMASA = (uint16_t )&train;
	DMAC = sizeof(Status_Train_t) - 1;
	DMASEL = 0x80;
	while(DMASEL&0x80);

    opt_r               = train_r;
    opt_c               = train_c;
	
}

__code uint8_t Res_sel_Table[]     = {  11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0 };
__code uint8_t Res_sel2_e_Table[]  = {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
__code uint8_t Res_sel2_o_Table[]  = {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

__code uint8_t Cap_sel_Table[]     = { 0, 0, 0, 0, 1, 3, 5, 8, 15, 15, 15, 15, 15, 15, 15, 15 };  
__code uint8_t Cap_sel2_e_Table[]  = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 5, 8, 11, 15 };
__code uint8_t Cap_sel2_o_Table[]  = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 5, 8, 11, 15 };
__code uint8_t Cap_sel2_Table[]  = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 3, 3, 3 };


void Set_Rx_FFE(void){
	//uint8_t ana_r1, ana_c1;
	uint8_t r, c;
	r = train_r;
	c = train_c;
	train.rx_ffe_index = (c<<4) + r;
	reg_FFE_RES1_SEL_LANE_3_0 = Res_sel_Table[r];
	if(r2_adj_on!=1) {
		reg_FFE_RES2_SEL_E_LANE_3_0 = Res_sel2_e_Table[r];
		reg_FFE_RES2_SEL_O_LANE_3_0 = Res_sel2_o_Table[r];
	}
	//reg_FFE_DATA_RATE_LANE_3_0  = Data_rate_Table[c]; //moved to spdtbl
    reg_FFE_CAP1_SEL_LANE_3_0   = Cap_sel_Table[c];
	if( lnx_CTLE_SET_SEL_LANE ) {
		reg_FFE_CAP2_SEL_E_LANE_3_0 = Cap_sel2_Table[c];
		reg_FFE_CAP2_SEL_O_LANE_3_0 = Cap_sel2_Table[c];	
	}
	else {
		reg_FFE_CAP2_SEL_E_LANE_3_0 = Cap_sel2_e_Table[c];
		reg_FFE_CAP2_SEL_O_LANE_3_0 = Cap_sel2_o_Table[c];
	}
	
	#if _DEBUG
	//ana_r1 = reg_FFE_RES1_SEL_LANE_3_0;
	//ana_c1 = reg_FFE_CAP1_SEL_LANE_3_0;
	//DBG_Printf("\r\n Set_FFE: r=%d c=%d: ana_r1=%d c1=%d", r, c, ana_r1, ana_c1 );
	#endif

}

#define SQ_RD	((reg_DIG_TEST_BUS_15_0_b1&0x80)==0x80)
bool read_sq(void) {
	bool rd_sq = 1;
	
	//workaround for hardware bug
	save_TESTBUS_SEL_HI0_lo = reg_TESTBUS_SEL_HI0_5_0_b0;
	save_TESTBUS_SEL_HI0_hi = reg_TESTBUS_SEL_HI0_5_0_b1;
	save_TESTBUS_SEL_LO0 = reg_TESTBUS_SEL_LO0_5_0;
	
	reg_TESTBUS_SEL_HI0_5_0_b0 = 2; 
	reg_TESTBUS_SEL_HI0_5_0_b1 = 3; 
	reg_TESTBUS_SEL_LO0_5_0 = 1; 	

	rd_sq = SQ_RD;
	
	reg_TESTBUS_SEL_HI0_5_0_b0 = save_TESTBUS_SEL_HI0_lo; 
	reg_TESTBUS_SEL_HI0_5_0_b1 = save_TESTBUS_SEL_HI0_hi; 
	reg_TESTBUS_SEL_LO0_5_0 = save_TESTBUS_SEL_LO0; 	

	return rd_sq;	
}


void sq_auto_train_enable(void) {
	uint8_t rd_sq = 0;
	
	rd_sq = read_sq();
	
	if(pre_sq_rd != rd_sq) { 	
		pre_sq_rd = rd_sq;
		if(rd_sq==0 && reg_TX_TRAIN_ENABLE_LANE==0) { //assert tx_train			
			#if _DEBUG
			DBG_Printf("\r\n Detect SQ=0, start SQ Auto txTrain--" );
			#endif
			reg_TX_TRAIN_ENABLE_LANE = 1;
		}
	}

}

void sq_wait(void) {
	#ifdef _DEBUG
	//DBG_Printf("\r\n txtrain start sq wait..");
	#endif
	
	timeout_start(500); //0.5uS	
	while( read_sq()==1 ) {
		if(timeout) break;
	}
}
 
