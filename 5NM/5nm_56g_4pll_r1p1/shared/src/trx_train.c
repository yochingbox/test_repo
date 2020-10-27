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
#include "pll_sharing.h"

#pragma constseg CSEG

static void train_status_reset(void);
static void dfe_f0_res_train(void) ;
static void train_tx_rx_init(void) ;
static void gain_train_init(void) ;
static void init_phase_train(void) ;
static void first_phase_train(void) ;
static void vref_isi_res_train(void) ;

void TRX_Train(void) {
	
	PHY_STATUS = ST_TRXTRAIN;
	
	if( reg_TX_TRAIN_ENABLE_ISR_LANE ) {
		reg_TX_TRAIN_ENABLE_ISR_CLEAR_LANE = 1;
		reg_TX_TRAIN_ENABLE_ISR_CLEAR_LANE = 0;
		do_train = 1;

		#ifdef _PCIE_BUILD
		train_log(0x20);	
		#endif		
	}	
	else if( reg_RX_TRAIN_ENABLE_ISR_LANE ) {
		reg_RX_TRAIN_ENABLE_ISR_CLEAR_LANE = 1;
		reg_RX_TRAIN_ENABLE_ISR_CLEAR_LANE = 0;		
		do_rxtrain = 1;

		#ifdef _PCIE_BUILD
  		train_log(0x04);
		#endif		
	}
	
	reg_DFE_MCU_CLK_EN_LANE = 0;
	set_dfe_cont(0);
		
	if( do_train | do_rxtrain) {

		if(lnx_RX_TRAIN_ONLY_DFE_LANE) {
			//reg_DFE_TAP_SIGN_MODE_LANE = 0;
			timeout2_start(TRAINING_TIMER, 3000000L);
			reg_GPI_FM_REG_LANE = 1;
			reg_GPI_LANE_7_0 = 0x10;
			cds_init();			
			adapt_slicer_en = drv_ADAPT_SLICER_EN;
			adapt_data_en =	drv_ADAPT_DATA_EN;

			dfe_adaptation();
			timeout2_stop(TRAINING_TIMER);
			TRAIN_TIME.VAL = (uint32_t)timer2_check(TRAINING_TIMER);
			
			reg_GPI_LANE_7_0 = 0;	

 		}
		else { //normal

			//TODO
			lnx_TX_TRAIN_COMPLETE_INT_LANE = 0; //temp
			
			//if(link_train_mode==0) 
			if(do_train) train_if_init();
			timeout2_start(TRAINING_TIMER, 3000000L);

			reg_GPI_FM_REG_LANE = 1;
			reg_GPI_LANE_7_0 = 0x10;
			trx_train_top();
			reg_GPI_LANE_7_0 = 0;

			timeout2_stop(TRAINING_TIMER);
			TRAIN_TIME.VAL = (uint32_t)timer2_check(TRAINING_TIMER);
#if _DEBUG_TRAIN_TIME
Printf("start time:%ld endtime=%ld => %ld ",timeout2_timers[TRAINING_TIMER].start_time,  get_time(), TRAIN_TIME.VAL);
#endif 
			
		}
		
		if(do_train) {
			
			while(reg_INT_REMOTE_STATUS_ACK_LANE);

			#ifdef _PCIE_BUILD	
			reg_TX_FFE_TRAIN_DONE_LANE = 1;
			#endif
					
			#ifdef _SERDES_BUILD
		        #if defined(CONFIG_5NM_56G_X4_4PLL_R1P0)
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
			#endif
		
			//clear DTL clamping info before normal data transfer
			reg_CLEAR_DTL_CLAMPING_TRIGGERED_LANE=1;
			reg_CLEAR_DTL_CLAMPING_TRIGGERED_LANE=0;
	
			// clear repeater mode clamping flag 
            if(pll_access_allowed(PLL__RS_OR_TS__TS)) {
			    reg_PLL_TS_DTX_CLAMPING_TRIGGER_CLEAR_LANE = 1; //reg_DTX_CLAMPING_TRIGGER_CLEAR_LANE=1;
			    reg_PLL_TS_DTX_CLAMPING_TRIGGER_CLEAR_LANE = 0; //reg_DTX_CLAMPING_TRIGGER_CLEAR_LANE=0;
            }
			#endif //_SERDES_BUILD

			lnx_TRAIN_DONE_LANE = ctrl_trx_train_done;
			lnx_TRAIN_PASS_LANE = ctrl_trx_train_pass;
			reg_TXTRAIN_FAIL_LANE = !ctrl_trx_train_pass;	

			if(reg_TX_TRAIN_DISABLE_ISR_LANE)
				tx_train_abort();
			else {
				set_train_comp();
				
				lnx_TX_TRAIN_COMPLETE_INT_LANE = 1;
			}
			
			while( reg_TX_TRAIN_DISABLE_ISR_LANE==0 );
			reg_TX_TRAIN_DISABLE_ISR_CLEAR_LANE = 1;
			reg_TX_TRAIN_DISABLE_ISR_CLEAR_LANE = 0;
			reg_TRX_TRAIN_STOP_ISR_CLEAR_LANE = 1;
			reg_TRX_TRAIN_STOP_ISR_CLEAR_LANE = 0;
			
			do_train = 0;
		
			#ifdef _PCIE_BUILD	
			reg_TX_FFE_TRAIN_DONE_LANE = 0;					
			#endif

		  	//log history
			#ifdef _PCIE_BUILD
			if(ctrl_trx_train_pass==0)
				train_log(0x40);
			else 
				train_log(0xc0);		
			#endif		
			
		}	
		
		if( do_rxtrain ) {
            //clear DTL clamping info before normal data transfer
		        reg_CLEAR_DTL_CLAMPING_TRIGGERED_LANE=1;
            		reg_CLEAR_DTL_CLAMPING_TRIGGERED_LANE=0;
            
			// clear repeater mode clamping flag 
            if(pll_access_allowed(PLL__RS_OR_TS__TS)) {
			    reg_PLL_TS_DTX_CLAMPING_TRIGGER_CLEAR_LANE = 1; //reg_DTX_CLAMPING_TRIGGER_CLEAR_LANE=1;
			    reg_PLL_TS_DTX_CLAMPING_TRIGGER_CLEAR_LANE = 0; //reg_DTX_CLAMPING_TRIGGER_CLEAR_LANE=0;
            }

			reg_INT_RX_TRAIN_COMPLETE_LANE = 0;
			reg_INT_RX_TRAIN_COMPLETE_LANE = 1;
			reg_INT_RX_TRAIN_COMPLETE_LANE = 0;

			lnx_TRAIN_DONE_LANE = ctrl_trx_train_done;
			lnx_TRAIN_PASS_LANE = ctrl_trx_train_pass;

			while(reg_RX_TRAIN_DISABLE_ISR_LANE==0);
			
			reg_RX_TRAIN_DISABLE_ISR_CLEAR_LANE = 1;
			reg_RX_TRAIN_DISABLE_ISR_CLEAR_LANE = 0;

			do_rxtrain = 0;

			#ifdef _PCIE_BUILD
			if(ctrl_trx_train_pass==0) 
				train_log(0x08);
			else
				train_log(0x18);
			#endif		

		}

	}	


	if(lnx_PATTERN_PROTECT_EN_LANE==1) pattern_protect_dis = 0;
	rx_ctle_adapt_en = 0;

        //save power turn off floating taps in digital and analog     
	if (tag_FLOATING_TAP_DISABLE_EN) 
		turn_off_floating_taps();
	else set_dfe_cont(1);
	
	//reg_DFE_TAP_SIGN_MODE_LANE = 1; // Analog error patch. during normal should be 1. don't want to change dfe sign.

	PHY_STATUS = ST_NORMAL; 
	
}


