#include <iostream>
using namespace std;

#include <stdint.h>
#include <stdio.h>
#include <thread>
#include <atomic>

#include "hw_interface.h"
#define BANKING_CTRL

#include "pll_sharing.h"
#include "pll_state.h"
#include "mcu_command.h"

static std::atomic<bool> slave_thread_test_pass(true);
static std::atomic<bool> slave_thread_done(false);
static std::atomic<bool> master_thread_test_pass(true);

void test_init() {
    slave_thread_test_pass.store(true);
    master_thread_test_pass.store(true);
    slave_thread_done.store(false);
    hw_interface__init();
    mcu_init();
    pll_state_common_init();
    pll_state_lane_init();
}

bool test__mcu_command_pll_access_request_pending() {
    test_init();
    bool ok = true;

    if(mcu_check_pll_access_request(0x0) != false) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x1) != false) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x2) != false) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x3) != false) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x4) != false) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x5) != false) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x6) != false) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x7) != false) {
        ok = false;
    }

    mcu_send(MCU_CHANNEL_0, MCU_REQUEST_PLL_ACCESS);
    if(mcu_check_pll_access_request(0x0) != false) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x1) != true) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x2) != false) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x3) != true) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x4) != false) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x5) != true) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x6) != false) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x7) != true) {
        ok = false;
    }

    mcu_init();
    mcu_send(MCU_CHANNEL_1, MCU_REQUEST_PLL_ACCESS);
    if(mcu_check_pll_access_request(0x0) != false) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x1) != false) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x2) != true) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x3) != true) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x4) != false) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x5) != false) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x6) != true) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x7) != true) {
        ok = false;
    }

    mcu_init();
    mcu_send(MCU_CHANNEL_2, MCU_REQUEST_PLL_ACCESS);
    if(mcu_check_pll_access_request(0x0) != false) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x1) != false) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x2) != false) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x3) != false) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x4) != true) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x5) != true) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x6) != true) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x7) != true) {
        ok = false;
    }

    mcu_init();
    mcu_send(MCU_CHANNEL_0, MCU_REQUEST_PLL_ACCESS);
    mcu_send(MCU_CHANNEL_1, MCU_REQUEST_PLL_ACCESS);
    if(mcu_check_pll_access_request(0x0) != false) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x1) != true) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x2) != true) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x3) != true) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x4) != false) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x5) != true) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x6) != true) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x7) != true) {
        ok = false;
    }

    mcu_init();
    mcu_send(MCU_CHANNEL_0, MCU_REQUEST_PLL_ACCESS);
    mcu_send(MCU_CHANNEL_2, MCU_REQUEST_PLL_ACCESS);
    if(mcu_check_pll_access_request(0x0) != false) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x1) != true) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x2) != false) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x3) != true) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x4) != true) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x5) != true) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x6) != true) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x7) != true) {
        ok = false;
    }

    mcu_init();
    mcu_send(MCU_CHANNEL_1, MCU_REQUEST_PLL_ACCESS);
    mcu_send(MCU_CHANNEL_2, MCU_REQUEST_PLL_ACCESS);
    if(mcu_check_pll_access_request(0x0) != false) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x1) != false) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x2) != true) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x3) != true) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x4) != true) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x5) != true) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x6) != true) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x7) != true) {
        ok = false;
    }

    mcu_init();
    mcu_send(MCU_CHANNEL_0, MCU_REQUEST_PLL_ACCESS);
    mcu_send(MCU_CHANNEL_1, MCU_REQUEST_PLL_ACCESS);
    mcu_send(MCU_CHANNEL_2, MCU_REQUEST_PLL_ACCESS);
    if(mcu_check_pll_access_request(0x0) != false) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x1) != true) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x2) != true) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x3) != true) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x4) != true) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x5) != true) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x6) != true) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x7) != true) {
        ok = false;
    }

    printf("\n\ntest__mcu_command_pll_access_request_pending - ok:0x%02x, line:%d\n\n\n", ok, __LINE__);
   return ok; 
}

bool test__mcu_command_get_channel_bit_map_of_command_pending() {
    test_init();
    bool ok = true;

    if(mcu_check_pll_access_request(0x7) != false) {
        ok = false;
    }
    uint8_t bit_map = mcu_get_channel_pending(0x7, MCU_REQUEST_PLL_ACCESS);
    if(bit_map != 0) {
        ok = false;
    }

    mcu_send(MCU_CHANNEL_0, MCU_REQUEST_PLL_ACCESS);
    bit_map = mcu_get_channel_pending(0x7, MCU_REQUEST_PLL_ACCESS);
    if(bit_map != 0x1) {
        ok = false;
    }

    printf("\n\ntest__mcu_command_get_channel_bit_map_of_command_pending - ok:0x%02x, line:%d\n\n\n", ok, __LINE__);
    return ok;
}

