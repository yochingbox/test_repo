/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file cli.c
* \purpose Test 
* \History
*	7/18/2019 Heejeong Ryu		Initial 
*/
#include "common.h"

#define tag_CLI_ARGS CLI_REG1.VAL
#define tag_CLI_ARG0 CLI_REG1.BT.B0
#define tag_CLI_ARG1 CLI_REG1.BT.B1
#define tag_CLI_ARG2 CLI_REG1.BT.B2
#define tag_CLI_ARG3 CLI_REG1.BT.B3

#ifdef SUPPORT_CLI

void cli_monitor(void) {

	timeout2_start(CLI_TIMER,0);

	switch(lnx_CLI_CMD_LANE_7_0) {
	case 0x01: cds_init(); break;
	case 0x02: dfe_adaptation(); break;
	//case 0x03: phase_control_func(); break;		
	case 0x04: dfe_save(); break;	
	case 0x05: dc_load(tag_CLI_ARG0); break;	
    case 0x06: drv_spd_cfg_dec(); break;
    case 0x07: dfe_setoff(); break;
    case 0x08: dfe_backon(); break;
	case 0x09: dfe_load(tag_CLI_ARGS); break;	
	//case 0x11: set_ph_mode(); break;		
	//case 0x12: set_ph_dat(train.phase_offset_data); break;	
	//case 0x13: set_ph_esm(train.phase_offset_esm); break;	
	//case 0x16: eom_align_cal(); break;
	case 0x15: dfe_spd_init(); break;
    case 0x16: dc_vref_adj(40,0xf37); break;	
	case 0x17: rx_eom_cal(); break;
    case 0x18: set_dfe_cont(tag_CLI_ARG0); break;
    case 0x19: drv_cdr_dfe_scheme(tag_CLI_ARGS); break;
    case 0x20: dfe_spd_init();
               drv_cdr_dfe_scheme(0xffffff);
               break;
    case 0x21: dfe_spd_init();
               drv_cdr_dfe_scheme(cds_table[CDS_EN_DEFAULT]);
               break;
    case 0x22: dfe_spd_init();
               drv_cdr_dfe_scheme(cds_table[CDS_EN_DEFAULTPCIE]);
               break;
    case 0x23: dfe_spd_init();
               drv_cdr_dfe_scheme(cds_table[CDS_EN_DEFAULTPCIE_F0B]);
               break;
    case 0x24: dfe_spd_init();
               drv_cdr_dfe_scheme(cds_table[CDS_EN_DFEPLUSDC]);
               break;
    case 0x25: dfe_spd_init();
               drv_cdr_dfe_scheme(cds_table[CDS_EN_MAXEO]);
               break;
    case 0x26: dfe_spd_init();
               drv_cdr_dfe_scheme(cds_table[CDS_EN_PAM4_HR]);
               break;
    case 0x27: dfe_spd_init();
               drv_cdr_dfe_scheme(cds_table[CDS_EN_PAM2_HR]);
               break;
    case 0x28: dfe_spd_init();
               drv_cdr_dfe_scheme(cds_table[CDS_EN_PAM2_FR]);
               break;
    case 0x29: dfe_spd_init();
               drv_cdr_dfe_scheme(cds_table[CDS_EN_SKIPCDR]);
               break;
    case 0x2a: dfe_spd_init();
               drv_cdr_dfe_scheme(cds_table[CDS_EN_EYECHECK]);
               break;
    case 0x2b: dfe_spd_init();
               drv_cdr_dfe_scheme(cds_table[CDS_EN_EOMADAPT]);
               break;
    case 0x2c: dfe_spd_init();
               drv_cdr_dfe_scheme(cds_table[CDS_EN_DATAADAPT]);
               break;
    case 0x2d: dfe_spd_init();
               drv_cdr_dfe_scheme(cds_table[CDS_EN_F0D]);
               break;
    case 0x2e: dfe_spd_init();
               drv_cdr_dfe_scheme(cds_table[CDS_EN_RXINIT]);
               break;
    case 0x2f: dfe_spd_init();
               drv_cdr_dfe_scheme(cds_table[CDS_EN_FASTACQ]);
               break;
    case 0x30: drv_set_f1u();
               break;
    case 0xaa: 
	       TRAIN_STEP_0.VAL = CLI_REG1.VAL;
		reg_DFE_MCU_CLK_EN_LANE = 0;
		set_dfe_cont(0);
		trx_train_top();
		lnx_TRAIN_DONE_LANE = ctrl_trx_train_done; 
	       break;
    case 0xf8: // fnx measurement
				//set_dfe_cont(0);
				lnx_CDS_CALL_FORCE_EN_LANE = 1;
				CDS_TB.VAL = 0xC3DF48; //cds_call = CDS_EN_PHASETRAIN2;
				dfe_adaptation();
				//set_dfe_cont(1);
				break;
			   
	default: break;
	}

	timeout2_stop(CLI_TIMER);
	CLI_TIME.VAL = timer2_check(CLI_TIMER); //cli_time_lane[31:0]

	
	lnx_CLI_START_LANE = 0;

}

#endif

