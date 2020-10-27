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
#pragma constseg BANK3
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

#if 0 // reverted back before the SWAP_BOTH_ON PLL table load fix
		if(pll_sel != TS_ON) loadspeedtbl_lc_pll(reg_RX_PLL_RATE_SEL_LANE_4_0, PIN_REF_FREF_SEL_RD, 1);
		if(pll_sel != RS_ON) loadspeedtbl_lc_pll(reg_TX_PLL_RATE_SEL_LANE_4_0, PIN_REF_FREF_SEL_RD, 0);
#else
		switch(pll_sel) {
		case BOTH_ON:
			loadspeedtbl_lc_pll(reg_RX_PLL_RATE_SEL_LANE_4_0, PIN_REF_FREF_SEL_RD, 1);
			loadspeedtbl_lc_pll(reg_TX_PLL_RATE_SEL_LANE_4_0, PIN_REF_FREF_SEL_RD, 0);
		break;
		case RS_ON:
			loadspeedtbl_lc_pll(reg_RX_PLL_RATE_SEL_LANE_4_0, PIN_REF_FREF_SEL_RD, 1);
			//loadspeedtbl_lc_pll(reg_TX_PLL_RATE_SEL_LANE_4_0, PIN_REF_FREF_SEL_RD, 1);
		break;
		case TS_ON:
			//loadspeedtbl_lc_pll(reg_RX_PLL_RATE_SEL_LANE_4_0, PIN_REF_FREF_SEL_RD, 0);
			loadspeedtbl_lc_pll(reg_TX_PLL_RATE_SEL_LANE_4_0, PIN_REF_FREF_SEL_RD, 0);
		break;
		case SWAP_BOTH_ON:
			loadspeedtbl_lc_pll(reg_RX_PLL_RATE_SEL_LANE_4_0, PIN_REF_FREF_SEL_RD, 0);
			loadspeedtbl_lc_pll(reg_TX_PLL_RATE_SEL_LANE_4_0, PIN_REF_FREF_SEL_RD, 1);
		break;
		}
