/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file dfe_adaptation.c
* \purpose dfe adaptation & cdr_dfe_scheme
* \History
*	10/15/2015 Heejeong Ryu		Initial 
*/
#include "common.h"
#include "driver.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK1
#pragma constseg BANK1
#endif

#define _DEBUG 	_DBG_DFE
#define _MEM_SAVE
#define F0_DIVIDER_QR 4
#define F2TO7_DIVIDER_QR 4

#define F0_DIVIDER_HR 2
#define F1TO7_DIVIDER_HR 2

#define F0_DIVIDER_FR 1
#define F1TO7_DIVIDER_FR 1

/*#define QR 2
#define HR 0
#define FR 1*/

void cds_calculation(void) BANKING_CTRL;

/**
 * \module dfe_adaptation top
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input:  
 *    Output: 
*/

void dfe_adaptation( void ) BANKING_CTRL {
	uint8_t i;
	uint32_t cds_arg;
    //uint8_t cnt, max_cnt, err_loop_cnt;
    uint8_t p_idx, ds_idx; // added by JL
	uint8_t dfe_cnt, dfe_max_cnt;

	// Abort workaround
	if(do_train){
		if(!reg_TX_TRAIN_ENABLE_RD_LANE || reg_TRX_TRAIN_STOP_ISR_LANE)
			return;
	}else if(do_rxtrain){
		if(!reg_RX_TRAIN_ENABLE_RD_LANE)
			return;
	}
	
	lnx_DFE_CAL_DONE_LANE = 0; //for indicator for bitmatch

	sum_f0a = 0;
	sum_f0b = 0;
	sum_f0k = 0;
	sum_f0d = 0;
	sum_f0d_left = 0;
	sum_f0d_right = 0;
	sum_f0 = 0;
	sum_f0x = 0;
#if _DBG_F0X
	sum_f0xp1 = 0;
	sum_f0xn3 = 0;
	sum_f0xn4 = 0;
	sum_f0xn5 = 0;
#endif

    // Added by JL
    // sum_f0x_tmb, sum_f0a_tmb, and sum_f0_tmb are global variables
    // initialize everything to be zero
    
    for (p_idx = 0; p_idx < NUM_PATH; p_idx++){
        for (ds_idx = 0; ds_idx < NUM_DS; ds_idx++){
            sum_f0x_tmb[p_idx][ds_idx] = 0;
            sum_f0_tmb[p_idx][ds_idx] = 0;
            sum_f0a_tmb[p_idx][ds_idx] = 0;
            sum_f0d_tmb[p_idx][ds_idx] = 0;
            //combined_f0_tmb[p_idx][ds_idx] = 0;
            //combined_f0x_tmb[p_idx][ds_idx] = 0;
        }
    }
    
    //    

	for (i=0; i<8; i++) sum_f[i] = 0;
	sum_vref_top = 0;
	sum_vref_mid = 0;
	sum_vref_bot = 0;
	train.f0a_max = 0;
	//sum_f0d_data = 0; sum_f0d_slicer = 0;
	sum_eye_check_pass = 0;

    //reg_MCU_DEBUG6_LANE_7_0 = 0;

    //is_accu_phase_adapt = 0;

	//DBG_Printf("\r\n++(dfe_adaptation) ---\n");
	/* now always one time run!!*/
	if (ctrl_cdr_phase_on) 	{
		if(ctrl_rx_train_mode)
			ctrl_max_dfe_adapt_shift = do_train ? tag_CDR_MAX_DFE_ADAPT1 : tag_CDR_MAX_DFE_ADAPT0;
		else
			ctrl_max_dfe_adapt_shift = 0;
	}
	else if (ctrl_tx_train_on) {
		ctrl_max_dfe_adapt_shift = tag_TX_MAX_DFE_ADAPT;
	}
	else {
		if(ctrl_rx_train_mode)
			ctrl_max_dfe_adapt_shift = do_train ? tag_RX_MAX_DFE_ADAPT1 : tag_RX_MAX_DFE_ADAPT0;
		else
			ctrl_max_dfe_adapt_shift = tag_RX_MAX_DFE_ADAPT0;
	}
	half_shift = ctrl_max_dfe_adapt_shift==0? 0: 0x01 << (ctrl_max_dfe_adapt_shift-1);

	dfe_max_cnt = 0x01 << ctrl_max_dfe_adapt_shift;
    for (dfe_cnt=0;dfe_cnt<dfe_max_cnt;dfe_cnt++)
	{
		#ifndef BITMATCH
		//cds = cds_table[CDS_EN_DEFAULT];
		cdr_state = TRAIN_ON;
		reg_PIN_GPO_LANE_7_0 = 0;
if(ctle_adaptation_running == 1){
		//align90ee_ref_adapt(0);
		cds_save(0x00);//Savf0a);
}else{
		/* BEGIN: CDS Call */
		cdr_dfe_scheme((ctrl_cdr_phase_on ?
			cds_table[CDS_EN_PHASETRAIN] : cds_table[cds_call])& (reg_DFE_PAM2_MODE_LANE ? 0xFFFFBF : 0xFFFFFF));

		//cdr_dfe_scheme(ctrl_cdr_phase_on ?
		//	cds_table[CDS_EN_PHASETRAIN] : cds_table[cds_call]);

		/* END: CDS Call */
}
		reg_PIN_GPO_LANE_7_0 = 1;
		#else
		BITMATCH_SYNC_EN = 1; BITMATCH_SYNC_EN = 0;
		#endif
#if _DBG_F0X
//if(cds_call == CDS_EN_PHASETRAIN2 || cds_call == CDS_EN_FINAL)
if((lnx_CLI_CMD_LANE_7_0 == 0xF8 || lnx_CLI_CMD_LANE_7_0 == 0xE6) && lnx_CLI_START_LANE == 1)
{
		// Add more calls for f1,fn3,4,5; f0x_adapt_en
		if(rate_mode==QR){
			reg_DFE_F0X_SEL_LANE_4_0 = DFE_FX_SEL_FP1;	
			cdr_dfe_scheme(0x8000);
			sum_f0xp1 += combine_f0(cds112.s.f0x);	
		}
		reg_DFE_F0X_SEL_LANE_4_0 = DFE_FX_SEL_FN3;
		cdr_dfe_scheme(0x8000);
		sum_f0xn3 += combine_f0(cds112.s.f0x);

		reg_DFE_F0X_SEL_LANE_4_0 = DFE_FX_SEL_FN4;		
		cdr_dfe_scheme(0x8000);
		sum_f0xn4 += combine_f0(cds112.s.f0x);

		reg_DFE_F0X_SEL_LANE_4_0 = DFE_FX_SEL_FN5;		
		cdr_dfe_scheme(0x8000);
		sum_f0xn5 += combine_f0(cds112.s.f0x);
		// reset to f0a
		if (ctrl_cdr_phase_on) cdr_dfe_scheme(cds_table[CDS_EN_PHASETRAIN]);
		else cdr_dfe_scheme(cds_table[cds_call]);
}
#endif
		cds_calculation();
	#if _DEBUG
	//Printf("\r\n ++ %d, %d, %d ", ctrl_max_dfe_adapt_shift, dfe_max_cnt, half_shift );
    //Printf(" train.fx: %d %d %d %d %d %d %d %d %d, eo:%d, eye_ck_p:%d", train.f0a, train.f0, train.f1, train.f2, train.f3, train.f4, train.f5, train.f6, train.f7, train.f0d, train.eye_check_pass);
    //Printf(" (r,c):(%d,%d), dfe_res:%d, ",train_r,train_c,ctrl_step_res_dfe);
    //Printf(" saturated:%d, sumFtap:%d, boost:%d lvl:%d, phase:%d(%d)", train_saturated,train.sumFtap,train.boost, train.level, phase_offset_data, cdr_align90);
	#endif

     }

	 DFE_Final_Calculation();

    level_ffe();

#if (_DEBUG)// & _DBG_RXTRAIN )
	// DBG_PS("\r\n-- end of dfe");
	//print_train();
	//debug_print();
    if (bit_print_debug == 1)
        debug_training();       
#endif

	lnx_DFE_CAL_DONE_LANE = 1;

	//for debug
	lnx_TRAIN_F0A_MAX_LANE_7_0 = train.f0a_max;
	lnx_TRAIN_F0A_LANE_7_0 = train.f0a;
	lnx_TRAIN_F0D_LANE_7_0 = train.eo;
	lnx_TRAIN_F0B_LANE_7_0 = train.f0;
	lnx_MCU_COMMAND0_LANE_31_0_b2 = train.f0_data;
	lnx_TRAIN_F1_LANE_7_0 = train.f1;
	lnx_TRAIN_F2_LANE_7_0 = train.f2;
	lnx_TRAIN_F3_LANE_7_0 = train.f3;
	lnx_TRAIN_F4_LANE_7_0 = train.f4;
	lnx_TRAIN_F5_LANE_7_0 = train.f5;
	lnx_TRAIN_F6_LANE_7_0 = train.f6;
	lnx_TRAIN_F7_LANE_7_0 = train.f7;
	lnx_TRAIN_F0X_LANE_7_0 = train.f0x;
	lnx_TRAIN_FN1_LANE_7_0 = train.fn1;
	lnx_TRAIN_FN2_LANE_7_0 = train.fn2;
	lnx_EYE_CHECK_PASS_LANE = train.eye_check_pass;
	lnx_TRAIN_BOOST_LANE_15_0 = train.boost;

        // pause after each iteration, and wait for user 
        // default value is 0 (no pause), set this register to 1 to pause
        // once it is set to one, it will go step by step by setting it to 0 again and again till the end
        if (reg_MCU_DEBUGF_LANE_7_0 ){ 
            while(reg_MCU_DEBUGF_LANE_7_0 ); // rapotor set it to 0 to continue for one iteration
            reg_MCU_DEBUGF_LANE_7_0=1;
        }
}

