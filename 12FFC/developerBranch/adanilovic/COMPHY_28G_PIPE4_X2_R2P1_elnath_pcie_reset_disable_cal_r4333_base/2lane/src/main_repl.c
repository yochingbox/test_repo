/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file main_repl.c
* \purpose Althernate main function when certain register is set
*/
#include "common.h"

#ifdef _28G_X2_ROM

#ifdef USE_BANKING
#pragma codeseg BANK3
#pragma constseg BANK3
#endif

// Local declarations for the replacement functions
void SpeedChange_repl() BANKING_CTRL;
void IncrementDebugReg_1(void) BANKING_CTRL; // Called in speedchange_repl
void IncrementDebugReg_2(void) BANKING_CTRL; // case ST_T1
void IncrementDebugReg_3(void) BANKING_CTRL; // case ST_T1_WK
void IncrementDebugReg_8(void) BANKING_CTRL; // Called at the beginning of main_repl
// End of local declarations

void IncrementDebugReg_1(void) BANKING_CTRL {
	uint8_t i;
	for ( i = 1; i < 21; ++i )
		reg_MCU_DEBUG0_LANE_7_0 = i;
}

void main_repl() BANKING_CTRL {
	
	// Copied from main() function
    // Normal mode code
	CKCON = 0x00;

    EA = 0;
	
	// cmx_MCU_INIT_DONE = 0;	// Default to 0 when XDAT is loaded; Used in simulation. Set to 1 after speed table
    // is copied from pmem to XDAT, and in clear_xdata()
	//reg_SET_MCU_INT_LANE0 = 0;

#ifdef SPD_TBL_IN_PMEM // X2_ROM defined this option
	// For hard reset (PIN_RESET), FW needs to re-copy the speed table
	if ( reg_PHY_FM_RST && ( PHY_STATUS == ST_INIT ) ) {
		CopySpeedTableToXData();	// Copy speed table
		InitPrePowerUp();			// Initialize registers before power up
	}	
#endif

	cpu_init();
	
	PHY_STATUS = PHY_NS;
	PHY_NS = ST_INIT;
	SYNC_STATUS_LANE = IDLE;
	
	pll_cal_timeout_dis_save = cmx_PLL_CAL_TIMEOUT_DIS;
	if(reg_PHY_FM_RST){
		if(MCU_INIT_DONE_RD==MCU_INIT) {
			pwrsq_on = 1;
			// reset_pwr_reg() is in the ROM code which is freezing currently
			// add reset_pwr_reg_ext() for extra regs that need reset
			reset_pwr_reg_ext();
			reset_pwr_reg();
			cmx_PLL_CAL_TIMEOUT_DIS = 1;
		}	
		if(mcuid== master_mcu) {
			reg_CLEAR_PHY_FM_RST = 1;
			reg_CLEAR_PHY_FM_RST = 0;
		}
		PHY_STATUS = ST_INIT;
	}
	
	MCU_INIT_ST |= MCU_INIT;

	if( PHY_STATUS == ST_INIT) {
		clear_xdata(); 
		#ifdef SUPPORT_POWER_SIMPLE
		if (POWERUP_SIMPLE == MOST_SIMPLE_LEVEL)
			PowerUp_Seq_Simple();
		else 
		#endif
		{
			PowerUp_Seq();
		}	
	}
	else {
		clear_normal_mode_cal_en();
	}
	
	reg_INT_ENABLE_ALL_LANE = 1; 
    EA = 1;

		#ifdef _LAB
	DBG_Printf("\r\n[mcu%d]-- Welcome to MCUPhy Debug World!! --", reg_MCU_ID_LANE_7_0);
	DBG_Printf("\tBuilt: %s-%s\n\r",__DATE__, __TIME__);	
		#endif
		
    while(1){
	
		#ifdef _LAB
		if( PHY_STATUS != old_status) {
			old_status = PHY_STATUS;
			DBG_Printf("\r\n%x", old_status);
		}
		#endif

	    //do process
		switch(PHY_STATUS){
            case ST_SPDCHG: SpeedChange_repl();		break;		
			#ifdef _PCIE_USB_BUILD
			case ST_P1: 	Power_P0s_P1();		break;
			case ST_P1_WK:	Power_P1_P0();		break;
			case ST_P2_P0:	Power_P2_P0();		break;
            case ST_P2: 	Power_P1_P2();	 	break;
			case ST_P2_WK: 	Power_P2_P1();	 	break;
			case ST_P2_BEACON:	Power_P2_BEACON();	break;
			case ST_TXDETRX: Power_P0_TXDETRX();	break;
			case ST_P1_TXDETRX: Power_P1_TXDETRX(); break;
			case ST_P2_TXDETRX: Power_P2_TXDETRX(); break;
			case ST_P1CLKREQ_WK:	Power_P1CLKREQ_P1();	break;
			#endif //_PCIE_USB_BUILD
			#ifdef _SATA_SERDES_BUILD
            case ST_SLUMBER: Power_Slumber();	 	break;
			case ST_SLUMBER_WK: Power_Slumber_Wakeup(); break;
            //case ST_PSLUMBER_TX:
            case ST_PSLUMBER_RX:Power_Patial_Slumber(); break;
			#endif //_SATA_SERDES_BUILD
			case ST_TXTRAIN:
			case ST_RXTRAIN:	
            case ST_TRXTRAIN: TRX_Train();  	break;	
            case ST_DTL:	  RX_Init();		break;
			case ST_PLLREADY: 	break; 
			#ifdef SUPPORT_APTA_TX_TRAIN
            case ST_APTA_TXTRAIN: 
			if(cmx_APTA_TRAIN_SIM_EN || PHY_MCU_REMOTE_REQ_LANE) 
				apta_txtrain(); break;	
			#endif	
            case ST_CAL:	  Calibration(); 		break;
			#ifdef _PCIE_USB_BUILD
			case ST_LANE_MARGIN_EN:  lane_margin_start(); 		break;
			#endif
			case ST_NORMAL: 
						    Cal_Cont();
							if(PHY_NS != ST_INIT) break;
							
							#ifdef SUPPORT_RXFFE_ACCAP_EN
							RxFFE_ACCap(); //dfe cont run
							#endif						
							#ifdef SUPPORT_REALTIME_PHASE_ADAPT
							Phase_Adaptation();
							#endif							
							PHY_STATUS = ST_NORMAL;
							
				break;
		}	
		
		//check event
		if(do_rxinit || reg_INT_RX_INIT_RISE_ISR_LANE) {
			if(SKIP_RX_INIT) {
				reg_RX_INIT_DONE_LANE = 0; 
				#ifdef _28G_X2
				reg_INT_RX_INIT_RISE_ISR_CLEAR_LANE = 1;
				reg_INT_RX_INIT_RISE_ISR_CLEAR_LANE = 0;
				#else
				reg_INT_RX_INIT_RISE_ISR_LANE = 0;
				#endif
				SKIP_RX_INIT = 0;
				do_rxinit = 0;
				reg_RX_INIT_DONE_LANE = 1; 		
			}
			else PHY_STATUS = ST_DTL; 
		}
		else if(do_train | do_rxtrain)   {PHY_STATUS = ST_TRXTRAIN; }	
		//#ifdef _28G_X2
		else if(do_train==0 && reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE) {
			reg_MCU_DEBUG0_LANE_7_0 = 0x98;
			txtrain_force_restart();			
		}
		//#endif
		else if(do_rxtrain==0 && reg_PIN_RX_TRAIN_ENABLE_RD_LANE) {
			reg_MCU_DEBUG0_LANE_7_0 = 0x99;
			EA = 0;
			#ifdef _28G_X2
			TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B0 = 0x01;
			TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B0 = 0;	
			#else
			reg_PIN_RX_TRAIN_ENABLE_ISR_LANE = 0;
			#endif
			
			PHY_STATUS = ST_TRXTRAIN; reg_RX_TRAIN_ON_LANE = 1; do_rxtrain = 1;
			EA = 1;
		}
		#ifdef SUPPORT_APTA_TX_TRAIN
		else if(do_rx_apta) {PHY_STATUS = ST_APTA_TXTRAIN; }
		#endif
		else if(reg_DFE_MARGIN_EN_LANE && pcie_usb_mode) {PHY_STATUS = ST_LANE_MARGIN_EN;}
		else if(cmx_CAL_START) { PHY_STATUS = ST_CAL; cal_start_on = 1;}
		#ifdef SUPPORT_CMD_IF
		if(PHY_MCU_REMOTE_REQ_LANE && lnx_PHY_MCU_LOCAL_ACK_LANE==0) 
			cmd_if();	
		#ifdef _28G_X4_R2P1
		else if(PHY_MCU_REMOTE_REQ_LANE==0) 
			lnx_PHY_MCU_LOCAL_ACK_LANE = 0;
		#endif
		#endif
		
		#ifdef _LAB
		uart_monitor();
		#endif
		

		//check sq auto txtrain
		if(lnx_SQ_AUTO_TRAIN_LANE==1) {
			sq_auto_train_enable();	
		}

		if(PHY_NS != ST_INIT) {
			PHY_STATUS = PHY_NS;
			PHY_NS = ST_INIT;
			do_wake = 0;
			continue;				
		}		

	    //EOM 
	    Check_EOM_Stage_fmExt();
		
		//F0d
		#ifdef SUPPORT_CHECK_NORMAL_F0D
		Check_F0d();
		#endif

		#ifdef SUPPORT_CLI
		if( lnx_CLI_START_LANE == 1 ) cli_monitor();
		#endif
		
		#ifdef _28G_X2
		//Watchdog: Toggle the reset register to reset WD counter
		reg_MCU_WDT_RESET_LANE = !reg_MCU_WDT_RESET_LANE;
		#endif
    } 
}

// For replacement testing purpose, equivalent to the original function except added debugging output
void SpeedChange_repl() BANKING_CTRL {
	//BIT	lc_pll_rate, ring_pll_rate; 
	bool dtx_off;
	
	dtx_off = 0;
	
	#ifdef _28G_X2
	SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0xc0;
	SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0;
	#else
	SPD_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0;
	#endif

	rxinit_4_spdchg_en = 0;
	
  new_gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_3_0; new_gen_tx = (new_gen_tx<cmx_PHY_GEN_MAX_3_0)? new_gen_tx: cmx_PHY_GEN_MAX_3_0;
  new_gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_3_0; new_gen_rx = (new_gen_rx<cmx_PHY_GEN_MAX_3_0)? new_gen_rx: cmx_PHY_GEN_MAX_3_0;
 
  if((new_gen_tx != gen_tx || new_gen_rx != gen_rx /*|| ( pwrsq_on && phy_mode!=SERDES )*/ ) && phy_mode!=SERDES ){

	reg_PIN_PLL_READY_RX_LANE = 0;
	reg_PIN_PLL_READY_TX_LANE = 0;
	reg_PIN_GPO_LANE_7_0 = reg_PIN_GPO_LANE_7_0 & 0xef; // Clear bit [4]

	//if(phy_mode==SAS && gen_tx==4) {
	//	reg_RST_FRAME_SYNC_DET_CLK_LANE = 1;
	//	reg_RST_FRAME_SYNC_DET_CLK_LANE = 0;	
	//}	
	
    gen_tx = new_gen_tx;
    gen_rx = new_gen_rx;   	
	//no need anymore. rx/tx separated.
    //gen_pll = max(gen_tx, gen_rx);
	//if(max_gen == 0 || gen_pll > max_gen) { gen_tx=0; gen_rx=0; gen_pll=0; }
	if(phy_mode==SATA) { //SATA must support 1.5G/3G/6G only!! 
		sata_speedchange();	
	}	
	else {	
		
		gen_pll_rate = speedtable[gen_tx][spdoft_pll_rate_sel_tx]; 
		use_ring_pll = speedtable[gen_tx][spdoft_tx_ck_sel_lane];

		if(((!ring_pll_enabled || !lc_pll_used ||
		(phy_mode==PCIE && (use_ring_pll==1? gen_pll_rate!=pre_ringpll_rate : gen_pll_rate!=pre_lcpll_rate ) ))/*|| pwrsq_on*/) && 
		!no_pllspdchg /*&& !force_exit_cal*/) { 
			if(mcuid==master_mcu) {			
				pll_clk_ready_all_0();	
			}
			else{		
				while(reg_ANA_PLL_CLK_READY_PRE0==1 || reg_ANA_PLL_CLK_READY_RING==1);
			}
			dtx_off = 1;	
		}		
	
		//dtx_off |= (pre_gen_pll_rate != gen_pll_rate);
		DTL_DTX_DFE_clkoff_reset_1(dtx_off);
	
		loadspeedtbl_gen();
	
		reg_MCU_DEBUG0_LANE_7_0 = 0x34;
		reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
		reg_MCU_DEBUG2_LANE_7_0 = lc_pll_used;
		reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
		reg_MCU_DEBUG4_LANE_7_0 = max_gen;
		reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
		reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
		reg_MCU_DEBUG7_LANE_7_0 = tx_pll_rate;
		reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;
		reg_MCU_DEBUG9_LANE_7_0 = serdes_ring_lane_en;
		reg_MCU_DEBUGA_LANE_7_0 = master_mcu;
		
		
		if( mcuid==master_mcu ) {			
			//if( pwrsq_on && !no_pllspdchg && !force_exit_cal) {
			//	if(!ring_pll_enabled ) loadspeedtbl_pll(tx_pll_rate);
			//		
			//	//if( lc_pll_used ) {
			//	//	if(use_ring_pll) {PLL_RATE_SEL_RING = tx_pll_rate; PLL_RATE_SEL = !tx_pll_rate; }
			//	//	else { PLL_RATE_SEL = tx_pll_rate; PLL_RATE_SEL_RING = !tx_pll_rate; }
			//	//}
			//	//else { 
			//	//	PLL_RATE_SEL_RING = tx_pll_rate; PLL_RATE_SEL = 1;  
			//	//}
			//	
			//	if(!ring_pll_enabled) {				
			//		if(slave_phy_on) {
			//			check_master_phy_status(CHECK_MP_PLL_CLK_READY_ON);	
			//			pll_clk_ready_1();
			//		}	
			//		else {
			//			spdchg_pll_fast_cal();		
			//		}	
			//	}					
			//}
			//else 
			{		
				if((!ring_pll_enabled && !no_pllspdchg ) || (phy_mode==PCIE && !use_ring_pll && gen_pll_rate!=pre_lcpll_rate)) { 				
					loadspeedtbl_pll(tx_pll_rate);
					if(slave_phy_on) {
						check_master_phy_status(CHECK_MP_PLL_CLK_READY_ON);	
						pll_clk_ready_1();
					}	
					else	
						spdchg_pll_fast_cal();				
				}		
			}			

			if(reg_ANA_PLL_CLK_READY==0) pll_clk_ready_1();
		}
		
		if( ring_lane_sel ) 	
		{
			//if( pwrsq_on && !no_pllspdchg && !force_exit_cal) {
			//	if(!lc_pll_used ) loadspeedtbl_ringpll(tx_pll_rate);
			//	if(ring_pll_enabled) {
			//		if(slave_phy_on) {
			//			check_master_phy_status(CHECK_MP_PLL_CLK_READY_RING_ON);	
			//			pll_clk_ready_ring_1();
			//		}
			//		else	
			//			ring_pll_fast_cal();
			//	}						
			//}
			//else 
			//{
				if( !lc_pll_used || (phy_mode==PCIE && use_ring_pll && gen_pll_rate!=pre_ringpll_rate) ) { 
					loadspeedtbl_ringpll(tx_pll_rate);
					if(slave_phy_on) {
						check_master_phy_status(CHECK_MP_PLL_CLK_READY_RING_ON);
						pll_clk_ready_ring_1();
					}
					else	
						ring_pll_fast_cal();		
				}				
			//}			
			
			if(reg_ANA_PLL_CLK_READY_RING==0) pll_clk_ready_ring_1();
			
		}			
		
		if(serdes_ring_lane_en==0)
			check_pll_clk_ready();
			
		if(!force_exit_cal)
			load_cal_data_all();
		
		
	}
	
  }

  #ifdef _PCIE_USB_BUILD
  if( phy_mode==PCIE ) { //only pcie need align because of one mac
	txlane_align();
	if(use_ring_pll) pre_ringpll_rate = gen_pll_rate;
	else pre_lcpll_rate = gen_pll_rate;
  }
  #endif //_PCIE_USB_BUILD
  
  restore_train();
   
  DTL_DTX_DFE_clkoff_reset_0();
    
  if(phy_mode!=SATA) 
		delay01(90);
  
  
  lnx_EOM_ALIGN_CAL_DONE_LANE = 0; //moved eom_align_cal to inside train
	
  //reg_PWRON_SEQ = 0; pwrsq_on = 0;
  
  reg_RST_FRAME_SYNC_DET_CLK_LANE = 1;
  delay01(10);
  reg_RST_FRAME_SYNC_DET_CLK_LANE = 0;
  
  PHY_STATUS_INT = IDLE;
  pre_gen_pll_rate = gen_pll_rate;
  rxinit_4_spdchg_en = 1;
  
  //move to P1_TXDETRX
  //if( phy_mode==PCIE && pwrsq_on ) {
  //	if(cmx_VIRTUAL_TDR_SIM_EN && reg_ANA_DPHY_SQ_DETECTED_LANE) { //lane reduce test by sq_detect
  //		reg_TRX_VIRTUAL_CTRL_LANE = 1; //3fc[0]
  //	}
  //}

  delay01(5); //TXCLK need more time 0.5sec even in bypassed delay 
  
  reg_PIN_PLL_READY_RX_LANE = 1;
  reg_PIN_PLL_READY_TX_LANE = 1;
  reg_PIN_GPO_LANE_7_0 = reg_PIN_GPO_LANE_7_0 | 0x10; // Set indicator, bit [4]
	
	if(cmx_AUTO_RX_INIT_EN == 0)
		PHY_STATUS = ST_PLLREADY; 
	else	
		PHY_STATUS = ST_DTL;	
  
}

