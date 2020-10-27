/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file pll_state.c
* \purpose PLL State Machine
* \History
*   1/7/2020 Andrew Danilovic		Initial Commit
*/

#include "common.h"
#include "drv_pll.h"
#include "pll_state.h"
#include "pll_sharing.h"
#include "mcu_command.h"

// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg BANK2
#endif

#ifdef PLL_SHARING_ROUTE
static enum PLL_ACCESS_STATE__STATES      pll_a_current_state_g[PLL_MASTER_LANE_INDICES__NumMasters] = {
    PLL_ACCESS_STATE__Free
};

static enum PLL_MASTER_LANE_STATE__STATES pll_m_current_state_g[PLL_MASTER_LANE_INDICES__NumMasters] = {
    PLL_MASTER_LANE_STATE__Invalid_State
};

enum PLL_SEQUENCE__SEQUENCES       pll_m__lane_seq__current_sequence[PLL_MASTER_LANE_INDICES__NumMasters] = {
    PLL_SEQUENCE__Invalid_Seq
};

static uint8_t pll_s__lane_request_semaphore[NUM_MCU_LANES] = {0};
static uint8_t pll_m__lane_request_semaphore[PLL_MASTER_LANE_INDICES__NumMasters] = {0};
static bool pll_m__pll_in_use = false;

static void pll_s_set_state_xdata(const uint8_t lane_index,
                                  const enum PLL_SLAVE_LANE_STATE__STATES state) BANKING_CTRL {
    switch(lane_index) {
        case 0:
            cmx_PLL_SLAVE_CURRENT_STATE_S0_7_0 = (uint8_t)state;
            break;
        case 1:
            cmx_PLL_SLAVE_CURRENT_STATE_S1_7_0 = (uint8_t)state;
            break;
        case 2:
            cmx_PLL_SLAVE_CURRENT_STATE_S2_7_0 = (uint8_t)state;
            break;
        case 3:
            cmx_PLL_SLAVE_CURRENT_STATE_S3_7_0 = (uint8_t)state;
            break;
    }
}

static enum PLL_SLAVE_LANE_STATE__STATES pll_s_get_state_xdata(const uint8_t lane_index) {
    uint8_t ret = 0;
    switch(lane_index) {
        case 0:
            ret = cmx_PLL_SLAVE_CURRENT_STATE_S0_7_0;
            break;
        case 1:
            ret = cmx_PLL_SLAVE_CURRENT_STATE_S1_7_0;
            break;
        case 2:
            ret = cmx_PLL_SLAVE_CURRENT_STATE_S2_7_0;
            break;
        case 3:
            ret = cmx_PLL_SLAVE_CURRENT_STATE_S3_7_0;
            break;
    }
    return ret;
}

static void pll_s_set_seq_xdata(const uint8_t lane_index,
                                const enum PLL_SEQUENCE__SEQUENCES seq) {
    switch(lane_index) {
        case 0:
            cmx_PLL_SLAVE_CURRENT_SEQUENCE_S0_7_0 = (uint8_t)seq;
            break;
        case 1:
            cmx_PLL_SLAVE_CURRENT_SEQUENCE_S1_7_0 = (uint8_t)seq;
            break;
        case 2:
            cmx_PLL_SLAVE_CURRENT_SEQUENCE_S2_7_0 = (uint8_t)seq;
            break;
        case 3:
            cmx_PLL_SLAVE_CURRENT_SEQUENCE_S3_7_0 = (uint8_t)seq;
            break;
    }
}

void pll_state_lane_init(const uint8_t mcuid_local) BANKING_CTRL {
    
    uint8_t array_index = mcuid_local;

    if(pll_is_this_mcu_a_master()) {
        array_index = pll_m_get_master_index_from_mcuid(mcuid_local);
        pll_a_current_state_g[array_index] = PLL_ACCESS_STATE__Free;
        pll_m_current_state_g[array_index] = PLL_MASTER_LANE_STATE__Invalid_State;
        pll_m__lane_seq__current_sequence[array_index] = PLL_SEQUENCE__Invalid_Seq;
        pll_m__lane_request_semaphore[array_index] = 0;
        pll_m__pll_in_use = false;
    }
    else if(pll_is_this_mcu_a_slave()) {
        pll_s__lane_request_semaphore[array_index] = 0;
        pll_s_set_state_xdata(array_index, PLL_SLAVE_LANE_STATE__Invalid_State);
        pll_s_set_seq_xdata(array_index, PLL_SEQUENCE__Invalid_Seq);
    }
    else {
        pll_s_set_state_xdata(array_index, PLL_SLAVE_LANE_STATE__WillNeverNeedMaster);
    }
}

enum PLL_ACCESS_STATE__STATES
pll_a_get_current_state(const enum PLL_MASTER_LANE_INDICES pll_index) {
    return pll_a_current_state_g[pll_index];
}

static void pll_a_set_current_state(const enum PLL_MASTER_LANE_INDICES pll_index,
                                    const enum PLL_ACCESS_STATE__STATES state) {
    pll_a_current_state_g[pll_index] = state;
}

