#include "common.h"
#ifdef USE_BANKING
#pragma codeseg BANK1
#endif

void drv_nt_decoder_rx(void) BANKING_CTRL {
     #ifdef _5FF_COMPHY_112G_ADC_X4_8PLL
     uint16_t rx_nt_ratio;
        //NT decoding
	reg_MCU_DEBUG7_LANE_7_0 = 0x0;
	reg_MCU_DEBUG8_LANE_7_0 = 0x0;
	switch( reg_PIN_RXDCLK_NT_SEL_RD_LANE_2_0 ) {
	case 0: rx_nt_ratio =  8; break;	 //8T
	case 4: rx_nt_ratio = 16; break;	 //16T
	case 1: rx_nt_ratio = 32; break;	 //32T
	case 2: rx_nt_ratio = 33; break;	 //33T
	case 3: rx_nt_ratio = 34; break;	 //34T	
	}
	reg_MCU_DEBUG7_LANE_7_0 = rx_nt_ratio & 0xff;
	reg_MCU_DEBUG8_LANE_7_0 = (rx_nt_ratio >> 8);
        rx_nt_ratio = rx_nt_ratio << lnx_RX_NT_MUL_LANE_1_0; // > 56.25G /4, 28.125-56.25 is /2
        //if((gen_rx == 39) || (gen_rx == 40) || (gen_rx == 41)) { // > 56.25G is X4
        //  rx_nt_ratio = rx_nt_ratio << 2;
        //}
        //else if ((gen_rx >= 31) && (gen_rx <= 38)) {             // 28.125-56.25 is X2
        //  rx_nt_ratio = rx_nt_ratio << 1;
        //}
        //else if ((gen_rx == 44) || (gen_rx == 45)) {
        //  rx_nt_ratio = rx_nt_ratio << 1;
        //}
	reg_MCU_DEBUG7_LANE_7_0 = rx_nt_ratio & 0xff;
	reg_MCU_DEBUG8_LANE_7_0 = (rx_nt_ratio >> 8);
 
        rx_nt_ratio = rx_nt_ratio << 4; // 2X index to remove 16.5 case + to match div ratio X8 below

        rx_nt_ratio = rx_nt_ratio / lnx_RX_RATE_2_PLL_RATIO_X8_LANE_7_0;
	reg_MCU_DEBUG7_LANE_7_0 = rx_nt_ratio & 0xff;
	reg_MCU_DEBUG8_LANE_7_0 = (rx_nt_ratio >> 8);

	switch( rx_nt_ratio ) {
	case 16:  reg_RX_RXCLKNT_CTRL_LANE_1_0 = 2; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 =  4; reg_RX_RXCLKNT_INTDIV_EN_LANE = 1; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 0;break;	 //8T
	case 32:  reg_RX_RXCLKNT_CTRL_LANE_1_0 = 2; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 =  8; reg_RX_RXCLKNT_INTDIV_EN_LANE = 1; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 0;break;	 //16T
	case 33:  reg_RX_RXCLKNT_CTRL_LANE_1_0 = 3; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 =  5; reg_RX_RXCLKNT_INTDIV_EN_LANE = 0; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 0;break;	 //16.5T
	case 34:  reg_RX_RXCLKNT_CTRL_LANE_1_0 = 2; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 =  8; reg_RX_RXCLKNT_INTDIV_EN_LANE = 0; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 0;break;	 //17T
	case 64:  reg_RX_RXCLKNT_CTRL_LANE_1_0 = 2; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 = 16; reg_RX_RXCLKNT_INTDIV_EN_LANE = 1; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 0;break;	 //32T	
	case 66:  reg_RX_RXCLKNT_CTRL_LANE_1_0 = 3; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 = 11; reg_RX_RXCLKNT_INTDIV_EN_LANE = 1; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 0;break;	 
	case 68:  reg_RX_RXCLKNT_CTRL_LANE_1_0 = 2; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 = 17; reg_RX_RXCLKNT_INTDIV_EN_LANE = 1; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 0;break;	 
	case 128: reg_RX_RXCLKNT_CTRL_LANE_1_0 = 2; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 = 16; reg_RX_RXCLKNT_INTDIV_EN_LANE = 1; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 1;break;	 
	case 132: reg_RX_RXCLKNT_CTRL_LANE_1_0 = 3; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 = 22; reg_RX_RXCLKNT_INTDIV_EN_LANE = 1; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 0;break;	 
	case 136: reg_RX_RXCLKNT_CTRL_LANE_1_0 = 2; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 = 17; reg_RX_RXCLKNT_INTDIV_EN_LANE = 1; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 1;break;	 
	case 256: reg_RX_RXCLKNT_CTRL_LANE_1_0 = 2; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 = 16; reg_RX_RXCLKNT_INTDIV_EN_LANE = 1; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 2;break;	 
	case 264: reg_RX_RXCLKNT_CTRL_LANE_1_0 = 3; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 = 22; reg_RX_RXCLKNT_INTDIV_EN_LANE = 1; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 1;break;	 
	case 272: reg_RX_RXCLKNT_CTRL_LANE_1_0 = 2; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 = 17; reg_RX_RXCLKNT_INTDIV_EN_LANE = 1; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 2;break;	 
	case 512: reg_RX_RXCLKNT_CTRL_LANE_1_0 = 2; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 = 16; reg_RX_RXCLKNT_INTDIV_EN_LANE = 1; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 3;break;	 
	case 528: reg_RX_RXCLKNT_CTRL_LANE_1_0 = 3; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 = 22; reg_RX_RXCLKNT_INTDIV_EN_LANE = 1; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 2;break;	 
	case 544: reg_RX_RXCLKNT_CTRL_LANE_1_0 = 2; reg_RX_RXCLKNT_DIV_SEL_LANE_4_0 = 17; reg_RX_RXCLKNT_INTDIV_EN_LANE = 1; reg_RX_RXCLKNT_DIV_SPEED_LANE_2_0 = 3;break;	 
        }

    reg_ANA_RX_RXCLK_NT_EN_LANE = reg_PIN_RXDCLK_NT_EN_RD_LANE;
    reg_ANA_RX_RXCLK_4X_EN_LANE = reg_PIN_RXDCLK_4X_EN_RD_LANE;
	#endif
}
