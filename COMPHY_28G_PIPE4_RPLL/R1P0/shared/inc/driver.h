#ifndef DRIVER_H
#define DRIVER_H

#define drv_PH_OS_DAT       reg_PH_OS_DAT_LANE_7_0
#define drv_PH_OS_ESM       reg_PH_OS_ESM_LANE_7_0
#define drv_PH_MODE         reg_PH_MODE_LANE_1_0
#define drv_ADAPT_DATA_EN   reg_ADAPT_DATA_EN_LANE
#define drv_ADAPT_SLICER_EN reg_ADAPT_SLICER_EN_LANE
#define drv_ADAPT_EVEN_EN   reg_ADAPT_EVEN_EN_LANE
#define drv_ADAPT_ODD_EN    reg_ADAPT_ODD_EN_LANE
#define drv_ESM_EN          lnx_ESM_EN_LANE
#define drv_ESM_READY       lnx_EOM_READY_LANE
#define drv_ESM_VOLTAGE     lnx_ESM_VOLTAGE_LANE_7_0
#define drv_ESM_LPNUM0      lnx_ESM_LPNUM_LANE_15_0_b0
#define drv_ESM_LPNUM1      lnx_ESM_LPNUM_LANE_15_0_b1
#define drv_RXTRAIN_R_IDX   reg_RXTRAIN_R_IDX_LANE_3_0
#define drv_RXTRAIN_C_IDX   reg_RXTRAIN_C_IDX_LANE_3_0
#define drv_TXTRAIN_C1      reg_TXTRAIN_C1_LANE_7_0
#define drv_TXTRAIN_C0      reg_TXTRAIN_C0_LANE_7_0
#define drv_TXTRAIN_CN1     reg_TXTRAIN_CN1_LANE_7_0
#define drv_TXTRAIN_CN2     reg_TXTRAIN_CN2_LANE_7_0
#define drv_TXTRAIN_CE      reg_TXTRAIN_CE_LANE_7_0

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

// -- Phase Control Methods
//void set_ph_mode(uint8_t mode);

// -- CDS & DFE Methods
//void cds_init(void) BANKING_CTRL;
//void cdr_dfe_scheme_new(uint32_t cds_en) BANKING_CTRL; // TODO rename to cdr_dfe_scheme()
//void set_dfe_cont(bool on) BANKING_CTRL;
//void dfe_spd_init() BANKING_CTRL;
//void set_dfe_en(uint8_t en) BANKING_CTRL;
//void set_dfe_mod(uint8_t mod) BANKING_CTRL;

//#include "cdr_dfe_scheme.h"
//#include "ph_ctrl.h"

#endif
