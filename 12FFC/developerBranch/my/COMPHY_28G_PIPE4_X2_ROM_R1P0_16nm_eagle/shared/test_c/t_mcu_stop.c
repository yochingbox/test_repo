/******************************************************************
 * * 	        Marvell Semiconductor  
 * *******************************************************************
 * * \file main.c
 * * \purpose main top
 * * \History
 * *	10/13/2015 Heejeong Ryu		Initial 
 * */

#define _DEBUG _DEBUG_MAIN
#include "common.h"

/* Function Declaration */
int _sdcc_external_startup(void);
void int0_isr   (void) __interrupt (0)  __using (1); 
void int1_isr   (void) __interrupt (2)  __using (1); 
void timer1_isr (void) __interrupt (3)  __using (1);
void int2_isr   (void) __interrupt (9)  __using (1); 
void int3_isr   (void) __interrupt (10) __using (1); 
void int4_isr   (void) __interrupt (11) __using (1); 
void int5_isr   (void) __interrupt (12) __using (1); 
void int6_isr 	(void) __interrupt (13) __using (1);
void int7_isr 	(void) __interrupt (8)  __using (1);
void int8_isr 	(void) __interrupt (17) __using (1);
void int9_isr 	(void) __interrupt (18) __using (1);
void int10_isr 	(void) __interrupt (19) __using (1);
void int11_isr 	(void) __interrupt (20) __using (1);
void int12_isr 	(void) __interrupt (21) __using (1);
void uart0_isr  (void) __interrupt (4)  __using (1); 

_sdcc_external_startup() {
    return(1);
}

/**
 * \module test main
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
*/
void main(){
    EA = 0;
	
	cpu_init();
	
    EA = 1;

        cmx_MCU_INIT_DONE = 1;	
	PowerUp_Seq_Test();

    reg_PIN_PLL_READY_TX_LANE = 1;
    reg_PIN_PLL_READY_RX_LANE = 1;
	reg_RX_INIT_DONE_LANE = 1;
	
    while(1) {
	if(reg_PIN_REFCLK_DIS_RD == 1) {
		reg_PIN_GPO_LANE_7_0 = 0;
	
		TCON  = 0x04; //EX0=LVL 
		reg_INT_REFCLK_DIS_CHG_ISR_LANE = 0;
		PCON = 0x8a; //mcu stop 
	
		//wait for mcu wakeup
		TCON  = 0x05; //EX0=FALL
		
		reg_PIN_GPO_LANE_7_0 = 1;
	}	
    }
	
}

