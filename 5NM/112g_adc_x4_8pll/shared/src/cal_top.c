/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file cal_top.c
* \purpose calibration call
* \History
*	10/13/2015 Heejeong Ryu		Initial 
*/

#include "common.h"
#include "driver.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK1
#endif

/**
 * \module Calibration Top
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
*/
static void rx_clktop_vdd_dll_cal(void){
    reg_TRX_VDDR_CLKTOP_DLL_CAL_BYPASS_EN_LANE = 0; 
    reg_TRX_VDDR_CLKTOP_PI_CAL_BYPASS_EN_LANE = 1;
    reg_TRX_VDDR_CLKTOP_PI_EOM_CAL_BYPASS_EN_LANE = 1;
    reg_TRX_VDDR_CLKTOP_A90_CAL_BYPASS_EN_LANE = 1;
    reg_TRX_VDDR_CLKTOP_DIV2_CAL_BYPASS_EN_LANE = 1;
    reg_TRX_VDDR_CLKTOP_SKEW_CAL_BYPASS_EN_LANE = 1;
    reg_TRX_VDDR_ADC_THCLK_CAL_BYPASS_EN_LANE = 1;
    reg_TRX_VDDR_ADC_DRV_CAL_BYPASS_EN_LANE = 1;
    reg_TRX_VDDR_CTLE_LCL_VDDL_CAL_BYPASS_EN_LANE = 1;
    reg_TRX_VDDR_CLKTOP_VDDL_CAL_BYPASS_EN_LANE = 1;
    reg_TRX_VDDR_TXDATA_CAL_BYPASS_EN_LANE = 1;
    reg_TRX_VDDR_TXCLK_CAL_BYPASS_EN_LANE = 1;
    reg_TRX_VDDR_TXPRE_CAL_BYPASS_EN_LANE = 1;
    reg_TRX_IVREF_VDDR_TOP_START_LANE = 0;
    reg_TRX_IVREF_VDDR_TOP_START_LANE = 1;
    delay(Tus);
    while(reg_TRX_IVREF_VDDR_TOP_DONE_LANE == 0){
    }
    reg_TRX_IVREF_VDDR_TOP_START_LANE = 0;
}
void Calibration(void) BANKING_CTRL {
			uint8_t save_reg_TX_FIR_BYPASS_L1_DELAY_LANE,save_reg_TX_FIR_BYPASS_L2_DELAY_LANE,save_reg_TX_FIR_BYPASS_L3_DELAY_LANE,save_reg_TX_FIR_RESERVED_LANE_3_0;

	// --- CAL start
	if( mcuid==MCU_CMN ) {
		PHY_STATUS_CMN = ST_CAL;
		cmx_CAL_DONE = 0;
		CONTROL_CONFIG6.BT.B0 &= 0xf9; //CAL_DONE_LANE0123, RXIMP_CAL_DONE0123 = 0
		CONTROL_CONFIG6.BT.B1 &= 0xf9;
		CONTROL_CONFIG6.BT.B2 &= 0xf9;
		CONTROL_CONFIG6.BT.B3 &= 0xf9;

		if( EXT_FORCE_CAL_DONE ) goto skip_out;

		tsen_on();
		proc_cal();

//no need for 5nm
/*
		if(cmx_VDD_CAL_EXT_EN) {
			VDD_CAL_DONE_LANE0 = 0;
			VDD_CAL_DONE_LANE1 = 0;
			VDD_CAL_DONE_LANE2 = 0;
			VDD_CAL_DONE_LANE3 = 0;
		}
*/
		if(cmx_RXIMP_CAL_EXT_EN) {
			RXIMP_CAL_DONE_LANE0 = 0;
			RXIMP_CAL_DONE_LANE1 = 0;
			RXIMP_CAL_DONE_LANE2 = 0;
			RXIMP_CAL_DONE_LANE3 = 0;
		}
		if(cmx_TXIMP_CAL_EXT_EN) {
			TXIMP_CAL_DONE_LANE0 = 0;
			TXIMP_CAL_DONE_LANE1 = 0;
			TXIMP_CAL_DONE_LANE2 = 0;
			TXIMP_CAL_DONE_LANE3 = 0;
		}
	}

	if( mcuid != MCU_CMN ){

		PHY_STATUS = ST_CAL;
		reg_MCU_DEBUG0_LANE_7_0 = 0x30;
		turn_off_cont_cal();

		// clear pending speed change requests
		clear_spd_chg_isr();

		if( EXT_FORCE_CAL_DONE ) {
			all_cal_ext();
			goto skip_out;
		}
		reg_PIN_PLL_READY_RX_LANE = 0;
		reg_PIN_PLL_READY_TX_LANE = 0;
		reg_RX_INIT_DONE_LANE = 0;
		reg_ANA_TX_IDLE_FORCE_LANE = 1;
		reg_ANA_TX_IDLE_LANE = 0;
		reg_RX_EQ_EOM_CLK_EN_LANE = 1; //reg_EOM_CLK_EN_LANE = 1;

		reg_RX_RESET_ANA_LANE = 1; reg_TX_RESET_ANA_LANE = 1;
		reg_DTL_RST_LANE = 1;
		reg_DTL_RST_SYNC_LANE = 1;
		pll_clk_ready_all_0();
		delay(Tus);

		if(pll_sel != RS_ON) load_init_temp_table(0); //ts
		if(pll_sel != TS_ON) load_init_temp_table(1); //rs

		//reg_PLL_RS_RESET_ANA_LANE = 1;
		//reg_PLL_TS_RESET_ANA_LANE = 1;
		pll_reset_all_1();
		LoadSpeedtbl();
		PHY_STATUS = ST_CAL;
		//reg_PLL_RS_RESET_ANA_LANE = 0; // min 10us pulse
		//reg_PLL_TS_RESET_ANA_LANE = 0;
		pll_reset_all_0();

		// Wait for proc_cal done before start pll calibration
		wait_for(cmx_PROCESS_CAL_DONE,0);
		is_pause(2);
		if(pll_sel != TS_ON) { rx_pll_cal(); pll_clk_rs_ready_1(); }
		if(pll_sel != RS_ON) { tx_pll_cal(); pll_clk_ts_ready_1(); }

		delay(T_10us);
		reg_RX_RESET_ANA_LANE = 0; reg_TX_RESET_ANA_LANE = 0;

		is_pause(2);
		//pll_dcc_vdd_rs();
		if(pll_sel != TS_ON) { rx_plldcc_cal(); reg_PLL_RS_LCPLL_TEMPC_EXT_EN_LANE = 0; }
		if(pll_sel != RS_ON) { tx_plldcc_cal(); reg_PLL_TS_LCPLL_TEMPC_EXT_EN_LANE = 0; }

		//--- GEN LOOP ---
		//if(phy_mode==SERDES)  //serdes need to calibrate on own speed
		{
			//dfe_spd_init(); // TODO - need to enable
		}

		is_pause(2);
		save_reg_TX_FIR_BYPASS_L1_DELAY_LANE = reg_TX_FIR_BYPASS_L1_DELAY_LANE;
		save_reg_TX_FIR_BYPASS_L2_DELAY_LANE = reg_TX_FIR_BYPASS_L2_DELAY_LANE;
		save_reg_TX_FIR_BYPASS_L3_DELAY_LANE = reg_TX_FIR_BYPASS_L3_DELAY_LANE;
		save_reg_TX_FIR_RESERVED_LANE_3_0    = reg_TX_FIR_RESERVED_LANE_3_0;

		reg_TX_FIR_BYPASS_L1_DELAY_LANE = 0x01;
		reg_TX_FIR_BYPASS_L2_DELAY_LANE = 0x01;
		reg_TX_FIR_BYPASS_L3_DELAY_LANE = 0x01;
		reg_TX_FIR_RESERVED_LANE_3_0    = 0x01;


		if(cmx_VDD_CAL_EXT_EN == 0)
		{
  			trx_ivref_vddr_tx();
			
//replaced by 5nm unified vdd cal
/*
			reg_VDDACAL_COMP_EN = 1;  // enable CMN comparator

			// issue request
			switch(mcuid){
				case MCU_LANE0: MCU_SYNC_LANE0 = 1;break;
				case MCU_LANE1: MCU_SYNC_LANE1 = 1;break;
				case MCU_LANE2: MCU_SYNC_LANE2 = 1;break;
				case MCU_LANE3: MCU_SYNC_LANE3 = 1;break;
			}
			short_delay();
			// re-check and wait for lower number lanes
			// then start cal
			// release flag
			if(mcu_en0) {
				if(mcuid==MCU_LANE0) {
					while((reg_MCU_DEBUGA_LANE_7_0=0xA)&&(reg_MCU_DEBUG_CMN_0_7_0&0x1)==0);
					vdd_cal(5, TX_REGULATORS);
					MCU_SYNC_LANE0 = 0;
					VDD_CAL_DONE_LANE0 = 1;
				}
			}
			if(mcu_en1) {
				if(mcuid==MCU_LANE1) {
					while((reg_MCU_DEBUGA_LANE_7_0=0xB)&&((reg_MCU_DEBUG_CMN_0_7_0>>1)&0x1)==0);
					vdd_cal(5, TX_REGULATORS);
					MCU_SYNC_LANE1 = 0;
					VDD_CAL_DONE_LANE1 = 1;
				}
			}
			if(mcu_en2) {
				if(mcuid==MCU_LANE2) {
					while((reg_MCU_DEBUGA_LANE_7_0=0xC)&&((reg_MCU_DEBUG_CMN_0_7_0>>2)&0x1)==0);
					vdd_cal(5, TX_REGULATORS);
					MCU_SYNC_LANE2 = 0;
					VDD_CAL_DONE_LANE2 = 1;
				}
			}
			if(mcu_en3) {
				if(mcuid==MCU_LANE3) {
					while((reg_MCU_DEBUGA_LANE_7_0=0xD)&&((reg_MCU_DEBUG_CMN_0_7_0>>3)&0x1)==0);
					vdd_cal(5, TX_REGULATORS);
					MCU_SYNC_LANE3 = 0;
					VDD_CAL_DONE_LANE3 = 1;
				}
			}
			if ((VDD_CAL_DONE_LANE0|!mcu_en0) && (VDD_CAL_DONE_LANE1|!mcu_en1) &&
			    (VDD_CAL_DONE_LANE2|!mcu_en2) && (VDD_CAL_DONE_LANE3|!mcu_en3)) {
				reg_VDDACAL_COMP_EN = 0;
				VDD_CAL_DONE_LANE0 = 0;
				VDD_CAL_DONE_LANE1 = 0;
				VDD_CAL_DONE_LANE2 = 0;
				VDD_CAL_DONE_LANE3 = 0;
			}
			while((reg_MCU_DEBUGA_LANE_7_0=0xE)&&reg_VDDACAL_COMP_EN);
*/
		}

		is_pause(2);
		txdcc_cal();

		reg_TX_FIR_BYPASS_L1_DELAY_LANE = save_reg_TX_FIR_BYPASS_L1_DELAY_LANE;
		reg_TX_FIR_BYPASS_L2_DELAY_LANE = save_reg_TX_FIR_BYPASS_L2_DELAY_LANE;
		reg_TX_FIR_BYPASS_L3_DELAY_LANE = save_reg_TX_FIR_BYPASS_L3_DELAY_LANE;
		reg_TX_FIR_RESERVED_LANE_3_0    = save_reg_TX_FIR_RESERVED_LANE_3_0;

		rx_cal_init(); // run before VDDR calibration

		is_pause(2);
		if(cmx_VDD_CAL_EXT_EN == 0)
		{
  			trx_ivref_vddr_rx_1st();
//replaced by 5nm unified vdd cal
/*
			reg_VDDACAL_COMP_EN = 1;  // enable CMN comparator

			//mcu_align_0();
			// issue request
			switch(mcuid){
				case MCU_LANE0: MCU_SYNC_LANE0 = 1;break;
				case MCU_LANE1: MCU_SYNC_LANE1 = 1;break;
				case MCU_LANE2: MCU_SYNC_LANE2 = 1;break;
				case MCU_LANE3: MCU_SYNC_LANE3 = 1;break;
			}
			short_delay();
			// re-check and wait for lower number lanes
			// then start cal
			// release flag
			if(mcu_en0) {
				if(mcuid==MCU_LANE0) {
					while((reg_MCU_DEBUGA_LANE_7_0=0xF)&&(reg_MCU_DEBUG_CMN_0_7_0&0x1)==0);
					vdd_cal(8, RX_REGULATORS);
					MCU_SYNC_LANE0 = 0;
					VDD_CAL_DONE_LANE0 = 1;
				}
			}
			if(mcu_en1) {
				if(mcuid==MCU_LANE1) {
					while((reg_MCU_DEBUGA_LANE_7_0=0x10)&&((reg_MCU_DEBUG_CMN_0_7_0>>1)&0x1)==0);
					vdd_cal(8, RX_REGULATORS);
					MCU_SYNC_LANE1 = 0;
					VDD_CAL_DONE_LANE1 = 1;
				}
			}
			if(mcu_en2) {
				if(mcuid==MCU_LANE2) {
					while((reg_MCU_DEBUGA_LANE_7_0=0x11)&&((reg_MCU_DEBUG_CMN_0_7_0>>2)&0x1)==0);
					vdd_cal(8, RX_REGULATORS);
					MCU_SYNC_LANE2 = 0;
					VDD_CAL_DONE_LANE2 = 1;
				}
			}
			if(mcu_en3) {
				if(mcuid==MCU_LANE3) {
					while((reg_MCU_DEBUGA_LANE_7_0=0x12)&&((reg_MCU_DEBUG_CMN_0_7_0>>3)&0x1)==0);
					vdd_cal(8, RX_REGULATORS);
					MCU_SYNC_LANE3 = 0;
					VDD_CAL_DONE_LANE3 = 1;
				}
			}
			if ((VDD_CAL_DONE_LANE0|!mcu_en0) && (VDD_CAL_DONE_LANE1|!mcu_en1) &&
			    (VDD_CAL_DONE_LANE2|!mcu_en2) && (VDD_CAL_DONE_LANE3|!mcu_en3)) {
				reg_VDDACAL_COMP_EN = 0;
				VDD_CAL_DONE_LANE0 = 0;
				VDD_CAL_DONE_LANE1 = 0;
				VDD_CAL_DONE_LANE2 = 0;
				VDD_CAL_DONE_LANE3 = 0;
			}
			while((reg_MCU_DEBUGA_LANE_7_0=0x13)&&reg_VDDACAL_COMP_EN);
*/
		}

		is_pause(2);
		dll_cal();

		is_pause(2);
		////////////////////////////////////////////////////////////////////do a RX_CLKTOP_VDD_DLL calibration here.
		if(cmx_VDD_CAL_EXT_EN == 0)
		{
			rx_clktop_vdd_dll_cal();
		    
/* following are old 7nm code
			reg_VDDACAL_COMP_EN = 1;  // enable CMN comparator

			// issue request
			switch(mcuid){
				case MCU_LANE0: MCU_SYNC_LANE0 = 1;break;
				case MCU_LANE1: MCU_SYNC_LANE1 = 1;break;
				case MCU_LANE2: MCU_SYNC_LANE2 = 1;break;
				case MCU_LANE3: MCU_SYNC_LANE3 = 1;break;
			}
			short_delay();
			// re-check and wait for lower number lanes
			// then start cal
			// release flag
			if(mcu_en0) {
				if(mcuid==MCU_LANE0) {
					while((reg_MCU_DEBUGA_LANE_7_0=0x14)&&(reg_MCU_DEBUG_CMN_0_7_0&0x1)==0);
					vdd_cal(8, RX_CLKTOP_VDD_DLL);
					MCU_SYNC_LANE0 = 0;
					VDD_CAL_DONE_LANE0 = 1;
				}
			}
			if(mcu_en1) {
				if(mcuid==MCU_LANE1) {
					while((reg_MCU_DEBUGA_LANE_7_0=0x15)&&((reg_MCU_DEBUG_CMN_0_7_0>>1)&0x1)==0);
					vdd_cal(8, RX_CLKTOP_VDD_DLL);
					MCU_SYNC_LANE1 = 0;
					VDD_CAL_DONE_LANE1 = 1;
				}
			}
			if(mcu_en2) {
				if(mcuid==MCU_LANE2) {
					while((reg_MCU_DEBUGA_LANE_7_0=0x16)&&((reg_MCU_DEBUG_CMN_0_7_0>>2)&0x1)==0);
					vdd_cal(8, RX_CLKTOP_VDD_DLL);
					MCU_SYNC_LANE2 = 0;
					VDD_CAL_DONE_LANE2 = 1;
				}
			}
			if(mcu_en3) {
				if(mcuid==MCU_LANE3) {
					while((reg_MCU_DEBUGA_LANE_7_0=0x17)&&((reg_MCU_DEBUG_CMN_0_7_0>>3)&0x1)==0);
					vdd_cal(8, RX_CLKTOP_VDD_DLL);
					MCU_SYNC_LANE3 = 0;
					VDD_CAL_DONE_LANE3 = 1;
				}
			}
			if ((VDD_CAL_DONE_LANE0|!mcu_en0) && (VDD_CAL_DONE_LANE1|!mcu_en1) &&
			    (VDD_CAL_DONE_LANE2|!mcu_en2) && (VDD_CAL_DONE_LANE3|!mcu_en3)) {
				reg_VDDACAL_COMP_EN = 0;
				VDD_CAL_DONE_LANE0 = 0;
				VDD_CAL_DONE_LANE1 = 0;
				VDD_CAL_DONE_LANE2 = 0;
				VDD_CAL_DONE_LANE3 = 0;
			}
			while((reg_MCU_DEBUGA_LANE_7_0=0x18)&&reg_VDDACAL_COMP_EN);
---end---*/
		}

		is_pause(2);
		dll_cal();

		is_pause(2);
        	rx_clk_cal();

		is_pause(2);
		if(cmx_VDD_CAL_EXT_EN == 0)
		{
///redo all rx vdd calibration using IPDOC autogen
  			trx_ivref_vddr_rx_1st();
			

/////////////////////below is 7nm code
/*
			reg_VDDACAL_COMP_EN = 1;  // enable CMN comparator

			// vdd_cal (RX_CLKTOP_VDD_A90, RX_CLKTOP_VDD_DIV2, RX_CLKTOP_VDD_SKEW, RX_ADC_VDD_THCLK, RX_ADC_VDD_THDRV regulators)
			// issue request
			switch(mcuid){
				case MCU_LANE0: MCU_SYNC_LANE0 = 1;break;
				case MCU_LANE1: MCU_SYNC_LANE1 = 1;break;
				case MCU_LANE2: MCU_SYNC_LANE2 = 1;break;
				case MCU_LANE3: MCU_SYNC_LANE3 = 1;break;
			}
			short_delay();
			// re-check and wait for lower number lanes
			// then start cal
			// release flag
			if(mcu_en0) {
				if(mcuid==MCU_LANE0) {
					while((reg_MCU_DEBUGA_LANE_7_0=0x19)&&(reg_MCU_DEBUG_CMN_0_7_0&0x1)==0);
					vdd_cal(8, RX_IVREF_REGS);
					MCU_SYNC_LANE0 = 0;
					VDD_CAL_DONE_LANE0 = 1;
				}
			}
			if(mcu_en1) {
				if(mcuid==MCU_LANE1) {
					while((reg_MCU_DEBUGA_LANE_7_0=0x1A)&&((reg_MCU_DEBUG_CMN_0_7_0>>1)&0x1)==0);
					vdd_cal(8, RX_IVREF_REGS);
					MCU_SYNC_LANE1 = 0;
					VDD_CAL_DONE_LANE1 = 1;
				}
			}
			if(mcu_en2) {
				if(mcuid==MCU_LANE2) {
					while((reg_MCU_DEBUGA_LANE_7_0=0x1B)&&((reg_MCU_DEBUG_CMN_0_7_0>>2)&0x1)==0);
					vdd_cal(8, RX_IVREF_REGS);
					MCU_SYNC_LANE2 = 0;
					VDD_CAL_DONE_LANE2 = 1;
				}
			}
			if(mcu_en3) {
				if(mcuid==MCU_LANE3) {
					while((reg_MCU_DEBUGA_LANE_7_0=0x1C)&&((reg_MCU_DEBUG_CMN_0_7_0>>3)&0x1)==0);
					vdd_cal(8, RX_IVREF_REGS);
					MCU_SYNC_LANE3 = 0;
					VDD_CAL_DONE_LANE3 = 1;
				}
			}
			if ((VDD_CAL_DONE_LANE0|!mcu_en0) && (VDD_CAL_DONE_LANE1|!mcu_en1) &&
			    (VDD_CAL_DONE_LANE2|!mcu_en2) && (VDD_CAL_DONE_LANE3|!mcu_en3)) {
				reg_VDDACAL_COMP_EN = 0;
				VDD_CAL_DONE_LANE0 = 0;
				VDD_CAL_DONE_LANE1 = 0;
				VDD_CAL_DONE_LANE2 = 0;
				VDD_CAL_DONE_LANE3 = 0;
			}
			while((reg_MCU_DEBUGA_LANE_7_0=0x1D)&&reg_VDDACAL_COMP_EN);
-----end----*/
		}

#ifdef _5FF_COMPHY_112G_ADC_X4_8PLL_R1P0
		if(reg_PWRON_SEQ_LANE==0 && cmx_CAL_START==0) goto skip_out;
#else
		if(reg_PWRON_SEQ_TX_LANE==0 && reg_PWRON_SEQ_RX_LANE==0 && cmx_CAL_START==0) goto skip_out;
#endif

		is_pause(2);
		if(cmx_SQ_CAL_EXT_EN == 0)
		{
			rx_sq_ofst_cal();
			rx_sq_thresh_cal();
		}

		is_pause(2);
		//mcu_align_0();
		if(cmx_RXIMP_CAL_EXT_EN == 0)
		{
			// issue request
			switch(mcuid){
				case MCU_LANE0: MCU_SYNC_LANE0 = 1;break;
				case MCU_LANE1: MCU_SYNC_LANE1 = 1;break;
				case MCU_LANE2: MCU_SYNC_LANE2 = 1;break;
				case MCU_LANE3: MCU_SYNC_LANE3 = 1;break;
			}

			reg_RXIMPCAL_EN = 1;

			short_delay();
			// re-check and wait for lower number lanes
			// then start cal
			// release flag
			if(mcu_en0) {
				if(mcuid==MCU_LANE0) {
					while((reg_MCU_DEBUGA_LANE_7_0=0x1E)&&(reg_MCU_DEBUG_CMN_0_7_0&0x1)==0);
					rximp_cal();
					RXIMP_CAL_DONE_LANE0 = 1;
					MCU_SYNC_LANE0 = 0;
				}
			}
			if(mcu_en1) {
				if(mcuid==MCU_LANE1) {
					while((reg_MCU_DEBUGA_LANE_7_0=0x1F)&&((reg_MCU_DEBUG_CMN_0_7_0>>1)&0x1)==0);
					rximp_cal();
					RXIMP_CAL_DONE_LANE1 = 1;
					MCU_SYNC_LANE1 = 0;
				}
			}
			if(mcu_en2) {
				if(mcuid==MCU_LANE2) {
					while((reg_MCU_DEBUGA_LANE_7_0=0x20)&&((reg_MCU_DEBUG_CMN_0_7_0>>2)&0x1)==0);
					rximp_cal();
					RXIMP_CAL_DONE_LANE2 = 1;
					MCU_SYNC_LANE2 = 0;
				}
			}
			if(mcu_en3) {
				if(mcuid==MCU_LANE3) {
					while((reg_MCU_DEBUGA_LANE_7_0=0x21)&&((reg_MCU_DEBUG_CMN_0_7_0>>3)&0x1)==0);
					rximp_cal();
					RXIMP_CAL_DONE_LANE3 = 1;
					MCU_SYNC_LANE3 = 0;
				}
			}

			if((RXIMP_CAL_DONE_LANE0 || !mcu_en0) && (RXIMP_CAL_DONE_LANE1 || !mcu_en1) &&
			   (RXIMP_CAL_DONE_LANE2 || !mcu_en2) && (RXIMP_CAL_DONE_LANE3 || !mcu_en3))
				reg_RXIMPCAL_EN = 0;

			while((reg_MCU_DEBUGA_LANE_7_0=0x22)&&reg_RXIMPCAL_EN);
		}

		//Disable the calibration comparator, once calibration is complete
		reg_VDDACAL_COMP_EN = 0;

		// Note: ADC cal use the Rx clock for calibration
		reg_RX_ADC_RESET_LANE = 1;
		delay(T_p25us);
		reg_RX_ADC_RESET_LANE = 0;

		reg_TX_FIR_CLK_OFF_LANE = 0;

		delay(Tus);

		reg_TX_RESET_FIR_LANE = 0;

		delay(Tus);

		reg_TX_CLK_EN_LANE = 1;
		reg_RX_CLK_EN_LANE = 1;
		reg_DTL_RST_LANE = 0;

		// ADC T/H Output Common calibration; this is optional and the default is bypass
		adc_cmn_mode_cal();

		// ADC VDDR calibration; this is optional and the default is bypass
		adc_vddr_cal();

		is_pause(2);
		adc_cal(); // offset, gain and skew calibrations

		// power off EOM after all RX calibrations are completed
		reg_RX_PU_EOM_DLY_LANE = 0;
		reg_RX_PU_EOM_PI_LANE = 0;

		is_pause(2);
		if(cmx_TXIMP_CAL_EXT_EN == 0)
		{
			//mcu_align_0();
			// issue request
			switch(mcuid){
				case MCU_LANE0: MCU_SYNC_LANE0 = 1;break;
				case MCU_LANE1: MCU_SYNC_LANE1 = 1;break;
				case MCU_LANE2: MCU_SYNC_LANE2 = 1;break;
				case MCU_LANE3: MCU_SYNC_LANE3 = 1;break;
			}

			//reg_TXIMPCAL_EN = 1;

			short_delay();
			// re-check and wait for lower number lanes
			// then start cal
			// release flag
			if(mcu_en0) {
				if(mcuid==MCU_LANE0) {
					while((reg_MCU_DEBUGA_LANE_7_0=0x23)&&(reg_MCU_DEBUG_CMN_0_7_0&0x1)==0);
					tximp_cal();
					TXIMP_CAL_DONE_LANE0 = 1;
					MCU_SYNC_LANE0 = 0;
				}
			}
			if(mcu_en1) {
				if(mcuid==MCU_LANE1) {
					while((reg_MCU_DEBUGA_LANE_7_0=0x24)&&((reg_MCU_DEBUG_CMN_0_7_0>>1)&0x1)==0);
					tximp_cal();
					TXIMP_CAL_DONE_LANE1 = 1;
					MCU_SYNC_LANE1 = 0;
				}
			}
			if(mcu_en2) {
				if(mcuid==MCU_LANE2) {
					while((reg_MCU_DEBUGA_LANE_7_0=0x25)&&((reg_MCU_DEBUG_CMN_0_7_0>>2)&0x1)==0);
					tximp_cal();
					TXIMP_CAL_DONE_LANE2 = 1;
					MCU_SYNC_LANE2 = 0;
				}
			}
			if(mcu_en3) {
				if(mcuid==MCU_LANE3) {
					while((reg_MCU_DEBUGA_LANE_7_0=0x26)&&((reg_MCU_DEBUG_CMN_0_7_0>>3)&0x1)==0);
					tximp_cal();
					TXIMP_CAL_DONE_LANE3 = 1;
					MCU_SYNC_LANE3 = 0;
				}
			}

/*			if((TXIMP_CAL_DONE_LANE0 || !mcu_en0) && (TXIMP_CAL_DONE_LANE1 || !mcu_en1) &&
			   (TXIMP_CAL_DONE_LANE2 || !mcu_en2) && (TXIMP_CAL_DONE_LANE3 || !mcu_en3))
				//reg_TXIMPCAL_EN = 0;
*/
		    while( ( (!TXIMP_CAL_DONE_LANE0) && (mcu_en0) ) ||
			   ( (!TXIMP_CAL_DONE_LANE1) && (mcu_en1) ) ||
			   ( (!TXIMP_CAL_DONE_LANE2) && (mcu_en2) ) ||
			   ( (!TXIMP_CAL_DONE_LANE3) && (mcu_en3) ) )  ;
		    
		}
	}

skip_out:

	if(mcuid != MCU_CMN) {
		PHY_STATUS = ST_CAL;

		switch(mcuid) {
		case MCU_LANE0: CAL_DONE_LANE0 = 1;	break;
		case MCU_LANE1: CAL_DONE_LANE1 = 1;	break;
		case MCU_LANE2: CAL_DONE_LANE2 = 1;	break;
		case MCU_LANE3: CAL_DONE_LANE3 = 1;	break;
		}

		Cal_Cont();
	}
	else {
	        reg_MCU_DEBUG_CMN_0_7_0 = 0;
		while((reg_MCU_DEBUGA_LANE_7_0=0x28)&&1) {
			if((mcu_en0? CAL_DONE_LANE0:1) && (mcu_en1? CAL_DONE_LANE1:1) && (mcu_en2? CAL_DONE_LANE2:1) && (mcu_en3? CAL_DONE_LANE3:1)) break;

			if(!MCU_SYNC_LANE0)
				reg_MCU_DEBUG_CMN_0_7_0 &= ~1;
			if(!MCU_SYNC_LANE1)
				reg_MCU_DEBUG_CMN_0_7_0 &= ~2;
			if(!MCU_SYNC_LANE2)
				reg_MCU_DEBUG_CMN_0_7_0 &= ~4;
			if(!MCU_SYNC_LANE3)
				reg_MCU_DEBUG_CMN_0_7_0 &= ~8;

			if(reg_MCU_DEBUG_CMN_0_7_0==0){
				if(MCU_SYNC_LANE0)
					reg_MCU_DEBUG_CMN_0_7_0 = 1;
				else if(MCU_SYNC_LANE1)
					reg_MCU_DEBUG_CMN_0_7_0 = 2;
				else if(MCU_SYNC_LANE2)
					reg_MCU_DEBUG_CMN_0_7_0 = 4;
				else if(MCU_SYNC_LANE3)
					reg_MCU_DEBUG_CMN_0_7_0 = 8;
			}
		}
		//wait_for(((mcu_en0? CAL_DONE_LANE0:1) && (mcu_en1? CAL_DONE_LANE1:1) && (mcu_en2? CAL_DONE_LANE2:1) && (mcu_en3? CAL_DONE_LANE3:1)),0);

		cmx_CAL_DONE = 1;
		cmx_CAL_START = 0;
	}
}

