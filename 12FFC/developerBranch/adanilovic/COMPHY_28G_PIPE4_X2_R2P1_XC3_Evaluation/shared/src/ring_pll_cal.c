
/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file ring_pll_cal.c
* \purpose RINGPLL calibration for 16ffc
* \History
*	08/25/2016 Heejeong Ryu		Initial 
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
*    Input:  PLL_VDDVCO_OVERTH_RING 
*    Output: SLLP_DAC_COARSE_RING, SLLP_DAC_FINE_RING, PLL_SPEED_RING
*/
// ----------------------------------------

#define PLL_SPEED_RING			reg_PLL_SPEED_RING_4_0
#define SLLP_DAC_COARSE_RING		reg_PLL_SLLP_DAC_COARSE_RING_3_0
#define SLLP_DAC_FINE_RING_10_8		reg_PLL_SLLP_DAC_FINE_RING_10_8
#define SLLP_DAC_FINE_RING_7_0		reg_PLL_SLLP_DAC_FINE_RING_7_0
#define SLLP_DAC_VALID			reg_PLL_SLLP_DAC_VALID_RING	
#define PLL_CAL_EN_RING			reg_PLL_CAL_EN_RING
#ifdef _28G_R2P0
	#define PLL_VDDVCO_OVERTH_RING  reg_ANA_VDDVCO_OVERTH_RING 
	#define PLL_VCON_OVERTH_RING    reg_ANA_VCON_OVERTH_RING
#else
	#define PLL_VDDVCO_OVERTH_RING  (reg_DIG_TEST_BUS_15_0_b0&0x01) //reg_ANA_PLL_VDDVCO_OVERTH_RING //hardware eco
	#define PLL_VCON_OVERTH_RING    (reg_DIG_TEST_BUS_15_0_b0&0x02) //reg_ANA_PLL_VCON_OVERTH_RING
#endif
#define rate					PLL_RATE_SEL_RING	
#define PLL_SHRTR_RING                  reg_PLL_SHRTR_RING
#define PULUP                           reg_PULUP
#define DAC_COARSE_MAX			0x0f
#define DAC_COARSE_MIN 			0
#define DAC_FINE_DELTA_RANGE	128 //+/-64, 256, 512
#define PLL_SPEED_RING_MAX			23 //0x1f
#define Ftarget_ring			cmx_PLL_SPEED_THRESH_RING_15_0  
#define PWR_FINE_STEP			32///4/8/16/32(default)
#define code_ratio                      cmx_RINGPLL_DAC_FINE_CODE_RATIO_7_0 //32
#define max_step_number                 cmx_RINGPLL_DAC_MAX_STEP_NUM_7_0 //2
#define min_step_number                 1
#define Ftarget_code                    2
#define Fdiff_max_value			0x7F
#define dac_fine_max_value		0x7FF
#define fdiff_0					20
#define TARGET_RANGE				1 //2

#define Tshrtr	T_8us	//T_2us/T_4us/T_8us/T_16us

#define TEMP_85	   -122
#define TEMP_5     -321

#define RINGPLL_TIMEOUT_TIMER	10000 //10msec

#ifdef RINGPLL_FASTSTARTUP_DEBUG

typedef struct Status_RINGPLL_STATUS_tag{
	uint8_t lp_num;
	uint8_t lock;
	uint16_t fbcnt;
	int16_t  delta_code;
	uint16_t dac_fine;
} Status_RINGPLL_STATUS_t;

__xdata __at(0xe700) Status_RINGPLL_STATUS_t ring_stat[20];
#endif //RINGPLL_FASTSTARTUP_DEBUG

