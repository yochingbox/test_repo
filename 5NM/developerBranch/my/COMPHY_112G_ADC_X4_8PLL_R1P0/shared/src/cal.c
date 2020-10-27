/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file cal.c
* \purpose calibration call
* \History
*	08/13/2019 Minh Tran		Initial 
*/
#include "common.h"

#ifdef USE_BANKING
#pragma codeseg BANK1
#endif


void load_rx_cal_data(void) BANKING_CTRL {

	LOAD_CAL_ON = 1;

	// TODO
	//rs_pll_dcc_vdd cal results
	//rx vdd cal results
	//dll cal results
	//rx clk cal results
	//rx sq cal result
	//rx imp cal result
	//adc cal results

	LOAD_CAL_ON = 0;
}

void load_tx_cal_data(void) BANKING_CTRL {

	//if(force_exit_cal)return;
	
	LOAD_CAL_ON = 1;

	// TODO
	//ts_pll_dcc_vdd cal results
	//tx vdd cal results
	//tx align90_dcc cal results
	//tx imp cal result

	LOAD_CAL_ON = 0;
}

/**
 * \module Calibration Continuous
 *
 * \param
 *    <NONE>
 * \return
 *    <NONE>
 * \note
 */
void Cal_Cont(void) BANKING_CTRL
{
	if (FORCE_CONT_CAL_SKIP) return;

	Rx_Cal_Cont();
	Tx_Cal_Cont();
}

void Rx_Cal_Cont(void) BANKING_CTRL
{
	if (FORCE_CONT_CAL_SKIP) return;

	if(pll_sel != TS_ON) {
		if (reg_PLL_AMP_RS_TOP_CONT_START_LANE == 0) {
			rs_pll_amp_cal_cont();
		}

		// Not in the unified core
		if(cmx_PLL_TEMP_CAL_CONT_EN) {
  			pll_tempc_rs_cont();
//			reg_PLL_RS_LCPLL_TEMPC_EXT_EN_LANE = 0;
//			reg_PLL_RS_LCPLL_TEMPC_CAL_EN_LANE = 1;
		}

		if (reg_PLL_DCC_VDD_RS_TOP_CONT_START_LANE == 0) {
			rs_plldcc_cal_cont();
		}
	}

	if (reg_DLL_TOP_CONT_START_LANE == 0) {
		dll_e2c_cal_cont();
	}

	if (reg_RX_CLK_TOP_CONT_START_LANE == 0) {
		rx_clk_cal_cont();
	}
}

void Tx_Cal_Cont(void) BANKING_CTRL
{
	if (FORCE_CONT_CAL_SKIP) return;

	if(pll_sel != RS_ON) {
		if (reg_PLL_AMP_TS_TOP_CONT_START_LANE == 0) {
			ts_pll_amp_cal_cont();
		}

		// Not in the unified core
		if (cmx_PLL_TEMP_CAL_CONT_EN && (reg_PLL_TS_LCPLL_TEMPC_CAL_EN_LANE == 0)) {
  			pll_tempc_ts_cont();
		//	reg_PLL_TS_LCPLL_TEMPC_EXT_EN_LANE = 0;
		//	reg_PLL_TS_LCPLL_TEMPC_CAL_EN_LANE = 1;
		}

		if (reg_PLL_DCC_VDD_TS_TOP_CONT_START_LANE == 0) {
			ts_plldcc_cal_cont();
		}
	}

	// include align90, dcc and tempc continuous calibrations
	if (reg_TX_ALIGN90_DCC_IMP_TOP_CONT_START_LANE == 0) {
		txdcc_cal_cont();
	}
}

void turn_off_cont_cal(void) BANKING_CTRL
{
	turn_off_rx_cont_cal();
	turn_off_tx_cont_cal();
}

void turn_off_rx_cont_cal(void) BANKING_CTRL
{
	if (FORCE_CONT_CAL_SKIP) return;

	if(pll_sel != TS_ON) {
		if(reg_PLL_AMP_RS_TOP_CONT_START_LANE) {
			reg_PLL_AMP_RS_TOP_CONT_START_LANE = 0;
			while((reg_MCU_DEBUGA_LANE_7_0=0x3)&&!reg_PLL_AMP_RS_TOP_CONT_DONE_LANE);
		}

		//Turnoff Lane_i.PLL_TEMPC_CAL_TOP_ CONT_START // Not in the unified core, it’s in a separate one
		reg_PLL_RS_LCPLL_TEMPC_CAL_EN_LANE = 0;

		if(reg_PLL_DCC_VDD_RS_TOP_CONT_START_LANE) {
			reg_PLL_DCC_VDD_RS_TOP_CONT_START_LANE = 0;
			while((reg_MCU_DEBUGA_LANE_7_0=0x4)&&!reg_PLL_DCC_VDD_RS_TOP_CONT_DONE_LANE);
		}
	}

	if(reg_DLL_TOP_CONT_START_LANE) {
		reg_DLL_TOP_CONT_START_LANE = 0;
		while((reg_MCU_DEBUGA_LANE_7_0=0x5)&&!reg_DLL_TOP_CONT_DONE_LANE);
	}

	if(reg_RX_CLK_TOP_CONT_START_LANE) {
		reg_RX_CLK_TOP_CONT_START_LANE = 0;
		while((reg_MCU_DEBUGA_LANE_7_0=0x6)&&!reg_RX_CLK_TOP_CONT_DONE_LANE);
	}
}

void turn_off_tx_cont_cal(void) BANKING_CTRL
{
	if (FORCE_CONT_CAL_SKIP) return;

	if(pll_sel != RS_ON) {
		if(reg_PLL_AMP_TS_TOP_CONT_START_LANE) {
			reg_PLL_AMP_TS_TOP_CONT_START_LANE = 0;
			while((reg_MCU_DEBUGA_LANE_7_0=0x7)&&!reg_PLL_AMP_TS_TOP_CONT_DONE_LANE);
		}

		//Turnoff Lane_i.PLL_TEMPC_CAL_TOP_ CONT_START // Not in the unified core, it’s in a separate one
		if (reg_PLL_TS_LCPLL_TEMPC_CAL_EN_LANE)
			reg_PLL_TS_LCPLL_TEMPC_CAL_EN_LANE = 0;

		if(reg_PLL_DCC_VDD_TS_TOP_CONT_START_LANE) {
			reg_PLL_DCC_VDD_TS_TOP_CONT_START_LANE = 0;
			while((reg_MCU_DEBUGA_LANE_7_0=0x8)&&!reg_PLL_DCC_VDD_TS_TOP_CONT_DONE_LANE);
		}
	}

	if(reg_TX_ALIGN90_DCC_IMP_TOP_CONT_START_LANE) {
		reg_TX_ALIGN90_DCC_IMP_TOP_CONT_START_LANE = 0;
		while((reg_MCU_DEBUGA_LANE_7_0=0x9)&&!reg_TX_ALIGN90_DCC_IMP_TOP_CONT_DONE_LANE);
	}
}

