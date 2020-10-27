/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file trxtrain_ram.c
* \purpose trxtrain ram code
* \History
*	8/1/2019 Heejeong Ryu		Initial 
*/

#include "common.h"

#ifdef USE_BANKING
#pragma codeseg BANK3
#pragma constseg BANK3
#endif

/**
 * \module TrxTrain
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
*/

void TRX_Train_ram(void) BANKING_CTRL {
	uint16_t timer_chk;

	if( do_train | do_rxtrain) {
		//---------
		reg_DFE_MCU_CLK_EN_LANE = 0;
		//reg_EOM_CLK_EN_LANE = 1;
		dfe_hardware_cont_stop();
		do_phase_adapt = 0; //disable rpta	
		rxinit_4_spdchg_en = 0;

		if( reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE && do_train ) {
			reg_TX_TRAIN_ON_LANE = 1;
			#ifdef SUPPORT_TRAIN_HIS_LOG
			if(gen_rx==2) {
				TRAIN_CONTROL_15.BT.B3 |= 0x20;
			}
			else if(gen_rx==3) {
				TRAIN_CONTROL_16.BT.B3 |= 0x20;	  
			}
			#endif
		}	
		if( reg_PIN_RX_TRAIN_ENABLE_RD_LANE && do_rxtrain ) {
			reg_RX_TRAIN_ON_LANE = 1;
			#ifdef SUPPORT_TRAIN_HIS_LOG
			if(gen_rx==2) {
				TRAIN_CONTROL_15.BT.B3 |= 0x04;
			}
			else if(gen_rx==3) {
				TRAIN_CONTROL_16.BT.B3 |= 0x04;	  
			}
			#endif
		}	
		
		//to reduce size
		//if(lnx_RX_TRAIN_ONLY_DFE_LANE) {
		//
		//	reg_PIN_GPO_LANE_7_0 = 1;
        //
		//	{			
		//		adapt_slicer_en = lnx_ADAPT_SLICER_EN_LANE_7_0;
		//		adapt_data_en =	lnx_ADAPT_DATA_EN_LANE_7_0;
		//		//reg_DFE_TAP_SIGN_MODE_LANE = 0;
		//		set_ctle_accap(0); //fast
		//		if(lnx_PHASE_CONTROL_FUNC_EN_LANE) {
		//			train.phase_offset_data = (int8_t)lnx_TRAIN_PH_OS_DATA_2C_LANE_7_0;
		//			train.phase_offset_esm = (int8_t)lnx_TRAIN_PH_OS_ESM_2C_LANE_7_0;
		//			ph_control_mode = tag_TRAIN_PH_CONTROL_MODE;
		//			set_ph_mode(); 					
		//			phase_control_func();
		//		}
		//		timeout_start(2000); 
		//		if(tx_status_pcie_mode)
		//			cds_tb = cds_table[CDS_DEFAULT_PCIE];
		//		else
		//			cds_tb = cds_table[CDS_DEFAULT];
		//		cdr_dfe_init();
		//		#ifdef SUPPORT_DFE_UPDATE_EN_DEBUG
		//		dfe_adaptation_ram();
		//		#else
		//		dfe_adaptation();
		//		#endif	
		//	}	
		//	
		//	timer_chk = ~TMR1;	timer_chk = 2000 - timer_chk;  		
		//	reg_PIN_GPO_LANE_7_0 = 0;	
        //
 		//}
		//else 
		{ //normal
			//reg_PIN_GPO_LANE_7_0 = 1; 			
			trx_train_one_time_ram();
			//reg_PIN_GPO_LANE_7_0 = 0;				
			//timer_chk = ~TMR2;	timer_chk = 500 - timer_chk;			
		}
				
		//test
		//reg_MCU_DEBUG_LANE_31_0_b0 = (uint8_t)timer_chk;
		//reg_MCU_DEBUG_LANE_31_0_b1 = (uint8_t)(timer_chk>>8); 
		
		// txtrain complete
		if( do_train ) {
		
			if( ctrl_trx_train_pass==0 ) {
				//if(phy_mode<=SAS) {
				//	reg_TX_TRAIN_ERROR_LANE_1_0_b0 = 1; //1=There are no additional, untried, commonly supported settings for local PHY. 
				//	reg_TX_TRAIN_ERROR_LANE_1_0_b1 = 0; 
				//}				
				reg_TX_TRAIN_FAILED_LANE = 1;
				lnx_TX_TRAIN_FAIL_INT_LANE = 1;
				#ifdef SUPPORT_TRAIN_HIS_LOG
				if(gen_rx==2) {
					TRAIN_CONTROL_15.BT.B3 |= 0x40;
				}
				else if(gen_rx==3) {
					TRAIN_CONTROL_16.BT.B3 |= 0x40;	  
				}
				#endif
			}
			else {
				#ifdef SUPPORT_TRAIN_HIS_LOG
				if(gen_rx==2) {
					TRAIN_CONTROL_15.BT.B3 |= 0xc0;
				}
				else if(gen_rx==3) {
					TRAIN_CONTROL_16.BT.B3 |= 0xc0;	  
				}
				#endif
			}

			//Don't need to restore in fail case.  Commented by Paulo 02/15/18	
			//if(lnx_TX_TRAIN_FAIL_INT_LANE)
			//	restore_train();	
			
			#ifdef SUPPORT_AUTO_TRAIN_MODE
			if(!link_train_mode) 
				auto_train_complete();			
			else 
			#endif
				link_train_complete();			    
			reg_TX_FFE_TRAIN_DONE_LANE = 0;
			
			#ifdef _PCIE_USB_BUILD	
			//if( tx_pipe4_en==1 ) 
			{
				while(reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE);
				reg_TX_FFE_TRAIN_DONE_LANE = 0;
				
				#ifdef SUPPORT_PCIE_TXFFE_WA_FORCE_CTRL
				if(txffe_force_en == 0) {
					timeout_start(30000); //30mS
					do {
						pcie_txffe_overwrite(); //workaround for hardware bug
					} while(timeout);	
					timeout_stop;
				}
				//debug forced to set P9
				//reg_TX_EM_CTRL_REG_EN_LANE = 1;
				//reg_TX_EM_CTRL_PIPE_SEL_LANE = 0;
				//reg_TX_EM_PEAK_CTRL_LANE_3_0 = 0;
				//reg_TX_EM_PRE_CTRL_LANE_3_0 = 5;
				//reg_TX_EM_PO_CTRL_LANE_3_0 = 0;			
				
				#endif
			}
			#endif
			
			reg_TX_TRAIN_ON_LANE = 0; 
			#ifdef SUPPORT_ETHERNET_SEL_BIT_CTRL
			if(phy_mode==SERDES) { reg_TX_SEL_BITS_LANE = tx_sel_bit; reg_RX_SEL_BITS_LANE = rx_sel_bit; } 		
			#endif
			//reg_TX_TRAIN_FAILED_LANE = 0;					

        } 
 	    
		if( do_rxtrain ) {
			do_rxtrain = 0;
			reg_RX_TRAIN_COMPLETE_LANE = 1;		
			while( reg_PIN_RX_TRAIN_ENABLE_RD_LANE ){
				if(PHY_NS != ST_INIT) break;				
			} 
			#ifdef SUPPORT_TRAIN_HIS_LOG
			if( ctrl_trx_train_pass==0 ) {
				if(gen_rx==2) {
					TRAIN_CONTROL_15.BT.B3 |= 0x08;
				}
				else if(gen_rx==3) {
					TRAIN_CONTROL_16.BT.B3 |= 0x08;	  
				}
			}	
			else {
				if(gen_rx==2) {
					TRAIN_CONTROL_15.BT.B3 |= 0x18;
				}
				else if(gen_rx==3) {
					TRAIN_CONTROL_16.BT.B3 |= 0x18;	  
				}				
			}	
			#endif
			reg_RX_TRAIN_COMPLETE_LANE = 0;		
			reg_RX_TRAIN_ON_LANE = 0; 
			reg_RX_TRAIN_FAILED_LANE = 0;
	    }		

    }
	else { //abort 
		//reg_DFE_START_LANE = 0;
		//load dfe_tap/phase from mem data.
		opt2train_ram();
		
		restore_train();	

		//pin control - no train fail, no complete
		//delay01(10);
		reg_TX_TRAIN_ON_LANE = 0; 
		reg_RX_TRAIN_ON_LANE = 0; 
		reg_TX_FFE_TRAIN_DONE_LANE = 0;
		#ifdef _LAB
		Printf(" Abort!");
		#endif
	}

	PHY_STATUS = ST_NORMAL; 
	
	//if(lnx_PATTERN_PROTECT_EN_LANE==1) pattern_protect_dis = 0;
	//reg_DFE_TAP_SIGN_MODE_LANE = 1; // Analog error patch. during normal should be 1. don't want to change dfe sign.
	ctrl_cdr_phase_on = 0;
	train_comp = 0;  	
	timeout_stop2;
	#ifdef _SATA_SERDES_BUILD
	reg_TIMER_3_EN_LANE = 0;
	reg_INT4_TIMER3_INT_EN_LANE = 0;
	reg_INT11_FRAME_UNLOCK_INT_EN_LANE = 0;	
	reg_INT12_FRAME_LOCK_INT_EN_LANE = 0;	
	#endif
	#ifdef _28G_X2
	//TX_TRAIN_CTRL_LANE.VAL &= 0xa01fff02;
	//TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.VAL = 0x00040300; 
	//TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.VAL = 0;	
	RX_LANE_INTERRUPT_REG1.BT.B3 = 0x60;
	RX_LANE_INTERRUPT_REG1.BT.B3 = 0;	
	#endif
	
	//lnx_DFE_CORE_BYPASS_LANE = 0; //for lane_margin dfe run
 
	pre_normal_process_ram();
	
	//lnx_PHASE_ADAPT_ENABLE_LANE = 1; //debug
	
	//PHY_STATUS = ST_NORMAL; 
 
}