void Calibration_rx(void) BANKING_CTRL {

	if( mcuid == MCU_CMN ) return;

	PHY_STATUS = ST_RX_CAL;
	reg_MCU_DEBUG0_LANE_7_0 = 0x31;
	lnx_RX_CAL_DONE_LANE = 0;

	reg_PIN_PLL_READY_RX_LANE = 0;

	turn_off_rx_cont_cal();

	reg_RX_INIT_DONE_LANE = 0;
	reg_RX_EQ_EOM_CLK_EN_LANE = 1; //reg_EOM_CLK_EN_LANE = 1;

	reg_RX_RESET_ANA_LANE = 1;
	reg_DTL_RST_LANE = 1;
	reg_DTL_RST_SYNC_LANE = 1;
	pll_clk_rx_ready_0();
	delay(Tus);

	//reg_PLL_RS_RESET_ANA_LANE = 1;
	pll_reset_rx_1();
	LoadSpeedtbl_rx();
	PHY_STATUS = ST_RX_CAL;
	//reg_PLL_RS_RESET_ANA_LANE = 0; //10usec pulse
	pll_reset_rx_0();

	if( EXT_FORCE_CAL_DONE ) {
		all_cal_ext_rx();
		goto skip_out_rx;
	}

	// --- RX CAL start

	rx_pll_cal();

	pll_clk_rx_ready_1();
	rx_plldcc_cal();

	delay(T_10us);
	reg_RX_RESET_ANA_LANE = 0;

	rx_cal_init();

	//vdd_cal();
	cmx_VDD_CAL_EXT_EN = 1; // TODO - temp turn off vdd_cal during spd chg
	if(cmx_VDD_CAL_EXT_EN == 0)
	{
  			trx_ivref_vddr_rx_1st();
//replaced by 5nm unified vdd cal
/*
		reg_VDDACAL_COMP_EN = 1;  // enable CMN comparator

		// issue request
		switch(mcuid){
			case MCU_LANE0: MCU_SYNC_LANE0 = 1;break;
			case MCU_LANE1: MCU_SYNC_LANE1 = 1;break;
			case MCU_LANE2: MCU_SYNC_LANE2 = 1;break;
			case MCU_LANE3: MCU_SYNC_LANE3 = 1;break;
		}
		short_delay();
		// re-check and wait for lower number lanes
		// then start cal
		// release flag
		if(mcu_en0) {
			if(mcuid==MCU_LANE0) {
				while((reg_MCU_DEBUGA_LANE_7_0=0x29)&&(reg_MCU_DEBUG_CMN_0_7_0&0x1)==0);
				vdd_cal(8, RX_REGULATORS);
				MCU_SYNC_LANE0 = 0;
				VDD_CAL_DONE_LANE0 = 1;
			}
		}
		if(mcu_en1) {
			if(mcuid==MCU_LANE1) {
				while((reg_MCU_DEBUGA_LANE_7_0=0x2A)&&((reg_MCU_DEBUG_CMN_0_7_0>>1)&0x1)==0);
				vdd_cal(8, RX_REGULATORS);
				MCU_SYNC_LANE1 = 0;
				VDD_CAL_DONE_LANE1 = 1;
			}
		}
		if(mcu_en2) {
			if(mcuid==MCU_LANE2) {
				while((reg_MCU_DEBUGA_LANE_7_0=0x2B)&&((reg_MCU_DEBUG_CMN_0_7_0>>2)&0x1)==0);
				vdd_cal(8, RX_REGULATORS);
				MCU_SYNC_LANE2 = 0;
				VDD_CAL_DONE_LANE2 = 1;
			}
		}
		if(mcu_en3) {
			if(mcuid==MCU_LANE3) {
				while((reg_MCU_DEBUGA_LANE_7_0=0x2C)&&((reg_MCU_DEBUG_CMN_0_7_0>>3)&0x1)==0);
				vdd_cal(8, RX_REGULATORS);
				MCU_SYNC_LANE3 = 0;
				VDD_CAL_DONE_LANE3 = 1;
			}
		}
		if ((VDD_CAL_DONE_LANE0|!mcu_en0) && (VDD_CAL_DONE_LANE1|!mcu_en1) &&
		    (VDD_CAL_DONE_LANE2|!mcu_en2) && (VDD_CAL_DONE_LANE3|!mcu_en3)) {
			reg_VDDACAL_COMP_EN = 0;
			VDD_CAL_DONE_LANE0 = 0;
			VDD_CAL_DONE_LANE1 = 0;
			VDD_CAL_DONE_LANE2 = 0;
			VDD_CAL_DONE_LANE3 = 0;
		}
		while((reg_MCU_DEBUGA_LANE_7_0=0x2D)&&reg_VDDACAL_COMP_EN);
*/
	}

	dll_cal();

	// vdd_cal (RX_CLKTOP_VDD_DLL regulator)
	if(cmx_VDD_CAL_EXT_EN == 0)
	{
			rx_clktop_vdd_dll_cal();
//replaced by unified code
/*
		reg_VDDACAL_COMP_EN = 1;  // enable CMN comparator

		// issue request
		switch(mcuid){
			case MCU_LANE0: MCU_SYNC_LANE0 = 1;break;
			case MCU_LANE1: MCU_SYNC_LANE1 = 1;break;
			case MCU_LANE2: MCU_SYNC_LANE2 = 1;break;
			case MCU_LANE3: MCU_SYNC_LANE3 = 1;break;
		}
		short_delay();
		// re-check and wait for lower number lanes
		// then start cal
		// release flag
		if(mcu_en0) {
			if(mcuid==MCU_LANE0) {
				while((reg_MCU_DEBUGA_LANE_7_0=0x2E)&&(reg_MCU_DEBUG_CMN_0_7_0&0x1)==0);
				vdd_cal(8, RX_CLKTOP_VDD_DLL);
				MCU_SYNC_LANE0 = 0;
				VDD_CAL_DONE_LANE0 = 1;
			}
		}
		if(mcu_en1) {
			if(mcuid==MCU_LANE1) {
				while((reg_MCU_DEBUGA_LANE_7_0=0x2F)&&((reg_MCU_DEBUG_CMN_0_7_0>>1)&0x1)==0);
				vdd_cal(8, RX_CLKTOP_VDD_DLL);
				MCU_SYNC_LANE1 = 0;
				VDD_CAL_DONE_LANE1 = 1;
			}
		}
		if(mcu_en2) {
			if(mcuid==MCU_LANE2) {
				while((reg_MCU_DEBUGA_LANE_7_0=0x30)&&((reg_MCU_DEBUG_CMN_0_7_0>>2)&0x1)==0);
				vdd_cal(8, RX_CLKTOP_VDD_DLL);
				MCU_SYNC_LANE2 = 0;
				VDD_CAL_DONE_LANE2 = 1;
			}
		}
		if(mcu_en3) {
			if(mcuid==MCU_LANE3) {
				while((reg_MCU_DEBUGA_LANE_7_0=0x31)&&((reg_MCU_DEBUG_CMN_0_7_0>>3)&0x1)==0);
				vdd_cal(8, RX_CLKTOP_VDD_DLL);
				MCU_SYNC_LANE3 = 0;
				VDD_CAL_DONE_LANE3 = 1;
			}
		}
		if ((VDD_CAL_DONE_LANE0|!mcu_en0) && (VDD_CAL_DONE_LANE1|!mcu_en1) &&
		    (VDD_CAL_DONE_LANE2|!mcu_en2) && (VDD_CAL_DONE_LANE3|!mcu_en3)) {
			reg_VDDACAL_COMP_EN = 0;
			VDD_CAL_DONE_LANE0 = 0;
			VDD_CAL_DONE_LANE1 = 0;
			VDD_CAL_DONE_LANE2 = 0;
			VDD_CAL_DONE_LANE3 = 0;
		}
		while((reg_MCU_DEBUGA_LANE_7_0=0x32)&&reg_VDDACAL_COMP_EN);
*/
	}

	dll_cal();
	rx_clk_cal();

	// vdd_cal (RX_CLKTOP_VDD_A90, RX_CLKTOP_VDD_DIV2, RX_CLKTOP_VDD_SKEW, RX_ADC_VDD_THCLK, RX_ADC_VDD_THDRV regulators)
	if(cmx_VDD_CAL_EXT_EN == 0)
	{
  			trx_ivref_vddr_rx_1st();
//replaced by 5nm unified vdd cal
/*
		reg_VDDACAL_COMP_EN = 1;  // enable CMN comparator

		// issue request
		switch(mcuid){
			case MCU_LANE0: MCU_SYNC_LANE0 = 1;break;
			case MCU_LANE1: MCU_SYNC_LANE1 = 1;break;
			case MCU_LANE2: MCU_SYNC_LANE2 = 1;break;
			case MCU_LANE3: MCU_SYNC_LANE3 = 1;break;
		}
		short_delay();
		// re-check and wait for lower number lanes
		// then start cal
		// release flag
		if(mcu_en0) {
			if(mcuid==MCU_LANE0) {
				while((reg_MCU_DEBUGA_LANE_7_0=0x33)&&(reg_MCU_DEBUG_CMN_0_7_0&0x1)==0);
				vdd_cal(8, RX_IVREF_REGS);
				MCU_SYNC_LANE0 = 0;
				VDD_CAL_DONE_LANE0 = 1;
			}
		}
		if(mcu_en1) {
			if(mcuid==MCU_LANE1) {
				while((reg_MCU_DEBUGA_LANE_7_0=0x34)&&((reg_MCU_DEBUG_CMN_0_7_0>>1)&0x1)==0);
				vdd_cal(8, RX_IVREF_REGS);
				MCU_SYNC_LANE1 = 0;
				VDD_CAL_DONE_LANE1 = 1;
			}
		}
		if(mcu_en2) {
			if(mcuid==MCU_LANE2) {
				while((reg_MCU_DEBUGA_LANE_7_0=0x35)&&((reg_MCU_DEBUG_CMN_0_7_0>>2)&0x1)==0);
				vdd_cal(8, RX_IVREF_REGS);
				MCU_SYNC_LANE2 = 0;
				VDD_CAL_DONE_LANE2 = 1;
			}
		}
		if(mcu_en3) {
			if(mcuid==MCU_LANE3) {
				while((reg_MCU_DEBUGA_LANE_7_0=0x36)&&((reg_MCU_DEBUG_CMN_0_7_0>>3)&0x1)==0);
				vdd_cal(8, RX_IVREF_REGS);
				MCU_SYNC_LANE3 = 0;
				VDD_CAL_DONE_LANE3 = 1;
			}
		}
		if ((VDD_CAL_DONE_LANE0|!mcu_en0) && (VDD_CAL_DONE_LANE1|!mcu_en1) &&
		    (VDD_CAL_DONE_LANE2|!mcu_en2) && (VDD_CAL_DONE_LANE3|!mcu_en3)) {
			reg_VDDACAL_COMP_EN = 0;
			VDD_CAL_DONE_LANE0 = 0;
			VDD_CAL_DONE_LANE1 = 0;
			VDD_CAL_DONE_LANE2 = 0;
			VDD_CAL_DONE_LANE3 = 0;
		}
		while((reg_MCU_DEBUGA_LANE_7_0=0x37)&&reg_VDDACAL_COMP_EN);
*/
	}
	
	reg_RX_ADC_RESET_LANE = 1;
	delay(T_p25us);
	reg_RX_ADC_RESET_LANE = 0;

	reg_RX_CLK_EN_LANE = 1;
	reg_DTL_RST_LANE = 0;

	adc_cal();

skip_out_rx:

	Rx_Cal_Cont();

	lnx_RX_CAL_DONE_LANE = 1;
}

