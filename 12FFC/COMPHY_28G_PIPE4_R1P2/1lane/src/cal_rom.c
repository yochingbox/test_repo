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

void clear_normal_mode_cal_en(void) BANKING_CTRL {
	uint8_t val;
	
	//clear pending isr
	//if(reg_PIN_PAPTA_TRAIN_ENABLE_ISR_LANE && reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE) {
	//	reg_REMOTE_CTRL_FIELD_HIGH_LANE = 1; //tigger PIN_REMOTE_CTRL_FIELD_READY to 1.
	//	reg_REMOTE_CTRL_FIELD_HIGH_LANE = 0;		
	//	do_rx_apta = 1;
	//}
	 
	//PIN_RX_TRAIN_ENABLE_ISR/PIN_TX_TRAIN_ENABLE_ISR/REMOTE_STATUS_VALID_ISR_CLEAR_LANE/REMOTE_CTRL_VALID_ISR_CLEAR_LANE
	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.VAL = 0x00040303; 
	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.VAL = 0;	
	RX_LANE_INTERRUPT_REG1.BT.B3 = 0x60;
	RX_LANE_INTERRUPT_REG1.BT.B3 = 0;	
	reg_INT7_REMOTE_CTRL_VALID_INT_EN_LANE = 1; //HR: recover to 1 because int7 is nested with train abort and can be miss by mcu_reset in corner case. 
	reg_INT7_REMOTE_STATUS_VALID_INT_EN_LANE = 1;
	
	if(reg_PIN_PLL_READY_RX_LANE==0 || reg_PIN_PLL_READY_TX_LANE==0) {
//	#ifdef SUPPORT_APTA_TX_TRAIN
		TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B0 = 0x08; //APTA
		TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B0 = 0;
//	#endif
		// Have to clear *_TRAIN_COMP/FAILED! 
		//TX_TRAIN_CTRL_LANE.BT.B0 &= 0x02; //0000_0010
		//TX_TRAIN_CTRL_LANE.BT.B2 &= 0x1f; //0001_1111
		//TX_TRAIN_CTRL_LANE.BT.B3 &= 0xa0; //1010_0000
		TX_TRAIN_CTRL_LANE.VAL &= 0xa01f0002; 
	}	
	
	/*
	if(SPD_CTRL_INTERRUPT_REG1_LANE.BT.B3 != 0) {
		#ifdef 	_28G_X2
		if(reg_INT_PHY_GEN_RX_CHG_ISR_LANE) {
			SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0x40;
			SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0;
			reg_PIN_PLL_READY_RX_LANE = 0;
		}
		if(reg_INT_PHY_GEN_TX_CHG_ISR_LANE) {
			SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0x80;
			SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0;
			reg_PIN_PLL_READY_TX_LANE = 0;
		}
		#else
		SPD_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0;
		reg_PIN_PLL_READY_RX_LANE = 0;
		reg_PIN_PLL_READY_TX_LANE = 0;	
		#endif	
		PHY_STATUS = ST_SPDCHG;
	}
	*/
	if( phy_mode == PCIE) {
	if(reg_INT_POWER_STATE_VALID_RISE_ISR_LANE ) { //Need P0 to P2 time reduce for Lane Disable
		if( reg_PIN_PU_PLL_RD_LANE==0 || reg_PIN_PU_TX_RD_LANE==0 ) { 
				reg_PIN_PLL_READY_TX_LANE = 0;
				reg_PIN_PLL_READY_RX_LANE = 0;
				PHY_STATUS = ST_P2; 
		}		
		else if( reg_PIN_PU_RX_RD_LANE==0 ) {
				reg_PIN_PLL_READY_RX_LANE = 0;
				PHY_STATUS = ST_P1;
		}
		#ifdef _28G_X2
		PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0x13; // reg_INT_REFCLK_DIS_CHG_ISR_LANE, reg_INT_POWER_STATE_VALID_RISE_ISR_LANE, reg_INT_PU_PLL_OR_CHG_ISR_LANE
		PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0; 
		#else
		reg_INT_POWER_STATE_VALID_RISE_ISR_LANE = 0;	
		reg_INT_REFCLK_DIS_CHG_ISR_LANE = 0;
		#endif	
	}
	
	#ifdef _28G_X2
	if(reg_DPHY_ANA_LANE_DISABLE_ISR_LANE) {
		if( mcuid == MCU_LANE0) 
			cmx_LANE_DIS_LANE0_7_0 = reg_LANE_DISABLE_RD_LANE;
		else 	
			cmx_LANE_DIS_LANE1_7_0 = reg_LANE_DISABLE_RD_LANE;	

		PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B2 = 0x02; //reg_DPHY_ANA_LANE_DISABLE_ISR_CLEAR_LANE
		PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B2 = 0;

		if( cmx_LANE_DIS_LANE0_7_0 && cmx_LANE_DIS_LANE1_7_0) {
			reg_LANE_ALIGN_READY_OUT = 1; //control sequence to de-glitch
			reg_LANE_ALIGN_READY_OUT_FORCE = 1;
			reg_TXCLK_SYNC_START_OUT = 1;		
		}
	}	
	#endif
	
      }

/*
#ifdef _SATA_SERDES_BUILD	 
	if( PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 & 0xe0 ) {
	
           if(reg_PIN_PU_PLL_RD_LANE == 0){
				reg_PIN_PLL_READY_TX_LANE    = 0;
				reg_PIN_PLL_READY_RX_LANE    = 0;				
                PHY_STATUS = ST_SLUMBER;
            }
            else {
				if(reg_PIN_PU_TX_RD_LANE == 0) {
					reg_PIN_PLL_READY_TX_LANE    = 0;
					reg_ANA_PU_TX_LANE = 0;
				}
				else {
					reg_ANA_PU_TX_LANE = 1;
					reg_PIN_PLL_READY_TX_LANE    = 1;
				}
				
				if(reg_PIN_PU_RX_RD_LANE == 0 & cmx_FORCE_PARTIAL_PU_RX_ON==0){
					reg_PIN_PLL_READY_RX_LANE    = 0;
					PHY_STATUS = ST_PSLUMBER_RX;
				}
			}
			
			#ifdef _28G_X2
			PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0xe0;
			PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0;
			#else
			PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0;
			#endif	
	}
#endif
*/
	//PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0; //HR: Don't have to open! it makes to miss rx_init corner case
	//PM_CTRL_INTERRUPT_REG1_LANE.BT.B2 = 0;	??
	
	//if(reg_PHY_MCU_REMOTE_REQ_ISR_LANE) {	
	//	reg_PHY_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 1;
	//	reg_PHY_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 0;
	//}
	
	//if((PHY_STATUS != ST_APTA_TXTRAIN) || (PHY_STATUS == ST_APTA_TXTRAIN && reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE==0 )) 
	{		
		//if(PHY_MCU_REMOTE_REQ_LANE==0) 
		//	lnx_PHY_MCU_LOCAL_ACK_LANE = 0;
		//else {
 		if(PHY_MCU_REMOTE_REQ_LANE) {	
			lnx_PHY_LOCAL_STATUS_LANE_7_0 = 0x2; //NOT_VAILD
			lnx_PHY_MCU_LOCAL_ACK_LANE = 1;							
		}		
	}	
	
	//if(reg_MCU_REMOTE_REQ_ISR) {
	//	reg_MCU_REMOTE_REQ_ISR_CLEAR = 1;
	//	reg_MCU_REMOTE_REQ_ISR_CLEAR = 0;
	//
	//}
	//reg_MCU_LOCAL_ACK = 0;

	//reg_DFE_ADAPT_CONT_LANE = 0;
	//reg_DFE_START_LANE = 0;	
	
	// ----
	if(	cont_cal_on==0) return;
	cont_cal_on = 0;
	
//	#ifdef SUPPORT_CAL_SYNC_CLEAR_ALL
	//clear cal sync
	if(mcuid== master_mcu) {
		pll_temp_jump_idle();
		reg_PLL_CAL_EN_RING = 0;
		reg_LCPLL_DCC_CAL_EN = 0;
		reg_PLL_SLLP_DAC_VALID_RING = 0;
		reg_LCPLL_DCC_CLK = 0;
	}	
	reg_ALIGN90_SYN_CLK_LANE = 0;		
	reg_RXDCC_DAC_SYNC_CLK_LANE = 0;
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 0;
	reg_RXDCC_EN_DLLCLK_LANE = 0;
	reg_RXDCC_EN_DATACLK_LANE = 0;
	reg_RXDCC_EN_EOMCLK_LANE = 0;
	reg_RXDCC_HG_DLLCLK_LANE = 0;
	reg_RXDCC_HG_DATACLK_LANE = 0;
	reg_RXDCC_HG_EOMCLK_LANE = 0;
	reg_TRX_IMPCAL_CLK = 0;
	reg_RXDCC_CAL_EN_LANE = 0;
	reg_TXDCCCAL_EN_LANE = 0;
	reg_TXDCCCAL_PDIV_EN_LANE = 1;
	reg_TX_TDCAL_EN_LANE = 0;	
		
//	#else 		
/*		
	//clear cal sync
	#ifndef _PCIE_USB_BUILD
	if(mcuid== master_mcu) {
		pll_temp_jump_idle();
		reg_PLL_CAL_EN_RING = 0;
		reg_LCPLL_DCC_CAL_EN = 0;
		reg_PLL_SLLP_DAC_VALID_RING = 0;
		reg_LCPLL_DCC_CLK = 0;
	}	
	#endif
	reg_ALIGN90_SYN_CLK_LANE = 0;		
	reg_RXDCC_DAC_SYNC_CLK_LANE = 0;
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 0;
	reg_RXDCC_EN_DLLCLK_LANE = 0;
	reg_RXDCC_EN_DATACLK_LANE = 0;
	reg_RXDCC_EN_EOMCLK_LANE = 0;
	reg_RXDCC_HG_DLLCLK_LANE = 0;
	reg_RXDCC_HG_DATACLK_LANE = 0;
	reg_RXDCC_HG_EOMCLK_LANE = 0;
	reg_TRX_IMPCAL_CLK = 0;
	reg_RXDCC_CAL_EN_LANE = 0;
	reg_TXDCCCAL_EN_LANE = 0;
	reg_TXDCCCAL_PDIV_EN_LANE = 1;
	reg_TX_TDCAL_EN_LANE = 0;	
	
	#endif
*/
}




