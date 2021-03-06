/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file calibration_common.c
* \purpose Common calibration sequence
* \History
*	2/6/2020 Andrew Danilovic		Initial
*/

#include "common.h"
#include "calibration_common.h"

#ifdef _56G_5NM
#include "rx_imp_cal.h"
#include "pll_cal.h"
#include "dcc_cal.h"
#include "rx_clk_cal.h"
#include "rxeom_cal.h"
#endif // #ifdef _56G_5NM

// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK3
#pragma constseg BANK3
#endif

#ifdef _56G_5NM
#undef X
#define X(a, b) &b,
static struct calibration_abstract_base_t * calibration_concrete[NUM_CALIBRATION_SEQUENCES] = {
    CALIBRATION_TABLE
};
#undef X

static bool cal_table_initialized = false;

static void calibration_init() BANKING_CTRL {
    /*rx_imp_common_cal_init();*/
    /*rs_plldcc_common_cal_init();*/
    /*rs_pllvdda_common_cal_init();*/
    /*ts_plldcc_common_cal_init();*/
    calibration_concrete[RX_IMP_CAL_INDEX]     = &rx_imp_common_cal;
    calibration_concrete[RS_PLLDCC_CAL_INDEX]  = &rs_plldcc_common_cal;
    calibration_concrete[RS_PLLVDDA_CAL_INDEX] = &rs_pllvdda_common_cal;
    calibration_concrete[RS_PLL_AMP_CAL_INDEX] = &rs_pll_amp_common_cal;
    calibration_concrete[TS_PLLDCC_CAL_INDEX]  = &ts_plldcc_common_cal;
    calibration_concrete[TS_PLLVDDA_CAL_INDEX] = &ts_pllvdda_common_cal;
    calibration_concrete[TS_PLL_AMP_CAL_INDEX] = &ts_pll_amp_common_cal;
    calibration_concrete[TXDCC_CAL_INDEX]      = &txdcc_common_cal;
    calibration_concrete[RX_CLK_CAL_INDEX]     = &rx_clk_common_cal;
    calibration_concrete[RXEOM_CAL_INDEX]      = &rxeom_common_cal;
    cal_table_initialized = true;
}
#endif // #ifdef _56G_5NM

#ifdef _56G_7NM
void calibration_execute(const enum calibration_index_t cal_index) BANKING_CTRL {

    switch(cal_index) {
        case RX_IMP_CAL_INDEX:
            rximp_cal();
            break;

        case RS_PLLDCC_CAL_INDEX:
            rs_plldcc_cal();
            break;

        case RS_PLLVDDA_CAL_INDEX:
            rs_pllvdda_cal(0xf);
            break;

        case RS_PLL_AMP_CAL_INDEX:
            rs_pll_amp_cal();
            break;

        case TS_PLLDCC_CAL_INDEX:
            ts_plldcc_cal();
            break;

        case TS_PLLVDDA_CAL_INDEX:
            ts_pllvdda_cal(0xf);
            break;

        case TS_PLL_AMP_CAL_INDEX:
            ts_pll_amp_cal();
            break;

        case TXDCC_CAL_INDEX:
            txdcc_cal();
            break;

        case RX_CLK_CAL_INDEX:
            rx_clk_cal();
            break;

        case RXEOM_CAL_INDEX:
            rx_eom_cal();
            break;
    }
}

#else // #ifdef _56G_7NM
void calibration_execute(const enum calibration_index_t cal_index) BANKING_CTRL {
    
    struct calibration_abstract_base_t * cal;

    if(!cal_table_initialized) {
        calibration_init();
    }

    cal = calibration_concrete[cal_index];

    if(cal->cal_phy_status_val) {
        PHY_STATUS = cal->cal_phy_status_val;
    }

    if(cal->is_bypassed()) {
        cal->set_done();
        return;
    }

    if(cal->wait_for_cont_cal_to_end) {
        cal->wait_for_cont_cal_to_end();
    }

    cal->clear_pass();

    cal->clear_done();

    cal->init();

    cal->clear_start();
    cal->set_start();
	delay(T_p5us);
    while(!(cal->get_hw_done_signal()));

    if(cal->timeout_occurred()) {
        cal->clear_pass();
    }
    else {
        cal->set_pass();
    }

    cal->clear_start();

    if(cal->apply_result) {
        cal->apply_result();
    }

    if(cal->uninit) {
        cal->uninit();
    }

    cal->set_done();

    return;
}
#endif // #else // #ifdef _56G_7NM
