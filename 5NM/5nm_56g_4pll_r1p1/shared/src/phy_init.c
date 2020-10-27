/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file phy_init.c
* \purpose power on seq control
* \History
*	4/1/2019 Heejeong Ryu		Initial
*   
*/

#include "common.h"
#include "pll_sharing.h"

#ifdef USE_BANKING
#pragma codeseg BANK3
#pragma constseg BANK3
#endif

static void init_ecc_lane(void) {

    //Step 1
    reg_XDATA_ECC_1ERR_CLEAR_LANE = 1;
    reg_XDATA_ECC_2ERR_CLEAR_LANE = 1;
    //Register does not exist: pram_ecc_1err_clear = 1;
    //Register does not exist: pram_ecc_2err_clear = 1;
    reg_IRAM_ECC_1ERR_CLEAR_LANE = 1;
    reg_IRAM_ECC_2ERR_CLEAR_LANE = 1;
    //Register does not exist: rom_parity_err_clear = 1;
    reg_CACHE_ECC_1ERR_CLEAR_LANE = 1;
    reg_CACHE_ECC_2ERR_CLEAR_LANE = 1;

    //Step 2
    reg_XDATA_ECC_2ERR_ENABLE_LANE = 1;
    reg_IRAM_ECC_2ERR_ENABLE_LANE  = 1;
    reg_CACHE_ECC_2ERR_ENABLE_LANE = 1;

    //Step 3
    reg_XDATA_ECC_1ERR_CLEAR_LANE = 0;
    reg_XDATA_ECC_2ERR_CLEAR_LANE = 0;
    //Register does not exist: pram_ecc_1err_clear = 0;
    //Register does not exist: pram_ecc_2err_clear = 0;
    reg_IRAM_ECC_1ERR_CLEAR_LANE  = 0;
    reg_IRAM_ECC_2ERR_CLEAR_LANE  = 0;
    //Register does not exist: rom_parity_err_clear = 0;
    reg_CACHE_ECC_1ERR_CLEAR_LANE = 0;
    reg_CACHE_ECC_2ERR_CLEAR_LANE = 0;
}

static void init_ecc_cmn(void) {

    //Step 1
    reg_XDATA_ECC_1ERR_CLEAR_CMN = 1;
    reg_XDATA_ECC_2ERR_CLEAR_CMN = 1;
    reg_CACHE_ECC_1ERR_CLEAR_CMN = 1;
    reg_CACHE_ECC_2ERR_CLEAR_CMN = 1;
    reg_IRAM_ECC_1ERR_CLEAR_CMN = 1;
    reg_IRAM_ECC_2ERR_CLEAR_CMN = 1;

    //Step 2
    reg_CACHE_ECC_2ERR_ENABLE_CMN = 1;
    reg_XDATA_ECC_2ERR_ENABLE_CMN = 1;
    reg_IRAM_ECC_2ERR_ENABLE_CMN = 1;

    //Step 3
    reg_XDATA_ECC_1ERR_CLEAR_CMN = 0;
    reg_XDATA_ECC_2ERR_CLEAR_CMN = 0;
    reg_CACHE_ECC_1ERR_CLEAR_CMN = 0;
    reg_CACHE_ECC_2ERR_CLEAR_CMN = 0;
    reg_IRAM_ECC_1ERR_CLEAR_CMN = 1;
    reg_IRAM_ECC_2ERR_CLEAR_CMN = 1;
}
		
