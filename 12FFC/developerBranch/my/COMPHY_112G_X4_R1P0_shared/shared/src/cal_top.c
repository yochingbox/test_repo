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

#ifdef USE_BANKING
#pragma codeseg BANK2
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

void Calibration(void) BANKING_CTRL {

	uint8_t rate, genno, save_FBCK_SEL, save_FBCK_SEL_RING;

	cmx_CAL_DONE = 0;

	gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_4_0;
	gen_tx = min_ram(gen_tx, cmx_PHY_GEN_MAX_4_0);
	gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_4_0;
	gen_rx = min_ram(gen_rx, cmx_PHY_GEN_MAX_4_0);

#if 1
//#ifdef NO_REDUCE_CODE
	if( mcuid != MCU_CMN ){
		if( force_exit_cal ) {
			// set all to *cal_ext_en=1
			CONTROL_CONFIG1.VAL = 0x0ffffffc;
			all_cal_ext();
			goto skip_out;
		}
	}
#endif

	if( mcuid != MCU_CMN ) {
		reg_RX_INIT_DONE_LANE = 0; //??
		reg_ANA_TX_IDLE_FORCE_LANE = 1;
		//reg_ANA_TX_IDLE_LANE = 1;
		reg_ANA_TX_IDLE_LANE = 0;
		reg_EOM_CLK_EN_LANE = 1;
	}
	// --- CAL start

	/*if(mcuid==MCU_LANE0) {
	//if( mcuid==MCU_CMN ) {
		//cmx_CAL_START=0;

		//enable TSEN
		reg_TSEN_ADC_CAL_1_0 = 0x2; //Automatic self-offset-cal enforced, TSENE_ADC in normal mode.
		reg_TSEN_ADC_RD_REQ = 1;

		//reg_ANA_TSEN_ADC_RESET = 1;
		//delay_ram(Tus);
		reg_ANA_TSEN_ADC_RESET = 0;
		reg_ANA_TSEN_ADC_EN = 1;
		//reg_ANA_TSEN_ADC_RESET = 0;
		reg_ANA_TSEN_ADC_START = 1;
		reg_TSEN_ADC_RD_REQ = 1;
		//if(reg_MCU_COMMAND0_LANE_31_0_b0==0) { //to do:find the register for this condition. 
			while(reg_TSEN_ADC_RDY==0);
		//}

			read_tsen_ram();

			//proc_cal();
	}*/

		// --- PLL and GEN table --
	if( mcuid != MCU_CMN ) {
		//proc_cal();
		pll_clk_ready_all_0();
		//reg_MCU_DEBUG0_LANE_7_0 = 0x10;
		//reg_MCU_DEBUG6_LANE_7_0 = rate + 0x70;
		rate = 0; //to do only one rate for 112G
		load_init_temp_table(rate);

		//if(phy_mode==SERDES) {
			gen_pll_rate = speedtable[gen_tx][spdoft_pll_rate_sel_tx];
		//}

		reg_PIN_PLL_READY_RX_LANE = 0;
		reg_PIN_PLL_READY_TX_LANE = 0;
		DTL_DTX_DFE_clkoff_reset_1();
		
		//gen_pll_rate = 0;
		loadspeedtbl_pll(gen_pll_rate);
		
		reg_RESET_ANA_LANE = 0;
		if( cmx_PLL_CAL_EXT_EN == 0)
		{
			pll_cal();
			if(cmx_PLLAMP_CAL_CONT_EN == 1)
			{
				reg_PLLAMPCAL_EN_LANE = 0;
				reg_PLLCAL_EN_LANE = 0;
				reg_PLL_AMP_TOP_CONT_START_LANE = 1;
			}
			if( cmx_PLL_TEMP_CAL_CONT_EN == 1)
			{
				reg_LCPLL_TEMPC_EXT_EN_LANE = 0;
				reg_LCPLL_TEMPC_CAL_EN_LANE = 1;
			}
		}
		//reg_ANA_CMN_IMPCAL_OUT_REQ = 1;
		pll_clk_ready_1();
		if (cmx_PLLDCC_CAL_EXT_EN == 0)
		{
			plldcc_cal_ram();
			if(cmx_PLLDCC_CAL_CONT_EN)
			{
				reg_LCPLL_DCC_EN_LANE = 1;
				reg_LCPLL_DCC_CAL_EN_LANE = 1;
				reg_PLL_DCC_TOP_CONT_START_LANE = 1;
			}
		}
		check_pll_clk_ready();

		//--- GEN LOOP ---
		//if(phy_mode==SERDES)  //serdes need to calibrate on own speed
		{
			loadspeedtbl_gen();
			dfe_spd_init();
		}
	}
#if 0	
	mcu_align_0();
	//to do: VDD is in master mcu
#ifndef SUPPORT_CAL_SYNC_LANE
	if( mcuid==MCU_LANE0)	{
		vdd_cal();
		PHY_CHECK_LANE = 1;
	}
	else while(!PHY_CHECK_LANE0_READ);

	if( mcu_en1) {
		if( mcuid==MCU_LANE1)	{
			vdd_cal();
			PHY_CHECK_LANE = 1;
		}
		else while(!PHY_CHECK_LANE1_READ);
	}

	if( mcu_en2) {
		if( mcuid==MCU_LANE2)	{
			vdd_cal();
			PHY_CHECK_LANE = 1;
		}
		else while(!PHY_CHECK_LANE2_READ);
	}

	if( mcu_en3) {
		if( mcuid==MCU_LANE3)	{
			vdd_cal();
			PHY_CHECK_LANE = 1;
		}
		else while(!PHY_CHECK_LANE3_READ);
	}
#else
	do {
		while ( SYNC_LINE_HOLD_READ != SYNC_IDLE ) {
			//wait for other lane
		};
		SYNC_LINE_HOLD = mcuid;
		delay_ram(Tus); //avoid double booking.
		if( SYNC_LINE_HOLD_READ != mcuid ) continue;
		else {
			vdd_cal();
			SYNC_LINE_HOLD = SYNC_IDLE;
		}
	} while (!lnx_VDD_CAL_DONE_LANE);
#endif
#endif
	if( mcuid != MCU_CMN ) {
		//rxdcc_dll_cal();
		if (cmx_TXDCC_CAL_EXT_EN == 0)
		{
			txdcc_cal_ram();

			/*if (reg_TXSPEED_DIV_LANE_2_0 == 0)
			{
				if (reg_RX_HALFRATE_EN_LANE == 1)
				{
					reg_TX_ALIGN90_CAL_BYPASS_EN_LANE = 1;
					reg_TX_DCC3_CAL_BYPASS_EN_LANE = 1;

				}
			}
			else if(reg_TXSPEED_DIV_LANE_2_0 == 1)
			{
				reg_TXDCC_PDIV_EN_LANE = 1;
			}
			else
			{
				reg_TX_DCC2_CAL_BYPASS_EN_LANE = 1;
				reg_TXDCC_PDIV_EN_LANE = 1;
			}
			reg_TX_ALIGN90_DCC_TOP_CONT_START_LANE = 1;*/
		}

		if(cmx_RXDLL_CAL_EXT_EN == 0)
		{
			dll_cal_ram();
			/*reg_DLL_VDDA_CAL_CONT_EN_LANE = 1;
			reg_EOM_DLL_VDDA_CAL_CONT_EN_LANE = 1;
			reg_DLL_DCC_CAL_CONT_EN_LANE = 1;
			reg_DLL_TOP_CONT_START_LANE = 1;*/
		}

		if (cmx_RXDCC_DATA_CAL_EXT_EN == 0)
		{
			rx_clk_cal_ram();
			//reg_RX_CLK_TOP_CONT_START_LANE = 1;
		}

		if(cmx_RXDCC_EOM_CAL_EXT_EN == 0)
		{
			rx_eom_cal_ram();
			//reg_RX_EOM_TOP_CONT_START_LANE = 1;
		}
		
		
		if(reg_PWRON_SEQ_LANE==0 && cmx_CAL_START==0) goto skip_out;
			
		if( cmx_SAMPLER_CAL_EXT_EN == 0)
		{
			sampler_cal();
		}

		if( cmx_SQ_CAL_EXT_EN == 0)
		{
			rx_sq_ofst_cal_ram();
			rx_sq_thresh_cal_ram();
		}

		//mcu_align_0();
		if(cmx_RXIMP_CAL_EXT_EN == 0){

			reg_RXIMPCAL_EN = 1;
			if(mcu_en0) {
				if(mcuid==MCU_LANE0) {
					rximp_cal_ram();
					cmx_MCU_SYNC_LANE0 = 1;
				}
				else
					while(!cmx_MCU_SYNC_LANE0);
			}
			if(mcu_en1) {
				if(mcuid==MCU_LANE1) {
					rximp_cal_ram();
					cmx_MCU_SYNC_LANE1 = 1;
				}
				else
					while(!cmx_MCU_SYNC_LANE1);
			}
			if(mcu_en2) {
				if(mcuid==MCU_LANE2) {
					rximp_cal_ram();
					cmx_MCU_SYNC_LANE2 = 1;
				}
				else
					while(!cmx_MCU_SYNC_LANE2);
			}
			if(mcu_en3) {
				if(mcuid==MCU_LANE3) {
					rximp_cal_ram();
					cmx_MCU_SYNC_LANE3 = 1;
				}
				else
					while(!cmx_MCU_SYNC_LANE3);
			}
			reg_RXIMPCAL_EN = 0;
		}

		if(cmx_TXIMP_CAL_EXT_EN == 0){
			mcu_align_0();
			reg_TXIMPCAL_EN = 1;
			if(mcu_en0) {
				if(mcuid==MCU_LANE0) {
					tximp_cal_ram();
					cmx_MCU_SYNC_LANE0 = 1;
				}
				else
					while(!cmx_MCU_SYNC_LANE0);
			}
			if(mcu_en1) {
				if(mcuid==MCU_LANE1) {
					tximp_cal_ram();
					cmx_MCU_SYNC_LANE1 = 1;
				}
				else
					while(!cmx_MCU_SYNC_LANE1);
			}
			if(mcu_en2) {
				if(mcuid==MCU_LANE2) {
					tximp_cal_ram();
					cmx_MCU_SYNC_LANE2 = 1;
				}
				else
					while(!cmx_MCU_SYNC_LANE2);
			}
			if(mcu_en3) {
				if(mcuid==MCU_LANE3) {
					tximp_cal_ram();
					cmx_MCU_SYNC_LANE3 = 1;
				}
				else
					while(!cmx_MCU_SYNC_LANE3);
			}
		}
		reg_TXIMPCAL_EN = 0;
	}

skip_out:

	cmx_CAL_DONE = 1;
	cmx_CAL_START=0;
	Cal_Cont();
	if (mcuid != MCU_CMN)
	{
		//reg_ANA_TX_IDLE_FORCE_LANE = 0;
		reg_ANA_TX_IDLE_LANE = 0;
		reg_ANA_TX_IDLE_FORCE_LANE = 0;
		//tsen_dat_cal = read_tsen_01(); //no used

		reg_ANA_RX_DTL_LOOP_FREEZE_LANE = 0;
		reg_DTL_FLOOP_FREEZE_LANE = 0;
    	vdd_cnt = 0;
	
		DTL_DTX_DFE_clkoff_reset_0();
		reg_PWRON_SEQ_LANE = 0;
		//delay_ram(T_10us);
		if (reg_RX_HALFRATE_EN_LANE == 0)
		{
			smplr_to_dfe_ofst_P1P3();
			config_sampler_p1to3_ext(1);
			smplr_to_dfe_ofst_P2P4();
			config_sampler_p2to4_ext(1);
		}
		else {
			smplr_to_dfe_ofst_P2P4();
			config_sampler_p2to4_ext(1);
		}

		reg_RST_FRAME_SYNC_DET_CLK_LANE = 1;
		delay_ram(Tus);
		reg_RST_FRAME_SYNC_DET_CLK_LANE = 0;
		reg_PIN_PLL_READY_RX_LANE = 1;
		reg_PIN_PLL_READY_TX_LANE = 1;
	}

	PHY_STATUS = ST_PLLREADY;

}

