/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file phase_adaptation.c
* \purpose Phase adaptation functions
* \History
*	5/29/2019 Xunzhi Wang		Add EOM_clock_analog_align
*/
#define _DEBUG  _DBG_EOM//_DBG_PHASE_ADAPT
#include "common.h"
#include "driver.h"

#ifdef USE_BANKING
#pragma codeseg BANK1
#pragma constseg BANK1
#endif

// RXSPEED_DIV_LANE used to be RX_SPEED_DIV_LANE
void EOM_clock_analog_align(void) BANKING_CTRL 
{
#ifdef SUPPORT_EOM
	uint8_t dec_num = 1;
    uint16_t i;
	uint16_t total_cnt = 2000;//1080;//540;
	int16_t ph_os_tmp = 0;

	#if _DEBUG
	DBG_Printf("\r\n(EOM_clock_analog_align)"); 	
	#endif
	lnx_EOM_PHASE_UI_ALIGN_FAILED_LANE = _EXIT_SUCCESS;
	drv_ESM_VOLTAGE = 0;//get_ec_voltage();
	
	ph_os_tmp = (int16_t)reg_RX_EOM_PI_CAL_RESULT_RD_LANE_10_4;
    ph_os_tmp = ph_os_tmp << 4; 
    ph_os_tmp = ph_os_tmp | (int16_t)reg_RX_EOM_PI_CAL_RESULT_RD_LANE_3_0;
	reg_RX_EOM_PI_CAL_RESULT_EXT_LANE_10_5 = (uint16_t)ph_os_tmp >> 5;
    reg_RX_EOM_PI_CAL_RESULT_EXT_LANE_4_0 = (uint16_t)ph_os_tmp & 0x1f;

	reg_RX_EOM_PI_CAL_INDV_EXT_EN_LANE = 1;
	
	switch(reg_RXSPEED_DIV_LANE_2_0 & 0x3){
        case 0x0:  dec_num = 1; break;
        case 0x1:  dec_num = 2; break;
        case 0x2:  dec_num = 4; break;
        case 0x3:  dec_num = 8; break;
    }
    if(reg_RXSPEED_DIV_LANE_2_0 & 0x4) dec_num <<= 1;	
	#if _DEBUG
	DBG_Printf("\r\ndec(%u)",dec_num); 	
	#endif
	do {
		cdr_dfe_scheme(cds_table[CDS_EN_EYECHECK]);
		//check_eye_check_pass(0);
		if(cds112.f.eye_check_pass) {
		//if(cds_eye_check_pass) {
#if 0
			// 100ms
			for(i=0;i<2;i++){
				timeout_start(50000);
				while((wtag=0x47)&&!timeout);
			}
			cdr_dfe_scheme(cds_table[CDS_EN_EYECHECK]);// check twice
#endif
			if(cds112.f.eye_check_pass){
				#if _DEBUG || _DBG_PHASE_TRAIN
			  	DBG_Printf(" *(%d)", total_cnt);
				#endif
				break;
			}else{
				#if _DEBUG || _DBG_PHASE_TRAIN
				DBG_Printf(" !!!!!(%d)", total_cnt);
				#endif
			}
		}
		for(i = 0; i < dec_num; ++ i) {		
			//move_eom_phase(-128); //move 2UI; 180'
			//move_eom_phase(128); //move 2UI; 180'
			//move_eom_phase(64);
if(lnx_ESM_DEBUG_LANE_15_0)
move_eom_phase(1<<(lnx_ESM_DEBUG_LANE_15_0-1));
else
move_eom_phase(16);

		}
		
	} while((wtag=0x48)&&total_cnt-->0);

	//lnx_EOM_PHASE_UI_ALIGN_FAILED_LANE = cds_eye_check_pass==1? _EXIT_SUCCESS:_EXIT_FAIL;
	lnx_EOM_PHASE_UI_ALIGN_FAILED_LANE = cds112.f.eye_check_pass==1? _EXIT_SUCCESS:_EXIT_FAIL;
	
	if(1){//reg_RX_SPEED_DIV_LANE_2_0>=0x6){
		int16_t width = 0;// must be signed
		if(cds112.f.eye_check_pass==1){
			// find lowest bound
			for(i = 1; i < 2049; ++ i){
				move_eom_phase(-1);
				cdr_dfe_scheme(cds_table[CDS_EN_EYECHECK]);  
				if(!cds112.f.eye_check_pass)
					break;
			}
			width = i;
#if _DEBUG || _DBG_PHASE_TRAIN
			DBG_Printf("-----\r\n");
#endif
			move_eom_phase(i);// move back
			#if 0
			for(i = 1; i < width; ++ i){
				move_eom_phase(1);
				cdr_dfe_scheme(cds_table[CDS_EN_EYECHECK]);
			}
			#endif
			// find highest bound
			for(i = 1; i < 2049; ++ i){
				move_eom_phase(1);
				cdr_dfe_scheme(cds_table[CDS_EN_EYECHECK]);
				if(!cds112.f.eye_check_pass)
					break;
			}
			width += i+1;
			
			move_eom_phase(-width/2);
			#if 0
			for(i = 1; i < width/2; ++ i){
				move_eom_phase(-1);
				cdr_dfe_scheme(cds_table[CDS_EN_EYECHECK]);
			}
			#endif

			lnx_ESM_ESTIMATED_WIDTH_LANE_15_0 = width;
#if _DEBUG || _DBG_PHASE_TRAIN			
			ph_os_tmp = (int16_t)reg_RX_EOM_PI_CAL_RESULT_RD_LANE_10_4;
			ph_os_tmp = ph_os_tmp << 4; 
			ph_os_tmp = ph_os_tmp | (int16_t)reg_RX_EOM_PI_CAL_RESULT_RD_LANE_3_0;
			DBG_Printf("width:%u center:%d\r\n",width,ph_os_tmp);
#endif

			cdr_dfe_scheme(cds_table[CDS_EN_EYECHECK]);
			lnx_EOM_PHASE_UI_ALIGN_FAILED_LANE = cds112.f.eye_check_pass==1? _EXIT_SUCCESS:_EXIT_FAIL;
		}
#if 0	
		// Test
		move_eom_phase(-width/2);
		for(i=0;i<width;i++){
			move_eom_phase(1);
			cdr_dfe_scheme(cds_table[CDS_EN_EYECHECK]);
		}
		move_eom_phase(-width/2);
#endif
	}
#if _DEBUG
// Check 3 more times to test stability
if(!lnx_EOM_PHASE_UI_ALIGN_FAILED_LANE){
	uint8_t count = 0;
	for(count=0;count<3;count++){
		for(i=0;i<20;i++){// 100ms
			timeout_start(5000);
			while((wtag=0x49)&&!timeout);
		}	
		cdr_dfe_scheme(cds_table[CDS_EN_EYECHECK]);
	}
	lnx_EOM_PHASE_UI_ALIGN_FAILED_LANE = cds112.f.eye_check_pass==1? _EXIT_SUCCESS:_EXIT_FAIL;
}
#endif

#if _DEBUG || _DBG_PHASE_TRAIN	
	if(lnx_EOM_PHASE_UI_ALIGN_FAILED_LANE == _EXIT_FAIL) {
		DBG_Printf("@");
	}
#endif	
#endif

}
#ifdef SUPPORT_CTLE_ADAPT
// All read only for FW
#define tag_CTLE_EN (lnx_TRAIN_DEBUG0_LANE_7_0&0x1)
#define tag_CTLE_CONFIG_EN (lnx_TRAIN_DEBUG0_LANE_7_0>>1&0x1)
#define tag_CTLE_STEP (tag_CTLE_CONFIG_EN?lnx_CTLE_DEBUG0_LANE_7_0:1)
#define tag_CTLE_THRES (tag_CTLE_CONFIG_EN?min_ram(lnx_CTLE_DEBUG1_LANE_7_0,127):64)
#define tag_CTLE_TIMER (tag_CTLE_CONFIG_EN?lnx_CTLE_DEBUG2_LANE_7_0:50)

