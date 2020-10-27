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
#pragma codeseg BANK1
#endif

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

	PHY_STATUS = ST_POSEQ;
	
 	reg_ANA_REG_SU_DLY_SEL_1_0 = 3;
	reg_ANA_REG_HD_DLY_SEL_1_0 = 3;

	while(! (reg_PIN_PU_PLL_RD_LANE));

	//read user data
	init_xdata();

    //power on seq start	 
    reg_PWRON_SEQ = 1;
	cmx_CAL_DONE = 1;

	while(! (reg_PIN_PU_IVREF_RD));

	reg_DTL_LOOP_FREEZE_LANE = 1;  //analog deleted
	reg_DTL_FLOOP_FREEZE_LANE = 1;

	reg_RESET_ANA = 1;	reg_RESET_ANA_RING = 1;
	reg_EOM_RESET_INTP_EXT_LANE = 1; 
	reg_TX_INTPRESET_EXT = 1; 	    
	reg_RESET_INTP_EXT_LANE = 1;    

	PM_CMN_REG2.BT.B2 = 0x0f; //ana_pu_ivref*=1
	
    //power on seq start	 
	reg_ANA_PU_SQ_LANE = 1;
	
	if(mcuid== master_mcu) {	
		reg_ANA_PU_PLL = 1;
		reg_ANA_PU_PLL_DLY = 1;
		
		reg_SHRTR = 1;
	}	
	while(reg_ANA_PU_PLL_DLY==0 && reg_ANA_PU_PLL==0);	

	//delay(T_40us);
    while(! (reg_PIN_PU_PLL_RD_LANE && reg_PIN_PU_TX_RD_LANE));
 	reg_ANA_PU_RX_LANE = 1;
	reg_ANA_PU_RX_DLY_LANE = 1;

	reg_EOM_RESET_INTP_EXT_LANE = 0; 
	reg_TX_INTPRESET_EXT = 0; 	    
	reg_RESET_INTP_EXT_LANE = 0;    
	
	reg_ANA_PU_TX_LANE = 1;

	set_timer_cnt();

	//init_reg();
	reg_INT_RX_INIT_RISE_ISR_LANE = 0;
	SPD_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0x0;
	PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0;
	PM_CTRL_INTERRUPT_REG1_LANE.BT.B2 = 0;
	MCU_IRQ_LANE.BT.B0 = 0;
	max_gen = cmx_PHY_GEN_MAX_3_0;
	
	//int setup
	//int2
	if(max_gen==0 || phy_mode==SERDES)	reg_INT2_SPD_INT_GEN_EN_LANE = 0;
	else	reg_INT2_SPD_INT_GEN_EN_LANE = 1;
	//int9
	reg_INT9_PM_CHG_INT_EN_LANE = 1;
	if(mcuid==master_mcu) reg_INT9_INT_PU_PLL_OR_CHG_INT_EN_LANE = 1;
	reg_INT1_INT_POWER_STATE_VALID_RISE_INT_EN_LANE = 0;
	//int8
	reg_INT8_PM_PCIE_FUNC_CHG_INT_EN_LANE = 0;
	//int10
	reg_INT10_INT_RX_INIT_RISE_INT_EN_LANE = 1;
	//int4
	reg_TRX_TRAIN_TIMEOUT_EN_LANE = 0; //default=1
	reg_INT4_TRX_TRAIN_STOP_INT_EN_LANE = 1;
	
   if(phy_mode==SERDES || phy_mode==USB) {
		reg_TX_TRAIN_PAT_TWO_ZERO_LANE = 1;
		reg_TX_TRAIN_PAT_MODE_LANE = 0;  
		no_pllspdchg = 1;
	}	

   //initial speed load
	gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_3_0; gen_tx = min(gen_tx, cmx_PHY_GEN_MAX_3_0);
	gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_3_0; gen_rx = min(gen_rx, cmx_PHY_GEN_MAX_3_0);  	
	
	PHY_STATUS = ST_CAL;
}
#endif

