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

#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg BANK2
#endif

#include "drv_pll.h"

#endif // #ifndef PLL_SHARING_HW_INTERFACE_H
