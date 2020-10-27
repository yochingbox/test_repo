//////////////////////This file need to be replace by unified vdd cal from Barry
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
#pragma codeseg BANK1
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

void vdd_cal_init(uint8_t vref) BANKING_CTRL {

	if (vref > 6)
		VREF_VDDACAL_SEL = vref & 0x0f;
	else {
		if (gen_tx <= 2)
			VREF_VDDACAL_SEL = vref & 0x0f; // set vref = 0.8V for TX VDDA_DATA and VDDA_CLK at 1.25G data rate
		else
			VREF_VDDACAL_SEL = 8; // set vref = 0.86V
	}
}

void vdd_cal(uint8_t vref, uint16_t regulators) BANKING_CTRL {

	uint8_t sel;

	vdd_cal_init(vref);

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
		case SELLV_RXINTP:            reg_SELLV_RXINTP_CH0_4_0 = val;  break;
		case SELLV_RXDLL:             reg_SELLV_RXDLL_CH0_4_0 = val;  break;
		case SELLV_RX_A90_DATACLK:    reg_SELLV_RX_A90_DATACLK_CH0_4_0 = val;  break;
		case SELLV_RX_SKEW_EOMCLK:    reg_SELLV_RX_SKEW_EOMCLK_CH0_4_0 = val;  break;
		case SELLV_RX_THCLK_SAMPLER:  reg_SELLV_RX_THCLK_SAMPLER_CH0_4_0 = val;  break;
		case SELLV_RX_THDRV:          reg_SELLV_RX_THDRV_CH0_4_0 = val;  break;
		case SELLV_RX_CLKTOPVDDL:     reg_SELLV_RX_CLKTOPVDDL_CH0_4_0 = val;  break;
		case SELLV_RX_INTPEOM_DLLEOM: reg_SELLV_RX_INTPEOM_DLLEOM_CH0_4_0 = val;  break;
		case SELLV_RX_DIV2:           reg_SELLV_RX_DIV2_CH0_4_0 = val;  break;
		case SELLV_RX_CTLE:           reg_SELLV_RX_CTLE_CH0_4_0 = val;  break;
		}
	break;	
	case MCU_LANE1:
		switch(sel) {
		case SELLV_TXCLK:             reg_SELLV_TXCLK_CH1_4_0 = val;  break;
		case SELLV_TXDATA:            reg_SELLV_TXDATA_CH1_4_0 = val; break;
		case SELLV_RXINTP:            reg_SELLV_RXINTP_CH1_4_0 = val;  break;
		case SELLV_RXDLL:             reg_SELLV_RXDLL_CH1_4_0 = val;  break;
		case SELLV_RX_A90_DATACLK:    reg_SELLV_RX_A90_DATACLK_CH1_4_0 = val;  break;
		case SELLV_RX_SKEW_EOMCLK:    reg_SELLV_RX_SKEW_EOMCLK_CH1_4_0 = val;  break;
		case SELLV_RX_THCLK_SAMPLER:  reg_SELLV_RX_THCLK_SAMPLER_CH1_4_0 = val;  break;
		case SELLV_RX_THDRV:          reg_SELLV_RX_THDRV_CH1_4_0 = val;  break;
		case SELLV_RX_CLKTOPVDDL:     reg_SELLV_RX_CLKTOPVDDL_CH1_4_0 = val;  break;
		case SELLV_RX_INTPEOM_DLLEOM: reg_SELLV_RX_INTPEOM_DLLEOM_CH1_4_0 = val;  break;
		case SELLV_RX_DIV2:           reg_SELLV_RX_DIV2_CH1_4_0 = val;  break;
		case SELLV_RX_CTLE:           reg_SELLV_RX_CTLE_CH1_4_0 = val;  break;
		}
	break;	
	case MCU_LANE2:
		switch(sel) {
		case SELLV_TXCLK:             reg_SELLV_TXCLK_CH2_4_0 = val;  break;
		case SELLV_TXDATA:            reg_SELLV_TXDATA_CH2_4_0 = val; break;
		case SELLV_RXINTP:            reg_SELLV_RXINTP_CH2_4_0 = val;  break;
		case SELLV_RXDLL:             reg_SELLV_RXDLL_CH2_4_0 = val;  break;
		case SELLV_RX_A90_DATACLK:    reg_SELLV_RX_A90_DATACLK_CH2_4_0 = val;  break;
		case SELLV_RX_SKEW_EOMCLK:    reg_SELLV_RX_SKEW_EOMCLK_CH2_4_0 = val;  break;
		case SELLV_RX_THCLK_SAMPLER:  reg_SELLV_RX_THCLK_SAMPLER_CH2_4_0 = val;  break;
		case SELLV_RX_THDRV:          reg_SELLV_RX_THDRV_CH2_4_0 = val;  break;
		case SELLV_RX_CLKTOPVDDL:     reg_SELLV_RX_CLKTOPVDDL_CH2_4_0 = val;  break;
		case SELLV_RX_INTPEOM_DLLEOM: reg_SELLV_RX_INTPEOM_DLLEOM_CH2_4_0 = val;  break;
		case SELLV_RX_DIV2:           reg_SELLV_RX_DIV2_CH2_4_0 = val;  break;
		case SELLV_RX_CTLE:           reg_SELLV_RX_CTLE_CH2_4_0 = val;  break;
		}
	break;	
	case MCU_LANE3:
		switch(sel) {
		case SELLV_TXCLK:             reg_SELLV_TXCLK_CH3_4_0 = val;  break;
		case SELLV_TXDATA:            reg_SELLV_TXDATA_CH3_4_0 = val; break;
		case SELLV_RXINTP:            reg_SELLV_RXINTP_CH3_4_0 = val;  break;
		case SELLV_RXDLL:             reg_SELLV_RXDLL_CH3_4_0 = val;  break;
		case SELLV_RX_A90_DATACLK:    reg_SELLV_RX_A90_DATACLK_CH3_4_0 = val;  break;
		case SELLV_RX_SKEW_EOMCLK:    reg_SELLV_RX_SKEW_EOMCLK_CH3_4_0 = val;  break;
		case SELLV_RX_THCLK_SAMPLER:  reg_SELLV_RX_THCLK_SAMPLER_CH3_4_0 = val;  break;
		case SELLV_RX_THDRV:          reg_SELLV_RX_THDRV_CH3_4_0 = val;  break;
		case SELLV_RX_CLKTOPVDDL:     reg_SELLV_RX_CLKTOPVDDL_CH3_4_0 = val;  break;
		case SELLV_RX_INTPEOM_DLLEOM: reg_SELLV_RX_INTPEOM_DLLEOM_CH3_4_0 = val;  break;
		case SELLV_RX_DIV2:           reg_SELLV_RX_DIV2_CH3_4_0 = val;  break;
		case SELLV_RX_CTLE:           reg_SELLV_RX_CTLE_CH3_4_0 = val;  break;
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
		case SELLV_RXINTP:            val = reg_SELLV_RXINTP_CH0_4_0;  break;
		case SELLV_RXDLL:             val = reg_SELLV_RXDLL_CH0_4_0;  break;
		case SELLV_RX_A90_DATACLK:    val = reg_SELLV_RX_A90_DATACLK_CH0_4_0;  break;
		case SELLV_RX_SKEW_EOMCLK:    val = reg_SELLV_RX_SKEW_EOMCLK_CH0_4_0;  break;
		case SELLV_RX_THCLK_SAMPLER:  val = reg_SELLV_RX_THCLK_SAMPLER_CH0_4_0;  break;
		case SELLV_RX_THDRV:          val = reg_SELLV_RX_THDRV_CH0_4_0;  break;
		case SELLV_RX_CLKTOPVDDL:     val = reg_SELLV_RX_CLKTOPVDDL_CH0_4_0;  break;
		case SELLV_RX_INTPEOM_DLLEOM: val = reg_SELLV_RX_INTPEOM_DLLEOM_CH0_4_0;  break;
		case SELLV_RX_DIV2:           val = reg_SELLV_RX_DIV2_CH0_4_0;  break;
		case SELLV_RX_CTLE:           val = reg_SELLV_RX_CTLE_CH0_4_0;  break;
		}
	break;	
	case MCU_LANE1:
		switch(sel) {
		case SELLV_TXCLK:             val = reg_SELLV_TXCLK_CH1_4_0;  break;
		case SELLV_TXDATA:            val = reg_SELLV_TXDATA_CH1_4_0; break;
		case SELLV_RXINTP:            val = reg_SELLV_RXINTP_CH1_4_0;  break;
		case SELLV_RXDLL:             val = reg_SELLV_RXDLL_CH1_4_0;  break;
		case SELLV_RX_A90_DATACLK:    val = reg_SELLV_RX_A90_DATACLK_CH1_4_0;  break;
		case SELLV_RX_SKEW_EOMCLK:    val = reg_SELLV_RX_SKEW_EOMCLK_CH1_4_0;  break;
		case SELLV_RX_THCLK_SAMPLER:  val = reg_SELLV_RX_THCLK_SAMPLER_CH1_4_0;  break;
		case SELLV_RX_THDRV:          val = reg_SELLV_RX_THDRV_CH1_4_0;  break;
		case SELLV_RX_CLKTOPVDDL:     val = reg_SELLV_RX_CLKTOPVDDL_CH1_4_0;  break;
		case SELLV_RX_INTPEOM_DLLEOM: val = reg_SELLV_RX_INTPEOM_DLLEOM_CH1_4_0;  break;
		case SELLV_RX_DIV2:           val = reg_SELLV_RX_DIV2_CH1_4_0;  break;
		case SELLV_RX_CTLE:           val = reg_SELLV_RX_CTLE_CH1_4_0;  break;
		}
	break;	
	case MCU_LANE2:
		switch(sel) {
		case SELLV_TXCLK:             val = reg_SELLV_TXCLK_CH2_4_0;  break;
		case SELLV_TXDATA:            val = reg_SELLV_TXDATA_CH2_4_0; break;
		case SELLV_RXINTP:            val = reg_SELLV_RXINTP_CH2_4_0;  break;
		case SELLV_RXDLL:             val = reg_SELLV_RXDLL_CH2_4_0;  break;
		case SELLV_RX_A90_DATACLK:    val = reg_SELLV_RX_A90_DATACLK_CH2_4_0;  break;
		case SELLV_RX_SKEW_EOMCLK:    val = reg_SELLV_RX_SKEW_EOMCLK_CH2_4_0;  break;
		case SELLV_RX_THCLK_SAMPLER:  val = reg_SELLV_RX_THCLK_SAMPLER_CH2_4_0;  break;
		case SELLV_RX_THDRV:          val = reg_SELLV_RX_THDRV_CH2_4_0;  break;
		case SELLV_RX_CLKTOPVDDL:     val = reg_SELLV_RX_CLKTOPVDDL_CH2_4_0;  break;
		case SELLV_RX_INTPEOM_DLLEOM: val = reg_SELLV_RX_INTPEOM_DLLEOM_CH2_4_0;  break;
		case SELLV_RX_DIV2:           val = reg_SELLV_RX_DIV2_CH2_4_0;  break;
		case SELLV_RX_CTLE:           val = reg_SELLV_RX_CTLE_CH2_4_0;  break;
		}
	break;	
	case MCU_LANE3:
		switch(sel) {
		case SELLV_TXCLK:             val = reg_SELLV_TXCLK_CH3_4_0;  break;
		case SELLV_TXDATA:            val = reg_SELLV_TXDATA_CH3_4_0; break;
		case SELLV_RXINTP:            val = reg_SELLV_RXINTP_CH3_4_0;  break;
		case SELLV_RXDLL:             val = reg_SELLV_RXDLL_CH3_4_0;  break;
		case SELLV_RX_A90_DATACLK:    val = reg_SELLV_RX_A90_DATACLK_CH3_4_0;  break;
		case SELLV_RX_SKEW_EOMCLK:    val = reg_SELLV_RX_SKEW_EOMCLK_CH3_4_0;  break;
		case SELLV_RX_THCLK_SAMPLER:  val = reg_SELLV_RX_THCLK_SAMPLER_CH3_4_0;  break;
		case SELLV_RX_THDRV:          val = reg_SELLV_RX_THDRV_CH3_4_0;  break;
		case SELLV_RX_CLKTOPVDDL:     val = reg_SELLV_RX_CLKTOPVDDL_CH3_4_0;  break;
		case SELLV_RX_INTPEOM_DLLEOM: val = reg_SELLV_RX_INTPEOM_DLLEOM_CH3_4_0;  break;
		case SELLV_RX_DIV2:           val = reg_SELLV_RX_DIV2_CH3_4_0;  break;
		case SELLV_RX_CTLE:           val = reg_SELLV_RX_CTLE_CH3_4_0;  break;
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
	case SELLV_RXINTP:            lnx_cal_sellv_rxintp[i][gen] = val;  break;
	case SELLV_RXDLL:             lnx_cal_sellv_rxdll[i][gen] = val;  break;
	case SELLV_RX_A90_DATACLK:    lnx_cal_sellv_rx_a90_dataclk[i][gen] = val;  break;
	case SELLV_RX_SKEW_EOMCLK:    lnx_cal_sellv_rx_skew_eomclk[i][gen] = val;  break;
	case SELLV_RX_THCLK_SAMPLER:  lnx_cal_sellv_rx_thclk_sampler[i][gen] = val;  break;
	case SELLV_RX_THDRV:          lnx_cal_sellv_rx_thdrv[i][gen] = val;  break;
	case SELLV_RX_CLKTOPVDDL:     lnx_cal_sellv_rx_clktopvddl[i][gen] = val;  break;
	case SELLV_RX_INTPEOM_DLLEOM: lnx_cal_sellv_rx_intpeom_dlleom[i][gen] = val;  break;
	case SELLV_RX_DIV2:           lnx_cal_sellv_rx_div2[i][gen] = val;  break;
	case SELLV_RX_CTLE:           lnx_cal_sellv_rx_ctle[i][gen] = val;  break;
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
	case SELLV_RXINTP:            val = lnx_cal_sellv_rxintp[i][gen];  break;
	case SELLV_RXDLL:             val = lnx_cal_sellv_rxdll[i][gen];  break;
	case SELLV_RX_A90_DATACLK:    val = lnx_cal_sellv_rx_a90_dataclk[i][gen];  break;
	case SELLV_RX_SKEW_EOMCLK:    val = lnx_cal_sellv_rx_skew_eomclk[i][gen];  break;
	case SELLV_RX_THCLK_SAMPLER:  val = lnx_cal_sellv_rx_thclk_sampler[i][gen];  break;
	case SELLV_RX_THDRV:          val = lnx_cal_sellv_rx_thdrv[i][gen];  break;
	case SELLV_RX_CLKTOPVDDL:     val = lnx_cal_sellv_rx_clktopvddl[i][gen];  break;
	case SELLV_RX_INTPEOM_DLLEOM: val = lnx_cal_sellv_rx_intpeom_dlleom[i][gen];  break;
	case SELLV_RX_DIV2:           val = lnx_cal_sellv_rx_div2[i][gen];  break;
	case SELLV_RX_CTLE:           val = lnx_cal_sellv_rx_ctle[i][gen];  break;
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
}

