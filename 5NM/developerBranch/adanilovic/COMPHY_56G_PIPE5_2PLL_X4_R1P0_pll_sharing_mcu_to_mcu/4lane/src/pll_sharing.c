/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file pll_sharing.c
* \purpose Code to route pll functions to master MCU or slave MCU
* \History
*	1/6/2020   Andrew Danilovic Initial commit
*   
*/
/*#include <stdio.h>*/
#include "pll_sharing_hw_interface.h"
#include "pll_sharing.h"
#include "mcu_command.h"
#include "pll_state.h"

void pll_drv_power_on_ana_pll() BANKING_CTRL {
    if(pll_sel != TS_ON)  {
        if(pll_access_allowed(PLL__RS_OR_TS__RS)) {
            /*drv_pll_rs_on_seq();*/
            pll_m_handle_event(pll_m_get_master_index_from_mcuid(mcuid),
                               PLL_MASTER_LANE_COMMAND__PllAccessCommand,
                               MCU_POWER_UP_RS_PLL);
        }
        else {
            if(pll_reg_access_allowed_by_any_mcu(PLL__RS_OR_TS__RS)) {
                pll_s_handle_event(mcuid, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_POWER_UP_RS_PLL);
            }
        }
    }
    if(pll_sel != RS_ON)  {
        if(pll_access_allowed(PLL__RS_OR_TS__TS)) {
            /*pll_state__handle_event(MCU_POWER_UP_TS_PLL, 0, 0);*/
            /*pll_wait_for_valid_command(MCU_POWER_UP_TS_PLL, 0);*/
            pll_m_handle_event(pll_m_get_master_index_from_mcuid(mcuid),
                               PLL_MASTER_LANE_COMMAND__PllAccessCommand,
                               MCU_POWER_UP_TS_PLL);
        }
        else {
            if(pll_reg_access_allowed_by_any_mcu(PLL__RS_OR_TS__TS)) {
                pll_s_handle_event(mcuid, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_POWER_UP_TS_PLL);
            }
        }
    }
}

void pll_drv_reset_ts_rs_tx_intpreset_ext() BANKING_CTRL {
    if(pll_sel != TS_ON)  {
        if(pll_access_allowed(PLL__RS_OR_TS__RS)) {
            /*reg_PLL_RS_TX_INTPRESET_EXT_LANE = 0;*/
            pll_m_handle_event(pll_m_get_master_index_from_mcuid(mcuid),
                               PLL_MASTER_LANE_COMMAND__PllAccessCommand,
                               MCU_RESET_INTPRESET_EXT_RS);
        }
        else {
            if(pll_reg_access_allowed_by_any_mcu(PLL__RS_OR_TS__RS)) {
                pll_s_handle_event(mcuid, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_RESET_INTPRESET_EXT_RS);
            }
        }
    }
    if(pll_sel != RS_ON)  {
        if(pll_access_allowed(PLL__RS_OR_TS__TS)) {
            /*pll_state__handle_event(MCU_RESET_INTPRESET_EXT_TS, 0, 0);*/
            /*pll_wait_for_valid_command(MCU_RESET_INTPRESET_EXT_TS, 0);*/
            pll_m_handle_event(pll_m_get_master_index_from_mcuid(mcuid),
                               PLL_MASTER_LANE_COMMAND__PllAccessCommand,
                               MCU_RESET_INTPRESET_EXT_TS);
        }
        else {
            if(pll_reg_access_allowed_by_any_mcu(PLL__RS_OR_TS__TS)) {
                pll_s_handle_event(mcuid, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_RESET_INTPRESET_EXT_TS);
            }
        }
    }
}

void pll_drv_pll_rs_reset() BANKING_CTRL {
    if(pll_access_allowed(PLL__RS_OR_TS__RS)) {
        /*drv_pll_rs_reset();*/
        pll_m_handle_event(pll_m_get_master_index_from_mcuid(mcuid),
                           PLL_MASTER_LANE_COMMAND__PllAccessCommand,
                           MCU_RESET_RS_PLL);
    }
    else {
        if(pll_reg_access_allowed_by_any_mcu(PLL__RS_OR_TS__RS)) {
            pll_s_handle_event(mcuid, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_RESET_RS_PLL);
        }
    }
}

