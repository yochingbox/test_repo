/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file power.c
* \purpose power control
* \History
*	10/15/2015 Heejeong Ryu		Initial 
*/

#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK1
#endif

#ifdef SUPPORT_POWER_SIMPLE
void PowerUp_Seq_Test(void) BANKING_CTRL {

	PHY_STATUS = ST_POSEQ;
	
    while(! (reg_PIN_PU_PLL_RD_LANE && reg_PIN_PU_TX_RD_LANE && reg_PIN_PU_RX_RD_LANE && reg_PIN_PU_IVREF_RD));

    //power on seq start	 
    reg_PWRON_SEQ = 1; pwrsq_on = 1;

    //power on seq start	 
	reg_ANA_PU_SQ_LANE = 1;
	reg_ANA_PU_PLL = 1;
	reg_ANA_PU_PLL_DLY = 1;
 	reg_ANA_PU_RX_LANE = 1;
	reg_ANA_PU_RX_DLY_LANE = 1;
	reg_SHRTR = 1;

	PM_CMN_REG2.BT.B2 = 0xef; //ana_pu_**,ana_pll_clk_ready*_ring=1
	PM_CMN_REG2.BT.B3 = 0x7;  //ana_pll_clk_ready*=1

	//delay01(400);
    while(! (reg_PIN_PU_PLL_RD_LANE && reg_PIN_PU_TX_RD_LANE));
	reg_ANA_PU_TX_LANE = 1;

 	pllcal_first_time = 1;
	SYNC_LINE_HOLD = SYNC_IDLE;
	
	#ifdef SUPPORT_X2_RING_LANE_2
	if(cmx_ETHERNET_CFG_1_0 > 1) {
		serdes_ring_lane_en = 1;
		ring_pll_enabled = 1;
		ring_lane_sel = 0;
		
		master_mcu = cmx_LCPLL_LANE_SEL;
		if(mcuid == (~master_mcu & 0x01)) {
			ring_lane_sel = 1;
		}	
		
	}
	else 
	#endif 
	{
		serdes_ring_lane_en = 0;
		ring_lane_sel = 0;
		if(mcuid == master_mcu) ring_lane_sel = 1;
	}	

	set_timer_cnt();
	
	//init_reg();
	SPD_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0x0;
	PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0;
	PM_CTRL_INTERRUPT_REG1_LANE.BT.B2 = 0;
	MCU_IRQ_LANE.BT.B0 = 0;

	//int setup
	//int2
	if(max_gen==0)	reg_INT2_SPD_INT_GEN_EN_LANE = 0;
	else	reg_INT2_SPD_INT_GEN_EN_LANE = 1;
	//int9
	reg_INT9_PM_CHG_INT_EN_LANE = 1;
	#ifdef _SATA_SERDES_BUILD
	if(serdes_ring_lane_en) {
		if(tag_ringpll_ind_en==0 && mcuid==master_mcu)  
			reg_INT9_INT_PU_PLL_OR_CHG_INT_EN_LANE = 1;
	}
	else 
	#endif	
	if(mcuid==master_mcu ) 
		reg_INT9_INT_PU_PLL_OR_CHG_INT_EN_LANE = 1;

	reg_INT1_INT_POWER_STATE_VALID_RISE_INT_EN_LANE = 0;
	//int8
	reg_INT8_PM_PCIE_FUNC_CHG_INT_EN_LANE = 0;
	//int10
	reg_INT10_INT_RX_INIT_RISE_INT_EN_LANE = 1;
	
	PHY_STATUS = ST_CAL;
}
#endif
/**
 * \module PowerUp_Seq
 * 
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: 
 *    Output: 
*/
void PowerUp_Seq(void) BANKING_CTRL {

	reg_ANA_REG_SU_DLY_SEL_1_0 = 3;
	reg_ANA_REG_HD_DLY_SEL_1_0 = 3;
	SYNC_SATUS_PLL_OR_PLL_OFF = 1;
	set_timer_cnt();
	PHY_STATUS_INT = IDLE;
	
	slave_phy_on = 0;
	#ifdef _PCIE_USB_BUILD
	if(mcuid==master_mcu) {
		if(reg_PHY_CONFIG_1_0==0x2) {
			reg_ANA_CMN_PHY_X2_MASTER_EN_1_0 = 0x03;		
		}	
		else if(reg_PHY_CONFIG_1_0==0x3) {
			slave_phy_on = 1; 
			reg_ANA_CMN_PHY_X2_MASTER_EN_1_0 = 0x01;
		}	
	}	
	reg_ANA_REFCLK_SEL = reg_PIN_REFCLK_SEL_RD; 

	if (phy_mode == PCIE) {
		while(! (reg_PIN_PU_PLL_RD_LANE)){
			if(reg_PIN_TXDETRX_EN_RD_LANE) 
				P0Off_TXDETRX();
		}
	}
	#endif
	
	SYNC_STATUS_LANE_EN = 1;
	
	#ifdef _SATA_SERDES_BUILD
	if(reg_MCU_EN_LANE0 && reg_MCU_EN_LANE1) {
		while(1) {
			if(SYNC_STATUS_LANE0_EN_READ && SYNC_STATUS_LANE1_EN_READ)  break;
		}	
	}
	#endif	
	
	ring_use_250m = USE_RING_REFCLK_250M;	
	reg_CLK1G_REFCLK_SEL = ring_use_250m==0;
	#ifdef _28G_R2P0
	reg_REF_CLK_RING_SEL = ring_use_250m==0;
	
	//reg_MCU_DEBUG0_LANE_7_0 = 0x30;
	
	#ifdef SUPPORT_X2_RING_LANE_2
	if(cmx_ETHERNET_CFG_1_0 > 0x01) {
		serdes_ring_lane_en = 1;
		ring_pll_enabled = 1;
		ring_lane_sel = 0;
		master_mcu = cmx_LCPLL_LANE_SEL;
		if(mcuid == (~master_mcu & 0x01)) {
			ring_lane_sel = 1;
		}	
	}
	else 
	#endif 
	{
		if(phy_mode == SERDES) no_pllspdchg = 1;
		serdes_ring_lane_en = 0;
		ring_lane_sel = 0;
		if(mcuid == master_mcu) ring_lane_sel = 1;
	}
	
	#endif
	PHY_STATUS = ST_POSEQ;

	//read user data
	init_xdata();
	init_reg();

	//reg_MCU_DEBUG9_LANE_7_0 = 0x24; 

	#ifdef _28G_R2P0
	reg_DTL_LOOP_FREEZE_LANE = 1;  //analog deleted
	#else
	reg_REG_DTL_LOOP_FREEZE_LANE = 1;
	#endif
	reg_DTL_FLOOP_FREEZE_LANE = 1;  
	reg_FFE_PULSE_EN_LANE = 0;

	//reg_RESET_ANA = 1;	//default=1
	//reg_RESET_ANA_RING = 1;
	reg_EOM_RESET_INTP_EXT_LANE = 1; 
	reg_TX_INTPRESET_EXT = 1; 	    
	reg_RESET_INTP_EXT_LANE = 1;    
	reg_ANA_RX_PU_DLY2_LANE = 0; 
	
	//move for SERDES Ethernet mode 2 independent power per lane 
	pwrsq_on = 1;
	lnx_CAL_DONE_LANE = 1;
	#ifndef _LAB
	while( !reg_PIN_PU_IVREF_RD || !reg_PIN_PU_IVREF_RD || !reg_PIN_PU_IVREF_RD){
		#ifdef SUPPORT_CMD_IF
		if(reg_PHY_MCU_REMOTE_REQ_ISR_LANE)
			cmd_if();
		#endif				
	}	
	#endif
	if(mcuid==master_mcu) {
		reg_PWRON_SEQ = 1;
		cmx_CAL_DONE = 1;
		delay01(200);
		
		//pu_ivref up
		PM_CMN_REG2.BT.B2 = 0x08;
		delay01(10); //1us
		PM_CMN_REG2.BT.B2 = 0x0c;
		delay01(10); //1us
		PM_CMN_REG2.BT.B2 = 0x0e;
		delay01(10); //1us
		PM_CMN_REG2.BT.B2 = 0x0f;		
	} else { 
		check_pu_ivref();
	}	
	
	//reg_MCU_DEBUG0_LANE_7_0 = 0x80;
	//reg_MCU_DEBUG2_LANE_7_0 = ring_lane_sel;
	//reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
	//reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
	//reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
	//reg_MCU_DEBUG7_LANE_7_0 = serdes_ring_lane_en;
	//reg_MCU_DEBUG8_LANE_7_0 = cmx_ETHERNET_CFG_1_0;
	//reg_MCU_DEBUG9_LANE_7_0 = slave_phy_on;	

	//------
	delay01(50); //5us delay after PU_IVREF=1
	
	reg_ANA_PU_SQ_LANE = 1; 
	delay01(150); // 20uS delay from PU_IVREF=1

	if(serdes_ring_lane_en==0)
	{
		while(! (reg_PIN_PU_PLL_RD_LANE && reg_PIN_PU_TX_RD_LANE && reg_PIN_PU_RX_RD_LANE)) {
			#ifdef SUPPORT_CMD_IF
			if(reg_PHY_MCU_REMOTE_REQ_ISR_LANE)
				cmd_if();
			#endif
		}
	}	
	else 
		while(reg_PU_PLL_OR==0) {
			#ifdef SUPPORT_CMD_IF
			if(reg_PHY_MCU_REMOTE_REQ_ISR_LANE)
				cmd_if();			
			#endif
		}		

	if(mcuid== master_mcu) {
		reg_ANA_PU_PLL = 1;
		delay01(5); //0.5us 
		reg_ANA_PU_PLL_DLY = 1;
	} 
	
	#ifdef _SATA_SERDES_BUILD
	if( serdes_ring_lane_en & ring_lane_sel ) {
		reg_ANA_PU_PLL_RING = 1;
		delay01(5);
		reg_ANA_PU_PLL_DLY_RING = 1;
	}
	#endif
	
	if(serdes_ring_lane_en==0)
		while(reg_ANA_PU_PLL_DLY==0 || reg_ANA_PU_PLL==0);
	
	//pu_rx up
	reg_ANA_PU_RX_LANE = 1;	
	delay01(5);
	reg_ANA_PU_RX_DLY_LANE = 1;
	delay01(4);
	reg_FFE_PULSE_EN_LANE = 1;
	reg_ANA_RX_PU_DLY2_LANE = 1;
	
	delay01(400);
	reg_EOM_RESET_INTP_EXT_LANE = 0; 
	reg_TX_INTPRESET_EXT = 0; 	    
	reg_RESET_INTP_EXT_LANE = 0;    
	
	if(serdes_ring_lane_en==0)
		while(! (reg_PIN_PU_PLL_RD_LANE && reg_PIN_PU_TX_RD_LANE));
	
	reg_ANA_PU_TX_LANE = 1;

	#ifdef _PCIE_USB_BUILD	
	init_irq();
	#endif
	
	EA = 1;
	// goto next stage
	PHY_STATUS = ST_CAL;
	
}

