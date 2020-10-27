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
	BIT	lc_pll_rate, ring_pll_rate;
  SPD_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0x0;

  new_gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_3_0; new_gen_tx = min(new_gen_tx, cmx_PHY_GEN_MAX_3_0);
  new_gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_3_0; new_gen_rx = min(new_gen_rx, cmx_PHY_GEN_MAX_3_0);
  
  if(new_gen_tx != gen_tx || new_gen_rx != gen_rx || reg_PWRON_SEQ ){

	reg_PIN_PLL_READY_RX_LANE = 0;
	reg_PIN_PLL_READY_TX_LANE = 0;
	
    gen_tx = new_gen_tx;
    gen_rx = new_gen_rx;   	
	//no need anymore. rx/tx separated.
    //gen_pll = max(gen_tx, gen_rx);
	//if(max_gen == 0 || gen_pll > max_gen) { gen_tx=0; gen_rx=0; gen_pll=0; }
	//debug
	//reg_MCU_DEBUG0_LANE_7_0 = 0x34;
	//reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
	//reg_MCU_DEBUG2_LANE_7_0 = gen_rx;
	//reg_MCU_DEBUG4_LANE_7_0 = max_gen;
	//reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
	//reg_MCU_DEBUG6_LANE_7_0 = tx_pll_rate;
	//reg_MCU_DEBUG7_LANE_7_0 = gen_pll_rate;

	if(((!ring_pll_enabled || !lc_pll_used) || reg_PWRON_SEQ)  && !no_pllspdchg && !force_exit_cal) { 
		if(mcuid==master_mcu) {	
			pll_clk_ready_all_0();
			
		}
		else { 
			while(reg_ANA_PLL_CLK_READY_PRE0==1 || reg_ANA_PLL_CLK_READY_RING==1);
		}
	}

	DTL_DTX_DFE_clkoff_reset_1();
	
	loadspeedtbl_gen();

	if( mcuid==master_mcu ) {
		if( reg_PWRON_SEQ && !no_pllspdchg && !force_exit_cal) {
			
			if(!ring_pll_enabled ) loadspeedtbl_pll(tx_pll_rate);
#ifndef _56G_R1P1
			if(!lc_pll_used ) loadspeedtbl_ringpll(tx_pll_rate);
#endif
			if( lc_pll_used ) {
#ifndef _56G_R1P1
				if(use_ring_pll) {PLL_RATE_SEL_RING = tx_pll_rate; PLL_RATE_SEL = !tx_pll_rate; }

				else
#endif
				{ PLL_RATE_SEL = tx_pll_rate; PLL_RATE_SEL_RING = !tx_pll_rate; }
			}
			else { //lc never used for PCIe
				PLL_RATE_SEL_RING = tx_pll_rate; PLL_RATE_SEL = 1; //TODO  
			}
			
			///*if(lc_pll_used)*/ spdchg_pll_fast_cal();		
#ifndef _56G_R1P1
			if(ring_pll_enabled) ring_pll_fast_cal();
#endif
		}
		else {
		
			if(!ring_pll_enabled && !no_pllspdchg ) { 				
					loadspeedtbl_pll(tx_pll_rate);
					spdchg_pll_fast_cal();				
			}

#ifndef _56G_R1P1
			if( !lc_pll_used ) { 
					loadspeedtbl_ringpll(tx_pll_rate);
					ring_pll_fast_cal();
			}
#endif
		}
	}
	else
		check_pll_clk_ready();
	
		load_cal_data_all();

  }
  
 	if( !ring_pll_enabled || !lc_pll_used || ((phy_mode!=PCIE && reg_PWRON_SEQ==1) || phy_mode==PCIE ) ){
		txlane_align();
	}            
	
  DTL_DTX_DFE_clkoff_reset_0();
	
  eom_align_cal();
  lnx_EOM_EOMEDG_FINE_CAL_PASS_LANE = lnx_EOM_EOMDAT_CAL_PASS_LANE;
  
  reg_PWRON_SEQ = 0;
  
  delay(T_10us);

  reg_RST_FRAME_SYNC_DET_CLK_LANE = 1;
  delay(Tus);
  reg_RST_FRAME_SYNC_DET_CLK_LANE = 0;
  
  reg_PIN_PLL_READY_RX_LANE = 1;
  reg_PIN_PLL_READY_TX_LANE = 1;
	
  PHY_STATUS = ST_PLLREADY;
  
}

