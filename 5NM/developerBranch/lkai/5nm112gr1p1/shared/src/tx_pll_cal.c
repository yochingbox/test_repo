/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file pll_cal.c
* \purpose LCPLL calibration
* \History
*	10/15/2015 Heejeong Ryu		Initial 
*/

#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK1
#endif

/**
* \module PLL Calibration
*
* \param 
*    <NONE> 
* \return
*    <NONE> 
* \note
*    Input: PLL_TS_VCOAMP_VTH_SEL[3:0], FBDIV_CAL 
*    Output: PLL_TS_LCCAP_MSB, PLL_TS_LCCAP_LSB
*/

#define PULUP				reg_PULUP	// TODO - move to common
#define PLL_TS_SHRTR			reg_PLL_TS_SHRTR_PLL_LANE
#define TX_LD_CAL_DATA			reg_ANA_PLL_TS_LD_CAL_DATA_LANE
#define PLL_TS_LCCAP_LSB		reg_PLL_TS_LCCAP_LSB_LANE_5_0
#define PLL_TS_LCCAP_ULSB		reg_PLL_TS_LCCAP_ULSB_LANE_3_0
#define TX_FBC_PLLCAL_CNT_READY		reg_PLL_TS_FBC_PLLCAL_CNT_READY_LANE
#define TX_FBC_CNT_START		reg_PLL_TS_FBC_CNT_START_LANE
#define PLL_TS_LCCAP_MSB_MAX_index	10 //msb 2 bits are dummy
#define PLL_TS_LCCAP_MSB_MIN_index	0
#define PLL_TS_LCCAP_LSB_MAX_index	6
#define PLL_TS_LCCAP_LSB_MIN		0x0
#define PLL_TS_LCCAP_ULSB_MIN		0x0

#define TX_Ftarget			lnx_PLL_TS_SPEED_THRESH_LANE_15_0

#define Ttimeout_timer			100000 //uS //10000
#define TIMEOUT_TX_PLL_AMP		1600	//1600us
#define TIMEOUT_TX_PLL_CNT_READY	100
#define TX_TH_AMP			lnx_TS_VCOAMP_VTH_AMP_LANE_7_0
#define TX_TH_NORMAL			lnx_TS_VCOAMP_VTH_NORMAL_LANE_7_0
#define Tpulup				Tus//T_2us//0.5u~4u
#define Tshrtr				T_8us //T_4us, T_2us, T_8us, T_16us
#define PLL_TS_PLLAMPCAL_EN		reg_PLL_TS_PLLAMPCAL_EN_LANE
#define PLL_TS_PLLCAL_EN		reg_PLL_TS_PLLCAL_EN_LANE
#define PLL_TS_VCOAMP_VTH_SEL		reg_PLL_TS_VCOAMP_VTH_SEL_LANE_3_0

__code uint16_t ts_lccap_msb_thermo_tb[] = {
  0x0000, //0000
  0x0001, //0001
  0x0003, //0011
  0x0007, //0111
  0x000f, //0_1111
  0x001f, //1_1111
  0x003f, //11_1111
  0x007f, //111_1111
  0x00ff, //1111_1111
  0x01ff, //1_1111_1111
  0x03ff, //11_1111_1111
  0x07ff, //111_1111_1111
  0x0fff  //1111_1111_1111
};

