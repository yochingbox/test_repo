/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file dll_cal.c
* \purpose DLL calibration
* \History
*	10/15/2015 Heejeong Ryu		Initial 
*   11/19/2015 Heejeong Ryu     No need analog update clock by Zhendong
*    1/31/2017 Heejeong Ryu     VREF_RXDLL tbl updated by design to cover more wide range
*/
#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK1
#pragma constseg BANK1
#endif


#define VREF_RXDLL_SEL      reg_VREF_VDDADLL_HALF_SEL_3_0

void set_vref_vdda_half(void) BANKING_CTRL {
	int16_t tsen_dat;
	int32_t temp_cel, vref_from_temp;

#ifdef SUPPORT_EXT_MEM
	tsen_dat = read_tsen_ram();
#else
	tsen_dat = read_tsen();
#endif
	temp_cel = (((int32_t)tsen_dat*394) + 128900 + 500)/1000;
	vref_from_temp = (int32_t)rxdll_temp_b_lane*250 + ((int32_t)rxdll_temp_a_lane * temp_cel);
	vref_from_temp = (vref_from_temp - 36000 + 500)/1000;
	VREF_RXDLL_SEL = (uint8_t)vref_from_temp;
}


/*
 * Unified Calibration functions
 */

/**
 * \module DLL_CAL Top
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input:  
 *    Output: 
*/
void dll_cal(void) BANKING_CTRL {

	PHY_STATUS = ST_DLL_CAL;
	lnx_DLL_CAL_DONE_LANE = 0;
	lnx_DLL_CAL_PASS_LANE = 0;
	
	dll_cmp_offset_cal();
	dll_vdda_init_cal();
	dll_gm_cal();
	dll_vdda_cal();

	if (lnx_DLL_COMP_CAL_PASS_LANE &&
	    lnx_DLL_VDATA_CAL_PASS_LANE &&
	    lnx_DLL_GM_CAL_PASS_LANE)
		lnx_DLL_CAL_PASS_LANE  = 1;
	lnx_DLL_CAL_DONE_LANE = 1;
}

/*
 * Unified calibration step 2: DLL calibration
 *
 * Set:
 * 1.   DLL_CMP_CAL_EN=1
 * 2.   dll_cmp_offset_cal: set to single calibration
 * 3.   dll_gm_cal: set to bypass
 * 4.   eom_dll_gm_cal: set to bypass
 * 5.   dll_vdda_cal: set to bypass
 * 6.   eom_dll_vdda_cal: set to bypass
 * 7.   Start DLL_CAL_TOP_START
 * 8.   Record dll_cmp_offset_cal results
 */
void dll_cmp_offset_cal(void) BANKING_CTRL {

	PHY_STATUS = ST_DLL_COMP_CAL;
	//reg_MCU_DEBUG0_LANE_7_0 = 0x90;

	lnx_DLL_COMP_CAL_DONE_LANE = 0;
	lnx_DLL_COMP_CAL_PASS_LANE = 1;

	reg_DLL_CMP_CAL_EN_LANE = 1;

	reg_DLL_CMP_OFFSET_CAL_BYPASS_EN_LANE = 0;
	reg_DLL_CMP_OFFSET_CAL_SINGLE_EN_LANE = 1;
	reg_DLL_GM_CAL_BYPASS_EN_LANE = 1;
	reg_EOM_DLL_GM_CAL_BYPASS_EN_LANE = 1;
	reg_DLL_VDDA_CAL_BYPASS_EN_LANE = 1;
	reg_EOM_DLL_VDDA_CAL_BYPASS_EN_LANE = 1;

	reg_DLL_TOP_START_LANE = 1;
	delay01(5);
	while (!reg_DLL_TOP_DONE_LANE);
	//while (!reg_DLL_CMP_OFFSET_CAL_CAL_DONE_RD_LANE);

	if (reg_DLL_CMP_OFFSET_CAL_TIMEOUT_RD_LANE)
		lnx_DLL_COMP_CAL_PASS_LANE = 0; // change to? lnx_DLL_CMP_OFFSET_CAL_PASS_LANE

	// Record dll_cmp_offset_cal results
	//lnx_CAL_DLL_CMP_OFFSET_LANE_7_0 = reg_DLL_CMP_OFFSET_CAL_RESULT_RD_LANE_3_0;
	lnx_cal_dll_cmp_offset[rx_pll_rate_x] = (reg_DLL_CMP_OFFSET_CAL_RESULT_RD_LANE_3_0 & 0x0f) | 0x00;

	reg_DLL_TOP_START_LANE = 0;
	reg_DLL_CMP_CAL_EN_LANE = 0;

	lnx_DLL_COMP_CAL_DONE_LANE = 1;
}

