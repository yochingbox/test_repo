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
#define PLL_TS_LCCAP_USB        reg_PLL_TS_LCCAP_USB_LANE
#define PLL_TS_LCCAP_LSB		reg_PLL_TS_LCCAP_LSB_LANE_5_0
#define PLL_TS_LCCAP_ULSB		reg_PLL_TS_LCCAP_ULSB_LANE_3_0
#define TX_FBC_PLLCAL_CNT_READY		reg_PLL_TS_FBC_PLLCAL_CNT_READY_LANE
#define TX_FBC_CNT_START		reg_PLL_TS_FBC_CNT_START_LANE
#define PLL_TS_LCCAP_USB_MAX_index	1
#define PLL_TS_LCCAP_USB_MIN_index	0
//LCCAP_MSB max value if 0x7f
#define PLL_TS_LCCAP_MSB_MAX_index	7
#define PLL_TS_LCCAP_MSB_MIN_index	0
//LCCAP_LSB max value if 0x3f
#define PLL_TS_LCCAP_LSB_MAX_index	6
#define PLL_TS_LCCAP_LSB_MIN		0x0
#define PLL_TS_LCCAP_ULSB_MIN		0x0

#define TX_Ftarget			lnx_PLL_TS_SPEED_THRESH_LANE_15_0

#define Ttimeout_timer			100000 //uS //10000
#define TIMEOUT_TX_PLL_AMP		1600	//1600us
#define TIMEOUT_TX_PLL_CNT_READY	100
#define TX_TH_AMP			lnx_TS_VCOAMP_VTH_AMP_LANE_7_0
#define TX_TH_NORMAL		lnx_TS_VCOAMP_VTH_NORMAL_LANE_7_0
#define Tpulup				Tus//T_2us//0.5u~4u
#define Tshrtr				T_8us //T_4us, T_2us, T_8us, T_16us
#define PLL_TS_PLLAMPCAL_EN		reg_PLL_TS_PLLAMPCAL_EN_LANE
#define PLL_TS_PLLCAL_EN		reg_PLL_TS_PLLCAL_EN_LANE
#define PLL_TS_VCOAMP_VTH_SEL		reg_PLL_TS_VCOAMP_VTH_SEL_LANE_3_0
/*
#define PLL_TS_VCOAMP_VTH_SEL_LOW	lnx_PLL_TS_VCO_AMP_VTH_LOW_LANE_3_0
#define PLL_TS_VCOAMP_VTH_SEL_MID	lnx_PLL_TS_VCO_AMP_VTH_MID_LANE_3_0
#define PLL_TS_VCOAMP_VTH_SEL_HIGH	lnx_PLL_TS_VCO_AMP_VTH_HIGH_LANE_3_0
*/
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
void clear_dump_buf(void) BANKING_CTRL;
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
} Status_LCPLL_STATUS_t;

enum PLL_DEBUG_ST {
  NULL_STEP,
  FIND_CAP_MSB_STEP,  
  FIND_CAP_LSB_STEP,
  FIND_CAP_ULSB_STEP,
  END_STEP = 0x0F,
};
	
__xdata __at(0x6500) Status_LCPLL_STATUS_t lc_stat[30];

#else 
	#define dump_lc_pll(a)
	#define clear_dump_buf()
#endif //PLL_DUMP_DEBUG

static uint16_t ts_pll_cal__measure_freq() {
    uint8_t cnt_rdy;
    uint16_t Fmea;

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

    return Fmea;
}

