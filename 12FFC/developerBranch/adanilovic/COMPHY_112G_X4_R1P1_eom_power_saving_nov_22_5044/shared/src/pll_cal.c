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
*    Input: VCOAMP_VTH_SEL[3:0], FBDIV_CAL 
*    Output: LCCAP_MSB, LCCAP_LSB
*/

#define PULUP					reg_PULUP
#define SHRTR					reg_SHRTR_TRXPLL_LANE
#define LD_CAL_DATA				reg_ANA_LD_CAL_DATA_LANE
#define LCCAP_LSB 				reg_LCCAP_LSB_LANE_4_0
#define LCCAP_MSB 				reg_LCCAP_MSB_LANE_3_0
#define	FBC_PLLCAL_CNT_READY	reg_FBC_PLLCAL_CNT_READY_LANE
#define	FBC_CNT_START			reg_FBC_CNT_START_LANE
#define LCCAP_MSB_MAX_index		4
#define LCCAP_LSB_MIN			0x0
#define Ftarget 				((uint16_t)lnx_CALIBRATION_DEBUG3_LANE_7_0<<8|(uint16_t)lnx_CALIBRATION_DEBUG2_LANE_7_0) //cmx_SPEED_THRESH_15_0

#define Ttimeout_timer			100000 //uS //10000
#define TIMEOUT_PLL_AMP			1600	//1600us
#define TIMEOUT_PLL_CNT_READY	100
#define TH_AMP 					cmx_VCOAMP_VTH_AMP_7_0
#define TH_NORMAL 				cmx_VCOAMP_VTH_NORMAL_7_0
#define Tpulup					Tus//T_2us//0.5u~4u
#define Tshrtr                  T_8us //T_4us, T_2us, T_8us, T_16us
#define PLLAMPCAL_EN 			reg_PLLAMPCAL_EN_LANE
#define PLLCAL_EN 				reg_PLLCAL_EN_LANE
#define VCOAMP_VTH_SEL 			reg_VCOAMP_VTH_SEL_LANE_3_0


enum {
	CAL_AMP,
	MEASURE_FREQ,
	LSB_CAL,
	MSB_CAL,
	CAL_FINISHED,
	OUT_RANGE,
};

__code uint8_t lccap_msb_thermo_tb[] = {
  0x00, //0000
  0x01, //0001
  0x03, //0011
  0x07, //0111
  0x0f, //1111
};

#if 0
#define PLLAMPCAL_EN 			reg_PLLAMPCAL_EN
#define PLLCAL_EN 				reg_PLLCAL_EN
#define LCVCO_DAC_LSB 			reg_LCVCO_DAC_LSB_4_0
#define LCVCO_DAC_MSB 			reg_LCVCO_DAC_MSB_2_0
#define LCCAP_LSB 				reg_LCCAP_LSB_4_0
#define LCCAP_MSB 				reg_LCCAP_MSB_3_0
#define VCOAMP_HI 				reg_ANA_VCOAMP_HI_RD
#define VCOAMP_VTH_SEL 			reg_VCOAMP_VTH_SEL_3_0 
#define VIND_BAND_SEL			reg_VIND_BAND_SEL
#define Ftarget 				cmx_SPEED_THRESH_15_0  
#define LCVCO_DAC_LSB_MAX       0x1f
#define LCVCO_DAC_MSB_MAX       0x7
#define LCVCO_DAC_LSB_MIN       0
#define LCVCO_DAC_MSB_MIN       0
#define LCCAP_MSB_MAX_index		4
#define LCCAP_LSB_MIN			0x0
#define	TH_FREQ 				cmx_VCOAMP_VTH_FREQ_7_0
#define TH_AMP 					cmx_VCOAMP_VTH_AMP_7_0 
#define TH_NORMAL 				cmx_VCOAMP_VTH_NORMAL_7_0
#define rate					PLL_RATE_SEL	
#define PULUP					reg_PULUP
#define Tpulup					Tus//T_2us//0.5u~4u
#define	Tshrtr 					T_16us //T_4us, T_2us, T_8us, T_16us
#define	Thold_sel 				T_2us //T_2us, T_8us, T_16us
#define	Tpamp0 					T_25us //T_37p5us, T_50us, T_62p5us
#define	Tpamp1 					T_2p5us //T_5us, T_3p75us, T_6p25us, T_37p5us, T_50us, T_62p5us
#define	Tpfreq0 				T_7p5us //T_3us, T_4p5us, T_6us
#define	Tpfreq1 				T_12p5us //T_5us, T_7p5us, T_10us
#define	Tpfreq2 				T_10us //T_4us, T_6us, T_8us
#define	Tpfreq3 				T_7p5us //T_3us, T_4p5us, T_6us
#define	Tpfreq4 				T_50us //T_100us

