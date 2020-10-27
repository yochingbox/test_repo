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
*/

#ifdef SUPPORT_ROM_CODE

#define TRXDCCIN_SEL                reg_TRXDCCIN_SEL_LANE_2_0
#define CAL_VDD_CONTINUOUS_MODE		lnx_CAL_VDD_CONTINUOUS_MODE_EN_LANE 
#define SLEW_CTRL_EN				reg_SLEWRATE_EN_LANE_1_0
#define tag_sellv_xx_default		0x08
#define PU_TX						reg_ANA_PU_TX_LANE
#define PU_RX						reg_ANA_PU_RX_LANE
#define ANA_IDLE					reg_PIN_TX_IDLE_RD_LANE
#define HIVDDR						reg_ANA_TRX_TXDCC_DN_RD_LANE
#define tag_MIN_VALUE				0
#define tag_MAX_VALUE				15
#define tag_MAX_RUN					32
#define SQ_OUT 						reg_ANA_RX_SQ_OUT_RD_LANE
#define rate 						tx_pll_rate 
#define TXDCC_CLK 		 			reg_TRXDCC_CAL_CLK100KHZ_LANE

//TODO : GEN Support

#ifdef SUPPORT_VDD_CAL

void vdd_cal( void ) BANKING_CTRL {
	uint8_t sel;
	set_test_pattern(0); //PRBS7
	for(sel=0; sel<6; sel++) {
		vdd_cal_sel(sel);
	}
	recover_test_pattern();
}

#ifdef _28G_X1
void set_vdd_cal( uint8_t sel, uint8_t val ) BANKING_CTRL {

	switch(sel) {
	case SELLV_TXCLK: 	 reg_SELLV_TXCLK_CH1_3_0 = val;  break;
	case SELLV_TXDATA:   reg_SELLV_TXDATA_CH1_3_0 = val; break;
	case SELLV_TXPRE:    reg_SELLV_TXPRE_CH1_3_0 = val;  break;
	case SELLV_RXEOMCLK: reg_SELLV_RXEOMCLK_CH1_3_0 = val; break;
	case SELLV_RXDATACLK:reg_SELLV_RXDATACLK_CH1_3_0 = val; break; 
	case SELLV_RXSAMPLER:reg_SELLV_RXSAMPELR_CH1_3_0 = val; break;
	}
}

