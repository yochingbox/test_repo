/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file power.c
* \purpose power control
* \History
*	10/15/2015 Heejeong Ryu		Initial 
*/

#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg BANK2
#endif

__code uint8_t refclk_tb[] = { 25, 30, 40, 50, 62, 100, 125, 156 };
	
/**
 * \module PowerUp_Seq
 * 
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: 
 *    Output: 
*/
#ifdef SUPPORT_POWER_SIMPLE

void PowerUp_Seq_Cal(void) BANKING_CTRL {

	reg_MCU_DEBUG0_LANE_7_0 = 0x0f;

	//PHY_STATUS = ST_POSEQ;

#ifdef _12FFC_COMPHY_112G_X4_R1P2
	reg_ANA_REG_SU_DLY_SEL_2_0 = 3;
	reg_ANA_REG_HD_DLY_SEL_2_0 = 3;
#else
	reg_ANA_REG_SU_DLY_SEL_1_0 = 3;
	reg_ANA_REG_HD_DLY_SEL_1_0 = 3;
#endif

	while((wtag=0x6D)&&! (reg_PIN_PU_PLL_RD_LANE));
 	PHY_STATUS = ST_POSEQ;
	//read user data
	init_xdata();

	//power on seq start
	reg_PWRON_SEQ_LANE = 1;
	cmx_CAL_DONE = 1;

	while((wtag=0x6E)&&! (reg_PIN_PU_IVREF_RD));

	//reg_ANA_TX_IDLE_FORCE_LANE = 1;
	//reg_ANA_TX_IDLE_LANE = 1;

	delay_ram(T_20us);
	pu_ivref_on();


	reg_ANA_PU_PLL_LANE = 1;
	reg_ANA_PU_PLL_DLY_LANE = 1;
	//reg_SHRTR_TRXPLL_LANE = 1;
	//while((wtag=0x6F)&&reg_ANA_PU_PLL_DLY_LANE==0 && reg_ANA_PU_PLL_LANE==0);
	while((wtag=0x70)&&!reg_PIN_PU_PLL_RD_LANE);

	reg_ANA_PU_RX_LANE = 1;
	delay_ram(T_p5us);
	reg_ANA_PU_RX_DLY_LANE = 1;
	delay_ram(T_p4us);
		//while((wtag=0x71)&&reg_ANA_PU_PLL_DLY_LANE==0 && reg_ANA_PU_PLL_LANE==0);
	while((wtag=0x72)&&! (reg_PIN_PU_PLL_RD_LANE && reg_PIN_PU_TX_RD_LANE));

	reg_ANA_RX_DTL_LOOP_FREEZE_LANE = 1;  //analog deleted
	reg_DTL_FLOOP_FREEZE_LANE = 1;

	delay_ram(T_40us);
	reg_EOM_RESET_INTP_EXT_LANE = 0;
	reg_TXINTP_RESET_EXT_LANE = 0;
	reg_RESET_INTP_EXT_LANE = 0;

	reg_ANA_PU_TX_LANE = 1;
	while((wtag=0x73)&&! (reg_PIN_PU_PLL_RD_LANE && reg_PIN_PU_TX_RD_LANE && reg_PIN_PU_RX_RD_LANE));

	//reg_RESET_ANA_LANE = 0;
	set_timer_cnt();

	//init_reg();
	/*reg_INT_RX_INIT_RISE_ISR_LANE = 0;
	SPD_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0x0;
	PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0;
	PM_CTRL_INTERRUPT_REG1_LANE.BT.B2 = 0;
	MCU_IRQ_LANE.BT.B0 = 0;*/
	//max_gen = cmx_PHY_GEN_MAX_4_0;

	PM_CTRL_INTERRUPT_REG2.BT.B2 = 0xfc;
	PM_CTRL_INTERRUPT_REG2.BT.B3 = 0x11; // PU_RX|PU_TX|PU_PLL|rx_init|regclk_dis|PU_IVREF
	reg_INT_PU_PLL_OR_CHG_MASK_LANE = 0;

	//int setup
	//int2
	/*if(max_gen==0 || phy_mode==SERDES)	reg_INT2_SPD_INT_GEN_EN_LANE = 0;
	else	reg_INT2_SPD_INT_GEN_EN_LANE = 1;*/
	reg_INT2_SPD_INT_GEN_EN_LANE = 1;
	//int9
	reg_INT9_PM_CHG_INT_EN_LANE = 1;

	reg_INT9_INT_PU_PLL_OR_CHG_INT_EN_LANE = 1;

	reg_INT1_INT_POWER_STATE_VALID_RISE_INT_EN_LANE = 0;

	//int10
	reg_INT10_INT_RX_INIT_RISE_INT_EN_LANE = 1;
	//int4
	//reg_TRX_TRAIN_TIMEOUT_EN_LANE = 1; default=1
	reg_INT4_TRX_TRAIN_STOP_INT_EN_LANE = 1;

	reg_TX_TRAIN_PAT_TWO_ZERO_LANE = 1;
	reg_TX_TRAIN_PAT_MODE_LANE = 0;
	no_pllspdchg = 1;

   //initial speed load
	gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_4_0;
	gen_tx = min_ram(gen_tx, cmx_PHY_GEN_MAX_4_0);
	gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_4_0;
	gen_rx = min_ram(gen_rx, cmx_PHY_GEN_MAX_4_0);

	reg_RX_INIT_DONE_LANE = 0; //??

	PHY_STATUS = ST_CAL;
}
#endif

