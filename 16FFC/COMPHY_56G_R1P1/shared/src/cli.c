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
#include "cdr_dfe_scheme.h"
#include "ph_ctrl.h"
#define tag_CLI_ARGS CLI_REG1.VAL
#define tag_CLI_ARG0 CLI_REG1.BT.B0
#define tag_CLI_ARG1 CLI_REG1.BT.B1
#define tag_CLI_ARG2 CLI_REG1.BT.B2
#define tag_CLI_ARG3 CLI_REG1.BT.B3


#ifdef SUPPORT_CLI
void cli_monitor(void) {
/*
	if(lnx_FORCE_CDS_CTRL_EN_LANE) {
		cdr_state = lnx_FORCE_CDS_STATE_LANE;
		//cds_tb = lnx_FORCE_CDS_CTRL_LANE_15_0;
		cds = lnx_FORCE_CDS_CTRL_LANE_15_0;
	}
	adapt_slicer_en = lnx_ADAPT_SLICER_EN_LANE_7_0;
	adapt_data_en =	lnx_ADAPT_DATA_EN_LANE_7_0;
	ph_control_mode = tag_TRAIN_PH_CONTROL_MODE;
*/
//	tag_TRAIN_PH_OS_DAT = (int8_t)lnx_TRAIN_PH_OS_DATA_2C_LANE_7_0;
//	tag_TRAIN_PH_OS_ESM = (int8_t)lnx_TRAIN_PH_OS_ESM_2C_LANE_7_0;

	reg_PIN_GPO_LANE_7_0 = 1; 
	
	switch(lnx_CLI_CMD_LANE_7_0) {
	case 0x01: cdr_dfe_scheme_new(tag_CLI_ARGS); break;
	case 0x02: cds_save(tag_CLI_ARG0); break;
	case 0x03: cds_load_f0(tag_CLI_ARG0); break;
	case 0x04: dfe_save(); break;
	case 0x05: dfe_load(tag_CLI_ARG0); break;
	case 0x06: dc_load(tag_CLI_ARG0); break;
	case 0x07: dfe_fsm(tag_CLI_ARGS, tag_CLI_ARGS>>16); break;
	case 0x08: set_dfe_cont(tag_CLI_ARG0); break;
	case 0x09: dfe_reset_f2(); break;
	case 0x0a: cds_init(); break;

	case 0x11: set_ph_mode(tag_CLI_ARG0); break;
	case 0x12: set_ph_dat(tag_CLI_ARG0); break;	
	case 0x13: set_ph_esm(tag_CLI_ARG0); break;	
	case 0x16: eom_align_cal(); break;
	case 0x17: eom_ui_align(); break;		

    case 0x20: dfe_spd_init(); break;
    case 0x21: set_dfe_mod(tag_CLI_ARG0); break;
    case 0x22: set_dfe_en(tag_CLI_ARG0); break;

    case 0x23: set_remote_tx(); break;

    case 0xf0: // TEST PAM4
                set_dfe_cont(0);
                drv_ADAPT_DATA_EN = 1;
                drv_ADAPT_SLICER_EN = 1;
                drv_ADAPT_EVEN_EN = 1;
                drv_ADAPT_ODD_EN = 1;
                cdr_dfe_scheme_new(cds_table[CDS_EN_DEFAULT]);
                cdr_dfe_scheme_new(cds_table[CDS_EN_DATAADAPT]);
                set_dfe_cont(1);
                break;
    case 0xf1:  // TEST PAM4 INIT
                set_dfe_en(1);
                set_dfe_mod(0);
                dfe_spd_init();
                break;
    case 0xf2:  // TEST PAM2_FP INIT
                set_dfe_en(1);
                set_dfe_mod(1);
                dfe_spd_init();
                break;
    case 0xf3:  // TEST PAM2_LP INIT
                set_dfe_en(1);
                set_dfe_mod(2);
                dfe_spd_init();
                //reg_DFE_RES_F0_LANE_1_0 = 3;
                //reg_DFE_RES_F1_LANE_1_0 = 3;
                //reg_DFE_RES_F2_LANE_1_0 = 3;
                //reg_DFE_RES_DOUBLE_LANE_1_0 = 3;
                break;
    case 0xf4:  // TEST PAM2 HR ADAPT
                set_dfe_cont(0);
                drv_ADAPT_DATA_EN = 1;
                drv_ADAPT_SLICER_EN = 1;
                drv_ADAPT_EVEN_EN = 1;
                drv_ADAPT_ODD_EN = 1;
                cdr_dfe_scheme_new(cds_table[CDS_EN_PAM2]);
                cdr_dfe_scheme_new(cds_table[CDS_EN_DATAADAPT]);
                set_dfe_cont(1);
                break;
    case 0xf5:  // TEST PAM2 FR ADAPT
                set_dfe_cont(0);
                drv_ADAPT_DATA_EN = 1;
                drv_ADAPT_SLICER_EN = 1;
                drv_ADAPT_EVEN_EN = 0;
                drv_ADAPT_ODD_EN = 1;
                cdr_dfe_scheme_new(cds_table[CDS_EN_PAM2_FR]);
                cdr_dfe_scheme_new(cds_table[CDS_EN_DATAADAPT]);
                set_dfe_cont(1);
                break;

    case 0xf6:
    			dfe_adaptation();
    			break;
    case 0xf7:
    			do_rxtrain = 1;
    			TRX_Train();
    			break;
    case 0xf8:
    			rxalign90_cal();
        		break;
    case 0xf9:
        		do_train = 1;
        		TRX_Train();
        		break;
    case 0xfa:
    			trx_train_init();
        		tx_train();
        		break;
	default: break;
	}

	reg_PIN_GPO_LANE_7_0 = 0; 		
	
	lnx_CLI_START_LANE = 0;
}

#endif

