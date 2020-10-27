/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file dll_cal.c
* \purpose DLL calibration
* \History
*	10/15/2015 Heejeong Ryu		Initial 
*   11/19/2015 Heejeong Ryu     No need analog update clock by Zhendong
*    1/31/2017 Heejeong Ryu     VREF_RXDLL tbl updated by design to cover more wide range
*/
#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK3
#pragma constseg BANK3
#endif
//#define FORMULA_ENABLED

/**
 * \module DLL_CAL Top
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input:  
 *    Output: 
*/
#if 0





void dll_cal(void) BANKING_CTRL {

	dll_comp_cal();
	reg_VDDA_RXDLL_HALF_EN_LANE = 1;
	dll_vdda_cal(DLL_VDDA_STEP);
	reg_VDDA_RXDLL_HALF_EN_LANE = 0;

	dll_gm_cal();

	reg_VDDA_RXDLL_HALF_EN_LANE = 1;
	dll_vdda_cal(DLL_PHASE_STEP);
	reg_VDDA_RXDLL_HALF_EN_LANE = 0;
	
	dll_eom_vdda_cal(DLL_VDDA_STEP);
	dll_eom_gm_cal();
	dll_eom_vdda_cal(DLL_PHASE_STEP);

}

/**
 * \module DLL_COMP Calibration
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input:  
 *    Output: 
*/
#define DLL_CAL_CMP_OUT		reg_ANA_RX_DLL_CAL_CMP_OUT_RD_LANE
#define DLL_CMP_CAL_EN		reg_DLL_CMP_CAL_EN_LANE
#define DLL_CMP_OFFSET		reg_DLL_CMP_OFFSET_LANE_3_0
#define rate				rx_pll_rate//cmx_PLL_RATE_SEL_3_0	

void dll_comp_cal( void ) BANKING_CTRL {

	uint8_t  dir, cmpout;
	
	lnx_DLL_CAL_DONE_LANE = 0;
	//lnx_DLL_CAL_PASS_LANE = 0;

	if( LOAD_CAL_ON || cmx_RXDLL_CAL_EXT_EN) {	
		DLL_CMP_OFFSET = lnx_CAL_DLL_CMP_OFFSET_LANE_7_0;	
		goto skip_out;
	}
	
	PHY_STATUS = ST_DLL_COMP_CAL;

	lnx_DLL_CAL_PASS_LANE = 1;
	
	DLL_CMP_CAL_EN = 1;
	DLL_CMP_OFFSET = 0x08;
	delay(Tus);
	dir = DLL_CAL_CMP_OUT; cmpout = dir;
	
	do {
		
		if( cmpout == 0) DLL_CMP_OFFSET--; 
		else DLL_CMP_OFFSET++; 				
		delay(Tus);
	
		cmpout = DLL_CAL_CMP_OUT;
		if(dir != cmpout) break;
	
		if (DLL_CMP_OFFSET == 0x0f ||  DLL_CMP_OFFSET == 0 ) {
			lnx_DLL_CAL_PASS_LANE = 0;
			break;
		}
	
	} while(1);

	DLL_CMP_CAL_EN = 0;
	lnx_CAL_DLL_CMP_OFFSET_LANE_7_0 = DLL_CMP_OFFSET; 

skip_out:
	lnx_DLL_CAL_DONE_LANE = 1;
	
}

/**
 * \module DLL_GM Calibration (dll phase)
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input:  TSensor Data
 *    Output: 
*/
#define DLL_PD_SEL			reg_DLL_PD_SEL_LANE_1_0 
#define DLL_FREQ_SEL		reg_DLL_FREQ_SEL_LANE_1_0
#define DLL_GMSEL			reg_DLL_GMSEL_LANE_2_0

