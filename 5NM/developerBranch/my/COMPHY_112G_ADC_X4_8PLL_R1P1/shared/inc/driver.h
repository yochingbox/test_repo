#ifndef DRIVER_H
#define DRIVER_H

#define drv_PH_OS_DAT       reg_PH_OS_DAT_LANE_15_0
#define drv_PH_OS_ESM       reg_PH_OS_ESM_LANE_7_0
#define drv_PH_MODE         reg_PH_MODE_LANE_1_0
//#define drv_ADAPT_DATA_EN   reg_ADAPT_DATA_EN_LANE_7_0
//#define drv_ADAPT_SLICER_EN reg_ADAPT_SLICER_EN_LANE_7_0
#define drv_ADAPT_DATA_EN   reg_ADAPT_DATA_EN_LANE
#define drv_ADAPT_SLICER_EN reg_ADAPT_SLICER_EN_LANE
#define drv_ADAPT_EVEN_EN   reg_ADAPT_EVEN_EN_LANE
#define drv_ADAPT_ODD_EN    reg_ADAPT_ODD_EN_LANE
#define drv_ESM_EN          lnx_ESM_EN_LANE
#define drv_ESM_READY       lnx_EOM_READY_LANE
#define drv_ESM_VOLTAGE     lnx_ESM_VOLTAGE_LANE_7_0
#define drv_ESM_LPNUM0      lnx_ESM_LPNUM_LANE_15_0_b0
#define drv_ESM_LPNUM1      lnx_ESM_LPNUM_LANE_15_0_b1
//#define drv_RXTRAIN_R_IDX   reg_RXTRAIN_R_IDX_LANE_3_0
//#define drv_RXTRAIN_C_IDX   reg_RXTRAIN_C_IDX_LANE_3_0
//#define drv_TXTRAIN_C1      reg_TXTRAIN_C1_LANE_7_0
//#define drv_TXTRAIN_C0      reg_TXTRAIN_C0_LANE_7_0
//#define drv_TXTRAIN_CN1     reg_TXTRAIN_CN1_LANE_7_0
//#define drv_TXTRAIN_CN2     reg_TXTRAIN_CN2_LANE_7_0
//#define drv_TXTRAIN_CE      reg_TXTRAIN_CE_LANE_7_0
//
#define drv_TXTRAIN_FAIL         reg_TXTRAIN_FAIL_LANE
#define drv_TXTRAIN_CTRL_PRESET  reg_TXTRAIN_CTRL_PRESET_LANE_3_0
#define drv_TXTRAIN_CTRL_C1      reg_TXTRAIN_CTRL_C1_LANE_1_0
#define drv_TXTRAIN_CTRL_C0      reg_TXTRAIN_CTRL_C0_LANE_1_0
#define drv_TXTRAIN_CTRL_CN1     reg_TXTRAIN_CTRL_CN1_LANE_1_0
#define drv_TXTRAIN_CTRL_CN2     reg_TXTRAIN_CTRL_CN2_LANE_1_0
#define drv_TXTRAIN_CTRL_PAT     reg_TXTRAIN_CTRL_PAT_LANE_1_0
#define drv_TXTRAIN_STATUS_VALID reg_TXTRAIN_STATUS_VALID_LANE
#define drv_TXTRAIN_STATUS_C1    reg_TXTRAIN_STATUS_C1_LANE_2_0
#define drv_TXTRAIN_STATUS_C0    reg_TXTRAIN_STATUS_C0_LANE_2_0
#define drv_TXTRAIN_STATUS_CN1   reg_TXTRAIN_STATUS_CN1_LANE_2_0
#define drv_TXTRAIN_STATUS_CN2   reg_TXTRAIN_STATUS_CN2_LANE_2_0


//MSE
#define drv_MSE_MODE              reg_MSE_MODE_LANE
#define drv_MSE_LEN               reg_MSE_LEN_LANE_3_0
#define drv_MSE_CONT_MODE         reg_MSE_CONT_MODE_LANE
#define drv_MSE_DTL_SEL           reg_MSE_DTL_SEL_LANE
#define drv_MSE_LOW_THRES_b0      reg_MSE_LOW_THRES_LANE_15_0_b0
#define drv_MSE_LOW_THRES_b1      reg_MSE_LOW_THRES_LANE_15_0_b1
#define drv_MSE_HIGH_THRES_b0     reg_MSE_HIGH_THRES_LANE_15_0_b0
#define drv_MSE_HIGH_THRES_b1     reg_MSE_HIGH_THRES_LANE_15_0_b1
#define drv_MSE_ANI_LOAD          reg_MSE_ANI_LOAD_LANE
#define drv_MSE_ANI_VAL_EXT       reg_MSE_ANI_VAL_EXT_LANE_7_0
#define drv_MSE_ANI_ADAPT_EN      reg_MSE_ANI_ADAPT_EN_LANE
#define drv_MSE_ANI_ADAPT_SIGN    reg_MSE_ANI_ADAPT_SIGN_LANE
#define drv_MSE_ANI_STEP_SHIFT    reg_MSE_ANI_STEP_SHIFT_LANE_1_0
#define drv_MSE_DER0_FRAC         reg_MSE_DER0_FRAC_LANE
#define drv_MSE_DER0_SHIFT        reg_MSE_DER0_SHIFT_LANE_4_0
#define drv_MSE_VAL_b0            reg_MSE_VAL_LANE_15_0_b0
#define drv_MSE_VAL_b1            reg_MSE_VAL_LANE_15_0_b1
#define drv_DER_VAL_b0            reg_DER_VAL_LANE_15_0_b0
#define drv_DER_VAL_b1            reg_DER_VAL_LANE_15_0_b1
#define drv_MSE_ANI_VAL           reg_MSE_ANI_LANE_7_0

