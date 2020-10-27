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
//#ifdef USE_BANKING
//#pragma codeseg BANK4
//#pragma constseg BANK4
//#endif
#ifndef _32G_V1P0
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg BANK2
#endif
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
#ifdef SUPPORT_EXT_MEM

#define TEMPC_LEVEL_TODIG					reg_ANA_TEMPC_LEVEL_TODIG_RD_1_0
#define TEMPC_DAC_SEL						reg_TEMPC_DAC_SEL_7_0
#define TEMPC_DAC_VAILD						reg_TEMPC_DAC_VALID 
#define TEMPC_MUX_SEL						reg_TEMPC_MUX_SEL_3_0
#define TEMPC_MUX_HOLD_SEL					reg_TEMPC_MUX_HOLD_SEL_3_0
#define TEMPC_DAC_MAX	255
#define TEMPC_DAC_MIN	0
#define TEMPC_MUX_SEL_MAX	10
#define rate					PLL_RATE_SEL

__code uint8_t gray2bi_tb_ram[] = { 0x00, 0x01, 0x03, 0x02, 0x07, 0x6, 0x04, 0x05,
		0x0f, 0x0e, 0x0c, 0x0d, 0x08, 0x09, 0x0b, 0x0a };

#ifdef _32G_V1P0
void pll_temp_force_idle_ram(void)
#else
void pll_temp_force_idle_ram(void) BANKING_CTRL
#endif
{
	//hold_sel = mux_sel + 1
	tempc_mux_hold_sel_2c = gray2bi_tb_ram[reg_TEMPC_MUX_HOLD_SEL_3_0];
	if(tempc_mux_hold_sel_2c > 0)
		tempc_mux_sel_2c = tempc_mux_hold_sel_2c - 1;
	else 
		tempc_mux_sel_2c = 0;

	reg_TEMPC_DAC_VALID = 0; //first set DAC_VAIID = 0 to change mux_sel
	tempc_step_state = 0;
	reg_TEMPC_DAC_SEL_7_0 = 0;
	reg_TEMPC_MUX_SEL_3_0 = tempc_mux_sel_2c ^ (tempc_mux_sel_2c>>1);

}

#ifdef _32G_V1P0
void pll_temp_jump_idle_ram(void)
#else
void pll_temp_jump_idle_ram(void) BANKING_CTRL
#endif
{
	if( reg_TEMPC_DAC_VALID == 1 ) {
		tempc_mux_sel_2c = gray2bi_tb_ram[reg_TEMPC_MUX_SEL_3_0];
		if(tempc_mux_hold_sel_2c < TEMPC_MUX_SEL_MAX)
			tempc_mux_hold_sel_2c = tempc_mux_sel_2c + 1;
		else 
			tempc_mux_hold_sel_2c = TEMPC_MUX_SEL_MAX;
	
		TEMPC_MUX_HOLD_SEL = tempc_mux_hold_sel_2c ^ (tempc_mux_hold_sel_2c>>1);
		tempc_step_state = 0;
		reg_TEMPC_DAC_VALID = 0; 
		reg_TEMPC_DAC_SEL_7_0 = 0;
	}
}

#ifdef _32G_V1P0
void pll_tempc_speed_adj_ram(void)
#else
void pll_tempc_speed_adj_ram(void) BANKING_CTRL
#endif
{
	uint8_t i, temp_lvl_todic_rd;
	
	TEMPC_DAC_VAILD = 0;
	TEMPC_DAC_SEL = 0;
	tempc_step_state = 0;

	tempc_mux_hold_sel_2c = gray2bi_tb_ram[TEMPC_MUX_HOLD_SEL];

	for(i=0; i<3; i++) {
		temp_lvl_todic_rd = temp_level_todic_rd_ram();
		if( temp_lvl_todic_rd == 0x2) {
			if(tempc_mux_hold_sel_2c<10) {
				tempc_mux_hold_sel_2c++;
			}	
		}
		else if( temp_lvl_todic_rd == 0x1) {
			if(tempc_mux_hold_sel_2c>0)	{
				tempc_mux_hold_sel_2c--;
			}	
		}
		else break;

		TEMPC_MUX_HOLD_SEL = tempc_mux_hold_sel_2c ^ (tempc_mux_hold_sel_2c>>1);
		if(tempc_mux_hold_sel_2c >= 1)
			tempc_mux_sel_2c = tempc_mux_hold_sel_2c - 1;
		else if(tempc_mux_hold_sel_2c == 0)
			tempc_mux_sel_2c = 0;
		TEMPC_MUX_SEL = tempc_mux_sel_2c ^ (tempc_mux_sel_2c>>1);

		delay01(cmx_THOLD_SEL2_7_0);  //2uS
	}		
    
}