bool test__pll_access_state() {
    test_init();

    bool ok = true;
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__Free) {
        ok = false;
    }

    enum PLL_REQUEST_ACCESS_RETURN_CODES ret =
        pll_a_handle_event(PLL_MASTER_LANE_INDICES__Master0,
                                       PLL_ACCESS_COMMAND__Free);
    if(ret != PLL_REQUEST_RETURN_CODE__Invalid_Code) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__Free) {
        ok = false;
    }

    ret = pll_a_handle_event(PLL_MASTER_LANE_INDICES__Master0,
                                         PLL_ACCESS_COMMAND__RequestPLLAccess);
    if(ret != PLL_REQUEST_RETURN_CODE__SendPLLAccessCommands) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__InUse) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master1) != PLL_ACCESS_STATE__Free) {
        ok = false;
    }

    ret = pll_a_handle_event(PLL_MASTER_LANE_INDICES__Master0,
                                         PLL_ACCESS_COMMAND__RequestPLLAccess);
    if(ret != PLL_REQUEST_RETURN_CODE__RequestAccessRejected_InUse) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__InUse) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master1) != PLL_ACCESS_STATE__Free) {
        ok = false;
    }

    ret = pll_a_handle_event(PLL_MASTER_LANE_INDICES__Master1,
                                         PLL_ACCESS_COMMAND__RequestPLLAccess);
    if(ret != PLL_REQUEST_RETURN_CODE__SendPLLAccessCommands) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__InUse) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master1) != PLL_ACCESS_STATE__InUse) {
        ok = false;
    }

    ret = pll_a_handle_event(PLL_MASTER_LANE_INDICES__Master0,
                                         PLL_ACCESS_COMMAND__Free);
    if(ret != PLL_REQUEST_RETURN_CODE__PLLFree) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__Free) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master1) != PLL_ACCESS_STATE__InUse) {
        ok = false;
    }

    ret = pll_a_handle_event(PLL_MASTER_LANE_INDICES__Master1,
                                         PLL_ACCESS_COMMAND__Free);
    if(ret != PLL_REQUEST_RETURN_CODE__PLLFree) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__Free) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master1) != PLL_ACCESS_STATE__Free) {
        ok = false;
    }
    printf("\n\ntest__pll_access_state - ok:0x%02x, line:%d\n\n\n", ok, __LINE__);
    return ok;
}

//bool test__pll_master_state_handle_slave_pll_access_request() {
    //test_init();
    //bool ok = true;

    //reg_SHARE_PLL_MODE_LANE_1_0 = 2;

    //if(mcu_check_pll_access_request(0x7) != false) {
        //ok = false;
    //}
    //if(pll_m_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_MASTER_LANE_STATE__Invalid_State) {
        //ok = false;
    //}
    //if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__Free) {
        //ok = false;
    //}
    
    //mcu_send(MCU_CHANNEL_0, MCU_REQUEST_PLL_ACCESS);

    //if(mcu_check_pll_access_request(0x7) != true) {
        //ok = false;
    //}

    //(void) pll_m_handle_event(PLL_MASTER_LANE_INDICES__Master0,
                                               //PLL_MASTER_LANE_COMMAND__CheckIfPLLAccessPending,
                                               //0);
    //if(pll_m_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_MASTER_LANE_STATE__SlavePLLAccessRequestPending) {
        //printf("Failure, line:%d\n", __LINE__);
        //ok = false;
    //}
    //if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__Free) {
        //printf("Failure, line:%d\n", __LINE__);
        //ok = false;
    //}

    //(void) pll_m_handle_event(PLL_MASTER_LANE_INDICES__Master0,
                                               //PLL_MASTER_LANE_COMMAND__CheckIfPLLAccessPending,
                                               //0);
    //if(pll_m_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_MASTER_LANE_STATE__InUsePerformPllAccessNoSync) {
        //printf("Failure, line:%d\n", __LINE__);
        //ok = false;
    //}
    //if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__InUse) {
        //printf("Failure, line:%d\n", __LINE__);
        //ok = false;
    //}
    ////if(mcu_check_pll_access_request(0x7) != false) {
        ////printf("uhuhuhoohohoh\n");
        ////ok = false;
    ////}

    //(void) pll_m_handle_event(PLL_MASTER_LANE_INDICES__Master0,
                                               //PLL_MASTER_LANE_COMMAND__Free,
                                               //0);
    //if(pll_m_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_MASTER_LANE_STATE__Free) {
        //printf("Failure, line:%d\n", __LINE__);
        //ok = false;
    //}
    //if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__Free) {
        //printf("Failure, line:%d\n", __LINE__);
        //ok = false;
    //}

    //printf("\n\ntest__pll_master_state_handle_slave_pll_access_request - ok:0x%02x, line:%d\n\n\n", ok, __LINE__);
    //return ok;
//}

