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
#include "spdtbl.h"
#include "spdtbl_ring.h"

inline static void DTL_DTX_DFE_clkoff_reset_1(void) {

	reg_DFE_ADAPT_CONT_LANE = 0;
	reg_DFE_START_LANE = 0;

	reg_DTL_CLK_OFF_LANE= 1; 
	if(!ring_pll_enabled) reg_DTX_CLK_OFF = 1;
	reg_DFE_CLK_OFF_LANE = 1; 
	reg_RESET_DTL_LANE = 1;	
	if(!ring_pll_enabled) reg_RESET_DTX	= 1; 
	CKCON = 0x07 ;  //MCU WAIT time the slowest
	reg_RESET_DFE_LANE = 1;
	CKCON = 0x00 ; //MCU WAIT time setting back to normal.

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
void SpeedChange(){

//reg_MCU_DEBUG0_LANE_7_0 = 0x77;

  SPD_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0x0;

  new_gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_3_0; new_gen_tx = min(new_gen_tx, max_gen);
  new_gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_3_0; new_gen_rx = min(new_gen_rx, max_gen);
  
  if(new_gen_tx != gen_tx || new_gen_rx != gen_rx || reg_PWRON_SEQ ){

	reg_PIN_PLL_READY_RX_LANE = 0;
	reg_PIN_PLL_READY_TX_LANE = 0;
	
    gen_tx = new_gen_tx;
    gen_rx = new_gen_rx;   	
    gen_pll = max(gen_tx, gen_rx);
	if(max_gen == 0 || gen_pll > max_gen) { gen_tx=0; gen_rx=0; gen_pll=0; }
	//debug
	//reg_MCU_DEBUG0_LANE_7_0 = 0x34;
	//reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
	//reg_MCU_DEBUG2_LANE_7_0 = gen_rx;
	//reg_MCU_DEBUG3_LANE_7_0 = gen_pll;
	//reg_MCU_DEBUG4_LANE_7_0 = max_gen;
 
	if(pcie_usb_mode) { 
		if( gen_tx == 0 || gen_tx == 1) {
			reg_TX_SEL_BITS_LANE = 0; reg_RX_SEL_BITS_LANE = 0;			
		}
		else {
			reg_TX_SEL_BITS_LANE = 1; reg_RX_SEL_BITS_LANE = 1;			
		}
	}

	//added for 16ffc 	
	if( phy_mode <= SAS && gen_tx==4) {
			reg_TX_TRAIN_PAT_SEL_LANE_1_0 = 3;
			reg_TRAIN_PAT_NUM_LANE_8_0_b0 = 0x69; reg_TRAIN_PAT_NUM_LANE_8_0_b1 = 0x01; //e9 
			reg_TX_TRAIN_PAT_TOGGLE_LANE = 0;
			reg_PACKET_SYNC_DIS_LANE = 0;
			reg_SYNC_DET_DIS_LANE = 1;
	} 
	else if( phy_mode == SERDES && reg_PIN_PHY_GEN_TX_RD_LANE_3_0==6) {
			reg_TX_TRAIN_PAT_SEL_LANE_1_0 = 2;
			reg_TRAIN_PAT_NUM_LANE_8_0_b0 = 0x08; reg_TRAIN_PAT_NUM_LANE_8_0_b1 = 0x01; //88
			reg_TX_TRAIN_PAT_TOGGLE_LANE = 0;
			reg_PACKET_SYNC_DIS_LANE = 1;
			reg_SYNC_DET_DIS_LANE = 0;		
	}
	else if( phy_mode == SERDES && reg_PIN_PHY_GEN_TX_RD_LANE_3_0==4) {
			reg_TX_TRAIN_PAT_SEL_LANE_1_0 = 1;
			reg_TRAIN_PAT_NUM_LANE_8_0_b0 = 0x08; reg_TRAIN_PAT_NUM_LANE_8_0_b1 = 0x01; 
			reg_TX_TRAIN_PAT_TOGGLE_LANE = 0;
			reg_PACKET_SYNC_DIS_LANE = 1;
			reg_SYNC_DET_DIS_LANE = 0;		
	}
	else {
			reg_TX_TRAIN_PAT_SEL_LANE_1_0 = 0;
			reg_TRAIN_PAT_NUM_LANE_8_0_b0 = 0x42; reg_TRAIN_PAT_NUM_LANE_8_0_b1 = 0x00; 
			reg_TX_TRAIN_PAT_TOGGLE_LANE = 1;
			reg_PACKET_SYNC_DIS_LANE = 1;
			reg_SYNC_DET_DIS_LANE = 0;		
	}

	if(	!ring_pll_enabled ) { 
		if(mcuid==MCU_LANE0) {
			pcie_master_sync_request();	
			
			pll_clk_ready_all_0();
			
			pcie_master_sync_clean();		
		}
		else { slave_sync_wait(); }
	}

    DTL_DTX_DFE_clkoff_reset_1();
	
	if( phy_mode==SERDES || phy_mode==USB ) pll_rate = 0;
	else pll_rate = speedtable[gen_pll][spdoft_pll_rate_sel];
	
	if(	!ring_pll_enabled ) { 
		loadSpeedtbl();

		if(mcuid==MCU_LANE0) {
			pcie_master_sync_request();		
			
			spdchg_pll_fast_cal();
			
			pcie_master_sync_clean();		
		}
		else { slave_sync_wait(); }
	}
	else {	
		// moved to speed table
		/*if(pll_rate == 1 && phy_mode != SERDES ) {
			reg_TX_CK_SEL_LANE = 1; reg_RX_CK_SEL_LANE = 1; //Ring
		}		
		else {
			reg_TX_CK_SEL_LANE = 0;	reg_RX_CK_SEL_LANE = 0; //LC
		}*/

		loadspeedtbl_tx(gen_tx);
		loadspeedtbl_rx(gen_rx);
	}
	
	if(	!ring_pll_enabled ) { 
		if(mcuid==MCU_LANE0) {
			pcie_master_sync_request();		
			
			pll_clk_ready_1();
			
			pcie_master_sync_clean();		
		}
		else { slave_sync_wait(); }
	}
  }
  
  if(reg_PWRON_SEQ) DTL_DTX_DFE_clkoff_reset_0();
  else {
    reg_DTL_CLK_OFF_LANE= 0; 
	if(!ring_pll_enabled ) reg_DTX_CLK_OFF = 0;
	reg_DFE_CLK_OFF_LANE = 0; 
	delay(Tus);
	reg_RESET_DTL_LANE = 0;	
	if(!ring_pll_enabled ) reg_RESET_DTX = 0; 
	reg_RESET_DFE_LANE = 0;
  }
  
	load_cal_data();
	
	if( !ring_pll_enabled || ((phy_mode!=PCIE && reg_PWRON_SEQ==1) || phy_mode==PCIE ) ){
		txlane_align();
	}
  
  reg_PWRON_SEQ = 0;
  
  if(cmx_EOM_ALIGN_CAL_EN)	eom_align_cal();
  
  delay(T_10us);

  reg_RST_FRAME_SYNC_DET_CLK_LANE = 1;
  delay(Tus);
  reg_RST_FRAME_SYNC_DET_CLK_LANE = 0;
  
  reg_PIN_PLL_READY_RX_LANE = 1;
  reg_PIN_PLL_READY_TX_LANE = 1;
	
  PHY_STATUS = ST_PLLREADY;
  
}

void loadspeedtbl_pll(uint8_t gen) {
	uint16_t temp;
	
	gen_pll = gen;
	
    if(BYPASS_SPDTBL_LOAD)	return;
	
	PLL_RATE_SEL	= speedtable[gen][spdoft_pll_rate_sel];		
	
	//reg_MCU_DEBUG_CMN_2_7_0 = reg_RING_REF_DIV_SEL; 
	//reg_MCU_DEBUG_CMN_5_7_0 = 77;
	
	if( mcuid==MCU_LANE0 ) {
		master_sync_request();		
		
		//-- cmn_func	
		if( fbck_sel==0 ) { //use PI0
		    // -- LC pll
			reg_PLL_REG_SEL_2_0						= speedtable[gen][spdoft_pll_reg_sel];
			reg_FBDIV_7_0 							= speedtable[gen][spdoft_fbdiv+1];
			reg_FBDIV_9_8							= speedtable[gen][spdoft_fbdiv];
			reg_REFDIV_3_0 							= speedtable[gen][spdoft_refdiv];
			reg_VIND_BAND_SEL 						= speedtable[gen][spdoft_vind_band_sel];
			if(reg_RING_REF_DIV_SEL==1) {  
				reg_DIV_1G_7_0 						= speedtable[gen][spdoft_div_1g_fbck+1];
				reg_DIV_1G_9_8 						= speedtable[gen][spdoft_div_1g_fbck];
			}
			else {
				reg_DIV_1G_7_0 						= speedtable[gen][spdoft_div_1g+1];
				reg_DIV_1G_9_8 						= speedtable[gen][spdoft_div_1g];
			}	
			reg_ICP_3_0								= speedtable[gen][spdoft_icp];
			reg_PLL_LPFR_1_0						= speedtable[gen][spdoft_pll_lpfr];
			reg_PLL_LPFC_1_0						= speedtable[gen][spdoft_pll_lpfc];
			reg_INIT_TXFOFFS_9_0_b0					= speedtable[gen][spdoft_init_txfoffs+1]; 
			reg_INIT_TXFOFFS_9_0_b1					= speedtable[gen][spdoft_init_txfoffs];
			temp			= (uint16_t)speedtable[gen][spdoft_speed_thresh]; temp<<=8;
			temp			+= (uint16_t)speedtable[gen][spdoft_speed_thresh+1];
		}
		else { //use PI1
			reg_PLL_REG_SEL_2_0						= speedtable[gen][spdoft_pll_reg_sel_1];
			reg_FBDIV_7_0 							= speedtable[gen][spdoft_fbdiv_1+1];
			reg_FBDIV_9_8							= speedtable[gen][spdoft_fbdiv_1];
			reg_REFDIV_3_0 							= speedtable[gen][spdoft_refdiv_1];
			reg_VIND_BAND_SEL 						= speedtable[gen][spdoft_vind_band_sel_1];
			if(reg_RING_REF_DIV_SEL==1) {  
				reg_DIV_1G_7_0 						= speedtable[gen][spdoft_div_1g_fbck_1+1];
				reg_DIV_1G_9_8 						= speedtable[gen][spdoft_div_1g_fbck_1]; 	
			}
			else {
				reg_DIV_1G_7_0 						= speedtable[gen][spdoft_div_1g_1+1];
				reg_DIV_1G_9_8 						= speedtable[gen][spdoft_div_1g_1];    
			}	
			reg_ICP_3_0								= speedtable[gen][spdoft_icp_1];
			reg_PLL_LPFR_1_0						= speedtable[gen][spdoft_pll_lpfr_1];
			reg_PLL_LPFC_1_0						= speedtable[gen][spdoft_pll_lpfc_1];
			reg_INIT_TXFOFFS_9_0_b0					= speedtable[gen][spdoft_init_txfoffs_1+1]; 
			reg_INIT_TXFOFFS_9_0_b1					= speedtable[gen][spdoft_init_txfoffs_1];
			temp			= (uint16_t)speedtable[gen][spdoft_speed_thresh_1]; temp<<=8;
			temp			+= (uint16_t)speedtable[gen][spdoft_speed_thresh_1+1];
		}
		temp <<= FBC_RATIO;
		cmx_SPEED_THRESH_15_0 = temp;
		
		//dtx
		
			reg_SSC_STEP_10_0_b0					= speedtable[gen][spdoft_ssc_step+1]; 
			reg_SSC_STEP_10_0_b1					= speedtable[gen][spdoft_ssc_step];
			reg_SSC_M_12_0_b0						= speedtable[gen][spdoft_ssc_m+1];
			reg_SSC_M_12_0_b1						= speedtable[gen][spdoft_ssc_m];

		master_sync_clean();		
	}
	else { slave_sync_wait(); }
	
}
	
void loadspeedtbl_ringpll(uint8_t gen) {
	uint16_t temp;
	gen_pll = gen;
	
    if(BYPASS_SPDTBL_LOAD)	return;
	
	PLL_RATE_SEL_RING	= ring_speedtable[gen][spdoft_pll_rate_sel_ring];	
	
	if( mcuid==MCU_LANE0 ) {
		master_sync_request();		
		// -- ring pll
		//if( ring_pll_enabled ) 
		{
			if(fbck_sel_ring==0) { //use PI0
			
				reg_PLL_REFDIV_RING_3_0					= ring_speedtable[gen][spdoft_pll_refdiv_ring];
				if(reg_RING_REF_DIV_SEL==1) {  
					reg_PLL_FBDIV_RING_7_0 				= ring_speedtable[gen][spdoft_pll_fbdiv_ring_fbck+1];
					reg_PLL_FBDIV_RING_9_8				= ring_speedtable[gen][spdoft_pll_fbdiv_ring_fbck];
					reg_INIT_TXFOFFS_RING_9_0_b0            = ring_speedtable[gen][spdoft_init_txfoffs_ring_fbck+1];   
					reg_INIT_TXFOFFS_RING_9_0_b1            = ring_speedtable[gen][spdoft_init_txfoffs_ring_fbck];   					
				}
				else {
					reg_PLL_FBDIV_RING_7_0 				= ring_speedtable[gen][spdoft_pll_fbdiv_ring+1];
					reg_PLL_FBDIV_RING_9_8				= ring_speedtable[gen][spdoft_pll_fbdiv_ring];
					reg_INIT_TXFOFFS_RING_9_0_b0            = ring_speedtable[gen][spdoft_init_txfoffs_ring+1];   
					reg_INIT_TXFOFFS_RING_9_0_b1            = ring_speedtable[gen][spdoft_init_txfoffs_ring];   					
				}	
				reg_ICP_RING_3_0               			= ring_speedtable[gen][spdoft_icp_ring];
				reg_INTPI_RING_3_0 					    = ring_speedtable[gen][spdoft_intpi_ring_1]; 	
				reg_TX_INTPR_RING_1_0        		    = ring_speedtable[gen][spdoft_tx_intpr_ring];  
				reg_PLL_BAND_SEL_RING   				= ring_speedtable[gen][spdoft_pll_band_sel_ring];   
				reg_PLL_LPF_C1_SEL_RING_1_0             = ring_speedtable[gen][spdoft_pll_lpf_c1_sel_ring]; 
				reg_PLL_LPF_C2_SEL_RING_1_0             = ring_speedtable[gen][spdoft_pll_lpf_c2_sel_ring]; 
				reg_PLL_LPF_R1_SEL_RING_2_0             = ring_speedtable[gen][spdoft_pll_lpf_r1_sel_ring]; 
				temp			= (uint16_t)ring_speedtable[gen][spdoft_pll_speed_thresh_ring]; temp<<=8;
				temp			+= (uint16_t)ring_speedtable[gen][spdoft_pll_speed_thresh_ring+1];
			}
			else { //use PI1
				reg_PLL_REFDIV_RING_3_0					= ring_speedtable[gen][spdoft_pll_refdiv_ring_1];
				if(reg_RING_REF_DIV_SEL==1) {  
					reg_PLL_FBDIV_RING_7_0 				= ring_speedtable[gen][spdoft_pll_fbdiv_ring_fbck_1+1];
					reg_PLL_FBDIV_RING_9_8				= ring_speedtable[gen][spdoft_pll_fbdiv_ring_fbck_1];
					reg_INIT_TXFOFFS_RING_9_0_b0            = ring_speedtable[gen][spdoft_init_txfoffs_ring_fbck_1+1];   
					reg_INIT_TXFOFFS_RING_9_0_b1            = ring_speedtable[gen][spdoft_init_txfoffs_ring_fbck_1];   					
				}
				else {

					reg_PLL_FBDIV_RING_7_0 				= ring_speedtable[gen][spdoft_pll_fbdiv_ring_1+1];
					reg_PLL_FBDIV_RING_9_8				= ring_speedtable[gen][spdoft_pll_fbdiv_ring_1];
					reg_INIT_TXFOFFS_RING_9_0_b0        = ring_speedtable[gen][spdoft_init_txfoffs_ring_1+1];   
					reg_INIT_TXFOFFS_RING_9_0_b1        = ring_speedtable[gen][spdoft_init_txfoffs_ring_1];   			
				}	
				reg_ICP_RING_3_0               			= ring_speedtable[gen][spdoft_icp_ring_1];
				reg_INTPI_RING_3_0 					    = ring_speedtable[gen][spdoft_intpi_ring_1]; 	
				reg_TX_INTPR_RING_1_0        		    = ring_speedtable[gen][spdoft_tx_intpr_ring_1];  
				reg_PLL_BAND_SEL_RING   				= ring_speedtable[gen][spdoft_pll_band_sel_ring_1];   
				reg_PLL_LPF_C1_SEL_RING_1_0             = ring_speedtable[gen][spdoft_pll_lpf_c1_sel_ring_1]; 
				reg_PLL_LPF_C2_SEL_RING_1_0             = ring_speedtable[gen][spdoft_pll_lpf_c2_sel_ring_1]; 
				reg_PLL_LPF_R1_SEL_RING_2_0             = ring_speedtable[gen][spdoft_pll_lpf_r1_sel_ring_1]; 
				temp			= (uint16_t)ring_speedtable[gen][spdoft_pll_speed_thresh_ring_1]; temp<<=8;
				temp			+= (uint16_t)ring_speedtable[gen][spdoft_pll_speed_thresh_ring_1+1];
			}
			temp <<= FBC_RATIO;
			cmx_PLL_SPEED_THRESH_RING_15_0 = temp;
		}
		
		//dtx			
			reg_SSC_STEP_RING_10_0_b0					= speedtable[gen][spdoft_ssc_step+1]; 
			reg_SSC_STEP_RING_10_0_b1					= speedtable[gen][spdoft_ssc_step];
			reg_SSC_M_RING_12_0_b0						= speedtable[gen][spdoft_ssc_m+1];
			reg_SSC_M_RING_12_0_b1						= speedtable[gen][spdoft_ssc_m];

		// --
		master_sync_clean();		
	}
	else { slave_sync_wait(); }

}

void loadspeedtbl_tx(uint8_t gen) {
	uint16_t temp;
	if(BYPASS_SPDTBL_LOAD)	return;
	
	use_ring_pll = speedtable[gen][spdoft_tx_use_ring_pll];
	reg_TX_CK_SEL_LANE = use_ring_pll;		
	
	if(cmx_CAL_DONE)
		reg_TX_SPEED_DIV_LANE_2_0	 				= speedtable[gen][spdoft_tx_speeddiv];    
	else 	reg_TX_SPEED_DIV_LANE_2_0 = 0;
	reg_TX_REG_SPEED_TRK_CLK_LANE_2_0	 	= speedtable[gen][spdoft_tx_reg_speed_trk_clk];  
	reg_TX_REG_SPEED_TRK_DATA_LANE_2_0 	 	= speedtable[gen][spdoft_tx_reg_speed_trk_data];
	// DTX releated, move to pll
	//reg_SSC_STEP_10_0_b0					= speedtable[gen][spdoft_ssc_step+1];  
	//reg_SSC_STEP_10_0_b1					= speedtable[gen][spdoft_ssc_step];
	//reg_SSC_M_12_0_b0						= speedtable[gen][spdoft_ssc_m+1];
	//reg_SSC_M_12_0_b1						= speedtable[gen][spdoft_ssc_m];
	reg_TX_EM_CTRL_REG_EN_LANE				= speedtable[gen][spdoft_tx_em_ctrl_reg_en_lane];
	reg_TX_EM_CTRL_PIPE_SEL_LANE			= speedtable[gen][spdoft_tx_em_ctrl_pipe_sel_lane];
	reg_SLEWRATE_EN_LANE_1_0				= speedtable[gen][spdoft_slewrate_en];
	reg_SLEWCTRL1_LANE_1_0					= speedtable[gen][spdoft_slewctrl1];
	reg_SLEWCTRL0_LANE_1_0					= speedtable[gen][spdoft_slewctrl0];
}

void loadspeedtbl_rx(uint8_t gen) {
	if(BYPASS_SPDTBL_LOAD)	return;
	
	reg_RX_CK_SEL_LANE = speedtable[gen][spdoft_rx_use_ring_pll];

	if(cmx_CAL_DONE) 
		reg_RX_SPEED_DIV_LANE_2_0		  		= speedtable[gen][spdoft_rx_speed_div]; 
	else  reg_RX_SPEED_DIV_LANE_2_0	 = 0;	
	reg_DTL_CLK_SPEEDUP_LANE_2_0  			= speedtable[gen][spdoft_dtl_clk_speedup]; 
	reg_INTPI_LANE_3_0			  			= speedtable[gen][spdoft_intpi]; 
	reg_INTPR_LANE_1_0				  			= speedtable[gen][spdoft_intpr];
	reg_DLL_FREQ_SEL_LANE_1_0	  			= speedtable[gen][spdoft_dll_freq_sel];
	reg_RX_REG0P9_SPEED_TRACK_CLK_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_clk];
	reg_RX_REG0P9_SPEED_TRACK_CLK_HALF_LANE	= speedtable[gen][spdoft_rx_reg0p9_speed_track_clk_half];
	reg_RX_REG0P9_SPEED_TRACK_DATA_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_data];
	reg_RX_SELMUFI_LANE_2_0 				= speedtable[gen][spdoft_selmufi];
	reg_RX_SELMUFF_LANE_2_0 				= speedtable[gen][spdoft_selmuff];
	reg_REG_SELMUPI_LANE_3_0 				= speedtable[gen][spdoft_selmupi];
	reg_REG_SELMUPF_LANE_3_0 				= speedtable[gen][spdoft_selmupf];
	reg_DTL_CLK_MODE_LANE_1_0 				= speedtable[gen][spdoft_dtl_clk_mode];
	reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b0 	= speedtable[gen][spdoft_rx_foffset_extra_m+1];
	reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b1 	= speedtable[gen][spdoft_rx_foffset_extra_m];	
	reg_INIT_RXFOFFS_LANE_9_0_b0			= speedtable[gen][spdoft_init_rxfoffs+1];	
	reg_INIT_RXFOFFS_LANE_9_0_b1			= speedtable[gen][spdoft_init_rxfoffs];	
	reg_PU_F1P_D_E_LANE						= speedtable[gen][spdoft_pu_f1p_d_e];
	reg_PU_F1N_D_E_LANE	                    = speedtable[gen][spdoft_pu_f1n_d_e];
	reg_PU_F1P_S_E_LANE	                    = speedtable[gen][spdoft_pu_f1p_s_e];
	reg_PU_F1N_S_E_LANE	                    = speedtable[gen][spdoft_pu_f1n_s_e];
	reg_PU_F1P_D_O_LANE	                    = speedtable[gen][spdoft_pu_f1p_d_o];
	reg_PU_F1N_D_O_LANE                     = speedtable[gen][spdoft_pu_f1n_d_o];
	reg_PU_F1P_S_O_LANE                     = speedtable[gen][spdoft_pu_f1p_s_o];	
	reg_PU_F1N_S_O_LANE                     = speedtable[gen][spdoft_pu_f1n_s_o];	
	reg_PATH_DISABLE_EDGE_LANE              = speedtable[gen][spdoft_path_disable_edge];	
	reg_ANA_RX_DFE_F1_POL_EN_D_LANE			= speedtable[gen][spdoft_dfe_f1_pol_en_d];				
	reg_ANA_RX_DFE_F1_POL_EN_S_LANE         = speedtable[gen][spdoft_dfe_f1_pol_en_s];
	reg_ANA_RX_DFE_F1_POL_D_LANE            = speedtable[gen][spdoft_dfe_f1_pol_d]; 
	reg_ANA_RX_DFE_F1_POL_S_LANE            = speedtable[gen][spdoft_dfe_f1_pol_s];  	
	reg_ANA_RX_DFE_F1_POL_EN_D_FORCE_LANE	= speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_en_d_force];
	reg_ANA_RX_DFE_F1_POL_EN_S_FORCE_LANE   = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_en_s_force];
	reg_ANA_RX_DFE_F1_POL_D_FORCE_LANE      = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_d_force];   
	reg_ANA_RX_DFE_F1_POL_S_FORCE_LANE      = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_s_force];   
	reg_DFE_FULL_RATE_MODE_LANE             = speedtable[gen][spdoft_reg_dfe_full_rate_mode_lane];    	
	dfe_dis									= speedtable[gen][spdoft_reg_dfe_dis_lane];
	reg_FFE_DATA_RATE_LANE_3_0  			= speedtable[gen][spdoft_ffe_data_rate_lane];
	reg_DFE_TAP_SETTLE_SCALE_LANE_1_0       = speedtable[gen][spdoft_reg_dfe_tap_settle_scale];          

}

