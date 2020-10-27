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
#define PLL_VDDVCO_OVERTH_RING  (reg_DIG_TEST_BUS_15_0_b0&0x01) //reg_ANA_PLL_VDDVCO_OVERTH_RING //hardware eco
#define PLL_VCON_OVERTH_RING    (reg_DIG_TEST_BUS_15_0_b0&0x02) //reg_ANA_PLL_VCON_OVERTH_RING
#define ring_rate			PLL_RATE_SEL_RING	
#define PLL_SHRTR_RING                  reg_PLL_SHRTR_RING
#define PULUP                           reg_PULUP
#define coarse_max			0x0f
#define coarse_min 			0
#define dac_fine_max			(1024+128) //+/-64, 256, 512
#define dac_fine_min			(1024-128)
#define spd_ring_max			0x1f
#define Ftarget_ring			cmx_PLL_SPEED_THRESH_RING_15_0  
#define dac_step			32 //1//2/4/8
#define dac_step_code			1//2  //1/2/4/8
#define code_ratio                      32
#define max_step_number                 2
#define min_step_number                 1
#define Ftarget_code                    2
#define Fdiff_max_value			0x3f
#define dac_fine_max_value		0x7FF

#ifdef SUPPORT_RINGPLL
void ring_pll_cal( void ) {

	uint8_t cnt_rdy, save_FBDIV_h, save_FBDIV_l, save_FBCK_SEL;
	uint16_t Fmea, dac_fine, temp;

	PHY_STATUS =  ST_PLL_CAL_RING_CAL;
	
	cmx_PLL_CAL_RING_DONE = 0;
	cmx_PLL_CAL_RING_PASS = 1;
	
	save_FBDIV_h = reg_PLL_FBDIV_RING_9_8;
	save_FBDIV_l = reg_PLL_FBDIV_RING_7_0;
	save_FBCK_SEL = reg_ANA_FBCK_SEL_RING;
	//save_band_sel = reg_PLL_BAND_SEL_RING;
	
	//workaround for hardware bug
	enter_ringpll_reg_access();
	
	ringloadSpdtbl_4_fcnt();
	
	//initialization
	PLL_SPEED_RING = 0;
	SLLP_DAC_COARSE_RING = 0;
	SLLP_DAC_FINE_RING_10_8 = 0x04; SLLP_DAC_FINE_RING_7_0 = 0; dac_fine = 1024; //0x400
	SLLP_DAC_VALID = 1;	SLLP_DAC_VALID = 0;	
	PLL_SHRTR_RING = 1;
	//reg_PLL_BAND_SEL_RING = 0; //no need, just use speedtbl value.
	delay(T_10us);		
	PLL_CAL_EN_RING = 1;
	temp = cmx_REFCLK_FREQ_7_0;
	temp--;
    reg_FBC_CNT_TIMER_15_0_b0 = (uint8_t)temp;
 	reg_FBC_CNT_TIMER_15_0_b1 = (uint8_t)(temp >> 8);
	reg_FBC_PLLCAL_RING_EN = 1;
	// -- DAC Coarse
	delay(T_4us);
	
	do {
		if(PLL_VDDVCO_OVERTH_RING==1) break;
		else SLLP_DAC_COARSE_RING++;
		SLLP_DAC_VALID = 1;	SLLP_DAC_VALID = 0;	
		delay(T_4us);
	} while(SLLP_DAC_COARSE_RING < coarse_max);
	
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
	 
	 		PLL_SPEED_RING++;						
			delay(T_2us);
	 						
			while(((SLLP_DAC_COARSE_RING<coarse_max) && (PLL_VDDVCO_OVERTH_RING == 0))||(PLL_SPEED_RING == spd_ring_max)) {
	 							
	 			SLLP_DAC_COARSE_RING++;
		 		SLLP_DAC_VALID = 1;	SLLP_DAC_VALID = 0;	
	                        delay(T_4us);
				
				if( SLLP_DAC_COARSE_RING>=coarse_max ) {
					if( dac_fine<dac_fine_max ){	
						dac_fine += dac_step;		
						SLLP_DAC_FINE_RING_7_0 =  (uint8_t)dac_fine;
						SLLP_DAC_FINE_RING_10_8 = (uint8_t)(dac_fine>>8);
						SLLP_DAC_VALID = 1;	SLLP_DAC_VALID = 0;
						delay(T_4us);
					}
					else goto adjust;
				}
			}
	
		}	
		delay(T_2us);

	} while(Fmea < Ftarget_ring);	
		

	//Fmea >= Ftarget_ring:

	 while ( dac_fine != 0 ) {
		dac_fine -= dac_step;		

		if( SLLP_DAC_COARSE_RING>0 && SLLP_DAC_COARSE_RING<coarse_max) {
		
			//adjust fine & coarse		
			if(dac_fine<dac_fine_min) { 
				dac_fine += 300; 
				if( SLLP_DAC_COARSE_RING > coarse_min )
					SLLP_DAC_COARSE_RING--;			
			}
			else if(dac_fine>dac_fine_max) { 
				dac_fine -= 300; 
				if( SLLP_DAC_COARSE_RING < coarse_max )
					SLLP_DAC_COARSE_RING++;			
			}
			SLLP_DAC_FINE_RING_7_0 =  (uint8_t)dac_fine;
			SLLP_DAC_FINE_RING_10_8 = (uint8_t)(dac_fine>>8);
			SLLP_DAC_VALID = 1;	SLLP_DAC_VALID = 0;
			delay(T_2us);
		}
		
	 	delay(T_2us);
		
		cnt_rdy = reg_FBC_PLLCAL_CNT_READY;
		reg_FBC_CNT_START = 1; 
		if( cnt_rdy ) while(reg_FBC_PLLCAL_CNT_READY);
		while(!reg_FBC_PLLCAL_CNT_READY );
		reg_FBC_CNT_START = 0; 				
		Fmea = reg_FBC_PLLCAL_CNT_15_0;

		if(Fmea <= Ftarget_ring ) break;
	 } 
		