enum PLL_REQUEST_ACCESS_RETURN_CODES
pll_a_handle_event(const enum PLL_MASTER_LANE_INDICES pll_index,
                   const enum PLL_ACCESS_COMMAND__COMMANDS command) {

    enum PLL_REQUEST_ACCESS_RETURN_CODES ret = PLL_REQUEST_RETURN_CODE__Invalid_Code;
    const enum PLL_ACCESS_STATE__STATES current_state = pll_a_get_current_state(pll_index);
    uint8_t channel_responsible_bit_map = 0;
    uint8_t channel_command_pending_bit_map = 0;
    uint8_t lane_command_pending_bit_map = 0;
    uint8_t loop_index = 0;
    const uint8_t lane_resp_bit_map = pll_get_lane_resp_bit_map(mcuid);
    uint8_t bypass_delay_save = 0;
    uint8_t bypass_power_on_delay_save = 0;
 
    reg_MCU_DEBUG0_LANE_7_0 = 0x90;
    reg_MCU_DEBUG1_LANE_7_0 = pll_index;
    reg_MCU_DEBUG2_LANE_7_0 = command;
    reg_MCU_DEBUG3_LANE_7_0 = current_state;

    switch (current_state) {
        case PLL_ACCESS_STATE__Free:
            switch (command) {
                case PLL_ACCESS_COMMAND__RequestPLLAccess:
                    //Read all lane signals and states and determine who should have access and how.
                    //Pop all request PLL access commands off the command queues, and respond to them.
                    //Give a return code to the Master MCU so it knows what to do.
                    /*pll_access_request_semaphore++;*/

                    reg_MCU_DEBUG0_LANE_7_0 = 0x91;
                    bypass_delay_save = BYPASS_DELAY;
                    bypass_power_on_delay_save = cmx_BYPASS_POWER_ON_DELAY;
                    BYPASS_DELAY = 0;
                    cmx_BYPASS_POWER_ON_DELAY = 0;
                    delay(T_10us);
                    BYPASS_DELAY = bypass_delay_save;
                    cmx_BYPASS_POWER_ON_DELAY = bypass_power_on_delay_save;
                    reg_MCU_DEBUG0_LANE_7_0 = 0x92;

                    //Check which lanes are requesting PLL access, and determine each lanes return code

                    channel_responsible_bit_map = pll_get_mcu_command_channel_to_receive(pll_m_get_mcuid_from_master_index(pll_index));

                    //Only look for PLL requests, and once found, do not consider any other commands from any other lane.
                    //i.e. this is the atomic "snapshot" of PLL requests from which we will make our decision on who
                    //participates in the requested PLL sequence
                    channel_command_pending_bit_map = mcu_get_channel_pending(channel_responsible_bit_map,
                                                                              MCU_REQUEST_PLL_ACCESS);
                    lane_command_pending_bit_map = pll_get_lane_bit_map(channel_command_pending_bit_map);
                    reg_MCU_DEBUG1_LANE_7_0 = channel_responsible_bit_map;
                    reg_MCU_DEBUG2_LANE_7_0 = lane_command_pending_bit_map;
                    reg_MCU_DEBUG3_LANE_7_0 = cmx_PLL_SLAVE_CURRENT_STATE_S0_7_0;
                    reg_MCU_DEBUG4_LANE_7_0 = cmx_PLL_SLAVE_CURRENT_STATE_S1_7_0;
                    reg_MCU_DEBUG5_LANE_7_0 = cmx_PLL_SLAVE_CURRENT_STATE_S2_7_0;
                    reg_MCU_DEBUG6_LANE_7_0 = cmx_PLL_SLAVE_CURRENT_STATE_S3_7_0;

                    /*reg_MCU_DEBUG0_LANE_7_0 = 0x9e;*/

                    /*pll_s_current_state_g[MCU_LANE0] = 0x1;*/
                    /*pll_s_current_state_g[MCU_LANE1] = 0x2;*/
                    /*pll_s_current_state_g[MCU_LANE2] = 0x3;*/
                    /*pll_s_current_state_g[MCU_LANE3] = 0x4;*/

                    /*reg_MCU_DEBUG0_LANE_7_0 = 0x9f;*/
                    /*reg_MCU_DEBUG3_LANE_7_0 = pll_s_current_state_g[MCU_LANE0];*/
                    /*reg_MCU_DEBUG4_LANE_7_0 = pll_s_current_state_g[MCU_LANE1];*/
                    /*reg_MCU_DEBUG5_LANE_7_0 = pll_s_current_state_g[MCU_LANE2];*/
                    /*reg_MCU_DEBUG6_LANE_7_0 = pll_s_current_state_g[MCU_LANE3];*/

                    if(PLL_MASTER_LANE_STATE__RequestingPLLAccess == 
                        pll_m_get_current_state((enum PLL_MASTER_LANE_INDICES)pll_index)) {
                   
                        //Master is requesting pll access
 
                        reg_MCU_DEBUG0_LANE_7_0 = 0x93;
                        /*#ifdef _PCIE_BUILD*/
                        /*//For PCIe, wait for slave lane to be ready to perform speed change as well*/
                        /*if(pll_m__lane_seq__current_sequence[master_index] == PLL_SEQUENCE__SpeedChange) {*/
                            /*while(!pll_s_any_lane_in_state(lane_resp_bit_map,*/
                                                           /*PLL_SLAVE_LANE_STATE__RequestingPLLAccess)) {*/
                                /*;*/
                            /*}         */
                        /*}*/
                        /*#endif*/

                        if(pll_s_any_lane_in_state(lane_command_pending_bit_map,
                                                   PLL_SLAVE_LANE_STATE__InUse)) {
                            //TODO: Handle master request while slave is using PLL
                            reg_MCU_DEBUG0_LANE_7_0 = 0x94;
                        }
                        else if(pll_s_any_lane_in_state(lane_command_pending_bit_map,
                                                        PLL_SLAVE_LANE_STATE__RequestingPLLAccess)) {

                            //Slaves are also requesting pll access

                            reg_MCU_DEBUG0_LANE_7_0 = 0x95;
                            if(pll_all_lanes_in_same_seq(lane_command_pending_bit_map, pll_index)) {

                                //All slaves and master are requesting the same sequence

                                reg_MCU_DEBUG0_LANE_7_0 = 0x96;

                                for(loop_index = 0; loop_index < MCU_NUM_CHANNELS; loop_index++) {
                                    (void) mcu_check_and_execute_return(channel_command_pending_bit_map,
                                                                        PLL_REQUEST_RETURN_CODE__SyncPLLAccess,
                                                                        loop_index);
                                }

                                ret = PLL_REQUEST_RETURN_CODE__SyncPLLAccess;
                            }
                            else {
            
                                //Slaves and master are requesting different sequences

                                //TODO: pick_one_sequence_and_let_all_lanes_requesting_that_sequence_send_commands();
                                //For now, always let the master go ahead, but this may lead to starvation if master keeps requesting
                                reg_MCU_DEBUG0_LANE_7_0 = 0x97;
                                ret = PLL_REQUEST_RETURN_CODE__PerformPLLAccess;
                            }
                        }
                        else {
                            //Only master is requesting pll access

                            reg_MCU_DEBUG0_LANE_7_0 = 0x98;
                            ret = PLL_REQUEST_RETURN_CODE__PerformPLLAccess;
                        }

                    }
                    else {
                        //Only slaves are requesting pll access

                        //TODO: Check if master is currently using PLL, and if so, tell slaves to skip

                        reg_MCU_DEBUG0_LANE_7_0 = 0x99;
                        if(pll_any_lane_pll_in_use(lane_command_pending_bit_map,
                                                   pll_index)) {
                            reg_MCU_DEBUG0_LANE_7_0 = 0x9a;
                            for(loop_index = 0; loop_index < MCU_NUM_CHANNELS; loop_index++) {
                                (void) mcu_check_and_execute_return(channel_command_pending_bit_map,
                                                                    PLL_REQUEST_RETURN_CODE__SkipPLLAccess,
                                                                    loop_index);
                            }
                            ret = PLL_REQUEST_RETURN_CODE__SkipPLLAccess;
                        }
                        else {
                            if(pll_all_slave_lanes_in_same_seq(lane_command_pending_bit_map, 0)) {
                                //TODO: Handle case when there are multiple slaves all wanting to perform the same sequence
                                reg_MCU_DEBUG0_LANE_7_0 = 0x9b;
                                for(loop_index = 0; loop_index < MCU_NUM_CHANNELS; loop_index++) {
                                    (void) mcu_check_and_execute_return(channel_command_pending_bit_map,
                                                                        PLL_REQUEST_RETURN_CODE__SendPLLAccessCommands,
                                                                        loop_index);
                                }
                                ret = PLL_REQUEST_RETURN_CODE__SendPLLAccessCommands;
                            }
                            else {
                                //TODO: pick_one_sequence_and_let_all_lanes_requesting_that_sequence_send_commands();
                                reg_MCU_DEBUG0_LANE_7_0 = 0x9c;
                            }
                        }
                    }
    
                    //Send all lane return codes

                    reg_MCU_DEBUG0_LANE_7_0 = 0x9d;
                    pll_a_set_current_state(pll_index, PLL_ACCESS_STATE__InUse);

                    break;
            }
            break;

        case PLL_ACCESS_STATE__InUse:
            reg_MCU_DEBUG0_LANE_7_0 = 0x9e;
            switch (command) {
                case PLL_ACCESS_COMMAND__RequestPLLAccess:
                    ret = PLL_REQUEST_RETURN_CODE__RequestAccessRejected_InUse;
                    break;

                case PLL_ACCESS_COMMAND__Free:
                    ret = PLL_REQUEST_RETURN_CODE__PLLFree;
                    pll_a_set_current_state(pll_index, PLL_ACCESS_STATE__Free);
                    break;
            }
            break;
    }

    return ret;

}

