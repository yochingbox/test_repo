
#ifndef CDR_DFE_SCHEME_H
#define CDR_DFE_SCHEME_H


// -- CDS Function Prototype
// **************************************************
// CDR_DFE_SCHEME
// Args:
//      cds_en
// Inputs:
#define tag_RESET_PH_EN_DTL     reg_RESET_PH_EN_DTL_LANE //1
#define tag_DFE_SAVE_EN         reg_DFE_SAVE_EN_LANE //1
#define tag_DFE_LOAD_EN         reg_DFE_LOAD_EN_LANE //1
#define tag_PM_PH_ADJ_THRESH    2
#define tag_LOCK_DFE_ON         reg_LOCK_DFE_ON_LANE //0
#define tag_VH_EO_MODE          reg_VH_EO_MODE_LANE //0
#define tag_EO_BASED            reg_EO_BASED_LANE // 0
#define tag_DFE_RATE_MODE       reg_DFE_RATE_MODE_LANE_1_0 // 0:HR; 1:FR; 2:QR.

#define tag_EYE_CHK_THRESH_K    reg_EYE_CHK_THRESH_K_LANE_3_0
#define tag_EYE_CHK_THRESH_C    reg_EYE_CHK_THRESH_C_LANE_3_0
#define tag_EYE_CHK_THRESH_ERR  reg_EYE_CHK_THRESH_ERR_LANE_15_0
#define tag_EYE_CHK_THRESH_VLD  reg_EYE_CHK_THRESH_VLD_LANE_7_0
//#define tag_EYE_CHK_THRESH_K    3
//#define tag_EYE_CHK_THRESH_C    2
//#define tag_EYE_CHK_THRESH_ERR  1024L
//#define tag_EYE_CHK_THRESH_VLD  100
#define tag_EYE_CHK_DIS         reg_EYE_CHK_DIS_LANE //0
#define tag_EOM_EL_PHASE_DELTA_LEFT 4   
#define tag_EOM_EL_PHASE_DELTA_RIGHT 4  


#define tag_F0DK_RES_CUSTOM_EN reg_CDS_F0DK_RES_CUSTOM_EN_LANE
#define tag_F0D_RES_CUSTOM     reg_CDS_F0D_RES_CUSTOM_LANE_1_0
#define tag_F0K_RES_CUSTOM     reg_CDS_F0K_RES_CUSTOM_LANE_1_0


// Outputs:
//     reg_DFE_F0_COARSE_STEP_EN
//     reg_DFE_F0_FINE_STEP_EN
//     reg_DFE_COARSE_STEP_EN
//     reg_DFE_FINE_STEP_EN
//     reg_DFE_F0B_MODE
//     reg_DFE_F0D_MODE
//     reg_DFE_F0K_MODE
//     reg_DFE_MMSE_MODE
// Return:
//      cds56
#define tag_CDS_ERR_CODE        reg_CDS_ERR_CODE_LANE_7_0
// DFE Structure:
#define NUM_PATH 4
#define NUM_DS 2
#define NUM_TMB 3
#define NUM_ML 2
// **************************************************

// PRIVATE METHODS
void set_dfe_adapt_path(uint8_t sel) BANKING_CTRL;
void set_dfe_fbmd(uint8_t type) BANKING_CTRL;
void set_dfe_vldmd(uint8_t type) BANKING_CTRL;
void dfe_fsm(uint16_t lpnum, uint16_t tap_en) BANKING_CTRL;
void cds_save(uint8_t type) BANKING_CTRL;
void cds_load_f0(uint8_t type) BANKING_CTRL;
void dfe_save() BANKING_CTRL;
void dfe_load(uint8_t type) BANKING_CTRL;
void dc_load(uint8_t type) BANKING_CTRL;
void set_esm_voltage(uint8_t v) BANKING_CTRL;
uint8_t get_ec_voltage() BANKING_CTRL;
bool check_eye() BANKING_CTRL;
void tgl_fen0() BANKING_CTRL;
void dfe_reset_f2() BANKING_CTRL;
void dfe_prot_f2(uint8_t type) BANKING_CTRL;
uint8_t dfe_chk_sign_f2(uint8_t top, uint8_t mid, uint8_t bot) BANKING_CTRL;