void Calibration_tx(void) BANKING_CTRL {

	if( mcuid == MCU_CMN ) return;

	PHY_STATUS = ST_TX_CAL;
	reg_MCU_DEBUG0_LANE_7_0 = 0x32;
	lnx_TX_CAL_DONE_LANE = 0;

	reg_PIN_PLL_READY_TX_LANE = 0;

	turn_off_tx_cont_cal();

	reg_TX_RESET_ANA_LANE = 1;
	pll_clk_tx_ready_0();
	delay(Tus);
	//reg_PLL_TS_RESET_ANA_LANE = 1;
	pll_reset_tx_1();
	LoadSpeedtbl_tx();
	PHY_STATUS = ST_TX_CAL;
	//reg_PLL_TS_RESET_ANA_LANE = 0; // 10usec pulse
	pll_reset_tx_0();

	if( EXT_FORCE_CAL_DONE ) {
		all_cal_ext_tx();
		goto skip_out_tx;
	}

	// --- TX CAL start
	tx_pll_cal();
	pll_clk_tx_ready_1();
	tx_plldcc_cal();

	delay(T_10us);
	reg_TX_RESET_ANA_LANE = 0;

	// vdd_cal (TX regulators)
	cmx_VDD_CAL_EXT_EN = 1; // TODO - temp turn off vdd_cal during spd chg
	if(cmx_VDD_CAL_EXT_EN == 0)
	{
  			trx_ivref_vddr_tx();
//replaced by 5nm unified vdd cal
/*
		reg_VDDACAL_COMP_EN = 1;  // enable CMN comparator

		// issue request
		switch(mcuid){
			case MCU_LANE0: MCU_SYNC_LANE0 = 1;break;
			case MCU_LANE1: MCU_SYNC_LANE1 = 1;break;
			case MCU_LANE2: MCU_SYNC_LANE2 = 1;break;
			case MCU_LANE3: MCU_SYNC_LANE3 = 1;break;
		}
		short_delay();
		// re-check and wait for lower number lanes
		// then start cal
		// release flag
		if(mcu_en0) {
			if(mcuid==MCU_LANE0) {
				while((reg_MCU_DEBUGA_LANE_7_0=0x38)&&(reg_MCU_DEBUG_CMN_0_7_0&0x1)==0);
				vdd_cal(5, TX_REGULATORS);
				MCU_SYNC_LANE0 = 0;
				VDD_CAL_DONE_LANE0 = 1;
			}
		}
		if(mcu_en1) {
			if(mcuid==MCU_LANE1) {
				while((reg_MCU_DEBUGA_LANE_7_0=0x39)&&((reg_MCU_DEBUG_CMN_0_7_0>>1)&0x1)==0);
				vdd_cal(5, TX_REGULATORS);
				MCU_SYNC_LANE1 = 0;
				VDD_CAL_DONE_LANE1 = 1;
			}
		}
		if(mcu_en2) {
			if(mcuid==MCU_LANE2) {
				while((reg_MCU_DEBUGA_LANE_7_0=0x3A)&&((reg_MCU_DEBUG_CMN_0_7_0>>2)&0x1)==0);
				vdd_cal(5, TX_REGULATORS);
				MCU_SYNC_LANE2 = 0;
				VDD_CAL_DONE_LANE2 = 1;
			}
		}
		if(mcu_en3) {
			if(mcuid==MCU_LANE3) {
				while((reg_MCU_DEBUGA_LANE_7_0=0x3B)&&((reg_MCU_DEBUG_CMN_0_7_0>>3)&0x1)==0);
				vdd_cal(5, TX_REGULATORS);
				MCU_SYNC_LANE3 = 0;
				VDD_CAL_DONE_LANE3 = 1;
			}
		}
		if ((VDD_CAL_DONE_LANE0|!mcu_en0) && (VDD_CAL_DONE_LANE1|!mcu_en1) &&
		    (VDD_CAL_DONE_LANE2|!mcu_en2) && (VDD_CAL_DONE_LANE3|!mcu_en3)) {
			reg_VDDACAL_COMP_EN = 0;
			VDD_CAL_DONE_LANE0 = 0;
			VDD_CAL_DONE_LANE1 = 0;
			VDD_CAL_DONE_LANE2 = 0;
			VDD_CAL_DONE_LANE3 = 0;
		}
		while((reg_MCU_DEBUGA_LANE_7_0=0x3C)&&reg_VDDACAL_COMP_EN);
*/
	}

    txdcc_cal(); // Align90/DCC calibrations

skip_out_tx:

	Tx_Cal_Cont();

	lnx_TX_CAL_DONE_LANE = 1;
}