void PowerUp_Seq(void) BANKING_CTRL {

	reg_ANA_REG_SU_DLY_SEL_1_0 = 3;
	reg_ANA_REG_HD_DLY_SEL_1_0 = 3;

	while(! (reg_PIN_PU_PLL_RD_LANE));	

	PHY_STATUS = ST_POSEQ;

	//read user data
	init_xdata();

	#ifndef _LAB
	while( !reg_PIN_PU_IVREF_RD );
	#endif

	reg_DTL_LOOP_FREEZE_LANE = 1;  //analog deleted
	reg_DTL_FLOOP_FREEZE_LANE = 1;


	//reg_FFE_PULSE_EN_LANE = 0;
	reg_RESET_ANA = 1;	reg_RESET_ANA_RING = 1;
	reg_EOM_RESET_INTP_EXT_LANE = 1; 
	reg_TX_INTPRESET_EXT = 1; 	    
	reg_RESET_INTP_EXT_LANE = 1;    

	if(mcuid==master_mcu) {
		reg_PWRON_SEQ = 1;
		cmx_CAL_DONE = 1;
		delay(T_20us);
		
		pu_ivref_on();
	} else { 
		check_pu_ivref();
	}
	
	delay(T_5us);
	
	reg_ANA_PU_SQ_LANE = 1; 
	delay(T_15us); // 20uS delay from PU_IVREF=1

	while(! (reg_PIN_PU_PLL_RD_LANE && reg_PIN_PU_TX_RD_LANE && reg_PIN_PU_RX_RD_LANE));

	if(mcuid== master_mcu) {
		reg_ANA_PU_PLL = 1;
		delay(T_p5us);
		reg_ANA_PU_PLL_DLY = 1;
		
		//if(ring_pll_enabled)	{ reg_DIV_1G_EN=1; } //move to cal_top
	} 

	while(reg_ANA_PU_PLL_DLY==0 || reg_ANA_PU_PLL==0);
	
	pu_rx_on();
	
	delay(T_40us);
	reg_EOM_RESET_INTP_EXT_LANE = 0; 
	reg_TX_INTPRESET_EXT = 0; 	    
	reg_RESET_INTP_EXT_LANE = 0;    
	
	while(! (reg_PIN_PU_PLL_RD_LANE && reg_PIN_PU_TX_RD_LANE));
	
	reg_ANA_PU_TX_LANE = 1;

	//-----------
	init_reg();

	//-----------
	
	//Enable CPU IRQ
	{  //sas_sata
		PM_CTRL_INTERRUPT_REG2.BT.B2 = 0xfc;
		PM_CTRL_INTERRUPT_REG2.BT.B3 = 0x11; // PU_RX|PU_TX|PU_PLL|rx_init|regclk_dis|PU_IVREF
		if(mcuid== master_mcu) reg_INT_PU_PLL_OR_CHG_MASK_LANE = 0; //PU_PLL_OR
		//reg_INT_TXDETRX_EN_CHG_MASK_LANE =1;
		//reg_INT_BEACON_TX_EN_CHG_MASK_LANE = 1;	
	}

	//INT0 for MCU Wakeup from STOP.
	//reg_INT0_REFCLK_DIS_EN_INT_EN_LANE = 1; //use only for mcu stop
		
	//int3
	reg_INT3_INT_REFCLK_DIS_CHG_INT_EN_LANE = 1;
	reg_INT3_INT_PU_IVREF_CHG_INT_EN_LANE = 1;

	//int9
	reg_INT9_PM_CHG_INT_EN_LANE = 1;
	if(mcuid== master_mcu) reg_INT9_INT_PU_PLL_OR_CHG_INT_EN_LANE = 1;
	reg_INT1_INT_POWER_STATE_VALID_RISE_INT_EN_LANE = 0;
	//int8
	reg_INT8_PM_PCIE_FUNC_CHG_INT_EN_LANE = 0;

	//int2
	reg_INT2_SPD_INT_GEN_EN_LANE = 1;
	//int11
	reg_INT11_RX_TRAIN_ENABLE_INT_EN_LANE = 1;

	//int5
	reg_INT5_TX_TRAIN_ENABLE_INT_EN_LANE = 1;

	//int10
	reg_INT10_INT_RX_INIT_RISE_INT_EN_LANE = 1;

	reg_TRX_TRAIN_TIMEOUT_EN_LANE = 0; //default=1

	//int7
	//reg_INT7_REMOTE_CTRL_VALID_INT_EN_LANE = 1; //no txtrain_if in fw

	//int12
	//reg_INT12_PIN_LOCAL_CTRL_FIELD_READY_INT_EN_LANE = 1;  //no APTA
	
	//extpin 
	reg_EXTINT_MCU_INT_EN_LANE = 1;

	//-----------
	set_timer_cnt();
	
	//-----------
    //initial speed load
	gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_3_0; gen_tx = min(gen_tx, cmx_PHY_GEN_MAX_3_0);
	gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_3_0; gen_rx = min(gen_rx, cmx_PHY_GEN_MAX_3_0);  	
	//removed loadSpeedtbl(); //~5.6uS
	
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
	
	/* HR:cannot use dma; xdata is not allocated by compiler.
	DMASA = (uint16_t )&DFE_CONTROL_0;
	DMATA = (uint16_t )&CTRL_CONFIG0;
	DMAS2 = 0; DMAT2 = 0; DMAC2 = 0;
	DMAC = MAXXDATLANE;
	DMAM0 = 0x64; //10100100
	DMAM1 = 0x1f;
	DMASEL = 0x81;*/
	
	/* clear by xdat_cmn download
	if(mcuid== master_mcu) {

		if( BYPASS_XDAT_INIT == 0 ) {

	//reg_MCU_DEBUG7_LANE_7_0 = 0x58;
			ptr = (__xdata uint8_t *)(XDAT_CMN_BASE);
			while(ptr < (XDAT_CMN_BASE + MAXXDATCMN) ) {
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
 
	SYNC_STATUS_LANE = IDLE;	
	if(mcuid== master_mcu) {
	
		SYNC_REQUEST_LANE = 0; 
		
		//-------------------
		//indicate to let SOC config registers.
		//cmx_MCU_INIT_DONE = 1; //removed
		//reg_SET_MCU_INT_LANE0 = 1;
	}
	
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
	//reg_MCU_DEBUG7_LANE_7_0 = 0x88;
	PLL_RATE_SEL = 0xff;
	PLL_RATE_SEL_RING = 0xff;
	
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

	reg_ANA_REFCLK_SEL = reg_PIN_REFCLK_SEL_RD; 
	SYNC_STATUS_LANE_EN = 1;
	ring_use_250m = USE_RING_REFCLK_250M;	
	reg_CLK1G_REFCLK_SEL = ring_use_250m==0;
	reg_REF_CLK_RING_SEL = ring_use_250m==0;

	reg_SET_MCU_COMMAND0_LANE0_31_0_b0 |= CONTROL_CONFIG0.BT.B2; 
	
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
	
	cmx_FW_MAJOR_VER_7_0 =  MAJOR_VER;
	cmx_FW_MINOR_VER_7_0 =  MINOR_VER;
	cmx_FW_PATCH_VER_7_0 =  PATCH_VER;
	cmx_FW_BUILD_VER_7_0 =  BUILD_VER;

	if(phy_mode == PCIE) PIPE4_EN = 1;	//set default for PCIe mode
	
	}
	
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

	tx_adapt_g0_en = 1;	
    tx_adapt_gn1_en = 1;
    tx_adapt_g1_en = 0; 
    	
	//ana_tsen_adc_rdy_rd = 0;		
	
	pre_sq_rd = 1;

	//train_status_reset(); //remove for sim
}

void init_reg(void) BANKING_CTRL {

	//clear int req
    reg_TX_TRAIN_ENABLE_ISR_LANE = 0;
	reg_RX_TRAIN_ENABLE_ISR_LANE = 0;
	reg_FRAME_LOCK_ISR_LANE = 0;
	reg_REMOTE_CTRL_VALID_ISR_LANE = 0;
	reg_INT_RX_INIT_RISE_ISR_LANE = 0;
	SPD_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0x0;
	PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0;
	PM_CTRL_INTERRUPT_REG1_LANE.BT.B2 = 0;
	MCU_IRQ_LANE.BT.B0 = 0;
	
	//mask irq lane
	RX_LANE_INTERRUPT_MASK.BT.B3 = 0x60; //reg_FRAME_UNLOCK_MASK_LANE,reg_FRAME_LOCK_MASK_LANE
	
     //For SAS, n=2680, train_pat_num=0x42 (default)
 	 //For Ethernet mode, n=4384, train_pat_num=0x88
	/* duplicated
	 reg_TRAIN_PAT_NUM_LANE_8_0_b0 = 0x08; //0x88; //
	 reg_TRAIN_PAT_NUM_LANE_8_0_b1 = 0x01; 
	 reg_TX_TRAIN_PAT_TOGGLE_LANE = 0;
	 reg_TX_TRAIN_PAT_SEL_LANE_1_0 = 1;  //16ffc Changed */
	 reg_TX_TRAIN_PAT_TWO_ZERO_LANE = 1;
	 reg_TX_TRAIN_PAT_MODE_LANE = 0;

   //if(cmx_PHY_GEN_MAX_3_0 < max_gen) 
	//     max_gen = cmx_PHY_GEN_MAX_3_0;
   
   if(phy_mode==SERDES || phy_mode==USB)
		no_pllspdchg = 1;
      
   //soc control fbck_sel
   if(reg_RING_REF_DIV_SEL==1 && phy_mode<=SAS) reg_ANA_FBCK_SEL_RING = 1;  
 
   //set default
	cal_phase = 0x1e;
	//same as default 
	reg_TEMPC_MUX_HOLD_SEL_3_0 = 7; //to cover large range
	reg_TEMPC_MUX_SEL_3_0 = 6; 
	//reg_TX_SEL_BITS_FORCE_LANE = 1;
	//reg_RX_SEL_BITS_FORCE_LANE = 1;
	reg_CLK_DIRECTION_RINGPLL_LANE = 1; //ringpll direction control: ringpll->1->0, ringpll->2->3
	reg_PLL_PWEXP_DIS_RING = 0;

	
	//#ifdef _28G_R2P0
	//reg_CLK_RXACCAP_SEL_LANE_1_0 = 1; //use refclk 
	//#else
	//reg_ANA_RSVD6_LANE_7_0 = 0xd0; //use refclk
	//#endif

	//reset dfe_res to max
	dfe_f0_res_sel = 3;
	dfe_res_f1 = 3;
#ifndef _56GR1P1_TRAIN
	dfe_f2_res_sel = 1;
#else
	dfe_f2_res_sel = 3;
#endif

	dfe_f34_res_sel = 1;
	dfe_f567_res_sel = 1;

#ifndef _56G_R1P0
	//default
	//reg_TX_EM_PO_CTRL_LANE_3_0 = 0x0f; //no txffe ctrl
	//reg_TX_EM_PRE_CTRL_LANE_3_0 = 0x0f;
#endif
	
}

