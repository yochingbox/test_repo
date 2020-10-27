/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file trx_soft_reset.c
* \purpose TX and RX soft reset handler
* \History
*	03/20/2019		Initial 
*/

#include "common.h"

#ifdef USE_BANKING
#pragma codeseg BANK1
#endif

//void Tx_Softreset_top(void) BANKING_CTRL {
//	tx_soft_reset(); 		 
//	while(!reg_TX_SFT_RST_CHG_FALLING_ISR_LANE); 
//	clear_tx_isr();
//	if(pll_sel == TS_ON) clear_rx_isr();
//	tx_soft_reset_release();		
//}	
//
//void Rx_Softreset_top(void) BANKING_CTRL {
//	if(pll_sel == TS_ON) {
//		reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 1;
//		reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 0;	
//		return;
//	}	
//	rx_soft_reset();			
//	while(!reg_RX_SFT_RST_CHG_FALLING_ISR_LANE);     		
//	clear_rx_isr();
//	if(pll_sel == RS_ON) clear_tx_isr();
//	rx_soft_reset_release();		
//}
//

/**
 * \module rx_soft_reset
 * 
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: 
 *    Output: 
*/
void rx_soft_reset(void) BANKING_CTRL {

	PHY_STATUS = ST_RX_SFT_RST;
	reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 1;
	reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 0;
	drv_rx_off_dig_prot_en();
	drv_rx_off_seq();
	rx_pll_dig_off(); 
	rx_pll_ana_off();
	clear_rx_isr();
    #ifdef DRV_PWR_V1
        drv_rx_sft_rst_assert();
    #endif
}

void rx_soft_reset_release(void) BANKING_CTRL {

	PHY_STATUS = ST_RX_SFT_RST_OFF;
	reg_RX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 1;
	reg_RX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 0;
	rx_pll_ana_on();
	drv_rx_on_seq();	
	Calibration_rx();
	rx_pll_dig_on();
	drv_rx_on_dig_prot_dis();	
}

void tx_soft_reset(void) BANKING_CTRL {

	PHY_STATUS = ST_TX_SFT_RST;
	reg_TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 1;
	reg_TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 0;
	drv_tx_off_dig_prot_en();
	drv_tx_off_seq();
	tx_pll_dig_off();
	tx_pll_ana_off();
	clear_tx_isr();
    #ifdef DRV_PWR_V1
        drv_tx_sft_rst_assert();
    #endif
	
}

void tx_soft_reset_release(void) BANKING_CTRL {

	PHY_STATUS = ST_TX_SFT_RST_OFF;
	reg_TX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 1;
	reg_TX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 0;
	tx_pll_ana_on();
	drv_tx_on_seq();		
	Calibration_tx();
	tx_pll_dig_on();
	drv_tx_on_dig_prot_dis();
}

//void trx_soft_reset(void) BANKING_CTRL {
//
//	//PHY_STATUS = ST_TRX_SFT_RST;	To be added into status list
//
//	//RX_OFF();
//	drv_rx_off_dig_prot_en();
//	drv_rx_off_seq();
//
//	//TX_OFF();
//	drv_tx_off_dig_prot_en();
//	drv_tx_off_seq();
//
//	//RX_PLL_OFF();
//	drv_pll_rs_off_dig_prot_en();
//	drv_pll_rs_off_seq();
//
//	//TX_PLL_OFF();
//	drv_pll_ts_off_dig_prot_en();
//	drv_pll_ts_off_seq();
//    #ifdef DRV_PWR_V1
//        drv_trx_sft_rst_assert();
//    #endif
//
//}	
//
//void trx_soft_reset_release(void) BANKING_CTRL {
//
//	//PHY_STATUS = ST_TRX_SFT_RST_OFF;   To be added into status list
//
//	LoadSpeedtbl_tx();
//	LoadSpeedtbl_rx();
//
//	//TX_PLL_slow_wakeup();
//	drv_pll_ts_on_seq();
//
//	//TX_slow_wakeup();
//	drv_tx_on_seq();		
//	Calibration_tx();
//	drv_pll_ts_on_dig_prot_dis();
//	drv_tx_on_dig_prot_dis();
//
//	//RX_PLL_slow_wakeup();
//	drv_pll_rs_on_seq();
//
//	//RX_slow_wakeup();
//	drv_rx_on_seq();	
//	Calibration_rx();
//	drv_pll_rs_on_dig_prot_dis();
//	drv_rx_on_dig_prot_dis();
//}
//
