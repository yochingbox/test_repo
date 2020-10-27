/******************************************************************
 * 	        Marvell Semiconductor
 *******************************************************************
 * \file squelch_cal.c
 * \purpose SQ CAL
 * \History
 *	10/15/2015 Heejeong Ryu		Initial
 */
#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK3
#pragma constseg BANK3
#endif

/**
 * \module rx_sq_cal_convert_result
 *
 * \param 
 *    result - SQ Threshold read from HW register
 * \return
 *    int8_t - SQ Threshold in integer representation
 * \note
 *    Convert the HW SQ Threshold to an internal integer
 *    representation for use by the FW. If the threshold
 *    is negative, convert to two's complement.
 */
static int8_t rx_sq_cal_convert_result(uint8_t result) {
    int8_t thr = 0;

	if((result & 0x20) == 0)
	{
		thr = -(result & 0x1f);
	}
	else
	{
		thr = (result & 0x1f);
	}

    return thr;
}

/**
 * \module rx_sq_thresh_cal_get_average
 *
 * \param 
 *    thr1 - SQ Threshold in integer representation
 *    thr2 - SQ Threshold in integer representation
 * \return
 *    uin8_t - Average of thr1 and thr2, converted to a
 *    representation suitible to write back to the HW
 * \note
 *    Calculate the average of thr1 and thr2.
 *    Convert the average to the 6-bit representation used
 *    by the HW.
 */
static uint8_t rx_sq_thresh_cal_get_average(int8_t thr1, int8_t thr2) {
    int8_t avg;
    uint8_t hw_avg;

    avg = (thr1 + thr2) / 2;

    if(avg >= 0)
    {
        hw_avg = (avg & 0x1f) | 0x20;
    }
    else
    {
        hw_avg = ((-avg) & 0x1f);
    }

    return hw_avg;
} 

/**
 * \module squelch_cal
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: 
 *    Output: 
 *    
 *    SQ_CAL_RESULT_EXT_LANE[5]  0: '-', 1: '+'
 */

void rx_sq_ofst_cal(void) BANKING_CTRL {
	int8_t ofst1, ofst2;

	if (cmx_SQ_CAL_EXT_EN) {
		lnx_SQ_OFST_CAL_DONE_LANE = 1;
		return;
	}

	PHY_STATUS = ST_SQ_OFST_CAL;

	lnx_SQ_OFST_CAL_DONE_LANE = 0;
	lnx_SQ_OFST_CAL_PASS_LANE = 1;

	if(BYPASS_DELAY==0) reg_SQ_CAL_INDV_EXT_EN_LANE = 0;
	reg_SQ_CAL_EN_LANE = 1;
	reg_SQ_OFFSET_CAL_EN_LANE = 1;
	reg_SQ_THRESH_CAL_EN_LANE = 0;

	reg_SQ_CAL_RESULT_EXT_LANE_5_0 = 0x20;
	reg_SQ_OFFSET_LANE_4_0 = 0x10;

	// --
	reg_SQ_OFFSETCAL_SEL_LANE_1_0 = 1;
	reg_RX_SQ_TOP_START_LANE = 0;
	reg_RX_SQ_TOP_START_LANE = 1;
	delay(T_p5us);
	/*timeout = 0;
	timeout_start((uint16_t)TIMEOUT_SQ_OFST_CAL);*/
	while (!reg_RX_SQ_TOP_DONE_LANE);
	if(reg_SQ_CAL_TIMEOUT_RD_LANE)
		lnx_SQ_OFST_CAL_PASS_LANE = 0;
	reg_RX_SQ_TOP_START_LANE = 0;

	ofst1 = (reg_SQ_CAL_RESULT_RD_LANE_5_0 & 0x1f);
	if ((reg_SQ_CAL_RESULT_RD_LANE_5_0 & 0x20) == 0) ofst1 = -ofst1;

	// --
	reg_SQ_OFFSETCAL_SEL_LANE_1_0 = 2;
	reg_RX_SQ_TOP_START_LANE = 1;
	delay(T_p5us);
	/*timeout = 0;
	timeout_start((uint16_t)TIMEOUT_SQ_OFST_CAL);
	while (!reg_RX_SQ_TOP_DONE_LANE && !timeout);
	if(timeout)*/
	while (!reg_RX_SQ_TOP_DONE_LANE);
	if(reg_SQ_CAL_TIMEOUT_RD_LANE)
		lnx_SQ_OFST_CAL_PASS_LANE = 0;
	reg_RX_SQ_TOP_START_LANE = 0;
	
	ofst2 = (reg_SQ_CAL_RESULT_RD_LANE_5_0 & 0x1f);
	if ((reg_SQ_CAL_RESULT_RD_LANE_5_0 & 0x20) == 0) ofst2 = -ofst2;

	//--
	if (ofst1 >= ofst2)
		reg_SQ_OFFSET_LANE_4_0 = ((ofst1 - ofst2) & 0xf) | 0x10;
	else
		reg_SQ_OFFSET_LANE_4_0 = ((ofst2 - ofst1) & 0xf);
 

	lnx_SQ_OFST_CAL_DONE_LANE = 1;

}

