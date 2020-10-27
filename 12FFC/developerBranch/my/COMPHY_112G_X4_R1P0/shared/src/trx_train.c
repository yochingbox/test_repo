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
#include "driver.h"

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
	uint16_t timer_chk;
	uint8_t trx_training_num;

#ifdef _DBG_TRAIN_TIMER
	timer2_start(TRAINING_TIMER);
#endif

	lnx_TRAIN_DONE_LANE = 0;
	lnx_TRAIN_PASS_LANE = 0;
	
	bit_print_debug = 1; //added by JL

#if 0 //_DEBUG
	DBG_Printf("\r\nf0,f1,f2,f3,f4,f5,f6,f7,v_t,v_m,v_b,v_shift,foa,f0a_max,f0k,chk,e0,oe,sat,sumFtap,bst,lvl,vr_sat,");
	delay_ram(T_128us);
	DBG_Printf("r,c,r1,r2,rl2,c1,c2,vref_res,step_res,res_f2,res_f34,res_f58,res_f14,ph_ofst_a,ini_ofst,min_ofst,max_ofst,ph_uofst,ph_ref_a,bw,test_number");

	//DBG_Printf("lvl, vr_sat, r, c, r1, r2, c1, c2, vref_res, step_res, res_f1, res_f2, res_f34, res_f567, ph_ofst_a, ph_ref_a, t_g0, t_g1, t_gn1, o_g0, o_g1, o_gn1, em_pre, em_pos");
	delay_ram(T_128us);
	
	#if _DBG_TXTRAIN
	DBG_Printf(",==,fn1,fn2,g0,g1,gn1,gn2,opt_g0,opt_g1,opt_gn1,opt_gn2");
	//DBG_Printf(",to_ana_fir_c0,to_ana_fir_c1,to_ana_fir_c2,to_ana_fir_c3,to_ana_fir_c4,to_ana_fir_c5");
	DBG_Printf(",Fc0,Fc1,Fc2,Fc3,Fc4,Fc5");
#if _DBG_F0X
	DBG_Printf(",f1_qr,fn3,fn4,fn5");
#endif
	#endif

    // Added by JL
    #if _DBG_PHASE_TRAIN_ADV
    DBG_Printf(",***");
    DBG_Printf(",fn3_p1_d,fn3_p1_s,fn3_p2_d,fn3_p2_s");
    DBG_Printf(",fn3_p3_d,fn3_p3_s,fn3_p4_d,fn3_p4_s");

    DBG_Printf(",fn2_p1_d,fn2_p1_s,fn2_p2_d,fn2_p2_s");
    DBG_Printf(",fn2_p3_d,fn2_p3_s,fn2_p4_d,fn2_p4_s");

    DBG_Printf(",fn1_p1_d,fn1_p1_s,fn1_p2_d,fn1_p2_s");
    DBG_Printf(",fn1_p3_d,fn1_p3_s,fn1_p4_d,fn1_p4_s");

    DBG_Printf(",f0d_p1_d,f0d_p1_s,f0d_p2_d,f0d_p2_s");
    DBG_Printf(",f0d_p3_d,f0d_p3_s,f0d_p4_d,f0d_p4_s");

    DBG_Printf(",f1_p1_d,f1_p1_s,f1_p2_d,f1_p2_s");
    DBG_Printf(",f1_p3_d,f1_p3_s,f1_p4_d,f1_p4_s");


    DBG_Printf(",x");
    //
    #endif    
	
	/*DBG_Printf("\r\nf0, f1, f2, f3, f4, f5, f6, f7, v_t, v_m, v_b, chk, foa, f0a_max, e0, d_en, s_en, dme, dmo, dte, dto, dbe, dbo, sme, smo, ste, sto, sbe, sbo,sat, sumFtap, bst, ");
	delay_ram(T_128us);
	DBG_Printf("lvl, vr_sat, r, c, vref_res, step_res, res_f1, res_f2, res_f34, res_f567, em_pre, em_pos");
	delay_ram(T_128us);*/
#endif
	//reg_PIN_GPO_LANE_7_0 = 0x2;
	if( do_train | do_rxtrain) {
		//---------
		reg_DFE_MCU_CLK_EN_LANE = 0;
		set_dfe_cont(0);
		do_phase_adapt = 0; //disable rpta	
		//reg_MCU_DEBUG3_LANE_7_0 ++;

		
		if(lnx_RX_TRAIN_ONLY_DFE_LANE) {
			adapt_slicer_en = drv_ADAPT_SLICER_EN;
			adapt_data_en =	drv_ADAPT_DATA_EN;
			set_dfe_cont(0);	
			//reg_DFE_TAP_SIGN_MODE_LANE = 0;
			reg_PIN_GPO_LANE_7_0 = 1;
			//cds = cds_table[CDS_EN_EOMADAPT];
			//cdr_state = NORM_ON;
			//cdr_dfe_scheme();
			dfe_adaptation();
			reg_PIN_GPO_LANE_7_0 = 0;	
			//reg_MCU_DEBUG3_LANE_7_0 = reg_MCU_DEBUG3_LANE_7_0 +1;

 		}
		else { //normal
			//reg_PIN_GPO_LANE_7_0 = 1;
			trx_training_num = (rate_mode==QR) ? tag_TX_PRESET_INDEX_QR : tag_TX_PRESET_INDEX_HR;
			train.tx_preset_index = trx_training_num;
			//while(trx_training_num <= tag_MAX_TRX_TRAINING_NUM)
			//{
				reg_PIN_GPO_LANE_7_0 = 3;
				trx_train_one_time();
				//reg_PIN_GPO_LANE_7_0 = 0;
				reg_PIN_GPO_LANE_7_0 = 2;
				//timer_chk = ~TMR2;	timer_chk = 500 - timer_chk;
				//if (ctrl_trx_train_done && (!ctrl_trx_train_pass) && reg.top.tx_preset_inside_rotate && reg.tx_train_enable && (status.top.trx_training_num < reg.top.max_trx_training_num))
				//if (ctrl_trx_train_done && (!ctrl_trx_train_pass) && do_train)
				//if ((!ctrl_trx_train_pass) && do_train)
				//{
				//	trx_training_num ++;
				//	train.tx_preset_index = trx_training_num;
				//}
				//else
				//	break;
			//}
			//reg_MCU_DEBUG_LANE_31_0_b0 = TL2;
			//reg_MCU_DEBUG_LANE_31_0_b1 = TH2; 
		}
#ifdef _DBG_TRAIN_TIMER
		timer2_stop(TRAINING_TIMER);
#endif

		// txtrain complete
		if( do_train ) {	
			do_train = 0;
			while(reg_INT_REMOTE_STATUS_ACK_LANE);

			save_pt_en_lane = reg_PT_EN_LANE;
			reg_PT_EN_LANE = 1;	//to keep CDR lock, send out PRBS pattern within train_complete to train_enable=0				

                        //clear DTL clamping info before normal data transfer
                        reg_CLEAR_DTL_CLAMPING_TRIGGERED_LANE=1;
                        reg_CLEAR_DTL_CLAMPING_TRIGGERED_LANE=0;
    
                        // clear repeater mode clamping flag 
                        reg_DTX_CLAMPING_TRIGGER_CLEAR_LANE=1;
                        reg_DTX_CLAMPING_TRIGGER_CLEAR_LANE=0;

			reg_INT_TX_TRAIN_COMPLETE_LANE = 0;
			reg_INT_TX_TRAIN_COMPLETE_LANE = 1;	
			reg_INT_TX_TRAIN_COMPLETE_LANE = 0;	
						
			// Fix for datacom unplug simulation hanging: already changed in R1P1
			while(reg_TX_TRAIN_DISABLE_ISR_LANE==0); //wait for train disable assert
			reg_TX_TRAIN_DISABLE_ISR_CLEAR_LANE = 1;
			reg_TX_TRAIN_DISABLE_ISR_CLEAR_LANE = 0;
			
			delay_ram(lnx_PT_OUT_TIME_TRAIN_COMP_LANE_15_0); //wait for 100usec	(default)
			reg_PT_EN_LANE = save_pt_en_lane;	
			reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = save_pt_tx_pattern_sel_lane_5_0_b0;
			reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = save_pt_tx_pattern_sel_lane_5_0_b1;			
						
        } 
 	    
		if( do_rxtrain ) {
			do_rxtrain = 0;
                        //clear DTL clamping info before normal data transfer
                        reg_CLEAR_DTL_CLAMPING_TRIGGERED_LANE=1;
                        reg_CLEAR_DTL_CLAMPING_TRIGGERED_LANE=0;
    
                        // clear repeater mode clamping flag 
                        reg_DTX_CLAMPING_TRIGGER_CLEAR_LANE=1;
                        reg_DTX_CLAMPING_TRIGGER_CLEAR_LANE=0;
 
			reg_INT_RX_TRAIN_COMPLETE_LANE = 0;
			reg_INT_RX_TRAIN_COMPLETE_LANE = 1;
			reg_INT_RX_TRAIN_COMPLETE_LANE = 0;
	    }		
		
    }
	else { //abort 
		//load dfe_tap/phase from mem data.
		opt2train();

		//pin control - no train fail, no complete
		delay_ram(Tus);
		//reg_RX_TRAIN_ON_LANE = 0; 
	}

	lnx_TRAIN_DONE_LANE = ctrl_trx_train_done;
	lnx_TRAIN_PASS_LANE = ctrl_trx_train_pass;

	lnx_G0_INDEX_LANE_7_0 = opt.g0_index;
	lnx_G1_INDEX_LANE_7_0 = opt.g1_index;
	lnx_GN1_INDEX_LANE_7_0 = opt.gn1_index;
	lnx_GN2_INDEX_LANE_7_0 = train.gn2_index;

	PHY_STATUS = ST_NORMAL; 
	if(lnx_PATTERN_PROTECT_EN_LANE==1) pattern_protect_dis = 0;
	train_comp = 0;  	
	//timeout_stop2;
	//timeout2 = 1;
	timeout = 1; 
	reg_PWM2_EN_LANE = 0; 
	reg_PWM1_EN_LANE = 0; //reset pwm_cnt to 1
	reg_PWM1_EN_LANE = 1; 
	reg_TIMER_2_SEL_LANE_1_0 = 0x01;	//use PWM1 1u unit timer


        //save power turn off floating taps in digital and analog
        
