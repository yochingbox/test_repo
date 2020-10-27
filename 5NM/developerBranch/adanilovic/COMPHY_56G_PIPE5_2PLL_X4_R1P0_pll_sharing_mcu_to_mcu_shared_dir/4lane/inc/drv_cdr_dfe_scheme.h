
#ifndef CDR_DFE_SCHEME_H
#define CDR_DFE_SCHEME_H


// -- CDS Function Prototype
// **************************************************
// CDR_DFE_SCHEME
// Args:
//      cds_en
// Inputs:
#define tag_RESET_PH_EN_DTL     reg_RESET_PH_EN_DTL_LANE //1
#define tag_RESET_DFE_TAP_MODE  reg_RESET_DFE_TAP_MODE_LANE //1
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
#define NUM_PATH 2 //0:EVEN 1:ODD
#define NUM_DS 2 //0:DATA, 1:SLICE
#define NUM_TMB 3 //0:TOP, 1:MID, 2:BOT
#define NUM_ML 2 //0:MSB, 1:LSB
// **************************************************

// PRIVATE METHODS
void set_dfe_adapt_path(uint8_t sel) BANKING_CTRL;
void set_dfe_fbmd(uint8_t type) BANKING_CTRL;
void set_dfe_vldmd(uint8_t type) BANKING_CTRL;
void dfe_fsm(uint16_t lpnum, uint16_t tap_en) BANKING_CTRL;
void cds_save(uint8_t type) BANKING_CTRL;
void cds_load_f0(uint8_t type) BANKING_CTRL;
void cds_load_f2t() BANKING_CTRL;
void cds_load_vref() BANKING_CTRL;
void dfe_save() BANKING_CTRL;
void dfe_load(uint8_t type) BANKING_CTRL;
void dc_load(uint8_t type) BANKING_CTRL;
void set_esm_voltage(uint8_t v) BANKING_CTRL;
uint8_t get_ec_voltage() BANKING_CTRL;
bool check_eye() BANKING_CTRL;
void tgl_fen0() BANKING_CTRL;
void tgl_fen_vref() BANKING_CTRL;
void dfe_reset_f2() BANKING_CTRL;
void dfe_prot_f2(uint8_t type) BANKING_CTRL;
uint8_t dfe_chk_sign_f2(uint8_t top, uint8_t mid, uint8_t bot) BANKING_CTRL;
void dc_vref_adj() BANKING_CTRL;


// -- CDS Status declaration
typedef struct {

    // -- o 
    uint8_t dc_s_mid_o,       dc_d_mid_o,       dc_s_top_o, dc_d_top_o;
    uint8_t f0_s_top_o,       f0_d_top_o,       dc_s_bot_o, dc_d_bot_o;
    uint8_t f0_s_bot_o,       f0_d_bot_o,       f0_s_mid_o, f0_d_mid_o;
    uint8_t f1_s_mid_o,       f1_d_mid_o,       f1_s_top_o, f1_d_top_o;
    uint8_t f1_tune_bot_sd_o, f1_tune_top_sd_o, f1_s_bot_o, f1_d_bot_o;
    uint8_t f2_s_mid_o,       f2_d_mid_o,       f2_s_top_o, f2_d_top_o;
    uint8_t f3_mid_o,         f3_top_o,         f2_s_bot_o, f2_d_bot_o;
    uint8_t f4_bot_o,         f4_mid_o,         f4_top_o,   f3_bot_o;
    uint8_t f6_lsb_o,         f6_msb_o,         f5_lsb_o,   f5_msb_o;
    uint8_t f8_lsb_o,         f8_msb_o,         f7_lsb_o,   f7_msb_o;
    uint8_t f10_lsb_o,        f10_msb_o,        f9_lsb_o,   f9_msb_o;
    uint8_t f14_o,            f13_o,            f12_o,      f11_o;
    uint8_t ff2_o,            ff1_o,            ff0_o,      f15_o;
    uint8_t vref_top_o,       ff5_o,            ff4_o,      ff3_o;
    uint8_t dc_e_o,           f1p5_o,           vref_bot_o, vref_mid_o;

    // -- e 
    uint8_t dc_s_mid_e,       dc_d_mid_e,       dc_s_top_e, dc_d_top_e;
    uint8_t f0_s_top_e,       f0_d_top_e,       dc_s_bot_e, dc_d_bot_e;
    uint8_t f0_s_bot_e,       f0_d_bot_e,       f0_s_mid_e, f0_d_mid_e;
    uint8_t f1_s_mid_e,       f1_d_mid_e,       f1_s_top_e, f1_d_top_e;
    uint8_t f1_tune_bot_sd_e, f1_tune_top_sd_e, f1_s_bot_e, f1_d_bot_e;
    uint8_t f2_s_mid_e,       f2_d_mid_e,       f2_s_top_e, f2_d_top_e;
    uint8_t f3_mid_e,         f3_top_e,         f2_s_bot_e, f2_d_bot_e;
    uint8_t f4_bot_e,         f4_mid_e,         f4_top_e,   f3_bot_e;
    uint8_t f6_lsb_e,         f6_msb_e,         f5_lsb_e,   f5_msb_e;
    uint8_t f8_lsb_e,         f8_msb_e,         f7_lsb_e,   f7_msb_e;
    uint8_t f10_lsb_e,        f10_msb_e,        f9_lsb_e,   f9_msb_e;
    uint8_t f14_e,            f13_e,            f12_e,      f11_e;
    uint8_t ff2_e,            ff1_e,            ff0_e,      f15_e;
    uint8_t vref_top_e,       ff5_e,            ff4_e,      ff3_e;
    uint8_t dc_e_e,           f1p5_e,           vref_bot_e, vref_mid_e;

} dfe_sm_t; // SM tap values 120Byte

