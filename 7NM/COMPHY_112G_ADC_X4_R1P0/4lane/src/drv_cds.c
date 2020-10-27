#include "common.h"
#include "driver.h"

// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg CSEG
#endif

#define FAST_REG_RW

// -- ADC_CAL Variables
__code uint16_t cds_table[]   = {
        0x1F7D, //DEFAULT
        0x0001, //RESET
        0x0852, //RXINIT
        0x1000, //SAVE
        0x0E60, //RXTRAIN
        0x0C60, //TRXTRAIN
        0x0840, //TXFFETRAIN
        0x1840  //TRXFINAL
};

// -- CDS State declaration
typedef enum {
        CDS_ST_INIT         = 0,
        CDS_ST_RESET        = 1,
        CDS_ST_DTL_LOAD     = 2,
        CDS_ST_DTL_BLIND    = 3,
        CDS_ST_DTL_EQL      = 4,
        CDS_ST_DTL_COARSE   = 5,
        CDS_ST_DTL_FINE     = 6,
        CDS_ST_DTL_ACCU     = 7,
        CDS_ST_DP_LOAD      = 8,
        CDS_ST_DP_BLIND     = 9,
        CDS_ST_DP_COARSE    = 10,
        CDS_ST_DP_FINE      = 11,
        CDS_ST_DP_ACCU      = 12,
        CDS_ST_SAVE         = 13,
        CDS_ST_DONE         = 14
} CDS_STATE_t;

#define CDS_ST reg_CDS_STATE_LANE_7_0
#define CDS_ST_JUMP(name)  {CDS_ST = CDS_ST_ ## name;}


#define reset_en             0x0001
#define dtl_load_en          0x0002
#define dtl_blind_en         0x0004
#define dtl_eql_en           0x0008
#define dtl_coarse_en        0x0010
#define dtl_fine_en          0x0020
#define dtl_accu_en          0x0040
#define dp_load_en           0x0080
#define dp_blind_en          0x0100
#define dp_coarse_en         0x0200
#define dp_fine_en           0x0400
#define dp_accu_en           0x0800
#define save_en              0x1000


