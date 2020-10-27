#include "common.h"
//#include "driver.h"
// Code banking configuration, do not remove
//#ifdef USE_BANKING
//#pragma codeseg BANK3
//#endif

void drv_rs_tempc_div_sel_cfg(void) BANKING_CTRL {
	reg_MCU_DEBUGA_LANE_7_0=0x33;
	reg_PLL_RS_LCPLL_TEMPC_SYNC_CLK_DIV_SEL_LANE_2_0 = 0x5;
    reg_PLL_RS_LCPLL_TEMPC_REF_CLK_GEN1_DIV_SEL_LANE_2_0 = 0x5;
    reg_PLL_RS_LCPLL_CAL_WAIT_TEMPC_40US_LANE_3_0 = 0x1;
    reg_PLL_RS_LCPLL_TEMPC_1M_PULSE_DIV_SEL_LANE_1_0 = 0x3;
	reg_MCU_DEBUGA_LANE_7_0=0x44;
//        reg_pll_rs_lcpll_tempc_sync_clk_div_sel_lane = 0x5;
//        reg_pll_rs_lcpll_tempc_ref_clk_gen1_div_sel_lane = 0x5;        
//        reg_pll_rs_lcpll_cal_wait_tempc_40us_lane = 0x1;        
//        reg_pll_rs_lcpll_tempc_1m_pulse_div_sel_lane = 0x3; 
}


void drv_rs_pll_cfg(void) BANKING_CTRL {
	
		reg_MCU_DEBUGA_LANE_7_0=0x22;
        drv_rs_tempc_div_sel_cfg();
}