// -- CDS Status declaration
typedef struct {

    // -- p1 
    uint8_t dc_d_bot_p1,   dc_d_mid_p1,   dc_d_top_p1,    dc_s_bot_p1;
    uint8_t dc_s_mid_p1,   dc_s_top_p1,   dc_e_p1,        vref_bot_p1;
    uint8_t vref_mid_p1,   vref_top_p1,   f0_d_bot_p1,    f0_d_mid_p1;
    uint8_t f0_d_top_p1,   f0_s_bot_p1,   f0_s_mid_p1,    f0_s_top_p1;
    uint8_t f2_d_bot_p1,   f2_d_mid_p1,   f2_d_top_p1,    f2_s_bot_p1;
    uint8_t f2_s_mid_p1,   f2_s_top_p1,   f2_tune3_d_p1,  f2_tune3_s_p1;
    uint8_t f2_tune1_d_p1, f2_tune1_s_p1, f3_d_bot_p1,    f3_d_mid_p1;
    uint8_t f3_d_top_p1,   f3_s_bot_p1,   f3_s_mid_p1,    f3_s_top_p1;
    uint8_t f4_d_bot_p1,   f4_d_mid_p1,   f4_d_top_p1,    f4_s_bot_p1;
    uint8_t f4_s_mid_p1,   f4_s_top_p1,   f5_bot_p1,      f5_mid_p1;
    uint8_t f5_top_p1,     f6_bot_p1,     f6_mid_p1,      f6_top_p1;
    uint8_t f7_bot_p1,     f7_mid_p1,     f7_top_p1,      f8_bot_p1;
    uint8_t f8_mid_p1,     f8_top_p1,     f9_lsb_p1,      f9_msb_p1;
    uint8_t f10_lsb_p1,    f10_msb_p1,    f11_p1,         f12_lsb_p1;
    uint8_t f12_msb_p1,    f13_p1,        f14_lsb_p1,     f14_msb_p1;
    uint8_t f15_p1,        f16_lsb_p1,    f16_msb_p1,     f17_p1;
    uint8_t f18_lsb_p1,    f18_msb_p1,    f19_p1,         f20_lsb_p1;
    uint8_t f20_msb_p1,    f21_p1,        f22_p1,         f23_p1;
    uint8_t f24_p1,        f25_p1,        f26_p1,         f27_p1;
    uint8_t f28_p1,        f29_p1,        f30_p1,         rsvd380;

    // -- p2 
    uint8_t dc_d_bot_p2,   dc_d_mid_p2,   dc_d_top_p2,    dc_s_bot_p2;
    uint8_t dc_s_mid_p2,   dc_s_top_p2,   dc_e_p2,        vref_bot_p2;
    uint8_t vref_mid_p2,   vref_top_p2,   f0_d_bot_p2,    f0_d_mid_p2;
    uint8_t f0_d_top_p2,   f0_s_bot_p2,   f0_s_mid_p2,    f0_s_top_p2;
    uint8_t f2_d_bot_p2,   f2_d_mid_p2,   f2_d_top_p2,    f2_s_bot_p2;
    uint8_t f2_s_mid_p2,   f2_s_top_p2,   f2_tune3_d_p2,  f2_tune3_s_p2;
    uint8_t f2_tune1_d_p2, f2_tune1_s_p2, f3_d_bot_p2,    f3_d_mid_p2;
    uint8_t f3_d_top_p2,   f3_s_bot_p2,   f3_s_mid_p2,    f3_s_top_p2;
    uint8_t f4_d_bot_p2,   f4_d_mid_p2,   f4_d_top_p2,    f4_s_bot_p2;
    uint8_t f4_s_mid_p2,   f4_s_top_p2,   f5_bot_p2,      f5_mid_p2;
    uint8_t f5_top_p2,     f6_bot_p2,     f6_mid_p2,      f6_top_p2;
    uint8_t f7_bot_p2,     f7_mid_p2,     f7_top_p2,      f8_bot_p2;
    uint8_t f8_mid_p2,     f8_top_p2,     f9_lsb_p2,      f9_msb_p2;
    uint8_t f10_lsb_p2,    f10_msb_p2,    f11_p2,         f12_lsb_p2;
    uint8_t f12_msb_p2,    f13_p2,        f14_lsb_p2,     f14_msb_p2;
    uint8_t f15_p2,        f16_lsb_p2,    f16_msb_p2,     f17_p2;
    uint8_t f18_lsb_p2,    f18_msb_p2,    f19_p2,         f20_lsb_p2;
    uint8_t f20_msb_p2,    f21_p2,        f22_p2,         f23_p2;
    uint8_t f24_p2,        f25_p2,        f26_p2,         f27_p2;
    uint8_t f28_p2,        f29_p2,        f30_p2,         rsvd381;

    // -- p3 
    uint8_t dc_d_bot_p3,   dc_d_mid_p3,   dc_d_top_p3,    dc_s_bot_p3;
    uint8_t dc_s_mid_p3,   dc_s_top_p3,   dc_e_p3,        vref_bot_p3;
    uint8_t vref_mid_p3,   vref_top_p3,   f0_d_bot_p3,    f0_d_mid_p3;
    uint8_t f0_d_top_p3,   f0_s_bot_p3,   f0_s_mid_p3,    f0_s_top_p3;
    uint8_t f2_d_bot_p3,   f2_d_mid_p3,   f2_d_top_p3,    f2_s_bot_p3;
    uint8_t f2_s_mid_p3,   f2_s_top_p3,   f2_tune3_d_p3,  f2_tune3_s_p3;
    uint8_t f2_tune1_d_p3, f2_tune1_s_p3, f3_d_bot_p3,    f3_d_mid_p3;
    uint8_t f3_d_top_p3,   f3_s_bot_p3,   f3_s_mid_p3,    f3_s_top_p3;
    uint8_t f4_d_bot_p3,   f4_d_mid_p3,   f4_d_top_p3,    f4_s_bot_p3;
    uint8_t f4_s_mid_p3,   f4_s_top_p3,   f5_bot_p3,      f5_mid_p3;
    uint8_t f5_top_p3,     f6_bot_p3,     f6_mid_p3,      f6_top_p3;
    uint8_t f7_bot_p3,     f7_mid_p3,     f7_top_p3,      f8_bot_p3;
    uint8_t f8_mid_p3,     f8_top_p3,     f9_lsb_p3,      f9_msb_p3;
    uint8_t f10_lsb_p3,    f10_msb_p3,    f11_p3,         f12_lsb_p3;
    uint8_t f12_msb_p3,    f13_p3,        f14_lsb_p3,     f14_msb_p3;
    uint8_t f15_p3,        f16_lsb_p3,    f16_msb_p3,     f17_p3;
    uint8_t f18_lsb_p3,    f18_msb_p3,    f19_p3,         f20_lsb_p3;
    uint8_t f20_msb_p3,    f21_p3,        f22_p3,         f23_p3;
    uint8_t f24_p3,        f25_p3,        f26_p3,         f27_p3;
    uint8_t f28_p3,        f29_p3,        f30_p3,         rsvd382;

    // -- p4 
    uint8_t dc_d_bot_p4,   dc_d_mid_p4,   dc_d_top_p4,    dc_s_bot_p4;
    uint8_t dc_s_mid_p4,   dc_s_top_p4,   dc_e_p4,        vref_bot_p4;
    uint8_t vref_mid_p4,   vref_top_p4,   f0_d_bot_p4,    f0_d_mid_p4;
    uint8_t f0_d_top_p4,   f0_s_bot_p4,   f0_s_mid_p4,    f0_s_top_p4;
    uint8_t f2_d_bot_p4,   f2_d_mid_p4,   f2_d_top_p4,    f2_s_bot_p4;
    uint8_t f2_s_mid_p4,   f2_s_top_p4,   f2_tune3_d_p4,  f2_tune3_s_p4;
    uint8_t f2_tune1_d_p4, f2_tune1_s_p4, f3_d_bot_p4,    f3_d_mid_p4;
    uint8_t f3_d_top_p4,   f3_s_bot_p4,   f3_s_mid_p4,    f3_s_top_p4;
    uint8_t f4_d_bot_p4,   f4_d_mid_p4,   f4_d_top_p4,    f4_s_bot_p4;
    uint8_t f4_s_mid_p4,   f4_s_top_p4,   f5_bot_p4,      f5_mid_p4;
    uint8_t f5_top_p4,     f6_bot_p4,     f6_mid_p4,      f6_top_p4;
    uint8_t f7_bot_p4,     f7_mid_p4,     f7_top_p4,      f8_bot_p4;
    uint8_t f8_mid_p4,     f8_top_p4,     f9_lsb_p4,      f9_msb_p4;
    uint8_t f10_lsb_p4,    f10_msb_p4,    f11_p4,         f12_lsb_p4;
    uint8_t f12_msb_p4,    f13_p4,        f14_lsb_p4,     f14_msb_p4;
    uint8_t f15_p4,        f16_lsb_p4,    f16_msb_p4,     f17_p4;
    uint8_t f18_lsb_p4,    f18_msb_p4,    f19_p4,         f20_lsb_p4;
    uint8_t f20_msb_p4,    f21_p4,        f22_p4,         f23_p4;
    uint8_t f24_p4,        f25_p4,        f26_p4,         f27_p4;
    uint8_t f28_p4,        f29_p4,        f30_p4,         rsvd383;

} dfe_sm_t; // SM tap values 320Byte

