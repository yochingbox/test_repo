/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file mcu_command.c
* \purpose MCU <-> MCU message passing
* \History
*   12/18/2019 Andrew Danilovic		Initial 
*/

#include "common.h"
#include "drv_pll.h"
#include "phy_reg_c_xdat_lane.h"
#include "mcu_command.h"
#include "pll_state.h"

// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg BANK2
#endif

#ifdef PLL_SHARING_ROUTE
static inline uint8_t mcu_get_channel_0_value() {
    return reg_MCU_DEBUG_CMN_4_7_0;
}

static inline uint8_t mcu_get_channel_1_value() {
    return reg_MCU_DEBUG_CMN_5_7_0;
}

static inline uint8_t mcu_get_channel_2_value() {
    return reg_MCU_DEBUG_CMN_6_7_0;
}

static inline void mcu_set_channel_0_value(const uint8_t value) {
    reg_MCU_DEBUG_CMN_4_7_0 = value;
}

static inline void mcu_set_channel_1_value(const uint8_t value) {
    reg_MCU_DEBUG_CMN_5_7_0 = value;
}

static inline void mcu_set_channel_2_value(const uint8_t value) {
    reg_MCU_DEBUG_CMN_6_7_0 = value;
}

static inline void mcu_get_data_payload_channel0(uint8_t * const data1, uint8_t * const data2) {
    *data1 = cmx_MCU_DATA_PAYLOAD_CHANNEL0_DATA1_7_0;
    *data2 = cmx_MCU_DATA_PAYLOAD_CHANNEL0_DATA2_7_0;
}

static inline void mcu_get_data_payload_channel1(uint8_t * const data1, uint8_t * const data2) {
    *data1 = cmx_MCU_DATA_PAYLOAD_CHANNEL1_DATA1_7_0;
    *data2 = cmx_MCU_DATA_PAYLOAD_CHANNEL1_DATA2_7_0;
}

static inline void mcu_get_data_payload_channel2(uint8_t * const data1, uint8_t * const data2) {
    *data1 = cmx_MCU_DATA_PAYLOAD_CHANNEL2_DATA1_7_0;
    *data2 = cmx_MCU_DATA_PAYLOAD_CHANNEL2_DATA2_7_0;
}

static inline void mcu_set_data_payload_channel0(const uint8_t data1, const uint8_t data2) {
    cmx_MCU_DATA_PAYLOAD_CHANNEL0_DATA1_7_0 = data1;
    cmx_MCU_DATA_PAYLOAD_CHANNEL0_DATA2_7_0 = data2;
}

static inline void mcu_set_data_payload_channel1(const uint8_t data1, const uint8_t data2) {
    cmx_MCU_DATA_PAYLOAD_CHANNEL1_DATA1_7_0 = data1;
    cmx_MCU_DATA_PAYLOAD_CHANNEL1_DATA2_7_0 = data2;
}

static inline void mcu_set_data_payload_channel2(const uint8_t data1, const uint8_t data2) {
    cmx_MCU_DATA_PAYLOAD_CHANNEL2_DATA1_7_0 = data1;
    cmx_MCU_DATA_PAYLOAD_CHANNEL2_DATA2_7_0 = data2;
}

enum MCU_COMMAND__MCU_CHANNEL_SLOT_BIT_MASK {
    MCU_CHANNEL_SLOT_COMMAND_PENDING_MASK = 0x1
};

void mcu_init() BANKING_CTRL {
    mcu_set_channel_0_value(0);
    mcu_set_channel_1_value(0);
    mcu_set_channel_2_value(0);
}

bool mcu_check_pending(const uint8_t channel_responsibility_bit_map) {
    const bool ret = ( ((channel_responsibility_bit_map >> MCU_CHANNEL_0) & reg_MCU_DEBUG_CMN_4_7_0 & MCU_CHANNEL_SLOT_COMMAND_PENDING_MASK) ||
                       ((channel_responsibility_bit_map >> MCU_CHANNEL_1) & reg_MCU_DEBUG_CMN_5_7_0 & MCU_CHANNEL_SLOT_COMMAND_PENDING_MASK) ||
                       ((channel_responsibility_bit_map >> MCU_CHANNEL_2) & reg_MCU_DEBUG_CMN_6_7_0 & MCU_CHANNEL_SLOT_COMMAND_PENDING_MASK) ) != 0;
    return ret;
}