void drv_cds (uint16_t cds_en) BANKING_CTRL
{

    if(TRAIN_SIM_EN) return;

    CDS_ST_JUMP(INIT);

    if(cds_en & reset_en)
    {
    CDS_ST_JUMP(RESET);

    //Turn off Sweep
    drv_ph_scn_en(0);

    //Turn off LMS
    reg_RX_DTL_LMS_TOP_EN_LANE = 0;
    reg_RX_DP_LMS_TOP_EN_LANE = 0;

    //Disable LMS run stop
    reg_RX_DTL_LMS_RUN_STOP_EN_LANE = 0;
    reg_RX_DP_LMS_RUN_STOP_EN_LANE = 0;

    //reset DTL LMS
    drv_set_dtl_lms_ld(1);
    drv_set_dtl_lms_ext(0);

    //reset DP LMS
    drv_set_dp_lms_ld(1);
    drv_set_dp_lms_ext(0);
    }


    if(cds_en & dtl_load_en)
    {
    CDS_ST_JUMP(DTL_LOAD);

    //drv_set_dtl_lms_ld(1);
    drv_set_dtl_lms_ext(1);
    }


    if(cds_en & dtl_blind_en)
    {
    CDS_ST_JUMP(DTL_BLIND);

    //Turn on Sweep
    drv_ph_scn_en(reg_CDS_DTL_FREQ_OFST_LANE_15_0);

    //Set DTL Blind Eql
    reg_RX_DTL_BLIND_EQL_EN_LANE = 1;
    //Set DTL FFE and Gain LMS Enable
    drv_set_dtl_lms_ffe_pre_en (reg_CDS_DTL_BLIND_LMS_FFE_PRE_EN_LANE_2_0);
    drv_set_dtl_lms_ffe_pst_en (reg_CDS_DTL_BLIND_LMS_FFE_PST_EN_LANE_2_0);
    reg_RX_DTL_LMS_GAIN_EN_LANE = reg_CDS_DTL_BLIND_LMS_GAIN_EN_LANE;
    reg_RX_DTL_LMS_BLW_EN_LANE  = reg_CDS_DTL_BLIND_LMS_BLW_EN_LANE;
    //Set DTL FFE Gain BLW mu
    reg_RX_DTL_LMS_FFE_PRE1_MU_LANE_3_0 = reg_CDS_DTL_BLIND_LMS_FFE_PRE1_MU_LANE_3_0;
    reg_RX_DTL_LMS_FFE_PST1_MU_LANE_3_0 = reg_CDS_DTL_BLIND_LMS_FFE_PST1_MU_LANE_3_0;
    reg_RX_DTL_LMS_FFE_MU_LANE_3_0      = reg_CDS_DTL_BLIND_LMS_FFE_ALL_MU_LANE_3_0;
    reg_RX_DTL_LMS_GAIN_MU_LANE_3_0     = reg_CDS_DTL_BLIND_LMS_GAIN_MU_LANE_3_0;
    reg_RX_DTL_LMS_BLW_MU_LANE_3_0      = reg_CDS_DTL_BLIND_LMS_BLW_MU_LANE_3_0;
    //Enable DTL Top LMS
    reg_RX_DTL_LMS_TOP_EN_LANE = 1;
    if(reg_CDS_DTL_PH_SCN_BI_DIR_EN_LANE)
    {
      drv_ph_scn_wait (reg_CDS_DTL_FREQ_OFST_LANE_15_0, reg_CDS_DTL_BLIND_TIMER_LANE_15_0);
    }
    else
    {
      wait_converge (reg_CDS_DTL_BLIND_TIMER_LANE_15_0);
    }
    reg_RX_DTL_LMS_TOP_EN_LANE = 0;

    //Turn off Sweep
    drv_ph_scn_dis();
    }


    if(cds_en & dtl_eql_en)
    {
    CDS_ST_JUMP(DTL_EQL);

    //Turn on Sweep
    drv_ph_scn_en(reg_CDS_DTL_FREQ_OFST_LANE_15_0);

    //Set DTL Blind Eql
    reg_RX_DTL_BLIND_EQL_EN_LANE = 0;
    //Set DTL FFE and Gain LMS Enable
    drv_set_dtl_lms_ffe_pre_en (reg_CDS_DTL_EQL_LMS_FFE_PRE_EN_LANE_2_0);
    drv_set_dtl_lms_ffe_pst_en (reg_CDS_DTL_EQL_LMS_FFE_PST_EN_LANE_2_0);
    reg_RX_DTL_LMS_GAIN_EN_LANE = reg_CDS_DTL_EQL_LMS_GAIN_EN_LANE;
    reg_RX_DTL_LMS_BLW_EN_LANE  = reg_CDS_DTL_EQL_LMS_BLW_EN_LANE;
    //Set DTL FFE Gain BLW mu
    reg_RX_DTL_LMS_FFE_PRE1_MU_LANE_3_0 = reg_CDS_DTL_EQL_LMS_FFE_PRE1_MU_LANE_3_0;
    reg_RX_DTL_LMS_FFE_PST1_MU_LANE_3_0 = reg_CDS_DTL_EQL_LMS_FFE_PST1_MU_LANE_3_0;
    reg_RX_DTL_LMS_FFE_MU_LANE_3_0      = reg_CDS_DTL_EQL_LMS_FFE_ALL_MU_LANE_3_0;
    reg_RX_DTL_LMS_GAIN_MU_LANE_3_0     = reg_CDS_DTL_EQL_LMS_GAIN_MU_LANE_3_0;
    reg_RX_DTL_LMS_BLW_MU_LANE_3_0      = reg_CDS_DTL_EQL_LMS_BLW_MU_LANE_3_0;
    //Enable DTL Top LMS
    reg_RX_DTL_LMS_TOP_EN_LANE = 1;
    if(reg_CDS_DTL_PH_SCN_BI_DIR_EN_LANE)
    {
      drv_ph_scn_wait (reg_CDS_DTL_FREQ_OFST_LANE_15_0, reg_CDS_DTL_EQL_TIMER_LANE_15_0);
    }
    else
    {
      wait_converge (reg_CDS_DTL_EQL_TIMER_LANE_15_0);
    }
    reg_RX_DTL_LMS_TOP_EN_LANE = 0;

    //Turn off Sweep
    drv_ph_scn_dis();
    }


    if(cds_en & dtl_coarse_en)
    {
    CDS_ST_JUMP(DTL_COARSE);

    //Set DTL PLL loop parameters
    reg_RX_DTL_LPF_FRZ_LANE = 1; //freeze before change KP/KI, will be fixed in 5nm
    reg_RX_DTL_LPF_KP_EN_LANE = 0;
    reg_RX_DTL_LPF_KI_EN_LANE = 0;
    reg_RX_DTL_LPF_KP_FRAC_LANE_2_0  = reg_CDS_DTL_COARSE_LPF_KP_FRAC_LANE_2_0;
    reg_RX_DTL_LPF_KP_SHIFT_LANE_3_0 = reg_CDS_DTL_COARSE_LPF_KP_SHIFT_LANE_3_0;
    reg_RX_DTL_LPF_KI_FRAC_LANE      = reg_CDS_DTL_COARSE_LPF_KI_FRAC_LANE;
    reg_RX_DTL_LPF_KI_SHIFT_LANE_4_0 = reg_CDS_DTL_COARSE_LPF_KI_SHIFT_LANE_4_0;
    reg_RX_DTL_LPF_KP_EN_LANE = 1;
    reg_RX_DTL_LPF_KI_EN_LANE = 1;
    //Turn on DTL PLL
    reg_RX_DTL_LPF_FRZ_LANE = 0;
    reg_RX_DTL_FLOOP_FRZ_LANE = 0;
    reg_DTL_RST_SYNC_LANE = 0;

    //Set DTL Blind Eql
    reg_RX_DTL_BLIND_EQL_EN_LANE = 0;
    //Set DTL FFE and Gain LMS Enable
    drv_set_dtl_lms_ffe_pre_en (reg_CDS_DTL_COARSE_LMS_FFE_PRE_EN_LANE_2_0);
    drv_set_dtl_lms_ffe_pst_en (reg_CDS_DTL_COARSE_LMS_FFE_PST_EN_LANE_2_0);
    reg_RX_DTL_LMS_GAIN_EN_LANE = reg_CDS_DTL_COARSE_LMS_GAIN_EN_LANE;
    reg_RX_DTL_LMS_BLW_EN_LANE  = reg_CDS_DTL_COARSE_LMS_BLW_EN_LANE;
    //Set DTL FFE Gain BLW mu
    reg_RX_DTL_LMS_FFE_PRE1_MU_LANE_3_0 = reg_CDS_DTL_COARSE_LMS_FFE_PRE1_MU_LANE_3_0;
    reg_RX_DTL_LMS_FFE_PST1_MU_LANE_3_0 = reg_CDS_DTL_COARSE_LMS_FFE_PST1_MU_LANE_3_0;
    reg_RX_DTL_LMS_FFE_MU_LANE_3_0      = reg_CDS_DTL_COARSE_LMS_FFE_ALL_MU_LANE_3_0;
    reg_RX_DTL_LMS_GAIN_MU_LANE_3_0     = reg_CDS_DTL_COARSE_LMS_GAIN_MU_LANE_3_0;
    reg_RX_DTL_LMS_BLW_MU_LANE_3_0      = reg_CDS_DTL_COARSE_LMS_BLW_MU_LANE_3_0;
    //Enable DTL Top LMS
    reg_RX_DTL_LMS_TOP_EN_LANE = 1;
    wait_converge (reg_CDS_DTL_COARSE_TIMER_LANE_15_0);
    reg_RX_DTL_LMS_TOP_EN_LANE = 0;
    }


    if(cds_en & dtl_fine_en)
    {
    CDS_ST_JUMP(DTL_FINE);

    //Set DTL PLL loop parameters 
    reg_RX_DTL_LPF_FRZ_LANE = 1; //freeze before change KP/KI, will be fixed in 5nm
    reg_RX_DTL_LPF_KP_EN_LANE = 0;
    reg_RX_DTL_LPF_KI_EN_LANE = 0;
    reg_RX_DTL_LPF_KP_FRAC_LANE_2_0  = reg_CDS_DTL_FINE_LPF_KP_FRAC_LANE_2_0;
    reg_RX_DTL_LPF_KP_SHIFT_LANE_3_0 = reg_CDS_DTL_FINE_LPF_KP_SHIFT_LANE_3_0;
    reg_RX_DTL_LPF_KI_FRAC_LANE      = reg_CDS_DTL_FINE_LPF_KI_FRAC_LANE;
    reg_RX_DTL_LPF_KI_SHIFT_LANE_4_0 = reg_CDS_DTL_FINE_LPF_KI_SHIFT_LANE_4_0;
    reg_RX_DTL_LPF_KP_EN_LANE = 1;
    reg_RX_DTL_LPF_KI_EN_LANE = 1;
    //Turn on DTL PLL
    reg_RX_DTL_LPF_FRZ_LANE = 0;
    reg_RX_DTL_FLOOP_FRZ_LANE = 0;
    reg_DTL_RST_SYNC_LANE = 0;

    //Set DTL Blind Eql
    reg_RX_DTL_BLIND_EQL_EN_LANE = 0;
    //Set DTL FFE and Gain LMS Enable
    drv_set_dtl_lms_ffe_pre_en (reg_CDS_DTL_FINE_LMS_FFE_PRE_EN_LANE_2_0);
    drv_set_dtl_lms_ffe_pst_en (reg_CDS_DTL_FINE_LMS_FFE_PST_EN_LANE_2_0);
    reg_RX_DTL_LMS_GAIN_EN_LANE = reg_CDS_DTL_FINE_LMS_GAIN_EN_LANE;
    reg_RX_DTL_LMS_BLW_EN_LANE  = reg_CDS_DTL_FINE_LMS_BLW_EN_LANE;
    //Set DTL FFE Gain BLW mu
    reg_RX_DTL_LMS_FFE_PRE1_MU_LANE_3_0 = reg_CDS_DTL_FINE_LMS_FFE_PRE1_MU_LANE_3_0;
    reg_RX_DTL_LMS_FFE_PST1_MU_LANE_3_0 = reg_CDS_DTL_FINE_LMS_FFE_PST1_MU_LANE_3_0;
    reg_RX_DTL_LMS_FFE_MU_LANE_3_0      = reg_CDS_DTL_FINE_LMS_FFE_ALL_MU_LANE_3_0;
    reg_RX_DTL_LMS_GAIN_MU_LANE_3_0     = reg_CDS_DTL_FINE_LMS_GAIN_MU_LANE_3_0;
    reg_RX_DTL_LMS_BLW_MU_LANE_3_0      = reg_CDS_DTL_FINE_LMS_BLW_MU_LANE_3_0;
    //Enable DTL Top LMS
    reg_RX_DTL_LMS_TOP_EN_LANE = 1;
    wait_converge (reg_CDS_DTL_FINE_TIMER_LANE_15_0);
    reg_RX_DTL_LMS_TOP_EN_LANE = 0;
    }


    if(cds_en & dtl_accu_en)
    {
    CDS_ST_JUMP(DTL_ACCU);

    //Set DTL PLL loop parameters 
    reg_RX_DTL_LPF_FRZ_LANE = 1; //freeze before change KP/KI, will be fixed in 5nm
    reg_RX_DTL_LPF_KP_EN_LANE = 0;
    reg_RX_DTL_LPF_KI_EN_LANE = 0;
    reg_RX_DTL_LPF_KP_FRAC_LANE_2_0  = reg_CDS_DTL_ACCU_LPF_KP_FRAC_LANE_2_0;
    reg_RX_DTL_LPF_KP_SHIFT_LANE_3_0 = reg_CDS_DTL_ACCU_LPF_KP_SHIFT_LANE_3_0;
    reg_RX_DTL_LPF_KI_FRAC_LANE      = reg_CDS_DTL_ACCU_LPF_KI_FRAC_LANE;
    reg_RX_DTL_LPF_KI_SHIFT_LANE_4_0 = reg_CDS_DTL_ACCU_LPF_KI_SHIFT_LANE_4_0;
    reg_RX_DTL_LPF_KP_EN_LANE = 1;
    reg_RX_DTL_LPF_KI_EN_LANE = 1;
    //Turn on DTL PLL
    reg_RX_DTL_LPF_FRZ_LANE = 0;
    reg_RX_DTL_FLOOP_FRZ_LANE = 0;
    reg_DTL_RST_SYNC_LANE = 0;

    //Set DTL Blind Eql
    reg_RX_DTL_BLIND_EQL_EN_LANE = 0;
    //Set DTL FFE and Gain LMS Enable
    drv_set_dtl_lms_ffe_pre_en (reg_CDS_DTL_ACCU_LMS_FFE_PRE_EN_LANE_2_0);
    drv_set_dtl_lms_ffe_pst_en (reg_CDS_DTL_ACCU_LMS_FFE_PST_EN_LANE_2_0);
    reg_RX_DTL_LMS_GAIN_EN_LANE = reg_CDS_DTL_ACCU_LMS_GAIN_EN_LANE;
    reg_RX_DTL_LMS_BLW_EN_LANE  = reg_CDS_DTL_ACCU_LMS_BLW_EN_LANE;
    //Set DTL FFE Gain BLW mu
    reg_RX_DTL_LMS_FFE_PRE1_MU_LANE_3_0 = reg_CDS_DTL_ACCU_LMS_FFE_PRE1_MU_LANE_3_0;
    reg_RX_DTL_LMS_FFE_PST1_MU_LANE_3_0 = reg_CDS_DTL_ACCU_LMS_FFE_PST1_MU_LANE_3_0;
    reg_RX_DTL_LMS_FFE_MU_LANE_3_0      = reg_CDS_DTL_ACCU_LMS_FFE_ALL_MU_LANE_3_0;
    reg_RX_DTL_LMS_GAIN_MU_LANE_3_0     = reg_CDS_DTL_ACCU_LMS_GAIN_MU_LANE_3_0;
    reg_RX_DTL_LMS_BLW_MU_LANE_3_0      = reg_CDS_DTL_ACCU_LMS_BLW_MU_LANE_3_0;
    //Enable DTL Top LMS
    reg_RX_DTL_LMS_TOP_EN_LANE = 1;
    wait_converge (reg_CDS_DTL_ACCU_TIMER_LANE_15_0);
    reg_RX_DTL_LMS_TOP_EN_LANE = 0;
    }


    if(cds_en & dp_load_en)
    {
    CDS_ST_JUMP(DP_LOAD);

    //drv_set_dp_lms_ld(1);
    drv_set_dp_lms_ext(reg_CDS_DP_LMS_PRESET_LANE_2_0);
    }


    if(cds_en & dp_blind_en)
    {
    CDS_ST_JUMP(DP_BLIND);

    //Turn on Blind LMS
    reg_RX_DP_BLIND_ERROR_EN_LANE = 1;
    //Set DP FFE Gain BLW DFE Enable
    drv_set_dp_lms_ffe_pre_en (reg_CDS_DP_BLIND_LMS_FFE_PRE_EN_LANE_7_0);
    drv_set_dp_lms_ffe_pst_en (reg_CDS_DP_BLIND_LMS_FFE_PST_EN_LANE_19_0_b0,
                               reg_CDS_DP_BLIND_LMS_FFE_PST_EN_LANE_19_0_b1,
                               reg_CDS_DP_BLIND_LMS_FFE_PST_EN_LANE_19_0_b2);
    drv_set_dp_lms_ffe_flt_en (reg_CDS_DP_BLIND_LMS_FFE_FLT_EN_LANE_7_0);
    reg_RX_DP_LMS_GAIN_EN_LANE = reg_CDS_DP_BLIND_LMS_GAIN_EN_LANE;
    reg_RX_DP_LMS_BLW_EN_LANE  = reg_CDS_DP_BLIND_LMS_BLW_EN_LANE;
    reg_RX_DP_LMS_DFE_EN_LANE  = reg_CDS_DP_BLIND_LMS_DFE_EN_LANE;
    //Set DP FFE Gain BLW DFE mu
    reg_RX_DP_LMS_FFE_PRE1_MU_LANE_3_0    = reg_CDS_DP_BLIND_LMS_FFE_PRE1_MU_LANE_3_0;
    reg_RX_DP_LMS_FFE_PRE_ALL_MU_LANE_3_0 = reg_CDS_DP_BLIND_LMS_FFE_PRE_ALL_MU_LANE_3_0;
    reg_RX_DP_LMS_FFE_PST1_MU_LANE_3_0    = reg_CDS_DP_BLIND_LMS_FFE_PST1_MU_LANE_3_0;
    reg_RX_DP_LMS_FFE_PST_ALL_MU_LANE_3_0 = reg_CDS_DP_BLIND_LMS_FFE_PST_ALL_MU_LANE_3_0;
    reg_RX_DP_LMS_FFE_FLT_MU_LANE_3_0     = reg_CDS_DP_BLIND_LMS_FFE_FLT_MU_LANE_3_0;
    reg_RX_DP_LMS_GAIN_MU_LANE_3_0        = reg_CDS_DP_BLIND_LMS_GAIN_MU_LANE_3_0;
    reg_RX_DP_LMS_BLW_MU_LANE_3_0         = reg_CDS_DP_BLIND_LMS_BLW_MU_LANE_3_0;
    reg_RX_DP_LMS_DFE_MU_LANE_3_0         = reg_CDS_DP_BLIND_LMS_DFE_MU_LANE_3_0;
    //Set DP initial Gain
    reg_RX_DP_LMS_GAIN_EXT_LANE_10_4 = ((reg_CDS_DP_BLIND_LMS_GAIN_LANE_10_0_b0 >> 4) & 0xf) |
                                        (reg_CDS_DP_BLIND_LMS_GAIN_LANE_10_0_b1 << 4);
    reg_RX_DP_LMS_GAIN_EXT_LANE_3_0  = reg_CDS_DP_BLIND_LMS_GAIN_LANE_10_0_b0 & 0xf;
    drv_set_dp_lms_ld(0);
    reg_RX_DP_LMS_GAIN_LD_LANE = 1;
    reg_RX_DP_LMS_TOP_LD_LANE = 1;
    reg_RX_DP_LMS_TOP_LD_LANE = 0;
    drv_set_dp_lms_ld(1);
    //Enable DP TOP LMS
    reg_RX_DP_LMS_TOP_EN_LANE = 1;
    wait_converge (reg_CDS_DP_BLIND_TIMER_LANE_15_0);
    reg_RX_DP_LMS_TOP_EN_LANE = 0;
    }


    if(cds_en & dp_coarse_en)
    {
    CDS_ST_JUMP(DP_COARSE);

    //Turn on Blind LMS
    reg_RX_DP_BLIND_ERROR_EN_LANE = 0;
    //Set DP FFE Gain BLW DFE Enable
    drv_set_dp_lms_ffe_pre_en (reg_CDS_DP_COARSE_LMS_FFE_PRE_EN_LANE_7_0);
    drv_set_dp_lms_ffe_pst_en (reg_CDS_DP_COARSE_LMS_FFE_PST_EN_LANE_19_0_b0,
                               reg_CDS_DP_COARSE_LMS_FFE_PST_EN_LANE_19_0_b1,
                               reg_CDS_DP_COARSE_LMS_FFE_PST_EN_LANE_19_0_b2);
    drv_set_dp_lms_ffe_flt_en (reg_CDS_DP_COARSE_LMS_FFE_FLT_EN_LANE_7_0);
    reg_RX_DP_LMS_GAIN_EN_LANE = reg_CDS_DP_COARSE_LMS_GAIN_EN_LANE;
    reg_RX_DP_LMS_BLW_EN_LANE  = reg_CDS_DP_COARSE_LMS_BLW_EN_LANE;
    reg_RX_DP_LMS_DFE_EN_LANE  = reg_CDS_DP_COARSE_LMS_DFE_EN_LANE;
    //Set DP FFE Gain BLW DFE mu
    reg_RX_DP_LMS_FFE_PRE1_MU_LANE_3_0    = reg_CDS_DP_COARSE_LMS_FFE_PRE1_MU_LANE_3_0;
    reg_RX_DP_LMS_FFE_PRE_ALL_MU_LANE_3_0 = reg_CDS_DP_COARSE_LMS_FFE_PRE_ALL_MU_LANE_3_0;
    reg_RX_DP_LMS_FFE_PST1_MU_LANE_3_0    = reg_CDS_DP_COARSE_LMS_FFE_PST1_MU_LANE_3_0;
    reg_RX_DP_LMS_FFE_PST_ALL_MU_LANE_3_0 = reg_CDS_DP_COARSE_LMS_FFE_PST_ALL_MU_LANE_3_0;
    reg_RX_DP_LMS_FFE_FLT_MU_LANE_3_0     = reg_CDS_DP_COARSE_LMS_FFE_FLT_MU_LANE_3_0;
    reg_RX_DP_LMS_GAIN_MU_LANE_3_0        = reg_CDS_DP_COARSE_LMS_GAIN_MU_LANE_3_0;
    reg_RX_DP_LMS_BLW_MU_LANE_3_0         = reg_CDS_DP_COARSE_LMS_BLW_MU_LANE_3_0;
    reg_RX_DP_LMS_DFE_MU_LANE_3_0         = reg_CDS_DP_COARSE_LMS_DFE_MU_LANE_3_0;
    //Enable DP TOP LMS
    reg_RX_DP_LMS_TOP_EN_LANE = 1;
    wait_converge (reg_CDS_DP_COARSE_TIMER_LANE_15_0);
    reg_RX_DP_LMS_TOP_EN_LANE = 0;
    }


    if(cds_en & dp_fine_en)
    {
    CDS_ST_JUMP(DP_FINE);

    //Turn on Blind LMS
    reg_RX_DP_BLIND_ERROR_EN_LANE = 0;
    //Set DP FFE Gain BLW DFE Enable
    drv_set_dp_lms_ffe_pre_en (reg_CDS_DP_FINE_LMS_FFE_PRE_EN_LANE_7_0);
    drv_set_dp_lms_ffe_pst_en (reg_CDS_DP_FINE_LMS_FFE_PST_EN_LANE_19_0_b0,
                               reg_CDS_DP_FINE_LMS_FFE_PST_EN_LANE_19_0_b1,
                               reg_CDS_DP_FINE_LMS_FFE_PST_EN_LANE_19_0_b2);
    drv_set_dp_lms_ffe_flt_en (reg_CDS_DP_FINE_LMS_FFE_FLT_EN_LANE_7_0);
    reg_RX_DP_LMS_GAIN_EN_LANE = reg_CDS_DP_FINE_LMS_GAIN_EN_LANE;
    reg_RX_DP_LMS_BLW_EN_LANE  = reg_CDS_DP_FINE_LMS_BLW_EN_LANE;
    reg_RX_DP_LMS_DFE_EN_LANE  = reg_CDS_DP_FINE_LMS_DFE_EN_LANE;
    //Set DP FFE Gain BLW DFE mu
    reg_RX_DP_LMS_FFE_PRE1_MU_LANE_3_0    = reg_CDS_DP_FINE_LMS_FFE_PRE1_MU_LANE_3_0;
    reg_RX_DP_LMS_FFE_PRE_ALL_MU_LANE_3_0 = reg_CDS_DP_FINE_LMS_FFE_PRE_ALL_MU_LANE_3_0;
    reg_RX_DP_LMS_FFE_PST1_MU_LANE_3_0    = reg_CDS_DP_FINE_LMS_FFE_PST1_MU_LANE_3_0;
    reg_RX_DP_LMS_FFE_PST_ALL_MU_LANE_3_0 = reg_CDS_DP_FINE_LMS_FFE_PST_ALL_MU_LANE_3_0;
    reg_RX_DP_LMS_FFE_FLT_MU_LANE_3_0     = reg_CDS_DP_FINE_LMS_FFE_FLT_MU_LANE_3_0;
    reg_RX_DP_LMS_GAIN_MU_LANE_3_0        = reg_CDS_DP_FINE_LMS_GAIN_MU_LANE_3_0;
    reg_RX_DP_LMS_BLW_MU_LANE_3_0         = reg_CDS_DP_FINE_LMS_BLW_MU_LANE_3_0;
    reg_RX_DP_LMS_DFE_MU_LANE_3_0         = reg_CDS_DP_FINE_LMS_DFE_MU_LANE_3_0;
    //Enable DP TOP LMS
    reg_RX_DP_LMS_TOP_EN_LANE = 1;
    wait_converge (reg_CDS_DP_FINE_TIMER_LANE_15_0);
    reg_RX_DP_LMS_TOP_EN_LANE = 0;
    }


    if(cds_en & dp_accu_en)
    {
    CDS_ST_JUMP(DP_ACCU);

    //Turn on Blind LMS
    reg_RX_DP_BLIND_ERROR_EN_LANE = 0;
    //Set DP FFE Gain BLW DFE Enable
    drv_set_dp_lms_ffe_pre_en (reg_CDS_DP_ACCU_LMS_FFE_PRE_EN_LANE_7_0);
    drv_set_dp_lms_ffe_pst_en (reg_CDS_DP_ACCU_LMS_FFE_PST_EN_LANE_19_0_b0,
                               reg_CDS_DP_ACCU_LMS_FFE_PST_EN_LANE_19_0_b1,
                               reg_CDS_DP_ACCU_LMS_FFE_PST_EN_LANE_19_0_b2);
    drv_set_dp_lms_ffe_flt_en (reg_CDS_DP_ACCU_LMS_FFE_FLT_EN_LANE_7_0);
    reg_RX_DP_LMS_GAIN_EN_LANE = reg_CDS_DP_ACCU_LMS_GAIN_EN_LANE;
    reg_RX_DP_LMS_BLW_EN_LANE  = reg_CDS_DP_ACCU_LMS_BLW_EN_LANE;
    reg_RX_DP_LMS_DFE_EN_LANE  = reg_CDS_DP_ACCU_LMS_DFE_EN_LANE;
    //Set DP FFE Gain BLW DFE mu
    reg_RX_DP_LMS_FFE_PRE1_MU_LANE_3_0    = reg_CDS_DP_ACCU_LMS_FFE_PRE1_MU_LANE_3_0;
    reg_RX_DP_LMS_FFE_PRE_ALL_MU_LANE_3_0 = reg_CDS_DP_ACCU_LMS_FFE_PRE_ALL_MU_LANE_3_0;
    reg_RX_DP_LMS_FFE_PST1_MU_LANE_3_0    = reg_CDS_DP_ACCU_LMS_FFE_PST1_MU_LANE_3_0;
    reg_RX_DP_LMS_FFE_PST_ALL_MU_LANE_3_0 = reg_CDS_DP_ACCU_LMS_FFE_PST_ALL_MU_LANE_3_0;
    reg_RX_DP_LMS_FFE_FLT_MU_LANE_3_0     = reg_CDS_DP_ACCU_LMS_FFE_FLT_MU_LANE_3_0;
    reg_RX_DP_LMS_GAIN_MU_LANE_3_0        = reg_CDS_DP_ACCU_LMS_GAIN_MU_LANE_3_0;
    reg_RX_DP_LMS_BLW_MU_LANE_3_0         = reg_CDS_DP_ACCU_LMS_BLW_MU_LANE_3_0;
    reg_RX_DP_LMS_DFE_MU_LANE_3_0         = reg_CDS_DP_ACCU_LMS_DFE_MU_LANE_3_0;
    //Enable DP TOP LMS
    reg_RX_DP_LMS_TOP_EN_LANE = 1;
    wait_converge (reg_CDS_DP_ACCU_TIMER_LANE_15_0);
    reg_RX_DP_LMS_TOP_EN_LANE = 0;
    }


    if(cds_en & save_en)
    {
    CDS_ST_JUMP(SAVE);

    reg_RX_EQ_RD_REQ_LANE = 1;
    reg_RX_EQ_RD_REQ_LANE = 0;

    drv_sav_dtl_lms();
    drv_sav_dp_lms();

    }


    CDS_ST_JUMP(DONE);

}