void ring_pll_cal( void ) BANKING_CTRL {

#ifndef SUPPORT_SAS_LC_ONLY
 
	uint8_t cnt_rdy, save_FBDIV_h, save_FBDIV_l, save_FBCK_SEL;
	uint16_t Fmea, temp, dac_fine_max, dac_fine_min;
	int16_t tmp;
	
	PHY_STATUS =  ST_PLL_CAL_RING_CAL;

	#ifdef _SATA_SERDES_BUILD
	if(phy_mode == SERDES) {
		while(1) {
			if(cmx_PLL_CAL_DONE==1) {
				if(cmx_PLL_CAL_DONE==1 && reg_PLLCAL_EN==0) break; //wait for LCPLL calibration done
			}	
		}	
	}
	#endif
	
	cmx_PLL_CAL_RING_DONE = 0;

	if( cmx_RING_PLL_CAL_EXT_EN /*|| (phy_mode==PCIE && cmx_PLL_CAL_RING_PASS)*/) { //PCIe Link enable/disable test patch
		ringpll_load(PWR);
		SLLP_DAC_VALID = 1;	SLLP_DAC_VALID = 0;	
		goto exit_out;
	}

	cmx_PLL_CAL_RING_PASS = 1;
	
	timeout=0;
	if(cmx_RINGPLL_CAL_TIMEOUT_DIS==0) {
		timeout_start((uint16_t)RINGPLL_TIMEOUT_TIMER); 
	}	
	
	//initialization
	tmp = read_tsen();
	if(tmp > TEMP_85 ) ringpll_dac_fine = 1280;
	else if(tmp <= TEMP_85 && tmp > TEMP_5 ) ringpll_dac_fine = 1024;
	else ringpll_dac_fine = 768; 
	dac_fine_min = ringpll_dac_fine-DAC_FINE_DELTA_RANGE;
	dac_fine_max = ringpll_dac_fine+DAC_FINE_DELTA_RANGE;	

	PLL_SPEED_RING = 0;
	SLLP_DAC_COARSE_RING = 0;
	ringpll_dac_fine_output();
	PLL_SHRTR_RING = 1;
	//reg_PLL_BAND_SEL_RING = 0; //no need, just use speedtbl value.
	delay01(100);		
	PLL_CAL_EN_RING = 1;
	temp = cmx_REFCLK_FREQ_7_0;
	temp--;
    reg_FBC_CNT_TIMER_15_0_b0 = (uint8_t)temp;
 	reg_FBC_CNT_TIMER_15_0_b1 = (uint8_t)(temp >> 8);
	reg_FBC_PLLCAL_RING_EN = 1;

    save_FBDIV_h = reg_PLL_FBDIV_RING_9_8;
    save_FBDIV_l = reg_PLL_FBDIV_RING_7_0;
    save_FBCK_SEL = reg_ANA_FBCK_SEL_RING;

	ringloadSpdtbl_4_fcnt();
	
	// -- DAC Coarse
	delay01(40);
	
	do {		
		if((PLL_VDDVCO_OVERTH_RING==1&&cmx_PLL_VDDVCO_POLARITY_INV==0) || (PLL_VDDVCO_OVERTH_RING==0&&cmx_PLL_VDDVCO_POLARITY_INV==1)) break;
		else SLLP_DAC_COARSE_RING++;
		SLLP_DAC_VALID = 1;	SLLP_DAC_VALID = 0;	
		delay01(40);
	} while(SLLP_DAC_COARSE_RING < DAC_COARSE_MAX);
	
	// -- SPEED
	 
	 do {
	 	cnt_rdy = reg_FBC_PLLCAL_CNT_READY;
	 	reg_FBC_CNT_START = 0; 
	 	reg_FBC_CNT_START = 1; 
	 	if( cnt_rdy ) while(reg_FBC_PLLCAL_CNT_READY && !timeout);
	 	while(!reg_FBC_PLLCAL_CNT_READY  && !timeout);
	 	reg_FBC_CNT_START = 0; 				
		if( timeout ) break;
	 	Fmea = reg_FBC_PLLCAL_CNT_15_0;
	 
	 	if(Fmea >= Ftarget_ring ) break; 
	 	else {  //Fmea < Ftarget_ring 
	 
			if(PLL_SPEED_RING == PLL_SPEED_RING_MAX) {
				if( SLLP_DAC_COARSE_RING!=DAC_COARSE_MAX) {
					SLLP_DAC_COARSE_RING++;
					SLLP_DAC_VALID = 1;	SLLP_DAC_VALID = 0;	
					delay01(40);
					continue;			
				}
			}
			else {			
				PLL_SPEED_RING++;						
				delay01(20);
			}
			
			while(((SLLP_DAC_COARSE_RING<DAC_COARSE_MAX) && \
			((PLL_VDDVCO_OVERTH_RING==0 && cmx_PLL_VDDVCO_POLARITY_INV==0) || (PLL_VDDVCO_OVERTH_RING && cmx_PLL_VDDVCO_POLARITY_INV)))||(PLL_SPEED_RING == PLL_SPEED_RING_MAX)) {
	 							
	 			SLLP_DAC_COARSE_RING++;
		 		SLLP_DAC_VALID = 1;	SLLP_DAC_VALID = 0;	
	            delay01(40);
				
				if( SLLP_DAC_COARSE_RING>=DAC_COARSE_MAX ) {
					if( ringpll_dac_fine<dac_fine_max ){	
						ringpll_dac_fine += PWR_FINE_STEP;		
						ringpll_dac_fine_output();
						
						delay01(40);
					}
					else goto adjust;
				}
			}
	
		}	
		delay01(20);

	} while(Fmea < Ftarget_ring);	
		

	//Fmea >= Ftarget_ring:

	 while ( ringpll_dac_fine != 0 ) {
		if( timeout ) break;
		
		ringpll_dac_fine -= PWR_FINE_STEP;		

		if( SLLP_DAC_COARSE_RING>0 && SLLP_DAC_COARSE_RING<DAC_COARSE_MAX) {
		
			//adjust fine & coarse		
			if(ringpll_dac_fine<dac_fine_min) { 
				ringpll_dac_fine += 300; 
				if( SLLP_DAC_COARSE_RING > DAC_COARSE_MIN )
					SLLP_DAC_COARSE_RING--;			
			}
			else if(ringpll_dac_fine>dac_fine_max) { 
				ringpll_dac_fine -= 300; 
				if( SLLP_DAC_COARSE_RING < DAC_COARSE_MAX )
					SLLP_DAC_COARSE_RING++;			
			}		
		}
		
		ringpll_dac_fine_output();
	 	delay01(40);
		
		cnt_rdy = reg_FBC_PLLCAL_CNT_READY;
		reg_FBC_CNT_START = 1; 
		if( cnt_rdy ) while(reg_FBC_PLLCAL_CNT_READY  && !timeout);
		while(!reg_FBC_PLLCAL_CNT_READY  && !timeout );
		reg_FBC_CNT_START = 0; 		
		if(timeout) break;	
		Fmea = reg_FBC_PLLCAL_CNT_15_0;

		if(Fmea <= Ftarget_ring ) break;
	 } 
		
adjust: 
	do {
		if( timeout ) break;
	
		cnt_rdy = reg_FBC_PLLCAL_CNT_READY;
		reg_FBC_CNT_START = 1; 
		if( cnt_rdy ) while(reg_FBC_PLLCAL_CNT_READY  && !timeout);
		while(!reg_FBC_PLLCAL_CNT_READY  && !timeout);
		reg_FBC_CNT_START = 0; 				
		if (timeout) break;
		Fmea = reg_FBC_PLLCAL_CNT_15_0;

		if (Fmea == Ftarget_ring) break;
		else if ( Fmea > Ftarget_ring ) {
			ringpll_dac_fine-=PWR_FINE_STEP;		
		}
		else {
			ringpll_dac_fine+=PWR_FINE_STEP;		
		}
		if(ringpll_dac_fine<dac_fine_min) { 
			ringpll_dac_fine += 300; 
			if(SLLP_DAC_COARSE_RING>DAC_COARSE_MIN)	SLLP_DAC_COARSE_RING--;			
		}
		else if(ringpll_dac_fine>dac_fine_max) { 
			ringpll_dac_fine -= 300; 
			if(SLLP_DAC_COARSE_RING<DAC_COARSE_MAX) SLLP_DAC_COARSE_RING++;			
		}
		
		ringpll_dac_fine_output();
		
		delay01(40);

	} while ((ringpll_dac_fine>0) && (ringpll_dac_fine<dac_fine_max));

	reg_PLL_FBDIV_RING_9_8 = save_FBDIV_h;
	reg_PLL_FBDIV_RING_7_0 = save_FBDIV_l;
	reg_ANA_FBCK_SEL_RING = save_FBCK_SEL;

	reg_FBC_PLLCAL_RING_EN = 0;
	PLL_SHRTR_RING = 0;
	PLL_CAL_EN_RING = 0;

	timeout=0;
	if(cmx_RINGPLL_CAL_TIMEOUT_DIS==0) {
		timeout_start((uint16_t)RINGPLL_TIMEOUT_TIMER); 
	}	
    while(!reg_ANA_PLL_LOCK_RING_RD && !timeout);
	
	if(timeout) { 
		cmx_PLL_CAL_RING_PASS = 0; 
		ringpll_load(PWR);
	}
	else {
		ringpll_save(PWR);	
	}	
	
exit_out:	
	ringpll_save(CONT);
	ring_size_counter_mid = (RINGPLL_CAL_COUNTER_SIZE >> 1);   //register give max value, use mid point as start
        ring_size_counter = ring_size_counter_mid;
	cmx_PLL_CAL_RING_DONE = 1;

#endif //SUPPORT_SAS_LC_ONLY	
	
}	

