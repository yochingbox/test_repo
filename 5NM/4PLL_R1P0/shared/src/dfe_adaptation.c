/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file dfe_adaptation.c
* \purpose dfe adaptation & drv_cdr_dfe_scheme
* \History
*	10/15/2015 Heejeong Ryu		Initial 
*/
#include "common.h"
#include "driver.h"
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg CSEG
#endif

#define _DEBUG 	_DBG_DFE
#define _MEM_SAVE
#define F0_DIVIDER_QR 4
#define F2TO7_DIVIDER_QR 4

#define F0_DIVIDER_HR 2
#define F1TO7_DIVIDER_HR 2

#define F0_DIVIDER_FR 1
#define F1TO7_DIVIDER_FR 1


static void DFE_Final_Calculation( void ) ;
static void level_ffe(void);
static void cds_calculation(void) ;
static uint16_t combine_f0(const uint8_t f0[][NUM_DS][NUM_TMB])  ;
static uint8_t max_f0(const uint8_t f0[][NUM_DS][NUM_TMB])  ;
static void combine_vref(const dfe_2c_path_t *dfe_2c, int16_t *tmb)  ;
static int16_t combine_splr_tap(const dfe_2c_path_t *dfe_2c, uint8_t tap_id)  ;
static int16_t combine_tmb_tap(const dfe_2c_path_t *dfe_2c, uint8_t tap_id)  ;
static int16_t combine_ml_tap(const dfe_2c_path_t *dfe_2c, uint8_t tap_id)  ;
static int16_t combine_splr_tap_f(const dfe_2c_t *dfe_2c, uint8_t tap_id)  ;
static int16_t combine_tmb_tap_f(const dfe_2c_t *dfe_2c, uint8_t tap_id)   ;
static int16_t combine_ml_tap_f(const dfe_2c_t *dfe_2c, uint8_t tap_id)  ;
static void pre_calculation(void) ;

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

void dfe_adaptation( void )  BANKING_CTRL {
	uint8_t i;
	uint32_t cds_arg;
    //uint8_t cnt, max_cnt, err_loop_cnt;

	if(cmx_TRAIN_SIM_EN) return;
	
	lnx_DFE_CAL_DONE_LANE = 0; //for indicator for bitmatch

	#ifndef _PCIE_BUILD
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
	for (i=0; i<8; i++) sum_f[i] = 0;
	sum_vref_top = 0;
	sum_vref_mid = 0;
	sum_vref_bot = 0;
	train.f0a_max = 0;
	sum_eye_check_pass = 0;
	#endif //_PCIE_BUILD
	
	if(lnx_CDS_CALL_FORCE_EN_LANE) {
		cds_arg = CDS_TB.VAL;
	}
	else 
	{

		#ifdef _PCIE_BUILD
		//if(train_st != ST_TRX_TRAIN_ST) train_cds = CDS_PCIE_TRAIN;
		#endif
		cds_arg = cmx_train_cds_tb[train_cds];
		//test
		if(lnx_F0B_GAINTRAIN_EN_LANE) {
			if(train_cds == CDS_GAINTRAIN_INIT) 
				cds_arg |= 0x4000; //f0b_adapt_en 	
		}
	}
	 	
	//DBG_Printf("\r\n++(dfe_adaptation) ---\n");
	/* now always one time run!!*/
 	#ifndef _PCIE_BUILD
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
		drv_cdr_dfe_scheme(cds_arg);

#if _DBG_F0X
//if(cds_call == CDS_EN_PHASETRAIN2 || cds_call == CDS_EN_FINAL)
if((lnx_CLI_CMD_LANE_7_0 == 0xF8 || lnx_CLI_CMD_LANE_7_0 == 0xE6) && lnx_CLI_START_LANE == 1)
{
		// Add more calls for f1,fn3,4,5; f0x_adapt_en
		reg_DFE_F0X_SEL_LANE_4_0 = DFE_FX_SEL_FN3;
		drv_cdr_dfe_scheme(0x8000);
		sum_f0xn3 += combine_f0(cds56.s.f0x);

		reg_DFE_F0X_SEL_LANE_4_0 = DFE_FX_SEL_FN4;		
		drv_cdr_dfe_scheme(0x8000);
		sum_f0xn4 += combine_f0(cds56.s.f0x);

		reg_DFE_F0X_SEL_LANE_4_0 = DFE_FX_SEL_FN5;		
		drv_cdr_dfe_scheme(0x8000);
		sum_f0xn5 += combine_f0(cds56.s.f0x);
		// reset to f0a
		if (ctrl_cdr_phase_on) drv_cdr_dfe_scheme(cds_table[CDS_EN_PHASETRAIN]);
		else drv_cdr_dfe_scheme(cds_table[cds_call]);
}
#endif
		cds_calculation();		

     }

