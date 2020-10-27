/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file pll_sharing.c
* \purpose Code to route pll functions to master MCU or slave MCU
* \History
*	1/6/2020   Andrew Danilovic Initial commit
*   
*/
#include "common.h"
#include "drv_pll.h"
#include "pll_sharing.h"
#include "mcu_command.h"
#include "pll_state.h"

// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg BANK2
#endif

static bool is_master_cached_valid = false;
static bool is_master_cached = false;

#ifdef PLL_SHARING_ROUTE
static bool pll_reg_access_allowed_by_any_mcu(const enum pll_rs_or_ts rs_or_ts) {

    if(lnx_PLL_SEL_LANE_1_0 == BOTH_ON) {
        return true;    //Tx is using TS PLL and Rx is using RS PLL, so some MCU must be in control
    }
    else if(lnx_PLL_SEL_LANE_1_0 == SWAP_BOTH_ON) {
        return true;    //Tx is using RS PLL and Rx is using TS PLL, so some MCU must be in control
    }

    if(rs_or_ts == PLL__RS_OR_TS__ANY) {
        return true;
    }

    if(rs_or_ts == PLL__RS_OR_TS__RS) {
        switch(lnx_PLL_SEL_LANE_1_0) {
            case TS_ON:
                return false;   //Tx and Rx are using TS PLL, so no MCU should be controlling RS PLL
                break;

            case RS_ON:
                return true;    //Tx and Rx are using RS PLL, so some MCU should be in control of it
                break;
        
            default:
                return false;
                break;
        }
    }
    else if(rs_or_ts == PLL__RS_OR_TS__TS) {
        switch(lnx_PLL_SEL_LANE_1_0) {
            case TS_ON:
                return true;    //Tx and Rx are using TS PLL, so some MCU should be in contrl of it
                break;

            case RS_ON:
                return false;   //Tx and Rx are using RS PLL, so no MCU should be controlling TS PLL
                break;
        
            default:
                return false;
                break;
        }
    }

    return false;
}

bool pll_is_this_mcu_a_slave() {
    if(lnx_MCU_CTRL_PLL_LANE_1_0 == 0) {
        return true;
    }
    return false;
}

static void set_is_master_cache(bool is_master) {
    is_master_cached_valid = true;
    is_master_cached = is_master;
}