void ring_pll_cont(void) BANKING_CTRL {

#ifndef SUPPORT_SAS_LC_ONLY
	
	PHY_STATUS =  ST_RING_PLL_CONT;
	//cmx_PLL_CAL_RING_DONE = 0;

	//load
	//ringpll_load(CONT);
	EA = 0;
	ringpll_dac_fine = cmx_cal_sllp_dac_fine_ring[CONT][rate]; 
	SLLP_DAC_FINE_RING_10_8 = (uint8_t)(ringpll_dac_fine>>8); 
	SLLP_DAC_FINE_RING_7_0 = (uint8_t)ringpll_dac_fine;  	
	EA = 1;

	if ((PLL_VCON_OVERTH_RING==0&&cmx_PLL_VCON_POLARITY_INV==0) || (PLL_VCON_OVERTH_RING&&cmx_PLL_VCON_POLARITY_INV) )
		ring_size_counter ++;
	else
		ring_size_counter --;

	//reg_MCU_DEBUGA_LANE_7_0 = ring_size_counter;

        //reg_MCU_DEBUGA_LANE_7_0 = RINGPLL_CAL_FINE_STEP;

	if (ring_size_counter >= RINGPLL_CAL_COUNTER_SIZE) {
		ring_size_counter = ring_size_counter_mid;
		if ( ringpll_dac_fine < (dac_fine_max_value - RINGPLL_CAL_FINE_STEP))
			ringpll_dac_fine += RINGPLL_CAL_FINE_STEP;
		else
			goto ringpll_cont_ext0;
	}
	else if (ring_size_counter == 0) {
		ring_size_counter = ring_size_counter_mid;
		if ( ringpll_dac_fine > RINGPLL_CAL_FINE_STEP )
			ringpll_dac_fine -= RINGPLL_CAL_FINE_STEP;
		else 
			goto ringpll_cont_ext0;
	}
	else
		goto ringpll_cont_ext0;

	ringpll_dac_fine_output();

	//delay01(40); //replaced cal_top cont loop delay

	//save
	ringpll_save(CONT);

ringpll_cont_ext0:
	//reg_MCU_DEBUGA_LANE_7_0 = ring_size_counter;
	//cmx_PLL_CAL_RING_DONE = 1;
#endif //SUPPORT_SAS_LC_ONLY	
}

