/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file pll_state_hw_interface.c
* \purpose MCU <-> MCU message passing
* \History
*   1/16/2020 Andrew Danilovic		Initial 
*/

#ifndef PLL_STATE_HW_INTERFACE_H
#define PLL_STATE_HW_INTERFACE_H

#include <stdint.h>

#define BANKING_CTRL

#pragma GCC diagnostic ignored "-Wswitch"

#include "hw_interface.h"

#include "pll_state.h"

static enum PLL_SLAVE_LANE_STATE__STATES  pll_s_current_state_g[NUM_MCU_LANES] = {
    PLL_SLAVE_LANE_STATE__Invalid_State
};

static enum PLL_SEQUENCE__SEQUENCES       pll_s__lane_seq__current_sequence[NUM_MCU_LANES] = {
    PLL_SEQUENCE__Invalid_Seq
};

uint8_t reg_MCU_DEBUG3_LANE_7_0;
uint8_t reg_MCU_DEBUG4_LANE_7_0;
uint8_t reg_MCU_DEBUG5_LANE_7_0;
uint8_t reg_MCU_DEBUG6_LANE_7_0;

int T_10us = 0;

void delay(int a __attribute__ ((unused))) {}

#endif // #ifndef PLL_STATE_HW_INTERFACE_H