typedef struct {

    // -- p1 
    int8_t dc_d_bot_p1,   dc_d_mid_p1,   dc_d_top_p1,    dc_s_bot_p1;
    int8_t dc_s_mid_p1,   dc_s_top_p1,   dc_e_p1,        vref_bot_p1;
    int8_t vref_mid_p1,   vref_top_p1,   f0_d_bot_p1,    f0_d_mid_p1;
    int8_t f0_d_top_p1,   f0_s_bot_p1,   f0_s_mid_p1,    f0_s_top_p1;
    int8_t f2_d_bot_p1,   f2_d_mid_p1,   f2_d_top_p1,    f2_s_bot_p1;
    int8_t f2_s_mid_p1,   f2_s_top_p1,   f3_d_bot_p1,    f3_d_mid_p1;
    int8_t f3_d_top_p1,   f3_s_bot_p1,   f3_s_mid_p1,    f3_s_top_p1;
    int8_t f4_d_bot_p1,   f4_d_mid_p1,   f4_d_top_p1,    f4_s_bot_p1;
    int8_t f4_s_mid_p1,   f4_s_top_p1,   f5_bot_p1,      f5_mid_p1;
    int8_t f5_top_p1,     f6_bot_p1,     f6_mid_p1,      f6_top_p1;
    int8_t f7_bot_p1,     f7_mid_p1,     f7_top_p1,      f8_bot_p1;
    int8_t f8_mid_p1,     f8_top_p1,     f9_lsb_p1,      f9_msb_p1;
    int8_t f10_lsb_p1,    f10_msb_p1,    f11_p1,         f12_lsb_p1;
    int8_t f12_msb_p1,    f13_p1,        f14_lsb_p1,     f14_msb_p1;
    int8_t f15_p1,        f16_lsb_p1,    f16_msb_p1,     f17_p1;
    int8_t f18_lsb_p1,    f18_msb_p1,    f19_p1,         f20_lsb_p1;
    int8_t f20_msb_p1,    f21_p1,        f22_p1,         f23_p1;
    int8_t f24_p1,        f25_p1,        f26_p1,         f27_p1;
    int8_t f28_p1,        f29_p1,        f30_p1,         rsvd380;

    // -- p2 
    int8_t dc_d_bot_p2,   dc_d_mid_p2,   dc_d_top_p2,    dc_s_bot_p2;
    int8_t dc_s_mid_p2,   dc_s_top_p2,   dc_e_p2,        vref_bot_p2;
    int8_t vref_mid_p2,   vref_top_p2,   f0_d_bot_p2,    f0_d_mid_p2;
    int8_t f0_d_top_p2,   f0_s_bot_p2,   f0_s_mid_p2,    f0_s_top_p2;
    int8_t f2_d_bot_p2,   f2_d_mid_p2,   f2_d_top_p2,    f2_s_bot_p2;
    int8_t f2_s_mid_p2,   f2_s_top_p2,   f3_d_bot_p2,    f3_d_mid_p2;
    int8_t f3_d_top_p2,   f3_s_bot_p2,   f3_s_mid_p2,    f3_s_top_p2;
    int8_t f4_d_bot_p2,   f4_d_mid_p2,   f4_d_top_p2,    f4_s_bot_p2;
    int8_t f4_s_mid_p2,   f4_s_top_p2,   f5_bot_p2,      f5_mid_p2;
    int8_t f5_top_p2,     f6_bot_p2,     f6_mid_p2,      f6_top_p2;
    int8_t f7_bot_p2,     f7_mid_p2,     f7_top_p2,      f8_bot_p2;
    int8_t f8_mid_p2,     f8_top_p2,     f9_lsb_p2,      f9_msb_p2;
    int8_t f10_lsb_p2,    f10_msb_p2,    f11_p2,         f12_lsb_p2;
    int8_t f12_msb_p2,    f13_p2,        f14_lsb_p2,     f14_msb_p2;
    int8_t f15_p2,        f16_lsb_p2,    f16_msb_p2,     f17_p2;
    int8_t f18_lsb_p2,    f18_msb_p2,    f19_p2,         f20_lsb_p2;
    int8_t f20_msb_p2,    f21_p2,        f22_p2,         f23_p2;
    int8_t f24_p2,        f25_p2,        f26_p2,         f27_p2;
    int8_t f28_p2,        f29_p2,        f30_p2,         rsvd381;

    // -- p3 
    int8_t dc_d_bot_p3,   dc_d_mid_p3,   dc_d_top_p3,    dc_s_bot_p3;
    int8_t dc_s_mid_p3,   dc_s_top_p3,   dc_e_p3,        vref_bot_p3;
    int8_t vref_mid_p3,   vref_top_p3,   f0_d_bot_p3,    f0_d_mid_p3;
    int8_t f0_d_top_p3,   f0_s_bot_p3,   f0_s_mid_p3,    f0_s_top_p3;
    int8_t f2_d_bot_p3,   f2_d_mid_p3,   f2_d_top_p3,    f2_s_bot_p3;
    int8_t f2_s_mid_p3,   f2_s_top_p3,   f3_d_bot_p3,    f3_d_mid_p3;
    int8_t f3_d_top_p3,   f3_s_bot_p3,   f3_s_mid_p3,    f3_s_top_p3;
    int8_t f4_d_bot_p3,   f4_d_mid_p3,   f4_d_top_p3,    f4_s_bot_p3;
    int8_t f4_s_mid_p3,   f4_s_top_p3,   f5_bot_p3,      f5_mid_p3;
    int8_t f5_top_p3,     f6_bot_p3,     f6_mid_p3,      f6_top_p3;
    int8_t f7_bot_p3,     f7_mid_p3,     f7_top_p3,      f8_bot_p3;
    int8_t f8_mid_p3,     f8_top_p3,     f9_lsb_p3,      f9_msb_p3;
    int8_t f10_lsb_p3,    f10_msb_p3,    f11_p3,         f12_lsb_p3;
    int8_t f12_msb_p3,    f13_p3,        f14_lsb_p3,     f14_msb_p3;
    int8_t f15_p3,        f16_lsb_p3,    f16_msb_p3,     f17_p3;
    int8_t f18_lsb_p3,    f18_msb_p3,    f19_p3,         f20_lsb_p3;
    int8_t f20_msb_p3,    f21_p3,        f22_p3,         f23_p3;
    int8_t f24_p3,        f25_p3,        f26_p3,         f27_p3;
    int8_t f28_p3,        f29_p3,        f30_p3,         rsvd382;

    // -- p4 
    int8_t dc_d_bot_p4,   dc_d_mid_p4,   dc_d_top_p4,    dc_s_bot_p4;
    int8_t dc_s_mid_p4,   dc_s_top_p4,   dc_e_p4,        vref_bot_p4;
    int8_t vref_mid_p4,   vref_top_p4,   f0_d_bot_p4,    f0_d_mid_p4;
    int8_t f0_d_top_p4,   f0_s_bot_p4,   f0_s_mid_p4,    f0_s_top_p4;
    int8_t f2_d_bot_p4,   f2_d_mid_p4,   f2_d_top_p4,    f2_s_bot_p4;
    int8_t f2_s_mid_p4,   f2_s_top_p4,   f3_d_bot_p4,    f3_d_mid_p4;
    int8_t f3_d_top_p4,   f3_s_bot_p4,   f3_s_mid_p4,    f3_s_top_p4;
    int8_t f4_d_bot_p4,   f4_d_mid_p4,   f4_d_top_p4,    f4_s_bot_p4;
    int8_t f4_s_mid_p4,   f4_s_top_p4,   f5_bot_p4,      f5_mid_p4;
    int8_t f5_top_p4,     f6_bot_p4,     f6_mid_p4,      f6_top_p4;
    int8_t f7_bot_p4,     f7_mid_p4,     f7_top_p4,      f8_bot_p4;
    int8_t f8_mid_p4,     f8_top_p4,     f9_lsb_p4,      f9_msb_p4;
    int8_t f10_lsb_p4,    f10_msb_p4,    f11_p4,         f12_lsb_p4;
    int8_t f12_msb_p4,    f13_p4,        f14_lsb_p4,     f14_msb_p4;
    int8_t f15_p4,        f16_lsb_p4,    f16_msb_p4,     f17_p4;
    int8_t f18_lsb_p4,    f18_msb_p4,    f19_p4,         f20_lsb_p4;
    int8_t f20_msb_p4,    f21_p4,        f22_p4,         f23_p4;
    int8_t f24_p4,        f25_p4,        f26_p4,         f27_p4;
    int8_t f28_p4,        f29_p4,        f30_p4,         rsvd383;

} dfe_2c_t; // 2C tap values 304Byte

