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

    unsigned char mcu_lcpll_spdchg = 0;

	CKCON = 0x00; 
	
    EA = 0;

    if (mcuid == MCU_CMN) {
    // whoever first is master lane
        while(1)
        {
            if(mcu_en0)
            {
                master_mcu = MCU_LANE0;
                break;
            }
            if(mcu_en1)
            {
                master_mcu = MCU_LANE1;
                break;
            }
            if(mcu_en2)
            {
                master_mcu = MCU_LANE2;
                break;
            }
            if(mcu_en3)
            {
                master_mcu = MCU_LANE3;
                break;
            }

        }
    }
    else
    {
        while(reg_MCU_EN_CMN == 0);
    }

	// cmx_MCU_INIT_DONE = 0;       // Default to 0 when XDAT is loaded; Used in simulation. Set to 1 after speed table
	// is copied from pmem to XDAT, and in clear_xdata()
	//reg_SET_MCU_INT_LANE0 = 0;

#ifdef SPD_TBL_IN_PMEM
	// For hard reset (PIN_RESET), FW needs to re-copy the speed table
	if ( reg_PHY_FM_RST && ( PHY_STATUS == ST_INIT ) ) {
		CopySpeedTableToXData();	// Copy speed table
		InitPrePowerUp();		// Initialize registers before power up
	}	
    
