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

  new_gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_3_0; new_gen_tx = min(new_gen_tx, max_gen);
  new_gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_3_0; new_gen_rx = min(new_gen_rx, max_gen);
  
  if(new_gen_tx != gen_tx || new_gen_rx != gen_rx || ( reg_PWRON_SEQ && phy_mode!=SERDES ) ){

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

	if(((!ring_pll_enabled || !lc_pll_used) || reg_PWRON_SEQ)  && !no_pllspdchg && !force_exit_cal) { 
		if(mcuid==master_mcu) {			
			pll_clk_ready_all_0();			
		}
		else{		
			while(reg_ANA_PLL_CLK_READY_PRE0==1 || reg_ANA_PLL_CLK_READY_RING==1);
		}
	}

    DTL_DTX_DFE_clkoff_reset_1();

	loadspeedtbl_gen();

	reg_MCU_DEBUG0_LANE_7_0 = 0x34;
	reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
	reg_MCU_DEBUG2_LANE_7_0 = gen_rx;
	reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
	reg_MCU_DEBUG4_LANE_7_0 = max_gen;
	reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
	reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
	reg_MCU_DEBUG7_LANE_7_0 = tx_pll_rate;
	reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;
	
	if( mcuid==master_mcu ) {			
		if( reg_PWRON_SEQ && !no_pllspdchg && !force_exit_cal) {
			if(!ring_pll_enabled ) loadspeedtbl_pll(tx_pll_rate);
				
			if( lc_pll_used ) {
				if(use_ring_pll) {PLL_RATE_SEL_RING = tx_pll_rate; PLL_RATE_SEL = !tx_pll_rate; }
				else { PLL_RATE_SEL = tx_pll_rate; PLL_RATE_SEL_RING = !tx_pll_rate; }
			}
			else { //lc never used for PCIe
				PLL_RATE_SEL_RING = tx_pll_rate; PLL_RATE_SEL = 1; //TODO  
			}
			
			/*if(lc_pll_used)*/ spdchg_pll_fast_cal();		
		}
		else 
		{
		
			if(!ring_pll_enabled && !no_pllspdchg ) { 				
					loadspeedtbl_pll(tx_pll_rate);
					spdchg_pll_fast_cal();				
			}		
		}
		reg_SHRTR = 0; //test
	}
	
	if( ring_lane_sel ) 	
	{
		if( reg_PWRON_SEQ && !no_pllspdchg && !force_exit_cal) {
			if(!lc_pll_used ) loadspeedtbl_ringpll(tx_pll_rate);
			if(ring_pll_enabled) ring_pll_fast_cal();
		}
		else {
			if( !lc_pll_used) { 
				loadspeedtbl_ringpll(tx_pll_rate);
				ring_pll_fast_cal();		
			}
		}
	}		
	

	check_pll_clk_ready();

	load_cal_data_all();
	
  }
   
	if( phy_mode==PCIE ) { //only pcie need align because of one mac
		txlane_align();
	}

  DTL_DTX_DFE_clkoff_reset_0();
	
  eom_align_cal();

  reg_PWRON_SEQ = 0;
  
  delay(T_10us);

  reg_RST_FRAME_SYNC_DET_CLK_LANE = 1;
  delay(Tus);
  reg_RST_FRAME_SYNC_DET_CLK_LANE = 0;
  
  PHY_STATUS_INT = IDLE;
  pre_gen_pll_rate = gen_pll_rate;
  reg_PIN_PLL_READY_RX_LANE = 1;
  reg_PIN_PLL_READY_TX_LANE = 1;
	
  PHY_STATUS = ST_PLLREADY;
  
}

