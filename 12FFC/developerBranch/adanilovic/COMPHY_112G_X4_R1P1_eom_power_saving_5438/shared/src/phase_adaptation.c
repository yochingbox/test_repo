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
#pragma codeseg BANK2
#pragma constseg BANK2
#endif

#include "ph_ctrl_adv.h"

#ifdef SUPPORT_PHASE_ADAPT
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
            DBG_Printf("\r\nVote up!"); 
#endif
            if ((align90_de_code_7_0 + step_size) < MAX_ALIGN90_REFCODE)
                set_rx_align90_de_reg(align90_de_code_7_0 - step_size);
            else
            {
#ifdef _RTPA_DEBUG 
                DBG_Printf("\r\nAt max ALIGN90DE code!");
#endif
                set_rx_align90_de_reg(MAX_ALIGN90_REFCODE);
            }
            *vote = 0;
        }
        else if (*vote <= -1*ph_thresh)
        {
#ifdef _RTPA_DEBUG 
            DBG_Printf("\r\nVote down!"); 
#endif
            if ((align90_de_code_7_0 - step_size) > MIN_ALIGN90_REFCODE)
                set_rx_align90_de_reg(align90_de_code_7_0 + step_size);
            else
            {
#ifdef _RTPA_DEBUG 
                DBG_Printf("\r\nAt min ALIGN90DE code!"); 
#endif
                set_rx_align90_de_reg(MIN_ALIGN90_REFCODE);
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

