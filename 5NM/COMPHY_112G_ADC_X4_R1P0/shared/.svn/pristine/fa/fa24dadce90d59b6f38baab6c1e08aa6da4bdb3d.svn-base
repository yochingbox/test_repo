/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file power.c
* \purpose power control
* \History
*	10/15/2015 Jue Wang		Initial 
*   03/22/2019 Heejeong Ryu     Added ANA_CLK100M_125M_SEL/EN control
*/

#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg BANK2
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

	reg_MCU_DEBUGC_LANE_7_0 = reg_PIN_SPD_CFG_RD_3_0;
	
  reg_MCU_DEBUG0_LANE_7_0 = 0x20;
  //while((reg_MCU_DEBUGA_LANE_7_0=0x5E)&&!(reg_PIN_PU_PLL_RD_LANE));
  wait_for(reg_PIN_PU_PLL_RD_LANE,0);
  PHY_STATUS = ST_POSEQ;
  reg_PWRON_SEQ_LANE = 1;
  cmx_CAL_DONE = 1;

  reg_PLL_TS_FBDIV_LANE_9_8 = 0x0;
  reg_PLL_RS_FBDIV_LANE_9_8 = 0x0;
  reg_PLL_TS_FBDIV_LANE_7_0 = 0x2d;
  reg_PLL_RS_FBDIV_LANE_7_0 = 0x2d;
  reg_PLL_TS_REFDIV_LANE_3_0 = 0x2;
  reg_PLL_RS_REFDIV_LANE_3_0 = 0x2;

  //while((reg_MCU_DEBUGA_LANE_7_0=0x5F)&&!(reg_PIN_PU_IVREF_RD));
  wait_for(reg_PIN_PU_IVREF_RD,0);
  //delay(T_20us);
  reg_ANA_PU_IVREF = 1;
  //delay(Tus);
  reg_ANA_PU_IVREF_DLY1 = 1;
  //delay(Tus);
  reg_ANA_PU_IVREF_DLY2 = 1;
  //delay(Tus);
  reg_ANA_PU_IVREF_DLY3 = 1;

  reg_ANA_PU_TX_OR_FORCE = 1;  //PU_TX_OR controlled through force
  reg_ANA_PU_TX_OR = 1;

  reg_ANA_PLL_RS_PU_PLL_LANE = 1;
  reg_ANA_PLL_TS_PU_PLL_LANE = 1;

  reg_ANA_PLL_RS_PU_PLL_DLY_LANE = 1;
  reg_ANA_PLL_TS_PU_PLL_DLY_LANE = 1;

  reg_RX_RESET_ANA_LANE = 0;
  reg_TX_RESET_ANA_LANE = 0;

  //while((reg_MCU_DEBUGA_LANE_7_0=0x60)&&!(reg_PIN_PU_RX_RD_LANE));
  wait_for(reg_PIN_PU_RX_RD_LANE,0);
  reg_RX_ADC_RESET_LANE = 1;
  reg_RX_PI_RESET_EXT_LANE = 1;

  reg_ANA_PU_CTLE_LANE = 1;
  reg_ANA_PU_ADC_LANE = 1;
  reg_ANA_PU_EOM_PI_LANE = 1;
  reg_ANA_PU_PI_LANE = 1;
  reg_ANA_PU_RX_LANE = 1;
  delay(T_p5us);
  reg_ANA_PU_RX_DLY_LANE = 1;
  reg_RX_PI_RESET_EXT_LANE = 0;
  reg_RX_ADC_RESET_LANE = 0;

  //while((reg_MCU_DEBUGA_LANE_7_0=0x61)&&!(reg_PIN_PU_TX_RD_LANE));
  wait_for(reg_PIN_PU_TX_RD_LANE,0);
  reg_ANA_PU_TX_LANE = 1;

  //SKCTRL are PIN and undriven in digital
 
  reg_RX_ADC_RES_SEL_LANE_1_0 = 0;
  //CTLE control
  reg_RX_CTLE_RL1_CTRL_LANE_3_0 = 0x8;
  reg_RX_CTLE_RL1_EXTRA_LANE_2_0 = 0x0;
  reg_RX_CTLE_CL1_CTRL_LANE_3_0 = 0xA;
  reg_RX_CTLE_RS1_CTRL_LANE_3_0 = 0x8;
  reg_RX_CTLE_CS1_CTRL_LANE_5_0 = 0x8;
  reg_RX_CTLE_CUR1_SEL_LANE_3_0 = 0x8;
  reg_RX_CTLE_CS1_MID_LANE_2_0 = 0x4;
  reg_RX_CTLE_RS1_MID_LANE_2_0 = 0x4;
  reg_RX_CTLE_CUR2_SEL_LANE_3_0 = 0x8;
  reg_RX_CTLE_RFB_SEL_LANE_1_0 = 0x2;
  reg_RX_CTLE_GAIN_COARSE_LANE_3_0 = 0xB;
  reg_RX_CTLE_CS2_CTRL_LANE_4_0 = 0x0;
  reg_RX_CTLE_RS2_SEL_LANE_1_0 = 0x1;
  reg_RX_CTLE_RS2_CTRL_LANE_4_0 = 0x0;
  reg_RX_CTLE_HPF_RSEL_1ST_LANE_1_0 = 0x0;
  reg_RX_CTLE_HPF_RSEL_2ND_LANE_1_0 = 0x0;
  reg_RX_CTLE_HPF_RSEL_TH_LANE_1_0 = 0x0;
  reg_RX_CTLE_HPF_SHORT_LANE = 0;
  reg_RX_CTLE_OUT_SQ_EN_LANE = 0;
  reg_RX_CTLE_OUT_DC_EN_LANE = 0;
  reg_RX_CTLE_LB_RES_SEL_LANE_3_0 = 0x8;

  reg_PWRON_SEQ_LANE = 0;
  reg_RX_SEL_BITS_LANE = 1;

  delay(Tus);
  reg_ANA_PLL_RS_CLK_READY_LANE = 1;
  reg_ANA_PLL_TS_CLK_READY_LANE = 1;
  reg_PIN_PLL_READY_TX_LANE = 1;
  reg_PIN_PLL_READY_RX_LANE = 1;
  reg_DET_BYPASS_LANE = 1;

  PHY_STATUS = ST_PLLREADY;
  reg_MCU_DEBUG0_LANE_7_0 = 0x2f;
}
#endif

