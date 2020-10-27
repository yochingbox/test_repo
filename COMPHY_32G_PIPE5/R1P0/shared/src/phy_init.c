/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file phy_init.c
* \purpose initialize phy
* \History
*	10/15/2015 Heejeong Ryu		Initial 
*/

#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK1
#pragma constseg BANK1
#endif

//--------------------------------------
/**
 * \module clear_xdata (before MCU_INIT_DONE)
 * 
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note   
 *   clear all xdata
*/
void clear_xdata(void) BANKING_CTRL {

	//uint8_t *ptr, i;
	
	reg_MCU_DEBUG0_LANE_7_0 = lnx_END_XDAT_LANE_7_0;
	while(lnx_END_XDAT_LANE_7_0!=0xaa || cmx_END_XDAT_CMN_7_0!=0xaa);
	reg_MCU_DEBUG0_LANE_7_0 = lnx_END_XDAT_LANE_7_0;
	
	if(master_mcu > MAX_MCU_ID) master_mcu = MCU_LANE0;
	
	// TODO: some delay?? don't understand why this needed.
	//reg_MCU_DEBUG7_LANE_7_0 = 0xa5;
	//reg_MCU_DEBUG6_LANE_7_0 = mcuid;
	/* clear by xdat_lane download
	//clean xdata
	if( BYPASS_XDAT_INIT == 0 ) 
	{
		//reg_MCU_DEBUG7_LANE_7_0 = 0x55;
		ptr = (__xdata uint8_t *)(XDAT_BASE);
		while(ptr < (XDAT_LANE_BASE + MAXXDATLANE) ) {
			*ptr = 0;
			ptr++;
		}
	}*/
	
	/* clear by xdat_cmn download
	if(mcuid== master_mcu) {
		if( BYPASS_XDAT_INIT == 0 ) {
			//reg_MCU_DEBUG7_LANE_7_0 = 0x58;
			ptr = (__xdata uint8_t *)(XDAT_CMN_BASE);
			while(ptr < (XDAT_CMN_BASE + MAXXDATCMN) ) {
				*ptr = 0;
				ptr++;
			}
		}
	} */
	 
	//SYNC_STATUS_LANE = IDLE;
	sync_status_lane(IDLE);
	if(mcuid== master_mcu) {
		//SYNC_REQUEST_LANE = 0;
		
		//-------------------
		//indicate to let SOC config registers.
		cmx_MCU_INIT_DONE = 1;  // Used in simulation
		//reg_SET_MCU_INT_LANE0 = 1;
	}
	
	sync_check = 0;
	rx_pll_rate = 0;
	tx_pll_rate = 0;
	gen_pll_rate = 0;
	pre_gen_pll_rate = 0xff;
	use_ring_pll = 0;
	ring_pll_enabled = 0;
	ring_use_250m = 0;
	force_exit_cal = 0;
	adapt_slicer_en = 0;
	adapt_data_en = 0;
	no_pllspdchg = 0;
	lc_pll_used = 0;
	int_pu_rx = 0;
	int_pu_tx = 0;
	tx_status_pcie_mode = 0;
	tx_pipe4_en = 0;
	gain_train_with_c = 0;
	tx_init_bit = 0;
	//reg_MCU_DEBUG7_LANE_7_0 = 0x88;
	PLL_RATE_SEL = 0xff;
	PLL_RATE_SEL_RING = 0xff;	// TODO - should this be defined in xdat_lane.h?
	invalidate_pll_rate = 0;
}

