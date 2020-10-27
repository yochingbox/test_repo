#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK3
#pragma constseg BANK3
#endif

#define PU_EOM_ALIGN90_DCC_CMP			reg_PU_EOM_ALIGN90_DCC_CMP_LANE
#define RXDCC_EN_DATACLK                reg_RXDCC_EN_DATACLK_LANE
#define RX_ALIGN90_DD_CAL_BYPASS_EN		reg_RX_ALIGN90_DD_CAL_BYPASS_EN_LANE
#define	RX_DCC3_CAL_BYPASS_EN			reg_RX_DCC3_CAL_BYPASS_EN_LANE
#define	RX_DCC4_CAL_BYPASS_EN			reg_RX_DCC4_CAL_BYPASS_EN_LANE
//#define TIMEOUT_RXDCC_CAL				1000
#define EOM_CLK_EN						reg_EOM_CLK_EN_LANE
#define EOM_RESET_INTP_EXT				reg_EOM_RESET_INTP_EXT_LANE
#define RXDCC_HG_EOMCLK					reg_RXDCC_HG_EOMCLK_LANE
#define RXDCC_EN_EOMCLK					reg_RXDCC_EN_EOMCLK_LANE
#define RX_EOM_DCC_CAL_BYPASS_EN		reg_RX_EOM_DCC_CAL_BYPASS_EN_LANE
//#define TIMEOUT_RXEOMDCC_CAL			1000

#define TXDCC_EN						reg_TXDCC_EN_LANE
#define TXDCCCAL_PDIV_EN				reg_TXDCC_PDIV_EN_LANE

