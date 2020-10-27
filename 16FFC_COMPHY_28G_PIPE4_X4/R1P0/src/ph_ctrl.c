#include "common.h"

#define tag_ADAPT_DATA_EN       adapt_data_en   //lnx_ADAPT_DATA_EN_LANE_7_0
#define tag_ADAPT_SLICER_EN     adapt_slicer_en //lnx_ADAPT_SLICER_EN_LANE_7_0

#define ph_mode reg_MCU_DEBUGB_LANE_7_0     // TODO
#define CAL_ALIGN90_REF lnx_CAL_PHASE_LANE_7_0
#define CAL_EOM_DPHER   lnx_CAL_EOM_DPHER_LANE_7_0
#define train_ph_dat    train.phase_offset_data
#define tag_CDR_HALF_UI_PI_CODE half_ui_code // from spdchg

// PHASE CTRL FUNCTIONS
/* **************************************************
 * SET_PH_MODE
 *      set phase control mode
 * Args:
 *      mode 0/1/2/3
 * Inputs:
 *      tag_ADAPT_DATA_EN
 *      tag_ADAPT_SLICER_EN
 *      tag_EOM_DRIVE_DATA_EN_MODE1
 *      tag_EOM_DRIVE_DATA_EN_MODE2
 * Outputs:
 *      reg_EOM_EN_D_LANE
 *      reg_EOM_EN_S_LANE
 *      reg_EOM_EN_E_LANE
 */
void set_ph_mode(void)
{
    ph_mode = ph_control_mode;
    switch (ph_control_mode)
    {
        case 0:
            reg_EOM_EN_D_LANE = 0; 
            reg_EOM_EN_S_LANE = 0; 
            reg_EOM_EN_E_LANE = 0;
            break;
        case 1:
            reg_EOM_EN_D_LANE = tag_ADAPT_DATA_EN ? 1: tag_EOM_DRIVE_DATA_EN_MODE1; 
            reg_EOM_EN_S_LANE = tag_ADAPT_SLICER_EN ? 1: tag_EOM_DRIVE_DATA_EN_MODE1; 
            reg_EOM_EN_E_LANE = 0;
            break;
        case 2:
            reg_EOM_EN_D_LANE = tag_ADAPT_DATA_EN ? 1: tag_EOM_DRIVE_DATA_EN_MODE2; 
            reg_EOM_EN_S_LANE = tag_ADAPT_SLICER_EN ? 1: tag_EOM_DRIVE_DATA_EN_MODE2; 
            reg_EOM_EN_E_LANE = 0;      
            break;
        case 3:
            reg_EOM_EN_D_LANE = 0; 
            reg_EOM_EN_S_LANE = 0; 
            reg_EOM_EN_E_LANE = 1; 
            break;
        default: break;
    }
    //set_edge_dly();
}

#ifdef SUPPORT_NEW_CDS

//#define ph_dat reg_MCU_DEBUG9_LANE_7_0      // TODO
//#define ph_esm reg_MCU_DEBUGA_LANE_7_0      // TODO

void phase_control_func(void) { }
void phase_control_func_0(int8_t ph_dat, int8_t ph_esm) { }

/* **************************************************
 * SET_PH_DAT
 *      set data phase offset
 * Args:
 *      ph_dat
 * Inputs:
 *      ph_mode
 *      CAL_ALIGN90_REF
 *      CAL_EOM_DPHER
 */
void set_ph_dat(int8_t ph_dat)
{
    uint8_t ph_align90_ref;
    uint16_t ph_eom_dpher;
    //ph_dat = phase;
	cur_phase_offset_data = ph_dat;
	
    switch(ph_control_mode)
    {
        case 0:
            ph_align90_ref = CAL_ALIGN90_REF - (int8_t)ph_dat;
            cdr_phase_update(ph_align90_ref);
            break;
        case 1:
            ph_align90_ref = CAL_ALIGN90_REF - (int8_t)ph_dat;
            cdr_phase_update(ph_align90_ref);
            break;
        case 2:
            ph_eom_dpher = CAL_EOM_DPHER - (int8_t)ph_dat - (int16_t)reg_EOM_DPHER_LANE_6_0;
            move_eom_phase(ph_eom_dpher);
            break;
        case 3:
            ph_eom_dpher = CAL_EOM_DPHER + (int8_t)ph_dat + tag_CDR_HALF_UI_PI_CODE - (int16_t)reg_EOM_DPHER_LANE_6_0;
            move_eom_phase(ph_eom_dpher);
            break;
    }

    set_edge_dly(ph_dat, cur_phase_offset_esm);
}

