#include "timer.h"

void timer__timer2_init() {
  //T2CON		 = 0x78;//60; 
  T2CON = T2CON_TR2_TIMER_2_RUN_DISABLE_TIMER_2_COUNT_BIT_2 |
          T2CON_CT2_TIMER_2_COUNTER_TIMER_SELECT_COUNTER_T2_BIT_1;
}
