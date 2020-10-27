/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \History
*	2020/04/08	Yung-Hung Chen	Initial version
*/
#include "common.h"
/*#ifdef USE_BANKING*/
/*#pragma codeseg BANK1*/
/*#endif*/

volatile __xdata uint8_t * __xdata Addr;
volatile __xdata uint8_t WrMask;
volatile __xdata uint8_t WrData;

// write one byte
static void wr_x(void) {
        *Addr = ((~WrMask) & (*Addr)) | (WrMask & WrData);
}


#if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
void drv_cmd_reg_access(void) BANKING_CTRL {
  uint8_t code0, din0, din1;

  code0 = mcu_remote_command_b1;
  din0 = mcu_remote_status_b0;
  din1 = mcu_remote_status_b1;

switch(code0){
		case 0x2:
			WrMask = din0;
			break;
		case 0x1:
			WrData = din0;
            wr_x();
			break;
		case 0x3:
            mcu_local_status_b0 = (uint8_t)(*Addr);
			break;
		case 0x0: 
			Addr = (volatile __xdata uint8_t *)( (((uint32_t)din1) << 8)| (uint32_t)din0);
			break;
}

  return;
}
#endif // #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
