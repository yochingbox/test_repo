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
/*#ifdef USE_BANKING
#pragma codeseg BANK0
#pragma constseg BANK0
#endif*/

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
#ifdef ROM_REPLACEMENT

#if 0
#ifdef SUPPORT_VDD_CAL

bool vdd_cal_op_01 (uint8_t sel );

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
#define TXDCC_CLK 		 			reg_TRXDCC_CAL_CLK100KHZ_LANE




#define TXRX_IMPCALOUT          reg_ANA_CMN_IMPCAL_OUT_RD
#define TXRXIMP_CKCAL           reg_TRX_IMPCAL_CLK

#define TX_IMPCAL_EN			reg_TXIMPCAL_EN_LANE
#define TX_IMPCAL_SIDE			reg_TXIMPCAL_SIDE_LANE
#define TXIMPCAL_SEL_LANE		reg_TXIMPCAL_SEL_LANE_1_0
#define TX_IMPCAL_BOT			reg_TXIMPCAL_BOT_LANE
#define RCALP_2ND_EN			reg_RCAL_2ND_EN_LANE
#define TXIMP_TUNEN_TOP			reg_TXIMP_TUNEN_TOP_LANE_5_0
#define TXIMP_TUNEP_TOP			reg_TXIMP_TUNEP_TOP_LANE_5_0
#define TXIMP_TUNEN_MID			reg_TXIMP_TUNEN_MID_LANE_5_0
#define TXIMP_TUNEP_MID			reg_TXIMP_TUNEP_MID_LANE_5_0
#define TXIMP_TUNEN_BOT			reg_TXIMP_TUNEN_BOT_LANE_5_0
#define TXIMP_TUNEP_BOT			reg_TXIMP_TUNEP_BOT_LANE_5_0

#define TX_VREF_TXDRV_SEL		reg_TX_VREF_TXDRV_SEL_LANE_2_0
#define TXIMPCAL_DRVAMP_2_0		reg_TXIMPCAL_DRVAMP_2_0
#define IMPCAL_OUT_REQ			reg_ANA_CMN_IMPCAL_OUT_REQ

#define TXIMP_TUNE_MAX			0x3f
#define TXIMP_TUNE_MIN			0

enum {
BOT,
MID,
TOP,
};

enum {
NMOS,
PMOS,
};

__code static uint8_t tximp_sel_tb[] = {0, 2, 3};


#define RXDCC_CMP_OUT                    reg_ANA_TRX_TXDCC_DN_RD_LANE
#define RXDCC_CAL_EN                     reg_RXDCC_CAL_EN_LANE
#define RXDCC_EN_DLLCLK                  reg_RXDCC_EN_DLLCLK_LANE
#define RXDCC_EN_DATACLK                 reg_RXDCC_EN_DATACLK_LANE
#define RXDCC_EN_EOMCLK                  reg_RXDCC_EN_EOMCLK_LANE
#define TRXDCCIN_SEL                     reg_TRXDCCIN_SEL_LANE_2_0
#define RXDCC_HG_DLLCLK                  reg_RXDCC_HG_DLLCLK_LANE
#define RXDCC_HG_DATACLK                 reg_RXDCC_HG_DATACLK_LANE
#define RXDCC_HG_EOMCLK                  reg_RXDCC_HG_EOMCLK_LANE
#define RXDCC_DLLCLK                     reg_RXDCC_DLLCLK_LANE_5_0
#define RXDCC_DATACLK                    reg_RXDCC_DATACLK_LANE_5_0
#define RXDCC_EOMCLK                     reg_RXDCC_EOMCLK_LANE_5_0
#define EOM_CLK_EN                       reg_EOM_CLK_EN_LANE
#define RXDCC_DLL_LOOP_MAX               64
#define RXDCC_DATA_LOOP_MAX              64
#define RXDCC_EOM_LOOP_MAX               64
#define RXDCC_DCLKMP_CLK                 reg_TRXDCC_CAL_CLK100KHZ_LANE
#define RXDCC_DAC_SYNC_CLK               reg_RXDCC_DAC_SYNC_CLK_LANE
#define TXDCC_DN                         reg_ANA_TRX_TXDCC_DN_RD_LANE
#define TXDCC_CLK                        reg_TRXDCC_CAL_CLK100KHZ_LANE
#define TXDCC_EN                         reg_TXDCC_EN_LANE
#define TXDCCCAL_EN                      reg_TXDCCCAL_EN_LANE
#define TXDCC_HG                         reg_TXDCC_HG_LANE
#define TXDCC_CNT                        reg_TXDCC_CNT_LANE_5_0
#define TXDCC_LOOP_MAX                   64
#define TXDCC_PDIV_LOOP_MAX              64
#define TXDCCCAL_PDIV_EN                 reg_TXDCCCAL_PDIV_EN_LANE
#define TXDCC_PDIV_CNT                   reg_TXDCCCAL_PDIV_CNT_LANE_5_0
#define TX_SPEED_DIV                     reg_TX_SPEED_DIV_LANE_2_0
#define RX_SPEED_DIV                     reg_RX_SPEED_DIV_LANE_2_0

