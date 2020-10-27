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
#pragma codeseg BANK1
#pragma constseg BANK1
#endif
#define FORMULA_ENABLED

#define DLL_PD_SEL			reg_DLL_PD_SEL_LANE_1_0 
#define DLL_FREQ_SEL		reg_DLL_FREQ_SEL_LANE_1_0
#define DLL_GMSEL			reg_DLL_GMSEL_LANE_2_0
#define DLL_CAL_CMP_OUT		reg_ANA_RX_DLL_CAL_CMP_OUT_RD_LANE
#define DLL_CMP_CAL_EN		reg_DLL_CMP_CAL_EN_LANE
#define DLL_CMP_OFFSET		reg_DLL_CMP_OFFSET_LANE_3_0
#define rate				rx_pll_rate//cmx_PLL_RATE_SEL_3_0	

#ifndef FORMULA_ENABLED
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
#endif

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
void dll_cal(void) BANKING_CTRL {

	dll_comp_cal();
	dll_vdda_cal(DLL_VDDA_STEP);
	dll_gm_cal();
	dll_vdda_cal(DLL_PHASE_STEP);
	
	dll_eom_vdda_cal(DLL_VDDA_STEP);
	dll_eom_gm_cal();
	dll_eom_vdda_cal(DLL_PHASE_STEP);

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
#define VREF_RXDLL_SEL	    reg_VREF_VDDADLL_HALF_SEL_3_0


uint8_t get_vref_rxdll_sel(void) BANKING_CTRL {
	int32_t temp_cel, vref_from_temp;

	temp_cel = (((int32_t)tsen_dat * 394) + 128900 + 500) / 1000;
	vref_from_temp = (int32_t)rxdll_temp_b_lane*250 + ((int32_t)rxdll_temp_a_lane * temp_cel);
	vref_from_temp = (vref_from_temp - 36000)/1000;
	
	return (uint8_t)vref_from_temp;
}
										 
void dll_vdda_cal( uint8_t mode ) BANKING_CTRL {
	uint8_t i, vref_rxdll_sel_ofst, val;
	
	PHY_STATUS = ST_DLL_VDDA_CAL;

	lnx_DLL_VDATA_CAL_DONE_LANE = 0;
	lnx_DLL_VDATA_CAL_PASS_LANE = 1;

	if( cmx_RXDLL_CAL_EXT_EN ) {
		val = lnx_cal_vdda_dll_sel[PWR][rx_pll_rate];
		set_sellv_rxdll_ch(val);
		goto skip_out; 
	}	
	
	if( mode == DLL_VDDA_STEP ) {
		DLL_PD_SEL = 0x02;  
	}
	else { //DLL_PHASE_STEP
		DLL_PD_SEL = 0x00;  
	}	
	
	if( lnx_DLL_VDDA_TRACKING_ON_LANE == 0 && mode == DLL_VDDA_STEP) { 		
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
		VREF_RXDLL_SEL = get_vref_rxdll_sel();
		set_sellv_rxdll_ch(VREF_RXDLL_SEL*2 + 7);
#endif

	}
	else {
		val = lnx_cal_vdda_dll_sel[CONT][rx_pll_rate];
		set_sellv_rxdll_ch(val);
    }

	dll_vdda_cal_loop(mode);
		
skip_out:
	lnx_DLL_VDATA_CAL_DONE_LANE = 1;	

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
	uint8_t i,vref_rxdll_sel_ofst,loopcnt,cnt_num,val,dir,cmpout;
	uint16_t cmp_out_dir;

	PHY_STATUS = ST_DLL_EOM_VDDA_CAL;
	
	lnx_DLL_EOM_VDATA_CAL_DONE_LANE = 0;
	lnx_DLL_EOM_VDATA_CAL_PASS_LANE = 1;

	if( cmx_EOM_DLL_CAL_EXT_EN ) {
		val = lnx_cal_vdda_dll_eom_sel[PWR][rx_pll_rate];
		set_sellv_rxeomdll_ch(val);
		goto skip_out; 
	}		
	
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
		VREF_RXDLL_SEL = get_vref_rxdll_sel(); 
		set_sellv_rxeomdll_ch(VREF_RXDLL_SEL*2 + 7);
#endif
		delay01(10);
		loopcnt = 128;
	}
	else {
		val = lnx_cal_vdda_dll_eom_sel[CONT][rx_pll_rate];
		set_sellv_rxeomdll_ch(val);
		delay01(10);
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

		delay01(10);
		cmpout = DLL_CAL_CMP_OUT;
		if(mode == DLL_VDDA_STEP && dir != cmpout) break;
		
	} while (loopcnt-->0);

	if(lnx_DLL_VDDA_TRACKING_ON_LANE==0)
		lnx_cal_vdda_dll_eom_sel[PWR][rx_pll_rate] = val;
	lnx_cal_vdda_dll_eom_sel[CONT][rx_pll_rate] = val;
	
	
skip_out:	
	lnx_DLL_EOM_VDATA_CAL_DONE_LANE = 1;	
	
}