#ifndef USE_NO_TIMESHARE
#ifdef _32G_V1P0
void pll_temp_cal_ram(void)
#else
void pll_temp_cal_ram(void) BANKING_CTRL
#endif
{
	uint8_t step_size, temp_lvl_todic_rd;

	PHY_STATUS = ST_PLLTEMP_CAL;

	if(cmx_TEMPC_DAC_MODE_1_0==0) step_size = 1;
	else step_size = 0x01 << cmx_TEMPC_STEP_CTRL_2_0;

	temp_lvl_todic_rd = temp_level_todic_rd_ram();

	if (tempc_step_state == 0x0) {

		cmx_PLL_TEMP_CAL_DONE = 0;
		pll_temp_force_idle_ram();		

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
		return;
	}
	else if (tempc_step_state == 0x12) {
		tempc_dir += temp_lvl_todic_rd;

		if((tempc_dir == 0x2a) && (tempc_mux_sel_2c<TEMPC_MUX_SEL_MAX)){ //freq inc
			if( cmx_TEMPC_DAC_MODE_1_0!=1 || pllcal_first_time==1 || TEMPC_DAC_SEL == TEMPC_DAC_MAX ) {
				TEMPC_DAC_SEL = 0;                
				tempc_step_state = 0x32;
				return;
			}
			else
				goto increase_loop;
		}
		else if((tempc_dir == 0x15) && (tempc_mux_hold_sel_2c>0)) { //freq_dec
			if( cmx_TEMPC_DAC_MODE_1_0!=1 || pllcal_first_time==1 || TEMPC_DAC_SEL == TEMPC_DAC_MIN ) { 
				TEMPC_DAC_SEL = TEMPC_DAC_MAX;//255;
				tempc_step_state = 0x35;
				return;
			}
			else
				goto decrease_loop;
		}
		else
			goto tempc_cal_exit;
	}
	else if (tempc_step_state == 0x32) { //inc
		if( tempc_mux_sel_2c<TEMPC_MUX_SEL_MAX && tempc_mux_hold_sel_2c!=0) {
			tempc_mux_sel_2c++;
			TEMPC_MUX_SEL = tempc_mux_sel_2c ^ (tempc_mux_sel_2c>>1);
		}
		TEMPC_DAC_VAILD = 0;
		tempc_step_state = 0x34;
		return;		
	}
	else if (tempc_step_state == 0x34) { //inc
		TEMPC_DAC_VAILD = 1;
		pllcal_first_time = 0;
		tempc_step_state = 0x28;
		return;
	}

	else if (tempc_step_state == 0x35) { //dec
		TEMPC_DAC_VAILD = 0;
		tempc_step_state = 0x33;
		return;	
	}

	else if (tempc_step_state == 0x26) {
		if((TEMPC_DAC_SEL >= (TEMPC_DAC_MAX-2-step_size+1)) &&
				(tempc_mux_hold_sel_2c==tempc_mux_sel_2c) && (tempc_mux_hold_sel_2c<TEMPC_MUX_SEL_MAX )) {
			tempc_mux_hold_sel_2c = tempc_mux_sel_2c + 1;
			TEMPC_MUX_HOLD_SEL = tempc_mux_hold_sel_2c ^ (tempc_mux_hold_sel_2c>>1);
			tempc_step_state = 0x28;
			return;
		}
		else {
			tempc_step_state = 0x8;
			return;
		}	
	}	               
	else if ((tempc_step_state == 0x28) ||(tempc_step_state == 0x8) ) {
		//if (cmx_TEMPC_DAC_MODE_1_0 == 1)
		//	goto increase_mux;
		//else	
		goto increase_loop;
	}
	else if (tempc_step_state == 0x33) {	//dec
		TEMPC_DAC_VAILD = 1;
		pllcal_first_time = 0;
		tempc_step_state = 0x29;
		return;
	}

	else if (tempc_step_state == 0x27) {	
		if((TEMPC_DAC_SEL <= (TEMPC_DAC_MIN+2+step_size-1)) &&
				(tempc_mux_hold_sel_2c==(tempc_mux_sel_2c+1)) && (tempc_mux_hold_sel_2c>0 )) {
			tempc_mux_hold_sel_2c = tempc_mux_sel_2c;
			TEMPC_MUX_HOLD_SEL = tempc_mux_hold_sel_2c ^ (tempc_mux_hold_sel_2c>>1);	
			tempc_step_state = 0x29;
			return;
		}
		else {
			tempc_step_state = 0x9;
			return;
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
		return;
	}
	else goto increase_mux;

	decrease_loop:  if (TEMPC_DAC_SEL > TEMPC_DAC_MIN) {
		if( TEMPC_DAC_SEL > step_size )
			TEMPC_DAC_SEL -= step_size;
		else TEMPC_DAC_SEL = 0;
		tempc_step_state = 0x27;
		return;
	}
	else {
		goto decrease_mux;
	}

	increase_mux:  if( TEMPC_DAC_SEL == TEMPC_DAC_MAX) {
		//TEMPC_DAC_VAILD = 1;
	}
	tempc_step_state = 0x2a;
	return;

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
	return;
}

// ==================================== ORIGIANL CODE =================================						 
#else

#ifdef _32G_V1P0
void pll_temp_cal_ram(void)
#else
void pll_temp_cal_ram(void) BANKING_CTRL
#endif
{
	uint8_t step_size, dir, cnt;
	//uint8_t tempc_mux_sel_2c, tempc_mux_hold_sel_2c;

	PHY_STATUS = ST_PLLTEMP_CAL;

	cmx_PLL_TEMP_CAL_DONE = 0;
	cmx_PLL_TEMP_CAL_PASS = 0;

	dir = 0;
	cnt = 0;

	if(cmx_TEMPC_DAC_MODE_1_0==0) step_size = 1;
	else step_size = 0x01 << cmx_TEMPC_STEP_CTRL_2_0;

	tempc_mux_sel_2c = gray2bi_tb_ram[TEMPC_MUX_SEL];
	tempc_mux_hold_sel_2c = gray2bi_tb_ram[TEMPC_MUX_HOLD_SEL];

	timeout_start(20000); //20mS

	dir = TEMPC_LEVEL_TODIG; dir<<=2; delay01(50);
	dir += TEMPC_LEVEL_TODIG; dir<<=2; delay01(50);
	dir += TEMPC_LEVEL_TODIG; 			
	if((dir == 0x2a) && (tempc_mux_sel_2c<TEMPC_MUX_SEL_MAX)){ //freq inc

		if( cmx_TEMPC_DAC_MODE_1_0!=1 || pllcal_first_time==1 || TEMPC_DAC_SEL == TEMPC_DAC_MAX ) {
			TEMPC_DAC_SEL = 0;
			delay01(1000);
			TEMPC_DAC_VAILD = 1;
			pllcal_first_time = 0;
		}	

		do {	
			if( TEMPC_DAC_SEL < (TEMPC_DAC_MAX-step_size) )					
				TEMPC_DAC_SEL += step_size;
			else TEMPC_DAC_SEL = TEMPC_DAC_MAX;	
			cnt = step_size-1;
			do { 
				delay01(400);
			} while(cnt-->0); 

			if((TEMPC_DAC_SEL >= (TEMPC_DAC_MAX-2-step_size+1)) && 
					(tempc_mux_hold_sel_2c==tempc_mux_sel_2c) && (tempc_mux_hold_sel_2c<TEMPC_MUX_SEL_MAX )) {
				tempc_mux_hold_sel_2c++;
				TEMPC_MUX_HOLD_SEL = tempc_mux_hold_sel_2c ^ (tempc_mux_hold_sel_2c>>1);
				delay01(400);
			}

			if( cmx_TEMPC_DAC_MODE_1_0 == 1 ) break;

		} while ( TEMPC_DAC_SEL < TEMPC_DAC_MAX ); 	

		if( TEMPC_DAC_SEL == TEMPC_DAC_MAX) {
			TEMPC_DAC_VAILD = 0;
			delay01(5);
			if( tempc_mux_sel_2c<TEMPC_MUX_SEL_MAX) {
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
			delay01(1000);
			TEMPC_DAC_VAILD = 1;
			pllcal_first_time = 0;
		}	

		do {	
			if( TEMPC_DAC_SEL > step_size )
				TEMPC_DAC_SEL -= step_size;
			else TEMPC_DAC_SEL = 0;	
			cnt = step_size-1;
			do { 
				delay01(400);
			} while(cnt-->0); 

			if((TEMPC_DAC_SEL <= (TEMPC_DAC_MIN+2+step_size-1)) && 
					(tempc_mux_hold_sel_2c==(tempc_mux_sel_2c+1)) && (tempc_mux_hold_sel_2c>0 )) {
				tempc_mux_hold_sel_2c--;
				TEMPC_MUX_HOLD_SEL = tempc_mux_hold_sel_2c ^ (tempc_mux_hold_sel_2c>>1);
				delay01(400);
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
	//cmx_CAL_TEMPC_MUX_SEL_7_0 = tlempc_mux_sel_2c;
	//cmx_CAL_TEMPC_MUX_HOLD_SEL_7_0 = tempc_mux_hold_sel_2c;
	cmx_PLL_TEMP_CAL_DONE = 1;

}
#endif //USE_NO_TIMESHARE

#ifdef _32G_V1P0
void load_init_temp_table_ram(void)
#else
void load_init_temp_table_ram(void) BANKING_CTRL
#endif
{

	if( cmx_PLL_TEMP_CAL_EXT_EN ) {
		cmx_PLL_TEMP_CAL_DONE = 1;
		return;
	}

	TEMPC_DAC_VAILD = 0;
	TEMPC_DAC_SEL = 0;
	tempc_step_state = 0;

	if (tsen_dat < -377)	//less than -20 celcius
	{
		tempc_mux_sel_2c = 3;
	}
	else if (tsen_dat >= -377 && tsen_dat < -301)	//-20 to 10 celcius
	{
		tempc_mux_sel_2c = 4;
	}
	else if (tsen_dat >= -301 && tsen_dat < -226)	//10 to 40 celcius
	{
		tempc_mux_sel_2c = 5;
	}
	else if (tsen_dat >= -226 && tsen_dat < -149)	//40 to 70 celcius
	{
		tempc_mux_sel_2c = 6;
	}
	else if (tsen_dat >= -149 && tsen_dat < -73)	//70 to 100 celcius
	{
		tempc_mux_sel_2c = 7;
	}
	else if (tsen_dat >= -73)	//greater than 100 celcius
	{
		tempc_mux_sel_2c = 8;
	}

	tempc_mux_hold_sel_2c = tempc_mux_sel_2c + 1;
	TEMPC_MUX_SEL = tempc_mux_sel_2c ^ (tempc_mux_sel_2c>>1);
	TEMPC_MUX_HOLD_SEL = tempc_mux_hold_sel_2c ^ (tempc_mux_hold_sel_2c>>1);

	cmx_PLL_TEMP_CAL_DONE = 1;
	
}

#endif //SUPPORT_EXT_MEM