#elif defined _28G_X2_ROM
void set_vdd_cal( uint8_t sel, uint8_t val ) BANKING_CTRL {

	switch(mcuid) {
	case MCU_LANE0:
		switch(sel) {
		case SELLV_TXCLK: 	 reg_SELLV_TXCLK_CH1_3_0 = val;  break;
		case SELLV_TXDATA:   reg_SELLV_TXDATA_CH1_3_0 = val; break;
		case SELLV_TXPRE:    reg_SELLV_TXPRE_CH1_3_0 = val;  break;
		case SELLV_RXEOMCLK: reg_SELLV_RXEOMCLK_CH1_3_0 = val; break;
		case SELLV_RXDATACLK:reg_SELLV_RXDATACLK_CH1_3_0 = val; break; 
		case SELLV_RXSAMPLER:reg_SELLV_RXSAMPELR_CH1_3_0 = val; break;
		}
	break;	
	case MCU_LANE1:
		switch(sel) {
		case SELLV_TXCLK: 	 reg_SELLV_TXCLK_CH2_3_0 = val;  break;
		case SELLV_TXDATA:   reg_SELLV_TXDATA_CH2_3_0 = val; break;
		case SELLV_TXPRE:    reg_SELLV_TXPRE_CH2_3_0 = val;  break;
		case SELLV_RXEOMCLK: reg_SELLV_RXEOMCLK_CH2_3_0 = val; break;
		case SELLV_RXDATACLK:reg_SELLV_RXDATACLK_CH2_3_0 = val; break; 
		case SELLV_RXSAMPLER:reg_SELLV_RXSAMPELR_CH2_3_0 = val; break;
		}
	break;	
	}
}
#else
void set_vdd_cal( uint8_t sel, uint8_t val ) BANKING_CTRL {

	switch(mcuid) {
	case MCU_LANE0:
		switch(sel) {
		case SELLV_TXCLK: 	 cmx_G_SELLV_TXCLK_CH0_7_0 = val;  break;
		case SELLV_TXDATA:   cmx_G_SELLV_TXDATA_CH0_7_0 = val; break;
		case SELLV_TXPRE:    cmx_G_SELLV_TXPRE_CH0_7_0 = val;  break;
		case SELLV_RXEOMCLK: cmx_G_SELLV_RXEOMCLK_CH0_7_0 = val; break;
		case SELLV_RXDATACLK:cmx_G_SELLV_RXDATACLK_CH0_7_0 = val; break; 
		case SELLV_RXSAMPLER:cmx_G_SELLV_RXSAMPELR_CH0_7_0 = val; break;
		}
	break;	
	case MCU_LANE1:
		switch(sel) {
		case SELLV_TXCLK: 	 cmx_G_SELLV_TXCLK_CH1_7_0 = val;  break;
		case SELLV_TXDATA:   cmx_G_SELLV_TXDATA_CH1_7_0 = val; break;
		case SELLV_TXPRE:    cmx_G_SELLV_TXPRE_CH1_7_0 = val;  break;
		case SELLV_RXEOMCLK: cmx_G_SELLV_RXEOMCLK_CH1_7_0 = val; break;
		case SELLV_RXDATACLK:cmx_G_SELLV_RXDATACLK_CH1_7_0 = val; break; 
		case SELLV_RXSAMPLER:cmx_G_SELLV_RXSAMPELR_CH1_7_0 = val; break;
		}
	break;	
	#ifdef _RPLL_X4
	case MCU_LANE2:
		switch(sel) {
		case SELLV_TXCLK: 	 cmx_G_SELLV_TXCLK_CH2_7_0 = val;  break;
		case SELLV_TXDATA:   cmx_G_SELLV_TXDATA_CH2_7_0 = val; break;
		case SELLV_TXPRE:    cmx_G_SELLV_TXPRE_CH2_7_0 = val;  break;
		case SELLV_RXEOMCLK: cmx_G_SELLV_RXEOMCLK_CH2_7_0 = val; break;
		case SELLV_RXDATACLK:cmx_G_SELLV_RXDATACLK_CH2_7_0 = val; break; 
		case SELLV_RXSAMPLER:cmx_G_SELLV_RXSAMPELR_CH2_7_0 = val; break;
		}
	break;
	case MCU_LANE3:
		switch(sel) {
		case SELLV_TXCLK: 	 cmx_G_SELLV_TXCLK_CH3_7_0 = val;  break;
		case SELLV_TXDATA:   cmx_G_SELLV_TXDATA_CH3_7_0 = val; break;
		case SELLV_TXPRE:    cmx_G_SELLV_TXPRE_CH3_7_0 = val;  break;
		case SELLV_RXEOMCLK: cmx_G_SELLV_RXEOMCLK_CH3_7_0 = val; break;
		case SELLV_RXDATACLK:cmx_G_SELLV_RXDATACLK_CH3_7_0 = val; break; 
		case SELLV_RXSAMPLER:cmx_G_SELLV_RXSAMPELR_CH3_7_0 = val; break;
		}
	break;
	#endif
	}

	switch(sel) {
	case SELLV_TXCLK: 	 
		reg_SELLV_TXCLK_CH0_3_0 = cmx_G_SELLV_TXCLK_CH0_7_0;  
		reg_SELLV_TXCLK_CH1_3_0 = cmx_G_SELLV_TXCLK_CH1_7_0;  
		#ifdef _RPLL_X4
		reg_SELLV_TXCLK_CH2_3_0 = cmx_G_SELLV_TXCLK_CH2_7_0;  
		reg_SELLV_TXCLK_CH3_3_0 = cmx_G_SELLV_TXCLK_CH3_7_0;  
		#endif
		break;
	case SELLV_TXDATA:   
		reg_SELLV_TXDATA_CH0_3_0 = cmx_G_SELLV_TXDATA_CH0_7_0;  
		reg_SELLV_TXDATA_CH1_3_0 = cmx_G_SELLV_TXDATA_CH1_7_0;  
		#ifdef _RPLL_X4
		reg_SELLV_TXDATA_CH2_3_0 = cmx_G_SELLV_TXDATA_CH2_7_0;  
		reg_SELLV_TXDATA_CH3_3_0 = cmx_G_SELLV_TXDATA_CH3_7_0;  
		#endif
		break;
	case SELLV_TXPRE:    
		reg_SELLV_TXPRE_CH0_3_0 = cmx_G_SELLV_TXPRE_CH0_7_0;  
		reg_SELLV_TXPRE_CH1_3_0 = cmx_G_SELLV_TXPRE_CH1_7_0;  
		#ifdef _RPLL_X4
		reg_SELLV_TXPRE_CH2_3_0 = cmx_G_SELLV_TXPRE_CH2_7_0;  
		reg_SELLV_TXPRE_CH3_3_0 = cmx_G_SELLV_TXPRE_CH3_7_0;  
		#endif
		break;
	case SELLV_RXEOMCLK: 
		reg_SELLV_RXEOMCLK_CH0_3_0 = cmx_G_SELLV_RXEOMCLK_CH0_7_0;  
		reg_SELLV_RXEOMCLK_CH1_3_0 = cmx_G_SELLV_RXEOMCLK_CH1_7_0;  
		#ifdef _RPLL_X4
		reg_SELLV_RXEOMCLK_CH2_3_0 = cmx_G_SELLV_RXEOMCLK_CH2_7_0;  
		reg_SELLV_RXEOMCLK_CH3_3_0 = cmx_G_SELLV_RXEOMCLK_CH3_7_0;  
		#endif
		break;
	case SELLV_RXDATACLK:
		reg_SELLV_RXDATACLK_CH0_3_0 = cmx_G_SELLV_RXDATACLK_CH0_7_0;  
		reg_SELLV_RXDATACLK_CH1_3_0 = cmx_G_SELLV_RXDATACLK_CH1_7_0;  
		#ifdef _RPLL_X4
		reg_SELLV_RXDATACLK_CH2_3_0 = cmx_G_SELLV_RXDATACLK_CH2_7_0;  
		reg_SELLV_RXDATACLK_CH3_3_0 = cmx_G_SELLV_RXDATACLK_CH3_7_0;  
		#endif
		break; 
	case SELLV_RXSAMPLER:
		reg_SELLV_RXSAMPELR_CH0_3_0 = cmx_G_SELLV_RXSAMPELR_CH0_7_0;  
		reg_SELLV_RXSAMPELR_CH1_3_0 = cmx_G_SELLV_RXSAMPELR_CH1_7_0;  
		#ifdef _RPLL_X4
		reg_SELLV_RXSAMPELR_CH2_3_0 = cmx_G_SELLV_RXSAMPELR_CH2_7_0;  
		reg_SELLV_RXSAMPELR_CH3_3_0 = cmx_G_SELLV_RXSAMPELR_CH3_7_0;  
		#endif
		break;
	}	
}
#endif
/*
uint8_t get_vdd_cal( uint8_t sel ) BANKING_CTRL {
   uint8_t val = 0;
	switch(mcuid) {
	case MCU_LANE0:
		switch(sel) {
		case SELLV_TXCLK: 	  val = reg_SELLV_TXCLK_CH0_3_0 ;  break;
		case SELLV_TXDATA:    val = reg_SELLV_TXDATA_CH0_3_0 ; break;
		case SELLV_TXPRE:     val = reg_SELLV_TXPRE_CH0_3_0 ;  break;
		case SELLV_RXEOMCLK:  val = reg_SELLV_RXEOMCLK_CH0_3_0 ; break;
		case SELLV_RXDATACLK: val = reg_SELLV_RXDATACLK_CH0_3_0 ; break; 
		case SELLV_RXSAMPLER: val = reg_SELLV_RXSAMPELR_CH0_3_0 ; break;
		}
	break;	
	case MCU_LANE1:
		switch(sel) {
		case SELLV_TXCLK: 	 val = reg_SELLV_TXCLK_CH1_3_0 ;  break;
		case SELLV_TXDATA:   val = reg_SELLV_TXDATA_CH1_3_0 ; break;
		case SELLV_TXPRE:    val = reg_SELLV_TXPRE_CH1_3_0 ;  break;
		case SELLV_RXEOMCLK: val = reg_SELLV_RXEOMCLK_CH1_3_0 ; break;
		case SELLV_RXDATACLK:val = reg_SELLV_RXDATACLK_CH1_3_0 ; break; 
		case SELLV_RXSAMPLER:val = reg_SELLV_RXSAMPELR_CH1_3_0 ; break;
		}
	break;	
	case MCU_LANE2:
		switch(sel) {
		case SELLV_TXCLK: 	 val = reg_SELLV_TXCLK_CH2_3_0 ;  break;
		case SELLV_TXDATA:   val = reg_SELLV_TXDATA_CH2_3_0 ; break;
		case SELLV_TXPRE:    val = reg_SELLV_TXPRE_CH2_3_0 ;  break;
		case SELLV_RXEOMCLK: val = reg_SELLV_RXEOMCLK_CH2_3_0 ; break;
		case SELLV_RXDATACLK:val = reg_SELLV_RXDATACLK_CH2_3_0 ; break; 
		case SELLV_RXSAMPLER:val = reg_SELLV_RXSAMPELR_CH2_3_0 ; break;
		}
	break;	
	case MCU_LANE3:
		switch(sel) {
		case SELLV_TXCLK: 	 val = reg_SELLV_TXCLK_CH3_3_0 ;  break;
		case SELLV_TXDATA:   val = reg_SELLV_TXDATA_CH3_3_0 ; break;
		case SELLV_TXPRE:    val = reg_SELLV_TXPRE_CH3_3_0 ;  break;
		case SELLV_RXEOMCLK: val = reg_SELLV_RXEOMCLK_CH3_3_0 ; break;
		case SELLV_RXDATACLK:val = reg_SELLV_RXDATACLK_CH3_3_0 ; break; 
		case SELLV_RXSAMPLER:val = reg_SELLV_RXSAMPELR_CH3_3_0 ; break;
		}
	break;	
	}
	
	return val;
}
*/