if (tag_FLOATING_TAP_DISABLE_EN) 
	turn_off_floating_taps();
else set_dfe_cont(1);

	#if(tag_edge_sampler_normal_en == 1) 
    {	
		sampler_sel(OFST_F1P_D_E);
		f1p_e_old = get_sampler();
		sampler_sel(OFST_F1P_D_O);
		f1p_o_old = get_sampler();
	}
	#endif
	
	//lnx_PHASE_ADAPT_ENABLE_LANE = 1; //debug
	
	//if(lnx_PATTERN_PROTECT_EN_LANE==1) pattern_protect_dis = 0;
	//reg_DFE_TAP_SIGN_MODE_LANE = 1; // Analog error patch. during normal should be 1. don't want to change dfe sign.

	//PHY_STATUS = ST_NORMAL; 
    //reg_PIN_GPO_LANE_7_0 = 0;
}

void trx_train_one_time(void) {

	#if _DEBUG
	//delay_ram(T_128us);
	DBG_Printf("\r\nTRX TRAIN Start");
	//delay_ram(T_128us);
#ifdef _56GR1P1_DEV
	//debug_train_print();
	//DBG_Printf("\r\nf0, f1, f2, f3, f4, f5, f6, f7, v_t, v_m, v_b, chk, foa, f0a_max, e0, sat, sumFtap, bst, lvl, vr_sat, r, c, r1, r2, c1, c2, step_res, res_f1, res_f2, res_f34, res_f567, ph_ofst_a, ph_ref_a, t_g0, t_g1, t_gn1, o_g0, o_g1, o_gn1, em_pre, em_pos");
#endif
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
			DBG_Printf("\r\nRX TRAIN");
#endif
#ifdef SUPPORT_DUMMY_TRAIN
			if(TRAIN_SIM_EN) rx_train_dummy();
			else 
#endif
				rx_train();
		}
		else if(ctrl_tx_train_on) {
#if _DEBUG
			DBG_Printf("\r\n TX TRAIN");
#endif
#ifdef SUPPORT_DUMMY_TRAIN
			if(TRAIN_SIM_EN) tx_train_dummy();
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

	int16_t tsen_dat;
	uint32_t temp32;
	uint8_t  index;

	DBG_PS("\r\nBEGIN: trx_init()");

	//reg_EOM_CLK_EN_LANE = 1;
	//reg_MCU_DEBUG4_LANE_7_0 = 0;
	set_dfe_cont(0);	
	do_phase_adapt = 0; //disable rpta	

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

#ifdef SUPPORT_DUMMY_TRAIN
			if(TRAIN_SIM_EN) ;
			else 
#endif
{
	reg_RESET_DFE_TAP_MODE_LANE = 0;


	ctrl_cdr_phase_on = 0;
	ctrl_rx_only_mode = do_train==0; 
	adapt_data_en = 1; // force to set both sampler to 1 tag_TRAIN_USE_D; //0
	adapt_slicer_en = 1; //tag_TRAIN_USE_S; //1

	//reg_DFE_TAP_SIGN_MODE_LANE = 0;
	pattern_protect_dis = 1;
	cds_init();

	// do not reset phase when in trx_train
	if(rate_mode == QR)
		tag_RESET_PH_EN_DTL = 1;
	else
		tag_RESET_PH_EN_DTL = 0;

	cds_call = CDS_EN_DEFAULT;

	// RX_init
	if (!tag_RX_NO_INIT) //0
	{
		//DBG_PS("\r\n\t -rx_init");
		train_r = tag_RX_RXFFE_R_INI;  //0
		train_c = tag_RX_RXFFE_C_INI;  //15
		Set_Rx_FFE();
		// modified for short channel
		reg_CTLE_RL1_SEL_LANE_3_0 = 0xF;
		reg_CTLE_CURRENT1_SEL_LANE_3_0 = 0xF;

		//reset dfe_res

		//rate_mode = reg_DFE_RATE_MODE_LANE_1_0;

		//DBG_Printf("\r\n++(DFE_Final_Calculation) ---\n");
		//DBG_Printf("\r\n sum       %d %d %d %d %d %d, %d %d", sum_f0a, sum_f0, sum_f1, sum_f2, sum_f3, sum_f4, sum_f5, sum_f0d, sum_eye_check_pass);

		switch (rate_mode)
		{
			case QR:
				f1_sat_thresh = 0;
				f2_sat_thresh = tag_DFE_F2_SAT_THRES;
				dfe_f0_res_sel = 3;
				//dfe_res_f1 = 3;
				dfe_f2_res_sel = 3;
				dfe_f34_res_sel = 3;
				dfe_f5678_res_sel = 1;
				dfe_f9to14_res_sel = 1;
				//dfe_ffloat_res_sel = 1;
				dfe_ofst_res_sel = 1;
				reg_DFE_RES_VREF_LANE_1_0 = tag_VREF_RES_INI;
				reg_VREF_SHIFT_LANE_1_0 = 1;
				reg_DFE_F0X_SEL_LANE_4_0 = DFE_FX_SEL_FN2;
				break;
			case HR:
				f1_sat_thresh = tag_DFE_F2_SAT_THRES;
				f2_sat_thresh = tag_DFE_F4_SAT_THRES;
				dfe_f0_res_sel = 3;
				//dfe_res_f1 = 3;
				dfe_f2_res_sel = 3;
				dfe_f34_res_sel = 3;
				dfe_f5678_res_sel = 1;
				dfe_f9to14_res_sel = 1;
				//dfe_ffloat_res_sel = 1;
				dfe_ofst_res_sel = 1;
				reg_DFE_RES_VREF_LANE_1_0 = tag_VREF_RES_INI;
				reg_VREF_SHIFT_LANE_1_0 = 1;
				reg_DFE_F0X_SEL_LANE_4_0 = DFE_FX_SEL_FN2;
				break;
			case FR:
				break;
		}

		if(reg_DFE_PAM2_MODE_LANE)
		{
			reg_DFE_RES_DOUBLE_LANE_1_0 = 1;
			reg_DFE_F0_RES_DOUBLE_LANE = 1;
		}else
		{
			reg_DFE_RES_DOUBLE_LANE_1_0 = 0;
			reg_DFE_F0_RES_DOUBLE_LANE = 0;
		}
		//reg_DFE_RES_DOUBLE_LANE_1_0 = 1;
		//reg_DFE_F0_RES_DOUBLE_LANE = 0;

		//
		train.phase_offset_esm = 0;	
		opt.phase_offset_esm = 0;
		train.phase_offset_data = (int8_t)lnx_INI_PHASE_OFFSET_LANE_7_0; //-14; //0;  //load phase as calibration result
		opt.phase_offset_data = (int8_t)lnx_INI_PHASE_OFFSET_LANE_7_0;//-14; //0;

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
		/*if (do_train) {
			if(link_train_mode==0) train_if_init();
			prbs_checker_init ();
			if (tag_TX_NO_INIT==0) //0
			{
				tx_reset(train.tx_preset_index); //3
				dfe_cdr_phase_opt();
			}

			train2opt();
		}*/
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
		if(link_train_mode==0) train_if_init();
		prbs_checker_init ();
		if (tag_TX_NO_INIT==0) //0
		{
			cds_call = CDS_EN_FASTACQ;
			dfe_adaptation();
			tx_reset(train.tx_preset_index); //3
			dfe_adaptation();
			cds_call = CDS_EN_DEFAULT;
		}

		train2opt();
	}

	train_r = (rate_mode==QR) ? tag_RXFFE_R_GAIN_TRAIN_QR : tag_RXFFE_R_GAIN_TRAIN;  //3
	train_c = tag_RXFFE_C_GAIN_TRAIN;  //15
	Set_Rx_FFE();

		ctrl_cdr_phase_on = 0;
		//adjust sumf_boost_target_c, cdr_midpoint_phase_os by temp
	tsen_dat = read_tsen_ram();
	if( tsen_dat < -259 ) { //<30' 
		cdr_midpoint_phase_os = 0;
	}
	else if( tsen_dat > -160 ) {// >70'
		cdr_midpoint_phase_os = 4;
	}
	else { 
		cdr_midpoint_phase_os = 2;
	}
	sumf_boost_target_c = 18;
	set_ctle_tune((tsen_dat>>5)+15);
	// From Grace for ctle
	//set_ctle_tune((tsen_dat>>4)+19);

	//Dfe_isi_res_adapt_en = 0;
	// CDR Phase Optimization    //1                     //0  

#ifdef _DEBUG
	//DBG_Printf("\r\nTRAIN_PH_CONTROL_MODE : %d ",tag_TRAIN_PH_CONTROL_MODE);	
#endif

	//no need firmware control
	//if( do_train ) {
	//	//txffe enable
	//	reg_ANA_TX_EM_PEAK_EN_LANE = 1;
	//	reg_ANA_TX_EM_PRE_EN_LANE = 1;
	//	reg_ANA_TX_EM_PO_EN_LANE = 1;
	//}


	//dfe_cdr_phase_opt(); 

	gain_train_with_c = tag_GAIN_TRAIN_WITH_C;   //1
	//gain_train_with_sampler = tag_GAIN_TRAIN_WITH_SAMPLER;

#if (tag_GAIN_TRAIN_INIT_EN) //1
	{		
		train_r = (rate_mode==QR) ? tag_RXFFE_R_GAIN_TRAIN_QR : tag_RXFFE_R_GAIN_TRAIN;  //3
		train_c = tag_RXFFE_C_GAIN_TRAIN;  //15
		Set_Rx_FFE();

		ctrl_cdr_phase_on = 0;

		dfe_res_f0a_low_thres_01 = tag_DFE_RES_F0A_LOW_THRES_01_INIT;
		dfe_res_f0a_low_thres_0 = tag_DFE_RES_F0A_LOW_THRES_0_INIT;
		dfe_res_f0a_low_thres_1 = tag_DFE_RES_F0A_LOW_THRES_1_INIT;
		dfe_res_f0a_low_thres_2 = tag_DFE_RES_F0A_LOW_THRES_2_INIT;
		dfe_res_f0a_low_thres_3 = tag_DFE_RES_F0A_LOW_THRES_3_INIT;
		dfe_res_f0a_high_thres = tag_DFE_RES_F0A_HIGH_THRES_INIT;

		DBG_PS("\r\nGain Train");
		gain_train();
		if (short_flag) train_c = 0;

		if (train_r !=  tag_RX_RXFFE_R_INI) {
			train_r = tag_RX_RXFFE_R_INI;  //0
#if( tag_GAIN_TRAIN_WITH_C == 0)
			{
				train_c = tag_RX_RXFFE_C_INI; //15
			}
#endif
			Set_Rx_FFE();
			dfe_cdr_phase_opt();		
		}
	}
#endif  

	// re-adapt DFE after finishing gain train
	DBG_PS("\r\nGain Train Finalize");
	cds_call = CDS_EN_DEFAULT;
	dfe_cdr_phase_opt();		
	train2opt(); 

	if (pam4_en && !short_flag) {
		// initial phase train
		train_r = tag_RX_RXFFE_R_INI;  //0
		Set_Rx_FFE();
		ctrl_cdr_phase_on = 1;
		dfe_cdr_phase_opt();
		train2opt();
		cds_call = CDS_EN_DEFAULT;
	}

#ifdef SUPPORT_DUMMY_TRAIN
			if(TRAIN_SIM_EN) ;
			else 
#endif
    /////////////////////////////////
	//txFFE train for QR only, No need for HR and Full Rate
	if ((do_train)&&(rate_mode==QR))      	
	{
		txffe_train();
        train2opt();
        cds_call = CDS_EN_DEFAULT; //restore the previous cds_call
	}	
	/////////////////////////////////

	// [PU]: resolution training
	//DBG_PS("\r\nVref Train");
	//DBG_PS("\r\n----------");
	//vref_train();	

	/*** TEMPORARY: for benchmark ***/
	// [PU]: temporary DFE resolution train for benchmark sweeps
	ctrl_cdr_phase_on = 0;

//#define BENCHMARK_BUILD
#undef BENCHMARK_BUILD
#ifdef BENCHMARK_BUILD
	DBG_PS("\r\nDFE Res Train (F0, Vref, ISI)");
	// 10 is just a timeout protection, code should break out before that
	index = 0;
	do dfe_cdr_phase_opt();
	while (update_dfe_res(1, 1, 1) && index++ < 10);
#else
	DBG_PS("\r\nDFE Res Train (F0)");
	// 10 is just a timeout protection, code should break out before that
	index = 0;
	do dfe_cdr_phase_opt();
	while (update_dfe_res(0, 1, 0) && index++ < 10);
#endif
	train2opt();

	// Initail call CTLE Train. TODO: register option?
	if(do_train) {
	//	rx_ffe_train();
		opt2train();
	}

	//if(opt.eo < 10)  //[HR] 10 is better than 15 based on Fang's test result.
		ctrl_cdr_phase_on = tag_CDR_PHASE_OPT_EN && tag_CDR_PHASE_OPT_FIRST_EN;
	//else	
	//	ctrl_cdr_phase_on = 0;

	if (ctrl_cdr_phase_on)
	{
		//DBG_PS("\r\n\t -CDR Phase Opt");
		//train_r = 0; train_c = 15;
		//Set_Rx_FFE();
		dfe_cdr_phase_opt();
		train2opt(); 

		ctrl_cdr_phase_on = 0;
		//train_r = tag_RX_RXFFE_R_INI;  //0
		//train_c = tag_RX_RXFFE_C_INI; //15
		//Set_Rx_FFE();
		//dfe_cdr_phase_opt();
        //
		//train2opt(); 
	}

	DBG_PS("\r\nEND: trx_init()");
	}
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

	lnx_TRAIN_DONE_LANE = ctrl_trx_train_done;
}

