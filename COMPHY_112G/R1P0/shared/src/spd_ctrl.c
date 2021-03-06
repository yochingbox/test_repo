/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file spd_ctrl.c
* \purpose Speed Change
* \History
*	10/15/2015 Heejeong Ryu		Initial 
*   08/23/2016 Heejeong Ryu     Added Multispeed Muiltilane 
*/
#include "common.h"
//#include "spdtbl.h"
//#include "spdtbl_ring.h"
//#include "spdtb_adr.h"

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

void SpeedChange(){

	new_gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_4_0;
	gen_tx = min(new_gen_tx, cmx_PHY_GEN_MAX_4_0);
	new_gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_4_0;
	gen_rx = min(new_gen_rx, cmx_PHY_GEN_MAX_4_0);
	pll_clk_ready_all_0();
	PHY_STATUS = ST_CAL;

}

void loadspeedtbl_pll(uint8_t rate) {
	uint16_t temp;
	uint8_t rate_no, fbck;

    if(BYPASS_SPDTBL_LOAD)	return;
    
    fbck = reg_ANA_TRX_PLL_FBCK_SEL_LANE;

	/*reg_MCU_DEBUG0_LANE_7_0 = 0x35;
	reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
	reg_MCU_DEBUG2_LANE_7_0 = rate;
	reg_MCU_DEBUG3_LANE_7_0 = fbck;*/

	reg_PLL_REG_SEL_LANE_2_0				= lc_speedtable[fbck][rate][spdoft_pll_reg_sel];

	reg_FBDIV_LANE_7_0 						= lc_speedtable[fbck][rate][spdoft_fbdiv];
	reg_FBDIV_LANE_9_8						= lc_speedtable[fbck][rate][spdoft_fbdiv+1];

	reg_REFDIV_LANE_3_0 					= lc_speedtable[fbck][rate][spdoft_refdiv];
	reg_VIND_BAND_SEL_LANE					= lc_speedtable[fbck][rate][spdoft_vind_band_sel];

	reg_DIV_1G_LANE_7_0						= lc_speedtable[fbck][rate][spdoft_div_1g];
	reg_DIV_1G_LANE_9_8						= lc_speedtable[fbck][rate][spdoft_div_1g+1];

	reg_PLL_ICP_LANE_4_0					= lc_speedtable[fbck][rate][spdoft_pll_icp];
	reg_PLL_LPFR_LANE_1_0					= lc_speedtable[fbck][rate][spdoft_pll_lpfr];
	reg_PLL_LPFC_LANE_1_0					= lc_speedtable[fbck][rate][spdoft_pll_lpfc];
	reg_INIT_TXFOFFS_LANE_12_0_b0			= lc_speedtable[fbck][rate][spdoft_init_txfoffs];
	reg_INIT_TXFOFFS_LANE_12_0_b1			= lc_speedtable[fbck][rate][spdoft_init_txfoffs+1];

	temp									= (uint16_t)lc_speedtable[fbck][rate][spdoft_speed_thresh+1]; temp<<=8;
	temp									+= (uint16_t)lc_speedtable[fbck][rate][spdoft_speed_thresh];
	temp <<= cmx_FBC_RATIO_7_0;
	cmx_SPEED_THRESH_15_0 = temp;
	
	reg_SSC_ACC_FACTOR_LANE					= lc_speedtable[fbck][rate][spdoft_ssc_acc_factor];
	reg_LCCAP_USB_LANE						= lc_speedtable[fbck][rate][spdoft_lccap_usb];
	reg_SSC_STEP_125PPM_LANE_3_0 				= lc_speedtable[fbck][rate][spdoft_ssc_step_125ppm];
	reg_SSC_M_LANE_12_0_b0					= lc_speedtable[fbck][rate][spdoft_ssc_m];
	reg_SSC_M_LANE_12_0_b1					= lc_speedtable[fbck][rate][spdoft_ssc_m+1];

}

