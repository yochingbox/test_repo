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
#pragma constseg BANK1
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
#define Tpulup					cmx_TPLLPULUP_7_0 //10 //Tus//T_2us//0.5u~4u
#define	Tshrtr 					cmx_TSHRTR_7_0 //160 //T_16us //T_4us, T_2us, T_8us, T_16us
#define	Thold_sel 				20 //T_2us //T_2us, T_8us, T_16us
#define	Tpamp0 					cmx_TPLLAMP0_15_0 //250 //T_25us //T_37p5us, T_50us, T_62p5us
//#define	Tpamp1 					25 //T_2p5us //T_5us, T_3p75us, T_6p25us, T_37p5us, T_50us, T_62p5us
#define	Tpfreq0 				cmx_TPLLFREQ0_7_0 //75 //T_7p5us //T_3us, T_4p5us, T_6us
#define	Tpfreq1 				cmx_TPLLFREQ1_7_0 //125 //T_12p5us //T_5us, T_7p5us, T_10us
#define	Tpfreq2 				cmx_TPLLFREQ2_7_0 //100 //T_10us //T_4us, T_6us, T_8us
#define	Tpfreq3 				cmx_TPLLFREQ3_7_0 //75 //T_7p5us //T_3us, T_4p5us, T_6us
#define	Tpfreq4 				cmx_TPLLFREQ4_15_0 //500 //T_50us //T_100us

#define Ttimeout_timer			10000 //uS 

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

void set_lcvco_dac(uint8_t dac_h, uint8_t dac_l) BANKING_CTRL {

	UPHY14_CMN_ANAREG_TOP_173.BT.B0 = (dac_l<<3)|dac_h; 

}

void pll_cal( void ) BANKING_CTRL {
	uint8_t cnt_rdy, lccap_msb_index, index, save_FBCK_SEL, save_FBDIV_h, save_FBDIV_l;
	uint8_t lcvco_dac_msb, lcvco_dac_lsb;
	uint16_t Fmea, temp;
	
	PHY_STATUS =  ST_PLL_CAL;

	cmx_PLL_CAL_DONE = 0;

	if( cmx_PLL_CAL_EXT_EN /*|| (phy_mode==PCIE && cmx_PLL_CAL_PASS)*/) {
		pllcal_load(PWR);
		goto ext_pllcal;
	}

	cmx_PLL_CAL_PASS = 1;
	cmx_PLL_AMP_CAL_PASS = 1;

	if( cmx_PLLAMP_CAL_SPEEDUP_DISABLE == 0)  reg_LCVCOCAL_BUF_EN = 1;
	
	//reg_RESET_ANA = 0;
	PLLCAL_EN = 1;	
	reg_FBC_CNT_START = 0;
	
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
			lcvco_dac_lsb = 15;
			lcvco_dac_msb = 5;
		}
		else {
			lcvco_dac_lsb = 15;
			lcvco_dac_msb = 4;
		}		
		
		set_lcvco_dac(lcvco_dac_msb, lcvco_dac_lsb);
		
		LCCAP_LSB = 0x1f; 
		LCCAP_MSB = 0;
		
		lccap_msb_index = 0; index = 0;
		delay01(Tpfreq0); //3us
		pll_amp_cal();	
		delay01(Tpfreq1); //5us
		VCOAMP_VTH_SEL = TH_FREQ;
		
		do {	
			cnt_rdy = reg_FBC_PLLCAL_CNT_READY;
			reg_FBC_CNT_START = 0; 				
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
				delay01(Tpfreq3);
				
				if(VCOAMP_HI==0)
					pll_amp_cal();	
			}

		} while (!timeout);
			
		do {
			LCCAP_LSB--;
			delay01(Tpfreq3);
			
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
		
		} while ((Fmea < Ftarget) && !timeout); 
	
		delay01(Tpfreq4); 
	}