/* **************************************************
 * SET_PH_ESM
 *      set esm phase offset
 * Args:
 *      ph_esm
 * Inputs:
 *      ph_mode
 *      CAL_ALIGN90_REF
 *      CAL_EOM_DPHER
 */
void set_ph_esm(int8_t ph_esm)
{
    uint8_t ph_align90_ref, ph_dat; 
    uint16_t ph_eom_dpher;
    //ph_esm = phase;
	ph_dat = cur_phase_offset_data;
	cur_phase_offset_esm = ph_esm;

    switch(ph_control_mode)
    {
        case 0:
            ph_align90_ref = CAL_ALIGN90_REF - (int8_t)ph_dat - (int8_t)ph_esm;
            cdr_phase_update(ph_align90_ref);
            break;
        case 1:
            ph_eom_dpher = CAL_EOM_DPHER - (int8_t)ph_esm - (int16_t)reg_EOM_DPHER_LANE_6_0;
            move_eom_phase(ph_eom_dpher);
            break;
        case 2:
            ph_eom_dpher = CAL_EOM_DPHER - (int8_t)ph_dat - (int8_t)ph_esm - (int16_t)reg_EOM_DPHER_LANE_6_0;
            move_eom_phase(ph_eom_dpher);
            break;
        case 3:
            ph_eom_dpher = CAL_EOM_DPHER + (int8_t)ph_dat + (int8_t)ph_esm + tag_CDR_HALF_UI_PI_CODE - (int16_t)reg_EOM_DPHER_LANE_6_0;
            move_eom_phase(ph_eom_dpher);
            break;
    }

    set_edge_dly(ph_dat, ph_esm);
}

#else

void phase_control_func(void) {
	phase_control_func_0(train.phase_offset_data, train.phase_offset_esm);
}