#define Ttimeout_timer			1000 //uS //10000

#define TEMPC_LEVEL_TODIG					reg_ANA_TEMPC_LEVEL_TODIG_RD_1_0
#define TEMPC_DAC_SEL						reg_TEMPC_DAC_SEL_7_0
#define TEMPC_DAC_VAILD						reg_TEMPC_DAC_VALID 
#define TEMPC_MUX_SEL						reg_TEMPC_MUX_SEL_3_0
#define TEMPC_MUX_HOLD_SEL					reg_TEMPC_MUX_HOLD_SEL_3_0
#define TEMPC_MUX_HOLD_SEL_MAX				11

__code uint8_t lccap_msb_thermo_tb[] = {
  0x00, //0000
  0x01, //0001 
  0x03, //0011
  0x07, //0111
  0x0f, //1111
};  

void pll_cal( void ) BANKING_CTRL {
	uint8_t cnt_rdy, lccap_msb_index, index, save_FBCK_SEL, save_FBDIV_h, save_FBDIV_l;
	uint16_t Fmea, temp;
	
	PHY_STATUS =  ST_PLL_CAL;

	cmx_PLL_CAL_DONE = 0;

	if( cmx_PLL_CAL_EXT_EN ) {
		pllcal_load(PWR);
		goto ext_pllcal;
	}

	cmx_PLL_CAL_PASS = 1;
	cmx_PLL_AMP_CAL_PASS = 1;

	if( cmx_PLLAMP_CAL_SPEEDUP_DISABLE == 0)  reg_LCVCOCAL_BUF_EN = 1;
	
	//reg_RESET_ANA = 0;
	PLLCAL_EN = 1;	

	VCOAMP_VTH_SEL = TH_AMP; // one time for pwrsq
	
	temp = cmx_REFCLK_FREQ_7_0 << (FBC_RATIO+2);
	temp--;
    reg_FBC_CNT_TIMER_15_0_b0 = (uint8_t)temp;
 	reg_FBC_CNT_TIMER_15_0_b1 = (uint8_t)(temp >> 8);

	save_FBDIV_h = reg_FBDIV_9_8;
	save_FBDIV_l = reg_FBDIV_7_0;
	save_FBCK_SEL = reg_ANA_FBCK_SEL;
	
	loadSpdtbl_4_fcnt();
	
	timeout=0;
	if(cmx_PLL_CAL_TIMEOUT_DIS==0) {	
		timeout_start((uint16_t)Ttimeout_timer); 
	}	
	
	{
		if(VIND_BAND_SEL == 1) { 
			LCVCO_DAC_LSB = 15;
			LCVCO_DAC_MSB = 5;
		}
		else {
			LCVCO_DAC_LSB = 15;
			LCVCO_DAC_MSB = 4;
		}		
		
		LCCAP_LSB = 0x1f; 
		LCCAP_MSB = 0;
		
		lccap_msb_index = 0; index = 0;
		delay_ram(Tpfreq0); //3us
		pll_amp_cal();	
		delay_ram(Tpfreq1); //5us
		VCOAMP_VTH_SEL = TH_FREQ;
		
		do {	
			cnt_rdy = reg_FBC_PLLCAL_CNT_READY;
			reg_FBC_CNT_START = 1; 
			if( cnt_rdy ) while(reg_FBC_PLLCAL_CNT_READY && !timeout);
			while(!reg_FBC_PLLCAL_CNT_READY && !timeout);
			reg_FBC_CNT_START = 0; 				
			if(timeout) break;
			Fmea = reg_FBC_PLLCAL_CNT_15_0;
			
			if( Fmea == Ftarget ) goto save_0; 
			else if(Fmea < Ftarget ) break; //find MSB
			else {
				index++;
				if( index > LCCAP_MSB_MAX_index ) {
					cmx_PLL_AMP_CAL_PASS = 0;
					break;
				}
				lccap_msb_index = index;
				LCCAP_MSB = lccap_msb_thermo_tb[lccap_msb_index];
				delay_ram(Tpfreq3);
				
				if(VCOAMP_HI==0)
					pll_amp_cal();	
			}

		} while(!timeout);
			
		do {
			LCCAP_LSB--;
			delay_ram(Tpfreq3);
			
			if(VCOAMP_HI==0) {
				pll_amp_cal();
				VCOAMP_VTH_SEL = TH_FREQ;
			}
			
			cnt_rdy = reg_FBC_PLLCAL_CNT_READY;
			reg_FBC_CNT_START = 1;
			if( cnt_rdy ) while(reg_FBC_PLLCAL_CNT_READY && !timeout);
			while(!reg_FBC_PLLCAL_CNT_READY && !timeout);
			reg_FBC_CNT_START = 0;
			if(timeout) break;
			Fmea = reg_FBC_PLLCAL_CNT_15_0;
			
			if(LCCAP_LSB == LCCAP_LSB_MIN) {
				cmx_PLL_AMP_CAL_PASS = 0;	
				break;
			}			
		
		} while((Fmea < Ftarget) && !timeout); 
	
		delay_ram(Tpfreq4);
	}
save_0:	

	pllcal_save(PWR);
	cal_lccap_msb_index[rate] 	= lccap_msb_index; 
	
	reg_FBDIV_9_8 = save_FBDIV_h;
	reg_FBDIV_7_0 = save_FBDIV_l;
	reg_ANA_FBCK_SEL = save_FBCK_SEL;
	VCOAMP_VTH_SEL = TH_NORMAL;
	PLLCAL_EN = 0;
	PLLAMPCAL_EN = 0;
	reg_LCVCOCAL_BUF_EN = 0;

	check_pll_lock();
	
ext_pllcal:	
	pllamp_step_cnt = cmx_PLLAMP_CAL_STEP_SIZE_7_0;
	pllcal_save(CONT);
	cmx_PLL_CAL_DONE = 1;
	
}


