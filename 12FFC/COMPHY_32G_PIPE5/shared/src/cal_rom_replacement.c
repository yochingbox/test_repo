/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file cal_rom_replacement.c
* \purpose calibration rom call
* \History
*	10/13/2017 Heejeong Ryu		Initial 
*/
#include "common.h"

#ifdef USE_BANKING
#ifdef _32G_V1P0
#pragma codeseg BANK1
#pragma constseg BANK1
#else
#pragma codeseg BANK2
#pragma constseg BANK2
#endif
#endif

#ifdef SUPPORT_EXT_MEM

void load_cal_data_all_ram(void) BANKING_CTRL {
	uint8_t val, gen, div2;
	uint8_t gen_pll_rate_rx, gen_pll_rate_tx;

	LOAD_CAL_ON = 1;

	gen_pll_rate_rx = rx_pll_rate_x;
	gen_pll_rate_tx = tx_pll_rate_x;

	if(mcuid==master_mcu && slave_phy_on==0) {
		//plldcc_cal();
		#ifdef _32G_ANA
		if(reg_LCPLLCLK_DIV2_SEL==0) {
			reg_LCPLL_DCC_5_0 = 0x20;
		}
		else
		#endif
		{
			val = cmx_cal_plldcc[PWR + cmx_PLLDCC_CAL_CONT_CUR_LOAD_EN][PLL_RATE_SEL];
			plldcc_step_cnt = PLLDCC_CAL_STEP_SIZE; //when speed change, restore the fraction code to middle
			reg_LCPLL_DCC_5_0 = val;
		}
		reg_LCPLL_DCC_CLK = 1;
		reg_TRX_IMPCAL_CLK = 1;
		reg_LCPLL_DCC_CLK = 0;
		reg_TRX_IMPCAL_CLK = 0;
	}
	
	//dll_cmp_offset_cal();
	//reg_DLL_CMP_OFFSET_CAL_RESULT_EXT_LANE_3_0 = lnx_cal_dll_cmp_offset[gen_pll_rate_rx];

	//dll_gm_cal();
	reg_DLL_GM_CAL_RESULT_EXT_LANE_2_0 = lnx_cal_dll_gmsel[gen_pll_rate_rx];

	//dll_vdda_cal(DLL_PHASE_STEP);
	reg_DLL_VDDA_CAL_RESULT_EXT_LANE_5_0 = lnx_cal_vdda_dll_sel[PWR + cmx_RXDLL_CAL_CONT_CUR_LOAD_EN][gen_pll_rate_rx];
	
	//dll_eom_gm_cal();
	reg_EOM_DLL_GM_CAL_RESULT_EXT_LANE_2_0 = lnx_cal_dll_eom_gmsel[gen_pll_rate_rx];
	
	//dll_eom_vdda_cal(DLL_PHASE_STEP);
	reg_EOM_DLL_VDDA_CAL_RESULT_EXT_LANE_5_0 = lnx_cal_vdda_dll_eom_sel[PWR + cmx_EOM_DLL_CAL_CONT_CUR_LOAD_EN][gen_pll_rate_rx];
	
	//reg_DLL_CMP_OFFSET_CAL_BYPASS_EN_LANE = 0;
	//reg_DLL_CMP_OFFSET_CAL_SINGLE_EN_LANE = 0;
	reg_DLL_GM_CAL_BYPASS_EN_LANE = 0;
	reg_DLL_GM_CAL_SINGLE_EN_LANE = 0;
	reg_DLL_VDDA_CAL_BYPASS_EN_LANE = 0;
	reg_DLL_VDDA_CAL_SINGLE_EN_LANE = 0;
	reg_EOM_DLL_GM_CAL_BYPASS_EN_LANE = 0;
	reg_EOM_DLL_GM_CAL_SINGLE_EN_LANE = 0;
	reg_EOM_DLL_VDDA_CAL_BYPASS_EN_LANE = 0;
	reg_EOM_DLL_VDDA_CAL_SINGLE_EN_LANE = 0;

	reg_DLL_TOP_START_LANE = 1;

	div2 = (reg_RX_SPEED_DIV_LANE_2_0&0x04)==0;
	//align90_cmp_offset_cal();
	//reg_ALIGN90_CMP_OFFSET_CAL_RESULT_EXT_LANE_3_0 = lnx_cal_align90_cmp_offset[PWR][gen_pll_rate_rx][div2];

	//rxalign90_cal();
	reg_ALIGN90_REF_LANE_5_0 = 0x1e;
	reg_ALIGN90_CAL_RESULT_LSB_EXT_LANE_5_0 = lnx_cal_align90_dac[PWR][gen_pll_rate_rx][div2];
	reg_ALIGN90_CAL_RESULT_MSB_EXT_LANE_2_0 = lnx_cal_align90_gm[PWR][gen_pll_rate_rx][div2];
	//reg_ALIGN90_DUMMY_CLK_LANE = lnx_cal_align90_dummy_clk[PWR][rx_pll_rate][div2];		
	reg_ALIGN90_CAL_DUMMY_CLK_EXT_LANE = lnx_cal_align90_dummy_clk[PWR][gen_pll_rate_rx][div2];		
	//reg_ALIGN90_SYN_CLK_LANE	= 1;
	//reg_ALIGN90_SYN_CLK_LANE	= 0;
	
	//reg_ALIGN90_CMP_OFFSET_CAL_BYPASS_EN_LANE = 0;
	//reg_ALIGN90_CMP_OFFSET_CAL_SINGLE_EN_LANE = 0;
	reg_ALIGN90_CAL_BYPASS_EN_LANE = 0;
	reg_ALIGN90_CAL_SINGLE_EN_LANE = 0;

	reg_ALIGN90_TOP_START_LANE = 1;

	//rxdcc_dll_cal();
	reg_RX_DLL_DCC_CAL_RESULT_EXT_LANE_5_0 = lnx_cal_rxdcc_dll[PWR + cmx_RXDCC_DLL_CAL_CONT_CUR_LOAD_EN][gen_pll_rate_rx];
	//rxdcc_dll_step_cnt = RXDCC_DLL_CAL_STEP_SIZE; //when speed change, restore the fraction code to middle
	reg_RXDCC_HG_DLLCLK_LANE = lnx_cal_rxdcc_dll_hg[gen_pll_rate_rx]; //load the HG setting. 
	//reg_RXDCC_DAC_SYNC_CLK_LANE = 1;
	//reg_TRXDCC_CAL_CLK100KHZ_LANE = 1;
	//reg_RXDCC_DAC_SYNC_CLK_LANE = 0;
	//reg_TRXDCC_CAL_CLK100KHZ_LANE = 0;

	gen = gen_rx;
	#ifdef _SATA_SERDES_BUILD
	if(phy_mode == SERDES) gen = 0;
	#endif

	//rxdcc_data_cal();
	reg_RX_CLK_DCC_CAL_RESULT_EXT_LANE_5_0 = lnx_cal_rxdcc_data[PWR + cmx_RXDCC_DATA_CAL_CONT_CUR_LOAD_EN][gen];
	//rxdcc_data_step_cnt = RXDCC_DATA_CAL_STEP_SIZE; //when speed change, restore the fraction code to middle
	reg_RXDCC_HG_DATACLK_LANE = lnx_cal_rxdcc_data_hg[gen]; //load the HG setting.
	//reg_RXDCC_DAC_SYNC_CLK_LANE = 1;
	//reg_TRXDCC_CAL_CLK100KHZ_LANE = 1;
	//reg_RXDCC_DAC_SYNC_CLK_LANE = 0;
	//reg_TRXDCC_CAL_CLK100KHZ_LANE = 0;

	//rxdcc_eom_cal();
	reg_RX_EOM_DCC_CAL_RESULT_EXT_LANE_5_0 = lnx_cal_rxdcc_eom[PWR + cmx_RXDCC_EOM_CAL_CONT_CUR_LOAD_EN][gen];
	//rxdcc_eom_step_cnt = RXDCC_EOM_CAL_STEP_SIZE; //when speed change, restore the fraction code to middle
	reg_RXDCC_HG_EOMCLK_LANE = lnx_cal_rxdcc_eom_hg[gen]; //load the HG setting.
	//reg_RXDCC_DAC_SYNC_CLK_LANE = 1;
	//reg_TRXDCC_CAL_CLK100KHZ_LANE = 1;
	//reg_RXDCC_DAC_SYNC_CLK_LANE = 0;
	//reg_TRXDCC_CAL_CLK100KHZ_LANE = 0;

	//txdcc_cal();
	reg_TX_DCC_CAL_RESULT_EXT_LANE_5_0 = lnx_cal_txdcc[PWR + cmx_TXDCC_CAL_CONT_CUR_LOAD_EN][gen_pll_rate_tx];
	//txdcc_step_cnt = TXDCC_CAL_STEP_SIZE; //when speed change, restore the fraction code to middle
	//reg_TRXDCC_CAL_CLK100KHZ_LANE = 1;
	//reg_TRXDCC_CAL_CLK100KHZ_LANE = 0;
	
	//txdcc_pdiv_cal();
	if (reg_TX_SPEED_DIV_LANE_2_0 != 0) {
		//reg_TXDCCCAL_PDIV_CNT_LANE_5_0 = lnx_cal_txdcc_pdiv[PWR + cmx_TXDCC_PDIV_CAL_CONT_CUR_LOAD_EN][tx_pll_rate];
		reg_TX_DCC_CAL_POST_DIV_RESULT_EXT_LANE_5_0 = lnx_cal_txdcc_pdiv[PWR + cmx_TXDCC_PDIV_CAL_CONT_CUR_LOAD_EN][gen_pll_rate_tx];
		//txdcc_pdiv_step_cnt = TXDCC_PDIV_CAL_STEP_SIZE; //when speed change, restore the fraction code to middle
		//reg_TRXDCC_CAL_CLK100KHZ_LANE = 1;
		//reg_TRXDCC_CAL_CLK100KHZ_LANE = 0;
	}

	// Set all bypass_en and single_en to 0 for each calibration
	reg_RX_DLL_DCC_CAL_BYPASS_EN_LANE = 0;
	reg_RX_DLL_DCC_CAL_SINGLE_EN_LANE = 0;
	reg_RX_CLK_DCC_CAL_BYPASS_EN_LANE = 0;
	reg_RX_CLK_DCC_CAL_SINGLE_EN_LANE = 0;
	reg_RX_EOM_DCC_CAL_BYPASS_EN_LANE = 0;
	reg_RX_EOM_DCC_CAL_SINGLE_EN_LANE = 0;
	if (reg_TX_SPEED_DIV_LANE_2_0 == 0) {
		reg_TX_DCC_CAL_BYPASS_EN_LANE = 0;
		reg_TX_DCC_CAL_SINGLE_EN_LANE = 0;
		reg_TX_DCC_CAL_POST_DIV_BYPASS_EN_LANE = 1;
	} else {
		reg_TX_DCC_CAL_BYPASS_EN_LANE = 1;
		reg_TX_DCC_CAL_POST_DIV_BYPASS_EN_LANE = 0;
		reg_TX_DCC_CAL_POST_DIV_SINGLE_EN_LANE = 0;
	}

	reg_DCC_TOP_START_LANE = 1;

	while (!reg_DLL_TOP_DONE_LANE);
	reg_DLL_TOP_START_LANE = 0;

	while (!reg_ALIGN90_TOP_DONE_LANE);
	reg_ALIGN90_TOP_START_LANE = 0;

	//delay01(5);
	while (!reg_DCC_TOP_DONE_LANE);
	reg_DCC_TOP_START_LANE = 0;

	LOAD_CAL_ON = 0;
}

