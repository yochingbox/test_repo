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

static inline void mcu_reset(void) {
	    PHY_INT_LANE = 0xFF;
		SRST = 1;
		SRST = 1;		
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
		if(phy_mode<=SAS) {
			if(reg_LOCAL_TX_TRAIN_COMPLETE_LANE==1 && reg_REMOTE_TX_TRAIN_COMPLETE_LANE==0) {
				reg_TX_TRAIN_ERROR_LANE_1_0_b0 = 1; //3=does not get remote phy's complete status
				reg_TX_TRAIN_ERROR_LANE_1_0_b1 = 1; 
			}
			else if(reg_LOCAL_TX_TRAIN_COMPLETE_LANE==0) {
				reg_TX_TRAIN_ERROR_LANE_1_0_b0 = 0; //2=MTTT timer expire for local phy
				reg_TX_TRAIN_ERROR_LANE_1_0_b1 = 1; 
			}
		}
		reg_TX_TRAIN_FAILED_LANE = 1;
		lnx_TX_TRAIN_FAIL_INT_LANE = 1;
	}
	else if(reg_RX_TRAIN_COMPLETE_LANE==0 && do_rxtrain && train_timer_int) {
		reg_RX_TRAIN_FAILED_LANE = 1;
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

	//#ifdef _28G_X2		
	//reg_INT_REFCLK_DIS_CHG_ISR_CLEAR_LANE = 1;
	//reg_INT_PU_IVREF_CHG_ISR_CLEAR_LANE = 1;
	//reg_INT_REFCLK_DIS_CHG_ISR_CLEAR_LANE = 0;
	//reg_INT_PU_IVREF_CHG_ISR_CLEAR_LANE = 0;
	//#else
    //PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0;	
	//#endif
	
	if( reg_INT_REFCLK_DIS_CHG_ISR_LANE ) {
		//PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0;	
		reg_INT_REFCLK_DIS_CHG_ISR_LANE = 0;
		//if(reg_PIN_REFCLK_DIS_RD==1 && reg_PIN_PU_PLL_RD_LANE==0 ) {
		//	if(	pcie_usb_mode==0 && PHY_STATUS != ST_SLUMBER) {
		//		PHY_NS = ST_SLUMBER; 
		//		SYNC_STATUS_LANE_EN = 0;
		//		mcu_reset();
		//	}
		//}
	}

	if( reg_INT_PU_IVREF_CHG_ISR_LANE ) {
		//PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0;	
		reg_INT_PU_IVREF_CHG_ISR_LANE = 0;
		if(reg_PIN_PU_IVREF_RD==0 && reg_PIN_PU_PLL_RD_LANE==0 && mcuid== master_mcu ) {
			PM_CMN_REG2.BT.B2 = 0x0e; //reg_ANA_PU_IVREF_DLY3 = 0;
			PM_CMN_REG2.BT.B2 = 0x0c; //reg_ANA_PU_IVREF_DLY2 = 0;
			PM_CMN_REG2.BT.B2 = 0x08; //reg_ANA_PU_IVREF_DLY1 = 0;
			PM_CMN_REG2.BT.B2 = 0;
			SYNC_STATUS_LANE_EN = 0;
		}
	}
	
    PHY_INT_LANE = 0xFF;
	
	EA = 1;
}

