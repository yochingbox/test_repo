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

void dfe_f2_temp_workaround(void);
void dfe_f2_temp_workaround_switch(void);

void main(){
//	#ifdef SIM_ENV
//	simulation_start();
//	#endif
	CKCON = 0x00; 
	
    EA = 0;
	
	cpu_init();
if(mcuid != MCU_CMN)
{	
	if (reg_PHY_FM_RST_LANE) {
		if (PHY_STATUS != 0) {
			// soft reset; reset registers
			reset_pwr_reg();
		}
		// clear rst lane
		reg_CLEAR_PHY_FM_RST_LANE = 0;
		reg_CLEAR_PHY_FM_RST_LANE = 1;

		PHY_STATUS = ST_INIT;
	}

	if (PHY_STATUS != ST_INIT)
		PHY_STATUS = PHY_NS;
	PHY_NS = ST_INIT;
	
	if( PHY_STATUS == ST_INIT) {
		clear_xdata(); 
		#ifdef SUPPORT_POWER_SIMPLE
		if (POWERUP_SIMPLE == MOST_SIMPLE_LEVEL)
			PowerUp_Seq_Cal();
			//PowerUp_Seq();		
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
}		
    while(1)
    {
        
    if(mcuid != MCU_CMN)
    {	    
		#ifdef _LAB
		if( PHY_STATUS != old_status) {
			old_status = PHY_STATUS;
			DBG_Printf("\r\n%x", old_status);
		}
		#endif

	    //do process
		switch(PHY_STATUS){

			case ST_SPDCHG: SpeedChange();
			case ST_CAL:    Calibration(); break;
			case ST_DTL:
				RX_Init();
				PHY_STATUS = ST_NORMAL;
				break;
			case ST_PLLREADY: 	break;
			case ST_SLUMBER: Power_Slumber();	 	break;
			case ST_SLUMBER_WK: Power_Slumber_Wakeup(); break;
            case ST_PSLUMBER_TX:
            case ST_PSLUMBER_RX:Power_Patial_Slumber(); break;

			case ST_TXTRAIN:
			case ST_RXTRAIN:	
            case ST_TRXTRAIN: // txtrain complete
        		if( do_train ) {
        			while(reg_INT_REMOTE_STATUS_ACK_LANE);
        			reg_INT_TX_TRAIN_COMPLETE_LANE = 1;
        			reg_INT_TX_TRAIN_COMPLETE_LANE = 0;
                }

        		if( do_rxtrain ) {
        			do_rxtrain = 0;
        			reg_INT_RX_TRAIN_COMPLETE_LANE = 1;
        			reg_INT_RX_TRAIN_COMPLETE_LANE = 0;
        			//reg_RX_TRAIN_ON_LANE = 0;
        			reg_RX_TRAIN_FAILED_LANE = 0;
        	    }
        		PHY_STATUS = ST_NORMAL;
        		break;
        		//TRX_Train();  	break;
            case ST_NORMAL:
#ifndef DEVELOP_TEMP
							Cal_Cont();
                            if(PHY_NS != ST_INIT) break;
#if 0
                            #if tag_RXFFE_ACCAP_EN==1
							RxFFE_ACCap(); //dfe cont run
							#endif						
							#ifdef SUPPORT_REALTIME_PHASE_ADAPT
							Phase_Adaptation();
							#endif							
#endif
#endif
							PHY_STATUS = ST_NORMAL;
							
#ifdef SIM_ENV
		//simulation_stop();
#endif
				break;
		}	
#ifndef DEVELOP_TEMP
		//check event
		if(reg_MCU_DEBUGF_LANE_7_0 & 0x40) { dfe_f2_temp_workaround_switch(); }
		else if(do_rxinit) {PHY_STATUS = ST_DTL; }
		else if(do_train | do_rxtrain)   {PHY_STATUS = ST_TRXTRAIN; }
		else if( cmx_CAL_START == 1 ) { PHY_STATUS = ST_CAL; }
		//else if(reg_MCU_DEBUGF_LANE_7_0 & 0x80) {dfe_f2_temp_workaround();}

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
		#ifdef SUPPORT_CLI
		if( lnx_CLI_START_LANE == 1 ) cli_monitor();
		#endif
#endif
		if(PHY_NS != ST_INIT) {
			PHY_STATUS = PHY_NS;
			PHY_NS = ST_INIT;
			do_wake = 0;
			continue;
		}
    } 
    }	
}