void pll_drv_pll_ts_reset() BANKING_CTRL {
    if(pll_access_allowed(PLL__RS_OR_TS__TS)) {
        /*pll_state__handle_event(MCU_RESET_TS_PLL, 0, 0);*/
        /*pll_wait_for_valid_command(MCU_RESET_TS_PLL, 0);*/
        pll_m_handle_event(pll_m_get_master_index_from_mcuid(mcuid),
                           PLL_MASTER_LANE_COMMAND__PllAccessCommand,
                           MCU_RESET_TS_PLL);
    }
    else {
        if(pll_reg_access_allowed_by_any_mcu(PLL__RS_OR_TS__TS)) {
            pll_s_handle_event(mcuid, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_RESET_TS_PLL);
        }
    }
}

void pll_loadspeedtbl_lc_pll_ts() BANKING_CTRL {
    if(pll_access_allowed(PLL__RS_OR_TS__TS)) {
        /*pll_state__handle_event(MCU_LOADSPEEDTBL_LC_PLL_TS, pll_rate_sel_local, fref_local);*/
        pll_m_handle_event(pll_m_get_master_index_from_mcuid(mcuid),
                           PLL_MASTER_LANE_COMMAND__PllAccessCommand,
                           MCU_LOADSPEEDTBL_LC_PLL_TS);
    }
    else {
        /*mcu_send_and_wait_with_data(pll_which_mcu_command_channel_to_send(reg_MCU_ID_LANE_7_0),*/
                                           /*MCU_LOADSPEEDTBL_LC_PLL_TS,*/
                                           /*pll_rate_sel_local,*/
                                           /*fref_local);*/
        pll_s_handle_event(mcuid, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_LOADSPEEDTBL_LC_PLL_TS);
    }
}

void pll_loadspeedtbl_lc_pll_rs() BANKING_CTRL {
    if(pll_access_allowed(PLL__RS_OR_TS__RS)) {
        /*loadspeedtbl_lc_pll(pll_rate_sel_local, fref_local, 1);*/
        pll_m_handle_event(pll_m_get_master_index_from_mcuid(mcuid),
                           PLL_MASTER_LANE_COMMAND__PllAccessCommand,
                           MCU_LOADSPEEDTBL_LC_PLL_RS);
    }
    else {
        if(pll_reg_access_allowed_by_any_mcu(PLL__RS_OR_TS__RS)) {
            /*mcu_send_and_wait_with_data(pll_which_mcu_command_channel_to_send(reg_MCU_ID_LANE_7_0),*/
                                                 /*MCU_LOADSPEEDTBL_LC_PLL_RS,*/
                                                 /*pll_rate_sel_local,*/
                                                 /*fref_local);*/
            pll_s_handle_event(mcuid, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_LOADSPEEDTBL_LC_PLL_RS);
        }
    }
}

void pll_turn_on_tx_cont_cal_ts_pll() BANKING_CTRL {

    if(pll_access_allowed(PLL__RS_OR_TS__TS)) {
        /*turn_on_tx_cont_cal_ts_pll();*/
        pll_m_handle_event(pll_m_get_master_index_from_mcuid(mcuid),
                           PLL_MASTER_LANE_COMMAND__PllAccessCommand,
                           MCU_TURN_ON_TX_CONT_CAL_TS_PLL);
    }
    else {
        if(pll_reg_access_allowed_by_any_mcu(PLL__RS_OR_TS__TS)) {
            pll_s_handle_event(mcuid, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_TURN_ON_TX_CONT_CAL_TS_PLL);
        }
    }
}