// ***************** Dummy Functions to fill up program space in SRAM for testing code access in middle and bottom *************
void loadspeedtbl_gen_dummy_1(void) BANKING_CTRL {
	uint16_t temp;
	uint8_t gen;
	uint8_t	dec_ratio;

	gen = gen_tx;

	#ifdef _SATA_SERDES_BUILD
	if(phy_mode==SERDES) {
		gen = min(reg_PIN_PHY_GEN_TX_RD_LANE_3_0, cmx_PHY_GEN_MAX_3_0);
		gen = get_gen_memory_index(gen);
	}
	#endif

	#ifdef _PCIE_USB_BUILD
	//if(pcie_usb_mode)
	{
		if( gen_tx < 2) {
			reg_TX_SEL_BITS_LANE = 0; reg_RX_SEL_BITS_LANE = 0;
			#ifndef _28G_X2_ROM
			reg_TX_DEEMPH_FM_REG_LANE = 0;
			#endif
		}
		else {
			reg_TX_SEL_BITS_LANE = 1; reg_RX_SEL_BITS_LANE = 1;
			#ifndef _28G_X2_ROM
			reg_TX_DEEMPH_FM_REG_LANE = 1;
			#endif
		}
	}
	#endif

	gen_pll_rate	 						= speedtable[gen][spdoft_pll_rate_sel_tx];
	if(gen_pll_rate>1 || phy_mode==SERDES) tx_pll_rate = 0;
	else tx_pll_rate = gen_pll_rate;
	use_ring_pll 							= speedtable[gen][spdoft_tx_ck_sel_lane];

	reg_MCU_DEBUG0_LANE_7_0 = 0x33;
	reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
	reg_MCU_DEBUG2_LANE_7_0 = gen;
	reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
	reg_MCU_DEBUG4_LANE_7_0 = max_gen;
	reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
	reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
	reg_MCU_DEBUG7_LANE_7_0 = tx_pll_rate;
	reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;

	//do first when PU_F1*=1
	if(speedtable[gen][spdoft_pu_f1p_s_o_lane]) reg_PU_F1P_S_O_LANE = 1;
	if(speedtable[gen][spdoft_pu_f1p_d_o_lane]) reg_PU_F1P_D_O_LANE	= 1;
	if(speedtable[gen][spdoft_pu_f1p_d_e_lane]) reg_PU_F1P_D_E_LANE	= 1;
	if(phy_mode!=SATA || PHY_STATUS!=ST_SPDCHG || pwrsq_on) {
		if(speedtable[gen][spdoft_pu_f1n_s_o_lane]) reg_PU_F1N_S_O_LANE = 1;
		if(speedtable[gen][spdoft_pu_f1n_d_o_lane]) reg_PU_F1N_D_O_LANE = 1;
		if(speedtable[gen][spdoft_pu_f1n_s_e_lane]) reg_PU_F1N_S_E_LANE	= 1;
		if(speedtable[gen][spdoft_pu_f1n_d_e_lane])	reg_PU_F1N_D_E_LANE	= 1;
		if(speedtable[gen][spdoft_pu_f1p_s_e_lane]) reg_PU_F1P_S_E_LANE	= 1;
	}

	//for SATA speed change
	reg_TX_SPEED_DIV_LANE_2_0		 		= speedtable[gen][spdoft_tx_speed_div_lane];
	reg_TXSPEED_DIV_LANE_2_0 				= speedtable[gen][spdoft_tx_speed_div_lane]; //duplicated for digital use

	reg_TX_EM_PRE_CTRL_LANE_3_0				= speedtable[gen][spdoft_tx_em_pre_ctrl_lane];

	reg_RX_SPEED_DIV_LANE_2_0		  		= speedtable[gen][spdoft_rx_speed_div_lane];
	reg_DTL_CLK_SPEEDUP_LANE_2_0  			= speedtable[gen][spdoft_dtl_clk_speedup_lane];
	reg_RX_REG0P9_SPEED_TRACK_DATA_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_data_lane];


	#ifdef _28G_X2
	switch(lnx_TXDCLK_NT_SEL_LANE_1_0) {
	case 0: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x24; break;
	case 1: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x84; break;
	case 2: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x2b; break;
	case 3: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x42; break;
	}
	if(reg_RX_SPEED_DIV_LANE_2_0&0x04) {
		switch(lnx_RXDCLK_NT_SEL_LANE_1_0) {
		case 0: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x40; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 1: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x82; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 2: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x5b; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 3: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x8a; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		}
	}
	else {
		switch(lnx_RXDCLK_NT_SEL_LANE_1_0) {
		case 0: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x20; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 1: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x80; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 2: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x2b; reg_RXCLK_NT_FIX_DIV_EN_LANE = 0; break;
		case 3: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x42; reg_RXCLK_NT_FIX_DIV_EN_LANE = 0; break;
		}
	}

	#endif
	reg_RX_SELMUFF_LANE_2_0 				= speedtable[gen][spdoft_rx_selmuff_lane];
	dfe_dis									= speedtable[gen][spdoft_reg_dfe_dis_lane];
	reg_DFE_TAP_SETTLE_SCALE_LANE_1_0       = speedtable[gen][spdoft_reg_dfe_tap_settle_scale_lane];
	reg_FFE_DATA_RATE_LANE_3_0  			= speedtable[gen][spdoft_ffe_data_rate_lane];
	reg_DFE_EN_LANE = dfe_dis==0;  reg_DFE_DIS_LANE = dfe_dis;

	if(phy_mode!=SATA || PHY_STATUS!=ST_SPDCHG || pwrsq_on) {
	reg_TX_CK_SEL_LANE 						= use_ring_pll|(serdes_ring_lane_en & ring_lane_sel);
	reg_TX_CK_SEL_DIG_LANE 					= reg_TX_CK_SEL_LANE;	//duplicated for digital use
	reg_TX_REG_SPEED_TRK_CLK_LANE_2_0	 	= speedtable[gen][spdoft_tx_reg_speed_trk_clk_lane];
	reg_TX_REG_SPEED_TRK_DATA_LANE_2_0 	 	= speedtable[gen][spdoft_tx_reg_speed_trk_data_lane];

	reg_TX_EM_CTRL_REG_EN_LANE				= speedtable[gen][spdoft_tx_em_ctrl_reg_en_lane];
	reg_TX_EM_CTRL_PIPE_SEL_LANE			= speedtable[gen][spdoft_tx_em_ctrl_pipe_sel_lane];
	reg_ANA_TX_EM_PRE_EN_LANE				= speedtable[gen][spdoft_tx_em_pre_en_lane];
	//#ifndef _28G_X2_ROM
	if(phy_mode != PCIE)
	//#endif
		reg_ANA_TX_EM_PO_EN_LANE				= speedtable[gen][spdoft_tx_em_po_en_lane];
	reg_TX_EM_PO_CTRL_LANE_3_0				= speedtable[gen][spdoft_tx_em_po_ctrl_lane];

	reg_SLEWRATE_EN_LANE_1_0				= speedtable[gen][spdoft_slewrate_en_lane];
	reg_SLEWCTRL1_LANE_1_0					= speedtable[gen][spdoft_slewctrl1_lane];
	reg_SLEWCTRL0_LANE_1_0					= speedtable[gen][spdoft_slewctrl0_lane];
	reg_TX_TRAIN_PAT_SEL_LANE_1_0			= speedtable[gen][spdoft_tx_train_pat_sel_lane];
	reg_TRAIN_PAT_NUM_LANE_8_0_b0			= speedtable[gen][spdoft_train_pat_num_lane];
	reg_TRAIN_PAT_NUM_LANE_8_0_b1			= speedtable[gen][spdoft_train_pat_num_lane+1];
	reg_TX_TRAIN_PAT_TOGGLE_LANE			= speedtable[gen][spdoft_tx_train_pat_toggle_lane];
	reg_PACKET_SYNC_DIS_LANE				= speedtable[gen][spdoft_packet_sync_dis_lane];
	reg_SYNC_DET_DIS_LANE					= speedtable[gen][spdoft_sync_det_dis_lane];

	//gen = gen_rx;

	rx_pll_rate	 							= speedtable[gen][spdoft_pll_rate_sel_rx];
	if(rx_pll_rate>1 || phy_mode==SERDES) rx_pll_rate = 0;
	reg_RX_CK_SEL_LANE 						= speedtable[gen][spdoft_rx_ck_sel_lane] | (serdes_ring_lane_en & ring_lane_sel);
	reg_INTPI_LANE_3_0			  			= speedtable[gen][spdoft_intpi_lane];
	reg_INTPR_LANE_1_0				  		= speedtable[gen][spdoft_intpr_lane];
	reg_DLL_FREQ_SEL_LANE_1_0	  			= speedtable[gen][spdoft_dll_freq_sel_lane];
	if(speedtable[gen][spdoft_dll_freq_sel_lane]&0x04) reg_DLL_FREQ_SEL_LANE_2 = 1;
	else reg_DLL_FREQ_SEL_LANE_2 = 0;
	reg_EOM_DLL_FREQ_SEL_LANE_1_0  			= speedtable[gen][spdoft_eom_dll_freq_sel_lane];
	if(speedtable[gen][spdoft_eom_dll_freq_sel_lane]&0x04) reg_EOM_DLL_FREQ_SEL_LANE_2 = 1;
	else reg_EOM_DLL_FREQ_SEL_LANE_2 = 0;
	reg_ALIGN90_8G_EN_LANE		 			= speedtable[gen][spdoft_align90_8g_en_lane];
	reg_RX_REG0P9_SPEED_TRACK_CLK_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_clk_lane];
	reg_RX_REG0P9_SPEED_TRACK_CLK_HALF_LANE	= speedtable[gen][spdoft_rx_reg0p9_speed_track_clk_half_lane];
	reg_RX_SELMUFI_LANE_2_0 				= speedtable[gen][spdoft_rx_selmufi_lane];
	reg_REG_SELMUPI_LANE_3_0 				= speedtable[gen][spdoft_reg_selmupi_lane];
	reg_REG_SELMUPF_LANE_3_0 				= speedtable[gen][spdoft_reg_selmupf_lane];
	reg_DTL_CLK_MODE_LANE_1_0 				= speedtable[gen][spdoft_dtl_clk_mode_lane];
	reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b0 	= speedtable[gen][spdoft_rx_foffset_extra_m_lane];
	reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b1 	= speedtable[gen][spdoft_rx_foffset_extra_m_lane+1];
	reg_INIT_RXFOFFS_LANE_9_0_b0			= speedtable[gen][spdoft_init_rxfoffs_lane];
	reg_INIT_RXFOFFS_LANE_9_0_b1			= speedtable[gen][spdoft_init_rxfoffs_lane+1];

	#ifdef _28G_X2
	//UPHY14_TRX_ANAREG_TOP_152.BT.B0			= speedtable[gen][spdoft_rx_rxclk_25m_ctrl_lane];
	reg_RXCLK_25M_CTRL_LANE_1_0					= speedtable[gen][spdoft_rx_rxclk_25m_ctrl_lane];
	reg_RXCLK_25M_DIV1P5_EN_LANE            	= speedtable[gen][spdoft_rx_rxclk_25m_div1p5_en_lane];
	reg_RXCLK_25M_DIV_LANE_7_0 					= speedtable[gen][spdoft_rx_rxclk_25m_div_lane];
	reg_RXCLK_25M_FIX_DIV_EN_LANE				= speedtable[gen][spdoft_rx_rxclk_25m_fix_div_en_lane];
	//reg_DEMUX2_CLK_DLY_EN_LANE = 0;
	//reg_CLK_BKWD2_DIRECTION_LCPLL_LANE = 0;
	#endif

	rxdll_temp_a_lane = speedtable[gen][spdoft_rxdll_temp_a_lane];
	rxdll_temp_b_lane = speedtable[gen][spdoft_rxdll_temp_b_lane];

	//*sequence need
	reg_PATH_DISABLE_EDGE_LANE              = speedtable[gen][spdoft_path_disable_edge_lane];
	reg_ANA_RX_DFE_F1_POL_EN_D_LANE			= speedtable[gen][spdoft_dfe_f1_pol_en_d_lane];
	reg_ANA_RX_DFE_F1_POL_EN_S_LANE         = speedtable[gen][spdoft_dfe_f1_pol_en_s_lane];
	reg_ANA_RX_DFE_F1_POL_D_LANE            = speedtable[gen][spdoft_dfe_f1_pol_d_lane];
	reg_ANA_RX_DFE_F1_POL_S_LANE            = speedtable[gen][spdoft_dfe_f1_pol_s_lane];
	reg_ANA_RX_DFE_F1_POL_EN_D_FORCE_LANE	= speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_en_d_force_lane];
	reg_ANA_RX_DFE_F1_POL_EN_S_FORCE_LANE   = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_en_s_force_lane];
	reg_ANA_RX_DFE_F1_POL_D_FORCE_LANE      = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_d_force_lane];
	reg_ANA_RX_DFE_F1_POL_S_FORCE_LANE      = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_s_force_lane];
	reg_DFE_FULL_RATE_MODE_LANE             = speedtable[gen][spdoft_reg_dfe_full_rate_mode_lane];

	//do last when PU_F1*=0
	reg_PU_F1N_S_O_LANE                     = speedtable[gen][spdoft_pu_f1n_s_o_lane];
	reg_PU_F1N_D_O_LANE                     = speedtable[gen][spdoft_pu_f1n_d_o_lane];
	reg_PU_F1N_S_E_LANE	                    = speedtable[gen][spdoft_pu_f1n_s_e_lane];
	reg_PU_F1N_D_E_LANE	                    = speedtable[gen][spdoft_pu_f1n_d_e_lane];
	reg_PU_F1P_S_E_LANE	                    = speedtable[gen][spdoft_pu_f1p_s_e_lane];
	}

	reg_PU_F1P_S_O_LANE                     = speedtable[gen][spdoft_pu_f1p_s_o_lane];
	reg_PU_F1P_D_O_LANE	                    = speedtable[gen][spdoft_pu_f1p_d_o_lane];
	reg_PU_F1P_D_E_LANE						= speedtable[gen][spdoft_pu_f1p_d_e_lane];

	if(cmx_TX_SSC_CTRL_SEL) {
		reg_SSC_EN_FM_REG_LANE = 1;
		if(train_save_tb[gen].ssc_en)
			reg_SSC_EN_LANE = 1;
		else reg_SSC_EN_LANE = 0;

		if(use_ring_pll) {
			reg_SSC_DSPREAD_TX_RING					=  tx_tb[gen].ssc_dspread;
			reg_SSC_AMP_RING_6_0					=  tx_tb[gen].ssc_amp;
		}
		else {
			reg_SSC_DSPREAD_TX 						=  tx_tb[gen].ssc_dspread;
			reg_SSC_AMP_6_0							=  tx_tb[gen].ssc_amp;
		}
	}
	else
		reg_SSC_EN_FM_REG_LANE = 0;

	// for APTA
	if(phy_mode == SAS && gen==4) reg_TX_TRAIN_IF_CLK_EN_LANE = 1;
	else reg_TX_TRAIN_IF_CLK_EN_LANE = 0;

	// for sq_thresh_ratio
	sq_thrs_ratio = sq_thrs_ratio_tb[gen];
	temp = lnx_CAL_SQ_THRESH_LANE_7_0;
	reg_SQ_THRESH_LANE_5_0 = (uint8_t)((temp * sq_thrs_ratio)>>5);

	restore_train();

	reg_MCU_DEBUG0_LANE_7_0 = 0x39;

}