void int1_isr (void) __interrupt (2)  __using (2) //pcie
{
	bool int_pll_or_chg = 0;
	
	#ifdef _PCIE_USB
    EA = 0;	

    PHY_INT_LANE = 1;	
	
	if( reg_INT_PU_PLL_OR_CHG_ISR_LANE && mcuid== master_mcu) {
		int_pll_or_chg = 1;
	}	
	
	PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0; //reg_INT_POWER_STATE_VALID_RISE_ISR_LANE = 0;
	reg_INT_PU_PLL_OR_CHG_ISR_LANE = 0; 
	
	switch(PHY_STATUS) {
	case ST_P2:
	case ST_P2_WK:
			if( reg_PIN_PU_PLL_RD_LANE == 1 ) {
				do_wake = 1; //p2->p1 or p0
				SYNC_SATUS_P2_2_P1_ON = 1; // request to check tx alignment
				SYNC_STATUS_LANE_EN = 1;
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
				SYNC_STATUS_LANE_EN = 1;
			}
		  break;	
	case ST_P1:	  
	case ST_P1_WK:
	case ST_P1_TXDETRX:
            if(reg_PIN_PU_PLL_RD_LANE == 0) { 
				reg_PIN_PLL_READY_TX_LANE    = 0;
				PHY_NS = ST_P2; //p1->p2, p1->p2->p1.clkreq
				SYNC_STATUS_LANE_EN = 0; 
				mcu_reset(); 
            }
            else if(reg_PIN_PU_RX_RD_LANE == 1){
                do_wake = 1; //p1->p0
            }
			else { //reg_PIN_PU_RX_RD_LANE==0 //if( int_pu_tx != reg_PIN_PU_TX_RD_LANE || int_pu_rx != reg_PIN_PU_RX_RD_LANE ) { //do we support pu_tx=0, pu_rx=1??
				reg_PIN_PLL_READY_TX_LANE    = 1; //reg_PIN_PU_TX_RD_LANE;
				reg_PIN_PLL_READY_RX_LANE    = 0; //reg_PIN_PU_RX_RD_LANE;
                PHY_NS = ST_P1; 
				mcu_reset();
			}
	break;
	default:
			reg_PIN_PLL_READY_TX_LANE    = reg_PIN_PU_TX_RD_LANE;
			reg_PIN_PLL_READY_RX_LANE    = reg_PIN_PU_RX_RD_LANE;
			//deleted: p0s ->p2: should be p0s -> p1 -> p2
			//if( reg_PIN_PU_PLL_RD_LANE==0 || reg_PIN_PU_TX_RD_LANE==0 ) { 
			//	PHY_NS = ST_P2; 
			//	mcu_reset();
			//}
			//else 
			if( reg_PIN_PU_RX_RD_LANE==0 ) {
				reg_PIN_PLL_READY_RX_LANE = 0;
				PHY_NS = ST_P1;
				
				//if(!cont_cal_on)
					mcu_reset();
			}		

	break;
	}

   PHY_INT_LANE = 0xFF;
   EA = 1;
	#endif //_PCIE_USB
}

void int8_isr (void) __interrupt (17)  __using (2)
{ 

	EA = 0; 
    PHY_INT_LANE = 8;
	
	#ifdef SUPPORT_APTA_TX_TRAIN
	if(reg_PIN_PAPTA_TRAIN_DISABLE_ISR_LANE) {
		reg_PIN_PAPTA_TRAIN_DISABLE_ISR_CLEAR_LANE = 1;
		reg_PIN_PAPTA_TRAIN_DISABLE_ISR_CLEAR_LANE = 0;
		
		if( reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE == 0) { //terminate
			do_tx_apta = 0;
			do_rx_apta = 0;
			apta_sim_state = 0;
			PHY_NS = ST_APTA_TXTRAIN;
			mcu_reset();		
		}		
	}
	#endif
	
	#ifdef _PCIE_USB	
	if(reg_INT_TXDETRX_EN_CHG_ISR_LANE ) {
		#ifdef _28G_X2
		reg_INT_TXDETRX_EN_CHG_ISR_CLEAR_LANE = 1;
		reg_INT_TXDETRX_EN_CHG_ISR_CLEAR_LANE = 0;
		#else
		reg_INT_TXDETRX_EN_CHG_ISR_LANE = 0;
		#endif
		if( reg_PIN_TXDETRX_EN_RD_LANE == 1) {
			switch(PHY_STATUS) {
			case ST_P2:
			case ST_P2_WK: PHY_NS = ST_P2_TXDETRX;	mcu_reset(); break;
			case ST_P1:
			case ST_P1_WK: PHY_NS = ST_P1_TXDETRX;	mcu_reset(); break;
			default: PHY_NS = ST_TXDETRX; break; //P0
			}
			
			//if(!cont_cal_on)
				mcu_reset();
		}
	}
	
	if( reg_INT_BEACON_TX_EN_CHG_ISR_LANE ) {
		#ifdef _28G_X2
		reg_INT_BEACON_TX_EN_CHG_ISR_CLEAR_LANE = 1;
		reg_INT_BEACON_TX_EN_CHG_ISR_CLEAR_LANE = 0;
		#else
		reg_INT_BEACON_TX_EN_CHG_ISR_LANE = 0;
		#endif
		
		if( reg_PIN_PU_PLL_RD_LANE==0 ) { //P2
			SYNC_STATUS_LANE_EN = 0;
			if( reg_PIN_TX_ACJTAG_EN_RD_LANE==1 ) { 
				PHY_NS = ST_P2_BEACON;
				mcu_reset();
			}
			else {
				do_wake = 1;
			}
		}

		reg_ANA_BEACON_EN_LANE = reg_PIN_TX_ACJTAG_EN_RD_LANE;
	}	
	#endif //_PCIE_USB

    PHY_INT_LANE = 0xFF;
	EA = 1;
}