void pll_turn_on_rx_cont_cal_rs_pll() BANKING_CTRL {

    if(pll_access_allowed(PLL__RS_OR_TS__RS)) {
        /*turn_on_rx_cont_cal_rs_pll();*/
        pll_m_handle_event(pll_m_get_master_index_from_mcuid(mcuid),
                           PLL_MASTER_LANE_COMMAND__PllAccessCommand,
                           MCU_TURN_ON_RX_CONT_CAL_RS_PLL);
    }
    else {
        if(pll_reg_access_allowed_by_any_mcu(PLL__RS_OR_TS__RS)) {
            pll_s_handle_event(mcuid, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_TURN_ON_RX_CONT_CAL_RS_PLL);
        }
    }
}

void pll_turn_off_tx_cont_cal_ts_pll() BANKING_CTRL {

    if(pll_access_allowed(PLL__RS_OR_TS__TS)) {
        /*turn_off_tx_cont_cal_ts_pll();*/
        pll_m_handle_event(pll_m_get_master_index_from_mcuid(mcuid),
                           PLL_MASTER_LANE_COMMAND__PllAccessCommand,
                           MCU_TURN_OFF_TX_CONT_CAL_TS_PLL);
    }
    else {
        if(pll_reg_access_allowed_by_any_mcu(PLL__RS_OR_TS__TS)) {
            pll_s_handle_event(mcuid, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_TURN_OFF_TX_CONT_CAL_TS_PLL);
        }
    }
}

void pll_turn_off_rx_cont_cal_rs_pll() BANKING_CTRL {

    if(pll_access_allowed(PLL__RS_OR_TS__RS)) {
        /*turn_off_rx_cont_cal_rs_pll();*/
        pll_m_handle_event(pll_m_get_master_index_from_mcuid(mcuid),
                           PLL_MASTER_LANE_COMMAND__PllAccessCommand,
                           MCU_TURN_OFF_RX_CONT_CAL_RS_PLL);
    }
    else {
        if(pll_reg_access_allowed_by_any_mcu(PLL__RS_OR_TS__RS)) {
            pll_s_handle_event(mcuid, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_TURN_OFF_RX_CONT_CAL_RS_PLL);
        }
    }
}

void pll_drv_pll_dtx_clk_off() BANKING_CTRL {

    if(pll_access_allowed(PLL__RS_OR_TS__TS)) {
        /*pll_state__handle_event(MCU_DRV_PLL_DTC_CLK_OFF, 0, 0);*/
        /*pll_wait_for_valid_command(MCU_DRV_PLL_DTC_CLK_OFF, 0);*/
        pll_m_handle_event(pll_m_get_master_index_from_mcuid(mcuid),
                           PLL_MASTER_LANE_COMMAND__PllAccessCommand,
                           MCU_DRV_PLL_DTC_CLK_OFF);
    }
    else {
        if(pll_reg_access_allowed_by_any_mcu(PLL__RS_OR_TS__TS)) {
            pll_s_handle_event(mcuid, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_DRV_PLL_DTC_CLK_OFF);
        }
    }
}

void pll_drv_pll_dtx_lane_off() BANKING_CTRL {

    if(pll_access_allowed(PLL__RS_OR_TS__TS)) {
        /*pll_state__handle_event(MCU_DRV_PLL_DTC_LANE_OFF, 0, 0);*/
        /*pll_wait_for_valid_command(MCU_DRV_PLL_DTC_LANE_OFF, 0);*/
        pll_m_handle_event(pll_m_get_master_index_from_mcuid(mcuid),
                           PLL_MASTER_LANE_COMMAND__PllAccessCommand,
                           MCU_DRV_PLL_DTC_LANE_OFF);
    }
    else {
        if(pll_reg_access_allowed_by_any_mcu(PLL__RS_OR_TS__TS)) {
            pll_s_handle_event(mcuid, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_DRV_PLL_DTC_LANE_OFF);
        }
    }
}