void mcu_align_0(void) BANKING_CTRL {
#ifndef _112G_ADC
	do {
	if(mcuid==MCU_LANE0)
		MCU_SYNC_LANE0 = 0;
	if(mcuid==MCU_LANE1)
		MCU_SYNC_LANE1 = 0;
	if(mcuid==MCU_LANE2)
		MCU_SYNC_LANE2 = 0;
	if(mcuid==MCU_LANE3)
		MCU_SYNC_LANE3 = 0;
	}while((reg_MCU_DEBUGA_LANE_7_0=0x3D)&&MCU_SYNC_LANE0!=0||MCU_SYNC_LANE1!=0||MCU_SYNC_LANE2!=0||MCU_SYNC_LANE3!=0);
	/*if( mcuid != MCU_CMN ) {
		PHY_CHECK_LANE = 0;
		while((reg_MCU_DEBUGA_LANE_7_0=0x3E)&&(PHY_CHECK_LANE0_READ|PHY_CHECK_LANE1_READ|PHY_CHECK_LANE2_READ|PHY_CHECK_LANE3_READ));
	}*/
#endif
}

void all_cal_ext_rx(void) BANKING_CTRL {

	pll_clk_rx_ready_1();
	check_pll_rs_clk_ready();
	delay(T_10us);

	reg_RX_RESET_ANA_LANE = 0;

//needed even during simulation speed up
	reg_RX_ADC_RESET_LANE = 1;
	delay(T_p25us);
	reg_RX_ADC_RESET_LANE = 0;
//------------------------needed even during simulation speed up
}

