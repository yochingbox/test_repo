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
#pragma constseg CSEG
#endif

/**
* \module PLL Calibration
*
* \param 
*    <NONE> 
* \return
*    <NONE> 
* \note
*    Input: PLL_RS_VCOAMP_VTH_SEL[3:0], FBDIV_CAL 
*    Output: PLL_RS_LCCAP_MSB, PLL_RS_LCCAP_LSB
*/

#define PULUP				reg_PULUP
#define PLL_RS_SHRTR			reg_PLL_RS_SHRTR_PLL_LANE
#define RX_LD_CAL_DATA			reg_ANA_PLL_RS_LD_CAL_DATA_LANE
#define PLL_RS_LCCAP_LSB		reg_PLL_RS_LCCAP_LSB_LANE_5_0
#define PLL_RS_LCCAP_ULSB		reg_PLL_RS_LCCAP_ULSB_LANE_3_0
#define RX_FBC_PLLCAL_CNT_READY		reg_PLL_RS_FBC_PLLCAL_CNT_READY_LANE
#define RX_FBC_CNT_START		reg_PLL_RS_FBC_CNT_START_LANE
#define PLL_RS_LCCAP_MSB_MAX_index	10
#define PLL_RS_LCCAP_MSB_MIN_index	0
#define PLL_RS_LCCAP_LSB_MAX_index	6
#define PLL_RS_LCCAP_LSB_MIN		0x0
#define PLL_RS_LCCAP_ULSB_MIN		0x0

#define RX_Ftarget			lnx_PLL_RS_SPEED_THRESH_LANE_15_0

#define Ttimeout_timer			100000 //uS //10000
#define TIMEOUT_RX_PLL_AMP		1600	//1600us
#define TIMEOUT_RX_PLL_CNT_READY	100
#define RX_TH_AMP			lnx_RS_VCOAMP_VTH_AMP_LANE_7_0
#define Tpulup				Tus//T_2us//0.5u~4u
#define Tshrtr				T_8us //T_4us, T_2us, T_8us, T_16us
#define PLL_RS_PLLAMPCAL_EN		reg_PLL_RS_PLLAMPCAL_EN_LANE
#define PLL_RS_PLLCAL_EN		reg_PLL_RS_PLLCAL_EN_LANE
#define PLL_RS_VCOAMP_VTH_SEL		reg_PLL_RS_VCOAMP_VTH_SEL_LANE_3_0

#define PLL_RS_VCOAMP_VTH_SEL_LOW	lnx_PLL_RS_VCO_AMP_VTH_LOW_LANE_3_0
#define PLL_RS_VCOAMP_VTH_SEL_MID	lnx_PLL_RS_VCO_AMP_VTH_MID_LANE_3_0
#define PLL_RS_VCOAMP_VTH_SEL_HIGH	lnx_PLL_RS_VCO_AMP_VTH_HIGH_LANE_3_0

