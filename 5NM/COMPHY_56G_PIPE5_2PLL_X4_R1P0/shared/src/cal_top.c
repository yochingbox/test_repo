/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file cal_top.c
* \purpose calibration call
* \History
*	10/13/2015 Heejeong Ryu		Initial 
*/
#include "common.h"
#include "calibration_common.h"
//#include "driver.h"
#include "pll_sharing.h"
#include "mcu_command.h"

#ifdef USE_BANKING
#pragma codeseg BANK3
#pragma constseg BANK3
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
	
	uint8_t maxrate;	
	int8_t inx;
	
	maxrate = 0;
	
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
		
		TR1 = 1;
	}
	
	if( mcuid != MCU_CMN ){
		
		PHY_STATUS = ST_CAL;
		
		reg_MCU_DEBUG0_LANE_7_0 = 0x30;

        pll_request_pll_access(PLL_SEQUENCE__Calibration);
		
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
		
		//reg_MCU_DEBUG0_LANE_7_0 = 0x10;
		//reg_MCU_DEBUG6_LANE_7_0 = rate + 0x70;
		
		//drv_power_off_dig_prot_en();
		//DTL_DTX_DFE_clkoff_reset_1();
		//reg_RESET_ANA_LANE = 0;
		//reg_RX_RESET_ANA_LANE = 0; 
		//reg_TX_RESET_ANA_LANE = 0;
		
        pll_access_route(PLL__RS_OR_TS__ANY, MCU_LOAD_INIT_TEMP_TABLE);
		
		#if !defined _SERDES_BUILD && !defined NO_CAL_LOOP
		maxrate = get_pll_rate_index(reg_PIN_PHY_GEN_MAX_RX_RD_LANE_5_0);
		for(inx=0; inx<=maxrate; inx++) 
		#endif	
		{
			reg_MCU_DEBUG0_LANE_7_0 = 0x30 + inx;

            pll_access_route(PLL__RS_OR_TS__ANY, MCU_PLL_CLK_RDY_ALL_0);
		
			#if defined _SERDES_BUILD || defined NO_CAL_LOOP
			LoadSpeedtbl_rx();
			LoadSpeedtbl_tx();
			#endif
            
            pll_access_route_data(PLL__RS_OR_TS__ANY, MCU_PLL_CAL_LOAD_SPD_TBL, inx, 0);

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
			if(reg_PIN_PU_PLL_RD_LANE0) {
				if(mcuid==MCU_LANE0) {
					while((reg_MCU_DEBUG_CMN_0_7_0&0x1)==0);
					vdd_cal(TX_REGULATORS);
					MCU_SYNC_LANE0 = 0;
					VDD_CAL_DONE_LANE0 = 1;
				}
			}
			if(reg_PIN_PU_PLL_RD_LANE1) {
				if(mcuid==MCU_LANE1) {
					while(((reg_MCU_DEBUG_CMN_0_7_0>>1)&0x1)==0);
					vdd_cal(TX_REGULATORS);
					MCU_SYNC_LANE1 = 0;
					VDD_CAL_DONE_LANE1 = 1;
				}
			}
			if(reg_PIN_PU_PLL_RD_LANE2) {
				if(mcuid==MCU_LANE2) {
					while(((reg_MCU_DEBUG_CMN_0_7_0>>2)&0x1)==0);
					vdd_cal(TX_REGULATORS);
					MCU_SYNC_LANE2 = 0;
					VDD_CAL_DONE_LANE2 = 1;
				}
			}
			if(reg_PIN_PU_PLL_RD_LANE3) {
				if(mcuid==MCU_LANE3) {
					while(((reg_MCU_DEBUG_CMN_0_7_0>>3)&0x1)==0);
					vdd_cal(TX_REGULATORS);
					MCU_SYNC_LANE3 = 0;
					VDD_CAL_DONE_LANE3 = 1;
				}
			}
			if ((VDD_CAL_DONE_LANE0|!reg_PIN_PU_PLL_RD_LANE0) && (VDD_CAL_DONE_LANE1|!reg_PIN_PU_PLL_RD_LANE1) &&
			    (VDD_CAL_DONE_LANE2|!reg_PIN_PU_PLL_RD_LANE2) && (VDD_CAL_DONE_LANE3|!reg_PIN_PU_PLL_RD_LANE3)) {
				reg_VDDACAL_COMP_EN = 0;
				VDD_CAL_DONE_LANE0 = 0;
				VDD_CAL_DONE_LANE1 = 0;
				VDD_CAL_DONE_LANE2 = 0;
				VDD_CAL_DONE_LANE3 = 0;
			}
			while(reg_VDDACAL_COMP_EN);
			}

            calibration_execute(TXDCC_CAL_INDEX); // txdcc_cal included txalign90
			
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
			if(reg_PIN_PU_PLL_RD_LANE0) {
				if(mcuid==MCU_LANE0) {
					while((reg_MCU_DEBUG_CMN_0_7_0&0x1)==0);
					vdd_cal(RX_CLK_TOP_REGULATORS);
					MCU_SYNC_LANE0 = 0;
					VDD_CAL_DONE_LANE0 = 1;
				}
			}
			if(reg_PIN_PU_PLL_RD_LANE1) {
				if(mcuid==MCU_LANE1) {
					while(((reg_MCU_DEBUG_CMN_0_7_0>>1)&0x1)==0);
					vdd_cal(RX_CLK_TOP_REGULATORS);
					MCU_SYNC_LANE1 = 0;
					VDD_CAL_DONE_LANE1 = 1;
				}
			}
			if(reg_PIN_PU_PLL_RD_LANE2) {
				if(mcuid==MCU_LANE2) {
					while(((reg_MCU_DEBUG_CMN_0_7_0>>2)&0x1)==0);
					vdd_cal(RX_CLK_TOP_REGULATORS);
					MCU_SYNC_LANE2 = 0;
					VDD_CAL_DONE_LANE2 = 1;
				}
			}
			if(reg_PIN_PU_PLL_RD_LANE3) {
				if(mcuid==MCU_LANE3) {
					while(((reg_MCU_DEBUG_CMN_0_7_0>>3)&0x1)==0);
					vdd_cal(RX_CLK_TOP_REGULATORS);
					MCU_SYNC_LANE3 = 0;
					VDD_CAL_DONE_LANE3 = 1;
				}
			}
			if ((VDD_CAL_DONE_LANE0|!reg_PIN_PU_PLL_RD_LANE0) && (VDD_CAL_DONE_LANE1|!reg_PIN_PU_PLL_RD_LANE1) &&
			    (VDD_CAL_DONE_LANE2|!reg_PIN_PU_PLL_RD_LANE2) && (VDD_CAL_DONE_LANE3|!reg_PIN_PU_PLL_RD_LANE3)) {
				reg_VDDACAL_COMP_EN = 0;
				VDD_CAL_DONE_LANE0 = 0;
				VDD_CAL_DONE_LANE1 = 0;
				VDD_CAL_DONE_LANE2 = 0;
				VDD_CAL_DONE_LANE3 = 0;
			}
			while(reg_VDDACAL_COMP_EN);
			}

			//rx_clk
            calibration_execute(RX_CLK_CAL_INDEX);
            calibration_execute(RXEOM_CAL_INDEX);

	
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
			if(reg_PIN_PU_PLL_RD_LANE0) {
				if(mcuid==MCU_LANE0) {
					while((reg_MCU_DEBUG_CMN_0_7_0&0x1)==0);
					vdd_cal(VDDA_RXSMPLR);
					MCU_SYNC_LANE0 = 0;
					VDD_CAL_DONE_LANE0 = 1;
				}
			}
			if(reg_PIN_PU_PLL_RD_LANE1) {
				if(mcuid==MCU_LANE1) {
					while(((reg_MCU_DEBUG_CMN_0_7_0>>1)&0x1)==0);
					vdd_cal(VDDA_RXSMPLR);
					MCU_SYNC_LANE1 = 0;
					VDD_CAL_DONE_LANE1 = 1;
				}
			}
			if(reg_PIN_PU_PLL_RD_LANE2) {
				if(mcuid==MCU_LANE2) {
					while(((reg_MCU_DEBUG_CMN_0_7_0>>2)&0x1)==0);
					vdd_cal(VDDA_RXSMPLR);
					MCU_SYNC_LANE2 = 0;
					VDD_CAL_DONE_LANE2 = 1;
				}
			}
			if(reg_PIN_PU_PLL_RD_LANE3) {
				if(mcuid==MCU_LANE3) {
					while(((reg_MCU_DEBUG_CMN_0_7_0>>3)&0x1)==0);
					vdd_cal(VDDA_RXSMPLR);
					MCU_SYNC_LANE3 = 0;
					VDD_CAL_DONE_LANE3 = 1;
				}
			}
			if ((VDD_CAL_DONE_LANE0|!reg_PIN_PU_PLL_RD_LANE0) && (VDD_CAL_DONE_LANE1|!reg_PIN_PU_PLL_RD_LANE1) &&
			    (VDD_CAL_DONE_LANE2|!reg_PIN_PU_PLL_RD_LANE2) && (VDD_CAL_DONE_LANE3|!reg_PIN_PU_PLL_RD_LANE3)) {
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
			if(reg_PIN_PU_PLL_RD_LANE0) {
				if(mcuid==MCU_LANE0) {
					while((reg_MCU_DEBUG_CMN_0_7_0&0x1)==0);
					calibration_execute(RX_IMP_CAL_INDEX);
					RXIMP_CAL_DONE_LANE0 = 1;
					MCU_SYNC_LANE0 = 0;
				}
			}
			if(reg_PIN_PU_PLL_RD_LANE1) {
				if(mcuid==MCU_LANE1) {
					while(((reg_MCU_DEBUG_CMN_0_7_0>>1)&0x1)==0);
					calibration_execute(RX_IMP_CAL_INDEX);
					MCU_SYNC_LANE1 = 0;
					RXIMP_CAL_DONE_LANE1 = 1;
				}
			}
			if(reg_PIN_PU_PLL_RD_LANE2) {
				if(mcuid==MCU_LANE2) {
					while(((reg_MCU_DEBUG_CMN_0_7_0>>2)&0x1)==0);
					calibration_execute(RX_IMP_CAL_INDEX);
					MCU_SYNC_LANE2 = 0;
					RXIMP_CAL_DONE_LANE2 = 1;
				}
			}
			if(reg_PIN_PU_PLL_RD_LANE3) {
				if(mcuid==MCU_LANE3) {
					while(((reg_MCU_DEBUG_CMN_0_7_0>>3)&0x1)==0);
					calibration_execute(RX_IMP_CAL_INDEX);
					MCU_SYNC_LANE3 = 0;
					RXIMP_CAL_DONE_LANE3 = 1;
				}
			}
			
			if(	(RXIMP_CAL_DONE_LANE0|!reg_PIN_PU_PLL_RD_LANE0) && (RXIMP_CAL_DONE_LANE1|!reg_PIN_PU_PLL_RD_LANE1) && (RXIMP_CAL_DONE_LANE2|!reg_PIN_PU_PLL_RD_LANE2) && (RXIMP_CAL_DONE_LANE3|!reg_PIN_PU_PLL_RD_LANE3)) 
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
			if(reg_PIN_PU_PLL_RD_LANE0) {
				if(mcuid==MCU_LANE0) {
					while((reg_MCU_DEBUG_CMN_0_7_0&0x1)==0);
					tximp_cal();
					TXIMP_CAL_DONE_LANE0 = 1;
					MCU_SYNC_LANE0 = 0;
				}
			}
			if(reg_PIN_PU_PLL_RD_LANE1) {
				if(mcuid==MCU_LANE1) {
					while(((reg_MCU_DEBUG_CMN_0_7_0>>1)&0x1)==0);
					tximp_cal();
					TXIMP_CAL_DONE_LANE1 = 1;
					MCU_SYNC_LANE1 = 0;
				}
			}
			if(reg_PIN_PU_PLL_RD_LANE2) {
				if(mcuid==MCU_LANE2) {
					while(((reg_MCU_DEBUG_CMN_0_7_0>>2)&0x1)==0);
					tximp_cal();
					TXIMP_CAL_DONE_LANE2 = 1;
					MCU_SYNC_LANE2 = 0;
				}
			}
			if(reg_PIN_PU_PLL_RD_LANE3) {
				if(mcuid==MCU_LANE3) {
					while(((reg_MCU_DEBUG_CMN_0_7_0>>3)&0x1)==0);
					tximp_cal();
					TXIMP_CAL_DONE_LANE3 = 1;
					MCU_SYNC_LANE3 = 0;
				}
			}

			if(	(TXIMP_CAL_DONE_LANE0|!reg_PIN_PU_PLL_RD_LANE0) && (TXIMP_CAL_DONE_LANE1|!reg_PIN_PU_PLL_RD_LANE1) && (TXIMP_CAL_DONE_LANE2|!reg_PIN_PU_PLL_RD_LANE2) && (TXIMP_CAL_DONE_LANE3|!reg_PIN_PU_PLL_RD_LANE3)) 
					reg_TXIMPCAL_EN = 0;
			while(reg_TXIMPCAL_EN);

		}
		reg_MCU_DEBUG0_LANE_7_0 = 0x50 + 0xf;
		
	   }
	}	


