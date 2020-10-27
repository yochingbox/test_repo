/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file rx_train.c
* \purpose rx train
* \History
*	12/03/2015 Heejeong Ryu		Initial 
*/
#define _DEBUG _DBG_RXTRAIN
#include "common.h"

/**
 * \module  
 * 
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: 
 *    Output: 
*/

/****************************************
 * RX Training
 * Inputs: 
 * Outputs:
 * Callee:
		ctrl_cdr_phase_on = (tag_CDR_PHASE_OPT_EN && (ctrl_rx_only_mode || rx.blind_training || tag_CDR_PHASE_LAST_ALWAYS)
		&& opt.level < 5);
 *      opt2train()
 *      dfe_adaptation()
 *      update_opt_trx_ffe()
*****************************************/
void rx_train()
{
	uint8_t index = 0;
	PHY_STATUS = ST_RXTRAIN;
	

	// Rx Train always starts with CDS_EN_DEFAULT
	// change later to have CDS_EN_RXTRAIN own stage
	cds_call = CDS_EN_DEFAULT;
	
	#if _DEBUG
    DBG_PS("\r\n>>RX TRAIN");
	#endif
    // -- Initial
	rx.ffe_index2 = opt.rx_ffe_index;
    opt2train();

	// initializations of parameters
	/*rx.stage = 0;
    rx.num_round = 1;
	rx.dc_gain_triger = 0;
	rx.dc_gain_done = 0;
	rx.rc_updated = 1;
	rx.c_updated = 1;*/
	ctrl_trx_ffe_updated = 0;


    /*while(1){

		//if(opt_excellent_eo && opt_saturated==0) // if excellent EO and not saturated
    	if(opt.excellent_eo && opt.saturated==0) // if excellent EO and not saturated
		{
			break;
		}
		
		//if ((&ptr_rx_mnr[rx.stage] == 0) || (rx.num_round == &ptr_rx_mnr[rx.stage]))
    	if ((rx.max_num_round[rx.stage] == 0) || (rx.num_round == rx.max_num_round[rx.stage]))
		{
			// reset some parameters
			rx.dc_gain_done = 0;
			rx.num_round = 0;
			rx.dc_gain_triger = 0;
			rx.rc_updated = 1;
			rx.ffe_training_on = 0;
			if (rx.stage == 3) // if this is the last stage, i.e., Stage 3
			{
				break; // stop
			}
			else // if not the last stage
			{
				rx.stage ++; // go to the next stage
			}
		}
		else
		{
			opt2train();
			
			{
				//rx.ffe_training_on = 1;
				rx_ffe_train();
				rx.num_round ++;
			}
		}
    }*/

	if(opt.excellent_eo && opt.saturated==0) { // if excellent EO and not saturated
		//break;
	}
	else {
		opt2train();
		
		//DBG_Printf("\r\nvref0:%x",reg_DFE_VREF_TOP_P2_SM_LANE_6_0);
//		lnx_TRAIN_DEBUG8_LANE_7_0 = reg_DFE_VREF_TOP_P2_SM_LANE_6_0;
		
		if(short_flag) {
			opt_r = 15;
			train_r = 15;
			Set_Rx_FFE();
			reg_CTLE_RL1_SEL_LANE_3_0 = 15; //tag_CTLE_RL1_SEL_SHORT;  //for debug, controled by debugc in lab
			reg_CTLE_CURRENT1_SEL_LANE_3_0 = 15; //tag_CTLE_RL1_SEL_SHORT; //for debug, controled by debugc in lab

			cds_call = CDS_EN_RECOVER;
			dfe_cdr_phase_opt();
			DBG_Printf("\r\nReset the DFE adaptation after CTLE Bypass");
		}
		else
			rx_ffe_train();
		
		//DBG_Printf("\r\nvref1:%x",reg_DFE_VREF_TOP_P2_SM_LANE_6_0);
//		lnx_TRAIN_DEBUG9_LANE_7_0 = reg_DFE_VREF_TOP_P2_SM_LANE_6_0;
		
		opt2train();
	}
   // -- RX Training End state start
	
   #if tag_RX_CAP_FINAL_ADJUST_EN //0 previous 1
		ffe_cap_final_adjust();
   #endif //tag_RX_CAP_FINAL_ADJUST_EN
	
	#if tag_RX_R_MIDPOINT_EN //0
	if (ctrl_rx_only_mode || tag_RX_MIDPOINT_LAST_ALWAYS)
		ffe_r_midpoint();	
	#endif
	#if tag_RX_C_MIDPOINT_EN //0
	if (ctrl_rx_only_mode || tag_RX_MIDPOINT_LAST_ALWAYS)
		ffe_c_midpoint();	
	#endif	

	#if tag_ADJUST_FFE_R2 //1
		if (reg_DFE_PAM2_MODE_LANE){}
		else{	
			ffe_res2_adjust();
		}
	#endif
	
    #if tag_TEMP_ADJUST_FFE_R //0
		ffe_res_temp_adjust();	
	#endif

	if (reg_DFE_PAM2_MODE_LANE){		
	}
	else {
		DBG_PS("\r\nDFE Res Train (F0, Vref) - pre-phase-train");
		// 10 is just a timeout protection, code should break out before that
		index = 0;
		cds_call = CDS_EN_RESTRAIN;
		do dfe_cdr_phase_opt();
		while (update_dfe_res(1, 1, 0) && index++ < 10);
		train2opt();
		DBG_PS("\r\nEND: DFE Res Train (F0, Vref) - pre-phase-train");
	}

    // during the last round, we would like to adapt the best CDR sampling phase
	//ctrl_cdr_phase_on = tag_CDR_PHASE_OPT_EN && ( ctrl_rx_only_mode || rx.blind_training || tag_CDR_PHASE_LAST_ALWAYS ) && (opt.level < 5);
	

	if (reg_DFE_PAM2_MODE_LANE){		
		tag_CDR_PHASE_OPT_EN = 0;
	}

	ctrl_cdr_phase_on = tag_CDR_PHASE_OPT_EN &&
		( ctrl_rx_only_mode || rx.blind_training || tag_CDR_PHASE_LAST_ALWAYS );
	adapt_data_en = tag_TRAIN_USE_D; //0
	adapt_slicer_en = tag_TRAIN_USE_S; //1
	ph_control_mode = tag_TRAIN_PH_CONTROL_MODE; 
	cdr.min_phase_os = (ph_control_mode == 0 || ph_control_mode == 1)? tag_CDR_MIN_PHASE_OS_MODE01:tag_CDR_MIN_PHASE_OS_MODE23;
	cdr.max_phase_os = (ph_control_mode == 0 || ph_control_mode == 1)? tag_CDR_MAX_PHASE_OS_MODE01:tag_CDR_MAX_PHASE_OS_MODE23;
	phase_control_func();

#ifdef _MOVE_PHASE_CDS
	dfe_adaptation();
#endif

#if _DEBUG
	//print_ph_ctrl_status();
#endif

	//opt2train();
	dfe_cdr_phase_opt();  // do the DFE and CDR phase optimization
	update_opt_trx_ffe();

	if (reg_DFE_PAM2_MODE_LANE){		
		tag_FINAL_GAIN_ADJUST = 0;
	}

	if(tag_FINAL_GAIN_ADJUST) {
		//ffe_final_gain_adjust();	
		ffe_rl_tune_adjust();
	}
	else {
		if (reg_DFE_PAM2_MODE_LANE){		
		}
		else {
		index = 0;
		DBG_PS("\r\nDFE Res Train (F0, Vref)");
		// 10 is just a timeout protection, code should break out before that
		index = 0;
		cds_call = CDS_EN_RESTRAIN;
		do dfe_cdr_phase_opt();
		while (update_dfe_res(0, 1, 0) && index++ < 10);
		train2opt();
		}
	}
	
	if(tag_RL2_ADJUST) {
		ffe_rl2_adjust();	
	}

	// set the RX_training_done flag to one
	ctrl_rx_train_done = 1; // RX training is done after going through all stages

	ctrl_trx_ffe_updated = (opt.rx_ffe_index != rx.ffe_index2);

    //print_dfe();
    //DBG_Printf("RX TRAIN RESULTS:\t R=%x C=%x EO=%x F0=%x \n\r",train_r, train_c, train.eo,train.f0);
    //DBG_Printf("RX OPT   RESULTS:\t R=%x C=%x EO=%x F0=%x \n\r",opt_r, opt_c, opt.eo,opt.f0);
}

