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
	PHY_STATUS = ST_RXTRAIN;
	
	#if _DEBUG
    DBG_PS("\r\n++RX TRAIN");
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
		rx_ffe_train();
		opt2train();
	}
   // -- RX Training End state start
	
   #if tag_RX_CAP_FINAL_ADJUST_EN //1
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
		ffe_res2_adjust();
	#endif
	
    #if tag_TEMP_ADJUST_FFE_R //0
		ffe_res_temp_adjust();	
	#endif

	dfe_cdr_phase_opt();
	
    // during the last round, we would like to adapt the best CDR sampling phase
	//ctrl_cdr_phase_on = tag_CDR_PHASE_OPT_EN && ( ctrl_rx_only_mode || rx.blind_training || tag_CDR_PHASE_LAST_ALWAYS ) && (opt.level < 5);
	ctrl_cdr_phase_on = tag_CDR_PHASE_OPT_EN && ( ctrl_rx_only_mode || rx.blind_training || tag_CDR_PHASE_LAST_ALWAYS );
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
	print_ph_ctrl_status();
	#endif
	
	//opt2train();
    dfe_cdr_phase_opt();  // do the DFE and CDR phase optimization
    update_opt_trx_ffe();
	
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
		reg_CTLE_CAP1_SEL_LANE_3_0++;
		reg_CTLE_CAP2_SEL_LANE_3_0++;
		reg_CTLE_CURRENT1_SEL_LANE_3_0++;
		reg_CTLE_CURRENT2_SEL_LANE_3_0++;
	
		reg_CTLE_RES1_SEL_LANE_3_0++;
		reg_CTLE_RES2_SEL_LANE_3_0++;
		reg_CTLE_RL1_SEL_LANE_3_0++;
		reg_CTLE_RL2_SEL_LANE_3_0++;
		
		//reg_FFE_DATA_RATE_LANE_3_0++;
		
		reg_DFE_RES_F0_LANE_1_0++;		
		reg_DFE_RES_F1_LANE_1_0++;		
		reg_DFE_RES_F1P5_LANE_1_0++;
		reg_DFE_RES_F2_LANE_1_0++;	
		reg_DFE_RES_F34_LANE++;
		reg_DFE_RES_F567_LANE++;		
		reg_DFE_RES_F8TO10_LANE++;		
		reg_DFE_RES_F11TO15_LANE++;
		reg_DFE_RES_FLOATING_LANE++;		
		reg_OFST_RES_LANE++;		
		
	}

	//for(i=0; i<15; i++) 
	{
	
		reg_CTLE_CAP1_SEL_LANE_3_0--;
		reg_CTLE_CAP2_SEL_LANE_3_0--;
		reg_CTLE_CURRENT1_SEL_LANE_3_0--;
		reg_CTLE_CURRENT2_SEL_LANE_3_0--;
	
		reg_CTLE_RES1_SEL_LANE_3_0--;
		reg_CTLE_RES2_SEL_LANE_3_0--;
		reg_CTLE_RL1_SEL_LANE_3_0--;
		reg_CTLE_RL2_SEL_LANE_3_0--;

		//reg_FFE_DATA_RATE_LANE_3_0--;
		
		reg_DFE_RES_F0_LANE_1_0--;		
		reg_DFE_RES_F1_LANE_1_0--;		
		reg_DFE_RES_F1P5_LANE_1_0--;		
		reg_DFE_RES_F567_LANE--;		
		reg_DFE_RES_F8TO10_LANE--;		
		reg_DFE_RES_FLOATING_LANE--;		
		reg_OFST_RES_LANE--;		
		
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
__code rx_ffe_set_c_tb[]   = { 15, 15, 15, 15, 15, 15, 15, 15, 15,15,15,15,15,15,15,15,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};
__code rx_ffe_set_r_tb[]   = { 0, 1, 2, 3, 4, 5, 6, 7, 8,9,10,11,12,13,14,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15 };

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
	//int sum_direction_compute;
	//reg_MCU_DEBUG4_LANE_7_0 = 0x03;
	i = 0; // set the initial index to zero
	while (i < 32) //32 default, 16 fast when gain_train_with_C = 1//rx.size_ffe_set) // while the index is not the last one
	{
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
		i++;	
		

	}	
	//reg_MCU_DEBUG5_LANE_7_0 = i;
}
extern __code int8_t dfe_res_f0_sumFtap[];

extern __code int16_t dfe_res_f1_sumFtap[];
extern __code int16_t dfe_res_f2_sumFtap[];