void loadspeedtbl_pll(uint8_t rate) {
	uint16_t temp;
	uint8_t fbck, rate_no;

    if(BYPASS_SPDTBL_LOAD)	return;
    
	fbck = fbck_sel;

	if(phy_mode==SERDES) rate = gen_pll_rate;

	rate_no									= lc_speedtable[fbck][rate][spdoft_pll_rate_sel];				
	if(rate_no>1 || phy_mode==SERDES) rate_no = 0;
	PLL_RATE_SEL = rate_no;

	reg_PLL_REG_SEL_2_0						= lc_speedtable[fbck][rate][spdoft_pll_reg_sel];
	reg_FBDIV_7_0 							= lc_speedtable[fbck][rate][spdoft_fbdiv];
	reg_FBDIV_9_8							= lc_speedtable[fbck][rate][spdoft_fbdiv+1];
	reg_REFDIV_3_0 							= lc_speedtable[fbck][rate][spdoft_refdiv];
	reg_VIND_BAND_SEL 						= lc_speedtable[fbck][rate][spdoft_vind_band_sel];
	if(reg_RING_REF_DIV_SEL==1) {  
		reg_DIV_1G_7_0 						= lc_speedtable[fbck][rate][spdoft_div_1g_fbck];
		reg_DIV_1G_9_8 						= lc_speedtable[fbck][rate][spdoft_div_1g_fbck+1];
	}
	else {
		reg_DIV_1G_7_0 						= lc_speedtable[fbck][rate][spdoft_div_1g];
		reg_DIV_1G_9_8 						= lc_speedtable[fbck][rate][spdoft_div_1g+1];
	}	
	reg_ICP_LC_4_0							= lc_speedtable[fbck][rate][spdoft_icp_lc];
	reg_PLL_LPFR_1_0						= lc_speedtable[fbck][rate][spdoft_pll_lpfr];
	reg_PLL_LPFC_1_0						= lc_speedtable[fbck][rate][spdoft_pll_lpfc];
	reg_INIT_TXFOFFS_9_0_b0					= lc_speedtable[fbck][rate][spdoft_init_txfoffs]; 
	reg_INIT_TXFOFFS_9_0_b1					= lc_speedtable[fbck][rate][spdoft_init_txfoffs+1];
	temp									= (uint16_t)lc_speedtable[fbck][rate][spdoft_speed_thresh+1]; temp<<=8;
	temp									+= (uint16_t)lc_speedtable[fbck][rate][spdoft_speed_thresh];		
	temp <<= FBC_RATIO;
	cmx_SPEED_THRESH_15_0 = temp;
	
	reg_SSC_ACC_FACTOR						= lc_speedtable[fbck][rate][spdoft_ssc_acc_factor];
	reg_LCCAP_USB							= lc_speedtable[fbck][rate][spdoft_lccap_usb];
	#ifdef _56G_R1P1
	reg_SSC_STEP_125PPM_3_0 				= lc_speedtable[fbck][rate][spdoft_ssc_step_125ppm]; 	
	#else
	reg_SSC_STEP_10_0_b0					= lc_speedtable[fbck][rate][spdoft_ssc_step]; 
	reg_SSC_STEP_10_0_b1					= lc_speedtable[fbck][rate][spdoft_ssc_step+1];
	#endif
	reg_SSC_M_12_0_b0						= lc_speedtable[fbck][rate][spdoft_ssc_m];
	reg_SSC_M_12_0_b1						= lc_speedtable[fbck][rate][spdoft_ssc_m+1];

}