//--------------------------------------
/**
 * \module init_xdata (after MCU_INIT_DONE)
 * 
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note 
 *   set xdata initial values
 *   set firmware version
 *   set MCU_INIT_DONE at the end 
 *    
*/
void init_xdata(void) BANKING_CTRL {

	if(master_mcu > MAX_MCU_ID) master_mcu = MCU_LANE0;
	
	// Initialize global pcie_usb_mode earlier here since it is used in this function.
	// (Was initialized in init_irq, which is too late)
	pcie_usb_mode =  ( ( phy_mode == PCIE ) || ( phy_mode == USB ) ) ? 1 : 0;
	
	//if(cmx_FAST_POWER_ON_EN) CONTROL_CONFIG0.BT.B2 |= 0x30; // bypass delay_time, bypass_poweron_delay 
	if(FAST_POWER_ON_EN) CONTROL_CONFIG0.BT.B2 |= 0x30; // bypass delay_time, bypass_poweron_delay 
	reg_SET_MCU_COMMAND_LANE0_31_0_b0 |= CONTROL_CONFIG0.BT.B2;
	reg_SET_MCU_COMMAND_LANE1_31_0_b0 |= CONTROL_CONFIG0.BT.B2;
	#ifdef _RPLL_X4
	reg_SET_MCU_COMMAND_LANE2_31_0_b0 |= CONTROL_CONFIG0.BT.B2;
	reg_SET_MCU_COMMAND_LANE3_31_0_b0 |= CONTROL_CONFIG0.BT.B2;
	#endif
	
	force_exit_cal = FORCE_EXIT_CAL | cmx_EXT_FORCE_CAL_DONE;
	
	// -- set xdat_cmn default
	if(mcuid== master_mcu) {
	pllcal_first_time = 1;
	//cmx_SPDCHG_FAST_PLL_MODE_1_0 = 0 ;
	//cmx_FAST_PLL_MODE = 0;
	//CONTROL_CONFIG0.BT.B1 = 0; //xx_cal_ext_en =0
	//CONTROL_CONFIG0.BT.B2 = 0;
	
/*	move to midas
	cmx_VCOAMP_VTH_NORMAL_7_0 = 12;
	cmx_VCOAMP_VTH_AMP_7_0 = 15;
	cmx_VCOAMP_VTH_FREQ_7_0 = 14;
	
	if( cmx_CAL_SQ_THRESH_IN_7_0 == 0) {
		cmx_CAL_SQ_THRESH_IN_7_0 = 6;
		cmx_CAL_PROC_SUBSS_7_0 = 0x13;
		cmx_CAL_PROC_SS2TT_7_0 = 0x10;
		cmx_CAL_PROC_TT2FF_7_0 = 0x15;
	}
*/
	//cmx_TSHRTR_7_0 = 1;
	//cmx_THOLD_SEL2_7_0 = 0;
	//cmx_FBC_RATIO_1_0 = 0;
	
	cmx_FW_MAJOR_VER_7_0 = MAJOR_VER;
	cmx_FW_MINOR_VER_7_0 = MINOR_VER;
	cmx_FW_PATCH_VER_7_0 = PATCH_VER;
	cmx_FW_BUILD_VER_7_0 = BUILD_VER;
	reg_MCU_DEBUG0_LANE_7_0 = 0x60;
	reg_MCU_DEBUG1_LANE_7_0 = MAJOR_VER;
	reg_MCU_DEBUG2_LANE_7_0 = MINOR_VER;
	reg_MCU_DEBUG3_LANE_7_0 = PATCH_VER;
	reg_MCU_DEBUG4_LANE_7_0 = BUILD_VER;
	
	#ifdef _PCIE_USB_BUILD
	if(phy_mode == PCIE) PIPE4_EN = 1;	//set default for PCIe mode
	#endif
	
	#ifdef _SATA_SERDES_BUILD
	if(phy_mode == SATA) {
		// disable cont_cal
		//PLL_TEMP_CAL_CONT_EN        1
		//RXDCC_DLL_CAL_CONT_EN       1
		//TXDETECT_CAL_CONT_EN        0
		//RXDLL_CAL_CONT_EN           1
		//EOM_DLL_CAL_CONT_EN         0
		//ALIGN90_CAL_CONT_EN         0
		//PLLDCC_CAL_CONT_EN          1
		//PLLAMP_CAL_CONT_EN          1
		//TXDCC_PDIV_CAL_CONT_EN      0
		//TXDCC_CAL_CONT_EN           0
		//RXDCC_EOM_CAL_CONT_EN       0
		//RXDCC_DATA_CAL_CONT_EN      0
		//RXSMPLR_VDD_CAL_CONT_EN     0
		//RXEOMCLK_VDD_CAL_CONT_EN    0
		//RXDCLK_VDD_CAL_CONT_EN      0
		//TXPRE_VDD_CAL_CONT_EN       0
		//TXDATA_VDD_CAL_CONT_EN      0
		//TXCLK_VDD_CAL_CONT_EN       0
		CONTROL_CONFIG2.BT.B2 = 0x32;
		CONTROL_CONFIG2.BT.B3 = 0;
	}
	#endif //_SATA_SERDES_BUILD
	
	//SYNC_LINE_HOLD = SYNC_IDLE;
	
	}
	
	// -- set xdat_lane default
	lnx_TX_TRAIN_FRAME_DET_TIMER_ENABLE_LANE = 1;
	lnx_TX_TRAIN_TIMER_ENABLE_LANE = 1;
	lnx_RX_TRAIN_TIMER_ENABLE_LANE = 1;
	lnx_TX_TRAIN_STATUS_DET_TIMER_ENABLE_LANE = 1;
	
	//lnx_TX_TRAIN_FRAME_DET_TIMER_LANE_7_0 = 0x01;
	//lnx_TX_TRAIN_STATUS_DET_TIMER_LANE_7_0 = 0x03;
	//lnx_RX_TRAIN_TIMER_LANE_15_0 = 1000; //0x13;
	//lnx_TRX_TRAIN_TIMER_LANE_15_0 = 1000; //0x1f3;
	
	//lnx_DFE_FORCE_ZERO_LANE_7_0 = 0;
	//lnx_TX_TRAIN_P2P_HOLD_LANE = 1;
	
	
	//lnx_CDRPHASE_OPT_EN_LANE = 1;
	//lnx_THRE_EXCELLENT_LANE_5_0 = 63;
	//lnx_THRE_GOOD_LANE_4_0 = 2;
	//lnx_THRE_POOR_LANE_2_0 = 1;
	////lnx_EYE_CHECK_BYPASS_LANE = 0; //default=0
	//lnx_SATURATE_DISABLE_LANE = 1;
	
	//tag_DFE_ADAPT_NORMAL_SOFT_CONT_EN = 0; //default=dfe hardware cont
	
	//lnx_PHASE_ADAPT_TEMP_THR_LANE_7_0 = 12;
	//lnx_EDGE_SAMPLER_NORMAL_EN_LANE = 0;
	
	cont_cal_on = 0;
	//ctrl_trx_train_pass = 0;
	cal_start_on = 0;
	dfe_phase_save_en = 0;
	
	if(pcie_usb_mode)
	{
		#ifdef _PCIE_USB_BUILD
		tx_adapt_g0_en = 0;
		tx_adapt_gn1_en = 1;
		tx_adapt_g1_en = 1;
		lnx_TRX_TRAIN_TIMER_LANE_15_0 = 23;
		#endif
	}
	else {
		#ifdef _SATA_SERDES_BUILD
		tx_adapt_g0_en = 1;
		tx_adapt_gn1_en = 1;
		tx_adapt_g1_en = 0;
		#endif
	}
	tx_sweep_preset_en = 0;
	
	//ana_tsen_adc_rdy_rd = 0;
	
	pre_sq_rd = 1;
	
	tx_train_p2p_hold = lnx_TX_TRAIN_P2P_HOLD_LANE;
	
	//train_status_reset(); //remove for sim
	
	cmx_PLL_CAL_DONE = 1;
	#ifdef _LANE_RPLL
	lnx_PLL_CAL_RING_DONE_LANE = 1;
	#else // CMN_RPLL
	cmx_PLL_CAL_RING_DONE = 1;
	#endif
	
	lnx_RPTA_F0D_OFFSET_LANE_7_0 = 6;
	
	#ifdef _SATA_SERDES_BUILD
	tx_sel_bit = reg_TX_SEL_BITS_LANE;
	rx_sel_bit = reg_RX_SEL_BITS_LANE;
	#endif
}

