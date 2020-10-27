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
#pragma codeseg BANK3
#pragma constseg BANK3
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

//#define TIMEOUT_RXIMP_CAL	1000
//#define TIMEOUT_TXIMP_CAL	1000

#if 0
void tximp_cal_init(void) BANKING_CTRL {

	reg_TX_IMP_N_CAL_INDV_EXT_EN_LANE = 0;
	reg_TX_IMP_P_CAL_INDV_EXT_EN_LANE = 0;

	//reg_TXIMPCAL_EN = 1; //moved to before calling tximp_cal()
    #ifndef _56G_5NM
	//reg_VTH_TXIMPCAL_2_0 = 3; //target impedance setting
    #else
    reg_VTH_TXIMPCAL_NMOS_2_0 = 3; //target impedance setting
    #endif
	reg_TXIMPCAL_EN_LANE = 0; //set tx_impcal enable signal for all lanes to 0 at the beginning, to make sure that only one lane is enabled at a time

	reg_TXCAL_EN_LANE = 1; //Comparator enable 
	
	//reg_TXIMPCAL_DRVAMP_3_0 = reg_TX_VREF_TXDRV_SEL_LANE_3_0 - 1; //set tx calibration voltage to be the same as tx driver voltage(see tx_impcal doc for detail)
	if (reg_TX_VREF_TX_SEL_LANE_3_0 > 4)
		reg_TXIMPCAL_DRVAMP_3_0 = reg_TX_VREF_TX_SEL_LANE_3_0 - 4;
	else
		reg_TXIMPCAL_DRVAMP_3_0 = 0; // set TXIMPCAL_DRVAMP to 0 for negative value

	reg_TX_IMP_N_CAL_RESULT_EXT_LANE_6_0 = 0x40;
	reg_TX_IMP_P_CAL_RESULT_EXT_LANE_6_0 = 0x40;
	reg_TX_IMP_N_CAL_TIMEOUT_STEPS_LANE_2_0 = 6;
	reg_TX_IMP_P_CAL_TIMEOUT_STEPS_LANE_2_0 = 6;

	// Bypass other calibrations in the same wrapper
    #ifndef _56G_5NM
	reg_TX_ALIGN90_CAL_BYPASS_EN_LANE = 1;
	reg_TX_DCC1_CAL_BYPASS_EN_LANE = 1;
	reg_TX_DCC2_CAL_BYPASS_EN_LANE = 1;
	reg_TX_DCC3_CAL_BYPASS_EN_LANE = 1;
	reg_TX_DCC4_CAL_BYPASS_EN_LANE = 1;
    #endif
}

void tximp_cal_n(void) BANKING_CTRL {
	uint8_t i, TXIMP_N;

	TXIMP_N = 0;

	// Bypass calibrations
	reg_TX_IMP_P_CAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_ICCP_CAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_ICCN_CAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_TEMPC_PCAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_TEMPC_NCAL_BYPASS_EN_LANE = 1;

	reg_TX_IMP_N_CAL_BYPASS_EN_LANE = 0; //Enable N_CAL only

	reg_TXIMPCAL_EN_LANE = 1; //Enable IMP_CAL
	#if defined _56G_7NM || defined _112G_ADC
	reg_TXIMPCAL_BOT_LANE = 1;
	#elif defined _56G_5NM
		
	#endif

	for (i=0; i<=1; i++)
	{
		#if defined _56G_7NM || defined _112G_ADC
		reg_TXIMPCAL_SIDE_LANE = i;
		#elif defined _56G_5NM
		
		#endif
		reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
		reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 1;
		delay(T_p5us);
		/*timeout = 0;
		timeout_start((uint16_t)TIMEOUT_TXIMP_CAL);*/
		while (!reg_TX_ALIGN90_DCC_IMP_TOP_DONE_LANE);
		if (reg_TX_IMP_N_CAL_TIMEOUT_RD_LANE)
			lnx_TXIMP_CAL_PASS_LANE = 0;
		reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;

		TXIMP_N = TXIMP_N + reg_TX_IMP_N_CAL_RESULT_RD_LANE_6_0;
	}
	reg_TXIMPCAL_EN_LANE = 0; //Disable IMP_CAL

	// Force NTUNE code
	reg_TX_IMP_N_CAL_RESULT_EXT_LANE_6_0 = TXIMP_N >> 1;

	//lnx_cal_tx_imp_n_result_lane = reg_TX_IMP_N_CAL_RESULT_EXT_LANE_6_0;

	reg_TX_IMP_N_CAL_INDV_EXT_EN_LANE = 1;
}

