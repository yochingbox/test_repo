#include "common.h"
#include "driver.h"
#include "ph_ctrl_adv.h"

// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg BANK2
#endif

#define MIN_ALIGN90_REFCODE 0
#define MAX_ALIGN90_REFCODE 192

#define MIN_RX_DCC_REFCODE 194
#define MAX_RX_DCC_REFCODE 254

#define MIN_CKPX_TUNE_REFCODE -31
#define MAX_CKPX_TUNE_REFCODE 31

#define MAX_UINT16_T 65535


// added by JL
/*
void save_to_ph_train_adv();
void save_align90_de();
void save_align90_dd();
uint8_t convert_align90_de_reg_to_code();
uint8_t convert_align90_dd_reg_to_code();
void save_rx_dcc(uint8_t x);
uint8_t convert_rx_dcc_reg_to_code(uint8_t reg_rx_dcc_10_3, uint8_t reg_rx_dcc_2_0);
void save_ckpx_tune(uint8_t x);
int8_t convert_ckpx_tune_reg_to_code(int8_t reg_ckpx_da_tune_4_0, int8_t reg_ckpx_er_tune_4_0);
*/

bool reset_rx_clk_top_cont_start_lane() BANKING_CTRL;
void set_rx_clk_top_cont_start_lane() BANKING_CTRL;

static void time_delay()
{
    delay_ram(T_3us);
}

void save_rx_align90_de(Status_Phase_Train_Adv_t* ph_train_struct) BANKING_CTRL 
{
    ph_train_struct->rx_align90_de_ref_7_0 = convert_rx_align90_de_reg_to_code();
#ifdef _PH_TRAIN_ADV_DEBUG
    DBG_Printf(",saving rx_align90_de_code: %d ", ph_train_struct->rx_align90_de_ref_7_0);
#endif
}

uint8_t convert_rx_align90_de_reg_to_code() BANKING_CTRL 
{
    uint8_t rx_align90_ref_code_7_0;

    rx_align90_ref_code_7_0 = reg_RX_ALIGN90_DE_CAL_SETTING_LANE_10_3 & 0x1f;
    rx_align90_ref_code_7_0 = rx_align90_ref_code_7_0 << 3; 
    rx_align90_ref_code_7_0 = rx_align90_ref_code_7_0 | reg_RX_ALIGN90_DE_CAL_SETTING_LANE_2_0;

    return rx_align90_ref_code_7_0;
}

bool reset_rx_clk_top_cont_start_lane() BANKING_CTRL
{
    if (reg_RX_CLK_TOP_CONT_START_LANE == 0)
    {
        DBG_Printf("\r\nreg_RX_CLK_TOP_CONT_START_LANE is already 0!");
        return false;
    }

    reg_RX_CLK_TOP_CONT_START_LANE = 0;
    while(1)
    {
        if (reg_RX_CLK_TOP_CONT_DONE_LANE == 1)
            return true;
    }
    
    return false;
}

void set_rx_clk_top_cont_start_lane() BANKING_CTRL
{
    reg_RX_CLK_TOP_CONT_START_LANE = 1;
}

void set_rx_align90_de_reg(uint8_t rx_align90_de_ref_code_7_0) BANKING_CTRL 
{
//#ifdef _PH_TRAIN_ADV_DEBUG
    DBG_Printf("\r\nsetting rx_align90_de_code: %d ", rx_align90_de_ref_code_7_0);
//#endif

    reset_rx_clk_top_cont_start_lane();
    reg_RX_ALIGN90_DE_CAL_SETTING_LANE_10_3 = reg_RX_ALIGN90_DE_CAL_SETTING_LANE_10_3 & 0xe0;
    reg_RX_ALIGN90_DE_CAL_SETTING_LANE_10_3 |= (rx_align90_de_ref_code_7_0 >> 3);
    reg_RX_ALIGN90_DE_CAL_SETTING_LANE_2_0 = rx_align90_de_ref_code_7_0 & 0x7;
    set_rx_clk_top_cont_start_lane();

    time_delay();
}

void save_rx_align90_dd(Status_Phase_Train_Adv_t* ph_train_struct) BANKING_CTRL
{
    ph_train_struct->rx_align90_dd_ref_7_0 = convert_rx_align90_dd_reg_to_code();
#ifdef _PH_TRAIN_ADV_DEBUG
    DBG_Printf(",saving rx_align90_dd_code: %d ", ph_train_struct->rx_align90_dd_ref_7_0);
#endif
}

uint8_t convert_rx_align90_dd_reg_to_code() BANKING_CTRL 
{
    uint8_t rx_align90_ref_code_7_0;
    rx_align90_ref_code_7_0 = reg_RX_ALIGN90_DD_CAL_SETTING_LANE_11_4 & 0x0f;
    rx_align90_ref_code_7_0 = rx_align90_ref_code_7_0 << 4;
    rx_align90_ref_code_7_0 = rx_align90_ref_code_7_0 | reg_RX_ALIGN90_DD_CAL_SETTING_LANE_3_0;

   
    return rx_align90_ref_code_7_0;
}

