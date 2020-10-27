/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file pll_cal_ram.c
* \purpose LCPLL calibration
* \History
*	10/15/2015 Heejeong Ryu		Initial 
*	1/15/2019  Heejeong Ryu		redo CAP calibration when timeout
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

#define Ttimeout_timer			1000 //uS //10000

#define TEMPC_LEVEL_TODIG					reg_ANA_TEMPC_LEVEL_TODIG_RD_1_0
#define TEMPC_DAC_SEL						reg_TEMPC_DAC_SEL_7_0
#define TEMPC_DAC_VAILD						reg_TEMPC_DAC_VALID 
#define TEMPC_MUX_SEL						reg_TEMPC_MUX_SEL_3_0
#define TEMPC_MUX_HOLD_SEL					reg_TEMPC_MUX_HOLD_SEL_3_0
#define TEMPC_MUX_HOLD_SEL_MAX				11

__code uint8_t lccap_msb_thermo_tb_0[] = {
  0x00, //0000
  0x01, //0001 
  0x03, //0011
  0x07, //0111
  0x0f, //1111
};  

enum {
	CAL_AMP,
	MEASURE_FREQ,
	LSB_CAL,
	MSB_CAL,
	CAL_FINISHED,
	OUT_RANGE,
};

#ifdef LCPLL_DUMP_DEBUG

void dump_lc_pll(uint8_t, uint8_t) ;

typedef struct Status_LCPLL_STATUS_tag{
	uint8_t lp_num;
	uint8_t step; 
	uint16_t fbcnt;
	uint8_t  lccap_msb_index;
	uint8_t  lccap_msb;
	uint8_t  lccap_lsb;
	uint8_t  lcvco_dac_msb_lab;
} Status_LCPLL_STATUS_t;

enum LCPLL_DEBUG_ST {
  NULL_STEP,
  FIND_CAP_MSB_STEP,  
  FIND_CAP_LSB_STEP,
  FIND_AMP_DAC_STEP,
  END_STEP = 0x0F,
};
	
__xdata __at(SPDTBL_XDAT_CMN_BASE) Status_LCPLL_STATUS_t lc_stat[28];
__xdata __at(RING_SPDTBL_BASE) Status_LCPLL_STATUS_t lc_stat1[28];
#endif //LCPLL_DUMP_DEBUG

void pll_cal_loop_ram(void) {

	uint8_t cnt_rdy, lccap_msb_index, index, save_FBCK_SEL, save_FBDIV_h, save_FBDIV_l;
	uint8_t lcvco_dac_msb, lcvco_dac_lsb, i;
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
	
	#ifdef LCPLL_DUMP_DEBUG
	llpnum = 0;
	for(i=0; i<28; i++) {
		lc_stat[i].lp_num = 0;
		lc_stat[i].step = 0;
		lc_stat[i].fbcnt = 0;		
		lc_stat[i].lccap_msb_index = 0;	
		lc_stat[i].lccap_msb = 0;				
		lc_stat[i].lccap_lsb = 0;				
		lc_stat[i].lcvco_dac_msb_lab = 0;				

		lc_stat1[i].lp_num = 0;
		lc_stat1[i].step = 0;
		lc_stat1[i].fbcnt = 0;		
		lc_stat1[i].lccap_msb_index = 0;	
		lc_stat1[i].lccap_msb = 0;				
		lc_stat1[i].lccap_lsb = 0;				
		lc_stat1[i].lcvco_dac_msb_lab = 0;				
	}
	#endif
	
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

		#ifdef LCPLL_DUMP_DEBUG		
		lc_stat[llpnum].lccap_msb_index =  lccap_msb_index;
		dump_lc_pll(FIND_CAP_MSB_STEP, VCOAMP_HI);
		#endif	

		delay01(Tpfreq0); //3us
		#ifdef LCPLL_DUMP_DEBUG
		pll_amp_cal_ram(); 
		#else		
		pll_amp_cal();	
		#endif	
		delay01(Tpfreq1); //5us
		VCOAMP_VTH_SEL = TH_FREQ;
		
		do {	
			while(1) {
				reg_FBC_CNT_START = 0;
				timeout=0;
				if(cmx_PLL_CAL_TIMEOUT_DIS==0) {	
					timeout_start((uint16_t)Ttimeout_timer); 
				}	
				cnt_rdy = reg_FBC_PLLCAL_CNT_READY;
				reg_FBC_CNT_START = 1;
				if( cnt_rdy ) while(reg_FBC_PLLCAL_CNT_READY && !timeout);
				while(!reg_FBC_PLLCAL_CNT_READY && !timeout);
				if(!timeout) {
					reg_FBC_CNT_START = 0;
					break;					
				}	
			}			
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
				LCCAP_MSB = lccap_msb_thermo_tb_0[lccap_msb_index];
				delay01(Tpfreq3);
				
				#ifdef LCPLL_DUMP_DEBUG		
				if(llpnum<28)	
					lc_stat[llpnum].lccap_msb_index =  lccap_msb_index;
				else if(llpnum<56)	
					lc_stat1[llpnum].lccap_msb_index =  lccap_msb_index;
				dump_lc_pll(FIND_CAP_MSB_STEP, VCOAMP_HI);
				#endif	
				
				if(VCOAMP_HI==0) {
					#ifdef LCPLL_DUMP_DEBUG
					pll_amp_cal_ram(); 
					#else		
					pll_amp_cal();	
					#endif	
				}
			}

		} while (1);
			
		do {
			
			LCCAP_LSB--;
			delay01(Tpfreq3);
			
	#ifdef LCPLL_DUMP_DEBUG
	dump_lc_pll(FIND_CAP_LSB_STEP, VCOAMP_HI);
	#endif	

		   if(VCOAMP_HI==0) {
				#ifdef LCPLL_DUMP_DEBUG
				pll_amp_cal_ram(); 
				#else		
				pll_amp_cal();	
				#endif	
				VCOAMP_VTH_SEL = TH_FREQ;
			}

			while(1) {
				reg_FBC_CNT_START = 0;
				timeout=0;
				if(cmx_PLL_CAL_TIMEOUT_DIS==0) {	
					timeout_start((uint16_t)Ttimeout_timer); 
				}	
				cnt_rdy = reg_FBC_PLLCAL_CNT_READY;
				reg_FBC_CNT_START = 1;
				if( cnt_rdy ) while(reg_FBC_PLLCAL_CNT_READY && !timeout);
				while(!reg_FBC_PLLCAL_CNT_READY && !timeout);
				if(!timeout) {
					reg_FBC_CNT_START = 0;
					break;					
				}	
			}			
			Fmea = reg_FBC_PLLCAL_CNT_15_0;
			
			if(LCCAP_LSB == LCCAP_LSB_MIN) {
				cmx_PLL_AMP_CAL_PASS = 0;	
				break;
			}			
		
		} while (Fmea < Ftarget); 
	
		delay01(Tpfreq4); 
	}	