void txdcc_cal_ram_notInUse(void) BANKING_CTRL {

	uint8_t saved_speed_div, time_out_record;

	PHY_STATUS = ST_TXDCC_CAL;

	lnx_TXDCC_CAL_PASS_LANE = 0;
	lnx_TXDCC_CAL_DONE_LANE = 0;
	TXDCC_EN = 1;
	reg_TXCAL_EN_LANE = 1;
	saved_speed_div = reg_TXSPEED_DIV_LANE_2_0;
	time_out_record = 0;

	if (reg_TXSPEED_DIV_LANE_2_0 == 0)
	{
		if (reg_RX_HALFRATE_EN_LANE == 1)
		{
			reg_TX_ALIGN90_CAL_BYPASS_EN_LANE = 1;
			reg_TX_DCC3_CAL_BYPASS_EN_LANE = 1;

		}
	}
	else if(reg_TXSPEED_DIV_LANE_2_0 == 1)
	{
		reg_TXSPEED_DIV_LANE_2_0 = 0;

		reg_TX_ALIGN90_DCC_TOP_START_LANE = 1;
		/*timeout = 0;
		timeout_start((uint16_t)TIMEOUT_TXDCC_CAL);
		while(!reg_TX_ALIGN90_DCC_TOP_DONE_LANE && !timeout);
		if(timeout)
		{
			time_out_record = 1;
		}*/
		while(!reg_TX_ALIGN90_DCC_TOP_DONE_LANE);
		reg_TX_ALIGN90_DCC_TOP_START_LANE = 0;

		reg_TX_DCC1_CAL_RESULT_EXT_LANE_5_0 = reg_TX_DCC1_CAL_RESULT_RD_LANE_5_0;
		//reg_TXSPEED_DIV_LANE_2_0 = saved_speed_div;
		TXDCCCAL_PDIV_EN = 1;
	}
	else
	{
		reg_TXSPEED_DIV_LANE_2_0 = 0;

		reg_TX_ALIGN90_DCC_TOP_START_LANE = 1;
		/*timeout = 0;
		timeout_start((uint16_t)TIMEOUT_TXDCC_CAL);
		while(!reg_TX_ALIGN90_DCC_TOP_DONE_LANE && !timeout);
		if(timeout)
		{
			time_out_record = 1;
		}*/
		while(!reg_TX_ALIGN90_DCC_TOP_DONE_LANE);
		reg_TX_ALIGN90_DCC_TOP_START_LANE = 0;

		reg_TX_DCC1_CAL_RESULT_EXT_LANE_5_0 = reg_TX_DCC1_CAL_RESULT_RD_LANE_5_0;
		reg_TX_DCC2_CAL_BYPASS_EN_LANE = 1;
		//reg_TXSPEED_DIV_LANE_2_0 = saved_speed_div;
		TXDCCCAL_PDIV_EN = 1;
	}

	reg_TX_ALIGN90_DCC_TOP_START_LANE = 1;
	/*timeout = 0;
	timeout_start((uint16_t)TIMEOUT_TXDCC_CAL);
	while(!reg_TX_ALIGN90_DCC_TOP_DONE_LANE && !timeout);
	if(timeout)
		time_out_record = 1;*/
	while(!reg_TX_ALIGN90_DCC_TOP_DONE_LANE);
	reg_TX_ALIGN90_DCC_TOP_START_LANE = 0;

	reg_TX_DCC2_CAL_BYPASS_EN_LANE = 0;
	reg_TX_DCC3_CAL_BYPASS_EN_LANE = 0;
	reg_TX_ALIGN90_CAL_BYPASS_EN_LANE = 0;
	//if (reg_TX_ALIGN90_CAL_TIMEOUT_RD_LANE || reg_TX_DCC1_CAL_TIMEOUT_RD_LANE || reg_TX_DCC2_CAL_TIMEOUT_RD_LANE || reg_TX_DCC3_CAL_TIMEOUT_RD_LANE || reg_TX_DCC4_CAL_TIMEOUT_RD_LANE)
	/*if (reg_TX_ALIGN90_CAL_TIMEOUT_RD_LANE || reg_TX_DCC1_CAL_TIMEOUT_RD_LANE || reg_TX_DCC4_CAL_TIMEOUT_RD_LANE)
		lnx_TXDCC_CAL_PASS_LANE = 0;
	else
		lnx_TXDCC_CAL_PASS_LANE = 1;*/

	time_out_record = reg_TX_DCC1_CAL_TIMEOUT_RD_LANE;
	time_out_record = time_out_record | reg_TX_DCC4_CAL_TIMEOUT_RD_LANE;

	if(reg_TXSPEED_DIV_LANE_2_0 >= 1)
	{
		time_out_record |= reg_TX_ALIGN90_CAL_TIMEOUT_RD_LANE | reg_TX_DCC3_CAL_TIMEOUT_RD_LANE;
	}
	if ((reg_TXSPEED_DIV_LANE_2_0 == 1) || (reg_TXSPEED_DIV_LANE_2_0 == 0 && reg_RX_HALFRATE_EN_LANE == 0) )
		time_out_record |= reg_TX_DCC2_CAL_TIMEOUT_RD_LANE;

	if(time_out_record == 0)
		lnx_TXDCC_CAL_PASS_LANE = 1;
	else
		lnx_TXDCC_CAL_PASS_LANE = 0;


#if 1
	lnx_cal_tx_align90_result_msb_lane = reg_TX_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0;
	lnx_cal_tx_align90_result_lsb_lane = reg_TX_ALIGN90_CAL_RESULT_LSB_RD_LANE_6_0;

	lnx_cal_tx_dcc1_result_lane = reg_TX_DCC1_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_tx_dcc2_result_lane = reg_TX_DCC2_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_tx_dcc3_result_msb_lane = reg_TX_DCC3_CAL_RESULT_MSB_RD_LANE_2_0;
	lnx_cal_tx_dcc3_result_lsb_lane = reg_TX_DCC3_CAL_RESULT_LSB_RD_LANE_5_0;
	lnx_cal_tx_dcc4_result_msb_lane = reg_TX_DCC4_CAL_RESULT_MSB_RD_LANE_2_0;
	lnx_cal_tx_dcc4_result_lsb_lane = reg_TX_DCC4_CAL_RESULT_LSB_RD_LANE_5_0;
#endif

	reg_TXCAL_EN_LANE = 0;
	reg_TXSPEED_DIV_LANE_2_0 = saved_speed_div;
	lnx_TXDCC_CAL_DONE_LANE = 1;
}

void rx_clk_cal_init_ram_notInUse(void) BANKING_CTRL {
	RXDCC_EN_DATACLK = 1;
	if (reg_RX_HALFRATE_EN_LANE == 1)
	{
		reg_RX_DCC3_CAL_BYPASS_EN_LANE = 1;
		reg_RX_DCC4_CAL_BYPASS_EN_LANE = 1;
		RX_ALIGN90_DD_CAL_BYPASS_EN = 1;
		reg_RX_ALIGN90_EE_CAL_BYPASS_EN_LANE = 1;
		reg_RX_ALIGN90_DE_CAL_SETTING_LANE_2_0 = (0x144 & 0x7);
		reg_RX_ALIGN90_DE_CAL_SETTING_LANE_10_3 = (0x144 & 0x7f8)>>3;
		reg_RX_ALIGN90_DE_CAL_SETTING_LANE_12_11 = (0x144 & 0x1800)>>11;
	}
}