//--------------------------------------
/**
 * \module clear_xdata 
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

    if(mcuid == MCU_CMN) {
        init_ecc_cmn();
    }
    else {
        init_ecc_lane();
    }

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
	int_pu_rx = 0;
	int_pu_tx = 0;
	
}

void set_mcu_en(void) BANKING_CTRL {
    #ifdef _56G_5NM
    #ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
	switch(mcuid) {
	case MCU_LANE0: if (reg_PIN_PU_PLL_RD_LANE0) mcu_en0 = 1; break;
	case MCU_LANE1: if (reg_PIN_PU_PLL_RD_LANE1) mcu_en1 = 1; break;
	case MCU_LANE2: if (reg_PIN_PU_PLL_RD_LANE2) mcu_en2 = 1; break;
	case MCU_LANE3: if (reg_PIN_PU_PLL_RD_LANE3) mcu_en3 = 1; break;
	}
    #endif //#ifdef CONFIG_5NM_56G_X4_4PLL_R1P0

    #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
	switch(mcuid) {
	case MCU_LANE0: if (reg_PIN_PU_PLL_RD_LANE) mcu_en0 = 1; break;
	case MCU_LANE1: if (reg_PIN_PU_PLL_RD_LANE) mcu_en1 = 1; break;
	case MCU_LANE2: if (reg_PIN_PU_PLL_RD_LANE) mcu_en2 = 1; break;
	case MCU_LANE3: if (reg_PIN_PU_PLL_RD_LANE) mcu_en3 = 1; break;
	}
    #endif // #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
    #endif // #else // #ifndef _56G_5NM
 
}

#if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
void clr_mcu_en(void) BANKING_CTRL {
    switch(mcuid) {
        case MCU_LANE0: if(!reg_PIN_PU_PLL_RD_LANE) mcu_en0 = 0; break;
        case MCU_LANE1: if(!reg_PIN_PU_PLL_RD_LANE) mcu_en1 = 0; break;
        case MCU_LANE2: if(!reg_PIN_PU_PLL_RD_LANE) mcu_en2 = 0; break;
        case MCU_LANE3: if(!reg_PIN_PU_PLL_RD_LANE) mcu_en3 = 0; break;
    }
}
#endif // #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)

/**
 * \module init_xdata 
 * \description 
 *   set xdat deafult
 *   set MCU_INIT_DONE 
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

	if(mcuid != MCU_CMN) {
		
	    reg_MCU_DEBUG0_LANE_7_0 = 0x14;
		if(BYPASS_XDATA_INIT==0) 
		{
			xdat_lane_init();
            #ifdef _56G_5NM
            set_mcu_en();
            #endif // #ifdef _56G_5NM
			cds_lane_init();
		}	

        #ifdef _PCIE_BUILD
        tx_adapt_g0_en = 0;
        tx_adapt_gn1_en = 1;
        tx_adapt_g1_en = 1;   
        //lnx_RX_TRAIN_TIMER_LANE_15_0 = 10; //less than 12 msec required by PIPE
        //lnx_TRX_TRAIN_TIMER_LANE_15_0 = 23;
        #endif
        #if defined _SAS_BUILD || defined _SERDES_BUILD
        tx_adapt_g0_en = 0;	
        tx_adapt_gn1_en = 1;
	tx_adapt_gn2_en = 1;
        tx_adapt_g1_en = 0; 
        #endif

	    reg_MCU_DEBUG0_LANE_7_0 = 0x15;
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
        reg_MCU_DEBUG_CMN_0_7_0 = 0x11;
		if(BYPASS_XDATA_INIT==0) 
		{
			xdat_cmn_init();
		}

        reg_MCU_DEBUG_CMN_0_7_0 = 0x12;
		while(1) {
			if((MCU_INIT_DONE_LANE0)
            #ifndef CONFIG_5NM_56G_X1_2PLL
                && (MCU_INIT_DONE_LANE1)
                && (MCU_INIT_DONE_LANE2)
                && (MCU_INIT_DONE_LANE3)
            #endif // #ifndef CONFIG_5NM_56G_X1_2PLL
                ) {
                break;				
            }		
		}
        reg_MCU_DEBUG_CMN_0_7_0 = 0x13;
		
		cmx_FW_MAJOR_VER_7_0 =  MAJOR_VER;
		cmx_FW_MINOR_VER_7_0 =  MINOR_VER;
		cmx_FW_PATCH_VER_7_0 =  PATCH_VER;
		cmx_FW_BUILD_VER_7_0 =  BUILD_VER;
		
		reg_MCU_INIT_DONE = 1;
	
				
	}	
	
	//if(cmx_MASTER_MCU_SEL_7_0 > MAX_MCU_ID) cmx_MASTER_MCU_SEL_7_0 = MCU_LANE0;

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

	//tx_adapt_g0_en = 1;
	//tx_adapt_gn1_en = 1;
	//tx_adapt_g1_en = 0; 
    //
	////ana_tsen_adc_rdy_rd = 0;
    //
	//pre_sq_rd = 1;
    //
	//train_status_reset(); //remove for sim
}

void init_reg(void) BANKING_CTRL {

	//reg_TXINTP_SSC_CLK_EN_LANE = 1;
	//mask irq lane
	//RX_LANE_INTERRUPT_MASK.BT.B3 = 0x60; //reg_FRAME_UNLOCK_MASK_LANE,reg_FRAME_LOCK_MASK_LANE

	//-----------
	// isr mask
	#ifdef _PCIE_BUILD
		//PM_CTRL_INTERRUPT_REG2.BT.B2 = 0x38; //txdetrx_en_chg|beacon_tx_en_chg|tx_idle_hiz
		//PM_CTRL_INTERRUPT_REG2.BT.B2 = 0x3c; //txdetrx_en_chg|beacon_tx_en_chg
		//PM_CTRL_INTERRUPT_REG2.BT.B3 = 0xe5; //power_state_valid|rx_int|regclk_dis	
		reg_INT_POWER_STATE_VALID_CHG_RISING_MASK_LANE = 0;
		reg_DPHY_ANA_LANE_DISABLE_CHG_FALLING_MASK_LANE = 0;
		reg_DPHY_ANA_LANE_DISABLE_CHG_RISING_MASK_LANE = 0;
		reg_INT_PU_SQ_CHG_MASK_LANE = 1; 
		reg_INT_TX_IDLE_HIZ_CHG_MASK_LANE = 1;
		reg_INT_TX_VCMHOLD_EN_CHG_MASK_LANE = 1; 
		reg_INT_BEACON_TX_EN_CHG_FALLING_MASK_LANE = 0; 
		reg_INT_BEACON_TX_EN_CHG_RISING_MASK_LANE = 0;
		reg_INT_TXDETRX_EN_CHG_FALLING_MASK_LANE = 0; 
		reg_INT_TXDETRX_EN_CHG_RISING_MASK_LANE = 0; 
		reg_INT_TX_IDLE_CHG_FALLING_MASK_LANE = 1; 
		reg_INT_TX_IDLE_CHG_RISING_MASK_LANE = 1; 
		reg_INT_PU_IVREF_CHG_MASK_LANE = 1; 
        #ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
		reg_INT_PU_PLL_OR_CHG_FALLING_MASK_LANE = 0; 
		reg_INT_PU_PLL_OR_CHG_RISING_MASK_LANE = 0; 
        #endif //#ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
		reg_INT_REFCLK_DIS_CHG_FALLING_MASK_LANE = 0;  
		reg_INT_REFCLK_DIS_CHG_RISING_MASK_LANE = 0;   
		reg_INT_RX_INIT_CHG_FALLING_MASK_LANE = 1;   
		reg_INT_RX_INIT_CHG_RISING_MASK_LANE = 0;   
		reg_TX_SFT_RST_CHG_FALLING_MASK_LANE = 0;   
		reg_TX_SFT_RST_CHG_RISING_MASK_LANE = 0;   
		reg_INT_PU_RX_CHG_FALLING_MASK_LANE = 1;   
		reg_INT_PU_RX_CHG_RISING_MASK_LANE = 1; 
		reg_INT_PU_TX_CHG_FALLING_MASK_LANE = 1; 
		reg_INT_PU_TX_CHG_RISING_MASK_LANE = 1; 
		reg_INT_PU_PLL_CHG_FALLING_MASK_LANE = 1; 
		reg_INT_PU_PLL_CHG_RISING_MASK_LANE = 1; 
		
	#else //_SERDES_BUILD
		//PM_CTRL_INTERRUPT_REG2.BT.B2 = 0xfc; //TODO
		//PM_CTRL_INTERRUPT_REG2.BT.B3 = 0x11; // PU_RX|PU_TX|PU_PLL|rx_init|regclk_dis|PU_IVREF
		reg_INT_POWER_STATE_VALID_CHG_RISING_MASK_LANE = 1;
		reg_DPHY_ANA_LANE_DISABLE_CHG_FALLING_MASK_LANE = 1;
		reg_DPHY_ANA_LANE_DISABLE_CHG_RISING_MASK_LANE = 1;
		reg_INT_PU_SQ_CHG_MASK_LANE = 1; 
		reg_INT_TX_IDLE_HIZ_CHG_MASK_LANE = 1;
		reg_INT_TX_VCMHOLD_EN_CHG_MASK_LANE = 1; 
		reg_INT_BEACON_TX_EN_CHG_FALLING_MASK_LANE = 1; 
		reg_INT_BEACON_TX_EN_CHG_RISING_MASK_LANE = 1;
		reg_INT_TXDETRX_EN_CHG_FALLING_MASK_LANE = 1; 
		reg_INT_TXDETRX_EN_CHG_RISING_MASK_LANE = 1; 
		reg_INT_TX_IDLE_CHG_FALLING_MASK_LANE = 1; 
		reg_INT_TX_IDLE_CHG_RISING_MASK_LANE = 1; 
		reg_INT_PU_IVREF_CHG_MASK_LANE = 1; 
        #ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
		reg_INT_PU_PLL_OR_CHG_FALLING_MASK_LANE = 1; 
		reg_INT_PU_PLL_OR_CHG_RISING_MASK_LANE = 1; 
        #endif //#ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
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
	#endif
	

	#ifdef SUPPORT_ISR
	//INT0 for MCU Wakeup from STOP.
	//reg_INT0_REFCLK_DIS_EN_INT_EN_LANE = 1; //use only for mcu stop
	
	//int3
	//reg_INT3_INT_REFCLK_DIS_CHG_INT_EN_LANE = 1;
	//reg_INT3_RX_INIT_CHG_FALLING_INT_EN_LANE = 1;
	//reg_INT3_RX_INIT_CHG_RISING_INT_EN_LANE = 1;
	//reg_INT3_INT_PU_IVREF_CHG_INT_EN_LANE = 1;
    //
	////int9
	//reg_INT9_PM_CHG_INT_EN_LANE = 1;
    //
	////int1
	////reg_INT1_INT_POWER_STATE_VALID_RISE_INT_EN_LANE = 0;
    //
	////int2
	//reg_INT2_SPD_INT_GEN_EN_LANE = 1;
    //
	////int11
	//reg_INT11_RX_TRAIN_ENABLE_INT_EN_LANE = 1;
    //
	////int5
	//reg_INT5_TX_TRAIN_ENABLE_INT_EN_LANE = 1;

	//int10
	//reg_INT10_INT_RX_INIT_RISE_INT_EN_LANE = 1;
	//reg_INT10_RX_INIT_CHG_FALLING_INT_EN_LANE = 1;
	//reg_INT10_RX_INIT_CHG_RISING_INT_EN_LANE = 1;

	//int7
	//reg_INT7_REMOTE_CTRL_VALID_INT_EN_LANE = 1; //no txtrain_if in fw

	//int12
	//reg_INT12_PIN_LOCAL_CTRL_FIELD_READY_INT_EN_LANE = 1;  //no APTA

	//extpin
	//reg_EXTINT_MCU_INT_EN_LANE = 1;
	#endif

	/*if(mcuid==MCU_LANE0)
		cmx_MCU_SYNC_LANE0 = 1;
	if(mcuid==MCU_LANE1)
		cmx_MCU_SYNC_LANE1 = 1;
	if(mcuid==MCU_LANE2)
		cmx_MCU_SYNC_LANE2 = 1;
	if(mcuid==MCU_LANE3)
		cmx_MCU_SYNC_LANE3 = 1;*/

	reg_TX_TRAIN_PAT_TWO_ZERO_LANE = 1;
	reg_TX_TRAIN_PAT_MODE_LANE = 0;

	//set default
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
	
	//Calibration Default value wrong
	//rx_e2c_dcc_cal_setting_lane[12:0] = 13’h70;
	reg_RX_E2C_DCC_CAL_SETTING_LANE_7_0 = 0x70;
	reg_RX_E2C_DCC_CAL_SETTING_LANE_12_8 = 0;
	//rx_dll_cal_setting_lane[12:0] = 13’h70;
	reg_RX_DLL_CAL_SETTING_LANE_7_0 = 0x70;
	reg_RX_DLL_CAL_SETTING_LANE_12_8 = 0;
	//rx_pi_dcc_cal_setting_lane[12:0] = 13’h70;
	reg_RX_PI_DCC_CAL_SETTING_LANE_7_0 = 0x70;
	reg_RX_PI_DCC_CAL_SETTING_LANE_12_8 = 0;
	//rx_align90_cal_setting_lane[12:0] = 13’hc0;
	reg_RX_ALIGN90_CAL_SETTING_LANE_7_0 = 0x95; //90',0.5UI  //0xc0; //0.23UI
	reg_RX_ALIGN90_CAL_SETTING_LANE_12_8 = 0;
	//rx_data_dcc_cal_setting_lane[12:0] = 13’h70;
	reg_RX_DATA_DCC_CAL_SETTING_LANE_7_0 = 0x70;
	reg_RX_DATA_DCC_CAL_SETTING_LANE_12_8 = 0;
	//rx_edge_dcc_cal_setting_lane[12:0] = 13’h70;
	reg_RX_EDGE_DCC_CAL_SETTING_LANE_7_0 = 0x70;
	reg_RX_EDGE_DCC_CAL_SETTING_LANE_12_8 = 0;
	//rx_eom_dll_cal_setting_lane[12:0] = 13’h70;
	reg_RX_EOM_DLL_CAL_SETTING_LANE_7_0 = 0x70;
	reg_RX_EOM_DLL_CAL_SETTING_LANE_12_8 = 0;
	//rx_eom_pi_cal_val_max_lane[10:0] = 11’h4ff;
	//reg_RX_EOM_PI_CAL_VAL_MAX_LANE_10_8 = 0x04;
	//reg_RX_EOM_PI_CAL_VAL_MAX_LANE_7_0 = 0xff;
	//rx_eom_pi_cal_setting_lane[12:0] = 13’hc0;
	reg_RX_EOM_PI_CAL_SETTING_LANE_7_0 = 0xc0;
	reg_RX_EOM_PI_CAL_SETTING_LANE_12_8 = 0;
	//rx_eom_pi_cal_result_ext_lane[10:0] = 11’h400;
    reg_RX_EOM_PI_CAL_RESULT_EXT_LANE_10_8 = 4;
    reg_RX_EOM_PI_CAL_RESULT_EXT_LANE_7_0 = 0;
	//rx_eom_pi_dcc_cal_setting_lane[12:0] = 13’h70;
	reg_RX_EOM_PI_DCC_CAL_SETTING_LANE_7_0 = 0x70;
	reg_RX_EOM_PI_DCC_CAL_SETTING_LANE_12_8 = 0;
	
	reg_PLL_RS_VCON_REF_SEL_LANE_3_0 = 7;

	lnx_CAL_PHASE_LANE_7_0 = reg_RX_ALIGN90_CAL_SETTING_LANE_7_0 & 0x7f; //64 //22; //0x1e;

	// registers default value changes requested by Fei
    if(pll_access_allowed(PLL__RS_OR_TS__RS)) {
	    reg_PLL_RS_ANA_RSVDA_LANE_7_0 = 0xfc; //0xf0;
    }
    if(pll_access_allowed(PLL__RS_OR_TS__TS)) {
	    reg_PLL_TS_ANA_RSVDA_LANE_7_0 = 0xfc;
    }

	#ifdef _56G_7NM
	reg_EN_DFE_F1P5_LANE = lnx_DFE_F1P5_EN_LANE;  //
	#endif

	lnx_RX_PI_DCC_CONT_CAL_FW_EN_LANE = 1;
	
	//AVDD=1V
	if(mcuid == MCU_CMN) {
        reg_VREF_0P6V_VDDVCO_RXPLL_CH0_3_0 = 3;
        reg_VREF_0P6V_VDDVCO_RXPLL_CH1_3_0 = 3;
        reg_VREF_0P6V_VDDVCO_RXPLL_CH2_3_0 = 3;
        reg_VREF_0P6V_VDDVCO_RXPLL_CH3_3_0 = 3;
        reg_VREF_0P6V_VDDVCO_TXPLL_CH0_3_0 = 3;
        reg_VREF_0P6V_VDDVCO_TXPLL_CH1_3_0 = 3;
        reg_VREF_0P6V_VDDVCO_TXPLL_CH2_3_0 = 3;
        reg_VREF_0P6V_VDDVCO_TXPLL_CH3_3_0 = 3;
        reg_VREF_VDDACAL_PLL_PFD_SEL_3_0 = 0xd;
        reg_VREF_VDDACAL_PLL_CLK_SEL_3_0 = 0x9;
	}

    if(pll_access_allowed(PLL__RS_OR_TS__RS)) {
        reg_PLL_RS_LCPLLREG_SEL_3P5K_TO_3K_RATIO_LANE = 1; //0;
	    reg_PLL_RS_SELHV_LCPLL_CP_LANE_3_0 = 0x6; //0xd;
        /*reg_PLL_RS_VDDA_INTP_CAL_RESULT_EXT_LANE_3_0 = 0x7;*/
        /*reg_PLL_RS_VDDA_INTP_CAL_CAL_EN_EXT_LANE = 1;*/
        /*reg_PLL_RS_VDDA_INTP_CAL_CAL_EN_EXT_LANE = 0;*/
	    reg_PLL_RS_VCO_SLAVE_ADJ_LANE_2_0 = 5; //1; //5; //3;
	    reg_PLL_RS_VDDR_DAC_ADJ_LANE_2_0 = 5; //5; //4;
    }
    if(pll_access_allowed(PLL__RS_OR_TS__TS)) {
        reg_PLL_TS_LCPLLREG_SEL_3P5K_TO_3K_RATIO_LANE = 1; //0;
	    reg_PLL_TS_SELHV_LCPLL_CP_LANE_3_0 = 0x6; //0xd;
        /*reg_PLL_TS_VDDA_INTP_CAL_RESULT_EXT_LANE_3_0  = 0x7;*/
        /*reg_PLL_TS_VDDA_INTP_CAL_CAL_EN_EXT_LANE = 1;*/
        /*reg_PLL_TS_VDDA_INTP_CAL_CAL_EN_EXT_LANE = 0;*/
	    reg_PLL_TS_VCO_SLAVE_ADJ_LANE_2_0 = 5; //1; //5; //3;
	    reg_PLL_TS_VDDR_DAC_ADJ_LANE_2_0 = 5; //5; //4;
    }

	//reg_PLL_RS_LCVCO_NSF_IPTAT_EN_LANE = 0;
	//reg_PLL_TS_LCVCO_NSF_IPTAT_EN_LANE = 0;
	
	#ifdef _56G_7NM
    reg_PLL_RS_TXVCO_SF_ICPTAT_SEL_LANE_2_0 = cmx_PLL_TXVCO_SF_ICPTAT_SEL_2_0;//4;
    reg_PLL_TS_TXVCO_SF_ICPTAT_SEL_LANE_2_0 = cmx_PLL_TXVCO_SF_ICPTAT_SEL_2_0; //4;
	#else

	#endif

    if(pll_access_allowed(PLL__RS_OR_TS__RS)) {
	    reg_PLL_RS_VCON_MIN_SEL_LANE_2_0 = 2; //5 --> 2 (0.4v -> 0.325v)
	    reg_PLL_RS_VCON_MAX_SEL_LANE_2_0 = 7; //3 --> 7 (0.68v -> 0.825v)
	    reg_PLL_RS_VARAC_BIAS_SEL_LANE_2_0 = 0;  //5 --> 0 (optimized max kcvo from 0.75v to 0.625v)

        #ifdef _56G_5NM
        reg_PLL_RS_DIV_DCC_CAL_VAL_MAX_LANE_5_0 = 8; //10 - -> 08
        #else // #ifdef _56G_5NM
        reg_PLL_RS_DIV_DCC_CAL_VAL_MAX_LANE_4_0 = 8; //10 - -> 08
        #endif // #else // #ifdef _56G_5NM
        reg_PLL_RS_VCON_REF_SEL_LANE_3_0 = 7; //3; requested by Fei
        reg_PLL_RS_LCPLL_TEMPC_MUX_HOLD_SEL_MAX_LANE_3_0 = 0xb; //bin
    }

    if(pll_access_allowed(PLL__RS_OR_TS__TS)) {
	    reg_PLL_TS_VCON_MIN_SEL_LANE_2_0 = 2; //5 --> 2 (0.4v -> 0.325v)
	    reg_PLL_TS_VCON_MAX_SEL_LANE_2_0 = 7; //3 --> 7 (0.68v -> 0.825v)
	    reg_PLL_TS_VARAC_BIAS_SEL_LANE_2_0 = 0; //5 --> 0 (optimized max kcvo from 0.75v to 0.625v)

        #ifdef _56G_5NM
        reg_PLL_TS_DIV_DCC_CAL_VAL_MAX_LANE_5_0 = 8; //10 - -> 08
        #else // #ifdef _56G_5NM
        reg_PLL_TS_DIV_DCC_CAL_VAL_MAX_LANE_4_0 = 8; //10 - -> 08
        #endif // #else // #ifdef _56G_5NM
        reg_PLL_TS_VCON_REF_SEL_LANE_3_0 = 7; //3;
        reg_PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_MAX_LANE_3_0 = 0xb; //bin
    }
	
	reg_EN_CTLE_MID_FREQ_LANE = 1;
	reg_CTLE_RS1_MID_LANE_1_0 = 3;
	reg_CTLE_CS1_MID_LANE_1_0 = 3;
	
	if(mcuid == MCU_CMN) {
        drv_cmn_func_cfg();
    }
	#ifdef _PCIE_BUILD
    #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
    else {
        if(reg_PIPE_CFG_MODE_RD_LANE) {
            //reg_CFG_PM_RXDLOZ_WAIT_LANE_7_0 = 1;  //already being set to 1 if FAST_POWER_ON_EN
            reg_LINK_TRAIN_MODE_LANE = 0x1;
            //cmx_PIPE4_EN = 0x1;                   //already being set to 1 by common MCU in xdat_cmn_init
            reg_PCIE_MODE_LANE = 0x1;
            reg_DET_BYPASS_LANE = 0x1;
            reg_RXDATA_LATENCY_REDUCE_EN_LANE = 0x1;
            reg_PIPE_SFT_RESET_LANE = 0;
        }
    }
    #endif //#if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
	#endif // #ifdef _PCIE_BUILD

	#ifdef _SERDES_BUILD
	reg_DFE_STEP_COARSE_F0_LANE_3_0 = 4;
	reg_DFE_STEP_COARSE_FX1_LANE_3_0 = 4;
	reg_DFE_STEP_COARSE_FX2_LANE_3_0 = 4;
	reg_DFE_STEP_COARSE_FX3_LANE_3_0 = 4;
	#endif	

}

