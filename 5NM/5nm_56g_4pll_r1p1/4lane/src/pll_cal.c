/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file pll_cal.c
* \purpose pll cal driver
* \History
*	2/10/2020 Andrew Danilovic		Initial
*/

#include "common.h"
#include "pll_cal.h"

// Code banking configuration, do not remove
#ifdef USE_BANKING
//WARNING: The following files need to be in the same bank:
//calibration_common.c, rx_imp_cal.c, pll_cal.c, dcc_cal.c, rx_clk_cal.c, rxeom_cal.c
#pragma codeseg BANK3
#pragma constseg BANK3
#endif

static void set_rs_bypass_en(uint8_t val) BANKING_CTRL {
    reg_PLL_RS_DCC_CAL_BYPASS_EN_LANE = val; 
    reg_PLL_RS_DIV_DCC_CAL_BYPASS_EN_LANE = val;
	reg_PLL_RS_VDDA_FBDIV_CAL_BYPASS_EN_LANE = val; 
	reg_PLL_RS_VDDA_INTP_CAL_BYPASS_EN_LANE = val;
	reg_PLL_RS_VDDA_PFD_CAL_BYPASS_EN_LANE = val;
}

static void set_ts_bypass_en(uint8_t val) BANKING_CTRL {
	reg_PLL_TS_DCC_CAL_BYPASS_EN_LANE = val;
    reg_PLL_TS_DIV_DCC_CAL_BYPASS_EN_LANE = val;
	reg_PLL_TS_VDDA_FBDIV_CAL_BYPASS_EN_LANE = val; 
	reg_PLL_TS_VDDA_INTP_CAL_BYPASS_EN_LANE = val;
	reg_PLL_TS_VDDA_PFD_CAL_BYPASS_EN_LANE = val;
}

bool rs_plldcc_cal_is_bypassed() {
    return (cmx_RX_PLLDCC_CAL_EXT_EN == 1);
}

void rs_plldcc_cal_execute() {
    pll_dcc_vdd_rs();
}

void rs_plldcc_cal_set_done() {
	lnx_RX_PLLDCC_CAL_DONE_LANE = 1;
}

void rs_plldcc_cal_clear_done() {
	lnx_RX_PLLDCC_CAL_DONE_LANE = 0;
}

void rs_plldcc_cal_apply_result() {
	lnx_cal_rs_plldcc[RX_PLL_RATE_INX] = reg_PLL_RS_DCC_CAL_RESULT_RD_LANE_6_0 | 0;
}

void rs_plldcc_cal_uninit() {
	set_rs_bypass_en(0);
	reg_PLL_RS_LCPLL_DCC_EN_LANE = 0;
	reg_PLL_RS_LCDIV1P5_DCC_EN_LANE = 0;
}

__code struct calibration_abstract_base_t rs_plldcc_common_cal = {
    ST_RS_PLLDCC_CAL,
    rs_plldcc_cal_is_bypassed,
    0,
    rs_plldcc_cal_execute,
    rs_plldcc_cal_set_done,
    rs_plldcc_cal_clear_done,
    rs_plldcc_cal_apply_result,
    rs_plldcc_cal_uninit
};

/*void rs_plldcc_common_cal_init() BANKING_CTRL {*/
    /*rs_plldcc_common_cal.cal_phy_status_val = ST_RX_PLLDCC_CAL;*/
    /*rs_plldcc_common_cal.is_bypassed        = rs_plldcc_cal_is_bypassed;*/
    /*rs_plldcc_common_cal.init               = rs_plldcc_cal_init;*/
    /*rs_plldcc_common_cal.set_start          = rs_plldcc_cal_set_start;*/
    /*rs_plldcc_common_cal.clear_start        = rs_plldcc_cal_clear_start;*/
    /*rs_plldcc_common_cal.timeout_occurred   = rs_plldcc_cal_timeout_occurred;*/
    /*rs_plldcc_common_cal.set_pass           = rs_plldcc_cal_set_pass;*/
    /*rs_plldcc_common_cal.clear_pass         = rs_plldcc_cal_clear_pass;*/
    /*rs_plldcc_common_cal.get_hw_done_signal = rs_plldcc_cal_get_hw_done_signal;*/
    /*rs_plldcc_common_cal.set_done           = rs_plldcc_cal_set_done;*/
    /*rs_plldcc_common_cal.clear_done         = rs_plldcc_cal_clear_done;*/
    /*rs_plldcc_common_cal.apply_result       = rs_plldcc_cal_apply_result;*/
    /*rs_plldcc_common_cal.uninit             = rs_plldcc_cal_uninit;*/
