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
#include "ph_ctrl_adv.h" 

#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg BANK2
#endif

#define tag_CLI_ARGS CLI_REG1.VAL
#define tag_CLI_ARG0 CLI_REG1.BT.B0
#define tag_CLI_ARG1 CLI_REG1.BT.B1
#define tag_CLI_ARG2 CLI_REG1.BT.B2
#define tag_CLI_ARG3 CLI_REG1.BT.B3

#ifdef SUPPORT_CLI

void get_fx(void);

#ifdef SUPPORT_EOM
#if _DBG_EOM
void set_esm(int16_t new_esm_ph) BANKING_CTRL{
	lnx_ESM_PHASE_LANE_10_0_b1 = new_esm_ph>>8&0x7;
	lnx_ESM_PHASE_LANE_10_0_b0 = new_esm_ph&0xff;
}
#endif
#endif

void cli_monitor(void) BANKING_CTRL{
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
	lnx_TRAIN_USE_S_LANE = 1;
	lnx_TRAIN_USE_D_LANE = 1;
	adapt_slicer_en = lnx_TRAIN_USE_S_LANE;
	adapt_data_en =   lnx_TRAIN_USE_D_LANE;

	reg_PIN_GPO_LANE_7_0 = 1; 
	
	switch(lnx_CLI_CMD_LANE_7_0) {
	// case 0x00: keep reserved!
	case 0x01: cdr_dfe_scheme(tag_CLI_ARGS); break;
	case 0x02: cds_save(tag_CLI_ARG0); break;
	case 0x03: cds_load_f0(tag_CLI_ARG0); break;
	case 0x04: dfe_save(); break;
	case 0x05: dfe_load(tag_CLI_ARG0); break;
	case 0x06: dc_load(tag_CLI_ARG0); break;
	case 0x07: dfe_fsm(tag_CLI_ARGS, tag_CLI_ARGS>>16); break;
	case 0x08: set_dfe_cont(tag_CLI_ARG0); break;
	//case 0x09: dfe_reset_f2(); break;
	case 0x0a: cds_init(); break;

	case 0x11: set_ph_mode(tag_CLI_ARG0); break;
	case 0x12: set_ph_dat(tag_CLI_ARGS); break;	
	case 0x13: set_ph_esm(tag_CLI_ARGS); break;	
	//case 0x16: eom_align_cal(); break;
	//case 0x17: eom_ui_align(); break;

    case 0x20: dfe_spd_init(); break;
    case 0x21: set_dfe_mod(tag_CLI_ARG0); break;
    case 0x22: set_dfe_en(tag_CLI_ARG0); break;

    case 0x23: set_remote_tx(); break;

    case 0x55: dc_vref_adj(); break;

	case 0xb0:{// phy test, assume prbs checker init has run (1e10 bits)
#define reg_PT_ERR_CNT_LANE_31_0    PT_COUNTER3.VAL
#define reg_PT_CNT_LANE_31_0    PT_COUNTER1.VAL
#define reg_PT_CNT_MAX_LANE_31_0    PT_COUNTER5.VAL
		uint8_t ber = 0xff;
		uint8_t first_digit = 0;
		uint32_t temp_counter = 0;
		uint8_t save_tx_sel_bits = reg_TX_SEL_BITS_LANE;
		uint8_t save_rx_sel_bits = reg_RX_SEL_BITS_LANE;
		
		save_pt_en_lane = reg_PT_EN_LANE;
		prbs_checker_init();
		reg_TX_SEL_BITS_LANE=reg_TRAIN_RX_SEL_BITS_LANE;
		reg_RX_SEL_BITS_LANE=reg_TRAIN_RX_SEL_BITS_LANE;
		
		reg_PT_EN_LANE = 1;
		reg_PT_CNT_RST_LANE = 1;
		reg_PT_CNT_RST_LANE = 0;
		timeout2_start(PRBS_TIMER,2000000);
		while(reg_PT_CNT_LANE_31_0!=reg_PT_CNT_MAX_LANE_31_0 || reg_PT_CNT_LANE_47_32!=reg_PT_CNT_MAX_LANE_47_32){
			if(timeout2_check(PRBS_TIMER)){
				DBG_Printf("TO!\r\n");
				break;
			}
		}
		DBG_Printf("PRBS Time:%lu\r\n", timer2_check(PRBS_TIMER));
		DBG_Printf("ERR CNT:%lu\r\n",reg_PT_ERR_CNT_LANE_31_0);
		DBG_Printf("RX CNT:%lu\r\n",reg_PT_CNT_LANE_31_0);
		if (reg_PT_ERR_CNT_LANE_47_32 !=0) {
			ber = 0xff;
		} else {
			ber = 7+3+1;// related to total bits
			temp_counter = reg_PT_ERR_CNT_LANE_31_0;
			while(temp_counter>0){
				if(temp_counter<10) first_digit = temp_counter;
    			ber--;
				temp_counter/=10L;
			}
		}
		DBG_Printf("BER:%ue-%u\r\n",first_digit,ber);
		lnx_CLI_RETURN_LANE_15_0 = (uint16_t)first_digit<<4 | ber&0xf;

		prbs_checker_uninit();
		reg_PT_EN_LANE = save_pt_en_lane;
		reg_TX_SEL_BITS_LANE=save_tx_sel_bits;
		reg_RX_SEL_BITS_LANE=save_rx_sel_bits;
		
		break;
	}
	case 0xd0:{
#if _DBG_F0X
		switch(tag_CLI_ARG0){
			case 0:  lnx_CLI_RETURN_LANE_15_0 = (uint16_t)train.f1_qr;break;
			case 1:  lnx_CLI_RETURN_LANE_15_0 = (uint16_t)train.fn3;break;
			case 2:  lnx_CLI_RETURN_LANE_15_0 = (uint16_t)train.fn4;break;
			case 3:  lnx_CLI_RETURN_LANE_15_0 = (uint16_t)train.fn5;break;
			case 4:  lnx_CLI_RETURN_LANE_15_0 = sum_vref_top;break;
			case 5:  lnx_CLI_RETURN_LANE_15_0 = sum_vref_mid;break;
			case 6:  lnx_CLI_RETURN_LANE_15_0 = sum_vref_bot;break;
			case 7:  lnx_CLI_RETURN_LANE_15_0 = (uint16_t)train.g0_index;break;
			case 8:  lnx_CLI_RETURN_LANE_15_0 = (uint16_t)train.g1_index;break;
			case 9:  lnx_CLI_RETURN_LANE_15_0 = (uint16_t)train.f0_data;break;
			case 10: lnx_CLI_RETURN_LANE_15_0 = (uint16_t)train.saturated;break;
			case 11: lnx_CLI_RETURN_LANE_15_0 = (uint16_t)train.dfe_saturate;break;
		}
#endif
		break;
	}
	case 0xd1:{
		uint16_t *addr = tag_CLI_ARG0;
		lnx_CLI_RETURN_LANE_15_0 = *addr;
		break;
	}
	
#if 0
	case 0xd1:{// Debug tests
		#if 0
		T2CON = 0x62;
		timer2_msb = 0;
		TF2 = 0;
		TMR2 = 0;
		ET2 = 1;
		#endif
		uint8_t i = 0;
		uint32_t time1 = get_time();
		uint32_t time2 = 0;
		uint32_t count = 0;
		while(!tag_CLI_ARG0){
			time2 = get_time();
			count++;
			if(time2-time1>1000){
//				for(i=0;i<10;i++)
//					global_debug[i+1] = get_time()&0xffff;
				
				DBG_Printf("%lu: %lx %lx",count, time1,time2);
//				for(i=0;i<10;i++)
//				DBG_Printf(" %x",global_debug[i+1]);
				
				time2 = get_time();
				DBG_Printf(" %lx\r\n",time2);
			}
			time1 = time2;
			delay_ram(T_10us);
		}
		DBG_Printf("%lu done\r\n",count);
		break;
	}
	case 0xd2:{
		uint32_t time1 = 0, time2 = 0;
		uint16_t i = 0;
		time1 = get_time();
		timeout_start(tag_CLI_ARGS&0xffff);
		while(timeout==0);
		time2 = get_time();
		
		DBG_Printf("%lx %lx %lu %x\r\n", time1, time2, time2-time1, timer2_msb);
		break;
	}
	case 0xd3:{//
		//timerStart();
		timeout2_start(0,5000000);//5s
		while(!timeout2_check(0)){
		DBG_Printf("%lu\r\n", timer2_check(0));
		timeout_start(50000);
		while(!timeout);
		}
		DBG_Printf("%lu\r\n", timer2_check(0));
		break;
	}
	case 0xd4:{
		uint16_t time1 = TMR2;
		uint16_t time2 = 0;
		uint32_t count = 0;
		DBG_Printf("%x %x\r\n",RCAP2H,RCAP2L);
		while(!tag_CLI_ARG0){
			time2 = TMR2;
			count++;
			if(time2-time1>1000){
				DBG_Printf("%lu: %x %x",count, time1,time2);
				time2 = TMR2;
				DBG_Printf(" %x\r\n",time2);
			}
			time1 = time2;
			delay_ram(T_10us);
		}
		DBG_Printf("%lu done\r\n",count);
		break;
	}
#endif

#ifdef SUPPORT_EOM
	case 0xec:{// eom cal
		rx_eom_cal_ram(RX_EOM_ON_DEMAND_CAL);
		break;
	}
	case 0xe0:{// eom prepare setting
		lnx_ESM_PATH_SEL_LANE = 1;
		reg_ADAPT_ODD_EN_LANE = 1;
		reg_ADAPT_EVEN_EN_LANE = 1;
		lnx_ESM_EN_LANE = 1;
		break;
	}
#if _DBG_EOM
	case 0xea:{// eom auto measure combined-half eye
		int16_t esm_ph = 0;
		int8_t esm_vol = 0;
		int16_t low_ph = 0, high_ph = 0;
		int8_t top_vol = 0, bottom_vol = 0;
		if(!lnx_EOM_READY_LANE){
			DBG_Printf("Not ready!\r\n");	
			break;
		}
		// check width
		lnx_ESM_VOLTAGE_LANE_7_0 = 0;
		for(esm_ph=0;esm_ph>-1024;esm_ph--){
			set_esm(esm_ph);
			lnx_EOM_DFE_CALL_LANE=1;
			esm_measure();
			if(!cds112.f.eye_check_pass){
				low_ph = esm_ph;
				break;
			}
		}
		for(esm_ph=0;esm_ph<1024;esm_ph++){
			set_esm(esm_ph);
			lnx_EOM_DFE_CALL_LANE=1;
			esm_measure();
			if(!cds112.f.eye_check_pass){
				high_ph = esm_ph;
				break;
			}
		}
		// check height, 6 bits take effect
		esm_ph = 0;
		set_esm(esm_ph);
		for(esm_vol=0;esm_vol>-32;esm_vol--){
			lnx_ESM_VOLTAGE_LANE_7_0 = esm_vol;
			lnx_EOM_DFE_CALL_LANE=1;
			esm_measure();
			check_eye();//?
			if(!cds112.f.eye_check_pass){
				bottom_vol = esm_vol;
				break;
			}
		}
		for(esm_vol=0;esm_vol<=31;esm_vol++){
			lnx_ESM_VOLTAGE_LANE_7_0 = esm_vol;
			lnx_EOM_DFE_CALL_LANE=1;
			esm_measure();
			if(!cds112.f.eye_check_pass){
				top_vol = esm_vol;
				break;
			}
		}
		//for(esm_vol=-32;esm_vol<=31;esm_vol++){
		//	lnx_ESM_VOLTAGE_LANE_7_0 = esm_vol;
		//	lnx_EOM_DFE_CALL_LANE=1;
		//	esm_measure();
		//}
		DBG_Printf("ph[%d<%d],vol[%d<%d]\r\n",low_ph,high_ph,bottom_vol,top_vol);
		reg_MCU_DEBUGB_LANE_7_0 |= 0x80;
		// draw
		for(esm_vol=top_vol;esm_vol>=bottom_vol;esm_vol--){
			for(esm_ph=high_ph;esm_ph>=low_ph;esm_ph--){
				set_esm(esm_ph);
				lnx_ESM_VOLTAGE_LANE_7_0 = esm_vol;
				lnx_EOM_DFE_CALL_LANE=1;
				esm_measure();
				DBG_Printf("%u",cds112.f.eye_check_pass);
			}
			DBG_Printf("\r\n");
		}
		reg_MCU_DEBUGB_LANE_7_0 &= ~0x80;
		DBG_Printf("Done\r\n");
		break;
	}
#if 0
	case 0xed:{// why this part of code mess up things? including 0xea; cross 2 banks?
		int16_t esm_ph = 0;
		lnx_ESM_VOLTAGE_LANE_7_0 = 0;
		reg_MCU_DEBUGB_LANE_7_0 |= 0x80;
		for(esm_ph=1;esm_ph>=256+64;esm_ph++){
			set_esm(esm_ph);
			lnx_EOM_DFE_CALL_LANE=1;
			esm_measure();
			DBG_Printf("%u",cds112.f.eye_check_pass);
			if((esm_ph&0x3f)==0)DBG_Printf(" %u\r\n",esm_ph);
		}
		reg_MCU_DEBUGB_LANE_7_0 &= ~0x80;
		break;
	}
#endif
#endif
#endif
    case 0xf0: // TEST PAM4
                set_dfe_cont(0);
                drv_ADAPT_DATA_EN = 1;
                drv_ADAPT_SLICER_EN = 1;
                drv_ADAPT_EVEN_EN = 1;
                drv_ADAPT_ODD_EN = 1;
                cdr_dfe_scheme(cds_table[CDS_EN_DEFAULT]);
                cdr_dfe_scheme(cds_table[CDS_EN_DATAADAPT]);
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
                cdr_dfe_scheme(cds_table[CDS_EN_PAM2_HR]);
                cdr_dfe_scheme(cds_table[CDS_EN_DATAADAPT]);
                set_dfe_cont(1);
                break;
    case 0xf5:  // TEST PAM2 FR ADAPT
                set_dfe_cont(0);
                drv_ADAPT_DATA_EN = 1;
                drv_ADAPT_SLICER_EN = 1;
                drv_ADAPT_EVEN_EN = 0;
                drv_ADAPT_ODD_EN = 1;
                cdr_dfe_scheme(cds_table[CDS_EN_PAM2_FR]);
                cdr_dfe_scheme(cds_table[CDS_EN_DATAADAPT]);
                set_dfe_cont(1);
                break;

    case 0xf6:
                set_dfe_cont(0);
								cds_call = CDS_EN_DEFAULT;
								dfe_adaptation();
                set_dfe_cont(1);
								break;
    case 0xe6:
								cds_call = CDS_EN_PHASETRAIN2;
								dfe_adaptation();
								break;
#if 1
    case 0xf7:
    			do_rxtrain = 1;
    			TRX_Train();
    			break;
    /*case 0xf8:
    			//rxalign90_cal();
    			set_ph_dat(drv_PH_OS_DAT);
        		break;*/
    case 0xf8:
					// fnx measurement
					set_dfe_cont(0);
					cds_call = CDS_EN_PHASETRAIN2;
					dfe_adaptation();
					set_dfe_cont(1);
					break;
    case 0xf9:
        		do_train = 1;
        		TRX_Train();
        		break;
    case 0xfa:
    			trx_train_init();
        		tx_train();
        		break;

    case 0xfb:
        		trx_train_init();
        		//tx_train();
        		break;
    case 0xfc:
        		gain_train();
        		break;
    case 0xfd:
						//train_r = tag_CLI_ARG0;
						//train_c = tag_CLI_ARG1;
						train_r = reg_RXTRAIN_R_IDX_LANE_3_0;
						train_c = reg_RXTRAIN_C_IDX_LANE_7_0;
						Set_Rx_FFE();
						break;
    case 0xfe:
					// phase move DFE adapt (without measurement)
					set_dfe_cont(0);
					cds_call = CDS_EN_DEFAULT_PM;
					dfe_adaptation();
					set_dfe_cont(1);
					break;

    //added by JL
    case 0xde:
		        // get f-3 to f1 measurements
                //get_fx();
                //compute_f1_fn1_h(0, 0);
                
                print_header();
                cds_init();
                adv_rx_phase_opt(f1_fn1, Sel);
	        	break;

    case 0xdf:
                //adv_rx_phase_opt(f1_fn1, Sel);
                print_header();
                cds_init();
                adv_rx_phase_opt(f0d, Sel);

                /*
                DBG_Printf("\n\r");

                set_rx_align90_de_reg(0);
                save_rx_align90_de();
                set_rx_align90_de_reg(50);
                save_rx_align90_de();
                set_rx_align90_de_reg(190);
                save_rx_align90_de();

                DBG_Printf("\n\r");

                set_rx_align90_dd_reg(5);
                save_rx_align90_dd();
                set_rx_align90_dd_reg(55);
                save_rx_align90_dd();
                set_rx_align90_dd_reg(185);
                save_rx_align90_dd();

                DBG_Printf("\n\r");

                set_rx_dcc_reg(1, 23);
                save_rx_dcc(1);
                set_rx_dcc_reg(1, 63);
                save_rx_dcc(1);

                set_rx_dcc_reg(3, 90);
                save_rx_dcc(4);
                set_rx_dcc_reg(3, 127);
                save_rx_dcc(4);

                DBG_Printf("\n\r");

                set_ckpx_tune_reg(1, 0);
                save_ckpx_tune(1);
                set_ckpx_tune_reg(1, -1);
                save_ckpx_tune(1);
                set_ckpx_tune_reg(1, 1);
                save_ckpx_tune(1);

                DBG_Printf("\n\r");

                set_ckpx_tune_reg(2, 0);
                save_ckpx_tune(2);
                set_ckpx_tune_reg(2, -3);
                save_ckpx_tune(2);
                set_ckpx_tune_reg(2, 3);
                save_ckpx_tune(2);

                DBG_Printf("\n\r");

                set_ckpx_tune_reg(3, 0);
                save_ckpx_tune(3);
                set_ckpx_tune_reg(3, 7);
                save_ckpx_tune(3);                
                set_ckpx_tune_reg(3, -7);
                save_ckpx_tune(3); 

                DBG_Printf("\n\r");
                
                set_ckpx_tune_reg(4, -7);
                save_ckpx_tune(4);                 
                set_ckpx_tune_reg(4, 7);
                save_ckpx_tune(4);                 
                set_ckpx_tune_reg(4, 0);
                save_ckpx_tune(4); 
                */
               
		        break;
		case 0xdd:
						/* used for RTPCA */
						set_dfe_cont(0);
						reg_DFE_F0X_SEL_LANE_4_0 = DFE_FX_SEL_FP1;
						cds_call = CDS_EN_RTPCA;
						bit_performing_phase_train_adv = 1;
						dfe_adaptation();
						bit_performing_phase_train_adv = 0;

						set_dfe_cont(1);
						break;
    //

#endif
    default: break;
	}

	reg_PIN_GPO_LANE_7_0 = 0; 		
	
	lnx_CLI_START_LANE = 0;
}



#endif

