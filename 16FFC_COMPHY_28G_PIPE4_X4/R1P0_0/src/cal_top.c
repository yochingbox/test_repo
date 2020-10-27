/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file cal_top.c
* \purpose calibration call
* \History
*	10/13/2015 Heejeong Ryu		Initial 
*/
#include "common.h"

/**
 * \module Calibration Top
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
*/
void Calibration(void) {

	uint8_t rate;
	uint8_t pllno, pll_gen, sel_ring_pll;
	
	if( FORCE_EXIT_CAL ) {
		all_cal_ext();
		goto skip;
	}
	
	cmx_CAL_DONE = 0;
	reg_RX_INIT_DONE_LANE = 0; //??	
	reg_DFE_MCU_CLK_EN_LANE = 1;
	reg_ANA_TX_IDLE_FORCE_LANE = 1;
	reg_ANA_TX_IDLE_LANE = 1;
	reg_EOM_CLK_EN_LANE = 1;
	SYNC_LINE_HOLD = SYNC_IDLE;
	//lnx_RXDCC_DLL_CAL_STOP_SEL_LANE = 1;	
	//lnx_RXDCC_CENTER_CAL_STOP_SEL_LANE = 1;	
	//lnx_RXDCC_EOM_CAL_STOP_SEL_LANE = 1;	
	//lnx_TXDCC_CAL_STOP_SEL_LANE = 1;
	
	// --- CAL start
	
	if( mcuid==MCU_LANE0 ) {
		master_sync_request();		
		
		cmx_CAL_START=0; 
		//moved to init_reg
		//reg_TSEN_ADC_CAL_1_0 = 0x2; //Automatic self-offset-cal enforced, TSENE_ADC in normal mode.
		//reg_ANA_TSEN_ADC_RESET = 0;
		//reg_ANA_TSEN_ADC_EN = 1;
		//reg_ANA_TSEN_ADC_START = 1;
		//reg_TSEN_ADC_RD_REQ = 1;
		read_tsen();
		
		if(cmx_PROCESS_CAL_EN)	proc_cal();

		pll_clk_ready_all_0();
		//reg_RESET_ANA = 0;	
		
		master_sync_clean();		
	} else { slave_sync_wait(); }

	/*// -------------------
	//check phy_gen_max
	if(max_gen == 0 || gen_pll > max_gen) { 
		gen_tx=0; gen_rx=0; gen_pll=0; 
		rate = 0;	
	}
	else {
		rate = speedtable[min_gen][spdoft_pll_rate_sel];
	}*/
	
	// -- load speed table //TODO GEN loop
	////set LC rate 1 (low speed) -- >  LC rate 0 (high speed) -- > Ring rate 0 -- > Ring rate 1
	// -- > change to
    // set LC rate 0 (high speed) [-- > Ring rate 1 (low speed)	]

	pllno = 0;

	do {
		//reg_MCU_DEBUG6_LANE_7_0 = pllno + 0x70;
		//reg_MCU_DEBUG5_LANE_7_0 = min_gen;
		//reg_MCU_DEBUG4_LANE_7_0 = max_gen;
		
		if(phy_mode==PCIE) {
			if( pllno==0) { pll_gen = min_gen;  pll_rate = 1; }			
			else  { pll_gen = max_gen;	pll_rate = 0; }			
		}
		else {
			if( pllno==0 ) { pll_gen = max_gen;	pll_rate = 0; }
			else {pll_gen = min_gen;  pll_rate = 1; }			
		}
		
		loadspeedtbl_tx(pll_gen);
		loadspeedtbl_rx(pll_gen);	

		if(use_ring_pll) {
			loadspeedtbl_ringpll(pll_gen);
		}	
		else {
			loadspeedtbl_pll(pll_gen);
		}		

		// ---
		if( mcuid==MCU_LANE0 ) {
			master_sync_request();		
			
			reg_RESET_ANA = 0;
			if( cmx_PLL_CAL_EN &&  pllno==0 ) { pll_cal(); pll_clk_ready_1(); }
			
			if(use_ring_pll) {
				ring_pll_enabled = 1;
				reg_DIV_1G_EN=1; 
				reg_ANA_PU_PLL_RING = 1;
				delay(T_p5us);
				reg_ANA_PU_PLL_DLY_RING = 1;
				delay(T_p5us);
				reg_RESET_ANA_RING = 0;					
				if( cmx_RING_PLL_CAL_EN ) {
					ring_pll_cal();				
				}
				pll_clk_ready_ring_1();
			}
			
			if( cmx_PLLDCC_CAL_EN ) plldcc_cal();		
	
			master_sync_clean();		
		} else { slave_sync_wait(); }	
		
		if(cmx_VDD_CAL_EN) {
			set_test_pattern(0); //PRBS7

			#ifndef SUPPORT_CAL_SYNC_LANE	
			mcu_align_0();	

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
				delay(Tus); //avoid double booking.
				if( SYNC_LINE_HOLD_READ != mcuid ) continue;
				else {
					vdd_cal();				
					SYNC_LINE_HOLD = SYNC_IDLE;
				}	
			} while (!lnx_VDD_CAL_DONE_LANE);
			#endif	

			recover_test_pattern();
		}
		
		//lnx_RXDCC_DLL_CAL_STOP_SEL_LANE = 1;	
		//lnx_RXDCC_CENTER_CAL_STOP_SEL_LANE = 1;	
		//lnx_RXDCC_EOM_CAL_STOP_SEL_LANE = 1;	

		if(cmx_RXDCC_DLL_CAL_EN)	rxdcc_dll_cal();
		if(cmx_DLL_CAL_EN)			dll_cal();
		if(cmx_RXDCC_C_CAL_EN)		rxdcc_center_cal();
		if(cmx_RXALIGN90_CAL_EN){	align90_comp_cal();		
									rxalign90_cal(); }			
		if(cmx_RXDCC_EOM_CAL_EN) 	rxdcc_eom_cal();
		
		if(cmx_EOM_ALIGN_CAL_EN)	eom_align_cal();	
		
		if( max_gen==0 || pll_rate==0) {
			if(cmx_SAMPLER_CAL_EN)		sampler_cal();	
			if(cmx_SQ_CAL_EN)			squelch_cal();	
		}
		
		lnx_TXDCC_CAL_STOP_SEL_LANE = 1;
		if(cmx_TXDCC_CAL_EN) 		txdcc_cal();
		if(cmx_TXDCC_PDIV_CAL_EN)       txdcc_post_div_cal();
		
		if(cmx_TXDETECT_CAL_EN)	 {
			set_test_pattern(1); //4T
			
			#ifndef SUPPORT_CAL_SYNC_LANE	
			mcu_align_0();	

			if( mcuid==MCU_LANE0)	{
				txdetect_cal();		
				PHY_CHECK_LANE = 1;			
			}
			else while(!PHY_CHECK_LANE0_READ);

			if( mcu_en1) {
				if( mcuid==MCU_LANE1)	{
					txdetect_cal();		
					PHY_CHECK_LANE = 1;			
				}
				else while(!PHY_CHECK_LANE1_READ);
			}

			if( mcu_en2) {
				if( mcuid==MCU_LANE2)	{
					txdetect_cal();		
					PHY_CHECK_LANE = 1;			
				}
				else while(!PHY_CHECK_LANE2_READ);
			}

			if( mcu_en3) {
				if( mcuid==MCU_LANE3)	{
					txdetect_cal();		
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
				delay(Tus); //avoid double booking.
				if( SYNC_LINE_HOLD_READ != mcuid ) continue;
				else {
					txdetect_cal();				
					SYNC_LINE_HOLD = SYNC_IDLE;
				}	
			} while (!lnx_TXDETECT_CAL_DONE_LANE);
			#endif	
			
			recover_test_pattern();
		}

		//if(!ring_pll_enabled) break;
		if( phy_mode==SERDES || phy_mode==USB )
			break; //SERDAS always use LC PLL one time, no need RING.
		// X.Su 3/21/17 - Need review: Set to 1 so that ring_pll is enabled after the loop for SAS and PCIE (CESD-32)
		else
			ring_pll_enabled = 1;
		
	 pllno++;
	 
	} while(pllno<2); 

	//-- rximp	
	if( cmx_RXIMP_CAL_EN ) { 
	
		reg_RXIMPCAL_EN	= 1;
		#ifndef SUPPORT_CAL_SYNC_LANE
		mcu_align_0();	
		//rximp lane0
		if(mcuid==MCU_LANE0) {	
			rximp_cal();  
			PHY_CHECK_LANE = 1;			
		}
		else while(!PHY_CHECK_LANE0_READ);	
		
		//rximp lane1
		if(mcu_en1) {
			if(mcuid==MCU_LANE1)	{
				rximp_cal();  
				PHY_CHECK_LANE = 2;			
			}
			else while(!PHY_CHECK_LANE1_READ);	
		}
		//rximp lane2
		if(mcu_en2) {
			if(mcuid==MCU_LANE2)	{
				rximp_cal();  
				PHY_CHECK_LANE = 3;			
			}
			else while(!PHY_CHECK_LANE2_READ);	
		}
		//rximp lane3
		if(mcu_en3) {
			if(mcuid==MCU_LANE3 )	{
			rximp_cal();  
			PHY_CHECK_LANE = 4;			
			}
			else while(!PHY_CHECK_LANE3_READ);	
		}
		//mcu_align_0();
		#else
			do {
				while ( SYNC_LINE_HOLD_READ != SYNC_IDLE ) {				
					//wait for other lane 
				};		
				SYNC_LINE_HOLD = mcuid;
				delay(Tus); //avoid double booking.
				if( SYNC_LINE_HOLD_READ != mcuid ) continue;
				else {
					rximp_cal();				
					SYNC_LINE_HOLD = SYNC_IDLE;
				}	
			} while (!lnx_RXIMP_CAL_DONE_LANE);
		#endif
		reg_RXIMPCAL_EN	= 0;
	}

	mcu_align_0(); // to fix the TX imp calibration problem when RX imp calibration is turned offf
	//-- tximp	
	if( cmx_TXIMP_CAL_EN ) {	
		
		set_test_pattern(1); //4T

		reg_TXIMPCAL_EN = 1;

		#ifndef SUPPORT_CAL_SYNC_LANE	
		//tximp lane0
		if( mcuid==MCU_LANE0 )	{
			tximp_cal();  PHY_CHECK_LANE = 1;			
		}
		else while(!PHY_CHECK_LANE0_READ);			
		
		//tximp lane1
		if(mcu_en1) {
		if( mcuid==MCU_LANE1 )	{
			tximp_cal();  PHY_CHECK_LANE = 2;			
		}
		else while(!PHY_CHECK_LANE1_READ);	
		}
		
		//tximp lane2
		if(mcu_en2) {
		if( mcuid==MCU_LANE2 ) 	{
			tximp_cal();  PHY_CHECK_LANE = 3;			
		}
		else while(!PHY_CHECK_LANE2_READ);	
		}
		//tximp lane3
		if(mcu_en3) {
		if( mcuid==MCU_LANE3 )	{
			tximp_cal();  PHY_CHECK_LANE = 4;			
		}
		else while(!PHY_CHECK_LANE3_READ);	
        }
		#else
			do {
				while ( SYNC_LINE_HOLD_READ != SYNC_IDLE ) {				
					//wait for other lane 
				};		
				SYNC_LINE_HOLD = mcuid;
				delay(Tus); //avoid double booking.
				if( SYNC_LINE_HOLD_READ != mcuid ) continue;
				else {
					tximp_cal();				
					SYNC_LINE_HOLD = SYNC_IDLE;
				}	
			} while (!lnx_TXIMP_CAL_DONE_LANE);
		#endif
		
		reg_TXIMPCAL_EN = 0;
		
		recover_test_pattern();
	}
	// --- 
	mcu_align_0();

skip:	
	if( mcuid==MCU_LANE0 ) {
		master_sync_request();		
		pll_clk_ready_1(); 
		if(ring_pll_enabled)	{
				pll_clk_ready_ring_1();
		}		
		else	 reg_RING_PLL_DISABLE = 1;	 

		master_sync_clean();		
	} else { slave_sync_wait(); }
	
	//	if(reg_PWRON_SEQ == 0)
	//  DTL_DTX_DFE_clkoff_reset_0(); //1/25/17 Ported change from FFP, which is commented out.

	cmx_CAL_DONE = 1;
	reg_ANA_TX_IDLE_FORCE_LANE = 0;
	reg_ANA_TX_IDLE_LANE = 0;

	//tsen_dat_cal = read_tsen(); //no used
	
	reg_REG_DTL_LOOP_FREEZE_LANE = 0;  
	reg_DTL_FLOOP_FREEZE_LANE = 0;  

	// prepare for cont_cal
	//lnx_TXDCC_CAL_STOP_SEL_LANE = 0;
	//lnx_RXDCC_DLL_CAL_STOP_SEL_LANE = 0;	
	//lnx_RXDCC_CENTER_CAL_STOP_SEL_LANE = 0;	
	//lnx_RXDCC_EOM_CAL_STOP_SEL_LANE = 0;	
	reg_TX_TDTAP_SEL_LANE = 1; 
	reg_TXDCCCAL_EN_LANE = 0;
	lnx_DLL_VDDA_TRACKING_ON_LANE = 1;
	dcc_cont = 0;
	align90_tracking_cnt = 0;
	
	PHY_STATUS = ST_SPDCHG;

}	

