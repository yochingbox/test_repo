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

inline static void DTL_DTX_DFE_clkoff_reset_1(void) {

	reg_DTL_CLK_OFF_LANE= 1; 
	if(!ring_pll_enabled && !no_pllspdchg) reg_DTX_CLK_OFF = 1;
	reg_DFE_CLK_OFF_LANE = 1; 
	reg_RESET_DTL_LANE = 1;	
	if(!ring_pll_enabled && !no_pllspdchg) reg_RESET_DTX	= 1; 
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
	uint8_t ring_pll, lc_pll;

  ring_pll = 0; lc_pll = 0;	
  SPD_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0x0;

  new_gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_3_0; new_gen_tx = min(new_gen_tx, max_gen);
  new_gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_3_0; new_gen_rx = min(new_gen_rx, max_gen);
  
  if(new_gen_tx != gen_tx || new_gen_rx != gen_rx || reg_PWRON_SEQ  ){

	reg_PIN_PLL_READY_RX_LANE = 0;
	reg_PIN_PLL_READY_TX_LANE = 0;
	
    gen_tx = new_gen_tx;
    gen_rx = new_gen_rx;   	
	//no need anymore. rx/tx separated.
    //gen_pll = max(gen_tx, gen_rx);
	//if(max_gen == 0 || gen_pll > max_gen) { gen_tx=0; gen_rx=0; gen_pll=0; }
	if(pcie_usb_mode) { 
		if( gen_tx == 0 || gen_tx == 1) {
			reg_TX_SEL_BITS_LANE = 0; reg_RX_SEL_BITS_LANE = 0;			
		}
		else {
			reg_TX_SEL_BITS_LANE = 1; reg_RX_SEL_BITS_LANE = 1;			
		}
	}

	if(((!ring_pll_enabled && !no_pllspdchg) || !lc_pll_used) || (reg_PWRON_SEQ && !no_pllspdchg)) { 
		if(mcuid==master_mcu) {
			pcie_master_sync_request();	
			
			pll_clk_ready_all_0();
			
			pcie_master_sync_clean();		
		}
		else { slave_sync_wait(); }
	}

    DTL_DTX_DFE_clkoff_reset_1();
	
	loadspeedtbl_gen();

	//reg_MCU_DEBUG0_LANE_7_0 = 0x34;
	//reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
	//reg_MCU_DEBUG2_LANE_7_0 = gen_rx;
	//reg_MCU_DEBUG3_LANE_7_0 = max_gen;
	//reg_MCU_DEBUG4_LANE_7_0 = pll_rate;
	//reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
	//reg_MCU_DEBUG6_LANE_7_0 = lc_pll_used;
	//reg_MCU_DEBUG7_LANE_7_0 = use_ring_pll;
	
	if(	mcuid==master_mcu ) {
		if( reg_PWRON_SEQ && !no_pllspdchg) {
			
			if(!ring_pll_enabled && !no_pllspdchg ) lc_pll = pll_rate;		
			else {
				if( lc_pll_used ) {
					if(use_ring_pll) { lc_pll = !pll_rate; ring_pll = pll_rate; }
					else { lc_pll = pll_rate; ring_pll = !pll_rate; }						
				}
				else { //lc never used for PCIe in R1P0
					ring_pll = pll_rate; lc_pll = 0; //12.5G  
				}	
			}	
			
			//if(lc_pll_used) //LCPLL must be enable in R1P0
			{
				if(PLL_RATE_SEL != lc_pll) loadspeedtbl_pll(lc_pll);	
				spdchg_pll_fast_cal();					
			}	
			if(ring_pll_enabled) {
				if( PLL_RATE_SEL_RING != ring_pll )	loadspeedtbl_ringpll(ring_pll);	
				ring_pll_fast_cal(); 
			}			
		}
		else {		
			if(!ring_pll_enabled && !no_pllspdchg) { 				
				loadspeedtbl_pll(pll_rate);	
				spdchg_pll_fast_cal();					
			}			
			if( !lc_pll_used ) { 
				loadspeedtbl_ringpll(pll_rate);	
				ring_pll_fast_cal(); 
			}
		}		
		
		pll_clk_ready_1();
	}
	
	do {
		if(	reg_ANA_PLL_CLK_READY ) {
			if(ring_pll_enabled && reg_ANA_PLL_CLK_READY_RING) break;
			else if(ring_pll_enabled==0) break;
		}
	} while(1);
	
	load_cal_data();
	
/*	moved to spdchg_pll_fast_cal
	if(	!ring_pll_enabled && !no_pllspdchg) { 
		if(mcuid==master_mcu) {
			pcie_master_sync_request();		
			
			pll_clk_ready_1();
			
			pcie_master_sync_clean();		
		}
		else { slave_sync_wait(); }
	}*/
  }
  
  DTL_DTX_DFE_clkoff_reset_0();
  
	//if( !ring_pll_enabled || !lc_pll_used || ((phy_mode!=PCIE && reg_PWRON_SEQ) || phy_mode==PCIE ) ){
	if( phy_mode==PCIE ){
		txlane_align();
	}
	
  reg_PWRON_SEQ = 0;
  
  if(cmx_EOM_ALIGN_CAL_EN) eom_align_cal();
  
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
	
	rate_no							= lc_speedtable[fbck][rate][spdoft_pll_rate_sel];				
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
	reg_ICP_3_0								= lc_speedtable[fbck][rate][spdoft_icp];
	reg_PLL_LPFR_1_0						= lc_speedtable[fbck][rate][spdoft_pll_lpfr];
	reg_PLL_LPFC_1_0						= lc_speedtable[fbck][rate][spdoft_pll_lpfc];
	reg_INIT_TXFOFFS_9_0_b0					= lc_speedtable[fbck][rate][spdoft_init_txfoffs]; 
	reg_INIT_TXFOFFS_9_0_b1					= lc_speedtable[fbck][rate][spdoft_init_txfoffs+1];
	temp									= (uint16_t)lc_speedtable[fbck][rate][spdoft_speed_thresh+1]; temp<<=8;
	temp									+= (uint16_t)lc_speedtable[fbck][rate][spdoft_speed_thresh];		
	temp <<= FBC_RATIO;
	cmx_SPEED_THRESH_15_0 = temp;

	reg_LCCAP_USB							= lc_speedtable[fbck][rate][spdoft_lccap_usb];
	
	if(!lc_pll_used && ring_pll_enabled) {
		reg_LCPLL_SSC_DIS = 1;	
	}
	else {
		reg_SSC_STEP_10_0_b0				= lc_speedtable[fbck][rate][spdoft_ssc_step]; 
		reg_SSC_STEP_10_0_b1				= lc_speedtable[fbck][rate][spdoft_ssc_step+1];
		reg_SSC_M_12_0_b0					= lc_speedtable[fbck][rate][spdoft_ssc_m];
		reg_SSC_M_12_0_b1					= lc_speedtable[fbck][rate][spdoft_ssc_m+1];
	}
}
	
