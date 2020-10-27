/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file dll_cal.c
* \purpose DLL calibration
* \History
*	10/15/2015 Heejeong Ryu		Initial 
*   11/19/2015 Heejeong Ryu     No need analog update clock by Zhendong
*    1/31/2017 Heejeong Ryu     VREF_RXDLL tbl updated by design to cover more wide range
*/
#include "common.h"
// Code banking configuration, do not remove
#if 0 //def USE_BANKING
#pragma codeseg BANK1
#pragma constseg BANK1
#endif
//#define FORMULA_ENABLED

/**
 * \module DLL_CAL Top
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input:  
 *    Output: 
*/

#define RXDCC_EN_DLLCLK					reg_RXDCC_EN_DLLCLK_LANE
#define EOM_CLK_EN						reg_EOM_CLK_EN_LANE
#define DLL_VDDA_INI_EN					reg_DLL_VDDA_INI_EN_LANE
#define DLL_GM_CAL_BYPASS_EN			reg_DLL_GM_CAL_BYPASS_EN_LANE
#define EOM_DLL_GM_CAL_BYPASS_EN		reg_EOM_DLL_GM_CAL_BYPASS_EN_LANE
#define DLL_GM_CAL_SINGLE_EN			reg_DLL_GM_CAL_SINGLE_EN_LANE
#define EOM_DLL_GM_CAL_SINGLE_EN		reg_EOM_DLL_GM_CAL_SINGLE_EN_LANE
#define DLL_GM_CAL_DIR_INV				reg_DLL_GM_CAL_DIR_INV_LANE
#define EOM_DLL_GM_CAL_DIR_INV			reg_EOM_DLL_GM_CAL_DIR_INV_LANE
#define DLL_VDDA_CAL_BYPASS_EN			reg_DLL_VDDA_CAL_BYPASS_EN_LANE
#define EOM_DLL_VDDA_CAL_BYPASS_EN		reg_EOM_DLL_VDDA_CAL_BYPASS_EN_LANE
#define DLL_VDDA_CAL_SINGLE_EN			reg_DLL_VDDA_CAL_SINGLE_EN_LANE
#define EOM_DLL_VDDA_CAL_SINGLE_EN		reg_EOM_DLL_VDDA_CAL_SINGLE_EN_LANE
#define DLL_VDDA_CAL_CONT_EN			reg_DLL_VDDA_CAL_CONT_EN_LANE
#define EOM_DLL_VDDA_CAL_CONT_EN		reg_EOM_DLL_VDDA_CAL_CONT_EN_LANE
#define DLL_VDDA_CAL_DIR_INV			reg_DLL_VDDA_CAL_DIR_INV_LANE
#define EOM_DLL_VDDA_CAL_DIR_INV		reg_EOM_DLL_VDDA_CAL_DIR_INV_LANE
#define DLL_DCC_CAL_BYPASS_EN			reg_DLL_DCC_CAL_BYPASS_EN_LANE
#define DLL_DCC_CAL_SINGLE_EN			reg_DLL_DCC_CAL_SINGLE_EN_LANE
#define DLL_DCC_CAL_CONT_EN				reg_DLL_DCC_CAL_CONT_EN_LANE
#define DLL_DCC_CAL_DIR_INV				reg_DLL_DCC_CAL_DIR_INV_LANE
#define RXDCC_EN_EOMCLK					reg_RXDCC_EN_EOMCLK_LANE
#define VREF_RXDLL_SEL	    reg_VREF_VDDADLL_HALF_SEL_3_0

void set_vref_vdda_half_ram(void)
{
	int16_t tsen_dat;
	int32_t temp_cel, vref_from_temp;

	tsen_dat = read_tsen_ram();
	temp_cel = (((int32_t)tsen_dat*394) + 128900 + 500)/1000;
	vref_from_temp = (int32_t)rxdll_temp_b_lane*250 + ((int32_t)rxdll_temp_a_lane * temp_cel);
	vref_from_temp = (vref_from_temp - 36000 + 500)/1000;
	VREF_RXDLL_SEL = (uint8_t)vref_from_temp;
}

