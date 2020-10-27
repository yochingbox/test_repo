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
#pragma constseg BANK1
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
	if(serdes_ring_lane_en) {
		if(tag_ringpll_ind_en==0 && mcuid==master_mcu)  
			reg_INT9_INT_PU_PLL_OR_CHG_INT_EN_LANE = 1;
	}
	else if(mcuid==master_mcu ) 
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
	}	
	if(reg_PHY_CONFIG_1_0==0x3) {
		slave_phy_on = 1; 
		if(mcuid==master_mcu)
			reg_ANA_CMN_PHY_X2_MASTER_EN_1_0 = 0x01;			
	}	

	if (phy_mode == PCIE) {
		while(! (reg_PIN_PU_PLL_RD_LANE)){
			if(reg_PIN_TXDETRX_EN_RD_LANE) 
				P0Off_TXDETRX();
		}
	}
	#endif
	
	reg_ANA_REFCLK_SEL = reg_PIN_REFCLK_SEL_RD; 
	SYNC_STATUS_LANE_EN = 1;
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
	reg_REG_DTL_LOOP_FREEZE_LANE = 0;
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
	while( !reg_PIN_PU_IVREF_RD ){
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
		while(! (reg_PIN_PU_PLL_RD_LANE && reg_PIN_PU_TX_RD_LANE && reg_PIN_PU_RX_RD_LANE)) {
			#ifdef SUPPORT_CMD_IF
			if(reg_PHY_MCU_REMOTE_REQ_ISR_LANE)
				cmd_if();
			#endif
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

	init_irq();

	EA = 1;

	// goto next stage
	PHY_STATUS = ST_CAL;
	
}

void pu_pll_on(void) BANKING_CTRL { // on - *pll_fast_cal, dtx_clk_off*, reset_dtx*

	#ifdef SUPPORT_X2_RING_LANE_2
	if(serdes_ring_lane_en && tag_ringpll_ind_en) {
		if(ring_lane_sel) {
			ring_pll_fast_cal();
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

void DTL_DTX_DFE_clkoff_reset_1_pcie(bool dtx_off) BANKING_CTRL {

	dtx_off |= (reg_PHY_ALIGN_OFF==0);
	reg_DTL_CLK_OFF_LANE= 1; 
		
	if(dtx_off){
		if(mcuid==master_mcu) { 
		reg_DTX_CLK_OFF = 1; reg_DTX_CLK_OFF_RING = 1; 
		reg_RESET_DTX	= 1; reg_RESET_DTX_RING = 1;
		}
		else while(reg_RESET_DTX_RING==0);
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


__code uint8_t sellv_rxintp_ch0_tb[3][5]={{0,1,2,3,4},{5,6,7,8,9},{10,11,12,13,14}};
__code uint8_t sellv_rxdataclk_ch0_tb[3][5]={{0,1,2,3,4},{5,6,7,8,9},{10,11,12,13,14}};
__code uint8_t sellv_rxeomclk_ch0_tb[3][5]={{0,1,2,3,4},{5,6,7,8,9},{10,11,12,13,14}};
__code uint8_t sellv_rxsampelr_ch0_tb[3][5]={{0,1,2,3,4},{5,6,7,8,9},{10,11,12,13,14}};
__code uint8_t sellv_txclk_ch0_tb[3][5]={{0,1,2,3,4},{5,6,7,8,9},{10,11,12,13,14}};
__code uint8_t sellv_txdata_ch0_tb[3][5]={{0,1,2,3,4},{5,6,7,8,9},{10,11,12,13,14}};
__code uint8_t sellv_txpre_ch0_tb[3][5]={{0,1,2,3,4},{5,6,7,8,9},{10,11,12,13,14}};

__code uint8_t sellv_fbdiv_tb[3][5]={{0,1,2,3,4},{5,6,7,8,9},{10,11,12,13,14}};
__code uint8_t sellv_clk_intp_tb[3][5]={{0,1,2,3,4},{5,6,7,8,9},{10,11,12,13,14}};
__code uint8_t sellv_vgate_1gclk_tb[3][5]={{0,1,2,3,4},{5,6,7,8,9},{10,11,12,13,14}};
__code uint8_t sellv_vgate_lcpllclk_tb[3][5]={{0,1,2,3,4},{5,6,7,8,9},{10,11,12,13,14}};
__code uint8_t sellv_vgate_ringpllclk_tb[3][5]={{0,1,2,3,4},{5,6,7,8,9},{10,11,12,13,14}}; 


void power_reduction(void) BANKING_CTRL {

	reg_REG_CP_BRCH_SEL_1_0 = 0;
	reg_DIV_1G_EN = 0;

	if( phy_mode == PCIE)
	{
		reg_ANA_CLK100M_125M_EN = 1;
		reg_CLK500M_DIG_EN = 1;
	}
	else
	{
		reg_ANA_CLK100M_125M_EN = 0;
		reg_CLK500M_DIG_EN = 0;
	}

	reg_SELLV_FBDIV_2_0 = sellv_fbdiv_tb[0][0];
	reg_SELLV_CLK_INTP_2_0 = sellv_clk_intp_tb[0][0];
	reg_SELLV_VGATE_1GCLK_2_0 = sellv_vgate_1gclk_tb[0][0];
	reg_SELLV_VGATE_LCPLLCLK_2_0 = sellv_vgate_lcpllclk_tb[0][0];
	reg_SELLV_VGATE_RINGPLLCLK_2_0 = sellv_vgate_ringpllclk_tb[0][0];


	reg_SELLV_RXINTP_CH0_3_0 = sellv_rxintp_ch0_tb[0][0];
//	reg_SELLV_RXINTP_CH1_3_0 = 0;
//	reg_SELLV_RXINTP_CH2_3_0 = 0;
//	reg_SELLV_RXINTP_CH3_3_0 = 0;

	reg_SELLV_RXDATACLK_CH0_3_0 = sellv_rxdataclk_ch0_tb[0][0];
//	reg_SELLV_RXDATACLK_CH1_3_0 = 0;
//	reg_SELLV_RXDATACLK_CH2_3_0 = 0;
//	reg_SELLV_RXDATACLK_CH3_3_0 = 0;

	reg_SELLV_RXEOMCLK_CH0_3_0 = sellv_rxeomclk_ch0_tb[0][0];
//	reg_SELLV_RXEOMCLK_CH1_3_0 = 0;
//	reg_SELLV_RXEOMCLK_CH2_3_0 = 0;
//	reg_SELLV_RXEOMCLK_CH3_3_0 = 0;

	reg_SELLV_RXSAMPELR_CH0_3_0 = sellv_rxsampelr_ch0_tb[0][0];
//	reg_SELLV_RXSAMPELR_CH1_3_0 = 0;
//	reg_SELLV_RXSAMPELR_CH2_3_0 = 0;
//	reg_SELLV_RXSAMPELR_CH3_3_0 = 0;

	reg_SELLV_TXCLK_CH0_3_0 = sellv_txclk_ch0_tb[0][0];
//	reg_SELLV_TXCLK_CH1_3_0 = 0;
//	reg_SELLV_TXCLK_CH2_3_0 = 0;
//	reg_SELLV_TXCLK_CH3_3_0 = 0;

	reg_SELLV_TXDATA_CH0_3_0 = sellv_txdata_ch0_tb[0][0];
//	reg_SELLV_TXDATA_CH1_3_0 = 0;
//	reg_SELLV_TXDATA_CH2_3_0 = 0;
//	reg_SELLV_TXDATA_CH3_3_0 = 0;

	reg_SELLV_TXPRE_CH0_3_0 = sellv_txpre_ch0_tb[0][0]; 
//	reg_SELLV_TXPRE_CH1_3_0 = 0;
//	reg_SELLV_TXPRE_CH2_3_0 = 0;
//	reg_SELLV_TXPRE_CH3_3_0 = 0;
}



void dfe_setoff(void) BANKING_CTRL {


	if(dfe_off_flag == 1) {return;}
    if (!reg_INT_DFE_EN_LANE) {return;}

    EA = 0;
    // Save all registers to global variables here
    saved_ddc_dfe_clk_off = reg_DFE_CLK_OFF_LANE        ; // 1 bit
    saved_ddc_dis_s = reg_PATH_DISABLE_S_LANE;  // 1 bit
    saved_ddc_pu_s_f1p_se = reg_PU_F1P_S_E_LANE  ;     // 3 bits
    saved_ddc_pu_s_f1p_so = reg_PU_F1P_S_O_LANE  ;     // 3 bits
    saved_ddc_pu_s_f1n_se = reg_PU_F1N_S_E_LANE  ;     // 3 bits
    saved_ddc_pu_s_f1n_so = reg_PU_F1N_S_O_LANE  ;     // 3 bits
    saved_ddc_cont_en = reg_DFE_ADAPT_CONT_LANE;          // 1 bits

    // Turn on digital clock
    reg_DFE_CLK_OFF_LANE = 0;

    if (reg_DFE_ADAPT_CONT_LANE) {

      // Abort DFE run
      reg_DFE_ADAPT_CONT_LANE = 0;
      short_delay();
      reg_DFE_ADAPT_ABORT_LANE = 1;
      short_delay();
    }

      reg_DFE_START_LANE = 1;

      // Wait for DFE done.
       timeout_start((uint16_t)65000);
        while(!reg_DFE_DONE_LANE && !timeout); // Abort the simulation to avoid FW HANG
        timeout_stop;
        if(timeout) {
	    reg_RESET_DFE_LANE = 1; // Reset DFE to make sure it has a fresh start in timeout case.
	    reg_RESET_DFE_LANE = 0;
            timeout = 0;
        }
      
      reg_DFE_START_LANE = 0;
      reg_DFE_ADAPT_ABORT_LANE = 0;

      // Turn off analog sampler
      reg_PU_F1P_S_E_LANE = 0;
      short_delay();
      reg_PU_F1P_S_O_LANE = 0;
      short_delay();
      reg_PU_F1N_S_E_LANE = 0;
      short_delay();
      reg_PU_F1N_S_O_LANE = 0;
      short_delay();
      reg_PATH_DISABLE_S_LANE = 1;
      short_delay();

      // Turn off digital clock
      reg_DFE_CLK_OFF_LANE = 1;
	dfe_off_flag = 1;
	EA = 1;
    return;
}
void dfe_backon(void) BANKING_CTRL {

	if(dfe_off_flag == 0) return;
    if (!reg_INT_DFE_EN_LANE) {return;}
    // Restore all registers from global variables here.
    EA = 0;
    // Turn on digital clock
    reg_DFE_CLK_OFF_LANE         = saved_ddc_dfe_clk_off; // 1 bit

    // Turn on analog sampler
    reg_PATH_DISABLE_S_LANE = saved_ddc_dis_s;  // 1 bit
    short_delay();
    reg_PU_F1P_S_E_LANE   = saved_ddc_pu_s_f1p_se;     // 3 bits
    short_delay();
    reg_PU_F1P_S_O_LANE   = saved_ddc_pu_s_f1p_so;     // 3 bits
    short_delay();
    reg_PU_F1N_S_E_LANE   = saved_ddc_pu_s_f1n_se;     // 3 bits
    short_delay();
    reg_PU_F1N_S_O_LANE   = saved_ddc_pu_s_f1n_so;     // 3 bits
    short_delay();
    reg_DFE_ADAPT_CONT_LANE      = saved_ddc_cont_en;     // 1 bits

    reg_DFE_START_LANE = 1;
	dfe_off_flag = 0;
	EA = 1;
    return;
}
#ifdef _SATA_SERDES_BUILD
void power_saving(void) BANKING_CTRL {
	int16_t temp_old;
	int16_t temp_current;

	if (reg_MCU_DEBUG5_LANE_7_0!=0){

		temp_current = (((int32_t)read_tsen()*394) + 128900 + 500)/1000;
		reg_MCU_DEBUG1_LANE_7_0 = temp_current;
		if((temp_current-temp_old)>reg_MCU_DEBUG2_LANE_7_0||(temp_current-temp_old)<-reg_MCU_DEBUG2_LANE_7_0) {
			temp_old = temp_current;
			timeout_stop; 
			dfe_backon();
			timeout_start(reg_MCU_DEBUG6_LANE_7_0<<8);
			dfe_off_flag = 2;
			reg_MCU_DEBUG0_LANE_7_0 = 0x55;
		}
		else if((T2CON == 0x60)||((dfe_off_flag==1)&&TF2)){
			timeout_stop;
			dfe_backon();
			dfe_setoff();
			timeout_start(reg_MCU_DEBUG5_LANE_7_0 << 8);
		}
		else if(TF2&&(dfe_off_flag==2)){
			timeout_stop;
			dfe_setoff();
			reg_MCU_DEBUG0_LANE_7_0 = 0xaa;
		}
		
	}
	else {
		timeout_stop; 
		dfe_backon();
		reg_MCU_DEBUG0_LANE_7_0 = 0x88;
	}

}
#endif