void init_irq(void) BANKING_CTRL {

	//clear int req
	reg_PIN_TX_TRAIN_ENABLE_ISR_LANE = 0;
	reg_PIN_RX_TRAIN_ENABLE_ISR_LANE = 0;
	reg_FRAME_LOCK_ISR_LANE = 0;
	reg_REMOTE_CTRL_VALID_ISR_LANE = 0;
	reg_INT_RX_INIT_RISE_ISR_LANE = 0;
	SPD_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0x0;
	PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0;
	PM_CTRL_INTERRUPT_REG1_LANE.BT.B2 = 0;
	MCU_IRQ_LANE.BT.B0 = 0;
	MEM_IRQ.BT.B0 = 0;
	
	//mask irq lane
	//RX_LANE_INTERRUPT_MASK.BT.B3 = 0x20;
	
	//Enable CPU IRQ
	if((phy_mode == PCIE) || (phy_mode == USB)) 
	{  // _PCIE_USB
		#ifdef _PCIE_USB_BUILD
		reg_DET_BYPASS_LANE = 1;
	
		//PM_CTRL_INTERRUPT_REG2.BT.B2 = 0x38; //txdetrx_en_chg|beacon_tx_en_chg|tx_idle_hiz
		PM_CTRL_INTERRUPT_REG2.BT.B2 = 0x3c; //txdetrx_en_chg|beacon_tx_en_chg
		PM_CTRL_INTERRUPT_REG2.BT.B3 = 0xe5; //power_state_valid|rx_int|regclk_dis
		reg_INT_TXDETRX_EN_CHG_MASK_LANE =0;
		reg_INT_BEACON_TX_EN_CHG_MASK_LANE = 0;
		#endif //_PCIE_USB_BUILD
	}
	else 
	{  //sas_sata
		#ifdef 	_SATA_SERDES_BUILD
		PM_CTRL_INTERRUPT_REG2.BT.B2 = 0xfc;
		PM_CTRL_INTERRUPT_REG2.BT.B3 = 0x11; // PU_RX|PU_TX|PU_PLL|rx_init|regclk_dis|PU_IVREF
		if(mcuid== master_mcu) reg_INT_PU_PLL_OR_CHG_MASK_LANE = 0; //PU_PLL_OR
		reg_INT_TXDETRX_EN_CHG_MASK_LANE =1;
		reg_INT_BEACON_TX_EN_CHG_MASK_LANE = 1;
		#endif //_SATA_SERDES_BUILD
	}
	
	//INT0 for MCU Wakeup from STOP.
	//reg_INT0_REFCLK_DIS_EN_INT_EN_LANE = 1; //use only for mcu stop
		
	//int3
	reg_INT3_INT_REFCLK_DIS_CHG_INT_EN_LANE = 1;
	reg_INT3_INT_PU_IVREF_CHG_INT_EN_LANE = 1;
	
	if((phy_mode == PCIE) || (phy_mode == USB))
	{ // _PCIE_USB
		#ifdef _PCIE_USB_BUILD
		//int1
		reg_INT9_PM_CHG_INT_EN_LANE = 0;
		reg_INT1_INT_POWER_STATE_VALID_RISE_INT_EN_LANE = 1;
		reg_INT1_INT_PU_PLL_OR_CHG_INT_EN_LANE = 1;
		//int8
		reg_INT8_PM_PCIE_FUNC_CHG_INT_EN_LANE = 1;
		#endif //_PCIE_USB_BUILD
	}
	else 
	{
		#ifdef _SATA_SERDES_BUILD
		//int9
		reg_INT9_PM_CHG_INT_EN_LANE = 1;
		if(serdes_ring_lane_en) {
			#ifdef _LANE_RPLL
			if (tag_ringpll_ind_en==0)
			#else // CMN_RPLL
			if (tag_ringpll_ind_en==0 && mcuid==master_mcu)
			#endif
				reg_INT9_INT_PU_PLL_OR_CHG_INT_EN_LANE = 1;
		}
		#ifdef _LANE_RPLL
		else
		#else // CMN_RPLL
		else if (mcuid == master_mcu)
		#endif
			reg_INT9_INT_PU_PLL_OR_CHG_INT_EN_LANE = 1;
		reg_INT1_INT_POWER_STATE_VALID_RISE_INT_EN_LANE = 0;
		//int8
		reg_INT8_PM_PCIE_FUNC_CHG_INT_EN_LANE = 0;
		#endif //_SATA_SERDES_BUILD
	}
	//int2
	//if(max_gen==0)
	//	reg_INT2_SPD_INT_GEN_EN_LANE = 0;
	//else
	reg_INT2_SPD_INT_GEN_EN_LANE = 1;
	//int11
	reg_INT11_PIN_RX_TRAIN_ENABLE_INT_EN_LANE = 1;
	
	//int5
	reg_INT5_PIN_TX_TRAIN_ENABLE_INT_EN_LANE = 1;
	
	//int10
	reg_INT10_INT_RX_INIT_RISE_INT_EN_LANE = 1;
	
	if(phy_mode != PCIE || reg_PHY_ISOLATE_MODE) {
		//int7
		reg_INT7_REMOTE_CTRL_VALID_INT_EN_LANE = 1;
	
		#ifdef SUPPORT_APTA_TX_TRAIN
		//int12
		//if(cmx_APTA_TRAIN_SIM_EN)
		//reg_INT12_PIN_LOCAL_CTRL_FIELD_READY_INT_EN_LANE = 1;  //APTA local simulation only
	
		//int6
		reg_INT6_PIN_PAPTA_TRAIN_ENABLE_INT_EN_LANE = 1;
	
		//int8 : share with pcie txdectrx/beacon
		reg_INT12_PIN_PAPTA_TRAIN_DISABLE_INT_EN_LANE = 1;
		#endif
	}
	
	// int1: lane disable, share with apta
	if(!reg_MASTER_PHY_EN)
	reg_INT1_DPHY_ANA_LANE_DISABLE_INT_EN_LANE = 1;
	
	//extpin 
	//reg_EXTINT_MCU_INT_EN_LANE = 1;
	
	if(mcuid== master_mcu) {
		reg_INT4_MCU_REMOTE_REQ_INT_EN_LANE = 1;
	}
	
	reg_INT4_PHY_MCU_REMOTE_REQ_INT_EN_LANE = 1;
	
	//reg_INT11_FRAME_UNLOCK_INT_EN_LANE = 1;
	//reg_INT12_FRAME_LOCK_INT_EN_LANE = 1;
}

