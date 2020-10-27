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

	uint8_t rate, inx, genno, save_FBCK_SEL, save_FBCK_SEL_RING, dtx_off;

	reg_PIN_GPO_LANE_7_0 |= 0x02; //lab monitor
	
	lnx_CAL_DONE_LANE = 0;
	PHY_CHECK_LANE = 0;
	reg_DFE_ADAPT_CONT_LANE = 0;
	reg_DFE_START_LANE = 0;
	reg_TXDCCCAL_PDIV_EN_LANE = 0; //HR: prevent txdcc_pdiv_cal stuck after txdcc_pdiv patch

	gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_3_0; gen_tx = min(gen_tx, cmx_PHY_GEN_MAX_3_0);
	gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_3_0; gen_rx = min(gen_rx, cmx_PHY_GEN_MAX_3_0);  	

	for(genno=min_gen; genno<= max_gen; genno++) {  
		if(speedtable[genno][spdoft_tx_ck_sel_lane] == 1 || speedtable[genno][spdoft_rx_ck_sel_lane] == 1) ring_pll_enabled = 1;	
		else 	lc_pll_used = 1;
	}
	
	genno = gen_tx;
	#ifdef _SERDES_BUILD
	if(phy_mode==SERDES) { 
		genno = min(reg_PIN_PHY_GEN_TX_RD_LANE_3_0, cmx_PHY_GEN_MAX_3_0);
		genno = get_gen_memory_index(genno);
	}	
	#endif
	
	gen_pll_rate = speedtable[genno][spdoft_pll_rate_sel_tx]; 
	if(gen_pll_rate>1 || phy_mode==SERDES) { tx_pll_rate = 0; tx_pll_rate_x = 0; }
	else { tx_pll_rate = gen_pll_rate; tx_pll_rate_x = gen_pll_rate; }	
	use_ring_pll = speedtable[genno][spdoft_tx_ck_sel_lane];

	#ifdef _SERDES_BUILD
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
	
	reg_RX_INIT_DONE_LANE = 0; 
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



	 if( mcuid== master_mcu && reg_ANA_PU_PLL ) {

		// --- PLL LOOP --
		
		pll_clk_ready_0();			
		
		if(phy_mode==PCIE || phy_mode<=SAS) rate = 1;	
		else rate = 0;
		for(inx=0; inx<2; inx++) {
			
		//reg_MCU_DEBUG0_LANE_7_0 = 0x10;
		//reg_MCU_DEBUG6_LANE_7_0 = rate + 0x70;
		        
			#ifdef _SATA_SERDES_BUILD
			#if SUPPORT_ANA_POWERSAVING 
			if(phy_mode==SAS) { 
			        if(rate == 0)
					power_reduction(4);
				else
					power_reduction(3);
			}
			#endif
			#endif
		
			loadspeedtbl_pll(rate);				
			load_init_temp_table();

			if(slave_phy_on==0) {
				pll_clk_ready_0();			
				reg_RESET_ANA = 0;
				pll_cal();					
				pll_clk_ready_1();
				plldcc_cal();		
			}
			
			#ifdef _SATA_SERDES_BUILD
			if( no_pllspdchg ) break; //SERDAS always use LC PLL rate0
			if( phy_mode == SERDES ) break;
			if( phy_mode <= SAS && cmx_PHY_GEN_MAX_3_0 < 0x4 ) break;
			#endif
			//if(force_exit_cal) break;		  	

			if(phy_mode==PCIE  || phy_mode<=SAS) rate = 0;	
			else rate = 1;			
		}
		
		#ifdef _PCIE_USB_BUILD
		if(slave_phy_on) {
			delay01(5000); //0.5ms
			check_master_phy_status(CHECK_MP_PLL_CAL_LOOP_DONE);
		}	
		if(slave_phy_on==0) PHY_STATUS_INT |= LCPLL_CAL_LOOP_DONE;
		#endif
		
		pll_clk_ready_1(); //fix shared pll mode calibration in slave phy
	 }
	
	mcu_align_0(11);	 
	 
