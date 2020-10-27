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

#if 0
void Calibration(void) {

	uint8_t rate, genno, save_FBCK_SEL, save_FBCK_SEL_RING;
	


	cmx_CAL_DONE = 0;

#ifndef DEVELOP_TEMP
	//check lcpll, ringpll being used
	for(genno=min_gen; genno<= max_gen; genno++) {  
		if(speedtable[genno][spdoft_tx_ck_sel_lane] == 1 || speedtable[genno][spdoft_rx_ck_sel_lane] == 1) ring_pll_enabled = 1;	
		else 	lc_pll_used = 1;
	}

	genno = gen_tx;
	if(phy_mode==SERDES) 
		genno = get_gen_memory_index(gen_tx);	
	
	gen_pll_rate = speedtable[genno][spdoft_pll_rate_sel_tx]; 
	if(gen_pll_rate>1 || phy_mode==SERDES) tx_pll_rate = 0;
	else tx_pll_rate = gen_pll_rate;
	use_ring_pll = speedtable[genno][spdoft_tx_ck_sel_lane];

	if( force_exit_cal ) {
		// set all to *cal_ext_en=1
		CONTROL_CONFIG1.VAL = 0x0ffffffc;		
		all_cal_ext();
		goto skip_out;
	}
#endif

	reg_RX_INIT_DONE_LANE = 0; //??	
	reg_DFE_MCU_CLK_EN_LANE = 1;
	reg_ANA_TX_IDLE_FORCE_LANE = 1;
	reg_ANA_TX_IDLE_LANE = 1;
	reg_EOM_CLK_EN_LANE = 1;
	SYNC_LINE_HOLD = SYNC_IDLE;
	
	// --- CAL start
	
	if( mcuid==master_mcu ) {
		
		cmx_CAL_START=0; 
		
		//enable TSEN
		reg_TSEN_ADC_CAL_1_0 = 0x2; //Automatic self-offset-cal enforced, TSENE_ADC in normal mode.
		reg_ANA_TSEN_ADC_RESET = 0;
		reg_ANA_TSEN_ADC_EN = 1;
		reg_ANA_TSEN_ADC_START = 1;
		reg_TSEN_ADC_RD_REQ = 1;
		if(reg_MCU_COMMAND0_LANE_31_0_b0==0) {
			while(reg_TSEN_ADC_RDY==0);
		}

		read_tsen();
		
		proc_cal();
	}
#if 0
		// --- PLL LOOP --

		pll_clk_ready_all_0();			
		
		for(rate=0; rate<2; rate++) {
			
		reg_MCU_DEBUG0_LANE_7_0 = 0x10;
		reg_MCU_DEBUG6_LANE_7_0 = rate + 0x70;
			
			load_init_temp_table(rate);

			if(phy_mode==SERDES) { 
				genno = get_gen_memory_index(gen_tx);	
				rate = speedtable[genno][spdoft_pll_rate_sel_tx];				
			}
			
			loadspeedtbl_pll(rate);
			
			reg_RESET_ANA = 0;
			pll_cal();	

			reg_ANA_CMN_IMPCAL_OUT_REQ = 1;
			reg_ANA_PLL_CLK_READY = 1;
			plldcc_cal();		
			reg_ANA_PLL_CLK_READY = 0;
			
			if( phy_mode==SERDES || phy_mode==USB ) break; //SERDAS always use rate0 
		}
		
		pll_clk_ready_1();

#ifndef DEVELOP_TEMP
		if( ring_pll_enabled) {
			
			for(rate=0; rate<2; rate++) {
				//debug			
				reg_MCU_DEBUG0_LANE_7_0 = 0x20;
				reg_MCU_DEBUG6_LANE_7_0 = rate + 0x70;
				
				loadspeedtbl_ringpll(rate);
				
				reg_ANA_PU_PLL_RING = 1;
				delay(T_p5us);
				reg_ANA_PU_PLL_DLY_RING = 1;
				delay(T_p5us);
				reg_RESET_ANA_RING = 0;					
				
				ring_pll_cal();				

				if( phy_mode==SERDES || phy_mode==USB ) break; //SERDAS always use rate0 
			}				
			
			pll_clk_ready_ring_1();
		}
		else cmx_RING_PLL_DISABLE = 1;	
#endif
		
	} 

	check_pll_clk_ready();

	//--- GEN LOOP --- 

	for( genno = min_gen; genno<=max_gen; genno++)  
	{
		if(phy_mode==SERDES)  //serdes need to calibrate on own speed 	 
		{
			loadspeedtbl_gen();
		}
		else {
			gen_rx = genno;	gen_tx = genno;				
			loadSpeedtbl();
		}			

		//debug
		//reg_MCU_DEBUG0_LANE_7_0 = 0x30;
		//reg_MCU_DEBUG6_LANE_7_0 = gen_tx + 0x70;
		//reg_MCU_DEBUG5_LANE_7_0 = min_gen;
		//reg_MCU_DEBUG4_LANE_7_0 = max_gen;	
		
		//----
		{
			mcu_align_0();	

			#ifndef SUPPORT_CAL_SYNC_LANE	
			if( mcuid==MCU_LANE0)	{
#ifdef ROM_REPLACEMENT
				vdd_cal_01();
#else
				vdd_cal();
#endif
				PHY_CHECK_LANE = 1;			
			}
			else while(!PHY_CHECK_LANE0_READ);

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

		}
#ifndef _56G_R1P0 //56G doesn't have txdect timing calibration
		{	
			mcu_align_0();	

			#ifndef SUPPORT_CAL_SYNC_LANE	
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
						
		}
#endif
#ifdef ROM_REPLACEMENT
		rxdcc_dll_cal_01();
#else
		rxdcc_dll_cal();
#endif
		dll_cal();

#ifdef ROM_REPLACEMENT
		rxdcc_data_cal_01();
#else
		rxdcc_data_cal();
#endif
#ifdef ROM_REPLACEMENT
		rxdcc_eom_cal_01();
#else
		rxdcc_eom_cal();
#endif
		//eom_align_cal();	removed		
		align90_comp_cal();		
		rxalign90_cal(); 			
		txdcc_cal();
		txdcc_pdiv_cal();		
	 
		//if(force_exit_cal) break;
		if( phy_mode==SERDES ) break; //SERDAS always use one gen 
	} 
	
	sampler_cal();	
	squelch_cal();	

	//-- rximp	
	{ 
	
		//reg_RXIMPCAL_EN	= 1;
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
		//reg_RXIMPCAL_EN_lane	= 0;
	}
	
    mcu_align_0();
	//-- tximp		 
	{	
		
		//reg_TXIMPCAL_EN_lane = 1;

		#ifndef SUPPORT_CAL_SYNC_LANE	
		//tximp lane0
		if( mcuid==MCU_LANE0 )	{
#ifdef ROM_REPLACEMENT
			tximp_cal_01();
#else
			tximp_cal();
#endif
			PHY_CHECK_LANE = 1;
		}
		else while(!PHY_CHECK_LANE0_READ);			
		
		//tximp lane1
		if(mcu_en1) {
		if( mcuid==MCU_LANE1 )	{
#ifdef ROM_REPLACEMENT
			tximp_cal_01();
#else
			tximp_cal();
#endif
			PHY_CHECK_LANE = 2;
		}
		else while(!PHY_CHECK_LANE1_READ);	
		}
		
		//tximp lane2
		if(mcu_en2) {
		if( mcuid==MCU_LANE2 ) 	{
#ifdef ROM_REPLACEMENT
			tximp_cal_01();
#else
			tximp_cal();
#endif
			PHY_CHECK_LANE = 3;
		}
		else while(!PHY_CHECK_LANE2_READ);	
		}
		//tximp lane3
		if(mcu_en3) {
		if( mcuid==MCU_LANE3 )	{
#ifdef ROM_REPLACEMENT
			tximp_cal_01();
#else
			tximp_cal();
#endif
			PHY_CHECK_LANE = 4;
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
		
		//reg_TXIMPCAL_EN_lane = 0;
	}
	// --- 
	
	mcu_align_0();

skip_out:

	cmx_CAL_DONE = 1;
	reg_ANA_TX_IDLE_FORCE_LANE = 0;
	reg_ANA_TX_IDLE_LANE = 0;

	//tsen_dat_cal = read_tsen_01(); //no used

	reg_DTL_LOOP_FREEZE_LANE = 0;
	reg_DTL_FLOOP_FREEZE_LANE = 0;  

	reg_TXDCCCAL_EN_LANE = 0;
	lnx_DLL_VDDA_TRACKING_ON_LANE = 1;
    vdd_cnt = 0;
	dcc_cont = 0;
	align90_tracking_cnt = 0;
	
	PHY_STATUS = ST_SPDCHG;
#endif
}	
#else
void Calibration(void) {

	uint8_t rate, genno, save_FBCK_SEL, save_FBCK_SEL_RING;

	cmx_CAL_DONE = 0;


	if( force_exit_cal ) {
		// set all to *cal_ext_en=1
		CONTROL_CONFIG1.VAL = 0x0ffffffc;
		all_cal_ext();
		goto skip_out;
	}
	if( mcuid != master_mcu ) {
		reg_RX_INIT_DONE_LANE = 0; //??
		reg_ANA_TX_IDLE_FORCE_LANE = 1;
		reg_ANA_TX_IDLE_LANE = 1;
		reg_EOM_CLK_EN_LANE = 1;
	}
	// --- CAL start

	if( mcuid==master_mcu ) {

		cmx_CAL_START=0;

		//enable TSEN
		reg_TSEN_ADC_CAL_1_0 = 0x2; //Automatic self-offset-cal enforced, TSENE_ADC in normal mode.
		reg_ANA_TSEN_ADC_RESET = 0;
		reg_ANA_TSEN_ADC_EN = 1;
		reg_ANA_TSEN_ADC_START = 1;
		reg_TSEN_ADC_RD_REQ = 1;
		//if(reg_MCU_COMMAND0_LANE_31_0_b0==0) { //to do:find the register for this condition. 
			while(reg_TSEN_ADC_RDY==0);
		//}

		read_tsen();

		proc_cal();
	}
		// --- PLL and GEN table --
	if( mcuid != master_mcu ) {
		pll_clk_ready_all_0();
		//reg_MCU_DEBUG0_LANE_7_0 = 0x10;
		//reg_MCU_DEBUG6_LANE_7_0 = rate + 0x70;
		rate = 0; //to do only one rate for 112G
		load_init_temp_table(rate);

		if(phy_mode==SERDES) {
			gen_pll_rate = speedtable[gen_tx][spdoft_pll_rate_sel_tx];
		}

		reg_PIN_PLL_READY_RX_LANE = 0;
		reg_PIN_PLL_READY_TX_LANE = 0;
		DTL_DTX_DFE_clkoff_reset_1();
		
		//gen_pll_rate = 0;
		loadspeedtbl_pll(gen_pll_rate);
		
		reg_RESET_ANA_LANE = 0;
		pll_cal();
		//reg_ANA_CMN_IMPCAL_OUT_REQ = 1;
		pll_clk_ready_1();
		plldcc_cal();
		check_pll_clk_ready();

		//--- GEN LOOP ---
		if(phy_mode==SERDES)  //serdes need to calibrate on own speed
		{
			loadspeedtbl_gen();
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
		delay(Tus); //avoid double booking.
		if( SYNC_LINE_HOLD_READ != mcuid ) continue;
		else {
			vdd_cal();
			SYNC_LINE_HOLD = SYNC_IDLE;
		}
	} while (!lnx_VDD_CAL_DONE_LANE);
#endif
#endif
	if( mcuid != master_mcu ) {
		//rxdcc_dll_cal();
		dll_cal();
		rxclk_cal();
		rxeom_cal();
		sampler_cal();
		//rxdcc_data_cal();
		//rxdcc_eom_cal();
		//eom_align_cal();	removed
		//align90_comp_cal();
		//rxalign90_cal();
		txdcc_cal();
		//txdcc_pdiv_cal();
		squelch_cal();
	}
#if 0
	mcu_align_0();

	//-- rximp
	//reg_RXIMPCAL_EN_lane	= 1;
#ifndef SUPPORT_CAL_SYNC_LANE
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
	//reg_RXIMPCAL_EN	= 0;
    mcu_align_0();

	//-- tximp
    //reg_TXIMPCAL_EN_lane = 1;
#ifndef SUPPORT_CAL_SYNC_LANE
    //tximp lane0
    if( mcuid==MCU_LANE0 )	{
    	tximp_cal();
    	PHY_CHECK_LANE = 1;
    }
    else while(!PHY_CHECK_LANE0_READ);

    //tximp lane1
    if(mcu_en1) {
    	if( mcuid==MCU_LANE1 )	{
    		tximp_cal();
    		PHY_CHECK_LANE = 2;
    	}
    	else while(!PHY_CHECK_LANE1_READ);
    }

    //tximp lane2
    if(mcu_en2) {
    	if( mcuid==MCU_LANE2 ) 	{
    		tximp_cal();
    		PHY_CHECK_LANE = 3;
    	}
    	else while(!PHY_CHECK_LANE2_READ);
    }
    //tximp lane3
    if(mcu_en3) {
    	if( mcuid==MCU_LANE3 )	{
    		tximp_cal();
    		PHY_CHECK_LANE = 4;
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
    //reg_TXIMPCAL_EN_lane = 0;
	mcu_align_0();
#endif

skip_out:

	cmx_CAL_DONE = 1;
	reg_ANA_TX_IDLE_FORCE_LANE = 0;
	reg_ANA_TX_IDLE_LANE = 0;

	//tsen_dat_cal = read_tsen_01(); //no used

	reg_ANA_RX_DTL_LOOP_FREEZE_LANE = 0;
	reg_DTL_FLOOP_FREEZE_LANE = 0;
    	vdd_cnt = 0;
	
	if (mcuid != master_mcu)
	{
		DTL_DTX_DFE_clkoff_reset_0();
		reg_PWRON_SEQ_LANE = 0;
		//delay(T_10us);

		reg_RST_FRAME_SYNC_DET_CLK_LANE = 1;
		delay(Tus);
		reg_RST_FRAME_SYNC_DET_CLK_LANE = 0;
		reg_PIN_PLL_READY_RX_LANE = 1;
		reg_PIN_PLL_READY_TX_LANE = 1;
	}

	PHY_STATUS = ST_PLLREADY;

}
#endif
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
#if 0
	if(cmx_FORCE_CONT_CAL_SKIP) return;
	
	cont_cal_on = 1;
	do {
		switch(cont_cal_inx) {
		case 0:
			if((mcuid==master_mcu) && reg_ANA_PLL_LOCK_RING_RD ) ring_pll_cont(); 
		break;
		case 1:
			if( lnx_CAL_VDD_CONTINUOUS_MODE_EN_LANE ) {
				if( SYNC_LINE_HOLD_READ == SYNC_IDLE) {
					SYNC_LINE_HOLD = mcuid;
					delay(Tus);
					if( SYNC_LINE_HOLD_READ == mcuid ) {			
					    //56G doesn't have td_cal
						//if(vdd_cnt==SELLV_TXDATA && cmx_TXDETECT_CAL_CONT_EN )	
						//	txdetect_cal();
						//else	
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
		case 2: phase_lookup_tracking(1); break;
		case 3: dll_vdda_cal(DLL_PHASE_STEP);	break;
		case 4:	dll_eom_vdda_cal(DLL_PHASE_STEP); break;
		case 5:		
			switch(dcc_cont) {
			case 0:
#ifdef ROM_REPLACEMENT
				rxdcc_dll_cal_01();
#else
				rxdcc_dll_cal();
#endif
				break;
			case 1:
				{
#ifdef ROM_REPLACEMENT
					rxdcc_data_cal_01();
#else
					rxdcc_data_cal();
#endif
					break;
				}
			case 2:
#ifdef ROM_REPLACEMENT
					rxdcc_eom_cal_01();
#else
					rxdcc_eom_cal();
#endif
					break;
			case 3: if(reg_TX_SPEED_DIV_LANE_2_0==0) txdcc_cal();
					else txdcc_pdiv_cal();	break;
			case 4: if(mcuid==master_mcu && cmx_PLLDCC_CAL_CONT_EN) 
				reg_ANA_CMN_IMPCAL_OUT_REQ = 1;
				plldcc_cal();	
			break;
			}
			dcc_cont++;
			if(dcc_cont>4) dcc_cont = 0;	
		break;
		case 6:				
			if( mcuid==master_mcu) {
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
			if(mcuid==master_mcu) {
				if( timeout2 == 0) break;
				timeout2_start((uint16_t)100);
				if(cmx_PLLAMP_CAL_CONT_EN==1) pll_amp_cal_cont();	
			}	
		break;	
		}
	} while( PHY_NS==ST_INIT &&  cont_cal_inx++<8);

	if( PHY_NS!=ST_INIT ) {
		if( mcuid==master_mcu && cmx_PLL_TEMP_CAL_CONT_EN )
			pll_temp_force_idle();
	}
		
	cont_cal_on = 0;
#endif
}

#if 1
void load_cal_data_all(void) {
	if(force_exit_cal)return;
	
	LOAD_CAL_ON = 1;
	
	//if(mcuid==master_mcu) {
		//reg_ANA_CMN_IMPCAL_OUT_REQ = 1;
		plldcc_cal();	
		pll_amp_cal_cont();
	//}
	//dll_gm_cal();
	//dll_vdda_cal(DLL_PHASE_STEP);
	//dll_eom_gm_cal();
	//dll_eom_vdda_cal(DLL_PHASE_STEP);
	//rxalign90_cal();

	rxdcc_dll_cal();
	rxdcc_data_cal();
	rxdcc_eom_cal();
	txdcc_cal();
	txdcc_pdiv_cal();
	//vdd_cal(); //TODO
	LOAD_CAL_ON = 0;
//#endif
	
}

void load_cal_data_dll(void) {
	if(force_exit_cal)return;
	
	/*LOAD_CAL_ON = 1;
	dll_gm_cal();
	dll_vdda_cal(DLL_PHASE_STEP);
	dll_eom_gm_cal();
	dll_eom_vdda_cal(DLL_PHASE_STEP);
	rxalign90_cal();

	LOAD_CAL_ON = 0;*/
	
}



void mcu_align_0(void) {
	/*if( mcuid != master_mcu ) {
		PHY_CHECK_LANE = 0;
		while((PHY_CHECK_LANE0_READ|PHY_CHECK_LANE1_READ|PHY_CHECK_LANE2_READ|PHY_CHECK_LANE3_READ));
	}*/
}

void all_cal_ext(void) {

	uint8_t rate, genno;
#if 0
	BIT	lc_pll_rate, ring_pll_rate;

	if( mcuid==master_mcu ) {
		
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

		if( phy_mode==SERDES ) 	{ lc_pll_rate = gen_pll_rate; ring_pll_rate = gen_pll_rate; }
		
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
		delay(T_p5us);
		reg_ANA_PU_PLL_DLY_RING = 1;
			delay(T_p5us);
			reg_RESET_ANA_RING = 0;					
		pll_clk_ready_ring_1();
		}	
		else cmx_RING_PLL_DISABLE = 1;
	}
	else 
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
	//DTL_DTX_DFE_clkoff_reset_0(); 
#endif

	if( mcuid != master_mcu ) {
		pll_clk_ready_all_0();
		//reg_MCU_DEBUG0_LANE_7_0 = 0x10;
		//reg_MCU_DEBUG6_LANE_7_0 = rate + 0x70;
		rate = 0; //to do only one rate for 112G
		load_init_temp_table(rate);

		if(phy_mode==SERDES) {
			gen_pll_rate = speedtable[gen_tx][spdoft_pll_rate_sel_tx];
		}

		//reg_MCU_DEBUG8_LANE_7_0 = genno;
		reg_PIN_PLL_READY_RX_LANE = 0;
		reg_PIN_PLL_READY_TX_LANE = 0;
		DTL_DTX_DFE_clkoff_reset_1();

		//gen_pll_rate = 8;
		loadspeedtbl_pll(gen_pll_rate);
		
		reg_RESET_ANA_LANE = 0;
		pll_cal();
		//reg_ANA_CMN_IMPCAL_OUT_REQ = 1;
		pll_clk_ready_1();
		plldcc_cal();
		check_pll_clk_ready();

		//--- GEN LOOP ---
		if(phy_mode==SERDES)  //serdes need to calibrate on own speed
		{
			loadspeedtbl_gen();
		}
	}
}
#endif