void int9_isr (void) __interrupt (18)  __using (2)// sata_sas pm ctrl
{
	#ifdef _SATA_SERDES
	bool int_pll_or_chg = 0;
    EA = 0;	
    PHY_INT_LANE = 9;
	
	if( reg_INT_PU_PLL_OR_CHG_ISR_LANE && mcuid== master_mcu) {
		int_pll_or_chg = 1;
	}	
	PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0;
	reg_INT_PU_PLL_OR_CHG_ISR_LANE = 0;	

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
				if(pwrsq_on==0) {
					if(reg_PIN_PU_TX_RD_LANE == 0) {
						reg_PIN_PLL_READY_TX_LANE    = 0;
						reg_PIN_PLL_READY_TX_LANE    = 0;
						reg_PIN_PLL_READY_TX_LANE    = 0;
						reg_ANA_PU_TX_LANE = 0;
					}				
					else {
						reg_ANA_PU_TX_LANE = 1;
						reg_PIN_PLL_READY_TX_LANE    = 1;
					}
				}
				if(reg_PIN_PU_RX_RD_LANE == 0){
					reg_PIN_PLL_READY_RX_LANE    = 0;
					PHY_NS = ST_PSLUMBER_RX;
					
					//if(!cont_cal_on)
						mcu_reset();
				}
			}
    } 

    PHY_INT_LANE = 0xFF;
    EA = 1;
	#endif //_SATA_SERDES
}


void int2_isr (void) __interrupt (9) __using (2) //gen
{
	EA = 0;
	
    PHY_INT_LANE = 0x2;
	
	SPD_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0;

	reg_PIN_PLL_READY_RX_LANE = 0;
	reg_PIN_PLL_READY_TX_LANE = 0;
	
	if(phy_mode == SERDES) { PHY_NS = ST_CAL; PHY_STATUS_INT |= SPDCHG_ON;}
    else PHY_NS = ST_SPDCHG;

	//if(!cont_cal_on)
		mcu_reset();

    PHY_INT_LANE = 0xFF;
	EA = 1;
}

