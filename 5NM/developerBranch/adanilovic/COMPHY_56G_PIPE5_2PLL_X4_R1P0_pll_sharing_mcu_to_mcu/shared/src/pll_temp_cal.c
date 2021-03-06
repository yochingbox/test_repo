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
#pragma codeseg BANK1
#pragma constseg BANK1
#endif


void load_init_temp_table(bool rs_on) BANKING_CTRL
{
	int16_t tsen_dat;
	uint8_t tempc_mux_sel, tempc_mux_hold_sel;

	if(cmx_PLL_TEMP_CAL_EXT_EN) return;
	
	tempc_mux_sel = 0; tempc_mux_hold_sel = 0;
	tsen_dat = read_tsen();
	#ifndef _56G_5NM
	lnx_TEMP_CDEGREE_LANE_15_0 = (uint16_t) tsen_dat;
	#endif
	
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
		tempc_mux_sel = 0xd; //0xf; //10;
		tempc_mux_hold_sel = 0xd; //0xf; //10;
	}
	else if (tsen_dat >= 80 && tsen_dat < 100)	//80 to 100 celcius
	{
		tempc_mux_sel = 0xf; //0xe; //11;
		tempc_mux_hold_sel = 0xf; //0xe; //11;
	}
	else if (tsen_dat >= 100)	//greater than 100 celcius
	{
		tempc_mux_sel = 0xe; //0xa; //0xC;
		tempc_mux_hold_sel = 0xe; //0xa; //0xC;
	}

	if(rs_on) {
		reg_PLL_RS_LCPLL_TEMPC_EXT_EN_LANE = 1;
		reg_PLL_RS_LCPLL_TEMPC_MUX_SEL_EXT_LANE_3_0  = tempc_mux_sel;
		reg_PLL_RS_LCPLL_TEMPC_MUX_HOLD_SEL_EXT_LANE_3_0 = tempc_mux_hold_sel;
        #ifndef _56G_5NM
		reg_PLL_RS_PCIE_HIGHK_EN_LANE = 1; //clamp to 11
        #else
        reg_PLL_RS_PCIE_HIGHK_EN_LANE_3_0 = 1; //clamp to 11
        #endif
	}
	else {
		reg_PLL_TS_LCPLL_TEMPC_EXT_EN_LANE = 1;
		reg_PLL_TS_LCPLL_TEMPC_MUX_SEL_EXT_LANE_3_0  = tempc_mux_sel;
		reg_PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_EXT_LANE_3_0 = tempc_mux_hold_sel;
        #ifndef _56G_5NM
		reg_PLL_TS_PCIE_HIGHK_EN_LANE = 1; //clamp to 11
        #else
        reg_PLL_TS_PCIE_HIGHK_EN_LANE_3_0 = 1; //clamp to 11
        #endif
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


__code uint8_t gray2bi_tb[] = { 0x00, 0x01, 0x03, 0x02, 0x07, 0x6, 0x04, 0x05,
		0x0f, 0x0e, 0x0c, 0x0d, 0x08, 0x09, 0x0b, 0x0a };

uint8_t	ts_temp_level_todic_rd(void) BANKING_CTRL
{
	//reg_ANA_PLL_TS_TEMPC_LEVEL_TODIG_RD_REQ_LANE = 1; //no need
	//reg_ANA_PLL_TS_TEMPC_LEVEL_TODIG_RD_REQ_LANE = 0;

	return reg_PLL_TS_LCPLL_TEMPC_LEVEL_TODIG_LANE_1_0;
}
	
void ts_pll_tempc_speed_adj(void) BANKING_CTRL {
	uint8_t i, temp_lvl_todic_rd, tempc_mux_hold_sel_2c, tempc_mux_sel_2c;
	
	reg_PLL_TS_LCPLL_TEMPC_EXT_EN_LANE = 1;
	reg_PLL_TS_LCPLL_TEMPC_DAC_VALID_EXT_LANE = 0;
	reg_PLL_TS_LCPLL_TEMPC_DAC_SEL_EXT_LANE_7_0 = 0;

	tempc_mux_hold_sel_2c = gray2bi_tb[reg_PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_LANE_3_0];

	for(i=0; i<3; i++) {
		temp_lvl_todic_rd = ts_temp_level_todic_rd();
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

		reg_PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_EXT_LANE_3_0 = tempc_mux_hold_sel_2c ^ (tempc_mux_hold_sel_2c>>1);
		if(tempc_mux_hold_sel_2c >= 1)
			tempc_mux_sel_2c = tempc_mux_hold_sel_2c - 1;
		else if(tempc_mux_hold_sel_2c == 0)
			tempc_mux_sel_2c = 0;
		reg_PLL_TS_LCPLL_TEMPC_MUX_SEL_EXT_LANE_3_0 = tempc_mux_sel_2c ^ (tempc_mux_sel_2c>>1);

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
	uint8_t i, temp_lvl_todic_rd, tempc_mux_hold_sel_2c, tempc_mux_sel_2c;
	
	reg_PLL_RS_LCPLL_TEMPC_EXT_EN_LANE = 1;
	reg_PLL_RS_LCPLL_TEMPC_DAC_VALID_EXT_LANE = 0;
	reg_PLL_RS_LCPLL_TEMPC_DAC_SEL_EXT_LANE_7_0 = 0;

	tempc_mux_hold_sel_2c = gray2bi_tb[reg_PLL_RS_LCPLL_TEMPC_MUX_HOLD_SEL_LANE_3_0];

	for(i=0; i<3; i++) {
		temp_lvl_todic_rd = rs_temp_level_todic_rd();
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

		reg_PLL_RS_LCPLL_TEMPC_MUX_HOLD_SEL_EXT_LANE_3_0 = tempc_mux_hold_sel_2c ^ (tempc_mux_hold_sel_2c>>1);
		if(tempc_mux_hold_sel_2c >= 1)
			tempc_mux_sel_2c = tempc_mux_hold_sel_2c - 1;
		else if(tempc_mux_hold_sel_2c == 0)
			tempc_mux_sel_2c = 0;
		reg_PLL_RS_LCPLL_TEMPC_MUX_SEL_EXT_LANE_3_0 = tempc_mux_sel_2c ^ (tempc_mux_sel_2c>>1);

		delay(cmx_THOLD_SEL2_7_0);  //2uS
	}		
    	

}
