#include "common.h"
#ifdef USE_BANKING
#pragma codeseg BANK3
#endif

void drv_nt_decoder_rx(void) BANKING_CTRL {
        //NT decoding
	reg_MCU_DEBUG7_LANE_7_0 = 0x1;
	reg_MCU_DEBUG8_LANE_7_0 = 0x1;
#ifndef CONFIG_5NM_56G_X4_4PLL_R1P0
        //4X config
        reg_RXCLK_2X_SEL_LANE = reg_PIN_RXDCLK_2X_SEL_RD_LANE;
#endif // CONFIG_5NM_56G_X4_4PLL_R1P0
	//NT_CLK
	if((reg_RXSPEED_DIV_LANE_2_0&0x04) == 0 ) {
		switch( reg_PIN_RXDCLK_NT_SEL_RD_LANE_2_0 ) {
		case 0: reg_RXCLK_NT_CTRL_LANE_1_0 = 0; reg_RXCLK_NT_DIV_LANE_4_0 = 4; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;	 //8T
		case 4: reg_RXCLK_NT_CTRL_LANE_1_0 = 0; reg_RXCLK_NT_DIV_LANE_4_0 = 8; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;	 //16T
		case 1: reg_RXCLK_NT_CTRL_LANE_1_0 = 0; reg_RXCLK_NT_DIV_LANE_4_0 = 16; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;	 //32T
		case 2: reg_RXCLK_NT_CTRL_LANE_1_0 = 3; reg_RXCLK_NT_DIV_LANE_4_0 = 5; reg_RXCLK_NT_FIX_DIV_EN_LANE = 0; break;	 //33T
		case 3: reg_RXCLK_NT_CTRL_LANE_1_0 = 2; reg_RXCLK_NT_DIV_LANE_4_0 = 8; reg_RXCLK_NT_FIX_DIV_EN_LANE = 0; break;	 //34T	
		}
	}
	else {
		switch( reg_PIN_RXDCLK_NT_SEL_RD_LANE_2_0 ) {
		case 0: reg_RXCLK_NT_CTRL_LANE_1_0 = 0; reg_RXCLK_NT_DIV_LANE_4_0 = 8; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;	 //8T
		case 4: reg_RXCLK_NT_CTRL_LANE_1_0 = 0; reg_RXCLK_NT_DIV_LANE_4_0 = 16; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;	 //16T
		case 1: reg_RXCLK_NT_CTRL_LANE_1_0 = 2; reg_RXCLK_NT_DIV_LANE_4_0 = 16; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;	 //32T
		case 2: reg_RXCLK_NT_CTRL_LANE_1_0 = 3; reg_RXCLK_NT_DIV_LANE_4_0 = 11; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;	 //33T
		case 3: reg_RXCLK_NT_CTRL_LANE_1_0 = 2; reg_RXCLK_NT_DIV_LANE_4_0 = 17; reg_RXCLK_NT_FIX_DIV_EN_LANE = 1; break;	 //34T	
		}		
	}			
#ifndef CONFIG_5NM_56G_X4_4PLL_R1P0
    reg_ANA_RX_RXCLK_NT_EN_LANE = reg_PIN_RXDCLK_NT_EN_RD_LANE;
    reg_ANA_RX_RXCLK_4X_EN_LANE = reg_PIN_RXDCLK_4X_EN_RD_LANE;
#endif // CONFIG_5NM_56G_X4_4PLL_R1P0
}