#ifdef SUPPORT_DUMMY_TRAIN
void rx_train_dummy(void) {
	uint8_t i;
	
	PHY_STATUS = ST_RXTRAIN;

	
	// pseudo rxtrain	
	{
    
	//cdr_dfe_scheme_stage = INITIALIZATION_STAGE;
	//while(cdr_dfe_scheme_stage!=CDR_COARSE_STATE) { //DEFAULT_STATE) {
	//	cdr_dfe_scheme();
	//}
	//for(i=0; i<15; i++) 
	{
	//	reg_CTLE_CAP1_SEL_LANE_3_0++;
	//	reg_CTLE_CAP2_SEL_LANE_3_0++;
	//	reg_CTLE_CURRENT1_SEL_LANE_3_0++;
	//	reg_CTLE_CURRENT2_SEL_LANE_3_0++;
	//
	//	reg_CTLE_RES1_SEL_LANE_3_0++;
	//	reg_CTLE_RES2_SEL_LANE_3_0++;
	//	reg_CTLE_RL1_SEL_LANE_3_0++;
	//	reg_CTLE_RL2_SEL_LANE_3_0++;
	//	
	//	//reg_FFE_DATA_RATE_LANE_3_0++;
	//	
	//	reg_DFE_RES_F0_LANE_1_0++;		
	//	reg_DFE_RES_F1_LANE_1_0++;		
	//	reg_DFE_RES_F1P5_LANE_1_0++;
	//	reg_DFE_RES_F2_LANE_1_0++;	
	//	reg_DFE_RES_F34_LANE++;
	//	reg_DFE_RES_F567_LANE++;		
	//	reg_DFE_RES_F8TO10_LANE++;		
	//	reg_DFE_RES_F11TO15_LANE++;
	//	reg_DFE_RES_FLOATING_LANE++;		
	//	reg_OFST_RES_LANE++;		
		
	}

	//for(i=0; i<15; i++) 
	{
	
	//	reg_CTLE_CAP1_SEL_LANE_3_0--;
	//	reg_CTLE_CAP2_SEL_LANE_3_0--;
	//	reg_CTLE_CURRENT1_SEL_LANE_3_0--;
	//	reg_CTLE_CURRENT2_SEL_LANE_3_0--;
	//
	//	reg_CTLE_RES1_SEL_LANE_3_0--;
	//	reg_CTLE_RES2_SEL_LANE_3_0--;
	//	reg_CTLE_RL1_SEL_LANE_3_0--;
	//	reg_CTLE_RL2_SEL_LANE_3_0--;
    //
	//	//reg_FFE_DATA_RATE_LANE_3_0--;
	//	
	//	reg_DFE_RES_F0_LANE_1_0--;		
	//	reg_DFE_RES_F1_LANE_1_0--;		
	//	reg_DFE_RES_F1P5_LANE_1_0--;		
	//	reg_DFE_RES_F567_LANE--;		
	//	reg_DFE_RES_F8TO10_LANE--;		
	//	reg_DFE_RES_FLOATING_LANE--;		
	//	reg_OFST_RES_LANE--;		
		
	}
	
	}
	ctrl_rx_train_done = 1; // RX training is done after going through all stages

}
#endif       

