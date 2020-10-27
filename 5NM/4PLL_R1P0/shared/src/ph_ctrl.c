#include "common.h"
#include "driver.h"

// PRIVATE FUNCTIONS
void set_edge_dly();


// PHASE CTRL FUNCTIONS
/* **************************************************
 * SET_PH_MODE
 *      set phase control mode
 * Args:
 *      mode 0/1/2/3
 * Inputs:
 *      drv_ADAPT_DATA_EN
 *      drv_ADAPT_SLICER_EN
 *      tag_EOM_DRIVE_DATA_EN_MODE1
 *      tag_EOM_DRIVE_DATA_EN_MODE2
 * Outputs:
 *      reg_EOM_EN_D_LANE
 *      reg_EOM_EN_S_LANE
 *      reg_EOM_EN_E_LANE
 */
void set_ph_mode(uint8_t mode)
{
    cur_ph_mode = mode;
    switch (cur_ph_mode)
    {
        case 0:
            reg_EOM_EN_D_LANE = 0; 
            reg_EOM_EN_S_LANE = 0; 
            reg_EOM_EN_E_LANE = 0;
            break;
        case 1:
            reg_EOM_EN_D_LANE = drv_ADAPT_DATA_EN ? 1: tag_EOM_DRIVE_DATA_EN_MODE1; 
            reg_EOM_EN_S_LANE = drv_ADAPT_SLICER_EN ? 1: tag_EOM_DRIVE_DATA_EN_MODE1; 
            reg_EOM_EN_E_LANE = 0;
            break;
        case 2:
            reg_EOM_EN_D_LANE = drv_ADAPT_DATA_EN ? 1: tag_EOM_DRIVE_DATA_EN_MODE2; 
            reg_EOM_EN_S_LANE = drv_ADAPT_SLICER_EN ? 1: tag_EOM_DRIVE_DATA_EN_MODE2; 
            reg_EOM_EN_E_LANE = 0;      
            break;
        case 3:
            reg_EOM_EN_D_LANE = 0; 
            reg_EOM_EN_S_LANE = 0; 
            reg_EOM_EN_E_LANE = 1; 
            break;
        default: break;
    }
    set_edge_dly();
}

/* **************************************************
 * SET_PH_DAT
 *      set data phase offset
 * Args:
 *      phase
 * Inputs:
 *      cur_ph_mode
 *      CAL_ALIGN90_REF
 *      CAL_EOM_DPHER
 */
void set_ph_dat(int8_t phase)
{
    int8_t ph_align90_ref;
    uint8_t ph_align90_ref_sat;
    uint16_t ph_eom_dpher;
    int16_t cur_eom_dpher;

    cur_ph_dat = phase;
    //DBG_Printf("\n\rSET PH DAT %d", cur_ph_dat);

    cur_eom_dpher = (int16_t)reg_RX_EOM_PI_CAL_RESULT_RD_LANE_10_8;
    cur_eom_dpher = cur_eom_dpher << 8; 
    cur_eom_dpher = cur_eom_dpher | (int16_t)reg_RX_EOM_PI_CAL_RESULT_RD_LANE_7_0;

#ifdef _56G_7NM	
	if(cmx_BYPASS_PH_CTRL) return;
#endif
	
    switch(cur_ph_mode)
    {
        case 0:
            ph_align90_ref = CAL_ALIGN90_REF - cur_ph_dat;
            ph_align90_ref = (ph_align90_ref > tag_CDR_PHASE_MAX) ? tag_CDR_PHASE_MAX : ph_align90_ref;
            ph_align90_ref = (ph_align90_ref < tag_CDR_PHASE_MIN) ? tag_CDR_PHASE_MIN : ph_align90_ref;
            ph_align90_ref_sat = (uint8_t)ph_align90_ref;
            //reg_MCU_DEBUG6_LANE_7_0 = ph_align90_ref_sat;
            align90_phase_update(ph_align90_ref_sat);
            break;
        case 1:
            ph_align90_ref = CAL_ALIGN90_REF - cur_ph_dat;
            ph_align90_ref = (ph_align90_ref > tag_CDR_PHASE_MAX) ? tag_CDR_PHASE_MAX : ph_align90_ref;
            ph_align90_ref = (ph_align90_ref < tag_CDR_PHASE_MIN) ? tag_CDR_PHASE_MIN : ph_align90_ref;
            ph_align90_ref_sat = (uint8_t)ph_align90_ref;
            align90_phase_update(ph_align90_ref_sat);
            break;
        case 2:
            ph_eom_dpher = CAL_EOM_DPHER - (int16_t)cur_ph_dat - (int16_t)cur_eom_dpher;
            move_eom_phase(ph_eom_dpher);
            break;
        case 3:
            ph_eom_dpher = CAL_EOM_DPHER + (int16_t)cur_ph_dat + tag_CDR_HALF_UI_PI_CODE - (int16_t)cur_eom_dpher;
            move_eom_phase(ph_eom_dpher);
            break;
    }

    set_edge_dly();
}