//bool test__pll_master_state_handle_multiple_slave_pll_access_requests() {
    //test_init();

    //reg_SHARE_PLL_MODE_LANE_1_0 = 2;

    //bool ok = true;
    //if(pll_m_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_MASTER_LANE_STATE__Invalid_State) {
        //ok = false;
    //}
    //if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__Free) {
        //ok = false;
    //}
    
    //mcu_send(MCU_CHANNEL_0, MCU_REQUEST_PLL_ACCESS);
    //mcu_send(MCU_CHANNEL_1, MCU_REQUEST_PLL_ACCESS);

    //(void) pll_m_handle_event(PLL_MASTER_LANE_INDICES__Master0,
                                               //PLL_MASTER_LANE_COMMAND__CheckIfPLLAccessPending,
                                               //0);
    //if(pll_m_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_MASTER_LANE_STATE__SlavePLLAccessRequestPending) {
        //ok = false;
    //}
    //if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__Free) {
        //ok = false;
    //}

    //(void) pll_m_handle_event(PLL_MASTER_LANE_INDICES__Master0,
                                               //PLL_MASTER_LANE_COMMAND__CheckIfPLLAccessPending,
                                               //0);
    //if(pll_m_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_MASTER_LANE_STATE__InUsePerformPllAccessNoSync) {
        //ok = false;
    //}
    //if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__InUse) {
        //ok = false;
    //}

    //(void) pll_m_handle_event(PLL_MASTER_LANE_INDICES__Master0,
                                               //PLL_MASTER_LANE_COMMAND__Free,
                                               //0);
    //if(pll_m_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_MASTER_LANE_STATE__Free) {
        //ok = false;
    //}
    //if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__Free) {
        //ok = false;
    //}

    //printf("\n\ntest__pll_master_state_handle_multiple_slave_pll_access_requests - ok:0x%02x, line:%d\n\n\n", ok, __LINE__);
    //return ok;
//}

void thread1_func() {
    for(int i = 0; i < 1000; i++) {
        mcu_send_and_wait(MCU_CHANNEL_0, MCU_REQUEST_PLL_ACCESS);
    }
}

void thread2_func() {
    uint8_t ret = MCU_INVALID_COMMAND;
    int counter = 0;
    while(1) {
        ret = mcu_check_and_execute((1 << MCU_CHANNEL_0));

        if(ret != MCU_INVALID_COMMAND) {
            counter++;
            ret = MCU_INVALID_COMMAND;
        }

        if(counter >= 1000) {
            printf("All commands received\n");
            break;
        }
    }
}

bool test__mcu_command_send_and_wait_threaded() {
    test_init();

    bool ok = true;

    std::thread slave(thread1_func);
    std::thread master(thread2_func);

    slave.join();
    master.join();

    printf("\n\ntest__mcu_command_send_and_wait_threaded - ok:0x%02x, line:%d\n\n\n", ok, __LINE__);
    return ok;
}

void slave_pll_state_handle_event_multi_request(const uint8_t slave_id) {
    pll_s_handle_event(slave_id, PLL_SLAVE_LANE_COMMAND__RequestPLLAccess, PLL_SEQUENCE__PowerUp_Seq);

    if(pll_s_get_current_state(slave_id) != PLL_SLAVE_LANE_STATE__InUseSendPLLAccessCommands) {
        slave_thread_test_pass.store(false);
        return;
    }

    pll_s_handle_event(slave_id, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_POWER_UP_RS_PLL);
    pll_s_handle_event(slave_id, PLL_SLAVE_LANE_COMMAND__RequestPLLAccess, PLL_SEQUENCE__Calibration);
    pll_s_handle_event(slave_id, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_RESET_INTPRESET_EXT_RS);
    pll_s_handle_event(slave_id, PLL_SLAVE_LANE_COMMAND__Free, 0);
    pll_s_handle_event(slave_id, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_RESET_RS_PLL);
    pll_s_handle_event(slave_id, PLL_SLAVE_LANE_COMMAND__Free, 0);

    if(pll_s_get_current_state(slave_id) != PLL_SLAVE_LANE_STATE__InUse) {
        slave_thread_test_pass.store(false);
        return;
    }
}

void master_pll_state_handle_event_pll_request_exit_slave_in_use(const enum PLL_MASTER_LANE_INDICES master_id, const uint8_t slave_lane_to_exit) {

    while(1) {
        pll_m_handle_event(master_id,
                                            PLL_MASTER_LANE_COMMAND__CheckIfPLLAccessPending,
                                            0);

        if(pll_s_get_current_state(slave_lane_to_exit) == PLL_SLAVE_LANE_STATE__InUse) {
            break;
        }

        if(!slave_thread_test_pass.load()) {
            break;
        }

        std::this_thread::yield();
    }
}

bool test__single_master_one_slave_requests_pll_alone() {
    test_init();
    bool ok = true;

    reg_SHARE_PLL_MODE_LANE_1_0 = 2;

    //Verify initial states
    if(mcu_check_pll_access_request(0x7) != false) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__Free) {
        ok = false;
    }
    if(pll_m_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_MASTER_LANE_STATE__Invalid_State) {
        ok = false;
    }
    if(pll_s_get_current_state(MCU_LANE1) != PLL_SLAVE_LANE_STATE__Invalid_State) {
        ok = false;
    }
    
    //Perform test sequence
    std::thread slave(slave_pll_state_handle_event_multi_request, MCU_LANE1);
    std::thread master(master_pll_state_handle_event_pll_request_exit_slave_in_use, PLL_MASTER_LANE_INDICES__Master0, MCU_LANE1);

    master.join();
    slave.join();

    //Verify ending states
    if(!slave_thread_test_pass.load()) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x7) != false) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__Free) {
        ok = false;
    }
    if(pll_m_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_MASTER_LANE_STATE__Free) {
        ok = false;
    }
    if(pll_s_get_current_state(MCU_LANE1) != PLL_SLAVE_LANE_STATE__InUse) {
        ok = false;
    }

    printf("\n\ntest__single_master_one_slave_requests_pll_alone - ok:0x%02x, line:%d\n\n\n", ok, __LINE__);
    return ok;
}