void load_cal_data_dll_ram(void) BANKING_CTRL {
	uint8_t div2;
	uint8_t gen_pll_rate_rx;
	//if(force_exit_cal)return;
	
	LOAD_CAL_ON = 1;
	gen_pll_rate_rx = rx_pll_rate_x;

	//dll_cmp_offset_cal();
	//reg_DLL_CMP_OFFSET_CAL_RESULT_EXT_LANE_3_0 = lnx_cal_dll_cmp_offset[gen_pll_rate_rx];

	//dll_gm_cal();
	reg_DLL_GM_CAL_RESULT_EXT_LANE_2_0 = lnx_cal_dll_gmsel[gen_pll_rate_rx];

	//dll_vdda_cal(DLL_PHASE_STEP);
	reg_DLL_VDDA_CAL_RESULT_EXT_LANE_5_0 = lnx_cal_vdda_dll_sel[PWR + cmx_RXDLL_CAL_CONT_CUR_LOAD_EN][gen_pll_rate_rx];

	//dll_eom_gm_cal();
	reg_EOM_DLL_GM_CAL_RESULT_EXT_LANE_2_0 = lnx_cal_dll_eom_gmsel[gen_pll_rate_rx];

	//dll_eom_vdda_cal(DLL_PHASE_STEP);
	reg_EOM_DLL_VDDA_CAL_RESULT_EXT_LANE_5_0 = lnx_cal_vdda_dll_eom_sel[PWR + cmx_EOM_DLL_CAL_CONT_CUR_LOAD_EN][gen_pll_rate_rx];

	//reg_DLL_CMP_OFFSET_CAL_BYPASS_EN_LANE = 0;
	//reg_DLL_CMP_OFFSET_CAL_SINGLE_EN_LANE = 0;
	reg_DLL_GM_CAL_BYPASS_EN_LANE = 0;
	reg_DLL_GM_CAL_SINGLE_EN_LANE = 0;
	reg_DLL_VDDA_CAL_BYPASS_EN_LANE = 0;
	reg_DLL_VDDA_CAL_SINGLE_EN_LANE = 0;
	reg_EOM_DLL_GM_CAL_BYPASS_EN_LANE = 0;
	reg_EOM_DLL_GM_CAL_SINGLE_EN_LANE = 0;
	reg_EOM_DLL_VDDA_CAL_BYPASS_EN_LANE = 0;
	reg_EOM_DLL_VDDA_CAL_SINGLE_EN_LANE = 0;

	reg_DLL_TOP_START_LANE = 1;

	div2 = (reg_RX_SPEED_DIV_LANE_2_0&0x04)==0;
	//align90_cmp_offset_cal();
	//reg_ALIGN90_CMP_OFFSET_CAL_RESULT_EXT_LANE_3_0 = lnx_cal_align90_cmp_offset[PWR][gen_pll_rate_rx][div2];

	//rxalign90_cal();
	//reg_ALIGN90_DAC_LANE_5_0 = lnx_cal_align90_dac[PWR][rx_pll_rate][div2];
	reg_ALIGN90_CAL_RESULT_LSB_EXT_LANE_5_0 = lnx_cal_align90_dac[PWR][gen_pll_rate_rx][div2];
	//reg_ALIGN90_GM_LANE_2_0 = lnx_cal_align90_gm[PWR][rx_pll_rate][div2];
	reg_ALIGN90_CAL_RESULT_MSB_EXT_LANE_2_0 = lnx_cal_align90_gm[PWR][gen_pll_rate_rx][div2];
	//reg_ALIGN90_DUMMY_CLK_LANE = lnx_cal_align90_dummy_clk[PWR][rx_pll_rate][div2];
	reg_ALIGN90_CAL_DUMMY_CLK_EXT_LANE = lnx_cal_align90_dummy_clk[PWR][gen_pll_rate_rx][div2];	
	//reg_ALIGN90_SYN_CLK_LANE = 1;
	//reg_ALIGN90_SYN_CLK_LANE = 0;

	// Set all bypass_en and single_en to 0 for each calibration
	//reg_ALIGN90_CMP_OFFSET_CAL_BYPASS_EN_LANE = 0;
	//reg_ALIGN90_CMP_OFFSET_CAL_SINGLE_EN_LANE = 0;
	reg_ALIGN90_CAL_BYPASS_EN_LANE = 0;
	reg_ALIGN90_CAL_SINGLE_EN_LANE = 0;

	reg_ALIGN90_TOP_START_LANE = 1;

	while (!reg_DLL_TOP_DONE_LANE);
	reg_DLL_TOP_START_LANE = 0;

	//delay01(5);
	while (!reg_ALIGN90_TOP_DONE_LANE);
	reg_ALIGN90_TOP_START_LANE = 0;

	LOAD_CAL_ON = 0;
}

