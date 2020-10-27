/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file txdcc.c
* \purpose power on seq control
* \History
*	11/1/2019    Heejeong Ryu		Initial
*   11/19/2019   Heejeong Ryu       Added reload part for PCIe Speed change
*/

#include "common.h"
#include "calibration_common.h"

#ifdef USE_BANKING
#pragma codeseg BANK3
#pragma constseg BANK3
#endif

bool txdcc_cal_is_bypassed() {
    return (cmx_TXDCC_CAL_EXT_EN == 1);
}

void txdcc_cal_init() {
	reg_TXDCC_PDIV_EN_LANE = 1;
	reg_TXCAL_EN_LANE = 1;
	reg_TXDCC_EN_LANE = 1;

	// Bypass all impedance calibrations
	reg_TX_IMP_P_CAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_N_CAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_ICCP_CAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_ICCN_CAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_TEMPC_PCAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_TEMPC_NCAL_BYPASS_EN_LANE = 1;
}

void txdcc_cal_set_start() {
	reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 1;
}

void txdcc_cal_clear_start() {
	reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
}

bool txdcc_cal_timeout_occurred() {
    return false;
}

void txdcc_cal_set_pass() {
	lnx_TXDCC_CAL_PASS_LANE = 1;
}

void txdcc_cal_clear_pass() {
	lnx_TXDCC_CAL_PASS_LANE = 0;
}

uint8_t txdcc_cal_get_hw_done_signal() {
    return reg_TX_ALIGN90_DCC_IMP_TOP_DONE_LANE;
}

void txdcc_cal_set_done() {
	lnx_TXDCC_CAL_DONE_LANE = 1;
}

void txdcc_cal_clear_done() {
	lnx_TXDCC_CAL_DONE_LANE = 0;
}

void txdcc_cal_apply_result() {
}

void txdcc_cal_uninit() {
}

__code struct calibration_abstract_base_t txdcc_common_cal = {
    ST_TXDCC_CAL,
    txdcc_cal_is_bypassed,
    0,
    txdcc_cal_init,
    txdcc_cal_set_start,
    txdcc_cal_clear_start,
    txdcc_cal_timeout_occurred,
    txdcc_cal_set_pass,
    txdcc_cal_clear_pass,
    txdcc_cal_get_hw_done_signal,
    txdcc_cal_set_done,
    txdcc_cal_clear_done,
    txdcc_cal_apply_result,
    txdcc_cal_uninit
};

void txdcc_cal_init_cont(void) BANKING_CTRL {

	reg_TXCAL_EN_LANE = 1;
	reg_TXDCC_EN_LANE = 1;
	reg_TX_ALIGN90_DCC_IMP_TOP_CONT_START_LANE = 0;

	// Bypass all impedance calibrations except tempc calibrations in cont mode
	reg_TX_IMP_P_CAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_N_CAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_ICCP_CAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_ICCN_CAL_BYPASS_EN_LANE = 1;

	// HW bug workaround - need to disable the TX_IMP_TEMPC*
	reg_TX_IMP_TEMPC_PCAL_BYPASS_EN_LANE = 1; //0;
	reg_TX_IMP_TEMPC_NCAL_BYPASS_EN_LANE = 1; //0;

	//reg_TXIMP_TEMPC_ICCP_EN_LANE = 1;
	//reg_TXIMP_TEMPC_ICCN_EN_LANE = 1;
	//reg_TXIMP_TEMPC_PMOS_CAL_EN_LANE = 1;
	//reg_TXIMP_TEMPC_NMOS_CAL_EN_LANE = 1;
}

void txdcc_cal_cont(void) BANKING_CTRL {

	if (cmx_TXDCC_CAL_CONT_EN == 0) return;

	txdcc_cal_init_cont();

	reg_TX_ALIGN90_DCC_IMP_TOP_CONT_START_LANE = 1;
}
