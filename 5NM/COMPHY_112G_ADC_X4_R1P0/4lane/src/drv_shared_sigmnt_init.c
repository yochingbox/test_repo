//--------------------------------------------------------------------
//  Company:        Marvell Semiconductor
//  Filename:       drv_shared_sigmnt.c
//  Description:    Signal Monitor Firmware Driver
//
//  History:
//  08/19/2019:     Chuan Lyu, Initial Version
//--------------------------------------------------------------------
#include "common.h"
#include "driver.h"

void drv_shared_sigmnt_init(){
  drv_sigmnt_shared_in_abs  = 0;
  drv_sigmnt_shared_th1_8   = 0;
  drv_sigmnt_shared_th1_7_0 = 0;
  drv_sigmnt_shared_th2_8   = 0;
  drv_sigmnt_shared_th2_7_0 = 0;
  drv_sigmnt_shared_rot     = 0;
  drv_sigmnt_shared_len     = 0;
 
  drv_sigmnt_shared_sel     = 2;
  drv_sigmnt_shared_mode    = 0;
  drv_sigmnt_shared_idx_sel = 0;
}

