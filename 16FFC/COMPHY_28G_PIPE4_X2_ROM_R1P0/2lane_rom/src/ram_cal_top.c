/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file cal_top_ram.c
* \purpose cal_top ram code
* \History
*	8/1/2019 Heejeong Ryu		Initial 
*/

#include "common.h"

#ifdef USE_BANKING
#pragma codeseg BANK3
#pragma constseg BANK3
#endif

#define TEMPC_DAC_SEL						reg_TEMPC_DAC_SEL_7_0
#define TEMPC_DAC_VAILD						reg_TEMPC_DAC_VALID 
#define TEMPC_MUX_SEL						reg_TEMPC_MUX_SEL_3_0
#define TEMPC_MUX_HOLD_SEL					reg_TEMPC_MUX_HOLD_SEL_3_0

void load_init_temp_table_ram(void) BANKING_CTRL {


	if( cmx_PLL_TEMP_CAL_EXT_EN ) {
		cmx_PLL_TEMP_CAL_DONE = 1;
		return;
	}

	TEMPC_DAC_VAILD = 0;
	TEMPC_DAC_SEL = 0;
	tempc_step_state = 0;

	if (tsen_dat < -377)	//less than -20 celcius
	{
		tempc_mux_sel_2c = 0; //3;
	}
	else if (tsen_dat >= -377 && tsen_dat < -301)	//-20 to 10 celcius
	{
		tempc_mux_sel_2c = 1; //4;
	}
	else if (tsen_dat >= -301 && tsen_dat < -226)	//10 to 40 celcius
	{
		tempc_mux_sel_2c = 3; //5;
	}
	else if (tsen_dat >= -226 && tsen_dat < -149)	//40 to 70 celcius
	{
		tempc_mux_sel_2c = 4; //6;
	}
	else if (tsen_dat >= -149 && tsen_dat < -73)	//70 to 100 celcius
	{
		tempc_mux_sel_2c = 5; //7;
	}
	else if (tsen_dat >= -73)	//greater than 100 celcius
	{
		tempc_mux_sel_2c = 6; //8;
	}

	tempc_mux_hold_sel_2c = tempc_mux_sel_2c + 1;
	TEMPC_MUX_SEL = tempc_mux_sel_2c ^ (tempc_mux_sel_2c>>1);
	TEMPC_MUX_HOLD_SEL = tempc_mux_hold_sel_2c ^ (tempc_mux_hold_sel_2c>>1);

	cmx_PLL_TEMP_CAL_DONE = 1;
	
}

/**
 * \module Calibration Top
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
*/
#ifndef SUPPORT_CAL_MEMORY_OPT

