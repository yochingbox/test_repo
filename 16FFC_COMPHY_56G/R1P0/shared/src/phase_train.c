/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file phase.c
* \purpose Align90 phase control
* \History
*	02/25/2015 Heejeong Ryu		Initial 
*/

#include "common.h"
#include "driver.h"

#define EDGE2DATA_PD				reg_ANA_RX_ALIGN90_PD_OUT_RD_LANE 
#define ALIGN90_REF					reg_ALIGN90_REF_LANE_5_0
#define DAC 						reg_ALIGN90_DAC_LANE_5_0
#define DM							reg_ALIGN90_DUMMY_CLK_LANE
#define GM							reg_ALIGN90_GM_LANE_2_0
#define SYN_CLK						reg_ALIGN90_SYN_CLK_LANE

//uint8_t step;
#define step 	reg_MCU_DEBUG1_LANE_7_0

#ifdef _56GR1P1_TRAIN
#ifndef _MOVE_PHASE_CDS
void phase_control_func(void) 
{
	int8_t dat;
	
	if(lnx_FAST_DFE_TIMER_EN_LANE) return;
	
 	#if (_DBG_PHASE_TRAIN)
	//DBG_Printf(" cal_ph=%d, dat_ph=%d, esm_ph=%d ",cal_phase,train.phase_offset_data,train.phase_offset_esm);
	//DBG_Printf(" ph_control_mode=%d ", ph_control_mode);
	#endif
	lnx_DLL_VDDA_TRACKING_ON_LANE = 0; 
	
	if(ph_control_mode==0 ) {
		EOM_EN_D = 0; 
		EOM_EN_S = 0; 
		EOM_EN_E = 0;
			
		#if (tag_CDR_ALIGN90_INC_IS_CLOCK_DELAY==1)	
	    cdr_phase_update(cal_phase - train.phase_offset_data - train.phase_offset_esm );
		#else
	    cdr_phase_update(cal_phase + train.phase_offset_data + train.phase_offset_esm );
		#endif
		//eom_phase_update( cal_eom_dpher );		
		move_eom_phase((int16_t)cal_eom_dpher - (int16_t)reg_EOM_DPHER_LANE_6_0);		
	}
	else if( ph_control_mode==1 ) {
		EOM_EN_D = adapt_data_en==1? 1: tag_EOM_DRIVE_DATA_EN_MODE1; 
		EOM_EN_S = adapt_slicer_en==1? 1: tag_EOM_DRIVE_DATA_EN_MODE1; 
		EOM_EN_E = 0;
		
		if(EOM_EN_D!=EOM_EN_S && do_phase_adapt==0) eom_ui_align();	
		#if (tag_CDR_ALIGN90_INC_IS_CLOCK_DELAY==1)	
	    cdr_phase_update(cal_phase - train.phase_offset_data );
		#else
	    cdr_phase_update(cal_phase + train.phase_offset_data );
		#endif
		
		#if (tag_CDR_EOM_INC_IS_CLOCK_DELAY==1)	
		//eom_phase_update( cal_eom_dpher + train.phase_offset_esm );	
		move_eom_phase((int16_t)(cal_eom_dpher + train.phase_offset_esm) - (int16_t)reg_EOM_DPHER_LANE_6_0);
		#else
		//eom_phase_update( cal_eom_dpher - train.phase_offset_esm );	
		move_eom_phase((int16_t)(cal_eom_dpher - train.phase_offset_esm) - (int16_t)reg_EOM_DPHER_LANE_6_0);
		#endif
	
	}
	else if( ph_control_mode==2 ) {
		#if (_DBG_PHASE_ADAPT)
		//DBG_Printf(" cal_ph=%d, dat_ph=%d, esm_ph=%d ",cal_phase,train.phase_offset_data,train.phase_offset_esm);
		//DBG_Printf("\r\n\t\t ++(phase_control_func) ph_control_mode=%d ", ph_control_mode);
		#endif
		EOM_EN_D = adapt_data_en==1? 1: tag_EOM_DRIVE_DATA_EN_MODE2; 
		EOM_EN_S = adapt_slicer_en==1? 1: tag_EOM_DRIVE_DATA_EN_MODE2; 
		EOM_EN_E = 0;
		
		//if(EOM_EN_D!=EOM_EN_S) eom_ui_align();	
	    cdr_phase_update(cal_phase );
		#if (tag_CDR_EOM_INC_IS_CLOCK_DELAY==1)	
		//eom_phase_update( cal_eom_dpher + train.phase_offset_data + train.phase_offset_esm  );		
		move_eom_phase((int16_t)(cal_eom_dpher + train.phase_offset_data + train.phase_offset_esm) - (int16_t)reg_EOM_DPHER_LANE_6_0);
		#else
		//eom_phase_update( cal_eom_dpher - train.phase_offset_data - train.phase_offset_esm  );		
		move_eom_phase((int16_t)(cal_eom_dpher - train.phase_offset_data - train.phase_offset_esm) - (int16_t)reg_EOM_DPHER_LANE_6_0);
		#endif	
		
	} 
	else if( ph_control_mode==3 ){	
		EOM_EN_D = 0; 
		EOM_EN_S = 0; 
		EOM_EN_E = 1; 
			
		#if (_DBG_PHASE_ADAPT)
		//DBG_Printf(" -- eom_en_d/s/e(%d, %d, %d) ", EOM_EN_D, EOM_EN_S, EOM_EN_E);
		#endif
		//eom_ui_align();	
	    cdr_phase_update(cal_phase );
		#if (tag_CDR_EOM_INC_IS_CLOCK_DELAY==1)	
		//eom_phase_update( cal_eom_dpher - ( tag_CDR_HALF_UI_PI_CODE + train.phase_offset_data + train.phase_offset_esm  ));			
		move_eom_phase((int16_t)(cal_eom_dpher -( tag_CDR_HALF_UI_PI_CODE + train.phase_offset_data + train.phase_offset_esm)) - (int16_t)reg_EOM_DPHER_LANE_6_0);
		#else
		//eom_phase_update( cal_eom_dpher + ( tag_CDR_HALF_UI_PI_CODE + train.phase_offset_data + train.phase_offset_esm  ));			
		move_eom_phase((int16_t)(cal_eom_dpher +( tag_CDR_HALF_UI_PI_CODE + train.phase_offset_data + train.phase_offset_esm)) - (int16_t)reg_EOM_DPHER_LANE_6_0);
		#endif
	}

	#if tag_USE_SEL_EDGE_DLY==1
	if( ph_control_mode<2) {
		if( ALIGN90_REF > 34 )
			reg_SEL_EDGE_DLY_LANE_1_0 = 0;
		else 
			reg_SEL_EDGE_DLY_LANE_1_0 = 1;	
	}
	else if( ph_control_mode==2) {
		set_sel_sdge_dly_tb(train.phase_offset_data + train.phase_offset_esm);
	}
	else if( ph_control_mode==3) {
		set_sel_sdge_dly_tb_mode3(tag_CDR_HALF_UI_PI_CODE + train.phase_offset_data + train.phase_offset_esm);
	}
	#endif
	
	lnx_DLL_VDDA_TRACKING_ON_LANE = 1; 

}
#else
void phase_control_func(void)
{
	drv_PH_OS_DAT = train.phase_offset_data;
	drv_PH_OS_ESM = train.phase_offset_esm;
}
#endif

