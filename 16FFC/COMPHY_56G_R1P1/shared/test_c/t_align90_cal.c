/******************************************************************
 * * 	        Marvell Semiconductor  
 * *******************************************************************
 * * \file main.c
 * * \purpose main top
 * * \History
 * *	10/13/2015 Heejeong Ryu		Initial 
 * */

#define _DEBUG _DEBUG_MAIN
#define SUPPORT_POWER_SIMPLE
#include "common.h"

/* Function Declaration */
int _sdcc_external_startup(void);
void int0_isr   (void) __interrupt (0)  __using (2); 
void int1_isr   (void) __interrupt (2)  __using (2); 
void timer1_isr (void) __interrupt (3)  __using (2);
void timer2_isr (void) __interrupt (5)  __using (2);
void int2_isr   (void) __interrupt (9)  __using (2); 
void int3_isr   (void) __interrupt (10) __using (2); 
//void int4_isr   (void) __interrupt (11) __using (2); 
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

//void PowerUp_Seq_Cal(void);

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

//	while( !reg_PIN_PU_IVREF_RD );
//	PowerUp_Seq_Cal();


//	SpeedChange();
//    reg_RESET_ANA = 0;  
//    reg_RESET_ANA_RING = 0;
//    pll_clk_ready_1();
//    align90_comp_cal();
//	reg_RX_INIT_DONE_LANE = 0;    
//	delay(T_p5us);
//	reg_RX_INIT_DONE_LANE = 1;
//	delay(T_p5us);
//	reg_RX_INIT_DONE_LANE = 0;    
	PHY_STATUS = ST_POSEQ;
	while(! (reg_PIN_PU_PLL_RD_LANE));
	init_xdata();
    //reg_PWRON_SEQ = 1;
	cmx_CAL_DONE = 1;

		reg_TX_TRAIN_PAT_TWO_ZERO_LANE = 0;
		reg_TX_TRAIN_PAT_TWO_ZERO_LANE = 1;
		reg_TX_TRAIN_PAT_TWO_ZERO_LANE = 0;
    while(!reg_PIN_PLL_READY_RX_LANE);
    rxalign90_cal();

	
    while(1);
	
}

