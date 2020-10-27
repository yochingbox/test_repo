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


void drv_cmd_datapath(void) BANKING_CTRL {
  uint8_t code1, code0, ctrl;

  code1 = reg_PIN_MCU_REMOTE_COMMAND_RD_LANE_31_0_b2;
  code0 = reg_PIN_MCU_REMOTE_COMMAND_RD_LANE_31_0_b1;
  ctrl  = reg_PIN_MCU_REMOTE_COMMAND_RD_LANE_31_0_b0;

switch(code0){
    case 0x0: 
        reg_TXD_INV_LANE             = ctrl & 0x01;
        //reg_MCU_DEBUG2_LANE_7_0 = 1;        
        break;
    case 0x1: 
        reg_TXDATA_GRAY_CODE_EN_LANE = ctrl & 0x01;
        break;
    case 0x2: 
        reg_TXDATA_PRE_CODE_EN_LANE  = ctrl & 0x01;
        break;
    case 0x3: 
        reg_TXD_MSB_LSB_SWAP_LANE    = ctrl & 0x01;
        break;
    case 0x4: 
        reg_RXD_INV_LANE             = ctrl & 0x01;
        break;
    case 0x5: 
        reg_RXDATA_GRAY_CODE_EN_LANE = ctrl & 0x01;
        break;
    case 0x6: 
        reg_RXDATA_PRE_CODE_EN_LANE  = ctrl & 0x01;
        break;
    case 0x7: 
        reg_RXD_MSB_LSB_SWAP_LANE    = ctrl & 0x01;
        break;
}

  //reg_MCU_DEBUG2_LANE_7_0 = 2;        
  return;
}