/*#if _SUPPORT_BLIND_TRAIN
__code rx_blind_traing_c_tb[] = { 15, 15, 15, 15, 15, 15, 15, 15, 15,15,15,15,15,15,15,15 };
__code rx_blind_traing_r_tb[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8,9,10,11,12,13,14,15 };
#endif
*/
__code uint8_t rx_ffe_set_c_tb[]   = { 15, 15, 15, 15, 15, 15, 15, 15, 15,15,15,15,15,15,15,15,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};
__code uint8_t rx_ffe_set_r_tb[]   = { 0, 1, 2, 3, 4, 5, 6, 7, 8,9,10,11,12,13,14,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15 };

/*
* rx_ffe_train
*
*	ctrl_cdr_phase_on = (ctrl_rx_only_mode || (rx.blind_training && tag_CDR_PHASE_OPT_IN_BLIND))
*			&& tag_CDR_PHASE_OPT_EN && !tag_CDR_PHASE_LAST_ONLY;

*/
void rx_ffe_train(void)
{
   //uint8_t i;
   //int temp1, temp2;

	// whether to adjust CDR phase
   	ctrl_cdr_phase_on = 0; 

	// save the index of optimal TX FFE index before training
	//rx.ffe_index = opt.rx_ffe_index; //

	/*if (rx.blind_training) // if in RX blind training
	{
		// load a set of pre-defined FFEs
		//rx.size_ffe_set = 8; //tag_RX_RMAX - tag_RX_RMIN + 1; // length of FFE training set
		//for (i=0;i<rx.size_ffe_set;i++)
		//{		
		//	rx.ffe_set_index[i] = 8*tag_RX_CMAX + tag_RX_RMIN + i; // fix C and change R
		//}
	}
	else
	{*/
		//rx.size_ffe_set = 16;
		// load a set of pre-defined FFEs
		/*rx.ffe_set_index[0] = 15*8+0;
		rx.ffe_set_index[1] = 15*8+1;
		rx.ffe_set_index[2] = 15*8+2;
		rx.ffe_set_index[3] = 15*8+3;
		rx.ffe_set_index[4] = 15*8+4;
		rx.ffe_set_index[5] = 15*8+5;
		rx.ffe_set_index[6] = 15*8+6;
		rx.ffe_set_index[7] = 15*8+7;
		rx.ffe_set_index[8] = 7*8+0;
		rx.ffe_set_index[9] = 7*8+2;
		rx.ffe_set_index[10] = 7*8+4;
		rx.ffe_set_index[11] = 7*8+6;
		rx.ffe_set_index[12] = 1*8+0;
		rx.ffe_set_index[13] = 1*8+2;
		rx.ffe_set_index[14] = 1*8+4;
		rx.ffe_set_index[15] = 1*8+6;			
	}*/

	set_train(); // train the FFEs within the set

	// update DC_gain_triger
	//rx.c_updated = ((rx.ffe_index>>4) != (opt.rx_ffe_index>>4)); // C updated?
	//rx.rc_updated = (rx.ffe_index != opt.rx_ffe_index); // FFE updated?
	//rx.dc_gain_triger = 0; //(((tag_RX_DC_FAST_TRIGGER_EN && (rx.stage < 2))
		//&& ((rx.c_updated==0) && ctrl_rx_only_mode)) || ((!rx.rc_updated) && (!control.relative_eyeopen))); // dc_gain_control needed?
	
}