skip_out:
	reg_ANA_TX_IDLE_LANE = 0;
	reg_ANA_TX_IDLE_FORCE_LANE = 0;

	if(mcuid != MCU_CMN) {
		switch(mcuid) {
		case MCU_LANE0: CAL_DONE_LANE0 = 1;	break;
		case MCU_LANE1: CAL_DONE_LANE1 = 1;	break;
		case MCU_LANE2: CAL_DONE_LANE2 = 1;	break;
		case MCU_LANE3: CAL_DONE_LANE3 = 1;	break;
		}
		#ifdef _SERDES_BUILD		
		turn_on_tx_cont_cal();
		turn_on_rx_cont_cal();
		#endif

        pll_free_pll();
	}	
	else {	
		while(1) {
			if((reg_PIN_PU_PLL_RD_LANE0? CAL_DONE_LANE0:1) && (reg_PIN_PU_PLL_RD_LANE1? CAL_DONE_LANE1:1) && (reg_PIN_PU_PLL_RD_LANE2? CAL_DONE_LANE2:1) && (reg_PIN_PU_PLL_RD_LANE3? CAL_DONE_LANE3:1)) break;						
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
		cmx_CAL_DONE = 1;
		cmx_CAL_START = 0;
		
		#ifdef SUPPORT_TEMP_SINGLE_SHOT_MODE
		if(tsen_check) { //read temperature evry 1msec.			
			read_tsen_cal();
			tsen_check = 0;	
		}	
		#endif
	}
}	

