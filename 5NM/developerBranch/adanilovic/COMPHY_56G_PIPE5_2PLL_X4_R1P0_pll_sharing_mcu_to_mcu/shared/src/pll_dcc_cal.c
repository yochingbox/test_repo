/******************************************************************
 *          Marvell Semiconductor  
 *******************************************************************
 * \file pll_dcc_cal.c
 * \purpose 7nm LCPLL DCC calibration
 * \History
 *  07/19/2019 Heejeong Ryu   Initial 
 */
#include "common.h"
#ifdef USE_BANKING
#pragma codeseg BANK3
#pragma constseg BANK3
#endif

/**
 * \module PLL DCC Calibration
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: 
 *    Output: 
 */

//#define TIMEOUT_PLL_DCC_CAL			1000

void set_rs_bypass_en(uint8_t val) BANKING_CTRL {
	
    	reg_PLL_RS_DCC_CAL_BYPASS_EN_LANE = val; 
    	reg_PLL_RS_DIV_DCC_CAL_BYPASS_EN_LANE = val;
	reg_PLL_RS_VDDA_FBDIV_CAL_BYPASS_EN_LANE = val; 
	reg_PLL_RS_VDDA_INTP_CAL_BYPASS_EN_LANE = val;
	reg_PLL_RS_VDDA_PFD_CAL_BYPASS_EN_LANE = val;

}

void set_ts_bypass_en(uint8_t val) BANKING_CTRL {
	
	reg_PLL_TS_DCC_CAL_BYPASS_EN_LANE = val;
    	reg_PLL_TS_DIV_DCC_CAL_BYPASS_EN_LANE = val;
	reg_PLL_TS_VDDA_FBDIV_CAL_BYPASS_EN_LANE = val; 
	reg_PLL_TS_VDDA_INTP_CAL_BYPASS_EN_LANE = val;
	reg_PLL_TS_VDDA_PFD_CAL_BYPASS_EN_LANE = val;

}

void rs_plldcc_cal(void) BANKING_CTRL {

	PHY_STATUS = ST_RX_PLLDCC_CAL;

	lnx_RX_PLLDCC_CAL_DONE_LANE = 0;
	lnx_RX_PLLDCC_CAL_PASS_LANE = 0;

    	if( cmx_RX_PLLDCC_CAL_EXT_EN )
    	{		
		lnx_RX_PLLDCC_CAL_DONE_LANE = 1;
		return;
	}

	reg_PLL_DCC_VDD_RS_TOP_START_LANE = 0;

	reg_PLL_RS_DCC_CAL_VAL_MAX_LANE_6_0 = 0x3f;
	reg_PLL_RS_DCC_CAL_VAL_MIN_LANE_6_0 = 0x7f;
	reg_PLL_RS_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 4;
	reg_PLL_RS_DIV_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 4;

	reg_PLL_RS_LCPLL_DCC_EN_LANE = 1;
	reg_PLL_RS_LCDIV1P5_DCC_EN_LANE = 1;

	reg_PLL_RS_VDDA_FBDIV_CAL_BYPASS_EN_LANE = 1; 
	reg_PLL_RS_VDDA_INTP_CAL_BYPASS_EN_LANE = 1;
	reg_PLL_RS_VDDA_PFD_CAL_BYPASS_EN_LANE = 1;

	reg_PLL_RS_DCC_CAL_BYPASS_EN_LANE = 0;
	reg_PLL_RS_DCC_CAL_SINGLE_EN_LANE = 1;


	reg_PLL_RS_DIV_DCC_CAL_DIR_INV_LANE = 1;
	
	if(reg_PLL_RS_LCPLL_POSTDIV_EN_LANE == 0) {
    	reg_PLL_RS_ANA_RSVDA_LANE_7_0 |= 0x80; // set ana_rsvda[7] = 1
		reg_PLL_RS_DCC_CAL_DIR_INV_LANE = 0;
		reg_PLL_RS_DIV_DCC_CAL_BYPASS_EN_LANE = 1;
	}
	else {
    	reg_PLL_RS_ANA_RSVDA_LANE_7_0 &= 0x7f; // set ana_rsvda[7] = 0
		reg_PLL_RS_DCC_CAL_DIR_INV_LANE = 1;
		reg_PLL_RS_DIV_DCC_CAL_BYPASS_EN_LANE = 0;
		reg_PLL_RS_DIV_DCC_CAL_SINGLE_EN_LANE = 1;
	}

	reg_PLL_DCC_VDD_RS_TOP_START_LANE = 0;
	reg_PLL_DCC_VDD_RS_TOP_START_LANE = 1;
	delay(T_p5us);
	/*timeout = 0;
	timeout_start((uint16_t)TIMEOUT_PLL_DCC_CAL);
	while (!reg_PLL_DCC_VDD_RS_TOP_DONE_LANE && !timeout);*/

	while (!reg_PLL_DCC_VDD_RS_TOP_DONE_LANE);
	
	if (reg_PLL_RS_DCC_CAL_TIMEOUT_RD_LANE == 0)
		lnx_RX_PLLDCC_CAL_PASS_LANE = 1;
	reg_PLL_DCC_VDD_RS_TOP_START_LANE = 0;

	//save
	lnx_cal_rs_plldcc[RX_PLL_RATE_INX] = reg_PLL_RS_DCC_CAL_RESULT_RD_LANE_6_0 | 0;

	set_rs_bypass_en(0);
	reg_PLL_RS_LCPLL_DCC_EN_LANE = 0;
	reg_PLL_RS_LCDIV1P5_DCC_EN_LANE = 0;

	lnx_RX_PLLDCC_CAL_DONE_LANE = 1;
}