//dfe res table
__code int16_t dfe_res_f0_sumFtap[] = { 35,70,100,112};
__code int16_t dfe_res_f2_sumFtap[] = { 50,100,143,161};
__code int16_t dfe_res_f3to4_sumFtap[] = {61,103,141,156};
__code int16_t dfe_res_f5to8_sumFtap[] = {24, 43};
__code int16_t dfe_res_f5to8_QR_sumFtap[] = {5, 34};
__code int16_t dfe_res_f9to14_sumFtap[] = {24, 34};
__code int16_t dfe_res_vref_sumFtap[] = {64,109,128,173};

/*****************************************
 *     DFE_Final_Calculation:
*****************************************/
#ifdef DFE_CAL_ACCU //true
void DFE_Final_Calculation( void ) BANKING_CTRL
{
	int8_t	f0_minus_abs_fn1;
	int16_t sum_my_abs_fx;
    uint8_t p_idx, ds_idx; // Added by JL

	//DBG_Printf("\r\n++(DFE_Final_Calculation) ---\n");
	//DBG_Printf("\r\n sum       %d %d %d %d %d %d, %d %d", sum_f0a, sum_f0, sum_f1, sum_f2, sum_f3, sum_f4, sum_f5, sum_f0d, sum_eye_check_pass);

	switch (rate_mode)
	{
#ifdef SUPPORT_QR //0
	case QR:
		if (adapt_data_en != adapt_slicer_en)
		{
			f0_1_factor = F0_DIVIDER_QR;
			f0d_factor = F0_DIVIDER_QR;
			f2_factor = F2TO7_DIVIDER_QR;
			f3_factor = F2TO7_DIVIDER_QR;
			f4_factor = F2TO7_DIVIDER_QR;

		}
		else
		{
			f0_1_factor = F0_DIVIDER_QR * 2;
			f0d_factor = F0_DIVIDER_QR * 2;
			f2_factor = F2TO7_DIVIDER_QR * 2;
			f3_factor = F2TO7_DIVIDER_QR * 2;
			f4_factor = F2TO7_DIVIDER_QR * 2;
		}
		f5_factor = F2TO7_DIVIDER_QR;
		f6_factor = F2TO7_DIVIDER_QR;
		f7_factor = F2TO7_DIVIDER_QR;
		vref_factor = F0_DIVIDER_QR;

		//f0_res = dfe_res_f0_sumFtap[dfe_res_f0];
		f1_res = 0;
		f2_res = dfe_res_f2_sumFtap[reg_DFE_RES_F2_LANE_1_0];
		f3_res = dfe_res_f3to4_sumFtap[reg_DFE_RES_F3TO4_LANE_1_0];
		f4_res = dfe_res_f3to4_sumFtap[reg_DFE_RES_F3TO4_LANE_1_0];
		f5_res = dfe_res_f5to8_QR_sumFtap[reg_DFE_RES_F5TO8_LANE];
		f6_res = dfe_res_f5to8_QR_sumFtap[reg_DFE_RES_F5TO8_LANE];
		f7_res = dfe_res_f5to8_QR_sumFtap[reg_DFE_RES_F5TO8_LANE];

		break;
#endif
	case HR:
		if (adapt_data_en != adapt_slicer_en)
		{
			f0_1_factor = F0_DIVIDER_HR;
			f0d_factor = F0_DIVIDER_HR;
			f2_factor = F1TO7_DIVIDER_HR;
		}
		else
		{
			f0_1_factor = F0_DIVIDER_HR * 2;
			f0d_factor = F0_DIVIDER_HR * 2;
			f2_factor = F1TO7_DIVIDER_HR * 2;
		}
		f3_factor = F1TO7_DIVIDER_HR;
		f4_factor = F1TO7_DIVIDER_HR;
		f5_factor = F1TO7_DIVIDER_HR;
		f6_factor = F1TO7_DIVIDER_HR;
		f7_factor = F1TO7_DIVIDER_HR;
		vref_factor = F0_DIVIDER_HR;

		f1_res = dfe_res_f2_sumFtap[reg_DFE_RES_F2_LANE_1_0];
		f2_res = dfe_res_f3to4_sumFtap[reg_DFE_RES_F3TO4_LANE_1_0];
		f3_res = dfe_res_f5to8_sumFtap[reg_DFE_RES_F5TO8_LANE];
		f4_res = dfe_res_f5to8_sumFtap[reg_DFE_RES_F5TO8_LANE];
		f5_res = dfe_res_f9to14_sumFtap[reg_DFE_RES_F9TO14_LANE];
		f6_res = dfe_res_f9to14_sumFtap[reg_DFE_RES_F9TO14_LANE];
		f7_res = dfe_res_f9to14_sumFtap[reg_DFE_RES_F9TO14_LANE];

		break;
#ifdef SUPPORT_FR
	case FR:
		if (adapt_data_en != adapt_slicer_en)
		{
			f0_1_factor = F0_DIVIDER_FR;
			f0d_factor = F0_DIVIDER_FR;
		}
		else
		{
			f0_1_factor = F0_DIVIDER_FR * 2;
			f0d_factor = F0_DIVIDER_FR * 2;
		}
		f2_factor = F1TO7_DIVIDER_FR;
		f3_factor = F1TO7_DIVIDER_FR;
		f4_factor = F1TO7_DIVIDER_FR;
		f5_factor = F1TO7_DIVIDER_FR;
		f6_factor = F1TO7_DIVIDER_FR;
		f7_factor = F1TO7_DIVIDER_FR;
		vref_factor = F0_DIVIDER_FR;

		f1_res = dfe_res_f3to4_sumFtap[reg_DFE_RES_F3TO4_LANE_1_0];
		f2_res = dfe_res_f5to8_sumFtap[reg_DFE_RES_F5TO8_LANE];
		f3_res = dfe_res_f9to14_sumFtap[reg_DFE_RES_F9TO14_LANE];
		/*f4_res = dfe_res_f5to8_sumFtap[reg_DFE_RES_F5TO8_LANE];
		f5_res = dfe_res_f9to14_sumFtap[reg_DFE_RES_F9TO14_LANE];
		f6_res = dfe_res_f9to14_sumFtap[reg_DFE_RES_F9TO14_LANE];
		f7_res = dfe_res_f9to14_sumFtap[reg_DFE_RES_F9TO14_LANE];*/
		break;
#endif
	}

	f0_1_factor = f0_1_factor * 3;
	f0d_factor  = f0d_factor  * 3;
	f2_factor   = f2_factor   * 3;
	f3_factor   = f3_factor   * 3;
	f4_factor   = f4_factor   * 3;
	f5_factor   = f5_factor   * 3;
	f6_factor   = f6_factor   * 3;
	f7_factor   = f7_factor   * 3;
	f0_res = dfe_res_f0_sumFtap[dfe_res_f0];
	vref_res = dfe_res_vref_sumFtap[dfe_res_vref];


	train.f0 = (uint8_t)((((sum_f0 + (f0_1_factor>>1))/f0_1_factor)  + half_shift) >> ctrl_max_dfe_adapt_shift);
	train.f0a = (uint8_t)((((sum_f0a + (f0_1_factor>>1))/f0_1_factor) + half_shift) >> ctrl_max_dfe_adapt_shift);
	train.f0x = (uint8_t)((((sum_f0x + (f0_1_factor>>1))/f0_1_factor)  + half_shift) >> ctrl_max_dfe_adapt_shift);
	train.f0a_max = max_ram(train.f0a_max, max_f0(cds112.s.f0a));
#if _DBG_F0X
	// f1_qr calculation not completed
	train.f1_qr = (uint8_t)((((sum_f0xp1 + (f0_1_factor>>1))/f0_1_factor)  + half_shift) >> ctrl_max_dfe_adapt_shift);
	train.fn3 = (uint8_t)((((sum_f0xn3 + (f0_1_factor>>1))/f0_1_factor)  + half_shift) >> ctrl_max_dfe_adapt_shift);
	train.fn4 = (uint8_t)((((sum_f0xn4 + (f0_1_factor>>1))/f0_1_factor)  + half_shift) >> ctrl_max_dfe_adapt_shift);
	train.fn5 = (uint8_t)((((sum_f0xn5 + (f0_1_factor>>1))/f0_1_factor)  + half_shift) >> ctrl_max_dfe_adapt_shift);
#endif

    // added by JL
    for (p_idx = 0; p_idx < NUM_PATH; p_idx++){
        for (ds_idx = 0; ds_idx < NUM_DS; ds_idx++){
            train.f0_tmb[p_idx][ds_idx] = (uint8_t)((((sum_f0_tmb[p_idx][ds_idx] + (NUM_TMB>>1))/NUM_TMB)  + half_shift) >> ctrl_max_dfe_adapt_shift);
            train.f0x_tmb[p_idx][ds_idx] = (uint8_t)((((sum_f0x_tmb[p_idx][ds_idx] + (NUM_TMB>>1))/NUM_TMB)  + half_shift) >> ctrl_max_dfe_adapt_shift);
            train.f0a_tmb[p_idx][ds_idx] = (uint8_t)((((sum_f0a_tmb[p_idx][ds_idx] + (NUM_TMB>>1))/NUM_TMB)  + half_shift) >> ctrl_max_dfe_adapt_shift);
            train.f0d_tmb[p_idx][ds_idx] = (uint8_t)((((sum_f0d_tmb[p_idx][ds_idx] + (NUM_TMB>>1))/NUM_TMB)  + half_shift) >> ctrl_max_dfe_adapt_shift);
        }
    }
   // 

#if 0
	if ((adapt_data_en==1 && adapt_slicer_en==0) /*|| ( ((adapt_data_en==1 && adapt_slicer_en==1) || (adapt_data_en==0 && adapt_slicer_en==0) ) && tag_TRAIN_USE_D==1 && tag_TRAIN_USE_S==0) */)
	{
		//train.f0a_max = (f0a_max_data + half_shift) >> ctrl_max_dfe_adapt_shift;
		train.f0a_max = (uint8_t)(f0a_max_data);
	}
	else if ((adapt_data_en==0 && adapt_slicer_en==1) /*|| (((adapt_data_en==1 && adapt_slicer_en==1) || (adapt_data_en=0 && adapt_slicer_en==0) ) && tag_TRAIN_USE_D==0 && tag_TRAIN_USE_S==1)*/ )
	{
		//train.f0a_max = (f0a_max_slicer + half_shift) >> ctrl_max_dfe_adapt_shift;
		train.f0a_max = (uint8_t)(f0a_max_slicer);
	}
	else
	{
		//train.f0a_max = (max_ram(f0a_max_data, f0a_max_slicer), + half_shift) >> ctrl_max_dfe_adapt_shift;
		train.f0a_max = (uint8_t)(max_ram(f0a_max_data, f0a_max_slicer));
	}
#endif
	train.f0_data = (uint8_t)((((sum_f0k + (f0d_factor>>1))/f0d_factor) + half_shift) >> ctrl_max_dfe_adapt_shift);
	//train.eo = (uint8_t)((((combine_f0(cds112.s.f0d) + (f0d_factor>>1))/f0d_factor) + half_shift) >> ctrl_max_dfe_adapt_shift);
	train.eo = (uint8_t)((((sum_f0d + (f0d_factor>>1))/f0d_factor) + half_shift) >> ctrl_max_dfe_adapt_shift);

#if  1

	if( sum_f[1] >= 0 ) sum_f[1] = (((sum_f[1] + (f0_1_factor>>1))/f0_1_factor)  + half_shift);
	else sum_f[1] = (((sum_f[1] - (f0_1_factor>>1))/f0_1_factor) - half_shift);
	train.f1  = (uint8_t)(sum_f[1] >> ctrl_max_dfe_adapt_shift);

	if( sum_f[2] >= 0 )sum_f[2]  = (((sum_f[2] + (f2_factor>>1))/f2_factor)+ half_shift);
	else sum_f[2]  = (((sum_f[2] - (f2_factor>>1))/f2_factor) - half_shift);
	train.f2  = (uint8_t)(sum_f[2] >> ctrl_max_dfe_adapt_shift);

	if( sum_f[3] >= 0 ) sum_f[3] = (((sum_f[3] + (f3_factor>>1))/f3_factor) + half_shift);
	else sum_f[3] = (((sum_f[3] - (f2_factor>>1))/f3_factor) - half_shift);
	train.f3  = (uint8_t)(sum_f[3] >> ctrl_max_dfe_adapt_shift);

	if( sum_f[4] >= 0 ) sum_f[4] = (((sum_f[4] + (f4_factor>>1))/f4_factor) + half_shift);
	else sum_f[4] = (((sum_f[4] - (f4_factor>>1))/f4_factor) - half_shift);
	train.f4  = (uint8_t)(sum_f[4] >> ctrl_max_dfe_adapt_shift);

	if( sum_f[5] >= 0 ) sum_f[5]  = (((sum_f[5]  + (f5_factor>>1))/f5_factor)+ half_shift);
	else sum_f[5]  = (((sum_f[5] - (f5_factor>>1))/f5_factor) - half_shift);
	train.f5  = (uint8_t)(sum_f[5] >> ctrl_max_dfe_adapt_shift);
	if( sum_f[6] >= 0 ) sum_f[6] = (((sum_f[6] + (f6_factor>>1))/f6_factor) + half_shift);
	else sum_f[6] = (uint8_t)((((sum_f[6] - (f6_factor>>1))/f6_factor) - half_shift));
	train.f6  = (uint8_t)(sum_f[6] >> ctrl_max_dfe_adapt_shift);
	if( sum_f[7] >= 0 ) sum_f[7]  = (((sum_f[7] + (f7_factor>>1))/f7_factor) + half_shift);
	else sum_f[7]  = (((sum_f[7] - (f7_factor>>1))/f7_factor) - half_shift);
	train.f7  = (uint8_t)(sum_f[7] >> ctrl_max_dfe_adapt_shift);

	if( sum_vref_top >= 0 ) sum_vref_top  = (((sum_vref_top + (vref_factor >>1))/vref_factor) + half_shift);
	else sum_vref_top  = (((sum_vref_top - (vref_factor >>1))/vref_factor) - half_shift);
	sum_vref_top  = sum_vref_top >> ctrl_max_dfe_adapt_shift;

	if( sum_vref_mid >= 0 ) sum_vref_mid  = (((sum_vref_mid + (vref_factor >>1))/vref_factor) + half_shift);
	else sum_vref_mid  = (((sum_vref_mid - (vref_factor >>1))/vref_factor) - half_shift);
	sum_vref_mid  = sum_vref_mid >> ctrl_max_dfe_adapt_shift;

	if( sum_vref_bot >= 0 ) sum_vref_bot  = (((sum_vref_bot + (vref_factor >>1))/vref_factor) + half_shift);
	else sum_vref_bot  = (((sum_vref_bot - (vref_factor >>1))/vref_factor) - half_shift);
	sum_vref_bot  = sum_vref_bot >> ctrl_max_dfe_adapt_shift;

	//2. Fn1
    train.fn1 = train.f0 - train.f0a;
	train.fn1 = clamp(train.fn1, tag_DFE_FN1_MAX, tag_DFE_FN1_MIN );

	/* QR mode F1 zero forcing:
	 * - check if in QR mode and measuring F1 via F0X
	 * - replace train.f1 with F0X measured F1 (no true F1)  */
	if (rate_mode==QR && reg_DFE_F0X_SEL_LANE_4_0 == DFE_FX_SEL_FP1) {
		train.f1 = train.f0 - train.f0x;
		train.fn2 = 0;
	} else { // normal behavior (fn2 measurement)
    train.fn2 = train.f0 - train.f0x;
		train.fn2 = clamp(train.fn2, tag_DFE_FN2_MAX, tag_DFE_FN2_MIN );
	}

    //3. Added by JL
    calculate_train_fn1_fx_tmb();
    //        

#if _DBG_F0X
	// 112G F1
    train.f1_qr = train.f0 - train.f1_qr;
	train.f1_qr = clamp(train.f1_qr, tag_DFE_F1_QR_MAX, tag_DFE_F1_QR_MIN );
	// Fn3
    train.fn3 = train.f0 - train.fn3;
	train.fn3 = clamp(train.fn3, tag_DFE_FN3_MAX, tag_DFE_FN3_MIN );
	// Fn4
    train.fn4 = train.f0 - train.fn4;
	train.fn4 = clamp(train.fn4, tag_DFE_FN4_MAX, tag_DFE_FN4_MIN );
	// Fn5
    train.fn5 = train.f0 - train.fn5;
	train.fn5 = clamp(train.fn5, tag_DFE_FN5_MAX, tag_DFE_FN5_MIN );
#endif
	//3.eo
	//train.eo  = (sum_f0d + half_shift) >> ctrl_max_dfe_adapt_shift;

    //4.eye_check_pass
	//train.eye_check_pass = (sum_eye_check_pass>=0); /*((sum_eye_check_pass>=0)||tag_EYE_CHECK_DISABLE) && (!tag_EO_BASED||(train.eo>=tag_EYE_CHECK_EO_THRE) );*/
	train.eye_check_pass = ((sum_eye_check_pass>=0)||tag_EYE_CHECK_DISABLE) && (!tag_EO_BASED||(train.eo>tag_EYE_CHECK_EO_THRE) );
	//DBG_Printf("\r\n avg train: %d %d %d %d %d %d, %d , %d %d", train.f0a, train.f0, train.f1, train.f2, train.f3, train.f4, train.f5, train.eo, train.eye_check_pass);
	//DBG_Printf("\r\n %d", sum_eye_check_pass);

    // 5.saturate
	//sum_my_abs_fx = abs(train.f1)+abs(train.f2)+abs(train.f3)+abs(train.f4)+abs(train.f5);
	//sum_my_abs_fx = max_ram(abs16(sum_vref_top),abs16(sum_vref_bot)) * vref_res;
	// John 20200116
	sum_my_abs_fx = (abs16(sum_vref_top)+abs16(sum_vref_bot))/2 * vref_res;
	//sum_my_abs_fx += (int16_t) train.f0a_max * f0_res << reg_DFE_F0_RES_DOUBLE_LANE;
	sum_my_abs_fx += (int16_t) train.f0a * f0_res << reg_DFE_F0_RES_DOUBLE_LANE;
	sum_my_abs_fx += rate_mode==QR ? ((int16_t) abs16(train.f2) * f2_res) : 0;
	//	+ (int16_t) abs16(train.f1) * f1_res
	train.outer_eye = sum_my_abs_fx >> 5;
	train.oe_saturate = !tag_DFE_SATURATE_DISABLE && sum_my_abs_fx >= tag_DFE_FX_SUM_SAT_THRES; 
	train.f0a_saturate = !tag_DFE_SATURATE_DISABLE && (cds112.s.f0a_saturate || cds112.s.vref_saturate) ? 1:0;
	//train.dfe_saturate = (!tag_DFE_SATURATE_DISABLE) && ((abs(train.f1) >= tag_DFE_F1_SAT_THRES) || (abs(train.f2) >= tag_DFE_F2_SAT_THRES) ) ? 1:0;
	train.dfe_saturate = !tag_DFE_SATURATE_DISABLE && (abs(train.f1) > f1_sat_thresh || abs(train.f2) > f2_sat_thresh) ? 1:0;
	train.saturated = (train.f0a_saturate || train.dfe_saturate) ? 1:0;
	//train.saturated = (train.f0a_saturate) ? 1:0;

	//6.

	train.excellent_eo = ((train.eo > tag_THRE_EXCELLENT) && train.eye_check_pass);
	train.good_eo = ((train.eo >= tag_THRE_GOOD) && train.eye_check_pass);
	//train.poor_eo = ((train.eo < tag_THRE_POOR) && train.eye_check_pass);

	//7.f0t
    //f0_minus_abs_fn1 = clamp(f0_minus_abs_fn1, tag_DFE_F0_MAX, tag_DFE_F0_MIN);
		if(train.f0 >= train.f0a)
			f0_minus_abs_fn1 = train.f0a;
		else
			f0_minus_abs_fn1 = (train.f0<<1) - train.f0a;
    if(train.eye_check_pass)	{
        train.f0t = tag_TX_F0T_EO_BASED ? train.eo : f0_minus_abs_fn1;
    }
	else
		train.f0t = 0;

    //8.
#if 0
	train.sumFtap = tag_SUMFTAP_EN_0 *  ((int16_t)((tag_SUMFTAP_SIGN_0<<1) -1) *  (int16_t)train.f0a * dfe_res_f0_sumFtap[dfe_res_f0]);
	//train.sumFtap += tag_SUMFTAP_EN_1 * ((int16_t)((tag_SUMFTAP_SIGN_1<<1) -1) * (int16_t)train.f1 * dfe_res_f1_sumFtap[dfe_res_f1]);
	train.sumFtap += tag_SUMFTAP_EN_2 * ((int16_t)((tag_SUMFTAP_SIGN_2<<1) -1) * (int16_t)train.f2 * dfe_res_f2_sumFtap[dfe_res_f2]) ;
	train.sumFtap += tag_SUMFTAP_EN_3 * ((int16_t)((tag_SUMFTAP_SIGN_3<<1) -1) * (int16_t)train.f3 * dfe_res_f3_sumFtap[dfe_res_f3]) ;
	train.sumFtap += tag_SUMFTAP_EN_4 * ((int16_t)((tag_SUMFTAP_SIGN_4<<1) -1) * (int16_t)train.f4 * dfe_res_f4_sumFtap[dfe_res_f4]) ;
	train.sumFtap += tag_SUMFTAP_EN_5 * ((int16_t)((tag_SUMFTAP_SIGN_5<<1) -1) * (int16_t)train.f5 * dfe_res_f567_sumFtap[dfe_res_f5]) ;
	train.sumFtap += tag_SUMFTAP_EN_6 * ((int16_t)((tag_SUMFTAP_SIGN_6<<1) -1) * (int16_t)train.f6 * dfe_res_f567_sumFtap[dfe_res_f6]) ;
	train.sumFtap += tag_SUMFTAP_EN_7 * ((int16_t)((tag_SUMFTAP_SIGN_7<<1) -1) * (int16_t)train.f7 * dfe_res_f567_sumFtap[dfe_res_f7]);
	train.sumFtap = clamp16(train.sumFtap, 8191,-8192);
#else
	train.sumFtap = tag_SUMFTAP_EN_0 *  ((int16_t)((tag_SUMFTAP_SIGN_0<<1) -1) *  (int16_t)train.f0a * f0_res);
	train.sumFtap += tag_SUMFTAP_EN_1 * ((int16_t)((tag_SUMFTAP_SIGN_1<<1) -1) * (int16_t)train.f1 * f1_res);
	train.sumFtap += tag_SUMFTAP_EN_2 * ((int16_t)((tag_SUMFTAP_SIGN_2<<1) -1) * (int16_t)train.f2 * f2_res);
	train.sumFtap += tag_SUMFTAP_EN_3 * ((int16_t)((tag_SUMFTAP_SIGN_3<<1) -1) * (int16_t)train.f3 * f3_res);
	train.sumFtap += tag_SUMFTAP_EN_4 * ((int16_t)((tag_SUMFTAP_SIGN_4<<1) -1) * (int16_t)train.f4 * f4_res);
	train.sumFtap += tag_SUMFTAP_EN_5 * ((int16_t)((tag_SUMFTAP_SIGN_5<<1) -1) * (int16_t)train.f5 * f5_res);
	train.sumFtap += tag_SUMFTAP_EN_6 * ((int16_t)((tag_SUMFTAP_SIGN_6<<1) -1) * (int16_t)train.f6 * f6_res);
	train.sumFtap += tag_SUMFTAP_EN_7 * ((int16_t)((tag_SUMFTAP_SIGN_7<<1) -1) * (int16_t)train.f7 * f7_res);
#endif
	MCU_COMMAND0_LANE.VAL = train.sumFtap;
   //9                                          //1                                 -2
#if 0
	train.boost = (uint16_t)abs16(train.sumFtap - ((((int8_t)tag_SUMF_BOOST_TARGET_K) * (uint16_t)train.f0a * dfe_res_f0_sumFtap[dfe_res_f0] )>>4) - sumf_boost_target_c);
	train.boost = clamp16(train.boost, tag_RX_BOOST_MAX, tag_RX_BOOST_MIN);
#else
   /*train.boost = (uint16_t) abs16(
			 train.sumFtap -
			 (((int8_t)tag_SUMF_BOOST_TARGET_K) * ((uint16_t)train.f0a * dfe_res_f0_sumFtap[dfe_res_f0]*3 )>>tag_SUMF_BOOST_TARGET_K_SCALE) 
			 - sumf_boost_target_c);*/
	if (rate_mode==QR) {
		train.boost = abs(train.f1 - tag_SUMF_BOOST_TARGET_C);
	}
	else {
		train.boost = 0;
		train.boost += train.sumFtap >> tag_SUMF_BOOST_TARGET_K_SCALE;
		train.boost += ((((uint16_t)(train.f0a << reg_DFE_F0_RES_DOUBLE_LANE) * f0_res * (pam4_en ? 3:1))
					>> tag_SUMF_BOOST_TARGET_K_SCALE) * tag_SUMF_BOOST_TARGET_K) >> tag_SUMF_BOOST_TARGET_K_SCALE;
		train.boost -= tag_SUMF_BOOST_TARGET_C;
		train.boost = abs16(train.boost);
		train.boost = clamp16(train.boost, tag_RX_BOOST_MAX, tag_RX_BOOST_MIN);
	}
#endif
#endif
}
#else
void DFE_Final_Calculation( void ) BANKING_CTRL //not used
{
	int8_t	f0_minus_abs_fn1;
	int16_t sum_my_abs_fx;
	uint8_t f0_round_up;

	//DBG_Printf("\r\n++(DFE_Final_Calculation) ---\n");
	//DBG_Printf("\r\n sum       %d %d %d %d %d %d, %d %d", sum_f0a, sum_f0, sum_f1, sum_f2, sum_f3, sum_f4, sum_f5, sum_f0d, sum_eye_check_pass);

	switch (rate_mode)
	{
	case QR:
		if (adapt_data_en != adapt_slicer_en)
		{
			f0_1_factor = F0_DIVIDER_QR;
			f0d_factor = F0_DIVIDER_QR;
			f2_factor = F2TO7_DIVIDER_QR;
			f3_factor = F2TO7_DIVIDER_QR;
			f4_factor = F2TO7_DIVIDER_QR;

		}
		else
		{
			f0_1_factor = F0_DIVIDER_QR * 2;
			f0d_factor = F0_DIVIDER_QR * 2;
			f2_factor = F2TO7_DIVIDER_QR * 2;
			f3_factor = F2TO7_DIVIDER_QR * 2;
			f4_factor = F2TO7_DIVIDER_QR * 2;
		}
		f5_factor = F2TO7_DIVIDER_QR;
		f6_factor = F2TO7_DIVIDER_QR;
		f7_factor = F2TO7_DIVIDER_QR;
		vref_factor = F0_DIVIDER_QR;

		//f0_res = dfe_res_f0_sumFtap[dfe_res_f0];
		f1_res = 0;
		f2_res = dfe_res_f2_sumFtap[reg_DFE_RES_F2_LANE_1_0];
		f3_res = dfe_res_f3to4_sumFtap[reg_DFE_RES_F3TO4_LANE_1_0];
		f4_res = dfe_res_f3to4_sumFtap[reg_DFE_RES_F3TO4_LANE_1_0];
		f5_res = dfe_res_f5to8_QR_sumFtap[reg_DFE_RES_F5TO8_LANE];
		f6_res = dfe_res_f5to8_QR_sumFtap[reg_DFE_RES_F5TO8_LANE];
		f7_res = dfe_res_f5to8_QR_sumFtap[reg_DFE_RES_F5TO8_LANE];

		break;
	case HR:
		if (adapt_data_en != adapt_slicer_en)
		{
			f0_1_factor = F0_DIVIDER_HR;
			f0d_factor = F0_DIVIDER_QR * 3;
			f2_factor = F1TO7_DIVIDER_HR;
		}
		else
		{
			f0_1_factor = F0_DIVIDER_HR * 2;
			f0d_factor = F0_DIVIDER_QR * 6;
			f2_factor = F1TO7_DIVIDER_HR * 2;
		}
		f3_factor = F1TO7_DIVIDER_HR;
		f4_factor = F1TO7_DIVIDER_HR;
		f5_factor = F1TO7_DIVIDER_HR;
		f6_factor = F1TO7_DIVIDER_HR;
		f7_factor = F1TO7_DIVIDER_HR;
		vref_factor = F0_DIVIDER_HR;

		f1_res = dfe_res_f2_sumFtap[reg_DFE_RES_F2_LANE_1_0];
		f2_res = dfe_res_f3to4_sumFtap[reg_DFE_RES_F3TO4_LANE_1_0];
		f3_res = dfe_res_f5to8_sumFtap[reg_DFE_RES_F5TO8_LANE];
		f4_res = dfe_res_f5to8_sumFtap[reg_DFE_RES_F5TO8_LANE];
		f5_res = dfe_res_f9to14_sumFtap[reg_DFE_RES_F9TO14_LANE];
		f6_res = dfe_res_f9to14_sumFtap[reg_DFE_RES_F9TO14_LANE];
		f7_res = dfe_res_f9to14_sumFtap[reg_DFE_RES_F9TO14_LANE];

		break;
	case FR:
		if (adapt_data_en != adapt_slicer_en)
		{
			f0_1_factor = F0_DIVIDER_FR;
			f0d_factor = F0_DIVIDER_QR * 3;
		}
		else
		{
			f0_1_factor = F0_DIVIDER_FR * 2;
			f0d_factor = F0_DIVIDER_QR * 6;
		}
		f2_factor = F1TO7_DIVIDER_FR;
		f3_factor = F1TO7_DIVIDER_FR;
		f4_factor = F1TO7_DIVIDER_FR;
		f5_factor = F1TO7_DIVIDER_FR;
		f6_factor = F1TO7_DIVIDER_FR;
		f7_factor = F1TO7_DIVIDER_FR;
		vref_factor = F0_DIVIDER_FR;

		f1_res = dfe_res_f3to4_sumFtap[reg_DFE_RES_F3TO4_LANE_1_0];
		f2_res = dfe_res_f5to8_sumFtap[reg_DFE_RES_F5TO8_LANE];
		f3_res = dfe_res_f9to14_sumFtap[reg_DFE_RES_F9TO14_LANE];
		/*f4_res = dfe_res_f5to8_sumFtap[reg_DFE_RES_F5TO8_LANE];
		f5_res = dfe_res_f9to14_sumFtap[reg_DFE_RES_F9TO14_LANE];
		f6_res = dfe_res_f9to14_sumFtap[reg_DFE_RES_F9TO14_LANE];
		f7_res = dfe_res_f9to14_sumFtap[reg_DFE_RES_F9TO14_LANE];*/
		break;

	}
	f0_res = dfe_res_f0_sumFtap[dfe_res_f0];

	train.f0 = ((sum_f0/f0_1_factor)  + half_shift) >> ctrl_max_dfe_adapt_shift;
	train.f0a = ((sum_f0a/f0_1_factor) + half_shift) >> ctrl_max_dfe_adapt_shift;
	train.f0a_max = max_ram(train.f0a_max, max_f0(cds112.s.f0a));
#if 0
	if ((adapt_data_en==1 && adapt_slicer_en==0) /*|| ( ((adapt_data_en==1 && adapt_slicer_en==1) || (adapt_data_en==0 && adapt_slicer_en==0) ) && tag_TRAIN_USE_D==1 && tag_TRAIN_USE_S==0) */)
	{
		//train.f0a_max = (sum_f0a_max_data + half_shift) >> ctrl_max_dfe_adapt_shift;
		train.f0a_max = (f0a_max_data + half_shift) >> ctrl_max_dfe_adapt_shift;
	}
	else if ((adapt_data_en==0 && adapt_slicer_en==1) /*|| (((adapt_data_en==1 && adapt_slicer_en==1) || (adapt_data_en=0 && adapt_slicer_en==0) ) && tag_TRAIN_USE_D==0 && tag_TRAIN_USE_S==1)*/ )
	{
		//train.f0a_max = (sum_f0a_max_slicer + half_shift) >> ctrl_max_dfe_adapt_shift;
		train.f0a_max = (f0a_max_slicer + half_shift) >> ctrl_max_dfe_adapt_shift;
	}
	else
	{
		//train.f0a_max = (max(sum_f0a_max_data, sum_f0a_max_slicer), + half_shift) >> ctrl_max_dfe_adapt_shift;
		train.f0a_max = (max_ram(f0a_max_data, f0a_max_slicer), + half_shift) >> ctrl_max_dfe_adapt_shift;
	}
#endif
	train.eo = ((sum_f0d/f0d_factor) + half_shift) >> ctrl_max_dfe_adapt_shift;

#if  1

		if( sum_f[1] > 0 ) sum_f[1] = ((sum_f[1]/f0_1_factor)  + half_shift);
		else sum_f[1] = ((sum_f[1]/f0_1_factor) - half_shift);
		train.f1  = sum_f[1] >> ctrl_max_dfe_adapt_shift;

		if( sum_f[2] > 0 )sum_f[2]  = ((sum_f[2]/f2_factor)+ half_shift);
		else sum_f[2]  = ((sum_f[2]/f2_factor) - half_shift);
		train.f2  = sum_f[2] >> ctrl_max_dfe_adapt_shift;

		if( sum_f[3] > 0 ) sum_f[3] = ((sum_f[3]/f3_factor) + half_shift);
		else sum_f[3] = ((sum_f[3]/f3_factor) - half_shift);
		train.f3  = sum_f[3] >> ctrl_max_dfe_adapt_shift;

		if( sum_f[4] > 0 ) sum_f[4] = ((sum_f[4]/f4_factor) + half_shift);
		else sum_f[4] = ((sum_f[4]/f4_factor) - half_shift);
		train.f4  = sum_f[4] >> ctrl_max_dfe_adapt_shift;

		if( sum_f[5] > 0 ) sum_f[5]  = ((sum_f[5]/f5_factor)+ half_shift);
		else sum_f[5]  = ((sum_f[5]/f5_factor) - half_shift);
		train.f5  = sum_f[5] >> ctrl_max_dfe_adapt_shift;
		if( sum_f[6] > 0 ) sum_f[6] = ((sum_f[6]/f6_factor) + half_shift);
		else sum_f[6] = ((sum_f[6]/f6_factor) - half_shift);
		train.f6  = sum_f[6] >> ctrl_max_dfe_adapt_shift;
		if( sum_f[7] > 0 ) sum_f[7]  = ((sum_f[7]/f7_factor) + half_shift);
		else sum_f[7]  = ((sum_f[7]/f7_factor) - half_shift);
		train.f7  = sum_f[7] >> ctrl_max_dfe_adapt_shift;

		if( sum_vref_top > 0 ) sum_vref_top  = ((sum_vref_top/vref_factor) + half_shift);
		else sum_vref_top  = ((sum_vref_top/vref_factor) - half_shift);
		sum_vref_top  = sum_vref_top >> ctrl_max_dfe_adapt_shift;

		if( sum_vref_mid > 0 ) sum_vref_mid  = ((sum_vref_mid/vref_factor) + half_shift);
		else sum_vref_mid  = ((sum_vref_mid/vref_factor) - half_shift);
		sum_vref_mid  = sum_vref_mid >> ctrl_max_dfe_adapt_shift;

		if( sum_vref_bot > 0 ) sum_vref_bot  = ((sum_vref_bot/vref_factor) + half_shift);
		else sum_vref_bot  = ((sum_vref_bot/vref_factor) - half_shift);
		sum_vref_bot  = sum_vref_bot >> ctrl_max_dfe_adapt_shift;

#if 0
	if ((adapt_data_en==1 && adapt_slicer_en==0) /*|| ( ((adapt_data_en==1 && adapt_slicer_en==1) || (adapt_data_en==0 && adapt_slicer_en==0) ) && tag_TRAIN_USE_D==1 && tag_TRAIN_USE_S==0) */)
	{
		train.f0 = train.f0_data;
		train.f0a = train.f0a_data;
		train.f0a_max = train.f0a_max_data;
		train.f1 = train.f1_data;
		train.f2 = train.f2_data;
		train.eo = train.eo_data;

		//DBG_Printf("\r\n d train: %d %d %d %d %d ", train.f0a, train.f0, train.f0a_max, train.f2, train.f3);
	}
	else if ((adapt_data_en==0 && adapt_slicer_en==1) /*|| (((adapt_data_en==1 && adapt_slicer_en==1) || (adapt_data_en=0 && adapt_slicer_en==0) ) && tag_TRAIN_USE_D==0 && tag_TRAIN_USE_S==1)*/ )
	{
		train.f0 = train.f0_slicer;
		train.f0a = train.f0a_slicer;
		train.f0a_max = train.f0a_max_slicer;
		train.f1 = train.f1_slicer;
		train.f2 = train.f2_slicer;
		train.eo = train.eo_slicer;

	//DBG_Printf("\r\n s train: %d %d %d %d %d ", train.f0a, train.f0, train.f0a_max, train.f2, train.f3);

	}
	else if ( ((adapt_data_en==1 && adapt_slicer_en==1) || (adapt_data_en==0 && adapt_slicer_en==0) ) /*&& ((tag_TRAIN_USE_D==1 && tag_TRAIN_USE_S==1) || (tag_TRAIN_USE_D==0 && tag_TRAIN_USE_S==0))*/ )
	{
		train.f0 = (train.f0_data + train.f0_slicer + 1)>>1;
		train.f0a = (train.f0a_data + train.f0a_slicer + 1)>>1;
		train.f0a_max = max_ram(train.f0a_max_data, train.f0a_max_slicer);
		//train.f0a_max = (train.f0a_max_data >= train.f0a_max_slicer) ? train.f0a_max_data : train.f0a_max_slicer;
		train.f1 = (train.f1_data + train.f1_slicer + 1)>>1;
		train.f2 = (train.f2_data + train.f2_slicer + 1)>>1;

		#if tag_AVERAGE_EO_MODE
		train.eo = (train.eo_data + train.eo_slicer + 1)>>1;
		#else
		train.eo = min_ram(train.eo_data, train.eo_slicer);
		//train.eo = (train.eo_data <= train.eo_slicer)? train.eo_data : train.eo_slicer;
		#endif
	//DBG_Printf("\r\n == train: %d %d %d %d %d ", train.f0a, train.f0, train.f0a_max, train.f2, train.f3);
	}
#endif
	//2. Fn1
    train.fn1 = train.f0 - train.f0a;
	train.fn1 = clamp(train.fn1, tag_DFE_FN1_MAX, tag_DFE_FN1_MIN );

	//3.eo
	//train.eo  = (sum_f0d + half_shift) >> ctrl_max_dfe_adapt_shift;

    //4.eye_check_pass
	train.eye_check_pass = (sum_eye_check_pass>=0); /*((sum_eye_check_pass>=0)||tag_EYE_CHECK_DISABLE) && (!tag_EO_BASED||(train.eo>=tag_EYE_CHECK_EO_THRE) );*/
	//DBG_Printf("\r\n avg train: %d %d %d %d %d %d, %d , %d %d", train.f0a, train.f0, train.f1, train.f2, train.f3, train.f4, train.f5, train.eo, train.eye_check_pass);
	//DBG_Printf("\r\n %d", sum_eye_check_pass);

    // 5.saturate
	sum_my_abs_fx = abs(train.f1)+abs(train.f2)+abs(train.f3)+abs(train.f4)+abs(train.f5);
	train.f0a_saturate = (!tag_DFE_SATURATE_DISABLE) && ((train.f0a_max >= tag_DFE_F0_SAT_THRES) || ( (train.f0a_max >= tag_DFE_F0_SAT_PROTECT_THRES) && (sum_my_abs_fx < tag_DFE_FX_SUM_SAT_THRES))) ? 1:0;
	train.dfe_saturate = (!tag_DFE_SATURATE_DISABLE) && ((abs(train.f1) >= tag_DFE_F1_SAT_THRES) || (abs(train.f2) >= tag_DFE_F2_SAT_THRES) ) ? 1:0;
	train.saturated = (train.f0a_saturate || train.dfe_saturate) ? 1:0;

	//6.

	train.excellent_eo = ((train.eo > tag_THRE_EXCELLENT) && train.eye_check_pass);
	train.good_eo = ((train.eo >= tag_THRE_GOOD) && train.eye_check_pass);
	//train.poor_eo = ((train.eo < tag_THRE_POOR) && train.eye_check_pass);

	//7.f0t
    //f0_minus_abs_fn1 = clamp(f0_minus_abs_fn1, tag_DFE_F0_MAX, tag_DFE_F0_MIN);
		if(train.f0 >= train.f0a)
			f0_minus_abs_fn1 = train.f0a;
		else
			f0_minus_abs_fn1 = (train.f0<<1) - train.f0a;
    if(train.eye_check_pass)	{
        train.f0t = tag_TX_F0T_EO_BASED ? train.eo : f0_minus_abs_fn1;
    }
	else
		train.f0t = 0;

    //8.

#if 0
	train.sumFtap = tag_SUMFTAP_EN_0 *  ((int16_t)((tag_SUMFTAP_SIGN_0<<1) -1) *  (int16_t)train.f0a * dfe_res_f0_sumFtap[dfe_res_f0]);
	//train.sumFtap += tag_SUMFTAP_EN_1 * ((int16_t)((tag_SUMFTAP_SIGN_1<<1) -1) * (int16_t)train.f1 * dfe_res_f1_sumFtap[dfe_res_f1]);
	train.sumFtap += tag_SUMFTAP_EN_2 * ((int16_t)((tag_SUMFTAP_SIGN_2<<1) -1) * (int16_t)train.f2 * dfe_res_f2_sumFtap[dfe_res_f2]) ;
	train.sumFtap += tag_SUMFTAP_EN_3 * ((int16_t)((tag_SUMFTAP_SIGN_3<<1) -1) * (int16_t)train.f3 * dfe_res_f3_sumFtap[dfe_res_f3]) ;
	train.sumFtap += tag_SUMFTAP_EN_4 * ((int16_t)((tag_SUMFTAP_SIGN_4<<1) -1) * (int16_t)train.f4 * dfe_res_f4_sumFtap[dfe_res_f4]) ;
	train.sumFtap += tag_SUMFTAP_EN_5 * ((int16_t)((tag_SUMFTAP_SIGN_5<<1) -1) * (int16_t)train.f5 * dfe_res_f567_sumFtap[dfe_res_f5]) ;
	train.sumFtap += tag_SUMFTAP_EN_6 * ((int16_t)((tag_SUMFTAP_SIGN_6<<1) -1) * (int16_t)train.f6 * dfe_res_f567_sumFtap[dfe_res_f6]) ;
	train.sumFtap += tag_SUMFTAP_EN_7 * ((int16_t)((tag_SUMFTAP_SIGN_7<<1) -1) * (int16_t)train.f7 * dfe_res_f567_sumFtap[dfe_res_f7]);
	train.sumFtap = clamp16(train.sumFtap, 8191,-8192);
#else
	train.sumFtap = tag_SUMFTAP_EN_0 *  ((int16_t)((tag_SUMFTAP_SIGN_0<<1) -1) *  (int16_t)train.f0a * f0_res);
	train.sumFtap += tag_SUMFTAP_EN_1 * ((int16_t)((tag_SUMFTAP_SIGN_1<<1) -1) * (int16_t)train.f1 * f1_res);
	train.sumFtap += tag_SUMFTAP_EN_2 * ((int16_t)((tag_SUMFTAP_SIGN_2<<1) -1) * (int16_t)train.f2 * f2_res);
	train.sumFtap += tag_SUMFTAP_EN_3 * ((int16_t)((tag_SUMFTAP_SIGN_3<<1) -1) * (int16_t)train.f3 * f3_res);
	train.sumFtap += tag_SUMFTAP_EN_4 * ((int16_t)((tag_SUMFTAP_SIGN_4<<1) -1) * (int16_t)train.f4 * f4_res);
	train.sumFtap += tag_SUMFTAP_EN_5 * ((int16_t)((tag_SUMFTAP_SIGN_5<<1) -1) * (int16_t)train.f5 * f5_res);
	train.sumFtap += tag_SUMFTAP_EN_6 * ((int16_t)((tag_SUMFTAP_SIGN_6<<1) -1) * (int16_t)train.f6 * f6_res);
	train.sumFtap += tag_SUMFTAP_EN_7 * ((int16_t)((tag_SUMFTAP_SIGN_7<<1) -1) * (int16_t)train.f7 * f7_res);
#endif
   //9                                          //1                                 -2
#if 0
	train.boost = (uint16_t)abs16(train.sumFtap - ((((int8_t)tag_SUMF_BOOST_TARGET_K) * (uint16_t)train.f0a * dfe_res_f0_sumFtap[dfe_res_f0] )>>4) - sumf_boost_target_c);
	train.boost = clamp16(train.boost, tag_RX_BOOST_MAX, tag_RX_BOOST_MIN);
#else
	train.boost = (uint16_t)abs16(train.sumFtap - ((((int8_t)tag_SUMF_BOOST_TARGET_K) * (uint16_t)train.f0a * f0_res)>>4) - sumf_boost_target_c);
	train.boost = clamp16((train.boost >> 6), tag_RX_BOOST_MAX, tag_RX_BOOST_MIN);
#endif
#endif
}
#endif

