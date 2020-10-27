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

enum MCU_COMMAND__COMMANDS {
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
    MCU_DRV_RS_PLL_DTC_CLK_OFF      = 0x0D,
    MCU_DRV_TS_PLL_DTC_CLK_OFF      = 0x0E,
    MCU_DRV_RS_PLL_DTC_LANE_OFF     = 0x0F,
    MCU_DRV_TS_PLL_DTC_LANE_OFF     = 0x10,
    MCU_RS_OFF_DIG_PROT_EN          = 0x11,
    MCU_TS_OFF_DIG_PROT_EN          = 0x12,
    MCU_SPD_CHG_RESET_PLL_TS        = 0x13,
    MCU_SPD_CHG_RESET_PLL_RS        = 0x14,
    MCU_SPD_CHG_CLR_RESET_PLL_TS    = 0x15,
    MCU_SPD_CHG_CLR_RESET_PLL_RS    = 0x16,
    MCU_SPD_CHG_PLL_CAL_TX          = 0x17,
    MCU_SPD_CHG_PLL_CAL_RX          = 0x18,
    MCU_REQUEST_PLL_ACCESS          = 0x19,
    MCU_FREE_PLL                    = 0x1A,
    MCU_PLL_POWER_ON                = 0x1B,
    MCU_PLL_POWER_OFF               = 0X1C,
    MCU_CLR_TS_RST_CLK_READY        = 0x1D,
    MCU_CLR_RS_RST_CLK_READY        = 0x1E,
    MCU_LOAD_INIT_TEMP_TABLE        = 0x1F,
    MCU_PLL_CLK_RDY_ALL_0           = 0x20,
    MCU_PLL_CAL_LOAD_SPD_TBL        = 0x21,
    MCU_CLK_RX_READY_0              = 0x22,
    MCU_RX_CAL                      = 0x23,
    MCU_CLK_TX_READY_0              = 0x24,
    MCU_TX_CAL                      = 0x25,
    MCU_RX_CAL_LOAD                 = 0x26,
    MCU_TX_CAL_LOAD                 = 0x27,
    MCU_RX_PLL_DIG_OFF              = 0x28,
    MCU_RX_PLL_DIG_ON               = 0x29,
    MCU_TX_PLL_DIG_OFF              = 0x2A,
    MCU_TX_PLL_DIG_ON               = 0x2B,
    MCU_CLK_RS_READY_1              = 0x2C,
    MCU_CLK_TS_READY_1              = 0x2D,
    MCU_RX_PLL_ANA_OFF              = 0x2E,
    MCU_TX_PLL_ANA_OFF              = 0x2F,
    MCU_RX_PLL_ANA_ON               = 0x30,
    MCU_TX_PLL_ANA_ON               = 0x31,
    MCU_TX_PLL_DIG_OFF_SPD_CHG      = 0x32,
    MCU_RX_PLL_DIG_OFF_SPD_CHG      = 0x33,
    MCU_ALL_CAL_EXT_RX              = 0x34,
    MCU_ALL_CAL_EXT_TX              = 0x35,
};

enum MCU_COMMAND__MCU_MESSAGE_CHANNEL {
    MCU_CHANNEL_0 = 0,
    MCU_CHANNEL_1 = 1,
    MCU_CHANNEL_2 = 2,
    MCU_NUM_CHANNELS
};

void mcu_init() BANKING_CTRL;

bool mcu_check_pending(const uint8_t channel_responsibility_bit_map);

void mcu_get_command_data(const uint8_t channel,
                          uint8_t *data1,
                          uint8_t *data2);

void mcu_put_command_data(const uint8_t channel,
                          const uint8_t data0,
                          const uint8_t data1);

bool mcu_check_pll_access_request(const uint8_t channel_responsibility_bit_map);
uint8_t mcu_get_channel_pending(const uint8_t channel_responsibility_bit_map,
                                const uint8_t command_to_check);

void mcu_execute(const uint8_t command,
                 const uint8_t channel,
                 const uint8_t data1,
                 const uint8_t data2);
uint8_t mcu_check_and_execute(const uint8_t channel_responsibility_bit_map);
uint8_t mcu_check_and_execute_return(const uint8_t channel_responsibility_bit_map,
                                     const uint8_t return_code,
                                     const uint8_t mcu_command_channel);
void mcu_send(const uint8_t channel, const uint8_t command);
void mcu_send_and_wait(const uint8_t channel, const uint8_t command);
void mcu_send_and_wait_with_data(const uint8_t channel,
                                          const uint8_t command,
                                          const uint8_t data0,
                                          const uint8_t data1);
uint8_t mcu_send_and_wait_ret(const uint8_t channel,
                              uint8_t command);

#endif //#ifndef MCU_COMMAND_H
