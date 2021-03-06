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
#include "driver.h"

/* Function Declaration */
int _sdcc_external_startup(void);
void int0_isr   (void) __interrupt (0)  __using (2); 
//void int1_isr   (void) __interrupt (2)  __using (2); 
void timer1_isr (void) __interrupt (3)  __using (2);
void timer2_isr (void) __interrupt (5)  __using (2);
void int2_isr   (void) __interrupt (9)  __using (2); 
void int3_isr   (void) __interrupt (10) __using (2); 
void int4_isr   (void) __interrupt (11) __using (2); 
//void int5_isr   (void) __interrupt (12) __using (2); 
//void int6_isr 	(void) __interrupt (13) __using (2);
//void int7_isr 	(void) __interrupt (8)  __using (2);
//void int8_isr 	(void) __interrupt (17) __using (2);
void int9_isr 	(void) __interrupt (18) __using (2);
void int10_isr 	(void) __interrupt (19) __using (2);
//void int11_isr 	(void) __interrupt (20) __using (2);
//void int12_isr 	(void) __interrupt (21) __using (2);
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

    cpu_init();

    bit_performing_phase_train_adv = 0;

if(mcuid != MCU_CMN)
{	
	if (reg_PHY_FM_RST_LANE) {
lnx_INTERRUPT_DEBUG0_LANE_7_0++;
		// reg_PHY_FM_RST_LANE: core reset
		if (PHY_STATUS != 0) {
			// soft reset; reset registers
			// Please don't move the below three signals
			reg_RX_INIT_DONE_LANE = 0;
			reg_PIN_PLL_READY_RX_LANE = 0;
			reg_PIN_PLL_READY_TX_LANE = 0;
			reset_pwr_reg();
		}
		// clear rst lane
		reg_CLEAR_PHY_FM_RST_LANE = 0;
		reg_CLEAR_PHY_FM_RST_LANE = 1;
		
		// On hw power up, reg_PHY_FM_RST_LANE = 1
		//restore_xdata();
		
		//DBG_Printf("\r\n software reset!"); // also called core reset
		PHY_STATUS = ST_INIT;
	}else{
lnx_INTERRUPT_DEBUG1_LANE_7_0++;	
	}
	
	if (PHY_STATUS != ST_INIT)
		PHY_STATUS = PHY_NS;
	PHY_NS = ST_INIT;
	
	if( PHY_STATUS == ST_INIT) {
		// First time power up or core reset
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
	}else{
		// Not first time power up, nor core reset
		restore_xdata();
	}
    EA = 1;
    // Toggle reg_MCU_INT*_EN_LANE to re-trigger interrupts after mcu_reset
    // CACHE_DEBUG1[25:13]->int12~0
    //reg_MCU_INT*_EN_LANE=0;
	CACHE_DEBUG1.VAL &= ~0x07ffe000;
	//reg_MCU_INT*_EN_LANE=1;
	CACHE_DEBUG1.VAL |= 0x07ffe000;
	//reg_INT_ENABLE_ALL_LANE = 0;
    //reg_INT_ENABLE_ALL_LANE = 1;
	
		#ifdef _LAB		
	DBG_Printf("\r\n[mcu%d]-- Welcome to MCUPhy Debug World!! --", reg_MCU_ID_LANE_7_0);
	DBG_Printf("\tBuilt: %s-%s\n\r",__DATE__, __TIME__);
		#endif
}		

	if(mcuid==MCU_CMN) {
		proc_cal();

		//enable TSEN
		reg_ANA_TSEN_ADC_EN = 0;
		reg_ANA_TSEN_ADC_RESET = 0;
		delay_ram(T_20us);
		reg_ANA_TSEN_ADC_RESET = 1;
		delay_ram(T_20us);
		reg_ANA_TSEN_ADC_RESET = 0;
		delay_ram(T_20us);
		reg_ANA_TSEN_ADC_EN = 1;
		delay_ram(T_100us);
		delay_ram(T_100us);

		reg_TSEN_ADC_CAL_1_0 = 0x2; //Automatic self-offset-cal enforced, TSENE_ADC in normal mode.
		reg_TSEN_ADC_RD_REQ = 1;

		reg_ANA_TSEN_ADC_START = 1;

		//if(reg_MCU_COMMAND0_LANE_31_0_b0==0) { //to do:find the register for this condition.
			while(reg_TSEN_ADC_RDY==0);
		//}

		read_tsen_ram();
	}
#ifdef SUPPORT_CTLE_ADAPT
	CTLE_Adaptation_Init();