void PowerUp_Seq(void) BANKING_CTRL { //real one :-)

	//reg_MCU_DEBUG0_LANE_7_0 = 0x0e;
 
/////////////////////////////////////////////////////////////
//https://ceproject.marvell.com/index.html#/task/1848
/*	if(FAST_POWER_ON_EN)
		BYPASS_DELAY = 4;
*/
		if(FAST_POWER_ON_EN) {
				CONTROL_CONFIG0.BT.B1 |= 0x18; // ext_force_cal_done=1, fast_dfe_timer_en=1 
				CONTROL_CONFIG0.BT.B2 |= 0x30; // bypass_delay=4, bypass_poweron_delay=1 
				cmx_FORCE_CONT_CAL_SKIP = 1;
		}

////////////////////////////////////////////////////////////
#ifdef _12FFC_COMPHY_112G_X4_R1P2
	reg_ANA_REG_SU_DLY_SEL_2_0 = 3;
	reg_ANA_REG_HD_DLY_SEL_2_0 = 3;
#else
	reg_ANA_REG_SU_DLY_SEL_1_0 = 3;
	reg_ANA_REG_HD_DLY_SEL_1_0 = 3;
#endif
	while((wtag=0x74)&&! (reg_PIN_PU_PLL_RD_LANE));

	PHY_STATUS = ST_POSEQ;

	//read user data
	init_xdata();
	
	//-----------
	set_timer_cnt();

	//#ifndef _LAB
	while((wtag=0x75)&& !reg_PIN_PU_IVREF_RD );
	//#endif

	reg_PWRON_SEQ_LANE = 1;
	//cmx_CAL_DONE = 1;
	delay_ram(T_20us);
	pu_ivref_on();

	reg_EOM_RESET_INTP_EXT_LANE = 1;
	reg_TXINTP_RESET_EXT_LANE = 1;
	reg_RESET_INTP_EXT_LANE = 1;
	delay_ram(T_5us);
	reg_ANA_PU_SQ_LANE = 1;
	delay_ram(T_15us);

	reg_ANA_PU_PLL_LANE = 1;
	reg_ANA_PU_PLL_DLY_LANE = 1;
	while((wtag=0x76)&&!reg_PIN_PU_PLL_RD_LANE);

	reg_ANA_PU_RX_LANE = 1;
	delay_ram(T_p5us);
	reg_ANA_PU_RX_DLY_LANE = 1;
	delay_ram(T_p4us);
	while((wtag=0x77)&&! (reg_PIN_PU_PLL_RD_LANE && reg_PIN_PU_TX_RD_LANE));

	reg_ANA_RX_DTL_LOOP_FREEZE_LANE = 1;  //analog deleted
	reg_DTL_FLOOP_FREEZE_LANE = 1;

	delay_ram(T_40us);
	reg_EOM_RESET_INTP_EXT_LANE = 0;
	reg_TXINTP_RESET_EXT_LANE = 0;
	reg_RESET_INTP_EXT_LANE = 0;

	reg_ANA_PU_TX_LANE = 1;
	while((wtag=0x78)&&! (reg_PIN_PU_PLL_RD_LANE && reg_PIN_PU_TX_RD_LANE && reg_PIN_PU_RX_RD_LANE));

	//-----------
	init_reg();

	//-----------
	PM_CTRL_INTERRUPT_REG2.BT.B2 = 0xfc;
	PM_CTRL_INTERRUPT_REG2.BT.B3 = 0x11; // PU_RX|PU_TX|PU_PLL|rx_init|regclk_dis|PU_IVREF
	reg_INT_PU_PLL_OR_CHG_MASK_LANE = 0;

	//INT0 for MCU Wakeup from STOP.
	//reg_INT0_REFCLK_DIS_EN_INT_EN_LANE = 1; //use only for mcu stop

	//int3
	reg_INT3_INT_REFCLK_DIS_CHG_INT_EN_LANE = 1;
	reg_INT3_INT_PU_IVREF_CHG_INT_EN_LANE = 1;

	//int9
	reg_INT9_PM_CHG_INT_EN_LANE = 1;

	reg_INT1_INT_POWER_STATE_VALID_RISE_INT_EN_LANE = 0;

	//int2
	reg_INT2_SPD_INT_GEN_EN_LANE = 1;
	//int11
	//reg_INT11_RX_TRAIN_ENABLE_INT_EN_LANE = 1;

	//int5
	//reg_INT5_TX_TRAIN_ENABLE_INT_EN_LANE = 1;

	//int10
	reg_INT10_INT_RX_INIT_RISE_INT_EN_LANE = 1;

	//int7
	//reg_INT7_REMOTE_CTRL_VALID_INT_EN_LANE = 1; //no txtrain_if in fw

	//int12
	//reg_INT12_PIN_LOCAL_CTRL_FIELD_READY_INT_EN_LANE = 1;  //no APTA

	//extpin
	//reg_EXTINT_MCU_INT_EN_LANE = 1;


	reg_DFE_DC_SIGN_XOR_LANE = 1;
	reg_DFE_DC_E_SIGN_XOR_LANE = 1;

	//-----------
    //initial speed load
	gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_4_0;
	gen_tx = min_ram(gen_tx, cmx_PHY_GEN_MAX_4_0);
	gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_4_0;
	gen_rx = min_ram(gen_rx, cmx_PHY_GEN_MAX_4_0);
	
	// goto next stage
	PHY_STATUS = ST_CAL;
}

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

	#if 0 //def SIM_ENV
	reg_MCU_STATUS1_LANE_31_0_b0 = 0xff;
	while((wtag=0x79)&&lnx_END_XDAT_LANE_7_0!=0xaa || cmx_END_XDAT_CMN_7_0!=0xaa);
	reg_MCU_STATUS1_LANE_31_0_b0 = 0;
	#endif

	//if(cmx_MASTER_MCU_SEL_7_0 > MAX_MCU_ID) cmx_MASTER_MCU_SEL_7_0 = MCU_LANE0;

	// TODO: some delay?? don't understand why this needed.
	//reg_MCU_DEBUG7_LANE_7_0 = 0xa5;
	//reg_MCU_DEBUG6_LANE_7_0 = mcuid;
	/* clear by xdat_lane download
	//clean xdata
	if( BYPASS_XDAT_INIT == 0 ) 
	{
	//reg_MCU_DEBUG7_LANE_7_0 = 0x55;
		ptr = (__xdata uint8_t *)(XDAT_BASE);
		while((wtag=0x7A)&&ptr < (XDAT_LANE_BASE + MAXXDATLANE) ) {
			*ptr = 0;
			ptr++;
		}	
	}*/
	
	/* HR:cannot use dma; xdata is not allocated by compiler.
	DMASA = (uint16_t )&DFE_CONTROL_0;
	DMATA = (uint16_t )&CTRL_CONFIG0;
	DMAS2 = 0; DMAT2 = 0; DMAC2 = 0;
	DMAC = MAXXDATLANE;
	DMAM0 = 0x64; //10100100
	DMAM1 = 0x1f;
	DMASEL = 0x81;*/
	
	/* clear by xdat_cmn download
	if(mcuid== cmx_MASTER_MCU_SEL_7_0) {

		if( BYPASS_XDAT_INIT == 0 ) {

	//reg_MCU_DEBUG7_LANE_7_0 = 0x58;
			ptr = (__xdata uint8_t *)(XDAT_CMN_BASE);
			while((wtag=0x7B)&&ptr < (XDAT_CMN_BASE + MAXXDATCMN) ) {
				*ptr = 0;
				ptr++;
			}
			//HR:cannot use dma; xdata is not allocated by compiler.
			//DMASA = (uint16_t )&DFE_CONTROL_0;
			//DMATA = (uint16_t )&FW_REV;
			//DMAC = MAXXDATCMN;
			//DMASEL = 0x81; 
		}

	} */
 
	/*SYNC_STATUS_LANE = IDLE;
	if(mcuid== cmx_MASTER_MCU_SEL_7_0) {
	
		SYNC_REQUEST_LANE = 0; 
		
		//-------------------
		//indicate to let SOC config registers.
		//cmx_MCU_INIT_DONE = 1; //removed
		//reg_SET_MCU_INT_LANE0 = 1;
	}*/
	
	sync_check = 0;
	rx_pll_rate = 0;
	tx_pll_rate = 0;
	gen_pll_rate = 0;
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
	pam4_en = 0;
	cmx_PLL_RATE_SEL_7_0 = 0xff;
	
	// For sync interface
	switch(mcuid){
		case MCU_LANE0: cmx_MCU_SYNC_LANE0 = 0;break;
		case MCU_LANE1: cmx_MCU_SYNC_LANE1 = 0;break;
		case MCU_LANE2: cmx_MCU_SYNC_LANE2 = 0;break;
		case MCU_LANE3: cmx_MCU_SYNC_LANE3 = 0;break;
		default: reg_MCU_DEBUG_CMN_0_7_0 = 0;break;
	}
}

