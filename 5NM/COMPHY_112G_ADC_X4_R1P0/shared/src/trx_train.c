/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file TRX_Train.c
* \purpose trx train for 112G_ADC 7nm
* \History
*	5/15/2019 Heejeong Ryu		Initial 
*/
#define _DEBUG _DBG_TRXTRAIN
#include "common.h"
#pragma constseg CSEG

#define tag_TRAIN_CONT_MODE_TIMER lnx_TRAIN_CONT_MODE_TIMER_LEN_LANE_7_0

void TRX_Train(void) {
	
	PHY_STATUS = ST_TRXTRAIN;
	
		//do_phase_adapt = 0; //disable rpta
		//set_dfe_cont(0);
	if( do_train | do_rxtrain) {

		// test duration from timer2_start to timer2_stop
		timer2_start(TRAINING_TIMER);
		lnx_RX_TRAIN_ABORT_LANE = 0;
		lnx_RX_TRAIN_PASS_LANE = 0;
		lnx_RX_TRAIN_DONE_LANE = 0;
		lnx_TX_TRAIN_ABORT_LANE = 0;
		lnx_TX_TRAIN_PASS_LANE = 0;
		lnx_TX_TRAIN_DONE_LANE = 0;
		train_pass = 1;

		//if(lnx_RX_TRAIN_ONLY_DFE_LANE) {
		//	//adapt_slicer_en = drv_ADAPT_SLICER_EN;
		//	//adapt_data_en =	drv_ADAPT_DATA_EN;
		//	//reg_DFE_TAP_SIGN_MODE_LANE = 0;
		//	reg_PIN_GPO_LANE_7_0 = 1;
		//	//dfe_adaptation();
		//	reg_PIN_GPO_LANE_7_0 = 0;
 		//}
		//else
		{ //normal

			//TODO
			lnx_TX_TRAIN_COMPLETE_INT_LANE = 0; //temp
		
			trx_train_init();
			//if(link_train_mode==0) 
			if(do_train) 
				train_if_init();

			if(TX_TRAIN_ONLY_START) {
				TX_TRAIN_ONLY_START = 0;
				return;
			}

			if(TRAIN_SIM_EN) {
				if(do_train) {
					#ifdef _PCIE_BUILD
					if(reg_EYE_OPEN_EN_RD_LANE) {

					}
					else
					#endif
					{
						if(PIPE4_EN==0 && phy_mode!=PCIE) {
							tx_reset(train.tx_preset_index); //3
							//dfe_cdr_phase_opt();
						}
						tx_train_dummy();
					}
				}
			}
			else {
				//train ALG
				if (do_train) lnx_TRX_TRAIN_TX_TRAIN_EN_LANE = 1;
				if (do_rxtrain) lnx_TRX_TRAIN_TX_TRAIN_EN_LANE = 0;
				trx_train_top();
			}

		}

		// test duration from timer2_start to timer2_stop
		timer2_stop(TRAINING_TIMER);
		if( do_rxtrain ) {
			reg_INT_RX_TRAIN_COMPLETE_LANE = 0;
			reg_INT_RX_TRAIN_COMPLETE_LANE = 1;
			reg_INT_RX_TRAIN_COMPLETE_LANE = 0;

			//while((reg_MCU_DEBUGA_LANE_7_0=0x91)&&reg_RX_TRAIN_DISABLE_ISR_LANE==0);
			wait_for(reg_RX_TRAIN_DISABLE_ISR_LANE,0);
			reg_RX_TRAIN_DISABLE_ISR_CLEAR_LANE = 1;
			reg_RX_TRAIN_DISABLE_ISR_CLEAR_LANE = 0;

			do_rxtrain = 0;
			lnx_RX_TRAIN_DONE_LANE = 1;
			lnx_RX_TRAIN_PASS_LANE = train_pass;
		}
		
		if(do_train) {
			#ifdef _PCIE_BUILD
			reg_TX_FFE_TRAIN_DONE_LANE = 1;
			#endif

			set_train_comp();
			lnx_TX_TRAIN_COMPLETE_INT_LANE = 1;
			//while((reg_MCU_DEBUGA_LANE_7_0=0x92)&& reg_TX_TRAIN_DISABLE_ISR_LANE==0 );
			wait_for(reg_TX_TRAIN_DISABLE_ISR_LANE,0);
			reg_TX_TRAIN_DISABLE_ISR_CLEAR_LANE = 1;
			reg_TX_TRAIN_DISABLE_ISR_CLEAR_LANE = 0;

			do_train = 0;

			#ifdef _PCIE_BUILD
			reg_TX_FFE_TRAIN_DONE_LANE = 0;
			#endif

			lnx_TX_TRAIN_DONE_LANE = 1;
			lnx_TX_TRAIN_PASS_LANE = train_pass;
		}
	}
}


// ----

void dfe_cdr_phase_opt(void){
	//DBG_Printf("\r\n++(dfe_cdr_phase_opt)");// ctrl_cdr_phase_on=%d opt_phase=%d",ctrl_cdr_phase_on, opt_phase_os);
	if( TRAIN_SIM_EN ) return;

//    #if(tag_CDR_OPT_PHASE_BEFORE_DFE) //1
//	   train.phase_offset_data = opt.phase_offset_data;
//	   #if _DEBUG
//	   //DBG_Printf("\r\n++(dfe_cdr_phase_opt) opt_phase_offset=%d", cdr.opt_phase_offset);
//	   #endif
//	   phase_control_func();
//	  // reg_MCU_DEBUG5_LANE_7_0 = 0xff;
//	#endif
//
//	dfe_adaptation();
//
//	//DBG_Printf("\r\nctrl_cdr_phase_on=%d ",ctrl_cdr_phase_on);
//
//	if(ctrl_cdr_phase_on ) {
//		cdr_phase_opt();
//		ctrl_cdr_phase_on = 0;
//	}

}


#if( tag_GAIN_TRAIN_WITH_SAMPLER==0)	//0
__code const uint8_t gt0_dfe_res[] = {0, 1, 2, 3 };
__code const uint8_t gt1_dfe_res[] = {0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 };//also need to change pw
__code const uint8_t gt1_c []      = {15, 15, 15, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0}; //gain_index pw
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

#if 0
void gain_train(void)
{
	uint8_t step_number = 0;
	uint8_t gain_index = 0, c_index = 0; //largest gain + smallest dfe_res
	uint8_t gain_table_size, dfe_res_f0a_low_thres;
	uint8_t gain_table_index;
	//bool ctrl_sampler_by2;

	opt.phase_offset_data = -80;

	if(TRAIN_SIM_EN) return;
	cds_call = CDS_GAINTRAIN;
	tag_DFE_LOAD_EN = 0;
	tag_DFE_SAVE_EN = 0;

	#if _DEBUG
	//DBG_PS("\r\n++(gain_train)");
	DBG_PS("\r\n  gain_train");
	#endif
	#if( tag_GAIN_TRAIN_WITH_SAMPLER == 1)
	{ //0   //22      //7
		gain_table_size = (gain_train_with_c? gt3_size: gt2_size); // need to change size here pw
		gain_table_index = (gain_train_with_c?3:2);
	}
	#else 
	{         //            1              //19       //4
		gain_table_size = (gain_train_with_c? gt1_size: gt0_size);// =gt1_size=19 pw
		gain_table_index = (gain_train_with_c?1:0);//=1
    // [PU] start at DFE_RES_F0=3 if doing gain_train with C
    gain_index = (gain_train_with_c? 3 : 0);
	}
	#endif
	//DBG_Printf("\r\n\t gain_table_size=%d, gain_table_index=%d", gain_table_size,gain_table_index);
	
	while((reg_MCU_DEBUGA_LANE_7_0=0x93)&&step_number < (gain_table_size + 1))
	{
		switch (gain_table_index)
		{
		#if( tag_GAIN_TRAIN_WITH_SAMPLER==0)
		case 0:
			ctrl_step_res_dfe = gt0_dfe_res[gain_index];
			break;
		case 1: //
			ctrl_step_res_dfe = gt1_dfe_res[gain_index]; //0,1,2,3 pw
			train.c = gt1_c[gain_index];//c 15, 14, 13...9 pw
			break;
		#else
		case 2:
			ctrl_step_res_dfe = gt2_dfe_res[gain_index];
			ctrl_sampler_by2 = gt2_sampler_by2[gain_index];
			//if( load_sampler(ctrl_sampler_by2) ) set_t0_dfe();
			break;
		case 3:
			ctrl_step_res_dfe = gt3_dfe_res[gain_index];
			train.c = gt3_c[gain_index];
			ctrl_sampler_by2 = gt3_sampler_by2[gain_index];
			//if( load_sampler(ctrl_sampler_by2) ) set_t0_dfe();
			break;
		#endif
		default:
			ctrl_step_res_dfe = gt0_dfe_res[gain_index];
		}

		Set_Rx_FFE(train.r, train.c);

		//DBG_Printf("\r\n\t%d: gain_index=%d ctrl_step_res_dfe=%d, c=%d ctrl_sampler_by2=%d", step_number,gain_index,ctrl_step_res_dfe,train.c,ctrl_sampler_by2);

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
		if ((train.f0a_max < dfe_res_f0a_low_thres) && train.dfe_saturate==0 && (gain_index >=1) )
		{
			gain_index--;
		}                               // 50                                       32
		else if (((train.f0a_max >= dfe_res_f0a_high_thres) || 
			 ((train.f0a_max >= dfe_res_f0a_low_thres) && train.dfe_saturate) ||
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
		else
		{
			break;
		}
	}
	c_index = gain_index;
	cds_call = CDS_DEFAULT;
	tag_DFE_LOAD_EN = 1;
	tag_DFE_SAVE_EN = 1;
	opt.phase_offset_data = 0;
	train.phase_offset_data = 0;
#if 0
	while((reg_MCU_DEBUGA_LANE_7_0=0x94)&&1)
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
		train.c = gt1_c[c_index];
		Set_Rx_FFE(train.r, train.c);
		dfe_cdr_phase_opt();

	}
#endif

}

void update_opt_trx_ffe(void) {
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
	/ DBG_Printf("~UPDATE");
	#endif
	}else{
	#if _DEBUG
	/ DBG_Printf("UPDATE");
	#endif
	train2opt();
	//print_train();
	//reg_MCU_DEBUGB_LANE_7_0 = reg_MCU_DEBUGB_LANE_7_0 + 1;
    }

}


void train_status_reset(void){
	//uint8_t i;

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
	if(reg_RX_PAM2_EN_LANE == 1)	pam4_en = 0;
	else pam4_en = 1;

	// --
	r2_adj_on = 0;

	opt2train();

	// reset phase to cal phase with phase_control_mode=0
 
}
#endif 

void opt2train(void) {

	memcpy((uint8_t *)&train, (uint8_t *)&opt, sizeof(Status_Train_t));

    //train_phase_os = opt_phase_os ;
    //cdr_phase_update(train_phase_os);
	
	Set_Rx_FFE(train.r, train.c);

}

void train2opt() {

	memcpy((uint8_t *)&opt, (uint8_t *)&train, sizeof(Status_Train_t));

}

//CTLE table pw 
//TODO: move to XDAT
__code uint8_t Cap_sel_Table[]     = { 0, 0,  0, 1, 3, 5, 7, 10, 14, 20, 24, 29, 39, 52, 63, 63};
__code uint8_t Cap_sel2_e_Table[]  = { 0, 0,  0, 0, 0, 0, 0, 0,  0,  0,  0,  0,  0,  0,  3,  11};
__code uint8_t Rl2_sel_Table[]     = { 0, 15, 8, 8, 8, 8, 8, 8,  8,  8,  8,  8,  8,  8,  8,  8};
__code uint8_t Res_sel_Table[]     = { 14, 13, 13, 12, 12, 11, 11, 10, 9, 9, 8, 8, 7, 7, 6, 6};
__code uint8_t Res_sel2_e_Table[]  = { 0,  15,  7, 15,  7,  7,  0,  0, 7, 0, 7, 0, 7, 0, 7, 0};

void Set_Rx_FFE(uint8_t r, uint8_t c){

	train.rx_ffe_index = (c<<4) + r;
//	reg_RXTRAIN_R_IDX_LANE_3_0 = r;
//	reg_RXTRAIN_C_IDX_LANE_3_0 = c;
//
//	reg_CTLE_RES1_SEL_LANE_3_0 = Res_sel_Table[r];
//	if(r2_adj_on!=1) {
//		reg_CTLE_RS2_SEL_G_P1_LANE_3_0 = Res_sel2_e_Table[r];
//		reg_CTLE_RS2_SEL_G_P2_LANE_3_0 = Res_sel2_e_Table[r];
//		reg_CTLE_RS2_SEL_G_P3_LANE_3_0 = Res_sel2_e_Table[r];
//		reg_CTLE_RS2_SEL_G_P4_LANE_3_0 = Res_sel2_e_Table[r];
//	}
//	//reg_FFE_DATA_RATE_LANE_3_0 = Data_rate_Table[c]; //moved to spdtbl
//	reg_CTLE_CAP1_SEL_LANE_5_0 = Cap_sel_Table[c];
//	reg_CTLE_CAP2_SEL_LANE_4_0 = Cap_sel2_e_Table[c];
//#if 1 // Enabled, RL2 adjust is done in gain train
//	reg_CTLE_RL2_SEL_G_P1_LANE_3_0 = Rl2_sel_Table[c];
//	reg_CTLE_RL2_SEL_G_P2_LANE_3_0 = Rl2_sel_Table[c];
//	reg_CTLE_RL2_SEL_G_P3_LANE_3_0 = Rl2_sel_Table[c];
//	reg_CTLE_RL2_SEL_G_P4_LANE_3_0 = Rl2_sel_Table[c];
//	reg_CTLE_CURRENT2_SEL_G_P1_LANE_3_0 = Rl2_sel_Table[c];
//	reg_CTLE_CURRENT2_SEL_G_P2_LANE_3_0 = Rl2_sel_Table[c];
//	reg_CTLE_CURRENT2_SEL_G_P3_LANE_3_0 = Rl2_sel_Table[c];
//	reg_CTLE_CURRENT2_SEL_G_P4_LANE_3_0 = Rl2_sel_Table[c];
//#endif
////	reg_CTLE_RL1_SEL_LANE_3_0 = LC_sel_Table[c];
////	reg_CTLE_CURRENT1_SEL_LANE_3_0 = LC_sel_Table[c];
//
//	#if _DEBUG
//	//ana_r1 = reg_FFE_RES1_SEL_LANE_3_0;
//	//ana_c1 = reg_FFE_CAP1_SEL_LANE_3_0;
//	//DBG_Printf("\r\n Set_FFE: r=%d c=%d: ana_r1=%d c1=%d", r, c, ana_r1, ana_c1 );
//	#endif

}