void set_train(void)
{
	int8_t i; 
	uint8_t rmax = short_flag ? 3 : tag_RX_RXFFE_R_MAX;
	//int sum_direction_compute;
	//reg_MCU_DEBUG4_LANE_7_0 = 0x03;
	DBG_Printf("\r\n>>> BEGIN: R Sweep");

	/* in QR (100G), we zero force F1 using the R (dc gain) 
	 * To achieve F1 ZF, we measure FP1 via F0X 
	 * F0X_SELECT must be returned to FN2 before exiting this function
	 * we also reset the opt.f1 to 64 (larger than possible), so that rx train
	 * will pick the minimum value of abs(train.f1) during set_train
	 */
	if (rate_mode == QR) {
		reg_DFE_F0X_SEL_LANE_4_0 = DFE_FX_SEL_FP1;
		opt.f1 = 64; // set to large value
		opt.eo = 0;
		opt.boost = 64;
	}	

	for (i=(rate_mode==QR) ? 0:1; i <= rmax; i++) { //32 default, 16 fast when gain_train_with_C = 1//rx.size_ffe_set) // while the index is not the last one
		// Skip R=0 intentionally

		/*#if _SUPPORT_BLIND_TRAIN
		if (rx.blind_training) 	{
			train_c = rx_blind_traing_r_tb[i];
			#if (tag_GAIN_TRAIN_WITH_C==0)  
				train_c = rx_blind_traing_c_tb[i]; // update C		
			#endif	
		}
		else
		#endif*/	
		{
			train_r = rx_ffe_set_r_tb[i];
			#if (tag_GAIN_TRAIN_WITH_C==0)  //1
			train_c = rx_ffe_set_c_tb[i]; // update C		
			#endif
		}
		if(i > 15)
			train_r = opt_r;

		Set_Rx_FFE();

		/* new added to remove repeated index*/
		//bool skip = 0;
		/*
		for (i=0; i< rx.index; i++)
		{
		if (train_rx_ffe_index == rx.ffe_set_index[i])
		{
		skip = 1;
		break;
		}
		}
		*/
		//if (!skip)
		{
			dfe_cdr_phase_opt(); // adapt DFE
			RX_FFE_Comparision(); // compare the training RX FFE with the global optimal one
		}
	#if _DEBUG
    //DBG_PS(" #%d", i);
	#endif
	}	
	//reg_MCU_DEBUG5_LANE_7_0 = i;
	DBG_Printf("\r\n>>> END: R Sweep");

	/* F0X_SELECT is returned to FN2 before exiting this function for use in
	 * TX Training */
	reg_DFE_F0X_SEL_LANE_4_0 = DFE_FX_SEL_FN2;
}
extern __code int8_t dfe_res_f0_sumFtap[];

extern __code int16_t dfe_res_f1_sumFtap[];
extern __code int16_t dfe_res_f2_sumFtap[];

bool get_train_overboost(void) {

#ifdef _56G_R1P1
	#if (tag_RX_FFE_OVERBOOST_EN == 1 )  //1
#ifndef _112G_TRAIN
	return	( (train.f1 < tag_RX_F1_OVERBOOST_THRES)                                          //3
			|| ((train.f2 < 0) && ((train.f1*dfe_res_f1_sumFtap[dfe_res_f1] + train.f2*dfe_res_f2_sumFtap[dfe_res_f2]) < tag_RX_F12_OVERBOOST_THRES)) 
			|| train.f3 < tag_RX_F3_OVERBOOST_THRES //-5
			|| train.f4 < tag_RX_F4_OVERBOOST_THRES //-1
			|| train.f5 < tag_RX_F5_OVERBOOST_THRES //-1
			|| train.sumFtap < tag_SUMF_OVERBOOST_THRES_C // train.sumFtap < ((((tag_SUMF_OVERBOOST_THRES_K*train.f0a)>>4) * dfe_res_f0_sumFtap[dfe_res_f0]) + tag_SUMF_OVERBOOST_THRES_C)
			);
#else
	return	( (train.f1 < tag_RX_F1_OVERBOOST_THRES)                                          //3
				|| ((train.f2 < 0) && ((train.f1*f1_res + train.f2*f2_res) < tag_RX_F12_OVERBOOST_THRES))
				|| train.f3 < tag_RX_F3_OVERBOOST_THRES //-5
				|| train.f4 < tag_RX_F4_OVERBOOST_THRES //-1
				|| train.f5 < tag_RX_F5_OVERBOOST_THRES //-1
				|| train.sumFtap < tag_SUMF_OVERBOOST_THRES_C || train.sumFtap < ((((tag_SUMF_OVERBOOST_THRES_K*train.f0a)>>4) * f0_res) + tag_SUMF_OVERBOOST_THRES_C)
				);
#endif
	#else
	return 0;
	#endif
#else
	return 0;
#endif

}