enum PLL_SLAVE_LANE_STATE__STATES
pll_s_get_current_state(const uint8_t lane_index) {
    return pll_s_get_state_xdata(lane_index);
}

enum PLL_SEQUENCE__SEQUENCES pll_s_get_current_seq(const uint8_t slave_lane_index) {
    uint8_t ret = 0;
    switch(slave_lane_index) {
        case 0:
            ret = cmx_PLL_SLAVE_CURRENT_SEQUENCE_S0_7_0;
            break;
        case 1:
            ret = cmx_PLL_SLAVE_CURRENT_SEQUENCE_S1_7_0;
            break;
        case 2:
            ret = cmx_PLL_SLAVE_CURRENT_SEQUENCE_S2_7_0;
            break;
        case 3:
            ret = cmx_PLL_SLAVE_CURRENT_SEQUENCE_S3_7_0;
            break;
    }
    return ret;
}

void pll_s_set_current_seq(const uint8_t slave_lane_index,
                           const enum PLL_SEQUENCE__SEQUENCES seq) {
    pll_s_set_seq_xdata(slave_lane_index, seq);
}

static void pll_s_set_state(const uint8_t lane_index,
                            const enum PLL_SLAVE_LANE_STATE__STATES state) {

    reg_MCU_DEBUG0_LANE_7_0 = 0x77;
    reg_MCU_DEBUG1_LANE_7_0 = lane_index;
    reg_MCU_DEBUG2_LANE_7_0 = state;

    pll_s_set_state_xdata(lane_index, state);
}