/*}*/

bool rs_pllvdda_cal_is_bypassed() {
    return (cmx_RX_PLLVDDA_CAL_EXT_EN == 1);
}

void rs_pllvdda_cal_execute() {
    pll_vdd_freq_rs();
}

void rs_pllvdda_cal_set_done() {
	lnx_RX_PLLVDDA_CAL_DONE_LANE = 1;
}

void rs_pllvdda_cal_clear_done() {
	lnx_RX_PLLVDDA_CAL_DONE_LANE = 0;
}

void rs_pllvdda_cal_apply_result() {
	lnx_cal_rs_pllvdda_fbdiv[RX_PLL_RATE_INX] = reg_PLL_RS_VDDA_FBDIV_CAL_RESULT_RD_LANE_3_0 | 0;
	lnx_cal_rs_pllvdda_intp[RX_PLL_RATE_INX]  = reg_PLL_RS_VDDA_INTP_CAL_RESULT_RD_LANE_3_0 | 0;
	lnx_cal_rs_pllvdda_pfd[RX_PLL_RATE_INX]   = reg_PLL_RS_VDDA_PFD_CAL_RESULT_RD_LANE_3_0 | 0;
}

void rs_pllvdda_cal_uninit() {
	set_rs_bypass_en(0);
	reg_PLL_RS_VDDA_CAL_EN_LANE = 0;	
}

__code struct calibration_abstract_base_t rs_pllvdda_common_cal = {
    ST_RS_PLL_VDDA_CAL,
    rs_pllvdda_cal_is_bypassed,
    0,
    rs_pllvdda_cal_execute,
    rs_pllvdda_cal_set_done,
    rs_pllvdda_cal_clear_done,
    rs_pllvdda_cal_apply_result,
    rs_pllvdda_cal_uninit
};

/*void rs_pllvdda_common_cal_init() BANKING_CTRL {*/
    /*rs_pllvdda_common_cal.cal_phy_status_val = ST_RX_PLL_VDDA_CAL;*/
    /*rs_pllvdda_common_cal.is_bypassed        = rs_pllvdda_cal_is_bypassed;*/
    /*rs_pllvdda_common_cal.init               = rs_pllvdda_cal_init;*/
    /*rs_pllvdda_common_cal.set_start          = rs_pllvdda_cal_set_start;*/
    /*rs_pllvdda_common_cal.clear_start        = rs_pllvdda_cal_clear_start;*/
    /*rs_pllvdda_common_cal.timeout_occurred   = rs_pllvdda_cal_timeout_occurred;*/
    /*rs_pllvdda_common_cal.set_pass           = rs_pllvdda_cal_set_pass;*/
    /*rs_pllvdda_common_cal.clear_pass         = rs_pllvdda_cal_clear_pass;*/
    /*rs_pllvdda_common_cal.get_hw_done_signal = rs_pllvdda_cal_get_hw_done_signal;*/
    /*rs_pllvdda_common_cal.set_done           = rs_pllvdda_cal_set_done;*/
    /*rs_pllvdda_common_cal.clear_done         = rs_pllvdda_cal_clear_done;*/
    /*rs_pllvdda_common_cal.apply_result       = rs_pllvdda_cal_apply_result;*/
    /*rs_pllvdda_common_cal.uninit             = rs_pllvdda_cal_uninit;*/
/*}*/

bool ts_plldcc_cal_is_bypassed() {
    return (cmx_TX_PLLDCC_CAL_EXT_EN == 1);
}

