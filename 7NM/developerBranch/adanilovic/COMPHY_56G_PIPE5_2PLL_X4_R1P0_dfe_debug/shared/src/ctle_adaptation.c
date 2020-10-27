/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file CTLE_Adapt.c
* \purpose CTLE Adaptation for 56G 7nm
* \History
*	3/6/2020 Heejeong Ryu		Initial 
*/

#include "common.h"
#include "driver.h"

#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg BANK2
#endif


#ifdef SUPPORT_CTLE_ADAPT

static void tracking_dfe_adaptation(void) ;
static void ctle_c1_adapt(void) ;
static void phase_adapt(void) ;
static uint8_t get_align90(void) ;
static void set_align90(uint8_t ph) ;
static void rl2_adapt(void) ;


#ifdef SUPPORT_RL2_ADAPT
static void rl2_adapt(void) {
	int8_t delta_temp, cur_temp;
	
	if (reg_PIN_PHY_GEN_RX_RD_LANE_5_0 < 26) return; //25G above
	
	if(!tag_RL2_ADAPT_EN) {
		rx_rl2_adapt_en = 0;
		lnx_UART_EN_LANE = 1;
		return;
	}
	
	cur_temp = read_tsen();
	
	if(!rx_rl2_adapt_en) {
		pre_temp = cur_temp;
		rx_rl2_adapt_en = 1;
		#if _DBG_CTLE_ADAPT
		DBG_Printf("\r\n ++rl2 adapt start:  train_rl2=%d norm_rl2=%d temp=%d delta_thrs:%d", train_rl2_tune, norm_rl2_tune, cur_temp, tag_RL2_TEMP_DELTA_THRS);
		#endif
		return;
	}
	
	delta_temp = abs(cur_temp - pre_temp);
	if(delta_temp >= tag_RL2_TEMP_DELTA_THRS) {
		
		norm_rl2_tune = get_rl2_tune_per_temp(cur_temp);
 		reg_CTLE_RL2_TUNE_G_LANE_2_0 = conv_bin2gray(train_rl2_tune + norm_rl2_tune);
		pre_temp = cur_temp;

		#if _DBG_CTLE_ADAPT
		DBG_Printf("\r\n rl2 adapt: train_rl2=%d norm_rl2=%d rl2=%d(%d) temp=%d", train_rl2_tune, norm_rl2_tune,  conv_gray2bin(reg_CTLE_RL2_TUNE_G_LANE_2_0), reg_CTLE_RL2_TUNE_G_LANE_2_0, cur_temp);
		#endif
		
		lnx_UART_EN_LANE = 1; //test

	}
	
}

#endif

#ifdef SUPPORT_PHASE_ADAPT


