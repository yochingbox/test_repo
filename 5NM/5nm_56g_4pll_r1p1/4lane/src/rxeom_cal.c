
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

void rxeom_cal_execute() {
    rx_eom();
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
    rxeom_cal_execute,
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