#else //_PCIE_BUILD

	drv_cdr_dfe_scheme(cds_arg);
	
	#endif //_PCIE_BUILD

	 DFE_Final_Calculation();

	 
    level_ffe();

	
#if _DBG_TRXTRAIN
	debug_print();
#endif

	lnx_DFE_CAL_DONE_LANE = 1;

	//for debug
	/*
	lnx_TRAIN_F0A_MAX_LANE_7_0 = train.f0a_max;
	lnx_TRAIN_F0A_LANE_7_0 = train.f0a;
	lnx_TRAIN_F0D_LANE_7_0 = train.eo;
	lnx_TRAIN_F0B_LANE_7_0 = train.f0;
	lnx_TRAIN_F1_LANE_7_0 = (uint8_t)train.f1;
	lnx_TRAIN_F2_LANE_7_0 = train.f2;
	lnx_TRAIN_F3_LANE_7_0 = train.f3;
	lnx_TRAIN_F4_LANE_7_0 = train.f4;
	lnx_TRAIN_F5_LANE_7_0 = train.f5;
	lnx_TRAIN_F6_LANE_7_0 = train.f6;
	lnx_TRAIN_F7_LANE_7_0 = train.f7;
	lnx_TRAIN_F0X_LANE_7_0 = train.f0x;
	lnx_TRAIN_FN1_LANE_7_0 = (uint8_t)train.fn1;
	lnx_TRAIN_FN2_LANE_7_0 = (uint8_t)train.fn2;
	lnx_EYE_CHECK_PASS_LANE = train.eye_check_pass;
	lnx_TRAIN_BOOST_LANE_15_0 = train.boost;
	lnx_TRAIN_VREF_BOT_LANE_7_0 = (uint8_t)sum_vref_bot;
	lnx_TRAIN_VREF_TOP_LANE_7_0 = (uint8_t)sum_vref_top;
	lnx_TRAIN_LEVEL_LANE_2_0 = train.level;
	lnx_TRAIN_SUMFTAP_LANE_15_0 = (uint16_t)train.sumFtap;
	*/
	#if _TRAIN_CAP_DEBUG
	if(lnx_TRAIN_DB_EN_LANE) {
		//if(train_db_step < TRAIN_DB_MAX) {
		if(train_db_step == 0 ) {
			train.train_step = train_db_step;
			memcpy((uint8_t *)(TRAIN_DB_BASE + (sizeof(Status_Train_t)*train_db_step)), (uint8_t *)&train, sizeof(Status_Train_t));
		}
		train_db_step++;
		lnx_TRAIN_DB_STEP_LANE_7_0 = train_db_step;		
	}	
	#endif

	lnx_TRAIN_DB_STEP_LANE_7_0++;

	if(lnx_DFE_DBG_STEP_MODE_LANE_7_0==1) {
		lnx_DFE_DBG_STEP_LANE_7_0 = 1; 		
		while(lnx_DFE_DBG_STEP_LANE_7_0==1);		
	}

}

//dfe res table
// round(mv/code*64)
#if defined _56G_7NM_R1P0 || defined CONFIG_7NM_56G_X4_4PLL_R1P0
__code int16_t dfe_res_f0_sumFtap[] = { 45,87,120,131};
__code int16_t dfe_res_f1_sumFtap[] = { 48,105,155,173};
__code int16_t dfe_res_f2_sumFtap[] = { 71,116,154,168};
__code int16_t dfe_res_f3to4_sumFtap[] = {45,70}; 
__code int16_t dfe_res_f5to7_sumFtap[] = {32,45}; //3LSB : pam4 or fullrange
__code int16_t dfe_res_f5to7_sumFtap_nofullrange[] = {22, 30}; //2LSB : fullranage=0 and none fullrane
//__code int16_t dfe_res_f8to10_sumFtap[] = {24, 34}; //not used
__code int16_t dfe_res_vref_sumFtap[] = {64,107,128,171};

#else //5nm
__code int16_t dfe_res_f0_sumFtap[] = { 36,70,104,135};
__code int16_t dfe_res_f1_sumFtap[] = { 53,107,159,221};
__code int16_t dfe_res_f2_sumFtap[] = { 47,89,130,165};
__code int16_t dfe_res_f3to4_sumFtap[] = {45,70}; 
__code int16_t dfe_res_f5to7_sumFtap[] = {32,45}; //3LSB : pam4 or fullrange
__code int16_t dfe_res_f5to7_sumFtap_nofullrange[] = {22, 30}; //2LSB : fullranage=0 and none fullrane
//__code int16_t dfe_res_f8to10_sumFtap[] = {24, 34}; //not used
__code int16_t dfe_res_vref_sumFtap[] = {67,111,133,177};

#endif

