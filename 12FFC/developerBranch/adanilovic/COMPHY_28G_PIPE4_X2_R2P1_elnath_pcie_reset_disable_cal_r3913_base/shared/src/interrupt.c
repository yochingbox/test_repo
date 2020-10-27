/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file interrupt.c
* \purpose Interrupt
* \History
*	10/13/2015 Heejeong Ryu		Initial 
*/
#include "common.h"

#pragma constseg CSEG 

static inline void short_delay_1p4s(void) {
	int i;
	
	for (i=0; i<20; i++) {
		
	__asm
		nop
		nop
		nop
		nop
		nop
		nop
		nop
		nop
		nop
		nop
	__endasm;
	
	}
	
}	

static inline void mcu_reset(void) {
	    PHY_INT_LANE = 0xFF;
		reg_INT_ENABLE_ALL_LANE = 0;
		SRST = 1;
		SRST = 1;		
}


void timer0_isr (void) __interrupt (1) __using (2)
{
  EA         = 0;
  PHY_INT_LANE = 0xF0;
  TF0       = 0;
  TR0		= 0;

  //#if tag_TRAIN_TIME_OUT_EN
	//if(lnx_TX_TRAIN_FRAME_DET_TIMER_ENABLE_LANE && do_train && train_timer_int && link_train_mode==0 && reg_FRAME_LOCK_LANE==0) {
	//	if(phy_mode<=SAS) {
	//		lnx_TX_TRAIN_FRAME_LOCK_DET_FAIL_INT_LANE = 1;
	//		reg_TX_TRAIN_ERROR_LANE_1_0_b0 = 0; //0=framelock err
	//		reg_TX_TRAIN_ERROR_LANE_1_0_b1 = 0; 
	//	}
	//	reg_TX_TRAIN_FAILED_LANE = 1;
	//}	
  //#endif
  PHY_INT_LANE = 0xFF;
  EA         = 1;
}

void timer1_isr (void) __interrupt (3) __using (2)
{
  EA         = 0;
  TR1        = 0;
  TF1        = 0;
  timeout    = 1;
  EA         = 1;
}


void timer2_isr (void) __interrupt (5) __using (2)
{
  EA         = 0;
     PHY_INT_LANE = 0xF2;
  T2CON		 = 0x78;//60; 
  TF2        = 0;
  timeout2   = 1;
	#if tag_TRAIN_TIME_OUT_EN
	if(lnx_TX_TRAIN_TIMER_ENABLE_LANE && do_train && train_timer_int) {
		//if(phy_mode<=SAS) 
		{				
			if(reg_LOCAL_TX_TRAIN_COMPLETE_LANE==0) {
				reg_TX_TRAIN_ERROR_LANE_1_0_b0 = 0; //2=MTTT timer expire for local phy
				reg_TX_TRAIN_ERROR_LANE_1_0_b1 = 1; 
			}
			else if((reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b1&0x80)==0&&phy_mode!=PCIE) {
				reg_TX_TRAIN_ERROR_LANE_1_0_b0 = 1; //3=does not get remote phy's complete status
				reg_TX_TRAIN_ERROR_LANE_1_0_b1 = 1; 
			}
			else { 
				reg_TX_TRAIN_ERROR_LANE_1_0_b0 = 1; 
				reg_TX_TRAIN_ERROR_LANE_1_0_b1 = 0; 
			}	
			if(link_train_mode==0 && reg_FRAME_LOCK_LANE==0){
				lnx_TX_TRAIN_FRAME_LOCK_DET_FAIL_INT_LANE = 1;
				reg_TX_TRAIN_ERROR_LANE_1_0_b0 = 0; //0=framelock err
				reg_TX_TRAIN_ERROR_LANE_1_0_b1 = 0; 
			}	
		}
		lnx_TX_TRAIN_FAIL_INT_LANE = 1;
		lnx_TX_TRAIN_TIMEOUT_LANE = 1;
		reg_TX_TRAIN_FAILED_LANE = 1;
		lnx_TX_TRAIN_COMPLETE_INT_LANE = 1;
	}
	else if(reg_RX_TRAIN_COMPLETE_LANE==0 && do_rxtrain && train_timer_int) {
		reg_RX_TRAIN_FAILED_LANE = 1;
		lnx_RX_TRAIN_TIMEOUT_LANE = 1;
		lnx_RX_TRAIN_COMPLETE_INT_LANE = 1;
		lnx_RX_TRAIN_FAIL_INT_LANE = 1;
	}	
	#endif
     PHY_INT_LANE = 0xFF;
  EA         = 1;
}

void int0_isr (void) __interrupt (0)  __using (2)  
{
    PHY_INT_LANE = 13;
	//if(reg_INT_REFCLK_DIS_CHG_ISR_LANE == 1) //no need
	//	reg_INT_REFCLK_DIS_CHG_ISR_LANE = 0;
	//reg_MCU_DEBUG2_LANE_7_0++; //test
    PHY_INT_LANE = 0xFF;
}

void int3_isr (void) __interrupt (10)  __using (2) //refclk_dis
{
     EA = 0;
    PHY_INT_LANE = 3;

	if( reg_INT_REFCLK_DIS_CHG_ISR_LANE ) {
		#ifdef _28G_X2
		PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0x02; 
		PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0;
		#else
		reg_INT_REFCLK_DIS_CHG_ISR_LANE = 0;
		#endif	
		//if(reg_PIN_REFCLK_DIS_RD==1 && reg_PIN_PU_PLL_RD_LANE==0 ) {
		//	if(	pcie_usb_mode==0 && PHY_STATUS != ST_SLUMBER) {
		//		PHY_NS = ST_SLUMBER; 
		//		SYNC_STATUS_LANE_EN = 0;
		//		mcu_reset();
		//	}
		//}
	}

	if( reg_INT_PU_IVREF_CHG_ISR_LANE ) {
		#ifdef _28G_X2
		PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0x04;
		PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0;
		#else
		reg_INT_PU_IVREF_CHG_ISR_LANE = 0;
		#endif	
		if(reg_PIN_PU_IVREF_RD==0 && reg_PIN_PU_PLL_RD_LANE==0 && mcuid== master_mcu ) {
			PM_CMN_REG2.BT.B2 = 0x0e; //reg_ANA_PU_IVREF_DLY3 = 0;
			PM_CMN_REG2.BT.B2 = 0x0c; //reg_ANA_PU_IVREF_DLY2 = 0;
			PM_CMN_REG2.BT.B2 = 0x08; //reg_ANA_PU_IVREF_DLY1 = 0;
			PM_CMN_REG2.BT.B2 = 0;
			SYNC_STATUS_LANE_EN = 0;
		}
	}

	reg_INT3_INT_REFCLK_DIS_CHG_INT_EN_LANE = 0;
	reg_INT3_INT_PU_IVREF_CHG_INT_EN_LANE = 0;
	reg_INT3_INT_REFCLK_DIS_CHG_INT_EN_LANE = 1;
	reg_INT3_INT_PU_IVREF_CHG_INT_EN_LANE = 1;
	
    PHY_INT_LANE = 0xFF;
	
	EA = 1;
}

