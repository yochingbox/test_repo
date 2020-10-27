/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file pll_temp_cal.c
* \purpose PLL Temperature calibration
* \History
*	10/15/2015 Heejeong Ryu		Initial 
*   10/16/2016                  TEMPC_MUX_SEL, TEMPC_MUX_HOLD_SEL range changed (for FFC)
*   11/13/2019 Heejeong Ryu     Added Ts/Rs flag, updated initial values according psuedo code
*/
#include "common.h"
#ifdef USE_BANKING
#pragma codeseg BANK3
#pragma constseg CSEG
#endif

#define TS_TEMPC_MUX_SEL_MAX		reg_PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_MAX_LANE_3_0
#define RS_TEMPC_MUX_SEL_MAX		reg_PLL_RS_LCPLL_TEMPC_MUX_HOLD_SEL_MAX_LANE_3_0

__code uint8_t gray2bi_tb[] = { 0x00, 0x01, 0x03, 0x02, 0x07, 0x6, 0x04, 0x05,
		0x0f, 0x0e, 0x0c, 0x0d, 0x08, 0x09, 0x0b, 0x0a };



void load_init_temp_table(bool rs_on) BANKING_CTRL
{
	int8_t tsen_dat;
	uint8_t tempc_mux_sel, tempc_mux_hold_sel;

	if(cmx_PLL_TEMP_CAL_EXT_EN) return;
	
	tempc_mux_sel = 0; tempc_mux_hold_sel = 0;
	
	tsen_dat = read_tsen_cont();

	lnx_TEMP_CDEGREE_LANE_15_0 = (uint16_t) tsen_dat;
	
	if (tsen_dat < -20)	//less than -20 celcius
	{
		tempc_mux_sel = 3; //7; //5;
		tempc_mux_hold_sel = 3; //7; //5;
	}
	else if (tsen_dat >= -20 && tsen_dat < 0)	//-20 to 0 celcius
	{
		tempc_mux_sel = 2; //6; //5; //6;
		tempc_mux_hold_sel = 2; //6; //5; //6;
	}
	else if (tsen_dat >= 0 && tsen_dat < 20)	//0 to 20 celcius
	{
		tempc_mux_sel = 7; //4; //7;
		tempc_mux_hold_sel = 7; //4; //7;
	}
	else if (tsen_dat >= 20 && tsen_dat < 40)	//20 to 40 celcius
	{
		tempc_mux_sel = 5; //0xc; //8;
		tempc_mux_hold_sel = 5; //0xc; //8;
	}
	else if (tsen_dat >= 40 && tsen_dat < 60)	//40 to 60 celcius
	{
		tempc_mux_sel = 0xc; //0xd; //9;
		tempc_mux_hold_sel = 0xc; //0xd; //9;
	}
	else if (tsen_dat >= 60 && tsen_dat < 80)	//60 to 80 celcius
	{
		tempc_mux_sel = 0xf; //0xd; //0xf; //10;
		tempc_mux_hold_sel = 0xf; //0xd; //0xf; //10;
	}
	else if (tsen_dat >= 80 && tsen_dat < 100)	//80 to 100 celcius
	{
		tempc_mux_sel = 0xa; //0xf; //0xe; //11;
		tempc_mux_hold_sel = 0xa; //0xf; //0xe; //11;
	}
	else if (tsen_dat >= 100)	//greater than 100 celcius
	{
		tempc_mux_sel = 0xb; //0xe; //0xa; //0xC;
		tempc_mux_hold_sel = 0xb; //0xe; //0xa; //0xC;
	}

	if(rs_on) {
		reg_PLL_RS_LCPLL_TEMPC_EXT_EN_LANE = 1;
		reg_PLL_RS_LCPLL_TEMPC_MUX_SEL_EXT_LANE_3_0  = tempc_mux_sel;
		reg_PLL_RS_LCPLL_TEMPC_MUX_HOLD_SEL_EXT_LANE_3_0 = tempc_mux_hold_sel;

        //#ifndef _56G_5NM
	//	reg_PLL_RS_PCIE_HIGHK_EN_LANE = 1; //clamp to 11
        //#else
        //reg_PLL_RS_PCIE_HIGHK_EN_LANE_3_0 = 1; //clamp to 11
        //#endif
		rs_tempc_mux_hold_sel_2c = gray2bi_tb[tempc_mux_hold_sel];
		rs_tempc_mux_sel_2c = gray2bi_tb[tempc_mux_sel];
		rs_pllcal_first_time = 1;
	}
	else {
		reg_PLL_TS_LCPLL_TEMPC_EXT_EN_LANE = 1;
		reg_PLL_TS_LCPLL_TEMPC_MUX_SEL_EXT_LANE_3_0  = tempc_mux_sel;
		reg_PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_EXT_LANE_3_0 = tempc_mux_hold_sel;
	
	//Hui requested to remove       
	//#ifndef _56G_5NM
	//	reg_PLL_TS_PCIE_HIGHK_EN_LANE = 1; //clamp to 11
        //#else
        //reg_PLL_TS_PCIE_HIGHK_EN_LANE_3_0 = 1; //clamp to 11
        //#endif		
		ts_tempc_mux_hold_sel_2c = gray2bi_tb[tempc_mux_hold_sel];
		ts_tempc_mux_sel_2c = gray2bi_tb[tempc_mux_sel];
		ts_pllcal_first_time = 1;
	}
	
	//save to register
	/*if (pll_rate == 0)
	{
		cmx_CAL_TEMPC_MUX_SEL_R0_7_0 = tempc_mux_sel;
		cmx_CAL_TEMPC_MUX_HOLD_SEL_R0_7_0 = tempc_mux_hold_sel;
	}
	else if (pll_rate == 1)
	{
		cmx_CAL_TEMPC_MUX_SEL_R1_7_0 = tempc_mux_sel;
		cmx_CAL_TEMPC_MUX_HOLD_SEL_R1_7_0 = tempc_mux_hold_sel;
	}*/
}