/* **************************************************
 * SET_PH_ESM
 *      set esm phase offset
 * Args:
 *      phase
 * Inputs:
 *      cur_ph_mode
 *      CAL_ALIGN90_REF
 *      CAL_EOM_DPHER
 */
void set_ph_esm(int8_t phase)
{
    uint8_t ph_align90_ref;
    uint16_t ph_eom_dpher;
    int16_t cur_eom_dpher;

    cur_ph_esm = phase;
    cur_ph_mode = 1;

    cur_eom_dpher = (int16_t)reg_RX_EOM_PI_CAL_RESULT_RD_LANE_10_8;
    cur_eom_dpher = cur_eom_dpher << 8; 
    cur_eom_dpher = cur_eom_dpher | (int16_t)reg_RX_EOM_PI_CAL_RESULT_RD_LANE_7_0;

    switch(cur_ph_mode)
    {
        case 0:
            ph_align90_ref = CAL_ALIGN90_REF - (int8_t)cur_ph_dat - (int8_t)cur_ph_esm;
            align90_phase_update(ph_align90_ref);
            break;
        case 1:
        	ph_eom_dpher = (int8_t)cur_ph_esm - dpher_offset;
	        dpher_offset += (int16_t)ph_eom_dpher;
            move_eom_phase(ph_eom_dpher);
            break;
        case 2:
            ph_eom_dpher = CAL_EOM_DPHER - (int8_t)cur_ph_dat - (int8_t)cur_ph_esm - (int16_t)cur_eom_dpher;
            move_eom_phase(ph_eom_dpher);
            break;
        case 3:
            ph_eom_dpher = CAL_EOM_DPHER + (int8_t)cur_ph_dat + (int8_t)cur_ph_esm + tag_CDR_HALF_UI_PI_CODE - (int16_t)cur_eom_dpher;
            move_eom_phase(ph_eom_dpher);
            break;
    }

    set_edge_dly();
}