void restore_xdata(void) BANKING_CTRL {
	//	In case of reset between txtrain complete and txtrain en down
	// Tests show txtrain en falling int would be missed
	reg_PT_EN_LANE = save_pt_en_lane;
	reg_PT_TX_PATTERN_SEL_LANE_5_0 = save_pt_tx_pattern_sel_lane_5_0;
	reg_TX_SEL_BITS_LANE = save_tx_sel_bits_lane;
	reg_RX_SEL_BITS_LANE = save_rx_sel_bits_lane;
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
 *   save sel_bits 
 *    
*/
void init_xdata(void) BANKING_CTRL {

	//if(cmx_MASTER_MCU_SEL_7_0 > MAX_MCU_ID) cmx_MASTER_MCU_SEL_7_0 = MCU_LANE0;

	reg_ANA_REFCLK_SEL = reg_PIN_REFCLK_SEL_RD; 
	force_exit_cal = FORCE_EXIT_CAL;
	// -- set xdat_cmn default
	//pllcal_first_time = 1;
	cmx_PHY_GEN_MAX_4_0 = max_gen;
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
	
	cmx_FW_MAJOR_VER_7_0 =  MAJOR_VER;
	cmx_FW_MINOR_VER_7_0 =  MINOR_VER;
	cmx_FW_PATCH_VER_7_0 =  PATCH_VER;
	cmx_FW_BUILD_VER_7_0 =  BUILD_VER;

	//if(phy_mode == PCIE) cmx_PIPE4_EN = 1;	//set default for PCIe mode
	
	//}
	
	// -- set xdat_lane default
	//lnx_TX_TRAIN_FRAME_DET_TIMER_ENABLE_LANE = 1;
	//lnx_TX_TRAIN_TIMER_ENABLE_LANE = 1;
	//lnx_RX_TRAIN_TIMER_ENABLE_LANE = 1;
	//lnx_TX_TRAIN_STATUS_DET_TIMER_ENABLE_LANE = 1;
	
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

	//TODO : set register default
	tx_adapt_g0_en = 0;	
    tx_adapt_gn1_en = 1;
    tx_adapt_g1_en = 0; 
	tx_adapt_gn2_en = 1;
	lnx_FINAL_GAIN_ADJUST_EN_LANE = 1;
	lnx_PT_OUT_TIME_TRAIN_COMP_LANE_15_0 = 1000; //TODO: remove. update xdat_lane
    
	//ana_tsen_adc_rdy_rd = 0;		
	
	pre_sq_rd = 1;

	//train_status_reset(); //remove for sim
	
	save_tx_sel_bits_lane = reg_TX_SEL_BITS_LANE;
	save_rx_sel_bits_lane = reg_RX_SEL_BITS_LANE;
	
}

void init_reg(void) BANKING_CTRL {

	//clear int req
	reg_TX_TRAIN_ENABLE_ISR_CLEAR_LANE = 0;
	reg_RX_TRAIN_ENABLE_ISR_CLEAR_LANE = 0;
	reg_FRAME_LOCK_ISR_CLEAR_LANE = 0;
	reg_REMOTE_CTRL_VALID_ISR_CLEAR_LANE = 0;
	reg_INT_RX_INIT_RISE_ISR_CLEAR_LANE = 0;
	SPD_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0x0;
	PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0;
	PM_CTRL_INTERRUPT_REG1_LANE.BT.B2 = 0;
	MCU_IRQ_LANE.BT.B0 = 0;
	reg_TXINTP_SSC_CLK_EN_LANE = 1;
	//mask irq lane
	RX_LANE_INTERRUPT_MASK.BT.B3 = 0x60; //reg_FRAME_UNLOCK_MASK_LANE,reg_FRAME_LOCK_MASK_LANE
	
	/*if(mcuid==MCU_LANE0)
		cmx_MCU_SYNC_LANE0 = 1;
	if(mcuid==MCU_LANE1)
		cmx_MCU_SYNC_LANE1 = 1;
	if(mcuid==MCU_LANE2)
		cmx_MCU_SYNC_LANE2 = 1;
	if(mcuid==MCU_LANE3)
		cmx_MCU_SYNC_LANE3 = 1;*/

     //For SAS, n=2680, train_pat_num=0x42 (default)
 	 //For Ethernet mode, n=4384, train_pat_num=0x88
	/* duplicated
	 reg_TRAIN_PAT_NUM_LANE_8_0_b0 = 0x08; //0x88; //
	 reg_TRAIN_PAT_NUM_LANE_8_0_b1 = 0x01; 
	 reg_TX_TRAIN_PAT_TOGGLE_LANE = 0;
	 reg_TX_TRAIN_PAT_SEL_LANE_1_0 = 1;  //16ffc Changed */
	 reg_TX_TRAIN_PAT_TWO_ZERO_LANE = 1;
	 reg_TX_TRAIN_PAT_MODE_LANE = 0;

   //if(cmx_PHY_GEN_MAX_4_0 < max_gen)
	//     max_gen = cmx_PHY_GEN_MAX_4_0;

   //set default
	cal_phase = 0x1e;
	//same as default 
	//reg_TEMPC_MUX_HOLD_SEL_LANE_3_0 = 7; //to cover large range
	//reg_TEMPC_MUX_SEL_LANE_3_0 = 6;
	//reg_TX_SEL_BITS_FORCE_LANE = 1;
	//reg_RX_SEL_BITS_FORCE_LANE = 1;
	//#ifdef _28G_R2P0
	//reg_CLK_RXACCAP_SEL_LANE_1_0 = 1; //use refclk 
	//#else
	//reg_ANA_RSVD6_LANE_7_0 = 0xd0; //use refclk
	//#endif

	//reset dfe_res to max

#ifndef DEVELOP_TEMP
	dfe_f0_res_sel = 3;
	dfe_res_f1 = 3;
	dfe_f2_res_sel = 1;
	dfe_f34_res_sel = 1;
	dfe_f567_res_sel = 1;
#endif
	
	// set correct frequency for rx_train_timer and trx_train_timer
	reg_REF1M_GEN_DIV_LANE_7_0 = refclk_tb[reg_PIN_REF_FREF_SEL_RD_4_0];
	// Speed up simulation train timer
	if(TRAIN_SIM_EN){
		reg_REF1M_GEN_DIV_LANE_7_0 = 1;
		reg_FRAME_DET_MAX_TIME_LANE_3_0 = 0;
	}
	// rx_train_timer too short
	// 0xbb7 as trx_train, [12:8][7:0]
	reg_RX_TRAIN_TIMER_LANE_12_0_b1 = 0xb;
	reg_RX_TRAIN_TIMER_LANE_12_0_b0 = 0xb7;
	
	//reg_LCPLL_CLKBUF_EN_LANE
	reg_TRX_DIG_CAL2M_DIV_BOT_LANE_7_0 = 0x4e;
	reg_TRX_DIG_CAL2M_DIV_TOP_LANE_7_0 = 0x4e;
	reg_CMN_DIG_CAL2M_DIV_7_0 = 0x4e;
	
	// X7121M A0 workaround: ignore reset
	reg_SFT_RST_NO_REG_FM_REG_LANE = 1;
	#if 1 // Debug TX training
	// disable training timers
	//reg_TRX_TRAIN_TIMEOUT_EN_LANE = 0;
	//reg_STATUS_DET_TIMEOUT_EN_LANE = 0;
	#ifdef _12FFC_COMPHY_112G_X4_R1P2
	#else
	// r1.1/r1.0 Workaround !!! change if HW gets fixed
	reg_PATTERN_LOCK_LOST_TIMEOUT_EN_LANE = 0;
	lnx_TX_TRAIN_FRAME_DET_TIMER_ENABLE_LANE = 0;
	#endif
	#endif
	
}

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
	//reg_PWM2_CLK_SEL_LANE_1_0 = 0; //refclk 
	//temp32 = cmx_REFCLK_FREQ_7_0*500L;	
	//reg_PWM2_COUNTER_LANE_30_0_b0 = (uint8_t)temp32;
	//reg_PWM2_COUNTER_LANE_30_0_b1 = (uint8_t)(temp32 >> 8);
	//reg_PWM2_COUNTER_LANE_30_0_b2 = (uint8_t)(temp32 >> 16);	

}

