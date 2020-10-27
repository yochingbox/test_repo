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

	bool dtx_off, pcie_pwron_pllload;
	uint8_t pre_ring_pll = use_ring_pll;
	
	dtx_off = 0;
	
	#ifdef _28G_X2
	SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0xc0;
	SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0;
	#else
	SPD_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0;
	#endif
	
	rxinit_4_spdchg_en = 0;
	
  new_gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_3_0; new_gen_tx = (new_gen_tx<cmx_PHY_GEN_MAX_3_0)? new_gen_tx: cmx_PHY_GEN_MAX_3_0;
  new_gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_3_0; new_gen_rx = (new_gen_rx<cmx_PHY_GEN_MAX_3_0)? new_gen_rx: cmx_PHY_GEN_MAX_3_0;
  if(phy_mode==SERDES) { new_gen_tx = 0; new_gen_rx = 0; }
  
  if(new_gen_tx != gen_tx || new_gen_rx != gen_rx || ( pwrsq_on && phy_mode!=SERDES ) ){

	reg_PIN_PLL_READY_RX_LANE = 0;
	reg_PIN_PLL_READY_TX_LANE = 0;
	
    gen_tx = new_gen_tx;
    gen_rx = new_gen_rx;   	
	//no need anymore. rx/tx separated.
    //gen_pll = max(gen_tx, gen_rx);
	//if(max_gen == 0 || gen_pll > max_gen) { gen_tx=0; gen_rx=0; gen_pll=0; }
	
	if(phy_mode==SATA) { //SATA must support 1.5G/3G/6G only!! 
		sata_speedchange();	
	}	
	else {
	
		gen_pll_rate = speedtable[gen_tx][spdoft_pll_rate_sel_tx]; 
		use_ring_pll = speedtable[gen_tx][spdoft_tx_ck_sel_lane];
	
		if (phy_mode == PCIE) {
			
			// Invalidate previous pll rate only if fast startup happened and new speed uses different PLL
			if (invalidate_pll_rate && (pre_ring_pll != use_ring_pll)) {
				if (use_ring_pll) {
					pre_ringpll_rate = 0xff;
				}
				else {
					pre_lcpll_rate = 0xff;
				}
				invalidate_pll_rate = 0;
			}
			
			pcie_pwron_pllload = pwrsq_on && reg_TX_CK_SEL_G2_LANE==1 && reg_RX_CK_SEL_G2_LANE;
		}

		#ifdef _DBG_PLL
		Printf("\r\n pre_lcpll_rate=%d, gen_pll_rate=%d", pre_lcpll_rate, gen_pll_rate);
		#endif
		
		if(((!ring_pll_enabled || !lc_pll_used || 
		(phy_mode==PCIE && (pcie_pwron_pllload || (use_ring_pll==1? gen_pll_rate!=pre_ringpll_rate : 0/*gen_pll_rate!=pre_lcpll_rate*/ )) ))/*|| pwrsq_on*/) && 
		!no_pllspdchg /*&& !force_exit_cal*/) { 
			if(mcuid==master_mcu) {			
				//if (phy_mode == PCIE) {
		#ifdef _LAB
		Printf("\r\n pll_clk_ready=0");
		#endif
					if (use_ring_pll) {
						pll_clk_ready_ring_0();
					}
					else  {
						pll_clk_ready_0();
					}
				//}
				//else {
				//	pll_clk_ready_all_0();
				//}
			}
			else {
				//if (phy_mode == PCIE) {
					if (use_ring_pll) {
						while (reg_ANA_PLL_CLK_READY_RING == 1);
					}
					else  {
						while (reg_ANA_PLL_CLK_READY_PRE0 == 1);
					}
				//}
				//else {
				//	while (reg_ANA_PLL_CLK_READY_PRE0==1 || reg_ANA_PLL_CLK_READY_RING==1);
				//}
			}
			dtx_off = 1;	
		}
		
		DTL_DTX_DFE_clkoff_reset_1(dtx_off);
	
		loadspeedtbl_gen();

		if(pcie_usb_mode) { 
			if( gen_tx < 2) {
				reg_TX_SEL_BITS_LANE = 0; reg_RX_SEL_BITS_LANE = 0;	//40bit
				#ifndef _28G_X2_ROM
				reg_TX_DEEMPH_FM_REG_LANE = 0;
				#endif
			}
			else {
				reg_TX_SEL_BITS_LANE = 1; reg_RX_SEL_BITS_LANE = 1;	//32bit		
				#ifndef _28G_X2_ROM
				reg_TX_DEEMPH_FM_REG_LANE = 1;
				#endif
			}
			
			#ifdef _28G_X4_R2P1
			if(mcuid==master_mcu && !use_ring_pll) {
				if(gen_tx==4)
					reg_LCPLLCLK_DIV2_SEL = 1; 
				else 
					reg_LCPLLCLK_DIV2_SEL = 0;
			}	
			#endif
			
		}
		//Turn the debug info off temporally, to save code size for the new eom
		/*reg_MCU_DEBUG0_LANE_7_0 = 0x34;
		reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
		reg_MCU_DEBUG2_LANE_7_0 = lc_pll_used;
		reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
		reg_MCU_DEBUG4_LANE_7_0 = max_gen;
		reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
		reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
		reg_MCU_DEBUG7_LANE_7_0 = tx_pll_rate;
		reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;*/
		
		if( mcuid==master_mcu ) {			
			//if( reg_PWRON_SEQ && !no_pllspdchg && !force_exit_cal) {
			//	if(!ring_pll_enabled) loadspeedtbl_pll(tx_pll_rate);
			//		
			//	//if( lc_pll_used ) {
			//	//	if(use_ring_pll) {PLL_RATE_SEL_RING = tx_pll_rate; PLL_RATE_SEL = !tx_pll_rate; }
			//	//	else { PLL_RATE_SEL = tx_pll_rate; PLL_RATE_SEL_RING = !tx_pll_rate; }
			//	//}
			//	//else { 
			//	//	PLL_RATE_SEL_RING = tx_pll_rate; PLL_RATE_SEL = 1; 
			//	//}
			//	
			//	if(!ring_pll_enabled) spdchg_pll_fast_cal();		
			//}
			//else 
			{		
				if((!ring_pll_enabled && !no_pllspdchg ) || (phy_mode==PCIE && (pcie_pwron_pllload /*|| (!use_ring_pll && gen_pll_rate!=pre_lcpll_rate)*/))) { 				
					// 5/14/18 X.Su - Patch for PCIE 32G with new pll rate = 2. Use lc_pll_rate (8-bit), not tx_pll_rate (1-bit)
		#ifdef _LAB
		Printf("\r\n reload lcplltbl");
		#endif
					if(pcie_usb_mode)	
						loadspeedtbl_pll(gen_pll_rate);
					else 
						loadspeedtbl_pll(tx_pll_rate);

					if (phy_mode==PCIE) {
						pll_fast_cal();
					}
					else {
						spdchg_pll_fast_cal();
					}			
				}		
			}
			
			if(reg_ANA_PLL_CLK_READY==0) pll_clk_ready_1();
			
		}
		
		if( ring_lane_sel ) 	
		{
			//if( reg_PWRON_SEQ && !no_pllspdchg && !force_exit_cal) {
			//	if(!lc_pll_used ) {
			//		loadspeedtbl_ringpll(tx_pll_rate);
			//		ring_pll_fast_cal();
			//	}	
			//}
			//else {
				if( !lc_pll_used || (phy_mode==PCIE && (pcie_pwron_pllload || (use_ring_pll && gen_pll_rate!=pre_ringpll_rate))) ) { 
					loadspeedtbl_ringpll(tx_pll_rate);
					ring_pll_fast_cal();		
				}
			//}
			
			if(reg_ANA_PLL_CLK_READY_RING==0) pll_clk_ready_ring_1();
		}			
		
		check_pll_clk_ready();
			
		load_cal_data_all();

		if( phy_mode==PCIE ) { //only pcie need align because of one mac
			txlane_align();			
			if (use_ring_pll) {
				pre_ringpll_rate = gen_pll_rate;
			}
			else {
				pre_lcpll_rate = gen_pll_rate;
			}
		}

	  } 	

	}
           
   restore_train();
   
   DTL_DTX_DFE_clkoff_reset_0();
    
  if(phy_mode!=SATA) 
    delay01(90);
		 
  lnx_EOM_ALIGN_CAL_DONE_LANE = 0; //moved eom_align_cal to inside train

  reg_PWRON_SEQ = 0; pwrsq_on = 0;

  reg_RST_FRAME_SYNC_DET_CLK_LANE = 1;
  delay01(5);
  delay01(5);
  reg_RST_FRAME_SYNC_DET_CLK_LANE = 0;
  
  PHY_STATUS_INT = IDLE;
  pre_gen_pll_rate = gen_pll_rate;
  rxinit_4_spdchg_en = 1;
  
  reg_PIN_PLL_READY_RX_LANE = 1;
  reg_PIN_PLL_READY_TX_LANE = 1;
  
	#ifdef SUPPORT_PCIE_TXFFE_WA_FORCE_CTRL   	
	if(phy_mode==PCIE)	{
		txffe_force_ctrl();
	}	
    #endif
	
	if(cmx_AUTO_RX_INIT_EN == 0 && cal_start_on==0)
		PHY_STATUS = ST_PLLREADY; 
	else	
		PHY_STATUS = ST_DTL;
	
	cal_start_on = 0;
  
}


