/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file rx_imp_cal.c
* \purpose rx imp calibration driver
* \History
*	2/6/2020 Andrew Danilovic		Initial
*/
#include "common.h"
#include "calibration_common.h"

// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK3
#pragma constseg BANK3
#endif

bool rximp_cal_is_bypassed() {
    return (cmx_RXIMP_CAL_EXT_EN == 1);
}

void rximp_cal_init() {
    reg_RXIMPCAL_EN_LANE = 1;
}

void rximp_cal_set_start() {
	reg_RX_IMP_TOP_START = 1;
}

void rximp_cal_clear_start() {
	reg_RX_IMP_TOP_START = 0;
}

bool rximp_cal_timeout_occurred() {
    if(reg_RX_IMP_CAL_TIMEOUT_RD) {
        return true;
    }
    return false;
}

void rximp_cal_set_pass() {
	lnx_RXIMP_CAL_PASS_LANE = 1;
}

void rximp_cal_clear_pass() {
	lnx_RXIMP_CAL_PASS_LANE = 0;
}

uint8_t rximp_cal_get_hw_done_signal() {
    return reg_RX_IMP_TOP_DONE;
}

void rximp_cal_set_done() {
    reg_RXIMPCAL_EN_LANE = 0;
	lnx_RXIMP_CAL_DONE_LANE = 1;
}

void rximp_cal_clear_done() {
	lnx_RXIMP_CAL_DONE_LANE = 0;
}

void rximp_cal_apply_result() {
	reg_IMPCAL_RX_LANE_4_0 = reg_RX_IMP_CAL_RESULT_RD_4_0;
}

__code struct calibration_abstract_base_t rx_imp_common_cal = {
    ST_RXIMP_CAL,
    rximp_cal_is_bypassed,
    0,
    rximp_cal_init,
    rximp_cal_set_start,
    rximp_cal_clear_start,
    rximp_cal_timeout_occurred,
    rximp_cal_set_pass,
    rximp_cal_clear_pass,
    rximp_cal_get_hw_done_signal,
    rximp_cal_set_done,
    rximp_cal_clear_done,
    rximp_cal_apply_result,
    0
};

/*void rx_imp_common_cal_init() BANKING_CTRL {*/
    /*rx_imp_common_cal.cal_phy_status_val = ST_RXIMP_CAL;*/
    /*rx_imp_common_cal.is_bypassed        = rximp_cal_is_bypassed;*/
    /*rx_imp_common_cal.init               = rximp_cal_init;*/
    /*rx_imp_common_cal.set_start          = rximp_cal_set_start;*/
    /*rx_imp_common_cal.clear_start        = rximp_cal_clear_start;*/
    /*rx_imp_common_cal.timeout_occurred   = rximp_cal_timeout_occurred;*/
    /*rx_imp_common_cal.set_pass           = rximp_cal_set_pass;*/
    /*rx_imp_common_cal.clear_pass         = rximp_cal_clear_pass;*/
    /*rx_imp_common_cal.get_hw_done_signal = rximp_cal_get_hw_done_signal;*/
    /*rx_imp_common_cal.set_done           = rximp_cal_set_done;*/
    /*rx_imp_common_cal.clear_done         = rximp_cal_clear_done;*/
    /*rx_imp_common_cal.apply_result       = rximp_cal_apply_result;*/
    /*rx_imp_common_cal.uninit             = 0;*/
/*}*/
