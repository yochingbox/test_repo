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
#endif

#define _DEBUG 	_DBG_DFE

void cds_calculation(void);

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
#ifndef _56GR1P1_TRAIN
void dfe_adaptation( void ) BANKING_CTRL {

    //uint8_t cnt, max_cnt, err_loop_cnt;
	
	lnx_DFE_CAL_DONE_LANE = 0; //for indicator for bitmatch
	
	sum_f0a_data = 0; sum_f0a_slicer = 0;
	sum_f0a_max_data = 0; sum_f0a_max_slicer = 0;
	sum_f0_data = 0; sum_f0_slicer = 0;
	sum_f1_data = 0, sum_f1_slicer = 0;
    sum_f2_data = 0; sum_f2_slicer = 0;
    sum_f3 = 0;
    sum_f4 = 0;
    sum_f5 = 0;
    sum_f6 = 0;
    sum_f7 = 0;
    /*sum_vref_top = 0;
    sum_vref_mid = 0;
    sum_vref_bot = 0;*/
    sum_f0d_data = 0; sum_f0d_slicer = 0;
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

	dfe_max_cnt = 0x01<<ctrl_max_dfe_adapt_shift;
    for (dfe_cnt=0;dfe_cnt<dfe_max_cnt;dfe_cnt++)	
	{ 
		#ifndef BITMATCH
		//cds = cds_table[CDS_DEFAULT];
		cdr_state = TRAIN_ON;
		cdr_dfe_scheme_new(0x2afbf);//
		#else
		BITMATCH_SYNC_EN = 1; BITMATCH_SYNC_EN = 0;
		#endif
		cds_calculation();
		
	#if _DEBUG
	//Printf("\r\n ++ %d, %d, %d ", ctrl_max_dfe_adapt_shift, dfe_max_cnt, half_shift );
    //Printf(" train.fx: %d %d %d %d %d %d %d %d %d, eo:%d, eye_ck_p:%d", train.f0a, train.f0, train.f1, train.f2, train.f3, train.f4, train.f5, train.f6, train.f7, train.f0d, train.eye_check_pass); 
    //Printf(" (r,c):(%d,%d), dfe_res:%d, ",train_r,train_c,ctrl_step_res_dfe);
    //Printf(" saturated:%d, sumFtap:%d, boost:%d lvl:%d, phase:%d(%d)", train_saturated,train.sumFtap,train.boost, train.level, phase_offset_data, cdr_align90);
	#endif
		//reg_MCU_DEBUG6_LANE_7_0 = reg_MCU_DEBUG6_LANE_7_0+1;
		
    	sum_f0a_data += cds_f0a_data; 
    	sum_f0a_slicer += cds_f0a_slicer;
    	sum_f0a_max_data += cds_f0a_max_data; 
    	sum_f0a_max_slicer += cds_f0a_max_slicer;
	    sum_f0_data +=  cds_f0_data;
	    sum_f0_slicer +=  cds_f0_slicer;
        sum_f1_data +=  cds_f1_data;
        sum_f1_slicer +=  cds_f1_slicer;
        sum_f2_data +=  cds_f2_data;
        sum_f2_slicer +=  cds_f2_slicer;
        sum_f3 +=  cds_f3;
        sum_f4 +=  cds_f4;
        sum_f5 +=  cds_f5;
        sum_f6 +=  cds_f6;
        sum_f7 +=  cds_f7;


#ifdef _56GR1P1_TRAIN
        sum_f0d_data += cds_f0d_data;
        sum_f0d_slicer += cds_f0d_slicer;
        sum_f0d_data = (sum_f0d_data < 2047)? sum_f0d_data:2047;
        sum_f0d_slicer = (sum_f0d_slicer < 2047)? sum_f0d_slicer:2047;
#else
        sum_f0d_data += cds_f0d_data_center;
		sum_f0d_slicer += cds_f0d_slicer_center;
#endif
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

	//reg_MCU_DEBUGE_LANE_7_0 = sum_f0d_data;

	//for debug
	//lnx_TRAIN_F0A_MAX_LANE_7_0 = train.f0a_max;
	//lnx_TRAIN_F0A_LANE_7_0 = train.f0a;
	lnx_TRAIN_F0D_LANE_7_0 = train.eo;
	//lnx_TRAIN_F0B_LANE_7_0 = train.f0;
	
}
#else
void dfe_adaptation( void ) BANKING_CTRL {

    //uint8_t cnt, max_cnt, err_loop_cnt;

	lnx_DFE_CAL_DONE_LANE = 0; //for indicator for bitmatch

	sum_f0a_data = 0; sum_f0a_slicer = 0;
	sum_f0a_max_data = 0; sum_f0a_max_slicer = 0;
	sum_f0_data = 0; sum_f0_slicer = 0;
	sum_f1_data = 0, sum_f1_slicer = 0;
    sum_f2_data = 0; sum_f2_slicer = 0;
    sum_f3_data = 0; sum_f3_slicer = 0;
    sum_f3 = 0;
    sum_f4 = 0;
    sum_f5 = 0;
    sum_f6 = 0;
    sum_f7 = 0;
    sum_vref_top = 0;
    sum_vref_mid = 0;
    sum_vref_bot = 0;
    sum_f0d_data = 0; sum_f0d_slicer = 0;
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
		cds = cds_table[CDS_DEFAULT];
		cdr_state = TRAIN_ON;

		if(reg_MCU_DEBUGE_LANE_7_0 & 0x80)
			//cdr_dfe_scheme_new(0x2af9e);//
			cdr_dfe_scheme_new(0x2ef9e);//
		else
			//cdr_dfe_scheme_new(0x2afbf);//
			//cdr_dfe_scheme_new(0x6EFDF);//
			//cdr_dfe_scheme_new(0x2efbf);//
			//cdr_dfe_scheme_new(cds);
            cdr_dfe_scheme_new(cds_table[CDS_DEFAULT]);
		#else
		BITMATCH_SYNC_EN = 1; BITMATCH_SYNC_EN = 0;
		#endif
		cds_calculation();

		//reg_MCU_DEBUG4_LANE_7_0 = cds56.f0d.d_mid_o;
		//reg_MCU_DEBUG5_LANE_7_0 = reg_DFE_F0_D_MID_O_2C_LANE_7_0;
		/*reg_MCU_DEBUG_LANE_31_0_b0 = cds56.f0d.d_mid_o;
		reg_MCU_DEBUG_LANE_31_0_b1 = cds56.f0d.d_mid_e;
		reg_MCU_DEBUG_LANE_31_0_b2 = cds56.f0d.d_bot_o;
		reg_MCU_DEBUG_LANE_31_0_b3 = cds56.f0d.d_bot_e;*/
		//reg_MCU_DEBUG6_LANE_7_0 = cds_f0d_data;
	#if _DEBUG
	//Printf("\r\n ++ %d, %d, %d ", ctrl_max_dfe_adapt_shift, dfe_max_cnt, half_shift );
    //Printf(" train.fx: %d %d %d %d %d %d %d %d %d, eo:%d, eye_ck_p:%d", train.f0a, train.f0, train.f1, train.f2, train.f3, train.f4, train.f5, train.f6, train.f7, train.f0d, train.eye_check_pass);
    //Printf(" (r,c):(%d,%d), dfe_res:%d, ",train_r,train_c,ctrl_step_res_dfe);
    //Printf(" saturated:%d, sumFtap:%d, boost:%d lvl:%d, phase:%d(%d)", train_saturated,train.sumFtap,train.boost, train.level, phase_offset_data, cdr_align90);
	#endif
		//reg_MCU_DEBUG6_LANE_7_0 = reg_MCU_DEBUG6_LANE_7_0+1;
		//if (dfe_cnt < 8)
		{
    	sum_f0a_data += cds_f0a_data;
    	sum_f0a_slicer += cds_f0a_slicer;
    	sum_f0a_max_data += cds_f0a_max_data;
    	sum_f0a_max_slicer += cds_f0a_max_slicer;
	    sum_f0_data +=  cds_f0_data;
	    sum_f0_slicer +=  cds_f0_slicer;
        sum_f1_data +=  cds_f1_data;
        sum_f1_slicer +=  cds_f1_slicer;
        sum_f2_data +=  cds_f2_data;
        sum_f2_slicer +=  cds_f2_slicer;
        sum_f3 +=  cds_f3;
        sum_f4 +=  cds_f4;
        sum_f5 +=  cds_f5;
        sum_f6 +=  cds_f6;
        sum_f7 +=  cds_f7;
		}

		/*sum_vref_top += cds_vref_top;
		sum_vref_mid += cds_vref_mid;
		sum_vref_bot += cds_vref_bot;*/
#ifdef _56GR1P1_TRAIN
        sum_f0d_data += cds_f0d_data;
        sum_f0d_slicer += cds_f0d_slicer;
        sum_f0d_data = (sum_f0d_data < 2047)? sum_f0d_data:2047;
        sum_f0d_slicer = (sum_f0d_slicer < 2047)? sum_f0d_slicer:2047;
#else
        sum_f0d_data += cds_f0d_data_center;
		sum_f0d_slicer += cds_f0d_slicer_center;
#endif

#ifdef _56GR1P1_TRAIN
		sum_eye_check_pass += ((cds56.eye_check_pass << 1) -1);
#else
        sum_eye_check_pass += ((cds_eye_check_pass<<1) -1);
#endif
        //reg_MCU_DEBUGE_LANE_7_0 = sum_f0d_data;
	#if _DEBUG
	//print_cds();
	#endif
        //reg_MCU_DEBUG4_LANE_7_0 = reg_MCU_DEBUG4_LANE_7_0 + 1;
     }

	 DFE_Final_Calculation();

    level_ffe();
    //reg_MCU_DEBUG6_LANE_7_0 = train.level;

    /*reg_MCU_DEBUG6_LANE_7_0 = train.saturated;//train.level;
    reg_MCU_DEBUG6_LANE_7_0 <<2;
    reg_MCU_DEBUG6_LANE_7_0 |= train.f0a_saturate;
    reg_MCU_DEBUG6_LANE_7_0 <<2;
    reg_MCU_DEBUG6_LANE_7_0 |= train.dfe_saturate;*/
#if (_DEBUG)// & _DBG_RXTRAIN )
	// DBG_PS("\r\n-- end of dfe");
	//print_train();
	//debug_print();
#endif
#ifdef _RX_TRAIN_DEBUG

    DBG_Printf("\n\r%d", train.f0);
	DBG_Printf("  %d", train.f1);
	DBG_Printf("  %d", train.f2);
	DBG_Printf("  %d", train.f3);

	DBG_Printf("  %d", train.f4);
	DBG_Printf("  %d", train.f5);
	DBG_Printf("  %d", train.f6);
	DBG_Printf("  %d", train.f7);
	DBG_Printf("  %d", sum_vref_top);
	DBG_Printf("  %d", sum_vref_mid);
	DBG_Printf("  %d", sum_vref_bot);
	DBG_Printf("  %d", train.eye_check_pass);

	DBG_Printf("   %d", train.f0a);
	DBG_Printf("     %d", train.f0a_max);
	//DBG_Printf("   %d", train.f0);
	DBG_Printf("  %d", train.eo);
	DBG_Printf("   %d", train.saturated);
	DBG_Printf("     %d", train.sumFtap);
	DBG_Printf("  %d", train.boost);
	DBG_Printf("  %d", train.level);
	DBG_Printf("  %d", cds56.vref_saturate);

    	#if _DBG_RXTRAIN
    	//if(!ctrl_tx_train_on )
    	{
    		DBG_Printf("  %d", train_r);
            DBG_Printf("  %d", train_c);
           	DBG_Printf("  %d",reg_CTLE_RES1_SEL_LANE_3_0);
           	DBG_Printf("  %d",reg_CTLE_RES2_SEL_LANE_3_0);
           	DBG_Printf("  %d",reg_CTLE_CAP1_SEL_LANE_3_0);
           	DBG_Printf("  %d",reg_CTLE_CAP2_SEL_LANE_3_0);

           	DBG_Printf("  %d",reg_DFE_RES_VREF_LANE_1_0);
            DBG_Printf("  %d",ctrl_step_res_dfe);
            DBG_Printf("  %d",dfe_f1_res_sel);
            DBG_Printf("  %d",dfe_f2_res_sel);
            DBG_Printf("  %d",dfe_f34_res_sel);
            DBG_Printf("  %d",dfe_f567_res_sel);
    	}
    	#endif

        //Printf(" f0a_max:%d", train.f0a_max);

    	#if _DBG_RXTRAIN
    	//if(!ctrl_tx_train_on )
    	{
        //Printf(" eom_en_sde(%d,",EOM_EN_S);
        //Printf("%d,",EOM_EN_D);
        //Printf("%d)",EOM_EN_E);

    		DBG_Printf("  %d", train.phase_offset_data );
    		//DBG_Printf("  %d", drv_PH_OS_DAT );
    		DBG_Printf("  %d", cdr_align90);
    		/*DBG_Printf("  %d", reg_MCU_DEBUG6_LANE_7_0);
    		DBG_Printf("  %d", reg_ALIGN90_GM_LANE_2_0);
    		DBG_Printf("  %d", reg_ALIGN90_DAC_LANE_6_0);
    		DBG_Printf("  %d", lnx_RXALIGN90_CAL_DONE_LANE);
    		DBG_Printf("  %d", lnx_RXALIGN90_CAL_PASS_LANE);*/
        //DBG_Printf("  %d", (uint8_t)reg_EOM_DPHER_LANE_6_0 );
    	//print_osft_f1p();
    	}
    	#endif
    	//if(!ctrl_rx_train_on )
    	{
    		DBG_Printf("  %d", train.g0_index);
    		DBG_Printf("  %d", train.g1_index);
    		DBG_Printf("  %d", train.gn1_index);
    	    	//DBG_Printf("=(%d,", reg_TX_EM_PEAK_CTRL_LANE_3_0);
    	    	//DBG_Printf("%d,", reg_TX_EM_PO_CTRL_LANE_3_0);
    	    	//DBG_Printf("%d)", reg_TX_EM_PRE_CTRL_LANE_3_0);
    		DBG_Printf("  %d", opt.g0_index);
    		DBG_Printf("  %d", opt.g1_index);
    		DBG_Printf("  %d", opt.gn1_index);
    		DBG_Printf("  %d", reg_FM_TRAIN_TX_EMPH0_LANE_4_0);
    		DBG_Printf("  %d", reg_FM_TRAIN_TX_EMPH1_LANE_4_0);
    	}

#endif


	lnx_DFE_CAL_DONE_LANE = 1;

	//reg_MCU_DEBUGE_LANE_7_0 = sum_f0d_data;

	//for debug
	lnx_TRAIN_F0A_MAX_LANE_7_0 = train.f0a_max;
	lnx_TRAIN_F0A_LANE_7_0 = train.f0a;
	lnx_TRAIN_F0D_LANE_7_0 = train.eo;
	lnx_TRAIN_F0B_LANE_7_0 = train.f0;
	lnx_TRAIN_F1_DATA_LANE_7_0 = train.f1_data;
	lnx_TRAIN_F1_SLICER_LANE_7_0 = train.f1_slicer;
	lnx_TRAIN_F2_DATA_LANE_7_0 = train.f2_data;
	lnx_TRAIN_F2_SLICER_LANE_7_0 = train.f2_slicer;
	lnx_TRAIN_F3_LANE_7_0 = train.f3;
	lnx_TRAIN_F4_LANE_7_0 = train.f4;
	lnx_TRAIN_F5_LANE_7_0 = train.f5;
	lnx_TRAIN_F6_LANE_7_0 = train.f6;
	lnx_TRAIN_F7_LANE_7_0 = train.f7;
	lnx_TRAIN_FN1_LANE_7_0 = train.fn1;
	lnx_EYE_CHECK_PASS_LANE = train.eye_check_pass;
	lnx_TRAIN_BOOST_LANE_15_0 = train.boost;

}
#endif