#ifndef _56G_R1P1
void loadspeedtbl_ringpll(uint8_t rate) {
	uint16_t temp;
	uint8_t fbck, ck1g, rate_no;
	
    if(BYPASS_SPDTBL_LOAD)	return;
	
	fbck = fbck_sel_ring;
	//reg_MCU_DEBUG0_LANE_7_0 = 0x89;
	//reg_MCU_DEBUG5_LANE_7_0 = fbck;
	//reg_MCU_DEBUG6_LANE_7_0 = fbck_sel_ring;
	//reg_MCU_DEBUG7_LANE_7_0 = ring_use_250m;
	
	ck1g = ring_use_250m;

	if(phy_mode==SERDES) rate = gen_pll_rate;
	
	rate_no									= ring_speedtable[ck1g][fbck][rate][spdoft_pll_rate_sel_ring];					
	if(rate_no>1 || phy_mode==SERDES) rate_no = 0;
	PLL_RATE_SEL_RING = rate_no;
	if(reg_RING_REF_DIV_SEL==1) {  
		reg_PLL_FBDIV_RING_7_0 				= ring_speedtable[ck1g][fbck][rate][spdoft_pll_fbdiv_ring_fbck];
		reg_PLL_FBDIV_RING_9_8				= ring_speedtable[ck1g][fbck][rate][spdoft_pll_fbdiv_ring_fbck+1];
		reg_INIT_TXFOFFS_RING_9_0_b0        = ring_speedtable[ck1g][fbck][rate][spdoft_init_txfoffs_ring_fbck];   
		reg_INIT_TXFOFFS_RING_9_0_b1        = ring_speedtable[ck1g][fbck][rate][spdoft_init_txfoffs_ring_fbck+1];   					
	}
	else {
		reg_PLL_FBDIV_RING_7_0 				= ring_speedtable[ck1g][fbck][rate][spdoft_pll_fbdiv_ring];
		reg_PLL_FBDIV_RING_9_8				= ring_speedtable[ck1g][fbck][rate][spdoft_pll_fbdiv_ring+1];
		reg_INIT_TXFOFFS_RING_9_0_b0        = ring_speedtable[ck1g][fbck][rate][spdoft_init_txfoffs_ring];   
		reg_INIT_TXFOFFS_RING_9_0_b1        = ring_speedtable[ck1g][fbck][rate][spdoft_init_txfoffs_ring+1];   					
	}	
	reg_ICP_RING_3_0               			= ring_speedtable[ck1g][fbck][rate][spdoft_icp_ring];
	reg_INTPI_RING_3_0 					    = ring_speedtable[ck1g][fbck][rate][spdoft_intpi_ring]; 	
	reg_TX_INTPR_RING_1_0        		    = ring_speedtable[ck1g][fbck][rate][spdoft_tx_intpr_ring];  
	reg_PLL_BAND_SEL_RING   				= ring_speedtable[ck1g][fbck][rate][spdoft_pll_band_sel_ring];   
	reg_PLL_LPF_C1_SEL_RING_1_0             = ring_speedtable[ck1g][fbck][rate][spdoft_pll_lpf_c1_sel_ring]; 
	reg_PLL_LPF_C2_SEL_RING_1_0             = ring_speedtable[ck1g][fbck][rate][spdoft_pll_lpf_c2_sel_ring]; 
	reg_PLL_LPF_R1_SEL_RING_2_0             = ring_speedtable[ck1g][fbck][rate][spdoft_pll_lpf_r1_sel_ring]; 
	temp			= (uint16_t)ring_speedtable[ck1g][fbck][rate][spdoft_pll_speed_thresh_ring+1]; temp<<=8;
	temp			+= (uint16_t)ring_speedtable[ck1g][fbck][rate][spdoft_pll_speed_thresh_ring];
	temp <<= FBC_RATIO;
	cmx_PLL_SPEED_THRESH_RING_15_0 = temp;

	#ifdef _56G_R1P1
	reg_SSC_STEP_125PPM_RING_3_0 			= ring_speedtable[ck1g][fbck][rate][spdoft_ssc_step_125ppm_ring]; 
	#else
	reg_SSC_STEP_RING_10_0_b0				= ring_speedtable[ck1g][fbck][rate][spdoft_ssc_step_ring]; 
	reg_SSC_STEP_RING_10_0_b1				= ring_speedtable[ck1g][fbck][rate][spdoft_ssc_step_ring+1];
	#endif
	reg_SSC_M_RING_12_0_b0					= ring_speedtable[ck1g][fbck][rate][spdoft_ssc_m_ring];
	reg_SSC_M_RING_12_0_b1					= ring_speedtable[ck1g][fbck][rate][spdoft_ssc_m_ring+1];
	
}
#endif

