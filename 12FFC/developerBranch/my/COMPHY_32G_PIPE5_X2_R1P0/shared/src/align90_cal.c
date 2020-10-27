/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file align90_cal.c
* \purpose align90 calibration module
* \History
*	10/15/2015 Heejeong Ryu		Initial 
*/
#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK1
#pragma constseg BANK1
#endif

/**
 * \module align90 Calibration
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NODE>  
 * \note
*/

/*
 * Unified Calibration functions
 */

/*
 * Unified calibration step 5: Align90 calibration:
 *
 * Set: 
 * 1.   ALIGN90_CMP_CAL_EN=1
 * 2.   reg_align90_cmp_offset_cal_single_en_lane = 1'h1
 * 3.   reg_align90_cmp_offset_cal_bypass_en_lane = 1'h0
 *      reg_align90_cal_bypass_en_lane = 1'h1
 * 4.   Start Align90_CAL_TOP_START
 * 5.   Record align90_cmp_offset_ cal results
 */
void align90_cmp_offset_cal(void) BANKING_CTRL {

	uint8_t div2, rate;

	PHY_STATUS = ST_ALIGN90CMP_CAL;

	if(phy_mode==PCIE) rate = rx_pll_rate_x;
#ifdef NO_REDUCE_CODE
	else if(rx_pll_rate_x>1) rate = 0;
	else rate = rx_pll_rate_x;
#endif
	div2 = (reg_RX_SPEED_DIV_LANE_2_0&0x04)==0;

	lnx_ALIGN90_COMP_CAL_DONE_LANE = 0;
	lnx_ALIGN90_COMP_PASS_LANE = 1;

	reg_ALIGN90_CMP_CAL_EN_LANE = 1;
	reg_ALIGN90_CMP_OFFSET_CAL_SINGLE_EN_LANE = 1;
	reg_ALIGN90_CMP_OFFSET_CAL_BYPASS_EN_LANE = 0;
	reg_ALIGN90_CAL_BYPASS_EN_LANE = 1;

	reg_ALIGN90_TOP_START_LANE = 1;
	delay01(5);
	while (!reg_ALIGN90_TOP_DONE_LANE);

	// Record align90_cmp_offset_ cal results
	//lnx_CAL_ALIGN90_CMP_OFFSET_LANE_7_0 = reg_ALIGN90_CMP_OFFSET_CAL_RESULT_RD_LANE_3_0;
	lnx_cal_align90_cmp_offset[PWR][rate][div2] = (reg_ALIGN90_CMP_OFFSET_CAL_RESULT_RD_LANE_3_0 & 0x0f) | 0x00;

	if (reg_ALIGN90_CMP_OFFSET_CAL_TIMEOUT_RD_LANE)
		lnx_ALIGN90_COMP_PASS_LANE = 0;

	reg_ALIGN90_TOP_START_LANE = 0;
	lnx_ALIGN90_COMP_CAL_DONE_LANE = 1;
}

/*
 * Unified calibration step 6: Align90 calibration:
 * Set: 
 * 1.   ALIGN90_CMP_CAL_EN=0
 * 2.   Load align90_cmp_offset_ cal results
 * 3.   reg_align90_cmp_offset_cal_bypass_en_lane = 1'h
 *      reg_align90_cal_bypass_en_lane = 1'h0
 * 4.   reg_align90_cal_single_en_lane = 1'h0
 *      reg_align90_cal_cont_en_lane = 1'h1
 * 5.   Start Align90_CAL_TOP_START
 */