typedef struct {
    // -- pX 
    int8_t dc[NUM_DS][NUM_TMB];   // 6Byte
    int8_t dc_e;                  // 1Byte
    int8_t vref[NUM_TMB];         // 3Byte
    int8_t f0[NUM_DS][NUM_TMB];   // 6Byte
    int8_t f2[NUM_DS][NUM_TMB];   // 6Byte
    int8_t f3[NUM_DS][NUM_TMB];   // 6Byte
    int8_t f4[NUM_DS][NUM_TMB];   // 6Byte
    int8_t f5[NUM_TMB];           // 3Byte
    int8_t f6[NUM_TMB];           // 3Byte
    int8_t f7[NUM_TMB];           // 3Byte
    int8_t f8[NUM_TMB];           // 3Byte
    int8_t f9[NUM_ML];            // 2Byte
    int8_t f10[NUM_ML];           // 2Byte
    int8_t f11;                   // 1Byte
    int8_t f12[NUM_ML];           // 2Byte
	 	int8_t f13;                   // 1Byte
    int8_t f14[NUM_ML];           // 2Byte
    int8_t f15;                   // 1Byte
    int8_t f16[NUM_ML];           // 2Byte
    int8_t f17;                   // 1Byte
    int8_t f18[NUM_ML];           // 2Byte
    int8_t f19;                   // 1Byte
    int8_t f20[NUM_ML];           // 2Byte
    int8_t f21, f22, f23, f24;    // 4Byte
    int8_t f25, f26, f27, f28;    // 4Byte
    int8_t f29, f30, rsvd;        // 3Byte
} dfe_2c_path_t; // 2C tap values 76Byte

