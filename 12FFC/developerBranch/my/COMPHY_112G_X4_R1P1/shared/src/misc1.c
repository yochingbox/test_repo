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
	
	//2:tag_PHASE_EN_HR
	//1:tag_CTLE_CONFIG_EN_HR,0(as default 0xa,5,50ms,2, so no need MCU_RESERVEDX11~X14)
	//0:tag_CTLE_EN_HR,1
	lnx_MCU_RESERVEDX10_LANE_7_0 = 0x1;
	
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
	
//	reg_DFE_ADAPT_ADJ_VREF_DC_THRESH_1_LANE_4_0 = 2;
//	reg_DFE_ADAPT_ADJ_VREF_DC_THRESH_2_LANE_5_0 = 3;

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