bool mcu_check_command_pending(const uint8_t channel) BANKING_CTRL {

    bool pending = false;

    switch(channel) {
        case MCU_CHANNEL_0:
            pending = (reg_MCU_DEBUG_CMN_4_7_0 & MCU_CHANNEL_SLOT_COMMAND_PENDING_MASK) == MCU_CHANNEL_SLOT_COMMAND_PENDING_MASK;
            break;

        case MCU_CHANNEL_1:
            pending = (reg_MCU_DEBUG_CMN_5_7_0 & MCU_CHANNEL_SLOT_COMMAND_PENDING_MASK) == MCU_CHANNEL_SLOT_COMMAND_PENDING_MASK;
            break;

        case MCU_CHANNEL_2:
            pending = (reg_MCU_DEBUG_CMN_6_7_0 & MCU_CHANNEL_SLOT_COMMAND_PENDING_MASK) == MCU_CHANNEL_SLOT_COMMAND_PENDING_MASK;
            break;

        default:
            pending = false;
            break;
    }

    return pending;
}

void mcu_clear_pending(const uint8_t channel) BANKING_CTRL {

    switch(channel) {
        case MCU_CHANNEL_0:
            /*mcu_set_channel_0_value(reg_MCU_DEBUG_CMN_4_7_0 & ~MCU_CHANNEL_SLOT_COMMAND_PENDING_MASK);*/
            reg_MCU_DEBUG_CMN_4_7_0 = reg_MCU_DEBUG_CMN_4_7_0 & ~MCU_CHANNEL_SLOT_COMMAND_PENDING_MASK; 
            break;

        case MCU_CHANNEL_1:
            /*mcu_set_channel_1_value(reg_MCU_DEBUG_CMN_5_7_0 & ~MCU_CHANNEL_SLOT_COMMAND_PENDING_MASK);*/
            reg_MCU_DEBUG_CMN_5_7_0 = reg_MCU_DEBUG_CMN_5_7_0 & ~MCU_CHANNEL_SLOT_COMMAND_PENDING_MASK; 
            break;

        case MCU_CHANNEL_2:
            /*mcu_set_channel_2_value(reg_MCU_DEBUG_CMN_6_7_0 & ~MCU_CHANNEL_SLOT_COMMAND_PENDING_MASK);*/
            reg_MCU_DEBUG_CMN_6_7_0 = reg_MCU_DEBUG_CMN_6_7_0 & ~MCU_CHANNEL_SLOT_COMMAND_PENDING_MASK; 
            break;

        default:
            break;
    }
}

static uint8_t mcu_get_command(const uint8_t channel) {

    uint8_t command = MCU_INVALID_COMMAND;

    switch(channel) {
        case MCU_CHANNEL_0:
            command = (reg_MCU_DEBUG_CMN_4_7_0 & 0xFE) >> 1;
            break;

        case MCU_CHANNEL_1:
            command = (reg_MCU_DEBUG_CMN_5_7_0 & 0xFE) >> 1;
            break;

        case MCU_CHANNEL_2:
            command = (reg_MCU_DEBUG_CMN_6_7_0 & 0xFE) >> 1;
            break;
        
        default:
            break;
    }

    return command;
}

void mcu_get_command_data(const uint8_t channel,
                          uint8_t *data1,
                          uint8_t *data2) {
    switch(channel) {
        case MCU_CHANNEL_0:
            mcu_get_data_payload_channel0(data1, data2);
            break;
        case MCU_CHANNEL_1:
            mcu_get_data_payload_channel1(data1, data2);
            break;
        case MCU_CHANNEL_2:
            mcu_get_data_payload_channel2(data1, data2);
            break;
        default:
            *data1 = 0;
            *data2 = 0;
            break;
    }
}
#endif //#ifdef PLL_SHARING_ROUTE

