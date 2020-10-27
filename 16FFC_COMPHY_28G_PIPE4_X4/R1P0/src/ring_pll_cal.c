/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file ring_pll_cal.c
* \purpose RINGPLL calibration for 16ffc
* \History
*	08/25/2016 Heejeong Ryu		Initial 
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
#define CONT_FINE_STEP			16 //6///4/8/16(default)/32
#define code_ratio                      32
#define max_step_number                 2
#define min_step_number                 1
#define Ftarget_code                    2
#define Fdiff_max_value			0x3f
#define dac_fine_max_value		0x7FF

#define Tshrtr	T_8us	//T_2us/T_4us/T_8us/T_16us

#define TEMP_85	   -122
#define TEMP_5     -321

#ifdef SUPPORT_RINGPLL
void ring_pll_cal( void ) {

	uint8_t cnt_rdy, save_FBDIV_h, save_FBDIV_l, save_FBCK_SEL;
	uint16_t Fmea, temp, dac_fine_max, dac_fine_min;
	int16_t tmp;

	PHY_STATUS =  ST_PLL_CAL_RING_CAL;
	
	cmx_PLL_CAL_RING_DONE = 0;
	cmx_PLL_CAL_RING_PASS = 1;
	
	//workaround for hardware bug
	enter_ringpll_reg_access();
	
	//initialization
	tmp = read_tsen();
	if(tmp > TEMP_85 ) ringpll_dac_fine = 1280;
	else if(tmp < TEMP_85 && tmp > TEMP_5 ) ringpll_dac_fine = 1024;
	else ringpll_dac_fine = 768; 
	dac_fine_min = ringpll_dac_fine-DAC_FINE_DELTA_RANGE;
	dac_fine_max = ringpll_dac_fine+DAC_FINE_DELTA_RANGE;	

	PLL_SPEED_RING = 0;
	SLLP_DAC_COARSE_RING = 0;
	ringpll_dac_fine_output();
	PLL_SHRTR_RING = 1;
	//reg_PLL_BAND_SEL_RING = 0; //no need, just use speedtbl value.
	delay(T_10us);		
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
	delay(T_4us);
	
	do {
		if(PLL_VDDVCO_OVERTH_RING==1) break;
		else SLLP_DAC_COARSE_RING++;
		SLLP_DAC_VALID = 1;	SLLP_DAC_VALID = 0;	
		delay(T_4us);
	} while(SLLP_DAC_COARSE_RING < DAC_COARSE_MAX);
	
	// -- SPEED
	 
	 do {
	 	cnt_rdy = reg_FBC_PLLCAL_CNT_READY;
	 	reg_FBC_CNT_START = 1; 
	 	if( cnt_rdy ) while(reg_FBC_PLLCAL_CNT_READY);
	 	while(!reg_FBC_PLLCAL_CNT_READY );
	 	reg_FBC_CNT_START = 0; 				
	 	Fmea = reg_FBC_PLLCAL_CNT_15_0;
	 
	 	if(Fmea >= Ftarget_ring ) break; 
	 	else {  //Fmea < Ftarget_ring 
	 
			if(PLL_SPEED_RING == PLL_SPEED_RING_MAX) {
				if( SLLP_DAC_COARSE_RING!=DAC_COARSE_MAX) {
					SLLP_DAC_COARSE_RING++;
					SLLP_DAC_VALID = 1;	SLLP_DAC_VALID = 0;	
					delay(T_4us);
					continue;			
				}
			}
			else {			
				PLL_SPEED_RING++;						
				delay(T_2us);
	 		}
			
			while(((SLLP_DAC_COARSE_RING<DAC_COARSE_MAX) && \
			((PLL_VDDVCO_OVERTH_RING==0 && cmx_PLL_VDDVCO_POLARITY_INV==0) || (PLL_VDDVCO_OVERTH_RING && cmx_PLL_VDDVCO_POLARITY_INV)))||(PLL_SPEED_RING == PLL_SPEED_RING_MAX)) {
	 							
	 			SLLP_DAC_COARSE_RING++;
		 		SLLP_DAC_VALID = 1;	SLLP_DAC_VALID = 0;	
	            delay(T_4us);
				
				if( SLLP_DAC_COARSE_RING>=DAC_COARSE_MAX ) {
					if( ringpll_dac_fine<dac_fine_max ){	
						ringpll_dac_fine += PWR_FINE_STEP;		
						ringpll_dac_fine_output();
						
						delay(T_4us);
					}
					else goto adjust;
				}
			}
	
		}	
		delay(T_2us);

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
		delay(T_4us);
		
		cnt_rdy = reg_FBC_PLLCAL_CNT_READY;
		reg_FBC_CNT_START = 1; 
		if( cnt_rdy ) while(reg_FBC_PLLCAL_CNT_READY);
		while(!reg_FBC_PLLCAL_CNT_READY );
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
		
		delay(T_4us);

	} while ((ringpll_dac_fine>0) && (ringpll_dac_fine<dac_fine_max));

	//save
	if( rate == 1 ) {
		cmx_CAL_PLL_SPEED_RING_R1_7_0 = PLL_SPEED_RING;
		cmx_CAL_PLL_SLLP_DAC_COARSE_RING_R1_7_0 = SLLP_DAC_COARSE_RING;
		cmx_CAL_SLLP_DAC_FINE_RING_R1_15_0 = ringpll_dac_fine;
	}
	else {
		cmx_CAL_PLL_SPEED_RING_R0_7_0 = PLL_SPEED_RING;
		cmx_CAL_PLL_SLLP_DAC_COARSE_RING_R0_7_0 = SLLP_DAC_COARSE_RING;
		cmx_CAL_SLLP_DAC_FINE_RING_R0_15_0 = ringpll_dac_fine;
	}
	
	reg_PLL_FBDIV_RING_9_8 = save_FBDIV_h;
	reg_PLL_FBDIV_RING_7_0 = save_FBDIV_l;
	reg_ANA_FBCK_SEL_RING = save_FBCK_SEL;

	reg_FBC_PLLCAL_RING_EN = 0;
	PLL_SHRTR_RING = 0;
	PLL_CAL_EN_RING = 0;

	//workaround for hardware bug
	exit_ringpll_reg_access();

    while(!reg_ANA_PLL_LOCK_RING_RD && !timeout); 

	if(timeout) cmx_PLL_CAL_RING_PASS = 0;
	
	ring_size_counter = RINGPLL_CAL_STEP_SIZE;	
	cmx_PLL_CAL_RING_DONE = 1;
	first_time_ring_pll_cont = 1;
	
	pll_clk_ready_ring_1();	
}	

