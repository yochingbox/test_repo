/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file power_serdes.c
* \purpose power control for SERDES
* \History
*	04/15/2019 Heejeong Ryu		Initial & clean up
*/

#include "common.h"
#ifdef USE_BANKING
#pragma codeseg BANK1
#endif

#if defined _SERDES_BUILD || defined _SAS_BUILD	

void Serdes_Power_Management(void) BANKING_CTRL {
	//do {
	
		if (reg_INT_PU_PLL_CHG_FALLING_ISR_LANE) {
				Power_Slumber();		
		}
			
		if (reg_INT_PU_RX_CHG_FALLING_ISR_LANE) {
				Power_Patial_Slumber_Rx();
		}						

		if (reg_INT_PU_TX_CHG_FALLING_ISR_LANE) {
				Power_Patial_Slumber_Tx();
		}						

		if (reg_INT_PU_TX_CHG_RISING_ISR_LANE) {
				Power_Patial_Slumber_Wakeup_Tx();
		}

		if (reg_INT_PU_RX_CHG_RISING_ISR_LANE) {
				Power_Patial_Slumber_Wakeup_Rx();
		}
		
		//if(reg_PIN_PLL_READY_RX_LANE && reg_PIN_PLL_READY_TX_LANE) break;
		//if(reg_TX_SFT_RST_CHG_RISING_ISR_LANE || reg_RX_SFT_RST_CHG_RISING_ISR_LANE) break;
		
	//} while(1);	
}	

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

	PHY_STATUS = ST_SLUMBER;

	turn_off_tx_cont_cal();
	turn_off_rx_cont_cal();
	
	reg_INT_PU_PLL_CHG_FALLING_ISR_CLEAR_LANE = 1;
	reg_INT_PU_PLL_CHG_FALLING_ISR_CLEAR_LANE = 0;
	reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE = 1;
	reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE = 0;
	reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE = 1;
	reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE = 0;

//SYNC_STATUS_LANE_EN = 0;	
	if(reg_DFE_ADAPT_CONT_LANE == 1) 
	{
		reg_DFE_ADAPT_CONT_LANE = 0;
//	//	while(!reg_DFE_DONE_LANE);
		reg_DFE_START_LANE = 0;
	}

	drv_rx_off_dig_prot_en();
	drv_rx_off_seq();

	drv_tx_off_dig_prot_en();
	drv_tx_off_seq();

	rx_pll_dig_off();
	rx_pll_ana_off();

	tx_pll_dig_off();
	tx_pll_ana_off();	
	
	do {
		if( reg_PIN_REFCLK_DIS_RD_LANE == 1 ) {
			PHY_STATUS = ST_SLUMBER_CLK;
			TCON  = 0x04; //EX0=LVL 
			reg_INT_REFCLK_DIS_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_INT_REFCLK_DIS_CHG_RISING_ISR_CLEAR_LANE = 0;			
			reg_INT0_REFCLK_DIS_EN_INT_EN_LANE = 1;
			PCON = 0x8a; //mcu stop 
			
			//wait for mcu wakeup
			
			TCON  = 0x05; //EX0=FALL
			reg_INT0_REFCLK_DIS_EN_INT_EN_LANE = 0;
			reg_INT_REFCLK_DIS_CHG_FALLING_ISR_CLEAR_LANE = 1;
			reg_INT_REFCLK_DIS_CHG_FALLING_ISR_CLEAR_LANE = 0;
		}
		
		if (reg_INT_PU_PLL_CHG_RISING_ISR_LANE) {
			reg_INT_PU_PLL_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_INT_PU_PLL_CHG_RISING_ISR_CLEAR_LANE = 0;
			break;
		}
		
		if (reg_RX_SFT_RST_CHG_RISING_ISR_LANE) return;
		
	} while(1) ;


	PHY_STATUS = ST_SLUMBER_WK;
	
	if( reg_PU_IVREF_FELL == 1 ) {

		reg_ANA_PU_SQ_LANE = 0; 

		check_pu_ivref();
	
		delay(T_5us);
		reg_ANA_PU_SQ_LANE=1;
		delay(T_20us);
	}

	{		
		tx_pll_ana_on();
		tx_pll_fast_cal_sel();
		tx_pll_dig_on();
				
		rx_pll_ana_on();
		rx_pll_fast_cal_sel();
		rx_pll_dig_on();
		
		drv_tx_on_seq();
		//TODO load_tx_cal();
		drv_tx_on_dig_prot_dis();
		
		drv_rx_on_seq();
		//TODO load_rx_cal();
		drv_rx_on_dig_prot_dis();
		
	}	
 	
	
	//delay(T_p5us);
	//
	//drv_tx_on_seq();	
	//
	//if(reg_PIN_PU_RX_RD_LANE) drv_rx_on_seq();		
	//else drv_rx_off_seq();
	//
	//pll_fast_cal();	
	

	//if( reg_PIN_PU_TX_RD_LANE==1 && reg_PIN_PU_RX_RD_LANE==1) 
	//{
	//	reg_INT_PU_TX_CHG_RISING_ISR_CLEAR_LANE = 1;
	//	reg_INT_PU_TX_CHG_RISING_ISR_CLEAR_LANE = 0;
	//	reg_INT_PU_RX_CHG_RISING_ISR_CLEAR_LANE = 1;
	//	reg_INT_PU_RX_CHG_RISING_ISR_CLEAR_LANE = 0;
    //
	////DTL_DTX_DFE_clkoff_reset_0();
    //
	//	//delay(T_10us);
	//	//txlane_align();		
	//	//delay(T_6us);
	//	//txdigital_align();
    //
	//	//timeout = 0;
	//	//timeout_start((uint16_t)6); //50mS
	//	//while(!timeout);
	//	drv_tx_on_seq();
	//	drv_rx_on_seq();
	//	
	//	//TODO local cal
    //
	//	drv_tx_on_dig_prot_dis();
	//	drv_rx_on_dig_prot_dis();
	//	
	//	//if(cmx_AUTO_RX_INIT_EN == 0)
	//	//	PHY_STATUS = ST_PLLREADY; 
	//	//else	
	//	//	PHY_STATUS = ST_DTL;
	//}
	//else {
	//	do_wake = 0;
	//	//if( reg_PIN_PU_TX_RD_LANE==0 ) 	PHY_STATUS = ST_PSLUMBER_TX;
	//	//else PHY_STATUS = ST_PSLUMBER;
	//}
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
void Power_Patial_Slumber_Tx( void ) BANKING_CTRL {

	PHY_STATUS = ST_PSLUMBER_TX;
	
	turn_off_tx_cont_cal();

	drv_tx_off_dig_prot_en();	
	drv_tx_off_seq();
	
	reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE = 1;
	reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE = 0;
}