adjust: 
	do {
	
		cnt_rdy = reg_FBC_PLLCAL_CNT_READY;
		reg_FBC_CNT_START = 1; 
		if( cnt_rdy ) while(reg_FBC_PLLCAL_CNT_READY);
		while(!reg_FBC_PLLCAL_CNT_READY );
		reg_FBC_CNT_START = 0; 				
		Fmea = reg_FBC_PLLCAL_CNT_15_0;

		if (Fmea == Ftarget_ring) break;
		else if ( Fmea > Ftarget_ring ) {
			dac_fine-=dac_step;		
		}
		else {
			dac_fine+=dac_step;		
		}
		if(dac_fine<dac_fine_min) { 
			dac_fine += 300; 
			if(SLLP_DAC_COARSE_RING>coarse_min)	SLLP_DAC_COARSE_RING--;			
		}
		else if(dac_fine>dac_fine_max) { 
			dac_fine -= 300; 
			if(SLLP_DAC_COARSE_RING<coarse_max) SLLP_DAC_COARSE_RING++;			
		}
		SLLP_DAC_FINE_RING_7_0 =  (uint8_t)dac_fine;
		SLLP_DAC_FINE_RING_10_8 = (uint8_t)(dac_fine>>8);
		SLLP_DAC_VALID = 1;	SLLP_DAC_VALID = 0;
		delay(T_4us);
	} while ((dac_fine>0) && (dac_fine<dac_fine_max));

	//save
	if( ring_rate == 1 ) {
		cmx_CAL_PLL_SPEED_RING_R1_7_0 = PLL_SPEED_RING;
		cmx_CAL_PLL_SLLP_DAC_COARSE_RING_R1_7_0 = SLLP_DAC_COARSE_RING;
		cmx_CAL_SLLP_DAC_FINE_RING_R1_15_0 = dac_fine;
	}
	else {
		cmx_CAL_PLL_SPEED_RING_R0_7_0 = PLL_SPEED_RING;
		cmx_CAL_PLL_SLLP_DAC_COARSE_RING_R0_7_0 = SLLP_DAC_COARSE_RING;
		cmx_CAL_SLLP_DAC_FINE_RING_R0_15_0 = dac_fine;
	}
	
	reg_FBC_PLLCAL_RING_EN = 0;
	PLL_SHRTR_RING = 0;
	PLL_CAL_EN_RING = 0;

	reg_PLL_FBDIV_RING_9_8 = save_FBDIV_h;
	reg_PLL_FBDIV_RING_7_0 = save_FBDIV_l;
	reg_ANA_FBCK_SEL_RING = save_FBCK_SEL;
	//reg_PLL_BAND_SEL_RING = save_band_sel;

	//workaround for hardware bug
	exit_ringpll_reg_access();

        timeout_start((uint16_t)50000); //50mS  
        while(!reg_ANA_PLL_LOCK_RING_RD && !timeout); //~6uS

	cmx_PLL_CAL_RING_DONE = 1;
	cmx_PLL_CAL_RING_PASS = 1;
	first_time_ring_pll_cont = 1;
	
	pll_clk_ready_ring_1();	
}	