void ring_pll_cont(void) {

        PHY_STATUS =  ST_RING_PLL_CONT;
		
	enter_ringpll_reg_access();
//load
        if( rate == 1 ) {
			PLL_SPEED_RING = cmx_CAL_PLL_SPEED_RING_R1_7_0;
            ringpll_dac_fine = cmx_CAL_SLLP_DAC_FINE_RING_R1_15_0;
			SLLP_DAC_COARSE_RING = cmx_CAL_PLL_SLLP_DAC_COARSE_RING_R1_7_0;
        }
        else {
		PLL_SPEED_RING = cmx_CAL_PLL_SPEED_RING_R0_7_0;
                ringpll_dac_fine = cmx_CAL_SLLP_DAC_FINE_RING_R0_15_0;
		SLLP_DAC_COARSE_RING = cmx_CAL_PLL_SLLP_DAC_COARSE_RING_R0_7_0;
        }
		SLLP_DAC_FINE_RING_10_8 = (uint8_t)(ringpll_dac_fine>>8); 
		SLLP_DAC_FINE_RING_7_0 = (uint8_t)ringpll_dac_fine;  	

 		if ((PLL_VCON_OVERTH_RING==0&&cmx_PLL_VCON_POLARITY_INV==0) || (PLL_VCON_OVERTH_RING&&cmx_PLL_VCON_POLARITY_INV) ) 
			ring_size_counter ++;
		else 
            ring_size_counter --;			

		reg_MCU_DEBUGA_LANE_7_0 = ring_size_counter;

         if (ring_size_counter >= (RINGPLL_CAL_STEP_SIZE<<1) ) {
			ring_size_counter = RINGPLL_CAL_STEP_SIZE;
			if(ringpll_dac_fine < (dac_fine_max_value - CONT_FINE_STEP))
				ringpll_dac_fine += CONT_FINE_STEP;
			else 	
				goto ringpll_cont_ext0;	
	    }
        else if (ring_size_counter == 0) {
			ring_size_counter = RINGPLL_CAL_STEP_SIZE;
			if(ringpll_dac_fine > CONT_FINE_STEP) 
				ringpll_dac_fine -= CONT_FINE_STEP;				
			else 
				goto ringpll_cont_ext0;	
        }
		else 
			goto ringpll_cont_ext0;		
	    		
		ringpll_dac_fine_output();		
	
//save
        if( rate == 1 ) {
                cmx_CAL_SLLP_DAC_FINE_RING_R1_15_0 = ringpll_dac_fine;
        }
        else {
                cmx_CAL_SLLP_DAC_FINE_RING_R0_15_0 = ringpll_dac_fine;
        }
	
ringpll_cont_ext0:
	exit_ringpll_reg_access();
	reg_MCU_DEBUGA_LANE_7_0 = ring_size_counter;
	cmx_PLL_CAL_RING_DONE = 1;
}