#ifndef _112G_TRAIN
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
	
#ifndef _112G_TRAIN
	if ( abs(train.f2) < tag_DFE_REA_F2_LOW && abs(train.f3) < tag_DFE_REA_F3_LOW && abs(train.f4) < tag_DFE_REA_F4_LOW && dfe_f34_res_sel>0 )
	{
		dfe_f2_res_sel = dfe_f2_res_sel -1; // take min;
	}
	else if ( abs(train.f2) > tag_DFE_REA_F2_HIGH || abs(train.f3) > tag_DFE_REA_F3_HIGH && abs(train.f4) > tag_DFE_REA_F4_HIGH && dfe_f34_res_sel < tag_DFE_F234_RES_SEL_MAX  )
	{
		dfe_f34_res_sel = dfe_f34_res_sel + 1;
	}
#else
	if ( abs(train.f2) < tag_DFE_REA_F2_LOW && dfe_f2_res_sel>0 )
	{
			dfe_f2_res_sel = dfe_f2_res_sel -1; // take min;
	}
	else if ( abs(train.f2) > tag_DFE_REA_F2_HIGH && dfe_f2_res_sel < tag_DFE_F2_RES_SEL_MAX )
	{
		dfe_f2_res_sel = dfe_f2_res_sel + 1;
	}

	if ( abs(train.f3) < tag_DFE_REA_F3_LOW && abs(train.f4) < tag_DFE_REA_F4_LOW && dfe_f34_res_sel>0 )
	{
		dfe_f34_res_sel = dfe_f34_res_sel -1; // take min;
	}
	else if ( (abs(train.f3) > tag_DFE_REA_F3_HIGH || abs(train.f4) > tag_DFE_REA_F4_HIGH) && dfe_f34_res_sel < tag_DFE_F34_RES_SEL_MAX  )
	{
		dfe_f34_res_sel = dfe_f34_res_sel + 1;
	}