bool pll_is_this_mcu_a_master() {

	#ifdef PLL_SHARING_ROUTE

    if(is_master_cached_valid) {
        return is_master_cached;
    }

    if(lnx_MCU_CTRL_PLL_LANE_1_0 == 0) {
        set_is_master_cache(false);
        return false;
    }

    if(reg_SHARE_PLL_MODE_LANE_1_0 <= 1) {
        set_is_master_cache(false);
        return false;
    }

    switch(lnx_PLL_SEL_LANE_1_0) {
        case 0:
            break;

        case 1:
            if(lnx_MCU_CTRL_PLL_LANE_1_0 == 2) {
                if((SPD_CFG == 2) || (SPD_CFG == 3)) {
                    if((mcuid == MCU_LANE0) &&
                       (pll_s_get_current_state(MCU_LANE1) != PLL_SLAVE_LANE_STATE__WillNeverNeedMaster)) {
                        set_is_master_cache(true);
                        return true;
                    }

                    if((mcuid == MCU_LANE2) &&
                       (pll_s_get_current_state(MCU_LANE3) != PLL_SLAVE_LANE_STATE__WillNeverNeedMaster)) {
                        set_is_master_cache(true);
                        return true;
                    }
                } 
                #if SUPPORT_SPD_CFG_4_5
                else if(SPD_CFG == 4) {
                    if((mcuid == MCU_LANE1) &&
                       (pll_s_get_current_state(MCU_LANE0) != PLL_SLAVE_LANE_STATE__WillNeverNeedMaster)) {
                        set_is_master_cache(true);
                        return true;
                    }

                    if((mcuid == MCU_LANE2) &&
                       (pll_s_get_current_state(MCU_LANE3) != PLL_SLAVE_LANE_STATE__WillNeverNeedMaster)) {
                        set_is_master_cache(true);
                        return true;
                    }
                }
                else if(SPD_CFG == 5) {
                    if(mcuid == MCU_LANE1) {
                        set_is_master_cache(true);
                        return true;
                    }
                }
                #endif
            }
            break;
        
        case 2:
            if(lnx_MCU_CTRL_PLL_LANE_1_0 == 1) {
                if((SPD_CFG == 2) || (SPD_CFG == 3)) {
                    if((mcuid == MCU_LANE0) &&
                       (pll_s_get_current_state(MCU_LANE1) != PLL_SLAVE_LANE_STATE__WillNeverNeedMaster)) {
                        set_is_master_cache(true);
                        return true;
                    }

                    if((mcuid == MCU_LANE2) &&
                       (pll_s_get_current_state(MCU_LANE3) != PLL_SLAVE_LANE_STATE__WillNeverNeedMaster)) {
                        set_is_master_cache(true);
                        return true;
                    }
                }
                #if SUPPORT_SPD_CFG_4_5
                else if(SPD_CFG == 4) {
                    if((mcuid == MCU_LANE1) &&
                       (pll_s_get_current_state(MCU_LANE0) != PLL_SLAVE_LANE_STATE__WillNeverNeedMaster)) {
                        set_is_master_cache(true);
                        return true;
                    }

                    if((mcuid == MCU_LANE2) &&
                       (pll_s_get_current_state(MCU_LANE3) != PLL_SLAVE_LANE_STATE__WillNeverNeedMaster)) {
                        set_is_master_cache(true);
                        return true;
                    }
                }
                else if(SPD_CFG == 5) {
                    if(mcuid == MCU_LANE1) {
                        set_is_master_cache(true);
                        return true;
                    }
                }
                #endif
            }
            break;

        case 3:
            break;

        default:
            break;
    }
    #endif // #ifdef PLL_SHARING_ROUTE

    set_is_master_cache(false);
    return false;
}
#endif //#ifdef PLL_SHARING_ROUTE

static void pll_access_route_internal(const enum pll_rs_or_ts rs_or_ts,
                                      const enum MCU_COMMAND__COMMANDS command,
                                      const uint8_t data1,
                                      const uint8_t data2) {

	#ifdef PLL_SHARING_ROUTE
    if(pll_access_allowed(rs_or_ts)) {
        if(pll_is_this_mcu_a_master()) {
            pll_m_handle_event(pll_m_get_master_index_from_mcuid(mcuid),
                               PLL_MASTER_LANE_COMMAND__PllAccessCommand,
                               command,
                               data1,
                               data2);
        }
        else {
            mcu_execute(command, 0, data1, data2);
        }
    }
    else {
        if(pll_reg_access_allowed_by_any_mcu(rs_or_ts)) {
            pll_s_handle_event(mcuid,
                               PLL_SLAVE_LANE_COMMAND__PllAccessCommand,
                               command,
                               data1,
                               data2);
        }
    }
	#else //#ifdef PLL_SHARING_ROUTE
    mcu_execute(command, 0, data1, data2);
	#endif // #else //#ifdef PLL_SHARING_ROUTE
}

void pll_access_route(const enum pll_rs_or_ts rs_or_ts,
                      const enum MCU_COMMAND__COMMANDS command) BANKING_CTRL {
    reg_MCU_DEBUG0_LANE_7_0 = 0x40;
    #ifdef _PCIE_BUILD
    if(is_first_time_power_up()) {
        pll_access_route_power_on(command, 0, 0);
    }
    else {
        pll_access_route_internal(rs_or_ts, command, 0, 0);
    }
    #else
    pll_access_route_internal(rs_or_ts, command, 0, 0);
    #endif
    reg_MCU_DEBUG0_LANE_7_0 = 0x41;
}