void set_rx_align90_dd_reg(uint8_t rx_align90_dd_ref_code_7_0) BANKING_CTRL 
{
#ifdef _PH_TRAIN_ADV_DEBUG
    DBG_Printf("\r\nsetting rx_align90_dd_code: %d ", rx_align90_dd_ref_code_7_0);
#endif
    reg_RX_ALIGN90_DD_CAL_SETTING_LANE_11_4 = reg_RX_ALIGN90_DD_CAL_SETTING_LANE_11_4 & 0xf0;
    reg_RX_ALIGN90_DD_CAL_SETTING_LANE_11_4 |= (rx_align90_dd_ref_code_7_0 >> 4);
    reg_RX_ALIGN90_DD_CAL_SETTING_LANE_3_0 = rx_align90_dd_ref_code_7_0 & 0xf;

    time_delay();
}


void save_rx_dcc(uint8_t x, Status_Phase_Train_Adv_t* ph_train_struct) BANKING_CTRL 
{
    if (x == 1){ // dcc1
        ph_train_struct->rx_dcc_p2p4_ref_7_0 = convert_rx_dcc_reg_to_code(x);
#ifdef _PH_TRAIN_ADV_DEBUG
        DBG_Printf(",saving dcc1: %d ", ph_train_struct->rx_dcc_p2p4_ref_7_0);
#endif

    } else if (x == 4){ // dcc4
        ph_train_struct->rx_dcc_p1p3_ref_7_0 = convert_rx_dcc_reg_to_code(x);
#ifdef _PH_TRAIN_ADV_DEBUG
        DBG_Printf(",saving dcc4: %d ", ph_train_struct->rx_dcc_p1p3_ref_7_0);
#endif
    }
}        

uint8_t convert_rx_dcc_reg_to_code_h(uint8_t reg_rx_dcc_10_3, uint8_t reg_rx_dcc_2_0) BANKING_CTRL 
{
    uint8_t rx_dcc_ref_code_7_0;
    
    rx_dcc_ref_code_7_0 = reg_rx_dcc_10_3 & 0x1f;
    rx_dcc_ref_code_7_0 = rx_dcc_ref_code_7_0 << 3;
    rx_dcc_ref_code_7_0 = rx_dcc_ref_code_7_0 | reg_rx_dcc_2_0;
    
    return rx_dcc_ref_code_7_0;
}

uint8_t convert_rx_dcc_reg_to_code(uint8_t rx_dcc_1or4) BANKING_CTRL 
{
    if (rx_dcc_1or4 == 1)
        return convert_rx_dcc_reg_to_code_h(reg_RX_DCC1_CAL_SETTING_LANE_10_3, 
                reg_RX_DCC1_CAL_SETTING_LANE_2_0);
    // rx_dcc_1or4 == 4
    return convert_rx_dcc_reg_to_code_h(reg_RX_DCC4_CAL_SETTING_LANE_10_3, 
                reg_RX_DCC4_CAL_SETTING_LANE_2_0);
}


void set_rx_dcc_reg(uint8_t x, uint8_t rx_dcc_ref_code_7_0) BANKING_CTRL 
{
    if (x == 1)
    {
#ifdef _PH_TRAIN_ADV_DEBUG
        DBG_Printf("\r\nsetting rx_dcc1 (p2p4): %d ", rx_dcc_ref_code_7_0);
#endif

        reg_RX_DCC1_CAL_SETTING_LANE_10_3 = reg_RX_DCC1_CAL_SETTING_LANE_10_3 & 0xe0;
        reg_RX_DCC1_CAL_SETTING_LANE_10_3 |= (rx_dcc_ref_code_7_0 >> 3);
        reg_RX_DCC1_CAL_SETTING_LANE_2_0 = rx_dcc_ref_code_7_0 & 0x7;
    } else if (x == 4) {
#ifdef _PH_TRAIN_ADV_DEBUG
        DBG_Printf("\r\nsetting rx_dcc4 (p1p3): %d ", rx_dcc_ref_code_7_0);
#endif

        reg_RX_DCC4_CAL_SETTING_LANE_10_3 = reg_RX_DCC4_CAL_SETTING_LANE_10_3 & 0xe0;
        reg_RX_DCC4_CAL_SETTING_LANE_10_3 |= (rx_dcc_ref_code_7_0 >> 3);
        reg_RX_DCC4_CAL_SETTING_LANE_2_0 = rx_dcc_ref_code_7_0 & 0x7;     
    }

    time_delay();
}


void save_ckpx_tune(uint8_t x, Status_Phase_Train_Adv_t* ph_train_struct) BANKING_CTRL 
{
    if (x == 1){
        ph_train_struct->ckp1_tune_code_lane_4_0 = convert_ckpx_tune_reg_to_code(1);
#ifdef _PH_TRAIN_ADV_DEBUG
        DBG_Printf(",saving ckp1_tune_code: %d ", ph_train_struct->ckp1_tune_code_lane_4_0);
#endif
    } else if (x == 2){
        ph_train_struct->ckp2_tune_code_lane_4_0 = convert_ckpx_tune_reg_to_code(2);
#ifdef _PH_TRAIN_ADV_DEBUG
        DBG_Printf(",saving ckp2_tune_code: %d ", ph_train_struct->ckp2_tune_code_lane_4_0);
#endif
    } else if (x == 3){
        ph_train_struct->ckp3_tune_code_lane_4_0 = convert_ckpx_tune_reg_to_code(3);
#ifdef _PH_TRAIN_ADV_DEBUG
        DBG_Printf(",saving ckp3_tune_code: %d ", ph_train_struct->ckp3_tune_code_lane_4_0);
#endif
    } else if (x == 4){
        ph_train_struct->ckp4_tune_code_lane_4_0 = convert_ckpx_tune_reg_to_code(4);
#ifdef _PH_TRAIN_ADV_DEBUG
        DBG_Printf(",saving ckp4_tune_code: %d ", ph_train_struct->ckp4_tune_code_lane_4_0);        
#endif
    }
}