void init_reg(void) BANKING_CTRL {

	uint8_t ana_pwr = reg_ANA_ID_15_0_b0 & 0x03; // 2: 1.8V, 3: 1.2V
	if(ana_pwr==0x02) reg_AVDDR12_SEL_MAST_REG = 1; //1.8V
	else if(ana_pwr==0x03) reg_AVDDR12_SEL_MAST_REG = 0; //1.2V
	
	#ifdef _SATA_SERDES_BUILD 
	if(phy_mode == SERDES ) {//Ethernet, 
		//For SAS, n=2680, train_pat_num=0x42 (default)
		//For Ethernet mode, n=4384, train_pat_num=0x88
		reg_TX_TRAIN_PAT_TWO_ZERO_LANE = 1;
		reg_TX_TRAIN_PAT_MODE_LANE = 0;

		#ifdef _32G_ANA
		reg_ETHERNET_MODE_LANE = 1;
		#endif
	}
	#endif //_SATA_SERDES_BUILD
	//reg_DME_ENC_BALANCE_CAL_EN_LANE = 1;
	//reg_DME_DEC_BALANCE_CHK_EN_LANE = 1;
	
	if(cmx_PHY_GEN_MAX_3_0 < max_gen) 
		max_gen = cmx_PHY_GEN_MAX_3_0;
	
	#ifdef _PCIE_USB_BUILD 
	if(phy_mode==USB)
		no_pllspdchg = 1;
	
	if( phy_mode == PCIE) {
		tx_pipe4_en = 1; //should be always 1 //PIPE4_EN;
		tx_status_pcie_mode = 1;
		//Cobra test
		lnx_GAIN_TRAIN_INIT_EN_LANE = 1;
		//cmx_BYPASS_MCU_STOP = 1;
		lnx_CDRPHASE_OPT_EN_LANE = 1; //0
		//lnx_INI_PHASE_OFFSET_LANE_7_0 = 0; //0xa;
		
		//workaround to fix a tx_coeff bug.
		if (cmx_TX_TRAIN_MODE == 1)
			reg_ANA_TX_EM_PO_EN_LANE = 1;
		
		// bypass the PU_PLL protection
		// This allows the clock to operate during the single Ring PLL fast startup
		reg_ANA_PU_TX_FORCE_LANE = 1;
		reg_ANA_PU_RX_FORCE_LANE = 1;

		reg_EBUF_THRESHOLD_WIDE_LANE = 1;
	}
	#endif //_PCIE_USB_BUILD
	
	if( phy_mode == PCIE || phy_mode == SATA) {
		lnx_GAIN_TRAIN_END_EN_LANE = 0;
		lnx_ADJUST_FFE_R2_LANE = 0;
		lnx_RX_CAP_FINAL_ADJUST_EN_LANE = 0;
		lnx_RX_RXFFE_C_INI_LANE_3_0 = 12;
		lnx_DFE_ISI_RES_ADAPT_EN_LANE = 0;
		lnx_TRAIN_PH_CONTROL_MODE_LANE_1_0 = 0;
		lnx_TRAIN_USE_D_LANE = 0;
		lnx_TRAIN_USE_S_LANE = 1;
		lnx_SUMFTAP_EN_1_LANE = 1;
	}
	
	//soc control fbck_sel
	if(reg_RING_REF_DIV_SEL==1 && phy_mode<=SAS)
	#ifdef _LANE_RPLL
		reg_ANA_FBCK_SEL_TX_RING_LANE = 1;
	#else // CMN_RPLL
		reg_ANA_FBCK_SEL_RING = 1;
	#endif
	
	//set default
	cal_phase = 0x1e;
	//same as default 
	//reg_TX_TDTAP_SEL_LANE = 0;
	reg_TEMPC_MUX_HOLD_SEL_3_0 = 7; //to cover large range
	reg_TEMPC_MUX_SEL_3_0 = 6;
	
	set_accap_sel(ACCAP_REFCLK);
	
	//reset dfe_res to max
	dfe_f0_res_sel = 3;
	dfe_res_f1 = 3;
	dfe_f234_res_sel = 1;
	dfe_f567_res_sel = 1;
	
	//dfe step size
	reg_DFE_STEP_COARSE_FFX_LANE_3_0 = 0x02; //4;
	reg_DFE_STEP_COARSE_FX_LANE_3_0  = 0x02; //4;
	reg_DFE_STEP_COARSE_F0_LANE_3_0  = 0x02; //4;
	reg_DFE_STEP_FINE_FFX_LANE_3_0 = 0x04; //5;
	reg_DFE_STEP_FINE_FX_LANE_3_0  = 0x04; //5;
	reg_DFE_STEP_FINE_F0_LANE_3_0  = 0x04; //5;
	reg_DFE_STEP_ACCU_FFX_LANE_3_0 = 0x06;
	reg_DFE_STEP_ACCU_FX_LANE_3_0  = 0xa; //??0x06
	reg_DFE_STEP_ACCU_F0_LANE_3_0  = 0x06;
	reg_DFE_STEP_FINE_F0B_LANE_3_0 = 0x05;
	reg_DFE_STEP_ACCU_F0B_LANE_3_0 = 0x06;
	reg_DFE_STEP_COARSE_EO_DN_LANE_3_0 = 0;//1;//2; //512=1/2
	reg_DFE_STEP_COARSE_EO_UP_LANE_3_0 = 7;//5;//5; //64=1/32
	reg_DFE_STEP_FINE_EO_DN_LANE_3_0 = 3; //1/8 =256
	reg_DFE_STEP_FINE_EO_UP_LANE_3_0 = 5;//6; //1/32 =32
	reg_DFE_EO_UP_THRE_COARSE_4_0 = 5; //10;//6;
	reg_DFE_EO_UP_THRE_FINE_4_0_b0 = 7;// 7 //8
	reg_DFE_EO_UP_THRE_FINE_4_0_b1 = 0;
	
	reg_DFE_DC_SIGN_XOR = 1; //to fix the rxdata wrong because DC adaptation diverged
	
	if(phy_mode==SATA) {
		reg_TXDATA_LATENCY_REDUCE_EN_LANE = 1;
		reg_RXDATA_LATENCY_REDUCE_EN_LANE = 1;
	}
	
	#ifdef _LANE_RPLL
	reg_SSC_DSPREAD_TX_TX_RING_LANE = reg_SSC_DSPREAD_TX;
	#else // CMN_RPLL
	reg_SSC_DSPREAD_TX_RING = reg_SSC_DSPREAD_TX;
	#endif
	
	reg_CLK_DIRECTION_RINGPLL_LANE = 1; //ringpll direction control: ringpll->1->0, ringpll->2->3
	#ifdef _LANE_RPLL
	reg_PLL_PWEXP_DIS_RING_LANE = 0;
	#else // CMN_RPLL
	reg_PLL_PWEXP_DIS_RING = 0;
	#endif
	
	reg_VREF_VDDACAL_SEL_2_0 = 6; //for vdd rxsampler cal
	
	//To fix LCPLL unstable
	if(cmx_VCON_FORCE_DISABLE==0) {
		reg_VCON_REF_SEL_2_0 = 0;
		reg_VARAC_BIAS_SEL_2_0 = 7;
		reg_VREF_0P6V_LCVCO_SEL_1_0 = 3;
		if ( ana_pwr==0x02 ) { //1.8V
			reg_VCON_MIN_SEL_2_0 = 4;
			reg_VCON_MAX_SEL_2_0 = 5;
		}
		else { // 1.2V
			reg_VCON_MIN_SEL_2_0 = 0;
			reg_VCON_MAX_SEL_2_0 = 1;
		}
		cmx_TEMPC_STEP_CTRL_2_0 = 3;
	}
	
	if(phy_mode<=SAS)
		reg_LOCAL_STATUS_FIELD_INIT_LANE_15_0 = 0x4000; //tx_init=1
		
	//Watchdog setup
	MCU_WDT_LANE.VAL = 0x0020f424L; //500msec : after pass the time = mcu_clk * reg_mcu_wdt_cnt_lo[15:0] * reg_mcu_wdt_cnt_hi[14:0], mcu trigger PIN_MCU_WDT0/1 to SOC
	reg_MCU_WDT_EN_LANE = 1;
	
	// CESD-294
	// Settings for ring PLL fast wake up
	// Note: these values are tuned for 16FFC IPs, 12FFC IPs might need different values.
	reg_VTHVCOCAL_2_0 = 1;
	reg_VTHVCOPTAT_2_0 = 6;
	reg_CMN_IPP_SLLP_CUR_SEL_2_0 = 4;
	reg_SEL_IPP_IPTAT_SLLP_RING_1_0 = 2;
	#ifdef _LANE_RPLL
	reg_PLL_SLLP_DAC_RANGE_SHIFT_RING_LANE_1_0 = 1;
	#else // CMN_RPLL
	reg_PLL_SLLP_DAC_RANGE_SHIFT_RING_1_0 = 1;
	#endif
	reg_VCON_REF_SEL_RING_1_0 = 2;
	cmx_RINGPLL_DAC_FINE_CODE_RATIO_7_0 = 4;
	cmx_RINGPLL_DAC_MAX_STEP_NUM_7_0 = 0x5;
	cmx_RINGPLL_CAL_FINE_STEP_7_0 = 8;
	cmx_RINGPLL_CAL_COUNTER_SIZE_7_0 = 0x20;

	#ifdef _32G_ANA
	reg_VDDVCO_VTH_12NM_SEL = 1;

	// The register reg_tx_train_mode_lane (0=ASIC, 1=MCU). 1 is default.
	// When this register is 1, FW set the below registers during power-up. Otherwise, do nothing.
	if (cmx_TX_TRAIN_MODE == 1) {
		reg_TRX_TRAIN_TIMEOUT_EN_LANE = 0; //TRX train timer Enable
		reg_PATTERN_LOCK_LOST_TIMEOUT_EN_LANE = 0; //disable FRAME detection timer
		reg_REMOTE_RD_REQ_LANE = 1; //always on read out for remote control and status
		reg_LOCAL_CTRL_FM_REG_EN_LANE = 1; //force local control to pin
		reg_LOCAL_STATUS_FM_REG_EN_LANE = 1; //force local status to pin
		reg_LOCAL_FIELD_FORCE_LANE = 1; //force local control and status to dme encoder
		reg_LOCAL_BALANCE_CAL_EN_LANE = 1; //enable balance bit cal in force mode
		reg_LOCAL_ERROR_EN_LANE = 0; //disable HW error handling
		reg_TRAIN_PIN_FM_REG_EN_LANE = 0; //not force COMPLETE/FAILD/ERROR
		reg_TRAIN_ERR_FM_REG_EN_LANE = 1; //force ERROR
		reg_TRAIN_RDY_FM_REG_EN_LANE = 0; //not force READY
		reg_REMOTE_INIT_FM_REG_EN_LANE = 1; //force remote tx init to aviod READY by HW
	}
	#endif

#if 0 // TODO - 32G has this?
	if(phy_mode > SAS ) {
		reg_DME_ENC_BALANCE_CAL_EN_LANE = 0;
		reg_DME_DEC_BALANCE_CHK_EN_LANE = 0;
	}
#endif

	#ifdef _LANE_RPLL
	reg_LCPLLCLK_DIV2_SEL = 1;  // According to Hui, this needs to be 1 for RPLL
	#endif
}

