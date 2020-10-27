#include "common.h"
#include "driver.h"

static void drv_train_if_cfg() {

	if(reg_TX_TRAIN_PAT_SEL_LANE_1_0 == 0x1 || reg_TX_TRAIN_PAT_SEL_LANE_1_0 == 0x2) {
		reg_TRAIN_PAT_NUM_LANE_9_0_b0 = 0x88;
		reg_TRAIN_PAT_NUM_LANE_9_0_b1 = 0x0;
		reg_TX_TRAIN_PAT_TOGGLE_LANE = 0x0;
		#ifdef _12FFC_COMPHY_112G_X4_R1P2
		// IPCE_COMPHY-1661
		#else
		reg_ETHERNET_MODE_LANE_1_0 = 0x1;
		#endif
		reg_TX_TRAIN_PAT_MODE_LANE = 0x0;
/*	switch(reg_PIN_TXDCLK_NT_SEL_RD_LANE_2_0) {*/
/*		case 0: ANA_PLL25.BT.B0 = (ANA_PLL25.BT.B0&0x04)|0x20; reg_TXCLK_NT_FIX_DIV_EN_LANE = 1; break;*/
/*		case 1: ANA_PLL25.BT.B0 = (ANA_PLL25.BT.B0&0x04)|0x80; reg_TXCLK_NT_FIX_DIV_EN_LANE = 1; break;*/
/*		case 2: ANA_PLL25.BT.B0 = (ANA_PLL25.BT.B0&0x04)|0x2b; reg_TXCLK_NT_FIX_DIV_EN_LANE = 0; break;*/
/*		case 3: ANA_PLL25.BT.B0 = (ANA_PLL25.BT.B0&0x04)|0x42; reg_TXCLK_NT_FIX_DIV_EN_LANE = 0; break;*/
/*		case 4: ANA_PLL25.BT.B0 = (ANA_PLL25.BT.B0&0x04)|0x40; reg_TXCLK_NT_FIX_DIV_EN_LANE = 1; break;*/
/*	}*/
              	
		reg_TX_AMP_DEFAULT1_LANE_6_0 = 0x2b;
		reg_TX_EMPH0_DEFAULT1_LANE_4_0 = 0x3;
		reg_TX_EMPH1_DEFAULT1_LANE_4_0 = 0x11;
		
		reg_TX_AMP_DEFAULT2_LANE_6_0 = 0x3f;
		reg_TX_EMPH0_DEFAULT2_LANE_4_0 = 0x0;
		reg_TX_EMPH1_DEFAULT2_LANE_4_0 = 0x0;
		
		reg_TX_AMP_DEFAULT3_LANE_6_0 = 0x3f;
		reg_TX_EMPH0_DEFAULT3_LANE_4_0 = 0x0;
		reg_TX_EMPH1_DEFAULT3_LANE_4_0 = 0x0;
		
		reg_TX_EMPH0_MAX_LANE_4_0 = 0x10;
		reg_TX_EMPH1_MAX_LANE_4_0 = 0x19;
		reg_TX_EMPH2_MAX_LANE_4_0 = 0x0;
	} else if(reg_TX_TRAIN_PAT_SEL_LANE_1_0 == 0x3) {
		reg_TRAIN_PAT_NUM_LANE_9_0_b0 = 0x8;
		reg_TRAIN_PAT_NUM_LANE_9_0_b1 = 0x2;
		reg_TX_TRAIN_PAT_TOGGLE_LANE = 0x0;
		#ifdef _12FFC_COMPHY_112G_X4_R1P2
		// IPCE_COMPHY-1661
		#else
		reg_ETHERNET_MODE_LANE_1_0 = 0x2;
		#endif
		reg_TX_TRAIN_PAT_MODE_LANE = 0x0;
/*	switch(reg_PIN_TXDCLK_NT_SEL_RD_LANE_2_0) {*/
/*		case 0: ANA_PLL25.BT.B0 = (ANA_PLL25.BT.B0&0x04)|0x20; reg_TXCLK_NT_FIX_DIV_EN_LANE = 1; break;*/
/*		case 1: ANA_PLL25.BT.B0 = (ANA_PLL25.BT.B0&0x04)|0x80; reg_TXCLK_NT_FIX_DIV_EN_LANE = 1; break;*/
/*		case 2: ANA_PLL25.BT.B0 = (ANA_PLL25.BT.B0&0x04)|0x2b; reg_TXCLK_NT_FIX_DIV_EN_LANE = 0; break;*/
/*		case 3: ANA_PLL25.BT.B0 = (ANA_PLL25.BT.B0&0x04)|0x42; reg_TXCLK_NT_FIX_DIV_EN_LANE = 0; break;*/
/*		case 4: ANA_PLL25.BT.B0 = (ANA_PLL25.BT.B0&0x04)|0x40; reg_TXCLK_NT_FIX_DIV_EN_LANE = 1; break;*/
/*	}*/
	
		reg_TX_AMP_DEFAULT1_LANE_6_0 = 0x3f;
		reg_TX_EMPH0_DEFAULT1_LANE_4_0 = 0x0;
		reg_TX_EMPH1_DEFAULT1_LANE_4_0 = 0x0;
		
		reg_TX_AMP_DEFAULT2_LANE_6_0 = 0x2f;
		reg_TX_EMPH0_DEFAULT2_LANE_4_0 = 0xa;
		reg_TX_EMPH1_DEFAULT2_LANE_4_0 = 0x6;
		
		reg_TX_AMP_DEFAULT3_LANE_6_0 = 0x2f;
		reg_TX_EMPH0_DEFAULT3_LANE_4_0 = 0x10;
		reg_TX_EMPH1_DEFAULT3_LANE_4_0 = 0x0;
		
		reg_TX_EMPH0_MAX_LANE_4_0 = 0x10;
		reg_TX_EMPH1_MAX_LANE_4_0 = 0x10;
		reg_TX_EMPH2_MAX_LANE_4_0 = 0x6;
	}
	
	// 202020318 Added all tx fir min/max restore as SoC request
	// as midas
	reg_TX_EMPH0_MIN_LANE_4_0 = 0x0;
	reg_TX_EMPH1_MIN_LANE_4_0 = 0x0;
	reg_TX_EMPH2_MIN_LANE_4_0 = 0x0;
	
	reg_TX_AMP_MIN_LANE_6_0 = 0x25;
	reg_TX_AMP_MAX_LANE_6_0 = 0x3f;
}


