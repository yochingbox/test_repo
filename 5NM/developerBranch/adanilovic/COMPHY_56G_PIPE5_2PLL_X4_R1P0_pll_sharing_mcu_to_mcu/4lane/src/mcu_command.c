/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file mcu_command.c
* \purpose MCU <-> MCU message passing
* \History
*   12/18/2019 Andrew Danilovic		Initial 
*/

#include "mcu_command_hw_interface.h"
#include "mcu_command.h"
#include "pll_state.h"

/*#include <stdio.h>*/

enum mcu_channel_slot_bit_masks {
    MCU_CHANNEL_SLOT_COMMAND_PENDING_MASK = 0x1
};

void mcu_init() BANKING_CTRL {
    mcu_set_channel_0_value(0);
    mcu_set_channel_1_value(0);
    mcu_set_channel_2_value(0);
}

bool mcu_check_pending(const uint8_t channel_responsibility_bit_map) BANKING_CTRL {
    const bool ret = ( ((channel_responsibility_bit_map >> MCU_CHANNEL_0) & mcu_get_channel_0_value() & MCU_CHANNEL_SLOT_COMMAND_PENDING_MASK) ||
                       ((channel_responsibility_bit_map >> MCU_CHANNEL_1) & mcu_get_channel_1_value() & MCU_CHANNEL_SLOT_COMMAND_PENDING_MASK) ||
                       ((channel_responsibility_bit_map >> MCU_CHANNEL_2) & mcu_get_channel_2_value() & MCU_CHANNEL_SLOT_COMMAND_PENDING_MASK) ) != 0;
    return ret;
}

bool mcu_check_command_pending(const uint8_t channel) BANKING_CTRL {

    bool pending = false;

    switch(channel) {
        case MCU_CHANNEL_0:
            pending = (mcu_get_channel_0_value() & MCU_CHANNEL_SLOT_COMMAND_PENDING_MASK) == MCU_CHANNEL_SLOT_COMMAND_PENDING_MASK;
            break;

        case MCU_CHANNEL_1:
            pending = (mcu_get_channel_1_value() & MCU_CHANNEL_SLOT_COMMAND_PENDING_MASK) == MCU_CHANNEL_SLOT_COMMAND_PENDING_MASK;
            break;

        case MCU_CHANNEL_2:
            pending = (mcu_get_channel_2_value() & MCU_CHANNEL_SLOT_COMMAND_PENDING_MASK) == MCU_CHANNEL_SLOT_COMMAND_PENDING_MASK;
            break;

        default:
            pending = false;
            break;
    }

    /*printf("mcu_check_command_pending, pending:0x%02x\n", pending);*/
    return pending;
}

void mcu_clear_pending(const uint8_t channel) BANKING_CTRL {

    switch(channel) {
        case MCU_CHANNEL_0:
            mcu_set_channel_0_value(mcu_get_channel_0_value() & ~MCU_CHANNEL_SLOT_COMMAND_PENDING_MASK);
            break;

        case MCU_CHANNEL_1:
            mcu_set_channel_1_value(mcu_get_channel_1_value() & ~MCU_CHANNEL_SLOT_COMMAND_PENDING_MASK);
            break;

        case MCU_CHANNEL_2:
            mcu_set_channel_2_value(mcu_get_channel_2_value() & ~MCU_CHANNEL_SLOT_COMMAND_PENDING_MASK);
            break;

        default:
            break;
    }
}

uint8_t mcu_get_command(const uint8_t channel) BANKING_CTRL {

    uint8_t command = MCU_INVALID_COMMAND;

    switch(channel) {
        case MCU_CHANNEL_0:
            command = (mcu_get_channel_0_value() & 0xFE) >> 1;
            break;

        case MCU_CHANNEL_1:
            command = (mcu_get_channel_1_value() & 0xFE) >> 1;
            break;

        case MCU_CHANNEL_2:
            command = (mcu_get_channel_2_value() & 0xFE) >> 1;
            break;
        
        default:
            break;
    }

    return command;
}

void mcu_execute_loadspeedtbl_lc_pll(const uint8_t channel) BANKING_CTRL {

    uint8_t pll_rate_sel_local = 0;
    uint8_t fref_local = 0;

    mcu_get_command_data(channel, &pll_rate_sel_local, &fref_local);

    /*loadspeedtbl_lc_pll(pll_rate_sel_local, fref_local, tsrs_sel);*/
    /*pll_state__handle_event(MCU_LOADSPEEDTBL_LC_PLL_TS, pll_rate_sel_local, fref_local);*/
}