void reset_pwr_reg(void) BANKING_CTRL {

	//Disable CPU IRQ
	if((phy_mode == PCIE) || (phy_mode == USB))
	{  // _PCIE_USB
		#ifdef _PCIE_USB_BUILD
		//PM_CTRL_INTERRUPT_REG2.BT.B2 = 0x38; //txdetrx_en_chg|beacon_tx_en_chg|tx_idle_hiz
		PM_CTRL_INTERRUPT_REG2.BT.B2 = 0; //txdetrx_en_chg|beacon_tx_en_chg
		PM_CTRL_INTERRUPT_REG2.BT.B3 = 0; //power_state_valid|rx_int|regclk_dis
		#endif //_PCIE_USB_BUILD
	}
	else
	{  //sas_sata
		#ifdef  _SATA_SERDES_BUILD
		PM_CTRL_INTERRUPT_REG2.BT.B2 = 0;
		PM_CTRL_INTERRUPT_REG2.BT.B3 = 0; // PU_RX|PU_TX|PU_PLL|rx_init|regclk_dis|PU_IVREF
		#endif //_SATA_SERDES_BUILD
	}

	//INT0 for MCU Wakeup from STOP.
	//reg_INT0_REFCLK_DIS_EN_INT_EN_LANE = 1; //use only for mcu stop

	//int3
	reg_INT3_INT_REFCLK_DIS_CHG_INT_EN_LANE = 0;
	reg_INT3_INT_PU_IVREF_CHG_INT_EN_LANE = 0;

	if((phy_mode == PCIE) || (phy_mode == USB))
	{ // _PCIE_USB
		#ifdef _PCIE_USB_BUILD
		//int1
		reg_INT9_PM_CHG_INT_EN_LANE = 0;
		reg_INT1_INT_POWER_STATE_VALID_RISE_INT_EN_LANE = 0;
		reg_INT1_INT_PU_PLL_OR_CHG_INT_EN_LANE = 0;
		//int8
		reg_INT8_PM_PCIE_FUNC_CHG_INT_EN_LANE = 0;
		#endif //_PCIE_USB_BUILD
	}
	else
	{
		#ifdef _SATA_SERDES_BUILD
		//int9
		reg_INT9_PM_CHG_INT_EN_LANE = 0;
		if(serdes_ring_lane_en) {
			if(tag_ringpll_ind_en==0 && mcuid==master_mcu)
				reg_INT9_INT_PU_PLL_OR_CHG_INT_EN_LANE = 0;
		}
		else if(mcuid==master_mcu )
			reg_INT9_INT_PU_PLL_OR_CHG_INT_EN_LANE = 0;
		reg_INT1_INT_POWER_STATE_VALID_RISE_INT_EN_LANE = 0;
		//int8
		reg_INT8_PM_PCIE_FUNC_CHG_INT_EN_LANE = 0;
		#endif //_SATA_SERDES_BUILD
	}
	//int2
	//if(max_gen==0)
	//	reg_INT2_SPD_INT_GEN_EN_LANE = 0;
	//else
	reg_INT2_SPD_INT_GEN_EN_LANE = 0;

	//int11
	reg_INT11_PIN_RX_TRAIN_ENABLE_INT_EN_LANE = 0;

	//int5
	reg_INT5_PIN_TX_TRAIN_ENABLE_INT_EN_LANE = 0;

	//int10
	reg_INT10_INT_RX_INIT_RISE_INT_EN_LANE = 0;

	if(phy_mode != PCIE) {
		//int7
		reg_INT7_REMOTE_CTRL_VALID_INT_EN_LANE = 0;

		#ifdef SUPPORT_APTA_TX_TRAIN
		//int12
		//if(cmx_APTA_TRAIN_SIM_EN)
			//reg_INT12_PIN_LOCAL_CTRL_FIELD_READY_INT_EN_LANE = 0;  //APTA local simulation only

		//int6
		reg_INT6_PIN_PAPTA_TRAIN_ENABLE_INT_EN_LANE = 0;

		//int8 : share with pcie txdectrx/beacon
		reg_INT12_PIN_PAPTA_TRAIN_DISABLE_INT_EN_LANE = 0;
		#endif
	}

	// int1: lane disable, share with apta
	if(!reg_MASTER_PHY_EN)
		reg_INT1_DPHY_ANA_LANE_DISABLE_INT_EN_LANE = 0;

	//extpin
	//reg_EXTINT_MCU_INT_EN_LANE = 0;

	if(mcuid== master_mcu) {
		reg_INT4_MCU_REMOTE_REQ_INT_EN_LANE = 0;
	}

	reg_INT4_PHY_MCU_REMOTE_REQ_INT_EN_LANE = 0;

	//reg_INT11_FRAME_UNLOCK_INT_EN_LANE = 0;
	//reg_INT12_FRAME_LOCK_INT_EN_LANE = 0;

	reg_RX_INIT_DONE_LANE = 0;
	reg_PIN_PLL_READY_RX_LANE = 0;
	reg_PIN_PLL_READY_TX_LANE = 0;
	
	short_delay();
	short_delay();

	if(mcuid== master_mcu) {
		pll_clk_ready_all_0();
		reg_ANA_PU_IVREF = 1;
		reg_ANA_PU_IVREF_DLY1 =	1;
		reg_ANA_PU_IVREF_DLY2 =	1;
		reg_ANA_PU_IVREF_DLY3 =	1;
		reg_ANA_PU_PLL = 0;
		reg_ANA_PU_PLL_DLY	= 0;
		reg_RESET_ANA = 1;
		reg_REFCLK_DIS_FM_PM = 0;
		#ifndef _LANE_RPLL // CMN_RPLL
		reg_RESET_ANA_RING = 1;
		reg_ANA_PU_PLL_RING = 0;
		reg_ANA_PU_PLL_DLY_RING = 0;
		reg_RESET_DTX_RING = 1;
		reg_DTX_CLK_OFF_RING = 1;
		#endif
		reg_DTX_CLK_OFF	= 1;
		reg_RESET_DTX = 1;
		reg_TX_INTPRESET_EXT = 1;
	}

	#ifdef _LANE_RPLL
	reg_ANA_TX_RESET_ANA_RPLL_LANE = 1;
	reg_ANA_PU_RPLL_RING_LANE = 0;
	reg_ANA_PU_RPLL_DLY_RING_LANE = 0;
	reg_RESET_DTX_TX_RING_LANE = 1;
	reg_DTX_CLK_OFF_TX_RING_LANE = 1;
	#endif
	reg_ANA_PU_RX_LANE	= 0;
	reg_ANA_PU_RX_DLY_LANE	= 0;
	reg_ANA_PU_TX_LANE = 0;
	reg_ANA_PU_SQ_LANE	= 0;
	reg_DTL_FLOOP_FREEZE_LANE =	1;
	reg_REG_DTL_LOOP_FREEZE_LANE = 1;
	reg_DFE_CLK_OFF_LANE = 1;
	reg_RESET_DTL_LANE = 1;
	reg_RESET_DFE_LANE = 1;
	reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
	reg_ANA_TX_IDLE_HIZ_EN_LANE = 0;
	reg_ANA_BEACON_EN_LANE = 0;
	reg_ANA_TXDETRX_START_LANE = 0;
	reg_ANA_TXDETRX_EN_LANE = 0;
	reg_PIN_TXDETRX_VALID_LANE = 0;
	reg_EOM_RESET_INTP_EXT_LANE = 1;
	reg_RESET_INTP_EXT_LANE = 1;
	
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 0; 
	reg_RXDCC_DAC_SYNC_CLK_LANE = 0;
	reg_TXDCCCAL_EN_LANE = 0;
	reg_RXDCC_CAL_EN_LANE = 0;
	reg_TEMPC_DAC_VALID = 0;
	reg_EOM_ALIGN_EN_LANE = 0;
	reg_TX_TDCAL_EN_LANE = 0;
}