void loadspeedtbl_ringpll(uint8_t rate) {
	uint16_t temp;
	uint8_t fbck, ck1g, rate_no;
	
    if(BYPASS_SPDTBL_LOAD)	return;
	
	fbck = fbck_sel_ring;
	//reg_MCU_DEBUG0_LANE_7_0 = 0x89;
	//reg_MCU_DEBUG5_LANE_7_0 = fbck;
	//reg_MCU_DEBUG6_LANE_7_0 = fbck_sel_ring;
	//reg_MCU_DEBUG6_LANE_7_0 = ring_use_250m;
	
	ck1g = ring_use_250m;
	
	rate_no						= ring_speedtable[ck1g][fbck][rate][spdoft_pll_rate_sel_ring];		
	if(rate_no>1 || phy_mode==SERDES) rate_no = 0;
	PLL_RATE_SEL_RING = rate_no;
	reg_PLL_REFDIV_RING_3_0					= ring_speedtable[ck1g][fbck][rate][spdoft_pll_refdiv_ring];
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

	reg_SSC_STEP_RING_10_0_b0				= ring_speedtable[ck1g][fbck][rate][spdoft_ssc_step_ring]; 
	reg_SSC_STEP_RING_10_0_b1				= ring_speedtable[ck1g][fbck][rate][spdoft_ssc_step_ring+1];
	reg_SSC_M_RING_12_0_b0					= ring_speedtable[ck1g][fbck][rate][spdoft_ssc_m_ring];
	reg_SSC_M_RING_12_0_b1					= ring_speedtable[ck1g][fbck][rate][spdoft_ssc_m_ring+1];

}