// Added by JL
void calculate_train_fn1_fx_tmb() BANKING_CTRL{
    uint8_t p_idx, ds_idx;

    for (p_idx = 0; p_idx < NUM_PATH; p_idx++){
        for (ds_idx = 0; ds_idx < NUM_DS; ds_idx++){
            train.fn1_tmb[p_idx][ds_idx]  = train.f0_tmb[p_idx][ds_idx]  - train.f0a_tmb[p_idx][ds_idx] ;
	        train.fn1_tmb[p_idx][ds_idx]  = clamp(train.fn1_tmb[p_idx][ds_idx] , tag_DFE_FN1_MAX, tag_DFE_FN1_MIN );

            /*
            if (reg_DFE_F0X_SEL_LANE_4_0 == DFE_FX_SEL_FN3){
                train.fn3_tmb[p_idx][ds_idx] = train.f0_tmb[p_idx][ds_idx] - train.f0x_tmb[p_idx][ds_idx];
                train.fn3_tmb[p_idx][ds_idx] = clamp(train.fn3_tmb[p_idx][ds_idx], tag_DFE_FX_MAX, tag_DFE_FX_MIN );
            }

            else if (reg_DFE_F0X_SEL_LANE_4_0 == DFE_FX_SEL_FN2){
                train.fn2_tmb[p_idx][ds_idx] = train.f0_tmb[p_idx][ds_idx] - train.f0x_tmb[p_idx][ds_idx];
                train.fn2_tmb[p_idx][ds_idx] = clamp(train.fn2_tmb[p_idx][ds_idx], tag_DFE_FX_MAX, tag_DFE_FX_MIN );
            }
            */

            /*
            // measure f-1 using f0x instead
            else if (reg_DFE_F0X_SEL_LANE_4_0 == DFE_FX_SEL_FN1){
                train.fn1_tmb[p_idx][ds_idx] = train.f0_tmb[p_idx][ds_idx] - train.f0x_tmb[p_idx][ds_idx];
                train.fn1_tmb[p_idx][ds_idx] = clamp(train.fn1_tmb[p_idx][ds_idx], tag_DFE_FX_MAX, tag_DFE_FX_MIN );
            }
            */

                
            
            if (reg_DFE_F0X_SEL_LANE_4_0 == DFE_FX_SEL_FP1){
                train.f1_tmb[p_idx][ds_idx] = train.f0_tmb[p_idx][ds_idx] - train.f0x_tmb[p_idx][ds_idx];
                train.f1_tmb[p_idx][ds_idx] = clamp(train.f1_tmb[p_idx][ds_idx], tag_DFE_FX_MAX, tag_DFE_FX_MIN );
            }

        }
    }
}
//

