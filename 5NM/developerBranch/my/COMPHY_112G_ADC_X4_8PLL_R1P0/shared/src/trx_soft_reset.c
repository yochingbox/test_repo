/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file trx_soft_reset.c
* \purpose TX and RX soft reset handler
* \History
*	03/20/2019		Initial 
*/

#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK1
#endif

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

	drv_rx_off_dig_prot_en();
	drv_rx_off_seq();
	rx_pll_dig_off();
	rx_pll_ana_off();
    #ifndef DRV_PWR_V0    //All versions after initial 7nm V0 would be the same
        drv_rx_sft_rst_assert();
    #endif


}

void rx_soft_reset_release(void) BANKING_CTRL {

//RX default toggle after register bank reset
	drv_spd_cfg_dec();
	drv_rx_default_toggle();

	rx_pll_ana_on();
	drv_rx_on_seq();
	Calibration_rx();
	rx_pll_dig_on();
	drv_rx_on_dig_prot_dis();

	PHY_STATUS = ST_PLLREADY;
}


void tx_soft_reset(void) BANKING_CTRL {

	drv_tx_off_dig_prot_en();
	drv_tx_off_seq();
	tx_pll_dig_off();
	tx_pll_ana_off();
    #ifndef DRV_PWR_V0    //All versions after initial 7nm V0 would be the same
        drv_tx_sft_rst_assert();
    #endif
}

void tx_soft_reset_release(void) BANKING_CTRL {

//TX default toggle after register bank reset
	drv_spd_cfg_dec();
	drv_tx_default_toggle();

	tx_pll_ana_on();
	drv_tx_on_seq();
	Calibration_tx();
	tx_pll_dig_on();
	drv_tx_on_dig_prot_dis();

	PHY_STATUS = ST_PLLREADY;
}

void trx_soft_reset(void) BANKING_CTRL {


	drv_rx_off_dig_prot_en();
	drv_rx_off_seq();

	drv_tx_off_dig_prot_en();
	drv_tx_off_seq();

	rx_pll_dig_off();
	rx_pll_ana_off();
	tx_pll_dig_off();
	tx_pll_ana_off();
    #ifndef DRV_PWR_V0    //All versions after initial 7nm V0 would be the same
        drv_trx_sft_rst_assert();
    #endif
}

void trx_soft_reset_release(void) BANKING_CTRL {


//TRX default toggle after register bank reset
	drv_spd_cfg_dec();
	drv_default_toggle();

	tx_pll_ana_on();
	rx_pll_ana_on();

//--------------------------------IPCE_COMPHY-1872
	drv_tx_on_seq();
	Calibration_tx();
	drv_rx_on_seq();
	Calibration_rx();

	tx_pll_dig_on();
	drv_tx_on_dig_prot_dis();

	rx_pll_dig_on();
	drv_rx_on_dig_prot_dis();

	PHY_STATUS = ST_PLLREADY;
}

