/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file interrupt.h
* \purpose Interrupt
* \History
*	10/13/2019 Andrew Danilovic		Initial 
*/

#ifndef TIMER_H
#define TIMER_H

#include <compiler.h>
#include "sfr_s8051.h"
#include "interrupt.h"

void timer__init_timer2();

//#define timeout2_start(a) {TMR2=~(a-1); T2CON=0x7a; timeout2=0; } //62  //have to be a>1, unit 1uS/1mS.
#define timeout2_start(a) { \
                            TMR2=~(a-1);    \
                            T2CON = T2CON_EXEN2_EXTERNAL_ENABLE_T2EX_RELOAD_CAPTURE_BIT_3 | \
                                    T2CON_TR2_TIMER_2_RUN_ENABLE_TIMER_2_COUNT_BIT_2 | \
                                    T2CON_CT2_TIMER_2_COUNTER_TIMER_SELECT_COUNTER_T2_BIT_1 | \
                                    T2CON_CPRL2_CAPTURE_RELOAD_RELOAD_MODE_BIT_0;  \
                            timeout2=0; \
                          }

//#define timeout_stop2    { T2CON=0x60; TF2=0; }
#define timeout_stop2    {  \
                            T2CON = T2CON_TR2_TIMER_2_RUN_DISABLE_TIMER_2_COUNT_BIT_2; \
                         }

#endif // #ifndef TIMER_H
