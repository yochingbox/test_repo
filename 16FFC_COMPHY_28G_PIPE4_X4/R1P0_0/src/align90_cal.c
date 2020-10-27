/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file align90_cal.c
* \purpose align90 calibration module
* \History
*	10/15/2015 Heejeong Ryu		Initial 
*/
#include "common.h"

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
#define rate				        pll_rate//cmx_PLL_RATE_SEL_3_0	
#define ALIGN90_REF					reg_ALIGN90_REF_LANE_5_0
#define USED_PATTERN_LOCK	0

void align90_comp_cal(void) {
	uint8_t	dir, loop_cnt, pd;
	
	reg_PU_ALIGN90_LANE = 1;	

	PHY_STATUS = ST_RXALIGN90CMP_CAL;
	
	lnx_ALIGN90_COMP_PASS_LANE = 0;
	dir = 0;
	reg_ALIGN90_CMP_CAL_EN_LANE = 1;
	ALIGN90_CMP_OFFSET = 0x08;
	delay(Tus);		

	//timeout_start((uint16_t)1000); //1mS
	loop_cnt = 48;
	do {
		pd = EDGE2DATA_PD;
		if(pd == 1) {
			ALIGN90_CMP_OFFSET++;
		}
		else {
			ALIGN90_CMP_OFFSET--;
		}
		delay(Tus);		
		
		dir<<=1;
		dir |= pd;
		dir&=0x0f;
		if(dir==0x0a || dir==0x05){
			lnx_ALIGN90_COMP_PASS_LANE = 1;
			break;		
		}
		if(	ALIGN90_CMP_OFFSET==0xf || ALIGN90_CMP_OFFSET==0 ) {
			//lnx_ALIGN90_COMP_PASS_LANE = 0;
			break;
		}
		
	} while(loop_cnt-->0); 
	
	reg_ALIGN90_CMP_CAL_EN_LANE = 0;
	
	lnx_CAL_ALIGN90_CMP_OFFSET_LANE_7_0 = ALIGN90_CMP_OFFSET;
}

bool get_dac_inc(void)
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

bool get_dac_dec(void)
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

#if USED_PATTERN_LOCK
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
inline static bool check_lock(uint16_t val) {
	uint8_t i;
	for(i=0; i<8; i++) {
		if(pattern_tb[i] == (val&pattern_tb_mask[i])) return 1;
	}
	return 0;
}
#endif

__code uint8_t gray2bi[] = {0, 1, 3, 2, 7, 6, 4, 5};