#ifdef NEED_REMAP_REGS
void ts_pll_cal( void ) BANKING_CTRL {}
void check_ts_pll_lock(void) BANKING_CTRL {}
#else
void ts_pll_cal( void ) BANKING_CTRL {

	uint8_t lccap_msb_index, lccap_lsb_index, save_TX_FBDIV_h, save_TX_FBDIV_l, cnt_rdy, save_TX_FBCK_SEL;
	uint16_t Fmea, temp;

	PHY_STATUS =  ST_TX_PLL_CAL;
	
	if( cmx_TX_PLL_CAL_EXT_EN )
	{
		reg_PLL_TS_RESET_ANA_LANE = 0;		
		lnx_TX_PLL_CAL_DONE_LANE = 1;
		return;
	}

	if(cmx_TX_PLL_CAL_TIMEOUT_DIS==0) {
		timeout_start((uint16_t)Ttimeout_timer); 
	}	
	
	save_TX_FBDIV_h = reg_PLL_TS_FBDIV_LANE_9_8;
	save_TX_FBDIV_l = reg_PLL_TS_FBDIV_LANE_7_0;
	save_TX_FBCK_SEL = reg_ANA_PLL_TS_FBCK_SEL_LANE;

	//lnx_PLL_TS_SPEED_THRESH_LANE_15_0 = 0x1f8a; //temp
	ts_pll_cal_init();
	lccap_msb_index = 10;
	lccap_lsb_index = 6;
	
	// -- MSB
	do {	

		delay(Tpfreq0); //3us
		ts_pll_amp_cal();	
		ts_pllvdda_cal(0x0f);
		
		timeout_start(20000); //20mS
		cnt_rdy = TX_FBC_PLLCAL_CNT_READY;
		TX_FBC_CNT_START = 1; 
        if( cnt_rdy ) while((reg_MCU_DEBUGA_LANE_7_0=0x96)&&TX_FBC_PLLCAL_CNT_READY && !timeout);
		while((reg_MCU_DEBUGA_LANE_7_0=0x97)&&!TX_FBC_PLLCAL_CNT_READY && !timeout);
		TX_FBC_CNT_START = 0; 				
		//if(timeout) continue; //break; //HR: Fei recommanded: if FW cannot get fbc_cnt_ready with timeout, FW keep decrease CAP value.
		Fmea = reg_PLL_TS_FBC_PLLCAL_CNT_LANE_15_0;
		
		if( Fmea == TX_Ftarget ) goto pllcal_stop; 
		else if(Fmea < TX_Ftarget ) {
			if( lccap_msb_index == PLL_TS_LCCAP_MSB_MIN_index ) {
				//Out of range
				break;
			}			
			lccap_msb_index--;	
			temp = ts_lccap_msb_thermo_tb[lccap_msb_index];
			reg_PLL_TS_LCCAP_MSB_LANE_11_8 = (uint8_t)(temp>>8);
			reg_PLL_TS_LCCAP_MSB_LANE_7_0 = (uint8_t)temp;

		}	
		else { //Fmea > TX_Ftarget
			if( lccap_msb_index == PLL_TS_LCCAP_MSB_MAX_index) {
				//Out of range
				break;
			}			
			lccap_msb_index++;	
			temp = ts_lccap_msb_thermo_tb[lccap_msb_index];
			reg_PLL_TS_LCCAP_MSB_LANE_11_8 = (uint8_t)(temp>>8);
			reg_PLL_TS_LCCAP_MSB_LANE_7_0 = (uint8_t)temp;
			break;
		}

	} while((reg_MCU_DEBUGA_LANE_7_0=0x98)&&1);
			
	//-- LSB
	lccap_lsb_index--;
	PLL_TS_LCCAP_LSB = (uint8_t)ts_lccap_msb_thermo_tb[lccap_lsb_index];
	
	do {
		delay(Tpfreq0); //3us
		ts_pll_amp_cal();
		ts_pllvdda_cal(0x0f);
		
		timeout_start(20000); //20mS
		cnt_rdy = TX_FBC_PLLCAL_CNT_READY;
		TX_FBC_CNT_START = 1; 
		if( cnt_rdy ) while((reg_MCU_DEBUGA_LANE_7_0=0x99)&&TX_FBC_PLLCAL_CNT_READY && !timeout);
		while((reg_MCU_DEBUGA_LANE_7_0=0x9A)&&!TX_FBC_PLLCAL_CNT_READY && !timeout);
		TX_FBC_CNT_START = 0; 				
		//if(timeout) break;
		Fmea = reg_PLL_TS_FBC_PLLCAL_CNT_LANE_15_0;
		
		if( Fmea == TX_Ftarget ) goto pllcal_stop; 
		else if(Fmea < TX_Ftarget ) {
			if(lccap_lsb_index==PLL_TS_LCCAP_LSB_MIN) {
				//Ou of Range
				break;
			}				
			lccap_lsb_index--;
			PLL_TS_LCCAP_LSB = (uint8_t)ts_lccap_msb_thermo_tb[lccap_lsb_index];
			
		}
		else {
			if(lccap_lsb_index==PLL_TS_LCCAP_LSB_MAX_index) {
				//Out of Range
				break;
			}				
			lccap_lsb_index++;
			PLL_TS_LCCAP_LSB = (uint8_t)ts_lccap_msb_thermo_tb[lccap_lsb_index];
			break;	
		}			
		
	} while((reg_MCU_DEBUGA_LANE_7_0=0x9B)&&1);		


	//-- ULSB
	PLL_TS_LCCAP_ULSB--;
	
	do {
		delay(Tpfreq0); //3us
		ts_pll_amp_cal();
		ts_pllvdda_cal(0x0f);
		
		timeout_start(20000); //20mS
		cnt_rdy = TX_FBC_PLLCAL_CNT_READY;
		TX_FBC_CNT_START = 1; 
		if( cnt_rdy ) while((reg_MCU_DEBUGA_LANE_7_0=0x9C)&&TX_FBC_PLLCAL_CNT_READY && !timeout);
		while((reg_MCU_DEBUGA_LANE_7_0=0x9D)&&!TX_FBC_PLLCAL_CNT_READY && !timeout);
		TX_FBC_CNT_START = 0; 				
		//if(timeout) break;
		Fmea = reg_PLL_TS_FBC_PLLCAL_CNT_LANE_15_0;
		
		if( Fmea >= TX_Ftarget ) goto pllcal_stop; //TODO?? break; 
		else {//Fmea < TX_Ftarget 
			if(	PLL_TS_LCCAP_ULSB==PLL_TS_LCCAP_ULSB_MIN) {
				//Out of Range
				break;
			}				
			PLL_TS_LCCAP_ULSB--;
		}
	} while((reg_MCU_DEBUGA_LANE_7_0=0x9E)&&1);			

pllcal_stop:	

	lnx_TX_PLL_CAL_DONE_LANE = 1;
	reg_PLL_TS_FBDIV_LANE_9_8 = save_TX_FBDIV_h;
	reg_PLL_TS_FBDIV_LANE_7_0 = save_TX_FBDIV_l;
	reg_ANA_PLL_TS_FBCK_SEL_LANE = save_TX_FBCK_SEL;
	reg_PLL_TS_LCVCOCAL_BUF_EN_LANE = 0;
 	PLL_TS_PLLAMPCAL_EN = 0;
	PLL_TS_PLLCAL_EN = 0;
	PLL_TS_VCOAMP_VTH_SEL = TX_TH_NORMAL;	
	
	check_ts_pll_lock();
}