bool get_opt_overboost(void) {
#ifdef _56G_R1P1
	#if (tag_RX_FFE_OVERBOOST_EN==1) //1
#ifndef _112G_TRAIN
	return	( (opt.f1 < tag_RX_F1_OVERBOOST_THRES )
			|| ((opt.f2 < 0) && ((opt.f1*dfe_res_f1_sumFtap[dfe_res_f1] + opt.f2*dfe_res_f2_sumFtap[dfe_res_f2]) < tag_RX_F12_OVERBOOST_THRES))
			|| opt.f3 < tag_RX_F3_OVERBOOST_THRES 
			|| opt.f4 < tag_RX_F4_OVERBOOST_THRES 
			|| opt.f5 < tag_RX_F5_OVERBOOST_THRES 
			|| opt.sumFtap < tag_SUMF_OVERBOOST_THRES_C //opt.sumFtap < (((tag_SUMF_OVERBOOST_THRES_K*opt.f0)>>4) + tag_SUMF_OVERBOOST_THRES_C)
			);
#else
	return	( (opt.f1 < tag_RX_F1_OVERBOOST_THRES )
				|| ((opt.f2 < 0) && ((opt.f1*f1_res + opt.f2*f2_res) < tag_RX_F12_OVERBOOST_THRES))
				|| opt.f3 < tag_RX_F3_OVERBOOST_THRES
				|| opt.f4 < tag_RX_F4_OVERBOOST_THRES
				|| opt.f5 < tag_RX_F5_OVERBOOST_THRES
				|| opt.sumFtap < tag_SUMF_OVERBOOST_THRES_C
				|| opt.sumFtap < ((((tag_SUMF_OVERBOOST_THRES_K*opt.f0a)>>4)*f0_res) + tag_SUMF_OVERBOOST_THRES_C)
				);
#endif
	#else
	return 0;
	#endif	
#else
	return 0;
#endif
}