/*
 * Unified calibration step 3: DLL vdda init calibration:
 *
 * Set:
 * 1.   DLL_CMP_CAL_EN =0
 * 2.   Load dll_cmp_offset_cal results
 * 3.   Check TSEN temperature,
 * 4.   Read the value of RXDLL_TEMP_A_LANE[7:0],
 *      RXDLL_TEMP_B_LANE[7:0] of rx speed table
 * 5.   Calculate the value of VREF_VDDADLL_HALF_SEL[3:0] according to DLL calibration document
 * https://sp.marvell.com/central/hsio/Projects/PHY_IPs/design_spec/COMPHY_28G_PIPE4/phy_cal_top/DLL(EOM)/UPHY14_16FFC_DLL_cal_ana_spec_v2p1.docx
 * page 12~13
 * 6.   reg_dll_gm_cal_result_ext_lane = 3'h6
 *      reg_eom_dll_gm_cal_result_ext_lane = 3'h6
 * 7.   reg_dll_cmp_offset_cal_bypass_en_lane = 1'h1
 *      reg_dll_gm_cal_bypass_en_lane = 1'h1
 *      reg_eom_dll_gm_cal_bypass_en_lane = 1'h1
 *      reg_dll_vdda_cal_bypass_en_lane = 1'h0
 *      reg_eom_dll_vdda_cal_bypass_en_lane = 1'h0
 * 8.   reg_dll_vdda_cal_single_en_lane = 1'h1
 *      reg_dll_vdda_cal_cont_en_lane = 1'h0
 *      reg_eom_dll_vdda_cal_single_en_lane = 1'h1
 *      reg_eom_dll_vdda_cal_cont_en_lane = 1'h0
 * 9.   ANA_RSVD9[0] = 1'h1
 * 10.  reg_dll_vdda_cal_dir_inv_lane = 1'h1
 *      reg_eom_dll_vdda_cal_dir_inv_lane = 1'h1
 * 11.  If (EOM function is disabled) {
 *          //reg_eom_dll_gm_cal_bypass_en_lane = 1'h1
 *          reg_eom_dll_vdda_cal_bypass_en_lane = 1'h1
 *      }
 * 12.  Start DLL_CAL_TOP_START
 */
