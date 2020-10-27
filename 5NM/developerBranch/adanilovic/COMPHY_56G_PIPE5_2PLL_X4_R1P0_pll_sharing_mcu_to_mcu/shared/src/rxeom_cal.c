
/******************************************************************
* 	        Marvell Semiconductor
*******************************************************************
* \file rxeom_cal.c
* \purpose DLL calibration
* \History
*			02/21/2018 initial version
*/
#include "common.h"
#pragma codeseg BANK3
#pragma constseg BANK3

#define EOM_CLK_EN	reg_EOM_CLK_EN_LANE
#define EOM_DCCEN	reg_EOM_DCCEN_LANE
#define PU_EOM_ALIGN90_DCC_CMP	reg_PU_EOM_ALIGN90_DCC_CMP_LANE
#define RX_EOM_TOP_START	reg_RX_EOM_TOP_START_LANE 
#define RX_EOM_TOP_DONE		reg_RX_EOM_TOP_DONE_LANE
#define EOM_DLL_REF_FILT_BW		reg_EOM_DLL_REF_FILT_BW_LANE
#define EOM_DLL_HI_BW  			reg_EOM_DLL_HI_BW_LANE
#define EOM_CLATCH_EN 			reg_EOM_CLATCH_EN_LANE
#define EOM_CLATCH_ST_1_0 		reg_EOM_CLATCH_ST_LANE_1_0
#define RXDCC_HG_EOMCLK 		reg_RXDCC_HG_EOMCLK_LANE
#define EOM_INTP_BIAS_SHORT_EN 	reg_EOM_INTP_BIAS_SHORT_EN_LANE


void rx_eom_cal(void) BANKING_CTRL {

	PHY_STATUS = ST_RX_EOM_CAL;
	
	if(cmx_RX_EOM_CAL_EXT_EN) {
		lnx_RX_EOM_CAL_DONE_LANE = 1;
		return;
	}

	if(reg_RX_EOM_TOP_CONT_START_LANE) {
		reg_RX_EOM_TOP_CONT_START_LANE = 0;
		while(!reg_RX_EOM_TOP_CONT_DONE_LANE);
	}	
		
	lnx_RX_EOM_CAL_DONE_LANE = 0;
	lnx_RX_EOM_CAL_PASS_LANE = 0;

	// -- init
	EOM_DLL_REF_FILT_BW = 1; 
	EOM_DLL_HI_BW = 1;
	#if defined _56G_7NM
	EOM_CLATCH_EN = 1;
	EOM_CLATCH_ST_1_0 = 0;
	#elif defined _56G_5NM
		
	#endif
	RXDCC_HG_EOMCLK	= 0;
	EOM_INTP_BIAS_SHORT_EN = 0;
	EOM_EN_E = 0;
	
	// --
	EOM_CLK_EN = 1;
	EOM_DCCEN  = 1;	
	PU_EOM_ALIGN90_DCC_CMP = 1;
	
    #ifdef _56G_5NM
    //speed up rx eom cal for 5NM 56G to avoid simulation timeout
    //TODO: revist during psuedo code review to get correct settings for real HW
    reg_RX_EOM_DLL_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 0x2;
    reg_RX_EOM_DLL_CAL_VAL_MIN_MSB_LANE_3_0 = 0x0;
    reg_RX_EOM_DLL_CAL_RESULT_MSB_EXT_LANE_3_0 = 0x1;
    reg_RX_EOM_DLL_CAL_RESULT_LSB_EXT_LANE_6_0 = 0x1;
    reg_RX_EOM_PI_CAL_RESULT_EXT_LANE_10_8 = 0x0;
    reg_RX_EOM_PI_CAL_RESULT_EXT_LANE_7_0 = 0x40;
    #endif // #ifdef _56G_5NM
	
	RX_EOM_TOP_START = 0;
	RX_EOM_TOP_START = 1;
	delay(Tus);
	while(!RX_EOM_TOP_DONE);
	if ( reg_RX_EOM_DLL_CAL_TIMEOUT_RD_LANE || reg_RX_EOM_PI_CAL_TIMEOUT_RD_LANE  || reg_RX_EOM_PI_DCC_CAL_TIMEOUT_RD_LANE)
		lnx_RX_EOM_CAL_PASS_LANE = 0;
	else
		lnx_RX_EOM_CAL_PASS_LANE = 1;
	
	RX_EOM_TOP_START = 0;

	//TODO
	//lnx_cal_rx_eom_pi_dcc_result_lane = reg_RX_EOM_PI_DCC_CAL_RESULT_RD_LANE_5_0;
	//lnx_cal_rx_eom_pi_result_lane = (reg_RX_EOM_PI_CAL_RESULT_RD_LANE_10_8<<8) | reg_RX_EOM_PI_CAL_RESULT_RD_LANE_7_0;
	//lnx_cal_rx_eom_align90_result_msb_lane = reg_RX_EOM_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0;
	//lnx_cal_rx_eom_align90_result_lsb_lane = reg_RX_EOM_ALIGN90_CAL_RESULT_LSB_RD_LANE_6_0;
	
	lnx_RX_EOM_CAL_DONE_LANE = 1;

	if(!lnx_ESM_EN_LANE)  {
		PU_EOM_ALIGN90_DCC_CMP = 0;
		EOM_CLK_EN = 0;
		EOM_DCCEN  = 0;
	}	
	
}

void eom_clk_cont_cal(void) BANKING_CTRL {
	
	if(cmx_EOM_CLK_CAL_CONT_EN) {
		
		EOM_CLK_EN = 1;
		EOM_DCCEN = 1;
		PU_EOM_ALIGN90_DCC_CMP = 1;		
		reg_RX_EOM_TOP_CONT_START_LANE = 1;
	}
	//else 
	//EOM_DCCEN = 0;
	//PU_EOM_ALIGN90_DCC_CMP = 0;
		
}	