/*static void power_up_lane_config_update() {

    set_timer_cnt();
    
    if(FAST_POWER_ON_EN) { 
        
    }   
}

static void power_up_common_config_update() {

    set_timer_cnt();

    reg_MCU_DEBUG_CMN_0_7_0 = 0x77;

    if(FAST_POWER_ON_EN) { 
    	CONTROL_CONFIG0.BT.B1 |= 0x18; // EXT_FORCE_CAL_DONE, FAST_DFE_TIMER_EN
		CONTROL_CONFIG0.BT.B2 |= 0xb0; // bypass_delay=4, bypass_poweron_delay=1, BYPASS_SPEED_TABLE_LOAD
		if(cmx_BYPASS_SPEED_TABLE_LOAD_DIS) cmx_BYPASS_SPEED_TABLE_LOAD = 0; //added disable control for Palladium
		//CONTROL_CONFIG0.BT.B3 |= 0x01; // FORCE_CONT_CAL_SKIP
		FORCE_CONT_CAL_SKIP = 1;
		cmx_BYPASS_RX_INIT = 1;
    }   

    //CMN clk div for MCU clock domain counter    
    reg_ANA_TSEN_ADC_CLK_CNT_15_0 = (cmx_MCU_FREQ_15_0 >>2) -1;
    reg_CMN_DIG_CAL2M_DIV_7_0 = (cmx_MCU_FREQ_15_0 >>1) -1;
}

static void power_up_request_common_config_update() {  
    reg_MCU_DEBUG0_LANE_7_0 = 0x77;     
    switch(mcuid) {
        case MCU_LANE0:                   
            reg_MCU_DEBUG0_LANE_7_0 = 0x11;                            
            cmx_COMMON_CONFIG_UPDATE_NEEDED_LANE0 = 1;                                                
            break;                                                          
        case MCU_LANE1:                  
            reg_MCU_DEBUG0_LANE_7_0 = 0x12;                            
            cmx_COMMON_CONFIG_UPDATE_NEEDED_LANE1 = 1;                                                
            break;                                                          
        case MCU_LANE2:                  
            reg_MCU_DEBUG0_LANE_7_0 = 0x13;                            
            cmx_COMMON_CONFIG_UPDATE_NEEDED_LANE2 = 1;                                                
            break;                                                          
        case MCU_LANE3:                  
            reg_MCU_DEBUG0_LANE_7_0 = 0x14;                            
            cmx_COMMON_CONFIG_UPDATE_NEEDED_LANE3 = 1;                                                
            break;                                                         
    }
                
    reg_MCU_DEBUG0_LANE_7_0 = 0x79;     
}*/