void dll_vdda_init_cal(void) BANKING_CTRL {

	PHY_STATUS = ST_DLL_VDDA_CAL;
	//reg_MCU_DEBUG0_LANE_7_0 = 0x92;

	lnx_DLL_VDATA_CAL_DONE_LANE = 0;
	lnx_DLL_EOM_VDATA_CAL_DONE_LANE = 0;
	lnx_DLL_VDATA_CAL_PASS_LANE = 1;

	// 2.   Load dll_cmp_offset_cal results
	//reg_DLL_CMP_OFFSET_CAL_RESULT_EXT_LANE_3_0 = lnx_CAL_DLL_CMP_OFFSET_LANE_7_0;
	reg_DLL_CMP_OFFSET_CAL_RESULT_EXT_LANE_3_0 = lnx_cal_dll_cmp_offset[rx_pll_rate_x];
	reg_DLL_CMP_OFFSET_CAL_BYPASS_EN_LANE = 0; //1;
	reg_DLL_CMP_OFFSET_CAL_SINGLE_EN_LANE = 0; // for loading previous result

	// 3.   Check TSEN temperature,
	// 4.   Read the value of RXDLL_TEMP_A_LANE[7:0],
	//      RXDLL_TEMP_B_LANE[7:0] of rx speed table
	// 5.   Calculate the value of VREF_VDDADLL_HALF_SEL[3:0]
	//reg_VREF_VDDADLL_HALF_SEL_3_0 = get_vref_rxdll_sel();
	set_vref_vdda_half();

	// step 6
	reg_DLL_GM_CAL_RESULT_EXT_LANE_2_0 = 6;
	reg_EOM_DLL_GM_CAL_RESULT_EXT_LANE_2_0 = 6;
	reg_DLL_GM_CAL_BYPASS_EN_LANE = 0;
	reg_DLL_GM_CAL_SINGLE_EN_LANE = 0;
	reg_EOM_DLL_GM_CAL_BYPASS_EN_LANE = 0;
	reg_EOM_DLL_GM_CAL_SINGLE_EN_LANE = 0;

	//load values
	reg_DLL_TOP_START_LANE = 1;
	delay01(5);
	while (!reg_DLL_TOP_DONE_LANE);
	reg_DLL_TOP_START_LANE = 0;

	reg_DLL_CMP_OFFSET_CAL_BYPASS_EN_LANE = 1;
	reg_DLL_GM_CAL_BYPASS_EN_LANE = 1;
	reg_EOM_DLL_GM_CAL_BYPASS_EN_LANE = 1;
	reg_DLL_VDDA_CAL_BYPASS_EN_LANE = 0;
	reg_EOM_DLL_VDDA_CAL_BYPASS_EN_LANE = 0;

	reg_DLL_VDDA_CAL_SINGLE_EN_LANE = 1;
	reg_DLL_VDDA_CAL_CONT_EN_LANE = 0;
	reg_EOM_DLL_VDDA_CAL_SINGLE_EN_LANE = 1;
	reg_EOM_DLL_VDDA_CAL_CONT_EN_LANE = 0;

	reg_ANA_RSVD9_LANE_7_0 |= 1; // ANA_RSVD9[0] = 1

	reg_DLL_VDDA_CAL_DIR_INV_LANE = 1;
	reg_EOM_DLL_VDDA_CAL_DIR_INV_LANE = 1;

	if( cmx_EOM_DLL_CAL_EXT_EN ) {
		reg_EOM_DLL_VDDA_CAL_BYPASS_EN_LANE = 1;
	}

	reg_DLL_TOP_START_LANE = 1;
	delay01(5);
	while (!reg_DLL_TOP_DONE_LANE);

	//save calibration result
	lnx_cal_vdda_dll_sel[PWR][rx_pll_rate_x] = (reg_DLL_VDDA_CAL_RESULT_RD_LANE_5_0 & 0x3f) | 0x00;
	if( !cmx_EOM_DLL_CAL_EXT_EN )
		lnx_cal_vdda_dll_eom_sel[PWR][rx_pll_rate_x] = (reg_EOM_DLL_VDDA_CAL_RESULT_RD_LANE_5_0 & 0x3f) | 0x00;

	if (reg_DLL_VDDA_CAL_TIMEOUT_RD_LANE) {
		lnx_DLL_VDATA_CAL_PASS_LANE = 0;
	}
	if (!cmx_EOM_DLL_CAL_EXT_EN) {
		if (reg_EOM_DLL_VDDA_CAL_TIMEOUT_RD_LANE)
			lnx_DLL_EOM_VDATA_CAL_PASS_LANE = 0;
	}

	reg_DLL_TOP_START_LANE = 0;
	lnx_DLL_EOM_VDATA_CAL_DONE_LANE = 1;
	lnx_DLL_VDATA_CAL_DONE_LANE = 1;
}

/*
 * Unified calibration step 4: DLL gm + vdd calibration:
 *
 * Set: 
 * 1.   reg_dll_gm_cal_result_ext_lane = 3'h7
 *      reg_eom_dll_gm_cal_result_ext_lane = 3'h7
 * 2.   reg_dll_cmp_offset_cal_bypass_en_lane = 1'h1
 *      reg_dll_gm_cal_bypass_en_lane = 1'h0
 *      reg_eom_dll_gm_cal_bypass_en_lane = 1'h0
 *      reg_dll_vdda_cal_bypass_en_lane = 1'h0
 *      reg_eom_dll_vdda_cal_bypass_en_lane = 1'h0
 * 3.   reg_dll_vdda_cal_single_en_lane = 1'h0
 *      reg_dll_vdda_cal_cont_en_lane = 1'h1
 *      reg_eom_dll_vdda_cal_single_en_lane = 1'h0
 *      reg_eom_dll_vdda_cal_cont_en_lane = 1'h1
 * 4.   ANA_RSVD9[0]=1'h0
 * 5.   reg_dll_vdda_cal_dir_inv_lane = 1'h0
 *      reg_eom_dll_vdda_cal_dir_inv_lane = 1'h0
 * 6.   If (EOM function is disabled) {
 *          reg_eom_dll_gm_cal_bypass_en_lane = 1'h1
 *          reg_eom_dll_vdda_cal_bypass_en_lane = 1'h1
 *      }
 * 7.   Start DLL_CAL_TOP_START 
 */
