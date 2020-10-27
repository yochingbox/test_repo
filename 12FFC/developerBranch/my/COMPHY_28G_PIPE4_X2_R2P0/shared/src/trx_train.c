/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file TRX_Train.c
* \purpose trx train
* \History
*	12/03/2015 Heejeong Ryu		Initial 
*/
#define _DEBUG _DBG_TRXTRAIN
#include "common.h"


void link_train_complete(void) {
	timeout_start(5000); //5mS
	
	#ifdef _PCIE_USB_BUILD	
	if( tx_pipe4_en==1 )
	 reg_TX_FFE_TRAIN_DONE_LANE = 1;
	#endif

	reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 1;		
	reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 1;
	while( reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE ) { //wait for PIPE deassert.
	   	if(lnx_SQ_AUTO_TRAIN_LANE) {
			#if _DEBUG
			//DBG_Printf("\r\n Finish SQ Auto txTrain >>>");
			#endif			
			reg_TX_TRAIN_ENABLE_LANE = 0;
			break;
		}
		if(PHY_NS != ST_INIT) break;

	   if( lnx_TX_TRAIN_STATUS_DET_TIMER_ENABLE_LANE==1 && timeout ) break;
	} 
	timeout_stop;
	
	reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 0;
	reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 0;	
	//reg_TX_TRAIN_FAILED_LANE = 0;
            
 	do_train = 0;

	#ifdef _PCIE_USB_BUILD	
	if( tx_pipe4_en==1 ) reg_TX_FFE_TRAIN_DONE_LANE = 0;					
	#endif
	
	

}

#ifdef SUPPORT_AUTO_TRAIN_MODE
void auto_train_complete(void) { //SAS, SATA

	train_comp = 1; 
	request_local_status();  
	reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 1;

	// check tx side train_comp ==> No need to check remote TRAIN_COMP in firmware
	//	timeout_start(5000); //5mS
	//	while((/*reg_REMOTE_STATUS_VALID_ISR_LANE==0 ||*/ ((reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b1&0x80)!=0x80)) ){
	//		if( lnx_TX_TRAIN_STATUS_DET_TIMER_ENABLE_LANE==1) {
	//			if(timeout || TMR1 ==0 ) {
	//				lnx_TX_TRAIN_STATUS_DET_TIMEOUT_INT_LANE = 1;
	//				break;
	//			}
	//		}
	//		#if _DEBUG
	//		DBG_Printf("=");
	//		#endif			
	//		if(PHY_NS != ST_INIT) break;
	//	}
	//	timeout_stop;
	//}
	
	lnx_TX_TRAIN_COMPLETE_INT_LANE = 1;
	reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 1;	
	
	while( reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE ) {
		if(lnx_SQ_AUTO_TRAIN_LANE) {
			#if _DEBUG
			//DBG_Printf("\r\n Finish SQ Auto txTrain >>>");
			#endif			
			reg_TX_TRAIN_ENABLE_LANE = 0;
			break;
		}
		#ifdef SUPPORT_SAS_TXTRAIN_IF_ERROR_HANDLE
		if(phy_mode <= SAS &&  reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE==0) {	
			if(reg_REMOTE_STATUS_VALID_ISR_LANE) { 
				#ifdef _28G_X2
				reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 1;
				reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 0;
				#else
				reg_REMOTE_STATUS_VALID_ISR_LANE = 0;
				#endif
				remote_error_check(0);
			}	
		}	
		#endif

		if(PHY_NS != ST_INIT) break;
	}  //wait for hardware check ttui transfer finish.
	reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 0;	
	reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 0;	
	//reg_TX_TRAIN_FAILED_LANE = 0;	

	do_train = 0;
		
}

void auto_train_complete_ethernet(void) {

	train_comp = 1; 
	request_local_status();  
	//reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 1;
	
	delay01(60);
	
	// check remote side train_comp 
	timeout_start(5000); //5mS
	while((/*reg_REMOTE_STATUS_VALID_ISR_LANE==0 ||*/ ((reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b1&0x80)!=0x80)) ){
			if( lnx_TX_TRAIN_STATUS_DET_TIMER_ENABLE_LANE==1) {
				if(timeout || TMR1 ==0 ) {
					lnx_TX_TRAIN_STATUS_DET_TIMEOUT_INT_LANE = 1;
					break;
				}
			}
			
			delay01(20);	
	//		#if _DEBUG
	//		DBG_Printf("=");
	//		#endif			
	//		if(PHY_NS != ST_INIT) break;
	//	}		
	}
	timeout_stop;
	
	lnx_TX_TRAIN_COMPLETE_INT_LANE = 1;
	reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 1;	
	
	#ifdef SUPPORT_ETHERNET_SEL_BIT_CTRL
	reg_TX_SEL_BITS_LANE = tx_sel_bit; reg_RX_SEL_BITS_LANE = rx_sel_bit; 
	#endif
	
	reg_PT_EN_LANE = 1;	//to keep CDR lock, send out PRBS pattern within train_complete to train_enable=0				

	reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 1;
	
	while( reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE ) {
		if(lnx_SQ_AUTO_TRAIN_LANE) {
			#if _DEBUG
			//DBG_Printf("\r\n Finish SQ Auto txTrain >>>");
			#endif			
			reg_TX_TRAIN_ENABLE_LANE = 0;
			break;
		}
		if(PHY_NS != ST_INIT) break;
	}  //wait for hardware check ttui transfer finish.
	
	delay01(cmx_PT_OUT_TIME_TRAIN_COMP_15_0); //wait for 100usec
	
	reg_PT_EN_LANE = save_pt_en_lane;
	reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = save_pt_tx_pattern_sel_lane_5_0_b0;
	reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = save_pt_tx_pattern_sel_lane_5_0_b1;
	
	reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 0;	
	reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 0;	
	//reg_TX_TRAIN_FAILED_LANE = 0;	

	do_train = 0;
	
}


#endif

