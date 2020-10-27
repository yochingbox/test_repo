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
void dll_e2c_init(void) BANKING_CTRL {

	reg_DLL_CAL_BYPASS_EN_LANE = 0;
	reg_DLL_CAL_SINGLE_EN_LANE = 1;
	//reg_DLL_CAL_DIR_INV_LANE = 0;

	reg_RX_E2C_DCC_CAL_BYPASS_EN_LANE = 0;
	reg_RX_E2C_DCC_CAL_SINGLE_EN_LANE = 1;
	//reg_RX_E2C_DCC_CAL_DIR_INV_LANE = 1;
}

void dll_cal(void) BANKING_CTRL {

	if (cmx_RXDLL_CAL_EXT_EN) {
		lnx_DLL_CAL_DONE_LANE = 1;
		return;
	}

	PHY_STATUS = ST_RXDCC_DLL_CAL;

	lnx_DLL_CAL_DONE_LANE = 0;
	lnx_DLL_CAL_PASS_LANE = 0;

	reg_DLL_TOP_START_LANE = 0;
	dll_e2c_init();

	reg_DLL_TOP_START_LANE = 1;
	delay(T_p5us);
	//while((reg_MCU_DEBUGA_LANE_7_0=0x40)&&!reg_DLL_TOP_DONE_LANE);
	wait_for(reg_DLL_TOP_DONE_LANE,0);
	reg_DLL_TOP_START_LANE = 0;

	if(reg_DLL_CAL_TIMEOUT_RD_LANE || reg_RX_E2C_DCC_CAL_TIMEOUT_RD_LANE)
		lnx_DLL_CAL_PASS_LANE = 0;
	else
		lnx_DLL_CAL_PASS_LANE = 1;

	// Save results
	// *** Missing reg_DLL_CAL_RESULT_MSB_RD_LANE_3_0 and reg_DLL_CAL_RESULT_LSB_RD_LANE_6_0
	//lnx_cal_rx_dll_result_msb_lane
	//lnx_cal_rx_dll_result_lsb_lane
	//lnx_cal_dll_result_lane = reg_DLL_CAL_RESULT_RD_LANE;
	//lnx_cal_dll_dummy_clk_lane = reg_DLL_CAL_DUMMY_CLK_EXT_LANE;
	//lnx_cal_rx_e2c_dcc_result_lane = reg_RX_E2C_DCC_CAL_RESULT_RD_LANE_5_0;

	lnx_DLL_CAL_DONE_LANE = 1;
}

void dll_e2c_init_cont(void) BANKING_CTRL {

	reg_DLL_CAL_BYPASS_EN_LANE = 0;
	reg_DLL_CAL_CONT_EN_LANE = 1;
	//reg_DLL_CAL_DIR_INV_LANE = 0;

	reg_RX_E2C_DCC_CAL_BYPASS_EN_LANE = 0;
	reg_RX_E2C_DCC_CAL_CONT_EN_LANE = 1;
	//reg_RX_E2C_DCC_CAL_DIR_INV_LANE = 1;
}

void dll_e2c_cal_cont(void) BANKING_CTRL {

	if ((cmx_RXDLL_CAL_CONT_EN == 0) || cmx_RXDLL_CAL_EXT_EN) return;

	dll_e2c_init_cont();

	reg_DLL_TOP_CONT_START_LANE = 1;
}