__code uint16_t refclkx4_tb[] = { 100, 120, 160, 200, 250, 400, 500, 625, 491 }; //25, 30, 40, 50, 62, 100, 125, 156, 122

void set_timer_cnt() BANKING_CTRL {
    #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
    uint16_t pin_mcu_freq_temp;
    #endif
	uint16_t temp, refclk_freq;
	uint32_t temp32;
	uint8_t i;
	
	refclk_freq = 0;

    #ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
	if(cmx_MCU_FREQ_15_0==0) cmx_MCU_FREQ_15_0 = 400;

	/*reg_MCU_DEBUGD_LANE_7_0 =  PIN_REF_FREF_SEL_RD;*/
	i = PIN_REF_FREF_SEL_RD;
	/*reg_MCU_DEBUGE_LANE_7_0 =  i;*/
    #endif

    #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
    pin_mcu_freq_temp = ((uint16_t)(reg_PIN_MCU_FREQ_RD_15_0_b1 << 8) | reg_PIN_MCU_FREQ_RD_15_0_b0);
	//if(reg_PIN_MCU_FREQ_RD_15_0==0) reg_PIN_MCU_FREQ_RD_15_0 = 400;   //Can't write to reg_PIN_MCU_FREQ_RD_15_0

	/*reg_MCU_DEBUGD_LANE_7_0 =  reg_PIN_REF_FREF_SEL_TX_RD_LANE_4_0;*/
	i = reg_PIN_REF_FREF_SEL_TX_RD_LANE_4_0;
	/*reg_MCU_DEBUGE_LANE_7_0 =  i;*/
    #endif
	
    if (mcuid != MCU_CMN) {

        #ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
		mcuclk_mc = (uint8_t)((cmx_MCU_FREQ_15_0+8)/15);

        reg_MCU_DEBUG0_LANE_7_0 = 0x2;		
		lnx_REFCLK_FREQ_RD_LANE_15_0 = refclkx4_tb[i];
	
		//1u unit pwm timer1, timer2
		//reg_TIMER1_CLK_SEL_LANE_1_0 = 0; //refclk
		reg_TIMER_1_SEL_LANE_1_0 = 0x01; //PWM1
		reg_TIMER_2_SEL_LANE_1_0 = 0x01; //PWM1
		reg_PWM1_CLK_SEL_LANE_1_0 = 0; //refclk 
		reg_PWM1_EN_LANE = 1;
		temp = lnx_REFCLK_FREQ_RD_LANE_15_0>>3;
		reg_PWM1_COUNTER_LANE_30_0_b0 = (uint8_t)temp;
		reg_PWM1_COUNTER_LANE_30_0_b1 = (uint8_t)(temp >> 8);
        #endif
		
        #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
		mcuclk_mc = (uint8_t)((pin_mcu_freq_temp+8)/15);

        reg_MCU_DEBUG0_LANE_7_0 = 0x2;		
		lnx_REFCLK_FREQ_RD_LANE_15_0 = refclkx4_tb[i];
	
		//1u unit pwm timer1, timer2
		//reg_TIMER1_CLK_SEL_LANE_1_0 = 0; //refclk
		reg_TIMER_1_SEL_LANE_1_0 = 0x01; //PWM1
		reg_TIMER_2_SEL_LANE_1_0 = 0x01; //PWM1
		reg_PWM1_CLK_SEL_LANE_1_0 = 0x1; //MCU clock
		reg_PWM1_EN_LANE = 1;
		/*temp = reg_PIN_MCU_FREQ_RD_15_0>>1;*/
		temp = pin_mcu_freq_temp >>1;

		reg_PWM1_COUNTER_LANE_30_0_b0 = (uint8_t)temp;
		reg_PWM1_COUNTER_LANE_30_0_b1 = (uint8_t)(temp >> 8);
        #endif

		//1m unit pwm for timer2
		reg_PWM2_CLK_SEL_LANE_1_0 = 0; //refclk 
		temp32 = lnx_REFCLK_FREQ_RD_LANE_15_0*125L; //refclk*500
		reg_PWM2_COUNTER_LANE_30_0_b0 = (uint8_t)temp32;
		reg_PWM2_COUNTER_LANE_30_0_b1 = (uint8_t)(temp32 >> 8);
		reg_PWM2_COUNTER_LANE_30_0_b2 = (uint8_t)(temp32 >> 16);
	}
	else {

        #ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
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
        #endif

        #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
		cmx_MCUCLK_MC_7_0 = (uint8_t)((pin_mcu_freq_temp+8)/15);
	
		//1u unit pwm timer1
		//reg_TIMER1_CLK_SEL_CMN_1_0 = 0; //refclk
		reg_TIMER_1_SEL_CMN_1_0 = 0x01; //PWM1
		reg_PWM1_CLK_SEL_CMN_1_0 = 0x1; //MCU clock
		reg_PWM1_EN_CMN = 1;
		temp = pin_mcu_freq_temp>>1;
		reg_PWM1_COUNTER_CMN_30_0_b0 = (uint8_t)temp;
		reg_PWM1_COUNTER_CMN_30_0_b1 = (uint8_t)(temp >> 8);
        #endif
	}	
	
	timer2_init();
	
}
