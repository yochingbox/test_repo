/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file cli.c
* \purpose Test 
* \History
*	6/27/2017 Heejeong Ryu		Initial 
*/
#include "common.h"
#include "driver.h"

#ifdef SUPPORT_CLI

void cli_monitor(void) {


    int8_t tx_ffe_gradient[4] = {-1, -1, -1, -1};
	switch(lnx_CLI_CMD_LANE_7_0) {
	case 0x01: drv_cds(lnx_CLI_ARGS_LANE_15_0); break;
	case 0x02: drv_adc_cal(lnx_CLI_ARGS_LANE_15_0); break;
        case 0x03: drv_shared_sigmnt_init(); break;
        case 0x04: drv_adc_to_dp_sigmnt_init(); break;
        case 0x05: drv_shared_sigmnt(); break;
        case 0x06: drv_adc_to_dp_sigmnt(); break;
        case 0x07: drv_spd_cfg_dec(); break;
	case 0x08: loadspeedtbl_rx(); break;
	case 0x09: drv_dfe_opt(); break;
	case 0x0a: drv_ffe_flt_opt(); break;
	case 0x0b: drv_pwr_opt(lnx_CLI_ARGS_LANE_15_0); break;
	case 0x0c: drv_dtl_ph_opt(lnx_CLI_ARGS_LANE_15_0); break;
	case 0x0d: drv_ffe_len_opt(); break;
	//case 0x0e: break;
	//case 0x0f: break;
        case 0x10: train_if_init(); break;
        case 0x11: set_train_comp(); break;
        case 0x12: set_remote_tx(); break;
	case 0x13: drv_set_dp_lms_ext(lnx_CLI_ARGS_LANE_15_0); break;
	case 0x14: drv_set_dtl_lms_ext(lnx_CLI_ARGS_LANE_15_0); break;
	//case 0x15: tsen_adc_crtl_run(); break;
	//case 0x16: break;
	//case 0x17: break;
        case 0x18: lnx_CLI_RETURN_LANE_15_0 = snr_approx(lnx_CLI_ARGS_LANE_15_0); break;
	//case 0x02: dfe_adaptation(); break;
	//case 0x03: phase_control_func(); break;		
	//case 0x04: dfe_save(); break;	
	//case 0x05: dc_load(0); break;	
	//case 0x11: set_ph_mode(); break;		
	//case 0x12: set_ph_dat(train.phase_offset_data); break;	
	//case 0x13: set_ph_esm(train.phase_offset_esm); break;	
	//case 0x16: eom_align_cal(); break;	
	//case 0x17:  
	//	#ifdef 	_28G_X2
	//	eom_align_cal(); 
	//	#else
	//	eom_align_cal_01(); 
	//	#endif	
	//break;		
	//#ifdef SUPPORT_PCIE_TXFFE_WA_FORCE_CTRL
	//case 0x18: txffe_force_ctrl(); break;
	case 0x20: drv_mse_run(); break;
	case 0x21: drv_plm_run(); break;
    case 0x30: 
                //TRAIN_SIM_EN = 1;
                lnx_TX_TRAIN_MAX_TRIAL_LANE_7_0 = 1;
                txffe_shape_base_train();
                break;
    case 0x31:
                set_ctle(1, 30);
                set_gain_coarse(4);
                lnx_RX_TRAIN_BLIND_MAX_TRIAL_LANE_7_0 = 20;
                lnx_RX_TRAIN_BLIND_ADC_SAT_TH_LANE_15_0 = 7;
                lnx_RX_TRAIN_BLIND_ADC_TH1_LANE_5_0 = 56;
                lnx_RX_TRAIN_BLIND_CTLE_R_STEP_LANE_1_0 = 1;
                lnx_RX_TRAIN_BLIND_CTLE_C_STEP_LANE_1_0 = 1;
                lnx_RX_TRAIN_BLIND_GAIN_COARSE_STEP_LANE_1_0 = 1; 
                rx_blind_train(); break;

    case 0x32:
                set_ctle(1, 30);
                set_gain_coarse(4);
	            reg_MCU_DEBUG0_LANE_7_0 = 0;
                reg_MCU_DEBUG0_LANE_7_0 = trx_train_txffe_det_preset();
                break;

    case 0x33:
                set_ctle(1, 30);
                set_gain_coarse(4);
                //lnx_TX_TRAIN_PRESET_CTLE_COMP_EN_LANE = 0;
                lnx_TX_TRAIN_PRESET_CTLE_COMP_ITER_MAX_LANE_3_0 = 3;
                lnx_TX_TRAIN_PRESET_CTLE_COMP_R_STEP_LANE_1_0 = 1;
	            //reg_MCU_DEBUG0_LANE_7_0 = 1;
                trx_train_txffe_set_preset(reg_MCU_DEBUG0_LANE_7_0 );
                break;

    case 0x34:
                set_ctle(1, 30);
                set_gain_coarse(4);
                set_TXFFE_preset(1);
                lnx_TRX_TRAIN_ITER_MIN_LANE_7_0 = 2;
                lnx_TRX_TRAIN_ITER_MAX_LANE_7_0 = 10; 
                lnx_TRX_TRAIN_TX_TRAIN_EN_LANE = 1;
                lnx_TRX_TRAIN_CTLE_GRID_INC_EN_LANE = 1;
                lnx_TRX_TRAIN_CTLE_R_INC_LANE_2_0 = 1;
                lnx_TRX_TRAIN_CTLE_C_INC_LANE_2_0 = 2;
                trx_opt();
                break;

    case 0x35:
                set_ctle(1, 30);
                set_gain_coarse(4);
                lnx_RX_TRAIN_OPT_R_ITER_MAX_LANE_4_0 = 2;
                lnx_RX_TRAIN_OPT_C_ITER_MAX_LANE_4_0 = 4;
                lnx_RX_TRAIN_OPT_R_STEP_LANE_4_0 = 1; 
                lnx_RX_TRAIN_OPT_C_STEP_LANE_4_0 = 3; 
                lnx_RX_TRAIN_OPT_ADC_SAT_TH_LANE_15_0 = 7;
                lnx_RX_TRAIN_OPT_ADC_TH1_LANE_5_0 = 60;
                lnx_RX_TRAIN_OPT_SNR_TH_LANE_7_0 = 0;
                ctle_grid_search(CDS_EN_RXTRAIN);
                break;

    case 0x36:
                set_ctle(1, 30);
                set_gain_coarse(4);
                set_TXFFE_preset(1);
                lnx_TX_TRAIN_OPT_EXT_ITER_MAX_LANE_4_0 = 1;
                lnx_TX_TRAIN_OPT_INT_ITER_MAX_LANE_4_0 = 2;
                lnx_TX_TRAIN_G1_ADAPT_EN_LANE = 1;
                lnx_TX_TRAIN_GN1_ADAPT_EN_LANE = 1;
                lnx_TX_TRAIN_GN2_ADAPT_EN_LANE = 1;
                lnx_TX_TRAIN_OPT_SNR_TH_LANE_7_0 = 0;
                lnx_TX_TRAIN_OPT_ADC_SAT_TH_LANE_15_0 = 7;
                lnx_TX_TRAIN_OPT_ADC_TH1_LANE_5_0 = 60;
	            reg_MCU_DEBUG0_LANE_7_0 = 0;
	            reg_MCU_DEBUG0_LANE_7_0 = txffe_gradient_base_train(tx_ffe_gradient);
                break;

    case 0x37:
                set_ctle(1, 30);
                set_gain_coarse(4);
                set_TXFFE_preset(1);
	            reg_MCU_DEBUG0_LANE_7_0 = 0;
                //reg_MCU_DEBUG1_LANE_7_0 = 2; 
                //reg_MCU_DEBUG2_LANE_7_0 = 1; 
	            reg_MCU_DEBUG0_LANE_7_0 = set_TXFFE_tap(reg_MCU_DEBUG1_LANE_7_0, reg_MCU_DEBUG2_LANE_7_0);
                break;

    case 0x38:
                lnx_RX_TRAIN_ADC_SAT_CHECK_SMALL_SIG_TH_LANE_7_0 = 64;
                lnx_RX_TRAIN_ADC_SAT_CHECK_TH1_LANE_5_0 = 48;
                lnx_RX_TRAIN_ADC_SAT_CHECK_LARGE_SIG_TH_LANE_7_0 = 32;
                lnx_RX_TRAIN_ADC_SAT_CHECK_TH2_LANE_5_0 = 16;
                init_adc_sat_check();
                break;

    case 0x39:
				lnx_TRX_TRAIN_TX_TRAIN_EN_LANE = 1;
                trx_train_top();
                break;

    case 0x3a:
				lnx_TRX_TRAIN_TX_TRAIN_EN_LANE = 0;
                trx_train_top();
                break;
				

	//#endif
	default: break;
	}
	
	lnx_CLI_START_LANE = 0;
	
	PHY_STATUS = ST_NORMAL;

}

#endif