void DTL_DTX_DFE_clkoff_reset_0(void) BANKING_CTRL {

	reg_DTL_CLK_OFF_LANE= 0; 
	reg_DTX_CLK_OFF_LANE = 0;
	reg_DFE_CLK_OFF_LANE = 0; 
	delay_ram(Tus);
	reg_RESET_DTL_LANE = 0;	
	reg_RESET_DTX_LANE	= 0;
	reg_RESET_DFE_LANE = 0;

	timeout = 0;
	timeout_start((uint16_t)2); //50mS
	while((wtag=0x7C)&&!timeout);

}

void DTL_DTX_DFE_clkoff_reset_1(void) BANKING_CTRL {

	//reg_DFE_ADAPT_CONT_LANE = 0;
	//reg_DFE_START_LANE = 0;

	reg_DTL_CLK_OFF_LANE= 1; 
	reg_DTX_CLK_OFF_LANE = 1;
	reg_DFE_CLK_OFF_LANE = 1; 
	reg_RESET_DTL_LANE = 1;	
	reg_RESET_DTX_LANE	= 1;
	reg_RESET_DFE_LANE = 1;

}
		
//void pll_clk_ready_all_0(void) BANKING_CTRL { //ana_pll_clk_ready**=0
//	reg_ANA_PLL_CLK_READY_LANE = 0;
//}