void ring_pll_cont(void) {
	 uint16_t dac_fine;

        PHY_STATUS =  ST_RING_PLL_CONT;
		
	enter_ringpll_reg_access();
//load
        if( ring_rate == 1 ) {
		PLL_SPEED_RING = cmx_CAL_PLL_SPEED_RING_R1_7_0;
                dac_fine = cmx_CAL_SLLP_DAC_FINE_RING_R1_15_0;
		SLLP_DAC_COARSE_RING = cmx_CAL_PLL_SLLP_DAC_COARSE_RING_R1_7_0;
        }
        else {
		PLL_SPEED_RING = cmx_CAL_PLL_SPEED_RING_R0_7_0;
                dac_fine = cmx_CAL_SLLP_DAC_FINE_RING_R0_15_0;
		SLLP_DAC_COARSE_RING = cmx_CAL_PLL_SLLP_DAC_COARSE_RING_R0_7_0;
        }

        if (first_time_ring_pll_cont) { //first_time_pll_cont should be defined as 1 in PLL_CAL.
              ring_max_point = (0x1 << ( dac_step_code + 1)) - 1;
              ring_mid_point = ring_max_point>>1;
              ring_size_counter = ring_mid_point;
              first_time_ring_pll_cont = 0;
        }
        else {
		
		if (PLL_VCON_OVERTH_RING != 2) 
			ring_size_counter ++;
		else 
                        ring_size_counter --;

		reg_MCU_DEBUGA_LANE_7_0 = ring_size_counter;

                if ((ring_size_counter >= ring_max_point) && (dac_fine < (0x7FF - dac_step))) {
			dac_fine += dac_step;
			SLLP_DAC_FINE_RING_7_0 =  (uint8_t)dac_fine;
			SLLP_DAC_FINE_RING_10_8 = (uint8_t)(dac_fine>>8);
			SLLP_DAC_VALID = 1;		SLLP_DAC_VALID = 0;
			delay(T_4us);
                       	ring_size_counter = ring_mid_point;
	        }
                else if ((ring_size_counter == 0) && (dac_fine > dac_step)) {
                        dac_fine -= dac_step;
			SLLP_DAC_FINE_RING_7_0 =  (uint8_t)dac_fine;
			SLLP_DAC_FINE_RING_10_8 = (uint8_t)(dac_fine>>8);
			SLLP_DAC_VALID = 1;		SLLP_DAC_VALID = 0;
			delay(T_4us);
                        ring_size_counter = ring_mid_point;
                }
	
        }
		
	exit_ringpll_reg_access();
//save
        if( ring_rate == 1 ) {
                cmx_CAL_SLLP_DAC_FINE_RING_R1_15_0 = dac_fine;
        }
        else {
                cmx_CAL_SLLP_DAC_FINE_RING_R0_15_0 = dac_fine;
        }
	
	reg_MCU_DEBUGA_LANE_7_0 = ring_size_counter;
}