/**
 * \module Calibration Continuous 
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
*/
void Cal_Cont(void) BANKING_CTRL{
	uint8_t cont_cal_inx = 0;

	if (cmx_TXDCC_CAL_CONT_EN == 1)
	{
		reg_TXCAL_EN_LANE = 1;
		if (reg_TXSPEED_DIV_LANE_2_0 == 0)
		{
			if (reg_RX_HALFRATE_EN_LANE == 1)
			{
				reg_TX_ALIGN90_CAL_BYPASS_EN_LANE = 1;
				reg_TX_DCC3_CAL_BYPASS_EN_LANE = 1;

			}
		}
		else if(reg_TXSPEED_DIV_LANE_2_0 == 1)
		{
			reg_TXDCC_PDIV_EN_LANE = 1;
		}
		else
		{
			reg_TX_DCC2_CAL_BYPASS_EN_LANE = 1;
			reg_TXDCC_PDIV_EN_LANE = 1;
		}
		reg_TX_ALIGN90_DCC_TOP_CONT_START_LANE = 1;
	}

	if(cmx_RXDLL_CAL_CONT_EN == 1)
	{
		/*reg_DLL_VDDA_CAL_CONT_EN_LANE = 1;
		reg_EOM_DLL_VDDA_CAL_CONT_EN_LANE = 1;
		reg_DLL_DCC_CAL_CONT_EN_LANE = 1;*/

		dll_init_cont_ram();
		reg_DLL_TOP_CONT_START_LANE = 1;
	}

	if(cmx_RXDCC_DATA_CAL_CONT_EN == 1)
		reg_RX_CLK_TOP_CONT_START_LANE = 1;

	if(cmx_RXDCC_EOM_CAL_CONT_EN == 1)
		reg_RX_EOM_TOP_CONT_START_LANE = 1;

}