void ts_pll_cal( void ) BANKING_CTRL {

	uint8_t lccap_msb_index,lccap_lsb_index,save_TX_FBDIV_h, save_TX_FBDIV_l, save_TX_FBCK_SEL;
	uint16_t Fmea, temp;

	PHY_STATUS =  ST_PLL_TS_CAL;

    reg_MCU_DEBUG0_LANE_7_0 = 0xaf;
    reg_MCU_DEBUG1_LANE_7_0 = TX_Ftarget;
/*
	if( cmx_TX_PLL_CAL_EXT_EN )
	{
		reg_PLL_TS_RESET_ANA_LANE = 0;		
		lnx_TX_PLL_CAL_DONE_LANE = 1;
		return;
	}
*/	
	#if PLL_DUMP_DEBUG
	clear_dump_buf();
	test_buf();
	#endif	
	
	if(cmx_TX_PLL_CAL_TIMEOUT_DIS==0) {
		timeout_start((uint16_t)Ttimeout_timer); 
	}	
	
	save_TX_FBDIV_h = reg_PLL_TS_FBDIV_LANE_9_8;
	save_TX_FBDIV_l = reg_PLL_TS_FBDIV_LANE_7_0;
	save_TX_FBCK_SEL = reg_ANA_PLL_TS_FBCK_SEL_LANE;

	//lnx_PLL_TS_SPEED_THRESH_LANE_15_0 = 0x1f8a; //temp
	ts_pll_cal_init();
	lccap_msb_index = PLL_TS_LCCAP_MSB_MAX_index;
	lccap_lsb_index = PLL_TS_LCCAP_LSB_MAX_index;
	//timeout_start(20000); //20mS
	
	dump_lc_pll(FIND_CAP_MSB_STEP);
	
	// -- USB
	do {	

		delay(T_3us); //3us
		ts_pll_amp_cal();
		ts_pllvdda_cal(0x0f);

        Fmea = ts_pll_cal__measure_freq();
		
		if( Fmea == TX_Ftarget ) {
            reg_MCU_DEBUG0_LANE_7_0 = 0xc0;
            goto pllcal_stop; 
        }
		else if(Fmea < TX_Ftarget ) {
			
            if( PLL_TS_LCCAP_USB == PLL_TS_LCCAP_USB_MIN_index) {
				//Out of range, jump to LSB
                reg_MCU_DEBUG0_LANE_7_0 = 0xc1;
				break;
			}			

            PLL_TS_LCCAP_USB--;
		}	
		else { //Fmea > RX_Ftarget
			if( PLL_TS_LCCAP_USB == PLL_TS_LCCAP_USB_MAX_index) {
				//Out of range, jump to MSB
                reg_MCU_DEBUG0_LANE_7_0 = 0xc2;
				break;
			}			

            PLL_TS_LCCAP_USB++;
            reg_MCU_DEBUG0_LANE_7_0 = 0xc3;
			break;
		}

	} while (1); 

	lccap_msb_index--;
	reg_PLL_TS_LCCAP_MSB_LANE_6_0 = (uint8_t)ts_lccap_msb_thermo_tb[lccap_msb_index];

    // -- MSB
    do {	

        delay(T_3us); //3us
		ts_pll_amp_cal();
		ts_pllvdda_cal(0x0f);
        
        Fmea = ts_pll_cal__measure_freq();
        
        if( Fmea == TX_Ftarget ) {
            reg_MCU_DEBUG0_LANE_7_0 = 0xc4;
            reg_MCU_DEBUG1_LANE_7_0 = lccap_msb_index;
            goto pllcal_stop; 
        }
        else if(Fmea < TX_Ftarget)  {
            if( lccap_msb_index == PLL_TS_LCCAP_MSB_MIN_index) {
                //Out of range
                reg_MCU_DEBUG0_LANE_7_0 = 0xc5;
                break;
            }			

            lccap_msb_index--;	
            temp = ts_lccap_msb_thermo_tb[lccap_msb_index];
            reg_PLL_TS_LCCAP_MSB_LANE_6_0 = (uint8_t)temp;
        }	
        else { //Fmea > TX_Ftarget
            if( lccap_msb_index == PLL_TS_LCCAP_MSB_MAX_index) {
                //Out of range
                reg_MCU_DEBUG0_LANE_7_0 = 0xc6;
                break;
            }			
            lccap_msb_index++;	
            temp = ts_lccap_msb_thermo_tb[lccap_msb_index];
            reg_PLL_TS_LCCAP_MSB_LANE_6_0 = (uint8_t)temp;
            reg_MCU_DEBUG0_LANE_7_0 = 0xc7;
            reg_MCU_DEBUG1_LANE_7_0 = lccap_msb_index;
            break;
        }

    } while (1); 
			
	//-- LSB
	dump_lc_pll(FIND_CAP_MSB_STEP);
	lccap_lsb_index--;
	PLL_TS_LCCAP_LSB = (uint8_t)ts_lccap_msb_thermo_tb[lccap_lsb_index];
	
	do {
		delay(T_3us); //3us
		ts_pll_amp_cal();
		ts_pllvdda_cal(0x0f);
		
        Fmea = ts_pll_cal__measure_freq();
		
		if( Fmea == TX_Ftarget ) {
            reg_MCU_DEBUG0_LANE_7_0 = 0xc8;
            reg_MCU_DEBUG1_LANE_7_0 = lccap_lsb_index;
            goto pllcal_stop; 
        }
		else if(Fmea < TX_Ftarget ) {
			if(lccap_lsb_index==PLL_TS_LCCAP_LSB_MIN) {
				//Out of Range
                reg_MCU_DEBUG0_LANE_7_0 = 0xc9;
				break; 
			}	
			lccap_lsb_index--;
			PLL_TS_LCCAP_LSB = (uint8_t)ts_lccap_msb_thermo_tb[lccap_lsb_index];
		}
		else {
			if(lccap_lsb_index==PLL_TS_LCCAP_LSB_MAX_index) {
				//Out of Range
                reg_MCU_DEBUG0_LANE_7_0 = 0xca;
				break;
			}				
			lccap_lsb_index++;
			PLL_TS_LCCAP_LSB = (uint8_t)ts_lccap_msb_thermo_tb[lccap_lsb_index];
            reg_MCU_DEBUG0_LANE_7_0 = 0xcb;
            reg_MCU_DEBUG1_LANE_7_0 = lccap_lsb_index;
			break;	
		}			
		
	} while (1);		


	//-- ULSB
	dump_lc_pll(FIND_CAP_MSB_STEP);
	PLL_TS_LCCAP_ULSB--;
	
	do {
		delay(T_3us); //3us
		ts_pll_amp_cal();
		ts_pllvdda_cal(0x0f);
		
        Fmea = ts_pll_cal__measure_freq();
		
		if( Fmea >= TX_Ftarget ) {
            reg_MCU_DEBUG0_LANE_7_0 = 0xcc;
            goto pllcal_stop; 
        }
		else {//Fmea < TX_Ftarget 
			if(	PLL_TS_LCCAP_ULSB==PLL_TS_LCCAP_ULSB_MIN) {
				//Out of Range
                reg_MCU_DEBUG0_LANE_7_0 = 0xcd;
				break;
			}				
			PLL_TS_LCCAP_ULSB--;
		}
	} while (1);			

pllcal_stop:	

	dump_lc_pll(END_STEP);
	
	//save
/*	lnx_cal_ts_lccap_msb[TX_PLL_RATE_INX] = lccap_msb_index;
	lnx_cal_ts_lccap_lsb[TX_PLL_RATE_INX] = lccap_lsb_index;
	lnx_cal_ts_lccap_ulsb[TX_PLL_RATE_INX] = PLL_TS_LCCAP_ULSB | 0x0;
	lnx_cal_ts_lccap_usb[TX_PLL_RATE_INX] = PLL_TS_LCCAP_USB | 0x0;
	lnx_cal_ts_pllamp[TX_PLL_RATE_INX] = reg_PLL_TS_AMP_CAL_RESULT_RD_LANE_7_0;
*/	
	reg_PLL_TS_FBDIV_LANE_9_8 = save_TX_FBDIV_h;
	reg_PLL_TS_FBDIV_LANE_7_0 = save_TX_FBDIV_l;
	reg_ANA_PLL_TS_FBCK_SEL_LANE = save_TX_FBCK_SEL;
	reg_PLL_TS_LCVCOCAL_BUF_EN_LANE = 0;
 	PLL_TS_PLLAMPCAL_EN = 0;
	PLL_TS_PLLCAL_EN = 0;
	
	check_ts_pll_lock();
	if(!timeout) lnx_TX_PLL_CAL_PASS_LANE = 1;

	lnx_TX_PLL_CAL_DONE_LANE = 1;
}