void pll_access_route_data(const enum pll_rs_or_ts rs_or_ts,
                           const enum MCU_COMMAND__COMMANDS command,
                           const uint8_t data1,
                           const uint8_t data2) BANKING_CTRL {
    #ifdef _PCIE_BUILD
    if(is_first_time_power_up()) {
        pll_access_route_power_on(command, data1, data2);
    }
    else {
        pll_access_route_internal(rs_or_ts, command, data1, data2);
    }
    #else
    pll_access_route_internal(rs_or_ts, command, data1, data2);
    #endif
}

#ifdef _PCIE_BUILD
void pll_access_route_power_on(const enum MCU_COMMAND__COMMANDS command,
                               const uint8_t data1,
                               const uint8_t data2) {
    uint8_t channel_bit_map = 0;

    if((SPD_CFG == 3) 
       #if SUPPORT_SPD_CFG_4_5
       (SPD_CFG == 4) ||
       (SPD_CFG == 5)
       #endif
        ){
        if(lnx_MCU_CTRL_PLL_LANE_1_0 == 0) {
            //MCU is a pll slave
            //wait for master
            mcu_send_and_wait(pll_get_mcu_command_channel_to_send(mcuid),
                              MCU_SYNC);
        }
        else {
            //MCU is a pll master
            mcu_execute(command, 0, data1, data2);
            //wait for slave
            channel_bit_map = pll_get_mcu_command_channel_to_receive(mcuid);
            pll_wait_for_valid_command(MCU_SYNC, channel_bit_map);
        }
    }
    else {
        mcu_execute(command, 0, data1, data2);
    }
}
#endif // #ifdef _PCIE_BUILD

bool pll_get_pu_pll_or(const uint8_t my_mcuid_local) BANKING_CTRL {

	#ifdef PLL_SHARING_ROUTE

    const bool master = pll_is_this_mcu_a_master();
    const bool slave = pll_is_this_mcu_a_slave();

    switch (reg_SHARE_PLL_MODE_LANE_1_0) {
        case 0:
        case 1:
            if(reg_PIN_PU_PLL_RD_LANE) {
                return true;
            }
            break;

        case 2:
            if(master || slave) {
                switch (my_mcuid_local) {
                    case MCU_LANE0:
                    case MCU_LANE1:
                        if((FW_PIN_PU_PLL_RD_LANE0) ||
                           (FW_PIN_PU_PLL_RD_LANE1) ) {
                            return true;
                        }
                        break;

                    case MCU_LANE2:
                    case MCU_LANE3:
                        if((FW_PIN_PU_PLL_RD_LANE2) ||
                           (FW_PIN_PU_PLL_RD_LANE3) ) {
                            return true;
                        }
                        break;
                }
            }
            else {
                if(reg_PIN_PU_PLL_RD_LANE) {
                    return true;
                }
            }
            break;
       
        //TODO: fix for spdcfg=4,5 
        case 3:
            if((FW_PIN_PU_PLL_RD_LANE0) ||
               (FW_PIN_PU_PLL_RD_LANE1) ||
               (FW_PIN_PU_PLL_RD_LANE2) ||
               (FW_PIN_PU_PLL_RD_LANE3) ) {
                return true;
            }
            break;
    }

    return false;    
	#else //#ifdef PLL_SHARING_ROUTE
    if(reg_PU_PLL_OR) {
        return true;
    }
    return false;
	#endif // #else //#ifdef PLL_SHARING_ROUTE
}