void PowerUp_Seq(void) BANKING_CTRL {

	reg_MCU_DEBUGC_LANE_7_0 = reg_PIN_SPD_CFG_RD_3_0;

	PHY_STATUS = ST_POSEQ;
	reg_MCU_DEBUG0_LANE_7_0 = 0x20;
	reg_PIN_PLL_READY_RX_LANE = 0;
	reg_PIN_PLL_READY_TX_LANE = 0;
 
	init_xdata();
	init_reg();

	set_pwron_seq(1);

	set_timer_cnt();

	drv_spd_cfg_dec();

	if (mcuid != MCU_CMN) {

		drv_default_toggle();

#ifdef DRV_PWR_V0
		reg_ANA_REFCLK_SEL = reg_PIN_REFCLK_SEL_RD;
		reg_ANA_PLL_RS_REFCLK_SEL_LANE = reg_PIN_REFCLK_SEL_RD;
		reg_ANA_PLL_TS_REFCLK_SEL_LANE = reg_PIN_REFCLK_SEL_RD;
#else
		reg_ANA_REFCLK_SEL = reg_PIN_REFCLK_SEL_RD_LANE;
		reg_ANA_PLL_RS_REFCLK_SEL_LANE = reg_PIN_REFCLK_SEL_RD_LANE;
		reg_ANA_PLL_TS_REFCLK_SEL_LANE = reg_PIN_REFCLK_SEL_RD_LANE;
#endif


		reg_ANA_PLL_RS_CLK100MOR125M_EN_LANE = cmx_ANA_CLK100M_125M_EN;
		if( cmx_ANA_CLK100M_125M_EN ) {
			reg_ANA_PLL_RS_CLK100M_125M_SEL_LANE = cmx_ANA_CLK100M_125M_SEL;
		}

		wait_for(reg_PIN_PU_PLL_RD_LANE,0);

#ifdef DRV_PWR_V1
//Temp workaround for simulation only
		if(mcuid == master_mcu) {
			FAST_POWER_ON_EN = 1;
			TRAIN_SIM_EN = 1;
		}
//
#endif
        
		set_timer_cnt();
		drv_spd_cfg_dec();

		if(FAST_POWER_ON_EN && mcuid==master_mcu) 
		{
			CONTROL_CONFIG0.BT.B1 |= 0x18; // EXT_FORCE_CAL_DONE, FAST_DFE_TIMER_EN
			CONTROL_CONFIG0.BT.B2 |= 0xb0; // bypass_delay=4, bypass_poweron_delay=1, BYPASS_SPEED_TABLE_LOAD
			if(cmx_BYPASS_SPEED_TABLE_LOAD_DIS) cmx_BYPASS_SPEED_TABLE_LOAD = 0; //added disable control for Palladium
			//CONTROL_CONFIG0.BT.B3 |= 0x01; // FORCE_CONT_CAL_SKIP
			FORCE_CONT_CAL_SKIP = 1;
			cmx_BYPASS_RX_INIT = 1;
		}   

		drv_power_on_seq();

		// TODO reg_DFE_DC_SIGN_XOR_LANE = 1;
		// TODO reg_DFE_DC_E_SIGN_XOR_LANE = 1;

		set_pwron_seq(0);

	}
	else {
		PHY_STATUS_CMN = ST_POSEQ;
        
		//while((reg_MCU_DEBUGA_LANE_7_0=0x62)&&!reg_PIN_PU_IVREF_RD);
		wait_for(reg_PIN_PU_IVREF_RD,0);
		delay(T_20us);
		pu_ivref_on();

		while((reg_MCU_DEBUGA_LANE_7_0=0x63)&&1) {
		#ifdef DRV_PWR_V0
		if(     (mcu_en0?(!cmx_POWER_ON_SEQ_LANE0_RD):1) &&
		(mcu_en1?(!cmx_POWER_ON_SEQ_LANE1_RD):1) &&
		(mcu_en2?(!cmx_POWER_ON_SEQ_LANE2_RD):1) &&
		(mcu_en3?(!cmx_POWER_ON_SEQ_LANE3_RD):1) )
			break;
		}
		#endif
		#ifdef DRV_PWR_V1
		if( (mcu_en0?(reg_PIN_PU_PLL_RD_LANE0):1) &&
		(mcu_en1?(reg_PIN_PU_PLL_RD_LANE1):1) &&
		(mcu_en2?(reg_PIN_PU_PLL_RD_LANE2):1) &&
		(mcu_en3?(reg_PIN_PU_PLL_RD_LANE3):1) )
			break;
		}
		#endif

		set_timer_cnt();
		drv_spd_cfg_dec();
	}

	Calibration();


	if (mcuid != MCU_CMN) {

		clear_all_isr();

		if( (reg_MCU_ISR0_RD_LANE_31_0_b0&0xfa)==0) {

			if(reg_PIN_PU_PLL_RD_LANE){
				drv_power_on_dig_prot_dis();
				PHY_STATUS = ST_PLLREADY;
			}
			else {
				#if defined _SERDES_BUILD || defined _SAS_BUILD 
				pu_tx_down();
				pu_rx_down();
				#else
				Power_P2();
				#endif
			}
		}
		else {
			drv_pll_rs_on_dig_prot_dis();
			drv_pll_ts_on_dig_prot_dis();
		}
	}
	else {
		PHY_STATUS_CMN = ST_PLLREADY;
	}
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
	while((reg_MCU_DEBUGA_LANE_7_0=0x64)&&lnx_END_XDAT_LANE_7_0!=0xaa || cmx_END_XDAT_CMN_7_0!=0xaa);
	reg_MCU_STATUS1_LANE_31_0_b0 = 0;
	#endif

	//if(cmx_MASTER_MCU_SEL_7_0 > MAX_MCU_ID) cmx_MASTER_MCU_SEL_7_0 = MCU_LANE0;

	// TODO: some delay?? don't understand why this needed.
	//reg_MCU_DEBUG7_LANE_7_0 = 0xa5;
	//reg_MCU_DEBUG6_LANE_7_0 = mcuid;
	/* clear by xdat_lane download
	//clean xdata
	if( BYPASS_XDATA_INIT == 0 ) 
	{
	//reg_MCU_DEBUG7_LANE_7_0 = 0x55;
		ptr = (__xdata uint8_t *)(XDAT_BASE);
		while((reg_MCU_DEBUGA_LANE_7_0=0x65)&&ptr < (XDAT_LANE_BASE + MAXXDATLANE) ) {
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

		if( BYPASS_XDATA_INIT == 0 ) {

			//reg_MCU_DEBUG7_LANE_7_0 = 0x58;
			ptr = (__xdata uint8_t *)(XDAT_CMN_BASE);
			while((reg_MCU_DEBUGA_LANE_7_0=0x66)&&ptr < (XDAT_CMN_BASE + MAXXDATCMN) ) {
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
	adapt_slicer_en = 0;
	adapt_data_en = 0;
	int_pu_rx = 0;
	int_pu_tx = 0;
	pam4_en = 0;
	// TODO cmx_PLL_RATE_SEL_7_0 = 0xff;

	// For sync interface
	switch(mcuid){
		case MCU_LANE0: MCU_SYNC_LANE0 = 0;break;
		case MCU_LANE1: MCU_SYNC_LANE1 = 0;break;
		case MCU_LANE2: MCU_SYNC_LANE2 = 0;break;
		case MCU_LANE3: MCU_SYNC_LANE3 = 0;break;
		default: reg_MCU_DEBUG_CMN_0_7_0 = 0;break;
	}
}

void set_mcu_en(void) BANKING_CTRL {
	switch(mcuid) {
#ifdef DRV_PWR_V0
	case MCU_LANE0:  mcu_en0 = 1; break;
	case MCU_LANE1:  mcu_en1 = 1; break;
	case MCU_LANE2:  mcu_en2 = 1; break;
	case MCU_LANE3:  mcu_en3 = 1; break;
#else
	case MCU_LANE0: if (reg_PIN_PU_PLL_RD_LANE0) mcu_en0 = 1; break;
	case MCU_LANE1: if (reg_PIN_PU_PLL_RD_LANE1) mcu_en1 = 1; break;
	case MCU_LANE2: if (reg_PIN_PU_PLL_RD_LANE2) mcu_en2 = 1; break;
	case MCU_LANE3: if (reg_PIN_PU_PLL_RD_LANE3) mcu_en3 = 1; break;
#endif
	}
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

    if(FAST_POWER_ON_EN) { 
    	CONTROL_CONFIG0.BT.B1 |= 0x18; // EXT_FORCE_CAL_DONE, FAST_DFE_TIMER_EN
		CONTROL_CONFIG0.BT.B2 |= 0xb0; // bypass_delay=4, bypass_poweron_delay=1, BYPASS_SPEED_TABLE_LOAD
		if(cmx_BYPASS_SPEED_TABLE_LOAD_DIS) cmx_BYPASS_SPEED_TABLE_LOAD = 0; //added disable control for Palladium
		//CONTROL_CONFIG0.BT.B3 |= 0x01; // FORCE_CONT_CAL_SKIP
		FORCE_CONT_CAL_SKIP = 1;
		cmx_BYPASS_RX_INIT = 1;
    }   

	if(mcuid != MCU_CMN) {

		//if(BYPASS_XDATA_INIT==0)
		{
			xdat_lane_init();
			set_mcu_en();
			cds_lane_init();
		}

		switch(mcuid) {
		case MCU_LANE0: MCU_INIT_DONE_LANE0 = 1; break;
		case MCU_LANE1: MCU_INIT_DONE_LANE1 = 1; break;
		case MCU_LANE2: MCU_INIT_DONE_LANE2 = 1; break;
		case MCU_LANE3: MCU_INIT_DONE_LANE3 = 1; break;
		}

		reg_MCU_DEBUG0_LANE_7_0 = 0x60;
		reg_MCU_DEBUG1_LANE_7_0 = MAJOR_VER;
		reg_MCU_DEBUG2_LANE_7_0 = MINOR_VER;
		reg_MCU_DEBUG3_LANE_7_0 = PATCH_VER;
		reg_MCU_DEBUG4_LANE_7_0 = BUILD_VER;

	}
	else {
		//if(BYPASS_XDATA_INIT==0)
		{
			xdat_cmn_init();
		}

		while((reg_MCU_DEBUGA_LANE_7_0=0x67)&&1) {
			if((mcu_en0? MCU_INIT_DONE_LANE0:1) && (mcu_en1? MCU_INIT_DONE_LANE1:1) && (mcu_en2? MCU_INIT_DONE_LANE2:1) && (mcu_en3? MCU_INIT_DONE_LANE3:1)) break;
		}

		cmx_FW_MAJOR_VER_7_0 =  MAJOR_VER;
		cmx_FW_MINOR_VER_7_0 =  MINOR_VER;
		cmx_FW_PATCH_VER_7_0 =  PATCH_VER;
		cmx_FW_BUILD_VER_7_0 =  BUILD_VER;

		reg_MCU_INIT_DONE = 1;
	}

/*
	if(FAST_POWER_ON_EN) {
		CONTROL_CONFIG0.BT.B1 |= 0x18; // ext_force_cal_done=1, fast_dfe_timer_en=1 
		CONTROL_CONFIG0.BT.B2 |= 0xb0; // bypass_delay=4, bypass_poweron_delay=1, bypass_speed_table_load=1 
		if(cmx_BYPASS_SPEED_TABLE_LOAD_DIS) cmx_BYPASS_SPEED_TABLE_LOAD = 0; //added disable control for Palladium
		FORCE_CONT_CAL_SKIP = 1;
		cmx_BYPASS_RX_INIT = 1;
	}
debug fast_power_on_en simulation issue */

	//if (cmx_MASTER_MCU_SEL_7_0 > MAX_MCU_ID)
	//	cmx_MASTER_MCU_SEL_7_0 = MCU_LANE0;

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

	//if(phy_mode == PCIE) cmx_PIPE4_EN = 1;  //set default for PCIe mode

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

	//tag_DFE_ADAPT_NORMAL_SOFT_CONT_EN = 0; //default=dfe hardware cont
	
	//lnx_PHASE_ADAPT_TEMP_THR_LANE_7_0 = 12;
	//lnx_EDGE_SAMPLER_NORMAL_EN_LANE = 0; 

	//tx_adapt_g0_en = 1;
	//tx_adapt_gn1_en = 1;
	//tx_adapt_g1_en = 0; 

	//ana_tsen_adc_rdy_rd = 0;

	//pre_sq_rd = 1;

	//train_status_reset(); //remove for sim
}