#if 0
// not used
int8_t convert_ckpx_tune_reg_to_code_h(int8_t reg_ckpx_da_tune_4_0, int8_t reg_ckpx_er_tune_4_0) BANKING_CTRL 
{
    return reg_ckpx_da_tune_4_0 - reg_ckpx_er_tune_4_0;
}

#endif

int8_t convert_ckpx_tune_reg_to_code(uint8_t x) BANKING_CTRL 
{
    switch(x)
    {
        case 1:
            return reg_CKP1_DA_TUNE_CODE_LANE_4_0 - reg_CKP1_ER_TUNE_CODE_LANE_4_0;
        case 2:
            return reg_CKP2_DA_TUNE_CODE_LANE_4_0 - reg_CKP2_ER_TUNE_CODE_LANE_4_0;
        case 3:
            return reg_CKP3_DA_TUNE_CODE_LANE_4_0 - reg_CKP3_ER_TUNE_CODE_LANE_4_0;
        case 4:
            return reg_CKP4_DA_TUNE_CODE_LANE_4_0 - reg_CKP4_ER_TUNE_CODE_LANE_4_0;
    }
    return 0;
}

void set_ckpx_tune_reg(uint8_t x, int8_t reg_ckpx_tune_code_4_0) BANKING_CTRL 
{
    if (x == 1){
#ifdef _PH_TRAIN_ADV_DEBUG
        DBG_Printf("\r\nsetting ckp1_tune: %d ", reg_ckpx_tune_code_4_0);
#endif
        if (reg_ckpx_tune_code_4_0 <= 0){
            reg_CKP1_DA_TUNE_CODE_LANE_4_0 = 0;
            reg_CKP1_ER_TUNE_CODE_LANE_4_0 = -1*reg_ckpx_tune_code_4_0;
        } else {
            reg_CKP1_DA_TUNE_CODE_LANE_4_0 = reg_ckpx_tune_code_4_0;
            reg_CKP1_ER_TUNE_CODE_LANE_4_0 = 0; 
        }
    } else if (x == 2){
#ifdef _PH_TRAIN_ADV_DEBUG
        DBG_Printf("\r\nsetting ckp2_tune: %d ", reg_ckpx_tune_code_4_0);
#endif
        if (reg_ckpx_tune_code_4_0 <= 0){
            reg_CKP2_DA_TUNE_CODE_LANE_4_0 = 0;
            reg_CKP2_ER_TUNE_CODE_LANE_4_0 = -1*reg_ckpx_tune_code_4_0;
        } else {
            reg_CKP2_DA_TUNE_CODE_LANE_4_0 = reg_ckpx_tune_code_4_0;
            reg_CKP2_ER_TUNE_CODE_LANE_4_0 = 0; 
        }
    } else if (x == 3){
#ifdef _PH_TRAIN_ADV_DEBUG
        DBG_Printf("\r\nsetting ckp3_tune: %d ", reg_ckpx_tune_code_4_0);
#endif
        if (reg_ckpx_tune_code_4_0 <= 0){
            reg_CKP3_DA_TUNE_CODE_LANE_4_0 = 0;
            reg_CKP3_ER_TUNE_CODE_LANE_4_0 = -1*reg_ckpx_tune_code_4_0;
        } else {
            reg_CKP3_DA_TUNE_CODE_LANE_4_0 = reg_ckpx_tune_code_4_0;
            reg_CKP3_ER_TUNE_CODE_LANE_4_0 = 0; 
        }
    } else if (x == 4){
#ifdef _PH_TRAIN_ADV_DEBUG
        DBG_Printf("\r\nsetting ckp4_tune: %d ", reg_ckpx_tune_code_4_0);
#endif
        if (reg_ckpx_tune_code_4_0 <= 0){
            reg_CKP4_DA_TUNE_CODE_LANE_4_0 = 0;
            reg_CKP4_ER_TUNE_CODE_LANE_4_0 = -1*reg_ckpx_tune_code_4_0;
        } else {
            reg_CKP4_DA_TUNE_CODE_LANE_4_0 = reg_ckpx_tune_code_4_0;
            reg_CKP4_ER_TUNE_CODE_LANE_4_0 = 0; 
        }
    } 
}

void save_to_ph_train_adv(Status_Phase_Train_Adv_t* ph_train_struct) BANKING_CTRL 
{
    uint8_t x;

    save_rx_align90_de(ph_train_struct);
    save_rx_align90_dd(ph_train_struct);
    save_rx_dcc(1, ph_train_struct);
    save_rx_dcc(4, ph_train_struct);
    
    for (x = 1; x < 5; x++)
    {
        save_ckpx_tune(x, ph_train_struct);
    }
}