void set_gain_coarse(int8_t s_ctle_GC)
{
	int8_t gain_coarse_mag, icur, ctle_cur2, ctle_cur1, ctle_cur_tia;
	int8_t tmp;

	if(s_ctle_GC >= 16)
	{
	 	// Error
		return;
	}
	signed_ctle_GC = s_ctle_GC;
	reg_MCU_DEBUG9_LANE_7_0 = signed_ctle_GC;

	if (signed_ctle_GC >= 0) {
		// positive values map directly to coarse gain register
		reg_RX_CTLE_GAIN_COARSE_LANE_3_0 = signed_ctle_GC;
		// ensure bias currents are reset to initial values
		reg_RX_CTLE_CUR2_SEL_LANE_3_0 = ctle_cur2_init;
		reg_RX_CTLE_CUR1_SEL_LANE_3_0 = ctle_cur1_init;
		reg_RX_CTLE_CUR_TIA_SEL_LANE_3_0 = ctle_cur_tia_init;
	}
	else {
		// Set coarse gain register to zero
		reg_RX_CTLE_GAIN_COARSE_LANE_3_0 = 0;
		// negative values decrease bias currents to further reduce gain
		// first decrement 2nd-stage bias, then 1st-stage biase, then TIA bias
		// TODO: should RL1 also be included?
		//
		gain_coarse_mag = abs(signed_ctle_GC);
		// determine which bias current to adjust
		icur = (gain_coarse_mag-1)%3;

		// decrement the 2nd-stage bias first
		ctle_cur2 = ctle_cur2_init - 1 - (gain_coarse_mag-1)/3;
		if (ctle_cur2 < 0)
			ctle_cur2 = 0;
		reg_RX_CTLE_CUR2_SEL_LANE_3_0 = ctle_cur2;
		// decrement the 1st-stage bias next
		tmp = ((gain_coarse_mag-2) < 0) ? -1 : (gain_coarse_mag-2)/3;
		ctle_cur1 = ctle_cur1_init - 1 - tmp;
		if (ctle_cur1 < 0)
			ctle_cur1 = 0;
		reg_RX_CTLE_CUR1_SEL_LANE_3_0 = ctle_cur1;
		// finally decrement the TIA bias current
		tmp = ((gain_coarse_mag-3) < 0) ? -1 : (gain_coarse_mag-3)/3;
		ctle_cur_tia = ctle_cur_tia_init - 1 - tmp;
		if (ctle_cur_tia < 0)
			ctle_cur_tia = 0;
		reg_RX_CTLE_CUR_TIA_SEL_LANE_3_0 = ctle_cur_tia;
	}
}

#ifdef NEED_REMAP_REGS
void set_ctle(int8_t s_ctle_R, int8_t s_ctle_C) {}
#else
void set_ctle(int8_t s_ctle_R, int8_t s_ctle_C)
{
	uint8_t rsv_msbs;

	if(s_ctle_C < 0 || s_ctle_R < 0)
	{
		// Error
		return;
	}
	else
	{
		signed_ctle_R = s_ctle_R;
		reg_MCU_DEBUG7_LANE_7_0 = signed_ctle_R;
		signed_ctle_C = s_ctle_C;
		reg_MCU_DEBUG8_LANE_7_0 = signed_ctle_C;
	}

#if PALLADIUM_SIM == 0
	if(signed_ctle_R < 16)
	{
		reg_RX_CTLE_RS1_CTRL_LANE_3_0 = signed_ctle_R;
		reg_RX_CTLE_RS2_CTRL_LANE_4_0 = 0;
	}
	else
	{
		reg_RX_CTLE_RS1_CTRL_LANE_3_0 = 15;
		reg_RX_CTLE_RS2_CTRL_LANE_4_0 = signed_ctle_R - 15;
	}

	rsv_msbs = reg_RX_TOP_RSV_LANE_7_0 & 0xf0;

	if(signed_ctle_C < 16)
	{
		reg_RX_TOP_RSV_LANE_7_0 = rsv_msbs | (15 - signed_ctle_C);
		reg_RX_CTLE_CL1_CTRL_LANE_3_0 = 15;
		reg_RX_CTLE_CS1_CTRL_LANE_5_0 = 0;
		reg_RX_CTLE_CS2_CTRL_LANE_4_0 = 0;
	}
	else if(signed_ctle_C < 31)
	{
		reg_RX_TOP_RSV_LANE_7_0 = rsv_msbs;
		reg_RX_CTLE_CL1_CTRL_LANE_3_0 = 15 - (signed_ctle_C - 15);
		reg_RX_CTLE_CS1_CTRL_LANE_5_0 = 0;
		reg_RX_CTLE_CS2_CTRL_LANE_4_0 = 0;
	}
	else if(signed_ctle_C < 62)
	{
		reg_RX_TOP_RSV_LANE_7_0 = rsv_msbs;
		reg_RX_CTLE_CL1_CTRL_LANE_3_0 = 0;
		reg_RX_CTLE_CS1_CTRL_LANE_5_0 = signed_ctle_C - 30;
		reg_RX_CTLE_CS2_CTRL_LANE_4_0 = 0;
	}
	else if(signed_ctle_C < 93)
	{
		reg_RX_TOP_RSV_LANE_7_0 = rsv_msbs;
		reg_RX_CTLE_CL1_CTRL_LANE_3_0 = 0;
		reg_RX_CTLE_CS1_CTRL_LANE_5_0 = 31;
		reg_RX_CTLE_CS2_CTRL_LANE_4_0 = signed_ctle_C - 61;
	}
	else
	{
		reg_RX_TOP_RSV_LANE_7_0 = rsv_msbs;
		reg_RX_CTLE_CL1_CTRL_LANE_3_0 = 0;
		reg_RX_CTLE_CS1_CTRL_LANE_5_0 = 31 + signed_ctle_C - 92;
		reg_RX_CTLE_CS2_CTRL_LANE_4_0 = 31;
	}

#else
    reg_RX_CTLE_RS1_CTRL_LANE_3_0 = (signed_ctle_R > 3) ? 6 : (signed_ctle_R << 1);

    if (signed_ctle_C < 30)
	reg_RX_CTLE_CS1_CTRL_LANE_5_0 = 2;
    else if(signed_ctle_C < 60)
	reg_RX_CTLE_CS1_CTRL_LANE_5_0 = 6;
    else if(signed_ctle_C < 90)
	reg_RX_CTLE_CS1_CTRL_LANE_5_0 = 10;
    else
	reg_RX_CTLE_CS1_CTRL_LANE_5_0 = 14;

#endif
}
#endif

void set_dp_lp(uint8_t num_set)
{
    if(num_set > 2)
	drv_set_dp_lms_ext(0); // error: initial to 0 
    else
	drv_set_dp_lms_ext(num_set + 1);
}

void set_dp_hp(uint8_t num_set)
{
    if(num_set > 2)
	drv_set_dp_lms_ext(0); // error: initial to 0
    else 
	drv_set_dp_lms_ext(num_set + 4);
}

//# analog ctle peak control
//# iscode: True, change by code; False, change by 0.5dB/step 
//# step: step
__code int8_t C_diff[5][2] = {{12,2},{42,3},{80,5},{100,10},{125,20}};
int8_t ctle_C_incdec(int8_t step, bool iscode)
{
	int8_t sat_ind = 0;
	int8_t Cmin = lnx_TRX_TRAIN_CTLE_C_MIN_LANE_7_0; //0;
	int8_t Cmax = lnx_TRX_TRAIN_CTLE_C_MAX_LANE_7_0; //124;
	int8_t ctle_C_new = signed_ctle_C;
	uint8_t i;
	//# half-dB step of peak-gain mapping
	//# [[code1, delta1], [code2, delta2], ...]
	//C_map = [0,2,5,7,10,13,16,18,20,23,25,27,30,32,34,36,39,42,47,53,61,63,66,69,74,80,92,105,124]

	if(step > 0)
	{
	    if(iscode)
		{
		ctle_C_new = signed_ctle_C + step;
		}
		else
		{
		for(i = 0; i < 5; i++)
			{
			if(signed_ctle_C < C_diff[i][0])
				{
				ctle_C_new = signed_ctle_C + C_diff[i][1] * step;
					break;
				}
			}
		}
		if(ctle_C_new <= Cmax)
		signed_ctle_C = ctle_C_new;
		else if(signed_ctle_C < Cmax)
		{
		signed_ctle_C = Cmax;
			sat_ind = 2;
		}
		else
		sat_ind = 1;
	}
	else
	{
		if(iscode)
		{
			ctle_C_new = signed_ctle_C + step;
		}
		else
		{
		for(i = 0; i < 5; i++)
			{
			if(signed_ctle_C < C_diff[i][0])
				{
				ctle_C_new = signed_ctle_C + C_diff[i][1] * step;
					break;
				}
			}
		}

		if(ctle_C_new >= Cmin)
		signed_ctle_C = ctle_C_new;
		else if(signed_ctle_C > Cmin)
		{
		signed_ctle_C = Cmin;
			sat_ind = -2;
		}
		else
		sat_ind = -1;

	}
	set_ctle(signed_ctle_R, signed_ctle_C);

    return sat_ind;
}

// # analog ctle DC control 
// # step: code step
int8_t ctle_R_incdec(int8_t step)
{
	int8_t sat_ind = 0;
	int8_t Rmin = lnx_TRX_TRAIN_CTLE_R_MIN_LANE_4_0; //0;
	int8_t Rmax = lnx_TRX_TRAIN_CTLE_R_MAX_LANE_4_0; //13;

	if(step > 0)
	{
	if(signed_ctle_R + step <= Rmax)
		signed_ctle_R += step;
		else if(signed_ctle_R < Rmax)
		{
		signed_ctle_R = Rmax;
			sat_ind = 2;
		}
		else
		sat_ind = 1;
	}
	else
	{
	if(signed_ctle_R + step >= Rmin)
		signed_ctle_R += step;
		else if(signed_ctle_R > Rmin)
		{
		signed_ctle_R = Rmin;
			sat_ind = -2;
		}
		else
		sat_ind = -1;

	}
	set_ctle(signed_ctle_R, signed_ctle_C);

	return sat_ind;
}

int8_t ctle_gain_coarse_incdec(int8_t step)
{
	int8_t sat_ind = 0;
	int8_t GCmin = reg2int(lnx_TRX_TRAIN_CTLE_GC_MIN_LANE_4_0, 5); //0;
	int8_t GCmax = reg2int(lnx_TRX_TRAIN_CTLE_GC_MAX_LANE_4_0, 5); //7;

	if(step > 0)
	{
		if(signed_ctle_GC + step <= GCmax)
		signed_ctle_GC += step;
		else if(signed_ctle_GC < GCmax)
		{
		signed_ctle_GC = GCmax;
			sat_ind = 2;
		}
		else
		sat_ind = 1;
	}
	else
	{
		if(signed_ctle_GC + step >= GCmin)
		signed_ctle_GC += step;
		else if(signed_ctle_GC > GCmin)
		{
		signed_ctle_GC = GCmin;
			sat_ind = -2;
		}
		else
		sat_ind = -1;
	}
	set_gain_coarse(signed_ctle_GC);

	return sat_ind;
}

/*
 * rx_blind_train() - RX blind train
 *
 * DSP spec section 5.2
 * Controls: Table 20
 */
void rx_blind_train(void)
{
	int i;
	uint16_t sft_dcs_lp0_rms, sft_dcs_hp0_rms;
	uint16_t sft_dcs_lp0_rms_last, sft_dcs_hp0_rms_last;
	uint16_t adc_in_rms, adc_in_sat, adc_in_sat2;
	bool GC_inc_en, GC_dec_en;
	int8_t Ctle_R, Ctle_C, Ctle_GC;

	TRAIN_STATUS = RX_BLIND_START;

	// rotate DPHER phase
	if(lnx_RX_TRAIN_BLIND_PHASE_SCAN_EN_LANE)
		drv_ph_scn_en(lnx_RX_TRAIN_BLIND_PHASE_SCAN_PPM_LANE_15_0);

	// inc & dec flags to control coarse gain at low speeds / PAM2
	// only active if rx_train_blind_alt_search_en==1
	GC_inc_en = 1;
	GC_dec_en = 1;
	R_sat= 0; C_sat= 0; GC_sat= 0;

	//set_ctle();   // set ctle somewhere before
	drv_adc_to_dp_sigmnt_init();
	drv_shared_sigmnt_init();
	
	for(i = 0; i < lnx_RX_TRAIN_BLIND_MAX_TRIAL_LANE_7_0; i++)
	{
		set_dp_lp(0);
		drv_sigmnt_shared_in_abs = 1;
		drv_sigmnt_shared_rot    = 1;
		drv_sigmnt_shared_len    = 8;//0;//8;

		drv_shared_sigmnt();
		sft_dcs_lp0_rms = drv_sigmnt_shared_ave; //sh_sig_mnt(true, false, 0);

		set_dp_hp(0);
		drv_shared_sigmnt();
		sft_dcs_hp0_rms = drv_sigmnt_shared_ave; //sh_sig_mnt(true, false, 0);

		// adc_in_rms, adc_in_sat, adc_in_sat2 = adc_sig_mnt(True,rx_train_blind_adc_th1,rx_train_blind_adc_th2)
		drv_sigmnt_adc_to_dp_in_abs = 1;
		drv_sigmnt_adc_to_dp_th1    = lnx_RX_TRAIN_BLIND_ADC_TH1_LANE_5_0;
		drv_sigmnt_adc_to_dp_th2    = lnx_RX_TRAIN_BLIND_ADC_TH2_LANE_5_0;
		drv_sigmnt_adc_to_dp_rot    = 1;
		drv_sigmnt_adc_to_dp_len    = 8;//0;//8;

		drv_adc_to_dp_sigmnt();
		adc_in_rms = drv_sigmnt_adc_to_dp_ave; // adc_sig_mnt(true, false, 60);
		adc_in_sat = drv_sigmnt_adc_to_dp_cdf1; // adc_sig_mnt(true, true, 60);
		adc_in_sat2 = drv_sigmnt_adc_to_dp_cdf2;

		// Ctle_R, Ctle_C, Ctle_GC = get_ctle()
		Ctle_R = signed_ctle_R;
		Ctle_C = signed_ctle_C;
		Ctle_GC = signed_ctle_GC;

		if(adc_in_sat > lnx_RX_TRAIN_BLIND_ADC_SAT_TH_LANE_15_0) { // take the reduction route
			if (GC_dec_en) {
				GC_sat = ctle_gain_coarse_incdec(-lnx_RX_TRAIN_BLIND_GAIN_COARSE_STEP_LANE_1_0 );
				GC_inc_en = lnx_RX_TRAIN_BLIND_ALT_SEARCH_EN_LANE ? 0 : 1; // 0 if rx_train_blind_alt_search_en else 1
			}
			if ((GC_sat < 0) || !GC_dec_en) { // can not reduce overall gain anymore
				if(sft_dcs_hp0_rms > sft_dcs_lp0_rms) //too much high frequency
					C_sat = ctle_C_incdec(-lnx_RX_TRAIN_BLIND_CTLE_C_STEP_LANE_1_0, false);
				else { // too much low frequency
					if (signed_ctle_R < lnx_RX_TRAIN_BLIND_CTLE_R_MAX_LANE_4_0)
						R_sat = ctle_R_incdec(+lnx_RX_TRAIN_BLIND_CTLE_R_STEP_LANE_1_0);
					else if (adc_in_sat > lnx_RX_TRAIN_BLIND_ADC_OVERFLOW_SAT_TH_LANE_15_0) { // rx_train_blind_adc_sat_th * 100
						C_sat = ctle_C_incdec(-lnx_RX_TRAIN_BLIND_CTLE_C_STEP_LANE_1_0, false);
						// R_sat = ctle_R_incdec(-rx_train_blind_r_step,**kwargs)
					}
				}
			}
		}
		else { // take the increment route
			if(sft_dcs_hp0_rms > sft_dcs_lp0_rms) { // increase low frequency
				R_sat = ctle_R_incdec(-lnx_RX_TRAIN_BLIND_CTLE_R_STEP_LANE_1_0);
				if((R_sat < 0) && GC_inc_en) { // saturated R control
					// Ctle_C = get_ctle()[1]
					if ((adc_in_sat2 > lnx_RX_TRAIN_BLIND_ADC_SAT_TH2_LANE_15_0) && (lnx_RX_TRAIN_BLIND_ALT_SEARCH_EN_LANE == 0)) // BW-KILL region - and ctle_C < 31 ?
						C_sat = ctle_C_incdec(-lnx_RX_TRAIN_BLIND_CTLE_C_STEP_LANE_1_0, false);
					else
						GC_sat = ctle_gain_coarse_incdec(+lnx_RX_TRAIN_BLIND_GAIN_COARSE_STEP_LANE_1_0 ); // increase overall gain
				}
			}
			else {
				C_sat = ctle_C_incdec(+lnx_RX_TRAIN_BLIND_CTLE_C_STEP_LANE_1_0, false);
				GC_dec_en = lnx_RX_TRAIN_BLIND_ALT_SEARCH_EN_LANE ? 0 : 1; // 0 if rx_train_blind_alt_search_en else 1
				if((C_sat > 0) && GC_inc_en) {
					// Ctle_C = get_ctle()[1]
					if ((adc_in_sat2 > lnx_RX_TRAIN_BLIND_ADC_SAT_TH2_LANE_15_0) &&
					    (signed_ctle_R < lnx_RX_TRAIN_BLIND_CTLE_R_MAX_LANE_4_0) && (lnx_RX_TRAIN_BLIND_ALT_SEARCH_EN_LANE == 0)) // BW-KILL region - and ctle_C < 31 ?
						R_sat = ctle_R_incdec(+lnx_RX_TRAIN_BLIND_CTLE_R_STEP_LANE_1_0);
					else
						GC_sat = ctle_gain_coarse_incdec(+lnx_RX_TRAIN_BLIND_GAIN_COARSE_STEP_LANE_1_0 );
				}
			}
		}

		// check last move with previuos setting
		if (i >= (lnx_RX_TRAIN_BLIND_MAX_TRIAL_LANE_7_0 - 1)) {
			set_dp_lp(0);
			drv_sigmnt_shared_in_abs = 1;
			drv_sigmnt_shared_rot    = 1;
			drv_sigmnt_shared_len    = 8;//0;//8;

			drv_shared_sigmnt();
			sft_dcs_lp0_rms_last = drv_sigmnt_shared_ave;

			set_dp_hp(0);
			drv_shared_sigmnt();
			sft_dcs_hp0_rms_last = drv_sigmnt_shared_ave;

			if (abs(sft_dcs_hp0_rms_last-sft_dcs_lp0_rms_last) > abs(sft_dcs_hp0_rms-sft_dcs_lp0_rms)) {
				set_ctle(Ctle_R, Ctle_C);
				set_gain_coarse(Ctle_GC);
			}
		}
	}

	if(lnx_RX_TRAIN_BLIND_PHASE_SCAN_EN_LANE)
		drv_ph_scn_dis();

	TRAIN_STATUS = RX_BLIND_END;
}