void pll_drv_pll_rs_off_dig_prot_en() BANKING_CTRL {

    if(pll_access_allowed(PLL__RS_OR_TS__RS)) {
        /*drv_pll_rs_off_dig_prot_en();*/
        pll_m_handle_event(pll_m_get_master_index_from_mcuid(mcuid),
                           PLL_MASTER_LANE_COMMAND__PllAccessCommand,
                           MCU_RS_OFF_DIG_PROT_EN);
    }
    else {
        if(pll_reg_access_allowed_by_any_mcu(PLL__RS_OR_TS__RS)) {
            pll_s_handle_event(mcuid, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_RS_OFF_DIG_PROT_EN);
        }
    }
}

void pll_drv_pll_ts_off_dig_prot_en() BANKING_CTRL {

    if(pll_access_allowed(PLL__RS_OR_TS__TS)) {
        /*pll_state__handle_event(MCU_TS_OFF_DIG_PROT_EN, 0, 0);*/
        /*pll_wait_for_valid_command(MCU_TS_OFF_DIG_PROT_EN, 0);*/
        pll_m_handle_event(pll_m_get_master_index_from_mcuid(mcuid),
                           PLL_MASTER_LANE_COMMAND__PllAccessCommand,
                           MCU_TS_OFF_DIG_PROT_EN);
    }
    else {
        if(pll_reg_access_allowed_by_any_mcu(PLL__RS_OR_TS__TS)) {
            pll_s_handle_event(mcuid, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_TS_OFF_DIG_PROT_EN);
        }
    }
}

void pll_drv_pll_spd_chg_reset_pll_ts() BANKING_CTRL {

    if(pll_access_allowed(PLL__RS_OR_TS__TS)) {
        /*pll_state__handle_event(MCU_SPD_CHG_RESET_PLL_TS, 0, 0);*/
        /*pll_wait_for_valid_command(MCU_SPD_CHG_RESET_PLL_TS, 0);*/
        pll_m_handle_event(pll_m_get_master_index_from_mcuid(mcuid),
                           PLL_MASTER_LANE_COMMAND__PllAccessCommand,
                           MCU_SPD_CHG_RESET_PLL_TS);
    }
    else {
        if(pll_reg_access_allowed_by_any_mcu(PLL__RS_OR_TS__TS)) {
            pll_s_handle_event(mcuid, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_SPD_CHG_RESET_PLL_TS);
        }
    }
}

void pll_drv_pll_spd_chg_reset_pll_rs() BANKING_CTRL {

    if(pll_access_allowed(PLL__RS_OR_TS__RS)) {
        /*drv_pll_spd_chg_reset_pll_rs();*/
        pll_m_handle_event(pll_m_get_master_index_from_mcuid(mcuid),
                           PLL_MASTER_LANE_COMMAND__PllAccessCommand,
                           MCU_SPD_CHG_RESET_PLL_RS);
    }
    else {
        if(pll_reg_access_allowed_by_any_mcu(PLL__RS_OR_TS__RS)) {
            pll_s_handle_event(mcuid, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_SPD_CHG_RESET_PLL_RS);
        }
    }
}

void pll_drv_pll_spd_chg_clr_reset_pll_ts() BANKING_CTRL {

    if(pll_access_allowed(PLL__RS_OR_TS__TS)) {
        /*pll_state__handle_event(MCU_SPD_CHG_CLR_RESET_PLL_TS, 0, 0);*/
        pll_m_handle_event(pll_m_get_master_index_from_mcuid(mcuid),
                           PLL_MASTER_LANE_COMMAND__PllAccessCommand,
                           MCU_SPD_CHG_CLR_RESET_PLL_TS);
    }
    else {
        if(pll_reg_access_allowed_by_any_mcu(PLL__RS_OR_TS__TS)) {
            pll_s_handle_event(mcuid, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_SPD_CHG_CLR_RESET_PLL_TS);
        }
    }
}

