/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file main.c
* \purpose main top
* \History
*	10/13/2015 Heejeong Ryu		Initial 
*/

#define _DEBUG _DEBUG_MAIN
#include "common.h"

// FW revision embeded in program
static __code __at (0x200) uint8_t gaFwRev[] = {BUILD_VER, PATCH_VER, MINOR_VER, MAJOR_VER };
// PHY mode embeded in program
#ifdef _PCIE_USB_BUILD
static __code __at (0x204) uint8_t gnFwPhyMode = 0x1;
#else
#ifdef _SATA_SERDES_BUILD
static __code __at (0x204) uint8_t gnFwPhyMode = 0x2;
#else
static __code __at (0x204) uint8_t gnFwPhyMode = 0x4;
#endif
#endif

/* Function Declaration */
int _sdcc_external_startup(void);
void int0_isr   (void) __interrupt (0)  __using (2); 
void timer0_isr (void) __interrupt (1)  __using (2);
void int1_isr   (void) __interrupt (2)  __using (2); 
void timer1_isr (void) __interrupt (3)  __using (2);
void timer2_isr (void) __interrupt (5)  __using (2);
void int2_isr   (void) __interrupt (9)  __using (2); 
void int3_isr   (void) __interrupt (10) __using (2); 
void int4_isr   (void) __interrupt (11) __using (2); 
void int5_isr   (void) __interrupt (12) __using (2); 
void int6_isr 	(void) __interrupt (13) __using (2);
void int7_isr 	(void) __interrupt (8)  __using (2);
void int8_isr 	(void) __interrupt (17) __using (2);
void int9_isr 	(void) __interrupt (18) __using (2);
void int10_isr 	(void) __interrupt (19) __using (2);
void int11_isr 	(void) __interrupt (20) __using (2);
void int12_isr 	(void) __interrupt (21) __using (2);
void uart0_isr  (void) __interrupt (4)  __using (2); 

_sdcc_external_startup() {
    return(1);
}

/**
 * \module main
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
*/
void main(){
	// Crash mode for X2_ROM only
#ifdef _28G_X2_ROM
    if ( reg_MCU_FW_SWITCH_EN_LANE_31_0_b0 != 0 ) { // Switch to crash crash mode code
    	main_repl();
    	return;	// Won't execute the normal mode mode
    }
#endif
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
			reg_PWRON_SEQ = 1; pwrsq_on = 1;
			// reset_pwr_reg() is in the ROM code which is freezing currently
			// add reset_pwr_reg_ext() for extra regs that need reset
			reset_pwr_reg_ext();
			reset_pwr_reg();
			cmx_PLL_CAL_TIMEOUT_DIS = 1;
			cmx_LANE_DIS_LANE0_7_0 = 0;
			cmx_LANE_DIS_LANE1_7_0 = 0;
			reg_LANE_ALIGN_READY_OUT = 0; 
			reg_LANE_ALIGN_READY_OUT_FORCE = 0;
			reg_TXCLK_SYNC_START_OUT = 0;		

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
			PowerUp_Seq();
		}	
	}
	else {
		clear_normal_mode_cal_en();
	}
	
	#ifndef _SATA_SERDES_BUILD	
	reg_INT_ENABLE_ALL_LANE = 1; 
    EA = 1;
	#else 
	if(pwrsq_on==0) {
		reg_INT_ENABLE_ALL_LANE = 1; 
		EA = 1;
	}	
	#endif
		#ifdef _LAB
	reg_INT_ENABLE_ALL_LANE = 1; 
    EA = 1;
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
            case ST_SPDCHG: SpeedChange();		break;		
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
							#ifdef SUPPORT_CONT_CAL_L1
							if(P1_cont_cal) { Cont_Cal_Power_state(); break; }
						    else
							#endif 		
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
		#ifdef SUPPORT_CONT_CAL_L1
		if(reg_PIN_PLL_READY_RX_LANE==0 && reg_PIN_PU_RX_RD_LANE==1 && P1_cont_cal) {
			PHY_STATUS = ST_P1_WK;
			P1_cont_cal = 0;
		}
		#endif

		#ifdef _SATA_SERDES_BUILD
		if((reg_PIN_PHY_GEN_TX_RD_LANE_3_0!=pre_phy_gen) && reg_ANA_RX_PU_DLY2_LANE && reg_ANA_PU_TX_LANE) {
			if(phy_mode==SERDES) {
				PHY_STATUS = ST_CAL; PHY_STATUS_INT |= SPDCHG_ON;
			}
			else PHY_STATUS = ST_SPDCHG;
			continue;
		}	
		else 
		#endif
		
		if(do_rxinit || reg_INT_RX_INIT_RISE_ISR_LANE) {
			if(SKIP_RX_INIT) {
				reg_RX_INIT_DONE_LANE = 0; 
				reg_INT_RX_INIT_RISE_ISR_CLEAR_LANE = 1;
				reg_INT_RX_INIT_RISE_ISR_CLEAR_LANE = 0;
				if(phy_mode==PCIE) 
					delay01(100);
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