__code uint16_t rs_lccap_msb_thermo_tb[] = {
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
void rs_pll_cal( void ) BANKING_CTRL {}
void check_rs_pll_lock(void) BANKING_CTRL {}
#else
void rs_pll_cal( void ) BANKING_CTRL {
	uint8_t lccap_msb_index, lccap_lsb_index, save_RX_FBDIV_h, save_RX_FBDIV_l, cnt_rdy, save_RX_FBCK_SEL;
	uint16_t Fmea, temp;

	PHY_STATUS =  ST_RX_PLL_CAL;
	
	if( cmx_RX_PLL_CAL_EXT_EN )
	{		
		reg_PLL_RS_RESET_ANA_LANE = 0;		
		lnx_RX_PLL_CAL_DONE_LANE = 1;
		return;
	}

	save_RX_FBDIV_h = reg_PLL_RS_FBDIV_LANE_9_8;
	save_RX_FBDIV_l = reg_PLL_RS_FBDIV_LANE_7_0;
	save_RX_FBCK_SEL = reg_ANA_PLL_RS_FBCK_SEL_LANE;

	//lnx_PLL_RS_SPEED_THRESH_LANE_15_0 = 0x1f8a; //temp
	rs_pll_cal_init();
	lccap_msb_index = 10;
	lccap_lsb_index = 6;
	
	// -- MSB
	do {	

		delay(Tpfreq0); //3us
		rs_pll_amp_cal();	
		rs_pllvdda_cal(0x0f);

		timeout_start(20000); //20mS
		cnt_rdy = RX_FBC_PLLCAL_CNT_READY;
		RX_FBC_CNT_START = 1; 
		if( cnt_rdy ) while((reg_MCU_DEBUGA_LANE_7_0=0x78)&&RX_FBC_PLLCAL_CNT_READY && !timeout);
		while((reg_MCU_DEBUGA_LANE_7_0=0x79)&&!RX_FBC_PLLCAL_CNT_READY && !timeout);
		RX_FBC_CNT_START = 0; 				
		//if(timeout) break;
		if(!timeout) Fmea = reg_PLL_RS_FBC_PLLCAL_CNT_LANE_15_0;
		else Fmea = 0;
		
		if( Fmea == RX_Ftarget ) goto pllcal_stop; 
		else if(Fmea < RX_Ftarget ) {
			if( lccap_msb_index == PLL_RS_LCCAP_MSB_MIN_index ) {
				//Out of range
				break;
			}			
			lccap_msb_index--;	
			temp = rs_lccap_msb_thermo_tb[lccap_msb_index];
			reg_PLL_RS_LCCAP_MSB_LANE_11_8 = (uint8_t)(temp>>8);
			//val = PLL_RS_UPHY14_CMN_ANAREG_TOP_016.BT.B0;
			//PLL_RS_UPHY14_CMN_ANAREG_TOP_016.BT.B0 = (val & 0x0f) | ((uint8_t)(temp>>4));
			reg_PLL_RS_LCCAP_MSB_LANE_7_0 = (uint8_t)temp;
		}	
		else { //Fmea > RX_Ftarget
			if( lccap_msb_index == PLL_RS_LCCAP_MSB_MAX_index) {
				//Out of range
				break;
			}			
			lccap_msb_index++;	
			temp = rs_lccap_msb_thermo_tb[lccap_msb_index];
			reg_PLL_RS_LCCAP_MSB_LANE_11_8 = (uint8_t)(temp>>8);
			//val = PLL_RS_UPHY14_CMN_ANAREG_TOP_016.BT.B0;
			//PLL_RS_UPHY14_CMN_ANAREG_TOP_016.BT.B0 = (val & 0x0f) | ((uint8_t)(temp>>4));
			reg_PLL_RS_LCCAP_MSB_LANE_7_0 = (uint8_t)temp;
			break;
		}

	} while((reg_MCU_DEBUGA_LANE_7_0=0x7A)&&1);
			
	//-- LSB
	lccap_lsb_index--;
	PLL_RS_LCCAP_LSB = (uint8_t)rs_lccap_msb_thermo_tb[lccap_lsb_index];
	
	do {
		delay(Tpfreq0); //3us
		rs_pll_amp_cal();
		rs_pllvdda_cal(0x0f);
		
		cnt_rdy = RX_FBC_PLLCAL_CNT_READY;
		RX_FBC_CNT_START = 1; 
		if( cnt_rdy ) while((reg_MCU_DEBUGA_LANE_7_0=0x7B)&&RX_FBC_PLLCAL_CNT_READY && !timeout);
		while((reg_MCU_DEBUGA_LANE_7_0=0x7C)&&!RX_FBC_PLLCAL_CNT_READY && !timeout);
		RX_FBC_CNT_START = 0; 				
		//if(timeout) break;		
		if(!timeout) Fmea = reg_PLL_RS_FBC_PLLCAL_CNT_LANE_15_0;
		else Fmea = 0;
		
		if( Fmea == RX_Ftarget ) goto pllcal_stop; 
		else if(Fmea < RX_Ftarget ) {	
			
            if(lccap_lsb_index==PLL_RS_LCCAP_LSB_MIN) {
				//Ou of Range
				break;
			}				

			lccap_lsb_index--;
			PLL_RS_LCCAP_LSB = (uint8_t)rs_lccap_msb_thermo_tb[lccap_lsb_index];
		}
		else {
			if(lccap_lsb_index==PLL_RS_LCCAP_LSB_MAX_index) {
				//Out of Range
				break;
			}				
			lccap_lsb_index++;
			PLL_RS_LCCAP_LSB = (uint8_t)rs_lccap_msb_thermo_tb[lccap_lsb_index];
			break;	
		}			
		
	} while(1);		


	//-- ULSB
	PLL_RS_LCCAP_ULSB--;
	
	do {
		delay(Tpfreq0); //3us
		rs_pll_amp_cal();
		rs_pllvdda_cal(0x0f);
		
		cnt_rdy = RX_FBC_PLLCAL_CNT_READY;
		RX_FBC_CNT_START = 1; 
		if( cnt_rdy ) while((reg_MCU_DEBUGA_LANE_7_0=0x7E)&&RX_FBC_PLLCAL_CNT_READY && !timeout);
		while((reg_MCU_DEBUGA_LANE_7_0=0x7F)&&!RX_FBC_PLLCAL_CNT_READY && !timeout);
		RX_FBC_CNT_START = 0; 				
		//if(timeout) break;
		if(!timeout) Fmea = reg_PLL_RS_FBC_PLLCAL_CNT_LANE_15_0;
		else Fmea = 0;
		
		if( Fmea >= RX_Ftarget ) goto pllcal_stop; //TODO?? break; 
		else {//Fmea < RX_Ftarget 
			if(	PLL_RS_LCCAP_ULSB==PLL_RS_LCCAP_ULSB_MIN) {
				//Out of Range
				break;
			}				
			PLL_RS_LCCAP_ULSB--;
		}
	} while(1);			

pllcal_stop:	

	lnx_RX_PLL_CAL_DONE_LANE = 1;
	reg_PLL_RS_FBDIV_LANE_9_8 = save_RX_FBDIV_h;
	reg_PLL_RS_FBDIV_LANE_7_0 = save_RX_FBDIV_l;
	reg_ANA_PLL_RS_FBCK_SEL_LANE = save_RX_FBCK_SEL;
	reg_PLL_RS_LCVCOCAL_BUF_EN_LANE = 0;
 	PLL_RS_PLLAMPCAL_EN = 0;
	PLL_RS_PLLCAL_EN = 0;
	
	check_rs_pll_lock();
}



void check_rs_pll_lock(void) BANKING_CTRL {
	//timeout = 0;

	// TODO - if(cmx_RX_PLL_CAL_TIMEOUT_DIS==0)
	{
		//timeout_start((uint16_t)Ttimeout_timer); //50mS
	    wait_for(reg_ANA_PLL_RS_LOCK_RD_LANE,(uint16_t)Ttimeout_timer);
	}
    //else
    {
	    //wait_for(reg_ANA_PLL_RS_LOCK_RD_LANE,0);
    }

	//while((reg_MCU_DEBUGA_LANE_7_0=0x81)&&!reg_ANA_PLL_RS_LOCK_RD_LANE && !timeout);
}

void set_rs_pll_cal_vcoamp_vth(void) BANKING_CTRL {

	int16_t tsen;

	tsen = read_tsen(1);
	if(tsen < 20) {
		RX_TH_AMP = PLL_RS_VCOAMP_VTH_SEL_LOW;
	}
	else if(tsen>=20 && tsen<80) {
		RX_TH_AMP = PLL_RS_VCOAMP_VTH_SEL_MID; 
	}
	else if(tsen>=80) {
		RX_TH_AMP = PLL_RS_VCOAMP_VTH_SEL_HIGH; 
	}

	PLL_RS_VCOAMP_VTH_SEL = RX_TH_AMP; 
}

void rs_pll_cal_init( void ) BANKING_CTRL {
	uint16_t temp;
	uint8_t rsdc;
	
	lnx_RX_PLL_CAL_PASS_LANE = 0;	
	lnx_RX_PLL_AMP_CAL_PASS_LANE = 0;
	lnx_RX_PLL_AMP_CAL_DONE_LANE = 0;
	lnx_RX_PLL_CAL_DONE_LANE = 0;

	reg_ANA_PLL_RS_FBCK_SEL_LANE = 0;

	if( cmx_PLLAMP_CAL_SPEEDUP_DISABLE == 0)
		reg_PLL_RS_LCVCOCAL_BUF_EN_LANE = 1;

	reg_PLL_RS_RESET_ANA_LANE = 0;

	PLL_RS_PLLAMPCAL_EN = 1;
	PLL_RS_PLLCAL_EN = 1;
	PLL_RS_VCOAMP_VTH_SEL = RX_TH_AMP; //TODO
	temp = lnx_REFCLK_FREQ_RD_LANE_15_0 << (FBC_RATIO); //(Refclk*4)*(2^fbc_ratio)
	temp--;
	reg_PLL_RS_FBC_CNT_TIMER_LANE_15_0_b0 = (uint8_t)temp;
	reg_PLL_RS_FBC_CNT_TIMER_LANE_15_0_b1 = (uint8_t)(temp >> 8);

	loadSpdtbl_4_fcnt_rx();
	reg_PLL_RS_LCCAP_MSB_LANE_11_8 = 3;
	reg_PLL_RS_LCCAP_MSB_LANE_7_0 = 0xff;
	PLL_RS_LCCAP_LSB = 0x3f;
	reg_PLL_RS_LCCAP_ULSB_LANE_3_0 = 0x0f;	
	
	//DAC Cap code
    switch(reg_RX_PLL_RATE_SEL_LANE_4_0) {
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
	reg_PLL_RS_ANA_RSVDC_LANE_7_0 = (reg_PLL_RS_ANA_RSVDC_LANE_7_0 & 0xe0) | rsdc;
	

	set_rs_pll_cal_vcoamp_vth();


}
#endif

void rs_pll_amp_cal(void) BANKING_CTRL { //single

	//if(cmx_RX_PLLAMP_CAL_CONT_EN == 1) return;
		
	reg_PLL_AMP_RS_TOP_START_LANE = 1;
	delay(T_p5us);
	//timeout = 0;
	/*if(cmx_RX_PLL_CAL_TIMEOUT_DIS==0)	{
		timeout_start((uint16_t)TIMEOUT_RX_PLL_AMP); //50mS
	}
	while((reg_MCU_DEBUGA_LANE_7_0=0x82)&&!reg_PLL_AMP_RS_TOP_DONE_LANE && !timeout);*/
	//while((reg_MCU_DEBUGA_LANE_7_0=0x83)&&!reg_PLL_AMP_RS_TOP_DONE_LANE);
	wait_for(reg_PLL_AMP_RS_TOP_DONE_LANE,0);

	if (!reg_PLL_RS_AMP_CAL_TIMEOUT_RD_LANE)
		lnx_RX_PLL_AMP_CAL_PASS_LANE = 1;

	//lnx_cal_rx_pll_amp_result_lane = reg_PLL_RS_AMP_CAL_RESULT_RD_LANE_7_0;
	reg_PLL_RS_AMP_CAL_RESULT_EXT_LANE_7_0 = reg_PLL_RS_AMP_CAL_RESULT_RD_LANE_7_0;

	reg_PLL_AMP_RS_TOP_START_LANE = 0;
	lnx_RX_PLL_AMP_CAL_DONE_LANE = 1;
	delay(T_8us);
}

void rs_pll_amp_cal_cont(void) BANKING_CTRL { //cont

	if(cmx_RX_PLLAMP_CAL_CONT_EN == 0) return;

	reg_PLL_AMP_RS_TOP_CONT_START_LANE = 1;
}

void rs_pll_fast_cal(void) BANKING_CTRL {

	//uint8_t	i, lccap_msb_index, tempc_mux_hold_sel_2c;

	//tempc_mux_hold_sel_2c = gray2bi_tb[TEMPC_MUX_HOLD_SEL];

	//timeout_start((uint16_t)10000); //10mS	no used

	//cmx_RX_PLL_CAL_DONE = 0;

	//load_rx_pllcal(CONT);

	reg_ANA_PLL_RS_PU_PLL_LANE = 1;

	PULUP = 1;
	RX_LD_CAL_DATA = 1;
	PLL_RS_SHRTR = 1;
	
	delay(T_p5us);
	reg_ANA_PLL_RS_PU_PLL_DLY_LANE = 1;
//	reg_TX_RESET_ANA_LANE = 0;

	delay(Tpulup);
	PULUP = 0;

	delay(Tshrtr);
	PLL_RS_SHRTR = 0;
	RX_LD_CAL_DATA = 0;
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

	check_rs_pll_lock(); //to do: turn on after calibration implemented

	//cmx_RX_PLL_CAL_DONE = 1;

	pll_clk_rs_ready_1();
}