/****************************************
 * LEVEL FFE Calculation
*****************************************/
void level_ffe() BANKING_CTRL {

	if (train.eye_check_pass==0)
		train.level = 0;
	else if (train.eo < tag_THRE_POOR)
		train.level = 1; 
	else if (train.eo < tag_THRE_GOOD)
		train.level = 2; 
	else if (train.saturated || train.f1 < -5 || train.fn1 < -5)
		train.level = 3;
	else if (!train.excellent_eo)
		train.level = 4; 
	else
		train.level = 5;

	//DBG_Printf("\r\n train.eo=%d LEVEL FFE =%x", train.eo,lvl);
}

__code bool en_p[][NUM_PATH] = {
	{0, 1, 0, 1}, // HR (rate_mode==0)
	{0, 0, 0, 1}, // FR (rate_mode==1)
	{1, 1, 1, 1}  // QR (rate_mode==2)
};


// ADDED BY JL
void combine_f0_tmb(const uint8_t f0[][NUM_DS][NUM_TMB], uint8_t sum_tmb[NUM_PATH][NUM_DS]) BANKING_CTRL {
	const bool en_ds[] = {adapt_data_en, adapt_slicer_en};
	uint8_t ds_idx, p_idx, tmb_idx;

    
    // Can't do this!! Need to malloc or pass in parameter
                //4         //2
	//uint16_t sum_tmb[NUM_PATH][NUM_DS] = {
    //    {0, 0},
    //    {0, 0},
    //    {0, 0},
    //    {0, 0}
    //};
   

	for (ds_idx = 0; ds_idx < NUM_DS; ds_idx++) {
		if (en_ds[ds_idx]) {
			for (p_idx = 0; p_idx < NUM_PATH; p_idx++) {
				if (en_p[rate_mode][p_idx]) {
					for (tmb_idx = 0; tmb_idx < NUM_TMB; tmb_idx++){
						sum_tmb[p_idx][ds_idx] += f0[p_idx][ds_idx][tmb_idx];
					}
				}
			}
		}
	}
}

