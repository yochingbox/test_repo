/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file spd_ctrl.c
* \purpose Speed Change
* \History
*	10/15/2015 Heejeong Ryu		Initial 
*/
#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK3
#endif

void SpeedChange_top(void) BANKING_CTRL {
		delay(Tus);
	if ((reg_INT_PHY_GEN_TX_CHG_ISR_LANE && reg_INT_PHY_GEN_RX_CHG_ISR_LANE) || pll_sel==TS_ON || pll_sel==RS_ON)
		SpeedChange();
	#ifdef _SERDES_BUILD || _SAS_BUILD
	else if (reg_INT_PHY_GEN_TX_CHG_ISR_LANE)
		SpeedChange_tx();
	else if (reg_INT_PHY_GEN_RX_CHG_ISR_LANE)
		SpeedChange_rx();
	#endif
}

/**
 * \module SpeedChange
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: 
 *    Output: 
*/

void SpeedChange(void) BANKING_CTRL {

	PHY_STATUS = ST_SPDCHG;
	reg_MCU_DEBUG0_LANE_7_0 = 0x19;

	if (cmx_CAL_DONE == 1)
		turn_off_cont_cal();

	// Done in Calibration()/clear_spd_chg_isr()
	//reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 1;
	//reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 0;
	//reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 1;
	//reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 0;

	drv_power_off_dig_prot_en(); //Both TRX spd_chg digital off

	Calibration();

	drv_power_on_dig_prot_dis();

	PHY_STATUS = ST_PLLREADY;
}

void SpeedChange_rx(void) BANKING_CTRL {

	PHY_STATUS = ST_SPDCHG_RX;
	reg_MCU_DEBUG0_LANE_7_0 = 0x1a;

	turn_off_rx_cont_cal();

	reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 1;
	reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 0;
	reg_INT_RX_INIT_CHG_RISING_ISR_CLEAR_LANE = 1;
	reg_INT_RX_INIT_CHG_RISING_ISR_CLEAR_LANE = 0;

	//RX dig OFF
	drv_rx_off_dig_prot_en();

	rx_pll_dig_off();

	//if (cmx_CAL_DONE == 1)
		//turn_off_rx_cont_cal();

	Calibration_rx();

	rx_pll_dig_on();

	//RX dig ON
	drv_rx_on_dig_prot_dis();

	PHY_STATUS = ST_PLLREADY;
}

void SpeedChange_tx(void) BANKING_CTRL {

	PHY_STATUS = ST_SPDCHG_TX;
	reg_MCU_DEBUG0_LANE_7_0 = 0x1b;

	turn_off_tx_cont_cal();

	reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 1;
	reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 0;

	//TX dig OFF
	drv_tx_off_dig_prot_en();

	tx_pll_dig_off();

	//if (cmx_CAL_DONE == 1)
		// TODO - turn_off_tx_cont_cal();

	Calibration_tx();

	tx_pll_dig_on();

	//TX dig ON
	drv_tx_on_dig_prot_dis();

	PHY_STATUS = ST_PLLREADY;
}