void init_adc_sat_check(void)
{
	// The initial set of CTLE to avoid too small or to LARGE ADC input signal
	// DSP section 5.1
	// Controls: Table 18

	uint8_t i;
	uint16_t adc_in_th1, adc_in_th2;
	uint16_t adc_large_sig_th = (uint16_t)lnx_RX_TRAIN_ADC_SAT_CHECK_LARGE_SIG_TH_LANE_7_0 << 8;
	uint16_t adc_small_sig_th = (uint16_t)lnx_RX_TRAIN_ADC_SAT_CHECK_SMALL_SIG_TH_LANE_7_0 << 8;

	TRAIN_STATUS = TRX_SAT_CHECK_START;

	// set_ctle(init_set[1][0],init_set[1][1],init_set[1][2])
	set_ctle(lnx_RX_TRAIN_ADC_SAT_CHECK_SMALL_SIGNAL_R_LANE_3_0, lnx_RX_TRAIN_ADC_SAT_CHECK_SMALL_SIGNAL_C_LANE_6_0);
	set_gain_coarse(reg2int(lnx_RX_TRAIN_ADC_SAT_CHECK_SMALL_SIGNAL_COARSE_GAIN_LANE_4_0, 5));

	// rotate DPHER phase
	if(lnx_RX_TRAIN_ADC_SAT_CHECK_PHASE_SCAN_EN_LANE == 1)
		drv_ph_scn_en(lnx_RX_TRAIN_ADC_SAT_CHECK_PHASE_SCAN_PPM_LANE_15_0);

	// adc_in_rms, adc_in_th1, adc_in_th2 = adc_sig_mnt(True,rx_train_adc_sat_check_th1,rx_train_adc_sat_check_th2)
	drv_adc_to_dp_sigmnt_init();
	drv_sigmnt_adc_to_dp_in_abs = 1;
	drv_sigmnt_adc_to_dp_th1    = lnx_RX_TRAIN_ADC_SAT_CHECK_TH1_LANE_5_0;
	drv_sigmnt_adc_to_dp_th2    = lnx_RX_TRAIN_ADC_SAT_CHECK_TH2_LANE_5_0;
	drv_sigmnt_adc_to_dp_rot    = 1;
	drv_sigmnt_adc_to_dp_len    = 8;//0;//8;

	drv_adc_to_dp_sigmnt();
	adc_in_th1 = drv_sigmnt_adc_to_dp_cdf1;// adc_sig_mnt(true, true, 60);
	adc_in_th2 = drv_sigmnt_adc_to_dp_cdf2;// adc_sig_mnt(true, true, 60);
	// the following 4 lines are for debug
	lnx_RX_TRAIN_ADC_IN_TH1_LANE_15_0 = adc_in_th1;
	lnx_RX_TRAIN_ADC_IN_TH2_LANE_15_0 = adc_in_th2;
	reg_MCU_DEBUGF_LANE_7_0 = 1;
	is_pause(8);
	//if ((adc_in_th2 >> 8) > lnx_RX_TRAIN_ADC_SAT_CHECK_LARGE_SIG_TH_LANE_7_0) // large signal
	if (adc_in_th2 > adc_large_sig_th) // large signal
	{
		set_ctle(lnx_RX_TRAIN_ADC_SAT_CHECK_NOMINAL_SIGNAL_R_LANE_3_0, lnx_RX_TRAIN_ADC_SAT_CHECK_NOMINAL_SIGNAL_C_LANE_6_0);
		set_gain_coarse(reg2int(lnx_RX_TRAIN_ADC_SAT_CHECK_NOMINAL_SIGNAL_COARSE_GAIN_LANE_4_0, 5));

		// adc_in_rms, adc_in_th1, adc_in_th2 = adc_sig_mnt(True,rx_train_adc_sat_check_th1,rx_train_adc_sat_check_th2)
		drv_adc_to_dp_sigmnt_init();
		drv_sigmnt_adc_to_dp_in_abs = 1;
		drv_sigmnt_adc_to_dp_th1    = lnx_RX_TRAIN_ADC_SAT_CHECK_TH1_LANE_5_0;
		drv_sigmnt_adc_to_dp_th2    = lnx_RX_TRAIN_ADC_SAT_CHECK_TH2_LANE_5_0;
		drv_sigmnt_adc_to_dp_rot    = 1;
		drv_sigmnt_adc_to_dp_len    = 8;//0;//8;

		drv_adc_to_dp_sigmnt();
		adc_in_th1 = drv_sigmnt_adc_to_dp_cdf1;// adc_sig_mnt(true, true, 60);
		adc_in_th2 = drv_sigmnt_adc_to_dp_cdf2;// adc_sig_mnt(true, true, 60);
		// the following 4 lines are for debug
		lnx_RX_TRAIN_ADC_IN_TH1_LANE_15_0 = adc_in_th1;
		lnx_RX_TRAIN_ADC_IN_TH2_LANE_15_0 = adc_in_th2;
		reg_MCU_DEBUGF_LANE_7_0 += 1;
		is_pause(8);
		//if ((adc_in_th2 >> 8) > lnx_RX_TRAIN_ADC_SAT_CHECK_LARGE_SIG_TH_LANE_7_0) // still large signal
		if (adc_in_th2 > adc_large_sig_th) // large signal
		{
			set_ctle(lnx_RX_TRAIN_ADC_SAT_CHECK_LARGE_SIGNAL_R_LANE_3_0, lnx_RX_TRAIN_ADC_SAT_CHECK_LARGE_SIGNAL_C_LANE_6_0);
			set_gain_coarse(reg2int(lnx_RX_TRAIN_ADC_SAT_CHECK_LARGE_SIGNAL_COARSE_GAIN_LANE_4_0, 5));
		}
	}

	for(i = 0; i < 2; i++)
	{
		// adc_in_rms, adc_in_th1, adc_in_th2 = adc_sig_mnt(True,rx_train_adc_sat_check_th1,rx_train_adc_sat_check_th2)
		drv_adc_to_dp_sigmnt_init();
		drv_sigmnt_adc_to_dp_in_abs = 1;
		drv_sigmnt_adc_to_dp_th1    = lnx_RX_TRAIN_ADC_SAT_CHECK_TH1_LANE_5_0;
		drv_sigmnt_adc_to_dp_th2    = lnx_RX_TRAIN_ADC_SAT_CHECK_TH2_LANE_5_0;
		drv_sigmnt_adc_to_dp_rot    = 1;
		drv_sigmnt_adc_to_dp_len    = 8;//0;//8;

		drv_adc_to_dp_sigmnt();
		adc_in_th1 = drv_sigmnt_adc_to_dp_cdf1;// adc_sig_mnt(true, true, 60);
		adc_in_th2 = drv_sigmnt_adc_to_dp_cdf2;// adc_sig_mnt(true, true, 60);
		// the following 4 lines are for debug
		lnx_RX_TRAIN_ADC_IN_TH1_LANE_15_0 = adc_in_th1;
		lnx_RX_TRAIN_ADC_IN_TH2_LANE_15_0 = adc_in_th2;
		reg_MCU_DEBUGF_LANE_7_0 += 1;
		is_pause(8);

		//if (((adc_in_th1 >> 8) > lnx_RX_TRAIN_ADC_SAT_CHECK_SMALL_SIG_TH_LANE_7_0) &&
		//    ((adc_in_th2 >> 8) > lnx_RX_TRAIN_ADC_SAT_CHECK_LARGE_SIG_TH_LANE_7_0))
		if ((adc_in_th1 > adc_small_sig_th) && (adc_in_th2 > adc_large_sig_th))
		{
			ctle_gain_coarse_incdec(-1);
		}
		//else if (((adc_in_th1 >> 8) < lnx_RX_TRAIN_ADC_SAT_CHECK_SMALL_SIG_TH_LANE_7_0) &&
		//	 ((adc_in_th2 >> 8) < lnx_RX_TRAIN_ADC_SAT_CHECK_LARGE_SIG_TH_LANE_7_0))
		else if ((adc_in_th1 < adc_small_sig_th) && (adc_in_th2 < adc_large_sig_th))
		{
			ctle_gain_coarse_incdec(+1);
		}
	}
 
	if(lnx_RX_TRAIN_ADC_SAT_CHECK_PHASE_SCAN_EN_LANE == 1)
		drv_ph_scn_dis();

	TRAIN_STATUS = TRX_SAT_CHECK_END;
}

/*
 * txffe_gradient_base_train() - TX FFE gradient based adaptation
 *
 * DSP spec section 6.2.1
 * Controls: Table 25
 */