static void phase_adapt(void) {
	uint8_t ph;
	uint16_t temp16;

	
	if(!tag_PHASE_ADAPT_EN) {
		rx_phase_adapt_en = 0;			
		lnx_UART_EN_LANE = 1;
		return;
	}

	if(!rx_phase_adapt_en) {
		//init		
		pa_lpcnt = 0;	
		pa_sum_fn1 = 0;
		pa_sum_f1 = 0;
		rx_phase_adapt_en = 1;
		
		temp16 = (uint16_t)(opt_f0b*tag_F0B_HYST_LOW)/100;
		f0b_low_thrs = (uint8_t)temp16; 
		temp16 = (uint16_t)(opt_f0b*tag_F0B_HYST_HIGH)/100;
		f0b_high_thrs = temp16;

		#if _DBG_CTLE_ADAPT
		lnx_UART_EN_LANE = 0;
		DBG_Printf("\r\n ++phase adapt init:  f0b:%d f0b_l=%d f0b_h=%d ph=%d", opt_f0b, f0b_low_thrs, f0b_high_thrs, (reg_RX_ALIGN90_CAL_SETTING_LANE_7_0 & 0x7f));
		#endif
		
	}
	
	tracking_dfe_adaptation();
	lnx_UART_EN_LANE = 0;

		
	pa_sum_fn1 += train.fn1;
	pa_sum_f1 += train.f1;
	
	if(pa_lpcnt++ < tag_PHASE_ADAPT_LPNUM) return;

	ph = get_align90();

	if(pa_sum_fn1 < (int16_t)(f0b_low_thrs*tag_PHASE_ADAPT_LPNUM) && 
		pa_sum_f1 >= (int16_t)(tag_F1_THRS3*tag_PHASE_ADAPT_LPNUM)) {
			if(ph > tag_CDR_PHASE_MIN) {
				ph--; 
			}
			else {
				DBG_Printf("\r\n ++phase: hit min!!");
			}
	}
	else if(pa_sum_fn1 > (int16_t)(f0b_high_thrs*tag_PHASE_ADAPT_LPNUM)) {
			if(ph < tag_CDR_PHASE_MAX) {
				ph++; 
			}
			else {
				DBG_Printf("\r\n ++phase: hit max!!");
			}
		
	}
	else if(pa_sum_f1<=(int16_t)(tag_F1_THRS1*tag_PHASE_ADAPT_LPNUM) &&
		pa_sum_fn1>0 ){
		if(ph < tag_CDR_PHASE_MAX) {
			ph++; 
		}		
		else {
			DBG_Printf("\r\n ++phase: hit max!!");
		}
	}

	set_align90(ph);

	#if _DBG_CTLE_ADAPT
	DBG_Printf("\r\n ++: %d: fn1=%d pa_sum_fn1=%d f1:%d pa_sum_f1=%d ph=%d", pa_lpcnt, train.fn1, pa_sum_fn1, train.f1, pa_sum_f1, ph);
	#endif
	
	pa_sum_fn1 = 0;
	pa_sum_f1 = 0;
	pa_lpcnt = 0;	
	
	
}

#endif //SUPPORT_PHASE_ADAPT

#ifdef SUPPORT_CTLE_C1_ADAPT

__code uint8_t cap1_sel_tb_g[]     = {0, 1, 3, 2, 6, 7, 5, 4, 12, 13, 15, 14, 10, 11, 9, 8, 8, 8, 8 };
__code uint8_t cap_sel1_extra_tb[] = {0, 0, 0, 0, 0, 0, 0, 0, 0,  0,  0,  0,  0,  0,  0, 0, 1, 3, 7 };
                           //index =  0  1  2  3  4  5  6  7  8   9   10  11  12  13  14 15 16 17,18

extern __code int16_t dfe_res_f0_sumFtap[];
extern __code int16_t dfe_res_f1_sumFtap[];

