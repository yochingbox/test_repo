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
//#pragma codeseg BANK1
//#pragma constseg BANK1
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

void CTLE_Adaptation_Init(void) BANKING_CTRL
{
	ctle_vote = 0;
	ctle_adaptation_running = 0;
	
	phase_vote = 0;
	// init in trx_train_init
	temp_pre = 0;
	ctle_sum_metric = 0;
}

void CTLE_Adaptation(void) BANKING_CTRL
{
	if(!reg_DFE_ADAPT_CONT_LANE || !realtime_adapt_en)
		return;
	
	if(tag_PHASE_EN && rate_mode==QR || tag_PHASE_EN_HR && rate_mode!=QR){
		if(timeout2_check(PHASE_TIMER)){
			int8_t temp_vote = phase_vote;
			timeout2_start(PHASE_TIMER,(uint32_t)tag_PHASE_TIMER*1000000L);
            rtpa_qr(tag_PHASE_THRES, tag_PHASE_NITER, tag_PHASE_STEP, &temp_vote);
            phase_vote = temp_vote;
		}
	}
	
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
		
		if(tag_CTLE_EN_HR && rate_mode!=QR){
			// If tag_CTLE_EN_HR, non-QR will use this scheme no matter what tag_CTLE_EN; QR will do nothing->and see tag_CTLE_EN
			// New scheme to directly move with temperature
			uint16_t i = 0;
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
				record_temp(lnx_MCU_RESERVEDX0F_LANE_7_0, ctle_sel2);lnx_MCU_RESERVEDX0F_LANE_7_0++;
				#endif
			}
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
			lnx_TRAIN_DEBUG1_LANE_7_0 = opt.f0a;
			lnx_TRAIN_DEBUG8_LANE_7_0 = opt.f1;
			//set_dfe_cont(1);
			//timer2_stop(CTLE_TIMER);
			ctle_adaptation_running = 0;// ctle task ends

		}// if(tag_CTLE_EN)
//timer2_stop(TEST_TIMER);
	}// if(timeout2_check(CTLE_TIMER))
}
#endif