#if 0 //timing performance degraded
void loadspeedtbl_pll(uint8_t rate) {
	uint8_t *ptr;
	uint8_t w_val, r_val, i;	
	uint8_t fbck;
	uint16_t temp;

	reg_MCU_DEBUG0_LANE_7_0 = 0x35;
	temp = 0;
	fbck = fbck_sel;		
	
	for(i=spdoft_pll_reg_sel; i<lc_speed_size; i++) {
	
		reg_MCU_DEBUG1_LANE_7_0 = i;
		w_val = lc_speedtable[fbck][rate][i];  reg_MCU_DEBUG2_LANE_7_0 = w_val;
		if(i==spdoft_pll_rate_sel && phy_mode==SERDES) 
			w_val = 0;
		if(i==spdoft_div_1g_fbck || i==(spdoft_div_1g_fbck+1)) { 
			if(reg_RING_REF_DIV_SEL==0) continue; 
		}		
		if(i==spdoft_fbdiv_cal || i==(spdoft_fbdiv_cal+1) ) {
			continue;
		}
		if(i==spdoft_speed_thresh) { temp = (uint16_t)w_val; continue;}
		if(i==(spdoft_speed_thresh+1)) { temp |= (w_val<<8); continue; }
		
		w_val <<= lcpll_spdtbl_ana[i].lo; 
		ptr = (__xdata uint8_t*)(lcpll_spdtbl_ana[i].addr);  MCU_DEBUG_LANE.VAL = (uint32_t)ptr;
		r_val = *ptr;  r_val &= lcpll_spdtbl_ana[i].mask; w_val |= r_val; reg_MCU_DEBUG3_LANE_7_0 = w_val;
		*ptr =  w_val; 		
		
	}
	
	temp <<= FBC_RATIO;
	cmx_SPEED_THRESH_15_0 = temp;
	
}

void loadspeedtbl_ringpll(uint8_t rate) {
	uint8_t *ptr;
	uint8_t w_val, r_val, i;	
	uint8_t fbck, ck1g;
	uint16_t temp;

	reg_MCU_DEBUG0_LANE_7_0 = 0x36;
	temp = 0;
	fbck = fbck_sel_ring;	
	ck1g = ring_use_250m;
	
	for(i=spdoft_pll_rate_sel_ring; i<ring_speed_size; i++) {
	
		reg_MCU_DEBUG1_LANE_7_0 = i;
		w_val = ring_speedtable[ck1g][fbck][rate][i]; reg_MCU_DEBUG2_LANE_7_0 = w_val;
		if(i==spdoft_pll_rate_sel_ring && phy_mode==SERDES) 
			w_val = 0;
		if(i==spdoft_pll_fbdiv_ring_fbck || i==(spdoft_pll_fbdiv_ring_fbck+1) 
		  || i==spdoft_init_txfoffs_ring_fbck || i==(spdoft_init_txfoffs_ring_fbck+1) ) { 
			if(reg_RING_REF_DIV_SEL==0) continue; 			
		}		
		if(i==spdoft_fbdiv_cal_ring || i==(spdoft_fbdiv_cal_ring+1)) {
			continue;
		}
		
		if(i==spdoft_pll_speed_thresh_ring) { temp = (uint16_t)w_val; continue;}
		if(i==(spdoft_pll_speed_thresh_ring+1)) { temp |= (w_val<<8); continue; }
		
		w_val <<= ringpll_spdtbl_ana[i].lo; 
		ptr = (__xdata uint8_t*)(ringpll_spdtbl_ana[i].addr);    MCU_DEBUG_LANE.VAL = (uint32_t)ptr;
		r_val = *ptr;  r_val &= ringpll_spdtbl_ana[i].mask; w_val |= r_val;  reg_MCU_DEBUG3_LANE_7_0 = w_val;
		*ptr =  w_val; 		
		
	}
	
	temp <<= FBC_RATIO;
	cmx_PLL_SPEED_THRESH_RING_15_0 = temp;
	
}