void vdd_cal_01( void) {
	uint8_t sel;
	for(sel=0; sel<6; sel++) {
		vdd_cal_sel_01(sel);
	}
}

void set_vdd_cal_01( uint8_t sel, uint8_t val ) {

	switch(mcuid) {
	case MCU_LANE0:
		switch(sel) {
		case SELLV_TXCLK: 	 reg_SELLV_TXCLK_CH0_3_0 = val;  break;
		case SELLV_TXDATA:   reg_SELLV_TXDATA_CH0_3_0 = val; break;
		case SELLV_TXPRE:    reg_SELLV_TXPRE_CH0_3_0 = val;  break;
		case SELLV_RXEOMCLK: reg_SELLV_RXEOMCLK_CH0_3_0 = val; break;
		case SELLV_RXDATACLK:reg_SELLV_RXDATACLK_CH0_3_0 = val; break;
		case SELLV_RXSAMPLER:reg_SELLV_RXSAMPELR_CH0_3_0 = val; break;
		}
	break;
	case MCU_LANE1:
		switch(sel) {
		case SELLV_TXCLK: 	 reg_SELLV_TXCLK_CH1_3_0 = val;  break;
		case SELLV_TXDATA:   reg_SELLV_TXDATA_CH1_3_0 = val; break;
		case SELLV_TXPRE:    reg_SELLV_TXPRE_CH1_3_0 = val;  break;
		case SELLV_RXEOMCLK: reg_SELLV_RXEOMCLK_CH1_3_0 = val; break;
		case SELLV_RXDATACLK:reg_SELLV_RXDATACLK_CH1_3_0 = val; break;
		case SELLV_RXSAMPLER:reg_SELLV_RXSAMPELR_CH1_3_0 = val; break;
		}
	break;
	case MCU_LANE2:
		switch(sel) {
		case SELLV_TXCLK: 	 reg_SELLV_TXCLK_CH2_3_0 = val;  break;
		case SELLV_TXDATA:   reg_SELLV_TXDATA_CH2_3_0 = val; break;
		case SELLV_TXPRE:    reg_SELLV_TXPRE_CH2_3_0 = val;  break;
		case SELLV_RXEOMCLK: reg_SELLV_RXEOMCLK_CH2_3_0 = val; break;
		case SELLV_RXDATACLK:reg_SELLV_RXDATACLK_CH2_3_0 = val; break;
		case SELLV_RXSAMPLER:reg_SELLV_RXSAMPELR_CH2_3_0 = val; break;
		}
	break;
	case MCU_LANE3:
		switch(sel) {
		case SELLV_TXCLK: 	 reg_SELLV_TXCLK_CH3_3_0 = val;  break;
		case SELLV_TXDATA:   reg_SELLV_TXDATA_CH3_3_0 = val; break;
		case SELLV_TXPRE:    reg_SELLV_TXPRE_CH3_3_0 = val;  break;
		case SELLV_RXEOMCLK: reg_SELLV_RXEOMCLK_CH3_3_0 = val; break;
		case SELLV_RXDATACLK:reg_SELLV_RXDATACLK_CH3_3_0 = val; break;
		case SELLV_RXSAMPLER:reg_SELLV_RXSAMPELR_CH3_3_0 = val; break;
		}
	break;
	}
}
/*
uint8_t get_vdd_cal_01( uint8_t sel ) BANKING_CTRL {
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

void save_vdd_cal_01(uint8_t sel, uint8_t cont, uint8_t val) {
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

uint8_t get_vdd_cal_01(uint8_t sel) {
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

void vdd_cal_calen_01(uint8_t sel, uint8_t val ) {
	//TRXDCCIN_SEL = sel;
	switch(sel) {
	case SELLV_TXCLK:  reg_CALEN_VDDA_TXCLK_LANE = val;  break;
	case SELLV_TXDATA: reg_CALEN_VDDA_TXDATA_LANE = val;  break;
	case SELLV_TXPRE:  reg_CALEN_VDDA_TXPRE_LANE = val;  break;
	case SELLV_RXEOMCLK:  reg_CALEN_VDDA_RXEOMCLK_LANE = val; reg_VDDA_RXCLK_HALF_EN_LANE = val; break;
	case SELLV_RXDATACLK: reg_CALEN_VDDA_RXDATACLK_LANE = val; reg_VDDA_RXCLK_HALF_EN_LANE = val; break;
	case SELLV_RXSAMPLER: reg_CALEN_VDDA_RXSAMPLER_LANE = val; reg_VDDA_RXCLK_HALF_EN_LANE = val; break;
	}
}

void vdd_cal_set_pass_01(uint8_t sel, uint8_t val ) {
	switch(sel) {
	case SELLV_TXCLK:  lnx_SELLV_TXCLK_PASS_LANE = val;  break;
	case SELLV_TXDATA: lnx_SELLV_TXDATA_PASS_LANE = val;  break;
	case SELLV_TXPRE:  lnx_SELLV_TXPRE_PASS_LANE = val;  break;
	//case SELLV_RXEOMCLK:  lnx_SELLV_RXEOMCLK_PASS_LANE = val;  break;
	case SELLV_RXDATACLK: lnx_SELLV_RXDATACLK_PASS_LANE = val;  break;
	case SELLV_RXSAMPLER: lnx_SELLV_RXSAMPLER_PASS_LANE = val;  break;
	}
}

void vdd_cal_sel_01( uint8_t sel ) {
	uint8_t cal_value;
	bool pass = 0;

	lnx_VDD_CAL_DONE_LANE = 0;

	if( cmx_VDD_CAL_EXT_EN ) {
		cal_value = get_vdd_cal_01(sel);
		set_vdd_cal_01(sel, cal_value);
		lnx_VDD_CAL_DONE_LANE = 1;
		return;
	}

	if( sel<=SELLV_TXPRE && (/*PU_TX == 1 0 ||*/ ANA_IDLE == 1)) return;
	if( sel>SELLV_TXPRE && (/*PU_RX == 1 0 ||*/ SQ_OUT == 1)) return;

	PHY_STATUS = ST_VDD_CAL;
	lnx_VDD_CAL_DONE_LANE = 1;

	if(cont_cal_on == 0)
		set_test_pattern(0); //PRBS7

	TRXDCCIN_SEL = 0;
	vdd_cal_calen_01(sel,1);

	pass = vdd_cal_op_01(sel);

	vdd_cal_set_pass_01(sel, pass);
	vdd_cal_calen_01(sel,0);

	if(cont_cal_on == 0)
		recover_test_pattern();
	lnx_VDD_CAL_DONE_LANE = 1;

}