void ring_pll_fast_cal(void) {
	uint8_t i, code_ratio_shift, cnt_rdy, save_FBDIV_h, save_FBDIV_l, save_FBCK_SEL;
	uint8_t search_skip, first_op_ring;
	uint16_t Fmea, Fmea_prev, delta_code, delta_code_first, delta_code_nom, Fdiff;

        // PHY_STATUS =  ST_RING_PLL_FAST_STRT; // Removed setting PHY_STATUS which caused issue CESD-14

	Fmea_prev = 0;
	delta_code = 0;
	
	cmx_PLL_CAL_RING_DONE = 0;
	
        delay(T_p5us);
        timeout_start((uint16_t)10000);

        save_FBDIV_h = reg_PLL_FBDIV_RING_9_8;
        save_FBDIV_l = reg_PLL_FBDIV_RING_7_0;
        save_FBCK_SEL = reg_ANA_FBCK_SEL_RING;
 
		ringloadSpdtbl_4_fcnt();

		reg_ANA_PU_PLL_RING = 1;
		delay(T_p5us);
		reg_ANA_PU_PLL_DLY_RING = 1;
		delay(T_p5us);
		reg_RESET_ANA_RING = 0;
        PLL_SHRTR_RING = 1;
		
        PLL_CAL_EN_RING = 1;
		
//load
	if( rate == 1 ) {
			PLL_SPEED_RING = cmx_CAL_PLL_SPEED_RING_R1_7_0;
            SLLP_DAC_COARSE_RING = cmx_CAL_PLL_SLLP_DAC_COARSE_RING_R1_7_0;
	        ringpll_dac_fine = cmx_CAL_SLLP_DAC_FINE_RING_R1_15_0;
        }
	else {
        	PLL_SPEED_RING = cmx_CAL_PLL_SPEED_RING_R0_7_0;
            SLLP_DAC_COARSE_RING = cmx_CAL_PLL_SLLP_DAC_COARSE_RING_R0_7_0;
			ringpll_dac_fine = cmx_CAL_SLLP_DAC_FINE_RING_R0_15_0;
        }
		SLLP_DAC_FINE_RING_10_8 = (uint8_t)(ringpll_dac_fine>>8); 
		SLLP_DAC_FINE_RING_7_0 = (uint8_t)ringpll_dac_fine;  	
        SLLP_DAC_VALID = 1;  SLLP_DAC_VALID = 0;
		delay(T_10us);

		reg_FBC_PLLCAL_RING_EN = 1;
		delay(T_2us);
        //delay(Tshrtr); //programmable 2us/4us/8us/16us => need 6us setting from cmx_TSHRTR_7_0.

        i = 0;
    	first_op_ring = 0;

        do {
                cnt_rdy = reg_FBC_PLLCAL_CNT_READY;
                reg_FBC_CNT_START = 1;
                if( cnt_rdy ) while(reg_FBC_PLLCAL_CNT_READY);
                while(!reg_FBC_PLLCAL_CNT_READY );
                reg_FBC_CNT_START = 0;
	            Fmea = reg_FBC_PLLCAL_CNT_15_0;
				//		if (((Ftarget_ring - Ftarget_code) <= Fmea) && (Fmea <= (Ftarget_ring + Ftarget_code))) {
				
                if(Fmea == Ftarget_ring) {
					if (i >= min_step_number) break;
			
					if (i == 0)
						first_op_ring = 1;
				}	
				else{
                    if((i == 0)||(first_op_ring == 1)) {
						first_op_ring = 0;
						Fdiff = abs(Ftarget_ring - Fmea);
                        if (Fdiff < Fdiff_max_value) {
							search_skip = 0;
							delta_code = abs(Ftarget_ring - Fmea) * code_ratio;
							delta_code_first = delta_code;
        	                Fmea_prev = Fmea;
						}
						else 
							search_skip = 1;
                    }
					else {
						Fdiff = abs(Fmea - Fmea_prev);
						if (Fdiff < Fdiff_max_value) {
							search_skip = 0;
							delta_code_nom = abs(Ftarget_ring - Fmea) * delta_code_first;
							delta_code = delta_code_nom / Fdiff;
							delta_code_first = delta_code;
						}
						else 
							search_skip = 1;
                   }
		
					if (search_skip == 0) {	
						if(((Fmea<Ftarget_ring)&&(i==0))||((Fmea<Ftarget_ring)&&(Fmea>Fmea_prev))||((Fmea>Ftarget_ring)&&(Fmea<Fmea_prev)))
							ringpll_dac_fine = ringpll_dac_fine + delta_code;
						else
							ringpll_dac_fine = ringpll_dac_fine - delta_code;
					}
		
					if ((ringpll_dac_fine > dac_fine_max_value) || ((Ftarget_ring > Fmea) && (search_skip == 1)))
						ringpll_dac_fine = dac_fine_max_value;
					else if ((ringpll_dac_fine < 0) || ((Ftarget_ring < Fmea) && search_skip))
						ringpll_dac_fine = 0;			
		
					if ((ringpll_dac_fine == dac_fine_max_value) || (ringpll_dac_fine == 0) || (search_skip == 1)) {
						if (i >= min_step_number) {
							cmx_PLL_CAL_RING_PASS = 0;
							break;
						}
					} 
	
					Fmea_prev = Fmea;				
					ringpll_dac_fine_output();
					
					delay(T_4us); // programmable 1/2/3/4 us.
				}
                i++;
        } while (i < max_step_number);

		reg_FBC_PLLCAL_RING_EN = 0;

//save
        if( rate == 1 ) {
                cmx_CAL_SLLP_DAC_FINE_RING_R1_15_0 = ringpll_dac_fine;
        }
        else {
                cmx_CAL_SLLP_DAC_FINE_RING_R0_15_0 = ringpll_dac_fine;
        }

        reg_PLL_FBDIV_RING_9_8 = save_FBDIV_h;
        reg_PLL_FBDIV_RING_7_0 = save_FBDIV_l;
        reg_ANA_FBCK_SEL_RING = save_FBCK_SEL;

        delay(Tus); // programmable 1/2/3/4us. 
	ring_size_counter = RINGPLL_CAL_STEP_SIZE;
	PLL_CAL_EN_RING = 0;
        PLL_SHRTR_RING = 0;
		
	while(!reg_ANA_PLL_LOCK_RING_RD && !timeout); 
	
	if(timeout) cmx_PLL_CAL_RING_PASS = 0;
	
	cmx_PLL_CAL_RING_DONE = 1;

	pll_clk_ready_ring_1();

	//delay(T_50us);
}

