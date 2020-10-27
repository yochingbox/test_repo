/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file phase_adaptation.c
* \purpose Phase adaptation functions
* \History
*	12/03/2019 Xunzhi Wang		Move CTLE adaptation function in
*/

#include "common.h"
#include "driver.h"

#ifdef USE_BANKING
#ifdef _12FFC_COMPHY_112G_X4_R1P2
#pragma codeseg BANK3
#pragma constseg BANK3
#else
//#pragma codeseg BANK1
//#pragma constseg BANK1
#endif
#endif

#ifdef SUPPORT_CTLE_ADAPT
/*//#define CTLE_ADAPT_F0A*/
/*#define CTLE_ADAPT_F0B*/

// All read only for FW
/*#define tag_CTLE_EN (lnx_TRAIN_DEBUG0_LANE_7_0&0x1)*/
/*#define tag_CTLE_CONFIG_EN (lnx_TRAIN_DEBUG0_LANE_7_0>>1&0x1)*/
/*#ifdef CTLE_ADAPT_F0A*/
/*#define tag_CTLE_STEP (tag_CTLE_CONFIG_EN?lnx_CTLE_DEBUG0_LANE_7_0:1)*/
/*#endif*/
/*#ifdef CTLE_ADAPT_F0B*/
/*#define tag_CTLE_F0B_DIVISOR (tag_CTLE_CONFIG_EN?(lnx_CTLE_DEBUG0_LANE_7_0>>4&0xf):4)*/
/*#define tag_CTLE_STEP (tag_CTLE_CONFIG_EN?(lnx_CTLE_DEBUG0_LANE_7_0&0xf):8)*/
/*#endif*/
/*#define tag_CTLE_THRES (tag_CTLE_CONFIG_EN?min_ram(lnx_CTLE_DEBUG1_LANE_7_0,127):64)*/
/*#define tag_CTLE_TIMER (tag_CTLE_CONFIG_EN?lnx_CTLE_DEBUG2_LANE_7_0:50) // ms*/
//#define ctle_vote lnx_CTLE_DEBUG3_LANE_7_0

#define tag_DC_VREF_ADJ_EN (lnx_TRAIN_DEBUG0_LANE_7_0>>4&0x1)

#define tag_PHASE_EN (lnx_TRAIN_DEBUG0_LANE_7_0>>2&0x1)
#define tag_PHASE_CONFIG_EN (lnx_TRAIN_DEBUG0_LANE_7_0>>3&0x1)
#define tag_PHASE_NITER (tag_PHASE_CONFIG_EN?(lnx_PHASE_DEBUG0_LANE_7_0>>4&0xf):4)
#define tag_PHASE_STEP (tag_PHASE_CONFIG_EN?(lnx_PHASE_DEBUG0_LANE_7_0&0xf):1)
#define tag_PHASE_THRES (tag_PHASE_CONFIG_EN?min_ram(lnx_PHASE_DEBUG1_LANE_7_0,127):16)
#define tag_PHASE_TIMER (tag_PHASE_CONFIG_EN?lnx_PHASE_DEBUG2_LANE_7_0:1) // s
#define phase_vote lnx_PHASE_DEBUG3_LANE_7_0

// Called before training
void CTLE_Adaptation_Init(void) BANKING_CTRL
{
	ctle_vote = 0;
	ctle_adaptation_running = 0;
	
	// init in trx_train_init
	temp_pre = 0;
	ctle_sum_metric = 0;
	
	train_f0d_count = 0;
	
	phase_vote = 0;
	phase_adapt_cnt = 0;
	
	// phase adapt hr
	pa_sum_fn1 = 0;
	pa_sum_f1 = 0;
	
	timeout2_stop(PHASE_TIMER);
	timeout2_stop(CTLE_TIMER);
}

