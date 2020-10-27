/******************************************************************
 *          Marvell Semiconductor  
 *******************************************************************
 * \file pll_dcc_cal.c
 * \purpose 7nm LCPLL DCC calibration
 * \History
 *  07/19/2019 Heejeong Ryu   Initial 
 */
#include "common.h"
#ifdef USE_BANKING
#pragma codeseg BANK3
#pragma constseg BANK3
#endif

/**
 * \module PLL DCC Calibration
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: 
 *    Output: 
 */

//#define TIMEOUT_PLL_DCC_CAL			1000

void set_rs_bypass_en(uint8_t val) BANKING_CTRL {
	
    	reg_PLL_RS_DCC_CAL_BYPASS_EN_LANE = val; 
    	reg_PLL_RS_DIV_DCC_CAL_BYPASS_EN_LANE = val;
	reg_PLL_RS_VDDA_FBDIV_CAL_BYPASS_EN_LANE = val; 
	reg_PLL_RS_VDDA_INTP_CAL_BYPASS_EN_LANE = val;
	reg_PLL_RS_VDDA_PFD_CAL_BYPASS_EN_LANE = val;

}

void set_ts_bypass_en(uint8_t val) BANKING_CTRL {
	
	reg_PLL_TS_DCC_CAL_BYPASS_EN_LANE = val;
    	reg_PLL_TS_DIV_DCC_CAL_BYPASS_EN_LANE = val;
	reg_PLL_TS_VDDA_FBDIV_CAL_BYPASS_EN_LANE = val; 
	reg_PLL_TS_VDDA_INTP_CAL_BYPASS_EN_LANE = val;
	reg_PLL_TS_VDDA_PFD_CAL_BYPASS_EN_LANE = val;

}

void rs_plldcc_cal_cont(void) BANKING_CTRL { //cont

	if(cmx_RX_PLLDCC_CAL_CONT_EN == 0 || reg_PLL_DCC_VDD_RS_TOP_CONT_START_LANE) return;
	
	/*reg_PLL_RS_LCPLL_DCC_EN_LANE = 1;*/
	/*reg_PLL_RS_LCDIV1P5_DCC_EN_LANE = 1;*/
	/*reg_PLL_RS_VDDA_CAL_EN_LANE = 1;*/

	/*// Fei requested: Freeze VDDA continuous calibration after power on calibration (keep the power on calibrated code)*/
	/*reg_PLL_RS_VDDA_FBDIV_CAL_BYPASS_EN_LANE = 1;*/
	/*reg_PLL_RS_VDDA_INTP_CAL_BYPASS_EN_LANE = 1;*/
	/*reg_PLL_RS_VDDA_PFD_CAL_BYPASS_EN_LANE = 1;*/

	/*if(reg_PLL_RS_LCPLL_POSTDIV_EN_LANE == 0) {*/
		/*reg_PLL_RS_DIV_DCC_CAL_BYPASS_EN_LANE = 1;*/
		/*reg_PLL_RS_ANA_RSVDA_LANE_7_0 |= 0x80; // set ana_rsvda[7] = 1*/
	/*}*/
	/*else {*/
		/*reg_PLL_RS_ANA_RSVDA_LANE_7_0 &= 0x7f; // set ana_rsvda[7] = 0		*/
	/*}	*/

	/*reg_PLL_DCC_VDD_RS_TOP_CONT_START_LANE = 1;*/

    pll_dcc_vdd_rs_cont();

}

void ts_plldcc_cal_cont(void) BANKING_CTRL { //cont

	if(cmx_TX_PLLDCC_CAL_CONT_EN == 0 || reg_PLL_DCC_VDD_TS_TOP_CONT_START_LANE) return;

	/*reg_PLL_TS_LCPLL_DCC_EN_LANE = 1;*/
	/*reg_PLL_TS_LCDIV1P5_DCC_EN_LANE = 1;*/
	/*reg_PLL_TS_VDDA_CAL_EN_LANE = 1;*/

	/*// Fei requested: Freeze VDDA continuous calibration after power on calibration (keep the power on calibrated code)*/
	/*reg_PLL_TS_VDDA_FBDIV_CAL_BYPASS_EN_LANE = 1;*/
	/*reg_PLL_TS_VDDA_INTP_CAL_BYPASS_EN_LANE = 1;*/
	/*reg_PLL_TS_VDDA_PFD_CAL_BYPASS_EN_LANE = 1;*/

	/*if(reg_PLL_TS_LCPLL_POSTDIV_EN_LANE == 0) {*/
		/*reg_PLL_TS_DIV_DCC_CAL_BYPASS_EN_LANE = 1;*/
		/*reg_PLL_TS_ANA_RSVDA_LANE_7_0 |= 0x80; // set ana_rsvda[7] = 1*/
		/*reg_PLL_TS_DCC_CAL_DIR_INV_LANE = 0;*/
	/*}*/
	/*else {*/
		/*reg_PLL_TS_DIV_DCC_CAL_BYPASS_EN_LANE = 0;*/
		/*reg_PLL_TS_ANA_RSVDA_LANE_7_0 &= 0x7f; // set ana_rsvda[7] = 0		*/
		/*reg_PLL_TS_DCC_CAL_DIR_INV_LANE = 1;*/
	/*}	*/

	/*reg_PLL_DCC_VDD_TS_TOP_CONT_START_LANE = 1;*/

    pll_dcc_vdd_ts_cont();
}