void slave_pll_state_handle_event_multi_request_two_times(const uint8_t slave_id) {
    for(int i = 0; i < 1; i++) {
        pll_s_handle_event(slave_id, PLL_SLAVE_LANE_COMMAND__RequestPLLAccess, PLL_SEQUENCE__PowerUp_Seq);

        if(pll_s_get_current_state(slave_id) != PLL_SLAVE_LANE_STATE__InUseSendPLLAccessCommands) {
            slave_thread_test_pass.store(false);
            return;
        }

        pll_s_handle_event(slave_id, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_POWER_UP_RS_PLL);
        pll_s_handle_event(slave_id, PLL_SLAVE_LANE_COMMAND__RequestPLLAccess, PLL_SEQUENCE__Calibration);
        pll_s_handle_event(slave_id, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_RESET_INTPRESET_EXT_RS);
        pll_s_handle_event(slave_id, PLL_SLAVE_LANE_COMMAND__Free, 0);
        pll_s_handle_event(slave_id, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_RESET_RS_PLL);
        pll_s_handle_event(slave_id, PLL_SLAVE_LANE_COMMAND__Free, 0);

        if(pll_s_get_current_state(slave_id) != PLL_SLAVE_LANE_STATE__InUse) {
            slave_thread_test_pass.store(false);
            return;
        }
    }

    slave_thread_done.store(true);
}

void master_pll_state_handle_event_pll_request_exit_slave_in_use_two_times(const enum PLL_MASTER_LANE_INDICES master_id) {

    while(1) {
        pll_m_handle_event(master_id,
                           PLL_MASTER_LANE_COMMAND__CheckIfPLLAccessPending,
                           0);

        if(slave_thread_done.load()) {
            break;
        }

        if(!slave_thread_test_pass.load()) {
            break;
        }

        std::this_thread::yield();
    }
}

bool test__single_master_one_slave_requests_pll_alone_two_times() {
    test_init();
    bool ok = true;

    reg_SHARE_PLL_MODE_LANE_1_0 = 2;

    //Verify initial states
    if(mcu_check_pll_access_request(0x7) != false) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__Free) {
        ok = false;
    }
    if(pll_m_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_MASTER_LANE_STATE__Invalid_State) {
        ok = false;
    }
    if(pll_s_get_current_state(MCU_LANE1) != PLL_SLAVE_LANE_STATE__Invalid_State) {
        ok = false;
    }
    
    //Perform test sequence
    std::thread slave(slave_pll_state_handle_event_multi_request_two_times, MCU_LANE1);
    std::thread master(master_pll_state_handle_event_pll_request_exit_slave_in_use_two_times, PLL_MASTER_LANE_INDICES__Master0);

    master.join();
    slave.join();

    //Verify ending states
    if(!slave_thread_test_pass.load()) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x7) != false) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__Free) {
        ok = false;
    }
    if(pll_m_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_MASTER_LANE_STATE__Free) {
        ok = false;
    }
    if(pll_s_get_current_state(MCU_LANE1) != PLL_SLAVE_LANE_STATE__InUse) {
        ok = false;
    }

    printf("\n\ntest__single_master_one_slave_requests_pll_alone_two_times - ok:0x%02x, line:%d\n\n\n", ok, __LINE__);
    return ok;
}

void slave_pll_state_handle_event_request_with_master(const uint8_t slave_id) {
    pll_s_handle_event(slave_id, PLL_SLAVE_LANE_COMMAND__RequestPLLAccess, PLL_SEQUENCE__PowerUp_Seq);

    if(pll_s_get_current_state(slave_id) != PLL_SLAVE_LANE_STATE__InUseSyncPLLAccess) {
        printf("Failure, line:%d\n", __LINE__);
        slave_thread_test_pass.store(false);
        return;
    }

    pll_s_handle_event(slave_id, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_POWER_UP_RS_PLL);
    pll_s_handle_event(slave_id, PLL_SLAVE_LANE_COMMAND__RequestPLLAccess, PLL_SEQUENCE__Calibration);
    pll_s_handle_event(slave_id, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_RESET_INTPRESET_EXT_RS);
    pll_s_handle_event(slave_id, PLL_SLAVE_LANE_COMMAND__Free, 0);
    pll_s_handle_event(slave_id, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_RESET_RS_PLL);
    pll_s_handle_event(slave_id, PLL_SLAVE_LANE_COMMAND__Free, 0);

    if(pll_s_get_current_state(slave_id) != PLL_SLAVE_LANE_STATE__InUse) {
        slave_thread_test_pass.store(false);
        return;
    }
    printf("slave thread completed, slave_id:0x%02x\n", slave_id);
}