void ring_pll_fast_cal(void) BANKING_CTRL {

#ifndef SUPPORT_SAS_LC_ONLY	

	uint8_t i, cnt_rdy, save_FBDIV_h, save_FBDIV_l, save_FBCK_SEL;
	uint8_t first_op_ring;
	uint16_t Fmea, Fmea_prev;
	int16_t Fdiff, delta_code, delta_code_first, delta_code_nom;

	Fmea_prev = 0;
	delta_code = 0;
	delta_code_first = 0;

	//cmx_PLL_CAL_RING_DONE = 0;

	timeout=0;
	if(cmx_RINGPLL_CAL_TIMEOUT_DIS==0) {
		timeout_start((uint16_t)RINGPLL_TIMEOUT_TIMER); 
	}

	//if (((PHY_STATUS != ST_SPDCHG) && (phy_mode != PCIE)) || 
	//   ((phy_mode == PCIE)/* && use_ring_pll && (gen_pll_rate != pre_ringpll_rate)*/)) {
	if(reg_ANA_PU_PLL_DLY_RING==0) {
		reg_ANA_PU_PLL_RING = 1;
		delay01(5);
		reg_ANA_PU_PLL_DLY_RING = 1;
		delay01(5);
		reg_RESET_ANA_RING = 0;
	}

        PLL_SHRTR_RING = 1;
        PLL_CAL_EN_RING = 1;
        reg_FBC_CNT_START = 0;				

        save_FBDIV_h = reg_PLL_FBDIV_RING_9_8;
        save_FBDIV_l = reg_PLL_FBDIV_RING_7_0;
        save_FBCK_SEL = reg_ANA_FBCK_SEL_RING; 
		ringloadSpdtbl_4_fcnt();

		ringpll_load(CONT);
        SLLP_DAC_VALID = 1;  SLLP_DAC_VALID = 0;

		delay01(40); //first DAC_VALID need 8uS settling time from next new DAC value

		reg_FBC_PLLCAL_RING_EN = 1;

        i = 0;
    	first_op_ring = 0;
	
        do {				
                cnt_rdy = reg_FBC_PLLCAL_CNT_READY;
                reg_FBC_CNT_START = 1;
                if( cnt_rdy ) while(reg_FBC_PLLCAL_CNT_READY  && !timeout);
                while(!reg_FBC_PLLCAL_CNT_READY  && !timeout);
                reg_FBC_CNT_START = 0;				
				if(timeout) {
					#ifdef RINGPLL_FASTSTARTUP_DEBUG
					reg_MCU_DEBUGE_LANE_7_0 = 0x11;
					#endif 
					break;
				}
				Fmea = reg_FBC_PLLCAL_CNT_15_0;
				
				#ifdef RINGPLL_FASTSTARTUP_DEBUG
				ring_stat[i].lock = 0;
				ring_stat[i].lp_num = i;
				ring_stat[i].fbcnt = Fmea;				
				ring_stat[i].dac_fine = 0;				
				#endif //RINGPLL_FASTSTARTUP_DEBUG
				
		//		if (((Ftarget_ring - Ftarget_code) <= Fmea) && (Fmea <= (Ftarget_ring + Ftarget_code))) {
				
                if((Fmea >= (Ftarget_ring-TARGET_RANGE)) && (Fmea <= (Ftarget_ring+TARGET_RANGE))) {
					if (i == 0)	first_op_ring = 1;
					if (i >= min_step_number) {
						#ifdef RINGPLL_FASTSTARTUP_DEBUG
						reg_MCU_DEBUGE_LANE_7_0 = 0x22;  
						#endif
						break;  //1
					}
				}
                else{
				
					if((i == 0)||(first_op_ring == 1)) {
						first_op_ring = 0;
						delta_code = (Ftarget_ring - Fmea)<<code_ratio; //5; // * code_ratio;
						delta_code_first = delta_code;
					}
					else {
						Fdiff = Fmea - Fmea_prev;
						delta_code_nom = (Ftarget_ring - Fmea) * delta_code_first;
						if (Fdiff == 0)
							delta_code = (Ftarget_ring - Fmea) * fdiff_0;
						else
							delta_code = delta_code_nom / Fdiff;
						delta_code_first = delta_code;
					}
					
					ringpll_dac_fine = ringpll_dac_fine + delta_code;
					
					if (ringpll_dac_fine >= dac_fine_max_value) 
						ringpll_dac_fine = dac_fine_max_value;
					else if (ringpll_dac_fine <= 0)
						ringpll_dac_fine = 0;			
				
					if ((ringpll_dac_fine == dac_fine_max_value) || (ringpll_dac_fine == 0)) {
						if (i >= min_step_number) {
							cmx_PLL_CAL_RING_PASS = 0;
							#ifdef RINGPLL_FASTSTARTUP_DEBUG
							reg_MCU_DEBUGE_LANE_7_0 = 0x33;
							#endif
							break;
						}
					} 
					
					Fmea_prev = Fmea;				
					ringpll_dac_fine_output();
						
					#ifdef RINGPLL_FASTSTARTUP_DEBUG
					ring_stat[i].lock = reg_ANA_PLL_LOCK_RING_RD;
					ring_stat[i].delta_code = delta_code;	
					ring_stat[i].dac_fine = ringpll_dac_fine;				
					#endif //RINGPLL_FASTSTARTUP_DEBUG
					
					delay01(30); //6uSec settling time required after from second DAC_VALID toggle to new DAC value or SHRTR=0 
				}
                i++;

        } while (i < max_step_number);
	//reg_MCU_DEBUGF_LANE_7_0 = i; //test
	reg_FBC_PLLCAL_RING_EN = 0;
	ringpll_save(CONT);
 
	reg_PLL_FBDIV_RING_9_8 = save_FBDIV_h;
	reg_PLL_FBDIV_RING_7_0 = save_FBDIV_l;
	reg_ANA_FBCK_SEL_RING = save_FBCK_SEL;
 
	ring_size_counter = ring_size_counter_mid;
	
	PLL_CAL_EN_RING = 0;
	PLL_SHRTR_RING = 0;

	while(!reg_ANA_PLL_LOCK_RING_RD && !timeout); 
	
	if(timeout) cmx_PLL_CAL_RING_PASS = 0;
	
	//cmx_PLL_CAL_RING_DONE = 1;

	if(PHY_STATUS != ST_SPDCHG) {
		delay01(200);	//delay 20usec for glitch
	}
	
	pll_clk_ready_ring_1();
	

	#ifdef RINGPLL_FASTSTARTUP_DEBUG
	for(; i<20; i++) {
		ring_stat[i].lock = 0;
		ring_stat[i].lp_num = i;
		ring_stat[i].fbcnt = 2;		
		ring_stat[i].delta_code = 2;	
		ring_stat[i].dac_fine = 2;				
		ring_stat[i].lock = 0;
	}

	Printf("Target=%d\r\n", Ftarget_ring);	
	for(i=0; i<20; i++) {		
		Printf("%d: FBCCNT:%d, DELTACODE:%d, DACFINE=%d, LOCK:%d\r\n", ring_stat[i].lp_num, ring_stat[i].fbcnt, (int16_t)ring_stat[i].delta_code, ring_stat[i].dac_fine, ring_stat[i].lock);
	}	
	#endif	

#endif // SUPPORT_SAS_LC_ONLY	
}

