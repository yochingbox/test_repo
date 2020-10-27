/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file misc1.c
* \purpose Miscellaneous functions
* \History
*	10/13/2015 Heejeong Ryu		Initial 
* If a function is placed here for memory reasons, please specify the file it supposed to be in.
*/
#include "common.h"
#include "driver.h"

#ifdef USE_BANKING
#pragma codeseg BANK1
#pragma constseg BANK1
#endif

// must put this function in bank1!
uint16_t get_program_memory_bank1(uint16_t addr) BANKING_CTRL{
	__asm
	clr 	a
	movc	a,@a+dptr
	mov		r1,a
	
	mov		a,#0x01
	movc	a,@a+dptr
	mov		r2,a
	
	// output
	mov		dpl,r1
	mov		dph,r2
	__endasm;
}

// power.c
void init_xdata_at_core_reset() BANKING_CTRL{
// x.10.12.1 settings: should be the same for all speeds
// X7121M_A0_Tuning_03032020.xlsx

	//5:non-QR:f1 use trained_fn1 (default use train_debugc)
	//4:tag_DC_VREF_ADJ_EN,1
	//3:tag_PHASE_CONFIG_EN
	//2:tag_PHASE_EN,1
	//1:tag_CTLE_CONFIG_EN
	//0:tag_CTLE_EN,1
	lnx_TRAIN_DEBUG0_LANE_7_0 = 0x15;

	//1:bypass_optimize_ckpx_tune_rd,1
	//0:bypass_adv_phase_train
//	lnx_TRAIN_DEBUGA_LANE_7_0 = 0x2;

	//4:no_tx_fir_reset_at_rx_init_rd,1
	//2:slumber_wakeup_with_speed_change_rd,1(GLC5616-356)
	//1:speed_change_with_analog_reset_rd
	//0:speed_change_with_slumber_rd
	// 20200310 no need slumber_wakeup_with_speed_change_rd
	lnx_SPEED_CHANGE_DEBUG3_LANE_7_0 = 0x10;
	
	// lane_align_poffset_rate1
	if(mcuid%2==0){
		lnx_MCU_RESERVEDX08_LANE_7_0 = 0x4;
	}else{
		lnx_MCU_RESERVEDX08_LANE_7_0 = 0x14;
	}
		
	//3:tag_PHASE_CONFIG_EN_HR
	//2:tag_PHASE_EN_HR
	//1:tag_CTLE_CONFIG_EN_HR,0(as default 0xa,5,50ms,2, so no need MCU_RESERVEDX11~X14)
	//0:tag_CTLE_EN_HR,1
	lnx_MCU_RESERVEDX10_LANE_7_0 = 0x1;//0x1
	
	//fx sum saturation thresh(mcu_debugd)
	cmx_DFE_RES_F0A_HIGH_THRES_INIT_PAM2_SLOPE_7_0 = 0xff;
	cmx_DFE_RES_F0A_HIGH_THRES_INIT_PAM2_INTERCEPT_7_0 = 0x38;
	cmx_DFE_RES_F0A_HIGH_THRES_INIT_56G_SLOPE_7_0 = 0x7;
	cmx_DFE_RES_F0A_HIGH_THRES_INIT_56G_INTERCEPT_7_0 = 0x48;
	cmx_DFE_RES_F0A_HIGH_THRES_INIT_112G_SLOPE_7_0 = 0x4;
	cmx_DFE_RES_F0A_HIGH_THRES_INIT_112G_INTERCEPT_7_0 = 0x54;//0x56;
	cmx_DFE_RES_F0A_HIGH_THRES_INIT_FORCE = 1;

	//6:apt_dd_sweep_down_first_rd
	//5:apt_de_sweep_down_first_rd
	//4:apt_parameter_sel_rd
	//3:vref_target_overwrite_en,1(CMN_11 as slope, CMN_12 as intercept)
	//2:enable_vref_shift_adj_rd,1
	//1:force_de_setting_before_apt_rd,0(CMN_10)
	//0:force_phase_offset_data_before_gain_train_rd
	cmx_MCU_DEBUG_CMN_8_7_0 = 0xc;
//	cmx_MCU_DEBUG_CMN_10_7_0 = 0x3a;
	cmx_MCU_DEBUG_CMN_11_7_0 = 0x3;
	cmx_MCU_DEBUG_CMN_12_7_0 = 0x30;
	
	//1:force_default_de_setting_56g_rd
	//0:force_default_de_setting_112g_rd,1(CMN_17)
	cmx_MCU_DEBUG_CMN_16_7_0 = 0x1;
	cmx_MCU_DEBUG_CMN_17_7_0 = 0x1f;//0x1d;

	//1:phase_train_qr_en_rd
	//0:ffe_rl2_tune_adjust_qr_en_rd
	cmx_MCU_DEBUG_CMN_20_7_0 = 0x3;
	
	//ber_indicator_factor_25g, unit 1/256, 0.390625%
	cmx_MCU_DEBUG_CMN_24_7_0 = 90; // 35.15625%
	
//	reg_DFE_ADAPT_ADJ_VREF_DC_THRESH_1_LANE_4_0 = 2;
//	reg_DFE_ADAPT_ADJ_VREF_DC_THRESH_2_LANE_5_0 = 3;

	// X7121M A0 workaround: ignore reset
	reg_SFT_RST_NO_REG_FM_REG_LANE = 1;
	#if 1 // Debug TX training
	// disable training timers
	// See script_init()
	reg_TRX_TRAIN_TIMEOUT_EN_LANE = 0;
	//reg_STATUS_DET_TIMEOUT_EN_LANE = 0;
	// Though timer starting point is right in r1.2, pattern still get loss for long time (Xu)
//#ifdef _12FFC_COMPHY_112G_X4_R1P2
//#else
	reg_PATTERN_LOCK_LOST_TIMEOUT_EN_LANE = 0;
	// not used
	//lnx_TX_TRAIN_FRAME_DET_TIMER_ENABLE_LANE = 0;
//#endif
	#endif
	// rx_train_timer too short
	// 0xbb7 as trx_train, [12:8][7:0]
	reg_RX_TRAIN_TIMER_LANE_12_0_b1 = 0xb;
	reg_RX_TRAIN_TIMER_LANE_12_0_b0 = 0xb7;

	// Must be only called once at power up!!!
	force_calibration = 0;	
}