//dfe res table
#if 0
__code int8_t dfe_res_f0_sumFtap[] = { 3,4,6,7};
__code int8_t dfe_res_f1_sumFtap[] = { 3,4,6,7};
#else
__code int8_t dfe_res_f0_sumFtap[] = { 30,60,90,120};
__code int8_t dfe_res_f1_sumFtap[] = { 10,17,21,27};
#endif

#ifndef _56GR1P1_TRAIN
__code int8_t dfe_res_f2_sumFtap[] = { 2,3};
#else
#if 0
__code int8_t dfe_res_f2_sumFtap[] = {3,4,5,6};
#else
__code int8_t dfe_res_f2_sumFtap[] = {10,17,23,30};
#endif
#endif

#if 0
__code int8_t dfe_res_f3_sumFtap[] = { 3,5};
__code int8_t dfe_res_f4_sumFtap[] = { 2,3};
__code int8_t dfe_res_f567_sumFtap[] = { 1,2};
#else
__code int8_t dfe_res_f3_sumFtap[] = { 7,11};
__code int8_t dfe_res_f4_sumFtap[] = { 7,11};
__code int8_t dfe_res_f567_sumFtap[] = { 5,7};
#endif

/*****************************************
 *     DFE_Final_Calculation:
*****************************************/
void DFE_Final_Calculation( void ) BANKING_CTRL
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

	if( sum_f1_data > 0 ) sum_f1_data = (sum_f1_data + half_shift);
	else sum_f1_data = (sum_f1_data - half_shift);
	train.f1_data  = sum_f1_data >> ctrl_max_dfe_adapt_shift;

	if( sum_f1_slicer > 0 ) sum_f1_slicer  = (sum_f1_slicer + half_shift);
	else sum_f1_slicer = (sum_f1_slicer - half_shift);
	train.f1_slicer  = sum_f1_slicer >> ctrl_max_dfe_adapt_shift;

	if( sum_f2_data > 0 )sum_f2_data  = (sum_f2_data + half_shift);
	else sum_f2_data  = (sum_f2_data - half_shift);
	train.f2_data  = sum_f2_data >> ctrl_max_dfe_adapt_shift;	
	if( sum_f2_slicer > 0 )sum_f2_slicer = (sum_f2_slicer + half_shift);
	else sum_f2_slicer = sum_f2_slicer = (sum_f2_slicer - half_shift);
	train.f2_slicer  = sum_f2_slicer >> ctrl_max_dfe_adapt_shift;	
	if( sum_f3 > 0 ) sum_f3 = (sum_f3 + half_shift);
	else sum_f3 = (sum_f3 - half_shift);
	train.f3  = sum_f3 >> ctrl_max_dfe_adapt_shift;

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

	if( sum_vref_top > 0 ) sum_vref_top  = (sum_vref_top + half_shift);
	else sum_vref_top  = (sum_vref_top - half_shift);
	sum_vref_top  = sum_vref_top >> ctrl_max_dfe_adapt_shift;

	if( sum_vref_mid > 0 ) sum_vref_mid  = (sum_vref_mid + half_shift);
	else sum_vref_mid  = (sum_vref_mid - half_shift);
	sum_vref_mid  = sum_vref_mid >> ctrl_max_dfe_adapt_shift;

	if( sum_vref_bot > 0 ) sum_vref_bot  = (sum_vref_bot + half_shift);
	else sum_vref_bot  = (sum_vref_bot - half_shift);
	sum_vref_bot  = sum_vref_bot >> ctrl_max_dfe_adapt_shift;

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
		train.f0a_max = max(train.f0a_max_data, train.f0a_max_slicer);
		//train.f0a_max = (train.f0a_max_data >= train.f0a_max_slicer) ? train.f0a_max_data : train.f0a_max_slicer;
		train.f1 = (train.f1_data + train.f1_slicer + 1)>>1;
		train.f2 = (train.f2_data + train.f2_slicer + 1)>>1;
	
		#if tag_AVERAGE_EO_MODE
		train.eo = (train.eo_data + train.eo_slicer + 1)>>1;
		#else 
		train.eo = min(train.eo_data, train.eo_slicer);
		//train.eo = (train.eo_data <= train.eo_slicer)? train.eo_data : train.eo_slicer;
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
    train.f0a_saturate = (!tag_DFE_SATURATE_DISABLE) && ((train.f0a_max >= tag_DFE_F0_SAT_THRES) || ( (train.f0a_max >= tag_DFE_F0_SAT_PROTECT_THRES) && (sum_my_abs_fx < tag_DFE_FX_SUM_SAT_THRES))) ? 1:0;
    train.dfe_saturate = (!tag_DFE_SATURATE_DISABLE) && ((abs(train.f1) >= tag_DFE_F1_SAT_THRES) || (abs(train.f2) >= tag_DFE_F2_SAT_THRES) ) ? 1:0;
	train.saturated = (train.f0a_saturate || train.dfe_saturate) ? 1:0;
	
	//6.
