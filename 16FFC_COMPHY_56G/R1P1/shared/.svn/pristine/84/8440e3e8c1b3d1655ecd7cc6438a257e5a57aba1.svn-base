/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file pll_temp_cal.c
* \purpose PLL Temperature calibration
* \History
*	10/15/2015 Heejeong Ryu		Initial 
*   10/16/2016                  TEMPC_MUX_SEL, TEMPC_MUX_HOLD_SEL range changed (for FFC)
*/
#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK1
#pragma constseg BANK1
#endif


/**
* \module PLL temperature Calibration
*
* \param 
*    <NONE> 
* \return
*    <NONE> 
* \note
*    Input:  cmx_TEMPC_MODE (default: 0)
*    Output: TEMPC_DAC_SEL, TEMPC_MUX_SEL, TEMPC_MUX_HOLD_SEL
*    State:  tempc_step_state[5:4] = 0  // no delay
*    	     tempc_step_state[5:4] = 1  // delay 5us
*    	     tempc_step_state[5:4] = 2  // delay 40us
*    	     tempc_step_state[5:4] = 3  // delay 100us
*
*/

#define TEMPC_LEVEL_TODIG					reg_ANA_TEMPC_LEVEL_TODIG_RD_1_0
#define TEMPC_DAC_SEL						reg_TEMPC_DAC_SEL_7_0
#define TEMPC_DAC_VAILD						reg_TEMPC_DAC_VALID 
#define TEMPC_MUX_SEL						reg_TEMPC_MUX_SEL_3_0
#define TEMPC_MUX_HOLD_SEL					reg_TEMPC_MUX_HOLD_SEL_3_0
#define TEMPC_DAC_MAX	255
#define TEMPC_DAC_MIN	0
#define TEMPC_MUX_MAX	10
#define TEMPC_MUX_SEL_MAX	9
#define rate					PLL_RATE_SEL

__code uint8_t gray2bi_tb[] = { 0x00, 0x01, 0x03, 0x02, 0x07, 0x6, 0x04, 0x05,
		0x0f, 0x0e, 0x0c, 0x0d, 0x08, 0x09, 0x0b, 0x0a };

#ifndef USE_NO_TIMESHARE

void pll_temp_force_idle(void) BANKING_CTRL {

	uint8_t tempc_mux_sel_2c, tempc_mux_hold_sel_2c;
	cmx_PLL_TEMP_CAL_DONE = 0;
	cmx_PLL_TEMP_CAL_PASS = 0;
	tempc_mux_sel_2c = 0; tempc_mux_hold_sel_2c = 0;
	if (rate == 0)
	{
		tempc_mux_sel_2c = cmx_CAL_TEMPC_MUX_SEL_R0_7_0;
	}
	else if (rate == 1)
	{
		tempc_mux_sel_2c = cmx_CAL_TEMPC_MUX_SEL_R1_7_0;
	}


	//hold_sel = mux_sel + 1
			tempc_mux_hold_sel_2c = gray2bi_tb[TEMPC_MUX_HOLD_SEL];
			if(tempc_mux_hold_sel_2c >= 1)
				tempc_mux_sel_2c = tempc_mux_hold_sel_2c - 1;
			else if(tempc_mux_hold_sel_2c == 0)
				tempc_mux_sel_2c = 0;

			TEMPC_DAC_SEL = 0;
			TEMPC_DAC_VAILD = 0;
			TEMPC_MUX_SEL = tempc_mux_sel_2c ^ (tempc_mux_sel_2c>>1);
			if (rate == 0)
			{
				cmx_CAL_TEMPC_MUX_SEL_R0_7_0 = tempc_mux_sel_2c;
				cmx_CAL_TEMPC_MUX_HOLD_SEL_R0_7_0 = tempc_mux_hold_sel_2c;
			}
			else if (rate == 1)
			{
				cmx_CAL_TEMPC_MUX_SEL_R1_7_0 = tempc_mux_sel_2c;
				cmx_CAL_TEMPC_MUX_HOLD_SEL_R1_7_0 = tempc_mux_hold_sel_2c;
			}

}