void rx_clk_cal_ram_notInUse(void) BANKING_CTRL {

	PHY_STATUS = ST_RX_CLK_CAL;
	lnx_RX_CLK_CAL_DONE_LANE = 0;
	lnx_RX_CLK_CAL_PASS_LANE = 0;

	rx_clk_cal_init_ram_notInUse();

	/*if (cmx_RXDCC_DATA_CAL_EXT_EN == 1)
	{
		lnx_RX_CLK_CAL_DONE_LANE = 1;
		return;
	}*/

	reg_RX_CLK_TOP_START_LANE  = 1;
	/*timeout = 0;
	timeout_start((uint16_t)TIMEOUT_RXDCC_CAL);
	while(!reg_RX_CLK_TOP_DONE_LANE && !timeout);
	if(!timeout)*/
	while(!reg_RX_CLK_TOP_DONE_LANE);

	if (reg_RX_ALIGN90_DD_CAL_TIMEOUT_RD_LANE || reg_RX_ALIGN90_DE_CAL_TIMEOUT_RD_LANE || reg_RX_ALIGN90_EE_CAL_TIMEOUT_RD_LANE || \
			reg_RX_DCC1_CAL_TIMEOUT_RD_LANE || reg_RX_DCC2_CAL_TIMEOUT_RD_LANE || reg_RX_DCC3_CAL_TIMEOUT_RD_LANE || reg_RX_DCC4_CAL_TIMEOUT_RD_LANE || reg_RX_DCC5_CAL_TIMEOUT_RD_LANE)
		lnx_RX_CLK_CAL_PASS_LANE = 0;
	else
		lnx_RX_CLK_CAL_PASS_LANE = 1;
	reg_RX_CLK_TOP_START_LANE  = 0;

#if 1
	lnx_cal_rx_align90_de_result_msb_lane = reg_RX_ALIGN90_DE_CAL_RESULT_MSB_RD_LANE_2_0;
	lnx_cal_rx_align90_de_result_lsb_lane = reg_RX_ALIGN90_DE_CAL_RESULT_LSB_RD_LANE_6_0;
	lnx_cal_rx_align90_dd_result_msb_lane = reg_RX_ALIGN90_DD_CAL_RESULT_MSB_RD_LANE_2_0;
	lnx_cal_rx_align90_dd_result_lsb_lane = reg_RX_ALIGN90_DD_CAL_RESULT_LSB_RD_LANE_6_0;
	lnx_cal_rx_align90_ee_result_msb_lane = reg_RX_ALIGN90_EE_CAL_RESULT_MSB_RD_LANE_2_0;
	lnx_cal_rx_align90_ee_result_lsb_lane = reg_RX_ALIGN90_EE_CAL_RESULT_LSB_RD_LANE_6_0;

	lnx_cal_rx_dcc1_result_msb_lane = reg_RX_DCC1_CAL_RESULT_MSB_RD_LANE_2_0;
	lnx_cal_rx_dcc1_result_lsb_lane = reg_RX_DCC1_CAL_RESULT_LSB_RD_LANE_5_0;
	lnx_cal_rx_dcc2_result_msb_lane = reg_RX_DCC2_CAL_RESULT_MSB_RD_LANE_2_0;
	lnx_cal_rx_dcc2_result_lsb_lane = reg_RX_DCC2_CAL_RESULT_LSB_RD_LANE_5_0;
	lnx_cal_rx_dcc3_result_msb_lane = reg_RX_DCC3_CAL_RESULT_MSB_RD_LANE_2_0;
	lnx_cal_rx_dcc3_result_lsb_lane = reg_RX_DCC3_CAL_RESULT_LSB_RD_LANE_5_0;
	lnx_cal_rx_dcc4_result_msb_lane = reg_RX_DCC4_CAL_RESULT_MSB_RD_LANE_2_0;
	lnx_cal_rx_dcc4_result_lsb_lane = reg_RX_DCC4_CAL_RESULT_LSB_RD_LANE_5_0;
#endif

	lnx_RX_CLK_CAL_DONE_LANE = 1;
}

