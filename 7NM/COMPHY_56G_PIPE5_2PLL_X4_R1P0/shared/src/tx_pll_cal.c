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
#pragma codeseg BANK2
#pragma constseg BANK2
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
#define Tpulup				Tus//T_2us//0.5u~4u
#define Tshrtr				T_8us //T_4us, T_2us, T_8us, T_16us
#define PLL_TS_PLLAMPCAL_EN		reg_PLL_TS_PLLAMPCAL_EN_LANE
#define PLL_TS_PLLCAL_EN		reg_PLL_TS_PLLCAL_EN_LANE
#define PLL_TS_VCOAMP_VTH_SEL		reg_PLL_TS_VCOAMP_VTH_SEL_LANE_3_0

#define PLL_TS_VCOAMP_VTH_SEL_LOW	lnx_PLL_TS_VCO_AMP_VTH_LOW_LANE_3_0
#define PLL_TS_VCOAMP_VTH_SEL_MID	lnx_PLL_TS_VCO_AMP_VTH_MID_LANE_3_0
#define PLL_TS_VCOAMP_VTH_SEL_HIGH	lnx_PLL_TS_VCO_AMP_VTH_HIGH_LANE_3_0


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

#if PLL_DUMP_DEBUG

void dump_lc_pll(uint8_t) BANKING_CTRL;
void test_buf(void) BANKING_CTRL ;

typedef struct Status_LCPLL_STATUS_tag{
	//uint16_t lccap_msb;
	uint16_t fbcnt;
	uint8_t step; 
	uint8_t lp_num;
	uint8_t  lccap_lsb;
	uint8_t  lccap_ulsb;
	uint8_t  lccap_lsb_index;
	uint8_t  lccap_msb_index;
	uint8_t  vdda_fbdiv;
        uint8_t  vdda_fbdiv_ext;
	uint8_t  vdda_fbdiv_cal_dir_inv;

} Status_LCPLL_STATUS_t;

enum PLL_DEBUG_ST {
  NULL_STEP,
  FIND_CAP_MSB_STEP,  
  FIND_CAP_LSB_STEP,
  FIND_CAP_ULSB_STEP,
  END_STEP = 0x0F,
};
	
__xdata __at(0x6800) Status_LCPLL_STATUS_t lc_stat[80];

#else 
	#define dump_lc_pll(a)
	#define clear_dump_buf()
	#define print_pll()
#endif //PLL_DUMP_DEBUG