void loadspeedtbl_gen(void) {
	uint8_t *ptr;
	uint8_t gen, w_val, r_val, i;

	//reg_MCU_DEBUG0_LANE_7_0 = 0x89;
	//reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
	//reg_MCU_DEBUG2_LANE_7_0 = gen_rx;
	//reg_MCU_DEBUG4_LANE_7_0 = max_gen;
	gen = gen_tx;
	
	for(i=spdoft_pll_rate_sel_tx; i<gen_speed_size; i++) {
	
		reg_MCU_DEBUG1_LANE_7_0 = i;
		if(i>=tx_speed_size) 
			gen = gen_rx;			
		
		w_val = speedtable[gen][i]; 		reg_MCU_DEBUG2_LANE_7_0 = w_val;
		if(i==spdoft_pll_rate_sel_tx) { 
			if(w_val>1 || phy_mode==SERDES ) tx_pll_rate = 0;
			else tx_pll_rate = w_val; 
			continue;
		}		
		if(i==spdoft_pll_rate_sel_rx) { 
			if(w_val>1 || phy_mode==SERDES) rx_pll_rate = 0;
			else rx_pll_rate = w_val; 
			continue;
		}		
		if(i==spdoft_tx_ck_sel_lane) {
			use_ring_pll = w_val;
		}
		if(i==spdoft_reg_dfe_dis_lane) {
			dfe_dis = w_val;
		}
		#ifdef _28G_R2P0
		if(i==spdoft_dll_freq_sel_lane) {
			if(w_val&0x04) 	reg_DLL_FREQ_SEL_LANE_2 = 1;
			else 			reg_DLL_FREQ_SEL_LANE_2 = 0;
		}
		if(i==spdoft_eom_dll_freq_sel_lane) {
			if(w_val&0x04)	reg_EOM_DLL_FREQ_SEL_LANE_2 = 1;
			else 			reg_EOM_DLL_FREQ_SEL_LANE_2 = 0;		
		}
		#endif
		
		w_val <<= gen_spdtbl_ana[i].lo; 
		ptr = (__xdata uint8_t*)(gen_spdtbl_ana[i].addr);   MCU_DEBUG_LANE.VAL = (uint32_t)ptr;
		r_val = *ptr;  r_val &= gen_spdtbl_ana[i].mask; w_val |= r_val;  reg_MCU_DEBUG3_LANE_7_0 = w_val;
		*ptr =  w_val; 		
						
	 }
	
}

#else
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
	
	reg_LCCAP_USB							= lc_speedtable[fbck][rate][spdoft_lccap_usb];
	reg_SSC_STEP_10_0_b0					= lc_speedtable[fbck][rate][spdoft_ssc_step]; 
	reg_SSC_STEP_10_0_b1					= lc_speedtable[fbck][rate][spdoft_ssc_step+1];
	reg_SSC_M_12_0_b0						= lc_speedtable[fbck][rate][spdoft_ssc_m];
	reg_SSC_M_12_0_b1						= lc_speedtable[fbck][rate][spdoft_ssc_m+1];
	
}
	
void loadspeedtbl_ringpll(uint8_t rate) {
	uint16_t temp;
	uint8_t fbck, ck1g, rate_no;;
	
    if(BYPASS_SPDTBL_LOAD)	return;
	
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

	reg_SSC_STEP_RING_10_0_b0				= ring_speedtable[ck1g][fbck][rate][spdoft_ssc_step_ring]; 
	reg_SSC_STEP_RING_10_0_b1				= ring_speedtable[ck1g][fbck][rate][spdoft_ssc_step_ring+1];
	reg_SSC_M_RING_12_0_b0					= ring_speedtable[ck1g][fbck][rate][spdoft_ssc_m_ring];
	reg_SSC_M_RING_12_0_b1					= ring_speedtable[ck1g][fbck][rate][spdoft_ssc_m_ring+1];	
}


