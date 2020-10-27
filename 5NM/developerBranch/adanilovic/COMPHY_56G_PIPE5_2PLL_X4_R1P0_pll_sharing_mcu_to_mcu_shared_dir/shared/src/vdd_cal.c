/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file vdd_cal.c
* \purpose VDD calibration
* \History
*	10/15/2015 Heejeong Ryu		Initial 
*/
#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg BANK2
#endif

/**
 * \module VDD Calibration
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE>  
 * \note
 *    Input:  
 *    Output: 
 *    vdd_cal cal data save to GEN0 location in SERDES 
*/

#ifdef SUPPORT_VDD_CAL

#define VDD_CAL_SEL			reg_VDD_CAL_SEL_3_0
#define VREF_VDDACAL_SEL		reg_VREF_VDDACAL_SEL_3_0
#define CAL_VDD_CONTINUOUS_MODE		lnx_CAL_VDD_CONTINUOUS_MODE_EN_LANE 
#define tag_sellv_xx_default		0x4 //0x10
//#define ANA_IDLE			reg_PIN_TX_IDLE_RD_LANE
#define HIVDDR				reg_RX_IMP_UPDN_RD
#define tag_MIN_VALUE			0
#define tag_MAX_VALUE			31
#define tag_MAX_RUN			64
#define TXDCC_CLK			reg_RX_IMP_AUTO_ZERO_CLK_EXT //reg_TRXDCC_CAL_CLK100KHZ_LANE

void set_test_pattern(uint8_t pt_4t_en) BANKING_CTRL {

	save_local_ana_tx2rx_lpbk_en_lane = reg_LOCAL_ANA_TX2RX_LPBK_EN_LANE;
	save_pt_tx_pattern_sel_lane_5_0   = reg_PT_TX_PATTERN_SEL_LANE_5_0;

	save_pt_tx_en_lane                = reg_PT_TX_EN_LANE;
	save_pt_tx_clk_en_lane            = reg_PT_TX_CLK_EN_LANE;

	reg_LOCAL_ANA_TX2RX_LPBK_EN_LANE  = 1;
	if( pt_4t_en ) {
		reg_PT_TX_PATTERN_SEL_LANE_5_0 = 0x0B;
	}
	else { //PRBS7
		reg_PT_TX_PATTERN_SEL_LANE_5_0 = 0x10;
	}

	reg_PT_TX_EN_LANE = 1;
	reg_PT_TX_CLK_EN_LANE = 1;
}

void recover_test_pattern(void) BANKING_CTRL {

	reg_PT_TX_PATTERN_SEL_LANE_5_0 = save_pt_tx_pattern_sel_lane_5_0;

	reg_PT_TX_EN_LANE                 = save_pt_tx_en_lane;
	reg_PT_TX_CLK_EN_LANE             = save_pt_tx_clk_en_lane;
	reg_LOCAL_ANA_TX2RX_LPBK_EN_LANE  = save_local_ana_tx2rx_lpbk_en_lane;
}

void vdd_cal_init(void) BANKING_CTRL {

	VREF_VDDACAL_SEL = 8;
}

void vdd_cal(uint16_t regulators) BANKING_CTRL {

	uint8_t sel;

	//vdd_cal_init();

	for(sel=0; sel<MAX_NUM_REGS; sel++) {
		if (regulators & (1<<sel)) {
			vdd_cal_sel(sel);
		}
	}
}