void trx_train_one_time_ram(void) BANKING_CTRL {

	#if _DEBUG
	DBG_Printf("\r\nTRX TRAIN Start");
	#endif
	
    trx_train_init_ram();
	dfe_stop = 0;
	
	#if _DEBUG
	DBG_Printf("\r\nTRX TRAIN INIT Done");
	#endif
	
    while(1){

	trx_train_control();
		if( ctrl_trx_train_done ) break;
		
        if(ctrl_rx_train_on) {
			#if _DEBUG
		    DBG_Printf("\r\n##RX TRAIN##");
			#endif
			//#ifdef SUPPORT_DUMMY_TRAIN
			//if(cmx_TRAIN_SIM_EN) rx_train_dummy();
			//else 
			//#endif
			//if(lnx_BYPASS_CTLE_TRAIN_LANE==0)
				rx_train_ram();
			//else
			//	ctrl_rx_train_done = 1; 		
		}
        else if(ctrl_tx_train_on) {
			#if _DEBUG
		    DBG_Printf("\r\n##TX TRAIN##"); 
			#endif
			//#ifdef SUPPORT_DUMMY_TRAIN
			//if(cmx_TRAIN_SIM_EN && tx_status_pcie_mode==0) tx_train_dummy();
			//else 
			//#endif
			tx_train_ram();
		}
		
   }
	
    trx_train_end_ram();
	
	#if _DEBUG
    //DBG_PS("\r\nTRX TRAIN RESULT");print_train();
 	DBG_Printf("\r\nTRX TRAIN End");
	#endif
}