void loadspeedtbl_gen(void) {
	uint16_t temp;
	uint8_t gen;
	
	if(BYPASS_SPDTBL_LOAD)	return;
	
	gen = gen_tx;

	gen_pll_rate	 						= speedtable[gen][spdoft_pll_rate_sel_tx]; 
	if(gen_pll_rate>1 || phy_mode==SERDES) tx_pll_rate = 0;	
	else tx_pll_rate = gen_pll_rate;
	use_ring_pll 							= speedtable[gen][spdoft_tx_ck_sel_lane]; 
	reg_TX_CK_SEL_LANE = use_ring_pll|(serdes_ring_lane_en & ring_lane_sel);
	reg_TX_CK_SEL_DIG_LANE = reg_TX_CK_SEL_LANE;	//duplicated for digital use
	
	reg_TX_SPEED_DIV_LANE_2_0		 		= speedtable[gen][spdoft_tx_speed_div_lane]; 
	reg_TXSPEED_DIV_LANE_2_0 				= speedtable[gen][spdoft_tx_speed_div_lane]; //duplicated for digital use
	reg_TX_REG_SPEED_TRK_CLK_LANE_2_0	 	= speedtable[gen][spdoft_tx_reg_speed_trk_clk_lane];  
	reg_TX_REG_SPEED_TRK_DATA_LANE_2_0 	 	= speedtable[gen][spdoft_tx_reg_speed_trk_data_lane];
	reg_TX_EM_CTRL_REG_EN_LANE				= speedtable[gen][spdoft_tx_em_ctrl_reg_en_lane];
	reg_TX_EM_CTRL_PIPE_SEL_LANE			= speedtable[gen][spdoft_tx_em_ctrl_pipe_sel_lane];	
	reg_ANA_TX_EM_PRE_EN_LANE				= speedtable[gen][spdoft_tx_em_pre_en_lane];
	reg_TX_EM_PRE_CTRL_LANE_3_0				= speedtable[gen][spdoft_tx_em_pre_ctrl_lane];
	reg_ANA_TX_EM_PO_EN_LANE				= speedtable[gen][spdoft_tx_em_po_en_lane];
	reg_TX_EM_PO_CTRL_LANE_3_0				= speedtable[gen][spdoft_tx_em_po_ctrl_lane];	
	reg_SLEWRATE_EN_LANE_1_0				= speedtable[gen][spdoft_slewrate_en_lane];
	reg_SLEWCTRL1_LANE_1_0					= speedtable[gen][spdoft_slewctrl1_lane];
	reg_SLEWCTRL0_LANE_1_0					= speedtable[gen][spdoft_slewctrl0_lane];
	reg_TX_TRAIN_PAT_SEL_LANE_1_0			= speedtable[gen][spdoft_tx_train_pat_sel_lane];
	reg_TRAIN_PAT_NUM_LANE_8_0_b0			= (uint8_t)speedtable[gen][spdoft_train_pat_num_lane];
	reg_TRAIN_PAT_NUM_LANE_8_0_b1			= (uint8_t)(speedtable[gen][spdoft_train_pat_num_lane+1]>>8);
	reg_TX_TRAIN_PAT_TOGGLE_LANE			= speedtable[gen][spdoft_tx_train_pat_toggle_lane];
	reg_PACKET_SYNC_DIS_LANE				= speedtable[gen][spdoft_packet_sync_dis_lane];
	reg_SYNC_DET_DIS_LANE					= speedtable[gen][spdoft_sync_det_dis_lane];

	gen = gen_rx;
	
	rx_pll_rate	 							= speedtable[gen][spdoft_pll_rate_sel_rx]; 
	if(rx_pll_rate>1 || phy_mode==SERDES) rx_pll_rate = 0;	
	reg_RX_CK_SEL_LANE 						= speedtable[gen][spdoft_rx_ck_sel_lane] | (serdes_ring_lane_en & ring_lane_sel);  
	reg_RX_SPEED_DIV_LANE_2_0		  		= speedtable[gen][spdoft_rx_speed_div_lane]; 
	reg_DTL_CLK_SPEEDUP_LANE_2_0  			= speedtable[gen][spdoft_dtl_clk_speedup_lane]; 
	reg_INTPI_LANE_3_0			  			= speedtable[gen][spdoft_intpi_lane]; 
	reg_INTPR_LANE_1_0				  		= speedtable[gen][spdoft_intpr_lane];
	reg_DLL_FREQ_SEL_LANE_1_0	  			= speedtable[gen][spdoft_dll_freq_sel_lane];
	reg_EOM_DLL_FREQ_SEL_LANE_1_0  			= speedtable[gen][spdoft_eom_dll_freq_sel_lane];
	reg_ALIGN90_8G_EN_LANE		 			= speedtable[gen][spdoft_align90_8g_en_lane];	
	reg_RX_REG0P9_SPEED_TRACK_CLK_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_clk_lane];
	reg_RX_REG0P9_SPEED_TRACK_CLK_HALF_LANE	= speedtable[gen][spdoft_rx_reg0p9_speed_track_clk_half_lane];
	reg_RX_REG0P9_SPEED_TRACK_DATA_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_data_lane];
	reg_RX_SELMUFI_LANE_2_0 				= speedtable[gen][spdoft_rx_selmufi_lane];
	reg_RX_SELMUFF_LANE_2_0 				= speedtable[gen][spdoft_rx_selmuff_lane];
	reg_REG_SELMUPI_LANE_3_0 				= speedtable[gen][spdoft_reg_selmupi_lane];
	reg_REG_SELMUPF_LANE_3_0 				= speedtable[gen][spdoft_reg_selmupf_lane];
	reg_DTL_CLK_MODE_LANE_1_0 				= speedtable[gen][spdoft_dtl_clk_mode_lane];
	reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b0 	= speedtable[gen][spdoft_rx_foffset_extra_m_lane];
	reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b1 	= speedtable[gen][spdoft_rx_foffset_extra_m_lane+1];	
	reg_INIT_RXFOFFS_LANE_9_0_b0			= speedtable[gen][spdoft_init_rxfoffs_lane];	
	reg_INIT_RXFOFFS_LANE_9_0_b1			= speedtable[gen][spdoft_init_rxfoffs_lane+1];	
	reg_PU_F1P_D_E_LANE						= speedtable[gen][spdoft_pu_f1p_d_e_lane];
	reg_PU_F1N_D_E_LANE	                    = speedtable[gen][spdoft_pu_f1n_d_e_lane];
	reg_PU_F1P_S_E_LANE	                    = speedtable[gen][spdoft_pu_f1p_s_e_lane];
	reg_PU_F1N_S_E_LANE	                    = speedtable[gen][spdoft_pu_f1n_s_e_lane];
	reg_PU_F1P_D_O_LANE	                    = speedtable[gen][spdoft_pu_f1p_d_o_lane];
	reg_PU_F1N_D_O_LANE                     = speedtable[gen][spdoft_pu_f1n_d_o_lane];
	reg_PU_F1P_S_O_LANE                     = speedtable[gen][spdoft_pu_f1p_s_o_lane];	
	reg_PU_F1N_S_O_LANE                     = speedtable[gen][spdoft_pu_f1n_s_o_lane];	
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
	dfe_dis									= speedtable[gen][spdoft_reg_dfe_dis_lane];	
	reg_DFE_TAP_SETTLE_SCALE_LANE_1_0       = speedtable[gen][spdoft_reg_dfe_tap_settle_scale_lane];          
	reg_FFE_DATA_RATE_LANE_3_0  			= speedtable[gen][spdoft_ffe_data_rate_lane];

	reg_DFE_EN_LANE = dfe_dis==0;  reg_DFE_DIS_LANE = dfe_dis;
//rxdll_temp_a_lane
//rxdll_temp_b_lane
}

#endif

void loadSpeedtbl(void) {	
	
	loadspeedtbl_gen();
		
	if( mcuid== master_mcu ) {
		master_sync_request();		
	
		if(use_ring_pll) {
			if( tx_pll_rate != PLL_RATE_SEL_RING )
				loadspeedtbl_ringpll(tx_pll_rate);
		}	
		else {
			if( tx_pll_rate != PLL_RATE_SEL )
				loadspeedtbl_pll(tx_pll_rate);				
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
	if(phy_mode==SERDES) rate = gen_pll_rate;
	else rate = PLL_RATE_SEL_RING;

	reg_PLL_FBDIV_RING_7_0 				= ring_speedtable[ck1g][fbck][rate][spdoft_fbdiv_cal_ring];
	reg_PLL_FBDIV_RING_9_8 				= ring_speedtable[ck1g][fbck][rate][spdoft_fbdiv_cal_ring+1];
	reg_ANA_FBCK_SEL_RING = 0;

}