void set_vdd_cal(uint8_t sel, uint8_t val) BANKING_CTRL {

	switch(mcuid) {
	case MCU_LANE0:
		switch(sel) {
		case SELLV_TXCLK:             reg_SELLV_TXCLK_CH0_4_0 = val;  break;
		case SELLV_TXDATA:            reg_SELLV_TXDATA_CH0_4_0 = val; break;
		case SELLV_RXDLL:             reg_SELLV_RXDLL_CH0_4_0 = val;  break;
		case SELLV_RXDLL_EOM:         reg_SELLV_RX_INTPEOM_DLLEOM_CH0_4_0 = val;  break;
		case SELLV_RXCLK:             reg_SELLV_RX_A90_DATACLK_CH0_4_0 = val;  break;
		case SELLV_RXCLK_EOM:         reg_SELLV_RX_SKEW_EOMCLK_CH0_4_0 = val;  break;
		case SELLV_RXSMPLR:           reg_SELLV_RX_THCLK_SAMPLER_CH0_4_0 = val;  break;
		}
	break;	
	case MCU_LANE1:
		switch(sel) {
		case SELLV_TXCLK:             reg_SELLV_TXCLK_CH1_4_0 = val;  break;
		case SELLV_TXDATA:            reg_SELLV_TXDATA_CH1_4_0 = val; break;
		case SELLV_RXDLL:             reg_SELLV_RXDLL_CH1_4_0 = val;  break;
		case SELLV_RXDLL_EOM:         reg_SELLV_RX_INTPEOM_DLLEOM_CH1_4_0 = val;  break;
		case SELLV_RXCLK:             reg_SELLV_RX_A90_DATACLK_CH1_4_0 = val;  break;
		case SELLV_RXCLK_EOM:         reg_SELLV_RX_SKEW_EOMCLK_CH1_4_0 = val;  break;
		case SELLV_RXSMPLR:           reg_SELLV_RX_THCLK_SAMPLER_CH1_4_0 = val;  break;
		}
	break;	
	case MCU_LANE2:
		switch(sel) {
		case SELLV_TXCLK:             reg_SELLV_TXCLK_CH2_4_0 = val;  break;
		case SELLV_TXDATA:            reg_SELLV_TXDATA_CH2_4_0 = val; break;
		case SELLV_RXDLL:             reg_SELLV_RXDLL_CH2_4_0 = val;  break;
		case SELLV_RXDLL_EOM:         reg_SELLV_RX_INTPEOM_DLLEOM_CH2_4_0 = val;  break;
		case SELLV_RXCLK:             reg_SELLV_RX_A90_DATACLK_CH2_4_0 = val;  break;
		case SELLV_RXCLK_EOM:         reg_SELLV_RX_SKEW_EOMCLK_CH2_4_0 = val;  break;
		case SELLV_RXSMPLR:           reg_SELLV_RX_THCLK_SAMPLER_CH2_4_0 = val;  break;
		}
	break;	
	case MCU_LANE3:
		switch(sel) {
		case SELLV_TXCLK:             reg_SELLV_TXCLK_CH3_4_0 = val;  break;
		case SELLV_TXDATA:            reg_SELLV_TXDATA_CH3_4_0 = val; break;
		case SELLV_RXDLL:             reg_SELLV_RXDLL_CH3_4_0 = val;  break;
		case SELLV_RXDLL_EOM:         reg_SELLV_RX_INTPEOM_DLLEOM_CH3_4_0 = val;  break;
		case SELLV_RXCLK:             reg_SELLV_RX_A90_DATACLK_CH3_4_0 = val;  break;
		case SELLV_RXCLK_EOM:         reg_SELLV_RX_SKEW_EOMCLK_CH3_4_0 = val;  break;
		case SELLV_RXSMPLR:           reg_SELLV_RX_THCLK_SAMPLER_CH3_4_0 = val;  break;
		}
	break;	
	}
}

