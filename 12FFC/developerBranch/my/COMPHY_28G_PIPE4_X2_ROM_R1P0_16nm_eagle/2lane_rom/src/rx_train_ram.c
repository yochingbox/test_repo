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

#ifdef USE_BANKING
#pragma codeseg BANK3
#pragma constseg BANK3
#endif

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
//#define RXTRAIN_DUMP
#ifdef RXTRAIN_DUMP
typedef struct Status_RXTrain_STATUS_tag{
	uint8_t eo;
	uint8_t update; 
} Status_RXTrain_STATUS_tag_t;

__xdata __at(SPDTBL_XDAT_CMN_BASE) Status_RXTrain_STATUS_tag_t rxtrain_save_0[10];		
__xdata __at(SPDTBL_XDAT_CMN_BASE + 0x20) Status_RXTrain_STATUS_tag_t rxtrain_save_1[10];		
#endif

/****************************************
 * RX Training
 * Inputs: 
 * Outputs:
 * Callee:
		ctrl_cdr_phase_on = (lnx_CDRPHASE_OPT_EN_LANE && (ctrl_rx_only_mode || rx.blind_training || tag_CDR_PHASE_LAST_ALWAYS)
		&& opt.level < 5);
 *      opt2train()
 *      dfe_adaptation()
 *      update_opt_trx_ffe()
*****************************************/
void rx_train_ram() BANKING_CTRL {
	PHY_STATUS = ST_RXTRAIN;
	
	#if _DEBUG
    DBG_PS("\r\n++RX TRAIN");
	#endif
	
    // -- Initial
	rx.ffe_index2 = opt.rx_ffe_index;
    //opt2train();

	// initializations of parameters
	//rx.stage = 0;
    //rx.num_round = 1; 
	//rx.dc_gain_triger = 0;
	//rx.dc_gain_done = 0;
	//rx.rc_updated = 1;
	//rx.c_updated = 1;
	ctrl_trx_ffe_updated = 0;

	/*
    while(1){

		if(opt_excellent_eo && opt_saturated==0) // if excellent EO and not saturated
		{
			break;
		}
		
		if ((&ptr_rx_mnr[rx.stage] == 0) || (rx.num_round == &ptr_rx_mnr[rx.stage]))
		{
			// reset some parameters
			//rx.dc_gain_done = 0;
			rx.num_round = 0;
			//rx.dc_gain_triger = 0;
			rx.rc_updated = 1;
			//rx.ffe_training_on = 0;
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
	}
	else 
	{
		opt2train_ram();
		if(lnx_BYPASS_CTLE_TRAIN_LANE==0)
		rx_ffe_train_ram();
		opt2train_ram();
	}
    
   // -- RX Training End state start
	
   #if tag_RX_CAP_FINAL_ADJUST_EN //0
		if(lnx_RX_CAP_FINAL_ADJUST_EN_LANE) ffe_cap_final_adjust();
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
	//if(lnx_ADJUST_FFE_R2_LANE)	ffe_res2_adjust();
	#endif
	
    #if tag_TEMP_ADJUST_FFE_R //0
		ffe_res_temp_adjust();	
	#endif

	//if(cmx_FFE_RES_R0_ADJ_EN)
	//	ffe_res_short_channel_adjust_ram();
	
	#ifdef SUPPORT_DFE_UPDATE_EN_DEBUG
	dfe_cdr_phase_opt_ram(); // adapt DFE
	#else
	dfe_cdr_phase_opt(); // adapt DFE	
	#endif	
	
    // during the last round, we would like to adapt the best CDR sampling phase
	//ctrl_cdr_phase_on = lnx_CDRPHASE_OPT_EN_LANE && ( ctrl_rx_only_mode || rx.blind_training || tag_CDR_PHASE_LAST_ALWAYS ) && (opt.level < 5);
	ctrl_cdr_phase_on = lnx_CDRPHASE_OPT_EN_LANE && ( ctrl_rx_only_mode || rx.blind_training || tag_CDR_PHASE_LAST_ALWAYS );
	adapt_data_en = tag_TRAIN_USE_D; //0
	adapt_slicer_en = tag_TRAIN_USE_S; //1		
	ph_control_mode = tag_TRAIN_PH_CONTROL_MODE; 
	set_ph_mode();

	#if _DEBUG
	print_ph_ctrl_status();
	#endif
	
	//opt2train();
	#ifdef SUPPORT_DFE_UPDATE_EN_DEBUG
	dfe_cdr_phase_opt_ram(); // adapt DFE
	#else
	dfe_cdr_phase_opt(); // adapt DFE	
	#endif	
	update_opt_trx_ffe();	
	
	// set the RX_training_done flag to one
	ctrl_rx_train_done = 1; // RX training is done after going through all stages

	ctrl_trx_ffe_updated = (opt.rx_ffe_index != rx.ffe_index2);

    //print_dfe();
    //DBG_Printf("RX TRAIN RESULTS:\t R=%x C=%x EO=%x F0=%x \n\r",train_r, train_c, train.eo,train.f0);
    //DBG_Printf("RX OPT   RESULTS:\t R=%x C=%x EO=%x F0=%x \n\r",opt_r, opt_c, opt.eo,opt.f0);
}


/*#if _SUPPORT_BLIND_TRAIN
__code rx_blind_traing_c_tb[] = { 15, 15, 15, 15, 15, 15, 15, 15, 15,15,15,15,15,15,15,15 };
__code rx_blind_traing_r_tb[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8,9,10,11,12,13,14,15 };
#endif
*/

//__code rx_ffe_set_c_tb[]   = { 15, 15, 15, 15, 15, 15, 15, 15, 15,15,15,15,15,15,15,15,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};
//__code rx_ffe_set_r_tb[]   = { 0, 1, 2, 3, 4, 5, 6, 7, 8,9,10,11,12,13,14,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15 };

//__code rx_ffe_set_r_pcie_tb[]   = { 0, 2, 4, 6, 9 };
//__code rx_ffe_set_r_pcie_tb[]   = { 0, 2, 4, 6, 9, 11 };
__code rx_ffe_set_r_pcie_tb0[]   = { 2, 4, 6, 9, 11 }; 
                                //R=9, 7, 5, 2, 0 

/*
* rx_ffe_train
*
*	ctrl_cdr_phase_on = (ctrl_rx_only_mode || (rx.blind_training && tag_CDR_PHASE_OPT_IN_BLIND))
*			&& lnx_CDRPHASE_OPT_EN_LANE && !tag_CDR_PHASE_LAST_ONLY;

*/
void rx_ffe_train_ram(void) BANKING_CTRL {
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

	set_train_ram(); // train the FFEs within the set

	// update DC_gain_triger
	//rx.c_updated = ((rx.ffe_index>>4) != (opt.rx_ffe_index>>4)); // C updated?
	//rx.rc_updated = (rx.ffe_index != opt.rx_ffe_index); // FFE updated?
	//rx.dc_gain_triger = 0; //(((tag_RX_DC_FAST_TRIGGER_EN && (rx.stage < 2))
		//&& ((rx.c_updated==0) && ctrl_rx_only_mode)) || ((!rx.rc_updated) && (!control.relative_eyeopen))); // dc_gain_control needed?
	
}

void set_train_ram(void) BANKING_CTRL {
	uint8_t i, size_ffe_set; 
	//int sum_direction_compute;

	i = 0; // set the initial index to zero
	
	if( tx_status_pcie_mode ) 
		size_ffe_set = 5; //11;	
	else
		size_ffe_set = 16;
		
	while (i < size_ffe_set) //32 default, 16 fast when gain_train_with_C = 1//rx.size_ffe_set) // while the index is not the last one
	{
		/*#if _SUPPORT_BLIND_TRAIN
		if (rx.blind_training) 	{
			train_c = rx_blind_traing_r_tb[i];
			if (tag_GAIN_TRAIN_WITH_C==0)  
				train_c = rx_blind_traing_c_tb[i]; // update C		
			
		}
		else
		#endif*/	
		{
			//if( tx_status_pcie_mode ) 
				train_r = rx_ffe_set_r_pcie_tb0[i];
			//else
			//	train_r = rx_ffe_set_r_tb[i];
		
			//if (tag_GAIN_TRAIN_WITH_C==0)  //1
			//train_c = rx_ffe_set_c_tb[i]; // update C		
				
		}
		Set_Rx_FFE_ram();

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
			#ifdef SUPPORT_DFE_UPDATE_EN_DEBUG
			dfe_cdr_phase_opt_ram(); // adapt DFE
			#else
			dfe_cdr_phase_opt(); // adapt DFE	
			#endif	
			RX_FFE_Comparision(); // compare the training RX FFE with the global optimal one
		}
	#if _DEBUG
    //DBG_PS(" #%d", i);
	#endif
		//if( train_short_mode ) i++;
		i++;	
		

	}	
}

/*
void ffe_res_short_channel_adjust_ram(void) BANKING_CTRL {
	
	if(lnx_BYPASS_CTLE_TRAIN_LANE) return;
	
	if( reg_FFE_RES1_SEL_LANE_3_0 == 0xB) {
	
		if(train.dfe_saturate || train.f0a_max >= 50) {
			reg_FFE_RES1_SEL_LANE_3_0 = 0xD;
		}
	}
	
}	

*/
