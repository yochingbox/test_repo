/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file power.c
* \purpose power control for SATA, SAS
* \History
*	02/23/2015 Heejeong Ryu		Initial 
*/

#include "common.h"

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
void Power_Slumber( void ) {

	if(reg_DFE_ADAPT_CONT_LANE == 1) 
	{
		reg_DFE_ADAPT_CONT_LANE = 0;
	//	while(!reg_DFE_DONE_LANE);
		reg_DFE_START_LANE = 0;
	}

	reg_DFE_CLK_OFF_LANE = 1; //DFE_FREEZE = 1; 
	PM_CTRL_RX_LANE_REG1_LANE.BT.B2 = 0x38; //DTL_CLK_OFF,RESET_DTL=1, RX_INIT_DONE=1
	CKCON = 0x07 ;  //MCU WAIT time the slowest
	reg_RESET_DFE_LANE = 1;
	CKCON = 0x00 ; //MCU WAIT time setting back to normal.

	if(	reg_PU_PLL_OR==1 ) goto skip_slumer;  
	
	if(mcuid==MCU_LANE0) {
		master_sync_request();		
		reg_RESET_DTX = 1;	reg_RESET_DTX_RING = 1;
		reg_DTX_CLK_OFF = 1;	reg_DTX_CLK_OFF_RING = 1;
		
		pll_clk_ready_all_0();
		
		delay(Tus);
		reg_RESET_ANA    = 1; 	reg_RESET_ANA_RING = 1;	
		reg_ANA_PU_PLL_DLY = 0;
    	reg_ANA_PU_PLL  = 0;  reg_ANA_PU_PLL_RING = 0;
		master_sync_clean();		
	} else { slave_sync_wait(); }
	
skip_slumer:	
    reg_ANA_PU_TX_LANE       = 0;
	reg_FFE_PULSE_EN_LANE = 0;
    reg_ANA_PU_RX_LANE       = 0;
	reg_ANA_PU_RX_DLY_LANE 	 = 0;

/*	//TODO 
	reg_TRXDCC_CAL_CLK100KHZ_LANE = 0; // need to reset before wake up. To improve PLL fast startup calibration.
	reg_RXDCC_DAC_SYNC_CLK_LANE = 0;
	reg_TXDCCCAL_EN_LANE = 0;
	reg_RXDCC_CAL_EN_LANE = 0;
	reg_TEMPC_DAC_VALID = 0;
	reg_EOM_ALIGN_EN_LANE = 0;
	reg_TX_TDCAL_EN_LANE = 0;
*/
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
void Power_Slumber_Wakeup( void ) {
	
	do {
		if( reg_PIN_REFCLK_DIS_RD == 1 ) {
			PHY_STATUS = ST_SLUMBER_CLK;
			TCON  = 0x04; //EX0=LVL 
			reg_INT_REFCLK_DIS_CHG_ISR_LANE = 0; //??
			PCON = 0x8a; //mcu stop 
			
			//wait for mcu wakeup
			
			TCON  = 0x05; //EX0=FALL
			reg_INT_REFCLK_DIS_CHG_ISR_LANE = 0;

			do_wake = 1;
		}
    } while(!do_wake) ;
	

	if( reg_PU_IVREF_FELL == 1 ) {

		reg_ANA_PU_SQ_LANE = 0; //sequence: checked!
		if(mcuid==MCU_LANE0) {
			master_sync_request();		
			PM_CMN_REG2.BT.B2 = 0; //pu_ivref**=0

			if( reg_PU_BG_FELL == 1) 
				delay(T_20us);
			
			reg_ANA_PU_IVREF = 1;
			delay(Tus);
			reg_ANA_PU_IVREF_DLY1 = 1;
			delay(Tus);
			reg_ANA_PU_IVREF_DLY2 = 1;
			delay(Tus);
			reg_ANA_PU_IVREF_DLY3 = 1;
			
			master_sync_clean();		
		} else { slave_sync_wait(); }
		delay(T_5us);
		reg_ANA_PU_SQ_LANE=1;
		delay(T_20us);
	}
 	
//end use refclk
//	reg_MCU_CLK_SEL_1 = 0; 
	delay(T_p5us);
	if(	reg_PU_PLL_OR==1 && reg_ANA_PU_PLL==1 ) goto skip_slumerwk;

	if(mcuid==MCU_LANE0) {
		master_sync_request();		
		//fast startup
		pll_fast_cal();			
		//pll_clk_ready_1(); //move to inside pll_fast_cal()		
		if(ring_pll_enabled) {
			ring_pll_fast_cal();
		}		
		master_sync_clean();		
	} else { slave_sync_wait(); }

skip_slumerwk:		

    reg_ANA_PU_TX_LANE   = reg_PIN_PU_TX_RD_LANE;
    reg_ANA_PU_RX_LANE   = reg_PIN_PU_RX_RD_LANE;
	delay(T_p5us);
	reg_ANA_PU_RX_DLY_LANE = reg_PIN_PU_RX_RD_LANE;
	delay(T_p4us);
	reg_FFE_PULSE_EN_LANE = reg_PIN_PU_RX_RD_LANE;

	if( reg_PIN_PU_TX_RD_LANE==1 && reg_PIN_PU_RX_RD_LANE==1) 
	{
		load_cal_data();

		DTL_DTX_DFE_clkoff_reset_0();

		//delay(T_4us);		
		//txlane_align();		
		//delay(T_6us);		
		//txdigital_align();
		
		reg_PIN_PLL_READY_TX_LANE    = 1;
		reg_PIN_PLL_READY_RX_LANE    = 1;
		
		if(cmx_AUTO_RX_INIT_EN == 0)
			PHY_STATUS = ST_PLLREADY; 
		else	
			PHY_STATUS = ST_DTL;
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
void Power_Patial_Slumber( void ) {

	if(reg_PIN_PU_RX_RD_LANE == 0 && reg_DFE_ADAPT_CONT_LANE == 1) 
	{
		reg_DFE_ADAPT_CONT_LANE = 0;
		//while(!reg_DFE_DONE_LANE);
		reg_DFE_START_LANE = 0;
	}

   int_pu_tx = reg_PIN_PU_TX_RD_LANE?0:1;
   int_pu_rx = reg_PIN_PU_RX_RD_LANE?0:1;

   reg_RESET_DTL_LANE   = int_pu_rx;
   //reg_RESET_DTX	    = int_pu_tx;	   reg_RESET_DTX_RING = int_pu_tx;
	CKCON = 0x07 ;  //MCU WAIT time the slowest
	reg_RESET_DFE_LANE = int_pu_rx;
	CKCON = 0x00 ; //MCU WAIT time setting back to normal.
   reg_DFE_CLK_OFF_LANE = int_pu_rx; //DFE_FREEZE 
   reg_DTL_CLK_OFF_LANE = int_pu_rx; 	
   //reg_DTX_CLK_OFF      = int_pu_tx;	reg_DTX_CLK_OFF_RING = int_pu_tx;
   
   delay(Tus);

    // skip txlane alignment in sas mode
    //if(reg_PIN_PU_TX_RD_LANE==0) { //tx partial
	//if(mcuid==MCU_LANE0) { 
	//	  master_sync_request(); 
	//	  reg_ANA_TXCLK_SYNC_EN_PLL = 1; 
	//	  master_sync_clean(); 
	//   } else { slave_sync_wait(); } 
	//}   
    reg_ANA_PU_TX_LANE       = reg_PIN_PU_TX_RD_LANE;
    reg_ANA_PU_RX_LANE       = reg_PIN_PU_RX_RD_LANE;
	delay(T_p5us);
	reg_ANA_PU_RX_DLY_LANE = reg_PIN_PU_RX_RD_LANE;
	delay(T_p4us);
	reg_FFE_PULSE_EN_LANE = reg_PIN_PU_RX_RD_LANE;

//change mcuclk to use refclk
//	reg_MCU_CLK_SEL_1 = 1; 
	
    while(!do_wake);
	
//end use refclk
//	reg_MCU_CLK_SEL_1 = 0; 

    reg_ANA_PU_TX_LANE = 1;
    reg_ANA_PU_RX_LANE = 1;
	delay(T_p5us);
	reg_ANA_PU_RX_DLY_LANE = 1;
	delay(T_p4us);
	reg_FFE_PULSE_EN_LANE = 1;

	if(PHY_STATUS == ST_PSLUMBER_RX) {		
		load_cal_data(); //load dll, load align90
	}

    delay(T_2us);

	DTL_DTX_DFE_clkoff_reset_0();

	//if(PHY_STATUS == ST_PSLUMBER_TX) { 
	//	txlane_align();
	//}
	
	delay(T_10us);
	
	//txdigital_align();
    reg_PIN_PLL_READY_TX_LANE = 1;
    reg_PIN_PLL_READY_RX_LANE = 1;
	
	if(cmx_AUTO_RX_INIT_EN == 1)
		PHY_STATUS = ST_PLLREADY; 
	else	
		PHY_STATUS = ST_DTL;

}

#endif //_SATA_SERDES