void CTLE_Adaptation_Init(void) BANKING_CTRL
{
	ctle_vote = 0;
	ctle_adaptation_running = 0;
}

void CTLE_Adaptation(void) BANKING_CTRL
{
if(tag_CTLE_EN && reg_DFE_ADAPT_CONT_LANE && lnx_TRAIN_DONE_LANE){
	uint16_t i = 0;
	int8_t flag = 0;
	uint8_t ctle_tune = 0;

	if(!timeout2_check(CTLE_TIMER))
		return;
	
	ctle_adaptation_running = 1;// ctle task starts
	timer2_start(CTLE_TIMER);
	// Disable cont for cds call
	// As cds_call is ignored, set_dfe_cont would cause issue after mcu_reset.
	//set_dfe_cont(0);
	// Now dfe_adaptation will only call cds_save for ctle. Ignore cds_call.
	//0x0900: dfe_fine_en+dfe_adapt_en
	cds_call = 0x48;//0xC3DF48;//CDS_EN_PHASETRAIN2;//0x0;//0x0900;
	lnx_UART_EN_LANE = 0;
	//cdr_dfe_scheme(cds_call);
	dfe_adaptation();
	lnx_UART_EN_LANE = 1;
	lnx_TRAIN_F0A_LANE_7_0 = train.f0a;
	if(train.f0a<opt.f0a-tag_CTLE_STEP)
		ctle_vote++;
	else if(train.f0a>opt.f0a+tag_CTLE_STEP)
		ctle_vote--;
	ctle_tune = get_ctle_tune();
	if(ctle_tune<16){
		//if(((reg_CTLE_RL2_SEL_G_P1_LANE_3_0 == 0)||(reg_CTLE_CURRENT2_SEL_G_P1_LANE_3_0 == 0))&&(ctle_vote == -1))
		if(ctle_tune==0 && ctle_vote == -1)
			ctle_vote = 0;
		else if ((ctle_tune==15)&&(ctle_vote == 1))
			ctle_vote = 0;
		if(abs(ctle_vote)==tag_CTLE_THRES){
		//if(abs16(ctle_vote)==tag_CTLE_THRES){
			flag = (int8_t)ctle_vote>0?1:-1;		
			set_ctle_tune(ctle_tune+flag);
			ctle_vote = 0;
		}
	}
	lnx_TRAIN_DEBUG1_LANE_7_0 = opt.f0a; 
	//set_dfe_cont(1);
	timer2_stop(CTLE_TIMER);
	ctle_adaptation_running = 0;
	timeout2_start(CTLE_TIMER,(uint32_t)tag_CTLE_TIMER*1000L);
}
}
#endif
