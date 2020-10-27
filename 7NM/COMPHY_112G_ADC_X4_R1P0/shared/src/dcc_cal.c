#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK1
#pragma constseg BANK1
#endif

void txalign90_dcc_cal(void) BANKING_CTRL {}

#ifdef NEED_REMAP_REGS
void txdcc_cal(void) BANKING_CTRL {}
void txdcc_cal_cont(void) BANKING_CTRL {}
#else
void txdcc_cal_init(void) BANKING_CTRL {

	reg_TXDCC_PDIV_EN_LANE = 1;
	reg_TXCAL_EN_LANE = 1;
	reg_TXDCC_EN_LANE = 1;

	reg_TX_ALIGN90_CAL_BYPASS_EN_LANE = 0;
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

void txdcc_cal(void) BANKING_CTRL {

	uint8_t time_out_record;

	if (cmx_TXDCC_CAL_EXT_EN) {
		lnx_TXDCC_CAL_DONE_LANE = 1;
		return;
	}

	PHY_STATUS = ST_TXDCC_CAL;

	lnx_TXDCC_CAL_PASS_LANE = 0;
	lnx_TXDCC_CAL_DONE_LANE = 0;

	time_out_record = 0;
	reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;

	txdcc_cal_init();

	reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 1;
	delay(T_p5us);
	//while((reg_MCU_DEBUGA_LANE_7_0=0x3F)&&!reg_TX_ALIGN90_DCC_IMP_TOP_DONE_LANE);
	wait_for(reg_TX_ALIGN90_DCC_IMP_TOP_DONE_LANE,0);
	reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;

	time_out_record = reg_TX_DCC4_CAL_TIMEOUT_RD_LANE;

	if (reg_TX_HALFRATE_EN_LANE == 0) {
		time_out_record |= (reg_TX_ALIGN90_CAL_TIMEOUT_RD_LANE | reg_TX_DCC3_CAL_TIMEOUT_RD_LANE);
	}

	if (reg_TXSPEED_DIV_LANE_2_0 == 0) {
		time_out_record |= reg_TX_DCC2_CAL_TIMEOUT_RD_LANE;
	} else {
		time_out_record |= reg_TX_DCC1_CAL_TIMEOUT_RD_LANE;
	}

	if (time_out_record == 0)
		lnx_TXDCC_CAL_PASS_LANE = 1;

#if 0
	lnx_cal_tx_align90_result_msb_lane = reg_TX_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0;
	lnx_cal_tx_align90_result_lsb_lane = reg_TX_ALIGN90_CAL_RESULT_LSB_RD_LANE_6_0;
	lnx_cal_tx_align90_dummy_clk_lane = reg_TX_ALIGN90_CAL_DUMMY_CLK_RD_LANE;

	lnx_cal_tx_dcc1_result_lane = reg_TX_DCC1_CAL_RESULT_RD_LANE_6_0;
	lnx_cal_tx_dcc2_result_lane = reg_TX_DCC2_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_tx_dcc3_result_msb_lane = reg_TX_DCC3_CAL_RESULT_MSB_RD_LANE_2_0;
	lnx_cal_tx_dcc3_result_lsb_lane = reg_TX_DCC3_CAL_RESULT_LSB_RD_LANE_5_0;
	lnx_cal_tx_dcc3_dummy_clk_lane = reg_TX_DCC3_CAL_DUMMY_CLK_RD_LANE;
	lnx_cal_tx_dcc4_result_msb_lane = reg_TX_DCC4_CAL_RESULT_MSB_RD_LANE_2_0;
	lnx_cal_tx_dcc4_result_lsb_lane = reg_TX_DCC4_CAL_RESULT_LSB_RD_LANE_5_0;
	lnx_cal_tx_dcc4_dummy_clk_lane = reg_TX_DCC4_CAL_DUMMY_CLK_RD_LANE;
#endif

	//reg_TXCAL_EN_LANE = 0;

	lnx_TXDCC_CAL_DONE_LANE = 1;
}

void tx_a90_dcc_imp_cal_init(void) BANKING_CTRL {

	reg_TXCAL_EN_LANE = 1;
	reg_TXDCC_EN_LANE = 1;
	reg_TX_ALIGN90_DCC_IMP_TOP_CONT_START_LANE = 0;

	//only Align90, DCC3 and DCC4 calibrations support the continuous mode
	reg_TX_ALIGN90_CAL_BYPASS_EN_LANE = 0;
	reg_TX_DCC1_CAL_BYPASS_EN_LANE = 1;
	reg_TX_DCC2_CAL_BYPASS_EN_LANE = 1;
	reg_TX_DCC3_CAL_BYPASS_EN_LANE = 0;
	reg_TX_DCC4_CAL_BYPASS_EN_LANE = 0;

	// in half rate, the 90 phase delay block and the DCC3 block are disabled
	if (reg_TX_HALFRATE_EN_LANE == 1) {
		reg_TX_ALIGN90_CAL_BYPASS_EN_LANE = 1;
		reg_TX_DCC3_CAL_BYPASS_EN_LANE = 1;
	}

	// Bypass all impedance calibrations except tempc calibrations in cont mode
	reg_TX_IMP_P_CAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_N_CAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_ICCP_CAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_ICCN_CAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_TEMPC_PCAL_BYPASS_EN_LANE = 0;
	reg_TX_IMP_TEMPC_NCAL_BYPASS_EN_LANE = 0;

	reg_TXIMP_TEMPC_ICCP_EN_LANE = 1;
	reg_TXIMP_TEMPC_ICCN_EN_LANE = 1;
	reg_TXIMP_TEMPC_PMOS_CAL_EN_LANE = 1;
	reg_TXIMP_TEMPC_NMOS_CAL_EN_LANE = 1;
}

void txdcc_cal_cont(void) BANKING_CTRL {

	if (cmx_TXDCC_CAL_CONT_EN == 0) return;

	tx_a90_dcc_imp_cal_init();

	reg_TX_ALIGN90_DCC_IMP_TOP_CONT_START_LANE = 1;
}
#endif