#ifndef SUPPORT_SAS_LC_ONLY	 
	 // --- RING PLL ---	
	  if( ring_lane_sel ) {
	
		if( ring_pll_enabled ) {
			
			pll_clk_ready_ring_0();
			
			for(rate=0; rate<2; rate++) {
				//debug			
				//reg_MCU_DEBUG0_LANE_7_0 = 0x20;
				//reg_MCU_DEBUG6_LANE_7_0 = rate + 0x70;
				
				#ifdef _SATA_SERDES_BUILD
				#if SUPPORT_ANA_POWERSAVING 
				if(phy_mode==SAS) { 
					power_reduction(rate);
				}
				#endif
				#endif
				loadspeedtbl_ringpll(rate);
								
				reg_ANA_PU_PLL_RING = 1;
				delay01(5);
				reg_ANA_PU_PLL_DLY_RING = 1;
				delay01(5);
				reg_RESET_ANA_RING = 0;					
				if(slave_phy_on==0) {
					ring_pll_cal();				
				}
				
								if( no_pllspdchg ) break;  
                #ifdef _SERDES_BUILD
				if( phy_mode == SERDES ) break; //SERDAS always use rate0
				#endif
			}	
			
			#ifdef _PCIE_USB_BUILD	
			if(slave_phy_on) {
				delay01(5000); //0.5ms
				check_master_phy_status(CHECK_MP_PLL_CLK_READY_RING_ON);
			}	
			#endif
			
			pll_clk_ready_ring_1();	
		
		}
		else reg_RING_PLL_DISABLE = 1;

	  }
