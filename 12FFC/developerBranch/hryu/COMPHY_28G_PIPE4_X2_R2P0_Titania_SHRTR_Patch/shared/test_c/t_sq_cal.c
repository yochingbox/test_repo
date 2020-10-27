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

	clear_xdata();	//clear xdata memory
	while( !reg_PIN_PU_IVREF_RD );
	PowerUp_Seq_Test();
	Calibration();
        Cal_Cont();

    reg_PIN_PLL_READY_TX_LANE = 1;
    reg_PIN_PLL_READY_RX_LANE = 1;
	reg_RX_INIT_DONE_LANE = 1;
	
    while(1);
	
}