void all_cal_ext_tx(void) BANKING_CTRL {

	pll_clk_tx_ready_1();
	check_pll_ts_clk_ready();
	delay(T_10us);

	reg_TX_RESET_ANA_LANE = 0;
}

void all_cal_ext(void) BANKING_CTRL {

	LoadSpeedtbl();
	PHY_STATUS = ST_CAL;

	//reg_PLL_RS_RESET_ANA_LANE = 0;
	//reg_PLL_TS_RESET_ANA_LANE = 0;
	pll_reset_all_0();
	reg_ANA_TSEN_ADC_RESET = 0;

	pll_clk_ready_all_1();
	check_pll_clk_ready();
	delay(T_10us);

	reg_TX_RESET_ANA_LANE = 0;
	reg_RX_RESET_ANA_LANE = 0;
//needed even during simulation speed up
	reg_RX_ADC_RESET_LANE = 1;
	delay(T_p25us);
	reg_RX_ADC_RESET_LANE = 0;
//------------------------needed even during simulation speed up
}

void clear_spd_chg_isr(void) BANKING_CTRL {

	if (reg_INT_PHY_GEN_TX_CHG_ISR_LANE) {
		reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 1;
		reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 0;
	}

	if (reg_INT_PHY_GEN_RX_CHG_ISR_LANE) {
		reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 1;
		reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 0;
	}
}