void sata_speedchange(void) {
	uint8_t val;
	
	//dtl/dfe reset
	reg_DTL_CLK_OFF_LANE= 1; 
	reg_DFE_CLK_OFF_LANE = 1; 
	reg_RESET_DTL_LANE = 1;	
	CKCON = 0x07 ;  //MCU WAIT time the slowest
	reg_RESET_DFE_LANE = 1;
	CKCON = 0x00 ; //MCU WAIT time setting back to normal.
	
	loadspeedtbl_gen();
	
	//load_cal
    reg_TXDCCCAL_PDIV_CNT_LANE_5_0 = lnx_calx_txdcc_pdiv[PWR + cmx_TXDCC_PDIV_CAL_CONT_CUR_LOAD_EN][tx_pll_rate];  
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 1;
    txdcc_pdiv_step_cnt = TXDCC_PDIV_CAL_STEP_SIZE;    //when speed change, restore the fracition code to middle	
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 0;		
		
	//dtl/dfe reset release
	reg_DTL_CLK_OFF_LANE= 0; 
	reg_DFE_CLK_OFF_LANE = 0; 	
	delay01(5);
	reg_RESET_DTL_LANE = 0;	
	reg_RESET_DFE_LANE = 0;	
	
}

void loadspeedtbl_pll(uint8_t rate) {
	uint16_t temp;
	uint8_t temp8, fbck, rate_no;

	fbck = fbck_sel;
	
	if(phy_mode==SERDES ) rate = gen_pll_rate;
	
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
	reg_INTPI_LCPLL_3_0						= lc_speedtable[fbck][rate][spdoft_intpi_lcpll];
	reg_TX_INTPR_1_0						= lc_speedtable[fbck][rate][spdoft_tx_intpr];
	reg_INIT_TXFOFFS_9_0_b0					= lc_speedtable[fbck][rate][spdoft_init_txfoffs]; 
	reg_INIT_TXFOFFS_9_0_b1					= lc_speedtable[fbck][rate][spdoft_init_txfoffs+1];
	temp									= (uint16_t)lc_speedtable[fbck][rate][spdoft_speed_thresh+1]; temp<<=8;
	temp									+= (uint16_t)lc_speedtable[fbck][rate][spdoft_speed_thresh];		
	temp <<= FBC_RATIO;
	cmx_SPEED_THRESH_15_0 = temp;
	
	reg_LCCAP_USB							= lc_speedtable[fbck][rate][spdoft_lccap_usb];
	#ifdef _28G_X2
	temp = (uint16_t)(cmx_SSC_AMP_6_0*lc_speedtable[fbck][rate][spdoft_ssc_step_125ppm]); 
	reg_SSC_STEP_10_0_b0 = (uint8_t)temp;
	reg_SSC_STEP_10_0_b1 = (uint8_t)(temp>>8);	
	#else
	reg_SSC_STEP_10_0_b0					= lc_speedtable[fbck][rate][spdoft_ssc_step]; 
	reg_SSC_STEP_10_0_b1					= lc_speedtable[fbck][rate][spdoft_ssc_step+1];
	#endif
	reg_SSC_M_12_0_b0						= lc_speedtable[fbck][rate][spdoft_ssc_m];
	reg_SSC_M_12_0_b1						= lc_speedtable[fbck][rate][spdoft_ssc_m+1];
	
	#ifdef _28G_X4_R2P1
	//lcpllclk_div2_sel is connected to ANA_RSVDA[2] (cmn register)
	//ana_rsvda[2] is to control CK500M or CK100M_125M clock. LCPLLCLK_DIV2_SEL should be the one to control LC PLL output.
	//temp8 = reg_ANA_RSVDA_7_0 & 0xfb; 
	//if(lc_speedtable[fbck][rate][spdoft_lcpllclk_div2_sel])	temp8 |= 0x02;	
	//reg_ANA_RSVDA_7_0 = temp8;
	
	reg_LCPLLCLK_DIV2_SEL 					= lc_speedtable[fbck][rate][spdoft_lcpllclk_div2_sel];
	#endif
	
}
	
