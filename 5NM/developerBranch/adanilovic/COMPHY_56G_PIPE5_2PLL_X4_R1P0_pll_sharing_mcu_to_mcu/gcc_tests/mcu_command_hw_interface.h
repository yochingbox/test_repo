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

#include <stdint.h>
#include <thread>
#include <atomic>

#define BANKING_CTRL

std::atomic<uint8_t> channel_0_g(0);
std::atomic<uint8_t> channel_1_g(0);
std::atomic<uint8_t> channel_2_g(0);

uint8_t mcu_data_payload_channel0[4];
uint8_t mcu_data_payload_channel1[4];
uint8_t mcu_data_payload_channel2[4];

uint8_t PHY_STATUS = 0;

enum PHY_STATUS_VALUES {
    ST_MCU_COMMAND_WAIT = 77
};

enum MCU_LANE_IDS {
    MCU_LANE0 = 0,
    MCU_LANE1 = 1,
    MCU_LANE2 = 2,
    MCU_LANE3 = 3,
};

inline extern uint8_t mcu_get_channel_0_value() {
    return channel_0_g.load();
}

inline extern uint8_t mcu_get_channel_1_value() {
    return channel_1_g.load();
}

inline extern uint8_t mcu_get_channel_2_value() {
    return channel_2_g.load();
}

inline extern void mcu_set_channel_0_value(const uint8_t value) {
    channel_0_g.store(value);
}

inline extern void mcu_set_channel_1_value(const uint8_t value) {
    channel_1_g.store(value);
}

inline extern void mcu_set_channel_2_value(const uint8_t value) {
    channel_2_g.store(value);
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

int reg_PLL_RS_TX_INTPRESET_EXT_LANE;
int reg_PLL_TS_TX_INTPRESET_EXT_LANE;
void drv_pll_rs_on_seq(void) {}
void drv_pll_ts_on_seq(void) {}
void drv_pll_rs_reset() {}
void drv_pll_ts_reset() {}
void turn_on_tx_cont_cal_ts_pll() {}
void turn_on_rx_cont_cal_rs_pll() {}
void turn_off_tx_cont_cal_ts_pll() {}
void turn_off_rx_cont_cal_rs_pll() {}
void drv_pll_dtx_clk_off() {}
void drv_pll_dtx_lane_off() {}
void drv_pll_rs_off_dig_prot_en() {}
void drv_pll_ts_off_dig_prot_en() {}
void drv_pll_spd_chg_reset_pll_ts() {}
void drv_pll_spd_chg_reset_pll_rs() {}
void drv_pll_spd_chg_clr_reset_pll_ts() {}
void drv_pll_spd_chg_clr_reset_pll_rs() {}
void drv_pll_spd_chg_pll_cal_tx() {}
void drv_pll_spd_chg_pll_cal_rx() {}
void drv_pll_p2_to_p1() {}

#endif // #ifndef MCU_COMMAND_HW_INTERFACE_H