#else
void phase_control_func_0(int8_t dat_ph, int8_t esm_ph) {

	int8_t dat, esm;

	if(lnx_FAST_DFE_TIMER_EN_LANE) return;

	cur_phase_offset_data = dat_ph;
	cur_phase_offset_esm = esm_ph;

 	#if (_DBG_PHASE_TRAIN  || _DBG_RXTRAIN)
	//DBG_Printf("\r\n cal_ph=%d, cal_eom_dpher=%d, dat_ph=%d, esm_ph=%d ",cal_phase,cal_eom_dpher,dat_ph,esm_ph);
	//DBG_Printf(" ph_control_mode=%d ", ph_control_mode);
	#endif
	lnx_DLL_VDDA_TRACKING_ON_LANE = 0;

	if(ph_control_mode==0 ) {
		#if (tag_CDR_ALIGN90_INC_IS_CLOCK_DELAY==1)
		dat = cal_phase - dat_ph - esm_ph;
		#else
		dat = cal_phase + dat_ph + esm_ph;
		#endif
		//eom_phase_update( cal_eom_dpher );
		esm = (int16_t)cal_eom_dpher - (int16_t)reg_EOM_DPHER_LANE_6_0;
	}
	else if( ph_control_mode==1 ) {
		if(EOM_EN_D!=EOM_EN_S && do_phase_adapt==0) eom_ui_align();
		#if (tag_CDR_ALIGN90_INC_IS_CLOCK_DELAY==1)	//1
	    dat = cal_phase - dat_ph;
		#else
	    dat = cal_phase + dat_ph;
		#endif

		#if (tag_CDR_EOM_INC_IS_CLOCK_DELAY==1)
		//eom_phase_update( cal_eom_dpher + esm_ph );
		esm = (int16_t)(cal_eom_dpher + esm_ph) - (int16_t)reg_EOM_DPHER_LANE_6_0;
		#else
		//eom_phase_update( cal_eom_dpher - esm_ph );
		esm = (int16_t)(cal_eom_dpher - esm_ph) - (int16_t)reg_EOM_DPHER_LANE_6_0;
		#endif

	}
	else if( ph_control_mode==2 ) {
		#if (_DBG_PHASE_ADAPT)
		//DBG_Printf(" cal_ph=%d, dat_ph=%d, esm_ph=%d ",cal_phase,dat_ph,esm_ph);
		//DBG_Printf("\r\n\t\t ++(phase_control_func) ph_control_mode=%d ", ph_control_mode);
		#endif

		//if(EOM_EN_D!=EOM_EN_S) eom_ui_align();
	    dat = cal_phase;
		#if (tag_CDR_EOM_INC_IS_CLOCK_DELAY==1)
		//eom_phase_update( cal_eom_dpher + dat_ph + esm_ph  );
		esm =  (int16_t)(cal_eom_dpher + dat_ph + esm_ph) - (int16_t)reg_EOM_DPHER_LANE_6_0;
		#else
		//eom_phase_update( cal_eom_dpher - dat_ph - esm_ph  );
		esm =  (int16_t)(cal_eom_dpher - dat_ph - esm_ph) - (int16_t)reg_EOM_DPHER_LANE_6_0;
		#endif
	}
	else if( ph_control_mode==3 ){
		//eom_ui_align();
	    dat = cal_phase;
		#if (tag_CDR_EOM_INC_IS_CLOCK_DELAY==1)
		//eom_phase_update( cal_eom_dpher - ( tag_CDR_HALF_UI_PI_CODE + dat_ph + esm_ph  ));
		esm = (int16_t)(cal_eom_dpher -(half_ui_code + dat_ph + esm_ph))- (int16_t)reg_EOM_DPHER_LANE_6_0;
		#else
		//eom_phase_update( cal_eom_dpher + ( tag_CDR_HALF_UI_PI_CODE + dat_ph + esm_ph  ));
		esm = (int16_t)(cal_eom_dpher +(half_ui_code + dat_ph + esm_ph))- (int16_t)reg_EOM_DPHER_LANE_6_0;
		#endif
	}

	if(dat>=64) dat-=64;
	//cdr_phase_update(dat);
	if(esm>=70) esm -= 128;
	else if(esm < -70) esm += 128;
	//move_eom_phase(esm);

	//drv_PH_OS_DAT = (uint8_t)dat;
	//drv_PH_OS_ESM = (uint8_t)esm;

	#if tag_USE_SEL_EDGE_DLY==1
	set_edge_dly(dat_ph, esm_ph);
	#endif

	#if (_DBG_RXTRAIN)
	//DBG_Printf(" -- eom_en_d/s/e(%d, %d, %d) ", EOM_EN_D, EOM_EN_S, EOM_EN_E);
	#endif

	lnx_DLL_VDDA_TRACKING_ON_LANE = 1;

}

void phase_control_func(void) {
	phase_control_func_0(train.phase_offset_data, train.phase_offset_esm);
	//drv_PH_OS_DAT = (uint8_t)train.phase_offset_data;
	//drv_PH_OS_ESM = (uint8_t)train.phase_offset_esm;
}
#endif

