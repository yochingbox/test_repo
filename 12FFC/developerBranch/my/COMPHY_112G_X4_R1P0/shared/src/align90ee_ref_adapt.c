/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file align90ee_ref_adapt.c
* \purpose align90EE calibration reference code adaptation for 112G PHY
* \History
*	04/26/2018 Lisa Wang		Initial 
*/
#include "common.h"
#define align90ee_acc_thresh_b0 lnx_ALIGN90EE_ACC_THRESH_LANE_15_0_b0
#define align90ee_acc_thresh_b1 lnx_ALIGN90EE_ACC_THRESH_LANE_15_0_b1
#define align90ee_ref_default   lnx_ALIGN90EE_REF_DEFAULT_LANE_7_0
#define align90ee_ref_max       lnx_ALIGN90EE_REF_MAX_LANE_7_0
#define align90ee_ref_min       lnx_ALIGN90EE_REF_MIN_LANE_7_0
#define align90ee_con_window    lnx_ALIGN90EE_CON_PAT_WINDOW_LANE_7_0

void align90ee_ref_adapt( bool tracking_mode_en ) {
  int16_t acc;
  int16_t acc_thresh, acc_thresh_signed;
  uint8_t align90ee_ref;
  uint8_t save_align90ee_setting_10_8;
  uint8_t converg_chk_count;
  uint8_t converg_chk_max;
  uint8_t converg_chk_min;
  bool    code_changed;

  save_align90ee_setting_10_8 = reg_RX_ALIGN90_EE_CAL_SETTING_LANE_10_3 >> 5;

  if (lnx_ALIGN90EE_ADAPT_FREEZE_LANE) return;
  if (lnx_ALIGN90EE_ADAPT_BYPASS_LANE) {
    reg_RX_ALIGN90_EE_CAL_SETTING_LANE_2_0 = align90ee_ref_default & 0x7;
    reg_RX_ALIGN90_EE_CAL_SETTING_LANE_10_3 = save_align90ee_setting_10_8 << 5 | align90ee_ref_default >> 3;
    return;
  }

//set bypass_en for rxclk related calibration
  reg_RX_ALIGN90_DD_CAL_BYPASS_EN_LANE = 1;
  reg_RX_ALIGN90_DE_CAL_BYPASS_EN_LANE = 1;
  reg_RX_DCC1_CAL_BYPASS_EN_LANE = 1;
  reg_RX_DCC2_CAL_BYPASS_EN_LANE = 1;
  reg_RX_DCC3_CAL_BYPASS_EN_LANE = 1;
  reg_RX_DCC4_CAL_BYPASS_EN_LANE = 1;
  reg_RX_DCC5_CAL_BYPASS_EN_LANE = 1;

  reg_RX_CLK_TOP_CONT_START_LANE = 0;
    while(!reg_RX_CLK_TOP_CONT_DONE_LANE);

  if(!tracking_mode_en) {
    converg_chk_count = 0;
    converg_chk_max = 0;
    converg_chk_min = 255;
  }
do{
  code_changed = 0;
//set align90ee accumulator registers
  reg_ALIGN90EE_ACC_START_LANE = 1;
//wait for align90ee accumulating cycle finish and read result
  while(!reg_ALIGN90EE_ACC_DONE_LANE);
  reg_ALIGN90EE_ACC_START_LANE = 0;
  reg_ALIGN90EE_ACC_CYCLE_CNT_LANE_15_0_b1 += 4;
  
  acc = (int16_t)reg_ALIGN90EE_ACC_LANE_15_0;
  //acc = (int8_t)reg_ALIGN90EE_ACC_LANE_15_0_b1;
  //acc = ((int8_t)acc << 8) + (int8_t)reg_ALIGN90EE_ACC_LANE_15_0_b0;
  //acc_thresh = align90ee_acc_thresh_b1;
  //acc_thresh = (acc_thresh << 8) + align90ee_acc_thresh_b0;
  acc_thresh = (int16_t)lnx_ALIGN90EE_ACC_THRESH_LANE_15_0;
  //acc_thresh_signed = (int16_t)acc_thresh;
//determine the new align90ee_ref code value
  align90ee_ref = ((reg_RX_ALIGN90_EE_CAL_SETTING_LANE_10_3 & 0x1f) << 3) + reg_RX_ALIGN90_EE_CAL_SETTING_LANE_2_0;
  if(acc > acc_thresh) {
    if(align90ee_ref<align90ee_ref_max) {
      align90ee_ref++; 
      code_changed = 1;
    }
  }
  else if(acc < -acc_thresh) {
    if (align90ee_ref>align90ee_ref_min) {
      align90ee_ref--; // need to verify
      code_changed = 1;
    }
  }
  //reg_MCU_DEBUGA_LANE_7_0 = align90ee_ref;
  if(code_changed) {
    reg_RX_ALIGN90_EE_CAL_SETTING_LANE_2_0 = align90ee_ref & 0x7;
    reg_RX_ALIGN90_EE_CAL_SETTING_LANE_10_3 = (save_align90ee_setting_10_8 << 5) + (align90ee_ref >> 3);
  //trigger align90ee calibration and wait for finish
    reg_RX_CLK_TOP_START_LANE = 1;
    delay_ram(Tus);
    while(!reg_RX_CLK_TOP_DONE_LANE); 
    reg_RX_CLK_TOP_START_LANE = 0;
  }
//if it is tracking mode, then exit
  if (tracking_mode_en) break;
  converg_chk_count ++;
  //reg_MCU_DEBUGB_LANE_7_0 = converg_chk_count;
  if(align90ee_ref > converg_chk_max) converg_chk_max = align90ee_ref;
  if(align90ee_ref < converg_chk_min) converg_chk_min = align90ee_ref;
  if((converg_chk_count >= align90ee_con_window)&&((converg_chk_max-converg_chk_min) <= 2)) { //converge
    break;
  }
  else {
    if((converg_chk_max-converg_chk_min) > 2) {
      converg_chk_count = 0;
      converg_chk_max = 0;
      converg_chk_min = 255;
    }
  }
  if(align90ee_ref >= align90ee_ref_max) break;
  if(align90ee_ref_min >= align90ee_ref) break;
} while(1);
//else if it converged, then exit
//Otherwise, do this adaptation again
  reg_RX_ALIGN90_DD_CAL_BYPASS_EN_LANE = 0;
  reg_RX_ALIGN90_DE_CAL_BYPASS_EN_LANE = 0;
  reg_RX_DCC1_CAL_BYPASS_EN_LANE = 0;
  reg_RX_DCC2_CAL_BYPASS_EN_LANE = 0;
  reg_RX_DCC3_CAL_BYPASS_EN_LANE = 0;
  reg_RX_DCC4_CAL_BYPASS_EN_LANE = 0;
  reg_RX_DCC5_CAL_BYPASS_EN_LANE = 0;

  reg_RX_CLK_TOP_CONT_START_LANE = 1;
}