/**
* \module PLL AMP Calibration
*
* \param 
*    <NONE> 
* \return
*    <NONE> 
* \note
*    Input:  
*    Output: LCVCO_DAC_LAB, LCVCO_DAC_MSB
*/
void pll_amp_cal(void) BANKING_CTRL {
    uint8_t min_cnt, max_cnt;
    uint8_t dir, vco_hi;
	
    min_cnt = 0;
    max_cnt = 0;
	dir = 0;
	cmx_PLL_AMP_CAL_PASS = 1;
	cmx_PLL_AMP_CAL_DONE = 0;
	
	PLLAMPCAL_EN = 1;
	
    delay_ram(Tpamp0);
	dir = VCOAMP_HI; vco_hi = dir;
	do{
		dir&=0x0f;
		if (dir == 0x5) break;
		else {
			if(vco_hi == 1) {
				if(pll_amp_dac_dec() == _EXIT_FAIL) {
					LCVCO_DAC_LSB = 0x10;
					LCVCO_DAC_MSB = 0x03;				
					min_cnt++;
					if (min_cnt == 0x3) {
						cmx_PLL_AMP_CAL_PASS = 0;
						break;
					}
				}
				delay_ram(Tpamp1);
			}
			else {
				if( pll_amp_dac_inc() == _EXIT_FAIL ){
					max_cnt++;
					if (max_cnt == 0x3) {
						cmx_PLL_AMP_CAL_PASS = 0;
						break;
					}
				}
				delay_ram(Tpamp1);
			}
		}
		
		dir <<= 1;
		vco_hi = VCOAMP_HI;
		if (vco_hi == 1){
			dir |= 1;
		}	
	} while(!timeout);

	cmx_PLL_AMP_CAL_DONE = 1;

}


/**
* \module PLL amp cal continuous mode
*
* \param 
*    <NONE> 
* \return
*    <NONE> 
* \note
*    Input:  
*    Output: 
*/
uint8_t pll_amp_dac_dec(void) BANKING_CTRL {

	if( LCVCO_DAC_LSB == LCVCO_DAC_LSB_MIN && LCVCO_DAC_MSB==LCVCO_DAC_MSB_MIN ) 
		return _EXIT_FAIL;
	else if(LCVCO_DAC_LSB==LCVCO_DAC_LSB_MIN) {
		LCVCO_DAC_MSB--;
		LCVCO_DAC_LSB = LCVCO_DAC_LSB_MAX;
	}
	else 
		LCVCO_DAC_LSB--;	
	return _EXIT_SUCCESS;
}

uint8_t pll_amp_dac_inc(void) BANKING_CTRL {

	if( LCVCO_DAC_LSB == LCVCO_DAC_LSB_MAX && LCVCO_DAC_MSB==LCVCO_DAC_MSB_MAX ) {
		return _EXIT_FAIL;
	}
	else if (LCVCO_DAC_LSB == LCVCO_DAC_LSB_MAX) {
		LCVCO_DAC_MSB++;	
		LCVCO_DAC_LSB = LCVCO_DAC_LSB_MIN;
	}
	else {
		LCVCO_DAC_LSB++;
	}
	return _EXIT_SUCCESS;
}