void dll_gm_cal(void) BANKING_CTRL {

	PHY_STATUS = ST_DLL_GM_CAL;

	lnx_DLL_GM_CAL_DONE_LANE = 0;
	lnx_DLL_GM_CAL_PASS_LANE = 1;

	reg_DLL_GM_CAL_RESULT_EXT_LANE_2_0 = 7;
	reg_EOM_DLL_GM_CAL_RESULT_EXT_LANE_2_0 = 7;
	reg_DLL_GM_CAL_BYPASS_EN_LANE = 0;
	reg_DLL_GM_CAL_SINGLE_EN_LANE = 0;
	reg_EOM_DLL_GM_CAL_BYPASS_EN_LANE = 0;
	reg_EOM_DLL_GM_CAL_SINGLE_EN_LANE = 0;

	reg_DLL_CMP_OFFSET_CAL_BYPASS_EN_LANE = 1;
	reg_DLL_VDDA_CAL_BYPASS_EN_LANE = 1;
	reg_EOM_DLL_VDDA_CAL_BYPASS_EN_LANE = 1;

	//load GM default values
	reg_DLL_TOP_START_LANE = 1;
	delay01(5);
	while (!reg_DLL_TOP_DONE_LANE);
	reg_DLL_TOP_START_LANE = 0;

	// DLL GM run single start
	reg_DLL_GM_CAL_SINGLE_EN_LANE = 1;
	reg_EOM_DLL_GM_CAL_SINGLE_EN_LANE = 1;

	reg_ANA_RSVD9_LANE_7_0 &= ~1; // ANA_RSVD9[0] = 0; do we need this?

	if( cmx_EOM_DLL_CAL_EXT_EN ) {
		reg_EOM_DLL_GM_CAL_BYPASS_EN_LANE = 1;
	}

	// start DLL GM
	reg_DLL_TOP_START_LANE = 1;
	delay01(5);
	while (!reg_DLL_TOP_DONE_LANE);

	// Save results
	lnx_cal_dll_gmsel[rx_pll_rate_x] = (reg_DLL_GM_CAL_RESULT_RD_LANE_2_0 & 0x07) | 0x00;
	if (reg_DLL_GM_CAL_TIMEOUT_RD_LANE)
		lnx_DLL_GM_CAL_PASS_LANE = 0;

	if( !cmx_EOM_DLL_CAL_EXT_EN ) {
		lnx_cal_dll_eom_gmsel[rx_pll_rate_x] = (reg_EOM_DLL_GM_CAL_RESULT_RD_LANE_2_0 & 0x07) | 0x00;
		if (cmx_EOM_DLL_CAL_EXT_EN == 0) {
			if (reg_EOM_DLL_GM_CAL_TIMEOUT_RD_LANE)
				lnx_DLL_EOM_GM_CAL_PASS_LANE = 0;
		}
	}

	reg_DLL_TOP_START_LANE = 0;
	lnx_DLL_GM_CAL_DONE_LANE = 1;
}