void cdr_phase_update(int8_t new_phase_os)
{
	int8_t ph_os_tmp;


    //drv_PH_OS_DAT = new_phase_os; // TL
	
	ph_os_tmp = (int8_t)ALIGN90_REF;
	new_phase_os = clamp( new_phase_os, tag_CDR_PHASE_MAX, tag_CDR_PHASE_MIN);

 	#if (_DBG_PHASE_TRAIN || _DBG_PHASE_ADAPT)
	//DBG_Printf("\r\n dat_ph=%d --> (%d)",ph_os_tmp, new_phase_os);
	#endif
	
	while( ph_os_tmp != new_phase_os ) 
	{		
        if(ph_os_tmp < (new_phase_os - tag_CDR_OS_PH_JMP_STEP))
            ph_os_tmp += tag_CDR_OS_PH_JMP_STEP;
        else if(ph_os_tmp > (new_phase_os + tag_CDR_OS_PH_JMP_STEP))
            ph_os_tmp -= tag_CDR_OS_PH_JMP_STEP;
        else
            ph_os_tmp = new_phase_os;
		
		ALIGN90_REF = (uint8_t)ph_os_tmp;		
		delay(Tus);

		#if (_DBG_PHASE_TRAIN || _DBG_PHASE_ADAPT)
		//DBG_Printf(" (%d)%d,", ph_os_tmp, ALIGN90_REF);
		#endif
		
		//phase_lookup_tracking(1);
		rxalign90_cal();

	}	
}
/*
void eom_phase_update(int16_t new_phase_os) 
{
	int16_t ph_os_tmp;

	ph_os_tmp = (int16_t)reg_EOM_DPHER_LANE_6_0;
 	#if (_DBG_PHASE_TRAIN || _DBG_PHASE_ADAPT)
	DBG_Printf("\r\n eom_ph=%d --> (%d)",ph_os_tmp, new_phase_os);
	#endif
	while( ph_os_tmp != new_phase_os ) 
	{		
        if(ph_os_tmp < (new_phase_os - tag_CDR_OS_PH_JMP_STEP))
            ph_os_tmp += tag_CDR_OS_PH_JMP_STEP;
        else if(ph_os_tmp > (new_phase_os + tag_CDR_OS_PH_JMP_STEP))
            ph_os_tmp -= tag_CDR_OS_PH_JMP_STEP;
        else
            ph_os_tmp = new_phase_os;
		
		reg_EOM_DPHER_LANE_6_0 = (uint8_t)(ph_os_tmp) & 0x7f;		
		delay(Tus);
		reg_EOM_DPHERCK_LANE = 1;
		reg_EOM_DPHERCK_LANE = 0;
		
		#if (_DBG_PHASE_TRAIN || _DBG_PHASE_ADAPT)
		DBG_Printf(" (%d)%d,", ph_os_tmp, reg_EOM_DPHER_LANE_6_0);
		#endif
	
	}		
}
*/

#ifndef NEW_CDS
void move_eom_phase(int16_t update_ph) //move update_ph code from current phase.
{
	int16_t ph_os_tmp;

 	#if (_DBG_PHASE_TRAIN || _DBG_PHASE_ADAPT)
	//if(eom_ext_mode)
	//DBG_Printf("\r\n eom_ph=%d --> (%d)",reg_EOM_DPHER_LANE_6_0, update_ph);
	#endif
	while( update_ph != 0 ) 
	{		
		ph_os_tmp = (int16_t)reg_EOM_DPHER_LANE_6_0;
		
		if(update_ph >= tag_CDR_OS_PH_JMP_STEP) {
			update_ph -= tag_CDR_OS_PH_JMP_STEP;
			ph_os_tmp += tag_CDR_OS_PH_JMP_STEP;
		}
		else if(update_ph <= -tag_CDR_OS_PH_JMP_STEP) {
			update_ph += tag_CDR_OS_PH_JMP_STEP;
			ph_os_tmp -= tag_CDR_OS_PH_JMP_STEP;	
		}
		else {
			ph_os_tmp += update_ph;	
			update_ph = 0;
		}
	
 		reg_EOM_DPHER_LANE_6_0 = (uint8_t)ph_os_tmp & 0x7f;		
		delay(Tus);
		reg_EOM_DPHERCK_LANE = 1;
		reg_EOM_DPHERCK_LANE = 0;
		
		#if (_DBG_PHASE_TRAIN || _DBG_PHASE_ADAPT)
		//if(eom_ext_mode)
		//DBG_Printf(" %d(%d),", update_ph, reg_EOM_DPHER_LANE_6_0);
		#endif
	
	}		
}
#endif
// ----- mode 2
// 79 + (data-edge)/128*360 = new phase
//STROBE_Data - STROBE_Edge (UI)	 
//MIN (Worst Setup Time)	MAX (Worst Hold Time)	SEL_EDGE_DLY[1:0]
//0(0°)	                    0.43 (77.4°)	        0
//0.38 (68.4°)	            0.73 (131.4°)	        1
//0.68 (122.4°)	            0.93 (167.4°)         	2
//0.88 (158.4°)	            1.08 (194.4°)	        3
__code int8_t sel_sdge_dly_tb[] = { -3, 17, 30};
void set_sel_sdge_dly_tb(int8_t dat) {

		if( dat < sel_sdge_dly_tb[0])  reg_SEL_EDGE_DLY_LANE_1_0 = 0;
		else if(dat < sel_sdge_dly_tb[1])  reg_SEL_EDGE_DLY_LANE_1_0 = 1;
		else if(dat < sel_sdge_dly_tb[2])  reg_SEL_EDGE_DLY_LANE_1_0 = 2;
		else  reg_SEL_EDGE_DLY_LANE_1_0 = 3;

} 

// ----- mode 3 : eom clk as edge clk
// (eom_dpher offset from cal_eom_dpher)/128*360 = new phase
//STROBE_Data - STROBE_Edge (UI)	 
//MIN (Worst Setup Time)   	   MAX (Worst Hold Time)	SEL_EDGE_DLY[1:0]       USED
//0(0°)	                       0.43 (77.4°)	            0                       70/360*128
//0.38 (68.4°)	               0.73 (131.4°)	        1                       128/360*128
//0.68 (122.4°)	               0.93 (167.4°)         	2                       162/360*128
//0.88 (158.4°)	               1.08 (194.4°)	        3
#ifndef NEW_CDS
__code int8_t sel_sdge_dly_tb3[] = { 25, 45, 58};
#endif
void set_sel_sdge_dly_tb_mode3(int8_t dat) {

		if( dat < sel_sdge_dly_tb3[0])  reg_SEL_EDGE_DLY_LANE_1_0 = 0;
		else if(dat < sel_sdge_dly_tb3[1])  reg_SEL_EDGE_DLY_LANE_1_0 = 1;
		else if(dat < sel_sdge_dly_tb3[2])  reg_SEL_EDGE_DLY_LANE_1_0 = 2;
		else  reg_SEL_EDGE_DLY_LANE_1_0 = 3;
} 

