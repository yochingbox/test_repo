/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file phase_adaptation.c
* \purpose Phase adaptation functions
* \History
*	5/29/2019 Xunzhi Wang
*/
#include "common.h"
#include "driver.h"

#ifdef USE_BANKING
#ifdef _12FFC_COMPHY_112G_X4_R1P2
#pragma codeseg BANK3
#pragma constseg BANK3
#else
#pragma codeseg BANK2
#pragma constseg BANK2
#endif
#endif

#include "ph_ctrl_adv.h"

void tracking_dfe_adaptation(void) BANKING_CTRL{

	uint8_t save_tag_DFE_LOAD_EN;
	
	save_tag_DFE_LOAD_EN = tag_DFE_LOAD_EN;
	tag_DFE_LOAD_EN = 0;
	bit_performing_phase_train_adv = 1;
	set_dfe_cont(0);
	//ctle_adaptation_running = 2;// do not bypass cds_call
	reg_DFE_F0X_SEL_LANE_4_0 = DFE_FX_SEL_FP1; //DFE_FX_SEL_FN2; 	

	cds_call = CDS_EN_FINAL_MEASURE; //cds_call = CDS_EN_TRACKMEAS;
	dfe_adaptation();

	set_dfe_cont(1);
	tag_DFE_LOAD_EN = save_tag_DFE_LOAD_EN;
	bit_performing_phase_train_adv = 0;

}

#ifdef SUPPORT_PHASE_ADAPT
#ifdef SUPPORT_PHASE_ADAPT_QR
//#define _RTPA_DEBUG

#define MIN_ALIGN90_REFCODE 0
#define MAX_ALIGN90_REFCODE 192

int16_t get_rtpa_metric(PH_TRAIN_CTRL_t control) BANKING_CTRL;
int8_t get_sign(int16_t num) BANKING_CTRL;
int16_t compute_signed_f1_fn1_h(int8_t f1, int8_t fn1) BANKING_CTRL;
int16_t compute_signed_f1_fn1(PH_TRAIN_CTRL_t control) BANKING_CTRL;


void rtpa_qr( int8_t ph_thresh, uint8_t niterations, int8_t step_size, int8_t* vote ) BANKING_CTRL
{
    uint8_t i = 0;
    uint8_t align90_de_code_7_0;

    int16_t metric;

    // initialize settings for RTPA
    uint8_t save_tag_DFE_LOAD_EN = tag_DFE_LOAD_EN;
    tag_DFE_LOAD_EN = 0;
    bit_performing_phase_train_adv = 1; // actually just using this flag to configure the correct CDS
    //

    for (i = 0; i < niterations; i++)
    { 
        align90_de_code_7_0 = convert_rx_align90_de_reg_to_code();
        get_fx();

        metric = get_rtpa_metric(ALL);
#ifdef _RTPA_DEBUG        
        DBG_Printf(",f1-fn1_diff,%d", metric);
#endif
        (*vote) += get_sign(metric);
        // f1 > fn1, increase align90
#ifdef _RTPA_DEBUG 
        DBG_Printf(",vote,%d", *vote);
#endif
        if (*vote >= ph_thresh)
        {
#ifdef _RTPA_DEBUG 
            DBG_Printf("\r\nVote down!"); 
#endif
            if (align90_de_code_7_0 > (MIN_ALIGN90_REFCODE + step_size))
                set_rx_align90_de_reg(align90_de_code_7_0 - step_size);
            else
            {
#ifdef _RTPA_DEBUG 
                DBG_Printf("\r\nAt min ALIGN90DE code!");
#endif
                set_rx_align90_de_reg(MIN_ALIGN90_REFCODE);
            }
            *vote = 0;
        }
        else if (*vote <= -1*ph_thresh)
        {
#ifdef _RTPA_DEBUG 
            DBG_Printf("\r\nVote up!"); 
#endif
            if ((align90_de_code_7_0 + step_size) < MAX_ALIGN90_REFCODE)
                set_rx_align90_de_reg(align90_de_code_7_0 + step_size);
            else
            {
#ifdef _RTPA_DEBUG 
                DBG_Printf("\r\nAt max ALIGN90DE code!"); 
#endif
                set_rx_align90_de_reg(MAX_ALIGN90_REFCODE);
            } 
            *vote = 0;
        }
    }

    // restore settings
    tag_DFE_LOAD_EN = save_tag_DFE_LOAD_EN;
    bit_performing_phase_train_adv = 0;
    //
    
}

int16_t get_rtpa_metric(PH_TRAIN_CTRL_t control) BANKING_CTRL 
{
    int16_t metric = compute_signed_f1_fn1(control);
    return metric;
}

