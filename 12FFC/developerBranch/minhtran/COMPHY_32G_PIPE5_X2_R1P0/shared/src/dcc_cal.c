#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK1
#pragma constseg BANK1
#endif


/*
 * Unified DCC Calibration functions
 */
/*
 * Unified calibration Step 1: DCC calibration
 *
 * Set:
 * 1.   TXDCC_EN=1
 * 2.   TXDCCCAL_EN=1
 * 3.   RXDCC_EN_DLLCLK=1
 * 4.   RXDCC_EN_DATACLK=1
 * 5.   RXDCC_EN_EOMCLK=1
 * 6.   If TX_SPEED_DIV[2:0]==3'h0
 *              reg_tx_dcc_cal_post_div_bypass_en_lane = 1'h1
 *              reg_tx_dcc_cal_bypass_en_lane = 1'h0
 *              ANA_RSVDA[3] = 1'h0
 *      else
 *              reg_tx_dcc_cal_post_div_bypass_en_lane = 1'h0
 *              reg_tx_dcc_cal_bypass_en_lane = 1'h1
 *              ANA_RSVDA[3] = 1'h1
 * 7.   EOM_CLK_EN=1
 * 8.   reg_rx_dll_dcc_cal_bypass_en_lane = 1'h0
 *      reg_rx_eom_dcc_cal_bypass_en_lane = 1'h0
 *      reg_rx_clk_dcc_cal_bypass_en_lane = 1'h0
 * 9.   reg_tx_dcc_cal_single_en_lane = 1'h1
 *      reg_rx_dll_dcc_cal_single_en_lane = 1'h1
 *      reg_rx_eom_dcc_cal_single_en_lane = 1'h1
 *      reg_rx_clk_dcc_cal_single_en_lane = 1'h1
 *      reg_tx_dcc_cal_post_div_single_en_lane = 1'h1
 * 10.  reg_tx_dcc_cal_result_ext_lane = 6'h20
 *      reg_rx_dll_dcc_cal_result_ext_lane = 6'h20
 *      reg_rx_eom_dcc_cal_result_ext_lane = 6'h20
 *      reg_rx_clk_dcc_cal_result_ext_lane = 6'h20
 *      reg_tx_dcc_cal_post_div_result_ext_lane = 6'h20
 * 11.  tx_dcc_cal: reg_tx_dcc_cal_cont_en_lane = 1'h0
 *      rx_dll_dcc_cal: reg_rx_dll_dcc_cal_cont_en_lane = 1'h0
 *      rx_eom_dcc_cal: reg_rx_eom_dcc_cal_cont_en_lane = 1'h0
 *      rx_clk_dcc_cal: reg_rx_clk_dcc_cal_cont_en_lane = 1'h0
 *      tx_dcc_cal_post_div: reg_tx_dcc_cal_post_div_cont_en_lane = 1'h0
 * 12.  Start dcc calibrations
 * 13.  reg_tx_dcc_cal_single_en_lane = 1'h0
 *      reg_rx_dll_dcc_cal_single_en_lane = 1'h0
 *      reg_rx_eom_dcc_cal_single_en_lane = 1'h0
 *      reg_rx_clk_dcc_cal_single_en_lane = 1'h0
 *      reg_tx_dcc_cal_post_div_single_en_lane = 1'h1
 * 14.  tx_dcc_cal: reg_tx_dcc_cal_cont_en_lane = 1'h1
 *      rx_dll_dcc_cal: reg_rx_dll_dcc_cal_cont_en_lane = 1'h1
 *      rx_eom_dcc_cal: reg_rx_eom_dcc_cal_cont_en_lane = 1'h1
 *      rx_clk_dcc_cal: reg_rx_clk_dcc_cal_cont_en_lane = 1'h1
 *      tx_dcc_cal_post_div: reg_tx_dcc_cal_post_div_cont_en_lane = 1'h1
 * 15.  Start cont dcc calibrations
 */
