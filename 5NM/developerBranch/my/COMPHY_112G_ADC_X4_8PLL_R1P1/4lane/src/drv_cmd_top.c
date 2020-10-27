/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \History
*	2020/04/08	Yung-Hung Chen	Initial version
*/
#include "common.h"
#ifdef USE_BANKING
#pragma codeseg BANK3
#endif

void drv_cmd_top(void) BANKING_CTRL {
  uint8_t code, din0;

  code = reg_PIN_MCU_REMOTE_COMMAND_RD_LANE_31_0_b0;
  din0 = reg_PIN_MCU_REMOTE_STATUS_RD_LANE_7_0;


  switch(code) {
    case 0x1:
      if (lnx_MCU_CMD_DONE_LANE) {
        reg_PU_TX_LANE = 1;
        reg_PHY_GEN_TX_LANE_5_0 = din0;
        reg_RESET_CORE_TX_LANE = 0;

        reg_PU_TX_FM_REG_LANE = 1;
        reg_PHY_GEN_TX_FM_REG_LANE = 1;
        reg_RESET_CORE_TX_FM_REG_LANE = 1;

        lnx_MCU_CMD_DONE_LANE = 0;
      }
      else if (reg_PLL_READY_TX_LANE) {
        lnx_MCU_CMD_DONE_LANE = 1;
      }    
      break;
    case 0x2:
      if (lnx_MCU_CMD_DONE_LANE) {
        reg_PU_RX_LANE = 1;
        reg_PHY_GEN_RX_LANE_5_0 = din0;
        reg_RESET_CORE_RX_LANE = 0;

        reg_PU_RX_FM_REG_LANE = 1;
        reg_PHY_GEN_RX_FM_REG_LANE = 1;
        reg_RESET_CORE_RX_FM_REG_LANE = 1;

        lnx_MCU_CMD_DONE_LANE = 0;
      }
      else if (reg_PLL_READY_RX_LANE) {
        lnx_MCU_CMD_DONE_LANE = 1;
      }    
      break;
    case 0x3:
      if (lnx_MCU_CMD_DONE_LANE) {
        reg_PU_TX_LANE = 1;
        reg_PU_RX_LANE = 1;
        reg_PU_PLL_LANE = 1;
        reg_PHY_GEN_TX_LANE_5_0 = din0;
        reg_PHY_GEN_RX_LANE_5_0 = din0;
        reg_RESET_CORE_TX_LANE = 0;
        reg_RESET_CORE_RX_LANE = 0;

        reg_PU_TX_FM_REG_LANE = 1;
        reg_PU_RX_FM_REG_LANE = 1;
        reg_PU_PLL_FM_REG_LANE = 1;
        reg_PHY_GEN_TX_FM_REG_LANE = 1;
        reg_PHY_GEN_RX_FM_REG_LANE = 1;
        reg_RESET_CORE_TX_FM_REG_LANE = 1;
        reg_RESET_CORE_RX_FM_REG_LANE = 1;

        lnx_MCU_CMD_DONE_LANE = 0;
      }
      else if (reg_PLL_READY_RX_LANE && reg_PLL_READY_TX_LANE) {
        lnx_MCU_CMD_DONE_LANE = 1;
      }    
      break;
    case 0x4:
      if (lnx_MCU_CMD_DONE_LANE) {
        reg_PU_TX_LANE = 0;
        reg_PU_TX_FM_REG_LANE = 1;
    
        lnx_MCU_CMD_DONE_LANE = 0;
      }
      else if (~reg_PLL_READY_TX_LANE) {
        lnx_MCU_CMD_DONE_LANE = 1;
      }    
      break;
    case 0x5:
      if (lnx_MCU_CMD_DONE_LANE) {
        reg_PU_RX_LANE = 0;
        reg_PU_RX_FM_REG_LANE = 1;
    
        lnx_MCU_CMD_DONE_LANE = 0;
      }
      else if (~reg_PLL_READY_RX_LANE) {
        lnx_MCU_CMD_DONE_LANE = 1;
      }    
      break;
    case 0x6:
      if (lnx_MCU_CMD_DONE_LANE) {
        reg_PU_TX_LANE = 0;
        reg_PU_RX_LANE = 0;
        reg_PU_TX_FM_REG_LANE = 1;
        reg_PU_RX_FM_REG_LANE = 1;
    
        lnx_MCU_CMD_DONE_LANE = 0;
      }
      else if (~reg_PLL_READY_RX_LANE && ~reg_PLL_READY_TX_LANE) {
        lnx_MCU_CMD_DONE_LANE = 1;
      }    
      break;
    case 0x7:
      if (lnx_MCU_CMD_DONE_LANE) {
        reg_PHY_GEN_TX_LANE_5_0 = din0;
        reg_PHY_GEN_TX_FM_REG_LANE = 1;
    
        lnx_MCU_CMD_DONE_LANE = 0;
      }
      else if (reg_PLL_READY_TX_LANE) {
        lnx_MCU_CMD_DONE_LANE = 1;
      }    
      break;
    case 0x8:
      if (lnx_MCU_CMD_DONE_LANE) {
        reg_PHY_GEN_RX_LANE_5_0 = din0;
        reg_PHY_GEN_RX_FM_REG_LANE = 1;
    
        lnx_MCU_CMD_DONE_LANE = 0;
      }
      else if (reg_PLL_READY_RX_LANE) {
        lnx_MCU_CMD_DONE_LANE = 1;
      }    
      break;
    case 0x9:
      if (lnx_MCU_CMD_DONE_LANE) {
        reg_PHY_GEN_TX_LANE_5_0 = din0;
        reg_PHY_GEN_RX_LANE_5_0 = din0;
        reg_PHY_GEN_TX_FM_REG_LANE = 1;
        reg_PHY_GEN_RX_FM_REG_LANE = 1;
    
        lnx_MCU_CMD_DONE_LANE = 0;
      }
      else if (reg_PLL_READY_RX_LANE && reg_PLL_READY_TX_LANE) {
        lnx_MCU_CMD_DONE_LANE = 1;
      }    
      break;
    case 0xa:
      if (lnx_MCU_CMD_DONE_LANE) {
        reg_RESET_CORE_TX_LANE = 1;
        reg_RESET_CORE_TX_FM_REG_LANE = 1;
    
        lnx_MCU_CMD_DONE_LANE = 0;
      }
      else if (~reg_PLL_READY_TX_LANE) {
        lnx_MCU_CMD_DONE_LANE = 1;
      }    
      break;
    case 0xb:
      if (lnx_MCU_CMD_DONE_LANE) {
        reg_RESET_CORE_RX_LANE = 1;
        reg_RESET_CORE_RX_FM_REG_LANE = 1;
    
        lnx_MCU_CMD_DONE_LANE = 0;
      }
      else if (~reg_PLL_READY_RX_LANE) {
        lnx_MCU_CMD_DONE_LANE = 1;
      }    
      break;
    case 0xc:
      if (lnx_MCU_CMD_DONE_LANE) {
        reg_RESET_CORE_TX_LANE = 1;
        reg_RESET_CORE_RX_LANE = 1;
        reg_RESET_CORE_TX_FM_REG_LANE = 1;
        reg_RESET_CORE_RX_FM_REG_LANE = 1;
    
        lnx_MCU_CMD_DONE_LANE = 0;
      }
      else if (~reg_PLL_READY_RX_LANE && ~reg_PLL_READY_TX_LANE) {
        lnx_MCU_CMD_DONE_LANE = 1;
      }    
      break;
    case 0xd:
      if (lnx_MCU_CMD_DONE_LANE) {
        reg_RX_INIT_LANE = 1;
        reg_RX_INIT_FM_REG_LANE = 1;
    
        lnx_MCU_CMD_DONE_LANE = 0;
      }
      else if (reg_RX_INIT_DONE_LANE) {
        reg_RX_INIT_LANE = 0;

        lnx_MCU_CMD_DONE_LANE = 1;
      }    
      break;
    case 0xe:
      if (lnx_MCU_CMD_DONE_LANE) {
        reg_TX_TRAIN_ENABLE_LANE = 1;
        reg_TX_TRAIN_ENABLE_FM_REG_LANE = 1;
    
        lnx_MCU_CMD_DONE_LANE = 0;
      }
      else if (reg_TX_TRAIN_COMPLETE_LANE) {
        reg_MCU_LOCAL_STATUS_LANE_31_0_b0 = 0x01 & (uint8_t)reg_TX_TRAIN_FAILED_LANE;
        reg_MCU_LOCAL_STATUS_LANE_31_0_b0 = reg_MCU_LOCAL_STATUS_LANE_31_0_b0 | (((uint8_t)reg_TX_TRAIN_ERROR_LANE_1_0) << 1);

        reg_TX_TRAIN_ENABLE_LANE = 0;

        lnx_MCU_CMD_DONE_LANE = 1;
      }    
      break;
    case 0xf:
      if (lnx_MCU_CMD_DONE_LANE) {
        reg_RX_TRAIN_ENABLE_LANE = 1;
        reg_RX_TRAIN_ENABLE_FM_REG_LANE = 1;
    
        lnx_MCU_CMD_DONE_LANE = 0;
      }
      else if (reg_RX_TRAIN_COMPLETE_LANE) {
        reg_MCU_LOCAL_STATUS_LANE_31_0_b0 = 0x01 & (uint8_t)reg_RX_TRAIN_FAILED_LANE;
        reg_RX_TRAIN_ENABLE_LANE = 0;

        lnx_MCU_CMD_DONE_LANE = 1;
      }    
      break;
  }

  return;
}