void pll_amp_cal_cont(void) BANKING_CTRL {

	uint8_t vcoamp_hi, temp_lvl_todic_rd;
	
	PHY_STATUS =  ST_PLLAMP_CAL_CONT;

	cmx_PLL_AMP_CAL_DONE = 0;
	
	vcoamp_hi = VCOAMP_HI;
	
	if(vcoamp_hi==0) pllamp_step_cnt++;
	else pllamp_step_cnt--;
	
	if(pllamp_step_cnt >= (cmx_PLLAMP_CAL_STEP_SIZE_7_0<<1) || pllamp_step_cnt==0) {
		pllamp_step_cnt = cmx_PLLAMP_CAL_STEP_SIZE_7_0;
	}
	else {
		cmx_PLL_AMP_CAL_DONE = 1;	
		return;
	}
	temp_lvl_todic_rd = temp_level_todic_rd();
	
	/*if( TEMPC_LEVEL_TODIG==0x02 && TEMPC_MUX_HOLD_SEL==TEMPC_MUX_HOLD_SEL_MAX && vcoamp_hi) { //high temp
		//decease dac until vcoamp=0
		pll_amp_dac_dec();
	}
	else if( TEMPC_LEVEL_TODIG==0x01 && TEMPC_MUX_HOLD_SEL==0) { //low temp
		//inc dac until todig=0
		pll_amp_dac_inc();
	}*/
	if( temp_lvl_todic_rd==0x02 && TEMPC_MUX_HOLD_SEL==TEMPC_MUX_HOLD_SEL_MAX && vcoamp_hi) { //high temp
		//decease dac until vcoamp=0
		pll_amp_dac_dec();
	}
	else if( temp_lvl_todic_rd==0x01 && TEMPC_MUX_HOLD_SEL==0) { //low temp
		//inc dac until todig=0
		pll_amp_dac_inc();
	}
	else if(vcoamp_hi==0) {
		pll_amp_dac_inc();		
	}	

	cmx_cal_lcvco_dac_lsb[CONT][rate] = LCVCO_DAC_LSB; 
	cmx_cal_lcvco_dac_msb[CONT][rate] = LCVCO_DAC_MSB; 			

	cmx_PLL_AMP_CAL_DONE = 1;

}



/**
* \module PLL fast Calibration
*
* \param 
*    <NONE> 
* \return
*    <NONE> 
* \note
*    Input:  cmx_FAST_PLL_MODE (default: 0)
*    Output: LCVCO_DAC_LSB, LCCAP_LSB
*/
#define rate 								PLL_RATE_SEL
#define SHRTR								reg_SHRTR
#define LD_CAL_DATA							reg_ANA_LD_CAL_DATA

 extern __code uint8_t gray2bi_tb[];
/*
void do_fast_cal(uint8_t lccap_msb_index) {
	uint8_t	i, speed_diff_abs, step_size, loop_cnt, cnt_rdy, save_FBCK_SEL; 
	int8_t speed_diff;
	uint16_t Fmea, save_FBDIV_h, save_FBDIV_l; 

		loop_cnt = 20;
		
		PLLCAL_EN = 1;	
		save_FBDIV_h = reg_FBDIV_9_8;
		save_FBDIV_l = reg_FBDIV_7_0;
		save_FBCK_SEL = reg_ANA_FBCK_SEL;
		loadSpdtbl_4_fcnt();
		
		do {
			cnt_rdy = reg_FBC_PLLCAL_CNT_READY;
			reg_FBC_CNT_START = 1;
			if( cnt_rdy ) while(reg_FBC_PLLCAL_CNT_READY && !timeout);
			while(!reg_FBC_PLLCAL_CNT_READY && !timeout);
			reg_FBC_CNT_START = 0;
			if(timeout) break;
			Fmea = reg_FBC_PLLCAL_CNT_15_0;
			
			speed_diff = Fmea - Ftarget;			
			speed_diff_abs = abs(speed_diff);
			if( speed_diff_abs <= 10)  step_size = 1;
			else if(speed_diff_abs <= 20) step_size = 2;		
			else if(speed_diff_abs <= 40) step_size = 4;
			else step_size = 8;			
			
			if( Fmea == Ftarget ) break;
			if(Fmea < Ftarget ) {
				if(LCCAP_LSB == 0 && lccap_msb_index>0) { 					
					LCCAP_LSB = 31;
					lccap_msb_index--;
				    LCCAP_MSB = lccap_msb_thermo_tb[lccap_msb_index];		
				}
				else { 
					if( LCCAP_LSB > step_size )
						LCCAP_LSB -= step_size;
					else LCCAP_LSB = 0;	
				}
			}
			else if( Fmea > Ftarget ) {
				if(LCCAP_LSB == 31 && lccap_msb_index<LCCAP_MSB_MAX_index) { 					
					LCCAP_LSB = 0;
					lccap_msb_index++;
				    LCCAP_MSB = lccap_msb_thermo_tb[lccap_msb_index];		
				}
				else { 
					if( LCCAP_LSB < (31-step_size))
						LCCAP_LSB += step_size;
					else LCCAP_LSB = 31;	
				}	
			}
			
		} while(loop_cnt-- > 0 && !timeout);	
		
		reg_FBDIV_9_8 = save_FBDIV_h;
		reg_FBDIV_7_0 = save_FBDIV_l;
		reg_ANA_FBCK_SEL = save_FBCK_SEL;
		PLLCAL_EN = 0;	

}
*/