void trx_train_end_ram(void) BANKING_CTRL {
	uint8_t num, index;
	
	#if _DEBUG
    DBG_Printf("\r\ntrx_end");            
	#endif

	//if(cmx_TRAIN_SIM_EN)	{
	//	ctrl_trx_train_pass = 1;
	//	return;
	//}
	
	#ifndef _PCIE_USB_BUILD
	if (tag_GAIN_TRAIN_END_EN)
	{
		gain_train_with_c = 0;
		//gain_train_with_sampler = tag_GAIN_TRAIN_WITH_SAMPLER;//0
		
		opt2train_ram();
		
		ctrl_cdr_phase_on = 0;
		
		dfe_res_f0a_low_thres_01 = tag_DFE_RES_F0A_LOW_THRES_01_END;
		dfe_res_f0a_low_thres_2 = tag_DFE_RES_F0A_LOW_THRES_2_END;
		dfe_res_f0a_low_thres_3 = tag_DFE_RES_F0A_LOW_THRES_3_END;
		dfe_res_f0a_high_thres = tag_DFE_RES_F0A_HIGH_THRES_END;
		
		gain_train_ram();
		train2opt();
	}
	#endif
	
	if (tag_DFE_ISI_RES_ADAPT_EN) //1
	{ 
		#if _DEBUG
		DBG_Printf("\r\n++(res_adapt)");            
		#endif
		//Dfe_isi_res_adapt_en = 1;
		//dfe_cdr_phase_opt_ram();
		//train2opt();
		//Dfe_isi_res_adapt_en = 0;
		
		//if(tx_status_pcie_mode) num = 1; 			
		//else num = 4;
		
		index = 0;
		ctrl_cdr_phase_on = 0;
		//for (index = 0; index < num; index ++)
		{
			#ifdef SUPPORT_DFE_UPDATE_EN_DEBUG
			dfe_cdr_phase_opt_ram(); // adapt DFE
			#else
			dfe_cdr_phase_opt(); // adapt DFE	
			#endif	
			update_dfe_res();
		}
		train2opt();
	}	
	//#endif
	
	
/* -- Bike's Note: 	 
The phase_offset_data inside opt set is the optimal phase offset when ph_control_mode = train_ph_control_mode. 
The final trained (current) phase_offset_data is the phase offset when ph_control_mode = 0. 
We want to record this phase offset for test purpose and hence introduce a new variable named opt_phase_offset_normal. 
Update this variable right after advanced clock alignment function.

## No phase_offset_normal in train set or opt set.
## the global variable of the current phase_offset_data is the input for phase control function.
## during training, the phase_offset_data in train set always follow up with the current phase_offset_data.
## the phase_offset_data in opt set only updates when needed.
## When we enter into tracking mode, the real time phase adaptation algorithm just keep using the current phase_offset_data.
*/	
	#ifndef _PCIE_USB_BUILD
	if((ph_control_mode == 2 || ph_control_mode == 3 ) && lnx_CDRPHASE_OPT_EN_LANE) {  
		advanced_clk_align();  
	}
	#endif
	
	//lnx_TRAIN_PH_OS_DATA_2C_LANE_7_0 = (uint8_t)train.phase_offset_data;
	//lnx_TRAIN_PH_OS_ESM_2C_LANE_7_0 = (uint8_t)train.phase_offset_esm;
	
	ph_control_mode = 0;
	//cdr.min_phase_os = (ph_control_mode == 0 || ph_control_mode == 1)? tag_CDR_MIN_PHASE_OS_MODE01:tag_CDR_MIN_PHASE_OS_MODE23;
	//cdr.max_phase_os = (ph_control_mode == 0 || ph_control_mode == 1)? tag_CDR_MAX_PHASE_OS_MODE01:tag_CDR_MAX_PHASE_OS_MODE23;
	set_ph_mode(); 
	phase_control_func();	

	#if _DBG_RXTRAIN
	print_ph_ctrl_status();
	#endif
	
	#ifndef _PCIE_USB_BUILD
	if(!tx_status_pcie_mode) {
		dfe_adaptation();
		train2opt();
		
		#if ( tag_FINAL_BOTH_SAMPLER_ADAPT )  //1
		adapt_data_en = 1;
		adapt_slicer_en = 1;
		dfe_adaptation();
		train2opt();			
		#endif

		#if ( tag_FINAL_OFST_ADAPT_EN )  //1
		//set_ctle_accap(1); //slow
		reg_CLK_RXACCAP_SEL_LANE_1_0 = 1; //use REFCLK
		reg_FFE_PULSE_DIV_LANE_2_0 = 3; //5;

		//adapt_data_en = 1;
		//adapt_slicer_en = 1;
		cds_tb = cds_table[CDS_DFE_OFST];	
		dfe_adaptation();
		train2opt();				
		#endif
	}
	#endif
	
	//ctrl_trx_train_pass = opt.good_eo; // return training pass
	//lnx_RD_DFE_F0D_LANE_7_0 = opt.eo;
	//reg_MCU_DEBUGB_LANE_7_0 = ctrl_trx_train_pass;
	
	//Added DFE Step Patch for GEN3 Short Trace
	if( gen_rx == 2) {
		
		//END_XDAT_LANE.BT.B1 = train.f0a;
		//END_XDAT_LANE.BT.B2 = UPHY14_TRX_ANAREG_TOP_128.BT.B0; //reg_FFE_RES1_SEL_LANE_3_0,reg_FFE_CAP1_SEL_LANE_3_0
		//END_XDAT_LANE.BT.B3 = reg_DFE_F0_SAT_E_LANE | (reg_DFE_F0_SAT_O_LANE?0x02:0);
		
		if(reg_DFE_F0_SAT_E_LANE || reg_DFE_F0_SAT_O_LANE || (train.f0a>= 0x32 && (reg_FFE_CAP1_SEL_LANE_3_0<=3) /*&& cmx_DFE_STOP_GEN3_EN*/)) {
		//if(reg_DFE_F0_SAT_E_LANE || reg_DFE_F0_SAT_O_LANE || (train.f0a>= reg_MCU_DEBUG_CMN_6_7_0 && (reg_FFE_CAP1_SEL_LANE_3_0<=reg_MCU_DEBUG_CMN_5_7_0) /*&& cmx_DFE_STOP_GEN3_EN*/)) {
	
			reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;
			reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0;
			reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0;
			reg_DFE_UPDATE_DC_EN_LANE = 0;
			dfe_stop = 1;
			
			reg_DFE_INIT_SEL_LANE = 0;
			reg_DFE_START_LANE = 0;
			CKCON = 0x07; 			// MCU WAIT time the slowest
			reg_RESET_DFE_LANE = 1;
			reg_RESET_DFE_LANE = 0;
			CKCON = 0x00; 			// MCU WAIT time setting back to normal.
		
			reg_FFE_RES1_SEL_LANE_3_0       = 0x6; //train_save_tb[gen_rx].res1;
			reg_FFE_RES2_SEL_O_LANE_3_0     = 0;   //train_save_tb[gen_rx].res2_o;
			reg_FFE_RES2_SEL_E_LANE_3_0     = 0;   //train_save_tb[gen_rx].res2_e;		
			reg_FFE_CAP1_SEL_LANE_3_0       = 0xC; //train_save_tb[gen_rx].cap1;
			reg_FFE_CAP2_SEL_O_LANE_3_0     = 0xF; //train_save_tb[gen_rx].cap2_o;
			reg_FFE_CAP2_SEL_E_LANE_3_0     = 0xF; //train_save_tb[gen_rx].cap2_e;
		}		
	
	}
	
	//if(ctrl_trx_train_pass) 
	{
		save_train_ram(do_train, 1, 1, 1); //save train result
	}
	
	//reg_EOM_CLK_EN_LANE = 0; //save power
	#if _DEBUG
    DBG_Printf("\r\ntrx_end finish == Train Pass = %d", ctrl_trx_train_pass);            
	#endif
	
}