void rs_pllvdda_cal(uint8_t enable_flag) BANKING_CTRL {

	PHY_STATUS = ST_RX_PLL_VDDA_CAL;

	lnx_RX_PLLVDDA_CAL_DONE_LANE = 0;
	lnx_RX_PLLVDDA_CAL_PASS_LANE = 0;

    	if( cmx_RX_PLLVDDA_CAL_EXT_EN )
    	{		
		lnx_RX_PLLVDDA_CAL_DONE_LANE = 1;
		return;
	}

	reg_PLL_RS_VDDA_CAL_EN_LANE = 1; 
	reg_PLL_RS_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 4;
	reg_PLL_RS_VDDA_FBDIV_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 4;
	reg_PLL_RS_VDDA_INTP_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 4;
	reg_PLL_RS_VDDA_PFD_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 4;
	reg_PLL_RS_VDDR_SEL_LANE_3_0 = enable_flag & 0xf;
	
	// Requested by Fei to use the initial value
	reg_PLL_RS_VDDA_FBDIV_CAL_RESULT_EXT_LANE_3_0 = 0xb;
	reg_PLL_RS_VDDA_INTP_CAL_RESULT_EXT_LANE_3_0 = 7;
	reg_PLL_RS_VDDA_PFD_CAL_RESULT_EXT_LANE_3_0 = 7;

	reg_PLL_RS_DCC_CAL_BYPASS_EN_LANE = 1;
    reg_PLL_RS_DIV_DCC_CAL_BYPASS_EN_LANE = 1;
	
	reg_PLL_RS_VDDA_FBDIV_CAL_BYPASS_EN_LANE = 0;
	reg_PLL_RS_VDDA_FBDIV_CAL_SINGLE_EN_LANE = 1; 
	reg_PLL_RS_VDDA_FBDIV_CAL_CONT_EN_LANE = 0; 
	reg_PLL_RS_VDDA_INTP_CAL_BYPASS_EN_LANE = 0;
	reg_PLL_RS_VDDA_INTP_CAL_SINGLE_EN_LANE = 1; 
	reg_PLL_RS_VDDA_INTP_CAL_CONT_EN_LANE = 0; 
	reg_PLL_RS_VDDA_PFD_CAL_BYPASS_EN_LANE = 0;
	reg_PLL_RS_VDDA_PFD_CAL_SINGLE_EN_LANE = 1; 
	reg_PLL_RS_VDDA_PFD_CAL_CONT_EN_LANE = 0; 

	reg_PLL_DCC_VDD_RS_TOP_START_LANE = 0;
	reg_PLL_DCC_VDD_RS_TOP_START_LANE = 1;
	delay(T_p5us);
	while (!reg_PLL_DCC_VDD_RS_TOP_DONE_LANE);

	if((!reg_PLL_RS_VDDA_FBDIV_CAL_TIMEOUT_RD_LANE)
		&&(!reg_PLL_RS_VDDA_INTP_CAL_TIMEOUT_RD_LANE)
		&&(!reg_PLL_RS_VDDA_PFD_CAL_TIMEOUT_RD_LANE))
		lnx_RX_PLLVDDA_CAL_PASS_LANE = 1;

	reg_PLL_DCC_VDD_RS_TOP_START_LANE = 0;

	lnx_cal_rs_pllvdda_fbdiv[RX_PLL_RATE_INX] = reg_PLL_RS_VDDA_FBDIV_CAL_RESULT_RD_LANE_3_0 | 0;
	lnx_cal_rs_pllvdda_intp[RX_PLL_RATE_INX]  = reg_PLL_RS_VDDA_INTP_CAL_RESULT_RD_LANE_3_0 | 0;
	lnx_cal_rs_pllvdda_pfd[RX_PLL_RATE_INX]   = reg_PLL_RS_VDDA_PFD_CAL_RESULT_RD_LANE_3_0 | 0;

	set_rs_bypass_en(0);
	reg_PLL_RS_VDDA_CAL_EN_LANE = 0;	

	lnx_RX_PLLVDDA_CAL_DONE_LANE = 1;
}