void int1_isr (void) __interrupt (2)  __using (2) //pcie
{
	#ifdef _PCIE_USB_BUILD
	bool int_pll_or_chg = 0;
	
    EA = 0;	
	//EX1 = 0; //reg_INT_ENABLE_ALL_LANE = 0;

    PHY_INT_LANE = 1;	
	
	#ifdef _28G_X2
	//lane disable save
	if(reg_DPHY_ANA_LANE_DISABLE_ISR_LANE) {
		PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B2 = 0x02;
		PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B2 = 0;
		
		if( mcuid == MCU_LANE0) 
			cmx_LANE_DIS_LANE0_7_0 = reg_LANE_DISABLE_RD_LANE;
		else 	
			cmx_LANE_DIS_LANE1_7_0 = reg_LANE_DISABLE_RD_LANE;	
		
		if(reg_LANE_DISABLE_RD_LANE==0) {
			reg_LANE_ALIGN_READY_OUT = 0; 
			reg_LANE_ALIGN_READY_OUT_FORCE = 0;
			reg_TXCLK_SYNC_START_OUT = 0;			
		}	
		else {
			if( cmx_LANE_DIS_LANE0_7_0 && cmx_LANE_DIS_LANE1_7_0) {
				reg_LANE_ALIGN_READY_OUT = 1; //control sequence to de-glitch
				reg_LANE_ALIGN_READY_OUT_FORCE = 1;
				reg_TXCLK_SYNC_START_OUT = 1;	
			}					
		}	
	}
	#endif //_28G_X2
	
	if( reg_INT_PU_PLL_OR_CHG_ISR_LANE && mcuid== master_mcu) {
		int_pll_or_chg = 1;
		#ifdef _28G_X2
		//reg_INT_PU_PLL_OR_CHG_ISR_CLEAR_LANE = 1;
		//reg_INT_PU_PLL_OR_CHG_ISR_CLEAR_LANE = 0;			
		#else
		reg_INT_PU_PLL_OR_CHG_ISR_LANE = 0;
		#endif	
	}	
	
	//PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0; //reg_INT_POWER_STATE_VALID_RISE_ISR_LANE = 0;
	//reg_INT_PU_PLL_OR_CHG_ISR_LANE = 0; 
	
	if(reg_INT_POWER_STATE_VALID_RISE_ISR_LANE) {
	#ifdef _28G_X2
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0x1b; // clear reg_INT_POWER_STATE_VALID_RISE_ISR_CLEAR_LANE, reg_INT_PU_PLL_OR_CHG_ISR_CLEAR_LANE, reg_INT_RX_INIT_RISE_ISR_LANE, INT_REFCLK_DIS_CHG_ISR_CLEAR_LANE
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0;
	#else
	PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0;	
	//reg_INT_POWER_STATE_VALID_RISE_ISR_LANE = 0;
	//reg_INT_RX_INIT_RISE_ISR_LANE = 0;
	//reg_INT_PU_PLL_OR_CHG_ISR_LANE = 0;
	#endif	
	
	if( reg_PIN_PU_PLL_RD_LANE == 1 ) 
		SYNC_STATUS_LANE_EN = 1;
	else 
		SYNC_STATUS_LANE_EN = 0;
		
	if(reg_PWRON_SEQ) {
		PHY_INT_LANE = 0xFF;
		//EX9 = 1; //reg_INT_ENABLE_ALL_LANE = 1;
		EA = 1;
		return;
	}
	
	switch(PHY_STATUS) {
	case ST_P2:
	case ST_P2_WK:
			if( reg_PIN_PU_PLL_RD_LANE == 1 ) {
				do_wake = 1; //p2->p1 or p0
				SYNC_SATUS_P2_2_P1_ON = 1; // request to check tx alignment
				//SYNC_STATUS_LANE_EN = 1;
			}
			else if( int_pll_or_chg ) { //already P2, but need to turn on/off pu_pll/dtx
				PHY_NS = ST_P2;
				mcu_reset(); 
			}	
	break;
	case ST_P2_TXDETRX:
	case ST_P1CLKREQ_WK:
	case ST_P1SNOOZE_WK:
	case ST_P1OFF_WK:
			if( reg_PIN_PU_PLL_RD_LANE == 1 ) {
				do_wake = 1; //p2->p1 or p0
				//SYNC_STATUS_LANE_EN = 1;
			}
		  break;	
	case ST_P1:	  
	case ST_P1_WK:
	case ST_P1_TXDETRX:
            if(reg_PIN_PU_PLL_RD_LANE == 0) { 
				reg_PIN_PLL_READY_TX_LANE    = 0;
				PHY_NS = ST_P2; //p1->p2, p1->p2->p1.clkreq
				//SYNC_STATUS_LANE_EN = 0; 
				mcu_reset(); 
            }
            else if(reg_PIN_PU_RX_RD_LANE == 1){
                do_wake = 1; //p1->p0
            }
			else { //reg_PIN_PU_RX_RD_LANE==0 //if( int_pu_tx != reg_PIN_PU_TX_RD_LANE || int_pu_rx != reg_PIN_PU_RX_RD_LANE ) { //do we support pu_tx=0, pu_rx=1??
				//reg_PIN_PLL_READY_TX_LANE    = 1; //reg_PIN_PU_TX_RD_LANE;
				//reg_PIN_PLL_READY_RX_LANE    = 0; //reg_PIN_PU_RX_RD_LANE;
                PHY_NS = ST_P1; 
				mcu_reset();
			}
	break;
	default:
			//deleted: p0s ->p2: should be p0s -> p1 -> p2
			if( reg_PIN_PU_PLL_RD_LANE==0 || reg_PIN_PU_TX_RD_LANE==0 ) { 
			reg_PIN_PLL_READY_TX_LANE    = 0;
			reg_PIN_PLL_READY_RX_LANE    = 0;
				PHY_NS = ST_P2; 
				mcu_reset();
			}
			else if( reg_PIN_PU_RX_RD_LANE==0 ) {
				reg_PIN_PLL_READY_RX_LANE = 0;
				
				if(cmx_BYPASS_PU_RX_P1==0) {
				//if(!cont_cal_on)
					PHY_NS = ST_P1;
					mcu_reset();
				}
				else {
					if(reg_PIN_TX_IDLE_HIZ_RD_LANE) {
						reg_ANA_TX_LESS_CUR_IDLE_LANE = 1;
						reg_ANA_TX_LESS_CUR_IDLE_LANE = 1;
						reg_ANA_TX_LESS_CUR_IDLE_LANE = 1;
						reg_ANA_TX_IDLE_HIZ_EN_LANE = 1;
					}					
					SKIP_RX_INIT = 1;
				}
			}
			else if(reg_PIN_PU_RX_RD_LANE && cmx_BYPASS_PU_RX_P1){
				if(!reg_PIN_TX_IDLE_HIZ_RD_LANE && reg_ANA_TX_IDLE_HIZ_EN_LANE) {
					reg_ANA_TX_IDLE_HIZ_EN_LANE = 0;
					reg_ANA_TX_IDLE_HIZ_EN_LANE = 0;
					reg_ANA_TX_IDLE_HIZ_EN_LANE = 0;
					reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
				}				
				reg_PIN_PLL_READY_RX_LANE = 1;
			}


	break;
	}
	}
	
	reg_INT1_INT_POWER_STATE_VALID_RISE_INT_EN_LANE = 0;
	reg_INT1_INT_PU_PLL_OR_CHG_INT_EN_LANE = 0;
	reg_INT1_INT_POWER_STATE_VALID_RISE_INT_EN_LANE = 1;
	reg_INT1_INT_PU_PLL_OR_CHG_INT_EN_LANE = 1;
	if(!reg_MASTER_PHY_EN) {
		reg_INT1_DPHY_ANA_LANE_DISABLE_INT_EN_LANE = 0;
		reg_INT1_DPHY_ANA_LANE_DISABLE_INT_EN_LANE = 1;
	}
		
   PHY_INT_LANE = 0xFF;
   //EX1 = 1; //reg_INT_ENABLE_ALL_LANE = 1;
   EA = 1;
	#endif //_PCIE_USB_BUILD
}