void dcc_cal(void) BANKING_CTRL {
	uint8_t gen, saved_speed_div, tmp;

	PHY_STATUS = ST_DCC_CAL;

	lnx_DCC_CAL_DONE_LANE = 0;
	lnx_DCC_CAL_PASS_LANE = 1;

	reg_TXDCC_EN_LANE = 1;
	reg_TXDCCCAL_EN_LANE = 1;
	reg_RXDCC_CAL_EN_LANE = 1;  // Hui Z. requested to add
	reg_RXDCC_EN_DLLCLK_LANE = 1;
	reg_RXDCC_EN_DATACLK_LANE = 1;
	reg_RXDCC_EN_EOMCLK_LANE = 1;

	lnx_RXDCC_DLL_CAL_DONE_LANE = 0;
	lnx_RXDCC_DLL_CAL_PASS_LANE = 1;
	lnx_RXDCC_DATA_CAL_DONE_LANE = 0;
	lnx_RXDCC_DATA_CAL_PASS_LANE = 1;
	lnx_RXDCC_EOM_CAL_DONE_LANE = 0;
	lnx_RXDCC_EOM_CAL_PASS_LANE = 1;
	if (reg_TX_SPEED_DIV_LANE_2_0 == 0) {
		lnx_TXDCC_PDIV_CAL_DONE_LANE = 0;
		lnx_TXDCC_PDIV_CAL_PASS_LANE = 0;
		lnx_TXDCC_CAL_DONE_LANE = 0;
		lnx_TXDCC_CAL_PASS_LANE = 1;

		reg_TX_DCC_CAL_POST_DIV_BYPASS_EN_LANE = 1;
		reg_TX_DCC_CAL_BYPASS_EN_LANE = 0;
		//reg_ANA_RSVDA_LANE_7_0 &= ~(1 << 3); // ANA_RSVDA[3] = 1'h0
		//clear_txdcccal_pdiv_en_lane();
		tmp = reg_ANA_RSVDA_LANE_7_0; tmp &= 0xf7; reg_ANA_RSVDA_LANE_7_0 = tmp;
	} else {
		lnx_TXDCC_PDIV_CAL_DONE_LANE = 0;
		lnx_TXDCC_PDIV_CAL_PASS_LANE = 1;
		lnx_TXDCC_CAL_DONE_LANE = 0;
		lnx_TXDCC_CAL_PASS_LANE = 0;

		reg_TX_DCC_CAL_POST_DIV_BYPASS_EN_LANE = 0;
		reg_TX_DCC_CAL_BYPASS_EN_LANE = 1;
		//reg_ANA_RSVDA_LANE_7_0 |= (1 << 3); // ANA_RSVDA[3] = 1'h1
		//set_txdcccal_pdiv_en_lane();
		tmp = reg_ANA_RSVDA_LANE_7_0; tmp |= 0x08; reg_ANA_RSVDA_LANE_7_0 = tmp;
	}

	saved_speed_div = reg_TX_SPEED_DIV_LANE_2_0; //save; Do not move this inside the if statement
	if (reg_TX_SPEED_DIV_LANE_2_0 & 0x4) {
		reg_TX_SPEED_DIV_LANE_2_0 = 0;
	}

	reg_EOM_CLK_EN_LANE = 1;

	reg_RX_DLL_DCC_CAL_BYPASS_EN_LANE = 0;
	reg_RX_EOM_DCC_CAL_BYPASS_EN_LANE = 0;
	reg_RX_CLK_DCC_CAL_BYPASS_EN_LANE = 0;

	reg_TX_DCC_CAL_SINGLE_EN_LANE = 1;
	reg_RX_DLL_DCC_CAL_SINGLE_EN_LANE = 1;
	reg_RX_EOM_DCC_CAL_SINGLE_EN_LANE = 1;
	reg_RX_CLK_DCC_CAL_SINGLE_EN_LANE = 1;
	reg_TX_DCC_CAL_POST_DIV_SINGLE_EN_LANE = 1;

	reg_TX_DCC_CAL_RESULT_EXT_LANE_5_0 = 0x20;
	reg_RX_DLL_DCC_CAL_RESULT_EXT_LANE_5_0 = 0x20;
	reg_RX_EOM_DCC_CAL_RESULT_EXT_LANE_5_0 = 0x20;
	reg_RX_CLK_DCC_CAL_RESULT_EXT_LANE_5_0 = 0x20;
	reg_TX_DCC_CAL_POST_DIV_RESULT_EXT_LANE_5_0 = 0x20;

	reg_TX_DCC_CAL_CONT_EN_LANE = 0;
	reg_RX_DLL_DCC_CAL_CONT_EN_LANE = 0;
	reg_RX_EOM_DCC_CAL_CONT_EN_LANE = 0;
	reg_RX_CLK_DCC_CAL_CONT_EN_LANE = 0;
	reg_TX_DCC_CAL_POST_DIV_CONT_EN_LANE = 0;

	reg_DCC_TOP_START_LANE = 1;
	delay01(5);
	while (!reg_DCC_TOP_DONE_LANE);
	reg_DCC_TOP_START_LANE = 0;

	gen = gen_rx;
	#ifdef _SATA_SERDES_BUILD
	if(phy_mode == SERDES) gen = 0;
	#endif

	//save calibration results
	if (lnx_CAL_DONE_LANE == 0) { //if power-on calibration
		lnx_cal_txdcc[PWR][tx_pll_rate] = reg_TX_DCC_CAL_RESULT_RD_LANE_5_0; //save to power-on result
		lnx_cal_rxdcc_dll[PWR][rx_pll_rate] = reg_RX_DLL_DCC_CAL_RESULT_RD_LANE_5_0; //save to power-on result
		lnx_cal_rxdcc_eom[PWR][gen] = reg_RX_EOM_DCC_CAL_RESULT_RD_LANE_5_0;
		lnx_cal_rxdcc_data[PWR][gen] = reg_RX_CLK_DCC_CAL_RESULT_RD_LANE_5_0;
		lnx_cal_txdcc_pdiv[PWR][tx_pll_rate] = reg_TX_DCC_CAL_POST_DIV_RESULT_RD_LANE_5_0;
	}

	lnx_cal_txdcc[CONT][tx_pll_rate] = reg_TX_DCC_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_rxdcc_dll[CONT][rx_pll_rate] = reg_RX_DLL_DCC_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_rxdcc_eom[CONT][gen] = reg_RX_EOM_DCC_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_rxdcc_data[CONT][gen] = reg_RX_CLK_DCC_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_txdcc_pdiv[CONT][tx_pll_rate] = reg_RX_CLK_DCC_CAL_RESULT_RD_LANE_5_0;
	if (saved_speed_div != 0) {
		lnx_cal_txdcc_pdiv[PWR + cmx_TXDCC_PDIV_CAL_CONT_CUR_LOAD_EN][tx_pll_rate] = reg_TX_DCC_CAL_POST_DIV_RESULT_RD_LANE_5_0;
	}

	if (saved_speed_div == 0) {
		if (reg_TX_DCC_CAL_TIMEOUT_RD_LANE)
			lnx_TXDCC_CAL_PASS_LANE = 0;
		lnx_TXDCC_CAL_DONE_LANE = 1;
	} else {
		if (reg_TX_DCC_CAL_POST_DIV_TIMEOUT_RD_LANE)
			lnx_TXDCC_PDIV_CAL_PASS_LANE = 0;
		lnx_TXDCC_PDIV_CAL_DONE_LANE = 1;
	}
	if (reg_RX_DLL_DCC_CAL_TIMEOUT_RD_LANE)
		lnx_RXDCC_DLL_CAL_PASS_LANE = 0;
	lnx_RXDCC_DLL_CAL_DONE_LANE = 1;
	if (reg_RX_EOM_DCC_CAL_TIMEOUT_RD_LANE)
		lnx_RXDCC_EOM_CAL_PASS_LANE = 0;
	lnx_RXDCC_EOM_CAL_DONE_LANE = 1;
	if (reg_RX_CLK_DCC_CAL_TIMEOUT_RD_LANE)
		lnx_RXDCC_DATA_CAL_PASS_LANE = 0;
	lnx_RXDCC_DATA_CAL_DONE_LANE = 1;

	reg_TX_SPEED_DIV_LANE_2_0 = saved_speed_div; //restore

#if 0
	// step 13-15
	delay01(5);
	//dcc_cal_cont();
	reg_TX_DCC_CAL_SINGLE_EN_LANE = 0;
	reg_RX_DLL_DCC_CAL_SINGLE_EN_LANE = 0;
	reg_RX_EOM_DCC_CAL_SINGLE_EN_LANE = 0;
	reg_RX_CLK_DCC_CAL_SINGLE_EN_LANE = 0;
	reg_TX_DCC_CAL_POST_DIV_SINGLE_EN_LANE = 0;

	reg_TX_DCC_CAL_CONT_EN_LANE = 1;
	reg_RX_DLL_DCC_CAL_CONT_EN_LANE = 1;
	reg_RX_EOM_DCC_CAL_CONT_EN_LANE = 1;
	reg_RX_CLK_DCC_CAL_CONT_EN_LANE = 1;
	reg_TX_DCC_CAL_POST_DIV_CONT_EN_LANE = 1;

	// START DCC CALIBRATION
	reg_DCC_TOP_CONT_START_LANE = 1;
#endif

	lnx_DCC_CAL_DONE_LANE = 1;
}

