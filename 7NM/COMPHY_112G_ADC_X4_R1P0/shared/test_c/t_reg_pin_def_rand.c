/******************************************************************
 * * 	        Marvell Semiconductor  
 * *******************************************************************
 * * \file main.c
 * * \purpose main top
 * * \History
 * *	4/12/2019 t_reg_pin_def_rand
 * */

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
  bool cmn_init_done = 0;
  bool lane0_init_done = 0;
  bool lane1_init_done = 0;
  bool lane2_init_done = 0;
  bool lane3_init_done = 0;
  bool lane_init_done = 0;

  EA = 0;
  cpu_init();

  if(mcuid == 0){
    xdat_lane_init();
    cds_lane_init();
    while(reg_MCU_DEBUG_CMN_0_7_0 != 0x10) {} //Wait for cmn init xdata done
    reg_MCU_DEBUG_CMN_0_7_0 = reg_MCU_DEBUG_CMN_0_7_0 | 0x01;
    lane0_init_done = 1;
  }
  else if(mcuid == 1){
    xdat_lane_init();
    cds_lane_init();
    while(reg_MCU_DEBUG_CMN_0_7_0 != 0x11) {} //Wait for lane0
    reg_MCU_DEBUG_CMN_0_7_0 = reg_MCU_DEBUG_CMN_0_7_0 | 0x02;
    lane1_init_done = 1;
  }
  else if(mcuid == 2){
    xdat_lane_init();
    cds_lane_init();
    while(reg_MCU_DEBUG_CMN_0_7_0 != 0x13) {} //Wait for lane1
    reg_MCU_DEBUG_CMN_0_7_0 = reg_MCU_DEBUG_CMN_0_7_0 | 0x04;
    lane2_init_done = 1;
  }
  else if(mcuid == 3){
    xdat_lane_init();
    cds_lane_init();
    while(reg_MCU_DEBUG_CMN_0_7_0 != 0x17) {} //Wait for lane2
    reg_MCU_DEBUG_CMN_0_7_0 = reg_MCU_DEBUG_CMN_0_7_0 | 0x08;
    lane3_init_done = 1;
  } 
  else {
    xdat_cmn_init();
    reg_MCU_DEBUG_CMN_0_7_0 = reg_MCU_DEBUG_CMN_0_7_0 | 0x10;
    while(reg_MCU_DEBUG_CMN_0_7_0 != 0x1f) {} //Wait for all lanes
    reg_MCU_DEBUG_CMN_0_7_0 = 0x00;
    reg_MCU_INIT_DONE = 1;
    cmn_init_done = 1;
  }

  EA = 1;
  while(1){};
	
}