void Calibration_rx(void) BANKING_CTRL {

	if( mcuid == MCU_CMN ) return;

	PHY_STATUS = ST_RX_CAL;
	reg_MCU_DEBUG0_LANE_7_0 = 0x31;
	//cmx_RX_CAL_DONE = 0;
	lnx_RX_CAL_DONE_LANE = 0;

	reg_PIN_PLL_READY_RX_LANE = 0;

    pll_request_pll_access(PLL_SEQUENCE__Calibration_rx);
	
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
	
    pll_access_route(PLL__RS_OR_TS__ANY, MCU_CLK_RX_READY_0);
	
	//DTL_DTX_DFE_clkoff_reset_1();

	LoadSpeedtbl_rx();

    pll_access_route(PLL__RS_OR_TS__ANY, MCU_RX_CAL);
	
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
		if(reg_PIN_PU_PLL_RD_LANE0) {
			if(mcuid==MCU_LANE0) {
				while((reg_MCU_DEBUG_CMN_0_7_0&0x1)==0);
				vdd_cal(RX_CLK_TOP_REGULATORS);
				MCU_SYNC_LANE0 = 0;
				VDD_CAL_DONE_LANE0 = 1;
			}
		}
		if(reg_PIN_PU_PLL_RD_LANE1) {
			if(mcuid==MCU_LANE1) {
				while(((reg_MCU_DEBUG_CMN_0_7_0>>1)&0x1)==0);
				vdd_cal(RX_CLK_TOP_REGULATORS);
				MCU_SYNC_LANE1 = 0;
				VDD_CAL_DONE_LANE1 = 1;
			}
		}
		if(reg_PIN_PU_PLL_RD_LANE2) {
			if(mcuid==MCU_LANE2) {
				while(((reg_MCU_DEBUG_CMN_0_7_0>>2)&0x1)==0);
				vdd_cal(RX_CLK_TOP_REGULATORS);
				MCU_SYNC_LANE2 = 0;
				VDD_CAL_DONE_LANE2 = 1;
			}
		}
		if(reg_PIN_PU_PLL_RD_LANE3) {
			if(mcuid==MCU_LANE3) {
				while(((reg_MCU_DEBUG_CMN_0_7_0>>3)&0x1)==0);
				vdd_cal(RX_CLK_TOP_REGULATORS);
				MCU_SYNC_LANE3 = 0;
				VDD_CAL_DONE_LANE3 = 1;
			}
		}
		if ((VDD_CAL_DONE_LANE0|!reg_PIN_PU_PLL_RD_LANE0) && (VDD_CAL_DONE_LANE1|!reg_PIN_PU_PLL_RD_LANE1) &&
		    (VDD_CAL_DONE_LANE2|!reg_PIN_PU_PLL_RD_LANE2) && (VDD_CAL_DONE_LANE3|!reg_PIN_PU_PLL_RD_LANE3)) {
			reg_VDDACAL_COMP_EN = 0;
			VDD_CAL_DONE_LANE0 = 0;
			VDD_CAL_DONE_LANE1 = 0;
			VDD_CAL_DONE_LANE2 = 0;
			VDD_CAL_DONE_LANE3 = 0;
		}
		while(reg_VDDACAL_COMP_EN);
	}

    calibration_execute(RX_CLK_CAL_INDEX);
    calibration_execute(RXEOM_CAL_INDEX);

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
		if(reg_PIN_PU_PLL_RD_LANE0) {
			if(mcuid==MCU_LANE0) {
				while((reg_MCU_DEBUG_CMN_0_7_0&0x1)==0);
				vdd_cal(VDDA_RXSMPLR);
				MCU_SYNC_LANE0 = 0;
				VDD_CAL_DONE_LANE0 = 1;
			}
		}
		if(reg_PIN_PU_PLL_RD_LANE1) {
			if(mcuid==MCU_LANE1) {
				while(((reg_MCU_DEBUG_CMN_0_7_0>>1)&0x1)==0);
				vdd_cal(VDDA_RXSMPLR);
				MCU_SYNC_LANE1 = 0;
				VDD_CAL_DONE_LANE1 = 1;
			}
		}
		if(reg_PIN_PU_PLL_RD_LANE2) {
			if(mcuid==MCU_LANE2) {
				while(((reg_MCU_DEBUG_CMN_0_7_0>>2)&0x1)==0);
				vdd_cal(VDDA_RXSMPLR);
				MCU_SYNC_LANE2 = 0;
				VDD_CAL_DONE_LANE2 = 1;
			}
		}
		if(reg_PIN_PU_PLL_RD_LANE3) {
			if(mcuid==MCU_LANE3) {
				while(((reg_MCU_DEBUG_CMN_0_7_0>>3)&0x1)==0);
				vdd_cal(VDDA_RXSMPLR);
				MCU_SYNC_LANE3 = 0;
				VDD_CAL_DONE_LANE3 = 1;
			}
		}
		if ((VDD_CAL_DONE_LANE0|!reg_PIN_PU_PLL_RD_LANE0) && (VDD_CAL_DONE_LANE1|!reg_PIN_PU_PLL_RD_LANE1) &&
		    (VDD_CAL_DONE_LANE2|!reg_PIN_PU_PLL_RD_LANE2) && (VDD_CAL_DONE_LANE3|!reg_PIN_PU_PLL_RD_LANE3)) {
			reg_VDDACAL_COMP_EN = 0;
			VDD_CAL_DONE_LANE0 = 0;
			VDD_CAL_DONE_LANE1 = 0;
			VDD_CAL_DONE_LANE2 = 0;
			VDD_CAL_DONE_LANE3 = 0;
		}
		while(reg_VDDACAL_COMP_EN);
	}

	reg_DFE_CLK_OFF_LANE = 0;
	reg_DFE_MCU_CLK_EN_LANE = 1;
	sampler_cal();
	reg_DFE_MCU_CLK_EN_LANE = 0;