#endif
	}
	
	mcu_align_0(12);	
	
	//--- GEN LOOP --- 
		
	for(genno = min_gen; genno<=max_gen; genno++)  
	{
		gen_rx = genno;	gen_tx = genno;				
		
		#ifdef _SATA_SERDES_BUILD
		#if SUPPORT_ANA_POWERSAVING 
		if(phy_mode==SAS) { 
			power_reduction(genno);
		}
		#endif
		#ifdef _SERDES_BUILD
		if(phy_mode==SERDES) { //serdes need to calibrate on own speed 	 		
			loadspeedtbl_gen();
		}
		else 
		#endif	
		#endif	
		{
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
				#if SUPPORT_ANA_POWERSAVING 

					if(phy_mode!=SAS)
				#endif
				       	{ 
						vdd_cal();
					}
					PHY_CHECK_LANE = 1;			
				}
				else while(PHY_CHECK_LANE0_READ!=1);
			}

			if( mcu_en1) {
				if( mcuid==MCU_LANE1)	{
				#if SUPPORT_ANA_POWERSAVING 
					if(phy_mode!=SAS) 
				#endif
					{ 
						vdd_cal();
					}
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
		reg_ALIGN90_REF_LANE_5_0 = 0x1e;
		align90_comp_cal();		
		rxalign90_cal(); 			
		txdcc_cal();
		txdcc_pdiv_cal();		
	 
		#ifdef _SERDES_BUILD
		if( phy_mode==SERDES ) break; //SERDAS always use one gen
        #endif
	} 

	if(SPDCHG_ON_READ) goto skip_out;
	
	#ifdef _SERDES_BUILD
	if(phy_mode==SERDES)  
		reg_PATH_DISABLE_EDGE_LANE = 0;
    #endif
	reg_RX_PULSE_SHORTB_LANE = 0;
	sampler_cal();	
	//sampler_cal_ram();	
	reg_RX_PULSE_SHORTB_LANE = 1;

	#ifdef _SERDES_BUILD
	if(phy_mode==SERDES)  
		loadspeedtbl_gen();		
    #endif

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
	    //mcu_align_0(24); //no need
		
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
				
		if(mcuid == master_mcu) reg_TXIMPCAL_EN = 0;
	}
	// --- 
	
	//mcu_align_0(0); //no need

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
	reg_TXDCCCAL_PDIV_EN_LANE = 1;
	lnx_DLL_VDDA_TRACKING_ON_LANE = 1;
	vdd_cnt = 0;
	dcc_cont = 0;
	if(cmx_FORCE_LCPLL_SHRTR_1==0)reg_SHRTR = 0; //recover
	
	SYNC_SATUS_PLL_OR_PLL_OFF = 0;

	lnx_CAL_DONE_LANE = 1;
	reg_PIN_GPO_LANE_7_0 &= 0xfb; //lab monitor

	if(pwrsq_on)
		init_irq();
	
	// to avoid pwrseq_on and dtx_clk_off_ring access conflict
	if(mcuid==master_mcu)	{
		reg_PWRON_SEQ = 0;  	
	}
	while(reg_PWRON_SEQ);					

	//#ifdef _PCIE_USB_BUILD
	//if( phy_mode == PCIE ) {
		pre_ringpll_rate = PLL_RATE_SEL_RING;
		pre_lcpll_rate = PLL_RATE_SEL;
	//}
	//#endif

	pwrsq_on = 0;
	
	#ifdef _SATA_SERDES_BUILD	
	if(serdes_ring_lane_en==0)	
		PHY_STATUS = ST_SPDCHG;
	else {
		if(reg_PIN_PU_PLL_RD_LANE && reg_PIN_PU_RX_RD_LANE && reg_PIN_PU_TX_RD_LANE) PHY_STATUS = ST_SPDCHG;
		else PHY_STATUS = ST_SLUMBER;		
	}
	#else
	PHY_STATUS = ST_SPDCHG;		
	#endif

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

	if(cmx_FORCE_CONT_CAL_SKIP) return;
	
	cont_cal_on = 1;
	//do {
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
		case 3: if( cmx_RXDLL_CAL_CONT_EN && rx_init_done) dll_vdda_cal(DLL_PHASE_STEP);	break;
		case 4:	if( cmx_EOM_DLL_CAL_CONT_EN && rx_init_done) 
			{
                #ifdef SUPPORT_SAS_EOM_POWERSAVING	
                if(cmx_EOM_POWERSAVING_EN == 0)
                #endif
			    	dll_eom_vdda_cal(DLL_PHASE_STEP); 

			    break;
			}
		case 5:		
			switch(dcc_cont) {
			case 0: if(rx_init_done) rxdcc_dll_cal(); break;	
			case 1: if(rx_init_done) rxdcc_data_cal(); break;
			case 2: if(rx_init_done)
                #ifdef SUPPORT_SAS_EOM_POWERSAVING	
                if(cmx_EOM_POWERSAVING_EN == 0)
                #endif
                        rxdcc_eom_cal(); 
                    break;
			case 3: if(reg_PIN_PU_TX_RD_LANE) {
						if(reg_TX_SPEED_DIV_LANE_2_0==0) txdcc_cal();
						else txdcc_pdiv_cal_ram(); 
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
	//} while( PHY_NS==ST_INIT &&  cont_cal_inx++<8);

	//no need
	//if( PHY_NS!=ST_INIT ) {
	//	if( mcuid==master_mcu && slave_phy_on==0 && cmx_PLL_TEMP_CAL_CONT_EN )
	//		pll_temp_force_idle();
	//}
	cont_cal_inx++;
    if(cont_cal_inx>7) cont_cal_inx = 0;
	
	cont_cal_on = 0;
	
	PHY_STATUS = ST_NORMAL;
		
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

void mcu_align_0(uint8_t val) BANKING_CTRL {
	#ifdef _SERDES_BUILD
	if(phy_mode==SERDES && SPDCHG_ON_READ) return;
	#endif
	
	PHY_CHECK_LANE = val; 
	while((PHY_CHECK_LANE0_READ!=val||PHY_CHECK_LANE1_READ!=val)){
		if(SYNC_STATUS_LANE0_EN_READ==0 || SYNC_STATUS_LANE1_EN_READ==0) break;				
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
	#ifdef _SERDES_BUILD
	if(phy_mode==SERDES) {
		if(gen_pll_rate==pre_gen_pll_rate) return;	
	}
    #endif

	if( mcuid==master_mcu && lc_pll_used) {
		
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

	    #ifdef _SERDES_BUILD
		if( phy_mode==SERDES ) {
			lc_pll_rate = 0; ring_pll_rate = 0;
		}
		else 
        #endif
        {
		
			//if( lc_pll_used ) 
			{
				if(use_ring_pll) { lc_pll_rate = !tx_pll_rate; ring_pll_rate = tx_pll_rate; }				
				else {	lc_pll_rate = tx_pll_rate; ring_pll_rate = !tx_pll_rate; }			
			}	
			//else {	lc_pll_rate = !tx_pll_rate; ring_pll_rate = tx_pll_rate; }
		}
			
		PLL_RATE_SEL = tx_pll_rate; 
		loadspeedtbl_pll(lc_pll_rate);
		
		reg_RESET_ANA = 0;
		
		if(slave_phy_on)
			check_master_phy_status(CHECK_MP_PLL_CLK_READY_ON);			
		pll_clk_ready_1();		
		
	}

/*	reg_MCU_DEBUG0_LANE_7_0 = 0x32;
	reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
	reg_MCU_DEBUG2_LANE_7_0 = gen_rx;
	reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
	reg_MCU_DEBUG4_LANE_7_0 = max_gen;
	reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
	reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
	reg_MCU_DEBUG7_LANE_7_0 = tx_pll_rate;
	reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;
*/	
	reg_RING_PLL_DISABLE = !ring_pll_enabled;
	if( ring_lane_sel ) 	
	{
	    #ifdef _SERDES_BUILD
	    if( phy_mode==SERDES ) 	{ ring_pll_rate = 0; }
        #endif

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

			if(slave_phy_on) 
				check_master_phy_status(CHECK_MP_PLL_CLK_READY_RING_ON);
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

#ifdef SUPPORT_SKIP_LOAD_PLL_CAL_PCIE
void load_cal_data_all_ram (void) BANKING_CTRL {
	uint8_t val, gen, div2, gm;
		
	LOAD_CAL_ON = 1;

	#ifndef _PCIE_USB_BUILD
	if(mcuid==master_mcu && slave_phy_on==0) { //phy_mode != PCIE 
		//plldcc_cal();
		val = cmx_cal_plldcc[PWR + cmx_PLLDCC_CAL_CONT_CUR_LOAD_EN][PLL_RATE_SEL];
		plldcc_step_cnt = PLLDCC_CAL_STEP_SIZE;             //when speed change, restore the fracition code to middle
		reg_LCPLL_DCC_5_0 = val;
		reg_LCPLL_DCC_CLK = 1;
		reg_TRX_IMPCAL_CLK = 1;
		reg_LCPLL_DCC_CLK = 0;
		reg_TRX_IMPCAL_CLK = 0;
	}
	#endif
	
	//dll_gm_cal();
	reg_DLL_GMSEL_LANE_2_0 = lnx_cal_dll_gmsel[rx_pll_rate];	

	//dll_vdda_cal(DLL_PHASE_STEP);
	val = lnx_cal_vdda_dll_sel[PWR + cmx_RXDLL_CAL_CONT_CUR_LOAD_EN][rx_pll_rate];		
	set_sellv_rxdll_ch(val);		
	
	//dll_eom_gm_cal();
	reg_EOM_DLL_GMSEL_LANE_2_0 = lnx_cal_dll_eom_gmsel[rx_pll_rate];
	
	//dll_eom_vdda_cal(DLL_PHASE_STEP);
	val = lnx_cal_vdda_dll_eom_sel[PWR + cmx_EOM_DLL_CAL_CONT_CUR_LOAD_EN][rx_pll_rate];		
	set_sellv_rxeomdll_ch(val);		
	
	//rxalign90_cal();
	reg_ALIGN90_REF_LANE_5_0 = 0x1e;
	div2 = (reg_RX_SPEED_DIV_LANE_2_0&0x04)==0;
	reg_ALIGN90_DAC_LANE_5_0 = lnx_cal_align90_dac[PWR][rx_pll_rate][div2];
	reg_ALIGN90_GM_LANE_2_0 = lnx_cal_align90_gm[PWR][rx_pll_rate][div2];
	reg_ALIGN90_DUMMY_CLK_LANE = lnx_cal_align90_dummy_clk[PWR][rx_pll_rate][div2];		
	reg_ALIGN90_SYN_CLK_LANE	= 1;
	reg_ALIGN90_SYN_CLK_LANE	= 0;
	
	//rxdcc_dll_cal();
    reg_RXDCC_DLLCLK_LANE_5_0 = lnx_cal_rxdcc_dll[PWR + cmx_RXDCC_DLL_CAL_CONT_CUR_LOAD_EN][rx_pll_rate];  
    rxdcc_dll_step_cnt = RXDCC_DLL_CAL_STEP_SIZE;     //when speed change, restore the fracition code to middle
    reg_RXDCC_HG_DLLCLK_LANE = lnx_cal_rxdcc_dll_hg[rx_pll_rate];          //load the HG setting. 
	reg_RXDCC_DAC_SYNC_CLK_LANE = 1;
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 1;
	reg_RXDCC_DAC_SYNC_CLK_LANE = 0;
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 0;

	gen = gen_rx;
	#ifdef _SERDES_BUILD
	if(phy_mode == SERDES) gen = 0;
    #endif

	//rxdcc_data_cal();
	reg_RXDCC_DATACLK_LANE_5_0 = lnx_cal_rxdcc_data[PWR + cmx_RXDCC_DATA_CAL_CONT_CUR_LOAD_EN][gen];
	rxdcc_data_step_cnt = RXDCC_DATA_CAL_STEP_SIZE;     //when speed change, restore the fracition code to middle
	reg_RXDCC_HG_DATACLK_LANE = lnx_cal_rxdcc_data_hg[gen];          //load the HG setting.
	reg_RXDCC_DAC_SYNC_CLK_LANE = 1;
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 1;
	reg_RXDCC_DAC_SYNC_CLK_LANE = 0;
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 0;

	//rxdcc_eom_cal();
	reg_RXDCC_EOMCLK_LANE_5_0 = lnx_cal_rxdcc_eom[PWR + cmx_RXDCC_EOM_CAL_CONT_CUR_LOAD_EN][gen];
	rxdcc_eom_step_cnt = RXDCC_EOM_CAL_STEP_SIZE;     //when speed change, restore the fracition code to middle
	reg_RXDCC_HG_EOMCLK_LANE = lnx_cal_rxdcc_eom_hg[gen];          //load the HG setting.
	reg_RXDCC_DAC_SYNC_CLK_LANE = 1;
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 1;
	reg_RXDCC_DAC_SYNC_CLK_LANE = 0;
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 0;

	//txdcc_cal();
    reg_TXDCC_CNT_LANE_5_0 = lnx_cal_txdcc[PWR + cmx_TXDCC_CAL_CONT_CUR_LOAD_EN][tx_pll_rate];  
    txdcc_step_cnt = TXDCC_CAL_STEP_SIZE;             //when speed change, restore the fracition code to middle
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 1;
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 0;
	
	//txdcc_pdiv_cal();
	if (reg_TX_SPEED_DIV_LANE_2_0 != 0) {
    reg_TXDCCCAL_PDIV_CNT_LANE_5_0 = lnx_cal_txdcc_pdiv[PWR + cmx_TXDCC_PDIV_CAL_CONT_CUR_LOAD_EN][tx_pll_rate];  
    txdcc_pdiv_step_cnt = TXDCC_PDIV_CAL_STEP_SIZE;             //when speed change, restore the fracition code to middle	
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 1;
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 0;
	}
	
	LOAD_CAL_ON = 0;
	
}
#endif //SUPPORT_SKIP_LOAD_PLL_CAL_PCIE