void dll_gm_cal( void ) BANKING_CTRL {
	uint8_t dir, pre_dll_gmsel, loop_cnt, cmpout;
	
	PHY_STATUS = ST_DLL_GM_CAL;
	
	lnx_DLL_GM_CAL_DONE_LANE = 0;
	//lnx_DLL_GM_CAL_PASS_LANE = 0;

	if(cmx_RXDLL_CAL_EXT_EN || LOAD_CAL_ON) {	
		DLL_GMSEL = lnx_cal_dll_gmsel[rate];	
		lnx_DLL_GM_CAL_DONE_LANE = 1;
		return;
	}

	lnx_DLL_GM_CAL_PASS_LANE = 1;
	
	DLL_PD_SEL = 0;
	
	DLL_GMSEL = 0x07;
	delay(Tus);
	
	dir = DLL_CAL_CMP_OUT; cmpout = dir;
	loop_cnt = 8;

	do {
		pre_dll_gmsel = DLL_GMSEL;
	
		if( cmpout == 0 )  {
			if(DLL_GMSEL>lnx_DLL_GMSEL_MIN_LANE_3_0) DLL_GMSEL--;
		}	
		else {
			if(DLL_GMSEL<7) DLL_GMSEL++;
		}
		delay(Tus);
		
		cmpout = DLL_CAL_CMP_OUT;
		if(dir != cmpout) {
			DLL_GMSEL = pre_dll_gmsel;
			break;
		}

		if( DLL_GMSEL==0x07 || DLL_GMSEL==0x03 ) {
			lnx_DLL_GM_CAL_PASS_LANE = 0;
			break;
		}
	} while (loop_cnt-->0);
	
	lnx_DLL_GM_CAL_DONE_LANE = 1;
	
	//save
	lnx_cal_dll_gmsel[rate] = (DLL_GMSEL & 0x7) | 0x00;

}

/**
 * \module DLL_VDDA CAL
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input:  
 *    Output: 
*/
#define VDDA_MIN		0x00	
#define VDDA_MAX		0x2b

__code int16_t tsen_tb[] = { -376,  //-59 ~ -40
                             -309, //-39 ~ -20
                             -241,
                             -174,
                             -106,
                             -44,
                              29};
/* 
__code int16_t tsen_tb[] = { -434  //-59 ~ -40
							 -384, //-39 ~ -20
							 -334,
							 -284,
							 -234,
							 -184,
							 -134,
							 -84,
							 -34,
							 16	};
*/
                          
/* FFP
__code int16_t tsen_tb[] = { -409, //-39 ~ -30'
                             -385, //-29 ~ -20
                             -359, //:
							 -334,                         
							 -309,                         
							 -284,                         
							 -259,                         
							 -234,                         
							 -209,                         
							 -184,                         
							 -159,                          
							 -134,                          
							 -109,                          
							 -84,                           
							 -59,                           
							 -34 };                          
*/
void set_sellv_rxdll_ch(uint8_t val) BANKING_CTRL {
	switch(mcuid) {
	case MCU_LANE1:	reg_SELLV_RXDLL_CH1_5_0 = val; break;
	case MCU_LANE2:	reg_SELLV_RXDLL_CH2_5_0 = val; break;
	case MCU_LANE3:	reg_SELLV_RXDLL_CH3_5_0 = val; break;
	default:	    reg_SELLV_RXDLL_CH0_5_0 = val; break;
	}

}						

uint8_t get_sellv_rxdll_ch(void) BANKING_CTRL {
	uint8_t val;
	switch(mcuid) {
	case MCU_LANE1:	val = reg_SELLV_RXDLL_CH1_5_0; break;
	case MCU_LANE2:	val = reg_SELLV_RXDLL_CH2_5_0; break;
	case MCU_LANE3:	val = reg_SELLV_RXDLL_CH3_5_0; break;
	default:	    val = reg_SELLV_RXDLL_CH0_5_0; break;
	}

	return val;
}	  
							 