//sigmnt shared
#define drv_sigmnt_shared_in_abs  reg_SIGMNT_SHARED_IN_ABS_LANE
#define drv_sigmnt_shared_th1_8   reg_SIGMNT_SHARED_TH1_LANE_8
#define drv_sigmnt_shared_th1_7_0 reg_SIGMNT_SHARED_TH1_LANE_7_0
#define drv_sigmnt_shared_th2_8   reg_SIGMNT_SHARED_TH2_LANE_8
#define drv_sigmnt_shared_th2_7_0 reg_SIGMNT_SHARED_TH2_LANE_7_0
#define drv_sigmnt_shared_rot     reg_SIGMNT_SHARED_ROT_LANE
#define drv_sigmnt_shared_len     reg_SIGMNT_SHARED_LEN_LANE_3_0

#define drv_sigmnt_shared_sel     reg_SIGMNT_SHARED_SEL_LANE_2_0
#define drv_sigmnt_shared_mode    reg_SIGMNT_SHARED_MODE_LANE
#define drv_sigmnt_shared_idx_sel reg_SIGMNT_SHARED_IDX_SEL_LANE_5_0

#define drv_sigmnt_shared_ave  (lnx_SIGMNT_SHARED_VAL_AVE_LANE_15_8 << 8) | lnx_SIGMNT_SHARED_VAL_AVE_LANE_7_0
#define drv_sigmnt_shared_cdf1 (lnx_SIGMNT_SHARED_VAL_CDF1_LANE_15_8 << 8) | lnx_SIGMNT_SHARED_VAL_CDF1_LANE_7_0 
#define drv_sigmnt_shared_cdf2 (lnx_SIGMNT_SHARED_VAL_CDF2_LANE_15_8 << 8) | lnx_SIGMNT_SHARED_VAL_CDF2_LANE_7_0


//sigmnt adc
#define drv_sigmnt_adc_to_dp_in_abs       reg_SIGMNT_ADC_TO_DP_IN_ABS_LANE
#define drv_sigmnt_adc_to_dp_th1          reg_SIGMNT_ADC_TO_DP_TH1_LANE_6_0
#define drv_sigmnt_adc_to_dp_th2          reg_SIGMNT_ADC_TO_DP_TH2_LANE_6_0
#define drv_sigmnt_adc_to_dp_rot          reg_SIGMNT_ADC_TO_DP_ROT_LANE
#define drv_sigmnt_adc_to_dp_len          reg_SIGMNT_ADC_TO_DP_LEN_LANE_3_0

#define drv_sigmnt_adc_to_dp_diff_mode_en reg_SIGMNT_ADC_TO_DP_DIFF_MODE_EN_LANE
#define drv_sigmnt_adc_to_dp_diff_sel_eom reg_SIGMNT_ADC_TO_DP_DIFF_SEL_EOM_LANE
#define drv_sigmnt_adc_to_dp_diff_adc_sel reg_SIGMNT_ADC_TO_DP_DIFF_ADC_SEL_LANE_2_0
#define drv_sigmnt_adc_to_dp_mode         reg_SIGMNT_ADC_TO_DP_MODE_LANE
#define drv_sigmnt_adc_to_dp_idx_sel      reg_SIGMNT_ADC_TO_DP_IDX_SEL_LANE_5_0

#define drv_sigmnt_adc_to_dp_ave    (lnx_SIGMNT_ADC_TO_DP_VAL_AVE_LANE_15_8 << 8) | lnx_SIGMNT_ADC_TO_DP_VAL_AVE_LANE_7_0
#define drv_sigmnt_adc_to_dp_cdf1   (lnx_SIGMNT_ADC_TO_DP_VAL_CDF1_LANE_15_8 << 8) | lnx_SIGMNT_ADC_TO_DP_VAL_CDF1_LANE_7_0
#define drv_sigmnt_adc_to_dp_cdf2   (lnx_SIGMNT_ADC_TO_DP_VAL_CDF2_LANE_15_8 << 8) | lnx_SIGMNT_ADC_TO_DP_VAL_CDF2_LANE_7_0


// -- Clock & Data Methods
typedef enum {
    CDS_EN_DEFAULT,
    CDS_EN_RESET,
    CDS_EN_RXINIT,
    CDS_EN_SAVE,
    CDS_EN_RXTRAIN,
    CDS_EN_TRXTRAIN,
    CDS_EN_TXFFETRAIN,
    CDS_EN_TRXFINAL
} CDS_EN_t;

extern __code uint16_t cds_table[];
void drv_cds(uint16_t cds_en);

void drv_shared_sigmnt_init(void);
bool drv_shared_sigmnt(void);
void drv_adc_to_dp_sigmnt_init(void);
bool drv_adc_to_dp_sigmnt(void);

#include "drv_cds.h"

// -- ADC Calibration
#define ADC_CAL_STOP_GAO     0x0001
#define ADC_CAL_STOP_SKEW    0x0002
#define ADC_CAL_RESET_GAO    0x0005
#define ADC_CAL_RESET_SKEW   0x000A
#define ADC_CAL_SINGLE_GAO   0x0035
#define ADC_CAL_SINGLE_SKEW  0x03CA
#define ADC_CAL_TRAIN_GAO    0x0400
#define ADC_CAL_TRAIN_SKEW   0x0800
#define ADC_CAL_CONT_GAO     0x1000
#define ADC_CAL_CONT_SKEW    0x2000
#define ADC_CAL_CONT_AGC     0x4000

void drv_adc_cal(uint16_t adc_cal_en) BANKING_CTRL;

//void drv_shared_sigmnt_init(void);
//void drv_shared_signmt(void);
//void drv_adc_to_dp_sigmnt_init(void);
//void drv_adc_to_dp_signmt(void);
#endif
