/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file cal_top.c
* \purpose calibration rom call
* \History
*	10/13/2017 Heejeong Ryu		Initial 
*/
#include "common.h"

#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg BANK2
#endif

void load_cal_data_all(void) BANKING_CTRL {
	uint8_t val, gen, div2, gm;
		
	LOAD_CAL_ON = 1;

	if(mcuid==master_mcu && slave_phy_on==0) {
		//plldcc_cal();
		val = cmx_cal_plldcc[PWR + cmx_PLLDCC_CAL_CONT_CUR_LOAD_EN][PLL_RATE_SEL];
		plldcc_step_cnt = PLLDCC_CAL_STEP_SIZE;             //when speed change, restore the fracition code to middle
		reg_LCPLL_DCC_5_0 = val;
		reg_LCPLL_DCC_CLK = 1;
		reg_TRX_IMPCAL_CLK = 1;
		reg_LCPLL_DCC_CLK = 0;
		reg_TRX_IMPCAL_CLK = 0;
	}
	
	//dll_gm_cal();
	reg_DLL_GMSEL_LANE_2_0 = lnx_cal_dll_gmsel[rx_pll_rate];	

	//dll_vdda_cal(DLL_PHASE_STEP);
	val = lnx_cal_vdda_dll_sel[PWR + cmx_RXDLL_CAL_CONT_CUR_LOAD_EN][rx_pll_rate];		
	set_sellv_rxdll_ch(val);		
	
	//dll_eom_gm_cal();
	reg_EOM_DLL_GMSEL_LANE_2_0 = lnx_cal_dll_eom_gmsel[rx_pll_rate];
	
	//dll_eom_vdda_cal(DLL_PHASE_STEP);
	val = lnx_cal_vdda_dll_eom_sel[PWR + cmx_EOM_DLL_CAL_CONT_CUR_LOAD_EN][rx_pll_rate];		
	set_sellv_rxeomdll_ch(val);		
	
	//rxalign90_cal();
	reg_ALIGN90_REF_LANE_5_0 = 0x1e;
	div2 = (reg_RX_SPEED_DIV_LANE_2_0&0x04)==0;
	reg_ALIGN90_DAC_LANE_5_0 = lnx_cal_align90_dac[PWR][rx_pll_rate][div2];
	reg_ALIGN90_GM_LANE_2_0 = lnx_cal_align90_gm[PWR][rx_pll_rate][div2];
	reg_ALIGN90_DUMMY_CLK_LANE = lnx_cal_align90_dummy_clk[PWR][rx_pll_rate][div2];		
	reg_ALIGN90_SYN_CLK_LANE	= 1;
	reg_ALIGN90_SYN_CLK_LANE	= 0;
	
	//rxdcc_dll_cal();
    reg_RXDCC_DLLCLK_LANE_5_0 = lnx_cal_rxdcc_dll[PWR + cmx_RXDCC_DLL_CAL_CONT_CUR_LOAD_EN][rx_pll_rate];  
    rxdcc_dll_step_cnt = RXDCC_DLL_CAL_STEP_SIZE;     //when speed change, restore the fracition code to middle
    reg_RXDCC_HG_DLLCLK_LANE = lnx_cal_rxdcc_dll_hg[rx_pll_rate];          //load the HG setting. 
	reg_RXDCC_DAC_SYNC_CLK_LANE = 1;
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 1;
	reg_RXDCC_DAC_SYNC_CLK_LANE = 0;
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 0;

	gen = gen_rx;
	if(phy_mode == SERDES) gen = 0;

	//rxdcc_data_cal();
	reg_RXDCC_DATACLK_LANE_5_0 = lnx_cal_rxdcc_data[PWR + cmx_RXDCC_DATA_CAL_CONT_CUR_LOAD_EN][gen];
	rxdcc_data_step_cnt = RXDCC_DATA_CAL_STEP_SIZE;     //when speed change, restore the fracition code to middle
	reg_RXDCC_HG_DATACLK_LANE = lnx_cal_rxdcc_data_hg[gen];          //load the HG setting.
	reg_RXDCC_DAC_SYNC_CLK_LANE = 1;
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 1;
	reg_RXDCC_DAC_SYNC_CLK_LANE = 0;
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 0;

	//rxdcc_eom_cal();
	reg_RXDCC_EOMCLK_LANE_5_0 = lnx_cal_rxdcc_eom[PWR + cmx_RXDCC_EOM_CAL_CONT_CUR_LOAD_EN][gen];
	rxdcc_eom_step_cnt = RXDCC_EOM_CAL_STEP_SIZE;     //when speed change, restore the fracition code to middle
	reg_RXDCC_HG_EOMCLK_LANE = lnx_cal_rxdcc_eom_hg[gen];          //load the HG setting.
	reg_RXDCC_DAC_SYNC_CLK_LANE = 1;
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 1;
	reg_RXDCC_DAC_SYNC_CLK_LANE = 0;
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 0;

	//txdcc_cal();
    reg_TXDCC_CNT_LANE_5_0 = lnx_cal_txdcc[PWR + cmx_TXDCC_CAL_CONT_CUR_LOAD_EN][tx_pll_rate];  
    txdcc_step_cnt = TXDCC_CAL_STEP_SIZE;             //when speed change, restore the fracition code to middle
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 1;
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 0;
	
	//txdcc_pdiv_cal();
	if (reg_TX_SPEED_DIV_LANE_2_0 != 0) {
    reg_TXDCCCAL_PDIV_CNT_LANE_5_0 = lnx_cal_txdcc_pdiv[PWR + cmx_TXDCC_PDIV_CAL_CONT_CUR_LOAD_EN][tx_pll_rate];  
    txdcc_pdiv_step_cnt = TXDCC_PDIV_CAL_STEP_SIZE;             //when speed change, restore the fracition code to middle	
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 1;
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 0;
	}
	
	LOAD_CAL_ON = 0;
	
}