#if 0
uint8_t get_gen_memory_index(uint8_t gen) {
	//grp0 0,1,2,4,7,10,13,14,16
    	//grp1 0,1,4,7
	uint8_t serdes_gen_tb0[] = { 0, 1, 2, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 6, 7, 0, 8};
	uint8_t serdes_gen_tb1[] = { 0, 1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	//if(cmx_ETHERNET_CFG_1_0==1 || cmx_ETHERNET_CFG_1_0==2) return serdes_gen_tb0[gen];
	//else if(cmx_ETHERNET_CFG_1_0==3) return	serdes_gen_tb1[gen];
	if(cmx_ETHERNET_CFG_1_0==3) return serdes_gen_tb0[gen];
	else return 0;	
}
#endif

void loadspeedtbl_gen(void) {
	uint16_t temp;
	uint8_t gen;
	
	if(BYPASS_SPDTBL_LOAD)	return;
	
	gen = gen_tx;
	gen_pll_rate = speedtable[gen][spdoft_pll_rate_sel_tx];

	reg_MCU_DEBUG0_LANE_7_0 = 0x33;
	reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
	reg_MCU_DEBUG2_LANE_7_0 = gen;
	//reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
	reg_MCU_DEBUG4_LANE_7_0 = max_gen;
	//reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
	//reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
	//reg_MCU_DEBUG7_LANE_7_0 = tx_pll_rate;
	
	reg_TXSPEED_DIV_LANE_2_0		 		= speedtable[gen][spdoft_tx_speeddiv_lane];

	reg_TXREG_SPEEDTRK_CLK_LANE_2_0	 	= speedtable[gen][spdoft_txreg_speedtrk_clk_lane];
	reg_TXREG_SPEEDTRK_DATA_LANE_2_0 	 	= speedtable[gen][spdoft_txreg_speedtrk_data_lane];

#ifndef UPDATE_WAIT
	reg_MCU_DEBUGA_LANE_7_0 = speedtable[gen][spdoft_slewrate_en_lane];
	reg_SLEWRATE_EN_LANE				= speedtable[gen][spdoft_slewrate_en_lane];
	reg_MCU_DEBUGB_LANE_7_0 = reg_SLEWRATE_EN_LANE;
	reg_SLEWCTRL1_LANE_1_0					= speedtable[gen][spdoft_slewctrl1_lane];
	reg_SLEWCTRL0_LANE_1_0					= speedtable[gen][spdoft_slewctrl0_lane];
#endif
	reg_TX_PAM2_EN_LANE						= speedtable[gen][spdoft_tx_pam2_en_lane];
	reg_TX_HALFRATE_EN_LANE					= speedtable[gen][spdoft_tx_halfrate_en_lane];
	
	reg_TRAIN_PAT_NUM_LANE_9_0_b0			= speedtable[gen][spdoft_train_pat_num_lane];
	reg_TRAIN_PAT_NUM_LANE_9_0_b1			= speedtable[gen][spdoft_train_pat_num_lane+1];
	reg_TX_TRAIN_PAT_TOGGLE_LANE			= speedtable[gen][spdoft_tx_train_pat_toggle_lane];
	reg_TX_TRAIN_PAT_SEL_LANE_1_0			= speedtable[gen][spdoft_tx_train_pat_sel_lane];

	reg_ETHERNET_MODE_LANE_1_0				= speedtable[gen][spdoft_ethernet_mode_lane];
	reg_TX_TRAIN_PAT_MODE_LANE  			= speedtable[gen][spdoft_tx_train_pat_mode_lane];
	
	switch(reg_PIN_TXDCLK_NT_SEL_RD_LANE_2_0) {
		case 0: ANA_PLL25.BT.B0 = (ANA_PLL25.BT.B0&0x04)|0x20; reg_TXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 1: ANA_PLL25.BT.B0 = (ANA_PLL25.BT.B0&0x04)|0x80; reg_TXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 2: ANA_PLL25.BT.B0 = (ANA_PLL25.BT.B0&0x04)|0x2b; reg_TXCLK_NT_FIX_DIV_EN_LANE = 0; break;
		case 3: ANA_PLL25.BT.B0 = (ANA_PLL25.BT.B0&0x04)|0x42; reg_TXCLK_NT_FIX_DIV_EN_LANE = 0; break;
		case 4: ANA_PLL25.BT.B0 = (ANA_PLL25.BT.B0&0x04)|0x40; reg_TXCLK_NT_FIX_DIV_EN_LANE = 1; break;
	}
#if 0 //this should be done in tx_trainning
	reg_TX_AMP_DEFAULT1_LANE_6_0			= speedtable[gen][spdoft_tx_amp_default1_lane];
	reg_TX_EMPH0_DEFAULT1_LANE_4_0			= speedtable[gen][spdoft_tx_emph0_default1_lane];
	reg_TX_EMPH1_DEFAULT1_LANE_4_0			= speedtable[gen][spdoft_tx_emph1_default1_lane];
	reg_TX_EMPH2_DEFAULT1_LANE_4_0			= speedtable[gen][spdoft_tx_emph2_default1_lane];
	reg_TX_AMP_DEFAULT2_LANE_6_0			= speedtable[gen][spdoft_tx_amp_default2_lane];
	reg_TX_EMPH0_DEFAULT2_LANE_4_0			= speedtable[gen][spdoft_tx_emph0_default2_lane];
	reg_TX_EMPH1_DEFAULT2_LANE_4_0			= speedtable[gen][spdoft_tx_emph1_default2_lane];
	reg_TX_EMPH2_DEFAULT2_LANE_4_0			= speedtable[gen][spdoft_tx_emph2_default2_lane];
	reg_TX_AMP_DEFAULT3_LANE_6_0			= speedtable[gen][spdoft_tx_amp_default3_lane];
	reg_TX_EMPH0_DEFAULT3_LANE_4_0			= speedtable[gen][spdoft_tx_emph0_default3_lane];
	reg_TX_EMPH1_DEFAULT3_LANE_4_0			= speedtable[gen][spdoft_tx_emph1_default3_lane];
	reg_TX_EMPH2_DEFAULT3_LANE_4_0			= speedtable[gen][spdoft_tx_emph2_default3_lane];
#endif
	
	gen = gen_rx;
	rx_pll_rate	 							= speedtable[gen][spdoft_pll_rate_sel_rx]; 
	if(rx_pll_rate>1 || phy_mode==SERDES) rx_pll_rate = 0;	

	reg_RXSPEED_DIV_LANE_2_0		  		= speedtable[gen][spdoft_rx_speed_div_lane];
	reg_DTL_CLK_SPEEDUP_LANE_2_0  			= speedtable[gen][spdoft_dtl_clk_speedup_lane];
	reg_RXINTPI_LANE_3_0			  			= speedtable[gen][spdoft_rxintpi_lane];
	reg_INTPR_LANE_1_0				  		= speedtable[gen][spdoft_intpr_lane];
	reg_DLL_FREQ_SEL_LANE_2_0	  			= speedtable[gen][spdoft_dll_freq_sel_lane];
	reg_EOM_DLL_FREQ_SEL_LANE_2_0  			= speedtable[gen][spdoft_eom_dll_freq_sel_lane];

	reg_RXREG_SPEEDTRK_CLK_LANE_2_0	= speedtable[gen][spdoft_rxreg_speedtrk_clk_lane];
	reg_RXREG_SPEEDTRK_CLK_HALF_LANE	= speedtable[gen][spdoft_rxreg_speedtrk_clk_half_lane];
	reg_RXREG_SPEEDTRK_DATA_LANE_2_0	= speedtable[gen][spdoft_rxreg_speedtrk_data_lane];

	reg_RX_SELMUFI_LANE_3_0 				= speedtable[gen][spdoft_selmufi_lane];
	reg_RX_SELMUFF_LANE_3_0 				= speedtable[gen][spdoft_selmuff_lane];
	reg_REG_SELMUPI_LANE_3_0 				= speedtable[gen][spdoft_selmupi_lane];
	reg_REG_SELMUPF_LANE_3_0 				= speedtable[gen][spdoft_selmupf_lane];
	reg_DTL_CLK_MODE_LANE_1_0 				= speedtable[gen][spdoft_dtl_clk_mode_lane];
	reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b0 	= speedtable[gen][spdoft_rx_foffset_extra_m_lane];
	reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b1 	= speedtable[gen][spdoft_rx_foffset_extra_m_lane+1];
	reg_INIT_RXFOFFS_LANE_12_0_b0			= speedtable[gen][spdoft_init_rxfoffs_lane];
	reg_INIT_RXFOFFS_LANE_12_0_b1			= speedtable[gen][spdoft_init_rxfoffs_lane+1];

#ifndef UPDATE_WAIT
	reg_PATH_DISABLE_EDGE_LANE              = speedtable[gen][spdoft_path_disable_edge_lane];
#endif
	reg_DFE_RATE_MODE_LANE_1_0		= speedtable[gen][spdoft_reg_dfe_full_rate_mode_lane];    	
	dfe_dis					= speedtable[gen][spdoft_reg_dfe_dis_lane];
	reg_DFE_TAP_SETTLE_SCALE_LANE_1_0_b0    = speedtable[gen][spdoft_reg_dfe_tap_settle_scale_lane];
	reg_DFE_TAP_SETTLE_SCALE_LANE_1_0_b1	= speedtable[gen][spdoft_reg_dfe_tap_settle_scale_lane] >> 1;
	
	reg_RX_PAM2_EN_LANE                     = speedtable[gen][spdoft_rx_pam2_en_lane];
	reg_RX_HALFRATE_EN_LANE					= speedtable[gen][spdoft_rx_halfrate_en_lane];
	reg_DFE_PAM2_MODE_LANE					= speedtable[gen][spdoft_dfe_pam2_mode_lane];
		
	reg_DFE_EN_LANE = dfe_dis==0;  reg_DFE_DIS_LANE = dfe_dis;
	rxdll_temp_a_lane 						= speedtable[gen][spdoft_rxdll_temp_a_lane];
	rxdll_temp_b_lane 						= speedtable[gen][spdoft_rxdll_temp_b_lane];

	reg_RXCLK_25M_CTRL_LANE_1_0				= speedtable[gen][spdoft_rxclk_25m_ctrl_lane];
	reg_RXCLK_25M_DIV1P5_EN_LANE            = speedtable[gen][spdoft_rxclk_25m_div1p5_en_lane];
	reg_RXCLK_25M_DIV_LANE_7_0 				= speedtable[gen][spdoft_rxclk_25m_div1p5_en_lane];
	reg_RXCLK_25M_FIX_DIV_EN_LANE			= speedtable[gen][spdoft_rxclk_25m_div1p5_en_lane];

	if(reg_RXSPEED_DIV_LANE_2_0&0x04) {
		switch(reg_PIN_RXDCLK_NT_SEL_RD_LANE_2_0) {
		case 0: ANA_PLL26.BT.B0 = (ANA_PLL26.BT.B0&0x04)|0x40; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 1: ANA_PLL26.BT.B0 = (ANA_PLL26.BT.B0&0x04)|0x82; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 2: ANA_PLL26.BT.B0 = (ANA_PLL26.BT.B0&0x04)|0x5b; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 3: ANA_PLL26.BT.B0 = (ANA_PLL26.BT.B0&0x04)|0x8a; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 4: ANA_PLL26.BT.B0 = (ANA_PLL26.BT.B0&0x04)|0x80; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		}
	}
	else {
		switch(reg_PIN_RXDCLK_NT_SEL_RD_LANE_2_0) {
		case 0: ANA_PLL26.BT.B0 = (ANA_PLL26.BT.B0&0x04)|0x20; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 1: ANA_PLL26.BT.B0 = (ANA_PLL26.BT.B0&0x04)|0x80; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 2: ANA_PLL26.BT.B0 = (ANA_PLL26.BT.B0&0x04)|0x2b; reg_RXCLK_NT_FIX_DIV_EN_LANE = 0; break;
		case 3: ANA_PLL26.BT.B0 = (ANA_PLL26.BT.B0&0x04)|0x42; reg_RXCLK_NT_FIX_DIV_EN_LANE = 0; break;
		case 4: ANA_PLL26.BT.B0 = (ANA_PLL26.BT.B0&0x04)|0x40; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		}
	}
}

void loadSpeedtbl(void) {	
	
	loadspeedtbl_gen();
		
	//if( mcuid== master_mcu ) {
	//	master_sync_request();		
	//	if( tx_pll_rate != PLL_RATE_SEL )
			//loadspeedtbl_pll(tx_pll_rate);
			loadspeedtbl_pll(gen_pll_rate);
	//	master_sync_clean();		
	//} else { slave_sync_wait(); }
}

void loadSpdtbl_4_fcnt(void) {

	uint8_t rate, fbck;

	fbck = reg_ANA_TRX_PLL_FBCK_SEL_LANE;
	//fbck = 0;
	//rate = PLL_RATE_SEL;
	rate = gen_pll_rate;

	reg_FBDIV_LANE_7_0 						= lc_speedtable[fbck][rate][spdoft_fbdiv_cal];
	reg_FBDIV_LANE_9_8 						= lc_speedtable[fbck][rate][spdoft_fbdiv_cal+1];

}