void phase_control_func_0(int8_t ph_dat, int8_t ph_esm) {

	int8_t dat, esm;
	
	if(lnx_FAST_DFE_TIMER_EN_LANE) return;
	
	cur_phase_offset_data = ph_dat;
	cur_phase_offset_esm = ph_esm;
	
 	#if (_DBG_PHASE_TRAIN  || _DBG_RXTRAIN)
	//DBG_Printf("\r\n cal_ph=%d, cal_eom_dpher=%d, ph_dat=%d, ph_esm=%d ",cal_phase,cal_eom_dpher,ph_dat,ph_esm);
	//DBG_Printf(" ph_control_mode=%d ", ph_control_mode);
	#endif
	lnx_DLL_VDDA_TRACKING_ON_LANE = 0; 
	
	if(ph_control_mode==0 ) {			
		#if (tag_CDR_ALIGN90_INC_IS_CLOCK_DELAY==1)	
		dat = cal_phase - ph_dat - ph_esm;
		#else
		dat = cal_phase + ph_dat + ph_esm;
		#endif
		//eom_phase_update( cal_eom_dpher );		
		esm = (int16_t)cal_eom_dpher - (int16_t)reg_EOM_DPHER_LANE_6_0;		
	}
	else if( ph_control_mode==1 ) {		
		if(EOM_EN_D!=EOM_EN_S && do_phase_adapt==0) eom_ui_align();	
		#if (tag_CDR_ALIGN90_INC_IS_CLOCK_DELAY==1)	//1
	    dat = cal_phase - ph_dat;
		#else
	    dat = cal_phase + ph_dat;
		#endif
		
		#if (tag_CDR_EOM_INC_IS_CLOCK_DELAY==1)	
		//eom_phase_update( cal_eom_dpher + ph_esm );	
		esm = (int16_t)(cal_eom_dpher + ph_esm) - (int16_t)reg_EOM_DPHER_LANE_6_0;
		#else
		//eom_phase_update( cal_eom_dpher - ph_esm );	
		esm = (int16_t)(cal_eom_dpher - ph_esm) - (int16_t)reg_EOM_DPHER_LANE_6_0;
		#endif
			
	}
	else if( ph_control_mode==2 ) {
		#if (_DBG_PHASE_ADAPT)
		//DBG_Printf(" cal_ph=%d, ph_dat=%d, ph_esm=%d ",cal_phase,ph_dat,ph_esm);
		//DBG_Printf("\r\n\t\t ++(phase_control_func) ph_control_mode=%d ", ph_control_mode);
		#endif
		
		//if(EOM_EN_D!=EOM_EN_S) eom_ui_align();	
	    dat = cal_phase;
		#if (tag_CDR_EOM_INC_IS_CLOCK_DELAY==1)	
		//eom_phase_update( cal_eom_dpher + ph_dat + ph_esm  );		
		esm =  (int16_t)(cal_eom_dpher + ph_dat + ph_esm) - (int16_t)reg_EOM_DPHER_LANE_6_0;
		#else
		//eom_phase_update( cal_eom_dpher - ph_dat - ph_esm  );		
		esm =  (int16_t)(cal_eom_dpher - ph_dat - ph_esm) - (int16_t)reg_EOM_DPHER_LANE_6_0;
		#endif			
	} 
	else if( ph_control_mode==3 ){				
		//eom_ui_align();	
	    dat = cal_phase;
		#if (tag_CDR_EOM_INC_IS_CLOCK_DELAY==1)	
		//eom_phase_update( cal_eom_dpher - ( tag_CDR_HALF_UI_PI_CODE + ph_dat + ph_esm  ));			
		esm = (int16_t)(cal_eom_dpher -(half_ui_code + ph_dat + ph_esm))- (int16_t)reg_EOM_DPHER_LANE_6_0;
		#else
		//eom_phase_update( cal_eom_dpher + ( tag_CDR_HALF_UI_PI_CODE + ph_dat + ph_esm  ));			
		esm = (int16_t)(cal_eom_dpher +(half_ui_code + ph_dat + ph_esm))- (int16_t)reg_EOM_DPHER_LANE_6_0;
		#endif
	}
	
	if(dat>=64) dat-=64;
	cdr_phase_update(dat);
	if(esm>=70) esm -= 128;
	else if(esm < -70) esm += 128;
	move_eom_phase(esm);
	
	#if tag_USE_SEL_EDGE_DLY==1
	set_edge_dly(ph_dat, ph_esm);
	#endif

	#if (_DBG_RXTRAIN)
	//DBG_Printf(" -- eom_en_d/s/e(%d, %d, %d) ", EOM_EN_D, EOM_EN_S, EOM_EN_E);
	#endif
	
	lnx_DLL_VDDA_TRACKING_ON_LANE = 1; 

}

#endif

/* **************************************************
 * SET_EDGE_DLY
 * Inputs:
 *      ph_mode
 *      ph_dat
 *      ph_esm
 *      sel_sdge_dly_tb2
 *      sel_sdge_dly_tb3
 * Outputs:
 *      reg_SEL_EDGE_DLY_LANE_1_0
 */