void align90_cal(void) BANKING_CTRL {
	uint8_t div2, rate;

	PHY_STATUS = ST_ALIGN90_CAL;

	if(phy_mode==PCIE) rate = rx_pll_rate_x;
#ifdef NO_REDUCE_CODE
	else if(rx_pll_rate_x>1) rate = 0;
	else rate = rx_pll_rate_x;
#endif
	div2 = (reg_RX_SPEED_DIV_LANE_2_0&0x04)==0;

	lnx_ALIGN90_CAL_DONE_LANE = 0;
	//lnx_ALIGN90_CAL_PASS_LANE = 1;

	reg_ALIGN90_CMP_CAL_EN_LANE = 0;

	//LOAD ALIGN90_CMP_OFFSET_ CAL RESULTS
	//reg_ALIGN90_CMP_OFFSET_CAL_RESULT_EXT_LANE_3_0 = lnx_CAL_ALIGN90_CMP_OFFSET_LANE_7_0;
	reg_ALIGN90_CMP_OFFSET_CAL_RESULT_EXT_LANE_3_0 = lnx_cal_align90_cmp_offset[PWR][rate][div2];
	reg_ALIGN90_CMP_OFFSET_CAL_SINGLE_EN_LANE = 0;
	reg_ALIGN90_CMP_OFFSET_CAL_BYPASS_EN_LANE = 0;

	// load previous results
	reg_ALIGN90_TOP_START_LANE = 1;
	delay01(5);
	while (!reg_ALIGN90_TOP_DONE_LANE);
	reg_ALIGN90_TOP_START_LANE = 0;

	reg_ALIGN90_CMP_OFFSET_CAL_BYPASS_EN_LANE = 1;
	reg_ALIGN90_CAL_BYPASS_EN_LANE = 0;
	reg_ALIGN90_CAL_SINGLE_EN_LANE = 1; //0;
	reg_ALIGN90_CAL_CONT_EN_LANE = 0; //1;

	// start align90 cal
	//reg_ALIGN90_TOP_CONT_START_LANE = 1;
	reg_ALIGN90_TOP_START_LANE = 1;
	delay01(5);
	while (!reg_ALIGN90_TOP_DONE_LANE);

	// save results
	lnx_cal_align90_dac[PWR][rate][div2] = (reg_ALIGN90_CAL_RESULT_LSB_RD_LANE_5_0 & 0x3f) | 0x00;
	lnx_cal_align90_gm[PWR][rate][div2] = (reg_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0 & 0x07) | 0x00;
	lnx_cal_align90_dummy_clk[PWR][rate][div2] = (reg_ALIGN90_CAL_DUMMY_CLK_RD_LANE & 0x01) | 0x00;

	reg_ALIGN90_TOP_START_LANE = 0;
	lnx_ALIGN90_CAL_DONE_LANE = 1;
}

/*
 * Align90 calibration Cont:
 *
 * Set: 
 * 1.   Check align90 calibration condition:
 *      Align90 CAL runs at PLL rate0/1 and speed_div=0/4, total 4 cases.
 *      If not, kill align90 calibration
 * 2.   reg_align90_cmp_offset_cal_bypass_en_lane = 1'h1
 *      reg_align90_cal_bypass_en_lane = 1'h0
 * 3.   reg_align90_cal_single_en_lane = 1'h0
 *      reg_align90_cal_cont_en_lane = 1'h1
 * 4.   Loading calibrated results
 * 5.   Start Align90_CAL_TOP_START
 */
void align90_cal_cont(void) BANKING_CTRL {

	if ((reg_RX_SPEED_DIV_LANE_2_0 == 0) || (reg_RX_SPEED_DIV_LANE_2_0 == 4)) {
		// Loading calibrated results
		//load_cal_data_dll_ram();

		reg_ALIGN90_CMP_OFFSET_CAL_BYPASS_EN_LANE = 1;
		reg_ALIGN90_CAL_BYPASS_EN_LANE = 0;
		reg_ALIGN90_CAL_SINGLE_EN_LANE = 0;
		reg_ALIGN90_CAL_CONT_EN_LANE = 1;

		reg_ALIGN90_TOP_CONT_START_LANE = 1;
	} else {
		reg_ALIGN90_TOP_CONT_START_LANE = 0;
		delay01(5);
		while (!reg_ALIGN90_TOP_CONT_DONE_LANE);
	}
}