void int8_isr (void) __interrupt (17)  __using (2)
{ 

	#ifdef _PCIE_USB_BUILD	
	EA = 0; 
	//EX8 = 0; //reg_INT_ENABLE_ALL_LANE = 0;
    PHY_INT_LANE = 8;
	
	if(reg_INT_TXDETRX_EN_CHG_ISR_LANE ) {
		#ifdef _28G_X2
		//reg_INT_TXDETRX_EN_CHG_ISR_CLEAR_LANE = 1;
		//reg_INT_TXDETRX_EN_CHG_ISR_CLEAR_LANE = 0;
		PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B2 = 0x80;
		PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B2 = 0;
		#else
		reg_INT_TXDETRX_EN_CHG_ISR_LANE = 0;
		#endif
		if( reg_PIN_TXDETRX_EN_RD_LANE == 1) {
			switch(PHY_STATUS) {
			case ST_P2:
			case ST_P2_WK: PHY_NS = ST_P2_TXDETRX;	/*EX8 = 1;*/  mcu_reset(); break;
			case ST_P1:
			case ST_P1_WK: PHY_NS = ST_P1_TXDETRX;	/*EX8 = 1;*/  mcu_reset(); break;
			default: PHY_NS = ST_TXDETRX; break; //P0
			}
									
			//if(!cont_cal_on)
				/*EX8 = 1;*/ mcu_reset();
		}
	}
	
	if( reg_INT_BEACON_TX_EN_CHG_ISR_LANE ) {
		#ifdef _28G_X2
		//reg_INT_BEACON_TX_EN_CHG_ISR_CLEAR_LANE = 1;
		//reg_INT_BEACON_TX_EN_CHG_ISR_CLEAR_LANE = 0;
		PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B2 = 0x40;
		PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B2 = 0;
		#else
		reg_INT_BEACON_TX_EN_CHG_ISR_LANE = 0;
		#endif
		
		if( reg_PIN_PU_PLL_RD_LANE==0 ) { //P2
			SYNC_STATUS_LANE_EN = 0;
			if( reg_PIN_TX_ACJTAG_EN_RD_LANE==1 ) { 
				//PHY_NS = ST_P2_BEACON;
				//EX8 = 1; mcu_reset();
			}
			else {
				do_wake = 1;
			}
		}

		reg_ANA_BEACON_EN_LANE = reg_PIN_TX_ACJTAG_EN_RD_LANE;
	}	

	reg_INT8_PM_PCIE_FUNC_CHG_INT_EN_LANE = 0;
	reg_INT8_PM_PCIE_FUNC_CHG_INT_EN_LANE = 1;

    PHY_INT_LANE = 0xFF;
	//EX8 = 1; //reg_INT_ENABLE_ALL_LANE = 1;
	EA = 1;

	#endif //_PCIE_USB_BUILD
	
}


void int9_isr (void) __interrupt (18)  __using (2)// sata_sas pm ctrl
{
	#ifdef _SATA_SERDES_BUILD
	bool int_pll_or_chg = 0;
    EA = 0;	
	//EX9 = 0; //reg_INT_ENABLE_ALL_LANE = 0;
    PHY_INT_LANE = 9;
	
	if( reg_INT_PU_PLL_OR_CHG_ISR_LANE && mcuid== master_mcu) {
		int_pll_or_chg = 1;
		#ifdef _28G_X2
		//PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0x01;
		//PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0;
		#else
		reg_INT_PU_PLL_OR_CHG_ISR_LANE = 0;
		#endif	
	}	
	//PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0;
	//reg_INT_PU_PLL_OR_CHG_ISR_LANE = 0;	
	if((PM_CTRL_INTERRUPT_REG1_LANE.BT.B3&0xe1) != 0 ) 
	{
	#ifdef _28G_X2
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0xfb;
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0;
	#else
	PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0;
	#endif	

	if(pwrsq_on) {
		PHY_INT_LANE = 0xFF;
		//EX9 = 1; //reg_INT_ENABLE_ALL_LANE = 1;
		EA = 1;
		return;
	}

	switch(PHY_STATUS) {
		case ST_SLUMBER_CLK:
        case ST_SLUMBER_WK:
        case ST_SLUMBER:
            if(reg_PIN_PU_PLL_RD_LANE == 1){
				SYNC_STATUS_LANE_EN = 1;
                do_wake = 1;
            }
			else {
				if(int_pll_or_chg) { //already slumber, but need to turn on/off pu_pll/dtx
					PHY_NS = ST_SLUMBER;				
					mcu_reset();
				}
			}
            break;
       case ST_PSLUMBER_RX:
			if(reg_PIN_PU_PLL_RD_LANE == 0)	{ 
				PHY_NS = ST_SLUMBER; 
				SYNC_STATUS_LANE_EN = 0; 
				reg_PIN_PLL_READY_TX_LANE    = 0;
				reg_PIN_PLL_READY_RX_LANE    = 0;
				mcu_reset();
			}			
 			if(reg_PIN_PU_TX_RD_LANE == 0) {
				reg_PIN_PLL_READY_TX_LANE = 0;
				reg_PIN_PLL_READY_TX_LANE = 0;
				reg_PIN_PLL_READY_TX_LANE = 0;
				reg_ANA_PU_TX_LANE = 0;
			}				
			else {
				reg_ANA_PU_TX_LANE = 1;
				reg_PIN_PLL_READY_TX_LANE = 1;
			}
			if(reg_PIN_PU_RX_RD_LANE == 1){
				do_wake = 1;
			}
           break;
        default:
           if(reg_PIN_PU_PLL_RD_LANE == 0){
               PHY_NS = ST_SLUMBER;
				reg_PIN_PLL_READY_TX_LANE    = 0;
				reg_PIN_PLL_READY_RX_LANE    = 0;
				
				//if(!cont_cal_on)
					mcu_reset();
            }
            else {
				if(reg_PIN_PU_TX_RD_LANE == 0) {
					reg_PIN_PLL_READY_TX_LANE = 0;
					reg_PIN_PLL_READY_TX_LANE = 0; //65nsec needed from pll_ready_tx to ana_pu_tx
					reg_PIN_PLL_READY_TX_LANE = 0;
					reg_ANA_PU_TX_LANE = 0;
				}				
				else {
					reg_ANA_PU_TX_LANE = 1;
					reg_PIN_PLL_READY_TX_LANE    = 1;
				}
				if(reg_PIN_PU_RX_RD_LANE == 0 && cmx_FORCE_PARTIAL_PU_RX_ON==0){
					reg_PIN_PLL_READY_RX_LANE    = 0;
					PHY_NS = ST_PSLUMBER_RX;
					
					//if(!cont_cal_on)
						mcu_reset();
				}

				if(reg_PIN_PU_RX_RD_LANE == 0 && cmx_FORCE_PARTIAL_PU_RX_ON==1)
						SKIP_RX_INIT = 1;			
				
			}
    } 
	}
	
	reg_INT9_PM_CHG_INT_EN_LANE = 0;
	reg_INT9_PM_CHG_INT_EN_LANE = 1;
	
    PHY_INT_LANE = 0xFF;
	//EX9 = 1; //reg_INT_ENABLE_ALL_LANE = 1;
    EA = 1;
	#endif //_SATA_SERDES_BUILD
}


void int2_isr (void) __interrupt (9) __using (2) //gen
{
	bool spdchg_on;
	EA = 0;
	
    PHY_INT_LANE = 0x2;
	
	spdchg_on = 0;
	if(reg_INT_PHY_GEN_RX_CHG_ISR_LANE) {
		//reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 1;
		//reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 0;
		SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0x40;
		SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0;
		if(reg_ANA_RX_PU_DLY2_LANE) {
			reg_PIN_PLL_READY_RX_LANE = 0;
			//reg_RX_INIT_DONE_LANE = 0; //HR: RX_INIT_DONE should be high during speed change. Spec required!
			reg_INT_RX_INIT_RISE_ISR_CLEAR_LANE = 1; //rx_init_isr need to be cleared for serdes speed change
			reg_INT_RX_INIT_RISE_ISR_CLEAR_LANE = 0;
			spdchg_on = 1;
		}
	}
	if(reg_INT_PHY_GEN_TX_CHG_ISR_LANE) {
		//reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 1;
		//reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 0;
		SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0x80;
		SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0;
		if(reg_ANA_PU_TX_LANE) {
			reg_PIN_PLL_READY_TX_LANE = 0;
			spdchg_on = 1;
		}
	}
	
	if(spdchg_on) {
	
		if(phy_mode == SERDES) { PHY_NS = ST_CAL; PHY_STATUS_INT |= SPDCHG_ON;}
		else PHY_NS = ST_SPDCHG;

		//if(!cont_cal_on)
        //AD - try with mcu_reset removed
            mcu_reset();
	}
	
    PHY_INT_LANE = 0xFF;
	EA = 1;
}