uint16_t combine_f0(const uint8_t f0[][NUM_DS][NUM_TMB]) BANKING_CTRL {
	const bool en_ds[] = {adapt_data_en, adapt_slicer_en};
	uint8_t ds_idx, p_idx, tmb_idx;
	uint16_t sum = 0;

	for (ds_idx = 0; ds_idx < NUM_DS; ds_idx++) {
		if (en_ds[ds_idx]) {
			for (p_idx = 0; p_idx < NUM_PATH; p_idx++) {
				if (en_p[rate_mode][p_idx]) {
					for (tmb_idx = 0; tmb_idx < NUM_TMB; tmb_idx++){
						sum += f0[p_idx][ds_idx][tmb_idx];
					}
				}
			}
		}
	}

	return sum;
}

uint8_t max_f0(const uint8_t f0[][NUM_DS][NUM_TMB]) BANKING_CTRL {
	const bool en_ds[] = {adapt_data_en, adapt_slicer_en};
	uint8_t ds_idx, p_idx, tmb_idx;
	uint8_t maximum = 0;

	for (ds_idx = 0; ds_idx < NUM_DS; ds_idx++) {
		if (en_ds[ds_idx]) {
			for (p_idx = 0; p_idx < NUM_PATH; p_idx++) {
				if (en_p[rate_mode][p_idx]) {
					for (tmb_idx = 0; tmb_idx < NUM_TMB; tmb_idx++){
						maximum = max_ram(maximum, f0[p_idx][ds_idx][tmb_idx]);
					}
				}
			}
		}
	}

	return maximum;
}

