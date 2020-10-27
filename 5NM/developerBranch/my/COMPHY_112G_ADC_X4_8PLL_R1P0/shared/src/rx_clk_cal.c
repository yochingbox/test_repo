/******************************************************************
* 	        Marvell Semiconductor
*******************************************************************
* \file rxclk_cal.c
* \purpose Align90/DCC calibration
* \History
*	Minh Tran		08/21/2019 initial version
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
void rx_clk_cal_init(void) BANKING_CTRL {

	reg_RX_ALIGN90_CAL_BYPASS_EN_LANE = 0;
	reg_RX_DCC_A0_CAL_BYPASS_EN_LANE = 0;
	reg_RX_DCC_A90_CAL_BYPASS_EN_LANE = 0;

	if (reg_RX_TH_SEL_LANE_1_0 == 3) {
		reg_RX_CLKTOP_CONFIG_LANE_10_3 = 0; //RX_CLKTOP_CONFIG<10:0> =1
		reg_RX_CLKTOP_CONFIG_LANE_2_0 = 1;
	}
	else {
		reg_RX_ALIGN90_CAL_BYPASS_EN_LANE = 1;
		reg_RX_DCC_A90_CAL_BYPASS_EN_LANE = 1;
	}
}

void rx_clk_cal(void) BANKING_CTRL {

	if (cmx_RX_CLK_CAL_EXT_EN) {
		lnx_RX_CLK_CAL_DONE_LANE = 1;
		return;
	}

	PHY_STATUS = ST_RX_CLK_CAL;

	lnx_RX_CLK_CAL_DONE_LANE = 0;
	lnx_RX_CLK_CAL_PASS_LANE = 1;

	reg_RX_CLK_TOP_START_LANE = 0;

	rx_clk_cal_init();

	reg_RX_CLK_TOP_START_LANE = 1;
	delay(T_p5us);
	while((reg_MCU_DEBUGA_LANE_7_0=0x84)&&!reg_RX_CLK_TOP_DONE_LANE);
	reg_RX_CLK_TOP_START_LANE = 0;

	if (reg_RX_ALIGN90_CAL_TIMEOUT_RD_LANE || reg_RX_DCC_A0_CAL_TIMEOUT_RD_LANE || reg_RX_DCC_A90_CAL_TIMEOUT_RD_LANE) {
		lnx_RX_CLK_CAL_PASS_LANE = 0;
	}

	// TODO - define xdata variables
	//lnx_cal_rx_align90_result_msb_lane = reg_RX_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0;
	//lnx_cal_rx_align90_result_lsb_lane = reg_RX_ALIGN90_CAL_RESULT_LSB_RD_LANE_6_0;
	//lnx_cal_rx_align90_dummy_clk_lane = reg_RX_ALIGN90_CAL_DUMMY_CLK_RD_LANE;
	//lnx_cal_rx_dcc_a0_result_msb_lane = reg_RX_DCC_A0_CAL_RESULT_MSB_RD_LANE_2_0;
	//lnx_cal_rx_dcc_a0_result_lsb_lane = reg_RX_DCC_A0_CAL_RESULT_LSB_RD_LANE_5_0;
	//lnx_cal_rx_dcc_a0_dummy_clk_lane = reg_RX_DCC_A0_CAL_DUMMY_CLK_RD_LANE;
	//lnx_cal_rx_dcc_a90_result_msb_lane = reg_RX_DCC_A90_CAL_RESULT_MSB_RD_LANE_2_0;
	//lnx_cal_rx_dcc_a90_result_lsb_lane = reg_RX_DCC_A90_CAL_RESULT_LSB_RD_LANE_5_0;
	//lnx_cal_rx_dcc_a90_dummy_clk_lane = reg_RX_DCC_A90_CAL_DUMMY_CLK_RD_LANE;

	lnx_RX_CLK_CAL_DONE_LANE = 1;
}

void rx_clk_cal_cont(void) BANKING_CTRL {

	if ((cmx_RXDCC_DATA_CAL_CONT_EN == 0) || cmx_RX_CLK_CAL_EXT_EN) return;

	// IPCE_COMPHY-1672
	// slow down A90 and A90/A0 DCC to reduce interaction with Skew calibration
	reg_RX_ALIGN90_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 4;
	reg_RX_ALIGN90_CAL_CONT_MODE_STEPSIZE_LANE_2_0 = 2;
	reg_RX_DCC_A0_CAL_CONT_MODE_STEPSIZE_LANE_2_0 = 2;
	reg_RX_DCC_A90_CAL_CONT_MODE_STEPSIZE_LANE_2_0 = 2;

	reg_RX_CLK_TOP_CONT_START_LANE = 1;
}