void int11_isr (void) __interrupt (20)  __using (2)  //rx_train
{
    EA = 0; 
    PHY_INT_LANE = 11;
	
	#ifdef _28G_X2
	reg_PIN_RX_TRAIN_ENABLE_ISR_CLEAR_LANE = 1;
	reg_PIN_RX_TRAIN_ENABLE_ISR_CLEAR_LANE = 0;
	#else
	reg_PIN_RX_TRAIN_ENABLE_ISR_LANE = 0;
	#endif

	reg_MCU_DEBUG0_LANE_7_0 = do_rxtrain;
	
    if( reg_PIN_RX_TRAIN_COMPLETE_RD_LANE == 0 ) {	//asserted if(reg_RX_TRAIN_COMPLETE_LANE || reg_RX_TRAIN_FAILD_LANE), de-asserted after reg_RX_TRAIN_ON_LANE=0+2cycle  
		if(reg_PIN_RX_TRAIN_ENABLE_RD_LANE && do_rxtrain==0) {
			reg_RX_TRAIN_ON_LANE = 1;
			do_rxtrain = 1;
			train_timer_int = 0;
			timeout = 0;
			timeout_stop2;
			PHY_NS = ST_TRXTRAIN;
		}
		else if(((reg_PIN_RX_TRAIN_ENABLE_RD_LANE && do_rxtrain==1) || // H->L->H : abort and restart
		 (reg_PIN_RX_TRAIN_ENABLE_RD_LANE==0 && do_rxtrain==1)) && reg_RX_TRAIN_COMPLETE_LANE==0 ){ //abort
			if(PHY_NS == ST_TXTRAIN) {
				do_rxtrain = 0;				
				reg_RX_TRAIN_COMPLETE_LANE = 0;		
				reg_RX_TRAIN_ON_LANE = 0; 			
			}	
			 
			{		
				PHY_NS = ST_RXTRAIN;	
				mcu_reset();
			}	
		}
	}

    PHY_INT_LANE = 0xFF;

    EA = 1;
}

void int5_isr (void) __interrupt (12) __using (2) //txtrain
{
   EA = 0;
   PHY_INT_LANE = 5;
	
	#ifdef _28G_X2
	reg_PIN_TX_TRAIN_ENABLE_ISR_CLEAR_LANE = 1;	
	reg_PIN_TX_TRAIN_ENABLE_ISR_CLEAR_LANE = 0;	
	#else
	reg_PIN_TX_TRAIN_ENABLE_ISR_LANE = 0;	
	#endif

	reg_MCU_DEBUG0_LANE_7_0 = do_train;	

   //if( reg_PIN_TX_TRAIN_COMPLETE_RD_LANE == 0 ) {	
	if(reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE && do_train==0) {
		if(phy_mode==SERDES) { 
			#ifdef SUPPORT_ETHERNET_SEL_BIT_CTRL
			if(cmx_ETHERNET_TRAIN_32BIT_OUTPUT_DISABLE==0) {
				reg_TX_SEL_BITS_LANE = 1; reg_RX_SEL_BITS_LANE = 1;   //force to 32bit
			}
			#endif
			
			/*
			if(cmx_PT_OUT_TRAIN_COMP) {
				if(reg_TX_TRAIN_PAT_SEL_LANE_1_0==1) {
					reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = 2; //6'h12;
					reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = 4;                                  
				}
				else if(reg_TX_TRAIN_PAT_SEL_LANE_1_0==2) {//
					reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = 3; //6'h13;
					reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = 4;                                  
				}			
			}*/
		}
		reg_TX_TRAIN_ON_LANE = 1;// for internal hardware tx-train design

		PHY_NS = ST_TRXTRAIN;	
		do_train = 1;
		reg_ANA_TX_EM_PEAK_EN_LANE = 1; 
		train_comp = 0;	
 
		timeout = 0;
		timeout_stop2;
		train_timer_int = 0;
		#ifdef SUPPORT_LINK_TRAIN_MODE	
		if(link_train_mode) {
			reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0; 
			reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; 
			reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
		}
		else
		#endif //SUPPORT_LINK_TRAIN_MODE			
		{
		#ifdef SUPPORT_AUTO_TRAIN_MODE
			if(phy_mode == SERDES) { //Ethernet
				reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0x0000; //tx_comp=0
				reg_LOCAL_CTRL_FIELD_LANE_15_0 = 0;        //hold
			}	
			else {	//sas
				tx_init_bit = 1;
				reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0x4000; //tx_comp=0,tx_init=1
				reg_LOCAL_CTRL_FIELD_LANE_15_0 = 0;		   //hold	
			}
			reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; 
			reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
			reg_LOCAL_CTRL_FIELD_VALID_LANE = 1; 
			reg_LOCAL_CTRL_FIELD_VALID_LANE = 0;
		#endif	//SUPPORT_AUTO_TRAIN_MODE
		}		
	}
	else if( reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE && do_train && reg_LOCAL_TX_TRAIN_COMPLETE_LANE==1) { //assume H->L->H  restart		
		PHY_NS = ST_TRXTRAIN;				
		train_comp = 0;   
		timeout = 0;
		timeout_stop2;
		reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 0;	
		reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 0;	
		reg_TX_TRAIN_ON_LANE = 0; 			
	}
	else if	( reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE==0 && do_train && reg_LOCAL_TX_TRAIN_COMPLETE_LANE==0){ //abort
		if(PHY_NS == ST_RXTRAIN) {
			do_train = 0;
			reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 0;	
			reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 0;	
			reg_TX_TRAIN_ON_LANE = 0; 						
			#ifdef SUPPORT_ETHERNET_SEL_BIT_CTRL
			if(phy_mode==SERDES) { 
					reg_TX_SEL_BITS_LANE = tx_sel_bit; reg_RX_SEL_BITS_LANE = rx_sel_bit; 
			} 		
			#endif
		}	
	    //else 
		{
			PHY_NS = ST_TXTRAIN;
			mcu_reset();
		}	
	}
   //}

   PHY_INT_LANE = 0xff;
   EA = 1;
}