save_0:	
	
	reg_FBDIV_9_8 = save_FBDIV_h;
	reg_FBDIV_7_0 = save_FBDIV_l;
	reg_ANA_FBCK_SEL = save_FBCK_SEL;
	VCOAMP_VTH_SEL = TH_NORMAL;
	PLLCAL_EN = 0;
	PLLAMPCAL_EN = 0;
	reg_LCVCOCAL_BUF_EN = 0;

	check_pll_lock();

	if(timeout) { 
		cmx_PLL_CAL_PASS = 0;		
		//pllcal_load(PWR);		
	}
	else {
		cmx_cal_lcvco_dac[PWR][rate] = UPHY14_CMN_ANAREG_TOP_173.BT.B0; 
		cmx_cal_lccap_lsb[rate]     = (LCCAP_LSB & 0x1f) | 0x00; 
		cmx_cal_lccap_msb[rate]     = (LCCAP_MSB & 0x0f) | 0x00; 
		cal_lccap_msb_index[rate] 	= lccap_msb_index; 
	}
	
ext_pllcal:	
	cmx_PLL_CAL_TIMEOUT_DIS = pll_cal_timeout_dis_save;
	pllamp_step_cnt = cmx_PLLAMP_CAL_STEP_SIZE_7_0;
	//pllcal_save(CONT);
	cmx_cal_lcvco_dac[CONT][rate] = UPHY14_CMN_ANAREG_TOP_173.BT.B0; 
	cmx_PLL_CAL_DONE = 1;	
	
	#if _DBG_PLL==1
	Printf("\r\n=== save rate%d PWR:lcvco(%d, %d)", rate, cmx_cal_lcvco_dac[PWR][rate]&0x07, (cmx_cal_lcvco_dac[PWR][rate]&0xf8)>>3);
	Printf(" CONT:lcvco(%d, %d)", cmx_cal_lcvco_dac[CONT][rate]&0x07, (cmx_cal_lcvco_dac[CONT][rate]&0xf8)>>3);
	Printf(" lccap(%d, %d)", cal_lccap_msb_index[rate], cmx_cal_lccap_lsb[rate]);
	Printf(" ana-lcvco(%d, %d) cap(%d, %d)", LCVCO_DAC_MSB, LCVCO_DAC_LSB, LCCAP_MSB, LCCAP_LSB);	
	#endif

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
	uint8_t lcvco_dac_msb, lcvco_dac_lsb;
	
    min_cnt = 0;
    max_cnt = 0;
	dir = 0;
	cmx_PLL_AMP_CAL_PASS = 1;
	cmx_PLL_AMP_CAL_DONE = 0;
	
	PLLAMPCAL_EN = 1;
	
    delay01(Tpamp0);
	dir = VCOAMP_HI; vco_hi = dir;
	do{
		dir&=0x0f;
		if (dir == 0x5) break;
		else {
			if(vco_hi == 1) {
				if(pll_amp_dac_dec() == _EXIT_FAIL) {
					lcvco_dac_lsb = 0x10;
					lcvco_dac_msb = 0x03;		
					set_lcvco_dac(lcvco_dac_msb, lcvco_dac_lsb);
					
					min_cnt++;
					if (min_cnt == 0x3) {
						cmx_PLL_AMP_CAL_PASS = 0;
						break;
					}
				}
			}
			else {
				if( pll_amp_dac_inc() == _EXIT_FAIL ){
					max_cnt++;
					if (max_cnt == 0x3) {
						cmx_PLL_AMP_CAL_PASS = 0;
						break;
					}
				}
			}
			
			if(cmx_PLLAMP_CAL_SPEEDUP_DISABLE==1) //slow
				delay01(cmx_TPLLAMP1_SLOW_15_0);
			else 	
				delay01(cmx_TPLLAMP1_FAST_7_0); //2.5u
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
	uint8_t lcvco_dac_msb, lcvco_dac_lsb;

	lcvco_dac_msb = LCVCO_DAC_MSB;
	lcvco_dac_lsb = LCVCO_DAC_LSB;
	
	if( lcvco_dac_lsb == LCVCO_DAC_LSB_MIN && lcvco_dac_msb==LCVCO_DAC_MSB_MIN ) 
		return _EXIT_FAIL;
	else if(lcvco_dac_lsb==LCVCO_DAC_LSB_MIN) {
		lcvco_dac_msb--;
		lcvco_dac_lsb = LCVCO_DAC_LSB_MAX;
	}
	else 
		lcvco_dac_lsb--;	
	
	set_lcvco_dac(lcvco_dac_msb, lcvco_dac_lsb);			
		
	return _EXIT_SUCCESS;
}

uint8_t pll_amp_dac_inc(void) BANKING_CTRL {

	uint8_t lcvco_dac_msb, lcvco_dac_lsb;

	lcvco_dac_msb = LCVCO_DAC_MSB;
	lcvco_dac_lsb = LCVCO_DAC_LSB;

	if( lcvco_dac_lsb == LCVCO_DAC_LSB_MAX && lcvco_dac_msb==LCVCO_DAC_MSB_MAX ) {
		return _EXIT_FAIL;
	}
	else if (lcvco_dac_lsb == LCVCO_DAC_LSB_MAX) {
		lcvco_dac_msb++;	
		lcvco_dac_lsb = LCVCO_DAC_LSB_MIN;
	}
	else {
		lcvco_dac_lsb++;
	}
	
	set_lcvco_dac(lcvco_dac_msb, lcvco_dac_lsb);			
	
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

	//cmx_cal_lcvco_dac_lsb[CONT][rate] = (reg_LCVCO_DAC_LSB_4_0 & 0x1f) | 0x00;  
	//cmx_cal_lcvco_dac_msb[CONT][rate] = (reg_LCVCO_DAC_MSB_2_0 & 0x07) | 0x00; 			
	cmx_cal_lcvco_dac[CONT][rate] = UPHY14_CMN_ANAREG_TOP_173.BT.B0;
	
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

void pll_fast_cal(void) BANKING_CTRL {

	//uint8_t	i, lccap_msb_index, tempc_mux_hold_sel_2c;
	
	//tempc_mux_hold_sel_2c = gray2bi_tb[TEMPC_MUX_HOLD_SEL];

	//timeout_start((uint16_t)10000); //10mS	no used
	
	cmx_PLL_CAL_DONE = 0;

	pllcal_load(CONT);
	
	reg_ANA_PU_PLL  = 1;
	
	PULUP = 1;
	LD_CAL_DATA = 1;
	reg_LCVCOCAL_BUF_EN = 1; //need to align with SHRTR. Mengjie requested.
	SHRTR = 1;	
	
	delay01(5);
	reg_ANA_PU_PLL_DLY = 1;
	reg_RESET_ANA = 0;

	delay01(Tpulup);
	PULUP = 0;

	delay01(Tshrtr);
	SHRTR = 0;
	reg_LCVCOCAL_BUF_EN = 0;
	LD_CAL_DATA = 0;

	//if(cmx_FAST_PLL_MODE==0) { //tempc_speed_adj
		pll_tempc_speed_adj();
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
	//int16_t i, tdiff, adj;	

	cmx_PLL_CAL_DONE = 0;
	
	//tempc_mux_hold_sel_2c = gray2bi_tb[TEMPC_MUX_HOLD_SEL];

	pllcal_load(CONT);

	LD_CAL_DATA = 1;
	reg_LCVCOCAL_BUF_EN = 1;
	SHRTR = 1;	
	delay01(Tshrtr); 
	SHRTR = 0;
	reg_LCVCOCAL_BUF_EN = 0;
	LD_CAL_DATA = 0;

	/*if(cmx_SPDCHG_FAST_PLL_MODE_1_0==2) // speed_change_mode3
	{ 
		do_fast_cal(lccap_msb_index);
	}
	else if(cmx_SPDCHG_FAST_PLL_MODE_1_0==1) */
	{ //speed_change_mode2 //tempc_speed_adj
		pll_tempc_speed_adj();	
	}
	/* not working
	else {  // speed_change_mode1
		adj = -3;
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
		delay01(Thold_sel); 	
	} */
	
//	//save
//	cmx_CAL_TEMPC_MUX_HOLD_SEL_7_0 = tempc_mux_hold_sel_2c;

	check_pll_lock();

	cmx_PLL_CAL_DONE = 1;
	
	pll_clk_ready_1();
}

void pllcal_load(uint8_t no) BANKING_CTRL {
	uint8_t lccap_msb_index;
	uint8_t inx = rate;
	
	lccap_msb_index = 0;
	//set_lcvco_dac(cmx_cal_lcvco_dac_msb[no][inx], cmx_cal_lcvco_dac_lsb[no][inx]);			
	UPHY14_CMN_ANAREG_TOP_173.BT.B0 = cmx_cal_lcvco_dac[no][inx];

	LCCAP_LSB 	  = cmx_cal_lccap_lsb[inx];
	if(no==PWR) 
		lccap_msb_index = conv_thermo_2_bi( cmx_cal_lccap_msb[inx] );	
	else	lccap_msb_index  = cal_lccap_msb_index[inx];
	if(lccap_msb_index>LCCAP_MSB_MAX_index) lccap_msb_index = LCCAP_MSB_MAX_index;
	cal_lccap_msb_index[inx] 	= lccap_msb_index; 	
	
	LCCAP_MSB	   = lccap_msb_thermo_tb[lccap_msb_index];		
	
	#if _DBG_PLL==1
	Printf("\r\n=== load rate%d no=%d lcvco(%d, %d)", rate, no, cmx_cal_lcvco_dac[no][rate]&0x07, (cmx_cal_lcvco_dac[no][rate]&0xf8)>>3);
	Printf(" lccap(%d %d, %d)", cal_lccap_msb_index[inx], cmx_cal_lccap_msb[rate], cmx_cal_lccap_lsb[inx]);
	Printf(" ana-lcvco(%d, %d) cap(%d, %d)", LCVCO_DAC_MSB, LCVCO_DAC_LSB, LCCAP_MSB, LCCAP_LSB);	
	#endif

}

void check_pll_lock(void) BANKING_CTRL {
	timeout = 0;
	if(cmx_PLL_CAL_TIMEOUT_DIS==0)	{
		timeout_start((uint16_t)Ttimeout_timer); 	
	}	
		
	while(!reg_ANA_PLL_LOCK_RD && !timeout);

}
/*
void pllcal_save(uint8_t no) BANKING_CTRL {
	//cmx_cal_lcvco_dac_msb[no][rate] = (LCVCO_DAC_MSB & 0x07) | 0x00; 
	//cmx_cal_lcvco_dac_lsb[no][rate] = (LCVCO_DAC_LSB & 0x1f) | 0x00; 
	cmx_cal_lcvco_dac[no][rate] = UPHY14_CMN_ANAREG_TOP_173.BT.B0; 
	cmx_cal_lccap_lsb[rate]     = (LCCAP_LSB & 0x1f) | 0x00; 
	cmx_cal_lccap_msb[rate]     = (LCCAP_MSB & 0x0f) | 0x00; 
	#if _DBG_PLL==1
	Printf("\r\n=== save rate%d no=%d lcvco(%d, %d)", rate, no, cmx_cal_lcvco_dac[no][rate]&0x07, (cmx_cal_lcvco_dac[no][rate]&0xf8)>>3);
	Printf(" lccap(%d, %d)", cal_lccap_msb_index[rate], cmx_cal_lccap_lsb[rate]);
	Printf(" ana-lcvco(%d, %d) cap(%d, %d)", LCVCO_DAC_MSB, LCVCO_DAC_LSB, LCCAP_MSB, LCCAP_LSB);	
	#endif
	
}
*/