void drv_set_dp_lms_ffe_pre_en (uint8_t ffe_en) BANKING_CTRL
{

  #ifndef FAST_REG_RW
	reg_RX_DP_LMS_FFE_PRE1_EN_LANE = (ffe_en >> 0) & 0x1;
	reg_RX_DP_LMS_FFE_PRE2_EN_LANE = (ffe_en >> 1) & 0x1;
	reg_RX_DP_LMS_FFE_PRE3_EN_LANE = (ffe_en >> 2) & 0x1;
	reg_RX_DP_LMS_FFE_PRE4_EN_LANE = (ffe_en >> 3) & 0x1;
	reg_RX_DP_LMS_FFE_PRE5_EN_LANE = (ffe_en >> 4) & 0x1;
	reg_RX_DP_LMS_FFE_PRE6_EN_LANE = (ffe_en >> 5) & 0x1;
	reg_RX_DP_LMS_FFE_PRE7_EN_LANE = (ffe_en >> 6) & 0x1;
	reg_RX_DP_LMS_FFE_PRE8_EN_LANE = (ffe_en >> 7) & 0x1;
  #else
	RX_DP_LMS_FFE_EN.BT.B3 = ffe_en;
  #endif

}

void drv_set_dp_lms_ffe_pst_en (uint8_t ffe_en_b0, uint8_t ffe_en_b1, uint8_t ffe_en_b2) BANKING_CTRL
{

  #ifndef FAST_REG_RW
	reg_RX_DP_LMS_FFE_PST1_EN_LANE  = (ffe_en_b0 >> 0) & 0x1;
	reg_RX_DP_LMS_FFE_PST2_EN_LANE  = (ffe_en_b0 >> 1) & 0x1;
	reg_RX_DP_LMS_FFE_PST3_EN_LANE  = (ffe_en_b0 >> 2) & 0x1;
	reg_RX_DP_LMS_FFE_PST4_EN_LANE  = (ffe_en_b0 >> 3) & 0x1;
	reg_RX_DP_LMS_FFE_PST5_EN_LANE  = (ffe_en_b0 >> 4) & 0x1;
	reg_RX_DP_LMS_FFE_PST6_EN_LANE  = (ffe_en_b0 >> 5) & 0x1;
	reg_RX_DP_LMS_FFE_PST7_EN_LANE  = (ffe_en_b0 >> 6) & 0x1;
	reg_RX_DP_LMS_FFE_PST8_EN_LANE  = (ffe_en_b0 >> 7) & 0x1;
	reg_RX_DP_LMS_FFE_PST9_EN_LANE  = (ffe_en_b1 >> 0) & 0x1;
	reg_RX_DP_LMS_FFE_PST10_EN_LANE = (ffe_en_b1 >> 1) & 0x1;
	reg_RX_DP_LMS_FFE_PST11_EN_LANE = (ffe_en_b1 >> 2) & 0x1;
	reg_RX_DP_LMS_FFE_PST12_EN_LANE = (ffe_en_b1 >> 3) & 0x1;
	reg_RX_DP_LMS_FFE_PST13_EN_LANE = (ffe_en_b1 >> 4) & 0x1;
	reg_RX_DP_LMS_FFE_PST14_EN_LANE = (ffe_en_b1 >> 5) & 0x1;
	reg_RX_DP_LMS_FFE_PST15_EN_LANE = (ffe_en_b1 >> 6) & 0x1;
	reg_RX_DP_LMS_FFE_PST16_EN_LANE = (ffe_en_b1 >> 7) & 0x1;
	reg_RX_DP_LMS_FFE_PST17_EN_LANE = (ffe_en_b2 >> 0) & 0x1;
	reg_RX_DP_LMS_FFE_PST18_EN_LANE = (ffe_en_b2 >> 1) & 0x1;
	reg_RX_DP_LMS_FFE_PST19_EN_LANE = (ffe_en_b2 >> 2) & 0x1;
	reg_RX_DP_LMS_FFE_PST20_EN_LANE = (ffe_en_b2 >> 3) & 0x1;
  #else
	RX_DP_LMS_FFE_EN.BT.B0 = (ffe_en_b0 << 4);
	RX_DP_LMS_FFE_EN.BT.B1 = (ffe_en_b1 << 4) | (ffe_en_b0 >> 4);
	RX_DP_LMS_FFE_EN.BT.B2 = (ffe_en_b2 << 4) | (ffe_en_b1 >> 4);
  #endif

}

