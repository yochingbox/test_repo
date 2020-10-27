#include "common.h"
#include "driver.h"
#define _DEBUG  _DBG_EOM//_DBG_PHASE_ADAPT

void esm_preparation();
void esm_measure();
void esm_exit();
//void set_dfe_cont(bool on);
//void cds_save(uint8_t type);
//void cds_load_f0(uint8_t type);
//void dfe_save();
void dfe_load(uint8_t type) BANKING_CTRL;

typedef enum {
    Savf0a      = 0x00,
    Savf0b      = 0x01,
    Savf0d      = 0x02,
    Savf0d_l    = 0x03,
    Savf0d_r    = 0x04,
    Savf0k      = 0x06,
    Savdfe      = 0x10,
    Saveyechk   = 0x11,
    Savdc       = 0x12
} CDS_sav_t;
void Check_EOM_Stage_fmExt(void)
{
#ifdef SUPPORT_EOM 
	
	esm_preparation();
	esm_measure();
	esm_exit();

#endif   // EOM

}

void esm_preparation() 
{
#ifdef SUPPORT_EOM
	//reg_DFE_ADAPT_CONT_LANE = 0;
	//reg_DFE_START_LANE = 0;
	if(lnx_ESM_EN_LANE==1 && lnx_EOM_READY_LANE==0)
	{
		dfe_backon();
		reg_RX_EOM_TOP_CONT_START_LANE = 0;
		set_dfe_cont(0);
		save_dfe_en = ~reg_DFE_DIS_LANE;
		reg_DFE_DIS_LANE = 0;
		set_dfe_en(1);

		if(lnx_ESM_PATH_SEL_LANE) {
//		    adapt_slicer_en = 1; adapt_data_en = 0;
		    drv_ADAPT_SLICER_EN = 1;
		    drv_ADAPT_DATA_EN = 0;
		}else{
//		    adapt_slicer_en = 0; adapt_data_en = 1;
		    drv_ADAPT_SLICER_EN = 0;
		    drv_ADAPT_DATA_EN = 1;
		}

//reg_RX_EOM_TOP_CONT_START_LANE = 1;
		//if(DFE_DIS_LANE) 
		//    set_dfe_en(1);
		dfe_save();
		reg_EOM_CLK_EN_LANE = 1;

		//eom_align_cal();
		rx_eom_cal_ram(RX_EOM_ON_DEMAND_CAL);

		set_ph_mode(1);

		eom_ui_align();
		
		dfe_save();
		cds_save(Savf0a);

		//eye_check_en = 1;
		eom_ext_mode = 1;
		lnx_EOM_READY_LANE = 1;  //release
		dpher_offset = 0;

		//Set default LPNUM: as Tui_align
		if(!drv_ESM_LPNUM1)
			drv_ESM_LPNUM1 = 0x20;
		if(!drv_ESM_LPNUM0)
			drv_ESM_LPNUM0 = 0x8;

		cur_esm_phase = 0;
		PHY_STATUS = ST_NORMAL; 
	}
#endif
}

void esm_measure()
{
#ifdef SUPPORT_EOM
    int16_t new_esm_ph;
	new_esm_ph = 0;

	if(lnx_ESM_EN_LANE==1 && lnx_EOM_READY_LANE==1 && lnx_EOM_DFE_CALL_LANE==1)
	{	
#if 0
		if(lnx_ESM_PHASE_LANE_9_0_b1 & 0x02) {
			new_esm_ph = 0xfc00 |  (lnx_ESM_PHASE_LANE_9_0_b1<<8) | lnx_ESM_PHASE_LANE_9_0_b0; 
		}
		else {
			new_esm_ph = (lnx_ESM_PHASE_LANE_9_0_b1<<8) | lnx_ESM_PHASE_LANE_9_0_b0;
		}
#endif
		if(lnx_ESM_PHASE_LANE_10_0_b1 & 0x04) {
			new_esm_ph = 0xf800 |  (lnx_ESM_PHASE_LANE_10_0_b1<<8) | lnx_ESM_PHASE_LANE_10_0_b0; 
		}
		else {
			new_esm_ph = (lnx_ESM_PHASE_LANE_10_0_b1<<8) | lnx_ESM_PHASE_LANE_10_0_b0;
		}

//DBG_Printf("%d ", new_esm_ph);
//		set_ph_esm(new_esm_ph);
		move_eom_phase(new_esm_ph - cur_esm_phase);
		cur_esm_phase = new_esm_ph;

		cdr_dfe_scheme(cds_table[CDS_EN_EYECHECK]);
		
		lnx_EOM_DFE_CALL_LANE = 0;
	}
#endif
}

void esm_exit()
{
#ifdef SUPPORT_EOM
	if( eom_ext_mode==1 && lnx_ESM_EN_LANE==0 )
	{
		//eye_check_en = 0;
		lnx_EOM_READY_LANE = 0;
		reg_EOM_CLK_EN_LANE = 0;
		drv_ADAPT_SLICER_EN = 1;
		drv_ADAPT_DATA_EN = 1;

		set_ph_esm(0);
		set_ph_mode(0);
		cds_load_f0(0);

		if(save_dfe_en==0){
			reg_DFE_DIS_LANE = 1;
			set_dfe_en(0);
		}
		set_dfe_cont(1);
		//Call SPD_DFE_INIT
		//if (DFE_DIS_LANE)
		//    set_dfe_en(0)
		//else
		//    if(!RTPA_EN)
	        //         set_dfe_cont(on)
		eom_ext_mode = 0;
	}
#endif
}

#define MAX_EOM_ALIGN_CNT 2000
// RXSPEED_DIV_LANE used to be RX_SPEED_DIV_LANE
void EOM_clock_analog_align(void) // BANKING_CTRL 
{
#ifdef SUPPORT_EOM
	uint8_t dec_num = 1;
    uint16_t i;
	uint16_t total_cnt = MAX_EOM_ALIGN_CNT;//2000;//1080;//540;
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
				while(!timeout);
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
if(lnx_EOM_DEBUG0_LANE_7_0)
move_eom_phase(1<<(lnx_EOM_DEBUG0_LANE_7_0-1));
else
move_eom_phase(16);

		}
		
	} while(total_cnt-->0);

	total_cnt = MAX_EOM_ALIGN_CNT-total_cnt;
	lnx_EOM_DEBUG3_LANE_7_0 = total_cnt>>8&0xff;
	lnx_EOM_DEBUG2_LANE_7_0 = total_cnt&0xff;
	
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
			// offset between calibration center and FW center
			lnx_ESM_DEBUG_LANE_15_0 = i-width/2;
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
			while(!timeout);
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