/*uint8_t pll_s_get_mcuid_from_slave_index(const enum PLL_SLAVE_LANE_INDICES slave_index) BANKING_CTRL {*/
    /*uint8_t mcuid_local = 0;*/
    /*switch(slave_index) {*/
        /*case PLL_SLAVE_LANE_INDICES__Slave0:*/
            /*mcuid_local = MCU_LANE1;*/
            /*break;*/
        /*case PLL_SLAVE_LANE_INDICES__Slave1:*/
            /*mcuid_local = MCU_LANE3;*/
            /*break;*/
        /*case PLL_SLAVE_LANE_INDICES__Slave2:*/
            /*mcuid_local = MCU_LANE2;*/
            /*break;*/
    /*}*/
    /*return mcuid_local;*/
/*}*/

/*enum PLL_SLAVE_LANE_INDICES pll_s_get_slave_index_from_mcuid(const uint8_t mcuid_local) BANKING_CTRL {*/
    /*enum PLL_SLAVE_LANE_INDICES slave_index = PLL_SLAVE_LANE_INDICES__Invalid_Index;*/
    /*switch(mcuid_local) {*/
        /*case MCU_LANE1:*/
            /*slave_index = PLL_SLAVE_LANE_INDICES__Slave0;*/
            /*break;*/
        /*case MCU_LANE2:*/
            /*slave_index = PLL_SLAVE_LANE_INDICES__Slave2;*/
            /*break;*/
        /*case MCU_LANE3:*/
            /*slave_index = PLL_SLAVE_LANE_INDICES__Slave1;*/
            /*break;*/
    /*}*/
    /*return slave_index;*/
/*}*/

static void pll_s_set_state_based_on_seq(const enum PLL_SEQUENCE__SEQUENCES seq,
                                         const uint8_t slave_lane_index) {

    reg_MCU_DEBUG0_LANE_7_0 = 0x12;
    reg_MCU_DEBUG1_LANE_7_0 = seq;
    reg_MCU_DEBUG2_LANE_7_0 = slave_lane_index;

    switch(seq) {
        case PLL_SEQUENCE__Invalid_Seq:                
        case PLL_SEQUENCE__Power_P2:                
        case PLL_SEQUENCE__Power_Slumber:
        case PLL_SEQUENCE__Rx_Soft_Reset:
        case PLL_SEQUENCE__Tx_Soft_Reset:
            pll_s_set_state(slave_lane_index, PLL_SLAVE_LANE_STATE__Free);
            break;

        case PLL_SEQUENCE__PowerUp_Seq:                
        case PLL_SEQUENCE__Calibration:             
        case PLL_SEQUENCE__Calibration_rx:             
        case PLL_SEQUENCE__Calibration_tx:
        case PLL_SEQUENCE__SpeedChange:             
        case PLL_SEQUENCE__SpeedChange_rx:             
        case PLL_SEQUENCE__SpeedChange_tx:
        case PLL_SEQUENCE__Power_P0s_P1:
        case PLL_SEQUENCE__Power_P2_P1:                
        case PLL_SEQUENCE__Power_P1_P0:              
        case PLL_SEQUENCE__Power_Slumber_Wk:   
        case PLL_SEQUENCE__Power_Partial_Slumber_Tx:   
        case PLL_SEQUENCE__Power_Partial_Slumber_Rx:
        case PLL_SEQUENCE__Power_Partial_Slumber_Wk_Tx:
        case PLL_SEQUENCE__Power_Partial_Slumber_Wk_Rx:
        case PLL_SEQUENCE__Rx_Soft_Reset_Release:
        case PLL_SEQUENCE__Tx_Soft_Reset_Release:
            pll_s_set_state(slave_lane_index, PLL_SLAVE_LANE_STATE__InUse);
            break;

        default:
            break;
    }
}