void load_from_ph_train_adv(Status_Phase_Train_Adv_t* ph_train_struct) BANKING_CTRL 
{
    set_rx_align90_de_reg(ph_train_struct->rx_align90_de_ref_7_0);
    set_rx_align90_dd_reg(ph_train_struct->rx_align90_dd_ref_7_0);
    set_rx_dcc_reg(1, ph_train_struct->rx_dcc_p2p4_ref_7_0);
    set_rx_dcc_reg(4, ph_train_struct->rx_dcc_p1p3_ref_7_0);

            
    set_ckpx_tune_reg(1, ph_train_struct->ckp1_tune_code_lane_4_0);
    set_ckpx_tune_reg(2, ph_train_struct->ckp2_tune_code_lane_4_0);
    set_ckpx_tune_reg(3, ph_train_struct->ckp3_tune_code_lane_4_0);
    set_ckpx_tune_reg(4, ph_train_struct->ckp4_tune_code_lane_4_0);
}


uint16_t compute_avg_f0d(PH_TRAIN_CTRL_t control) BANKING_CTRL 
{
    uint16_t sum_f0d = 0;
    uint8_t p_idx, ds_idx;
    
    switch(control)
    {
        case P2P4_A90:
        case P2P4_DCC:
            sum_f0d = train.f0d_tmb[1][0] + train.f0d_tmb[1][1] +
                train.f0d_tmb[3][0] + train.f0d_tmb[3][1];
            break;
        case P1P3_A90:
        case P1P3_DCC:
            sum_f0d = train.f0d_tmb[0][0] + train.f0d_tmb[0][1] +
                train.f0d_tmb[2][0] + train.f0d_tmb[2][1];
            break;
        case P1_DtoS:
            sum_f0d = train.f0d_tmb[0][0] + train.f0d_tmb[0][1];
            break;
        case P2_DtoS:
            sum_f0d = train.f0d_tmb[1][0] + train.f0d_tmb[1][1];
            break;
        case P3_DtoS:
            sum_f0d = train.f0d_tmb[2][0] + train.f0d_tmb[2][1];
            break;
        case P4_DtoS:
            sum_f0d = train.f0d_tmb[3][0] + train.f0d_tmb[3][1];
            break;
        case ALL:
            for (p_idx = 0; p_idx < NUM_PATH; p_idx++){
                for (ds_idx = 0; ds_idx < NUM_DS; ds_idx++){
                    sum_f0d += train.f0d_tmb[p_idx][ds_idx];
                }
            }
            break;
    }
    
#ifdef _PH_TRAIN_ADV_DEBUG
    DBG_Printf(",***** sum_f0d: %d ***** ", sum_f0d); 
#endif
    return sum_f0d;
}

uint16_t compute_f1_fn1_h(int8_t f1, int8_t fn1) BANKING_CTRL 
{

    uint8_t a = 1;
    uint8_t b = 0;
    uint16_t abs_f1_minus_kfn1;

    //DBG_Printf("\r\nhi"); 
    abs_f1_minus_kfn1 = abs(f1 - (a*fn1) >> b);

    //DBG_Printf("\r\n,***** abs(%d - %d) = %d ***** ", f1, fn1, abs_f1_minus_kfn1); 
           
    return abs_f1_minus_kfn1; 
}



uint16_t compute_f1_fn1(PH_TRAIN_CTRL_t control) BANKING_CTRL 
{
    uint16_t sum_abs_f1_minus_kfn1 = 0;
    uint8_t p_idx, ds_idx;

    switch(control)
    {
        case P2P4_A90:
        case P2P4_DCC:
            sum_abs_f1_minus_kfn1 = compute_f1_fn1_h(train.f1_tmb[1][0], train.fn1_tmb[1][0])
                + compute_f1_fn1_h(train.f1_tmb[1][1], train.fn1_tmb[1][1])
                + compute_f1_fn1_h(train.f1_tmb[3][0], train.fn1_tmb[3][0])
                + compute_f1_fn1_h(train.f1_tmb[3][1], train.fn1_tmb[3][1]);
            break;
        case P1P3_A90:
        case P1P3_DCC:
            sum_abs_f1_minus_kfn1 = compute_f1_fn1_h(train.f1_tmb[0][0], train.fn1_tmb[0][0])
                + compute_f1_fn1_h(train.f1_tmb[0][1], train.fn1_tmb[0][1])
                + compute_f1_fn1_h(train.f1_tmb[2][0], train.fn1_tmb[2][0])
                + compute_f1_fn1_h(train.f1_tmb[2][1], train.fn1_tmb[2][1]);
            break;
        case P1_DtoS:
            sum_abs_f1_minus_kfn1 = compute_f1_fn1_h(train.f1_tmb[0][0], train.fn1_tmb[0][0])
                + compute_f1_fn1_h(train.f1_tmb[0][1], train.fn1_tmb[0][1]);
            break;
        case P2_DtoS:
            sum_abs_f1_minus_kfn1 = compute_f1_fn1_h(train.f1_tmb[1][0], train.fn1_tmb[1][0])
                + compute_f1_fn1_h(train.f1_tmb[1][1], train.fn1_tmb[1][1]);
            break;
        case P3_DtoS:
            sum_abs_f1_minus_kfn1 = compute_f1_fn1_h(train.f1_tmb[2][0], train.fn1_tmb[2][0])
                + compute_f1_fn1_h(train.f1_tmb[2][1], train.fn1_tmb[2][1]);
            break;
        case P4_DtoS:
            sum_abs_f1_minus_kfn1 = compute_f1_fn1_h(train.f1_tmb[3][0], train.fn1_tmb[3][0])
                + compute_f1_fn1_h(train.f1_tmb[3][1], train.fn1_tmb[3][1]);

            break;
        case ALL:
            for (p_idx = 0; p_idx < NUM_PATH; p_idx++){
                for (ds_idx = 0; ds_idx < NUM_DS; ds_idx++){
                    sum_abs_f1_minus_kfn1 += compute_f1_fn1_h(train.f1_tmb[p_idx][ds_idx], train.fn1_tmb[p_idx][ds_idx]);
                }
            }
            break;
    }    

#ifdef _PH_TRAIN_ADV_DEBUG
    DBG_Printf(",***** sum_abs_f1_minus_kfn1: %d ***** ", sum_abs_f1_minus_kfn1); 
#endif
    return sum_abs_f1_minus_kfn1;
}