void save_vdd_cal(uint8_t sel, uint8_t cont, uint8_t val) BANKING_CTRL {
	uint8_t i, gen;
	
	i = cont;
	gen = gen_tx;
	if(phy_mode == SERDES) gen = 0;
	
	switch(sel) {
	case SELLV_TXCLK:  lnx_cal_sellv_txclk[i][gen] = val;  break;
	case SELLV_TXDATA: lnx_cal_sellv_txdata[i][gen] = val;  break;  
	case SELLV_TXPRE:  lnx_cal_sellv_txpre[i][gen] = val;  break;  
	case SELLV_RXEOMCLK:  lnx_cal_sellv_rxeomclk[i][gen] = val;  break;
	case SELLV_RXDATACLK: lnx_cal_sellv_rxdataclk[i][gen] = val;  break;
	case SELLV_RXSAMPLER: lnx_cal_sellv_rxsampler[i][gen] = val;  break;
	}	
}

uint8_t get_vdd_cal(uint8_t sel) BANKING_CTRL {
	uint8_t i, gen, val;
	
	i = cont_cal_on;
	gen = gen_tx;
	if(phy_mode == SERDES) gen = 0;
	
	switch(sel) {
	case SELLV_TXCLK:  val = lnx_cal_sellv_txclk[i][gen];  break;
	case SELLV_TXDATA: val = lnx_cal_sellv_txdata[i][gen];  break;  
	case SELLV_TXPRE:  val = lnx_cal_sellv_txpre[i][gen];  break;  
	case SELLV_RXEOMCLK:  val = lnx_cal_sellv_rxeomclk[i][gen];  break;
	case SELLV_RXDATACLK: val = lnx_cal_sellv_rxdataclk[i][gen];  break;
	case SELLV_RXSAMPLER: val = lnx_cal_sellv_rxsampler[i][gen];  break;
	}	
	
	return val;
}