bool vdd_cal_op_01 (uint8_t sel )
{
	uint8_t		op_done, done_ptn, run_cnt, cal_value;

	cal_value = 0;
	delay(Tus);

	op_done =	0;
	done_ptn=	0;
	run_cnt=	0;
	if (!cont_cal_on) //one time
	{
		cal_value = tag_sellv_xx_default;
		set_vdd_cal_01(sel, tag_sellv_xx_default);

		TXDCC_CLK = 1;
		//delay(T_p5us);
		delay(T_15us);
		TXDCC_CLK = 0;
		//delay(T_p5us);
		delay(T_15us);
	}
	else { //continuous
		cal_value = get_vdd_cal_01(sel);
	}

	while (op_done == 0) {

		done_ptn <<= 1;
		set_vdd_cal_01(sel, cal_value);

		TXDCC_CLK = 1;
		//delay(T_p5us);
		delay(T_15us);
		TXDCC_CLK = 0;
		//delay(T_p5us);
		delay(T_15us);

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

	save_vdd_cal_01(sel, cont_cal_on, cal_value);
	if(!cont_cal_on) save_vdd_cal_01(sel, 1, cal_value);

	return op_done;

}

#else
void vdd_cal_01( void ) {}
#endif
#endif

#if 0
uint8_t static toggle_impcal_out_req( void ){
	uint8_t comp_out;

	comp_out = 0;
	TXRXIMP_CKCAL = 1;
	delay(T_5us); //resets analog comparator
	TXRXIMP_CKCAL = 0;
	delay(T_2us); //analog settling time

	IMPCAL_OUT_REQ = 1;
	IMPCAL_OUT_REQ = 0;

	if(TXRX_IMPCALOUT) comp_out = 1;

	return comp_out;
}

void static set_tximp(uint8_t inx, uint8_t p, uint8_t val){

	if(p==NMOS) {
		switch(inx) {
		case TOP: TXIMP_TUNEN_TOP = val; break;
		case MID: TXIMP_TUNEN_MID = val; break;
		case BOT: TXIMP_TUNEN_BOT = val; break;
		}
	}
	else {
		switch(inx) {
		case TOP: TXIMP_TUNEP_TOP = val; break;
		case MID: TXIMP_TUNEP_MID = val; break;
		case BOT: TXIMP_TUNEP_BOT = val; break;
		}
	}
}

void static save_tximp(uint8_t inx, uint8_t p, uint8_t val){

	if(p==NMOS) {
		switch(inx) {
		case TOP: lnx_CAL_TXIMP_TUNEN_TOP_LANE_7_0 = val; break;
		case MID: lnx_CAL_TXIMP_TUNEN_MID_LANE_7_0 = val; break;
		case BOT: lnx_CAL_TXIMP_TUNEN_BOT_LANE_7_0 = val; break;
		}
	}
	else {
		switch(inx) {
		case TOP: lnx_CAL_TXIMP_TUNEP_TOP_LANE_7_0 = val; break;
		case MID: lnx_CAL_TXIMP_TUNEP_MID_LANE_7_0 = val; break;
		case BOT: lnx_CAL_TXIMP_TUNEP_BOT_LANE_7_0 = val; break;
		}
	}
}

void tximp_cal_01( void ) {
	uint8_t i, cnt, tximp_inx;
	uint8_t min_reached_n, max_reached_n, min_reached_p, max_reached_p;
	uint8_t tximp_val, tximp_pre;
	uint8_t sum;
	bool ana_tximpcal_out, pre_out;

	lnx_TXIMP_CAL_DONE_LANE = 0;

	if( cmx_TXIMP_CAL_EXT_EN == 1 ) {
		TXIMP_TUNEN_TOP = lnx_CAL_TXIMP_TUNEN_TOP_LANE_7_0;
		TXIMP_TUNEP_TOP = lnx_CAL_TXIMP_TUNEP_TOP_LANE_7_0;
		TXIMP_TUNEN_MID = lnx_CAL_TXIMP_TUNEN_MID_LANE_7_0;
		TXIMP_TUNEP_MID = lnx_CAL_TXIMP_TUNEP_MID_LANE_7_0;
		TXIMP_TUNEN_BOT = lnx_CAL_TXIMP_TUNEN_BOT_LANE_7_0;
		TXIMP_TUNEP_BOT = lnx_CAL_TXIMP_TUNEP_BOT_LANE_7_0;
		lnx_TXIMP_CAL_DONE_LANE = 1;
		return;
	}

	PHY_STATUS = ST_TXIMP_CAL;

	lnx_TXIMP_CAL_PASS_LANE = 0;
	lnx_TXIMP_CAL_TIMEOUT_LANE = 0;

	//Turn on phytest with 4T pattern
	set_test_pattern(1);

	TXIMPCAL_DRVAMP_2_0 = TX_VREF_TXDRV_SEL;

	delay(T_10us); //10us delay between reg_TXIMPCAL_EN and reg_TX_IMPCAL_EN_LANE

	TX_IMPCAL_EN = 1;

	//for (tximp_inx=BOT; tximp_inx<=TOP; tximp_inx++) {
	for (tximp_inx=TOP; tximp_inx<=TOP; tximp_inx++) {
	//tximp_inx = TOP;
	TXIMPCAL_SEL_LANE = tximp_sel_tb[tximp_inx];

	//Step 1: NMOS branch
	TX_IMPCAL_BOT = 1;

	sum = 0;

	for(i=0; i<2; i++) {
		if(i==1) TX_IMPCAL_SIDE = 1;
		else TX_IMPCAL_SIDE = 0;

		tximp_val = 8;
		set_tximp( tximp_inx, NMOS, 0x08);

		cnt = 0;

		pre_out = toggle_impcal_out_req();

		min_reached_n = 0;
		max_reached_n = 0;

		do {
			ana_tximpcal_out = toggle_impcal_out_req();

			tximp_pre = tximp_val;
			if ( ana_tximpcal_out != pre_out ) break; //exit at first toggle

			if( tximp_val == TXIMP_TUNE_MIN) min_reached_n += 1;
			else if( tximp_val == TXIMP_TUNE_MAX) max_reached_n += 1;

			if( ana_tximpcal_out == 0 ) {
				max_reached_n = 0;
				if( min_reached_n == 0) tximp_val--; //decrement DAC value with underflow protection
				else if ( min_reached_n == 2 ) {
					//lnx_TXIMP_CAL_TIMEOUT_LANE = 1;
					break; //exit calibration when DAC value is 0x0 with analog result at 0 for 2 consecutive samples
				}
			}
			else {
				min_reached_n = 0;
				if( max_reached_n == 0) tximp_val++; //increment DAC value with overflow protection
				else if ( max_reached_n == 2 ) {
					//lnx_TXIMP_CAL_TIMEOUT_LANE = 1;
					break; //exit calibration when DAC value is 0xf with analog result at 1 for 2 consecutive samples
				}
			}

			set_tximp( tximp_inx, NMOS, tximp_val);

		} while( (cnt++<128) | (cmx_TXIMP_CAL_TIMEOUT_DIS == 1) ); //timeout after 16 steps

		if( cnt >= 128 ) {
			lnx_TXIMP_CAL_TIMEOUT_LANE = 1;
		}
		else if( ana_tximpcal_out == 1 && max_reached_n == 0 ) { //previously toggled from 0->1

			tximp_val++;
			set_tximp( tximp_inx, NMOS, tximp_val);
		}

		tximp_val = max((int8_t)tximp_pre, (int8_t)tximp_val);
		sum += tximp_val;

	} //end for loop

	tximp_val = (sum+1)>>1;	//round
	//save_tximp(tximp_inx, NMOS, tximp_val);
	//set_tximp( tximp_inx, NMOS, tximp_val);
	for (i=BOT; i<=TOP; i++)
	{
		save_tximp(i, NMOS, tximp_val);
		set_tximp(i, NMOS, tximp_val);
	}

	//Step 2: PMOS branch
	TX_IMPCAL_BOT = 0;

	sum = 0;

	for(i=0; i<4; i++) {
		if(i==1|i==3) TX_IMPCAL_SIDE = 1; //1'b1 during iteration i = 1, 3
		else TX_IMPCAL_SIDE = 0; //1'b0 during iteration i = 0, 2

		if(i==2|i==3) RCALP_2ND_EN = 1; //1'b1 during iteration i = 2, 3
		else RCALP_2ND_EN = 0; //1'b0 during iteration i = 0, 1

		tximp_val = 0x37;
		set_tximp( tximp_inx, PMOS, 0x37);

		cnt = 0;
		pre_out = toggle_impcal_out_req();

		min_reached_p = 0;
		max_reached_p = 0;

		do {
			ana_tximpcal_out = toggle_impcal_out_req();

			tximp_pre = tximp_val;
			if ( ana_tximpcal_out != pre_out ) break; //exit at first toggle

			if( tximp_val == TXIMP_TUNE_MIN) min_reached_p += 1;
			else if( tximp_val == TXIMP_TUNE_MAX) max_reached_p += 1;

			if( ana_tximpcal_out == 0 ) {
				max_reached_p = 0;
				if( min_reached_p == 0) tximp_val--; //decrement DAC value with underflow protection
				else if ( min_reached_p == 2 ) break; //exit calibration when DAC value is 0x0 with analog result at 0 for 2 consecutive samples
			}
			else {
				min_reached_p = 0;
				if( max_reached_p == 0) tximp_val++; //increment DAC value with overflow protection
				else if ( max_reached_p == 2 ) break; //exit calibration when DAC value is 0xf with analog result at 1 for 2 consecutive samples
			}

			set_tximp( tximp_inx, PMOS, tximp_val);

		} while( (cnt++<128) | (cmx_TXIMP_CAL_TIMEOUT_DIS == 1) ); //timeout after 16 steps

		if( cnt >= 128 ) {
			lnx_TXIMP_CAL_TIMEOUT_LANE = 1;
		}
		else if( ana_tximpcal_out == 0 && min_reached_p == 0 ) { //previously toggled from 1->0
			tximp_val--;
			set_tximp( tximp_inx, PMOS, tximp_val);
		}

		tximp_val = min((int8_t)tximp_pre, (int8_t)tximp_val);
		sum += tximp_val;

	} //end for loop

	tximp_val = (sum+2)>>2;	//round
	//save_tximp(tximp_inx, PMOS, tximp_val);
	//set_tximp( tximp_inx, PMOS, tximp_val);
	for (i=BOT; i<=TOP; i++)
	{
		save_tximp(i, PMOS, tximp_val);
		set_tximp( i, PMOS, tximp_val);
	}
	} //for

	if( lnx_TXIMP_CAL_TIMEOUT_LANE == 0 ) {
		lnx_TXIMP_CAL_PASS_LANE = 1;
	}

	TX_IMPCAL_BOT = 0;
	TX_IMPCAL_SIDE = 0;
	RCALP_2ND_EN = 0;
	TX_IMPCAL_EN = 0;

	recover_test_pattern();

	lnx_TXIMP_CAL_DONE_LANE = 1;
}
#endif


int16_t read_tsen_01(void) {
	int16_t dat;

	// initial ANA_TSEN_ADC_RDY time is 2~6mS/12mS.

	while(reg_TSEN_ADC_RDY==0);
	reg_TSEN_ADC_RD_REQ = 1;

	if( reg_TSEN_ADC_DATA_9_0_b1 & 0x02 ) {
		dat = (0xfc00 | (reg_TSEN_ADC_DATA_9_0_b1<<8) | reg_TSEN_ADC_DATA_9_0_b0);
	}
	else {
		dat = (reg_TSEN_ADC_DATA_9_0_b1<<8) | reg_TSEN_ADC_DATA_9_0_b0;
	}

	if(dat==0&& reg_TSEN_ADC_RDY==0) dat = -234; //return 0xfef0; //2f0=18'

	//reg_TSEN_ADC_RD_REQ = 0; //don't disable!
#ifdef _LAB
	//if(PHY_STATUS>ST_POSEQ) {
	//	DBG_Printf("\r\ntemp=%d", dat);
	//}
#endif
	return dat;
}

#if 0
extern void rxdcc_clk_toggle(void) BANKING_CTRL;

void rxdcc_data_cal_01(void) {

  int8_t  dcc_cnt;
  uint8_t latched_RXDCC_DN;
  uint8_t int_dn, int_up;
  uint8_t dir;
  uint8_t time_out_cnt;
  uint8_t in_power_on;
  uint8_t in_cont_mode;
  uint8_t ext_en;
  uint8_t hg_set;

  PHY_STATUS = ST_RXDCC_DATA_CAL;

  //lnx_RXDCC_DATA_CAL_PASS_LANE = 0;
  lnx_RXDCC_DATA_CAL_DONE_LANE = 0;

  in_cont_mode = 0;
  in_power_on = 0;
  time_out_cnt = 0;
  dir = 0;
  hg_set = 0;

  //identify which kind of calibration is triggered
  if (cmx_CAL_DONE == 0) {                        //power-on calibration
    ext_en = cmx_EXT_FORCE_CAL_DONE || cmx_RXDCC_DATA_CAL_EXT_EN;
    if (ext_en) {                                     //use ext value for power-on, bypass calibration
      dcc_cnt = lnx_cal_rxdcc_data[PWR][gen_rx];
      RXDCC_HG_DATACLK = lnx_cal_rxdcc_data_hg[gen_rx];          //load the HG setting.
    }
    else {                                          //use normal power-on calibration
      RXDCC_CAL_EN = 1;
      TRXDCCIN_SEL = 1;
      RXDCC_HG_DATACLK = 0;
      dcc_cnt = 0x20;
      in_power_on = 1;
    }
    RXDCC_EN_DATACLK = 1;                           //enable RXDCC_EN during power-on, never deassert
    rxdcc_data_step_cnt = RXDCC_DATA_CAL_STEP_SIZE;      //for power-on (inc. EXT_EN), reset fraction code to middle
    lnx_RXDCC_DATA_CAL_PASS_LANE = 0;
  } //cmx_CAL_DONE == 0
  else if (LOAD_CAL_ON) {                         //not power-on. Speed-change, load result for current rate
                                                  //either load power-on, or previous cont cal result for target speed
    dcc_cnt = lnx_cal_rxdcc_data[PWR + cmx_RXDCC_DATA_CAL_CONT_CUR_LOAD_EN][rx_pll_rate];
    rxdcc_data_step_cnt = RXDCC_DATA_CAL_STEP_SIZE;     //when speed change, restore the fracition code to middle
    RXDCC_HG_DATACLK = lnx_cal_rxdcc_data_hg[gen_rx];          //load the HG setting.
  }
  else if (cmx_RXDCC_DATA_CAL_CONT_EN) {  //not power-on. Continious mode, only performed when SPEED_DIV = 0
    RXDCC_CAL_EN = 1;
    TRXDCCIN_SEL = 1;
    dcc_cnt = lnx_cal_rxdcc_data[CONT][gen_rx];    //always load cont result
    in_cont_mode = 1;                                  //when continious mode, use fraction code
  }
  else {                                               //Continious mode, but disabled, or SPEED_DIV != 0
    lnx_RXDCC_DATA_CAL_DONE_LANE = 1;
    return;
  }

//main loop
  do {
    RXDCC_DATACLK = dcc_cnt;
    rxdcc_clk_toggle();

    time_out_cnt ++;
    if( RXDCC_CAL_EN == 0 ) break;                                      //either LOAD, or EXT_EN in power-on
    if( cmx_CAL_DONE == 0 && RX_SPEED_DIV > 3 ) break;                  //power-on, but SPEED_DIV = 1xx, skip and keep using init code (0x20)
    if( cmx_CAL_DONE == 1 && time_out_cnt > 1) break;                   //continious mode, has ran 1 round
    if( cmx_CAL_DONE == 0 && is_toggle_pat( dir, time_out_cnt - 1 ))  { lnx_RXDCC_DATA_CAL_PASS_LANE = 1;  break; }     //power-on, toggled
    if( cmx_CAL_DONE == 0 && time_out_cnt >= RXDCC_DATA_LOOP_MAX && cmx_RXDCC_DATA_CAL_TIMEOUT_DIS == 0) break; //power-on, reached maximum rounds

    latched_RXDCC_DN = TXDCC_DN;   //RXDCC shares TXDCC up/dn
    int_up = 0;
    int_dn = 0;

    if (in_cont_mode) { //continious calibration
      if (latched_RXDCC_DN) {rxdcc_data_step_cnt--;}
      else                  {rxdcc_data_step_cnt++;}

      if( rxdcc_data_step_cnt == 0) {
        int_up = 0;
        int_dn = 1;
        rxdcc_data_step_cnt = RXDCC_DATA_CAL_STEP_SIZE;  //after up/dn triggered, reset fraction code to middle
      }
      else if(rxdcc_data_step_cnt>=(RXDCC_DATA_CAL_STEP_SIZE<<1)) {
        int_up = 1;
        int_dn = 0;
        rxdcc_data_step_cnt = RXDCC_DATA_CAL_STEP_SIZE;  //after up/dn triggered, reset fraction code to middle
      }
    }
    else {              //power-on calibration
      if (latched_RXDCC_DN) {int_up = 0; int_dn = 1;}
      else                  {int_up = 1; int_dn = 0;}
    }

    if (int_dn == 1) {
      dcc_cnt = sign_abs_dn(dcc_cnt);
    }
    else if (int_up == 1) {
      dir |= 1;
      dcc_cnt = sign_abs_up(dcc_cnt);
    }
    dir<<=1;
    dir = dir & 0x3f;


    //In power-on calibration, set HG to 1 if the code reached pre-set boundry.
    //don't set it back inside this loop. Set it back when calibration finishes.
    if (in_power_on && (dcc_cnt & 0x1f == 24) && (hg_set == 0)){
      RXDCC_HG_DATACLK = 1;
      hg_set = 1;
      dcc_cnt = 0x20;
      time_out_cnt = 0;
    }
  } while (1);

  //save calibration result
  if (cmx_CAL_DONE == 0) {                            //if power-on calibration
    lnx_cal_rxdcc_data[PWR][gen_rx] = dcc_cnt;       //save to power-on result
    lnx_cal_rxdcc_data_hg[gen_rx] = RXDCC_HG_DATACLK; //save the HG setting for current rate, will be loaded by continious mode
  }

  lnx_cal_rxdcc_data[CONT][gen_rx] = dcc_cnt;     //no matter power-on or LOAD or continious, need to save to [CONT]
                                                      //for next continious mode to read
  RXDCC_CAL_EN = 0;
  lnx_RXDCC_DATA_CAL_DONE_LANE = 1;

} //rxdcc_data_cal(void)
#endif

#endif