void combine_vref(const dfe_2c_path_t *dfe_2c, int16_t *tmb) BANKING_CTRL {
	uint8_t p_idx, tmb_idx;

	for (tmb_idx = 0; tmb_idx < NUM_TMB; tmb_idx++) tmb[tmb_idx] = 0;	
	for (p_idx = 0; p_idx < NUM_PATH; p_idx++) {
		if (en_p[rate_mode][p_idx]) {
			for (tmb_idx = 0; tmb_idx < NUM_TMB; tmb_idx++) {
				tmb[tmb_idx] += dfe_2c[p_idx].vref[tmb_idx];
			}
		}
	}
}

int16_t combine_splr_tap(const dfe_2c_path_t *dfe_2c, uint8_t tap_id) BANKING_CTRL {
	const bool en_ds[] = {adapt_data_en, adapt_slicer_en};
	int16_t sum = 0;
	uint8_t ds_idx, p_idx, tmb_idx;

	for (ds_idx = 0; ds_idx < NUM_DS; ds_idx++) {
		if (en_ds[ds_idx]) {
			for (p_idx = 0; p_idx < NUM_PATH; p_idx++) {
				if (en_p[rate_mode][p_idx]) {
					for (tmb_idx = 0; tmb_idx < NUM_TMB; tmb_idx++){
						switch(tap_id) {
							case 2:
								sum += dfe_2c[p_idx].f2[ds_idx][tmb_idx];
								break;
							case 3:
								sum += dfe_2c[p_idx].f3[ds_idx][tmb_idx];
								break;
							case 4:
								sum += dfe_2c[p_idx].f4[ds_idx][tmb_idx];
								break;
						}
					}
				}
			}
		}
	}

	return sum;
}