skip_out_rx:

	lnx_RX_CAL_DONE_LANE = 1;
	
	turn_on_rx_cont_cal(); 	
	
    pll_free_pll();

	reg_MCU_DEBUG0_LANE_7_0 = 0x80;
	
}

void Calibration_tx(void) BANKING_CTRL {

	if( mcuid == MCU_CMN ) return;
		
	PHY_STATUS = ST_TX_CAL;
	reg_MCU_DEBUG0_LANE_7_0 = 0x32;
	lnx_TX_CAL_DONE_LANE = 0;

    pll_request_pll_access(PLL_SEQUENCE__Calibration_tx);

	if( cmx_EXT_FORCE_CAL_DONE ) {
		all_cal_ext_tx();
		goto skip_out_tx;
	}
	
	turn_off_tx_cont_cal();

    pll_access_route(PLL__RS_OR_TS__ANY, MCU_CLK_TX_READY_0);
	
	reg_ANA_TX_IDLE_FORCE_LANE = 1;
	reg_ANA_TX_IDLE_LANE = 1;
	
	LoadSpeedtbl_tx();		

    pll_access_route(PLL__RS_OR_TS__ANY, MCU_TX_CAL);
	
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
		if(reg_PIN_PU_PLL_RD_LANE0) {
			if(mcuid==MCU_LANE0) {
				while((reg_MCU_DEBUG_CMN_0_7_0&0x1)==0);
				vdd_cal(TX_REGULATORS);
				MCU_SYNC_LANE0 = 0;
				VDD_CAL_DONE_LANE0 = 1;
			}
		}
		if(reg_PIN_PU_PLL_RD_LANE1) {
			if(mcuid==MCU_LANE1) {
				while(((reg_MCU_DEBUG_CMN_0_7_0>>1)&0x1)==0);
				vdd_cal(TX_REGULATORS);
				MCU_SYNC_LANE1 = 0;
				VDD_CAL_DONE_LANE1 = 1;
			}
		}
		if(reg_PIN_PU_PLL_RD_LANE2) {
			if(mcuid==MCU_LANE2) {
				while(((reg_MCU_DEBUG_CMN_0_7_0>>2)&0x1)==0);
				vdd_cal(TX_REGULATORS);
				MCU_SYNC_LANE2 = 0;
				VDD_CAL_DONE_LANE2 = 1;
			}
		}
		if(reg_PIN_PU_PLL_RD_LANE3) {
			if(mcuid==MCU_LANE3) {
				while(((reg_MCU_DEBUG_CMN_0_7_0>>3)&0x1)==0);
				vdd_cal(TX_REGULATORS);
				MCU_SYNC_LANE3 = 0;
				VDD_CAL_DONE_LANE3 = 1;
			}
		}
		if ((VDD_CAL_DONE_LANE0|!reg_PIN_PU_PLL_RD_LANE0) && (VDD_CAL_DONE_LANE1|!reg_PIN_PU_PLL_RD_LANE1) &&
		    (VDD_CAL_DONE_LANE2|!reg_PIN_PU_PLL_RD_LANE2) && (VDD_CAL_DONE_LANE3|!reg_PIN_PU_PLL_RD_LANE3)) {
			reg_VDDACAL_COMP_EN = 0;
			VDD_CAL_DONE_LANE0 = 0;
			VDD_CAL_DONE_LANE1 = 0;
			VDD_CAL_DONE_LANE2 = 0;
			VDD_CAL_DONE_LANE3 = 0;
		}
		while(reg_VDDACAL_COMP_EN);
	}

    calibration_execute(TXDCC_CAL_INDEX); // txdcc_cal included txalign90

	reg_ANA_TX_IDLE_LANE = 0;
	reg_ANA_TX_IDLE_FORCE_LANE = 0;
	//reg_EOM_CLK_EN_LANE = 1;

