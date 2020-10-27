/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file pll_cal.c
* \purpose LCPLL calibration
* \History
*	10/15/2015 Heejeong Ryu		Initial 
*/
#include "common.h"

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

#define TEMPC_LEVEL_TODIG					reg_ANA_TEMPC_LEVEL_TODIG_RD_1_0
#define TEMPC_DAC_SEL						reg_TEMPC_DAC_SEL_7_0
#define TEMPC_DAC_VAILD						reg_TEMPC_DAC_VALID 
#define TEMPC_MUX_SEL						reg_TEMPC_MUX_SEL_3_0
#define TEMPC_MUX_HOLD_SEL					reg_TEMPC_MUX_HOLD_SEL_3_0
#define TEMPC_MUX_HOLD_SEL_2C_MAX	10
#define TEMPC_MUX_SEL_2C_MAX	10
#define tempc_mux_sel_2c	cmx_CAL_TEMPC_MUX_SEL_7_0
#define tempc_mux_hold_sel_2c cmx_CAL_TEMPC_MUX_HOLD_SEL_7_0


__code uint8_t lccap_msb_thermo_tb[] = {
  0x00, //0000
  0x01, //0001 
  0x03, //0011
  0x07, //0111
  0x0f, //1111
};  

void pll_cal( void ){
	uint8_t cnt_rdy, save_FBDIV_h, save_FBDIV_l, save_FBCK_SEL, lccap_msb_index;
	uint16_t Fmea, temp;
	
	PHY_STATUS =  ST_PLL_CAL;
	
	cmx_PLL_CAL_DONE = 0;
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
	
	timeout_start((uint16_t)10000); //10mS	
	
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
		lccap_msb_index = 0;
		delay(Tpfreq0); //3us
		pll_amp_cal();	
		delay(Tpfreq1); //5us
		VCOAMP_VTH_SEL = TH_FREQ;
		
		do {	
			cnt_rdy = reg_FBC_PLLCAL_CNT_READY;
			reg_FBC_CNT_START = 1; 
			if( cnt_rdy ) while(reg_FBC_PLLCAL_CNT_READY);
			while(!reg_FBC_PLLCAL_CNT_READY );
			reg_FBC_CNT_START = 0; 				
			Fmea = reg_FBC_PLLCAL_CNT_15_0;
			
			if( Fmea == Ftarget ) goto save_0; 
			else if(Fmea < Ftarget ) break; //find MSB
			else {
				lccap_msb_index++;
				LCCAP_MSB = lccap_msb_thermo_tb[lccap_msb_index];
				if( lccap_msb_index == LCCAP_MSB_MAX_index ) {
					cmx_PLL_AMP_CAL_PASS = 0;
					break;
				}
				delay(Tpfreq3);
				
				if(VCOAMP_HI==0)
					pll_amp_cal();	
			}

		} while (!timeout);
			
		do {
			LCCAP_LSB--;
			delay(Tpfreq3);
			
			if(VCOAMP_HI==0) {
				pll_amp_cal();
				VCOAMP_VTH_SEL = TH_FREQ;
			}
			
			cnt_rdy = reg_FBC_PLLCAL_CNT_READY;
			reg_FBC_CNT_START = 1;
			if( cnt_rdy ) while(reg_FBC_PLLCAL_CNT_READY);
			while(!reg_FBC_PLLCAL_CNT_READY);
			reg_FBC_CNT_START = 0;
			Fmea = reg_FBC_PLLCAL_CNT_15_0;
			
			if(LCCAP_LSB == LCCAP_LSB_MIN) {
				cmx_PLL_AMP_CAL_PASS = 0;	
				break;
			}			
		
		} while ((Fmea < Ftarget) && !timeout); 
	
		delay(Tpfreq4); 
	}