void rx_cal_init(void) BANKING_CTRL {

	//enable RX blocks before VDDR calibration
	reg_ANA_PU_RX_LANE = 1; // RX_PU_RX_LANE
	reg_RX_PU_PI_LANE = 1;
	reg_RX_PU_EOM_PI_LANE = 1;

	//Enable RXCLK_4X and RXCLK_NT and set the divider properly before running the RX_CLKTOP_VDDL
	//reg_RX_RXCLK4X_EN_LANE = 1;
	//reg_RX_RXCLKNT_EN_LANE = 1;
	//enable comparator
	reg_RX_PU_DLL_CMP_LANE = 1;
	reg_RX_PU_A90_CMP_LANE = 1;
	delay(Tus); //Wait 1us
	reg_ANA_PU_RX_DLY_LANE = 1; // RX will only power up after the DLY PU signal is set
//following two should not be needed in 5nm (from 5nm rx pseudo code)
//	reg_VDDACAL_COMP_EN = 1;
//	reg_SELLV_CMP_V0P9V_2_0 = 4;

	//Ahmed added to make sure that initial settings are loaded for DLL/A90/Skew
	//code received from digital team

	delay(T_3us); //Wait 3us for all regulators to power up

	//toggle RX_CK_CMPCAL_A90
	reg_RX_CLK_COMN_EXT_EN_LANE = 1;
	reg_RX_CLK_AUTO_ZERO_CLK_EXT_LANE = 1; reg_RX_CLK_AUTO_ZERO_CLK_EXT_LANE = 0; //reg_rx_clk_auto_zero_clk_ext_lane  1->0
	reg_RX_CLK_COMN_EXT_EN_LANE = 0;

	//toggle RX_CK_CMPCAL_DLL
	reg_DLL_COMN_EXT_EN_LANE = 1;
	reg_DLL_AUTO_ZERO_CLK_EXT_LANE = 1; reg_DLL_AUTO_ZERO_CLK_EXT_LANE = 0; //reg_dll_auto_zero_clk_ext_lane 1->0
	reg_DLL_COMN_EXT_EN_LANE = 0;  //pseudo code doc has typo as "reg_DLL_COMN_EXT_EN_LANE = 1"

//following code are new to 5nm 112G ADC//
	//For AGC gain initial value,
	reg_RX_ADC_IF_AGC_GAIN_EXT_LANE_4_0 = 0x10; 
	//Note this can be set according to temperature read out, default is mid value
	reg_RX_ADC_IF_AGC_LOAD_LANE = 1;
	reg_RX_ADC_IF_AGC_LOAD_LANE = 0;
	reg_RX_ADC_IF_AGC_FORCE_LANE = 1;
	reg_RX_ADC_IF_AGC_CLK_EXT_LANE = 1;
	reg_RX_ADC_IF_AGC_CLK_EXT_LANE = 0;
	reg_RX_ADC_IF_AGC_FORCE_LANE = 0;

	// For skew calibration initial value,
	reg_RX_SKEW_CAL_SYNCLK_TH_FORCE_LANE = 1;
	reg_RX_SKEW_CAL_SYNCLK_TH_FORCE_VALUE_LANE = 1;
	reg_RX_SKEW_CAL_SYNCLK_TH_FORCE_VALUE_LANE = 0;
	reg_RX_SKEW_CAL_SYNCLK_TH_FORCE_LANE = 0;
//--END--//

	//Ahmed added reset to make sure that ADC and EOM CLK
	//Reset ADC and synchronize EOM CLK
	reg_RX_ADC_RESET_LANE = 1; //this step may be optional since captured in power up timing sequence
	delay(T_3us); //this step may be optional since captured in power up timing sequence
	reg_RX_ADC_RESET_LANE = 0; //this step may be optional since captured in power up timing sequence
	delay(T_2us); //starting here NOT optional
	reg_RX_PU_EOM_DLY_LANE = 1; //Setting the RX_PU_EOM_DLY synchronizes and enables EOM path
	delay(T_3us); //Wait 3us for all clocking and regulation to settle
}