void loadspeedtbl_ringpll(uint8_t rate) {
	uint16_t temp;
	uint8_t fbck, ck1g, rate_no;;
	
	fbck = fbck_sel_ring;
	//reg_MCU_DEBUG0_LANE_7_0 = 0x89;
	//reg_MCU_DEBUG5_LANE_7_0 = fbck;
	//reg_MCU_DEBUG6_LANE_7_0 = fbck_sel_ring;
	//reg_MCU_DEBUG6_LANE_7_0 = ref_clk_ring_sel;
	
	ck1g = ring_use_250m;

	if(phy_mode==SERDES) rate = gen_pll_rate;
	
	rate_no									= ring_speedtable[ck1g][fbck][rate][spdoft_pll_rate_sel_ring];					
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
	temp			= (uint16_t)ring_speedtable[ck1g][fbck][rate][spdoft_pll_speed_thresh_ring+1]; 	temp<<=8;
	temp			+= (uint16_t)ring_speedtable[ck1g][fbck][rate][spdoft_pll_speed_thresh_ring];
	temp <<= FBC_RATIO;
	cmx_PLL_SPEED_THRESH_RING_15_0 = temp;

	#ifdef _28G_X2
	temp = (uint16_t)(cmx_SSC_AMP_RING_6_0*ring_speedtable[ck1g][fbck][rate][spdoft_ssc_step_125ppm_ring]); 
	reg_SSC_STEP_RING_10_0_b0 = (uint8_t)temp;
	reg_SSC_STEP_RING_10_0_b1 = (uint8_t)(temp>>8);
	#else
	reg_SSC_STEP_RING_10_0_b0				= ring_speedtable[ck1g][fbck][rate][spdoft_ssc_step_ring]; 
	reg_SSC_STEP_RING_10_0_b1				= ring_speedtable[ck1g][fbck][rate][spdoft_ssc_step_ring+1];
	#endif
	reg_SSC_M_RING_12_0_b0					= ring_speedtable[ck1g][fbck][rate][spdoft_ssc_m_ring];
	reg_SSC_M_RING_12_0_b1					= ring_speedtable[ck1g][fbck][rate][spdoft_ssc_m_ring+1];	
}


