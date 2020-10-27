/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file pll_state.c
* \purpose PLL State Machine
* \History
*   1/7/2020 Andrew Danilovic		Initial Commit
*/

#include "pll_state_hw_interface.h"
#include "pll_state.h"
#include "pll_sharing.h"
#include "mcu_command.h"

#include <stdio.h>

static enum PLL_ACCESS_STATE__STATES      pll_a_current_state_g[PLL_MASTER_LANE_INDICES__NumMasters] = {
    PLL_ACCESS_STATE__Free
};
/*static enum PLL_SLAVE_LANE_STATE__STATES  pll_s_current_state_g[NUM_MCU_LANES] = {*/
    /*PLL_SLAVE_LANE_STATE__Invalid_State*/
/*};*/
static enum PLL_MASTER_LANE_STATE__STATES pll_m_current_state_g[PLL_MASTER_LANE_INDICES__NumMasters] = {
    PLL_MASTER_LANE_STATE__Invalid_State
};
/*static enum PLL_SEQUENCE__SEQUENCES       pll_s__lane_seq__current_sequence[NUM_MCU_LANES] = {*/
    /*PLL_SEQUENCE__Invalid_Seq*/
/*};*/
static enum PLL_SEQUENCE__SEQUENCES       pll_m__lane_seq__current_sequence[PLL_MASTER_LANE_INDICES__NumMasters] = {
    PLL_SEQUENCE__Invalid_Seq
};

static uint8_t pll_s__lane_request_semaphore[NUM_MCU_LANES] = {0};
static uint8_t pll_m__lane_request_semaphore[PLL_MASTER_LANE_INDICES__NumMasters] = {0};

void pll_state_common_init() BANKING_CTRL {
    pll_s__lane_seq__current_sequence[0] = PLL_SEQUENCE__Invalid_Seq;
    pll_s__lane_seq__current_sequence[1] = PLL_SEQUENCE__Invalid_Seq;
    pll_s__lane_seq__current_sequence[2] = PLL_SEQUENCE__Invalid_Seq;
    pll_s__lane_seq__current_sequence[3] = PLL_SEQUENCE__Invalid_Seq;
    pll_s_current_state_g[0] = PLL_SLAVE_LANE_STATE__Invalid_State;
    pll_s_current_state_g[1] = PLL_SLAVE_LANE_STATE__Invalid_State;
    pll_s_current_state_g[2] = PLL_SLAVE_LANE_STATE__Invalid_State;
    pll_s_current_state_g[3] = PLL_SLAVE_LANE_STATE__Invalid_State;
}

void pll_state_lane_init() BANKING_CTRL {
    pll_a_current_state_g[0] = PLL_ACCESS_STATE__Free;
    pll_a_current_state_g[1] = PLL_ACCESS_STATE__Free;
    pll_m_current_state_g[0] = PLL_MASTER_LANE_STATE__Invalid_State;
    pll_m_current_state_g[1] = PLL_MASTER_LANE_STATE__Invalid_State;
    pll_m__lane_seq__current_sequence[0] = PLL_SEQUENCE__Invalid_Seq;
    pll_m__lane_seq__current_sequence[1] = PLL_SEQUENCE__Invalid_Seq;
    pll_s__lane_request_semaphore[0] = 0;
    pll_s__lane_request_semaphore[1] = 0;
    pll_s__lane_request_semaphore[2] = 0;
    pll_s__lane_request_semaphore[3] = 0;
    pll_m__lane_request_semaphore[0] = 0;
    pll_m__lane_request_semaphore[1] = 0;
}

enum PLL_ACCESS_STATE__STATES
pll_a_get_current_state(const enum PLL_MASTER_LANE_INDICES pll_index) BANKING_CTRL {
    return pll_a_current_state_g[pll_index];
}

static void pll_a_set_current_state(const enum PLL_MASTER_LANE_INDICES pll_index,
                                    const enum PLL_ACCESS_STATE__STATES state) BANKING_CTRL {
    pll_a_current_state_g[pll_index] = state;
}

