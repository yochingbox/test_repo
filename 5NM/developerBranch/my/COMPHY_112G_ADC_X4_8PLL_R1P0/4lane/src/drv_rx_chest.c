//--------------------------------------------------------------------
//  Company:        Marvell Semiconductor
//  Filename:       drv_rx_chest.c
//  Description:    Channel Estimator Firmware Driver
//
//  History:
//  03/23/2019:     Yung-Hung Chen, Initial Version
//--------------------------------------------------------------------

#include "common.h"

void drv_rx_chest() {
  uint32_t chest_val = 0;
  int16_t  chest_val_out = 0;

  reg_CHEST_START_LANE = 1;
  while((reg_MCU_DEBUGA_LANE_7_0=0xC8)&&!reg_CHEST_DONE_LANE);
  reg_CHEST_START_LANE = 0;
  
  chest_val = (reg_CHEST_VAL_LANE_29_0_b3<<24) + (reg_CHEST_VAL_LANE_29_0_b2<<16) + (reg_CHEST_VAL_LANE_29_0_b1<<8) + reg_CHEST_VAL_LANE_29_0_b0;
  chest_val = chest_val << (12-reg_CHEST_LEN_LANE_3_0); //S30.26

  chest_val_out = chest_val>>14; //16 MSB = S16.12

  if (reg_CHEST_MODE_LANE_1_0 == 0) {
    if (reg_RX_PAM2_EN_LANE) {
      chest_val_out = chest_val_out/3;
    }
    else {
      chest_val_out = chest_val_out*3/5;
    }
  }
  else if (reg_CHEST_MODE_LANE_1_0 == 2) {
    chest_val_out = chest_val_out/4;    //assume even distribution of data = 0, 1, 2, 3
  }

  lnx_CHEST_VAL_OUT_LANE_15_8 = chest_val_out>>8;
  lnx_CHEST_VAL_OUT_LANE_7_0  = chest_val_out;

}