bool txffe_gradient_base_train(int8_t *gradient)
{
    bool txffe_updated = false;
    int8_t update_flag = 0;
    int8_t tx_train_opt_adapt_dir[4];
    uint8_t ext_iter, tap, iter;

    uint16_t snr_dp, snr_dp_check, snr_dtl;
    uint16_t adc_in_rms, adc_in_sat;

    TRAIN_STATUS = TXFFE_GRADIENT_BASE_START;
    set_lms_continuous();
    wait_converge((uint16_t)lnx_TX_TRAIN_OPT_GRADIENT_TIMER_LANE_3_0);

    tx_train_opt_adapt_dir[0] = lnx_TX_TRAIN_OPT_GN2_ADAPT_EN_LANE;
    tx_train_opt_adapt_dir[1] = lnx_TX_TRAIN_OPT_GN1_ADAPT_EN_LANE;
    tx_train_opt_adapt_dir[2] = lnx_TX_TRAIN_OPT_G0_ADAPT_EN_LANE;
    tx_train_opt_adapt_dir[3] = lnx_TX_TRAIN_OPT_G1_ADAPT_EN_LANE;

    // snr_dp = mse_mnt(False, trx_train_snr_len)
    reg_MSE_CONT_MODE_LANE = 0;
    reg_MSE_DTL_SEL_LANE = 0;
    reg_MSE_LEN_LANE_3_0 = lnx_TRX_TRAIN_SNR_LEN_LANE_3_0; //4;
    drv_mse_run();
    drv_mse_read();
    snr_dp = snr_approx(reg_MSE_VAL_LANE_15_0);
    reg_MCU_DEBUG6_LANE_7_0 = (snr_dp >> 3) > 255 ? 255 : (snr_dp >> 3);
    drv_mse_exit();

    for(ext_iter = 0; ext_iter < lnx_TX_TRAIN_OPT_EXT_ITER_MAX_LANE_4_0; ext_iter++)
    {
        for(tap = 0; tap < 4; tap++)
        {
            for(iter = 0; iter < lnx_TX_TRAIN_OPT_INT_ITER_MAX_LANE_4_0; iter++)
            {
                if(tx_train_opt_adapt_dir[tap] == 1)
                {
                    //drv_cds(cds_table[CDS_EN_TXFFETRAIN]);
                    //set_lms_continuous();

                    // cdr lock checking
                    // snr_dtl = mse_mnt(True, trx_train_snr_len)
                    reg_MSE_CONT_MODE_LANE = 0;
                    reg_MSE_DTL_SEL_LANE = 1;
                    reg_MSE_LEN_LANE_3_0 = lnx_TRX_TRAIN_SNR_LEN_LANE_3_0; //5;
                    drv_mse_run();
                    drv_mse_read();
                    snr_dtl = snr_approx(reg_MSE_VAL_LANE_15_0);
                    reg_MCU_DEBUG6_LANE_7_0 = (snr_dtl >> 3) > 255 ? 255 : (snr_dtl >> 3);
                    drv_mse_exit();
                    if( !( check_cdr_lock() || (snr_dtl < SNR_DTL_TH)))
                    {
                        // possible loss of lock
                        train_pass = 0;
                        // continue;
                    }

                    // snr_dp = mse_mnt(False, trx_train_snr_len)
                    reg_MSE_CONT_MODE_LANE = 0;
                    reg_MSE_DTL_SEL_LANE = 0;
                    reg_MSE_LEN_LANE_3_0 = lnx_TRX_TRAIN_SNR_LEN_LANE_3_0; //4;
                    drv_mse_run();
                    drv_mse_read();
                    snr_dp = snr_approx(reg_MSE_VAL_LANE_15_0);
                    reg_MCU_DEBUG6_LANE_7_0 = (snr_dp >> 3) > 255 ? 255 : (snr_dp >> 3);
                    drv_mse_exit();

                    update_flag = set_TXFFE_tap( 4 - tap - 1, gradient[tap]);
                    wait_converge((uint16_t)lnx_TX_TRAIN_OPT_GRADIENT_TIMER_LANE_3_0);
                    if(update_flag == 1)
                    {
                        //drv_cds(cds_table[CDS_EN_TXFFETRAIN]);

                        // snr_dp_check = mse_mnt(False, trx_train_snr_len) 
                        reg_MSE_CONT_MODE_LANE = 0;
                        reg_MSE_DTL_SEL_LANE = 0;
                        reg_MSE_LEN_LANE_3_0 = lnx_TRX_TRAIN_SNR_LEN_LANE_3_0; //4;
                        drv_mse_run();
                        drv_mse_read();
                        snr_dp_check = snr_approx(reg_MSE_VAL_LANE_15_0);
                        reg_MCU_DEBUG6_LANE_7_0 = (snr_dp_check >> 3) > 255 ? 255 : (snr_dp_check >> 3);
                        drv_mse_exit();

                        // adc_in_rms, adc_in_sat, _ = adc_sig_mnt(True,tx_train_opt_adc_th1, 0)
                        drv_adc_to_dp_sigmnt_init();
                        drv_sigmnt_adc_to_dp_in_abs = 1;
                        drv_sigmnt_adc_to_dp_th1    = lnx_TX_TRAIN_OPT_ADC_TH1_LANE_5_0;
                        drv_sigmnt_adc_to_dp_th2    = 0;
                        drv_sigmnt_adc_to_dp_rot    = 1;
                        drv_sigmnt_adc_to_dp_len    = 8;//0;//8;

                        drv_adc_to_dp_sigmnt();
                        adc_in_rms = drv_sigmnt_adc_to_dp_ave;// adc_sig_mnt(true, false, 60);
                        adc_in_sat = drv_sigmnt_adc_to_dp_cdf1;// adc_sig_mnt(true, true, 60);
                
                        if((snr_dp_check > snr_dp + lnx_TX_TRAIN_OPT_SNR_TH_LANE_7_0) && (adc_in_sat < lnx_TX_TRAIN_OPT_ADC_SAT_TH_LANE_15_0))
                        {
                            snr_dp = snr_dp_check;
                            txffe_updated = true;
                        }
                        else
                        {
                            gradient[tap] = -gradient[tap];
                            //set_lms_continuous();
                            set_TXFFE_tap( 4 - tap - 1, gradient[tap]);
	                        wait_converge((uint16_t)lnx_TX_TRAIN_OPT_GRADIENT_TIMER_LANE_3_0);
                        }
                    }
                    else
                    {
                        if(tap == 3)
                        {
                            if(tx.g1_is_max == 1)
                                gradient[tap] = -1;
                            else if(tx.g1_is_min == 1)
                                gradient[tap] = 1;

                        }
                        else if(tap == 2)
                        {
                            if(tx.g0_is_max == 1)
                                gradient[tap] = -1;
                            else if(tx.g0_is_min == 1)
                                gradient[tap] = 1;

                        }
                        else if(tap == 1)
                        {
                            if(tx.gn1_is_max == 1)
                                gradient[tap] = -1;
                            else if(tx.gn1_is_min == 1)
                                gradient[tap] = 1;
                        }
                        else if(tap == 0)
                        {
                            if(tx.gn2_is_max == 1)
                                gradient[tap] = -1;
                            else if(tx.gn2_is_min == 1)
                                gradient[tap] = 1;
                        }
                        else
                        {
                            // Error: should be here
                        }
                    }
                }
            }
        }
    }
    disable_lms_continuous();
    TRAIN_STATUS = TXFFE_GRADIENT_BASE_END;
    return txffe_updated;
}

/*
 * trx_train_txffe_det_preset() - TX FFE preset selection
 *
 * DSP spec section 6.3
 */
uint8_t trx_train_txffe_det_preset(void)
{
	uint16_t sft_dcs_lp0_rms, sft_dcs_hp0_rms;
	//uint16_t sft_dcs_lp2_rms, sft_dcs_bp_rms;

	TRAIN_STATUS = TRX_TXFFE_DET_PRESET_START;

	// checking the high and low frequency component
	set_dp_lp(0);
	// sft_dcs_lp0_rms, _, _ = sh_sig_mnt(True,0)
	drv_shared_sigmnt_init();
	drv_sigmnt_shared_in_abs = 1;
	drv_sigmnt_shared_rot    = 1;
	drv_sigmnt_shared_len    = 8;//0;//8;

	drv_shared_sigmnt();
	sft_dcs_lp0_rms = drv_sigmnt_shared_ave;

	set_dp_hp(0);
	// sft_dcs_hp0_rms, _, _ = sh_sig_mnt(True,0)
	drv_shared_sigmnt();
	sft_dcs_hp0_rms = drv_sigmnt_shared_ave;

   	TRAIN_STATUS = TRX_TXFFE_DET_PRESET_END;
    if(sft_dcs_lp0_rms > sft_dcs_hp0_rms)
    {
        return 3;
    }
    else
    {
        return 1;
    }

//    if(sft_dcs_lp0_rms > sft_dcs_hp0_rms)
//   	{
//   		TRAIN_STATUS = TRX_TXFFE_DET_PRESET_END;
//   		return 1;
//   	}
//   	else
//   	{
//   		set_dp_lp(2);
//   		drv_shared_sigmnt();
//   		sft_dcs_lp2_rms = drv_sigmnt_shared_ave;
//   
//   		set_dp_hp(2);
//   		drv_shared_sigmnt();
//   		sft_dcs_bp_rms = drv_sigmnt_shared_ave;
//   
//   		TRAIN_STATUS = TRX_TXFFE_DET_PRESET_END;
//   
//   		if(sft_dcs_lp2_rms > sft_dcs_bp_rms)
//   			return 2;
//   		else 
//   			return 3;
//   	}
}

/*
 * trx_train_txffe_set_preset() - Ask TX FFE preset and CTLE compensation (if enabled)
 *
 * DSP spec section 6.3 / 6.3.1
 * Controls: Table 27
 */
void trx_train_txffe_set_preset(uint8_t preset_num)
{
    uint16_t snr_dp = 0;
    uint16_t snr_dp_up = 0;
    uint8_t i;

    TRAIN_STATUS = TRX_TXFFE_SET_PRESET_START;

    set_TXFFE_preset(preset_num);
    if(lnx_TX_TRAIN_PRESET_CTLE_COMP_EN_LANE)
    {
	if((preset_num == 2) || (preset_num == 3))
	{
	    drv_cds(cds_table[CDS_EN_TXFFETRAIN]);

	    // snr_dp = mse_mnt(False, trx_train_snr_len)
	    reg_MSE_CONT_MODE_LANE = 0;
	    reg_MSE_DTL_SEL_LANE = 0;
	    reg_MSE_LEN_LANE_3_0 = lnx_TRX_TRAIN_SNR_LEN_LANE_3_0; //4;
	    drv_mse_run();
	    drv_mse_read();
	    snr_dp = snr_approx(reg_MSE_VAL_LANE_15_0);
	    reg_MCU_DEBUG6_LANE_7_0 = (snr_dp >> 3) > 255 ? 255 : (snr_dp >> 3);
	    drv_mse_exit();

	    for(i = 0; i < lnx_TX_TRAIN_PRESET_CTLE_COMP_ITER_MAX_LANE_3_0; i++)
	    {
		R_sat = ctle_R_incdec(-lnx_TX_TRAIN_PRESET_CTLE_COMP_R_STEP_LANE_1_0);
		drv_cds(cds_table[CDS_EN_TXFFETRAIN]);

		// snr_dp_up = mse_mnt(False, trx_train_snr_len)
		reg_MSE_CONT_MODE_LANE = 0;
		reg_MSE_DTL_SEL_LANE = 0;
		reg_MSE_LEN_LANE_3_0 = lnx_TRX_TRAIN_SNR_LEN_LANE_3_0; //4;
		drv_mse_run();
		drv_mse_read();
		snr_dp_up = snr_approx(reg_MSE_VAL_LANE_15_0);
		reg_MCU_DEBUG6_LANE_7_0 = (snr_dp_up >> 3) > 255 ? 255 : (snr_dp_up >> 3);
		drv_mse_exit();

		if(snr_dp_up > snr_dp)
		    snr_dp = snr_dp_up;
		else
		{
		    R_sat = ctle_R_incdec(+lnx_TX_TRAIN_PRESET_CTLE_COMP_R_STEP_LANE_1_0);
		    drv_cds(cds_table[CDS_EN_TXFFETRAIN]);

		    // snr_dp = mse_mnt(False, trx_train_snr_len)
		    reg_MSE_CONT_MODE_LANE = 0;
		    reg_MSE_DTL_SEL_LANE = 0;
		    reg_MSE_LEN_LANE_3_0 = lnx_TRX_TRAIN_SNR_LEN_LANE_3_0; //4;
		    drv_mse_run();
		    drv_mse_read();
		    snr_dp = snr_approx(reg_MSE_VAL_LANE_15_0);
		    reg_MCU_DEBUG6_LANE_7_0 = (snr_dp >> 3) > 255 ? 255 : (snr_dp >> 3);
		    drv_mse_exit();
		    break;
		}
	    }
	}
    }
    TRAIN_STATUS = TRX_TXFFE_SET_PRESET_END;
}

/*
 * Return SNR averaged over "Nave" measurments
 */
uint16_t mse_mnt_ave(bool dtl_sel, uint8_t Nave)
{
	uint32_t mse = 0;
	uint8_t i;

	if (dtl_sel)
		reg_MSE_DTL_SEL_LANE = 1;
	else
		reg_MSE_DTL_SEL_LANE = 0;

	reg_MSE_CONT_MODE_LANE = 0;
	reg_MSE_LEN_LANE_3_0 = lnx_TRX_TRAIN_SNR_LEN_LANE_3_0; //4;
	drv_mse_run();
	drv_mse_read();
	mse = snr_approx(reg_MSE_VAL_LANE_15_0);
	reg_MCU_DEBUG6_LANE_7_0 = (mse >> 3) > 255 ? 255 : (mse >> 3);
	drv_mse_exit();

	if (Nave > 0) {
		for (i = 1; i < Nave; i++) {
			reg_MSE_CONT_MODE_LANE = 0;
			reg_MSE_LEN_LANE_3_0 = lnx_TRX_TRAIN_SNR_LEN_LANE_3_0; //4;
			drv_mse_run();
			drv_mse_read();
			mse += (uint32_t)snr_approx(reg_MSE_VAL_LANE_15_0);
			drv_mse_exit();
		}
		mse = mse / Nave;
		reg_MCU_DEBUG6_LANE_7_0 = (mse >> 3) > 255 ? 255 : (mse >> 3);
	}

	return ((uint16_t)mse);
}

int argmax(uint16_t *alist)
{
	int i;
	int best_idx = 0;
	uint16_t best_val = alist[best_idx];

	for (i = 1; i < lnx_TRX_TRAIN_CTLE_GC_MAX_LANE_4_0; i++) {
		if (alist[i] > best_val) {
			best_val = alist[i];
			best_idx = i;
		}
	}
	return (best_idx);
}

/*
 * ctle_grid_search() - CTLE grid search
 *
 * DSP spec section 5.3.1
 * Controls: Table 23
 */
