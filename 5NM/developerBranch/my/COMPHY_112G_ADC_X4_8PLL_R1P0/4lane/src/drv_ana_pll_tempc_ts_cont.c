// Author: fei 2020-08-20
// Auto generated by IPDOC
  #include "common.h"
  #ifdef USE_BANKING
  #pragma codeseg BANK1
  #pragma constseg BANK1
  #endif
  void pll_tempc_ts_cont(void) BANKING_CTRL {
    if(reg_PLL_TS_PCIE_HIGHK_EN_LANE_3_0 == 0){
      reg_PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_MAX_LANE_3_0 = 0XB;
      reg_PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_MIN_LANE_3_0 = 0X0;
    }
    if(reg_PLL_TS_PCIE_HIGHK_EN_LANE_3_0 == 1){
      reg_PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_MAX_LANE_3_0 = 0XB;
      reg_PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_MIN_LANE_3_0 = 0X1;
    }
    if(reg_PLL_TS_PCIE_HIGHK_EN_LANE_3_0 == 3){
      reg_PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_MAX_LANE_3_0 = 0XB;
      reg_PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_MIN_LANE_3_0 = 0X2;
    }
    if(reg_PLL_TS_PCIE_HIGHK_EN_LANE_3_0 == 7){
      reg_PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_MAX_LANE_3_0 = 0XB;
      reg_PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_MIN_LANE_3_0 = 0X3;
    }
    reg_PLL_TS_LCPLL_TEMPC_CAL_EN_LANE = 1;
  }
