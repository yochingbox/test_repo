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
	//BIT	lc_pll_rate, ring_pll_rate; 
	bool dtx_off;
	
	dtx_off = 0;
	rxinit_4_spdchg_en = 0;
	
	//dfe_hardware_cont_stop();
	reg_DFE_ADAPT_CONT_LANE = 0;
	reg_DFE_START_LANE = 0;
	
	#ifdef _28G_X2
	SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0xc0;
	SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0;
	#else
	SPD_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0;
	#endif
	
	
  new_gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_3_0; new_gen_tx = (new_gen_tx<cmx_PHY_GEN_MAX_3_0)? new_gen_tx: cmx_PHY_GEN_MAX_3_0;
  new_gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_3_0; new_gen_rx = (new_gen_rx<cmx_PHY_GEN_MAX_3_0)? new_gen_rx: cmx_PHY_GEN_MAX_3_0;
 
  if((new_gen_tx != gen_tx || new_gen_rx != gen_rx /*|| ( pwrsq_on && phy_mode!=SERDES )*/ ) && phy_mode!=SERDES ){

	reg_PIN_PLL_READY_RX_LANE = 0;
	reg_PIN_PLL_READY_TX_LANE = 0;

	//if(phy_mode==SAS && gen_tx==4) {
	//	reg_RST_FRAME_SYNC_DET_CLK_LANE = 1;
	//	reg_RST_FRAME_SYNC_DET_CLK_LANE = 0;	
	//}	
	
    gen_tx = new_gen_tx;
    gen_rx = new_gen_rx;   	
	//no need anymore. rx/tx separated.
    //gen_pll = max(gen_tx, gen_rx);
	//if(max_gen == 0 || gen_pll > max_gen) { gen_tx=0; gen_rx=0; gen_pll=0; }
	#ifdef _SATA_SERDES_BUILD
	if(phy_mode==SATA) { //SATA must support 1.5G/3G/6G only!! 
		sata_speedchange();	
	}	
	else 
	#endif		
	{	
		
		gen_pll_rate = speedtable[gen_tx][spdoft_pll_rate_sel_tx]; 
		use_ring_pll = speedtable[gen_tx][spdoft_tx_ck_sel_lane];

		if(((//!ring_pll_enabled || !lc_pll_used ||
		(/*phy_mode==PCIE &&*/ (use_ring_pll==1? gen_pll_rate!=pre_ringpll_rate : gen_pll_rate!=pre_lcpll_rate ) ))/*|| pwrsq_on*/) //&& 
		/*!no_pllspdchg && !force_exit_cal*/) { 
			if(mcuid==master_mcu) {			
				pll_clk_ready_all_0();	
			}
			else{		
				while(reg_ANA_PLL_CLK_READY_PRE0==1 || reg_ANA_PLL_CLK_READY_RING==1);
			}
			dtx_off = 1;	
		}		
	
		//dtx_off |= (pre_gen_pll_rate != gen_pll_rate);
		#ifdef _SATA_SERDES_BUILD
		DTL_DTX_DFE_clkoff_reset_1(dtx_off);
		#endif
		#ifdef _PCIE_USB_BUILD
		DTL_DTX_DFE_clkoff_reset_1_pcie(dtx_off);
		#endif
		
	
		loadspeedtbl_gen();
	
		/*reg_MCU_DEBUG0_LANE_7_0 = 0x34;
		reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
		reg_MCU_DEBUG2_LANE_7_0 = lc_pll_used;
		reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
		reg_MCU_DEBUG4_LANE_7_0 = max_gen;
		reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
		reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
		reg_MCU_DEBUG7_LANE_7_0 = tx_pll_rate;
		reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;
		reg_MCU_DEBUG9_LANE_7_0 = serdes_ring_lane_en;
		reg_MCU_DEBUGA_LANE_7_0 = master_mcu;
		*/
		
		
		if( mcuid==master_mcu) {			
			{		
				if(/*(!ring_pll_enabled && !no_pllspdchg ) ||*/ (/*phy_mode==PCIE &&*/ !use_ring_pll && gen_pll_rate!=pre_lcpll_rate)) { 				
					loadspeedtbl_pll(tx_pll_rate);
					if(slave_phy_on) {
						check_master_phy_status(CHECK_MP_PLL_CLK_READY_ON);	
						pll_clk_ready_1();
					}	
					else	
						spdchg_pll_fast_cal();				
				}		
			}			

			//if(reg_ANA_PLL_CLK_READY==0) pll_clk_ready_1();
		}
		
		if( ring_lane_sel) 	
		{
				if( /*!lc_pll_used ||*/ (/*phy_mode==PCIE &&*/ use_ring_pll && gen_pll_rate!=pre_ringpll_rate) ) { 
					loadspeedtbl_ringpll(tx_pll_rate);
					if(slave_phy_on) {
						check_master_phy_status(CHECK_MP_PLL_CLK_READY_RING_ON);
						pll_clk_ready_ring_1();
					}
					else	
						ring_pll_fast_cal();		
				}				
			
			//if(reg_ANA_PLL_CLK_READY_RING==0) pll_clk_ready_ring_1();
			
		}			
		
		if(serdes_ring_lane_en==0)
			check_pll_clk_ready();
			
		if(!force_exit_cal) {
			reg_RXDCC_EN_DLLCLK_LANE = 1;
			reg_RXDCC_EN_DATACLK_LANE = 1;
			reg_RXDCC_EN_EOMCLK_LANE = 1;			
			load_cal_data_all();
		}
		
	}
	
  }

  #ifdef _PCIE_USB_BUILD
  if( phy_mode==PCIE ) 
	txlane_align(); //only pcie need align because of one mac
  #endif //_PCIE_USB_BUILD
	if(use_ring_pll) pre_ringpll_rate = gen_pll_rate;
	else pre_lcpll_rate = gen_pll_rate;
     
  DTL_DTX_DFE_clkoff_reset_0();

  restore_train();
  update_ssc_sq_thr();
    
  if(phy_mode!=SATA) 
		delay01(90);
 
  
  lnx_EOM_ALIGN_CAL_DONE_LANE = 0; //moved eom_align_cal to inside train
	
  //reg_PWRON_SEQ = 0; pwrsq_on = 0;
  
  reg_RST_FRAME_SYNC_DET_CLK_LANE = 1;
  delay01(10);
  reg_RST_FRAME_SYNC_DET_CLK_LANE = 0;
  
  PHY_STATUS_INT = IDLE;
  pre_gen_pll_rate = gen_pll_rate;
  rxinit_4_spdchg_en = 1;
  
  //move to P1_TXDETRX
  //if( phy_mode==PCIE && pwrsq_on ) {
  //	if(cmx_VIRTUAL_TDR_SIM_EN && reg_ANA_DPHY_SQ_DETECTED_LANE) { //lane reduce test by sq_detect
  //		reg_TRX_VIRTUAL_CTRL_LANE = 1; //3fc[0]
  //	}
  //}

  delay01(5); //TXCLK need more time 0.5sec even in bypassed delay 
  
  rx_init_done = 0;
  cont_cal_inx = 0;

  check_pll_lock_0(); //For Hayabusa simulation fast but need pll lock
  
  reg_PIN_PLL_READY_RX_LANE = 1;
  reg_PIN_PLL_READY_TX_LANE = 1;
	
	//if(cmx_AUTO_RX_INIT_EN == 0)
	//	PHY_STATUS = ST_PLLREADY; 
	//else	
		PHY_STATUS = ST_DTL;	
  
}

