/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file misc.c
* \purpose Miscellaneous functions
* \History
*	10/13/2015 Heejeong Ryu		Initial 
* If a function is placed here for memory reasons, please specify the file it supposed to be in.
*/
#include "common.h"
#include "driver.h"

#ifdef USE_BANKING
//#pragma codeseg BANK0
//#pragma constseg BANK0
#endif

// rx_train.c
void ffe_rl2_tune_adjust_qr() BANKING_CTRL{
	int16_t metric16 = 0;
	uint8_t ctle_rl2_tune = reg_CTLE_RL2_TUNE_P1_LANE_2_0;
	uint8_t i = 0;
	// learn from get_fx()/adv_rx_phase_opt() usage
	uint8_t save_tag_DFE_LOAD_EN = tag_DFE_LOAD_EN;
	tag_DFE_LOAD_EN = 0;
	bit_performing_phase_train_adv = 1;
//	set_dfe_cont(0);
	reg_DFE_F0X_SEL_LANE_4_0 = DFE_FX_SEL_FP1;
	cds_call = CDS_EN_PHASETRAIN_ADV;

	for(i=0;i<8;i++){
		dfe_adaptation();
		
//		check_pause_state(PAUSE_ST_TEST_F);
		
		// f0b-based algorithm
		metric16 = ((int16_t)(train.fn1+train.f1)<<4)-((int16_t)train.f0<<4)/(int16_t)max_ram(tag_CTLE_F0B_DIVISOR,1);
		if(metric16>0){// increase
			if(ctle_rl2_tune<7)
				ctle_rl2_tune++;
		}else{ // decrease
			if(ctle_rl2_tune>0)
				ctle_rl2_tune--;		
		}
		reg_CTLE_RL2_TUNE_P1_LANE_2_0 = ctle_rl2_tune;
		reg_CTLE_RL2_TUNE_P2_LANE_2_0 = ctle_rl2_tune;
		reg_CTLE_RL2_TUNE_P3_LANE_2_0 = ctle_rl2_tune;
		reg_CTLE_RL2_TUNE_P4_LANE_2_0 = ctle_rl2_tune;
		
//		check_pause_state(PAUSE_ST_TEST_9);		
	}
	
	if(ctle_rl2_tune==0||ctle_rl2_tune==7){
		// rl2_tune saturate, adjust ctle_sel
		ffe_rl2_sel_adjust_qr();
	}
	
//	set_dfe_cont(1);
	tag_DFE_LOAD_EN = save_tag_DFE_LOAD_EN;
	bit_performing_phase_train_adv = 0;

	cds_call = CDS_EN_DEFAULT;
	
}