typedef struct {

    // -- o 
    int8_t dc_s_mid_o, dc_d_mid_o, dc_s_top_o, dc_d_top_o;
    int8_t f0_s_top_o, f0_d_top_o, dc_s_bot_o, dc_d_bot_o;
    int8_t f0_s_bot_o, f0_d_bot_o, f0_s_mid_o, f0_d_mid_o;
    int8_t f1_s_mid_o, f1_d_mid_o, f1_s_top_o, f1_d_top_o;
    int8_t f2_s_top_o, f2_d_top_o, f1_s_bot_o, f1_d_bot_o;
    int8_t f2_s_bot_o, f2_d_bot_o, f2_s_mid_o, f2_d_mid_o;
    int8_t f4_top_o,   f3_bot_o,   f3_mid_o,   f3_top_o;
    int8_t f5_lsb_o,   f5_msb_o,   f4_bot_o,   f4_mid_o;
    int8_t f7_lsb_o,   f7_msb_o,   f6_lsb_o,   f6_msb_o;
    int8_t f9_lsb_o,   f9_msb_o,   f8_lsb_o,   f8_msb_o;
    int8_t f12_o,      f11_o,      f10_lsb_o,  f10_msb_o;
    int8_t ff0_o,      f15_o,      f14_o,      f13_o;
    int8_t ff4_o,      ff3_o,      ff2_o,      ff1_o;
    int8_t vref_bot_o, vref_mid_o, vref_top_o, ff5_o;
    int8_t rsvd380,    rsvd381,    dc_e_o,     f1p5_o;

    // -- e 
    int8_t dc_s_mid_e, dc_d_mid_e, dc_s_top_e, dc_d_top_e;
    int8_t f0_s_top_e, f0_d_top_e, dc_s_bot_e, dc_d_bot_e;
    int8_t f0_s_bot_e, f0_d_bot_e, f0_s_mid_e, f0_d_mid_e;
    int8_t f1_s_mid_e, f1_d_mid_e, f1_s_top_e, f1_d_top_e;
    int8_t f2_s_top_e, f2_d_top_e, f1_s_bot_e, f1_d_bot_e;
    int8_t f2_s_bot_e, f2_d_bot_e, f2_s_mid_e, f2_d_mid_e;
    int8_t f4_top_e,   f3_bot_e,   f3_mid_e,   f3_top_e;
    int8_t f5_lsb_e,   f5_msb_e,   f4_bot_e,   f4_mid_e;
    int8_t f7_lsb_e,   f7_msb_e,   f6_lsb_e,   f6_msb_e;
    int8_t f9_lsb_e,   f9_msb_e,   f8_lsb_e,   f8_msb_e;
    int8_t f12_e,      f11_e,      f10_lsb_e,  f10_msb_e;
    int8_t ff0_e,      f15_e,      f14_e,      f13_e;
    int8_t ff4_e,      ff3_e,      ff2_e,      ff1_e;
    int8_t vref_bot_e, vref_mid_e, vref_top_e, ff5_e;
    int8_t rsvd382,    rsvd383,    dc_e_e,     f1p5_e;

} dfe_2c_t; // 2C tap values 120Byte

