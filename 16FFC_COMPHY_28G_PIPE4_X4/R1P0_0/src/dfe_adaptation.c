/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file dfe_adaptation.c
* \purpose dfe adaptation & cdr_dfe_scheme
* \History
*	10/15/2015 Heejeong Ryu		Initial 
*/
#include "common.h"

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
void dfe_adaptation( void ) {

    //uint8_t cnt, max_cnt, err_loop_cnt;
	
	lnx_DFE_CAL_DONE_LANE = 0; //for indicator for bitmatch
	
	sum_f0a_data = 0; sum_f0a_slicer = 0;
	sum_f0a_max_data = 0; sum_f0a_max_slicer = 0;
	sum_f0_data = 0; sum_f0_slicer = 0;
    sum_f1 = 0;
    sum_f2_data = 0; sum_f2_slicer = 0;
    sum_f3_data = 0; sum_f3_slicer = 0;
    sum_f4 = 0;
    sum_f5 = 0;
    sum_f6 = 0;
    sum_f7 = 0;
    sum_f0d_data = 0; sum_f0d_slicer = 0;
    sum_eye_check_pass = 0;

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

	dfe_max_cnt = 0x01<<ctrl_max_dfe_adapt_shift;
    for (dfe_cnt=0;dfe_cnt<dfe_max_cnt;dfe_cnt++)	
	{ 
		#ifndef BITMATCH
		cds = cds_table[CDS_DEFAULT];
		cdr_state = TRAIN_ON;
		cdr_dfe_scheme();
		#else
		BITMATCH_SYNC_EN = 1; BITMATCH_SYNC_EN = 0;
		#endif
		
	#if _DEBUG
	//Printf("\r\n ++ %d, %d, %d ", ctrl_max_dfe_adapt_shift, dfe_max_cnt, half_shift );
    //Printf(" train.fx: %d %d %d %d %d %d %d %d %d, eo:%d, eye_ck_p:%d", train.f0a, train.f0, train.f1, train.f2, train.f3, train.f4, train.f5, train.f6, train.f7, train.f0d, train.eye_check_pass); 
    //Printf(" (r,c):(%d,%d), dfe_res:%d, ",train_r,train_c,ctrl_step_res_dfe);
    //Printf(" saturated:%d, sumFtap:%d, boost:%d lvl:%d, phase:%d(%d)", train_saturated,train.sumFtap,train.boost, train.level, phase_offset_data, cdr_align90);
	#endif
		
    	sum_f0a_data += cds_f0a_data; 
    	sum_f0a_slicer += cds_f0a_slicer;
    	sum_f0a_max_data += cds_f0a_max_data; 
    	sum_f0a_max_slicer += cds_f0a_max_slicer;
	    sum_f0_data +=  cds_f0_data;
	    sum_f0_slicer +=  cds_f0_slicer;
        sum_f1 +=  cds_f1;
        sum_f2_data +=  cds_f2_data;
        sum_f2_slicer +=  cds_f2_slicer;
        sum_f3_data +=  cds_f3_data;
        sum_f3_slicer +=  cds_f3_slicer;
        sum_f4 +=  cds_f4;
        sum_f5 +=  cds_f5;
        sum_f6 +=  cds_f6;
        sum_f7 +=  cds_f7;
        sum_f0d_data += cds_f0d_data_center;
		sum_f0d_slicer += cds_f0d_slicer_center;
        sum_eye_check_pass += ((cds_eye_check_pass<<1) -1);		
		
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
	//lnx_TRAIN_F0A_MAX_LANE_7_0 = train.f0a_max;
	//lnx_TRAIN_F0A_LANE_7_0 = train.f0a;
	lnx_TRAIN_F0D_LANE_7_0 = train.eo;
	//lnx_TRAIN_F0B_LANE_7_0 = train.f0;
	
}

//dfe res table
__code int8_t dfe_res_f0_sumFtap[] = { 3,4,6,7};
__code int8_t dfe_res_f1_sumFtap[] = { 3,4,6,7};
__code int8_t dfe_res_f2_sumFtap[] = { 2,3};
__code int8_t dfe_res_f3_sumFtap[] = { 3,5};
__code int8_t dfe_res_f4_sumFtap[] = { 2,3};
__code int8_t dfe_res_f567_sumFtap[] = { 1,2};

/*****************************************
 *     DFE_Final_Calculation:
*****************************************/
void DFE_Final_Calculation( void )
{
	int8_t	f0_minus_abs_fn1;
	int16_t sum_my_abs_fx;
	
	//DBG_Printf("\r\n++(DFE_Final_Calculation) ---\n");
	//DBG_Printf("\r\n sum       %d %d %d %d %d %d, %d %d", sum_f0a, sum_f0, sum_f1, sum_f2, sum_f3, sum_f4, sum_f5, sum_f0d, sum_eye_check_pass);

	//1. average
	train.f0_data  = (sum_f0_data + half_shift) >> ctrl_max_dfe_adapt_shift;
	train.f0_slicer  = (sum_f0_slicer + half_shift) >> ctrl_max_dfe_adapt_shift;
	train.f0a_data = (sum_f0a_data + half_shift) >> ctrl_max_dfe_adapt_shift;
	train.f0a_slicer = (sum_f0a_slicer + half_shift) >> ctrl_max_dfe_adapt_shift;
	train.f0a_max_data = (sum_f0a_max_data + half_shift) >> ctrl_max_dfe_adapt_shift;
	train.f0a_max_slicer = (sum_f0a_max_slicer + half_shift) >> ctrl_max_dfe_adapt_shift;
	if( sum_f1 > 0 ) sum_f1  = (sum_f1 + half_shift);
	else sum_f1 = (sum_f1 - half_shift);
	train.f1  = sum_f1 >> ctrl_max_dfe_adapt_shift;	
	if( sum_f2_data > 0 )sum_f2_data  = (sum_f2_data + half_shift);
	else sum_f2_data  = (sum_f2_data - half_shift);
	train.f2_data  = sum_f2_data >> ctrl_max_dfe_adapt_shift;	
	if( sum_f2_slicer > 0 )sum_f2_slicer = (sum_f2_slicer + half_shift);
	else sum_f2_slicer = sum_f2_slicer = (sum_f2_slicer - half_shift);
	train.f2_slicer  = sum_f2_slicer >> ctrl_max_dfe_adapt_shift;	
	if( sum_f3_data > 0 ) sum_f3_data  = (sum_f3_data + half_shift);
	else sum_f3_data = (sum_f3_data - half_shift);
	train.f3_data  = sum_f3_data >> ctrl_max_dfe_adapt_shift;	
	if( sum_f3_slicer > 0 ) sum_f3_slicer = (sum_f3_slicer + half_shift);
	else sum_f3_slicer = (sum_f3_slicer - half_shift);
	train.f3_slicer  = sum_f3_slicer >> ctrl_max_dfe_adapt_shift;	
	if( sum_f4 > 0 ) sum_f4 = (sum_f4 + half_shift);
	else sum_f4 = (sum_f4 - half_shift);
	train.f4  = sum_f4 >> ctrl_max_dfe_adapt_shift;	
	if( sum_f5 > 0 ) sum_f5  = (sum_f5 + half_shift);
	else sum_f5  = (sum_f5 - half_shift);
	train.f5  = sum_f5 >> ctrl_max_dfe_adapt_shift;	
	if( sum_f6 > 0 ) sum_f6 = (sum_f6 + half_shift);
	else sum_f6 = (sum_f6 - half_shift);
	train.f6  = sum_f6 >> ctrl_max_dfe_adapt_shift;	
	if( sum_f7 > 0 ) sum_f7  = (sum_f7 + half_shift);
	else sum_f7  = (sum_f7 - half_shift);
	train.f7  = sum_f7 >> ctrl_max_dfe_adapt_shift;
	train.eo_data = (sum_f0d_data + half_shift) >> ctrl_max_dfe_adapt_shift;
	train.eo_slicer = (sum_f0d_slicer + half_shift) >> ctrl_max_dfe_adapt_shift;

	if ((adapt_data_en==1 && adapt_slicer_en==0) /*|| ( ((adapt_data_en==1 && adapt_slicer_en==1) || (adapt_data_en==0 && adapt_slicer_en==0) ) && tag_TRAIN_USE_D==1 && tag_TRAIN_USE_S==0) */)
	{
		train.f0 = train.f0_data;
		train.f0a = train.f0a_data;
		train.f0a_max = train.f0a_max_data;
		train.f2 = train.f2_data;
		train.f3 = train.f3_data;
		train.eo = train.eo_data;

		//DBG_Printf("\r\n d train: %d %d %d %d %d ", train.f0a, train.f0, train.f0a_max, train.f2, train.f3); 
	}
	else if ((adapt_data_en==0 && adapt_slicer_en==1) /*|| (((adapt_data_en==1 && adapt_slicer_en==1) || (adapt_data_en=0 && adapt_slicer_en==0) ) && tag_TRAIN_USE_D==0 && tag_TRAIN_USE_S==1)*/ )
	{
		train.f0 = train.f0_slicer;
		train.f0a = train.f0a_slicer;
		train.f0a_max = train.f0a_max_slicer;
		train.f2 = train.f2_slicer;
		train.f3 = train.f3_slicer;
		train.eo = train.eo_slicer;
		
	//DBG_Printf("\r\n s train: %d %d %d %d %d ", train.f0a, train.f0, train.f0a_max, train.f2, train.f3); 
		
	}
	else if ( ((adapt_data_en==1 && adapt_slicer_en==1) || (adapt_data_en==0 && adapt_slicer_en==0) ) /*&& ((tag_TRAIN_USE_D==1 && tag_TRAIN_USE_S==1) || (tag_TRAIN_USE_D==0 && tag_TRAIN_USE_S==0))*/ )
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
	train.eye_check_pass = (sum_eye_check_pass>=0); /*((sum_eye_check_pass>=0)||tag_EYE_CHECK_DISABLE) && (!tag_EO_BASED||(train.eo>=tag_EYE_CHECK_EO_THRE) );*/
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
   train.boost = (uint16_t)abs16(train.sumFtap - ((((int8_t)tag_SUMF_BOOST_TARGET_K) * train.f0a * dfe_res_f0_sumFtap[dfe_res_f0] )>>4) - sumf_boost_target_c);
 
}


/****************************************
 * LEVEL FFE Calculation
*****************************************/
void level_ffe(){
    uint8_t lvl;

	if (train.eye_check_pass==0)            lvl = 0;
	else if (train.eo < tag_THRE_POOR)      lvl = 1; 
	else if (train.eo < tag_THRE_GOOD)      lvl = 2; 
	else if (train.saturated)               lvl = 3;
	else if (train.excellent_eo==0) 		lvl = 4; 
	else                                    lvl = 5;
    train.level = lvl;
 	
	//DBG_Printf("\r\n train.eo=%d LEVEL FFE =%x", train.eo,lvl);
}


#if (_DEBUG )

void debug_print(void) {

	Printf("\r\n -- %d", ctrl_max_dfe_adapt_shift );
    Printf(" train.fx: %d", train.f0a); 
    Printf(" %d", train.f0); 
    Printf(" %d", train.f1); 
    Printf(" %d", train.f2); 
    Printf(" %d", train.f3); 
    Printf(" %d", train.f4); 
    Printf(" %d", train.f5); 
    Printf(" %d", train.f6); 
    Printf(" %d", train.f7); 
    Printf(" %d", train.eye_check_pass); 

	Printf(" ##EO:%d", train.eo);
	
    //Printf(" slpr=(%d,", adapt_data_en);
    //Printf("%d)", adapt_slicer_en);

	#if _DBG_RXTRAIN
	if(!ctrl_tx_train_on ) 
	{	
    Printf(" (r,c)=(%d,", train_r);
    Printf("%d):", train_c);
	Printf(" (%d,",reg_FFE_RES1_SEL_LANE_3_0);
	Printf("%d,",reg_FFE_RES2_SEL_E_LANE_3_0);
	Printf("%d)/",reg_FFE_RES2_SEL_O_LANE_3_0);
	Printf("(%d,",reg_FFE_CAP1_SEL_LANE_3_0);
	Printf("%d,",reg_FFE_CAP2_SEL_E_LANE_3_0);
	Printf("%d)",reg_FFE_CAP2_SEL_O_LANE_3_0);
    Printf(" dfe_res(%d,",ctrl_step_res_dfe);
    Printf("%d,",dfe_f1_res_sel);
    Printf("%d,",dfe_f234_res_sel);
    Printf("%d)",dfe_f567_res_sel);
	}
    Printf(" sat:%d,", train.saturated);
    Printf(" sumFtap:%d,", train.sumFtap);
    Printf(" bst:%d", train.boost);
    Printf(" lvl:%d,", train.level);
    Printf(" f0a_max:%d", train.f0a_max);
	#endif

	#if _DBG_RXTRAIN || _DBG_PHASE_TRAIN
	//if(!ctrl_tx_train_on ) 
	{	
    //Printf(" eom_en_sde(%d,",EOM_EN_S);
    //Printf("%d,",EOM_EN_D);
    //Printf("%d)",EOM_EN_E);
    Printf(" ph(%d,", train.phase_offset_data );
    Printf("%d)", train.phase_offset_esm );
    Printf("=(%d,", cdr_align90);
    Printf("%d)", (uint8_t)reg_EOM_DPHER_LANE_6_0 );
	print_osft_f1p();
	}
	#endif
	#if _DBG_TXTRAIN
	//if(!ctrl_rx_train_on ) 
	{	
	Printf(" train_g0/1/n1(");
	Printf("%d,", train.g0_index);
	Printf("%d,", train.g1_index);
	Printf("%d)", train.gn1_index);
	Printf("=(%d,", reg_TX_EM_PEAK_CTRL_LANE_3_0);
	Printf("%d,", reg_TX_EM_PO_CTRL_LANE_3_0);
	Printf("%d)", reg_TX_EM_PRE_CTRL_LANE_3_0);
	Printf(" opt_g0/1/n1(%d,", opt.g0_index);
	Printf("%d,", opt.g1_index);
	Printf("%d)", opt.gn1_index);
	}
	#endif
	
}
/*
void print_train(void) {
	DBG_Printf("\r\n train: %d: f0a(%d %d) f0a_max(%d %d) f0(%d, %d) %d f2(%d, %d)", dfe_cnt, train.f0a_data, train.f0a_slicer, train.f0a_max_data, train.f0a_max_slicer, train.f0_data, train.f0_slicer, train.f1, train.f2_data, train.f2_slicer); 
	DBG_Printf(" f3(%d %d) %d %d %d %d, eo(%d, %d) %d", train.f3_data, train.f3_slicer, train.f4, train.f5, train.f6, train.f7, train.eo_data, train.eo_slicer, train.eye_check_pass);

}
*/
/*
void print_cds(void) {
	//DBG_Printf("\r\n cds: %d: f0a(%d %d) f0a_max(%d %d) f0(%d, %d) %d f2(%d, %d)", dfe_cnt, cds_f0a_data, cds_f0a_slicer, cds_f0a_max_data, cds_f0a_max_slicer, cds_f0_data, cds_f0_slicer, cds_f1, cds_f2_data, cds_f2_slicer); 
	//DBG_Printf(" f3(%d %d) %d %d %d %d, f0d(%d, %d) %d", cds_f3_data, cds_f3_slicer, cds_f4, cds_f5, cds_f6, cds_f7, cds_f0d_data, cds_f0d_slicer, cds_eye_check_pass);
	DBG_Printf("\r\n sum: %d: f0a(%d %d) f0a_max(%d %d) f0(%d, %d) %d f2(%d, %d)", dfe_cnt, sum_f0a_data, sum_f0a_slicer, sum_f0a_max_data, sum_f0a_max_slicer, sum_f0_data, sum_f0_slicer, sum_f1, sum_f2_data, sum_f2_slicer); 
	DBG_Printf(" f3(%d %d) %d %d %d %d, f0d(%d, %d) %d", sum_f3_data, sum_f3_slicer, sum_f4, sum_f5, sum_f6, sum_f7, sum_f0d_data, sum_f0d_slicer, sum_eye_check_pass);

}
*/
#endif