void ts_pll_tempc_speed_adj(void) BANKING_CTRL {}
//void pll_fast_cal(void) BANKING_CTRL {}
void check_ts_pll_lock(void) BANKING_CTRL {
	//timeout = 0;
	if(cmx_TX_PLL_CAL_TIMEOUT_DIS==0)	{
		//timeout_start((uint16_t)Ttimeout_timer); //50mS
	    wait_for(reg_ANA_PLL_TS_LOCK_RD_LANE,(uint16_t)Ttimeout_timer);
	}
    else
	    wait_for(reg_ANA_PLL_TS_LOCK_RD_LANE,0);


	//while((reg_MCU_DEBUGA_LANE_7_0=0x9F)&&!reg_ANA_PLL_TS_LOCK_RD_LANE && !timeout);
}

void ts_pll_cal_init( void ) BANKING_CTRL {
	uint16_t temp;
	uint8_t rsdc;
	int16_t tsen;

	lnx_TX_PLL_CAL_PASS_LANE = 0;	
	lnx_TX_PLL_AMP_CAL_PASS_LANE = 0;
	lnx_TX_PLL_AMP_CAL_DONE_LANE = 0;
	lnx_TX_PLL_CAL_DONE_LANE = 0;

	reg_ANA_PLL_TS_FBCK_SEL_LANE = 0;
	
	if( cmx_PLLAMP_CAL_SPEEDUP_DISABLE == 0)
		reg_PLL_TS_LCVCOCAL_BUF_EN_LANE = 1;

	reg_PLL_TS_RESET_ANA_LANE = 0;

	PLL_TS_PLLAMPCAL_EN = 1;
	PLL_TS_PLLCAL_EN = 1;
	PLL_TS_VCOAMP_VTH_SEL = TX_TH_AMP; 
	temp = lnx_REFCLK_FREQ_RD_LANE_15_0 << (FBC_RATIO);
	temp--;
	reg_PLL_TS_FBC_CNT_TIMER_LANE_15_0_b0 = (uint8_t)temp;
	reg_PLL_TS_FBC_CNT_TIMER_LANE_15_0_b1 = (uint8_t)(temp >> 8);

	loadSpdtbl_4_fcnt_tx();
	reg_PLL_TS_LCCAP_MSB_LANE_11_8 = 3;
	reg_PLL_TS_LCCAP_MSB_LANE_7_0 = 0xff;
	PLL_TS_LCCAP_LSB = 0x3f;
	PLL_TS_LCCAP_ULSB = 0x0f;

	//DAC Cap code
#ifdef _5FF_COMPHY_112G_ADC_X4_8PLL_R1P1
    switch(lnx_TX_PLL_RATE_SEL_LANE_4_0) {
#endif
#ifdef _5FF_COMPHY_112G_ADC_X4_8PLL_R1P0
    switch(reg_TX_PLL_RATE_SEL_LANE_4_0) {
#endif
	case 0x0A:
	case 0x01:
	case 0x09:
	case 0x0B:	rsdc = 12; break;
	case 0x0C:
	case 0x02:  rsdc = 11; break;
	case 0x0e:
	case 0x0d:  rsdc = 10; break;
	case 0x10:
	case 0x0f:  rsdc = 9; break;
	case 0x11:
	case 0x17:
	case 0x18:	rsdc = 7; break;
	case 0x12:
	case 0x14:
	case 0x13:
	case 0x15:
	case 0x16:	rsdc = 6; break;
	case 0x3:	rsdc = 4; break;
	}
	reg_PLL_TS_ANA_RSVDC_LANE_7_0 = (reg_PLL_TS_ANA_RSVDC_LANE_7_0 & 0xe0) | rsdc;


	tsen = read_tsen(1);
	if(tsen < -20) {
		TX_TH_NORMAL = 8;
		TX_TH_AMP = 8;
	}
	else if(tsen>=-20 && tsen<20) {
		TX_TH_NORMAL = 6;
		TX_TH_AMP = 6;
	}
	else if(tsen>=20 && tsen<60) {
		TX_TH_NORMAL = 6;
		TX_TH_AMP = 6;
	}
	else if(tsen>=60 && tsen<100) {
		TX_TH_NORMAL = 5;
		TX_TH_AMP = 5;
	}
	else if(tsen>=100) {
		TX_TH_NORMAL = 5;
		TX_TH_AMP = 5;
	}
	
}
#endif

void ts_pll_amp_cal(void) BANKING_CTRL { //single

	reg_PLL_AMP_TS_TOP_START_LANE = 1;
	delay(T_p5us);
	//timeout = 0;
	/*if(cmx_TX_PLL_CAL_TIMEOUT_DIS==0)	{
		timeout_start((uint16_t)TIMEOUT_TX_PLL_AMP); //50mS
	}
	while((reg_MCU_DEBUGA_LANE_7_0=0xA0)&&!reg_PLL_AMP_TS_TOP_DONE_LANE && !timeout);*/
	//while((reg_MCU_DEBUGA_LANE_7_0=0xA1)&&!reg_PLL_AMP_TS_TOP_DONE_LANE);
	wait_for(reg_PLL_AMP_TS_TOP_DONE_LANE,0);
	reg_PLL_AMP_TS_TOP_START_LANE = 0;

	if (!reg_PLL_TS_AMP_CAL_TIMEOUT_RD_LANE)
		lnx_TX_PLL_AMP_CAL_PASS_LANE = 1;

	//lnx_cal_pll_tx_amp_result_lane = reg_PLL_TS_AMP_CAL_RESULT_RD_LANE_7_0;
	reg_PLL_TS_AMP_CAL_RESULT_EXT_LANE_7_0 = reg_PLL_TS_AMP_CAL_RESULT_RD_LANE_7_0;

	lnx_TX_PLL_AMP_CAL_DONE_LANE = 1;
	delay(T_8us);
}
void ts_pll_amp_cal_cont(void) BANKING_CTRL { //cont

	if(cmx_TX_PLLAMP_CAL_CONT_EN == 0) return;

	reg_PLL_AMP_TS_TOP_CONT_START_LANE = 1;
}

void ts_pll_fast_cal(void) BANKING_CTRL {

	//uint8_t	i, lccap_msb_index, tempc_mux_hold_sel_2c;

	//tempc_mux_hold_sel_2c = gray2bi_tb[TEMPC_MUX_HOLD_SEL];

	//timeout_start((uint16_t)10000); //10mS	no used

	//cmx_TX_PLL_CAL_DONE = 0;

	//tx_pllcal_load(CONT);
	
	reg_ANA_PLL_TS_PU_PLL_LANE = 1;

	PULUP = 1;
	TX_LD_CAL_DATA = 1;
	PLL_TS_SHRTR = 1;

	delay(T_p5us);
	reg_ANA_PLL_TS_PU_PLL_DLY_LANE = 1;
//	reg_TX_RESET_ANA_LANE = 0;
	
	delay(Tpulup);
	PULUP = 0;

	delay(Tshrtr);
	PLL_TS_SHRTR = 0;
	TX_LD_CAL_DATA = 0;
	delay(T_12us);

	//if(cmx_FAST_PLL_MODE==0) { //tempc_speed_adj
//		pll_tempc_speed_adj();
	/*}
	else
	{
		do_fast_cal(lccap_msb_index);
	}*/

	//save
	//cmx_CAL_TEMPC_MUX_HOLD_SEL_7_0 = tempc_mux_hold_sel_2c;

	check_ts_pll_lock(); //to do: turn on after calibration implemented

	//cmx_TX_PLL_CAL_DONE = 1;

	pll_clk_ts_ready_1();
}