void dll_vdda_cal( uint8_t mode ) BANKING_CTRL {
	uint8_t loopcnt, cnt_num, i, vref_rxdll_sel_ofst, val, dir, cmpout;
	int16_t tsen_dat;
	uint16_t cmp_out_dir;
	int32_t temp_cel, vref_from_temp;
	
	PHY_STATUS = ST_DLL_VDDA_CAL;

	lnx_DLL_VDATA_CAL_DONE_LANE = 0;
	//lnx_DLL_VDATA_CAL_PASS_LANE = 1;

	if( cmx_CAL_DONE==1 ) {	
		
		if( LOAD_CAL_ON ) {
			val = lnx_cal_vdda_dll_sel[PWR + cmx_RXDLL_CAL_CONT_CUR_LOAD_EN][rx_pll_rate];		
			set_sellv_rxdll_ch(val);		
			goto skip_out;	
		}
		else if( cmx_RXDLL_CAL_CONT_EN==0 ) goto skip_out;			
		
	}
	else {
		if( cmx_RXDLL_CAL_EXT_EN ) {
			val = lnx_cal_vdda_dll_sel[PWR][rx_pll_rate];
			set_sellv_rxdll_ch(val);
			goto skip_out; 
		}	
	}

	lnx_DLL_VDATA_CAL_PASS_LANE = 1;

	if( mode == DLL_VDDA_STEP ) {
		DLL_PD_SEL = 0x02;  
		cmp_out_dir = 1;  //1:dec, 0:inc
		//reg_MCU_DEBUGF_LANE_7_0 = 0;
	}
	else { //DLL_PHASE_STEP
		DLL_PD_SEL = 0x00;  
		cmp_out_dir = 0;  //0:dec, 1:inc
	}	

	if(lnx_DLL_SELLV_RXDLL_FINAL_STEP_NUM_SEL_LANE_1_0 == 0x0) cnt_num = 16;
	else if(lnx_DLL_SELLV_RXDLL_FINAL_STEP_NUM_SEL_LANE_1_0 == 0x1) cnt_num = 24;
	else if(lnx_DLL_SELLV_RXDLL_FINAL_STEP_NUM_SEL_LANE_1_0 == 0x2) cnt_num = 32;
	else cnt_num = 48;
	
	if( lnx_DLL_VDDA_TRACKING_ON_LANE == 0 && mode == DLL_VDDA_STEP) { 		
	#ifdef ROM_REPLACEMENT
	tsen_dat = read_tsen_01();
	#else
	tsen_dat = read_tsen();
	#endif
#ifndef FORMULA_ENABLED
		if( DLL_FREQ_SEL == 0x7 ) {
                	vref_rxdll_sel_ofst = 2;
		}	
		else if( DLL_FREQ_SEL == 0x5 ) {
                	vref_rxdll_sel_ofst = 5;
		}	
		else if( DLL_FREQ_SEL == 0x4 ) {
                	vref_rxdll_sel_ofst = 6;
		}	
		else {
                	vref_rxdll_sel_ofst = 3;
		}	
		for(i = 0; i < 7; i++) {
			if(tsen_dat < tsen_tb[i]) break;
		}
		
		VREF_RXDLL_SEL = i + vref_rxdll_sel_ofst; 
		set_sellv_rxdll_ch(i+0x0d);
#else
		temp_cel = (((int32_t)tsen_dat*394) + 128900 + 500)/1000;
		vref_from_temp = (int32_t)rxdll_temp_b_lane*250 + ((int32_t)rxdll_temp_a_lane * temp_cel);
		vref_from_temp = (vref_from_temp - 36000 + 500)/1000;
		VREF_RXDLL_SEL = (uint8_t)vref_from_temp;
		set_sellv_rxdll_ch(VREF_RXDLL_SEL*2 + 7);
#endif

		delay(Tus);
		loopcnt = 128;
	}
	else {
		val = lnx_cal_vdda_dll_sel[CONT][rx_pll_rate];
		set_sellv_rxdll_ch(val);
		delay(Tus);
		loopcnt = cnt_num;
    }

   val = get_sellv_rxdll_ch();
   
	dir = DLL_CAL_CMP_OUT; cmpout = dir;
	do {

		if( cmpout == cmp_out_dir ) {
			if( val>VDDA_MIN ) 	val--;
		}	
		else {
			if( val<VDDA_MAX ) 	val++;
		}

		/*if( cmpout == cmp_out_dir ) {
			if( val<VDDA_MAX ) 	val++;
			//if( val>VDDA_MIN ) 	val--;
		}
		else {
			if( val>VDDA_MIN ) 	val--;
			//if( val<VDDA_MAX ) 	val++;
		}*/

		set_sellv_rxdll_ch(val);
		
		if( val==VDDA_MIN || val==VDDA_MAX )
		{
			lnx_DLL_VDATA_CAL_PASS_LANE = 0;
			break;
		}

		if( lnx_DLL_VDDA_TRACKING_ON_LANE == 1 ) break;

		delay(Tus);
		cmpout = DLL_CAL_CMP_OUT;
		if(mode == DLL_VDDA_STEP && dir != cmpout) break;
		
	} while (loopcnt-->0);

	if(lnx_DLL_VDDA_TRACKING_ON_LANE==0)
		lnx_cal_vdda_dll_sel[PWR][rx_pll_rate] = val;
	lnx_cal_vdda_dll_sel[CONT][rx_pll_rate] = val;
		
	
skip_out:
	lnx_DLL_VDATA_CAL_DONE_LANE = 1;	

}