#ifndef _28G_X2
void ringpll_save(uint8_t no) BANKING_CTRL {
	cmx_cal_pll_speed_ring[no][rate] = (PLL_SPEED_RING & 0x1f) | 0x00;
	cmx_cal_pll_sllp_dac_coarse_ring[no][rate] = (SLLP_DAC_COARSE_RING & 0x0f) | 0x00;
	cmx_cal_sllp_dac_fine_ring[no][rate] = ringpll_dac_fine;
}

void ringpll_load(uint8_t no) BANKING_CTRL {
	PLL_SPEED_RING = cmx_cal_pll_speed_ring[no][rate];
	SLLP_DAC_COARSE_RING = cmx_cal_pll_sllp_dac_coarse_ring[no][rate];
	ringpll_dac_fine = cmx_cal_sllp_dac_fine_ring[no][rate]; 
	SLLP_DAC_FINE_RING_10_8 = (uint8_t)(ringpll_dac_fine>>8); 
	SLLP_DAC_FINE_RING_7_0 = (uint8_t)ringpll_dac_fine;  	
	
}

void ringpll_dac_fine_output(void) BANKING_CTRL {
	EA = 0;
	SLLP_DAC_FINE_RING_10_8 = (uint8_t)(ringpll_dac_fine>>8); 
	SLLP_DAC_FINE_RING_7_0 = (uint8_t)ringpll_dac_fine;  	
    SLLP_DAC_VALID = 1;  SLLP_DAC_VALID = 0;	
	EA = 1;
}

#endif //_28G_X2

/*
void fast_startup_mode_ring (void) BANKING_CTRL{
	reg_ANA_PU_PLL_RING = 1;
	delay01(5);
	reg_ANA_PU_PLL_DLY_RING = 1;
	delay01(5);
	reg_RESET_ANA_RING = 0;
	PLL_CAL_EN_RING = 1;
	PLL_SHRTR_RING = 1;
	reg_ANA_PLL_CLK_READY_PRE0_RING = 1;
}*/
