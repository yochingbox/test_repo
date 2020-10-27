/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file mcu_command_hw_interface.c
* \purpose MCU <-> MCU message passing
* \History
*   1/8/2020 Andrew Danilovic		Initial 
*/

#ifndef MCU_COMMAND_HW_INTERFACE_H
#define MCU_COMMAND_HW_INTERFACE_H

#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg BANK2
#endif

#include "drv_pll.h"
#include "phy_reg_c_xdat_lane.h"

inline extern uint8_t mcu_get_channel_0_value() {
    return reg_MCU_DEBUG_CMN_4_7_0;
}

inline extern uint8_t mcu_get_channel_1_value() {
    return reg_MCU_DEBUG_CMN_5_7_0;
}

inline extern uint8_t mcu_get_channel_2_value() {
    return reg_MCU_DEBUG_CMN_6_7_0;
}

inline extern void mcu_set_channel_0_value(const uint8_t value) {
    reg_MCU_DEBUG_CMN_4_7_0 = value;
}

inline extern void mcu_set_channel_1_value(const uint8_t value) {
    reg_MCU_DEBUG_CMN_5_7_0 = value;
}

inline extern void mcu_set_channel_2_value(const uint8_t value) {
    reg_MCU_DEBUG_CMN_6_7_0 = value;
}

inline extern void mcu_get_data_payload_channel0(uint8_t * const data1, uint8_t * const data2) {
    *data1 = mcu_data_payload_channel0[0];
    *data2 = mcu_data_payload_channel0[1];
}

inline extern void mcu_get_data_payload_channel1(uint8_t * const data1, uint8_t * const data2) {
    *data1 = mcu_data_payload_channel1[0];
    *data2 = mcu_data_payload_channel1[1];
}

inline extern void mcu_get_data_payload_channel2(uint8_t * const data1, uint8_t * const data2) {
    *data1 = mcu_data_payload_channel2[0];
    *data2 = mcu_data_payload_channel2[1];
}

inline extern uint8_t* mcu_get_data_payload_ptr_channel0() {
    return mcu_data_payload_channel0;
}

inline extern uint8_t* mcu_get_data_payload_ptr_channel1() {
    return mcu_data_payload_channel1;
}

inline extern uint8_t* mcu_get_data_payload_ptr_channel2() {
    return mcu_data_payload_channel2;
}

#endif // #ifndef MCU_COMMAND_HW_INTERFACE_H
