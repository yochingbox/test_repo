/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file cal_top.c
* \purpose calibration call
* \History
*	10/13/2015 Heejeong Ryu		Initial 
*/
#include "common.h"
#define MEASURE_CAL_TIMING 1

#if MEASURE_CAL_TIMING
void GenerateGpoPulse() {
	reg_PIN_GPO_LANE_7_0 = 0;
	reg_PIN_GPO_LANE_7_0 = 1;
	delay01( 10 );
	reg_PIN_GPO_LANE_7_0 = 0;
}
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
void Calibration(void) {

	uint8_t rate, inx, genno, save_FBCK_SEL, save_FBCK_SEL_RING, dtx_off;
	
#if MEASURE_CAL_TIMING
	GenerateGpoPulse();
#endif
	cmx_CAL_DONE = 0;
	lnx_CAL_DONE_LANE = 0;
	PHY_CHECK_LANE = 0;
	reg_DFE_ADAPT_CONT_LANE = 0;
	reg_DFE_START_LANE = 0;


	gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_3_0; gen_tx = min(gen_tx, cmx_PHY_GEN_MAX_3_0);
	gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_3_0; gen_rx = min(gen_rx, cmx_PHY_GEN_MAX_3_0);  	
	if(phy_mode==SERDES) { gen_tx = 0; gen_rx = 0; }

	for(genno=min_gen; genno<= max_gen; genno++) {  
		if(speedtable[genno][spdoft_tx_ck_sel_lane] == 1 || speedtable[genno][spdoft_rx_ck_sel_lane] == 1) ring_pll_enabled = 1;	
		else 	lc_pll_used = 1;
	}
	
	genno = gen_tx;
	if(phy_mode==SERDES) { 
		genno = min(reg_PIN_PHY_GEN_TX_RD_LANE_3_0, cmx_PHY_GEN_MAX_3_0);
		genno = get_gen_memory_index(genno);
	}	
	gen_pll_rate = speedtable[genno][spdoft_pll_rate_sel_tx]; 
	if(gen_pll_rate>1 || phy_mode==SERDES) { tx_pll_rate = 0; tx_pll_rate_x = 0; }
	else { tx_pll_rate = gen_pll_rate; tx_pll_rate_x = gen_pll_rate; }	
	use_ring_pll = speedtable[genno][spdoft_tx_ck_sel_lane];

	#ifdef _SATA_SERDES_BUILD
	if(phy_mode==SERDES && SPDCHG_ON_READ) {
		dtx_off = pre_gen_pll_rate != gen_pll_rate;
		if(dtx_off) {
			if(serdes_ring_lane_en) {
				if(ring_lane_sel) pll_clk_ready_ring_0();
				else pll_clk_ready_0();
			}
			else if(mcuid == master_mcu) {		
				pll_clk_ready_0();	
				if(ring_pll_enabled) pll_clk_ready_ring_0();
			}				
		}	
		DTL_DTX_DFE_clkoff_reset_1(dtx_off); //(mcuid == master_mcu) && (pre_gen_pll_rate != gen_pll_rate));
	}	
	#endif 
	
	//-----------
	//enable TSEN
	if( mcuid== master_mcu ) {
		reg_TSEN_ADC_CAL_1_0 = 0x2; //Automatic self-offset-cal enforced, TSENE_ADC in normal mode.
		reg_ANA_TSEN_ADC_RESET = 0;
		reg_ANA_TSEN_ADC_EN = 1;
		reg_ANA_TSEN_ADC_START = 1;
		reg_TSEN_ADC_RD_REQ = 1;	
		
		if(cmx_FAST_POWER_ON_EN) {
			reg_ANA_TSEN_ADC_RDY_FM_REG = 1;
			reg_ANA_TSEN_ADC_RDY = 1;
		}	
	}

	if(reg_MCU_COMMAND0_LANE_31_0_b0==0) { 
		while(reg_TSEN_ADC_RDY==0);	
	}
	tsen_dat = read_tsen();
	
	if( force_exit_cal ) {
		// set all to *cal_ext_en=1
		CONTROL_CONFIG1.VAL = 0x0ffffffc;		
		all_cal_ext();
		goto skip_out;
	}
	
	reg_RX_INIT_DONE_LANE = 0; //??	
	//reg_DFE_MCU_CLK_EN_LANE = 1;
	reg_ANA_TX_IDLE_FORCE_LANE = 1;
	reg_ANA_TX_IDLE_LANE = 1;
	reg_EOM_CLK_EN_LANE = 1;
	reg_TX_TDTAP_SEL_LANE = 0; 
	lnx_DLL_VDDA_TRACKING_ON_LANE = 0;

	//Turn the debug info off temporally, to save code size for the new eom
/*	reg_MCU_DEBUG0_LANE_7_0 = 0x32;
	reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
	reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
	reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
	reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;
	*/
	// --- CAL start
	if((gen_pll_rate!=pre_gen_pll_rate && SPDCHG_ON_READ) || 
	(!SPDCHG_ON_READ) || phy_mode!=SERDES) {

	 if( mcuid== master_mcu ) {
	  		master_sync_request();
			
		cmx_CAL_START=0; 
		//reg_SHRTR = 1; //moved to PowerUp_Seq_Test for COSIM only
				
		if(!SPDCHG_ON_READ)	proc_cal();

		// --- PLL LOOP --
		if(phy_mode<=SAS) rate = 1;	
		else if(phy_mode==PCIE) rate = 2;	
		else rate = 0;
		for(inx=0; inx<2; inx++) {

		#if _DBG_PLL==1
		Printf("\r\n rate=%d", rate);
		#endif
			pre_lcpll_rate = rate;
			//Turn the debug info off temporally, to save code size for the new eom
			/*reg_MCU_DEBUG0_LANE_7_0 = 0x10;
			reg_MCU_DEBUG6_LANE_7_0 = rate + 0x70;*/	
			loadspeedtbl_pll(rate);	
			load_init_temp_table();
			
			pll_clk_ready_0();			
			reg_RESET_ANA = 0;
			pll_cal();				
			pll_clk_ready_1();
			
			reg_ANA_CMN_IMPCAL_OUT_REQ = 1;
			#ifdef _28G_X4_R2P1
			if(reg_LCPLLCLK_DIV2_SEL==0) { 								
				reg_LCPLL_DCC_5_0 = 0x20; //if LCPLLCLK_DIV2_SEL=0, need to set default
				cmx_PLLDCC_CAL_DONE = 1; cmx_PLLDCC_CAL_PASS = 1;			
			}
			else
			#endif	
				plldcc_cal();		
			
			if( no_pllspdchg ) break; //SERDAS always use LC PLL rate0
			if( phy_mode == SERDES || phy_mode == PCIE ) break; //PCIE need only rate2 16G to calibrate
			//if(force_exit_cal) break;		  	
			
			if(phy_mode<=SAS) rate = 0;	
			else rate = 1;			
		}	
		
		master_sync_clean();		
	 } else { slave_sync_wait(); }

	 // --- RING PLL ---	
	  if( ring_lane_sel ) {
		master_sync_request();			
	
		if( ring_pll_enabled ) {
			
			pll_clk_ready_ring_0();
			
			if(phy_mode==PCIE) rate = 1;	
			else rate = 0;
			for( ; rate<2; rate++) {
				//debug
				//Turn the debug info off temporally, to save code size for the new eom
				/*reg_MCU_DEBUG0_LANE_7_0 = 0x20;
				reg_MCU_DEBUG6_LANE_7_0 = rate + 0x70;*/
				
				loadspeedtbl_ringpll(rate);
				
				reg_ANA_PU_PLL_RING = 1;
				delay01(5);
				reg_ANA_PU_PLL_DLY_RING = 1;
				delay01(5);
				reg_RESET_ANA_RING = 0;					
				
				ring_pll_cal();				

				if( no_pllspdchg ) break;  
				if( phy_mode == SERDES ) break; //SERDAS always use rate0
			}				
			
			pll_clk_ready_ring_1();	
		
		}
		else reg_RING_PLL_DISABLE = 1;

		master_sync_clean();		
	  } else { slave_sync_wait(); }
	}
	//--- GEN LOOP --- 
		
	for( genno=min_gen; genno<=max_gen; genno++)  
	{
		gen_rx = genno;	gen_tx = genno;				
		
		if(phy_mode==SERDES) { //serdes need to calibrate on own speed 	 		
			loadspeedtbl_gen();
		}
		else {
			loadSpeedtbl();
		}
		//Turn the debug info off temporally, to save code size for the new eom
		/*//debug
		reg_MCU_DEBUG0_LANE_7_0 = 0x30;
		reg_MCU_DEBUG6_LANE_7_0 = gen_tx + 0x70;
		reg_MCU_DEBUG5_LANE_7_0 = min_gen;
		reg_MCU_DEBUG4_LANE_7_0 = max_gen;*/

		//----
		{
			mcu_align_0();	
		
			#ifndef SUPPORT_CAL_SYNC_LANE	
			if( mcu_en0) {
				if( mcuid==MCU_LANE0)	{
#ifdef ROM_REPLACEMENT
					vdd_cal_01();
#else
					vdd_cal();
#endif
					PHY_CHECK_LANE = 1;			
				}
				else while(!PHY_CHECK_LANE0_READ);
			}

			if( mcu_en1) {
				if( mcuid==MCU_LANE1)	{
#ifdef ROM_REPLACEMENT					
					vdd_cal_01();
#else
					vdd_cal();
#endif
					PHY_CHECK_LANE = 1;			
				}
				else while(!PHY_CHECK_LANE1_READ);
			}
			
			#ifndef _28G_X2
			if( mcu_en2) {
				if( mcuid==MCU_LANE2)	{
#ifdef ROM_REPLACEMENT
					vdd_cal_01();
#else
					vdd_cal();
#endif
					PHY_CHECK_LANE = 1;			
				}
				else while(!PHY_CHECK_LANE2_READ);
			}

			if( mcu_en3) {
				if( mcuid==MCU_LANE3)	{
#ifdef ROM_REPLACEMENT
					vdd_cal_01();
#else
					vdd_cal();
#endif
					PHY_CHECK_LANE = 1;			
				}
				else while(!PHY_CHECK_LANE3_READ);
			}
			#endif
			#else
			do {
				while ( SYNC_LINE_HOLD_READ != SYNC_IDLE ) {				
					//wait for other lane 
				};		
				SYNC_LINE_HOLD = mcuid;
				delay01(10); //avoid double booking.
				if( SYNC_LINE_HOLD_READ != mcuid ) continue;
				else {
#ifdef ROM_REPLACEMENT
					vdd_cal_01();
#else
					vdd_cal();
#endif
					PHY_CHECK_LANE = 1;	
					SYNC_LINE_HOLD = SYNC_IDLE;
				}	
			} while (!lnx_VDD_CAL_DONE_LANE);
			#endif	

		}
		
		{	
			mcu_align_0();	

			#ifndef SUPPORT_CAL_SYNC_LANE	
			if( mcu_en0) {
				if( mcuid==MCU_LANE0)	{
					txdetect_cal();		
					PHY_CHECK_LANE = 1;			
				}
				else while(!PHY_CHECK_LANE0_READ);
			}

			if( mcu_en1) {
				if( mcuid==MCU_LANE1)	{
					txdetect_cal();		
					PHY_CHECK_LANE = 1;			
				}
				else while(!PHY_CHECK_LANE1_READ);
			}

			#ifndef _28G_X2
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
			#endif
			#else
			do {
				while ( SYNC_LINE_HOLD_READ != SYNC_IDLE ) {				
					//wait for other lane 
				};		
				SYNC_LINE_HOLD = mcuid;
				delay01(10); //avoid double booking.
				if( SYNC_LINE_HOLD_READ != mcuid ) continue;
				else {
					if( cmx_TXDETECT_CAL_EXT_EN ) lnx_TXDETECT_CAL_DONE_LANE = 1;
					else txdetect_cal();				
					PHY_CHECK_LANE = 1;	
					SYNC_LINE_HOLD = SYNC_IDLE;
				}	
			} while (!lnx_TXDETECT_CAL_DONE_LANE);
			#endif	
			
		}

		rxdcc_dll_cal_01();
		dll_cal();
		rxdcc_data_cal_01();
		rxdcc_eom_cal_01();
		//eom_align_cal();	removed		
		align90_comp_cal();		
		rxalign90_cal(); 			
		txdcc_cal_01();
		txdcc_pdiv_cal_01();
		
		if( phy_mode==SERDES ) break; //SERDAS always use one gen		
	} 

	if(SPDCHG_ON_READ) goto skip_out;
	
	sampler_cal();	
	squelch_cal();	
	
	//-- rximp	
	{ 
	
		if( cmx_RXIMP_CAL_EXT_EN == 0) reg_RXIMPCAL_EN	= 1;
		mcu_align_0();	
		
		#ifndef SUPPORT_CAL_SYNC_LANE
		//rximp lane0
		if( mcu_en0) {
			if(mcuid==MCU_LANE0) {	
				rximp_cal();  
				PHY_CHECK_LANE = 1;			
			}
			else while(!PHY_CHECK_LANE0_READ);	
		}
		
		//rximp lane1
		if(mcu_en1) {
			if(mcuid==MCU_LANE1)	{
				rximp_cal();  
				PHY_CHECK_LANE = 2;			
			}
			else while(!PHY_CHECK_LANE1_READ);	
		}

		#ifndef _28G_X2
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
		#endif	
		#else
			do {
				while ( SYNC_LINE_HOLD_READ != SYNC_IDLE ) {				
					//wait for other lane 
				};		
				SYNC_LINE_HOLD = mcuid;
				delay01(10); //avoid double booking.
				if( SYNC_LINE_HOLD_READ != mcuid ) continue;
				else {
					rximp_cal();				
					PHY_CHECK_LANE = 1;	
					SYNC_LINE_HOLD = SYNC_IDLE;
				}	
			} while (!lnx_RXIMP_CAL_DONE_LANE);
		#endif
		
	    mcu_align_0();
		reg_RXIMPCAL_EN	= 0;
	}
	
	//-- tximp		 
	{	
		
		if( cmx_TXIMP_CAL_EXT_EN == 0 )		
				reg_TXIMPCAL_EN = 1;

		#ifndef SUPPORT_CAL_SYNC_LANE	
		//tximp lane0
		if( mcu_en0) {
		if( mcuid==MCU_LANE0 )	{
			tximp_cal();  PHY_CHECK_LANE = 1;			
		}
		else while(!PHY_CHECK_LANE0_READ);			
		}	
		
		//tximp lane1
		if(mcu_en1) {
		if( mcuid==MCU_LANE1 )	{
			tximp_cal();  PHY_CHECK_LANE = 2;			
		}
		else while(!PHY_CHECK_LANE1_READ);	
		}
		
		#ifndef _28G_X2
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
		#endif
		#else
			do {
				while ( SYNC_LINE_HOLD_READ != SYNC_IDLE ) {				
					//wait for other lane 
				};		
				SYNC_LINE_HOLD = mcuid;
				delay01(10); //avoid double booking.
				if( SYNC_LINE_HOLD_READ != mcuid ) continue;
				else {
					tximp_cal();				
					SYNC_LINE_HOLD = SYNC_IDLE;
				}	
			} while (!lnx_TXIMP_CAL_DONE_LANE);
		#endif
		
		reg_TXIMPCAL_EN = 0;
	}
	// --- 
	
	mcu_align_0();

skip_out:

	reg_SHRTR = 0; // Set to 1 at the beginning, clear after calibration is done
	cmx_CAL_DONE = 1; 	
	lnx_CAL_DONE_LANE = 1;
#if MEASURE_CAL_TIMING
	GenerateGpoPulse();
#endif
	reg_ANA_TX_IDLE_FORCE_LANE = 0;
	reg_ANA_TX_IDLE_LANE = 0;

	#ifdef _28G_R2P0
	reg_DTL_LOOP_FREEZE_LANE = 0;  //analog deleted
	#else
	reg_REG_DTL_LOOP_FREEZE_LANE = 0;
	#endif
	reg_DTL_FLOOP_FREEZE_LANE = 0;  

	// prepare for cont_cal
	//lnx_TXDCC_CAL_STOP_SEL_LANE = 0; //removed. use CAL_DONE
	//lnx_RXDCC_DLL_CAL_STOP_SEL_LANE = 0;	
	//lnx_RXDCC_DATA_CAL_STOP_SEL_LANE = 0;	
	//lnx_RXDCC_EOM_CAL_STOP_SEL_LANE = 0;	
	reg_TX_TDTAP_SEL_LANE = 1; 
	reg_TXDCCCAL_EN_LANE = 0;
	lnx_DLL_VDDA_TRACKING_ON_LANE = 1;
	vdd_cnt = 0;
	dcc_cont = 0;
	
	if( phy_mode == PCIE ) {
		pre_ringpll_rate = PLL_RATE_SEL_RING;
		pre_lcpll_rate = PLL_RATE_SEL;
	}		
	
	SYNC_SATUS_PLL_OR_PLL_OFF = 0;
	PHY_STATUS = ST_SPDCHG;

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
	
	cont_cal_on = 1;
	do {
		switch(cont_cal_inx) {
		case 0:
			tsen_dat = read_tsen();
			if(ring_lane_sel && reg_ANA_PLL_CLK_READY_RING && cmx_RINGPLL_CAL_CONT_EN) ring_pll_cont(); 
		break;
		case 1:
			if( lnx_CAL_VDD_CONTINUOUS_MODE_EN_LANE ) {
				if( SYNC_LINE_HOLD_READ == SYNC_IDLE) {
					SYNC_LINE_HOLD = mcuid;
					delay01(10);
					if( SYNC_LINE_HOLD_READ == mcuid ) {	
						if(vdd_cnt==SELLV_TXDATA && cmx_TXDETECT_CAL_CONT_EN )	
							txdetect_cal();
						else	
#ifdef ROM_REPLACEMENT
							vdd_cal_sel_01(vdd_cnt);
#else
							vdd_cal_sel(vdd_cnt);
#endif
						vdd_cnt++;
						if(vdd_cnt>5) vdd_cnt = 0;	
						SYNC_LINE_HOLD = SYNC_IDLE;
					}	
				}
			}	
			break;
		case 2: if(cmx_ALIGN90_CAL_CONT_EN) find_align90_lock(); break; //phase_lookup_tracking(1); break;
		case 3: if( cmx_RXDLL_CAL_CONT_EN ) dll_vdda_cal(DLL_PHASE_STEP);	break;
		case 4:	if( cmx_EOM_DLL_CAL_CONT_EN ) dll_eom_vdda_cal(DLL_PHASE_STEP); break;
		case 5:		
			switch(dcc_cont) {
			case 0: rxdcc_dll_cal_01(); break;	
			case 1: rxdcc_data_cal_01(); break;
			case 2: rxdcc_eom_cal_01(); break;
			case 3: if(reg_TX_SPEED_DIV_LANE_2_0==0) txdcc_cal_01();
					else txdcc_pdiv_cal_01();	break;
			case 4: if(mcuid==master_mcu && cmx_PLLDCC_CAL_CONT_EN && reg_ANA_PLL_CLK_READY 
					#ifdef _28G_X4_R2P1
					&& reg_LCPLLCLK_DIV2_SEL==1
					#endif
				) {
				reg_ANA_CMN_IMPCAL_OUT_REQ = 1;
				plldcc_cal();	
				}
				break;
			}
			dcc_cont++;
			if(dcc_cont>4) dcc_cont = 0;	
		break;
		case 6:	
			if( mcuid==master_mcu) {
				if( timeout == 0 ) break;			
				if( cmx_PLL_TEMP_CAL_CONT_EN && reg_ANA_PLL_CLK_READY) {
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
			}	
		break;	
		case 7:	
			if(mcuid==master_mcu) {
				//if( timeout2 == 0) break;
				//timeout2_start((uint16_t)100);
				if(cmx_PLLAMP_CAL_CONT_EN==1 && reg_ANA_PLL_CLK_READY) pll_amp_cal_cont();	
			}	
		break;	
		}
	} while( PHY_NS==ST_INIT &&  cont_cal_inx++<8);

	//no need
	//if( PHY_NS!=ST_INIT ) {
	//	if( mcuid==master_mcu && cmx_PLL_TEMP_CAL_CONT_EN )
	//		pll_temp_force_idle();
	//}
	
	cont_cal_on = 0;
		
}

/*
void load_cal_data_all(void) {
	if(force_exit_cal)return;
	
	LOAD_CAL_ON = 1;
	
	if(mcuid==master_mcu) {
		reg_ANA_CMN_IMPCAL_OUT_REQ = 1;
		plldcc_cal();
		pll_amp_cal_cont();
	}
	dll_gm_cal();
	dll_vdda_cal(DLL_PHASE_STEP);
	dll_eom_gm_cal();
	dll_eom_vdda_cal(DLL_PHASE_STEP);
	rxalign90_cal();
	rxdcc_dll_cal_01();
	rxdcc_data_cal_01();
	rxdcc_eom_cal_01();
	txdcc_cal_01();
	txdcc_pdiv_cal_01();
	//txdetect_cal();  for SAS spdchg time
	//vdd_cal(); //TODO

	LOAD_CAL_ON = 0;
	
}
*/


/*
void load_cal_data_dll(void) {
	if(force_exit_cal)return;
	
	LOAD_CAL_ON = 1;
	dll_gm_cal();
	dll_vdda_cal(DLL_PHASE_STEP);
	dll_eom_gm_cal();
	dll_eom_vdda_cal(DLL_PHASE_STEP);
	rxalign90_cal();

	LOAD_CAL_ON = 0;
	
}
*/

void mcu_align_0(void) {
	if(serdes_ring_lane_en) return;
	
	PHY_CHECK_LANE = 0; 
	while((PHY_CHECK_LANE0_READ|PHY_CHECK_LANE1_READ|PHY_CHECK_LANE2_READ|PHY_CHECK_LANE3_READ));
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


void all_cal_ext(void) {
	BIT	lc_pll_rate, ring_pll_rate;

	if(phy_mode==SERDES) {
		loadspeedtbl_gen();	
		if(gen_pll_rate==pre_gen_pll_rate) return;	
	}

	if( mcuid==master_mcu ) {
		
		pll_clk_ready_0();			

		//reg_ANA_PROCESS_VALUE_3_0 = 0x08;
		reg_LCVCO_DAC_LSB_4_0 = 0x10;
		reg_LCVCO_DAC_MSB_2_0 = 0x02;
		//reg_LCCAP_LSB_4_0 = 0x10;
		reg_LCCAP_MSB_3_0 = 0;
		//reg_TEMPC_MUX_SEL_3_0 = 2; //gray code. bi=3
		//reg_TEMPC_MUX_HOLD_SEL_3_0 = 2;
		/*cmx_CAL_PLL_SPEED_RING_R1_7_0 = 0x10;
		cmx_CAL_PLL_SPEED_RING_R0_7_0 = 0x10;
		cmx_CAL_PLL_SLLP_DAC_COARSE_RING_R1_7_0 = 0x8;
		cmx_CAL_PLL_SLLP_DAC_COARSE_RING_R0_7_0 = 0x8;
		cmx_CAL_SLLP_DAC_FINE_RING_R1_15_0 = 0x384;
	    cmx_CAL_SLLP_DAC_FINE_RING_R0_15_0 = 0x384;*/

		if( phy_mode==SERDES ) {
			lc_pll_rate = 0; ring_pll_rate = 0;
			loadspeedtbl_pll(lc_pll_rate);
		}
		else {
		
			if( lc_pll_used ) {
				if(use_ring_pll) { lc_pll_rate = !tx_pll_rate; ring_pll_rate = tx_pll_rate; }				
				else {	lc_pll_rate = tx_pll_rate; ring_pll_rate = !tx_pll_rate; }			
				
				loadspeedtbl_pll(lc_pll_rate);
			}	
			else {	lc_pll_rate = !tx_pll_rate; ring_pll_rate = tx_pll_rate; }
		}			

		reg_RESET_ANA = 0;
		pll_clk_ready_1();
	}
	//Turn the debug info off temporally, to save code size for the new eom
	/*reg_MCU_DEBUG0_LANE_7_0 = 0x32;
	reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
	reg_MCU_DEBUG2_LANE_7_0 = gen_rx;
	reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
	reg_MCU_DEBUG4_LANE_7_0 = max_gen;
	reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
	reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
	reg_MCU_DEBUG7_LANE_7_0 = tx_pll_rate;
	reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;*/
	
	if( ring_lane_sel ) 	
	{
		if( phy_mode==SERDES ) 	{ ring_pll_rate = 0; }
		
		if(ring_pll_enabled) {
			pll_clk_ready_ring_0();
			loadspeedtbl_ringpll(ring_pll_rate);
			
			reg_PLL_SPEED_RING_4_0 = 0x10;
			reg_PLL_SLLP_DAC_COARSE_RING_3_0 = 0x8;
			reg_PLL_SLLP_DAC_FINE_RING_10_8 = 0x3;
			reg_PLL_SLLP_DAC_FINE_RING_7_0 = 0x84;
			reg_PLL_SLLP_DAC_RANGE_SHIFT_RING_1_0 = 0;

			reg_ANA_PU_PLL_RING = 1;
			delay01(5);
			reg_ANA_PU_PLL_DLY_RING = 1;
			delay01(5);
			reg_RESET_ANA_RING = 0;					
			pll_clk_ready_ring_1();
			ring_pll_enabled = 1;
		}	
		else reg_RING_PLL_DISABLE = 1;
	} 
	 
	check_pll_clk_ready();

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
	//DTL_DTX_DFE_clkoff_reset_0(); 

}

void clear_normal_mode_cal_en(void) {

	//clear pending isr
	TRX_TRAIN_IF_INTERRUPT_LANE.BT.B0 = 0; 
	TRX_TRAIN_IF_INTERRUPT_LANE.BT.B1 = 0; 
	RX_LANE_INTERRUPT.BT.B3 = 0; //clear frame_lock/unlock_isr
	
	if(reg_PIN_PLL_READY_RX_LANE==0 || reg_PIN_PLL_READY_TX_LANE==0) {
		//TX_TRAIN_CTRL_LANE.BT.B0 &= 0x02; //0000_0010
		//TX_TRAIN_CTRL_LANE.BT.B2 &= 0x0f; //0000_1111
		//TX_TRAIN_CTRL_LANE.BT.B3 &= 0xa0; //1010_0000	
		TX_TRAIN_CTRL_LANE.VAL &= 0xa01f0002; 
	}
/*	
	if(SPD_CTRL_INTERRUPT_REG1_LANE.BT.B3 != 0) {
		reg_PIN_PLL_READY_RX_LANE = 0;
		reg_PIN_PLL_READY_TX_LANE = 0;
		PHY_STATUS = ST_SPDCHG;
		SPD_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0;
	}
*/
	if( reg_INT_POWER_STATE_VALID_RISE_ISR_LANE ) {
		if( reg_PIN_PU_PLL_RD_LANE==0 || reg_PIN_PU_TX_RD_LANE==0 ) { 
				reg_PIN_PLL_READY_TX_LANE = 0;
				reg_PIN_PLL_READY_RX_LANE = 0;
				PHY_STATUS = ST_P2; 
		}		
		else  if( reg_PIN_PU_RX_RD_LANE==0 ) {
				reg_PIN_PLL_READY_RX_LANE = 0;
				PHY_STATUS = ST_P1;
		}
		
	}
	else if( (PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 & 0xe0) && (phy_mode != PCIE) && (phy_mode != USB)) {
	
			if(reg_PIN_PU_PLL_RD_LANE == 0){
				reg_PIN_PLL_READY_TX_LANE    = 0;
				reg_PIN_PLL_READY_RX_LANE    = 0;				
                PHY_STATUS = ST_SLUMBER;
            }
            else {
				if(reg_PIN_PU_TX_RD_LANE == 0) {
					reg_PIN_PLL_READY_TX_LANE    = 0;
					reg_ANA_PU_TX_LANE = 0;
				}
				else {
					reg_ANA_PU_TX_LANE = 1;
					reg_PIN_PLL_READY_TX_LANE    = 1;
				}
				
				if(reg_PIN_PU_RX_RD_LANE == 0){
					reg_PIN_PLL_READY_RX_LANE    = 0;
					PHY_STATUS = ST_PSLUMBER_RX;
				}
				else {
					do_wake = 1;						
				}	
			}
	}
	
	PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0; 
	PM_CTRL_INTERRUPT_REG1_LANE.BT.B2 = 0;	

	if(	cont_cal_on==0) return;
	cont_cal_on = 0;
	
	//clear cal sync
	if(mcuid== master_mcu) 
		pll_temp_jump_idle();
	reg_ALIGN90_SYN_CLK_LANE = 0;		
	reg_RXDCC_DAC_SYNC_CLK_LANE = 0;
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 0;
	reg_RXDCC_EN_DLLCLK_LANE = 0;
	reg_RXDCC_EN_DATACLK_LANE = 0;
	reg_RXDCC_EN_EOMCLK_LANE = 0;
	reg_RXDCC_HG_DLLCLK_LANE = 0;
	reg_RXDCC_HG_DATACLK_LANE = 0;
	reg_RXDCC_HG_EOMCLK_LANE = 0;
	reg_TRX_IMPCAL_CLK = 0;
	reg_LCPLL_DCC_CLK = 0;
	reg_PLL_SLLP_DAC_VALID_RING = 0;
	reg_RXDCC_CAL_EN_LANE = 0;
	reg_TXDCCCAL_EN_LANE = 0;
	reg_TXDCCCAL_PDIV_EN_LANE = 0;
	reg_TX_TDCAL_EN_LANE = 0;	
	reg_PLL_CAL_EN_RING = 0;
	reg_LCPLL_DCC_CAL_EN = 0;
	
}


		