void trx_train_top(void) {
	traintb_inx = 0;
	
	do{
		train_st = train_fnc_tb[traintb_inx].train_stm;
		#if _DEBUG
 		DBG_Printf("\r\nTRAIN STEP(%d): %d(%s)", traintb_inx, train_st, str_train_step[train_st]);
		#endif
		train_fnc_tb[traintb_inx].func();
		traintb_inx++;

		if((do_train && reg_TX_TRAIN_ENABLE_RD_LANE==0) || (do_rxtrain && reg_RX_TRAIN_ENABLE_RD_LANE==0) ) {
			#if _DEBUG
			DBG_Printf("\r\nTRAIN ABORT!");            
			#endif
			train_st = ST_TRXTRAIN_DONE;
			break;
			
		}
	} while(train_st!=ST_TRXTRAIN_DONE);

#if _DEBUG
	DBG_Printf("\r\nTRAIN DONE!");            
#endif
	
}


uint8_t update_dfe_res(bool vref_en, bool f0_en, bool isi_en) {
	/* 56G DFE Resolution Update */
	//const int8_t f0_low_th[] = {tag_DFE_RES_F0A_LOW_01, tag_DFE_RES_F0A_LOW_01, tag_DFE_RES_F0A_LOW_2, tag_DFE_RES_F0A_LOW_3};
	const int8_t f1_low_th[] = {tag_DFE_RES_F1_LOW_01, tag_DFE_RES_F1_LOW_01, tag_DFE_RES_F1_LOW_2, tag_DFE_RES_F1_LOW_3};
	const int8_t f2_low_th[] = {tag_DFE_RES_F2_LOW_01, tag_DFE_RES_F2_LOW_01, tag_DFE_RES_F2_LOW_2, tag_DFE_RES_F2_LOW_3};
	int8_t vote, vref_max;
	int8_t isi_val;
	uint8_t updated = 0;

	// custom CDS call (no reset, just continue adapting DFE)
	train_cds =  CDS_DFE_RES; //cds_call = CDS_EN_RESTRAIN;
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
		vref_max = max(abs(train_vref_top), abs(train_vref_bot));
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
				train_cds =  CDS_RES_VREF; //cds_call=CDS_EN_RECOVER;
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

__code const uint8_t gt0_dfe_res[] = {0, 1, 2, 3 };
__code const uint8_t gt1_dfe_res[] = {3, 3,  3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3  };//also need to change pw
__code const uint8_t gt1_c []      = {15, 15, 15, 15, 15, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0}; //gain_index pw
__code const uint8_t gt2_dfe_res[] = {0, 1, 2, 3, 1, 2, 3 };

#ifdef _PCIE_BUILD
__code uint8_t pcie_gain_C_table[] = {17, 14, 10, 7, 4, 0};
#define tag_PCIE_GAIN_TBL_SZIE	6
#else
#define tag_HR_GAIN_C_TABLE_SIZE (21-3)
__code uint8_t HR_gain_C_table[] = {  17, 16, 15, 14, 13, 12, 11, 10, 9,  8, 7, 6, 5,  4, 3, 2, 1, 0  };
#endif //PCIE_BUILD

void gain_train(void)  
{
	uint8_t step_number;
	uint8_t gain_index, c_index; //largest gain + smallest dfe_res
	uint8_t gain_table_size, dfe_res_f0a_low_thres;
	uint8_t gain_table_index;
	uint8_t credit;

	if(cmx_TRAIN_SIM_EN) return;

	//bool 	ctrl_sampler_by2;
	step_number = 0;
	gain_index = 0, c_index = 0; //largest gain + smallest dfe_res
	credit = 0;

	#ifdef _SERDES_BUILD
	if (gen_rx>=26 && tag_CDR_PHASE_OPT_EN) { //25.78125G
          //53G, 50G, 25G
		opt.phase_offset_data = -40; // 40' degree from cal_ph 90' //-80;
	}
	#endif

	#if _DEBUG
	DBG_PS("\r\nGain Train: ");
	#endif

	//cds_call = CDS_EN_GAINTRAIN;
	tag_DFE_LOAD_EN = 0;
	tag_DFE_SAVE_EN = 0;

	short_flag = 0;
	
  while(1)
 {
	#ifdef _PCIE_BUILD
	gain_table_size = tag_PCIE_GAIN_TBL_SZIE;
	gain_table_index = 1;	
	#else	
	gain_table_size = (gain_train_with_c ? (tag_HR_GAIN_C_TABLE_SIZE) : gt0_size);
	gain_table_index = (gain_train_with_c?1:0);
	#endif
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
			#ifdef _PCIE_BUILD
			train.c = pcie_gain_C_table[gain_index];
			#else
			train.c = HR_gain_C_table[gain_index];
			#endif
			break;
		default:
			ctrl_step_res_dfe = gt0_dfe_res[gain_index];
		}

		Set_Rx_FFE();

		dfe_cdr_phase_opt();	
		step_number ++;

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

		#if _DBG_RXTRAIN
		DBG_Printf(" gain_index=%d(size:%d), train.f0a_max=%d train.dfe_saturate=%d, vref_max=%d, credit=%d, vref_thrs=%d", gain_index, (gain_table_size-1),train.f0a_max,train.dfe_saturate, max(abs(train_vref_top),abs(train_vref_bot)), credit,tag_VREF_RES_HIGH_THRES);
		#endif
	
		if(lnx_F0B_GAINTRAIN_EN_LANE && pam2_en) {
			if ((train.f0 < dfe_res_f0b_low_thres) && train.dfe_saturate==0 && train.oe_saturate == 0 && (gain_index >=1) )
			{
				gain_index--;
			}                               // 40                                       
			else if (    (train.f0 >= dfe_res_f0b_high_thres) 			  
					&& (gain_index < (gain_table_size-1)))
			{
				if(credit==0) //Credit is for variation 
					gain_index++;
				else
					credit--;
			}	
		}
		else {//						    6
			if ((train.f0a < dfe_res_f0a_low_thres) && train.dfe_saturate==0 && train.oe_saturate == 0 && (gain_index >=1) )
			{
				gain_index--;
			}                               // 50                                       
			else if ((    (train.f0a >= dfe_res_f0a_high_thres) || 
											//6
						//((train.f0a_max >= dfe_res_f0a_low_thres) && (/*train.dfe_saturate ||*/ train.oe_saturate)) ||
																			//55
						(max(abs(train_vref_top),abs(train_vref_bot)) > tag_VREF_RES_HIGH_THRES) 				  
					) 
					&& (gain_index < (gain_table_size-1)))
			{
				if(credit==0) //Credit is for variation, but no need for now. 
					gain_index++;
				else
					credit--;
			}
			#ifdef _SERDES_BUILD
			else if (short_flag && max(abs(train_vref_top),abs(train_vref_bot)) > tag_VREF_RES_HIGH_THRES 
				&& reg_VREF_SHIFT_LANE_1_0 < 3)
			{
				reg_VREF_SHIFT_LANE_1_0++;
			}
			//else if (((reg_VREF_SHIFT_LANE_1_0 > 1 &&
			//           train.f0a_max >= dfe_res_f0a_high_thres) ||
			//          train.f0a_saturate) &&
			//         (gain_index == gain_table_size - 1))
			#endif
			else
			{
				// 20200116 John
				#ifdef _PCIE_BUILD
				break;
				#else
				if(train.dfe_saturate==0) {
					credit++;							      
					#if _DBG_RXTRAIN
					DBG_Printf(" =====> #%d:credit=%d", step_number, credit);
					#endif
				}
				#endif //_PCIE_BUILD
				
			}
		
	       //DBG_Printf("\r\nindex:%d train.f0a_max=%d  low_thrs=%d high=%d max_vref=%d vref_trs=%d", gain_index, train.f0a_max, dfe_res_f0a_low_thres, dfe_res_f0a_high_thres, max(abs16(sum_vref_top),abs16(sum_vref_bot)), tag_VREF_RES_HIGH_THRES);
		}
		
	}
	
	#if _DBG_OUTER_EYE
		if (train.outer_eye > tag_DFE_OUTER_EYE_THRES && !short_flag && rate_mode == HR)
		{
				#if _DEBUG
				DBG_Printf("\r\nCTLE Bypass Activated");
				#endif
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
	
		if(/*(lnx_TRAIN_DEBUG2_LANE_7_0 == 0) &&*/ 
           #ifdef _56G_7NM
           (reg_CTLE_BYPASS1_EN_LANE==0) && 
           #else //#ifdef _56G_7NM
           (reg_CTLE_BYPASS1_EN_LANE_1_0==0) && 
           #endif // #else //#ifdef _56G_7NM
           (train.c==0) && (( lnx_F0B_GAINTRAIN_EN_LANE &&(train.f0 >= dfe_res_f0b_high_thres)) || 
		(!lnx_F0B_GAINTRAIN_EN_LANE&&((train.f0a >= dfe_res_f0a_high_thres) || 
								//((train.f0a_max >= dfe_res_f0a_low_thres) && (train.dfe_saturate || train.oe_saturate)) ||
						(max(abs16(sum_vref_top),abs16(sum_vref_bot)) > tag_VREF_RES_HIGH_THRES ) )) ))
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

			#ifdef _PCIE_BUILD
			break;
			#endif		
		}
		else
		{
			#if _DEBUG
			DBG_Printf(", ***Break!!");
			#endif
			break;
		}	
	
	}

	c_index = gain_index;
	train_cds = CDS_GAINTRAIN_INIT1; //cds_call = CDS_EN_DEFAULT;
	tag_DFE_LOAD_EN = 1;
	tag_DFE_SAVE_EN = 1;
	
	#ifdef _SERDES_BUILD
	if(tag_CDR_PHASE_OPT_EN) {	

		if (gen_rx>=26) { //25.78125G 
			opt.phase_offset_data = -30; ////-30' degree from cal_ph //-60;

		}
		else{
			opt.phase_offset_data = 0; 
		} 
		train.phase_offset_data = opt.phase_offset_data; 
	}
	#endif
	
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

