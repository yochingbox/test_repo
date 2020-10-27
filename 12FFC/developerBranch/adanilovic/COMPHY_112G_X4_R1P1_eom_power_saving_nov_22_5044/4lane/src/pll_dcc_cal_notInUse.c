/******************************************************************
 *          Marvell Semiconductor  
 *******************************************************************
 * \file pll_dcc_cal.c
 * \purpose LCPLL DCC calibration
 * \History
 *  02/17/2015 Heejeong Ryu   Initial 
 *  03/13/2017 Xiuyuan Bi     
 */
#include "common.h"
// Code banking configuration, do not remove
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

#define PLLDCC_EN							reg_LCPLL_DCC_EN_LANE
#define PLLDCCCAL_EN						reg_LCPLL_DCC_CAL_EN_LANE
//#define TIMEOUT_PLL_DCC_CAL					1000

void plldcc_cal_ram_notInUse(void) BANKING_CTRL  {

	PHY_STATUS = ST_PLLDCC_CAL;

	lnx_PLLDCC_CAL_DONE_LANE = 0;
	lnx_PLLDCC_CAL_PASS_LANE = 0;

	PLLDCC_EN = 1;
	PLLDCCCAL_EN = 1;
	reg_PLL_DCC_TOP_START_LANE = 1;
	/*timeout = 0;
	timeout_start((uint16_t)TIMEOUT_PLL_DCC_CAL);
	while(!reg_PLL_DCC_TOP_DONE_LANE && !timeout);*/

	while(!reg_PLL_DCC_TOP_DONE_LANE);
	if (reg_PLL_DCC_CAL_TIMEOUT_RD_LANE == 0)
		lnx_PLLDCC_CAL_PASS_LANE = 1;
	reg_PLL_DCC_TOP_START_LANE = 0;

	lnx_cal_plldcc_result_lane = reg_PLL_DCC_CAL_RESULT_RD_LANE_5_0;

	PLLDCC_EN = 0;
	PLLDCCCAL_EN = 0;

	lnx_PLLDCC_CAL_DONE_LANE = 1;
}

