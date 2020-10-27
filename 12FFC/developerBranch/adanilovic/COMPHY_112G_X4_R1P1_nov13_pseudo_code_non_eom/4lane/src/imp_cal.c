/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file imp_cal.c
* \purpose IMP calibration
* \History
*	4/21/2015 Heejeong Ryu		Initial, sync with 28G R2P0 
*/
#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg BANK2
#endif

/**
 * \module TX IMP Calibration
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input:  
 *    Output: 
*/


#define RX_IMPCAL_EN_LANE           reg_RXIMP_CAL_EN_LANE
//#define TIMEOUT_RXIMP_CAL			1000
//#define TIMEOUT_TXIMP_CAL			1000


void tximp_cal_init_ram(void) BANKING_CTRL  { //BANKING_CTRL {

	reg_TXIMPCAL_EN = 1;	//global enable signal for tx_impcal
	
	reg_TXIMPCAL_EN_LANE = 0;
	reg_TX_IMP_P_CAL_INDV_EXT_EN_LANE = 0;
	reg_TX_IMP_N_CAL_INDV_EXT_EN_LANE = 0;
	reg_VTH_TXIMPCAL_2_0 = 3;	//target impedance setting
}
void tximp_cal_n_ram(void) BANKING_CTRL  { //BANKING_CTRL {
	uint8_t i, TXIMP_N;

	TXIMP_N = 0;

	//for(i=0, i<4, i+=1)
	//{
		reg_TXIMPCAL_DRVAMP_2_0 = reg_TX_VREF_TXDRV_SEL_LANE_2_0;	//set tx calibration voltage to be the same as tx driver voltage(see tx_impcal doc for detail)

		reg_TX_IMP_N_CAL_BYPASS_EN_LANE = 0;
		reg_TX_IMP_P_CAL_BYPASS_EN_LANE = 1; //bypass p_cal during n_cal
		reg_TXIMPCAL_EN_LANE = 1;
		reg_TXIMPCAL_BOT_LANE = 1;

		for (i=0; i<=1; i++)
		{
			reg_TXIMPCAL_SIDE_LANE = i;
			reg_TX_IMP_N_CAL_RESULT_EXT_LANE_5_0 = 0x20;
			reg_TX_IMP_TOP_START_LANE = 0;
			reg_TX_IMP_TOP_START_LANE = 1;
			delay_ram(T_p5us);
			/*timeout = 0;
			timeout_start((uint16_t)TIMEOUT_TXIMP_CAL);*/
			while(!reg_TX_IMP_TOP_DONE_LANE);
			if (reg_TX_IMP_N_CAL_TIMEOUT_RD_LANE)
				lnx_TXIMP_CAL_PASS_LANE = 0;
			reg_TX_IMP_TOP_START_LANE = 0;

			TXIMP_N = TXIMP_N + reg_TX_IMP_N_CAL_RESULT_RD_LANE_5_0;
		}
		reg_TX_IMP_N_CAL_RESULT_EXT_LANE_5_0 = TXIMP_N >> 1;

		//lnx_cal_tx_imp_n_result_lane = reg_TX_IMP_N_CAL_RESULT_EXT_LANE_5_0;

		reg_TX_IMP_N_CAL_INDV_EXT_EN_LANE = 1;
	//}
}