void Calibration_ram(void) BANKING_CTRL {

	uint8_t rate, inx, genno, save_FBCK_SEL, save_FBCK_SEL_RING, dtx_off;
	
	lnx_CAL_DONE_LANE = 0;
	PHY_CHECK_LANE = 0;
	reg_DFE_ADAPT_CONT_LANE = 0;
	reg_DFE_START_LANE = 0;

	gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_3_0; gen_tx = min(gen_tx, cmx_PHY_GEN_MAX_3_0);
	gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_3_0; gen_rx = min(gen_rx, cmx_PHY_GEN_MAX_3_0);  	

	for(genno=min_gen; genno<= max_gen; genno++) {  
		if(speedtable[genno][spdoft_tx_ck_sel_lane] == 1 || speedtable[genno][spdoft_rx_ck_sel_lane] == 1) ring_pll_enabled = 1;	
		else 	lc_pll_used = 1;
	}
	
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
	if( mcuid== master_mcu || (cmx_TX_LANE_ALIGN_OFF&&reg_TSEN_ADC_RD_REQ==0)) {
		reg_TSEN_ADC_CAL_1_0 = 0x2; //Automatic self-offset-cal enforced, TSENE_ADC in normal mode.
		CMN_CALIBRATION.BT.B1 = 0x08; //reg_ANA_TSEN_ADC_RESET = 0;		
		CMN_CALIBRATION.BT.B1 = 0x09; //reg_ANA_TSEN_ADC_EN = 1;
		CMN_CALIBRATION.BT.B1 = 0x0d; //reg_ANA_TSEN_ADC_START = 1;
		reg_TSEN_ADC_RD_REQ = 1;	
		
		if(cmx_FAST_POWER_ON_EN) {
			reg_ANA_TSEN_ADC_RDY_FM_REG = 1;
			reg_ANA_TSEN_ADC_RDY = 1;
		}
	}

	tsen_dat = read_tsen();
	
	if( force_exit_cal ) {
		// set all to *cal_ext_en=1
		CONTROL_CONFIG1.VAL = 0x0ffffffc;		
		all_cal_ext();
		goto skip_out; //test
	}
	
	reg_RX_INIT_DONE_LANE = 0; //??	
	//reg_DFE_MCU_CLK_EN_LANE = 1;
	reg_ANA_TX_IDLE_FORCE_LANE = 1;
	reg_ANA_TX_IDLE_LANE = 1;
	reg_EOM_CLK_EN_LANE = 1;
	reg_TX_TDTAP_SEL_LANE = 0; 
	lnx_DLL_VDDA_TRACKING_ON_LANE = 0;

	
/*	reg_MCU_DEBUG0_LANE_7_0 = 0x31;
	reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
	reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
	reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
	reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;
	reg_MCU_DEBUG9_LANE_7_0 = slave_phy_on;
*/	
	// --- CAL start
	if((gen_pll_rate!=pre_gen_pll_rate && SPDCHG_ON_READ) || 
	(!SPDCHG_ON_READ) || phy_mode!=SERDES) {

	 if( mcuid== master_mcu ) {
		cmx_CAL_START=0; 
				
		if(!SPDCHG_ON_READ)	proc_cal();
		
		reg_RING_PLL_DISABLE = !ring_pll_enabled;
 	 }

	mcu_align_0(10);
	 
	 if( mcuid== master_mcu ) {
	  		//master_sync_request();			

		// --- PLL LOOP --
		
		pll_clk_ready_0();			
		
		if(phy_mode==PCIE || phy_mode<=SAS) rate = 1;	
		else rate = 0;
		for(inx=0; inx<2; inx++) {
			
		//reg_MCU_DEBUG0_LANE_7_0 = 0x10;
		//reg_MCU_DEBUG6_LANE_7_0 = rate + 0x70;
		
			loadspeedtbl_pll(rate);				
			load_init_temp_table_ram();

			if(slave_phy_on==0) {
				pll_clk_ready_0();			
				reg_RESET_ANA = 0;
				#ifdef SUPPORT_SHRTR_PATCH
				pll_cal_ram();
				#else
				pll_cal();					
				#endif
				pll_clk_ready_1();
				plldcc_cal();		
			}
			
			if( no_pllspdchg ) break; //SERDAS always use LC PLL rate0
			if( phy_mode == SERDES ) break;
			//if(force_exit_cal) break;		  	

			if(phy_mode==PCIE  || phy_mode<=SAS) rate = 0;	
			else rate = 1;			
		}
		
		if(slave_phy_on)
			check_master_phy_status(CHECK_MP_PLL_CAL_LOOP_DONE);

		if(slave_phy_on==0) PHY_STATUS_INT |= LCPLL_CAL_LOOP_DONE;
		
		//master_sync_clean();		
	 } //else { slave_sync_wait(); }
	
	mcu_align_0(11);	 
	 
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
				
				reg_ANA_PU_PLL_RING = 1;
				delay01(5);
				reg_ANA_PU_PLL_DLY_RING = 1;
				delay01(5);
				reg_RESET_ANA_RING = 0;					
				
				if(slave_phy_on==0) 
					ring_pll_cal();				
	
				if( no_pllspdchg ) break;  
				if( phy_mode == SERDES ) break; //SERDAS always use rate0
			}	
				
			if(slave_phy_on) 
				check_master_phy_status(CHECK_MP_PLL_CLK_READY_RING_ON);
			
			pll_clk_ready_ring_1();	
		
		}
		else reg_RING_PLL_DISABLE = 1;

		//master_sync_clean();		
	  } //else { slave_sync_wait(); }
	}
	
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
					PHY_CHECK_LANE = 1;			
				}
				else while(PHY_CHECK_LANE0_READ!=1);
			}

			if( mcu_en1) {
				if( mcuid==MCU_LANE1)	{
					vdd_cal();		
					PHY_CHECK_LANE = 1;			
				}
				else while(PHY_CHECK_LANE1_READ!=1);
			}			
		}
		
		if(!SPDCHG_ON_READ)
		{	
			mcu_align_0(21);	

			if( mcu_en0) {
				if( mcuid==MCU_LANE0)	{
					txdetect_cal();		
					PHY_CHECK_LANE = 2;			
				}
				else while(PHY_CHECK_LANE0_READ!=2);
			}

			if( mcu_en1) {
				if( mcuid==MCU_LANE1)	{
					txdetect_cal();		
					PHY_CHECK_LANE = 2;			
				}
				else while(PHY_CHECK_LANE1_READ!=2);
			}			
		}

		rxdcc_dll_cal();
		dll_cal();
		rxdcc_data_cal();
		rxdcc_eom_cal();		
		//eom_align_cal();	removed		
		align90_comp_cal();		
		rxalign90_cal(); 			
		txdcc_cal();
		txdcc_pdiv_cal();		
	 
		if( phy_mode==SERDES ) break; //SERDAS always use one gen
	} 

	if(SPDCHG_ON_READ) goto skip_out;
	
	reg_RX_PULSE_SHORTB_LANE = 0;
	sampler_cal();	
	reg_RX_PULSE_SHORTB_LANE = 1;
	
	// At the end of sampler_cal, both clock sources (MCU_CLK and RX_CLK) for DFE clock are turned off.
	// Changed here because sampler_cal is in ROM. (ROMFREEZE)
	reg_DFE_CLK_OFF_LANE = 0; // Select RX_CLK source for DFE clock (future ROM_UPDATE: Move to sampler_cal)
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
				PHY_CHECK_LANE = 3;			
			}
			else while(PHY_CHECK_LANE0_READ!=3);	
		}
		
		//rximp lane1
		if(mcu_en1) {
			if(mcuid==MCU_LANE1)	{
				rximp_cal();  
				PHY_CHECK_LANE = 3;			
			}
			else while(PHY_CHECK_LANE1_READ!=3);	
		}
		
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
				tximp_cal();  PHY_CHECK_LANE = 5;			
			}
			else while(PHY_CHECK_LANE0_READ!=5);			
		}	
		
		//tximp lane1
		if(mcu_en1) {
			if( mcuid==MCU_LANE1 )	{
				tximp_cal();  PHY_CHECK_LANE = 5;			
			}
			else while(PHY_CHECK_LANE1_READ!=5);	
		}
				
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
	#ifndef SUPPORT_SHRTR_PATCH
	reg_SHRTR = 0; //recover
	#endif
	
	SYNC_SATUS_PLL_OR_PLL_OFF = 0;

	lnx_CAL_DONE_LANE = 1;
	
	// to avoid pwrseq_on and dtx_clk_off_ring access conflict
	if(reg_PWRON_SEQ) {
		if((master_mcu==MCU_LANE0 && mcuid==MCU_LANE0) || (master_mcu==MCU_LANE1 && mcuid==MCU_LANE1))	{
			reg_PWRON_SEQ = 0;  	
		}
		else while(reg_PWRON_SEQ);					
	}			
	if( phy_mode == PCIE ) {
		pre_ringpll_rate = PLL_RATE_SEL_RING;
		pre_lcpll_rate = PLL_RATE_SEL;
	}

	pwrsq_on = 0;
	
	if(serdes_ring_lane_en==0)	
		PHY_STATUS = ST_SPDCHG;
	else {
		if(reg_PIN_PU_PLL_RD_LANE) PHY_STATUS = ST_SPDCHG;
		else PHY_STATUS = ST_SLUMBER;
	}	

}	
#endif