void dll_init_ram(void)
{

	set_vref_vdda_half_ram();
    reg_DLL_GM_CAL_RESULT_EXT_LANE_2_0 = 0x7;
    reg_EOM_DLL_GM_CAL_RESULT_EXT_LANE_2_0 = 0x7;
	RXDCC_EN_DLLCLK = 1;
	EOM_CLK_EN = 1;
	DLL_VDDA_INI_EN = 1;

	reg_VDDA_RXDLL_HALF_EN_LANE = 1;

	DLL_GM_CAL_BYPASS_EN=1;

	//DLL_GM_CAL_SINGLE_EN=1;
	DLL_GM_CAL_DIR_INV=0;
	EOM_DLL_GM_CAL_BYPASS_EN=1;
	//EOM_DLL_GM_CAL_SINGLE_EN=1;
	EOM_DLL_GM_CAL_DIR_INV=0;
	DLL_VDDA_CAL_BYPASS_EN=0;
	//DLL_VDDA_CAL_SINGLE_EN=1;

	//DLL_VDDA_CAL_CONT_EN=0;
	DLL_VDDA_CAL_DIR_INV=1;
	EOM_DLL_VDDA_CAL_BYPASS_EN=0;
	//EOM_DLL_VDDA_CAL_SINGLE_EN=1;


	//EOM_DLL_VDDA_CAL_CONT_EN=0;
	EOM_DLL_VDDA_CAL_DIR_INV=1;
	DLL_DCC_CAL_BYPASS_EN=0;
	//DLL_DCC_CAL_SINGLE_EN=1;
	//DLL_DCC_CAL_CONT_EN=0;
	DLL_DCC_CAL_DIR_INV=0;
	//RXDCC_EN_EOMCLK=1;

}

void dll_init_2nd_rnd(void)
{

	set_vref_vdda_half_ram();
	//RXDCC_EN_DLLCLK = 1;
	//EOM_CLK_EN = 1;
	DLL_VDDA_INI_EN = 0;

	DLL_GM_CAL_BYPASS_EN=0;

	//DLL_GM_CAL_SINGLE_EN=1;
	//DLL_GM_CAL_DIR_INV=0;
	EOM_DLL_GM_CAL_BYPASS_EN=0;
	//EOM_DLL_GM_CAL_SINGLE_EN=1;
	//EOM_DLL_GM_CAL_DIR_INV=0;
	//DLL_VDDA_CAL_BYPASS_EN=0;
	//DLL_VDDA_CAL_SINGLE_EN=1;

	//DLL_VDDA_CAL_CONT_EN=0;
	DLL_VDDA_CAL_DIR_INV=0;
	//EOM_DLL_VDDA_CAL_BYPASS_EN=0;
	//EOM_DLL_VDDA_CAL_SINGLE_EN=1;

	//reg_VDDA_RXDLL_HALF_EN_LANE = 1;

	//EOM_DLL_VDDA_CAL_CONT_EN=0;
	EOM_DLL_VDDA_CAL_DIR_INV=0;
	//DLL_DCC_CAL_BYPASS_EN=0;
	//DLL_DCC_CAL_SINGLE_EN=1;
	//DLL_DCC_CAL_CONT_EN=0;
	//DLL_DCC_CAL_DIR_INV=0;
	//RXDCC_EN_EOMCLK=1;

}