int16_t combine_tmb_tap(const dfe_2c_path_t *dfe_2c, uint8_t tap_id) BANKING_CTRL {
	int16_t sum = 0;
	uint8_t p_idx, tmb_idx;

	for (p_idx = 0; p_idx < NUM_PATH; p_idx++) {
		if (en_p[rate_mode][p_idx]) {
			for (tmb_idx = 0; tmb_idx < NUM_TMB; tmb_idx++){
				switch(tap_id) {
					case 5:
						sum += dfe_2c[p_idx].f5[tmb_idx];
						break;
					case 6:
						sum += dfe_2c[p_idx].f6[tmb_idx];
						break;
					case 7:
						sum += dfe_2c[p_idx].f7[tmb_idx];
						break;
					case 8:
						sum += dfe_2c[p_idx].f8[tmb_idx];
						break;
				}
			}
		}
	}

	return sum;
}

int16_t combine_ml_tap(const dfe_2c_path_t *dfe_2c, uint8_t tap_id) BANKING_CTRL {
	int16_t sum = 0;
	uint8_t p_idx, ml_idx;

	for (p_idx = 0; p_idx < NUM_PATH; p_idx++) {
		if (en_p[rate_mode][p_idx]) {
			for (ml_idx = 0; ml_idx < NUM_ML; ml_idx++){
				switch(tap_id) {
					case 10:
						sum += dfe_2c[p_idx].f10[ml_idx] << ml_idx;
						break;
					case 12:
						sum += dfe_2c[p_idx].f12[ml_idx] << ml_idx;
						break;
					case 14:
						sum += dfe_2c[p_idx].f14[ml_idx] << ml_idx;
						break;
					case 16:
						sum += dfe_2c[p_idx].f16[ml_idx] << ml_idx;
						break;
					case 20:
						sum += dfe_2c[p_idx].f20[ml_idx] << ml_idx;
						break;
				}
			}
		}
	}

	return sum;
}