#if 1
void load_cal_data_all(void) BANKING_CTRL{

#ifdef NO_REDUCE_CODE
	if(force_exit_cal)return;
	
	LOAD_CAL_ON = 1;
	
	//if(mcuid==MCU_CMN) {
		//reg_ANA_CMN_IMPCAL_OUT_REQ = 1;
		plldcc_cal_ram();
		//pll_amp_cal_cont();
	//}
	//dll_gm_cal();
	//dll_vdda_cal(DLL_PHASE_STEP);
	//dll_eom_gm_cal();
	//dll_eom_vdda_cal(DLL_PHASE_STEP);
	//rxalign90_cal();

	//rxdcc_dll_cal();
	rx_clk_cal_ram();
	rx_eom_cal_ram();
	txdcc_cal_ram();
	//txdcc_pdiv_cal();
	//vdd_cal(); //TODO
	LOAD_CAL_ON = 0;
#endif
	
}

void mcu_align_0(void) BANKING_CTRL{
	do {
	if(mcuid==MCU_LANE0)
		cmx_MCU_SYNC_LANE0 = 0;
	if(mcuid==MCU_LANE1)
		cmx_MCU_SYNC_LANE1 = 0;
	if(mcuid==MCU_LANE2)
		cmx_MCU_SYNC_LANE2 = 0;
	if(mcuid==MCU_LANE3)
		cmx_MCU_SYNC_LANE3 = 0;
	}while(cmx_MCU_SYNC_LANE0!=0||cmx_MCU_SYNC_LANE1!=0||cmx_MCU_SYNC_LANE2!=0||cmx_MCU_SYNC_LANE3!=0);
	/*if( mcuid != MCU_CMN ) {
		PHY_CHECK_LANE = 0;
		while((PHY_CHECK_LANE0_READ|PHY_CHECK_LANE1_READ|PHY_CHECK_LANE2_READ|PHY_CHECK_LANE3_READ));
	}*/
}

