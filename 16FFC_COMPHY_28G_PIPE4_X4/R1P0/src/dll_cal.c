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
void dll_cal(void) {
	uint8_t cnt;
	
	lnx_DLL_CAL_DONE_LANE = 0;
	lnx_DLL_VDDA_TRACKING_ON_LANE = 0;

	dll_comp_cal();
	dll_vdda_cal(DLL_VDDA_STEP);
	dll_gm_cal();
	dll_vdda_cal(DLL_PHASE_STEP);
	dll_eom_vdda_cal(DLL_VDDA_STEP);
	dll_eom_gm_cal();
	dll_eom_vdda_cal(DLL_PHASE_STEP);

	lnx_DLL_VDDA_TRACKING_ON_LANE = 1;
	
	cnt = 0;
	do {
		dll_vdda_cal(DLL_PHASE_STEP);
		dll_eom_vdda_cal(DLL_PHASE_STEP);
	} while(cnt++<20);
	
	lnx_DLL_CAL_DONE_LANE = 1;

}

/*
void dll_cal_cont(void) {

	lnx_DLL_CAL_DONE_LANE = 0;
	
	dll_vdda_cal(DLL_PHASE_STEP);
	dll_eom_vdda_cal(DLL_PHASE_STEP);
	
	lnx_DLL_CAL_DONE_LANE = 1;
	
}
*/

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
#define rate				pll_rate//cmx_PLL_RATE_SEL_3_0	

void dll_comp_cal( void ){

	uint8_t  dir, cmpout;
	
	PHY_STATUS = ST_DLL_COMP_CAL;
	
	lnx_DLL_COMP_CAL_PASS_LANE = 1;
	lnx_DLL_COMP_CAL_DONE_LANE = 0;
	
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
			lnx_DLL_COMP_CAL_PASS_LANE = 0;
			break;
		}
	
	} while(1);

	DLL_CMP_CAL_EN = 0;

	lnx_DLL_COMP_CAL_DONE_LANE = 1;
	
	//save
	lnx_CAL_DLL_CMP_OFFSET_LANE_7_0 = DLL_CMP_OFFSET; 
	
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

