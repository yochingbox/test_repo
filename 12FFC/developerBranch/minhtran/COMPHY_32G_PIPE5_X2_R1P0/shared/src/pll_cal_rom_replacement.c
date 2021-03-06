/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file pll_cal_rom.c
* \purpose LCPLL calibration
* \History
*	10/15/2015 Heejeong Ryu		Initial 
*/
#include "common.h"

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
#ifdef SUPPORT_EXT_MEM

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

#define Ttimeout_timer			10000 //uS //10000

#define TEMPC_LEVEL_TODIG					reg_ANA_TEMPC_LEVEL_TODIG_RD_1_0
#define TEMPC_DAC_SEL						reg_TEMPC_DAC_SEL_7_0
#define TEMPC_DAC_VAILD						reg_TEMPC_DAC_VALID 
#define TEMPC_MUX_SEL						reg_TEMPC_MUX_SEL_3_0
#define TEMPC_MUX_HOLD_SEL					reg_TEMPC_MUX_HOLD_SEL_3_0
#define TEMPC_MUX_HOLD_SEL_MAX				11

__code uint8_t lccap_msb_thermo_tb_ram[] = {
  0x00, //0000
  0x01, //0001 
  0x03, //0011
  0x07, //0111
  0x0f, //1111
};  

void set_lcvco_dac_ram(uint8_t dac_h, uint8_t dac_l) BANKING_CTRL {

	UPHY14_CMN_ANAREG_TOP_173.BT.B0 = (dac_l<<3)|dac_h; 

}

