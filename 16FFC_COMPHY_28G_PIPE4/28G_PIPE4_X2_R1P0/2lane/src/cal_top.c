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

	uint8_t rate, genno, save_FBCK_SEL, save_FBCK_SEL_RING, dtx_off;
	
	lnx_CAL_DONE_LANE = 0;
	reg_DFE_ADAPT_CONT_LANE = 0;
	reg_DFE_START_LANE = 0;
	
	gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_3_0; gen_tx = min(gen_tx, cmx_PHY_GEN_MAX_3_0);
	gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_3_0; gen_rx = min(gen_rx, cmx_PHY_GEN_MAX_3_0);  	

	for(genno=min_gen; genno<= max_gen; genno++) {  
		if(speedtable[genno][spdoft_tx_ck_sel_lane] == 1 || speedtable[genno][spdoft_rx_ck_sel_lane] == 1) ring_pll_enabled = 1;	
		else 	lc_pll_used = 1;
	}
	
	genno = gen_tx;
	if(phy_mode==SERDES) genno = get_gen_memory_index(reg_PIN_PHY_GEN_TX_RD_LANE_3_0);	
	gen_pll_rate = speedtable[genno][spdoft_pll_rate_sel_tx]; 
	if(gen_pll_rate>1 || phy_mode==SERDES) tx_pll_rate = 0;
	else tx_pll_rate = gen_pll_rate;	
	use_ring_pll = speedtable[genno][spdoft_tx_ck_sel_lane];

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
		
		DTL_DTX_DFE_clkoff_reset_1(dtx_off);
	}	
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

	
	reg_MCU_DEBUG0_LANE_7_0 = 0x31;
	reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
	reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
	reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
	reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;
	reg_MCU_DEBUG9_LANE_7_0 = slave_phy_on;
	
	// --- CAL start
	if((gen_pll_rate!=pre_gen_pll_rate && SPDCHG_ON_READ) || 
	(!SPDCHG_ON_READ) || phy_mode!=SERDES) {

	 if( mcuid== master_mcu ) {
		cmx_CAL_START=0; 
				
		if(!SPDCHG_ON_READ)	proc_cal();
		
		reg_RING_PLL_DISABLE = !ring_pll_enabled;
 	 }
	
	 if( mcuid== master_mcu ) {
	  		master_sync_request();			

		// --- PLL LOOP --
		
		pll_clk_ready_0();			
		
		for(rate=0; rate<2; rate++) {
			
		reg_MCU_DEBUG0_LANE_7_0 = 0x10;
		reg_MCU_DEBUG6_LANE_7_0 = rate + 0x70;
		
			loadspeedtbl_pll(rate);				
			load_init_temp_table();

			if(slave_phy_on==0) {
				pll_clk_ready_0();			
				reg_RESET_ANA = 0;
				pll_cal();					
				pll_clk_ready_1();
				plldcc_cal();		
			}
			
			if( no_pllspdchg ) break; //SERDAS always use LC PLL rate0
			if( phy_mode == SERDES ) break;
			//if(force_exit_cal) break;		  	
		}
		
		if(slave_phy_on)
			check_master_phy_status(CHECK_MP_PLL_CAL_LOOP_DONE);

		if(slave_phy_on==0) PHY_STATUS_INT |= LCPLL_CAL_LOOP_DONE;
		
		master_sync_clean();		
	 } else { slave_sync_wait(); }
	 
	 // --- RING PLL ---	
	  if( ring_lane_sel ) {
		master_sync_request();			
	
		if( ring_pll_enabled ) {
			
			pll_clk_ready_ring_0();
			
			for(rate=0; rate<2; rate++) {
				//debug			
				reg_MCU_DEBUG0_LANE_7_0 = 0x20;
				reg_MCU_DEBUG6_LANE_7_0 = rate + 0x70;
				
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

		master_sync_clean();		
	  } else { slave_sync_wait(); }
	}
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
		reg_MCU_DEBUG0_LANE_7_0 = 0x30;
		reg_MCU_DEBUG6_LANE_7_0 = gen_tx + 0x70;
		reg_MCU_DEBUG5_LANE_7_0 = min_gen;
		reg_MCU_DEBUG4_LANE_7_0 = max_gen;

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
	
	sampler_cal();	
	
	if(phy_mode==SERDES)  // 		
		loadspeedtbl_gen();	
		
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
	
	mcu_align_0(25);

skip_out:

	lnx_CAL_DONE_LANE = 1;
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
	
	// to avoid pwrseq_on and dtx_clk_off_ring access conflict
	if(reg_PWRON_SEQ) {
		if((master_mcu==MCU_LANE0 && mcuid==MCU_LANE0) || (master_mcu==MCU_LANE1 && mcuid==MCU_LANE1))	{
			reg_PWRON_SEQ = 0;  	
		}
		else while(reg_PWRON_SEQ);					
	}			

	pwrsq_on = 0;
	
	if(serdes_ring_lane_en==0)	
		PHY_STATUS = ST_SPDCHG;
	else {
		if(reg_PIN_PU_PLL_RD_LANE) PHY_STATUS = ST_SPDCHG;
		else PHY_STATUS = ST_SLUMBER;
	}	
	
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
	
	tsen_dat = read_tsen();

	cont_cal_on = 1;
	do {
		switch(cont_cal_inx) {
		case 0:
			if(ring_lane_sel && reg_ANA_PLL_LOCK_RING_RD ) ring_pll_cont(); 
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
							vdd_cal_sel(vdd_cnt);
						vdd_cnt++;
						if(vdd_cnt>5) vdd_cnt = 0;	
						SYNC_LINE_HOLD = SYNC_IDLE;
					}	
				}
			}	
			break;
		case 2: find_align90_lock(); break; //phase_lookup_tracking(1); break;
		case 3: dll_vdda_cal(DLL_PHASE_STEP);	break;
		case 4:	dll_eom_vdda_cal(DLL_PHASE_STEP); break;
		case 5:		
			switch(dcc_cont) {
			case 0: rxdcc_dll_cal(); break;	
			case 1: rxdcc_data_cal(); break;
			case 2: rxdcc_eom_cal(); break;
			case 3: if(reg_TX_SPEED_DIV_LANE_2_0==0) txdcc_cal();
					else txdcc_pdiv_cal();	break;
			case 4: if(mcuid==master_mcu && slave_phy_on==0 && cmx_PLLDCC_CAL_CONT_EN) plldcc_cal();	break;
			}
			dcc_cont++;
			if(dcc_cont>4) dcc_cont = 0;	
		break;
		case 6:	
			if( mcuid==master_mcu && slave_phy_on==0) {
				if( timeout == 0 ) break;			
				if( cmx_PLL_TEMP_CAL_CONT_EN && timeout) {
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
			if(mcuid==master_mcu && slave_phy_on==0) {
				if( timeout2 == 0) break;
				timeout2_start((uint16_t)100);
				if(cmx_PLLAMP_CAL_CONT_EN==1) pll_amp_cal_cont();	
			}	
		break;	
		}
	} while( PHY_NS==ST_INIT &&  cont_cal_inx++<8);

	if( PHY_NS!=ST_INIT ) {
		if( mcuid==master_mcu && slave_phy_on==0 && cmx_PLL_TEMP_CAL_CONT_EN )
			pll_temp_force_idle();
	}
	
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

void mcu_align_0(uint8_t val) {
	//if(serdes_ring_lane_en) return;
	if(phy_mode==SERDES && SPDCHG_ON_READ) return;
	
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
		}
		else {
		
			if( lc_pll_used ) {
				if(use_ring_pll) { lc_pll_rate = !tx_pll_rate; ring_pll_rate = tx_pll_rate; }				
				else {	lc_pll_rate = tx_pll_rate; ring_pll_rate = !tx_pll_rate; }			
			}	
			else {	lc_pll_rate = 1; ring_pll_rate = tx_pll_rate; }
		}
			
		PLL_RATE_SEL = tx_pll_rate; 
		loadspeedtbl_pll(lc_pll_rate);
		
		reg_RESET_ANA = 0;
		
		if(slave_phy_on)
			check_master_phy_status(CHECK_MP_PLL_CLK_READY_ON);			
		pll_clk_ready_1();		
		
	}

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

			if(slave_phy_on) 
				check_master_phy_status(CHECK_MP_PLL_CLK_READY_RING_ON);
			pll_clk_ready_ring_1();

		}	
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
	
	reg_DFE_ADAPT_CONT_LANE = 0;
	reg_DFE_START_LANE = 0;		
	//reg_TX_TRAIN_ON_LANE = 0; 
	//reg_RX_TRAIN_ON_LANE = 0; 

	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.VAL = 0x00040303; 
	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.VAL = 0;	

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
		
	if(	cont_cal_on==0) return;
	cont_cal_on = 0;
	
	//clear cal sync
	//pll_temp_force_idle();
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



