/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file dll_cal_rom.c
* \purpose DLL calibration 
* \History
*	10/13/2017 Heejeong Ryu		split to ROM 
*/
#include "common.h"

#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg BANK2
#endif

/**
 * \module DLL_COMP Calibration
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input:  DLL_CAL_CMP_OUT
 *    Output: 
*/
#define DLL_CAL_CMP_OUT		reg_ANA_RX_DLL_CAL_CMP_OUT_RD_LANE
#define DLL_CMP_CAL_EN		reg_DLL_CMP_CAL_EN_LANE
#define DLL_CMP_OFFSET		reg_DLL_CMP_OFFSET_LANE_3_0
#define DLL_PD_SEL			reg_DLL_PD_SEL_LANE_1_0 
#define DLL_FREQ_SEL		reg_DLL_FREQ_SEL_LANE_1_0
#define DLL_GMSEL			reg_DLL_GMSEL_LANE_2_0
#define VDDA_MIN		0x00	
#define VDDA_MAX		0x2b
#define VREF_RXDLL_SEL	    reg_VREF_VDDADLL_HALF_SEL_3_0
#define EOM_DLL_FREQ_SEL	reg_EOM_DLL_FREQ_SEL_LANE_1_0
#define EOM_DLL_GMSEL       reg_EOM_DLL_GMSEL_LANE_2_0
#define rate				rx_pll_rate//cmx_PLL_RATE_SEL_3_0	

void dll_comp_cal( void ) BANKING_CTRL {

	uint8_t  dir, cmpout;
	
	lnx_DLL_COMP_CAL_DONE_LANE = 0;

	if( LOAD_CAL_ON || cmx_RXDLL_CAL_EXT_EN) {	
		DLL_CMP_OFFSET = lnx_CAL_DLL_CMP_OFFSET_LANE_7_0;	
		goto skip_out;
	}
	
	PHY_STATUS = ST_DLL_COMP_CAL;

	lnx_DLL_COMP_CAL_PASS_LANE = 1;
	
	DLL_CMP_CAL_EN = 1;
	DLL_CMP_OFFSET = 0x08;
	delay01(10);
	dir = DLL_CAL_CMP_OUT; cmpout = dir;
	
	do {
		
		if( cmpout == 0) DLL_CMP_OFFSET--; 
		else DLL_CMP_OFFSET++; 				
		delay01(10);
	
		cmpout = DLL_CAL_CMP_OUT;
		if(dir != cmpout) break;
	
		if (DLL_CMP_OFFSET == 0x0f ||  DLL_CMP_OFFSET == 0 ) {
			lnx_DLL_COMP_CAL_PASS_LANE = 0;
			break;
		}
	
	} while(1);

	DLL_CMP_CAL_EN = 0;
	lnx_CAL_DLL_CMP_OFFSET_LANE_7_0 = DLL_CMP_OFFSET; 

skip_out:
	lnx_DLL_COMP_CAL_DONE_LANE = 1;
	
}

/**
 * \module DLL_GM Calibration (dll phase)
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input:  DLL_CAL_CMP_OUT
 *    Output: 
*/