void trx_train_init_ram(void) BANKING_CTRL {
	
	uint32_t temp32;
	
	reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 0;
	reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 0;	
	reg_TX_TRAIN_FAILED_LANE = 0;
	reg_TX_FFE_TRAIN_DONE_LANE = 0;
	//lnx_TX_TRAIN_FAIL_INT_LANE = 0;
	reg_RX_TRAIN_COMPLETE_LANE = 0;		
	reg_RX_TRAIN_FAILED_LANE = 0;
	reg_TX_TRAIN_ERROR_LANE_1_0_b0 = 0; 
	reg_TX_TRAIN_ERROR_LANE_1_0_b1 = 0; 
	//reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
	//reg_LOCAL_CTRL_FIELD_VALID_LANE = 0;
	//lnx_RX_TRAIN_TIMEOUT_LANE = 0;
	DFE_TEST_1.BT.B3 = 0;


	#if tag_TRAIN_TIME_OUT_EN
	reg_TIMER_2_SEL_LANE_1_0 = 0x02;	////use PWM2 1m unit timer
	reg_PWM2_EN_LANE = 0;
	reg_PWM2_EN_LANE = 1;	
	
	if(lnx_TX_TRAIN_TIMER_ENABLE_LANE && do_train) {
		timeout2_start(lnx_TRX_TRAIN_TIMER_LANE_15_0+1);
	}
	else if(lnx_RX_TRAIN_TIMER_ENABLE_LANE && do_rxtrain) {
		timeout2_start(lnx_RX_TRAIN_TIMER_LANE_15_0+1);
	}	
	
	#ifdef _SATA_SERDES_BUILD
	if(phy_mode != PCIE) {
	reg_FRAME_LOCK_ISR_LANE = 0;
	reg_FRAME_UNLOCK_ISR_LANE = 0;
	reg_INT11_FRAME_UNLOCK_INT_EN_LANE = 1;	
	reg_INT12_FRAME_LOCK_INT_EN_LANE = 1;	
	reg_INT4_TIMER3_INT_EN_LANE = 1;
	reg_TIMER_3_EN_LANE = 0;
	if(reg_FRAME_LOCK_LANE==0) reg_TIMER_3_EN_LANE = 1;
	}	
	#endif //_SATA_SERDES_BUILD
	
	train_timer_int = 1;
	#endif //tag_TRAIN_TIME_OUT_EN
	
	ctrl_cdr_phase_on = 0;
	//cds_tb = cds_table[CDS_DATAADAPT];
	ctrl_rx_only_mode = do_train==0; 
	adapt_data_en = 1; // force to set both sampler to 1 tag_TRAIN_USE_D; //0
	adapt_slicer_en = 1; //tag_TRAIN_USE_S; //1
	
	//reg_DFE_TAP_SIGN_MODE_LANE = 0;
	cdr_dfe_init(); 
	dfe_ffloat_en = 0;

	set_accap_sel(ACCAP_DEMUX);
	reg_FFE_PULSE_DIV_LANE_2_0 = 2;
	
	train_status_reset(); 	

	//adjust sumf_boost_target_c, cdr_midpoint_phase_os by temp
	//if(tx_status_pcie_mode) 
	{
		#ifdef _PCIE_USB_BUILD 
		sumf_boost_target_c = 0;
		#endif //_PCIE_USB_BUILD 
	}
	#ifdef _SATA_SERDES_BUILD
	else 
	{
		if( tsen_dat < -259 ) { //<30' 
			sumf_boost_target_c = -85; cdr_midpoint_phase_os = 0;
		}
		else if( tsen_dat > -160 ) {// >70'
			sumf_boost_target_c = -68; cdr_midpoint_phase_os = 4;
		}
		else { 
		sumf_boost_target_c = -76; cdr_midpoint_phase_os = 2;
		}

		if(ph_control_mode>0 && ph_control_mode<4) {
			if( lnx_EOM_ALIGN_CAL_DONE_LANE==0 || lnx_EOM_EOMDAT_CAL_PASS_LANE==0 ) {
				eom_align_cal(); 
			}
		}

		dfe_cdr_phase_opt();
	}
	#endif //_SATA_SERDES_BUILD 

	//Dfe_isi_res_adapt_en = 0;
	// CDR Phase Optimization    //1                     //0  
	
	#ifdef _DEBUG
    //DBG_Printf("\r\nTRAIN_PH_CONTROL_MODE : %d ",tag_TRAIN_PH_CONTROL_MODE);	
	#endif

		// TX init
	if (do_train) {
		//tx_init	
		//if(link_train_mode==0) trainif_init();		
		
		//#ifndef _PCIE_USB_BUILD
		//if (tag_TX_NO_INIT==0) //0
		//{
		//	if(tx_pipe4_en==0)  {
		//		tx_reset(train.tx_preset_index); //3
		//		dfe_cdr_phase_opt();
		//	}	
		//}
		//#endif
		
		train2opt(); 
	}

	//if(cmx_TRAIN_SIM_EN) return;
	
	// RX_init
	if (!tag_RX_NO_INIT) //0
	{
		//DBG_PS("\r\n\t -rx_init");
        train_r = tag_RX_RXFFE_R_INI;  //4
        train_c = tag_RX_RXFFE_C_INI;  //15
		Set_Rx_FFE_ram();
		
		//reset dfe_res
		dfe_f0_res_sel = 3;
		dfe_res_f1 = 3;
		dfe_f234_res_sel = 1;
		dfe_f567_res_sel = 1;
		
		//
		train.phase_offset_esm = 0;	
		opt.phase_offset_esm = 0;

		train.phase_offset_data = (int8_t)lnx_INI_PHASE_OFFSET_LANE_7_0; //-14; //0;  //load phase as calibration result
		opt.phase_offset_data = (int8_t)lnx_INI_PHASE_OFFSET_LANE_7_0;//-14; //0;		
		
		//
		//cdr.min_phase_os = (ph_control_mode == 0 || ph_control_mode == 1)? tag_CDR_MIN_PHASE_OS_MODE01:tag_CDR_MIN_PHASE_OS_MODE23;
		//cdr.max_phase_os = (ph_control_mode == 0 || ph_control_mode == 1)? tag_CDR_MAX_PHASE_OS_MODE01:tag_CDR_MAX_PHASE_OS_MODE23;
	 	
		ph_control_mode = 0;
		set_ph_mode(); // force to mode0 //tag_TRAIN_PH_CONTROL_MODE;
		phase_control_func(); 

		#if _DBG_RXTRAIN
		print_ph_ctrl_status();
		#endif
		
		/*switch(gen_rx) 	{
		case 0:  ctrl_rx_train_mode = reg_G1_RX_TRAIN_MODE; break; 
		case 1:  ctrl_rx_train_mode = reg_G2_RX_TRAIN_MODE;  break; 
		case 2:  ctrl_rx_train_mode = reg_G3_RX_TRAIN_MODE;  break; 
		case 3:  ctrl_rx_train_mode = reg_G4_RX_TRAIN_MODE;  break;
		}*/
		ctrl_rx_train_mode = 0; 
	}	

	//dfe_cdr_phase_opt_ram(); 

	// TX init --> moved after gain_train for txtrain stuck at the train reset
	//if (do_train) {
	//	//tx_init	
	//	if(link_train_mode==0) trainif_init();		
	//	
	//	if (tag_TX_NO_INIT==0) //0
	//	{
	//		if(tx_pipe4_en==0)  tx_reset(train.tx_preset_index); //3
	//		dfe_cdr_phase_opt_ram();
	//	}
	//}
	//dfe_cdr_phase_opt_ram(); //??
	
    
    //move to after gaintrain
	//ctrl_cdr_phase_on = lnx_CDRPHASE_OPT_EN_LANE && tag_CDR_PHASE_OPT_FIRST_EN;
	//if (ctrl_cdr_phase_on)
	//{
	//	//DBG_PS("\r\n\t -CDR Phase Opt");
	//	dfe_cdr_phase_opt_ram();
	//}
	
	//DBG_Printf("\r\n\t (1)train_phase_os=%d, opt_phase=%d ",train_phase_os, opt_phase_os);
	//train2opt();
	//DBG_Printf("\r\n\t (2)train_phase_os=%d, opt_phase=%d ",train_phase_os, opt_phase_os);

 	// Sweep TX Preset                0
	//if (do_train && tag_TX_SWEEP_FIRST_EN)
	//{
	//	ctrl_cdr_phase_on = 0;
	//	tx_preset_sweep();
	//}

	gain_train_with_c = 1; //tag_GAIN_TRAIN_WITH_C;   //1
	//gain_train_with_sampler = tag_GAIN_TRAIN_WITH_SAMPLER;

	if (tag_GAIN_TRAIN_INIT_EN) //1
	{		
		train_r = tag_RXFFE_R_GAIN_TRAIN;  //4
        train_c = tag_RXFFE_C_GAIN_TRAIN;  //15
		Set_Rx_FFE_ram();

		ctrl_cdr_phase_on = 0;
		
		dfe_res_f0a_low_thres_01 = 20; //tag_DFE_RES_F0A_LOW_THRES_01_INIT;
		dfe_res_f0a_low_thres_2 = 20; //tag_DFE_RES_F0A_LOW_THRES_2_INIT;
		dfe_res_f0a_low_thres_3 = 20; //tag_DFE_RES_F0A_LOW_THRES_3_INIT;
		dfe_res_f0a_high_thres = 50; //tag_DFE_RES_F0A_HIGH_THRES_INIT;
		
		gain_train_ram();
		
       train_r = tag_RX_RXFFE_R_INI;  //0
        //if( tag_GAIN_TRAIN_WITH_C == 0)
		//{
		//train_c = tag_RX_RXFFE_C_INI; //15
		//}
		
		Set_Rx_FFE_ram();
		//dfe_cdr_phase_opt_ram();		
	}

	#ifdef SUPPORT_DFE_UPDATE_EN_DEBUG
	dfe_cdr_phase_opt_ram(); // adapt DFE
	#else
	dfe_cdr_phase_opt(); // adapt DFE	
	#endif	

	train2opt(); 

	#if ( tag_INIT_OFST_ADAPT_EN )  //0
	//if(!train_short_mode) 
	{
		//set_ctle_accap(1); //slow
		//adapt_data_en = 1;
		//adapt_slicer_en = 1;
		//dfe_ofst_adapt_en = 1;
		cds_tb = cds_table[CDS_DFE_OFST];	
		#ifdef SUPPORT_DFE_UPDATE_EN_DEBUG
		dfe_adaptation_ram();
		#else
		dfe_adaptation();
		#endif	
		//dfe_ofst_adapt_en = 0;
		train2opt();		
		//set_ctle_accap(0); //fast
		
	}	
	#endif
	
	/*
	if(opt.eo < 10 && !train_short_mode) { //[HR] 10 is better than 15 based on Fang's test result.
		ctrl_cdr_phase_on = lnx_CDRPHASE_OPT_EN_LANE && tag_CDR_PHASE_OPT_FIRST_EN && cmx_TRAIN_SIM_EN==0;
	}
	else {	
		ctrl_cdr_phase_on = 0;
	}	
		
	if (ctrl_cdr_phase_on)
	{
		//DBG_PS("\r\n\t -CDR Phase Opt");
		train_r = 0; 
        if( tag_GAIN_TRAIN_WITH_C == 0)	train_c = 15;
		Set_Rx_FFE_ram();

	/// Debug for Phase Variation
		adapt_data_en = tag_TRAIN_USE_D; //0
		adapt_slicer_en = tag_TRAIN_USE_S; //1		
		set_ph_mode(0);
	///
		dfe_cdr_phase_opt();
		train2opt(); 
		
		ctrl_cdr_phase_on = 0;
		train_r = tag_RX_RXFFE_R_INI;  //0
        if( tag_GAIN_TRAIN_WITH_C == 0)	train_c = tag_RX_RXFFE_C_INI; //15
		Set_Rx_FFE_ram();
		dfe_cdr_phase_opt();	
		train2opt(); 
	}
*/


}