void Cal_Cont_ram(void) BANKING_CTRL {
	uint8_t cont_cal_inx = 0;
	
	if(cmx_FORCE_CONT_CAL_SKIP) return;
	
	cont_cal_on = 1;
	do {
		switch(cont_cal_inx) {
		case 0:
		tsen_dat = read_tsen();
		if(ring_lane_sel && slave_phy_on==0 && reg_ANA_PLL_CLK_READY_RING && cmx_RINGPLL_CAL_CONT_EN) ring_pll_cont(); 
		break;
		case 1:
			if( lnx_CAL_VDD_CONTINUOUS_MODE_EN_LANE ) {
				if( SYNC_LINE_HOLD_READ == SYNC_IDLE) {
					SYNC_LINE_HOLD = mcuid;
					delay01(10);
					if( SYNC_LINE_HOLD_READ == mcuid ) {	
						if(vdd_cnt==SELLV_TXDATA && cmx_TXDETECT_CAL_CONT_EN && reg_PIN_PLL_READY_TX_LANE)	
							txdetect_cal();
						else {
							if((vdd_cnt<SELLV_RXEOMCLK && reg_PIN_PU_TX_RD_LANE) || (vdd_cnt>SELLV_TXPRE && reg_PIN_PLL_READY_RX_LANE))	//Skip t/rx cal when pu_px=0
							vdd_cal_sel(vdd_cnt);
						}	
						vdd_cnt++;
						if(vdd_cnt>5) vdd_cnt = 0;	
						SYNC_LINE_HOLD = SYNC_IDLE;
					}	
				}
			}	
			break;
		case 2: if(cmx_ALIGN90_CAL_CONT_EN && rx_init_done)  find_align90_lock(); break; //phase_lookup_tracking(1); break;
		case 3: if( cmx_RXDLL_CAL_CONT_EN && rx_init_done ) dll_vdda_cal(DLL_PHASE_STEP);	break;
		case 4:	if( cmx_EOM_DLL_CAL_CONT_EN && rx_init_done ) dll_eom_vdda_cal(DLL_PHASE_STEP); break;
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
			case 4: if(mcuid==master_mcu && slave_phy_on==0 && cmx_PLLDCC_CAL_CONT_EN && reg_ANA_PLL_CLK_READY) 
					plldcc_cal();	break;
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
			if(mcuid==master_mcu && slave_phy_on==0  && reg_ANA_PLL_LOCK_RD) {
				//if( timeout2 == 0) break;
				//timeout2_start((uint16_t)100);
				if(cmx_PLLAMP_CAL_CONT_EN==1) pll_amp_cal_cont();	
			}	
		break;	
		}
	} while( PHY_NS==ST_INIT &&  cont_cal_inx++<8);

	//no need
	//if( PHY_NS!=ST_INIT ) {
	//	if( mcuid==master_mcu && slave_phy_on==0 && cmx_PLL_TEMP_CAL_CONT_EN )
	//		pll_temp_force_idle();
	//}
	
	cont_cal_on = 0;
		
}