void pll_tempc_speed_adj(void) BANKING_CTRL {
	uint8_t i, tempc_mux_hold_sel_2c, temp_lvl_todic_rd;
	
	tempc_mux_hold_sel_2c = gray2bi_tb[TEMPC_MUX_HOLD_SEL];
	
	for(i=0; i<3; i++) {
		temp_lvl_todic_rd = temp_level_todic_rd();
		//if( TEMPC_LEVEL_TODIG == 0x2) {
		if( temp_lvl_todic_rd == 0x2) {
			if(tempc_mux_hold_sel_2c<10) {
				tempc_mux_hold_sel_2c++;
			}	
		}
		//else if( TEMPC_LEVEL_TODIG == 0x1) {
		else if( temp_lvl_todic_rd == 0x1) {
			if(tempc_mux_hold_sel_2c>0)	{
				tempc_mux_hold_sel_2c--;
			}	
		}

		TEMPC_MUX_HOLD_SEL = tempc_mux_hold_sel_2c ^ (tempc_mux_hold_sel_2c>>1);

		delay_ram(Thold_sel);
	}		

	//save
	if (PLL_RATE_SEL == 0)
        {
                cmx_CAL_TEMPC_MUX_HOLD_SEL_R0_7_0 = tempc_mux_hold_sel_2c;
	} 
        else if (PLL_RATE_SEL == 1)
        {
                cmx_CAL_TEMPC_MUX_HOLD_SEL_R1_7_0 = tempc_mux_hold_sel_2c;
        }

}

void pll_fast_cal(void) BANKING_CTRL {

	//uint8_t	i, lccap_msb_index, tempc_mux_hold_sel_2c;
	
	//tempc_mux_hold_sel_2c = gray2bi_tb[TEMPC_MUX_HOLD_SEL];

	//timeout_start((uint16_t)10000); //10mS	no used
	
	cmx_PLL_CAL_DONE = 0;

	pllcal_load(CONT);
	
	reg_ANA_PU_PLL  = 1;
	
	PULUP = 1;
	LD_CAL_DATA = 1;
	SHRTR = 1;	
	
	delay_ram(T_p5us);
	reg_ANA_PU_PLL_DLY = 1;
	reg_RESET_ANA = 0;

	delay_ram(Tpulup);
	PULUP = 0;

	delay_ram(Tshrtr);
	SHRTR = 0;
	LD_CAL_DATA = 0;

	//if(cmx_FAST_PLL_MODE==0) { //tempc_speed_adj
		//pll_tempc_speed_adj();
	/*}
	else 
	{ 
		do_fast_cal(lccap_msb_index);
	}*/
	
	//save
	//cmx_CAL_TEMPC_MUX_HOLD_SEL_7_0 = tempc_mux_hold_sel_2c;

	check_pll_lock();
	
	cmx_PLL_CAL_DONE = 1;
	
	pll_clk_ready_1();
	
}

//never used
//__code int16_t TEMPC_DIFF_TBL[] = { -35, -20, -5, 5, 20, 35, 50, 65, 80, 95, 110};

void spdchg_pll_fast_cal(void) BANKING_CTRL {

	//uint8_t	lccap_msb_index, tempc_mux_hold_sel_2c; 
	//int16_t i, tsen_dat, tdiff, adj;	

	cmx_PLL_CAL_DONE = 0;
	
	//tempc_mux_hold_sel_2c = gray2bi_tb[TEMPC_MUX_HOLD_SEL];

	pllcal_load(CONT);

	LD_CAL_DATA = 1;
	SHRTR = 1;	
	delay_ram(Tshrtr);
	SHRTR = 0;
	LD_CAL_DATA = 0;

	/*if(cmx_SPDCHG_FAST_PLL_MODE_1_0==2) // speed_change_mode3
	{ 
		do_fast_cal(lccap_msb_index);
	}
	else if(cmx_SPDCHG_FAST_PLL_MODE_1_0==1) */
	//{ //speed_change_mode2 //tempc_speed_adj
		//pll_tempc_speed_adj();	
	//}
	/* not working
	else {  // speed_change_mode1
		adj = -3;
		tsen_dat = read_tsen_01();
		tdiff = tsen_dat - tsen_dat_cal;
		
		for(i=0; i<11; i++) {
			if(tdiff < TEMPC_DIFF_TBL[i]) break;
			adj++;	
		}
			
		if( adj > 0 ) {
			if( tempc_mux_hold_sel_2c < (11-adj)) 
				tempc_mux_hold_sel_2c += adj;			
			else tempc_mux_hold_sel_2c = 11;
		}
		else if( adj < 0) {
			if( tempc_mux_hold_sel_2c > (-adj)) 
				tempc_mux_hold_sel_2c += adj;
			else tempc_mux_hold_sel_2c = 0;			
		}		
		
		TEMPC_MUX_HOLD_SEL = tempc_mux_hold_sel_2c ^ (tempc_mux_hold_sel_2c>>1);
		delay_ram(Thold_sel);
	} */
	
//	//save
//	cmx_CAL_TEMPC_MUX_HOLD_SEL_7_0 = tempc_mux_hold_sel_2c;

	check_pll_lock();

	cmx_PLL_CAL_DONE = 1;
	
	pll_clk_ready_1();
}