void pll_m_set_state_based_on_seq(const enum PLL_SEQUENCE__SEQUENCES seq,
                                  const uint8_t master_index) {

    reg_MCU_DEBUG0_LANE_7_0 = 0x12;
    reg_MCU_DEBUG1_LANE_7_0 = seq;
    reg_MCU_DEBUG2_LANE_7_0 = master_index;

    switch(seq) {
        case PLL_SEQUENCE__Invalid_Seq:                
        case PLL_SEQUENCE__Power_P2:                
        case PLL_SEQUENCE__Power_Slumber:
            pll_m_set_state(master_index, PLL_MASTER_LANE_STATE__Free);
            pll_m__pll_in_use = false;
            break;

        case PLL_SEQUENCE__PowerUp_Seq:                
        case PLL_SEQUENCE__Calibration:             
        case PLL_SEQUENCE__Calibration_rx:             
        case PLL_SEQUENCE__Calibration_tx:
        case PLL_SEQUENCE__SpeedChange:             
        case PLL_SEQUENCE__SpeedChange_rx:             
        case PLL_SEQUENCE__SpeedChange_tx:
        case PLL_SEQUENCE__Power_P0s_P1:
        case PLL_SEQUENCE__Power_P2_P1:                
        case PLL_SEQUENCE__Power_P1_P0:              
        case PLL_SEQUENCE__Power_Slumber_Wk:   
        case PLL_SEQUENCE__Power_Partial_Slumber_Tx:   
        case PLL_SEQUENCE__Power_Partial_Slumber_Rx:
        case PLL_SEQUENCE__Power_Partial_Slumber_Wk_Tx:
        case PLL_SEQUENCE__Power_Partial_Slumber_Wk_Rx:
            pll_m_set_state(master_index, PLL_MASTER_LANE_STATE__InUse);
            pll_m__pll_in_use = true;
            break;

        default:
            break;
    }
}

enum PLL_REQUEST_ACCESS_RETURN_CODES
pll_s_handle_event(const uint8_t lane_index,
                   const enum PLL_SLAVE_LANE_COMMAND__COMMANDS command,
                   const uint8_t data1,
                   const uint8_t data2,
                   const uint8_t data3) {

    enum PLL_REQUEST_ACCESS_RETURN_CODES ret = PLL_REQUEST_RETURN_CODE__Invalid_Code;
    const enum PLL_SLAVE_LANE_STATE__STATES current_state = pll_s_get_current_state(lane_index);
    uint8_t mcu_command_ret = 0;
    const uint8_t current_seq = pll_s_get_current_seq(lane_index);
    
    reg_MCU_DEBUG0_LANE_7_0 = 0x78;
    reg_MCU_DEBUG1_LANE_7_0 = lane_index;
    reg_MCU_DEBUG2_LANE_7_0 = command;
    reg_MCU_DEBUG3_LANE_7_0 = data1;
    reg_MCU_DEBUG4_LANE_7_0 = current_state;
    reg_MCU_DEBUG5_LANE_7_0 = current_seq;

    switch (current_state) {
        case PLL_SLAVE_LANE_STATE__InUse:
        case PLL_SLAVE_LANE_STATE__Free:
        case PLL_SLAVE_LANE_STATE__Invalid_State:
            switch (command) {
                case PLL_SLAVE_LANE_COMMAND__RequestPLLAccess:
                    pll_s_set_seq_xdata(lane_index, (enum PLL_SEQUENCE__SEQUENCES)data1);
                    pll_s_set_state(lane_index, PLL_SLAVE_LANE_STATE__RequestingPLLAccess);
                    mcu_command_ret = mcu_send_and_wait_ret(pll_get_mcu_command_channel_to_send(lane_index),
                                                            MCU_REQUEST_PLL_ACCESS);
                    ret = (enum PLL_REQUEST_ACCESS_RETURN_CODES)mcu_command_ret;
                    switch(mcu_command_ret) {
                        case PLL_REQUEST_RETURN_CODE__SendPLLAccessCommands:
                            pll_s_set_state(lane_index, PLL_SLAVE_LANE_STATE__InUseSendPLLAccessCommands);
                            break;

                        case PLL_REQUEST_RETURN_CODE__SyncPLLAccess:
                            pll_s_set_state(lane_index, PLL_SLAVE_LANE_STATE__InUseSyncPLLAccess);
                            break;

                        case PLL_REQUEST_RETURN_CODE__SkipPLLAccess:
                            pll_s_set_state(lane_index, PLL_SLAVE_LANE_STATE__InUseSkipPLLAccess);
                            break;

                        default:
                            break;
                    }
                    pll_s__lane_request_semaphore[lane_index]++;
                    break;
            }
            break;

        case PLL_SLAVE_LANE_STATE__InUseSendPLLAccessCommands:
        case PLL_SLAVE_LANE_STATE__InUseSyncPLLAccess:
            switch (command) {
                case PLL_SLAVE_LANE_COMMAND__RequestPLLAccess:
                    ret = PLL_REQUEST_RETURN_CODE__SendPLLAccessCommands;
                    pll_s__lane_request_semaphore[lane_index]++;
                    break;

                case PLL_SLAVE_LANE_COMMAND__PllAccessCommand:
                    mcu_send_and_wait_with_data(pll_get_mcu_command_channel_to_send(lane_index),
                                                data1,
                                                data2,
                                                data3);
                    break;

                case PLL_SLAVE_LANE_COMMAND__Free:
                    if(pll_s__lane_request_semaphore[lane_index] > 0) {
                        pll_s__lane_request_semaphore[lane_index]--;
                    }
    
                    if(pll_s__lane_request_semaphore[lane_index] == 0) {
                        mcu_send_and_wait(pll_get_mcu_command_channel_to_send(lane_index),
                                                   MCU_FREE_PLL);
                        pll_s_set_state_based_on_seq(pll_s_get_current_seq(lane_index), lane_index);
                    }
                    break;
            }
            break;

        case PLL_SLAVE_LANE_STATE__InUseSkipPLLAccess:
            switch (command) {
                case PLL_SLAVE_LANE_COMMAND__RequestPLLAccess:
                    ret = PLL_REQUEST_RETURN_CODE__SendPLLAccessCommands;
                    pll_s__lane_request_semaphore[lane_index]++;
                    break;

                case PLL_SLAVE_LANE_COMMAND__PllAccessCommand:
                    //ignore
                    break;

                case PLL_SLAVE_LANE_COMMAND__Free:
                    if(pll_s__lane_request_semaphore[lane_index] > 0) {
                        pll_s__lane_request_semaphore[lane_index]--;
                    }
    
                    if(pll_s__lane_request_semaphore[lane_index] == 0) {
                        mcu_send_and_wait(pll_get_mcu_command_channel_to_send(lane_index),
                                                   MCU_FREE_PLL);
                        pll_s_set_state_based_on_seq(pll_s_get_current_seq(lane_index), lane_index);
                    }
                    break;
            }
            break;
    }

    return ret;
}

