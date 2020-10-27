/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file lane_margin.c
* \purpose Lane margin function for PCIE, USB
* \History
*	3/31/2017 Xinyu Yi		Initial 
*/


/*
For a specific lane_margin_en function, type and dir are the same. In order to change type or dir, PIPE must deassert lane_margin_en and start another lane margin en function.
*/

#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK1
#pragma constseg BANK1
#endif

#ifdef _PCIE_USB_BUILD 

#ifdef SUPPORT_LANE_MARGINE

void lane_margin_start(void) BANKING_CTRL {
    bool save_dfe_cont_mode;
    bool save_eom_en;
    bool save_fast_dfe_timer_en;
    bool save_eom_clk_en;
    bool save_eye_check_bypass;
    uint8_t save_f0_sp_o;
    uint8_t save_f0_sp_e;
    uint8_t save_f0_sn_o;
    uint8_t save_f0_sn_e;

// Save current status
    save_dfe_cont_mode = reg_DFE_ADAPT_CONT_LANE;
    save_dfe_adapt_splr = reg_DFE_ADAPT_SPLR_EN_LANE_3_0; 
    save_dfe_adapt_e_en = reg_DFE_ADAPT_EVEN_EN_LANE;
    save_dfe_adapt_o_en = reg_DFE_ADAPT_ODD_EN_LANE;
    save_eom_en_s = reg_EOM_EN_S_LANE;
    save_eom_en_d = reg_EOM_EN_D_LANE;
    save_dfe_en = reg_DFE_EN_LANE;
    save_eom_en = reg_EOM_EN_LANE;
    save_fast_dfe_timer_en = lnx_FAST_DFE_TIMER_EN_LANE;
    save_eom_clk_en = reg_EOM_CLK_EN_LANE;
    save_eye_check_bypass = lnx_EYE_CHECK_BYPASS_LANE;
    save_f0_sp_o = reg_DFE_F0_S_P_O_SM_LANE_5_0;
    save_f0_sp_e = reg_DFE_F0_S_P_E_SM_LANE_5_0;
    save_f0_sn_o = reg_DFE_F0_S_N_O_SM_LANE_5_0;
    save_f0_sn_e = reg_DFE_F0_S_N_E_SM_LANE_5_0;



// Abort current DFE run
    if (save_dfe_cont_mode) {
      reg_DFE_ADAPT_ABORT_LANE = 1;
      reg_DFE_ADAPT_CONT_LANE = 0;
      while(!reg_DFE_DONE_LANE);
      reg_DFE_START_LANE = 0;
    }

// Initial 
    reg_EOM_CNT_AUTO_CLR_LANE = 0;
    dfe_adapt_lpnum_3_0 = 0;//(uint8_t)(loop_num&0x0f); //0x16
    dfe_adapt_lpnum_9_4 = 0;//((uint8_t)(loop_num>>4)&0x3f);			
    reg_EOM_CLK_EN_LANE = 1;
    lnx_EYE_CHECK_BYPASS_LANE = 0;
    cmx_EOM_ALIGN_CAL_EXT_EN = 0; // This is for simulation. In real case, this register is already 0.
 	//#ifdef 	_28G_X2
	eom_align_cal(); 
	//#else
	//eom_align_cal_01(); 
	//#endif
    EOM_EN_D = 0; 
    EOM_EN_S = 1; 
    EOM_EN_E = 0;
    EOM_clock_analog_align();
    g_fw_flags |= 0x01; // SW flag [0], set to 1 to bypass the eom_ui_align call in phase_control_func_0
    PHY_STATUS = ST_LANE_MARGIN_EN;
    reg_EOM_CNT_AUTO_CLR_LANE = 1;


    lane_margin_dfe_run();

    while (reg_DFE_MARGIN_EN_LANE) {
        if (reg_DFE_MARGIN_CHG_LANE) {
	// Abort current DFE run
            reg_DFE_ADAPT_ABORT_LANE = 1;
            reg_DFE_ADAPT_CONT_LANE = 0;
            while(!reg_DFE_DONE_LANE);
            reg_DFE_START_LANE = 0;
            lane_margin_dfe_run();
	}
    }

    if ( reg_DFE_MARGIN_TYPE_LANE ) {
        train.phase_offset_esm = 0;
        ph_control_mode = 1;
    }
	DFE_FEN_EVEN_REG.BT.B0 = 0x0c;
	DFE_FEN_ODD_REG.BT.B0 = 0x0c;
        reg_DFE_FEN0_S_N_E_LANE = save_f0_sn_e;
        reg_DFE_FEN0_S_P_E_LANE = save_f0_sp_e;
        reg_DFE_FEN0_S_N_O_LANE = save_f0_sn_o;
        reg_DFE_FEN0_S_P_O_LANE = save_f0_sp_o;
	DFE_FEN_EVEN_REG.BT.B0 = 0x00;
	DFE_FEN_ODD_REG.BT.B0 = 0x00;

    reg_DFE_ADAPT_CONT_LANE = 0;
    while(!reg_DFE_DONE_LANE);
    reg_DFE_START_LANE = 0;

// Resume DFE setting
    reg_DFE_ADAPT_CONT_LANE = save_dfe_cont_mode;
    reg_EOM_EN_S_LANE = save_eom_en_s;
    reg_EOM_EN_D_LANE = save_eom_en_d;
    reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = save_dfe_adapt_splr; 
    reg_DFE_ADAPT_EVEN_EN_LANE = save_dfe_adapt_e_en; 
    reg_DFE_ADAPT_ODD_EN_LANE = save_dfe_adapt_o_en; 
    reg_DFE_EN_LANE = save_dfe_en;
    reg_EOM_EN_LANE = save_eom_en;
    lnx_FAST_DFE_TIMER_EN_LANE = save_fast_dfe_timer_en;
    reg_EOM_CLK_EN_LANE = save_eom_clk_en;
    lnx_EYE_CHECK_BYPASS_LANE = save_eye_check_bypass;
	
	train.phase_offset_esm = 0;
    phase_control_func_0(train.phase_offset_data, train.phase_offset_esm); //set_ph_esm(0);

// Send out done indicator
    reg_DFE_MARGIN_READY_LANE = 1;
    while(!reg_DFE_MARGIN_ACK_LANE);
    reg_DFE_MARGIN_READY_LANE = 0;

// Resume continues mode DFE
    if (save_dfe_cont_mode) {
      reg_DFE_ADAPT_CONT_LANE = 1;
      reg_DFE_START_LANE = 0;
      reg_DFE_START_LANE = 1;
    }

    g_fw_flags &= 0xFE; // clear the SW flag [0]
    PHY_STATUS = ST_NORMAL;
}