bool get_train_overboost(void) {

#ifdef _56G_R1P1
	#if (tag_RX_FFE_OVERBOOST_EN == 1 )  //1
#ifndef _56GR1P1_TRAIN
	return	( (train.f1 < tag_RX_F1_OVERBOOST_THRES)                                          //3
			|| ((train.f2 < 0) && ((train.f1*dfe_res_f1_sumFtap[dfe_res_f1] + train.f2*dfe_res_f2_sumFtap[dfe_res_f2]) < tag_RX_F12_OVERBOOST_THRES)) 
			|| train.f3 < tag_RX_F3_OVERBOOST_THRES //-5
			|| train.f4 < tag_RX_F4_OVERBOOST_THRES //-1
			|| train.f5 < tag_RX_F5_OVERBOOST_THRES //-1
			|| train.sumFtap < tag_SUMF_OVERBOOST_THRES_C // train.sumFtap < ((((tag_SUMF_OVERBOOST_THRES_K*train.f0a)>>4) * dfe_res_f0_sumFtap[dfe_res_f0]) + tag_SUMF_OVERBOOST_THRES_C)
			);
#else
	return	( (train.f1 < tag_RX_F1_OVERBOOST_THRES)                                          //3
				|| ((train.f2 < 0) && ((train.f1*dfe_res_f1_sumFtap[dfe_res_f1] + train.f2*dfe_res_f2_sumFtap[dfe_res_f2]) < tag_RX_F12_OVERBOOST_THRES))
				|| train.f3 < tag_RX_F3_OVERBOOST_THRES //-5
				|| train.f4 < tag_RX_F4_OVERBOOST_THRES //-1
				|| train.f5 < tag_RX_F5_OVERBOOST_THRES //-1
				|| train.sumFtap < tag_SUMF_OVERBOOST_THRES_C || train.sumFtap < ((((tag_SUMF_OVERBOOST_THRES_K*train.f0a)>>4) * dfe_res_f0_sumFtap[dfe_res_f0]) + tag_SUMF_OVERBOOST_THRES_C)
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
#ifndef _56GR1P1_TRAIN
	return	( (opt.f1 < tag_RX_F1_OVERBOOST_THRES )
			|| ((opt.f2 < 0) && ((opt.f1*dfe_res_f1_sumFtap[dfe_res_f1] + opt.f2*dfe_res_f2_sumFtap[dfe_res_f2]) < tag_RX_F12_OVERBOOST_THRES))
			|| opt.f3 < tag_RX_F3_OVERBOOST_THRES 
			|| opt.f4 < tag_RX_F4_OVERBOOST_THRES 
			|| opt.f5 < tag_RX_F5_OVERBOOST_THRES 
			|| opt.sumFtap < tag_SUMF_OVERBOOST_THRES_C //opt.sumFtap < (((tag_SUMF_OVERBOOST_THRES_K*opt.f0)>>4) + tag_SUMF_OVERBOOST_THRES_C)
			);
#else
	return	( (opt.f1 < tag_RX_F1_OVERBOOST_THRES )
				|| ((opt.f2 < 0) && ((opt.f1*dfe_res_f1_sumFtap[dfe_res_f1] + opt.f2*dfe_res_f2_sumFtap[dfe_res_f2]) < tag_RX_F12_OVERBOOST_THRES))
				|| opt.f3 < tag_RX_F3_OVERBOOST_THRES
				|| opt.f4 < tag_RX_F4_OVERBOOST_THRES
				|| opt.f5 < tag_RX_F5_OVERBOOST_THRES
				|| opt.sumFtap < tag_SUMF_OVERBOOST_THRES_C
				|| opt.sumFtap < ((((tag_SUMF_OVERBOOST_THRES_K*opt.f0a)>>4)*dfe_res_f0_sumFtap[dfe_res_f0]) + tag_SUMF_OVERBOOST_THRES_C)
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
		rx.ffe_updated = ((train.boost < opt.boost && train_c== opt_c) && train.level > 0)|| 
		      (opt.level == 3 && train.level >= opt.level && train_c <opt_c) || 
			  (train_c ==opt_c && train_c <tag_RX_C_SAT_THRES && train.level == 3 && 
			  ((tag_DFE_SAT_PREFER_HIGH_DC && train_r>opt_r) ||
			  (!tag_DFE_SAT_PREFER_HIGH_DC && train_r<opt_r)) ) ||
			  (train.level > opt.level && tag_RX_LEVEL_PROTECTION_IN_MIN_BOOST);
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
		rx.ffe_updated = (train_c ==opt_c && train_c <tag_RX_C_SAT_THRES &&
						  train.level == 3 && (
						  ( (tag_DFE_SAT_PREFER_HIGH_DC && train_r > opt_r) || (!tag_DFE_SAT_PREFER_HIGH_DC && train_r > opt_r)) );
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
    DBG_Printf("\r\n++(ffe_res2_adjust) boostlvl = %d",boostlevel);
	#endif
#ifndef _56G_R1P0
	if( reg_FFE_RES1_SEL_LANE_3_0 == 0xB) {		
		if(boostlevel  > FFE_R2_LEVEL1) { //40
			reg_FFE_RES2_SEL_E_LANE_3_0 = 4;
			reg_FFE_RES2_SEL_O_LANE_3_0 = 4;
		}
		else if(boostlevel  > FFE_R2_LEVEL2) { //30
			reg_FFE_RES2_SEL_E_LANE_3_0 = 3;
			reg_FFE_RES2_SEL_O_LANE_3_0 = 3;
		}
		else if(boostlevel  > FFE_R2_LEVEL3) { //20
			reg_FFE_RES2_SEL_E_LANE_3_0 = 2;
			reg_FFE_RES2_SEL_O_LANE_3_0 = 2;
		}
		else if(boostlevel  > FFE_R2_LEVEL4) {
			reg_FFE_RES2_SEL_E_LANE_3_0 = 1;
			reg_FFE_RES2_SEL_O_LANE_3_0 = 1;
		} 
		else {
		reg_FFE_RES2_SEL_E_LANE_3_0 = 0;
		reg_FFE_RES2_SEL_O_LANE_3_0 = 0;	
		
		}
		r2_adj_on = 1;
	}
#else
	if( reg_CTLE_RES1_SEL_LANE_3_0 == 0xB) {
			if(boostlevel  > FFE_R2_LEVEL1) { //40
				reg_CTLE_RES2_SEL_LANE_3_0 = 4;
				//reg_FFE_RES2_SEL_O_LANE_3_0 = 4;
			}
			else if(boostlevel  > FFE_R2_LEVEL2) { //30
				reg_CTLE_RES2_SEL_LANE_3_0 = 3;
				//reg_FFE_RES2_SEL_O_LANE_3_0 = 3;
			}
			else if(boostlevel  > FFE_R2_LEVEL3) { //20
				reg_CTLE_RES2_SEL_LANE_3_0 = 2;
				//reg_FFE_RES2_SEL_O_LANE_3_0 = 2;
			}
			else if(boostlevel  > FFE_R2_LEVEL4) {
				reg_CTLE_RES2_SEL_LANE_3_0 = 1;
				//reg_FFE_RES2_SEL_O_LANE_3_0 = 1;
			}
			else {
			reg_CTLE_RES2_SEL_LANE_3_0 = 0;
			//reg_FFE_RES2_SEL_O_LANE_3_0 = 0;

			}
			r2_adj_on = 1;
		}
#endif

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

void cds_calculation(void)
{

	cds_f0a_slicer = (cds56.f0a.s_mid_e + cds56.f0a.s_mid_o + cds56.f0a.s_top_e + cds56.f0a.s_top_o + cds56.f0a.s_bot_e + cds56.f0a.s_bot_o) / 6;
	cds_f0a_data = (cds56.f0a.d_mid_e + cds56.f0a.d_mid_o + cds56.f0a.d_top_e + cds56.f0a.d_top_o + cds56.f0a.d_bot_e + cds56.f0a.d_bot_o) / 6;

	cds_f0a_max_slicer = cds56.f0a.s_mid_e;
	cds_f0a_max_slicer = max(cds_f0a_max_slicer,cds56.f0a.s_mid_o);
	cds_f0a_max_slicer = max(cds_f0a_max_slicer,cds56.f0a.d_top_e);
	cds_f0a_max_slicer = max(cds_f0a_max_slicer,cds56.f0a.d_top_o);
	cds_f0a_max_slicer = max(cds_f0a_max_slicer,cds56.f0a.d_bot_e);
	cds_f0a_max_slicer = max(cds_f0a_max_slicer,cds56.f0a.d_bot_o);

	cds_f0a_max_data = cds56.f0a.d_mid_e;
	cds_f0a_max_data = max(cds_f0a_max_data,cds56.f0a.d_mid_o);
	cds_f0a_max_data = max(cds_f0a_max_data,cds56.f0a.d_top_e);
	cds_f0a_max_data = max(cds_f0a_max_data,cds56.f0a.d_top_o);
	cds_f0a_max_data = max(cds_f0a_max_data,cds56.f0a.d_bot_e);
	cds_f0a_max_data = max(cds_f0a_max_data,cds56.f0a.d_bot_o);

	cds_f0_slicer = (cds56.f0b.s_mid_e + cds56.f0b.s_mid_o + cds56.f0b.s_top_e + cds56.f0b.s_top_o + cds56.f0b.s_bot_e + cds56.f0b.s_bot_o) / 6;
	cds_f0_data = (cds56.f0b.d_mid_e + cds56.f0b.d_mid_o + cds56.f0b.d_top_e + cds56.f0b.d_top_o + cds56.f0b.d_bot_e + cds56.f0b.d_bot_o) / 6;

	cds_f0d_slicer = (cds56.f0d.s_mid_e + cds56.f0d.s_mid_o + cds56.f0d.s_top_e + cds56.f0d.s_top_o + cds56.f0d.s_bot_e + cds56.f0d.s_bot_o) / 6;
	cds_f0d_data = (cds56.f0d.d_mid_e + cds56.f0d.d_mid_o + cds56.f0d.d_top_e + cds56.f0d.d_top_o + cds56.f0d.d_bot_e + cds56.f0d.d_bot_o) / 6;
	cds_f0d_slicer_left = (cds56.f0d_left.s_mid_e + cds56.f0d_left.s_mid_o + cds56.f0d_left.s_top_e + cds56.f0d_left.s_top_o + cds56.f0d_left.s_bot_e + cds56.f0d_left.s_bot_o) / 6;
	cds_f0d_data_left = (cds56.f0d_left.d_mid_e + cds56.f0d_left.d_mid_o + cds56.f0d_left.d_top_e + cds56.f0d_left.d_top_o + cds56.f0d_left.d_bot_e + cds56.f0d_left.d_bot_o) / 6;
	cds_f0d_slicer_right = (cds56.f0d_right.s_mid_e + cds56.f0d_right.s_mid_o + cds56.f0d_right.s_top_e + cds56.f0d_right.s_top_o + cds56.f0d_right.s_bot_e + cds56.f0d_right.s_bot_o) / 6;
	cds_f0d_data_right = (cds56.f0d_right.d_mid_e + cds56.f0d_right.d_mid_o + cds56.f0d_right.d_top_e + cds56.f0d_right.d_top_o + cds56.f0d_right.d_bot_e + cds56.f0d_right.d_bot_o) / 6;

	cds_f1_data = (cds56.dfe_2c.f1_d_top_o + cds56.dfe_2c.f1_d_top_e + cds56.dfe_2c.f1_d_mid_o + cds56.dfe_2c.f1_d_mid_e + cds56.dfe_2c.f1_d_bot_o + cds56.dfe_2c.f1_d_bot_e) / 6;
	cds_f1_slicer = (cds56.dfe_2c.f1_s_top_o + cds56.dfe_2c.f1_s_top_e + cds56.dfe_2c.f1_s_mid_o + cds56.dfe_2c.f1_s_mid_e + cds56.dfe_2c.f1_s_bot_o + cds56.dfe_2c.f1_s_bot_e) / 6;

	cds_f2_data = (cds56.dfe_2c.f2_d_top_o + cds56.dfe_2c.f2_d_top_e + cds56.dfe_2c.f2_d_mid_o + cds56.dfe_2c.f2_d_mid_e + cds56.dfe_2c.f2_d_bot_o + cds56.dfe_2c.f2_d_bot_e) / 6;
	cds_f2_slicer = (cds56.dfe_2c.f2_s_top_o + cds56.dfe_2c.f2_s_top_e + cds56.dfe_2c.f2_s_mid_o + cds56.dfe_2c.f2_s_mid_e + cds56.dfe_2c.f2_s_bot_o + cds56.dfe_2c.f2_s_bot_e) / 6;


	cds_f3 = (cds56.dfe_2c.f3_top_o + cds56.dfe_2c.f3_top_e + cds56.dfe_2c.f3_mid_o + cds56.dfe_2c.f3_mid_e + cds56.dfe_2c.f3_bot_o + cds56.dfe_2c.f3_bot_e) / 6;
	cds_f4 = (cds56.dfe_2c.f4_top_o + cds56.dfe_2c.f4_top_e + cds56.dfe_2c.f4_mid_o + cds56.dfe_2c.f4_mid_e + cds56.dfe_2c.f4_bot_o + cds56.dfe_2c.f4_bot_e) / 6;

	cds_f5 = (cds56.dfe_2c.f5_msb_o + cds56.dfe_2c.f5_msb_e + cds56.dfe_2c.f5_lsb_o + cds56.dfe_2c.f5_lsb_e) / 4;
	cds_f6 = (cds56.dfe_2c.f6_msb_o + cds56.dfe_2c.f6_msb_e + cds56.dfe_2c.f6_lsb_o + cds56.dfe_2c.f6_lsb_e) / 4;
	cds_f7 = (cds56.dfe_2c.f7_msb_o + cds56.dfe_2c.f7_msb_e + cds56.dfe_2c.f7_lsb_o + cds56.dfe_2c.f7_lsb_e) / 4;
	sum_vref_top+= (cds56.dfe_2c.vref_top_e + cds56.dfe_2c.vref_top_o) >> 1;
	sum_vref_mid+= (cds56.dfe_2c.vref_mid_e + cds56.dfe_2c.vref_mid_o) >> 1;
	sum_vref_bot+= (cds56.dfe_2c.vref_bot_e + cds56.dfe_2c.vref_bot_o) >> 1;

}