void dll_gm_cal( void ) {
	uint8_t dir, pre_dll_gmsel, loop_cnt, cmpout;
	
	PHY_STATUS = ST_DLL_GM_CAL;
	
	lnx_DLL_GM_CAL_DONE_LANE = 0;
	lnx_DLL_GM_CAL_PASS_LANE = 1;

	DLL_PD_SEL = 0;
	
	DLL_GMSEL = 0x07;
	delay(Tus);
	
	dir = DLL_CAL_CMP_OUT; cmpout = dir;
	loop_cnt = 8;

	do {
		pre_dll_gmsel = DLL_GMSEL;
	
		if( cmpout == 0 )  {
			if(DLL_GMSEL>3) DLL_GMSEL--;
		}	
		else {
			if (DLL_GMSEL<7) DLL_GMSEL++;
		}
		delay(Tus);
		
		if( DLL_GMSEL==0x07 || DLL_GMSEL==0x03 ) {
			lnx_DLL_GM_CAL_PASS_LANE = 0;
			break;
		}
		
		cmpout = DLL_CAL_CMP_OUT;
		if(dir != cmpout) break;
	
	} while (loop_cnt-->0);
	
	DLL_GMSEL = pre_dll_gmsel;
	
	lnx_DLL_GM_CAL_DONE_LANE = 1;
	
	//save
	if (rate == 1) {
	  lnx_CAL_DLL_GMSEL_R1_LANE_7_0 = DLL_GMSEL;
	}
	else {
	  lnx_CAL_DLL_GMSEL_R0_LANE_7_0 = DLL_GMSEL;
	}
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
#define VDDA_MAX		0x27	
#define VREF_RXDLL_SEL	    reg_VREF_VDDADLL_HALF_SEL_3_0

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
void set_sellv_rxdll_ch(uint8_t val) {
	switch(mcuid) {
	case MCU_LANE1:	reg_SELLV_RXDLL_CH1_5_0 = val; break;
	case MCU_LANE2:	reg_SELLV_RXDLL_CH2_5_0 = val; break;
	case MCU_LANE3:	reg_SELLV_RXDLL_CH3_5_0 = val; break;
	default:	    reg_SELLV_RXDLL_CH0_5_0 = val; break;
	}

}						

uint8_t get_sellv_rxdll_ch(void) {
	uint8_t val;
	switch(mcuid) {
	case MCU_LANE1:	val = reg_SELLV_RXDLL_CH1_5_0; break;
	case MCU_LANE2:	val = reg_SELLV_RXDLL_CH2_5_0; break;
	case MCU_LANE3:	val = reg_SELLV_RXDLL_CH3_5_0; break;
	default:	    val = reg_SELLV_RXDLL_CH0_5_0; break;
	}

	return val;
}	  
							 
void dll_vdda_cal( uint8_t mode ) {
	uint8_t loopcnt, i, val;
	int16_t tsen_dat;
	uint16_t cmp_out_dir;
	
	PHY_STATUS = ST_DLL_VDDA_CAL;
	
	lnx_DLL_VDATA_CAL_DONE_LANE = 0;
	lnx_DLL_VDATA_CAL_PASS_LANE = 1;
	
	if( mode == DLL_VDDA_STEP ) {
		DLL_PD_SEL = 0x02;  
		cmp_out_dir = 1;  //1:dec, 0:inc
	}
	else { //DLL_PHASE_STEP
		DLL_PD_SEL = 0x00;  
		cmp_out_dir = 0;  //0:dec, 1:inc
	}	
	
	if( lnx_DLL_VDDA_TRACKING_ON_LANE == 0 && mode == DLL_VDDA_STEP) { 		
		tsen_dat = read_tsen();
		for(i=1; i<10; i++) {
			if(tsen_dat < tsen_tb[i]) break;
		}
		
		VREF_RXDLL_SEL = i; 
		set_sellv_rxdll_ch(i+0x10);
		delay(Tus);
		loopcnt = 10;
	}
	else {
		if (rate == 1) val = lnx_CAL_VDDA_DLL_SEL_R1_LANE_7_0;		
		else val = lnx_CAL_VDDA_DLL_SEL_R0_LANE_7_0;
		set_sellv_rxdll_ch(val);
		delay(Tus);
		loopcnt = 20;
    }

   val = get_sellv_rxdll_ch();
   
	do {
		if( DLL_CAL_CMP_OUT == cmp_out_dir ) {
			if( val>VDDA_MIN ) 	val--;
		}	
		else {
			if( val<VDDA_MAX ) 	val++;
		}
		set_sellv_rxdll_ch(val);
		
		if( val==VDDA_MIN || val==VDDA_MAX )
		{
			lnx_DLL_VDATA_CAL_PASS_LANE = 0;
			break;
		}

		if( lnx_DLL_VDDA_TRACKING_ON_LANE == 1 ) break;

		delay(Tus);
		
	} while (loopcnt-->0);

	lnx_DLL_VDATA_CAL_DONE_LANE = 1;	
	
	if (rate == 1) {
	  lnx_CAL_VDDA_DLL_SEL_R1_LANE_7_0 = val;
	}
	else {
	  lnx_CAL_VDDA_DLL_SEL_R0_LANE_7_0 = val;
	}
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
void dll_eom_gm_cal( void ) {
	uint8_t dir, pre_dll_gmsel, loop_cnt, cmpout;
	
	PHY_STATUS = ST_DLL_EOM_GM_CAL;
	
	lnx_DLL_EOM_GM_CAL_DONE_LANE = 0;
	lnx_DLL_EOM_GM_CAL_PASS_LANE = 1;

	DLL_PD_SEL = 1;
	
	EOM_DLL_FREQ_SEL = reg_DLL_FREQ_SEL_LANE_1_0; 
	
	EOM_DLL_GMSEL = 0x07;
	delay(Tus);

	dir = DLL_CAL_CMP_OUT; cmpout = dir;
	loop_cnt = 8;
	do {
		pre_dll_gmsel = EOM_DLL_GMSEL;
	
		if( cmpout == 0 )  {
			if(EOM_DLL_GMSEL>3)	EOM_DLL_GMSEL--;
		}	
		else {
			if(EOM_DLL_GMSEL<7) EOM_DLL_GMSEL++;
		}

		delay(Tus);
		
		if( EOM_DLL_GMSEL==0x07 || EOM_DLL_GMSEL==0x03 ) {
			lnx_DLL_COMP_CAL_PASS_LANE = 0;
			break;
		}
		
		cmpout = DLL_CAL_CMP_OUT;
		if(dir != cmpout) break;
	
	} while (loop_cnt-->0);
	
	EOM_DLL_GMSEL = pre_dll_gmsel;
	
	lnx_DLL_EOM_GM_CAL_DONE_LANE = 1;
	
	//save
	if (rate == 1) {
	  lnx_CAL_DLL_EOM_GMSEL_R1_LANE_7_0 = EOM_DLL_GMSEL;
	}
	else {
	  lnx_CAL_DLL_EOM_GMSEL_R0_LANE_7_0 = EOM_DLL_GMSEL;
	}
}

void set_sellv_rxeomdll_ch(uint8_t val) {
	switch(mcuid) {
	case MCU_LANE1:	reg_SELLV_RXEOMDLL_CH1_5_0 = val; break;
	case MCU_LANE2:	reg_SELLV_RXEOMDLL_CH2_5_0 = val; break;
	case MCU_LANE3:	reg_SELLV_RXEOMDLL_CH3_5_0 = val; break;
	default:	    reg_SELLV_RXEOMDLL_CH0_5_0 = val; break;
	}

}						

uint8_t get_sellv_rxeomdll_ch(void) {
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
#define VDDA_EOM_MAX		0x27	
void dll_eom_vdda_cal( uint8_t mode ) {
	int16_t tsen_dat;
	uint8_t i,loopcnt,val;
	uint16_t cmp_out_dir;

	PHY_STATUS = ST_DLL_EOM_VDDA_CAL;
	
	lnx_DLL_EOM_VDATA_CAL_DONE_LANE = 0;
	lnx_DLL_EOM_VDATA_CAL_PASS_LANE = 1;
	
	if( mode == DLL_VDDA_STEP ) {
		DLL_PD_SEL = 0x03;  
		cmp_out_dir = 1;  //1:dec, 0:inc
	}
	else { //DLL_PHASE_STEP
		DLL_PD_SEL = 0x01;  
		cmp_out_dir = 0;  //0:dec, 1:inc
	}	
	
	if( lnx_DLL_VDDA_TRACKING_ON_LANE==0 && mode == DLL_VDDA_STEP) { 
		tsen_dat = read_tsen();
		for(i=0; i<10; i++) {
			if(tsen_dat < tsen_tb[i]) break;
		}
		VREF_RXDLL_SEL = i; 
		set_sellv_rxeomdll_ch(i+0x10);
		delay(Tus);
		loopcnt = 10;
	}
	else {
		if (rate == 1) val = lnx_CAL_VDDA_DLL_EOM_SEL_R1_LANE_7_0;
		else val = lnx_CAL_VDDA_DLL_EOM_SEL_R0_LANE_7_0;
		set_sellv_rxeomdll_ch(val);
		delay(Tus);
		loopcnt = 20;
	}

    val = get_sellv_rxeomdll_ch();
	do {
		if( DLL_CAL_CMP_OUT == cmp_out_dir ) {
			if(val>VDDA_EOM_MIN) val--;			
		}	
		else {
			if(val<VDDA_EOM_MAX) val++;			
		}	
		set_sellv_rxeomdll_ch(val);
			
		if( val==VDDA_EOM_MIN || val==VDDA_EOM_MAX )
		{
			lnx_DLL_EOM_VDATA_CAL_PASS_LANE = 0;
			break;
		}

   		if( lnx_DLL_VDDA_TRACKING_ON_LANE == 1 ) break;

		delay(Tus);

	} while (loopcnt-->0);

	lnx_DLL_EOM_VDATA_CAL_DONE_LANE = 1;	
	
	if (rate == 1) {
	  lnx_CAL_VDDA_DLL_EOM_SEL_R1_LANE_7_0 = val;
	}
	else {
	  lnx_CAL_VDDA_DLL_EOM_SEL_R0_LANE_7_0 = val;
	}
}

