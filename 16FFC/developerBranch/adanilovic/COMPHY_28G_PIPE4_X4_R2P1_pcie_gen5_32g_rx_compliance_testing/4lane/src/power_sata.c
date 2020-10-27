/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file power.c
* \purpose power control for SATA, SAS
* \History
*	02/23/2015 Heejeong Ryu		Initial 
*/

#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK1
#endif

#ifdef _SATA_SERDES

/**
 * \module Power_Slumber
 * 
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: 
 *    Output: 
*/
void Power_Slumber( void ) BANKING_CTRL {

	//if(reg_DFE_ADAPT_CONT_LANE == 1) 
	//{
	//	reg_DFE_ADAPT_CONT_LANE = 0;
	////	while(!reg_DFE_DONE_LANE);
	//	reg_DFE_START_LANE = 0;
	//}

	reg_DFE_CLK_OFF_LANE = 1; //DFE_FREEZE = 1; 
	PM_CTRL_RX_LANE_REG1_LANE.BT.B2 = 0x38; //DTL_CLK_OFF,RESET_DTL=1, RX_INIT_DONE=1
	CKCON = 0x07 ;  //MCU WAIT time the slowest
	reg_RESET_DFE_LANE = 1;
	CKCON = 0x00 ; //MCU WAIT time setting back to normal.

	if(	reg_PU_PLL_OR==0 || (serdes_ring_lane_en && tag_ringpll_ind_en)) 
		pu_pll_off();
	else if( reg_PU_PLL_OR==1 && SYNC_SATUS_PLL_OR_PLL_OFF_READ ) {
		pu_pll_on();
	}
	
	pu_rx_off();

    reg_ANA_PU_TX_LANE       = 0;
	
//change mcuclk to use refclk
//	reg_MCU_CLK_SEL_1 = 1; 
	
	PHY_STATUS = ST_SLUMBER_WK;
	
}	

/**
 * \module Power_Slumber_wk
 * 
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: 
 *    Output: 
*/
void Power_Slumber_Wakeup( void ) BANKING_CTRL {
	
	do {
		if( reg_PIN_REFCLK_DIS_RD == 1 ) {
			PHY_STATUS = ST_SLUMBER_CLK;
			TCON  = 0x04; //EX0=LVL 
			reg_INT_REFCLK_DIS_CHG_ISR_LANE = 0; //??
			reg_INT0_REFCLK_DIS_EN_INT_EN_LANE = 1;
			PCON = 0x8a; //mcu stop 
			
			//wait for mcu wakeup
			
			TCON  = 0x05; //EX0=FALL
			reg_INT0_REFCLK_DIS_EN_INT_EN_LANE = 0;
			reg_INT_REFCLK_DIS_CHG_ISR_LANE = 0;

			do_wake = 1;
		}
    } while(!do_wake) ;
	
	if( reg_PU_IVREF_FELL == 1 ) {

		reg_ANA_PU_SQ_LANE = 0; //sequence: checked!
		PM_CMN_REG2.BT.B2 = 0; //pu_ivref**=0
		if(mcuid== master_mcu) {
			//master_sync_request(); 
			
			if( reg_PU_BG_FELL == 1) 
				delay01(200);
			
			pu_ivref_on();
			
			//master_sync_clean();				
		 } 
		 //else { slave_sync_wait(); } 
		 while(reg_ANA_PU_IVREF_DLY3==0);
	
		delay01(50);
		reg_ANA_PU_SQ_LANE=1;
		delay01(150);
	}
 	
//end use refclk
//	reg_MCU_CLK_SEL_1 = 0; 
	delay01(5);
    reg_ANA_PU_TX_LANE   = reg_PIN_PU_TX_RD_LANE;
	
	if(reg_PIN_PU_RX_RD_LANE ) pu_rx_on();		
	else pu_rx_off();
	
	if(	(reg_PU_PLL_OR==1 && SYNC_SATUS_PLL_OR_PLL_OFF_READ) || (serdes_ring_lane_en && tag_ringpll_ind_en))
		pu_pll_on();	

	if( reg_PIN_PU_TX_RD_LANE==1 && reg_PIN_PU_RX_RD_LANE==1) 
	{
		DTL_DTX_DFE_clkoff_reset_0();

		delay01(100);		
		//txlane_align();		
		//delay01(60);		
		//txdigital_align();
				
		if(cmx_AUTO_RX_INIT_EN == 0)
			PHY_STATUS = ST_PLLREADY; 
		else	
			PHY_STATUS = ST_DTL;

		reg_PIN_PLL_READY_TX_LANE    = 1;
		reg_PIN_PLL_READY_RX_LANE    = 1;
		
	}
	else {
		do_wake = 0;
		if( reg_PIN_PU_TX_RD_LANE==0 ) 	PHY_STATUS = ST_PSLUMBER_TX;
		else PHY_STATUS = ST_PSLUMBER_RX;
	}
}


/**
 * \module Power_Partial_Slumber TX/RX
 * 
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: patrial tx: pin_pu_tx : H -> L -> H, pin_pu_rx : H
 *           partial_rx: pin_pu_rx : H -> L -> H, pin_pu_tx : H
 *    Output: 
*/
void Power_Patial_Slumber( void ) BANKING_CTRL { //Partial Rx Only

	//if(reg_PIN_PU_RX_RD_LANE == 0 && reg_DFE_ADAPT_CONT_LANE == 1) 
	//{
	//	reg_DFE_ADAPT_CONT_LANE = 0;
	//	//while(!reg_DFE_DONE_LANE);
	//	reg_DFE_START_LANE = 0;
	//}
	pu_rx_off();

	reg_RESET_DTL_LANE   = 1;
	CKCON = 0x07 ;  //MCU WAIT time the slowest
	reg_RESET_DFE_LANE = 1;
	CKCON = 0x00 ; //MCU WAIT time setting back to normal.
   reg_DFE_CLK_OFF_LANE = 1; //DFE_FREEZE 
   reg_DTL_CLK_OFF_LANE = 1; 	
   
    while(!do_wake);

	pu_rx_on();	

	load_cal_data_dll(); //load dll, load align90
	
	delay01(20); //2usec

	//DTL_DTX_DFE_clkoff_reset_0();
	reg_DTL_CLK_OFF_LANE= 0; 
	reg_DFE_CLK_OFF_LANE = 0; 
	delay01(10); //1~2us
	reg_RESET_DTL_LANE = 0;	
	CKCON = 0x07 ;  //MCU WAIT time the slowest
	reg_RESET_DFE_LANE = 0;
	CKCON = 0x00 ; //MCU WAIT time setting back to normal.

	if(cmx_AUTO_RX_INIT_EN == 0)
		PHY_STATUS = ST_PLLREADY; 
	else	
		PHY_STATUS = ST_DTL;	

	reg_PIN_PLL_READY_RX_LANE = 1;

}

#endif //_SATA_SERDES
