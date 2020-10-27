/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file drv_pll.c
* \purpose PLL interface
* \History
*	2/5/2020 Andrew Danilovic		Initial 
*/

#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK1
#pragma constseg BANK1
#endif

uint8_t drv_pll_read_pll_ts_lock() BANKING_CTRL {
    return reg_ANA_PLL_TS_LOCK_RD_LANE;
}

uint8_t drv_pll_read_pll_rs_lock() BANKING_CTRL {
    return reg_ANA_PLL_RS_LOCK_RD_LANE;
}