void pll_cal_loop_ram(void) BANKING_CTRL {

	uint8_t cnt_rdy, lccap_msb_index, index;
	uint8_t lcvco_dac_msb, lcvco_dac_lsb;
	uint16_t Fmea, temp;

	cmx_PLL_CAL_PASS = 1;
	cmx_PLL_AMP_CAL_PASS = 1;

	if( cmx_PLLAMP_CAL_SPEEDUP_DISABLE == 0)  reg_LCVCOCAL_BUF_EN = 1;
	
	//reg_RESET_ANA = 0;

	VCOAMP_VTH_SEL = TH_AMP; // one time for pwrsq
	
	temp = cmx_REFCLK_FREQ_7_0 << (FBC_RATIO+2);
	temp--;
    reg_FBC_CNT_TIMER_15_0_b0 = (uint8_t)temp;
 	reg_FBC_CNT_TIMER_15_0_b1 = (uint8_t)(temp >> 8);
	
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
		
		set_lcvco_dac_ram(lcvco_dac_msb, lcvco_dac_lsb);
		
		LCCAP_LSB = 0x1f; 
		LCCAP_MSB = 0;
		
		lccap_msb_index = 0; index = 0;
		delay01(Tpfreq0); //3us
		pll_amp_cal_ram();	
		delay01(Tpfreq1); //5us
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
				LCCAP_MSB = lccap_msb_thermo_tb_ram[lccap_msb_index];
				delay01(Tpfreq3);
				
				if(VCOAMP_HI==0)
					pll_amp_cal_ram();	
			}

		} while (!timeout);
			
		do {
			LCCAP_LSB--;
			delay01(Tpfreq3);
			
			if(VCOAMP_HI==0) {
				pll_amp_cal_ram();
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

	pllcal_save_ram(PWR);
	cal_lccap_msb_index[rate] 	= lccap_msb_index; 
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
void pll_amp_cal_ram(void) BANKING_CTRL {
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
				if(pll_amp_dac_dec_ram() == _EXIT_FAIL) {
					lcvco_dac_lsb = 0x10;
					lcvco_dac_msb = 0x03;		
					set_lcvco_dac_ram(lcvco_dac_msb, lcvco_dac_lsb);

					min_cnt++;
					if (min_cnt == 0x3) {
						cmx_PLL_AMP_CAL_PASS = 0;
						break;
					}
				}
			}
			else {
				if( pll_amp_dac_inc_ram() == _EXIT_FAIL ){
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
uint8_t pll_amp_dac_dec_ram(void) BANKING_CTRL {
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
	
	set_lcvco_dac_ram(lcvco_dac_msb, lcvco_dac_lsb);			
		
	return _EXIT_SUCCESS;
}

uint8_t pll_amp_dac_inc_ram(void) BANKING_CTRL {

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
	
	set_lcvco_dac_ram(lcvco_dac_msb, lcvco_dac_lsb);			
	
	return _EXIT_SUCCESS;
}


void pll_amp_cal_cont_ram(void) BANKING_CTRL {

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
	temp_lvl_todic_rd = temp_level_todic_rd_ram();
	
	if( temp_lvl_todic_rd==0x02 && TEMPC_MUX_HOLD_SEL==TEMPC_MUX_HOLD_SEL_MAX && vcoamp_hi) { //high temp
		//decease dac until vcoamp=0
		pll_amp_dac_dec_ram();
	}
	else if( temp_lvl_todic_rd==0x01 && TEMPC_MUX_HOLD_SEL==0) { //low temp
		//inc dac until todig=0
		pll_amp_dac_inc_ram();
	}
	else if(vcoamp_hi==0) {
		pll_amp_dac_inc_ram();
	}	

	cmx_cal_lcvco_dac_lsb[CONT][rate] = (reg_LCVCO_DAC_LSB_4_0 & 0x1f) | 0x00;  
	cmx_cal_lcvco_dac_msb[CONT][rate] = (reg_LCVCO_DAC_MSB_2_0 & 0x07) | 0x00; 			

	cmx_PLL_AMP_CAL_DONE = 1;

}

void pllcal_load_ram(uint8_t no) BANKING_CTRL {
	uint8_t lccap_msb_index;
	
	lccap_msb_index = 0;
	set_lcvco_dac_ram(cmx_cal_lcvco_dac_msb[no][rate], cmx_cal_lcvco_dac_lsb[no][rate]);			
	
	LCCAP_LSB 	  = cmx_cal_lccap_lsb[rate];
	if(no==PWR) 
		lccap_msb_index = conv_thermo_2_bi_ram( cmx_cal_lccap_msb[rate] );	
	else	lccap_msb_index  = cal_lccap_msb_index[rate];
	if(lccap_msb_index>LCCAP_MSB_MAX_index) lccap_msb_index = LCCAP_MSB_MAX_index;
	cal_lccap_msb_index[rate] 	= lccap_msb_index; 	
	
	LCCAP_MSB	   = lccap_msb_thermo_tb_ram[lccap_msb_index];		
}

void check_pll_lock_ram(void) BANKING_CTRL {
	timeout = 0;
	if(cmx_PLL_CAL_TIMEOUT_DIS==0)	{
		timeout_start((uint16_t)Ttimeout_timer); //50mS	
	}	
		
	while(!reg_ANA_PLL_LOCK_RD && !timeout);

}

void pllcal_save_ram(uint8_t no) BANKING_CTRL {
	cmx_cal_lcvco_dac_lsb[no][rate] = (LCVCO_DAC_LSB & 0x1f) | 0x00; 
	cmx_cal_lcvco_dac_msb[no][rate] = (LCVCO_DAC_MSB & 0x07) | 0x00; 
	cmx_cal_lccap_lsb[rate]     = (LCCAP_LSB & 0x1f) | 0x00; 
	cmx_cal_lccap_msb[rate]     = (LCCAP_MSB & 0x0f) | 0x00; 
}

uint8_t	temp_level_todic_rd_ram(void) BANKING_CTRL
{
	reg_ANA_TEMPC_LEVEL_TODIG_RD_REQ = 1;
	reg_ANA_TEMPC_LEVEL_TODIG_RD_REQ = 0;

	return reg_ANA_TEMPC_LEVEL_TODIG_RD_1_0;
}

#endif //SUPPORT_EXT_MEM