uint16_t get_metric(PH_TRAIN_MODE_t train_mode, PH_TRAIN_CTRL_t control) BANKING_CTRL 
{
    uint16_t metric;
    if (train_mode == f0d)
        metric = compute_avg_f0d(control);
    else if (train_mode == f1_fn1)
        metric = compute_f1_fn1(control);
    return metric;
}

static uint16_t get_metric_align90de(PH_TRAIN_MODE_t train_mode, PH_TRAIN_PATH_SEL_t path_sel)
{
    uint16_t metric;
    if (path_sel == All)
        metric = get_metric(train_mode, All);
    else
        metric = get_metric(train_mode, P2P4_A90);
    return metric;
}

static uint16_t get_metric_align90dd(PH_TRAIN_MODE_t train_mode, PH_TRAIN_PATH_SEL_t path_sel)
{
    uint16_t metric;
    if (path_sel == All)
        metric = get_metric(train_mode, All);
    else
        metric = get_metric(train_mode, P1P3_A90);
    return metric;
}

uint16_t get_metric_dcc(uint8_t rx_dcc1or4, PH_TRAIN_MODE_t train_mode, PH_TRAIN_PATH_SEL_t path_sel) BANKING_CTRL
{
    uint16_t metric;
    if (path_sel == All)
        metric = get_metric(train_mode, All);
    else if (rx_dcc1or4 == 1)
        metric = get_metric(train_mode, P2P4_DCC);
    else if (rx_dcc1or4 == 4)
        metric = get_metric(train_mode, P1P3_DCC);
    return metric;
}

uint16_t get_metric_ckpx_tune(uint8_t x, PH_TRAIN_MODE_t train_mode, PH_TRAIN_PATH_SEL_t path_sel) BANKING_CTRL
{
    uint16_t metric;
    if (path_sel == All)
        metric = get_metric(train_mode, All);
    else if (x == 1)
        metric = get_metric(train_mode, P1_DtoS);
    else if (x == 2)
        metric = get_metric(train_mode, P2_DtoS);
    else if (x == 3)
        metric = get_metric(train_mode, P3_DtoS);
    else if (x == 4)
        metric = get_metric(train_mode, P4_DtoS);
    return metric;
}

static bool metric_got_better(PH_TRAIN_MODE_t train_mode, uint16_t metric)
{
    // larger metric is better
    if (train_mode > 0)
    {
        return (metric > ph_train_opt.best_metric);
    }
    else if (train_mode < 0)
    {
        return (metric < ph_train_opt.best_metric);
    }
    return true;
}


static bool metric_got_worse(PH_TRAIN_MODE_t train_mode, uint16_t metric)
{
    // larger metric is better
    if (train_mode > 0)
    {
        // is metric smaller than 0.875*best_metric
        //return (metric < ((ph_train_opt.best_metric*7)>>3));
        
        // is metric smaller than 0.9375*best_metric
        return (metric < ((ph_train_opt.best_metric*15)>>4));
    }
    else if (train_mode < 0)
    {
        // is metric larger than 2*best_metric
        return (metric > ph_train_opt.best_metric*2);
    }
    return true;
}

