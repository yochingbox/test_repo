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
#define tag_PM_PH_ADJ_THRESH    2
#define tag_LOCK_DFE_ON         reg_LOCK_DFE_ON_LANE //0
#define tag_VH_EO_MODE          reg_VH_EO_MODE_LANE //0
#define tag_EO_BASED            reg_EO_BASED_LANE // 0
#define tag_EYE_CHK_THRESH_K    reg_EYE_CHK_THRESH_K_LANE_3_0
#define tag_EYE_CHK_THRESH_C    reg_EYE_CHK_THRESH_C_LANE_3_0
#define tag_EYE_CHK_THRESH_ERR  reg_EYE_CHK_THRESH_ERR_LANE_15_0
#define tag_EYE_CHK_THRESH_VLD  reg_EYE_CHK_THRESH_VLD_LANE_7_0
#define tag_EYE_CHK_DIS         reg_EYE_CHK_DIS_LANE //0
#define tag_EOM_EL_PHASE_DELTA_LEFT 4   
#define tag_EOM_EL_PHASE_DELTA_RIGHT 4  
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


// -- CDS_EN declarations
typedef enum {
    CDS_EN_DEFAULT,
    CDS_EN_DEFAULTPCIE,
    CDS_EN_DFEPLUSDC,
    CDS_EN_MAXEO,
    CDS_EN_PAM2,
    CDS_EN_PAM2_FR,
    CDS_EN_SKIPCDR,
    CDS_EN_EYECHECK,
    CDS_EN_EOMADAPT,
    CDS_EN_DATAADAPT,
    CDS_EN_F0D,
    CDS_EN_RXINIT,
    CDS_EN_FASTACQ
} CDS_EN_t;
extern __code uint32_t cds_table[];


// -- CDS Status declaration
typedef struct {
    // -- Odd
    int8_t dc_s_mid_o,  dc_d_mid_o, dc_s_top_o, dc_d_top_o; // 0x00
    int8_t f0_s_top_o,  f0_d_top_o, dc_s_bot_o, dc_d_bot_o; // 0x04
    int8_t f0_s_bot_o,  f0_d_bot_o, f0_s_mid_o, f0_d_mid_o; // 0x08
    int8_t f1_s_mid_o,  f1_d_mid_o, f1_s_top_o, f1_d_top_o; // 0x0c
    int8_t f2_s_top_o,  f2_d_top_o, f1_s_bot_o, f1_d_bot_o; // 0x10
    int8_t f2_s_bot_o,  f2_d_bot_o, f2_s_mid_o, f2_d_mid_o; // 0x14
    int8_t f4_top_o,    f3_bot_o,   f3_mid_o,   f3_top_o;   // 0x18
    int8_t f5_lsb_o,    f5_msb_o,   f4_bot_o,   f4_mid_o;   // 0x1c
    int8_t f7_lsb_o,    f7_msb_o,   f6_lsb_o,   f6_msb_o;   // 0x20
    int8_t f9_lsb_o,    f9_msb_o,   f8_lsb_o,   f8_msb_o;   // 0x24
    int8_t f12_o,       f11_o,      f10_lsb_o,  f10_msb_o;  // 0x28
    int8_t ff0_o,       f15_o,      f14_o,      f13_o;      // 0x2c
    int8_t ff4_o,       ff3_o,      ff2_o,      ff1_o;      // 0x30
    int8_t vref_bot_o,  vref_mid_o, vref_top_o, ff5_o;      // 0x34
    int8_t rsvd380_o,   rsvd381_o,  dc_e_o,     f1p5_o;     // 0x38
    // -- Even
    int8_t dc_s_mid_e,  dc_d_mid_e, dc_s_top_e, dc_d_top_e;
    int8_t f0_s_top_e,  f0_d_top_e, dc_s_bot_e, dc_d_bot_e;
    int8_t f0_s_bot_e,  f0_d_bot_e, f0_s_mid_e, f0_d_mid_e;
    int8_t f1_s_mid_e,  f1_d_mid_e, f1_s_top_e, f1_d_top_e;
    int8_t f2_s_top_e,  f2_d_top_e, f1_s_bot_e, f1_d_bot_e;
    int8_t f2_s_bot_e,  f2_d_bot_e, f2_s_mid_e, f2_d_mid_e;
    int8_t f4_top_e,    f3_bot_e,   f3_mid_e,   f3_top_e;  
    int8_t f5_lsb_e,    f5_msb_e,   f4_bot_e,   f4_mid_e;  
    int8_t f7_lsb_e,    f7_msb_e,   f6_lsb_e,   f6_msb_e;  
    int8_t f9_lsb_e,    f9_msb_e,   f8_lsb_e,   f8_msb_e;  
    int8_t f12_e,       f11_e,      f10_lsb_e,  f10_msb_e; 
    int8_t ff0_e,       f15_e,      f14_e,      f13_e;     
    int8_t ff4_e,       ff3_e,      ff2_e,      ff1_e;     
    int8_t vref_bot_e,  vref_mid_e, vref_top_e, ff5_e;     
    int8_t rsvd380_e,   rsvd381_e,  dc_e_e,     f1p5_e;    
} dfe_2c_t; // 2C tap values 120Byte