/**
 * \module DLL_EOM_GM Calibration (dll_eom phase)
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input:  
 *    Output: 
*/
#define EOM_DLL_FREQ_SEL			reg_EOM_DLL_FREQ_SEL_LANE_1_0
#define EOM_DLL_GMSEL               reg_EOM_DLL_GMSEL_LANE_2_0
void dll_eom_gm_cal( void ) BANKING_CTRL {
	uint8_t dir, pre_dll_gmsel, loop_cnt, cmpout;
	
	lnx_DLL_EOM_GM_CAL_DONE_LANE = 0;

	if(cmx_EOM_DLL_CAL_EXT_EN || LOAD_CAL_ON) {	
		EOM_DLL_GMSEL = lnx_cal_dll_eom_gmsel[rate];	
		lnx_DLL_EOM_GM_CAL_DONE_LANE = 1;
		return;
	}
	
	PHY_STATUS = ST_DLL_EOM_GM_CAL;
	lnx_DLL_EOM_GM_CAL_PASS_LANE = 1;

	DLL_PD_SEL = 1;
	
//	EOM_DLL_FREQ_SEL = reg_DLL_FREQ_SEL_LANE_1_0; 
	
	EOM_DLL_GMSEL = 0x07;
	delay(Tus);

	dir = DLL_CAL_CMP_OUT; cmpout = dir;
	loop_cnt = 8;
	do {
		pre_dll_gmsel = EOM_DLL_GMSEL;

		if( cmpout == 0 )  {
			if(EOM_DLL_GMSEL>lnx_DLL_EOM_GMSEL_MIN_LANE_3_0) EOM_DLL_GMSEL--;
		}	
		else {
			if(EOM_DLL_GMSEL<7) EOM_DLL_GMSEL++;
		}

		delay(Tus);

		cmpout = DLL_CAL_CMP_OUT;
		if(dir != cmpout) {
			EOM_DLL_GMSEL = pre_dll_gmsel;
			break;
		}		
		if( EOM_DLL_GMSEL==0x07 || EOM_DLL_GMSEL==0x03 ) {
			lnx_DLL_EOM_GM_CAL_PASS_LANE = 0;
			break;
		}
	} while (loop_cnt-->0);
	
	lnx_DLL_EOM_GM_CAL_DONE_LANE = 1;
	
	//save
	lnx_cal_dll_eom_gmsel[rate] = (EOM_DLL_GMSEL & 0x7) | 0x00;	
}

void set_sellv_rxeomdll_ch(uint8_t val) BANKING_CTRL {
	switch(mcuid) {
	case MCU_LANE1:	reg_SELLV_RXEOMDLL_CH1_5_0 = val; break;
	case MCU_LANE2:	reg_SELLV_RXEOMDLL_CH2_5_0 = val; break;
	case MCU_LANE3:	reg_SELLV_RXEOMDLL_CH3_5_0 = val; break;
	default:	    reg_SELLV_RXEOMDLL_CH0_5_0 = val; break;
	}

}						