void LoadSpeedtbl(void) BANKING_CTRL {

	PHY_STATUS = ST_LD_SPDTBL;
	reg_MCU_DEBUG0_LANE_7_0 = 0x42;

	lnx_LOAD_SPEEDTBL_DONE_LANE = 0;

	new_gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_5_0;
	//gen_tx = min(new_gen_tx, cmx_PHY_GEN_MAX_5_0);
	gen_tx = new_gen_tx;
	new_gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_5_0;
	//gen_rx = min(new_gen_rx, cmx_PHY_GEN_MAX_5_0);
	gen_rx = new_gen_rx;

	if (!BYPASS_SPDTBL_LOAD) {
		loadspeedtbl_rx();

		loadspeedtbl_tx();
#ifdef IPCE_COMPHY_1630_WA
		// only affect data rates 7.5Gbps and below
		if ((gen_tx <= 13) || (gen_tx == 46)) {
			reg_TX_CLK_DIV_DIG_LANE_2_0 = 0;
			if (gen_tx == 13) { //data rate = 7.5Gbps
				reg_TXSPEED_DIV_LANE_2_0 = 1;
			} else if ((gen_tx >= 7) && (gen_tx <= 12)) { //between 4.25GBps and 6.25GBps
				reg_TXSPEED_DIV_LANE_2_0 = 2;
			} else if (gen_tx <= 2) { // 1.25Gbps and below
				reg_TXSPEED_DIV_LANE_2_0 = 4;
				reg_TXREG_SPEEDTRK_DATA_LANE_3_0 = 0;
				reg_TXREG_SPEEDTRK_CLK_LANE_3_0 = 0;
			} else { // between 2.125Gbps and 3.125Gbps 
				reg_TXSPEED_DIV_LANE_2_0 = 3;
			}
		}
#endif
	}
	//if(pll_sel != TS_ON) loadspeedtbl_lc_pll(lnx_RX_PLL_RATE_SEL_LANE_4_0, PIN_REF_FREF_SEL_RD, 1);
	//if(pll_sel != RS_ON) loadspeedtbl_lc_pll(lnx_TX_PLL_RATE_SEL_LANE_4_0, PIN_REF_FREF_SEL_RD, 0);
#ifdef _5FF_COMPHY_112G_ADC_X4_8PLL_R1P1
	switch(pll_sel) {
	case BOTH_ON:
		if (!BYPASS_SPDTBL_LOAD) {
			loadspeedtbl_lc_pll(lnx_RX_PLL_RATE_SEL_LANE_4_0, reg_PIN_REF_FREF_SEL_RX_RD_LANE_4_0, 1);
			loadspeedtbl_lc_pll(lnx_TX_PLL_RATE_SEL_LANE_4_0, reg_PIN_REF_FREF_SEL_TX_RD_LANE_4_0, 0);
		}
		pll_rx_lane_cfg();
		pll_tx_lane_cfg();
	break;
	case RS_ON:
		if (!BYPASS_SPDTBL_LOAD) {
			loadspeedtbl_lc_pll(lnx_RX_PLL_RATE_SEL_LANE_4_0, reg_PIN_REF_FREF_SEL_RX_RD_LANE_4_0, 1);
			//loadspeedtbl_lc_pll(lnx_TX_PLL_RATE_SEL_LANE_4_0, PIN_REF_FREF_SEL_RD, 1);
		}
		pll_rx_lane_cfg();
		//pll_tx_lane_cfg();
	break;
	case TS_ON:
		if (!BYPASS_SPDTBL_LOAD) {
			//loadspeedtbl_lc_pll(lnx_RX_PLL_RATE_SEL_LANE_4_0, PIN_REF_FREF_SEL_RD, 0);
			loadspeedtbl_lc_pll(lnx_TX_PLL_RATE_SEL_LANE_4_0, reg_PIN_REF_FREF_SEL_TX_RD_LANE_4_0, 0);
		}
		//pll_rx_lane_cfg();
		pll_tx_lane_cfg();
	break;
	case SWAP_BOTH_ON:
		if (!BYPASS_SPDTBL_LOAD) {
			loadspeedtbl_lc_pll(lnx_RX_PLL_RATE_SEL_LANE_4_0, reg_PIN_REF_FREF_SEL_RX_RD_LANE_4_0, 0);
			loadspeedtbl_lc_pll(lnx_TX_PLL_RATE_SEL_LANE_4_0, reg_PIN_REF_FREF_SEL_TX_RD_LANE_4_0, 1);
		}
		pll_rx_lane_cfg();
		pll_tx_lane_cfg();
	break;
	}
#endif
#ifdef _5FF_COMPHY_112G_ADC_X4_8PLL_R1P0
	switch(pll_sel) {
	case BOTH_ON:
		if (!BYPASS_SPDTBL_LOAD) {
			loadspeedtbl_lc_pll(reg_RX_PLL_RATE_SEL_LANE_4_0, PIN_REF_FREF_SEL_RD, 1);
			loadspeedtbl_lc_pll(reg_TX_PLL_RATE_SEL_LANE_4_0, PIN_REF_FREF_SEL_RD, 0);
		}
		pll_rx_lane_cfg();
		pll_tx_lane_cfg();
	break;
	case RS_ON:
		if (!BYPASS_SPDTBL_LOAD) {
			loadspeedtbl_lc_pll(reg_RX_PLL_RATE_SEL_LANE_4_0, PIN_REF_FREF_SEL_RD, 1);
			//loadspeedtbl_lc_pll(reg_TX_PLL_RATE_SEL_LANE_4_0, PIN_REF_FREF_SEL_RD, 1);
		}
		pll_rx_lane_cfg();
		//pll_tx_lane_cfg();
	break;
	case TS_ON:
		if (!BYPASS_SPDTBL_LOAD) {
			//loadspeedtbl_lc_pll(reg_RX_PLL_RATE_SEL_LANE_4_0, PIN_REF_FREF_SEL_RD, 0);
			loadspeedtbl_lc_pll(reg_TX_PLL_RATE_SEL_LANE_4_0, PIN_REF_FREF_SEL_RD, 0);
		}
		//pll_rx_lane_cfg();
		pll_tx_lane_cfg();
	break;
	case SWAP_BOTH_ON:
		if (!BYPASS_SPDTBL_LOAD) {
			loadspeedtbl_lc_pll(reg_RX_PLL_RATE_SEL_LANE_4_0, PIN_REF_FREF_SEL_RD, 0);
			loadspeedtbl_lc_pll(reg_TX_PLL_RATE_SEL_LANE_4_0, PIN_REF_FREF_SEL_RD, 1);
		}
		pll_rx_lane_cfg();
		pll_tx_lane_cfg();
	break;
	}
#endif

	drv_rx_func_cfg();
	drv_tx_func_cfg();

	lnx_LOAD_SPEEDTBL_DONE_LANE = 1;
}