static void train_status_reset(void){
	int8_t tsen_dat;

	if (!(TRAIN_STEP & TRAIN_RESET))	return;

	#if _DEBUG
	debug_print_head();
	#endif


	train_cds = CDS_NULL;
	train_st = ST_TRAIN_RESET;

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
    //ctrl_trx_ffe_updated = 0;
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
	rx.ffe_updated = 0; // indicate whether the index of RX FFE is updated
	rx.ffe_index2 = 0; //  // another temporarily saved RX FFE index

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
	
	/*tx_reset(train.tx_preset_index);
	dfe_cdr_phase_opt();*/
	//update_opt_trx_ffe();

	//
	if (do_train) {

		lnx_TX_TRAIN_COMPLETE_INT_LANE = 0; 
		reg_TXTRAIN_FAIL_LANE = 0;

		if(phy_mode == 4) {//ethernet
		    if(pam2_en)
			opt.tx_preset_index = cmx_TX_PRESET_INDEX_PAM2_1_0 | 0 ; //1;
		    else 
			opt.tx_preset_index = cmx_TX_PRESET_INDEX_PAM4_1_0 | 0 ; //1;
		}
		else if(phy_mode == 3) //pcie
			opt.tx_preset_index = 5;
		else
			opt.tx_preset_index = 3;	

		opt.g0_index = 128;
		opt.g1_index = 128;
		opt.gn1_index = 128;
		opt.gn2_index = 128;
	}
	
	if(cmx_TRAIN_SIM_EN) { 
		lnx_FAST_DFE_TIMER_EN_LANE = 1;
	}
	
	/*lnx_TX_TRAIN_FAIL_INT_LANE = 0;
	lnx_TX_TRAIN_COMPLETE_INT_LANE = 0;
	lnx_TX_TRAIN_STATUS_DET_TIMEOUT_INT_LANE = 0; 	
	*/
	// --
	r2_adj_on = 0;

	opt2train();

	// reset phase to cal phase with phase_control_mode=0	
		
	train_db_step = 0;

}

