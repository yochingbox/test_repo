/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file cal_load.c
* \purpose Calibration data load for 28G X4 R2P0 only
* \History
*	10/26/2017 Heejeong Ryu		separate file from shared 
*/

#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK4
#endif


void load_cal_data_all(void) BANKING_CTRL {
	uint8_t val, gen, div2, gm;
	uint8_t gen_pll_rate_rx, gen_pll_rate_tx;
	
	//if(force_exit_cal)return;

	LOAD_CAL_ON = 1;
	
	gen_pll_rate_rx = rx_pll_rate_x;
	gen_pll_rate_tx = tx_pll_rate_x;

#if _DBG_PLL==1
	Printf("\r\n++(load_cal) gen_pll_rate_rx=%d, PLL_RATE_SEL=%d",gen_pll_rate_rx, PLL_RATE_SEL);
#endif
	
	if(mcuid==master_mcu && slave_phy_on==0) {
		//plldcc_cal();
		#ifdef _28G_X4_R2P1
		if(reg_LCPLLCLK_DIV2_SEL==0) {
			reg_LCPLL_DCC_5_0 = 0x20;
		}
		else 
		#endif	
		{
			val = cmx_cal_plldcc[PWR + cmx_PLLDCC_CAL_CONT_CUR_LOAD_EN][PLL_RATE_SEL];
			plldcc_step_cnt = PLLDCC_CAL_STEP_SIZE;             //when speed change, restore the fracition code to middle
			reg_LCPLL_DCC_5_0 = val;
		}
		reg_LCPLL_DCC_CLK = 1;
		reg_TRX_IMPCAL_CLK = 1;
		reg_LCPLL_DCC_CLK = 0;
		reg_TRX_IMPCAL_CLK = 0;
	}
	
	//dll_gm_cal();
	reg_DLL_GMSEL_LANE_2_0 = lnx_calx_dll_gmsel[gen_pll_rate_rx];	

	//dll_vdda_cal(DLL_PHASE_STEP);
	val = lnx_calx_vdda_dll_sel[PWR + cmx_RXDLL_CAL_CONT_CUR_LOAD_EN][gen_pll_rate_rx];		
	set_sellv_rxdll_ch(val);		
	
	//dll_eom_gm_cal();
	reg_EOM_DLL_GMSEL_LANE_2_0 = lnx_calx_dll_eom_gmsel[gen_pll_rate_rx];
	
	//dll_eom_vdda_cal(DLL_PHASE_STEP);
	val = lnx_calx_vdda_dll_eom_sel[PWR + cmx_EOM_DLL_CAL_CONT_CUR_LOAD_EN][gen_pll_rate_rx];		
	set_sellv_rxeomdll_ch(val);		
	
	//rxalign90_cal();
	reg_ALIGN90_REF_LANE_5_0 = 0x1e;
	div2 = (reg_RX_SPEED_DIV_LANE_2_0&0x04)==0;
	reg_ALIGN90_DAC_LANE_5_0 = lnx_calx_align90_dac[PWR][gen_pll_rate_rx][div2];
	reg_ALIGN90_GM_LANE_2_0 = lnx_calx_align90_gm[PWR][gen_pll_rate_rx][div2];
	reg_ALIGN90_DUMMY_CLK_LANE = lnx_calx_align90_dummy_clk[PWR][gen_pll_rate_rx][div2];		
	reg_ALIGN90_SYN_CLK_LANE	= 1;
	reg_ALIGN90_SYN_CLK_LANE	= 0;
#if _DBG_PLL==1
	Printf("\r\n++(align90_load) rate=%d, div2=%d", gen_pll_rate_rx, div2 );
	Printf(" align90(%d, %d %d)", lnx_calx_align90_gm[PWR][gen_pll_rate_rx][div2], lnx_calx_align90_dac[PWR][gen_pll_rate_rx][div2], lnx_calx_align90_dummy_clk[PWR][gen_pll_rate_rx][div2]);
	Printf(" ana(%d-%d, %d %d)", reg_ALIGN90_REF_LANE_5_0, reg_ALIGN90_GM_LANE_2_0, reg_ALIGN90_DAC_LANE_5_0, reg_ALIGN90_DUMMY_CLK_LANE);
#endif
	
	//rxdcc_dll_cal();
    reg_RXDCC_DLLCLK_LANE_5_0 = lnx_calx_rxdcc_dll[PWR + cmx_RXDCC_DLL_CAL_CONT_CUR_LOAD_EN][gen_pll_rate_rx];  
    rxdcc_dll_step_cnt = RXDCC_DLL_CAL_STEP_SIZE;     //when speed change, restore the fracition code to middle
    reg_RXDCC_HG_DLLCLK_LANE = lnx_calx_rxdcc_dll_hg[gen_pll_rate_rx];          //load the HG setting. 
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
    reg_TXDCC_CNT_LANE_5_0 = lnx_calx_txdcc[PWR + cmx_TXDCC_CAL_CONT_CUR_LOAD_EN][gen_pll_rate_tx];  
    txdcc_step_cnt = TXDCC_CAL_STEP_SIZE;             //when speed change, restore the fracition code to middle
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 1;
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 0;
	
	//txdcc_pdiv_cal();
	if (reg_TX_SPEED_DIV_LANE_2_0 != 0) {
    reg_TXDCCCAL_PDIV_CNT_LANE_5_0 = lnx_calx_txdcc_pdiv[PWR + cmx_TXDCC_PDIV_CAL_CONT_CUR_LOAD_EN][gen_pll_rate_tx];  
    txdcc_pdiv_step_cnt = TXDCC_PDIV_CAL_STEP_SIZE;             //when speed change, restore the fracition code to middle	
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 1;
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 0;
	}
	
	LOAD_CAL_ON = 0;

}