save_0:	

	#ifdef LCPLL_DUMP_DEBUG
	dump_lc_pll(END_STEP, VCOAMP_HI);
	reg_MCU_DEBUG_CMN_1_7_0 = llpnum+1;
	#endif	

	pllcal_save(PWR);
	cal_lccap_msb_index[rate] 	= lccap_msb_index; 
	


}

#ifdef LCPLL_DUMP_DEBUG



void pll_amp_cal_ram(void)  {
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
		
	#ifdef LCPLL_DUMP_DEBUG
	dump_lc_pll(FIND_AMP_DAC_STEP, vco_hi);
	#endif	
		
		dir&=0x0f;
		if (dir == 0x5) break;
		else {
			if(vco_hi == 1) {
				if(pll_amp_dac_dec() == _EXIT_FAIL) {
					lcvco_dac_lsb = 0x10;
					lcvco_dac_msb = 0x03;		
					set_lcvco_dac(lcvco_dac_msb, lcvco_dac_lsb);

					#ifdef LCPLL_DUMP_DEBUG
					dump_lc_pll(FIND_AMP_DAC_STEP, vco_hi);
					#endif	
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
					#ifdef LCPLL_DUMP_DEBUG
					dump_lc_pll(FIND_AMP_DAC_STEP, vco_hi);
					#endif	
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

void dump_lc_pll(uint8_t step, uint8_t vcohi) {
	if(llpnum<28) {
		lc_stat[llpnum].lp_num = llpnum;
		lc_stat[llpnum].step = vcohi<<4 | step;
		lc_stat[llpnum].fbcnt = reg_FBC_PLLCAL_CNT_15_0;
		lc_stat[llpnum].lccap_msb = (UPHY14_CMN_ANAREG_TOP_178.BT.B0>>4) & 0x0f; 
		lc_stat[llpnum].lccap_lsb = (UPHY14_CMN_ANAREG_TOP_177.BT.B0>>3) & 0x1f; 
		lc_stat[llpnum].lcvco_dac_msb_lab = UPHY14_CMN_ANAREG_TOP_173.BT.B0; 				
	}	
	else if(llpnum<56) {
		lc_stat1[llpnum-28].lp_num = llpnum;
		lc_stat1[llpnum-28].step = step;
		lc_stat1[llpnum-28].fbcnt = reg_FBC_PLLCAL_CNT_15_0;
		lc_stat1[llpnum-28].lccap_msb = (UPHY14_CMN_ANAREG_TOP_178.BT.B0>>4) & 0x0f; 
		lc_stat1[llpnum-28].lccap_lsb = (UPHY14_CMN_ANAREG_TOP_177.BT.B0>>3) & 0x1f; 
		lc_stat1[llpnum-28].lcvco_dac_msb_lab = UPHY14_CMN_ANAREG_TOP_173.BT.B0; 				
		
	}	
	llpnum++;

}
#endif //LCPLL_DUMP_DEBUG