void init_reg(void) BANKING_CTRL {

#ifndef NEED_REMAP_REGS
	reg_TXINTP_SSC_CLK_EN_LANE = 1;
#endif
	//mask irq lane
	//RX_LANE_INTERRUPT_MASK.BT.B3 = 0x30; //reg_FRAME_UNLOCK_MASK_LANE,reg_FRAME_LOCK_MASK_LANE
	reg_FRAME_UNLOCK_MASK_LANE = 1;
	reg_FRAME_LOCK_MASK_LANE = 1;

	// isr mask
	//PM_CTRL_INTERRUPT_REG2.BT.B2 = 0xfc; //TODO
	//PM_CTRL_INTERRUPT_REG2.BT.B3 = 0x11; // PU_RX|PU_TX|PU_PLL|rx_init|regclk_dis|PU_IVREF
	reg_INT_PU_IVREF_CHG_MASK_LANE = 1;
	reg_INT_PU_PLL_OR_CHG_FALLING_MASK_LANE = 1;
	reg_INT_PU_PLL_OR_CHG_RISING_MASK_LANE = 1;
	reg_INT_REFCLK_DIS_CHG_FALLING_MASK_LANE = 1;
	reg_INT_REFCLK_DIS_CHG_RISING_MASK_LANE = 0;
	reg_INT_RX_INIT_CHG_FALLING_MASK_LANE = 1;
	reg_INT_RX_INIT_CHG_RISING_MASK_LANE = 0;
	reg_TX_SFT_RST_CHG_FALLING_MASK_LANE = 0;
	reg_TX_SFT_RST_CHG_RISING_MASK_LANE = 0;
	reg_INT_PU_RX_CHG_FALLING_MASK_LANE = 0;
	reg_INT_PU_RX_CHG_RISING_MASK_LANE = 1;
	reg_INT_PU_TX_CHG_FALLING_MASK_LANE = 0;
	reg_INT_PU_TX_CHG_RISING_MASK_LANE = 1;
	reg_INT_PU_PLL_CHG_FALLING_MASK_LANE = 0;
	reg_INT_PU_PLL_CHG_RISING_MASK_LANE = 1;

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
	reg_TX_TRAIN_PAT_SEL_LANE_1_0 = 1; //16ffc Changed */
	//reg_TX_TRAIN_PAT_TWO_ZERO_LANE = 1;
	//reg_TX_TRAIN_PAT_MODE_LANE = 0;

	//if(cmx_PHY_GEN_MAX_5_0 < max_gen)
	//     max_gen = cmx_PHY_GEN_MAX_5_0;

	//set default
	//cal_phase = 0x1e;
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

	//reg_DET_BYPASS_LANE = 1;

#ifndef NEED_REMAP_REGS
	// registers default value changes requested by Fei
	reg_PLL_RS_ANA_RSVDA_LANE_7_0 = 0xfc;
	reg_PLL_TS_ANA_RSVDA_LANE_7_0 = 0xfc;

	if (cmx_AVDD_VOL_SEL) { // Analog VDD = 1.2V
		if(mcuid == MCU_CMN) {
			reg_VREF_0P6V_VDDVCO_RXPLL_CH0_2_0 = 7; //5; //2;
			reg_VREF_0P6V_VDDVCO_RXPLL_CH1_2_0 = 7; //5;
			reg_VREF_0P6V_VDDVCO_RXPLL_CH2_2_0 = 7; //5;
			reg_VREF_0P6V_VDDVCO_RXPLL_CH3_2_0 = 7; //5;
			reg_VREF_0P6V_VDDVCO_TXPLL_CH0_2_0 = 7; //5;
			reg_VREF_0P6V_VDDVCO_TXPLL_CH1_2_0 = 7; //5;
			reg_VREF_0P6V_VDDVCO_TXPLL_CH2_2_0 = 7; //5;
			reg_VREF_0P6V_VDDVCO_TXPLL_CH3_2_0 = 7; //5;
		}

		reg_PLL_RS_LCPLLREG_SEL_3K_TO_4K_RATIO_LANE = 0; //0;
		reg_PLL_RS_LCPLLREG_SEL_7K_TO_8K_RATIO_LANE = 0; //0;
		reg_PLL_TS_LCPLLREG_SEL_3K_TO_4K_RATIO_LANE = 0; //0;
		reg_PLL_TS_LCPLLREG_SEL_7K_TO_8K_RATIO_LANE = 0; //0;
		reg_PLL_RS_SELHV_LCPLL_CP_LANE_3_0 = 0xb; //0xd;
		reg_PLL_TS_SELHV_LCPLL_CP_LANE_3_0 = 0xb; //0xd;
	} else { // Analog VDD = 0.9V
		if(mcuid == MCU_CMN) {
			reg_VREF_0P6V_VDDVCO_RXPLL_CH0_2_0 = 3; //2;
			reg_VREF_0P6V_VDDVCO_RXPLL_CH1_2_0 = 3;
			reg_VREF_0P6V_VDDVCO_RXPLL_CH2_2_0 = 3;
			reg_VREF_0P6V_VDDVCO_RXPLL_CH3_2_0 = 3;
			reg_VREF_0P6V_VDDVCO_TXPLL_CH0_2_0 = 3;
			reg_VREF_0P6V_VDDVCO_TXPLL_CH1_2_0 = 3;
			reg_VREF_0P6V_VDDVCO_TXPLL_CH2_2_0 = 3;
			reg_VREF_0P6V_VDDVCO_TXPLL_CH3_2_0 = 3;
		}

		reg_PLL_RS_LCPLLREG_SEL_3K_TO_4K_RATIO_LANE = 1; //0;
		reg_PLL_RS_LCPLLREG_SEL_7K_TO_8K_RATIO_LANE = 0; //0;
		reg_PLL_TS_LCPLLREG_SEL_3K_TO_4K_RATIO_LANE = 1; //0;
		reg_PLL_TS_LCPLLREG_SEL_7K_TO_8K_RATIO_LANE = 0; //0;
		reg_PLL_RS_SELHV_LCPLL_CP_LANE_3_0 = 6; //0xd;
		reg_PLL_TS_SELHV_LCPLL_CP_LANE_3_0 = 6; //0xd;
	}
	reg_PLL_RS_VCO_SLAVE_ADJ_LANE_2_0 = 5; //3;
	reg_PLL_TS_VCO_SLAVE_ADJ_LANE_2_0 = 5; //3;
	reg_PLL_RS_VDDR_DAC_ADJ_LANE_2_0 = 5; //4;
	reg_PLL_TS_VDDR_DAC_ADJ_LANE_2_0 = 5; //4;

	reg_PLL_RS_VCON_REF_SEL_LANE_3_0 = 7; //3; requested by Fei
	reg_PLL_TS_VCON_REF_SEL_LANE_3_0 = 7; //3;	
	reg_PLL_RS_LCPLL_TEMPC_MUX_HOLD_SEL_MAX_LANE_3_0 = 0xe; //0xd; //bin
	reg_PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_MAX_LANE_3_0 = 0xe; //0xd; //bin
	
#endif

	if(mcuid == MCU_CMN) {
		reg_VREF_VDDACAL_PLL_PFD_SEL_3_0 = 0xD; //8; (VDDR_PFD: 0.897--> 0.946)
		reg_VREF_VDDACAL_PLL_CLK_SEL_3_0 = 9; //8; (VDDR_FBDIV: 0.89 --> 0.9)
	}

	reg_PLL_RS_TXVCO_SF_ICPTAT_SEL_LANE_2_0 = cmx_PLL_TXVCO_SF_ICPTAT_SEL_2_0; //4 //3; (make VCO 2nd stage regulator DAC bias current work with ictat)
	reg_PLL_TS_TXVCO_SF_ICPTAT_SEL_LANE_2_0 = cmx_PLL_TXVCO_SF_ICPTAT_SEL_2_0; //4 //3; (make VCO 2nd stage regulator DAC bias current work with ictat)

	// Bias optimization
	reg_PLL_RS_VDDR_DAC_ADJ_LANE_2_0 = 2;
	reg_PLL_TS_VDDR_DAC_ADJ_LANE_2_0 = 2;
	reg_PLL_RS_VCO_SLAVE_ADJ_LANE_2_0 = 0;
	reg_PLL_TS_VCO_SLAVE_ADJ_LANE_2_0 = 0;
	reg_PLL_RS_VCON_MIN_SEL_LANE_2_0 = 2; //5; (0.4v -> 0.325v)
	reg_PLL_TS_VCON_MIN_SEL_LANE_2_0 = 2; //5; (0.4v -> 0.325v)
	reg_PLL_RS_VCON_MAX_SEL_LANE_2_0 = 7; //3; (0.68v -> 0.825v)
	reg_PLL_TS_VCON_MAX_SEL_LANE_2_0 = 7; //3; (0.68v -> 0.825v)
	reg_PLL_RS_VARAC_BIAS_SEL_LANE_2_0 = 0; //5; (optimized max kcvo from 0.75v to 0.625v)
	reg_PLL_TS_VARAC_BIAS_SEL_LANE_2_0 = 0; //5; (optimized max kcvo from 0.75v to 0.625v)

#ifndef NEED_REMAP_REGS
	reg_PLL_RS_DIV_DCC_CAL_VAL_MAX_LANE_4_0 = 8; //0x10
	reg_PLL_TS_DIV_DCC_CAL_VAL_MAX_LANE_4_0 = 8; //0x10
#endif

#ifdef IPCE_COMPHY_1684_WA
	reg_TRXIVREF_RSVD0_LANE_7_0 = 0x0f;
#endif

	reg_PLL_RS_LCPLL_CAL_WAIT_TEMPC_100US_LANE_3_0 = 0xf;
	reg_PLL_TS_LCPLL_CAL_WAIT_TEMPC_100US_LANE_3_0 = 0xf;

        //default: 0xff
	//reg_PLL_RS_AMP_CAL_VAL_MAX_LANE_7_0 = lnx_PLL_AMP_CAL_VAL_MAX_LANE_7_0; //0xe0; //d0
	//reg_PLL_TS_AMP_CAL_VAL_MAX_LANE_7_0 = lnx_PLL_AMP_CAL_VAL_MAX_LANE_7_0; //0xe0; //d0


}