//void pll_clk_ready_1(void) BANKING_CTRL { // //ana_pll_clk_ready**=1
//	reg_ANA_PLL_CLK_READY_LANE = 1;
//}

void check_pll_clk_ready(void) BANKING_CTRL {
	do {
		if(reg_ANA_PLL_CLK_READY_LANE) break;
		if(PHY_NS!=ST_INIT) break;
	} while((wtag=0x7D)&&1);
} 

void pu_ivref_on(void) BANKING_CTRL {

	reg_ANA_PU_IVREF = 1;
	delay_ram(Tus);
	reg_ANA_PU_IVREF_DLY1 = 1;
	delay_ram(Tus);
	reg_ANA_PU_IVREF_DLY2 = 1;
	delay_ram(Tus);
	reg_ANA_PU_IVREF_DLY3 = 1;

}

void check_pu_ivref(void) BANKING_CTRL {
	do {
		if(reg_ANA_PU_IVREF_DLY3) break;
	} while((wtag=0x7E)&&1);

}

void pu_pll_off(void) BANKING_CTRL { //off - reset_ana*, ana_pu_pll_*,  pll_clk_ready_*, dtx_clk_off*, reset_dtx*
		
	reg_DTX_CLK_OFF_LANE = 1;
	reg_RESET_DTX_LANE	= 1;
	pll_clk_ready_all_0();
	delay_ram(Tus);
	reg_RESET_ANA_LANE = 1;
	reg_ANA_PU_PLL_DLY_LANE = 0;
	reg_ANA_PU_PLL_LANE = 0;

	//while((wtag=0x7F)&&reg_ANA_PU_PLL_LANE);

}
/* not use
void pu_pll_on(void) BANKING_CTRL { // on - *pll_fast_cal, dtx_clk_off*, reset_dtx*
		
	reg_DTX_CLK_OFF_LANE = 0;
	delay_ram(Tus);
	reg_RESET_DTX_LANE	= 0;
	while((wtag=0x80)&& reg_RESET_DTX_LANE );

}
*/
void pu_rx_on(void) BANKING_CTRL {

	reg_ANA_PU_PLL_LANE = 1; //need gate pu_rx
	reg_ANA_PU_RX_LANE = 1;	
	delay_ram(T_p5us);
	reg_ANA_PU_RX_DLY_LANE = 1;
	delay_ram(T_p4us);
#if 0
	reg_FFE_PULSE_EN_LANE = 1;
	reg_ANA_TRX_ANA_RSVD_IN_LANE_15_0_b1 |= 0x01;
#endif
	
}