/****************************************
 *     DFE_Final_Calculation:
*****************************************/

static void DFE_Final_Calculation( void ) {
	int8_t	f0_minus_abs_fn1;
	int16_t sum_my_abs_fx;
	uint16_t sum_temp;

	#ifndef _PCIE_BUILD
	switch (rate_mode)
	{

	case HR:
		if (adapt_data_en != adapt_slicer_en)
		{
			f0_1_factor = F0_DIVIDER_HR; //2
			f0d_factor = F0_DIVIDER_HR;
			f2_factor = F1TO7_DIVIDER_HR; //2
		}
		else
		{
			f0_1_factor = F0_DIVIDER_HR * 2; //2*2=4 
			f0d_factor = F0_DIVIDER_HR * 2;
			f2_factor = F1TO7_DIVIDER_HR * 2; //2*2=4 
		}
		f3_factor = F1TO7_DIVIDER_HR; //2
		f4_factor = F1TO7_DIVIDER_HR; 
		f5_factor = F1TO7_DIVIDER_HR;
		f6_factor = F1TO7_DIVIDER_HR;
		f7_factor = F1TO7_DIVIDER_HR;
		vref_factor = F0_DIVIDER_HR; //2
		
		f1_res = dfe_res_f1_sumFtap[dfe_f1_res_sel];
		f2_res = dfe_res_f2_sumFtap[dfe_f2_res_sel];
		f3_res = dfe_res_f3to4_sumFtap[dfe_f34_res_sel];
		f4_res = dfe_res_f3to4_sumFtap[dfe_f34_res_sel];
		if(pam2_en && reg_PAM2_F5FF6_FULLRANGE_LANE==0) {
			f5_res = dfe_res_f5to7_sumFtap_nofullrange[dfe_f567_res_sel]; 
			f6_res = dfe_res_f5to7_sumFtap_nofullrange[dfe_f567_res_sel];
			f7_res = dfe_res_f5to7_sumFtap_nofullrange[dfe_f567_res_sel];
		}
		else {
			f5_res = dfe_res_f5to7_sumFtap[dfe_f567_res_sel];
			f6_res = dfe_res_f5to7_sumFtap[dfe_f567_res_sel];
			f7_res = dfe_res_f5to7_sumFtap[dfe_f567_res_sel];
		}
		
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

		f1_res = dfe_res_f2_sumFtap[dfe_f2_res_sel];
		f2_res = dfe_res_f3to4_sumFtap[dfe_f34_res_sel];
		f3_res = dfe_res_f5to7_sumFtap[dfe_f567_res_sel];
		/*f4_res = dfe_res_f5to8_sumFtap[dfe_f8to10_res_sel];
		f5_res = dfe_res_f9to14_sumFtap[dfe_f11to15_res_sel];
		f6_res = dfe_res_f9to14_sumFtap[dfe_f11to15_res_sel];
		f7_res = dfe_res_f9to14_sumFtap[dfe_f11to15_res_sel];*/
		break;
#endif
	}

	if(!pam2_en){
		f0_1_factor = f0_1_factor * 3; //4*3=12
		f0d_factor  = f0d_factor  * 3;
		f2_factor   = f2_factor   * 3;
	}
	f3_factor   = f3_factor   * 3;
	f4_factor   = f4_factor   * 3;
	if(pam2_en && reg_PAM2_F5FF6_FULLRANGE_LANE==0) {
		f5_factor   = f5_factor   * 2; //2*2=4
		f6_factor   = f6_factor   * 2;
		f7_factor   = f7_factor   * 2;	
	}
	else {
		f5_factor   = f5_factor   * 3; //2*3=6
		f6_factor   = f6_factor   * 3;
		f7_factor   = f7_factor   * 3;
	}
	
	f0_res = dfe_res_f0_sumFtap[dfe_res_f0];
	vref_res = dfe_res_vref_sumFtap[dfe_res_vref];


	train.f0 = (uint8_t)((((sum_f0 + (f0_1_factor>>1))/f0_1_factor)  + half_shift) >> ctrl_max_dfe_adapt_shift);
	train.f0a = (uint8_t)((((sum_f0a + (f0_1_factor>>1))/f0_1_factor) + half_shift) >> ctrl_max_dfe_adapt_shift);
	train.f0x = (uint8_t)((((sum_f0x + (f0_1_factor>>1))/f0_1_factor)  + half_shift) >> ctrl_max_dfe_adapt_shift);
	train.f0a_max = max(train.f0a_max, max_f0(cds56.s.f0a));
#if _DBG_F0X
	train.f1_qr = (uint8_t)((((sum_f0xp1 + (f0_1_factor>>1))/f0_1_factor)  + half_shift) >> ctrl_max_dfe_adapt_shift);
	train.fn3 = (uint8_t)((((sum_f0xn3 + (f0_1_factor>>1))/f0_1_factor)  + half_shift) >> ctrl_max_dfe_adapt_shift);
	train.fn4 = (uint8_t)((((sum_f0xn4 + (f0_1_factor>>1))/f0_1_factor)  + half_shift) >> ctrl_max_dfe_adapt_shift);
	train.fn5 = (uint8_t)((((sum_f0xn5 + (f0_1_factor>>1))/f0_1_factor)  + half_shift) >> ctrl_max_dfe_adapt_shift);
#endif

	//train.f0k = (uint8_t)((((combine_f0(cds56.s.f0k) + (f0d_factor>>1))/f0d_factor) + half_shift) >> ctrl_max_dfe_adapt_shift);
	//train.eo = (uint8_t)((((combine_f0(cds56.s.f0d) + (f0d_factor>>1))/f0d_factor) + half_shift) >> ctrl_max_dfe_adapt_shift);
	train.eo = (uint8_t)((((sum_f0d + (f0d_factor>>1))/f0d_factor)  + half_shift) >> ctrl_max_dfe_adapt_shift);
	train.f0k = (uint8_t)((((sum_f0k + (f0d_factor>>1))/f0d_factor)  + half_shift) >> ctrl_max_dfe_adapt_shift);


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

	#ifdef _SERDES_BUILD
	if( sum_vref_top >= 0 ) sum_vref_top  = (((sum_vref_top + (vref_factor >>1))/vref_factor) + half_shift);
	else sum_vref_top  = (((sum_vref_top - (vref_factor >>1))/vref_factor) - half_shift);
	train_vref_top = (int8_t) (sum_vref_top >> ctrl_max_dfe_adapt_shift);

	//if( sum_vref_mid >= 0 ) sum_vref_mid  = (((sum_vref_mid + (vref_factor >>1))/vref_factor) + half_shift);
	//else sum_vref_mid  = (((sum_vref_mid - (vref_factor >>1))/vref_factor) - half_shift);
	//sum_vref_mid  = sum_vref_mid >> ctrl_max_dfe_adapt_shift;

	if( sum_vref_bot >= 0 ) sum_vref_bot  = (((sum_vref_bot + (vref_factor >>1))/vref_factor) + half_shift);
	else sum_vref_bot  = (((sum_vref_bot - (vref_factor >>1))/vref_factor) - half_shift);
	train_vref_bot = (int8_t) (sum_vref_bot >> ctrl_max_dfe_adapt_shift);
	#endif
	
	#else //_PCIe_BUILD
	pre_calculation();
	#endif //_PCIE_BUILD
	
	//2. Fn1
    train.fn1 = train.f0 - train.f0a;
	train.fn1 = clamp(train.fn1, tag_DFE_FN1_MAX, tag_DFE_FN1_MIN );

	/* QR mode F1 zero forcing:
	 * - check if in QR mode and measuring F1 via F0X
	 * - replace train.f1 with F0X measured F1 (no true F1)  */
	if (reg_DFE_F0X_SEL_LANE_4_0 == DFE_FX_SEL_FP1) {
		if(train.f1<1)	{
			train.f1 = train.f0 - train.f0x;
			train.f1 = clamp(train.f1, tag_DFE_F1_MAX, tag_DFE_F1_MIN );
		}
	} 
	else if (reg_DFE_F0X_SEL_LANE_4_0 == DFE_FX_SEL_FN2)	{ 
    		train.fn2 = train.f0 - train.f0x;
		train.fn2 = clamp(train.fn2, tag_DFE_FN2_MAX, tag_DFE_FN2_MIN ); //-64 ~ 63
	}

    //4.eye_check_pass
	#ifndef _PCIE_BUILD
	//train.eye_check_pass = (sum_eye_check_pass>=0); /*((sum_eye_check_pass>=0)||tag_EYE_CHECK_DISABLE) && (!tag_EO_BASED||(train.eo>=tag_EYE_CHECK_EO_THRE) );*/
	train.eye_check_pass = ((sum_eye_check_pass>=0)||tag_EYE_CHECK_DISABLE) && (!tag_EO_BASED||(train.eo>=tag_EYE_CHECK_EO_THRE) );
	#endif
	
    // 5.saturate
	//sum_my_abs_fx = abs(train.f1)+abs(train.f2)+abs(train.f3)+abs(train.f4)+abs(train.f5);
	sum_my_abs_fx = 0;
	#ifdef _SERDES_BUILD
	if(!pam2_en) {
		//sum_my_abs_fx = max(abs16(sum_vref_top),abs16(sum_vref_bot)) * vref_res;
		sum_my_abs_fx = (uint16_t)((abs(train_vref_top)+abs(train_vref_bot))>>1)*vref_res;
	}
	#endif
	//sum_my_abs_fx += (int16_t) train.f0a_max * f0_res << reg_DFE_F0_RES_DOUBLE_LANE;
	sum_my_abs_fx += (int16_t) train.f0a * f0_res << reg_DFE_F0_RES_DOUBLE_LANE;
		//sum_my_abs_fx += rate_mode==QR ? ((int16_t) abs16(train.f2) * f2_res) : 0;
	//	+ (int16_t) abs16(train.f1) * f1_res
//#if _DBG_OUTER_EYE
	train.outer_eye = sum_my_abs_fx >> 5;
//#endif	
	train.oe_saturate = !tag_DFE_SATURATE_DISABLE && sum_my_abs_fx >= tag_DFE_FX_SUM_SAT_THRES; 
	train.f0a_saturate = !tag_DFE_SATURATE_DISABLE && (cds56.s.f0a_saturate || cds56.s.vref_saturate) ? 1:0;
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
	train.sumFtap = tag_SUMFTAP_EN_0 *  ((int16_t)((tag_SUMFTAP_SIGN_0<<1) -1) *  (int16_t)train.f0a * f0_res);
	train.sumFtap += tag_SUMFTAP_EN_1 * ((int16_t)((tag_SUMFTAP_SIGN_1<<1) -1) * (int16_t)train.f1 * f1_res);
	train.sumFtap += tag_SUMFTAP_EN_2 * ((int16_t)((tag_SUMFTAP_SIGN_2<<1) -1) * (int16_t)train.f2 * f2_res);
	train.sumFtap += tag_SUMFTAP_EN_3 * ((int16_t)((tag_SUMFTAP_SIGN_3<<1) -1) * (int16_t)train.f3 * f3_res);
	train.sumFtap += tag_SUMFTAP_EN_4 * ((int16_t)((tag_SUMFTAP_SIGN_4<<1) -1) * (int16_t)train.f4 * f4_res);
	train.sumFtap += tag_SUMFTAP_EN_5 * ((int16_t)((tag_SUMFTAP_SIGN_5<<1) -1) * (int16_t)train.f5 * f5_res);
	train.sumFtap += tag_SUMFTAP_EN_6 * ((int16_t)((tag_SUMFTAP_SIGN_6<<1) -1) * (int16_t)train.f6 * f6_res);
	train.sumFtap += tag_SUMFTAP_EN_7 * ((int16_t)((tag_SUMFTAP_SIGN_7<<1) -1) * (int16_t)train.f7 * f7_res);

#if 0
	train.boost = (uint16_t)abs16(train.sumFtap - ((((int8_t)tag_SUMF_BOOST_TARGET_K) * (uint16_t)train.f0a * dfe_res_f0_sumFtap[dfe_res_f0] )>>4) - tag_SUMF_BOOST_TARGET_C);
	train.boost = clamp16(train.boost, tag_RX_BOOST_MAX, tag_RX_BOOST_MIN);
#else
   /*train.boost = (uint16_t) abs16(
			 train.sumFtap -
			 (((int8_t)tag_SUMF_BOOST_TARGET_K) * ((uint16_t)train.f0a * dfe_res_f0_sumFtap[dfe_res_f0]*3 )>>tag_SUMF_BOOST_TARGET_K_SCALE) 
			 - sumf_boost_target_c);*/
	//if (rate_mode==QR) {
	//	train.boost = abs(train.f1 - lnx_SUMF_BOOST_TARGET_C_LANE_7_0);
	//}
	//else 
	{

		//Boost = abs ( sumFtap/64 +(f0a*f0a_res*3/64) * (K/64) - C )
		train.boost = 0;
		train.boost += train.sumFtap >> tag_SUMF_BOOST_TARGET_K_SCALE;
		train.boost += ((((uint16_t)(train.f0a << reg_DFE_F0_RES_DOUBLE_LANE) * f0_res * (pam2_en? 1:3))
					>> tag_SUMF_BOOST_TARGET_K_SCALE) * tag_SUMF_BOOST_TARGET_K) >> tag_SUMF_BOOST_TARGET_K_SCALE;
		train.boost -= tag_SUMF_BOOST_TARGET_C;
		train.boost = abs16(train.boost);
		train.boost = clamp16(train.boost, tag_RX_BOOST_MAX, tag_RX_BOOST_MIN); //8191~0
	}
#endif

}