void pllcal_load(uint8_t no) BANKING_CTRL {
	uint8_t lccap_msb_index;
	
	lccap_msb_index = 0;
	LCVCO_DAC_LSB = cmx_cal_lcvco_dac_lsb[no][rate];
	LCVCO_DAC_MSB = cmx_cal_lcvco_dac_msb[no][rate];
	LCCAP_LSB 	  = cmx_cal_lccap_lsb[rate];
	if(no==PWR) 
		lccap_msb_index = conv_thermo_2_bi( cmx_cal_lccap_msb[rate] );	
	else	lccap_msb_index  = cal_lccap_msb_index[rate];
	if(lccap_msb_index>LCCAP_MSB_MAX_index) lccap_msb_index = LCCAP_MSB_MAX_index;
	cal_lccap_msb_index[rate] 	= lccap_msb_index; 	
	
	LCCAP_MSB	   = lccap_msb_thermo_tb[lccap_msb_index];		
}

void check_pll_lock(void) BANKING_CTRL {
	timeout = 0;
	if(cmx_PLL_CAL_TIMEOUT_DIS==0)	{
		timeout_start((uint16_t)Ttimeout_timer); //50mS	
	}	
		
	while(!reg_ANA_PLL_LOCK_RD && !timeout);

}

void pllcal_save(uint8_t no) BANKING_CTRL {
	cmx_cal_lcvco_dac_lsb[no][rate] = (LCVCO_DAC_LSB & 0x1f) | 0x00; 
	cmx_cal_lcvco_dac_msb[no][rate] = (LCVCO_DAC_MSB & 0x07) | 0x00; 
	cmx_cal_lccap_lsb[rate]     = (LCCAP_LSB & 0x1f) | 0x00; 
	cmx_cal_lccap_msb[rate]     = (LCCAP_MSB & 0x0f) | 0x00; 
}

void pll_clk_ready_1(void) BANKING_CTRL { // //ana_pll_clk_ready**=1
	//delay_ram(T_2us);
	reg_ANA_PLL_CLK_READY_PRE0 = 1;	
	delay_ram(T_p5us);
	reg_ANA_PLL_CLK_READY_PRE1 = 1;	
	delay_ram(T_p5us);
	reg_ANA_PLL_CLK_READY = 1; 
}	


uint8_t	temp_level_todic_rd(void) BANKING_CTRL
{
	reg_ANA_TEMPC_LEVEL_TODIG_RD_REQ = 1;
	reg_ANA_TEMPC_LEVEL_TODIG_RD_REQ = 0;

	return reg_ANA_TEMPC_LEVEL_TODIG_RD_1_0;
}
#else