void drv_set_dp_lms_ffe_flt_en (uint8_t ffe_en) BANKING_CTRL
{

  #ifndef FAST_REG_RW
	reg_RX_DP_LMS_FFE_FLT1_EN_LANE = (ffe_en >> 0) & 0x1;
	reg_RX_DP_LMS_FFE_FLT2_EN_LANE = (ffe_en >> 1) & 0x1;
	reg_RX_DP_LMS_FFE_FLT3_EN_LANE = (ffe_en >> 2) & 0x1;
	reg_RX_DP_LMS_FFE_FLT4_EN_LANE = (ffe_en >> 3) & 0x1;
	reg_RX_DP_LMS_FFE_FLT5_EN_LANE = (ffe_en >> 4) & 0x1;
	reg_RX_DP_LMS_FFE_FLT6_EN_LANE = (ffe_en >> 5) & 0x1;
	reg_RX_DP_LMS_FFE_FLT7_EN_LANE = (ffe_en >> 6) & 0x1;
	reg_RX_DP_LMS_FFE_FLT8_EN_LANE = (ffe_en >> 7) & 0x1;
  #else
	RX_DP_LMS_FFE_REG2.BT.B2 = ffe_en;
  #endif

}

void drv_set_dtl_lms_ffe_pre_en (uint8_t ffe_en) BANKING_CTRL
{

	reg_RX_DTL_LMS_FFE_PRE1_EN_LANE = (ffe_en >> 0) & 0x1;
	reg_RX_DTL_LMS_FFE_PRE2_EN_LANE = (ffe_en >> 1) & 0x1;
	reg_RX_DTL_LMS_FFE_PRE3_EN_LANE = (ffe_en >> 2) & 0x1;

}

void drv_set_dtl_lms_ffe_pst_en (uint8_t ffe_en) BANKING_CTRL
{

	reg_RX_DTL_LMS_FFE_PST1_EN_LANE = (ffe_en >> 0) & 0x1;
	reg_RX_DTL_LMS_FFE_PST2_EN_LANE = (ffe_en >> 1) & 0x1;
	reg_RX_DTL_LMS_FFE_PST3_EN_LANE = (ffe_en >> 2) & 0x1;

}

void drv_set_dp_lms_ld (bool set) BANKING_CTRL
{

  #ifndef FAST_REG_RW
	reg_RX_DP_LMS_FFE_PST1_LD_LANE = set;
	reg_RX_DP_LMS_FFE_PST2_LD_LANE = set;
	reg_RX_DP_LMS_FFE_PST3_LD_LANE = set;
	reg_RX_DP_LMS_FFE_PST4_LD_LANE = set;
	reg_RX_DP_LMS_FFE_PST5_LD_LANE = set;
	reg_RX_DP_LMS_FFE_PST6_LD_LANE = set;
	reg_RX_DP_LMS_FFE_PST7_LD_LANE = set;
	reg_RX_DP_LMS_FFE_PST8_LD_LANE = set;
	reg_RX_DP_LMS_FFE_PST9_LD_LANE = set;
	reg_RX_DP_LMS_FFE_PST10_LD_LANE = set;
	reg_RX_DP_LMS_FFE_PST11_LD_LANE = set;
	reg_RX_DP_LMS_FFE_PST12_LD_LANE = set;
	reg_RX_DP_LMS_FFE_PST13_LD_LANE = set;
	reg_RX_DP_LMS_FFE_PST14_LD_LANE = set;
	reg_RX_DP_LMS_FFE_PST15_LD_LANE = set;
	reg_RX_DP_LMS_FFE_PST16_LD_LANE = set;
	reg_RX_DP_LMS_FFE_PST17_LD_LANE = set;
	reg_RX_DP_LMS_FFE_PST18_LD_LANE = set;
	reg_RX_DP_LMS_FFE_PST19_LD_LANE = set;
	reg_RX_DP_LMS_FFE_PST20_LD_LANE = set;
	reg_RX_DP_LMS_FFE_PRE1_LD_LANE = set;
	reg_RX_DP_LMS_FFE_PRE2_LD_LANE = set;
	reg_RX_DP_LMS_FFE_PRE3_LD_LANE = set;
	reg_RX_DP_LMS_FFE_PRE4_LD_LANE = set;
	reg_RX_DP_LMS_FFE_PRE5_LD_LANE = set;
	reg_RX_DP_LMS_FFE_PRE6_LD_LANE = set;
	reg_RX_DP_LMS_FFE_PRE7_LD_LANE = set;
	reg_RX_DP_LMS_FFE_PRE8_LD_LANE = set;
	reg_RX_DP_LMS_FFE_FLT1_LD_LANE = set;
	reg_RX_DP_LMS_FFE_FLT2_LD_LANE = set;
	reg_RX_DP_LMS_FFE_FLT3_LD_LANE = set;
	reg_RX_DP_LMS_FFE_FLT4_LD_LANE = set;
	reg_RX_DP_LMS_FFE_FLT5_LD_LANE = set;
	reg_RX_DP_LMS_FFE_FLT6_LD_LANE = set;
	reg_RX_DP_LMS_FFE_FLT7_LD_LANE = set;
	reg_RX_DP_LMS_FFE_FLT8_LD_LANE = set;
	reg_RX_DP_LMS_GAIN_LD_LANE = set;
	reg_RX_DP_LMS_BLW_LD_LANE = set;
	reg_RX_DP_LMS_DFE_LD_LANE = set;
  #else
	RX_DP_LMS_FFE_LD.BT.B0 = set ? 0xff : 0x0;
	RX_DP_LMS_FFE_LD.BT.B1 = set ? 0xff : 0x0;
	RX_DP_LMS_FFE_LD.BT.B2 = set ? 0xff : 0x0;
	RX_DP_LMS_FFE_LD.BT.B3 = set ? 0xff : 0x0;
	RX_DP_LMS_FFE_REG2.BT.B1 = set ? 0xff : 0x0;
  #endif

}