// -- EOM CAL Control
/*void eom_cal_control(void)
{
	
	if(tag_PRE_EOM_EN_D==0 && tag_PRE_EOM_EN_S==0 && (EOM_EN_D==1 || EOM_EN_S==1)) {
		if(cmx_EOM_ALIGN_CAL_EN)	eom_align_cal();		
	}
	else if(tag_PRE_EOM_EN_E==0 && EOM_EN_E==1) {
		if(cmx_EOM_ALIGN_CAL_EN)	eom_align_cal();
	}
}
*/
#if 0
bool align90_dac_inc(void)
{
	bool hit_boundary = 0;
	if(dac==49)	{
		if(gm_bin==6) {	dac = 51; dm = 0; }
		else if(gm_bin==7) { dac = 48; }
		else { dac = 50; dm = 0; }
	}
	else {
		if(dac==50 || dac==51) {
			if(gm_bin == 6) { dac = 49; gm_bin = 7; dm = 1; }
			else { dac = 0; gm_bin++; dm = 1; }
		}
		else {
			if(gm_bin==7) {
				if(dac==0) { hit_boundary=1;}
				else dac--;
			}
			else { dac++; }
		}
	}
	return hit_boundary;
}

bool align90_dac_dec(void)
{
	bool hit_boundary = 0;
	if(gm_bin==7) {
		if(dac==49) { dac = 51; gm_bin = 6; dm = 0; }
		else { dac++;}
	}
	else {
		if(dac==50 || dac==51) { dac = 49; dm = 1; }
		else if(dac==0){
			if(gm_bin>1) {gm_bin--; dac = 51; dm = 0;}
			else { hit_boundary=1;}
		}
		else { dac--; }
	}
	return hit_boundary;
}
#else
bool align90_dac_inc(void)
{
	bool hit_boundary = 0;
	if(dac==99)	{
		if(gm_bin==6) {	dac = 101; dm = 0; }
		else if(gm_bin==7) { dac = 98; }
		else { dac = 100; dm = 0; }
	}
	else {
		if(dac==100 || dac==101) {
			if(gm_bin == 6) { dac = 99; gm_bin = 7; dm = 1; }
			else { dac = 0; gm_bin++; dm = 1; }
		}
		else {
			if(gm_bin==7) {
				if(dac==0) { hit_boundary=1;}
				else dac--;
			}
			else { dac++; }
		}
	}
	return hit_boundary;
}

bool align90_dac_dec(void)
{
	bool hit_boundary = 0;
	if(gm_bin==7) {
		if(dac==99) { dac = 101; gm_bin = 6; dm = 0; }
		else { dac++;}
	}
	else {
		if(dac==100 || dac==101) { dac = 99; dm = 1; }
		else if(dac==0){
			if(gm_bin>1) {gm_bin--; dac = 101; dm = 0;}
			else { hit_boundary=1;}
		}
		else { dac--; }
	}
	return hit_boundary;
}
#endif
bool get_dac_inc(void)
{
	//bool hit_boundary = 0;

		do {
			/*if(dac==49)	{
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
			}*/
			if(align90_dac_inc())
				return 1;
				//break;
		} while (step-->1);
		
	return 0;//hit_boundary;
}

bool get_dac_dec(void)
{
	//bool hit_boundary = 0;
		do {
			/*if(gm_bin==7) {
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
			}	*/
			if(align90_dac_dec())
				return 1;
		} while (step--> 1);

	return 0;//hit_boundary;
}
#ifndef SUPPORT_ALIGN90_PD_DIGITAL_FILTER
#ifndef ALIGN90_TEST

void phase_lookup_tracking(uint8_t step_size) {
	uint8_t dir, hit_boundary, pd, filtered_pd;
	uint16_t cnt, loop;
	
	//PHY_STATUS = ST_RXALIGN90_TRACK;

	cnt = 0; loop = 0;
	//dir = EDGE2DATA_PD;
	dir = align90_read_pd();
 	#if (_DBG_PHASE_TRAIN)
	//if(lnx_DLL_VDDA_TRACKING_ON_LANE==0) Printf(" :gm=%d, dac=%d, dm=%d -->", gm_bin, dac, dm);
	#endif

	do 
	{
		step = step_size;
		pd = align90_read_pd();
		filtered_pd = fractional_noise_filter((uint8_t *)(&align90_step_cnt), pd, cmx_ALIGN90_CAL_STEP_SIZE_7_0);

		/*if( EDGE2DATA_PD == 1 ) {
			hit_boundary = get_dac_inc(); 
		}
		else {
			hit_boundary = get_dac_dec(); 
		}*/
		if( filtered_pd == 1 ) {
			hit_boundary = get_dac_inc();
			if( hit_boundary ){
				break;
			}
			align90_cal_update();
		}
		else if( filtered_pd == 0 ){
			hit_boundary = get_dac_dec();
			if( hit_boundary ){
				break;
			}
			align90_cal_update();
		}

		/*if( hit_boundary ){
			break;
		}
		
		DAC = dac;        
		GM = gm_bin ^ (gm_bin>>1);    
		DM = dm;	
		SYN_CLK	= 1;		
		delay(T_p25us);
		SYN_CLK	= 0;*/
		
		if( lnx_DLL_VDDA_TRACKING_ON_LANE == 1 ) {
			break;
		}	
		
		delay(Tus);
		
		/*if(dir != EDGE2DATA_PD ) {
			dir = EDGE2DATA_PD;
			if(step_size == 8) step_size = 2;
			else if(step_size == 2) step_size = 1;
			else
			{
				cnt++;
				if( cnt>=3 ) break;
			}
		}*/
		if(filtered_pd == 0 || filtered_pd == 1)
		{
			if(dir != filtered_pd) {
				dir = filtered_pd;
				if(step_size == 8) step_size = 2;
				else if(step_size == 2) step_size = 1;
				else
				{
					cnt++;
					if( cnt>=3 ) break;
				}
			}
		}
	//} while(loop++<100); //1024);
	}while(loop++ < cmx_PHASE_TRACKING_LOOP_CNTS_7_0);

 	#if (_DBG_PHASE_TRAIN)
	//if(lnx_DLL_VDDA_TRACKING_ON_LANE==0) Printf(" %d-n%d:gm/dac/dm=(%d,%d,%d)", ALIGN90_REF, loop, gm_bin, dac, dm);
	#endif
}
#else
void phase_lookup_tracking(uint8_t step_size) {
	uint8_t dir, hit_boundary;
	uint16_t cnt, loop;
	
	//PHY_STATUS = ST_RXALIGN90_TRACK;

	#if (_DBG_PHASE_TRAIN)
	//if(lnx_DLL_VDDA_TRACKING_ON_LANE==0) Printf(" :gm=%d, dac=%d, dm=%d -->", gm_bin, dac, dm);
	#endif

	MCU_DEBUG_LANE.VAL <<=1; 
	MCU_DEBUG_LANE.VAL |= EDGE2DATA_PD; 

	step = step_size;
	if( EDGE2DATA_PD == 1 ) { 
		hit_boundary = get_dac_inc(); 
	}
	else {
		hit_boundary = get_dac_dec(); 
	}		
		
	if( hit_boundary ==0 ) {
		DAC = dac;        
		GM = gm_bin ^ (gm_bin>>1);    
		DM = dm;	
		SYN_CLK	= 1;		
		delay(T_p25us);
		SYN_CLK	= 0;		
	}
	
	delay(T_50us);		//t1

 	#if (_DBG_PHASE_TRAIN)
	//if(lnx_DLL_VDDA_TRACKING_ON_LANE==0) Printf(" %d-n%d:gm/dac/dm=(%d,%d,%d)", ALIGN90_REF, loop, gm_bin, dac, dm);
	#endif
}
#endif

