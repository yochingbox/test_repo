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
void drv_pll_rs_dtx_clk_off() BANKING_CTRL;
void drv_pll_ts_dtx_clk_off() BANKING_CTRL;
void drv_pll_rs_dtx_lane_off() BANKING_CTRL;
void drv_pll_ts_dtx_lane_off() BANKING_CTRL;
void drv_pll_spd_chg_reset_pll_ts() BANKING_CTRL;
void drv_pll_spd_chg_reset_pll_rs() BANKING_CTRL;
void drv_pll_spd_chg_clr_reset_pll_ts() BANKING_CTRL;
void drv_pll_spd_chg_clr_reset_pll_rs() BANKING_CTRL;
void drv_pll_spd_chg_pll_cal_tx() BANKING_CTRL;
void drv_pll_spd_chg_pll_cal_rx() BANKING_CTRL;
void drv_pll_clear_ts_rst() BANKING_CTRL;
void drv_pll_clear_rs_rst() BANKING_CTRL;
void drv_pll_ts_power_on_seq() BANKING_CTRL;
void drv_pll_on() BANKING_CTRL;
void drv_pll_off() BANKING_CTRL;
void drv_pll_load_init_temp_table() BANKING_CTRL;
void drv_pll_cal_load_spd_table(const uint8_t inx) BANKING_CTRL;
void drv_pll_clk_rx_ready_0() BANKING_CTRL;
void drv_pll_rx_cal() BANKING_CTRL;
void drv_pll_clk_tx_ready_0() BANKING_CTRL;
void drv_pll_tx_cal() BANKING_CTRL;
void drv_pll_rx_cal_load() BANKING_CTRL;
void drv_pll_tx_cal_load() BANKING_CTRL;
void drv_pll_assert_ana_rs_pu_pll() BANKING_CTRL;
void drv_pll_assert_ana_ts_pu_pll() BANKING_CTRL;
void drv_pll_clk_ts_ready() BANKING_CTRL;
void drv_pll_clk_rs_ready() BANKING_CTRL;

#endif //#ifndef DRV_PLL_H