void drv_set_dtl_lms_ld (bool set) BANKING_CTRL
{

  #ifndef FAST_REG_RW
	reg_RX_DTL_LMS_GAIN_LD_LANE = set;
	reg_RX_DTL_LMS_BLW_LD_LANE = set;
	reg_RX_DTL_LMS_FFE_PST1_LD_LANE = set;
	reg_RX_DTL_LMS_FFE_PST2_LD_LANE = set;
	reg_RX_DTL_LMS_FFE_PST3_LD_LANE = set;
	reg_RX_DTL_LMS_FFE_PRE1_LD_LANE = set;
	reg_RX_DTL_LMS_FFE_PRE2_LD_LANE = set;
	reg_RX_DTL_LMS_FFE_PRE3_LD_LANE = set;
  #else
	RX_DTL_LMS_FFE_REG0.BT.B1 = set ? 0xff : 0x0;
  #endif

}

void wait_converge (uint16_t timer)  BANKING_CTRL//unit is 5us
{
	uint16_t tdelay;

	if(timer <= 6) //30us
	{
	    delay(timer*50); //unit is 0.1us
	} else {
	    //timeout_start(timer*5); //unit is 1us
	    //while(!timeout);
	    tdelay = timer;
	    while (tdelay >= 5) {
		delay(250); //25uSec
		tdelay -= 5;
	    }
	    if (tdelay > 0)
		delay(tdelay*50);
	}

}


void drv_ph_scn_wait (uint16_t freq_ofst, uint16_t loop_num)  BANKING_CTRL
{

    uint16_t i;
    uint16_t freq_ofst_rev;

    freq_ofst_rev = (freq_ofst == 0x8000) ? 0x7fff : (int16_t)((int16_t)freq_ofst * -1);

    for(i = 0; i < loop_num; i ++)
    {
      reg_RX_DTL_FREQ_OFST_LANE_15_0 = freq_ofst;
      reg_RX_DTL_FREQ_OFST_VALID_LANE = 1;
      reg_RX_DTL_FREQ_OFST_VALID_LANE = 0;
      wait_converge(1);
      reg_RX_DTL_FREQ_OFST_LANE_15_0 = freq_ofst_rev;
      reg_RX_DTL_FREQ_OFST_VALID_LANE = 1;
      reg_RX_DTL_FREQ_OFST_VALID_LANE = 0;
      wait_converge(1);
    }

}


void drv_ph_scn_en (uint16_t freq_ofst) BANKING_CTRL
{

    //Freeze DTL PLL
    reg_RX_DTL_LPF_FRZ_LANE = 1;
    reg_RX_DTL_FLOOP_FRZ_LANE = 1;
    reg_DTL_RST_SYNC_LANE = 1;
    reg_DTL_RST_LANE = 0;
    //Set ppm to sweep for DTL FFE
    reg_RX_DTL_FREQ_OFST_LANE_15_0 = freq_ofst;
    reg_RX_DTL_FREQ_OFST_VALID_LANE = 1;
    reg_RX_DTL_FREQ_OFST_VALID_LANE = 0;

}

void drv_ph_scn_dis (void) BANKING_CTRL
{

    reg_RX_DTL_FREQ_OFST_LANE_15_0 = 0x0;
    reg_RX_DTL_FREQ_OFST_VALID_LANE = 1;
    reg_RX_DTL_FREQ_OFST_VALID_LANE = 0;

}

void drv_set_dtl_lms_ext (bool set) BANKING_CTRL
{

  #ifndef FAST_REG_RW
	reg_RX_DTL_LMS_FFE_PRE1_EXT_LANE_5_0 = !set ? 0 : reg_CDS_DTL_LMS_FFE_PRE1_EXT_LANE_5_0;
	reg_RX_DTL_LMS_FFE_PRE2_EXT_LANE_4_0 = !set ? 0 : reg_CDS_DTL_LMS_FFE_PRE2_EXT_LANE_4_0;
	reg_RX_DTL_LMS_FFE_PRE3_EXT_LANE_3_0 = !set ? 0 : reg_CDS_DTL_LMS_FFE_PRE3_EXT_LANE_3_0;
	reg_RX_DTL_LMS_FFE_PST1_EXT_LANE_5_0 = !set ? 0 : reg_CDS_DTL_LMS_FFE_PST1_EXT_LANE_5_0;
	reg_RX_DTL_LMS_FFE_PST2_EXT_LANE_4_0 = !set ? 0 : reg_CDS_DTL_LMS_FFE_PST2_EXT_LANE_4_0;
	reg_RX_DTL_LMS_FFE_PST3_EXT_LANE_3_0 = !set ? 0 : reg_CDS_DTL_LMS_FFE_PST3_EXT_LANE_3_0;
	reg_RX_DTL_LMS_GAIN_EXT_LANE_9_4     = !set ? 0xC : (((reg_CDS_DTL_LMS_GAIN_EXT_LANE_9_0_b0 >> 4) & 0xf) |
                                                            (reg_CDS_DTL_LMS_GAIN_EXT_LANE_9_0_b1 << 4));
	reg_RX_DTL_LMS_GAIN_EXT_LANE_3_0     = !set ? 0 :   (reg_CDS_DTL_LMS_GAIN_EXT_LANE_9_0_b0 & 0xf);
	reg_RX_DTL_LMS_BLW_EXT_LANE_4_0      = !set ? 0 : reg_CDS_DTL_LMS_BLW_EXT_LANE_4_0;
  #else
	RX_DTL_LMS_FFE_REG1.BT.B3  = !set ? 0 : reg_CDS_DTL_LMS_FFE_PRE1_EXT_LANE_5_0;
	RX_DTL_LMS_FFE_REG2.BT.B3  = !set ? 0 : reg_CDS_DTL_LMS_FFE_PRE2_EXT_LANE_4_0;
	RX_DTL_LMS_FFE_REG3.BT.B3  = !set ? 0 : reg_CDS_DTL_LMS_FFE_PRE3_EXT_LANE_3_0;
	RX_DTL_LMS_FFE_REG4.BT.B3  = !set ? 0 : reg_CDS_DTL_LMS_FFE_PST1_EXT_LANE_5_0;
	RX_DTL_LMS_FFE_REG5.BT.B3  = !set ? 0 : reg_CDS_DTL_LMS_FFE_PST2_EXT_LANE_4_0;
	RX_DTL_LMS_FFE_REG6.BT.B3  = !set ? 0 : reg_CDS_DTL_LMS_FFE_PST3_EXT_LANE_3_0;
	RX_DTL_LMS_GAIN_REG0.BT.B3 = !set ? 0xC : (((reg_CDS_DTL_LMS_GAIN_EXT_LANE_9_0_b0 >> 4) & 0xf) |
	                                          (reg_CDS_DTL_LMS_GAIN_EXT_LANE_9_0_b1 << 4));
	RX_DTL_LMS_GAIN_REG0.BT.B2 = !set ? 0 :  ((reg_CDS_DTL_LMS_GAIN_EXT_LANE_9_0_b0 << 4) & 0xf);
	
	RX_DTL_LMS_BLW_REG0.BT.B2  = !set ? 0 : reg_CDS_DTL_LMS_BLW_EXT_LANE_4_0;
  #endif
	reg_RX_DTL_LMS_TOP_LD_LANE = 1;
	reg_RX_DTL_LMS_TOP_LD_LANE = 0;

}

void drv_sav_dtl_lms (void) BANKING_CTRL
{

  #ifndef FAST_REG_RW
	reg_CDS_DTL_LMS_FFE_PRE1_EXT_LANE_5_0 = reg_RX_DTL_LMS_FFE_PRE1_COE_LANE_5_0;
	reg_CDS_DTL_LMS_FFE_PRE2_EXT_LANE_4_0 = reg_RX_DTL_LMS_FFE_PRE2_COE_LANE_4_0;
	reg_CDS_DTL_LMS_FFE_PRE3_EXT_LANE_3_0 = reg_RX_DTL_LMS_FFE_PRE3_COE_LANE_3_0;
	reg_CDS_DTL_LMS_FFE_PST1_EXT_LANE_5_0 = reg_RX_DTL_LMS_FFE_PST1_COE_LANE_5_0;
	reg_CDS_DTL_LMS_FFE_PST2_EXT_LANE_4_0 = reg_RX_DTL_LMS_FFE_PST2_COE_LANE_4_0;
	reg_CDS_DTL_LMS_FFE_PST3_EXT_LANE_3_0 = reg_RX_DTL_LMS_FFE_PST3_COE_LANE_3_0;
	reg_CDS_DTL_LMS_GAIN_EXT_LANE_9_0_b0  = reg_RX_DTL_LMS_GAIN_COE_LANE_7_0;
	reg_CDS_DTL_LMS_GAIN_EXT_LANE_9_0_b1  = reg_RX_DTL_LMS_GAIN_COE_LANE_9_8;
	reg_CDS_DTL_LMS_BLW_EXT_LANE_4_0      = reg_RX_DTL_LMS_BLW_COE_LANE_4_0;
  #else
	CDS_DTL_LMS_REG0.BT.B3 = reg_RX_DTL_LMS_FFE_PRE1_COE_LANE_5_0;
	CDS_DTL_LMS_REG0.BT.B2 = reg_RX_DTL_LMS_FFE_PRE2_COE_LANE_4_0;
	CDS_DTL_LMS_REG0.BT.B1 = reg_RX_DTL_LMS_FFE_PST1_COE_LANE_5_0;
	CDS_DTL_LMS_REG0.BT.B0 = reg_RX_DTL_LMS_FFE_PST2_COE_LANE_4_0;
	CDS_DTL_LMS_REG1.BT.B3 = ((reg_RX_DTL_LMS_FFE_PRE3_COE_LANE_3_0 << 4) & 0xf0) | reg_RX_DTL_LMS_FFE_PST3_COE_LANE_3_0;
	CDS_DTL_LMS_REG1.BT.B1 = reg_RX_DTL_LMS_GAIN_COE_LANE_7_0;
	CDS_DTL_LMS_REG1.BT.B2 = reg_RX_DTL_LMS_GAIN_COE_LANE_9_8;
	CDS_DTL_LMS_REG1.BT.B0 = reg_RX_DTL_LMS_BLW_COE_LANE_4_0;
  #endif

}