void optimize_ckpx_tune(uint8_t x, PH_TRAIN_MODE_t train_mode, PH_TRAIN_PATH_SEL_t path_sel) BANKING_CTRL
{
    int8_t step_size = 1;
    
    int8_t start = convert_ckpx_tune_reg_to_code(x);
    int8_t setting;

    uint8_t cnt = 0;
    uint8_t max_cnt = 20;

    uint16_t metric;
    
#ifdef _PH_TRAIN_ADV_DEBUG
    DBG_Printf("\r\n,***** CKP%d_TUNE sweeping up *****", x); 
#endif

    // save initial metric as best metric
    save_ckpx_tune(x, &ph_train_opt);
    ph_train_opt.best_metric = get_metric_ckpx_tune(x, train_mode, path_sel);

    for (setting = start; setting <= MAX_CKPX_TUNE_REFCODE; setting += step_size)
    {
        if (cnt >= max_cnt)
            break;
        set_ckpx_tune_reg(x, setting);
        get_fx();
        
        metric = get_metric_ckpx_tune(x, train_mode, path_sel);

        // save new setting and metric if it is better than what we've seen so far
        if (metric_got_better(train_mode, metric))
        {
            save_ckpx_tune(x, &ph_train_opt);
            ph_train_opt.best_metric = metric;
        }
        // stop sweeping when the metric becomes worse
        //else if (metric < (ph_train_opt.best_metric*3)>>2)
        else if (metric_got_worse(train_mode, metric))
            break;
        cnt++;
    }

    cnt = 0;
#ifdef _PH_TRAIN_ADV_DEBUG
    DBG_Printf("\r\n,***** CKP%d_TUNE sweeping down *****", x); 
#endif

    for (setting = start; setting >= MIN_CKPX_TUNE_REFCODE; setting -= step_size)
    {
        if (cnt >= max_cnt)
            break;
        set_ckpx_tune_reg(x, setting);
        get_fx();
        
        metric = get_metric_ckpx_tune(x, train_mode, path_sel);

        // save new setting and metric if it is better than what we've seen so far
        if (metric_got_better(train_mode, metric))
        {
            save_ckpx_tune(x, &ph_train_opt);
            ph_train_opt.best_metric = metric;
        }
        // stop sweeping when the metric becomes worse
        //else if (metric < (ph_train_opt.best_metric*3)>>2)
        else if (metric_got_worse(train_mode, metric))
            break;
        cnt++;
    }

    // write best settings back to register
    switch(x)
    {
        case 1:
            set_ckpx_tune_reg(1, ph_train_opt.ckp1_tune_code_lane_4_0);
            break;
        case 2:
            set_ckpx_tune_reg(2, ph_train_opt.ckp2_tune_code_lane_4_0);
            break;
        case 3:
            set_ckpx_tune_reg(3, ph_train_opt.ckp3_tune_code_lane_4_0);
            break;
        case 4:
            set_ckpx_tune_reg(4, ph_train_opt.ckp4_tune_code_lane_4_0);
            break;
    }

    // adapt one last time to obtain optimized tap printout
    get_fx();
    metric = get_metric_ckpx_tune(x, train_mode, path_sel);
}

void optimize_rx_dcc1or4(uint8_t rx_dcc1or4, PH_TRAIN_MODE_t train_mode, PH_TRAIN_PATH_SEL_t path_sel) BANKING_CTRL
{
    int8_t step_size = 1;
    
    uint8_t start_dcc = convert_rx_dcc_reg_to_code(rx_dcc1or4);
    uint8_t setting_dcc;

    uint8_t cnt = 0;
    uint8_t max_cnt = 20;

    uint16_t metric;
    
#ifdef _PH_TRAIN_ADV_DEBUG
    DBG_Printf("\r\n,***** DCC%d sweeping up *****", rx_dcc1or4); 
#endif

    // save initial metric as best metric
    save_rx_dcc(rx_dcc1or4, &ph_train_opt);
    ph_train_opt.best_metric = get_metric_dcc(rx_dcc1or4, train_mode, path_sel);

    for (setting_dcc = start_dcc; setting_dcc <= MAX_RX_DCC_REFCODE; setting_dcc += step_size)
    {
        if (cnt >= max_cnt)
            break;
        set_rx_dcc_reg(rx_dcc1or4, setting_dcc);
        get_fx();
        
        metric = get_metric_dcc(rx_dcc1or4, train_mode, path_sel);

        // save new setting and metric if it is better than what we've seen so far
        if (metric_got_better(train_mode, metric))
        {
            save_rx_dcc(rx_dcc1or4, &ph_train_opt);
            ph_train_opt.best_metric = metric;
        }
        // stop sweeping when the metric becomes worse
        // else if (metric < (ph_train_opt.best_metric*3)>>2)
        else if (metric_got_worse(train_mode, metric))
            break;
        cnt++;
    }

    cnt = 0;
#ifdef _PH_TRAIN_ADV_DEBUG
    DBG_Printf("\r\n,***** DCC%d sweeping down *****", rx_dcc1or4); 
#endif
    for (setting_dcc = start_dcc; setting_dcc >= MIN_RX_DCC_REFCODE; setting_dcc -= step_size)
    {
        if (cnt >= max_cnt)
            break;
        set_rx_dcc_reg(rx_dcc1or4, setting_dcc);
        get_fx();
        
        metric = get_metric_dcc(rx_dcc1or4, train_mode, path_sel);
        
        // save new setting and metric if it is better than what we've seen so far
        if (metric_got_better(train_mode, metric))
        {
            save_rx_dcc(rx_dcc1or4, &ph_train_opt);
            ph_train_opt.best_metric = metric;
        }
        // stop sweeping when the metric becomes worse
        // else if (metric < (ph_train_opt.best_metric*3)>>2)
        else if (metric_got_worse(train_mode, metric))
            break;

        cnt++;
    }

    // write best settings back to register
    if (rx_dcc1or4 == 1)
        set_rx_dcc_reg(1, ph_train_opt.rx_dcc_p2p4_ref_7_0);
    else if (rx_dcc1or4 == 4)
        set_rx_dcc_reg(4, ph_train_opt.rx_dcc_p1p3_ref_7_0);


    // adapt one last time to obtain optimized tap printout
    get_fx();

    metric = get_metric_dcc(rx_dcc1or4, train_mode, path_sel);
}