void dll_vdda_cal(void) BANKING_CTRL {

	PHY_STATUS = ST_DLL_VDDA_CAL;

	lnx_DLL_VDATA_CAL_DONE_LANE = 0;

	// DLL VDD run in continuous start
	reg_DLL_CMP_OFFSET_CAL_BYPASS_EN_LANE = 1;
	reg_DLL_GM_CAL_BYPASS_EN_LANE = 1;
	reg_EOM_DLL_GM_CAL_BYPASS_EN_LANE = 1;
	reg_DLL_VDDA_CAL_BYPASS_EN_LANE = 0;
	reg_EOM_DLL_VDDA_CAL_BYPASS_EN_LANE = 0;

	reg_ANA_RSVD9_LANE_7_0 &= ~1; // ANA_RSVD9[0] = 0

	reg_DLL_VDDA_CAL_DIR_INV_LANE = 0;
	reg_EOM_DLL_VDDA_CAL_DIR_INV_LANE = 0;

	if( cmx_EOM_DLL_CAL_EXT_EN ) {
		reg_EOM_DLL_VDDA_CAL_BYPASS_EN_LANE = 1;
	}

	reg_DLL_VDDA_CAL_SINGLE_EN_LANE = 1; //0;
	reg_DLL_VDDA_CAL_CONT_EN_LANE = 0; //1;
	reg_EOM_DLL_VDDA_CAL_SINGLE_EN_LANE = 1; //0;
	reg_EOM_DLL_VDDA_CAL_CONT_EN_LANE = 0; //1;

	// start DLL VDD
	reg_DLL_TOP_START_LANE = 1;
	delay01(5);
	while (!reg_DLL_TOP_DONE_LANE);
	reg_DLL_TOP_START_LANE = 0;

	// Save results
	lnx_cal_vdda_dll_sel[PWR][rx_pll_rate_x] = (reg_DLL_VDDA_CAL_RESULT_RD_LANE_5_0 & 0x3f) | 0x00;
	lnx_cal_vdda_dll_eom_sel[PWR][rx_pll_rate_x] = (reg_EOM_DLL_VDDA_CAL_RESULT_RD_LANE_5_0 & 0x3f) | 0x00;

	// start DLL VDD cont cal
	reg_DLL_VDDA_CAL_SINGLE_EN_LANE = 0;
	reg_DLL_VDDA_CAL_CONT_EN_LANE = 1;
	reg_EOM_DLL_VDDA_CAL_SINGLE_EN_LANE = 0;
	reg_EOM_DLL_VDDA_CAL_CONT_EN_LANE = 1;
	reg_DLL_TOP_CONT_START_LANE = 1;

	lnx_DLL_VDATA_CAL_DONE_LANE = 1;
}

/*
 * DLL calibration:
 * Continuous mode calibration
 *
 * Set: 
 * 1.   Loading calibrated results
 * 2.   ANA_RSVD9[0]=1'h0
 * 3.   reg_dll_cmp_offset_cal_bypass_en_lane = 1'h1
 *      reg_dll_gm_cal_bypass_en_lane = 1'h1
 *      reg_eom_dll_gm_cal_bypass_en_lane = 1'h1
 *      reg_dll_vdda_cal_bypass_en_lane = 1'h0
 *      reg_eom_dll_vdda_cal_bypass_en_lane = 1'h0
 * 4.   reg_dll_vdda_cal_single_en_lane = 1'h0
 *      reg_dll_vdda_cal_cont_en_lane = 1'h1
 *      reg_eom_dll_vdda_cal_single_en_lane = 1'h0
 *      reg_eom_dll_vdda_cal_cont_en_lane = 1'h1
 * 5.   reg_dll_vdda_cal_dir_inv_lane = 1'h0
 *      reg_eom_dll_vdda_cal_dir_inv_lane = 1'h0
 * 6.   If (EOM function is disabled) {
 *              reg_eom_dll_vdda_cal_bypass_en_lane = 1'h1
 *      }
 * 7.   Start DLL_CAL_TOP_START
 */
void dll_vdda_cal_cont(void) BANKING_CTRL {

	PHY_STATUS = ST_DLL_VDDA_CAL_CONT;

	// load results
	//load_cal_data_dll_ram();

	reg_ANA_RSVD9_LANE_7_0 &= ~1; // ANA_RSVD9[0]=1'h0

	reg_DLL_CMP_OFFSET_CAL_BYPASS_EN_LANE = 1;
	reg_DLL_GM_CAL_BYPASS_EN_LANE = 1;
	reg_EOM_DLL_GM_CAL_BYPASS_EN_LANE = 1;
	reg_DLL_VDDA_CAL_BYPASS_EN_LANE = 0;
	reg_EOM_DLL_VDDA_CAL_BYPASS_EN_LANE = 0;

	reg_DLL_VDDA_CAL_SINGLE_EN_LANE = 0;
	reg_DLL_VDDA_CAL_CONT_EN_LANE = 1;
	reg_EOM_DLL_VDDA_CAL_SINGLE_EN_LANE = 0;
	reg_EOM_DLL_VDDA_CAL_CONT_EN_LANE = 1;

	reg_DLL_VDDA_CAL_DIR_INV_LANE = 0;
	reg_EOM_DLL_VDDA_CAL_DIR_INV_LANE = 0;

	//If (EOM function is disabled) {
	if( cmx_EOM_DLL_CAL_EXT_EN ) {
		reg_EOM_DLL_VDDA_CAL_BYPASS_EN_LANE = 1;
	}

	reg_DLL_TOP_CONT_START_LANE = 1;
}
