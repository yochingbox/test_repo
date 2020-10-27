/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file dfe_adaptation.c
* \purpose dfe adaptation & cdr_dfe_scheme
* \History
*	10/15/2015 Heejeong Ryu		Initial 
*/
#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK1
#pragma constseg BANK1
#endif

#define _DEBUG 	_DBG_DFE

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

    uint8_t cnt, max_cnt ;
	int8_t dfe_err_loop_cnt;
	
	lnx_DFE_CAL_DONE_LANE = 0; //for indicator for bitmatch

	//is_accu_phase_adapt = 0;
	
	//DBG_Printf("\r\n++(dfe_adaptation) ---\n");
	/* now always one time run!!*/
	#if tag_CDR_MAX_DFE_ADAPT_FORCE0==0
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
	
	if( ctrl_max_dfe_adapt_shift > 0 ) {
		memset0((uint8_t *)&sum, sizeof(Status_SUM_CDS_t));		
		half_shift = ctrl_max_dfe_adapt_shift==0? 0: 0x01 << (ctrl_max_dfe_adapt_shift-1);
	}
	
	dfe_max_cnt = 0x01<<ctrl_max_dfe_adapt_shift;
	#endif
	
	#if tag_CDR_MAX_DFE_ADAPT_FORCE0==0
    for (cnt=0;cnt<max_cnt;cnt++)	
	#endif
	{ 
		#ifndef BITMATCH
		if(lnx_FORCE_CDS_CTRL_EN_LANE) 
			cds_tb = lnx_FORCE_CDS_CTRL_LANE_15_0;		
		//else if(cds_dfe_ofst || dfe_ofst_adapt_en)	
		//	cds_tb = cds_table[CDS_DFE_OFST];	
		//else if(train_short_mode)
		//	cds_tb = cds_table[CDS_DEFAULT_PCIE];
		//else if(ctrl_cdr_phase_on) 
		//	cds_tb = cds_table[CDS_DEFAULT_PHASE_MOVE_DFE_EN];
		//else
		//	cds_tb = cds_table[CDS_DEFAULT];
			
		dfe_err_found = 0;	dfe_err_loop_cnt = 3;
		do {	
			cdr_dfe_scheme();
			if(dfe_err_found==0) break;
			
			//step by step debug
			if(lnx_DFE_DBG_STEP_MODE_LANE_7_0==1) {
				lnx_DFE_DBG_STEP_LANE_7_0 = 1; 		
				while(lnx_DFE_DBG_STEP_LANE_7_0==1);		
			}			
			
		} while( dfe_err_loop_cnt-->0);		
		#else
		BITMATCH_SYNC_EN = 1; BITMATCH_SYNC_EN = 0;
		#endif
		
	#if _DEBUG
	//Printf("\r\n ++ %d, %d, %d ", ctrl_max_dfe_adapt_shift, dfe_max_cnt, half_shift );
    //Printf(" train.fx: %d %d %d %d %d %d %d %d %d, eo:%d, eye_ck_p:%d", train.f0a, train.f0, train.f1, train.f2, train.f3, train.f4, train.f5, train.f6, train.f7, train.f0d, train.eye_check_pass); 
    //Printf(" (r,c):(%d,%d), dfe_res:%d, ",train_r,train_c,ctrl_step_res_dfe);
    //Printf(" saturated:%d, sumFtap:%d, boost:%d lvl:%d, phase:%d(%d)", train_saturated,train.sumFtap,train.boost, train.level, phase_offset_data, cdr_align90);
	#endif
			
	#if tag_CDR_MAX_DFE_ADAPT_FORCE0==0
		if( ctrl_max_dfe_adapt_shift > 0 ) {
			sum.f0a_data += cds.f0a_data; 
			sum.f0a_slicer += cds.f0a_slicer;
			sum.f0a_max_data += cds.f0a_max_data; 
			sum.f0a_max_slicer += cds.f0a_max_slicer;
			sum.f0_data +=  cds.f0_data;
			sum.f0_slicer +=  cds.f0_slicer;
			sum.f1 +=  cds.f1;
			sum.f2_data +=  cds.f2_data;
			sum.f2_slicer +=  cds.f2_slicer;
			sum.f3_data +=  cds.f3_data;
			sum.f3_slicer +=  cds.f3_slicer;
			sum.f4 +=  cds.f4;
			sum.f5 +=  cds.f5;
			sum.f6 +=  cds.f6;
			sum.f7 +=  cds.f7;
			sum.f0d_data += cds.f0d_data_center;
			sum.f0d_slicer += cds.f0d_slicer_center;
			sum.ofst_data += cds.cds.ofst_data;
			sum.ofst_slicer += cds.cds.ofst_slicer;
			sum.eye_check_pass += ((cds.eye_check_pass<<1) -1);		
		}
	#endif
		#if _DEBUG
		//print_cds();
		#endif		
     }

	 DFE_Final_Calculation();

    level_ffe();

