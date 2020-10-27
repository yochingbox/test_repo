/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file align90_cal.c
* \purpose align90 calibration module
* \History
*	10/15/2015 Heejeong Ryu		Initial 
*/
#include "common.h"
// Code banking configuration, do not remove
#if 0 //def USE_BANKING
#pragma codeseg BANK1
#pragma constseg BANK1
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
#if 0
#define EDGE2DATA_PD				reg_ANA_RX_ALIGN90_PD_OUT_RD_LANE 
#define DAC 						reg_ALIGN90_DAC_LANE_5_0
#define DM							reg_ALIGN90_DUMMY_CLK_LANE
#define ALIGN90_SYN_CLK				reg_ALIGN90_SYN_CLK_LANE
#define ALIGN90_GM					reg_ALIGN90_GM_LANE_2_0
#define ALIGN90_CMP_OFFSET			reg_ALIGN90_CMP_OFFSET_LANE_3_0
#define rate				        rx_pll_rate//cmx_PLL_RATE_SEL_3_0	
#define ALIGN90_REF					reg_ALIGN90_REF_LANE_5_0

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
	delay(Tus);		

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
		delay(Tus);		
		
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

__code uint16_t pattern_tb[] = {
0x05, //0101
0xa,  //1010
0x33, //00110011 
0xcc, //11001100
0x1c7,//0001_11000111 
0xe38,//1110_00111000
0xf0f, //00001111_00001111  
0xf0f0,//11110000_11110000 
/*0x7c1f, //0000_01111100_00011111  ////HR: not support!
0xf83e0,//1111_10000011_11100000
0x3f03f,// 00000011_11110000_00111111 
0xfc0fc0,//11111100_00001111_11000000
0x1fc07f,//0000_0001 1111_1100 0000_0111 1111 
0xfe03f80,//1111_1110 0000_0011 1111_1000 0000
0x00ff00ff,//0000 0000_1111 1111_0000 0000_1111 1111 
0xff00ff00,//1111 1111_0000_0000_1111 1111_0000 0000
*/
};

__code uint16_t pattern_tb_mask[] = {
0x0f, 0x0f,
0xff, 0xff,
0x0fff, 0x0fff, 
0xffff, 0xffff, 
/*0x0fffff, 0x0fffff, //HR: not support
0xffffff, 0xffffff,
0x0fffffff, 0x0fffffff,
0xffffffff, 0xffffffff
*/
};

inline static bool found_pattern(uint16_t val) {
	uint8_t i;
	for(i=0; i<8; i++) {
		if(pattern_tb[i] == (val&pattern_tb_mask[i])) return 1;
	}
	return 0;
}

__code uint8_t gray2bi[] = {0, 1, 3, 2, 7, 6, 4, 5};

bool find_align90_lock(void) BANKING_CTRL {
	uint8_t	pd;
	uint16_t loop_cnt;
	uint8_t dir;
	uint8_t output_cnt;
	bool locked = 0;
    
	dir = 0; loop_cnt = 1400;
	output_cnt = 0; 
   	//pd = EDGE2DATA_PD;
	pd = align90_read_pd();
	reg_MCU_DEBUG2_LANE_7_0 = pd; //for testbench

	do {

		gm_bin = gray2bi[reg_ALIGN90_GM_LANE_2_0];	
	 	dac = DAC;
		dm = DM;
		
		if(pd == 1) { //inc DAC
			/*if(DAC==49)	{
				if(gm_bin==6) {	DAC = 51; DM = 0; }
				else if(gm_bin==7) { DAC = 48; }
				else { DAC = 50; DM = 0; } 
			}
			else {
				if(DAC==50 || DAC==51) { 
					if(gm_bin == 6) { DAC = 49; gm_bin = 7; DM = 1; }
					else { DAC = 0; gm_bin++; DM = 1; }}
				else { 
					if(gm_bin==7) { if(DAC==0) break;
								else DAC--; }
					else { DAC++; }}				
			}*/
			if (align90_dac_inc())
			{
				align90_cal_update();
				break;
			}
		}
		else { // dec DAC
			/*if(gm_bin==7) {
				if(DAC==49) { DAC = 51; gm_bin = 6; DM = 0; }
				else { DAC++;}
			}
			else {
				if(DAC==50 || DAC==51) { DAC = 49; DM = 1; }
				else if(DAC==0) {
				    if(gm_bin>1) {gm_bin--; DAC = 51; DM = 0;}	
					else break;
				} 
				else { DAC--; }
			}*/
			if (align90_dac_dec())
			{
				align90_cal_update();
				break;
			}
		}
		
		/*DAC = dac;
		DM = dm;
		ALIGN90_GM = gm_bin ^ (gm_bin>>1);
		ALIGN90_SYN_CLK	= 1;		
		delay(T_p25us);
		ALIGN90_SYN_CLK	= 0;*/
		align90_cal_update();
		
		delay(Tus);
		//pd = EDGE2DATA_PD;
		pd = align90_read_pd();
		reg_MCU_DEBUG2_LANE_7_0 = pd; //for testbench

		dir<<=1;
		dir |= pd;
		if (output_cnt < 0xff)
		{
			++output_cnt;
		}
		//if( found_pattern(dir)) {
		if (is_toggle_pat(dir, output_cnt )) { 
			locked = 1;
			break;
		}
		if(cmx_ALIGN90_CAL_TIMEOUT_DIS == 0)
			loop_cnt--;
	} while(loop_cnt > 0);

	return locked;
}