#ifdef _56G_5NM
uint8_t drv_pll_read_pll_ts_lock() BANKING_CTRL {
    #ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
    switch (mcuid) {
        case MCU_LANE0:
            return reg_PLL_TS_LOCK_RD_LANE0;
            break;
        case MCU_LANE1:
            return reg_PLL_TS_LOCK_RD_LANE1;
            break;
        case MCU_LANE2:
            return reg_PLL_TS_LOCK_RD_LANE2;
            break;
        case MCU_LANE3:
            return reg_PLL_TS_LOCK_RD_LANE3;
            break;
        default:
            break;
    }
    return 0;
    #endif // #ifdef CONFIG_5NM_56G_X4_4PLL_R1P0

    #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
    return reg_ANA_PLL_TS_LOCK_RD_LANE;
    #endif // #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
}
#endif //#ifdef _56G_5NM

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
/*
static void set_ts_pll_cal_vcoamp_vth(void) {
	
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
*/
void ts_pll_cal_init( void ) BANKING_CTRL {
	uint16_t temp;
	uint8_t rsdc;
	int8_t tsen;

	lnx_TX_PLL_CAL_PASS_LANE = 0;	
	lnx_TX_PLL_AMP_CAL_PASS_LANE = 0;
	lnx_TX_PLL_AMP_CAL_DONE_LANE = 0;
	lnx_TX_PLL_CAL_DONE_LANE = 0;

	reg_ANA_PLL_TS_FBCK_SEL_LANE = 0;
	
	PLL_TS_PLLAMPCAL_EN = 1;
	PLL_TS_PLLCAL_EN = 1;

	if( cmx_PLLAMP_CAL_SPEEDUP_DISABLE == 0) {
		reg_PLL_TS_LCVCOCAL_BUF_EN_LANE = 1;
        reg_PLL_TS_AMP_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 = 2;
        reg_PLL_TS_AMP_CAL_CONT_MODE_STEPSIZE_LANE_2_0 = 5;
        reg_PLL_TS_AMP_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 0x14;
    }
    else {
		reg_PLL_TS_LCVCOCAL_BUF_EN_LANE = 0;
        reg_PLL_TS_AMP_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 = 0;
        reg_PLL_TS_AMP_CAL_CONT_MODE_STEPSIZE_LANE_2_0 = 2;
        reg_PLL_TS_AMP_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 0xff;
    }

	reg_PLL_TS_RESET_ANA_LANE = 0;

	temp = lnx_REFCLK_FREQ_RD_LANE_15_0 << (FBC_RATIO);
	temp--;
	reg_PLL_TS_FBC_CNT_TIMER_LANE_15_0_b0 = (uint8_t)temp;
	reg_PLL_TS_FBC_CNT_TIMER_LANE_15_0_b1 = (uint8_t)(temp >> 8);

	loadSpdtbl_4_fcnt_tx();
    reg_PLL_TS_LCCAP_USB_LANE = 0x1;
    reg_PLL_TS_LCCAP_MSB_LANE_6_0 = 0x7f;
	PLL_TS_LCCAP_LSB = 0x3f;
	PLL_TS_LCCAP_ULSB = 0x0f;
	
    /*set_ts_pll_cal_vcoamp_vth();*/

}