static void ctle_c1_adapt(void) {
	uint16_t temp16;
	uint32_t total_f1, temp32_f0b;
	uint8_t save_tag_DFE_LOAD_EN;
	int8_t diff = 0;
	uint8_t c1;

	if( !tag_CTLE_C1_ADAPT_EN ) {
	
		if(rx_ctle_adapt_en ) {
			rx_ctle_adapt_en = 0;
			#if _DBG_CTLE_ADAPT
			DBG_Printf("\r\n ++ctle c1 adapt end");
			#endif
	    	}	
	        
		lnx_UART_EN_LANE = 1;
		return;
	}

	
	if(rx_ctle_adapt_en==0) {
		//init
		temp16 = (uint16_t)(opt_f0b*tag_TRACK_CTLE_F0B_THRS)/100;
		norm_f0b_his_thrs = (uint8_t)temp16;
		norm_c1 = conv_gray2bin(reg_CTLE_CAP1_SEL_LANE_3_0);
		norm_c1 += conv_thermo_2_bi(reg_CTLE_CAP1_SEL_EXTRA_LANE_2_0);
		rx_ctle_adapt_en = 1;
		sum_f0b_diff = 0;
		sum_f1 = 0;
		f0b_vote_cnt = 0;
		#if _DBG_CTLE_ADAPT
	DBG_Printf("\r\n ++ctle c1 adapt start:  norm_c1=%d(%d:%d) norm_f0b_his_thrs= %d", norm_c1, reg_CTLE_CAP1_SEL_LANE_3_0, reg_CTLE_CAP1_SEL_EXTRA_LANE_2_0, norm_f0b_his_thrs);
		#endif

		lnx_UART_EN_LANE = 0;
 

	}

	tracking_dfe_adaptation();
	lnx_UART_EN_LANE = 0;
	 

	{			
		sum_f0b_diff +=  (int16_t)(train.f0 - opt_f0b); 
		sum_f1 += (int16_t)train.f1;
		#if _DBG_CTLE_ADAPT
		//DBG_Printf("\r\n ++ctle: #%d: f0b=%d  sum_diff=%d norm_f0b=%d norm_c1=%d(%d) norm_f0b_his_thrs=%d", f0b_vote_cnt, train.f0, sum_f0b_diff, norm_f0b, norm_c1, reg_CTLE_CAP1_SEL_LANE_3_0, norm_f0b_his_thrs );
		#endif
				
		//check F0b changes
		if(f0b_vote_cnt++ < tag_ADAPT_F0B_VOTE_NUM) {			
			return;
		}	

		#if _DBG_CTLE_ADAPT
		DBG_Printf("\r\n ++ctle: #%d: train.f0b=%d  sum_diff=%d norm_c1=%d(%d) norm_f0b_his_thrs=%d ", f0b_vote_cnt, train.f0, sum_f0b_diff, norm_c1, reg_CTLE_CAP1_SEL_LANE_3_0, norm_f0b_his_thrs);
		#endif
		
		//check thres
		c1 = norm_c1;
		sum_f0b_diff = sum_f0b_diff/tag_ADAPT_F0B_VOTE_NUM;		
		diff = (int8_t)sum_f0b_diff;
		norm_f0b = opt_f0b + diff;		
		total_f1 = (uint32_t)sum_f1*dfe_res_f1_sumFtap[dfe_f1_res_sel];
		temp32_f0b = (uint32_t)opt_f0b*dfe_res_f0_sumFtap[dfe_f0_res_sel]*tag_ADAPT_F0B_VOTE_NUM;
		
		if((diff > norm_f0b_his_thrs) && 
			(tag_CTLE_C1_R2P0_ADAPT_EN?(sum_f1 >= 1*tag_ADAPT_F0B_VOTE_NUM):1))
		{
			if(c1>CTLE_C1_INX_MIN) 
				c1--;
			else {
				DBG_Printf("\r\n c1 hit min!!"); 
			} 
		}
		else if((diff < -norm_f0b_his_thrs) &&
			(tag_CTLE_C1_R2P0_ADAPT_EN?(total_f1 <= temp32_f0b):1)) {		
			if(c1<CTLE_C1_INX_MAX)
				c1++; 
			else {
				DBG_Printf("\r\n c1 hit max!!"); 
			}
		}
		
		reg_CTLE_CAP1_SEL_LANE_3_0 = cap1_sel_tb_g[c1];
		reg_CTLE_CAP1_SEL_EXTRA_LANE_2_0 = cap_sel1_extra_tb[c1];
		norm_c1 = c1;

		#if _DBG_CTLE_ADAPT
		if(tag_CTLE_C1_R2P0_ADAPT_EN) {
		  DBG_Printf("\r\n R2.0: --(sum_f1=%d >= thrs=%d) ++(total_f1=%ld <= opt_f0b=%d total_opt_f0b=%ld)", sum_f1, tag_ADAPT_F0B_VOTE_NUM,  total_f1, opt_f0b, temp32_f0b );
		}
		DBG_Printf("\r\n R1.0:  norm_f0b=%d opt_f0b=%d  : norm_c1=%d opt_c1=%d", norm_f0b, opt_f0b, norm_c1, lnx_OPT_C_INDEX_LANE_7_0 );
		#endif
	
		//renew for next
		f0b_vote_cnt = 0;
		sum_f0b_diff = 0;
		sum_f1 = 0;

		lnx_UART_EN_LANE = 1; //test

	}
}