#ifdef PLL_SHARING_ROUTE
uint8_t pll_get_mcu_command_channel_to_send(const uint8_t my_mcu_id) {

    switch (my_mcu_id) {
        #if SUPPORT_SPD_CFG_4_5
        case MCU_LANE0:
            if((SPD_CFG == 4) || (SPD_CFG == 5)) {
                return MCU_CHANNEL_0;
            }
            break;
        #endif
        case MCU_LANE1:
            if((SPD_CFG == 2) || (SPD_CFG == 3)) {
                return MCU_CHANNEL_0;
            }
            break;
        case MCU_LANE2:
            return MCU_CHANNEL_1;
            break;
        case MCU_LANE3:
            return MCU_CHANNEL_2;
            break;
        default:
            break;
    }

    return 0;
}

static bool is_mcu_command_channel_cache_valid = false;
static uint8_t mcu_command_channel_to_receive = 0;

static void set_mcu_command_channel_to_receive(const uint8_t bit_map) {
    is_mcu_command_channel_cache_valid = true;
    mcu_command_channel_to_receive = bit_map;
}

uint8_t pll_get_mcu_command_channel_to_receive(const uint8_t my_mcu_id) {

    if(is_mcu_command_channel_cache_valid) {
        return mcu_command_channel_to_receive;
    }

    switch(reg_SHARE_PLL_MODE_LANE_1_0) {
        case 0:
        case 1:
            break;

        case 2:
            switch(my_mcu_id) {
                case MCU_LANE0:
                    if((SPD_CFG == 2) || (SPD_CFG == 3)) {
                        set_mcu_command_channel_to_receive((1 << MCU_CHANNEL_0));
                        return (1 << MCU_CHANNEL_0);
                    }
                    break;

                #if SUPPORT_SPD_CFG_4_5
                case MCU_LANE1:
                    if((SPD_CFG == 4) || (SPD_CFG == 5)) {
                        reg_MCU_DEBUG0_LANE_7_0 = 0x9e;
                        reg_MCU_DEBUG1_LANE_7_0 = 1 << (MCU_CHANNEL_0);
                        set_mcu_command_channel_to_receive((1 << MCU_CHANNEL_0));
                        return (1 << MCU_CHANNEL_0);
                    }
                    break;
                #endif

                case MCU_LANE2:
                    set_mcu_command_channel_to_receive((1 << MCU_CHANNEL_2));
                    return (1 << MCU_CHANNEL_2);
                    break;
            }
            break;
        case 3:
            switch(my_mcu_id) {
                case MCU_LANE0:
                    set_mcu_command_channel_to_receive((1 << MCU_CHANNEL_0) |
                                                       (1 << MCU_CHANNEL_1) |
                                                       (1 << MCU_CHANNEL_2));
                    reg_MCU_DEBUG0_LANE_7_0 = 0x9e;
                    reg_MCU_DEBUG1_LANE_7_0 = ((1 << MCU_CHANNEL_0) |
                                               (1 << MCU_CHANNEL_1) |
                                               (1 << MCU_CHANNEL_2));
                    return ((1 << MCU_CHANNEL_0) |
                            (1 << MCU_CHANNEL_1) |
                            (1 << MCU_CHANNEL_2));
                    break;

                #if SUPPORT_SPD_CFG_4_5
                case MCU_LANE1:
                    if((SPD_CFG == 4) || (SPD_CFG == 5)) {
                        set_mcu_command_channel_to_receive((1 << MCU_CHANNEL_0) |
                                                           (1 << MCU_CHANNEL_1) |
                                                           (1 << MCU_CHANNEL_2));
                        reg_MCU_DEBUG0_LANE_7_0 = 0x9e;
                        reg_MCU_DEBUG1_LANE_7_0 = ((1 << MCU_CHANNEL_0) |
                                                   (1 << MCU_CHANNEL_1) |
                                                   (1 << MCU_CHANNEL_2));
                        return ((1 << MCU_CHANNEL_0) |
                                (1 << MCU_CHANNEL_1) |
                                (1 << MCU_CHANNEL_2));
                    }
                    break;

                case MCU_LANE2:
                    if((SPD_CFG == 4) || (SPD_CFG == 5)) {
                        set_mcu_command_channel_to_receive((1 << MCU_CHANNEL_2));
                        return (1 << MCU_CHANNEL_2);
                    }
                    break;
                #endif
            }
            break;

        default:
            break;
    }

    set_mcu_command_channel_to_receive(0);
    return 0;
}