void ts_pll_amp_cal(void) BANKING_CTRL { //single

//IPDOC AUGOGEN
	pll_amp_ts();

/*
	reg_PLL_AMP_TS_TOP_START_LANE = 1;
	delay(T_p5us);
	//timeout = 0;
	//if(cmx_TX_PLL_CAL_TIMEOUT_DIS==0)	{
	//	timeout_start((uint16_t)TIMEOUT_TX_PLL_AMP); //50mS
	//}
	//while((reg_MCU_DEBUGA_LANE_7_0=0xA0)&&!reg_PLL_AMP_TS_TOP_DONE_LANE && !timeout);
	//while((reg_MCU_DEBUGA_LANE_7_0=0xA1)&&!reg_PLL_AMP_TS_TOP_DONE_LANE);
	wait_for(reg_PLL_AMP_TS_TOP_DONE_LANE,0);
	reg_PLL_AMP_TS_TOP_START_LANE = 0;

	if (!reg_PLL_TS_AMP_CAL_TIMEOUT_RD_LANE)
		lnx_TX_PLL_AMP_CAL_PASS_LANE = 1;

	//lnx_cal_pll_tx_amp_result_lane = reg_PLL_TS_AMP_CAL_RESULT_RD_LANE_7_0;
	reg_PLL_TS_AMP_CAL_RESULT_EXT_LANE_7_0 = reg_PLL_TS_AMP_CAL_RESULT_RD_LANE_7_0;
*/
	lnx_TX_PLL_AMP_CAL_DONE_LANE = 1;
	delay(T_8us);
}
void ts_pll_amp_cal_cont(void) BANKING_CTRL { //cont

	if(cmx_TX_PLLAMP_CAL_CONT_EN == 0) return;

	//reg_PLL_AMP_TS_TOP_CONT_START_LANE = 1;
    pll_amp_ts_cont();
}