enum PLL_REQUEST_ACCESS_RETURN_CODES
pll_a_handle_event(const enum PLL_MASTER_LANE_INDICES pll_index,
                   const enum PLL_ACCESS_COMMAND__COMMANDS command) BANKING_CTRL {

    enum PLL_REQUEST_ACCESS_RETURN_CODES ret = PLL_REQUEST_RETURN_CODE__Invalid_Code;
    const enum PLL_ACCESS_STATE__STATES current_state = pll_a_get_current_state(pll_index);
    uint8_t channel_responsible_bit_map = 0;
    uint8_t channel_command_pending_bit_map = 0;
    uint8_t lane_command_pending_bit_map = 0;
    uint8_t loop_index = 0;
 
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
	                delay(T_10us);
                    reg_MCU_DEBUG0_LANE_7_0 = 0x92;

                    //Check which lanes are requesting PLL access, and determine each lanes return code

                    /*printf("PLL_ACCESS_STATE__Free, PLL_ACCESS_COMMAND__RequestPLLAccess\n");*/
                    channel_responsible_bit_map = pll_get_mcu_command_channel_receive(pll_m_get_mcuid_from_master_index(pll_index));

                    //Only look for PLL requests, and once found, do not consider any other commands from any other lane.
                    //i.e. this is the atomic "snapshot" of PLL requests from which we will make our decision on who
                    //participates in the requested PLL sequence
                    channel_command_pending_bit_map = mcu_get_channel_pending(channel_responsible_bit_map,
                                                                              MCU_REQUEST_PLL_ACCESS);
                    lane_command_pending_bit_map = pll_get_lane_bit_map(channel_command_pending_bit_map);
                    reg_MCU_DEBUG1_LANE_7_0 = channel_responsible_bit_map;
                    reg_MCU_DEBUG2_LANE_7_0 = lane_command_pending_bit_map;
                    reg_MCU_DEBUG3_LANE_7_0 = pll_s_current_state_g[MCU_LANE0];
                    reg_MCU_DEBUG4_LANE_7_0 = pll_s_current_state_g[MCU_LANE1];
                    reg_MCU_DEBUG5_LANE_7_0 = pll_s_current_state_g[MCU_LANE2];
                    reg_MCU_DEBUG6_LANE_7_0 = pll_s_current_state_g[MCU_LANE3];

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
                    /*printf("channel_responsible_bit_map: 0x%08x\n", channel_responsible_bit_map);*/
                    /*printf("lane_command_pending_bit_map: 0x%08x\n", lane_command_pending_bit_map);*/

                    if(PLL_MASTER_LANE_STATE__RequestingPLLAccess == 
                        pll_m_get_current_state((enum PLL_MASTER_LANE_INDICES)pll_index)) {
                    
                        reg_MCU_DEBUG0_LANE_7_0 = 0x93;
                        if(pll_s_any_lane_in_state(lane_command_pending_bit_map,
                                                   PLL_SLAVE_LANE_STATE__InUse)) {
                            //TODO: Handle master request while slave is using PLL
                            /*printf("Master is requesting access while slave is using PLL\n");*/
                            reg_MCU_DEBUG0_LANE_7_0 = 0x94;
                        }
                        else if(pll_s_any_lane_in_state(lane_command_pending_bit_map,
                                                        PLL_SLAVE_LANE_STATE__RequestingPLLAccess)) {
                            /*printf("Master and slave are requesting access\n");*/
                            reg_MCU_DEBUG0_LANE_7_0 = 0x95;
                            //TODO: Check slave AND master lanes to ensure all are in the same sequence!
                            if(pll_s_all_lanes_in_same_seq(lane_command_pending_bit_map)) {
                                //TODO: Handle case when there are multiple slaves all wanting to perform the same sequence
                                reg_MCU_DEBUG0_LANE_7_0 = 0x96;
                                for(loop_index = 0; loop_index < MCU_NUM_CHANNELS; loop_index++) {
                                    (void) mcu_check_and_execute_return(channel_command_pending_bit_map,
                                                                        PLL_REQUEST_RETURN_CODE__SyncPLLAccess);
                                }
                            }
                            else {
                                //TODO: pick_one_sequence_and_let_all_lanes_requesting_that_sequence_send_commands();
                                reg_MCU_DEBUG0_LANE_7_0 = 0x97;
                            }
                            ret = PLL_REQUEST_RETURN_CODE__SyncPLLAccess;
                        }
                        else {
                            //Only master wants the PLL
                            /*printf("Only master is requesting access\n");*/

                            reg_MCU_DEBUG0_LANE_7_0 = 0x98;
                            ret = PLL_REQUEST_RETURN_CODE__PerformPLLAccess;
                        }

                    }
                    else {
                        //only slaves want the PLL

                        reg_MCU_DEBUG0_LANE_7_0 = 0x99;
                        if(pll_s_any_lane_in_state(lane_command_pending_bit_map,
                                                                   PLL_SLAVE_LANE_STATE__InUse)) {
                            /*tell_requesters_to_skip();*/
                            reg_MCU_DEBUG0_LANE_7_0 = 0x9a;
                        }
                        else {
                            if(pll_s_all_lanes_in_same_seq(lane_command_pending_bit_map)) {
                                //TODO: Handle case when there are multiple slaves all wanting to perform the same sequence
                                reg_MCU_DEBUG0_LANE_7_0 = 0x9b;
                                for(loop_index = 0; loop_index < MCU_NUM_CHANNELS; loop_index++) {
                                    (void) mcu_check_and_execute_return(channel_command_pending_bit_map,
                                                                                           PLL_REQUEST_RETURN_CODE__SendPLLAccessCommands);
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
pll_s_get_current_state(const uint8_t lane_index) BANKING_CTRL {
    return pll_s_current_state_g[lane_index];
}

static void pll_s_set_state(const uint8_t lane_index,
                            const enum PLL_SLAVE_LANE_STATE__STATES state) BANKING_CTRL {

    reg_MCU_DEBUG0_LANE_7_0 = 0x77;
    reg_MCU_DEBUG1_LANE_7_0 = lane_index;
    reg_MCU_DEBUG2_LANE_7_0 = state;

    /*printf("--pll_s_set_state, lane_index:%d, state:0x%02x\n", lane_index, state);*/
    pll_s_current_state_g[lane_index] = state;
}

enum PLL_REQUEST_ACCESS_RETURN_CODES
pll_s_handle_event(const uint8_t lane_index,
                   const enum PLL_SLAVE_LANE_COMMAND__COMMANDS command,
                   const uint8_t data1) BANKING_CTRL {

    enum PLL_REQUEST_ACCESS_RETURN_CODES ret = PLL_REQUEST_RETURN_CODE__Invalid_Code;
    const enum PLL_SLAVE_LANE_STATE__STATES current_state = pll_s_get_current_state(lane_index);
    uint8_t mcu_command_ret = 0;
    
    reg_MCU_DEBUG0_LANE_7_0 = 0x78;
    reg_MCU_DEBUG1_LANE_7_0 = lane_index;
    reg_MCU_DEBUG2_LANE_7_0 = command;
    reg_MCU_DEBUG3_LANE_7_0 = data1;

    switch (current_state) {
        case PLL_SLAVE_LANE_STATE__InUse:
        case PLL_SLAVE_LANE_STATE__Invalid_State:
            switch (command) {
                case PLL_SLAVE_LANE_COMMAND__RequestPLLAccess:
                    /*printf("PLL_SLAVE_LANE_STATE__Invalid_State, PLL_SLAVE_LANE_COMMAND__RequestPLLAccess\n");*/
                    pll_s__lane_seq__current_sequence[lane_index] = (enum PLL_SEQUENCE__SEQUENCES)data1;
                    pll_s_set_state(lane_index, PLL_SLAVE_LANE_STATE__RequestingPLLAccess);
                    mcu_command_ret = mcu_send_and_wait_ret(pll_which_mcu_command_channel_to_send(lane_index),
                                                            MCU_REQUEST_PLL_ACCESS);
                    /*printf("mcu_command_ret = 0x%02x\n", mcu_command_ret);*/
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
                    /*printf("PLL_SLAVE_LANE_STATE__InUseSendPLLAccessCommands, PLL_SLAVE_LANE_COMMAND__RequestPLLAccess\n");*/
                    ret = PLL_REQUEST_RETURN_CODE__SendPLLAccessCommands;
                    pll_s__lane_request_semaphore[lane_index]++;
                    break;

                case PLL_SLAVE_LANE_COMMAND__PllAccessCommand:
                    /*printf("PLL_SLAVE_LANE_STATE__InUseSendPLLAccessCommands, PLL_SLAVE_LANE_COMMAND__PllAccessCommand\n");*/
                    mcu_send_and_wait(pll_which_mcu_command_channel_to_send(lane_index),
                                               data1);
                    break;

                case PLL_SLAVE_LANE_COMMAND__Free:
                    /*printf("PLL_SLAVE_LANE_STATE__InUseSendPLLAccessCommands, PLL_SLAVE_LANE_COMMAND__Free, pll_s__lane_request_semaphore:0x%02x\n", pll_slave_lane_request_semaphore[lane_index]);*/
                    if(pll_s__lane_request_semaphore[lane_index] > 0) {
                        pll_s__lane_request_semaphore[lane_index]--;
                    }
    
                    if(pll_s__lane_request_semaphore[lane_index] == 0) {
                        mcu_send_and_wait(pll_which_mcu_command_channel_to_send(lane_index),
                                                   MCU_FREE_PLL);
                        pll_s_set_state(lane_index, PLL_SLAVE_LANE_STATE__InUse);
                    }
                    break;
            }
            break;
    }

    return ret;
}

enum PLL_MASTER_LANE_STATE__STATES
pll_m_get_current_state(const enum PLL_MASTER_LANE_INDICES master_index) BANKING_CTRL {
    return pll_m_current_state_g[master_index];
}

static void pll_m_set_state(const uint8_t master_index,
                            const enum PLL_MASTER_LANE_STATE__STATES state) BANKING_CTRL {

    reg_MCU_DEBUG0_LANE_7_0 = 0x79;
    reg_MCU_DEBUG1_LANE_7_0 = master_index;
    reg_MCU_DEBUG2_LANE_7_0 = state;

    /*printf("**pll_m_set_state, master_index:%d, state:0x%02x\n", master_index, state);*/
    pll_m_current_state_g[master_index] = state;
}

bool pll_s_any_lane_in_state(const uint8_t lane_bit_map,
                             const enum PLL_SLAVE_LANE_STATE__STATES state) BANKING_CTRL {
    return ( ((lane_bit_map & (1 << MCU_LANE0)) && pll_s_current_state_g[MCU_LANE0] == state) ||
             ((lane_bit_map & (1 << MCU_LANE1)) && pll_s_current_state_g[MCU_LANE1] == state) ||
             ((lane_bit_map & (1 << MCU_LANE2)) && pll_s_current_state_g[MCU_LANE2] == state) ||
             ((lane_bit_map & (1 << MCU_LANE3)) && pll_s_current_state_g[MCU_LANE3] == state) );

}

bool pll_s_all_lanes_in_same_seq(const uint8_t lane_bit_map) BANKING_CTRL {

    enum PLL_SEQUENCE__SEQUENCES seq = PLL_SEQUENCE__NeverAssigned;
    uint8_t lane_index = 0;
    bool same = true;

    for(lane_index = 0; lane_index < NUM_MCU_LANES; lane_index++) {
        if((1 << lane_index) & lane_bit_map) {
            if(seq == PLL_SEQUENCE__NeverAssigned) {
                seq = pll_s__lane_seq__current_sequence[lane_index];
            }
            else {
                if(seq != pll_s__lane_seq__current_sequence[lane_index]) {
                    same = false;
                    break;
                }
            }
        }
    }

    /*printf("pll_s_all_lanes_in_same_seq, lane_bit_map:0x%02x, same:%d\n", lane_bit_map, same);*/
    return same;
}

static void pll_m_request_pll_access(const enum PLL_MASTER_LANE_INDICES master_index) BANKING_CTRL {

    /*printf("pll_m_request_pll_access, master_index:0x%02x\n", master_index);*/
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

void static pll_m_request_pll_access_for_master(const enum PLL_MASTER_LANE_INDICES master_index,
                                                                 const enum PLL_SEQUENCE__SEQUENCES pll_sequence) BANKING_CTRL {
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

enum PLL_MASTER_LANE_INDICES pll_m_get_master_index_from_mcuid(const uint8_t mcu_id_local) {
    enum PLL_MASTER_LANE_INDICES master_index = PLL_MASTER_LANE_INDICES__Invalid_Index;
    switch(mcu_id_local) {
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
                   const uint8_t data1) BANKING_CTRL {

    const enum PLL_MASTER_LANE_STATE__STATES current_state = pll_m_get_current_state(master_index);
    uint8_t channel_bit_map = 0;
    uint8_t mcu_command = 0;
    
    /*printf("pll_m_handle_event, master_index:0x%02x, command:0x%02x, current_state:0x%02x, data1:0x%02x\n",*/
        /*master_index, command, current_state, data1);*/
    reg_MCU_DEBUG0_LANE_7_0 = 0x80;
    reg_MCU_DEBUG1_LANE_7_0 = master_index;
    reg_MCU_DEBUG2_LANE_7_0 = command;
    reg_MCU_DEBUG3_LANE_7_0 = data1;
    reg_MCU_DEBUG4_LANE_7_0 = current_state;

    switch (current_state) {
        case PLL_MASTER_LANE_STATE__Invalid_State:
        case PLL_MASTER_LANE_STATE__Free:
            switch (command) {
                case PLL_MASTER_LANE_COMMAND__CheckIfPLLAccessPending:

                    channel_bit_map = pll_get_mcu_command_channel_receive(pll_m_get_mcuid_from_master_index(master_index));
                    /*printf("PLL_MASTER_LANE_STATE__Invalid_State, channel_bit_map:0x%08x\n", channel_bit_map);*/

                    if(mcu_check_pll_access_request(channel_bit_map)) {
                        pll_m_set_state(master_index, PLL_MASTER_LANE_STATE__SlavePLLAccessRequestPending);
                    }

                    break;

                case PLL_MASTER_LANE_COMMAND__RequestingPLLAccessForMaster:
                    /*printf("PLL_MASTER_LANE_STATE__Invalid_State, PLL_MASTER_LANE_COMMAND__RequestingPLLAccessForMaster, data1:0x%02x\n", data1);*/
                    pll_m_request_pll_access_for_master(master_index, (enum PLL_SEQUENCE__SEQUENCES)data1);
                    break;
            }
            break;

        case PLL_MASTER_LANE_STATE__SlavePLLAccessRequestPending:
            switch (command) {

                case PLL_MASTER_LANE_COMMAND__CheckIfPLLAccessPending:
                    /*printf("PLL_MASTER_LANE_COMMAND__CheckIfPLLAccessPending\n");*/
                    pll_m_request_pll_access(master_index);
                    break;

                case PLL_MASTER_LANE_COMMAND__RequestingPLLAccessForMaster:
                    /*printf("PLL_MASTER_LANE_COMMAND__RequestingPLLAccessForMaster\n");*/
                    pll_m_request_pll_access_for_master(master_index, (enum PLL_SEQUENCE__SEQUENCES)data1);
                    break;
            }
            break;

        case PLL_MASTER_LANE_STATE__InUsePerformPllAccess:
            switch (command) {

                case PLL_MASTER_LANE_COMMAND__PllAccessCommand:
                    /*printf("PLL_MASTER_LANE_STATE__InUsePerformPllAccess, PLL_MASTER_LANE_COMMAND__PllAccessCommand, pll_m__lane_request_semaphore:0x%02x, command:0x%02x\n",*/
                        /*pll_m__lane_request_semaphore[master_index], data1);*/
                    mcu_execute(data1, 0, 0);
                    break;

                case PLL_MASTER_LANE_COMMAND__RequestingPLLAccessForMaster:
                    pll_m__lane_request_semaphore[master_index]++;
                    break;

                case PLL_MASTER_LANE_COMMAND__Free:
                    /*printf("PLL_MASTER_LANE_STATE__InUsePerformPllAccess, PLL_MASTER_LANE_COMMAND__Free, pll_m__lane_request_semaphore:0x%02x\n", pll_master_lane_request_semaphore[master_index]);*/
                    if(pll_m__lane_request_semaphore[master_index] > 0) {
                        pll_m__lane_request_semaphore[master_index]--;
                    }

                    if(pll_m__lane_request_semaphore[master_index] == 0) {
                        (void) pll_a_handle_event(master_index, PLL_ACCESS_COMMAND__Free);
                        pll_m_set_state(master_index, PLL_MASTER_LANE_STATE__InUse);
                    }
                    break;
            }
            break;

        case PLL_MASTER_LANE_STATE__InUsePerformPllAccessNoSync:
            switch (command) {

                case PLL_MASTER_LANE_COMMAND__PllAccessCommand:
                    //TODO: Handle PLL Access Commands here 
                    //Actually shouldn't get any pll access commands, since the master would first have to request access
                    break;

                case PLL_MASTER_LANE_COMMAND__CheckIfPLLAccessPending:
                    /*printf("PLL_MASTER_LANE_STATE__InUsePerformPllAccessNoSync, PLL_MASTER_LANE_COMMAND__CheckIfPLLAccessPending\n");*/
                    channel_bit_map = pll_get_mcu_command_channel_receive(pll_m_get_mcuid_from_master_index(master_index));
                    mcu_command = mcu_check_and_execute(channel_bit_map);
                    if(mcu_command == MCU_FREE_PLL) {
                        (void) pll_a_handle_event(master_index, PLL_ACCESS_COMMAND__Free);
                        pll_m_set_state(master_index, PLL_MASTER_LANE_STATE__Free);
                    }
                    break;

                case PLL_MASTER_LANE_COMMAND__RequestingPLLAccessForMaster:
                    /*pll_m_request_pll_access_for_master(data1);*/
                    //TODO: PLL is in use, master needs to wait until slave is done, then can proceed

                    channel_bit_map = pll_get_mcu_command_channel_receive(pll_m_get_mcuid_from_master_index(master_index));
                    mcu_command = mcu_check_and_execute(channel_bit_map);

                    while(mcu_command != MCU_FREE_PLL) {
                        channel_bit_map = pll_get_mcu_command_channel_receive(pll_m_get_mcuid_from_master_index(master_index));
                        mcu_command = mcu_check_and_execute(channel_bit_map);
                    }
                    printf("Helped slave get done first!\n");

                    if(mcu_command == MCU_FREE_PLL) {
                        (void) pll_a_handle_event(master_index, PLL_ACCESS_COMMAND__Free);
                        pll_m_set_state(master_index, PLL_MASTER_LANE_STATE__Free);
                    }

                    pll_m_request_pll_access_for_master(master_index, (enum PLL_SEQUENCE__SEQUENCES)data1);
                    break;
            }
            break;

        case PLL_MASTER_LANE_STATE__InUsePerformPllAccessWithSync:
            switch (command) {

                case PLL_MASTER_LANE_COMMAND__PllAccessCommand:
                    /*printf("PLL_MASTER_LANE_STATE__InUsePerformPllAccessWithSync, PLL_MASTER_LANE_COMMAND__PllAccessCommand, semaphore:0x%02x\n", pll_m__lane_request_semaphore[master_index]);*/
                    //TODO: Perform the actual PLL command on behalf of the slave!
                    mcu_execute(data1, 0, 0);
                    channel_bit_map = pll_get_mcu_command_channel_receive(pll_m_get_mcuid_from_master_index(master_index));
                    pll_wait_for_valid_command(data1, channel_bit_map);
                    break;

                case PLL_MASTER_LANE_COMMAND__CheckIfPLLAccessPending:
                    //Don't check these as we are in the middle of a master/slave PLL sequence
                    break;

                case PLL_MASTER_LANE_COMMAND__RequestingPLLAccessForMaster:
                    pll_m__lane_request_semaphore[master_index]++;
                    break;

                case PLL_MASTER_LANE_COMMAND__Free:
                    /*printf("PLL_MASTER_LANE_STATE__InUsePerformPllAccessWithSync, PLL_MASTER_LANE_COMMAND__Free, semaphore:0x%02x\n", pll_m__lane_request_semaphore[master_index]);*/
                    if(pll_m__lane_request_semaphore[master_index] > 0) {
                        pll_m__lane_request_semaphore[master_index]--;
                    }

                    if(pll_m__lane_request_semaphore[master_index] == 0) {
                        channel_bit_map = pll_get_mcu_command_channel_receive(pll_m_get_mcuid_from_master_index(master_index));
                        pll_wait_for_valid_command(data1, channel_bit_map);
                        (void) pll_a_handle_event(master_index, PLL_ACCESS_COMMAND__Free);
                        pll_m_set_state(master_index, PLL_MASTER_LANE_STATE__Free);
                    }
                    break;
            }
            break;

        case PLL_MASTER_LANE_STATE__InUse:
            switch (command) {
                case PLL_MASTER_LANE_COMMAND__CheckIfPLLAccessPending:

                    channel_bit_map = pll_get_mcu_command_channel_receive(pll_m_get_mcuid_from_master_index(master_index));

                    if(mcu_check_pll_access_request(channel_bit_map)) {
                        pll_m_set_state(master_index, PLL_MASTER_LANE_STATE__SlavePLLAccessRequestPending);
                    }

                    break;

                case PLL_MASTER_LANE_COMMAND__RequestingPLLAccessForMaster:
                    pll_m_request_pll_access_for_master(master_index, (enum PLL_SEQUENCE__SEQUENCES)data1);
                    break;
            }
            break;
    }
}