void drv_func_cfg() {

	drv_train_if_cfg();
	txclk_nt_config();
}

void txclk_nt_config() BANKING_CTRL {
	uint8_t save_txdclk_nt_en = reg_TXDCLK_NT_EN_LANE;
    reg_TXDCLK_NT_EN_LANE = 0;
	// TX
	switch(reg_PIN_TXDCLK_NT_SEL_RD_LANE_2_0) {
		case 0: ANA_PLL25.BT.B0 = (ANA_PLL25.BT.B0&0x04)|0x20; reg_TXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 1: ANA_PLL25.BT.B0 = (ANA_PLL25.BT.B0&0x04)|0x80; reg_TXCLK_NT_FIX_DIV_EN_LANE = 1; break;
		case 2: ANA_PLL25.BT.B0 = (ANA_PLL25.BT.B0&0x04)|0x2b; reg_TXCLK_NT_FIX_DIV_EN_LANE = 0; break;
		case 3: ANA_PLL25.BT.B0 = (ANA_PLL25.BT.B0&0x04)|0x42; reg_TXCLK_NT_FIX_DIV_EN_LANE = 0; break;
		case 4: ANA_PLL25.BT.B0 = (ANA_PLL25.BT.B0&0x04)|0x40; reg_TXCLK_NT_FIX_DIV_EN_LANE = 1; break;
	}
	reg_TXDCLK_NT_EN_LANE = save_txdclk_nt_en;
}