/**
 * \module  TRX_train
 * 
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: 
 *    Output: 
*/
void TRX_Train(void) {
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
			//log history
			#ifdef _PCIE_USB_BUILD
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
			//log history
			#ifdef _PCIE_USB_BUILD
			if(gen_rx==2) {
				TRAIN_CONTROL_15.BT.B3 |= 0x04;
			}
			else if(gen_rx==3) {
				TRAIN_CONTROL_16.BT.B3 |= 0x04;	  
			}
			#endif
		}	
		
		if(lnx_RX_TRAIN_ONLY_DFE_LANE) {
		
			reg_PIN_GPO_LANE_7_0 = 1;

			{			
				adapt_slicer_en = lnx_ADAPT_SLICER_EN_LANE_7_0;
				adapt_data_en =	lnx_ADAPT_DATA_EN_LANE_7_0;
				//reg_DFE_TAP_SIGN_MODE_LANE = 0;
				set_ctle_accap(0); //fast
				if(lnx_PHASE_CONTROL_FUNC_EN_LANE) {
					train.phase_offset_data = (int8_t)lnx_TRAIN_PH_OS_DATA_2C_LANE_7_0;
					train.phase_offset_esm = (int8_t)lnx_TRAIN_PH_OS_ESM_2C_LANE_7_0;
					//ph_control_mode = tag_TRAIN_PH_CONTROL_MODE;
					set_ph_mode(tag_TRAIN_PH_CONTROL_MODE); 					
					phase_control_func();
				}
				timeout_start(2000); 
				if(train_short_mode)
					cds_tb = cds_table[CDS_DEFAULT_PCIE];
				else
					cds_tb = cds_table[CDS_DEFAULT];
				cdr_dfe_init();
				dfe_adaptation();
			}	
			
			timer_chk = ~TMR1;	timer_chk = 2000 - timer_chk;  		
			reg_PIN_GPO_LANE_7_0 = 0;	

 		}
		else { //normal
			reg_PIN_GPO_LANE_7_0 = 1; 		
			if(dfe_dis==0) 
				trx_train_one_time();
			reg_PIN_GPO_LANE_7_0 = 0;						
			timer_chk = ~TMR2;	
			if(	do_train ) timer_chk = lnx_TRX_TRAIN_TIMER_LANE_15_0+1 - timer_chk;
			else timer_chk = lnx_RX_TRAIN_TIMER_LANE_15_0+1 - timer_chk;
		}
				
		//test
		reg_MCU_DEBUG_LANE_31_0_b0 = (uint8_t)timer_chk;
		reg_MCU_DEBUG_LANE_31_0_b1 = (uint8_t)(timer_chk>>8); 
		
		// txtrain complete
		if( do_train ) {
		
			if( ctrl_trx_train_pass==0 ) {
				#ifndef _PCIE_USB_BUILD
				if(phy_mode<=SAS) {
					reg_TX_TRAIN_ERROR_LANE_1_0_b0 = 1; //1=There are no additional, untried, commonly supported settings for local PHY. 
					reg_TX_TRAIN_ERROR_LANE_1_0_b1 = 0; 
				}
				#endif		
				reg_TX_TRAIN_FAILED_LANE = 1;
				lnx_TX_TRAIN_FAIL_INT_LANE = 1;
				//log history
				#ifdef _PCIE_USB_BUILD
				if(gen_rx==2) {
					TRAIN_CONTROL_15.BT.B3 |= 0x40;
				}
				else if(gen_rx==3) {
					TRAIN_CONTROL_16.BT.B3 |= 0x40;	  
				}
				#endif
			}
			else {
				//log history
				#ifdef _PCIE_USB_BUILD
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
			if(!link_train_mode) {
				if(phy_mode == 4)
				auto_train_complete_ethernet();
				else 
				auto_train_complete();			
			}	
			else 
			#endif
				link_train_complete();			    
			
			reg_TX_TRAIN_ON_LANE = 0; 
			//reg_TX_TRAIN_FAILED_LANE = 0;					
			lnx_TX_TRAIN_COMPLETE_INT_LANE = 1;
        } 
 	    
		if( do_rxtrain ) {
			do_rxtrain = 0;
			reg_RX_TRAIN_COMPLETE_LANE = 1;		
			while( reg_PIN_RX_TRAIN_ENABLE_RD_LANE ){
				if(PHY_NS != ST_INIT) break;				
			} 

			//log history
			#ifdef _PCIE_USB_BUILD
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
			lnx_RX_TRAIN_COMPLETE_INT_LANE = 1;
	    }		

    }
	else { //abort 
		//reg_DFE_START_LANE = 0;
		//load dfe_tap/phase from mem data.
		opt2train();
		restore_train();	
		dfe_load_type(1); //sm -> ext, load ext 		

		//pin control - no train fail, no complete
		//delay01(10);
		reg_TX_TRAIN_ON_LANE = 0; 
		reg_RX_TRAIN_ON_LANE = 0; 
		#ifdef _PCIE_USB_BUILD	
		if( tx_pipe4_en==1 ) reg_TX_FFE_TRAIN_DONE_LANE = 0;					
		#endif
		reg_TX_TRAIN_ON_LANE = 0; 			
		#ifdef SUPPORT_ETHERNET_SEL_BIT_CTRL
		if(phy_mode==SERDES) { 
			reg_TX_SEL_BITS_LANE = tx_sel_bit; reg_RX_SEL_BITS_LANE = rx_sel_bit; 
			reg_PT_EN_LANE = save_pt_en_lane;
			reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = save_pt_tx_pattern_sel_lane_5_0_b0;
			reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = save_pt_tx_pattern_sel_lane_5_0_b1;			
		} 		
		#endif
		
		#ifdef _LAB
		Printf(" Abort!");
		#endif
	}

	PHY_STATUS = ST_NORMAL; 
	
	if(lnx_PATTERN_PROTECT_EN_LANE==1) pattern_protect_dis = 0;
	//reg_DFE_TAP_SIGN_MODE_LANE = 1; // Analog error patch. during normal should be 1. don't want to change dfe sign.
	ctrl_cdr_phase_on = 0;
	train_comp = 0;  	
	timeout_stop2;
	reg_TIMER_3_EN_LANE = 0;
	reg_INT4_TIMER3_INT_EN_LANE = 0;
	reg_INT11_FRAME_UNLOCK_INT_EN_LANE = 0;	
	reg_INT12_FRAME_LOCK_INT_EN_LANE = 0;	
	#ifdef _28G_X2
	//TX_TRAIN_CTRL_LANE.VAL &= 0xa01fff02;
	//TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.VAL = 0x00040300; 
	//TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.VAL = 0;	
	RX_LANE_INTERRUPT_REG1.BT.B3 = 0x60;
	RX_LANE_INTERRUPT_REG1.BT.B3 = 0;	
	#endif
	
	lnx_DFE_CORE_BYPASS_LANE = 0; //for lane_margin dfe run
 
	pre_normal_process();
	
	//lnx_PHASE_ADAPT_ENABLE_LANE = 1; //debug
	
	//PHY_STATUS = ST_NORMAL; 
 
}

void trx_train_one_time(void) {

	#if _DEBUG
	DBG_Printf("\r\nTRX TRAIN Start");
	#endif
	
    trx_train_init();
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
			#ifdef SUPPORT_DUMMY_TRAIN
			if(cmx_TRAIN_SIM_EN) rx_train_dummy();
			else 
			#endif
			{
				if(bypass_ctle_train_on==0) {
					rx_train();
				}
				else {
					ctrl_rx_train_done = 1; 
				}
			}	
		}
        else if(ctrl_tx_train_on) {
			#if _DEBUG
		    DBG_Printf("\r\n##TX TRAIN##"); 
			#endif
			#ifdef SUPPORT_DUMMY_TRAIN
			if(cmx_TRAIN_SIM_EN && phy_mode != PCIE) tx_train_dummy();
			else 
			#endif
			tx_train();
		}
		
   }
	
    trx_train_end();
	
	#if _DEBUG
    //DBG_PS("\r\nTRX TRAIN RESULT");print_train();
 	DBG_Printf("\r\nTRX TRAIN End");
	#endif
}

