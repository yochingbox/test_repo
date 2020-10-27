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
#pragma codeseg BANK1
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


//#ifdef NEED_REMAP_REGS
//void tximp_cal( void ) BANKING_CTRL {}
//#else
//void tximp_cal_init(void) BANKING_CTRL {
//
//	reg_TX_IMP_N_CAL_INDV_EXT_EN_LANE = 0; //reset EXT_EN to default
//	reg_TX_IMP_P_CAL_INDV_EXT_EN_LANE = 0;
//
//	//reg_TXIMPCAL_EN = 1; //common tximpcal enable; Enabled in Calibration() before calling tximp_cal() 
//	//reg_VTH_TXIMPCAL_2_0 = 3; //target impedance setting; Chenkun requested to remove
//	reg_TXIMPCAL_EN_LANE = 0; //set tx_impcal enable signal for all lanes to 0 at the beginning, to make sure that only one lane is enabled at a time
//
//	reg_TXCAL_EN_LANE = 1; //Comparator enable 
//
//	if (reg_TX_VREF_TXDRV_SEL_LANE_3_0 > 4)
//		reg_TXIMPCAL_DRVAMP_3_0 = reg_TX_VREF_TXDRV_SEL_LANE_3_0 - 4; //set tx calibration voltage to be the same as tx driver voltage(see tx_impcal doc for detail)
//	else
//		reg_TXIMPCAL_DRVAMP_3_0 = 0; // set TXIMPCAL_DRVAMP to 0 for negative value
//
//	reg_TX_IMP_N_CAL_RESULT_EXT_LANE_6_0 = 0x40;
//	reg_TX_IMP_P_CAL_RESULT_EXT_LANE_6_0 = 0x40;
//	reg_TX_IMP_N_CAL_TIMEOUT_STEPS_LANE_2_0 = 6;
//	reg_TX_IMP_P_CAL_TIMEOUT_STEPS_LANE_2_0 = 6;
//
//	// Bypass other calibrations in the same wrapper
//	reg_TX_ALIGN90_CAL_BYPASS_EN_LANE = 1;
//	reg_TX_DCC1_CAL_BYPASS_EN_LANE = 1;
//	reg_TX_DCC2_CAL_BYPASS_EN_LANE = 1;
//	reg_TX_DCC3_CAL_BYPASS_EN_LANE = 1;
//	reg_TX_DCC4_CAL_BYPASS_EN_LANE = 1;
//}
//
//void tximp_cal_n(void) BANKING_CTRL {
//	uint8_t i, TXIMP_N;
//
//	TXIMP_N = 0;
//
//	reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
//
//	// Bypass calibrations
//	reg_TX_IMP_P_CAL_BYPASS_EN_LANE = 1;
//	reg_TX_IMP_ICCP_CAL_BYPASS_EN_LANE = 1;
//	reg_TX_IMP_ICCN_CAL_BYPASS_EN_LANE = 1;
//	reg_TX_IMP_TEMPC_PCAL_BYPASS_EN_LANE = 1;
//	reg_TX_IMP_TEMPC_NCAL_BYPASS_EN_LANE = 1;
//
//	reg_TX_IMP_N_CAL_BYPASS_EN_LANE = 0; //Enable N_CAL only
//
//	reg_TXIMPCAL_EN_LANE = 1; //Enable IMP_CAL
//	reg_TXIMPCAL_BOT_LANE = 1;
//
//	for (i=0; i<=1; i++)
//	{
//		reg_TXIMPCAL_SIDE_LANE = i;
//		reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 1;
//		delay(T_p5us);
//		/*timeout = 0;
//		timeout_start((uint16_t)TIMEOUT_TXIMP_CAL);*/
//		//while((reg_MCU_DEBUGA_LANE_7_0=0x46)&&!reg_TX_ALIGN90_DCC_IMP_TOP_DONE_LANE);
//		wait_for(reg_TX_ALIGN90_DCC_IMP_TOP_DONE_LANE,0);
//		if (reg_TX_IMP_N_CAL_TIMEOUT_RD_LANE)
//			lnx_TXIMP_CAL_PASS_LANE = 0;
//		reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
//
//		TXIMP_N = TXIMP_N + reg_TX_IMP_N_CAL_RESULT_RD_LANE_6_0;
//	}
//	reg_TXIMPCAL_EN_LANE = 0; //Disable IMP_CAL
//
//	// Force NTUNE code
//	reg_TX_IMP_N_CAL_RESULT_EXT_LANE_6_0 = TXIMP_N >> 1;
//
//	//lnx_cal_tx_imp_n_result_lane = reg_TX_IMP_N_CAL_RESULT_EXT_LANE_6_0;
//
//	reg_TX_IMP_N_CAL_INDV_EXT_EN_LANE = 1;
//}
//
//void tximp_cal_p(void) BANKING_CTRL {
//	uint8_t i, TXIMP_P;
//
//	TXIMP_P = 0;
//
//	reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
//
//	// Bypass calibrations
//	reg_TX_IMP_N_CAL_BYPASS_EN_LANE = 1;
//	reg_TX_IMP_ICCP_CAL_BYPASS_EN_LANE = 1;
//	reg_TX_IMP_ICCN_CAL_BYPASS_EN_LANE = 1;
//	reg_TX_IMP_TEMPC_PCAL_BYPASS_EN_LANE = 1;
//	reg_TX_IMP_TEMPC_NCAL_BYPASS_EN_LANE = 1;
//
//	reg_TX_IMP_P_CAL_BYPASS_EN_LANE = 0; //Enable P_CAL only
//
//	reg_TXIMPCAL_EN_LANE = 1; //Enable IMP_CAL
//	reg_TXIMPCAL_BOT_LANE = 0;
//
//	for (i=0; i<=3; i++)
//	{
//		reg_TXIMPCAL_SIDE_LANE = (i & 0x1);
//		reg_RCAL_2ND_EN_LANE = i>1?1:0;
//		reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 1;
//		delay(T_p5us);
//		/*timeout = 0;
//		timeout_start((uint16_t)TIMEOUT_TXIMP_CAL);*/
//		//while((reg_MCU_DEBUGA_LANE_7_0=0x47)&&!reg_TX_ALIGN90_DCC_IMP_TOP_DONE_LANE);
//		wait_for(reg_TX_ALIGN90_DCC_IMP_TOP_DONE_LANE,0);
//		if (reg_TX_IMP_P_CAL_TIMEOUT_RD_LANE)
//			lnx_TXIMP_CAL_PASS_LANE = 0;
//		reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
//		TXIMP_P = TXIMP_P + reg_TX_IMP_P_CAL_RESULT_RD_LANE_6_0;
//	}
//	reg_TXIMPCAL_EN_LANE = 0; //Disable IMP_CAL
//
//	reg_TX_IMP_P_CAL_RESULT_EXT_LANE_6_0 = TXIMP_P >> 2;
//
//	//lnx_cal_tx_imp_p_result_lane = reg_TX_IMP_P_CAL_RESULT_EXT_LANE_6_0;
//
//	reg_TX_IMP_P_CAL_INDV_EXT_EN_LANE = 1;
//}
//
//void tximp_icc_cal(void) BANKING_CTRL {
//
//	reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
//
//	// Bypass calibrations
//	reg_TX_IMP_P_CAL_BYPASS_EN_LANE = 1;
//	reg_TX_IMP_N_CAL_BYPASS_EN_LANE = 1;
//	reg_TX_IMP_TEMPC_PCAL_BYPASS_EN_LANE = 1;
//	reg_TX_IMP_TEMPC_NCAL_BYPASS_EN_LANE = 1;
//
//	reg_TX_IMP_ICCP_CAL_BYPASS_EN_LANE = 0; // Enable ICC_P calibration
//	reg_TX_IMP_ICCN_CAL_BYPASS_EN_LANE = 0; // Enable ICC_N calibration
//
//	//Setting for one side of ICC_P/N
//	reg_TXIMP_TEMPC_PMOS_CAL_EN_LANE = 1; //Will enable tempc_p/n also
//	reg_TXIMP_TEMPC_NMOS_CAL_EN_LANE  = 1; //Both need open
//	reg_TXIMP_TEMPC_ICCP_EN_LANE = 1;
//	reg_TXIMP_TEMPC_ICCN_EN_LANE = 1;
//
//	reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 1;
//	delay(T_p5us);
//	//while((reg_MCU_DEBUGA_LANE_7_0=0x48)&&!reg_TX_ALIGN90_DCC_IMP_TOP_DONE_LANE);
//	wait_for(reg_TX_ALIGN90_DCC_IMP_TOP_DONE_LANE,0);
//	if (reg_TX_IMP_ICCP_CAL_TIMEOUT_RD_LANE || reg_TX_IMP_ICCN_CAL_TIMEOUT_RD_LANE)
//		lnx_TXIMP_CAL_PASS_LANE = 0;
//	reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
//
//	//lnx_cal_tx_imp_iccp_result_lane = reg_TX_IMP_ICCP_CAL_RESULT_RD_LANE_4_0;
//	//lnx_cal_tx_imp_iccn_result_lane = reg_TX_IMP_ICCN_CAL_RESULT_RD_LANE_4_0;
//
//	//ICC_Done 
//	reg_TX_IMP_ICCP_CAL_BYPASS_EN_LANE = 1;
//	reg_TX_IMP_ICCN_CAL_BYPASS_EN_LANE = 1;
//	reg_TXIMP_TEMPC_PMOS_CAL_EN_LANE = 0;
//	reg_TXIMP_TEMPC_NMOS_CAL_EN_LANE = 0;
//	reg_TXIMP_TEMPC_ICCP_EN_LANE = 0;
//	reg_TXIMP_TEMPC_ICCN_EN_LANE = 0;
//}

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