__code uint8_t refclk_tb[] = { 25, 30, 40, 50, 62, 100, 125, 156 };
	
void set_timer_cnt() BANKING_CTRL {
    uint16_t temp;
	uint32_t temp32;
	uint8_t i;
	
	i = reg_PIN_REF_FREF_SEL_RD_4_0;
	cmx_REFCLK_FREQ_7_0 = refclk_tb[i];
	/*
	switch(reg_PIN_REF_FREF_SEL_RD_4_0) {
	case 0: cmx_REFCLK_FREQ_7_0 = 25; break;
	case 1: cmx_REFCLK_FREQ_7_0 = 30; break;
	case 2: cmx_REFCLK_FREQ_7_0 = 40; break;
	case 3: cmx_REFCLK_FREQ_7_0 = 50; break;
	case 4: cmx_REFCLK_FREQ_7_0 = 62; break;
	case 5: cmx_REFCLK_FREQ_7_0 = 100; break;
	case 6: cmx_REFCLK_FREQ_7_0 = 125; break;
	case 7: cmx_REFCLK_FREQ_7_0 = 156; break;
	default: cmx_REFCLK_FREQ_7_0 = 50; break;
	}*/
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
	
	// --- pll_cal time delay set up
	/* removed to reduce program size
	if(cmx_TSHRTR_7_0==0) Tshrtr = T_2us; 
	else if(cmx_TSHRTR_7_0==1) Tshrtr = T_4us; 
	else if(cmx_TSHRTR_7_0==2) Tshrtr = T_8us; 
	else Tshrtr = T_16us; 
	
	if(cmx_THOLD_SEL2_7_0==0) Thold_sel = T_2us; 
	else if(cmx_THOLD_SEL2_7_0==1) Thold_sel = T_4us; 
	else if(cmx_THOLD_SEL2_7_0==2) Thold_sel = T_8us; 
	else Thold_sel = T_16us; 

	switch( cmx_TPLLAMP0_1_0 ) {
	case 1: Tpamp0 = T_37p5us; break;
	case 2: Tpamp0 = T_50us; break;	
	case 3: Tpamp0 = T_62p5us; break;
	default: Tpamp0 = T_25us; break;	 	
	}
	
	if( cmx_PLLAMP_CAL_SPEEDUP_DISABLE == 1 ) { //slow
		switch( cmx_TPLLAMP1_1_0 ) {
		case 1: Tpamp1 = T_37p5us; break;
		case 2: Tpamp1 = T_50us; break;
		case 3: Tpamp1 = T_62p5us; break;
		default: Tpamp1 = T_25us; break;	 	
		}
	}
	else { //fast
		switch( cmx_TPLLAMP1_1_0 ) { 
		case 1: Tpamp1 = T_3p75us; break;
		case 2: Tpamp1 = T_5us; break;
		case 3: Tpamp1 = T_6p25us; break;
		default: Tpamp1 = T_2p5us; break;	 	
		}
	}	

	switch( cmx_TPLLFREQ0_1_0 ) { 
	case 1: Tpfreq0 = T_3us; break;
	case 2: Tpfreq0 = T_4p5us; break;
	case 3: Tpfreq0 = T_6us; break;
	default: Tpfreq0 = T_7p5us;	break; 	
	}

	switch( cmx_TPLLFREQ1_1_0 ) { 
	case 1: Tpfreq1 = T_5us; break;
	case 2: Tpfreq1 = T_7p5us; break;
	case 3: Tpfreq1 = T_10us; break;
	default: Tpfreq1 = T_12p5us; break;		
	}

	switch( cmx_TPLLFREQ2_1_0 ) { 
	case 1: Tpfreq2 = T_4us; break;
	case 2: Tpfreq2 = T_6us; break;
	case 3: Tpfreq2 = T_8us; break;
	default: Tpfreq2 = T_10us;	break;	
	}

	switch( cmx_TPLLFREQ3_1_0 ) { 
	case 1: Tpfreq3 = T_3us; break;
	case 2: Tpfreq3 = T_4p5us; break;
	case 3: Tpfreq3 = T_6us; break;
	default: Tpfreq3 = T_7p5us;	break;	
	}
	
	if( cmx_TPLLFREQ4 ) Tpfreq4 = T_100us;
	else Tpfreq4 = T_50us;		
	*/
	
	// --- 
	//if(lnx_TX_TRAIN_FRAME_DET_TIMER_ENABLE_LANE) {
		//todo
		//lnx_TX_TRAIN_FRAME_DET_TIMER_LANE_7_0 = 0x01;
		//reg_TIMER0_CNT_LANE_31_0_b0
		//reg_TIMER0_CNT_LANE_31_0_b1
		//reg_TIMER0_CNT_LANE_31_0_b2
		//reg_TIMER0_CNT_LANE_31_0_b3
	//}
	
	//if(lnx_TX_TRAIN_TIMER_ENABLE_LANE) {
		//todo
		//lnx_TRX_TRAIN_TIMER_LANE_15_0 = 0x1f3;
		//reg_TIMER1_CNT_LANE_31_0_b0
		//reg_TIMER1_CNT_LANE_31_0_b1
		//reg_TIMER1_CNT_LANE_31_0_b2
		//reg_TIMER1_CNT_LANE_31_0_b3
	//}
	
	//if(lnx_RX_TRAIN_TIMER_ENABLE_LANE) {
		//todo
		//lnx_RX_TRAIN_TIMER_LANE_15_0 = 0x13;
		//reg_TIMER2_CNT_LANE_31_0_b0
		//reg_TIMER2_CNT_LANE_31_0_b1
		//reg_TIMER2_CNT_LANE_31_0_b2
		//reg_TIMER2_CNT_LANE_31_0_b3
	//}
	
	//if(lnx_TX_TRAIN_STATUS_DET_TIMER_ENABLE_LANE) {
		//todo
		//lnx_TX_TRAIN_STATUS_DET_TIMER_LANE_7_0 = 0x03;
		//reg_TIMER3_CNT_LANE_31_0_b0
		//reg_TIMER3_CNT_LANE_31_0_b1
		//reg_TIMER3_CNT_LANE_31_0_b2
		//reg_TIMER3_CNT_LANE_31_0_b3
	//}
	
}