void tximp_cal_p(void) BANKING_CTRL {
	uint8_t i, TXIMP_P;

	TXIMP_P = 0;

	// Bypass calibrations
	reg_TX_IMP_N_CAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_ICCP_CAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_ICCN_CAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_TEMPC_PCAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_TEMPC_NCAL_BYPASS_EN_LANE = 1;

	reg_TX_IMP_P_CAL_BYPASS_EN_LANE = 0; //Enable P_CAL only

	reg_TXIMPCAL_EN_LANE = 1; //Enable IMP_CAL
	#if defined _56G_7NM || defined _112G_ADC
	reg_TXIMPCAL_BOT_LANE = 0;
	#elif defined _56G_5NM
		
	#endif

	for (i=0; i<=3; i++)
	{
		#if defined _56G_7NM || defined _112G_ADC
		reg_TXIMPCAL_SIDE_LANE = (i & 0x1);
		reg_RCAL_2ND_EN_LANE = i>1?1:0;
		#elif defined _56G_5NM
		
		#endif
		reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
		reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 1;
		delay(T_p5us);
		/*timeout = 0;
		timeout_start((uint16_t)TIMEOUT_TXIMP_CAL);*/
		while (!reg_TX_ALIGN90_DCC_IMP_TOP_DONE_LANE);
		if (reg_TX_IMP_P_CAL_TIMEOUT_RD_LANE)
			lnx_TXIMP_CAL_PASS_LANE = 0;
		reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
		TXIMP_P = TXIMP_P + reg_TX_IMP_P_CAL_RESULT_RD_LANE_6_0;
	}
	reg_TXIMPCAL_EN_LANE = 0; //Disable IMP_CAL

	reg_TX_IMP_P_CAL_RESULT_EXT_LANE_6_0 = TXIMP_P >> 2;

	//lnx_cal_tx_imp_p_result_lane = reg_TX_IMP_P_CAL_RESULT_EXT_LANE_6_0;

	reg_TX_IMP_P_CAL_INDV_EXT_EN_LANE = 1;
}

void tximp_icc_cal(void) BANKING_CTRL {

	// Bypass calibrations
	reg_TX_IMP_P_CAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_N_CAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_TEMPC_PCAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_TEMPC_NCAL_BYPASS_EN_LANE = 1;

	reg_TX_IMP_ICCP_CAL_BYPASS_EN_LANE = 0; // Enable ICC_P calibration
	reg_TX_IMP_ICCN_CAL_BYPASS_EN_LANE = 0; // Enable ICC_N calibration

	//Setting for one side of ICC_P/N
	reg_TXIMP_TEMPC_PMOS_CAL_EN_LANE = 1; //Will enable tempc_p/n also
	reg_TXIMP_TEMPC_NMOS_CAL_EN_LANE  = 1; //Both need open
	reg_TXIMP_TEMPC_ICCP_EN_LANE = 1;
	reg_TXIMP_TEMPC_ICCN_EN_LANE = 1;

	reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
	reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 1;
	delay(T_p5us);
	while (!reg_TX_ALIGN90_DCC_IMP_TOP_DONE_LANE);
	reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;

	//lnx_cal_tx_imp_iccp_result_lane = reg_TX_IMP_ICCP_CAL_RESULT_RD_LANE_4_0;
	//lnx_cal_tx_imp_iccn_result_lane = reg_TX_IMP_ICCN_CAL_RESULT_RD_LANE_4_0;

	//ICC_Done 
	reg_TX_IMP_ICCP_CAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_ICCN_CAL_BYPASS_EN_LANE = 1;
	reg_TXIMP_TEMPC_PMOS_CAL_EN_LANE = 0;
	reg_TXIMP_TEMPC_NMOS_CAL_EN_LANE = 0;
	reg_TXIMP_TEMPC_ICCP_EN_LANE = 0;
	reg_TXIMP_TEMPC_ICCN_EN_LANE = 0;

	//reg_TXCAL_EN_LANE = 0; // Keep 1 <-- close tx comparator
}