//__code const uint8_t gt0_dfe_res[] = {0, 1, 2, 3 };
//__code const uint8_t gt1_dfe_res[] = {0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 };
//__code const uint8_t gt1_c []      = {15, 15, 15, 15, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
//__code const uint8_t gt2_dfe_res[] = {0, 1, 2, 3, 1, 2, 3 };
//__code const uint8_t gt2_sampler_by2[] = {1, 1, 1, 1, 0, 0, 0 }; 
//__code const uint8_t gt3_dfe_res[] = {0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 2, 3 };
//__code const uint8_t gt3_c []      = {15, 15, 15, 15, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 0, 0, 0};
//__code const uint8_t gt3_sampler_by2 [] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0};

//__code const uint8_t gt1_c_pcie [] = {12, 6, 4};
__code const uint8_t gt1_c_pcie0 [] = {12, 7, 5};
//__code const uint8_t gt1_c_pcie1 [] = {12, 12, 12, 12, 7, 5};

void gain_train_ram(void) BANKING_CTRL
{
	uint8_t step_number = 0;
	uint8_t gain_index = 0; //largest gain + smallest dfe_res
	uint8_t gain_table_size, dfe_res_f0a_low_thres;
	uint8_t gain_table_index;
	//bool 	ctrl_sampler_by2;

	#if _DEBUG
    DBG_PS("\r\n++(gain_train)");
	#endif
		
	/*if( tag_GAIN_TRAIN_WITH_SAMPLER == 1)
	{ //0   //22      //7
		gain_table_size = (gain_train_with_c? gt3_size: gt2_size);
		gain_table_index = (gain_train_with_c?3:2);
	}
	else*/ 
	{
		//if(tx_status_pcie_mode) 
		{
						//            1                 //4
			//if(phy_mode == PCIE /*&& gen_rx==2*/)			
				gain_table_size = 3; //(gain_train_with_c? 3: gt0_size); 
			//else 
			//	gain_table_size = (gain_train_with_c? 6: gt0_size); //3
			//gain_table_size = (gain_train_with_c? 3: gt0_size); 
			//gain_table_index = (gain_train_with_c?4:0);			
		}	
		//else 
		//{
		//				//            1              //19       //4
		//	gain_table_size = (gain_train_with_c? gt1_size: gt0_size);
		//	gain_table_index = (gain_train_with_c?1:0);
		//}		
	}
	
	#if _DEBUG
	//DBG_Printf("\r\n\t gain_table_size=%d, gain_table_index=%d", gain_table_size, gain_table_index);
	#endif
	
	while (step_number < gain_table_size) //(gain_table_size + 1)
	{
		//switch (gain_table_index)
		//{
		//case 0:
			//ctrl_step_res_dfe = gt0_dfe_res[gain_index];
		//	break;
		//case 1: //
			//ctrl_step_res_dfe = gt1_dfe_res[gain_index];			
			//train_c = gt1_c[gain_index];
		//	break;
		/*case 2:
			ctrl_step_res_dfe = gt2_dfe_res[gain_index];
			//ctrl_sampler_by2 = gt2_sampler_by2[gain_index];
			//if( load_sampler(ctrl_sampler_by2) ) set_t0_dfe();
			break;
		case 3:
			ctrl_step_res_dfe = gt3_dfe_res[gain_index];
			train_c = gt3_c[gain_index];
			//ctrl_sampler_by2 = gt3_sampler_by2[gain_index];
			//if( load_sampler(ctrl_sampler_by2) ) set_t0_dfe();
			break;*/
		//case 4: //
			//if(phy_mode == PCIE /*&& gen_rx==2*/)	{		
				train_c = gt1_c_pcie0[gain_index];		
			//}
			//else {
			//	ctrl_step_res_dfe = gt1_dfe_res[gain_index];			
			//	train_c = gt1_c_pcie1[gain_index];
			//}
		//	break;			
		//default:
			//ctrl_step_res_dfe = gt0_dfe_res[gain_index];
		//}

		//lnx_GAIN_TRAIN_INDEX_RD_LANE_7_0 = train_c;		
		Set_Rx_FFE_ram();

	#if _DEBUG
		//DBG_Printf("\r\n\t%d: gain_index=%d ctrl_step_res_dfe=%d, c=%d ", step_number,gain_index,ctrl_step_res_dfe,train_c);
	#endif
	
		#ifdef SUPPORT_DFE_UPDATE_EN_DEBUG
		dfe_cdr_phase_opt_ram(); // adapt DFE
		#else
		dfe_cdr_phase_opt(); // adapt DFE	
		#endif	
		step_number ++;
		                  //32
						  
	#if _DEBUG
		//DBG_Printf(" train.f0a_max=%d train.dfe_saturate=%d", train.f0a_max, train.dfe_saturate);
	#endif		
		
		if (dfe_res_f0 == 0 || dfe_res_f0 == 1)
		{
			dfe_res_f0a_low_thres = dfe_res_f0a_low_thres_01; //36
		}
		else if (dfe_res_f0 == 2)
		{
			dfe_res_f0a_low_thres = dfe_res_f0a_low_thres_2; //41
		}
		else // dfe_res_f0 == 3
		{
			dfe_res_f0a_low_thres = dfe_res_f0a_low_thres_3; //44			
		}
	
		if ((train.f0a_max < dfe_res_f0a_low_thres) && train.dfe_saturate==0 && (gain_index >=1) )
		{
			gain_index --;
		}                               // 50                                       32
		else if (((train.f0a_max >= dfe_res_f0a_high_thres) || ((train.f0a_max <= dfe_res_f0a_low_thres) && train.dfe_saturate)) 
	        	&& (gain_index < (gain_table_size-1)))
		{
			gain_index ++;
		}
		else
		{
			break;
		}
	}
	
}