uint8_t pll_get_lane_bit_map(const uint8_t channel_send_bit_map) {

    uint8_t lane_bit_map = 0;

    if((SPD_CFG == 2) || (SPD_CFG == 3)) {
        if(channel_send_bit_map & (1 << MCU_CHANNEL_0)) {
            lane_bit_map |= (1 << MCU_LANE1);
        }
    }
    #if SUPPORT_SPD_CFG_4_5
    else if((SPD_CFG == 4) || (SPD_CFG == 5)) {
        if(channel_send_bit_map & (1 << MCU_CHANNEL_0)) {
            lane_bit_map |= (1 << MCU_LANE0);
        }
    }
    #endif

    if(channel_send_bit_map & (1 << MCU_CHANNEL_1)) {
        lane_bit_map |= (1 << MCU_LANE2);
    }

    if(channel_send_bit_map & (1 << MCU_CHANNEL_2)) {
        lane_bit_map |= (1 << MCU_LANE3);
    }

    return lane_bit_map;
}
#endif //#ifdef PLL_SHARING_ROUTE

bool pll_access_allowed(const enum pll_rs_or_ts rs_or_ts) BANKING_CTRL {

	#ifdef PLL_SHARING_ROUTE
    const uint8_t local_mcu_ctrl_pll_lane = lnx_MCU_CTRL_PLL_LANE_1_0;

    if(local_mcu_ctrl_pll_lane == 0) {
        return false;
    }

    if(local_mcu_ctrl_pll_lane == 3) {
        return true;
    }

    if(rs_or_ts == PLL__RS_OR_TS__ANY) {
        return true;
    }

    if(rs_or_ts == PLL__RS_OR_TS__RS) {
        switch(local_mcu_ctrl_pll_lane) {
            case 1:
                return true;
                break;
            case 2:
                return false;
                break;
            default:
                return false;
        }
    }
    else if(rs_or_ts == PLL__RS_OR_TS__TS) {
        switch(local_mcu_ctrl_pll_lane) {
            case 1:
                return false;
                break;
            case 2:
                return true;
                break;
            default:
                return false;
        }
    }

    return false;
	#else //#ifdef PLL_SHARING_ROUTE
    return true;
	#endif // #else //#ifdef PLL_SHARING_ROUTE
}

void pll_check_and_execute_if_master() BANKING_CTRL {
	#ifdef PLL_SHARING_ROUTE
    if(pll_is_this_mcu_a_master()) {
        (void) pll_m_handle_event(pll_m_get_master_index_from_mcuid(mcuid),
                                  PLL_MASTER_LANE_COMMAND__CheckIfPLLAccessPending, 0, 0, 0);
    }
	#endif // #ifdef PLL_SHARING_ROUTE
}

#ifdef PLL_SHARING_ROUTE
void pll_wait_for_valid_command_execute(const uint8_t command, uint8_t channel_receive_bit_map) {

    uint8_t command_found_on_channel;
    uint8_t num_commands_to_receive;
    uint8_t num_commands_found;
    uint8_t received_command;

    command_found_on_channel = 0;
    num_commands_found = 0;

    if(SPD_CFG == 5) {
        num_commands_to_receive = 3;
    }
    else {
        num_commands_to_receive = 1;
    }

    reg_MCU_DEBUG0_LANE_7_0 = 0x11;
    reg_MCU_DEBUG1_LANE_7_0 = command;
    
    while(num_commands_to_receive > 0) {

        if(num_commands_found == 0) {
            //only execute first command
            received_command = mcu_check_and_execute(channel_receive_bit_map,
                                                            &command_found_on_channel);
        }
        else {
            //just clear remaining commands
            received_command = mcu_check_and_clear(channel_receive_bit_map,
                                                           &command_found_on_channel);
        }

        if(MCU_INVALID_COMMAND != received_command) {
            reg_MCU_DEBUG2_LANE_7_0 = received_command;
            reg_MCU_DEBUG3_LANE_7_0 = num_commands_to_receive;
            reg_MCU_DEBUG4_LANE_7_0 = channel_receive_bit_map;
            num_commands_found++;
            channel_receive_bit_map &= ~(1 << command_found_on_channel);
            command_found_on_channel = 0;
            if(num_commands_to_receive > 0) {
                num_commands_to_receive--;
            }
            
        }
    }

    reg_MCU_DEBUG0_LANE_7_0 = 0x14;
}

