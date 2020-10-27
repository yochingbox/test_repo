
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

  reg_SET_MCU_INT_LANE3 = 1;
  reg_SET_MCU_INT_LANE2 = 0;
  reg_SET_MCU_INT_LANE1 = 1;
  reg_SET_MCU_INT_LANE0 = 0;

  EA = 1;

  while(1){
    simulation_stop();
  }
}