// Continuous mode calibration
/*
 * DCC calibration:
 *
 * Set: 
 * 1.   TXDCC_EN=1
 * 2.   TXDCCCAL_EN=1
 * 3.   RXDCC_EN_DLLCLK=1
 * 4.   RXDCC_EN_DATACLK=1
 * 5.   RXDCC_EN_EOMCLK=1
 * 6.   If TX_SPEED_DIV[2:0]==3'h0
 *              reg_tx_dcc_cal_post_div_bypass_en_lane = 1'h1
 *              reg_tx_dcc_cal_bypass_en_lane = 1'h0
 *              ANA_RSVDA[3] = 1'h0
 *      else
 *              reg_tx_dcc_cal_post_div_bypass_en_lane = 1'h0
 *              reg_tx_dcc_cal_bypass_en_lane = 1'h1
 *              ANA_RSVDA[3] = 1'h1
 * 7.   When EOM function is enabled:  reg_rx_eom_dcc_cal_bypass_en_lane = 1'h0
 * 8.   When EOM function is disabled: reg_rx_eom_dcc_cal_bypass_en_lane = 1'h1
 * 9.   reg_rx_dll_dcc_cal_bypass_en_lane = 1'h0
 *      reg_rx_clk_dcc_cal_bypass_en_lane = 1'h0
 * 10.  reg_tx_dcc_cal_single_en_lane = 1'h0
 *      reg_rx_dll_dcc_cal_single_en_lane = 1'h0
 *      reg_rx_eom_dcc_cal_single_en_lane = 1'h0
 *      reg_rx_clk_dcc_cal_single_en_lane = 1'h0
 *      reg_tx_dcc_cal_post_div_single_en_lane = 1'h0
 * 11.  reg_tx_dcc_cal_cont_en_lane = 1'h1
 *      reg_rx_dll_dcc_cal_cont_en_lane = 1'h1
 *      reg_rx_eom_dcc_cal_cont_en_lane = 1'h1
 *      reg_rx_clk_dcc_cal_cont_en_lane = 1'h1
 *      reg_tx_dcc_cal_post_div_cont_en_lane = 1'h1
 * 12.  Start dcc calibrations
 */