int16_t compute_signed_f1_fn1_h(int8_t f1, int8_t fn1) BANKING_CTRL 
{

    int8_t a = 1;
    int8_t b = 0;
    int16_t signed_f1_minus_kfn1;
    
    if (rate_mode != QR)
        f1 = (lnx_TRAIN_DEBUG0_LANE_7_0>>5&0x1) ? train.trained_fn1 : lnx_TRAIN_DEBUGC_LANE_7_0;
    
    signed_f1_minus_kfn1 = f1 - (a*fn1) >> b;

    //DBG_Printf("\r\n,***** %d - %d = %d ***** ", f1, fn1, signed_f1_minus_kfn1); 
           
    return signed_f1_minus_kfn1; 
}

int16_t compute_signed_f1_fn1(PH_TRAIN_CTRL_t control) BANKING_CTRL 
{
    int16_t sum_signed_f1_minus_kfn1 = 0;
    int8_t p_idx, ds_idx;

    switch(control)
    {
        case P2P4_A90:
        case P2P4_DCC:
            sum_signed_f1_minus_kfn1 = compute_signed_f1_fn1_h(train.f1_tmb[1][0], train.fn1_tmb[1][0])
                + compute_signed_f1_fn1_h(train.f1_tmb[1][1], train.fn1_tmb[1][1])
                + compute_signed_f1_fn1_h(train.f1_tmb[3][0], train.fn1_tmb[3][0])
                + compute_signed_f1_fn1_h(train.f1_tmb[3][1], train.fn1_tmb[3][1]);
            break;
        case P1P3_A90:
        case P1P3_DCC:
            sum_signed_f1_minus_kfn1 = compute_signed_f1_fn1_h(train.f1_tmb[0][0], train.fn1_tmb[0][0])
                + compute_signed_f1_fn1_h(train.f1_tmb[0][1], train.fn1_tmb[0][1])
                + compute_signed_f1_fn1_h(train.f1_tmb[2][0], train.fn1_tmb[2][0])
                + compute_signed_f1_fn1_h(train.f1_tmb[2][1], train.fn1_tmb[2][1]);
            break;
        case P1_DtoS:
            sum_signed_f1_minus_kfn1 = compute_signed_f1_fn1_h(train.f1_tmb[0][0], train.fn1_tmb[0][0])
                + compute_signed_f1_fn1_h(train.f1_tmb[0][1], train.fn1_tmb[0][1]);
            break;
        case P2_DtoS:
            sum_signed_f1_minus_kfn1 = compute_signed_f1_fn1_h(train.f1_tmb[1][0], train.fn1_tmb[1][0])
                + compute_signed_f1_fn1_h(train.f1_tmb[1][1], train.fn1_tmb[1][1]);
            break;
        case P3_DtoS:
            sum_signed_f1_minus_kfn1 = compute_signed_f1_fn1_h(train.f1_tmb[2][0], train.fn1_tmb[2][0])
                + compute_signed_f1_fn1_h(train.f1_tmb[2][1], train.fn1_tmb[2][1]);
            break;
        case P4_DtoS:
            sum_signed_f1_minus_kfn1 = compute_signed_f1_fn1_h(train.f1_tmb[3][0], train.fn1_tmb[3][0])
                + compute_signed_f1_fn1_h(train.f1_tmb[3][1], train.fn1_tmb[3][1]);

            break;
        case ALL:
            for (p_idx = 0; p_idx < NUM_PATH; p_idx++){
                for (ds_idx = 0; ds_idx < NUM_DS; ds_idx++){
                    if (rate_mode!=QR && (p_idx==0 || p_idx==2)) continue; 
                    sum_signed_f1_minus_kfn1 += compute_signed_f1_fn1_h(train.f1_tmb[p_idx][ds_idx], train.fn1_tmb[p_idx][ds_idx]);
                }
            }
            break;
    }    

#ifdef _RTPA_DEBUG
    DBG_Printf(",***** sum_signed_f1_minus_kfn1: %d ***** ", sum_signed_f1_minus_kfn1); 
#endif
    return sum_signed_f1_minus_kfn1;
}

int8_t get_sign(int16_t num)
{
    if (num < 0)
        return -1;
    if (num > 0)
        return 1;
    return 0;

}
#endif

#ifdef SUPPORT_PHASE_ADAPT_HR
#define set_align90(ph) set_rx_align90_de_reg(ph)
#define get_align90() convert_rx_align90_de_reg_to_code()
#define pa_lpcnt phase_adapt_cnt