/****************************************
 * RX_FFE_Comparision
 *      compare train's performance and 
 *      save train to opt if train is better
 * Inputs: 
 *      opt/train.
 *          level
 *          eo
 *          f0a_saturate dfe_saturate
 *          f1 f2
 * Outputs:
 *      rx.ffe_updated
 * Callee:
 *      update_opt_trx_ffe()
*****************************************/
void RX_FFE_Comparision()
{
	#if _DEBUG
    //DBG_Printf("\r\n RX_FFE_Comparision\tR=%d C=%d EO=%d LVL=%d", train_r,train_c,train.eo,train.level);
	#endif
	
	
	#if (tag_RX_MIN_BOOST_MODE) //1
	{ 
		if (rate_mode == QR) {
			// QR: F1 zero-forcing
			//rx.ffe_updated = train.eo > opt.eo;
			//
			rx.ffe_updated = (train.boost < opt.boost && train.level >= opt.level) ;
		}
		else {

			if (train.f1 < 0 && opt.f1 >= 0)
			{
				rx.ffe_updated = 0;
			}
			else if (train.f1 < 0 && opt.f1 < 0)
			{
				rx.ffe_updated = (abs(train.f1) < abs(opt.f1)) && (((train.boost < opt.boost && train_c == opt_c && train.level >= opt.level )) ||
					(opt.level == 3 && train.level >= opt.level && train_c <opt_c) ||
					(train_c == opt_c && train_c <tag_RX_C_SAT_THRES && train.level == 3 &&
					((tag_DFE_SAT_PREFER_HIGH_DC && train_r>opt_r) ||
						(!tag_DFE_SAT_PREFER_HIGH_DC && train_r<opt_r))) ||
						(train.level > opt.level && tag_RX_LEVEL_PROTECTION_IN_MIN_BOOST));
			}
			else
			{
				rx.ffe_updated = ((train.boost < opt.boost && train_c == opt_c && train.level >= opt.level )) ||
					(opt.level == 3 && train.level >= opt.level && train_c <opt_c) ||
					(train_c == opt_c && train_c <tag_RX_C_SAT_THRES && train.level == 3 &&
					((tag_DFE_SAT_PREFER_HIGH_DC && train_r>opt_r) ||
						(!tag_DFE_SAT_PREFER_HIGH_DC && train_r<opt_r))) ||
						(train.level > opt.level && tag_RX_LEVEL_PROTECTION_IN_MIN_BOOST);
			}
		}
#if 0
		else {
			rx.ffe_updated = ((train.boost < opt.boost && train_c== opt_c))|| 
						(opt.level == 3 && train.level >= opt.level && train_c <opt_c) || 
					(train_c ==opt_c && train_c <tag_RX_C_SAT_THRES && train.level == 3 && 
					((tag_DFE_SAT_PREFER_HIGH_DC && train_r>opt_r) ||
					(!tag_DFE_SAT_PREFER_HIGH_DC && train_r<opt_r)) ) ||
					(train.level > opt.level && tag_RX_LEVEL_PROTECTION_IN_MIN_BOOST);
		}
#endif
	}
	#else

#ifndef _56GR1P1_TRAIN
	rx.train_overboost =  get_train_overboost();
	rx.opt_overboost = get_opt_overboost();
#endif

	if (opt.level < train.level) // inter-level compare
	{
		rx.ffe_updated = 1;
	}
	else if (opt.level == train.level) // intra-level compare
	{	

#ifdef _56GR1P1_TRAIN
		rx.train_overboost =  get_train_overboost();
		rx.opt_overboost = get_opt_overboost();
#endif
		if (train.level == 1 || train.level == 2 || train.level == 4) // intra-level compare, for level 1/2/4
		{
			rx.ffe_updated = (train.eo > (opt.eo + tag_RX_EO_FFEUPDATE_THRES)) 
                || (rx.train_overboost==0 && rx.opt_overboost && train.eo > (opt.eo - tag_RX_FFE_OVERBOOST_UPDATE_THRES))
				|| ( rx.train_overboost && rx.opt_overboost && train.eo > (opt.eo - tag_RX_FFE_OVERBOOST_UPDATE_THRES)
			       && ((( (train_r > opt_r && tag_OVERBOOST_DET_MODE==0) || (tag_OVERBOOST_DET_MODE && train.boost < opt.boost) )
                      && train_c == opt_c ) || (train_c < opt_c && train_r>= opt_r) ) ) 
                || (rx.train_overboost==0 && rx.opt_overboost==0 && train.eo > (opt.eo - tag_RX_FFE_OVERBOOST_UPDATE_THRES) &&
                   ((((train_r < opt_r && tag_UNDERBOOST_DET_MODE) || (tag_UNDERBOOST_DET_MODE==0 && train.boost < opt.boost))
                   && train_c == opt_c) || (train_c > opt_c && train_r== opt_r)));
		}
		else if (train.level == 3) // intra-level compare, level 3
		{
			rx.ffe_updated = (train.f0a_saturate==0 && opt.f0a_saturate) || (train.f0a_saturate == opt.f0a_saturate && 
			               train.eo > (opt.eo - tag_RX_FFE_OVERBOOST_UPDATE_THRES) &&
						   ( (( (tag_DFE_SAT_PREFER_HIGH_DC && train_r > opt_r) || (!tag_DFE_SAT_PREFER_HIGH_DC && train_r > opt_r)) 
						   && train_c == opt_c) || (train_c < opt_c )  ));		
		}
		else
		{
			rx.ffe_updated = 0;
		}
	}
	else
	{
		rx.ffe_updated = (train_c ==opt_c) && (train_c <tag_RX_C_SAT_THRES) &&
						  (train.level == 3) && 
						  ( (tag_DFE_SAT_PREFER_HIGH_DC && train_r > opt_r) || (!tag_DFE_SAT_PREFER_HIGH_DC && train_r > opt_r));
	}
	#endif
	#if _DEBUG
	if( rx.ffe_updated )	DBG_PS(" *** ");
	#endif
	if (rx.ffe_updated)
	{
		update_opt_trx_ffe();
	}
}

void ffe_cap_final_adjust(void) {

	#if _DEBUG
    DBG_Printf("\r\n ffe_cap_final_adjust");
	#endif

	if( tag_RX_CAP_FINAL_ALWAY_RUN || (tag_RX_CAP_FINAL_SHORT_TRACE && opt_r==tag_RX_RXFFE_R_MAX ) || (tag_RX_CAP_FINAL_LONG_TRACE && opt_r==tag_RX_RXFFE_R_MIN)) {
		
		opt2train();
		ctrl_cdr_phase_on = 0;
		dfe_cdr_phase_opt();
		
		train_c = tag_RX_RXFFE_C_MAX;
		Set_Rx_FFE();
		
		do {
			dfe_cdr_phase_opt();
	
			#if (tag_RX_MIN_BOOST_MODE) 
			rx.ffe_updated = (train.boost < opt.boost && (train.level >3 || tag_RX_CAP_FINAL_MIN_BOOST_LEVEL_PROTECT_EN ==0)) || (opt.level == 3 && train.level >= opt.level && train_c <opt_c);		
			#else

			rx.train_overboost =  get_train_overboost();
			rx.opt_overboost = get_opt_overboost();
			
			rx.ffe_updated = 
					(rx.train_overboost==0 && rx.opt_overboost && ((train.eo > (opt.eo - tag_RX_FFE_OVERBOOST_UPDATE_THRES))) || tag_RX_CAP_FINAL_EO_PROTEC_EN==0)
					|| ( rx.train_overboost && rx.opt_overboost && (train.eo > (opt.eo - tag_RX_FFE_OVERBOOST_UPDATE_THRES) || tag_RX_CAP_FINAL_EO_PROTEC_EN==0) &&  (train_c < opt_c))
					|| ( rx.train_overboost==0 && rx.opt_overboost==0 && (train.eo > (opt.eo - tag_RX_FFE_OVERBOOST_UPDATE_THRES) || tag_RX_CAP_FINAL_EO_PROTEC_EN==0) &&  (train_c > opt_c));                      
			#endif 
			
			if(rx.ffe_updated) {
				update_opt_trx_ffe();
			}
			
			if(train_c==tag_RX_RXFFE_C_MIN) break;

			train_c--;
			Set_Rx_FFE();

		
		} while(1);
	    
		opt2train();
		dfe_cdr_phase_opt();
		
	}
}

