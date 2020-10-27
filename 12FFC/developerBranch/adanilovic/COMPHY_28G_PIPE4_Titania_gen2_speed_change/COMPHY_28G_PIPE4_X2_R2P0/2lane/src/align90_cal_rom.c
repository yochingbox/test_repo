/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file align90_cal_rom.c
* \purpose align90 calibration module
* \History
*	1/12/2015 Heejeong Ryu		moved alirn90_comp to ROM
*/
#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg CSEG
#endif

/**
 * \module RX align90 Calibration
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NODE>  
 * \note
*/
#define EDGE2DATA_PD				reg_ANA_RX_ALIGN90_PD_OUT_RD_LANE 
#define DAC 						reg_ALIGN90_DAC_LANE_5_0
#define DM							reg_ALIGN90_DUMMY_CLK_LANE
#define ALIGN90_SYN_CLK				reg_ALIGN90_SYN_CLK_LANE
#define ALIGN90_GM					reg_ALIGN90_GM_LANE_2_0
#define ALIGN90_CMP_OFFSET			reg_ALIGN90_CMP_OFFSET_LANE_3_0
//#define rate				        rx_pll_rate//cmx_PLL_RATE_SEL_3_0	
#define ALIGN90_REF					reg_ALIGN90_REF_LANE_5_0
#define USED_PATTERN_LOCK 			1
#define align90_step 				reg_MCU_DEBUGB_LANE_7_0

void align90_comp_cal(void) BANKING_CTRL {
	uint8_t	dir, loop_cnt, pd, output_cnt;
	
	reg_PU_ALIGN90_LANE = 1;	

	if( cmx_RXALIGN90_CAL_EXT_EN ) {
		ALIGN90_CMP_OFFSET = lnx_CAL_ALIGN90_CMP_OFFSET_LANE_7_0;
		return; 
	}	
	
	PHY_STATUS = ST_RXALIGN90CMP_CAL;
	
	lnx_ALIGN90_COMP_PASS_LANE = 0;
	lnx_ALIGN90_COMP_CAL_DONE_LANE = 0;
	dir = 0;
	reg_ALIGN90_CMP_CAL_EN_LANE = 1;
	ALIGN90_CMP_OFFSET = 0x08;
	delay01(10);		

	//timeout_start((uint16_t)1000); //1mS
	loop_cnt = 48;
	output_cnt = 0;
	do {
		//pd = EDGE2DATA_PD;
		pd = align90_read_pd();
		if(pd == 1) {
			ALIGN90_CMP_OFFSET++;
		}
		else {
			ALIGN90_CMP_OFFSET--;
		}
		delay01(10);		
		
		dir<<=1;
		dir |= pd;
		++output_cnt;

		if (is_toggle_pat(dir, output_cnt )) {
			lnx_ALIGN90_COMP_PASS_LANE = 1;
			break;
		}
		
		if(	ALIGN90_CMP_OFFSET==0xf || ALIGN90_CMP_OFFSET==0 ) {
			//lnx_ALIGN90_COMP_PASS_LANE = 0;
			break;
		}

		if(cmx_ALIGN90_CAL_TIMEOUT_DIS == 0)	//for test bench
			loop_cnt--;
	} while(loop_cnt>0);
	
	reg_ALIGN90_CMP_CAL_EN_LANE = 0;
	lnx_CAL_ALIGN90_CMP_OFFSET_LANE_7_0 = ALIGN90_CMP_OFFSET;
	lnx_ALIGN90_COMP_CAL_DONE_LANE = 1;
	
}

uint8_t align90_read_pd(void) BANKING_CTRL
{
	reg_RX_ALIGN90_PD_OUT_RD_REQ_LANE = 0;
	reg_RX_ALIGN90_PD_OUT_RD_REQ_LANE = 1; 
	reg_RX_ALIGN90_PD_OUT_RD_REQ_LANE = 0;

	return reg_ANA_RX_ALIGN90_PD_OUT_RD_LANE;
}

void align90_cal_update(void) BANKING_CTRL
{
	reg_ALIGN90_DAC_LANE_5_0 = dac;
	reg_ALIGN90_DUMMY_CLK_LANE = dm;
	reg_ALIGN90_GM_LANE_2_0 = gm_bin ^ (gm_bin>>1);
	ALIGN90_SYN_CLK	= 1;
	delay01(2);
	ALIGN90_SYN_CLK	= 0;
}

bool get_dac_inc(void) BANKING_CTRL
{
	bool hit_boundary = 0;

		do {
			if(dac==49)	{
				if(gm_bin==6) {	dac = 51; dm = 0; }
				else if(gm_bin==7) { dac = 48; }					
				else { dac = 50; dm = 0; } 
			}
			else {
				if(dac==50 || dac==51) { 
					if(gm_bin == 6) { dac = 49; gm_bin = 7; dm = 1; }
					else { dac = 0; gm_bin++; dm = 1; }}
				else { 
					if(gm_bin==7) {
					      if(dac==0) { hit_boundary=1; break; }
					      else dac--; 
					}
					else { dac++; }}				
			}
	
		} while (align90_step-->1);
		
	return hit_boundary;
}

bool get_dac_dec(void) BANKING_CTRL
{
	bool hit_boundary = 0;
	
		do {
			if(gm_bin==7) { 
				if(dac==49) { dac = 51; gm_bin = 6; dm = 0; }
				else { dac++;}
			}
			else {
				if(dac==50 || dac==51) { dac = 49; dm = 1; }
				else if(dac==0){ 
					if(gm_bin>1) {gm_bin--; dac = 51; dm = 0;}	
					else { hit_boundary=1; break; }
				} 
				else { dac--; }
			}		
		} while (align90_step--> 1);

	return hit_boundary;
}