uint8_t get_gen_memory_index(uint8_t gen) {
    //grp0 0,1,2,4,13	
	//grp1 0,1,4,7
	uint8_t serdes_gen_tb0[] = { 0, 1, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0};
	uint8_t serdes_gen_tb1[] = { 0, 1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	if(cmx_ETHERNET_CFG_1_0==1 || cmx_ETHERNET_CFG_1_0==2) return serdes_gen_tb0[gen];
	else if(cmx_ETHERNET_CFG_1_0==3) return	serdes_gen_tb1[gen];
	else 
		return 0;	
}

void loadspeedtbl_gen(void) {
	uint16_t temp;
	uint8_t gen, phy_mode_r;
	uint8_t	dec_ratio;
	
	phy_mode_r = phy_mode;
	gen = gen_tx;
	if(phy_mode==SERDES) { 
		gen = min(reg_PIN_PHY_GEN_TX_RD_LANE_3_0, cmx_PHY_GEN_MAX_3_0);
		gen = get_gen_memory_index(gen);
	}	
	
	gen_pll_rate	 						= speedtable[gen][spdoft_pll_rate_sel_tx]; 
	if(gen_pll_rate==2 && phy_mode==PCIE) { tx_pll_rate = 1; tx_pll_rate_x = gen_pll_rate; }
	else if(gen_pll_rate>1 || phy_mode==SERDES) { tx_pll_rate = 0; tx_pll_rate_x = 0; }
	else { tx_pll_rate = gen_pll_rate; tx_pll_rate_x = gen_pll_rate; }
	use_ring_pll 							= speedtable[gen][spdoft_tx_ck_sel_lane]; 
	
	//for SATA speed change
	reg_TX_SPEED_DIV_LANE_2_0		 		= speedtable[gen][spdoft_tx_speed_div_lane]; 
	reg_TXSPEED_DIV_LANE_2_0 				= speedtable[gen][spdoft_tx_speed_div_lane]; //duplicated for digital use

	reg_RX_SPEED_DIV_LANE_2_0		  		= speedtable[gen][spdoft_rx_speed_div_lane]; 
	reg_DTL_CLK_SPEEDUP_LANE_2_0  			= speedtable[gen][spdoft_dtl_clk_speedup_lane]; 
	reg_RX_REG0P9_SPEED_TRACK_DATA_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_data_lane];
	reg_RX_SELMUFF_LANE_2_0 				= speedtable[gen][spdoft_rx_selmuff_lane];
	reg_PU_F1P_S_O_LANE                     = speedtable[gen][spdoft_pu_f1p_s_o_lane];	
	reg_PU_F1P_D_O_LANE	                    = speedtable[gen][spdoft_pu_f1p_d_o_lane];
	reg_PU_F1P_D_E_LANE						= speedtable[gen][spdoft_pu_f1p_d_e_lane];
	dfe_dis									= speedtable[gen][spdoft_reg_dfe_dis_lane];	
	reg_DFE_TAP_SETTLE_SCALE_LANE_1_0       = speedtable[gen][spdoft_reg_dfe_tap_settle_scale_lane];          
	reg_FFE_DATA_RATE_LANE_3_0  			= speedtable[gen][spdoft_ffe_data_rate_lane];
	
	if(phy_mode!=SATA || PHY_STATUS!=ST_SPDCHG) {
	reg_TX_CK_SEL_LANE 						= use_ring_pll|(serdes_ring_lane_en & ring_lane_sel);
	reg_TX_CK_SEL_DIG_LANE 					= reg_TX_CK_SEL_LANE;	//duplicated for digital use	
	reg_TX_REG_SPEED_TRK_CLK_LANE_2_0	 	= speedtable[gen][spdoft_tx_reg_speed_trk_clk_lane];  
	reg_TX_REG_SPEED_TRK_DATA_LANE_2_0 	 	= speedtable[gen][spdoft_tx_reg_speed_trk_data_lane];
	
	txffe_force_en = txffe_save[gen][0] & 0x01;
	if(txffe_force_en) {
		txffe_force_output();
	}
	else {
	reg_TX_EM_CTRL_REG_EN_LANE				= speedtable[gen][spdoft_tx_em_ctrl_reg_en_lane];
	reg_TX_EM_CTRL_PIPE_SEL_LANE			= speedtable[gen][spdoft_tx_em_ctrl_pipe_sel_lane];	
	reg_ANA_TX_EM_PRE_EN_LANE				= speedtable[gen][spdoft_tx_em_pre_en_lane];
	if(phy_mode_r != PCIE)
		reg_ANA_TX_EM_PO_EN_LANE				= speedtable[gen][spdoft_tx_em_po_en_lane];
	reg_TX_EM_PO_CTRL_LANE_3_0				= speedtable[gen][spdoft_tx_em_po_ctrl_lane];	
	reg_TX_EM_PRE_CTRL_LANE_3_0				= speedtable[gen][spdoft_tx_em_pre_ctrl_lane];
	}
	
	reg_SLEWRATE_EN_LANE_1_0				= speedtable[gen][spdoft_slewrate_en_lane];
	reg_SLEWCTRL1_LANE_1_0					= speedtable[gen][spdoft_slewctrl1_lane];
	reg_SLEWCTRL0_LANE_1_0					= speedtable[gen][spdoft_slewctrl0_lane];
	reg_TX_TRAIN_PAT_SEL_LANE_1_0			= speedtable[gen][spdoft_tx_train_pat_sel_lane];
	reg_TRAIN_PAT_NUM_LANE_8_0_b0			= speedtable[gen][spdoft_train_pat_num_lane];
	reg_TRAIN_PAT_NUM_LANE_8_0_b1			= speedtable[gen][spdoft_train_pat_num_lane+1];
	reg_TX_TRAIN_PAT_TOGGLE_LANE			= speedtable[gen][spdoft_tx_train_pat_toggle_lane];
	reg_PACKET_SYNC_DIS_LANE				= speedtable[gen][spdoft_packet_sync_dis_lane];
	reg_SYNC_DET_DIS_LANE					= speedtable[gen][spdoft_sync_det_dis_lane];
	
	//gen = gen_rx;
	
	rx_pll_rate	 							= speedtable[gen][spdoft_pll_rate_sel_rx]; 
	if(rx_pll_rate==2 && phy_mode==PCIE) { rx_pll_rate = 1; rx_pll_rate_x = gen_pll_rate; }
	else if(rx_pll_rate>1 || phy_mode==SERDES) { rx_pll_rate = 0; rx_pll_rate_x = 0; }
	else { rx_pll_rate = gen_pll_rate; rx_pll_rate_x = gen_pll_rate; }
	reg_RX_CK_SEL_LANE 						= speedtable[gen][spdoft_rx_ck_sel_lane] | (serdes_ring_lane_en & ring_lane_sel);  
	reg_INTPI_LANE_3_0			  			= speedtable[gen][spdoft_intpi_lane]; 
	reg_INTPR_LANE_1_0				  		= speedtable[gen][spdoft_intpr_lane];
	reg_DLL_FREQ_SEL_LANE_1_0	  			= speedtable[gen][spdoft_dll_freq_sel_lane];
	if(speedtable[gen][spdoft_dll_freq_sel_lane]&0x04) reg_DLL_FREQ_SEL_LANE_2 = 1;
	else reg_DLL_FREQ_SEL_LANE_2 = 0;
	reg_EOM_DLL_FREQ_SEL_LANE_1_0  			= speedtable[gen][spdoft_eom_dll_freq_sel_lane];
	if(speedtable[gen][spdoft_eom_dll_freq_sel_lane]&0x04) reg_EOM_DLL_FREQ_SEL_LANE_2 = 1;
	else reg_EOM_DLL_FREQ_SEL_LANE_2 = 0;
	reg_ALIGN90_8G_EN_LANE		 			= speedtable[gen][spdoft_align90_8g_en_lane];	
	reg_RX_REG0P9_SPEED_TRACK_CLK_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_clk_lane];
	reg_RX_REG0P9_SPEED_TRACK_CLK_HALF_LANE	= speedtable[gen][spdoft_rx_reg0p9_speed_track_clk_half_lane];
	reg_RX_SELMUFI_LANE_2_0 				= speedtable[gen][spdoft_rx_selmufi_lane];
	reg_REG_SELMUPI_LANE_3_0 				= speedtable[gen][spdoft_reg_selmupi_lane];
	reg_REG_SELMUPF_LANE_3_0 				= speedtable[gen][spdoft_reg_selmupf_lane];
	reg_DTL_CLK_MODE_LANE_1_0 				= speedtable[gen][spdoft_dtl_clk_mode_lane];
	reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b0 	= speedtable[gen][spdoft_rx_foffset_extra_m_lane];
	reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b1 	= speedtable[gen][spdoft_rx_foffset_extra_m_lane+1];	
	reg_INIT_RXFOFFS_LANE_9_0_b0			= speedtable[gen][spdoft_init_rxfoffs_lane];	
	reg_INIT_RXFOFFS_LANE_9_0_b1			= speedtable[gen][spdoft_init_rxfoffs_lane+1];	

	//*sequence need
	reg_PATH_DISABLE_EDGE_LANE              = speedtable[gen][spdoft_path_disable_edge_lane];	
	reg_PU_F1N_S_O_LANE                     = speedtable[gen][spdoft_pu_f1n_s_o_lane];	
	reg_PU_F1N_D_O_LANE                     = speedtable[gen][spdoft_pu_f1n_d_o_lane];
	reg_PU_F1N_S_E_LANE	                    = speedtable[gen][spdoft_pu_f1n_s_e_lane];
	reg_PU_F1N_D_E_LANE	                    = speedtable[gen][spdoft_pu_f1n_d_e_lane];
	reg_PU_F1P_S_E_LANE	                    = speedtable[gen][spdoft_pu_f1p_s_e_lane];

	reg_ANA_RX_DFE_F1_POL_EN_D_LANE			= speedtable[gen][spdoft_dfe_f1_pol_en_d_lane];				
	reg_ANA_RX_DFE_F1_POL_EN_S_LANE         = speedtable[gen][spdoft_dfe_f1_pol_en_s_lane];
	reg_ANA_RX_DFE_F1_POL_D_LANE            = speedtable[gen][spdoft_dfe_f1_pol_d_lane]; 
	reg_ANA_RX_DFE_F1_POL_S_LANE            = speedtable[gen][spdoft_dfe_f1_pol_s_lane];  	
	reg_ANA_RX_DFE_F1_POL_EN_D_FORCE_LANE	= speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_en_d_force_lane];
	reg_ANA_RX_DFE_F1_POL_EN_S_FORCE_LANE   = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_en_s_force_lane];
	reg_ANA_RX_DFE_F1_POL_D_FORCE_LANE      = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_d_force_lane];   
	reg_ANA_RX_DFE_F1_POL_S_FORCE_LANE      = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_s_force_lane];   
	reg_DFE_FULL_RATE_MODE_LANE             = speedtable[gen][spdoft_reg_dfe_full_rate_mode_lane];    	

	rxdll_temp_a_lane = speedtable[gen][spdoft_rxdll_temp_a_lane];
	rxdll_temp_b_lane = speedtable[gen][spdoft_rxdll_temp_b_lane];
	}
    
	reg_DFE_EN_LANE = dfe_dis==0;  reg_DFE_DIS_LANE = dfe_dis;

	#ifdef SUPPORT_CMD_IF	
	if(cmx_TX_SSC_CTRL_SEL) {
		reg_SSC_EN_FM_REG_LANE = 1;
		if(train_save_tb[gen].ssc_en) 
			reg_SSC_EN_LANE = 1;		
		else reg_SSC_EN_LANE = 0;
	
		if(use_ring_pll) {
			reg_SSC_DSPREAD_TX_RING					=  tx_tb[gen].ssc_dspread;
			reg_SSC_STEP_RING_10_0_b1				=  (uint8_t)(train_save_tb[gen].ssc_step>>3);
			reg_SSC_STEP_RING_10_0_b0				=  (uint8_t)train_save_tb[gen].ssc_step;		
		}
		else {	
			reg_SSC_DSPREAD_TX 						=  tx_tb[gen].ssc_dspread;
			reg_SSC_STEP_10_0_b1					=  (uint8_t)(train_save_tb[gen].ssc_step>>3);
			reg_SSC_STEP_10_0_b0					=  (uint8_t)train_save_tb[gen].ssc_step;
		}
	}
	
	// for sq_thresh_ratio CMD_IF restore
	if(sq_thrs_ratio_gen_en & (0x01<<gen)) { 		
		sq_thrs_ratio = sq_thrs_ratio_tb[gen];
		temp = lnx_CAL_SQ_THRESH_LANE_7_0;
		if(sq_thrs_ratio==0) 
			reg_SQ_THRESH_LANE_5_0 = (uint8_t)temp;			
		else {	
			temp = temp * sq_thrs_ratio;
			reg_SQ_THRESH_LANE_5_0 = (lnx_CAL_SQ_THRESH_LANE_7_0&0x20) | ((uint8_t)(temp>>5)); 
		}
	}
	#endif

	#ifdef SUPPORT_APTA_TX_TRAIN
	// for APTA
	if(phy_mode == SAS && gen==4) reg_TX_TRAIN_IF_CLK_EN_LANE = 1;
	else reg_TX_TRAIN_IF_CLK_EN_LANE = 0;
	#endif
	
	//restore_train();
}