#if (_DEBUG)// & _DBG_RXTRAIN )	
	// DBG_PS("\r\n-- end of dfe");
	//print_train();
	debug_print();
#endif
	
	lnx_DFE_CAL_DONE_LANE = 1; 

	//for debug
	lnx_TRAIN_F0A_MAX_LANE_7_0 = train.f0a_max;
	lnx_TRAIN_F0A_LANE_7_0 = train.f0a;
	lnx_TRAIN_F0D_LANE_7_0 = train.eo;
	lnx_TRAIN_F0B_LANE_7_0 = train.f0;
	
}

void pre_calculation(void) BANKING_CTRL {
	uint8_t val;
	int16_t sum;

	val = cds28.f0a.s_p_e;
	val = max(cds28.f0a.s_n_e, val);
	val = max(cds28.f0a.s_p_o, val);
	train.f0a_max_slicer = max(cds28.f0a.s_n_o, val);

	val = cds28.f0a.d_p_e;
	val = max(cds28.f0a.d_n_e, val);
	val = max(cds28.f0a.d_p_o, val);
	train.f0a_max_data = max(cds28.f0a.d_n_o, val);

	train.f0a_slicer = ( cds28.f0a.s_p_e + cds28.f0a.s_n_e + cds28.f0a.s_p_o + cds28.f0a.s_n_o ) >> 2;
	train.f0a_data = ( cds28.f0a.d_p_e + cds28.f0a.d_n_e + cds28.f0a.d_p_o + cds28.f0a.d_n_o ) >> 2;
	train.f0_slicer = ( cds28.f0b.s_p_e + cds28.f0b.s_n_e + cds28.f0b.s_p_o + cds28.f0b.s_n_o ) >> 2;
	train.f0_data = ( cds28.f0b.d_p_e + cds28.f0b.d_n_e + cds28.f0b.d_p_o + cds28.f0b.d_n_o ) >> 2;
	train.f1 = (cds28.dfe_2c.f1_e + cds28.dfe_2c.f1_o ) >> 1;
	train.f2_data = (cds28.dfe_2c.f2_d_p_e + cds28.dfe_2c.f2_d_n_e + cds28.dfe_2c.f2_d_p_o + cds28.dfe_2c.f2_d_n_o ) >> 2; 
	train.f2_slicer = (cds28.dfe_2c.f2_s_p_e + cds28.dfe_2c.f2_s_n_e + cds28.dfe_2c.f2_s_p_o + cds28.dfe_2c.f2_s_n_o ) >> 2; 
	train.f3_data = (cds28.dfe_2c.f3_d_p_e + cds28.dfe_2c.f3_d_n_e + cds28.dfe_2c.f3_d_p_o + cds28.dfe_2c.f3_d_n_o ) >> 2; 
	train.f3_slicer = (cds28.dfe_2c.f3_s_p_e + cds28.dfe_2c.f3_s_n_e + cds28.dfe_2c.f3_s_p_o + cds28.dfe_2c.f3_s_n_o ) >> 2; 
	train.f4 = (cds28.dfe_2c.f4_e + cds28.dfe_2c.f4_o) >> 1;
	train.f5 = (cds28.dfe_2c.f5_e + cds28.dfe_2c.f5_o) >> 1;
	train.f6 = (cds28.dfe_2c.f6_e + cds28.dfe_2c.f6_o) >> 1;
	train.f7 = (cds28.dfe_2c.f7_e + cds28.dfe_2c.f7_o) >> 1;
	
	//-- f0d_center
	#if tag_AVERAGE_EO_MODE
	train.eo_slicer = ( cds28.f0d.s_p_e + cds28.f0d.s_n_e + cds28.f0d.s_p_o + cds28.f0d.s_n_o ) >> 2;
	train.eo_data = ( cds28.f0d.d_p_e + cds28.f0d.d_n_e + cds28.f0d.d_p_o + cds28.f0d.d_n_o ) >> 2;	
	#else 
	val = cds28.f0d.s_p_e;
	val = min(cds28.f0d.s_n_e, val);
	val = min(cds28.f0d.s_p_o, val);
	train.eo_slicer = min(cds28.f0d.s_n_o, val);

	val = cds28.f0d.d_p_e;
	val = min(cds28.f0d.d_n_e, val);
	val = min(cds28.f0d.d_p_o, val);
	train.eo_data = min(cds28.f0d.d_n_o, val);	
	#endif

	#if _DEBUG
		{
	    //Printf(" f0d_d_pe/ne/po/no/center(%d,%d,%d,%d):%d", dfe_f0_f1p_d_eve, dfe_f0_f1n_d_eve, dfe_f0_f1p_d_odd, dfe_f0_f1n_d_odd, cds.f0d_data_center);
	  //  Printf(" f0d_d(%d,%d,%d,%d):%d", cds28.f0d.d_p_e, cds28.f0d.d_n_e, cds28.f0d.d_p_o, cds28.f0d.d_n_o, train.eo_data );
	  //  Printf(" f0d_s(%d,%d,%d,%d):%d", cds28.f0d.s_p_e, cds28.f0d.s_n_e, cds28.f0d.s_p_o, cds28.f0d.s_n_o, train.eo_slicer);		
		}		
	#endif
	
	//-- f0d_left
	if(lnx_VH_EO_MODE_LANE) {
		train.f0d_slicer_left = ( cds28.f0d_left.s_p_e + cds28.f0d_left.s_n_e + cds28.f0d_left.s_p_o + cds28.f0d_left.s_n_o ) >> 2;
		train.f0d_slicer_right = ( cds28.f0d_right.s_p_e + cds28.f0d_right.s_n_e + cds28.f0d_right.s_p_o + cds28.f0d_right.s_n_o ) >> 2;	
	}
	//--
	
	train.eye_check_pass = cds28.eye_check_pass;
	
	if(cds_tb & dc_adapt_en) {
		sum = (int8_t)reg_DFE_DC_D_P_E_2C_LANE_7_0;
		sum -= (int8_t)reg_DFE_DC_D_N_E_2C_LANE_7_0;
		sum += (int8_t)reg_DFE_DC_D_P_O_2C_LANE_7_0;
		sum -= (int8_t)reg_DFE_DC_D_N_O_2C_LANE_7_0;		
		train.ofst_data = (int8_t)sum;
		
		sum = (int8_t)reg_DFE_DC_S_P_E_2C_LANE_7_0;
		sum -= (int8_t)reg_DFE_DC_S_N_E_2C_LANE_7_0;
		sum += (int8_t)reg_DFE_DC_S_P_O_2C_LANE_7_0;
		sum -= (int8_t)reg_DFE_DC_S_N_O_2C_LANE_7_0;		
		train.ofst_slicer = (int8_t)sum;		

		ofst_sat = 0;		
	}
	
}