#ifndef _SERDES_BUILD
void ts_pllcal_load(void) BANKING_CTRL {

	uint16_t temp;
	
	lccap_msb_index = lnx_cal_ts_lccap_msb[TX_PLL_RATE_INX];
	temp = ts_lccap_msb_thermo_tb[lccap_msb_index];
    reg_PLL_TS_LCCAP_MSB_LANE_6_0 = (uint8_t)temp;
	
	lccap_lsb_index = lnx_cal_ts_lccap_lsb[TX_PLL_RATE_INX];
	PLL_TS_LCCAP_LSB = (uint8_t)ts_lccap_msb_thermo_tb[lccap_lsb_index];
	
	PLL_TS_LCCAP_ULSB = lnx_cal_ts_lccap_ulsb[TX_PLL_RATE_INX];
	
	PLL_TS_LCCAP_USB = lnx_cal_ts_lccap_usb[TX_PLL_RATE_INX];
	
	reg_PLL_TS_AMP_CAL_RESULT_EXT_LANE_7_0 = lnx_cal_ts_pllamp[TX_PLL_RATE_INX];
	
}
#endif // #ifndef _SERDES_BUILD
/*
void ts_pll_fast_cal(void) BANKING_CTRL {

	//uint8_t	i, lccap_msb_index, tempc_mux_hold_sel_2c;

	//tempc_mux_hold_sel_2c = gray2bi_tb[TEMPC_MUX_HOLD_SEL];

	//timeout_start((uint16_t)10000); //10mS	no used

	//cmx_TX_PLL_CAL_DONE = 0;

    #ifndef _SERDES_BUILD
	ts_pllcal_load();
    #endif // #ifndef _SERDES_BUILD
	
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
	//}
	//else
	//{
//		do_fast_cal(lccap_msb_index);
//	}

	//save
	//cmx_CAL_TEMPC_MUX_HOLD_SEL_7_0 = tempc_mux_hold_sel_2c;

	check_ts_pll_lock(); //to do: turn on after calibration implemented

	//cmx_TX_PLL_CAL_DONE = 1;

	pll_clk_ts_ready_1();
}
*/
#if PLL_DUMP_DEBUG
void test_buf(void) BANKING_CTRL {
	if(llpnum<50) {
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
	if(llpnum<50) {
		lc_stat[llpnum].lp_num = llpnum;
		lc_stat[llpnum].step = step;
		lc_stat[llpnum].fbcnt = reg_PLL_TS_FBC_PLLCAL_CNT_LANE_15_0;
		//lc_stat[llpnum].lccap_msb = (((PLL_TS_UPHY14_CMN_ANAREG_TOP_016.BT.B0) & 0x0f)<<8) + reg_PLL_TS_LCCAP_MSB_LANE_7_0; 
		lc_stat[llpnum].lccap_msb_index = lccap_msb_index;
		lc_stat[llpnum].lccap_lsb = (PLL_TS_UPHY14_CMN_ANAREG_TOP_007.BT.B0) & 0x3f; 
		lc_stat[llpnum].lccap_lsb_index = lccap_lsb_index; 
		lc_stat[llpnum].lccap_ulsb = (PLL_TS_UPHY14_CMN_ANAREG_TOP_006.BT.B0&0x1e)>>1; 				
	}	
	llpnum++;

}

void clear_dump_buf(void) BANKING_CTRL {
	uint8_t i;	
	llpnum = 0;
	for(i=0; i<56; i++) {
		lc_stat[i].lp_num = 0;
		lc_stat[i].step = 0;
		lc_stat[i].fbcnt = 0;		
		lc_stat[i].lccap_msb_index = 0;	
		//lc_stat[i].lccap_msb = 0;				
		lc_stat[i].lccap_lsb_index = 0;	
		lc_stat[i].lccap_lsb = 0;				
		lc_stat[i].lccap_ulsb = 0;				
	}
}

#endif 