//--------------
// TempC continuous calibration firmware based
//

uint8_t	ts_temp_level_todic_rd(void) BANKING_CTRL
{
	//reg_ANA_PLL_TS_TEMPC_LEVEL_TODIG_RD_REQ_LANE = 1; //no need
	//reg_ANA_PLL_TS_TEMPC_LEVEL_TODIG_RD_REQ_LANE = 0;

	return reg_PLL_TS_LCPLL_TEMPC_LEVEL_TODIG_LANE_1_0;
}
	
void ts_pll_tempc_speed_adj(void) BANKING_CTRL {
	uint8_t i, temp_lvl_todic_rd;

	ts_tempc_step_state = 0;
	ts_pllcal_first_time = 1;
	
	reg_PLL_TS_LCPLL_TEMPC_EXT_EN_LANE = 1;
	reg_PLL_TS_LCPLL_TEMPC_DAC_VALID_EXT_LANE = 0;
	reg_PLL_TS_LCPLL_TEMPC_DAC_SEL_EXT_LANE_7_0 = 0;

	ts_tempc_mux_hold_sel_2c = gray2bi_tb[reg_PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_LANE_3_0];

	for(i=0; i<3; i++) {
		temp_lvl_todic_rd = ts_temp_level_todic_rd();
		if( temp_lvl_todic_rd == 0x2) {
			if(ts_tempc_mux_hold_sel_2c<10) {
				ts_tempc_mux_hold_sel_2c++;
			}	
		}
		else if( temp_lvl_todic_rd == 0x1) {
			if(ts_tempc_mux_hold_sel_2c>0)	{
				ts_tempc_mux_hold_sel_2c--;
			}	
		}
		else break;

		reg_PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_EXT_LANE_3_0 = ts_tempc_mux_hold_sel_2c ^ (ts_tempc_mux_hold_sel_2c>>1);
		if(ts_tempc_mux_hold_sel_2c >= 1)
			ts_tempc_mux_sel_2c = ts_tempc_mux_hold_sel_2c - 1;
		else if(ts_tempc_mux_hold_sel_2c == 0)
			ts_tempc_mux_sel_2c = 0;
		reg_PLL_TS_LCPLL_TEMPC_MUX_SEL_EXT_LANE_3_0 = ts_tempc_mux_sel_2c ^ (ts_tempc_mux_sel_2c>>1);

		delay(cmx_THOLD_SEL2_7_0);  //2uS
	}		
    
}

uint8_t	rs_temp_level_todic_rd(void) BANKING_CTRL
{
	//reg_ANA_PLL_RS_TEMPC_LEVEL_TODIG_RD_REQ_LANE = 1; //no need
	//reg_ANA_PLL_RS_TEMPC_LEVEL_TODIG_RD_REQ_LANE = 0;

	return reg_PLL_RS_LCPLL_TEMPC_LEVEL_TODIG_LANE_1_0;
}
	
