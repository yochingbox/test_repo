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
#include "driver.h"
//#include "spdtbl.h"
//#include "spdtbl_ring.h"
//#include "spdtb_adr.h"

#ifdef USE_BANKING
#pragma codeseg BANK2
#endif

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

void SpeedChange() BANKING_CTRL {

	new_gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_4_0;
	gen_tx = min_ram(new_gen_tx, cmx_PHY_GEN_MAX_4_0);
	new_gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_4_0;
	gen_rx = min_ram(new_gen_rx, cmx_PHY_GEN_MAX_4_0);
	pll_clk_ready_all_0();

	if (cmx_CAL_DONE == 1)
		turn_off_cont_cal();
	PHY_STATUS = ST_CAL;
}

void loadspeedtbl_pll(uint8_t rate) BANKING_CTRL {
	uint16_t temp;
	uint8_t rate_no, fbck;

    if(BYPASS_SPDTBL_LOAD)	return;
    
    fbck = reg_ANA_TRX_PLL_FBCK_SEL_LANE;
	fbck = 0; 
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
	lnx_CALIBRATION_DEBUG3_LANE_7_0 = temp>>8&0xff;
	lnx_CALIBRATION_DEBUG2_LANE_7_0 = temp&0xff;
	// Should not use common reg!
	//cmx_SPEED_THRESH_15_0 = temp;
	
	reg_SSC_ACC_FACTOR_LANE					= lc_speedtable[fbck][rate][spdoft_ssc_acc_factor];
	reg_LCCAP_USB_LANE						= lc_speedtable[fbck][rate][spdoft_lccap_usb];
	reg_SSC_STEP_125PPM_LANE_3_0 				= lc_speedtable[fbck][rate][spdoft_ssc_step_125ppm];
	reg_SSC_M_LANE_12_0_b0					= lc_speedtable[fbck][rate][spdoft_ssc_m];
	reg_SSC_M_LANE_12_0_b1					= lc_speedtable[fbck][rate][spdoft_ssc_m+1];

}