void pll_drv_pll_spd_chg_clr_reset_pll_rs() BANKING_CTRL {

    if(pll_access_allowed(PLL__RS_OR_TS__RS)) {
        /*drv_pll_spd_chg_clr_reset_pll_rs();*/
        pll_m_handle_event(pll_m_get_master_index_from_mcuid(mcuid),
                           PLL_MASTER_LANE_COMMAND__PllAccessCommand,
                           MCU_SPD_CHG_CLR_RESET_PLL_RS);
    }
    else {
        if(pll_reg_access_allowed_by_any_mcu(PLL__RS_OR_TS__RS)) {
            pll_s_handle_event(mcuid, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_SPD_CHG_CLR_RESET_PLL_RS);
        }
    }
}

void pll_drv_pll_spd_chg_pll_cal_tx() BANKING_CTRL {

    if(pll_access_allowed(PLL__RS_OR_TS__TS)) {
        /*pll_state__handle_event(MCU_SPD_CHG_PLL_CAL_TX, 0, 0);*/
        /*pll_wait_for_valid_command(MCU_SPD_CHG_PLL_CAL_TX, 0);*/
        pll_m_handle_event(pll_m_get_master_index_from_mcuid(mcuid),
                           PLL_MASTER_LANE_COMMAND__PllAccessCommand,
                           MCU_SPD_CHG_PLL_CAL_TX);
    }
    else {
        if(pll_reg_access_allowed_by_any_mcu(PLL__RS_OR_TS__TS)) {
            pll_s_handle_event(mcuid, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_SPD_CHG_PLL_CAL_TX);
        }
    }
}

void pll_drv_pll_spd_chg_pll_cal_rx() BANKING_CTRL {

    if(pll_access_allowed(PLL__RS_OR_TS__RS)) {
        /*drv_pll_spd_chg_pll_cal_rx();*/
        pll_m_handle_event(pll_m_get_master_index_from_mcuid(mcuid),
                           PLL_MASTER_LANE_COMMAND__PllAccessCommand,
                           MCU_SPD_CHG_PLL_CAL_RX);
    }
    else {
        if(pll_reg_access_allowed_by_any_mcu(PLL__RS_OR_TS__RS)) {
            pll_s_handle_event(mcuid, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_SPD_CHG_PLL_CAL_RX);
        }
    }
}

void pll_drv_pll_power_p2_to_p1() BANKING_CTRL {
    if(pll_access_allowed(PLL__RS_OR_TS__TS)) {
        pll_m_handle_event(pll_m_get_master_index_from_mcuid(mcuid),
                           PLL_MASTER_LANE_COMMAND__PllAccessCommand,
                           MCU_POWER_P2_TO_P1);
    }
    else {
        if(pll_reg_access_allowed_by_any_mcu(PLL__RS_OR_TS__TS)) {
            pll_s_handle_event(mcuid, PLL_SLAVE_LANE_COMMAND__PllAccessCommand, MCU_POWER_P2_TO_P1);
        }
    }
}

bool pll_sharing__get_pu_pll_or(const uint8_t my_mcuid_local) BANKING_CTRL {

    switch (reg_SHARE_PLL_MODE_LANE_1_0) {
        case 0:
        case 1:
            if(reg_PIN_PU_PLL_RD_LANE) {
                return true;
            }
            break;

        case 2:
            switch (my_mcuid_local) {
                case MCU_LANE0:
                case MCU_LANE1:
                    if((reg_PIN_PU_PLL_RD_LANE0) ||
                       (reg_PIN_PU_PLL_RD_LANE1) ) {
                        return true;
                    }
                    break;

                case MCU_LANE2:
                case MCU_LANE3:
                    if((reg_PIN_PU_PLL_RD_LANE2) ||
                       (reg_PIN_PU_PLL_RD_LANE3) ) {
                        return true;
                    }
                    break;
            }
            break;
        
        case 3:
            if((reg_PIN_PU_PLL_RD_LANE0) ||
               (reg_PIN_PU_PLL_RD_LANE1) ||
               (reg_PIN_PU_PLL_RD_LANE2) ||
               (reg_PIN_PU_PLL_RD_LANE3) ) {
                return true;
            }
            break;
    }

    return false;    
}

