/******************************************************************
 *          Marvell Semiconductor  
 *******************************************************************
 * \file pll_dcc_cal.c
 * \purpose LCPLL DCC calibration
 * \History
 *  02/17/2015 Heejeong Ryu   Initial 
 *  03/13/2017 Xiuyuan Bi     
 */
#include "common.h"
// Code banking configuration, do not remove
//#ifdef USE_BANKING
//#pragma codeseg BANK4
//#pragma constseg BANK4
//#endif

/**
 * \module PLL DCC Calibration
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: 
 *    Output: 
 */
#ifdef SUPPORT_EXT_MEM

#define PLLDCC_DN                         reg_ANA_CMN_IMPCAL_OUT_RD
#define PLLDCC_CLK                        reg_LCPLL_DCC_CLK
#define TXRXIMP_CKCAL                     reg_TRX_IMPCAL_CLK
#define PLLDCC_EN                         reg_LCPLL_DCC_EN
#define PLLDCCCAL_EN                      reg_LCPLL_DCC_CAL_EN
#define PLLDCC_HG                         reg_LCPLL_DCC_HG 
#define PLLDCC_CNT                        reg_LCPLL_DCC_5_0
#define PLLDCC_LOOP_MAX                   64

//void plldcc_clk_toggle_ram (void) BANKING_CTRL {
void plldcc_clk_toggle_ram (void) {
	delay01(10);
	PLLDCC_CLK = 1;
	TXRXIMP_CKCAL = 1;
	delay01(10);
	PLLDCC_CLK = 0;
	TXRXIMP_CKCAL = 0;
}

//void plldcc_cal_ram(void) BANKING_CTRL {
void plldcc_cal_ram(void) {

	int8_t  dcc_cnt;
	uint8_t latched_PLLDCC_DN;
	uint8_t int_dn, int_up;
	uint8_t dir;
	uint8_t time_out_cnt;
	uint8_t in_cont_mode;
	uint8_t ext_en;

	PHY_STATUS = ST_PLLDCC_CAL;

	cmx_PLLDCC_CAL_DONE = 0;

	in_cont_mode = 0;
	time_out_cnt = 0;
	dir = 0;
	reg_ANA_CMN_IMPCAL_OUT_REQ = 1;

	//identify which kind of calibration is triggered
	if (lnx_CAL_DONE_LANE == 0) {                        //power-on calibration
		ext_en = cmx_PLLDCC_CAL_EXT_EN;
		if (ext_en)                                     //use ext value for power-on, bypass calibration
			dcc_cnt = cmx_cal_plldcc[PWR][PLL_RATE_SEL];
		else {                                          //use normal power-on calibration
			cmx_PLLDCC_CAL_PASS = 0;
			PLLDCCCAL_EN = 1;
			dcc_cnt = 0;
		}
		PLLDCC_EN = 1;                                  //enable PLLDCC_EN during power-on, never deassert
		plldcc_step_cnt = PLLDCC_CAL_STEP_SIZE;             //for power-on (inc. EXT_EN), reset fraction code to middle
	} //lnx_CAL_DONE_LANE == 0
	else if (LOAD_CAL_ON) {                         //not power-on. Speed-change, load result for current rate
		//either load power-on, or previous cont cal result for target speed
		dcc_cnt = cmx_cal_plldcc[PWR + cmx_PLLDCC_CAL_CONT_CUR_LOAD_EN][PLL_RATE_SEL];
		plldcc_step_cnt = PLLDCC_CAL_STEP_SIZE;             //when speed change, restore the fracition code to middle
	}
	else if (cmx_PLLDCC_CAL_CONT_EN) {              //not power-on. Continious mode.
		PLLDCCCAL_EN = 1;
		dcc_cnt = cmx_cal_plldcc[CONT][PLL_RATE_SEL];    //always load cont result
		in_cont_mode = 1;
	}
	else {                                          //not power-on. Continious mode, but disabled
		cmx_PLLDCC_CAL_DONE = 1;
		return;
	}

	//main-loop
	do {
		PLLDCC_CNT = dcc_cnt;
		plldcc_clk_toggle_ram();

		time_out_cnt ++;
		if( PLLDCCCAL_EN == 0 ) break;                                       //either LOAD, or EXT_EN in power-on
		if( lnx_CAL_DONE_LANE == 1 && time_out_cnt > 1) break;                    //continious mode, has ran 1 round
		if( lnx_CAL_DONE_LANE == 0 && is_toggle_pat_ram( dir, time_out_cnt - 1 ) ) { cmx_PLLDCC_CAL_PASS = 1;  break; }     //power-on, toggled
		if( lnx_CAL_DONE_LANE == 0 && time_out_cnt >= PLLDCC_LOOP_MAX && cmx_PLLDCC_CAL_TIMEOUT_DIS == 0) break;     //power-on, reached maximum rounds

		latched_PLLDCC_DN = PLLDCC_DN;
		reg_MCU_DEBUG_CMN_2_7_0 = latched_PLLDCC_DN; //for testbench
		int_up = 0;
		int_dn = 0;

		if (in_cont_mode) { //continious calibration
			if (latched_PLLDCC_DN) {plldcc_step_cnt--;}
			else                   {plldcc_step_cnt++;}

			if( plldcc_step_cnt == 0) {
				int_up = 0;
				int_dn = 1;
				plldcc_step_cnt = PLLDCC_CAL_STEP_SIZE;  //after up/dn triggered, reset fraction code to middle
			}
			else if(plldcc_step_cnt>=(PLLDCC_CAL_STEP_SIZE<<1)) {
				int_up = 1;
				int_dn = 0;
				plldcc_step_cnt = PLLDCC_CAL_STEP_SIZE;  //after up/dn triggered, reset fraction code to middle
			}
		}
		else {              //power-on calibration
			if (latched_PLLDCC_DN) {int_up = 0; int_dn = 1;}
			else                   {int_up = 1; int_dn = 0;}
		}

		dir<<=1;
		if (int_dn == 1) {
			dcc_cnt = sign_abs_dn_ram(dcc_cnt);
		}
		else if (int_up == 1) {
			dir |= 1;
			dcc_cnt = sign_abs_up_ram(dcc_cnt);
		}

	} while (1);

	//save
	if (lnx_CAL_DONE_LANE == 0) {                        //if power-on calibration
		cmx_cal_plldcc[PWR][PLL_RATE_SEL] = dcc_cnt;   //save to power-on result
	}
	cmx_cal_plldcc[CONT][PLL_RATE_SEL] = dcc_cnt;    //no matter power-on or LOAD or continious, need to save to [CONT]
	//for next continious mode to read
	PLLDCCCAL_EN = 0;
	cmx_PLLDCC_CAL_DONE = 1;

} //plldcc_cal(void)

#endif //SUPPORT_EXT_MEM