#if 0
uint8_t get_gen_memory_index(uint8_t gen) BANKING_CTRL {
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
void loadspeedtbl_gen_ctle(void) BANKING_CTRL {
	uint8_t gen;
	gen = gen_rx;
	reg_CTLE_LOW_SPEED_SEL_LANE_1_0			= speedtable[gen][spdoft_ctle_low_speed_sel_lane];
	reg_CTLE_BYPASS1_EN_LANE				= speedtable[gen][spdoft_ctle_bypass1_en_lane];
	reg_CTLE_BYPASS2_EN_LANE				= speedtable[gen][spdoft_ctle_bypass2_en_lane];
	reg_CTLE_CURRENT1_SEL_LANE_3_0			= speedtable[gen][spdoft_ctle_current1_sel_lane];
	reg_CTLE_CURRENT1_TIA_SEL_LANE_3_0		= speedtable[gen][spdoft_ctle_current1_tia_sel_lane];
	reg_CTLE_CURRENT2_SEL_G_P2_LANE_3_0		= speedtable[gen][spdoft_ctle_current2_sel_g_p2_lane];
	reg_CTLE_CURRENT2_SEL_G_P4_LANE_3_0		= speedtable[gen][spdoft_ctle_current2_sel_g_p4_lane];
	reg_CTLE_CURRENT2_SEL_G_P1_LANE_3_0 = reg_CTLE_CURRENT2_SEL_G_P2_LANE_3_0;
	reg_CTLE_CURRENT2_SEL_G_P3_LANE_3_0 = reg_CTLE_CURRENT2_SEL_G_P2_LANE_3_0;
	reg_CTLE_RL1_SEL_LANE_3_0				= speedtable[gen][spdoft_ctle_rl1_sel_lane];
	reg_CTLE_RL1_TIA_SEL_LANE_3_0			= speedtable[gen][spdoft_ctle_rl1_tia_sel_lane];
	reg_CTLE_RF_CTRL_LANE_3_0				= speedtable[gen][spdoft_ctle_rf_ctrl_lane];
	reg_CTLE_RL2_SEL_G_P2_LANE_3_0			= speedtable[gen][spdoft_ctle_rl2_sel_g_p2_lane];
	reg_CTLE_RL2_SEL_G_P4_LANE_3_0			= speedtable[gen][spdoft_ctle_rl2_sel_g_p4_lane];
	reg_CTLE_RL2_SEL_G_P1_LANE_3_0 = reg_CTLE_RL2_SEL_G_P2_LANE_3_0;
	reg_CTLE_RL2_SEL_G_P3_LANE_3_0 = reg_CTLE_RL2_SEL_G_P2_LANE_3_0;
	
	// GLC5616-377: reg_CTLE_RES1_SEL_LANE_3_0
	// IPCE_COMPHY-1550
	// sync up on 20191031 RE: 12nm 112G SPEED Table update-CTLE (Xin Ma)
	// CTLE_RL2_SEL2_G_P1[3:0]-ANA_RSVD2[3:0]
	// CTLE_RL2_SEL2_G_P2[3:0]-ANA_RSVD7[7:4]
	// CTLE_RL2_SEL2_G_P3[3:0]-ANA_RSVD3[3:0]
	// CTLE_RL2_SEL2_G_P4[3:0]-ANA_RSVD6[3:0]
	if(reg_RX_HALFRATE_EN_LANE){
		switch(reg_RXSPEED_DIV_LANE_2_0){
		case 7: //1.25
			reg_ANA_RSVD2_LANE_7_0 = 0x0;
			reg_CTLE_RES1_SEL_LANE_3_0 = 0xe;
			reg_CTLE_CAP1_SEL_LANE_5_0 = 0xf;
			reg_CTLE_RS2_SEL_G_P1_LANE_3_0 = 0xb;
			reg_CTLE_CAP2_SEL_LANE_4_0 = 0xf;
			break;
		case 6: //2.5~3.125
			reg_ANA_RSVD2_LANE_7_0 = 0x0;
			reg_CTLE_RES1_SEL_LANE_3_0 = 0xd;
			reg_CTLE_CAP1_SEL_LANE_5_0 = 0xf;
			reg_CTLE_RS2_SEL_G_P1_LANE_3_0 = 0xa;
			reg_CTLE_CAP2_SEL_LANE_4_0 = 0xf;
			break;
		case 5: //5~6.25
			reg_ANA_RSVD2_LANE_7_0 = 0x0;
			reg_CTLE_RES1_SEL_LANE_3_0 = 0xc;
			reg_CTLE_CAP1_SEL_LANE_5_0 = 0xf;
			reg_CTLE_RS2_SEL_G_P1_LANE_3_0 = 0x0;
			reg_CTLE_CAP2_SEL_LANE_4_0 = 0xf;
			break;
		case 4: //10~12.5
			reg_ANA_RSVD2_LANE_7_0 = 0x5;
			reg_CTLE_RES1_SEL_LANE_3_0 = 0x6;
			reg_CTLE_CAP1_SEL_LANE_5_0 = 0x3f;
			reg_CTLE_RS2_SEL_G_P1_LANE_3_0 = 0x0;
			reg_CTLE_CAP2_SEL_LANE_4_0 = 0x1f;
			break;
		case 0: //20.625~28.5, 50~56.25
			reg_ANA_RSVD2_LANE_7_0 = 0xe;
			reg_CTLE_RES1_SEL_LANE_3_0 = 0x5;
			reg_CTLE_CAP1_SEL_LANE_5_0 = 0x1f;
			reg_CTLE_RS2_SEL_G_P1_LANE_3_0 = 0x0;
			reg_CTLE_CAP2_SEL_LANE_4_0 = 0xf;
			break;
		}
	}else{ //100~112
		reg_ANA_RSVD2_LANE_7_0 = 0x2;
		reg_CTLE_RES1_SEL_LANE_3_0 = 0x2;
		reg_CTLE_CAP1_SEL_LANE_5_0 = 0x1f;
		reg_CTLE_RS2_SEL_G_P1_LANE_3_0 = 0x0;
		reg_CTLE_CAP2_SEL_LANE_4_0 = 0xf;
	}
	
	reg_ANA_RSVD7_LANE_7_0 = (reg_ANA_RSVD7_LANE_7_0&0xf)|(reg_ANA_RSVD2_LANE_7_0<<4);
	reg_ANA_RSVD3_LANE_7_0 = reg_ANA_RSVD2_LANE_7_0;
	reg_ANA_RSVD6_LANE_7_0 = reg_ANA_RSVD2_LANE_7_0;
	
	reg_CTLE_RS2_SEL_G_P2_LANE_3_0 = reg_CTLE_RS2_SEL_G_P1_LANE_3_0;
	reg_CTLE_RS2_SEL_G_P3_LANE_3_0 = reg_CTLE_RS2_SEL_G_P1_LANE_3_0;
	reg_CTLE_RS2_SEL_G_P4_LANE_3_0 = reg_CTLE_RS2_SEL_G_P1_LANE_3_0;
}

void loadspeedtbl_gen(void) BANKING_CTRL {
	uint16_t temp;
	uint8_t gen;
	
	if(BYPASS_SPDTBL_LOAD)	return;
	
	gen = gen_tx;
	gen_pll_rate 					= speedtable[gen][spdoft_pll_rate_sel_tx];

	//reg_MCU_DEBUG0_LANE_7_0 = 0x33;
	//reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
	//reg_MCU_DEBUG2_LANE_7_0 = gen;
	//reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
	//reg_MCU_DEBUG4_LANE_7_0 = max_gen;
	//reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
	//reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
	//reg_MCU_DEBUG7_LANE_7_0 = tx_pll_rate;
	
	reg_TXSPEED_DIV_LANE_2_0			= speedtable[gen][spdoft_tx_speeddiv_lane];
	reg_TXREG_SPEEDTRK_CLK_LANE_2_0	 		= speedtable[gen][spdoft_txreg_speedtrk_clk_lane];
	reg_TXREG_SPEEDTRK_DATA_LANE_2_0 		= speedtable[gen][spdoft_txreg_speedtrk_data_lane];

#ifndef UPDATE_WAIT
<-	reg_MCU_DEBUGA_LANE_7_0 			= speedtable[gen][spdoft_slewrate_en_lane];
	reg_SLEWRATE_EN_LANE				= speedtable[gen][spdoft_slewrate_en_lane];
<-	reg_MCU_DEBUGB_LANE_7_0 			= reg_SLEWRATE_EN_LANE;
	reg_SLEWCTRL1_LANE_1_0				= speedtable[gen][spdoft_slewctrl1_lane];
	reg_SLEWCTRL0_LANE_1_0				= speedtable[gen][spdoft_slewctrl0_lane];
#endif
	reg_TX_PAM2_EN_LANE				= speedtable[gen][spdoft_tx_pam2_en_lane];
	reg_TX_HALFRATE_EN_LANE				= speedtable[gen][spdoft_tx_halfrate_en_lane];
	
//---	reg_TRAIN_PAT_NUM_LANE_9_0_b0			= speedtable[gen][spdoft_train_pat_num_lane];
//---	reg_TRAIN_PAT_NUM_LANE_9_0_b1			= speedtable[gen][spdoft_train_pat_num_lane+1];
//---	reg_TX_TRAIN_PAT_TOGGLE_LANE			= speedtable[gen][spdoft_tx_train_pat_toggle_lane];
	reg_TX_TRAIN_PAT_SEL_LANE_1_0			= speedtable[gen][spdoft_tx_train_pat_sel_lane];

//---	reg_ETHERNET_MODE_LANE_1_0			= speedtable[gen][spdoft_ethernet_mode_lane];
//---	reg_TX_TRAIN_PAT_MODE_LANE  			= speedtable[gen][spdoft_tx_train_pat_mode_lane];
	
			drv_func_cfg();

//	switch(reg_PIN_TXDCLK_NT_SEL_RD_LANE_2_0) {
//		case 0: ANA_PLL25.BT.B0 = (ANA_PLL25.BT.B0&0x04)|0x20; reg_TXCLK_NT_FIX_DIV_EN_LANE = 1; break;
//		case 1: ANA_PLL25.BT.B0 = (ANA_PLL25.BT.B0&0x04)|0x80; reg_TXCLK_NT_FIX_DIV_EN_LANE = 1; break;
//		case 2: ANA_PLL25.BT.B0 = (ANA_PLL25.BT.B0&0x04)|0x2b; reg_TXCLK_NT_FIX_DIV_EN_LANE = 0; break;
//		case 3: ANA_PLL25.BT.B0 = (ANA_PLL25.BT.B0&0x04)|0x42; reg_TXCLK_NT_FIX_DIV_EN_LANE = 0; break;
//		case 4: ANA_PLL25.BT.B0 = (ANA_PLL25.BT.B0&0x04)|0x40; reg_TXCLK_NT_FIX_DIV_EN_LANE = 1; break;
//	}
#if 1 //this should be done in tx_trainning
//---	reg_TX_AMP_DEFAULT1_LANE_6_0			= speedtable[gen][spdoft_tx_amp_default1_lane];
//---	reg_TX_EMPH0_DEFAULT1_LANE_4_0			= speedtable[gen][spdoft_tx_emph0_default1_lane];
//---	reg_TX_EMPH1_DEFAULT1_LANE_4_0			= speedtable[gen][spdoft_tx_emph1_default1_lane];

//---	reg_TX_EMPH0_MAX_LANE_4_0			= speedtable[gen][spdoft_tx_emph0_max_lane];
//---	reg_TX_EMPH1_MAX_LANE_4_0			= speedtable[gen][spdoft_tx_emph1_max_lane];
//---	reg_TX_EMPH2_MAX_LANE_4_0			= speedtable[gen][spdoft_tx_emph2_max_lane];
	
//---	reg_TX_AMP_DEFAULT2_LANE_6_0			= speedtable[gen][spdoft_tx_amp_default2_lane];
//---	reg_TX_EMPH0_DEFAULT2_LANE_4_0			= speedtable[gen][spdoft_tx_emph0_default2_lane];
//---	reg_TX_EMPH1_DEFAULT2_LANE_4_0			= speedtable[gen][spdoft_tx_emph1_default2_lane];

//---	reg_TX_AMP_DEFAULT3_LANE_6_0			= speedtable[gen][spdoft_tx_amp_default3_lane];
//---	reg_TX_EMPH0_DEFAULT3_LANE_4_0			= speedtable[gen][spdoft_tx_emph0_default3_lane];
//---	reg_TX_EMPH1_DEFAULT3_LANE_4_0			= speedtable[gen][spdoft_tx_emph1_default3_lane];
#endif
	
	// toggle reg_RST_TX_TRAIN_IF_CLK_LANE to regain control in case there is a tx_train before
	reg_RST_TX_TRAIN_IF_CLK_LANE = 1;
	reg_RST_TX_TRAIN_IF_CLK_LANE = 0;
	if(reg_TX_PAM2_EN_LANE==0){
		if(reg_TX_HALFRATE_EN_LANE){// 53G
			reg_TX_EM_PRE2_CTRL_LANE_4_0 = 0x2;
			reg_TX_EM_PRE_CTRL_LANE_4_0 = 0xa;
			reg_TX_EM_MAIN_CTRL_LANE_6_0 = 0x33;
			reg_TX_EM_POST_CTRL_LANE_4_0 = 0x0;
			reg_TX_FIR_C_CTRL1_LANE_5_0 = 0x0;
			reg_TX_FIR_C_CTRL2_LANE_5_0 = 0x0;
			reg_TX_FIR_C_CTRL3_LANE_5_0 = 0x0;
		}else{// 106G
	//https://essjira.marvell.com/browse/IPCE_COMPHY-1564		
			reg_TX_EM_PRE2_CTRL_LANE_4_0 = 0x5;
			reg_TX_EM_PRE_CTRL_LANE_4_0 = 0x10;
			reg_TX_EM_MAIN_CTRL_LANE_6_0 = 0x28;
			reg_TX_EM_POST_CTRL_LANE_4_0 = 0x2;
	///////////////fix of no response of PT_ERR_CNT and PT_CNT at 100G
	///////////////AE forgot to include the following script in JIRA https://essjira.marvell.com/browse/IPCE_COMPHY-1564
	//		reg_TX_FIR_UPDATE_LANE = 0x0;
	//		reg_TX_FIR_UPDATE_LANE = 0x1;
		}
	}else{// pam2
		reg_TX_EM_PRE2_CTRL_LANE_4_0 = 0x0;
		reg_TX_EM_PRE_CTRL_LANE_4_0 = 0x0;
		reg_TX_EM_MAIN_CTRL_LANE_6_0 = 0x3f;
		reg_TX_EM_POST_CTRL_LANE_4_0 = 0x0;
		reg_TX_FIR_C_CTRL1_LANE_5_0 = 0x0;
		reg_TX_FIR_C_CTRL2_LANE_5_0 = 0x0;
		reg_TX_FIR_C_CTRL3_LANE_5_0 = 0x0;
	}
	reg_TX_FIR_UPDATE_LANE = 0x0;
	reg_TX_FIR_UPDATE_LANE = 0x1;
	
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
	reg_DFE_RATE_MODE_LANE_1_0		= speedtable[gen][spdoft_reg_dfe_rate_mode_lane];    	
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
	
	// CTLE entries
	// must be after reg_RX_HALFRATE_EN_LANE,reg_RXSPEED_DIV_LANE_2_0
	loadspeedtbl_gen_ctle();
	
	reg_DFE_CUR_SEL_G_LANE_3_0				= speedtable[gen][spdoft_dfe_cur_sel_g_lane];

	reg_PU_SMPLR_D_P3_LANE_2_0				= speedtable[gen][spdoft_pu_smplr_d_p3_lane];
	reg_PU_SMPLR_D_P1_LANE_2_0				= speedtable[gen][spdoft_pu_smplr_d_p1_lane];
	reg_PU_SMPLR_S_P3_LANE_2_0				= speedtable[gen][spdoft_pu_smplr_s_p3_lane];
	reg_PU_SMPLR_S_P1_LANE_2_0				= speedtable[gen][spdoft_pu_smplr_s_p1_lane];
	reg_PU_SMPLR_D_P4_LANE_2_0				= speedtable[gen][spdoft_pu_smplr_d_p4_lane];
	reg_PU_SMPLR_D_P2_LANE_2_0				= speedtable[gen][spdoft_pu_smplr_d_p2_lane];
	reg_PU_SMPLR_S_P4_LANE_2_0				= speedtable[gen][spdoft_pu_smplr_s_p4_lane];
	reg_PU_SMPLR_S_P2_LANE_2_0				= speedtable[gen][spdoft_pu_smplr_s_p2_lane];

	reg_PATH_DISABLE_EDGE_P1P3_LANE 	    = speedtable[gen][spdoft_path_disable_edge_p1p3_lane];
	reg_PATH_DISABLE_S_P1P3_LANE            = speedtable[gen][spdoft_path_disable_s_p1p3_lane];
	reg_PATH_DISABLE_D_P1P3_LANE            = speedtable[gen][spdoft_path_disable_d_p1p3_lane];

	reg_PATH_DISABLE_EDGE_P2P4_LANE			= speedtable[gen][spdoft_path_disable_edge_p2p4_lane];
	//reg_PATH_DISABLE_S_P2P4_LANE            = speedtable[gen][];
	//reg_PATH_DISABLE_D_P2P4_LANE            = speedtable[gen][];


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
	
	if(reg_DFE_RATE_MODE_LANE_1_0==HR) {
		reg_DFE_F0X_SEL_LANE_4_0 = DFE_FX_SEL_FN2;	
	}
	
	
	// X7121M required speed related settings
	// GLC5616-343
	if(reg_RX_PAM2_EN_LANE){
		reg_RXDATA_GRAY_CODE_EN_LANE = 0;
		reg_PT_PRBS_INV_RX_LANE = 0;
	}else{
		reg_RXDATA_GRAY_CODE_EN_LANE = 1;
		reg_PT_PRBS_INV_RX_LANE = 1;
	}
	if(reg_TX_PAM2_EN_LANE){
		reg_TXDATA_GRAY_CODE_EN_LANE = 0;
		reg_PT_PRBS_INV_LANE = 0;
	}else{
		reg_TXDATA_GRAY_CODE_EN_LANE = 1;
		reg_PT_PRBS_INV_LANE = 1;
	}
	
	if(reg_ETHERNET_MODE_LANE_1_0==2||reg_ETHERNET_MODE_LANE_1_0==3){
	    // For X7121M to link up with other vendors
    	lnx_TX_TRAIN_CODING_MODE_LANE = 1;
	}else{
		// PAM2 should restore user settings!
		lnx_TX_TRAIN_CODING_MODE_LANE = 0;	
	}
	
	// IPCE_COMPHY-1557 flexible cdr_phase_min/max
	if(reg_RXSPEED_DIV_LANE_2_0>>2&0x1){// 10G
		tag_CDR_PHASE_MIN = 134;
	}else{
		tag_CDR_PHASE_MIN = 0;
	}
	tag_CDR_PHASE_MAX = 192;
	
	// Temp change without speed table change
	//reg_RX_SELMUFF_LANE_3_0 				= speedtable[gen][spdoft_selmuff_lane];
	//reg_REG_SELMUPF_LANE_3_0 				= speedtable[gen][spdoft_selmupf_lane];
	if(reg_RX_HALFRATE_EN_LANE){
		switch(reg_RXSPEED_DIV_LANE_2_0){
		case 7: //1.25
		case 6: //2.5~3.125
			reg_REG_SELMUPF_LANE_3_0 = 1;
			break;
		case 5: //5~6.25
			reg_REG_SELMUPF_LANE_3_0 = 2;
			break;
		case 4: //10~12.5
			reg_REG_SELMUPF_LANE_3_0 = 3;
			break;
		case 0: //20.625~28.5, 50~56.25
			reg_REG_SELMUPF_LANE_3_0 = 4;
			reg_RX_SELMUFF_LANE_3_0 = 4;
			break;
		}
	}else{ //100~112
		// 20191127 Fang/John/Zhengdong
		reg_REG_SELMUPF_LANE_3_0 = 0x6;
		reg_RX_SELMUFF_LANE_3_0 = 0x7;
	}
	
//https://essjira.marvell.com/browse/IPCE_COMPHY-1564
	if(reg_RX_PAM2_EN_LANE){
		reg_CDR_MODE_LANE_2_0 = 0;
	}
	else if(reg_RX_HALFRATE_EN_LANE){
		reg_CDR_MODE_LANE_2_0 = 2;
	}
	else{
	// Fang: CDR_MODE_LANE=2 is in 2019/11/25 script for better performance
		reg_CDR_MODE_LANE_2_0 = 2;
	}
//end - https://essjira.marvell.com/browse/IPCE_COMPHY-1564

}
#if 0
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
#endif
void loadSpdtbl_4_fcnt(void) BANKING_CTRL {

	uint8_t rate, fbck;

	fbck = reg_ANA_TRX_PLL_FBCK_SEL_LANE;
	fbck = 0;
	//rate = PLL_RATE_SEL;
	rate = gen_pll_rate;

	reg_FBDIV_LANE_7_0 						= lc_speedtable[fbck][rate][spdoft_fbdiv_cal];
	reg_FBDIV_LANE_9_8 						= lc_speedtable[fbck][rate][spdoft_fbdiv_cal+1];
	reg_ANA_TRX_PLL_FBCK_SEL_LANE = 0;
}

// For slumber wakeup
void turn_on_cont_cal(void) BANKING_CTRL
{
	// turn off PLL cal at last
    reg_LCPLL_DCC_EN_LANE = 1;
    reg_LCPLL_DCC_CAL_EN_LANE = 1;
	reg_PLL_DCC_TOP_CONT_START_LANE = 1;
	// Hui Zhao: lower the risk in temperature ramping
	//reg_PLL_AMP_TOP_CONT_START_LANE = 1;

    reg_LCPLL_TEMPC_EXT_EN_LANE = 0; //need to set LCPLL_TEMPC_EXT_EN_LANE to 0 after pll done with calib
	reg_LCPLL_TEMPC_CAL_EN_LANE = 1; //this calibration is not realized in digital unified core. Instead, it is specially designed by Xin Liu (Beijing office)
	
	Cal_Cont();
}

void turn_off_cont_cal(void) BANKING_CTRL
{
	// revert order of turn_on_cont_cal
	if(reg_RX_EOM_TOP_CONT_START_LANE){
		reg_RX_EOM_TOP_CONT_START_LANE = 0;
		while(!reg_RX_EOM_TOP_CONT_DONE_LANE);
	}
	if(reg_RX_CLK_TOP_CONT_START_LANE){
		reg_RX_CLK_TOP_CONT_START_LANE = 0;
		while(!reg_RX_CLK_TOP_CONT_DONE_LANE);
	}
	if(reg_DLL_TOP_CONT_START_LANE){
		reg_DLL_TOP_CONT_START_LANE = 0;
		while(!reg_DLL_TOP_CONT_DONE_LANE);
	}
	if(reg_TX_ALIGN90_DCC_TOP_CONT_START_LANE){
		reg_TX_ALIGN90_DCC_TOP_CONT_START_LANE = 0;
		while(!reg_TX_ALIGN90_DCC_TOP_CONT_DONE_LANE);
	}
	// turn off PLL cal at last in sequence
	if(reg_LCPLL_TEMPC_CAL_EN_LANE){
		reg_LCPLL_TEMPC_CAL_EN_LANE = 0;
		while(!reg_LCPLL_TEMPC_CAL_DONE_LANE);
	}
	if(reg_PLL_AMP_TOP_CONT_START_LANE){
		reg_PLL_AMP_TOP_CONT_START_LANE = 0;
		while(!reg_PLL_AMP_TOP_CONT_DONE_LANE);
	}
	if(reg_PLL_DCC_TOP_CONT_START_LANE){
		reg_PLL_DCC_TOP_CONT_START_LANE = 0;
		while(!reg_PLL_DCC_TOP_CONT_DONE_LANE);
	}	
	
/*	reg_TRX_DIG_CAL_CLK_RST_BOT_LANE = 1;*/
/*	reg_TRX_DIG_CAL_CLK_RST_BOT_LANE = 0;*/
/*	reg_TRX_DIG_CAL_CLK_RST_TOP_LANE = 1;*/
/*	reg_TRX_DIG_CAL_CLK_RST_TOP_LANE = 0;*/
/*	reg_CMN_DIG_CAL_CLK_RST = 1;*/
/*	reg_CMN_DIG_CAL_CLK_RST = 0;*/
	
/*	reg_PLL_AMP_TOP_CONT_START_LANE = 0;*/
/*	reg_PLL_DCC_TOP_CONT_START_LANE = 0;*/
/*	reg_TX_ALIGN90_DCC_TOP_CONT_START_LANE = 0;*/
/*	reg_DLL_TOP_CONT_START_LANE = 0;*/
/*	reg_RX_CLK_TOP_CONT_START_LANE = 0;*/
/*	reg_RX_EOM_TOP_CONT_START_LANE = 0;*/
/*	reg_LCPLL_TEMPC_CAL_EN_LANE = 0;*/

	//while(!reg_PLL_DCC_TOP_CONT_DONE_LANE || !reg_PLL_AMP_TOP_CONT_DONE_LANE || !reg_RX_EOM_TOP_CONT_DONE_LANE || !reg_TX_ALIGN90_DCC_TOP_CONT_DONE_LANE || !reg_DLL_TOP_CONT_DONE_LANE || !reg_RX_CLK_TOP_CONT_DONE_LANE || !reg_LCPLL_TEMPC_CAL_DONE_LANE);
}