void ring_pll_fast_cal(void) {
        uint8_t i, code_ratio_shift, cnt_rdy, save_FBDIV_h, save_FBDIV_l, save_FBCK_SEL;
        uint8_t search_skip, first_op_ring;
	uint16_t dac_fine, Fmea, Fmea_prev, delta_code, Fdiff;

        // PHY_STATUS =  ST_RING_PLL_FAST_STRT; // Removed setting PHY_STATUS which caused issue CESD-14

        delay(T_p5us);
        timeout_start((uint16_t)10000);

//load
	if( ring_rate == 1 ) {
                PLL_SPEED_RING = cmx_CAL_PLL_SPEED_RING_R1_7_0;
               	SLLP_DAC_COARSE_RING = cmx_CAL_PLL_SLLP_DAC_COARSE_RING_R1_7_0;
	        dac_fine = cmx_CAL_SLLP_DAC_FINE_RING_R1_15_0;
        }
	else {
        	PLL_SPEED_RING = cmx_CAL_PLL_SPEED_RING_R0_7_0;
               	SLLP_DAC_COARSE_RING = cmx_CAL_PLL_SLLP_DAC_COARSE_RING_R0_7_0;
		dac_fine = cmx_CAL_SLLP_DAC_FINE_RING_R0_15_0;
        }

        save_FBDIV_h = reg_PLL_FBDIV_RING_9_8;
        save_FBDIV_l = reg_PLL_FBDIV_RING_7_0;
        save_FBCK_SEL = reg_ANA_FBCK_SEL_RING;
        //save_band_sel = reg_PLL_BAND_SEL_RING;
 
		ringloadSpdtbl_4_fcnt();

		SLLP_DAC_VALID = 1;  SLLP_DAC_VALID = 0; //dac_valid should be toggle before pu_ring.
        
		reg_ANA_PU_PLL_RING = 1;
		delay(T_p5us);
		reg_ANA_PU_PLL_DLY_RING = 1;
		delay(T_p5us);
        reg_RESET_ANA_RING = 0;
        PLL_SHRTR_RING = 1;
        //SLLP_DAC_VALID = 1;  SLLP_DAC_VALID = 0;
		delay(T_10us);
        PLL_CAL_EN_RING = 1;
		
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
        	                Fmea_prev = Fmea;
			}
			else 
				search_skip = 1;
			
                    }
		    else {
						Fdiff = abs(Fmea - Fmea_prev);
						if (Fdiff < Fdiff_max_value) {
							search_skip = 0;
							delta_code = abs(Ftarget_ring - Fmea) * delta_code;
							delta_code = delta_code / Fdiff;
                	        Fmea_prev = Fmea;
						}
						else 
							search_skip = 1;
                   }
		
					if (search_skip == 0) {	
						if(((Fmea<Ftarget_ring)&&(i==0))||((Fmea<Ftarget_ring)&&(Fmea>Fmea_prev))||((Fmea>Ftarget_ring)&&(Fmea<Fmea_prev)))
							dac_fine = dac_fine + delta_code;
						else
							dac_fine = dac_fine - delta_code;
					}
	
					if ((dac_fine > dac_fine_max_value) || ((Ftarget_ring > Fmea) && (search_skip == 1)))
						dac_fine = dac_fine_max_value;
					else if ((dac_fine < 0) || ((Ftarget_ring < Fmea) && search_skip))
						dac_fine = 0;			
		
					if ((dac_fine == dac_fine_max_value) || (dac_fine == 0) || (search_skip == 1)) {
						if (i >= min_step_number) {
								cmx_PLL_CAL_RING_PASS = 0;
								break;
						}
					} 
					
					SLLP_DAC_FINE_RING_7_0 =  (uint8_t)dac_fine;
					SLLP_DAC_FINE_RING_10_8 = (uint8_t)(dac_fine>>8);
	                SLLP_DAC_VALID = 1;
        	        SLLP_DAC_VALID = 0;
               		delay(T_2us); // programmable 1/2/3/4 us.
				}
                i++;
				delay(T_4us);
        } while (i < max_step_number);

		reg_FBC_PLLCAL_RING_EN = 0;

//save
        if( ring_rate == 1 ) {
                cmx_CAL_SLLP_DAC_FINE_RING_R1_15_0 = dac_fine;
        }
        else {
                cmx_CAL_SLLP_DAC_FINE_RING_R0_15_0 = dac_fine;
        }

        reg_PLL_FBDIV_RING_9_8 = save_FBDIV_h;
        reg_PLL_FBDIV_RING_7_0 = save_FBDIV_l;
        reg_ANA_FBCK_SEL_RING = save_FBCK_SEL;
        //reg_PLL_BAND_SEL_RING = save_band_sel;

        delay(Tus); // programmable 1/2/3/4us. 
	first_time_ring_pll_cont = 1;
	PLL_CAL_EN_RING = 0;
        PLL_SHRTR_RING = 0;
		
	pll_clk_ready_ring_1();

	delay(T_50us);
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