void save_train_ram(bool save_txffe_on, bool save_rxffe_on, bool save_dfe_on, bool save_dfe_phase_on ) BANKING_CTRL {
	uint8_t gen;
	
	#if _DBG_TRAIN_SAVE==1
	DBG_Printf("\r\n++(train_save)");
	#endif
	
	gen = gen_tx;
	#ifdef _SATA_SERDES_BUILD
	if(phy_mode==SERDES) { 
		gen = min(reg_PIN_PHY_GEN_TX_RD_LANE_3_0, cmx_PHY_GEN_MAX_3_0);
		gen = get_gen_memory_index(gen);
	}	

	if(save_txffe_on && !link_train_mode) { //no need to save for link train
		TRAIN_CONTROL_9.BT.B3 |= (0x01<<gen); //txtrain_passed_g*_lane
		txffe_save[gen][0] = LINK_TRAIN_MODE0.BT.B0; //[7:4]em_po
		txffe_save[gen][1] = LINK_TRAIN_MODE0.BT.B1; //[7:4]em_peak [3:0]em_pre
		if(reg_ANA_TX_EM_PEAK_EN_LANE) txffe_save[gen][0] |= 0x08;
		if(reg_ANA_TX_EM_PRE_EN_LANE)  txffe_save[gen][0] |= 0x04; 
		if(reg_ANA_TX_EM_PO_EN_LANE)   txffe_save[gen][0] |= 0x02;
		if(txffe_force_en)    		   txffe_save[gen][0] |= 0x01;	

	}
	#endif
	
	if(save_rxffe_on) {
		TRAIN_CONTROL_9.BT.B1 |= (0x01<<gen); //rxtrain_passed_g*_lane		
		
		//rc
		rc_save[gen][1] = UPHY14_TRX_ANAREG_TOP_128.BT.B0; //ffe_cap1/res1
		rc_save[gen][2] = UPHY14_TRX_ANAREG_BOT_0.BT.B0; //ffe_cap2/res2/E
		rc_save[gen][3] = UPHY14_TRX_ANAREG_TOP_129.BT.B0; //ffe_cap2/res2/O

	}
	
	if(save_dfe_on) {
		//dfe_res
		dfe_res_save_en |= 0x01<<gen;
		rc_save[gen][0] = UPHY14_TRX_ANAREG_BOT_20.BT.B0; //dfe_res_f0/f1/f234
		if(lnx_DFE_RES_F5TO15_MAX_SPD_EN_LANE) {
			rc_save[gen][0] |= 0xe0;
			UPHY14_TRX_ANAREG_BOT_21.BT.B0 |= 0xe0;
		}		
	}	

	if(lnx_CAL_DONE_LANE==0) return;
	
	if(save_dfe_phase_on) {
		
		dfe_phase_save_en |= 0x01<<gen;
		
		//dfe	
		memcpy((uint8_t *)&(dfe_sm_save[gen]), (uint8_t *)&DFE_READ_EVEN_SM_REG0, sizeof(Status_dfe_sm_t));	
		
		//phase
		phase_save[gen][0] = reg_ALIGN90_REF_LANE_5_0 & 0x7f;
		phase_save[gen][1] = UPHY14_TRX_ANAREG_BOT_12.BT.B0; //gm
		phase_save[gen][2] = UPHY14_TRX_ANAREG_BOT_13.BT.B0; //dm, dac			
	}	

	#if _DBG_TRAIN_SAVE==1
	debug_print_train_result();
	#endif
			
}	