void trx_train_init(void) {
	
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
	cds_tb = cds_table[CDS_DATAADAPT];
	ctrl_rx_only_mode = do_train==0; 
	adapt_data_en = 1; // force to set both sampler to 1 tag_TRAIN_USE_D; //0
	adapt_slicer_en = 1; //tag_TRAIN_USE_S; //1
	
	//reg_DFE_TAP_SIGN_MODE_LANE = 0;
	cdr_dfe_init(); 

	set_accap_sel(ACCAP_DEMUX);
	reg_FFE_PULSE_DIV_LANE_2_0 = 2;
	
	train_status_reset(); 	

	//adjust sumf_boost_target_c, cdr_midpoint_phase_os by temp
	if(train_short_mode) 
	{
		#ifdef _PCIE_USB_BUILD 
		sumf_boost_target_c = 0;
		#endif //_PCIE_USB_BUILD 
	}
	else 
	{
		#ifdef _SATA_SERDES_BUILD
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
		#endif //_SATA_SERDES_BUILD 
	}

	//Dfe_isi_res_adapt_en = 0;
	// CDR Phase Optimization    //1                     //0  
	
	#ifdef _DEBUG
    //DBG_Printf("\r\nTRAIN_PH_CONTROL_MODE : %d ",tag_TRAIN_PH_CONTROL_MODE);	
	#endif

		// TX init
	if (do_train) {
		//tx_init	
		if(link_train_mode==0) trainif_init();		
		
		if (tag_TX_NO_INIT==0) //0
		{
			if(tx_pipe4_en==0)  {
				tx_reset(train.tx_preset_index); //3
				dfe_cdr_phase_opt();
			}	
		}
		
		train2opt(); 
	}

	if(cmx_TRAIN_SIM_EN) return;
	
	// RX_init
	if (!tag_RX_NO_INIT) //0
	{
		//DBG_PS("\r\n\t -rx_init");
        train_r = tag_RX_RXFFE_R_INI;  //4
        train_c = tag_RX_RXFFE_C_INI;  //15
		Set_Rx_FFE();
		
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
	 	
		set_ph_mode(0); // force to mode0 //tag_TRAIN_PH_CONTROL_MODE;
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

	//dfe_cdr_phase_opt(); 

	// TX init --> moved after gain_train for txtrain stuck at the train reset
	//if (do_train) {
	//	//tx_init	
	//	if(link_train_mode==0) trainif_init();		
	//	
	//	if (tag_TX_NO_INIT==0) //0
	//	{
	//		if(tx_pipe4_en==0)  tx_reset(train.tx_preset_index); //3
	//		dfe_cdr_phase_opt();
	//	}
	//}
	//dfe_cdr_phase_opt(); //??
	
    
    //move to after gaintrain
	//ctrl_cdr_phase_on = lnx_CDRPHASE_OPT_EN_LANE && tag_CDR_PHASE_OPT_FIRST_EN;
	//if (ctrl_cdr_phase_on)
	//{
	//	//DBG_PS("\r\n\t -CDR Phase Opt");
	//	dfe_cdr_phase_opt();
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

	gain_train_with_c = tag_GAIN_TRAIN_WITH_C;   //1
	//gain_train_with_sampler = tag_GAIN_TRAIN_WITH_SAMPLER;

	if (tag_GAIN_TRAIN_INIT_EN) //1
	{		
		#ifdef _PCIE_USB_BUILD
		if(gen_rx==2) 
			train_r = lnx_RXFFE_R_GAIN_TRAIN_G2_LANE_3_0;
		else 
			train_r = lnx_RXFFE_R_GAIN_TRAIN_G3_LANE_3_0;
		#else 
		train_r = tag_RXFFE_R_GAIN_TRAIN;  //4
		#endif
        train_c = tag_RXFFE_C_GAIN_TRAIN;  //15
		Set_Rx_FFE();

		ctrl_cdr_phase_on = 0;
		
		dfe_res_f0a_low_thres_01 = tag_DFE_RES_F0A_LOW_THRES_01_INIT;
		dfe_res_f0a_low_thres_2 = tag_DFE_RES_F0A_LOW_THRES_2_INIT;
		dfe_res_f0a_low_thres_3 = tag_DFE_RES_F0A_LOW_THRES_3_INIT;
		#ifdef _PCIE_USB_BUILD
		if(gen_rx==2) 
			dfe_res_f0a_high_thres = lnx_DFE_RES_F0A_HIGH_THRES_INIT_G2_LANE_7_0;
		else
			dfe_res_f0a_high_thres = lnx_DFE_RES_F0A_HIGH_THRES_INIT_G3_LANE_7_0;
		#else 
		dfe_res_f0a_high_thres = tag_DFE_RES_F0A_HIGH_THRES_INIT;
		#endif
		
		gain_train();
		
       train_r = tag_RX_RXFFE_R_INI;  //0
        if( tag_GAIN_TRAIN_WITH_C == 0)
		{
		train_c = tag_RX_RXFFE_C_INI; //15
		}
		
		Set_Rx_FFE();
		//dfe_cdr_phase_opt();		
	}

	dfe_cdr_phase_opt();		

	train2opt(); 

	#if ( tag_INIT_OFST_ADAPT_EN )  //0
	//if(!train_short_mode) 
	{
		//set_ctle_accap(1); //slow
		//adapt_data_en = 1;
		//adapt_slicer_en = 1;
		//dfe_ofst_adapt_en = 1;
		cds_tb = cds_table[CDS_DFE_OFST];	
		dfe_adaptation();
		//dfe_ofst_adapt_en = 0;
		train2opt();		
		//set_ctle_accap(0); //fast
		
	}	
	#endif
	
	if(opt.eo < 10) { //[HR] 10 is better than 15 based on Fang's test result.
		ctrl_cdr_phase_on = lnx_CDRPHASE_OPT_EN_LANE && tag_CDR_PHASE_OPT_FIRST_EN && cmx_TRAIN_SIM_EN==0;
	}
	else {	
		ctrl_cdr_phase_on = 0;
	}	
		
	if (ctrl_cdr_phase_on)
	{
		//DBG_PS("\r\n\t -CDR Phase Opt");
		train_r = 0; train_c = 15;
		Set_Rx_FFE();

	/// Debug for Phase Variation
		adapt_data_en = tag_TRAIN_USE_D; //0
		adapt_slicer_en = tag_TRAIN_USE_S; //1		
		set_ph_mode(0);
	///
		dfe_cdr_phase_opt();
		train2opt(); 
		
		ctrl_cdr_phase_on = 0;
		train_r = tag_RX_RXFFE_R_INI;  //0
		train_c = tag_RX_RXFFE_C_INI; //15
		Set_Rx_FFE();
		dfe_cdr_phase_opt();	
		train2opt(); 
	}



}

void trx_train_control(void) {
    //DBG_Printf("\r\ntrx_ctrl");
	
	#if _DEBUG
	//DBG_Printf("\r\n ctrl_rx_train_done=%d ctrl_tx_train_done=%d ctrl_trx_train_done=%d", ctrl_rx_train_done, ctrl_tx_train_done, ctrl_trx_train_done);
    #endif
	
	if (ctrl_rx_only_mode) // if in the RX_only training mode
	{
		if (ctrl_rx_train_done) // if RX training is done
		{
			ctrl_trx_train_done = 1; // return training done
			//ctrl_trx_train_pass = opt.good_eo; // return training pass //moved to train end
		}
		else // if RX training is not done
		{
			ctrl_rx_train_on = 1; // train RX FFE in the next
			ctrl_tx_train_on = 0; // train RX FFE in the next
			rx.blind_training = 0;
			//ptr_rx_mnr = rx_max_num_round_setting[1]; //setting1
		}
	}
	else // if in the TRX training mode
	{
		if (opt.excellent_eo && (opt.saturated==0)) // if EO is excellent and not saturated
		{
			ctrl_rx_only_mode = 1; // set RX_only_mode = 1
			ctrl_rx_train_on = 1; // train RX FFE in the next for the last time
			ctrl_tx_train_on = 0; 
			rx.blind_training = 0;
            //ptr_rx_mnr = rx_max_num_round_setting[2]; //setting2
		}
		else if (ctrl_rx_train_done) // if RX training is done
		{
			ctrl_rx_train_on = 0; // train TX FFE in the next
			ctrl_tx_train_on = 1; // train TX FFE in the next
		}
		else if (ctrl_tx_train_done) // if TX training is done
		{
			ctrl_rx_train_on = 1; // train RX FFE in the next
			ctrl_tx_train_on = 0; // train RX FFE in the next
			#if tag_BLIND_TRAIN_EN  //     0
			if (opt.eye_check_pass==0) // if eye check is failed
			{
				if (ctrl_num_blind_loop >= tag_MAX_BLIND_LOOP) // if the number of blind loops reaches the maximum number
				{
					ctrl_trx_train_done = 1; // return training done
					ctrl_trx_train_pass = 0; // return training fail
				}
				else
				{
					ctrl_num_blind_loop ++; // update the number of blind loops by adding one
					rx.blind_training = 1; // RX blind training
                    //ptr_rx_mnr = rx_max_num_round_setting[3]; //setting3
				}
			}
			else
			#endif
			{
				rx.blind_training = 0; // not RX blind training
				// if same best TRX FFE or the number of big loop loops
				// reaches the maximum number
				if ((ctrl_trx_ffe_updated==0 /*&& tx.status_detected*/) || (ctrl_num_big_loop>=tag_MAX_BIG_LOOP))
				{
					ctrl_rx_only_mode = 1; 
                    //ptr_rx_mnr = rx_max_num_round_setting[2]; //setting2
				}
				else
				{
					ctrl_num_big_loop ++; // update the number of big training loops by adding one
                //    //ptr_rx_mnr = rx_max_num_round_setting[4]; //setting4
				} // end if same best EO TRX or the number of big loop loops reaches the maximum number
			} // end if eye check if failed
		}
		else // the first time of training
		{
			//ctrl_rx_train_on = 1; // train RX in the next
			//ctrl_tx_train_on = 0; // train RX in the next
			rx.blind_training = 0; // not RX blind training
			//ptr_rx_mnr = rx_max_num_round_setting[5]; //setting5
			//HR: to skip first RX_TRAIN.
			ctrl_rx_train_on = 0; // train TX FFE in the next
			ctrl_tx_train_on = 1; // train TX FFE in the next
				
		} // end if EO is excellent and not saturated
	} // end if RX_only_mode

	
	#if (tag_RX_TEST_FFE_MODE) //0 if in the test mode
	{
        //ptr_rx_mnr = rx_max_num_round_setting[0]; //setting0
    }
	#endif
	
	
	if( ctrl_trx_train_done==0 ) // is not training done, we will train RX or TX
	{
	   ctrl_rx_train_done = 0; // reset flag
	   ctrl_tx_train_done = 0; // reset flag
	   ctrl_trx_ffe_updated = 0; // reset flag
	}

	#if _DEBUG
	//Printf("--> ctrl_cdr_phase_on=%d, ctrl_tx_train_on=%d, ctrl_rx_train_on=%d, train_pass=%d ", ctrl_cdr_phase_on,ctrl_tx_train_on,ctrl_rx_train_on, ctrl_trx_train_pass);
	#endif
}

void update_dfe_res()
{
	int8_t val, dfe_res_f1_low;
	
	if (dfe_res_f1 == 0 || dfe_res_f1 == 1)
	{
		dfe_res_f1_low = tag_DFE_RES_F1_LOW_01; //20
	}
	else if (dfe_res_f1 == 2)
	{
		dfe_res_f1_low = tag_DFE_RES_F1_LOW_2; //22
	}
	else // dfe_res_f1 == 3
	{
		dfe_res_f1_low = tag_DFE_RES_F1_LOW_3; //24
		
	}
	if (abs(train.f1) < dfe_res_f1_low && dfe_f1_res_sel>0 )
	{
		dfe_f1_res_sel = dfe_f1_res_sel - 1; //	take min
	}
	else if (abs(train.f1) > tag_DFE_REA_F1_HIGH && dfe_f1_res_sel < tag_DFE_F1_RES_SEL_MAX)
	{
		dfe_f1_res_sel = dfe_f1_res_sel + 1; //	take max
	}
	
	if ( abs(train.f2) < tag_DFE_REA_F2_LOW && abs(train.f3) < tag_DFE_REA_F3_LOW && abs(train.f4) < tag_DFE_REA_F4_LOW && dfe_f234_res_sel>0 )
	{
		dfe_f234_res_sel = dfe_f234_res_sel -1; // take min;
	}
	else if ( abs(train.f2) > tag_DFE_REA_F2_HIGH || abs(train.f3) > tag_DFE_REA_F3_HIGH && abs(train.f4) > tag_DFE_REA_F4_HIGH && dfe_f234_res_sel < tag_DFE_F234_RES_SEL_MAX  )
	{
		dfe_f234_res_sel = dfe_f234_res_sel + 1;
	}
	
	if ( abs(train.f5) < tag_DFE_REA_F5_LOW && abs(train.f6) < tag_DFE_REA_F6_LOW && abs(train.f7) < tag_DFE_REA_F7_LOW && dfe_f567_res_sel>0)
	{
		dfe_f567_res_sel = dfe_f567_res_sel -1; //take min;
	}
	else if ( abs(train.f5) > tag_DFE_REA_F5_HIGH || abs(train.f6) > tag_DFE_REA_F6_HIGH && abs(train.f7) > tag_DFE_REA_F7_HIGH && dfe_f567_res_sel < tag_DFE_F567_RES_SEL_MAX )
	{
		dfe_f567_res_sel = dfe_f567_res_sel + 1;
	}
	
	/*
	val = abs(train.f8);
	val = max( abs(train.f9), val);
	val = max( abs(train.f10), val);
	val = max( abs(train.f11), val);
	val = max( abs(train.f12), val);
	val = max( abs(train.f13), val);
	val = max( abs(train.f14), val);
	val = max( abs(train.f15), val);
	
	//if (max (abs(train.f8),abs(train.f9), abs(train.f10),abs(train.f11),abs(train.f12),abs(train.f13),abs(train.f14),abs(train.f15)) < 10)
	if(val < 10  && dfe_f8to15_res_sel>0)
	{
		dfe_f8to15_res_sel = dfe_f8to15_res_sel - 1;//take min
	}
	//else if (max (abs(train.f8),abs(train.f9), abs(train.f10),abs(train.f11),abs(train.f12),abs(train.f13),abs(train.f14),abs(train.f15)) >14)
	else if (val>14 && dfe_f8to15_res_sel<tag_DFE_F8TO15_RES_SEL_MAX)
	{
		dfe_f8to15_res_sel = dfe_f8to15_res_sel + 1; //	take max
	}
	
	val = abs(train.ff1);
	val = max( abs(train.ff2), val);
	val = max( abs(train.ff3), val);
	val = max( abs(train.ff4), val);
	val = max( abs(train.ff5), val);
	val = max( abs(train.ff6), val);

	//if (max (abs(train.ff1),abs(train.ff2), abs(train.ff3),abs(train.ff4),abs(train.ff5),abs(train.ff6)) < 20)
	if ( val< 20 && dfe_ffloat_res_sel>0)
	{
		dfe_ffloat_res_sel = dfe_ffloat_res_sel - 1;
		take min
	}
	//else if (max (abs(train.ff1),abs(train.ff2), abs(train.ff3),abs(train.ff4),abs(train.ff5),abs(train.ff6)) > 28)
	else if (val> 28 && dfe_ffloat_res_sel < tag_DFE_FFLOAT_RES_SEL_MAX)
	{
		dfe_ffloat_res_sel = dfe_ffloat_res_sel + 1;
		take max
	}	
	*/
}

void trx_train_end()
{
	uint8_t num, index;
	
	#if _DEBUG
    DBG_Printf("\r\ntrx_end");            
	#endif

	if(cmx_TRAIN_SIM_EN)	{
		ctrl_trx_train_pass = 1;
		return;
	}
	
	if (tag_GAIN_TRAIN_END_EN)
	{
		gain_train_with_c = 0;
		//gain_train_with_sampler = tag_GAIN_TRAIN_WITH_SAMPLER;//0
		
		opt2train();
		ctrl_cdr_phase_on = 0;
		
		dfe_res_f0a_low_thres_01 = tag_DFE_RES_F0A_LOW_THRES_01_END;
		dfe_res_f0a_low_thres_2 = tag_DFE_RES_F0A_LOW_THRES_2_END;
		dfe_res_f0a_low_thres_3 = tag_DFE_RES_F0A_LOW_THRES_3_END;
		dfe_res_f0a_high_thres = tag_DFE_RES_F0A_HIGH_THRES_END;
		
		gain_train();
		train2opt();
	}
	//#endif
	
	if (tag_DFE_ISI_RES_ADAPT_EN) //1
	{ 
		#if _DEBUG
		DBG_Printf("\r\n++(res_adapt)");            
		#endif
		//Dfe_isi_res_adapt_en = 1;
		//dfe_cdr_phase_opt();
		//train2opt();
		//Dfe_isi_res_adapt_en = 0;
		
		if(train_short_mode) num = 1; 			
		else num = 4;
		
		index = 0;
		ctrl_cdr_phase_on = 0;
		for (index = 0; index < num; index ++)
		{
			dfe_cdr_phase_opt();
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
	if((ph_control_mode == 2 || ph_control_mode == 3 ) && lnx_CDRPHASE_OPT_EN_LANE) {  
		advanced_clk_align();  
	}
	//test
	lnx_TRAIN_PH_OS_DATA_2C_LANE_7_0 = (uint8_t)train.phase_offset_data;
	lnx_TRAIN_PH_OS_ESM_2C_LANE_7_0 = (uint8_t)train.phase_offset_esm;
	
	//cdr.min_phase_os = (ph_control_mode == 0 || ph_control_mode == 1)? tag_CDR_MIN_PHASE_OS_MODE01:tag_CDR_MIN_PHASE_OS_MODE23;
	//cdr.max_phase_os = (ph_control_mode == 0 || ph_control_mode == 1)? tag_CDR_MAX_PHASE_OS_MODE01:tag_CDR_MAX_PHASE_OS_MODE23;
	set_ph_mode(0); 
	phase_control_func();	

	#if _DBG_RXTRAIN
	print_ph_ctrl_status();
	#endif
	
	#ifdef _SATA_SERDES_BUILD
	if(!train_short_mode) {
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

	ctrl_trx_train_pass = opt.good_eo; // return training pass
	lnx_RD_DFE_F0D_LANE_7_0 = opt.eo;
	reg_MCU_DEBUGB_LANE_7_0 = ctrl_trx_train_pass;
		
	#ifdef _PCIE_USB_BUILD	
	
	if( gen_rx == 2 && cmx_DFE_SAT_STOP_GEN3_EN) {
		//patch for very short channel, turn off dfe.  	   //default=50
		if(reg_DFE_F0_SAT_E_LANE || reg_DFE_F0_SAT_O_LANE || (train.f0a>= lnx_F0A_SAT_THR_G2_LANE_7_0 && (reg_FFE_CAP1_SEL_LANE_3_0<=lnx_GAINTRAIN_CAP1_THR_G2_LANE_3_0) && cmx_DFE_STOP_GEN3_EN)) {
	
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
		
			reg_FFE_RES1_SEL_LANE_3_0       = train_save_tb[gen_rx].res1;
			reg_FFE_RES2_SEL_O_LANE_3_0     = train_save_tb[gen_rx].res2_o;
			reg_FFE_RES2_SEL_E_LANE_3_0     = train_save_tb[gen_rx].res2_e;		
			reg_FFE_CAP1_SEL_LANE_3_0       = train_save_tb[gen_rx].cap1;
			reg_FFE_CAP2_SEL_O_LANE_3_0     = train_save_tb[gen_rx].cap2_o;
			reg_FFE_CAP2_SEL_E_LANE_3_0     = train_save_tb[gen_rx].cap2_e;
		}
	}
	else if( gen_rx == 3 && cmx_DFE_SAT_STOP_GEN4_EN) {
		
		if(reg_DFE_F0_SAT_E_LANE || reg_DFE_F0_SAT_O_LANE || (train.f0a_max>= lnx_F0A_SAT_THR_G3_LANE_7_0 && cmx_DFE_STOP_GEN4_EN)) {
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
		
			reg_FFE_RES1_SEL_LANE_3_0       = train_save_tb[gen_rx].res1;
			reg_FFE_RES2_SEL_O_LANE_3_0     = train_save_tb[gen_rx].res2_o;
			reg_FFE_RES2_SEL_E_LANE_3_0     = train_save_tb[gen_rx].res2_e;		
			reg_FFE_CAP1_SEL_LANE_3_0       = train_save_tb[gen_rx].cap1;
			reg_FFE_CAP2_SEL_O_LANE_3_0     = train_save_tb[gen_rx].cap2_o;
			reg_FFE_CAP2_SEL_E_LANE_3_0     = train_save_tb[gen_rx].cap2_e;
		
		}
	}	
	#endif

	//if(ctrl_trx_train_pass) 
	{
		save_train(do_train, 1, 1, 1); //save train result
	}
	
	//reg_EOM_CLK_EN_LANE = 0; //save power
	#if _DEBUG
    DBG_Printf("\r\ntrx_end finish == Train Pass = %d", ctrl_trx_train_pass);            
	#endif
	
}

__code const uint8_t gt0_dfe_res[] = {0, 1, 2, 3 };
__code const uint8_t gt1_dfe_res[] = {0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 };
__code const uint8_t gt1_c []      = {15, 15, 15, 15, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
__code const uint8_t gt2_dfe_res[] = {0, 1, 2, 3, 1, 2, 3 };
//__code const uint8_t gt2_sampler_by2[] = {1, 1, 1, 1, 0, 0, 0 }; 
__code const uint8_t gt3_dfe_res[] = {0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 2, 3 };
__code const uint8_t gt3_c []      = {15, 15, 15, 15, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 0, 0, 0};
//__code const uint8_t gt3_sampler_by2 [] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0};

//__code const uint8_t gt1_c_pcie [] = {12, 6, 4};
__code const uint8_t gt1_c_pcie0 [] = {12, 7, 5};
__code const uint8_t gt1_c_pcie1 [] = {12, 12, 12, 12, 7, 5};


void gain_train(void)  //todo
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
		if(train_short_mode && cmx_DIS_SHRT_PCIE_GAIN_TRAIN==0) {
						//            1                 //4
			if(phy_mode == PCIE /*&& gen_rx==2*/)			
				gain_table_size = (gain_train_with_c? 3: gt0_size); 
			else 
				gain_table_size = (gain_train_with_c? 6: gt0_size); //3
			//gain_table_size = (gain_train_with_c? 3: gt0_size); 
			gain_table_index = (gain_train_with_c?4:0);			
		}	
		else 
		{
						//            1              //19       //4
			gain_table_size = (gain_train_with_c? gt1_size: gt0_size);
			gain_table_index = (gain_train_with_c?1:0);
		}		
	}
	
	#if _DEBUG
	//DBG_Printf("\r\n\t gain_table_size=%d, gain_table_index=%d", gain_table_size, gain_table_index);
	#endif
	
	while (step_number < gain_table_size) //(gain_table_size + 1)
	{
		switch (gain_table_index)
		{
		case 0:
			ctrl_step_res_dfe = gt0_dfe_res[gain_index];
			break;
		case 1: //
			ctrl_step_res_dfe = gt1_dfe_res[gain_index];			
			train_c = gt1_c[gain_index];
			break;
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
		case 4: //
			if(phy_mode == PCIE /*&& gen_rx==2*/)	{		
				train_c = gt1_c_pcie0[gain_index];		
			}
			else {
				ctrl_step_res_dfe = gt1_dfe_res[gain_index];			
				train_c = gt1_c_pcie1[gain_index];
			}
			break;			
		default:
			ctrl_step_res_dfe = gt0_dfe_res[gain_index];
		}

		lnx_GAIN_TRAIN_INDEX_RD_LANE_7_0 = train_c;		
		Set_Rx_FFE();

	#if _DEBUG
		//DBG_Printf("\r\n\t%d: gain_index=%d ctrl_step_res_dfe=%d, c=%d ", step_number,gain_index,ctrl_step_res_dfe,train_c);
	#endif
	
		dfe_cdr_phase_opt();	
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
	
	#ifdef _PCIE_USB_BUILD
	//check short channel condition
	//if( gen_rx == 3 && cmx_DFE_STOP_GEN4_EN) {
	//	if( train.f0a_max>= lnx_F0A_SAT_THR_G3_LANE_7_0 && (reg_FFE_CAP1_SEL_LANE_3_0<=lnx_GAINTRAIN_CAP1_THR_G3_LANE_3_0)) {
	//		dfe_stop = 2;
	//		
	//		reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;
	//		reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0;
	//		reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0;
	//		reg_DFE_UPDATE_DC_EN_LANE = 0;
	//		
	//		reg_DFE_INIT_SEL_LANE = 0;
	//		reg_DFE_START_LANE = 0;
	//		CKCON = 0x07; 			// MCU WAIT time the slowest
	//		reg_RESET_DFE_LANE = 1;
	//		reg_RESET_DFE_LANE = 0;
	//		CKCON = 0x00; 			// MCU WAIT time setting back to normal.
	//		/*
	//		reg_FFE_RES1_SEL_LANE_3_0       = train_save_tb[gen_rx].res1;
	//		reg_FFE_RES2_SEL_O_LANE_3_0     = train_save_tb[gen_rx].res2_o;
	//		reg_FFE_RES2_SEL_E_LANE_3_0     = train_save_tb[gen_rx].res2_e;	
	//		*/	
	//		reg_FFE_CAP1_SEL_LANE_3_0       = train_save_tb[gen_rx].cap1;
	//		reg_FFE_CAP2_SEL_O_LANE_3_0     = train_save_tb[gen_rx].cap2_o;
	//		reg_FFE_CAP2_SEL_E_LANE_3_0     = train_save_tb[gen_rx].cap2_e;		
	//				
	//	}		
	//}
	//reg_MCU_DEBUG8_LANE_7_0 = dfe_stop;
	#endif //_PCIE_USB_BUILD

	#ifdef _SATA_SERDES_BUILD
	if(phy_mode == SERDES) {
		if(dfe_res_f0 == 0 && reg_FFE_CAP1_SEL_LANE_3_0==0xF) { //force res=1 for long channel
			dfe_res_f0 = 1;
			dfe_cdr_phase_opt();	
		}	
	}
	#endif
		
}


void update_opt_trx_ffe(){
	#if _DEBUG
    DBG_Printf("\r\n++(update_opt_trx_ffe) opt.eo=%d train.eo=%d, opt.f0t=%d train.f0t=%d", opt.eo, train.eo, opt.f0t, train.f0t);
    //DBG_Printf(" train_g0/g1/gn1(%d,%d,%d) opt(%d,%d,%d)",train_g0_index,train_g1_index,train_gn1_index,opt_g0_index,opt_g1_index,opt_gn1_index );
	#endif
    if ( (   opt_r == train_r && opt_c == train_c
         && opt.phase_offset_data == train.phase_offset_data
         && opt_g0_index == train_g0_index  && opt_gn1_index == train_gn1_index  && opt_g1_index == train_g1_index
         && opt.tx_preset_index == train.tx_preset_index
        ) && !tag_SAME_SET_ALWAYS_UPDATE &&
        ( tag_SAME_SET_NO_UPDATE || 
            (opt.level > train.level) || // OPT level better
            ( opt.level == train.level && // OPT eye better
            ( ((opt.eo >= train.eo) && ctrl_rx_train_on) ||
              ((opt.f0t >= train.f0t) && ctrl_tx_train_on)))) )
	{
		// do nothing
	#if _DEBUG
        //DBG_Printf("~UPDATE");
	#endif	
	}else{
	#if _DEBUG
        DBG_Printf(" UPDATE");
	#endif
        train2opt();
        //print_train();
    }
}

void dfe_cdr_phase_opt(void){
	
	#if _DEBUG
	//DBG_Printf("\r\n++(dfe_cdr_phase_opt)");// ctrl_cdr_phase_on=%d opt_phase=%d",ctrl_cdr_phase_on, opt_phase_os);
	#endif
	if( cmx_TRAIN_SIM_EN ) return;
	
    #if (tag_CDR_OPT_PHASE_BEFORE_DFE) //1
	   train.phase_offset_data = opt.phase_offset_data;
	   #if _DEBUG
	   //DBG_Printf("\r\n++(dfe_cdr_phase_opt) opt_phase_offset=%d", cdr.opt_phase_offset);
	   #endif
	   phase_control_func();
	#endif

	if(train_short_mode) 
	{
		if(	pcie_f0b_en ) 
			cds_tb = cds_table[CDS_DEFAULT_PCIE_F0B];			
		else  cds_tb = cds_table[CDS_DEFAULT_PCIE];
	}	
	else
		cds_tb = cds_table[CDS_DEFAULT];
		
	dfe_adaptation();
	
	if(ctrl_cdr_phase_on ) {	
		if( train_short_mode ) 
		{
		}	
		else 
		{ 
			#ifdef _SATA_SERDES_BUILD 
			cds_tb = cds_table[CDS_DEFAULT_PHASE_MOVE_DFE_EN];
			cdr_phase_opt();
			#endif	
		}
	}
}

void train_status_reset(void){
	uint8_t	i;

    // -- Control
    ctrl_rx_only_mode = !do_train; 
    ctrl_cdr_phase_on = 0;
    ctrl_trx_train_done = 0;
    ctrl_trx_train_pass = 0;
	ctrl_rx_train_done = 0;
    ctrl_tx_train_done = 0;
    ctrl_rx_train_on = 0;
    ctrl_tx_train_on = 0;
    ctrl_trx_ffe_updated = 0;
    //ctrl_num_blind_loop = 0;
    //ctrl_step_res_dfe = 1;
	ctrl_num_big_loop = 0;
	
#if 0    // -- CDR Phase Optimization
	cdr.num_count = 0;
	cdr.direction = 0; // go left in the beginning
	cdr.train_f0p = 0;
	cdr.opt_level = 0;
	cdr.opt_f0p = 0;
	cdr.opt_phase_offset = 0;
	cdr.ini_phase_offset = 0;
	cdr.ini_level = 0;
	cdr.ini_f0p = 0;
	cdr.become_worse = 0;
	cdr.phase_small = 0;
	cdr.phase_large = 0;
	//cdr.advanced_clock_align_converged = 0;

    // -- TX
	//tx.status_detected = 1; // whether the TX status can be detected
	//tx_blind_training = 0; // whether in TX blind training
	tx.ffe_updated = 0; // indicated whether FFE is updated
	tx.num_tx_loop = 0; // the number of TX training loops	
    tx.become_worse = 0;
    tx.num_count = 0;
    tx.direction = 1;
/*
	tx.ini_g0_index = tx.g0_index_preset;
	tx.ini_gn1_index = tx.gn1_index_preset;
	tx.ini_g1_index = tx.g1_index_preset;
	tx.ini_index_is_max = 0;

	tx.gn1_index_small = tx.gn1_index_preset;
	tx.gn1_index_large = tx.gn1_index_preset;
	tx.g1_index_small = tx.g1_index_preset;
	tx.g1_index_large = tx.g1_index_preset;
*/
	// initial value from PHY top in real design

	tx.g0_is_max = 0;
	tx.g0_is_min = 0;
	tx.gn1_is_max = 0;
	tx.gn1_is_min = 0;
	tx.g1_is_max = 0;
	tx.g1_is_min = 0;

    tx.train_overboost = 0;
    tx.opt_overboost = 0;

    // -- RX
	rx.blind_training = 0; // whether in RX blind training
	//rx.ffe_training_on = 0; // turn on/off FFE training
	//rx.dc_gain_triger = 0; // whether DC gain control is triggered
	//rx.dc_gain_done = 0; // if DC gain control is done
	//rx.dc_gain_success = 0; // if DC gain control is successes
	//rx.stage = 3; // indicate the current stage
	//rx.index = 0; // the current index in a FFE training set
	//rx.step_size = 0; // the step size of binary search in Stage 0
	//rx.num_round = 0; // the counter of rounds in each stage
	//rx.step_two = 0; // enable/disable Step two of Stage 0 or 1
	//rx.step_one = 0; // enable/disable Step one of Stage 0 or 1
	//rx.c_updated = 0; // indicate whether the value of C is updated
	//for (i=0;i<16;i++) rx.ffe_set_index[i] = 0; // the index of FFE training set
	//rx.size_ffe_set = 0; // the length of FFEs in the training set
	rx.ffe_updated = 0; // indicate whether the index of RX FFE is updated
	//rx.rc_updated = 0; 
	//rx.ffe_index = 0; // the temporarily saved RX FFE index
	rx.ffe_index2 = 0; //  // another temporarily saved RX FFE index
	//rx.set_opt_update = 0; // indicate the global or set optimal data is used for comparison with training data
	//rx.direction = 0; // the direction during Stage 0

	//rx.become_worse = 0;
	//rx.r_small = 0;
	//rx.r_large = 0;
	//rx.c_small = 0;
	//rx.c_large = 0;   

    rx.train_overboost = 0;
    rx.opt_overboost = 0;

    // -- OPT
	//opt_r = tag_RX_RXFFE_R_INI; // the index of R
	//opt_c = tag_RX_RXFFE_C_INI; //15 the index of C
	//opt.rx_ffe_index = (tag_RX_RXFFE_C_INI<<4) | tag_RX_RXFFE_R_INI;//tag_RX_RXFFE_INDEX_INI; // the index of RX FFE
	opt.excellent_eo = 0; // indicate whether the EO is excellent
	opt.good_eo = 0; // indicate whether the EO is good
	//opt.poor_eo = 0;
	opt.dfe_saturate = 0;
	opt.dfe_saturate = 0;
	opt.saturated = 0; // indicate whether saturated
	opt.eye_check_pass = 0; // wheather eye check is passed
	opt.eo = 0; // value of eye open
	opt.f0 = 0x20; // value of F0
	opt.f1 = 0;
	opt.f2 = 0;
	opt.f3 = 0;
	opt.f4 = 0;
	opt.f5 = 0;
	opt.f6 = 0;
	opt.f7 = 0;
	opt.fn1 = 0; // value of F-1
	opt.f0a = 0x20; // value of F0A (F0 - F-1)
	opt.f0t = 0;
	//opt_phase_os = cal_phase; 
	opt.level = 0; // level of TRX FFE	
#else	
	memset0((uint8_t *)&opt, sizeof(Status_Train_t) + sizeof(Status_TX_t) + sizeof(Status_RX_t));
#endif

	if(do_train) {
	//follow user define
	#ifdef _PCIE_USB_BUILD
	//if(phy_mode == PCIE) 
    { 	
	  //tx_sweep_preset_en = 0; //1;
#if tag_TX_SWEEP_PRESET_EN
	  tx_num_tx_preset = 2; //7
#endif	  
	  //tx_pipe4_en = cmx_PIPE4_EN;
	  pcie_f0b_en = 0;;
    }
    #else 		
	{
	  //tx_sweep_preset_en = 0;
	  //tx_num_tx_preset = 3;
	  
		//--- local tx preset
		if( cmx_LOCAL_TX_PRESET_EN) {
			i = cmx_LOCAL_TX_PRESET_INDEX_3_0;
			if(phy_mode == 4){
				if(i&0x01) i = 4; //init
				else i = 5; //preset		
			}			
			LINK_TRAIN_MODE0.BT.B0 = local_tx_preset_tb[i][0]; //tx_em_po
			LINK_TRAIN_MODE0.BT.B1 = local_tx_preset_tb[i][1]; //tx_em_pre, tx_em_peak		
		}	
	  
    }
	#endif //_PCIE_USB_BUILD
	//---
	//phase_fine_adapt_run_index = 0;
	//phase_accu_adapt_run_index = 0;
		
	//--- remote tx init
	//if(phy_mode == 4) //ethernet
	//	opt.tx_preset_index = 2;
	//else if(phy_mode == 3) //pcie
	//	opt.tx_preset_index = 5;
	//else
	//	opt.tx_preset_index = 3;
	//if(lnx_spdoft_tx_preset_index_lane>5 || lnx_spdoft_tx_preset_index_lane==0) {
	//	if(phy_mode == 4) //ethernet
	//		lnx_spdoft_tx_preset_index_lane = 2; //preset
	//	else if(phy_mode == 3) //pcie
	//		lnx_spdoft_tx_preset_index_lane = 5;
	//	else
	//		lnx_spdoft_tx_preset_index_lane = 3; //no_eq
	//}	
	opt.tx_preset_index = lnx_spdoft_tx_preset_index_lane;	

	} //do_train
	//
	opt_g0_index = 128;
	opt_g1_index = 128;
	opt_gn1_index = 128;

	// --
	if(cmx_TRAIN_SIM_EN) {
		lnx_FAST_DFE_TIMER_EN_LANE = 1;
		lnx_DFE_CORE_BYPASS_LANE = 1;
		//lnx_THRE_GOOD_LANE_4_0  = 0;
	    //lnx_SATURATE_DISABLE_LANE  = 1; 
	    //lnx_CDRPHASE_OPT_EN_LANE  = 0;
	    //lnx_THRE_POOR_LANE_2_0  = 0;
	    //lnx_THRE_EXCELLENT_LANE_5_0 = 0;
	    //lnx_EYE_CHECK_BYPASS_LANE  = 1;
		//cmx_SKIP_CDR_DFE_SCHEME = 1; // for sim
	}

	//lnx_TX_TRAIN_FAIL_INT_LANE = 0; 
	//lnx_TX_TRAIN_COMPLETE_INT_LANE = 0;
	lnx_TX_TRAIN_STATUS_DET_TIMEOUT_INT_LANE = 0; 	
	//lnx_TX_TRAIN_REMOTE_PATTERN_ERROR_INT_LANE = 0;
	//lnx_REMOTE_MULTI_RSV_COE_REQ_ERR_INT_LANE = 0;
	//lnx_TX_TRAIN_FRAME_LOCK_DET_FAIL_INT_LANE = 0;


	// --
	r2_adj_on = 0;
	opt_r = 0;
	opt_c = 0;

	opt2train();

	skip_dfe_adapt_cdr_midpoint = 0;
	cds_dfe_ofst = 0;
	
	/*reg_MCU_DEBUGE_LANE_7_0 = 0;
	reg_MCU_DEBUGB_LANE_7_0 = 0;
	reg_MCU_DEBUG0_LANE_7_0 = 0x50;
	reg_MCU_DEBUG1_LANE_7_0 = cmx_TRAIN_SIM_EN;
	reg_MCU_DEBUG3_LANE_7_0 = cmx_SKIP_CDR_DFE_SCHEME;
	reg_MCU_DEBUG5_LANE_7_0 = lnx_DFE_CORE_BYPASS_LANE;	
	reg_MCU_DEBUG6_LANE_7_0 = lnx_FAST_DFE_TIMER_EN_LANE;	
	*/	
	// reset phase to cal phase with phase_control_mode=0	
 
	//New CDS
	lnx_VH_EO_MODE_LANE = 0;
	//lnx_LOCK_DFE_ON_LANE = 0;
	lnx_DFE_SAVE_EN_LANE = 1;
	lnx_RESET_PH_EN_DTL_LANE = 0;

	tx_train_p2p_hold = lnx_TX_TRAIN_P2P_HOLD_LANE;
		
 	reg_EOM_DPHER_LANE_6_0 = lnx_CAL_EOM_DPHER_LANE_7_0;		
	short_delay(); //delay01(10);
	reg_EOM_DPHERCK_LANE = 1;
	reg_EOM_DPHERCK_LANE = 0;
		
	cal_half_code();	
	
	dfe_stop = 0;

	
}

void opt2train(void) {

	memcpy((uint8_t *)&train, (uint8_t *)&opt, sizeof(Status_Train_t));

    //train_phase_os          = opt_phase_os ;
    //cdr_phase_update(train_phase_os);
	
    train_r                 = opt_r ;
    train_c                 = opt_c ;
	train_g0_index 			= opt_g0_index;
	train_gn1_index 		= opt_gn1_index;
	train_g1_index 			= opt_g1_index;
	
	Set_Rx_FFE();
	
}

void train2opt() {

	memcpy((uint8_t *)&opt, (uint8_t *)&train, sizeof(Status_Train_t));

    opt_r               = train_r;
    opt_c               = train_c;
	opt_g0_index 		= train_g0_index;
	opt_gn1_index 		= train_gn1_index;
	opt_g1_index 		= train_g1_index;
	
}

__code uint8_t Res_sel_Table[]     = {  11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0 };
__code uint8_t Res_sel2_e_Table[]  = {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
__code uint8_t Res_sel2_o_Table[]  = {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

__code uint8_t Cap_sel_Table[]     = { 0, 0, 0, 0, 1, 3, 5, 8, 15, 15, 15, 15, 15, 15, 15, 15 };  
__code uint8_t Cap_sel2_e_Table[]  = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 5, 8, 11, 15 };
__code uint8_t Cap_sel2_o_Table[]  = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 5, 8, 11, 15 };
__code uint8_t Cap_sel2_Table[]  = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 3, 3, 3 };


void Set_Rx_FFE(void){
	//uint8_t ana_r1, ana_c1;
	uint8_t r, c;
	
	r = train_r;
	c = train_c;
	train.rx_ffe_index = (c<<4) + r;
	
	if(bypass_ctle_train_on) return;
	
	reg_FFE_RES1_SEL_LANE_3_0 = Res_sel_Table[r];
	
	if(r2_adj_on!=1) {
		reg_FFE_RES2_SEL_E_LANE_3_0 = Res_sel2_e_Table[r];
		reg_FFE_RES2_SEL_O_LANE_3_0 = Res_sel2_o_Table[r];
	}
	
	//if(dfe_stop >= 1) return;
	
	//reg_FFE_DATA_RATE_LANE_3_0  = Data_rate_Table[c]; //moved to spdtbl
	reg_FFE_CAP1_SEL_LANE_3_0   = Cap_sel_Table[c];
	if( lnx_CTLE_SET_SEL_LANE ) {
		reg_FFE_CAP2_SEL_E_LANE_3_0 = Cap_sel2_Table[c];
		reg_FFE_CAP2_SEL_O_LANE_3_0 = Cap_sel2_Table[c];	
	}
	else {
		reg_FFE_CAP2_SEL_E_LANE_3_0 = Cap_sel2_e_Table[c];
		reg_FFE_CAP2_SEL_O_LANE_3_0 = Cap_sel2_o_Table[c];
	}
	
	#if _DEBUG
	//ana_r1 = reg_FFE_RES1_SEL_LANE_3_0;
	//ana_c1 = reg_FFE_CAP1_SEL_LANE_3_0;
	//DBG_Printf("\r\n Set_FFE: r=%d c=%d: ana_r1=%d c1=%d", r, c, ana_r1, ana_c1 );
	#endif

}


void save_train(bool save_txffe_on, bool save_rxffe_on, bool save_dfe_on, bool save_dfe_phase_on ) {
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


void restore_train(void) {
	uint8_t gen, i, change;
	
	#if _DBG_TRAIN_SAVE==1
	DBG_Printf("\r\n++(train_restore)  changed");
	#endif
	
	#ifdef _SATA_SERDES_BUILD
	gen = gen_tx;		
	if(phy_mode==SERDES) { 
		gen = min(reg_PIN_PHY_GEN_TX_RD_LANE_3_0, cmx_PHY_GEN_MAX_3_0);
		gen = get_gen_memory_index(gen);
	}	
		
	if(!link_train_mode) {
		change = (TRAIN_CONTROL_9.BT.B3 & (0x01<<gen)) != 0;		
		if(change) 
		{	
			LINK_TRAIN_MODE0.BT.B0 = txffe_save[gen][0]; //[7:4]em_po
			LINK_TRAIN_MODE0.BT.B1 = txffe_save[gen][1]; //[7:4]em_peak [3:0]em_pre
			reg_ANA_TX_EM_PEAK_EN_LANE = (txffe_save[gen][0]&0x08)==0x08;
			reg_ANA_TX_EM_PRE_EN_LANE = (txffe_save[gen][0]&0x04)==0x04;
			reg_ANA_TX_EM_PO_EN_LANE = (txffe_save[gen][0]&0x02)==0x02;	
			txffe_force_en = txffe_save[gen][0]&0x01;								
		}	
		
	}
	#endif

	#if _DBG_TRAIN_SAVE==1
	DBG_Printf(" tx=%d", change);
	#endif
	
	gen = gen_rx;		
	change = (TRAIN_CONTROL_9.BT.B1 & (0x01<<gen)) != 0;		
	if(change) //previous train pass?
	{	
		UPHY14_TRX_ANAREG_TOP_128.BT.B0 = rc_save[gen][1]; //ffe_cap1/res1
		UPHY14_TRX_ANAREG_BOT_0.BT.B0   = rc_save[gen][2]; //ffe_cap2/res2/E
		UPHY14_TRX_ANAREG_TOP_129.BT.B0 = rc_save[gen][3]; //ffe_cap2/res2/O
		
		//dfe
		UPHY14_TRX_ANAREG_BOT_20.BT.B0  = rc_save[gen][0]; //dfe_res_f0/f1/f234
		UPHY14_TRX_ANAREG_BOT_21.BT.B0 &= 0x1f;
		UPHY14_TRX_ANAREG_BOT_21.BT.B0 |= (rc_save[gen][0]&0xe0); //FLOATING/F8TO15/F567	
		

		if(lnx_CAL_DONE_LANE==1) goto skip_out;

		//phase
		reg_ALIGN90_REF_LANE_5_0 = phase_save[gen][0];
		UPHY14_TRX_ANAREG_BOT_12.BT.B0 = phase_save[gen][1]; //gm
		UPHY14_TRX_ANAREG_BOT_13.BT.B0 = phase_save[gen][2]; //dm, dac			
		reg_ALIGN90_SYN_CLK_LANE = 1;
		short_delay();//delay01(2);
		reg_ALIGN90_SYN_CLK_LANE = 0;	
		
		//dfe
		if(dfe_dis==0) {
			memcpy((uint8_t *)&DFE_FEXT_EVEN_REG0, (uint8_t *)&(dfe_sm_save[gen]), sizeof(Status_dfe_sm_t));			
            //DFE_FEN_EVEN_REG.VAL    = 0x7fffffffL;
            //DFE_FEN_EVEN_REG.VAL    = 0;
            //DFE_FEN_ODD_REG.VAL     = 0x7fffffffL;
            //DFE_FEN_ODD_REG.VAL     = 0;
			
			reg_DFE_INIT_SEL_LANE = 1;
		}
	}
	else { 
		//load spdtbl 
		reg_FFE_RES1_SEL_LANE_3_0       = speedtable[gen][spdoft_ffe_res1_sel_lane];
		reg_FFE_RES2_SEL_O_LANE_3_0     = speedtable[gen][spdoft_ffe_res2_sel_o_lane];
		reg_FFE_RES2_SEL_E_LANE_3_0     = speedtable[gen][spdoft_ffe_res2_sel_e_lane];		
		reg_FFE_CAP1_SEL_LANE_3_0       = speedtable[gen][spdoft_ffe_cap1_sel_lane];	
		reg_FFE_CAP2_SEL_O_LANE_3_0     = speedtable[gen][spdoft_ffe_cap2_sel_o_lane];	
		reg_FFE_CAP2_SEL_E_LANE_3_0     = speedtable[gen][spdoft_ffe_cap2_sel_e_lane];	
	}	

skip_out:	

	#if _DBG_TRAIN_SAVE==1
	debug_print_train_result();
	#endif
	
}        

#define read_sq() reg_PIN_RX_SQ_OUT_LPF_RD_LANE

void sq_auto_train_enable(void) {
	uint8_t rd_sq = 0;
	
	rd_sq = read_sq();
	
	if(pre_sq_rd != rd_sq) { 	
		pre_sq_rd = rd_sq;
		if(rd_sq==0 && reg_TX_TRAIN_ENABLE_LANE==0) { //assert tx_train			
			#if _DEBUG
			DBG_Printf("\r\n Detect SQ=0, start SQ Auto txTrain--" );
			#endif
			reg_TX_TRAIN_ENABLE_LANE = 1;
		}
	}

}

#ifdef _SATA_SERDES_BUILD
void sq_wait(void) {
	#ifdef _DEBUG
	//DBG_Printf("\r\n txtrain start sq wait..");
	#endif
	
	timeout_start(500); //0.5uS	
	while( read_sq()==1 ) {
		if(timeout) break;
	}
	timeout_stop;
}
#endif //_SATA_SERDES_BUILD