void all_cal_ext(void) BANKING_CTRL{

	uint8_t rate, genno;
#if 0
	BIT	lc_pll_rate, ring_pll_rate;

	if( mcuid==MCU_CMN ) {
		
		//enable TSEN
		reg_TSEN_ADC_CAL_1_0 = 0x2; //Automatic self-offset-cal enforced, TSENE_ADC in normal mode.
		reg_ANA_TSEN_ADC_RESET = 0;
		reg_ANA_TSEN_ADC_EN = 1;
		reg_ANA_TSEN_ADC_START = 1;
		reg_TSEN_ADC_RD_REQ = 1;
		
		//reg_ANA_PROCESS_VALUE_3_0 = 0x08;
		reg_LCVCO_DAC_LSB_4_0 = 0x10;
		reg_LCVCO_DAC_MSB_2_0 = 0x02;
		//reg_LCCAP_LSB_4_0 = 0x10;
		reg_LCCAP_MSB_3_0 = 0;
		//reg_TEMPC_MUX_SEL_3_0 = 2; //gray code. bi=3
		//reg_TEMPC_MUX_HOLD_SEL_3_0 = 2;
		reg_PLL_SPEED_RING_4_0 = 0x10;
		reg_PLL_SLLP_DAC_COARSE_RING_3_0 = 0x8;
		reg_PLL_SLLP_DAC_FINE_RING_10_8 = 0x3;
		reg_PLL_SLLP_DAC_FINE_RING_7_0 = 0x84;
		reg_PLL_SLLP_DAC_RANGE_SHIFT_RING_1_0 = 0;
		/*cmx_CAL_PLL_SPEED_RING_R1_7_0 = 0x10;
		cmx_CAL_PLL_SPEED_RING_R0_7_0 = 0x10;
		cmx_CAL_PLL_SLLP_DAC_COARSE_RING_R1_7_0 = 0x8;
		cmx_CAL_PLL_SLLP_DAC_COARSE_RING_R0_7_0 = 0x8;
		cmx_CAL_SLLP_DAC_FINE_RING_R1_15_0 = 0x384;
	    cmx_CAL_SLLP_DAC_FINE_RING_R0_15_0 = 0x384;*/

		if( lc_pll_used ) {
			if(use_ring_pll) { lc_pll_rate = !tx_pll_rate; ring_pll_rate = tx_pll_rate; }				
			else {	lc_pll_rate = tx_pll_rate; ring_pll_rate = !tx_pll_rate; }			
		}	
		else {	lc_pll_rate = 1; ring_pll_rate = tx_pll_rate; }

		//if( phy_mode==SERDES ) 	
		{ 
		lc_pll_rate = gen_pll_rate; ring_pll_rate = gen_pll_rate; 
		}
		
	reg_MCU_DEBUG0_LANE_7_0 = 0x12;
	reg_MCU_DEBUG6_LANE_7_0 = tx_pll_rate;
	reg_MCU_DEBUG7_LANE_7_0 = gen_pll_rate;

		PLL_RATE_SEL = tx_pll_rate; 	
		loadspeedtbl_pll(lc_pll_rate);
		
		reg_RESET_ANA = 0;
		pll_clk_ready_1(); 

		if(ring_pll_enabled ) {
			PLL_RATE_SEL_RING = ring_pll_rate;
			loadspeedtbl_ringpll(ring_pll_rate);		
		reg_ANA_PU_PLL_RING = 1;
		delay_ram(T_p5us);
		reg_ANA_PU_PLL_DLY_RING = 1;
			delay_ram(T_p5us);
			reg_RESET_ANA_RING = 0;					
		pll_clk_ready_ring_1();
		}	
		else cmx_RING_PLL_DISABLE = 1;
	}
	//else 
	//	check_pll_clk_ready();

	//reg_LCPLL_DCC_5_0 = 0x20;
	//set_sellv_rxdll_ch(0x10);
	//set_sellv_rxeomdll_ch(0x10);
	//set_vdd_cal(0,0x08); //SELLV_TXCLK
	//set_vdd_cal(1,0x08); //SELLV_TXDATA
	//set_vdd_cal(2,0x08); //SELLV_TXPRE
	//set_vdd_cal(3,0x08); //SELLV_RXEOMCLK
	//set_vdd_cal(4,0x08); //SELLV_RXDATACLK
	//set_vdd_cal(5,0x08); //SELLV_RXSAMPLER
	//reg_RXDCC_DLLCLK_LANE_5_0 = 0x20;
	//reg_RXDCC_DATACLK_LANE_5_0 = 0x20;
	//reg_RXDCC_EOMCLK_LANE_5_0 = 0x20;
	//reg_TXDCC_CNT_LANE_5_0 = 0x20;
	//reg_IMPCAL_RX_LANE_4_0 = 0x0c;
	//DTL_DTX_DFE_clkoff_reset_0(); 
#endif

//#ifdef NO_REDUCE_CODE
	if( mcuid != MCU_CMN ) {
		pll_clk_ready_all_0();
		//reg_MCU_DEBUG0_LANE_7_0 = 0x10;
		//reg_MCU_DEBUG6_LANE_7_0 = rate + 0x70;
		rate = 0; //to do only one rate for 112G
		//load_init_temp_table(rate);

		//if(phy_mode==SERDES) {
			gen_pll_rate = speedtable[gen_tx][spdoft_pll_rate_sel_tx];
		//}

		//reg_MCU_DEBUG8_LANE_7_0 = genno;
		//reg_PIN_PLL_READY_RX_LANE = 0;
		//reg_PIN_PLL_READY_TX_LANE = 0;
		DTL_DTX_DFE_clkoff_reset_1();

		//gen_pll_rate = 8;
		loadspeedtbl_pll(gen_pll_rate);
		
		reg_RESET_ANA_LANE = 0;
		//if( cmx_PLL_CAL_EXT_EN == 0)
		{
			//pll_cal();
		}
		//reg_ANA_CMN_IMPCAL_OUT_REQ = 1;
		pll_clk_ready_1();
		//plldcc_cal();
		//check_pll_clk_ready();

		//--- GEN LOOP ---
		//if(phy_mode==SERDES)  //serdes need to calibrate on own speed
		{
			loadspeedtbl_gen();
		}
	}
//#endif

}