void master_pll_state_handle_event_request_with_slave(const enum PLL_MASTER_LANE_INDICES master_id) {

    //wait for slave to submit request to set up initial test conditions
    while(1) {

        uint8_t channel_responsibility_bit_map = pll_get_mcu_command_channel_receive(pll_m_get_mcuid_from_master_index(master_id));
        if(mcu_check_pending(channel_responsibility_bit_map)) {
            break;
        }
        std::this_thread::yield();
    }

    printf("Detected slave command, master_index:0x%02x\n", master_id);

    //pll_m_handle_event(master_id,
                                        //PLL_MASTER_LANE_COMMAND__CheckIfPLLAccessPending,
                                        //0);

    pll_m_handle_event(master_id,
                                        PLL_MASTER_LANE_COMMAND__RequestingPLLAccessForMaster,
                                        PLL_SEQUENCE__PowerUp_Seq);

    printf("About to send the first command!\n");
    pll_m_handle_event(master_id, PLL_MASTER_LANE_COMMAND__PllAccessCommand, MCU_POWER_UP_RS_PLL);
    pll_m_handle_event(master_id, PLL_MASTER_LANE_COMMAND__RequestingPLLAccessForMaster, PLL_SEQUENCE__Calibration);
    pll_m_handle_event(master_id, PLL_MASTER_LANE_COMMAND__PllAccessCommand, MCU_RESET_INTPRESET_EXT_RS);
    pll_m_handle_event(master_id, PLL_MASTER_LANE_COMMAND__Free, 0);
    pll_m_handle_event(master_id, PLL_MASTER_LANE_COMMAND__PllAccessCommand, MCU_RESET_RS_PLL);
    pll_m_handle_event(master_id, PLL_MASTER_LANE_COMMAND__Free, 0);
    printf("Master thread completed, master_id:0x%02x\n", master_id);
}

bool test__single_master_slave_request_same_seq_together() {
    test_init();
    bool ok = true;

    reg_SHARE_PLL_MODE_LANE_1_0 = 2;

    //Verify initial states
    if(mcu_check_pll_access_request(0x7) != false) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__Free) {
        ok = false;
    }
    if(pll_m_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_MASTER_LANE_STATE__Invalid_State) {
        ok = false;
    }
    if(pll_s_get_current_state(MCU_LANE1) != PLL_SLAVE_LANE_STATE__Invalid_State) {
        ok = false;
    }
    
    //Perform test sequence
    std::thread slave(slave_pll_state_handle_event_request_with_master, MCU_LANE1);
    std::thread master(master_pll_state_handle_event_request_with_slave, PLL_MASTER_LANE_INDICES__Master0);

    master.join();
    slave.join();

    //Verify ending states
    if(!slave_thread_test_pass.load()) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x7) != false) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__Free) {
        ok = false;
    }
    if(pll_m_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_MASTER_LANE_STATE__Free) {
        ok = false;
    }
    if(pll_s_get_current_state(MCU_LANE1) != PLL_SLAVE_LANE_STATE__InUse) {
        ok = false;
    }

    printf("\n\ntest__single_master_slave_request_same_seq_together - ok:0x%02x, line:%d\n\n\n", ok, __LINE__);
    return ok;
}

void master_pll_state_handle_event_requests_pll_for_master(const enum PLL_MASTER_LANE_INDICES master_id) {

    //Perform first access

    pll_m_handle_event(master_id,
                                        PLL_MASTER_LANE_COMMAND__RequestingPLLAccessForMaster,
                                        PLL_SEQUENCE__PowerUp_Seq);

    if(pll_a_get_current_state(master_id) != PLL_ACCESS_STATE__InUse) {
        printf("Failure, line:%d\n", __LINE__);
        master_thread_test_pass.store(false);
        return;
    }
    if(pll_m_get_current_state(master_id) != PLL_MASTER_LANE_STATE__InUsePerformPllAccess) {
        printf("Failure, line:%d\n", __LINE__);
        master_thread_test_pass.store(false);
        return;
    }

    pll_m_handle_event(master_id,
                                        PLL_MASTER_LANE_COMMAND__PllAccessCommand,
                                        MCU_POWER_UP_RS_PLL);
    pll_m_handle_event(master_id,
                                        PLL_MASTER_LANE_COMMAND__PllAccessCommand,
                                        MCU_POWER_UP_RS_PLL);

    pll_m_handle_event(master_id,
                                        PLL_MASTER_LANE_COMMAND__Free,
                                        0);

    if(pll_a_get_current_state(master_id) != PLL_ACCESS_STATE__Free) {
        printf("Failure, line:%d\n", __LINE__);
        master_thread_test_pass.store(false);
    }
    if(pll_m_get_current_state(master_id) != PLL_MASTER_LANE_STATE__InUse) {
        printf("Failure, line:%d\n", __LINE__);
        master_thread_test_pass.store(false);
    }

    //Perform second access

    pll_m_handle_event(master_id,
                                        PLL_MASTER_LANE_COMMAND__RequestingPLLAccessForMaster,
                                        PLL_SEQUENCE__PowerUp_Seq);

    if(pll_a_get_current_state(master_id) != PLL_ACCESS_STATE__InUse) {
        printf("Failure, line:%d\n", __LINE__);
        master_thread_test_pass.store(false);
        return;
    }
    if(pll_m_get_current_state(master_id) != PLL_MASTER_LANE_STATE__InUsePerformPllAccess) {
        printf("Failure, line:%d\n", __LINE__);
        master_thread_test_pass.store(false);
        return;
    }

    pll_m_handle_event(master_id,
                                        PLL_MASTER_LANE_COMMAND__PllAccessCommand,
                                        MCU_POWER_UP_RS_PLL);
    pll_m_handle_event(master_id,
                                        PLL_MASTER_LANE_COMMAND__RequestingPLLAccessForMaster,
                                        PLL_SEQUENCE__PowerUp_Seq);

    if(pll_a_get_current_state(master_id) != PLL_ACCESS_STATE__InUse) {
        printf("Failure, line:%d\n", __LINE__);
        master_thread_test_pass.store(false);
        return;
    }
    if(pll_m_get_current_state(master_id) != PLL_MASTER_LANE_STATE__InUsePerformPllAccess) {
        printf("Failure, line:%d\n", __LINE__);
        master_thread_test_pass.store(false);
        return;
    }

    pll_m_handle_event(master_id,
                                        PLL_MASTER_LANE_COMMAND__PllAccessCommand,
                                        MCU_POWER_UP_RS_PLL);
    pll_m_handle_event(master_id,
                                        PLL_MASTER_LANE_COMMAND__Free,
                                        0);

    if(pll_a_get_current_state(master_id) != PLL_ACCESS_STATE__InUse) {
        printf("Failure, line:%d\n", __LINE__);
        master_thread_test_pass.store(false);
        return;
    }
    if(pll_m_get_current_state(master_id) != PLL_MASTER_LANE_STATE__InUsePerformPllAccess) {
        printf("Failure, line:%d\n", __LINE__);
        master_thread_test_pass.store(false);
        return;
    }

    pll_m_handle_event(master_id,
                                        PLL_MASTER_LANE_COMMAND__PllAccessCommand,
                                        MCU_POWER_UP_RS_PLL);
    pll_m_handle_event(master_id,
                                        PLL_MASTER_LANE_COMMAND__Free,
                                        0);

}