void int10_isr (void) __interrupt (19)  __using (2) //rx_init
{
    EA = 0;
	reg_RX_INIT_DONE_LANE = 0; 
    PHY_INT_LANE = 10;

	if( reg_INT_RX_INIT_RISE_ISR_LANE ) {
		#ifdef _28G_X2
		reg_INT_RX_INIT_RISE_ISR_CLEAR_LANE = 1;
		reg_INT_RX_INIT_RISE_ISR_CLEAR_LANE = 0;
		#else
		reg_INT_RX_INIT_RISE_ISR_LANE = 0;
		#endif
		do_rxinit = 1;
		PHY_NS = ST_DTL;
	}
	
    PHY_INT_LANE = 0xFF;

    EA = 1;
}

#define HOLD 	0
#define INC		1
#define DEC 	2

__code uint8_t valid_coe_tbl[] = {0x00, 0x04, 0x05, 0x08, 0x0a, 0x14, 0x28, 0x02, 0x01, 0x20, 0x10};
 //                       //0=x, 1=ref1, 2=ref2, 3=n0_eq , 4=init, preset   
__code uint8_t c1_default[] = {  0, 11,  6,  0,  11,  0}; 
__code uint8_t c0_default[] = {  0, 0,   0,  0,  0,  0}; 
__code uint8_t cn1_default[] = { 0, 7,   4,  0,  2,  0}; 

