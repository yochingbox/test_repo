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

#include "pll_state.h"
#include "pll_sharing.h"
#include "mcu_command.h"

bool pll_is_this_mcu_a_slave();
bool pll_is_this_mcu_a_master();

enum pll_rs_or_ts {
    PLL__RS_OR_TS__RS,
    PLL__RS_OR_TS__TS,
    PLL__RS_OR_TS__ANY
};

void pll_access_route(const enum pll_rs_or_ts rs_or_ts,
                      const enum MCU_COMMAND__COMMANDS command) BANKING_CTRL;
void pll_access_route_data(const enum pll_rs_or_ts rs_or_ts,
                           const enum MCU_COMMAND__COMMANDS command,
                           const uint8_t data1,
                           const uint8_t data2) BANKING_CTRL;
bool pll_get_pu_pll_or(const uint8_t my_mcuid_local) BANKING_CTRL;
bool pll_access_allowed(const enum pll_rs_or_ts rs_or_ts) BANKING_CTRL;
void pll_check_and_execute_if_master() BANKING_CTRL;
void pll_request_pll_access(const enum PLL_SEQUENCE__SEQUENCES seq) BANKING_CTRL;
//void pll_request_pll_access(uint8_t seq) BANKING_CTRL;
void pll_free_pll() BANKING_CTRL;
uint8_t pll_get_mcu_command_channel_to_send(const uint8_t my_mcu_id);
uint8_t pll_get_mcu_command_channel_to_receive(const uint8_t my_mcu_id);
uint8_t pll_get_lane_resp_bit_map(const uint8_t mcuid_local);
uint8_t pll_get_lane_bit_map(const uint8_t channel_send_bit_map);
void pll_wait_for_valid_command(const uint8_t command, const uint8_t channel_receive_bit_map);

#endif //#ifndef PLL_SHARING_H
