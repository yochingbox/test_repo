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
void int0_isr   (void) __interrupt (0)  __using (1); 
void timer1_isr (void) __interrupt (3)  __using (1);

_sdcc_external_startup() {
    return(1);
}


void main(){
  simulation_start();
  EA = 0;
  PHY_STATUS = 0;
  // Master CPU does common part
  if(mcuid==MCU_LANE0) {
    reg_PWRON_SEQ = 1;
    reg_PU_BG = 1; //default=1?
    
    reg_ANA_PU_IVREF = 1;
    reg_ANA_PU_IVREF_DLY1 = 1;
    reg_ANA_PU_IVREF_DLY2 = 1;
    reg_ANA_PU_IVREF_DLY3 = 1;
  }		
  reg_ANA_PU_SQ_LANE = 1; //default=1?
  reg_ANA_PU_PLL_LANE = 1;
  reg_ANA_PU_RX_LANE = 1;
  reg_EOM_RESET_INTP_EXT_LANE = 0; //RESET_INTP_EXT_EOM = 0; 
  reg_RESET_INTP_EXT_LANE = 0; 	//RESET_INTP_EXT_TX = 0; ??
  reg_ANA_PU_TX_LANE = 1;
  PHY_STATUS = 1;

  reg_PIN_PLL_READY_TX_LANE = 1;
  
  reg_PIN_PLL_READY_RX_LANE = 1;
  reg_RESET_ANA_LANE = 0;
  PHY_STATUS = 2;
 
  EA = 1;

  while(1){
    simulation_stop();
 PHY_STATUS = 3;
  }
}