void loadspeedtbl_gen(void) {
	uint16_t temp;
	uint8_t gen;
	uint8_t	dec_ratio;
	if(BYPASS_SPDTBL_LOAD)	return;

	gen = gen_tx;
	
	pll_rate	 							= speedtable[gen][spdoft_pll_rate_sel_tx]; 
	if(pll_rate>1 || phy_mode==SERDES) pll_rate = 0;	
	use_ring_pll 							= speedtable[gen][spdoft_tx_ck_sel_lane]; 
	reg_TX_CK_SEL_LANE = use_ring_pll;
	reg_RX_CK_SEL_LANE = use_ring_pll;
	
	//tx
	reg_TX_SPEED_DIV_LANE_2_0		 		= speedtable[gen][spdoft_tx_speeddiv];    
	reg_TX_REG_SPEED_TRK_CLK_LANE_2_0	 	= speedtable[gen][spdoft_tx_reg_speed_trk_clk];  
	reg_TX_REG_SPEED_TRK_DATA_LANE_2_0 	 	= speedtable[gen][spdoft_tx_reg_speed_trk_data];
	reg_TX_EM_CTRL_REG_EN_LANE				= speedtable[gen][spdoft_tx_em_ctrl_reg_en_lane];
	reg_TX_EM_CTRL_PIPE_SEL_LANE			= speedtable[gen][spdoft_tx_em_ctrl_pipe_sel_lane];
	reg_ANA_TX_EM_PRE_EN_LANE				= speedtable[gen][spdoft_tx_em_pre_en_lane];
	reg_TX_EM_PRE_CTRL_LANE_3_0				= speedtable[gen][spdoft_tx_em_pre_ctrl_lane];
	reg_ANA_TX_EM_PO_EN_LANE				= speedtable[gen][spdoft_tx_em_po_en_lane];
	reg_TX_EM_PO_CTRL_LANE_3_0				= speedtable[gen][spdoft_tx_em_po_ctrl_lane];	
	reg_SLEWRATE_EN_LANE_1_0				= speedtable[gen][spdoft_slewrate_en];
	reg_SLEWCTRL1_LANE_1_0					= speedtable[gen][spdoft_slewctrl1];
	reg_SLEWCTRL0_LANE_1_0					= speedtable[gen][spdoft_slewctrl0];
	reg_TX_TRAIN_PAT_SEL_LANE_1_0			= speedtable[gen][spdoft_tx_train_pat_sel_lane];
	reg_TRAIN_PAT_NUM_LANE_8_0_b0			= (uint8_t)speedtable[gen][spdoft_train_pat_num_lane];
	reg_TRAIN_PAT_NUM_LANE_8_0_b1			= (uint8_t)((speedtable[gen][spdoft_train_pat_num_lane+1]>>7)|(speedtable[gen][spdoft_train_pat_num_lane]>>7) );
	reg_TX_TRAIN_PAT_TOGGLE_LANE			= speedtable[gen][spdoft_tx_train_pat_toggle_lane];
	reg_PACKET_SYNC_DIS_LANE				= speedtable[gen][spdoft_packet_sync_dis_lane];
	reg_SYNC_DET_DIS_LANE					= speedtable[gen][spdoft_sync_det_dis_lane];

	gen = gen_rx;
	
	//rx
	//reg_RX_CK_SEL_LANE 						= speedtable[gen][spdoft_rx_ck_sel_lane];  
	reg_RX_SPEED_DIV_LANE_2_0		  		= speedtable[gen][spdoft_rx_speed_div]; 
	reg_DTL_CLK_SPEEDUP_LANE_2_0  			= speedtable[gen][spdoft_dtl_clk_speedup]; 
	reg_INTPI_LANE_3_0			  			= speedtable[gen][spdoft_intpi]; 
	reg_INTPR_LANE_1_0				  		= speedtable[gen][spdoft_intpr];
	reg_DLL_FREQ_SEL_LANE_1_0	  			= speedtable[gen][spdoft_dll_freq_sel];
	reg_RX_REG0P9_SPEED_TRACK_CLK_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_clk];
	reg_RX_REG0P9_SPEED_TRACK_CLK_HALF_LANE	= speedtable[gen][spdoft_rx_reg0p9_speed_track_clk_half];
	reg_RX_REG0P9_SPEED_TRACK_DATA_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_data];
	reg_RX_SELMUFI_LANE_2_0 				= speedtable[gen][spdoft_selmufi];
	reg_RX_SELMUFF_LANE_2_0 				= speedtable[gen][spdoft_selmuff];
	reg_REG_SELMUPI_LANE_3_0 				= speedtable[gen][spdoft_selmupi];
	reg_REG_SELMUPF_LANE_3_0 				= speedtable[gen][spdoft_selmupf];
	reg_DTL_CLK_MODE_LANE_1_0 				= speedtable[gen][spdoft_dtl_clk_mode];
	reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b0 	= speedtable[gen][spdoft_rx_foffset_extra_m];
	reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b1 	= speedtable[gen][spdoft_rx_foffset_extra_m+1];	
	reg_INIT_RXFOFFS_LANE_9_0_b0			= speedtable[gen][spdoft_init_rxfoffs];	
	reg_INIT_RXFOFFS_LANE_9_0_b1			= speedtable[gen][spdoft_init_rxfoffs+1];	
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

    dec_ratio = reg_RX_SPEED_DIV_LANE_2_0&0x03;
	dfe_update_en_force_even_dis = 0;
	half_ui_code = 32;
    lnx_CDS_UPDATE_ODD_DIS_LANE = 0;
    lnx_CDS_UPDATE_F_DIS_LANE = 0;
	if( dec_ratio == 0x3) {
        reg_DFE_ADAPT_EVEN_EN_LANE = 0;
        reg_DFE_ADAPT_ODD_EN_LANE  = 1;
		cdr_ui_pi_code_num = 8;
    }
	else if( dec_ratio == 0x2) {
        reg_DFE_ADAPT_EVEN_EN_LANE = 1;
        reg_DFE_ADAPT_ODD_EN_LANE  = 0;
		cdr_ui_pi_code_num = 4;
    }
	else if( dec_ratio == 0x1) {
        reg_DFE_ADAPT_EVEN_EN_LANE = 0;
        reg_DFE_ADAPT_ODD_EN_LANE  = 1;
		dfe_update_en_force_even_dis = 1;	
		cdr_ui_pi_code_num = 2;	
        lnx_CDS_UPDATE_ODD_DIS_LANE = 1;
        lnx_CDS_UPDATE_F_DIS_LANE = 1;
   }
    else {
        reg_DFE_ADAPT_EVEN_EN_LANE = 1;
        reg_DFE_ADAPT_ODD_EN_LANE  = 1;
		cdr_ui_pi_code_num = 1;
    }
	
	if(reg_RX_SPEED_DIV_LANE_2_0&0x4) cdr_ui_pi_code_num <<= 1;
	if(dfe_dis==0) half_ui_code = 32*cdr_ui_pi_code_num;	
	
	if(dec_ratio==0) {	
		reg_DFE_EVEN_ODD_SIM_ADAPT_LANE = 1;
		dfe_adapt_splr_force_dis = 0xf;		
		lnx_CDS_ADAPT_SPLR_DIS_LANE_3_0 = 0;
	}
	else {
		reg_DFE_EVEN_ODD_SIM_ADAPT_LANE = 0;
		dfe_adapt_splr_force_dis = 0xa;
		lnx_CDS_ADAPT_SPLR_DIS_LANE_3_0 = 5;
	}	

	reg_DFE_EN_LANE = dfe_dis==0;  reg_DFE_DIS_LANE = dfe_dis;
	
	
}