__code uint16_t refclkx4_tb[] = { 100, 120, 160, 200, 250, 400, 500, 625 };

void set_timer_cnt() BANKING_CTRL {
	uint16_t temp, refclk_freq;
	uint32_t temp32;
	uint8_t i;

	refclk_freq = 0;

	if(cmx_MCU_FREQ_15_0==0) cmx_MCU_FREQ_15_0 = 400;

#ifdef DRV_PWR_V0
	i = reg_PIN_REF_FREF_SEL_RD_4_0;
#else
	i = reg_PIN_REF_FREF_SEL_RD_LANE_4_0; // TODO - need to support CMN MCU?
#endif

	if (mcuid != MCU_CMN) {
		mcuclk_mc = (uint8_t)((cmx_MCU_FREQ_15_0+8)/15);

		
		lnx_REFCLK_FREQ_RD_LANE_15_0 = 625; //refclkx4_tb[i];

		//1u unit pwm timer1, timer2
		//reg_TIMER1_CLK_SEL_LANE_1_0 = 0; //refclk
		reg_TIMER_1_SEL_LANE_1_0 = 0x01; //PWM1
		reg_TIMER_2_SEL_LANE_1_0 = 0x01; //PWM1
		reg_PWM1_CLK_SEL_LANE_1_0 = 0; //refclk 
		reg_PWM1_EN_LANE = 1;
		temp = lnx_REFCLK_FREQ_RD_LANE_15_0>>3;
		reg_PWM1_COUNTER_LANE_30_0_b0 = (uint8_t)temp;
		reg_PWM1_COUNTER_LANE_30_0_b1 = (uint8_t)(temp >> 8);
	
		//1m unit pwm for timer2
		reg_PWM2_CLK_SEL_LANE_1_0 = 0; //refclk 
		temp32 = lnx_REFCLK_FREQ_RD_LANE_15_0*125L;
		reg_PWM2_COUNTER_LANE_30_0_b0 = (uint8_t)temp32;
		reg_PWM2_COUNTER_LANE_30_0_b1 = (uint8_t)(temp32 >> 8);
		reg_PWM2_COUNTER_LANE_30_0_b2 = (uint8_t)(temp32 >> 16);
	}
	else {
		cmx_MCUCLK_MC_7_0 = (uint8_t)((cmx_MCU_FREQ_15_0+8)/15);
		refclk_freq = refclkx4_tb[i];

		//1u unit pwm timer1
		//reg_TIMER1_CLK_SEL_CMN_1_0 = 0; //refclk
		reg_TIMER_1_SEL_CMN_1_0 = 0x01; //PWM1
		reg_PWM1_CLK_SEL_CMN_1_0 = 0; //refclk 
		reg_PWM1_EN_CMN = 1;
		temp = refclk_freq>>3;
		reg_PWM1_COUNTER_CMN_30_0_b0 = (uint8_t)temp;
		reg_PWM1_COUNTER_CMN_30_0_b1 = (uint8_t)(temp >> 8);
	}
}