enum PLL_MASTER_LANE_STATE__STATES
pll_m_get_current_state(const enum PLL_MASTER_LANE_INDICES master_index) {
    return pll_m_current_state_g[master_index];
}

void pll_m_set_state(const uint8_t master_index,
                     const enum PLL_MASTER_LANE_STATE__STATES state) {

    reg_MCU_DEBUG0_LANE_7_0 = 0x79;
    reg_MCU_DEBUG1_LANE_7_0 = master_index;
    reg_MCU_DEBUG2_LANE_7_0 = state;

    pll_m_current_state_g[master_index] = state;
}

bool pll_s_any_lane_in_state(const uint8_t lane_bit_map,
                             const enum PLL_SLAVE_LANE_STATE__STATES state) {
    return ( ((lane_bit_map & (1 << MCU_LANE0)) && (cmx_PLL_SLAVE_CURRENT_STATE_S0_7_0 == state)) ||
             ((lane_bit_map & (1 << MCU_LANE1)) && (cmx_PLL_SLAVE_CURRENT_STATE_S1_7_0 == state)) ||
             ((lane_bit_map & (1 << MCU_LANE2)) && (cmx_PLL_SLAVE_CURRENT_STATE_S2_7_0 == state)) ||
             ((lane_bit_map & (1 << MCU_LANE3)) && (cmx_PLL_SLAVE_CURRENT_STATE_S3_7_0 == state)) );

}

bool pll_all_slave_lanes_in_same_seq(const uint8_t slave_lane_bit_map,
                                     enum PLL_SEQUENCE__SEQUENCES *seq_return) {

    enum PLL_SEQUENCE__SEQUENCES seq = PLL_SEQUENCE__NeverAssigned;
    uint8_t lane_index = 0;
    bool same = true;

    for(lane_index = 0; lane_index < NUM_MCU_LANES; lane_index++) {
        if((1 << lane_index) & slave_lane_bit_map) {
            if(seq == PLL_SEQUENCE__NeverAssigned) {
                seq = pll_s_get_current_seq(lane_index);
            }
            else {
                if(seq != pll_s_get_current_seq(lane_index)) {
                    same = false;
                    break;
                }
            }
        }
    }

    if((seq_return != 0) && same) {
        *seq_return = seq;
    }

    return same;
}

bool pll_all_lanes_in_same_seq(const uint8_t slave_lane_bit_map,
                               const uint8_t master_index) {

    bool same = true;
    enum PLL_SEQUENCE__SEQUENCES seq = PLL_SEQUENCE__NeverAssigned;

    if(!pll_all_slave_lanes_in_same_seq(slave_lane_bit_map, &seq)) {
        same = false;
    }

    if(same) {
        if(seq != pll_m__lane_seq__current_sequence[master_index]) {
            same = false;
        } 
    }

    return same;
}

bool pll_any_lane_pll_in_use(const uint8_t slave_lane_bit_map,
                             const uint8_t master_index) {

    int lane_index = 0;

    if(pll_m__pll_in_use == true) {
        return true;
    }

    for(lane_index = 0; lane_index < NUM_MCU_LANES; lane_index++) {
        if((1 << lane_index) & slave_lane_bit_map) {
            if(pll_s_get_current_state(lane_index) == PLL_SLAVE_LANE_STATE__InUse) {
                return true;
            }
        }
    }

    return false;
}

static void pll_m_request_pll_access(const enum PLL_MASTER_LANE_INDICES master_index) {

    enum PLL_REQUEST_ACCESS_RETURN_CODES ret = pll_a_handle_event(master_index, PLL_ACCESS_COMMAND__RequestPLLAccess);

    switch(ret) {
        case PLL_REQUEST_RETURN_CODE__SendPLLAccessCommands:
            //The slave will start sending PLL access commands which the master needs to execute
            pll_m_set_state(master_index, PLL_MASTER_LANE_STATE__InUsePerformPllAccessNoSync);
            break;
        case PLL_REQUEST_RETURN_CODE__SyncPLLAccess:
            //The Master will perform PLL access on it's own and will sync with the slave
            pll_m__lane_request_semaphore[master_index]++;
            pll_m_set_state(master_index, PLL_MASTER_LANE_STATE__InUsePerformPllAccessWithSync);
            break;
        case PLL_REQUEST_RETURN_CODE__PerformPLLAccess:
            //The master will perform all PLL access itself alone
            pll_m__lane_request_semaphore[master_index]++;
            pll_m_set_state(master_index, PLL_MASTER_LANE_STATE__InUsePerformPllAccess);
            break;
        case PLL_REQUEST_RETURN_CODE__SkipPLLAccess:
            //Some lane is using the PLL, so the slave requesting access will skip it's own PLL accesses.
            //But the slave MUST send a free command at some point
            pll_m_set_state(master_index, PLL_MASTER_LANE_STATE__InUseSkipPLLAccess);
            break;
    }
}