void DTL_DTX_DFE_clkoff_reset_0(void) BANKING_CTRL {

	reg_DTL_CLK_OFF_LANE= 0; 
	reg_DTX_CLK_OFF = 0;	
	if(ring_pll_enabled) reg_DTX_CLK_OFF_RING = 0;
	reg_DFE_CLK_OFF_LANE = 0; 
	
	delay(Tus);
	
	reg_RESET_DTL_LANE = 0;	
	reg_RESET_DTX	= 0; 
	if(ring_pll_enabled) reg_RESET_DTX_RING = 0;
	reg_RESET_DFE_LANE = 0;

}

void DTL_DTX_DFE_clkoff_reset_1(void) BANKING_CTRL {

	//reg_DFE_ADAPT_CONT_LANE = 0;
	//reg_DFE_START_LANE = 0;

	reg_DTL_CLK_OFF_LANE= 1; 
	if(!ring_pll_enabled && !no_pllspdchg) {reg_DTX_CLK_OFF = 1; reg_DTX_CLK_OFF_RING = 1; }
	reg_DFE_CLK_OFF_LANE = 1; 
	reg_RESET_DTL_LANE = 1;	
	if(!ring_pll_enabled && !no_pllspdchg) {reg_RESET_DTX	= 1; reg_RESET_DTX_RING = 1; }
	CKCON = 0x07 ;  //MCU WAIT time the slowest
	reg_RESET_DFE_LANE = 1;
	CKCON = 0x00 ; //MCU WAIT time setting back to normal.

}
		
