/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file process_cal.c
* \purpose Process calibration
* \History
*	7/29/2019 Heejeong Ryu	Initial, Unified calibration  
*/
#include "common.h"
#ifdef USE_BANKING
#pragma codeseg BANK1
#endif

/**
 * \module proc_cal
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input:  
 *    Output: 
 *             
*/

#define DRO_EN			reg_DRO_EN
#define DRO_SEL			reg_DRO_SEL_3_0
#define VREF_PROCESSMON_SEL	reg_VREF_PROCESSMON_SEL_2_0
#define DRO_CNT_START       reg_PROCESSMON_CNT_START
#define DRO_CNT_DONE        reg_PROCESSMON_CNT_READY
#define DRO_FREQ_CTNT		reg_PROCESSMON_CNT_15_0
#define PROCESS_VALUE		reg_ANA_PROCESS_VALUE_3_0 

void proc_cal(void) BANKING_CTRL {

	int16_t process_val_cal, process_val_raw, proc_sum_lvt, proc_sum_ulvt, subss, ss2tt, tt2ff;
	uint8_t proc_value, i, cnt;

	PHY_STATUS_CMN = ST_PROCESS_CAL;
	
	if(cmx_PROCESS_CAL_EXT_EN ) {
		if(cmx_CAL_PROCESS_RESULT_SEL == 0)
				PROCESS_VALUE = cmx_CAL_PROCESS_VALUE_ULVT_7_0;
		else
				PROCESS_VALUE = cmx_CAL_PROCESS_VALUE_LVT_7_0;
		cmx_PROCESS_CAL_DONE = 1;
		return;
	}	
	
#ifdef _5FF_COMPHY_112G_ADC_X4_8PLL_R1P1
	reg_PROCESSMON_CNT_TIMER_15_0 = reg_PIN_MCU_FREQ_RD_15_0 -1;//should use MCU_CLK for timer source
#endif
#ifdef _5FF_COMPHY_112G_ADC_X4_8PLL_R1P0
	reg_PROCESSMON_CNT_TIMER_15_0 = cmx_MCU_FREQ_15_0 -1;//should use MCU_CLK for timer source
#endif
	DRO_EN = 1;
	reg_ANA_RSVDA_7_0 = (reg_ANA_RSVDA_7_0 & 0x1f)|0x80;
	//VREF_PROCESSMON_SEL = 0x4;
	
	DRO_SEL = 0;	
	cnt = 1;
	proc_sum_lvt = 0;	//rings 1-5
	proc_sum_ulvt = 0;	//rings 6-10
	//subss = (int16_t)cmx_CAL_PROC_SUBSS_7_0; //need each ring
	//ss2tt = (int16_t)cmx_CAL_PROC_SS2TT_7_0; 
	//tt2ff = (int16_t)cmx_CAL_PROC_TT2FF_7_0; 
	
	do {
		DRO_SEL = cnt;;	
		
		reg_RST_PROCESSMON_FCLK = 1;
		reg_RST_PROCESSMON_FCLK = 0;
		
		DRO_CNT_START = 0;
		delay(T_2us);
		DRO_CNT_START = 1;
		delay(T_2us);
		timeout_start((uint16_t)10);	//10uS timeout
		while((reg_MCU_DEBUGA_LANE_7_0=0x74)&&!DRO_CNT_DONE && !timeout);
		
		process_val_raw = DRO_FREQ_CTNT;

		tt2ff = (int16_t)proc_thr_tb[cnt-1][0]; 
		ss2tt = (int16_t)proc_thr_tb[cnt-1][1]; 
		subss = (int16_t)proc_thr_tb[cnt-1][2]; 
		reg_MCU_DEBUG_CMN_0_7_0 = cnt;
		reg_MCU_DEBUG_CMN_1_7_0 = tt2ff;
		reg_MCU_DEBUG_CMN_2_7_0 = ss2tt;
		reg_MCU_DEBUG_CMN_3_7_0 = subss;
		
	
		if (process_val_raw <= (subss<<4)) {
			proc_value =	0;
		}
		else {
			if(process_val_raw <= ((subss<<4) + (ss2tt<<3))) 
				{
					process_val_cal = process_val_raw - (subss<<4);
					
					i = 0;
					if(ss2tt!=0) {
						while((reg_MCU_DEBUGA_LANE_7_0=0x75)&&process_val_cal > ss2tt){
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
						while((reg_MCU_DEBUGA_LANE_7_0=0x76)&&process_val_cal > tt2ff){
							process_val_cal =	process_val_cal - tt2ff;
							i++;
						}
					}
					if (i <= 7) proc_value = 8 + i;
					else proc_value = 15;
				}
		}
		
		PROCESS_VALUE = proc_value;

		if (cnt <=5) { 
			proc_sum_ulvt += proc_value;
		}	
		else {
			proc_sum_lvt += proc_value;
		}	

	} while((reg_MCU_DEBUGA_LANE_7_0=0x77)&&cnt++<10);

	cmx_CAL_PROCESS_VALUE_ULVT_7_0 = (uint8_t)(proc_sum_ulvt + 2)/5;
	cmx_CAL_PROCESS_VALUE_LVT_7_0 = (uint8_t)(proc_sum_lvt + 2)/5;	//this is for VDD calibration later
	if(cmx_CAL_PROCESS_RESULT_SEL == 0)
		PROCESS_VALUE = cmx_CAL_PROCESS_VALUE_ULVT_7_0;
	else
		PROCESS_VALUE = cmx_CAL_PROCESS_VALUE_LVT_7_0;

	DRO_EN = 0;
	DRO_CNT_START = 0;
		
	if(timeout) cmx_PROCESS_CAL_PASS = 0;
	else cmx_PROCESS_CAL_PASS = 1;
	
	cmx_PROCESS_CAL_DONE = 1;
	
}
	