//dfe res table
__code int8_t dfe_res_f0_sumFtap[] = { 3,4,6,7};
__code int8_t dfe_res_f1_sumFtap[] = { 3,4,6,7};
__code int8_t dfe_res_f2_sumFtap[] = { 3,5}; //{ 2,3}; //requested by BIN
__code int8_t dfe_res_f3_sumFtap[] = { 3,5};
__code int8_t dfe_res_f4_sumFtap[] = { 2,3};
__code int8_t dfe_res_f567_sumFtap[] = { 1,2};

/*****************************************
 *     DFE_Final_Calculation:
*****************************************/
void DFE_Final_Calculation( void ) BANKING_CTRL {
	int8_t	f0_minus_abs_fn1;
	int16_t sum_my_abs_fx;
	
	//DBG_Printf("\r\n++(DFE_Final_Calculation) ---\n");
	//DBG_Printf("\r\n sum       %d %d %d %d %d %d, %d %d", sum_f0a, sum_f0, sum_f1, sum_f2, sum_f3, sum_f4, sum_f5, sum_f0d, sum_eye_check_pass);
	
	//1. average
	#if tag_CDR_MAX_DFE_ADAPT_FORCE0==0 // TODO
	if( ctrl_max_dfe_adapt_shift > 0 ) {
		train.f0a_data = (sum.f0a_data + half_shift) >> ctrl_max_dfe_adapt_shift;
		train.f0a_slicer = (sum.f0a_slicer + half_shift) >> ctrl_max_dfe_adapt_shift;
		train.f0a_max_data = (sum.f0a_max_data + half_shift) >> ctrl_max_dfe_adapt_shift;
		train.f0a_max_slicer = (sum.f0a_max_slicer + half_shift) >> ctrl_max_dfe_adapt_shift;
		train.f0_data  = (sum.f0_data + half_shift) >> ctrl_max_dfe_adapt_shift;
		train.f0_slicer  = (sum.f0_slicer + half_shift) >> ctrl_max_dfe_adapt_shift;
		if( sum.f1 > 0 ) sum.f1  = (sum.f1 + half_shift);
		else sum.f1 = (sum.f1 - half_shift);
		train.f1  = sum.f1 >> ctrl_max_dfe_adapt_shift;	
		if( sum.f2_data > 0 )sum.f2_data  = (sum.f2_data + half_shift);
		else sum.f2_data  = (sum.f2_data - half_shift);
		train.f2_data  = sum.f2_data >> ctrl_max_dfe_adapt_shift;	
		if( sum.f2_slicer > 0 )sum.f2_slicer = (sum.f2_slicer + half_shift);
		else sum.f2_slicer = sum.f2_slicer = (sum.f2_slicer - half_shift);
		train.f2_slicer  = sum.f2_slicer >> ctrl_max_dfe_adapt_shift;	
		if( sum.f3_data > 0 ) sum.f3_data  = (sum.f3_data + half_shift);
		else sum.f3_data = (sum.f3_data - half_shift);
		train.f3_data  = sum.f3_data >> ctrl_max_dfe_adapt_shift;	
		if( sum.f3_slicer > 0 ) sum.f3_slicer = (sum.f3_slicer + half_shift);
		else sum.f3_slicer = (sum.f3_slicer - half_shift);
		train.f3_slicer  = sum.f3_slicer >> ctrl_max_dfe_adapt_shift;	
		if( sum.f4 > 0 ) sum.f4 = (sum.f4 + half_shift);
		else sum.f4 = (sum.f4 - half_shift);
		train.f4  = sum.f4 >> ctrl_max_dfe_adapt_shift;	
		if( sum.f5 > 0 ) sum.f5  = (sum.f5 + half_shift);
		else sum.f5  = (sum.f5 - half_shift);
		train.f5  = sum.f5 >> ctrl_max_dfe_adapt_shift;	
		if( sum.f6 > 0 ) sum.f6 = (sum.f6 + half_shift);
		else sum.f6 = (sum.f6 - half_shift);
		train.f6  = sum.f6 >> ctrl_max_dfe_adapt_shift;	
		if( sum.f7 > 0 ) sum.f7  = (sum.f7 + half_shift);
		else sum.f7  = (sum.f7 - half_shift);
		train.f7  = sum.f7 >> ctrl_max_dfe_adapt_shift;
		train.eo_data = (sum.f0d_data + half_shift) >> ctrl_max_dfe_adapt_shift;
		train.eo_slicer = (sum.f0d_slicer + half_shift) >> ctrl_max_dfe_adapt_shift;
	}
	else
	#else 
	{
		pre_calculation();
	}
	#endif
	
	//----------
	
	if ((adapt_data_en==1 && adapt_slicer_en==0) /*|| ( ((adapt_data_en==1 && adapt_slicer_en==1) || (adapt_data_en==0 && adapt_slicer_en==0) ) && tag_TRAIN_USE_D==1 && tag_TRAIN_USE_S==0) */)
	{
		train.f0 = train.f0_data;
		train.f0a = train.f0a_data;
		train.f0a_max = train.f0a_max_data;
		train.f2 = train.f2_data;
		train.f3 = train.f3_data;
		#ifndef SUPPORT_PCIE_F0D_OPT
		train.eo = train.eo_data;
		#else
		train.eo = train.f0a_data;
		#endif

		//DBG_Printf("\r\n d train: %d %d %d %d %d ", train.f0a, train.f0, train.f0a_max, train.f2, train.f3); 
	}
	else if ((adapt_data_en==0 && adapt_slicer_en==1) /*|| (((adapt_data_en==1 && adapt_slicer_en==1) || (adapt_data_en=0 && adapt_slicer_en==0) ) && tag_TRAIN_USE_D==0 && tag_TRAIN_USE_S==1)*/ )
	{
		train.f0 = train.f0_slicer;
		train.f0a = train.f0a_slicer;
		train.f0a_max = train.f0a_max_slicer;
		train.f2 = train.f2_slicer;
		train.f3 = train.f3_slicer;
		#ifndef SUPPORT_PCIE_F0D_OPT
		train.eo = train.eo_slicer;
		#else
		train.eo = train.f0a_slicer;
		#endif
		
		
	//DBG_Printf("\r\n s train: %d %d %d %d %d ", train.f0a, train.f0, train.f0a_max, train.f2, train.f3); 
		
	}
	else //if ( ((adapt_data_en==1 && adapt_slicer_en==1) || (adapt_data_en==0 && adapt_slicer_en==0) ) /*&& ((tag_TRAIN_USE_D==1 && tag_TRAIN_USE_S==1) || (tag_TRAIN_USE_D==0 && tag_TRAIN_USE_S==0))*/ )
	{
		train.f0 = (train.f0_data + train.f0_slicer + 1)>>1;
		train.f0a = (train.f0a_data + train.f0a_slicer + 1)>>1;
		train.f0a_max = max(train.f0a_max_data, train.f0a_max_slicer);
		train.f2 = (train.f2_data + train.f2_slicer + 1)>>1;
		train.f3 = (train.f3_data + train.f3_slicer + 1)>>1;
	
		#if tag_AVERAGE_EO_MODE
		train.eo = (train.eo_data + train.eo_slicer + 1)>>1;
		#else 
		train.eo = min(train.eo_data, train.eo_slicer);		
		#endif
	//DBG_Printf("\r\n == train: %d %d %d %d %d ", train.f0a, train.f0, train.f0a_max, train.f2, train.f3); 
	}
	
	//2. Fn1
    train.fn1 = train.f0 - train.f0a;
	train.fn1 = clamp(train.fn1, tag_DFE_FN1_MAX, tag_DFE_FN1_MIN );

	//3.eo
	//train.eo  = (sum_f0d + half_shift) >> ctrl_max_dfe_adapt_shift;
	
    //4.eye_check_pass
	#if tag_CDR_MAX_DFE_ADAPT_FORCE0==0
	if( ctrl_max_dfe_adapt_shift > 0 )
		train.eye_check_pass = (sum.eye_check_pass>=0); /*((sum_eye_check_pass>=0)||tag_EYE_CHECK_DISABLE) && (!tag_EO_BASED||(train.eo>=tag_EYE_CHECK_EO_THRE) );*/
	#endif
	//DBG_Printf("\r\n avg train: %d %d %d %d %d %d, %d , %d %d", train.f0a, train.f0, train.f1, train.f2, train.f3, train.f4, train.f5, train.eo, train.eye_check_pass); 
	//DBG_Printf("\r\n %d", sum_eye_check_pass);
	
    // 5.saturate
	sum_my_abs_fx = abs(train.f1)+abs(train.f2)+abs(train.f3)+abs(train.f4)+abs(train.f5);
    train.f0a_saturate = (!tag_DFE_SATURATE_DISABLE) && ((train.f0a_max >= tag_DFE_F0_SAT_THRES) || ( (train.f0a_max >= tag_DFE_F0_SAT_PROTECT_THRES) && (sum_my_abs_fx < tag_DFE_FX_SUM_SAT_THRES)));
    train.dfe_saturate = (!tag_DFE_SATURATE_DISABLE) && ((abs(train.f1) >= tag_DFE_F1_SAT_THRES) || (abs(train.f2) >= tag_DFE_F2_SAT_THRES) );
	train.saturated = train.f0a_saturate || train.dfe_saturate ;
	
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
	train.sumFtap = tag_SUMFTAP_EN_0 *  ((int16_t)((tag_SUMFTAP_SIGN_0<<1) -1) *  (int16_t)train.f0 * dfe_res_f0_sumFtap[dfe_res_f0]);   
	train.sumFtap += tag_SUMFTAP_EN_1 * ((int16_t)((tag_SUMFTAP_SIGN_1<<1) -1) * (int16_t)train.f1 * dfe_res_f1_sumFtap[dfe_res_f1]);     
	train.sumFtap += tag_SUMFTAP_EN_2 * ((int16_t)((tag_SUMFTAP_SIGN_2<<1) -1) * (int16_t)train.f2 * dfe_res_f2_sumFtap[dfe_res_f2]) ;    
	train.sumFtap += tag_SUMFTAP_EN_3 * ((int16_t)((tag_SUMFTAP_SIGN_3<<1) -1) * (int16_t)train.f3 * dfe_res_f3_sumFtap[dfe_res_f3]) ;    
	train.sumFtap += tag_SUMFTAP_EN_4 * ((int16_t)((tag_SUMFTAP_SIGN_4<<1) -1) * (int16_t)train.f4 * dfe_res_f4_sumFtap[dfe_res_f4]) ;    
	train.sumFtap += tag_SUMFTAP_EN_5 * ((int16_t)((tag_SUMFTAP_SIGN_5<<1) -1) * (int16_t)train.f5 * dfe_res_f567_sumFtap[dfe_res_f5]) ;     
	train.sumFtap += tag_SUMFTAP_EN_6 * ((int16_t)((tag_SUMFTAP_SIGN_6<<1) -1) * (int16_t)train.f6 * dfe_res_f567_sumFtap[dfe_res_f6]) ;     
	train.sumFtap += tag_SUMFTAP_EN_7 * ((int16_t)((tag_SUMFTAP_SIGN_7<<1) -1) * (int16_t)train.f7 * dfe_res_f567_sumFtap[dfe_res_f7]);     
	train.sumFtap = clamp16(train.sumFtap, 1024,-1024);
	  
   //9                                          //1                                 -2
   //train.boost = (uint16_t)abs16(train.sumFtap - ((((int8_t)tag_SUMF_BOOST_TARGET_K) * train.f0a * dfe_res_f0_sumFtap[dfe_res_f0] )>>4) - sumf_boost_target_c);
   train.boost = (uint16_t)abs16(train.sumFtap - sumf_boost_target_c);
 
}