void optimize_rx_align90_dd(PH_TRAIN_MODE_t train_mode, PH_TRAIN_PATH_SEL_t path_sel) BANKING_CTRL
{
    int8_t step_size = 1;
    
    uint8_t start_dd = convert_rx_align90_dd_reg_to_code();
    uint8_t setting_dd;

    uint8_t cnt = 0;
    uint8_t max_cnt = 20;

    uint16_t metric;


    
#ifdef _PH_TRAIN_ADV_DEBUG
    DBG_Printf("\r\n,***** A90_DD sweeping up *****"); 
#endif
    // save initial metric as best
    save_rx_align90_dd(&ph_train_opt);
    ph_train_opt.best_metric = get_metric_align90dd(train_mode, path_sel);
    

    for (setting_dd = start_dd; setting_dd <= MAX_ALIGN90_REFCODE; setting_dd += step_size)
    {
        if (cnt >= max_cnt)
            break;
        set_rx_align90_dd_reg(setting_dd);
        get_fx();
        
        metric = get_metric_align90dd(train_mode, path_sel);
        // save new setting and metric if it is better than what we've seen so far
        if (metric_got_better(train_mode, metric))
        {
            save_rx_align90_dd(&ph_train_opt);
            ph_train_opt.best_metric = metric;
        }
        // stop sweeping when the metric becomes worse
        // else if (metric < (ph_train_opt.best_metric*3)>>2)
        else if (metric_got_worse(train_mode, metric))
            break;
        cnt++;
    }

    cnt = 0;
#ifdef _PH_TRAIN_ADV_DEBUG
    DBG_Printf("\r\n,***** A90_DD sweeping down *****"); 
#endif
    for (setting_dd = start_dd; setting_dd >= MIN_ALIGN90_REFCODE; setting_dd -= step_size)
    {
        if (cnt >= max_cnt)
            break;
        set_rx_align90_dd_reg(setting_dd);
        get_fx();

        metric = get_metric_align90dd(train_mode, path_sel);
        
        // save new setting and metric if it is better than what we've seen so far
        if (metric_got_better(train_mode, metric))
        {
            save_rx_align90_dd(&ph_train_opt);
            ph_train_opt.best_metric = metric;
        }
        // stop sweeping when the metric becomes worse
        // else if (metric < (ph_train_opt.best_metric*3)>>2)
        else if (metric_got_worse(train_mode, metric))
            break;

        cnt++;
        // added since setting_dd is unsigned and loop needs to stop at 0
        // decrementing beyond 0 will cause setting_de to be at UInt8_t.MAX_VALUE, causing infinite loop

        if (setting_dd == 0)
            break;
    }

    // write best settings back to register
    set_rx_align90_dd_reg(ph_train_opt.rx_align90_dd_ref_7_0);

    // adapt one last time to obtain optimized tap printout
    get_fx();
    metric = get_metric_align90dd(train_mode, path_sel);

}