void mcu_execute(const uint8_t command,
                 const uint8_t channel,
                 const uint8_t data1,
                 const uint8_t data2) {

    switch(command) {
        #ifdef PLL_SHARING_ROUTE
        case MCU_REQUEST_PLL_ACCESS:
            mcu_put_command_data(channel, data1, 0);
            break;

        case MCU_FREE_PLL:
            break;
        #endif //#ifdef PLL_SHARING_ROUTE

        case MCU_POWER_UP_RS_PLL:
            drv_pll_assert_ana_rs_pu_pll();
            break;

        case MCU_POWER_UP_TS_PLL:
            drv_pll_assert_ana_ts_pu_pll();
            break;
        
        case MCU_RESET_INTPRESET_EXT_RS:
            reg_PLL_RS_TX_INTPRESET_EXT_LANE = 0;
            break;

        case MCU_RESET_INTPRESET_EXT_TS:
            reg_PLL_TS_TX_INTPRESET_EXT_LANE = 0;
            break;

        case MCU_RESET_RS_PLL:
            drv_pll_rs_reset();
            break;

        case MCU_RESET_TS_PLL:
            drv_pll_ts_reset();
            break;

        case MCU_LOADSPEEDTBL_LC_PLL_TS:
            loadspeedtbl_lc_pll(reg_TX_PLL_RATE_SEL_LANE_4_0, data2, 0);
            break;

        case MCU_LOADSPEEDTBL_LC_PLL_RS:
            loadspeedtbl_lc_pll(reg_RX_PLL_RATE_SEL_LANE_4_0, data2, 1);
            break;

        case MCU_TURN_ON_TX_CONT_CAL_TS_PLL:
            turn_on_tx_cont_cal_ts_pll();
            break;

        case MCU_TURN_ON_RX_CONT_CAL_RS_PLL:
            turn_on_rx_cont_cal_rs_pll();
            break;

        case MCU_TURN_OFF_TX_CONT_CAL_TS_PLL:
            turn_off_tx_cont_cal_ts_pll();
            break;

        case MCU_TURN_OFF_RX_CONT_CAL_RS_PLL:
            turn_off_rx_cont_cal_rs_pll();
            break;

        case MCU_DRV_RS_PLL_DTC_CLK_OFF:
            drv_pll_rs_dtx_clk_off();
            break;

        case MCU_DRV_TS_PLL_DTC_CLK_OFF:
            drv_pll_ts_dtx_clk_off();
            break;

        case MCU_DRV_RS_PLL_DTC_LANE_OFF:
            drv_pll_rs_dtx_lane_off();
            break;

        case MCU_DRV_TS_PLL_DTC_LANE_OFF:
            drv_pll_ts_dtx_lane_off();
            break;

        case MCU_RS_OFF_DIG_PROT_EN:
            drv_pll_rs_off_dig_prot_en();
            break;

        case MCU_TS_OFF_DIG_PROT_EN:
            drv_pll_ts_off_dig_prot_en();
            break;

        case MCU_SPD_CHG_RESET_PLL_TS:
            drv_pll_spd_chg_reset_pll_ts();
            break;

        case MCU_SPD_CHG_RESET_PLL_RS:
            drv_pll_spd_chg_reset_pll_rs();
            break;

        case MCU_SPD_CHG_CLR_RESET_PLL_TS:
            drv_pll_spd_chg_clr_reset_pll_ts();
            break;

        case MCU_SPD_CHG_CLR_RESET_PLL_RS:
            drv_pll_spd_chg_clr_reset_pll_rs();
            break;

        case MCU_SPD_CHG_PLL_CAL_TX:
            drv_pll_spd_chg_pll_cal_tx();
            break;

        case MCU_SPD_CHG_PLL_CAL_RX:
            drv_pll_spd_chg_pll_cal_rx();
            break;

        case MCU_PLL_POWER_ON:
            drv_pll_on();
            break;

        case MCU_PLL_POWER_OFF:
            drv_pll_off();
            break;

        case MCU_CLR_TS_RST_CLK_READY:
            drv_pll_clear_ts_rst();
            break;

        case MCU_CLR_RS_RST_CLK_READY:
            drv_pll_clear_rs_rst();
            break;

        case MCU_LOAD_INIT_TEMP_TABLE:
            drv_pll_load_init_temp_table();
            break;

        case MCU_PLL_CLK_RDY_ALL_0:
            pll_clk_ready_all_0();
            break;

        case MCU_PLL_CAL_LOAD_SPD_TBL:
            drv_pll_cal_load_spd_table(data1);
            break;

        case MCU_CLK_RX_READY_0:
            drv_pll_clk_rx_ready_0();
            break;

        case MCU_RX_CAL:
            drv_pll_rx_cal();
            break;

        case MCU_CLK_TX_READY_0:
            drv_pll_clk_tx_ready_0();
            break;

        case MCU_TX_CAL:
            drv_pll_tx_cal();
            break;

        case MCU_RX_CAL_LOAD:
            drv_pll_rx_cal_load();
            break;

        case MCU_TX_CAL_LOAD:
            drv_pll_tx_cal_load();
            break;

        case MCU_RX_PLL_DIG_OFF:
            rx_pll_dig_off();
            break;

        case MCU_RX_PLL_DIG_ON:
            rx_pll_dig_on();
            break;

        case MCU_TX_PLL_DIG_OFF:
            tx_pll_dig_off();
            break;

        case MCU_TX_PLL_DIG_ON:
            tx_pll_dig_on();
            break;

        case MCU_CLK_RS_READY_1:
            drv_pll_clk_rs_ready();
            break;

        case MCU_CLK_TS_READY_1:
            drv_pll_clk_ts_ready();
            break;

        case MCU_RX_PLL_ANA_OFF:
	        rx_pll_ana_off();
            break;

        case MCU_TX_PLL_ANA_OFF:
	        tx_pll_ana_off();
            break;

        case MCU_RX_PLL_ANA_ON:
	        rx_pll_ana_on();
            break;

        case MCU_TX_PLL_ANA_ON:
	        tx_pll_ana_on();
            break;

        case MCU_TX_PLL_DIG_OFF_SPD_CHG:
            tx_pll_dig_off();
            switch(pll_sel) {
                case BOTH_ON:
                case TS_ON:
                    reg_PLL_TS_RESET_ANA_LANE = 1;
                    reg_ANA_PLL_TS_CLK_READY_LANE = 0;
                break;	
                case RS_ON:
                case SWAP_BOTH_ON:
	                reg_PLL_RS_RESET_ANA_LANE = 1;
	                reg_ANA_PLL_RS_CLK_READY_LANE = 0;
                break;
            }
            break;

        case MCU_RX_PLL_DIG_OFF_SPD_CHG:
            rx_pll_dig_off();
            switch(pll_sel) {
                case BOTH_ON:
                case TS_ON:
                    reg_PLL_TS_RESET_ANA_LANE = 1;
                    reg_ANA_PLL_TS_CLK_READY_LANE = 0;
                break;	
                case RS_ON:
                case SWAP_BOTH_ON:
	                reg_PLL_RS_RESET_ANA_LANE = 1;
	                reg_ANA_PLL_RS_CLK_READY_LANE = 0;
                break;
            }
            break;

        case MCU_ALL_CAL_EXT_RX:
            reg_PLL_RS_RESET_ANA_LANE = 0;
            pll_clk_rx_ready_1();
            break;

        case MCU_ALL_CAL_EXT_TX:
            reg_PLL_TS_RESET_ANA_LANE = 0;
            pll_clk_tx_ready_1();
            break;

        default:
            break;
    }
}