#else

#if _DBG_ALIGN90_CONT
void decode_to_state(void) {
	uint16_t state;

	state = (uint16_t)(gm_bin-1);	
	state = state * 51;
	state += 1;	
	
	if(gm_bin<7) {
		state += DAC;
	}
	else if(gm_bin==7) {
		state += (47 - DAC);
	}
	
	#ifdef _LAB
	//DBG_Printf("\r\n #%d %d = %d", gm_bin, DAC, state);
	#endif
		
	//reg_MCU_DEBUGA_LANE_7_0 = (uint8_t)(state>>8);
	//reg_MCU_DEBUGB_LANE_7_0 = (uint8_t)state;
	MCU_DEBUG_LANE.VAL = (uint32_t)state;
	//reg_MCU_DEBUGC_LANE_7_0 = gm_bin;
	//reg_MCU_DEBUGD_LANE_7_0 = DAC;
}
#endif //_DBG_ALIGN90_CONT

void phase_lookup_tracking(uint8_t step_size) {
	uint8_t loop, cnt, hit_boundary, change, inc;
		
		hit_boundary = 0;
		change = 0;
		inc = 0;
		
		/*reg_MCU_DEBUG9_LANE_7_0 <<=1;
		if(reg_MCU_DEBUG8_LANE_7_0&0x80) reg_MCU_DEBUG9_LANE_7_0 |= 1;
		reg_MCU_DEBUG8_LANE_7_0 <<=1;*/
		
		if(	EDGE2DATA_PD == 1) {
			align90_pd_1_cnt++;
			//reg_MCU_DEBUG8_LANE_7_0 |= 1;
		}	
			
		align90_track_cnt++;		
		if( align90_track_cnt < 10 ) return;
	
		#ifdef _LAB
		//DBG_Printf("\r\n #%d - %lx: 0s=%d, 1s=%d", align90_track_cnt, MCU_DEBUG_LANE.VAL, align90_pd_0_cnt, align90_pd_1_cnt);
		#endif
		
		step = step_size;
		if(align90_pd_1_cnt>=6) { hit_boundary = get_dac_inc(); change = 1; inc = 1;}		
		else if(align90_pd_1_cnt<=3 ) { hit_boundary = get_dac_dec(); change = 1; inc = 0; }
		
		if(hit_boundary==0 && change==1) {
			DAC = dac;        
			GM = gm_bin ^ (gm_bin>>1);    
			DM = dm;	
			SYN_CLK	= 1;		
			delay(T_p25us);
			SYN_CLK	= 0;
			
			#if _DBG_ALIGN90_CONT
			decode_to_state();
			#endif
			
			//MCU_DEBUG_LANE.VAL <<=1; 
			//if(inc==1) MCU_DEBUG_LANE.VAL |= 1;
		}

		align90_track_cnt = 0;
		align90_pd_0_cnt = 0; align90_pd_1_cnt = 0;
		
}

#endif

void phase_faststartup(void) {
	phase_lookup_tracking(8);
}	



/****************************************
 * CDR Phase Optimization
 * Inputs: 
 *      train.level
 *      train.eo
 *      train.f0
 *      train.f0a
 * Outputs:
 *      train_phase_os
*****************************************/
void cdr_phase_opt(void)
{
 	#if (_DBG_PHASE_TRAIN)
	//DBG_PS("\r\n++(cdr_phase_opt) ");
	#endif
	
	if (train.level >= 5 || train.eo > tag_CDR_EO_BYPASS_THRES) //tag_CDR_EO_BYPASS_THRES=63
        return; 

	cdr_phase_opt_init();

    #if (tag_CDR_MAXF0P_EN)  //1
		cdr_phase_maxf0p(); 
	#endif	

    #if (tag_CDR_MIDPOINT_EN)  //1
		cdr_phase_midpoint(); 
	#endif	

    cdr_phase_opt_final_processing();
	

}

/****************************************
 * init
 * Inputs: 
 * Outputs:
 *      cdr status setting
*****************************************/
void cdr_phase_opt_init(void)
{
	// initialize some parameters
	calculatef0p();
	cdr.num_count = 0;
	cdr.direction = 0; // go left in the beginning
	cdr.become_worse = 0;
	cdr.ini_phase_offset = train.phase_offset_data; 
	cdr.ini_f0p = cdr.train_f0p;
	cdr.ini_level = train.level;
	cdr.opt_phase_offset = cdr.ini_phase_offset;
	cdr.opt_f0p = cdr.train_f0p;
	cdr.opt_level = train.level;
	//skip_cdr = 0;
	
	#if (_DBG_PHASE_TRAIN)
	//DBG_Printf(" ini_phase_offset=%d", cdr.ini_phase_offset);
	//DBG_Printf(" cdr.ini_level=%d cdr.ini_f0p=%d", cdr.ini_level,cdr.ini_f0p );
	#endif
}