void check_pu_ivref(void) BANKING_CTRL {
	do {
		if(reg_ANA_PU_IVREF_DLY3 /*|| reg_PU_IVREF_FELL==0*/) break;		
	} while(1);

}

void pu_pll_on(void) BANKING_CTRL { // on - *pll_fast_cal, dtx_clk_off*, reset_dtx*

	#ifdef SUPPORT_X2_RING_LANE_2
	if(serdes_ring_lane_en && tag_ringpll_ind_en) {
		if(ring_lane_sel) {
			#ifdef SUPPORT_RINGPLL_INITCAL_ONLY
			reg_ANA_PU_PLL_RING = 1;
			delay01(5);
			reg_ANA_PU_PLL_DLY_RING = 1;
			delay01(5);
			reg_RESET_ANA_RING = 0;
			ring_pll_cal(); 
			pll_clk_ready_ring_1();
			#else
			ring_pll_fast_cal();
			#endif
			reg_DTX_CLK_OFF_RING = 0;
			delay01(10);
			reg_RESET_DTX_RING = 0;
		}
		else {
			pll_fast_cal();	
			reg_DTX_CLK_OFF = 0;
			delay01(10);
			reg_RESET_DTX	= 0;
		}
	}
	else 
	#endif
	{
		if(mcuid== master_mcu) {
			//fast startup
			pll_fast_cal();			
			if(ring_pll_enabled) {
				ring_pll_fast_cal();
			}		
			
			#ifdef _SATA_SERDES_BUILD
			reg_DTX_CLK_OFF = 0;	reg_DTX_CLK_OFF_RING = 0;	
			delay01(10);
			reg_RESET_DTX	= 0;	reg_RESET_DTX_RING = 0;
			#endif
			
			SYNC_SATUS_PLL_OR_PLL_OFF = 0;		
		} 
		
		while( SYNC_SATUS_PLL_OR_PLL_OFF ) {
			if(reg_PU_PLL_OR==0) break;
		}
	}
}