uint8_t get_sellv_rxeomdll_ch(void) BANKING_CTRL {
	uint8_t val;
	switch(mcuid) {
	case MCU_LANE1:	val = reg_SELLV_RXEOMDLL_CH1_5_0; break;
	case MCU_LANE2:	val = reg_SELLV_RXEOMDLL_CH2_5_0; break;
	case MCU_LANE3:	val = reg_SELLV_RXEOMDLL_CH3_5_0; break;
	default:	    val = reg_SELLV_RXEOMDLL_CH0_5_0; break;
	}

	return val;
}	  

/**
 * \module DLL_EOM_VDDA CAL
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input:  
 *    Output: 
*/
#define VDDA_EOM_MIN		0x00	
#define VDDA_EOM_MAX		0x2b
void dll_eom_vdda_cal( uint8_t mode ) BANKING_CTRL {
	int16_t tsen_dat;
	uint8_t i,vref_rxdll_sel_ofst,loopcnt,cnt_num,val,dir,cmpout;
	uint16_t cmp_out_dir;
	int32_t temp_cel, vref_from_temp;

	PHY_STATUS = ST_DLL_EOM_VDDA_CAL;
	
	lnx_DLL_EOM_VDATA_CAL_DONE_LANE = 0;
	//lnx_DLL_EOM_VDATA_CAL_PASS_LANE = 1;

	if( cmx_CAL_DONE==1 ) {	
		
		if( LOAD_CAL_ON ) {
			val = lnx_cal_vdda_dll_eom_sel[PWR + cmx_EOM_DLL_CAL_CONT_CUR_LOAD_EN][rx_pll_rate];		
			set_sellv_rxeomdll_ch(val);		
			goto skip_out;	
		}
		else if( cmx_EOM_DLL_CAL_CONT_EN==0 ) goto skip_out;			
		
	}
	else {
		if( cmx_EOM_DLL_CAL_EXT_EN ) {
			val = lnx_cal_vdda_dll_eom_sel[PWR][rx_pll_rate];
			set_sellv_rxeomdll_ch(val);
			goto skip_out; 
		}	
	}
	
	lnx_DLL_EOM_VDATA_CAL_PASS_LANE = 1;

	if( mode == DLL_VDDA_STEP ) {
		DLL_PD_SEL = 0x03;  
		cmp_out_dir = 1;  //1:dec, 0:inc
	}
	else { //DLL_PHASE_STEP
		DLL_PD_SEL = 0x01;  
		cmp_out_dir = 0;  //0:dec, 1:inc
	}	

	if(lnx_DLL_SELLV_RXEOMDLL_FINAL_STEP_NUM_SEL_LANE_1_0 == 0x0) cnt_num = 16;
	else if(lnx_DLL_SELLV_RXEOMDLL_FINAL_STEP_NUM_SEL_LANE_1_0 == 0x1) cnt_num = 24;
	else if(lnx_DLL_SELLV_RXEOMDLL_FINAL_STEP_NUM_SEL_LANE_1_0 == 0x2) cnt_num = 32;
	else cnt_num = 48;
	
	if( lnx_DLL_VDDA_TRACKING_ON_LANE==0 && mode == DLL_VDDA_STEP) { 
	#ifdef ROM_REPLACEMENT
	tsen_dat = read_tsen_01();
	#else
	tsen_dat = read_tsen();
	#endif
#ifndef FORMULA_ENABLED
		if( EOM_DLL_FREQ_SEL == 0x7 ) {
                	vref_rxdll_sel_ofst = 2;
		}	
		else if( EOM_DLL_FREQ_SEL == 0x5 ) {
                	vref_rxdll_sel_ofst = 5;
		}	
		else if( EOM_DLL_FREQ_SEL == 0x4 ) {
                	vref_rxdll_sel_ofst = 6;
		}	
		else {
                	vref_rxdll_sel_ofst = 3;
		}	
		for(i = 0; i < 7; i++) {
			if(tsen_dat < tsen_tb[i]) break;
		}
		
		VREF_RXDLL_SEL = i + vref_rxdll_sel_ofst; 
		set_sellv_rxeomdll_ch(i+0x0d);
#else
		temp_cel = (((int32_t)tsen_dat*394) + 128900 + 500)/1000;
		vref_from_temp = (int32_t)rxdll_temp_b_lane*250 + ((int32_t)rxdll_temp_a_lane * temp_cel);
		vref_from_temp = (vref_from_temp - 36000 + 500)/1000;
		VREF_RXDLL_SEL = (uint8_t)vref_from_temp;
		set_sellv_rxeomdll_ch(VREF_RXDLL_SEL*2 + 7);
#endif

		delay(Tus);
		loopcnt = cnt_num;
	}

    val = get_sellv_rxeomdll_ch();

	dir = DLL_CAL_CMP_OUT; cmpout = dir;
	do {

		if( cmpout == cmp_out_dir ) {
			if( val>VDDA_EOM_MIN ) 	val--;
		}	
		else {
			if( val<VDDA_EOM_MAX ) 	val++;
		}
		set_sellv_rxeomdll_ch(val);
		
		if( val==VDDA_EOM_MIN || val==VDDA_EOM_MAX )
		{
			lnx_DLL_EOM_VDATA_CAL_PASS_LANE = 0;
			break;
		}

		if( lnx_DLL_VDDA_TRACKING_ON_LANE == 1 ) break;

		delay(Tus);
		cmpout = DLL_CAL_CMP_OUT;
		if(mode == DLL_VDDA_STEP && dir != cmpout) break;
		
	} while (loopcnt-->0);

	if(lnx_DLL_VDDA_TRACKING_ON_LANE==0)
		lnx_cal_vdda_dll_eom_sel[PWR][rx_pll_rate] = val;
	lnx_cal_vdda_dll_eom_sel[CONT][rx_pll_rate] = val;
	
	
skip_out:	
	lnx_DLL_EOM_VDATA_CAL_DONE_LANE = 1;	
	
}
#else