void int7_isr (void) __interrupt (8)  __using (2) // remote ctrl valid
{
	uint8_t n, rm_stat, error_code, c0, c1, cn1;
	uint8_t ce;
	uint8_t remote_ctrl_h, remote_ctrl_l;
	uint8_t remote_status_h; //, remote_status_l;
	uint16_t remote_ctrl_16, remote_status_16;
	uint8_t dual_arg, single_arg;
	
    error_code = 0;
	dual_arg = 0;
	single_arg = 0;
	
	EA = 0;

   PHY_INT_LANE = 7;	

    remote_ctrl_h = reg_REMOTE_CTRL_FIELD_RD_LANE_15_0_b1;
	remote_ctrl_l = reg_REMOTE_CTRL_FIELD_RD_LANE_15_0_b0;
	remote_ctrl_16 = reg_REMOTE_CTRL_FIELD_RD_LANE_15_0;
	remote_status_h = reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b1;
	//remote_status_l = reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b0;
	remote_status_16 = reg_REMOTE_STATUS_FIELD_RD_LANE_15_0;

   if( reg_REMOTE_CTRL_VALID_ISR_LANE == 1 ) 
   {
	#ifdef _28G_X2
	reg_REMOTE_CTRL_VALID_ISR_CLEAR_LANE = 1;
	reg_REMOTE_CTRL_VALID_ISR_CLEAR_LANE = 0;
	#else
	reg_REMOTE_CTRL_VALID_ISR_LANE = 0;
	#endif
		
		#ifdef SUPPORT_APTA_TX_TRAIN
		if(reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE==0 && reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE == 1) { 
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
				PHY_INT_LANE = 0xFF; 
				EA = 1;
				return;								
			}
			else if(((remote_ctrl_l&0x3f)==0)) {
			  if((remote_ctrl_h&0x0c)==0x4)  { //[11:10] 
				do_tx_apta = 1; 
				reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0;
				reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; 
				reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;	
				PHY_INT_LANE = 0xFF;
				EA = 1;
				return;	
			 }	
			 else  if( ((remote_ctrl_h&0x0c)==0x8)|| ((remote_ctrl_h&0x0c)==0xc) ) { //COMPLETE || TERMINATE
				do_tx_apta = 0; 
				reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0x15; // DUMMY_READY //0;
				reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; 
				reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
				//reg_LINK_TRAIN_MODE_LANE = 0;
				PHY_INT_LANE = 0xFF; 
				EA = 1;
				return;					
			 }
			}	
		}
		#endif
		
		if( (do_train && reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE==1) || (do_tx_apta && reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE==0 && reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE==1)) {
			
			#ifdef _SUPPORT_TRAIN_IF_MEASURE
			reg_PIN_GPO_LANE_7_0 = reg_PIN_GPO_LANE_7_0 | 0x04;
			#endif
			
			//if( (remote_status_h&0x40) && phy_mode!=SERDES) goto ext_int0;	//if tx_init=1, do nothing		
			
			c1 = (remote_ctrl_l>>4)&03;
			c0 = (remote_ctrl_l>>2)&03;
			cn1 = remote_ctrl_l&03;
			ce = 0;
            rm_stat = READY;
			
			#ifdef _SUPPORT_TRAIN_IF_RX_DEBUG
			reg_MCU_DEBUG6_LANE_7_0++;
			reg_MCU_DEBUG4_LANE_7_0 = remote_ctrl_h;
			reg_MCU_DEBUG5_LANE_7_0 = remote_ctrl_l;
			reg_MCU_DEBUG9_LANE_7_0 = c1;
			reg_MCU_DEBUGA_LANE_7_0 = c0;
			reg_MCU_DEBUGB_LANE_7_0 = cn1;
			reg_MCU_DEBUG7_LANE_7_0 = 0x11;
			#endif
	
			if(phy_mode == 4) { //ethernet
				ce = (uint8_t)((remote_ctrl_h>>4) & 0x03);
				if(ce&0x1) ce = 4;
				else if(ce&0x2) ce = 5;				
			}
			else {
				if( (remote_ctrl_h&0xe0) == 0) { //pattern check
					
				}
				else if( (remote_ctrl_h&0xe0) == 0xe0) { //error code coming, do nothing
					goto ext_int0; 
				}
				else {
					lnx_TX_TRAIN_REMOTE_PATTERN_ERROR_INT_LANE = 1;
					error_code = RESERVED_PATTERN_TYPE;
					goto ext_int;
				}						

				#ifdef SUPPORT_SAS_TXTRAIN_IF_ERROR_HANDLE	
				if( (((remote_ctrl_h&0xe0)==0)&&((remote_ctrl_16 & 0x13c0) ||  //0001 0011 1100 0000
					(remote_status_16 & 0x1fc0))) || //0001 1111 1100 0000
					(((remote_ctrl_h&0xe0)==0xe0)&&((remote_ctrl_16 & 0x13c0) ||  //0001 0011 1100 0000
					(remote_status_16 & 0xdfc0))) //1101 1111 1100 0000 				
					) {
					error_code = RESERVED_TTIU_BIT_SET_TO_ONE;
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
				#endif
				
				ce = (uint8_t)((remote_ctrl_h>>2) & 0x03);
			}								
							
			if(ce > 0) {	//ref1, ref2, no_eq
			
				if(remote_status_h&0x80) goto ext_int0; //if tx_comp=1, do nothing 
				if( (remote_status_h&0x40) && phy_mode!=SERDES) goto ext_int0;	//if tx_init=1, do nothing		
				
				if(txffe_force_en==0) {
					tx_emph1_index = c1_default[ce]; 
					tx_amp_index = c0_default[ce]; 
					tx_emph0_index = cn1_default[ce];
							
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
				//request_local_status(rm_stat);  //update
				//c1_valid = 0; c0_valid = 0; cn1_valid = 0;
			//goto ext_int; 
		}
		else {
					
			//if(remote_status_h&0x80) goto ext_int0; //if tx_comp=1, do nothing 

			ce = remote_ctrl_l & 0x3f;
			
			if( ce != 0 ) {
		
				//if( c1_valid==0 || c0_valid==0 || cn1_valid==0 ) goto ext_int;  //??				
								
				for(n=0; n<11; n++) {
					if(	ce == valid_coe_tbl[n] ) break;
				}			
				
				if(n>=11) {
					
					#ifdef SUPPORT_APTA_TX_TRAIN
					if(do_tx_apta==1) {
						//rm_stat = 0;
						//goto ext_int; 
						do_tx_apta = 0; 
						reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0x3f; // ADJUST_TERMINATE if remote_ctrl:err
						reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; 
						reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
						PHY_INT_LANE = 0xFF;
						EA = 1;
						return;							
					}
					else
					#endif
					{
							lnx_REMOTE_MULTI_RSV_COE_REQ_ERR_INT_LANE = 1;					
							error_code = MULTI_RESERVED_COE_REQ;
							goto ext_int; 							
					}	
				}
				else   				
				{		
					
						if(remote_status_h&0x80) goto ext_int0; //if tx_comp=1, do nothing ==> No need to check remote TRAIN_COMP in firmware
						if( (remote_status_h&0x40) && phy_mode!=SERDES) goto ext_int0;	//if tx_init=1, do nothing		

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
						//request_local_status(rm_stat);								
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
				save_local_ctrl = reg_LOCAL_CTRL_FIELD_LANE_15_0;
			reg_LOCAL_CTRL_FIELD_LANE_15_0_b1 = (remote_ctrl_h&0x0c)|0xe0 ; //(rm_ctrl.v&0x1fff)|0xe000; 	 
			reg_LOCAL_CTRL_FIELD_LANE_15_0_b0 = remote_ctrl_l&0x3f;			
			
			reg_LOCAL_STATUS_FIELD_LANE_15_0 = error_code;
			#ifdef _28G_X2
			reg_LOCAL_ERROR_FIELD_VALID_LANE = 1; reg_LOCAL_ERROR_FIELD_VALID_LANE = 0;			
			#else
			reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
			#endif
		}
		else 
		#endif 
		{
			reg_LOCAL_STATUS_FIELD_LANE_15_0 = (uint16_t)rm_stat;
			if( link_train_mode==0 ) {
				if( train_comp ) reg_LOCAL_STATUS_FIELD_LANE_15_0_b1 |= 0x80;
				else if( tx_init_bit && phy_mode<=SAS)	reg_LOCAL_STATUS_FIELD_LANE_15_0_b1 |= 0x40 ;									
			}	
		 
			if((reg_LOCAL_CTRL_FIELD_LANE_15_0_b1&0xe0) == 0xe0) {
				reg_LOCAL_CTRL_FIELD_LANE_15_0 = save_local_ctrl;
				reg_LOCAL_CTRL_FIELD_VALID_LANE = 1; reg_LOCAL_CTRL_FIELD_VALID_LANE = 0;
			}	
			reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
		}

			#ifdef _SUPPORT_TRAIN_IF_RX_DEBUG
			reg_MCU_DEBUG_LANE_31_0_b0 = reg_LOCAL_STATUS_FIELD_LANE_15_0_b0;
			reg_MCU_DEBUG_LANE_31_0_b1 = reg_LOCAL_STATUS_FIELD_LANE_15_0_b1;		
			reg_MCU_DEBUG7_LANE_7_0 = 0x33;
			#endif
					
ext_int0:
		#ifdef _SUPPORT_TRAIN_IF_MEASURE
		reg_PIN_GPO_LANE_7_0 = reg_PIN_GPO_LANE_7_0 & 0xfb;
		#endif
		
		}		

	//#ifdef _28G_X2
	//reg_REMOTE_CTRL_VALID_ISR_CLEAR_LANE = 1;
	//reg_REMOTE_CTRL_VALID_ISR_CLEAR_LANE = 0;
	//#else
	//reg_REMOTE_CTRL_VALID_ISR_LANE = 0;
	//#endif
 
	}
	
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
	#ifdef SUPPORT_APTA_TX_TRAIN
    PHY_INT_LANE = 12;
/*	//reg_MCU_DEBUG_CMN_4_7_0++;
	if(reg_PIN_LOCAL_CTRL_FIELD_READY_ISR_LANE)  {
		reg_PIN_LOCAL_CTRL_FIELD_READY_ISR_CLEAR_LANE = 1;
		reg_PIN_LOCAL_CTRL_FIELD_READY_ISR_CLEAR_LANE = 0;
		if(reg_PIN_LOCAL_CTRL_FIELD_READY_RD_LANE==1 && reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE==0 && reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE == 1) {
			do_rx_apta = 1;
			PHY_NS = ST_APTA_TXTRAIN;
		}
		else if(reg_PIN_LOCAL_CTRL_FIELD_READY_RD_LANE==0){
			
		}
	}
*/	
    PHY_INT_LANE = 0xFF;
 #endif
   EA = 1;
}

void int4_isr (void) __interrupt (11)  __using (2) 
{	
	EA = 0;
	
/*	#ifdef _28G_X2
    PHY_INT_LANE = 4;
	
	//--- PHY_CMD_IF
	if(reg_PHY_MCU_REMOTE_REQ_ISR_LANE) {
		reg_PHY_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 1; 
		reg_PHY_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 0;
		
		if(reg_PHY_MCU_REMOTE_REQ_LANE==0) 
			lnx_PHY_MCU_LOCAL_ACK_LANE = 0;
		else {	
			if(lnx_PHY_REMOTE_CTRL_COMMAND_TYPE_LANE_7_0 <= 0x30) {
				//urgent command service
			}	
			
		}
	}
	
	//--- MCU_CMD_IF
	if( reg_MCU_REMOTE_REQ_ISR ) {
		reg_MCU_REMOTE_REQ_ISR_CLEAR = 1;
		reg_MCU_REMOTE_REQ_ISR_CLEAR = 0;
		
		if(reg_MCU_REMOTE_COMMAND_RD_7_0 == CHECK_CLEAR ) reg_MCU_LOCAL_STATUS_7_0 = 0;
		else if((reg_MCU_REMOTE_COMMAND_RD_7_0 == CHECK_MP_PU_PLL_ON && reg_ANA_PU_PLL) ||
		((reg_MCU_REMOTE_COMMAND_RD_7_0 == CHECK_MP_PLL_CLK_READY_ON) && reg_ANA_PLL_CLK_READY) ||
		((reg_MCU_REMOTE_COMMAND_RD_7_0 == CHECK_MP_PLL_LOCK_ON) && reg_ANA_PLL_LOCK_RD) ||
		((reg_MCU_REMOTE_COMMAND_RD_7_0 == CHECK_MP_PLL_CLK_READY_RING_ON) && reg_ANA_PLL_CLK_READY_RING) ||
		((reg_MCU_REMOTE_COMMAND_RD_7_0 == CHECK_MP_PLL_CAL_LOOP_DONE) && (PHY_STATUS_INT&LCPLL_CAL_LOOP_DONE))	)
			reg_MCU_LOCAL_STATUS_7_0 = reg_MCU_REMOTE_COMMAND_RD_7_0;
		else 	reg_MCU_LOCAL_STATUS_7_0 = CHECK_WAIT;
				
		if(reg_MCU_REMOTE_COMMAND_RD_7_0) {
			reg_MCU_LOCAL_ACK = 1;
		}
		else {
			reg_MCU_LOCAL_ACK = 0;	
		}
	}
    PHY_INT_LANE = 0xFF;
	#endif //_28G_X2
*/	
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

	
