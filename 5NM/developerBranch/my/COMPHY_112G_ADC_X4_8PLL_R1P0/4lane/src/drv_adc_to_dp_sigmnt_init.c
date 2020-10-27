//--------------------------------------------------------------------
//  Company:        Marvell Semiconductor
//  Filename:       drv_adc_to_dp_sigmnt.c
//  Description:    Signal Monitor Firmware Driver
//
//  History:
//  08/19/2019:     Chuan Lyu, Initial Version
//--------------------------------------------------------------------
#include "common.h"
#include "driver.h"

// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg CSEG
#endif

void drv_adc_to_dp_sigmnt_init() BANKING_CTRL{
  drv_sigmnt_adc_to_dp_in_abs = 0;
  drv_sigmnt_adc_to_dp_th1    = 0;
  drv_sigmnt_adc_to_dp_th2    = 0;
  drv_sigmnt_adc_to_dp_rot    = 0;
  drv_sigmnt_adc_to_dp_len    = 0;

  drv_sigmnt_adc_to_dp_diff_mode_en = 0;
  drv_sigmnt_adc_to_dp_diff_sel_eom = 0;
  drv_sigmnt_adc_to_dp_diff_adc_sel = 0;
  drv_sigmnt_adc_to_dp_mode         = 0;
  drv_sigmnt_adc_to_dp_idx_sel      = 0;
}