__code uint16_t gain[7]    = {384, 196, 196, 196, 240, 196, 280}; //CLR LP LP LP HP HP HP
__code uint16_t ffe[7][12] = {{ 0,  0,  0, 0, 0, 0, 0, 0,0,0,0,0},  //CLR
                               {15, 58, 38,13, 0,12,12,14,0,0,0,0},  //LP { 15, 58, 38, 13, 0, -4,-4,-2, 0, 0, 0, 0}
                               {15, 48, 53,31,15, 6,15,12,5,6,7,7},  //LP { 15, 48, 53, 31, 15, 6,-1,-3,-3,-2,-1,-1}
                               {15, 50, 37, 4,18, 9, 3, 3,3,5,6,6},  //LP { 15, 50, 37,  4,-14,-7, 3, 3, 3,-3,-2,-2}
                               { 0, 72, 16,58,22, 9,13, 0,1,1,0,0},  //HP {  0,-56, 16, -6,-10,-7,-3, 0, 1, 1, 0, 0}
                               {15, 79, 77,31,18, 3, 2,13,3,6,1,0},  //HP { 15,-49,-51, 31,-14, 3, 2,-3, 3,-2, 1, 0}
                               {17,107,107,39,10, 0, 8,13,0,5,1,2}}; //HP {-15,-21,-21,-25, 10, 0, 8,-3, 0,-3, 1, 2}

void drv_set_dp_lms_ext (uint8_t set) BANKING_CTRL
{
  #ifndef FAST_REG_RW
	reg_RX_DP_LMS_FFE_PRE8_EXT_LANE_2_0  = (set == 7) ? reg_CDS_DP_LMS_FFE_PRE8_EXT_LANE_2_0  : 0;
	reg_RX_DP_LMS_FFE_PRE7_EXT_LANE_2_0  = (set == 7) ? reg_CDS_DP_LMS_FFE_PRE7_EXT_LANE_2_0  : 0;
	reg_RX_DP_LMS_FFE_PRE6_EXT_LANE_2_0  = (set == 7) ? reg_CDS_DP_LMS_FFE_PRE6_EXT_LANE_2_0  : 0;
	reg_RX_DP_LMS_FFE_PRE5_EXT_LANE_2_0  = (set == 7) ? reg_CDS_DP_LMS_FFE_PRE5_EXT_LANE_2_0  : 0;
	reg_RX_DP_LMS_FFE_PRE4_EXT_LANE_2_0  = (set == 7) ? reg_CDS_DP_LMS_FFE_PRE4_EXT_LANE_2_0  : 0;
	reg_RX_DP_LMS_FFE_PRE3_EXT_LANE_3_0  = (set == 7) ? reg_CDS_DP_LMS_FFE_PRE3_EXT_LANE_3_0  : 0;
	reg_RX_DP_LMS_FFE_PRE2_EXT_LANE_4_0  = (set == 7) ? reg_CDS_DP_LMS_FFE_PRE2_EXT_LANE_4_0  : ffe[set][ 0];
	reg_RX_DP_LMS_FFE_PRE1_EXT_LANE_6_0  = (set == 7) ? reg_CDS_DP_LMS_FFE_PRE1_EXT_LANE_6_0  : ffe[set][ 1];
	reg_RX_DP_LMS_FFE_PST1_EXT_LANE_6_0  = (set == 7) ? reg_CDS_DP_LMS_FFE_PST1_EXT_LANE_6_0  : ffe[set][ 2];
	reg_RX_DP_LMS_FFE_PST2_EXT_LANE_5_0  = (set == 7) ? reg_CDS_DP_LMS_FFE_PST2_EXT_LANE_5_0  : ffe[set][ 3];
	reg_RX_DP_LMS_FFE_PST3_EXT_LANE_4_0  = (set == 7) ? reg_CDS_DP_LMS_FFE_PST3_EXT_LANE_4_0  : ffe[set][ 4];
	reg_RX_DP_LMS_FFE_PST4_EXT_LANE_3_0  = (set == 7) ? reg_CDS_DP_LMS_FFE_PST4_EXT_LANE_3_0  : ffe[set][ 5];
	reg_RX_DP_LMS_FFE_PST5_EXT_LANE_3_0  = (set == 7) ? reg_CDS_DP_LMS_FFE_PST5_EXT_LANE_3_0  : ffe[set][ 6];
	reg_RX_DP_LMS_FFE_PST6_EXT_LANE_3_0  = (set == 7) ? reg_CDS_DP_LMS_FFE_PST6_EXT_LANE_3_0  : ffe[set][ 7];
	reg_RX_DP_LMS_FFE_PST7_EXT_LANE_2_0  = (set == 7) ? reg_CDS_DP_LMS_FFE_PST7_EXT_LANE_2_0  : ffe[set][ 8];
	reg_RX_DP_LMS_FFE_PST8_EXT_LANE_2_0  = (set == 7) ? reg_CDS_DP_LMS_FFE_PST8_EXT_LANE_2_0  : ffe[set][ 9];
	reg_RX_DP_LMS_FFE_PST9_EXT_LANE_2_0  = (set == 7) ? reg_CDS_DP_LMS_FFE_PST9_EXT_LANE_2_0  : ffe[set][10];
	reg_RX_DP_LMS_FFE_PST10_EXT_LANE_2_0 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST10_EXT_LANE_2_0 : ffe[set][11];
	reg_RX_DP_LMS_FFE_PST11_EXT_LANE_2_0 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST11_EXT_LANE_2_0 : 0;
	reg_RX_DP_LMS_FFE_PST12_EXT_LANE_2_0 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST12_EXT_LANE_2_0 : 0;
	reg_RX_DP_LMS_FFE_PST13_EXT_LANE_2_0 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST13_EXT_LANE_2_0 : 0;
	reg_RX_DP_LMS_FFE_PST14_EXT_LANE_2_0 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST14_EXT_LANE_2_0 : 0;
	reg_RX_DP_LMS_FFE_PST15_EXT_LANE_2_0 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST15_EXT_LANE_2_0 : 0;
	reg_RX_DP_LMS_FFE_PST16_EXT_LANE_2_0 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST16_EXT_LANE_2_0 : 0;
	reg_RX_DP_LMS_FFE_PST17_EXT_LANE_2_0 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST17_EXT_LANE_2_0 : 0;
	reg_RX_DP_LMS_FFE_PST18_EXT_LANE_2_0 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST18_EXT_LANE_2_0 : 0;
	reg_RX_DP_LMS_FFE_PST19_EXT_LANE_2_0 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST19_EXT_LANE_2_0 : 0;
	reg_RX_DP_LMS_FFE_PST20_EXT_LANE_2_0 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST20_EXT_LANE_2_0 : 0;
	reg_RX_DP_LMS_FFE_FLT1_EXT_LANE_2_0  = (set == 7) ? reg_CDS_DP_LMS_FFE_FLT1_EXT_LANE_2_0  : 0;
	reg_RX_DP_LMS_FFE_FLT2_EXT_LANE_2_0  = (set == 7) ? reg_CDS_DP_LMS_FFE_FLT2_EXT_LANE_2_0  : 0;
	reg_RX_DP_LMS_FFE_FLT3_EXT_LANE_2_0  = (set == 7) ? reg_CDS_DP_LMS_FFE_FLT3_EXT_LANE_2_0  : 0;
	reg_RX_DP_LMS_FFE_FLT4_EXT_LANE_2_0  = (set == 7) ? reg_CDS_DP_LMS_FFE_FLT4_EXT_LANE_2_0  : 0;
	reg_RX_DP_LMS_FFE_FLT5_EXT_LANE_2_0  = (set == 7) ? reg_CDS_DP_LMS_FFE_FLT5_EXT_LANE_2_0  : 0;
	reg_RX_DP_LMS_FFE_FLT6_EXT_LANE_2_0  = (set == 7) ? reg_CDS_DP_LMS_FFE_FLT6_EXT_LANE_2_0  : 0;
	reg_RX_DP_LMS_FFE_FLT7_EXT_LANE_2_0  = (set == 7) ? reg_CDS_DP_LMS_FFE_FLT7_EXT_LANE_2_0  : 0;
	reg_RX_DP_LMS_FFE_FLT8_EXT_LANE_2_0  = (set == 7) ? reg_CDS_DP_LMS_FFE_FLT8_EXT_LANE_2_0  : 0;
        reg_RX_DP_LMS_GAIN_EXT_LANE_10_4     = (set == 7) ? (((reg_CDS_DP_LMS_GAIN_EXT_LANE_10_0_b0 >> 4) & 0xf) |
                                                              (reg_CDS_DP_LMS_GAIN_EXT_LANE_10_0_b1 << 4)) : (gain[set] >> 4);
        reg_RX_DP_LMS_GAIN_EXT_LANE_3_0      = (set == 7) ?   (reg_CDS_DP_LMS_GAIN_EXT_LANE_10_0_b0 & 0xf) : (gain[set] & 0xf);
	reg_RX_DP_LMS_BLW_EXT_LANE_5_0       = (set == 7) ? reg_CDS_DP_LMS_BLW_EXT_LANE_5_0  : 0;
	reg_RX_DP_LMS_DFE_EXT_LANE_5_0       = (set == 7) ? reg_CDS_DP_LMS_DFE_EXT_LANE_5_0  : 0;
	reg_RX_DP_FFE_FLT_SEL_LANE_5_0       = (set == 7) ? reg_CDS_DP_FFE_FLT_SEL_EXT_LANE_5_0  : 0;
  #else
	RX_DP_LMS_FFE_REG10.BT.B3 = (set == 7) ? reg_CDS_DP_LMS_FFE_PRE8_EXT_LANE_2_0 : 0;
	RX_DP_LMS_FFE_REG9.BT.B3  = (set == 7) ? reg_CDS_DP_LMS_FFE_PRE7_EXT_LANE_2_0 : 0;
	RX_DP_LMS_FFE_REG8.BT.B3  = (set == 7) ? reg_CDS_DP_LMS_FFE_PRE6_EXT_LANE_2_0 : 0;
	RX_DP_LMS_FFE_REG7.BT.B3  = (set == 7) ? reg_CDS_DP_LMS_FFE_PRE5_EXT_LANE_2_0 : 0;
	RX_DP_LMS_FFE_REG6.BT.B3  = (set == 7) ? reg_CDS_DP_LMS_FFE_PRE4_EXT_LANE_2_0 : 0;
	RX_DP_LMS_FFE_REG5.BT.B3  = (set == 7) ? reg_CDS_DP_LMS_FFE_PRE3_EXT_LANE_3_0 : 0;
	RX_DP_LMS_FFE_REG4.BT.B3  = (set == 7) ? reg_CDS_DP_LMS_FFE_PRE2_EXT_LANE_4_0 : ffe[set][ 0];
	RX_DP_LMS_FFE_REG3.BT.B3  = (set == 7) ? reg_CDS_DP_LMS_FFE_PRE1_EXT_LANE_6_0 : ffe[set][ 1];
	RX_DP_LMS_FFE_REG11.BT.B3 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST1_EXT_LANE_6_0 : ffe[set][ 2];
	RX_DP_LMS_FFE_REG12.BT.B3 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST2_EXT_LANE_5_0 : ffe[set][ 3];
	RX_DP_LMS_FFE_REG13.BT.B3 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST3_EXT_LANE_4_0 : ffe[set][ 4];
	RX_DP_LMS_FFE_REG14.BT.B3 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST4_EXT_LANE_3_0 : ffe[set][ 5];
	RX_DP_LMS_FFE_REG15.BT.B3 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST5_EXT_LANE_3_0 : ffe[set][ 6];
	RX_DP_LMS_FFE_REG16.BT.B3 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST6_EXT_LANE_3_0 : ffe[set][ 7];
	RX_DP_LMS_FFE_REG17.BT.B3 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST7_EXT_LANE_2_0 : ffe[set][ 8];
	RX_DP_LMS_FFE_REG18.BT.B3 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST8_EXT_LANE_2_0 : ffe[set][ 9];
	RX_DP_LMS_FFE_REG19.BT.B3 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST9_EXT_LANE_2_0 : ffe[set][10];
	RX_DP_LMS_FFE_REG20.BT.B3 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST10_EXT_LANE_2_0: ffe[set][11];
	RX_DP_LMS_FFE_REG21.BT.B3 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST11_EXT_LANE_2_0 : 0;
	RX_DP_LMS_FFE_REG22.BT.B3 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST12_EXT_LANE_2_0 : 0;
	RX_DP_LMS_FFE_REG23.BT.B3 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST13_EXT_LANE_2_0 : 0;
	RX_DP_LMS_FFE_REG24.BT.B3 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST14_EXT_LANE_2_0 : 0;
	RX_DP_LMS_FFE_REG25.BT.B3 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST15_EXT_LANE_2_0 : 0;
	RX_DP_LMS_FFE_REG26.BT.B3 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST16_EXT_LANE_2_0 : 0;
	RX_DP_LMS_FFE_REG27.BT.B3 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST17_EXT_LANE_2_0 : 0;
	RX_DP_LMS_FFE_REG28.BT.B3 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST18_EXT_LANE_2_0 : 0;
	RX_DP_LMS_FFE_REG29.BT.B3 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST19_EXT_LANE_2_0 : 0;
	RX_DP_LMS_FFE_REG30.BT.B3 = (set == 7) ? reg_CDS_DP_LMS_FFE_PST20_EXT_LANE_2_0 : 0;
	RX_DP_LMS_FFE_REG31.BT.B3 = (set == 7) ? reg_CDS_DP_LMS_FFE_FLT1_EXT_LANE_2_0  : 0;
	RX_DP_LMS_FFE_REG32.BT.B3 = (set == 7) ? reg_CDS_DP_LMS_FFE_FLT2_EXT_LANE_2_0  : 0;
	RX_DP_LMS_FFE_REG33.BT.B3 = (set == 7) ? reg_CDS_DP_LMS_FFE_FLT3_EXT_LANE_2_0  : 0;
	RX_DP_LMS_FFE_REG34.BT.B3 = (set == 7) ? reg_CDS_DP_LMS_FFE_FLT4_EXT_LANE_2_0  : 0;
	RX_DP_LMS_FFE_REG35.BT.B3 = (set == 7) ? reg_CDS_DP_LMS_FFE_FLT5_EXT_LANE_2_0  : 0;
	RX_DP_LMS_FFE_REG36.BT.B3 = (set == 7) ? reg_CDS_DP_LMS_FFE_FLT6_EXT_LANE_2_0  : 0;
	RX_DP_LMS_FFE_REG37.BT.B3 = (set == 7) ? reg_CDS_DP_LMS_FFE_FLT7_EXT_LANE_2_0  : 0;
	RX_DP_LMS_FFE_REG38.BT.B3 = (set == 7) ? reg_CDS_DP_LMS_FFE_FLT8_EXT_LANE_2_0  : 0;
	RX_DP_LMS_GAIN_REG0.BT.B3 = (set == 7) ? (((reg_CDS_DP_LMS_GAIN_EXT_LANE_10_0_b0 >> 4) & 0xf) |
	                                           (reg_CDS_DP_LMS_GAIN_EXT_LANE_10_0_b1 << 4)) : (gain[set] >> 4);
	RX_DP_LMS_GAIN_REG0.BT.B2 = (set == 7) ?  ((reg_CDS_DP_LMS_GAIN_EXT_LANE_10_0_b0 & 0xf) << 4) : ((gain[set] & 0xf) << 4);
	RX_DP_LMS_BLW_REG0.BT.B2  = (set == 7) ? reg_CDS_DP_LMS_BLW_EXT_LANE_5_0  : 0;
	RX_DP_LMS_DFE_REG0.BT.B3  = (set == 7) ? reg_CDS_DP_LMS_DFE_EXT_LANE_5_0  : 0;
	RX_FFE_REG0.BT.B1         = (set == 7) ? reg_CDS_DP_FFE_FLT_SEL_EXT_LANE_5_0  : 0;
  #endif
	reg_RX_DP_LMS_TOP_LD_LANE = 1;
	reg_RX_DP_LMS_TOP_LD_LANE = 0;

}