void loadSpeedtbl(void) {
	
	if(max_gen == 0 || gen_pll > max_gen) { gen_tx=0; gen_rx=0; gen_pll=0; }

	loadspeedtbl_pll(gen_pll);
	loadspeedtbl_tx(gen_tx);
	loadspeedtbl_rx(gen_rx);
}

void loadSpdtbl_4_fcnt(void) {

	reg_FBDIV_7_0 						= speedtable[gen_pll][spdoft_fbdiv_cal+1];
	reg_FBDIV_9_8 						= speedtable[gen_pll][spdoft_fbdiv_cal];
	reg_ANA_FBCK_SEL = 0;

}

void ringloadSpdtbl_4_fcnt(void) {

	reg_PLL_FBDIV_RING_7_0 				= ring_speedtable[gen_pll][spdoft_fbdiv_cal_ring+1];
	reg_PLL_FBDIV_RING_9_8 				= ring_speedtable[gen_pll][spdoft_fbdiv_cal_ring];
	reg_ANA_FBCK_SEL_RING = 0;

}
#ifdef SUPPORT_CHECK_SPDTBL_LOAD
void check_speed_table_load(void) {
   uint8_t i,j;					
reg_MCU_DEBUG0_LANE_7_0 = 0x11;
   for(i=0, j=0; ;) {					
	reg_MCU_DEBUG3_LANE_7_0 = speedtable[j][i];				
	reg_MCU_DEBUG2_LANE_7_0 = i;				
	reg_MCU_DEBUG4_LANE_7_0 = j;				
	if(i==(lc_size-1)) {j++; i=0;}				
	else i++;				
	if(j>max_gen) break;				
   }					
reg_MCU_DEBUG0_LANE_7_0 = 0x22;
   
}
#endif //SUPPORT_CHECK_SPDTBL_LOAD