void ringpll_save_ram(uint8_t no) BANKING_CTRL {
	cmx_cal_pll_speed_ring[no][PLL_RATE_SEL_RING] = (reg_PLL_SPEED_RING_4_0 & 0x1f) | 0x00;
	cmx_cal_pll_sllp_dac_coarse_ring[no][PLL_RATE_SEL_RING] = (reg_PLL_SLLP_DAC_COARSE_RING_3_0 & 0x0f) | 0x00;
	cmx_cal_sllp_dac_fine_ring[no][PLL_RATE_SEL_RING] = ringpll_dac_fine;
}

void ringpll_load_ram(uint8_t no) BANKING_CTRL {
	reg_PLL_SPEED_RING_4_0 = cmx_cal_pll_speed_ring[no][PLL_RATE_SEL_RING];
	reg_PLL_SLLP_DAC_COARSE_RING_3_0 = cmx_cal_pll_sllp_dac_coarse_ring[no][PLL_RATE_SEL_RING];
	ringpll_dac_fine = cmx_cal_sllp_dac_fine_ring[no][PLL_RATE_SEL_RING];
	reg_PLL_SLLP_DAC_FINE_RING_10_8 = (uint8_t)(ringpll_dac_fine>>8);
	reg_PLL_SLLP_DAC_FINE_RING_7_0 = (uint8_t)ringpll_dac_fine;

}

void ringpll_dac_fine_output_ram(void) BANKING_CTRL {
	EA = 0;
	reg_PLL_SLLP_DAC_FINE_RING_10_8 = (uint8_t)(ringpll_dac_fine>>8);
	reg_PLL_SLLP_DAC_FINE_RING_7_0 = (uint8_t)ringpll_dac_fine;
	reg_PLL_SLLP_DAC_VALID_RING = 1; reg_PLL_SLLP_DAC_VALID_RING = 0;
	EA = 1;
}

#endif //SUPPORT_EXT_MEM