void txlane_align(void) BANKING_CTRL {
#if 0
	uint8_t save_txdcc_en, save_txdcccal_en, save_txdcccal_pdiv_en;
	
	save_txdcc_en = reg_TXDCC_EN_LANE;
	save_txdcccal_en = reg_TXDCCCAL_EN_LANE;
	save_txdcccal_pdiv_en = reg_TXDCCCAL_PDIV_EN_LANE; 
	
	if(mcuid==master_mcu) { 
		  pcie_master_sync_request(); 
		  reg_ANA_TXCLK_SYNC_EN_PLL = 1; 
		  if( ring_pll_enabled ) reg_ANA_TXCLK_SYNC_EN_PLL_RING = 1;
		  pcie_master_sync_clean(); 
	 }    
	 else { 
		slave_sync_wait(); 
	 } 
	   reg_ANA_TX_TXCLK_SYNC_EN_LANE = 1; 
	   reg_TXDCC_EN_LANE = 0; 
	   reg_TXDCCCAL_EN_LANE = 0; 
	   reg_TXDCCCAL_PDIV_EN_LANE = 0;
	   delay(Tus);  
	   reg_ANA_TX_TXCLK_SYNC_EN_LANE = 0; 
	   
	   if(mcuid==master_mcu) { 
		  pcie_master_sync_request(); 
		  reg_ANA_TXCLK_SYNC_EN_PLL = 0;	
		  if( ring_pll_enabled ) reg_ANA_TXCLK_SYNC_EN_PLL_RING = 0;
		  pcie_master_sync_clean();		
	   } 
	   else { 
		slave_sync_wait(); 
	   } 
	   
	   reg_TXDCC_EN_LANE = save_txdcc_en; 
	   reg_TXDCCCAL_EN_LANE = save_txdcccal_en;
	   reg_TXDCCCAL_PDIV_EN_LANE = save_txdcccal_pdiv_en;
#endif
}