void loadspeedtbl_gen_dummy_2(void) BANKING_CTRL {
	uint16_t temp;
	uint8_t gen;
	uint8_t	dec_ratio;

	gen = gen_tx;

	#ifdef _SATA_SERDES_BUILD
	if(phy_mode==SERDES) {
		gen = min(reg_PIN_PHY_GEN_TX_RD_LANE_3_0, cmx_PHY_GEN_MAX_3_0);
		gen = get_gen_memory_index(gen);
	}
	#endif

	#ifdef _PCIE_USB_BUILD
	//if(pcie_usb_mode)
	{
		if( gen_tx < 2) {
			reg_TX_SEL_BITS_LANE = 0; reg_RX_SEL_BITS_LANE = 0;
			#ifndef _28G_X2_ROM
			reg_TX_DEEMPH_FM_REG_LANE = 0;
			#endif
		}
		else {
			reg_TX_SEL_BITS_LANE = 1; reg_RX_SEL_BITS_LANE = 1;
			#ifndef _28G_X2_ROM
			reg_TX_DEEMPH_FM_REG_LANE = 1;
			#endif
		}
	}
	#endif

	gen_pll_rate	 						= speedtable[gen][spdoft_pll_rate_sel_tx];
	if(gen_pll_rate>1 || phy_mode==SERDES) tx_pll_rate = 0;
	else tx_pll_rate = gen_pll_rate;
	use_ring_pll 							= speedtable[gen][spdoft_tx_ck_sel_lane];

	reg_MCU_DEBUG0_LANE_7_0 = 0x33;
	reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
	reg_MCU_DEBUG2_LANE_7_0 = gen;
	reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
	reg_MCU_DEBUG4_LANE_7_0 = max_gen;
	reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
	reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
	reg_MCU_DEBUG7_LANE_7_0 = tx_pll_rate;
	reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;

	//do first when PU_F1*=1
	if(speedtable[gen][spdoft_pu_f1p_s_o_lane]) reg_PU_F1P_S_O_LANE = 1;
	if(speedtable[gen][spdoft_pu_f1p_d_o_lane]) reg_PU_F1P_D_O_LANE	= 1;
	if(speedtable[gen][spdoft_pu_f1p_d_e_lane]) reg_PU_F1P_D_E_LANE	= 1;
	if(phy_mode!=SATA || PHY_STATUS!=ST_SPDCHG || pwrsq_on) {
		if(speedtable[gen][spdoft_pu_f1n_s_o_lane]) reg_PU_F1N_S_O_LANE = 1;
		if(speedtable[gen][spdoft_pu_f1n_d_o_lane]) reg_PU_F1N_D_O_LANE = 1;
		if(speedtable[gen][spdoft_pu_f1n_s_e_lane]) reg_PU_F1N_S_E_LANE	= 1;
		if(speedtable[gen][spdoft_pu_f1n_d_e_lane])	reg_PU_F1N_D_E_LANE	= 1;
		if(speedtable[gen][spdoft_pu_f1p_s_e_lane]) reg_PU_F1P_S_E_LANE	= 1;
	}

	//for SATA speed change
	reg_TX_SPEED_DIV_LANE_2_0		 		= speedtable[gen][spdoft_tx_speed_div_lane];
	reg_TXSPEED_DIV_LANE_2_0 				= speedtable[gen][spdoft_tx_speed_div_lane]; //duplicated for digital use

	reg_TX_EM_PRE_CTRL_LANE_3_0				= speedtable[gen][spdoft_tx_em_pre_ctrl_lane];

	reg_RX_SPEED_DIV_LANE_2_0		  		= speedtable[gen][spdoft_rx_speed_div_lane];
	reg_DTL_CLK_SPEEDUP_LANE_2_0  			= speedtable[gen][spdoft_dtl_clk_speedup_lane];
	reg_RX_REG0P9_SPEED_TRACK_DATA_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_data_lane];


	#ifdef _28G_X2
	switch(lnx_TXDCLK_NT_SEL_LANE_1_0) {
	case 0: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x24; break;
	case 1: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x84; break;
	case 2: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x2b; break;
	case 3: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x42; break;
	}
	if(reg_RX_SPEED_DIV_LANE_2_0&0x04) {
		switch(lnx_RXDCLK_NT_SEL_LANE_1_0) {
		case 0: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x40; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 1: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x82; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 2: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x5b; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 3: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x8a; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		}
	}
	else {
		switch(lnx_RXDCLK_NT_SEL_LANE_1_0) {
		case 0: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x20; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 1: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x80; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 2: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x2b; reg_RXCLK_NT_FIX_DIV_EN_LANE = 0; break;
		case 3: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x42; reg_RXCLK_NT_FIX_DIV_EN_LANE = 0; break;
		}
	}

	#endif
	reg_RX_SELMUFF_LANE_2_0 				= speedtable[gen][spdoft_rx_selmuff_lane];
	dfe_dis									= speedtable[gen][spdoft_reg_dfe_dis_lane];
	reg_DFE_TAP_SETTLE_SCALE_LANE_1_0       = speedtable[gen][spdoft_reg_dfe_tap_settle_scale_lane];
	reg_FFE_DATA_RATE_LANE_3_0  			= speedtable[gen][spdoft_ffe_data_rate_lane];
	reg_DFE_EN_LANE = dfe_dis==0;  reg_DFE_DIS_LANE = dfe_dis;

	if(phy_mode!=SATA || PHY_STATUS!=ST_SPDCHG || pwrsq_on) {
	reg_TX_CK_SEL_LANE 						= use_ring_pll|(serdes_ring_lane_en & ring_lane_sel);
	reg_TX_CK_SEL_DIG_LANE 					= reg_TX_CK_SEL_LANE;	//duplicated for digital use
	reg_TX_REG_SPEED_TRK_CLK_LANE_2_0	 	= speedtable[gen][spdoft_tx_reg_speed_trk_clk_lane];
	reg_TX_REG_SPEED_TRK_DATA_LANE_2_0 	 	= speedtable[gen][spdoft_tx_reg_speed_trk_data_lane];

	reg_TX_EM_CTRL_REG_EN_LANE				= speedtable[gen][spdoft_tx_em_ctrl_reg_en_lane];
	reg_TX_EM_CTRL_PIPE_SEL_LANE			= speedtable[gen][spdoft_tx_em_ctrl_pipe_sel_lane];
	reg_ANA_TX_EM_PRE_EN_LANE				= speedtable[gen][spdoft_tx_em_pre_en_lane];
	//#ifndef _28G_X2_ROM
	if(phy_mode != PCIE)
	//#endif
		reg_ANA_TX_EM_PO_EN_LANE				= speedtable[gen][spdoft_tx_em_po_en_lane];
	reg_TX_EM_PO_CTRL_LANE_3_0				= speedtable[gen][spdoft_tx_em_po_ctrl_lane];

	reg_SLEWRATE_EN_LANE_1_0				= speedtable[gen][spdoft_slewrate_en_lane];
	reg_SLEWCTRL1_LANE_1_0					= speedtable[gen][spdoft_slewctrl1_lane];
	reg_SLEWCTRL0_LANE_1_0					= speedtable[gen][spdoft_slewctrl0_lane];
	reg_TX_TRAIN_PAT_SEL_LANE_1_0			= speedtable[gen][spdoft_tx_train_pat_sel_lane];
	reg_TRAIN_PAT_NUM_LANE_8_0_b0			= speedtable[gen][spdoft_train_pat_num_lane];
	reg_TRAIN_PAT_NUM_LANE_8_0_b1			= speedtable[gen][spdoft_train_pat_num_lane+1];
	reg_TX_TRAIN_PAT_TOGGLE_LANE			= speedtable[gen][spdoft_tx_train_pat_toggle_lane];
	reg_PACKET_SYNC_DIS_LANE				= speedtable[gen][spdoft_packet_sync_dis_lane];
	reg_SYNC_DET_DIS_LANE					= speedtable[gen][spdoft_sync_det_dis_lane];

	//gen = gen_rx;

	rx_pll_rate	 							= speedtable[gen][spdoft_pll_rate_sel_rx];
	if(rx_pll_rate>1 || phy_mode==SERDES) rx_pll_rate = 0;
	reg_RX_CK_SEL_LANE 						= speedtable[gen][spdoft_rx_ck_sel_lane] | (serdes_ring_lane_en & ring_lane_sel);
	reg_INTPI_LANE_3_0			  			= speedtable[gen][spdoft_intpi_lane];
	reg_INTPR_LANE_1_0				  		= speedtable[gen][spdoft_intpr_lane];
	reg_DLL_FREQ_SEL_LANE_1_0	  			= speedtable[gen][spdoft_dll_freq_sel_lane];
	if(speedtable[gen][spdoft_dll_freq_sel_lane]&0x04) reg_DLL_FREQ_SEL_LANE_2 = 1;
	else reg_DLL_FREQ_SEL_LANE_2 = 0;
	reg_EOM_DLL_FREQ_SEL_LANE_1_0  			= speedtable[gen][spdoft_eom_dll_freq_sel_lane];
	if(speedtable[gen][spdoft_eom_dll_freq_sel_lane]&0x04) reg_EOM_DLL_FREQ_SEL_LANE_2 = 1;
	else reg_EOM_DLL_FREQ_SEL_LANE_2 = 0;
	reg_ALIGN90_8G_EN_LANE		 			= speedtable[gen][spdoft_align90_8g_en_lane];
	reg_RX_REG0P9_SPEED_TRACK_CLK_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_clk_lane];
	reg_RX_REG0P9_SPEED_TRACK_CLK_HALF_LANE	= speedtable[gen][spdoft_rx_reg0p9_speed_track_clk_half_lane];
	reg_RX_SELMUFI_LANE_2_0 				= speedtable[gen][spdoft_rx_selmufi_lane];
	reg_REG_SELMUPI_LANE_3_0 				= speedtable[gen][spdoft_reg_selmupi_lane];
	reg_REG_SELMUPF_LANE_3_0 				= speedtable[gen][spdoft_reg_selmupf_lane];
	reg_DTL_CLK_MODE_LANE_1_0 				= speedtable[gen][spdoft_dtl_clk_mode_lane];
	reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b0 	= speedtable[gen][spdoft_rx_foffset_extra_m_lane];
	reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b1 	= speedtable[gen][spdoft_rx_foffset_extra_m_lane+1];
	reg_INIT_RXFOFFS_LANE_9_0_b0			= speedtable[gen][spdoft_init_rxfoffs_lane];
	reg_INIT_RXFOFFS_LANE_9_0_b1			= speedtable[gen][spdoft_init_rxfoffs_lane+1];

	#ifdef _28G_X2
	//UPHY14_TRX_ANAREG_TOP_152.BT.B0			= speedtable[gen][spdoft_rx_rxclk_25m_ctrl_lane];
	reg_RXCLK_25M_CTRL_LANE_1_0					= speedtable[gen][spdoft_rx_rxclk_25m_ctrl_lane];
	reg_RXCLK_25M_DIV1P5_EN_LANE            	= speedtable[gen][spdoft_rx_rxclk_25m_div1p5_en_lane];
	reg_RXCLK_25M_DIV_LANE_7_0 					= speedtable[gen][spdoft_rx_rxclk_25m_div_lane];
	reg_RXCLK_25M_FIX_DIV_EN_LANE				= speedtable[gen][spdoft_rx_rxclk_25m_fix_div_en_lane];
	//reg_DEMUX2_CLK_DLY_EN_LANE = 0;
	//reg_CLK_BKWD2_DIRECTION_LCPLL_LANE = 0;
	#endif

	rxdll_temp_a_lane = speedtable[gen][spdoft_rxdll_temp_a_lane];
	rxdll_temp_b_lane = speedtable[gen][spdoft_rxdll_temp_b_lane];

	//*sequence need
	reg_PATH_DISABLE_EDGE_LANE              = speedtable[gen][spdoft_path_disable_edge_lane];
	reg_ANA_RX_DFE_F1_POL_EN_D_LANE			= speedtable[gen][spdoft_dfe_f1_pol_en_d_lane];
	reg_ANA_RX_DFE_F1_POL_EN_S_LANE         = speedtable[gen][spdoft_dfe_f1_pol_en_s_lane];
	reg_ANA_RX_DFE_F1_POL_D_LANE            = speedtable[gen][spdoft_dfe_f1_pol_d_lane];
	reg_ANA_RX_DFE_F1_POL_S_LANE            = speedtable[gen][spdoft_dfe_f1_pol_s_lane];
	reg_ANA_RX_DFE_F1_POL_EN_D_FORCE_LANE	= speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_en_d_force_lane];
	reg_ANA_RX_DFE_F1_POL_EN_S_FORCE_LANE   = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_en_s_force_lane];
	reg_ANA_RX_DFE_F1_POL_D_FORCE_LANE      = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_d_force_lane];
	reg_ANA_RX_DFE_F1_POL_S_FORCE_LANE      = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_s_force_lane];
	reg_DFE_FULL_RATE_MODE_LANE             = speedtable[gen][spdoft_reg_dfe_full_rate_mode_lane];

	//do last when PU_F1*=0
	reg_PU_F1N_S_O_LANE                     = speedtable[gen][spdoft_pu_f1n_s_o_lane];
	reg_PU_F1N_D_O_LANE                     = speedtable[gen][spdoft_pu_f1n_d_o_lane];
	reg_PU_F1N_S_E_LANE	                    = speedtable[gen][spdoft_pu_f1n_s_e_lane];
	reg_PU_F1N_D_E_LANE	                    = speedtable[gen][spdoft_pu_f1n_d_e_lane];
	reg_PU_F1P_S_E_LANE	                    = speedtable[gen][spdoft_pu_f1p_s_e_lane];
	}

	reg_PU_F1P_S_O_LANE                     = speedtable[gen][spdoft_pu_f1p_s_o_lane];
	reg_PU_F1P_D_O_LANE	                    = speedtable[gen][spdoft_pu_f1p_d_o_lane];
	reg_PU_F1P_D_E_LANE						= speedtable[gen][spdoft_pu_f1p_d_e_lane];

	if(cmx_TX_SSC_CTRL_SEL) {
		reg_SSC_EN_FM_REG_LANE = 1;
		if(train_save_tb[gen].ssc_en)
			reg_SSC_EN_LANE = 1;
		else reg_SSC_EN_LANE = 0;

		if(use_ring_pll) {
			reg_SSC_DSPREAD_TX_RING					=  tx_tb[gen].ssc_dspread;
			reg_SSC_AMP_RING_6_0					=  tx_tb[gen].ssc_amp;
		}
		else {
			reg_SSC_DSPREAD_TX 						=  tx_tb[gen].ssc_dspread;
			reg_SSC_AMP_6_0							=  tx_tb[gen].ssc_amp;
		}
	}
	else
		reg_SSC_EN_FM_REG_LANE = 0;

	// for APTA
	if(phy_mode == SAS && gen==4) reg_TX_TRAIN_IF_CLK_EN_LANE = 1;
	else reg_TX_TRAIN_IF_CLK_EN_LANE = 0;

	// for sq_thresh_ratio
	sq_thrs_ratio = sq_thrs_ratio_tb[gen];
	temp = lnx_CAL_SQ_THRESH_LANE_7_0;
	reg_SQ_THRESH_LANE_5_0 = (uint8_t)((temp * sq_thrs_ratio)>>5);

	restore_train();

	reg_MCU_DEBUG0_LANE_7_0 = 0x39;

}

void loadspeedtbl_gen_dummy_3(void) BANKING_CTRL {
	uint16_t temp;
	uint8_t gen;
	uint8_t	dec_ratio;

	gen = gen_tx;

	#ifdef _SATA_SERDES_BUILD
	if(phy_mode==SERDES) {
		gen = min(reg_PIN_PHY_GEN_TX_RD_LANE_3_0, cmx_PHY_GEN_MAX_3_0);
		gen = get_gen_memory_index(gen);
	}
	#endif

	#ifdef _PCIE_USB_BUILD
	//if(pcie_usb_mode)
	{
		if( gen_tx < 2) {
			reg_TX_SEL_BITS_LANE = 0; reg_RX_SEL_BITS_LANE = 0;
			#ifndef _28G_X2_ROM
			reg_TX_DEEMPH_FM_REG_LANE = 0;
			#endif
		}
		else {
			reg_TX_SEL_BITS_LANE = 1; reg_RX_SEL_BITS_LANE = 1;
			#ifndef _28G_X2_ROM
			reg_TX_DEEMPH_FM_REG_LANE = 1;
			#endif
		}
	}
	#endif

	gen_pll_rate	 						= speedtable[gen][spdoft_pll_rate_sel_tx];
	if(gen_pll_rate>1 || phy_mode==SERDES) tx_pll_rate = 0;
	else tx_pll_rate = gen_pll_rate;
	use_ring_pll 							= speedtable[gen][spdoft_tx_ck_sel_lane];

	reg_MCU_DEBUG0_LANE_7_0 = 0x33;
	reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
	reg_MCU_DEBUG2_LANE_7_0 = gen;
	reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
	reg_MCU_DEBUG4_LANE_7_0 = max_gen;
	reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
	reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
	reg_MCU_DEBUG7_LANE_7_0 = tx_pll_rate;
	reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;

	//do first when PU_F1*=1
	if(speedtable[gen][spdoft_pu_f1p_s_o_lane]) reg_PU_F1P_S_O_LANE = 1;
	if(speedtable[gen][spdoft_pu_f1p_d_o_lane]) reg_PU_F1P_D_O_LANE	= 1;
	if(speedtable[gen][spdoft_pu_f1p_d_e_lane]) reg_PU_F1P_D_E_LANE	= 1;
	if(phy_mode!=SATA || PHY_STATUS!=ST_SPDCHG || pwrsq_on) {
		if(speedtable[gen][spdoft_pu_f1n_s_o_lane]) reg_PU_F1N_S_O_LANE = 1;
		if(speedtable[gen][spdoft_pu_f1n_d_o_lane]) reg_PU_F1N_D_O_LANE = 1;
		if(speedtable[gen][spdoft_pu_f1n_s_e_lane]) reg_PU_F1N_S_E_LANE	= 1;
		if(speedtable[gen][spdoft_pu_f1n_d_e_lane])	reg_PU_F1N_D_E_LANE	= 1;
		if(speedtable[gen][spdoft_pu_f1p_s_e_lane]) reg_PU_F1P_S_E_LANE	= 1;
	}

	//for SATA speed change
	reg_TX_SPEED_DIV_LANE_2_0		 		= speedtable[gen][spdoft_tx_speed_div_lane];
	reg_TXSPEED_DIV_LANE_2_0 				= speedtable[gen][spdoft_tx_speed_div_lane]; //duplicated for digital use

	reg_TX_EM_PRE_CTRL_LANE_3_0				= speedtable[gen][spdoft_tx_em_pre_ctrl_lane];

	reg_RX_SPEED_DIV_LANE_2_0		  		= speedtable[gen][spdoft_rx_speed_div_lane];
	reg_DTL_CLK_SPEEDUP_LANE_2_0  			= speedtable[gen][spdoft_dtl_clk_speedup_lane];
	reg_RX_REG0P9_SPEED_TRACK_DATA_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_data_lane];


	#ifdef _28G_X2
	switch(lnx_TXDCLK_NT_SEL_LANE_1_0) {
	case 0: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x24; break;
	case 1: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x84; break;
	case 2: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x2b; break;
	case 3: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x42; break;
	}
	if(reg_RX_SPEED_DIV_LANE_2_0&0x04) {
		switch(lnx_RXDCLK_NT_SEL_LANE_1_0) {
		case 0: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x40; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 1: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x82; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 2: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x5b; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 3: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x8a; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		}
	}
	else {
		switch(lnx_RXDCLK_NT_SEL_LANE_1_0) {
		case 0: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x20; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 1: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x80; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 2: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x2b; reg_RXCLK_NT_FIX_DIV_EN_LANE = 0; break;
		case 3: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x42; reg_RXCLK_NT_FIX_DIV_EN_LANE = 0; break;
		}
	}

	#endif
	reg_RX_SELMUFF_LANE_2_0 				= speedtable[gen][spdoft_rx_selmuff_lane];
	dfe_dis									= speedtable[gen][spdoft_reg_dfe_dis_lane];
	reg_DFE_TAP_SETTLE_SCALE_LANE_1_0       = speedtable[gen][spdoft_reg_dfe_tap_settle_scale_lane];
	reg_FFE_DATA_RATE_LANE_3_0  			= speedtable[gen][spdoft_ffe_data_rate_lane];
	reg_DFE_EN_LANE = dfe_dis==0;  reg_DFE_DIS_LANE = dfe_dis;

	if(phy_mode!=SATA || PHY_STATUS!=ST_SPDCHG || pwrsq_on) {
	reg_TX_CK_SEL_LANE 						= use_ring_pll|(serdes_ring_lane_en & ring_lane_sel);
	reg_TX_CK_SEL_DIG_LANE 					= reg_TX_CK_SEL_LANE;	//duplicated for digital use
	reg_TX_REG_SPEED_TRK_CLK_LANE_2_0	 	= speedtable[gen][spdoft_tx_reg_speed_trk_clk_lane];
	reg_TX_REG_SPEED_TRK_DATA_LANE_2_0 	 	= speedtable[gen][spdoft_tx_reg_speed_trk_data_lane];

	reg_TX_EM_CTRL_REG_EN_LANE				= speedtable[gen][spdoft_tx_em_ctrl_reg_en_lane];
	reg_TX_EM_CTRL_PIPE_SEL_LANE			= speedtable[gen][spdoft_tx_em_ctrl_pipe_sel_lane];
	reg_ANA_TX_EM_PRE_EN_LANE				= speedtable[gen][spdoft_tx_em_pre_en_lane];
	//#ifndef _28G_X2_ROM
	if(phy_mode != PCIE)
	//#endif
		reg_ANA_TX_EM_PO_EN_LANE				= speedtable[gen][spdoft_tx_em_po_en_lane];
	reg_TX_EM_PO_CTRL_LANE_3_0				= speedtable[gen][spdoft_tx_em_po_ctrl_lane];

	reg_SLEWRATE_EN_LANE_1_0				= speedtable[gen][spdoft_slewrate_en_lane];
	reg_SLEWCTRL1_LANE_1_0					= speedtable[gen][spdoft_slewctrl1_lane];
	reg_SLEWCTRL0_LANE_1_0					= speedtable[gen][spdoft_slewctrl0_lane];
	reg_TX_TRAIN_PAT_SEL_LANE_1_0			= speedtable[gen][spdoft_tx_train_pat_sel_lane];
	reg_TRAIN_PAT_NUM_LANE_8_0_b0			= speedtable[gen][spdoft_train_pat_num_lane];
	reg_TRAIN_PAT_NUM_LANE_8_0_b1			= speedtable[gen][spdoft_train_pat_num_lane+1];
	reg_TX_TRAIN_PAT_TOGGLE_LANE			= speedtable[gen][spdoft_tx_train_pat_toggle_lane];
	reg_PACKET_SYNC_DIS_LANE				= speedtable[gen][spdoft_packet_sync_dis_lane];
	reg_SYNC_DET_DIS_LANE					= speedtable[gen][spdoft_sync_det_dis_lane];

	//gen = gen_rx;

	rx_pll_rate	 							= speedtable[gen][spdoft_pll_rate_sel_rx];
	if(rx_pll_rate>1 || phy_mode==SERDES) rx_pll_rate = 0;
	reg_RX_CK_SEL_LANE 						= speedtable[gen][spdoft_rx_ck_sel_lane] | (serdes_ring_lane_en & ring_lane_sel);
	reg_INTPI_LANE_3_0			  			= speedtable[gen][spdoft_intpi_lane];
	reg_INTPR_LANE_1_0				  		= speedtable[gen][spdoft_intpr_lane];
	reg_DLL_FREQ_SEL_LANE_1_0	  			= speedtable[gen][spdoft_dll_freq_sel_lane];
	if(speedtable[gen][spdoft_dll_freq_sel_lane]&0x04) reg_DLL_FREQ_SEL_LANE_2 = 1;
	else reg_DLL_FREQ_SEL_LANE_2 = 0;
	reg_EOM_DLL_FREQ_SEL_LANE_1_0  			= speedtable[gen][spdoft_eom_dll_freq_sel_lane];
	if(speedtable[gen][spdoft_eom_dll_freq_sel_lane]&0x04) reg_EOM_DLL_FREQ_SEL_LANE_2 = 1;
	else reg_EOM_DLL_FREQ_SEL_LANE_2 = 0;
	reg_ALIGN90_8G_EN_LANE		 			= speedtable[gen][spdoft_align90_8g_en_lane];
	reg_RX_REG0P9_SPEED_TRACK_CLK_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_clk_lane];
	reg_RX_REG0P9_SPEED_TRACK_CLK_HALF_LANE	= speedtable[gen][spdoft_rx_reg0p9_speed_track_clk_half_lane];
	reg_RX_SELMUFI_LANE_2_0 				= speedtable[gen][spdoft_rx_selmufi_lane];
	reg_REG_SELMUPI_LANE_3_0 				= speedtable[gen][spdoft_reg_selmupi_lane];
	reg_REG_SELMUPF_LANE_3_0 				= speedtable[gen][spdoft_reg_selmupf_lane];
	reg_DTL_CLK_MODE_LANE_1_0 				= speedtable[gen][spdoft_dtl_clk_mode_lane];
	reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b0 	= speedtable[gen][spdoft_rx_foffset_extra_m_lane];
	reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b1 	= speedtable[gen][spdoft_rx_foffset_extra_m_lane+1];
	reg_INIT_RXFOFFS_LANE_9_0_b0			= speedtable[gen][spdoft_init_rxfoffs_lane];
	reg_INIT_RXFOFFS_LANE_9_0_b1			= speedtable[gen][spdoft_init_rxfoffs_lane+1];

	#ifdef _28G_X2
	//UPHY14_TRX_ANAREG_TOP_152.BT.B0			= speedtable[gen][spdoft_rx_rxclk_25m_ctrl_lane];
	reg_RXCLK_25M_CTRL_LANE_1_0					= speedtable[gen][spdoft_rx_rxclk_25m_ctrl_lane];
	reg_RXCLK_25M_DIV1P5_EN_LANE            	= speedtable[gen][spdoft_rx_rxclk_25m_div1p5_en_lane];
	reg_RXCLK_25M_DIV_LANE_7_0 					= speedtable[gen][spdoft_rx_rxclk_25m_div_lane];
	reg_RXCLK_25M_FIX_DIV_EN_LANE				= speedtable[gen][spdoft_rx_rxclk_25m_fix_div_en_lane];
	//reg_DEMUX2_CLK_DLY_EN_LANE = 0;
	//reg_CLK_BKWD2_DIRECTION_LCPLL_LANE = 0;
	#endif

	rxdll_temp_a_lane = speedtable[gen][spdoft_rxdll_temp_a_lane];
	rxdll_temp_b_lane = speedtable[gen][spdoft_rxdll_temp_b_lane];

	//*sequence need
	reg_PATH_DISABLE_EDGE_LANE              = speedtable[gen][spdoft_path_disable_edge_lane];
	reg_ANA_RX_DFE_F1_POL_EN_D_LANE			= speedtable[gen][spdoft_dfe_f1_pol_en_d_lane];
	reg_ANA_RX_DFE_F1_POL_EN_S_LANE         = speedtable[gen][spdoft_dfe_f1_pol_en_s_lane];
	reg_ANA_RX_DFE_F1_POL_D_LANE            = speedtable[gen][spdoft_dfe_f1_pol_d_lane];
	reg_ANA_RX_DFE_F1_POL_S_LANE            = speedtable[gen][spdoft_dfe_f1_pol_s_lane];
	reg_ANA_RX_DFE_F1_POL_EN_D_FORCE_LANE	= speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_en_d_force_lane];
	reg_ANA_RX_DFE_F1_POL_EN_S_FORCE_LANE   = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_en_s_force_lane];
	reg_ANA_RX_DFE_F1_POL_D_FORCE_LANE      = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_d_force_lane];
	reg_ANA_RX_DFE_F1_POL_S_FORCE_LANE      = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_s_force_lane];
	reg_DFE_FULL_RATE_MODE_LANE             = speedtable[gen][spdoft_reg_dfe_full_rate_mode_lane];

	//do last when PU_F1*=0
	reg_PU_F1N_S_O_LANE                     = speedtable[gen][spdoft_pu_f1n_s_o_lane];
	reg_PU_F1N_D_O_LANE                     = speedtable[gen][spdoft_pu_f1n_d_o_lane];
	reg_PU_F1N_S_E_LANE	                    = speedtable[gen][spdoft_pu_f1n_s_e_lane];
	reg_PU_F1N_D_E_LANE	                    = speedtable[gen][spdoft_pu_f1n_d_e_lane];
	reg_PU_F1P_S_E_LANE	                    = speedtable[gen][spdoft_pu_f1p_s_e_lane];
	}

	reg_PU_F1P_S_O_LANE                     = speedtable[gen][spdoft_pu_f1p_s_o_lane];
	reg_PU_F1P_D_O_LANE	                    = speedtable[gen][spdoft_pu_f1p_d_o_lane];
	reg_PU_F1P_D_E_LANE						= speedtable[gen][spdoft_pu_f1p_d_e_lane];

	if(cmx_TX_SSC_CTRL_SEL) {
		reg_SSC_EN_FM_REG_LANE = 1;
		if(train_save_tb[gen].ssc_en)
			reg_SSC_EN_LANE = 1;
		else reg_SSC_EN_LANE = 0;

		if(use_ring_pll) {
			reg_SSC_DSPREAD_TX_RING					=  tx_tb[gen].ssc_dspread;
			reg_SSC_AMP_RING_6_0					=  tx_tb[gen].ssc_amp;
		}
		else {
			reg_SSC_DSPREAD_TX 						=  tx_tb[gen].ssc_dspread;
			reg_SSC_AMP_6_0							=  tx_tb[gen].ssc_amp;
		}
	}
	else
		reg_SSC_EN_FM_REG_LANE = 0;

	// for APTA
	if(phy_mode == SAS && gen==4) reg_TX_TRAIN_IF_CLK_EN_LANE = 1;
	else reg_TX_TRAIN_IF_CLK_EN_LANE = 0;

	// for sq_thresh_ratio
	sq_thrs_ratio = sq_thrs_ratio_tb[gen];
	temp = lnx_CAL_SQ_THRESH_LANE_7_0;
	reg_SQ_THRESH_LANE_5_0 = (uint8_t)((temp * sq_thrs_ratio)>>5);

	restore_train();

	reg_MCU_DEBUG0_LANE_7_0 = 0x39;

}

