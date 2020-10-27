/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file pll_state_hw_interface.c
* \purpose MCU <-> MCU message passing
* \History
*   1/16/2020 Andrew Danilovic		Initial 
*/

#ifndef PLL_SHARING_HW_INTERFACE_H
#define PLL_SHARING_HW_INTERFACE_H

#include <stdint.h>
#include "hw_interface.h"

#define BANKING_CTRL

extern uint8_t reg_SHARE_PLL_MODE_LANE_1_0;
extern uint8_t lnx_MCU_CTRL_PLL_LANE_1_0;
extern uint8_t lnx_PLL_SEL_LANE_1_0;
extern uint8_t pll_sel;
extern uint8_t reg_PIN_PU_PLL_RD_LANE;
extern uint8_t reg_PIN_PU_PLL_RD_LANE0;
extern uint8_t reg_PIN_PU_PLL_RD_LANE1;
extern uint8_t reg_PIN_PU_PLL_RD_LANE2;
extern uint8_t reg_PIN_PU_PLL_RD_LANE3;
extern uint8_t reg_MCU_ID_LANE_7_0;
extern uint8_t SPD_CFG;
extern uint8_t reg_MCU_DEBUG0_LANE_7_0;
extern uint8_t reg_MCU_DEBUG1_LANE_7_0;

int mcuid = 0;

uint8_t reg_PLL_TS_LOCK_RD_LANE0 = 0;
uint8_t reg_PLL_TS_LOCK_RD_LANE1 = 0;
uint8_t reg_PLL_TS_LOCK_RD_LANE2 = 0;
uint8_t reg_PLL_TS_LOCK_RD_LANE3 = 0;
uint8_t reg_PLL_RS_LOCK_RD_LANE0 = 0;
uint8_t reg_PLL_RS_LOCK_RD_LANE1 = 0;
uint8_t reg_PLL_RS_LOCK_RD_LANE2 = 0;
uint8_t reg_PLL_RS_LOCK_RD_LANE3 = 0;

#endif // #ifndef PLL_SHARING_HW_INTERFACE_H
