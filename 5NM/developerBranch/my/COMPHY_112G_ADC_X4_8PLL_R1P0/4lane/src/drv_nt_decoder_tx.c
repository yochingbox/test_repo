#include "common.h"
#ifdef USE_BANKING
#pragma codeseg BANK1
#endif


void drv_nt_decoder_tx(void) BANKING_CTRL {
     #ifdef _5FF_COMPHY_112G_ADC_X4_8PLL
	reg_MCU_DEBUG7_LANE_7_0 = 0xff;
	reg_MCU_DEBUG8_LANE_7_0 = 0xff;
	switch( reg_PIN_TXDCLK_NT_SEL_RD_LANE_2_0 ) {
	case 0: reg_TXCLK_NT_CTRL_LANE_1_0 = 0; reg_TXCLK_NT_DIV_LANE_4_0 = 4;  reg_TXCLK_NT_FIX_DIV_EN_LANE = 1; break;	 //8T
	case 4: reg_TXCLK_NT_CTRL_LANE_1_0 = 0; reg_TXCLK_NT_DIV_LANE_4_0 = 8;  reg_TXCLK_NT_FIX_DIV_EN_LANE = 1; break;	 //16T
	case 1: reg_TXCLK_NT_CTRL_LANE_1_0 = 0; reg_TXCLK_NT_DIV_LANE_4_0 = 16; reg_TXCLK_NT_FIX_DIV_EN_LANE = 1; break;	 //32T
	case 2: reg_TXCLK_NT_CTRL_LANE_1_0 = 3; reg_TXCLK_NT_DIV_LANE_4_0 = 5;  reg_TXCLK_NT_FIX_DIV_EN_LANE = 0; break;	 //33T
	case 3: reg_TXCLK_NT_CTRL_LANE_1_0 = 2; reg_TXCLK_NT_DIV_LANE_4_0 = 8;  reg_TXCLK_NT_FIX_DIV_EN_LANE = 0; break;	 //34T	
	}
	#endif
}