skip_out_tx:

	lnx_TX_CAL_DONE_LANE = 1;
	
	turn_on_tx_cont_cal(); //TODO

    pll_free_pll();

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

	LoadSpeedtbl_rx();
	PHY_STATUS = ST_RX_CAL;

    pll_access_route(PLL__RS_OR_TS__ANY, MCU_ALL_CAL_EXT_RX);
	
	delay(T_10us);
	check_rx_pll_lock();

}

void all_cal_ext_tx(void) BANKING_CTRL {

	LoadSpeedtbl_tx();
	PHY_STATUS = ST_TX_CAL;

    pll_access_route(PLL__RS_OR_TS__ANY, MCU_ALL_CAL_EXT_TX);
	
	delay(T_10us);
	check_tx_pll_lock();

}

void all_cal_ext(void) BANKING_CTRL {

	reg_MCU_DEBUG0_LANE_7_0 = 0x31;
	
    pll_access_route(PLL__RS_OR_TS__RS, MCU_RESET_RS_PLL);
    pll_access_route(PLL__RS_OR_TS__TS, MCU_RESET_TS_PLL);
	
	LoadSpeedtbl_rx();
	LoadSpeedtbl_tx();
	
	PHY_STATUS = ST_CAL;

    pll_access_route(PLL__RS_OR_TS__RS, MCU_CLR_RS_RST_CLK_READY);
    pll_access_route(PLL__RS_OR_TS__TS, MCU_CLR_TS_RST_CLK_READY);
	reg_ANA_TSEN_ADC_RESET = 0;
	delay(T_10us);
	check_rx_pll_lock();
	check_tx_pll_lock();

}