/* **************************************************
 * SET_EDGE_DLY
 * Inputs:
 *      cur_ph_mode
 *      cur_ph_dat
 *      cur_ph_esm
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
__code int8_t sel_sdge_dly_tb1[] = { 25, 79};
__code int8_t sel_sdge_dly_tb2[] = { -3, 17, 30};
__code int8_t sel_sdge_dly_tb3[] = { 25, 45, 58};                               


void set_edge_dly()
{
    #if tag_USE_SEL_EDGE_DLY==1
    int8_t eom_ph_os;

    uint8_t align90_ref_cur;

    align90_ref_cur = reg_RX_ALIGN90_CAL_SETTING_LANE_7_0 & 0x7f; //[6:0] is reference code

    switch(cur_ph_mode)
    {
        case 0: 
        case 1: 
          if(align90_ref_cur < sel_sdge_dly_tb1[0]) reg_SEL_EDGE_DLY_LANE_1_0 = 2;
          else if(align90_ref_cur < sel_sdge_dly_tb1[1]) reg_SEL_EDGE_DLY_LANE_1_0 = 1;
          else reg_SEL_EDGE_DLY_LANE_1_0 = 0;
          break;
        case 2: 
            eom_ph_os = (int8_t)cur_ph_dat + (int8_t)cur_ph_esm;
            if( eom_ph_os < sel_sdge_dly_tb2[0])  reg_SEL_EDGE_DLY_LANE_1_0 = 0;
            else if(eom_ph_os < sel_sdge_dly_tb2[1])  reg_SEL_EDGE_DLY_LANE_1_0 = 1;
            else if(eom_ph_os < sel_sdge_dly_tb2[2])  reg_SEL_EDGE_DLY_LANE_1_0 = 2;
            else  reg_SEL_EDGE_DLY_LANE_1_0 = 3;
            break;
        case 3: 
            eom_ph_os = tag_CDR_HALF_UI_PI_CODE + (int8_t)cur_ph_dat + (int8_t)cur_ph_esm;
            if( eom_ph_os < sel_sdge_dly_tb3[0])  reg_SEL_EDGE_DLY_LANE_1_0 = 0;
            else if(eom_ph_os < sel_sdge_dly_tb3[1])  reg_SEL_EDGE_DLY_LANE_1_0 = 1;
            else if(eom_ph_os < sel_sdge_dly_tb3[2])  reg_SEL_EDGE_DLY_LANE_1_0 = 2;
            else  reg_SEL_EDGE_DLY_LANE_1_0 = 3;
            break;
    }
    #endif
}


/* **************************************************
 * ALIGN90_PHASE_UPDATE
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
void align90_phase_update(uint8_t align90_ref_tgt)
{

    uint8_t align90_ref_cur;
    uint8_t save_RX_E2C_DCC_CAL_BYPASS_EN, save_RX_DLL_CAL_BYPASS_EN;
    uint8_t save_RX_PI_DCC_CAL_BYPASS_EN, save_RX_DATA_DCC_CAL_BYPASS_EN;
    uint8_t save_RX_EDGE_DCC_CAL_BYPASS_EN;


    reg_MCU_DEBUG8_LANE_7_0 = 20;	
    align90_ref_cur = reg_RX_ALIGN90_CAL_SETTING_LANE_7_0 & 0x7f; //[6:0] is reference code

    align90_ref_tgt = (align90_ref_tgt > tag_CDR_PHASE_MAX) ? tag_CDR_PHASE_MAX : align90_ref_tgt;
    align90_ref_tgt = (align90_ref_tgt < tag_CDR_PHASE_MIN) ? tag_CDR_PHASE_MIN : align90_ref_tgt;
    if(	align90_ref_cur == align90_ref_tgt ) return;


   //save bypass_en registers
    save_RX_E2C_DCC_CAL_BYPASS_EN = reg_RX_E2C_DCC_CAL_BYPASS_EN_LANE;
    save_RX_DLL_CAL_BYPASS_EN = reg_RX_DLL_CAL_BYPASS_EN_LANE;
    save_RX_PI_DCC_CAL_BYPASS_EN = reg_RX_PI_DCC_CAL_BYPASS_EN_LANE;
    save_RX_DATA_DCC_CAL_BYPASS_EN = reg_RX_DATA_DCC_CAL_BYPASS_EN_LANE;
    save_RX_EDGE_DCC_CAL_BYPASS_EN = reg_RX_EDGE_DCC_CAL_BYPASS_EN_LANE;     

	if(reg_RX_CLK_TOP_CONT_START_LANE) {
		delay(Tus);
		reg_RX_CLK_TOP_CONT_START_LANE = 0;
		delay(Tus);
		while(!reg_RX_CLK_TOP_CONT_DONE_LANE);
	}

    reg_RX_E2C_DCC_CAL_BYPASS_EN_LANE = 1;
    reg_RX_DLL_CAL_BYPASS_EN_LANE = 1;
    reg_RX_PI_DCC_CAL_BYPASS_EN_LANE = 1;
    reg_RX_DATA_DCC_CAL_BYPASS_EN_LANE = 1;
    reg_RX_EDGE_DCC_CAL_BYPASS_EN_LANE = 1;

    //align90_ref_cur = reg_ALIGN90_REF_LANE_5_0;
    //align90_ref_cur = reg_RX_ALIGN90_CAL_SETTING_LANE_7_0 & 0x7f; //[6:0] is reference code

    //align90_ref_tgt = (align90_ref_tgt > tag_CDR_PHASE_MAX) ? tag_CDR_PHASE_MAX : align90_ref_tgt;
    //align90_ref_tgt = (align90_ref_tgt < tag_CDR_PHASE_MIN) ? tag_CDR_PHASE_MIN : align90_ref_tgt;

    while( align90_ref_cur != align90_ref_tgt )
    {
        if(align90_ref_cur < (align90_ref_tgt - tag_CDR_OS_PH_JMP_STEP))
            align90_ref_cur += tag_CDR_OS_PH_JMP_STEP;
        else if(align90_ref_cur > (align90_ref_tgt + tag_CDR_OS_PH_JMP_STEP))
            align90_ref_cur -= tag_CDR_OS_PH_JMP_STEP;
        else
            align90_ref_cur = align90_ref_tgt;
        
        //reg_ALIGN90_REF_LANE_5_0 = align90_ref_cur;
        reg_RX_ALIGN90_CAL_SETTING_LANE_7_0 = reg_RX_ALIGN90_CAL_SETTING_LANE_7_0 & 0x80;
        reg_RX_ALIGN90_CAL_SETTING_LANE_7_0 |= align90_ref_cur;

        delay(Tus);

        //rxalign90_cal(); 
        reg_RX_CLK_TOP_START_LANE = 0;
        reg_RX_CLK_TOP_START_LANE = 1;
        delay(Tus);

        while(!reg_RX_CLK_TOP_DONE_LANE);
        reg_RX_CLK_TOP_START_LANE = 0;
    }
 	
    //restore bypass	
    reg_RX_E2C_DCC_CAL_BYPASS_EN_LANE = save_RX_E2C_DCC_CAL_BYPASS_EN;
    reg_RX_DLL_CAL_BYPASS_EN_LANE = save_RX_DLL_CAL_BYPASS_EN;
    reg_RX_PI_DCC_CAL_BYPASS_EN_LANE = save_RX_PI_DCC_CAL_BYPASS_EN;
    reg_RX_DATA_DCC_CAL_BYPASS_EN_LANE = save_RX_DATA_DCC_CAL_BYPASS_EN;
    reg_RX_EDGE_DCC_CAL_BYPASS_EN_LANE = save_RX_EDGE_DCC_CAL_BYPASS_EN;

    reg_RX_CLK_TOP_CONT_START_LANE = 1;

    #ifdef SUPPORT_PI_DCC_PATCH
    Check_Rx_Edge_Clk_Toggle();
    #endif	

 
}

/* **************************************************
 * Check Rx Edge clock toggling
 *      if oveflow/underflow, decrease/increase rx_pi_dcc_cal_result 
 * Args:
 *      NONE
 * Inputs:
 *      RX_EDGE_DCC_CAL_UNDERFLOW/OVERFLOW_RD_LANE, RX_DATA_DCC_CAL_UNDERFLOW/OVEFLOW_RD_LANE
 * Outputs:
 *      reg_RX_PI_DCC_CAL_RESULT_EXT_LANE_5_0
 * Note:
 *      reg_RX_PI_DCC_CAL_RESULT_EXT_LANE_5_0 is SM. 
 *      bit[5] 1:-, 0:+
 *      transaction: .., 2, 1, 0, -0, -1, ..
 */