// Top realtime adaptation function:
// ctle/phase/dc_vref
void CTLE_Adaptation(void) BANKING_CTRL
{		
	if(!reg_DFE_ADAPT_CONT_LANE || !realtime_adapt_en)
		return;
			
	// Check SQ to guard realtime functions	GLC5616-573
	if(reg_PIN_RX_SQ_OUT_LPF_RD_LANE)
		return;
	
#ifdef SUPPORT_PHASE_ADAPT	
	if(timeout2_check(PHASE_TIMER)){
		if(tag_PHASE_EN_HR && rate_mode!=QR && reg_RX_PAM2_EN_LANE==0){
		#ifdef SUPPORT_PHASE_ADAPT_HR
			timeout2_start(PHASE_TIMER,(uint32_t)tag_PHASE_TIMER_HR*1000L);
			// internally handle supported speeds
			rtpa_hr();
		}else if(tag_PHASE_EN_25G && reg_RX_PAM2_EN_LANE==1){//pam2
			timeout2_start(PHASE_TIMER,(uint32_t)tag_PHASE_TIMER_25G*1000L);
			// internally handle supported speeds
			rtpa_hr();
		#endif
		}else if(tag_PHASE_EN && rate_mode==QR){
		#ifdef SUPPORT_PHASE_ADAPT_QR
			int8_t temp_vote = phase_vote;
			timeout2_start(PHASE_TIMER,(uint32_t)tag_PHASE_TIMER*1000000L);
            rtpa_qr(tag_PHASE_THRES, tag_PHASE_NITER, tag_PHASE_STEP, &temp_vote);
            // 20200310 John: clear vote every 8 times calling
            if(phase_adapt_cnt==7){
            	temp_vote = 0;
            	phase_adapt_cnt = 0;
            }else{
            	phase_adapt_cnt++;
            }
            phase_vote = temp_vote;
        #endif
		}
	}
#endif	
	if(timeout2_check(CTLE_TIMER)){
		// As the common timer for dc_vref_adj also
		if(tag_CTLE_EN_HR && rate_mode!=QR)
			timeout2_start(CTLE_TIMER,(uint32_t)tag_CTLE_TIMER_HR*1000L);
		else
			timeout2_start(CTLE_TIMER,(uint32_t)tag_CTLE_TIMER*1000L);
//timer2_start(TEST_TIMER);			
		if(tag_DC_VREF_ADJ_EN){
			//if(rate_mode==QR){
			//dfe_adapt_adj_vref_dc_thresh_1_lane[4:0]
			//	reg_DFE_ADAPT_ADJ_VREF_DC_EN_LANE = 1;
				dc_vref_adj(40, 0xf07);
			//	reg_DFE_ADAPT_ADJ_VREF_DC_EN_LANE = 0;
			//}
		}
#ifdef SUPPORT_F0D_MEASURE	
		reg_DFE_STEP_COARSE_EO_UP_LANE_3_0 = 0xb;
		reg_DFE_STEP_COARSE_EO_DN_LANE_3_0 = 0x0;
		reg_DFE_EO_UP_THRE_COARSE_LANE_4_0 = 0x3;
		reg_DFE_STEP_FINE_EO_UP_LANE_3_0 = 0xb;
		reg_DFE_STEP_FINE_EO_DN_LANE_3_0 = 0x0;
		// 2:0
		reg_DFE_EO_UP_THRE_FINE_LANE_4_0_b0 = 0x3;
#endif		
		if(tag_CTLE_EN_HR && rate_mode!=QR){
			// If tag_CTLE_EN_HR, non-QR will use this scheme no matter what tag_CTLE_EN; QR will do nothing->and see tag_CTLE_EN
			// New scheme to directly move with temperature
			int8_t flag = 0;
			uint8_t ctle_sel2 = 0;
			int16_t temp_current;
			
			//temp_current = (((int32_t)read_tsen_ram()*394) + 128900 + 500)/1000;
			temp_current = read_tsen_cel_ram();
			ctle_sel2 = clamp((int8_t)tag_CTLE_TEMP_CONST_HR+temp_current/(int16_t)max_ram((uint8_t)tag_CTLE_TEMP_STEP_HR,1),15,0);
			if(abs16(temp_current-temp_pre)>=(uint16_t)tag_CTLE_BUFFER_HR){
				set_ctle_sel2(ctle_sel2);
				temp_pre = temp_current;
				ctle_vote++;
				#ifdef SUPPORT_RECORD_TEMP
				record_temp(end_var, ctle_sel2);end_var++;
				#endif
			}
#ifdef SUPPORT_F0D_MEASURE
{
/*			// 20200430 John: read f0d*/
/*			uint8_t save_tag_DFE_LOAD_EN = tag_DFE_LOAD_EN;*/
/*			set_dfe_cont(0);*/
/*			tag_DFE_LOAD_EN = 0;*/
/*			bit_performing_phase_train_adv = 1;*/
/*			//dfe_adapt_en            0x0100*/
/*			//dfe_accu_en             0x1000 */
/*			cdr_dfe_scheme(0x00001100);*/
/*			tag_DFE_LOAD_EN = save_tag_DFE_LOAD_EN;*/
/*			cds_call = CDS_EN_F0D;*/
/*			dfe_adaptation();*/
/*			//cds_call = CDS_EN_PHASETRAIN_ADV;*/
/*			//cds_call = CDS_EN_F0D;//CDS_EN_PHASETRAIN2;*/
/*			//dfe_adaptation();*/
/*			set_dfe_cont(1);*/
/*			bit_performing_phase_train_adv = 0;*/
/*			//tag_DFE_LOAD_EN = save_tag_DFE_LOAD_EN;*/

			// 20200724 John: read f0d
			tracking_dfe_adaptation();
}
#endif			
		}else if(tag_CTLE_EN){
		//if(tag_CTLE_EN && realtime_adapt_en){
			int16_t metric16 = 0;
			int8_t flag = 0;
			uint8_t ctle_sel = 0;
			uint8_t ctle_sel2 = 0;
			int8_t metric = 0;

			ctle_adaptation_running = 1;// ctle task starts
			//timer2_start(CTLE_TIMER);
			lnx_UART_EN_LANE = 0;
			if(rate_mode==QR){
				// learn from get_fx()/adv_rx_phase_opt() usage
				uint8_t save_tag_DFE_LOAD_EN = tag_DFE_LOAD_EN;
				tag_DFE_LOAD_EN = 0;
				bit_performing_phase_train_adv = 1;
				set_dfe_cont(0);
				ctle_adaptation_running = 2;// do not bypass cds_call
				reg_DFE_F0X_SEL_LANE_4_0 = DFE_FX_SEL_FP1;
				cds_call = CDS_EN_PHASETRAIN_ADV;
				dfe_adaptation();
				set_dfe_cont(1);
				tag_DFE_LOAD_EN = save_tag_DFE_LOAD_EN;
				bit_performing_phase_train_adv = 0;
#ifdef CTLE_ADAPT_F0A
				metric = (opt.f0a-opt.f1)-(train.f0a-train.f1);
#endif
#ifdef CTLE_ADAPT_F0B
				// f0b-based algorithm
				metric16 = ((int16_t)(train.fn1+train.f1)<<4)-((int16_t)train.f0<<4)/(int16_t)max_ram(tag_CTLE_F0B_DIVISOR,1);
				// ctle_vote as a count
				if(ctle_vote<tag_CTLE_THRES){
					ctle_sum_metric += metric16;
					ctle_vote++;
				}else{
					ctle_sum_metric /= tag_CTLE_THRES;
					lnx_TRAIN_DEBUG9_LANE_7_0 = ctle_sum_metric;
					if(abs16(ctle_sum_metric)>(uint16_t)tag_CTLE_STEP){
						ctle_sel = get_ctle_sel();
						ctle_sel2 = get_ctle_sel2();
						if(ctle_sel2==0 && ctle_sel==0 && ctle_sum_metric<0){
						}else if (ctle_sel2==15 && ctle_sel==15 && ctle_sum_metric>0){
						}else if(ctle_sel<16 && ctle_sel2<16){
							if(ctle_sum_metric>0){// increase
								if(ctle_sel2<15)
									set_ctle_sel2(ctle_sel2+1);
								else
									set_ctle_sel(ctle_sel+1);
							}else if(ctle_sum_metric<0){// decrease
								if(ctle_sel2>0)
									set_ctle_sel2(ctle_sel2-1);
								else
									set_ctle_sel(ctle_sel-1);
							}
						}
					}
					ctle_sum_metric = 0;
					ctle_vote = 0;
				}
#endif
			}else{
				// Disable cont for cds call
				// Should go with cds_call but pay attention to abort cases
				//set_dfe_cont(0);
				// Now dfe_adaptation will only call cds_save for ctle. Ignore cds_call.
				//0x0900: dfe_fine_en+dfe_adapt_en
				//cds_call = 0x48;//0xC3DF48;//CDS_EN_PHASETRAIN2;//0x0;//0x0900;
				//cdr_dfe_scheme(cds_call);
				dfe_adaptation();
				#if 0
				sum_f0a = 0;
				cds_save(0x00);
				sum_f0a += combine_f0(cds112.s.f0a);
				train.f0a = (uint8_t)((((sum_f0a + (f0_1_factor>>1))/f0_1_factor) + half_shift) >> ctrl_max_dfe_adapt_shift);
				#endif
#ifdef CTLE_ADAPT_F0A
				metric = opt.f0a-train.f0a;
#endif
			}
#ifdef CTLE_ADAPT_F0A				
			// f0a-based algorithm
			//lnx_TRAIN_F1_LANE_7_0 = train.f1;
			//lnx_TRAIN_F0A_LANE_7_0 = train.f0a;
			lnx_UART_EN_LANE = 1;
			if(metric>tag_CTLE_STEP)
				ctle_vote++;
			else if(metric<-tag_CTLE_STEP)
				ctle_vote--;
			ctle_sel = get_ctle_sel();
			ctle_sel2 = get_ctle_sel2();
	
			if(ctle_sel<16 && ctle_sel2<16){
				//if(((reg_CTLE_RL2_SEL_G_P1_LANE_3_0 == 0)||(reg_CTLE_CURRENT2_SEL_G_P1_LANE_3_0 == 0))&&(ctle_vote == -1))
				if(ctle_sel2==0 && ctle_sel==0 && ctle_vote == -1)
					ctle_vote = 0;
				else if (ctle_sel2==15 && ctle_sel==15 && ctle_vote == 1)
					ctle_vote = 0;
				if(abs(ctle_vote)==tag_CTLE_THRES){
				//if(abs16(ctle_vote)==tag_CTLE_THRES){
					if((int8_t)ctle_vote>0){// increase
						if(ctle_sel2<15)
							set_ctle_sel2(ctle_sel2+1);
						else
							set_ctle_sel(ctle_sel+1);
					}else{// decrease
						if(ctle_sel2>0)
							set_ctle_sel2(ctle_sel2-1);
						else
							set_ctle_sel(ctle_sel-1);
					}
					ctle_vote = 0;
				}
			}
			lnx_TRAIN_DEBUG9_LANE_7_0 = metric;
#endif			
			lnx_TRAIN_DEBUG6_LANE_7_0 = opt.f0a;
			lnx_TRAIN_DEBUG8_LANE_7_0 = opt.f1;
			//set_dfe_cont(1);
			//timer2_stop(CTLE_TIMER);
			ctle_adaptation_running = 0;// ctle task ends
		}// if(tag_CTLE_EN)
		
#ifdef SUPPORT_F0D_MEASURE		
		// 20200430 John: read f0d
		sum_train_f0d += lnx_TRAIN_F0D_LANE_7_0;
		train_f0d_count++;
		if(train_f0d_count==MAX_TRAIN_F0D_COUNT){
			uint16_t avg_train_f0d = 0;
			uint8_t good_ber = 0;
			uint8_t temp = 0;
			if(reg_RX_PAM2_EN_LANE){
				// level of f0d/f0b: ber_indicator_factor_25g/(8*32) default 90, 35.15625%
				good_ber = (sum_train_f0d<<5)>(uint16_t)lnx_TRAIN_F0B_LANE_7_0*(uint16_t)ber_indicator_factor_25g;
			}else{
				good_ber = sum_train_f0d>(uint16_t)lnx_TRAIN_F0B_LANE_7_0;
			}
			temp = lnx_TRAIN_DEBUG1_LANE_7_0;
			lnx_TRAIN_DEBUG1_LANE_7_0 = temp&~0x1|good_ber;
			lnx_TRAIN_DEBUG2_LANE_7_0 = sum_train_f0d/MAX_TRAIN_F0D_COUNT;
			sum_train_f0d = 0;
			train_f0d_count = 0;
		}
				
		reg_DFE_STEP_COARSE_EO_UP_LANE_3_0 = 0x9;
		reg_DFE_STEP_COARSE_EO_DN_LANE_3_0 = 0x1;
		reg_DFE_EO_UP_THRE_COARSE_LANE_4_0 = 0x3;
		reg_DFE_STEP_FINE_EO_UP_LANE_3_0 = 0xa;
		reg_DFE_STEP_FINE_EO_DN_LANE_3_0 = 0x6;
		// 2:0
		reg_DFE_EO_UP_THRE_FINE_LANE_4_0_b0 = 0x4;
#endif				
//timer2_stop(TEST_TIMER);
	}// if(timeout2_check(CTLE_TIMER))
}
#endif
