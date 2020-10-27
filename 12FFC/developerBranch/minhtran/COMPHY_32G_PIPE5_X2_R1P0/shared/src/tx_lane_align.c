/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file tx_lane_align.c
* \purpose Tx Lane Alignment
* \History
*	8/28/2017 Heejeong Ryu		separate file from shared  
*/

#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK1
#endif

#ifdef _PCIE_USB_BUILD

void txlane_align(void) BANKING_CTRL {
	uint8_t save_txdcc_en, save_txdcccal_en, save_txdcccal_pdiv_en;
	uint8_t tmp;
	
	reg_MCU_DEBUG0_LANE_7_0 = 0x89;

	if( phy_mode!=PCIE ) return;
	if( cmx_TX_LANE_ALIGN_OFF ) return;
	if(reg_LANE_DISABLE_RD_LANE) return;
	//if(cmx_LANE_DIS_LANE0_7_0 && cmx_LANE_DIS_LANE1_7_0) return;
	
	save_txdcc_en = reg_TXDCC_EN_LANE;
	save_txdcccal_en = reg_TXDCCCAL_EN_LANE;
	//save_txdcccal_pdiv_en = reg_TXDCCCAL_PDIV_EN_LANE; 
	save_txdcccal_pdiv_en = reg_ANA_RSVDA_LANE_7_0;
	
	//slave_lane act as master when master_lane disable
	//master_act_on = (mcuid==master_mcu) || ((master_mcu==MCU_LANE0 && cmx_LANE_DIS_LANE0_7_0) || (master_mcu==MCU_LANE1 &&cmx_LANE_DIS_LANE1_7_0));		

	if(!reg_PHY_ALIGN_OFF) {
		//PHY sync
		mcu_align_0(0x50);
		reg_MCU_DEBUG0_LANE_7_0 = 0x8a;

		if(slave_phy_on) {
			check_master_phy_status(CHECK_MP_TXALIGN_SYNC_START);
		}
		tx_align_on = 1;

		//slave set START
		if(!reg_MASTER_PHY_EN) {
			//while(reg_TXCLK_SYNC_START_IN_RD==0);
			if(mcuid==master_mcu) {
				reg_TXCLK_SYNC_START_OUT = 1;
				reg_TXCLK_SYNC_EN_OUT = 1;	
			}
		}
		//master see START_IN, set PLL_OUT
		else {
			while(reg_TXCLK_SYNC_START_IN_RD==0);
			if(mcuid==master_mcu) {
				reg_TXCLK_SYNC_EN_PLL_OUT = 1;
			}
		}
		//everyone see PLL_IN, set TX_SYNC_EN
		while(reg_TXCLK_SYNC_EN_PLL_IN_RD==0);
		reg_ANA_TX_TXCLK_SYNC_EN_LANE = 1;
		reg_TXDCC_EN_LANE = 0; 
		reg_TXDCCCAL_EN_LANE = 0; 
		//reg_TXDCCCAL_PDIV_EN_LANE = 0;
		//clear_txdcccal_pdiv_en_lane();
		tmp = reg_ANA_RSVDA_LANE_7_0; tmp &= 0xf7; reg_ANA_RSVDA_LANE_7_0 = tmp;
		delay01(5);
		reg_ANA_TX_TXCLK_SYNC_EN_LANE = 0;
		//slave cascade TNCLK_SYNC_OUT
		if(!reg_MASTER_PHY_EN) {
			while(reg_TXCLK_SYNC_EN_IN_RD == 1);
			if(mcuid==master_mcu) {
				reg_TXCLK_SYNC_EN_OUT = 0;	
			}
		}
		//master see TXCLK_SYNC_EN de-assert
		else {
			while(reg_TXCLK_SYNC_EN_IN_RD == 1);
			if(mcuid==master_mcu) {
				reg_TXCLK_SYNC_EN_OUT = 0;	
				reg_TXCLK_SYNC_EN_PLL_OUT = 0;	
			}
		}	
		//everyone wait for reg_TXCLK_SYNC_EN_PLL_IN_RD de-assert
		while(reg_TXCLK_SYNC_EN_PLL_IN_RD == 1);
		if(mcuid==master_mcu) {
			reg_TXCLK_SYNC_START_OUT = 0;
		}
		reg_TXDCC_EN_LANE = save_txdcc_en; 
		reg_TXDCCCAL_EN_LANE = save_txdcccal_en;
		//reg_TXDCCCAL_PDIV_EN_LANE = save_txdcccal_pdiv_en;
		reg_ANA_RSVDA_LANE_7_0 = save_txdcccal_pdiv_en;

		// no need
		//if(slave_phy_on) {
		//      check_master_phy_status(CHECK_MP_TXALIGN_SYNC_END);
		//}
		tx_align_on = 0;
	}
		//-------------------------------------------------------------------------
	else {  //if no alignment is needed, still need to control itself's lane sync
		mcu_align_0(0x51);

		if(mcuid==master_mcu) {
			reg_ANA_TXCLK_SYNC_EN_PLL_RING_FORCE = 1;
			reg_ANA_TXCLK_SYNC_EN_PLL_RING = 1;
		 	reg_ANA_TXCLK_SYNC_EN_PLL_FORCE = 1;
			reg_ANA_TXCLK_SYNC_EN_PLL = 1;
			reg_TXCLK_SYNC_EN_OUT = 1;
		}
		else {
			while(reg_TXCLK_SYNC_EN_OUT == 0) {
				if(master_mcu==MCU_LANE0 && SYNC_STATUS_LANE0_EN_READ==0) break;
				else if(master_mcu==MCU_LANE1 && SYNC_STATUS_LANE1_EN_READ==0) break;
			}
		}
		reg_ANA_TX_TXCLK_SYNC_EN_LANE = 1;
		reg_TXDCC_EN_LANE = 0; 
		reg_TXDCCCAL_EN_LANE = 0; 
		//reg_TXDCCCAL_PDIV_EN_LANE = 0;
		//clear_txdcccal_pdiv_en_lane();
		tmp = reg_ANA_RSVDA_LANE_7_0; tmp = tmp & 0xf7; reg_ANA_RSVDA_LANE_7_0 = tmp;
		delay01(5);
		reg_ANA_TX_TXCLK_SYNC_EN_LANE = 0;
		if(mcuid==master_mcu) {
			reg_TXCLK_SYNC_EN_OUT = 0;  // this is used here indicating finish
		}
		else {
			while(reg_TXCLK_SYNC_EN_OUT == 1) {
				if(master_mcu==MCU_LANE0 && SYNC_STATUS_LANE0_EN_READ==0) break;
				else if(master_mcu==MCU_LANE1 && SYNC_STATUS_LANE1_EN_READ==0) break;
			}
		}
		
		//mcu_align_0(0x52);

#ifdef SUPPORT_EXT_MEM
		short_delay_ram();	// spec requires delay between 100ns-550ns
#else
		short_delay();	// spec requires delay between 100ns-550ns
#endif
		
		if(mcuid==master_mcu) {
			reg_ANA_TXCLK_SYNC_EN_PLL_RING_FORCE = 0;
			reg_ANA_TXCLK_SYNC_EN_PLL_RING = 0;
		 	reg_ANA_TXCLK_SYNC_EN_PLL_FORCE = 0;
		 	reg_ANA_TXCLK_SYNC_EN_PLL = 0;
		}
		reg_TXDCC_EN_LANE = save_txdcc_en; 
		reg_TXDCCCAL_EN_LANE = save_txdcccal_en;
		//reg_TXDCCCAL_PDIV_EN_LANE = save_txdcccal_pdiv_en;
		reg_ANA_RSVDA_LANE_7_0 = save_txdcccal_pdiv_en;
	}

	reg_MCU_DEBUG0_LANE_7_0 = 0x90;
}

#endif //  _PCIE_USB_BUILD
