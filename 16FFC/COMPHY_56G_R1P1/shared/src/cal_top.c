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



void phase_temp_adjustment(void);



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

	uint8_t rate, genno, save_FBCK_SEL, save_FBCK_SEL_RING;
	uint8_t val_for_temp, temp_PU_LB_LANE, temp_PU_LB_DLY_LANE;
	
	cmx_CAL_DONE = 0;

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

		#ifdef ROM_REPLACEMENT
		read_tsen_01();
		#else
		read_tsen();
		#endif
		
		proc_cal();

		// --- PLL LOOP --

		pll_clk_ready_all_0();			
		
		for(rate=0; rate<2; rate++) {
			
		//reg_MCU_DEBUG0_LANE_7_0 = 0x10;
		//reg_MCU_DEBUG6_LANE_7_0 = rate + 0x70;
			
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


#ifndef _56G_R1P1
		if( ring_pll_enabled) {
			
			for(rate=0; rate<2; rate++) {
				//debug			
				//reg_MCU_DEBUG0_LANE_7_0 = 0x20;
				//reg_MCU_DEBUG6_LANE_7_0 = rate + 0x70;
				
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
			temp_PU_LB_LANE = reg_PU_LB_LANE;
			temp_PU_LB_DLY_LANE = reg_PU_LB_DLY_LANE;
			reg_PU_LB_LANE = 1;
			reg_PU_LB_DLY_LANE = 1;
			//val_for_temp = reg_ANA_RX_SQ_OUT_RD_LANE;
			//reg_ANA_RX_SQ_OUT_RD_LANE = 0;
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
			//reg_ANA_RX_SQ_OUT_RD_LANE = val_for_temp;
			reg_PU_LB_LANE = temp_PU_LB_LANE;
			reg_PU_LB_DLY_LANE = temp_PU_LB_DLY_LANE;
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
	
    mcu_align_0();
	//-- tximp		 
	{	
		
		reg_TXIMPCAL_EN = 1;

		#ifndef SUPPORT_CAL_SYNC_LANE	
		//tximp lane0
		if( mcuid==MCU_LANE0 )	{
#ifdef ROM_REPLACEMENT
			tximp_cal_01();
#else
			tximp_cal();
			//tximp_cal_02();
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
			//tximp_cal_02();
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
			//tximp_cal_02();
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
			//tximp_cal_02();
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
		
		reg_TXIMPCAL_EN = 0;
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
		
}
void load_cal_data_all(void) {
	if(force_exit_cal)return;
	
	LOAD_CAL_ON = 1;
	
	if(mcuid==master_mcu) {
		reg_ANA_CMN_IMPCAL_OUT_REQ = 1;
		#ifdef SUPPORT_PLLDCC_CAL_PRAM
		plldcc_cal_0();
		#else
		plldcc_cal();	
		#endif
		pll_amp_cal_cont();
	}
	dll_gm_cal();
	dll_vdda_cal(DLL_PHASE_STEP);
	dll_eom_gm_cal();
	dll_eom_vdda_cal(DLL_PHASE_STEP);
	rxalign90_cal();
#ifdef ROM_REPLACEMENT
	rxdcc_dll_cal_01();
#else
	rxdcc_dll_cal();
#endif
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
	txdcc_cal();
	txdcc_pdiv_cal();

#ifndef _56G_R1P0
	txdetect_cal();
#endif
	//vdd_cal(); //TODO
	LOAD_CAL_ON = 0;
	
}

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



void mcu_align_0(void) {
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

#if 0
extern __xdata int8_t lower_bound, upper_bound;
extern __xdata int16_t tsen_lower, tsen_upper, tsen_lower_limit, tsen_upper_limit;
void dfe_f2_temp_workaround(void)
{
	int8_t f2_max, f2_min;
	//int8_t lower_bound, upper_bound;
	//int16_t tsen_lower, tsen_upper, tsen_lower_limit, tsen_upper_limit, tsen_dat;
	int16_t tsen_dat;

	lower_bound = (int8_t)(reg_MCU_DEBUGE_LANE_7_0 & 0xf);
	upper_bound = (int8_t)((reg_MCU_DEBUGE_LANE_7_0>>4) & 0xf);

	reg_CDS_F2_DIS_LANE = 0;

	f2_max = reg_DFE_F2_D_TOP_E_2C_LANE_7_0;
	f2_min = reg_DFE_F2_D_TOP_E_2C_LANE_7_0;
	f2_max = max(f2_max, (int8_t)reg_DFE_F2_D_MID_E_2C_LANE_7_0);
	f2_min = min(f2_min, (int8_t)reg_DFE_F2_D_MID_E_2C_LANE_7_0);
	f2_max = max(f2_max, (int8_t)reg_DFE_F2_D_BOT_E_2C_LANE_7_0);
	f2_min = min(f2_min, (int8_t)reg_DFE_F2_D_BOT_E_2C_LANE_7_0);

	f2_max = max(f2_max, (int8_t)reg_DFE_F2_D_TOP_O_2C_LANE_7_0);
	f2_min = min(f2_min, (int8_t)reg_DFE_F2_D_TOP_O_2C_LANE_7_0);
	f2_max = max(f2_max, (int8_t)reg_DFE_F2_D_MID_O_2C_LANE_7_0);
	f2_min = min(f2_min, (int8_t)reg_DFE_F2_D_MID_O_2C_LANE_7_0);
	f2_max = max(f2_max, (int8_t)reg_DFE_F2_D_BOT_O_2C_LANE_7_0);
	f2_min = min(f2_min, (int8_t)reg_DFE_F2_D_BOT_O_2C_LANE_7_0);

	f2_max = max(f2_max, (int8_t)reg_DFE_F2_S_TOP_E_2C_LANE_7_0);
	f2_min = min(f2_min, (int8_t)reg_DFE_F2_S_TOP_E_2C_LANE_7_0);
	f2_max = max(f2_max, (int8_t)reg_DFE_F2_S_MID_E_2C_LANE_7_0);
	f2_min = min(f2_min, (int8_t)reg_DFE_F2_S_MID_E_2C_LANE_7_0);
	f2_max = max(f2_max, (int8_t)reg_DFE_F2_S_BOT_E_2C_LANE_7_0);
	f2_min = min(f2_min, (int8_t)reg_DFE_F2_S_BOT_E_2C_LANE_7_0);

	f2_max = max(f2_max, (int8_t)reg_DFE_F2_S_TOP_O_2C_LANE_7_0);
	f2_min = min(f2_min, (int8_t)reg_DFE_F2_S_TOP_O_2C_LANE_7_0);
	f2_max = max(f2_max, (int8_t)reg_DFE_F2_S_MID_O_2C_LANE_7_0);
	f2_min = min(f2_min, (int8_t)reg_DFE_F2_S_MID_O_2C_LANE_7_0);
	f2_max = max(f2_max, (int8_t)reg_DFE_F2_S_BOT_O_2C_LANE_7_0);
	f2_min = min(f2_min, (int8_t)reg_DFE_F2_S_BOT_O_2C_LANE_7_0);

	if ((reg_DFE_UPDATE_EN_LANE_15_0_b0 & 0x04) == 0x4){
	//if (reg_MCU_DEBUGC_LANE_7_0 < 0x4){
		if ((f2_max == -lower_bound)||(f2_min == upper_bound)){
			tsen_upper = read_tsen_01();
			//reg_MCU_DEBUGC_LANE_7_0 = 0x1;
		}
		else if((f2_max == -upper_bound)||(f2_min == lower_bound)){
			tsen_lower = read_tsen_01();
			//reg_MCU_DEBUGC_LANE_7_0 = 0x2;
		}

		if (f2_max == -lower_bound){
			tsen_lower_limit = tsen_upper;
			tsen_upper_limit = tsen_lower_limit + 2*lower_bound*(tsen_upper-tsen_lower)/(upper_bound-lower_bound);
			//tsen_upper_limit = tsen_lower_limit + (tsen_upper-tsen_lower);
			reg_DFE_UPDATE_EN_LANE_15_0_b0 = reg_DFE_UPDATE_EN_LANE_15_0_b0 & 0xfb;
			//reg_MCU_DEBUGB_LANE_7_0 = tsen_lower_limit;
			reg_MCU_DEBUGD_LANE_7_0 = (uint8_t) (tsen_lower_limit & 0xff);
			//reg_MCU_DEBUGB_LANE_7_0 = (uint8_t) ((tsen_lower_limit >> 8) & 0xff);

			//reg_MCU_DEBUG9_LANE_7_0 = (uint8_t) (tsen_lower_limit & 0xff);
			//reg_MCU_DEBUGA_LANE_7_0 = (uint8_t) ((tsen_lower_limit >> 8) & 0xff);
			//reg_MCU_DEBUG5_LANE_7_0 = (uint8_t) ((tsen_upper_limit >> 8) & 0xff);
			//reg_MCU_DEBUG6_LANE_7_0 = (uint8_t) ((tsen_upper_limit) & 0xff);

			//reg_MCU_DEBUG9_LANE_7_0 = (uint8_t) (tsen_lower_limit & 0xff);
			//reg_MCU_DEBUGA_LANE_7_0 = (uint8_t) ((tsen_lower_limit >> 8) & 0xff);
			reg_MCU_DEBUG9_LANE_7_0 = (uint8_t) (tsen_lower & 0xff);
			reg_MCU_DEBUGA_LANE_7_0 = (uint8_t) ((tsen_lower >> 8) & 0xff);

			//reg_MCU_DEBUGC_LANE_7_0 = 0x3;
		}
		if(f2_min == lower_bound){
			tsen_upper_limit = tsen_lower;
			tsen_lower_limit = tsen_upper_limit - 2*lower_bound*(tsen_upper-tsen_lower)/(upper_bound-lower_bound);
			//tsen_lower_limit = tsen_upper_limit - (tsen_upper-tsen_lower);
			reg_DFE_UPDATE_EN_LANE_15_0_b0 = reg_DFE_UPDATE_EN_LANE_15_0_b0 & 0xfb;
			//reg_MCU_DEBUGC_LANE_7_0 = 0x4;
			//reg_MCU_DEBUGB_LANE_7_0 = tsen_lower_limit;
			//reg_MCU_DEBUGD_LANE_7_0 = tsen_upper_limit;
			//reg_MCU_DEBUGD_LANE_7_0 = (uint8_t) (tsen_lower_limit & 0xff);
			//reg_MCU_DEBUGB_LANE_7_0 = (uint8_t) ((tsen_lower_limit >> 8) & 0xff);
		}

		//reg_MCU_DEBUGD_LANE_7_0 = tsen_upper_limit;
	}
	else//if ((reg_DFE_UPDATE_EN_LANE_15_0_b0 & 0x4) == 0)
	{
		tsen_dat = read_tsen_01();
		//reg_MCU_DEBUGC_LANE_7_0 = 0x5;
		if (tsen_dat > (tsen_upper_limit + 2) || tsen_dat < (tsen_lower_limit - 2))
		{
			reg_DFE_UPDATE_EN_LANE_15_0_b0 = reg_DFE_UPDATE_EN_LANE_15_0_b0 | 0x4;
			//reg_MCU_DEBUGC_LANE_7_0 = 0x0;
		}
	}
}
#else
#if 0
void dfe_f2_temp_workaround(void)
{
	int8_t f2_D_max, f2_D_min, f2_S_max, f2_S_min;
	int8_t lower_bound, upper_bound;
	//int16_t tsen_lower, tsen_upper, tsen_lower_limit, tsen_upper_limit, tsen_dat;
	//int16_t tsen_dat;

	upper_bound = (int8_t)reg_MCU_DEBUGE_LANE_7_0;
	lower_bound = -(upper_bound);

	f2_D_max = (int8_t)reg_DFE_F2_D_TOP_E_2C_LANE_7_0;
	f2_D_min = (int8_t)reg_DFE_F2_D_TOP_E_2C_LANE_7_0;
	f2_D_max = max(f2_D_max, (int8_t)reg_DFE_F2_D_MID_E_2C_LANE_7_0);
	f2_D_min = min(f2_D_min, (int8_t)reg_DFE_F2_D_MID_E_2C_LANE_7_0);
	f2_D_max = max(f2_D_max, (int8_t)reg_DFE_F2_D_BOT_E_2C_LANE_7_0);
	f2_D_min = min(f2_D_min, (int8_t)reg_DFE_F2_D_BOT_E_2C_LANE_7_0);

	f2_D_max = max(f2_D_max, (int8_t)reg_DFE_F2_D_TOP_O_2C_LANE_7_0);
	f2_D_min = min(f2_D_min, (int8_t)reg_DFE_F2_D_TOP_O_2C_LANE_7_0);
	f2_D_max = max(f2_D_max, (int8_t)reg_DFE_F2_D_MID_O_2C_LANE_7_0);
	f2_D_min = min(f2_D_min, (int8_t)reg_DFE_F2_D_MID_O_2C_LANE_7_0);
	f2_D_max = max(f2_D_max, (int8_t)reg_DFE_F2_D_BOT_O_2C_LANE_7_0);
	f2_D_min = min(f2_D_min, (int8_t)reg_DFE_F2_D_BOT_O_2C_LANE_7_0);

	f2_S_max = (int8_t)reg_DFE_F2_S_TOP_E_2C_LANE_7_0;
	f2_S_min = (int8_t)reg_DFE_F2_S_TOP_E_2C_LANE_7_0;

	f2_S_max = max(f2_S_max, (int8_t)reg_DFE_F2_S_MID_E_2C_LANE_7_0);
	f2_S_min = min(f2_S_min, (int8_t)reg_DFE_F2_S_MID_E_2C_LANE_7_0);
	f2_S_max = max(f2_S_max, (int8_t)reg_DFE_F2_S_BOT_E_2C_LANE_7_0);
	f2_S_min = min(f2_S_min, (int8_t)reg_DFE_F2_S_BOT_E_2C_LANE_7_0);

	f2_S_max = max(f2_S_max, (int8_t)reg_DFE_F2_S_TOP_O_2C_LANE_7_0);
	f2_S_min = min(f2_S_min, (int8_t)reg_DFE_F2_S_TOP_O_2C_LANE_7_0);
	f2_S_max = max(f2_S_max, (int8_t)reg_DFE_F2_S_MID_O_2C_LANE_7_0);
	f2_S_min = min(f2_S_min, (int8_t)reg_DFE_F2_S_MID_O_2C_LANE_7_0);
	f2_S_max = max(f2_S_max, (int8_t)reg_DFE_F2_S_BOT_O_2C_LANE_7_0);
	f2_S_min = min(f2_S_min, (int8_t)reg_DFE_F2_S_BOT_O_2C_LANE_7_0);

	/*if ((f2_D_max < lower_bound) || (f2_S_max < lower_bound))
		control_state = 0x1;
	else if ((f2_D_max > lower_bound) || (f2_S_max > lower_bound))
	*/
	//reg_MCU_DEBUGC_LANE_7_0 = control_state;
	switch (control_state){
	case 0:
		if ((f2_D_max == lower_bound) || (f2_S_max == lower_bound)){
			reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0xc;
			control_state = 1;
		}else if ((f2_D_min == upper_bound) || (f2_S_min == upper_bound)){
			reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0xc;
			control_state = 1;
		}
		break;
	case 1:
		if ((f2_S_max - f2_S_min) >= 10){
			reg_DFE_FEN2_S_O_LANE_2_0  = 7;
			reg_DFE_FEN2_S_E_LANE_2_0  = 7;
			delay(Tus);
			reg_DFE_FEN2_S_O_LANE_2_0  = 0;
			reg_DFE_FEN2_S_E_LANE_2_0  = 0;
			delay(Tus);
			while(!reg_DFE_UPDATED_LANE);
			break;
		}
		if (f2_S_max <= (lower_bound)){
			reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0xf;
			control_state = 0;
		}else if (f2_S_min >= (upper_bound)){
			reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0xf;
			control_state = 0;
		}
		break;
	default:
		//reg_MCU_DEBUGC_LANE_7_0 = 0xff;
		break;
	}
}
void dfe_f2_temp_workaround_switch(void)
{
	phase_temp_adjustment();
	train.phase_offset_data = (int8_t)drv_PH_OS_DAT;
	train.phase_offset_esm = (int8_t)drv_PH_OS_ESM;

	//reg_MCU_DEBUGC_LANE_7_0 = 0x11;
	lnx_ADAPT_DATA_EN_LANE_7_0 = 1;
	lnx_ADAPT_SLICER_EN_LANE_7_0 = 0;
	cdr_dfe_scheme_new(cds_table[CDS_EN_DATAADAPT]);

	//reg_MCU_DEBUGC_LANE_7_0 = 0x22;

	lnx_ADAPT_DATA_EN_LANE_7_0 = 0;
	lnx_ADAPT_SLICER_EN_LANE_7_0 = 1;
	cdr_dfe_scheme_new(cds_table[CDS_EN_DATAADAPT]);
	//reg_MCU_DEBUGC_LANE_7_0 = 0xff;
}
#endif

#endif

void all_cal_ext(void) {
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
		
	/*reg_MCU_DEBUG0_LANE_7_0 = 0x12;
	reg_MCU_DEBUG6_LANE_7_0 = tx_pll_rate;
	reg_MCU_DEBUG7_LANE_7_0 = gen_pll_rate;*/

		PLL_RATE_SEL = tx_pll_rate; 	
		loadspeedtbl_pll(lc_pll_rate);
		
		reg_RESET_ANA = 0;
		pll_clk_ready_1(); 

#ifndef _56G_R1P1
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
#endif
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

}

//#ifdef R1P0_DEBUGGING
void phase_temp_adjustment(void)
{
	int32_t temp_cel;
	int16_t temp_diff, temp16;
	int16_t tsen_dat;

#ifdef ROM_REPLACEMENT
	tsen_dat = read_tsen_01();
#else
	tsen_dat = read_tsen();
#endif
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
	//reg_MCU_DEBUGC_LANE_7_0 = 0x02;
	temp_diff = (int16_t)(reg_MCU_DEBUGC_LANE_7_0 & 0x3f);
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
			if (reg_MCU_DEBUGC_LANE_7_0 & 0x80)
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
			if (reg_MCU_DEBUGC_LANE_7_0 & 0x80)
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
	//reg_MCU_DEBUGC_LANE_7_0 = 0x04;
}

void dfe_f2_temp_workaround_switch(void)
{
	int16_t temp_diff;
	int32_t temp_cel;
	int16_t tsen_dat, temp16;

	phase_temp_adjustment();

	temp_diff = (int16_t)(reg_MCU_DEBUGF_LANE_7_0 & 0x3f);

	if(temp_diff != 0)
	{
#ifdef ROM_REPLACEMENT
	tsen_dat = read_tsen_01();
#else
	tsen_dat = read_tsen();
#endif
		temp_cel = (((int32_t)tsen_dat*394) + 128900 + 500)/1000;
		temp16 = (int16_t)temp_cel;
		if ((temp16 - temp_dfe) > temp_diff || (temp_dfe - temp16) > temp_diff){
			temp_dfe = temp16;
		}else
			return;
	}

	//train.phase_offset_data = (int8_t)drv_PH_OS_DAT;
	//train.phase_offset_esm = (int8_t)drv_PH_OS_ESM;

	//reg_MCU_DEBUGC_LANE_7_0 = 0x11;
	reg_ADAPT_DATA_EN_LANE = 1;
	reg_ADAPT_SLICER_EN_LANE = 1;
	cdr_dfe_scheme_new(cds_table[CDS_EN_DATAADAPT]);

	//reg_MCU_DEBUGC_LANE_7_0 = 0x22;

#if 0
	lnx_ADAPT_DATA_EN_LANE_7_0 = 0;
	lnx_ADAPT_SLICER_EN_LANE_7_0 = 1;
	cdr_dfe_scheme_new(cds_table[CDS_EN_DATAADAPT]);
	//reg_MCU_DEBUGC_LANE_7_0 = 0xff;
#endif
}
//#endif