void dll_gm_cal( void ) BANKING_CTRL {
	uint8_t dir, pre_dll_gmsel, loop_cnt, cmpout;
	
	PHY_STATUS = ST_DLL_GM_CAL;
	
	lnx_DLL_GM_CAL_DONE_LANE = 0;

	if(cmx_RXDLL_CAL_EXT_EN || LOAD_CAL_ON) {	
		DLL_GMSEL = lnx_cal_dll_gmsel[rate];	
		lnx_DLL_GM_CAL_DONE_LANE = 1;
		return;
	}

	lnx_DLL_GM_CAL_PASS_LANE = 1;
	
	DLL_PD_SEL = 0;
	
	DLL_GMSEL = 0x07;
	delay01(10);
	
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
		delay01(10);
		
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
	lnx_cal_dll_gmsel[rate] = (DLL_GMSEL & 0x7) | 0x00;;	

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
void dll_vdda_cal_loop( uint8_t mode ) BANKING_CTRL {

	uint8_t loopcnt, i, vref_rxdll_sel_ofst, val, dir, cmpout;
	uint16_t cmp_out_dir;

	delay01(10);
	
	if(mode == DLL_VDDA_STEP) {
		loopcnt = 128;	
		cmp_out_dir = 1;  //1:dec, 0:inc
	}
	else { //DLL_PHASE_STEP
		if(lnx_DLL_SELLV_RXDLL_FINAL_STEP_NUM_SEL_LANE_1_0 == 0x0) loopcnt = 16;
		else if(lnx_DLL_SELLV_RXDLL_FINAL_STEP_NUM_SEL_LANE_1_0 == 0x1) loopcnt = 24;
		else if(lnx_DLL_SELLV_RXDLL_FINAL_STEP_NUM_SEL_LANE_1_0 == 0x2) loopcnt = 32;
		else loopcnt = 48;
		cmp_out_dir = 0;  //0:dec, 1:inc
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
		set_sellv_rxdll_ch(val);
		
		if( val==VDDA_MIN || val==VDDA_MAX )
		{
			lnx_DLL_VDATA_CAL_PASS_LANE = 0;
			break;
		}

		if( lnx_DLL_VDDA_TRACKING_ON_LANE == 1 ) break;

		delay01(10);
		cmpout = DLL_CAL_CMP_OUT;
		if(mode == DLL_VDDA_STEP && dir != cmpout) break;
		
	} while (loopcnt-->0);

	if(lnx_DLL_VDDA_TRACKING_ON_LANE==0)
		lnx_cal_vdda_dll_sel[PWR][rx_pll_rate] = val;
	lnx_cal_vdda_dll_sel[CONT][rx_pll_rate] = val;		

}
#ifdef _28G_X1
void set_sellv_rxdll_ch(uint8_t val) BANKING_CTRL {
	reg_SELLV_RXDLL_CH1_5_0 = val;
}
uint8_t get_sellv_rxdll_ch(void) BANKING_CTRL {
	return reg_SELLV_RXDLL_CH1_5_0;
}
#elif defined _28G_X2_ROM
void set_sellv_rxdll_ch(uint8_t val) BANKING_CTRL {
	switch(mcuid) {
	case MCU_LANE0:	    	
		reg_SELLV_RXDLL_CH1_5_0 = val; break;	
	case MCU_LANE1:	
		reg_SELLV_RXDLL_CH2_5_0 = val; break;
	}

}						

uint8_t get_sellv_rxdll_ch(void) BANKING_CTRL {
	uint8_t val;
	switch(mcuid) {
	case MCU_LANE0: 
		val = reg_SELLV_RXDLL_CH1_5_0; break;
	case MCU_LANE1:	
		val = reg_SELLV_RXDLL_CH2_5_0; break;
	}
	return val;
}	  
#else
void set_sellv_rxdll_ch(uint8_t val) BANKING_CTRL {
	switch(mcuid) {
	case MCU_LANE0:	    
		reg_SELLV_RXDLL_CH0_5_0 = val; break;
	case MCU_LANE1:	
		reg_SELLV_RXDLL_CH1_5_0 = val; break;
	//case MCU_LANE2:	reg_SELLV_RXDLL_CH2_5_0 = val; break;
	//case MCU_LANE3:	reg_SELLV_RXDLL_CH3_5_0 = val; break;
	}

}						

uint8_t get_sellv_rxdll_ch(void) BANKING_CTRL {
	uint8_t val;
	switch(mcuid) {
	case MCU_LANE0: 
		val = reg_SELLV_RXDLL_CH0_5_0; break;
	case MCU_LANE1:	
		val = reg_SELLV_RXDLL_CH1_5_0; break;
	//case MCU_LANE2:	val = reg_SELLV_RXDLL_CH2_5_0; break;
	//case MCU_LANE3:	val = reg_SELLV_RXDLL_CH3_5_0; break;
	}

	return val;
}	  
#endif
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
	delay01(10);

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

		delay01(10);

		cmpout = DLL_CAL_CMP_OUT;
		if(dir != cmpout) {
			EOM_DLL_GMSEL = pre_dll_gmsel;
			break;
		}		
		if( EOM_DLL_GMSEL==0x07 || EOM_DLL_GMSEL==0x03 ) {
			lnx_DLL_COMP_CAL_PASS_LANE = 0;
			break;
		}
	} while (loop_cnt-->0);
	
	lnx_DLL_EOM_GM_CAL_DONE_LANE = 1;
	
	//save
	lnx_cal_dll_eom_gmsel[rate] = (EOM_DLL_GMSEL & 0x7) | 0x00;	
}

#ifdef _28G_X1
void set_sellv_rxeomdll_ch(uint8_t val) BANKING_CTRL {
	reg_SELLV_RXEOMDLL_CH1_5_0 = val;
}
uint8_t get_sellv_rxeomdll_ch(void) BANKING_CTRL {
	return reg_SELLV_RXEOMDLL_CH1_5_0;
}

#elif defined _28G_X2_ROM
void set_sellv_rxeomdll_ch(uint8_t val) BANKING_CTRL {
	switch(mcuid) {
	case MCU_LANE0: 
		reg_SELLV_RXEOMDLL_CH1_5_0 = val; break;
	case MCU_LANE1:	
		reg_SELLV_RXEOMDLL_CH2_5_0 = val; break;
	}
}						

uint8_t get_sellv_rxeomdll_ch(void) BANKING_CTRL {
	uint8_t val;
	switch(mcuid) {
	case MCU_LANE0: 
		val = reg_SELLV_RXEOMDLL_CH1_5_0; break;
	case MCU_LANE1:	
		val = reg_SELLV_RXEOMDLL_CH2_5_0; break;
	}
	return val;
}	  
#else
void set_sellv_rxeomdll_ch(uint8_t val) BANKING_CTRL {
	switch(mcuid) {
	case MCU_LANE0: 
		reg_SELLV_RXEOMDLL_CH0_5_0 = val; break;
	case MCU_LANE1:	
		reg_SELLV_RXEOMDLL_CH1_5_0 = val; break;
	//case MCU_LANE2:	reg_SELLV_RXEOMDLL_CH2_5_0 = val; break;
	//case MCU_LANE3:	reg_SELLV_RXEOMDLL_CH3_5_0 = val; break;
	}
}						

uint8_t get_sellv_rxeomdll_ch(void) BANKING_CTRL {
	uint8_t val;
	switch(mcuid) {
	case MCU_LANE0: 
		val = reg_SELLV_RXEOMDLL_CH0_5_0; break;
	case MCU_LANE1:	
		val = reg_SELLV_RXEOMDLL_CH1_5_0; break;
	//case MCU_LANE2:	val = reg_SELLV_RXEOMDLL_CH2_5_0; break;
	//case MCU_LANE3:	val = reg_SELLV_RXEOMDLL_CH3_5_0; break;
	}

	return val;
}	  
#endif
