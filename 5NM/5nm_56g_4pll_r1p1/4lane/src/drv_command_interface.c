/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \History
*	2020/03/25	Yung-Hung Chen	Initial version
*/
#include "common.h"
/*#ifdef USE_BANKING*/
/*#pragma codeseg BANK2*/
/*#endif*/

#if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
void drv_command_interface(void) BANKING_CTRL {
  uint8_t code;

  if (reg_MCU_REMOTE_REQ_ISR_LANE && !reg_MCU_LOCAL_ACK_LANE) {

    // Decode and execute command
    code = mcu_remote_command_b3;
    switch(code){
      case 0x2:
        drv_cmd_reg_access();
        break;
      case 0x3:
        drv_cmd_datapath();
        break;
    }

    //if (lnx_MCU_CMD_DONE_LANE) {
    if (1) {    
      reg_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 1;    // clear REQ 0->1 ISR
      reg_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 0;
      reg_MCU_LOCAL_ACK_LANE = 1;
      if (reg_MCU_REMOTE_REQ_ISR_LANE) {
        reg_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 1;    // clear REQ 1->0 ISR
        reg_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 0;
        reg_MCU_LOCAL_ACK_LANE = 0;
      }
      else {
        delay(Tus);
        if (reg_MCU_REMOTE_REQ_ISR_LANE) {
          reg_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 1;    // clear REQ 1->0 ISR
          reg_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 0;
          reg_MCU_LOCAL_ACK_LANE = 0;
        }
      }
    }
    //timeout_start((uint16_t)1);    // 1us
    //while(!timeout && reg_PIN_MCU_REMOTE_REQ_RD_LANE);
    //timeout_stop;
    //if(!timeout) reg_MCU_LOCAL_ACK_LANE = 0;

  }

  // clear the previous ACK
  else if (reg_MCU_LOCAL_ACK_LANE) {
    if (reg_MCU_REMOTE_REQ_ISR_LANE) {
      reg_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 1;    // clear REQ 1->0 ISR
      reg_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 0;
      reg_MCU_LOCAL_ACK_LANE = 0;
    }
    else {
      delay(Tus);
      if (reg_MCU_REMOTE_REQ_ISR_LANE) {
        reg_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 1;    // clear REQ 1->0 ISR
        reg_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 0;
        reg_MCU_LOCAL_ACK_LANE = 0;
      }
    }
  }

  return;
}
#endif // #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