#ifndef _56GR1P1_TRAIN
	train.excellent_eo = ((train.eo > tag_THRE_EXCELLENT) && train.eye_check_pass);
	train.good_eo = ((train.eo >= tag_THRE_GOOD) && train.eye_check_pass);
	//train.poor_eo = ((train.eo < tag_THRE_POOR) && train.eye_check_pass);
#else
	train.excellent_eo = ((train.eo > tag_THRE_EXCELLENT) && train.eye_check_pass);
	train.good_eo = ((train.eo >= tag_THRE_GOOD) && train.eye_check_pass);
	//train.poor_eo = ((train.eo < tag_THRE_POOR) && train.eye_check_pass);
#endif
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
#ifndef _56GR1P1_TRAIN
	train.sumFtap = tag_SUMFTAP_EN_0 *  ((int16_t)((tag_SUMFTAP_SIGN_0<<1) -1) *  (int16_t)train.f0 * dfe_res_f0_sumFtap[dfe_res_f0]);
	train.sumFtap += tag_SUMFTAP_EN_1 * ((int16_t)((tag_SUMFTAP_SIGN_1<<1) -1) * (int16_t)train.f1 * dfe_res_f1_sumFtap[dfe_res_f1]);     
	train.sumFtap += tag_SUMFTAP_EN_2 * ((int16_t)((tag_SUMFTAP_SIGN_2<<1) -1) * (int16_t)train.f2 * dfe_res_f2_sumFtap[dfe_res_f2]) ;    
	train.sumFtap += tag_SUMFTAP_EN_3 * ((int16_t)((tag_SUMFTAP_SIGN_3<<1) -1) * (int16_t)train.f3 * dfe_res_f3_sumFtap[dfe_res_f3]) ;    
	train.sumFtap += tag_SUMFTAP_EN_4 * ((int16_t)((tag_SUMFTAP_SIGN_4<<1) -1) * (int16_t)train.f4 * dfe_res_f4_sumFtap[dfe_res_f4]) ;    
	train.sumFtap += tag_SUMFTAP_EN_5 * ((int16_t)((tag_SUMFTAP_SIGN_5<<1) -1) * (int16_t)train.f5 * dfe_res_f567_sumFtap[dfe_res_f5]) ;     
	train.sumFtap += tag_SUMFTAP_EN_6 * ((int16_t)((tag_SUMFTAP_SIGN_6<<1) -1) * (int16_t)train.f6 * dfe_res_f567_sumFtap[dfe_res_f6]) ;     
	train.sumFtap += tag_SUMFTAP_EN_7 * ((int16_t)((tag_SUMFTAP_SIGN_7<<1) -1) * (int16_t)train.f7 * dfe_res_f567_sumFtap[dfe_res_f7]);     
	train.sumFtap = clamp16(train.sumFtap, 1024,-1024);