void pll_temp_cal( void )  BANKING_CTRL{
	uint8_t step_size, temp_lvl_todic_rd;
	uint8_t tempc_mux_sel_2c, tempc_mux_hold_sel_2c;

	tempc_mux_sel_2c = 0; tempc_mux_hold_sel_2c = 0;

	if( cmx_PLL_TEMP_CAL_EXT_EN ) {
		cmx_PLL_TEMP_CAL_DONE = 1;
		return; //TODO
	}

	PHY_STATUS = ST_PLLTEMP_CAL;

	if (rate == 0)
	{
		tempc_mux_sel_2c = cmx_CAL_TEMPC_MUX_SEL_R0_7_0;
		tempc_mux_hold_sel_2c = cmx_CAL_TEMPC_MUX_HOLD_SEL_R0_7_0;
	}
	else if (rate == 1)
	{
		tempc_mux_sel_2c = cmx_CAL_TEMPC_MUX_SEL_R1_7_0;
		tempc_mux_hold_sel_2c = cmx_CAL_TEMPC_MUX_HOLD_SEL_R1_7_0;
	}


	if(cmx_TEMPC_DAC_MODE_1_0==0) step_size = 1;
	else step_size = 0x01 << cmx_TEMPC_STEP_CTRL_2_0;

	temp_lvl_todic_rd = temp_level_todic_rd();

	if (tempc_step_state == 0x0) {

		pll_temp_force_idle();		

		tempc_dir = 0;
		tempc_dir = temp_lvl_todic_rd;
		tempc_dir<<=2;
		tempc_step_state = 0x11;
		return;
	}			
	else if (tempc_step_state == 0x11) {
		tempc_dir += temp_lvl_todic_rd;
		tempc_dir<<=2;
		tempc_step_state = 0x12;
		goto save_dac;
	}
	else if (tempc_step_state == 0x12) {
		tempc_dir += temp_lvl_todic_rd;

		if((tempc_dir == 0x2a) && (tempc_mux_sel_2c<TEMPC_MUX_SEL_MAX)){ //freq inc
			if( cmx_TEMPC_DAC_MODE_1_0!=1 || pllcal_first_time==1 || TEMPC_DAC_SEL == TEMPC_DAC_MAX ) {
				TEMPC_DAC_SEL = 0;                
				//delay(T_p5us);
				delay(T_100us);
				if( tempc_mux_sel_2c<TEMPC_MUX_SEL_MAX && tempc_mux_hold_sel_2c!=0) {
					tempc_mux_sel_2c++;
					TEMPC_MUX_SEL = tempc_mux_sel_2c ^ (tempc_mux_sel_2c>>1);
				}
				TEMPC_DAC_VAILD = 0;
				tempc_step_state = 0x34;
				goto save_dac; 
			}
			else
				goto increase_loop;
		}
		else if((tempc_dir == 0x15) && (tempc_mux_hold_sel_2c>0)) { //freq_dec
			if( cmx_TEMPC_DAC_MODE_1_0!=1 || pllcal_first_time==1 || TEMPC_DAC_SEL == TEMPC_DAC_MIN ) { 
				TEMPC_DAC_SEL = TEMPC_DAC_MAX;//255;
				delay(T_100us);
				TEMPC_DAC_VAILD = 0;
				tempc_step_state = 0x33;
				goto save_dac;
			}
			else
				goto decrease_loop;
		}
		else
			goto tempc_cal_exit;
	}
	else if (tempc_step_state == 0x34) {
		TEMPC_DAC_VAILD = 1;
		pllcal_first_time = 0;
		delay(T_40us);
		goto increase_loop;
	}

	else if (tempc_step_state == 0x26) {
		if((TEMPC_DAC_SEL >= (TEMPC_DAC_MAX-2-step_size+1)) &&
				(tempc_mux_hold_sel_2c==tempc_mux_sel_2c) && (tempc_mux_hold_sel_2c<TEMPC_MUX_MAX )) {
			tempc_mux_hold_sel_2c = tempc_mux_sel_2c + 1;
			TEMPC_MUX_HOLD_SEL = tempc_mux_hold_sel_2c ^ (tempc_mux_hold_sel_2c>>1);
			tempc_step_state = 0x28;
			goto save_dac;
		}
		else {
			tempc_step_state = 0x8;
			goto save_dac;
		}	
	}	               
	else if ((tempc_step_state == 0x28) ||(tempc_step_state == 0x8) ) {
		//if (cmx_TEMPC_DAC_MODE_1_0 == 1)
		//	goto increase_mux;
		//else	
		goto increase_loop;
	}
	else if (tempc_step_state == 0x33) {	
		TEMPC_DAC_VAILD = 1;
		pllcal_first_time = 0;
		delay(T_40us);
		goto decrease_loop;
	}
	
	else if (tempc_step_state == 0x27) {	
		if((TEMPC_DAC_SEL <= (TEMPC_DAC_MIN+2+step_size-1)) &&
			(tempc_mux_hold_sel_2c==(tempc_mux_sel_2c+1)) && (tempc_mux_hold_sel_2c>0 )) {
			tempc_mux_hold_sel_2c = tempc_mux_sel_2c;
			TEMPC_MUX_HOLD_SEL = tempc_mux_hold_sel_2c ^ (tempc_mux_hold_sel_2c>>1);	
			tempc_step_state = 0x29;
			goto save_dac;
		}
		else {
			tempc_step_state = 0x9;
			goto save_dac;
		}
	}
        else if ((tempc_step_state == 0x29) ||(tempc_step_state == 0x9) ) {
                //if (cmx_TEMPC_DAC_MODE_1_0 == 1)
                //        goto decrease_mux;
                //else    
				goto decrease_loop;
       }
 	   else if(tempc_step_state == 0x2a) {
			goto increase_end; 	
	   }	   

	increase_loop:  if (TEMPC_DAC_SEL < TEMPC_DAC_MAX) {
		if( TEMPC_DAC_SEL < (TEMPC_DAC_MAX-step_size) )
			TEMPC_DAC_SEL += step_size;
		else
			TEMPC_DAC_SEL = TEMPC_DAC_MAX;
		tempc_step_state = 0x26;
		goto save_dac;
	}
	else goto increase_mux;

	decrease_loop:  if (TEMPC_DAC_SEL > TEMPC_DAC_MIN) {
		if( TEMPC_DAC_SEL > step_size )
			TEMPC_DAC_SEL -= step_size;
		else TEMPC_DAC_SEL = 0;
		tempc_step_state = 0x27;
		goto save_dac;
	}
	else {
		goto decrease_mux;
	}

	increase_mux:  if( TEMPC_DAC_SEL == TEMPC_DAC_MAX) {
		//TEMPC_DAC_VAILD = 1;
	}
	tempc_step_state = 0x2a;
	goto save_dac;

	increase_end:  TEMPC_DAC_VAILD = 0;
	goto tempc_cal_exit;


	decrease_mux:  if(TEMPC_DAC_SEL == TEMPC_DAC_MIN)
		TEMPC_DAC_VAILD = 0;
	if(	tempc_mux_sel_2c >= 1) {
		tempc_mux_sel_2c = tempc_mux_sel_2c - 1;
		TEMPC_MUX_SEL = tempc_mux_sel_2c ^ (tempc_mux_sel_2c>>1);
	}
	goto tempc_cal_exit;

	tempc_cal_exit:
	cmx_PLL_TEMP_CAL_PASS = 1;
	tempc_step_state = 0;
	pllcal_first_time = 1;
	//save
	cmx_CAL_TEMPC_DAC_SEL_7_0 = TEMPC_DAC_SEL;
	cmx_PLL_TEMP_CAL_DONE = 1;
save_dac:

	if (rate == 0)
	{
		cmx_CAL_TEMPC_MUX_SEL_R0_7_0 = tempc_mux_sel_2c;
		cmx_CAL_TEMPC_MUX_HOLD_SEL_R0_7_0 = tempc_mux_hold_sel_2c;
	}
	else if (rate == 1)
	{
		cmx_CAL_TEMPC_MUX_SEL_R1_7_0 = tempc_mux_sel_2c;
		cmx_CAL_TEMPC_MUX_HOLD_SEL_R1_7_0 = tempc_mux_hold_sel_2c;
	}

}