void vdd_cal_set_pass(uint8_t sel, uint8_t val) BANKING_CTRL {
	switch(sel) {
	case SELLV_TXCLK:             lnx_SELLV_TXCLK_PASS_LANE = val;  break;
	case SELLV_TXDATA:            lnx_SELLV_TXDATA_PASS_LANE = val; break;
	case SELLV_RXINTP:            lnx_SELLV_RXINTP_PASS_LANE = val;  break;
	case SELLV_RXDLL:             lnx_SELLV_RXDLL_PASS_LANE = val;  break;
	case SELLV_RX_A90_DATACLK:    lnx_SELLV_RX_A90_DATACLK_PASS_LANE = val;  break;
	case SELLV_RX_SKEW_EOMCLK:    lnx_SELLV_RX_SKEW_EOMCLK_PASS_LANE = val;  break;
	case SELLV_RX_THCLK_SAMPLER:  lnx_SELLV_RX_THCLK_SAMPLER_PASS_LANE = val;  break;
	case SELLV_RX_THDRV:          lnx_SELLV_RX_THDRV_PASS_LANE = val;  break;
	case SELLV_RX_CLKTOPVDDL:     lnx_SELLV_RX_CLKTOPVDDL_PASS_LANE = val;  break;
	case SELLV_RX_INTPEOM_DLLEOM: lnx_SELLV_RX_INTPEOM_DLLEOM_PASS_LANE = val;  break;
	case SELLV_RX_DIV2:           lnx_SELLV_RX_DIV2_PASS_LANE = val;  break;
	case SELLV_RX_CTLE:           lnx_SELLV_RX_CTLE_PASS_LANE = val;  break;
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
		//set_vdd_cal(sel, tag_sellv_xx_default);
		//delay(T_10us); // wait for regulator output to be stable

		//TXDCC_CLK = 1;
		//delay(Tus); //T_15us; The clock period should be between 1uSec to 2uSec
		//TXDCC_CLK = 0;
		//delay(T_p5us);
	}
	//else { //continuous
	//	cal_value = get_vdd_cal(sel);
	//}
		
	while((reg_MCU_DEBUGA_LANE_7_0=0xB5)&&op_done == 0) {

		done_ptn <<= 1;
		set_vdd_cal(sel, cal_value);
		delay(T_10us); // wait minimum 10usec for regulator output to be stable

		TXDCC_CLK = 1; // trigger the comparator on clock rising edge
		//delay(T_p5us);
		delay(Tus);
		TXDCC_CLK = 0;
		delay(T_p5us);

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
void vdd_cal(uint8_t vref, uint16_t regulators) BANKING_CTRL {}
#endif
