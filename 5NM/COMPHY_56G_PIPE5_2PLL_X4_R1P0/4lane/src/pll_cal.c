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

void rs_plldcc_cal_init() {
	reg_PLL_DCC_VDD_RS_TOP_START_LANE = 0;

	reg_PLL_RS_DCC_CAL_VAL_MAX_LANE_6_0 = 0x3f;
	reg_PLL_RS_DCC_CAL_VAL_MIN_LANE_6_0 = 0x7f;
	reg_PLL_RS_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 4;
	reg_PLL_RS_DIV_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 4;

	reg_PLL_RS_LCPLL_DCC_EN_LANE = 1;
	reg_PLL_RS_LCDIV1P5_DCC_EN_LANE = 1;

	reg_PLL_RS_VDDA_FBDIV_CAL_BYPASS_EN_LANE = 1; 
	reg_PLL_RS_VDDA_INTP_CAL_BYPASS_EN_LANE = 1;
	reg_PLL_RS_VDDA_PFD_CAL_BYPASS_EN_LANE = 1;

	reg_PLL_RS_DCC_CAL_BYPASS_EN_LANE = 0;
	reg_PLL_RS_DCC_CAL_SINGLE_EN_LANE = 1;


	reg_PLL_RS_DIV_DCC_CAL_DIR_INV_LANE = 1;
	
	if(reg_PLL_RS_LCPLL_POSTDIV_EN_LANE == 0) {
    	reg_PLL_RS_ANA_RSVDA_LANE_7_0 |= 0x80; // set ana_rsvda[7] = 1
		reg_PLL_RS_DCC_CAL_DIR_INV_LANE = 0;
		reg_PLL_RS_DIV_DCC_CAL_BYPASS_EN_LANE = 1;
	}
	else {
    	reg_PLL_RS_ANA_RSVDA_LANE_7_0 &= 0x7f; // set ana_rsvda[7] = 0
		reg_PLL_RS_DCC_CAL_DIR_INV_LANE = 1;
		reg_PLL_RS_DIV_DCC_CAL_BYPASS_EN_LANE = 0;
		reg_PLL_RS_DIV_DCC_CAL_SINGLE_EN_LANE = 1;
	}
}

void rs_plldcc_cal_set_start() {
	reg_PLL_DCC_VDD_RS_TOP_START_LANE = 1;
}

void rs_plldcc_cal_clear_start() {
	reg_PLL_DCC_VDD_RS_TOP_START_LANE = 0;
}

bool rs_plldcc_cal_timeout_occurred() {
    if(reg_PLL_RS_DCC_CAL_TIMEOUT_RD_LANE) {
        return true;
    }
    return false;
}

void rs_plldcc_cal_set_pass() {
	lnx_RX_PLLDCC_CAL_PASS_LANE = 1;
}

void rs_plldcc_cal_clear_pass() {
	lnx_RX_PLLDCC_CAL_PASS_LANE = 0;
}