void all_cal_ext(void) {  //TDDO - remove and move to cal module

	uint16_t temp;
	 uint8_t lc_pll_gen, ring_pll_gen;
	 
	ring_pll_enabled = 1;
	//if(ring_pll_enabled) 
	{
		if(phy_mode==PCIE) {  
			lc_pll_gen = min_gen;
			ring_pll_gen = max_gen;
		}	
		else {
			lc_pll_gen = max_gen;
			ring_pll_gen = min_gen;
		}			
		loadspeedtbl_pll(lc_pll_gen); 
		if(phy_mode!=SERDES) loadspeedtbl_ringpll(ring_pll_gen);	
     }

	//removed already default
	if( mcuid==MCU_LANE0 ) {
		master_sync_request();		

		temp = cmx_REFCLK_FREQ_7_0;
        	temp--;
		reg_FBC_CNT_TIMER_15_0_b0 = (uint8_t)temp;
        reg_FBC_CNT_TIMER_15_0_b1 = (uint8_t)(temp >> 8);
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
		cmx_CAL_PLL_SPEED_RING_R1_7_0 = 0x10;
		cmx_CAL_PLL_SPEED_RING_R0_7_0 = 0x10;
		cmx_CAL_PLL_SLLP_DAC_COARSE_RING_R1_7_0 = 0x8;
		cmx_CAL_PLL_SLLP_DAC_COARSE_RING_R0_7_0 = 0x8;
		cmx_CAL_SLLP_DAC_FINE_RING_R1_15_0 = 0x384;
	        cmx_CAL_SLLP_DAC_FINE_RING_R0_15_0 = 0x384;
		cmx_PLL_CAL_RING_DONE = 1;
		first_time_ring_pll_cont = 1;

		reg_RESET_ANA = 0;	reg_RESET_ANA_RING = 0;
		pll_clk_ready_1(); 
		reg_ANA_PU_PLL_RING = 1;
		delay(T_p5us);
		reg_ANA_PU_PLL_DLY_RING = 1;
		pll_clk_ready_ring_1();
		
		master_sync_clean();		
	} else { slave_sync_wait(); }	
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
	//reg_TXIMP_TUNEN_LANE_3_0 = 0x08;
	//reg_TXIMP_TUNEN0_LANE_2_0 = 0;
	//reg_TXIMP_TUNEP_LANE_3_0 = 0x07;
	//reg_TXIMP_TUNEP0_LANE_2_0 = 0;
	
	DTL_DTX_DFE_clkoff_reset_0(); //??

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
void Cal_Cont(void) {
	uint8_t cont_cal_inx = 0;
	
	if(cmx_FORCE_CONT_CAL_SKIP) return;
	//if(FORCE_EXIT_CAL) return;
	
	cont_cal_on = 1;
	
	do {
		switch ( cont_cal_inx ) {
		case 0:
				if(cmx_RXALIGN90_CAL_EN && lnx_PHASE_ADAPT_ENABLE_LANE==0) {
						find_align90_lock();//phase_lookup_tracking(1); //align90_dll	
				}
		break;
		case 1:	if(cmx_DLL_CAL_EN)	dll_eom_vdda_cal(DLL_PHASE_STEP); break;
		case 2:	if(cmx_DLL_CAL_EN)	dll_vdda_cal(DLL_PHASE_STEP);	  break;		
		case 3:		
				switch(dcc_cont) {
				case 0: if(cmx_RXDCC_DLL_CAL_EN)	rxdcc_dll_cal(); break;	
				case 1: if(cmx_RXDCC_C_CAL_EN)		rxdcc_center_cal(); break;
				case 2: if(cmx_RXDCC_EOM_CAL_EN) 	rxdcc_eom_cal(); break;
				case 3: if(cmx_TXDCC_CAL_EN && reg_TX_SPEED_DIV_LANE_2_0==0) txdcc_cal();
						else if(cmx_TXDCC_PDIV_CAL_EN)	txdcc_post_div_cal();	break;
				case 4: if(cmx_TXDETECT_CAL_EN && cmx_TXDETECT_CAL_CONT_EN)	txdetect_cal(); break;
				case 5: if(mcuid==MCU_LANE0 && cmx_PLLDCC_CAL_EN && cmx_PLLDCC_CAL_CONT_EN) plldcc_cal();	break;
				}
				dcc_cont++;
				if(dcc_cont>5) dcc_cont = 0;	
		break;		
		case 4:						
				if( timeout == 0 ) break;
				if( mcuid==MCU_LANE0 && cmx_PLL_TEMP_CAL_EN && timeout) {
					pll_temp_cal(); 
					if(BYPASS_DELAY==0) {
						if((tempc_step_state&0xf0) == 0x10) { timeout_start((uint16_t)5);	}
						else if((tempc_step_state&0xf0) == 0x20) {timeout_start((uint16_t)40); }
						else if((tempc_step_state&0xf0) == 0x30) { timeout_start((uint16_t)100); }	
						else timeout = 1;
					}
					else {
						timeout = 1; 
					}
				}
		break;		
		case 5:		
				if( timeout2 == 0) break;
				timeout2_start((uint16_t)100);		
				if( mcuid==MCU_LANE0 && cmx_PLLAMP_CAL_CONT_EN ) pll_amp_cal_cont();	
		break;		
		case 6:
				if((mcuid==MCU_LANE0 && reg_ANA_PLL_LOCK_RING_RD)) ring_pll_cont(); 
				if(BYPASS_DELAY==0) {timeout2_start((uint16_t)100); }		
				else timeout2 = 1;			
		break;
		case 7:	
				if( lnx_CAL_VDD_CONTINUOUS_MODE_EN_LANE ) {
					if( SYNC_LINE_HOLD_READ == SYNC_IDLE) {
						SYNC_LINE_HOLD = mcuid;
						delay(Tus);
						if( SYNC_LINE_HOLD_READ == mcuid ) {			
							vdd_cal();
							SYNC_LINE_HOLD = SYNC_IDLE;
						}	
					}
				}	
		break;		
		}		
	} while( PHY_NS==ST_INIT &&  cont_cal_inx++<8 );
	
	if( PHY_NS!=ST_INIT ) {
		pll_temp_force_idle();		
	}

	cont_cal_on = 0;
		
}
/**
 * \module Read TSEN
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note  Used TSensor continue measure mode:
 *        TSEN_ADC_CAL[1:0] = 2'b10: Automatic self-offset-cal enforced, TSENE_ADC in normal mode
*/
int16_t read_tsen(void) {
	int16_t dat;

	// initial ANA_TSEN_ADC_RDY time is 2~6mS/12mS.
	#ifndef SIM_ENV
	if(reg_PWRON_SEQ &&  BYPASS_DELAY==0) {
		while(reg_TSEN_ADC_RDY==0);	
	}
	#endif
	
	reg_TSEN_ADC_RD_REQ = 1;
	
	if( reg_TSEN_ADC_DATA_9_0_b1 & 0x02 ) {
		dat = 0xfc00 | (reg_TSEN_ADC_DATA_9_0_b1<<8) | reg_TSEN_ADC_DATA_9_0_b0;	
	}
	else {
		dat = (reg_TSEN_ADC_DATA_9_0_b1<<8) | reg_TSEN_ADC_DATA_9_0_b0;
	}
	
	if(dat==0&& reg_TSEN_ADC_RDY==0) dat = -234; //return 0xfef0; //2f0=18'

	//reg_TSEN_ADC_RD_REQ = 0; //don't disable!
	#ifdef _LAB
	//if(PHY_STATUS>ST_POSEQ) {
	//	DBG_Printf("\r\ntemp=%d", dat);
	//}
	#endif	
	return dat;
}

void load_cal_data(void) {
	uint8_t	rate;
	rate = pll_rate; //cmx_PLL_RATE_SEL_3_0;
	if(rate>1) rate = 0;
	
	lnx_LOAD_CAL_ON_LANE = 1;
	
	//load dll
	if(cmx_DLL_CAL_EN)	{
		reg_DLL_CMP_OFFSET_LANE_3_0 = lnx_CAL_DLL_CMP_OFFSET_LANE_7_0; 
		if(rate == 1)  {
			set_sellv_rxdll_ch( lnx_CAL_VDDA_DLL_SEL_R1_LANE_7_0 );
			reg_DLL_GMSEL_LANE_2_0 = lnx_CAL_DLL_GMSEL_R1_LANE_7_0;
			set_sellv_rxeomdll_ch( lnx_CAL_VDDA_DLL_EOM_SEL_R1_LANE_7_0 );
			reg_EOM_DLL_GMSEL_LANE_2_0 = lnx_CAL_DLL_EOM_GMSEL_R1_LANE_7_0;
		}
		else {
			set_sellv_rxdll_ch( lnx_CAL_VDDA_DLL_SEL_R0_LANE_7_0 );
			reg_DLL_GMSEL_LANE_2_0 = lnx_CAL_DLL_GMSEL_R0_LANE_7_0;
			set_sellv_rxeomdll_ch( lnx_CAL_VDDA_DLL_EOM_SEL_R0_LANE_7_0 );
			reg_EOM_DLL_GMSEL_LANE_2_0 = lnx_CAL_DLL_EOM_GMSEL_R0_LANE_7_0;
		}
		dll_vdda_cal(DLL_PHASE_STEP);
		dll_eom_vdda_cal(DLL_PHASE_STEP);
	}

	//load Align90
	if(cmx_RXALIGN90_CAL_EN) {
		if(rate == 1)  {
			reg_ALIGN90_DAC_LANE_5_0 = lnx_CAL_ALIGN90_DAC_R1_LANE_7_0;        
			reg_ALIGN90_GM_LANE_2_0 = lnx_CAL_ALIGN90_GM_R1_LANE_7_0;    //GRAY_CODE       
			reg_ALIGN90_DUMMY_CLK_LANE = lnx_CAL_ALIGN90_DUMMY_CLK_R1_LANE;	
		}
		else {
			reg_ALIGN90_DAC_LANE_5_0 = lnx_CAL_ALIGN90_DAC_R0_LANE_7_0;        
			reg_ALIGN90_GM_LANE_2_0 = lnx_CAL_ALIGN90_GM_R0_LANE_7_0;    //GRAY_CODE       
			reg_ALIGN90_DUMMY_CLK_LANE = lnx_CAL_ALIGN90_DUMMY_CLK_R0_LANE;	
		}
		reg_ALIGN90_SYN_CLK_LANE	= 1;		
		reg_ALIGN90_SYN_CLK_LANE	= 0;

		gm_bin = cal_align90_gm_bin[rate];
		dac = reg_ALIGN90_DAC_LANE_5_0;
		gm = reg_ALIGN90_GM_LANE_2_0;
		dm = reg_ALIGN90_DUMMY_CLK_LANE;
	
		find_align90_lock(); //phase_lookup_tracking(8);
	}	
	
	lnx_LOAD_CAL_ON_LANE = 0;
}

void mcu_align_0(void) {
	PHY_CHECK_LANE = 0; 
	while((PHY_CHECK_LANE0_READ|PHY_CHECK_LANE1_READ|PHY_CHECK_LANE2_READ|PHY_CHECK_LANE3_READ));
}

void set_test_pattern(uint8_t pt_4t_en) {
		save_local_ana_tx2rx_lpbk_en_lane  =  reg_LOCAL_ANA_TX2RX_LPBK_EN_LANE;
		save_pt_tx_pattern_sel_lane_5_0_b0 =  reg_PT_TX_PATTERN_SEL_LANE_5_0_b0; 
		save_pt_tx_pattern_sel_lane_5_0_b1 =  reg_PT_TX_PATTERN_SEL_LANE_5_0_b1;
		save_pt_rx_pattern_sel_lane_5_0    =  reg_PT_RX_PATTERN_SEL_LANE_5_0;
		save_pt_en_lane 				   =  reg_PT_EN_LANE;	
		save_pt_tx_clk_en_lane             =  reg_PT_TX_CLK_EN_LANE;

		reg_LOCAL_ANA_TX2RX_LPBK_EN_LANE  = 1;	
		if( pt_4t_en ) {
			reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = 0x03; // 4T pattern = 0x0b
			reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = 0x02;
		}
		else { //PRBS7
			reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = 0x00; //PRBS7:0x10
			reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = 0x04;		
		}
		
		reg_PT_EN_LANE = 1;	
		reg_PT_TX_CLK_EN_LANE = 1;
}

void recover_test_pattern(void) {
		reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = save_pt_tx_pattern_sel_lane_5_0_b0; 
		reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = save_pt_tx_pattern_sel_lane_5_0_b1;
		reg_PT_RX_PATTERN_SEL_LANE_5_0    = save_pt_rx_pattern_sel_lane_5_0;
		reg_PT_EN_LANE                    = save_pt_en_lane;	
		reg_PT_TX_CLK_EN_LANE             = save_pt_tx_clk_en_lane;
		reg_LOCAL_ANA_TX2RX_LPBK_EN_LANE  = save_local_ana_tx2rx_lpbk_en_lane;
}


/*
uint8_t find_next_mcu(void) {
	uint8_t next_mcu_status, i, need_access;
	
	i = reg_MCU_ID_LANE_7_0+1;
	while( i < 4 ) {	
		next_mcu_status = MCU_CONTROL_0.BT.B0 & (0x01<<i);
		need_access = SYNC_LINE_HOLD_READ & (0x10<<i);
		if ( next_mcu_status && need_access ) break; 	
	}
	return (i & 0x03);
}	
*/
