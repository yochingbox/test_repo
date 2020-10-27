/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file interrupt.c
* \purpose Interrupt
* \History
*	10/13/2015 Heejeong Ryu		Initial 
*/
#include "common.h"

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
	if(lnx_TX_TRAIN_TIMER_ENABLE_LANE && do_train) {
		reg_TX_TRAIN_FAILED_LANE = 1;
		lnx_TX_TRAIN_FAIL_INT_LANE = 1;
	}
	else if(lnx_RX_TRAIN_TIMER_ENABLE_LANE && do_rxtrain) {
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

    PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0;

	if( reg_INT_REFCLK_DIS_CHG_ISR_LANE ) {
		//reg_INT_REFCLK_DIS_CHG_ISR_LANE = 0;
		if(reg_PIN_REFCLK_DIS_RD==1 && reg_PIN_PU_PLL_RD_LANE==0) {
		    if(PHY_STATUS != ST_SLUMBER) {
			PHY_NS = ST_SLUMBER; 
			SYNC_STATUS_LANE_EN = 0;
			
			if(!cont_cal_on)
				mcu_reset();
		}}
	}

	if( reg_INT_PU_IVREF_CHG_ISR_LANE ) {
		//reg_INT_PU_IVREF_CHG_ISR_LANE = 0;
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
	#ifdef _PCIE_USB
    EA = 0;	

    PHY_INT_LANE = 1;
	
	if( reg_INT_PU_PLL_OR_CHG_ISR_LANE && mcuid== master_mcu) 
		SYNC_SATUS_PLL_OR_CHG = 1;
	
	PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0; //reg_INT_POWER_STATE_VALID_RISE_ISR_LANE = 0;
	
	switch(PHY_STATUS) {
	case ST_P2:
	case ST_P2_WK:
			if( reg_PIN_PU_PLL_RD_LANE == 1 ) {
				do_wake = 1; //p2->p1 or p0
				SYNC_SATUS_P2_2_P1_ON = 1; // request to check tx alignment
				SYNC_STATUS_LANE_EN = 1;
			}
			else if( SYNC_SATUS_PLL_OR_CHG ) { //already P2, but need to turn off pu_pll, dtx
				PHY_NS = ST_P2;
				mcu_reset(); 
			}	
	break;
	case ST_P2_TXDETRX:
	case ST_P1CLKREQ_WK:
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
				
				if(!cont_cal_on)
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
	#ifdef _PCIE_USB
	EA = 0; 
    PHY_INT_LANE = 8;
	
	reg_PIN_RX_TRAIN_ENABLE_ISR_LANE = 0;
	reg_PIN_TX_TRAIN_ENABLE_ISR_LANE = 0;	

	if(reg_INT_TXDETRX_EN_CHG_ISR_LANE ) {
		reg_INT_TXDETRX_EN_CHG_ISR_LANE = 0;
		if( reg_PIN_TXDETRX_EN_RD_LANE == 1) {
			switch(PHY_STATUS) {
			case ST_P2:
			case ST_P2_WK: PHY_NS = ST_P2_TXDETRX;	mcu_reset(); break;
			case ST_P1:
			case ST_P1_WK: PHY_NS = ST_P1_TXDETRX;	mcu_reset(); break;
			default: PHY_NS = ST_TXDETRX; break; //P0
			}
			
			if(!cont_cal_on)
				mcu_reset();
		}
	}
	
	if( reg_INT_BEACON_TX_EN_CHG_ISR_LANE ) {
		reg_INT_BEACON_TX_EN_CHG_ISR_LANE = 0;
		
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

    PHY_INT_LANE = 0xFF;
	EA = 1;
	#endif //_PCIE_USB
}


void int9_isr (void) __interrupt (18)  __using (2)// sata_sas pm ctrl
{
	#ifdef _SATA_SERDES
    EA = 0;	
    PHY_INT_LANE = 9;
	
	PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0;
	reg_PIN_RX_TRAIN_ENABLE_ISR_LANE = 0;
	reg_PIN_TX_TRAIN_ENABLE_ISR_LANE = 0;	
	
	switch(PHY_STATUS) {
		case ST_SLUMBER_CLK:
        case ST_SLUMBER_WK:
        case ST_SLUMBER:
            if(reg_PIN_PU_PLL_RD_LANE == 1){
				SYNC_STATUS_LANE_EN = 1;
                do_wake = 1;
            }
            break;
       case ST_PSLUMBER_TX:
       case ST_PSLUMBER_RX:
			if(reg_PIN_PU_TX_RD_LANE==1 && reg_PIN_PU_RX_RD_LANE == 1){
                do_wake = 1;
            }
			else {
				reg_PIN_PLL_READY_TX_LANE    = reg_PIN_PU_TX_RD_LANE;
				reg_PIN_PLL_READY_RX_LANE    = reg_PIN_PU_RX_RD_LANE;
			   
			   if(reg_PIN_PU_PLL_RD_LANE == 0)	{ PHY_NS = ST_SLUMBER; SYNC_STATUS_LANE_EN = 0; }             
               else if(reg_PIN_PU_TX_RD_LANE == 0)  PHY_NS = ST_PSLUMBER_TX;
			   else if(reg_PIN_PU_RX_RD_LANE == 0) PHY_NS = ST_PSLUMBER_RX;
			   mcu_reset();
			}
            break;
        default:
           if(reg_PIN_PU_PLL_RD_LANE == 0){
               PHY_NS = ST_SLUMBER;
				reg_PIN_PLL_READY_TX_LANE    = 0;
				reg_PIN_PLL_READY_RX_LANE    = 0;
				
				if(!cont_cal_on)
					mcu_reset();
            }
            else {
				if(reg_PIN_PU_TX_RD_LANE == 0) {
					reg_PIN_PLL_READY_TX_LANE    = 0;
					reg_PIN_PLL_READY_RX_LANE    = reg_PIN_PU_RX_RD_LANE;
					PHY_NS = ST_PSLUMBER_TX;
					
					if(!cont_cal_on)
						mcu_reset();
				}
				else if(reg_PIN_PU_RX_RD_LANE == 0){
					reg_PIN_PLL_READY_TX_LANE    = 1;
					reg_PIN_PLL_READY_RX_LANE    = 0;
					PHY_NS = ST_PSLUMBER_RX;
					
					if(!cont_cal_on)
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
	SPD_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0x0;
	reg_PIN_RX_TRAIN_ENABLE_ISR_LANE = 0;
	reg_PIN_TX_TRAIN_ENABLE_ISR_LANE = 0;	

	reg_PIN_PLL_READY_RX_LANE = 0;
	reg_PIN_PLL_READY_TX_LANE = 0;
	
	if(phy_mode == SERDES) { PHY_NS = ST_CAL; PHY_STATUS_INT = SPDCHG_ON;}
    else PHY_NS = ST_SPDCHG;

	if(!cont_cal_on)
		mcu_reset();
	
    PHY_INT_LANE = 0xFF;
	EA = 1;
}

void int11_isr (void) __interrupt (20)  __using (2)  //rx_train
{
    EA = 0; 
    PHY_INT_LANE = 11;
	reg_PIN_RX_TRAIN_ENABLE_ISR_LANE = 0;
	
    if( reg_PIN_RX_TRAIN_COMPLETE_RD_LANE == 0 ) {	
		if(reg_PIN_RX_TRAIN_ENABLE_RD_LANE ) {
			reg_RX_TRAIN_ON_LANE = 1;
			do_rxtrain = 1;
			timeout = 0;
			timeout_stop2;
			PHY_NS = ST_TRXTRAIN;
		}
		else if(reg_PIN_RX_TRAIN_ENABLE_RD_LANE==0 && do_rxtrain==1){ //abort
			PHY_NS = ST_RXTRAIN;	
			mcu_reset();
		}
	}

    PHY_INT_LANE = 0xFF;

    EA = 1;
}

void int5_isr (void) __interrupt (12) __using (2) //txtrain
{
   EA = 0;
   PHY_INT_LANE = 5;
	
	reg_PIN_TX_TRAIN_ENABLE_ISR_LANE = 0;	

   if( reg_PIN_TX_TRAIN_COMPLETE_RD_LANE == 0 ) {	
	if(reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE) {
		reg_TX_TRAIN_ON_LANE = 1;// for internal hardware tx-train design

		PHY_NS = ST_TRXTRAIN;	
		do_train = 1;
		reg_ANA_TX_EM_PEAK_EN_LANE = 1; 
		train_comp = 0;  	
 
		timeout = 0;
		timeout_stop2;
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
			tx_init_bit = 1;
			if(phy_mode == SERDES) { //Ethernet
				reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0x0000; //tx_comp=0
				reg_LOCAL_CTRL_FIELD_LANE_15_0 = 0;        //hold
			}	
			else {	//sas
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
	else if( reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE==0 && do_train ) { //abort
	    PHY_NS = ST_TXTRAIN;
		mcu_reset();
	}
   }

   PHY_INT_LANE = 0xff;
   EA = 1;
}

void int10_isr (void) __interrupt (19)  __using (2) //rx_init
{
    EA = 0;
    PHY_INT_LANE = 10;

	if( reg_INT_RX_INIT_RISE_ISR_LANE ) {
		reg_INT_RX_INIT_RISE_ISR_LANE = 0;
		do_rxinit = 1;
		PHY_NS = ST_DTL;
	}
	
    PHY_INT_LANE = 0xFF;

    EA = 1;
}

void int6_isr (void) __interrupt (13)  __using (2) // pin apta train
{
	EA = 0;
	#ifdef _28G_R2P0
   PHY_INT_LANE = 6;
   
   reg_PIN_PAPTA_TRAIN_ENABLE_ISR_LANE = 0;
   
   if(reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE==0) { 
	if( reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE == 0 ) { //terminate

	}
	else if( reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE == 1) { //start trigger
		PHY_NS = ST_APTA_TXTRAIN;
	}
   }
   
   PHY_INT_LANE = 0xFF;
	#endif
   EA = 1;

}

#define HOLD 	0
#define INC		1
#define DEC 	2

void int7_isr (void) __interrupt (8)  __using (2) // remote ctrl valid
{
 #ifndef SUPPORT_TX_TRAIN_IF_REMOTE_CONTROL_MAIN
	uint8_t n, rm_stat, error_code, c0, c1, cn1;
	uint8_t ce;
	uint8_t valid_coe_tbl[] = {0x00, 0x01, 0x02, 0x04, 0x05, 0x08, 0x0a, 0x10, 0x14, 0x20, 0x28 };
    error_code = 0;
#endif
	
	EA = 0;

   PHY_INT_LANE = 7;
   if( reg_REMOTE_CTRL_VALID_ISR_LANE == 1 ) {
		reg_REMOTE_CTRL_VALID_ISR_LANE = 0;
		if(reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE==0 && reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE == 1) { 
			if( (reg_REMOTE_CTRL_FIELD_RD_LANE_15_0_b1&0x0c)==0x4 && do_tx_apta==0) {
				do_tx_apta = 1; 
				//reg_LINK_TRAIN_MODE_LANE = 1; //expect SOC must set first!
				reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0;
				reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; 
				reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;	
				PHY_INT_LANE = 0xFF;
				EA = 1;
				return;	
			}	
			else  if( ((reg_REMOTE_CTRL_FIELD_RD_LANE_15_0_b1&0x0c)==0x8 || ((reg_REMOTE_CTRL_FIELD_RD_LANE_15_0_b1&0x0c)==0xc)) && do_tx_apta==1) {
				do_tx_apta = 0; 
				reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0;
				reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; 
				reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
				//reg_LINK_TRAIN_MODE_LANE = 0;
				PHY_INT_LANE = 0xFF; 
				EA = 1;
				return;					
			}
		}

		#ifdef SUPPORT_TX_TRAIN_IF_REMOTE_CONTROL_MAIN
		TX_REMOTE_CTRL_REQ = 1;			
		
		#else 
			
		if( (do_train && reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE==1) || (do_tx_apta && reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE==0 && reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE==1)) {
			
			#ifdef _SUPPORT_TRAIN_IF_MEASURE
			reg_PIN_GPO_LANE_7_0 = reg_PIN_GPO_LANE_7_0 | 0x04;
			#endif	
			
			c1 = (device_remote_control_bits_lo>>4)&03;
			c0 = (device_remote_control_bits_lo>>2)&03;
			cn1 = device_remote_control_bits_lo&03;
			ce = 0;
            rm_stat = READY;
			
			#ifdef _SUPPORT_TRAIN_IF_RX_DEBUG
			reg_MCU_DEBUG6_LANE_7_0++;
			reg_MCU_DEBUG4_LANE_7_0 = reg_REMOTE_CTRL_FIELD_RD_LANE_15_0_b1;
			reg_MCU_DEBUG5_LANE_7_0 = reg_REMOTE_CTRL_FIELD_RD_LANE_15_0_b0;
			reg_MCU_DEBUG9_LANE_7_0 = c1;
			reg_MCU_DEBUGA_LANE_7_0 = c0;
			reg_MCU_DEBUGB_LANE_7_0 = cn1;
			reg_MCU_DEBUG7_LANE_7_0 = 0x11;
			#endif
	
			if(phy_mode == 4) { //ethernet
				ce = (uint8_t)((device_remote_control_bits_hi>>4) & 0x03);
				if(ce&0x1) ce = 4;
				else if(ce&0x2) ce == 5;
			}
			else {
				if( (device_remote_control_bits_hi&0xe0) == 0) { //pattern check
					ce = (uint8_t)(((device_remote_control_bits_hi&0x0c)>>2) & 0x03);
				}
				else { 
					lnx_TX_TRAIN_REMOTE_PATTERN_ERROR_INT_LANE = 1;
					error_code = UNSUPPORTED_PATTERN_TYPE;
					goto ext_int;
				}			
			}

			if( (((device_remote_control_bits_hi&0xe0)==0)&&((device_remote_control_bits & 0x13c0) ||  //0001 0011 1100 0000
				(device_remote_status_bits & 0x1fc0))) || //0001 1111 1100 0000
				 (((device_remote_control_bits_hi&0xe0)==0xe0)&&((device_remote_control_bits & 0x13c0) ||  //0001 0011 1100 0000
				(device_remote_status_bits & 0xdfc0))) //1101 1111 1100 0000 				
				) {
				error_code = RESERVED_TTIU_BIT_SET_TO_ONE;
				goto ext_int;
			}

			if( (device_remote_control_bits_hi&0xe0) == 0xe0) { //error code coming
				//do noting?
				goto ext_int0; 
			}
			
			if(ce > 0) {	//ref1, ref2, no_eq
				
				if(device_remote_control_bits_lo&0x3f != 0) {
					error_code = RESERVED_COMB_COE_REQ;
					goto ext_int;
				}

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
				
				//request_local_status(rm_stat);  //update
				//c1_valid = 0; c0_valid = 0; cn1_valid = 0;
			//goto ext_int; 
		}
		else {
		
			if(device_remote_status_bits_hi&0x80) goto ext_int0; //tx_comp=1
			
			ce = device_remote_control_bits_lo & 0x3f;
			
			if(ce==0x03) error_code = RESERVED_COE_1_REQ;
			if(ce==0x0c) error_code = RESERVED_COE_2_REQ;
			if(ce==0x30) error_code = RESERVED_COE_3_REQ;
			if(error_code>0) goto ext_int;				
					
			if( ce != 0 ) {
		
				//if( c1_valid==0 || c0_valid==0 || cn1_valid==0 ) goto ext_int;  //??
				
				for(n=0; n<11; n++) {
					if(	ce == valid_coe_tbl[n] ) break;
				}			
				
				if(n>=11) {
					
					if(do_tx_apta==1) {
						rm_stat = 0;
						goto ext_int; 
					}
					else 
					{
							lnx_REMOTE_MULTI_RSV_COE_REQ_ERR_INT_LANE = 1;					
							error_code = RESERVED_COMB_COE_REQ;
							goto ext_int; 							
					}	
				}
				else   				
				{		
					
						tx_amp_is_max = (tx_amp_index >= tx_amp_max);
						tx_amp_is_min = (tx_amp_index <= tx_amp_min);
						tx_emph0_is_max = (tx_emph0_index >= tx_emph0_max);
						tx_emph0_is_min = (tx_emph0_index <= tx_emph0_min);
						tx_emph1_is_max = (tx_emph1_index >= tx_emph1_max);
						tx_emph1_is_min = (tx_emph1_index <= tx_emph1_min);

						//------
						switch (ce) {
						case 0x0a: if(tx_emph0_is_max==0) tx_emph0_index++; break;    
						case 0x05: if(tx_emph0_is_min==0) tx_emph0_index--; break;
						case 0x28: if(tx_emph1_is_max==0) tx_emph1_index++; break;
						case 0x14: if(tx_emph1_is_min==0) tx_emph1_index--; break;
						case 0x08: if(tx_amp_is_max==0)   tx_amp_index++;   break;
						case 0x04: if(tx_amp_is_min==0)   tx_amp_index--;   break;
						case 0x02: if(tx_amp_is_min==0)   tx_amp_index--; 
								if(tx_emph0_is_max==0) tx_emph0_index++; break;
						case 0x01: if(tx_amp_is_max==0)   tx_amp_index++; 
								if(tx_emph0_is_min==0) tx_emph0_index--; break;
						case 0x20: if(tx_emph1_is_max==0) tx_emph1_index++; 
								if(tx_amp_is_min==0)   tx_amp_index--;   break;
						case 0x10: if(tx_emph1_is_min==0) tx_emph1_index--; 
								if(tx_amp_is_max==0)   tx_amp_index++; break;
						default: lnx_REMOTE_MULTI_RSV_COE_REQ_ERR_INT_LANE = 1;	 
								error_code = MULTI_RESERVED_COE_REQ; break; 
						}
						
						//------					
						tx_amp_is_max = (tx_amp_index >= tx_amp_max);
						tx_amp_is_min = (tx_amp_index <= tx_amp_min);
						tx_emph0_is_max = (tx_emph0_index >= tx_emph0_max);
						tx_emph0_is_min = (tx_emph0_index <= tx_emph0_min);
						tx_emph1_is_max = (tx_emph1_index >= tx_emph1_max);
						tx_emph1_is_min = (tx_emph1_index <= tx_emph1_min);
		
						if( c1 == INC ) {	
							if(tx_emph1_is_min) rm_stat |= C1_is_max; 
							else rm_stat |= C1_updated;
						}
						else if( c1 == DEC ) {	
							if (tx_emph1_is_max ) 	rm_stat |= C1_is_min; 
							else rm_stat |= C1_updated;		
						}
						
						if( c0 == INC ) {	
							if(tx_amp_is_min ) rm_stat |= C0_is_max;
							else rm_stat |= C0_updated;
						}
						else if( c0 == DEC ) {	
							if(tx_amp_is_max ) rm_stat |= C0_is_min; 
							else rm_stat |= C0_updated;
						}
						
						if( cn1 == INC ) {	
							if(tx_emph0_is_min) rm_stat |= Cn1_is_max;
							else rm_stat |= Cn1_updated;
						}
						else if( cn1 == DEC ) {	
							if(tx_emph0_is_max ) rm_stat |= Cn1_is_min;
							else rm_stat |= Cn1_updated;
						}
						
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
		if(error_code>0) { //send error code  
			reg_LOCAL_CTRL_FIELD_LANE_15_0_b1 = reg_REMOTE_CTRL_FIELD_RD_LANE_15_0_b1|0xe0 ; //(rm_ctrl.v&0x1fff)|0xe000; 	 
			reg_LOCAL_CTRL_FIELD_LANE_15_0_b0 = reg_REMOTE_CTRL_FIELD_RD_LANE_15_0_b0;
			rm_stat = error_code;
		}

		if( train_comp && link_train_mode==0) reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0x8000|rm_stat;
		else if( tx_init_bit && (phy_mode != SERDES)) reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0x4000|rm_stat;
		else reg_LOCAL_STATUS_FIELD_LANE_15_0 = (uint16_t)rm_stat;
		
		if(error_code) {
			#ifdef _28G_X2
			reg_LOCAL_ERROR_FIELD_VALID_LANE = 1; reg_LOCAL_ERROR_FIELD_VALID_LANE = 0;
			#else
			//cannot support error code in 28G X4 Design
			#endif			
		}
		else {
			reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
		}

			#ifdef _SUPPORT_TRAIN_IF_RX_DEBUG
			reg_MCU_DEBUG_LANE_31_0_b0 = reg_LOCAL_STATUS_FIELD_LANE_15_0_b0;;
			reg_MCU_DEBUG_LANE_31_0_b1 = reg_LOCAL_STATUS_FIELD_LANE_15_0_b1;		
			reg_MCU_DEBUG7_LANE_7_0 = 0x33;
			#endif
					
ext_int0:
		#ifdef _SUPPORT_TRAIN_IF_MEASURE
		reg_PIN_GPO_LANE_7_0 = reg_PIN_GPO_LANE_7_0 & 0xfb;
		#endif
		
		}		

	#endif //SUPPORT_TX_TRAIN_IF_REMOTE_CONTROL_MAIN
		
    
	}
	
   PHY_INT_LANE = 0xFF;

   EA = 1;
}

void int12_isr (void) __interrupt (21)  __using (2) 
{
   EA = 0;
    PHY_INT_LANE = 12;
	//reg_MCU_DEBUG_CMN_4_7_0++;
	if(reg_PIN_LOCAL_CTRL_FIELD_READY_ISR_LANE)  {
		reg_PIN_LOCAL_CTRL_FIELD_READY_ISR_LANE = 0;
		if(reg_PIN_LOCAL_CTRL_FIELD_READY_RD_LANE==1 && reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE==0) {
			do_rx_apta = 1;
			PHY_NS = ST_APTA_TXTRAIN;
		}
		else if(reg_PIN_LOCAL_CTRL_FIELD_READY_RD_LANE==0){
			
		}
	}
    PHY_INT_LANE = 0xFF;

   EA = 1;
}

void int4_isr (void) __interrupt (11)  __using (2) 
{

}

void uart0_isr(void) __interrupt(4) __using (2)
{
  EA = 0;
  if(RI) {
    RI = 0;
    uart_rx_buf[uart_rx_in++] = SBUF;
    if( uart_rx_in >= UART_RX_BUF_MAX ) 
        uart_rx_in = 0;
  }

  if(TI) {
    TI = 0;
    uart_rx_busy = 0;
  }

  EA = 1;
}

	