void pu_pll_off(void) BANKING_CTRL { //off - reset_ana*, ana_pu_pll_*,  pll_clk_ready_*, dtx_clk_off*, reset_dtx*

	#ifdef SUPPORT_X2_RING_LANE_2
	if(serdes_ring_lane_en && tag_ringpll_ind_en) {
		if(ring_lane_sel) {
			pu_ringpll_off();
		}
		else {
			pu_lcgpll_off();
		}
	}
	else 
	#endif
	{
		if(mcuid== master_mcu) { 			
			//master_pu_pll_off();			
			pll_clk_ready_all_0();
			reg_DTX_CLK_OFF = 1;	reg_DTX_CLK_OFF_RING = 1;
			reg_RESET_DTX	= 1; 	reg_RESET_DTX_RING = 1;
			delay01(5); 
			reg_RESET_ANA = 1;	reg_RESET_ANA_RING = 1;	
			reg_ANA_PU_PLL_DLY = 0; reg_ANA_PU_PLL_DLY_RING = 0;
			reg_ANA_PU_PLL = 0; reg_ANA_PU_PLL_RING = 0; 	
			
			SYNC_SATUS_PLL_OR_PLL_OFF = 1;	
		} 		
		
		while( SYNC_SATUS_PLL_OR_PLL_OFF==0 ) {
			if(reg_PU_PLL_OR) break;
		}
	}
}