#ifdef SUPPORT_PI_DCC_PATCH
void Check_Rx_Edge_Clk_Toggle(void) {

	int8_t rx_pi_dcc_2c, rx_pi_dcc_new_2c; 

	if(reg_RXSPEED_DIV_LANE_2_0&0x04) return;

	if(reg_RX_PI_DCC_CAL_INDV_EXT_EN_LANE==0) {
		rx_pi_dcc_max_2c = 31; //reg_RX_PI_DCC_CAL_VAL_MAX_LANE_5_0&0x1f;
		//if(reg_RX_PI_DCC_CAL_VAL_MAX_LANE_5_0&0x20) rx_pi_dcc_max_2c = -rx_pi_dcc_max_2c;
		rx_pi_dcc_min_2c = -31; //reg_RX_PI_DCC_CAL_VAL_MIN_LANE_5_0&0x1f;
		//if(reg_RX_PI_DCC_CAL_VAL_MIN_LANE_5_0&0x20) rx_pi_dcc_min_2c = -rx_pi_dcc_min_2c;	
		rx_pi_dcc_timer_step = 0;
	}

	rx_pi_dcc_2c = reg_RX_PI_DCC_CAL_RESULT_RD_LANE_5_0&0x1f;
	if(reg_RX_PI_DCC_CAL_RESULT_EXT_LANE_5_0&0x20) rx_pi_dcc_2c = -rx_pi_dcc_2c;
	rx_pi_dcc_new_2c = rx_pi_dcc_2c;

	reg_RX_EDGE_DCC_CAL_CONT_EN_LANE = 0;
	reg_RX_DATA_DCC_CAL_CONT_EN_LANE = 0;
	delay(50);

	//if(reg_RX_EDGE_DCC_CAL_UNDERFLOW_RD_LANE || reg_RX_DATA_DCC_CAL_UNDERFLOW_RD_LANE) {
	if ((reg_RX_EDGE_DCC_CAL_RESULT_MSB_RD_LANE_2_0==7 && reg_RX_EDGE_DCC_CAL_RESULT_LSB_RD_LANE_5_0==0x3f) || 
	    (reg_RX_DATA_DCC_CAL_RESULT_MSB_RD_LANE_2_0==7 && reg_RX_DATA_DCC_CAL_RESULT_LSB_RD_LANE_5_0==0x3f)) {
		if( rx_pi_dcc_2c < rx_pi_dcc_max_2c) {
			rx_pi_dcc_new_2c = rx_pi_dcc_2c + 1; 
		}		

	}
	//else if(reg_RX_EDGE_DCC_CAL_OVERFLOW_RD_LANE || reg_RX_DATA_DCC_CAL_OVERFLOW_RD_LANE) {
	else if ((reg_RX_EDGE_DCC_CAL_RESULT_MSB_RD_LANE_2_0==3 && reg_RX_EDGE_DCC_CAL_RESULT_LSB_RD_LANE_5_0==0x3f) ||
	         (reg_RX_DATA_DCC_CAL_RESULT_MSB_RD_LANE_2_0==3 && reg_RX_DATA_DCC_CAL_RESULT_LSB_RD_LANE_5_0==0x3f)) {
 		if( rx_pi_dcc_2c > rx_pi_dcc_min_2c) {
			rx_pi_dcc_new_2c = rx_pi_dcc_2c - 1; 
		}		
	}

	if(rx_pi_dcc_2c!=rx_pi_dcc_new_2c) {
		if(rx_pi_dcc_2c==0 && rx_pi_dcc_new_2c==-1&&reg_RX_PI_DCC_CAL_RESULT_EXT_LANE_5_0==0x0) { //+0 -> -0
		     	reg_RX_PI_DCC_CAL_RESULT_EXT_LANE_5_0 = 0x20;
		}
		else if(rx_pi_dcc_2c==-1 && rx_pi_dcc_new_2c==0&&reg_RX_PI_DCC_CAL_RESULT_EXT_LANE_5_0==0x21) { // -1 -> -0 
		     	reg_RX_PI_DCC_CAL_RESULT_EXT_LANE_5_0 = 0x20;
		}
		else if(rx_pi_dcc_2c==0 && rx_pi_dcc_new_2c==1&&reg_RX_PI_DCC_CAL_RESULT_EXT_LANE_5_0==0x20) { // +0 -> -0 
		     	reg_RX_PI_DCC_CAL_RESULT_EXT_LANE_5_0 = 0x0;
		}
		else if(rx_pi_dcc_new_2c<0) 
			reg_RX_PI_DCC_CAL_RESULT_EXT_LANE_5_0 = 0x20 +(-rx_pi_dcc_new_2c);
		else 	reg_RX_PI_DCC_CAL_RESULT_EXT_LANE_5_0 = rx_pi_dcc_new_2c;
		reg_RX_PI_DCC_CAL_INDV_EXT_EN_LANE = 1;
	}
	
	/*if(reg_MCU_DEBUGE_LANE_7_0) reg_MCU_DEBUGE_LANE_7_0 = 0;*/ //HR: single trigger for debug. Pls don't remove

	reg_RX_EDGE_DCC_CAL_CONT_EN_LANE = 1;
	reg_RX_DATA_DCC_CAL_CONT_EN_LANE = 1;

}