#endif
	}

	drv_rx_func_cfg();
	drv_tx_func_cfg();
        nt_decoder_rx();
        nt_decoder_tx();

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
			loadspeedtbl_lc_pll(reg_RX_PLL_RATE_SEL_LANE_4_0, PIN_REF_FREF_SEL_RD, 1);
		break;
		case TS_ON:
		case SWAP_BOTH_ON:
			loadspeedtbl_lc_pll(reg_RX_PLL_RATE_SEL_LANE_4_0, PIN_REF_FREF_SEL_RD, 0);
		break;
		}
	}

	drv_rx_func_cfg();
        nt_decoder_rx();
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
			loadspeedtbl_lc_pll(reg_TX_PLL_RATE_SEL_LANE_4_0, PIN_REF_FREF_SEL_RD, 0);
		break;
		case RS_ON:
		case SWAP_BOTH_ON:
			loadspeedtbl_lc_pll(reg_TX_PLL_RATE_SEL_LANE_4_0, PIN_REF_FREF_SEL_RD, 1);
		break;
		}
	}

	drv_tx_func_cfg();
        nt_decoder_tx();

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
void nt_decoder_tx(void) BANKING_CTRL {
     #ifdef _5FF_COMPHY_112G_ADC_X4_8PLL
	reg_MCU_DEBUG7_LANE_7_0 = 0xff;
	reg_MCU_DEBUG8_LANE_7_0 = 0xff;
	switch( reg_PIN_TXDCLK_NT_SEL_RD_LANE_2_0 ) {
	case 0: reg_TXCLK_NT_CTRL_LANE_1_0 = 0; reg_TXCLK_NT_DIV_LANE_4_0 = 4;  reg_TXCLK_NT_FIX_DIV_EN_LANE = 1; break;	 //8T
	case 4: reg_TXCLK_NT_CTRL_LANE_1_0 = 0; reg_TXCLK_NT_DIV_LANE_4_0 = 8;  reg_TXCLK_NT_FIX_DIV_EN_LANE = 1; break;	 //16T
	case 1: reg_TXCLK_NT_CTRL_LANE_1_0 = 0; reg_TXCLK_NT_DIV_LANE_4_0 = 16; reg_TXCLK_NT_FIX_DIV_EN_LANE = 1; break;	 //32T
	case 2: reg_TXCLK_NT_CTRL_LANE_1_0 = 3; reg_TXCLK_NT_DIV_LANE_4_0 = 5;  reg_TXCLK_NT_FIX_DIV_EN_LANE = 0; break;	 //33T
	case 3: reg_TXCLK_NT_CTRL_LANE_1_0 = 2; reg_TXCLK_NT_DIV_LANE_4_0 = 8;  reg_TXCLK_NT_FIX_DIV_EN_LANE = 0; break;	 //34T	
	}
	#endif
}
void nt_decoder_rx(void) BANKING_CTRL {
     #ifdef _5FF_COMPHY_112G_ADC_X4_8PLL
     uint16_t rx_nt_ratio;
        //NT decoding
	reg_MCU_DEBUG7_LANE_7_0 = 0x0;
	reg_MCU_DEBUG8_LANE_7_0 = 0x0;

	switch( reg_PIN_RXDCLK_NT_SEL_RD_LANE_2_0 ) {
	case 0: rx_nt_ratio =  8; break;	 //8T
	case 4: rx_nt_ratio = 16; break;	 //16T
	case 1: rx_nt_ratio = 32; break;	 //32T
	case 2: rx_nt_ratio = 33; break;	 //33T
	case 3: rx_nt_ratio = 34; break;	 //34T	
	}
	reg_MCU_DEBUG7_LANE_7_0 = rx_nt_ratio & 0xff;
	reg_MCU_DEBUG8_LANE_7_0 = (rx_nt_ratio >> 8);
        if((gen_rx == 39) || (gen_rx == 40) || (gen_rx == 41)) { // > 56.25G is X4
          rx_nt_ratio = rx_nt_ratio << 2;
        }
        else if ((gen_rx >= 31) && (gen_rx <= 38)) {             // 28.125-56.25 is X2
          rx_nt_ratio = rx_nt_ratio << 1;
        }
        else if ((gen_rx == 44) || (gen_rx == 45)) {
          rx_nt_ratio = rx_nt_ratio << 1;
        }
	reg_MCU_DEBUG7_LANE_7_0 = rx_nt_ratio & 0xff;
	reg_MCU_DEBUG8_LANE_7_0 = (rx_nt_ratio >> 8);
 
        rx_nt_ratio = rx_nt_ratio << 4; // 2X index to remove 16.5 case + to match div ratio X8 below

        rx_nt_ratio = rx_nt_ratio / lnx_RX_RATE_2_PLL_RATIO_X8_LANE_7_0;
	reg_MCU_DEBUG7_LANE_7_0 = rx_nt_ratio & 0xff;
	reg_MCU_DEBUG8_LANE_7_0 = (rx_nt_ratio >> 8);

	switch( rx_nt_ratio ) {
	case 16:  reg_RX_RXCLKNT_CTRL_LANE_1_0 = 2; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 =  4; reg_RX_RXCLKNT_INTDIV_EN_LANE = 1; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 0;break;	 //8T
	case 32:  reg_RX_RXCLKNT_CTRL_LANE_1_0 = 2; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 =  8; reg_RX_RXCLKNT_INTDIV_EN_LANE = 1; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 0;break;	 //16T
	case 33:  reg_RX_RXCLKNT_CTRL_LANE_1_0 = 3; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 =  5; reg_RX_RXCLKNT_INTDIV_EN_LANE = 0; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 0;break;	 //16.5T
	case 34:  reg_RX_RXCLKNT_CTRL_LANE_1_0 = 2; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 =  8; reg_RX_RXCLKNT_INTDIV_EN_LANE = 0; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 0;break;	 //17T
	case 64:  reg_RX_RXCLKNT_CTRL_LANE_1_0 = 2; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 = 16; reg_RX_RXCLKNT_INTDIV_EN_LANE = 1; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 0;break;	 //32T	
	case 66:  reg_RX_RXCLKNT_CTRL_LANE_1_0 = 3; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 = 11; reg_RX_RXCLKNT_INTDIV_EN_LANE = 1; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 0;break;	 
	case 68:  reg_RX_RXCLKNT_CTRL_LANE_1_0 = 2; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 = 17; reg_RX_RXCLKNT_INTDIV_EN_LANE = 1; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 0;break;	 
	case 128: reg_RX_RXCLKNT_CTRL_LANE_1_0 = 2; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 = 16; reg_RX_RXCLKNT_INTDIV_EN_LANE = 1; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 1;break;	 
	case 132: reg_RX_RXCLKNT_CTRL_LANE_1_0 = 3; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 = 22; reg_RX_RXCLKNT_INTDIV_EN_LANE = 1; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 0;break;	 
	case 136: reg_RX_RXCLKNT_CTRL_LANE_1_0 = 2; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 = 17; reg_RX_RXCLKNT_INTDIV_EN_LANE = 1; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 1;break;	 
	case 256: reg_RX_RXCLKNT_CTRL_LANE_1_0 = 2; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 = 16; reg_RX_RXCLKNT_INTDIV_EN_LANE = 1; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 2;break;	 
	case 264: reg_RX_RXCLKNT_CTRL_LANE_1_0 = 3; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 = 22; reg_RX_RXCLKNT_INTDIV_EN_LANE = 1; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 1;break;	 
	case 272: reg_RX_RXCLKNT_CTRL_LANE_1_0 = 2; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 = 17; reg_RX_RXCLKNT_INTDIV_EN_LANE = 1; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 2;break;	 
	case 512: reg_RX_RXCLKNT_CTRL_LANE_1_0 = 2; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 = 16; reg_RX_RXCLKNT_INTDIV_EN_LANE = 1; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 3;break;	 
	case 528: reg_RX_RXCLKNT_CTRL_LANE_1_0 = 3; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 = 22; reg_RX_RXCLKNT_INTDIV_EN_LANE = 1; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 2;break;	 
	case 544: reg_RX_RXCLKNT_CTRL_LANE_1_0 = 2; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 = 17; reg_RX_RXCLKNT_INTDIV_EN_LANE = 1; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 3;break;	 
        }
	#endif
}