void rx_cal_load(void) BANKING_CTRL { 

	if( cmx_FORCE_CONT_CAL_SKIP ) return;

	if(phy_mode == SERDES) return;

		if(pll_sel != TS_ON) {
            pll_access_route(PLL__RS_OR_TS__RS, MCU_RX_CAL_LOAD);
		}
	
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
		
		reg_RX_E2C_DCC_CAL_BYPASS_EN_LANE = 0;
		reg_RX_DLL_CAL_BYPASS_EN_LANE = 0;
		reg_RX_PI_DCC_CAL_BYPASS_EN_LANE = 0;
		reg_RX_ALIGN90_CAL_BYPASS_EN_LANE = 0;
		reg_RX_DATA_DCC_CAL_BYPASS_EN_LANE = 0;
		reg_RX_EDGE_DCC_CAL_BYPASS_EN_LANE = 0;
		
		reg_RX_E2C_DCC_CAL_SINGLE_EN_LANE = 0;
		reg_RX_DLL_CAL_SINGLE_EN_LANE = 0;
		reg_RX_PI_DCC_CAL_SINGLE_EN_LANE = 0;
		reg_RX_ALIGN90_CAL_SINGLE_EN_LANE = 0;
		reg_RX_DATA_DCC_CAL_SINGLE_EN_LANE = 0;
		reg_RX_EDGE_DCC_CAL_SINGLE_EN_LANE = 0;
		
		reg_RX_CLK_TOP_START_LANE  = 0;
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
		
		// --
		
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
		
		reg_RX_EOM_TOP_START_LANE  = 0;
		reg_RX_EOM_TOP_START_LANE  = 1;
		delay(T_p5us);		
		while (!reg_RX_CLK_TOP_DONE_LANE);
		
		reg_RX_EOM_TOP_START_LANE  = 0;

		reg_RX_EOM_DLL_CAL_SINGLE_EN_LANE = 1;
		reg_RX_EOM_PI_DCC_CAL_SINGLE_EN_LANE = 1;
		reg_RX_EOM_PI_CAL_SINGLE_EN_LANE = 1;
	
}