void loadspeedtbl_gen_dummy_4(void) BANKING_CTRL {
	uint16_t temp;
	uint8_t gen;
	uint8_t	dec_ratio;

	gen = gen_tx;

	#ifdef _SATA_SERDES_BUILD
	if(phy_mode==SERDES) {
		gen = min(reg_PIN_PHY_GEN_TX_RD_LANE_3_0, cmx_PHY_GEN_MAX_3_0);
		gen = get_gen_memory_index(gen);
	}
	#endif

	#ifdef _PCIE_USB_BUILD
	//if(pcie_usb_mode)
	{
		if( gen_tx < 2) {
			reg_TX_SEL_BITS_LANE = 0; reg_RX_SEL_BITS_LANE = 0;
			#ifndef _28G_X2_ROM
			reg_TX_DEEMPH_FM_REG_LANE = 0;
			#endif
		}
		else {
			reg_TX_SEL_BITS_LANE = 1; reg_RX_SEL_BITS_LANE = 1;
			#ifndef _28G_X2_ROM
			reg_TX_DEEMPH_FM_REG_LANE = 1;
			#endif
		}
	}
	#endif

	gen_pll_rate	 						= speedtable[gen][spdoft_pll_rate_sel_tx];
	if(gen_pll_rate>1 || phy_mode==SERDES) tx_pll_rate = 0;
	else tx_pll_rate = gen_pll_rate;
	use_ring_pll 							= speedtable[gen][spdoft_tx_ck_sel_lane];

	reg_MCU_DEBUG0_LANE_7_0 = 0x33;
	reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
	reg_MCU_DEBUG2_LANE_7_0 = gen;
	reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
	reg_MCU_DEBUG4_LANE_7_0 = max_gen;
	reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
	reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
	reg_MCU_DEBUG7_LANE_7_0 = tx_pll_rate;
	reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;

	//do first when PU_F1*=1
	if(speedtable[gen][spdoft_pu_f1p_s_o_lane]) reg_PU_F1P_S_O_LANE = 1;
	if(speedtable[gen][spdoft_pu_f1p_d_o_lane]) reg_PU_F1P_D_O_LANE	= 1;
	if(speedtable[gen][spdoft_pu_f1p_d_e_lane]) reg_PU_F1P_D_E_LANE	= 1;
	if(phy_mode!=SATA || PHY_STATUS!=ST_SPDCHG || pwrsq_on) {
		if(speedtable[gen][spdoft_pu_f1n_s_o_lane]) reg_PU_F1N_S_O_LANE = 1;
		if(speedtable[gen][spdoft_pu_f1n_d_o_lane]) reg_PU_F1N_D_O_LANE = 1;
		if(speedtable[gen][spdoft_pu_f1n_s_e_lane]) reg_PU_F1N_S_E_LANE	= 1;
		if(speedtable[gen][spdoft_pu_f1n_d_e_lane])	reg_PU_F1N_D_E_LANE	= 1;
		if(speedtable[gen][spdoft_pu_f1p_s_e_lane]) reg_PU_F1P_S_E_LANE	= 1;
	}

	//for SATA speed change
	reg_TX_SPEED_DIV_LANE_2_0		 		= speedtable[gen][spdoft_tx_speed_div_lane];
	reg_TXSPEED_DIV_LANE_2_0 				= speedtable[gen][spdoft_tx_speed_div_lane]; //duplicated for digital use

	reg_TX_EM_PRE_CTRL_LANE_3_0				= speedtable[gen][spdoft_tx_em_pre_ctrl_lane];

	reg_RX_SPEED_DIV_LANE_2_0		  		= speedtable[gen][spdoft_rx_speed_div_lane];
	reg_DTL_CLK_SPEEDUP_LANE_2_0  			= speedtable[gen][spdoft_dtl_clk_speedup_lane];
	reg_RX_REG0P9_SPEED_TRACK_DATA_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_data_lane];


	#ifdef _28G_X2
	switch(lnx_TXDCLK_NT_SEL_LANE_1_0) {
	case 0: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x24; break;
	case 1: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x84; break;
	case 2: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x2b; break;
	case 3: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x42; break;
	}
	if(reg_RX_SPEED_DIV_LANE_2_0&0x04) {
		switch(lnx_RXDCLK_NT_SEL_LANE_1_0) {
		case 0: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x40; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 1: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x82; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 2: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x5b; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 3: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x8a; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		}
	}
	else {
		switch(lnx_RXDCLK_NT_SEL_LANE_1_0) {
		case 0: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x20; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 1: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x80; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 2: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x2b; reg_RXCLK_NT_FIX_DIV_EN_LANE = 0; break;
		case 3: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x42; reg_RXCLK_NT_FIX_DIV_EN_LANE = 0; break;
		}
	}

	#endif
	reg_RX_SELMUFF_LANE_2_0 				= speedtable[gen][spdoft_rx_selmuff_lane];
	dfe_dis									= speedtable[gen][spdoft_reg_dfe_dis_lane];
	reg_DFE_TAP_SETTLE_SCALE_LANE_1_0       = speedtable[gen][spdoft_reg_dfe_tap_settle_scale_lane];
	reg_FFE_DATA_RATE_LANE_3_0  			= speedtable[gen][spdoft_ffe_data_rate_lane];
	reg_DFE_EN_LANE = dfe_dis==0;  reg_DFE_DIS_LANE = dfe_dis;

	if(phy_mode!=SATA || PHY_STATUS!=ST_SPDCHG || pwrsq_on) {
	reg_TX_CK_SEL_LANE 						= use_ring_pll|(serdes_ring_lane_en & ring_lane_sel);
	reg_TX_CK_SEL_DIG_LANE 					= reg_TX_CK_SEL_LANE;	//duplicated for digital use
	reg_TX_REG_SPEED_TRK_CLK_LANE_2_0	 	= speedtable[gen][spdoft_tx_reg_speed_trk_clk_lane];
	reg_TX_REG_SPEED_TRK_DATA_LANE_2_0 	 	= speedtable[gen][spdoft_tx_reg_speed_trk_data_lane];

	reg_TX_EM_CTRL_REG_EN_LANE				= speedtable[gen][spdoft_tx_em_ctrl_reg_en_lane];
	reg_TX_EM_CTRL_PIPE_SEL_LANE			= speedtable[gen][spdoft_tx_em_ctrl_pipe_sel_lane];
	reg_ANA_TX_EM_PRE_EN_LANE				= speedtable[gen][spdoft_tx_em_pre_en_lane];
	//#ifndef _28G_X2_ROM
	if(phy_mode != PCIE)
	//#endif
		reg_ANA_TX_EM_PO_EN_LANE				= speedtable[gen][spdoft_tx_em_po_en_lane];
	reg_TX_EM_PO_CTRL_LANE_3_0				= speedtable[gen][spdoft_tx_em_po_ctrl_lane];

	reg_SLEWRATE_EN_LANE_1_0				= speedtable[gen][spdoft_slewrate_en_lane];
	reg_SLEWCTRL1_LANE_1_0					= speedtable[gen][spdoft_slewctrl1_lane];
	reg_SLEWCTRL0_LANE_1_0					= speedtable[gen][spdoft_slewctrl0_lane];
	reg_TX_TRAIN_PAT_SEL_LANE_1_0			= speedtable[gen][spdoft_tx_train_pat_sel_lane];
	reg_TRAIN_PAT_NUM_LANE_8_0_b0			= speedtable[gen][spdoft_train_pat_num_lane];
	reg_TRAIN_PAT_NUM_LANE_8_0_b1			= speedtable[gen][spdoft_train_pat_num_lane+1];
	reg_TX_TRAIN_PAT_TOGGLE_LANE			= speedtable[gen][spdoft_tx_train_pat_toggle_lane];
	reg_PACKET_SYNC_DIS_LANE				= speedtable[gen][spdoft_packet_sync_dis_lane];
	reg_SYNC_DET_DIS_LANE					= speedtable[gen][spdoft_sync_det_dis_lane];

	//gen = gen_rx;

	rx_pll_rate	 							= speedtable[gen][spdoft_pll_rate_sel_rx];
	if(rx_pll_rate>1 || phy_mode==SERDES) rx_pll_rate = 0;
	reg_RX_CK_SEL_LANE 						= speedtable[gen][spdoft_rx_ck_sel_lane] | (serdes_ring_lane_en & ring_lane_sel);
	reg_INTPI_LANE_3_0			  			= speedtable[gen][spdoft_intpi_lane];
	reg_INTPR_LANE_1_0				  		= speedtable[gen][spdoft_intpr_lane];
	reg_DLL_FREQ_SEL_LANE_1_0	  			= speedtable[gen][spdoft_dll_freq_sel_lane];
	if(speedtable[gen][spdoft_dll_freq_sel_lane]&0x04) reg_DLL_FREQ_SEL_LANE_2 = 1;
	else reg_DLL_FREQ_SEL_LANE_2 = 0;
	reg_EOM_DLL_FREQ_SEL_LANE_1_0  			= speedtable[gen][spdoft_eom_dll_freq_sel_lane];
	if(speedtable[gen][spdoft_eom_dll_freq_sel_lane]&0x04) reg_EOM_DLL_FREQ_SEL_LANE_2 = 1;
	else reg_EOM_DLL_FREQ_SEL_LANE_2 = 0;
	reg_ALIGN90_8G_EN_LANE		 			= speedtable[gen][spdoft_align90_8g_en_lane];
	reg_RX_REG0P9_SPEED_TRACK_CLK_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_clk_lane];
	reg_RX_REG0P9_SPEED_TRACK_CLK_HALF_LANE	= speedtable[gen][spdoft_rx_reg0p9_speed_track_clk_half_lane];
	reg_RX_SELMUFI_LANE_2_0 				= speedtable[gen][spdoft_rx_selmufi_lane];
	reg_REG_SELMUPI_LANE_3_0 				= speedtable[gen][spdoft_reg_selmupi_lane];
	reg_REG_SELMUPF_LANE_3_0 				= speedtable[gen][spdoft_reg_selmupf_lane];
	reg_DTL_CLK_MODE_LANE_1_0 				= speedtable[gen][spdoft_dtl_clk_mode_lane];
	reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b0 	= speedtable[gen][spdoft_rx_foffset_extra_m_lane];
	reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b1 	= speedtable[gen][spdoft_rx_foffset_extra_m_lane+1];
	reg_INIT_RXFOFFS_LANE_9_0_b0			= speedtable[gen][spdoft_init_rxfoffs_lane];
	reg_INIT_RXFOFFS_LANE_9_0_b1			= speedtable[gen][spdoft_init_rxfoffs_lane+1];

	#ifdef _28G_X2
	//UPHY14_TRX_ANAREG_TOP_152.BT.B0			= speedtable[gen][spdoft_rx_rxclk_25m_ctrl_lane];
	reg_RXCLK_25M_CTRL_LANE_1_0					= speedtable[gen][spdoft_rx_rxclk_25m_ctrl_lane];
	reg_RXCLK_25M_DIV1P5_EN_LANE            	= speedtable[gen][spdoft_rx_rxclk_25m_div1p5_en_lane];
	reg_RXCLK_25M_DIV_LANE_7_0 					= speedtable[gen][spdoft_rx_rxclk_25m_div_lane];
	reg_RXCLK_25M_FIX_DIV_EN_LANE				= speedtable[gen][spdoft_rx_rxclk_25m_fix_div_en_lane];
	//reg_DEMUX2_CLK_DLY_EN_LANE = 0;
	//reg_CLK_BKWD2_DIRECTION_LCPLL_LANE = 0;
	#endif

	rxdll_temp_a_lane = speedtable[gen][spdoft_rxdll_temp_a_lane];
	rxdll_temp_b_lane = speedtable[gen][spdoft_rxdll_temp_b_lane];

	//*sequence need
	reg_PATH_DISABLE_EDGE_LANE              = speedtable[gen][spdoft_path_disable_edge_lane];
	reg_ANA_RX_DFE_F1_POL_EN_D_LANE			= speedtable[gen][spdoft_dfe_f1_pol_en_d_lane];
	reg_ANA_RX_DFE_F1_POL_EN_S_LANE         = speedtable[gen][spdoft_dfe_f1_pol_en_s_lane];
	reg_ANA_RX_DFE_F1_POL_D_LANE            = speedtable[gen][spdoft_dfe_f1_pol_d_lane];
	reg_ANA_RX_DFE_F1_POL_S_LANE            = speedtable[gen][spdoft_dfe_f1_pol_s_lane];
	reg_ANA_RX_DFE_F1_POL_EN_D_FORCE_LANE	= speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_en_d_force_lane];
	reg_ANA_RX_DFE_F1_POL_EN_S_FORCE_LANE   = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_en_s_force_lane];
	reg_ANA_RX_DFE_F1_POL_D_FORCE_LANE      = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_d_force_lane];
	reg_ANA_RX_DFE_F1_POL_S_FORCE_LANE      = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_s_force_lane];
	reg_DFE_FULL_RATE_MODE_LANE             = speedtable[gen][spdoft_reg_dfe_full_rate_mode_lane];

	//do last when PU_F1*=0
	reg_PU_F1N_S_O_LANE                     = speedtable[gen][spdoft_pu_f1n_s_o_lane];
	reg_PU_F1N_D_O_LANE                     = speedtable[gen][spdoft_pu_f1n_d_o_lane];
	reg_PU_F1N_S_E_LANE	                    = speedtable[gen][spdoft_pu_f1n_s_e_lane];
	reg_PU_F1N_D_E_LANE	                    = speedtable[gen][spdoft_pu_f1n_d_e_lane];
	reg_PU_F1P_S_E_LANE	                    = speedtable[gen][spdoft_pu_f1p_s_e_lane];
	}

	reg_PU_F1P_S_O_LANE                     = speedtable[gen][spdoft_pu_f1p_s_o_lane];
	reg_PU_F1P_D_O_LANE	                    = speedtable[gen][spdoft_pu_f1p_d_o_lane];
	reg_PU_F1P_D_E_LANE						= speedtable[gen][spdoft_pu_f1p_d_e_lane];

	if(cmx_TX_SSC_CTRL_SEL) {
		reg_SSC_EN_FM_REG_LANE = 1;
		if(train_save_tb[gen].ssc_en)
			reg_SSC_EN_LANE = 1;
		else reg_SSC_EN_LANE = 0;

		if(use_ring_pll) {
			reg_SSC_DSPREAD_TX_RING					=  tx_tb[gen].ssc_dspread;
			reg_SSC_AMP_RING_6_0					=  tx_tb[gen].ssc_amp;
		}
		else {
			reg_SSC_DSPREAD_TX 						=  tx_tb[gen].ssc_dspread;
			reg_SSC_AMP_6_0							=  tx_tb[gen].ssc_amp;
		}
	}
	else
		reg_SSC_EN_FM_REG_LANE = 0;

	// for APTA
	if(phy_mode == SAS && gen==4) reg_TX_TRAIN_IF_CLK_EN_LANE = 1;
	else reg_TX_TRAIN_IF_CLK_EN_LANE = 0;

	// for sq_thresh_ratio
	sq_thrs_ratio = sq_thrs_ratio_tb[gen];
	temp = lnx_CAL_SQ_THRESH_LANE_7_0;
	reg_SQ_THRESH_LANE_5_0 = (uint8_t)((temp * sq_thrs_ratio)>>5);

	restore_train();

	reg_MCU_DEBUG0_LANE_7_0 = 0x39;

}