void rs_pll_tempc_speed_adj(void) BANKING_CTRL {
	uint8_t i, temp_lvl_todic_rd;
	
	reg_PLL_RS_LCPLL_TEMPC_EXT_EN_LANE = 1;
	reg_PLL_RS_LCPLL_TEMPC_DAC_VALID_EXT_LANE = 0;
	reg_PLL_RS_LCPLL_TEMPC_DAC_SEL_EXT_LANE_7_0 = 0;

	rs_tempc_mux_hold_sel_2c = gray2bi_tb[reg_PLL_RS_LCPLL_TEMPC_MUX_HOLD_SEL_LANE_3_0];

	for(i=0; i<3; i++) {
		temp_lvl_todic_rd = rs_temp_level_todic_rd();
		if( temp_lvl_todic_rd == 0x2) {
			if(rs_tempc_mux_hold_sel_2c<10) {
				rs_tempc_mux_hold_sel_2c++;
			}	
		}
		else if( temp_lvl_todic_rd == 0x1) {
			if(rs_tempc_mux_hold_sel_2c>0)	{
				rs_tempc_mux_hold_sel_2c--;
			}	
		}
		else break;

		reg_PLL_RS_LCPLL_TEMPC_MUX_HOLD_SEL_EXT_LANE_3_0 = rs_tempc_mux_hold_sel_2c ^ (rs_tempc_mux_hold_sel_2c>>1);
		if(rs_tempc_mux_hold_sel_2c >= 1)
			rs_tempc_mux_sel_2c = rs_tempc_mux_hold_sel_2c - 1;
		else if(rs_tempc_mux_hold_sel_2c == 0)
			rs_tempc_mux_sel_2c = 0;
		reg_PLL_RS_LCPLL_TEMPC_MUX_SEL_EXT_LANE_3_0 = rs_tempc_mux_sel_2c ^ (rs_tempc_mux_sel_2c>>1);

		delay(cmx_THOLD_SEL2_7_0);  //2uS
	}		
    	

}

//--------------
// TempC continuous calibration firmware based
//

void rs_pll_temp_force_idle(void) BANKING_CTRL {

	//hold_sel = mux_sel + 1
	rs_tempc_mux_hold_sel_2c = gray2bi_tb[RS_TEMPC_MUX_HOLD_SEL];
	if(rs_tempc_mux_hold_sel_2c > 0)
		rs_tempc_mux_sel_2c = rs_tempc_mux_hold_sel_2c - 1;
	else 
		rs_tempc_mux_sel_2c = 0;

	RS_TEMPC_DAC_VAILD = 0; //first set DAC_VAIID = 0 to change mux_sel
	rs_tempc_step_state = 0;
	//RS_TEMPC_DAC_SEL = 0;
	RS_TEMPC_MUX_SEL = rs_tempc_mux_sel_2c ^ (rs_tempc_mux_sel_2c>>1);

}