bool test__single_master_one_master_requests_pll_alone() {
    test_init();
    bool ok = true;

    reg_SHARE_PLL_MODE_LANE_1_0 = 2;

    //Verify initial states
    if(mcu_check_pll_access_request(0x7) != false) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__Free) {
        ok = false;
    }
    if(pll_m_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_MASTER_LANE_STATE__Invalid_State) {
        ok = false;
    }
    if(pll_s_get_current_state(MCU_LANE1) != PLL_SLAVE_LANE_STATE__Invalid_State) {
        ok = false;
    }
    
    //Perform test sequence
    std::thread master(master_pll_state_handle_event_requests_pll_for_master, PLL_MASTER_LANE_INDICES__Master0);

    master.join();

    //Verify ending states
    if(!master_thread_test_pass.load()) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x7) != false) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__Free) {
        ok = false;
    }
    if(pll_m_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_MASTER_LANE_STATE__InUse) {
        printf("Failure, line:%d\n", __LINE__);
        ok = false;
    }
    if(pll_s_get_current_state(MCU_LANE1) != PLL_SLAVE_LANE_STATE__Invalid_State) {
        ok = false;
    }

    printf("\n\ntest__single_master_one_master_requests_pll_alone - ok:0x%02x, line:%d\n\n\n", ok, __LINE__);
    return ok;
}

bool test__two_masters_two_slaves_slave_requests_pll_alone() {
    test_init();
    bool ok = true;

    reg_SHARE_PLL_MODE_LANE_1_0 = 2;

    //Verify initial states
    if(mcu_check_pll_access_request(0x7) != false) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__Free) {
        ok = false;
    }
    if(pll_m_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_MASTER_LANE_STATE__Invalid_State) {
        ok = false;
    }
    if(pll_s_get_current_state(MCU_LANE1) != PLL_SLAVE_LANE_STATE__Invalid_State) {
        ok = false;
    }
    
    //Perform test sequence
    std::thread slave1(slave_pll_state_handle_event_multi_request, MCU_LANE1);
    std::thread slave2(slave_pll_state_handle_event_multi_request, MCU_LANE3);
    std::thread master1(master_pll_state_handle_event_pll_request_exit_slave_in_use, PLL_MASTER_LANE_INDICES__Master0, MCU_LANE1);
    std::thread master2(master_pll_state_handle_event_pll_request_exit_slave_in_use, PLL_MASTER_LANE_INDICES__Master1, MCU_LANE3);

    master1.join();
    master2.join();
    slave1.join();
    slave2.join();

    //Verify ending states
    if(!master_thread_test_pass.load()) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x7) != false) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__Free) {
        ok = false;
    }
    if(pll_m_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_MASTER_LANE_STATE__Free) {
        printf("Failure, line:%d\n", __LINE__);
        ok = false;
    }
    if(pll_s_get_current_state(MCU_LANE1) != PLL_SLAVE_LANE_STATE__InUse) {
        ok = false;
    }

    printf("\n\ntest__single_master_one_master_requests_pll_alone - ok:0x%02x, line:%d\n\n\n", ok, __LINE__);
    return ok;
}