void IncrementDebugReg_2(void) BANKING_CTRL {
	uint8_t i;
	for ( i = 1; i < 41; i+=2 )
		reg_MCU_DEBUG0_LANE_7_0 = i;
}

void loadspeedtbl_gen_dummy_5(void) BANKING_CTRL {
	uint16_t temp;
	uint8_t gen;
	uint8_t	dec_ratio;

	gen = gen_tx;

	#ifdef _SATA_SERDES_BUILD
	if(phy_mode==SERDES) {
		gen = min(reg_PIN_PHY_GEN_TX_RD_LANE_3_0, cmx_PHY_GEN_MAX_3_0);
		gen = get_gen_memory_index(gen);
	}
	#endif

	#ifdef _PCIE_USB_BUILD
	//if(pcie_usb_mode)
	{
		if( gen_tx < 2) {
			reg_TX_SEL_BITS_LANE = 0; reg_RX_SEL_BITS_LANE = 0;
			#ifndef _28G_X2_ROM
			reg_TX_DEEMPH_FM_REG_LANE = 0;
			#endif
		}
		else {
			reg_TX_SEL_BITS_LANE = 1; reg_RX_SEL_BITS_LANE = 1;
			#ifndef _28G_X2_ROM
			reg_TX_DEEMPH_FM_REG_LANE = 1;
			#endif
		}
	}
	#endif

	gen_pll_rate	 						= speedtable[gen][spdoft_pll_rate_sel_tx];
	if(gen_pll_rate>1 || phy_mode==SERDES) tx_pll_rate = 0;
	else tx_pll_rate = gen_pll_rate;
	use_ring_pll 							= speedtable[gen][spdoft_tx_ck_sel_lane];

	reg_MCU_DEBUG0_LANE_7_0 = 0x33;
	reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
	reg_MCU_DEBUG2_LANE_7_0 = gen;
	reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
	reg_MCU_DEBUG4_LANE_7_0 = max_gen;
	reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
	reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
	reg_MCU_DEBUG7_LANE_7_0 = tx_pll_rate;
	reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;

	//do first when PU_F1*=1
	if(speedtable[gen][spdoft_pu_f1p_s_o_lane]) reg_PU_F1P_S_O_LANE = 1;
	if(speedtable[gen][spdoft_pu_f1p_d_o_lane]) reg_PU_F1P_D_O_LANE	= 1;
	if(speedtable[gen][spdoft_pu_f1p_d_e_lane]) reg_PU_F1P_D_E_LANE	= 1;
	if(phy_mode!=SATA || PHY_STATUS!=ST_SPDCHG || pwrsq_on) {
		if(speedtable[gen][spdoft_pu_f1n_s_o_lane]) reg_PU_F1N_S_O_LANE = 1;
		if(speedtable[gen][spdoft_pu_f1n_d_o_lane]) reg_PU_F1N_D_O_LANE = 1;
		if(speedtable[gen][spdoft_pu_f1n_s_e_lane]) reg_PU_F1N_S_E_LANE	= 1;
		if(speedtable[gen][spdoft_pu_f1n_d_e_lane])	reg_PU_F1N_D_E_LANE	= 1;
		if(speedtable[gen][spdoft_pu_f1p_s_e_lane]) reg_PU_F1P_S_E_LANE	= 1;
	}

	//for SATA speed change
	reg_TX_SPEED_DIV_LANE_2_0		 		= speedtable[gen][spdoft_tx_speed_div_lane];
	reg_TXSPEED_DIV_LANE_2_0 				= speedtable[gen][spdoft_tx_speed_div_lane]; //duplicated for digital use

	reg_TX_EM_PRE_CTRL_LANE_3_0				= speedtable[gen][spdoft_tx_em_pre_ctrl_lane];

	reg_RX_SPEED_DIV_LANE_2_0		  		= speedtable[gen][spdoft_rx_speed_div_lane];
	reg_DTL_CLK_SPEEDUP_LANE_2_0  			= speedtable[gen][spdoft_dtl_clk_speedup_lane];
	reg_RX_REG0P9_SPEED_TRACK_DATA_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_data_lane];


	#ifdef _28G_X2
	switch(lnx_TXDCLK_NT_SEL_LANE_1_0) {
	case 0: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x24; break;
	case 1: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x84; break;
	case 2: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x2b; break;
	case 3: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x42; break;
	}
	if(reg_RX_SPEED_DIV_LANE_2_0&0x04) {
		switch(lnx_RXDCLK_NT_SEL_LANE_1_0) {
		case 0: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x40; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 1: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x82; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 2: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x5b; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 3: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x8a; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		}
	}
	else {
		switch(lnx_RXDCLK_NT_SEL_LANE_1_0) {
		case 0: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x20; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 1: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x80; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 2: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x2b; reg_RXCLK_NT_FIX_DIV_EN_LANE = 0; break;
		case 3: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x42; reg_RXCLK_NT_FIX_DIV_EN_LANE = 0; break;
		}
	}

	#endif
	reg_RX_SELMUFF_LANE_2_0 				= speedtable[gen][spdoft_rx_selmuff_lane];
	dfe_dis									= speedtable[gen][spdoft_reg_dfe_dis_lane];
	reg_DFE_TAP_SETTLE_SCALE_LANE_1_0       = speedtable[gen][spdoft_reg_dfe_tap_settle_scale_lane];
	reg_FFE_DATA_RATE_LANE_3_0  			= speedtable[gen][spdoft_ffe_data_rate_lane];
	reg_DFE_EN_LANE = dfe_dis==0;  reg_DFE_DIS_LANE = dfe_dis;

	if(phy_mode!=SATA || PHY_STATUS!=ST_SPDCHG || pwrsq_on) {
	reg_TX_CK_SEL_LANE 						= use_ring_pll|(serdes_ring_lane_en & ring_lane_sel);
	reg_TX_CK_SEL_DIG_LANE 					= reg_TX_CK_SEL_LANE;	//duplicated for digital use
	reg_TX_REG_SPEED_TRK_CLK_LANE_2_0	 	= speedtable[gen][spdoft_tx_reg_speed_trk_clk_lane];
	reg_TX_REG_SPEED_TRK_DATA_LANE_2_0 	 	= speedtable[gen][spdoft_tx_reg_speed_trk_data_lane];

	reg_TX_EM_CTRL_REG_EN_LANE				= speedtable[gen][spdoft_tx_em_ctrl_reg_en_lane];
	reg_TX_EM_CTRL_PIPE_SEL_LANE			= speedtable[gen][spdoft_tx_em_ctrl_pipe_sel_lane];
	reg_ANA_TX_EM_PRE_EN_LANE				= speedtable[gen][spdoft_tx_em_pre_en_lane];
	//#ifndef _28G_X2_ROM
	if(phy_mode != PCIE)
	//#endif
		reg_ANA_TX_EM_PO_EN_LANE				= speedtable[gen][spdoft_tx_em_po_en_lane];
	reg_TX_EM_PO_CTRL_LANE_3_0				= speedtable[gen][spdoft_tx_em_po_ctrl_lane];

	reg_SLEWRATE_EN_LANE_1_0				= speedtable[gen][spdoft_slewrate_en_lane];
	reg_SLEWCTRL1_LANE_1_0					= speedtable[gen][spdoft_slewctrl1_lane];
	reg_SLEWCTRL0_LANE_1_0					= speedtable[gen][spdoft_slewctrl0_lane];
	reg_TX_TRAIN_PAT_SEL_LANE_1_0			= speedtable[gen][spdoft_tx_train_pat_sel_lane];
	reg_TRAIN_PAT_NUM_LANE_8_0_b0			= speedtable[gen][spdoft_train_pat_num_lane];
	reg_TRAIN_PAT_NUM_LANE_8_0_b1			= speedtable[gen][spdoft_train_pat_num_lane+1];
	reg_TX_TRAIN_PAT_TOGGLE_LANE			= speedtable[gen][spdoft_tx_train_pat_toggle_lane];
	reg_PACKET_SYNC_DIS_LANE				= speedtable[gen][spdoft_packet_sync_dis_lane];
	reg_SYNC_DET_DIS_LANE					= speedtable[gen][spdoft_sync_det_dis_lane];

	//gen = gen_rx;

	rx_pll_rate	 							= speedtable[gen][spdoft_pll_rate_sel_rx];
	if(rx_pll_rate>1 || phy_mode==SERDES) rx_pll_rate = 0;
	reg_RX_CK_SEL_LANE 						= speedtable[gen][spdoft_rx_ck_sel_lane] | (serdes_ring_lane_en & ring_lane_sel);
	reg_INTPI_LANE_3_0			  			= speedtable[gen][spdoft_intpi_lane];
	reg_INTPR_LANE_1_0				  		= speedtable[gen][spdoft_intpr_lane];
	reg_DLL_FREQ_SEL_LANE_1_0	  			= speedtable[gen][spdoft_dll_freq_sel_lane];
	if(speedtable[gen][spdoft_dll_freq_sel_lane]&0x04) reg_DLL_FREQ_SEL_LANE_2 = 1;
	else reg_DLL_FREQ_SEL_LANE_2 = 0;
	reg_EOM_DLL_FREQ_SEL_LANE_1_0  			= speedtable[gen][spdoft_eom_dll_freq_sel_lane];
	if(speedtable[gen][spdoft_eom_dll_freq_sel_lane]&0x04) reg_EOM_DLL_FREQ_SEL_LANE_2 = 1;
	else reg_EOM_DLL_FREQ_SEL_LANE_2 = 0;
	reg_ALIGN90_8G_EN_LANE		 			= speedtable[gen][spdoft_align90_8g_en_lane];
	reg_RX_REG0P9_SPEED_TRACK_CLK_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_clk_lane];
	reg_RX_REG0P9_SPEED_TRACK_CLK_HALF_LANE	= speedtable[gen][spdoft_rx_reg0p9_speed_track_clk_half_lane];
	reg_RX_SELMUFI_LANE_2_0 				= speedtable[gen][spdoft_rx_selmufi_lane];
	reg_REG_SELMUPI_LANE_3_0 				= speedtable[gen][spdoft_reg_selmupi_lane];
	reg_REG_SELMUPF_LANE_3_0 				= speedtable[gen][spdoft_reg_selmupf_lane];
	reg_DTL_CLK_MODE_LANE_1_0 				= speedtable[gen][spdoft_dtl_clk_mode_lane];
	reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b0 	= speedtable[gen][spdoft_rx_foffset_extra_m_lane];
	reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b1 	= speedtable[gen][spdoft_rx_foffset_extra_m_lane+1];
	reg_INIT_RXFOFFS_LANE_9_0_b0			= speedtable[gen][spdoft_init_rxfoffs_lane];
	reg_INIT_RXFOFFS_LANE_9_0_b1			= speedtable[gen][spdoft_init_rxfoffs_lane+1];

	#ifdef _28G_X2
	//UPHY14_TRX_ANAREG_TOP_152.BT.B0			= speedtable[gen][spdoft_rx_rxclk_25m_ctrl_lane];
	reg_RXCLK_25M_CTRL_LANE_1_0					= speedtable[gen][spdoft_rx_rxclk_25m_ctrl_lane];
	reg_RXCLK_25M_DIV1P5_EN_LANE            	= speedtable[gen][spdoft_rx_rxclk_25m_div1p5_en_lane];
	reg_RXCLK_25M_DIV_LANE_7_0 					= speedtable[gen][spdoft_rx_rxclk_25m_div_lane];
	reg_RXCLK_25M_FIX_DIV_EN_LANE				= speedtable[gen][spdoft_rx_rxclk_25m_fix_div_en_lane];
	//reg_DEMUX2_CLK_DLY_EN_LANE = 0;
	//reg_CLK_BKWD2_DIRECTION_LCPLL_LANE = 0;
	#endif

	rxdll_temp_a_lane = speedtable[gen][spdoft_rxdll_temp_a_lane];
	rxdll_temp_b_lane = speedtable[gen][spdoft_rxdll_temp_b_lane];

	//*sequence need
	reg_PATH_DISABLE_EDGE_LANE              = speedtable[gen][spdoft_path_disable_edge_lane];
	reg_ANA_RX_DFE_F1_POL_EN_D_LANE			= speedtable[gen][spdoft_dfe_f1_pol_en_d_lane];
	reg_ANA_RX_DFE_F1_POL_EN_S_LANE         = speedtable[gen][spdoft_dfe_f1_pol_en_s_lane];
	reg_ANA_RX_DFE_F1_POL_D_LANE            = speedtable[gen][spdoft_dfe_f1_pol_d_lane];
	reg_ANA_RX_DFE_F1_POL_S_LANE            = speedtable[gen][spdoft_dfe_f1_pol_s_lane];
	reg_ANA_RX_DFE_F1_POL_EN_D_FORCE_LANE	= speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_en_d_force_lane];
	reg_ANA_RX_DFE_F1_POL_EN_S_FORCE_LANE   = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_en_s_force_lane];
	reg_ANA_RX_DFE_F1_POL_D_FORCE_LANE      = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_d_force_lane];
	reg_ANA_RX_DFE_F1_POL_S_FORCE_LANE      = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_s_force_lane];
	reg_DFE_FULL_RATE_MODE_LANE             = speedtable[gen][spdoft_reg_dfe_full_rate_mode_lane];

	//do last when PU_F1*=0
	reg_PU_F1N_S_O_LANE                     = speedtable[gen][spdoft_pu_f1n_s_o_lane];
	reg_PU_F1N_D_O_LANE                     = speedtable[gen][spdoft_pu_f1n_d_o_lane];
	reg_PU_F1N_S_E_LANE	                    = speedtable[gen][spdoft_pu_f1n_s_e_lane];
	reg_PU_F1N_D_E_LANE	                    = speedtable[gen][spdoft_pu_f1n_d_e_lane];
	reg_PU_F1P_S_E_LANE	                    = speedtable[gen][spdoft_pu_f1p_s_e_lane];
	}

	reg_PU_F1P_S_O_LANE                     = speedtable[gen][spdoft_pu_f1p_s_o_lane];
	reg_PU_F1P_D_O_LANE	                    = speedtable[gen][spdoft_pu_f1p_d_o_lane];
	reg_PU_F1P_D_E_LANE						= speedtable[gen][spdoft_pu_f1p_d_e_lane];

	if(cmx_TX_SSC_CTRL_SEL) {
		reg_SSC_EN_FM_REG_LANE = 1;
		if(train_save_tb[gen].ssc_en)
			reg_SSC_EN_LANE = 1;
		else reg_SSC_EN_LANE = 0;

		if(use_ring_pll) {
			reg_SSC_DSPREAD_TX_RING					=  tx_tb[gen].ssc_dspread;
			reg_SSC_AMP_RING_6_0					=  tx_tb[gen].ssc_amp;
		}
		else {
			reg_SSC_DSPREAD_TX 						=  tx_tb[gen].ssc_dspread;
			reg_SSC_AMP_6_0							=  tx_tb[gen].ssc_amp;
		}
	}
	else
		reg_SSC_EN_FM_REG_LANE = 0;

	// for APTA
	if(phy_mode == SAS && gen==4) reg_TX_TRAIN_IF_CLK_EN_LANE = 1;
	else reg_TX_TRAIN_IF_CLK_EN_LANE = 0;

	// for sq_thresh_ratio
	sq_thrs_ratio = sq_thrs_ratio_tb[gen];
	temp = lnx_CAL_SQ_THRESH_LANE_7_0;
	reg_SQ_THRESH_LANE_5_0 = (uint8_t)((temp * sq_thrs_ratio)>>5);

	restore_train();

	reg_MCU_DEBUG0_LANE_7_0 = 0x39;

}