void pll_clk_ready_all_0(void) BANKING_CTRL { //ana_pll_clk_ready**=0
	reg_ANA_PLL_CLK_READY = 0; 
	reg_ANA_PLL_CLK_READY_PRE1 =0;	
	reg_ANA_PLL_CLK_READY_PRE0 = 0;
	reg_ANA_PLL_CLK_READY_PRE0_RING = 0;
	reg_ANA_PLL_CLK_READY_PRE1_RING =0;		
	reg_ANA_PLL_CLK_READY_RING = 0;
	
	// don't have to pu_pll_ring=0 here.
	//delay(Tus);
	//reg_ANA_PU_PLL_RING = 0;
	//reg_ANA_PU_PLL_DLY_RING = 0;
}

void check_pll_clk_ready(void) BANKING_CTRL {
	do {
		/*if(ring_pll_enabled && reg_ANA_PLL_CLK_READY_RING) break;
		else*/
		if(reg_ANA_PLL_CLK_READY) break;
		if(PHY_NS!=ST_INIT) break;
	} while(1);
} 

void pu_ivref_on(void) BANKING_CTRL {

	reg_ANA_PU_IVREF = 1;
	delay(Tus);
	reg_ANA_PU_IVREF_DLY1 = 1;
	delay(Tus);
	reg_ANA_PU_IVREF_DLY2 = 1;
	delay(Tus);
	reg_ANA_PU_IVREF_DLY3 = 1;

}