void ts_plldcc_cal(void) BANKING_CTRL {

	PHY_STATUS = ST_TX_PLLDCC_CAL;

	lnx_TX_PLLDCC_CAL_DONE_LANE = 0;
	lnx_TX_PLLDCC_CAL_PASS_LANE = 0;

	if( cmx_TX_PLLDCC_CAL_EXT_EN )
	{		
		lnx_TX_PLLDCC_CAL_DONE_LANE = 1;
		return;
	}

	reg_PLL_DCC_VDD_TS_TOP_START_LANE = 0;

	reg_PLL_TS_DCC_CAL_VAL_MAX_LANE_6_0 = 0x3f;
	reg_PLL_TS_DCC_CAL_VAL_MIN_LANE_6_0 = 0x7f;
	reg_PLL_TS_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 4;
	reg_PLL_TS_DIV_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 4;

	reg_PLL_TS_LCPLL_DCC_EN_LANE = 1;
	reg_PLL_TS_LCDIV1P5_DCC_EN_LANE = 1;

	reg_PLL_TS_VDDA_FBDIV_CAL_BYPASS_EN_LANE = 1; 
	reg_PLL_TS_VDDA_INTP_CAL_BYPASS_EN_LANE = 1;
	reg_PLL_TS_VDDA_PFD_CAL_BYPASS_EN_LANE = 1;

	reg_PLL_TS_DCC_CAL_BYPASS_EN_LANE = 0;
	reg_PLL_TS_DCC_CAL_SINGLE_EN_LANE = 1;

	reg_PLL_TS_DIV_DCC_CAL_DIR_INV_LANE = 1;
	
	if(reg_PLL_TS_LCPLL_POSTDIV_EN_LANE == 0)
    {
    	reg_PLL_TS_ANA_RSVDA_LANE_7_0 |= 0x80; // set ana_rsvda[7] = 1
		reg_PLL_TS_DCC_CAL_DIR_INV_LANE = 0;
		reg_PLL_TS_DIV_DCC_CAL_BYPASS_EN_LANE = 1;
	}
	else
 	{
    	reg_PLL_TS_ANA_RSVDA_LANE_7_0 &= 0x7f; // set ana_rsvda[7] = 0
		reg_PLL_TS_DCC_CAL_DIR_INV_LANE = 1;
		reg_PLL_TS_DIV_DCC_CAL_BYPASS_EN_LANE = 0;
		reg_PLL_TS_DIV_DCC_CAL_SINGLE_EN_LANE = 1;
	}

	reg_PLL_DCC_VDD_TS_TOP_START_LANE = 0;
	reg_PLL_DCC_VDD_TS_TOP_START_LANE = 1;
	delay(T_p5us);
	
	/*timeout = 0;
	timeout_start((uint16_t)TIMEOUT_PLL_DCC_CAL);
	while (!reg_PLL_DCC_VDD_TS_TOP_DONE_LANE && !timeout);*/
	while (!reg_PLL_DCC_VDD_TS_TOP_DONE_LANE);
	//
	if (reg_PLL_TS_DCC_CAL_TIMEOUT_RD_LANE == 0)
		lnx_TX_PLLDCC_CAL_PASS_LANE = 1;
	reg_PLL_DCC_VDD_TS_TOP_START_LANE = 0;

	//save
	lnx_cal_ts_plldcc[TX_PLL_RATE_INX] = reg_PLL_TS_DCC_CAL_RESULT_RD_LANE_6_0 | 0;

	set_ts_bypass_en(0);
	reg_PLL_TS_LCPLL_DCC_EN_LANE = 0;
	reg_PLL_TS_LCDIV1P5_DCC_EN_LANE = 0;

	lnx_TX_PLLDCC_CAL_DONE_LANE = 1;
}