void loadspeedtbl_gen_dummy_6(void) BANKING_CTRL {
	uint16_t temp;
	uint8_t gen;
	uint8_t	dec_ratio;

	gen = gen_tx;

	#ifdef _SATA_SERDES_BUILD
	if(phy_mode==SERDES) {
		gen = min(reg_PIN_PHY_GEN_TX_RD_LANE_3_0, cmx_PHY_GEN_MAX_3_0);
		gen = get_gen_memory_index(gen);
	}
	#endif

	#ifdef _PCIE_USB_BUILD
	//if(pcie_usb_mode)
	{
		if( gen_tx < 2) {
			reg_TX_SEL_BITS_LANE = 0; reg_RX_SEL_BITS_LANE = 0;
			#ifndef _28G_X2_ROM
			reg_TX_DEEMPH_FM_REG_LANE = 0;
			#endif
		}
		else {
			reg_TX_SEL_BITS_LANE = 1; reg_RX_SEL_BITS_LANE = 1;
			#ifndef _28G_X2_ROM
			reg_TX_DEEMPH_FM_REG_LANE = 1;
			#endif
		}
	}
	#endif

	gen_pll_rate	 						= speedtable[gen][spdoft_pll_rate_sel_tx];
	if(gen_pll_rate>1 || phy_mode==SERDES) tx_pll_rate = 0;
	else tx_pll_rate = gen_pll_rate;
	use_ring_pll 							= speedtable[gen][spdoft_tx_ck_sel_lane];

	reg_MCU_DEBUG0_LANE_7_0 = 0x33;
	reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
	reg_MCU_DEBUG2_LANE_7_0 = gen;
	reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
	reg_MCU_DEBUG4_LANE_7_0 = max_gen;
	reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
	reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
	reg_MCU_DEBUG7_LANE_7_0 = tx_pll_rate;
	reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;

	//do first when PU_F1*=1
	if(speedtable[gen][spdoft_pu_f1p_s_o_lane]) reg_PU_F1P_S_O_LANE = 1;
	if(speedtable[gen][spdoft_pu_f1p_d_o_lane]) reg_PU_F1P_D_O_LANE	= 1;
	if(speedtable[gen][spdoft_pu_f1p_d_e_lane]) reg_PU_F1P_D_E_LANE	= 1;
	if(phy_mode!=SATA || PHY_STATUS!=ST_SPDCHG || pwrsq_on) {
		if(speedtable[gen][spdoft_pu_f1n_s_o_lane]) reg_PU_F1N_S_O_LANE = 1;
		if(speedtable[gen][spdoft_pu_f1n_d_o_lane]) reg_PU_F1N_D_O_LANE = 1;
		if(speedtable[gen][spdoft_pu_f1n_s_e_lane]) reg_PU_F1N_S_E_LANE	= 1;
		if(speedtable[gen][spdoft_pu_f1n_d_e_lane])	reg_PU_F1N_D_E_LANE	= 1;
		if(speedtable[gen][spdoft_pu_f1p_s_e_lane]) reg_PU_F1P_S_E_LANE	= 1;
	}

	//for SATA speed change
	reg_TX_SPEED_DIV_LANE_2_0		 		= speedtable[gen][spdoft_tx_speed_div_lane];
	reg_TXSPEED_DIV_LANE_2_0 				= speedtable[gen][spdoft_tx_speed_div_lane]; //duplicated for digital use

	reg_TX_EM_PRE_CTRL_LANE_3_0				= speedtable[gen][spdoft_tx_em_pre_ctrl_lane];

	reg_RX_SPEED_DIV_LANE_2_0		  		= speedtable[gen][spdoft_rx_speed_div_lane];
	reg_DTL_CLK_SPEEDUP_LANE_2_0  			= speedtable[gen][spdoft_dtl_clk_speedup_lane];
	reg_RX_REG0P9_SPEED_TRACK_DATA_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_data_lane];


	#ifdef _28G_X2
	switch(lnx_TXDCLK_NT_SEL_LANE_1_0) {
	case 0: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x24; break;
	case 1: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x84; break;
	case 2: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x2b; break;
	case 3: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x42; break;
	}
	if(reg_RX_SPEED_DIV_LANE_2_0&0x04) {
		switch(lnx_RXDCLK_NT_SEL_LANE_1_0) {
		case 0: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x40; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 1: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x82; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 2: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x5b; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 3: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x8a; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		}
	}
	else {
		switch(lnx_RXDCLK_NT_SEL_LANE_1_0) {
		case 0: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x20; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 1: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x80; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 2: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x2b; reg_RXCLK_NT_FIX_DIV_EN_LANE = 0; break;
		case 3: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x42; reg_RXCLK_NT_FIX_DIV_EN_LANE = 0; break;
		}
	}

	#endif
	reg_RX_SELMUFF_LANE_2_0 				= speedtable[gen][spdoft_rx_selmuff_lane];
	dfe_dis									= speedtable[gen][spdoft_reg_dfe_dis_lane];
	reg_DFE_TAP_SETTLE_SCALE_LANE_1_0       = speedtable[gen][spdoft_reg_dfe_tap_settle_scale_lane];
	reg_FFE_DATA_RATE_LANE_3_0  			= speedtable[gen][spdoft_ffe_data_rate_lane];
	reg_DFE_EN_LANE = dfe_dis==0;  reg_DFE_DIS_LANE = dfe_dis;

	if(phy_mode!=SATA || PHY_STATUS!=ST_SPDCHG || pwrsq_on) {
	reg_TX_CK_SEL_LANE 						= use_ring_pll|(serdes_ring_lane_en & ring_lane_sel);
	reg_TX_CK_SEL_DIG_LANE 					= reg_TX_CK_SEL_LANE;	//duplicated for digital use
	reg_TX_REG_SPEED_TRK_CLK_LANE_2_0	 	= speedtable[gen][spdoft_tx_reg_speed_trk_clk_lane];
	reg_TX_REG_SPEED_TRK_DATA_LANE_2_0 	 	= speedtable[gen][spdoft_tx_reg_speed_trk_data_lane];

	reg_TX_EM_CTRL_REG_EN_LANE				= speedtable[gen][spdoft_tx_em_ctrl_reg_en_lane];
	reg_TX_EM_CTRL_PIPE_SEL_LANE			= speedtable[gen][spdoft_tx_em_ctrl_pipe_sel_lane];
	reg_ANA_TX_EM_PRE_EN_LANE				= speedtable[gen][spdoft_tx_em_pre_en_lane];
	//#ifndef _28G_X2_ROM
	if(phy_mode != PCIE)
	//#endif
		reg_ANA_TX_EM_PO_EN_LANE				= speedtable[gen][spdoft_tx_em_po_en_lane];
	reg_TX_EM_PO_CTRL_LANE_3_0				= speedtable[gen][spdoft_tx_em_po_ctrl_lane];

	reg_SLEWRATE_EN_LANE_1_0				= speedtable[gen][spdoft_slewrate_en_lane];
	reg_SLEWCTRL1_LANE_1_0					= speedtable[gen][spdoft_slewctrl1_lane];
	reg_SLEWCTRL0_LANE_1_0					= speedtable[gen][spdoft_slewctrl0_lane];
	reg_TX_TRAIN_PAT_SEL_LANE_1_0			= speedtable[gen][spdoft_tx_train_pat_sel_lane];
	reg_TRAIN_PAT_NUM_LANE_8_0_b0			= speedtable[gen][spdoft_train_pat_num_lane];
	reg_TRAIN_PAT_NUM_LANE_8_0_b1			= speedtable[gen][spdoft_train_pat_num_lane+1];
	reg_TX_TRAIN_PAT_TOGGLE_LANE			= speedtable[gen][spdoft_tx_train_pat_toggle_lane];
	reg_PACKET_SYNC_DIS_LANE				= speedtable[gen][spdoft_packet_sync_dis_lane];
	reg_SYNC_DET_DIS_LANE					= speedtable[gen][spdoft_sync_det_dis_lane];

	//gen = gen_rx;

	rx_pll_rate	 							= speedtable[gen][spdoft_pll_rate_sel_rx];
	if(rx_pll_rate>1 || phy_mode==SERDES) rx_pll_rate = 0;
	reg_RX_CK_SEL_LANE 						= speedtable[gen][spdoft_rx_ck_sel_lane] | (serdes_ring_lane_en & ring_lane_sel);
	reg_INTPI_LANE_3_0			  			= speedtable[gen][spdoft_intpi_lane];
	reg_INTPR_LANE_1_0				  		= speedtable[gen][spdoft_intpr_lane];
	reg_DLL_FREQ_SEL_LANE_1_0	  			= speedtable[gen][spdoft_dll_freq_sel_lane];
	if(speedtable[gen][spdoft_dll_freq_sel_lane]&0x04) reg_DLL_FREQ_SEL_LANE_2 = 1;
	else reg_DLL_FREQ_SEL_LANE_2 = 0;
	reg_EOM_DLL_FREQ_SEL_LANE_1_0  			= speedtable[gen][spdoft_eom_dll_freq_sel_lane];
	if(speedtable[gen][spdoft_eom_dll_freq_sel_lane]&0x04) reg_EOM_DLL_FREQ_SEL_LANE_2 = 1;
	else reg_EOM_DLL_FREQ_SEL_LANE_2 = 0;
	reg_ALIGN90_8G_EN_LANE		 			= speedtable[gen][spdoft_align90_8g_en_lane];
	reg_RX_REG0P9_SPEED_TRACK_CLK_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_clk_lane];
	reg_RX_REG0P9_SPEED_TRACK_CLK_HALF_LANE	= speedtable[gen][spdoft_rx_reg0p9_speed_track_clk_half_lane];
	reg_RX_SELMUFI_LANE_2_0 				= speedtable[gen][spdoft_rx_selmufi_lane];
	reg_REG_SELMUPI_LANE_3_0 				= speedtable[gen][spdoft_reg_selmupi_lane];
	reg_REG_SELMUPF_LANE_3_0 				= speedtable[gen][spdoft_reg_selmupf_lane];
	reg_DTL_CLK_MODE_LANE_1_0 				= speedtable[gen][spdoft_dtl_clk_mode_lane];
	reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b0 	= speedtable[gen][spdoft_rx_foffset_extra_m_lane];
	reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b1 	= speedtable[gen][spdoft_rx_foffset_extra_m_lane+1];
	reg_INIT_RXFOFFS_LANE_9_0_b0			= speedtable[gen][spdoft_init_rxfoffs_lane];
	reg_INIT_RXFOFFS_LANE_9_0_b1			= speedtable[gen][spdoft_init_rxfoffs_lane+1];

	#ifdef _28G_X2
	//UPHY14_TRX_ANAREG_TOP_152.BT.B0			= speedtable[gen][spdoft_rx_rxclk_25m_ctrl_lane];
	reg_RXCLK_25M_CTRL_LANE_1_0					= speedtable[gen][spdoft_rx_rxclk_25m_ctrl_lane];
	reg_RXCLK_25M_DIV1P5_EN_LANE            	= speedtable[gen][spdoft_rx_rxclk_25m_div1p5_en_lane];
	reg_RXCLK_25M_DIV_LANE_7_0 					= speedtable[gen][spdoft_rx_rxclk_25m_div_lane];
	reg_RXCLK_25M_FIX_DIV_EN_LANE				= speedtable[gen][spdoft_rx_rxclk_25m_fix_div_en_lane];
	//reg_DEMUX2_CLK_DLY_EN_LANE = 0;
	//reg_CLK_BKWD2_DIRECTION_LCPLL_LANE = 0;
	#endif

	rxdll_temp_a_lane = speedtable[gen][spdoft_rxdll_temp_a_lane];
	rxdll_temp_b_lane = speedtable[gen][spdoft_rxdll_temp_b_lane];

	//*sequence need
	reg_PATH_DISABLE_EDGE_LANE              = speedtable[gen][spdoft_path_disable_edge_lane];
	reg_ANA_RX_DFE_F1_POL_EN_D_LANE			= speedtable[gen][spdoft_dfe_f1_pol_en_d_lane];
	reg_ANA_RX_DFE_F1_POL_EN_S_LANE         = speedtable[gen][spdoft_dfe_f1_pol_en_s_lane];
	reg_ANA_RX_DFE_F1_POL_D_LANE            = speedtable[gen][spdoft_dfe_f1_pol_d_lane];
	reg_ANA_RX_DFE_F1_POL_S_LANE            = speedtable[gen][spdoft_dfe_f1_pol_s_lane];
	reg_ANA_RX_DFE_F1_POL_EN_D_FORCE_LANE	= speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_en_d_force_lane];
	reg_ANA_RX_DFE_F1_POL_EN_S_FORCE_LANE   = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_en_s_force_lane];
	reg_ANA_RX_DFE_F1_POL_D_FORCE_LANE      = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_d_force_lane];
	reg_ANA_RX_DFE_F1_POL_S_FORCE_LANE      = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_s_force_lane];
	reg_DFE_FULL_RATE_MODE_LANE             = speedtable[gen][spdoft_reg_dfe_full_rate_mode_lane];

	//do last when PU_F1*=0
	reg_PU_F1N_S_O_LANE                     = speedtable[gen][spdoft_pu_f1n_s_o_lane];
	reg_PU_F1N_D_O_LANE                     = speedtable[gen][spdoft_pu_f1n_d_o_lane];
	reg_PU_F1N_S_E_LANE	                    = speedtable[gen][spdoft_pu_f1n_s_e_lane];
	reg_PU_F1N_D_E_LANE	                    = speedtable[gen][spdoft_pu_f1n_d_e_lane];
	reg_PU_F1P_S_E_LANE	                    = speedtable[gen][spdoft_pu_f1p_s_e_lane];
	}

	reg_PU_F1P_S_O_LANE                     = speedtable[gen][spdoft_pu_f1p_s_o_lane];
	reg_PU_F1P_D_O_LANE	                    = speedtable[gen][spdoft_pu_f1p_d_o_lane];
	reg_PU_F1P_D_E_LANE						= speedtable[gen][spdoft_pu_f1p_d_e_lane];

	if(cmx_TX_SSC_CTRL_SEL) {
		reg_SSC_EN_FM_REG_LANE = 1;
		if(train_save_tb[gen].ssc_en)
			reg_SSC_EN_LANE = 1;
		else reg_SSC_EN_LANE = 0;

		if(use_ring_pll) {
			reg_SSC_DSPREAD_TX_RING					=  tx_tb[gen].ssc_dspread;
			reg_SSC_AMP_RING_6_0					=  tx_tb[gen].ssc_amp;
		}
		else {
			reg_SSC_DSPREAD_TX 						=  tx_tb[gen].ssc_dspread;
			reg_SSC_AMP_6_0							=  tx_tb[gen].ssc_amp;
		}
	}
	else
		reg_SSC_EN_FM_REG_LANE = 0;

	// for APTA
	if(phy_mode == SAS && gen==4) reg_TX_TRAIN_IF_CLK_EN_LANE = 1;
	else reg_TX_TRAIN_IF_CLK_EN_LANE = 0;

	// for sq_thresh_ratio
	sq_thrs_ratio = sq_thrs_ratio_tb[gen];
	temp = lnx_CAL_SQ_THRESH_LANE_7_0;
	reg_SQ_THRESH_LANE_5_0 = (uint8_t)((temp * sq_thrs_ratio)>>5);

	restore_train();

	reg_MCU_DEBUG0_LANE_7_0 = 0x39;

}