#ifdef _SATA_SERDES_BUILD
void sata_speedchange(void) {

	//dtl/dfe reset
	//reg_DTX_CLK_OFF = 1;
	//reg_RESET_DTX	= 1;
	reg_DTL_CLK_OFF_LANE= 1; 
	reg_DFE_CLK_OFF_LANE = 1; 
	reg_RESET_DTL_LANE = 1;	
	CKCON = 0x07 ;  //MCU WAIT time the slowest
	reg_RESET_DFE_LANE = 1;
	CKCON = 0x00 ; //MCU WAIT time setting back to normal.
	
	//
	loadspeedtbl_gen();
	
	//load_cal
    reg_TXDCCCAL_PDIV_CNT_LANE_5_0 = lnx_cal_txdcc_pdiv[PWR + cmx_TXDCC_PDIV_CAL_CONT_CUR_LOAD_EN][tx_pll_rate];  
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
#endif //_SATA_SERDES_BUILD

void loadspeedtbl_pll(uint8_t rate) {
	uint16_t temp;
	uint8_t fbck, rate_no;

	fbck = fbck_sel;

	reg_MCU_DEBUG0_LANE_7_0 = 0x35;
	
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
	cmx_G_INTPI_LCPLL_7_0					= lc_speedtable[fbck][rate][spdoft_intpi_lcpll];
	reg_INTPI_LCPLL_3_0 = cmx_G_INTPI_LCPLL_7_0;
	reg_INTPI_RING_3_0 = cmx_G_INTPI_RING_7_0;
	reg_TX_INTPR_1_0						= lc_speedtable[fbck][rate][spdoft_tx_intpr];
	reg_INIT_TXFOFFS_9_0_b0					= lc_speedtable[fbck][rate][spdoft_init_txfoffs]; 
	reg_INIT_TXFOFFS_9_0_b1					= lc_speedtable[fbck][rate][spdoft_init_txfoffs+1];
	temp									= (uint16_t)lc_speedtable[fbck][rate][spdoft_speed_thresh+1]; temp<<=8;
	temp									+= (uint16_t)lc_speedtable[fbck][rate][spdoft_speed_thresh];		
	temp <<= FBC_RATIO;
	cmx_SPEED_THRESH_15_0 = temp;
	
	reg_LCCAP_USB							= lc_speedtable[fbck][rate][spdoft_lccap_usb];
	#ifdef _28G_X2
	reg_SSC_STEP_125PPM_3_0 				= lc_speedtable[fbck][rate][spdoft_ssc_step_125ppm]; 
	#else
	reg_SSC_STEP_10_0_b0					= lc_speedtable[fbck][rate][spdoft_ssc_step]; 
	reg_SSC_STEP_10_0_b1					= lc_speedtable[fbck][rate][spdoft_ssc_step+1];
	#endif
	reg_SSC_M_12_0_b0						= lc_speedtable[fbck][rate][spdoft_ssc_m];
	reg_SSC_M_12_0_b1						= lc_speedtable[fbck][rate][spdoft_ssc_m+1];

	reg_MCU_DEBUG0_LANE_7_0 = 0x39;
	
}
	
void loadspeedtbl_ringpll(uint8_t rate) {
	uint16_t temp;
	uint8_t fbck, ck1g, rate_no;
	
	fbck = fbck_sel_ring;
	reg_MCU_DEBUG0_LANE_7_0 = 0x36;
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
	cmx_G_INTPI_RING_7_0					= ring_speedtable[ck1g][fbck][rate][spdoft_intpi_ring]; 
	reg_INTPI_LCPLL_3_0 = cmx_G_INTPI_LCPLL_7_0;
	reg_INTPI_RING_3_0 = cmx_G_INTPI_RING_7_0;
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
	reg_SSC_STEP_125PPM_RING_3_0 = ring_speedtable[ck1g][fbck][rate][spdoft_ssc_step_125ppm_ring]; 
	#else
	reg_SSC_STEP_RING_10_0_b0				= ring_speedtable[ck1g][fbck][rate][spdoft_ssc_step_ring]; 
	reg_SSC_STEP_RING_10_0_b1				= ring_speedtable[ck1g][fbck][rate][spdoft_ssc_step_ring+1];
	#endif
	reg_SSC_M_RING_12_0_b0					= ring_speedtable[ck1g][fbck][rate][spdoft_ssc_m_ring];
	reg_SSC_M_RING_12_0_b1					= ring_speedtable[ck1g][fbck][rate][spdoft_ssc_m_ring+1];	

	reg_MCU_DEBUG0_LANE_7_0 = 0x39;
	
}

#ifdef _SATA_SERDES_BUILD
uint8_t get_gen_memory_index(uint8_t gen) {
    //grp0 0,1,2,4,13	
	//grp1 0,1,4,7
	uint8_t serdes_gen_tb0[] = { 0, 1, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0};
	uint8_t serdes_gen_tb1[] = { 0, 1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	if(cmx_ETHERNET_CFG_1_0==1 || cmx_ETHERNET_CFG_1_0==2) return serdes_gen_tb0[gen];
	else if(cmx_ETHERNET_CFG_1_0==3) return	serdes_gen_tb1[gen];
	else return 0;	
}
#endif

void loadspeedtbl_gen(void) {
	uint16_t temp;
	uint8_t gen;
	uint8_t	dec_ratio, peak;

	gen = gen_tx;
	
	#ifdef _SATA_SERDES_BUILD
	if(phy_mode==SERDES) { 
		gen = min(reg_PIN_PHY_GEN_TX_RD_LANE_3_0, cmx_PHY_GEN_MAX_3_0);
		gen = get_gen_memory_index(gen);
	}	
	#endif	
 	
	#ifdef _PCIE_USB_BUILD
	//if(pcie_usb_mode) 
	{ 
		if( gen_tx < 2) {						
			reg_TX_SEL_BITS_LANE = 0; reg_RX_SEL_BITS_LANE = 0;		
			#ifndef _28G_X2_ROM
			reg_TX_DEEMPH_FM_REG_LANE = 0;
			#endif
		}
		else {						
			reg_TX_SEL_BITS_LANE = 1; reg_RX_SEL_BITS_LANE = 1;
			#ifndef _28G_X2_ROM
			reg_TX_DEEMPH_FM_REG_LANE = 1;
			#endif
		}
	}
	#endif
	
	gen_pll_rate	 						= speedtable[gen][spdoft_pll_rate_sel_tx]; 
	if(gen_pll_rate>1 || phy_mode==SERDES) tx_pll_rate = 0;	
	else tx_pll_rate = gen_pll_rate;
	use_ring_pll 							= speedtable[gen][spdoft_tx_ck_sel_lane]; 

	/*reg_MCU_DEBUG0_LANE_7_0 = 0x33;
	reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
	reg_MCU_DEBUG2_LANE_7_0 = gen;
	reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
	reg_MCU_DEBUG4_LANE_7_0 = max_gen;
	reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
	reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
	reg_MCU_DEBUG7_LANE_7_0 = tx_pll_rate;
	reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;
*/
	//do first when PU_F1*=1
	if(speedtable[gen][spdoft_pu_f1p_s_o_lane]) reg_PU_F1P_S_O_LANE = 1;	
	if(speedtable[gen][spdoft_pu_f1p_d_o_lane]) reg_PU_F1P_D_O_LANE	= 1;
	if(speedtable[gen][spdoft_pu_f1p_d_e_lane]) reg_PU_F1P_D_E_LANE	= 1;
	if(phy_mode!=SATA /*|| PHY_STATUS!=ST_SPDCHG*/ || pwrsq_on) { 
		if(speedtable[gen][spdoft_pu_f1n_s_o_lane]) reg_PU_F1N_S_O_LANE = 1;	
		if(speedtable[gen][spdoft_pu_f1n_d_o_lane]) reg_PU_F1N_D_O_LANE = 1;
		if(speedtable[gen][spdoft_pu_f1n_s_e_lane]) reg_PU_F1N_S_E_LANE	= 1;
		if(speedtable[gen][spdoft_pu_f1n_d_e_lane])	reg_PU_F1N_D_E_LANE	= 1;
		if(speedtable[gen][spdoft_pu_f1p_s_e_lane]) reg_PU_F1P_S_E_LANE	= 1;
	}	
	
	//for SATA speed change
	reg_TX_SPEED_DIV_LANE_2_0		 		= speedtable[gen][spdoft_tx_speed_div_lane]; 
	reg_TXSPEED_DIV_LANE_2_0 				= speedtable[gen][spdoft_tx_speed_div_lane]; //duplicated for digital use

	reg_TX_EM_PRE_CTRL_LANE_3_0				= speedtable[gen][spdoft_tx_em_pre_ctrl_lane];

	reg_RX_SPEED_DIV_LANE_2_0		  		= speedtable[gen][spdoft_rx_speed_div_lane]; 
	reg_DTL_CLK_SPEEDUP_LANE_2_0  			= speedtable[gen][spdoft_dtl_clk_speedup_lane]; 
	reg_RX_REG0P9_SPEED_TRACK_DATA_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_data_lane];


	#ifdef _28G_X2
	switch(lnx_TXDCLK_NT_SEL_LANE_1_0) {
	case 0: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x24; break;
	case 1: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x84; break;
	case 2: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x2b; break;
	case 3: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x42; break;
	}
	if(reg_RX_SPEED_DIV_LANE_2_0&0x04) {
		switch(lnx_RXDCLK_NT_SEL_LANE_1_0) {
		case 0: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x40; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 1: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x82; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 2: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x5b; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 3: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x8a; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		}		
	}
	else {
		switch(lnx_RXDCLK_NT_SEL_LANE_1_0) {
		case 0: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x20; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 1: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x80; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 2: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x2b; reg_RXCLK_NT_FIX_DIV_EN_LANE = 0; break;
		case 3: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x42; reg_RXCLK_NT_FIX_DIV_EN_LANE = 0; break;
		}			
	}
	
	#endif	
	reg_RX_SELMUFF_LANE_2_0 				= speedtable[gen][spdoft_rx_selmuff_lane];
	dfe_dis									= speedtable[gen][spdoft_reg_dfe_dis_lane];	
	reg_DFE_TAP_SETTLE_SCALE_LANE_1_0       = speedtable[gen][spdoft_reg_dfe_tap_settle_scale_lane];          
	reg_FFE_DATA_RATE_LANE_3_0  			= speedtable[gen][spdoft_ffe_data_rate_lane];
	reg_DFE_EN_LANE = dfe_dis==0;  reg_DFE_DIS_LANE = dfe_dis;

	reg_TX_EM_CTRL_REG_EN_LANE				= speedtable[gen][spdoft_tx_em_ctrl_reg_en_lane];
	reg_TX_EM_CTRL_PIPE_SEL_LANE			= speedtable[gen][spdoft_tx_em_ctrl_pipe_sel_lane];	
	reg_ANA_TX_EM_PRE_EN_LANE				= speedtable[gen][spdoft_tx_em_pre_en_lane];
	if(phy_mode != PCIE)
		reg_ANA_TX_EM_PO_EN_LANE				= speedtable[gen][spdoft_tx_em_po_en_lane];
	reg_TX_EM_PO_CTRL_LANE_3_0				= speedtable[gen][spdoft_tx_em_po_ctrl_lane];	

	#ifdef _SATA_SERDES_BUILD
	if(tx_em_peak_en_g&(0x01<<gen))			reg_ANA_TX_EM_PEAK_EN_LANE = 1;
	else reg_ANA_TX_EM_PEAK_EN_LANE = 0;
	switch(gen) {	
	case 0: peak = lnx_TX_EM_PEAK_CTRL_G0_LANE_3_0;  break;
	case 1: peak = lnx_TX_EM_PEAK_CTRL_G1_LANE_3_0;  break;
	case 2: peak = lnx_TX_EM_PEAK_CTRL_G2_LANE_3_0;  break;
	case 3: peak = lnx_TX_EM_PEAK_CTRL_G3_LANE_3_0;  break;
	case 4: peak = lnx_TX_EM_PEAK_CTRL_G4_LANE_3_0;  break;			
	}
	reg_TX_EM_PEAK_CTRL_LANE_3_0 = peak;		
	#endif
	
	if(phy_mode!=SATA /*|| PHY_STATUS!=ST_SPDCHG*/ || pwrsq_on) {
	reg_TX_CK_SEL_LANE 						= use_ring_pll|(serdes_ring_lane_en & ring_lane_sel);
	reg_TX_CK_SEL_DIG_LANE 					= reg_TX_CK_SEL_LANE;	//duplicated for digital use	
	reg_TX_REG_SPEED_TRK_CLK_LANE_2_0	 	= speedtable[gen][spdoft_tx_reg_speed_trk_clk_lane];  
	reg_TX_REG_SPEED_TRK_DATA_LANE_2_0 	 	= speedtable[gen][spdoft_tx_reg_speed_trk_data_lane];

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
	if(rx_pll_rate>1 || phy_mode==SERDES) rx_pll_rate = 0;	
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

	#ifdef _28G_X2
	//UPHY14_TRX_ANAREG_TOP_152.BT.B0			= speedtable[gen][spdoft_rx_rxclk_25m_ctrl_lane];
	reg_RXCLK_25M_CTRL_LANE_1_0					= speedtable[gen][spdoft_rx_rxclk_25m_ctrl_lane];
	reg_RXCLK_25M_DIV1P5_EN_LANE            	= speedtable[gen][spdoft_rx_rxclk_25m_div1p5_en_lane];
	reg_RXCLK_25M_DIV_LANE_7_0 					= speedtable[gen][spdoft_rx_rxclk_25m_div_lane];	
	reg_RXCLK_25M_FIX_DIV_EN_LANE				= speedtable[gen][spdoft_rx_rxclk_25m_fix_div_en_lane];	
	//reg_DEMUX2_CLK_DLY_EN_LANE = 0;
	//reg_CLK_BKWD2_DIRECTION_LCPLL_LANE = 0;
	#endif	

	rxdll_temp_a_lane = speedtable[gen][spdoft_rxdll_temp_a_lane];
	rxdll_temp_b_lane = speedtable[gen][spdoft_rxdll_temp_b_lane];

	//*sequence need
	reg_PATH_DISABLE_EDGE_LANE              = speedtable[gen][spdoft_path_disable_edge_lane];	
	reg_ANA_RX_DFE_F1_POL_EN_D_LANE			= speedtable[gen][spdoft_dfe_f1_pol_en_d_lane];				
	reg_ANA_RX_DFE_F1_POL_EN_S_LANE         = speedtable[gen][spdoft_dfe_f1_pol_en_s_lane];
	reg_ANA_RX_DFE_F1_POL_D_LANE            = speedtable[gen][spdoft_dfe_f1_pol_d_lane]; 
	reg_ANA_RX_DFE_F1_POL_S_LANE            = speedtable[gen][spdoft_dfe_f1_pol_s_lane];  	
	reg_ANA_RX_DFE_F1_POL_EN_D_FORCE_LANE	= speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_en_d_force_lane];
	reg_ANA_RX_DFE_F1_POL_EN_S_FORCE_LANE   = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_en_s_force_lane];
	reg_ANA_RX_DFE_F1_POL_D_FORCE_LANE      = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_d_force_lane];   
	reg_ANA_RX_DFE_F1_POL_S_FORCE_LANE      = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_s_force_lane];   
	reg_DFE_FULL_RATE_MODE_LANE             = speedtable[gen][spdoft_reg_dfe_full_rate_mode_lane];    	

	//do last when PU_F1*=0
	reg_PU_F1N_S_O_LANE                     = speedtable[gen][spdoft_pu_f1n_s_o_lane];	
	reg_PU_F1N_D_O_LANE                     = speedtable[gen][spdoft_pu_f1n_d_o_lane];
	reg_PU_F1N_S_E_LANE	                    = speedtable[gen][spdoft_pu_f1n_s_e_lane];
	reg_PU_F1N_D_E_LANE	                    = speedtable[gen][spdoft_pu_f1n_d_e_lane];
	reg_PU_F1P_S_E_LANE	                    = speedtable[gen][spdoft_pu_f1p_s_e_lane];
	}

	reg_PU_F1P_S_O_LANE                     = speedtable[gen][spdoft_pu_f1p_s_o_lane];	
	reg_PU_F1P_D_O_LANE	                    = speedtable[gen][spdoft_pu_f1p_d_o_lane];
	reg_PU_F1P_D_E_LANE						= speedtable[gen][spdoft_pu_f1p_d_e_lane];
	
	#ifdef SUPPORT_APTA_TX_TRAIN
	// for APTA
	if(phy_mode == SAS && gen==4) reg_TX_TRAIN_IF_CLK_EN_LANE = 1;
	else reg_TX_TRAIN_IF_CLK_EN_LANE = 0;
	#endif
		
	DFE_TEST_1.BT.B3 = 0; //clear train indicators

	if(DFE_TEST_4.BT.B3 & (0x01<<gen))
		reg_EN_DFE_FLOATING_LANE = 1;
	else 
		reg_EN_DFE_FLOATING_LANE = 0;
		
	if(phy_mode <= SAS) {
		if(gen<3) {//6G	
			train_short_mode = 1;
			//lnx_GAIN_TRAIN_INIT_EN_LANE = 1; //same as default
			//lnx_CDRPHASE_OPT_EN_LANE = 1; //same as default
			//lnx_INI_PHASE_OFFSET_LANE_7_0 = 0; //0xa;
			lnx_GAIN_TRAIN_END_EN_LANE = 0; 	
			lnx_ADJUST_FFE_R2_LANE = 0;
			//lnx_RX_CAP_FINAL_ADJUST_EN_LANE = 0;
			lnx_RX_RXFFE_C_INI_LANE_3_0 = 12; 
			lnx_DFE_ISI_RES_ADAPT_EN_LANE = 0;
			//lnx_TRAIN_PH_CONTROL_MODE_LANE_1_0 = 0;
			//lnx_TRAIN_USE_D_LANE = 0;
			lnx_TRAIN_USE_S_LANE = 1;
			//lnx_SUMFTAP_EN_1_LANE = 1;			
			//lnx_RX_TRAIN_TIMER_LANE_15_0 = 19; 
		}
		else {
			train_short_mode = 0;
			//lnx_GAIN_TRAIN_INIT_EN_LANE = 1; //same as default
			//lnx_CDRPHASE_OPT_EN_LANE = 1; //same as default
			lnx_GAIN_TRAIN_END_EN_LANE = 1; 	
			lnx_ADJUST_FFE_R2_LANE = 1;
			//lnx_RX_CAP_FINAL_ADJUST_EN_LANE = 0;
			lnx_RX_RXFFE_C_INI_LANE_3_0 = 15; 
			lnx_DFE_ISI_RES_ADAPT_EN_LANE = 1;
			//lnx_TRAIN_PH_CONTROL_MODE_LANE_1_0 = 0;
			//lnx_TRAIN_USE_D_LANE = 0;
			lnx_TRAIN_USE_S_LANE = 0;
			//lnx_SUMFTAP_EN_1_LANE = 1;						
			//lnx_RX_TRAIN_TIMER_LANE_15_0 = 499; 
		}	
	}	

	if(TRAIN_CONTROL_17.BT.B3 & (0x01<<gen)) bypass_ctle_train_on = 1;
	else  bypass_ctle_train_on = 0;
	
	reg_MCU_DEBUG0_LANE_7_0 = 0x39;
	
}