__code uint8_t refclk_tb[] = { 25, 30, 40, 50, 62, 100, 125, 156 };

void set_timer_cnt() BANKING_CTRL {
	uint16_t temp;
	uint32_t temp32;
	uint8_t i;
	
	if(cmx_MCU_FREQ_15_0==0) cmx_MCU_FREQ_15_0 = 400;
	mcuclk_mc = (uint8_t)((cmx_MCU_FREQ_15_0+8)/15);
	reg_MCU_DEBUG0_LANE_7_0 = mcuclk_mc;
	
	i = reg_PIN_REF_FREF_SEL_RD_4_0;
	cmx_REFCLK_FREQ_7_0 = refclk_tb[i];
	
	//1u unit pwm timer1, timer2
	//reg_TIMER1_CLK_SEL_LANE_1_0 = 0; //refclk
	reg_TIMER_1_SEL_LANE_1_0 = 0x01;	//PWM1
	reg_TIMER_2_SEL_LANE_1_0 = 0x01;	//PWM1
	reg_PWM1_CLK_SEL_LANE_1_0 = 0; //refclk 
	reg_PWM1_EN_LANE = 1;
	temp = cmx_REFCLK_FREQ_7_0>>1;
	reg_PWM1_COUNTER_LANE_30_0_b0 = (uint8_t)temp;
	reg_PWM1_COUNTER_LANE_30_0_b1 = (uint8_t)(temp >> 8);
	
	//1m unit pwm for timer2
	reg_PWM2_CLK_SEL_LANE_1_0 = 0; //refclk 
	temp32 = cmx_REFCLK_FREQ_7_0*500L;
	reg_PWM2_COUNTER_LANE_30_0_b0 = (uint8_t)temp32;
	reg_PWM2_COUNTER_LANE_30_0_b1 = (uint8_t)(temp32 >> 8);
	reg_PWM2_COUNTER_LANE_30_0_b2 = (uint8_t)(temp32 >> 16);
	
	//refclk based for MCU Timer3
	reg_TIMER_3_EN_LANE = 0;
	reg_TIMER3_CLK_SEL_LANE_1_0 = 0; //refclk
	reg_TIMER3_HI_CNT_LANE_15_0 = 500;
	reg_TIMER3_LO_CNT_LANE_15_0 = u16mul(cmx_REFCLK_FREQ_7_0, lnx_TX_TRAIN_FRAME_DET_TIMER_LANE_7_0+1);
}

