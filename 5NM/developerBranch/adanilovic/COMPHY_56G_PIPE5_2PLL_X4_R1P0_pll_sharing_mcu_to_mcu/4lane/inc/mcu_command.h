/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file mcu_command.h
* \purpose Definitions, Declaration
* \History
*	12/18/2019 Andrew Danilovic		Initial commit
*/
#ifndef MCU_COMMAND_H
#define MCU_COMMAND_H

enum mcu_command {
    MCU_INVALID_COMMAND             = 0x00,
    MCU_POWER_UP_RS_PLL             = 0x01,
    MCU_POWER_UP_TS_PLL             = 0x02,
    MCU_RESET_INTPRESET_EXT_RS      = 0x03,
    MCU_RESET_INTPRESET_EXT_TS      = 0x04,
    MCU_RESET_RS_PLL                = 0x05,
    MCU_RESET_TS_PLL                = 0x06,
    MCU_LOADSPEEDTBL_LC_PLL_TS      = 0x07,
    MCU_LOADSPEEDTBL_LC_PLL_RS      = 0x08,
    MCU_TURN_ON_TX_CONT_CAL_TS_PLL  = 0x09,
    MCU_TURN_ON_RX_CONT_CAL_RS_PLL  = 0x0A,
    MCU_TURN_OFF_TX_CONT_CAL_TS_PLL = 0x0B,
    MCU_TURN_OFF_RX_CONT_CAL_RS_PLL = 0x0C,
    MCU_DRV_PLL_DTC_CLK_OFF         = 0x0D,
    MCU_DRV_PLL_DTC_LANE_OFF        = 0x0E,
    MCU_RS_OFF_DIG_PROT_EN          = 0x0F,
    MCU_TS_OFF_DIG_PROT_EN          = 0x10,
    MCU_SPD_CHG_RESET_PLL_TS        = 0x11,
    MCU_SPD_CHG_RESET_PLL_RS        = 0x12,
    MCU_SPD_CHG_CLR_RESET_PLL_TS    = 0x13,
    MCU_SPD_CHG_CLR_RESET_PLL_RS    = 0x14,
    MCU_SPD_CHG_PLL_CAL_TX          = 0x15,
    MCU_SPD_CHG_PLL_CAL_RX          = 0x16,
    MCU_REQUEST_PLL_ACCESS          = 0x17,
    MCU_FREE_PLL                    = 0x18,
    MCU_POWER_P2_TO_P1              = 0x19,
};

enum mcu_message_channel {
    MCU_CHANNEL_0 = 0,
    MCU_CHANNEL_1 = 1,
    MCU_CHANNEL_2 = 2,
    MCU_NUM_CHANNELS
};

void mcu_init() BANKING_CTRL;

bool mcu_check_pending(const uint8_t channel_responsibility_bit_map) BANKING_CTRL;

void mcu_get_command_data(const uint8_t channel,
                          uint8_t *data1,
                          uint8_t *data2) BANKING_CTRL;

void mcu_put_command_data(const uint8_t channel,
                          const uint8_t data0,
                          const uint8_t data1) BANKING_CTRL;

bool mcu_check_pll_access_request(const uint8_t channel_responsibility_bit_map) BANKING_CTRL;
uint8_t mcu_get_channel_pending(const uint8_t channel_responsibility_bit_map,
                                const uint8_t command_to_check) BANKING_CTRL;

void mcu_execute(const uint8_t command, const uint8_t channel, const uint8_t data1) BANKING_CTRL;
uint8_t mcu_check_and_execute(const uint8_t channel_responsibility_bit_map) BANKING_CTRL;
uint8_t mcu_check_and_execute_return(const uint8_t channel_responsibility_bit_map,
                                                        const uint8_t return_code) BANKING_CTRL;
void mcu_send(const uint8_t channel, const uint8_t command) BANKING_CTRL;
void mcu_send_and_wait(const uint8_t channel, const uint8_t command) BANKING_CTRL;
void mcu_send_and_wait_with_data(const uint8_t channel,
                                          const uint8_t command,
                                          const uint8_t data0,
                                          const uint8_t data1) BANKING_CTRL;
uint8_t mcu_send_and_wait_ret(const uint8_t channel,
                              uint8_t command) BANKING_CTRL;

#endif //#ifndef MCU_COMMAND_H