void rx_eom_cal_init_ram_notInUse(void) BANKING_CTRL {
	PU_EOM_ALIGN90_DCC_CMP = 1;
	EOM_CLK_EN = 1;
	EOM_RESET_INTP_EXT = 0;
	RXDCC_HG_EOMCLK = 1;
	RXDCC_EN_EOMCLK = 1;
	PU_EOM_ALIGN90_DCC_CMP = 1;
	if (reg_RX_HALFRATE_EN_LANE == 0)
	{
		RX_EOM_DCC_CAL_BYPASS_EN = 1;
		reg_RX_EOM_DCC_CAL_SINGLE_EN_LANE = 1;
		reg_RX_EOM_DCC_CAL_CONT_EN_LANE = 1;
		reg_RX_EOM_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 = 0;
		reg_RX_EOM_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0 = 1;
		reg_RX_EOM_PI_CAL_BYPASS_EN_LANE = 0;
		reg_RX_EOM_PI_CAL_SINGLE_EN_LANE = 1;
		//RX_EOM_PI_CAL_CONT_EN=0
		reg_RX_EOM_PI_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 = 4;
		//RX_EOM_PI_CAL_CONT_MODE_STEPSIZE[2:0] =1
		reg_RX_EOM_ALIGN90_CAL_BYPASS_EN_LANE = 1;
		reg_RX_EOM_ALIGN90_CAL_SINGLE_EN_LANE = 1;
		reg_RX_EOM_ALIGN90_CAL_CONT_EN_LANE = 1;
		reg_RX_EOM_ALIGN90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 = 0;
		reg_RX_EOM_ALIGN90_CAL_CONT_MODE_STEPSIZE_LANE_2_0 = 1;
	}
	else if (reg_RX_HALFRATE_EN_LANE == 1)
	{
		reg_RX_EOM_PI_CAL_SETTING_LANE_6_0 = (0X294 & 0x7f);
		reg_RX_EOM_PI_CAL_SETTING_LANE_12_7 = (0X294 & (0x3f << 7));
		reg_RX_EOM_ALIGN90_CAL_BYPASS_EN_LANE = 1;
	}

}

void rx_eom_cal_ram_notInUse(void) BANKING_CTRL {

	PHY_STATUS = ST_RX_EOM_CAL;

	lnx_RX_EOM_CAL_DONE_LANE = 0;
	lnx_RX_EOM_CAL_PASS_LANE = 0;

	rx_eom_cal_init_ram_notInUse();

	/*if(cmx_RXDCC_EOM_CAL_EXT_EN == 1)
	{
		lnx_RX_EOM_CAL_DONE_LANE = 1;
		return;
	}*/

	reg_RX_EOM_TOP_START_LANE = 1;
	/*timeout = 0;
	timeout_start((uint16_t)TIMEOUT_RXEOMDCC_CAL);
	while(!reg_RX_EOM_TOP_DONE_LANE && !timeout);*/
	while(!reg_RX_EOM_TOP_DONE_LANE);
	if(reg_RX_EOM_DCC_CAL_TIMEOUT_RD_LANE || reg_RX_EOM_PI_CAL_TIMEOUT_RD_LANE || reg_RX_EOM_ALIGN90_CAL_TIMEOUT_RD_LANE)
		lnx_RX_EOM_CAL_PASS_LANE = 0;
	else
		lnx_RX_EOM_CAL_PASS_LANE = 1;
	reg_RX_EOM_TOP_START_LANE = 0;

	lnx_cal_rx_eom_dcc_result_lane = reg_RX_EOM_DCC_CAL_RESULT_RD_LANE_6_0;
	lnx_cal_rx_eom_pi_result_lane = reg_RX_EOM_PI_CAL_RESULT_RD_LANE_10_4;
	lnx_cal_rx_eom_align90_result_msb_lane = reg_RX_EOM_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0;
	lnx_cal_rx_eom_align90_result_lsb_lane = reg_RX_EOM_ALIGN90_CAL_RESULT_LSB_RD_LANE_6_0;

	lnx_RX_EOM_CAL_DONE_LANE = 1;

	PU_EOM_ALIGN90_DCC_CMP = 0;

}










