/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file plldcc_cal_0.c
* \purpose PLLDDC calibration 
* \History
*	9/23/2017 Heejeong Ryu		initial, added patch for PROM code not working 
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
#define PLLDCC_LOOP_MAX                   64
#define IMPCAL_OUT_REQ					  reg_ANA_CMN_IMPCAL_OUT_REQ

#ifdef SUPPORT_PLLDCC_CAL_PRAM

void plldcc_cal_0(void) {
	int8_t  dcc_cnt_2c, stop_sel_count, inv_dcc_cnt_2c;

	PHY_STATUS = ST_PLLDCC_CAL;
	
        PLLDCC_EN   = 1;
		if(LOAD_CAL_ON==0) { 
			PLLDCCCAL_EN = 1; 
			PLLDCC_HG = 0; 
			cmx_PLLDCC_CAL_PASS = 0;			
		}
		cmx_PLLDCC_CAL_DONE = 0;
		
		stop_sel_count = 0;
		
		if( cmx_CAL_DONE == 1 ) {
			dcc_cnt_2c = cmx_cal_plldcc[CONT][PLL_RATE_SEL];
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
		
		IMPCAL_OUT_REQ = 1;
		delay(Tus);
		IMPCAL_OUT_REQ = 0;
		
		#if _DBG_PLLDDC_CAL
		DBG_Printf("#%d: cnt_2c: %d PLLDDC_CNT:%02x -- DN:%d \r\n", stop_sel_count, dcc_cnt_2c, PLLDCC_CNT, reg_ANA_CMN_IMPCAL_OUT_RD );
		#endif

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
		
	   if (cmx_CAL_DONE == 0) {                        
		 cmx_cal_plldcc[PWR][PLL_RATE_SEL] = dcc_cnt_2c;   
	   }
	   cmx_cal_plldcc[CONT][PLL_RATE_SEL] = dcc_cnt_2c;   
	   
       PLLDCCCAL_EN = 0;

       cmx_PLLDCC_CAL_PASS = 1;
       cmx_PLLDCC_CAL_DONE = 1;

}

#endif
