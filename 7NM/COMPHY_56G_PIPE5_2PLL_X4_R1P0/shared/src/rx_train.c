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
	
	rsweep();

	ffe_res2_adjust();

	rx_dfe_f0_vref_train();
	
	rx_phase_train();

	rx_rl2_tune_adjust();
	
	rx_final_phase_train();

	ctrl_rx_train_done = 1; 
	
}


void rx_train_dummy(void) {
	
	PHY_STATUS = ST_RXTRAIN;

	//do nothing
	
	ctrl_rx_train_done = 1; 
	
	if (ctrl_rx_only_mode) 	ctrl_trx_train_done = 1; 

}

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
 	uint8_t i; 
	uint8_t rmax = short_flag ? 3 : tag_RX_RXFFE_R_MAX;

   	ctrl_cdr_phase_on = 0; 

	DBG_Printf("\r\n>>> BEGIN: R Sweep");

	for (i=0; i <= rmax; i++) { 

		train.r = rx_ffe_set_r_tb[i];
		#if (tag_GAIN_TRAIN_WITH_C==0)  //1
		train.c = rx_ffe_set_c_tb[i]; 
		#endif
		
		if(i > 15)
			train.r = opt.r;

		Set_Rx_FFE();

		dfe_cdr_phase_opt(); 
		RX_FFE_Comparision(); // compare the training RX FFE with the global optimal one

	}	

	DBG_Printf("\r\n>>> END: R Sweep");

	reg_DFE_F0X_SEL_LANE_4_0 = DFE_FX_SEL_FN2;
	
}

extern __code int8_t dfe_res_f0_sumFtap[];
extern __code int16_t dfe_res_f1_sumFtap[];
extern __code int16_t dfe_res_f2_sumFtap[];

bool get_train_overboost(void) {

	#if (tag_RX_FFE_OVERBOOST_EN == 1 )  //1
	return	( (train.f1 < tag_RX_F1_OVERBOOST_THRES)                                          //3
				|| ((train.f2 < 0) && ((train.f1*f1_res + train.f2*f2_res) < tag_RX_F12_OVERBOOST_THRES))
				|| train.f3 < tag_RX_F3_OVERBOOST_THRES //-5
				|| train.f4 < tag_RX_F4_OVERBOOST_THRES //-1
				|| train.f5 < tag_RX_F5_OVERBOOST_THRES //-1
				|| train.sumFtap < tag_SUMF_OVERBOOST_THRES_C || train.sumFtap < ((((tag_SUMF_OVERBOOST_THRES_K*train.f0a)>>4) * f0_res) + tag_SUMF_OVERBOOST_THRES_C)
				);
	#else
	return 0;
	#endif

}