void loadSpeedtbl(void) {	
	
	loadspeedtbl_gen();
		
	if( mcuid== master_mcu ) {
		master_sync_request();		
	
		if(use_ring_pll) {
			if( tx_pll_rate != PLL_RATE_SEL_RING )
				loadspeedtbl_ringpll(tx_pll_rate);
		}	
		else {
			// 5/14/18 X.Su - Patch for PCIE 32G with new pll rate = 2. Use lc_pll_rate (8-bit), not tx_pll_rate (1-bit)
//#ifdef _PCIE_USB_BUILD
//			if( gen_pll_rate != PLL_RATE_SEL )
				loadspeedtbl_pll(gen_pll_rate);
//#else
//			if( tx_pll_rate != PLL_RATE_SEL )
//				loadspeedtbl_pll(tx_pll_rate);
//#endif
		}
		 	
		master_sync_clean();		
	} else { slave_sync_wait(); }
}


void loadSpdtbl_4_fcnt(void) {
	uint8_t fbck, rate;
	
	fbck = 0;
	if(phy_mode==SERDES) rate = gen_pll_rate;
	else rate = PLL_RATE_SEL;

	reg_FBDIV_7_0 				= lc_speedtable[fbck][rate][spdoft_fbdiv_cal];
	reg_FBDIV_9_8 				= lc_speedtable[fbck][rate][spdoft_fbdiv_cal+1];
	reg_ANA_FBCK_SEL = 0;
}


void ringloadSpdtbl_4_fcnt(void) {
	uint8_t fbck, ck1g, rate;
	
	fbck = 0;
	ck1g = ring_use_250m;
	if(phy_mode==SERDES) rate = gen_pll_rate;
	else rate = PLL_RATE_SEL_RING;

	reg_PLL_FBDIV_RING_7_0 				= ring_speedtable[ck1g][fbck][rate][spdoft_fbdiv_cal_ring];
	reg_PLL_FBDIV_RING_9_8 				= ring_speedtable[ck1g][fbck][rate][spdoft_fbdiv_cal_ring+1];
	reg_ANA_FBCK_SEL_RING = 0;

}