void int11_isr (void) __interrupt (20)  __using (2)  //rx_train
{
    EA = 0; 
	//EX11 = 0 ;//reg_INT_ENABLE_ALL_LANE = 0;
    PHY_INT_LANE = 11;
	
	if( reg_PIN_RX_TRAIN_ENABLE_ISR_LANE ) {
		#ifdef _28G_X2
		//reg_PIN_RX_TRAIN_ENABLE_ISR_CLEAR_LANE = 1;
		//reg_PIN_RX_TRAIN_ENABLE_ISR_CLEAR_LANE = 0;
		TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B0 = 0x01;
		TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B0 = 0;
		#else
		reg_PIN_RX_TRAIN_ENABLE_ISR_LANE = 0;
		#endif
	
		reg_MCU_DEBUG0_LANE_7_0 = do_rxtrain;
	
		if(reg_PIN_PLL_READY_TX_LANE) {
			if(	!do_rxtrain ) {
				if(reg_PIN_RX_TRAIN_ENABLE_RD_LANE) { //train start
					reg_RX_TRAIN_ON_LANE = 1;
					do_rxtrain = 1;
					train_timer_int = 0;
					timeout = 0;
					timeout_stop2;
					PHY_NS = ST_TRXTRAIN;		
				}
				else {
					//reg_PIN_RX_TRAIN_ENABLE_RD_LANE=0 && reg_RX_TRAIN_COMPLETE_LANE : do nothing
				}	
			}
			else {
				//abort
				if(PHY_NS == ST_TXTRAIN) {
					do_rxtrain = 0;				
					reg_RX_TRAIN_COMPLETE_LANE = 0;		
					reg_RX_TRAIN_ON_LANE = 0; 			
				}	
									
				PHY_NS = ST_RXTRAIN;	
				/*EX11 = 1;*/
				mcu_reset();
			}
		}
	}

	if(reg_FRAME_UNLOCK_ISR_LANE) {		
		#ifdef _28G_X2
		reg_FRAME_UNLOCK_ISR_CLEAR_LANE = 1;
		reg_FRAME_UNLOCK_ISR_CLEAR_LANE = 0;	
		#else
		reg_FRAME_UNLOCK_ISR_LANE = 0;	
		#endif	
		if(link_train_mode==0 && reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE && reg_FRAME_LOCK_LANE==0) {	
			reg_TIMER_3_EN_LANE = 0;
			reg_TIMER_3_EN_LANE = 1; 
		}			
	}	
	
    PHY_INT_LANE = 0xFF;

	if(reg_INT11_FRAME_UNLOCK_INT_EN_LANE) {
		reg_INT11_FRAME_UNLOCK_INT_EN_LANE = 0;
		reg_INT11_FRAME_UNLOCK_INT_EN_LANE = 1;
	}	
	reg_INT11_PIN_RX_TRAIN_ENABLE_INT_EN_LANE = 0;
	reg_INT11_PIN_RX_TRAIN_ENABLE_INT_EN_LANE = 1;
	//EX11 = 1; //reg_INT_ENABLE_ALL_LANE = 1;
    EA = 1;
	
}

void int5_isr (void) __interrupt (12) __using (2) //txtrain
{
   EA = 0;
   PHY_INT_LANE = 5;
	
	#ifdef _28G_X2
	//reg_PIN_TX_TRAIN_ENABLE_ISR_CLEAR_LANE = 1;	
	//reg_PIN_TX_TRAIN_ENABLE_ISR_CLEAR_LANE = 0;	
	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B0 = 0x02;
	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B0 = 0;	
	#else
	reg_PIN_TX_TRAIN_ENABLE_ISR_LANE = 0;	
	#endif

	reg_MCU_DEBUG0_LANE_7_0 = do_train;	

   //if( reg_PIN_TX_TRAIN_COMPLETE_RD_LANE == 0 ) {	
	if(reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE && do_train==0) {
		#ifdef _SERDES_BUILD
		if(phy_mode==SERDES) { 
			#ifdef SUPPORT_ETHERNET_SEL_BIT_CTRL
			if(cmx_ETHERNET_TRAIN_32BIT_OUTPUT_DISABLE==0) {
				reg_TX_SEL_BITS_LANE = 1; reg_RX_SEL_BITS_LANE = 1;   //force to 32bit
			}
			#endif
						
			save_pt_tx_pattern_sel_lane_5_0_b0 =  reg_PT_TX_PATTERN_SEL_LANE_5_0_b0;
			save_pt_tx_pattern_sel_lane_5_0_b1 =  reg_PT_TX_PATTERN_SEL_LANE_5_0_b1;
			save_pt_en_lane 				   =  reg_PT_EN_LANE;

			if(reg_TX_TRAIN_PAT_SEL_LANE_1_0==1) {
				reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = 2; //6'h12;
				reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = 4;                                  
			}
			else if(reg_TX_TRAIN_PAT_SEL_LANE_1_0==2) {
				if(mcuid == MCU_LANE0) {
					reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = 3; //6'h13;
					reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = 4;                                  
				}
				else {
					reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = 0; //6'h14;
					reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = 5;                                  						
				}							
			}			
		}
		#endif //_SATA_SERDES_BUILD
		reg_TX_TRAIN_ON_LANE = 1;// for internal hardware tx-train design

		PHY_NS = ST_TRXTRAIN;	
		do_train = 1;
		if(phy_mode != PCIE)
		reg_ANA_TX_EM_PEAK_EN_LANE = 1; 
		train_comp = 0;	
 
		timeout = 0;
		timeout_stop2;
		reg_INT4_TIMER3_INT_EN_LANE = 0;
		train_timer_int = 0;
		reg_FRAME_UNLOCK_ISR_LANE = 0; 
		reg_FRAME_LOCK_ISR_LANE = 0;	
		#ifdef _28G_X2	
		reg_INT_TIMER3_ISR_CLEAR_LANE = 1;
		reg_INT_TIMER3_ISR_CLEAR_LANE = 0;
		#else
		reg_INT_TIMER3_ISR_LANE = 0;
		#endif	

		#ifdef SUPPORT_LINK_TRAIN_MODE	
		if(link_train_mode) {
			reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0; 
			//reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; 
			//reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
		}
		else
		#endif //SUPPORT_LINK_TRAIN_MODE			
		{
		#ifdef SUPPORT_AUTO_TRAIN_MODE
			tx_init_bit = 1;
			pre_local_ctrl = 0;
			if(phy_mode == SERDES) { //Ethernet
				reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0x0000; //tx_comp=0
				reg_LOCAL_CTRL_FIELD_LANE_15_0 = 0;        //hold
			}	
			else {	//sas
				reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0x4000; //tx_comp=0,tx_init=1 //=> hardware will load local_status_field_init
				reg_LOCAL_CTRL_FIELD_LANE_15_0 = 0;		   //hold	
			}
			//reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; 
			//reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
			reg_LOCAL_CTRL_FIELD_VALID_LANE = 1; 
			reg_LOCAL_CTRL_FIELD_VALID_LANE = 0;
			#ifdef _28G_X2			
			lnx_ERROR_RESPONSE_TTIU_DETECTED_LANE = 0;
			#endif
		#endif	//SUPPORT_AUTO_TRAIN_MODE
		}		
		reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; 
		reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
	}
	else if( reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE && do_train && reg_LOCAL_TX_TRAIN_COMPLETE_LANE==1) { 		
		PHY_NS = ST_TRXTRAIN;				
		train_comp = 0;   
		timeout = 0;
		timeout_stop2;
		reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 0;	
		reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 0;	
		#ifdef _PCIE_USB_BUILD	
		if( tx_pipe4_en==1 ) reg_TX_FFE_TRAIN_DONE_LANE = 0;					
		#endif
		//reg_TX_TRAIN_ON_LANE = 0; 			
	}
	else if	( reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE==0 && do_train && reg_LOCAL_TX_TRAIN_COMPLETE_LANE==0){ //abort
		if(PHY_NS == ST_RXTRAIN) {
			do_train = 0;
			reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 0;	
			reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 0;	
			#ifdef _PCIE_USB_BUILD	
			if( tx_pipe4_en==1 ) reg_TX_FFE_TRAIN_DONE_LANE = 0;					
			#endif
			reg_TX_TRAIN_ON_LANE = 0; 			
			#ifdef SUPPORT_ETHERNET_SEL_BIT_CTRL
			if(phy_mode==SERDES) { reg_TX_SEL_BITS_LANE = tx_sel_bit; reg_RX_SEL_BITS_LANE = rx_sel_bit; } 		
			#endif
		}	
	    //else 
		{
			PHY_NS = ST_TXTRAIN;
			mcu_reset();
		}	
	}
	else if	(reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE && do_train==1) {//reg_LOCAL_TX_TRAIN_COMPLETE_LANE==0 ////assume H->L->H  restart
			train_comp = 0;   
			timeout = 0;
			timeout_stop2;
			reg_INT4_TIMER3_INT_EN_LANE = 0;
			reg_TIMER_3_EN_LANE = 0;
			reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 0;	
			reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 0;	
			#ifdef _PCIE_USB_BUILD	
			if( tx_pipe4_en==1 ) reg_TX_FFE_TRAIN_DONE_LANE = 0;					
			#endif
			reg_TX_TRAIN_ON_LANE = 0; 			
			#ifdef SUPPORT_ETHERNET_SEL_BIT_CTRL
			if(phy_mode==SERDES) { reg_TX_SEL_BITS_LANE = tx_sel_bit; reg_RX_SEL_BITS_LANE = rx_sel_bit; } 		
			#endif
			tx_init_bit = 1;
			PHY_NS = ST_TXTRAIN;
			mcu_reset();			
	}

   PHY_INT_LANE = 0xff;
   EA = 1;
}