void vdd_cal_calen(uint8_t sel, uint8_t val ) BANKING_CTRL {
	switch(sel) {
	case SELLV_TXCLK:  reg_CALEN_VDDA_TXCLK_LANE = val;  break;
	case SELLV_TXDATA: reg_CALEN_VDDA_TXDATA_LANE = val;  break;
	case SELLV_TXPRE:  reg_CALEN_VDDA_TXPRE_LANE = val;  break;
	case SELLV_RXEOMCLK:  reg_CALEN_VDDA_RXEOMCLK_LANE = val; reg_VDDA_RXCLK_HALF_EN_LANE = val; break;
	case SELLV_RXDATACLK: reg_CALEN_VDDA_RXDATACLK_LANE = val; reg_VDDA_RXCLK_HALF_EN_LANE = val; break;
	case SELLV_RXSAMPLER: reg_CALEN_VDDA_RXSAMPLER_LANE = val; reg_VDDA_RXCLK_HALF_EN_LANE = val; break;
	}	
}

void vdd_cal_set_pass(uint8_t sel, uint8_t val ) BANKING_CTRL {
	switch(sel) {
	case SELLV_TXCLK:  lnx_SELLV_TXCLK_PASS_LANE = val;  break;
	case SELLV_TXDATA: lnx_SELLV_TXDATA_PASS_LANE = val;  break;
	case SELLV_TXPRE:  lnx_SELLV_TXPRE_PASS_LANE = val;  break;
	case SELLV_RXEOMCLK:  lnx_SELLV_RXEOMCLK_PASS_LANE = val;  break;
	case SELLV_RXDATACLK: lnx_SELLV_RXDATACLK_PASS_LANE = val;  break;
	case SELLV_RXSAMPLER: lnx_SELLV_RXSAMPLER_PASS_LANE = val;  break;
	}	
}