void load_cal_data_dll(void) BANKING_CTRL {
	uint8_t val, div2, gm;
	uint8_t gen_pll_rate_rx, gen_pll_rate_tx;
	//if(force_exit_cal)return;
	
	LOAD_CAL_ON = 1;
	gen_pll_rate_rx = rx_pll_rate_x;
	//dll_gm_cal();
	reg_DLL_GMSEL_LANE_2_0 = lnx_calx_dll_gmsel[gen_pll_rate_rx];	

	//dll_vdda_cal(DLL_PHASE_STEP);
	val = lnx_calx_vdda_dll_sel[PWR + cmx_RXDLL_CAL_CONT_CUR_LOAD_EN][gen_pll_rate_rx];		
	set_sellv_rxdll_ch(val);		

	//dll_eom_gm_cal();
	reg_EOM_DLL_GMSEL_LANE_2_0 = lnx_calx_dll_eom_gmsel[gen_pll_rate_rx];

	//dll_eom_vdda_cal(DLL_PHASE_STEP);
	val = lnx_calx_vdda_dll_eom_sel[PWR + cmx_EOM_DLL_CAL_CONT_CUR_LOAD_EN][gen_pll_rate_rx];		
	set_sellv_rxeomdll_ch(val);		

	//rxalign90_cal();
	div2 = (reg_RX_SPEED_DIV_LANE_2_0&0x04)==0;
	reg_ALIGN90_DAC_LANE_5_0 = lnx_calx_align90_dac[PWR][gen_pll_rate_rx][div2];
	reg_ALIGN90_GM_LANE_2_0 = lnx_calx_align90_gm[PWR][gen_pll_rate_rx][div2];
	reg_ALIGN90_DUMMY_CLK_LANE = lnx_calx_align90_dummy_clk[PWR][gen_pll_rate_rx][div2];		
	reg_ALIGN90_SYN_CLK_LANE	= 1;
	reg_ALIGN90_SYN_CLK_LANE	= 0;	
	
	LOAD_CAL_ON = 0;
	
}