void Power_Patial_Slumber_Rx( void ) BANKING_CTRL {

	PHY_STATUS = ST_PSLUMBER_RX;

	turn_off_rx_cont_cal();
	
	//if(reg_PIN_PU_RX_RD_LANE == 0 && reg_DFE_ADAPT_CONT_LANE == 1) 
	//{
		reg_DFE_ADAPT_CONT_LANE = 0;
	//	//while(!reg_DFE_DONE_LANE);
		reg_DFE_START_LANE = 0;
	//}

	drv_rx_off_dig_prot_en();
	drv_rx_off_seq();

	reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE = 1;
	reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE = 0;
}


void Power_Patial_Slumber_Wakeup_Tx( void ) BANKING_CTRL {

	PHY_STATUS = ST_PSLUMBER_WK_TX;

	reg_INT_PU_TX_CHG_RISING_ISR_CLEAR_LANE = 1;
	reg_INT_PU_TX_CHG_RISING_ISR_CLEAR_LANE = 0;

	drv_tx_on_seq();	

	turn_on_tx_cont_cal();

	drv_tx_on_dig_prot_dis();

	//	PHY_STATUS = ST_PLLREADY; 	
	
}

void Power_Patial_Slumber_Wakeup_Rx( void ) BANKING_CTRL {

	PHY_STATUS = ST_PSLUMBER_WK_RX;

	reg_INT_PU_RX_CHG_RISING_ISR_CLEAR_LANE = 1;
	reg_INT_PU_RX_CHG_RISING_ISR_CLEAR_LANE = 0;

	drv_rx_on_seq();

	turn_on_rx_cont_cal();
	
	drv_rx_on_dig_prot_dis();
	
	//if(cmx_AUTO_RX_INIT_EN == 0)
	//	PHY_STATUS = ST_PLLREADY; 
	//else	
	//	PHY_STATUS = ST_DTL;

}
#endif //_SATA_SERDES