void int10_isr (void) __interrupt (19)  __using (2) //rx_init
{
    EA = 0;

	reg_RX_INIT_DONE_LANE = 0; 
    PHY_INT_LANE = 10;

	//if( reg_INT_RX_INIT_RISE_ISR_LANE ) //hardware doesn't have PIN_RX_INIT read register 
	{
		//#ifdef _28G_X2
		//reg_INT_RX_INIT_RISE_ISR_CLEAR_LANE = 1;
		//reg_INT_RX_INIT_RISE_ISR_CLEAR_LANE = 0;
		//#else
		//reg_INT_RX_INIT_RISE_ISR_LANE = 0;
		//#endif
		if(SKIP_RX_INIT) {
			SKIP_RX_INIT = 0;
			//do_rxinit = 0;
			reg_RX_INIT_DONE_LANE = 1; 		
		}
		else {	
			do_rxinit = 1;
			PHY_NS = ST_DTL;
		}	
	}

	
    PHY_INT_LANE = 0xFF;

    EA = 1;
}

#define HOLD 	0
#define INC		1
#define DEC 	2

//__code uint8_t valid_coe_tbl[] = {0x00, 0x01, 0x02, 0x04, 0x05, 0x08, 0x0a, 0x10, 0x14, 0x20, 0x28 };
__code uint8_t valid_coe_tbl[] = {0x00, 0x04, 0x05, 0x08, 0x0a, 0x14, 0x28, 0x02, 0x01, 0x20, 0x10};
 //                       //0=x, 1=ref1, 2=ref2, 3=n0_eq , 4=init, preset   