uint8_t get_vdd_cal(uint8_t sel) BANKING_CTRL {
   uint8_t val = 0;
	switch(mcuid) {
	case MCU_LANE0:
		switch(sel) {
		case SELLV_TXCLK:             val = reg_SELLV_TXCLK_CH0_4_0;  break;
		case SELLV_TXDATA:            val = reg_SELLV_TXDATA_CH0_4_0; break;
		case SELLV_RXDLL:             val = reg_SELLV_RXDLL_CH0_4_0;  break;
		case SELLV_RXDLL_EOM:         val = reg_SELLV_RX_INTPEOM_DLLEOM_CH0_4_0;  break;
		case SELLV_RXCLK:             val = reg_SELLV_RX_A90_DATACLK_CH0_4_0;  break;
		case SELLV_RXCLK_EOM:         val = reg_SELLV_RX_SKEW_EOMCLK_CH0_4_0;  break;
		case SELLV_RXSMPLR:           val = reg_SELLV_RX_THCLK_SAMPLER_CH0_4_0;  break;
		}
	break;	
	case MCU_LANE1:
		switch(sel) {
		case SELLV_TXCLK:             val = reg_SELLV_TXCLK_CH1_4_0;  break;
		case SELLV_TXDATA:            val = reg_SELLV_TXDATA_CH1_4_0; break;
		case SELLV_RXDLL:             val = reg_SELLV_RXDLL_CH1_4_0;  break;
		case SELLV_RXDLL_EOM:         val = reg_SELLV_RX_INTPEOM_DLLEOM_CH1_4_0;  break;
		case SELLV_RXCLK:             val = reg_SELLV_RX_A90_DATACLK_CH1_4_0;  break;
		case SELLV_RXCLK_EOM:         val = reg_SELLV_RX_SKEW_EOMCLK_CH1_4_0;  break;
		case SELLV_RXSMPLR:           val = reg_SELLV_RX_THCLK_SAMPLER_CH1_4_0;  break;
		}
	break;	
	case MCU_LANE2:
		switch(sel) {
		case SELLV_TXCLK:             val = reg_SELLV_TXCLK_CH2_4_0;  break;
		case SELLV_TXDATA:            val = reg_SELLV_TXDATA_CH2_4_0; break;
		case SELLV_RXDLL:             val = reg_SELLV_RXDLL_CH2_4_0;  break;
		case SELLV_RXDLL_EOM:         val = reg_SELLV_RX_INTPEOM_DLLEOM_CH2_4_0;  break;
		case SELLV_RXCLK:             val = reg_SELLV_RX_A90_DATACLK_CH2_4_0;  break;
		case SELLV_RXCLK_EOM:         val = reg_SELLV_RX_SKEW_EOMCLK_CH2_4_0;  break;
		case SELLV_RXSMPLR:           val = reg_SELLV_RX_THCLK_SAMPLER_CH2_4_0;  break;
		}
	break;	
	case MCU_LANE3:
		switch(sel) {
		case SELLV_TXCLK:             val = reg_SELLV_TXCLK_CH3_4_0;  break;
		case SELLV_TXDATA:            val = reg_SELLV_TXDATA_CH3_4_0; break;
		case SELLV_RXDLL:             val = reg_SELLV_RXDLL_CH3_4_0;  break;
		case SELLV_RXDLL_EOM:         val = reg_SELLV_RX_INTPEOM_DLLEOM_CH3_4_0;  break;
		case SELLV_RXCLK:             val = reg_SELLV_RX_A90_DATACLK_CH3_4_0;  break;
		case SELLV_RXCLK_EOM:         val = reg_SELLV_RX_SKEW_EOMCLK_CH3_4_0;  break;
		case SELLV_RXSMPLR:           val = reg_SELLV_RX_THCLK_SAMPLER_CH3_4_0;  break;
		}
	break;	
	}
	
	return val;
}

/*
void save_vdd_cal(uint8_t sel, uint8_t cont, uint8_t val) BANKING_CTRL {
	uint8_t i, gen;
	
	i = cont;
	gen = gen_tx;
	if(phy_mode == SERDES) gen = 0;
	
	switch(sel) {
	case SELLV_TXCLK:             lnx_cal_sellv_txclk[i][gen] = val;  break;
	case SELLV_TXDATA:            lnx_cal_sellv_txdata[i][gen] = val;  break;
	case SELLV_RXDLL:             lnx_cal_sellv_rxdll[i][gen] = val;  break;
	case SELLV_RXDLL_EOM:         lnx_cal_sellv_rxdll_eom[i][gen] = val;  break;
	case SELLV_RXCLK:             lnx_cal_sellv_rxclk[i][gen] = val;  break;
	case SELLV_RXCLK_EOM:         lnx_cal_sellv_rxclk_eom[i][gen] = val;  break;
	case SELLV_RXSMPLR:           lnx_cal_sellv_rxsampler[i][gen] = val;  break;
	}	
}

uint8_t get_vdd_cal(uint8_t sel) BANKING_CTRL {
	uint8_t i, gen, val;
	
	i = cont_cal_on;
	gen = gen_tx;
	if(phy_mode == SERDES) gen = 0;
	
	switch(sel) {
	case SELLV_TXCLK:             val = lnx_cal_sellv_txclk[i][gen];  break;
	case SELLV_TXDATA:            val = lnx_cal_sellv_txdata[i][gen];  break;
	case SELLV_RXDLL:             val = lnx_cal_sellv_rxdll[i][gen];  break;
	case SELLV_RXDLL_EOM:         val = lnx_cal_sellv_rxdll_eom[i][gen];  break;
	case SELLV_RXCLK:             val = lnx_cal_sellv_rxclk[i][gen];  break;
	case SELLV_RXCLK_EOM:         val = lnx_cal_sellv_rxclk_eom[i][gen];  break;
	case SELLV_RXSMPLR:           val = lnx_cal_sellv_rxsampler[i][gen];  break;
	}	
	
	return val;
}
*/

