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
#ifdef USE_BANKING
#pragma codeseg BANK3
#pragma constseg BANK3
#endif
void delay_ram_notInUse(int16_t t) BANKING_CTRL ;
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

#define PROCESS_VALUE     	 	reg_ANA_PROCESS_VALUE_3_0

#define PROCESSMON_SWITCH 	 	reg_DRO_EN 
#define PRC_CNT_START 	  	 	reg_PROCESSMON_CNT_START
//#define FBC_CNT_SELECT 		 	reg_PROCESSMON_FCLK_EN

#define PRC_CNT_TIMER_b0 		reg_PROCESSMON_CNT_TIMER_15_0_b0
#define PRC_CNT_TIMER_b1 		reg_PROCESSMON_CNT_TIMER_15_0_b1

#define PRC_CNT_READY 	reg_PROCESSMON_CNT_READY
#define PRC_CNT_RD_b0 	reg_PROCESSMON_CNT_15_0_b0
#define PRC_CNT_RD_b1 	reg_PROCESSMON_CNT_15_0_b1

#define PCM_EN					reg_PCM_EN
//#define ISOLATION_ENB			reg_ISOLATION_ENB
//#define ISOLATION_ENB_FORCE		reg_ISOLATION_ENB_FORCE //design removed, SOC will set to pin directly.

__code uint8_t refclk_tb_01_notInUse[] = { 25, 30, 40, 50, 62, 100, 125, 156 };

void proc_cal_notInUse(void) BANKING_CTRL {

#if 1 //ndef NO_REDUCE_CODE
	int16_t     process_val_cal, process_val_raw, subss, ss2tt, tt2ff;
	uint8_t		proc_value, proc_sum_lvt, proc_sum_ulvt;
	uint8_t		cnt, i;

	i = reg_PIN_REF_FREF_SEL_RD_4_0;
	cnt = refclk_tb_01_notInUse[i];
	//lnx_PROCESS_CAL_DONE_LANE = 0;
	cmx_PROCESS_CAL_DONE = 0;

	if(cmx_PROCESS_CAL_EXT_EN ) {
		if(cmx_CAL_PROCESS_RESULT_SEL == 0)
				PROCESS_VALUE = cmx_CAL_PROCESS_VALUE_ULVT_7_0;
		else
				PROCESS_VALUE = cmx_CAL_PROCESS_VALUE_LVT_7_0;
		goto ext_cal; 
	}	
	
	//PHY_STATUS = ST_PROCESS_CAL;

	reg_RST_PROCESSMON_FCLK = 1;
	delay_ram_notInUse(T_2us);
	reg_RST_PROCESSMON_FCLK = 0;

	//while((wtag=0xF2)&&!reg_ANA_PROCESSMON_FCLK_RDY_RD);*/

	reg_PROCESSMON_CNT_TIMER_15_0 = cnt-1;

    PCM_EN = 1;
 	//ISOLATION_ENB = 1; 
 	//ISOLATION_ENB_FORCE = 1;

	//FBC_CNT_SELECT = 	1;
	PROCESSMON_SWITCH =	1; //clock enable
	delay_ram_notInUse(T_2us);

	/*reg_RST_PROCESSMON_FCLK = 1;
	delay_ram_notInUse(T_2us);
	reg_RST_PROCESSMON_FCLK = 0;*/

	//while((wtag=0xF3)&&!reg_ANA_PROCESSMON_FCLK_RDY_RD);
	
	cnt = 1;
	proc_sum_lvt = 0;	//rings 1-5
	proc_sum_ulvt = 0;	//rings 6-10
	subss = (int16_t)cmx_CAL_PROC_SUBSS_7_0;
	ss2tt = (int16_t)cmx_CAL_PROC_SS2TT_7_0;
	tt2ff = (int16_t)cmx_CAL_PROC_TT2FF_7_0;
	i = 0;
	/*PRC_CNT_START =	1;
	delay_ram_notInUse(T_2us);
	PRC_CNT_START =	0;
	reg_DRO_SEL_3_0 = cnt;*/

	do {
		/*subss = (int16_t)cmx_CAL_PROC_SUBSS_7_0;
		ss2tt = (int16_t)cmx_CAL_PROC_SS2TT_7_0; 
		tt2ff = (int16_t)cmx_CAL_PROC_TT2FF_7_0;*/
		reg_DRO_SEL_3_0 = cnt;
		//cnt++;
		delay_ram_notInUse(T_2us);
#if 0
		PRC_CNT_START =	1;
		//timeout_start((uint16_t)100);	//10uS timeout
		while((wtag=0xF4)&&!PRC_CNT_READY && !timeout);
		//timeout_stop;
#else
		do {
			PRC_CNT_START =	0;
			delay_ram_notInUse(T_2us);
			PRC_CNT_START =	1;
			delay_ram_notInUse(T_2us);}
				//timeout_start((uint16_t)100);	//10uS timeout
		while((wtag=0xF5)&&!PRC_CNT_READY);// && !timeout);
				//timeout_stop;
#endif
		PRC_CNT_START =	0;
		
		//process_val_raw = ((PRC_CNT_RD_b1 << 8) + PRC_CNT_RD_b0);
		process_val_raw = reg_PROCESSMON_CNT_15_0;
		
		if (process_val_raw <= (subss<<4)) {
			proc_value =	0;
		}
		else {
			if(process_val_raw <= ((subss<<4) + (ss2tt<<3))) 
				{
					process_val_cal = process_val_raw - (subss<<4);
					
					i = 0;
					if(ss2tt!=0) {
						while((wtag=0xF6)&&process_val_cal > ss2tt){
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
						while((wtag=0xF7)&&process_val_cal > tt2ff){
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

	} while((wtag=0xF8)&&cnt++<10);

	cmx_CAL_PROCESS_VALUE_ULVT_7_0 = (uint8_t)(proc_sum_ulvt + 2)/5;
	cmx_CAL_PROCESS_VALUE_LVT_7_0 = (uint8_t)(proc_sum_lvt + 2)/5;	//this is for VDD calibration later
	if(cmx_CAL_PROCESS_RESULT_SEL == 0)
		PROCESS_VALUE = cmx_CAL_PROCESS_VALUE_ULVT_7_0;
	else
		PROCESS_VALUE = cmx_CAL_PROCESS_VALUE_LVT_7_0;
	
	PROCESSMON_SWITCH =	0;
	//FBC_CNT_SELECT = 0;
	//lnx_PROCESS_CAL_PASS_LANE = timeout==0;
	cmx_PROCESS_CAL_PASS = timeout==0;

	PCM_EN = 0;
	//ISOLATION_ENB = 0;
	//ISOLATION_ENB_FORCE = 0;
#endif
ext_cal:	
	
	//lnx_PROCESS_CAL_DONE_LANE = 1;
	cmx_PROCESS_CAL_DONE = 1;
}
