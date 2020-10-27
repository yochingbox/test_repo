/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file main_repl.c
* \purpose Althernate main function when certain register is set
*/
#include "common.h"

#ifdef USE_BANKING
#pragma codeseg BANK3
#pragma constseg BANK3
#endif

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

	reg_MCU_DEBUG0_LANE_7_0 = 0x19;
	lc_speedtable[0][0][spdoft_fbdiv] = 0x14;
	lc_speedtable[0][0][spdoft_fbdiv+1] = 0;
	lc_speedtable[0][0][spdoft_refdiv] = 1;
	lc_speedtable[0][0][spdoft_pll_lpfr] = 1;
	lc_speedtable[0][0][spdoft_pll_lpfc] = 0;
	lc_speedtable[1][0][spdoft_fbdiv] = 0x14;
	lc_speedtable[1][0][spdoft_fbdiv+1] = 0;
	lc_speedtable[1][0][spdoft_refdiv] = 1;
	lc_speedtable[1][0][spdoft_pll_lpfr] = 1;
	lc_speedtable[1][0][spdoft_pll_lpfc] = 0;
	
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
			rx_init_done = 0;
			reset_pwr_reg();
			cmx_PLL_CAL_TIMEOUT_DIS = 1;
			if(cmx_LOAD_CTLE_SPDTBL_CORE_RESET_EN)
				TRAIN_CONTROL_9.BT.B1 = 0; //clear rxtrain pass
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
			reg_ANA_REFCLK_SEL = reg_PIN_REFCLK_SEL_RD; 
			#ifdef SUPPORT_SHRTR_PATCH
			PowerUp_Seq_ram();
			#else
			PowerUp_Seq();
			#endif

			//reg_MCU_DEBUG0_LANE_7_0 = 0x16;
			reg_VCON_REF_SEL_2_0 = 3;
			reg_VARAC_BIAS_SEL_2_0 = 5;
			reg_HIZ_HOLD_CUR_LANE_1_0 = 2;	
			reg_TXDETRX_VTH_LANE_1_0 = 1;
			
			//cmx_FW_MAJOR_VER_7_0 =  MAJOR_VER_EXT;
			//cmx_FW_MINOR_VER_7_0 =  MINOR_VER_EXT;
			cmx_FW_PATCH_VER_7_0 =  PATCH_VER_EXT;
			cmx_FW_BUILD_VER_7_0 =  BUILD_VER_EXT;
			
			train_register_default_change();

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
			#ifdef SUPPORT_SHRTR_PATCH
            case ST_SPDCHG: SpeedChange_ram();		break;		
			#else
            case ST_SPDCHG: SpeedChange();	rx_init_done = 0;  PHY_STATUS = ST_DTL; break;		
			#endif
			#ifdef _PCIE_USB_BUILD
			case ST_P1: 	Power_P0s_P1();		break;
			case ST_P1_WK:	Power_P1_P0();	rx_init_done = 0;	PHY_STATUS = ST_DTL; break;
			#ifdef SUPPORT_SHRTR_PATCH
			case ST_P2_P0:	Power_P2_P0_ram();		break;
            case ST_P2: 	Power_P1_P2_ram();	 	break;
			case ST_P2_WK: 	Power_P2_P1_ram();	 	break;
			case ST_P1CLKREQ_WK:	Power_P1CLKREQ_P1_ram();	break;
			#else
			case ST_P2_P0:	Power_P2_P0();		rx_init_done = 0;  PHY_STATUS = ST_DTL; break;
            case ST_P2: 	Power_P1_P2();	 	break;
			case ST_P2_WK: 	Power_P2_P1();	 	break;
			case ST_P1CLKREQ_WK:	Power_P1CLKREQ_P1();	break;
			#endif	
			case ST_P2_BEACON:	Power_P2_BEACON();	break;
			case ST_TXDETRX: Power_P0_TXDETRX(); rx_init_done = 0;	PHY_STATUS = ST_DTL; break;
			case ST_P1_TXDETRX: Power_P1_TXDETRX(); break;
			case ST_P2_TXDETRX: Power_P2_TXDETRX(); break;
			#endif //_PCIE_USB_BUILD
			#ifdef _SATA_SERDES_BUILD
            case ST_SLUMBER: Power_Slumber();	 	break;
			case ST_SLUMBER_WK: Power_Slumber_Wakeup(); break;
            case ST_PSLUMBER_RX:Power_Patial_Slumber(); break;
			#endif //_SATA_SERDES_BUILD
			case ST_TXTRAIN:
			case ST_RXTRAIN:	
            case ST_TRXTRAIN: TRX_Train_ram();  	break;	
            case ST_DTL:	  RX_Init_ram();		break;
			case ST_PLLREADY: 	break; 
			#ifdef SUPPORT_APTA_TX_TRAIN
            case ST_APTA_TXTRAIN: 
			if(cmx_APTA_TRAIN_SIM_EN || PHY_MCU_REMOTE_REQ_LANE) 
				apta_txtrain(); break;	
			#endif	
			#ifdef SUPPORT_CAL_MEMORY_OPT
            case ST_CAL:
			//tsen_dat = read_tsen(); //TODO	
			reg_RX_PULSE_SHORTB_LANE = 0;
			Calibration(); 		
			reg_RX_PULSE_SHORTB_LANE = 1;
			break;			
			#else
            case ST_CAL:	  Calibration_ram(); 		break;
			#endif
			#ifdef _PCIE_USB_BUILD
			case ST_LANE_MARGIN_EN:  lane_margin_start(); 		break;
			#endif
			case ST_NORMAL: 
						    Cal_Cont_ram();
							#ifdef SUPPORT_DFE_TAP_REWRITE
							if(reg_MCU_DEBUG_CMN_3_7_0&0x20)	dfe_tap_rewrite();
							#endif
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


 