void opt2train_ram(void) BANKING_CTRL {

	memcpy((uint8_t *)&train, (uint8_t *)&opt, sizeof(Status_Train_t));

    //train_phase_os          = opt_phase_os ;
    //cdr_phase_update(train_phase_os);
	
    train_r                 = opt_r ;
    train_c                 = opt_c ;
	train_g0_index 			= opt_g0_index;
	train_gn1_index 		= opt_gn1_index;
	train_g1_index 			= opt_g1_index;
	
	Set_Rx_FFE_ram();
	
}

__code uint8_t Res_sel_Table0[]     = {  11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0 };
__code uint8_t Res_sel2_e_Table0[]  = {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
__code uint8_t Res_sel2_o_Table0[]  = {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

__code uint8_t Cap_sel_Table0[]     = { 0, 0, 0, 0, 1, 3, 5, 8, 15, 15, 15, 15, 15, 15, 15, 15 };  
__code uint8_t Cap_sel2_e_Table0[]  = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 5, 8, 11, 15 };
__code uint8_t Cap_sel2_o_Table0[]  = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 5, 8, 11, 15 };
__code uint8_t Cap_sel2_Table0[]  = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 3, 3, 3 };



void Set_Rx_FFE_ram(void) BANKING_CTRL{
	//uint8_t ana_r1, ana_c1;
	uint8_t r, c;
	
	r = train_r;
	c = train_c;
	train.rx_ffe_index = (c<<4) + r;
	
	if(lnx_BYPASS_CTLE_TRAIN_LANE) return;
	
	reg_FFE_RES1_SEL_LANE_3_0 = Res_sel_Table0[r];
	
	if(r2_adj_on!=1) {
		reg_FFE_RES2_SEL_E_LANE_3_0 = Res_sel2_e_Table0[r];
		reg_FFE_RES2_SEL_O_LANE_3_0 = Res_sel2_o_Table0[r];
	}
	
	//if(dfe_stop >= 1) return;
	
	//reg_FFE_DATA_RATE_LANE_3_0  = Data_rate_Table[c]; //moved to spdtbl
	reg_FFE_CAP1_SEL_LANE_3_0   = Cap_sel_Table0[c];
	//if( lnx_CTLE_SET_SEL_LANE ) {
	//	reg_FFE_CAP2_SEL_E_LANE_3_0 = Cap_sel2_Table0[c];
	//	reg_FFE_CAP2_SEL_O_LANE_3_0 = Cap_sel2_Table0[c];	
	//}
	//else 
	{
		reg_FFE_CAP2_SEL_E_LANE_3_0 = Cap_sel2_e_Table0[c];
		reg_FFE_CAP2_SEL_O_LANE_3_0 = Cap_sel2_o_Table0[c];
	}
	
	#if _DEBUG
	//ana_r1 = reg_FFE_RES1_SEL_LANE_3_0;
	//ana_c1 = reg_FFE_CAP1_SEL_LANE_3_0;
	//DBG_Printf("\r\n Set_FFE: r=%d c=%d: ana_r1=%d c1=%d", r, c, ana_r1, ana_c1 );
	#endif

}



void train_register_default_change(void) BANKING_CTRL {
	lnx_DFE_RES_F0A_HIGH_THRES_INIT_LANE_7_0 = 0x32; //40 -> 50
	lnx_RX_TRAIN_TIMER_LANE_15_0 = 10;
	dfe_stop = 0;
	reg_FFE_PW_SEL_LANE_1_0 = 3;
	
}	