#if 0
void pll_cal( void ) {
	check_pll_lock();
}
#else
void pll_cal( void ) BANKING_CTRL {
	uint8_t state, flag, lccap_msb_index, save_FBDIV_h, save_FBDIV_l, cnt_rdy, save_FBCK_SEL;
	uint16_t Fmea, temp;

	/*if( cmx_PLL_CAL_EXT_EN )
	{
   		//reg_PLL_AMP_TOP_START_LANE = 1;
		lnx_PLL_CAL_DONE_LANE = 1;
		return;
	}*/

	save_FBDIV_h = reg_FBDIV_LANE_9_8;
	save_FBDIV_l = reg_FBDIV_LANE_7_0;
	save_FBCK_SEL =	reg_ANA_TRX_PLL_FBCK_SEL_LANE;

	pll_cal_init();
	delay_ram(T_8us);
	state = CAL_AMP;
	flag = 0;
	lccap_msb_index = 0;

	//while(!lnx_PLL_CAL_DONE_LANE)
	do{
		switch (state)
		{
		case CAL_AMP:
			pll_amp_cal();
			/*if (lnx_PLL_AMP_CAL_PASS_LANE == 0)
				lnx_PLL_CAL_DONE_LANE = 1;*/

		case MEASURE_FREQ:
			timeout = 0;
			if(cmx_PLL_CAL_TIMEOUT_DIS==0)	{
				timeout_start((uint16_t)TIMEOUT_PLL_CNT_READY);
			}
			cnt_rdy = FBC_PLLCAL_CNT_READY;
			
			FBC_CNT_START = 1;
			if (cnt_rdy)
				while(FBC_PLLCAL_CNT_READY && !timeout);
			while(!FBC_PLLCAL_CNT_READY && !timeout);
			FBC_CNT_START = 0;

			if(timeout)
			{
				//lnx_PLL_CAL_DONE_LANE = 1;
				break;
			}

			Fmea = reg_FBC_PLLCAL_CNT_LANE_15_0;
			if(Fmea < Ftarget)
			{
				state = LSB_CAL;
				break;
			}
			else
				state = MSB_CAL;

		case MSB_CAL:
			if (flag == 0)
			{
				//reg_MCU_DEBUG3_LANE_7_0 = Fmea;
				//reg_MCU_DEBUG6_LANE_7_0 = Fmea>>8;
				lccap_msb_index ++;
/*				if (lccap_msb_index == 1)*/
/*				{*/
/*					reg_MCU_DEBUG8_LANE_7_0 = Fmea;*/
/*					reg_MCU_DEBUG9_LANE_7_0 = Fmea>>8;*/
/*				}*/
				LCCAP_MSB = lccap_msb_thermo_tb[lccap_msb_index];
				delay_ram(T_3us);
				if (lccap_msb_index >= LCCAP_MSB_MAX_index)
				{
					state = OUT_RANGE;
					break;
				}
				else
				{
					if(flag==1){
						flag = 2;
						state = CAL_FINISHED;
						break;
					}
					state = CAL_AMP;
					break;
				}
			}
			else
				state = CAL_FINISHED;
		case CAL_FINISHED:
			lnx_PLL_CAL_PASS_LANE = 1;
			lnx_PLL_CAL_DONE_LANE = 1;
			break;

		case LSB_CAL:
			/*if (LCCAP_LSB == 0x1f)
			{
				reg_MCU_DEBUG7_LANE_7_0 = Fmea;
				reg_MCU_DEBUGC_LANE_7_0 = Fmea >> 8;

			}*/
			LCCAP_LSB--;
			delay_ram(T_3us);
			flag = 1;
			if (LCCAP_LSB != LCCAP_LSB_MIN)
			{
				state = CAL_AMP;
				break;
			}
		case OUT_RANGE:
			lnx_PLL_CAL_DONE_LANE = 1;
			break;

		default:
			break;
		}
	}while(!lnx_PLL_CAL_DONE_LANE);


	flag = 0;
	reg_FBDIV_LANE_9_8 = save_FBDIV_h;
	reg_FBDIV_LANE_7_0 = save_FBDIV_l;
	
	//lnx_CALIBRATION_DEBUG1_LANE_7_0 = save_FBDIV_l;
	
	reg_ANA_TRX_PLL_FBCK_SEL_LANE = save_FBCK_SEL;
	reg_LCVCOCAL_BUF_EN_LANE = 0;
 	PLLAMPCAL_EN = 0;
        PLLCAL_EN = 0;
    // hizhao's 20190909 req
	//VCOAMP_VTH_SEL = TH_NORMAL;	
	
	check_pll_lock();
}

#endif

//void pll_amp_cal_cont(void) {}
//void pll_tempc_speed_adj(void) {}
//void pll_fast_cal(void) {}
void check_pll_lock(void) BANKING_CTRL {
	timeout = 0;
	if(cmx_PLL_CAL_TIMEOUT_DIS==0)	{
		timeout_start((uint16_t)Ttimeout_timer); //50mS
	}

	while(!reg_ANA_PLL_LOCK_RD_LANE && !timeout);
	//while(!reg_ANA_PLL_LOCK_RD_LANE);

}