void loadspeedtbl_gen_dummy_7(void) BANKING_CTRL {
	uint16_t temp;
	uint8_t gen;
	uint8_t	dec_ratio;

	gen = gen_tx;

	#ifdef _SATA_SERDES_BUILD
	if(phy_mode==SERDES) {
		gen = min(reg_PIN_PHY_GEN_TX_RD_LANE_3_0, cmx_PHY_GEN_MAX_3_0);
		gen = get_gen_memory_index(gen);
	}
	#endif

	#ifdef _PCIE_USB_BUILD
	//if(pcie_usb_mode)
	{
		if( gen_tx < 2) {
			reg_TX_SEL_BITS_LANE = 0; reg_RX_SEL_BITS_LANE = 0;
			#ifndef _28G_X2_ROM
			reg_TX_DEEMPH_FM_REG_LANE = 0;
			#endif
		}
		else {
			reg_TX_SEL_BITS_LANE = 1; reg_RX_SEL_BITS_LANE = 1;
			#ifndef _28G_X2_ROM
			reg_TX_DEEMPH_FM_REG_LANE = 1;
			#endif
		}
	}
	#endif

	gen_pll_rate	 						= speedtable[gen][spdoft_pll_rate_sel_tx];
	if(gen_pll_rate>1 || phy_mode==SERDES) tx_pll_rate = 0;
	else tx_pll_rate = gen_pll_rate;
	use_ring_pll 							= speedtable[gen][spdoft_tx_ck_sel_lane];

	reg_MCU_DEBUG0_LANE_7_0 = 0x33;
	reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
	reg_MCU_DEBUG2_LANE_7_0 = gen;
	reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
	reg_MCU_DEBUG4_LANE_7_0 = max_gen;
	reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
	reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
	reg_MCU_DEBUG7_LANE_7_0 = tx_pll_rate;
	reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;

	//do first when PU_F1*=1
	if(speedtable[gen][spdoft_pu_f1p_s_o_lane]) reg_PU_F1P_S_O_LANE = 1;
	if(speedtable[gen][spdoft_pu_f1p_d_o_lane]) reg_PU_F1P_D_O_LANE	= 1;
	if(speedtable[gen][spdoft_pu_f1p_d_e_lane]) reg_PU_F1P_D_E_LANE	= 1;
	if(phy_mode!=SATA || PHY_STATUS!=ST_SPDCHG || pwrsq_on) {
		if(speedtable[gen][spdoft_pu_f1n_s_o_lane]) reg_PU_F1N_S_O_LANE = 1;
		if(speedtable[gen][spdoft_pu_f1n_d_o_lane]) reg_PU_F1N_D_O_LANE = 1;
		if(speedtable[gen][spdoft_pu_f1n_s_e_lane]) reg_PU_F1N_S_E_LANE	= 1;
		if(speedtable[gen][spdoft_pu_f1n_d_e_lane])	reg_PU_F1N_D_E_LANE	= 1;
		if(speedtable[gen][spdoft_pu_f1p_s_e_lane]) reg_PU_F1P_S_E_LANE	= 1;
	}

	//for SATA speed change
	reg_TX_SPEED_DIV_LANE_2_0		 		= speedtable[gen][spdoft_tx_speed_div_lane];
	reg_TXSPEED_DIV_LANE_2_0 				= speedtable[gen][spdoft_tx_speed_div_lane]; //duplicated for digital use

	reg_TX_EM_PRE_CTRL_LANE_3_0				= speedtable[gen][spdoft_tx_em_pre_ctrl_lane];

	reg_RX_SPEED_DIV_LANE_2_0		  		= speedtable[gen][spdoft_rx_speed_div_lane];
	reg_DTL_CLK_SPEEDUP_LANE_2_0  			= speedtable[gen][spdoft_dtl_clk_speedup_lane];
	reg_RX_REG0P9_SPEED_TRACK_DATA_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_data_lane];


	#ifdef _28G_X2
	switch(lnx_TXDCLK_NT_SEL_LANE_1_0) {
	case 0: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x24; break;
	case 1: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x84; break;
	case 2: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x2b; break;
	case 3: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x42; break;
	}
	if(reg_RX_SPEED_DIV_LANE_2_0&0x04) {
		switch(lnx_RXDCLK_NT_SEL_LANE_1_0) {
		case 0: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x40; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 1: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x82; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 2: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x5b; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 3: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x8a; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		}
	}
	else {
		switch(lnx_RXDCLK_NT_SEL_LANE_1_0) {
		case 0: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x20; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 1: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x80; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 2: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x2b; reg_RXCLK_NT_FIX_DIV_EN_LANE = 0; break;
		case 3: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x42; reg_RXCLK_NT_FIX_DIV_EN_LANE = 0; break;
		}
	}

	#endif
	reg_RX_SELMUFF_LANE_2_0 				= speedtable[gen][spdoft_rx_selmuff_lane];
	dfe_dis									= speedtable[gen][spdoft_reg_dfe_dis_lane];
	reg_DFE_TAP_SETTLE_SCALE_LANE_1_0       = speedtable[gen][spdoft_reg_dfe_tap_settle_scale_lane];
	reg_FFE_DATA_RATE_LANE_3_0  			= speedtable[gen][spdoft_ffe_data_rate_lane];
	reg_DFE_EN_LANE = dfe_dis==0;  reg_DFE_DIS_LANE = dfe_dis;

	if(phy_mode!=SATA || PHY_STATUS!=ST_SPDCHG || pwrsq_on) {
	reg_TX_CK_SEL_LANE 						= use_ring_pll|(serdes_ring_lane_en & ring_lane_sel);
	reg_TX_CK_SEL_DIG_LANE 					= reg_TX_CK_SEL_LANE;	//duplicated for digital use
	reg_TX_REG_SPEED_TRK_CLK_LANE_2_0	 	= speedtable[gen][spdoft_tx_reg_speed_trk_clk_lane];
	reg_TX_REG_SPEED_TRK_DATA_LANE_2_0 	 	= speedtable[gen][spdoft_tx_reg_speed_trk_data_lane];

	reg_TX_EM_CTRL_REG_EN_LANE				= speedtable[gen][spdoft_tx_em_ctrl_reg_en_lane];
	reg_TX_EM_CTRL_PIPE_SEL_LANE			= speedtable[gen][spdoft_tx_em_ctrl_pipe_sel_lane];
	reg_ANA_TX_EM_PRE_EN_LANE				= speedtable[gen][spdoft_tx_em_pre_en_lane];
	//#ifndef _28G_X2_ROM
	if(phy_mode != PCIE)
	//#endif
		reg_ANA_TX_EM_PO_EN_LANE				= speedtable[gen][spdoft_tx_em_po_en_lane];
	reg_TX_EM_PO_CTRL_LANE_3_0				= speedtable[gen][spdoft_tx_em_po_ctrl_lane];

	reg_SLEWRATE_EN_LANE_1_0				= speedtable[gen][spdoft_slewrate_en_lane];
	reg_SLEWCTRL1_LANE_1_0					= speedtable[gen][spdoft_slewctrl1_lane];
	reg_SLEWCTRL0_LANE_1_0					= speedtable[gen][spdoft_slewctrl0_lane];
	reg_TX_TRAIN_PAT_SEL_LANE_1_0			= speedtable[gen][spdoft_tx_train_pat_sel_lane];
	reg_TRAIN_PAT_NUM_LANE_8_0_b0			= speedtable[gen][spdoft_train_pat_num_lane];
	reg_TRAIN_PAT_NUM_LANE_8_0_b1			= speedtable[gen][spdoft_train_pat_num_lane+1];
	reg_TX_TRAIN_PAT_TOGGLE_LANE			= speedtable[gen][spdoft_tx_train_pat_toggle_lane];
	reg_PACKET_SYNC_DIS_LANE				= speedtable[gen][spdoft_packet_sync_dis_lane];
	reg_SYNC_DET_DIS_LANE					= speedtable[gen][spdoft_sync_det_dis_lane];

	//gen = gen_rx;

	rx_pll_rate	 							= speedtable[gen][spdoft_pll_rate_sel_rx];
	if(rx_pll_rate>1 || phy_mode==SERDES) rx_pll_rate = 0;
	reg_RX_CK_SEL_LANE 						= speedtable[gen][spdoft_rx_ck_sel_lane] | (serdes_ring_lane_en & ring_lane_sel);
	reg_INTPI_LANE_3_0			  			= speedtable[gen][spdoft_intpi_lane];
	reg_INTPR_LANE_1_0				  		= speedtable[gen][spdoft_intpr_lane];
	reg_DLL_FREQ_SEL_LANE_1_0	  			= speedtable[gen][spdoft_dll_freq_sel_lane];
	if(speedtable[gen][spdoft_dll_freq_sel_lane]&0x04) reg_DLL_FREQ_SEL_LANE_2 = 1;
	else reg_DLL_FREQ_SEL_LANE_2 = 0;
	reg_EOM_DLL_FREQ_SEL_LANE_1_0  			= speedtable[gen][spdoft_eom_dll_freq_sel_lane];
	if(speedtable[gen][spdoft_eom_dll_freq_sel_lane]&0x04) reg_EOM_DLL_FREQ_SEL_LANE_2 = 1;
	else reg_EOM_DLL_FREQ_SEL_LANE_2 = 0;
	reg_ALIGN90_8G_EN_LANE		 			= speedtable[gen][spdoft_align90_8g_en_lane];
	reg_RX_REG0P9_SPEED_TRACK_CLK_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_clk_lane];
	reg_RX_REG0P9_SPEED_TRACK_CLK_HALF_LANE	= speedtable[gen][spdoft_rx_reg0p9_speed_track_clk_half_lane];
	reg_RX_SELMUFI_LANE_2_0 				= speedtable[gen][spdoft_rx_selmufi_lane];
	reg_REG_SELMUPI_LANE_3_0 				= speedtable[gen][spdoft_reg_selmupi_lane];
	reg_REG_SELMUPF_LANE_3_0 				= speedtable[gen][spdoft_reg_selmupf_lane];
	reg_DTL_CLK_MODE_LANE_1_0 				= speedtable[gen][spdoft_dtl_clk_mode_lane];
	reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b0 	= speedtable[gen][spdoft_rx_foffset_extra_m_lane];
	reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b1 	= speedtable[gen][spdoft_rx_foffset_extra_m_lane+1];
	reg_INIT_RXFOFFS_LANE_9_0_b0			= speedtable[gen][spdoft_init_rxfoffs_lane];
	reg_INIT_RXFOFFS_LANE_9_0_b1			= speedtable[gen][spdoft_init_rxfoffs_lane+1];

	#ifdef _28G_X2
	//UPHY14_TRX_ANAREG_TOP_152.BT.B0			= speedtable[gen][spdoft_rx_rxclk_25m_ctrl_lane];
	reg_RXCLK_25M_CTRL_LANE_1_0					= speedtable[gen][spdoft_rx_rxclk_25m_ctrl_lane];
	reg_RXCLK_25M_DIV1P5_EN_LANE            	= speedtable[gen][spdoft_rx_rxclk_25m_div1p5_en_lane];
	reg_RXCLK_25M_DIV_LANE_7_0 					= speedtable[gen][spdoft_rx_rxclk_25m_div_lane];
	reg_RXCLK_25M_FIX_DIV_EN_LANE				= speedtable[gen][spdoft_rx_rxclk_25m_fix_div_en_lane];
	//reg_DEMUX2_CLK_DLY_EN_LANE = 0;
	//reg_CLK_BKWD2_DIRECTION_LCPLL_LANE = 0;
	#endif

	rxdll_temp_a_lane = speedtable[gen][spdoft_rxdll_temp_a_lane];
	rxdll_temp_b_lane = speedtable[gen][spdoft_rxdll_temp_b_lane];

	//*sequence need
	reg_PATH_DISABLE_EDGE_LANE              = speedtable[gen][spdoft_path_disable_edge_lane];
	reg_ANA_RX_DFE_F1_POL_EN_D_LANE			= speedtable[gen][spdoft_dfe_f1_pol_en_d_lane];
	reg_ANA_RX_DFE_F1_POL_EN_S_LANE         = speedtable[gen][spdoft_dfe_f1_pol_en_s_lane];
	reg_ANA_RX_DFE_F1_POL_D_LANE            = speedtable[gen][spdoft_dfe_f1_pol_d_lane];
	reg_ANA_RX_DFE_F1_POL_S_LANE            = speedtable[gen][spdoft_dfe_f1_pol_s_lane];
	reg_ANA_RX_DFE_F1_POL_EN_D_FORCE_LANE	= speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_en_d_force_lane];
	reg_ANA_RX_DFE_F1_POL_EN_S_FORCE_LANE   = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_en_s_force_lane];
	reg_ANA_RX_DFE_F1_POL_D_FORCE_LANE      = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_d_force_lane];
	reg_ANA_RX_DFE_F1_POL_S_FORCE_LANE      = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_s_force_lane];
	reg_DFE_FULL_RATE_MODE_LANE             = speedtable[gen][spdoft_reg_dfe_full_rate_mode_lane];

	//do last when PU_F1*=0
	reg_PU_F1N_S_O_LANE                     = speedtable[gen][spdoft_pu_f1n_s_o_lane];
	reg_PU_F1N_D_O_LANE                     = speedtable[gen][spdoft_pu_f1n_d_o_lane];
	reg_PU_F1N_S_E_LANE	                    = speedtable[gen][spdoft_pu_f1n_s_e_lane];
	reg_PU_F1N_D_E_LANE	                    = speedtable[gen][spdoft_pu_f1n_d_e_lane];
	reg_PU_F1P_S_E_LANE	                    = speedtable[gen][spdoft_pu_f1p_s_e_lane];
	}

	reg_PU_F1P_S_O_LANE                     = speedtable[gen][spdoft_pu_f1p_s_o_lane];
	reg_PU_F1P_D_O_LANE	                    = speedtable[gen][spdoft_pu_f1p_d_o_lane];
	reg_PU_F1P_D_E_LANE						= speedtable[gen][spdoft_pu_f1p_d_e_lane];

	if(cmx_TX_SSC_CTRL_SEL) {
		reg_SSC_EN_FM_REG_LANE = 1;
		if(train_save_tb[gen].ssc_en)
			reg_SSC_EN_LANE = 1;
		else reg_SSC_EN_LANE = 0;

		if(use_ring_pll) {
			reg_SSC_DSPREAD_TX_RING					=  tx_tb[gen].ssc_dspread;
			reg_SSC_AMP_RING_6_0					=  tx_tb[gen].ssc_amp;
		}
		else {
			reg_SSC_DSPREAD_TX 						=  tx_tb[gen].ssc_dspread;
			reg_SSC_AMP_6_0							=  tx_tb[gen].ssc_amp;
		}
	}
	else
		reg_SSC_EN_FM_REG_LANE = 0;

	// for APTA
	if(phy_mode == SAS && gen==4) reg_TX_TRAIN_IF_CLK_EN_LANE = 1;
	else reg_TX_TRAIN_IF_CLK_EN_LANE = 0;

	// for sq_thresh_ratio
	sq_thrs_ratio = sq_thrs_ratio_tb[gen];
	temp = lnx_CAL_SQ_THRESH_LANE_7_0;
	reg_SQ_THRESH_LANE_5_0 = (uint8_t)((temp * sq_thrs_ratio)>>5);

	restore_train();

	reg_MCU_DEBUG0_LANE_7_0 = 0x39;

}

void loadspeedtbl_gen_dummy_8(void) BANKING_CTRL {
	uint16_t temp;
	uint8_t gen;
	uint8_t	dec_ratio;

	gen = gen_tx;

	#ifdef _SATA_SERDES_BUILD
	if(phy_mode==SERDES) {
		gen = min(reg_PIN_PHY_GEN_TX_RD_LANE_3_0, cmx_PHY_GEN_MAX_3_0);
		gen = get_gen_memory_index(gen);
	}
	#endif

	#ifdef _PCIE_USB_BUILD
	//if(pcie_usb_mode)
	{
		if( gen_tx < 2) {
			reg_TX_SEL_BITS_LANE = 0; reg_RX_SEL_BITS_LANE = 0;
			#ifndef _28G_X2_ROM
			reg_TX_DEEMPH_FM_REG_LANE = 0;
			#endif
		}
		else {
			reg_TX_SEL_BITS_LANE = 1; reg_RX_SEL_BITS_LANE = 1;
			#ifndef _28G_X2_ROM
			reg_TX_DEEMPH_FM_REG_LANE = 1;
			#endif
		}
	}
	#endif

	gen_pll_rate	 						= speedtable[gen][spdoft_pll_rate_sel_tx];
	if(gen_pll_rate>1 || phy_mode==SERDES) tx_pll_rate = 0;
	else tx_pll_rate = gen_pll_rate;
	use_ring_pll 							= speedtable[gen][spdoft_tx_ck_sel_lane];

	reg_MCU_DEBUG0_LANE_7_0 = 0x33;
	reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
	reg_MCU_DEBUG2_LANE_7_0 = gen;
	reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
	reg_MCU_DEBUG4_LANE_7_0 = max_gen;
	reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
	reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
	reg_MCU_DEBUG7_LANE_7_0 = tx_pll_rate;
	reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;

	//do first when PU_F1*=1
	if(speedtable[gen][spdoft_pu_f1p_s_o_lane]) reg_PU_F1P_S_O_LANE = 1;
	if(speedtable[gen][spdoft_pu_f1p_d_o_lane]) reg_PU_F1P_D_O_LANE	= 1;
	if(speedtable[gen][spdoft_pu_f1p_d_e_lane]) reg_PU_F1P_D_E_LANE	= 1;
	if(phy_mode!=SATA || PHY_STATUS!=ST_SPDCHG || pwrsq_on) {
		if(speedtable[gen][spdoft_pu_f1n_s_o_lane]) reg_PU_F1N_S_O_LANE = 1;
		if(speedtable[gen][spdoft_pu_f1n_d_o_lane]) reg_PU_F1N_D_O_LANE = 1;
		if(speedtable[gen][spdoft_pu_f1n_s_e_lane]) reg_PU_F1N_S_E_LANE	= 1;
		if(speedtable[gen][spdoft_pu_f1n_d_e_lane])	reg_PU_F1N_D_E_LANE	= 1;
		if(speedtable[gen][spdoft_pu_f1p_s_e_lane]) reg_PU_F1P_S_E_LANE	= 1;
	}

	//for SATA speed change
	reg_TX_SPEED_DIV_LANE_2_0		 		= speedtable[gen][spdoft_tx_speed_div_lane];
	reg_TXSPEED_DIV_LANE_2_0 				= speedtable[gen][spdoft_tx_speed_div_lane]; //duplicated for digital use

	reg_TX_EM_PRE_CTRL_LANE_3_0				= speedtable[gen][spdoft_tx_em_pre_ctrl_lane];

	reg_RX_SPEED_DIV_LANE_2_0		  		= speedtable[gen][spdoft_rx_speed_div_lane];
	reg_DTL_CLK_SPEEDUP_LANE_2_0  			= speedtable[gen][spdoft_dtl_clk_speedup_lane];
	reg_RX_REG0P9_SPEED_TRACK_DATA_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_data_lane];


	#ifdef _28G_X2
	switch(lnx_TXDCLK_NT_SEL_LANE_1_0) {
	case 0: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x24; break;
	case 1: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x84; break;
	case 2: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x2b; break;
	case 3: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x42; break;
	}
	if(reg_RX_SPEED_DIV_LANE_2_0&0x04) {
		switch(lnx_RXDCLK_NT_SEL_LANE_1_0) {
		case 0: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x40; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 1: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x82; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 2: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x5b; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 3: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x8a; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		}
	}
	else {
		switch(lnx_RXDCLK_NT_SEL_LANE_1_0) {
		case 0: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x20; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 1: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x80; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 2: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x2b; reg_RXCLK_NT_FIX_DIV_EN_LANE = 0; break;
		case 3: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x42; reg_RXCLK_NT_FIX_DIV_EN_LANE = 0; break;
		}
	}

	#endif
	reg_RX_SELMUFF_LANE_2_0 				= speedtable[gen][spdoft_rx_selmuff_lane];
	dfe_dis									= speedtable[gen][spdoft_reg_dfe_dis_lane];
	reg_DFE_TAP_SETTLE_SCALE_LANE_1_0       = speedtable[gen][spdoft_reg_dfe_tap_settle_scale_lane];
	reg_FFE_DATA_RATE_LANE_3_0  			= speedtable[gen][spdoft_ffe_data_rate_lane];
	reg_DFE_EN_LANE = dfe_dis==0;  reg_DFE_DIS_LANE = dfe_dis;

	if(phy_mode!=SATA || PHY_STATUS!=ST_SPDCHG || pwrsq_on) {
	reg_TX_CK_SEL_LANE 						= use_ring_pll|(serdes_ring_lane_en & ring_lane_sel);
	reg_TX_CK_SEL_DIG_LANE 					= reg_TX_CK_SEL_LANE;	//duplicated for digital use
	reg_TX_REG_SPEED_TRK_CLK_LANE_2_0	 	= speedtable[gen][spdoft_tx_reg_speed_trk_clk_lane];
	reg_TX_REG_SPEED_TRK_DATA_LANE_2_0 	 	= speedtable[gen][spdoft_tx_reg_speed_trk_data_lane];

	reg_TX_EM_CTRL_REG_EN_LANE				= speedtable[gen][spdoft_tx_em_ctrl_reg_en_lane];
	reg_TX_EM_CTRL_PIPE_SEL_LANE			= speedtable[gen][spdoft_tx_em_ctrl_pipe_sel_lane];
	reg_ANA_TX_EM_PRE_EN_LANE				= speedtable[gen][spdoft_tx_em_pre_en_lane];
	//#ifndef _28G_X2_ROM
	if(phy_mode != PCIE)
	//#endif
		reg_ANA_TX_EM_PO_EN_LANE				= speedtable[gen][spdoft_tx_em_po_en_lane];
	reg_TX_EM_PO_CTRL_LANE_3_0				= speedtable[gen][spdoft_tx_em_po_ctrl_lane];

	reg_SLEWRATE_EN_LANE_1_0				= speedtable[gen][spdoft_slewrate_en_lane];
	reg_SLEWCTRL1_LANE_1_0					= speedtable[gen][spdoft_slewctrl1_lane];
	reg_SLEWCTRL0_LANE_1_0					= speedtable[gen][spdoft_slewctrl0_lane];
	reg_TX_TRAIN_PAT_SEL_LANE_1_0			= speedtable[gen][spdoft_tx_train_pat_sel_lane];
	reg_TRAIN_PAT_NUM_LANE_8_0_b0			= speedtable[gen][spdoft_train_pat_num_lane];
	reg_TRAIN_PAT_NUM_LANE_8_0_b1			= speedtable[gen][spdoft_train_pat_num_lane+1];
	reg_TX_TRAIN_PAT_TOGGLE_LANE			= speedtable[gen][spdoft_tx_train_pat_toggle_lane];
	reg_PACKET_SYNC_DIS_LANE				= speedtable[gen][spdoft_packet_sync_dis_lane];
	reg_SYNC_DET_DIS_LANE					= speedtable[gen][spdoft_sync_det_dis_lane];

	//gen = gen_rx;

	rx_pll_rate	 							= speedtable[gen][spdoft_pll_rate_sel_rx];
	if(rx_pll_rate>1 || phy_mode==SERDES) rx_pll_rate = 0;
	reg_RX_CK_SEL_LANE 						= speedtable[gen][spdoft_rx_ck_sel_lane] | (serdes_ring_lane_en & ring_lane_sel);
	reg_INTPI_LANE_3_0			  			= speedtable[gen][spdoft_intpi_lane];
	reg_INTPR_LANE_1_0				  		= speedtable[gen][spdoft_intpr_lane];
	reg_DLL_FREQ_SEL_LANE_1_0	  			= speedtable[gen][spdoft_dll_freq_sel_lane];
	if(speedtable[gen][spdoft_dll_freq_sel_lane]&0x04) reg_DLL_FREQ_SEL_LANE_2 = 1;
	else reg_DLL_FREQ_SEL_LANE_2 = 0;
	reg_EOM_DLL_FREQ_SEL_LANE_1_0  			= speedtable[gen][spdoft_eom_dll_freq_sel_lane];
	if(speedtable[gen][spdoft_eom_dll_freq_sel_lane]&0x04) reg_EOM_DLL_FREQ_SEL_LANE_2 = 1;
	else reg_EOM_DLL_FREQ_SEL_LANE_2 = 0;
	reg_ALIGN90_8G_EN_LANE		 			= speedtable[gen][spdoft_align90_8g_en_lane];
	reg_RX_REG0P9_SPEED_TRACK_CLK_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_clk_lane];
	reg_RX_REG0P9_SPEED_TRACK_CLK_HALF_LANE	= speedtable[gen][spdoft_rx_reg0p9_speed_track_clk_half_lane];
	reg_RX_SELMUFI_LANE_2_0 				= speedtable[gen][spdoft_rx_selmufi_lane];
	reg_REG_SELMUPI_LANE_3_0 				= speedtable[gen][spdoft_reg_selmupi_lane];
	reg_REG_SELMUPF_LANE_3_0 				= speedtable[gen][spdoft_reg_selmupf_lane];
	reg_DTL_CLK_MODE_LANE_1_0 				= speedtable[gen][spdoft_dtl_clk_mode_lane];
	reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b0 	= speedtable[gen][spdoft_rx_foffset_extra_m_lane];
	reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b1 	= speedtable[gen][spdoft_rx_foffset_extra_m_lane+1];
	reg_INIT_RXFOFFS_LANE_9_0_b0			= speedtable[gen][spdoft_init_rxfoffs_lane];
	reg_INIT_RXFOFFS_LANE_9_0_b1			= speedtable[gen][spdoft_init_rxfoffs_lane+1];

	#ifdef _28G_X2
	//UPHY14_TRX_ANAREG_TOP_152.BT.B0			= speedtable[gen][spdoft_rx_rxclk_25m_ctrl_lane];
	reg_RXCLK_25M_CTRL_LANE_1_0					= speedtable[gen][spdoft_rx_rxclk_25m_ctrl_lane];
	reg_RXCLK_25M_DIV1P5_EN_LANE            	= speedtable[gen][spdoft_rx_rxclk_25m_div1p5_en_lane];
	reg_RXCLK_25M_DIV_LANE_7_0 					= speedtable[gen][spdoft_rx_rxclk_25m_div_lane];
	reg_RXCLK_25M_FIX_DIV_EN_LANE				= speedtable[gen][spdoft_rx_rxclk_25m_fix_div_en_lane];
	//reg_DEMUX2_CLK_DLY_EN_LANE = 0;
	//reg_CLK_BKWD2_DIRECTION_LCPLL_LANE = 0;
	#endif

	rxdll_temp_a_lane = speedtable[gen][spdoft_rxdll_temp_a_lane];
	rxdll_temp_b_lane = speedtable[gen][spdoft_rxdll_temp_b_lane];

	//*sequence need
	reg_PATH_DISABLE_EDGE_LANE              = speedtable[gen][spdoft_path_disable_edge_lane];
	reg_ANA_RX_DFE_F1_POL_EN_D_LANE			= speedtable[gen][spdoft_dfe_f1_pol_en_d_lane];
	reg_ANA_RX_DFE_F1_POL_EN_S_LANE         = speedtable[gen][spdoft_dfe_f1_pol_en_s_lane];
	reg_ANA_RX_DFE_F1_POL_D_LANE            = speedtable[gen][spdoft_dfe_f1_pol_d_lane];
	reg_ANA_RX_DFE_F1_POL_S_LANE            = speedtable[gen][spdoft_dfe_f1_pol_s_lane];
	reg_ANA_RX_DFE_F1_POL_EN_D_FORCE_LANE	= speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_en_d_force_lane];
	reg_ANA_RX_DFE_F1_POL_EN_S_FORCE_LANE   = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_en_s_force_lane];
	reg_ANA_RX_DFE_F1_POL_D_FORCE_LANE      = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_d_force_lane];
	reg_ANA_RX_DFE_F1_POL_S_FORCE_LANE      = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_s_force_lane];
	reg_DFE_FULL_RATE_MODE_LANE             = speedtable[gen][spdoft_reg_dfe_full_rate_mode_lane];

	//do last when PU_F1*=0
	reg_PU_F1N_S_O_LANE                     = speedtable[gen][spdoft_pu_f1n_s_o_lane];
	reg_PU_F1N_D_O_LANE                     = speedtable[gen][spdoft_pu_f1n_d_o_lane];
	reg_PU_F1N_S_E_LANE	                    = speedtable[gen][spdoft_pu_f1n_s_e_lane];
	reg_PU_F1N_D_E_LANE	                    = speedtable[gen][spdoft_pu_f1n_d_e_lane];
	reg_PU_F1P_S_E_LANE	                    = speedtable[gen][spdoft_pu_f1p_s_e_lane];
	}

	reg_PU_F1P_S_O_LANE                     = speedtable[gen][spdoft_pu_f1p_s_o_lane];
	reg_PU_F1P_D_O_LANE	                    = speedtable[gen][spdoft_pu_f1p_d_o_lane];
	reg_PU_F1P_D_E_LANE						= speedtable[gen][spdoft_pu_f1p_d_e_lane];

	if(cmx_TX_SSC_CTRL_SEL) {
		reg_SSC_EN_FM_REG_LANE = 1;
		if(train_save_tb[gen].ssc_en)
			reg_SSC_EN_LANE = 1;
		else reg_SSC_EN_LANE = 0;

		if(use_ring_pll) {
			reg_SSC_DSPREAD_TX_RING					=  tx_tb[gen].ssc_dspread;
			reg_SSC_AMP_RING_6_0					=  tx_tb[gen].ssc_amp;
		}
		else {
			reg_SSC_DSPREAD_TX 						=  tx_tb[gen].ssc_dspread;
			reg_SSC_AMP_6_0							=  tx_tb[gen].ssc_amp;
		}
	}
	else
		reg_SSC_EN_FM_REG_LANE = 0;

	// for APTA
	if(phy_mode == SAS && gen==4) reg_TX_TRAIN_IF_CLK_EN_LANE = 1;
	else reg_TX_TRAIN_IF_CLK_EN_LANE = 0;

	// for sq_thresh_ratio
	sq_thrs_ratio = sq_thrs_ratio_tb[gen];
	temp = lnx_CAL_SQ_THRESH_LANE_7_0;
	reg_SQ_THRESH_LANE_5_0 = (uint8_t)((temp * sq_thrs_ratio)>>5);

	restore_train();

	reg_MCU_DEBUG0_LANE_7_0 = 0x39;

}

