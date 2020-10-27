/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file drv_pll.h
* \purpose Pll control functions
* \History
*	1/6/2020   Andrew Danilovic	Initial commit
*   
*/

#ifndef DRV_PLL_H
#define DRV_PLL_H

void drv_pll_rs_reset() BANKING_CTRL;
void drv_pll_ts_reset() BANKING_CTRL;
void drv_pll_dtx_clk_off() BANKING_CTRL;
void drv_pll_dtx_lane_off() BANKING_CTRL;
void drv_pll_spd_chg_reset_pll_ts() BANKING_CTRL;
void drv_pll_spd_chg_reset_pll_rs() BANKING_CTRL;
void drv_pll_spd_chg_clr_reset_pll_ts() BANKING_CTRL;
void drv_pll_spd_chg_clr_reset_pll_rs() BANKING_CTRL;
void drv_pll_spd_chg_pll_cal_tx() BANKING_CTRL;
void drv_pll_spd_chg_pll_cal_rx() BANKING_CTRL;
void drv_pll_clear_rst() BANKING_CTRL;
void drv_pll_ts_power_on_seq() BANKING_CTRL;
void drv_pll_p2_to_p1() BANKING_CTRL;

#endif //#ifndef DRV_PLL_H