void all_cal_ext(void) BANKING_CTRL{
	BIT	lc_pll_rate, ring_pll_rate;

	if(phy_mode==SERDES) {
		loadspeedtbl_gen();	
		if(gen_pll_rate==pre_gen_pll_rate) return;	
	}

	if( mcuid==master_mcu ) {
		
		pll_clk_ready_0();			

		//reg_ANA_PROCESS_VALUE_3_0 = 0x08;
		reg_LCVCO_DAC_LSB_4_0 = 0x10;
		reg_LCVCO_DAC_MSB_2_0 = 0x02;
		//reg_LCCAP_LSB_4_0 = 0x10;
		reg_LCCAP_MSB_3_0 = 0;
		//reg_TEMPC_MUX_SEL_3_0 = 2; //gray code. bi=3
		//reg_TEMPC_MUX_HOLD_SEL_3_0 = 2;
		/*cmx_CAL_PLL_SPEED_RING_R1_7_0 = 0x10;
		cmx_CAL_PLL_SPEED_RING_R0_7_0 = 0x10;
		cmx_CAL_PLL_SLLP_DAC_COARSE_RING_R1_7_0 = 0x8;
		cmx_CAL_PLL_SLLP_DAC_COARSE_RING_R0_7_0 = 0x8;
		cmx_CAL_SLLP_DAC_FINE_RING_R1_15_0 = 0x384;
	    cmx_CAL_SLLP_DAC_FINE_RING_R0_15_0 = 0x384;*/

		if( phy_mode==SERDES ) {
			lc_pll_rate = 0; ring_pll_rate = 0;
			loadspeedtbl_pll(lc_pll_rate);
		}
		else {
		
			if( lc_pll_used ) {
				if(use_ring_pll) { lc_pll_rate = !tx_pll_rate; ring_pll_rate = tx_pll_rate; }				
				else {	lc_pll_rate = tx_pll_rate; ring_pll_rate = !tx_pll_rate; }			
				
				loadspeedtbl_pll(lc_pll_rate);
			}	
			else {	lc_pll_rate = !tx_pll_rate; ring_pll_rate = tx_pll_rate; }
		}			

		reg_RESET_ANA = 0;
		pll_clk_ready_1();
	}
	//Turn the debug info off temporally, to save code size for the new eom
	/*reg_MCU_DEBUG0_LANE_7_0 = 0x32;
	reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
	reg_MCU_DEBUG2_LANE_7_0 = gen_rx;
	reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
	reg_MCU_DEBUG4_LANE_7_0 = max_gen;
	reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
	reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
	reg_MCU_DEBUG7_LANE_7_0 = tx_pll_rate;
	reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;*/
	
	if( ring_lane_sel ) 	
	{
		if( phy_mode==SERDES ) 	{ ring_pll_rate = 0; }
		
		if(ring_pll_enabled) {
			pll_clk_ready_ring_0();
			loadspeedtbl_ringpll(ring_pll_rate);
			
			reg_PLL_SPEED_RING_4_0 = 0x10;
			reg_PLL_SLLP_DAC_COARSE_RING_3_0 = 0x8;
			reg_PLL_SLLP_DAC_FINE_RING_10_8 = 0x3;
			reg_PLL_SLLP_DAC_FINE_RING_7_0 = 0x84;
			reg_PLL_SLLP_DAC_RANGE_SHIFT_RING_1_0 = 0;

			reg_ANA_PU_PLL_RING = 1;
			delay01(5);
			reg_ANA_PU_PLL_DLY_RING = 1;
			delay01(5);
			reg_RESET_ANA_RING = 0;					
			pll_clk_ready_ring_1();
			ring_pll_enabled = 1;
		}	
		else reg_RING_PLL_DISABLE = 1;
	} 
	 
	check_pll_clk_ready();

	//reg_LCPLL_DCC_5_0 = 0x20;
	//set_sellv_rxdll_ch(0x10);
	//set_sellv_rxeomdll_ch(0x10);
	//set_vdd_cal(0,0x08); //SELLV_TXCLK
	//set_vdd_cal(1,0x08); //SELLV_TXDATA
	//set_vdd_cal(2,0x08); //SELLV_TXPRE
	//set_vdd_cal(3,0x08); //SELLV_RXEOMCLK
	//set_vdd_cal(4,0x08); //SELLV_RXDATACLK
	//set_vdd_cal(5,0x08); //SELLV_RXSAMPLER
	//reg_RXDCC_DLLCLK_LANE_5_0 = 0x20;
	//reg_RXDCC_DATACLK_LANE_5_0 = 0x20;
	//reg_RXDCC_EOMCLK_LANE_5_0 = 0x20;
	//reg_TXDCC_CNT_LANE_5_0 = 0x20;
	//reg_IMPCAL_RX_LANE_4_0 = 0x0c;
	//reg_TXIMP_TUNEN_LANE_3_0 = 0x08;
	//reg_TXIMP_TUNEN0_LANE_2_0 = 0;
	//reg_TXIMP_TUNEP_LANE_3_0 = 0x07;
	//reg_TXIMP_TUNEP0_LANE_2_0 = 0;	
	//DTL_DTX_DFE_clkoff_reset_0(); 

}