void ctle_grid_search(uint8_t cds_mode)
{
    uint16_t adc_in_rms, adc_in_sat;
    uint16_t snr_dtl;
    int8_t i, j, k, num_iter, best_idx;
    int8_t init_ctle_R, init_ctle_C;
    int8_t ctle_R = signed_ctle_R;
    int8_t ctle_C = signed_ctle_C;
    int8_t ctle_GC = signed_ctle_GC;
    int8_t Cmin = lnx_TRX_TRAIN_CTLE_C_MIN_LANE_7_0; //0;
    int8_t Cmax = lnx_TRX_TRAIN_CTLE_C_MAX_LANE_7_0; //124;
    int8_t Rmin = lnx_TRX_TRAIN_CTLE_R_MIN_LANE_4_0; //0;
    int8_t Rmax = lnx_TRX_TRAIN_CTLE_R_MAX_LANE_4_0; //13;
    int8_t GCmin = reg2int(lnx_TRX_TRAIN_CTLE_GC_MIN_LANE_4_0, 5); //0;
    int8_t GCmax = reg2int(lnx_TRX_TRAIN_CTLE_GC_MAX_LANE_4_0, 5); //7;

    uint8_t use_table = 0;
    //uint8_t C_map[] = {0,2,5,7,10,13,16,18,20,23,25,27,30,32,34,36,39,42,47,53,61,63,66,69,74,80,92,105,124};
    int8_t Rstart, Rend, Rcurrent, Cstart, Cend, Ccurrent, GCstart, GCend;

    uint16_t init_cost_function = 0;
    uint16_t cost_function = 0;
    uint16_t new_cost_function = 0;

    uint8_t Nave = lnx_RX_TRAIN_OPT_SNR_NAVE_LANE_7_0;
    bool reverse_C_list = false;
    bool reverse_R_list = false;
  
    TRAIN_STATUS = CTLE_GRID_SEARCH_START;

    init_cost_function = mse_mnt_ave(false, Nave);
    //reg_MSE_CONT_MODE_LANE = 0;
    //reg_MSE_DTL_SEL_LANE = 0;
    //reg_MSE_LEN_LANE_3_0 = lnx_TRX_TRAIN_SNR_LEN_LANE_3_0; //4;
    //drv_mse_run();
    //drv_mse_read();
    //init_cost_function = snr_approx(reg_MSE_VAL_LANE_15_0);
    //reg_MCU_DEBUG6_LANE_7_0 = (init_cost_function >> 3) > 255 ? 255 : (init_cost_function >> 3);
    //drv_mse_exit();

    init_ctle_R = ctle_R;
    init_ctle_C = ctle_C;

    if(use_table)
    {
	// TODO
    }
    else
    {
	Rstart = (Rmin > (ctle_R - lnx_RX_TRAIN_OPT_R_STEP_LANE_4_0 * lnx_RX_TRAIN_OPT_R_ITER_MAX_LANE_4_0))? Rmin : ctle_R - lnx_RX_TRAIN_OPT_R_STEP_LANE_4_0 * lnx_RX_TRAIN_OPT_R_ITER_MAX_LANE_4_0;
	Rend = (Rmax < (ctle_R + lnx_RX_TRAIN_OPT_R_STEP_LANE_4_0 * lnx_RX_TRAIN_OPT_R_ITER_MAX_LANE_4_0))? Rmax : ctle_R + lnx_RX_TRAIN_OPT_R_STEP_LANE_4_0 * lnx_RX_TRAIN_OPT_R_ITER_MAX_LANE_4_0;
	Cstart = (Cmin > (ctle_C - lnx_RX_TRAIN_OPT_C_STEP_LANE_4_0 * lnx_RX_TRAIN_OPT_C_ITER_MAX_LANE_4_0))? Cmin : ctle_C - lnx_RX_TRAIN_OPT_C_STEP_LANE_4_0 * lnx_RX_TRAIN_OPT_C_ITER_MAX_LANE_4_0;
	Cend = (Cmax < (ctle_C + lnx_RX_TRAIN_OPT_C_STEP_LANE_4_0 * lnx_RX_TRAIN_OPT_C_ITER_MAX_LANE_4_0))? Cmax : ctle_C + lnx_RX_TRAIN_OPT_C_STEP_LANE_4_0 * lnx_RX_TRAIN_OPT_C_ITER_MAX_LANE_4_0;
	GCstart = (GCmin > (ctle_GC - lnx_RX_TRAIN_OPT_GC_STEP_LANE_4_0 * lnx_RX_TRAIN_OPT_GC_ITER_MAX_LANE_4_0))? GCmin : ctle_GC - lnx_RX_TRAIN_OPT_GC_STEP_LANE_4_0 * lnx_RX_TRAIN_OPT_GC_ITER_MAX_LANE_4_0;
	GCend = (GCmax < (ctle_GC + lnx_RX_TRAIN_OPT_GC_STEP_LANE_4_0 * lnx_RX_TRAIN_OPT_GC_ITER_MAX_LANE_4_0))? GCmax : ctle_GC + lnx_RX_TRAIN_OPT_GC_STEP_LANE_4_0 * lnx_RX_TRAIN_OPT_GC_ITER_MAX_LANE_4_0;
    }

    memset0((uint8_t *)cost_function_list, 12); //cost_function_list = zeros(len(GC_grid), dtype=int);
    memset0((uint8_t *)R_list, 12);             //R_list = zeros(len(GC_grid), dtype=int);
    memset0((uint8_t *)C_list, 12);             //C_list = zeros(len(GC_grid), dtype=int);
    memset0((uint8_t *)GC_list, 12);             //GC_list = zeros(len(GC_grid), dtype=int);
    num_iter = 0;
    set_lms_continuous();

    // Move to the starting point in the grid
    ctle_walk(Rstart, Cstart, GCstart);
    // update the initial cost function
    //init_cost_function = mse_mnt(False, trx_train_snr_len, Nave)
    //init_Ctle_R = rc_list[0][0]
    //init_Ctle_C = rc_list[0][1]

    for(k = GCstart; k <= GCend; k += lnx_RX_TRAIN_OPT_GC_STEP_LANE_4_0)
    {
	cost_function = init_cost_function;
	ctle_R = init_ctle_R;
	ctle_C = init_ctle_C;
	for(j = Cstart; j <= Cend; j += lnx_RX_TRAIN_OPT_C_STEP_LANE_4_0)
	{
	    if (reverse_C_list)
		Ccurrent = Cend + Cstart - j;
	    else
		Ccurrent = j;
	    for(i = Rstart; i <= Rend; i += lnx_RX_TRAIN_OPT_R_STEP_LANE_4_0)
	    {
		if (reverse_R_list)
		    Rcurrent = Rend + Rstart - i;
		else
		    Rcurrent = i;

		set_ctle(Rcurrent, Ccurrent);
		set_gain_coarse(k);
		//drv_cds(cds_table[cds_mode]);

		snr_dtl = mse_mnt_ave(true, Nave);
		//reg_MSE_CONT_MODE_LANE = 0;
		//reg_MSE_DTL_SEL_LANE = 1;
		//reg_MSE_LEN_LANE_3_0 = lnx_TRX_TRAIN_SNR_LEN_LANE_3_0; //5;
		//drv_mse_run();
		//drv_mse_read();
		//snr_dtl = snr_approx(reg_MSE_VAL_LANE_15_0);
		//reg_MCU_DEBUG6_LANE_7_0 = (snr_dtl >> 3) > 255 ? 255 : (snr_dtl >> 3);
		//drv_mse_exit();
		if( !( check_cdr_lock() || (snr_dtl > SNR_DTL_TH)))
		{
			// possible loss of lock
			new_cost_function = cost_function;
		}
		else
		{
			new_cost_function = mse_mnt_ave(false, Nave);
			//reg_MSE_CONT_MODE_LANE = 0;
			//reg_MSE_DTL_SEL_LANE = 0;
			//reg_MSE_LEN_LANE_3_0 = lnx_TRX_TRAIN_SNR_LEN_LANE_3_0; //4;
			//drv_mse_run();
			//drv_mse_read();
			//new_cost_function = snr_approx(reg_MSE_VAL_LANE_15_0);
			//reg_MCU_DEBUG6_LANE_7_0 = (new_cost_function >> 3) > 255 ? 255 : (new_cost_function >> 3);
			//drv_mse_exit();
			
		}

		if(new_cost_function > (cost_function + lnx_RX_TRAIN_OPT_SNR_TH_LANE_7_0))
		{
			// adc_in_rms, adc_in_sat, _ = adc_sig_mnt(True,rx_train_opt_adc_th1, 0)
			drv_adc_to_dp_sigmnt_init();
			drv_sigmnt_adc_to_dp_in_abs = 1;
	  		drv_sigmnt_adc_to_dp_th1    = lnx_RX_TRAIN_OPT_ADC_TH1_LANE_5_0;
  			drv_sigmnt_adc_to_dp_th2    = 0;
  			drv_sigmnt_adc_to_dp_rot    = 1;
	  		drv_sigmnt_adc_to_dp_len    = 8;//0;//8;
    
			drv_adc_to_dp_sigmnt();
			adc_in_rms = drv_sigmnt_adc_to_dp_ave;// adc_sig_mnt(true, false, 60);
			adc_in_sat = drv_sigmnt_adc_to_dp_cdf1;// adc_sig_mnt(true, true, 60);
		    if(adc_in_sat < lnx_RX_TRAIN_OPT_ADC_SAT_TH_LANE_15_0)
		    {
			ctle_R = Rcurrent;
			ctle_C = Ccurrent;
			cost_function = new_cost_function;
		    }
		    //else
		    //  too much saturation
		}
	    }
	    // reverse direction of the R list for next iteration
	    // R_grid = R_grid[::-1]
	    reverse_R_list = !reverse_R_list;
	}
	// saving the result
	cost_function_list[num_iter] = cost_function;
	R_list[num_iter] = ctle_R;
	C_list[num_iter] = ctle_C;
	GC_list[num_iter] = k;
	num_iter = num_iter+1;
	// reverse the order of the C list for next iteration of GC
	// C_grid = C_grid[::-1]
	reverse_C_list = !reverse_C_list;
    }

    best_idx = argmax(cost_function_list);
    ctle_R = R_list[best_idx];
    ctle_C = C_list[best_idx];
    ctle_GC = GC_list[best_idx];

    // setting best CTLE after iteration
    ctle_walk(ctle_R, ctle_C, ctle_GC);
    disable_lms_continuous();

    TRAIN_STATUS = CTLE_GRID_SEARCH_END;
}

/*
 * Update CTLE from current value to the specified value
 * changing each parameter only one step at a time.
 */
void ctle_walk(int8_t s_ctle_R, int8_t s_ctle_C, int8_t s_ctle_GC)
{
    // Move slowly to the final CTLE R & C value one step at a time2
    uint16_t wait_time = lnx_RX_TRAIN_OPT_CTLE_WALK_TIMER_LANE_3_0; // TODO: not sure if wait timer is needed???

    // get the current CTLE settings
    int8_t Rx = signed_ctle_R;
    int8_t Cx = signed_ctle_C;
    int8_t GCx = signed_ctle_GC;

    bool Rupdate = 1;
    bool Cupdate = 1;
    bool GCupdate = 1;

    while (Rupdate || Cupdate || GCupdate) {
        // update coarse gain one step if needed
        if (s_ctle_GC > GCx) {
            GCx += 1;
	    set_ctle(Rx, Cx);
	    set_gain_coarse(GCx);
	    wait_converge(wait_time);
	}
        else if (s_ctle_GC < GCx) {
            GCx -= 1;
	    set_ctle(Rx, Cx);
	    set_gain_coarse(GCx);
	    wait_converge(wait_time);
	}
        else {
            GCupdate = 0;
	}

        // update R one step if needed
        if (s_ctle_R > Rx) {
            Rx += 1;
	    set_ctle(Rx, Cx);
	    set_gain_coarse(GCx);
	    wait_converge(wait_time);
	}
        else if (s_ctle_R < Rx) {
            Rx -= 1;
	    set_ctle(Rx, Cx);
	    set_gain_coarse(GCx);
	    wait_converge(wait_time);
	}
        else {
            Rupdate = 0;
	}

        // update C one step if needed
        if (s_ctle_C > Cx) {
            Cx += 1;
	    set_ctle(Rx, Cx);
	    set_gain_coarse(GCx);
	    wait_converge(wait_time);
	}
        else if (s_ctle_C < Cx) {
            Cx -= 1;
	    set_ctle(Rx, Cx);
	    set_gain_coarse(GCx);
	    wait_converge(wait_time);
	}
        else {
            Cupdate = 0;
	}

	//if (Rupdate || Cupdate || GCupdate) {
	//    set_ctle(Rx, Cx);
	//    set_gain_coarse(GCx);
	//    wait_converge(wait_time);
	//}
    }
}

/*
 * trx_opt_fine() - TRX optimization
 *
 * DSP spec section 7.2
 * Controls: Table 32
 */
void trx_opt_fine(void)
{
	bool txffe_updated = false;
	bool move_id = false;
    uint8_t i;
	int8_t R_start, C_start, R_stop, C_stop;
	int8_t tx_ffe_gradient[] = {1,-1,-1,-1};
	            
    TRAIN_STATUS = TRX_OPT_FINE_START;

	if (lnx_TRX_TRAIN_TX_TRAIN_EN_LANE) {

	    set_lms_continuous();
        //global_best = mse_mnt(False, trx_train_snr_len)

        for(i = 0; i < lnx_TRX_TRAIN_FINE_ITER_NUM_LANE_7_0; i++)
        {
			txffe_updated = txffe_gradient_base_train(tx_ffe_gradient);
			move_id = move_id || txffe_updated;
        }
	    disable_lms_continuous();
    }
    if(lnx_TRX_TRAIN_FINE_CTLE_R_EN_LANE)
    {
        R_start = signed_ctle_R;
        R_stop = (R_start + lnx_TRX_TRAIN_FINE_CLTE_TUNE_R_STEP_LANE_3_0 > lnx_TRX_TRAIN_CTLE_R_MAX_LANE_4_0) ? lnx_TRX_TRAIN_CTLE_R_MAX_LANE_4_0 : R_start + lnx_TRX_TRAIN_FINE_CLTE_TUNE_R_STEP_LANE_3_0;
        smooth_ctrl_opt(CTLE_R, lnx_TRX_TRAIN_FINE_CTLE_TUNE_RC_SNR_TH_LANE_7_0, R_start, R_stop, 1); 

        if(signed_ctle_R == R_start)
        {
            R_stop = (R_start - lnx_TRX_TRAIN_FINE_CLTE_TUNE_R_STEP_LANE_3_0 < lnx_TRX_TRAIN_CTLE_R_MIN_LANE_4_0) ? lnx_TRX_TRAIN_CTLE_R_MIN_LANE_4_0 : R_start - lnx_TRX_TRAIN_FINE_CLTE_TUNE_R_STEP_LANE_3_0;
            smooth_ctrl_opt(CTLE_R, lnx_TRX_TRAIN_FINE_CTLE_TUNE_RC_SNR_TH_LANE_7_0, R_start, R_stop, -1); 
        }
    }
    if(lnx_TRX_TRAIN_FINE_CTLE_C_EN_LANE)
    {
        C_start = signed_ctle_C;
        C_stop = (C_start - lnx_TRX_TRAIN_FINE_CTLE_TUNE_C_STEP_LANE_7_0 < lnx_TRX_TRAIN_CTLE_C_MIN_LANE_7_0) ? lnx_TRX_TRAIN_CTLE_C_MIN_LANE_7_0 : C_start - lnx_TRX_TRAIN_FINE_CTLE_TUNE_C_STEP_LANE_7_0;
        smooth_ctrl_opt(CTLE_C, lnx_TRX_TRAIN_FINE_CTLE_TUNE_RC_SNR_TH_LANE_7_0, C_start, C_stop, -1);

        if(signed_ctle_C == C_start)
        {
            C_stop = (C_start + lnx_TRX_TRAIN_FINE_CTLE_TUNE_C_STEP_LANE_7_0 > lnx_TRX_TRAIN_CTLE_C_MAX_LANE_7_0) ? lnx_TRX_TRAIN_CTLE_C_MAX_LANE_7_0 : C_start + lnx_TRX_TRAIN_FINE_CTLE_TUNE_C_STEP_LANE_7_0;
            smooth_ctrl_opt(CTLE_C, lnx_TRX_TRAIN_FINE_CTLE_TUNE_RC_SNR_TH_LANE_7_0, C_start, C_stop, 1);
        }
    }

    TRAIN_STATUS = TRX_OPT_FINE_END;
}

/*
 * trx_opt() - TRX optimization
 *
 * DSP spec section 7.1
 * Controls: Table 28
 */