bool test__two_masters_two_slaves_request_same_seq_together() {
    test_init();
    bool ok = true;

    reg_SHARE_PLL_MODE_LANE_1_0 = 2;

    //Verify initial states
    if(mcu_check_pll_access_request(0x7) != false) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__Free) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master1) != PLL_ACCESS_STATE__Free) {
        ok = false;
    }
    if(pll_m_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_MASTER_LANE_STATE__Invalid_State) {
        ok = false;
    }
    if(pll_m_get_current_state(PLL_MASTER_LANE_INDICES__Master1) != PLL_MASTER_LANE_STATE__Invalid_State) {
        ok = false;
    }
    
    //Perform test sequence
    std::thread slave1(slave_pll_state_handle_event_request_with_master, MCU_LANE1);
    std::thread slave2(slave_pll_state_handle_event_request_with_master, MCU_LANE3);
    std::thread master1(master_pll_state_handle_event_request_with_slave, PLL_MASTER_LANE_INDICES__Master0);
    std::thread master2(master_pll_state_handle_event_request_with_slave, PLL_MASTER_LANE_INDICES__Master1);

    master1.join();
    master2.join();
    slave1.join();
    slave2.join();

    //Verify ending states
    if(!slave_thread_test_pass.load()) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x7) != false) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__Free) {
        ok = false;
    }
    if(pll_m_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_MASTER_LANE_STATE__Free) {
        ok = false;
    }
    if(pll_s_get_current_state(MCU_LANE1) != PLL_SLAVE_LANE_STATE__InUse) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master1) != PLL_ACCESS_STATE__Free) {
        ok = false;
    }
    if(pll_m_get_current_state(PLL_MASTER_LANE_INDICES__Master1) != PLL_MASTER_LANE_STATE__Free) {
        ok = false;
    }
    if(pll_s_get_current_state(MCU_LANE3) != PLL_SLAVE_LANE_STATE__InUse) {
        ok = false;
    }

    printf("\n\ntest__two_masters_two_slaves_master_requests_pll_alone - ok:0x%02x, line:%d\n\n\n", ok, __LINE__);
    return ok;
}

bool test__two_masters_two_slaves_master_requests_pll_alone() {
    test_init();
    bool ok = true;

    reg_SHARE_PLL_MODE_LANE_1_0 = 2;

    //Verify initial states
    if(mcu_check_pll_access_request(0x7) != false) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__Free) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master1) != PLL_ACCESS_STATE__Free) {
        ok = false;
    }
    if(pll_m_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_MASTER_LANE_STATE__Invalid_State) {
        ok = false;
    }
    if(pll_m_get_current_state(PLL_MASTER_LANE_INDICES__Master1) != PLL_MASTER_LANE_STATE__Invalid_State) {
        ok = false;
    }
    
    //Perform test sequence
    std::thread master1(master_pll_state_handle_event_requests_pll_for_master, PLL_MASTER_LANE_INDICES__Master0);
    std::thread master2(master_pll_state_handle_event_requests_pll_for_master, PLL_MASTER_LANE_INDICES__Master1);

    master1.join();
    master2.join();

    //Verify ending states
    if(!master_thread_test_pass.load()) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x7) != false) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__Free) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master1) != PLL_ACCESS_STATE__Free) {
        ok = false;
    }
    if(pll_m_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_MASTER_LANE_STATE__InUse) {
        printf("Failure, line:%d\n", __LINE__);
        ok = false;
    }
    if(pll_m_get_current_state(PLL_MASTER_LANE_INDICES__Master1) != PLL_MASTER_LANE_STATE__InUse) {
        printf("Failure, line:%d\n", __LINE__);
        ok = false;
    }

    printf("\n\ntest__two_masters_two_slaves_master_requests_pll_alone - ok:0x%02x, line:%d\n\n\n", ok, __LINE__);
    return ok;
}

void slave_pll_state_speed_change(const uint8_t slave_id) {

    pll_s_handle_event(slave_id, PLL_SLAVE_LANE_COMMAND__RequestPLLAccess, PLL_SEQUENCE__SpeedChange);
    pll_s_handle_event(slave_id, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_POWER_UP_RS_PLL);
    pll_s_handle_event(slave_id, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_RESET_INTPRESET_EXT_RS);
    pll_s_handle_event(slave_id, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_RESET_RS_PLL);
    pll_s_handle_event(slave_id, PLL_SLAVE_LANE_COMMAND__Free, 0);

    if(pll_s_get_current_state(slave_id) != PLL_SLAVE_LANE_STATE__InUse) {
        slave_thread_test_pass.store(false);
        return;
    }
    printf("slave thread completed, slave_id:0x%02x\n", slave_id);
}