void pll_wait_for_valid_command(const uint8_t command, uint8_t channel_receive_bit_map) {

    uint8_t command_found_on_channel;
    uint8_t num_commands_to_receive;

    command_found_on_channel = 0;

    if(SPD_CFG == 5) {
        num_commands_to_receive = 3;
    }
    else {
        num_commands_to_receive = 1;
    }

    reg_MCU_DEBUG0_LANE_7_0 = 0x11;
    reg_MCU_DEBUG1_LANE_7_0 = command;
    
    while(num_commands_to_receive > 0) {

        uint8_t received_command = mcu_check_and_clear(channel_receive_bit_map,
                                                       &command_found_on_channel);

        if(MCU_INVALID_COMMAND != received_command) {
            reg_MCU_DEBUG2_LANE_7_0 = received_command;
            reg_MCU_DEBUG3_LANE_7_0 = num_commands_to_receive;
            reg_MCU_DEBUG4_LANE_7_0 = channel_receive_bit_map;
            channel_receive_bit_map &= ~(1 << command_found_on_channel);
            command_found_on_channel = 0;
            if(num_commands_to_receive > 0) {
                num_commands_to_receive--;
            }
            
        }
    }

    reg_MCU_DEBUG0_LANE_7_0 = 0x14;
}
#endif //#ifdef PLL_SHARING_ROUTE

void pll_request_pll_access(const enum PLL_SEQUENCE__SEQUENCES seq) BANKING_CTRL {

    #ifdef _PCIE_BUILD
    if(is_first_time_power_up()) {
        return;
    }
    #endif

	#ifdef PLL_SHARING_ROUTE
    if(pll_is_this_mcu_a_master()) {
        pll_m_handle_event(pll_m_get_master_index_from_mcuid(mcuid),
                           PLL_MASTER_LANE_COMMAND__RequestingPLLAccessForMaster,
                           seq, 0, 0);
    }
    else {
        if((false == pll_access_allowed(PLL__RS_OR_TS__RS)) &&
           (false == pll_access_allowed(PLL__RS_OR_TS__TS))) {
            pll_s_handle_event(mcuid, PLL_SLAVE_LANE_COMMAND__RequestPLLAccess, seq, 0, 0);
        }
    }
	#endif // #ifdef PLL_SHARING_ROUTE
}

void pll_free_pll() BANKING_CTRL {

    #ifdef _PCIE_BUILD
    if(is_first_time_power_up()) {
        return;
    }
    #endif

	#ifdef PLL_SHARING_ROUTE
    if(pll_is_this_mcu_a_master()) {
        pll_m_handle_event(pll_m_get_master_index_from_mcuid(mcuid),
                           PLL_MASTER_LANE_COMMAND__Free,
                           0, 0, 0);
    }
    else {
        if((false == pll_access_allowed(PLL__RS_OR_TS__RS)) &&
           (false == pll_access_allowed(PLL__RS_OR_TS__TS))) {
            pll_s_handle_event(mcuid, PLL_SLAVE_LANE_COMMAND__Free, 0, 0, 0);
        }
    }
	#endif // #ifdef PLL_SHARING_ROUTE
}