typedef struct {
    uint8_t d_top_p1;
    uint8_t d_mid_p1;
    uint8_t d_bot_p1;
    uint8_t s_top_p1;
    uint8_t s_mid_p1;
    uint8_t s_bot_p1;
    uint8_t d_top_p2;
    uint8_t d_mid_p2;
    uint8_t d_bot_p2;
    uint8_t s_top_p2;
    uint8_t s_mid_p2;
    uint8_t s_bot_p2;
    uint8_t d_top_p3;
    uint8_t d_mid_p3;
    uint8_t d_bot_p3;
    uint8_t s_top_p3;
    uint8_t s_mid_p3;
    uint8_t s_bot_p3;
    uint8_t d_top_p4;
    uint8_t d_mid_p4;
    uint8_t d_bot_p4;
    uint8_t s_top_p4;
    uint8_t s_mid_p4;
    uint8_t s_bot_p4;
} dfe_f0_t;

typedef struct {
    dfe_2c_path_t dfe_2c[NUM_PATH]; // 304
    uint8_t f0a[NUM_PATH][NUM_DS][NUM_TMB]; // 24
    uint8_t f0b[NUM_PATH][NUM_DS][NUM_TMB]; // 24
    uint8_t f0k[NUM_PATH][NUM_DS][NUM_TMB]; // 24
    uint8_t f0x[NUM_PATH][NUM_DS][NUM_TMB]; // 24
    uint8_t f0d[NUM_PATH][NUM_DS][NUM_TMB]; // 24
    uint8_t f0d_left[NUM_PATH][NUM_DS][NUM_TMB]; // 24
    uint8_t f0d_right[NUM_PATH][NUM_DS][NUM_TMB]; // 24
    bool eye_check_pass;
    bool f0a_saturate;
    bool vref_saturate;
} Status_CDS_112G_struct_t;
// CDS Return Values

typedef struct {
    dfe_2c_t dfe_2c; // 304
    dfe_f0_t f0a; // 24
    dfe_f0_t f0b; // 24
    dfe_f0_t f0k; // 24
    dfe_f0_t f0x; // 24
    dfe_f0_t f0d; // 24
    dfe_f0_t f0d_left;  // 24
    dfe_f0_t f0d_right; // 24
    bool eye_check_pass;
    bool f0a_saturate;
    bool vref_saturate;
} Status_CDS_112G_flat_t; // 475

typedef union {
    Status_CDS_112G_flat_t f;
    Status_CDS_112G_struct_t s;
} Status_CDS_112G_t;

 __xdata __at(0x6100) Status_CDS_112G_t cds112;
 __xdata __at(0x6380) dfe_sm_t sav_dfe_sm;

#endif