void ts_plldcc_cal_execute() {
    pll_dcc_vdd_ts();
}

void ts_plldcc_cal_set_done() {
    lnx_TX_PLLDCC_CAL_DONE_LANE = 1;
}

void ts_plldcc_cal_clear_done() {
    lnx_TX_PLLDCC_CAL_DONE_LANE = 0;
}

void ts_plldcc_cal_apply_result() {
	lnx_cal_ts_plldcc[TX_PLL_RATE_INX] = reg_PLL_TS_DCC_CAL_RESULT_RD_LANE_6_0 | 0;
}

void ts_plldcc_cal_uninit() {
	set_ts_bypass_en(0);
	reg_PLL_TS_LCPLL_DCC_EN_LANE = 0;
	reg_PLL_TS_LCDIV1P5_DCC_EN_LANE = 0;
}

__code struct calibration_abstract_base_t ts_plldcc_common_cal = {
    ST_RS_PLLDCC_CAL,
    ts_plldcc_cal_is_bypassed,
    0,
    ts_plldcc_cal_execute,
    ts_plldcc_cal_set_done,
    ts_plldcc_cal_clear_done,
    ts_plldcc_cal_apply_result,
    ts_plldcc_cal_uninit
};

/*void ts_plldcc_common_cal_init() BANKING_CTRL {*/
    /*ts_plldcc_common_cal.cal_phy_status_val = ST_TX_PLLDCC_CAL;*/
    /*ts_plldcc_common_cal.is_bypassed        = ts_plldcc_cal_is_bypassed;*/
    /*ts_plldcc_common_cal.init               = ts_plldcc_cal_init;*/
    /*ts_plldcc_common_cal.set_start          = ts_plldcc_cal_set_start;*/
    /*ts_plldcc_common_cal.clear_start        = ts_plldcc_cal_clear_start;*/
    /*ts_plldcc_common_cal.timeout_occurred   = ts_plldcc_cal_timeout_occurred;*/
    /*ts_plldcc_common_cal.set_pass           = ts_plldcc_cal_set_pass;*/
    /*ts_plldcc_common_cal.clear_pass         = ts_plldcc_cal_clear_pass;*/
    /*ts_plldcc_common_cal.get_hw_done_signal = ts_plldcc_cal_get_hw_done_signal;*/
    /*ts_plldcc_common_cal.set_done           = ts_plldcc_cal_set_done;*/
    /*ts_plldcc_common_cal.clear_done         = ts_plldcc_cal_clear_done;*/
    /*ts_plldcc_common_cal.apply_result       = ts_plldcc_cal_apply_result;*/
    /*ts_plldcc_common_cal.uninit             = ts_plldcc_cal_uninit;*/
/*}*/

bool ts_pllvdda_cal_is_bypassed() {
    return (cmx_TX_PLLVDDA_CAL_EXT_EN == 1);
}

void ts_pllvdda_cal_execute() {
    pll_vdd_freq_ts();
}

void ts_pllvdda_cal_set_done() {
	lnx_TX_PLLVDDA_CAL_DONE_LANE = 1;
}

void ts_pllvdda_cal_clear_done() {
	lnx_TX_PLLVDDA_CAL_DONE_LANE = 0;
}

void ts_pllvdda_cal_apply_result() {
	lnx_cal_ts_pllvdda_fbdiv[TX_PLL_RATE_INX] = reg_PLL_TS_VDDA_FBDIV_CAL_RESULT_RD_LANE_3_0 | 0;
	lnx_cal_ts_pllvdda_intp[TX_PLL_RATE_INX] = reg_PLL_TS_VDDA_INTP_CAL_RESULT_RD_LANE_3_0 | 0;
	lnx_cal_ts_pllvdda_pfd[TX_PLL_RATE_INX] = reg_PLL_TS_VDDA_PFD_CAL_RESULT_RD_LANE_3_0 | 0;
}