void ts_pllvdda_cal(uint8_t enable_flag) BANKING_CTRL {

	PHY_STATUS = ST_TX_PLL_VDDA_CAL;

	lnx_TX_PLLVDDA_CAL_DONE_LANE = 0;
	lnx_TX_PLLVDDA_CAL_PASS_LANE = 0;

	if( cmx_TX_PLLVDDA_CAL_EXT_EN )
    	{		
		lnx_TX_PLLVDDA_CAL_DONE_LANE = 1;
		return;
	}

    reg_PLL_TS_VDDA_CAL_EN_LANE = 1;
	reg_PLL_TS_VDDA_FBDIV_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 4;
	reg_PLL_TS_VDDA_INTP_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 4;
	reg_PLL_TS_VDDA_PFD_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 4;
	reg_PLL_TS_VDDR_SEL_LANE_3_0 = enable_flag & 0xf;

	// Requested by Fei to use the initial value
	reg_PLL_TS_VDDA_FBDIV_CAL_RESULT_EXT_LANE_3_0 = 0xb;
	reg_PLL_TS_VDDA_INTP_CAL_RESULT_EXT_LANE_3_0 = 7;
	reg_PLL_TS_VDDA_PFD_CAL_RESULT_EXT_LANE_3_0 = 7;

	reg_PLL_TS_DCC_CAL_BYPASS_EN_LANE = 1;
    reg_PLL_TS_DIV_DCC_CAL_BYPASS_EN_LANE = 1;
	
	reg_PLL_TS_VDDA_FBDIV_CAL_BYPASS_EN_LANE = 0;
	reg_PLL_TS_VDDA_FBDIV_CAL_SINGLE_EN_LANE = 1; 
	reg_PLL_TS_VDDA_FBDIV_CAL_CONT_EN_LANE = 0; 
	reg_PLL_TS_VDDA_INTP_CAL_BYPASS_EN_LANE = 0;
	reg_PLL_TS_VDDA_INTP_CAL_SINGLE_EN_LANE = 1; 
	reg_PLL_TS_VDDA_INTP_CAL_CONT_EN_LANE = 0; 
	reg_PLL_TS_VDDA_PFD_CAL_BYPASS_EN_LANE = 0;
	reg_PLL_TS_VDDA_PFD_CAL_SINGLE_EN_LANE = 1; 
	reg_PLL_TS_VDDA_PFD_CAL_CONT_EN_LANE = 0; 

	reg_PLL_DCC_VDD_TS_TOP_START_LANE = 0;
	reg_PLL_DCC_VDD_TS_TOP_START_LANE = 1;
	delay(T_p5us);
	while (!reg_PLL_DCC_VDD_TS_TOP_DONE_LANE);

	if((!reg_PLL_TS_VDDA_FBDIV_CAL_TIMEOUT_RD_LANE)
		&&(!reg_PLL_TS_VDDA_INTP_CAL_TIMEOUT_RD_LANE)
		&&(!reg_PLL_TS_VDDA_PFD_CAL_TIMEOUT_RD_LANE))
		lnx_TX_PLLVDDA_CAL_PASS_LANE = 1;

	reg_PLL_DCC_VDD_TS_TOP_START_LANE = 0;

	lnx_cal_ts_pllvdda_fbdiv[TX_PLL_RATE_INX] = reg_PLL_TS_VDDA_FBDIV_CAL_RESULT_RD_LANE_3_0 | 0;
	lnx_cal_ts_pllvdda_intp[TX_PLL_RATE_INX] = reg_PLL_TS_VDDA_INTP_CAL_RESULT_RD_LANE_3_0 | 0;
	lnx_cal_ts_pllvdda_pfd[TX_PLL_RATE_INX] = reg_PLL_TS_VDDA_PFD_CAL_RESULT_RD_LANE_3_0 | 0;

	set_ts_bypass_en(0);
	reg_PLL_TS_VDDA_CAL_EN_LANE = 0;

	lnx_TX_PLLVDDA_CAL_DONE_LANE = 1;
}

