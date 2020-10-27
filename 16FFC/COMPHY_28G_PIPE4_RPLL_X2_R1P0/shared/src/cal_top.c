/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file cal_top.c
* \purpose calibration call
* \History
*	10/13/2015 Heejeong Ryu		Initial 
*/
#include "common.h"

#ifdef USE_BANKING
#pragma codeseg BANK1
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
void Calibration(void) BANKING_CTRL {

	//uint8_t rate, inx, genno, save_FBCK_SEL, save_FBCK_SEL_RING, dtx_off;
	uint8_t rate, inx, genno, dtx_off;
	reg_PIN_GPO_LANE_7_0 |= 0x02; //lab monitor

	
	#ifdef _SATA_SERDES_BUILD	
	reg_INT_ENABLE_ALL_LANE = 0; 
	SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0xc0;
	SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0;
	#endif 

	lnx_CAL_DONE_LANE = 0;
	//PHY_CHECK_LANE = 0;
	phy_check_lane(0);
	reg_DFE_ADAPT_CONT_LANE = 0;
	reg_DFE_START_LANE = 0;

	gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_3_0; gen_tx = min(gen_tx, cmx_PHY_GEN_MAX_3_0);
	gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_3_0; gen_rx = min(gen_rx, cmx_PHY_GEN_MAX_3_0);

	for(genno=min_gen; genno<= max_gen; genno++) {  
		if(speedtable[genno][spdoft_tx_ck_sel_lane] == 1 || speedtable[genno][spdoft_rx_ck_sel_lane] == 1) ring_pll_enabled = 1;
		else 	lc_pll_used = 1;
	}
	#ifdef _LANE_RPLL
	ring_pll_enabled = 1;
	#endif
	
	genno = gen_tx;
	#ifdef _SATA_SERDES_BUILD
	if(phy_mode==SERDES) { 
		genno = min(reg_PIN_PHY_GEN_TX_RD_LANE_3_0, cmx_PHY_GEN_MAX_3_0);
		genno = get_gen_memory_index(genno);
	}	
	#endif
	
	gen_pll_rate = speedtable[genno][spdoft_pll_rate_sel_tx];
	if(gen_pll_rate>1 || phy_mode==SERDES) { tx_pll_rate = 0; tx_pll_rate_x = 0; }
	else { tx_pll_rate = gen_pll_rate; tx_pll_rate_x = gen_pll_rate; }
	use_ring_pll = speedtable[genno][spdoft_tx_ck_sel_lane];
	// Loading tableA during speed change caused error if other lanes use LC PLL
	// Only lood the default table during the power on calibration
	if (!SPDCHG_ON_READ && mcuid== master_mcu)
		load_rpll_cmn_clk_mux_tableA();

	#ifdef _SATA_SERDES_BUILD
	#ifdef _LANE_RPLL
	if (phy_mode==SERDES) {
		if (gen_pll_rate < 4) {
			use_ring_pll = 1;
			ring_lane_sel = 1;

			switch(mcuid)
			{
			    case MCU_LANE0:
				cmx_LANE0_LCPLL_SEL_7_0 = 0;
				break;
			    case MCU_LANE1:
				cmx_LANE1_LCPLL_SEL_7_0 = 0;
				break;
			    case MCU_LANE2:
				cmx_LANE2_LCPLL_SEL_7_0 = 0;
				break;
			    case MCU_LANE3:
				cmx_LANE3_LCPLL_SEL_7_0 = 0;
				break;
			}
		} else {
			use_ring_pll = 0;
			ring_lane_sel = 0;
			switch(mcuid)
			{
			    case MCU_LANE0:
				cmx_LANE0_LCPLL_SEL_7_0 = 1;
				break;
			    case MCU_LANE1:
				cmx_LANE1_LCPLL_SEL_7_0 = 1;
				break;
			    case MCU_LANE2:
				cmx_LANE2_LCPLL_SEL_7_0 = 1;
				break;
			    case MCU_LANE3:
				cmx_LANE3_LCPLL_SEL_7_0 = 1;
				break;
			}

		}
	}
	#endif

	if(phy_mode==SERDES && SPDCHG_ON_READ) {
		dtx_off = pre_gen_pll_rate != gen_pll_rate;
		if(dtx_off) {
			if(serdes_ring_lane_en) {
				if(ring_lane_sel) pll_clk_ready_ring_0();
				#ifndef _LANE_RPLL
				// Don't turn off the pll clk during speed change
				else pll_clk_ready_0();
				#endif
			}
			else if(mcuid == master_mcu) {
				#ifndef _LANE_RPLL
				// Don't turn off the pll clk during speed change
				pll_clk_ready_0();
				#endif
				if(ring_pll_enabled) pll_clk_ready_ring_0();
			}
		}	
		#ifdef _LANE_RPLL
		// Keep DTX on during speed change
		// TODO - don't turn off DTX if one of the lane is using LC PLL
			DTL_DFE_clkoff_reset_1(dtx_off);
		#else
			DTL_DTX_DFE_clkoff_reset_1(dtx_off); //(mcuid == master_mcu) && (pre_gen_pll_rate != gen_pll_rate));
		#endif
	}
	#endif  // _SATA_SERDES_BUILD

	//-----------
	//enable TSEN
	if( mcuid== master_mcu || (cmx_TX_LANE_ALIGN_OFF && reg_TSEN_ADC_RD_REQ==0)) {
		reg_TSEN_ADC_CAL_1_0 = 0x2; //Automatic self-offset-cal enforced, TSENE_ADC in normal mode.
		reg_ANA_TSEN_ADC_RESET = 0;
		reg_ANA_TSEN_ADC_EN = 1;
		reg_ANA_TSEN_ADC_START = 1;
		reg_TSEN_ADC_RD_REQ = 1;
		
		if (cmx_FAST_POWER_ON_EN) {
			reg_ANA_TSEN_ADC_RDY_FM_REG = 1;
			reg_ANA_TSEN_ADC_RDY = 1;
		}
	}

	tsen_dat = read_tsen();
	
	if( force_exit_cal ) {
		// set all to *cal_ext_en=1
		CONTROL_CONFIG1.VAL = 0x0ffffffc;
		all_cal_ext();
		load_rpll_cmn_clk_mux_tableB();
		goto skip_out; //test
	}
	
	reg_RX_INIT_DONE_LANE = 0; //??	
	//reg_DFE_MCU_CLK_EN_LANE = 1;
	reg_ANA_TX_IDLE_FORCE_LANE = 1;
	reg_ANA_TX_IDLE_LANE = 1;
	reg_EOM_CLK_EN_LANE = 1;
	reg_TX_TDTAP_SEL_LANE = 0;
	lnx_DLL_VDDA_TRACKING_ON_LANE = 0;

	
	reg_MCU_DEBUG0_LANE_7_0 = 0x31;
	reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
	reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
	reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
	reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;
	reg_MCU_DEBUG9_LANE_7_0 = slave_phy_on;
	
	// --- CAL start
#ifdef _LANE_RPLL
	if ((gen_pll_rate!=pre_gen_pll_rate && SPDCHG_ON_READ && ring_lane_sel) || 
#else
	if ((gen_pll_rate!=pre_gen_pll_rate && SPDCHG_ON_READ) || 
#endif
	  (!SPDCHG_ON_READ) || phy_mode!=SERDES) {

		if( mcuid== master_mcu ) {
			cmx_CAL_START=0;
		
			if(!SPDCHG_ON_READ)	proc_cal();

			reg_RING_PLL_DISABLE = !ring_pll_enabled;
		}

		mcu_align_0(10);

		#ifdef _LANE_RPLL
		// For RPLL, should never turn off common LC clock during speed change
		if (mcuid==master_mcu && !SPDCHG_ON_READ) {
		#else
		if (mcuid == master_mcu) {
		#endif
			//master_sync_request();

			// --- PLL LOOP --
		
			pll_clk_ready_0();
		
			if(phy_mode==PCIE || phy_mode<=SAS) rate = 1;
			else rate = 0;
			for(inx=0; inx<2; inx++) {
			
				reg_MCU_DEBUG0_LANE_7_0 = 0x10;
				reg_MCU_DEBUG6_LANE_7_0 = rate + 0x70;
		
				loadspeedtbl_pll(rate);
				load_init_temp_table();

				if(slave_phy_on==0) {
					pll_clk_ready_0();
					reg_RESET_ANA = 0;
					pll_cal();
					pll_clk_ready_1();

					//reg_ANA_CMN_IMPCAL_OUT_REQ = 1;  //TODO - do we need this?
					#ifdef _32G_ANA
					if (reg_LCPLLCLK_DIV2_SEL == 0) {
						reg_LCPLL_DCC_5_0 = 0x20; //if LCPLLCLK_DIV2_SEL=0, need to set default
						cmx_PLLDCC_CAL_DONE = 1; cmx_PLLDCC_CAL_PASS = 1;
					}
					else
					#endif
						plldcc_cal();
				}
			
				if( no_pllspdchg ) break; //SERDES always use LC PLL rate0
				if( phy_mode == SERDES ) break;
				//if(force_exit_cal) break;

				if(phy_mode==PCIE  || phy_mode<=SAS) rate = 0;
				else rate = 1;
			}
		
			//if(slave_phy_on)
			//	check_master_phy_status(CHECK_MP_PLL_CAL_LOOP_DONE);

			if(slave_phy_on==0) PHY_STATUS_INT |= LCPLL_CAL_LOOP_DONE;
		
			//master_sync_clean();
		}// else { slave_sync_wait(); }
	
		mcu_align_0(11);
	}
		// --- RING PLL ---
		if( ring_lane_sel ) {
			//master_sync_request();
	
			if( ring_pll_enabled ) {
			
				pll_clk_ready_ring_0();
			
				for(rate=0; rate<2; rate++) {
					//debug	
					//reg_MCU_DEBUG0_LANE_7_0 = 0x20;
					//reg_MCU_DEBUG6_LANE_7_0 = rate + 0x70;
				
					loadspeedtbl_ringpll(rate);
				
					#ifdef _LANE_RPLL
					reg_ANA_PU_RPLL_RING_LANE = 1;
					delay01(5);
					reg_ANA_PU_RPLL_DLY_RING_LANE = 1;
					delay01(5);
					reg_ANA_TX_RESET_ANA_RPLL_LANE = 0;
					#else // CMN_RPLL
					reg_ANA_PU_PLL_RING = 1;
					delay01(5);
					reg_ANA_PU_PLL_DLY_RING = 1;
					delay01(5);
					reg_RESET_ANA_RING = 0;
					#endif
				
					//if(slave_phy_on==0)
					ring_pll_cal();
	
					if( no_pllspdchg ) break;  
					if( phy_mode == SERDES ) break; //SERDAS always use rate0
				}	
				
				//if(slave_phy_on)
				//	check_master_phy_status(CHECK_MP_PLL_CLK_READY_RING_ON);
			
				pll_clk_ready_ring_1();
		
			}
			else reg_RING_PLL_DISABLE = 1;

			//master_sync_clean();
		}// else { slave_sync_wait(); }
	

	mcu_align_0(12);

	//--- GEN LOOP --- 
	for(genno = min_gen; genno<=max_gen; genno++)  
	{
		gen_rx = genno;	gen_tx = genno;
		
		if(phy_mode==SERDES) { //serdes need to calibrate on own speed
			loadspeedtbl_gen();
		}
		else {
			loadSpeedtbl();
		}
		
		//debug
		/*reg_MCU_DEBUG0_LANE_7_0 = 0x30;
		reg_MCU_DEBUG6_LANE_7_0 = gen_tx + 0x70;
		reg_MCU_DEBUG5_LANE_7_0 = min_gen;
		reg_MCU_DEBUG4_LANE_7_0 = max_gen;
*/
		//----
		if(!SPDCHG_ON_READ)
		{
			mcu_align_0(20);

			if( mcu_en0) {
				if( mcuid==MCU_LANE0)	{
					vdd_cal();
					//PHY_CHECK_LANE = 1;
					phy_check_lane(1);
				}
				else while(PHY_CHECK_LANE0_READ!=1);
			}
                        
                        #if defined _RPLL_X2 || defined _RPLL_X4
			if( mcu_en1) {
				if( mcuid==MCU_LANE1)	{
					vdd_cal();
					//PHY_CHECK_LANE = 1;
					phy_check_lane(1);
				}
				else while(PHY_CHECK_LANE1_READ!=1);
			}
                        #endif
			
			#ifdef _RPLL_X4
			if( mcu_en2) {
				if( mcuid==MCU_LANE2)	{
					vdd_cal();
					//PHY_CHECK_LANE = 1;
					phy_check_lane(1);
				}
				else while(PHY_CHECK_LANE2_READ!=1);
			}

			if( mcu_en3) {
				if( mcuid==MCU_LANE3)	{
					vdd_cal();
					//PHY_CHECK_LANE = 1;
					phy_check_lane(1);
				}
				else while(PHY_CHECK_LANE3_READ!=1);
			}
			#endif
		}
		
		if(!SPDCHG_ON_READ)
		{
			mcu_align_0(21);

			if( mcu_en0) {
				if( mcuid==MCU_LANE0)	{
					txdetect_cal();
					//PHY_CHECK_LANE = 2;
					phy_check_lane(2);
				}
				else while(PHY_CHECK_LANE0_READ!=2);
		 	}

                        #if defined _RPLL_X2 || defined _RPLL_X4
			if( mcu_en1) {
				if( mcuid==MCU_LANE1)	{
					txdetect_cal();
					//PHY_CHECK_LANE = 2;
					phy_check_lane(2);
				}
				else while(PHY_CHECK_LANE1_READ!=2);
			}
			#endif

			#ifdef _RPLL_X4
			if( mcu_en2) {
				if( mcuid==MCU_LANE2)	{
					txdetect_cal();
					//PHY_CHECK_LANE = 2;
					phy_check_lane(2);
				}
				else while(PHY_CHECK_LANE2_READ!=2);
			}

			if( mcu_en3) {
				if( mcuid==MCU_LANE3)	{
					txdetect_cal();
					//PHY_CHECK_LANE = 2;
					phy_check_lane(2);
				}
				else while(PHY_CHECK_LANE3_READ!=2);
			}
			#endif
			
		}

		rxdcc_dll_cal();
		dll_cal();
		rxdcc_data_cal();
		rxdcc_eom_cal();
		//eom_align_cal();	removed
		reg_ALIGN90_REF_LANE_5_0 = 0x1e;
		align90_comp_cal();
		load_rpll_cmn_clk_mux_tableB();
		rxalign90_cal();
		txdcc_cal();
		txdcc_pdiv_cal();
	
		if( phy_mode==SERDES ) break; //SERDAS always use one gen
	}

	if(SPDCHG_ON_READ) goto skip_out;

	if(phy_mode == SERDES)
		reg_PATH_DISABLE_EDGE_LANE = 0;

    reg_RX_PULSE_SHORTB_LANE = 0;
	sampler_cal();
    reg_RX_PULSE_SHORTB_LANE = 1;
	squelch_cal();
	
	//-- rximp
	{
	
		mcu_align_0(22);
		
		if(mcuid == master_mcu) reg_RXIMPCAL_EN = 1;
		else while(reg_RXIMPCAL_EN==0);
	
		//rximp lane0
		if( mcu_en0) {
			if(mcuid==MCU_LANE0) {
				rximp_cal();
				//PHY_CHECK_LANE = 3;
				phy_check_lane(3);
			}
			else while(PHY_CHECK_LANE0_READ!=3);
		}
		
		#if defined _RPLL_X2 || defined _RPLL_X4
		//rximp lane1
		if(mcu_en1) {
			if(mcuid==MCU_LANE1)	{
				rximp_cal();
				//PHY_CHECK_LANE = 3;
				phy_check_lane(3);
			}
			else while(PHY_CHECK_LANE1_READ!=3);
		}
		#endif

		#ifdef _RPLL_X4
		//rximp lane2
		if(mcu_en2) {
			if(mcuid==MCU_LANE2)	{
				rximp_cal();
				//PHY_CHECK_LANE = 3;
				phy_check_lane(3);
			}
			else while(PHY_CHECK_LANE2_READ!=3);
		}
		//rximp lane3
		if(mcu_en3) {
			if(mcuid==MCU_LANE3 )	{
				rximp_cal();
				//PHY_CHECK_LANE = 3;
				phy_check_lane(3);
			}
			else while(PHY_CHECK_LANE3_READ!=3);
		}
		#endif
		
		if(mcuid == master_mcu)
			reg_RXIMPCAL_EN = 0;
		else while(reg_RXIMPCAL_EN);
	}
	
	//-- tximp
	{	
		mcu_align_0(24);

		if(mcuid == master_mcu) reg_TXIMPCAL_EN = 1;
		else while(reg_TXIMPCAL_EN==0);

		//tximp lane0
		if( mcu_en0) {
			if( mcuid==MCU_LANE0 )	{
				tximp_cal();  phy_check_lane(5);  //PHY_CHECK_LANE = 5;
			}
			else while(PHY_CHECK_LANE0_READ!=5);
		}
               
		#if defined _RPLL_X2 || defined _RPLL_X4
		//tximp lane1
		if(mcu_en1) {
			if( mcuid==MCU_LANE1 )	{
				tximp_cal();  phy_check_lane(5);  //PHY_CHECK_LANE = 5;
			}
			else while(PHY_CHECK_LANE1_READ!=5);
		}
                #endif
		
		#ifdef _RPLL_X4
		//tximp lane2
		if(mcu_en2) {
			if( mcuid==MCU_LANE2 ) 	{
				tximp_cal();  phy_check_lane(5);  //PHY_CHECK_LANE = 5;
			}
			else while(PHY_CHECK_LANE2_READ!=5);
		}
		//tximp lane3
		if(mcu_en3) {
			if( mcuid==MCU_LANE3 )	{
				tximp_cal();  phy_check_lane(5);  //PHY_CHECK_LANE = 5;
			}
			else while(PHY_CHECK_LANE3_READ!=5);
		}
		#endif
		
		reg_TXIMPCAL_EN = 0;
	}
	// --- 
	
	mcu_align_0(0);

skip_out:

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
	reg_SHRTR = 0; //recover
	
	SYNC_SATUS_PLL_OR_PLL_OFF = 0;

	lnx_CAL_DONE_LANE = 1;
	reg_PIN_GPO_LANE_7_0 &= 0xfb; //lab monitor
	
	// to avoid pwrseq_on and dtx_clk_off_ring access conflict
	if(reg_PWRON_SEQ) {
		if(
			(master_mcu==MCU_LANE0 && mcuid==MCU_LANE0)	
                #if defined _RPLL_X2 || defined _RPLL_X4       
		||	(master_mcu==MCU_LANE1 && mcuid==MCU_LANE1)
                #endif
		#ifdef _RPLL_X4
		||      (master_mcu==MCU_LANE2 && mcuid==MCU_LANE2) 
		||      (master_mcu==MCU_LANE3 && mcuid==MCU_LANE3)
		#endif
		) {
			reg_PWRON_SEQ = 0;
		}
		else while(reg_PWRON_SEQ);
	}
	if( phy_mode == PCIE ) {
		pre_ringpll_rate = PLL_RATE_SEL_RING;
		pre_lcpll_rate = PLL_RATE_SEL;
	}

	pre_phy_gen = reg_PIN_PHY_GEN_TX_RD_LANE_3_0;

	pwrsq_on = 0;

	reg_INT_ENABLE_ALL_LANE = 1; 
    EA = 1;
	
	if(serdes_ring_lane_en==0)
		PHY_STATUS = ST_SPDCHG;
	else {
		if(reg_PIN_PU_PLL_RD_LANE) PHY_STATUS = ST_SPDCHG;
		else PHY_STATUS = ST_SLUMBER;
	}
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
void Cal_Cont(void) BANKING_CTRL {
	//uint8_t cont_cal_inx = 0;
	
	if(cmx_FORCE_CONT_CAL_SKIP) return;
	
	cont_cal_on = 1;
	//do {
		switch(cont_cal_inx) {
		case 0:
		tsen_dat = read_tsen();
#ifdef _LANE_RPLL
		if(ring_lane_sel && /*slave_phy_on==0 &&*/ reg_ANA_TX_CLK_READY_RPLL_LANE && cmx_RINGPLL_CAL_CONT_EN)
#else // CMN_RPLL
		if(ring_lane_sel && /*slave_phy_on==0 &&*/ reg_ANA_PLL_CLK_READY_RING && cmx_RINGPLL_CAL_CONT_EN)
#endif
			ring_pll_cont();
		break;
		case 1:
			if( lnx_CAL_VDD_CONTINUOUS_MODE_EN_LANE ) {
				//if( SYNC_LINE_HOLD_READ == SYNC_IDLE) {
				//	SYNC_LINE_HOLD = mcuid;
				//	delay01(10);
					//if( SYNC_LINE_HOLD_READ == mcuid ) {
						if(vdd_cnt==SELLV_TXDATA && cmx_TXDETECT_CAL_CONT_EN && reg_PIN_PLL_READY_TX_LANE)
							txdetect_cal();
						else {
							if((vdd_cnt<SELLV_RXEOMCLK && reg_PIN_PU_TX_RD_LANE) || (vdd_cnt>SELLV_TXPRE && reg_PIN_PLL_READY_RX_LANE))	//Skip t/rx cal when pu_px=0
							vdd_cal_sel(vdd_cnt);
						}
						vdd_cnt++;
						if(vdd_cnt>5) vdd_cnt = 0;
					//	SYNC_LINE_HOLD = SYNC_IDLE;
					//}
				//}
			}
			break;
		case 2: if(cmx_ALIGN90_CAL_CONT_EN && rx_init_done)  find_align90_lock(); break; //phase_lookup_tracking(1); break;
		case 3: if( cmx_RXDLL_CAL_CONT_EN && rx_init_done) dll_vdda_cal(DLL_PHASE_STEP);	break;
		case 4:	if( cmx_EOM_DLL_CAL_CONT_EN && rx_init_done) dll_eom_vdda_cal(DLL_PHASE_STEP); break;
		case 5:	
			switch(dcc_cont) {
			case 0: if(rx_init_done) rxdcc_dll_cal(); break;
			case 1: if(rx_init_done) rxdcc_data_cal(); break;
			case 2: if(rx_init_done) rxdcc_eom_cal(); break;
			case 3: if(reg_PIN_PU_TX_RD_LANE) {
						if(reg_TX_SPEED_DIV_LANE_2_0==0) txdcc_cal();
						else txdcc_pdiv_cal();
					}
					break;
			case 4: if(mcuid==master_mcu && slave_phy_on==0 && cmx_PLLDCC_CAL_CONT_EN && reg_ANA_PLL_CLK_READY
					#ifdef _32G_ANA
					&& reg_LCPLLCLK_DIV2_SEL==1
					#endif
					) {
					//reg_ANA_CMN_IMPCAL_OUT_REQ = 1;  // TODO - Do we need this?
					plldcc_cal();
					}
				break;
			}
			dcc_cont++;
			if(dcc_cont>4) dcc_cont = 0;	
		break;
		case 6:	
			reg_MCU_DEBUG0_LANE_7_0 = timeout;
			if( mcuid==master_mcu && slave_phy_on==0 && reg_ANA_PLL_CLK_READY) {
				if( timeout == 0 ) break;
				if( cmx_PLL_TEMP_CAL_CONT_EN) {
					pll_temp_cal();
					if(BYPASS_DELAY==0) {
						if((tempc_step_state&0xf0) == 0x10) { timeout_start((uint16_t)5); }
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
			if(mcuid==master_mcu && slave_phy_on==0  && reg_ANA_PLL_LOCK_RD) {
				//if( timeout2 == 0) break;
				//timeout2_start((uint16_t)100);
				if(cmx_PLLAMP_CAL_CONT_EN==1) pll_amp_cal_cont();
			}
		break;
		}
	//} while( PHY_NS==ST_INIT &&  cont_cal_inx++<8);

	//no need
	//if( PHY_NS!=ST_INIT ) {
	//	if( mcuid==master_mcu && slave_phy_on==0 && cmx_PLL_TEMP_CAL_CONT_EN )
	//		pll_temp_force_idle();
	//}
	
	cont_cal_inx++;
    if(cont_cal_inx>7) cont_cal_inx = 0;
	
	cont_cal_on = 0;
	
}
/*
void load_cal_data_all(void) {
	if(force_exit_cal)return;
	
	LOAD_CAL_ON = 1;
	
	if(mcuid==master_mcu && slave_phy_on==0) {
		plldcc_cal();
		pll_amp_cal_cont();
	}
	dll_gm_cal();
	dll_vdda_cal(DLL_PHASE_STEP);
	dll_eom_gm_cal();
	dll_eom_vdda_cal(DLL_PHASE_STEP);
	rxalign90_cal();
	rxdcc_dll_cal();
	rxdcc_data_cal();
	rxdcc_eom_cal();
	txdcc_cal();
	txdcc_pdiv_cal();
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

void phy_check_lane(uint8_t val) BANKING_CTRL {
	PHY_CHECK_LANE = val;
	if (mcuid == MCU_LANE0)
		PHY_CHECK_LANE0 = val;
#if defined _RPLL_X2 || defined _RPLL_X4       
	if (mcuid == MCU_LANE1)
		PHY_CHECK_LANE1 = val;
#endif
#ifdef _RPLL_X4       
	if (mcuid == MCU_LANE2)
		PHY_CHECK_LANE2 = val;
	if (mcuid == MCU_LANE3)
		PHY_CHECK_LANE3 = val;
#endif
}

void mcu_align_0(uint8_t val) BANKING_CTRL {
	#ifdef _SATA_SERDES_BUILD
	if(phy_mode==SERDES && SPDCHG_ON_READ) return;
	#endif
	
	//PHY_CHECK_LANE = val;
	phy_check_lane(val);
	while ((PHY_CHECK_LANE0_READ != val)
#if defined _RPLL_X2 || defined _RPLL_X4       
	 || (PHY_CHECK_LANE1_READ != val)
#endif
#ifdef _RPLL_X4       
	 || (PHY_CHECK_LANE2_READ != val) || (PHY_CHECK_LANE3_READ != val)
#endif
	 ) {

		if(SYNC_STATUS_LANE0_EN_READ==0 || SYNC_STATUS_LANE1_EN_READ==0) break;
		short_delay();
	}
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


void all_cal_ext(void) BANKING_CTRL {
	BIT	lc_pll_rate, ring_pll_rate;

	loadspeedtbl_gen();
	if(phy_mode==SERDES) {
		if(gen_pll_rate==pre_gen_pll_rate) return;
	}

	if( mcuid==master_mcu ) {
		
		// Don't turn off the pll clk during speed change
		if(!SPDCHG_ON_READ)
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
		}
		else {
			if( lc_pll_used ) {
				if(use_ring_pll) { lc_pll_rate = !tx_pll_rate; ring_pll_rate = tx_pll_rate; }
				else {	lc_pll_rate = tx_pll_rate; ring_pll_rate = !tx_pll_rate; }
			}
			else {	lc_pll_rate = !tx_pll_rate; ring_pll_rate = tx_pll_rate; }
		}
		
		PLL_RATE_SEL = tx_pll_rate;
		loadspeedtbl_pll(lc_pll_rate);
		
		reg_RESET_ANA = 0;
		
		//if(slave_phy_on)
		//	check_master_phy_status(CHECK_MP_PLL_CLK_READY_ON);
		// Don't turn off/on the pll clk during speed change
		if(!SPDCHG_ON_READ)
			pll_clk_ready_1();
		
	}
	#ifdef _LANE_RPLL
	else {
		if( phy_mode==SERDES ) {
			ring_pll_rate = 0;
		}
		else {
			if( lc_pll_used ) {
				if(use_ring_pll) { ring_pll_rate = tx_pll_rate; }
				else { ring_pll_rate = !tx_pll_rate; }
			}
			else { ring_pll_rate = tx_pll_rate; }
		}
	}
	#endif

	reg_MCU_DEBUG0_LANE_7_0 = 0x32;
	reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
	reg_MCU_DEBUG2_LANE_7_0 = gen_rx;
	reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
	reg_MCU_DEBUG4_LANE_7_0 = max_gen;
	reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
	reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
	reg_MCU_DEBUG7_LANE_7_0 = tx_pll_rate;
	reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;
	
	reg_RING_PLL_DISABLE = !ring_pll_enabled;
	if( ring_lane_sel )
	{
		if( phy_mode==SERDES ) { ring_pll_rate = 0; }
		
		if(ring_pll_enabled) {
			pll_clk_ready_ring_0();
			loadspeedtbl_ringpll(ring_pll_rate);

#ifdef _LANE_RPLL
			reg_PLL_SPEED_RING_LANE_4_0 = 0x10;
			reg_PLL_SLLP_DAC_COARSE_RING_LANE_3_0 = 0x8;
			reg_PLL_SLLP_DAC_FINE_RING_LANE_10_8 = 0x3;
			reg_PLL_SLLP_DAC_FINE_RING_LANE_7_0 = 0x84;
			reg_PLL_SLLP_DAC_RANGE_SHIFT_RING_LANE_1_0 = 0;

			reg_ANA_PU_RPLL_RING_LANE = 1;
			delay01(5);
			reg_ANA_PU_RPLL_DLY_RING_LANE = 1;
			delay01(5);
			reg_ANA_TX_RESET_ANA_RPLL_LANE = 0;
#else // CMN_RPLL
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
#endif

			//if(slave_phy_on) 
			//	check_master_phy_status(CHECK_MP_PLL_CLK_READY_RING_ON);
			pll_clk_ready_ring_1();

		}
	}
	
	if(serdes_ring_lane_en==0)
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

void clear_normal_mode_cal_en(void) BANKING_CTRL {
	//uint8_t val;
	
	//clear pending isr
	//if(reg_PIN_PAPTA_TRAIN_ENABLE_ISR_LANE && reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE) {
	//	reg_REMOTE_CTRL_FIELD_HIGH_LANE = 1; //tigger PIN_REMOTE_CTRL_FIELD_READY to 1.
	//	reg_REMOTE_CTRL_FIELD_HIGH_LANE = 0;
	//	do_rx_apta = 1;
	//}

	//PIN_RX_TRAIN_ENABLE_ISR/PIN_TX_TRAIN_ENABLE_ISR/REMOTE_STATUS_VALID_ISR_CLEAR_LANE/REMOTE_CTRL_VALID_ISR_CLEAR_LANE
	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.VAL = 0x00040303;
	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.VAL = 0;
	RX_LANE_INTERRUPT_REG1.BT.B3 = 0x60;
	RX_LANE_INTERRUPT_REG1.BT.B3 = 0;

#ifdef _SATA_SERDES_BUILD    
	if(do_train && phy_mode==SERDES) {
		do_train = 0;
        //per Xunzhi of Voltron request:
        //  In case of reset between txtrain complete and txtrain en down
        // Tests show txtrain en falling int would be missed
        reg_PT_EN_LANE = save_pt_en_lane;
        reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = save_pt_tx_pattern_sel_lane_5_0_b0;
        reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = save_pt_tx_pattern_sel_lane_5_0_b1;
        
        #ifdef SUPPORT_ETHERNET_SEL_BIT_CTRL
        reg_TX_SEL_BITS_LANE = tx_sel_bit; reg_RX_SEL_BITS_LANE = rx_sel_bit; 
        #endif    
	}		
#endif

	if(reg_PIN_PLL_READY_RX_LANE==0 || reg_PIN_PLL_READY_TX_LANE==0) {
	#ifdef SUPPORT_APTA_TX_TRAIN
		TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B0 = 0x08; //APTA
		TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B0 = 0;
	#endif
		// Have to clear *_TRAIN_COMP/FAILED!
		//TX_TRAIN_CTRL_LANE.BT.B0 &= 0x02; //0000_0010
		//TX_TRAIN_CTRL_LANE.BT.B2 &= 0x1f; //0001_1111
		//TX_TRAIN_CTRL_LANE.BT.B3 &= 0xa0; //1010_0000
		TX_TRAIN_CTRL_LANE.VAL &= 0xa01f0002;
	}
	
	/*
	if(SPD_CTRL_INTERRUPT_REG1_LANE.BT.B3 != 0) {
		if(reg_INT_PHY_GEN_RX_CHG_ISR_LANE) {
			SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0x40;
			SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0;
			reg_PIN_PLL_READY_RX_LANE = 0;
		}
		if(reg_INT_PHY_GEN_TX_CHG_ISR_LANE) {
			SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0x80;
			SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0;
			reg_PIN_PLL_READY_TX_LANE = 0;
		}
		PHY_STATUS = ST_SPDCHG;
	}
	*/
#ifdef _PCIE_USB_BUILD
	if( reg_INT_POWER_STATE_VALID_RISE_ISR_LANE ) { //Need P0 to P2 time reduce for Lane Disable
		if( reg_PIN_PU_PLL_RD_LANE==0 || reg_PIN_PU_TX_RD_LANE==0 ) {
			reg_PIN_PLL_READY_TX_LANE = 0;
			reg_PIN_PLL_READY_RX_LANE = 0;
			PHY_STATUS = ST_P2;
		}
		else if( reg_PIN_PU_RX_RD_LANE==0 ) {
			reg_PIN_PLL_READY_RX_LANE = 0;
			PHY_STATUS = ST_P1;
		}
		PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0x13; // reg_INT_REFCLK_DIS_CHG_ISR_LANE, reg_INT_POWER_STATE_VALID_RISE_ISR_LANE, reg_INT_PU_PLL_OR_CHG_ISR_LANE
		PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0;
	}
	
	if(reg_DPHY_ANA_LANE_DISABLE_ISR_LANE) {
		switch(mcuid) {
		case MCU_LANE0:
			cmx_LANE_DIS_LANE0_7_0 = reg_LANE_DISABLE_RD_LANE;
			break;
                #if defined _RPLL_X2 || defined _RPLL_X4       
		case MCU_LANE1:
			cmx_LANE_DIS_LANE1_7_0 = reg_LANE_DISABLE_RD_LANE;
			break;
		#endif	
		#ifdef _RPLL_X4
		case MCU_LANE2:
			cmx_LANE_DIS_LANE2_7_0 = reg_LANE_DISABLE_RD_LANE;
			break;
		case MCU_LANE3:
			cmx_LANE_DIS_LANE3_7_0 = reg_LANE_DISABLE_RD_LANE;
			break;
		#endif
		}

		PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B2 = 0x02; //reg_DPHY_ANA_LANE_DISABLE_ISR_CLEAR_LANE
		PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B2 = 0;

		if ( 
			cmx_LANE_DIS_LANE0_7_0  
                #if defined _RPLL_X2 || defined _RPLL_X4       
	     	  &&	cmx_LANE_DIS_LANE1_7_0
		#endif
		#ifdef _RPLL_X4
		  && cmx_LANE_DIS_LANE2_7_0 && cmx_LANE_DIS_LANE3_7_0
		#endif
		) {
			reg_LANE_ALIGN_READY_OUT = 1; //control sequence to de-glitch
			reg_LANE_ALIGN_READY_OUT_FORCE = 1;
			reg_TXCLK_SYNC_START_OUT = 1;
		}
	}
	
#endif
/*
#ifdef _SATA_SERDES_BUILD
	if( PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 & 0xe0 ) {
		if(reg_PIN_PU_PLL_RD_LANE == 0) {
			reg_PIN_PLL_READY_TX_LANE = 0;
			reg_PIN_PLL_READY_RX_LANE = 0;
			PHY_STATUS = ST_SLUMBER;
		}
		else {
			if(reg_PIN_PU_TX_RD_LANE == 0) {
				reg_PIN_PLL_READY_TX_LANE = 0;
				reg_ANA_PU_TX_LANE = 0;
			}
			else {
				reg_ANA_PU_TX_LANE = 1;
				reg_PIN_PLL_READY_TX_LANE = 1;
			}

			if(reg_PIN_PU_RX_RD_LANE == 0 & cmx_FORCE_PARTIAL_PU_RX_ON==0) {
				reg_PIN_PLL_READY_RX_LANE = 0;
				PHY_STATUS = ST_PSLUMBER_RX;
			}
		}

		PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0xe0;
		PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0;
	}
#endif
*/
	//PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0; //HR: Don't have to open! it makes to miss rx_init corner case
	//PM_CTRL_INTERRUPT_REG1_LANE.BT.B2 = 0;	??
	
	//if(reg_PHY_MCU_REMOTE_REQ_ISR_LANE) {
	//	reg_PHY_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 1;
	//	reg_PHY_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 0;
	//}
	
	//if((PHY_STATUS != ST_APTA_TXTRAIN) || (PHY_STATUS == ST_APTA_TXTRAIN && reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE==0 )) 
	{		
		//if(reg_PHY_MCU_REMOTE_REQ_LANE==0) 
		//	lnx_PHY_MCU_LOCAL_ACK_LANE = 0;
		//else
		if(PHY_MCU_REMOTE_REQ_LANE) {
			lnx_PHY_LOCAL_STATUS_LANE_7_0 = 0x2; //NOT_VAILD
			lnx_PHY_MCU_LOCAL_ACK_LANE = 1;
		}
	}
	
	//if(reg_MCU_REMOTE_REQ_ISR) {
	//	reg_MCU_REMOTE_REQ_ISR_CLEAR = 1;
	//	reg_MCU_REMOTE_REQ_ISR_CLEAR = 0;
	//}
	//reg_MCU_LOCAL_ACK = 0;

	//reg_DFE_ADAPT_CONT_LANE = 0;
	//reg_DFE_START_LANE = 0;
	
	// ----
	if( cont_cal_on==0) return;
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
	reg_RXDCC_CAL_EN_LANE = 0;
	reg_TXDCCCAL_EN_LANE = 0;
	reg_TXDCCCAL_PDIV_EN_LANE = 0;
	reg_TX_TDCAL_EN_LANE = 0;
	reg_LCPLL_DCC_CAL_EN = 0;
	#ifdef _LANE_RPLL
	reg_PLL_SLLP_DAC_VALID_RING_LANE = 0;
	reg_PLL_CAL_EN_RING_LANE = 0;
	#else // CMN_RPLL
	reg_PLL_SLLP_DAC_VALID_RING = 0;
	reg_PLL_CAL_EN_RING = 0;
	#endif
}