void optimize_rx_align90_de(PH_TRAIN_MODE_t train_mode, PH_TRAIN_PATH_SEL_t path_sel) BANKING_CTRL
{
    int8_t step_size = 1;
    
    uint8_t start_de = convert_rx_align90_de_reg_to_code();
    uint8_t start_dd = convert_rx_align90_dd_reg_to_code();
    uint8_t setting_de;
    uint8_t setting_dd;
    int8_t offset;

    uint8_t cnt = 0;
    uint8_t max_cnt = 20;

    uint16_t metric;

#ifdef _PH_TRAIN_ADV_DEBUG
    DBG_Printf("\r\n,***** A90DE sweeping up *****"); 
#endif

    get_fx(); // adapt once to initialize ph_train_adv struct

    // save initial metric as best
    save_rx_align90_de(&ph_train_opt);
    save_rx_align90_dd(&ph_train_opt);

    ph_train_opt.best_metric = get_metric_align90de(train_mode, path_sel);

    for (setting_de = start_de; setting_de <= MAX_ALIGN90_REFCODE; setting_de += step_size)
    {
        if (cnt >= max_cnt)
            break;
        offset = setting_de - start_de;
        setting_dd = start_dd + offset;
        if ((offset > 0) && (setting_dd < start_dd)) // positive overflow
            break;
        else if ((offset < 0) && (setting_dd > start_dd))
            break;
        set_rx_align90_de_reg(setting_de);
        set_rx_align90_dd_reg(setting_dd);
        get_fx();
        
        metric = get_metric_align90de(train_mode, path_sel);
        // save new setting and metric if it is better than what we've seen so far
        if (metric_got_better(train_mode, metric))
        {
            save_rx_align90_de(&ph_train_opt);
            save_rx_align90_dd(&ph_train_opt);
            ph_train_opt.best_metric = metric;
        }
        // stop sweeping when the metric becomes worse
        //else if (metric < (ph_train_opt.best_metric*3)>>2)
        else if (metric_got_worse(train_mode, metric))
            break;
        cnt++;
    }

    cnt = 0;
#ifdef _PH_TRAIN_ADV_DEBUG
    DBG_Printf("\r\n,***** A90DE sweeping down *****"); 
#endif
    for (setting_de = start_de; setting_de >= MIN_ALIGN90_REFCODE; setting_de -= step_size)
    {
        if (cnt >= max_cnt)
            break;
        offset = setting_de - start_de;
        setting_dd = start_dd + offset;
        if ((offset > 0) && (setting_dd < start_dd)) // positive overflow
            break;
        else if ((offset < 0) && (setting_dd > start_dd))
            break;
        set_rx_align90_de_reg(setting_de);
        set_rx_align90_dd_reg(setting_dd);
        get_fx();

        metric = get_metric_align90de(train_mode, path_sel);
        
        // save new setting and metric if it is better than what we've seen so far
        if (metric_got_better(train_mode, metric))
        {
            save_rx_align90_de(&ph_train_opt);
            save_rx_align90_dd(&ph_train_opt);
            ph_train_opt.best_metric = metric;
        }
        // stop sweeping when the metric becomes worse
        //else if (metric < (ph_train_opt.best_metric*3)>>2)
        else if (metric_got_worse(train_mode, metric))
            break;

        cnt++;
        // added since setting_dd is unsigned and loop needs to stop at 0
        // decrementing beyond 0 will cause setting_de to be at UInt8_t.MAX_VALUE, causing infinite loop
        if (setting_de == 0)
            break;
    }

    // write best settings back to register
    set_rx_align90_de_reg(ph_train_opt.rx_align90_de_ref_7_0);
    set_rx_align90_dd_reg(ph_train_opt.rx_align90_dd_ref_7_0);

    // adapt one last time to obtain optimized tap printout
    get_fx();
    metric = get_metric_align90de(train_mode, path_sel);
}


void adv_rx_phase_opt(PH_TRAIN_MODE_t train_mode, PH_TRAIN_PATH_SEL_t path_sel) BANKING_CTRL 
{
    uint8_t outer_loop;
    uint8_t i;

    uint8_t save_tag_DFE_LOAD_EN = tag_DFE_LOAD_EN;

    tag_DFE_LOAD_EN = 0;
    bit_performing_phase_train_adv = 1;

    save_to_ph_train_adv(&ph_train_opt); // save initial register state
    ph_train_opt.best_metric = get_metric(train_mode, path_sel); // save initial BER before optimization
    
    for (outer_loop = 0; outer_loop < 2; outer_loop++)
    {
        for (i = 0; i < 1; i++)
        {
            optimize_rx_align90_de(train_mode, path_sel);
            optimize_rx_align90_dd(train_mode, path_sel);
        }
        for (i = 0; i < 1; i++)
        {
            optimize_rx_dcc1or4(1, train_mode, path_sel); // dcc_p2p4
            optimize_rx_dcc1or4(4, train_mode, path_sel); // dcc_p1p3
        }
        for (i = 0; i < 1; i++)
        {
            optimize_rx_align90_de(train_mode, path_sel);
            optimize_rx_align90_dd(train_mode, path_sel);
        }
        for (i = 0; i < 1; i++)
        {
            optimize_rx_dcc1or4(1, train_mode, path_sel); // dcc_p2p4
            optimize_rx_dcc1or4(4, train_mode, path_sel); // dcc_p1p3
        }

        
        for (i = 0; i < 1; i++)
        {
            optimize_ckpx_tune(1, train_mode, path_sel);
            optimize_ckpx_tune(2, train_mode, path_sel);
            optimize_ckpx_tune(3, train_mode, path_sel);
            optimize_ckpx_tune(4, train_mode, path_sel);
        }
    }

    tag_DFE_LOAD_EN = save_tag_DFE_LOAD_EN;
    bit_performing_phase_train_adv = 0;

}

// added by JL
void get_fx(void) BANKING_CTRL
{
    //uint8_t sweep_table[] = {DFE_FX_SEL_FN3, DFE_FX_SEL_FN2, DFE_FX_SEL_FP1};
    uint8_t sweep_table[] = {DFE_FX_SEL_FP1};
    uint8_t nfx = sizeof(sweep_table)/sizeof(sweep_table[0]);
    uint8_t i;
    
    bit_print_debug = 0;

    set_dfe_cont(0);
    //cds_init(); //probably don't need this line in real training?
	cds_call = CDS_EN_PHASETRAIN_ADV;
    //DBG_Printf(",*********%d*********", nfx);
    for (i = 0; i < nfx; i++){
        if (i == (nfx - 1))
            bit_print_debug = 1;
        reg_DFE_F0X_SEL_LANE_4_0 = sweep_table[i];	
	    dfe_adaptation();
    }
	set_dfe_cont(1);
    bit_print_debug = 1;
}