void dcc_cal_cont(void) BANKING_CTRL {
	uint8_t gen, tmp;

	reg_TXDCC_EN_LANE = 1;
	reg_TXDCCCAL_EN_LANE = 1;
	reg_RXDCC_CAL_EN_LANE = 1;  // Hui Z. requested
	reg_RXDCC_EN_DLLCLK_LANE = 1;
	reg_RXDCC_EN_DATACLK_LANE = 1;
	reg_RXDCC_EN_EOMCLK_LANE = 1;

	if (reg_TX_SPEED_DIV_LANE_2_0 == 0) {
		reg_TX_DCC_CAL_POST_DIV_BYPASS_EN_LANE = 1;
		reg_TX_DCC_CAL_BYPASS_EN_LANE = 0;
		//reg_ANA_RSVDA_LANE_7_0 &= ~(1 << 3); // ANA_RSVDA[3]
		//clear_txdcccal_pdiv_en_lane();
		tmp = reg_ANA_RSVDA_LANE_7_0; tmp &= 0xf7; reg_ANA_RSVDA_LANE_7_0 = tmp;
	} else {
		reg_TX_DCC_CAL_POST_DIV_BYPASS_EN_LANE = 0;
		reg_TX_DCC_CAL_BYPASS_EN_LANE = 1;
		//reg_ANA_RSVDA_LANE_7_0 |= (1 << 3);  // ANA_RSVDA[3]
		//set_txdcccal_pdiv_en_lane();
		tmp = reg_ANA_RSVDA_LANE_7_0; tmp |= 0x08; reg_ANA_RSVDA_LANE_7_0 = tmp;
	}
	if( cmx_EOM_DLL_CAL_EXT_EN ) {
		reg_RX_EOM_DCC_CAL_BYPASS_EN_LANE = 1;
	} else {
		reg_RX_EOM_DCC_CAL_BYPASS_EN_LANE = 0;
	}
	reg_RX_DLL_DCC_CAL_BYPASS_EN_LANE = 0;
	reg_RX_CLK_DCC_CAL_BYPASS_EN_LANE = 0;

	reg_TX_DCC_CAL_SINGLE_EN_LANE = 0;
	reg_RX_DLL_DCC_CAL_SINGLE_EN_LANE = 0;
	reg_RX_EOM_DCC_CAL_SINGLE_EN_LANE = 0;
	reg_RX_CLK_DCC_CAL_SINGLE_EN_LANE = 0;
	reg_TX_DCC_CAL_POST_DIV_SINGLE_EN_LANE = 0;

	gen = gen_rx;
	#ifdef _SATA_SERDES_BUILD
	if(phy_mode == SERDES) gen = 0;
	#endif

	if (reg_TX_SPEED_DIV_LANE_2_0 & 0x4) {
		// load the power up calibration results
		reg_RX_EOM_DCC_CAL_RESULT_EXT_LANE_5_0 = lnx_cal_rxdcc_eom[PWR][gen];
		reg_RX_CLK_DCC_CAL_RESULT_EXT_LANE_5_0 = lnx_cal_rxdcc_data[PWR][gen];
		reg_RX_EOM_DCC_CAL_CONT_EN_LANE = 0;
		reg_RX_CLK_DCC_CAL_CONT_EN_LANE = 0;
	} else {
		reg_RX_EOM_DCC_CAL_CONT_EN_LANE = 1;
		reg_RX_CLK_DCC_CAL_CONT_EN_LANE = 1;
	}
	reg_TX_DCC_CAL_CONT_EN_LANE = 1;
	reg_RX_DLL_DCC_CAL_CONT_EN_LANE = 1;
	reg_TX_DCC_CAL_POST_DIV_CONT_EN_LANE = 1;

	// START DCC CALIBRATION
	reg_DCC_TOP_CONT_START_LANE = 1;
}
