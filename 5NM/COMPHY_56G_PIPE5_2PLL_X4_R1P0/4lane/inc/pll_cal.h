/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file pll_cal.h
* \purpose pll cal calibration driver
* \History
*	2/6/2020 Andrew Danilovic		Initial
*/

#ifndef _PLL_CAL_H_
#define _PLL_CAL_H_

#include "common.h"
#include "calibration_common.h"

extern __code struct calibration_abstract_base_t rs_plldcc_common_cal;
extern __code struct calibration_abstract_base_t rs_pllvdda_common_cal;
extern __code struct calibration_abstract_base_t rs_pll_amp_common_cal;
extern __code struct calibration_abstract_base_t ts_plldcc_common_cal;
extern __code struct calibration_abstract_base_t ts_pllvdda_common_cal;
extern __code struct calibration_abstract_base_t ts_pll_amp_common_cal;

#endif //#define _PLL_CAL_H_