/****************************************
 * maxf0p
 * Inputs:     
 * Outputs:
     cdr.direction: 1, -1
	 opt_f0p
	 opt_level
	 opt_phase_offset
*****************************************/
void cdr_phase_maxf0p(void)
{
	//int8_t train_delta; 
	#if (_DBG_PHASE_TRAIN)
    DBG_PS("\r\n+++(cdr_f0p)");
	#endif
	
	while (1)
	{
		#if (_DBG_PHASE_TRAIN && _DBG_TRXTRAIN_LVL1)
		//DBG_Printf("\r\n %d: phase=%d cal_os_phase=%d", cdr.num_count, train.phase_offset_data, cal_phase);
		#endif
		if (
            (cdr.direction == 0) && //-1
            ((cdr.num_count >= tag_CDR_STEP_NUM) || //8
             ((train.phase_offset_data) <= cdr.min_phase_os) || //??
             (cdr.become_worse==1))
           )
		{	// go right
			cdr.direction = 1;
			cdr.num_count = 0;
			cdr.become_worse = 0;
			train.phase_offset_data = cdr.ini_phase_offset;
            phase_control_func();
#ifdef _MOVE_PHASE_CDS
		dfe_adaptation();
#endif
		}

		if ((  ( cdr.num_count >= tag_CDR_STEP_NUM ) //8
            || ( (train.phase_offset_data) >= cdr.max_phase_os ) //31
            || cdr.become_worse) && (cdr.direction == 1 ))			
		{
			break;//CGR Phase Maxf0p State End
		}
		else
		{ //Phase Adjustment State
		    if( cdr.direction == 0)	train.phase_offset_data -= tag_CDR_PHASE_STEP_SIZE; //2 compute the phase offset
			else		train.phase_offset_data += tag_CDR_PHASE_STEP_SIZE; 
			train.phase_offset_data = clamp(train.phase_offset_data,cdr.max_phase_os,cdr.min_phase_os);
            phase_control_func();
			cdr.num_count ++; //update number of rounds
 
			//DFE & CDR Phase Opt state
			dfe_adaptation();
			calculatef0p();

			//Update State
			//tag_CDR_STOP_IF_WORSE=1
			//skip_cdr = tag_CDR_SKIP_CDR_MODE_EN; //tag_SKIP_CDR_MODE_EN=0                        5
			cdr.become_worse = (tag_CDR_STOP_IF_WORSE && (cdr.train_f0p < (cdr.opt_f0p - tag_CDR_STOPPING_THRE)));
			#if (_DBG_PHASE_TRAIN && _DBG_TRXTRAIN_LVL1)
            //DBG_Printf("\r\n cdr.become_worse=%d", cdr.become_worse);
			#endif
			
			if ( (train.level > cdr.opt_level) ||                              //0
			 ((train.level == cdr.opt_level) && (cdr.train_f0p > (cdr.opt_f0p + tag_CDR_F0P_PHASEUPDATE_THRES)) )) // if the current train sampling phase has a larger f0p, update
			{
				cdr.opt_phase_offset = train.phase_offset_data; // update the phase offset
				cdr.opt_f0p = cdr.train_f0p; //update f0p
				cdr.opt_level = train.level;
			}
			
		}		

		#if (_DBG_PHASE_TRAIN && _DBG_TRXTRAIN_LVL1)
		//DBG_Printf("\r\n %d: phase_offset_data=%d, opt_phase_offset=%d, opt_f0p=%d, opt_level=%d", cdr.num_count,train.phase_offset_data,cdr.opt_phase_offset, cdr.opt_f0p, cdr.opt_level);
		#endif
	}
}

#if (tag_CDR_MIDPOINT_EN) 
/****************************************
 * midpoint
 * Inputs: 
 *      train_phase_os
 *      cdr.train_f0p
 * Outputs:
*****************************************/
void cdr_phase_midpoint(void)
{
    int8_t thres_large;
    int8_t thres_small;
	#if 1//(_DBG_PHASE_TRAIN)
    DBG_PS("\r\n+++(cdr_mdpnt)");
    //DBG_PS("opt_f0p=%d", cdr.opt_f0p);
	#endif
	cdr.direction = 0; //-1
	cdr.become_worse = 0;
	train.phase_offset_data = cdr.opt_phase_offset;
	phase_control_func();
#ifdef _MOVE_PHASE_CDS
		dfe_adaptation();
#endif
	cdr.ini_phase_offset = cdr.opt_phase_offset;
	cdr.ini_level = cdr.opt_level;
	cdr.ini_f0p = cdr.opt_f0p;
	cdr.phase_small = cdr.ini_phase_offset ;
	cdr.phase_large = cdr.ini_phase_offset ;
	//skip_cdr = 0;
	
	if(tag_CDR_ADD_PHASE_OS_ONLY) goto End_State; //0
	
	while (1)
	{
		#if (_DBG_PHASE_TRAIN && _DBG_TRXTRAIN_LVL1)
        //DBG_Printf(" #cdr_become_worse=%d",cdr.become_worse);
		#endif
		if ((cdr.become_worse || ((train.phase_offset_data) <= cdr.min_phase_os)) 
		     && (cdr.direction == 0)) //-1
		{ // go right
			#if (_DBG_PHASE_TRAIN && _DBG_TRXTRAIN_LVL1)
            DBG_PS("\r\ndir=1");
			#endif
			cdr.direction = 1;
			cdr.become_worse = 0;
			train.phase_offset_data = cdr.ini_phase_offset;
            phase_control_func();
#ifdef _MOVE_PHASE_CDS
		dfe_adaptation();
#endif
			//skip_cdr = 0;			
		}
		
		if ((cdr.become_worse || ((train.phase_offset_data) >= cdr.max_phase_os)) 
		    && (cdr.direction == 1))	{ 
			#if (_DBG_PHASE_TRAIN && _DBG_TRXTRAIN_LVL1)
			DBG_PS("\r\nquit");
			#endif
		    break;
		}
		else{
            //DBG_Printf("\r\ncdr.direction:%d",cdr.direction);
			if( cdr.direction == 1)
				train.phase_offset_data += tag_CDR_PHASE_STEP_SIZE; 
			else
				train.phase_offset_data -= tag_CDR_PHASE_STEP_SIZE; 			
            train.phase_offset_data = clamp(train.phase_offset_data, cdr.max_phase_os, cdr.min_phase_os);
            phase_control_func();
			
			cdr.num_count ++; //update number of rounds

            //DFE & CDR Phase Opt State	
			dfe_adaptation();
			calculatef0p();

			//update state
			//skip_cdr = tag_CDR_SKIP_CDR_MODE_EN;
			/*tag_THRES_K_BASE=16*/
			thres_small = ((cdr.opt_f0p*tag_CDR_MIDPOINT_SMALL_THRES_K)>>4) + tag_CDR_MIDPOINT_SMALL_THRES_C;
			thres_large = ((cdr.opt_f0p*tag_CDR_MIDPOINT_LARGE_THRES_K)>>4) + tag_CDR_MIDPOINT_LARGE_THRES_C;
			cdr.become_worse = // cdr.train_f0p < 8;
                ( ( (cdr.direction == 0) && (cdr.train_f0p < thres_small) ) 
				  || ( cdr.direction == 1 && (cdr.train_f0p < thres_large) )
                  || (cdr.train_f0p == 0)
                );

			if (!cdr.become_worse && cdr.direction == 0) // update phase_small and phase_large
			{
				cdr.phase_small = train.phase_offset_data;
				#if (_DBG_PHASE_TRAIN)
				//DBG_Printf("\r\n --phase_offset_data=%d, cdr.phase_small=%d", train.phase_offset_data,cdr.phase_small);				
				#endif
			}
			else if (!cdr.become_worse && cdr.direction == 1)
			{
				cdr.phase_large = train.phase_offset_data;
				#if (_DBG_PHASE_TRAIN)
				//DBG_Printf("\r\n --phase_offset_data=%d, cdr.phase_large=%d", train.phase_offset_data,cdr.phase_large);				
				#endif
			}
		}
	} //while

	End_State:
	cdr.opt_phase_offset = ((cdr.phase_small + cdr.phase_large) >> 1) + cdr_midpoint_phase_os; //tag_CDR_MIDPOINT_PHASE_OS=0
	cdr.opt_phase_offset = clamp(cdr.opt_phase_offset, cdr.max_phase_os, cdr.min_phase_os);

	#if (_DBG_PHASE_TRAIN || _DBG_TRXTRAIN) 
	//DBG_PS("\r\n  F0P ~ mid[%x,%x] ", thres_small, thres_large);
	//DBG_Printf("phase_offset_data=%d, opt_phase_offset=%d", train.phase_offset_data,cdr.opt_phase_offset);
	DBG_Printf("\r\n small/large[%d,%d], +mid_point=%d => %d", cdr.phase_small, cdr.phase_large, cdr_midpoint_phase_os, cdr.opt_phase_offset);
	#endif
}
#endif// (tag_CDR_MIDPOINT_EN) 