// 20201013 supporting 53g/25g
void rtpa_hr(void) BANKING_CTRL{
	uint8_t ph;
	uint16_t temp16;
	uint8_t f0b_low_thrs;
	uint16_t f0b_high_thrs;
	
	uint8_t f0b_hyst_low;
	uint8_t f0b_hyst_high;
	uint8_t adapt_lpnum;
	uint8_t f1_thrs3;
	uint8_t f1_thrs1;
	
	if(reg_RX_PAM2_EN_LANE==0){// assume 53g
		f0b_hyst_low = tag_PHASE_F0B_HYST_LOW_HR;
		f0b_hyst_high = tag_PHASE_F0B_HYST_HIGH_HR;
		adapt_lpnum = tag_PHASE_ADAPT_LPNUM_HR;
		f1_thrs3 = tag_PHASE_F1_THRS3_HR;
		f1_thrs1 = tag_PHASE_F1_THRS1_HR;
	}else{
		switch(reg_RXSPEED_DIV_LANE_2_0){
		case 0://25g
		f0b_hyst_low = tag_PHASE_F0B_HYST_LOW_25G;
		f0b_hyst_high = tag_PHASE_F0B_HYST_HIGH_25G;
		adapt_lpnum = tag_PHASE_ADAPT_LPNUM_25G;
		f1_thrs3 = tag_PHASE_F1_THRS3_25G;
		f1_thrs1 = tag_PHASE_F1_THRS1_25G;
		default: return;// not supported
		}	
	}
	// Note: tag_PHASE_F0B_HYST_*_HR*tag_PHASE_ADAPT_LPNUM_HR should be <=0xff
	temp16 = (uint16_t)opt.f0*(uint16_t)(f0b_hyst_low*adapt_lpnum)/100; // tag_F0B_HYST_LOW = 2
                                 //opt_f0b is the same as opt.f0 in X7121 code
	f0b_low_thrs = (uint8_t)temp16; 
	temp16 = (uint16_t)opt.f0*(uint16_t)(f0b_hyst_high*adapt_lpnum)/100; // tag_F0B_HYST_HIGH = 10
	f0b_high_thrs = temp16;
	
	tracking_dfe_adaptation();
//	lnx_UART_EN_LANE = 0;

	//accumulate fn1 and f1 for 8 times	
	pa_sum_fn1 += train.fn1;
	pa_sum_f1 += train.f1;
	
	if(pa_lpcnt++ < adapt_lpnum) return;   // tag_PHASE_ADAPT_LPNUM = 8

	//execute below part after accumulate fn1 and f1 for 8 times
	ph = get_align90();

	if(pa_sum_fn1 < (int16_t)(f0b_low_thrs) && 
		pa_sum_f1 >= (int16_t)(f1_thrs3*adapt_lpnum)) {
			if(ph > tag_CDR_PHASE_MIN) {
				ph--; 
			}
			else {
				DBG_Printf("\r\n ++phase: hit min!!");
			}
	}
	else if(pa_sum_fn1 > (int16_t)(f0b_high_thrs)) {
			if(ph < tag_CDR_PHASE_MAX) {
				ph++; 
			}
			else {
				DBG_Printf("\r\n ++phase: hit max!!");
			}
		
	}
	else if(pa_sum_fn1>0 &&
		pa_sum_f1<=(int16_t)(f1_thrs1*adapt_lpnum)){
		if(ph < tag_CDR_PHASE_MAX) {
			ph++; 
		}		
		else {
			DBG_Printf("\r\n ++phase: hit max!!");
		}
	}

	set_align90(ph);
	
	lnx_MCU_RESERVEDX15_LANE_7_0 = opt.f0;
	
	lnx_MCU_RESERVEDX17_LANE_7_0 = pa_sum_fn1>>8&0xff;
	lnx_MCU_RESERVEDX16_LANE_7_0 = pa_sum_fn1&0xff;
	lnx_MCU_RESERVEDX21_LANE_7_0 = pa_sum_f1>>8&0xff;
	lnx_MCU_RESERVEDX20_LANE_7_0 = pa_sum_f1&0xff;

	#if _DBG_CTLE_ADAPT
	DBG_Printf("\r\n ++: %d: fn1=%d pa_sum_fn1=%d f1:%d pa_sum_f1=%d ph=%d", pa_lpcnt, train.fn1, pa_sum_fn1, train.f1, pa_sum_f1, ph);
	#endif
	
	pa_sum_fn1 = 0;
	pa_sum_f1 = 0;
	pa_lpcnt = 0;	
	
}

#endif

#endif