uint8_t rs_plldcc_cal_get_hw_done_signal() {
    return reg_PLL_DCC_VDD_RS_TOP_DONE_LANE;
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
    ST_RX_PLLDCC_CAL,
    rs_plldcc_cal_is_bypassed,
    0,
    rs_plldcc_cal_init,
    rs_plldcc_cal_set_start,
    rs_plldcc_cal_clear_start,
    rs_plldcc_cal_timeout_occurred,
    rs_plldcc_cal_set_pass,
    rs_plldcc_cal_clear_pass,
    rs_plldcc_cal_get_hw_done_signal,
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

void rs_pllvdda_cal_init() {
	reg_PLL_RS_VDDA_CAL_EN_LANE = 1; 
	reg_PLL_RS_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 4;
	reg_PLL_RS_VDDA_FBDIV_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 4;
	reg_PLL_RS_VDDA_INTP_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 4;
	reg_PLL_RS_VDDA_PFD_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 4;
	reg_PLL_RS_VDDR_SEL_LANE_3_0 = 0xf;
	
	// Requested by Fei to use the initial value
	reg_PLL_RS_VDDA_FBDIV_CAL_RESULT_EXT_LANE_3_0 = 0xb;
	reg_PLL_RS_VDDA_INTP_CAL_RESULT_EXT_LANE_3_0 = 7;
	reg_PLL_RS_VDDA_PFD_CAL_RESULT_EXT_LANE_3_0 = 7;

	reg_PLL_RS_DCC_CAL_BYPASS_EN_LANE = 1;
    reg_PLL_RS_DIV_DCC_CAL_BYPASS_EN_LANE = 1;
	
	reg_PLL_RS_VDDA_FBDIV_CAL_BYPASS_EN_LANE = 0;
	reg_PLL_RS_VDDA_FBDIV_CAL_SINGLE_EN_LANE = 1; 
	reg_PLL_RS_VDDA_FBDIV_CAL_CONT_EN_LANE = 0; 
	reg_PLL_RS_VDDA_INTP_CAL_BYPASS_EN_LANE = 0;
	reg_PLL_RS_VDDA_INTP_CAL_SINGLE_EN_LANE = 1; 
	reg_PLL_RS_VDDA_INTP_CAL_CONT_EN_LANE = 0; 
	reg_PLL_RS_VDDA_PFD_CAL_BYPASS_EN_LANE = 0;
	reg_PLL_RS_VDDA_PFD_CAL_SINGLE_EN_LANE = 1; 
	reg_PLL_RS_VDDA_PFD_CAL_CONT_EN_LANE = 0; 
}

void rs_pllvdda_cal_set_start() {
	reg_PLL_DCC_VDD_RS_TOP_START_LANE = 1;
}

void rs_pllvdda_cal_clear_start() {
	reg_PLL_DCC_VDD_RS_TOP_START_LANE = 0;
}

bool rs_pllvdda_cal_timeout_occurred() {

	if( (reg_PLL_RS_VDDA_FBDIV_CAL_TIMEOUT_RD_LANE) ||
		(reg_PLL_RS_VDDA_INTP_CAL_TIMEOUT_RD_LANE)  ||
		(reg_PLL_RS_VDDA_PFD_CAL_TIMEOUT_RD_LANE)) {
        return true;
    }
    return false;
}

void rs_pllvdda_cal_set_pass() {
	lnx_RX_PLLVDDA_CAL_PASS_LANE = 1;
}

void rs_pllvdda_cal_clear_pass() {
	lnx_RX_PLLVDDA_CAL_PASS_LANE = 0;
}

uint8_t rs_pllvdda_cal_get_hw_done_signal() {
    return reg_PLL_DCC_VDD_RS_TOP_DONE_LANE;
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
    ST_RX_PLL_VDDA_CAL,
    rs_pllvdda_cal_is_bypassed,
    0,
    rs_pllvdda_cal_init,
    rs_pllvdda_cal_set_start,
    rs_pllvdda_cal_clear_start,
    rs_pllvdda_cal_timeout_occurred,
    rs_pllvdda_cal_set_pass,
    rs_pllvdda_cal_clear_pass,
    rs_pllvdda_cal_get_hw_done_signal,
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

void ts_plldcc_cal_init() {
	reg_PLL_TS_DCC_CAL_VAL_MAX_LANE_6_0 = 0x3f;
	reg_PLL_TS_DCC_CAL_VAL_MIN_LANE_6_0 = 0x7f;
	reg_PLL_TS_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 4;
	reg_PLL_TS_DIV_DCC_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 4;

	reg_PLL_TS_LCPLL_DCC_EN_LANE = 1;
	reg_PLL_TS_LCDIV1P5_DCC_EN_LANE = 1;

	reg_PLL_TS_VDDA_FBDIV_CAL_BYPASS_EN_LANE = 1; 
	reg_PLL_TS_VDDA_INTP_CAL_BYPASS_EN_LANE = 1;
	reg_PLL_TS_VDDA_PFD_CAL_BYPASS_EN_LANE = 1;

	reg_PLL_TS_DCC_CAL_BYPASS_EN_LANE = 0;
	reg_PLL_TS_DCC_CAL_SINGLE_EN_LANE = 1;

	reg_PLL_TS_DIV_DCC_CAL_DIR_INV_LANE = 1;
	
	if(reg_PLL_TS_LCPLL_POSTDIV_EN_LANE == 0)
    {
    	reg_PLL_TS_ANA_RSVDA_LANE_7_0 |= 0x80; // set ana_rsvda[7] = 1
		reg_PLL_TS_DCC_CAL_DIR_INV_LANE = 0;
		reg_PLL_TS_DIV_DCC_CAL_BYPASS_EN_LANE = 1;
	}
	else
 	{
    	reg_PLL_TS_ANA_RSVDA_LANE_7_0 &= 0x7f; // set ana_rsvda[7] = 0
		reg_PLL_TS_DCC_CAL_DIR_INV_LANE = 1;
		reg_PLL_TS_DIV_DCC_CAL_BYPASS_EN_LANE = 0;
		reg_PLL_TS_DIV_DCC_CAL_SINGLE_EN_LANE = 1;
	}
}

void ts_plldcc_cal_set_start() {
	reg_PLL_DCC_VDD_TS_TOP_START_LANE = 1;
}

void ts_plldcc_cal_clear_start() {
	reg_PLL_DCC_VDD_TS_TOP_START_LANE = 0;
}

bool ts_plldcc_cal_timeout_occurred() {
    if(reg_PLL_TS_DCC_CAL_TIMEOUT_RD_LANE) {
        return true;
    }
    return false;
}

void ts_plldcc_cal_set_pass() {
	lnx_TX_PLLDCC_CAL_PASS_LANE = 1;
}

void ts_plldcc_cal_clear_pass() {
	lnx_TX_PLLDCC_CAL_PASS_LANE = 0;
}

uint8_t ts_plldcc_cal_get_hw_done_signal() {
    return reg_PLL_DCC_VDD_TS_TOP_DONE_LANE;
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
    ST_TX_PLLDCC_CAL,
    ts_plldcc_cal_is_bypassed,
    0,
    ts_plldcc_cal_init,
    ts_plldcc_cal_set_start,
    ts_plldcc_cal_clear_start,
    ts_plldcc_cal_timeout_occurred,
    ts_plldcc_cal_set_pass,
    ts_plldcc_cal_clear_pass,
    ts_plldcc_cal_get_hw_done_signal,
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

void ts_pllvdda_cal_init() {
    reg_PLL_TS_VDDA_CAL_EN_LANE = 1;
	reg_PLL_TS_VDDA_FBDIV_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 4;
	reg_PLL_TS_VDDA_INTP_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 4;
	reg_PLL_TS_VDDA_PFD_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 4;
	reg_PLL_TS_VDDR_SEL_LANE_3_0 = 0xf;

	// Requested by Fei to use the initial value
	reg_PLL_TS_VDDA_FBDIV_CAL_RESULT_EXT_LANE_3_0 = 0xb;
	reg_PLL_TS_VDDA_INTP_CAL_RESULT_EXT_LANE_3_0 = 7;
	reg_PLL_TS_VDDA_PFD_CAL_RESULT_EXT_LANE_3_0 = 7;

	reg_PLL_TS_DCC_CAL_BYPASS_EN_LANE = 1;
    reg_PLL_TS_DIV_DCC_CAL_BYPASS_EN_LANE = 1;
	
	reg_PLL_TS_VDDA_FBDIV_CAL_BYPASS_EN_LANE = 0;
	reg_PLL_TS_VDDA_FBDIV_CAL_SINGLE_EN_LANE = 1; 
	reg_PLL_TS_VDDA_FBDIV_CAL_CONT_EN_LANE = 0; 
	reg_PLL_TS_VDDA_INTP_CAL_BYPASS_EN_LANE = 0;
	reg_PLL_TS_VDDA_INTP_CAL_SINGLE_EN_LANE = 1; 
	reg_PLL_TS_VDDA_INTP_CAL_CONT_EN_LANE = 0; 
	reg_PLL_TS_VDDA_PFD_CAL_BYPASS_EN_LANE = 0;
	reg_PLL_TS_VDDA_PFD_CAL_SINGLE_EN_LANE = 1; 
	reg_PLL_TS_VDDA_PFD_CAL_CONT_EN_LANE = 0; 
}

void ts_pllvdda_cal_set_start() {
	reg_PLL_DCC_VDD_TS_TOP_START_LANE = 1;
}

void ts_pllvdda_cal_clear_start() {
	reg_PLL_DCC_VDD_TS_TOP_START_LANE = 0;
}

bool ts_pllvdda_cal_timeout_occurred() {

	if( (reg_PLL_TS_VDDA_FBDIV_CAL_TIMEOUT_RD_LANE) ||
		(reg_PLL_TS_VDDA_INTP_CAL_TIMEOUT_RD_LANE)  ||
		(reg_PLL_TS_VDDA_PFD_CAL_TIMEOUT_RD_LANE)) {
        return true;
    }
    return false;
}

void ts_pllvdda_cal_set_pass() {
	lnx_TX_PLLVDDA_CAL_PASS_LANE = 1;
}

void ts_pllvdda_cal_clear_pass() {
	lnx_TX_PLLVDDA_CAL_PASS_LANE = 0;
}

uint8_t ts_pllvdda_cal_get_hw_done_signal() {
    return reg_PLL_DCC_VDD_TS_TOP_DONE_LANE;
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
    ST_TX_PLL_VDDA_CAL,
    ts_pllvdda_cal_is_bypassed,
    0,
    ts_pllvdda_cal_init,
    ts_pllvdda_cal_set_start,
    ts_pllvdda_cal_clear_start,
    ts_pllvdda_cal_timeout_occurred,
    ts_pllvdda_cal_set_pass,
    ts_pllvdda_cal_clear_pass,
    ts_pllvdda_cal_get_hw_done_signal,
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

void rs_pll_amp_cal_init() {
}

void rs_pll_amp_cal_set_start() {
	reg_PLL_AMP_RS_TOP_START_LANE = 1;
}

void rs_pll_amp_cal_clear_start() {
	reg_PLL_AMP_RS_TOP_START_LANE = 0;
}

bool rs_pll_amp_cal_timeout_occurred() {

	if(reg_PLL_RS_AMP_CAL_TIMEOUT_RD_LANE) {
        return true;
    }
    return false;
}

void rs_pll_amp_cal_set_pass() {
	lnx_RX_PLL_AMP_CAL_PASS_LANE = 1;
}

void rs_pll_amp_cal_clear_pass() {
	lnx_RX_PLL_AMP_CAL_PASS_LANE = 0;
}

uint8_t rs_pll_amp_cal_get_hw_done_signal() {
    return reg_PLL_AMP_RS_TOP_DONE_LANE;
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
    0,
    rs_pll_amp_cal_is_bypassed,
    0,
    rs_pll_amp_cal_init,
    rs_pll_amp_cal_set_start,
    rs_pll_amp_cal_clear_start,
    rs_pll_amp_cal_timeout_occurred,
    rs_pll_amp_cal_set_pass,
    rs_pll_amp_cal_clear_pass,
    rs_pll_amp_cal_get_hw_done_signal,
    rs_pll_amp_cal_set_done,
    rs_pll_amp_cal_clear_done,
    rs_pll_amp_cal_apply_result,
    rs_pll_amp_cal_uninit
};

bool ts_pll_amp_cal_is_bypassed() {
    return false;
}

void ts_pll_amp_cal_init() {
}

void ts_pll_amp_cal_set_start() {
	reg_PLL_AMP_TS_TOP_START_LANE = 1;
}

void ts_pll_amp_cal_clear_start() {
	reg_PLL_AMP_TS_TOP_START_LANE = 0;
}

bool ts_pll_amp_cal_timeout_occurred() {

	if(reg_PLL_TS_AMP_CAL_TIMEOUT_RD_LANE) {
        return true;
    }
    return false;
}

void ts_pll_amp_cal_set_pass() {
	lnx_TX_PLL_AMP_CAL_PASS_LANE = 1;
}

void ts_pll_amp_cal_clear_pass() {
	lnx_TX_PLL_AMP_CAL_PASS_LANE = 0;
}

uint8_t ts_pll_amp_cal_get_hw_done_signal() {
    return reg_PLL_AMP_TS_TOP_DONE_LANE;
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
    0,
    ts_pll_amp_cal_is_bypassed,
    0,
    ts_pll_amp_cal_init,
    ts_pll_amp_cal_set_start,
    ts_pll_amp_cal_clear_start,
    ts_pll_amp_cal_timeout_occurred,
    ts_pll_amp_cal_set_pass,
    ts_pll_amp_cal_clear_pass,
    ts_pll_amp_cal_get_hw_done_signal,
    ts_pll_amp_cal_set_done,
    ts_pll_amp_cal_clear_done,
    ts_pll_amp_cal_apply_result,
    ts_pll_amp_cal_uninit
};
