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

volatile __xdata uint8_t * __xdata Addr;
volatile __xdata uint8_t WrMask;
volatile __xdata uint8_t WrData;

// write one byte
static void wr_x(void) {
        *Addr = ((~WrMask) & (*Addr)) | (WrMask & WrData);
}

void drv_cmd_reg_access(void) BANKING_CTRL {
  uint8_t code0, din0, din1;

  code0 = reg_PIN_MCU_REMOTE_COMMAND_RD_LANE_31_0_b0;
  din0 = reg_PIN_MCU_REMOTE_STATUS_RD_LANE_7_0;
  din1 = reg_PIN_MCU_REMOTE_STATUS_RD_LANE_31_8_b0;

switch(code0){
		case 0x2:
			WrMask = din0;
			break;
		case 0x1:
			WrData = din0;
            wr_x();
			break;
		case 0x3:
            reg_MCU_LOCAL_STATUS_LANE_31_0_b0 = (uint8_t)(*Addr);
			break;
		case 0x0: 
			Addr = (volatile __xdata uint8_t *)( (((uint32_t)din1) << 8)| (uint32_t)din0);
			break;
		case 0x10: 
			if((din1>>0) & 0x01) reg_TXD_INV_LANE             = (din0>>0) & 0x01;
			if((din1>>1) & 0x01) reg_TXDATA_GRAY_CODE_EN_LANE = (din0>>1) & 0x01;
			if((din1>>2) & 0x01) reg_TXDATA_PRE_CODE_EN_LANE  = (din0>>2) & 0x01;
			if((din1>>3) & 0x01) reg_TXD_MSB_LSB_SWAP_LANE    = (din0>>3) & 0x01;
			if((din1>>4) & 0x01) reg_RXD_INV_LANE             = (din0>>4) & 0x01;
			if((din1>>5) & 0x01) reg_RXDATA_GRAY_CODE_EN_LANE = (din0>>5) & 0x01;
			if((din1>>6) & 0x01) reg_RXDATA_PRE_CODE_EN_LANE  = (din0>>6) & 0x01;
			if((din1>>7) & 0x01) reg_RXD_MSB_LSB_SWAP_LANE    = (din0>>7) & 0x01;
			break;
}

  return;
}