void load_cal_data_dll(void) BANKING_CTRL{
	uint8_t val, div2, gm;
	//if(force_exit_cal)return;
	
	LOAD_CAL_ON = 1;
	//dll_gm_cal();
	reg_DLL_GMSEL_LANE_2_0 = lnx_cal_dll_gmsel[rx_pll_rate];	

	//dll_vdda_cal(DLL_PHASE_STEP);
	val = lnx_cal_vdda_dll_sel[PWR + cmx_RXDLL_CAL_CONT_CUR_LOAD_EN][rx_pll_rate];		
	set_sellv_rxdll_ch(val);		

	//dll_eom_gm_cal();
	reg_EOM_DLL_GMSEL_LANE_2_0 = lnx_cal_dll_eom_gmsel[rx_pll_rate];

	//dll_eom_vdda_cal(DLL_PHASE_STEP);
	val = lnx_cal_vdda_dll_eom_sel[PWR + cmx_EOM_DLL_CAL_CONT_CUR_LOAD_EN][rx_pll_rate];		
	set_sellv_rxeomdll_ch(val);		

	//rxalign90_cal();
	div2 = (reg_RX_SPEED_DIV_LANE_2_0&0x04)==0;
	reg_ALIGN90_DAC_LANE_5_0 = lnx_cal_align90_dac[PWR][rx_pll_rate][div2];
	reg_ALIGN90_GM_LANE_2_0 = lnx_cal_align90_gm[PWR][rx_pll_rate][div2];
	reg_ALIGN90_DUMMY_CLK_LANE = lnx_cal_align90_dummy_clk[PWR][rx_pll_rate][div2];		
	reg_ALIGN90_SYN_CLK_LANE	= 1;
	reg_ALIGN90_SYN_CLK_LANE	= 0;

	LOAD_CAL_ON = 0;
	
}

void ringpll_save(uint8_t no) BANKING_CTRL {
	cmx_cal_pll_speed_ring[no][PLL_RATE_SEL_RING] = (reg_PLL_SPEED_RING_4_0 & 0x1f) | 0x00;
	cmx_cal_pll_sllp_dac_coarse_ring[no][PLL_RATE_SEL_RING] = (reg_PLL_SLLP_DAC_COARSE_RING_3_0 & 0x0f) | 0x00;
	cmx_cal_sllp_dac_fine_ring[no][PLL_RATE_SEL_RING] = ringpll_dac_fine;
}

void ringpll_load(uint8_t no) BANKING_CTRL {
	reg_PLL_SPEED_RING_4_0 = cmx_cal_pll_speed_ring[no][PLL_RATE_SEL_RING];
	reg_PLL_SLLP_DAC_COARSE_RING_3_0 = cmx_cal_pll_sllp_dac_coarse_ring[no][PLL_RATE_SEL_RING];
	ringpll_dac_fine = cmx_cal_sllp_dac_fine_ring[no][PLL_RATE_SEL_RING]; 
	reg_PLL_SLLP_DAC_FINE_RING_10_8 = (uint8_t)(ringpll_dac_fine>>8); 
	reg_PLL_SLLP_DAC_FINE_RING_7_0 = (uint8_t)ringpll_dac_fine;  	
	
}

void ringpll_dac_fine_output(void) BANKING_CTRL {
	EA = 0;
	reg_PLL_SLLP_DAC_FINE_RING_10_8 = (uint8_t)(ringpll_dac_fine>>8); 
	reg_PLL_SLLP_DAC_FINE_RING_7_0 = (uint8_t)ringpll_dac_fine;  	
    reg_PLL_SLLP_DAC_VALID_RING = 1;  reg_PLL_SLLP_DAC_VALID_RING = 0;	
	EA = 1;
}