void lane_margin_dfe_run(void) BANKING_CTRL {


// Config DFE according to the values from PIPE
    cfg_dfe_fm_lane_en();

// Start DFE. Sent out Ready indicator.
    reg_DFE_ADAPT_ABORT_LANE = 0;
    reg_DFE_ADAPT_CONT_LANE = 1;
    reg_DFE_START_LANE = 0;
    reg_DFE_START_LANE = 1;
    reg_DFE_MARGIN_READY_LANE = 1;

// Wait for the ack feedback from ASIC.
    while(!reg_DFE_MARGIN_ACK_LANE);
    reg_DFE_MARGIN_READY_LANE = 0;
}


void cfg_dfe_fm_lane_en(void) BANKING_CTRL {
	uint8_t quad_margin_offset;

        adapt_data_en = 0;
        adapt_slicer_en = 1;

    if ( reg_DFE_MARGIN_TYPE_LANE ) {
	DFE_FEN_EVEN_REG.BT.B0 = 0x0c;
	DFE_FEN_ODD_REG.BT.B0 = 0x0c;

        // fext0 is 6 bit 2c; margin_offset is 7 bit unsigned maganitude
	reg_DFE_FEXT0_S_N_E_LANE_5_0 = 0;
	reg_DFE_FEXT0_S_P_E_LANE_5_0 = 0;
	reg_DFE_FEXT0_S_N_O_LANE_5_0 = 0;
	reg_DFE_FEXT0_S_P_O_LANE_5_0 = 0;
	DFE_FEN_EVEN_REG.BT.B0 = 0x00;
	DFE_FEN_ODD_REG.BT.B0 = 0x00;
        ph_control_mode = 1;
//	lnx_FAST_DFE_TIMER_EN_LANE = 0;
        if ( reg_DFE_MARGIN_DIR_LANE ) {
	    // phase_offset_esm is signed 8 bit ; margin_offset is 7 bit unsigned maganitude
            train.phase_offset_esm = reg_DFE_MARGIN_OFFSET_LANE_6_0;
	} else {
            train.phase_offset_esm = -reg_DFE_MARGIN_OFFSET_LANE_6_0;
	}
        phase_control_func();
    } else {
        //reg_DFE_FEN0_S_N_E_LANE = 1;
        //reg_DFE_FEN0_S_P_E_LANE = 1;
        //reg_DFE_FEN0_S_N_O_LANE = 1;
        //reg_DFE_FEN0_S_P_O_LANE = 1;
		DFE_FEN_EVEN_REG.BT.B0 = 0x0c;
		DFE_FEN_ODD_REG.BT.B0 = 0x0c;

		quad_margin_offset = (int8_t)(reg_DFE_MARGIN_OFFSET_LANE_6_0>>2);
			// fext0 is 6 bit 2c; margin_offset is 7 bit unsigned maganitude
	        reg_DFE_FEXT0_S_N_E_LANE_5_0 = quad_margin_offset;
	        reg_DFE_FEXT0_S_P_E_LANE_5_0 = quad_margin_offset;
	        reg_DFE_FEXT0_S_N_O_LANE_5_0 = quad_margin_offset;
	        reg_DFE_FEXT0_S_P_O_LANE_5_0 = quad_margin_offset;
		DFE_FEN_EVEN_REG.BT.B0 = 0x00;
		DFE_FEN_ODD_REG.BT.B0 = 0x00;

    }
        reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0xc; 

        reg_DFE_UPDATE_EN_LANE_15_0 = 0;
        reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;
        reg_DFE_UPDATE_DC_EN_LANE = 0;
        reg_EOM_EN_LANE = 1;
}

#else
void lane_margin_start(void) BANKING_CTRL {}

#endif //SUPPORT_LANE_MARGINE

#endif //_PCIE_USB_BUILD