void LoadSpeedtbl_rx(void) BANKING_CTRL {
	PHY_STATUS = ST_LD_SPDTBL_RX;
	reg_MCU_DEBUG0_LANE_7_0 = 0x43;

	lnx_LOAD_RX_SPEEDTBL_DONE_LANE = 0;

	new_gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_5_0;
	//gen_rx = min(new_gen_rx, cmx_PHY_GEN_MAX_5_0);
	gen_rx = new_gen_rx;

	if (!BYPASS_SPDTBL_LOAD) {
		loadspeedtbl_rx();

		switch(pll_sel) {
		case BOTH_ON:
		case RS_ON:

#ifdef _5FF_COMPHY_112G_ADC_X4_8PLL_R1P1
			loadspeedtbl_lc_pll(lnx_RX_PLL_RATE_SEL_LANE_4_0, reg_PIN_REF_FREF_SEL_RX_RD_LANE_4_0, 1);
#endif
#ifdef _5FF_COMPHY_112G_ADC_X4_8PLL_R1P0
			loadspeedtbl_lc_pll(reg_RX_PLL_RATE_SEL_LANE_4_0, PIN_REF_FREF_SEL_RD, 1);
#endif
		break;
		case TS_ON:
		case SWAP_BOTH_ON:
#ifdef _5FF_COMPHY_112G_ADC_X4_8PLL_R1P1
			loadspeedtbl_lc_pll(lnx_RX_PLL_RATE_SEL_LANE_4_0, reg_PIN_REF_FREF_SEL_RX_RD_LANE_4_0, 0);
#endif
#ifdef _5FF_COMPHY_112G_ADC_X4_8PLL_R1P0
			loadspeedtbl_lc_pll(reg_RX_PLL_RATE_SEL_LANE_4_0, PIN_REF_FREF_SEL_RD, 0);
#endif
		break;
		}
		pll_rx_lane_cfg();
	}

	drv_rx_func_cfg();
	lnx_LOAD_RX_SPEEDTBL_DONE_LANE = 1;
}