void loadspeedtbl_gen_dummy_9(void) BANKING_CTRL {
	uint16_t temp;
	uint8_t gen;
	uint8_t	dec_ratio;

	gen = gen_tx;

	#ifdef _SATA_SERDES_BUILD
	if(phy_mode==SERDES) {
		gen = min(reg_PIN_PHY_GEN_TX_RD_LANE_3_0, cmx_PHY_GEN_MAX_3_0);
		gen = get_gen_memory_index(gen);
	}
	#endif

	#ifdef _PCIE_USB_BUILD
	//if(pcie_usb_mode)
	{
		if( gen_tx < 2) {
			reg_TX_SEL_BITS_LANE = 0; reg_RX_SEL_BITS_LANE = 0;
			#ifndef _28G_X2_ROM
			reg_TX_DEEMPH_FM_REG_LANE = 0;
			#endif
		}
		else {
			reg_TX_SEL_BITS_LANE = 1; reg_RX_SEL_BITS_LANE = 1;
			#ifndef _28G_X2_ROM
			reg_TX_DEEMPH_FM_REG_LANE = 1;
			#endif
		}
	}
	#endif

	gen_pll_rate	 						= speedtable[gen][spdoft_pll_rate_sel_tx];
	if(gen_pll_rate>1 || phy_mode==SERDES) tx_pll_rate = 0;
	else tx_pll_rate = gen_pll_rate;
	use_ring_pll 							= speedtable[gen][spdoft_tx_ck_sel_lane];

	reg_MCU_DEBUG0_LANE_7_0 = 0x33;
	reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
	reg_MCU_DEBUG2_LANE_7_0 = gen;
	reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
	reg_MCU_DEBUG4_LANE_7_0 = max_gen;
	reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
	reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
	reg_MCU_DEBUG7_LANE_7_0 = tx_pll_rate;
	reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;

	//do first when PU_F1*=1
	if(speedtable[gen][spdoft_pu_f1p_s_o_lane]) reg_PU_F1P_S_O_LANE = 1;
	if(speedtable[gen][spdoft_pu_f1p_d_o_lane]) reg_PU_F1P_D_O_LANE	= 1;
	if(speedtable[gen][spdoft_pu_f1p_d_e_lane]) reg_PU_F1P_D_E_LANE	= 1;
	if(phy_mode!=SATA || PHY_STATUS!=ST_SPDCHG || pwrsq_on) {
		if(speedtable[gen][spdoft_pu_f1n_s_o_lane]) reg_PU_F1N_S_O_LANE = 1;
		if(speedtable[gen][spdoft_pu_f1n_d_o_lane]) reg_PU_F1N_D_O_LANE = 1;
		if(speedtable[gen][spdoft_pu_f1n_s_e_lane]) reg_PU_F1N_S_E_LANE	= 1;
		if(speedtable[gen][spdoft_pu_f1n_d_e_lane])	reg_PU_F1N_D_E_LANE	= 1;
		if(speedtable[gen][spdoft_pu_f1p_s_e_lane]) reg_PU_F1P_S_E_LANE	= 1;
	}

	//for SATA speed change
	reg_TX_SPEED_DIV_LANE_2_0		 		= speedtable[gen][spdoft_tx_speed_div_lane];
	reg_TXSPEED_DIV_LANE_2_0 				= speedtable[gen][spdoft_tx_speed_div_lane]; //duplicated for digital use

	reg_TX_EM_PRE_CTRL_LANE_3_0				= speedtable[gen][spdoft_tx_em_pre_ctrl_lane];

	reg_RX_SPEED_DIV_LANE_2_0		  		= speedtable[gen][spdoft_rx_speed_div_lane];
	reg_DTL_CLK_SPEEDUP_LANE_2_0  			= speedtable[gen][spdoft_dtl_clk_speedup_lane];
	reg_RX_REG0P9_SPEED_TRACK_DATA_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_data_lane];


	#ifdef _28G_X2
	switch(lnx_TXDCLK_NT_SEL_LANE_1_0) {
	case 0: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x24; break;
	case 1: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x84; break;
	case 2: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x2b; break;
	case 3: UPHY14_TRX_ANAREG_BOT_30.BT.B0 = 0x42; break;
	}
	if(reg_RX_SPEED_DIV_LANE_2_0&0x04) {
		switch(lnx_RXDCLK_NT_SEL_LANE_1_0) {
		case 0: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x40; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 1: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x82; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 2: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x5b; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 3: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x8a; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		}
	}
	else {
		switch(lnx_RXDCLK_NT_SEL_LANE_1_0) {
		case 0: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x20; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 1: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x80; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 2: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x2b; reg_RXCLK_NT_FIX_DIV_EN_LANE = 0; break;
		case 3: UPHY14_TRX_ANAREG_TOP_155.BT.B0 = (UPHY14_TRX_ANAREG_TOP_155.BT.B0&0x04)|0x42; reg_RXCLK_NT_FIX_DIV_EN_LANE = 0; break;
		}
	}

	#endif
	reg_RX_SELMUFF_LANE_2_0 				= speedtable[gen][spdoft_rx_selmuff_lane];
	dfe_dis									= speedtable[gen][spdoft_reg_dfe_dis_lane];
	reg_DFE_TAP_SETTLE_SCALE_LANE_1_0       = speedtable[gen][spdoft_reg_dfe_tap_settle_scale_lane];
	reg_FFE_DATA_RATE_LANE_3_0  			= speedtable[gen][spdoft_ffe_data_rate_lane];
	reg_DFE_EN_LANE = dfe_dis==0;  reg_DFE_DIS_LANE = dfe_dis;

	if(phy_mode!=SATA || PHY_STATUS!=ST_SPDCHG || pwrsq_on) {
	reg_TX_CK_SEL_LANE 						= use_ring_pll|(serdes_ring_lane_en & ring_lane_sel);
	reg_TX_CK_SEL_DIG_LANE 					= reg_TX_CK_SEL_LANE;	//duplicated for digital use
	reg_TX_REG_SPEED_TRK_CLK_LANE_2_0	 	= speedtable[gen][spdoft_tx_reg_speed_trk_clk_lane];
	reg_TX_REG_SPEED_TRK_DATA_LANE_2_0 	 	= speedtable[gen][spdoft_tx_reg_speed_trk_data_lane];

	reg_TX_EM_CTRL_REG_EN_LANE				= speedtable[gen][spdoft_tx_em_ctrl_reg_en_lane];
	reg_TX_EM_CTRL_PIPE_SEL_LANE			= speedtable[gen][spdoft_tx_em_ctrl_pipe_sel_lane];
	reg_ANA_TX_EM_PRE_EN_LANE				= speedtable[gen][spdoft_tx_em_pre_en_lane];
	//#ifndef _28G_X2_ROM
	if(phy_mode != PCIE)
	//#endif
		reg_ANA_TX_EM_PO_EN_LANE				= speedtable[gen][spdoft_tx_em_po_en_lane];
	reg_TX_EM_PO_CTRL_LANE_3_0				= speedtable[gen][spdoft_tx_em_po_ctrl_lane];

	reg_SLEWRATE_EN_LANE_1_0				= speedtable[gen][spdoft_slewrate_en_lane];
	reg_SLEWCTRL1_LANE_1_0					= speedtable[gen][spdoft_slewctrl1_lane];
	reg_SLEWCTRL0_LANE_1_0					= speedtable[gen][spdoft_slewctrl0_lane];
	reg_TX_TRAIN_PAT_SEL_LANE_1_0			= speedtable[gen][spdoft_tx_train_pat_sel_lane];
	reg_TRAIN_PAT_NUM_LANE_8_0_b0			= speedtable[gen][spdoft_train_pat_num_lane];
	reg_TRAIN_PAT_NUM_LANE_8_0_b1			= speedtable[gen][spdoft_train_pat_num_lane+1];
	reg_TX_TRAIN_PAT_TOGGLE_LANE			= speedtable[gen][spdoft_tx_train_pat_toggle_lane];
	reg_PACKET_SYNC_DIS_LANE				= speedtable[gen][spdoft_packet_sync_dis_lane];
	reg_SYNC_DET_DIS_LANE					= speedtable[gen][spdoft_sync_det_dis_lane];

	//gen = gen_rx;

	rx_pll_rate	 							= speedtable[gen][spdoft_pll_rate_sel_rx];
	if(rx_pll_rate>1 || phy_mode==SERDES) rx_pll_rate = 0;
	reg_RX_CK_SEL_LANE 						= speedtable[gen][spdoft_rx_ck_sel_lane] | (serdes_ring_lane_en & ring_lane_sel);
	reg_INTPI_LANE_3_0			  			= speedtable[gen][spdoft_intpi_lane];
	reg_INTPR_LANE_1_0				  		= speedtable[gen][spdoft_intpr_lane];
	reg_DLL_FREQ_SEL_LANE_1_0	  			= speedtable[gen][spdoft_dll_freq_sel_lane];
	if(speedtable[gen][spdoft_dll_freq_sel_lane]&0x04) reg_DLL_FREQ_SEL_LANE_2 = 1;
	else reg_DLL_FREQ_SEL_LANE_2 = 0;
	reg_EOM_DLL_FREQ_SEL_LANE_1_0  			= speedtable[gen][spdoft_eom_dll_freq_sel_lane];
	if(speedtable[gen][spdoft_eom_dll_freq_sel_lane]&0x04) reg_EOM_DLL_FREQ_SEL_LANE_2 = 1;
	else reg_EOM_DLL_FREQ_SEL_LANE_2 = 0;
	reg_ALIGN90_8G_EN_LANE		 			= speedtable[gen][spdoft_align90_8g_en_lane];
	reg_RX_REG0P9_SPEED_TRACK_CLK_LANE_2_0	= speedtable[gen][spdoft_rx_reg0p9_speed_track_clk_lane];
	reg_RX_REG0P9_SPEED_TRACK_CLK_HALF_LANE	= speedtable[gen][spdoft_rx_reg0p9_speed_track_clk_half_lane];
	reg_RX_SELMUFI_LANE_2_0 				= speedtable[gen][spdoft_rx_selmufi_lane];
	reg_REG_SELMUPI_LANE_3_0 				= speedtable[gen][spdoft_reg_selmupi_lane];
	reg_REG_SELMUPF_LANE_3_0 				= speedtable[gen][spdoft_reg_selmupf_lane];
	reg_DTL_CLK_MODE_LANE_1_0 				= speedtable[gen][spdoft_dtl_clk_mode_lane];
	reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b0 	= speedtable[gen][spdoft_rx_foffset_extra_m_lane];
	reg_RX_FOFFSET_EXTRA_M_LANE_13_0_b1 	= speedtable[gen][spdoft_rx_foffset_extra_m_lane+1];
	reg_INIT_RXFOFFS_LANE_9_0_b0			= speedtable[gen][spdoft_init_rxfoffs_lane];
	reg_INIT_RXFOFFS_LANE_9_0_b1			= speedtable[gen][spdoft_init_rxfoffs_lane+1];

	#ifdef _28G_X2
	//UPHY14_TRX_ANAREG_TOP_152.BT.B0			= speedtable[gen][spdoft_rx_rxclk_25m_ctrl_lane];
	reg_RXCLK_25M_CTRL_LANE_1_0					= speedtable[gen][spdoft_rx_rxclk_25m_ctrl_lane];
	reg_RXCLK_25M_DIV1P5_EN_LANE            	= speedtable[gen][spdoft_rx_rxclk_25m_div1p5_en_lane];
	reg_RXCLK_25M_DIV_LANE_7_0 					= speedtable[gen][spdoft_rx_rxclk_25m_div_lane];
	reg_RXCLK_25M_FIX_DIV_EN_LANE				= speedtable[gen][spdoft_rx_rxclk_25m_fix_div_en_lane];
	//reg_DEMUX2_CLK_DLY_EN_LANE = 0;
	//reg_CLK_BKWD2_DIRECTION_LCPLL_LANE = 0;
	#endif

	rxdll_temp_a_lane = speedtable[gen][spdoft_rxdll_temp_a_lane];
	rxdll_temp_b_lane = speedtable[gen][spdoft_rxdll_temp_b_lane];

	//*sequence need
	reg_PATH_DISABLE_EDGE_LANE              = speedtable[gen][spdoft_path_disable_edge_lane];
	reg_ANA_RX_DFE_F1_POL_EN_D_LANE			= speedtable[gen][spdoft_dfe_f1_pol_en_d_lane];
	reg_ANA_RX_DFE_F1_POL_EN_S_LANE         = speedtable[gen][spdoft_dfe_f1_pol_en_s_lane];
	reg_ANA_RX_DFE_F1_POL_D_LANE            = speedtable[gen][spdoft_dfe_f1_pol_d_lane];
	reg_ANA_RX_DFE_F1_POL_S_LANE            = speedtable[gen][spdoft_dfe_f1_pol_s_lane];
	reg_ANA_RX_DFE_F1_POL_EN_D_FORCE_LANE	= speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_en_d_force_lane];
	reg_ANA_RX_DFE_F1_POL_EN_S_FORCE_LANE   = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_en_s_force_lane];
	reg_ANA_RX_DFE_F1_POL_D_FORCE_LANE      = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_d_force_lane];
	reg_ANA_RX_DFE_F1_POL_S_FORCE_LANE      = speedtable[gen][spdoft_reg_ana_rx_dfe_f1_pol_s_force_lane];
	reg_DFE_FULL_RATE_MODE_LANE             = speedtable[gen][spdoft_reg_dfe_full_rate_mode_lane];

	//do last when PU_F1*=0
	reg_PU_F1N_S_O_LANE                     = speedtable[gen][spdoft_pu_f1n_s_o_lane];
	reg_PU_F1N_D_O_LANE                     = speedtable[gen][spdoft_pu_f1n_d_o_lane];
	reg_PU_F1N_S_E_LANE	                    = speedtable[gen][spdoft_pu_f1n_s_e_lane];
	reg_PU_F1N_D_E_LANE	                    = speedtable[gen][spdoft_pu_f1n_d_e_lane];
	reg_PU_F1P_S_E_LANE	                    = speedtable[gen][spdoft_pu_f1p_s_e_lane];
	}

	reg_PU_F1P_S_O_LANE                     = speedtable[gen][spdoft_pu_f1p_s_o_lane];
	reg_PU_F1P_D_O_LANE	                    = speedtable[gen][spdoft_pu_f1p_d_o_lane];
	reg_PU_F1P_D_E_LANE						= speedtable[gen][spdoft_pu_f1p_d_e_lane];

	if(cmx_TX_SSC_CTRL_SEL) {
		reg_SSC_EN_FM_REG_LANE = 1;
		if(train_save_tb[gen].ssc_en)
			reg_SSC_EN_LANE = 1;
		else reg_SSC_EN_LANE = 0;

		if(use_ring_pll) {
			reg_SSC_DSPREAD_TX_RING					=  tx_tb[gen].ssc_dspread;
			reg_SSC_AMP_RING_6_0					=  tx_tb[gen].ssc_amp;
		}
		else {
			reg_SSC_DSPREAD_TX 						=  tx_tb[gen].ssc_dspread;
			reg_SSC_AMP_6_0							=  tx_tb[gen].ssc_amp;
		}
	}
	else
		reg_SSC_EN_FM_REG_LANE = 0;

	// for APTA
	if(phy_mode == SAS && gen==4) reg_TX_TRAIN_IF_CLK_EN_LANE = 1;
	else reg_TX_TRAIN_IF_CLK_EN_LANE = 0;

	// for sq_thresh_ratio
	sq_thrs_ratio = sq_thrs_ratio_tb[gen];
	temp = lnx_CAL_SQ_THRESH_LANE_7_0;
	reg_SQ_THRESH_LANE_5_0 = (uint8_t)((temp * sq_thrs_ratio)>>5);

	restore_train();

	reg_MCU_DEBUG0_LANE_7_0 = 0x39;

}

void IncrementDebugReg_3(void) BANKING_CTRL {
	uint8_t i;
	for ( i = 1; i < 61; i+=3 )
		reg_MCU_DEBUG0_LANE_7_0 = i;
}
void IncrementDebugReg_8(void) BANKING_CTRL {
	uint8_t i;
	for ( i = 1; i < 0xB0; i+=8 )
		reg_MCU_DEBUG0_LANE_7_0 = i;
}
#endif //_28G_X2_ROM