//__code uint8_t c1_default[] = {  0, 11,  6,  0,  11,  0}; 
//__code uint8_t c0_default[] = {  0, 0,   0,  0,  0,  0}; 
//__code uint8_t cn1_default[] = { 0, 7,   4,  0,  2,  0}; 
//
void int7_isr (void) __interrupt (8)  __using (1) // remote ctrl valid
{
	uint8_t n;
	BIT remote_ctrl_isr, remote_status_isr;
	
	EA = 0;

   PHY_INT_LANE = 7;	

	remote_ctrl_isr = 0;
	remote_status_isr = 0;
    rm_stat = READY;
		
  if(reg_REMOTE_CTRL_VALID_ISR_LANE) 
  {		
	remote_ctrl_isr = 1;
	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B1 = 0x02; //clear remote_ctrl_isr
  }
	
  if(reg_REMOTE_STATUS_VALID_ISR_LANE) {	
	remote_status_isr = 1;	
	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B1 = 0x01; //clear remote_status_isr
  }
  TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B1 = 0;	
  
    //read device register twice
	if(remote_ctrl_16^device_remote_control_bits || remote_status_16^device_remote_status_bits) {
		remote_ctrl_16 = device_remote_control_bits;
		remote_status_16 = device_remote_status_bits;				
		if(remote_ctrl_16^device_remote_control_bits || remote_status_16^device_remote_status_bits) {
			remote_ctrl_16 = device_remote_control_bits;
			remote_status_16 = device_remote_status_bits;						
		}	
	}
	
  if(remote_ctrl_isr || remote_status_isr) {
   if( reg_TX_TRAIN_ON_LANE || reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE) { 

	remote_ctrl_h = (uint8_t)(remote_ctrl_16>>8);
	remote_ctrl_l = (uint8_t)(remote_ctrl_16);
	remote_status_h = (uint8_t)(remote_status_16>>8);
	remote_status_l = (uint8_t)(remote_status_16);
	
	reg_MCU_DEBUG2_LANE_7_0 = do_train;
	reg_MCU_DEBUG3_LANE_7_0 = do_tx_apta;
	
	EA = 1; //for nested int
	
   error_code = 0;
   //dual_arg = 0;
   single_arg = 0;

	   if(remote_status_isr) 
		  remote_status_in = 1;

	  #ifdef SUPPORT_APTA_TX_TRAIN
		//if(reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE==0 && reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE == 1) {
		if(do_tx_apta || reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE) {
		  
		   if(remote_ctrl_isr) {	
			if( ((do_tx_apta==1) &&	
			((remote_ctrl_l&0x30)==0x30 || 
			 (remote_ctrl_l&0x0c)==0x0c || 
			 (remote_ctrl_l&0x03)==0x03 ||
			 (remote_ctrl_16 & 0xf3c0) )) || 
			 ((do_tx_apta==0) && 
			 (((remote_ctrl_l&0x3f)!=0) || 
			 ((remote_ctrl_h&0x0c)==0) || ((remote_ctrl_h&0x0c)==0x8)  ) ) ) {
				do_tx_apta = 0; 
				reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0x3f; // ADJUST_TERMINATE if remote_ctrl:err
				reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; 
				reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
				lnx_APTA_TERMINATE_REASON_LANE_7_0 = 0x01; //received wrong remote control request
				goto ext_int0;
			}
			else if(((remote_ctrl_l&0x3f)==0)) {
			  if((remote_ctrl_h&0x0c)==0x4)  { //[11:10] //START
				if(do_tx_apta!=0) {
					reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0x3f; 
					lnx_APTA_TERMINATE_REASON_LANE_7_0 = 0x02; //Received APTA_ADJUST(START) control after enter coeffient adjust stage
				}
				else {	
					do_tx_apta = 1; 
					reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0;
					lnx_APTA_TERMINATE_REASON_LANE_7_0 = 0; 
				}
				reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; 
				reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;	
				goto ext_int0;
			 }	
			 else  if( ((remote_ctrl_h&0x0c)==0x8)|| ((remote_ctrl_h&0x0c)==0xc) ) { //COMPLETE || TERMINATE
				do_tx_apta = 0; 
				reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0x15; // DUMMY_READY //0;
				reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; 
				reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
				lnx_APTA_TERMINATE_REASON_LANE_7_0 = 0;
				//reg_LINK_TRAIN_MODE_LANE = 0;
				goto ext_int0;
			 }
			}	
			
		  }			
		}
		#endif
		
		//if( (do_train && reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE==1) || (do_tx_apta && reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE==1)) {
			
		#ifdef _SATA_SERDES_BUILD
		if(do_train) {
			 
		  if(phy_mode<=SAS){
			#ifdef SUPPORT_SAS_TXTRAIN_IF_ERROR_HANDLE	
			if( (((remote_ctrl_h&0xe0)==0)&&((remote_ctrl_16 & 0x13c0) ||  //0001 0011 1100 0000
				(remote_status_16 & 0x1fc0))) || //0001 1111 1100 0000
				(((remote_ctrl_h&0xe0)==0xe0)&&((remote_ctrl_16 & 0x13c0) ||  //0001 0011 1100 0000
				(remote_status_16 & 0xdfc0))) //1101 1111 1100 0000 				
				) {
				error_code = RESERVED_TTIU_BIT_SET_TO_ONE;
				goto ext_int;
			}
			if( ((remote_ctrl_h&0xe0) != 0) && ((remote_ctrl_h&0xe0) != 0xe0)) { //pattern check				
				//lnx_TX_TRAIN_REMOTE_PATTERN_ERROR_INT_LANE = 1;
				error_code = RESERVED_PATTERN_TYPE;
				goto ext_int;
			}						
			else if ((remote_ctrl_h&0xe0) == 0xe0) { //error response code coming, do nothing
				lnx_ERROR_RESPONSE_TTIU_DETECTED_LANE = 1;	
					
				//comment out for running DFE	
				//reg_INT7_REMOTE_CTRL_VALID_INT_EN_LANE = 0;
				//reg_INT7_REMOTE_CTRL_VALID_INT_EN_LANE = 1;
				//reg_INT7_REMOTE_STATUS_VALID_INT_EN_LANE = 0;
				//reg_INT7_REMOTE_STATUS_VALID_INT_EN_LANE = 1;
		        //
				//while(reg_REMOTE_CTRL_VALID_ISR_LANE==0 && reg_REMOTE_STATUS_VALID_ISR_LANE==0 && reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE){
				//	reg_MCU_DEBUG0_LANE_7_0++;	//debug
				//}	
				//PHY_INT_LANE = 0xFF;
				//return; 
				goto ext_int0;
			}

			//normal pattern type
			ce = (uint8_t)((remote_ctrl_h>>2) & 0x03);			
			if((ce>0) && (remote_ctrl_l&0x3f) != 0) {
				error_code = RESERVED_COMB_COE_REQ; 
				goto ext_int;
			}

			ce = remote_ctrl_l & 0x3f;
			if((ce&0x03)==0x03) error_code = RESERVED_COE_1_REQ;
			if((ce&0x0c)==0x0c) {
				if(error_code==0) error_code = RESERVED_COE_2_REQ;
				else error_code = MULTI_RESERVED_COE_REQ;
			}	
			if((ce&0x30)==0x30) {
				if(error_code==0) error_code = RESERVED_COE_3_REQ;
				else error_code = MULTI_RESERVED_COE_REQ;
			}		

			if(error_code>0) goto ext_int;										
			#endif //SUPPORT_SAS_TXTRAIN_IF_ERROR_HANDLE				

		  }
		}	
		#endif //_SATA_SERDES_BUILD

		if( do_train || do_tx_apta) {
		
		if(remote_ctrl_isr==0) goto ext_int0; 
		#ifdef _SATA_SERDES_BUILD
		if(remote_status_h&0x80) goto ext_int0; //if tx_comp=1, do nothing 
		if((remote_status_h&0x40) && (phy_mode<=SAS)) goto ext_int0;	//if tx_init=1, do nothing		
		
		if(phy_mode == 4) { //ethernet
			ce = (uint8_t)((remote_ctrl_h>>4) & 0x03);
			if(ce&0x1) ce = 4; //init
			else if(ce&0x2) ce = 5;								
		}
		else {//SAS
			
			if(tx_init_bit && link_train_mode==0) { //if local tx_init=1, do nothing
				while(reg_FRAME_LOCK_LANE==0 && reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE); 
				tx_init_bit = 0;
			}

			ce = (uint8_t)((remote_ctrl_h>>2) & 0x03);	
		}	
		
		if(ce > 0) {	//ref1, ref2, no_eq
				//ce--;
								
				//tx_emph1_index = c1_default[ce]; 
				//tx_amp_index = c0_default[ce]; 
				//tx_emph0_index = cn1_default[ce];
				if(txffe_force_en==0) {
					//tx_emph1_index = tx_tb[ce].post; 
					//tx_amp_index = tx_tb[ce].peak; 
					//tx_emph0_index = tx_tb[ce].pre;
					LINK_TRAIN_MODE0.BT.B0 = local_tx_preset_tb[ce][0]; //tx_em_po
					LINK_TRAIN_MODE0.BT.B1 = local_tx_preset_tb[ce][1]; //tx_em_pre, tx_em_peak		
					
							
					if(tx_emph1_index >= tx_emph1_max)	  	 rm_stat = C1_is_min; 
					else if(tx_emph1_index <= tx_emph1_min)  rm_stat = C1_is_max; 	
					else                     rm_stat = C1_updated; 		
					if(tx_amp_index >= tx_amp_max)	  	 rm_stat |= C0_is_min; 					
					else if(tx_amp_index <= tx_amp_min)  rm_stat |= C0_is_max; 					
					else				     rm_stat |= C0_updated;                   
					if(tx_emph0_index >= tx_emph0_max)	  	 rm_stat |= Cn1_is_min; 					
					else if(tx_emph0_index <= tx_emph0_min)  rm_stat |= Cn1_is_max; 					
					else                     rm_stat |= Cn1_updated;
				}
				//c1_valid = 0; c0_valid = 0; cn1_valid = 0;
			//goto ext_int; 
		}
		else {
					
			ce = remote_ctrl_l & 0x3f;
			
			if( ce != 0 ) {
		
				//if( c1_valid==0 || c0_valid==0 || cn1_valid==0 ) goto ext_int;  //??				
								
				for(n=0; n<11; n++) {
					if(	ce == valid_coe_tbl[n] ) break;
				}			
				
				if(n>=11) {
					
					#ifdef SUPPORT_APTA_TX_TRAIN
					if(do_tx_apta) {
						//rm_stat = 0;
						//goto ext_int; 
						do_tx_apta = 0; 
						reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0x3f; // ADJUST_TERMINATE if remote_ctrl:err
						reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; 
						reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
						goto ext_int0;
					}
					else
					#endif
					{
							//lnx_REMOTE_MULTI_RSV_COE_REQ_ERR_INT_LANE = 1; //removed. No need.					
							error_code = RESERVED_COMB_COE_REQ;
							goto ext_int; 							
					}	
				}
				else   				
				{	
						if(txffe_force_en==0) {
							tx_amp_is_max = (tx_amp_index >= tx_amp_max);
							tx_amp_is_min = (tx_amp_index <= tx_amp_min);
							tx_emph0_is_max = (tx_emph0_index >= tx_emph0_max);
							tx_emph0_is_min = (tx_emph0_index <= tx_emph0_min);
							tx_emph1_is_max = (tx_emph1_index >= tx_emph1_max);
							tx_emph1_is_min = (tx_emph1_index <= tx_emph1_min);
	
							//------
							switch (ce) {
							case 0x0a: if(tx_emph0_is_max==0) tx_emph0_index++; single_arg = 1; break;    
							case 0x05: if(tx_emph0_is_min==0) tx_emph0_index--; single_arg = 1; break;
							case 0x28: if(tx_emph1_is_max==0) tx_emph1_index++; single_arg = 2; break;
							case 0x14: if(tx_emph1_is_min==0) tx_emph1_index--; single_arg = 2; break;
							case 0x08: if(tx_amp_is_max==0)   tx_amp_index++;   break;
							case 0x04: if(tx_amp_is_min==0)   tx_amp_index--;   break;
							case 0x02: if( tx_emph0_is_max==0) {
										if(tx_amp_is_min==0)tx_amp_index--; 
										tx_emph0_index++; 
									}
									//dual_arg = 1;
									break;
							case 0x01: if(tx_emph0_is_min==0) {
										if(tx_amp_is_max==0) tx_amp_index++; 
										tx_emph0_index--; 
									}
									//dual_arg = 1;
									break;
							case 0x20: if(tx_emph1_is_max==0) {
										tx_emph1_index++; 
										if(tx_amp_is_min==0) tx_amp_index--;   
									}
									//dual_arg = 1;
									break;
							case 0x10: if(tx_emph1_is_min==0) {
										tx_emph1_index--; 
										if(tx_amp_is_max==0) tx_amp_index++; 
									}	
									//dual_arg = 1;
									break;
							}
						}
						
						tx_amp_is_max = (tx_amp_index >= tx_amp_max);
						tx_amp_is_min = (tx_amp_index <= tx_amp_min);
						tx_emph0_is_max = (tx_emph0_index >= tx_emph0_max);
						tx_emph0_is_min = (tx_emph0_index <= tx_emph0_min);
						tx_emph1_is_max = (tx_emph1_index >= tx_emph1_max);
						tx_emph1_is_min = (tx_emph1_index <= tx_emph1_min);
						
						c1 = (remote_ctrl_l>>4)&03;
						c0 = (remote_ctrl_l>>2)&03;
						cn1 = remote_ctrl_l&03;
						
						#ifdef _SUPPORT_TRAIN_IF_RX_DEBUG
						reg_MCU_DEBUG6_LANE_7_0++;
						reg_MCU_DEBUG4_LANE_7_0 = remote_ctrl_h;
						reg_MCU_DEBUG5_LANE_7_0 = remote_ctrl_l;
						reg_MCU_DEBUG9_LANE_7_0 = c1;
						reg_MCU_DEBUGA_LANE_7_0 = c0;
						reg_MCU_DEBUGB_LANE_7_0 = cn1;
						reg_MCU_DEBUG7_LANE_7_0 = 0x11;
						#endif
	
						//------							
						if( c1 == INC ) {	
							if(tx_emph1_is_min) rm_stat |= C1_is_max; 
							else rm_stat |= C1_updated;
						}
						else if( c1 == DEC ) {							
							if (tx_emph1_is_max) rm_stat |= C1_is_min; 
							else rm_stat |= C1_updated;		
						}
						
						if( single_arg == 0 ) {
							if( c0 == INC ) {	
								if(tx_amp_is_min ) rm_stat |= C0_is_max;
								else rm_stat |= C0_updated;
							}
							else if( c0 == DEC ) {	
								if(tx_amp_is_max ) rm_stat |= C0_is_min; 							
								else rm_stat |= C0_updated;								
							}
						}	
						
						if( cn1 == INC ) {	
							if(tx_emph0_is_min) rm_stat |= Cn1_is_max;							
							else rm_stat |= Cn1_updated;
						}
						else if( cn1 == DEC ) {	
							if(tx_emph0_is_max) rm_stat |= Cn1_is_min;
							else rm_stat |= Cn1_updated;
						}

						if( single_arg == 1 ) rm_stat |= (rm_stat<<2);		
						if( single_arg == 2 ) rm_stat |= (rm_stat>>2);							
						
						//c1_valid = 0; c0_valid = 0; cn1_valid = 0;
												
					}
				}				
		#ifdef _SUPPORT_TRAIN_IF_RX_DEBUG
		reg_MCU_DEBUG7_LANE_7_0 = 0x99;
		#endif
		}
		//============================
ext_int:
		#ifdef SUPPORT_SAS_TXTRAIN_IF_ERROR_HANDLE //cannot support error code in 28G X4 Design
		if(error_code>0 && phy_mode<=SAS) { //send error code  
			if((reg_LOCAL_CTRL_FIELD_LANE_15_0_b1&0xe0) != 0xe0)
				pre_local_ctrl = reg_LOCAL_CTRL_FIELD_LANE_15_0;
			reg_LOCAL_CTRL_FIELD_LANE_15_0_b1 = (remote_ctrl_h&0x0c)|0xe0 ; //(rm_ctrl.v&0x1fff)|0xe000; 	 
			reg_LOCAL_CTRL_FIELD_LANE_15_0_b0 = remote_ctrl_l&0x3f;			
			
			reg_LOCAL_STATUS_FIELD_LANE_15_0 = error_code;
			#ifdef _28G_X2
			reg_LOCAL_ERROR_FIELD_VALID_LANE = 1; reg_LOCAL_ERROR_FIELD_VALID_LANE = 0;	
			#else
			reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
			#endif
			
			short_delay_1p4s();
			
			reg_LOCAL_CTRL_FIELD_LANE_15_0 = pre_local_ctrl;
			reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0;
			if( train_comp ) reg_LOCAL_STATUS_FIELD_LANE_15_0_b1 |= 0x80;
			else if( tx_init_bit && phy_mode<=SAS)	reg_LOCAL_STATUS_FIELD_LANE_15_0_b1 |= 0x40 ;									
			reg_LOCAL_ERROR_FIELD_VALID_LANE = 1; reg_LOCAL_ERROR_FIELD_VALID_LANE = 0;	
		}
		else 
		#endif 
		{		
			#ifdef SUPPORT_APTA_TX_TRAIN
			if(do_tx_apta && cmx_APTA_LIMITED_STATUS_DIS==0) {
				switch(ce) { //APTA doesn't have min/max_update combination.
				case 0x05: if(rm_stat!=0x05) rm_stat = 0x0f; break; 
				case 0x0a: if(rm_stat!=0x05) rm_stat = 0x0a; break;
				case 0x14: if(rm_stat!=0x14) rm_stat = 0x3c; break;
				case 0x28: if(rm_stat!=0x14) rm_stat = 0x28; break;
				}
			}
			#endif	
		
			reg_LOCAL_STATUS_FIELD_LANE_15_0 = (uint16_t)rm_stat;
			if( link_train_mode==0 && do_tx_apta==0) {
				if( train_comp ) reg_LOCAL_STATUS_FIELD_LANE_15_0_b1 |= 0x80;
				else if( tx_init_bit && phy_mode<=SAS)	reg_LOCAL_STATUS_FIELD_LANE_15_0_b1 |= 0x40 ;									
			}	
		 
			reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
			#ifdef _28G_X2			
			lnx_ERROR_RESPONSE_TTIU_DETECTED_LANE = 0;
			lnx_APTA_TERMINATE_REASON_LANE_7_0 = 0;
			#endif
		}

			#ifdef _SUPPORT_TRAIN_IF_RX_DEBUG
			reg_MCU_DEBUG_LANE_31_0_b0 = reg_LOCAL_STATUS_FIELD_LANE_15_0_b0;
			reg_MCU_DEBUG_LANE_31_0_b1 = reg_LOCAL_STATUS_FIELD_LANE_15_0_b1;		
			reg_MCU_DEBUG7_LANE_7_0 = 0x33;
			#endif					
 
	#endif //_SATA_SERDES_BUILD
	}
  }		
  
ext_int0:
		#ifdef _SUPPORT_TRAIN_IF_MEASURE
		reg_PIN_GPO_LANE_7_0 = reg_PIN_GPO_LANE_7_0 & 0xfb;
		#endif
		
		}		

	//#ifdef _28G_X2
	////reg_REMOTE_CTRL_VALID_ISR_CLEAR_LANE = 1;
	////reg_REMOTE_CTRL_VALID_ISR_CLEAR_LANE = 0;
	////reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 1;
	////reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 0;
	//TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B1 = 0x03;
	//TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B1 = 0;	
	//#else
	//TRX_TRAIN_IF_INTERRUPT_LANE.BT.B1 = 0;
	//#endif

	reg_INT7_REMOTE_CTRL_VALID_INT_EN_LANE = 0;
	reg_INT7_REMOTE_CTRL_VALID_INT_EN_LANE = 1;
	reg_INT7_REMOTE_STATUS_VALID_INT_EN_LANE = 0;
	reg_INT7_REMOTE_STATUS_VALID_INT_EN_LANE = 1;
	
	PHY_INT_LANE = 0xFF;
   EA = 1;
}