#ifdef _LANE_RPLL  // Only RPLL project has new Analog design change
/*
 * For the new RPLL CMN CLK MUX model, the CMN ring and CMN LC clocks are tie together.
 * FW needs to config table A first.
 */
void load_rpll_cmn_clk_mux_tableA(void) BANKING_CTRL {
	// Load table A before power on or speed change
	reg_CLK_DIRECTION_LCPLL = 0;
	reg_FORCE_CLK_DIRECTION_LCPLL = 1;
	reg_CLK_BKWD_DIRECTION_LCPLL = 0;
	reg_CLK_FWD2_DIRECTION_LCPLL = 0;
	reg_CLK_BKWD2_DIRECTION_LCPLL = 0;
	reg_CLK_DIRECTION_RINGPLL = 0;
	reg_FORCE_CLK_DIRECTION_RING = 1;
	reg_CLK_BKWD_DIRECTION_RINGPLL = 0;
	reg_CLK_FWD2_DIRECTION_RINGPLL = 0;
	reg_CLK_BKWD2_DIRECTION_RINGPLL = 0;
}

/*
 *  Since table A is configured using the Lane Ring clock source,
 *  only need to reconfigure if one of the lane uses the CMN ring or LC clock sources
 */
void load_rpll_cmn_clk_mux_tableB(void) BANKING_CTRL {
	if (use_ring_pll) {
		//if (( phy_mode == PCIE ) && ( reg_TX_CK_SEL_LANE == 1 ) && ( reg_RX_CK_SEL_LANE == 1 )) {
		if ( phy_mode == PCIE ) {
			reg_CLK_DIRECTION_LCPLL = 0;
			//reg_FORCE_CLK_DIRECTION_LCPLL = 1;
			//reg_CLK_BKWD_DIRECTION_LCPLL = 0;
			reg_CLK_FWD2_DIRECTION_LCPLL = 0;
			//reg_CLK_BKWD2_DIRECTION_LCPLL = 0;

			reg_CLK_DIRECTION_RINGPLL = 1;
			//reg_FORCE_CLK_DIRECTION_RING = 1;
			//reg_CLK_BKWD_DIRECTION_RINGPLL = 0;
			reg_CLK_FWD2_DIRECTION_RINGPLL = 1;
			//reg_CLK_BKWD2_DIRECTION_RINGPLL = 0;
		} else {
			//reg_CLK_DIRECTION_LCPLL = 0;  // if other lane select CMN LC, don't set this to 0
			//reg_FORCE_CLK_DIRECTION_LCPLL = 1;
			//reg_CLK_BKWD_DIRECTION_LCPLL = 0;
			//reg_CLK_FWD2_DIRECTION_LCPLL = 0;  // if other lane select CMN LC, don't set this to 0
			//reg_CLK_BKWD2_DIRECTION_LCPLL = 0;

			//reg_CLK_DIRECTION_RINGPLL = 0;
			//reg_FORCE_CLK_DIRECTION_RING = 1;
			//reg_CLK_BKWD_DIRECTION_RINGPLL = 0;
			//reg_CLK_FWD2_DIRECTION_RINGPLL = 0;
			//reg_CLK_BKWD2_DIRECTION_RINGPLL = 0;
		}
	} else {
		reg_CLK_DIRECTION_LCPLL = 1;
		//reg_FORCE_CLK_DIRECTION_LCPLL = 1;
		//reg_CLK_BKWD_DIRECTION_LCPLL = 0;
		reg_CLK_FWD2_DIRECTION_LCPLL = 1;
		//reg_CLK_BKWD2_DIRECTION_LCPLL = 0;

		if ( phy_mode == PCIE ) {
			// PCIE uses CMN Ring or LC clock, make sure only one is selected
			reg_CLK_DIRECTION_RINGPLL = 0;
			//reg_FORCE_CLK_DIRECTION_RING = 1; 
			//reg_CLK_BKWD_DIRECTION_RINGPLL = 0;
			reg_CLK_FWD2_DIRECTION_RINGPLL = 0;
			//reg_CLK_BKWD2_DIRECTION_RINGPLL = 0;
		} else {
			//reg_CLK_DIRECTION_RINGPLL = 0;
			//reg_FORCE_CLK_DIRECTION_RING = 1; 
			//reg_CLK_BKWD_DIRECTION_RINGPLL = 0;
			//reg_CLK_FWD2_DIRECTION_RINGPLL = 0;
			//reg_CLK_BKWD2_DIRECTION_RINGPLL = 0;
		}
	}
}
#endif  // _LANE_RPLL