#endif //SUPPORT_CTLE_C1_ADAPT


void CTLE_Adaptation(void) BANKING_CTRL
{

	if(eom_ext_mode) return;
	if(!(reg_DFE_ADAPT_CONT_LANE && lnx_TRAIN_DONE_LANE)) return;
	if(!lnx_RX_TRACKING_ENABLE_LANE) {
		rx_ctle_adapt_en = 0;
		rx_phase_adapt_en = 0;
		rx_rl2_adapt_en = 0;
		return;
	}
	
        // TBD PHASE (NOT SURE HERE)

	if(timeout2_check(CTLE_TIMER)){
		// As the common timer for dc_vref_adj also
		timeout2_start(CTLE_TIMER,(uint32_t)tag_CTLE_TIMER_HR*1000L);	
		if(tag_DC_VREF_ADJ_EN)
			dc_vref_adj(tag_DC_VREF_ADJ_TRANS_LPNUM, tag_DC_VREF_ADJ_DFE_LPNUM);
	}

	#ifdef SUPPORT_CTLE_C1_ADAPT	
	if(timeout2_check(CTLE_TIMER_2)){
		timeout2_start(CTLE_TIMER_2,(uint32_t)tag_CTLE_C1_TIMER*1000L);	
		
		ctle_c1_adapt();
	}
	#endif //SUPPORT_CTLE_C1_ADAPT
	
	#ifdef SUPPORT_PHASE_ADAPT
	if(timeout2_check(PHASE_TIMER)){
		timeout2_start(PHASE_TIMER,(uint32_t)tag_PHASE_ADAPT_TIME*1000L);	
		
		phase_adapt();
	}	
	#endif //SUPPORT_PHASE_ADAPT

	#ifdef SUPPORT_RL2_ADAPT
	if(timeout2_check(RL2_TIMER)){
		timeout2_start(RL2_TIMER,(uint32_t)tag_RL2_ADAPT_TIME*1000L);			
		rl2_adapt();
	}	

	#endif

	
	
}

static void tracking_dfe_adaptation(void) {

	uint8_t save_tag_DFE_LOAD_EN;
	
	save_tag_DFE_LOAD_EN = tag_DFE_LOAD_EN;
	tag_DFE_LOAD_EN = 0;
	//bit_performing_phase_train_adv = 1;
	set_dfe_cont(0);
	ctle_adaptation_running = 2;// do not bypass cds_call
	reg_DFE_F0X_SEL_LANE_4_0 = DFE_FX_SEL_FN2; //DFE_FX_SEL_FP1;	

	cds_call = CDS_EN_TRACKMEAS;
	dfe_adaptation();

	set_dfe_cont(1);
	tag_DFE_LOAD_EN = save_tag_DFE_LOAD_EN;
	//bit_performing_phase_train_adv = 0;

}

static uint8_t get_align90(void) {
	return 	reg_RX_ALIGN90_CAL_SETTING_LANE_7_0 & 0x7f;
}

static void set_align90(uint8_t ph) {
	reg_RX_ALIGN90_CAL_SETTING_LANE_7_0 = ph | 0x80;
}

#endif

uint8_t get_rl2_tune_per_temp(int8_t temp) BANKING_CTRL{

	uint8_t rl2;

	if(temp < 0) rl2 = 0;
	else if(temp >= 0 && temp < 40) rl2 = 1;
	else if(temp >= 40 && temp < 80) rl2 = 2;
	else rl2 = 3;

	return rl2;
}