#if 0

void pu_pll_off(void) BANKING_CTRL { //off - reset_ana*, ana_pu_pll_*,  pll_clk_ready_*, dtx_clk_off*, reset_dtx*

#ifndef _112G_ADC
	reg_DTX_CLK_OFF_LANE = 1;
	reg_RESET_DTX_LANE = 1;
	pll_clk_ready_all_0();
	delay(Tus);
	reg_RESET_ANA_LANE = 1;
	reg_ANA_PU_PLL_DLY_LANE = 0;
	reg_ANA_PU_PLL_LANE = 0;

	//while((reg_MCU_DEBUGA_LANE_7_0=0x68)&&reg_ANA_PU_PLL_LANE);
    wait_for(!reg_ANA_PU_PLL_LANE,0);
#endif
}

void pu_pll_rs_off(void) BANKING_CTRL { //off - reset_ana*, ana_pu_pll_*,  pll_clk_ready_*, dtx_clk_off*, reset_dtx*

	reg_PLL_RS_DTX_CLK_OFF_LANE = 1;
	reg_RESET_PLL_RS_DTX_LANE = 1;
	pll_clk_rs_ready_0();
	delay(Tus);
	reg_RX_RESET_ANA_LANE = 1;
	reg_ANA_PLL_RS_PU_PLL_DLY_LANE = 0;
	reg_ANA_PLL_RS_PU_PLL_LANE = 0;

	//while((reg_MCU_DEBUGA_LANE_7_0=0x69)&&reg_ANA_PLL_RS_PU_PLL_LANE);
	wait_for(!reg_ANA_PLL_RS_PU_PLL_LANE,0);
}

void pu_pll_ts_off(void) BANKING_CTRL { //off - reset_ana*, ana_pu_pll_*,  pll_clk_ready_*, dtx_clk_off*, reset_dtx*

	reg_PLL_TS_DTX_CLK_OFF_LANE = 1;
	reg_RESET_PLL_TS_DTX_LANE = 1;
	pll_clk_ts_ready_0();
	delay(Tus);
	reg_TX_RESET_ANA_LANE = 1;
	reg_ANA_PLL_TS_PU_PLL_DLY_LANE = 0;
	reg_ANA_PLL_TS_PU_PLL_LANE = 0;

	//while((reg_MCU_DEBUGA_LANE_7_0=0x6A)&&reg_ANA_PLL_TS_PU_PLL_LANE);
	wait_for(!reg_ANA_PLL_TS_PU_PLL_LANE,0);
}

void pu_pll_on(void) BANKING_CTRL { // on - *pll_fast_cal, dtx_clk_off*, reset_dtx*

#ifndef _112G_ADC
	reg_DTX_CLK_OFF_LANE = 0;
	delay(Tus);
	reg_RESET_DTX_LANE = 0;
	//while((reg_MCU_DEBUGA_LANE_7_0=0x6B)&& reg_RESET_DTX_LANE );
	wait_for(!reg_RESET_DTX_LANE,0);
#endif

}

void pu_rx_on(void) BANKING_CTRL {

	//reg_ANA_PU_PLL_LANE = 1; //need gate pu_rx
	reg_ANA_PLL_RS_PU_PLL_LANE = 1;
	delay(T_p5us);
	reg_ANA_PLL_RS_PU_PLL_DLY_LANE = 1;
	delay(T_p4us);
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
	reg_ANA_PLL_RS_PU_PLL_LANE = 0;
	reg_ANA_PLL_RS_PU_PLL_DLY_LANE = 0;
}
#endif

/*
 * reset_pwr_reg() - call after a SFT_RST
 */
void reset_pwr_reg(void) BANKING_CTRL {
	reg_RX_INIT_DONE_LANE = 0;
	reg_PIN_PLL_READY_RX_LANE = 0;
	reg_PIN_PLL_READY_TX_LANE = 0;

	// disable all interrupts
	PM_CTRL_INTERRUPT_REG2.BT.B2 = 0x0;
	PM_CTRL_INTERRUPT_REG2.BT.B3 = 0x0; // PU_RX|PU_TX|PU_PLL|rx_init|regclk_dis|PU_IVREF
	reg_INT_PU_PLL_OR_CHG_FALLING_MASK_LANE = 0;
	reg_INT_PU_PLL_OR_CHG_RISING_MASK_LANE = 0;

	//INT0 for MCU Wakeup from STOP.
	//reg_INT0_REFCLK_DIS_EN_INT_EN_LANE = 0; //use only for mcu stop

	//int3
	//reg_INT3_INT_REFCLK_DIS_CHG_INT_EN_LANE = 0;
	reg_INT3_RX_INIT_CHG_FALLING_INT_EN_LANE = 0;
	reg_INT3_RX_INIT_CHG_RISING_INT_EN_LANE = 0;
	reg_INT3_INT_PU_IVREF_CHG_INT_EN_LANE = 0;

	//int9
	reg_INT9_PM_CHG_INT_EN_LANE = 0;

	//int1
	//reg_INT1_INT_POWER_STATE_VALID_RISE_INT_EN_LANE = 0;

	//int2
	reg_INT2_SPD_INT_GEN_EN_LANE = 0;

	//int11
	reg_INT11_RX_TRAIN_ENABLE_INT_EN_LANE = 0;

	//int5
	reg_INT5_TX_TRAIN_ENABLE_INT_EN_LANE = 0;

	//int10
	//reg_INT10_INT_RX_INIT_RISE_INT_EN_LANE = 0;
	reg_INT10_RX_INIT_CHG_FALLING_INT_EN_LANE = 0;
	reg_INT10_RX_INIT_CHG_RISING_INT_EN_LANE = 0;

	//int7
	//reg_INT7_REMOTE_CTRL_VALID_INT_EN_LANE = 0; //no txtrain_if in fw
	
	//int12
	//reg_INT12_PIN_LOCAL_CTRL_FIELD_READY_INT_EN_LANE = 0;  //no APTA
	
	//extpin
	//reg_EXTINT_MCU_INT_EN_LANE = 0;

	pll_clk_ready_all_0();
	reg_ANA_PU_IVREF = 1;
	reg_ANA_PU_IVREF_DLY1 = 1;
	reg_ANA_PU_IVREF_DLY2 = 1;
	reg_ANA_PU_IVREF_DLY3 = 1;
	//reg_ANA_PU_PLL_LANE = 0;
	reg_ANA_PLL_RS_PU_PLL_LANE = 0;
	reg_ANA_PLL_TS_PU_PLL_LANE = 0;
	//reg_ANA_PU_PLL_DLY_LANE = 0;
	reg_ANA_PLL_RS_PU_PLL_DLY_LANE = 0;
	reg_ANA_PLL_TS_PU_PLL_DLY_LANE = 0;
	reg_ANA_PU_RX_LANE = 0;
	reg_ANA_PU_RX_DLY_LANE = 0;
	reg_ANA_PU_TX_LANE = 0;
	reg_ANA_PU_SQ_LANE = 0;
	//reg_ANA_PLL_CLK_READY_PRE0 = 0;
	//reg_ANA_PLL_CLK_READY_PRE1 = 0;
	//reg_ANA_PLL_CLK_READY_LANE = 0;
#ifndef _112G_ADC

	reg_DTL_FLOOP_FREEZE_LANE = 1;

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
	//reg_ANA_PLL_CLK_READY_PRE0_RING = 0;
	//reg_ANA_PLL_CLK_READY_PRE1_RING = 0;
	//reg_ANA_PLL_CLK_READY_RING = 0;
	reg_ANA_PU_PLL_LANE_RING = 0;
	reg_ANA_PU_PLL_DLY_LANE_RING = 0;
	reg_RESET_DTX_RING = 1;
	reg_DTX_CLK_OFF_RING = 1;
#endif
#endif
}