void pll_cal_init( void ) BANKING_CTRL {
	uint16_t temp;

	PHY_STATUS =  ST_PLL_CAL;

	lnx_PLL_CAL_PASS_LANE = 0;	//need to work: lane based register
	lnx_PLL_AMP_CAL_PASS_LANE = 0;	//need to work: lane based register
	lnx_PLL_AMP_CAL_DONE_LANE = 0;
	lnx_PLL_CAL_DONE_LANE = 0;

//Modified during pseudo code/fw code alignment meeting ************************
	
	//Analog team will provide temperature mapping table later
	//rate = 0; //to do only one rate for 112G
	//load_init_temp_table(rate);
	// TODO: use temperature ramping to decide init temp table
	// grey code of 5
	reg_LCPLL_TEMPC_MUX_SEL_EXT_LANE_3_0 = 0x7;
	reg_LCPLL_TEMPC_MUX_HOLD_SEL_EXT_LANE_3_0 = 0x7;
	reg_LCPLL_TEMPC_EXT_EN_LANE = 1;

	if( cmx_PLLAMP_CAL_SPEEDUP_DISABLE == 0) { 
		reg_LCVCOCAL_BUF_EN_LANE = 1;				//need to work: lane based register
		reg_PLL_AMP_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 = 2;  	//2 means 4 codes per up/down
		reg_PLL_AMP_CAL_CONT_MODE_STEPSIZE_LANE_2_0 = 5;	//5 means 2 codes per up/down
		reg_PLL_AMP_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 0x14;
	}
	else{
		reg_LCVCOCAL_BUF_EN_LANE = 0;
		reg_PLL_AMP_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 = 0;
		reg_PLL_AMP_CAL_CONT_MODE_STEPSIZE_LANE_2_0 = 2;	//2 means 1/4 codes per up/down
		reg_PLL_AMP_CAL_SAMPLE_PULSE_DIV_LANE_7_0 = 0xff;
	}
//******************************************************************************
	PLLAMPCAL_EN = 1;
	PLLCAL_EN = 1;
	// hizhao's 20190909 req
	//VCOAMP_VTH_SEL = TH_AMP;
	VCOAMP_VTH_SEL = 0xD; //default midas val is 0x0C uint8_t VCOAMP_VTH_NORMAL_7_0                    : 8;   /* [15:8]     r/w 8'h0c*/
//From Lisa's documents*********************************************************
	temp = cmx_REFCLK_FREQ_7_0 << (FBC_RATIO+2);
	temp--;
	reg_FBC_CNT_TIMER_LANE_15_0_b0 = (uint8_t)temp;
	reg_FBC_CNT_TIMER_LANE_15_0_b1 = (uint8_t)(temp >> 8);
//******************************************************************************

	loadSpdtbl_4_fcnt();  //loadSpdtbl_4_fcnt (spd_ctrl.c) sets reg_ANA_TRX_PLL_FBCK_SEL_LANE = 0;
	LCCAP_MSB = 0x0;
	LCCAP_LSB = 0x1f;
}

void pll_amp_cal(void) BANKING_CTRL {

	reg_PLL_AMP_TOP_START_LANE = 0;
	reg_PLL_AMP_TOP_START_LANE = 1;
	
	// ceproject M-1640
	delay_ram(T_p5us);
	//timeout = 0;
	/*if(cmx_PLL_CAL_TIMEOUT_DIS==0)	{
		timeout_start((uint16_t)TIMEOUT_PLL_AMP); //50mS
	}
	while(!reg_PLL_AMP_TOP_DONE_LANE && !timeout);*/
	while(!reg_PLL_AMP_TOP_DONE_LANE);

	if (!reg_PLL_AMP_CAL_TIMEOUT_RD_LANE)
		lnx_PLL_AMP_CAL_PASS_LANE = 1;

	lnx_cal_pll_amp_result_lane = reg_PLL_AMP_CAL_RESULT_RD_LANE_7_0;
	reg_PLL_AMP_CAL_RESULT_EXT_LANE_7_0 = lnx_cal_pll_amp_result_lane;
	
	reg_PLL_AMP_TOP_START_LANE = 0;
	lnx_PLL_AMP_CAL_DONE_LANE = 1;
	delay_ram(T_8us);
}

void pll_fast_cal(void) BANKING_CTRL {

	//uint8_t	i, lccap_msb_index, tempc_mux_hold_sel_2c;

	//tempc_mux_hold_sel_2c = gray2bi_tb[TEMPC_MUX_HOLD_SEL];

	//timeout_start((uint16_t)10000); //10mS	no used

	//cmx_PLL_CAL_DONE = 0;

	//pllcal_load(CONT);

	reg_ANA_PU_PLL_LANE  = 1;

	//reg_SHRTR = 1;
	
	PULUP = 1;
	LD_CAL_DATA = 1;
	SHRTR = 1;
	
	delay_ram(T_p5us);
	reg_ANA_PU_PLL_DLY_LANE = 1;
	reg_RESET_ANA_LANE = 0;

	delay_ram(Tpulup);
	PULUP = 0;

	delay_ram(Tshrtr);
	SHRTR = 0;
	LD_CAL_DATA = 0;
	delay_ram(T_12us);
	//reg_SHRTR = 0;

	//if(cmx_FAST_PLL_MODE==0) { //tempc_speed_adj
//		pll_tempc_speed_adj();
	/*}
	else
	{
		do_fast_cal(lccap_msb_index);
	}*/

	//save
	//cmx_CAL_TEMPC_MUX_HOLD_SEL_7_0 = tempc_mux_hold_sel_2c;

	check_pll_lock(); //to do: turn on after calibration implemented

	//cmx_PLL_CAL_DONE = 1;
	//reg_RESET_ANA_LANE = 0;

	pll_clk_ready_1();

}
#endif