uint8_t get_gen_memory_index(uint8_t gen) {
    //grp0 0,1,2,4,13	
	//grp1 0,1,4,7
	uint8_t serdes_gen_tb0[] = { 0, 1, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0};
	uint8_t serdes_gen_tb1[] = { 0, 1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	if(cmx_ETHERNET_CFG_1_0==1 || cmx_ETHERNET_CFG_1_0==2) return serdes_gen_tb0[gen];
	else if(cmx_ETHERNET_CFG_1_0==3) return	serdes_gen_tb1[gen];
	else return 0;	
}

void loadspeedtbl_gen(void) {
	uint16_t temp;
	uint8_t gen;
	
	if(BYPASS_SPDTBL_LOAD)	return;
	
	gen = gen_tx;
	if(phy_mode==SERDES) 
		gen = get_gen_memory_index(gen);
	
	gen_pll_rate = speedtable[gen][spdoft_pll_rate_sel_tx];
	if(gen_pll_rate>1 || phy_mode==SERDES) tx_pll_rate = 0;
	else tx_pll_rate = gen_pll_rate;

	/*reg_MCU_DEBUG0_LANE_7_0 = 0x33;
	reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
	reg_MCU_DEBUG2_LANE_7_0 = gen;
	reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
	reg_MCU_DEBUG4_LANE_7_0 = max_gen;
	reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
	reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
	reg_MCU_DEBUG7_LANE_7_0 = tx_pll_rate;*/
	
	use_ring_pll 							= speedtable[gen][spdoft_tx_ck_sel_lane]; 
	reg_TX_CK_SEL_LANE = use_ring_pll;
	
	reg_TX_SPEED_DIV_LANE_2_0		 		= speedtable[gen][spdoft_tx_speeddiv_lane];
	reg_TX_REG_SPEED_TRK_CLK_LANE_2_0	 	= speedtable[gen][spdoft_txreg_speedtrk_clk_lane];
	reg_TX_REG_SPEED_TRK_DATA_LANE_2_0 	 	= speedtable[gen][spdoft_txreg_speedtrk_data_lane];
#ifndef _56G_R1P0
	reg_TX_EM_CTRL_REG_EN_LANE				= speedtable[gen][spdoft_tx_em_ctrl_reg_en_lane];
	reg_TX_EM_CTRL_PIPE_SEL_LANE			= speedtable[gen][spdoft_tx_em_ctrl_pipe_sel_lane];
#endif
	reg_SLEWRATE_EN_LANE_1_0				= speedtable[gen][spdoft_slewrate_en_lane];
	reg_SLEWCTRL1_LANE_1_0					= speedtable[gen][spdoft_slewctrl1_lane];
	reg_SLEWCTRL0_LANE_1_0					= speedtable[gen][spdoft_slewctrl0_lane];
	
	reg_TX_PAM2_EN_LANE						= speedtable[gen][spdoft_tx_pam2_en_lane];
	
	reg_TRAIN_PAT_NUM_LANE_8_0_b0			= speedtable[gen][spdoft_train_pat_num_lane];
	reg_TRAIN_PAT_NUM_LANE_8_0_b1			= speedtable[gen][spdoft_train_pat_num_lane+1];
	reg_TX_TRAIN_PAT_TOGGLE_LANE			= speedtable[gen][spdoft_tx_train_pat_toggle_lane];
	reg_TX_TRAIN_PAT_SEL_LANE_1_0			= speedtable[gen][spdoft_tx_train_pat_sel_lane];

	reg_ETHERNET_MODE_LANE_1_0				= speedtable[gen][spdoft_ethernet_mode_lane];
	reg_TX_TRAIN_PAT_MODE_LANE  			= speedtable[gen][spdoft_tx_train_pat_mode_lane];
	
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
	
	//gen = gen_rx;
	
	rx_pll_rate	 							= speedtable[gen][spdoft_pll_rate_sel_rx]; 
	if(rx_pll_rate>1 || phy_mode==SERDES) rx_pll_rate = 0;	
	reg_RX_CK_SEL_LANE 						= speedtable[gen][spdoft_rx_ck_sel_lane];  
	reg_RX_SPEED_DIV_LANE_2_0		  		= speedtable[gen][spdoft_rx_speed_div_lane];
	reg_DTL_CLK_SPEEDUP_LANE_2_0  			= speedtable[gen][spdoft_dtl_clk_speedup_lane];
	reg_INTPI_LANE_3_0			  			= speedtable[gen][spdoft_intpi_lane];
	reg_INTPR_LANE_1_0				  		= speedtable[gen][spdoft_intpr_lane];
	reg_DLL_FREQ_SEL_LANE_1_0	  			= speedtable[gen][spdoft_dll_freq_sel_lane];
	reg_EOM_DLL_FREQ_SEL_LANE_1_0  			= speedtable[gen][spdoft_eom_dll_freq_sel_lane];
	reg_RX_REG0P9_SPEED_TRACK_CLK_LANE_2_0	= speedtable[gen][spdoft_rxreg_speedtrk_clk_lane];
	reg_RX_REG0P9_SPEED_TRACK_CLK_HALF_LANE	= speedtable[gen][spdoft_rxreg_speedtrk_clk_half_lane];
	reg_RX_REG0P9_SPEED_TRACK_DATA_LANE_2_0	= speedtable[gen][spdoft_rxreg_speedtrk_data_lane];
	reg_RX_SELMUFI_LANE_2_0 				= speedtable[gen][spdoft_selmufi_lane];
	reg_RX_SELMUFF_LANE_2_0 				= speedtable[gen][spdoft_selmuff_lane];
	reg_REG_SELMUPI_LANE_3_0 				= speedtable[gen][spdoft_selmupi_lane];
	reg_REG_SELMUPF_LANE_3_0 				= speedtable[gen][spdoft_selmupf_lane];
	reg_DTL_CLK_MODE_LANE_1_0 				= speedtable[gen][spdoft_dtl_clk_mode_lane];
	reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b0 	= speedtable[gen][spdoft_rx_foffset_extra_m_lane];
	reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b1 	= speedtable[gen][spdoft_rx_foffset_extra_m_lane+1];
	reg_INIT_RXFOFFS_LANE_9_0_b0			= speedtable[gen][spdoft_init_rxfoffs_lane];
	reg_INIT_RXFOFFS_LANE_9_0_b1			= speedtable[gen][spdoft_init_rxfoffs_lane+1];
#ifndef _56G_R1P0
	reg_PU_F1P_D_E_LANE						= speedtable[gen][spdoft_pu_f1p_d_e_lane];
	reg_PU_F1N_D_E_LANE	                    = speedtable[gen][spdoft_pu_f1n_d_e_lane];
	reg_PU_F1P_S_E_LANE	                    = speedtable[gen][spdoft_pu_f1p_s_e_lane];
	reg_PU_F1N_S_E_LANE	                    = speedtable[gen][spdoft_pu_f1n_s_e_lane];
	reg_PU_F1P_D_O_LANE	                    = speedtable[gen][spdoft_pu_f1p_d_o];
	reg_PU_F1N_D_O_LANE                     = speedtable[gen][spdoft_pu_f1n_d_o];
	reg_PU_F1P_S_O_LANE                     = speedtable[gen][spdoft_pu_f1p_s_o];	
	reg_PU_F1N_S_O_LANE                     = speedtable[gen][spdoft_pu_f1n_s_o];	
	reg_ANA_RX_DFE_F1_POL_EN_D_LANE			= speedtable[gen][spdoft_dfe_f1_pol_en_d];				
	reg_ANA_RX_DFE_F1_POL_EN_S_LANE         = speedtable[gen][spdoft_dfe_f1_pol_en_s];
	reg_ANA_RX_DFE_F1_POL_D_LANE            = speedtable[gen][spdoft_dfe_f1_pol_d]; 
	reg_ANA_RX_DFE_F1_POL_S_LANE            = speedtable[gen][spdoft_dfe_f1_pol_s];  	
	reg_ANA_RX_DFE_F1_POL_EN_D_FORCE_LANE	= speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_en_d_force];
	reg_ANA_RX_DFE_F1_POL_EN_S_FORCE_LANE   = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_en_s_force];
	reg_ANA_RX_DFE_F1_POL_D_FORCE_LANE      = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_d_force];   
	reg_ANA_RX_DFE_F1_POL_S_FORCE_LANE      = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_s_force];   
	reg_FFE_DATA_RATE_LANE_3_0  			= speedtable[gen][spdoft_ffe_data_rate_lane];