void vdd_cal_sel( uint8_t sel ) BANKING_CTRL {
	uint8_t cal_value;
	bool pass = 0;

	lnx_VDD_CAL_DONE_LANE = 0;

	if( cmx_VDD_CAL_EXT_EN ) {
		cal_value = get_vdd_cal(sel);
		set_vdd_cal(sel, cal_value);
		lnx_VDD_CAL_DONE_LANE = 1;
		return;
	}

	// Check start condition
	if ( cont_cal_on == 1 ) {
		if( sel<=SELLV_TXPRE && (/*PU_TX == 1 0 ||*/ ANA_IDLE == 1))
			return;
		if( sel>SELLV_TXPRE && (/*PU_RX == 1 0 ||*/ SQ_OUT == 1))
			return;
	}

	PHY_STATUS = ST_VDD_CAL;

//	if ( cont_cal_on == 0 )
//		set_test_pattern(0); //PRBS7

	TRXDCCIN_SEL = 0;
	vdd_cal_calen(sel,1);

	pass = vdd_cal_op(sel);

	vdd_cal_set_pass(sel, pass);
	vdd_cal_calen(sel,0);
//	if ( cont_cal_on == 0 )
//		recover_test_pattern();
	lnx_VDD_CAL_DONE_LANE = 1;

}

bool vdd_cal_op (uint8_t sel ) BANKING_CTRL
{
	uint8_t		op_done, done_ptn, run_cnt, cal_value;

	cal_value = 0;
	delay01(10);

	op_done =	0;
	done_ptn=	0;
	run_cnt=	0;
	if (!cont_cal_on) //one time
	{
		cal_value = tag_sellv_xx_default;
		set_vdd_cal(sel, tag_sellv_xx_default);

		TXDCC_CLK = 1;
		//delay01(5);
		delay01(150);
		TXDCC_CLK = 0;
		//delay01(5);
		delay01(150);
	}
	else { //continuous
		cal_value = get_vdd_cal(sel);
	}

	while (op_done == 0) {

		done_ptn <<= 1;
		set_vdd_cal(sel, cal_value);

		TXDCC_CLK = 1;
		//delay01(5);
		delay01(150);
		TXDCC_CLK = 0;
		//delay01(5);
		delay01(150);

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

	save_vdd_cal(sel, cont_cal_on, cal_value);
	if(!cont_cal_on) save_vdd_cal(sel, 1, cal_value);

	return op_done;

}

#else
void vdd_cal( void ) BANKING_CTRL {}
#endif

#endif //SUPPORT_ROM_CODE