void tx_pll_dig_off(void) BANKING_CTRL {

	switch(pll_sel) {
	case BOTH_ON:
	case TS_ON:
		drv_pll_ts_off_dig_prot_en();
	break;
	case RS_ON:
	case SWAP_BOTH_ON:
		drv_pll_rs_off_dig_prot_en();
	break;
	}
}

void tx_pll_dig_on(void) BANKING_CTRL {


#if defined _SERDES_BUILD || defined _SAS_BUILD   //Serdes mode no condition
	switch(pll_sel) {
	case BOTH_ON:
	case TS_ON:
		drv_pll_ts_on_dig_prot_dis();
	break;
	case RS_ON:
	case SWAP_BOTH_ON:
		drv_pll_rs_on_dig_prot_dis();
	break;
	}
#else
	if( reg_MCU_ISR0_RD_LANE_31_0_b0&0xb8 || reg_INT_PHY_GEN_TX_CHG_ISR_LANE ) return; //1011_1010
                //int_refclk_dis_chg_rising_int=1, 
                //rx_sft_rst_chg_rising_int=x, 
                //tx_sft_rst_chg_rising_int=1, 
                //int_pu_ivref_chg_int=1, 
                //pm_chg_int=1, 
                //pm_others_chg_int=x, 
                //spd_int_gen=x, 
                //int_pu_pll_or_chg_falling_int=x

	switch(pll_sel) {
	case BOTH_ON:
	case TS_ON:
		drv_pll_ts_on_dig_prot_dis();
	break;
	case RS_ON:
	case SWAP_BOTH_ON:
		drv_pll_rs_on_dig_prot_dis();
	break;
	}
#endif

}

void rx_pll_dig_off(void) BANKING_CTRL {

	switch(pll_sel) {
	case BOTH_ON:
	case RS_ON:
		drv_pll_rs_off_dig_prot_en();
	break;
	case TS_ON:
	case SWAP_BOTH_ON:
		drv_pll_ts_off_dig_prot_en();
	break;
	}
}

void rx_pll_dig_on(void) BANKING_CTRL {

#if defined _SERDES_BUILD || defined _SAS_BUILD   //Serdes mode no condition
	switch(pll_sel) {
	case BOTH_ON:
	case RS_ON:
		drv_pll_rs_on_dig_prot_dis();
	break;
	case TS_ON:
	case SWAP_BOTH_ON:
		drv_pll_ts_on_dig_prot_dis();
	break;
	}
#else
	if( reg_MCU_ISR0_RD_LANE_31_0_b0&0xd8 || reg_INT_PHY_GEN_RX_CHG_ISR_LANE) return; //1101_1000
                //int_refclk_dis_chg_rising_int=1, 
                //rx_sft_rst_chg_rising_int=1, 
                //tx_sft_rst_chg_rising_int=0, 
                //int_pu_ivref_chg_int=1, 
                //pm_chg_int=1, 
                //pm_others_chg_int=x, 
                //spd_int_gen=x, 
                //int_pu_pll_or_chg_falling_int=x

	switch(pll_sel) {
	case BOTH_ON:
	case RS_ON:
		drv_pll_rs_on_dig_prot_dis();
	break;
	case TS_ON:
	case SWAP_BOTH_ON:
		drv_pll_ts_on_dig_prot_dis();
	break;
	}
#endif
}
 
void tx_pll_ana_off(void) BANKING_CTRL {

	switch(pll_sel) {
	case BOTH_ON:
	case TS_ON:
		drv_pll_ts_off_seq();
	break;
	case RS_ON:
	case SWAP_BOTH_ON:
		drv_pll_rs_off_seq();
	break;
	}
}

void tx_pll_ana_on(void) BANKING_CTRL {
	switch(pll_sel) {
	case BOTH_ON:
	case TS_ON:
		drv_pll_ts_on_seq();
	break;
	case RS_ON:
	case SWAP_BOTH_ON:
		drv_pll_rs_on_seq();
	break;
	}
}

void rx_pll_ana_off(void) BANKING_CTRL {
	switch(pll_sel) {
	case BOTH_ON:
	case RS_ON:
		drv_pll_rs_off_seq();
	break;
	case TS_ON:
	case SWAP_BOTH_ON:
		drv_pll_ts_off_seq();
	break;
	}
}

void rx_pll_ana_on(void) BANKING_CTRL {

	switch(pll_sel) {
	case BOTH_ON:
	case RS_ON:
		drv_pll_rs_on_seq();
	break;
	case TS_ON:
	case SWAP_BOTH_ON:
		drv_pll_ts_on_seq();
	break;
	}
}

void tx_pll_cal(void) BANKING_CTRL {
        switch(pll_sel) {
        case BOTH_ON:
        case TS_ON:
                ts_pll_cal();
        break;
        case RS_ON:
        case SWAP_BOTH_ON:
                rs_pll_cal();
        break;
        }
}