#endif
	reg_PATH_DISABLE_EDGE_LANE              = speedtable[gen][spdoft_path_disable_edge_lane];
	reg_DFE_FULL_RATE_MODE_LANE             = speedtable[gen][spdoft_reg_dfe_full_rate_mode_lane];    	
	dfe_dis									= speedtable[gen][spdoft_reg_dfe_dis_lane];
	reg_DFE_TAP_SETTLE_SCALE_LANE_1_0       = speedtable[gen][spdoft_reg_dfe_tap_settle_scale_lane];
	
	reg_RX_PAM2_EN_LANE                     = speedtable[gen][spdoft_rx_pam2_en_lane];
	reg_DFE_PAM2_MODE_LANE					= speedtable[gen][spdoft_dfe_pam2_mode_lane];

	reg_CTLE_BYPASS1_EN_LANE				= speedtable[gen][spdoft_ctle_bypass1_en];
	reg_CTLE_BYPASS2_EN_LANE				= speedtable[gen][spdoft_ctle_bypass2_en];
	reg_CTLE_CURRENT1_SEL_LANE_3_0			= speedtable[gen][spdoft_ctle_current1_sel];
	reg_CTLE_CURRENT2_SEL_LANE_3_0			= speedtable[gen][spdoft_ctle_current2_sel];
	reg_CTLE_RL1_SEL_LANE_3_0				= speedtable[gen][spdoft_ctle_rl1_sel];
	reg_CTLE_RL2_SEL_LANE_3_0				= speedtable[gen][spdoft_ctle_rl2_sel];
	reg_CTLE_RES1_SEL_LANE_3_0				= speedtable[gen][spdoft_ctle_res1_sel];
	reg_CTLE_RES2_SEL_LANE_3_0				= speedtable[gen][spdoft_ctle_res2_sel];
	reg_CTLE_CAP1_SEL_LANE_3_0				= speedtable[gen][spdoft_ctle_cap1_sel];
	reg_CTLE_CAP2_SEL_LANE_3_0				= speedtable[gen][spdoft_ctle_cap2_sel];

	reg_DFE_EN_LANE = dfe_dis==0;  reg_DFE_DIS_LANE = dfe_dis;
	rxdll_temp_a_lane = speedtable[gen][spdoft_rxdll_temp_a_lane];
	rxdll_temp_b_lane = speedtable[gen][spdoft_rxdll_temp_b_lane];
}