void rs_pll_temp_cal( void )  BANKING_CTRL{
	uint8_t step_size, temp_lvl_todic_rd, dac;

	PHY_STATUS = ST_RS_PLLTEMP_CAL;

	if(reg_PLL_RS_LCPLL_TEMPC_CAL_EN_LANE) {
		reg_PLL_RS_LCPLL_TEMPC_CAL_EN_LANE = 0;	
		while(!reg_PLL_RS_LCPLL_TEMPC_CAL_DONE_LANE);

		RS_TEMPC_MUX_HOLD_SEL = reg_PLL_RS_LCPLL_TEMPC_MUX_SEL_LANE_3_0;
		rs_tempc_mux_hold_sel_2c = gray2bi_tb[reg_PLL_RS_LCPLL_TEMPC_MUX_SEL_LANE_3_0];
		if(rs_tempc_mux_hold_sel_2c > 0)
			rs_tempc_mux_sel_2c = rs_tempc_mux_hold_sel_2c - 1;
		else 
			rs_tempc_mux_sel_2c = 0;
		RS_TEMPC_MUX_SEL = rs_tempc_mux_sel_2c ^ (rs_tempc_mux_sel_2c>>1);
		RS_TEMPC_DAC_VAILD = 0; //first set DAC_VAIID = 0 to change mux_sel
				
		reg_PLL_RS_LCPLL_TEMPC_EXT_EN_LANE = 1;

		rs_pllcal_first_time = 1; 
		rs_tempc_step_state = 0;
	}

	if(cmx_TEMPC_DAC_MODE_1_0==0) step_size = 1;
	else step_size = 0x01 << cmx_TEMPC_STEP_CTRL_2_0;

	temp_lvl_todic_rd = rs_temp_level_todic_rd();

	if (rs_tempc_step_state == 0x0) {

		lnx_RX_PLL_TEMP_CAL_DONE_LANE = 0;
		rs_pll_temp_force_idle();		

		rs_tempc_dir = 0;
		rs_tempc_dir = temp_lvl_todic_rd;
		rs_tempc_dir<<=2;
		rs_tempc_step_state = 0x11;
		return;
	}			
	else if (rs_tempc_step_state == 0x11) {
		rs_tempc_dir += temp_lvl_todic_rd;
		rs_tempc_dir<<=2;
		rs_tempc_step_state = 0x12;
		return;
	}
	else if (rs_tempc_step_state == 0x12) {
		rs_tempc_dir += temp_lvl_todic_rd;

		if((rs_tempc_dir == 0x2a) && (rs_tempc_mux_sel_2c<RS_TEMPC_MUX_SEL_MAX)){ //freq inc
			if( cmx_TEMPC_DAC_MODE_1_0!=1 || rs_pllcal_first_time==1 || RS_TEMPC_DAC_SEL == RS_TEMPC_DAC_MAX) {
			     if(RS_TEMPC_DAC_SEL == RS_TEMPC_DAC_MAX) {
				RS_TEMPC_DAC_SEL = 0x7f; //0;                
				rs_tempc_step_state = 0x22; //0x32;
			     }
			     else 
				rs_tempc_step_state = 0x32;	
			     return;
			}
			else
				goto rs_increase_loop;
		}
		else if((rs_tempc_dir == 0x15) && (rs_tempc_mux_hold_sel_2c>0)) { //freq_dec
			if( cmx_TEMPC_DAC_MODE_1_0!=1 || rs_pllcal_first_time==1 || RS_TEMPC_DAC_SEL == RS_TEMPC_DAC_MIN ) { 
				RS_TEMPC_DAC_SEL = 0x01; //RS_TEMPC_DAC_MAX;//255;
				rs_tempc_step_state = 0x25; //0x35;
				return;
			}
			else
				goto rs_decrease_loop;
		}
		else
			goto rs_tempc_cal_exit;
	}
	else if (rs_tempc_step_state == 0x22) {
		goto rs_termo_dec_dac;	
	}
	else if (rs_tempc_step_state == 0x25) {
		goto rs_termo_inc_dac;	
	}
	else if (rs_tempc_step_state == 0x32) { //inc
		if( rs_tempc_mux_sel_2c<RS_TEMPC_MUX_SEL_MAX && rs_tempc_mux_hold_sel_2c!=0) {
			rs_tempc_mux_sel_2c++;
			RS_TEMPC_MUX_SEL = rs_tempc_mux_sel_2c ^ (rs_tempc_mux_sel_2c>>1);
		}
		RS_TEMPC_DAC_VAILD = 0;
		rs_tempc_step_state = 0x34;
		return;		
	}
	else if (rs_tempc_step_state == 0x34) { //inc
		RS_TEMPC_DAC_VAILD = 1;
		rs_pllcal_first_time = 0;
		rs_tempc_step_state = 0x28;
		return;
	}

	else if (rs_tempc_step_state == 0x35) { //dec
		RS_TEMPC_DAC_VAILD = 0;
		rs_tempc_step_state = 0x33;
		return;	
	}

	else if (rs_tempc_step_state == 0x26) {
		if((RS_TEMPC_DAC_SEL >= (RS_TEMPC_DAC_MAX-2-step_size+1)) &&
				(rs_tempc_mux_hold_sel_2c==rs_tempc_mux_sel_2c) && (rs_tempc_mux_hold_sel_2c<RS_TEMPC_MUX_SEL_MAX )) {
			rs_tempc_mux_hold_sel_2c = rs_tempc_mux_sel_2c + 1;
			RS_TEMPC_MUX_HOLD_SEL = rs_tempc_mux_hold_sel_2c ^ (rs_tempc_mux_hold_sel_2c>>1);
			rs_tempc_step_state = 0x28;
			return;
		}
		else {
			rs_tempc_step_state = 0x8;
			return;
		}	
	}	               
	else if ((rs_tempc_step_state == 0x28) ||(rs_tempc_step_state == 0x8) ) {
		//if (cmx_TEMPC_DAC_MODE_1_0 == 1)
		//	goto increase_mux;
		//else	
		goto rs_increase_loop;
	}
	else if (rs_tempc_step_state == 0x33) {	//dec
		RS_TEMPC_DAC_VAILD = 1;
		rs_pllcal_first_time = 0;
		rs_tempc_step_state = 0x29;
		return;
	}

	else if (rs_tempc_step_state == 0x27) {	
		if((RS_TEMPC_DAC_SEL <= (RS_TEMPC_DAC_MIN+2+step_size-1)) &&
				(rs_tempc_mux_hold_sel_2c==(rs_tempc_mux_sel_2c+1)) && (rs_tempc_mux_hold_sel_2c>0 )) {
			rs_tempc_mux_hold_sel_2c = rs_tempc_mux_sel_2c;
			RS_TEMPC_MUX_HOLD_SEL = rs_tempc_mux_hold_sel_2c ^ (rs_tempc_mux_hold_sel_2c>>1);	
			rs_tempc_step_state = 0x29;
			return;
		}
		else {
			rs_tempc_step_state = 0x9;
			return;
		}
	}
	else if ((rs_tempc_step_state == 0x29) ||(rs_tempc_step_state == 0x9) ) {
		//if (cmx_TEMPC_DAC_MODE_1_0 == 1)
		//        goto decrease_mux;
		//else
		goto rs_decrease_loop;
	}
	else if(rs_tempc_step_state == 0x2a) {
		goto rs_increase_end;
	}

	rs_increase_loop:  if (RS_TEMPC_DAC_SEL < RS_TEMPC_DAC_MAX) {
		if( RS_TEMPC_DAC_SEL < (RS_TEMPC_DAC_MAX-step_size) )
			RS_TEMPC_DAC_SEL += step_size;
		else
			RS_TEMPC_DAC_SEL = RS_TEMPC_DAC_MAX;
		rs_tempc_step_state = 0x26;
		return;
	}
	else goto rs_increase_mux;

	rs_decrease_loop:  if (RS_TEMPC_DAC_SEL > RS_TEMPC_DAC_MIN) {
		if( RS_TEMPC_DAC_SEL > step_size )
			RS_TEMPC_DAC_SEL -= step_size;
		else RS_TEMPC_DAC_SEL = 0;
		rs_tempc_step_state = 0x27;
		return;
	}
	else {
		goto rs_decrease_mux;
	}

	rs_termo_dec_dac:
		if (RS_TEMPC_DAC_SEL > RS_TEMPC_DAC_MIN) {
			RS_TEMPC_DAC_SEL >>= 1;
		}
		else {
			RS_TEMPC_DAC_VAILD = 0;
			rs_pllcal_first_time = 0;
			rs_tempc_step_state = 0x32;
		}
		return;	

	rs_termo_inc_dac:
		if (RS_TEMPC_DAC_SEL < RS_TEMPC_DAC_MAX) {
			dac = RS_TEMPC_DAC_SEL;
			dac <<= 1; dac |= 0x01;
			RS_TEMPC_DAC_SEL = dac;
		}
		else {
			rs_tempc_step_state = 0x35;
		}
		return;	

	rs_increase_mux:  if( RS_TEMPC_DAC_SEL == RS_TEMPC_DAC_MAX) {
		//RS_TEMPC_DAC_VAILD = 1;
	}
	rs_tempc_step_state = 0x2a;
	return;

	rs_increase_end:  RS_TEMPC_DAC_VAILD = 0;
	goto rs_tempc_cal_exit;


	rs_decrease_mux:  if(RS_TEMPC_DAC_SEL == RS_TEMPC_DAC_MIN)
		RS_TEMPC_DAC_VAILD = 0;
	if(	rs_tempc_mux_sel_2c >= 1) {
		rs_tempc_mux_sel_2c = rs_tempc_mux_sel_2c - 1;
		RS_TEMPC_MUX_SEL = rs_tempc_mux_sel_2c ^ (rs_tempc_mux_sel_2c>>1);
	}
	goto rs_tempc_cal_exit;

	rs_tempc_cal_exit:
	lnx_RX_PLL_TEMP_CAL_PASS_LANE = 1;
	rs_tempc_step_state = 0;
	rs_pllcal_first_time = 1;
	//save
	lnx_RS_TEMPC_DAC_SEL_LANE_7_0 = RS_TEMPC_DAC_SEL;
	lnx_RX_PLL_TEMP_CAL_DONE_LANE = 1;

	return;
}


