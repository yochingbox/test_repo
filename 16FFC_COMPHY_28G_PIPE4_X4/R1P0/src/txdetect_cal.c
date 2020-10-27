/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file txdetect_cal.c
* \purpose Tx Detect calibration
* \History
*	10/15/2015 Heejeong Ryu		Initial 
*/
#include "common.h"


/**
 * \module txdetect_cal
 *
 * \param 
 *    <NONE> 
 * \return
 *    <rate> 
 * \note
 *    Input:  reg_ANA_TRX_TXDCC_DN_RD_LANE
 *    Output: reg_SELLV_TXDATA_CH*
*/

#define TRXDCCIN_SEL     reg_TRXDCCIN_SEL_LANE_2_0
#define TXTD_TAP_SEL 	 reg_TX_TDTAP_SEL_LANE
#define TXDCC_DN 	     reg_ANA_TRX_TXDCC_DN_RD_LANE
#define TXDCC_CLK 		 reg_TRXDCC_CAL_CLK100KHZ_LANE
#define rate 			 pll_rate//cmx_PLL_RATE_SEL_3_0
#define SELLV_TXDATA_CH0 reg_SELLV_TXDATA_CH0_3_0
#define SELLV_TXDATA_CH1 reg_SELLV_TXDATA_CH1_3_0
#define SELLV_TXDATA_CH2 reg_SELLV_TXDATA_CH2_3_0
#define SELLV_TXDATA_CH3 reg_SELLV_TXDATA_CH3_3_0
#define TXTD_MAX_LOOP 	 16

void set_txdata(uint8_t val) {

	switch(mcuid) {
	case MCU_LANE1: SELLV_TXDATA_CH1 = val; break;
	case MCU_LANE2: SELLV_TXDATA_CH2 = val; break;
	case MCU_LANE3: SELLV_TXDATA_CH3 = val; break;
	default: 	    SELLV_TXDATA_CH0 = val; break;
	}
		
	TXDCC_CLK = 1;	delay(T_2us);
	TXDCC_CLK = 0;	delay(T_2us);
}

uint8_t get_txdata(void) {
	uint8_t val;
	
	switch(mcuid) {
	case MCU_LANE1: val = SELLV_TXDATA_CH1; break;
	case MCU_LANE2:	val = SELLV_TXDATA_CH2; break;
	case MCU_LANE3:	val = SELLV_TXDATA_CH3; break;
	default:        val = SELLV_TXDATA_CH0; break;
	}				
	return val;
}

void txdetect_cal(void) {
	uint8_t txtd_loopcnt;
	uint8_t sellv_txdata;
	uint8_t save_tx_speed_div; 
	
	save_tx_speed_div = reg_TX_SPEED_DIV_LANE_2_0;

	PHY_STATUS = ST_TXDETECT_CAL;
	
	reg_TX_TDCAL_EN_LANE = 1;
	TRXDCCIN_SEL = 0x6;
	reg_SLC_EN_LANE_6_0 = 0x7f;
	txtd_loopcnt = 0;
	
	lnx_TXDETECT_CAL_PASS_LANE = 0;
	lnx_TXDETECT_CAL_DONE_LANE = 0;

	if (TXTD_TAP_SEL) sellv_txdata = get_txdata();
	else {
		sellv_txdata =0x8;
		set_txdata(sellv_txdata);
	}
	
	do {
		if (TXDCC_DN==0) {
			if (TXTD_TAP_SEL)
			{
				if (sellv_txdata > 0x4)
					sellv_txdata--;
			}
			else
			{
				if (sellv_txdata < 0xc) 
					sellv_txdata++;
			} 			
		}
		else {
			if (TXTD_TAP_SEL)
			{
				if (sellv_txdata < 0xc)
                                        sellv_txdata++;
			}
			else
			{
				if (sellv_txdata > 0x4) 
					sellv_txdata--;
			}			
		}
		
		set_txdata(sellv_txdata);
	
		if (TXTD_TAP_SEL) break; 	
		
	} while (txtd_loopcnt++ <= TXTD_MAX_LOOP);
	
	if (rate == 1){
		lnx_CAL_SELLV_TXDATA_R1_LANE_7_0 = sellv_txdata;
	}
	else {
		lnx_CAL_SELLV_TXDATA_R0_LANE_7_0 = sellv_txdata;
	}
       
	reg_TX_TDCAL_EN_LANE = 0;
	
	if(TXTD_TAP_SEL==0) {
		reg_SLC_EN_LANE_6_0 = 0x3f; //for continuous mode, just leave 0x7f for tx_emph* share.
	}
	
	reg_TX_SPEED_DIV_LANE_2_0 = save_tx_speed_div;

	lnx_TXDETECT_CAL_PASS_LANE = 1;
	lnx_TXDETECT_CAL_DONE_LANE = 1;

	if( mcuid==MCU_LANE0) cmx_TXDETECT_CAL_DONE_LANE0_RD = 1;
	if( mcuid==MCU_LANE1) cmx_TXDETECT_CAL_DONE_LANE1_RD = 1;
	if( mcuid==MCU_LANE2) cmx_TXDETECT_CAL_DONE_LANE2_RD = 1;
	if( mcuid==MCU_LANE3) cmx_TXDETECT_CAL_DONE_LANE3_RD = 1;
	
}
