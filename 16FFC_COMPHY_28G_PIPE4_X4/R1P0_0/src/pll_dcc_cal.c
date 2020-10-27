/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file pll_dcc_cal.c
* \purpose LCPLL DCC calibration
* \History
*	02/17/2015 Heejeong Ryu		Initial 
*/
#include "common.h"

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
#define PLLDCC_DN                         reg_ANA_CMN_IMPCAL_OUT_RD
#define PLLDCC_CLK                        reg_LCPLL_DCC_CLK
#define TXRXIMP_CKCAL                     reg_TRX_IMPCAL_CLK
#define PLLDCC_EN                         reg_LCPLL_DCC_EN
#define PLLDCCCAL_EN                      reg_LCPLL_DCC_CAL_EN
#define PLLDCC_HG                         reg_LCPLL_DCC_HG 
#define PLLDCC_CNT                        reg_LCPLL_DCC_5_0
#define PLLDCC_LOOP_MAX                   48 
#define rate							  PLL_RATE_SEL	

/**
* \module PLLDCC Calibration
*
* \param 
 *    <NONE> 
 * \return
*    <NONE> 
 * \note
*    Input:  
 *    Output: 
*/
void plldcc_cal(void) {
	int8_t  dcc_cnt_2c, stop_sel_count, inv_dcc_cnt_2c;

	PHY_STATUS = ST_PLLDCC_CAL;
	
        PLLDCC_EN   = 1;
        PLLDCCCAL_EN = 1;
		PLLDCC_HG = 0;
		cmx_PLLDCC_CAL_DONE = 0;
		cmx_PLLDCC_CAL_PASS = 0;
		
		stop_sel_count = 0;
		
		if( cmx_CAL_DONE == 1 ) {
			if (rate == 1) dcc_cnt_2c = cmx_CAL_PLLDCC_CNT_R1_7_0;
			else  dcc_cnt_2c = cmx_CAL_PLLDCC_CNT_R0_7_0;				 
		}
		else {
			dcc_cnt_2c = 0;
			PLLDCC_CNT = 0x20;
		}	

       do {

        delay (T_2p5us);
        PLLDCC_CLK = 1;
		TXRXIMP_CKCAL = 1;
        delay (T_2p5us);
        PLLDCC_CLK = 0;
		TXRXIMP_CKCAL = 0;
        stop_sel_count ++;
		
        if(stop_sel_count >= PLLDCC_LOOP_MAX) break;
		if( cmx_CAL_DONE==1 && stop_sel_count>1) break;

        if (PLLDCC_DN == 0) {
			 if (PLLDCC_CNT == 0x01) { dcc_cnt_2c = 0; PLLDCC_CNT = 0;  continue; }
			 else if (PLLDCC_CNT == 0x00) { dcc_cnt_2c = 0; PLLDCC_CNT = 0x20;  continue; }	 
			 else if (dcc_cnt_2c < 31) { dcc_cnt_2c ++; }
        }
        else {
			 if (PLLDCC_CNT == 0x20) { dcc_cnt_2c = 0; PLLDCC_CNT = 0;  continue; }
			 else if (dcc_cnt_2c > -31) { dcc_cnt_2c --; }
        }

        if (dcc_cnt_2c >= 0) {
			 PLLDCC_CNT  = dcc_cnt_2c | 0x20;
        }
        else {
			 inv_dcc_cnt_2c = - dcc_cnt_2c;
			 PLLDCC_CNT  = inv_dcc_cnt_2c;
		 }
		  		 
       } while (1); 
		
       if (rate == 1) {
	 cmx_CAL_PLLDCC_CNT_R1_7_0 = dcc_cnt_2c;
       }
       else {
	 cmx_CAL_PLLDCC_CNT_R0_7_0 = dcc_cnt_2c;
       }
       PLLDCC_EN = 1;
       PLLDCCCAL_EN = 0;

       cmx_PLLDCC_CAL_PASS = 1;
       cmx_PLLDCC_CAL_DONE = 1;

}