/****************************************
 * LEVEL FFE Calculation
*****************************************/
static void level_ffe() {

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

#ifndef _PCIE_BUILD
__code bool en_p[][NUM_PATH] = {
	{1, 1}, // HR (rate_mode==0) //even, odd
	{0, 1}, // FR (rate_mode==1) //even, odd
};

static uint16_t combine_f0(const uint8_t f0[][NUM_DS][NUM_TMB])   {
	const bool en_ds[] = {adapt_data_en, adapt_slicer_en};
	uint8_t ds_idx, p_idx, tmb_idx;
	uint16_t sum = 0;

	for (ds_idx = 0; ds_idx < NUM_DS; ds_idx++) {
		if (en_ds[ds_idx]) {
			for (p_idx = 0; p_idx < NUM_PATH; p_idx++) {
				if (en_p[rate_mode][p_idx]) {
					for (tmb_idx = 0; tmb_idx < NUM_TMB; tmb_idx++){
						if(pam2_en && tmb_idx!=1) continue;	
						sum += f0[p_idx][ds_idx][tmb_idx];
					}
				}
			}
		}
	}

	return sum;
}

static uint8_t max_f0(const uint8_t f0[][NUM_DS][NUM_TMB])   {
	const bool en_ds[] = {adapt_data_en, adapt_slicer_en};
	uint8_t ds_idx, p_idx, tmb_idx;
	uint8_t maximum = 0;

	for (ds_idx = 0; ds_idx < NUM_DS; ds_idx++) {
		if (en_ds[ds_idx]) {
			for (p_idx = 0; p_idx < NUM_PATH; p_idx++) {
				if (en_p[rate_mode][p_idx]) {
					for (tmb_idx = 0; tmb_idx < NUM_TMB; tmb_idx++){
						if(pam2_en && tmb_idx!=1) continue;	
						maximum = max(maximum, f0[p_idx][ds_idx][tmb_idx]);
					}
				}
			}
		}
	}

	return maximum;
}

#ifdef _SERDES_BUILD
static void combine_vref_f(const dfe_2c_t *dfe_2c, int16_t *tmb)  {
	uint8_t p_idx, tmb_idx;

	for (tmb_idx = 0; tmb_idx < NUM_TMB; tmb_idx++) tmb[tmb_idx] = 0;	
	if (en_p[rate_mode][0]) {//even
		tmb[1] += dfe_2c->vref_mid_e;
		tmb[2] += dfe_2c->vref_top_e;
		tmb[0] += dfe_2c->vref_bot_e;
	}
	if (en_p[rate_mode][1]) {//odd
		tmb[2] += dfe_2c->vref_top_o;
		tmb[1] += dfe_2c->vref_mid_o;
		tmb[0] += dfe_2c->vref_bot_o;
	}
}
#endif

static int16_t combine_splr_tap_f(dfe_2c_t *dfe_2c, uint8_t tap_id)  {
	int16_t sum = 0;

	if (en_p[rate_mode][0]) { //0=EVEN
		switch(tap_id) {
		case 1:
			if(adapt_slicer_en) {
				if(!pam2_en) {
					sum += (dfe_2c->f1_s_top_e + dfe_2c->f1_s_bot_e);
				}	
				sum += dfe_2c->f1_s_mid_e;
			}
			if(adapt_data_en) {
				if(!pam2_en) {
					sum += (dfe_2c->f1_d_top_e + dfe_2c->f1_d_bot_e);
				}
				sum += dfe_2c->f1_d_mid_e;
			}
			break;
		case 2:
			if(adapt_slicer_en) {
				if(!pam2_en) {
					sum += dfe_2c->f2_s_top_e + dfe_2c->f2_s_bot_e;
				}
				sum += dfe_2c->f2_s_mid_e;
			}	
			if(adapt_data_en) {
				if(!pam2_en) {
					sum += dfe_2c->f2_d_top_e + dfe_2c->f2_d_bot_e;
				}
				sum += dfe_2c->f2_d_mid_e;
			}	
			break;
		}
	}
	if (en_p[rate_mode][1]) { //1=ODD
		switch(tap_id) {
		case 1:
			if(adapt_slicer_en) {
				if(!pam2_en) {
					sum += (dfe_2c->f1_s_top_o + dfe_2c->f1_s_bot_o);
				}	
				sum += dfe_2c->f1_s_mid_o;
			}
			if(adapt_data_en) {
				if(!pam2_en) {
					sum += (dfe_2c->f1_d_top_o + dfe_2c->f1_d_bot_o);
				}
				sum += dfe_2c->f1_d_mid_o;
			}
			break;
		case 2:
			if(adapt_slicer_en) {
				if(!pam2_en) {
					sum += dfe_2c->f2_s_top_o + dfe_2c->f2_s_bot_o;
				}
				sum += dfe_2c->f2_s_mid_o;
			}	
			if(adapt_data_en) {
				if(!pam2_en) {
					sum += dfe_2c->f2_d_top_o + dfe_2c->f2_d_bot_o;
				}
				sum += dfe_2c->f2_d_mid_o;
			}	
			break;
		}
	}

	return sum;
}

static int16_t combine_tmb_tap_f(const dfe_2c_t *dfe_2c, uint8_t tap_id)   {
	int16_t sum = 0;

	if (en_p[rate_mode][0]) { //0=EVEN
		switch(tap_id) {
		case 3:
			sum += dfe_2c->f3_top_e + dfe_2c->f3_mid_e + dfe_2c->f3_bot_e;
			break;
		case 4:
			sum += dfe_2c->f4_top_e + dfe_2c->f4_mid_e + dfe_2c->f4_bot_e;
			break;
		}
	}
	if (en_p[rate_mode][1]) { //1=ODD
		switch(tap_id) {
		case 3:
			sum += dfe_2c->f3_top_o + dfe_2c->f3_mid_o + dfe_2c->f3_bot_o;
			break;
		case 4:
			sum += dfe_2c->f4_top_o + dfe_2c->f4_mid_o + dfe_2c->f4_bot_o;
			break;
		}
	}

	return sum;
}

static int16_t combine_ml_tap_f(const dfe_2c_t *dfe_2c, uint8_t tap_id)  {
	int16_t sum = 0;
	bool nofullrange = pam2_en && reg_PAM2_F5FF6_FULLRANGE_LANE==0;
	
	if (en_p[rate_mode][0])	{
		switch(tap_id) {
		case 5:
			sum += dfe_2c->f5_msb_e<<1; 
			if(nofullrange) break;
			sum += dfe_2c->f5_lsb_e;
			break;     
		case 6:                           
			sum += dfe_2c->f6_msb_e<<1; 
			if(nofullrange) break;
			sum += dfe_2c->f6_lsb_e;
			break;                        
		case 7:                           
			sum += dfe_2c->f7_msb_e<<1;
 			if(nofullrange) break;
			sum += dfe_2c->f7_lsb_e;
			break;                        
		case 8:                           
			sum += dfe_2c->f8_msb_e<<1; 			
		
			if(nofullrange) break;
			sum += dfe_2c->f8_lsb_e;
			break;                        
		case 9:                           
			sum += dfe_2c->f9_msb_e<<1; 			
			if(nofullrange) break;
			sum += dfe_2c->f9_lsb_e;
			break;                        
		case 10:                          
			sum += dfe_2c->f10_msb_e<<1; 			
			if(nofullrange) break;
			sum += dfe_2c->f10_lsb_e;
			break;
		}
	}
	if (en_p[rate_mode][1]) {
		switch(tap_id) {
		case 5:
			sum += dfe_2c->f5_msb_o<<1; 
			if(nofullrange) break;
			sum += dfe_2c->f5_lsb_o;
			break;                       
		case 6:                           
			sum += dfe_2c->f6_msb_o<<1;
			if(nofullrange) break;
			sum += dfe_2c->f6_lsb_o;
			break;                        
		case 7:                           
			sum += dfe_2c->f7_msb_o<<1; 
			if(nofullrange) break;
			sum += dfe_2c->f7_lsb_o;
			break;                        
		case 8:                           
			sum += dfe_2c->f8_msb_o<<1; 
			if(nofullrange) break;
			sum += dfe_2c->f8_lsb_o;
			break;                        
		case 9:                           
			sum += dfe_2c->f9_msb_o<<1; 
			if(nofullrange) break;
			sum += dfe_2c->f9_lsb_o;
			break;                        
		case 10:                          
			sum += dfe_2c->f10_msb_o<<1; 
			if(nofullrange) break;
			sum += dfe_2c->f10_lsb_o;
			break;
		}
	}

	return sum;
}

static void cds_calculation(void) { 
	int16_t sum_vref[NUM_TMB];
	uint8_t rate_shift[] = {0, 1}; // {HR, FR}
	uint8_t idx, rate_idx;

	sum_f0a += combine_f0(cds56.s.f0a);
	sum_f0d += combine_f0(cds56.s.f0d);
	sum_f0d_left += combine_f0(cds56.s.f0d_left);
	sum_f0d_right += combine_f0(cds56.s.f0d_right);
	sum_f0 += combine_f0(cds56.s.f0b);
	sum_f0k += combine_f0(cds56.s.f0k);
	sum_f0x += combine_f0(cds56.s.f0x);

	#ifdef _SERDES_BUILD
	combine_vref_f(&cds56.f.dfe_2c, sum_vref);
	sum_vref_bot += sum_vref[0];
	sum_vref_mid += sum_vref[1];
	sum_vref_top += sum_vref[2];
	#endif
	
	for (idx = 1; idx < 8; idx++) {
		rate_idx = idx << rate_shift[rate_mode];
		
		if (rate_idx < 3) {
			// Sampler Taps f[1:2]
			sum_f[idx] += combine_splr_tap_f(&cds56.f.dfe_2c, rate_idx);
		}
		else if (rate_idx < 5) {
			// Shared TOP/MID/BOT Taps f[3:4]
			sum_f[idx] += combine_tmb_tap_f(&cds56.f.dfe_2c, rate_idx);
		}
		else {
			// Shared MSB/LSB taps f[10:2:20]
			sum_f[idx] += combine_ml_tap_f(&cds56.f.dfe_2c, rate_idx);
		}
	}

	sum_eye_check_pass += ((cds56.f.eye_check_pass << 1) -1);
}

#else // _PCIE_BUILD
static void pre_calculation(void) {

	uint8_t val;
	int16_t sum;
	bool data_en, slicer_en;

	data_en = 0;
	slicer_en = 0;	
	data_en = ((!adapt_data_en && !adapt_slicer_en) || adapt_data_en)? 1: 0;
	slicer_en = ((!adapt_data_en && !adapt_slicer_en) || adapt_slicer_en)? 1: 0;

	f1_res = dfe_res_f1_sumFtap[dfe_f1_res_sel];
	f2_res = dfe_res_f2_sumFtap[dfe_f2_res_sel];
	f3_res = dfe_res_f3to4_sumFtap[dfe_f34_res_sel];
	f4_res = dfe_res_f3to4_sumFtap[dfe_f34_res_sel];
	f5_res = dfe_res_f5to7_sumFtap_nofullrange[dfe_f567_res_sel]; 
	f6_res = dfe_res_f5to7_sumFtap_nofullrange[dfe_f567_res_sel];
	f7_res = dfe_res_f5to7_sumFtap_nofullrange[dfe_f567_res_sel];
	
	train.f0a = 0;
	train.f0 = 0;
	train.f0x = 0;
	train.eo = 0;
	train.f1 = 0;
	val = 0;
	if(data_en) {
		train.f0a = ( cds56.f.f0a.d_mid_e + cds56.f.f0a.d_mid_o ) >> 1;
		train.f0 = ( cds56.f.f0b.d_mid_e + cds56.f.f0b.d_mid_o ) >> 1;
		train.f0x = ( cds56.f.f0x.d_mid_e + cds56.f.f0x.d_mid_o ) >> 1;
		train.eo = ( cds56.f.f0d.d_mid_e + cds56.f.f0d.d_mid_o ) >> 1;
		val = max( cds56.f.f0a.d_mid_e, cds56.f.f0a.d_mid_o );
		train.f1 = (cds56.f.dfe_2c.f1_d_mid_e + cds56.f.dfe_2c.f1_d_mid_o) >> 1;
		train.f2 = (cds56.f.dfe_2c.f2_d_mid_e + cds56.f.dfe_2c.f2_d_mid_o) >> 1;
	}	
	if(slicer_en) {
		train.f0a += ( cds56.f.f0a.s_mid_e + cds56.f.f0a.s_mid_o ) >> 1;
		train.f0 += ( cds56.f.f0b.s_mid_e + cds56.f.f0b.s_mid_o ) >> 1;
		train.f0x += ( cds56.f.f0x.s_mid_e + cds56.f.f0x.s_mid_o ) >> 1;
		train.eo += ( cds56.f.f0d.s_mid_e + cds56.f.f0d.s_mid_o ) >> 1;
		val = max(cds56.f.f0a.s_mid_e, val);
		val = max(cds56.f.f0a.s_mid_o, val);
		train.f1 += (cds56.f.dfe_2c.f1_s_mid_e + cds56.f.dfe_2c.f1_s_mid_o) >> 1;
		train.f2 += (cds56.f.dfe_2c.f2_s_mid_e + cds56.f.dfe_2c.f2_s_mid_o) >> 1;
	}	
	if(data_en && slicer_en) {
		train.f0a >>= 1;
		train.f0 >>= 1;
		train.f0x >>= 1; 
		train.eo >>= 1;
		train.f1 >>= 1;
		train.f2 >>= 1;
	}	
	
	train.f0a_max = val;
	train.f3 = (cds56.f.dfe_2c.f3_mid_e + cds56.f.dfe_2c.f3_mid_o ) >> 1; 
	train.f4 = (cds56.f.dfe_2c.f4_mid_e + cds56.f.dfe_2c.f4_mid_o ) >> 1; 
	train.f5 = (cds56.f.dfe_2c.f5_msb_e + cds56.f.dfe_2c.f5_msb_o) >> 1;
	train.f6 = (cds56.f.dfe_2c.f6_msb_e + cds56.f.dfe_2c.f5_msb_o) >> 1;
	train.f7 = (cds56.f.dfe_2c.f7_msb_e + cds56.f.dfe_2c.f5_msb_o) >> 1;

	train.eye_check_pass = cds56.f.eye_check_pass;
}

#endif //_PCIE_BUILD