//workaround for hardware bug
void enter_ringpll_reg_access(void) {
	//workaround for hardware bug
	save_TESTBUS_SEL_HI0_lo = reg_TESTBUS_SEL_HI0_5_0_b0;
	save_TESTBUS_SEL_HI0_hi = reg_TESTBUS_SEL_HI0_5_0_b1;
	save_TESTBUS_SEL_LO0 = reg_TESTBUS_SEL_LO0_5_0;
	save_TESTBUS_SEL_ORDER0 = reg_TESTBUS_SEL_ORDER0_3_0;	
	save_TESTBUS_SEL_SWAP = reg_TESTBUS_SEL_SWAP_15_0;
	save_TESTBUS_HI8BSEL_8BMODE = reg_TESTBUS_HI8BSEL_8BMODE;
	
	reg_TESTBUS_SEL_HI0_5_0_b0 = 1; //0x27
	reg_TESTBUS_SEL_HI0_5_0_b1 = 0x13;
	reg_TESTBUS_SEL_LO0_5_0 = 5; 	
	reg_TESTBUS_SEL_ORDER0_3_0 = 0;
	reg_TESTBUS_SEL_SWAP_15_0 = 0;
	reg_TESTBUS_HI8BSEL_8BMODE = 0;
}

void exit_ringpll_reg_access(void) {

	reg_TESTBUS_SEL_HI0_5_0_b0 = save_TESTBUS_SEL_HI0_lo; 
	reg_TESTBUS_SEL_HI0_5_0_b1 = save_TESTBUS_SEL_HI0_hi;
	reg_TESTBUS_SEL_LO0_5_0 = save_TESTBUS_SEL_LO0; 	
	reg_TESTBUS_SEL_ORDER0_3_0 = save_TESTBUS_SEL_ORDER0;
	reg_TESTBUS_SEL_SWAP_15_0 = save_TESTBUS_SEL_SWAP;
	reg_TESTBUS_HI8BSEL_8BMODE = save_TESTBUS_HI8BSEL_8BMODE;

}
#else