/****************************************
 * LEVEL FFE Calculation
*****************************************/
void level_ffe(void) BANKING_CTRL {
    uint8_t lvl;

	if (train.eye_check_pass==0)            lvl = 0;
	else if (train.eo < tag_THRE_POOR)      lvl = 1; 
	else if (train.eo < tag_THRE_GOOD)      lvl = 2; 
	else if (train.saturated)               lvl = 3;
	else if (train.excellent_eo==0) 		lvl = 4; 
	else                                    lvl = 5;
    train.level = lvl; 	
}

#ifdef SUPPORT_CHECK_NORMAL_F0D
void Check_F0d(void) BANKING_CTRL {

	if(eom_ext_mode==1 || dfe_dis == 1 ) return;
	if( lnx_DFE_ADAPT_NORMAL_FORCE_SKIP_LANE ) return;
	if( lnx_PHASE_ADAPT_ENABLE_LANE || do_phase_adapt ) return;
	if( lnx_CDR_DFE_F0D_NORM_ADAPT_EN_LANE==0) return;

	dfe_hardware_cont_stop();
	
	cds_tb = cds_table[CDS_F0D];
	cdr_dfe_scheme();
		
	lnx_RD_DFE_F0D_LANE_7_0 = ( cds28.f0d.d_p_e + cds28.f0d.d_n_e + cds28.f0d.d_p_o + cds28.f0d.d_n_o ) >> 2;	

	dfe_hardware_cont_run();	
	
}
#endif

