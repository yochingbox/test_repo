#ifndef _CALIBRATION_COMMON_H_
#define _CALIBRATION_COMMON_H_

#include "common.h"

struct calibration_abstract_base_t {
    uint8_t cal_phy_status_val;
    bool    (*is_bypassed)(void);
    void    (*wait_for_cont_cal_to_end)(void);
    void    (*init)(void);
    void    (*set_start)(void);
    void    (*clear_start)(void);
    bool    (*timeout_occurred)(void);
    void    (*set_pass)(void);
    void    (*clear_pass)(void);
    uint8_t (*get_hw_done_signal)(void);
    void    (*set_done)(void);
    void    (*clear_done)(void);
    void    (*apply_result)(void);
    void    (*uninit)(void);
};

#define CALIBRATION_TABLE                          \
    X(RX_IMP_CAL_INDEX,     rx_imp_common_cal)     \
    X(RS_PLLDCC_CAL_INDEX,  rs_plldcc_common_cal)  \
    X(RS_PLLVDDA_CAL_INDEX, rs_pllvdda_common_cal) \
    X(RS_PLL_AMP_CAL_INDEX, rs_pll_amp_common_cal) \
    X(TS_PLLDCC_CAL_INDEX,  ts_plldcc_common_cal)  \
    X(TS_PLLVDDA_CAL_INDEX, ts_pllvdda_common_cal) \
    X(TS_PLL_AMP_CAL_INDEX, ts_pll_amp_common_cal) \
    X(TXDCC_CAL_INDEX,      txdcc_common_cal)      \
    X(RX_CLK_CAL_INDEX,     rx_clk_common_cal)     \
    X(RXEOM_CAL_INDEX,      rxeom_common_cal)

#undef X
#define X(a, b) a,
enum calibration_index_t {
    CALIBRATION_TABLE
    NUM_CALIBRATION_SEQUENCES
};
#undef X

void calibration_execute(const enum calibration_index_t cal_index) BANKING_CTRL;

#endif //#define _CALIBRATION_COMMON_H_