//TODO: Update xdata lane memory map and uncomment next line
#define RX_PIDCC_CONT_CAL_TIME	 (1000<<(lnx_RX_PI_DCC_CONT_CAL_TIMER_LANE_7_0+1))	//duration	
//#define RX_PIDCC_CONT_CAL_TIME	 (1000<<(0x3+1))	//duration	
void Rx_PI_DCC_cont_cal(void) {
	rx_pi_dcc_timer_step++;
	if(rx_pi_dcc_timer_step>=RX_PIDCC_CONT_CAL_TIME || reg_MCU_DEBUGE_LANE_7_0) {
		Check_Rx_Edge_Clk_Toggle();
		rx_pi_dcc_timer_step = 0;
	}
}

#endif

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
//uint8_t save_top_cont_start = reg_RX_EOM_TOP_CONT_START_LANE;
    reg_RX_EOM_TOP_CONT_START_LANE = 0;
    //while(!reg_RX_EOM_TOP_CONT_DONE_LANE);
    reg_RX_EOM_COMN_EXT_EN_LANE = 1;

    while( update_ph != 0 ) {       

        //ph_os_tmp = (int16_t)reg_EOM_DPHER_LANE_6_0;
        ph_os_tmp = (int16_t)reg_RX_EOM_PI_CAL_RESULT_RD_LANE_10_8;
        ph_os_tmp = ph_os_tmp << 8; 
        ph_os_tmp = ph_os_tmp | (int16_t)reg_RX_EOM_PI_CAL_RESULT_RD_LANE_7_0;

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
    
        //reg_EOM_DPHER_LANE_6_0 = (uint8_t)ph_os_tmp & 0x7f;     
        reg_RX_EOM_PI_CAL_RESULT_EXT_LANE_10_8 = (uint8_t)(ph_os_tmp >> 8);
        reg_RX_EOM_PI_CAL_RESULT_EXT_LANE_7_0 = (uint8_t)ph_os_tmp;
		
		//delay(Tus);
		if(eom_ext_mode) {
			reg_EOM_DPHERCK_LANE = 1;
			reg_EOM_DPHERCK_LANE = 0;
		}
		else {	
			reg_RX_EOM_AUTO_ZERO_CLK_EXT_LANE = 1;
			reg_RX_EOM_AUTO_ZERO_CLK_EXT_LANE = 0;
		}	
        
    }       
    reg_RX_EOM_COMN_EXT_EN_LANE = 0;
	// Bin's suggestion
    //reg_RX_EOM_TOP_CONT_START_LANE = 1;//save_top_cont_start;
}