// ----- mode 2
// 79 + (data-edge)/128*360 = new phase
//STROBE_Data - STROBE_Edge (UI)     
//MIN (Worst Setup Time)    MAX (Worst Hold Time)   SEL_EDGE_DLY[1:0]
//0(0°)                     0.43 (77.4°)            0
//0.38 (68.4°)              0.73 (131.4°)           1
//0.68 (122.4°)             0.93 (167.4°)           2
//0.88 (158.4°)             1.08 (194.4°)           3
// ----- mode 3
// (eom_dpher offset from cal_eom_dpher)/128*360 = new phase
//STROBE_Data - STROBE_Edge (UI)     
//MIN (Worst Setup Time)       MAX (Worst Hold Time)    SEL_EDGE_DLY[1:0]       USED
//0(0°)                        0.43 (77.4°)             0                       70/360*128
//0.38 (68.4°)                 0.73 (131.4°)            1                       128/360*128
//0.68 (122.4°)                0.93 (167.4°)            2                       162/360*128
//0.88 (158.4°)                1.08 (194.4°)            3                       
__code int8_t sel_sdge_dly_tb2[] = { -3, 17, 30};
__code int8_t sel_sdge_dly_tb3[] = { 25, 45, 58};                               
void set_edge_dly(int8_t ph_dat, int8_t ph_esm)
{
    #if tag_USE_SEL_EDGE_DLY==1
    int8_t eom_ph_os;
    switch(ph_control_mode)
    {
        case 0: 
        case 1: 
            if( reg_ALIGN90_REF_LANE_5_0 > 34 )
                reg_SEL_EDGE_DLY_LANE_1_0 = 0;
            else 
                reg_SEL_EDGE_DLY_LANE_1_0 = 1;  
            break;
        case 2: 
            eom_ph_os = (int8_t)ph_dat + (int8_t)ph_esm;
            if( eom_ph_os < sel_sdge_dly_tb2[0])  reg_SEL_EDGE_DLY_LANE_1_0 = 0;
            else if(eom_ph_os < sel_sdge_dly_tb2[1])  reg_SEL_EDGE_DLY_LANE_1_0 = 1;
            else if(eom_ph_os < sel_sdge_dly_tb2[2])  reg_SEL_EDGE_DLY_LANE_1_0 = 2;
            else  reg_SEL_EDGE_DLY_LANE_1_0 = 3;
            break;
        case 3: 
            eom_ph_os = tag_CDR_HALF_UI_PI_CODE + (int8_t)ph_dat + (int8_t)ph_esm;
            if( eom_ph_os < sel_sdge_dly_tb3[0])  reg_SEL_EDGE_DLY_LANE_1_0 = 0;
            else if(eom_ph_os < sel_sdge_dly_tb3[1])  reg_SEL_EDGE_DLY_LANE_1_0 = 1;
            else if(eom_ph_os < sel_sdge_dly_tb3[2])  reg_SEL_EDGE_DLY_LANE_1_0 = 2;
            else  reg_SEL_EDGE_DLY_LANE_1_0 = 3;
            break;
    }
    #endif
}

/* **************************************************
 * cdr_phase_update
 *      Update align90 phase
 * Args:
 *      align90_ref_tgt
 * Inputs:
 *      reg_ALIGN90_REF_LANE_5_0
 *      tag_CDR_PHASE_MAX
 *      tag_CDR_PHASE_MIN
 *      tag_CDR_OS_PH_JMP_STEP
 * Outputs:
 *      reg_ALIGN90_REF_LANE_5_0
 */
void cdr_phase_update(int8_t new_phase_os)
{
	int8_t ph_os_tmp;
	
	ph_os_tmp = (int8_t)reg_ALIGN90_REF_LANE_5_0;
	new_phase_os = clamp( new_phase_os, tag_CDR_PHASE_MAX, tag_CDR_PHASE_MIN);

 	#if (_DBG_PHASE_TRAIN || _DBG_RXTRAIN)
	//if(ph_os_tmp != new_phase_os)
	//DBG_Printf("\r\n\t\t dat_ph=%d --> %d:",ph_os_tmp, new_phase_os);
	#endif
	
	while( ph_os_tmp != new_phase_os ) 
	{		
        if(ph_os_tmp < (new_phase_os - tag_CDR_OS_PH_JMP_STEP))
            ph_os_tmp += tag_CDR_OS_PH_JMP_STEP;
        else if(ph_os_tmp > (new_phase_os + tag_CDR_OS_PH_JMP_STEP))
            ph_os_tmp -= tag_CDR_OS_PH_JMP_STEP;
        else
            ph_os_tmp = new_phase_os;
		
		reg_ALIGN90_REF_LANE_5_0 = (uint8_t)ph_os_tmp;		
		delay(Tus);

		#if (_DBG_PHASE_TRAIN || _DBG_RXTRAIN)
		//DBG_Printf(" %d,", ph_os_tmp, reg_ALIGN90_REF_LANE_5_0);
		#endif
		
		//phase_lookup_tracking(1);		
		find_align90_lock(); 
	}	
}


/* **************************************************
 * EOM_PHASE_UPDATE
 *      move update_ph code from current phase
 * Args:
 *      eom_dpher_tgt
 * Inputs:
 *      tag_CDR_OS_PH_JMP_STEP
 * Outputs:
 *      reg_ALIGN90_REF_LANE_5_0
 */
void move_eom_phase(int16_t update_ph)
{
    int16_t ph_os_tmp;

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
        
    }       
}