void ts_pll_temp_force_idle(void) BANKING_CTRL {

	//hold_sel = mux_sel + 1
	ts_tempc_mux_hold_sel_2c = gray2bi_tb[TS_TEMPC_MUX_HOLD_SEL];
	if(ts_tempc_mux_hold_sel_2c > 0)
		ts_tempc_mux_sel_2c = ts_tempc_mux_hold_sel_2c - 1;
	else 
		ts_tempc_mux_sel_2c = 0;

	TS_TEMPC_DAC_VAILD = 0; //first set DAC_VAIID = 0 to change mux_sel
	ts_tempc_step_state = 0;
	//TS_TEMPC_DAC_SEL = 0;
	TS_TEMPC_MUX_SEL = ts_tempc_mux_sel_2c ^ (ts_tempc_mux_sel_2c>>1);

}

void ts_pll_temp_cal( void )  BANKING_CTRL{
	uint8_t step_size, temp_lvl_todic_rd, dac;

	PHY_STATUS = ST_TS_PLLTEMP_CAL;

	if(reg_PLL_TS_LCPLL_TEMPC_CAL_EN_LANE) {
		reg_PLL_TS_LCPLL_TEMPC_CAL_EN_LANE = 0;	
		while(!reg_PLL_TS_LCPLL_TEMPC_CAL_DONE_LANE);

		TS_TEMPC_MUX_HOLD_SEL = reg_PLL_TS_LCPLL_TEMPC_MUX_SEL_LANE_3_0;
		ts_tempc_mux_hold_sel_2c = gray2bi_tb[reg_PLL_TS_LCPLL_TEMPC_MUX_SEL_LANE_3_0];
		if(ts_tempc_mux_hold_sel_2c > 0)
			ts_tempc_mux_sel_2c = ts_tempc_mux_hold_sel_2c - 1;
		else 
			ts_tempc_mux_sel_2c = 0;
		TS_TEMPC_MUX_SEL = ts_tempc_mux_sel_2c ^ (ts_tempc_mux_sel_2c>>1);
		TS_TEMPC_DAC_VAILD = 0; //first set DAC_VAIID = 0 to change mux_sel			
		reg_PLL_TS_LCPLL_TEMPC_EXT_EN_LANE = 1;

		ts_pllcal_first_time = 1; 
		ts_tempc_step_state = 0;
	}

	if(cmx_TEMPC_DAC_MODE_1_0==0) step_size = 1;
	else step_size = 0x01 << cmx_TEMPC_STEP_CTRL_2_0;

	temp_lvl_todic_rd = ts_temp_level_todic_rd();

	if (ts_tempc_step_state == 0x0) {

		lnx_TX_PLL_TEMP_CAL_DONE_LANE = 0;
		ts_pll_temp_force_idle();		

		ts_tempc_dir = 0;
		ts_tempc_dir = temp_lvl_todic_rd;
		ts_tempc_dir<<=2;
		ts_tempc_step_state = 0x11;
		return;
	}			
	else if (ts_tempc_step_state == 0x11) {
		ts_tempc_dir += temp_lvl_todic_rd;
		ts_tempc_dir<<=2;
		ts_tempc_step_state = 0x12;
		return;
	}
	else if (ts_tempc_step_state == 0x12) {
		ts_tempc_dir += temp_lvl_todic_rd;

		if((ts_tempc_dir == 0x2a) && (ts_tempc_mux_sel_2c<TS_TEMPC_MUX_SEL_MAX)){ //freq inc
			if( cmx_TEMPC_DAC_MODE_1_0!=1 || ts_pllcal_first_time==1|| TS_TEMPC_DAC_SEL == TS_TEMPC_DAC_MAX ) {
			    if(TS_TEMPC_DAC_SEL == TS_TEMPC_DAC_MAX) {	
				TS_TEMPC_DAC_SEL = 0x7f; //0;                
				ts_tempc_step_state = 0x22; //0x32;
			    }
			    else 	
				ts_tempc_step_state = 0x32;	
			    return;
			}
			else
				goto ts_increase_loop;
		}
		else if((ts_tempc_dir == 0x15) && (ts_tempc_mux_hold_sel_2c>0)) { //freq_dec
			if( cmx_TEMPC_DAC_MODE_1_0!=1 || ts_pllcal_first_time==1 || TS_TEMPC_DAC_SEL == TS_TEMPC_DAC_MIN ) { 
				TS_TEMPC_DAC_SEL = 0x01; //TS_TEMPC_DAC_MAX;//255;
				ts_tempc_step_state = 0x25; //0x35;
				return;
			}
			else
				goto ts_decrease_loop;
		}
		else
			goto ts_tempc_cal_exit;
	}
	else if (ts_tempc_step_state == 0x22) {
		goto ts_termo_dec_dac;	
	}
	else if (ts_tempc_step_state == 0x25) {
		goto ts_termo_inc_dac;	
	}
	else if (ts_tempc_step_state == 0x32) { //inc
		if( ts_tempc_mux_sel_2c<TS_TEMPC_MUX_SEL_MAX && ts_tempc_mux_hold_sel_2c!=0) {
			ts_tempc_mux_sel_2c++;
			TS_TEMPC_MUX_SEL = ts_tempc_mux_sel_2c ^ (ts_tempc_mux_sel_2c>>1);
		}
		TS_TEMPC_DAC_VAILD = 0;
		ts_tempc_step_state = 0x34;
		return;		
	}
	else if (ts_tempc_step_state == 0x34) { //inc
		TS_TEMPC_DAC_VAILD = 1;
		ts_pllcal_first_time = 0;
		ts_tempc_step_state = 0x28;
		return;
	}

	else if (ts_tempc_step_state == 0x35) { //dec
		TS_TEMPC_DAC_VAILD = 0;
		ts_tempc_step_state = 0x33;
		return;	
	}

	else if (ts_tempc_step_state == 0x26) {
		if((TS_TEMPC_DAC_SEL >= (TS_TEMPC_DAC_MAX-2-step_size+1)) &&
				(ts_tempc_mux_hold_sel_2c==ts_tempc_mux_sel_2c) && (ts_tempc_mux_hold_sel_2c<TS_TEMPC_MUX_SEL_MAX )) {
			ts_tempc_mux_hold_sel_2c = ts_tempc_mux_sel_2c + 1;
			TS_TEMPC_MUX_HOLD_SEL = ts_tempc_mux_hold_sel_2c ^ (ts_tempc_mux_hold_sel_2c>>1);
			ts_tempc_step_state = 0x28;
			return;
		}
		else {
			ts_tempc_step_state = 0x8;
			goto ts_increase_loop; //return;
		}	
	}	               
	else if ((ts_tempc_step_state == 0x28) ||(ts_tempc_step_state == 0x8) ) {
		//if (cmx_TEMPC_DAC_MODE_1_0 == 1)
		//	goto increase_mux;
		//else	
		goto ts_increase_loop;
	}
	else if (ts_tempc_step_state == 0x33) {	//dec
		TS_TEMPC_DAC_VAILD = 1;
		ts_pllcal_first_time = 0;
		ts_tempc_step_state = 0x29;
		return;
	}

	else if (ts_tempc_step_state == 0x27) {	
		if((TS_TEMPC_DAC_SEL <= (TS_TEMPC_DAC_MIN+2+step_size-1)) &&
				(ts_tempc_mux_hold_sel_2c==(ts_tempc_mux_sel_2c+1)) && (ts_tempc_mux_hold_sel_2c>0 )) {
			ts_tempc_mux_hold_sel_2c = ts_tempc_mux_sel_2c;
			TS_TEMPC_MUX_HOLD_SEL = ts_tempc_mux_hold_sel_2c ^ (ts_tempc_mux_hold_sel_2c>>1);	
			ts_tempc_step_state = 0x29;
			return;
		}
		else {
			ts_tempc_step_state = 0x9;
			goto ts_decrease_loop;
			//return;
		}
	}
	else if ((ts_tempc_step_state == 0x29) ||(ts_tempc_step_state == 0x9) ) {
		//if (cmx_TEMPC_DAC_MODE_1_0 == 1)
		//        goto decrease_mux;
		//else
		goto ts_decrease_loop;
	}
	else if(ts_tempc_step_state == 0x2a) {
		goto ts_increase_end;
	}

	ts_increase_loop:  if (TS_TEMPC_DAC_SEL < TS_TEMPC_DAC_MAX) {
		if( TS_TEMPC_DAC_SEL < (TS_TEMPC_DAC_MAX-step_size) )
			TS_TEMPC_DAC_SEL += step_size;
		else
			TS_TEMPC_DAC_SEL = TS_TEMPC_DAC_MAX;
		ts_tempc_step_state = 0x26;
		return;
	}
	else goto ts_increase_mux;

	ts_decrease_loop:  if (TS_TEMPC_DAC_SEL > TS_TEMPC_DAC_MIN) {
		if( TS_TEMPC_DAC_SEL > step_size )
			TS_TEMPC_DAC_SEL -= step_size;
		else TS_TEMPC_DAC_SEL = 0;
		ts_tempc_step_state = 0x27;
		return;
	}
	else {
		goto ts_decrease_mux;
	}

	ts_termo_dec_dac:
		if (TS_TEMPC_DAC_SEL > TS_TEMPC_DAC_MIN) {
			TS_TEMPC_DAC_SEL >>= 1;
		}
		else {
			TS_TEMPC_DAC_VAILD = 0;
			ts_pllcal_first_time = 0;
			ts_tempc_step_state = 0x32;
		}
		return;	

	ts_termo_inc_dac:
		if (TS_TEMPC_DAC_SEL < TS_TEMPC_DAC_MAX) {
			dac = TS_TEMPC_DAC_SEL;
			dac <<= 1; dac |= 0x01;
			TS_TEMPC_DAC_SEL = dac;
		}
		else {
			ts_tempc_step_state = 0x35;
		}
		return;	



	ts_increase_mux:  if( TS_TEMPC_DAC_SEL == TS_TEMPC_DAC_MAX) {
		//TS_TEMPC_DAC_VAILD = 1;
	}
	ts_tempc_step_state = 0x2a;
	return;

	ts_increase_end:  TS_TEMPC_DAC_VAILD = 0;
	goto ts_tempc_cal_exit;


	ts_decrease_mux:  if(TS_TEMPC_DAC_SEL == TS_TEMPC_DAC_MIN)
		TS_TEMPC_DAC_VAILD = 0;
	if(	ts_tempc_mux_sel_2c >= 1) {
		ts_tempc_mux_sel_2c = ts_tempc_mux_sel_2c - 1;
		TS_TEMPC_MUX_SEL = ts_tempc_mux_sel_2c ^ (ts_tempc_mux_sel_2c>>1);
	}
	goto ts_tempc_cal_exit;

	ts_tempc_cal_exit:
	lnx_TX_PLL_TEMP_CAL_PASS_LANE = 1;
	ts_tempc_step_state = 0;
	ts_pllcal_first_time = 1;
	//save
	lnx_TS_TEMPC_DAC_SEL_LANE_7_0 = TS_TEMPC_DAC_SEL;
	lnx_TX_PLL_TEMP_CAL_DONE_LANE = 1;

	return;
}

