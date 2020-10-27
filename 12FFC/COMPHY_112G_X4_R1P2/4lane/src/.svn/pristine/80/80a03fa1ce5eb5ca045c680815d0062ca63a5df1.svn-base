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
 * \module squelch_cal
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: 
 *    Output: 
 */
void rx_sq_ofst_init_ram_notInUse(void) BANKING_CTRL {

	reg_SQ_CAL_EN_LANE = 1;
	reg_SQ_OFFSET_CAL_EN_LANE = 1;
	reg_SQ_THRESH_CAL_EN_LANE = 0;

	//reg_SQ_CAL_INDV_EXT_EN_LANE = 1;
	reg_SQ_CAL_RESULT_EXT_LANE_5_0 = 0x20;
	reg_SQ_OFFSET_LANE_4_0 = 0x10;
}

void rx_sq_ofst_cal_ram_notInUse(void) BANKING_CTRL {
	int8_t thr1, thr2, ofst;

	PHY_STATUS = ST_SQ_OFST_CAL;

	lnx_SQ_OFST_CAL_DONE_LANE = 0;
	lnx_SQ_OFST_CAL_PASS_LANE = 1;
	rx_sq_ofst_init_ram_notInUse();

	reg_SQ_OFFSETCAL_SEL_LANE_1_0 = 1;
	reg_RX_SQ_TOP_START_LANE = 1;
	/*timeout = 0;
	timeout_start((uint16_t)TIMEOUT_SQ_OFST_CAL);*/
	while(!reg_RX_SQ_TOP_DONE_LANE);
	if(reg_SQ_CAL_TIMEOUT_RD_LANE)
		lnx_SQ_OFST_CAL_PASS_LANE = 0;
	reg_RX_SQ_TOP_START_LANE = 0;

	if ((reg_SQ_CAL_RESULT_RD_LANE_5_0 & 0x20) == 0)
	{
		thr1 = reg_SQ_CAL_RESULT_RD_LANE_5_0 & 0x1f;
	}
	else
	{
		thr1 = -(reg_SQ_CAL_RESULT_RD_LANE_5_0 & 0x1f);
	}

	reg_SQ_OFFSETCAL_SEL_LANE_1_0 = 2;
	reg_RX_SQ_TOP_START_LANE = 1;
	/*timeout = 0;
	timeout_start((uint16_t)TIMEOUT_SQ_OFST_CAL);
	while(!reg_RX_SQ_TOP_DONE_LANE && !timeout);
	if(timeout)*/
	while(!reg_RX_SQ_TOP_DONE_LANE);
	if(reg_SQ_CAL_TIMEOUT_RD_LANE)
		lnx_SQ_OFST_CAL_PASS_LANE = 0;
	reg_RX_SQ_TOP_START_LANE = 0;

	if ((reg_SQ_CAL_RESULT_RD_LANE_5_0 & 0x20) == 0)
	{
		thr2 = reg_SQ_CAL_RESULT_RD_LANE_5_0 & 0x1f;
	}
	else
	{
		thr2 = -(reg_SQ_CAL_RESULT_RD_LANE_5_0 & 0x1f);
	}

	if (thr1 >= thr2)
	{
		reg_SQ_OFFSET_LANE_4_0 = ((thr1 - thr2) & 0xf) | 0x10;
	}
	else
	{
		reg_SQ_OFFSET_LANE_4_0 = ((thr1 - thr2) & 0xf);
	}
	lnx_SQ_OFST_CAL_DONE_LANE = 1;
}

void rx_sq_thresh_init_ram_notInUse(void) BANKING_CTRL {
	reg_SQ_CAL_EN_LANE = 1;
	reg_SQ_OFFSET_CAL_EN_LANE = 0;
	reg_SQ_THRESH_CAL_EN_LANE = 1;
	reg_SQ_OFFSETCAL_SEL_LANE_1_0 = 3;  // pw:based on new pseodu code
	reg_SQ_CAL_INDV_EXT_EN_LANE = 0;
}

void rx_sq_thresh_cal_ram_notInUse(void) BANKING_CTRL {
	uint8_t thr1, thr2;

	PHY_STATUS = ST_SQ_THRESH_CAL;

	lnx_SQ_THRESH_CAL_DONE_LANE = 0;
	lnx_SQ_THRESH_CAL_PASS_LANE = 1;
	rx_sq_thresh_init_ram_notInUse();

	reg_SQ_REFTHR_LANE_4_0 = 0x07;
	reg_RX_SQ_TOP_START_LANE = 1;
	/*timeout = 0;
	timeout_start((uint16_t)TIMEOUT_SQ_THRESH_CAL);
	while(!reg_RX_SQ_TOP_DONE_LANE && !timeout);
	if(timeout)*/

	while(!reg_RX_SQ_TOP_DONE_LANE);

	if(reg_SQ_CAL_TIMEOUT_RD_LANE)
		lnx_SQ_THRESH_CAL_PASS_LANE = 0;
	reg_RX_SQ_TOP_START_LANE = 0;

	thr1 = reg_SQ_CAL_RESULT_RD_LANE_5_0;

	reg_SQ_REFTHR_LANE_4_0 = 0x17;
	reg_RX_SQ_TOP_START_LANE = 1;
	/*timeout = 0;
	timeout_start((uint16_t)TIMEOUT_SQ_THRESH_CAL);
	while(!reg_RX_SQ_TOP_DONE_LANE && !timeout);
	if(timeout)*/
	while(!reg_RX_SQ_TOP_DONE_LANE);
	if(reg_SQ_CAL_TIMEOUT_RD_LANE)
		lnx_SQ_THRESH_CAL_PASS_LANE = 0;
	reg_RX_SQ_TOP_START_LANE = 0;

	thr2 = reg_SQ_CAL_RESULT_RD_LANE_5_0;

	reg_SQ_CAL_RESULT_EXT_LANE_5_0 = (thr1 + thr2) >> 1;
	reg_SQ_CAL_INDV_EXT_EN_LANE = 1;

	//lnx_cal_sq_result_lane = reg_SQ_CAL_RESULT_EXT_LANE_5_0;

	lnx_SQ_THRESH_CAL_DONE_LANE = 1;
	reg_SQ_THRESH_CAL_EN_LANE = 0; // pw: based on new pseodu code
	reg_SQ_CAL_EN_LANE = 0;
}