#ifdef PLL_SHARING_ROUTE
uint8_t mcu_check_and_execute(const uint8_t channel_responsibility_bit_map) {

    uint8_t command = MCU_INVALID_COMMAND;
    uint8_t channel = 0;
    uint8_t data1 = 0;
    uint8_t data2 = 0;
   
    //check if there is any command pending 
    if(mcu_check_pending(channel_responsibility_bit_map)) {
        //some command is pending. Pull a command and process it
        for(channel = 0; channel < MCU_NUM_CHANNELS; channel++) {
            if(channel_responsibility_bit_map & (1 << channel)) {
                if(mcu_check_command_pending(channel)) {
                    command = mcu_get_command(channel);
                    mcu_get_command_data(channel, &data1, &data2);
                    mcu_execute(command, channel, data1, data2);
                    mcu_clear_pending(channel);
                    break;
                }
            }
        }
    }

    return command;
}

uint8_t mcu_check_and_execute_return(const uint8_t channel_responsibility_bit_map,
                                     const uint8_t return_code,
                                     const uint8_t mcu_command_channel) {

    uint8_t command = MCU_INVALID_COMMAND;
    uint8_t channel = 0;
   
    //check if there is any command pending 
    /*if(mcu_check_pending(channel_responsibility_bit_map)) {*/

        //some command is pending. Pull a command and process it
        /*for(channel = 0; channel < MCU_NUM_CHANNELS; channel++) {*/
            if(channel_responsibility_bit_map & (1 << mcu_command_channel)) {
                if(mcu_check_command_pending(mcu_command_channel)) {
                    command = mcu_get_command(mcu_command_channel);
                    mcu_execute(command, mcu_command_channel, return_code, 0);
                    mcu_clear_pending(mcu_command_channel);
                    /*break;*/
                }
            }
        /*}*/
    /*}*/

    return command;
}