void rs_plldcc_cal_cont(void) BANKING_CTRL { //cont

	if(cmx_RX_PLLDCC_CAL_CONT_EN == 0 || reg_PLL_DCC_VDD_RS_TOP_CONT_START_LANE) return;
	
	reg_PLL_RS_LCPLL_DCC_EN_LANE = 1;
	reg_PLL_RS_LCDIV1P5_DCC_EN_LANE = 1;
	reg_PLL_RS_VDDA_CAL_EN_LANE = 1;

	// Fei requested: Freeze VDDA continuous calibration after power on calibration (keep the power on calibrated code)
	reg_PLL_RS_VDDA_FBDIV_CAL_BYPASS_EN_LANE = 1;
	reg_PLL_RS_VDDA_INTP_CAL_BYPASS_EN_LANE = 1;
	reg_PLL_RS_VDDA_PFD_CAL_BYPASS_EN_LANE = 1;

	if(reg_PLL_RS_LCPLL_POSTDIV_EN_LANE == 0) {
		reg_PLL_RS_DIV_DCC_CAL_BYPASS_EN_LANE = 1;
		reg_PLL_RS_ANA_RSVDA_LANE_7_0 |= 0x80; // set ana_rsvda[7] = 1
	}
	else {
		reg_PLL_RS_ANA_RSVDA_LANE_7_0 &= 0x7f; // set ana_rsvda[7] = 0		
	}	

	reg_PLL_DCC_VDD_RS_TOP_CONT_START_LANE = 1;
}

void ts_plldcc_cal_cont(void) BANKING_CTRL { //cont

	if(cmx_TX_PLLDCC_CAL_CONT_EN == 0 || reg_PLL_DCC_VDD_TS_TOP_CONT_START_LANE) return;

	reg_PLL_TS_LCPLL_DCC_EN_LANE = 1;
	reg_PLL_TS_LCDIV1P5_DCC_EN_LANE = 1;
	reg_PLL_TS_VDDA_CAL_EN_LANE = 1;

	// Fei requested: Freeze VDDA continuous calibration after power on calibration (keep the power on calibrated code)
	reg_PLL_TS_VDDA_FBDIV_CAL_BYPASS_EN_LANE = 1;
	reg_PLL_TS_VDDA_INTP_CAL_BYPASS_EN_LANE = 1;
	reg_PLL_TS_VDDA_PFD_CAL_BYPASS_EN_LANE = 1;

	if(reg_PLL_TS_LCPLL_POSTDIV_EN_LANE == 0) {
		reg_PLL_TS_DIV_DCC_CAL_BYPASS_EN_LANE = 1;
		reg_PLL_TS_ANA_RSVDA_LANE_7_0 |= 0x80; // set ana_rsvda[7] = 1
		reg_PLL_TS_DCC_CAL_DIR_INV_LANE = 0;
	}
	else {
		reg_PLL_TS_DIV_DCC_CAL_BYPASS_EN_LANE = 0;
		reg_PLL_TS_ANA_RSVDA_LANE_7_0 &= 0x7f; // set ana_rsvda[7] = 0		
		reg_PLL_TS_DCC_CAL_DIR_INV_LANE = 1;
	}	

	reg_PLL_DCC_VDD_TS_TOP_CONT_START_LANE = 1;
}
