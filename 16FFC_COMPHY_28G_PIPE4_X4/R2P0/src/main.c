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

/* Function Declaration */
int _sdcc_external_startup(void);
void int0_isr   (void) __interrupt (0)  __using (2); 
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
//	#ifdef SIM_ENV
//	simulation_start();
//	#endif
	CKCON = 0x00; 
	
    EA = 0;
	
	//cmx_MCU_INIT_DONE = 0;  //removed
	//reg_SET_MCU_INT_LANE0 = 0;

	cpu_init();
	
	PHY_STATUS = PHY_NS;
	PHY_NS = ST_INIT;
	
	if(reg_PHY_FM_RST){
		if(PHY_INT_LANE==0xff)
			reset_pwr_reg();
		if(mcuid== master_mcu) {
			reg_CLEAR_PHY_FM_RST = 1;
			reg_CLEAR_PHY_FM_RST = 0;
		}
		PHY_STATUS = ST_INIT;
	}
	
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
            case ST_SPDCHG: SpeedChange();		break;		
			#ifdef _PCIE_USB
			case ST_P2_P0:	Power_P2_P0();		break;
            case ST_P2: 	Power_P1_P2();	 	break;
			case ST_P2_WK: 	Power_P2_P1();	 	break;
			case ST_P1: 	Power_P0s_P1();		break;
			case ST_P1_WK:	Power_P1_P0();		break;
			case ST_P2_BEACON:	Power_P2_BEACON();	break;
			case ST_TXDETRX: Power_P0_TXDETRX();	break;
			case ST_P1_TXDETRX: Power_P1_TXDETRX(); break;
			case ST_P2_TXDETRX: Power_P2_TXDETRX(); break;
			case ST_P1CLKREQ_WK:	Power_P1CLKREQ_P1();	break;
			#endif //_PCIE_USB
			#ifdef _SATA_SERDES
            case ST_SLUMBER: Power_Slumber();	 	break;
			case ST_SLUMBER_WK: Power_Slumber_Wakeup(); break;
            case ST_PSLUMBER_TX:
            case ST_PSLUMBER_RX:Power_Patial_Slumber(); break;
			#endif //_SATA_SERDES
			case ST_TXTRAIN:
			case ST_RXTRAIN:	
            case ST_TRXTRAIN: TRX_Train();  	break;	
            case ST_DTL:	  RX_Init();		break;
			case ST_PLLREADY: 	break; 
            case ST_APTA_TXTRAIN: apta_txtrain();  	break;	
            case ST_CAL:	  Calibration(); 		break;
            case ST_LANE_MARGIN_EN:  lane_margin_start(); 		break;
			case ST_NORMAL: 
						    Cal_Cont();
							if(PHY_NS != ST_INIT) break;
							
							#if tag_RXFFE_ACCAP_EN==1
							RxFFE_ACCap(); //dfe cont run
							#endif						
							#ifdef SUPPORT_REALTIME_PHASE_ADAPT
							Phase_Adaptation();
							#endif							
							PHY_STATUS = ST_NORMAL;
							
#ifdef SIM_ENV
		//simulation_stop();
#endif
				break;
		}	
		
		//check event
		if(do_rxinit) {PHY_STATUS = ST_DTL; }
		else if(do_train | do_rxtrain)   {PHY_STATUS = ST_TRXTRAIN; }	
		else if(do_rx_apta) {PHY_STATUS = ST_APTA_TXTRAIN; }
		else if(reg_DFE_MARGIN_EN_LANE) {PHY_STATUS = ST_LANE_MARGIN_EN;}
		else if(cmx_CAL_START) { PHY_STATUS = ST_CAL; }
		
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

    } 
	
}