bool mcu_check_pll_access_request(const uint8_t channel_responsibility_bit_map) {

    uint8_t command = MCU_INVALID_COMMAND;
    uint8_t channel = 0;

    if(mcu_check_pending(channel_responsibility_bit_map)) {
        for(channel = 0; channel < MCU_NUM_CHANNELS; channel++) {
            if(channel_responsibility_bit_map & (1 << channel)) {
                if(mcu_check_command_pending(channel)) {
                    command = mcu_get_command(channel);
                    if(command == MCU_REQUEST_PLL_ACCESS) {
                        return true;
                    }
                    break;
                }
            }
        }
    }
    return false;
}

uint8_t mcu_get_channel_pending(const uint8_t channel_responsibility_bit_map,
                                const uint8_t command_to_check) {
    uint8_t command = MCU_INVALID_COMMAND;
    uint8_t bit_map = 0;
    uint8_t channel = 0;

    if(mcu_check_pending(channel_responsibility_bit_map)) {
        for(channel = 0; channel < MCU_NUM_CHANNELS; channel++) {
            if(channel_responsibility_bit_map & (1 << channel)) {
                if(mcu_check_command_pending(channel)) {
                    command = mcu_get_command(channel);
                    if(command == command_to_check) {
                        bit_map |= (1 << channel);
                    }
                }
            }
        }
    }
    return bit_map;
}

void mcu_send(const uint8_t channel, const uint8_t command) {

    switch(channel) {
        case MCU_CHANNEL_0:
            mcu_set_channel_0_value((command << 1) | 0x1);
            break;

        case MCU_CHANNEL_1:
            mcu_set_channel_1_value((command << 1) | 0x1);
            break;

        case MCU_CHANNEL_2:
            mcu_set_channel_2_value((command << 1) | 0x1);
            break;

        default:
            break;
    }
}

void mcu_send_and_wait(const uint8_t channel, const uint8_t command) {

    /*uint8_t phy_status_saved = PHY_STATUS;*/

    /*PHY_STATUS = 0x50;*/

    switch(channel) {
        case MCU_CHANNEL_0:
            mcu_set_channel_0_value((command << 1) | 0x1);
            while((reg_MCU_DEBUG_CMN_4_7_0 & 0x1) != 0);
            break;

        case MCU_CHANNEL_1:
            mcu_set_channel_1_value((command << 1) | 0x1);
            while((reg_MCU_DEBUG_CMN_5_7_0 & 0x1) != 0);
            break;

        case MCU_CHANNEL_2:
            mcu_set_channel_2_value((command << 1) | 0x1);
            while((reg_MCU_DEBUG_CMN_6_7_0 & 0x1) != 0);
            break;

        default:
            break;
    }
	
    /*PHY_STATUS = phy_status_saved;*/
}

void mcu_put_command_data(const uint8_t channel,
                          const uint8_t data0,
                          const uint8_t data1) {

    switch(channel) {
        case MCU_CHANNEL_0:
            mcu_set_data_payload_channel0(data0, data1);
            break;

        case MCU_CHANNEL_1:
            mcu_set_data_payload_channel1(data0, data1);
            break;

        case MCU_CHANNEL_2:
            mcu_set_data_payload_channel2(data0, data1);
            break;

        default:
            break;
    }
}

void mcu_send_and_wait_with_data(const uint8_t channel,
                                 const uint8_t command,
                                 const uint8_t data0,
                                 const uint8_t data1) {
    mcu_put_command_data(channel, data0, data1);
    mcu_send_and_wait(channel, command);
}

uint8_t mcu_send_and_wait_ret(const uint8_t channel,
                              uint8_t command) {

    uint8_t ret = 0;
    uint8_t dummy = 0;
    mcu_send_and_wait(channel, command);
    mcu_get_command_data(channel, &ret, &dummy);
    return ret;
}
#endif //#ifdef PLL_SHARING_ROUTE