void int6_isr 	(void) __interrupt (13) __using (2) 
{
	EA = 0;

#ifdef SUPPORT_APTA_TX_TRAIN

	PHY_INT_LANE = 6;

	reg_PIN_PAPTA_TRAIN_ENABLE_ISR_CLEAR_LANE = 1;
	reg_PIN_PAPTA_TRAIN_ENABLE_ISR_CLEAR_LANE = 0;

	if(reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE==0) {
		if( reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE == 1) { //start trigger
			PHY_NS = ST_APTA_TXTRAIN;
			do_rx_apta = 1;
			reg_ANA_TX_EM_PEAK_EN_LANE = 1;
			reg_REMOTE_CTRL_FIELD_HIGH_LANE = 0;
			reg_REMOTE_CTRL_FIELD_HIGH_LANE = 1;
			reg_REMOTE_CTRL_FIELD_HIGH_LANE = 0;
		}

		apta_sim_state = 0;

	}

	PHY_INT_LANE = 0xFF;

#endif

	EA = 1;

}

void int12_isr (void) __interrupt (21)  __using (2) 
{
   EA = 0;
   //EX12 = 0; //reg_INT_ENABLE_ALL_LANE = 0;
	#ifdef _SATA_SERDES_BUILD
    PHY_INT_LANE = 12;

	if(reg_FRAME_LOCK_ISR_LANE) {
		#ifdef _28G_X2
		reg_FRAME_LOCK_ISR_CLEAR_LANE = 1;
		reg_FRAME_LOCK_ISR_CLEAR_LANE = 0;
		#else
		reg_FRAME_LOCK_ISR_LANE = 0;	
		#endif
		if( reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE && reg_FRAME_LOCK_LANE) {			
			reg_TIMER_3_EN_LANE = 0;
		}	
	}
	
	#ifdef SUPPORT_APTA_TX_TRAIN
	if(reg_PIN_PAPTA_TRAIN_DISABLE_ISR_LANE) {
		reg_PIN_PAPTA_TRAIN_DISABLE_ISR_CLEAR_LANE = 1;
		reg_PIN_PAPTA_TRAIN_DISABLE_ISR_CLEAR_LANE = 0;
		
		do_tx_apta = 0;
		do_rx_apta = 0;
		apta_sim_state = 0;
		
		if( reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE == 0 && reg_PIN_PLL_READY_RX_LANE) { //terminate
			if(PHY_STATUS == ST_APTA_TXTRAIN) {
				PHY_NS = ST_APTA_TXTRAIN;
				//EX12 = 1; 
				mcu_reset();		
			}
		}		
		
 		if(PHY_MCU_REMOTE_REQ_LANE) {	
			lnx_PHY_LOCAL_STATUS_LANE_7_0 = 0x2; //NOT_VAILD
			lnx_PHY_MCU_LOCAL_ACK_LANE = 1;							
		}		
		
	}
	#endif

    PHY_INT_LANE = 0xFF;
 #endif
	
   reg_INT12_PIN_PAPTA_TRAIN_DISABLE_INT_EN_LANE = 0;
   reg_INT12_PIN_PAPTA_TRAIN_DISABLE_INT_EN_LANE = 1;
   if(reg_INT12_FRAME_LOCK_INT_EN_LANE) {
		reg_INT12_FRAME_LOCK_INT_EN_LANE = 0;
		reg_INT12_FRAME_LOCK_INT_EN_LANE = 1;
   }   
   //EX12 = 1; //reg_INT_ENABLE_ALL_LANE = 1;
   EA = 1;
   
}