void pu_rx_off(void) BANKING_CTRL {

#if 0
	reg_FFE_PULSE_EN_LANE = 0;
	reg_ANA_TRX_ANA_RSVD_IN_LANE_15_0_b1 &= 0xfe;
#endif
	reg_ANA_PU_RX_LANE = 0;
	reg_ANA_PU_RX_DLY_LANE = 0;
}

/*
 * reset_pwr_reg() - call after a SFT_RST
 */
void reset_pwr_reg(void) BANKING_CTRL {
	// disable all interrupts
	PM_CTRL_INTERRUPT_REG2.BT.B2 = 0x0;
	PM_CTRL_INTERRUPT_REG2.BT.B3 = 0x0; // PU_RX|PU_TX|PU_PLL|rx_init|regclk_dis|PU_IVREF
	reg_INT_PU_PLL_OR_CHG_MASK_LANE = 0;

	//INT0 for MCU Wakeup from STOP.
	//reg_INT0_REFCLK_DIS_EN_INT_EN_LANE = 0; //use only for mcu stop

	//int3
	reg_INT3_INT_REFCLK_DIS_CHG_INT_EN_LANE = 0;
        reg_INT3_INT_PU_IVREF_CHG_INT_EN_LANE = 0;

	//int9
	reg_INT9_PM_CHG_INT_EN_LANE = 0;

	//int1
	reg_INT1_INT_POWER_STATE_VALID_RISE_INT_EN_LANE = 0;

	//int2
	reg_INT2_SPD_INT_GEN_EN_LANE = 0;

	//int11
	reg_INT11_RX_TRAIN_ENABLE_INT_EN_LANE = 0;

	//int5
	reg_INT5_TX_TRAIN_ENABLE_INT_EN_LANE = 0;

	//int10
	reg_INT10_INT_RX_INIT_RISE_INT_EN_LANE = 0;

	//int7
	//reg_INT7_REMOTE_CTRL_VALID_INT_EN_LANE = 0; //no txtrain_if in fw
	
	//int12
	//reg_INT12_PIN_LOCAL_CTRL_FIELD_READY_INT_EN_LANE = 0;  //no APTA
	
	//extpin
	//reg_EXTINT_MCU_INT_EN_LANE = 0;

	pll_clk_ready_all_0();
	reg_ANA_PU_IVREF = 1;
	reg_ANA_PU_IVREF_DLY1 =	1;
	reg_ANA_PU_IVREF_DLY2 =	1;
	reg_ANA_PU_IVREF_DLY3 =	1;
	reg_ANA_PU_PLL_LANE = 0;
	reg_ANA_PU_PLL_DLY_LANE	= 0;
	reg_ANA_PU_RX_LANE	= 0;
	reg_ANA_PU_RX_DLY_LANE	= 0;
	reg_ANA_PU_TX_LANE = 0;
	reg_ANA_PU_SQ_LANE	= 0;
	//reg_ANA_PLL_CLK_READY_PRE0 = 0;
	//reg_ANA_PLL_CLK_READY_PRE1 = 0;
	//reg_ANA_PLL_CLK_READY_LANE = 0;

	reg_DTL_FLOOP_FREEZE_LANE =	1;

	reg_ANA_RX_DTL_LOOP_FREEZE_LANE = 1;

	DTL_DTX_DFE_clkoff_reset_1();
	//reg_DTL_CLK_OFF_LANE = 1; 
	//reg_DTX_CLK_OFF_LANE = 1;
	//reg_DFE_CLK_OFF_LANE = 1; 
	//reg_RESET_DTL_LANE = 1;
	//reg_RESET_DTX_LANE = 1;
	//reg_RESET_DFE_LANE = 1;

	reg_ANA_TX_HIZ_EN_LANE = 0;

#ifndef _56G_R1P0
	reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
	reg_ANA_BEACON_EN_LANE = 0;
	reg_ANA_TXDETRX_START_LANE = 0;
	reg_ANA_TXDETRX_EN_LANE = 0;
	reg_PIN_TXDETRX_VALID_LANE = 0;
#endif

	reg_EOM_RESET_INTP_EXT_LANE = 1;
	reg_TXINTP_RESET_EXT_LANE = 1;
	reg_RESET_INTP_EXT_LANE = 1;
	reg_RESET_ANA_LANE = 1;
	reg_REFCLK_DIS_FM_PM = 0;
#if 0
	reg_RESET_ANA_RING = 1;
	//reg_ANA_PLL_CLK_READY_PRE0_RING	= 0;
	//reg_ANA_PLL_CLK_READY_PRE1_RING	= 0;
	//reg_ANA_PLL_CLK_READY_RING = 0;
	reg_ANA_PU_PLL_LANE_RING = 0;
	reg_ANA_PU_PLL_DLY_LANE_RING = 0;
	reg_RESET_DTX_RING = 1;
	reg_DTX_CLK_OFF_RING = 1;
#endif
}
// design removed.
//void txdigital_align(void)	{ 
//		if(mcuid==cmx_MASTER_MCU_SEL_7_0) {
//		  master_sync_request(); 
//		  reg_TX_CLK_DIV_RST = 1; 
//          reg_TX_CLK_DIV_RST = 0; 
//		  master_sync_clean(); 
//	   } else { 
//		slave_sync_wait(); 
//	   } 
//}
 