void loadSpeedtbl(void) {	
	
	loadspeedtbl_gen();
		
	if( mcuid== master_mcu ) {
		master_sync_request();		

#ifndef _56G_R1P1
		if(use_ring_pll) {
			if( tx_pll_rate != PLL_RATE_SEL_RING )
				loadspeedtbl_ringpll(tx_pll_rate);
		}	
		else
#endif
		{
			if( tx_pll_rate != PLL_RATE_SEL )
				//loadspeedtbl_pll(tx_pll_rate);
				loadspeedtbl_pll(gen_pll_rate);
		}
		 	
		master_sync_clean();		
	} else { slave_sync_wait(); }
}

void loadSpdtbl_4_fcnt(void) {

	uint8_t fbck, rate;
	fbck = 0;
	//rate = PLL_RATE_SEL;
	rate = gen_pll_rate;

	reg_FBDIV_7_0 						= lc_speedtable[fbck][rate][spdoft_fbdiv_cal];
	reg_FBDIV_9_8 						= lc_speedtable[fbck][rate][spdoft_fbdiv_cal+1];
	reg_ANA_FBCK_SEL = 0;

}

#ifndef _56G_R1P1
void ringloadSpdtbl_4_fcnt(void) {
	uint8_t fbck, ck1g, rate;
	
	fbck = 0;
	ck1g = ring_use_250m;
	rate = PLL_RATE_SEL_RING;

	reg_PLL_FBDIV_RING_7_0 				= ring_speedtable[ck1g][fbck][rate][spdoft_fbdiv_cal_ring];
	reg_PLL_FBDIV_RING_9_8 				= ring_speedtable[ck1g][fbck][rate][spdoft_fbdiv_cal_ring+1];
	reg_ANA_FBCK_SEL_RING = 0;

}
#endif

