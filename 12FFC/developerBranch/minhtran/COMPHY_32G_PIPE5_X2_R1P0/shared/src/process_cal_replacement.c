/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file process_cal.c
* \purpose Process calibration
* \History
*	10/15/2015 Heejeong Ryu	Initial 
*   03/12/2016 Heejeong Ryu Added 10 time average process_val     
*/
#include "common.h"
// Code banking configuration, do not remove
//#ifdef USE_BANKING
//#pragma codeseg BANK4
//#pragma constseg BANK4
//#endif

/**
 * \module proc_cal
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input:  
 *    Output: PROCESSMON_SWITCH
 *            PROCESS_VALUE[3:0] 
*/

#ifdef SUPPORT_EXT_MEM

#define PROCESS_VALUE     	 	reg_ANA_PROCESS_VALUE_3_0
#define PROCESSMON_SWITCH 	 	reg_DRO_EN 
#define FBC_CNT_START 	  	 	reg_FBC_CNT_START
#define FBC_CNT_SELECT 		 	reg_PROCESSMON_FCLK_EN
#define FBC_CNT_TIMER_b0 		reg_FBC_CNT_TIMER_15_0_b0
#define FBC_CNT_TIMER_b1 		reg_FBC_CNT_TIMER_15_0_b1
#define FBC_PLLCAL_CNT_READY 	reg_FBC_PLLCAL_CNT_READY 
#define FBC_PLLCAL_CNT_RD_b0 	reg_FBC_PLLCAL_CNT_15_0_b0
#define FBC_PLLCAL_CNT_RD_b1 	reg_FBC_PLLCAL_CNT_15_0_b1
#define PCM_EN					reg_PCM_EN
//#define ISOLATION_ENB			reg_ISOLATION_ENB
//#define ISOLATION_ENB_FORCE		reg_ISOLATION_ENB_FORCE //design removed, SOC will set to pin directly.

//void proc_cal_ram(void) BANKING_CTRL {
void proc_cal_ram(void) {

	int16_t     process_val_cal, process_val_raw, subss, ss2tt, tt2ff;
	uint8_t		proc_value, proc_sum_lvt, proc_sum_ulvt;
	uint8_t		cnt, i;

    cmx_PROCESS_CAL_DONE = 0;

	if(cmx_PROCESS_CAL_EXT_EN ) {
		if(cmx_CAL_PROCESS_RESULT_SEL == 0)
				PROCESS_VALUE = cmx_CAL_PROCESS_VALUE_ULVT_7_0;
		else
				PROCESS_VALUE = cmx_CAL_PROCESS_VALUE_LVT_7_0;
		goto ext_cal; 
	}	
	
	PHY_STATUS = ST_PROCESS_CAL;

    reg_FBC_CNT_TIMER_15_0_b0 = cmx_REFCLK_FREQ_7_0 - 1;
 	reg_FBC_CNT_TIMER_15_0_b1 = 0;

    PCM_EN = 1;
 	//ISOLATION_ENB = 1; 
 	//ISOLATION_ENB_FORCE = 1;

	FBC_CNT_SELECT = 	1;
	PROCESSMON_SWITCH =	1; //clock enable
	delay01(20);	
	
	cnt = 1;
	proc_sum_lvt = 0;	//rings 1-5
	proc_sum_ulvt = 0;	//rings 6-10

	do {
		subss = (int16_t)cmx_CAL_PROC_SUBSS_7_0; 
		ss2tt = (int16_t)cmx_CAL_PROC_SS2TT_7_0; 
		tt2ff = (int16_t)cmx_CAL_PROC_TT2FF_7_0; 
		reg_DRO_SEL_3_0 = cnt;
		delay01(20);	
		FBC_CNT_START =	1;
		timeout_start((uint16_t)10);	//10uS timeout
		while (!FBC_PLLCAL_CNT_READY && !timeout);
		timeout_stop;
		FBC_CNT_START =	0;
		
		process_val_raw = ((FBC_PLLCAL_CNT_RD_b1 << 8) + FBC_PLLCAL_CNT_RD_b0);
		
		if (process_val_raw <= (subss<<4)) {
			proc_value =	0;
		}
		else {
			if(process_val_raw <= ((subss<<4) + (ss2tt<<3))) 
				{
					process_val_cal = process_val_raw - (subss<<4);
					
					i = 0;
					if(ss2tt!=0) {
						while (process_val_cal > ss2tt){
							process_val_cal =	process_val_cal - ss2tt;
							i++;
						}
					}
					if (i <= 8) proc_value = i;
					else proc_value = 8;
				}
				else {
					process_val_cal = (process_val_raw - (subss<<4) - (ss2tt<<3));
					i = 0;
					if(tt2ff!=0) {
						while (process_val_cal > tt2ff){
							process_val_cal =	process_val_cal - tt2ff;
							i++;
						}
					}
					if (i <= 7) proc_value = 8 + i;
					else proc_value = 15;
				}
		}
		
		PROCESS_VALUE = proc_value;
		
		if (cnt <=5)
			proc_sum_ulvt += proc_value;
		else
			proc_sum_lvt += proc_value;

	} while(cnt++<10);

	cmx_CAL_PROCESS_VALUE_ULVT_7_0 = (uint8_t)(proc_sum_ulvt + 2)/5;
	cmx_CAL_PROCESS_VALUE_LVT_7_0 = (uint8_t)(proc_sum_lvt + 2)/5;	//this is for VDD calibration later
	if(cmx_CAL_PROCESS_RESULT_SEL == 0)
		PROCESS_VALUE = cmx_CAL_PROCESS_VALUE_ULVT_7_0;
	else
		PROCESS_VALUE = cmx_CAL_PROCESS_VALUE_LVT_7_0;
	
	PROCESSMON_SWITCH =	0;
	FBC_CNT_SELECT = 0;
    cmx_PROCESS_CAL_PASS = timeout==0;

	PCM_EN = 0;
	//ISOLATION_ENB = 0;
	//ISOLATION_ENB_FORCE = 0;
	
ext_cal:	
	
    cmx_PROCESS_CAL_DONE = 1;
   
}

#endif //SUPPORT_EXT_MEM