void ring_pll_cal( void ) {}
void ring_pll_fast_cal(void) {}
void ring_pll_cont(void) {}

#endif

void pll_clk_ready_ring_1(void) { // //ana_pll_clk_ready**=1
	reg_ANA_PLL_CLK_READY_PRE0_RING = 1;
	delay(T_p5us);
	reg_ANA_PLL_CLK_READY_PRE1_RING = 1;
	delay(T_p5us);
	reg_ANA_PLL_CLK_READY_RING = 1;		

}	

void ringpll_dac_fine_output(void) {
	SLLP_DAC_FINE_RING_10_8 = (uint8_t)(ringpll_dac_fine>>8); 
	SLLP_DAC_FINE_RING_7_0 = (uint8_t)ringpll_dac_fine;  	
    SLLP_DAC_VALID = 1;  SLLP_DAC_VALID = 0;	
}

/*
void fast_startup_mode_ring (void) {
	reg_ANA_PU_PLL_RING = 1;
	delay(T_p5us);
	reg_ANA_PU_PLL_DLY_RING = 1;
	delay(T_p5us);
	reg_RESET_ANA_RING = 0;
	PLL_CAL_EN_RING = 1;
	PLL_SHRTR_RING = 1;
	reg_ANA_PLL_CLK_READY_PRE0_RING = 1;
}*/