#else
	train.sumFtap = tag_SUMFTAP_EN_0 *  ((int16_t)((tag_SUMFTAP_SIGN_0<<1) -1) *  (int16_t)train.f0a * dfe_res_f0_sumFtap[dfe_res_f0]);
		train.sumFtap += tag_SUMFTAP_EN_1 * ((int16_t)((tag_SUMFTAP_SIGN_1<<1) -1) * (int16_t)train.f1 * dfe_res_f1_sumFtap[dfe_res_f1]);
		train.sumFtap += tag_SUMFTAP_EN_2 * ((int16_t)((tag_SUMFTAP_SIGN_2<<1) -1) * (int16_t)train.f2 * dfe_res_f2_sumFtap[dfe_res_f2]) ;
		train.sumFtap += tag_SUMFTAP_EN_3 * ((int16_t)((tag_SUMFTAP_SIGN_3<<1) -1) * (int16_t)train.f3 * dfe_res_f3_sumFtap[dfe_res_f3]) ;
		train.sumFtap += tag_SUMFTAP_EN_4 * ((int16_t)((tag_SUMFTAP_SIGN_4<<1) -1) * (int16_t)train.f4 * dfe_res_f4_sumFtap[dfe_res_f4]) ;
		train.sumFtap += tag_SUMFTAP_EN_5 * ((int16_t)((tag_SUMFTAP_SIGN_5<<1) -1) * (int16_t)train.f5 * dfe_res_f567_sumFtap[dfe_res_f5]) ;
		train.sumFtap += tag_SUMFTAP_EN_6 * ((int16_t)((tag_SUMFTAP_SIGN_6<<1) -1) * (int16_t)train.f6 * dfe_res_f567_sumFtap[dfe_res_f6]) ;
		train.sumFtap += tag_SUMFTAP_EN_7 * ((int16_t)((tag_SUMFTAP_SIGN_7<<1) -1) * (int16_t)train.f7 * dfe_res_f567_sumFtap[dfe_res_f7]);
		train.sumFtap = clamp16(train.sumFtap, 8191,-8192);