void tx_cal_load(void) BANKING_CTRL { 

	if( cmx_FORCE_CONT_CAL_SKIP ) return;
	
	if(phy_mode == SERDES) return;
	
		if(pll_sel != RS_ON) {
            pll_access_route(PLL__RS_OR_TS__TS, MCU_TX_CAL_LOAD);
		}
		
        #ifndef _56G_5NM
		//reg_TX_ALIGN90_CAL_RESULT_MSB_EXT_LANE_2_0 = lnx_cal_tx_align90_msb[gen_tx];
		//reg_TX_ALIGN90_CAL_RESULT_LSB_EXT_LANE_6_0 = lnx_cal_tx_align90_lsb[gen_tx];
		reg_TX_DCC1_CAL_RESULT_EXT_LANE_6_0 = lnx_cal_tx_dcc1[gen_tx];
		reg_TX_DCC2_CAL_RESULT_EXT_LANE_5_0 = lnx_cal_tx_dcc2[gen_tx];		
		//reg_TX_DCC3_CAL_RESULT_MSB_EXT_LANE_2_0 = lnx_cal_tx_dcc3_msb[gen_tx];
		//reg_TX_DCC3_CAL_RESULT_LSB_EXT_LANE_5_0 = lnx_cal_tx_dcc3_lsb[gen_tx];
		reg_TX_DCC4_CAL_RESULT_MSB_EXT_LANE_2_0 = lnx_cal_tx_dcc4_msb[gen_tx];
		reg_TX_DCC4_CAL_RESULT_LSB_EXT_LANE_5_0 = lnx_cal_tx_dcc4_lsb[gen_tx];
        #endif // #ifndef _56G_5NM
		reg_TX_IMP_ICCP_CAL_RESULT_EXT_LANE_4_0 = lnx_cal_tx_imp_iccp[gen_tx];
		reg_TX_IMP_ICCN_CAL_RESULT_EXT_LANE_4_0 = lnx_cal_tx_imp_iccn[gen_tx];
		
        #ifndef _56G_5NM
		reg_TX_ALIGN90_CAL_BYPASS_EN_LANE = 0;
		reg_TX_DCC1_CAL_BYPASS_EN_LANE = 0;
		reg_TX_DCC2_CAL_BYPASS_EN_LANE = 0;
		reg_TX_DCC3_CAL_BYPASS_EN_LANE = 0;
		reg_TX_DCC4_CAL_BYPASS_EN_LANE = 0;
        #endif // #ifndef _56G_5NM
		reg_TX_IMP_ICCP_CAL_BYPASS_EN_LANE = 0;
		reg_TX_IMP_ICCN_CAL_BYPASS_EN_LANE = 0;
		
        #ifndef _56G_5NM
		reg_TX_ALIGN90_CAL_SINGLE_EN_LANE = 0;
		reg_TX_DCC1_CAL_SINGLE_EN_LANE = 0;
		reg_TX_DCC2_CAL_SINGLE_EN_LANE = 0;
		reg_TX_DCC3_CAL_SINGLE_EN_LANE = 0;
		reg_TX_DCC4_CAL_SINGLE_EN_LANE = 0;
        #endif // #ifndef _56G_5NM
		reg_TX_IMP_ICCP_CAL_SINGLE_EN_LANE = 0;
		reg_TX_IMP_ICCN_CAL_SINGLE_EN_LANE = 0;
		
		reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
		reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 1;
		
		delay(T_p5us);
		
		while (!reg_TX_ALIGN90_DCC_IMP_TOP_DONE_LANE);
		reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;

        #ifndef _56G_5NM
		reg_TX_ALIGN90_CAL_SINGLE_EN_LANE = 1;
		reg_TX_DCC1_CAL_SINGLE_EN_LANE = 1;
		reg_TX_DCC2_CAL_SINGLE_EN_LANE = 1;
		reg_TX_DCC3_CAL_SINGLE_EN_LANE = 1;
		reg_TX_DCC4_CAL_SINGLE_EN_LANE = 1;
        #endif // #ifndef _56G_5NM
		reg_TX_IMP_ICCP_CAL_SINGLE_EN_LANE = 1;
		reg_TX_IMP_ICCN_CAL_SINGLE_EN_LANE = 1;
		

}