bool find_align90_lock(void) {
	uint8_t	pd, pre_pd, step_size, cnt;
	uint16_t loop_cnt;
	uint16_t dir;
	bool locked, hit_boundary;
    
	dir = 0; locked = 0; cnt = 0; loop_cnt = 0;//356;
	gm_bin = gray2bi[reg_ALIGN90_GM_LANE_2_0];
	dac = DAC; 
	dm = DM;

	pd = EDGE2DATA_PD;
	pre_pd = pd;
	if( lnx_LOAD_CAL_ON_LANE == 1) step_size = 8;
	else step_size = 1;
	#if _DBG_PHASE
	//if(!cont_cal_on) 
	//Printf("\r\n align90_step = %d", step_size);	
	#endif
	
	do {
		align90_step = step_size;
		if(cont_cal_on) {
			if(pd) align90_step_cnt++;
			else align90_step_cnt--;	
		
	#if _DBG_PHASE
	//if(cont_cal_on) 
	//Printf("\r\n #%d %d: #%d:gm/dac/dm=(%d,%d,%d) pd=%d ", align90_step_cnt, ALIGN90_REF, loop_cnt, gm_bin, dac, dm, pd);	
	#endif
			if( align90_step_cnt == 0) {
				pd = 0;
				align90_step_cnt = ALIGN90_CAL_STEP_SIZE;
			} else if( align90_step_cnt	>= (ALIGN90_CAL_STEP_SIZE<<1)) {
				pd = 1;
				align90_step_cnt = ALIGN90_CAL_STEP_SIZE;
			}
			else return 1;		
		}
		
		if(pd == 1) { //inc DAC
			hit_boundary = get_dac_inc(); 
		}
		else { // dec DAC
			hit_boundary = get_dac_dec(); 
		}
		
		if( hit_boundary ) break;
		
		DAC = dac;        
		ALIGN90_GM = gm_bin ^ (gm_bin>>1);
		DM = dm;	
		ALIGN90_SYN_CLK	= 1;		
		delay(T_p25us);
		ALIGN90_SYN_CLK	= 0;		
		
		if( cont_cal_on ) {
			locked = 1;
			break;
		}
		
		//delay(Tus);
		pd = EDGE2DATA_PD;		
	#if _DBG_PHASE
	//if(!cont_cal_on) 
	//	Printf("\r\n %d: #%d:gm/dac/dm=(%d,%d,%d) pd:%d locked=%d ", ALIGN90_REF, loop_cnt, gm_bin, dac, dm, pd, locked);	
	#endif
		if( pd != pre_pd) {
			pre_pd = pd;
			if(step_size == 8) step_size = 2; 
			else if(step_size == 2) step_size = 1;
			#if USED_PATTERN_LOCK==0
			else {
				cnt++;
				if( cnt>=3 ) {
					locked = 1;
					break;
				}
			}	
			#endif
		}
				
		#if USED_PATTERN_LOCK
		dir<<=1;
		dir |= pd;

		#if _DBG_PHASE
		if(!cont_cal_on) 
		Printf("\r\n %d: #%d:gm/dac/dm=(%d,%d,%d) locked=%d pd=%d dir=%x", ALIGN90_REF, loop_cnt, gm_bin, dac, dm, locked, pd, dir);	
		#endif

		if( check_lock(dir)) { 
			locked = 1;
			break;
		}	
		#endif
		
	} while(loop_cnt++<0xffff);

	#if _DBG_PHASE
	if(!cont_cal_on)
	Printf(" %d:#%d:gm/dac/dm=(%d,%d,%d):locked=%d:dir=%x//", ALIGN90_REF, loop_cnt, gm_bin, dac, dm, locked, dir);	
	#endif
	
	return locked;
}


void rxalign90_cal(void){	
	//uint8_t	gm_bin, val;
	//uint16_t dir;
	
	PHY_STATUS = ST_RXALIGN90_CAL;

	lnx_RXALIGN90_CAL_DONE_LANE = 0;
	lnx_ALIGN90_TRACKING_PASS_LANE = 0;
	
	//reg_PU_ALIGN90_LANE = 1;
	//delay(Tus);
	
	if( cmx_CAL_DONE==0) {
		DAC = 49;   dac = 49;      
		reg_ALIGN90_GM_LANE_2_0 = 5; gm = 5;
		DM = 1;    dm  = 1;	
		ALIGN90_SYN_CLK	= 1;		
		delay(T_p25us);
		ALIGN90_SYN_CLK	= 0;		
		delay(T_p25us);
	}
	//dir = 0; 
	//gm_bin = gray2bi[reg_ALIGN90_GM_LANE_2_0];

	lnx_ALIGN90_TRACKING_PASS_LANE = find_align90_lock(); 
	
	if (rate == 1) {
	  cal_align90_gm_bin[1] = gray2bi[reg_ALIGN90_GM_LANE_2_0];
	  lnx_CAL_ALIGN90_DAC_R1_LANE_7_0 = reg_ALIGN90_DAC_LANE_5_0;
	  lnx_CAL_ALIGN90_GM_R1_LANE_7_0 = reg_ALIGN90_GM_LANE_2_0;
	  lnx_CAL_ALIGN90_DUMMY_CLK_R1_LANE = reg_ALIGN90_DUMMY_CLK_LANE;
	}
	else {
	  cal_align90_gm_bin[0] = gray2bi[reg_ALIGN90_GM_LANE_2_0];
	  lnx_CAL_ALIGN90_DAC_R0_LANE_7_0 = reg_ALIGN90_DAC_LANE_5_0;
	  lnx_CAL_ALIGN90_GM_R0_LANE_7_0 = reg_ALIGN90_GM_LANE_2_0;
	  lnx_CAL_ALIGN90_DUMMY_CLK_R0_LANE = reg_ALIGN90_DUMMY_CLK_LANE;
	}

	lnx_RXALIGN90_CAL_DONE_LANE = 1;

	if(!cont_cal_on) {
		align90_step_cnt = ALIGN90_CAL_STEP_SIZE;
	}
	
}