void DTL_DTX_DFE_clkoff_reset_0(void) BANKING_CTRL {

	reg_DTL_CLK_OFF_LANE= 0; 
	#ifdef _SATA_SERDES_BUILD
	if(serdes_ring_lane_en) {
		if(ring_lane_sel) reg_DTX_CLK_OFF_RING = 0;
		else reg_DTX_CLK_OFF = 0;
	}
	else
	#endif	
	if(mcuid == master_mcu) {		
		reg_DTX_CLK_OFF = 0;	
		if(ring_pll_enabled) reg_DTX_CLK_OFF_RING = 0;
	}	
	reg_DFE_CLK_OFF_LANE = 0; 
	
	delay01(10);	// spec required 1-2usec delay
	
	reg_RESET_DTL_LANE = 0;	
	#ifdef _SATA_SERDES_BUILD
	if(serdes_ring_lane_en) {
		if(ring_lane_sel) reg_RESET_DTX_RING = 0;
		else reg_RESET_DTX	= 0;
	}
	else 
	#endif	
	if(mcuid == master_mcu) {	
		reg_RESET_DTX	= 0; 
		if(ring_pll_enabled) reg_RESET_DTX_RING = 0;
	}	
	reg_RESET_DFE_LANE = 0;

	// delay01(5);	// not needed

	if(dfe_dis==0 && rxinit_4_spdchg_en) {
	reg_DFE_DC_LOAD_LANE = 1;  //dc load
	reg_DFE_DC_LOAD_LANE = 0;
	reg_DFE_TAP_REFRESH_E_LANE = 1;
	reg_DFE_TAP_REFRESH_E_LANE = 0;
	reg_DFE_TAP_REFRESH_O_LANE = 1;
	reg_DFE_TAP_REFRESH_O_LANE = 0;
	}
	
}

void DTL_DTX_DFE_clkoff_reset_1(bool dtx_off) BANKING_CTRL {

	dtx_off |= (reg_PHY_ALIGN_OFF==0);
	reg_DTL_CLK_OFF_LANE= 1; 
	#ifdef _SATA_SERDES_BUILD
	if(serdes_ring_lane_en) {
		if(ring_lane_sel) { reg_DTX_CLK_OFF_RING = 1; reg_RESET_DTX_RING = 1; }
		else { reg_DTX_CLK_OFF = 1; reg_RESET_DTX	= 1; }
	}
	else 
	#endif	
	if(dtx_off) { 
		reg_DTX_CLK_OFF = 1; reg_DTX_CLK_OFF_RING = 1; 
		reg_RESET_DTX	= 1; reg_RESET_DTX_RING = 1;
	}	
	reg_DFE_CLK_OFF_LANE = 1; 
	reg_RESET_DTL_LANE = 1;	
	CKCON = 0x07 ;  //MCU WAIT time the slowest
	reg_RESET_DFE_LANE = 1;
	CKCON = 0x00 ; //MCU WAIT time setting back to normal.

}	

// design removed.
//void txdigital_align(void)	{ 
//		if(mcuid== master_mcu) { 
//		  master_sync_request(); 
//		  reg_TX_CLK_DIV_RST = 1; 
//          reg_TX_CLK_DIV_RST = 0; 
//		  master_sync_clean(); 
//	   } else { 
//		slave_sync_wait(); 
//	   } 
//}