#define RXDCC_EN_DLLCLK					reg_RXDCC_EN_DLLCLK_LANE
#define EOM_CLK_EN						reg_EOM_CLK_EN_LANE
#define DLL_VDDA_INI_EN					reg_DLL_VDDA_INI_EN_LANE
#define DLL_GM_CAL_BYPASS_EN			reg_DLL_GM_CAL_BYPASS_EN_LANE
#define EOM_DLL_GM_CAL_BYPASS_EN		reg_EOM_DLL_GM_CAL_BYPASS_EN_LANE
#define DLL_GM_CAL_SINGLE_EN			reg_DLL_GM_CAL_SINGLE_EN_LANE
#define EOM_DLL_GM_CAL_SINGLE_EN		reg_EOM_DLL_GM_CAL_SINGLE_EN_LANE
#define DLL_GM_CAL_DIR_INV				reg_DLL_GM_CAL_DIR_INV_LANE
#define EOM_DLL_GM_CAL_DIR_INV			reg_EOM_DLL_GM_CAL_DIR_INV_LANE
#define DLL_VDDA_CAL_BYPASS_EN			reg_DLL_VDDA_CAL_BYPASS_EN_LANE
#define EOM_DLL_VDDA_CAL_BYPASS_EN		reg_EOM_DLL_VDDA_CAL_BYPASS_EN_LANE
#define DLL_VDDA_CAL_SINGLE_EN			reg_DLL_VDDA_CAL_SINGLE_EN_LANE
#define EOM_DLL_VDDA_CAL_SINGLE_EN		reg_EOM_DLL_VDDA_CAL_SINGLE_EN_LANE
#define DLL_VDDA_CAL_CONT_EN			reg_DLL_VDDA_CAL_CONT_EN_LANE
#define EOM_DLL_VDDA_CAL_CONT_EN		reg_EOM_DLL_VDDA_CAL_CONT_EN_LANE
#define DLL_VDDA_CAL_DIR_INV			reg_DLL_VDDA_CAL_DIR_INV_LANE
#define EOM_DLL_VDDA_CAL_DIR_INV		reg_EOM_DLL_VDDA_CAL_DIR_INV_LANE
#define DLL_DCC_CAL_BYPASS_EN			reg_DLL_DCC_CAL_BYPASS_EN_LANE
#define DLL_DCC_CAL_SINGLE_EN			reg_DLL_DCC_CAL_SINGLE_EN_LANE
#define DLL_DCC_CAL_CONT_EN				reg_DLL_DCC_CAL_CONT_EN_LANE
#define DLL_DCC_CAL_DIR_INV				reg_DLL_DCC_CAL_DIR_INV_LANE
#define RXDCC_EN_EOMCLK					reg_RXDCC_EN_EOMCLK_LANE
//#define TIMEOUT_DLL_CAL					1000
#define VREF_RXDLL_SEL	    reg_VREF_VDDADLL_HALF_SEL_3_0