save_0:	

	if(rate == 1 ) {
		cmx_CAL_LCVCO_DAC_LSB_R1_7_0 = reg_LCVCO_DAC_LSB_4_0;
		cmx_CAL_LCVCO_DAC_MSB_R1_7_0 = reg_LCVCO_DAC_MSB_2_0; //LCVCO_DAC_MSB;
		cmx_CAL_LCCAP_LSB_R1_7_0  	= reg_LCCAP_LSB_4_0;
		cal_lccap_msb_index[1] 	    = lccap_msb_index; 
		cmx_CAL_LCCAP_MSB_R1_7_0	= LCCAP_MSB;
	}
	else {
		cmx_CAL_LCVCO_DAC_LSB_R0_7_0 = reg_LCVCO_DAC_LSB_4_0;
		cmx_CAL_LCVCO_DAC_MSB_R0_7_0 = reg_LCVCO_DAC_MSB_2_0; //LCVCO_DAC_MSB;
		cmx_CAL_LCCAP_LSB_R0_7_0  	= reg_LCCAP_LSB_4_0;
		cal_lccap_msb_index[0] 	= lccap_msb_index; 
		cmx_CAL_LCCAP_MSB_R0_7_0	= LCCAP_MSB;
	}
	
	reg_FBDIV_9_8 = save_FBDIV_h;
	reg_FBDIV_7_0 = save_FBDIV_l;
	reg_ANA_FBCK_SEL = save_FBCK_SEL;
	VCOAMP_VTH_SEL = TH_NORMAL;
	PLLCAL_EN = 0;
	PLLAMPCAL_EN = 0;
	reg_LCVCOCAL_BUF_EN = 0;
	
	cmx_PLL_CAL_DONE = 1;

	timeout_start((uint16_t)50000); //50mS	
	while(!reg_ANA_PLL_LOCK_RD && !timeout); 
	
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
void pll_amp_cal(void) {
    uint8_t min_cnt, max_cnt;
    uint8_t dir, vco_hi;
	
    min_cnt = 0;
    max_cnt = 0;
	dir = 0;
	cmx_PLL_AMP_CAL_PASS = 1;
	cmx_PLL_AMP_CAL_DONE = 0;
	
	PLLAMPCAL_EN = 1;
	
    delay(Tpamp0);
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
			}
			else {
				if( pll_amp_dec_inc() == _EXIT_FAIL ){
					max_cnt++;
					if (max_cnt == 0x3) {
						cmx_PLL_AMP_CAL_PASS = 0;
						break;
					}
				}
			}   
			delay(Tpamp1);
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
uint8_t pll_amp_dac_dec(void) {

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

uint8_t pll_amp_dec_inc(void) {

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

void pll_amp_cal_cont(void) {

	PHY_STATUS =  ST_PLLAMP_CAL_CONT;

	if( TEMPC_LEVEL_TODIG==0x02 && tempc_mux_hold_sel_2c==TEMPC_MUX_HOLD_SEL_2C_MAX && VCOAMP_HI) { //high temp
		//decease dac until vcoamp=0
		pll_amp_dac_dec();
	}
	else if( TEMPC_LEVEL_TODIG==0x01 && tempc_mux_hold_sel_2c==0) { //low temp
		//inc dac until todig=0
		pll_amp_dec_inc();
	}
	else if(!VCOAMP_HI) {
		pll_amp_dec_inc();		
	}	

	if(rate == 1 ) {
		cmx_CAL_LCVCO_DAC_LSB_R1_7_0 = reg_LCVCO_DAC_LSB_4_0;
		cmx_CAL_LCVCO_DAC_MSB_R1_7_0 = reg_LCVCO_DAC_MSB_2_0; 
	}
	else {
		cmx_CAL_LCVCO_DAC_LSB_R0_7_0 = reg_LCVCO_DAC_LSB_4_0;
		cmx_CAL_LCVCO_DAC_MSB_R0_7_0 = reg_LCVCO_DAC_MSB_2_0; 
	}
	
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
			if( cnt_rdy ) while(reg_FBC_PLLCAL_CNT_READY);
			while(!reg_FBC_PLLCAL_CNT_READY && !timeout);
			reg_FBC_CNT_START = 0;
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
void pll_fast_cal(void) {

	uint8_t	i, lccap_msb_index;
	uint8_t pre_level_todig, temp_level_todig, current_level_todig;
	
	tempc_mux_hold_sel_2c = gray2bi_tb[TEMPC_MUX_HOLD_SEL];
	//timeout_start((uint16_t)10000);
	
	if(rate == 1) {
		LCVCO_DAC_LSB  = cmx_CAL_LCVCO_DAC_LSB_R1_7_0;
		LCVCO_DAC_MSB  = cmx_CAL_LCVCO_DAC_MSB_R1_7_0;	
		LCCAP_LSB 	   = cmx_CAL_LCCAP_LSB_R1_7_0;
		lccap_msb_index  = cal_lccap_msb_index[1];
		if(lccap_msb_index>LCCAP_MSB_MAX_index) lccap_msb_index = 0;
		LCCAP_MSB	   = lccap_msb_thermo_tb[lccap_msb_index];		
	}
	else {
		LCVCO_DAC_LSB  = cmx_CAL_LCVCO_DAC_LSB_R0_7_0;
		LCVCO_DAC_MSB  = cmx_CAL_LCVCO_DAC_MSB_R0_7_0;	
		LCCAP_LSB 	   = cmx_CAL_LCCAP_LSB_R0_7_0;
		lccap_msb_index  = cal_lccap_msb_index[0];
		if(lccap_msb_index>LCCAP_MSB_MAX_index) lccap_msb_index = 0;
		LCCAP_MSB	   = lccap_msb_thermo_tb[lccap_msb_index];		
	}

	reg_ANA_PU_PLL  = 1;
	
	PULUP = 1;
	LD_CAL_DATA = 1;
	SHRTR = 1;	
	
	delay(T_p5us);
	reg_ANA_PU_PLL_DLY = 1;
	reg_RESET_ANA = 0;

	delay(Tpulup);
	PULUP = 0;

	delay(Tshrtr);
	SHRTR = 0;
	LD_CAL_DATA = 0;

	//if(cmx_FAST_PLL_MODE==0) { //tempc_speed_adj
			for(i=0; i<3; i++) {
				if( TEMPC_LEVEL_TODIG == 0x2 && tempc_mux_hold_sel_2c < 11 ) {
					tempc_mux_hold_sel_2c++;
					TEMPC_MUX_HOLD_SEL = tempc_mux_hold_sel_2c ^ (tempc_mux_hold_sel_2c>>1);
				}	
				else if( TEMPC_LEVEL_TODIG == 0x1 && tempc_mux_hold_sel_2c > 0){
					tempc_mux_hold_sel_2c--;
                    TEMPC_MUX_HOLD_SEL = tempc_mux_hold_sel_2c ^ (tempc_mux_hold_sel_2c>>1);
				}
				delay(Thold_sel); 
			}		
	/*}
	else 
	{ 
		do_fast_cal(lccap_msb_index);
	}*/
	//save
	cmx_CAL_TEMPC_MUX_HOLD_SEL_7_0 = tempc_mux_hold_sel_2c;
	
	pll_clk_ready_1();
}

__code int16_t TEMPC_DIFF_TBL[] = { -35, -20, -5, 5, 20, 35, 50, 65, 80, 95, 110};

void spdchg_pll_fast_cal(void) {

	uint8_t	lccap_msb_index; 
	int16_t i, tsen_dat, tdiff, adj;	
	//DBG_Printf("\r\n speed change!");
	tempc_mux_hold_sel_2c = gray2bi_tb[TEMPC_MUX_HOLD_SEL];

	if(rate == 1) {
		LCVCO_DAC_LSB  = cmx_CAL_LCVCO_DAC_LSB_R1_7_0;
		LCVCO_DAC_MSB  = cmx_CAL_LCVCO_DAC_MSB_R1_7_0;	
		LCCAP_LSB 	   = cmx_CAL_LCCAP_LSB_R1_7_0;
		lccap_msb_index  = cal_lccap_msb_index[1];
		LCCAP_MSB	   = lccap_msb_thermo_tb[lccap_msb_index];		
	}
	else {
		LCVCO_DAC_LSB  = cmx_CAL_LCVCO_DAC_LSB_R0_7_0;
		LCVCO_DAC_MSB  = cmx_CAL_LCVCO_DAC_MSB_R0_7_0;	
		LCCAP_LSB 	   = cmx_CAL_LCCAP_LSB_R0_7_0;
		lccap_msb_index  = cal_lccap_msb_index[0];
		LCCAP_MSB	   = lccap_msb_thermo_tb[lccap_msb_index];		
	}

	LD_CAL_DATA = 1;
	SHRTR = 1;	
	delay(Tshrtr); 
	SHRTR = 0;
	LD_CAL_DATA = 0;

	/*if(cmx_SPDCHG_FAST_PLL_MODE_1_0==2) // speed_change_mode3
	{ 
		do_fast_cal(lccap_msb_index);
	}
	else if(cmx_SPDCHG_FAST_PLL_MODE_1_0==1) */
	{ //speed_change_mode2 //tempc_speed_adj
			for(i=0; i<3; i++) {
				if( TEMPC_LEVEL_TODIG == 0x2) {
					if(tempc_mux_hold_sel_2c<11) {
						tempc_mux_hold_sel_2c++;
                        TEMPC_MUX_HOLD_SEL = tempc_mux_hold_sel_2c ^ (tempc_mux_hold_sel_2c>>1);
					}	
				}
				else if( TEMPC_LEVEL_TODIG == 0x1) {
					if(tempc_mux_hold_sel_2c>0)	{
						tempc_mux_hold_sel_2c--;
						TEMPC_MUX_HOLD_SEL = tempc_mux_hold_sel_2c ^ (tempc_mux_hold_sel_2c>>1);
					}	
				}

				delay(Thold_sel);
			}		
	}
	/* not working
	else {  // speed_change_mode1
		adj = -3;
		tsen_dat = read_tsen();
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
		delay(Thold_sel); 	
	} */
	
	//save
	cmx_CAL_TEMPC_MUX_HOLD_SEL_7_0 = tempc_mux_hold_sel_2c;
	
	pll_clk_ready_1();
}

void pll_clk_ready_1(void) { // //ana_pll_clk_ready**=1
	if(reg_ANA_PLL_CLK_READY) return;
	//delay(T_2us);
	reg_ANA_PLL_CLK_READY_PRE0 = 1;	
	delay(T_p5us);
	reg_ANA_PLL_CLK_READY_PRE1 = 1;	
	delay(T_p5us);
	reg_ANA_PLL_CLK_READY = 1; 
}	


	   