void trx_opt(void)
{
	bool txffe_updated = false;
	int8_t tx_ffe_gradient[] = {1,-1,-1,-1};
	//int8_t signed_ctle_R_start, signed_ctle_C_start, signed_ctle_GC_start;
	//int8_t best_R, best_C, best_GC;
	bool move_id = false;
	uint8_t num_int_trial = 0;
	//int8_t i;
	uint8_t cds_mode;
	//uint16_t snr_dtl;
	uint16_t global_best = 0;
	uint16_t new_global_best = 0;

	TRAIN_STATUS = TRX_OPT_START;

	if (lnx_TRX_TRAIN_TX_TRAIN_EN_LANE) {
		cds_mode = CDS_EN_TRXTRAIN;
	} else {
		cds_mode = CDS_EN_RXTRAIN;
	}

	ctle_grid_search(cds_mode);
	// return; // call ctle_grid_search() and exit

#if 0
	// global_best = mse_mnt(False, trx_train_snr_len)
	reg_MSE_CONT_MODE_LANE = 0;
	reg_MSE_DTL_SEL_LANE = 0;
	reg_MSE_LEN_LANE_3_0 = lnx_TRX_TRAIN_SNR_LEN_LANE_3_0; //4;
	drv_mse_run();
	drv_mse_read();
	global_best = snr_approx(reg_MSE_VAL_LANE_15_0);
	reg_MCU_DEBUG6_LANE_7_0 = (global_best >> 3) > 255 ? 255 : (global_best >> 3);
	drv_mse_exit();
	
	best_R = signed_ctle_R;
	best_C = signed_ctle_C;
	best_GC = signed_ctle_GC;

	for(i = 0; i < lnx_TRX_TRAIN_ITER_MAX_LANE_7_0 ; i++)
	{
		signed_ctle_R_start = signed_ctle_R;
		signed_ctle_C_start = signed_ctle_C;
		signed_ctle_GC_start = signed_ctle_GC;
		ctle_grid_search(cds_mode);
		drv_cds(cds_table[cds_mode]);

		// new_global_best = mse_mnt(False, trx_train_snr_len)
		reg_MSE_CONT_MODE_LANE = 0;
		reg_MSE_DTL_SEL_LANE = 0;
		reg_MSE_LEN_LANE_3_0 = lnx_TRX_TRAIN_SNR_LEN_LANE_3_0; //4;
		drv_mse_run();
		drv_mse_read();
		new_global_best = snr_approx(reg_MSE_VAL_LANE_15_0);
		reg_MCU_DEBUG6_LANE_7_0 = (new_global_best >> 3) > 255 ? 255 : (new_global_best >> 3);
		drv_mse_exit();
		if (new_global_best > global_best)
		{
			global_best = new_global_best;
		
			best_R = signed_ctle_R;
			best_C = signed_ctle_C;
			best_GC = signed_ctle_GC;
		}
		// check lock and in unlocked set the best known configuraiton
		// snr_dtl = mse_mnt(True, trx_train_snr_len)
		reg_MSE_CONT_MODE_LANE = 0;
		reg_MSE_DTL_SEL_LANE = 1;
		reg_MSE_LEN_LANE_3_0 = lnx_TRX_TRAIN_SNR_LEN_LANE_3_0; //4;
		drv_mse_run();
		drv_mse_read();
		snr_dtl = snr_approx(reg_MSE_VAL_LANE_15_0);
		reg_MCU_DEBUG6_LANE_7_0 = (snr_dtl >> 3) > 255 ? 255 : (snr_dtl >> 3);
		drv_mse_exit();
		if( !( check_cdr_lock() || (snr_dtl > SNR_DTL_TH)))
		{
			// Possible loss of lock
			// Setting the best known CTLE
			set_ctle(best_R, best_C);
			set_gain_coarse(best_GC);
		}

		if((signed_ctle_R_start == signed_ctle_R) && (signed_ctle_C_start == signed_ctle_C) && (signed_ctle_GC_start == signed_ctle_GC))
		{
			move_id = false;
			// no change in CTLE
		}
		else
			move_id = true;

		if(lnx_TRX_TRAIN_TX_TRAIN_EN_LANE) 
		{
			txffe_updated = txffe_gradient_base_train(tx_ffe_gradient);
			move_id = move_id || txffe_updated;
		}

		// check update
		if(move_id == 0)
			num_int_trial++;
		else
			num_int_trial = 0;

		// check convergence
		if(num_int_trial > lnx_TRX_TRAIN_ITER_MIN_LANE_7_0)
		{
			if(lnx_TRX_TRAIN_CTLE_GRID_INC_EN_LANE == 1)
			{
				lnx_RX_TRAIN_OPT_R_ITER_MAX_LANE_4_0 += lnx_TRX_TRAIN_CTLE_R_INC_LANE_2_0;
				lnx_RX_TRAIN_OPT_C_ITER_MAX_LANE_4_0 += lnx_TRX_TRAIN_CTLE_C_INC_LANE_2_0;
				lnx_TRX_TRAIN_CTLE_GRID_INC_EN_LANE = 0;
				num_int_trial = 0;
			}
			else
				break;
		}
	}
#endif

	TRAIN_STATUS = TRX_OPT_END;
}

bool train_pass_check(void) {

	uint16_t snr_dtl;

	// snr_dtl = mse_mnt(False, trx_train_snr_len)
	reg_MSE_CONT_MODE_LANE = 0;
	reg_MSE_DTL_SEL_LANE = 0;
	reg_MSE_LEN_LANE_3_0 = lnx_TRX_TRAIN_SNR_LEN_LANE_3_0; //4;
	drv_mse_run();
	drv_mse_read();
	snr_dtl = snr_approx(reg_MSE_VAL_LANE_15_0);
	reg_MCU_DEBUG6_LANE_7_0 = (snr_dtl >> 3) > 255 ? 255 : (snr_dtl >> 3);
	drv_mse_exit();

	if (lnx_TRX_TRAIN_TX_TRAIN_EN_LANE) {
		//if (snr_dtl > 10 * 32) //  ((snr_dtl >> 5) > 10)
		if (snr_dtl > ((uint16_t)lnx_TRX_TRAIN_PASS_CHECK_TRX_SNR_LANE_7_0 << 2))
			return 1;
	}
	else
	{
		//if (snr_dtl > 13 * 32) //  ((snr_dtl >> 5) > 13)
		if (snr_dtl > ((uint16_t)lnx_TRX_TRAIN_PASS_CHECK_RX_SNR_LANE_7_0 << 2))
			return 1;

	}
		
	return 0;
}

/*
 * CTLE tunining
 * DSP spec section 5.4
 * Controls: Table 25
 */
void ctle_tune_GC_mid(void) {

	uint16_t best_snr_dp, new_snr_dp;
	int GC_sat;

	set_lms_continuous();

	if (lnx_RX_TRAIN_COARSE_GAIN_TUNE_EN_LANE) {
		// best_snr_dp = mse_mnt(False, trx_train_snr_len)
		reg_MSE_CONT_MODE_LANE = 0;
		reg_MSE_DTL_SEL_LANE = 0;
		reg_MSE_LEN_LANE_3_0 = lnx_TRX_TRAIN_SNR_LEN_LANE_3_0; //4;
		drv_mse_run();
		drv_mse_read();
		best_snr_dp = snr_approx(reg_MSE_VAL_LANE_15_0);
		reg_MCU_DEBUG6_LANE_7_0 = (best_snr_dp >> 3) > 255 ? 255 : (best_snr_dp >> 3);
		drv_mse_exit();

		new_snr_dp = best_snr_dp;
		GC_sat = 1;
		while ((GC_sat >= 0) && ((new_snr_dp + lnx_RX_TRAIN_CTLE_TUNE_SNR_TH_LANE_7_0) >= best_snr_dp)) {
			GC_sat = ctle_gain_coarse_incdec(-lnx_RX_TRAIN_COARSE_GAIN_TUNE_STEP_LANE_1_0);
			//time.sleep(rx_train_ctle_tune_timer)
			wait_converge((uint16_t)lnx_RX_TRAIN_CTLE_TUNE_TIMER_LANE_3_0);
			if (GC_sat >= 0) {
				//new_snr_dp = mse_mnt(False, trx_train_snr_len)
				reg_MSE_CONT_MODE_LANE = 0;
				reg_MSE_DTL_SEL_LANE = 0;
				reg_MSE_LEN_LANE_3_0 = lnx_TRX_TRAIN_SNR_LEN_LANE_3_0; //4;
				drv_mse_run();
				drv_mse_read();
				new_snr_dp = snr_approx(reg_MSE_VAL_LANE_15_0);
				reg_MCU_DEBUG6_LANE_7_0 = (new_snr_dp >> 3) > 255 ? 255 : (new_snr_dp >> 3);
				drv_mse_exit();

				if ((new_snr_dp + lnx_RX_TRAIN_CTLE_TUNE_SNR_TH_LANE_7_0) >= best_snr_dp) {
					best_snr_dp = new_snr_dp;
				} else {
					//ctle_gain_coarse_incdec(+rx_train_coarse_gain_tune_step)
					ctle_gain_coarse_incdec(+lnx_RX_TRAIN_COARSE_GAIN_TUNE_STEP_LANE_1_0);
					//time.sleep(rx_train_ctle_tune_timer)
					wait_converge((uint16_t)lnx_RX_TRAIN_CTLE_TUNE_TIMER_LANE_3_0);
					break;
				}
			}
		}
	}

	if (lnx_RX_TRAIN_MID_FREQ_TUNE_EN_LANE) {
		//best_snr_dp = mse_mnt(False, trx_train_snr_len)
		reg_MSE_CONT_MODE_LANE = 0;
		reg_MSE_DTL_SEL_LANE = 0;
		reg_MSE_LEN_LANE_3_0 = lnx_TRX_TRAIN_SNR_LEN_LANE_3_0; //4;
		drv_mse_run();
		drv_mse_read();
		best_snr_dp = snr_approx(reg_MSE_VAL_LANE_15_0);
		reg_MCU_DEBUG6_LANE_7_0 = (best_snr_dp >> 3) > 255 ? 255 : (best_snr_dp >> 3);
		drv_mse_exit();

		//write('rx_ctle_mid_freq_en_lane',0)
		reg_RX_CTLE_MID_FREQ_EN_LANE = 0;
		//time.sleep(rx_train_ctle_tune_timer)
		wait_converge((uint16_t)lnx_RX_TRAIN_CTLE_TUNE_TIMER_LANE_3_0);
		//new_snr_dp = mse_mnt(False, trx_train_snr_len)
		reg_MSE_CONT_MODE_LANE = 0;
		reg_MSE_DTL_SEL_LANE = 0;
		reg_MSE_LEN_LANE_3_0 = lnx_TRX_TRAIN_SNR_LEN_LANE_3_0; //4;
		drv_mse_run();
		drv_mse_read();
		new_snr_dp = snr_approx(reg_MSE_VAL_LANE_15_0);
		reg_MCU_DEBUG6_LANE_7_0 = (new_snr_dp >> 3) > 255 ? 255 : (new_snr_dp >> 3);
		drv_mse_exit();

		//if new_snr_dp <= best_snr_dp + rx_train_ctle_tune_snr_th: {
		if (new_snr_dp <= (best_snr_dp + lnx_RX_TRAIN_CTLE_TUNE_SNR_TH_LANE_7_0)) {
			//write('rx_ctle_mid_freq_en_lane',1)
			reg_RX_CTLE_MID_FREQ_EN_LANE = 1;
			//time.sleep(rx_train_ctle_tune_timer)
			wait_converge((uint16_t)lnx_RX_TRAIN_CTLE_TUNE_TIMER_LANE_3_0);
		}
	}

	disable_lms_continuous();
}


/*
 * Helper funciton for CTLE tunining
 *
 * smooth_ctrl_opt(reg,snr_th,ctrl_start,ctrl_stop,step=1,rx_train_ctle_cur_tune_timer=0.001)
 * taking the best measure, better a mid-point?
 */
void smooth_ctrl_opt(uint8_t reg_idx, uint8_t snr_th, uint8_t ctrl_start, uint8_t ctrl_stop, int8_t step)
{
    uint16_t snr_best = 0;
    int8_t ctrl_best = -1;
    int8_t ctrl_cur = -1;
    int8_t ctrl_idx;
    uint16_t snr;

    if(step == 0)
    {
        // shouldn't happen
        return;
    }

    set_lms_continuous();

    if(step > 0)
        ctrl_stop ++;
    else
        ctrl_stop --;
    
    ctrl_idx = ctrl_start;
    while((step > 0) ? (ctrl_idx < ctrl_stop) : (ctrl_idx > ctrl_stop))
    {
        ctrl_cur = ctrl_idx;
        if(reg_idx == CTLE_R)
            set_ctle(ctrl_idx, signed_ctle_C);
        else if(reg_idx == CTLE_C)
            set_ctle(signed_ctle_R, ctrl_idx);
        else if(reg_idx == CTLE_GC)
            set_gain_coarse(ctrl_idx);
        else if(reg_idx == RX_CTLE_CUR_TIA_SEL2_LANE )
            reg_RX_CTLE_CUR_TIA_SEL2_LANE_2_0 = ctrl_idx;
        else if(reg_idx == RX_CTLE_CUR1_SEL2_LANE)
            reg_RX_CTLE_CUR1_SEL2_LANE_2_0 = ctrl_idx;
        else if(reg_idx == RX_CTLE_CUR2_SEL2_LANE)
            reg_RX_CTLE_CUR2_SEL2_LANE_2_0 = ctrl_idx;
        else if(reg_idx == RX_CTLE_RL1_CTRL_LANE)
            reg_RX_CTLE_RL1_CTRL_LANE_3_0 = ctrl_idx;
        else if(reg_idx == RX_CTLE_RL1_EXTRA_LANE)
            reg_RX_CTLE_RL1_EXTRA_LANE_2_0 = ctrl_idx;

	wait_converge((uint16_t)lnx_RX_TRAIN_CTLE_TUNE_TIMER_LANE_3_0);
        // snr = mse_mnt(False, trx_train_snr_len) 
        reg_MSE_CONT_MODE_LANE = 0;
        reg_MSE_DTL_SEL_LANE = 0;
        reg_MSE_LEN_LANE_3_0 = lnx_TRX_TRAIN_SNR_LEN_LANE_3_0; //4;
        drv_mse_run();
        drv_mse_read();
        snr = snr_approx(reg_MSE_VAL_LANE_15_0);
        reg_MCU_DEBUG6_LANE_7_0 = (snr >> 3) > 255 ? 255 : (snr >> 3);
        drv_mse_exit();

        if(snr > (snr_best + snr_th))
        {
            snr_best = snr;
            ctrl_best = ctrl_idx;
        }
        ctrl_idx += step;
    }

    if(step > 0)
        ctrl_best--;
    else
        ctrl_best++;

    while((step > 0) ? (ctrl_idx > ctrl_best) : (ctrl_idx < ctrl_best))
    {
        if(reg_idx == CTLE_R)
            set_ctle(ctrl_idx, signed_ctle_C);
        else if(reg_idx == CTLE_C)
            set_ctle(signed_ctle_R, ctrl_idx);
        else if(reg_idx == CTLE_GC)
            set_gain_coarse(ctrl_idx);
        else if(reg_idx == RX_CTLE_CUR_TIA_SEL2_LANE )
            reg_RX_CTLE_CUR_TIA_SEL2_LANE_2_0 = ctrl_idx;
        else if(reg_idx == RX_CTLE_CUR1_SEL2_LANE)
            reg_RX_CTLE_CUR1_SEL2_LANE_2_0 = ctrl_idx;
        else if(reg_idx == RX_CTLE_CUR2_SEL2_LANE)
            reg_RX_CTLE_CUR2_SEL2_LANE_2_0 = ctrl_idx;
        else if(reg_idx == RX_CTLE_RL1_CTRL_LANE)
            reg_RX_CTLE_RL1_CTRL_LANE_3_0 = ctrl_idx;
        else if(reg_idx == RX_CTLE_RL1_EXTRA_LANE)
            reg_RX_CTLE_RL1_EXTRA_LANE_2_0 = ctrl_idx;

	wait_converge((uint16_t)lnx_RX_TRAIN_CTLE_TUNE_TIMER_LANE_3_0);
        ctrl_idx -= step;
    }

    // snr = mse_mnt(False, trx_train_snr_len)
    reg_MSE_CONT_MODE_LANE = 0;
    reg_MSE_DTL_SEL_LANE = 0;
    reg_MSE_LEN_LANE_3_0 = lnx_TRX_TRAIN_SNR_LEN_LANE_3_0; //4;
    drv_mse_run();
    drv_mse_read();
    snr = snr_approx(reg_MSE_VAL_LANE_15_0);
    reg_MCU_DEBUG6_LANE_7_0 = (snr >> 3) > 255 ? 255 : (snr >> 3);
    drv_mse_exit();

    disable_lms_continuous();
}