#define FFE_R2_LEVEL1	40
#define FFE_R2_LEVEL2	30
#define FFE_R2_LEVEL3	20
#define FFE_R2_LEVEL4	10

extern __code int8_t dfe_res_f0_sumFtap[];
  #if tag_ADJUST_FFE_R2 //1
void ffe_res2_adjust(void) {
	int16_t boostlevel;
   
	boostlevel = train.sumFtap - ((((int8_t)tag_SUMF_BOOST_TARGET_K) * train.f0a * dfe_res_f0_sumFtap[dfe_res_f0] )>>4) - sumf_boost_target_c;
	#if _DEBUG
    DBG_Printf("\r\n>>(ffe_res2_adjust) boostlvl = %d",boostlevel);
	#endif

	if( reg_CTLE_RES1_SEL_LANE_3_0 == 0xB) {
			if(boostlevel  > FFE_R2_LEVEL1) { //40
				//reg_CTLE_RES2_SEL_LANE_3_0 = 4;
				//reg_FFE_RES2_SEL_O_LANE_3_0 = 4;
				reg_CTLE_RES1_SEL_POST_LANE_3_0 = 4;
			}
			else if(boostlevel  > FFE_R2_LEVEL2) { //30
				//reg_CTLE_RES2_SEL_LANE_3_0 = 3;
				//reg_FFE_RES2_SEL_O_LANE_3_0 = 3;
				reg_CTLE_RES1_SEL_POST_LANE_3_0 = 3;
			}
			else if(boostlevel  > FFE_R2_LEVEL3) { //20
				//reg_CTLE_RES2_SEL_LANE_3_0 = 2;
				//reg_FFE_RES2_SEL_O_LANE_3_0 = 2;
				reg_CTLE_RES1_SEL_POST_LANE_3_0 = 2;
			}
			else if(boostlevel  > FFE_R2_LEVEL4) {
				//reg_CTLE_RES2_SEL_LANE_3_0 = 1;
				//reg_FFE_RES2_SEL_O_LANE_3_0 = 1;
				reg_CTLE_RES1_SEL_POST_LANE_3_0 = 1;
			}
			else {
			//reg_CTLE_RES2_SEL_LANE_3_0 = 0;
			//reg_FFE_RES2_SEL_O_LANE_3_0 = 0;
				reg_CTLE_RES1_SEL_POST_LANE_3_0 = 0;

			}
			r2_adj_on = 1;
		}

}
#endif

#if tag_TEMP_ADJUST_FFE_R //0
void ffe_res_temp_adjust(void) {
	int16_t tsen_dat;

	#ifdef ROM_REPLACEMENT
	tsen_dat = read_tsen_01();
	#else
	tsen_dat = read_tsen();
	#endif
	
	if( tsen_dat < -259 ) { //<30'
		if( reg_FFE_RES1_SEL_LANE_3_0 <= 9 ) reg_FFE_RES1_SEL_LANE_3_0 += 2;
		else if( reg_FFE_RES1_SEL_LANE_3_0 <= 0xa ) reg_FFE_RES1_SEL_LANE_3_0 = 0xb;		
	}
	else {
	
	
	}

}

#endif

#define tag_FINAL_GAIN_EO_THRESH 0
void ffe_final_gain_adjust(void) {
	uint8_t index;

	DBG_Printf("\r\nFinal Gain Adjust");
	cds_call = CDS_EN_RESTRAIN;
	opt2train();
	while (train_r < tag_RX_RXFFE_R_MAX && train_c < tag_RX_RXFFE_C_MAX) {
		train_r++;
		train_c++;
		Set_Rx_FFE();

		ctrl_cdr_phase_on = 0;

		index = 0;
		do dfe_cdr_phase_opt();
		while (update_dfe_res(1, 1, 0) && index++ < 5);

		if (train.eo + tag_FINAL_GAIN_EO_THRESH >= opt.eo && train.eye_check_pass
			  && !(ctrl_step_res_dfe==tag_DFE_F0_RES_SEL_MAX && train.f0a_max > tag_DFE_RES_F0A_HIGH)) {
			train2opt();
		}
		else break;
	}
	cds_call = CDS_EN_DEFAULT;
	opt2train();
}