void loadSpeedtbl(void) {
	
	loadspeedtbl_gen();
	
	if( no_pllspdchg ) return;
	
	if( mcuid==master_mcu ) {
		master_sync_request();		
	
		if(use_ring_pll) loadspeedtbl_ringpll(pll_rate);
		else loadspeedtbl_pll(pll_rate);				
		
		master_sync_clean();				
	} else { slave_sync_wait(); }
}

void loadSpdtbl_4_fcnt(void) {
	uint8_t fbck, rate;
	
	fbck = 0;
	rate = PLL_RATE_SEL;

	reg_FBDIV_7_0 				= lc_speedtable[fbck][rate][spdoft_fbdiv_cal];
	reg_FBDIV_9_8 				= lc_speedtable[fbck][rate][spdoft_fbdiv_cal+1];
	reg_ANA_FBCK_SEL = 0;
}


void ringloadSpdtbl_4_fcnt(void) {
	uint8_t fbck, ck1g, rate;
	
	fbck = 0;
	ck1g = ring_use_250m;
	rate = PLL_RATE_SEL_RING;

	reg_PLL_FBDIV_RING_7_0 				= ring_speedtable[ck1g][fbck][rate][spdoft_fbdiv_cal_ring];
	reg_PLL_FBDIV_RING_9_8 				= ring_speedtable[ck1g][fbck][rate][spdoft_fbdiv_cal_ring+1];
	reg_ANA_FBCK_SEL_RING = 0;

}