void update_ssc_sq_thr(void) {
	
	uint16_t temp;
	uint8_t gen;
	
	gen = gen_tx;
	#ifdef _SATA_SERDES_BUILD
	if(phy_mode==SERDES) { 
		gen = min(reg_PIN_PHY_GEN_TX_RD_LANE_3_0, cmx_PHY_GEN_MAX_3_0);
		gen = get_gen_memory_index(gen);
	}	
	#endif

	#ifdef SUPPORT_CMD_IF	
	if(cmx_TX_SSC_CTRL_SEL) {
		reg_SSC_EN_FM_REG_LANE = 1;
		if(train_save_tb[gen].ssc_en) 
			reg_SSC_EN_LANE = 1;		
		else reg_SSC_EN_LANE = 0;
	
		if(use_ring_pll) {
			reg_SSC_DSPREAD_TX_RING					=  tx_tb[gen].ssc_dspread;
			reg_SSC_AMP_RING_6_0					=  tx_tb[gen].ssc_amp;		

		}
		else {	
			reg_SSC_DSPREAD_TX 						=  tx_tb[gen].ssc_dspread;
			reg_SSC_AMP_6_0							=  tx_tb[gen].ssc_amp;

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
}
	
void loadSpeedtbl(void) {	
	
	loadspeedtbl_gen();
		
	#ifdef _SATA_SERDES_BUILD
	if( mcuid== master_mcu ) {
	
		if(use_ring_pll) {
			if( tx_pll_rate != PLL_RATE_SEL_RING )
				loadspeedtbl_ringpll(tx_pll_rate);
		}	
		else {
			if( tx_pll_rate != PLL_RATE_SEL )
				loadspeedtbl_pll(tx_pll_rate);				
		}
		 	
	} 
	#endif
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