void set_vref_vdda_half(void) BANKING_CTRL {
	int16_t tsen_dat;
	int32_t temp_cel, vref_from_temp;

	tsen_dat = read_tsen();
	temp_cel = (((int32_t)tsen_dat*394) + 128900 + 500)/1000;
	vref_from_temp = (int32_t)rxdll_temp_b_lane*250 + ((int32_t)rxdll_temp_a_lane * temp_cel);
	vref_from_temp = (vref_from_temp - 36000 + 500)/1000;
	VREF_RXDLL_SEL = (uint8_t)vref_from_temp;
}

void dll_init(void) BANKING_CTRL {

	set_vref_vdda_half();
	RXDCC_EN_DLLCLK = 1;
	EOM_CLK_EN = 1;
	DLL_VDDA_INI_EN = 1;

	DLL_GM_CAL_BYPASS_EN=1;

	DLL_GM_CAL_SINGLE_EN=1;
	//Set DLL_GM_CAL_CONT_EN=0
	DLL_GM_CAL_DIR_INV=0;
	EOM_DLL_GM_CAL_BYPASS_EN=1;
	EOM_DLL_GM_CAL_SINGLE_EN=1;
	//Set EOM_DLL_GM_CAL_CONT_EN=0
	EOM_DLL_GM_CAL_DIR_INV=0;
	DLL_VDDA_CAL_BYPASS_EN=0;
	DLL_VDDA_CAL_SINGLE_EN=1;

	DLL_VDDA_CAL_CONT_EN=0;
	DLL_VDDA_CAL_DIR_INV=1;
	EOM_DLL_VDDA_CAL_BYPASS_EN=0;
	EOM_DLL_VDDA_CAL_SINGLE_EN=1;

	EOM_DLL_VDDA_CAL_CONT_EN=0;
	EOM_DLL_VDDA_CAL_DIR_INV=1;
	DLL_DCC_CAL_BYPASS_EN=0;
	DLL_DCC_CAL_SINGLE_EN=1;
	DLL_DCC_CAL_CONT_EN=0;
	DLL_DCC_CAL_DIR_INV=1;
	RXDCC_EN_EOMCLK=1;

}

#if 0
void dll_cal(void) BANKING_CTRL {}
#else
void dll_cal(void) BANKING_CTRL {

	PHY_STATUS = ST_DLL_CAL;

	lnx_DLL_CAL_DONE_LANE = 0;
	lnx_DLL_CAL_PASS_LANE = 0;
	dll_init();
	reg_DLL_TOP_START_LANE = 1;
	/*timeout = 0;
	timeout_start((uint16_t)TIMEOUT_DLL_CAL);
	while (!reg_DLL_TOP_DONE_LANE && !timeout);
	if (!timeout)*/

	while (!reg_DLL_TOP_DONE_LANE);
	if(reg_DLL_GM_CAL_TIMEOUT_RD_LANE || reg_EOM_DLL_GM_CAL_TIMEOUT_RD_LANE || reg_DLL_VDDA_CAL_TIMEOUT_RD_LANE || reg_EOM_DLL_VDDA_CAL_TIMEOUT_RD_LANE || reg_DLL_DCC_CAL_TIMEOUT_RD_LANE)
		lnx_DLL_CAL_PASS_LANE = 0;
	else
		lnx_DLL_CAL_PASS_LANE = 1;
	reg_DLL_TOP_START_LANE = 0;

	lnx_DLL_CAL_DONE_LANE = 1;
}
#endif

#endif