void opt2train(void) {

	memcpy((uint8_t *)&train, (uint8_t *)&opt, sizeof(Status_Train_t));

	Set_Rx_FFE();
	
}

void train2opt() {

	memcpy((uint8_t *)&opt, (uint8_t *)&train, sizeof(Status_Train_t));
	
}

__code uint8_t bin2grey[] = { 0, 1, 3, 2, 6, 7, 5, 4, 12, 13, 15, 14, 10, 11, 9, 8, };

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
	//train.rx_ffe_index = (c<<4) + r;
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

static void train_tx_rx_init(void) {

	if(!( TRAIN_STEP & TRAIN_INIT)) return;
#if _DEBUG
	DBG_PS("\r\n train_tx_rx_init ");
#endif
	// RX_init
	if (!tag_RX_NO_INIT && !cmx_TRAIN_SIM_EN) //0
	{
		//DBG_PS("\r\n\t -rx_init");
		train.r = tag_RX_RXFFE_R_INI | 0;  //0
		train.c = tag_RX_RXFFE_C_INI | 0;  //15
		Set_Rx_FFE();
reg_MCU_DEBUG8_LANE_7_0 = 0x10;		
		switch (rate_mode)
		{
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
				//dfe_ofst_res_sel = 1; // use CAL_SAMPLER_RES_LANE[7:0]
				reg_DFE_RES_VREF_LANE_1_0 = tag_VREF_RES_INI; //3
				reg_VREF_SHIFT_LANE_1_0 = 1;
				reg_DFE_F0X_SEL_LANE_4_0 = DFE_FX_SEL_FN2;
				if(tag_RL2_ADAPT_EN && pam2_en==0) {
				    
				    if( lnx_FORCE_CTLE_RL2_TUNE_TRACK_EN_LANE ) norm_rl2_tune = lnx_FORCE_CTLE_RL2_TUNE_TRACK_INDEX_LANE_1_0;
				    else 					norm_rl2_tune = get_rl2_tune_per_temp(read_tsen());
                                    if( lnx_FORCE_CTLE_RL2_TUNE_TRAIN_EN_LANE ) train_rl2_tune = lnx_FORCE_CTLE_RL2_TUNE_TRAIN_INDEX_LANE_2_0;
				    else 					train_rl2_tune = lnx_INI_RL2_TRAIN_LANE_2_0; //3	
				    reg_CTLE_RL2_TUNE_G_LANE_2_0 = conv_bin2gray(norm_rl2_tune + train_rl2_tune);

		#if _DBG_CTLE_ADAPT
		DBG_Printf("\r\n rl2_init: train_rl2=%d norm_rl2=%d", train_rl2_tune, norm_rl2_tune);
		#endif

			
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
			//reg_DFE_RES_DOUBLE_LANE_1_0 = 1; //Jackson requested 06/25/2020
			reg_DFE_F0_RES_DOUBLE_LANE = 1;
			//tag_SUMF_BOOST_TARGET_C = 18;
			tag_FINAL_GAIN_ADJUST = 0;
			tag_THRE_EXCELLENT = 60;
			//tag_CDR_PHASE_OPT_EN = 0; //TODO how to disable phase train
			//reg_PAM2_F5FF6_FULLRANGE_LANE = 0; //TODO how to control for each speed
			//tag_CDR_PHASE_OPT_FIRST_EN = 0;
			tag_CDR_MIDPOINT_EN = 1;			
		}
		else
		{
			//reg_DFE_RES_DOUBLE_LANE_1_0 = 0;
			reg_DFE_F0_RES_DOUBLE_LANE = 0;
			//tag_SUMF_BOOST_TARGET_C = 96;
			//tag_CDR_PHASE_OPT_FIRST_EN = 1;
			tag_CDR_MIDPOINT_EN = 0;

		   //Comment by Davide: limit DTL clamping to approx. +/-375ppm in PAM4 SERDES mode (a.k.a. 53G/56G)
  		   	reg_DTL_CLAMPING_EN_LANE = 0;	
			reg_DTL_CLAMPING_DIV16_EN_LANE = 1;	
			reg_DTL_CLAMPING_SEL_LANE_2_0 = 7;	
			reg_DTL_CLAMPING_SCALE_LANE = 1;	
			reg_DTL_CLAMP_RST_MODE_LANE_1_0 = 2;	


		}
		//tag_SUMF_BOOST_TARGET_K = 7;

		if (reg_PIN_PHY_GEN_RX_RD_LANE_5_0 == 17) { //4
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
		cdr.min_phase_os = tag_CDR_MIN_PHASE_OS_MODE01;
		cdr.max_phase_os = tag_CDR_MAX_PHASE_OS_MODE01;

		set_ph_mode(ph_control_mode); //new phase move function

		phase_control_func();

#ifdef _MOVE_PHASE_CDS
		dfe_adaptation();
#endif
		ctrl_rx_train_mode = 0; 
	}
	
	// TX init
	if (do_train) {
		save_gray_code_en = (uint8_t)reg_TXDATA_PRE_CODE_EN_LANE<<3 | (uint8_t)reg_TXDATA_GRAY_CODE_EN_LANE<<2 | (uint8_t)reg_RXDATA_PRE_CODE_EN_LANE<<1 | (uint8_t)reg_RXDATA_GRAY_CODE_EN_LANE;
		reg_TXDATA_PRE_CODE_EN_LANE = 0;
		reg_TXDATA_GRAY_CODE_EN_LANE = 0;
		reg_RXDATA_PRE_CODE_EN_LANE = 0;
		reg_RXDATA_GRAY_CODE_EN_LANE = 0;
		reg_REMOTE_RD_REQ_LANE = 1;

		if(link_train_mode==0) {
			train_if_init();
			prbs_checker_init ();
			
			if (tag_TX_NO_INIT==0 ) 
			{
				train_cds = CDS_TX_TRAIN_PRESET; //cds_call = CDS_EN_FASTACQ;
				dfe_adaptation(); //may cause CDR unlock
				tx_reset(train.tx_preset_index); //3
				dfe_adaptation();
			}
		}
		//train2opt();
	}


}

static void gain_train_init(void) {
	
	if(cmx_TRAIN_SIM_EN) return;
	if (!(TRAIN_STEP & GAINTRAIN_INIT)) return;

#if _DEBUG
	DBG_Printf("\r\n adapt_data_en=%d, adapt_slicer_en=%d",adapt_data_en, adapt_slicer_en);
#endif
		if (!tag_GAIN_TRAIN_INIT_EN) return;

		train.r = tag_RXFFE_R_GAIN_TRAIN | 0;  //3
		train.c = tag_RXFFE_C_GAIN_TRAIN | 0;  //15
		Set_Rx_FFE();

		ctrl_cdr_phase_on = 0;

		dfe_res_f0a_low_thres_01 = tag_DFE_RES_F0A_LOW_THRES_01_INIT; //30
		dfe_res_f0a_low_thres_0 = tag_DFE_RES_F0A_LOW_THRES_0_INIT; //30
		dfe_res_f0a_low_thres_1 = tag_DFE_RES_F0A_LOW_THRES_1_INIT; //11
		dfe_res_f0a_low_thres_2 = tag_DFE_RES_F0A_LOW_THRES_2_INIT; //10
		dfe_res_f0a_low_thres_3 = tag_DFE_RES_F0A_LOW_THRES_3_INIT; //6
		dfe_res_f0a_high_thres = tag_DFE_RES_F0A_HIGH_THRES_INIT;

		/*if(lnx_DFE_RES_F0A_HIGH_THRES_INIT_FORCE_LANE){
			if(reg_RX_PAM2_EN_LANE==0){// 56g
                lnx_DFE_FX_SUM_SAT_THRES_LANE_7_0 = lnx_DFE_RES_F0A_HIGH_THRES_INIT_56G_INTERCEPT_LANE_7_0-tsen_dat/(lnx_DFE_RES_F0A_HIGH_THRES_INIT_56G_SLOPE_LANE_7_0?lnx_DFE_RES_F0A_HIGH_THRES_INIT_56G_SLOPE_LANE_7_0:1);
            }else{// pam2
                lnx_DFE_FX_SUM_SAT_THRES_LANE_7_0 = lnx_DFE_RES_F0A_HIGH_THRES_INIT_PAM2_INTERCEPT_LANE_7_0-tsen_dat/(lnx_DFE_RES_F0A_HIGH_THRES_INIT_PAM2_SLOPE_LANE_7_0?lnx_DFE_RES_F0A_HIGH_THRES_INIT_PAM2_SLOPE_LANE_7_0:1);
            }
        }*/ //no need RL2_TUNE adjust already covered
	
		#ifdef _PCIE_BUILD
		train_cds = CDS_PCIE_GAINTRAIN_INIT;
		#else		
		train_cds = CDS_GAINTRAIN_INIT;		
		#endif

		gain_train();
		//if (short_flag) train.c = 0;

		if (train.r !=  tag_RX_RXFFE_R_INI) {
			train.r = tag_RX_RXFFE_R_INI | 0;  //0

#if( tag_GAIN_TRAIN_WITH_C == 0)
			{
				train.c = tag_RX_RXFFE_C_INI | 0; //15
			}
#endif

			Set_Rx_FFE();

			#ifdef _PCIE_BUILD
			train_cds = CDS_PCIE_TRAIN;
			#else
			train_cds = CDS_GAINTRAIN_INIT2;
			#endif
			dfe_cdr_phase_opt();		
		}

		
	// re-adapt DFE after finishing gain train
	#if _DEBUG
	DBG_PS("\r\nGain Train Finalize");
	#endif

	#ifndef _PCIE_BUILD
	dfe_cdr_phase_opt();		
	#endif
	train2opt();

}

#ifdef _SERDES_BUILD   	
static void init_phase_train(void) {
	if(cmx_TRAIN_SIM_EN) return;
	if (!(TRAIN_STEP & INIT_PHASETRAIN1)) return;

	if (!pam2_en && !short_flag && lnx_INIT_PHASE_TRAIN_EN_LANE && tag_CDR_PHASE_OPT_EN) {
		// initial phase train
		train.r = tag_RX_RXFFE_R_INI|0;  //0
		Set_Rx_FFE();
		if (opt.eo<5) { //for long channel
			ctrl_cdr_phase_on = 1;
			//train_step = 1; ??
			train_cds = CDS_INIT_PHASE_TRAIN;
		}	
		//else {
		//	ctrl_cdr_phase_on = 0;
		//	train_cds = CDS_GAINTRAIN_INIT2; //CDS_DEFAULT
		//}
		dfe_cdr_phase_opt();
		train2opt();
      }
}

static void dfe_f0_res_train(void) { 

	uint8_t index;
	if(cmx_TRAIN_SIM_EN) return;
	if (!(TRAIN_STEP & DFERES_F0_TRAIN)) return;
	
	ctrl_cdr_phase_on = 0;

	#if _DEBUG
	DBG_PS("\r\nDFE Res Train (F0)");
	#endif
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
		train_cds = CDS_RES_F0;
		do { 
		  dfe_cdr_phase_opt();
		  update_dfe_res(0, 1, 0);
		} while (index++ < 5) ;
		dfe_cdr_phase_opt();
	}
	train2opt();

}
#endif

static void first_phase_train(void) {
	if(cmx_TRAIN_SIM_EN) return;
	if (!(TRAIN_STEP & FIRST_PHASETRAIN)) return;

	#if _DEBUG
	DBG_PS("\r\n first_phase_train : CDR_PHASE_OPT_FIRST_EN=%d ", tag_CDR_PHASE_OPT_FIRST_EN);
	#endif

	//if(opt.eo < 10)  
	if(!opt.eye_check_pass)
		ctrl_cdr_phase_on = tag_CDR_PHASE_OPT_EN && tag_CDR_PHASE_OPT_FIRST_EN;

	if (ctrl_cdr_phase_on)
	{
		#if _DEBUG
		DBG_PS("\r\n\t CDR Phase Opt = 1");
		#endif
		//train.r = 0; train.c = 15;
		//Set_Rx_FFE();
		train_cds = CDS_INIT_PHASE_TRAIN2;
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

}	

// ----

#ifdef _SERDES_BUILD
static void vref_isi_res_train(void) {
	
	uint8_t index;
	if(cmx_TRAIN_SIM_EN) return;
	if (!(TRAIN_STEP & VREF_ISI_RES_TRAIN) || pam2_en) return;

	#if tag_DFE_ISI_RES_ADAPT_EN==1 //1
	//Dfe_isi_res_adapt_en = 1;
	//dfe_cdr_phase_opt();
	//train2opt();
	//Dfe_isi_res_adapt_en = 0;
	#if _DEBUG
	DBG_PS("\r\nFinal DFE Res Train (Vref & ISI only)");
	DBG_PS("\r\n-------------------------------------");
	#endif

	ctrl_cdr_phase_on = 0;
	// 5 is just a timeout protection, code should break out before that
	index = 0;
	f0_res_min = 0;
	train_cds = CDS_DFE_RES; //cds_call = CDS_EN_RESTRAIN;
	dfe_cdr_phase_opt();
	while (index++ < 5)
	{
  	    update_dfe_res(1, 0, 0);
	    dfe_cdr_phase_opt();
	}
	train2opt();
	#endif

}
#endif

static void train_final(void) {
	uint8_t index;
	if(cmx_TRAIN_SIM_EN) return;
	if (!(TRAIN_STEP & TRAIN_FINALIZE)) return;
	
	#ifndef _PCIE_BUILD
	train_cds = CDS_FINAL_PRE;//cds_call = CDS_EN_RESTRAIN;
	dfe_adaptation();
	train2opt();
	#endif
	
	#if _DEBUG
	Printf("\r\n adapt_data_en=%d, adapt_slicer_en=%d",(uint16_t)adapt_data_en, (uint16_t)adapt_slicer_en);
	#endif
	
	#if ( tag_FINAL_BOTH_SAMPLER_ADAPT )  //1
		adapt_data_en = 1;
		adapt_slicer_en = 1;
		#ifdef _PCIE_BUILD
		train_cds = CDS_PCIE_FINAL;
		#else
		train_cds = CDS_FINAL; //cds_call = CDS_EN_FINAL;
		#endif
		dfe_adaptation();
	#endif

	// revert phase reset enable to default (1) 
	tag_RESET_PH_EN_DTL = 1;

	#ifdef _SERDES_BUILD
	if(do_train){
		// PRBS checking test
		for(index=0;index<1/*lnx_PRBS_DEBUG1_LANE_7_0*/;index++){ //TODO
			prbs_checker_start();
			prbs_checker_check_ber();
			prbs_checker_stop();
		}
		prbs_checker_uninit();
	}
	
	reg_DFE_F0X_SEL_LANE_4_0 = DFE_FX_SEL_FP1;
	train_cds = CDS_FINAL_MEASURE; //cds_call = CDS_EN_TRACKMEAS;
	dfe_adaptation();
	#endif

	ctrl_trx_train_pass = opt.good_eo; // return training pass

	{	
	lnx_OPT_F0B_LANE_7_0 = train.f0;
	lnx_OPT_F1_LANE_7_0 = (uint8_t)train.f1;
	lnx_OPT_FN1_LANE_7_0 = (uint8_t)train.fn1;
	lnx_OPT_VREF_LANE_7_0 = (uint8_t)((abs(train_vref_top)+abs(train_vref_bot))>>1);               
	lnx_OPT_R_INDEX_LANE_7_0 = train.r;
	lnx_OPT_C_INDEX_LANE_7_0 = train.c;
	lnx_OPT_PHASE_DATA_LANE_7_0 =  (uint8_t)train.phase_offset_data;

#if _DEBUG	
	DBG_Printf("\r\n opt_f0b: %d", lnx_OPT_F0B_LANE_7_0);
	DBG_Printf(" opt_fn1: %d", (int8_t)lnx_OPT_FN1_LANE_7_0);
	DBG_Printf(" opt_f1: %d", lnx_OPT_F1_LANE_7_0);
	DBG_Printf(" opt_vref:%d", (int8_t)lnx_OPT_VREF_LANE_7_0);
#endif

	}

	//reg_EOM_CLK_EN_LANE = 0; //save power
	#if _DEBUG
    //DBG_Printf("\r\ntrx_end finish");            
	#endif

}

void trx_train_dummy(void) {

	if (!(TRAIN_STEP & TRX_TRAIN_DONE))	return;

	ctrl_trx_train_done = 1;
	
}

void train_log(uint8_t step) {
  	
    if(step==1) {
	if(gen_rx==2) {
		TRAIN_LOG.BT.B3 = step;
  	}
	else if(gen_rx==3) {
		TRAIN_LOG.BT.B2 = step;	  
	}
	else if(gen_rx==4) {
		TRAIN_LOG.BT.B1 = step;	
	}	
    }
    else {
	if(gen_rx==2) {
		TRAIN_LOG.BT.B3 |= step;
  	}
	else if(gen_rx==3) {
		TRAIN_LOG.BT.B2 |= step;	  
	}
	else if(gen_rx==4) {
		TRAIN_LOG.BT.B1 |= step;	
	}	
    }	
}


#ifdef _SERDES_BUILD
__code TRAIN_FNC_t train_fnc_tb[ST_TRAIN_MAX] = {
{ST_TRAIN_RESET, train_status_reset},
{ST_TRAIN_INIT, train_tx_rx_init},      		
{ST_GAINTRAIN_INIT, gain_train_init},     	
{ST_INIT_PHASETRAIN1, init_phase_train},   	
{ST_DFERES_F0_TRAIN, dfe_f0_res_train},
{ST_FIRST_PHASETRAIN, first_phase_train},   	
{ST_RSWEEP, rsweep},      			
{ST_R2_ADJ, ffe_res2_adjust},      			
{ST_DFE_RES_F0_VREF_TRAIN, rx_dfe_f0_vref_train}, 
{ST_PHASE_TRAIN, rx_phase_train},
{ST_RL2_TUNE_ADJ, rx_rl2_tune_adjust},     		
{ST_FINAL_PHASE_TRAIN, rx_final_phase_train},
{ST_RX_TRAIN_DONE, rx_train_dummy},
{ST_TRX_TRAIN_ST, tx_train},
{ST_TX_TRAIN_DONE, tx_train_dummy},	 
{ST_VREF_ISI_RES_TRAIN, vref_isi_res_train}, 	
{ST_TRAIN_FINALIZE, train_final},   		
{ST_TRXTRAIN_DONE, trx_train_dummy},
};

#else //_PCIE_BUILD
__code TRAIN_FNC_t train_fnc_tb[ST_TRAIN_MAX] = {
{ST_TRAIN_RESET, train_status_reset},
{ST_TRAIN_INIT, train_tx_rx_init},      		
{ST_GAINTRAIN_INIT, gain_train_init},     	
//{ST_INIT_PHASETRAIN1, NULL},   	
//{ST_DFERES_F0_TRAIN, NULL},	
//{ST_FIRST_PHASETRAIN, NULL}, //first_phase_train},   	
{ST_RSWEEP, rsweep},      			
//{ST_R2_ADJ, NULL},      			
//{ST_DFE_RES_F0_VREF_TRAIN, NULL}, 
//{ST_PHASE_TRAIN, NULL}, //rx_phase_train},
//{ST_RL2_TUNE_ADJ, NULL},     		
//{ST_FINAL_PHASE_TRAIN, NULL},
{ST_RX_TRAIN_DONE, rx_train_dummy},
{ST_TRX_TRAIN_ST, tx_train},
//{ST_TX_TRAIN_DONE, tx_train_dummy},	 
//{ST_VREF_ISI_RES_TRAIN, NULL}, 
{ST_TRAIN_FINALIZE, train_final},   		
{ST_TRXTRAIN_DONE, trx_train_dummy},
};
#endif //_PCIE_BUILD

#if _DEBUG
__code char str_train_step[ST_TRAIN_MAX][40] = {
"TRAIN_RESET",
"TRAIN_INIT",
"GAINTRAIN_INIT",
"INIT_PHASETRAIN1",
"DFERES_F0_TRAIN",
"FIRST_PHASETRAIN",
"RSWEEP",
"R2 ADJ",
"DFE RES_F0_VREF_TRAIN",
"PHASE_TRAIN",
"RL2_TUNE_ADJ",
"FINAL_PHASE_TRAIN",
"RXTRAIN_DONE",
"TXTRAIN",
"TXTRAIN_DONE",
"VREF_ISI_RES_TRAIN",
"TRAIN_FINALIZE",
"TRAIN_DONE",
};

#endif