/*
 * CTLE tunining
 * DSP spec section 5.4
 * Controls: Table 25
 */
void ctle_tune_cur(void)
{
	uint8_t rl1_init, rl1_min, cur_max;
	int8_t R_start, C_start, R_stop, C_stop, GC_start, GC_stop;

	rl1_init = reg_RX_CTLE_RL1_CTRL_LANE_3_0;
	//rl1_min = max(0,rl1_init-rx_train_ctle_tune_rl1_step_dn)
	rl1_min = max(0,rl1_init-lnx_RX_TRAIN_CTLE_TUNE_RL1_STEP_DN_LANE_3_0);

	if (lnx_RX_TRAIN_CTLE_TUNE_RL1_EN_LANE) {
		//smooth_ctrl_opt('rx_ctle_rl1_ctrl_lane[3:0]',rx_train_ctle_tune_cur_snr_th,rl1_init,rl1_min,-1)
		smooth_ctrl_opt(RX_CTLE_RL1_CTRL_LANE, lnx_RX_TRAIN_CTLE_TUNE_RL1_SNR_TH_LANE_7_0, rl1_init, rl1_min, -1); // TODO need to update
	}

	if (reg_RX_CTLE_RL1_CTRL_LANE_3_0 >= (rl1_init - 1)) { // if rl1 was decreased then it was a short channel, do not touch currents
		cur_max = 7; // bit-width
		if (lnx_RX_TRAIN_CTLE_TUNE_CURTIA_EN_LANE) {
			//smooth_ctrl_opt('rx_ctle_cur_tia_sel2_lane[2:0]',rx_train_ctle_tune_cur_snr_th,read('rx_ctle_cur_tia_sel2_lane[2:0]'),cur_max,1)
			smooth_ctrl_opt(RX_CTLE_CUR_TIA_SEL2_LANE, lnx_RX_TRAIN_CTLE_TUNE_CUR_SNR_TH_LANE_7_0, reg_RX_CTLE_CUR_TIA_SEL2_LANE_2_0, cur_max, 1);
		}
		if (lnx_RX_TRAIN_CTLE_TUNE_CUR1_EN_LANE) {
			//smooth_ctrl_opt('rx_ctle_cur1_sel2_lane[2:0]',rx_train_ctle_tune_cur_snr_th,read('rx_ctle_cur1_sel2_lane[2:0]'),cur_max,1)
			smooth_ctrl_opt(RX_CTLE_CUR1_SEL2_LANE, lnx_RX_TRAIN_CTLE_TUNE_CUR_SNR_TH_LANE_7_0, reg_RX_CTLE_CUR1_SEL2_LANE_2_0, cur_max, 1);
		}
		if (lnx_RX_TRAIN_CTLE_TUNE_CUR2_EN_LANE) {
			//smooth_ctrl_opt('rx_ctle_cur2_sel2_lane[2:0]',rx_train_ctle_tune_cur_snr_th,read('rx_ctle_cur2_sel2_lane[2:0]'),cur_max,1)
			smooth_ctrl_opt(RX_CTLE_CUR2_SEL2_LANE, lnx_RX_TRAIN_CTLE_TUNE_CUR_SNR_TH_LANE_7_0, reg_RX_CTLE_CUR2_SEL2_LANE_2_0, cur_max, 1);
		}
		if (lnx_RX_TRAIN_CTLE_TUNE_RL1_EXTRA_EN_LANE) {
			//smooth_ctrl_opt('rx_ctle_rl1_extra_lane[2:0]',rx_train_ctle_tune_cur_snr_th,read('rx_ctle_rl1_extra_lane[2:0]'),cur_max,1)
			smooth_ctrl_opt(RX_CTLE_RL1_EXTRA_LANE, lnx_RX_TRAIN_CTLE_TUNE_CUR_SNR_TH_LANE_7_0, reg_RX_CTLE_RL1_EXTRA_LANE_2_0, cur_max, 1);
		}
	}
    
    //go back to R and C since currents could have affected DC vs peak ratio 
    if(lnx_RX_TRAIN_CTLE_TUNE_R_EN_LANE)
    {
        R_start = signed_ctle_R;
        R_stop = (R_start + lnx_RX_TRAIN_CTLE_TUNE_R_STEP_UP_LANE_3_0 > lnx_TRX_TRAIN_CTLE_R_MAX_LANE_4_0) ? lnx_TRX_TRAIN_CTLE_R_MAX_LANE_4_0 : R_start + lnx_RX_TRAIN_CTLE_TUNE_R_STEP_UP_LANE_3_0;
        smooth_ctrl_opt(CTLE_R, lnx_RX_TRAIN_CTLE_TUNE_RC_SNR_TH_LANE_7_0, R_start, R_stop, 1);
        if(signed_ctle_R == R_start) 
        {
            R_stop = (R_start - lnx_RX_TRAIN_CTLE_TUNE_R_STEP_DN_LANE_3_0 < lnx_TRX_TRAIN_CTLE_R_MIN_LANE_4_0) ? lnx_TRX_TRAIN_CTLE_R_MIN_LANE_4_0 : R_start - lnx_RX_TRAIN_CTLE_TUNE_R_STEP_DN_LANE_3_0;
            smooth_ctrl_opt(CTLE_R, lnx_RX_TRAIN_CTLE_TUNE_RC_SNR_TH_LANE_7_0, R_start, R_stop, -1);
        }
    }

    if(lnx_RX_TRAIN_CTLE_TUNE_C_EN_LANE)
    {
        C_start = signed_ctle_C;
        C_stop = (C_start - lnx_RX_TRAIN_CTLE_TUNE_C_STEP_DN_LANE_7_0 < lnx_TRX_TRAIN_CTLE_C_MIN_LANE_7_0) ? lnx_TRX_TRAIN_CTLE_C_MIN_LANE_7_0 : C_start - lnx_RX_TRAIN_CTLE_TUNE_C_STEP_DN_LANE_7_0;
        smooth_ctrl_opt(CTLE_C, lnx_RX_TRAIN_CTLE_TUNE_RC_SNR_TH_LANE_7_0, C_start, C_stop, -1);
 
    }

    if(lnx_RX_TRAIN_CTLE_TUNE_GC_EN_LANE)
    {
        GC_start = signed_ctle_GC;
        GC_stop = (GC_start + lnx_RX_TRAIN_CTLE_TUNE_GC_STEP_UP_LANE_3_0 > lnx_TRX_TRAIN_CTLE_GC_MAX_LANE_4_0) ? lnx_TRX_TRAIN_CTLE_GC_MAX_LANE_4_0 : GC_start + lnx_RX_TRAIN_CTLE_TUNE_GC_STEP_UP_LANE_3_0;
        smooth_ctrl_opt(CTLE_GC, lnx_RX_TRAIN_CTLE_TUNE_CUR_SNR_TH_LANE_7_0, GC_start, GC_stop, 1);

    }
}

void cds_prot(void)
{
	uint16_t snr_dtl;
	uint16_t freq_ofst;
	int16_t freq_ofst_2comp, reverse_freq_ofst;

	drv_cds(cds_table[CDS_EN_DEFAULT]); // lock CDR
	snr_dtl = mse_mnt_ave(true, 0);
	lnx_CDS_FAULT_TRIGGERED_LANE = 0;
	if (snr_dtl < ((uint16_t)lnx_TRX_TRAIN_DTL_SNR_AF_CDS_TH_LANE_7_0 << 2)) {
		// reverse scan freq
		freq_ofst = reg_CDS_DTL_FREQ_OFST_LANE_15_0; // save
		freq_ofst_2comp = 0;
		if (freq_ofst >= 32768) // 2**15
			freq_ofst_2comp = freq_ofst - 65536; // 2**16
		else
			freq_ofst_2comp = freq_ofst;

		if (freq_ofst_2comp <= -32768) // -2**15
			reverse_freq_ofst = 32767; // 2**15-1
		else
			reverse_freq_ofst = -freq_ofst_2comp;

		//write('cds_dtl_freq_ofst_lane[15:0]', reverse_freq_ofst,'two')
		reg_CDS_DTL_FREQ_OFST_LANE_15_0 = reverse_freq_ofst;
		drv_cds(cds_table[CDS_EN_DEFAULT]); // lock CDR
		//write('cds_dtl_freq_ofst_lane[15:0]',freq_ofst) #restore
		reg_CDS_DTL_FREQ_OFST_LANE_15_0 = freq_ofst;
		lnx_CDS_FAULT_TRIGGERED_LANE = 1;
	}
}

void trx_train_top(void) {

	uint8_t index;
	uint32_t trx_train_opt;
        uint32_t temp;
	uint8_t preset_num = 1;
	uint16_t snr_dtl;

	TRAIN_STATUS = TRAIN_START;

	if (lnx_TRX_TRAIN_TX_TRAIN_EN_LANE) {
		trx_train_opt = TX_TRAIN_OPS;
	} else {
		trx_train_opt = RX_TRAIN_OPS;
	}
	index = 0;
	while((reg_MCU_DEBUGA_LANE_7_0=0x95)&&index < MAX_TRAIN_MODULE) {
		reg_MCU_STATUS2_LANE_31_0_b1 = index; // training module to enter

		switch (trx_train_opt & 1ULL << index) {
		case TRAIN_INIT_EN:
			if (!lnx_TRX_TRAIN_INIT_BYPASS_EN_LANE) {
				train_init();
				is_pause(1);
			}
		break;
		case INIT_ADC_SAT_CHECK_EN:
			if (!lnx_TRX_TRAIN_SAT_CHECK_BYPASS_EN_LANE) {
				init_adc_sat_check();
				is_pause(1);
			}
		break;
		case SET_TX_MOD_EN:
                        if(!reg_RX_PAM2_EN_LANE) { //pam4
                            set_tx_modulation(CP_PAM4_GRAY);
                            is_pause(1);
                        }
		break;
		case RX_BLIND_TRAIN_EN1:
			if (!lnx_RX_TRAIN_BLIND_BYPASS_EN_LANE) {
				rx_blind_train();
				is_pause(1);
			}
		break;
		case TXFFE_DET_PRESET_EN:
			if (!lnx_TX_TRAIN_FFE_DET_PRE_BYPASS_EN_LANE) {
				if (lnx_TRX_TRAIN_TX_TRAIN_EN_LANE) {
                                    if(lnx_TRX_TRAIN_TXFFE_PRESET_EXT_EN_LANE)
                                        preset_num = lnx_TRX_TRAIN_TXFFE_PRESET_EXT_LANE_2_0;
                                    else
				        preset_num = trx_train_txffe_det_preset();
				    is_pause(1);
				}
			}
		break;
		case LOCK_CDR_EN1:
			if (!lnx_TRX_TRAIN_LOCK_CDR_BYPASS_EN_LANE) {
				TRAIN_STATUS = CDS_DEFAULT_START;
				cds_prot();
				TRAIN_STATUS = CDS_DEFAULT_END;
				is_pause(1);
			}
		break;
		case ADC_CAL_EN:
			if (!lnx_TRX_TRAIN_ADC_CAL_BYPASS_EN_LANE) {
				TRAIN_STATUS = ADC_CAL_START;
				if (lnx_TRX_TRAIN_ADC_CAL_GAO_EN_LANE) {
					drv_adc_cal(ADC_CAL_TRAIN_GAO);
				}
				if (lnx_TRX_TRAIN_ADC_CAL_SKEW_EN_LANE) {
					if (lnx_TRX_TRAIN_ADC_CAL_GAO_EN_LANE) {
						drv_adc_cal(ADC_CAL_CONT_GAO);
						drv_adc_cal(ADC_CAL_TRAIN_SKEW);
						drv_adc_cal(ADC_CAL_STOP_GAO);
					}
				}
				TRAIN_STATUS = ADC_CAL_END;
				is_pause(1);
			}
		break;
		case SWEEP_COARSE_CTLE_EN:
			if (!lnx_TRX_TRAIN_OPT_BYPASS_EN_LANE) {
				//Sweep Coarse CTLE set
				is_pause(1);
			}
		break;
		case TXFFE_SET_PRESET_EN:
			if (!lnx_TX_TRAIN_TXFFE_SET_PRE_BYPASS_EN_LANE) {
				if (lnx_TRX_TRAIN_TX_TRAIN_EN_LANE) {
					trx_train_txffe_set_preset(preset_num);
					is_pause(1);
				}
			}
		break;
		case RX_BLIND_TRAIN_EN2:
			if (!lnx_RX_TRAIN_BLIND_BYPASS_EN_LANE) {
                            if(preset_num != 1 && !reg_RX_PAM2_EN_LANE) // if not PAM4
				rx_blind_train();
			    is_pause(1);
			}
		break;
		case LOCK_CDR_EN2:
			if (!lnx_TRX_TRAIN_LOCK_CDR_BYPASS_EN_LANE) {
				TRAIN_STATUS = CDS_DEFAULT_START;
                                if(preset_num != 1 && !reg_RX_PAM2_EN_LANE) // if not PAM4
				    drv_cds(cds_table[CDS_EN_DEFAULT]); // lock CDR
				TRAIN_STATUS = CDS_DEFAULT_END;
				is_pause(1);
			}
		break;
		case TXFFE_SHAPE_BASE_EN:
                        if (!lnx_TX_TRAIN_SHAPE_BASED_TRAIN_BYPASS_EN_LANE) {
                            if (lnx_TX_TRAIN_SHAPE_BASED_TRAIN_EN_LANE) {
                                txffe_shape_base_train();
                                is_pause(1);
                            }
                        }
                break;
		case TRX_OPT_EN:
			if (!lnx_TRX_TRAIN_OPT_BYPASS_EN_LANE) {
				if (lnx_TRX_TRAIN_TRX_OPT_EN_LANE) {
					trx_opt();
					is_pause(1);
				}
			}
		break;
		case TRX_OPT_FINE_EN:
			if (!lnx_TRX_TRAIN_OPT_FINE_BYPASS_EN_LANE) {
				if (lnx_TRX_TRAIN_TRX_OPT_FINE_EN_LANE) {
                			trx_opt_fine();
					is_pause(1);
				}
			}
		break;
		case RX_CTLE_TUNE:
			if (lnx_RX_TRAIN_CTLE_TUNE_EN_LANE) {
				TRAIN_STATUS = RX_CTLE_TUNE_START;
				ctle_tune_GC_mid();
				ctle_tune_cur();
				TRAIN_STATUS = RX_CTLE_TUNE_END;
				is_pause(1);
			}
		break;
		case TRX_FINAL_TUNE:
			if (!lnx_TRX_FINAL_TUNE_BYPASS_EN_LANE) {
				trx_final_tune();
				is_pause(1);
			}
		break;
		case TRAIN_EXIT:
			if (!lnx_TRX_TRAIN_EXIT_BYPASS_EN_LANE) {
				train_end();
				is_pause(1);
			}
		break;
		}
		if (!lnx_TRX_TRAIN_MINI_SCHEDULER_BYPASS_EN_LANE) {
			mini_scheduler();
		}
		index++;
	}

	TRAIN_STATUS = TRAIN_END;
}

