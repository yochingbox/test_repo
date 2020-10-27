
/******************************************************************
* 	        Marvell Semiconductor
*******************************************************************
* \file rxeom_cal.c
* \purpose DLL calibration
* \History
*			02/21/2018 initial version
*/
#include "common.h"
#include "calibration_common.h"

#ifdef USE_BANKING
//WARNING: The following files need to be in the same bank:
//calibration_common.c, rx_imp_cal.c, pll_cal.c, dcc_cal.c, rx_clk_cal.c, rxeom_cal.c
#pragma codeseg BANK3
#pragma constseg BANK3
#endif

#define EOM_CLK_EN	reg_EOM_CLK_EN_LANE
#define EOM_DCCEN	    reg_EOM_DCCEN_LANE
#define PU_EOM_ALIGN90_DCC_CMP	reg_PU_EOM_ALIGN90_DCC_CMP_LANE
#define RX_EOM_TOP_START	reg_RX_EOM_TOP_START_LANE 
#define RX_EOM_TOP_DONE		reg_RX_EOM_TOP_DONE_LANE
#define EOM_DLL_REF_FILT_BW		reg_EOM_DLL_REF_FILT_BW_LANE
#define EOM_DLL_HI_BW  			reg_EOM_DLL_HI_BW_LANE
#define EOM_CLATCH_EN 			reg_EOM_CLATCH_EN_LANE
#define EOM_CLATCH_ST_1_0 		reg_EOM_CLATCH_ST_LANE_1_0
#define RXDCC_HG_EOMCLK 		reg_RXDCC_HG_EOMCLK_LANE
#define EOM_INTP_BIAS_SHORT_EN 	reg_EOM_INTP_BIAS_SHORT_EN_LANE

bool rxeom_cal_is_bypassed() {
    return (cmx_RX_EOM_CAL_EXT_EN == 1);
}

void rxeom_cal_wait_for_cont_cal_to_end() {
	if(reg_RX_EOM_TOP_CONT_START_LANE) {
		reg_RX_EOM_TOP_CONT_START_LANE = 0;
		while(!reg_RX_EOM_TOP_CONT_DONE_LANE);
	}	
}

void rxeom_cal_init() {
    //speed up rx eom cal for 5NM 56G to avoid simulation timeout
    //Removed after review with designer as these settings are not appropiate for real silicon
    /*reg_RX_EOM_DLL_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 0x1;*/
    /*reg_RX_EOM_DLL_CAL_VAL_MIN_MSB_LANE_3_0 = 0x0;*/
    /*reg_RX_EOM_DLL_CAL_RESULT_MSB_EXT_LANE_3_0 = 0x0;*/
    /*reg_RX_EOM_DLL_CAL_RESULT_LSB_EXT_LANE_6_0 = 0x0;*/
    /*reg_RX_EOM_PI_CAL_RESULT_EXT_LANE_10_8 = 0x0;*/
    /*reg_RX_EOM_PI_CAL_RESULT_EXT_LANE_7_0 = 0x02;*/

    rx_eom();
}

void rxeom_cal_set_start() {
}

void rxeom_cal_clear_start() {
}

bool rxeom_cal_timeout_occurred() {
    if ((reg_RX_EOM_DLL_CAL_TIMEOUT_RD_LANE)      ||
        (reg_RX_EOM_PI_CAL_TIMEOUT_RD_LANE)   ||
        (reg_RX_EOM_PI_DCC_CAL_TIMEOUT_RD_LANE)) {
        return true;
    }
    return false;
}

void rxeom_cal_set_pass() {
	lnx_RX_EOM_CAL_PASS_LANE = 1;
}

void rxeom_cal_clear_pass() {
	lnx_RX_EOM_CAL_PASS_LANE = 0;
}

uint8_t rxeom_cal_get_hw_done_signal() {
    return 1;
}

void rxeom_cal_set_done() {
	lnx_RX_EOM_CAL_DONE_LANE = 1;
}

void rxeom_cal_clear_done() {
	lnx_RX_EOM_CAL_DONE_LANE = 0;
}

void rxeom_cal_apply_result() {
}

void rxeom_cal_uninit() {
	if(!lnx_ESM_EN_LANE)  {
		PU_EOM_ALIGN90_DCC_CMP = 0;
		EOM_CLK_EN = 0;
		EOM_DCCEN  = 0;
	}	
}

__code struct calibration_abstract_base_t rxeom_common_cal = {
    ST_RX_EOM_CAL,
    rxeom_cal_is_bypassed,
    rxeom_cal_wait_for_cont_cal_to_end,
    rxeom_cal_init,
    rxeom_cal_set_start,
    rxeom_cal_clear_start,
    rxeom_cal_timeout_occurred,
    rxeom_cal_set_pass,
    rxeom_cal_clear_pass,
    rxeom_cal_get_hw_done_signal,
    rxeom_cal_set_done,
    rxeom_cal_clear_done,
    rxeom_cal_apply_result,
    rxeom_cal_uninit
};

void eom_clk_cont_cal(void) BANKING_CTRL {
	
	if(cmx_EOM_CLK_CAL_CONT_EN) {
		//EOM_CLK_EN = 1;
		//EOM_DCCEN = 1;
		//PU_EOM_ALIGN90_DCC_CMP = 1;		
		//reg_RX_EOM_TOP_CONT_START_LANE = 1;

        rx_eom_cont();
	}
	//else 
	//EOM_DCCEN = 0;
	//PU_EOM_ALIGN90_DCC_CMP = 0;
		
}	