#if 1
void dll_init_cont_ram(void)
{

	set_vref_vdda_half_ram();
	RXDCC_EN_DLLCLK = 1;
	DLL_VDDA_INI_EN = 0;

	DLL_GM_CAL_BYPASS_EN=0;

	DLL_GM_CAL_DIR_INV=0;

	EOM_DLL_GM_CAL_BYPASS_EN=0;
	//EOM_DLL_GM_CAL_SINGLE_EN=1;
	EOM_DLL_GM_CAL_DIR_INV=0;
	DLL_VDDA_CAL_BYPASS_EN=0;
	//DLL_VDDA_CAL_SINGLE_EN=1;

	DLL_VDDA_CAL_CONT_EN=1;
	DLL_VDDA_CAL_DIR_INV=0;
	EOM_DLL_VDDA_CAL_BYPASS_EN=0;
	//EOM_DLL_VDDA_CAL_SINGLE_EN=1;

	//reg_VDDA_RXDLL_HALF_EN_LANE = 1;

	EOM_DLL_VDDA_CAL_CONT_EN=1; //bypass has higher priority
	EOM_DLL_VDDA_CAL_DIR_INV=0;
	DLL_DCC_CAL_BYPASS_EN=0;
	//DLL_DCC_CAL_SINGLE_EN=1;
	DLL_DCC_CAL_CONT_EN=1;
	DLL_DCC_CAL_DIR_INV=0;
	RXDCC_EN_EOMCLK=1;
	EOM_CLK_EN = 1;

}
#endif

#if 0
void dll_cal_ram(void) {}
#else
void dll_cal_ram(void)
{

	PHY_STATUS = ST_DLL_CAL;

	lnx_DLL_CAL_DONE_LANE = 0;
	lnx_DLL_CAL_PASS_LANE = 0;
	dll_init_ram();
	reg_DLL_TOP_START_LANE = 0;
	reg_DLL_TOP_START_LANE = 1;
	delay_ram(T_p5us);
	while(!reg_DLL_TOP_DONE_LANE);
	if(reg_DLL_GM_CAL_TIMEOUT_RD_LANE || reg_EOM_DLL_GM_CAL_TIMEOUT_RD_LANE || reg_DLL_VDDA_CAL_TIMEOUT_RD_LANE || reg_EOM_DLL_VDDA_CAL_TIMEOUT_RD_LANE || reg_DLL_DCC_CAL_TIMEOUT_RD_LANE)
		lnx_DLL_CAL_PASS_LANE = 0;
	else
		lnx_DLL_CAL_PASS_LANE = 1;
	reg_DLL_TOP_START_LANE = 0;

	reg_VDDA_RXDLL_HALF_EN_LANE = 0;

	lnx_cal_dll_gm_result_lane = reg_DLL_GM_CAL_RESULT_RD_LANE_2_0;
	lnx_cal_eom_dll_gm_result_lane = reg_EOM_DLL_GM_CAL_RESULT_RD_LANE_2_0;
	lnx_cal_dll_vdda_result_lane = reg_DLL_VDDA_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_eom_dll_vdda_result_lane = reg_EOM_DLL_VDDA_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_dll_dcc_result_lane = reg_DLL_DCC_CAL_RESULT_RD_LANE_6_0;

	reg_EOM_DLL_VDDA_CAL_RESULT_EXT_LANE_5_0 = lnx_cal_eom_dll_vdda_result_lane;
	reg_DLL_VDDA_CAL_RESULT_EXT_LANE_5_0 = lnx_cal_dll_vdda_result_lane;

	dll_init_2nd_rnd();
	reg_DLL_TOP_START_LANE = 1;
	delay_ram(T_p5us);

		while(!reg_DLL_TOP_DONE_LANE);
		if(reg_DLL_GM_CAL_TIMEOUT_RD_LANE || reg_EOM_DLL_GM_CAL_TIMEOUT_RD_LANE || reg_DLL_VDDA_CAL_TIMEOUT_RD_LANE || reg_EOM_DLL_VDDA_CAL_TIMEOUT_RD_LANE || reg_DLL_DCC_CAL_TIMEOUT_RD_LANE)
			lnx_DLL_CAL_PASS_LANE = 0;
		else
			lnx_DLL_CAL_PASS_LANE = 1;
		reg_DLL_TOP_START_LANE = 0;

	lnx_DLL_CAL_DONE_LANE = 1;
}
#endif
