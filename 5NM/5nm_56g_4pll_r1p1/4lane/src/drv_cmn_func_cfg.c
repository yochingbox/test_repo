#include "common.h"
#include "driver.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK3
#endif

void drv_cmn_func_cfg(void) BANKING_CTRL {
  reg_AVDD_SEL_CMN_2_0 = reg_PIN_AVDD_SEL_RD_2_0;
}