void rx_sq_thresh_cal(void) BANKING_CTRL {
	int8_t thr1, thr2;
    uint8_t result;

	PHY_STATUS = ST_SQ_THRESH_CAL;

	if (cmx_SQ_CAL_EXT_EN) {
		lnx_SQ_THRESH_CAL_DONE_LANE = 1;
		return;
	}

	lnx_SQ_THRESH_CAL_DONE_LANE = 0;
	lnx_SQ_THRESH_CAL_PASS_LANE = 1;

	reg_SQ_CAL_EN_LANE = 1;
	reg_SQ_OFFSET_CAL_EN_LANE = 0;
	reg_SQ_THRESH_CAL_EN_LANE = 1;
	reg_SQ_OFFSETCAL_SEL_LANE_1_0 = 3;
	if(BYPASS_DELAY==0) reg_SQ_CAL_INDV_EXT_EN_LANE = 0;

	reg_SQ_REFTHR_LANE_4_0 = 0x07;
	reg_SQ_CAL_RESULT_EXT_LANE_5_0 = 0x20;

	reg_RX_SQ_TOP_START_LANE = 0;
	reg_RX_SQ_TOP_START_LANE = 1;
	delay(T_p5us);
	while (!reg_RX_SQ_TOP_DONE_LANE);

	if(reg_SQ_CAL_TIMEOUT_RD_LANE)
		lnx_SQ_THRESH_CAL_PASS_LANE = 0;
	reg_RX_SQ_TOP_START_LANE = 0;

    result = reg_SQ_CAL_RESULT_RD_LANE_5_0;
    thr1 = rx_sq_cal_convert_result(result);

	reg_SQ_REFTHR_LANE_4_0 = 0x17;

	reg_RX_SQ_TOP_START_LANE = 1;
	delay(T_p5us);
	while (!reg_RX_SQ_TOP_DONE_LANE);

	if(reg_SQ_CAL_TIMEOUT_RD_LANE)
		lnx_SQ_THRESH_CAL_PASS_LANE = 0;
	reg_RX_SQ_TOP_START_LANE = 0;

    result = reg_SQ_CAL_RESULT_RD_LANE_5_0;
    thr2 = rx_sq_cal_convert_result(result);

    result = rx_sq_thresh_cal_get_average(thr1, thr2);
	reg_SQ_CAL_RESULT_EXT_LANE_5_0 = result;

	reg_SQ_CAL_INDV_EXT_EN_LANE = 1; // force SQ_CAL_RESULT_EXT value into analog block

	//lnx_cal_sq_result_lane = reg_SQ_CAL_RESULT_EXT_LANE_5_0;

	reg_SQ_CAL_EN_LANE = 0;
	reg_SQ_THRESH_CAL_EN_LANE = 0;

	lnx_SQ_THRESH_CAL_DONE_LANE = 1;
}