void check_pu_ivref(void) BANKING_CTRL {
	do {
		if(reg_ANA_PU_IVREF_DLY3) break;
	} while(1);

}

void pu_pll_off(void) BANKING_CTRL { //off - reset_ana*, ana_pu_pll_*,  pll_clk_ready_*, dtx_clk_off*, reset_dtx*

	if(mcuid== master_mcu) { 
						
		reg_DTX_CLK_OFF = 1;	reg_DTX_CLK_OFF_RING = 1;
		reg_RESET_DTX	= 1; 	reg_RESET_DTX_RING = 1;
		
		pll_clk_ready_all_0();
		
		delay(Tus);
		reg_RESET_ANA = 1;	reg_RESET_ANA_RING = 1;	
		reg_ANA_PU_PLL_DLY = 0; reg_ANA_PU_PLL_DLY_RING = 0;
		reg_ANA_PU_PLL = 0; reg_ANA_PU_PLL_RING = 0; 

		SYNC_SATUS_PLL_OR_CHG = 1;	
		
	} 		
	
	while(reg_ANA_PU_PLL || reg_ANA_PU_PLL_RING );

}

void pu_pll_on(void) BANKING_CTRL { // on - *pll_fast_cal, dtx_clk_off*, reset_dtx*

	if(mcuid== master_mcu) {
		//fast startup
		pll_fast_cal();			
		if(ring_pll_enabled) {
			ring_pll_fast_cal();
		}		
		
		reg_DTX_CLK_OFF = 0;	reg_DTX_CLK_OFF_RING = 0;
	
		delay(Tus);
		reg_RESET_DTX	= 0;	reg_RESET_DTX_RING = 0;
		
		SYNC_SATUS_PLL_OR_CHG = 0;		
	} 
	else 
		while( reg_RESET_DTX || reg_RESET_DTX_RING );

}