#endif
	timer2_init();

    while(1)
    {
        
    if(mcuid != MCU_CMN)
    {	    
// !!! Make sure SOC has rom capability
//    	rom_test1(0x89);
//	reg_MCU_DEBUG6_LANE_7_0 = rom_test2(0x99);	
	if(PHY_STATUS != ST_NORMAL) dfe_backon();
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
			case ST_DTL: 	RX_Init(); break;
			case ST_PLLREADY: 	
						comphy_int();
						break;
			case ST_SLUMBER: Power_Slumber();	 	break;
			case ST_SLUMBER_WK: Power_Slumber_Wakeup(); break;
            case ST_PSLUMBER_TX:
            case ST_PSLUMBER_RX:Power_Patial_Slumber(); break;

			case ST_TXTRAIN:
			case ST_RXTRAIN:	
            case ST_TRXTRAIN:	TRX_Train();     		break;
            case ST_NORMAL:
#ifdef SUPPORT_DFE_POWER_SAVING
/*	    		if(reg_MCU_DEBUG2_LANE_7_0 ==1 ) {
					reg_MCU_DEBUG2_LANE_7_0 = 0;
					timer2_start(DFE_POWER_SAVING_TIMER);
				}
			
	    		if(reg_MCU_DEBUG2_LANE_7_0 ==2 ) {
					reg_MCU_DEBUG2_LANE_7_0 = 0;
					timer2_stop(DFE_POWER_SAVING_TIMER);
				}
*/
				dfe_power_saving();
#endif
#ifdef SUPPORT_CTLE_ADAPT
				CTLE_Adaptation();
#endif
#if 0 //ndef DEVELOP_TEMP
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
				// check comphy int
				if(comphy_int_in0)
					comphy_int();

				PHY_STATUS = ST_NORMAL;
														
#ifdef SIM_ENV
		//simulation_stop();
#endif
				break;
		}	
#ifdef DEVELOP_TEMP
		//check event
		//if(reg_MCU_DEBUGF_LANE_7_0 & 0x40) { dfe_f2_temp_workaround_switch(); }lnx_TEMP_WORKAROUND_DFE_LANE_7_0
		/*if(lnx_TEMP_WORKAROUND_DFE_LANE_7_0 & 0x40) { dfe_f2_temp_workaround_switch(); }
		else if(do_rxinit) {PHY_STATUS = ST_DTL; }
		else if(do_train | do_rxtrain)   {PHY_STATUS = ST_TRXTRAIN; }
		else if( cmx_CAL_START == 1 ) { PHY_STATUS = ST_CAL; }*/
		//else if(reg_MCU_DEBUGF_LANE_7_0 & 0x80) {dfe_f2_temp_workaround();}
		//if(lnx_TEMP_WORKAROUND_DFE_LANE_7_0 & 0x40) { dfe_f2_temp_workaround_switch(); }

		// general protection for missing speed changes
		if((reg_PIN_PHY_GEN_TX_RD_LANE_4_0!=gen_tx) && reg_ANA_PU_TX_LANE && reg_ANA_PU_RX_LANE){
			reg_PIN_PLL_READY_RX_LANE = 0;
			reg_PIN_PLL_READY_TX_LANE = 0;
			reg_ANA_RX_DTL_LOOP_FREEZE_LANE = 1;  //analog deleted
			reg_DTL_FLOOP_FREEZE_LANE = 1;
			DTL_DTX_DFE_clkoff_reset_1();
/*			PHY_STATUS = ST_CAL;*/

			lnx_SPEED_CHANGE_DEBUG0_LANE_7_0++;
			if(speed_change_with_slumber_rd){
				force_slumber = 1;
				Power_Slumber();
				force_slumber = 0;
			}
			if(speed_change_with_analog_reset_rd){
				reg_ANA_REG_TRX_FORCE_LANE = 1;
				reg_ANA_REG_TRX_RST_LANE = 1;
				reg_ANA_REG_TRX_RST_LANE = 0;
				reg_ANA_REG_TRX_FORCE_LANE = 0;
			}
			
			PHY_STATUS = ST_INIT;
			
			SRST = 1;
			SRST = 1;
			continue;
		}
		
		if(reg_RX_TRAIN_ENABLE_ISR_LANE) {			
			if(reg_RX_TRAIN_ENABLE_RD_LANE) {
				do_rxtrain = 1;	
				PHY_STATUS = ST_TRXTRAIN;
			}	
			reg_RX_TRAIN_ENABLE_ISR_CLEAR_LANE = 1;
			reg_RX_TRAIN_ENABLE_ISR_CLEAR_LANE = 0;
		}	
#if 0
		if(reg_INT_RX_INIT_RISE_ISR_LANE) {
			do_rxinit = 1;
			PHY_STATUS = ST_DTL;
		}	
#endif
		if(reg_TX_TRAIN_ENABLE_ISR_LANE) {			
			if(reg_TX_TRAIN_ENABLE_RD_LANE) {
				do_train = 1;	
				PHY_STATUS = ST_TRXTRAIN;
			}	
			reg_TX_TRAIN_ENABLE_ISR_CLEAR_LANE = 1;
			reg_TX_TRAIN_ENABLE_ISR_CLEAR_LANE = 0;		
		}
		
		if( cmx_CAL_START == 1 ) { PHY_STATUS = ST_CAL; }

		#ifdef _LAB
		if(lnx_UART_EN_LANE)
		uart_monitor();
		#endif
		
		//check sq auto txtrain
		if(lnx_SQ_AUTO_TRAIN_LANE==1) {
			//sq_auto_train_enable();
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
		if( lnx_CLI_START_LANE == 1 ){ 
			dfe_backon();
			cli_monitor();
		}
		#endif
#endif
    } else {
    	if(!cmx_MCU_SYNC_LANE0)
    		reg_MCU_DEBUG_CMN_0_7_0 &= ~1;
    	if(!cmx_MCU_SYNC_LANE1)
    		reg_MCU_DEBUG_CMN_0_7_0 &= ~2;
    	if(!cmx_MCU_SYNC_LANE2)
    		reg_MCU_DEBUG_CMN_0_7_0 &= ~4;
    	if(!cmx_MCU_SYNC_LANE3)
    		reg_MCU_DEBUG_CMN_0_7_0 &= ~8;
    	
    	if(reg_MCU_DEBUG_CMN_0_7_0==0){
    		if(cmx_MCU_SYNC_LANE0)
    			reg_MCU_DEBUG_CMN_0_7_0 = 1;
    		else if(cmx_MCU_SYNC_LANE1)
    			reg_MCU_DEBUG_CMN_0_7_0 = 2;
    		else if(cmx_MCU_SYNC_LANE2)
    			reg_MCU_DEBUG_CMN_0_7_0 = 4;
    		else if(cmx_MCU_SYNC_LANE3)
    			reg_MCU_DEBUG_CMN_0_7_0 = 8;
    	
    	}
    } // MCU_CMN
    }	
}