void turn_on_tx_cont_cal_ts_pll(void) BANKING_CTRL {

	if( cmx_FORCE_CONT_CAL_SKIP ) return;
	
	if(pll_sel != RS_ON) {
		ts_pll_amp_cal_cont();
		
		if(cmx_PLL_TEMP_CAL_CONT_EN) {
			reg_PLL_TS_LCPLL_TEMPC_EXT_EN_LANE = 0;
			reg_PLL_TS_LCPLL_TEMPC_CAL_EN_LANE = 1;
		}	
		
		ts_plldcc_cal_cont();
	}	
}

void turn_on_tx_cont_cal(void) BANKING_CTRL {

	if( cmx_FORCE_CONT_CAL_SKIP ) return;
	
    pll_access_route(PLL__RS_OR_TS__TS, MCU_TURN_ON_TX_CONT_CAL_TS_PLL);

	txdcc_cal_cont();

}	

void turn_on_rx_cont_cal_rs_pll(void) BANKING_CTRL {

	if( cmx_FORCE_CONT_CAL_SKIP ) return;

	if(pll_sel != TS_ON) {
		rs_pll_amp_cal_cont();
		
		if(cmx_PLL_TEMP_CAL_CONT_EN) {
			reg_PLL_RS_LCPLL_TEMPC_EXT_EN_LANE = 0;
			reg_PLL_RS_LCPLL_TEMPC_CAL_EN_LANE = 1;
		}	

		rs_plldcc_cal_cont();
		
	}	
}

void turn_on_rx_cont_cal(void) BANKING_CTRL {

	if( cmx_FORCE_CONT_CAL_SKIP ) return;

    pll_access_route(PLL__RS_OR_TS__RS, MCU_TURN_ON_RX_CONT_CAL_RS_PLL);

	rx_clk_cont_cal();
	eom_clk_cont_cal();
	
}

void turn_off_tx_cont_cal_ts_pll(void) BANKING_CTRL {

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
	}
}
	
void turn_off_tx_cont_cal(void) BANKING_CTRL
{

	if( cmx_FORCE_CONT_CAL_SKIP ) return;
	
    if(reg_PIN_SPD_CFG_RD_3_0 >= 3) {
        pll_access_route(PLL__RS_OR_TS__TS, MCU_TURN_OFF_TX_CONT_CAL_TS_PLL);
    }
    else {
        turn_off_tx_cont_cal_ts_pll();
    }
	
	if(reg_TX_ALIGN90_DCC_IMP_TOP_CONT_START_LANE) {
		reg_TX_ALIGN90_DCC_IMP_TOP_CONT_START_LANE = 0;
		while (!reg_TX_ALIGN90_DCC_IMP_TOP_CONT_DONE_LANE);
	}


}

void turn_off_rx_cont_cal_rs_pll(void) BANKING_CTRL {

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
	}	
}

void turn_off_rx_cont_cal(void) BANKING_CTRL 
{

	if( cmx_FORCE_CONT_CAL_SKIP ) return;
	
    if(reg_PIN_SPD_CFG_RD_3_0 >= 3) {
        pll_access_route(PLL__RS_OR_TS__RS, MCU_TURN_OFF_RX_CONT_CAL_RS_PLL);
    }
    else {
        turn_off_rx_cont_cal_rs_pll();
    }

	if(reg_RX_CLK_TOP_CONT_START_LANE) {
		reg_RX_CLK_TOP_CONT_START_LANE = 0;
		while (!reg_RX_CLK_TOP_CONT_DONE_LANE);
	}

}