void tximp_cal_p_ram(void) BANKING_CTRL  { //BANKING_CTRL {
	uint8_t i, TXIMP_P;

	TXIMP_P = 0;
	reg_TX_IMP_N_CAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_P_CAL_BYPASS_EN_LANE = 0; //bypass p_cal during n_cal
	reg_TXIMPCAL_EN_LANE = 1;
	reg_TXIMPCAL_BOT_LANE = 0;

	for (i=0; i<=3; i++)
	{
		reg_TXIMPCAL_SIDE_LANE = (i & 0x1);
		reg_RCAL_2ND_EN_LANE = i>1?1:0;
		reg_TX_IMP_P_CAL_RESULT_EXT_LANE_5_0 = 0x20;
		reg_TX_IMP_TOP_START_LANE = 0;
		reg_TX_IMP_TOP_START_LANE = 1;
		delay_ram(T_p5us);
		/*timeout = 0;
		timeout_start((uint16_t)TIMEOUT_TXIMP_CAL);*/
		while(!reg_TX_IMP_TOP_DONE_LANE);
		if (reg_TX_IMP_P_CAL_TIMEOUT_RD_LANE)
			lnx_TXIMP_CAL_PASS_LANE = 0;
		reg_TX_IMP_TOP_START_LANE = 0;
		TXIMP_P = TXIMP_P + reg_TX_IMP_P_CAL_RESULT_RD_LANE_5_0;
	}
	reg_TX_IMP_P_CAL_RESULT_EXT_LANE_5_0 = TXIMP_P >> 2;

	//lnx_cal_tx_imp_p_result_lane = reg_TX_IMP_P_CAL_RESULT_EXT_LANE_5_0;

	reg_TX_IMP_P_CAL_INDV_EXT_EN_LANE = 1;
}

void tximp_ext_ram(void) BANKING_CTRL  { //BANKING_CTRL {
#if 0
	reg_TX_IMP_N_CAL_RESULT_EXT_LANE_5_0 = 0x20;
	reg_TX_IMP_P_CAL_RESULT_EXT_LANE_5_0 = 0x20;
	reg_TX_IMP_N_CAL_INDV_EXT_EN_LANE = 1;
	reg_TX_IMP_P_CAL_INDV_EXT_EN_LANE = 1;
	reg_TX_IMP_COMN_EXT_EN_LANE = 1;
	reg_TX_IMP_AUTO_ZERO_CLK_EXT_LANE = 1;
	reg_TX_IMP_AUTO_ZERO_CLK_EXT_LANE = 0;

	lnx_TXIMP_CAL_DONE_LANE = 1;
	lnx_TXIMP_CAL_PASS_LANE = 0;
#endif
}

void tximp_cal_ram( void ) BANKING_CTRL  { //BANKING_CTRL {

	PHY_STATUS = ST_TXIMP_CAL;

	lnx_TXIMP_CAL_DONE_LANE = 0;
	lnx_TXIMP_CAL_PASS_LANE = 1;
	tximp_cal_init_ram();

	/*if( cmx_TXIMP_CAL_EXT_EN == 1 ) {
		tximp_ext_ram();
		return;
	}*/

	tximp_cal_n_ram();
	tximp_cal_p_ram();

	lnx_TXIMP_CAL_DONE_LANE = 1;
	reg_TXIMPCAL_EN_LANE = 0;
	
	reg_TXIMPCAL_EN = 0;
}

void rximp_cal_ram( void ) BANKING_CTRL  { //BANKING_CTRL {

	PHY_STATUS = ST_RXIMP_CAL;

	lnx_RXIMP_CAL_PASS_LANE = 0;
	lnx_RXIMP_CAL_DONE_LANE = 0;

	/*if( cmx_RXIMP_CAL_EXT_EN == 1)
	{
		lnx_RXIMP_CAL_DONE_LANE = 1;
		return;
	}*/
	reg_RXIMPCAL_EN = 1;
	
	RX_IMPCAL_EN_LANE = 1;

	reg_RX_IMP_TOP_START = 0;
	reg_RX_IMP_TOP_START = 1;
	delay_ram(T_p5us);
	/*timeout = 0;
	timeout_start((uint16_t)TIMEOUT_RXIMP_CAL);
	while(!reg_RX_IMP_TOP_DONE && !timeout);
	if (!timeout)*/
	while(!reg_RX_IMP_TOP_DONE);
	if(reg_RX_IMP_CAL_TIMEOUT_RD == 0)
		lnx_RXIMP_CAL_PASS_LANE = 1;
	reg_RX_IMP_TOP_START = 0;

	reg_IMPCAL_RX_LANE_4_0 = reg_RX_IMP_CAL_RESULT_RD_4_0;

	//lnx_cal_rx_imp_result_lane = reg_RX_IMP_CAL_RESULT_RD_4_0;

	lnx_RXIMP_CAL_DONE_LANE = 1;
	RX_IMPCAL_EN_LANE = 0;
	
	reg_RXIMPCAL_EN = 0;	
}