void tximp_ext(void) BANKING_CTRL {

	reg_TX_IMP_N_CAL_RESULT_EXT_LANE_6_0 = 0x20;
	reg_TX_IMP_P_CAL_RESULT_EXT_LANE_6_0 = 0x20;
	reg_TX_IMP_ICCN_CAL_RESULT_EXT_LANE_4_0 = 0x10;
	reg_TX_IMP_ICCP_CAL_RESULT_EXT_LANE_4_0 = 0x10;

	reg_TX_IMP_N_CAL_INDV_EXT_EN_LANE = 1;
	reg_TX_IMP_P_CAL_INDV_EXT_EN_LANE = 1;
	reg_TX_IMP_ICCN_CAL_INDV_EXT_EN_LANE = 1;
	reg_TX_IMP_ICCP_CAL_INDV_EXT_EN_LANE = 1;

	reg_TX_ALIGN90_DCC_IMP_COMN_EXT_EN_LANE = 1;
	reg_TX_ALIGN90_DCC_IMP_AUTO_ZERO_CLK_EXT_LANE = 1;
	reg_TX_ALIGN90_DCC_IMP_AUTO_ZERO_CLK_EXT_LANE = 0;

	lnx_TXIMP_CAL_DONE_LANE = 1;
	lnx_TXIMP_CAL_PASS_LANE = 0;
}
#endif

void tximp_cal( void ) BANKING_CTRL {

	PHY_STATUS = ST_TXIMP_CAL;

	if( cmx_TXIMP_CAL_EXT_EN == 1 ) {
		//tximp_ext();
		lnx_TXIMP_CAL_DONE_LANE = 1;
		return;
	}

	lnx_TXIMP_CAL_DONE_LANE = 0;
	lnx_TXIMP_CAL_PASS_LANE = 1;

	//tximp_cal_init();

	//tximp_cal_n();
	//tximp_cal_p();
	//tximp_icc_cal(); //ICCP/N will go saturated because the current control is swapped at trx_ivref in 56G

    tx_imp();
    tx_tempc();

	lnx_TXIMP_CAL_DONE_LANE = 1;

}

#ifdef _56G_7NM
void rximp_cal( void ) BANKING_CTRL {
	
	PHY_STATUS = ST_RXIMP_CAL;
	
	if (cmx_RXIMP_CAL_EXT_EN == 1) {
		lnx_RXIMP_CAL_DONE_LANE = 1;
		return;
	}

	lnx_RXIMP_CAL_PASS_LANE = 0;
	lnx_RXIMP_CAL_DONE_LANE = 0;

	reg_RXIMPCAL_EN_LANE = 1; //reg_IMPCAL_RX_EN_LANE = 1;
	//reg_RXIMPCAL_EN = 1;

	reg_RX_IMP_TOP_START = 0;
	reg_RX_IMP_TOP_START = 1;
	delay(T_p5us);
	/*timeout = 0;
	timeout_start((uint16_t)TIMEOUT_RXIMP_CAL);
	while (!reg_RX_IMP_TOP_DONE && !timeout);
	if (!timeout)*/
	while (!reg_RX_IMP_TOP_DONE);
	if(reg_RX_IMP_CAL_TIMEOUT_RD == 0)
		lnx_RXIMP_CAL_PASS_LANE = 1;
	reg_RX_IMP_TOP_START = 0;

	reg_IMPCAL_RX_LANE_4_0 = reg_RX_IMP_CAL_RESULT_RD_4_0;
	//lnx_cal_rx_imp_result_lane = reg_RX_IMP_CAL_RESULT_RD_4_0;

	reg_RXIMPCAL_EN_LANE = 0; //reg_IMPCAL_RX_EN_LANE = 1;
	//reg_RXIMPCAL_EN = 0;

	lnx_RXIMP_CAL_DONE_LANE = 1;
}
#endif
