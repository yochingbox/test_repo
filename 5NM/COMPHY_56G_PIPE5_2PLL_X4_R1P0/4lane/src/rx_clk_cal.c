/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file rx_cal.c
* \purpose rx clk calibration
* \History
*	7/29/2019 Heejeong Ryu		Initial 
*/
#include "common.h"
#include "calibration_common.h"

// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK3
#pragma constseg BANK3
#endif

#define RXDCC_EN_DLLCLK			reg_RXDCC_EN_DLLCLK_LANE
#define RXDCC_EN_EOMCLK			reg_RXDCC_EN_EOMCLK_LANE
#define RXDCC_HG_DLLCLK 		reg_RXDCC_HG_DLLCLK_LANE
#define DLL_REF_FILT_BW 		reg_DLL_REF_FILT_BW_LANE
#define DLL_HI_BW				reg_DLL_HI_BW_LANE
#define CLATCH_EN 				reg_CLATCH_EN_LANE
#define CLATCH_ST_1_0 			reg_CLATCH_ST_LANE_1_0 
#define EOM_CLK_EN				reg_EOM_CLK_EN_LANE
#define EOM_DLL_REF_FILT_BW		reg_EOM_DLL_REF_FILT_BW_LANE
#define EOM_DLL_HI_BW  			reg_EOM_DLL_HI_BW_LANE
#define EOM_CLATCH_EN 			reg_EOM_CLATCH_EN_LANE
#define EOM_CLATCH_ST_1_0 		reg_EOM_CLATCH_ST_LANE_1_0
#define PI_DCCEN 				reg_PI_DCCEN_LANE
#define RXDCC_HG_DATACLK 		reg_RXDCC_HG_DATACLK_LANE
#define INTP_BIAS_SHORT_EN 		reg_EOM_INTP_BIAS_SHORT_EN_LANE
#define EOM_DCCEN 				reg_EOM_DCCEN_LANE
#define RXDCC_HG_EOMCLK 		reg_RXDCC_HG_EOMCLK_LANE
#define EOM_INTP_BIAS_SHORT_EN 	reg_EOM_INTP_BIAS_SHORT_EN_LANE
#define ALIGN90_REF_FILT_BW 	reg_ALIGN90_REF_FILT_BW_LANE
#define PATH_DISABLE_EDGE 		reg_PATH_DISABLE_EDGE_LANE
#define PU_ALIGN90_DCC_CMP 		reg_PU_ALIGN90_DCC_CMP_LANE
#define PU_EOM_ALIGN90_DCC_CMP 	reg_PU_EOM_ALIGN90_DCC_CMP_LANE

bool rx_clk_cal_is_bypassed() {
    return (cmx_RX_CAL_EXT_EN == 1);
}

void rx_clk_cal_init() {
	if (reg_RXSPEED_DIV_LANE_2_0 & 0x04) {  //  the PI DCC is not able to be detected when DIV2 is on
		reg_RX_PI_DCC_CAL_BYPASS_EN_LANE =  1; 
		reg_RX_EOM_PI_DCC_CAL_BYPASS_EN_LANE = 1; 	//both default CONT_EN=0, no need to config in continuous calib
	}
	else { //set back default setting
		reg_RX_PI_DCC_CAL_BYPASS_EN_LANE = 0; 
		reg_RX_EOM_PI_DCC_CAL_BYPASS_EN_LANE = 0;
	}
	if ((reg_RXSPEED_DIV_LANE_2_0 & 0x03) != 0) {    // EDGE clk will turn off at low data rate
		reg_RX_ALIGN90_CAL_BYPASS_EN_LANE = 1;  // turn off the EDGE path related calibration
		reg_RX_EDGE_DCC_CAL_BYPASS_EN_LANE = 1; 
		reg_RX_EOM_PI_CAL_BYPASS_EN_LANE = 1;   // EOM is aligned to EDGE. This cal is N/A in continuous calib
	}
	else{
		reg_RX_ALIGN90_CAL_BYPASS_EN_LANE = 0;
		reg_RX_EDGE_DCC_CAL_BYPASS_EN_LANE = 0; 
		reg_RX_EOM_PI_CAL_BYPASS_EN_LANE = 0;
	}
	
	RXDCC_EN_DLLCLK = 1;
	RXDCC_HG_DLLCLK = 0;
	EOM_CLK_EN = 1; 
	DLL_REF_FILT_BW = 1;
	DLL_HI_BW = 1;

	reg_RX_DLL_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 4;	//for safe, set back to default
	reg_RX_DLL_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 = 1;	
	
	reg_RX_PI_DCC_CAL_DIR_INV_LANE = 1;
	
	EOM_DLL_REF_FILT_BW = 1; 
	EOM_DLL_HI_BW = 1;
	
	PI_DCCEN = 1;
	RXDCC_HG_DATACLK = 0;
	//INTP_BIAS_SHORT_EN = 0; //no need from according to psudo code 12/16/2019

	EOM_DCCEN = 1;
	RXDCC_HG_EOMCLK	= 0;
	//EOM_INTP_BIAS_SHORT_EN = 0; //no need from according to psudo code 12/16/2019

	ALIGN90_REF_FILT_BW = 0;

	EOM_EN_E = 0;
	//save_path_disable_edge = PATH_DISABLE_EDGE;
	//PATH_DISABLE_EDGE = 0;

	PU_ALIGN90_DCC_CMP = 1;
	PU_EOM_ALIGN90_DCC_CMP = 1;
}