// rx_train.c
// Must be called inside ffe_rl2_tune_adjust_qr for dfe_adaptation environment
void ffe_rl2_sel_adjust_qr() BANKING_CTRL{
	int16_t metric16 = 0;
	uint8_t i = 0;
	
	uint8_t ctle_sel = 0;
	uint8_t ctle_sel2 = 0;
	for(i=0;i<8;i++){
		dfe_adaptation();
		metric16 = ((int16_t)(train.fn1+train.f1)<<4)-((int16_t)train.f0<<4)/(int16_t)max_ram(tag_CTLE_F0B_DIVISOR,1);
		ctle_sel = get_ctle_sel();
		ctle_sel2 = get_ctle_sel2();
		if(ctle_sel2==0 && ctle_sel==0 && metric16<0){
		}else if (ctle_sel2==15 && ctle_sel==15 && metric16>0){
		}else if(ctle_sel<16 && ctle_sel2<16){
			if(metric16>0){// increase
				if(ctle_sel2<15)
					set_ctle_sel2(ctle_sel2+1);
				else
					set_ctle_sel(ctle_sel+1);
			}else if(metric16<0){// decrease
				if(ctle_sel2>0)
					set_ctle_sel2(ctle_sel2-1);
				else
					set_ctle_sel(ctle_sel-1);
			}
		}
	}

}
// rx_train.c
void vref_shift_adj() BANKING_CTRL{
	// 20200203 Grace: Disable VREF_resolution train for qr
	if(rate_mode==QR){
		// 112G algorithm
		int8_t distance = get_vref_distance();
		int8_t opt_vref_shift = reg_VREF_SHIFT_LANE_1_0;
		int8_t opt_distance = distance;
		uint8_t i = 0;
		for(i=0;i<2;i++){
			switch(i){
				case 0: cmx_MCU_DEBUG_CMN_13_7_0 = distance;break;
				case 1: cmx_MCU_DEBUG_CMN_14_7_0 = distance;break;
			}
			if(abs(distance)<=13){
				break;
			}else{
				if(distance<0){
					reg_VREF_SHIFT_LANE_1_0 -= 1;
				}else{
					reg_VREF_SHIFT_LANE_1_0 += 1;
				}
				cds_call=CDS_EN_RECOVER;
				ctrl_cdr_phase_on = 0;
				dfe_adaptation();
				
				//if(i==0)check_pause_state(XXX);
				//if(i==1)check_pause_state(XXX);
			}
			distance = get_vref_distance();
			if(abs(distance)<abs(opt_distance)){
				opt_distance = distance;
				opt_vref_shift = reg_VREF_SHIFT_LANE_1_0;
			}
		}
		reg_VREF_SHIFT_LANE_1_0 = opt_vref_shift;
		cds_call=CDS_EN_RECOVER;
		ctrl_cdr_phase_on = 0;
		dfe_adaptation();
		
		//check_pause_state(XXX);
	}
}

// tx_train.c
// More requests after reset for initial remote setting
void tx_reset_adjust(void) BANKING_CTRL{
	//PHY_STATUS = ST_TXTRAIN;

	if(pam4_en && rate_mode!=QR) {// 53g
		update_g1(6);
		update_gn2(2);
	}
//	ctrl_tx_train_done = 1;
//	ctrl_trx_train_done = 1;
}