void mcu_get_command_data(const uint8_t channel,
                                         uint8_t *data1,
                                         uint8_t *data2) BANKING_CTRL {
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

void mcu_execute_loadspeedtbl_lc_pll_ts(const uint8_t channel) BANKING_CTRL {
    mcu_execute_loadspeedtbl_lc_pll(channel);
}

void mcu_execute_loadspeedtbl_lc_pll_rs(const uint8_t channel) BANKING_CTRL {
    mcu_execute_loadspeedtbl_lc_pll(channel);
}

void mcu_execute(const uint8_t command, const uint8_t channel, const uint8_t data1) BANKING_CTRL {

    switch(command) {
        case MCU_POWER_UP_RS_PLL:
            drv_pll_rs_on_seq();
            break;

        case MCU_POWER_UP_TS_PLL:
            drv_pll_ts_on_seq();
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

        /*case MCU_LOADSPEEDTBL_LC_PLL_TS:*/
            /*mcu_execute_loadspeedtbl_lc_pll_ts(channel);*/
            /*break;*/

        /*case MCU_LOADSPEEDTBL_LC_PLL_RS:*/
            /*mcu_execute_loadspeedtbl_lc_pll_rs(channel);*/
            /*break;*/

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

        case MCU_DRV_PLL_DTC_CLK_OFF:
            drv_pll_dtx_clk_off();
            break;

        case MCU_DRV_PLL_DTC_LANE_OFF:
            drv_pll_dtx_lane_off();
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

        case MCU_REQUEST_PLL_ACCESS:
            /*printf("mcu_execute, MCU_REQUEST_PLL_ACCESS, channel: 0x%02x, data1: 0x%02x\n", channel, data1);*/
            mcu_put_command_data(channel, data1, 0);
            break;

        case MCU_FREE_PLL:
            /*printf("mcu_execute, MCU_FREE_PLL, channel:0x%02x\n", channel);*/
            break;

        case MCU_POWER_P2_TO_P1:
            drv_pll_p2_to_p1();
            break;

        default:
            break;
    }
}

uint8_t mcu_check_and_execute(const uint8_t channel_responsibility_bit_map) BANKING_CTRL {

    uint8_t command = MCU_INVALID_COMMAND;
    uint8_t channel = 0;
   
    //check if there is any command pending 
    if(mcu_check_pending(channel_responsibility_bit_map)) {

        //some command is pending. Pull a command and process it
        for(channel = 0; channel < MCU_NUM_CHANNELS; channel++) {
            if(channel_responsibility_bit_map & (1 << channel)) {
                if(mcu_check_command_pending(channel)) {
                    command = mcu_get_command(channel);
                    mcu_execute(command, channel, 0);
                    mcu_clear_pending(channel);
                    break;
                }
            }
        }
    }

    return command;
}

uint8_t mcu_check_and_execute_return(const uint8_t channel_responsibility_bit_map,
                                                        const uint8_t return_code) BANKING_CTRL {

    uint8_t command = MCU_INVALID_COMMAND;
    uint8_t channel = 0;
   
    //check if there is any command pending 
    if(mcu_check_pending(channel_responsibility_bit_map)) {

        //some command is pending. Pull a command and process it
        for(channel = 0; channel < MCU_NUM_CHANNELS; channel++) {
            if(channel_responsibility_bit_map & (1 << channel)) {
                if(mcu_check_command_pending(channel)) {
                    command = mcu_get_command(channel);
                    mcu_execute(command, channel, return_code);
                    mcu_clear_pending(channel);
                    break;
                }
            }
        }
    }

    return command;
}

bool mcu_check_pll_access_request(const uint8_t channel_responsibility_bit_map) BANKING_CTRL {

    uint8_t command = MCU_INVALID_COMMAND;
    uint8_t channel = 0;

    /*printf("mcu_check_pll_access_request, channel_responsibility_bit_map:0x%08x\n", channel_responsibility_bit_map);*/
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
                                const uint8_t command_to_check) BANKING_CTRL {
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

/*uint8_t mcu_execute_all_channels(const uint8_t channel_responsibility_bit_map) BANKING_CTRL {*/

    /*uint8_t command = MCU_INVALID_COMMAND;*/
    /*uint8_t channel = 0;*/
    /*uint8_t channels_with_commands = 0;*/
   
    /*for(channel = 0; channel < MCU_NUM_CHANNELS; channel++) {*/
        /*if(channel_responsibility_bit_map & (1 << channel)) {*/
            /*if(mcu_check_command_pending(channel)) {*/
                /*channels_with_commands |= (1 << channel);*/
            /*}*/
        /*}*/
    /*}*/

    /*for(channel = 0; channel < MCU_NUM_CHANNELS; channel++) {*/
        /*if(channel_responsibility_bit_map & channels_with_commands & (1 << channel)) {*/
            /*command = mcu_get_command(channel);*/
            /*mcu_execute(command, channel);*/
        /*}*/
    /*}*/

    /*pll_*/

    /*for(channel = 0; channel < MCU_NUM_CHANNELS; channel++) {*/
        /*if(channel_responsibility_bit_map & channels_with_commands & (1 << channel)) {*/
            /*mcu_clear_pending(channel);*/
        /*}*/
    /*}*/

    /*return command;*/
/*}*/

void mcu_send(const uint8_t channel, const uint8_t command) BANKING_CTRL {

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

void mcu_send_and_wait(const uint8_t channel, const uint8_t command) BANKING_CTRL {

    uint8_t phy_status_saved = PHY_STATUS;

	PHY_STATUS = ST_MCU_COMMAND_WAIT;

    /*printf("mcu_send_and_wait, channel:%d, command:0x%02x\n",*/
        /*channel, command);*/

    switch(channel) {
        case MCU_CHANNEL_0:
            mcu_set_channel_0_value((command << 1) | 0x1);
            while((mcu_get_channel_0_value() & 0x1) != 0);
            break;

        case MCU_CHANNEL_1:
            mcu_set_channel_1_value((command << 1) | 0x1);
            while((mcu_get_channel_1_value() & 0x1) != 0);
            break;

        case MCU_CHANNEL_2:
            mcu_set_channel_2_value((command << 1) | 0x1);
            while((mcu_get_channel_2_value() & 0x1) != 0);
            break;

        default:
            break;
    }
	
    PHY_STATUS = phy_status_saved;
}

void mcu_put_command_data(const uint8_t channel,
                                   const uint8_t data0,
                                   const uint8_t data1) BANKING_CTRL {

    uint8_t *data_payload_ptr = 0;

    switch(channel) {
        case MCU_CHANNEL_0:
            data_payload_ptr = mcu_get_data_payload_ptr_channel0();
            break;

        case MCU_CHANNEL_1:
            data_payload_ptr = mcu_get_data_payload_ptr_channel1();
            break;

        case MCU_CHANNEL_2:
            data_payload_ptr = mcu_get_data_payload_ptr_channel2();
            break;

        default:
            break;
    }

    if(data_payload_ptr) {
        data_payload_ptr[0] = data0;
        data_payload_ptr[1] = data1;
    }
}

void mcu_send_and_wait_with_data(const uint8_t channel,
                                 const uint8_t command,
                                 const uint8_t data0,
                                 const uint8_t data1) BANKING_CTRL {
    mcu_put_command_data(channel, data0, data1);
    mcu_send_and_wait(channel, command);
}

uint8_t mcu_send_and_wait_ret(const uint8_t channel,
                              uint8_t command) BANKING_CTRL {

    /*printf("mcu_send_and_wait_ret, channel:0x%08x\n", channel);*/
    uint8_t ret = 0;
    uint8_t dummy = 0;
    mcu_send_and_wait(channel, command);
    mcu_get_command_data(channel, &ret, &dummy);
    return ret;
}
/*
void mcu_test() {
    reg_MCU_DEBUG0_LANE_7_0 = 0x77;		

    if(mcuid == MCU_LANE0) {
        while(command_count < 30) {
            command = mcu_check_and_execute();
            if(command != MCU_INVALID_COMMAND) {
                command_count++;
                reg_MCU_DEBUG1_LANE_7_0 = command_count;		
                reg_MCU_DEBUG2_LANE_7_0 = command;		
            }
        }
    }

    if(mcuid == MCU_LANE1) {
        for(command_count = 0; command_count < 10; command_count++) {
            delay(T_3us);
            reg_MCU_DEBUG0_LANE_7_0 = 1;
            mcu_send_and_wait(MCU_CHANNEL_0, MCU_POWER_UP_PLL);
            reg_MCU_DEBUG0_LANE_7_0 = 0;
        }
    }

    if(mcuid == MCU_LANE2) {
        for(command_count = 0; command_count < 10; command_count++) {
            delay(T_7p5us);
            reg_MCU_DEBUG0_LANE_7_0 = 1;
            mcu_send_and_wait(MCU_CHANNEL_1, MCU_POWER_SLUMBER_PLL);
            reg_MCU_DEBUG0_LANE_7_0 = 0;
        }
    }

    if(mcuid == MCU_LANE3) {
        for(command_count = 0; command_count < 10; command_count++) {
            delay(T_9us);
            reg_MCU_DEBUG0_LANE_7_0 = 1;
            mcu_send_and_wait(MCU_CHANNEL_2, MCU_POWER_DOWN_PLL);
            reg_MCU_DEBUG0_LANE_7_0 = 0;
        }
    }
}
*/