/****************************************
 * CDR Phase Opt Final Processing State
 * Inputs: 
 * Outputs:
*****************************************/
void cdr_phase_opt_final_processing(void)
{
	#if 1 //(_DBG_PHASE_TRAIN)
    DBG_PS("\r\n+++(cdr_phase_opt_final_processing)");
	#endif
	//skip_cdr = 0;
	train.phase_offset_data = cdr.opt_phase_offset; 
    phase_control_func();
	dfe_adaptation();
	calculatef0p();

		#if (_DBG_PHASE_TRAIN)
		//Printf("\r\n opt_phase_offset=%d(%d): cdr.ini_level=%d cdr.ini_f0p=%d -> train.level=%d, cdr.train_f0p=%d", cdr.opt_phase_offset,train_phase_os, cdr.ini_level,cdr.ini_f0p,train.level,cdr.train_f0p );
        //
		//Printf("\r\n skip_cdr=%d opt=%d f0p=%d level=%d train_saturated=%d ", skip_cdr, cdr.opt_phase_offset, cdr.train_f0p, train.level, train_saturated); 
		//Printf("dfe: %d %d, %d %d %d %d %d - %d %d ", train.f0a, train.f0, train.f1, train.f2, train.f3, train.f4, train.f5, train.eo, train.eye_check_pass); 
		#endif
	
	#if ( tag_CDR_PHASE_PROTECT_EN ) 
	if (( (train.level < cdr.ini_level && tag_CDR_PHASE_LEVEL_PROTECT_EN) || 
	    ((train.level == cdr.ini_level) && (cdr.train_f0p < (cdr.ini_f0p - tag_CDR_F0P_REJECT_THRES))) || //8
		(train.level == 0 && tag_CDR_PHASE_EO_PROTECT_EN) ))
	{
		#if (_DBG_PHASE_TRAIN)
		//DBG_Printf(" -- go back init phase!");
		#endif
		
		#if (_DBG_PHASE_TRAIN)
		//DBG_Printf("\r\n (R,C)=(%d,%d) dfe_res=%d opt_phase_offset=%d(%d): cdr.ini_level=%d cdr.ini_f0p=%d -> train.level=%d, cdr.train_f0p=%d", train_r, train_c, reg_DFE_RES_1_0, cdr.opt_phase_offset,train_phase_os, cdr.ini_level,cdr.ini_f0p,train.level,cdr.train_f0p );
        //
		//DBG_Printf("\r\n opt=%d f0p=%d level=%d train_saturated=%d ", cdr.opt_phase_offset, cdr.train_f0p, train.level, train_saturated); 
		//DBG_Printf("dfe: %d %d, %d %d %d %d %d - %d %d ", train.f0a, train.f0, train.f1, train.f2, train.f3, train.f4, train.f5, train.eo, train.eye_check_pass); 
		#endif
	
		//reg_MCU_DEBUG6_LANE_7_0 = 0x10;
		train.phase_offset_data = cdr.ini_phase_offset;
		phase_control_func();
		//reg_MCU_DEBUG6_LANE_7_0 = 0x20;
		dfe_adaptation(); 
		//reg_MCU_DEBUG6_LANE_7_0 = 0x30;

		if (tag_SAME_SET_NO_UPDATE || cdr.ini_level > train.level) //tag_SAME_SET_NO_UPDATE=1
		{
			train.level = cdr.ini_level;
		}
		#if (_DBG_PHASE_TRAIN)
		//DBG_Printf("\r\n ---> opt=%d f0p=%d level=%d train_saturated=%d ", cdr.opt_phase_offset, cdr.train_f0p, train.level, train_saturated); 
		//DBG_Printf("dfe: %d %d, %d %d %d %d %d - %d %d ", train.f0a, train.f0, train.f1, train.f2, train.f3, train.f4, train.f5, train.eo, train.eye_check_pass); 
		#endif
	}	
	#else
	if ((!tag_CDR_MIDPOINT_EN || !tag_CDR_EYE_WIDTH_EN) && (tag_SAME_SET_NO_UPDATE || cdr.opt_level > train.level)) //tag_CDR_MIDPOINT_EN=1
	{
		train.level = cdr.opt_level;
	}
	#endif
	
	#if (_DBG_PHASE_TRAIN)
	//DBG_Printf(" Final: phase_offset_data=%d, opt_phase_offset=%d, phase_offset_esm=%d", train.phase_offset_data,cdr.opt_phase_offset, train.phase_offset_esm );
	#endif	
}

