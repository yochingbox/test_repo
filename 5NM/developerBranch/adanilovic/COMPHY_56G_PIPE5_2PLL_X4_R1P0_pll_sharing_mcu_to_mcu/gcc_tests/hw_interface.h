/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file hw_interface.c
* \purpose Simulate HW interface
* \History
*   1/16/2020 Andrew Danilovic		Initial 
*/

#ifndef HW_INTERFACE_H
#define HW_INTERFACE_H

#include <stdint.h>

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
extern uint8_t reg_MCU_DEBUG2_LANE_7_0;

#define MCU_LANE0	0
#define MCU_LANE1	1
#define MCU_LANE2	2
#define MCU_LANE3	3
#define MAX_MCU_ID	3
#define NUM_MCU_LANES (MAX_MCU_ID + 1)

enum {
    BOTH_ON,
    TS_ON,
    RS_ON,
    SWAP_BOTH_ON,	
};

void hw_interface__init();

#endif // #ifndef HW_INTERFACE_H