void master_pll_state_power_on(const enum PLL_MASTER_LANE_INDICES master_id) {

    //wait for slave to submit request to set up initial test conditions
    while(1) {

        uint8_t channel_responsibility_bit_map = pll_get_mcu_command_channel_receive(pll_m_get_mcuid_from_master_index(master_id));
        if(mcu_check_pending(channel_responsibility_bit_map)) {
            break;
        }
        std::this_thread::yield();
    }

    printf("Detected slave command, master_index:0x%02x\n", master_id);

    pll_m_handle_event(master_id,
                                        PLL_MASTER_LANE_COMMAND__CheckIfPLLAccessPending,
                                        0);
    pll_m_handle_event(master_id,
                                        PLL_MASTER_LANE_COMMAND__CheckIfPLLAccessPending,
                                        0);

    pll_m_handle_event(master_id,
                                        PLL_MASTER_LANE_COMMAND__RequestingPLLAccessForMaster,
                                        PLL_SEQUENCE__PowerUp_Seq);

    printf("About to send the first command!\n");
    pll_m_handle_event(master_id, PLL_MASTER_LANE_COMMAND__PllAccessCommand, MCU_POWER_UP_RS_PLL);
    pll_m_handle_event(master_id, PLL_MASTER_LANE_COMMAND__PllAccessCommand, MCU_RESET_INTPRESET_EXT_RS);
    pll_m_handle_event(master_id, PLL_MASTER_LANE_COMMAND__PllAccessCommand, MCU_RESET_RS_PLL);
    pll_m_handle_event(master_id, PLL_MASTER_LANE_COMMAND__Free, 0);
    printf("Master thread completed, master_id:0x%02x\n", master_id);
}

bool test__one_master_one_slave_power_on_speed_change() {
    test_init();
    bool ok = true;

    reg_SHARE_PLL_MODE_LANE_1_0 = 2;

    //Verify initial states
    if(mcu_check_pll_access_request(0x7) != false) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__Free) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master1) != PLL_ACCESS_STATE__Free) {
        ok = false;
    }
    if(pll_m_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_MASTER_LANE_STATE__Invalid_State) {
        ok = false;
    }
    if(pll_m_get_current_state(PLL_MASTER_LANE_INDICES__Master1) != PLL_MASTER_LANE_STATE__Invalid_State) {
        ok = false;
    }
    
    //Perform test sequence
    std::thread slave1(slave_pll_state_speed_change, MCU_LANE1);
    std::thread master1(master_pll_state_power_on, PLL_MASTER_LANE_INDICES__Master0);

    slave1.join();
    master1.join();

    //Verify ending states
    if(!master_thread_test_pass.load()) {
        ok = false;
    }
    if(mcu_check_pll_access_request(0x7) != false) {
        ok = false;
    }
    if(pll_a_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_ACCESS_STATE__Free) {
        ok = false;
    }
    if(pll_m_get_current_state(PLL_MASTER_LANE_INDICES__Master0) != PLL_MASTER_LANE_STATE__InUse) {
        printf("Failure, line:%d\n", __LINE__);
        ok = false;
    }

    printf("\n\ntest__two_masters_two_slaves_master_requests_pll_alone - ok:0x%02x, line:%d\n\n\n", ok, __LINE__);
    return ok;
}

//TODO:
//Single Master, One Slave (i.e. 2 threads):
//  [DONE] Slave requests PLL alone
//  [DONE] Master requests PLL alone, with no slaves requesting access
//  [DONE] Master and slave both request same sequence at the same time
//  Slave requests PLL when in middle of alone master sequence
//  Master requests PLL when in middle of single slave sequence
//Two Master Two Slaves (i.e. 4 threads):
//  [DONE] Slave requests PLL alone
//  Two slaves request PLL at same time, each with a different sequence
//  [DONE] Master requests PLL alone, with no slaves requesting access
//  [DONE] Master and slave both request same sequence at the same time
//  Slave requests PLL when in middle of alone master sequence
//  Master requests PLL when in middle of single slave sequence
//  Master requests PLL when in middle of multi slave sequence
//Single Master, Two Slaves (i.e. 3 threads)
//  One slave requests PLL alone
//  Two slaves requests PLL at same time, with same sequence
//  Master requests PLL alone, with no slaves requesting access
//  Slave requests PLL when in middle of alone master sequence
//  Master requests PLL when in middle of single slave sequence
//  Master requests PLL when in middle of multi slave sequence
//Single Master, Three Slaves

int main() {

    printf("Hello Test PLL Sharing World\n");
    setbuf(stdout, NULL);

    bool pass = true;

    //Invalid test: pass = pass && test__pll_master_state_handle_slave_pll_access_request();
    //Invalid test: pass = pass && test__pll_master_state_handle_multiple_slave_pll_access_requests();
    pass = pass && test__mcu_command_pll_access_request_pending();
    pass = pass && test__mcu_command_get_channel_bit_map_of_command_pending();
    pass = pass && test__mcu_command_send_and_wait_threaded();
    pass = pass && test__pll_access_state();
    pass = pass && test__single_master_one_slave_requests_pll_alone();
    pass = pass && test__single_master_one_slave_requests_pll_alone_two_times();
    pass = pass && test__single_master_slave_request_same_seq_together();
    pass = pass && test__single_master_one_master_requests_pll_alone();
    pass = pass && test__two_masters_two_slaves_slave_requests_pll_alone();
    pass = pass && test__two_masters_two_slaves_request_same_seq_together();
    pass = pass && test__two_masters_two_slaves_master_requests_pll_alone();
    pass = pass && test__one_master_one_slave_power_on_speed_change();

    if(!pass) {
        printf("---FAILURE---\n");
        return -1;
    }
    else {
        printf("---SUCCESS---\n");
        return 0;
    }

    return 0;
}