void phase_temp_adjustment(void) BANKING_CTRL
{
#if 0
	int32_t temp_cel;
	int16_t temp_diff, temp16;
	int16_t tsen_dat;

	tsen_dat = read_tsen_ram();

	//reg_MCU_DEBUGC_LANE_7_0 = 0x01;
	//if (reg_RX_TRAIN_COMPLETE_LANE == 0){
	if (lnx_TRAIN_DONE_LANE == 0){
		train_recording = 0;
	}
	else if (train_recording == 0){
		train_recording =  1;
		temp_cel = (((int32_t)tsen_dat*394) + 128900 + 500)/1000;
		temp_trainning = (int16_t)temp_cel;
		temp_dfe = temp_trainning;
		temp_boundary = 0;
	}

	//temp_diff = (int16_t)(reg_MCU_DEBUGC_LANE_7_0 & 0x3f);
	temp_diff = (int16_t)(lnx_TEMP_WORKAROUND_PH_LANE_7_0 & 0x3f);
	if(temp_diff == 0)
		return;
	//reg_MCU_DEBUGC_LANE_7_0 = 0x03;
	//temp_diff = (int16_t)reg_MCU_DEBUGC_LANE_7_0;
	temp_cel = (((int32_t)tsen_dat*394) + 128900 + 500)/1000;
	temp16 = (int16_t)temp_cel;
	//if ((temp16 - temp_trainning) > temp_diff)
	if((temp_trainning - temp16) > temp_diff)
	{
		temp_trainning = temp16;
		//if (temp_boundary != 0 && temp16 <= temp_boundary)
		if (temp_boundary == 0 || temp16 <= temp_boundary)
		{
			//if (reg_MCU_DEBUGC_LANE_7_0 & 0x80)
			if (lnx_TEMP_WORKAROUND_PH_LANE_7_0 & 0x80)
			{
				if(drv_PH_OS_DAT == 0)
					drv_PH_OS_DAT = 0xff;
				else if(drv_PH_OS_DAT != 0x80)
				{
					drv_PH_OS_DAT = drv_PH_OS_DAT - 1;
					temp_boundary = temp_trainning;
				}
			}
			else if(drv_PH_OS_DAT != 0x7f)
			{
				drv_PH_OS_DAT = drv_PH_OS_DAT + 1;
				temp_boundary = temp_trainning;
			}
			/*temp_trainning = temp16;

			if(drv_PH_OS_DAT == 0x80 && drv_PH_OS_DAT == 0x7f)
				temp_boundary = temp_trainning;*/
		}
	}
	//else if((temp_trainning - temp16) > temp_diff)
	else if ((temp16 - temp_trainning) > temp_diff)
	{
		temp_trainning = temp16;
		//if (temp_boundary != 0 && temp16 >= temp_boundary)
		if (temp_boundary == 0 || temp16 >= temp_boundary)
		{
			//if (reg_MCU_DEBUGC_LANE_7_0 & 0x80)
			if (lnx_TEMP_WORKAROUND_PH_LANE_7_0 & 0x80)
			{
				if(drv_PH_OS_DAT != 0x7f)
				{
					drv_PH_OS_DAT = drv_PH_OS_DAT + 1;
					temp_boundary = temp_trainning;
				}
			}
			else
			{
				if(drv_PH_OS_DAT == 0)
					drv_PH_OS_DAT = 0xff;
				else if(drv_PH_OS_DAT != 0x80)
				{
					drv_PH_OS_DAT = drv_PH_OS_DAT - 1;
					temp_boundary = temp_trainning;
				}
			}
			/*temp_trainning = temp16;
			if(drv_PH_OS_DAT == 0x80 && drv_PH_OS_DAT == 0x7f)
				temp_boundary = temp_trainning;*/
		}
	}
#endif
}