void rx_clk_cal_set_start() {
	reg_RX_CLK_TOP_START_LANE = 1;
}

void rx_clk_cal_clear_start() {
	reg_RX_CLK_TOP_START_LANE = 0;
}

bool rx_clk_cal_timeout_occurred() {
    if ((reg_RX_DLL_CAL_TIMEOUT_RD_LANE)      ||
        (reg_RX_PI_DCC_CAL_TIMEOUT_RD_LANE)   ||
        (reg_RX_ALIGN90_CAL_TIMEOUT_RD_LANE)  ||
		(reg_RX_DATA_DCC_CAL_TIMEOUT_RD_LANE) ||
        (reg_RX_EDGE_DCC_CAL_TIMEOUT_RD_LANE)) {
        return true;
    }
    return false;
}

void rx_clk_cal_set_pass() {
	lnx_RX_CLK_CAL_PASS_LANE = 1;
}

void rx_clk_cal_clear_pass() {
	lnx_RX_CLK_CAL_PASS_LANE = 0;
}

uint8_t rx_clk_cal_get_hw_done_signal() {
    return reg_RX_CLK_TOP_DONE_LANE;
}

void rx_clk_cal_set_done() {
	lnx_RX_CLK_CAL_DONE_LANE = 1;
}

void rx_clk_cal_clear_done() {
	lnx_RX_CLK_CAL_DONE_LANE = 0;
}

void rx_clk_cal_apply_result() {
	if(phy_mode != SERDES) {
		lnx_cal_rx_e2c_dcc[gen_rx]		= reg_RX_E2C_DCC_CAL_RESULT_EXT_LANE_6_0;      
		lnx_cal_rx_dll_msb[gen_rx]		= reg_RX_DLL_CAL_RESULT_MSB_EXT_LANE_3_0;      
		lnx_cal_rx_dll_lsb[gen_rx]		= reg_RX_DLL_CAL_RESULT_LSB_EXT_LANE_6_0;      
		lnx_cal_rx_pi_dcc[gen_rx]		= reg_RX_PI_DCC_CAL_RESULT_EXT_LANE_5_0;       
		lnx_cal_rx_align90_msb[gen_rx]	= reg_RX_ALIGN90_CAL_RESULT_MSB_EXT_LANE_2_0;  
		lnx_cal_rx_align90_lsb[gen_rx]	= reg_RX_ALIGN90_CAL_RESULT_LSB_EXT_LANE_6_0;  
		lnx_cal_rx_data_dcc_msb[gen_rx] = reg_RX_DATA_DCC_CAL_RESULT_MSB_EXT_LANE_2_0; 
		lnx_cal_rx_data_dcc_lsb[gen_rx] = reg_RX_DATA_DCC_CAL_RESULT_LSB_EXT_LANE_5_0; 
		lnx_cal_rx_edge_dcc_msb[gen_rx] = reg_RX_EDGE_DCC_CAL_RESULT_MSB_EXT_LANE_2_0; 
		lnx_cal_rx_edge_dcc_lsb[gen_rx] = reg_RX_EDGE_DCC_CAL_RESULT_LSB_EXT_LANE_5_0; 
	}
}

void rx_clk_cal_uninit() {
}

__code struct calibration_abstract_base_t rx_clk_common_cal = {
    ST_RX_CAL,
    rx_clk_cal_is_bypassed,
    0,
    rx_clk_cal_init,
    rx_clk_cal_set_start,
    rx_clk_cal_clear_start,
    rx_clk_cal_timeout_occurred,
    rx_clk_cal_set_pass,
    rx_clk_cal_clear_pass,
    rx_clk_cal_get_hw_done_signal,
    rx_clk_cal_set_done,
    rx_clk_cal_clear_done,
    rx_clk_cal_apply_result,
    rx_clk_cal_uninit
};

void rx_clk_cont_cal(void) BANKING_CTRL {
	
	if(cmx_RXDCC_DLL_CAL_CONT_EN) {
	
		DLL_REF_FILT_BW = 0;
		DLL_HI_BW=0;
		
		reg_RX_DLL_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 0x14;
		reg_RX_DLL_CAL_AUTO_ZERO_CLK_H_2M_PULSE_CNT_LANE_2_0 = 0x7;
		
		reg_RX_CLK_TOP_CONT_START_LANE = 1;
	
	}
	
}	