void rx_pll_cal(void) BANKING_CTRL {
        switch(pll_sel) {
        case BOTH_ON:
        case RS_ON:
                rs_pll_cal();
        break;
        case TS_ON:
        case SWAP_BOTH_ON:
                ts_pll_cal();
        break;
        }
}

void check_tx_pll_lock(void) BANKING_CTRL {
        switch(pll_sel) {
        case BOTH_ON:
        case TS_ON:
                check_ts_pll_lock();
        break;
        case RS_ON:
        case SWAP_BOTH_ON:
                check_rs_pll_lock();
        break;
        }
}

void check_rx_pll_lock(void) BANKING_CTRL {
        switch(pll_sel) {
        case BOTH_ON:
        case RS_ON:
                check_rs_pll_lock();
        break;
        case TS_ON:
        case SWAP_BOTH_ON:
                check_ts_pll_lock();
        break;
        }
}

void tx_pll_fast_cal_sel(void) BANKING_CTRL {

	switch(pll_sel) {
	case BOTH_ON:
	case TS_ON:
		ts_pll_fast_cal();
	break;
	case RS_ON:
	case SWAP_BOTH_ON:
		rs_pll_fast_cal();
	break;
	}
}

void rx_pll_fast_cal_sel(void) BANKING_CTRL {

	switch(pll_sel) {
	case BOTH_ON:
	case RS_ON:
		rs_pll_fast_cal();
	break;
	case TS_ON:
	case SWAP_BOTH_ON:
		ts_pll_fast_cal();
	break;
	}
}

void pll_clk_rx_ready_1(void) BANKING_CTRL {
        switch(pll_sel) {
        case BOTH_ON:
        case RS_ON:
                pll_clk_rs_ready_1();
        break;
        case TS_ON:
        case SWAP_BOTH_ON:
                pll_clk_ts_ready_1();
        break;
        }
}

void pll_clk_rx_ready_0(void) BANKING_CTRL {
        switch(pll_sel) {
        case BOTH_ON:
        case RS_ON:
                pll_clk_rs_ready_0();
        break;
        case TS_ON:
        case SWAP_BOTH_ON:
                pll_clk_ts_ready_0();
        break;
        }
}

void pll_clk_tx_ready_1(void) BANKING_CTRL {
        switch(pll_sel) {
        case BOTH_ON:
        case TS_ON:
                pll_clk_ts_ready_1();
        break;
        case RS_ON:
        case SWAP_BOTH_ON:
                pll_clk_rs_ready_1();
        break;
        }
}

void pll_clk_tx_ready_0(void) BANKING_CTRL {
        switch(pll_sel) {
        case BOTH_ON:
        case TS_ON:
                pll_clk_ts_ready_0();
        break;
        case RS_ON:
        case SWAP_BOTH_ON:
                pll_clk_rs_ready_0();
        break;
        }
}

void tx_plldcc_cal(void) BANKING_CTRL {
        switch(pll_sel) {
        case BOTH_ON:
        case TS_ON:
                ts_plldcc_cal();
        break;
        case RS_ON:
        case SWAP_BOTH_ON:
                rs_plldcc_cal();
        break;
        }
}

void rx_plldcc_cal(void) BANKING_CTRL {
        switch(pll_sel) {
        case BOTH_ON:
        case RS_ON:
                rs_plldcc_cal();
        break;
        case TS_ON:
        case SWAP_BOTH_ON:
                ts_plldcc_cal();
        break;
        }
}

void pll_reset_rx_0(void) BANKING_CTRL {
	switch(pll_sel) {
	case BOTH_ON:
	case RS_ON:
		pll_reset_rs_0();
	break;
	case TS_ON:
	case SWAP_BOTH_ON:
		pll_reset_ts_0();
	break;
	}
}

void pll_reset_rx_1(void) BANKING_CTRL {
	switch(pll_sel) {
	case BOTH_ON:
	case RS_ON:
		pll_reset_rs_1();
	break;
	case TS_ON:
	case SWAP_BOTH_ON:
		pll_reset_ts_1();
	break;
	}
}

void pll_reset_tx_0(void) BANKING_CTRL {
	switch(pll_sel) {
	case BOTH_ON:
	case TS_ON:
		pll_reset_ts_0();
	break;
	case RS_ON:
	case SWAP_BOTH_ON:
		pll_reset_rs_0();
	break;
	}
}

void pll_reset_tx_1(void) BANKING_CTRL {
	switch(pll_sel) {
	case BOTH_ON:
	case TS_ON:
		pll_reset_ts_1();
	break;
	case RS_ON:
	case SWAP_BOTH_ON:
		pll_reset_rs_1();
	break;
	}
}

void set_pwron_seq(bool val) BANKING_CTRL {
	switch(mcuid) {
	case MCU_LANE0: cmx_POWER_ON_SEQ_LANE0_RD = val;	break;
	case MCU_LANE1: cmx_POWER_ON_SEQ_LANE1_RD = val;	break;
	case MCU_LANE2: cmx_POWER_ON_SEQ_LANE2_RD = val;	break;
	case MCU_LANE3: cmx_POWER_ON_SEQ_LANE3_RD = val;	break;
	}	
}

void clear_all_isr(void) BANKING_CTRL {
	
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0xff;
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0;
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B2 = 0xff;
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B2 = 0;
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B1 = 0xff;
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B1 = 0;
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B0 = 0xe0;
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B0 = 0;
	
	SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0xc0;
	SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0;
	
	reg_TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 1;
	reg_TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 0;
	reg_TX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 1;
	reg_TX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 0;

	reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 1;
	reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 0;
	reg_RX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 1;
	reg_RX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 0;

	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B3 = 0x01; 
	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B3 = 0x0;
	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B2 = 0xff; 
	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B2 = 0x0;
	
}	

void clear_tx_isr(void) BANKING_CTRL {
	
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0x30; //INT_PU_TX_CHG_*
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0;
	
	reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 1;
	reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 0;

	reg_TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 1;
	reg_TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 0;
	reg_TX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 1;
	reg_TX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 0;
	
}	

void clear_rx_isr(void) BANKING_CTRL {
	
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0x0c; //INT_PU_RX_CHG_*
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0;
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B2 = 0xc0; //INT_RX_INIT_CHG_*
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B2 = 0;
	
	reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 1;
	reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 0;

	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0xcc;
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0;
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B2 = 0xfe;
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B2 = 0;
	//PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B1 = 0xff;
	//PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B1 = 0;
	//PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B0 = 0xe0;
	//PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B0 = 0;
	
	reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 1;
	reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 0;
	reg_RX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 1;
	reg_RX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 0;
	
	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B3 = 0x01; 
	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B3 = 0x0;
	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B2 = 0xff; 
	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B2 = 0x0;
}

