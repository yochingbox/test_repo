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

volatile __xdata uint32_t * __xdata Addr;
volatile __xdata uint32_t WrMask;
volatile __xdata uint32_t WrData;

void drv_cmd_misc(void) BANKING_CTRL {
  uint8_t code0, din0, din1;

  code0 = reg_PIN_MCU_REMOTE_COMMAND_RD_LANE_31_0_b0;
  din0 = reg_PIN_MCU_REMOTE_STATUS_RD_LANE_7_0;
  din1 = reg_PIN_MCU_REMOTE_STATUS_RD_LANE_31_8_b0;

switch(code0){
		case 0x3:
			WrMask = (WrMask & 0xffffff00) | (uint32_t)din0;
			WrMask = (WrMask & 0xffff00ff) | (((uint32_t)din1) << 8);
			break;
		case 0x4:
			WrMask = (WrMask & 0xff00ffff) | (((uint32_t)din0) << 16);
			WrMask = (WrMask & 0x00ffffff) | (((uint32_t)din1) << 24);
			break;
		case 0x1:
			WrData = (WrData & 0xffffff00) | (uint32_t)din0;
			WrData = (WrData & 0xffff00ff) | (((uint32_t)din1) << 8);
            wr_hw_0();
			break;
		case 0x2:
			WrData = (WrData & 0xff00ffff) | (((uint32_t)din0) << 16);
			WrData = (WrData & 0x00ffffff) | (((uint32_t)din1) << 24);
            wr_hw_1();
			break;
		case 0x5:
            reg_MCU_LOCAL_STATUS_LANE_31_0_b0 = (uint8_t)(*Addr);
            reg_MCU_LOCAL_STATUS_LANE_31_0_b1 = (uint8_t)((*Addr) >> 8);
			break;
		case 0x6:
            reg_MCU_LOCAL_STATUS_LANE_31_0_b0 = (uint8_t)((*Addr) >> 16);
            reg_MCU_LOCAL_STATUS_LANE_31_0_b1 = (uint8_t)((*Addr) >> 24);
			break;
		case 0x0: 
			Addr = (volatile __xdata uint32_t *)( (((uint32_t)din1) << 8)| (uint32_t)din0);
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

// write lower half word (16 bits)
static void wr_hw_0(void) {
        *Addr = ((0xffff0000 | ~WrMask) & (*Addr)) | ((0x0000ffff & WrMask) & WrData);
}

// write higher half word (16 bits)
static void wr_hw_1(void) {
        *Addr = ((0x0000ffff | ~WrMask) & (*Addr)) | ((0xffff0000 & WrMask) & WrData);
}