static void pll_m_request_pll_access_for_master(const enum PLL_MASTER_LANE_INDICES master_index,
                                                const enum PLL_SEQUENCE__SEQUENCES pll_sequence) {
    pll_m__lane_seq__current_sequence[master_index] = pll_sequence;
    pll_m_set_state(master_index, PLL_MASTER_LANE_STATE__RequestingPLLAccess);
    pll_m_request_pll_access(master_index);
}

uint8_t pll_m_get_mcuid_from_master_index(const enum PLL_MASTER_LANE_INDICES master_index) {
    uint8_t mcuid_local = 0;
    switch(master_index) {
        case PLL_MASTER_LANE_INDICES__Master0:
            mcuid_local = MCU_LANE0;
            break;
        case PLL_MASTER_LANE_INDICES__Master1:
            mcuid_local = MCU_LANE2;
            break;
    }
    return mcuid_local;
}

enum PLL_MASTER_LANE_INDICES pll_m_get_master_index_from_mcuid(const uint8_t mcuid_local) {
    enum PLL_MASTER_LANE_INDICES master_index = PLL_MASTER_LANE_INDICES__Invalid_Index;
    switch(mcuid_local) {
        case MCU_LANE0:
            master_index = PLL_MASTER_LANE_INDICES__Master0;
            break;
        case MCU_LANE2:
            master_index = PLL_MASTER_LANE_INDICES__Master1;
            break;
    }
    return master_index;
}