void cds_calculation(void) BANKING_CTRL
{ 
	int16_t sum_vref[NUM_TMB];
	uint8_t rate_shift[] = {1, 2, 0}; // {HR, QR, FR}
	uint8_t idx, rate_idx;

	sum_f0a += combine_f0(cds112.s.f0a);
	sum_f0d += combine_f0(cds112.s.f0d);
	sum_f0d_left += combine_f0(cds112.s.f0d_left);
	sum_f0d_right += combine_f0(cds112.s.f0d_right);
	sum_f0 += combine_f0(cds112.s.f0b);
	sum_f0k += combine_f0(cds112.s.f0k);
	sum_f0x += combine_f0(cds112.s.f0x);

    // Added by JL
    combine_f0_tmb(cds112.s.f0b, sum_f0_tmb);
    combine_f0_tmb(cds112.s.f0x, sum_f0x_tmb);
    combine_f0_tmb(cds112.s.f0a, sum_f0a_tmb);
    combine_f0_tmb(cds112.s.f0d, sum_f0d_tmb);

    //        

	combine_vref(cds112.s.dfe_2c, sum_vref);
	sum_vref_bot += sum_vref[0];
	sum_vref_mid += sum_vref[1];
	sum_vref_top += sum_vref[2];

	for (idx = 1; idx < 8; idx++) {
		rate_idx = idx << rate_shift[rate_mode];

		if (rate_idx == 1) {
			sum_f[idx] = 0;
		}
		else if (rate_idx < 5) {
			// Sampler Taps f[2:4]
			sum_f[idx] += combine_splr_tap(cds112.s.dfe_2c, rate_idx);
		}
		else if (rate_idx < 9) {
			// Shared TOP/MID/BOT Taps f[5:8]
			sum_f[idx] += combine_tmb_tap(cds112.s.dfe_2c, rate_idx);
		}
		else {
			// Shared MSB/LSB taps f[10:2:20]
			sum_f[idx] += combine_ml_tap(cds112.s.dfe_2c, rate_idx);
		}
	}

	sum_eye_check_pass += ((cds112.f.eye_check_pass << 1) -1);
}

#if 0
void cds_calculation(void)
{
	//cds_f0a_slicer = (cds56.f0a.s_mid_e + cds56.f0a.s_mid_o + cds56.f0a.s_top_e + cds56.f0a.s_top_o + cds56.f0a.s_bot_e + cds56.f0a.s_bot_o) / 6;
	//cds_f0a_data = (cds56.f0a.d_mid_e + cds56.f0a.d_mid_o + cds56.f0a.d_top_e + cds56.f0a.d_top_o + cds56.f0a.d_bot_e + cds56.f0a.d_bot_o) / 6;

	/*cds_f0a_max_slicer = cds56.f0a.s_mid_e;
	cds_f0a_max_slicer = max(cds_f0a_max_slicer,cds56.f0a.s_mid_o);
	cds_f0a_max_slicer = max(cds_f0a_max_slicer,cds56.f0a.s_top_e);
	cds_f0a_max_slicer = max(cds_f0a_max_slicer,cds56.f0a.s_top_o);
	cds_f0a_max_slicer = max(cds_f0a_max_slicer,cds56.f0a.s_bot_e);
	cds_f0a_max_slicer = max(cds_f0a_max_slicer,cds56.f0a.s_bot_o);

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
	sum_vref_bot+= (cds56.dfe_2c.vref_bot_e + cds56.dfe_2c.vref_bot_o) >> 1;*/

}
#endif