void trx_train_init(void) 
{
	signed_ctle_R = 0;
	signed_ctle_C = 0;
	signed_ctle_GC = 6;
	C_sat = 0;
	R_sat = 0;
	GC_sat = 0;
}

void load_ctle_from_spt(void)
{
	// gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_5_0;
	// load values from speed table
	loadspeedtbl_rx();

	// setting to default value registers not in RX speed table
	reg_RX_CTLE_RS1_MID_LANE_2_0 = 0;
	reg_RX_CTLE_CS1_MID_LANE_2_0 = 0;
	reg_RX_CTLE_MID_FREQ_EN_LANE = 0;
	reg_RX_CTLE_CUR_TIA_SEL2_LANE_2_0 = 4;
	reg_RX_CTLE_CUR1_SEL2_LANE_2_0 = 4;
	reg_RX_CTLE_CUR2_SEL2_LANE_2_0 = 4;
	reg_RX_CTLE_RL1_EXTRA_LANE_2_0 = 0;

	// save default values of CTLE currents
	ctle_cur1_init    = reg_RX_CTLE_CUR1_SEL_LANE_3_0;
	ctle_cur2_init    = reg_RX_CTLE_CUR2_SEL_LANE_3_0;
	ctle_cur_tia_init = reg_RX_CTLE_CUR_TIA_SEL_LANE_3_0;
}

uint8_t skew_prot(void)
{
	uint16_t snr_dtl;
	uint8_t tr_skew_cal, bg_skew_cal;
	uint8_t skew_prot_triggered = 0;

	//drv_adc_cal('skew','background')
	drv_adc_cal(ADC_CAL_CONT_SKEW);
	//time.sleep(1e-3)
	wait_converge((uint16_t)lnx_RX_TRAIN_CTLE_TUNE_TIMER_LANE_3_0);
	//drv_adc_cal('skew','stop')
	drv_adc_cal(ADC_CAL_STOP_SKEW);

	// Skew Protection 1
	// drv_pwr_opt(pwr_opt_en=1) #If use it, pt_lock = 0
	//snr_dtl = mse_mnt(True, trx_train_snr_len)
	snr_dtl = mse_mnt_ave(true, 0);
	if (snr_dtl < ((uint16_t)lnx_TRX_TRAIN_DTL_SNR_AF_CAL_TH_LANE_7_0 << 2)) { //trx_train_dtl_snr_af_cal_th*(2.0**2):#(1/2^3)*2^5
		//drv_adc_cal('skew','reset')
		drv_adc_cal(ADC_CAL_RESET_SKEW);
		//drv_adc_cal('skew','background')
		drv_adc_cal(ADC_CAL_CONT_SKEW);
		//time.sleep(1e-3)
		wait_converge((uint16_t)lnx_RX_TRAIN_CTLE_TUNE_TIMER_LANE_3_0);
		//drv_adc_cal('skew','stop')
		drv_adc_cal(ADC_CAL_STOP_SKEW);
		skew_prot_triggered = 1;

		// Skew Protection 2 (Blind Skew)
		//snr_dtl = mse_mnt(True, trx_train_snr_len)
		snr_dtl = mse_mnt_ave(true, 0);
		if (snr_dtl < ((uint16_t)lnx_TRX_TRAIN_DTL_SNR_AF_CAL_TH_LANE_7_0 << 2)) {
			tr_skew_cal = reg_TR_SKEW_CAL_BLIND_EN_LANE;
			bg_skew_cal = reg_BG_SKEW_CAL_BLIND_EN_LANE;
			reg_TR_SKEW_CAL_BLIND_EN_LANE = 1;
			reg_BG_SKEW_CAL_BLIND_EN_LANE = 1;
			//drv_adc_cal('skew','reset')
			drv_adc_cal(ADC_CAL_RESET_SKEW);
			//drv_adc_cal('skew','train')
			drv_adc_cal(ADC_CAL_TRAIN_SKEW);
			//drv_adc_cal('skew','background')
			drv_adc_cal(ADC_CAL_CONT_SKEW);
			//time.sleep(1e-3)
			wait_converge((uint16_t)lnx_RX_TRAIN_CTLE_TUNE_TIMER_LANE_3_0);
			//drv_adc_cal('skew','stop')
			drv_adc_cal(ADC_CAL_STOP_SKEW);
			reg_BG_SKEW_CAL_BLIND_EN_LANE = bg_skew_cal;
			reg_TR_SKEW_CAL_BLIND_EN_LANE = tr_skew_cal;
			skew_prot_triggered = 2;
		}
	}

	return skew_prot_triggered;
}


/*
 * Training Initialization
 * DSP spec section 8.1
 * Controls: Table 35
 *
 * Add training init state in Train-Top state machine.
 * It is intended for clean up training variables, RX HW restart, and avoid any "leakage" from a previous training.
 * It should support pause/debug option as other states
 *
 * Tasks to be performed
 * 1. Reset ADC skew calibration (HW driver)
 * 2. Reset ADC GAO calibration (HW driver)
 * 3. Run ADC GAO single, a.k.a. startup, calibration (HW driver)
 * 4. Load CTLE configurations from speed table (driver?)
 * 5. more to add if necessary
 *
 */
void train_init(void)
{
	TRAIN_STATUS = TRX_TRAIN_INIT_START;

	// stop LMS, stop DTL
	drv_pwr_opt(0);
        reg_RX_EQ_PAT_PROT_EN_LANE = 0; 
	drv_cds(cds_table[CDS_EN_RESET]);
	drv_adc_cal(ADC_CAL_STOP_SKEW);
	drv_adc_cal(ADC_CAL_STOP_GAO);

        // write ADC reference - this is currently a patch to allow configuration from software
        reg_RX_ADC_REF_SEL_LANE_2_0 = lnx_TRX_TRAIN_ADC_REF_SEL_LANE_2_0;

	if (lnx_TRX_TRAIN_INIT_ADC_CAL_SKEW_RESET_LANE)
		drv_adc_cal(ADC_CAL_RESET_SKEW);

	if (lnx_TRX_TRAIN_INIT_ADC_CAL_GAO_RESET_LANE) {
		//drv_adc_cal(ADC_CAL_RESET_GAO);
		drv_adc_cal(ADC_CAL_SINGLE_GAO);
	}

	// Reloading CTLE Speed Table Value
	load_ctle_from_spt();
	if (lnx_RX_TRAIN_MID_FREQ_TUNE_EN_LANE == 1 && lnx_RX_TRAIN_CTLE_TUNE_EN_LANE == 1 ) {
		reg_RX_CTLE_RS1_MID_LANE_2_0 = 7;
		reg_RX_CTLE_CS1_MID_LANE_2_0 = 7;
		reg_RX_CTLE_MID_FREQ_EN_LANE = 1;
	} else {
		reg_RX_CTLE_MID_FREQ_EN_LANE = 0;
	}

	TRAIN_STATUS = TRX_TRAIN_INIT_END;
}

void trx_final_tune(void)
{
	TRAIN_STATUS = TRX_TUNE_START;

	disable_lms_continuous();

	if (lnx_TRX_TRAIN_DFE_OPT_EN_LANE) {
		drv_dfe_opt(); //dfe_opt(start=lnx_TRX_TRAIN_DFE_START_VAL_LANE_5_0, stop=lnx_TRX_TRAIN_DFE_STOP_VAL_LANE_5_0, verbose=1);
	}

	if (lnx_TRX_TRAIN_FLT_OPT_EN_LANE) {
		drv_ffe_flt_opt();
	}

	TRAIN_STATUS = TRX_TUNE_END;
}

/*
 * Training End
 * DSP spec section 8.2
 * Controls: Table 36
 */
void train_end(void)
{
	//int8_t pre1_s, pst1_s;
	//uint8_t sum_pst1_pre1;
	uint8_t bg_skew_cal;

	TRAIN_STATUS = TRX_PREPARE_EXIT_START;

	lnx_TRX_TP_SNR_DTL_BF_SKEW_PROT_LANE_15_0_b0 = mse_mnt_ave(true, 0);

	lnx_SKEW_PROT_TRIGGERED_LANE_1_0 = skew_prot();

	if (lnx_TRX_TRAIN_END_DTL_PST1_EN_LANE) {
		reg_RX_DTL_LMS_FFE_PRE1_EN_LANE = 0;
		reg_RX_DTL_LMS_FFE_PST1_EN_LANE = 1;
	}

	if (lnx_TRX_TRAIN_AGC_EN_LANE)
		drv_adc_cal(ADC_CAL_CONT_AGC);

	if (lnx_TRX_TRAIN_DP_PST1_FZ_DFE_EN_LANE) {
		reg_RX_DP_LMS_FFE_PST1_EN_LANE = 0;
		reg_RX_DP_LMS_DFE_EN_LANE = 1;
	}

	lnx_TRX_TP_SNR_DTL_BF_PH_OPT_LANE_15_0 = mse_mnt_ave(true, 0);

	if (lnx_TRX_TRAIN_DTL_PHASE_OPT_EN_LANE) {
		set_lms_continuous();
		//dtl_phase_opt(reset=1);
		drv_dtl_ph_opt(0);
		disable_lms_continuous();
	}

	lnx_TRX_TP_SNR_DTL_AF_PH_OPT_LANE_15_0 = mse_mnt_ave(true, 0);
	//write('rx_adc_if_target_pat_frez_en_lane',0)
	drv_adc_cal(ADC_CAL_CONT_GAO);

	lnx_TRX_TP_SNR_DTL_AF_GAO_BG_LANE_15_0 = mse_mnt_ave(true, 0);

	if (lnx_SKEW_PROT_TRIGGERED_LANE_1_0 == 2) {
		bg_skew_cal = reg_BG_SKEW_CAL_BLIND_EN_LANE;
		reg_BG_SKEW_CAL_BLIND_EN_LANE = 1;
		drv_adc_cal(ADC_CAL_CONT_SKEW);
		reg_BG_SKEW_CAL_BLIND_EN_LANE = bg_skew_cal;
	}
	else {
		drv_adc_cal(ADC_CAL_CONT_SKEW);
	}

	lnx_TRX_TP_SNR_DTL_AF_SKEW_BG_LANE_15_0 = mse_mnt_ave(true, 0);
	//drv_pwr_opt(1);

	//write('rx_eq_pat_prot_en_lane',trx_train_pat_prot_en)
	reg_RX_EQ_PAT_PROT_EN_LANE = lnx_TRX_TRAIN_PAT_PROT_EN_LANE;

	set_lms_continuous();
	lnx_TRX_TP_SNR_DTL_AF_LMS_CONT_LANE_15_0 = mse_mnt_ave(true, 0);

	drv_rx_gb_fifo_clk_toggle();

	wait_converge(20); // wait 100uS

	lnx_TRX_TP_SNR_DTL_AF_CLK_TOG_LANE_15_0 = mse_mnt_ave(true, 0);

	if(lnx_TRX_TRAIN_FFE_LEN_OPT_EN_LANE) // default:0  
		drv_ffe_len_opt();
	wait_converge(20); // wait 100uS

	set_lms_continuous();
	wait_converge(40); // wait 200uS

	TRAIN_STATUS = TRX_PREPARE_EXIT_END;
}

/*
def train_cont(train_cont_mode_dtl_ph_opt_en=1, train_cont_mode_timer_len = 100):
    if not(train_cont_mode_dtl_ph_opt_en and (rx_train_done or tx_train_done)) or read('reg_rd_pin_rx_sq_out_lpf_rd_lane')==1:
        return

    if timer_done==1:
        dtl_phase_opt()
        time.sleep(train_cont_mode_timer_len*5/1000.) # ms
*/

/*
 * Continuous Mode (Tracking)
 * DSP spec section 9
 * Controls: Table 39
 */
void train_cont(void) {

	if (!(lnx_TRAIN_CONT_MODE_DTL_PH_OPT_EN_LANE && (lnx_RX_TRAIN_DONE_LANE || lnx_TX_TRAIN_DONE_LANE)) || reg_PIN_RX_SQ_OUT_LPF_RD_LANE)
		return;

	if (timeout2_check(TRAIN_CONT_TIMER)) {
		timeout2_start(TRAIN_CONT_TIMER,(uint32_t)tag_TRAIN_CONT_MODE_TIMER*1000L);

		//dtl_phase_opt();
		drv_dtl_ph_opt(1);
	}
}

void fft_dtl_phase_delay(void) {

    int8_t pre_i, pst_i;
    int32_t main;
    // toggle read request
    reg_RX_EQ_RD_REQ_LANE = 0;
    reg_RX_EQ_RD_REQ_LANE = 1;
    reg_RX_EQ_RD_REQ_LANE = 0;

    // read taps and compute numerator and denaminator of phase delay fraction
    main = 32;

    phase_d = main;
    phase_n = 0;

    pre_i = reg2int(reg_RX_DTL_LMS_FFE_PRE1_COE_LANE_5_0, 6);
    pst_i = reg2int(reg_RX_DTL_LMS_FFE_PST1_COE_LANE_5_0, 6);
    phase_d += (pst_i + pre_i);
    phase_n += (pst_i - pre_i)*1;

    pre_i = reg2int(reg_RX_DTL_LMS_FFE_PRE2_COE_LANE_4_0, 5);
    pst_i = reg2int(reg_RX_DTL_LMS_FFE_PST2_COE_LANE_4_0, 5);
    phase_d += (pst_i + pre_i);
    phase_n += (pst_i - pre_i)*2;

    pre_i = reg2int(reg_RX_DTL_LMS_FFE_PRE3_COE_LANE_3_0, 4);
    pst_i = reg2int(reg_RX_DTL_LMS_FFE_PST3_COE_LANE_3_0, 4);
    phase_d += (pst_i + pre_i);
    phase_n += (pst_i - pre_i)*3;

    // dump num, den to registers to pass argument out and to debug
}