uint8_t pll_read_pll_ts_lock() BANKING_CTRL {
    switch (mcuid) {
        case MCU_LANE0:
            return reg_PLL_TS_LOCK_RD_LANE0;
            break;
        case MCU_LANE1:
            return reg_PLL_TS_LOCK_RD_LANE1;
            break;
        case MCU_LANE2:
            return reg_PLL_TS_LOCK_RD_LANE2;
            break;
        case MCU_LANE3:
            return reg_PLL_TS_LOCK_RD_LANE3;
            break;
        default:
            break;
    }
    return 0;
}

uint8_t pll_read_pll_rs_lock() BANKING_CTRL {
    switch (mcuid) {
        case MCU_LANE0:
            return reg_PLL_RS_LOCK_RD_LANE0;
            break;
        case MCU_LANE1:
            return reg_PLL_RS_LOCK_RD_LANE1;
            break;
        case MCU_LANE2:
            return reg_PLL_RS_LOCK_RD_LANE2;
            break;
        case MCU_LANE3:
            return reg_PLL_RS_LOCK_RD_LANE3;
            break;
        default:
            break;
    }
    return 0;
}

uint8_t pll_which_mcu_command_channel_to_send(const uint8_t my_mcu_id) BANKING_CTRL {

    switch (my_mcu_id) {
        case MCU_LANE1:
            return MCU_CHANNEL_0;
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

uint8_t pll_get_mcu_command_channel_receive(const uint8_t my_mcu_id) BANKING_CTRL {

    switch(reg_SHARE_PLL_MODE_LANE_1_0) {
        case 0:
        case 1:
            break;

        case 2:
            switch(my_mcu_id) {
                case MCU_LANE0:
                    return (1 << MCU_CHANNEL_0);
                    break;
                case MCU_LANE2:
                    return (1 << MCU_CHANNEL_2);
                    break;
            }
            break;
        case 3:
            switch(my_mcu_id) {
                case MCU_LANE0:
                    return ((1 << MCU_CHANNEL_0) |
                            (1 << MCU_CHANNEL_1) |
                            (1 << MCU_CHANNEL_2));
                    break;
            }
            break;

        default:
            break;
    }

    return 0;
}

uint8_t pll_get_lane_bit_map(const uint8_t channel_send_bit_map) BANKING_CTRL {

    uint8_t lane_bit_map = 0;

    if(channel_send_bit_map & (1 << MCU_CHANNEL_0)) {
        lane_bit_map |= (1 << MCU_LANE1);
    }

    if(channel_send_bit_map & (1 << MCU_CHANNEL_1)) {
        lane_bit_map |= (1 << MCU_LANE2);
    }

    if(channel_send_bit_map & (1 << MCU_CHANNEL_2)) {
        lane_bit_map |= (1 << MCU_LANE3);
    }

    return lane_bit_map;
}

bool pll_access_allowed(const enum pll_rs_or_ts rs_or_ts) BANKING_CTRL {

    const uint8_t local_mcu_ctrl_pll_lane = lnx_MCU_CTRL_PLL_LANE_1_0;

    if(local_mcu_ctrl_pll_lane == 0) {
        return false;
    }

    if(local_mcu_ctrl_pll_lane == 3) {
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
}

bool pll_reg_access_allowed_by_any_mcu(const enum pll_rs_or_ts rs_or_ts) BANKING_CTRL {

    if(lnx_PLL_SEL_LANE_1_0 == 0) {
        return true;    //Tx is using TS PLL and Rx is using RS PLL, so some MCU must be in control
    }
    else if(lnx_PLL_SEL_LANE_1_0 == 3) {
        return true;    //Tx is using RS PLL and Rx is using TS PLL, so some MCU must be in control
    }

    if(rs_or_ts == PLL__RS_OR_TS__RS) {
        switch(lnx_PLL_SEL_LANE_1_0) {
            case 1:
                return false;   //Tx and Rx are using TS PLL, so no MCU should be controlling RS PLL
                break;

            case 2:
                return true;    //Tx and Rx are using RS PLL, so some MCU should be in control of it
                break;
        
            default:
                return false;
                break;
        }
    }
    else if(rs_or_ts == PLL__RS_OR_TS__TS) {
        switch(lnx_PLL_SEL_LANE_1_0) {
            case 1:
                return true;    //Tx and Rx are using TS PLL, so some MCU should be in contrl of it
                break;

            case 2:
                return false;   //Tx and Rx are using RS PLL, so no MCU should be controlling TS PLL
                break;
        
            default:
                return false;
                break;
        }
    }

    return false;
}

bool pll_is_this_mcu_a_pll_m_() BANKING_CTRL {

    switch(reg_SHARE_PLL_MODE_LANE_1_0) {
        case 0:
        case 1:
            return false;
            break;

        case 2:
        case 3:
            if(lnx_MCU_CTRL_PLL_LANE_1_0 > 0) {
                return true;
            }
            else {
                return false;
            }
            break;

        default:
            break;
    }

    return false;
}

void pll_check_and_execute_if_master() BANKING_CTRL {
    if(pll_is_this_mcu_a_pll_m_()) {
        (void) pll_m_handle_event(pll_m_get_master_index_from_mcuid(mcuid),
                                  PLL_MASTER_LANE_COMMAND__CheckIfPLLAccessPending, 0);
    }
}

void pll_wait_for_valid_command(const uint8_t command, const uint8_t channel_receive_bit_map) BANKING_CTRL {

    /*printf("pll_wait_for_valid_command: START, channel_receive_bit_map:0x%02x\n", channel_receive_bit_map);*/
    uint8_t received_command = mcu_check_and_execute(channel_receive_bit_map);

    reg_MCU_DEBUG0_LANE_7_0 = 0x80;
    reg_MCU_DEBUG1_LANE_7_0 = command;

    while(MCU_INVALID_COMMAND == received_command) {
        received_command = mcu_check_and_execute(channel_receive_bit_map);
    }

    /*printf("pll_wait_for_valid_command: END, received_command:0x%02x\n", received_command);*/

    /*reg_MCU_DEBUG0_LANE_7_0 = 0x79;*/
}
//Possible cases:
//  1. Both lanes are on and both are performing speed change at the same time
//      a. In this case, the slave lane only needs to wait for the master lane, but does
//         not need to send any commands
//  2. Master lane is on and performing speed change, slave lane is off
//      a. In this case, the master lane should go ahead and perform the PLL operation without
//         waiting for the slave lane
//  3. Master lane is off, slave lane is on and performing speed change
//  4. Both lanes are on, but only slave lane is performing speed change
//      a. In cases 3 and 4, the slave lane needs to send a command to the master lane to request
//         a PLL operation

/*void pll_request_pll_access(const enum PLL_SEQUENCE__SEQUENCES seq) BANKING_CTRL {*/
void pll_request_pll_access(uint8_t seq) BANKING_CTRL {
    if(pll_is_this_mcu_a_pll_m_()) {
        pll_m_handle_event(pll_m_get_master_index_from_mcuid(mcuid),
                           PLL_MASTER_LANE_COMMAND__RequestingPLLAccessForMaster,
                           seq);
    }
    else {
        if((false == pll_access_allowed(PLL__RS_OR_TS__RS)) &&
           (false == pll_access_allowed(PLL__RS_OR_TS__TS))) {
            pll_s_handle_event(mcuid, PLL_SLAVE_LANE_COMMAND__RequestPLLAccess, seq);
        }
    }
}

void pll_free_pll() BANKING_CTRL {
    if(pll_is_this_mcu_a_pll_m_()) {
        pll_m_handle_event(pll_m_get_master_index_from_mcuid(mcuid),
                           PLL_MASTER_LANE_COMMAND__Free,
                           0);
    }
    else {
        if((false == pll_access_allowed(PLL__RS_OR_TS__RS)) &&
           (false == pll_access_allowed(PLL__RS_OR_TS__TS))) {
            pll_s_handle_event(mcuid, PLL_SLAVE_LANE_COMMAND__Free, 0);
        }
    }
}
