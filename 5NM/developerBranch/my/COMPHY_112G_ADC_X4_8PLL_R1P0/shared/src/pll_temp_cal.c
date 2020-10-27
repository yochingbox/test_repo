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
#endif


void load_init_temp_table(bool rs_on) BANKING_CTRL
{
	int16_t tsen_dat;
	uint8_t tempc_mux_sel, tempc_mux_hold_sel;

	if(cmx_PLL_TEMP_CAL_EXT_EN) return;
	
	tempc_mux_sel = 0; tempc_mux_hold_sel = 0;
	tsen_dat = read_tsen(1);
	

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
		//reg_PLL_RS_PCIE_HIGHK_EN_LANE = 1; //clamp to 11
	}
	else {
		reg_PLL_TS_LCPLL_TEMPC_EXT_EN_LANE = 1;
		reg_PLL_TS_LCPLL_TEMPC_MUX_SEL_EXT_LANE_3_0  = tempc_mux_sel;
		reg_PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_EXT_LANE_3_0 = tempc_mux_hold_sel;
		//reg_PLL_TS_PCIE_HIGHK_EN_LANE = 1; //clamp to 11
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
