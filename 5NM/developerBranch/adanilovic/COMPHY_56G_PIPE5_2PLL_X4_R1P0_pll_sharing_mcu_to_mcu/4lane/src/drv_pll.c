/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file drv_pll.c
* \purpose Pll control functions
* \History
*	1/3/2020   Andrew Danilovic	Initial commit
*   
*/

#include "common.h"
#ifdef USE_BANKING
#pragma codeseg BANK1
#endif

//Reset Pll
//SPD_CFG: Callable by Master MCU Only
void drv_pll_rs_reset() BANKING_CTRL {
	reg_PLL_RS_RESET_ANA_LANE = 1;
	reg_ANA_PLL_RS_CLK_READY_LANE = 0;
}

//Reset Pll
//SPD_CFG: Callable by Master MCU Only
void drv_pll_ts_reset() BANKING_CTRL {
	reg_PLL_TS_RESET_ANA_LANE = 1;
	reg_ANA_PLL_TS_CLK_READY_LANE = 0;
}

void drv_pll_ts_power_on_seq() BANKING_CTRL {
	reg_ANA_PLL_TS_PU_PLL_LANE = 1;
	delay(Tus);
	reg_ANA_PLL_TS_PU_PLL_DLY_LANE = 1;
}

void drv_pll_dtx_clk_off() BANKING_CTRL {
    reg_PLL_RS_DTX_CLK_OFF_LANE = 0;
    reg_PLL_TS_DTX_CLK_OFF_LANE = 0;
}

void drv_pll_dtx_lane_off() BANKING_CTRL {
    reg_RESET_PLL_TS_DTX_LANE = 0;
    reg_RESET_PLL_RS_DTX_LANE = 0;
}

void drv_pll_spd_chg_reset_pll_ts() BANKING_CTRL {
	//drv_pll_ts_off_seq(); //---
    reg_ANA_PLL_TS_CLK_READY_LANE = 0; //Part of Calibration?
    delay(T_2us);
    reg_PLL_TS_RESET_ANA_LANE = 1;
    //reg_ANA_PLL_TS_PU_PLL_DLY_LANE = 0;
    //reg_ANA_PLL_TS_PU_PLL_LANE = 0;
}

void drv_pll_spd_chg_reset_pll_rs() BANKING_CTRL {
    //drv_pll_rs_off_seq(); //---
    reg_ANA_PLL_RS_CLK_READY_LANE = 0; 
    delay(T_2us);
    reg_PLL_RS_RESET_ANA_LANE = 1;
    //reg_ANA_PLL_RS_PU_PLL_DLY_LANE = 0;
    //reg_ANA_PLL_RS_PU_PLL_LANE = 0;
}

void drv_pll_spd_chg_clr_reset_pll_ts() BANKING_CTRL {
	reg_PLL_TS_RESET_ANA_LANE = 0;
}

void drv_pll_spd_chg_clr_reset_pll_rs() BANKING_CTRL {
	reg_PLL_RS_RESET_ANA_LANE = 0;
}

void drv_pll_spd_chg_pll_cal_tx() BANKING_CTRL {
    tx_pll_fast_cal_sel();
    pll_clk_ts_ready_1();
}

void drv_pll_spd_chg_pll_cal_rx() BANKING_CTRL {
    rx_pll_fast_cal_sel();
    pll_clk_rs_ready_1();
}

void drv_pll_clear_rst() BANKING_CTRL {
	reg_PLL_RS_RESET_ANA_LANE = 0;
	reg_PLL_TS_RESET_ANA_LANE = 0;
	/*pll_clk_ready_all_1();*/
}

void drv_pll_p2_to_p1() BANKING_CTRL {
    tx_pll_ana_on();
    if(pll_sel != TS_ON) rx_pll_ana_on();
    tx_pll_fast_cal_sel();
    if(pll_sel != TS_ON) rx_pll_fast_cal_sel();
    SYNC_SATUS_PLL_OR_OFF = 0;
    delay(50);
    tx_pll_dig_on(); //pu_pll_ts_on();
}
