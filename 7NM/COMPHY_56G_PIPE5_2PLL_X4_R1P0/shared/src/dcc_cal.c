/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file txdcc.c
* \purpose power on seq control
* \History
*	11/1/2019    Heejeong Ryu		Initial
*   11/19/2019   Heejeong Ryu       Added reload part for PCIe Speed change
*/

#include "common.h"
#ifdef USE_BANKING
#pragma codeseg BANK3
#pragma constseg BANK3
#endif

void set_txdcc_cal_bypass_en(void) BANKING_CTRL {
	reg_TX_DCC1_CAL_BYPASS_EN_LANE = 0;
	reg_TX_DCC2_CAL_BYPASS_EN_LANE = 1;
	reg_TX_DCC3_CAL_BYPASS_EN_LANE = 0;
	reg_TX_DCC4_CAL_BYPASS_EN_LANE = 0;

	// Bypass all impedance calibrations
	reg_TX_IMP_P_CAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_N_CAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_ICCP_CAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_ICCN_CAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_TEMPC_PCAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_TEMPC_NCAL_BYPASS_EN_LANE = 1;

	// in half rate, the 90 phase delay block and the DCC3 block are bypassed
	if (reg_TX_HALFRATE_EN_LANE == 1) {
		reg_TX_ALIGN90_CAL_BYPASS_EN_LANE = 1;
		reg_TX_DCC3_CAL_BYPASS_EN_LANE = 1;
	}
	// in full speed, bypass the DCC2 block (which corrects the duty cycle for low speed clocks).
	// In any other speed, do not bypass DC
	if (reg_TXSPEED_DIV_LANE_2_0 != 0) {
		reg_TX_DCC1_CAL_BYPASS_EN_LANE = 1;
		reg_TX_DCC2_CAL_BYPASS_EN_LANE = 0;
	}

}


void txdcc_cal_init(void) BANKING_CTRL {

	bool TX_ALIGN90_CAL_SINGLE_EN_temp_save, TX_DCC1_CAL_SINGLE_EN_temp_save, TX_DCC2_CAL_SINGLE_EN_temp_save;
	bool TX_DCC3_CAL_SINGLE_EN_temp_save, TX_DCC4_CAL_SINGLE_EN_temp_save;
	bool TX_IMP_N_CAL_SINGLE_EN_temp_save, TX_IMP_P_CAL_SINGLE_EN_temp_save;
	bool TX_IMP_ICCP_CAL_SINGLE_EN_temp_save, TX_IMP_ICCN_CAL_SINGLE_EN_temp_save;
	bool TX_IMP_TEMPC_NCAL_SINGLE_EN_temp_save, TX_IMP_TEMPC_PCAL_SINGLE_EN_temp_save;

	if(phy_mode != SERDES) {
	set_txdcc_cal_bypass_en();
	reg_TX_DCC1_CAL_BYPASS_EN_LANE = 0;
	reg_TX_DCC2_CAL_BYPASS_EN_LANE = 0;
	
        TX_ALIGN90_CAL_SINGLE_EN_temp_save = reg_TX_ALIGN90_CAL_SINGLE_EN_LANE;
        TX_DCC1_CAL_SINGLE_EN_temp_save = reg_TX_DCC1_CAL_SINGLE_EN_LANE;
        TX_DCC2_CAL_SINGLE_EN_temp_save = reg_TX_DCC2_CAL_SINGLE_EN_LANE;
        TX_DCC3_CAL_SINGLE_EN_temp_save = reg_TX_DCC3_CAL_SINGLE_EN_LANE;
        TX_DCC4_CAL_SINGLE_EN_temp_save = reg_TX_DCC4_CAL_SINGLE_EN_LANE;
        TX_IMP_N_CAL_SINGLE_EN_temp_save = reg_TX_IMP_N_CAL_SINGLE_EN_LANE;
        TX_IMP_P_CAL_SINGLE_EN_temp_save = reg_TX_IMP_P_CAL_SINGLE_EN_LANE;
        TX_IMP_ICCP_CAL_SINGLE_EN_temp_save = reg_TX_IMP_ICCP_CAL_SINGLE_EN_LANE;
        TX_IMP_ICCN_CAL_SINGLE_EN_temp_save = reg_TX_IMP_ICCN_CAL_SINGLE_EN_LANE;
        TX_IMP_TEMPC_NCAL_SINGLE_EN_temp_save = reg_TX_IMP_TEMPC_NCAL_SINGLE_EN_LANE;
        TX_IMP_TEMPC_PCAL_SINGLE_EN_temp_save = reg_TX_IMP_TEMPC_PCAL_SINGLE_EN_LANE;
        
        reg_TX_ALIGN90_CAL_SINGLE_EN_LANE = 0;
	reg_TX_DCC1_CAL_SINGLE_EN_LANE = 0;
	reg_TX_DCC2_CAL_SINGLE_EN_LANE = 0;
	reg_TX_DCC3_CAL_SINGLE_EN_LANE = 0;
	reg_TX_DCC4_CAL_SINGLE_EN_LANE = 0;
        reg_TX_IMP_N_CAL_SINGLE_EN_LANE = 0;
	reg_TX_IMP_P_CAL_SINGLE_EN_LANE = 0;
        reg_TX_IMP_ICCP_CAL_SINGLE_EN_LANE = 0;
        reg_TX_IMP_ICCN_CAL_SINGLE_EN_LANE = 0;
        reg_TX_IMP_TEMPC_NCAL_SINGLE_EN_LANE = 0;
        reg_TX_IMP_TEMPC_PCAL_SINGLE_EN_LANE = 0;

	reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 1;
	delay(T_p5us);
	while (!reg_TX_ALIGN90_DCC_IMP_TOP_DONE_LANE);
	reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
	
	reg_TX_ALIGN90_CAL_SINGLE_EN_LANE = TX_ALIGN90_CAL_SINGLE_EN_temp_save;
        reg_TX_DCC1_CAL_SINGLE_EN_LANE = TX_DCC1_CAL_SINGLE_EN_temp_save;
        reg_TX_DCC2_CAL_SINGLE_EN_LANE = TX_DCC2_CAL_SINGLE_EN_temp_save;
        reg_TX_DCC3_CAL_SINGLE_EN_LANE = TX_DCC3_CAL_SINGLE_EN_temp_save;
        reg_TX_DCC4_CAL_SINGLE_EN_LANE = TX_DCC4_CAL_SINGLE_EN_temp_save;
        reg_TX_IMP_N_CAL_SINGLE_EN_LANE = TX_IMP_N_CAL_SINGLE_EN_temp_save;
        reg_TX_IMP_P_CAL_SINGLE_EN_LANE = TX_IMP_P_CAL_SINGLE_EN_temp_save;
        reg_TX_IMP_ICCP_CAL_SINGLE_EN_LANE = TX_IMP_ICCP_CAL_SINGLE_EN_temp_save;
        reg_TX_IMP_ICCN_CAL_SINGLE_EN_LANE = TX_IMP_ICCN_CAL_SINGLE_EN_temp_save;
        reg_TX_IMP_TEMPC_NCAL_SINGLE_EN_LANE = TX_IMP_TEMPC_NCAL_SINGLE_EN_temp_save;
        reg_TX_IMP_TEMPC_PCAL_SINGLE_EN_LANE = TX_IMP_TEMPC_PCAL_SINGLE_EN_temp_save;

	}

	reg_TXDCC_PDIV_EN_LANE = 1;
	reg_TXCAL_EN_LANE = 1;
	reg_TXDCC_EN_LANE = 1;

	set_txdcc_cal_bypass_en();

}