void rxalign90_cal(void) BANKING_CTRL {
	uint8_t	load_on, div2;
	//uint16_t dir;

	PHY_STATUS = ST_RXALIGN90_CAL;

	div2 = (reg_RX_SPEED_DIV_LANE_2_0&0x04)==0;		

	
	lnx_ALIGN90_TRACKING_PASS_LANE = 0;
	lnx_RXALIGN90_CAL_DONE_LANE = 0;
	lnx_RXALIGN90_CAL_PASS_LANE = 0;
	
	//reg_PU_ALIGN90_LANE = 1;
	//delay(Tus);
	
	load_on = 0;
	//if( cmx_RXALIGN90_CAL_EXT_EN || cmx_CAL_DONE==0 ){
	if( cmx_RXALIGN90_CAL_EXT_EN)// || cmx_CAL_DONE==1 ){
	{
		load_on = 1;

		reg_ALIGN90_DAC_LANE_5_0 = lnx_cal_align90_dac[PWR][rate][div2];
		reg_ALIGN90_GM_LANE_2_0 = lnx_cal_align90_gm[PWR][rate][div2];
		reg_ALIGN90_DUMMY_CLK_LANE = lnx_cal_align90_dummy_clk[PWR][rate][div2];		

		if(	LOAD_CAL_ON ) {
			reg_ALIGN90_SYN_CLK_LANE	= 1; reg_ALIGN90_SYN_CLK_LANE	= 0;
			gm_bin = cal_align90_gm_bin[rate];
			dac = reg_ALIGN90_DAC_LANE_5_0;
			gm = reg_ALIGN90_GM_LANE_2_0;
			dm = reg_ALIGN90_DUMMY_CLK_LANE;
			phase_faststartup();
		}	
	}
	else {
	    //register default is correct
		//DAC = 49;       
		//reg_ALIGN90_GM_LANE_2_0 = 5; 
		//DM = 1;    	
		//dac = 49;  gm_bin = 5; dm  = 1;
	}

	if( load_on==0 ){
		
		lnx_ALIGN90_TRACKING_PASS_LANE = find_align90_lock(); 
		lnx_RXALIGN90_CAL_PASS_LANE = lnx_ALIGN90_TRACKING_PASS_LANE;

		cal_align90_gm_bin[1] = gray2bi[reg_ALIGN90_GM_LANE_2_0];
		lnx_cal_align90_dac[PWR][rate][div2] = reg_ALIGN90_DAC_LANE_5_0;
		lnx_cal_align90_gm[PWR][rate][div2] = reg_ALIGN90_GM_LANE_2_0;
		lnx_cal_align90_dummy_clk[PWR][rate][div2] = reg_ALIGN90_DUMMY_CLK_LANE;
	}
	
	lnx_RXALIGN90_CAL_DONE_LANE = 1;
	align90_step_cnt = cmx_ALIGN90_CAL_STEP_SIZE_7_0; // TO DO: temporarily placed here.

}

void align90_cal_update(void) BANKING_CTRL
{
	DAC = dac;
	DM = dm;
	ALIGN90_GM = gm_bin ^ (gm_bin>>1);
	ALIGN90_SYN_CLK	= 1;
	delay(T_p25us);
	ALIGN90_SYN_CLK	= 0;
}

uint8_t align90_read_pd(void) BANKING_CTRL
{
	reg_RX_ALIGN90_PD_OUT_RD_REQ_LANE = 0;
	reg_RX_ALIGN90_PD_OUT_RD_REQ_LANE = 1;
	reg_RX_ALIGN90_PD_OUT_RD_REQ_LANE = 0;

	return reg_ANA_RX_ALIGN90_PD_OUT_RD_LANE;
}
#else
void align90_comp_cal(void) {}
void rxalign90_cal(void) {}
#endif