bool get_opt_overboost(void) {

	#if (tag_RX_FFE_OVERBOOST_EN==1) //1
	return	( (opt.f1 < tag_RX_F1_OVERBOOST_THRES )
				|| ((opt.f2 < 0) && ((opt.f1*f1_res + opt.f2*f2_res) < tag_RX_F12_OVERBOOST_THRES))
				|| opt.f3 < tag_RX_F3_OVERBOOST_THRES
				|| opt.f4 < tag_RX_F4_OVERBOOST_THRES
				|| opt.f5 < tag_RX_F5_OVERBOOST_THRES
				|| opt.sumFtap < tag_SUMF_OVERBOOST_THRES_C
				|| opt.sumFtap < ((((tag_SUMF_OVERBOOST_THRES_K*opt.f0a)>>4)*f0_res) + tag_SUMF_OVERBOOST_THRES_C)
				);
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
    //DBG_Printf("\r\n RX_FFE_Comparision\tR=%d C=%d EO=%d LVL=%d", train.r,train.c,train.eo,train.level);
	#endif
	
	#if (tag_RX_MIN_BOOST_MODE) //1
	{ 
		{
			if (train.level == 5 && opt.level < 5)
			{
				rx.ffe_updated = 1;				
			}	
			else
			{
				if (train.f1 < 0 && opt.f1 >= 0)
				{
					rx.ffe_updated = 0;
				}
				else if (train.f1 < 0 && opt.f1 < 0)
				{
//					rx.ffe_updated = (abs(train.f1) < abs(opt.f1)) && (((train.boost < opt.boost && train.c == opt.c && train.level >= opt.level )) ||
					rx.ffe_updated = (abs(train.f1) < abs(opt.f1)) && (((train.boost < opt.boost && train.c == opt.c )) ||
						(opt.level == 3 && train.level >= opt.level && train.c <opt.c) ||
						(train.c == opt.c && train.c <tag_RX_C_SAT_THRES && train.level == 3 &&
						((tag_DFE_SAT_PREFER_HIGH_DC && train.r>opt.r) ||
							(!tag_DFE_SAT_PREFER_HIGH_DC && train.r<opt.r))) ||
							(train.level > opt.level && tag_RX_LEVEL_PROTECTION_IN_MIN_BOOST));
				}
				else
				{

//					rx.ffe_updated = ((train.boost < opt.boost && train.c == opt.c && train.level >= opt.level )) ||
					rx.ffe_updated = ((train.boost < opt.boost && train.c == opt.c )) ||
						(opt.level == 3 && train.level >= opt.level && train.c <opt.c) ||
						(train.c == opt.c && train.c <tag_RX_C_SAT_THRES && train.level == 3 &&
						((tag_DFE_SAT_PREFER_HIGH_DC && train.r>opt.r) ||
							(!tag_DFE_SAT_PREFER_HIGH_DC && train.r<opt.r))) ||
							(train.level > opt.level && tag_RX_LEVEL_PROTECTION_IN_MIN_BOOST);
				}
			}
		}

//#if 0
//		else {
//			rx.ffe_updated = ((train.boost < opt.boost && train.c== opt.c))|| 
//						(opt.level == 3 && train.level >= opt.level && train.c <opt.c) || 
//					(train.c ==opt.c && train.c <tag_RX_C_SAT_THRES && train.level == 3 && 
//					((tag_DFE_SAT_PREFER_HIGH_DC && train.r>opt.r) ||
//					(!tag_DFE_SAT_PREFER_HIGH_DC && train.r<opt.r)) ) ||
//					(train.level > opt.level && tag_RX_LEVEL_PROTECTION_IN_MIN_BOOST);
//		}
//#endif
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
			       && ((( (train.r > opt.r && tag_OVERBOOST_DET_MODE==0) || (tag_OVERBOOST_DET_MODE && train.boost < opt.boost) )
                      && train.c == opt.c ) || (train.c < opt.c && train.r>= opt.r) ) ) 
                || (rx.train_overboost==0 && rx.opt_overboost==0 && train.eo > (opt.eo - tag_RX_FFE_OVERBOOST_UPDATE_THRES) &&
                   ((((train.r < opt.r && tag_UNDERBOOST_DET_MODE) || (tag_UNDERBOOST_DET_MODE==0 && train.boost < opt.boost))
                   && train.c == opt.c) || (train.c > opt.c && train.r== opt.r)));
		}
		else if (train.level == 3) // intra-level compare, level 3
		{
			rx.ffe_updated = (train.f0a_saturate==0 && opt.f0a_saturate) || (train.f0a_saturate == opt.f0a_saturate && 
			               train.eo > (opt.eo - tag_RX_FFE_OVERBOOST_UPDATE_THRES) &&
						   ( (( (tag_DFE_SAT_PREFER_HIGH_DC && train.r > opt.r) || (!tag_DFE_SAT_PREFER_HIGH_DC && train.r > opt.r)) 
						   && train.c == opt.c) || (train.c < opt.c )  ));		
		}
		else
		{
			rx.ffe_updated = 0;
		}
	}
	else
	{
		rx.ffe_updated = (train.c ==opt.c) && (train.c <tag_RX_C_SAT_THRES) &&
						  (train.level == 3) && 
						  ( (tag_DFE_SAT_PREFER_HIGH_DC && train.r > opt.r) || (!tag_DFE_SAT_PREFER_HIGH_DC && train.r > opt.r));
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


#define FFE_R2_LEVEL1	40
#define FFE_R2_LEVEL2	30
#define FFE_R2_LEVEL3	20
#define FFE_R2_LEVEL4	10

extern __code int8_t dfe_res_f0_sumFtap[];

static void ffe_res2_adjust(void) {

  #if tag_ADJUST_FFE_R2 //1

	int16_t boostlevel;
	if(cmx_TRAIN_SIM_EN) return;
    if (!(TRAIN_STEP & R2_ADJ) ) return;
	if (pam2_en) return;
	
	boostlevel = train.sumFtap - ((((int8_t)tag_SUMF_BOOST_TARGET_K) * train.f0a * dfe_res_f0_sumFtap[dfe_res_f0] )>>4) - tag_SUMF_BOOST_TARGET_C;
	#if _DEBUG
    DBG_Printf("\r\n>>(ffe_res2_adjust) boostlvl = %d",boostlevel);
	#endif

	if( reg_CTLE_RES1_SEL_LANE_3_0 == 0xB) {
			if(boostlevel  > FFE_R2_LEVEL1) { //40
				reg_CTLE_RES2_SEL_LANE_3_0 = 4;
			}
			else if(boostlevel  > FFE_R2_LEVEL2) { //30
				reg_CTLE_RES2_SEL_LANE_3_0 = 3;
			}
			else if(boostlevel  > FFE_R2_LEVEL3) { //20
				reg_CTLE_RES2_SEL_LANE_3_0 = 2;
			}
			else if(boostlevel  > FFE_R2_LEVEL4) {
				reg_CTLE_RES2_SEL_LANE_3_0 = 1;
			}
			else {
				reg_CTLE_RES2_SEL_LANE_3_0 = 0;
			}
			r2_adj_on = 1;
		}
#endif
}


static void rx_rl2_tune_adjust(void) { 
	uint8_t i,best, rl2;
	uint8_t start, num;

	if(cmx_TRAIN_SIM_EN) return;

	opt.fn1 = 63;
	start = 1; num = 5;
	rl2 = 0;
	
    if (!(TRAIN_STEP & RL2_TUNE_ADJ) ) return;
	if(!tag_FINAL_GAIN_ADJUST) return;

	DBG_Printf("\r\nRL2_TUNE Adjust");
	train_cds = CDS_RL2_TUNE_ADJ; //cds_call = CDS_EN_PHASETRAIN;
	opt2train();
	ctrl_cdr_phase_on = 0;

     if(lnx_BYPASS_RL2_TRAIN_LANE) {
	   if(tag_RL2_ADAPT_EN ) {
		
	   }
	   else {		
		if(lnx_FORCE_CTLE_RL2_TUNE_EN_LANE) {
			reg_CTLE_RL2_TUNE_G_LANE_2_0 = lnx_FORCE_CTLE_RL2_TUNE_G_LANE_2_0; 
		}
	   }	

     }
     else if( !lnx_FORCE_CTLE_RL2_TUNE_TRAIN_EN_LANE ) {  	 		

		best = reg_CTLE_RL2_TUNE_G_LANE_2_0;
		best = conv_gray2bin(best);
		
		if(!tag_RL2_ADAPT_EN) { start = 0; num = 8; }
		else { if(best>norm_rl2_tune) best -= norm_rl2_tune; }
	
		for (i=start; i<num; i++){
	
			reg_CTLE_RL2_TUNE_G_LANE_2_0 = conv_bin2gray(i + (tag_RL2_ADAPT_EN? lnx_NORM_RL2_TUNE_LANE_2_0:0)); //gray code
	
			dfe_cdr_phase_opt();
	
			if (train.level >= opt.level) {
				if (train.level == opt.level) {
					if (opt.level == 3) { 
						if (abs(train.fn1) < abs(opt.fn1)) {
							train2opt();
							DBG_Printf(" ***");
							best = i;
						}
					}
					else if (train.eo >= opt.eo && train.eye_check_pass) {
						train2opt();
						DBG_Printf(" ***");
						best = i;
					}
				}
				else {
					train2opt();
					DBG_Printf(" ***");
					best = i;
				}
			}
		}
	
		if(tag_RL2_ADAPT_EN) {
			train_rl2_tune = best;
			best += norm_rl2_tune;
		}
	
		reg_CTLE_RL2_TUNE_G_LANE_2_0 = conv_bin2gray(best);
     }
			#if _DBG_CTLE_ADAPT
		DBG_Printf("\r\n rl2_tune_adj: train_rl2_tune=%d norm_rl2_tune=%d", train_rl2_tune, norm_rl2_tune);
		#endif

	dfe_cdr_phase_opt();
}


void rsweep(void) {

	if(cmx_TRAIN_SIM_EN) return;
	if (!(TRAIN_STEP & RSWEEP) ) return;

	if(opt.excellent_eo && opt.saturated==0) return;
	
	#if _DEBUG
    DBG_PS("\r\n>>RX TRAIN");
	#endif

	rx.ffe_index2 = opt.rx_ffe_index;
	ctrl_trx_ffe_updated = 0;
	opt2train();
	
	if(short_flag) {
		DBG_Printf("\r\nShort flag = 1 now!");
		opt.r = 15;
		train.r = 15;
		Set_Rx_FFE();
	
		train_cds = CDS_RSWEEP_SHORT; //CDS_EN_RECOVER;
		dfe_cdr_phase_opt();		
		DBG_Printf("\r\nReset the DFE adaptation after CTLE Bypass");
	}
	else {
		train_cds = CDS_RSWEEP;
		rx_ffe_train();
	}
	
	opt2train();	

	ctrl_trx_ffe_updated = (opt.rx_ffe_index != rx.ffe_index2);
	
}

void rx_dfe_f0_vref_train(void) {
	uint8_t index;
	if(cmx_TRAIN_SIM_EN) return;
	if (!(TRAIN_STEP & DFE_RES_F0_VREF_TRAIN) ) return;
	if (pam2_en) return;

	DBG_PS("\r\nDFE Res Train (F0  Vref) - pre-phase-train");
	// 10 is just a timeout protection, code should break out before that		
	index = 0;
	f0_res_min = 0;
	ctrl_cdr_phase_on = 0;
	train_cds =  CDS_DFE_RES; //cds_call = CDS_EN_RESTRAIN;
	do { 
	  dfe_cdr_phase_opt();
	  update_dfe_res(1, 1, 0);
	}while (index++ < 10);
	dfe_cdr_phase_opt();
	train2opt();
	DBG_PS("\r\nEND: DFE Res Train (F0  Vref) - pre-phase-train");
	
}

void rx_phase_train(void) {
	if(cmx_TRAIN_SIM_EN) return;
	if (!(TRAIN_STEP & PHASE_TRAIN)) return;

	ctrl_cdr_phase_on = tag_CDR_PHASE_OPT_EN &&
		( ctrl_rx_only_mode || rx.blind_training || tag_CDR_PHASE_LAST_ALWAYS );
	adapt_data_en = tag_TRAIN_USE_D; 
	adapt_slicer_en = tag_TRAIN_USE_S; 
	ph_control_mode = tag_TRAIN_PH_CONTROL_MODE; 
	phase_control_func();

	train_cds = CDS_PHASE_TRAIN;
	dfe_cdr_phase_opt();  // do the DFE and CDR phase optimization
	update_opt_trx_ffe();
	
}


void rx_final_phase_train(void) {
	if(cmx_TRAIN_SIM_EN) return;
	if(!(TRAIN_STEP & FINAL_PHASE_TRAIN)) return;
	if(!tag_FINAL_GAIN_ADJUST) return;
	
	ctrl_cdr_phase_on = tag_CDR_PHASE_OPT_EN &&	( ctrl_rx_only_mode || rx.blind_training || tag_CDR_PHASE_LAST_ALWAYS );		
	train_cds = CDS_PHASE_TRAIN_FINAL;
	dfe_cdr_phase_opt();  // do the DFE and CDR phase optimization
	update_opt_trx_ffe();	
}

/*
static void rx_res_f0_vref_train(void) {
	uint8_t index;

	if(!(TRAIN_STEP & FINAL_DFERES_F0_TRAIN)) return;
	if (pam2_en || !tag_FINAL_GAIN_ADJUST) return;

	index = 0;
	DBG_PS("\r\nDFE Res Train (F0, Vref)");
	// 10 is just a timeout protection, code should break out before that
	index = 0;
	train_cds = CDS_RES_VREF_ISI; //CDS_EN_RESTRAIN;
	do dfe_cdr_phase_opt();
	while (update_dfe_res(0, 1, 0) && index++ < 10);
	train2opt();
		
}
*/


