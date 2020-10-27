// Author: fei 2020-08-20
// Auto generated by IPDOC
  #include "common.h"
  #ifdef USE_BANKING
  #pragma codeseg BANK1
  #pragma constseg BANK1
  #endif
  void pll_dcc_vdd_ts_cont(void) BANKING_CTRL {
    reg_PLL_DCC_VDD_TS_TOP_CONT_START_LANE = 0;
    reg_PLL_TS_LCPLL_DCC_EN_LANE = 1;
    reg_PLL_TS_LCDIV1P5_DCC_EN_LANE = 1;
    reg_PLL_TS_VDDA_CAL_EN_LANE = 1;
    reg_PLL_TS_DCC_CAL_BYPASS_EN_LANE = 0;
    reg_PLL_TS_VDDA_FBDIV_CAL_BYPASS_EN_LANE = 1;
    reg_PLL_TS_VDDA_INTP_CAL_BYPASS_EN_LANE = 1;
    reg_PLL_TS_VDDA_PFD_CAL_BYPASS_EN_LANE = 1;
    if(reg_PLL_TS_LCPLL_POSTDIV_EN_LANE == 0){
      reg_PLL_TS_DIV_DCC_CAL_BYPASS_EN_LANE = 1;
    }
    else{
      if(reg_PLL_TS_LCPLL_POSTDIV_1P5OR2_EN_LANE == 1){
        reg_PLL_TS_LCPLL_DIV2_1P5_CLKIN_DCC_SEL_LANE = 0;
        reg_PLL_TS_DIV_DCC_CAL_BYPASS_EN_LANE = 0;
      }
      else{
        reg_PLL_TS_LCPLL_DIV2_1P5_CLKIN_DCC_SEL_LANE = 1;
        reg_PLL_TS_DIV_DCC_CAL_BYPASS_EN_LANE = 0;
      }
    }
    reg_PLL_DCC_VDD_TS_TOP_CONT_START_LANE = 1;
  }