// ==================================== ORIGIANL CODE =================================						 
#else
void pll_temp_cal( void ) {
	uint8_t step_size, dir, cnt;
	//uint8_t tempc_mux_sel_2c, tempc_mux_hold_sel_2c;
	
	PHY_STATUS = ST_PLLTEMP_CAL;
	
	cmx_PLL_TEMP_CAL_DONE = 0;
	cmx_PLL_TEMP_CAL_PASS = 0;
	
	dir = 0;
	cnt = 0;
	
	if(cmx_TEMPC_DAC_MODE_1_0==0) step_size = 1;
	else step_size = 0x01 << cmx_TEMPC_STEP_CTRL_2_0;
	
	tempc_mux_sel_2c = gray2bi_tb[TEMPC_MUX_SEL];
	tempc_mux_hold_sel_2c = gray2bi_tb[TEMPC_MUX_HOLD_SEL];
	
	timeout_start(20000); //20mS
	
	dir = TEMPC_LEVEL_TODIG; dir<<=2; delay(T_5us);
	dir += TEMPC_LEVEL_TODIG; dir<<=2; delay(T_5us);
	dir += TEMPC_LEVEL_TODIG; 			
	if((dir == 0x2a) && (tempc_mux_sel_2c<TEMPC_MUX_MAX)){ //freq inc
	
	    if( cmx_TEMPC_DAC_MODE_1_0!=1 || pllcal_first_time==1 || TEMPC_DAC_SEL == TEMPC_DAC_MAX ) {				
			TEMPC_DAC_SEL = 0;
			delay(T_100us);
			TEMPC_DAC_VAILD = 1;
			pllcal_first_time = 0;
		}	
	
		do {	
			if( TEMPC_DAC_SEL < (TEMPC_DAC_MAX-step_size) )					
				TEMPC_DAC_SEL += step_size;
			else TEMPC_DAC_SEL = TEMPC_DAC_MAX;	
			cnt = step_size-1;
			do { 
				delay(T_40us);
			} while(cnt-->0); 
			
			if((TEMPC_DAC_SEL >= (TEMPC_DAC_MAX-2-step_size+1)) && 
			(tempc_mux_hold_sel_2c==tempc_mux_sel_2c) && (tempc_mux_hold_sel_2c<TEMPC_MUX_MAX )) {
				tempc_mux_hold_sel_2c++;
				TEMPC_MUX_HOLD_SEL = tempc_mux_hold_sel_2c ^ (tempc_mux_hold_sel_2c>>1);
				delay(T_40us);
			}
			
			if( cmx_TEMPC_DAC_MODE_1_0 == 1 ) break;
			
		} while ( TEMPC_DAC_SEL < TEMPC_DAC_MAX ); 	
	
		if( TEMPC_DAC_SEL == TEMPC_DAC_MAX) {
			TEMPC_DAC_VAILD = 0;
			delay(T_p5us);
			if( tempc_mux_sel_2c<TEMPC_MUX_MAX) {
				tempc_mux_sel_2c++;
				TEMPC_MUX_SEL = tempc_mux_sel_2c ^ (tempc_mux_sel_2c>>1);					
			}
		}
	}
	else if((dir == 0x15) && (tempc_mux_hold_sel_2c>0)) {

		if( cmx_TEMPC_DAC_MODE_1_0!=1 || pllcal_first_time==1 || TEMPC_DAC_SEL == TEMPC_DAC_MIN ) {
			TEMPC_DAC_SEL = TEMPC_DAC_MAX;//255;
			if( tempc_mux_sel_2c > 0) {
				tempc_mux_sel_2c--;
				TEMPC_MUX_SEL = tempc_mux_sel_2c ^ (tempc_mux_sel_2c>>1);					
			}
			delay(T_100us);
			TEMPC_DAC_VAILD = 1;
			pllcal_first_time = 0;
		}	
	
		do {	
			if( TEMPC_DAC_SEL > step_size )
				TEMPC_DAC_SEL -= step_size;
			else TEMPC_DAC_SEL = 0;	
			cnt = step_size-1;
			do { 
				delay(T_40us);
			} while(cnt-->0); 
			
			if((TEMPC_DAC_SEL <= (TEMPC_DAC_MIN+2+step_size-1)) && 
			(tempc_mux_hold_sel_2c==(tempc_mux_sel_2c+1)) && (tempc_mux_hold_sel_2c>0 )) {
			    tempc_mux_hold_sel_2c--;
				TEMPC_MUX_HOLD_SEL = tempc_mux_hold_sel_2c ^ (tempc_mux_hold_sel_2c>>1);
				delay(T_40us);
			}
			
			if( cmx_TEMPC_DAC_MODE_1_0 == 1 ) break;
			
		} while ( (TEMPC_DAC_SEL > TEMPC_DAC_MIN) );//&& !timeout ); 	
	
		if(TEMPC_DAC_SEL == TEMPC_DAC_MIN) 
			TEMPC_DAC_VAILD = 0;					
	
	}
	
	if(timeout) cmx_PLL_TEMP_CAL_PASS = 0;
	else 	cmx_PLL_TEMP_CAL_PASS = 1;
	
	//save
	cmx_CAL_TEMPC_DAC_SEL_7_0 = TEMPC_DAC_SEL;
	cmx_CAL_TEMPC_MUX_SEL_7_0 = tempc_mux_sel_2c;
	cmx_CAL_TEMPC_MUX_HOLD_SEL_7_0 = tempc_mux_hold_sel_2c;
	cmx_PLL_TEMP_CAL_DONE = 1;

}
#endif //USE_NO_TIMESHARE
void load_init_temp_table(uint8_t pll_rate)
{
	int16_t tsen_dat;
	uint8_t tempc_mux_sel, tempc_mux_hold_sel;

	tempc_mux_sel = 0; tempc_mux_hold_sel = 0;
	#ifdef ROM_REPLACEMENT
	tsen_dat = read_tsen_01();
	#else
	tsen_dat = read_tsen();
	#endif

	TEMPC_DAC_VAILD = 0;
	TEMPC_DAC_SEL = 0;
	
	if (tsen_dat < -377)	//less than -20 celcius
	{
		tempc_mux_sel = 3;
		tempc_mux_hold_sel = 4;
	}
	else if (tsen_dat >= -377 && tsen_dat < -301)	//-20 to 10 celcius
	{
		tempc_mux_sel = 4;
		tempc_mux_hold_sel = 5;
	}
	else if (tsen_dat >= -301 && tsen_dat < -226)	//10 to 40 celcius
	{
		tempc_mux_sel = 5;
		tempc_mux_hold_sel = 6;
	}
	else if (tsen_dat >= -226 && tsen_dat < -149)	//40 to 70 celcius
	{
		tempc_mux_sel = 6;
		tempc_mux_hold_sel = 7;
	}
	else if (tsen_dat >= -149 && tsen_dat < -73)	//70 to 100 celcius
	{
		tempc_mux_sel = 7;
		tempc_mux_hold_sel = 8;
	}
	else if (tsen_dat >= -73)	//greater than 100 celcius
	{
		tempc_mux_sel = 8;
		tempc_mux_hold_sel = 9;
	}

	TEMPC_MUX_SEL = tempc_mux_sel ^ (tempc_mux_sel>>1);
	TEMPC_MUX_HOLD_SEL = tempc_mux_hold_sel ^ (tempc_mux_hold_sel>>1);

	if (pll_rate == 0)
	{
		cmx_CAL_TEMPC_MUX_SEL_R0_7_0 = tempc_mux_sel;
		cmx_CAL_TEMPC_MUX_HOLD_SEL_R0_7_0 = tempc_mux_hold_sel;
	}
	else if (pll_rate == 1)
	{
		cmx_CAL_TEMPC_MUX_SEL_R1_7_0 = tempc_mux_sel;
		cmx_CAL_TEMPC_MUX_HOLD_SEL_R1_7_0 = tempc_mux_hold_sel;
	}
}