void ts_pllvdda_cal_uninit() {
	set_ts_bypass_en(0);
	reg_PLL_TS_VDDA_CAL_EN_LANE = 0;
}

__code struct calibration_abstract_base_t ts_pllvdda_common_cal = {
    ST_TS_PLL_VDDA_CAL,
    ts_pllvdda_cal_is_bypassed,
    0,
    ts_pllvdda_cal_execute,
    ts_pllvdda_cal_set_done,
    ts_pllvdda_cal_clear_done,
    ts_pllvdda_cal_apply_result,
    ts_pllvdda_cal_uninit
};

/*void ts_pllvdda_common_cal_init() BANKING_CTRL {*/
    /*ts_pllvdda_common_cal.cal_phy_status_val = ST_TX_PLL_VDDA_CAL;*/
    /*ts_pllvdda_common_cal.is_bypassed        = ts_pllvdda_cal_is_bypassed;*/
    /*ts_pllvdda_common_cal.init               = ts_pllvdda_cal_init;*/
    /*ts_pllvdda_common_cal.set_start          = ts_pllvdda_cal_set_start;*/
    /*ts_pllvdda_common_cal.clear_start        = ts_pllvdda_cal_clear_start;*/
    /*ts_pllvdda_common_cal.timeout_occurred   = ts_pllvdda_cal_timeout_occurred;*/
    /*ts_pllvdda_common_cal.set_pass           = ts_pllvdda_cal_set_pass;*/
    /*ts_pllvdda_common_cal.clear_pass         = ts_pllvdda_cal_clear_pass;*/
    /*ts_pllvdda_common_cal.get_hw_done_signal = ts_pllvdda_cal_get_hw_done_signal;*/
    /*ts_pllvdda_common_cal.set_done           = ts_pllvdda_cal_set_done;*/
    /*ts_pllvdda_common_cal.clear_done         = ts_pllvdda_cal_clear_done;*/
    /*ts_pllvdda_common_cal.apply_result       = ts_pllvdda_cal_apply_result;*/
    /*ts_pllvdda_common_cal.uninit             = ts_pllvdda_cal_uninit;*/
/*}*/

bool rs_pll_amp_cal_is_bypassed() {
    return false;
}

void rs_pll_amp_cal_execute() {
    pll_amp_rs();
}

void rs_pll_amp_cal_set_done() {
	lnx_RX_PLL_AMP_CAL_DONE_LANE = 1;
}

void rs_pll_amp_cal_clear_done() {
	lnx_RX_PLL_AMP_CAL_DONE_LANE = 0;
}

void rs_pll_amp_cal_apply_result() {
}

void rs_pll_amp_cal_uninit() {
	delay(T_8us);
}

__code struct calibration_abstract_base_t rs_pll_amp_common_cal = {
    ST_RS_PLL_AMP_CAL,
    rs_pll_amp_cal_is_bypassed,
    0,
    rs_pll_amp_cal_execute,
    rs_pll_amp_cal_set_done,
    rs_pll_amp_cal_clear_done,
    rs_pll_amp_cal_apply_result,
    rs_pll_amp_cal_uninit
};

bool ts_pll_amp_cal_is_bypassed() {
    return false;
}

void ts_pll_amp_cal_execute() {
    pll_amp_ts();
}

void ts_pll_amp_cal_set_done() {
	lnx_TX_PLL_AMP_CAL_DONE_LANE = 1;
}

void ts_pll_amp_cal_clear_done() {
	lnx_TX_PLL_AMP_CAL_DONE_LANE = 0;
}

void ts_pll_amp_cal_apply_result() {
}

void ts_pll_amp_cal_uninit() {
	delay(T_8us);
}

__code struct calibration_abstract_base_t ts_pll_amp_common_cal = {
    ST_TS_PLL_AMP_CAL,
    ts_pll_amp_cal_is_bypassed,
    0,
    ts_pll_amp_cal_execute,
    ts_pll_amp_cal_set_done,
    ts_pll_amp_cal_clear_done,
    ts_pll_amp_cal_apply_result,
    ts_pll_amp_cal_uninit
};