void tximp_cal( void ) BANKING_CTRL {

	if( cmx_TXIMP_CAL_EXT_EN == 1 ) {
		tximp_ext();
		return;
	}

	PHY_STATUS = ST_TXIMP_CAL;

	lnx_TXIMP_CAL_DONE_LANE = 0;
	lnx_TXIMP_CAL_PASS_LANE = 1;
/*
	tximp_cal_init();

	tximp_cal_n();
	tximp_cal_p();
	tximp_icc_cal();
*/
//IPDOC AUTOGEN drv_ana_tx_imp.c
	tx_imp();
	tx_tempc();
	lnx_TXIMP_CAL_DONE_LANE = 1;
}
//#endif

void rximp_cal( void ) BANKING_CTRL {

	PHY_STATUS = ST_RXIMP_CAL;

	if (cmx_RXIMP_CAL_EXT_EN == 1) {
		lnx_RXIMP_CAL_DONE_LANE = 1;
		return;
	}

	lnx_RXIMP_CAL_PASS_LANE = 0;
	lnx_RXIMP_CAL_DONE_LANE = 0;

	reg_IMPCAL_RX_EN_LANE = 1;
	//reg_RXIMPCAL_EN = 1; //enable in Calibration()

	// Based on test results, set Rx imp close to 50ohm
	reg_VTH_RXIMPCAL_3_0 = 4;

	reg_RX_IMP_TOP_START = 0;
	reg_RX_IMP_TOP_START = 1;
	delay(T_p5us);
	/*timeout = 0;
	timeout_start((uint16_t)TIMEOUT_RXIMP_CAL);
	while((reg_MCU_DEBUGA_LANE_7_0=0x49)&&!reg_RX_IMP_TOP_DONE && !timeout);
	if (!timeout)*/
	//while((reg_MCU_DEBUGA_LANE_7_0=0x4A)&&!reg_RX_IMP_TOP_DONE);
	wait_for(reg_RX_IMP_TOP_DONE,0);
	if(reg_RX_IMP_CAL_TIMEOUT_RD == 0)
		lnx_RXIMP_CAL_PASS_LANE = 1;
	reg_RX_IMP_TOP_START = 0;

	reg_IMPCAL_RX_LANE_4_0 = reg_RX_IMP_CAL_RESULT_RD_4_0;
	//lnx_cal_rx_imp_result_lane = reg_RX_IMP_CAL_RESULT_RD_4_0;

	reg_IMPCAL_RX_EN_LANE = 0;

	lnx_RXIMP_CAL_DONE_LANE = 1;
}