typedef struct {
    // -- pX 
    int8_t dc[NUM_DS][NUM_TMB];   // 6Byte ---------- |
    int8_t f0[NUM_DS][NUM_TMB];   // 6Byte            |
    int8_t f1[NUM_DS][NUM_TMB];   // 6Byte            |
    int8_t f2[NUM_DS][NUM_TMB];   // 6Byte  Don't use. wrong order! Not matched.
    int8_t f3[NUM_TMB];           // 3Byte            | 
    int8_t f4[NUM_TMB];           // 3Byte            |
    int8_t f5[NUM_ML];            // 2Byte ---------- |
    int8_t f7[NUM_ML];            // 2Byte
    int8_t f6[NUM_ML];            // 2Byte
    int8_t f9[NUM_ML];            // 2Byte
    int8_t f8[NUM_ML];            // 2Byte
    int8_t f12;                   // 1Byte
    int8_t f11;                   // 1Byte
    int8_t f10[NUM_ML];           // 2Byte
    int8_t ff0;                   // 1Byte
    int8_t f15;                   // 1Byte
    int8_t f14;                   // 1Byte
    int8_t f13;                   // 1Byte
	int8_t ff4;                   // 1Byte
    int8_t ff3;                   // 1Byte
    int8_t ff2;                   // 1Byte
    int8_t ff1;                   // 1Byte
    int8_t vref[NUM_TMB];         // 3Byte
    int8_t ff5;                   // 1Byte
    int8_t rsvd0, rsvd1, dc_e, f1p5;   // 3Byte
} dfe_2c_path_t; // 2C tap values 60Byte

typedef struct {
    uint8_t d_bot_e;
    uint8_t d_mid_e;
    uint8_t d_top_e;
    uint8_t s_bot_e;
    uint8_t s_mid_e;
    uint8_t s_top_e;
    uint8_t d_bot_o;
    uint8_t d_mid_o;
    uint8_t d_top_o;
    uint8_t s_bot_o;
    uint8_t s_mid_o;
    uint8_t s_top_o;
} dfe_f0_t;

typedef struct {
    dfe_2c_path_t dfe_2c[NUM_PATH]; // 120
    uint8_t f0a[NUM_PATH][NUM_DS][NUM_TMB]; // 12
    uint8_t f0b[NUM_PATH][NUM_DS][NUM_TMB]; // 12
    uint8_t f0k[NUM_PATH][NUM_DS][NUM_TMB]; // 12
    uint8_t f0x[NUM_PATH][NUM_DS][NUM_TMB]; // 12
    uint8_t f0d[NUM_PATH][NUM_DS][NUM_TMB]; // 12
    uint8_t f0d_left[NUM_PATH][NUM_DS][NUM_TMB]; // 12
    uint8_t f0d_right[NUM_PATH][NUM_DS][NUM_TMB]; // 12
    bool eye_check_pass;
    bool f0a_saturate;
    bool vref_saturate;
} Status_CDS_56G_struct_t; // 207
// CDS Return Values

typedef struct {
    dfe_2c_t dfe_2c; // 120
    dfe_f0_t f0a; // 12
    dfe_f0_t f0b; // 12
    dfe_f0_t f0k; // 12
    dfe_f0_t f0x; // 12
    dfe_f0_t f0d; // 12
    dfe_f0_t f0d_left;  // 12
    dfe_f0_t f0d_right; // 12
    bool eye_check_pass;
    bool f0a_saturate;
    bool vref_saturate;
} Status_CDS_56G_flat_t; // 207

typedef union {
    Status_CDS_56G_flat_t f;
    Status_CDS_56G_struct_t s;
} Status_CDS_56G_t; // 207

 __xdata __at(0x6300) Status_CDS_56G_t cds56; // TODO: update addr, start addr of cds in midas
 __xdata __at(0x6500) dfe_sm_t sav_dfe_sm; // TODO: update addr, unused addr in midas

#endif