void pu_rx_on(void) BANKING_CTRL {

	reg_ANA_PU_PLL = 1; //need gate pu_rx
	reg_ANA_PU_RX_LANE = 1;	
	delay(T_p5us);
	reg_ANA_PU_RX_DLY_LANE = 1;
	delay(T_p4us);
#ifndef _56G_R1P0
	reg_FFE_PULSE_EN_LANE = 1;
	reg_ANA_TRX_ANA_RSVD_IN_LANE_15_0_b1 |= 0x01;
#endif
	
}

void pu_rx_off(void) BANKING_CTRL {

#ifndef _56G_R1P0
	reg_FFE_PULSE_EN_LANE = 0;
	reg_ANA_TRX_ANA_RSVD_IN_LANE_15_0_b1 &= 0xfe;
#endif
	reg_ANA_PU_RX_LANE = 0;
	reg_ANA_PU_RX_DLY_LANE = 0;
}

/* no reset_core
void reset_pwr_reg(void) {

	pll_clk_ready_all_0();
	reg_ANA_PU_IVREF = 1;
	reg_ANA_PU_IVREF_DLY1 =	1;
	reg_ANA_PU_IVREF_DLY2 =	1;
	reg_ANA_PU_IVREF_DLY3 =	1;
	reg_ANA_PU_PLL = 0;
	reg_ANA_PU_PLL_DLY	= 0;
	reg_ANA_PU_RX_LANE	= 0;
	reg_ANA_PU_RX_DLY_LANE	= 0;
	reg_ANA_PU_TX_LANE = 0;
	reg_ANA_PU_SQ_LANE	= 0;
	//reg_ANA_PLL_CLK_READY_PRE0 = 0;
	//reg_ANA_PLL_CLK_READY_PRE1 = 0;
	//reg_ANA_PLL_CLK_READY = 0;
	reg_PIN_PLL_READY_RX_LANE = 0;
	reg_PIN_PLL_READY_TX_LANE =	0;

	reg_DTL_FLOOP_FREEZE_LANE =	1;

	reg_DTL_LOOP_FREEZE_LANE = 1;

	reg_DFE_CLK_OFF_LANE = 1;
	reg_DFE_CLK_OFF_LANE = 1;

	reg_DTX_CLK_OFF	= 1;
	reg_RESET_DTL_LANE = 1;
	reg_RESET_DTX = 1;
	reg_RESET_DFE_LANE = 1;
	reg_ANA_TX_IDLE_HIZ_EN_LANE = 0;

#ifndef _56G_R1P0
	reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
	reg_ANA_BEACON_EN_LANE = 0;
	reg_ANA_TXDETRX_START_LANE = 0;
	reg_ANA_TXDETRX_EN_LANE = 0;
	reg_PIN_TXDETRX_VALID_LANE = 0;
#endif

	reg_EOM_RESET_INTP_EXT_LANE = 1;
	reg_TX_INTPRESET_EXT = 1;
	reg_RESET_INTP_EXT_LANE = 1;
	reg_RESET_ANA = 1;
	reg_REFCLK_DIS_FM_PM = 0;
	reg_RESET_ANA_RING = 1;
	//reg_ANA_PLL_CLK_READY_PRE0_RING	= 0;
	//reg_ANA_PLL_CLK_READY_PRE1_RING	= 0;
	//reg_ANA_PLL_CLK_READY_RING = 0;
	reg_ANA_PU_PLL_RING = 0;
	reg_ANA_PU_PLL_DLY_RING = 0;
	reg_RESET_DTX_RING = 1;
	reg_DTX_CLK_OFF_RING = 1;

}
*/
	   
// design removed.
//void txdigital_align(void)	{ 
//		if(mcuid==master_mcu) { 
//		  master_sync_request(); 
//		  reg_TX_CLK_DIV_RST = 1; 
//          reg_TX_CLK_DIV_RST = 0; 
//		  master_sync_clean(); 
//	   } else { 
//		slave_sync_wait(); 
//	   } 
//}
 