void ffe_rl_tune_adjust() {
	uint8_t i,best;
	opt.fn1 = 63;

	DBG_Printf("\r\nRL2_TUNE Adjust");
	cds_call = CDS_EN_PHASETRAIN;
	opt2train();
	ctrl_cdr_phase_on = 0;
	best = reg_CTLE_RL2_TUNE_P1_LANE_2_0;
	for (i=0; i<8; i++){
		reg_CTLE_RL2_TUNE_P1_LANE_2_0 = i;
		reg_CTLE_RL2_TUNE_P2_LANE_2_0 = i;
		reg_CTLE_RL2_TUNE_P3_LANE_2_0 = i;
		reg_CTLE_RL2_TUNE_P4_LANE_2_0 = i;

		//do
		dfe_cdr_phase_opt();
		//while (update_dfe_res(1, 1, 0) && index++ < 5);

		if (train.level >= opt.level) {
			if (train.level == opt.level) {
				if (opt.level == 3) { 
					if (abs(train.fn1) < abs(opt.fn1)) {
						train2opt();
					//	DBG_Printf(" ***");
						best = i;
					}
				}
				else if (train.eo >= opt.eo && train.eye_check_pass) {
					train2opt();
				//	DBG_Printf(" ***");
					best = i;
				}
			}
			else {
				train2opt();
			//	DBG_Printf(" ***");
				best = i;
			}
		}
	}

	reg_CTLE_RL2_TUNE_P1_LANE_2_0 = best;
	reg_CTLE_RL2_TUNE_P2_LANE_2_0 = best;
	reg_CTLE_RL2_TUNE_P3_LANE_2_0 = best;
	reg_CTLE_RL2_TUNE_P4_LANE_2_0 = best;

	if (train.f0a_saturate)
	{
	cds_call = CDS_EN_DEFAULT;
	} 

	dfe_cdr_phase_opt();
	cds_call = CDS_EN_DEFAULT;
}

const uint8_t rl2_table[] = {0, 15, 8};
const uint8_t rl2_size = 3;
	
void ffe_rl2_adjust(void) {
	uint8_t i;
	uint8_t eo_best = 0;
	uint8_t i_best = 0;

	DBG_Printf("\r\nRL2 adjust");
	cds_call = CDS_EN_RESTRAIN;
	opt2train();
	for (i=0; i!=rl2_size; ++i) {
		reg_CTLE_RL2_SEL_G_P1_LANE_3_0 = rl2_table[i];
		reg_CTLE_RL2_SEL_G_P2_LANE_3_0 = rl2_table[i];
		reg_CTLE_RL2_SEL_G_P3_LANE_3_0 = rl2_table[i];
		reg_CTLE_RL2_SEL_G_P4_LANE_3_0 = rl2_table[i];
		reg_CTLE_CURRENT2_SEL_G_P1_LANE_3_0 = rl2_table[i];
		reg_CTLE_CURRENT2_SEL_G_P2_LANE_3_0 = rl2_table[i];
		reg_CTLE_CURRENT2_SEL_G_P3_LANE_3_0 = rl2_table[i];
		reg_CTLE_CURRENT2_SEL_G_P4_LANE_3_0 = rl2_table[i];

		ctrl_cdr_phase_on = 0;
		dfe_cdr_phase_opt();
		if (train.eo > eo_best) {
			eo_best = train.eo;
			i_best = i;
		}
	}
	reg_CTLE_RL2_SEL_G_P1_LANE_3_0 = rl2_table[i_best];
	reg_CTLE_RL2_SEL_G_P2_LANE_3_0 = rl2_table[i_best];
	reg_CTLE_RL2_SEL_G_P3_LANE_3_0 = rl2_table[i_best];
	reg_CTLE_RL2_SEL_G_P4_LANE_3_0 = rl2_table[i_best];
	reg_CTLE_CURRENT2_SEL_G_P1_LANE_3_0 = rl2_table[i_best];
	reg_CTLE_CURRENT2_SEL_G_P2_LANE_3_0 = rl2_table[i_best];
	reg_CTLE_CURRENT2_SEL_G_P3_LANE_3_0 = rl2_table[i_best];
	reg_CTLE_CURRENT2_SEL_G_P4_LANE_3_0 = rl2_table[i_best];
	ctrl_cdr_phase_on = 0;
	dfe_cdr_phase_opt();

	cds_call = CDS_EN_DEFAULT;
	opt2train();
}