typedef struct {
    // -- Odd
   uint8_t dc_s_mid_o,  dc_d_mid_o, dc_s_top_o, dc_d_top_o; // 0xf8
   uint8_t f0_s_top_o,  f0_d_top_o, dc_s_bot_o, dc_d_bot_o; // 0xfc
   uint8_t f0_s_bot_o,  f0_d_bot_o, f0_s_mid_o, f0_d_mid_o; // 0x100
   uint8_t f1_s_mid_o,  f1_d_mid_o, f1_s_top_o, f1_d_top_o; // 0x104
   uint8_t f1_tune_bot_o, f1_tune_top_o;    // [D,S]
   uint8_t f1_s_bot_o,  f1_d_bot_o;                         // 0x108
   uint8_t f2_s_mid_o,  f2_d_mid_o, f2_s_top_o, f2_d_top_o; // 0x10c
   uint8_t f3_mid_o,    f3_top_o,   f2_s_bot_o, f2_d_bot_o; // 0x110
   uint8_t f4_bot_o,    f4_mid_o,   f4_top_o,   f3_bot_o;   // 0x114
   uint8_t f6_lsb_o,    f6_msb_o,   f5_lsb_o,   f5_msb_o;   // 0x118
   uint8_t f8_lsb_o,    f8_msb_o,   f7_lsb_o,   f7_msb_o;   // 0x11c
   uint8_t f10_lsb_o,   f10_msb_o,  f9_lsb_o,   f9_msb_o;   // 0x120
   uint8_t f14_o,       f13_o,      f12_o,      f11_o;      // 0x124
   uint8_t ff2_o,       ff1_o,      ff0_o,      f15_o;      // 0x128
   uint8_t vref_top_o,  ff5_o,      ff4_o,      ff3_o;      // 0x12c
   uint8_t dc_e_o,      f1p5_o,     vref_bot_o, vref_mid_o; // 0x130
    // -- Even
   uint8_t dc_s_mid_e,  dc_d_mid_e, dc_s_top_e, dc_d_top_e;
   uint8_t f0_s_top_e,  f0_d_top_e, dc_s_bot_e, dc_d_bot_e;
   uint8_t f0_s_bot_e,  f0_d_bot_e, f0_s_mid_e, f0_d_mid_e;
   uint8_t f1_s_mid_e,  f1_d_mid_e, f1_s_top_e, f1_d_top_e;
   uint8_t f1_tune_bot_e, f1_tune_top_e;    // [D,S]
   uint8_t f1_s_bot_e,  f1_d_bot_e;                        
   uint8_t f2_s_mid_e,  f2_d_mid_e, f2_s_top_e, f2_d_top_e;
   uint8_t f3_mid_e,    f3_top_e,   f2_s_bot_e, f2_d_bot_e;
   uint8_t f4_bot_e,    f4_mid_e,   f4_top_e,   f3_bot_e;  
   uint8_t f6_lsb_e,    f6_msb_e,   f5_lsb_e,   f5_msb_e;  
   uint8_t f8_lsb_e,    f8_msb_e,   f7_lsb_e,   f7_msb_e;  
   uint8_t f10_lsb_e,   f10_msb_e,  f9_lsb_e,   f9_msb_e;  
   uint8_t f14_e,       f13_e,      f12_e,      f11_e;     
   uint8_t ff2_e,       ff1_e,      ff0_e,      f15_e;     
   uint8_t vref_top_e,  ff5_e,      ff4_e,      ff3_e;     
   uint8_t dc_e_e,      f1p5_e,     vref_bot_e, vref_mid_e;
} dfe_sm_t; // SM tap values

typedef struct {
    uint8_t d_top_e;
    uint8_t d_mid_e;
    uint8_t d_bot_e;
    uint8_t s_top_e;
    uint8_t s_mid_e;
    uint8_t s_bot_e;
    uint8_t d_top_o;
    uint8_t d_mid_o;
    uint8_t d_bot_o;
    uint8_t s_top_o;
    uint8_t s_mid_o;
    uint8_t s_bot_o;
} dfe_f0_t;
typedef struct {
    dfe_2c_t dfe_2c; // 120
    dfe_f0_t f0a; // 12
    dfe_f0_t f0b; // 12
    dfe_f0_t f0k; // 12
    dfe_f0_t f0d; // 12
    dfe_f0_t f0d_left;  // 12
    dfe_f0_t f0d_right; // 12
    bool eye_check_pass;
    bool f0a_saturate;
    bool vref_saturate;
} Status_CDS_56G_t;
// CDS Return Values

 __xdata __at(0x6100) Status_CDS_56G_t cds56;
 __xdata __at(0x6280) dfe_sm_t sav_dfe_sm;








#endif