void ts_pll_cal( void ) BANKING_CTRL {
	
	uint8_t save_TX_FBDIV_h, save_TX_FBDIV_l, cnt_rdy, save_TX_FBCK_SEL;
	uint16_t Fmea, temp;
	uint32_t cur_time;

	PHY_STATUS =  ST_TX_PLL_CAL;

	if( cmx_TX_PLL_CAL_EXT_EN )
	{
		reg_PLL_TS_RESET_ANA_LANE = 0;		
		lnx_TX_PLL_CAL_DONE_LANE = 1;
		return;
	}

	//cur_time = get_time();
	#if PLL_DUMP_DEBUG
	//clear_dump_buf();
	//test_buf();
	#endif	
	
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
	//timeout_start(20000); //20mS
	
	dump_lc_pll(FIND_CAP_MSB_STEP);
	
	// -- MSB
	do {	

		delay(Tpfreq0); //3us
		ts_pll_amp_cal();	
		if(!cmx_PLL_VDDA_CAL_MODE) ts_pllvdda_cal(0x0f);
//Printf("\r\n === vdda_fbdiv: %d vdda_fbdiv_ext: %d", reg_PLL_TS_VDDA_FBDIV_CAL_RESULT_RD_LANE_3_0, reg_PLL_TS_VDDA_FBDIV_CAL_RESULT_EXT_LANE_3_0 );
		
		timeout_start(50); //Lisa recommend 50uS 
		cnt_rdy = TX_FBC_PLLCAL_CNT_READY;
		TX_FBC_CNT_START = 1; 
		if( cnt_rdy ) while(TX_FBC_PLLCAL_CNT_READY && !timeout);
		while(!TX_FBC_PLLCAL_CNT_READY && !timeout);
		TX_FBC_CNT_START = 0; 				
		dump_lc_pll(FIND_CAP_MSB_STEP);
		//if(timeout) continue; //break; //HR: Fei recommanded: if FW cannot get fbc_cnt_ready with timeout, FW keep decrease CAP value.
		if(!timeout) Fmea = reg_PLL_TS_FBC_PLLCAL_CNT_LANE_15_0;
		else Fmea = 0;
		
		if( Fmea == TX_Ftarget ) goto pllcal_stop; 
		else if(Fmea < TX_Ftarget)  {
			if( lccap_msb_index == PLL_TS_LCCAP_MSB_MIN_index) {
				//Out of range
				break;
			}			

			lccap_msb_index--;	
			temp = ts_lccap_msb_thermo_tb[lccap_msb_index];
	        #ifndef _56G_5NM
			reg_PLL_TS_LCCAP_MSB_LANE_11_8 = (uint8_t)(temp>>8);
			reg_PLL_TS_LCCAP_MSB_LANE_7_0 = (uint8_t)temp;
            #else
            reg_PLL_TS_LCCAP_MSB_LANE_6_0 = (uint8_t)temp;
            #endif
		}	
		else { //Fmea > TX_Ftarget
			if( lccap_msb_index == PLL_TS_LCCAP_MSB_MAX_index) {
				//Out of range
				break;
			}			
			lccap_msb_index++;	
			temp = ts_lccap_msb_thermo_tb[lccap_msb_index];
	        #ifndef _56G_5NM
			reg_PLL_TS_LCCAP_MSB_LANE_11_8 = (uint8_t)(temp>>8);
			reg_PLL_TS_LCCAP_MSB_LANE_7_0 = (uint8_t)temp;
            #else
            reg_PLL_TS_LCCAP_MSB_LANE_6_0 = (uint8_t)temp;
            #endif
			break;
		}

	} while (1); 
			
	//-- LSB
	dump_lc_pll(FIND_CAP_MSB_STEP);
	lccap_lsb_index--;
	PLL_TS_LCCAP_LSB = (uint8_t)ts_lccap_msb_thermo_tb[lccap_lsb_index];
	
	do {
		delay(Tpfreq0); //3us
		ts_pll_amp_cal();
		if(!cmx_PLL_VDDA_CAL_MODE) ts_pllvdda_cal(0x0f);
		
		timeout_start(50);  
		cnt_rdy = TX_FBC_PLLCAL_CNT_READY;
		TX_FBC_CNT_START = 1; 
		if( cnt_rdy ) while(TX_FBC_PLLCAL_CNT_READY && !timeout);
		while(!TX_FBC_PLLCAL_CNT_READY && !timeout);
		TX_FBC_CNT_START = 0; 				
		dump_lc_pll(FIND_CAP_MSB_STEP);
		//if(timeout) continue; //break;
		if(!timeout) Fmea = reg_PLL_TS_FBC_PLLCAL_CNT_LANE_15_0;
		else Fmea = 0;
		
		if( Fmea == TX_Ftarget ) goto pllcal_stop; 
		else if(Fmea < TX_Ftarget ) {
			if(lccap_lsb_index==PLL_TS_LCCAP_LSB_MIN) {
				//Out of Range
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
		
	} while (1);		


	//-- ULSB
	dump_lc_pll(FIND_CAP_MSB_STEP);
	PLL_TS_LCCAP_ULSB--;
	
	do {
		delay(Tpfreq0); //3us
		ts_pll_amp_cal();
		if(!cmx_PLL_VDDA_CAL_MODE) ts_pllvdda_cal(0x0f);
		
		timeout_start(50); 
		cnt_rdy = TX_FBC_PLLCAL_CNT_READY;
		TX_FBC_CNT_START = 1; 
		if( cnt_rdy ) while(TX_FBC_PLLCAL_CNT_READY && !timeout);
		while(!TX_FBC_PLLCAL_CNT_READY && !timeout);
		TX_FBC_CNT_START = 0; 				
		dump_lc_pll(FIND_CAP_MSB_STEP);
		if(!timeout) Fmea = reg_PLL_TS_FBC_PLLCAL_CNT_LANE_15_0;
		else Fmea = 0;
		
		if( Fmea >= TX_Ftarget ) goto pllcal_stop; 
		else {//Fmea < TX_Ftarget 
			if(	PLL_TS_LCCAP_ULSB==PLL_TS_LCCAP_ULSB_MIN) {
				//Out of Range
				break;
			}				
			PLL_TS_LCCAP_ULSB--;
		}
	} while (1);			

pllcal_stop:	

	dump_lc_pll(END_STEP);
	
	//save
	lnx_cal_ts_lccap_msb[TX_PLL_RATE_INX] = lccap_msb_index;
	lnx_cal_ts_lccap_lsb[TX_PLL_RATE_INX] = lccap_lsb_index;
	lnx_cal_ts_lccap_ulsb[TX_PLL_RATE_INX] = PLL_TS_LCCAP_ULSB | 0x0;
	lnx_cal_ts_pllamp[TX_PLL_RATE_INX] = reg_PLL_TS_AMP_CAL_RESULT_RD_LANE_7_0;
	
	reg_PLL_TS_FBDIV_LANE_9_8 = save_TX_FBDIV_h;
	reg_PLL_TS_FBDIV_LANE_7_0 = save_TX_FBDIV_l;
	reg_ANA_PLL_TS_FBCK_SEL_LANE = save_TX_FBCK_SEL;
	reg_PLL_TS_LCVCOCAL_BUF_EN_LANE = 0;
 	PLL_TS_PLLAMPCAL_EN = 0;
	PLL_TS_PLLCAL_EN = 0;
	
	check_ts_pll_lock();
	if(!timeout) lnx_TX_PLL_CAL_PASS_LANE = 1;
	if(cmx_PLL_VDDA_CAL_MODE) ts_pllvdda_cal(0x0f);

	//print_pll();
	
	//lnx_TS_PLL_CAL_TIME_LANE_15_0 = (uint16_t)(get_time()-cur_time);
	
	lnx_TX_PLL_CAL_DONE_LANE = 1;

}


void check_ts_pll_lock(void) BANKING_CTRL {
	timeout = 0;
	if(cmx_TX_PLL_CAL_TIMEOUT_DIS==0)	{
		timeout_start((uint16_t)Ttimeout_timer); //50mS
	}

	#ifdef _56G_5NM
	while(!drv_pll_read_pll_ts_lock() && !timeout);
	#else
	while(!reg_ANA_PLL_TS_LOCK_RD_LANE && !timeout);
	#endif
}

void set_ts_pll_cal_vcoamp_vth(void) BANKING_CTRL {
	
	int16_t tsen;


	tsen = read_tsen();
	if(tsen < 20) {
		TX_TH_AMP = PLL_TS_VCOAMP_VTH_SEL_LOW;
	}
	else if(tsen>=20 && tsen<80) {
		TX_TH_AMP = PLL_TS_VCOAMP_VTH_SEL_MID; 
	}
	else if(tsen>=80) {
		TX_TH_AMP = PLL_TS_VCOAMP_VTH_SEL_HIGH; 
	}

	PLL_TS_VCOAMP_VTH_SEL = TX_TH_AMP; 

}

void ts_pll_cal_init( void ) BANKING_CTRL {
	uint16_t temp;
	uint8_t rsdc;

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
	#ifndef _56G_5NM
	reg_PLL_TS_LCCAP_MSB_LANE_11_8 = 3;
	reg_PLL_TS_LCCAP_MSB_LANE_7_0 = 0xff;
    #else
    reg_PLL_TS_LCCAP_MSB_LANE_6_0 = 0xff;
    #endif
	PLL_TS_LCCAP_LSB = 0x3f;
	PLL_TS_LCCAP_ULSB = 0x0f;
	
	//DAC Cap code
    switch(reg_TX_PLL_RATE_SEL_LANE_4_0) {
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

	set_ts_pll_cal_vcoamp_vth();
	
}

void ts_pll_amp_cal(void) BANKING_CTRL { //single

	reg_PLL_AMP_TS_TOP_START_LANE = 0;
	reg_PLL_AMP_TS_TOP_START_LANE = 1;
	delay(T_p5us);
	//timeout = 0;
	/*if(cmx_TX_PLL_CAL_TIMEOUT_DIS==0)	{
		timeout_start((uint16_t)TIMEOUT_TX_PLL_AMP); //50mS
	}
	while (!reg_PLL_AMP_TS_TOP_DONE_LANE && !timeout);*/
	while (!reg_PLL_AMP_TS_TOP_DONE_LANE);

	if (!reg_PLL_TS_AMP_CAL_TIMEOUT_RD_LANE)
		lnx_TX_PLL_AMP_CAL_PASS_LANE = 1;

	// TODO lnx_cal_pll_ts_amp_result_lane = reg_PLL_TS_AMP_CAL_RESULT_RD_LANE_7_0;
	reg_PLL_AMP_TS_TOP_START_LANE = 0;
	lnx_TX_PLL_AMP_CAL_DONE_LANE = 1;
	delay(T_8us);
}

void ts_pll_amp_cal_cont(void) BANKING_CTRL { //cont

	if(cmx_TX_PLLAMP_CAL_CONT_EN == 0) return;

	reg_PLL_AMP_TS_TOP_CONT_START_LANE = 1;
}

void ts_pllcal_load(void) BANKING_CTRL {

	uint16_t temp;
	
	if(phy_mode == SERDES) return;
	
	lccap_msb_index = lnx_cal_ts_lccap_msb[TX_PLL_RATE_INX];
	temp = ts_lccap_msb_thermo_tb[lccap_msb_index];
	#ifndef _56G_5NM
	reg_PLL_TS_LCCAP_MSB_LANE_11_8 = (uint8_t)(temp>>8);
	reg_PLL_TS_LCCAP_MSB_LANE_7_0 = (uint8_t)temp;
    #else
    reg_PLL_TS_LCCAP_MSB_LANE_6_0 = (uint8_t)temp;
    #endif
	
	lccap_lsb_index = lnx_cal_ts_lccap_lsb[TX_PLL_RATE_INX];
	PLL_TS_LCCAP_LSB = (uint8_t)ts_lccap_msb_thermo_tb[lccap_lsb_index];
	
	PLL_TS_LCCAP_ULSB = lnx_cal_ts_lccap_ulsb[TX_PLL_RATE_INX];
	
	
	reg_PLL_TS_AMP_CAL_RESULT_EXT_LANE_7_0 = lnx_cal_ts_pllamp[TX_PLL_RATE_INX];
	
		
}

void ts_pll_fast_cal(void) BANKING_CTRL {

	//uint8_t	i, lccap_msb_index, tempc_mux_hold_sel_2c;

	//tempc_mux_hold_sel_2c = gray2bi_tb[TEMPC_MUX_HOLD_SEL];

	//timeout_start((uint16_t)10000); //10mS	no used

	//cmx_TX_PLL_CAL_DONE = 0;

	ts_pllcal_load();
	
	//drv_pll_ts_on_seq();

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
		ts_pll_tempc_speed_adj();
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

#if PLL_DUMP_DEBUG
void test_buf(void) BANKING_CTRL {
	if(llpnum<60) {
		lc_stat[llpnum].lp_num = 0x12;
		lc_stat[llpnum].step = 0x34;
		lc_stat[llpnum].fbcnt = 0x5678;
		//lc_stat[llpnum].lccap_msb = (((PLL_TS_UPHY14_CMN_ANAREG_TOP_016.BT.B0) & 0x0f)<<8) + reg_PLL_TS_LCCAP_MSB_LANE_7_0; 
		lc_stat[llpnum].lccap_msb_index = 0x9a;
		lc_stat[llpnum].lccap_lsb_index = 0xbc; 
		lc_stat[llpnum].lccap_ulsb = 0xef; 				
		lc_stat[llpnum].lccap_lsb = (PLL_TS_UPHY14_CMN_ANAREG_TOP_007.BT.B0) & 0x3f; 
	}	
	llpnum++;

}

void dump_lc_pll(uint8_t step) BANKING_CTRL {
	if(llpnum<60) {
		lc_stat[llpnum].lp_num = llpnum;
		lc_stat[llpnum].step = step;
		lc_stat[llpnum].fbcnt = reg_PLL_TS_FBC_PLLCAL_CNT_LANE_15_0;
		//lc_stat[llpnum].lccap_msb = (((PLL_TS_UPHY14_CMN_ANAREG_TOP_016.BT.B0) & 0x0f)<<8) + reg_PLL_TS_LCCAP_MSB_LANE_7_0; 
		lc_stat[llpnum].lccap_msb_index = lccap_msb_index;
		lc_stat[llpnum].lccap_lsb = (PLL_TS_UPHY14_CMN_ANAREG_TOP_007.BT.B0) & 0x3f; 
		lc_stat[llpnum].lccap_lsb_index = lccap_lsb_index; 
		lc_stat[llpnum].lccap_ulsb = (PLL_TS_UPHY14_CMN_ANAREG_TOP_006.BT.B0&0x1e)>>1; 			
		lc_stat[llpnum].vdda_fbdiv = (PLL_TS_VDDA_FBDIV_CAL_7.BT.B0&0x1e)>>1;
		lc_stat[llpnum].vdda_fbdiv_ext = (PLL_TS_VDDA_FBDIV_CAL_6.BT.B0&0x78)>>3;
		lc_stat[llpnum].vdda_fbdiv_cal_dir_inv = (PLL_TS_VDDA_FBDIV_CAL_0.BT.B0) & 0x01;

	}	

	#if _DBG_PLL_VDDA
	Printf("\r\n[rate=%d] %d,%d,%d,%d,%d,%d,%d,%d,%d,%d",	
		TX_PLL_RATE_INX,
		lc_stat[llpnum].lp_num,
		lc_stat[llpnum].step,
		lc_stat[llpnum].fbcnt,		
		lc_stat[llpnum].lccap_msb_index,	
		lc_stat[llpnum].lccap_lsb_index,	
		lc_stat[llpnum].lccap_lsb,				
		lc_stat[llpnum].lccap_ulsb,
		lc_stat[llpnum].vdda_fbdiv,
		lc_stat[llpnum].vdda_fbdiv_ext,		
		lc_stat[llpnum].vdda_fbdiv_cal_dir_inv);	
	if(step==END_STEP) Printf("\r\n");
	#endif

	llpnum++;

}

void clear_dump_buf(void) BANKING_CTRL {
	uint8_t i;	
	llpnum = 0;
	for(i=0; i<80; i++) {
		lc_stat[i].lp_num = 0;
		lc_stat[i].step = 0;
		lc_stat[i].fbcnt = 0;		
		lc_stat[i].lccap_msb_index = 0;	
		//lc_stat[i].lccap_msb = 0;				
		lc_stat[i].lccap_lsb_index = 0;	
		lc_stat[i].lccap_lsb = 0;				
		lc_stat[i].lccap_ulsb = 0;
		lc_stat[i].vdda_fbdiv = 0;
		lc_stat[i].vdda_fbdiv_ext = 0;		
		lc_stat[i].vdda_fbdiv_cal_dir_inv = 0;
	}
	llpnum = 1;
}

void print_pll(void) BANKING_CTRL {

#ifdef _LAB
	uint8_t i;
       Printf("\r\nlp_num,step,fbcnt,lccap_msb_bin,lccap_lsb_bin,lccap_lsb,lccap_ulsb,vdda_fbdiv,vdda_fbdiv_ext,vdda_fbdiv_cal_dir_inv");		
	for(i=1; i<80; i++) {
	    Printf("\r\n%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",	
		lc_stat[i].lp_num,
		lc_stat[i].step,
		lc_stat[i].fbcnt,		
		lc_stat[i].lccap_msb_index,	
		lc_stat[i].lccap_lsb_index,	
		lc_stat[i].lccap_lsb,				
		lc_stat[i].lccap_ulsb,
		lc_stat[i].vdda_fbdiv,
		lc_stat[i].vdda_fbdiv_ext,		
		lc_stat[i].vdda_fbdiv_cal_dir_inv);	

	   if(lc_stat[i].step == END_STEP) Printf("\r\n");
	   if(lc_stat[i].lp_num == 0) break;	        
		
	}
#endif	

}

#endif 
