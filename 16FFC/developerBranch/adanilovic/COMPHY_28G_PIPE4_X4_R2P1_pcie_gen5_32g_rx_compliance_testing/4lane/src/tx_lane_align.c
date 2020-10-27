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

void txlane_align(void) BANKING_CTRL {
	uint8_t save_txdcc_en, save_txdcccal_en, save_txdcccal_pdiv_en;
	
	save_txdcc_en = reg_TXDCC_EN_LANE;
	save_txdcccal_en = reg_TXDCCCAL_EN_LANE;
	save_txdcccal_pdiv_en = reg_TXDCCCAL_PDIV_EN_LANE; 
	
	if( phy_mode!=PCIE ) return;
	
	if(!reg_PHY_ALIGN_OFF) {
		if(mcuid==master_mcu) {
			reg_TXCLK_SYNC_START_OUT = 1;	
		}	
			
		while(reg_TXCLK_SYNC_START_IN_RD==0 );	
		
		delay01(50);
		
		if(mcuid==master_mcu && reg_MASTER_PHY_EN) {
			reg_TXCLK_SYNC_EN_PLL_OUT = 1;
		}
		
		while(reg_TXCLK_SYNC_EN_PLL_IN_RD==0);			
	}	
	
	if(mcuid==master_mcu ) { 
		  pcie_master_sync_request(); 
		  reg_ANA_TXCLK_SYNC_EN_PLL = 1; 
		  if( ring_pll_enabled ) reg_ANA_TXCLK_SYNC_EN_PLL_RING = 1;
		  pcie_master_sync_clean(); 
	 }    
	 else { 
		slave_sync_wait(); 
	 } 
	   reg_ANA_TX_TXCLK_SYNC_EN_LANE = 1; 
	   reg_TXDCC_EN_LANE = 0; 
	   reg_TXDCCCAL_EN_LANE = 0; 
	   reg_TXDCCCAL_PDIV_EN_LANE = 0;

	   reg_TXCLK_SYNC_EN_OUT = 1;

	   delay01(10);  

	   reg_TXCLK_SYNC_EN_OUT = 0;

	   reg_ANA_TX_TXCLK_SYNC_EN_LANE = 0; 
	   
	   if(mcuid==master_mcu) { 
		  pcie_master_sync_request(); 
		  reg_ANA_TXCLK_SYNC_EN_PLL = 0;	
		  if( ring_pll_enabled ) reg_ANA_TXCLK_SYNC_EN_PLL_RING = 0;
		  pcie_master_sync_clean();		
	   } 
	   else { 
		slave_sync_wait(); 
	   } 

	if(!reg_PHY_ALIGN_OFF) {

		if(mcuid==master_mcu) {
			if(reg_MASTER_PHY_EN) 
				reg_TXCLK_SYNC_EN_PLL_OUT = 0;
		
			reg_TXCLK_SYNC_START_OUT = 0;
		}			
		else {
			while(reg_TXCLK_SYNC_EN_PLL_IN_RD==1 || reg_TXCLK_SYNC_EN_PLL_IN_RD==1);
		}
	}		
	   
	   reg_TXDCC_EN_LANE = save_txdcc_en; 
	   reg_TXDCCCAL_EN_LANE = save_txdcccal_en;
	   reg_TXDCCCAL_PDIV_EN_LANE = save_txdcccal_pdiv_en;
}