void drv_sav_dp_lms (void) BANKING_CTRL
{

  #ifndef FAST_REG_RW
	reg_CDS_DP_LMS_FFE_PRE1_EXT_LANE_6_0  = reg_RX_DP_LMS_FFE_PRE1_COE_LANE_6_0;
	reg_CDS_DP_LMS_FFE_PRE2_EXT_LANE_4_0  = reg_RX_DP_LMS_FFE_PRE2_COE_LANE_4_0;
	reg_CDS_DP_LMS_FFE_PRE3_EXT_LANE_3_0  = reg_RX_DP_LMS_FFE_PRE3_COE_LANE_3_0;
	reg_CDS_DP_LMS_FFE_PRE4_EXT_LANE_2_0  = reg_RX_DP_LMS_FFE_PRE4_COE_LANE_2_0;
	reg_CDS_DP_LMS_FFE_PRE5_EXT_LANE_2_0  = reg_RX_DP_LMS_FFE_PRE5_COE_LANE_2_0;
	reg_CDS_DP_LMS_FFE_PRE6_EXT_LANE_2_0  = reg_RX_DP_LMS_FFE_PRE6_COE_LANE_2_0;
	reg_CDS_DP_LMS_FFE_PRE7_EXT_LANE_2_0  = reg_RX_DP_LMS_FFE_PRE7_COE_LANE_2_0;
	reg_CDS_DP_LMS_FFE_PRE8_EXT_LANE_2_0  = reg_RX_DP_LMS_FFE_PRE8_COE_LANE_2_0;
	reg_CDS_DP_LMS_FFE_PST1_EXT_LANE_6_0  = reg_RX_DP_LMS_FFE_PST1_COE_LANE_6_0;
	reg_CDS_DP_LMS_FFE_PST2_EXT_LANE_5_0  = reg_RX_DP_LMS_FFE_PST2_COE_LANE_5_0;
	reg_CDS_DP_LMS_FFE_PST3_EXT_LANE_4_0  = reg_RX_DP_LMS_FFE_PST3_COE_LANE_4_0;
	reg_CDS_DP_LMS_FFE_PST4_EXT_LANE_3_0  = reg_RX_DP_LMS_FFE_PST4_COE_LANE_3_0;
	reg_CDS_DP_LMS_FFE_PST5_EXT_LANE_3_0  = reg_RX_DP_LMS_FFE_PST5_COE_LANE_3_0;
	reg_CDS_DP_LMS_FFE_PST6_EXT_LANE_3_0  = reg_RX_DP_LMS_FFE_PST6_COE_LANE_3_0;
	reg_CDS_DP_LMS_FFE_PST7_EXT_LANE_2_0  = reg_RX_DP_LMS_FFE_PST7_COE_LANE_2_0;
	reg_CDS_DP_LMS_FFE_PST8_EXT_LANE_2_0  = reg_RX_DP_LMS_FFE_PST8_COE_LANE_2_0;
	reg_CDS_DP_LMS_FFE_PST9_EXT_LANE_2_0  = reg_RX_DP_LMS_FFE_PST9_COE_LANE_2_0;
	reg_CDS_DP_LMS_FFE_PST10_EXT_LANE_2_0 = reg_RX_DP_LMS_FFE_PST10_COE_LANE_2_0;
	reg_CDS_DP_LMS_FFE_PST11_EXT_LANE_2_0 = reg_RX_DP_LMS_FFE_PST11_COE_LANE_2_0;
	reg_CDS_DP_LMS_FFE_PST12_EXT_LANE_2_0 = reg_RX_DP_LMS_FFE_PST12_COE_LANE_2_0;
	reg_CDS_DP_LMS_FFE_PST13_EXT_LANE_2_0 = reg_RX_DP_LMS_FFE_PST13_COE_LANE_2_0;
	reg_CDS_DP_LMS_FFE_PST14_EXT_LANE_2_0 = reg_RX_DP_LMS_FFE_PST14_COE_LANE_2_0;
	reg_CDS_DP_LMS_FFE_PST15_EXT_LANE_2_0 = reg_RX_DP_LMS_FFE_PST15_COE_LANE_2_0;
	reg_CDS_DP_LMS_FFE_PST16_EXT_LANE_2_0 = reg_RX_DP_LMS_FFE_PST16_COE_LANE_2_0;
	reg_CDS_DP_LMS_FFE_PST17_EXT_LANE_2_0 = reg_RX_DP_LMS_FFE_PST17_COE_LANE_2_0;
	reg_CDS_DP_LMS_FFE_PST18_EXT_LANE_2_0 = reg_RX_DP_LMS_FFE_PST18_COE_LANE_2_0;
	reg_CDS_DP_LMS_FFE_PST19_EXT_LANE_2_0 = reg_RX_DP_LMS_FFE_PST19_COE_LANE_2_0;
	reg_CDS_DP_LMS_FFE_PST20_EXT_LANE_2_0 = reg_RX_DP_LMS_FFE_PST20_COE_LANE_2_0;
	reg_CDS_DP_LMS_FFE_FLT1_EXT_LANE_2_0  = reg_RX_DP_LMS_FFE_FLT1_COE_LANE_2_0;
	reg_CDS_DP_LMS_FFE_FLT2_EXT_LANE_2_0  = reg_RX_DP_LMS_FFE_FLT2_COE_LANE_2_0;
	reg_CDS_DP_LMS_FFE_FLT3_EXT_LANE_2_0  = reg_RX_DP_LMS_FFE_FLT3_COE_LANE_2_0;
	reg_CDS_DP_LMS_FFE_FLT4_EXT_LANE_2_0  = reg_RX_DP_LMS_FFE_FLT4_COE_LANE_2_0;
	reg_CDS_DP_LMS_FFE_FLT5_EXT_LANE_2_0  = reg_RX_DP_LMS_FFE_FLT5_COE_LANE_2_0;
	reg_CDS_DP_LMS_FFE_FLT6_EXT_LANE_2_0  = reg_RX_DP_LMS_FFE_FLT6_COE_LANE_2_0;
	reg_CDS_DP_LMS_FFE_FLT7_EXT_LANE_2_0  = reg_RX_DP_LMS_FFE_FLT7_COE_LANE_2_0;
	reg_CDS_DP_LMS_FFE_FLT8_EXT_LANE_2_0  = reg_RX_DP_LMS_FFE_FLT8_COE_LANE_2_0;
        reg_CDS_DP_LMS_GAIN_EXT_LANE_10_0_b0  = reg_RX_DP_LMS_GAIN_COE_LANE_7_0;
        reg_CDS_DP_LMS_GAIN_EXT_LANE_10_0_b1  = reg_RX_DP_LMS_GAIN_COE_LANE_10_8;
	reg_CDS_DP_LMS_BLW_EXT_LANE_5_0       = reg_RX_DP_LMS_BLW_COE_LANE_5_0;
	reg_CDS_DP_LMS_DFE_EXT_LANE_5_0       = reg_RX_DP_LMS_DFE_COE_LANE_5_0;
	reg_CDS_DP_FFE_FLT_SEL_EXT_LANE_5_0   = reg_RX_DP_FFE_FLT_SEL_LANE_5_0;
  #else
	CDS_DP_LMS_REG0.BT.B3 = reg_RX_DP_LMS_FFE_PRE1_COE_LANE_6_0;
	CDS_DP_LMS_REG0.BT.B2 = reg_RX_DP_LMS_FFE_PRE2_COE_LANE_4_0;
	CDS_DP_LMS_REG0.BT.B1 = ((reg_RX_DP_LMS_FFE_PRE3_COE_LANE_3_0  << 4) & 0xf0) | reg_RX_DP_LMS_FFE_PRE4_COE_LANE_2_0;
	CDS_DP_LMS_REG0.BT.B0 = ((reg_RX_DP_LMS_FFE_PRE5_COE_LANE_2_0  << 4) & 0xf0) | reg_RX_DP_LMS_FFE_PRE6_COE_LANE_2_0;
	CDS_DP_LMS_REG1.BT.B3 = ((reg_RX_DP_LMS_FFE_PRE7_COE_LANE_2_0  << 4) & 0xf0) | reg_RX_DP_LMS_FFE_PRE8_COE_LANE_2_0;
	CDS_DP_LMS_REG1.BT.B2 = reg_RX_DP_LMS_FFE_PST1_COE_LANE_6_0;
	CDS_DP_LMS_REG1.BT.B1 = reg_RX_DP_LMS_FFE_PST2_COE_LANE_5_0;
	CDS_DP_LMS_REG1.BT.B0 = reg_RX_DP_LMS_FFE_PST3_COE_LANE_4_0;
	CDS_DP_LMS_REG2.BT.B3 = ((reg_RX_DP_LMS_FFE_PST4_COE_LANE_3_0  << 4) & 0xf0) | reg_RX_DP_LMS_FFE_PST5_COE_LANE_3_0;
	CDS_DP_LMS_REG2.BT.B2 = ((reg_RX_DP_LMS_FFE_PST6_COE_LANE_3_0  << 4) & 0xf0) | reg_RX_DP_LMS_FFE_PST7_COE_LANE_2_0;
	CDS_DP_LMS_REG2.BT.B1 = ((reg_RX_DP_LMS_FFE_PST8_COE_LANE_2_0  << 4) & 0xf0) | reg_RX_DP_LMS_FFE_PST9_COE_LANE_2_0;
	CDS_DP_LMS_REG2.BT.B0 = ((reg_RX_DP_LMS_FFE_PST10_COE_LANE_2_0 << 4) & 0xf0) | reg_RX_DP_LMS_FFE_PST11_COE_LANE_2_0;
	CDS_DP_LMS_REG3.BT.B3 = ((reg_RX_DP_LMS_FFE_PST12_COE_LANE_2_0 << 4) & 0xf0) | reg_RX_DP_LMS_FFE_PST13_COE_LANE_2_0;
	CDS_DP_LMS_REG3.BT.B2 = ((reg_RX_DP_LMS_FFE_PST14_COE_LANE_2_0 << 4) & 0xf0) | reg_RX_DP_LMS_FFE_PST15_COE_LANE_2_0;
	CDS_DP_LMS_REG3.BT.B1 = ((reg_RX_DP_LMS_FFE_PST16_COE_LANE_2_0 << 4) & 0xf0) | reg_RX_DP_LMS_FFE_PST17_COE_LANE_2_0;
	CDS_DP_LMS_REG3.BT.B0 = ((reg_RX_DP_LMS_FFE_PST18_COE_LANE_2_0 << 4) & 0xf0) | reg_RX_DP_LMS_FFE_PST19_COE_LANE_2_0;
	CDS_DP_LMS_REG4.BT.B3 = ((reg_RX_DP_LMS_FFE_PST20_COE_LANE_2_0 << 4) & 0xf0) | reg_RX_DP_LMS_FFE_FLT1_COE_LANE_2_0;
	CDS_DP_LMS_REG4.BT.B2 = ((reg_RX_DP_LMS_FFE_FLT2_COE_LANE_2_0  << 4) & 0xf0) | reg_RX_DP_LMS_FFE_FLT3_COE_LANE_2_0;
	CDS_DP_LMS_REG4.BT.B1 = ((reg_RX_DP_LMS_FFE_FLT4_COE_LANE_2_0  << 4) & 0xf0) | reg_RX_DP_LMS_FFE_FLT5_COE_LANE_2_0;
	CDS_DP_LMS_REG4.BT.B0 = ((reg_RX_DP_LMS_FFE_FLT6_COE_LANE_2_0  << 4) & 0xf0) | reg_RX_DP_LMS_FFE_FLT7_COE_LANE_2_0;
	CDS_DP_LMS_REG5.BT.B3 = ((reg_RX_DP_LMS_FFE_FLT8_COE_LANE_2_0  << 4) & 0xf0);
        CDS_DP_LMS_REG6.BT.B0 = reg_RX_DP_LMS_GAIN_COE_LANE_7_0;
        CDS_DP_LMS_REG6.BT.B1 = reg_RX_DP_LMS_GAIN_COE_LANE_10_8;
	CDS_DP_LMS_REG5.BT.B1 = reg_RX_DP_LMS_BLW_COE_LANE_5_0;
	CDS_DP_LMS_REG5.BT.B0 = reg_RX_DP_LMS_DFE_COE_LANE_5_0;
        CDS_DP_LMS_REG6.BT.B2 = reg_RX_DP_FFE_FLT_SEL_LANE_5_0;
  #endif

}


bool check_cdr_lock (void) BANKING_CTRL
{
  uint32_t ted_t;
  uint32_t freq_t;
  uint32_t lock_t;
 
  // Estimate the required time for locker.
  // The slowest Rx clock is around 33 MHz. That's about 0.03 us.
  // The delay function has unit of 0.1 us. 
 
  if ( cmx_HW_DRV_SPD_UP ) return 1;
 
  ted_t = 1 << (reg_RX_PH_TED_AVG_N1_LANE_3_0 + reg_RX_PH_TED_DEV_N2_LANE_3_0 + 2)/3 + 50;
  freq_t = 1 << (reg_RX_FREQ_DET_DEC_N1_LANE_3_0 + reg_RX_FREQ_DET_AVG_N2_LANE_3_0 + 2)/3 + 50;
 
  lock_t = (ted_t > freq_t) ? ted_t : freq_t;  
 
  reg_RX_PH_LOCK_EN_LANE = 1;
  delay(lock_t); // unit is 0.1 us 
  reg_RX_PH_LOCK_EN_LANE = 0;
  return (reg_RX_CDR_LOCK_LANE);
}