void txdcc_cal(void) BANKING_CTRL {

	uint8_t time_out_record;
	//uint32_t cur_time;

	PHY_STATUS = ST_TXDCC_CAL;

	if (cmx_TXDCC_CAL_EXT_EN) {
		lnx_TXDCC_CAL_DONE_LANE = 1;
		return;
	}

	//cur_time = get_time();

	lnx_TXDCC_CAL_PASS_LANE = 0;
	lnx_TXDCC_CAL_DONE_LANE = 0;

	time_out_record = 0;

	txdcc_cal_init();

	reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 1;
	delay(T_p5us);
	while (!reg_TX_ALIGN90_DCC_IMP_TOP_DONE_LANE);
	reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;

    #ifndef _56G_5NM
	time_out_record = reg_TX_DCC4_CAL_TIMEOUT_RD_LANE;

	if (reg_TX_HALFRATE_EN_LANE == 0) {
		time_out_record |= (reg_TX_ALIGN90_CAL_TIMEOUT_RD_LANE | reg_TX_DCC3_CAL_TIMEOUT_RD_LANE);
	}

	if (reg_TXSPEED_DIV_LANE_2_0 == 0) {
		time_out_record |= reg_TX_DCC2_CAL_TIMEOUT_RD_LANE;
	} else {
		time_out_record |= reg_TX_DCC1_CAL_TIMEOUT_RD_LANE;
	}
    #endif // #ifndef _56G_5NM

	if (time_out_record == 0)
		lnx_TXDCC_CAL_PASS_LANE = 1;

    #ifndef _56G_5NM
	lnx_cal_tx_dcc1[gen_tx] = reg_TX_DCC1_CAL_RESULT_RD_LANE_6_0 | 0;
	lnx_cal_tx_dcc2[gen_tx] = reg_TX_DCC2_CAL_RESULT_RD_LANE_5_0 | 0;
	lnx_cal_tx_dcc4_msb[gen_tx] = reg_TX_DCC4_CAL_RESULT_MSB_RD_LANE_2_0 | 0;
	lnx_cal_tx_dcc4_lsb[gen_tx] = reg_TX_DCC4_CAL_RESULT_LSB_RD_LANE_5_0 | 0;
    #endif // #ifndef _56G_5NM

	//reg_TXDCC_EN_LANE = 0;
	//reg_TXCAL_EN_LANE = 0;
	//lnx_TX_DCC_CAL_TIME_LANE_15_0 = (uint16_t)(get_time()-cur_time);

	lnx_TXDCC_CAL_DONE_LANE = 1;
}

void txdcc_cal_init_cont(void) BANKING_CTRL {

	reg_TXCAL_EN_LANE = 1;
	reg_TXDCC_EN_LANE = 1;
	reg_TX_ALIGN90_DCC_IMP_TOP_CONT_START_LANE = 0;

	
	set_txdcc_cal_bypass_en();
	reg_TX_DCC1_CAL_BYPASS_EN_LANE = 1; //continuous mode should bypass txdcc1/2
	reg_TX_DCC2_CAL_BYPASS_EN_LANE = 1;

}

void txdcc_cal_cont(void) BANKING_CTRL {

	if (cmx_TXDCC_CAL_CONT_EN == 0) return;

	txdcc_cal_init_cont();

	reg_TX_ALIGN90_DCC_IMP_TOP_CONT_START_LANE = 1;
}
