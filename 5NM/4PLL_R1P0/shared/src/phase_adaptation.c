/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file phase_adaptation.c
* \purpose Phase adaptation functions
* \History
*	5/29/2019 Xunzhi Wang		Add EOM_clock_analog_align
*/
//#define _DEBUG  _DBG_EOM//_DBG_PHASE_ADAPT
#include "common.h"
#include "driver.h"

#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg BANK2
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
	
	ph_os_tmp = (int16_t)reg_RX_EOM_PI_CAL_RESULT_RD_LANE_10_8;
    ph_os_tmp = ph_os_tmp << 8; 
    ph_os_tmp = ph_os_tmp | (int16_t)reg_RX_EOM_PI_CAL_RESULT_RD_LANE_7_0;
	reg_RX_EOM_PI_CAL_RESULT_EXT_LANE_10_8 = (uint8_t)ph_os_tmp >> 8;
    reg_RX_EOM_PI_CAL_RESULT_EXT_LANE_7_0 = (uint8_t)ph_os_tmp;

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
		drv_cdr_dfe_scheme(cds_table[CDS_EN_EYECHECK]);
		//check_eye_check_pass(0);
		if(cds56.f.eye_check_pass) {
		//if(cds_eye_check_pass) {
#if 0
			// 100ms
			for(i=0;i<2;i++){
				timeout_start(50000);
				while(!timeout);
			}
			drv_cdr_dfe_scheme(cds_table[CDS_EN_EYECHECK]);// check twice
#endif
			if(cds56.f.eye_check_pass){
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
		
	} while (total_cnt-->0);

	//lnx_EOM_PHASE_UI_ALIGN_FAILED_LANE = cds_eye_check_pass==1? _EXIT_SUCCESS:_EXIT_FAIL;
	lnx_EOM_PHASE_UI_ALIGN_FAILED_LANE = cds56.f.eye_check_pass==1? _EXIT_SUCCESS:_EXIT_FAIL;
	
	if(cmx_RX_EOM_CAL_EXT_EN==0){//reg_RX_SPEED_DIV_LANE_2_0>=0x6){
		int16_t width = 0;// must be signed
		if(cds56.f.eye_check_pass==1){
			// find lowest bound
			for(i = 1; i < 2049; ++ i){
				move_eom_phase(-1);
				drv_cdr_dfe_scheme(cds_table[CDS_EN_EYECHECK]);  
				if(!cds56.f.eye_check_pass)
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
				drv_cdr_dfe_scheme(cds_table[CDS_EN_EYECHECK]);
			}
			#endif
			// find highest bound
			for(i = 1; i < 2049; ++ i){
				move_eom_phase(1);
				drv_cdr_dfe_scheme(cds_table[CDS_EN_EYECHECK]);
				if(!cds56.f.eye_check_pass)
					break;
			}
			width += i+1;
			
			move_eom_phase(-width/2);
			#if 0
			for(i = 1; i < width/2; ++ i){
				move_eom_phase(-1);
				drv_cdr_dfe_scheme(cds_table[CDS_EN_EYECHECK]);
			}
			#endif

			lnx_ESM_ESTIMATED_WIDTH_LANE_15_0 = width;
#if _DEBUG || _DBG_PHASE_TRAIN			
			ph_os_tmp = (int16_t)reg_RX_EOM_PI_CAL_RESULT_RD_LANE_10_8;
			ph_os_tmp = ph_os_tmp << 8; 
			ph_os_tmp = ph_os_tmp | (int16_t)reg_RX_EOM_PI_CAL_RESULT_RD_LANE_7_0;
			DBG_Printf("width:%u center:%d\r\n",width,ph_os_tmp);
#endif

			drv_cdr_dfe_scheme(cds_table[CDS_EN_EYECHECK]);
			lnx_EOM_PHASE_UI_ALIGN_FAILED_LANE = cds56.f.eye_check_pass==1? _EXIT_SUCCESS:_EXIT_FAIL;
		}
#if 0	
		// Test
		move_eom_phase(-width/2);
		for(i=0;i<width;i++){
			move_eom_phase(1);
			drv_cdr_dfe_scheme(cds_table[CDS_EN_EYECHECK]);
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
			while(!timeout);
		}	
		drv_cdr_dfe_scheme(cds_table[CDS_EN_EYECHECK]);
	}
	lnx_EOM_PHASE_UI_ALIGN_FAILED_LANE = cds56.f.eye_check_pass==1? _EXIT_SUCCESS:_EXIT_FAIL;
}
#endif

#if _DEBUG || _DBG_PHASE_TRAIN	
	if(lnx_EOM_PHASE_UI_ALIGN_FAILED_LANE == _EXIT_FAIL) {
		DBG_Printf("@");
	}
#endif	
#endif

}