#endif
   //9                                          //1                                 -2
   train.boost = (uint16_t)abs16(train.sumFtap - ((((int8_t)tag_SUMF_BOOST_TARGET_K) * (uint16_t)train.f0a * dfe_res_f0_sumFtap[dfe_res_f0] )>>4) - sumf_boost_target_c);
   train.boost = clamp16(train.boost, tag_RX_BOOST_MAX, tag_RX_BOOST_MIN);
}


/****************************************
 * LEVEL FFE Calculation
*****************************************/
void level_ffe() BANKING_CTRL {
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

#if 0
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
}
#endif

#if 0 //(_DEBUG )

void debug_print(void) BANKING_CTRL{

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
	#endif
    Printf(" sat:%d,", train.saturated);
    Printf(" sumFtap:%d,", train.sumFtap);
    Printf(" bst:%d", train.boost);
    Printf(" lvl:%d,", train.level);
    Printf(" f0a_max:%d", train.f0a_max);

	#if _DBG_RXTRAIN
	if(!ctrl_tx_train_on ) 
	{	
    //Printf(" eom_en_sde(%d,",EOM_EN_S);
    //Printf("%d,",EOM_EN_D);
    //Printf("%d)",EOM_EN_E);
    Printf(" ph(%d,", train.phase_offset_data );
    Printf("%d)", train.phase_offset_esm );
    Printf("=(%d,", cdr_align90);
    Printf("%d)", (uint8_t)reg_EOM_DPHER_LANE_6_0 );
	//print_osft_f1p();
	}
	#endif
	if(!ctrl_rx_train_on ) 
	{	
	Printf(" train_g0/1/n1(");
	Printf("%d,", train.g0_index);
	Printf("%d,", train.g1_index);
	Printf("%d)", train.gn1_index);
	Printf("=(%d,", reg_TX_EM_PEAK_CTRL_LANE_3_0);
	//Printf("%d,", reg_TX_EM_PO_CTRL_LANE_3_0);
	//Printf("%d)", reg_TX_EM_PRE_CTRL_LANE_3_0);
	Printf(" opt_g0/1/n1(%d,", opt.g0_index);
	Printf("%d,", opt.g1_index);
	Printf("%d)", opt.gn1_index);
	}

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
