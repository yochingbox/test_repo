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
#pragma codeseg BANK2
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

	if(reg_DFE_ADAPT_CONT_LANE == 1) 
	{
		reg_DFE_ADAPT_CONT_LANE = 0;
	//	while(!reg_DFE_DONE_LANE);
		reg_DFE_START_LANE = 0;
	}

	reg_DFE_CLK_OFF_LANE = 1; //DFE_FREEZE = 1; 
	PM_CTRL_RX_LANE_REG1_LANE.BT.B2 = 0x38; //DTL_CLK_OFF,RESET_DTL=1, RX_INIT_DONE=1
	reg_RESET_DFE_LANE = 1;

	if(	reg_PU_PLL_LANE==0 ) 	
		pu_pll_off();
	
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
	
//reg_MCU_DEBUG0_LANE_7_0 = 0x01;
	if( reg_PU_IVREF_FELL == 1 ) {

		reg_ANA_PU_SQ_LANE = 0; //sequence: checked!
	//	if(mcuid==master_mcu) {
	//		master_sync_request();		
			PM_CMN_REG2.BT.B2 = 0; //pu_ivref**=0

			if( reg_PU_BG_FELL == 1) 
				delay_ram(T_20us);
			
			pu_ivref_on();
			
	//		master_sync_clean();		
	//	} else { slave_sync_wait(); }
		delay_ram(T_5us);
		reg_ANA_PU_SQ_LANE=1;
		delay_ram(T_20us);
	}
 	
//end use refclk
//	reg_MCU_CLK_SEL_1 = 0; 
	delay_ram(T_p5us);
    reg_ANA_PU_TX_LANE   = reg_PIN_PU_TX_RD_LANE;
	
	if(	reg_PU_PLL_LANE==1 && reg_ANA_PU_PLL_LANE==1 ) {
		if(reg_PIN_PU_RX_RD_LANE) pu_rx_on();		
		else pu_rx_off();
	}
	else {
		if(reg_PIN_PU_RX_RD_LANE) pu_rx_on();		
		else pu_rx_off();
	
	//	if(mcuid== master_mcu) {
	//		master_sync_request(); 		
			//fast startup
			pll_fast_cal();	
	//reg_MCU_DEBUG0_LANE_7_0 = 0x2;
	//		master_sync_clean();
	//	} else { slave_sync_wait(); } 
	}
	

	if( reg_PIN_PU_TX_RD_LANE==1 && reg_PIN_PU_RX_RD_LANE==1) 
	{
		DTL_DTX_DFE_clkoff_reset_0();

//		delay_ram(T_10us);
		//txlane_align();		
		//delay_ram(T_6us);
		//txdigital_align();

		/*timeout = 0;
		timeout_start((uint16_t)6); //50mS
		while(!timeout);
*/
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
void Power_Patial_Slumber( void ) BANKING_CTRL {

	if(reg_PIN_PU_RX_RD_LANE == 0 && reg_DFE_ADAPT_CONT_LANE == 1) 
	{
		reg_DFE_ADAPT_CONT_LANE = 0;
		//while(!reg_DFE_DONE_LANE);
		reg_DFE_START_LANE = 0;
	}

   int_pu_tx = reg_PIN_PU_TX_RD_LANE?0:1;
   int_pu_rx = reg_PIN_PU_RX_RD_LANE?0:1;

    if(reg_PIN_PU_RX_RD_LANE) pu_rx_on();		
	else pu_rx_off();

    reg_ANA_PU_TX_LANE       = reg_PIN_PU_TX_RD_LANE;

   reg_RESET_DTL_LANE   = int_pu_rx;
   //reg_RESET_DTX	    = int_pu_tx;	   reg_RESET_DTX_RING = int_pu_tx;
	reg_RESET_DFE_LANE = int_pu_rx;
   reg_DFE_CLK_OFF_LANE = int_pu_rx; //DFE_FREEZE 
   reg_DTL_CLK_OFF_LANE = int_pu_rx; 	
   //reg_DTX_CLK_OFF      = int_pu_tx;	reg_DTX_CLK_OFF_RING = int_pu_tx;
   
   //delay_ram(Tus);

    // skip txlane alignment in sas mode
    //if(reg_PIN_PU_TX_RD_LANE==0) { //tx partial
	//if(mcuid==master_mcu) { 
	//	  master_sync_request(); 
	//	  reg_ANA_TXCLK_SYNC_EN_PLL = 1; 
	//	  master_sync_clean(); 
	//   } else { slave_sync_wait(); } 
	//}   

//change mcuclk to use refclk
//	reg_MCU_CLK_SEL_1 = 1; 
	
    while(!do_wake);
	
//end use refclk
//	reg_MCU_CLK_SEL_1 = 0; 

    reg_ANA_PU_TX_LANE = 1;	
	pu_rx_on();

	/*if(PHY_STATUS == ST_PSLUMBER_RX) {
		load_cal_data_dll(); //load dll, load align90
	}*/
	
    delay_ram(T_2us);

	DTL_DTX_DFE_clkoff_reset_0();
	
	//if(PHY_STATUS == ST_PSLUMBER_TX) { 
	//	txlane_align();
	//}
	
	//delay_ram(T_10us);
	delay_ram(T_4us);
	//txdigital_align();
    reg_PIN_PLL_READY_TX_LANE = 1;
    reg_PIN_PLL_READY_RX_LANE = 1;
	
	if(cmx_AUTO_RX_INIT_EN == 0)
		PHY_STATUS = ST_PLLREADY; 
	else	
		PHY_STATUS = ST_DTL;

}

#endif //_SATA_SERDES
