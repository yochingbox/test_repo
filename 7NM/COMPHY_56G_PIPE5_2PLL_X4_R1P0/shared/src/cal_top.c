/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file cal_top.c
* \purpose calibration call
* \History
*	10/13/2015 Heejeong Ryu		Initial 
*/
#include "common.h"
//#include "driver.h"

#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg CSEG
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

__code const uint8_t pcie_pll_rate_tb[] = {0x17, 0x18, 0x19}; //10G, 8G, 16G,
__code const uint8_t sas_pll_rate_tb[] = {0x15, 0x16}; //12G, 11.25G

void Calibration(void) BANKING_CTRL {
	
	uint8_t rate, maxrate;	
	int8_t inx;
	
	maxrate = 0;
	reg_MCU_DEBUG0_LANE_7_0 = 0x20;

	timeout2_start(CAL_TIMER,0);

	// --- CAL start
	if( mcuid==MCU_CMN ) {
		PHY_STATUS_CMN = ST_CAL;
		cmx_CAL_DONE = 0;
		CONTROL_CONFIG6.BT.B0 &= 0xf9; //CAL_DONE_LANE0123, RXIMP_CAL_DONE0123 = 0
		CONTROL_CONFIG6.BT.B1 &= 0xf9;
		CONTROL_CONFIG6.BT.B2 &= 0xf9;
		CONTROL_CONFIG6.BT.B3 &= 0xf9;
		
		if( cmx_EXT_FORCE_CAL_DONE ) goto skip_out;				
		
		tsen_on();
		proc_cal();
		
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
		
		if( cmx_EXT_FORCE_CAL_DONE ) {
			all_cal_ext();
			goto skip_out;
		}
		
		turn_off_tx_cont_cal();
		turn_off_rx_cont_cal();
		
		//TODO check_tsen_ready();
		
		reg_PIN_PLL_READY_RX_LANE = 0;
		reg_PIN_PLL_READY_TX_LANE = 0;
		reg_RX_INIT_DONE_LANE = 0;
		reg_ANA_TX_IDLE_FORCE_LANE = 1;
		reg_ANA_TX_IDLE_LANE = 1;
		reg_EOM_CLK_EN_LANE = 1;	
		
		while(!cmx_PROCESS_CAL_DONE);	
	
		//drv_power_off_dig_prot_en();
		//reg_RESET_ANA_LANE = 0;
		//reg_RX_RESET_ANA_LANE = 0; 
		//reg_TX_RESET_ANA_LANE = 0;
		
		if(pll_sel != RS_ON) load_init_temp_table(0); //ts
		if(pll_sel != TS_ON) load_init_temp_table(1); //rs

		#if PLL_DUMP_DEBUG 
		clear_dump_buf();
		#endif //PLL_DUMP_DEBUG 

		#if !defined _SERDES_BUILD && !defined NO_CAL_LOOP
		maxrate = get_pll_rate_index(reg_PIN_PHY_GEN_MAX_RX_RD_LANE_5_0);				
		for(inx=0; inx<=maxrate; inx++) 
		#endif	
		{
			reg_MCU_DEBUG0_LANE_7_0 = 0x30 + inx;
			pll_clk_ready_all_0();
		
			#if defined _SERDES_BUILD || defined NO_CAL_LOOP
			gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_5_0;
			gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_5_0;

			LoadSpeedtbl_rx();
			LoadSpeedtbl_tx();
			if(pll_sel != TS_ON) { rx_pll_cal(); pll_clk_rs_ready_1();}
			if(pll_sel != RS_ON) { tx_pll_cal(); pll_clk_ts_ready_1(); }
			#else //PCIE
			if(phy_mode == PCIE) rate = pcie_pll_rate_tb[inx];	
			else if(phy_mode == SAS) rate = sas_pll_rate_tb[inx];	
			if(pll_sel != TS_ON) {
				loadspeedtbl_lc_pll(rate, PIN_REF_FREF_SEL_RD, 1);
				RX_PLL_RATE_INX = inx;	
				rs_pll_cal();
				pll_clk_rs_ready_1();
			}	
			if(pll_sel != RS_ON) {
				loadspeedtbl_lc_pll(rate, PIN_REF_FREF_SEL_RD, 0);
				TX_PLL_RATE_INX = inx;	
				ts_pll_cal();
				pll_clk_ts_ready_1();
			}	
			#endif
				
			if(pll_sel != TS_ON) rx_plldcc_cal();
			if(pll_sel != RS_ON) tx_plldcc_cal();

			reg_MCU_DEBUG0_LANE_7_0 = 0x30 + 0xf;
			
		}

	   //--- GEN LOOP ---
       
	   #if !defined _SERDES_BUILD && !defined NO_CAL_LOOP
	   maxrate = reg_PIN_PHY_GEN_MAX_RX_RD_LANE_5_0;
	   for(inx=maxrate; inx>=0; inx--) 
	   #endif	
	   {
		
			reg_MCU_DEBUG0_LANE_7_0 = 0x50 + inx;
			#if !defined NO_CAL_LOOP
			if(phy_mode != SERDES) {
			gen_rx = inx; gen_tx = inx;
			LoadSpeedtbl_rx();
			LoadSpeedtbl_tx();
			//dfe_spd_init(); //moved to inside LoadSpeedtbl_rx
			}
			#endif

			if(cmx_TX_VDD_CAL_EXT_EN == 0)
			{
			reg_VDDACAL_COMP_EN = 1;  // enable CMN comparator
			
			switch(mcuid){
				case MCU_LANE0: MCU_SYNC_LANE0 = 1;break;
				case MCU_LANE1: MCU_SYNC_LANE1 = 1;break;
				case MCU_LANE2: MCU_SYNC_LANE2 = 1;break;
				case MCU_LANE3: MCU_SYNC_LANE3 = 1;break;
			}
			
			short_delay();
			if(mcu_en0) {
				if(mcuid==MCU_LANE0) {
					while((reg_MCU_DEBUG_CMN_0_7_0&0x1)==0);
					vdd_cal(TX_REGULATORS);
					MCU_SYNC_LANE0 = 0;
					VDD_CAL_DONE_LANE0 = 1;
				}
			}
			if(mcu_en1) {
				if(mcuid==MCU_LANE1) {
					while(((reg_MCU_DEBUG_CMN_0_7_0>>1)&0x1)==0);
					vdd_cal(TX_REGULATORS);
					MCU_SYNC_LANE1 = 0;
					VDD_CAL_DONE_LANE1 = 1;
				}
			}
			if(mcu_en2) {
				if(mcuid==MCU_LANE2) {
					while(((reg_MCU_DEBUG_CMN_0_7_0>>2)&0x1)==0);
					vdd_cal(TX_REGULATORS);
					MCU_SYNC_LANE2 = 0;
					VDD_CAL_DONE_LANE2 = 1;
				}
			}
			if(mcu_en3) {
				if(mcuid==MCU_LANE3) {
					while(((reg_MCU_DEBUG_CMN_0_7_0>>3)&0x1)==0);
					vdd_cal(TX_REGULATORS);
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
			while(reg_VDDACAL_COMP_EN);
			}

			txdcc_cal(); // txdcc_cal included txalign90
			
			if(cmx_RX_VDD_CAL_EXT_EN == 0)
			{
			reg_VDDACAL_COMP_EN = 1;  // enable CMN comparator
			
			switch(mcuid){
				case MCU_LANE0: MCU_SYNC_LANE0 = 1;break;
				case MCU_LANE1: MCU_SYNC_LANE1 = 1;break;
				case MCU_LANE2: MCU_SYNC_LANE2 = 1;break;
				case MCU_LANE3: MCU_SYNC_LANE3 = 1;break;
			}
			
			short_delay();
			if(mcu_en0) {
				if(mcuid==MCU_LANE0) {
					while((reg_MCU_DEBUG_CMN_0_7_0&0x1)==0);
					vdd_cal(RX_CLK_TOP_REGULATORS);
					MCU_SYNC_LANE0 = 0;
					VDD_CAL_DONE_LANE0 = 1;
				}
			}
			if(mcu_en1) {
				if(mcuid==MCU_LANE1) {
					while(((reg_MCU_DEBUG_CMN_0_7_0>>1)&0x1)==0);
					vdd_cal(RX_CLK_TOP_REGULATORS);
					MCU_SYNC_LANE1 = 0;
					VDD_CAL_DONE_LANE1 = 1;
				}
			}
			if(mcu_en2) {
				if(mcuid==MCU_LANE2) {
					while(((reg_MCU_DEBUG_CMN_0_7_0>>2)&0x1)==0);
					vdd_cal(RX_CLK_TOP_REGULATORS);
					MCU_SYNC_LANE2 = 0;
					VDD_CAL_DONE_LANE2 = 1;
				}
			}
			if(mcu_en3) {
				if(mcuid==MCU_LANE3) {
					while(((reg_MCU_DEBUG_CMN_0_7_0>>3)&0x1)==0);
					vdd_cal(RX_CLK_TOP_REGULATORS);
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
			while(reg_VDDACAL_COMP_EN);
			}

			//rx_clk
			rx_clk_cal();
			rx_eom_cal();

	
		// --
		#if !defined _SERDES_BUILD && !defined NO_CAL_LOOP
		if(inx!=maxrate) continue;
		#endif			
	  	
		if(cmx_RX_VDD_CAL_EXT_EN == 0)
		{
			reg_VDDACAL_COMP_EN = 1;  // enable CMN comparator
			
			switch(mcuid){
				case MCU_LANE0: MCU_SYNC_LANE0 = 1;break;
				case MCU_LANE1: MCU_SYNC_LANE1 = 1;break;
				case MCU_LANE2: MCU_SYNC_LANE2 = 1;break;
				case MCU_LANE3: MCU_SYNC_LANE3 = 1;break;
			}
			
			short_delay();
			if(mcu_en0) {
				if(mcuid==MCU_LANE0) {
					while((reg_MCU_DEBUG_CMN_0_7_0&0x1)==0);
					vdd_cal(VDDA_RXSMPLR);
					MCU_SYNC_LANE0 = 0;
					VDD_CAL_DONE_LANE0 = 1;
				}
			}
			if(mcu_en1) {
				if(mcuid==MCU_LANE1) {
					while(((reg_MCU_DEBUG_CMN_0_7_0>>1)&0x1)==0);
					vdd_cal(VDDA_RXSMPLR);
					MCU_SYNC_LANE1 = 0;
					VDD_CAL_DONE_LANE1 = 1;
				}
			}
			if(mcu_en2) {
				if(mcuid==MCU_LANE2) {
					while(((reg_MCU_DEBUG_CMN_0_7_0>>2)&0x1)==0);
					vdd_cal(VDDA_RXSMPLR);
					MCU_SYNC_LANE2 = 0;
					VDD_CAL_DONE_LANE2 = 1;
				}
			}
			if(mcu_en3) {
				if(mcuid==MCU_LANE3) {
					while(((reg_MCU_DEBUG_CMN_0_7_0>>3)&0x1)==0);
					vdd_cal(VDDA_RXSMPLR);
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
			while(reg_VDDACAL_COMP_EN);
		}

		// --
		sampler_cal();
		
		#ifdef _SERDES_BUILD
		if(!reg_PWRON_SEQ_LANE && !cmx_CAL_START) goto skip_out;
		#endif
		
		rx_sq_ofst_cal();
		rx_sq_thresh_cal();
		
		//lane0 -> lane1 -> lane2 -> lane3 :share common comparator
		//if(cmx_RXIMP_CAL_EXT_EN == 0)
		{
			switch(mcuid){
				case MCU_LANE0: MCU_SYNC_LANE0 = 1;break;
				case MCU_LANE1: MCU_SYNC_LANE1 = 1;break;
				case MCU_LANE2: MCU_SYNC_LANE2 = 1;break;
				case MCU_LANE3: MCU_SYNC_LANE3 = 1;break;
			}
			
			reg_RXIMPCAL_EN = 1;
			
			short_delay();
			if(mcu_en0) {
				if(mcuid==MCU_LANE0) {
					while((reg_MCU_DEBUG_CMN_0_7_0&0x1)==0);
					rximp_cal();
					RXIMP_CAL_DONE_LANE0 = 1;
					MCU_SYNC_LANE0 = 0;
				}
			}
			if(mcu_en1) {
				if(mcuid==MCU_LANE1) {
					while(((reg_MCU_DEBUG_CMN_0_7_0>>1)&0x1)==0);
					rximp_cal();
					MCU_SYNC_LANE1 = 0;
					RXIMP_CAL_DONE_LANE1 = 1;
				}
			}
			if(mcu_en2) {
				if(mcuid==MCU_LANE2) {
					while(((reg_MCU_DEBUG_CMN_0_7_0>>2)&0x1)==0);
					rximp_cal();
					MCU_SYNC_LANE2 = 0;
					RXIMP_CAL_DONE_LANE2 = 1;
				}
			}
			if(mcu_en3) {
				if(mcuid==MCU_LANE3) {
					while(((reg_MCU_DEBUG_CMN_0_7_0>>3)&0x1)==0);
					rximp_cal();
					MCU_SYNC_LANE3 = 0;
					RXIMP_CAL_DONE_LANE3 = 1;
				}
			}
			
			if(	(RXIMP_CAL_DONE_LANE0|!mcu_en0) && (RXIMP_CAL_DONE_LANE1|!mcu_en1) && (RXIMP_CAL_DONE_LANE2|!mcu_en2) && (RXIMP_CAL_DONE_LANE3|!mcu_en3)) 
				reg_RXIMPCAL_EN = 0;
					
			while(reg_RXIMPCAL_EN);
			
		}

		//Disable the calibration comparator, once calibration is complete
		reg_VDDACAL_COMP_EN = 0;
		
		// -- 
		//if(cmx_TXIMP_CAL_EXT_EN == 0)
		{
			//mcu_align_0();
			// issue request
			switch(mcuid){
				case MCU_LANE0: MCU_SYNC_LANE0 = 1;break;
				case MCU_LANE1: MCU_SYNC_LANE1 = 1;break;
				case MCU_LANE2: MCU_SYNC_LANE2 = 1;break;
				case MCU_LANE3: MCU_SYNC_LANE3 = 1;break;
			}
			
			reg_TXIMPCAL_EN = 1;
			
			short_delay();
			// re-check and wait for lower number lanes
			// then start cal
			// release flag
			if(mcu_en0) {
				if(mcuid==MCU_LANE0) {
					while((reg_MCU_DEBUG_CMN_0_7_0&0x1)==0);
					tximp_cal();
					TXIMP_CAL_DONE_LANE0 = 1;
					MCU_SYNC_LANE0 = 0;
				}
			}
			if(mcu_en1) {
				if(mcuid==MCU_LANE1) {
					while(((reg_MCU_DEBUG_CMN_0_7_0>>1)&0x1)==0);
					tximp_cal();
					TXIMP_CAL_DONE_LANE1 = 1;
					MCU_SYNC_LANE1 = 0;
				}
			}
			if(mcu_en2) {
				if(mcuid==MCU_LANE2) {
					while(((reg_MCU_DEBUG_CMN_0_7_0>>2)&0x1)==0);
					tximp_cal();
					TXIMP_CAL_DONE_LANE2 = 1;
					MCU_SYNC_LANE2 = 0;
				}
			}
			if(mcu_en3) {
				if(mcuid==MCU_LANE3) {
					while(((reg_MCU_DEBUG_CMN_0_7_0>>3)&0x1)==0);
					tximp_cal();
					TXIMP_CAL_DONE_LANE3 = 1;
					MCU_SYNC_LANE3 = 0;
				}
			}

			if(	(TXIMP_CAL_DONE_LANE0|!mcu_en0) && (TXIMP_CAL_DONE_LANE1|!mcu_en1) && (TXIMP_CAL_DONE_LANE2|!mcu_en2) && (TXIMP_CAL_DONE_LANE3|!mcu_en3)) 
					reg_TXIMPCAL_EN = 0;
			while(reg_TXIMPCAL_EN);

		}
		reg_MCU_DEBUG0_LANE_7_0 = 0x50 + 0xf;
		
	   }
	}	


skip_out:

	if(mcuid != MCU_CMN) {

		reg_ANA_TX_IDLE_LANE = 0;
		reg_ANA_TX_IDLE_FORCE_LANE = 0;
		
		#if PLL_DUMP_DEBUG 
		print_pll();
		#endif //PLL_DUMP_DEBUG 

		switch(mcuid) {
		case MCU_LANE0: CAL_DONE_LANE0 = 1;	break;
		case MCU_LANE1: CAL_DONE_LANE1 = 1;	break;
		case MCU_LANE2: CAL_DONE_LANE2 = 1;	break;
		case MCU_LANE3: CAL_DONE_LANE3 = 1;	break;
		}

		CAL_TIME_0.VAL = timer2_check(CAL_TIMER); //cal_time_lane[31:0]
		//#if _DEBUG
		//DBG_Printf("\r\ncal_time1: %ld(%08lx)", cal_time_save1,cal_time_save1);            
		//DBG_Printf("\r\ncal_time3: %ld(%08lx)", timer2_check(CAL_TIMER),timer2_check(CAL_TIMER) );  
		//#endif

		#ifdef _SERDES_BUILD		
		turn_on_tx_cont_cal();
		turn_on_rx_cont_cal();
		#endif
	}	
	else {	
		while(1) {
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

			read_tsen_cal();

		}
		cmx_CAL_DONE = 1;
		cmx_CAL_START = 0;
		
	}
}	

void Calibration_rx(void) BANKING_CTRL {

	if( mcuid == MCU_CMN ) return;

	PHY_STATUS = ST_RX_CAL;
	reg_MCU_DEBUG0_LANE_7_0 = 0x31;
	//cmx_RX_CAL_DONE = 0;
	lnx_RX_CAL_DONE_LANE = 0;

	reg_PIN_PLL_READY_RX_LANE = 0;
	
	if( cmx_EXT_FORCE_CAL_DONE ) {
		all_cal_ext_rx();
		goto skip_out_rx;	
	}

	turn_off_rx_cont_cal();
	
	//reg_ANA_TX_IDLE_FORCE_LANE = 1;
	reg_RX_INIT_DONE_LANE = 0; //??
	//reg_ANA_TX_IDLE_LANE = 1;
	//reg_ANA_TX_IDLE_LANE = 0;
	reg_EOM_CLK_EN_LANE = 1;
	
	pll_clk_rx_ready_0();
	
	//DTL_DTX_DFE_clkoff_reset_1();

	LoadSpeedtbl_rx();

	rx_pll_cal();
	
	pll_clk_rx_ready_1();
	
	rx_plldcc_cal();
	
	//
	//dfe_spd_init(); //moved inside LoadSpeedtbl_rx
	
	if(cmx_RX_VDD_CAL_EXT_EN == 0)
	{
		reg_VDDACAL_COMP_EN = 1;  // enable CMN comparator
		
		switch(mcuid){
			case MCU_LANE0: MCU_SYNC_LANE0 = 1;break;
			case MCU_LANE1: MCU_SYNC_LANE1 = 1;break;
			case MCU_LANE2: MCU_SYNC_LANE2 = 1;break;
			case MCU_LANE3: MCU_SYNC_LANE3 = 1;break;
		}
		
		short_delay();
		if(mcu_en0) {
			if(mcuid==MCU_LANE0) {
				while((reg_MCU_DEBUG_CMN_0_7_0&0x1)==0);
				vdd_cal(RX_CLK_TOP_REGULATORS);
				MCU_SYNC_LANE0 = 0;
				VDD_CAL_DONE_LANE0 = 1;
			}
		}
		if(mcu_en1) {
			if(mcuid==MCU_LANE1) {
				while(((reg_MCU_DEBUG_CMN_0_7_0>>1)&0x1)==0);
				vdd_cal(RX_CLK_TOP_REGULATORS);
				MCU_SYNC_LANE1 = 0;
				VDD_CAL_DONE_LANE1 = 1;
			}
		}
		if(mcu_en2) {
			if(mcuid==MCU_LANE2) {
				while(((reg_MCU_DEBUG_CMN_0_7_0>>2)&0x1)==0);
				vdd_cal(RX_CLK_TOP_REGULATORS);
				MCU_SYNC_LANE2 = 0;
				VDD_CAL_DONE_LANE2 = 1;
			}
		}
		if(mcu_en3) {
			if(mcuid==MCU_LANE3) {
				while(((reg_MCU_DEBUG_CMN_0_7_0>>3)&0x1)==0);
				vdd_cal(RX_CLK_TOP_REGULATORS);
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
		while(reg_VDDACAL_COMP_EN);
	}

	rx_clk_cal();
	rx_eom_cal();	

	if(cmx_RX_VDD_CAL_EXT_EN == 0)
	{
		reg_VDDACAL_COMP_EN = 1;  // enable CMN comparator
		
		switch(mcuid){
			case MCU_LANE0: MCU_SYNC_LANE0 = 1;break;
			case MCU_LANE1: MCU_SYNC_LANE1 = 1;break;
			case MCU_LANE2: MCU_SYNC_LANE2 = 1;break;
			case MCU_LANE3: MCU_SYNC_LANE3 = 1;break;
		}
		
		short_delay();
		if(mcu_en0) {
			if(mcuid==MCU_LANE0) {
				while((reg_MCU_DEBUG_CMN_0_7_0&0x1)==0);
				vdd_cal(VDDA_RXSMPLR);
				MCU_SYNC_LANE0 = 0;
				VDD_CAL_DONE_LANE0 = 1;
			}
		}
		if(mcu_en1) {
			if(mcuid==MCU_LANE1) {
				while(((reg_MCU_DEBUG_CMN_0_7_0>>1)&0x1)==0);
				vdd_cal(VDDA_RXSMPLR);
				MCU_SYNC_LANE1 = 0;
				VDD_CAL_DONE_LANE1 = 1;
			}
		}
		if(mcu_en2) {
			if(mcuid==MCU_LANE2) {
				while(((reg_MCU_DEBUG_CMN_0_7_0>>2)&0x1)==0);
				vdd_cal(VDDA_RXSMPLR);
				MCU_SYNC_LANE2 = 0;
				VDD_CAL_DONE_LANE2 = 1;
			}
		}
		if(mcu_en3) {
			if(mcuid==MCU_LANE3) {
				while(((reg_MCU_DEBUG_CMN_0_7_0>>3)&0x1)==0);
				vdd_cal(VDDA_RXSMPLR);
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
		while(reg_VDDACAL_COMP_EN);
	}

	sampler_cal();

skip_out_rx:

	lnx_RX_CAL_DONE_LANE = 1;
	
	turn_on_rx_cont_cal(); 	
	
	reg_MCU_DEBUG0_LANE_7_0 = 0x80;
	
}

void Calibration_tx(void) BANKING_CTRL {

	if( mcuid == MCU_CMN ) return;
		
	PHY_STATUS = ST_TX_CAL;
	reg_MCU_DEBUG0_LANE_7_0 = 0x32;
	lnx_TX_CAL_DONE_LANE = 0;

	if( cmx_EXT_FORCE_CAL_DONE ) {
		all_cal_ext_tx();
		goto skip_out_tx;
	}
	
	turn_off_tx_cont_cal();

	pll_clk_tx_ready_0();
	
	reg_ANA_TX_IDLE_FORCE_LANE = 1;
	reg_ANA_TX_IDLE_LANE = 1;
	
	LoadSpeedtbl_tx();		

	tx_pll_cal();
	
	pll_clk_tx_ready_1();

	tx_plldcc_cal();
	
	if(cmx_TX_VDD_CAL_EXT_EN == 0)
	{
		reg_VDDACAL_COMP_EN = 1;  // enable CMN comparator
		
		switch(mcuid){
			case MCU_LANE0: MCU_SYNC_LANE0 = 1;break;
			case MCU_LANE1: MCU_SYNC_LANE1 = 1;break;
			case MCU_LANE2: MCU_SYNC_LANE2 = 1;break;
			case MCU_LANE3: MCU_SYNC_LANE3 = 1;break;
		}
		
		short_delay();
		if(mcu_en0) {
			if(mcuid==MCU_LANE0) {
				while((reg_MCU_DEBUG_CMN_0_7_0&0x1)==0);
				vdd_cal(TX_REGULATORS);
				MCU_SYNC_LANE0 = 0;
				VDD_CAL_DONE_LANE0 = 1;
			}
		}
		if(mcu_en1) {
			if(mcuid==MCU_LANE1) {
				while(((reg_MCU_DEBUG_CMN_0_7_0>>1)&0x1)==0);
				vdd_cal(TX_REGULATORS);
				MCU_SYNC_LANE1 = 0;
				VDD_CAL_DONE_LANE1 = 1;
			}
		}
		if(mcu_en2) {
			if(mcuid==MCU_LANE2) {
				while(((reg_MCU_DEBUG_CMN_0_7_0>>2)&0x1)==0);
				vdd_cal(TX_REGULATORS);
				MCU_SYNC_LANE2 = 0;
				VDD_CAL_DONE_LANE2 = 1;
			}
		}
		if(mcu_en3) {
			if(mcuid==MCU_LANE3) {
				while(((reg_MCU_DEBUG_CMN_0_7_0>>3)&0x1)==0);
				vdd_cal(TX_REGULATORS);
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
		while(reg_VDDACAL_COMP_EN);
	}

	txdcc_cal(); // txdcc_cal included txalign90

	reg_ANA_TX_IDLE_LANE = 0;
	reg_ANA_TX_IDLE_FORCE_LANE = 0;
	//reg_EOM_CLK_EN_LANE = 1;

skip_out_tx:

	lnx_TX_CAL_DONE_LANE = 1;
	
	turn_on_tx_cont_cal(); //TODO

	PHY_STATUS = ST_PLLREADY; //TODO
	
	reg_MCU_DEBUG0_LANE_7_0 = 0x88;
}

/**
 * \module Calibration Continuous 
 *i
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
*/
void Cal_Cont(void) BANKING_CTRL {

	turn_on_tx_cont_cal();
	turn_on_rx_cont_cal();
}

void all_cal_ext_rx(void) BANKING_CTRL {

	gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_5_0;	
	LoadSpeedtbl_rx();
	PHY_STATUS = ST_RX_CAL;

	reg_PLL_RS_RESET_ANA_LANE = 0;
	pll_clk_rx_ready_1();
	
	delay(T_10us);
	check_rx_pll_lock();

}

void all_cal_ext_tx(void) BANKING_CTRL {

	gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_5_0;
	LoadSpeedtbl_tx();
	PHY_STATUS = ST_TX_CAL;

	reg_PLL_TS_RESET_ANA_LANE = 0;
	pll_clk_tx_ready_1();
	
	delay(T_10us);
	check_tx_pll_lock();

}

void all_cal_ext(void) BANKING_CTRL {

	reg_MCU_DEBUG0_LANE_7_0 = 0x31;
	
	reg_PLL_RS_RESET_ANA_LANE = 1;
	reg_PLL_TS_RESET_ANA_LANE = 1;
	reg_ANA_PLL_RS_CLK_READY_LANE = 0;
	reg_ANA_PLL_TS_CLK_READY_LANE = 0;

	gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_5_0;
	gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_5_0;
	
	LoadSpeedtbl_rx();
	LoadSpeedtbl_tx();
	
	PHY_STATUS = ST_CAL;

	reg_PLL_RS_RESET_ANA_LANE = 0;
	reg_PLL_TS_RESET_ANA_LANE = 0;
	reg_ANA_TSEN_ADC_RESET = 0;
	pll_clk_ready_all_1();
	delay(T_10us);
	check_rx_pll_lock();
	check_tx_pll_lock();

}

void rx_cal_load(void) BANKING_CTRL { 

	if( cmx_FORCE_CONT_CAL_SKIP ) return;

	if(phy_mode == SERDES) return;

		if(pll_sel != TS_ON) {

			// -- pll rs pll vdda
			reg_PLL_RS_VDDA_FBDIV_CAL_RESULT_EXT_LANE_3_0 = lnx_cal_rs_pllvdda_fbdiv[RX_PLL_RATE_INX];
			reg_PLL_RS_VDDA_INTP_CAL_RESULT_EXT_LANE_3_0 = lnx_cal_rs_pllvdda_intp[RX_PLL_RATE_INX];
			reg_PLL_RS_VDDA_PFD_CAL_RESULT_EXT_LANE_3_0 = lnx_cal_rs_pllvdda_pfd[RX_PLL_RATE_INX];
			set_rs_pllvdda_cal_bypass_en();
			reg_PLL_RS_VDDA_FBDIV_CAL_SINGLE_EN_LANE = 0; 
			reg_PLL_RS_VDDA_INTP_CAL_SINGLE_EN_LANE = 0; 
			reg_PLL_RS_VDDA_PFD_CAL_SINGLE_EN_LANE = 0; 
			reg_PLL_DCC_VDD_RS_TOP_START_LANE = 1;
			delay(T_p5us);
			while (!reg_PLL_DCC_VDD_RS_TOP_DONE_LANE);	
			reg_PLL_DCC_VDD_RS_TOP_START_LANE = 0;
			reg_PLL_RS_VDDA_FBDIV_CAL_SINGLE_EN_LANE = 1; 
			reg_PLL_RS_VDDA_INTP_CAL_SINGLE_EN_LANE = 1; 
			reg_PLL_RS_VDDA_PFD_CAL_SINGLE_EN_LANE = 1; 

	
			// -- pll rs dcc
			reg_PLL_RS_DCC_CAL_RESULT_EXT_LANE_6_0 = lnx_cal_rs_plldcc[RX_PLL_RATE_INX];	
			set_rs_plldcc_bypass_en();
			reg_PLL_RS_DCC_CAL_SINGLE_EN_LANE = 0;
			reg_PLL_DCC_VDD_RS_TOP_START_LANE = 1;
			delay(T_p5us);
			while (!reg_PLL_DCC_VDD_RS_TOP_DONE_LANE);
			reg_PLL_DCC_VDD_RS_TOP_START_LANE = 0;
			reg_PLL_RS_DCC_CAL_SINGLE_EN_LANE = 1;
		}

		// -- rxclk
		reg_RX_E2C_DCC_CAL_RESULT_EXT_LANE_6_0      = lnx_cal_rx_e2c_dcc[gen_rx];
		reg_RX_DLL_CAL_RESULT_MSB_EXT_LANE_3_0      = lnx_cal_rx_dll_msb[gen_rx];
		reg_RX_DLL_CAL_RESULT_LSB_EXT_LANE_6_0      = lnx_cal_rx_dll_lsb[gen_rx];
		reg_RX_PI_DCC_CAL_RESULT_EXT_LANE_5_0       = lnx_cal_rx_pi_dcc[gen_rx];
		reg_RX_ALIGN90_CAL_RESULT_MSB_EXT_LANE_2_0  = lnx_cal_rx_align90_msb[gen_rx];
		reg_RX_ALIGN90_CAL_RESULT_LSB_EXT_LANE_6_0  = lnx_cal_rx_align90_lsb[gen_rx];
		reg_RX_DATA_DCC_CAL_RESULT_MSB_EXT_LANE_2_0 = lnx_cal_rx_data_dcc_msb[gen_rx];
		reg_RX_DATA_DCC_CAL_RESULT_LSB_EXT_LANE_5_0 = lnx_cal_rx_data_dcc_lsb[gen_rx];
		reg_RX_EDGE_DCC_CAL_RESULT_MSB_EXT_LANE_2_0 = lnx_cal_rx_edge_dcc_msb[gen_rx];
		reg_RX_EDGE_DCC_CAL_RESULT_LSB_EXT_LANE_5_0 = lnx_cal_rx_edge_dcc_lsb[gen_rx];
		
		set_rx_clk_cal_bypass_en_0();	
		
		reg_RX_E2C_DCC_CAL_SINGLE_EN_LANE = 0;
		reg_RX_DLL_CAL_SINGLE_EN_LANE = 0;
		reg_RX_PI_DCC_CAL_SINGLE_EN_LANE = 0;
		reg_RX_ALIGN90_CAL_SINGLE_EN_LANE = 0;
		reg_RX_DATA_DCC_CAL_SINGLE_EN_LANE = 0;
		reg_RX_EDGE_DCC_CAL_SINGLE_EN_LANE = 0;
		reg_RX_CLK_TOP_START_LANE  = 1;
		delay(T_p5us);		
		while (!reg_RX_CLK_TOP_DONE_LANE);
		reg_RX_CLK_TOP_START_LANE  = 0;
		reg_RX_E2C_DCC_CAL_SINGLE_EN_LANE = 1;
		reg_RX_DLL_CAL_SINGLE_EN_LANE = 1;
		reg_RX_PI_DCC_CAL_SINGLE_EN_LANE = 1;
		reg_RX_ALIGN90_CAL_SINGLE_EN_LANE = 1;
		reg_RX_DATA_DCC_CAL_SINGLE_EN_LANE = 1;
		reg_RX_EDGE_DCC_CAL_SINGLE_EN_LANE = 1;
		
		// -- rxeom
		set_rx_eom_cal_bypass_en_0();	
		reg_RX_EOM_DLL_CAL_RESULT_MSB_EXT_LANE_3_0      = lnx_cal_rx_eom_dll_msb[gen_rx];
		reg_RX_EOM_DLL_CAL_RESULT_LSB_EXT_LANE_6_0      = lnx_cal_rx_eom_dll_lsb[gen_rx];
		reg_RX_EOM_PI_CAL_RESULT_EXT_LANE_10_8			= lnx_cal_rx_eom_pi_msb[gen_rx];
		reg_RX_EOM_PI_CAL_RESULT_EXT_LANE_7_0 			= lnx_cal_rx_eom_pi_lsb[gen_rx];
		reg_RX_EOM_PI_DCC_CAL_RESULT_EXT_LANE_5_0       = lnx_cal_rx_eom_pi_dcc[gen_rx];
		
		reg_RX_EOM_DLL_CAL_BYPASS_EN_LANE = 0;
		reg_RX_EOM_PI_CAL_BYPASS_EN_LANE = 0;
		reg_RX_EOM_PI_DCC_CAL_BYPASS_EN_LANE = 0;
		
		reg_RX_EOM_DLL_CAL_SINGLE_EN_LANE = 0;
		reg_RX_EOM_PI_DCC_CAL_SINGLE_EN_LANE = 0;
		reg_RX_EOM_PI_CAL_SINGLE_EN_LANE = 0;
		
		reg_RX_EOM_TOP_START_LANE  = 1;
		delay(T_p5us);		
		while (!reg_RX_EOM_TOP_DONE_LANE);		
		reg_RX_EOM_TOP_START_LANE  = 0;
		reg_RX_EOM_DLL_CAL_SINGLE_EN_LANE = 1;
		reg_RX_EOM_PI_DCC_CAL_SINGLE_EN_LANE = 1;
		reg_RX_EOM_PI_CAL_SINGLE_EN_LANE = 1;
	
}

void tx_cal_load(void) BANKING_CTRL { 

	if( cmx_FORCE_CONT_CAL_SKIP ) return;
	
	if(phy_mode == SERDES) return;
	
		if(pll_sel != RS_ON) {
			// -- pll rs pll vdda
			reg_PLL_TS_VDDA_FBDIV_CAL_RESULT_EXT_LANE_3_0 = lnx_cal_ts_pllvdda_fbdiv[TX_PLL_RATE_INX];
			reg_PLL_TS_VDDA_INTP_CAL_RESULT_EXT_LANE_3_0 = lnx_cal_ts_pllvdda_intp[TX_PLL_RATE_INX];
			reg_PLL_TS_VDDA_PFD_CAL_RESULT_EXT_LANE_3_0 = lnx_cal_ts_pllvdda_pfd[TX_PLL_RATE_INX];
			set_ts_pllvdda_cal_bypass_en();
			reg_PLL_TS_VDDA_FBDIV_CAL_SINGLE_EN_LANE = 0; 
			reg_PLL_TS_VDDA_INTP_CAL_SINGLE_EN_LANE = 0; 
			reg_PLL_TS_VDDA_PFD_CAL_SINGLE_EN_LANE = 0; 
			reg_PLL_DCC_VDD_TS_TOP_START_LANE = 1;
			delay(T_p5us);
			while (!reg_PLL_DCC_VDD_TS_TOP_DONE_LANE);
			reg_PLL_DCC_VDD_TS_TOP_START_LANE = 0;
			reg_PLL_TS_VDDA_FBDIV_CAL_SINGLE_EN_LANE = 1; 
			reg_PLL_TS_VDDA_INTP_CAL_SINGLE_EN_LANE = 1; 
			reg_PLL_TS_VDDA_PFD_CAL_SINGLE_EN_LANE = 1; 

			// -- pll ts dcc
			reg_PLL_TS_DCC_CAL_RESULT_EXT_LANE_6_0 = lnx_cal_ts_plldcc[TX_PLL_RATE_INX];
			set_ts_plldcc_bypass_en();
			reg_PLL_TS_DCC_CAL_SINGLE_EN_LANE = 0;
			reg_PLL_DCC_VDD_TS_TOP_START_LANE = 1;
			delay(T_p5us);
			while (!reg_PLL_DCC_VDD_TS_TOP_DONE_LANE);
			reg_PLL_DCC_VDD_TS_TOP_START_LANE = 0;
			reg_PLL_TS_DCC_CAL_SINGLE_EN_LANE = 1;

		}
	
		reg_TX_DCC1_CAL_RESULT_EXT_LANE_6_0 = lnx_cal_tx_dcc1[gen_tx];
		reg_TX_DCC2_CAL_RESULT_EXT_LANE_5_0 = lnx_cal_tx_dcc2[gen_tx];	
		reg_TX_DCC4_CAL_RESULT_MSB_EXT_LANE_2_0 = lnx_cal_tx_dcc4_msb[gen_tx];
		reg_TX_DCC4_CAL_RESULT_LSB_EXT_LANE_5_0 = lnx_cal_tx_dcc4_lsb[gen_tx];
		
		//reg_TX_ALIGN90_CAL_BYPASS_EN_LANE = 0;
		reg_TX_DCC1_CAL_BYPASS_EN_LANE = 0;
		reg_TX_DCC2_CAL_BYPASS_EN_LANE = 0;
		//reg_TX_DCC3_CAL_BYPASS_EN_LANE = 0;
		reg_TX_DCC4_CAL_BYPASS_EN_LANE = 0;
		//reg_TX_IMP_ICCP_CAL_BYPASS_EN_LANE = 0;
		//reg_TX_IMP_ICCN_CAL_BYPASS_EN_LANE = 0;

		//reg_TX_ALIGN90_CAL_SINGLE_EN_LANE = 0;
		reg_TX_DCC1_CAL_SINGLE_EN_LANE = 0;
		reg_TX_DCC2_CAL_SINGLE_EN_LANE = 0;
		//reg_TX_DCC3_CAL_SINGLE_EN_LANE = 0;
		reg_TX_DCC4_CAL_SINGLE_EN_LANE = 0;
		//reg_TX_IMP_ICCP_CAL_SINGLE_EN_LANE = 0;
		//reg_TX_IMP_ICCN_CAL_SINGLE_EN_LANE = 0;
		
		//reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
		reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 1;		
		delay(T_p5us);
		while (!reg_TX_ALIGN90_DCC_IMP_TOP_DONE_LANE);
		reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;

		//reg_TX_ALIGN90_CAL_SINGLE_EN_LANE = 1;
		reg_TX_DCC1_CAL_SINGLE_EN_LANE = 1;
		reg_TX_DCC2_CAL_SINGLE_EN_LANE = 1;
		//reg_TX_DCC3_CAL_SINGLE_EN_LANE = 1;
		reg_TX_DCC4_CAL_SINGLE_EN_LANE = 1;
		//reg_TX_IMP_ICCP_CAL_SINGLE_EN_LANE = 1;
		//reg_TX_IMP_ICCN_CAL_SINGLE_EN_LANE = 1;
}

void turn_on_tx_cont_cal(void) BANKING_CTRL {

	if( cmx_FORCE_CONT_CAL_SKIP ) return;
	
	if(pll_sel != RS_ON) {
		ts_pll_amp_cal_cont();
		
		if(cmx_PLL_TEMP_CAL_CONT_EN) {
			if(cmx_PLL_TEMP_CAL_CONT_FW_EN) {
				reg_PLL_TS_LCPLL_TEMPC_EXT_EN_LANE = 1;
				reg_PLL_TS_LCPLL_TEMPC_CAL_EN_LANE = 0;	
				ts_pllcal_first_time = 1; ts_tempc_step_state = 0;
			}	
			else {
				reg_PLL_TS_LCPLL_TEMPC_EXT_EN_LANE = 0;
				reg_PLL_TS_LCPLL_TEMPC_CAL_EN_LANE = 1;
			}
		}	
		
		ts_plldcc_cal_cont();
	}	

	txdcc_cal_cont();

	
}	

void turn_on_rx_cont_cal(void) BANKING_CTRL {

	if( cmx_FORCE_CONT_CAL_SKIP ) return;

	if(pll_sel != TS_ON) {
		rs_pll_amp_cal_cont();
		
		if(cmx_PLL_TEMP_CAL_CONT_EN) {
		    if(cmx_PLL_TEMP_CAL_CONT_FW_EN) {
			reg_PLL_RS_LCPLL_TEMPC_EXT_EN_LANE = 1;
			reg_PLL_RS_LCPLL_TEMPC_CAL_EN_LANE = 0;
			rs_pllcal_first_time = 1; rs_tempc_step_state = 0;
		    }
		    else {						
			reg_PLL_RS_LCPLL_TEMPC_EXT_EN_LANE = 0;
			reg_PLL_RS_LCPLL_TEMPC_CAL_EN_LANE = 1;
		    }
		}	

		rs_plldcc_cal_cont();
		
	}	

	rx_clk_cont_cal();
	eom_clk_cont_cal();
	
}
	
void turn_off_tx_cont_cal(void) BANKING_CTRL
{

	if( cmx_FORCE_CONT_CAL_SKIP ) return;
	
	if(pll_sel != RS_ON) {
		if(reg_PLL_AMP_TS_TOP_CONT_START_LANE) {
			reg_PLL_AMP_TS_TOP_CONT_START_LANE = 0;
			while (!reg_PLL_AMP_TS_TOP_CONT_DONE_LANE);
		}
		if(reg_PLL_DCC_VDD_TS_TOP_CONT_START_LANE) {
			reg_PLL_DCC_VDD_TS_TOP_CONT_START_LANE = 0;
			while (!reg_PLL_DCC_VDD_TS_TOP_CONT_DONE_LANE);
		}
		reg_PLL_TS_LCPLL_TEMPC_CAL_EN_LANE = 0;
		reg_PLL_TS_LCDIV1P5_DCC_EN_LANE = 0;
		reg_PLL_TS_VDDA_CAL_EN_LANE = 0;
	}
	
	if(reg_TX_ALIGN90_DCC_IMP_TOP_CONT_START_LANE) {
		reg_TX_ALIGN90_DCC_IMP_TOP_CONT_START_LANE = 0;
		while (!reg_TX_ALIGN90_DCC_IMP_TOP_CONT_DONE_LANE);
	}


}

void turn_off_rx_cont_cal(void) BANKING_CTRL 
{

	if( cmx_FORCE_CONT_CAL_SKIP ) return;
	
	if(pll_sel != TS_ON) {
		if(reg_PLL_AMP_RS_TOP_CONT_START_LANE) {
			reg_PLL_AMP_RS_TOP_CONT_START_LANE = 0;
			while (!reg_PLL_AMP_RS_TOP_CONT_DONE_LANE);
		}
		if(reg_PLL_DCC_VDD_RS_TOP_CONT_START_LANE) {
			reg_PLL_DCC_VDD_RS_TOP_CONT_START_LANE = 0;
			while (!reg_PLL_DCC_VDD_RS_TOP_CONT_DONE_LANE);
		}
		reg_PLL_RS_LCPLL_TEMPC_CAL_EN_LANE = 0;
		reg_PLL_RS_LCDIV1P5_DCC_EN_LANE = 0;
		reg_PLL_RS_VDDA_CAL_EN_LANE = 0;
	}	
	if(reg_RX_CLK_TOP_CONT_START_LANE) {
		reg_RX_CLK_TOP_CONT_START_LANE = 0;
		while (!reg_RX_CLK_TOP_CONT_DONE_LANE);
	}

}