#endif

    if (mcuid != MCU_CMN) {
	cpu_init();
	
	pll_cal_timeout_dis_save = cmx_PLL_CAL_TIMEOUT_DIS;
	#ifdef _LANE_RPLL
	PHY_STATUS = PHY_NS;
	
	if(reg_PHY_FM_RST){
		if(MCU_INIT_DONE_RD==MCU_INIT) {
			pwrsq_on = 1;
			reset_pwr_reg();
			cmx_PLL_CAL_TIMEOUT_DIS = 1;
		}
		if(mcuid== master_mcu) {
			reg_CLEAR_PHY_FM_RST = 1;
			reg_CLEAR_PHY_FM_RST = 0;
		}
		PHY_STATUS = ST_INIT;
	}
	#else
	// 32G uses Lane base reset
	if (reg_PHY_FM_RST_LANE || reg_PHY_FM_RST) {
		if (PHY_STATUS != 0) {
		//if(MCU_INIT_DONE_RD==MCU_INIT) {
			pwrsq_on = 1;
			// soft reset; reset registers
			reset_pwr_reg();
			cmx_PLL_CAL_TIMEOUT_DIS = 1;
		}

		// clear rst
		reg_CLEAR_PHY_FM_RST_LANE = 0;
		reg_CLEAR_PHY_FM_RST_LANE = 1;
		if(mcuid== master_mcu) {
			reg_CLEAR_PHY_FM_RST = 1;
			reg_CLEAR_PHY_FM_RST = 0;
		}

		PHY_STATUS = ST_INIT;
	}

	if (PHY_STATUS != ST_INIT)
		PHY_STATUS = PHY_NS;
	#endif
	PHY_NS = ST_INIT;
	//SYNC_STATUS_LANE = IDLE;
	sync_status_lane(IDLE);
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

#if RUN_REGRESSION
        regression_trap(1);
#endif        
	reg_INT_ENABLE_ALL_LANE = 1; 
    EA = 1;

		#ifdef _LAB
	DBG_Printf("\r\n[mcu%d]-- Welcome to MCUPhy Debug World!! --", reg_MCU_ID_LANE_7_0);
	DBG_Printf("\tBuilt: %s-%s\n\r",__DATE__, __TIME__);
		#endif
    }
		
    while(1){
	//if ((mcuid == MCU_LANE0) || (mcuid == MCU_LANE1)) {
	if (mcuid != MCU_CMN) {
		#ifdef _LAB
		if( PHY_STATUS != old_status) {
			old_status = PHY_STATUS;
			DBG_Printf("\r\n%x", old_status);
		}
		#endif

	    //do process
		switch(PHY_STATUS){
			case ST_SPDCHG: 
                            SpeedChange();		
                            #if RUN_REGRESSION
                            regression_trap(2);
                            #endif        
                            break;
			#ifdef _PCIE_USB_BUILD
			case ST_P1:     Power_P0s_P1();		break;
			case ST_P1_WK:  Power_P1_P0();		break;
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
			case ST_SLUMBER: 
                            Power_Slumber();
                            #if RUN_REGRESSION
                            regression_trap(3);
                            #endif        
                            break;
			case ST_SLUMBER_WK: 
                            Power_Slumber_Wakeup(); 
                            #if RUN_REGRESSION
                            regression_trap(4);
                            #endif        
                            break;
			//case ST_PSLUMBER_TX:
			case ST_PSLUMBER_RX:
                            Power_Patial_Slumber(); 
                            #if RUN_REGRESSION
                            regression_trap(5);
                            #endif        
                            break;
			#endif //_SATA_SERDES_BUILD
			case ST_TXTRAIN:
			case ST_RXTRAIN:
			case ST_TRXTRAIN: 
                            TRX_Train();  	
                            #if RUN_REGRESSION
                            regression_trap(6);
                            #endif        
                            break;
			case ST_DTL:	  
                            RX_Init();		
                            #if RUN_REGRESSION
                            regression_trap(7);
                            #endif        
                            break;
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

                // check comphy int (ported from 112G_A)
                if(comphy_int_in0)
                    comphy_int();

				PHY_STATUS = ST_NORMAL;
							
				break;
		}
		
		//check event
		if(do_rxinit || reg_INT_RX_INIT_RISE_ISR_LANE) {
			if(SKIP_RX_INIT) {
				reg_RX_INIT_DONE_LANE = 0; 
				reg_INT_RX_INIT_RISE_ISR_CLEAR_LANE = 1;
				reg_INT_RX_INIT_RISE_ISR_CLEAR_LANE = 0;
				SKIP_RX_INIT = 0;
				do_rxinit = 0;
				reg_RX_INIT_DONE_LANE = 1; 
			}
			else PHY_STATUS = ST_DTL; 
		}
		else if(do_train | do_rxtrain)  { PHY_STATUS = ST_TRXTRAIN; }
		else if(do_train==0 && reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE) {
			reg_MCU_DEBUG0_LANE_7_0 = 0x98;
			txtrain_force_restart();
		}
		else if(do_rxtrain==0 && reg_PIN_RX_TRAIN_ENABLE_RD_LANE) {
			reg_MCU_DEBUG0_LANE_7_0 = 0x99;
			EA = 0;
			TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B0 = 0x01;
			TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B0 = 0;

			PHY_STATUS = ST_TRXTRAIN; reg_RX_TRAIN_ON_LANE = 1; do_rxtrain = 1;
			EA = 1;
		}
		#ifdef SUPPORT_APTA_TX_TRAIN
		else if(do_rx_apta) { PHY_STATUS = ST_APTA_TXTRAIN; }
		#endif
		else if(reg_DFE_MARGIN_EN_LANE && pcie_usb_mode)  { PHY_STATUS = ST_LANE_MARGIN_EN; }
		else if(cmx_CAL_START)  { PHY_STATUS = ST_CAL; cal_start_on = 1; }
		#ifdef SUPPORT_CMD_IF
		if(PHY_MCU_REMOTE_REQ_LANE && lnx_PHY_MCU_LOCAL_ACK_LANE==0)
			cmd_if();
		#ifdef _32G_ANA
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
		
		//Watchdog: Toggle the reset register to reset WD counter
		reg_MCU_WDT_RESET_LANE = !reg_MCU_WDT_RESET_LANE;
	}
    else // CMN MCU
    {
        while(cmx_LANE0_VDD_CAL_REQ || cmx_LANE1_VDD_CAL_REQ || cmx_LANE2_VDD_CAL_REQ || cmx_LANE3_VDD_CAL_REQ)
        {
            if(cmx_LANE0_VDD_CAL_REQ)
            {
                cmx_LANE0_VDD_CAL_LOCK = 0;
                while(cmx_LANE0_VDD_CAL_REQ);
                cmx_LANE0_VDD_CAL_LOCK = 1;
            }
            if(cmx_LANE1_VDD_CAL_REQ)
            {
                cmx_LANE1_VDD_CAL_LOCK = 0;
                while(cmx_LANE1_VDD_CAL_REQ);
                cmx_LANE1_VDD_CAL_LOCK = 1;
            }
            if(cmx_LANE2_VDD_CAL_REQ)
            {
                cmx_LANE2_VDD_CAL_LOCK = 0;
                while(cmx_LANE2_VDD_CAL_REQ);
                cmx_LANE2_VDD_CAL_LOCK = 1;
            }
            if(cmx_LANE3_VDD_CAL_REQ)
            {
                cmx_LANE3_VDD_CAL_LOCK = 0;
                while(cmx_LANE3_VDD_CAL_REQ);
                cmx_LANE3_VDD_CAL_LOCK = 1;
            }

        }

        while(cmx_LANE0_TXDETECT_CAL_REQ || cmx_LANE1_TXDETECT_CAL_REQ || cmx_LANE2_TXDETECT_CAL_REQ || cmx_LANE3_TXDETECT_CAL_REQ)
        {
            if(cmx_LANE0_TXDETECT_CAL_REQ)
            {
                cmx_LANE0_TXDETECT_CAL_LOCK = 0;
                while(cmx_LANE0_TXDETECT_CAL_REQ);
                cmx_LANE0_TXDETECT_CAL_LOCK = 1;
            }
            if(cmx_LANE1_TXDETECT_CAL_REQ)
            {
                cmx_LANE1_TXDETECT_CAL_LOCK = 0;
                while(cmx_LANE1_TXDETECT_CAL_REQ);
                cmx_LANE1_TXDETECT_CAL_LOCK = 1;
            }
            if(cmx_LANE2_TXDETECT_CAL_REQ)
            {
                cmx_LANE2_TXDETECT_CAL_LOCK = 0;
                while(cmx_LANE2_TXDETECT_CAL_REQ);
                cmx_LANE2_TXDETECT_CAL_LOCK = 1;
            }
            if(cmx_LANE3_TXDETECT_CAL_REQ)
            {
                cmx_LANE3_TXDETECT_CAL_LOCK = 0;
                while(cmx_LANE3_TXDETECT_CAL_REQ);
                cmx_LANE3_TXDETECT_CAL_LOCK = 1;
            }

        }

        while(cmx_LANE0_RXIMP_CAL_REQ || cmx_LANE1_RXIMP_CAL_REQ || cmx_LANE2_RXIMP_CAL_REQ || cmx_LANE3_RXIMP_CAL_REQ)
        {
            reg_RXIMPCAL_EN = 1;
            if(cmx_LANE0_RXIMP_CAL_REQ)
            {
                cmx_LANE0_RXIMP_CAL_LOCK = 0;
                while(cmx_LANE0_RXIMP_CAL_REQ);
                cmx_LANE0_RXIMP_CAL_LOCK = 1;
            }
            else if(cmx_LANE1_RXIMP_CAL_REQ)
            {
                cmx_LANE1_RXIMP_CAL_LOCK = 0;
                while(cmx_LANE1_RXIMP_CAL_REQ);
                cmx_LANE1_RXIMP_CAL_LOCK = 1;
            }
            else if(cmx_LANE2_RXIMP_CAL_REQ)
            {
                cmx_LANE2_RXIMP_CAL_LOCK = 0;
                while(cmx_LANE2_RXIMP_CAL_REQ);
                cmx_LANE2_RXIMP_CAL_LOCK = 1;
            }
            else if(cmx_LANE3_RXIMP_CAL_REQ)
            {
                cmx_LANE3_RXIMP_CAL_LOCK = 0;
                while(cmx_LANE3_RXIMP_CAL_REQ);
                cmx_LANE3_RXIMP_CAL_LOCK = 1;
            }
            reg_RXIMPCAL_EN = 0;
        }

        while(cmx_LANE0_TXIMP_CAL_REQ || cmx_LANE1_TXIMP_CAL_REQ || cmx_LANE2_TXIMP_CAL_REQ || cmx_LANE3_TXIMP_CAL_REQ)
        {
            reg_TXIMPCAL_EN = 1;
            if(cmx_LANE0_TXIMP_CAL_REQ)
            {
                cmx_LANE0_TXIMP_CAL_LOCK = 0;
                while(cmx_LANE0_TXIMP_CAL_REQ);
                cmx_LANE0_TXIMP_CAL_LOCK = 1;
            }
            else if(cmx_LANE1_TXIMP_CAL_REQ)
            {
                cmx_LANE1_TXIMP_CAL_LOCK = 0;
                while(cmx_LANE1_TXIMP_CAL_REQ);
                cmx_LANE1_TXIMP_CAL_LOCK = 1;
            }
            else if(cmx_LANE2_TXIMP_CAL_REQ)
            {
                cmx_LANE2_TXIMP_CAL_LOCK = 0;
                while(cmx_LANE2_TXIMP_CAL_REQ);
                cmx_LANE2_TXIMP_CAL_LOCK = 1;
            }
            else if(cmx_LANE3_TXIMP_CAL_REQ)
            {
                cmx_LANE3_TXIMP_CAL_LOCK = 0;
                while(cmx_LANE3_TXIMP_CAL_REQ);
                cmx_LANE3_TXIMP_CAL_LOCK = 1;
            }
            reg_TXIMPCAL_EN = 0;
        }

        // polling for LC SPDCHG
        if(cmx_LANE0_LCPLL_RATEREQ_ON || cmx_LANE1_LCPLL_RATEREQ_ON || cmx_LANE2_LCPLL_RATEREQ_ON || cmx_LANE3_LCPLL_RATEREQ_ON )
        {
            if(cmx_LANE0_LCPLL_RATEREQ_ON )
                mcu_lcpll_spdchg = 0;
            else if(cmx_LANE1_LCPLL_RATEREQ_ON )
                mcu_lcpll_spdchg = 1;
            else if(cmx_LANE2_LCPLL_RATEREQ_ON )
                mcu_lcpll_spdchg = 2;
            else if(cmx_LANE3_LCPLL_RATEREQ_ON )
                mcu_lcpll_spdchg = 3;

            pll_clk_ready_0();
		
            if(cmx_EXT_FORCE_CAL_DONE)
            {
                reg_LCVCO_DAC_LSB_4_0 = 0x10;
                reg_LCVCO_DAC_MSB_2_0 = 0x02;
                reg_LCCAP_MSB_3_0 = 0;

            }
		
            if( mcu_lcpll_spdchg == 0)
            {
                loadspeedtbl_pll(cmx_LANE0_PLL_RATE_SEL_REQ_7_0);
                cmx_LANE0_PLL_RATE_SEL_REQ_7_0 = 0xff;
            }
            if( mcu_lcpll_spdchg == 1)
            {
                loadspeedtbl_pll(cmx_LANE1_PLL_RATE_SEL_REQ_7_0);
                cmx_LANE1_PLL_RATE_SEL_REQ_7_0 = 0xff;
            }
            if( mcu_lcpll_spdchg == 2)
            {
                loadspeedtbl_pll(cmx_LANE2_PLL_RATE_SEL_REQ_7_0);
                cmx_LANE2_PLL_RATE_SEL_REQ_7_0 = 0xff;
            }
            if( mcu_lcpll_spdchg == 3)
            {
                loadspeedtbl_pll(cmx_LANE3_PLL_RATE_SEL_REQ_7_0);
                cmx_LANE3_PLL_RATE_SEL_REQ_7_0 = 0xff;
            }
            load_init_temp_table();

            //if(slave_phy_on==0) 
            {

                if(cmx_EXT_FORCE_CAL_DONE)
                {
                    reg_RESET_ANA = 0;
                    pll_clk_ready_1();
                }
                else
                {
                    pll_clk_ready_0();
                    reg_RESET_ANA = 0;
                    pll_cal();
                    pll_clk_ready_1();

                    plldcc_cal_ram();
                }
            }

		
            //if(slave_phy_on)
            //	check_master_phy_status(CHECK_MP_PLL_CAL_LOOP_DONE);

            //if(slave_phy_on==0) 
                PHY_STATUS_INT |= LCPLL_CAL_LOOP_DONE;
		    
            if( mcu_lcpll_spdchg == 0)
            {
                cmx_LANE0_LCPLL_RATEREQ_ON = 0;
                cmx_LANE0_LCPLL_RATECHG_DONE = 1;
            }
            if( mcu_lcpll_spdchg == 1)
            {
                cmx_LANE1_LCPLL_RATEREQ_ON = 0;
                cmx_LANE1_LCPLL_RATECHG_DONE = 1;
            }
            if( mcu_lcpll_spdchg == 2)
            {
                cmx_LANE2_LCPLL_RATEREQ_ON = 0;
                cmx_LANE2_LCPLL_RATECHG_DONE = 1;
            }
            if( mcu_lcpll_spdchg == 3)
            {
                cmx_LANE3_LCPLL_RATEREQ_ON = 0;
                cmx_LANE3_LCPLL_RATECHG_DONE = 1;
            }
        }

    } // CMN MCU
    } // while 1 
}