void LoadSpeedtbl_tx(void) BANKING_CTRL {

	PHY_STATUS = ST_LD_SPDTBL_TX;
	reg_MCU_DEBUG0_LANE_7_0 = 0x44;

	lnx_LOAD_TX_SPEEDTBL_DONE_LANE = 0;

	new_gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_5_0;
	//gen_tx = min(new_gen_tx, cmx_PHY_GEN_MAX_5_0);
	gen_tx = new_gen_tx;

	if (!BYPASS_SPDTBL_LOAD) {
		loadspeedtbl_tx();
#ifdef IPCE_COMPHY_1630_WA
		// only affect data rates 7.5Gbps and below
		if ((gen_tx <= 13) || (gen_tx == 46)) {
			reg_TX_CLK_DIV_DIG_LANE_2_0 = 0;
			if (gen_tx == 13) { //data rate = 7.5Gbps
				reg_TXSPEED_DIV_LANE_2_0 = 1;
			} else if ((gen_tx >= 7) && (gen_tx <= 12)) { //between 4.25GBps and 6.25GBps
				reg_TXSPEED_DIV_LANE_2_0 = 2;
			} else if (gen_tx <= 2) { // 1.25Gbps and below
				reg_TXSPEED_DIV_LANE_2_0 = 4;
				reg_TXREG_SPEEDTRK_DATA_LANE_3_0 = 0;
				reg_TXREG_SPEEDTRK_CLK_LANE_3_0 = 0;
			} else { // between 2.125Gbps and 3.125Gbps 
				reg_TXSPEED_DIV_LANE_2_0 = 3;
			}
		}
#endif

		switch(pll_sel) {
		case BOTH_ON:
		case TS_ON:
#ifdef _5FF_COMPHY_112G_ADC_X4_8PLL_R1P1
			loadspeedtbl_lc_pll(lnx_TX_PLL_RATE_SEL_LANE_4_0, reg_PIN_REF_FREF_SEL_TX_RD_LANE_4_0, 0);
#endif
#ifdef _5FF_COMPHY_112G_ADC_X4_8PLL_R1P0
			loadspeedtbl_lc_pll(reg_TX_PLL_RATE_SEL_LANE_4_0, PIN_REF_FREF_SEL_RD, 0);
#endif

		break;
		case RS_ON:
		case SWAP_BOTH_ON:
#ifdef _5FF_COMPHY_112G_ADC_X4_8PLL_R1P1
			loadspeedtbl_lc_pll(lnx_TX_PLL_RATE_SEL_LANE_4_0, reg_PIN_REF_FREF_SEL_TX_RD_LANE_4_0, 1);
#endif
#ifdef _5FF_COMPHY_112G_ADC_X4_8PLL_R1P0
			loadspeedtbl_lc_pll(reg_TX_PLL_RATE_SEL_LANE_4_0, PIN_REF_FREF_SEL_RD, 1);
#endif
		break;
		}
		pll_tx_lane_cfg();
	}

	drv_tx_func_cfg();

	lnx_LOAD_TX_SPEEDTBL_DONE_LANE = 1;
  }

void loadSpdtbl_4_fcnt_tx(void) BANKING_CTRL {

	reg_PLL_TS_FBDIV_LANE_7_0 = reg_PLL_TS_FBDIV_CAL_LANE_9_0_b0;
	reg_PLL_TS_FBDIV_LANE_9_8 = reg_PLL_TS_FBDIV_CAL_LANE_9_0_b1;
}

void loadSpdtbl_4_fcnt_rx(void) BANKING_CTRL {

	reg_PLL_RS_FBDIV_LANE_7_0 = reg_PLL_RS_FBDIV_CAL_LANE_9_0_b0;
	reg_PLL_RS_FBDIV_LANE_9_8 = reg_PLL_RS_FBDIV_CAL_LANE_9_0_b1;
}