#endif
	
	if ( abs(train.f5) < tag_DFE_REA_F5_LOW && abs(train.f6) < tag_DFE_REA_F6_LOW && abs(train.f7) < tag_DFE_REA_F7_LOW && dfe_f5678_res_sel>0)
	{
		dfe_f5678_res_sel = dfe_f5678_res_sel -1; //take min;
	}
	else if ( abs(train.f5) > tag_DFE_REA_F5_HIGH || abs(train.f6) > tag_DFE_REA_F6_HIGH && abs(train.f7) > tag_DFE_REA_F7_HIGH && dfe_f5678_res_sel < tag_DFE_F567_RES_SEL_MAX )
	{
		dfe_f5678_res_sel = dfe_f5678_res_sel + 1;
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

#else

#if 0
void vref_train(void)
{
	uint8_t step_number = 0;
	uint8_t vref_res_table_size;
	uint8_t vref_res_index;

	vref_res_table_size = tag_VREF_TBL_SIZE;
	vref_res_index = tag_VREF_RES_INI;

	while (step_number < vref_res_table_size + 1)
	{
		reg_DFE_RES_VREF_LANE_1_0 = vref_res_index;
		dfe_cdr_phase_opt();
		step_number ++;

		if ((max(abs16(sum_vref_top),abs16(sum_vref_bot)) < tag_VREF_RES_LOW_THRES) && (vref_res_index >=1) )
		{
			vref_res_index --;
		}
		else if ((min(abs16(sum_vref_top),abs16(sum_vref_bot)) >= tag_VREF_RES_HIGH_THRES) && (vref_res_index < vref_res_table_size - 1))
		{
			vref_res_index ++;
		}
		else
		{
			break;
		}

	}
}
#endif

uint8_t update_dfe_res(bool vref_en, bool f0_en, bool isi_en) {
	/* 56G DFE Resolution Update */
	const int8_t f0_low_th[] = {tag_DFE_RES_F0A_LOW_01, tag_DFE_RES_F0A_LOW_01, tag_DFE_RES_F0A_LOW_2, tag_DFE_RES_F0A_LOW_3};
	const int8_t f2_low_th[] = {tag_DFE_RES_F2_LOW_01, tag_DFE_RES_F2_LOW_01, tag_DFE_RES_F2_LOW_2, tag_DFE_RES_F2_LOW_3};
	const int8_t f34_low_th[] = {tag_DFE_RES_F3TO4_LOW_01, tag_DFE_RES_F3TO4_LOW_01, tag_DFE_RES_F3TO4_LOW_2, tag_DFE_RES_F3TO4_LOW_3};
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
				f0_low_th[dfe_f0_res_sel],
				tag_DFE_RES_F0A_HIGH,
				(int8_t) train.f0a_max,
				0);
		dfe_f0_res_sel += vote;
		updated += vote ? 1 : 0;
	}
	if(vref_en) {
		vref_max = max_ram(abs((int8_t) sum_vref_top), abs((int8_t) sum_vref_bot));
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
		// f2_res
		isi_val = (rate_mode == QR) ? abs(train.f2) : abs(train.f1);
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
		isi_val = (rate_mode == QR) ?
			max_ram(abs(train.f3), abs(train.f4)) : abs(train.f2);
		vote = vote_res(
				dfe_f34_res_sel,
				tag_DFE_F34_RES_SEL_MAX,
				f34_low_th[dfe_f34_res_sel],
				tag_DFE_RES_F3TO4_HIGH,
				isi_val,
				0);
		dfe_f34_res_sel += vote; 
		updated += vote ? 1 : 0;
		// f5678_res
		isi_val = (rate_mode == QR) ?
			max_ram(max_ram(abs(train.f5), abs(train.f6)), abs(train.f7))
			: max_ram(abs(train.f3), abs(train.f4));
		vote = vote_res(
				dfe_f5678_res_sel,
				tag_DFE_F58_RES_SEL_MAX,
				tag_DFE_RES_F5TO8_LOW,
				tag_DFE_RES_F5TO8_HIGH,
				isi_val,
				0);
		dfe_f5678_res_sel += vote;
		updated += vote ? 1 : 0;
		vote = (rate_mode == HR) ? vote_res(
				dfe_f9to14_res_sel,
				tag_DFE_F914_RES_SEL_MAX,
				tag_DFE_RES_F9TO14_LOW,
				tag_DFE_RES_F9TO14_HIGH,
				max_ram(max_ram(abs(train.f5), abs(train.f6)), abs(train.f7)),
				0) : 0;
		dfe_f9to14_res_sel += vote;
		updated += vote ? 1 : 0;
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

#if 0
void update_dfe_res()
{
	int8_t dfe_res_f1_low;
	uint8_t res_f0, res_f1, res_f2, res_f3, res_f5, rate_mode; //res_f4, res_f5, res_f6, res_f7, rate_mode;
	uint8_t res_updated = 0;

	rate_mode = reg_DFE_RATE_MODE_LANE_1_0;

	// get rate-dependent resolution settings
	switch (rate_mode)
	{
		case QR:
		case HR:
			res_f0 = dfe_f0_res_sel;
			res_f1 = dfe_f2_res_sel;
			res_f2 = dfe_f34_res_sel;
			res_f3 = dfe_f5678_res_sel;
			//res_f4 = dfe_f5678_res_sel;
			res_f5 = dfe_f9to14_res_sel;
			//res_f6 = dfe_f9to14_res_sel;
			//res_f7 = dfe_f9to14_res_sel;
			break;
		case FR:
			break;
	}

/* START: New Code */	
	// F0 Resolution Adjustment
#if 0
	if (res_f0 == 0 || res_f0 == 1)
	{
		u_low_th = tag_DFE_RES_F0A_LOW_01; //20
	}
	else if (res_f0 == 2)
	{
		u_low_th = tag_DFE_RES_F0A_LOW_2; //22
	}
	else // dfe_res_f0 == 3
	{
		u_low_th = tag_DFE_RES_F0A_LOW_3; //24
	}
	if (train.f0a < 30 && res_f0>0 )
	{
		res_f0--; //	take min
		res_updated = 1;
	}
	else if (train.f0a > tag_DFE_RES_F0A_HIGH && res_f0 < tag_DFE_F0_RES_SEL_MAX)
	{
		res_f0++; //	take max
		res_updated = 1;
	}
#endif
/* END: New Code */	

	if (res_f1 == 0 || res_f1 == 1)
	{
		dfe_res_f1_low = tag_DFE_RES_F1_LOW_01; //20
	}
	else if (res_f1 == 2)
	{
		dfe_res_f1_low = tag_DFE_RES_F1_LOW_2; //22
	}
	else // dfe_res_f1 == 3
	{
		dfe_res_f1_low = tag_DFE_RES_F1_LOW_3; //24

	}
	if (abs(train.f1) < dfe_res_f1_low && res_f1>0 )
	{
		res_f1 = res_f1 - 1; //	take min
		res_updated = 1;
	}
	else if (abs(train.f1) > tag_DFE_REA_F1_HIGH && res_f1 < tag_DFE_F1_RES_SEL_MAX)
	{
		res_f1 = res_f1 + 1; //	take max
		res_updated = 1;
	}

#ifndef _112G_TRAIN
	if ( abs(train.f2) < tag_DFE_REA_F2_LOW && abs(train.f3) < tag_DFE_REA_F3_LOW && abs(train.f4) < tag_DFE_REA_F4_LOW && dfe_f34_res_sel>0 )
	{
		dfe_f2_res_sel = dfe_f2_res_sel -1; // take min;
	}
	else if ( abs(train.f2) > tag_DFE_REA_F2_HIGH || abs(train.f3) > tag_DFE_REA_F3_HIGH && abs(train.f4) > tag_DFE_REA_F4_HIGH && dfe_f34_res_sel < tag_DFE_F234_RES_SEL_MAX  )
	{
		dfe_f34_res_sel = dfe_f34_res_sel + 1;
	}
#else
	if ( abs(train.f2) < tag_DFE_REA_F2_LOW && res_f2>0 )
	{
		res_f2 = res_f2 - 1; //	take min
		res_updated = 1;
	}
	else if ( abs(train.f2) > tag_DFE_REA_F2_HIGH && res_f2 < tag_DFE_F2_RES_SEL_MAX )
	{
		res_f2 = res_f2 + 1; //	take max
		res_updated = 1;
	}

	if ( abs(train.f3) < tag_DFE_REA_F3_LOW && abs(train.f4) < tag_DFE_REA_F4_LOW && res_f3>0 )
	{
		res_f3 = res_f3 -1; // take min;
		res_updated = 1;
	}
	else if ( (abs(train.f3) > tag_DFE_REA_F3_HIGH || abs(train.f4) > tag_DFE_REA_F4_HIGH) && res_f3 < tag_DFE_F34_RES_SEL_MAX  )
	{
		res_f3 = res_f3 + 1;
		res_updated = 1;
	}
#endif

	if ( abs(train.f5) < tag_DFE_REA_F5_LOW && abs(train.f6) < tag_DFE_REA_F6_LOW && abs(train.f7) < tag_DFE_REA_F7_LOW && res_f5>0)
	{
		res_f5 = res_f5 -1; //take min;
		res_updated = 1;
	}
	else if ( abs(train.f5) > tag_DFE_REA_F5_HIGH || abs(train.f6) > tag_DFE_REA_F6_HIGH && abs(train.f7) > tag_DFE_REA_F7_HIGH && res_f5 < tag_DFE_F567_RES_SEL_MAX )
	{
		res_f5 = res_f5 + 1;
		res_updated = 1;
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
	switch (rate_mode)
		{
			case QR:

			case HR:
				dfe_f0_res_sel = res_f0;
				dfe_f2_res_sel = res_f1;
				dfe_f34_res_sel = res_f2;
				dfe_f5678_res_sel = res_f3;
				dfe_f9to14_res_sel = res_f5;
				break;
			case FR:
				break;
		}

//	return res_updated;
}
#endif

#endif

void trx_train_end()
{
	uint8_t num, index;

	if(TRAIN_SIM_EN) return; //TODO
#if _DEBUG
	DBG_Printf("\r\ntrx_end");            
#endif
#if 0
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
#endif

if (reg_DFE_PAM2_MODE_LANE){		
	
}
else {

#if tag_DFE_ISI_RES_ADAPT_EN==1 //1
#if _DEBUG
	//DBG_Printf("\r\n++(res_adapt)");
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
	cds_call = CDS_EN_RESTRAIN;
	while (update_dfe_res(1, 0, 1) && index++ < 5) dfe_cdr_phase_opt();
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
	print_ph_ctrl_status();
	#endif
	
	cds_call = CDS_EN_RESTRAIN;
	dfe_adaptation();
	train2opt();
	
	#if ( tag_FINAL_BOTH_SAMPLER_ADAPT )  //1
		adapt_data_en = 1;
		adapt_slicer_en = 1;
		cds_call = CDS_EN_FINAL;
		dfe_adaptation();
	#endif

	// revert phase reset enable to default (1) 
	tag_RESET_PH_EN_DTL = 1;

	reg_RESET_DFE_TAP_MODE_LANE = 1;

	if(do_train){
		// PRBS checking test
		for(index=0;index<lnx_PRBS_DEBUG1_LANE_7_0;index++){
			prbs_checker_start();
			prbs_checker_check_ber();
			prbs_checker_stop();
		}
		prbs_checker_uninit();
	}
	
	ctrl_trx_train_pass = opt.good_eo; // return training pass

	tsen_dat_train = read_tsen_ram();
         	
	//reg_EOM_CLK_EN_LANE = 0; //save power
	#if _DEBUG
    //DBG_Printf("\r\ntrx_end finish");            
	#endif
}

#if( tag_GAIN_TRAIN_WITH_SAMPLER==0)	//0
__code const uint8_t gt0_dfe_res[] = {0, 1, 2, 3 };
__code const uint8_t gt1_dfe_res[] = {0, 1, 2, 3, 3,  3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 };//also need to change pw
__code const uint8_t gt1_c []      = {17, 17, 17, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0}; //gain_index pw
__code const uint8_t gt2_dfe_res[] = {0, 1, 2, 3, 1, 2, 3 };
#else
#if 0
__code const uint8_t gt2_sampler_by2[] = {1, 1, 1, 1, 0, 0, 0 }; 
__code const uint8_t gt3_dfe_res[] = {0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 2, 3 };// duplicate entry here pw
__code const uint8_t gt3_c []      = {15, 15, 15, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 0, 0, 0};
__code const uint8_t gt3_sampler_by2 [] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0};
#else
__code const uint8_t gt2_sampler_by2[] = {0, 0, 0, 0, 1, 1, 1 };
__code const uint8_t gt3_dfe_res[] = {0, 1, 2, 3, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 };
__code const uint8_t gt3_c []      = {15, 15, 15, 15, 15, 15, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0,};
__code const uint8_t gt3_sampler_by2 [] = {0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
#endif
#endif

/* Gain Table */
// This table was auto-generated on: 05/24/19 19:03
// Original file: https://sp.marvell.com/central/hsio/Projects/Serdes%20DSP/Shared%20Documents/projects/112g-A/train/ctle/112G_SP4PHY_AC_01292019_02122019.xlsx
#define tag_QR_GAIN_C_TABLE_SIZE 16
__code uint8_t QR_gain_C_table[tag_QR_GAIN_C_TABLE_SIZE] = { 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, };

#define tag_HR_GAIN_C_TABLE_SIZE 18
__code uint8_t HR_gain_C_table[tag_HR_GAIN_C_TABLE_SIZE] = { 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, };

void gain_train(void)  
{
	uint8_t step_number = 0;
	uint8_t gain_index = 0, c_index = 0; //largest gain + smallest dfe_res
	uint8_t gain_table_size, dfe_res_f0a_low_thres;
	uint8_t gain_table_index;
	//bool 	ctrl_sampler_by2;
	
	if (reg_DFE_PAM2_MODE_LANE){}
	else{
	opt.phase_offset_data = -80;
	}

	if(TRAIN_SIM_EN) return;
	cds_call = CDS_EN_GAINTRAIN;
	tag_DFE_LOAD_EN = 0;
	tag_DFE_SAVE_EN = 0;

	#if _DEBUG
    //DBG_PS("\r\n++(gain_train)");
	DBG_PS("\r\n  gain_train");
	#endif
	#if( tag_GAIN_TRAIN_WITH_SAMPLER == 1)	
	{ //0   //22      //7
		gain_table_size = (gain_train_with_c? gt3_size : gt2_size); // need to change size here pw
		gain_table_index = (gain_train_with_c?3:2);
	}
	#else 
	{         //            1              //19       //4
		gain_table_size = (gain_train_with_c ? (rate_mode==QR ? tag_QR_GAIN_C_TABLE_SIZE : tag_HR_GAIN_C_TABLE_SIZE) : gt0_size);// =gt1_size=19 pw
		gain_table_index = (gain_train_with_c?1:0);//=1
    // [PU] start at DFE_RES_F0=3 if doing gain_train with C
    gain_index = 0; 
	}
	#endif
	
	short_flag = 0;
	while (step_number < (gain_table_size + 1))
	{
		switch (gain_table_index)
		{
		#if( tag_GAIN_TRAIN_WITH_SAMPLER==0)	
		case 0:
			ctrl_step_res_dfe = gt0_dfe_res[gain_index];
			break;
		case 1: //
			ctrl_step_res_dfe = 3; // hardcoded to max
			train_c = rate_mode == QR ? QR_gain_C_table[gain_index] : HR_gain_C_table[gain_index];
			break;
		#else	
		case 2:
			ctrl_step_res_dfe = gt2_dfe_res[gain_index];
			ctrl_sampler_by2 = gt2_sampler_by2[gain_index];
			//if( load_sampler(ctrl_sampler_by2) ) set_t0_dfe();
			break;
		case 3:
			//if( load_sampler(ctrl_sampler_by2) ) set_t0_dfe();
			ctrl_step_res_dfe = gt3_dfe_res[gain_index];
			train_c = gt3_c[gain_index];
			ctrl_sampler_by2 = gt3_sampler_by2[gain_index];
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

		if (dfe_res_f0 == 0 )
		{
			dfe_res_f0a_low_thres = dfe_res_f0a_low_thres_0; //36
		}
		else if (dfe_res_f0 == 1)
		{
			dfe_res_f0a_low_thres = dfe_res_f0a_low_thres_1; //41
		}
		else if (dfe_res_f0 == 2)
		{
			dfe_res_f0a_low_thres = dfe_res_f0a_low_thres_2; //41
		}
		else // dfe_res_f0 == 3
		{
			dfe_res_f0a_low_thres = dfe_res_f0a_low_thres_3; //44			
		}
	
                /* todo with new algorithm pw*/
		if ((train.f0a_max < dfe_res_f0a_low_thres) && train.dfe_saturate==0 && train.oe_saturate == 0 && (gain_index >=1) )
		{
			gain_index--;
		}                               // 50                                       32
		else if (((train.f0a_max >= dfe_res_f0a_high_thres) || 
                          ((train.f0a_max >= dfe_res_f0a_low_thres) && (train.dfe_saturate || train.oe_saturate)) ||
		          (max_ram(abs16(sum_vref_top),abs16(sum_vref_bot)) > tag_VREF_RES_HIGH_THRES )
                         ) 
	        	&& (gain_index < (gain_table_size-1)))
		{
			gain_index++;
		}
		else if (max_ram(abs16(sum_vref_top),abs16(sum_vref_bot)) > tag_VREF_RES_HIGH_THRES 
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
			break;
		}
	}
#if 0
	if (train.outer_eye > tag_DFE_OUTER_EYE_THRES && !short_flag && rate_mode == HR)
	{
			DBG_Printf("\r\nCTLE Bypass Activated");
			reg_CTLE_BYPASS1_EN_LANE = 1;
			train_c = 3;//c 15, 14, 13...9 pw
			Set_Rx_FFE();
			short_flag = 1;
	}
#endif


	if (!reg_DFE_PAM2_MODE_LANE && opt.level==0 && opt.eo==0 && train_c==0)
	{
		DBG_Printf("\r\nCTLE Bypass Activated");
		reg_CTLE_BYPASS1_EN_LANE = 1;
		Set_Rx_FFE();
		short_flag = 1;

	}

	c_index = gain_index;
	cds_call = CDS_EN_DEFAULT;
	tag_DFE_LOAD_EN = 1;
	tag_DFE_SAVE_EN = 1;
	opt.phase_offset_data = 0;
	train.phase_offset_data = 0;
#if 0
	while (1)
	{
		if(max(abs16(sum_vref_top),abs16(sum_vref_bot)) < tag_VREF_RES_LOW_THRES && c_index < 19 && c_index > 0)
			c_index --;
		//else if(max(abs16(sum_vref_top),abs16(sum_vref_bot)) > (tag_VREF_RES_HIGH_THRES - 5) && c_index > 0 && c_index < 19)
		else if(max_ram(abs16(sum_vref_top),abs16(sum_vref_bot)) > tag_VREF_RES_HIGH_THRES && c_index > 0 && c_index < 19)
			c_index ++;
		else
			break;
#if _DEBUG
		DBG_Printf("c_ndx=%d\n", c_index);
#endif
		train_c = gt1_c[c_index];
		Set_Rx_FFE();
		dfe_cdr_phase_opt();
		
	}
#endif
	
}

void txffe_train(void) 
{
    uint8_t i;
    	
	//Check EO first
	//ctrl_cdr_phase_on = 1;
	//dfe_cdr_phase_opt();
	//ctrl_cdr_phase_on = 0;
    DBG_PS("\r\r\nopt_f0p=%d\n", cdr.opt_f0p);
    
	if (cdr.opt_f0p<2)
	{        
        DBG_PS("\rStart: Training for Eye Open ==============================================\n");

		cds_call = CDS_EN_DEFAULT;      

		/////////////////////////////////////////////////
		//tx FFE 2 (TBD)
		/////////////////////////////////////////////////
		/*
		for (i=0;i<=3;i++)//i==3 is enough for now
		{            
		DBG_PS("\r\ngn1 gn2 adj i=%d-----------------------", i); 

		//req_local_ctrl(CE_NORMAL, 0, 0, 0, 1);//increase gn2
		req_local_ctrl(CE_NORMAL, 0, 2, 0, 0);//reduce g0 
		req_local_ctrl(CE_NORMAL, 0, 0, 0, 1);//increase gn2            
		dfe_adaptation();
		req_local_ctrl(CE_NORMAL, 0, 0, 2, 0);//reduce gn1   
		req_local_ctrl(CE_NORMAL, 0, 2, 0, 0);//reduce g0                         
		//req_local_ctrl(CE_NORMAL, 0, 0, 2, 0);//reduce gn1                                                                       
		dfe_adaptation();                           
		//cdr_phase_opt_init();	
		//cdr_phase_maxf0p();
		//DBG_PS("\nopt_f0p=%d\n", cdr.opt_f0p); 
		}
		//cdr_phase_opt_init();	
		//cdr_phase_maxf0p();
		//DBG_PS("\r\r\nopt_f0p=%d\n", cdr.opt_f0p);

		//gn1 and g1 adjustment
		for (i=0;i<=1;i++)
		{            
		DBG_PS("\r\ngn1 g1 adj i=%d-----------------------", i); 

		req_local_ctrl(CE_NORMAL, 1, 0, 0, 0);//increase g1 
		//dfe_adaptation();           
		req_local_ctrl(CE_NORMAL, 0, 0, 2, 0);//reduce gn1                       
		//req_local_ctrl(CE_NORMAL, 0, 0, 1, 0);//increase gn1
		//req_local_ctrl(CE_NORMAL, 2, 0, 0, 0);//reduce g1            
		dfe_adaptation();                              
		//cdr_phase_opt_init();	
		//cdr_phase_maxf0p();
		//DBG_PS("\nopt_f0p=%d\n", cdr.opt_f0p); 
		}

		req_local_ctrl(CE_NORMAL, 0, 2, 0, 0);//reduce g0                       
		req_local_ctrl(CE_NORMAL, 1, 0, 0, 0);//increase g1                                        
		dfe_adaptation();   
		*/  
		
		/////////////////////////////////////////////////
		//tx FFE 3
		/////////////////////////////////////////////////

		DBG_PS("\r\ngn2 g1 adj -----------------------");      
		for (i=0;i<=3;i++)//i==3 is enough for now
		{            
			//DBG_PS("\r\ngn2 g1 adj i=%d-----------------------", i);             
			req_local_ctrl(CE_NORMAL, 0, 2, 0, 0);//reduce g0                          
			req_local_ctrl(CE_NORMAL, 0, 0, 0, 1);//increase gn2
			dfe_adaptation();
			req_local_ctrl(CE_NORMAL, 0, 2, 0, 0);//reduce g0                           
			req_local_ctrl(CE_NORMAL, 2, 0, 0, 0);//reduce g1                                                              
			dfe_adaptation();

			/*
			ctrl_cdr_phase_on = 1;
			dfe_cdr_phase_opt();
			ctrl_cdr_phase_on = 0;
			if (cdr.opt_f0p>5)
			{
			   DBG_PS("\nopt_f0p=%d\n", cdr.opt_f0p);
			   DBG_PS("\nTxTrain is done\n");
			   break;
			}
			*/
		}		
		ctrl_cdr_phase_on = 1;
		dfe_cdr_phase_opt();
		ctrl_cdr_phase_on = 0;
		DBG_PS("\r\r\nopt_f0p=%d\n", cdr.opt_f0p); 
        
		if (cdr.opt_f0p<6)
		{
		   DBG_PS("\r\ng0 g1 adj -----------------------");               
		   for (i=0;i<=0;i++)//i==0 is enough for now
		   {                            
			 req_local_ctrl(CE_NORMAL, 0, 2, 0, 0);//reduce g0                       
			 req_local_ctrl(CE_NORMAL, 2, 0, 0, 0);//reduce g1                                        
			 dfe_adaptation(); 
		   }
		   ctrl_cdr_phase_on = 1;
		   dfe_cdr_phase_opt();
		   ctrl_cdr_phase_on = 0;
		   DBG_PS("\r\r\nopt_f0p=%d\n", cdr.opt_f0p);
		} 
        DBG_PS("\rEnd: Training for Eye Open ==============================================\n");        
	}
    else
    {
        DBG_PS("\rEye is open already. No Tx FFE training for eye open!\n"); 	    
    }
}

void update_opt_trx_ffe(){
	#if _DEBUG
    //DBG_Printf("\r\n++(update_opt_trx_ffe) opt.eo=%d train.eo=%d, opt.f0t=%d train.f0t=%d", opt.eo, train.eo, opt.f0t, train.f0t);
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
        //reg_MCU_DEBUGB_LANE_7_0 = reg_MCU_DEBUGB_LANE_7_0 + 1;
    }

}

void dfe_cdr_phase_opt(void){
	//DBG_Printf("\r\n++(dfe_cdr_phase_opt)");// ctrl_cdr_phase_on=%d opt_phase=%d",ctrl_cdr_phase_on, opt_phase_os);
	if( TRAIN_SIM_EN ) return;

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
#ifndef _112G_TRAIN
	DMASEL = DMA1; 
	DMAM0 = 0x64; //10100100
	DMAM1 = 0x1f;
	DMAS2 = 0; DMAT2 = 0; DMAC2 = 0;
	DMASA = (uint16_t )&DFE_CONTROL_2;
	DMATA = (uint16_t )&opt;
	DMAC = sizeof(Status_Train_t) + sizeof(Status_TX_t) + sizeof(Status_RX_t) - 1;
	DMASEL = 0x81; 
	while(DMASEL&0x80);
#else
	memset0((uint8_t *)&opt, sizeof(Status_Train_t) + sizeof(Status_TX_t) + sizeof(Status_RX_t));
#endif
	#endif
	
	//---
	//phase_fine_adapt_run_index = 0;
	//phase_accu_adapt_run_index = 0;
	
	//---
	
	/*if(phy_mode == 4) //ethernet
		opt.tx_preset_index = 2;
	else if(phy_mode == 3) //pcie
		opt.tx_preset_index = 5;
	else
		opt.tx_preset_index = 3;*/
	opt.tx_preset_index = train.tx_preset_index;
	
	/*tx_reset(train.tx_preset_index);
	dfe_cdr_phase_opt();*/
	//update_opt_trx_ffe();

	//
	opt.g0_index = 128;
	opt.g1_index = 128;
	opt.gn1_index = 128;
	opt.gn2_index = 128;
	
	/*lnx_TX_TRAIN_FAIL_INT_LANE = 0;
	lnx_TX_TRAIN_COMPLETE_INT_LANE = 0;
	lnx_TX_TRAIN_STATUS_DET_TIMEOUT_INT_LANE = 0; 	
	*/

	/*if(reg_ETHERNET_MODE_LANE_1_0 == 0x02)	pam4_en = 1;
	else pam4_en = 0;*/
	if(reg_TX_PAM2_EN_LANE == 1)	pam4_en = 0;
	else pam4_en = 1;

	// --
	r2_adj_on = 0;

	opt2train();

	// reset phase to cal phase with phase_control_mode=0	
 
}

void opt2train(void) {

#ifndef _112G_TRAIN
	DMASEL = DMA0; 	
	DMAM0 = 0x66; //01100110
	DMAM1 = 0x1f;
	DMAS2 = 0; DMAT2 = 0; DMAC2 = 0;
	DMASA = (uint16_t )&opt;
	DMATA = (uint16_t )&train;
	DMAC = sizeof(Status_Train_t) - 1;
	DMASEL = 0x80;
	while(DMASEL&0x80);
#else
	memcpy((uint8_t *)&train, (uint8_t *)&opt, sizeof(Status_Train_t));
#endif
    //train_phase_os          = opt_phase_os ;
    //cdr_phase_update(train_phase_os);
	
    train_r                 = opt_r ;
    train_c                 = opt_c ;
	Set_Rx_FFE();
	
}

void train2opt() {

#ifndef _112G_TRAIN
	DMASEL = DMA0; 	
	DMAM0 = 0x66; //01100110
	DMAM1 = 0x1f;
	DMAS2 = 0; DMAT2 = 0; DMAC2 = 0;
	DMATA = (uint16_t )&opt;
	DMASA = (uint16_t )&train;
	DMAC = sizeof(Status_Train_t) - 1;
	DMASEL = 0x80;
	while(DMASEL&0x80);
#else
	memcpy((uint8_t *)&opt, (uint8_t *)&train, sizeof(Status_Train_t));
#endif
    opt_r               = train_r;
    opt_c               = train_c;
	
}

//CTLE table pw 
//TODO: move to XDAT
__code uint8_t Cap_sel_Table[]     = { 0, 0,  0, 1, 3, 5, 7, 10, 14, 20, 24, 29, 39, 52, 63, 63, 63, 63};
__code uint8_t Cap_sel2_e_Table[]  = { 0, 0,  0, 0, 0, 0, 0, 0,  0,  0,  0,  0,  0,  0,  3,  11, 19, 31};
__code uint8_t Rl2_sel_Table[]     = { 0, 15, 8, 8, 8, 8, 8, 8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8 };
__code uint8_t Res_sel_Table[]     = { 14, 13, 13, 12, 12, 11, 11, 10, 9, 9, 8, 8, 7, 7, 6, 6};
__code uint8_t Res_sel2_e_Table[]  = { 0,  15,  7, 15,  7,  7,  0,  0, 7, 0, 7, 0, 7, 0, 7, 0};

/* QR - CTLE Table */
// This table was auto-generated on: 05/23/19 17:33
// Original file: https://sp.marvell.com/central/hsio/Projects/Serdes%20DSP/Shared%20Documents/projects/112g-A/train/ctle/112G_SP4PHY_AC_01292019_02122019.xlsx
// R
__code uint8_t QR_RS1_table[] = { 14, 14, 14, 12, 12, 12, 11, 10, 7, 8, 5, 4, 3, 1, 0, 0, };
__code uint8_t QR_RS2_table[] = { 15, 5, 0, 15, 5, 0, 0, 0, 15, 0, 15, 15, 15, 10, 15, 5, };
// C
__code uint8_t QR_CS1_table[] = { 0, 0, 0, 0, 30, 18, 2, 0, 2, 28, 2, 4, 4, 10, 10, 16, };
__code uint8_t QR_CS2_table[] = { 0, 7, 15, 0, 0, 0, 15, 7, 0, 0, 15, 7, 15, 15, 7, 7, };
__code uint8_t QR_CL1_table[] = { 5, 5, 4, 2, 7, 5, 2, 0, 0, 3, 0, 0, 0, 1, 0, 0, };

void Set_Rx_FFE(void){
	//uint8_t ana_r1, ana_c1;
	uint8_t r, c;

	r = train_r;
	c = train_c;
	train.rx_ffe_index = (c<<4) + r;
	reg_RXTRAIN_R_IDX_LANE_3_0 = r;
	reg_RXTRAIN_C_IDX_LANE_7_0 = c;

	if (rate_mode == QR) {
		// R
		reg_CTLE_RES1_SEL_LANE_3_0 = QR_RS1_table[r];
		reg_CTLE_RS2_SEL_G_P1_LANE_3_0 = QR_RS2_table[r];
		reg_CTLE_RS2_SEL_G_P2_LANE_3_0 = QR_RS2_table[r];
		reg_CTLE_RS2_SEL_G_P3_LANE_3_0 = QR_RS2_table[r];
		reg_CTLE_RS2_SEL_G_P4_LANE_3_0 = QR_RS2_table[r];
		// C
		reg_CTLE_CAP1_SEL_LANE_5_0 = QR_CS1_table[c];
		reg_CTLE_CAP2_SEL_LANE_4_0 = QR_CS2_table[c];
		reg_CTLE_CL1_CTRL_LANE_2_0 = QR_CL1_table[c];
	}
	else {
		reg_CTLE_RES1_SEL_LANE_3_0 = Res_sel_Table[r];
		if(r2_adj_on!=1) {
			reg_CTLE_RS2_SEL_G_P1_LANE_3_0 = Res_sel2_e_Table[r];
			reg_CTLE_RS2_SEL_G_P2_LANE_3_0 = Res_sel2_e_Table[r];
			reg_CTLE_RS2_SEL_G_P3_LANE_3_0 = Res_sel2_e_Table[r];
			reg_CTLE_RS2_SEL_G_P4_LANE_3_0 = Res_sel2_e_Table[r];
		}
		//reg_FFE_DATA_RATE_LANE_3_0  = Data_rate_Table[c]; //moved to spdtbl
		reg_CTLE_CAP1_SEL_LANE_5_0 = Cap_sel_Table[c];
		reg_CTLE_CAP2_SEL_LANE_4_0 = Cap_sel2_e_Table[c];
#if 0 // Enabled, RL2 adjust is done in gain train reg_CTLE_RL2_SEL_G_P1_LANE_3_0 = Rl2_sel_Table[c];
		reg_CTLE_RL2_SEL_G_P2_LANE_3_0 = Rl2_sel_Table[c];
		reg_CTLE_RL2_SEL_G_P3_LANE_3_0 = Rl2_sel_Table[c];
		reg_CTLE_RL2_SEL_G_P4_LANE_3_0 = Rl2_sel_Table[c];
		reg_CTLE_CURRENT2_SEL_G_P1_LANE_3_0 = Rl2_sel_Table[c];
		reg_CTLE_CURRENT2_SEL_G_P2_LANE_3_0 = Rl2_sel_Table[c];
		reg_CTLE_CURRENT2_SEL_G_P3_LANE_3_0 = Rl2_sel_Table[c];
		reg_CTLE_CURRENT2_SEL_G_P4_LANE_3_0 = Rl2_sel_Table[c];
#endif
		//	reg_CTLE_RL1_SEL_LANE_3_0 = LC_sel_Table[c];
		//	reg_CTLE_CURRENT1_SEL_LANE_3_0 = LC_sel_Table[c];

#if _DEBUG
		//ana_r1 = reg_FFE_RES1_SEL_LANE_3_0;
		//ana_c1 = reg_FFE_CAP1_SEL_LANE_3_0;
		//DBG_Printf("\r\n Set_FFE: r=%d c=%d: ana_r1=%d c1=%d", r, c, ana_r1, ana_c1 );
#endif
	}
}


/*void phase_control_func(void)
{
	drv_PH_OS_DAT = train.phase_offset_data;
	drv_PH_OS_ESM = train.phase_offset_esm;
}*/


#if 0
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
#endif
#ifdef _56GR1P1_DEV
void debug_train_print(void) {
	DBG_Printf("\r\nf0, f1, f2, f3, f4, f5, f6, f7, v_t, v_m, v_b, chk, foa, f0a_max, f0b, e0, sat, sumFtap, bst, lvl, vr_sat, r, c, r1, r2, c1, c2, step_res, res_f1, res_f2, res_f34, res_f567, ph_ofst_a, ph_ref_a, t_g0, t_g1, t_gn1, o_g0, o_g1, o_gn1");
}
#endif

// Added by JL
void print_header(void){
#if 1 //_DEBUG

	DBG_Printf("\r\nf0,f1,f2,f3,f4,f5,f6,f7,v_t,v_m,v_b,v_shift,foa,f0a_max,f0k,chk,e0,oe,sat,sumFtap,bst,lvl,vr_sat,");
	delay_ram(T_128us);
	DBG_Printf("r,c,r1,r2,r4,c1,c2,vref_res,step_res,res_f2,res_f34,res_f58,res_f14,ph_ofst_a,ini_ofst,min_ofst,max_ofst,ph_uofst,ph_ref_a,bw,test_number");

	//DBG_Printf("lvl, vr_sat, r, c, r1, r2, c1, c2, vref_res, step_res, res_f1, res_f2, res_f34, res_f567, ph_ofst_a, ph_ref_a, t_g0, t_g1, t_gn1, o_g0, o_g1, o_gn1, em_pre, em_pos");
	delay_ram(T_128us);
	
	#if _DBG_TXTRAIN
	DBG_Printf(",||,fn1,fn2,g0,g1,gn1,gn2,opt_g0,opt_g1,opt_gn1,opt_gn2");
	//DBG_Printf(",to_ana_fir_c0,to_ana_fir_c1,to_ana_fir_c2,to_ana_fir_c3,to_ana_fir_c4,to_ana_fir_c5");
	DBG_Printf(",Fc0,Fc1,Fc2,Fc3,Fc4,Fc5");
    
#if _DBG_F0X
	DBG_Printf(",f1_qr,fn3,fn4,fn5");
#endif    

    #endif

    #if _DBG_PHASE_TRAIN_ADV 
    // Added by JL
    DBG_Printf(",***");
    DBG_Printf(",fn3_p1_d,fn3_p1_s,fn3_p2_d,fn3_p2_s");
    DBG_Printf(",fn3_p3_d,fn3_p3_s,fn3_p4_d,fn3_p4_s");

    DBG_Printf(",fn2_p1_d,fn2_p1_s,fn2_p2_d,fn2_p2_s");
    DBG_Printf(",fn2_p3_d,fn2_p3_s,fn2_p4_d,fn2_p4_s");

    DBG_Printf(",fn1_p1_d,fn1_p1_s,fn1_p2_d,fn1_p2_s");
    DBG_Printf(",fn1_p3_d,fn1_p3_s,fn1_p4_d,fn1_p4_s");

    DBG_Printf(",f0d_p1_d,f0d_p1_s,f0d_p2_d,f0d_p2_s");
    DBG_Printf(",f0d_p3_d,f0d_p3_s,f0d_p4_d,f0d_p4_s");

    DBG_Printf(",f1_p1_d,f1_p1_s,f1_p2_d,f1_p2_s");
    DBG_Printf(",f1_p3_d,f1_p3_s,f1_p4_d,f1_p4_s");


    DBG_Printf(",x");
    //
	#endif
	
	/*DBG_Printf("\r\nf0, f1, f2, f3, f4, f5, f6, f7, v_t, v_m, v_b, chk, foa, f0a_max, e0, d_en, s_en, dme, dmo, dte, dto, dbe, dbo, sme, smo, ste, sto, sbe, sbo,sat, sumFtap, bst, ");
	delay_ram(T_128us);
	DBG_Printf("lvl, vr_sat, r, c, vref_res, step_res, res_f1, res_f2, res_f34, res_f567, em_pre, em_pos");
	delay_ram(T_128us);*/
#endif
}
//

__code uint8_t bin2grey[] = { 0, 1, 3, 2, 6, 7, 5, 4, 12, 13, 15, 14, 10, 11, 9, 8, };
void set_ctle_tune(uint8_t val) {
	uint8_t gval = bin2grey[val];
	reg_CTLE_CURRENT2_SEL_G_P1_LANE_3_0 = gval;
	reg_CTLE_CURRENT2_SEL_G_P2_LANE_3_0 = gval;
	reg_CTLE_CURRENT2_SEL_G_P3_LANE_3_0 = gval;
	reg_CTLE_CURRENT2_SEL_G_P4_LANE_3_0 = gval;
	reg_CTLE_RL2_SEL_G_P1_LANE_3_0 = gval;
	reg_CTLE_RL2_SEL_G_P2_LANE_3_0 = gval;
	reg_CTLE_RL2_SEL_G_P3_LANE_3_0 = gval;
	reg_CTLE_RL2_SEL_G_P4_LANE_3_0 = gval;
}

uint8_t get_ctle_tune(){
	uint8_t i;
	for(i=0;i<16;i++){
		if(reg_CTLE_CURRENT2_SEL_G_P1_LANE_3_0==bin2grey[i])
			break;
	}
	return i;
}

