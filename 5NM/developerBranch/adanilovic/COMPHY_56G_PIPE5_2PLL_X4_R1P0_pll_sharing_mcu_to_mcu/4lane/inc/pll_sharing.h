/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file pll_sharing.h
* \purpose Definitions, Declaration
* \History
*	1/6/2020 Andrew Danilovic		Initial commit 
*/
#ifndef PLL_SHARING_H
#define PLL_SHARING_H

#include "pll_sharing.h"

void pll_drv_power_on_ana_pll() BANKING_CTRL;
void pll_drv_reset_ts_rs_tx_intpreset_ext() BANKING_CTRL;
void pll_drv_pll_rs_reset() BANKING_CTRL;
void pll_drv_pll_ts_reset() BANKING_CTRL;
void pll_loadspeedtbl_lc_pll_ts() BANKING_CTRL;
void pll_loadspeedtbl_lc_pll_rs() BANKING_CTRL;
void pll_turn_on_rx_cont_cal_rs_pll() BANKING_CTRL;
void pll_turn_on_tx_cont_cal_ts_pll() BANKING_CTRL;
void pll_turn_off_tx_cont_cal_ts_pll() BANKING_CTRL;
void pll_turn_off_rx_cont_cal_rs_pll() BANKING_CTRL;
void pll_drv_pll_dtx_clk_off() BANKING_CTRL;
void pll_drv_pll_dtx_lane_off() BANKING_CTRL;
void pll_drv_pll_rs_off_dig_prot_en() BANKING_CTRL;
void pll_drv_pll_ts_off_dig_prot_en() BANKING_CTRL;
void pll_drv_pll_spd_chg_reset_pll_ts() BANKING_CTRL;
void pll_drv_pll_spd_chg_reset_pll_rs() BANKING_CTRL;
void pll_drv_pll_spd_chg_clr_reset_pll_ts() BANKING_CTRL;
void pll_drv_pll_spd_chg_clr_reset_pll_rs() BANKING_CTRL;
void pll_drv_pll_spd_chg_pll_cal_tx() BANKING_CTRL;
void pll_drv_pll_spd_chg_pll_cal_rx() BANKING_CTRL;
void pll_drv_pll_power_p2_to_p1() BANKING_CTRL;
bool pll_sharing__get_pu_pll_or(const uint8_t my_mcuid_local) BANKING_CTRL;
uint8_t pll_read_pll_ts_lock() BANKING_CTRL;
uint8_t pll_read_pll_rs_lock() BANKING_CTRL;

enum pll_rs_or_ts {
    PLL__RS_OR_TS__RS,
    PLL__RS_OR_TS__TS
};

bool pll_access_allowed(const enum pll_rs_or_ts rs_or_ts) BANKING_CTRL;
bool pll_reg_access_allowed_by_any_mcu(const enum pll_rs_or_ts rs_or_ts) BANKING_CTRL;
bool pll_is_this_mcu_a_pll_m_() BANKING_CTRL;
void pll_check_and_execute_if_master() BANKING_CTRL;
//void pll_request_pll_access(const enum PLL_SEQUENCE__SEQUENCES seq) BANKING_CTRL;
void pll_request_pll_access(uint8_t seq) BANKING_CTRL;
void pll_free_pll() BANKING_CTRL;
uint8_t pll_which_mcu_command_channel_to_send(const uint8_t my_mcu_id) BANKING_CTRL;
uint8_t pll_get_mcu_command_channel_receive(const uint8_t my_mcu_id) BANKING_CTRL;
uint8_t pll_get_lane_bit_map(const uint8_t channel_send_bit_map) BANKING_CTRL;
void pll_wait_for_valid_command(const uint8_t command, const uint8_t channel_receive_bit_map) BANKING_CTRL;

#endif //#ifndef PLL_SHARING_H