void tempc_cal_cont_fw(void) BANKING_CTRL {
	uint8_t udelay;
	if(!cmx_PLL_TEMP_CAL_CONT_EN || cmx_FORCE_CONT_CAL_SKIP) return;
	
	if(reg_ANA_PLL_TS_CLK_READY_LANE && pll_sel!=RS_ON) {
		if(ts_pllcal_first_time) {		
			ts_pllcal_first_time = 0;
			ts_tempc_step_state	= 0; 	
			timeout2_start(TSTEMPC, (uint32_t)1);
		}
		if( timeout2_check(TSTEMPC)) {
			ts_pll_temp_cal();
			if((ts_tempc_step_state&0xf0) == 0x10) udelay = 5;
			else if((ts_tempc_step_state&0xf0) == 0x20) udelay =40;
			else if((ts_tempc_step_state&0xf0) == 0x30) udelay = 100;
			else udelay = 1;
			timeout2_start(TSTEMPC, (uint32_t)udelay);
		}
	}
	
	if(reg_ANA_PLL_RS_CLK_READY_LANE && pll_sel!=TS_ON ) {
		if(rs_pllcal_first_time) {		
			rs_pllcal_first_time = 0;
			rs_tempc_step_state	= 0; 	
			timeout2_start(RSTEMPC, (uint32_t)1);
		}
		if( timeout2_check(RSTEMPC)) {
			rs_pll_temp_cal();
			if((rs_tempc_step_state&0xf0) == 0x10) udelay = 5;
			else if((rs_tempc_step_state&0xf0) == 0x20) udelay = 40;
			else if((rs_tempc_step_state&0xf0) == 0x30) udelay = 100;
			else udelay = 1;
			timeout2_start(RSTEMPC, (uint32_t)udelay);		
		}
	}
	
}