/****************************************
 * calculate f0p
 * Inputs: 
 *      train.f0
 *      train.f0a
 * Outputs:
 *      cdr.train_f0p                                              1
 * 	    cdr.train_f0p = train.eye_check_pass * ((train.eo * tag_CDR_F0P_EO_BASED) +
 *			              (f0_minus_abs_fn1 * !tag_CDR_F0P_EO_BASED));			
*****************************************/
void calculatef0p(void)
{
	#if (tag_CDR_F0P_EO_BASED==0) 
	int	f0_minus_abs_fn1;// = train.f0 - abs(train.f0a);
    //DBG_PS("\r\n+++(calculatef0p)");
	if(train.f0 >= train.f0a)
	  f0_minus_abs_fn1 = train.f0a;
	else
	  f0_minus_abs_fn1 = (train.f0<<1) - train.f0a;
	f0_minus_abs_fn1 = clamp(f0_minus_abs_fn1, tag_DFE_F0_MAX, tag_DFE_F0_MIN);
	#endif
	
    if(train.eye_check_pass) {
		#if (tag_CDR_F0P_EO_BASED==1) 
		cdr.train_f0p = train.eo;
		#else
		cdr.train_f0p = f0_minus_abs_fn1;		
		#endif	
	}
	else cdr.train_f0p = 0;		

	//DBG_Printf(" F0P = %d", cdr.train_f0p);  
}


/****************************************
 * Advanced Clock Alignment Start
 * Inputs: 
 * Outputs:
*****************************************/
void advanced_clk_align(void) {
	int16_t f1_avg;
	uint16_t clock_align_run1_index;
	int16_t clk_sum, clk_step;

	#if (_DBG_PHASE_TRAIN)
    DBG_PS("\r\n+++(advanced_clk_align)");
	#endif

	if(BYPASS_DELAY>0) return;
	
	f1_avg = 0;
	clock_align_run1_index = 0;
	
	do {
		dfe_adaptation();
		f1_avg += train.f1;
		#if (_DBG_PHASE_TRAIN)
		//DBG_Printf("  f1_avg = %d", f1_avg);  
		#endif
	} while (clock_align_run1_index++<(1<<tag_CLOCK_ALIGN_RUN1_NUM));
	
	#if (_DBG_PHASE_TRAIN)
	//DBG_Printf("  f1_avg = %d -- > ", f1_avg);  
	#endif
	//f1_avg = f1_avg/tag_CLOCK_ALIGN_RUN1_NUM;
	f1_avg = f1_avg>>tag_CLOCK_ALIGN_RUN1_NUM;
	#if (_DBG_PHASE_TRAIN)
	//DBG_Printf("%d", f1_avg);  
	#endif
	
	ph_control_mode = 0;
	cdr.min_phase_os = (ph_control_mode == 0 || ph_control_mode == 1)? tag_CDR_MIN_PHASE_OS_MODE01:tag_CDR_MIN_PHASE_OS_MODE23;
	cdr.max_phase_os = (ph_control_mode == 0 || ph_control_mode == 1)? tag_CDR_MAX_PHASE_OS_MODE01:tag_CDR_MAX_PHASE_OS_MODE23;
	//train.phase_offset_data = 0; //improve to reduce training time
	adapted_phase = clamp( train.phase_offset_data, cdr.max_phase_os, cdr.min_phase_os);
	train.phase_offset_esm = 0;
	phase_control_func();
	
	#if _DEBUG
	print_ph_ctrl_status();
	#endif
	
	clock_align_run1_index = 0;
	clk_sum = 0; clk_step = 0;
	do {
		dfe_adaptation();
		
		//adapted_phase -= (train.f1<f1_avg)? +1: -1;
		if(train.f1<f1_avg) 
			clk_sum--;
		else clk_sum++;	
		
		if( clk_sum > 0)
			clk_step = clk_sum>>tag_CLOCK_ALIGN_PHASE_STEP_SIZE2;	 ////(1,1/2,1/4,1/8,1/16,1/32,1/64,1/128)
		else 
			clk_step = -(~(clk_sum)>>tag_CLOCK_ALIGN_PHASE_STEP_SIZE2);
			
		if(clk_step!=0)  {
			adapted_phase = adapted_phase + clk_step;
			train.phase_offset_data = adapted_phase;
			train.phase_offset_data = clamp( train.phase_offset_data, cdr.max_phase_os, cdr.min_phase_os);
			phase_control_func();
			clk_sum = 0;
		}
	#if (_DBG_PHASE_TRAIN)
	//DBG_Printf(" %d", clock_align_run1_index);  
	#endif
		
	} while( clock_align_run1_index++ < tag_CLOCK_ALIGN_RUN2_NUM);
	
	
	//add in one more loop for gear control
	clock_align_run1_index = 0;
	clk_sum = 0; clk_step = 0;
	do {
		dfe_adaptation();
		
		//adapted_phase -= (train.f1<f1_avg)? +1: -1;
		if(train.f1<f1_avg) 
			clk_sum--;
		else clk_sum++;	
		
		if( clk_sum > 0)
			clk_step = clk_sum>>tag_CLOCK_ALIGN_PHASE_STEP_SIZE3;	 ////(1,1/2,1/4,1/8,1/16,1/32,1/64,1/128)
		else 
			clk_step = -(~(clk_sum)>>tag_CLOCK_ALIGN_PHASE_STEP_SIZE3);
			
		if(clk_step!=0)  {
			adapted_phase = adapted_phase + clk_step;
			train.phase_offset_data = adapted_phase;
			train.phase_offset_data = clamp( train.phase_offset_data, cdr.max_phase_os, cdr.min_phase_os);
			phase_control_func();
			clk_sum = 0;
		}
	#if (_DBG_PHASE_TRAIN)
	//DBG_Printf(" %d", clock_align_run1_index);  
	#endif
		
	} while( clock_align_run1_index++ < tag_CLOCK_ALIGN_RUN3_NUM);
	
	
	cdr.advanced_clock_align_converged = abs(train.f1 - f1_avg) <= 1;
	#if (_DBG_PHASE_TRAIN)
    //DBG_PS("\r\n---(advanced_clk_align)");
	#endif
	
} 

#if _DEBUG || _DBG_TRXTRAIN
void print_ph_ctrl_status(void) {
	Printf("\r\n ----- slpr=(%d,", adapt_data_en);
	Printf("%d)", adapt_slicer_en);
	Printf(" ph_control_mode=%d", ph_control_mode);
	Printf(" eom_en_sde(%d,",EOM_EN_S);
	Printf("%d,",EOM_EN_D);
	Printf("%d) ----",EOM_EN_E);
}
#endif