void vdd_cal_calen(uint8_t sel, uint8_t val) BANKING_CTRL {

	// Select lane
	switch(mcuid) {
	case MCU_LANE0:  reg_VDD_CAL_EN_TRX0 = val;  break;
	case MCU_LANE1:  reg_VDD_CAL_EN_TRX1 = val;  break;
	case MCU_LANE2:  reg_VDD_CAL_EN_TRX2 = val;  break;
	case MCU_LANE3:  reg_VDD_CAL_EN_TRX3 = val;  break;
	}

	// Select regulator
	VDD_CAL_SEL = sel;

	switch(sel) {
	case SELLV_RXDLL:
	case SELLV_RXDLL_EOM:    reg_VDDA_RXDLL_HALF_EN_LANE = val;  break;
	case SELLV_RXCLK:        reg_VDDA_RXDATACLK_HALF_EN_LANE = val;  break;
	case SELLV_RXCLK_EOM:    reg_VDDA_RXEOMCLK_HALF_EN_LANE = val;  break;
	case SELLV_RXSMPLR:      reg_VDDA_RXSAMPLER_HALF_EN_LANE = val;  break;
	}	
}

void vdd_cal_set_pass(uint8_t sel, uint8_t val) BANKING_CTRL {
	switch(sel) {
	case SELLV_TXCLK:        lnx_SELLV_TXCLK_PASS_LANE = val;  break;
	case SELLV_TXDATA:       lnx_SELLV_TXDATA_PASS_LANE = val; break;
	case SELLV_RXDLL:        lnx_SELLV_RXDLL_PASS_LANE = val;  break;
	case SELLV_RXDLL_EOM:    lnx_SELLV_RXDLL_EOM_PASS_LANE = val;  break;
	case SELLV_RXCLK:        lnx_SELLV_RXCLK_PASS_LANE = val;  break;
	case SELLV_RXCLK_EOM:    lnx_SELLV_RXCLK_EOM_PASS_LANE = val;  break;
	case SELLV_RXSMPLR:      lnx_SELLV_RXSAMPLER_PASS_LANE = val;  break;
	}	
}

void vdd_cal_sel(uint8_t sel) BANKING_CTRL {
	uint8_t cal_value;
	uint8_t pass = 0;
	
	PHY_STATUS = ST_VDD_CAL;

	lnx_VDD_CAL_DONE_LANE = 0;

	if( cmx_VDD_CAL_EXT_EN ) {
		//cal_value = get_vdd_cal(sel);
		//set_vdd_cal(sel, cal_value);
		lnx_VDD_CAL_DONE_LANE = 1;
		return; 
	}	
	
	if(cont_cal_on == 0)
		set_test_pattern(0); //PRBS7

	//VDD_CAL_SELL = 0;
	vdd_cal_calen(sel, 1);

	pass = vdd_cal_op(sel);

	vdd_cal_set_pass(sel, pass);
	vdd_cal_calen(sel, 0);

	if(cont_cal_on == 0)
		recover_test_pattern();
	lnx_VDD_CAL_DONE_LANE = 1;
	
}

uint8_t vdd_cal_op(uint8_t sel) BANKING_CTRL
{
	uint8_t op_done, done_ptn, run_cnt, cal_value;
	
	cal_value = 0;
	delay(Tus);

	op_done = 0;
	done_ptn= 0; 
	run_cnt= 0;	
	//if (!cont_cal_on) //one time
	{
		cal_value = tag_sellv_xx_default;
		set_vdd_cal(sel, tag_sellv_xx_default);

		TXDCC_CLK = 1;
		//delay(T_p5us);
		delay(Tus); //T_15us; The clock period should be between 1uSec to 2uSec
		TXDCC_CLK = 0;
		//delay(T_p5us);
		delay(Tus);
	}
	//else { //continuous
	//	cal_value = get_vdd_cal(sel);
	//}
		
	while (op_done == 0) {

		done_ptn <<= 1;
		set_vdd_cal(sel, cal_value);

		TXDCC_CLK = 1;
		//delay(Tus);
		delay(T_10us); // 7NM 56G Rx regulators takes much longer delay time (10usec vs 1usec)
		TXDCC_CLK = 0;
		delay(T_5us);

		if(HIVDDR == 1) {
			 done_ptn |= 0x01; 
			 if (cal_value > tag_MIN_VALUE ) cal_value--;
		}
		else {
			if (cal_value < tag_MAX_VALUE) cal_value++;
		}
		
		done_ptn &= 0x0f;
		if ((done_ptn == 0xa) || (done_ptn == 0x5)) {op_done = 1; break;}
		if ((cont_cal_on) || (run_cnt >= tag_MAX_RUN)) {break;}

		//DBG_Printf("\r\n\t %d %d %02x %02x", run_cnt, hi_cnt, done_ptn, cal_value);
		run_cnt++;
	}
	
	//save_vdd_cal(sel, cont_cal_on, cal_value);	
	//if(!cont_cal_on) save_vdd_cal(sel, 1, cal_value);	
		
	return op_done;

}

#else
void vdd_cal(uint16_t regulators) BANKING_CTRL {}
#endif