void dfe_f2_temp_workaround_switch(void) BANKING_CTRL
{
#if 0
	int16_t temp_diff;
	int32_t temp_cel;
	int16_t tsen_dat, temp16;

	phase_temp_adjustment();

	//temp_diff = (int16_t)(reg_MCU_DEBUGF_LANE_7_0 & 0x3f);
	temp_diff = (int16_t)(lnx_TEMP_WORKAROUND_DFE_LANE_7_0 & 0x3f);
	if(temp_diff != 0)
	{
		tsen_dat = read_tsen_ram();
		temp_cel = (((int32_t)tsen_dat*394) + 128900 + 500)/1000;
		temp16 = (int16_t)temp_cel;
		if ((temp16 - temp_dfe) > temp_diff || (temp_dfe - temp16) > temp_diff){
			temp_dfe = temp16;
		}else
			return;
	}

	//train.phase_offset_data = (int8_t)drv_PH_OS_DAT;
	//train.phase_offset_esm = (int8_t)drv_PH_OS_ESM;

	reg_ADAPT_DATA_EN_LANE = 1;
	reg_ADAPT_SLICER_EN_LANE = 1;
	cdr_dfe_scheme(cds_table[CDS_EN_DATAADAPT]);


#if 0
	lnx_ADAPT_DATA_EN_LANE_7_0 = 0;
	lnx_ADAPT_SLICER_EN_LANE_7_0 = 1;
	cdr_dfe_scheme_new(cds_table[CDS_EN_DATAADAPT]);
	//reg_MCU_DEBUGC_LANE_7_0 = 0xff;
#endif
#endif
}
#endif