void
pll_m_handle_event(const enum PLL_MASTER_LANE_INDICES master_index,
                   const enum PLL_MASTER_LANE_COMMAND__COMMANDS command,
                   const uint8_t data1,
                   const uint8_t data2,
                   const uint8_t data3) {

    const enum PLL_MASTER_LANE_STATE__STATES current_state = pll_m_get_current_state(master_index);
    uint8_t channel_bit_map = 0;
    uint8_t mcu_command = 0;
    const uint8_t current_seq = pll_m__lane_seq__current_sequence[master_index];
    
    reg_MCU_DEBUG0_LANE_7_0 = 0x80;
    reg_MCU_DEBUG1_LANE_7_0 = master_index;
    reg_MCU_DEBUG2_LANE_7_0 = command;
    reg_MCU_DEBUG3_LANE_7_0 = data1;
    reg_MCU_DEBUG4_LANE_7_0 = current_state;
    reg_MCU_DEBUG5_LANE_7_0 = current_seq;

    switch (current_state) {
        case PLL_MASTER_LANE_STATE__Invalid_State:
        case PLL_MASTER_LANE_STATE__InUse:
        case PLL_MASTER_LANE_STATE__Free:
            switch (command) {
                case PLL_MASTER_LANE_COMMAND__CheckIfPLLAccessPending:

                    channel_bit_map = pll_get_mcu_command_channel_to_receive(pll_m_get_mcuid_from_master_index(master_index));

                    if(mcu_check_pll_access_request(channel_bit_map)) {
                        pll_m_set_state(master_index, PLL_MASTER_LANE_STATE__SlavePLLAccessRequestPending);
                    }

                    break;

                case PLL_MASTER_LANE_COMMAND__RequestingPLLAccessForMaster:
                    pll_m_request_pll_access_for_master(master_index, (enum PLL_SEQUENCE__SEQUENCES)data1);
                    break;
            }
            break;

        case PLL_MASTER_LANE_STATE__SlavePLLAccessRequestPending:
            switch (command) {

                case PLL_MASTER_LANE_COMMAND__CheckIfPLLAccessPending:
                    pll_m_request_pll_access(master_index);
                    break;

                case PLL_MASTER_LANE_COMMAND__RequestingPLLAccessForMaster:
                    pll_m_request_pll_access_for_master(master_index, (enum PLL_SEQUENCE__SEQUENCES)data1);
                    break;
            }
            break;

        case PLL_MASTER_LANE_STATE__InUsePerformPllAccess:
            switch (command) {

                case PLL_MASTER_LANE_COMMAND__PllAccessCommand:
                    mcu_execute(data1, 0, data2, data3);
                    break;

                case PLL_MASTER_LANE_COMMAND__RequestingPLLAccessForMaster:
                    pll_m__lane_request_semaphore[master_index]++;
                    break;

                case PLL_MASTER_LANE_COMMAND__Free:
                    if(pll_m__lane_request_semaphore[master_index] > 0) {
                        pll_m__lane_request_semaphore[master_index]--;
                    }

                    if(pll_m__lane_request_semaphore[master_index] == 0) {
                        (void) pll_a_handle_event(master_index, PLL_ACCESS_COMMAND__Free);
                        pll_m_set_state_based_on_seq(pll_m__lane_seq__current_sequence[master_index], master_index);
                    }
                    break;
            }
            break;

        case PLL_MASTER_LANE_STATE__InUsePerformPllAccessNoSync:
            switch (command) {

                case PLL_MASTER_LANE_COMMAND__PllAccessCommand:
                    //Shouldn't get any pll access commands, since the master would first have to request access
                    break;

                case PLL_MASTER_LANE_COMMAND__CheckIfPLLAccessPending:
                    channel_bit_map = pll_get_mcu_command_channel_to_receive(pll_m_get_mcuid_from_master_index(master_index));
                    mcu_command = mcu_check_and_execute(channel_bit_map);
                    if(mcu_command == MCU_FREE_PLL) {
                        (void) pll_a_handle_event(master_index, PLL_ACCESS_COMMAND__Free);
                        pll_m_set_state_based_on_seq(pll_m__lane_seq__current_sequence[master_index], master_index);
                    }
                    break;

                case PLL_MASTER_LANE_COMMAND__RequestingPLLAccessForMaster:
                    channel_bit_map = pll_get_mcu_command_channel_to_receive(pll_m_get_mcuid_from_master_index(master_index));
                    mcu_command = mcu_check_and_execute(channel_bit_map);

                    while(mcu_command != MCU_FREE_PLL) {
                        channel_bit_map = pll_get_mcu_command_channel_to_receive(pll_m_get_mcuid_from_master_index(master_index));
                        mcu_command = mcu_check_and_execute(channel_bit_map);
                    }

                    if(mcu_command == MCU_FREE_PLL) {
                        (void) pll_a_handle_event(master_index, PLL_ACCESS_COMMAND__Free);
                    }

                    pll_m_request_pll_access_for_master(master_index, (enum PLL_SEQUENCE__SEQUENCES)data1);
                    break;
            }
            break;

        case PLL_MASTER_LANE_STATE__InUsePerformPllAccessWithSync:
            switch (command) {

                case PLL_MASTER_LANE_COMMAND__PllAccessCommand:
                    mcu_execute(data1, 0, data2, data3);
                    channel_bit_map = pll_get_mcu_command_channel_to_receive(pll_m_get_mcuid_from_master_index(master_index));
                    pll_wait_for_valid_command(data1, channel_bit_map);
                    break;

                case PLL_MASTER_LANE_COMMAND__CheckIfPLLAccessPending:
                    //Don't check these as we are in the middle of a master/slave PLL sequence
                    break;

                case PLL_MASTER_LANE_COMMAND__RequestingPLLAccessForMaster:
                    pll_m__lane_request_semaphore[master_index]++;
                    break;

                case PLL_MASTER_LANE_COMMAND__Free:
                    if(pll_m__lane_request_semaphore[master_index] > 0) {
                        pll_m__lane_request_semaphore[master_index]--;
                    }

                    if(pll_m__lane_request_semaphore[master_index] == 0) {
                        channel_bit_map = pll_get_mcu_command_channel_to_receive(pll_m_get_mcuid_from_master_index(master_index));
                        pll_wait_for_valid_command(data1, channel_bit_map);
                        (void) pll_a_handle_event(master_index, PLL_ACCESS_COMMAND__Free);
                        pll_m_set_state_based_on_seq(pll_m__lane_seq__current_sequence[master_index], master_index);
                    }
                    break;
            }
            break;

        case PLL_MASTER_LANE_STATE__InUseSkipPLLAccess:
            switch (command) {
                case PLL_MASTER_LANE_COMMAND__PllAccessCommand:
                    //Shouldn't get any pll access commands, since the master would first have to request access
                    break;

                case PLL_MASTER_LANE_COMMAND__CheckIfPLLAccessPending:
                    channel_bit_map = pll_get_mcu_command_channel_to_receive(pll_m_get_mcuid_from_master_index(master_index));
                    mcu_command = mcu_check_and_execute(channel_bit_map);
                    if(mcu_command == MCU_FREE_PLL) {
                        (void) pll_a_handle_event(master_index, PLL_ACCESS_COMMAND__Free);
                        pll_m_set_state_based_on_seq(pll_m__lane_seq__current_sequence[master_index], master_index);
                    }
                    break;

                case PLL_MASTER_LANE_COMMAND__RequestingPLLAccessForMaster:
                    channel_bit_map = pll_get_mcu_command_channel_to_receive(pll_m_get_mcuid_from_master_index(master_index));
                    mcu_command = mcu_check_and_execute(channel_bit_map);

                    while(mcu_command != MCU_FREE_PLL) {
                        channel_bit_map = pll_get_mcu_command_channel_to_receive(pll_m_get_mcuid_from_master_index(master_index));
                        mcu_command = mcu_check_and_execute(channel_bit_map);
                    }

                    if(mcu_command == MCU_FREE_PLL) {
                        (void) pll_a_handle_event(master_index, PLL_ACCESS_COMMAND__Free);
                    }

                    pll_m_request_pll_access_for_master(master_index, (enum PLL_SEQUENCE__SEQUENCES)data1);
                    break;

            }
            break;
    }
}
#endif //#ifdef PLL_SHARING_ROUTE