void int4_isr (void) __interrupt (11)  __using (2) 
{	
	EA = 0;
	//EX4 = 1; //reg_INT_ENABLE_ALL_LANE = 0;
	
	#ifdef _28G_X2
    PHY_INT_LANE = 4;
	
	//--- Framelock check timer
	if(reg_INT_TIMER3_ISR_LANE) {
		reg_INT_TIMER3_ISR_CLEAR_LANE = 1;
		reg_INT_TIMER3_ISR_CLEAR_LANE = 0;
		#if tag_TRAIN_TIME_OUT_EN
			if(lnx_TX_TRAIN_FRAME_DET_TIMER_ENABLE_LANE && do_train && train_timer_int && link_train_mode==0 && reg_FRAME_LOCK_LANE==0) {
				if(phy_mode<=SAS) {
					lnx_TX_TRAIN_FRAME_LOCK_DET_FAIL_INT_LANE = 1;
					reg_TX_TRAIN_ERROR_LANE_1_0_b0 = 0; //0=framelock err
					reg_TX_TRAIN_ERROR_LANE_1_0_b1 = 0; 
				}
				reg_TX_TRAIN_FAILED_LANE = 1;
				lnx_TX_TRAIN_FAIL_INT_LANE = 1;
			}	
		#endif
		
	}	
	
	//--- PHY_CMD_IF
	if(reg_PHY_MCU_REMOTE_REQ_ISR_LANE) {
		reg_PHY_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 1; 
		reg_PHY_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 0;
		
		if(PHY_MCU_REMOTE_REQ_LANE==0) 
			lnx_PHY_MCU_LOCAL_ACK_LANE = 0;
		//else {	
		//	if(lnx_PHY_REMOTE_CTRL_COMMAND_TYPE_LANE_7_0 <= 0x30) {
		//		//urgent command service
		//	}	
		//	
		//}
	}
	
	//--- MCU_CMD_IF
	if( reg_MCU_REMOTE_REQ_ISR ) {
		reg_MCU_REMOTE_REQ_ISR_CLEAR = 1;
		reg_MCU_REMOTE_REQ_ISR_CLEAR = 0;

		if(mcuid==master_mcu) {	
			if(reg_MCU_REMOTE_COMMAND_RD_7_0 == CHECK_CLEAR ) reg_MCU_LOCAL_STATUS_7_0 = 0;
			else if((reg_MCU_REMOTE_COMMAND_RD_7_0 == CHECK_MP_PU_PLL_ON && reg_ANA_PU_PLL) ||
			((reg_MCU_REMOTE_COMMAND_RD_7_0 == CHECK_MP_PLL_CLK_READY_ON) && reg_ANA_PLL_CLK_READY) ||
			((reg_MCU_REMOTE_COMMAND_RD_7_0 == CHECK_MP_PLL_LOCK_ON) && reg_ANA_PLL_LOCK_RD) ||
			((reg_MCU_REMOTE_COMMAND_RD_7_0 == CHECK_MP_PLL_CLK_READY_RING_ON) && reg_ANA_PLL_CLK_READY_RING) ||
			((reg_MCU_REMOTE_COMMAND_RD_7_0 == CHECK_MP_PLL_CAL_LOOP_DONE) && (PHY_STATUS_INT&LCPLL_CAL_LOOP_DONE))	||
			((reg_MCU_REMOTE_COMMAND_RD_7_0 == CHECK_MP_TXALIGN_SYNC_START) && tx_align_on) ||
			((reg_MCU_REMOTE_COMMAND_RD_7_0 == CHECK_MP_TXALIGN_SYNC_END) && tx_align_on==0) )
				reg_MCU_LOCAL_STATUS_7_0 = reg_MCU_REMOTE_COMMAND_RD_7_0;
			else 	reg_MCU_LOCAL_STATUS_7_0 = CHECK_WAIT;
					
			if(reg_MCU_REMOTE_COMMAND_RD_7_0) {
				reg_MCU_LOCAL_ACK = 1;
			}
			else {
				reg_MCU_LOCAL_ACK = 0;	
			}
		}
	}
	
    PHY_INT_LANE = 0xFF;

	if(reg_INT4_TIMER3_INT_EN_LANE) {
		reg_INT4_TIMER3_INT_EN_LANE = 0;
		reg_INT4_TIMER3_INT_EN_LANE = 1;
	}	
	reg_INT4_PHY_MCU_REMOTE_REQ_INT_EN_LANE = 0;
	reg_INT4_PHY_MCU_REMOTE_REQ_INT_EN_LANE = 1;
	if(mcuid== master_mcu) {
		reg_INT4_MCU_REMOTE_REQ_INT_EN_LANE = 0;
		reg_INT4_MCU_REMOTE_REQ_INT_EN_LANE = 1;
	}	
	
	#endif //_28G_X2	

    //EX4 = 1; //reg_INT_ENABLE_ALL_LANE = 1;
	EA = 1;
	
}

void uart0_isr(void) __interrupt(4) __using (2)
{
  EA = 0;
  if(RI) {
    RI = 0;
	#ifdef _LAB
    uart_rx_buf[uart_rx_in++] = SBUF;
    if( uart_rx_in >= UART_RX_BUF_MAX ) 
        uart_rx_in = 0;
	#endif	
  }

  if(TI) {
    TI = 0;
	#ifdef _LAB
    uart_rx_busy = 0;
	#endif
  }

  EA = 1;
}


