#include "common.h"
#include "driver.h"

#ifdef USE_BANKING
#pragma codeseg BANK1
#endif

#undef _56G_R1P0
// -- Global variables

// -- CDS Variables
__code uint32_t cds_table[]   = {
0x6EEFF,    0x08E9F,    0x2BEBF,    0x3AEBF,    0x4EFC7,    0x4EF87,    0x2AC80,    0x20000,    0x01000,    0x01000,    0x08000,    0x00E87,    0x00487
};

#define reset_en                0x0001
#define dtl_init_en             0x0002
#define dtl_coarse_en           0x0004
#define dfe_init1_en            0x0008
#define dfe_init2_en            0x0010
#define phase_move_with_dfe_en  0x0020 
#define ee_os_adapt_en          0x0040 
#define dfe_adapt_en            0x0080
#define f0a_coarse_en           0x0100
#define dfe_coarse_en           0x0200 
#define dfe_fine_en             0x0400 
#define dfe_accu_en             0x0800 
#define dc_adapt_en             0x1000
#define f0b_adapt_en            0x2000
#define f0k_adapt_en            0x4000
#define f0d_adapt_en            0x8000
#define maxeo_adapt_en          0x10000
#define eye_chk_en              0x20000
#define save_last_en            0x40000


// -- CDS State declaration
typedef enum {
        CDS_ST_INIT            = 0,
        CDS_ST_RESET           = 1,
        CDS_ST_SAVE_RESET      = 2,
        CDS_ST_DTL_INIT        = 3,
        CDS_ST_DTL_COARSE      = 4,
        CDS_ST_DFE_INIT1       = 5,
        CDS_ST_DFE_INIT2       = 6,
        CDS_ST_DFE_PM0         = 7,
        CDS_ST_DFE_PM1         = 8,
        CDS_ST_DFE_PM2         = 9,
        CDS_ST_DFE_PM3         = 10,
        CDS_ST_DFE_PM4         = 11,
        CDS_ST_DFE_EDGE0       = 12,
        CDS_ST_DFE_EDGE1       = 13,
        CDS_ST_DFE_EDGE2       = 14,
        CDS_ST_SAVE_EDGE       = 15,
        CDS_ST_DFE_CONV0       = 16,
        CDS_ST_DFE_F0A1        = 17,
        CDS_ST_DFE_CONV1       = 18,
        CDS_ST_DFE_CONV2       = 19,
        CDS_ST_DFE_CONV3       = 20,
        CDS_ST_SAVE_DFE        = 21,
        CDS_ST_DFE_DC0         = 22,
        CDS_ST_DFE_DC2         = 23,
        CDS_ST_DFE_DC3         = 24,
        CDS_ST_SAVE_DC         = 25,
        CDS_ST_DFE_F0B0        = 26,
        CDS_ST_DFE_F0B2        = 27,
        CDS_ST_DFE_F0B3        = 28,
        CDS_ST_SAVE_F0B        = 29,
        CDS_ST_DFE_F0K0        = 30,
        CDS_ST_DFE_F0K1        = 31,
        CDS_ST_DFE_F0K2        = 32,
        CDS_ST_SAVE_F0K        = 33,
        CDS_ST_DFE_F0D0        = 34,
        CDS_ST_DFE_F0D1        = 35,
        CDS_ST_DFE_F0D2        = 36,
        CDS_ST_DFE_F0D_PM      = 37,
        CDS_ST_SAVE_F0D        = 38,
        CDS_ST_MAXEO0          = 39,
        CDS_ST_MAXEO2          = 40,
        CDS_ST_MAXEO3          = 41,
        CDS_ST_SAVE_MAXEO      = 42,
        CDS_ST_EYECHK0         = 43,
        CDS_ST_EYECHK          = 44,
        CDS_ST_SAVE_EYECHK     = 45,
        CDS_ST_SAVE_LAST       = 46,
        CDS_ST_DONE            = 47
} CDS_STATE_t;

#define CDS_ST reg_CDS_STATE_LANE_7_0
#define CDS_ST_JUMP(name)  {CDS_ST = CDS_ST_ ## name;}



// ===================================================
// LOCAL DECLARATION


// -- Subfunction Arguments
// CDS ERR CODE //
#define CDS_ERR_TIMEOUT_FSM     0x01
#define CDS_ERR_TIMEOUT_CONT    0x02
#define CDS_ERR_F2_FAIL         0x10

// DFE TIMERS //
#ifdef _TEST_CDS_TIMER

#define     Tdtl_init       reg_CDS_TDTL_INIT_LANE_15_0
#define     Tdtl_coarse     reg_CDS_TDTL_COARSE_LANE_15_0
#define     Tdfe_init1      reg_CDS_TDFE_INIT1_LANE_15_0
#define     Tdfe_init2      reg_CDS_TDFE_INIT2_LANE_15_0
#define     Tee_coarse      reg_CDS_TEE_COARSE_LANE_15_0
#define     Tee_fine        reg_CDS_TEE_FINE_LANE_15_0
#define     Tf0_coarse_pm   reg_CDS_TF0_COARSE_PM_LANE_15_0
#define     Tf0_coarse      reg_CDS_TF0_COARSE_LANE_15_0
#define     Tdfe_coarse     reg_CDS_TDFE_COARSE_LANE_15_0
#define     Tdfe_coarse_pm  reg_CDS_TDFE_COARSE_PM_LANE_15_0
#define     Tdfe_fine       reg_CDS_TDFE_FINE_LANE_15_0
#define     Tdfe_accu       reg_CDS_TDFE_ACCU_LANE_15_0
#define     Tf0b_fine       reg_CDS_TF0B_FINE_LANE_15_0
#define     Tf0b_accu       reg_CDS_TF0B_ACCU_LANE_15_0
#define     Tf0k_coarse     reg_CDS_TF0K_COARSE_LANE_15_0
#define     Tf0k_fine       reg_CDS_TF0K_FINE_LANE_15_0
#define     Tf0d_coarse     reg_CDS_TF0D_COARSE_LANE_15_0
#define     Tf0d_fine       reg_CDS_TF0D_FINE_LANE_15_0
#define     Tmaxeo_fine     reg_CDS_TMAXEO_FINE_LANE_15_0
#define     Tmaxeo_accu     reg_CDS_TMAXEO_ACCU_LANE_15_0
#define     Teyechk         reg_CDS_TEYECHK_LANE_15_0
#define     Tdc_fine        reg_CDS_TDC_FINE_LANE_15_0
#define     Tdc_accu        reg_CDS_TDC_ACCU_LANE_15_0

#else

#define     Tdtl_init       0x300
#define     Tdtl_coarse     0x300
#define     Tdfe_init1      0x10ff
#define     Tdfe_init2      0x10ff
#define     Tee_coarse      0xA0f
#define     Tee_fine        0xA0f
#define     Tf0_coarse_pm   0xA01
#define     Tf0_coarse      0xA01
#define     Tdfe_coarse     0x10ff
#define     Tdfe_coarse_pm  0x204
#define     Tdfe_fine       0x10ff
#define     Tdfe_accu       0x10ff
#define     Tf0b_fine       0x802
#define     Tf0b_accu       0x404
#define     Tf0k_coarse     0xA02
#define     Tf0k_fine       0x804
#define     Tf0d_coarse     0xA02
#define     Tf0d_fine       0x804
#define     Tmaxeo_fine     0x302
#define     Tmaxeo_accu     0x204
#define     Teyechk         0xA05
#define     Tdc_fine        0x3FF
#define     Tdc_accu        0x3FF

#endif

#define     Tesm        (drv_ESM_LPNUM1<<8)|drv_ESM_LPNUM0

// DFE UPDATE EN //
#define Update0         0x01
#define Updatevref      0x02
#define Updatedc        0x04
#define Updatefixed     0x08
#define Updatefloat     0x10
#define Updateee        0x20
#define Updatedce       0x40
#define Updatefir       0x80
#define Updatef1t       0x100
#define Updatef2        0x200
#define Updatef310      0x400
#define Updateoff       0

#define Updateisi       Updatefixed | Updatefloat
#define Updateconv      Updatevref | Update0 | Updatefixed | Updatefloat | Updatef2
#define Updateeeos      Updateee | Updatedce
#define Updatetrack     Updatedc | Update0 | Updateisi

// CDS Save //
typedef enum {
    Savf0a      = 0x00,
    Savf0b      = 0x01,
    Savf0d      = 0x02,
    Savf0d_l    = 0x03,
    Savf0d_r    = 0x04,
    Savf0k      = 0x06,
    Savdfe      = 0x10,
    Saveyechk   = 0x11,
    Savdc       = 0x12,
    Saveeos     = 0x13,
    Savvref     = 0x14
} CDS_sav_t;
// DFE Load //
typedef enum {
    Loadext     = 0,
    Loadsav     = 1,
    Loadf0      = 2,
    Loadrst     = 9
} DFE_load_t;

typedef enum {
    PATHall     = 0xf,
    PATHe       = 0x5,
    PATHs       = 0xc,
    PATHse      = 0x4,
    PATHdc      = 0x11 // R1P0 only
} DFE_path_t;

typedef enum {
    FBmmse  = 0,
    FBmaxeo = 1,
    FBf0k   = 2,
    FBall   = 3,
    FBself  = 4
} DFE_fbmd_t;

typedef enum {
    VLDmmse = 0,
    VLDfast = 1,
    VLDmaxeo = 2,
    VLDzero = 3
} DFE_vldmd_t;

typedef enum {
    MODpam4     = 0,
    MODpam2fp   = 1,
    MODpam2lp   = 2
} DFE_mod_t;

void cdr_dfe_scheme_new(uint32_t cds_en) BANKING_CTRL
{
    /* LOCAL VARIABLES*/
    uint8_t f0d_dir;
    uint8_t f0d_updated;
    
    CDS_ST_JUMP(INIT);
        tag_CDS_ERR_CODE = 0;
        set_dfe_vldmd(VLDzero); // TODO

    if(cds_en & reset_en)
    {
    CDS_ST_JUMP(RESET);
        // -- Reset DFE State
        {
        reg_SEL_MU_F_LANE = 0; 
        reg_ANA_RX_SEL_MU_F_LANE = 0; 
        reg_DTL_FLOOP_EN_LANE  = 0;
        reg_RESET_DTL_SYNC_LANE = 1; 
        reg_RESET_DTL_SYNC_LANE = 0; 
        short_delay();
        reg_DTL_FLOOP_EN_LANE  = 1;
        }
        CKCON = 0x07 ; //MCU WAIT time the slowest
        reg_RESET_DFE_LANE = 1;
        reg_RESET_DFE_LANE = 0;
        CKCON = 0x00 ; //MCU WAIT time setting back to normal.
        reg_ANA_REG_DFEE_RST_LANE = 1;
        reg_ANA_REG_DFEO_RST_LANE = 1;
        reg_ANA_REG_DFEE_RST_LANE = 0;
        reg_ANA_REG_DFEO_RST_LANE = 0;

        if(tag_RESET_PH_EN_DTL)
        {
            set_ph_dat(0);
            dfe_load(Loadrst);
        }
        else
        {
            set_ph_dat(drv_PH_OS_DAT);
            dfe_load(Loadsav);
        }
    CDS_ST_JUMP(SAVE_RESET);
        if(tag_DFE_SAVE_EN)
        {
            dfe_save();
            cds_save(Savf0a);
            cds_save(Savdfe);
            cds_save(Savdc);
            cds_save(Savvref);
        }
    }
    if(cds_en & dtl_init_en)
    {
    CDS_ST_JUMP(DTL_INIT);
        reg_ANA_RX_CDR_PATTERN_EN_LANE = 1;
        reg_CDR_PATTERN_INDEX_LANE_1_0 = 0; // MSB
        reg_SEL_MU_F_LANE = 0;
        reg_ANA_RX_SEL_MU_F_LANE = 0;
        dfe_fsm(Tdtl_init, Updateoff);
    }
    if(cds_en & dtl_coarse_en)  
    { 
    CDS_ST_JUMP(DTL_COARSE);
        reg_ANA_RX_CDR_PATTERN_EN_LANE = 1;
        reg_CDR_PATTERN_INDEX_LANE_1_0 = 1; // 3311
        reg_SEL_MU_F_LANE = 0;
        reg_ANA_RX_SEL_MU_F_LANE = 0;
        dfe_fsm(Tdtl_coarse, Updateoff);
    }
    if(cds_en & dfe_init1_en)  
    { 
    CDS_ST_JUMP(DFE_INIT1);
        reg_SEL_MU_F_LANE = 1;
        reg_ANA_RX_SEL_MU_F_LANE = 1;
        reg_DFE_MMSE_MODE_LANE = 1;
        set_dfe_adapt_path(PATHse);
        set_dfe_fbmd(FBmmse);
        set_dfe_vldmd(VLDmmse);
        reg_DFE_VREF_MODE_LANE_1_0 = 1;
        reg_DFE_VREF_COARSE_STEP_EN_LANE = 1;
        dfe_fsm(Tdfe_init1, Updatevref);
        cds_save(Savvref);
    }
    if(cds_en & dfe_init2_en)  
    { 
    CDS_ST_JUMP(DFE_INIT2);
        reg_SEL_MU_F_LANE = 1;
        reg_ANA_RX_SEL_MU_F_LANE = 1;
        reg_DFE_MMSE_MODE_LANE = 1;
        set_dfe_adapt_path(PATHs);
        set_dfe_fbmd(FBmmse);
        set_dfe_vldmd(VLDfast);
        reg_DFE_VREF_MODE_LANE_1_0 = 2;
        reg_DFE_VREF_COARSE_STEP_EN_LANE = 1;
        reg_DFE_F0_COARSE_STEP_EN_LANE = 1;
        dfe_fsm(Tdfe_init2, Updatevref | Update0);
        reg_DFE_VREF_COARSE_STEP_EN_LANE = 0;
        reg_DFE_F0_COARSE_STEP_EN_LANE = 0;
        dfe_fsm(Tdfe_init2, Updatevref | Update0);
        cds_save(Savvref);
    }
    if(cds_en & phase_move_with_dfe_en)
    { 
    CDS_ST_JUMP(DFE_PM0);
        reg_SEL_MU_F_LANE = 1;
        reg_ANA_RX_SEL_MU_F_LANE = 1;
        reg_DFE_MMSE_MODE_LANE = 1;
        reg_DFE_VREF_MODE_LANE_1_0 = 0;
        set_dfe_adapt_path(PATHs);
        set_dfe_fbmd(FBmmse);
        set_dfe_vldmd(VLDmmse);
        reg_DFE_VREF_COARSE_STEP_EN_LANE = 1;
        reg_DFE_F0_COARSE_STEP_EN_LANE = 1;
        reg_DFE_COARSE_STEP_EN_LANE = 1;

        if(cds_en & f0a_coarse_en)
        {CDS_ST_JUMP(DFE_PM1);
            dfe_fsm(Tf0_coarse_pm, Updatevref | Update0);
        }

        timeout_start((uint16_t)10000);
        do {
        CDS_ST_JUMP(DFE_PM2); 
            dfe_fsm(Tdfe_coarse_pm, Updatevref | Update0 | Updatefixed);
            if((int8_t)drv_PH_OS_DAT == (int8_t)cur_ph_dat) break;
        CDS_ST_JUMP(DFE_PM3); 
            if((int8_t)cur_ph_dat < (int8_t)drv_PH_OS_DAT)
                if (((int8_t)drv_PH_OS_DAT - (int8_t)cur_ph_dat)>tag_PM_PH_ADJ_THRESH)
                    set_ph_dat((int8_t)cur_ph_dat + tag_PM_PH_ADJ_THRESH);
                else
                    set_ph_dat(drv_PH_OS_DAT);
            else // cur_ph_dat >= drv_PH_OS_DAT
                if (((int8_t)cur_ph_dat - (int8_t)drv_PH_OS_DAT)>tag_PM_PH_ADJ_THRESH)
                    set_ph_dat((int8_t)cur_ph_dat - tag_PM_PH_ADJ_THRESH);
                else
                    set_ph_dat(drv_PH_OS_DAT);
        } while (1); //(!timeout);
        if(timeout) {
            tag_CDS_ERR_CODE |= 0x2;
            timeout = 0;
        } timeout_stop;
        cds_save(Savf0a);
        cds_save(Savdfe);
        cds_save(Savvref);
    }
    else
    {
    CDS_ST_JUMP(DFE_PM4);
        reg_SEL_MU_F_LANE = 1;
        reg_ANA_RX_SEL_MU_F_LANE = 1;
        set_ph_dat(drv_PH_OS_DAT);
    }
    if(cds_en & ee_os_adapt_en)
    {
    CDS_ST_JUMP(DFE_EDGE0);
        reg_DFE_EE_MODE_LANE = 1;
        reg_SEL_EDGE_EQ_LANE = 1;
        set_dfe_adapt_path(PATHall);
    CDS_ST_JUMP(DFE_EDGE1);
        reg_DFE_COARSE_STEP_EN_LANE = 1;
        dfe_fsm(Tee_coarse, Updateee | Updatedce);
    CDS_ST_JUMP(DFE_EDGE2);
        reg_DFE_COARSE_STEP_EN_LANE = 0;
        dfe_fsm(Tee_fine, Updateee | Updatedce);
    CDS_ST_JUMP(SAVE_EDGE);
        reg_DFE_EE_MODE_LANE = 0;
        reg_SEL_EDGE_EQ_LANE = 0;
        cds_save(Saveeos);
    }
    if(cds_en & dfe_adapt_en)
    { 
    CDS_ST_JUMP(DFE_CONV0);
        reg_DFE_MMSE_MODE_LANE = 1;
        reg_DFE_F0B_MODE_LANE = 0;
        reg_DFE_F0D_MODE_LANE = 0;
        reg_DFE_VREF_MODE_LANE_1_0 = 0;
        if(cds_en & f0a_coarse_en) 
        {
        CDS_ST_JUMP(DFE_F0A1);
            set_dfe_adapt_path(PATHs);
            set_dfe_fbmd(FBmmse);
            set_dfe_vldmd(VLDmmse);
            reg_DFE_VREF_COARSE_STEP_EN_LANE = 1;
            reg_DFE_F0_COARSE_STEP_EN_LANE = 1;
            dfe_fsm(Tf0_coarse, Updatevref | Update0);
        }
        if(cds_en & dfe_coarse_en)
        { 
        CDS_ST_JUMP(DFE_CONV1);
            set_dfe_adapt_path(PATHs);
            set_dfe_fbmd(FBmmse);
            set_dfe_vldmd(VLDmmse);
            reg_DFE_VREF_COARSE_STEP_EN_LANE = 1;
            reg_DFE_F0_COARSE_STEP_EN_LANE = 1;
            reg_DFE_COARSE_STEP_EN_LANE = 1;
            dfe_fsm(Tdfe_coarse, Updateconv);
#ifdef _56G_R1P0
            dfe_prot_f2(0);
#endif
        }
        if(cds_en & dfe_fine_en)
        { 
        CDS_ST_JUMP(DFE_CONV2);
            set_dfe_adapt_path(PATHall);
            set_dfe_fbmd(FBmmse);
            set_dfe_vldmd(VLDmmse);
            reg_DFE_VREF_COARSE_STEP_EN_LANE = 0;
            reg_DFE_VREF_FINE_STEP_EN_LANE = 1;
            reg_DFE_F0_COARSE_STEP_EN_LANE = 0;
            reg_DFE_F0_FINE_STEP_EN_LANE = 1;
            reg_DFE_COARSE_STEP_EN_LANE = 0;
            reg_DFE_FINE_STEP_EN_LANE = 1;
            dfe_fsm(Tdfe_fine, Updateconv);
        }
        if(cds_en & dfe_accu_en)
        { 
        CDS_ST_JUMP(DFE_CONV3); 
            set_dfe_adapt_path(PATHall);
            set_dfe_fbmd(FBmmse);
            set_dfe_vldmd(VLDmmse);
            reg_DFE_VREF_COARSE_STEP_EN_LANE = 0;
            reg_DFE_VREF_FINE_STEP_EN_LANE = 0;
            reg_DFE_F0_COARSE_STEP_EN_LANE = 0;
            reg_DFE_F0_FINE_STEP_EN_LANE = 0;
            reg_DFE_COARSE_STEP_EN_LANE = 0;
            reg_DFE_FINE_STEP_EN_LANE = 0;
            dfe_fsm(Tdfe_accu, Updateconv);
        }
        dfe_save();
        cds_save(Savdfe);
        cds_save(Savf0a);
        cds_save(Savvref);
    }
    if(cds_en & dc_adapt_en)
    {
    CDS_ST_JUMP(DFE_DC0);
        reg_DFE_MMSE_MODE_LANE = 1;
        reg_DFE_F0B_MODE_LANE = 0;
        reg_DFE_F0D_MODE_LANE = 0;
        reg_DFE_VREF_MODE_LANE_1_0 = 0;
#ifdef _56G_R1P0
        set_dfe_adapt_path(PATHdc);
#else
        set_dfe_adapt_path(PATHall);
#endif
        set_dfe_fbmd(FBmmse);
        set_dfe_vldmd(VLDmmse);
        reg_DFE_F0_COARSE_STEP_EN_LANE = 0;
        reg_DFE_COARSE_STEP_EN_LANE = 0;
        reg_DFE_DC_COARSE_STEP_EN_LANE = 0;
        reg_DFE_VREF_COARSE_STEP_EN_LANE = 0;
        //dfe_save();
    CDS_ST_JUMP(DFE_DC2);
        reg_DFE_F0_FINE_STEP_EN_LANE = 1;
        reg_DFE_FINE_STEP_EN_LANE = 1;
        reg_DFE_DC_FINE_STEP_EN_LANE = 1;
        reg_DFE_VREF_FINE_STEP_EN_LANE = 1;
        reg_CDS_F2_DIS_LANE = 0;
        dfe_fsm(Tdc_fine, Updatetrack);
#ifdef _56G_R1P0
        dfe_fsm(Tdc_fine, Updatef2);
        dfe_prot_f2(1);
        if(reg_CDS_F2_DIS_LANE)
        {
            //dfe_load(Loadsav);
            dfe_reset_f2();
            dfe_fsm(Tdc_fine, Updatetrack);
        }
#endif
    CDS_ST_JUMP(DFE_DC3);
        reg_DFE_F0_FINE_STEP_EN_LANE = 0;
        reg_DFE_FINE_STEP_EN_LANE = 0;
        reg_DFE_DC_FINE_STEP_EN_LANE = 0;
        reg_DFE_VREF_FINE_STEP_EN_LANE = 0;
        dfe_fsm(Tdc_accu, Updatetrack);
#ifdef _56G_R1P0
        dfe_fsm(Tdc_accu, Updatef2);
#endif

    CDS_ST_JUMP(SAVE_DC);
        dfe_save();
        cds_save(Savf0a);
        cds_save(Savdfe);
        cds_save(Savdc);
    }
    if(cds_en & f0b_adapt_en)
    {
    CDS_ST_JUMP(DFE_F0B0);
        set_dfe_adapt_path(PATHall);
        set_dfe_fbmd(FBmmse);
        set_dfe_vldmd(VLDmmse);
        reg_DFE_F0B_MODE_LANE = 1;
    CDS_ST_JUMP(DFE_F0B2);
        reg_DFE_F0B_FINE_STEP_EN_LANE = 1;
        dfe_fsm(Tf0b_fine, Update0);

    CDS_ST_JUMP(DFE_F0B3);
        reg_DFE_F0B_FINE_STEP_EN_LANE = 0;
        dfe_fsm(Tf0b_accu, Update0);

        cds_save(Savf0b);
        reg_DFE_F0B_MODE_LANE = 0;
    }
    if(cds_en & f0k_adapt_en)
    {
    CDS_ST_JUMP(DFE_F0K0);
        set_dfe_adapt_path(PATHall);
        set_dfe_fbmd(FBf0k);
        set_dfe_vldmd(VLDmmse);
        reg_DFE_F0K_MODE_LANE = 1;
    CDS_ST_JUMP(DFE_F0K1);
        reg_DFE_F0K_COARSE_STEP_EN_LANE = 1;
        dfe_fsm(Tf0k_coarse, Update0);

    CDS_ST_JUMP(DFE_F0K2);
        reg_DFE_F0K_COARSE_STEP_EN_LANE = 0;
        dfe_fsm(Tf0k_fine, Update0);

        cds_save(Savf0k);
        reg_DFE_F0K_MODE_LANE = 0;
    }
    if(cds_en & f0d_adapt_en)
    {
    CDS_ST_JUMP(DFE_F0D0);
        set_dfe_adapt_path(PATHall);
        if(reg_CDS_F0D_AVG_MODE_LANE)
        {
            set_dfe_fbmd(FBmaxeo);
            set_dfe_vldmd(VLDmaxeo);
        }
        else
        {
            set_dfe_fbmd(FBmmse);
            set_dfe_vldmd(VLDmmse);
        }
        reg_DFE_CLR_FRAC_EN_LANE_1_0 = 0;
        reg_DFE_F0D_MODE_LANE = 1;
        f0d_dir = 0;
        f0d_updated = 0;

        do {
        cds_load_f0(5);
        //dfe_load(Loadf0);
        CDS_ST_JUMP(DFE_F0D1);
            reg_DFE_F0D_COARSE_STEP_EN_LANE = 1;
            dfe_fsm(Tf0d_coarse, Update0);

        CDS_ST_JUMP(DFE_F0D2);
            reg_DFE_F0D_COARSE_STEP_EN_LANE = 0;
            dfe_fsm(Tf0d_fine, Update0);

        CDS_ST_JUMP(SAVE_F0D);

            if( !f0d_updated )
                cds_save(Savf0d);
            else if( f0d_dir == 0 )
                cds_save(Savf0d_l);
            else
                cds_save(Savf0d_r);

        CDS_ST_JUMP(DFE_F0D_PM);
            if(tag_VH_EO_MODE)
            {
                if(!f0d_updated){
                    f0d_updated = 1;
                    set_ph_esm(drv_PH_OS_ESM - tag_EOM_EL_PHASE_DELTA_LEFT);
                }else if(f0d_dir == 0)
                {
                    f0d_dir = 1;
                    set_ph_esm(drv_PH_OS_ESM + tag_EOM_EL_PHASE_DELTA_RIGHT);
                }
                else 
                {
                    set_ph_esm(0);
                    break;
                }
            } else break;
        } while(1);

        reg_DFE_F0D_MODE_LANE = 0;
        reg_DFE_CLR_FRAC_EN_LANE_1_0 = 1;
    }
    if(cds_en & maxeo_adapt_en)
    {
    CDS_ST_JUMP(MAXEO0);
        reg_SEL_MU_F_LANE = 0; 
        reg_ANA_RX_SEL_MU_F_LANE = 0; 
        dfe_load(Loadsav);
        cds_load_f0(2);
        reg_DFE_MMSE_MODE_LANE = 0;
        reg_DFE_F0D_MODE_LANE = 1;
        reg_DFE_VREF_MODE_LANE_1_0 = 0;
        set_dfe_adapt_path(PATHall);
        set_dfe_fbmd(FBmaxeo);
        set_dfe_vldmd(VLDmaxeo);

    CDS_ST_JUMP(MAXEO2);
        reg_DFE_F0_COARSE_STEP_EN_LANE = 0;
        reg_DFE_F0_FINE_STEP_EN_LANE = 1;
        reg_DFE_COARSE_STEP_EN_LANE = 0;
        reg_DFE_FINE_STEP_EN_LANE = 1;
        dfe_fsm(Tmaxeo_fine, Updateconv);

    CDS_ST_JUMP(MAXEO3);
        reg_DFE_F0_COARSE_STEP_EN_LANE = 0;
        reg_DFE_F0_FINE_STEP_EN_LANE = 0;
        reg_DFE_COARSE_STEP_EN_LANE = 0;
    CDS_ST_JUMP(DONE);
        reg_DFE_FINE_STEP_EN_LANE = 0;
        dfe_fsm(Tmaxeo_accu,Updateconv);

        dfe_save();
        cds_save(Savdfe);
        cds_save(Savf0d);
    }
    if(cds_en & eye_chk_en)
    {
    CDS_ST_JUMP(EYECHK0);
        tag_EC_PASS = 0;
        reg_DFE_EC_MODE_LANE = 1;
        dfe_load(Loadsav);
        set_dfe_adapt_path(PATHall);
        reg_EOM_CNT_CLR_LANE = 1;
        reg_EOM_CNT_CLR_LANE = 0;
        if(drv_ESM_EN)
        {
            set_esm_voltage(drv_ESM_VOLTAGE);
        }
        else
        {
            set_esm_voltage(get_ec_voltage());
        }
    CDS_ST_JUMP(EYECHK);
        if(drv_ESM_EN && drv_ESM_READY)
        {
            dfe_fsm(Tesm, Updateoff);
        }
        else
        {
            dfe_fsm(Teyechk, Updateoff);
        }
    CDS_ST_JUMP(SAVE_EYECHK);
        reg_DFE_EC_MODE_LANE = 0;
        tag_EC_PASS = check_eye();
        cds_save(Saveyechk);
    }
    if(cds_en & save_last_en)
    {
    CDS_ST_JUMP(SAVE_LAST);
        dfe_load(Loadsav);
    }
    CDS_ST_JUMP(DONE);
}


/* **************************************************
 * SET_DFE_CONT
 * Args:
 *      on
 *      0: DFE Contunous Off
 *      1: DFE Continous On
 * Inputs:
 *      reg_DFE_ADAPT_CONT_LANE
 * Outputs:
 *      reg_DFE_ADAPT_CONT_LANE
 *      reg_DFE_START_LANE
 */
void set_dfe_cont(bool on) BANKING_CTRL
{
    if(on)
    {
        reg_DFE_UPDATE_EN_LANE_15_0_b0  = 0xff;
        reg_DFE_UPDATE_EN_LANE_15_0_b1  = 0xff;
        reg_DFE_UPDATE_F_EN_LANE_5_0    = 0x3f;
        reg_DFE_UPDATE_DC_EN_LANE       = 1;
        reg_DFE_UPDATE_VREF_EN_LANE     = 0;

        if(reg_CDS_UPDATE_F_DIS_LANE)
            reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;
        
        if(reg_CDS_UPDATE_ODD_DIS_LANE)
        {
            reg_DFE_UPDATE_EN_LANE_15_0_b0 &= 0x55;
            reg_DFE_UPDATE_EN_LANE_15_0_b1 &= 0x55;
        }

        reg_DFE_ADAPT_CONT_LANE = 1;
        //reg_DFE_ADAPT_LPNUM_LANE_9_0_b1 = 0;
        reg_DFE_ADAPT_LPNUM_LANE_9_0_b0 = 0;
        reg_DFE_POL_LPNUM_LANE_9_0_b0 = Tdc_accu;
        reg_DFE_START_LANE = 1;
    }
    else if(reg_DFE_ADAPT_CONT_LANE) // off
    {
        reg_DFE_ADAPT_CONT_LANE = 0;
#if 0
        timeout_start((uint16_t)65000);
        while(!reg_DFE_DONE_LANE && !timeout);
        reg_DFE_START_LANE = 0;
        while(reg_DFE_DONE_LANE && !timeout);
        timeout_stop;
        if(timeout) {
            tag_CDS_ERR_CODE |= CDS_ERR_TIMEOUT_CONT;
            timeout = 0;
        }
#else
        while(!reg_DFE_DONE_LANE)       delay(Tus);
        while(reg_DIG_TEST_BUS_15_0_b1) delay(Tus);
        while(reg_DIG_TEST_BUS_15_0_b1) delay(Tus);
        while(!reg_DFE_UPDATED_LANE)    delay(Tus);
        while(!reg_DFE_UPDATED_LANE)    delay(Tus);
        reg_DFE_START_LANE = 0;
        delay(Tus);
#endif
    }
}


/* **************************************************
 * SET_DFE_ADAPT_PATH
 * Args:
 *      path
 *          PATHall
 *          PATHe
 *          PATHs
 *          PATHse
 * Inputs:
 *      drv_ADAPT_DATA_EN
 *      drv_ADAPT_SLICER_EN
 *      drv_ADAPT_EVEN_EN
 *      drv_ADAPT_ODD_EN
 * Outputs:
 *      reg_DFE_ADAPT_SPLR_EN_LANE_3_0
 */
void set_dfe_adapt_path(uint8_t path)  BANKING_CTRL
{
#ifdef _56G_R1P0
    if(drv_ADAPT_DATA_EN)
        reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0x3;
    if(drv_ADAPT_SLICER_EN)
        reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0xc;
    if(drv_ADAPT_DATA_EN == drv_ADAPT_SLICER_EN)
        reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0xf;

    if(path==PATHdc)
        reg_DFE_FBMD_EO_LANE = 0;
    else
        reg_DFE_FBMD_EO_LANE = 1;
    
    reg_DFE_FBMD_DS_LANE = 0;
    reg_DFE_FBMD_F0_LANE = 0;
    reg_DFE_FBMD_VREF_LANE = 0;
#else
    bool DATA_ON;
    bool SLICER_ON;
    bool EVEN_ON;
    bool ODD_ON;

    bool use_ds;
    bool use_eo;

    use_ds = (drv_ADAPT_DATA_EN != drv_ADAPT_SLICER_EN) ? 1 : 0;
    use_eo = (drv_ADAPT_EVEN_EN != drv_ADAPT_ODD_EN) ? 1 : 0;

    switch(path)
    {
        case PATHall:
            if(use_ds) 
            {
                DATA_ON = drv_ADAPT_DATA_EN ? 1 : 0;
                SLICER_ON = drv_ADAPT_SLICER_EN ? 1: 0;
            }
            else
            {
                DATA_ON = 1;
                SLICER_ON = 1;
            }
            if(use_eo)
            {
                EVEN_ON = drv_ADAPT_EVEN_EN ? 1 : 0;
                ODD_ON = drv_ADAPT_ODD_EN ? 1 : 0;
            }
            else
            {
                EVEN_ON = 1;
                ODD_ON = 1;
            }
            break;
        case PATHs:
            if(use_ds) 
            {
                DATA_ON = drv_ADAPT_DATA_EN ? 1 : 0;
                SLICER_ON = drv_ADAPT_SLICER_EN ? 1: 0;
            }
            else
            {
                DATA_ON = 0;
                SLICER_ON = 1;
            }
            if(use_eo)
            {
                EVEN_ON = drv_ADAPT_EVEN_EN ? 1 : 0;
                ODD_ON = drv_ADAPT_ODD_EN ? 1 : 0;
            }
            else
            {
                EVEN_ON = 1;
                ODD_ON = 1;
            }
            break;
        case PATHe:
            if(use_ds) 
            {
                DATA_ON = drv_ADAPT_DATA_EN ? 1 : 0;
                SLICER_ON = drv_ADAPT_SLICER_EN ? 1: 0;
            }
            else
            {
                DATA_ON = 1;
                SLICER_ON = 1;
            }
            if(use_eo)
            {
                EVEN_ON = drv_ADAPT_EVEN_EN ? 1 : 0;
                ODD_ON = drv_ADAPT_ODD_EN ? 1 : 0;
            }
            else
            {
                EVEN_ON = 1;
                ODD_ON = 0; // Doc wrong
            }
            break;
        case PATHse:
            if(use_ds) 
            {
                DATA_ON = drv_ADAPT_DATA_EN ? 1 : 0;
                SLICER_ON = drv_ADAPT_SLICER_EN ? 1: 0;
            }
            else
            {
                DATA_ON = 0;
                SLICER_ON = 1;
            }
            if(use_eo)
            {
                EVEN_ON = drv_ADAPT_EVEN_EN ? 1 : 0;
                ODD_ON = drv_ADAPT_ODD_EN ? 1 : 0;
            }
            else
            {
                EVEN_ON = 1;
                ODD_ON = 0;
            }
            break;
        default:
            DATA_ON = 1;
            SLICER_ON = 1;
            EVEN_ON = 1;
            ODD_ON = 1;
            break;
    }

    // TODO simplify this logic
    reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0;
    if(DATA_ON && EVEN_ON)   reg_DFE_ADAPT_SPLR_EN_LANE_3_0 |= 1;
    if(DATA_ON && ODD_ON)    reg_DFE_ADAPT_SPLR_EN_LANE_3_0 |= 2;
    if(SLICER_ON && EVEN_ON) reg_DFE_ADAPT_SPLR_EN_LANE_3_0 |= 4;
    if(SLICER_ON && ODD_ON)  reg_DFE_ADAPT_SPLR_EN_LANE_3_0 |= 8;

    reg_DFE_FBMD_DS_LANE = (DATA_ON && SLICER_ON) ? 0 : 1;
    reg_DFE_FBMD_EO_LANE = (EVEN_ON && ODD_ON) ? 0 : (reg_RX_SPEED_DIV_LANE_2_0 ? 0 : 1);

    reg_DFE_ADAPT_SPLR_EN_LANE_3_0 &= ~reg_CDS_ADAPT_SPLR_DIS_LANE_3_0;
#endif
}


/* **************************************************
 * SET_DFE_FBMD
 * Args:
 *      type
 *          FBmmse
 *          FBmaxeo
 *          FBf0k
 *          FBall
 *          FBself
 * Inputs:
 *      reg_DFE_MMSE_MODE_LANE
 *      reg_DFE_ADAPT_SPLR_EN_LANE_3_0
 *      RXEQ_STATE
 * Outputs:
 *      reg_DFE_FBMD_F0_LANE
 *      reg_DFE_FBMD_F1PN_LANE
 *      reg_DFE_FBMD_DATASLICER_LANE
 */
void set_dfe_fbmd(uint8_t type) BANKING_CTRL
{
    //reg_DFE_FBMD_DC_LANE = 0;
    //reg_DFE_FBMD_DCE_LANE = 0;
    //reg_DFE_FBMD_F0K_LANE = 0;
    //reg_DFE_FBMD_F0D_LANE = 0;
    switch(type)
    {
        case FBmmse:
            reg_DFE_FBMD_F0K_LANE = 0;
            reg_DFE_FBMD_F0D_LANE = 0;
            break;
        case FBmaxeo:
            reg_DFE_FBMD_F0K_LANE = 0;
            reg_DFE_FBMD_F0D_LANE = 1;
            break;
        case FBf0k:
            reg_DFE_FBMD_F0K_LANE = 1;
            reg_DFE_FBMD_F0D_LANE = 0;
            break;
        case FBall: 
            reg_DFE_FBMD_F0_LANE = 1;
            reg_DFE_FBMD_VREF_LANE = 1;
            reg_DFE_FBMD_EO_LANE = 1;
            reg_DFE_FBMD_DS_LANE = 1;
            break;
        default: // FBself
            reg_DFE_FBMD_F0_LANE = 0;
            reg_DFE_FBMD_VREF_LANE = 0;
            reg_DFE_FBMD_EO_LANE = 0;
            reg_DFE_FBMD_DS_LANE = 0;
    }
}
/* **************************************************
 * SET_DFE_VLDMD
 * Args:
 *      type
 *      0: MMSE Default Valid Mode
 *      1: MMSE Fast Converge Valid Mode
 *      2: MaxEO Valid Mode
 * Inputs:
 * Outputs:
 *      reg_DFE_TMB_AVG_MODE
 *      reg_DFE_TMB_VLD_MODE
 *      reg_DFE_TMB_VLD_MODE_DC
 *      reg_DFE_TMB_VLD_MODE_F0D
 *      reg_DFE_TMB_VLD_MODE_VREF
 */
void set_dfe_vldmd(uint8_t type) BANKING_CTRL
{
    switch(type)
    {
#if 1 // TODO silicon test
        case VLDmmse:
            reg_DFE_TMB_VLD_MODE_F0D_LANE = 0;
            reg_DFE_TMB_AVG_MODE_LANE = 1;
            reg_DFE_TMB_VLD_MODE_LANE = 0;
            reg_DFE_TMB_VLD_MODE_DC_LANE = 0;
            reg_DFE_TMB_VLD_MODE_VREF_LANE = 0;
            break;
        case VLDfast:
            reg_DFE_TMB_VLD_MODE_F0D_LANE = 0;
            reg_DFE_TMB_AVG_MODE_LANE = 1;
            reg_DFE_TMB_VLD_MODE_LANE = 1;
            reg_DFE_TMB_VLD_MODE_DC_LANE = 0;
            reg_DFE_TMB_VLD_MODE_VREF_LANE = 1;
            break;
        case VLDmaxeo:
            reg_DFE_TMB_VLD_MODE_F0D_LANE = 1;
            reg_DFE_TMB_AVG_MODE_LANE = 1;
            reg_DFE_TMB_VLD_MODE_LANE = 0;
            reg_DFE_TMB_VLD_MODE_DC_LANE = 0;
            reg_DFE_TMB_VLD_MODE_VREF_LANE = 0;
            break;
#endif
        default: // VLDzero
            reg_DFE_TMB_VLD_MODE_F0D_LANE = 0;
            reg_DFE_TMB_AVG_MODE_LANE = 0;
            reg_DFE_TMB_VLD_MODE_LANE = 0;
            reg_DFE_TMB_VLD_MODE_DC_LANE = 0;
            reg_DFE_TMB_VLD_MODE_VREF_LANE = 0;
            break;
    }
}

/* **************************************************
 * CDS_SAVE
 * Args:
 *      type
 *      0: F0A
 *      1: F0B
 *      2: F0D
 *      3: F0D_l
 *      4: F0D_r
 *     10: DFE (everything)
 *     11: eyechk
 *     12: DC
 *     13: EEOS
 */
void cds_save(uint8_t type) BANKING_CTRL
{
    switch(type)
    {
        case Savf0a:
            cds56.f0a.d_top_e = reg_DFE_F0_D_TOP_E_2C_LANE_7_0;
            cds56.f0a.d_mid_e = reg_DFE_F0_D_MID_E_2C_LANE_7_0;
            cds56.f0a.d_bot_e = reg_DFE_F0_D_BOT_E_2C_LANE_7_0;
            cds56.f0a.d_top_o = reg_DFE_F0_D_TOP_O_2C_LANE_7_0;
            cds56.f0a.d_mid_o = reg_DFE_F0_D_MID_O_2C_LANE_7_0;
            cds56.f0a.d_bot_o = reg_DFE_F0_D_BOT_O_2C_LANE_7_0;
            cds56.f0a.s_top_e = reg_DFE_F0_S_TOP_E_2C_LANE_7_0;
            cds56.f0a.s_mid_e = reg_DFE_F0_S_MID_E_2C_LANE_7_0;
            cds56.f0a.s_bot_e = reg_DFE_F0_S_BOT_E_2C_LANE_7_0;
            cds56.f0a.s_top_o = reg_DFE_F0_S_TOP_O_2C_LANE_7_0;
            cds56.f0a.s_mid_o = reg_DFE_F0_S_MID_O_2C_LANE_7_0;
            cds56.f0a.s_bot_o = reg_DFE_F0_S_BOT_O_2C_LANE_7_0;
            cds56.f0a_saturate =  reg_DFE_DLY_SAT_F0_LANE ? 1 : 0;
            cds56.vref_saturate = reg_DFE_DLY_SAT_VREF_LANE ? 1 : 0;
            break;    
        case Savf0b:
            cds56.f0b.d_top_e = reg_DFE_F0_D_TOP_E_2C_LANE_7_0;
            cds56.f0b.d_mid_e = reg_DFE_F0_D_MID_E_2C_LANE_7_0;
            cds56.f0b.d_bot_e = reg_DFE_F0_D_BOT_E_2C_LANE_7_0;
            cds56.f0b.d_top_o = reg_DFE_F0_D_TOP_O_2C_LANE_7_0;
            cds56.f0b.d_mid_o = reg_DFE_F0_D_MID_O_2C_LANE_7_0;
            cds56.f0b.d_bot_o = reg_DFE_F0_D_BOT_O_2C_LANE_7_0;
            cds56.f0b.s_top_e = reg_DFE_F0_S_TOP_E_2C_LANE_7_0;
            cds56.f0b.s_mid_e = reg_DFE_F0_S_MID_E_2C_LANE_7_0;
            cds56.f0b.s_bot_e = reg_DFE_F0_S_BOT_E_2C_LANE_7_0;
            cds56.f0b.s_top_o = reg_DFE_F0_S_TOP_O_2C_LANE_7_0;
            cds56.f0b.s_mid_o = reg_DFE_F0_S_MID_O_2C_LANE_7_0;
            cds56.f0b.s_bot_o = reg_DFE_F0_S_BOT_O_2C_LANE_7_0;
            break;
        case Savf0k:
            cds56.f0k.d_top_e = reg_DFE_F0_D_TOP_E_2C_LANE_7_0;
            cds56.f0k.d_mid_e = reg_DFE_F0_D_MID_E_2C_LANE_7_0;
            cds56.f0k.d_bot_e = reg_DFE_F0_D_BOT_E_2C_LANE_7_0;
            cds56.f0k.d_top_o = reg_DFE_F0_D_TOP_O_2C_LANE_7_0;
            cds56.f0k.d_mid_o = reg_DFE_F0_D_MID_O_2C_LANE_7_0;
            cds56.f0k.d_bot_o = reg_DFE_F0_D_BOT_O_2C_LANE_7_0;
            cds56.f0k.s_top_e = reg_DFE_F0_S_TOP_E_2C_LANE_7_0;
            cds56.f0k.s_mid_e = reg_DFE_F0_S_MID_E_2C_LANE_7_0;
            cds56.f0k.s_bot_e = reg_DFE_F0_S_BOT_E_2C_LANE_7_0;
            cds56.f0k.s_top_o = reg_DFE_F0_S_TOP_O_2C_LANE_7_0;
            cds56.f0k.s_mid_o = reg_DFE_F0_S_MID_O_2C_LANE_7_0;
            cds56.f0k.s_bot_o = reg_DFE_F0_S_BOT_O_2C_LANE_7_0;
            break;
        case Savf0d:
            cds56.f0d.d_top_e = reg_DFE_F0_D_TOP_E_2C_LANE_7_0;
            cds56.f0d.d_mid_e = reg_DFE_F0_D_MID_E_2C_LANE_7_0;
            cds56.f0d.d_bot_e = reg_DFE_F0_D_BOT_E_2C_LANE_7_0;
            cds56.f0d.d_top_o = reg_DFE_F0_D_TOP_O_2C_LANE_7_0;
            cds56.f0d.d_mid_o = reg_DFE_F0_D_MID_O_2C_LANE_7_0;
            cds56.f0d.d_bot_o = reg_DFE_F0_D_BOT_O_2C_LANE_7_0;
            cds56.f0d.s_top_e = reg_DFE_F0_S_TOP_E_2C_LANE_7_0;
            cds56.f0d.s_mid_e = reg_DFE_F0_S_MID_E_2C_LANE_7_0;
            cds56.f0d.s_bot_e = reg_DFE_F0_S_BOT_E_2C_LANE_7_0;
            cds56.f0d.s_top_o = reg_DFE_F0_S_TOP_O_2C_LANE_7_0;
            cds56.f0d.s_mid_o = reg_DFE_F0_S_MID_O_2C_LANE_7_0;
            cds56.f0d.s_bot_o = reg_DFE_F0_S_BOT_O_2C_LANE_7_0;
            break;
        case Savf0d_l:
            cds56.f0d_left.d_top_e = reg_DFE_F0_D_TOP_E_2C_LANE_7_0;
            cds56.f0d_left.d_mid_e = reg_DFE_F0_D_MID_E_2C_LANE_7_0;
            cds56.f0d_left.d_bot_e = reg_DFE_F0_D_BOT_E_2C_LANE_7_0;
            cds56.f0d_left.d_top_o = reg_DFE_F0_D_TOP_O_2C_LANE_7_0;
            cds56.f0d_left.d_mid_o = reg_DFE_F0_D_MID_O_2C_LANE_7_0;
            cds56.f0d_left.d_bot_o = reg_DFE_F0_D_BOT_O_2C_LANE_7_0;
            cds56.f0d_left.s_top_e = reg_DFE_F0_S_TOP_E_2C_LANE_7_0;
            cds56.f0d_left.s_mid_e = reg_DFE_F0_S_MID_E_2C_LANE_7_0;
            cds56.f0d_left.s_bot_e = reg_DFE_F0_S_BOT_E_2C_LANE_7_0;
            cds56.f0d_left.s_top_o = reg_DFE_F0_S_TOP_O_2C_LANE_7_0;
            cds56.f0d_left.s_mid_o = reg_DFE_F0_S_MID_O_2C_LANE_7_0;
            cds56.f0d_left.s_bot_o = reg_DFE_F0_S_BOT_O_2C_LANE_7_0;
            break;
        case Savf0d_r:
            cds56.f0d_right.d_top_e = reg_DFE_F0_D_TOP_E_2C_LANE_7_0;
            cds56.f0d_right.d_mid_e = reg_DFE_F0_D_MID_E_2C_LANE_7_0;
            cds56.f0d_right.d_bot_e = reg_DFE_F0_D_BOT_E_2C_LANE_7_0;
            cds56.f0d_right.d_top_o = reg_DFE_F0_D_TOP_O_2C_LANE_7_0;
            cds56.f0d_right.d_mid_o = reg_DFE_F0_D_MID_O_2C_LANE_7_0;
            cds56.f0d_right.d_bot_o = reg_DFE_F0_D_BOT_O_2C_LANE_7_0;
            cds56.f0d_right.s_top_e = reg_DFE_F0_S_TOP_E_2C_LANE_7_0;
            cds56.f0d_right.s_mid_e = reg_DFE_F0_S_MID_E_2C_LANE_7_0;
            cds56.f0d_right.s_bot_e = reg_DFE_F0_S_BOT_E_2C_LANE_7_0;
            cds56.f0d_right.s_top_o = reg_DFE_F0_S_TOP_O_2C_LANE_7_0;
            cds56.f0d_right.s_mid_o = reg_DFE_F0_S_MID_O_2C_LANE_7_0;
            cds56.f0d_right.s_bot_o = reg_DFE_F0_S_BOT_O_2C_LANE_7_0;
            break;
        case Savdfe:
            // this one copies F0A as well
            memcpy((uint8_t *)&(cds56.dfe_2c), (uint8_t *)&DFE_READ_2C_REG_ODD0, sizeof(dfe_2c_t));
            break;
        case Savdc:
            memcpy((uint8_t *)&(cds56.dfe_2c), (uint8_t *)&DFE_READ_2C_REG_ODD0, 6);
            memcpy((uint8_t *)&(cds56.dfe_2c)+0x3c, (uint8_t *)&DFE_READ_2C_REG_EVEN0, 6);
            break;
        case Saveeos:
            cds56.dfe_2c.f1p5_e = reg_DFE_F1P5_E_2C_LANE_7_0;
            cds56.dfe_2c.f1p5_o = reg_DFE_F1P5_O_2C_LANE_7_0;
            cds56.dfe_2c.dc_e_e = reg_DFE_DC_E_E_2C_LANE_7_0;
            cds56.dfe_2c.dc_e_o = reg_DFE_DC_E_O_2C_LANE_7_0;
            break;
        case Savvref:
            cds56.dfe_2c.vref_top_e = reg_DFE_VREF_TOP_E_2C_LANE_7_0;
            cds56.dfe_2c.vref_mid_e = reg_DFE_VREF_MID_E_2C_LANE_7_0;
            cds56.dfe_2c.vref_bot_e = reg_DFE_VREF_BOT_E_2C_LANE_7_0;
            cds56.dfe_2c.vref_top_o = reg_DFE_VREF_TOP_O_2C_LANE_7_0;
            cds56.dfe_2c.vref_mid_o = reg_DFE_VREF_MID_O_2C_LANE_7_0;
            cds56.dfe_2c.vref_bot_o = reg_DFE_VREF_BOT_O_2C_LANE_7_0;
            break;
        case Saveyechk:
            cds56.eye_check_pass = tag_EC_PASS;
        default: break;
    }
}

/* **************************************************
 * CDS_LOAD_F0
 * Args:
 *      0: F0A
 *      1: F0B
 *      2: F0D
 *      3: F0K
 *      5: Mid
 * Inputs:
 *      cds.f0a
 *      cds.f0d
 * Outputs:
 */
void cds_load_f0(uint8_t type) BANKING_CTRL
{
    switch(type)
    {
        case 0:
            reg_DFE_FEXT0_D_TOP_E_LANE_5_0      = cds56.f0a.d_top_e;
            reg_DFE_FEXT0_D_MID_E_LANE_5_0      = cds56.f0a.d_mid_e;
            reg_DFE_FEXT0_D_BOT_E_LANE_5_0      = cds56.f0a.d_bot_e;
            reg_DFE_FEXT0_D_TOP_O_LANE_5_0      = cds56.f0a.d_top_o;
            reg_DFE_FEXT0_D_MID_O_LANE_5_0      = cds56.f0a.d_mid_o;
            reg_DFE_FEXT0_D_BOT_O_LANE_5_0      = cds56.f0a.d_bot_o;
            reg_DFE_FEXT0_S_TOP_E_LANE_5_0      = cds56.f0a.s_top_e;
            reg_DFE_FEXT0_S_MID_E_LANE_5_0      = cds56.f0a.s_mid_e;
            reg_DFE_FEXT0_S_BOT_E_LANE_5_0      = cds56.f0a.s_bot_e;
            reg_DFE_FEXT0_S_TOP_O_LANE_5_0      = cds56.f0a.s_top_o;
            reg_DFE_FEXT0_S_MID_O_LANE_5_0      = cds56.f0a.s_mid_o;
            reg_DFE_FEXT0_S_BOT_O_LANE_5_0      = cds56.f0a.s_bot_o;
            break;
        case 2:
            reg_DFE_FEXT0_D_TOP_E_LANE_5_0      = cds56.f0d.d_top_e;
            reg_DFE_FEXT0_D_MID_E_LANE_5_0      = cds56.f0d.d_mid_e;
            reg_DFE_FEXT0_D_BOT_E_LANE_5_0      = cds56.f0d.d_bot_e;
            reg_DFE_FEXT0_D_TOP_O_LANE_5_0      = cds56.f0d.d_top_o;
            reg_DFE_FEXT0_D_MID_O_LANE_5_0      = cds56.f0d.d_mid_o;
            reg_DFE_FEXT0_D_BOT_O_LANE_5_0      = cds56.f0d.d_bot_o;
            reg_DFE_FEXT0_S_TOP_E_LANE_5_0      = cds56.f0d.s_top_e;
            reg_DFE_FEXT0_S_MID_E_LANE_5_0      = cds56.f0d.s_mid_e;
            reg_DFE_FEXT0_S_BOT_E_LANE_5_0      = cds56.f0d.s_bot_e;
            reg_DFE_FEXT0_S_TOP_O_LANE_5_0      = cds56.f0d.s_top_o;
            reg_DFE_FEXT0_S_MID_O_LANE_5_0      = cds56.f0d.s_mid_o;
            reg_DFE_FEXT0_S_BOT_O_LANE_5_0      = cds56.f0d.s_bot_o;
            break;
        case 5:
            reg_DFE_FEXT0_D_TOP_E_LANE_5_0      = 32;
            reg_DFE_FEXT0_D_MID_E_LANE_5_0      = 32;
            reg_DFE_FEXT0_D_BOT_E_LANE_5_0      = 32;
            reg_DFE_FEXT0_D_TOP_O_LANE_5_0      = 32;
            reg_DFE_FEXT0_D_MID_O_LANE_5_0      = 32;
            reg_DFE_FEXT0_D_BOT_O_LANE_5_0      = 32;
            reg_DFE_FEXT0_S_TOP_E_LANE_5_0      = 32;
            reg_DFE_FEXT0_S_MID_E_LANE_5_0      = 32;
            reg_DFE_FEXT0_S_BOT_E_LANE_5_0      = 32;
            reg_DFE_FEXT0_S_TOP_O_LANE_5_0      = 32;
            reg_DFE_FEXT0_S_MID_O_LANE_5_0      = 32;
            reg_DFE_FEXT0_S_BOT_O_LANE_5_0      = 32;
            if(reg_DFE_PAM2_LP_MODE_LANE)
            {
            reg_DFE_FEXT0_D_TOP_E_LANE_5_0      = 0;
            reg_DFE_FEXT0_D_BOT_E_LANE_5_0      = 0;
            reg_DFE_FEXT0_D_TOP_O_LANE_5_0      = 0;
            reg_DFE_FEXT0_D_BOT_O_LANE_5_0      = 0;
            reg_DFE_FEXT0_S_TOP_E_LANE_5_0      = 0;
            reg_DFE_FEXT0_S_BOT_E_LANE_5_0      = 0;
            reg_DFE_FEXT0_S_TOP_O_LANE_5_0      = 0;
            reg_DFE_FEXT0_S_BOT_O_LANE_5_0      = 0;
            }
            break;
    }
    tgl_fen0();
    while(!reg_DFE_UPDATED_LANE);
}
/* **************************************************
 * DFE_SAVE
 * Inputs: 
 *      reg_DFE_*_SM
 * Outputs:
 *      sav_dfe_sm
 */
void dfe_save() BANKING_CTRL
{
    memcpy((uint8_t *)&sav_dfe_sm, (uint8_t *)&DFE_READ_SM_REG_ODD0, sizeof(dfe_sm_t));
}
/* **************************************************
 * DFE_LOAD
 *      Load DFE tap values, DFE resolution keep
 * Args:
 *      type
 *      0: EXT
 *      1: SAV
 *      2: F0 Only
 * Inputs:
 *      FEXT
 *      sav_dfe_sm
 *      cds.dfe_res
 * Outputs:
 *      F0
 *      F1+
 *      OFST
 *      DFE_RES*
 */
void dfe_load(uint8_t type) BANKING_CTRL
{
    switch(type)
    {
        case Loadsav:
            memcpy((uint8_t *)&DFE_FEXT_REG_ODD0, (uint8_t *)&sav_dfe_sm, sizeof(dfe_sm_t));
            // skip break to save code size
        case Loadext:
            DFE_FEN_REG_EVEN0.VAL    = 0xffffffff;
            DFE_FEN_REG_EVEN1.VAL    = 0xffffffff;
            DFE_FEN_REG_ODD0.VAL     = 0xffffffff;
            DFE_FEN_REG_ODD1.VAL     = 0xffffffff;
            DFE_FEN_REG_EVEN0.VAL    = 0;
            DFE_FEN_REG_EVEN1.VAL    = 0;
            DFE_FEN_REG_ODD0.VAL     = 0;
            DFE_FEN_REG_ODD1.VAL     = 0;
            break;
        case Loadf0:
            reg_DFE_FEXT0_D_TOP_E_LANE_5_0      = sav_dfe_sm.f0_d_top_e;
            reg_DFE_FEXT0_D_MID_E_LANE_5_0      = sav_dfe_sm.f0_d_mid_e;
            reg_DFE_FEXT0_D_BOT_E_LANE_5_0      = sav_dfe_sm.f0_d_bot_e;
            reg_DFE_FEXT0_D_TOP_O_LANE_5_0      = sav_dfe_sm.f0_d_top_o;
            reg_DFE_FEXT0_D_MID_O_LANE_5_0      = sav_dfe_sm.f0_d_mid_o;
            reg_DFE_FEXT0_D_BOT_O_LANE_5_0      = sav_dfe_sm.f0_d_bot_o;
            reg_DFE_FEXT0_S_TOP_E_LANE_5_0      = sav_dfe_sm.f0_s_top_e;
            reg_DFE_FEXT0_S_MID_E_LANE_5_0      = sav_dfe_sm.f0_s_mid_e;
            reg_DFE_FEXT0_S_BOT_E_LANE_5_0      = sav_dfe_sm.f0_s_bot_e;
            reg_DFE_FEXT0_S_TOP_O_LANE_5_0      = sav_dfe_sm.f0_s_top_o;
            reg_DFE_FEXT0_S_MID_O_LANE_5_0      = sav_dfe_sm.f0_s_mid_o;
            reg_DFE_FEXT0_S_BOT_O_LANE_5_0      = sav_dfe_sm.f0_s_bot_o;
            tgl_fen0();
            break;
        case Loadrst:
            memset0((uint8_t *)&DFE_FEXT_REG_ODD0, sizeof(dfe_sm_t));
            DFE_FEN_REG_EVEN0.VAL    = 0xffffffff;
            DFE_FEN_REG_EVEN1.VAL    = 0xffffffff;
            DFE_FEN_REG_ODD0.VAL     = 0xffffffff;
            DFE_FEN_REG_ODD1.VAL     = 0xffffffff;
            DFE_FEN_REG_EVEN0.VAL    = 0;
            DFE_FEN_REG_EVEN1.VAL    = 0;
            DFE_FEN_REG_ODD0.VAL     = 0;
            DFE_FEN_REG_ODD1.VAL     = 0;
            cds_load_f0(5);
            dc_load(0);
            break;
        default: break;
    }
    while(!reg_DFE_UPDATED_LANE);
}

/* **************************************************
 * DC_LOAD
 * Args:
 *      type
 *      0: Calibration Result
 *      1: Training Saved Result
 * Inputs:
 *      lnx_CAL_OFST_* // 2C
 * 
 * Outputs:
 *      reg_DFE_FEXTDC_*
 *      reg_DFE_FENDC_*
 */
uint8_t ofst_2ctosm6(int8_t ofst) BANKING_CTRL
{
    uint8_t fextdc;
#if 1
    // TODO workaround for sampler cal issue
    ofst = ofst >> 1;
    ofst = -ofst; 
//    if(ofst < 0)
//    {
//        ofst = ofst >> 1;
//    }
//    else
//    {
//        if(ofst & 1)
//            ofst = (ofst >> 1) + 1;
//        else
//            ofst = ofst >> 1;
//    }
#endif
    if(ofst >= 0) fextdc = ofst;
    else {
        fextdc = -ofst;
        fextdc |= 0x20;
    }
    return fextdc;
}
uint8_t ofst_2ctosm7(int8_t ofst) BANKING_CTRL
{
    uint8_t fextdc;
#if 1
    // TODO
    ofst = -ofst;
#endif
    if(ofst >= 0) fextdc = ofst;
    else {
        fextdc = -ofst;
        fextdc |= 0x40;
    }
    return fextdc;
}


void dc_load(uint8_t type) BANKING_CTRL
{
    if(type==0)
    {
        reg_OFST_RES_LANE = lnx_CAL_SAMPLER_RES_LANE_7_0;

        reg_DFE_FEXTDC_D_TOP_E_LANE_5_0 = ofst_2ctosm6(lnx_CAL_OFST_D_TOP_E_LANE_7_0);
        reg_DFE_FEXTDC_D_MID_E_LANE_5_0 = ofst_2ctosm6(lnx_CAL_OFST_D_MID_E_LANE_7_0);
        reg_DFE_FEXTDC_D_BOT_E_LANE_5_0 = ofst_2ctosm6(lnx_CAL_OFST_D_BOT_E_LANE_7_0);

        reg_DFE_FEXTDC_D_TOP_O_LANE_5_0 = ofst_2ctosm6(lnx_CAL_OFST_D_TOP_O_LANE_7_0);
        reg_DFE_FEXTDC_D_MID_O_LANE_5_0 = ofst_2ctosm6(lnx_CAL_OFST_D_MID_O_LANE_7_0);
        reg_DFE_FEXTDC_D_BOT_O_LANE_5_0 = ofst_2ctosm6(lnx_CAL_OFST_D_BOT_O_LANE_7_0);

        reg_DFE_FEXTDC_S_TOP_E_LANE_5_0 = ofst_2ctosm6(lnx_CAL_OFST_S_TOP_E_LANE_7_0);
        reg_DFE_FEXTDC_S_MID_E_LANE_5_0 = ofst_2ctosm6(lnx_CAL_OFST_S_MID_E_LANE_7_0);
        reg_DFE_FEXTDC_S_BOT_E_LANE_5_0 = ofst_2ctosm6(lnx_CAL_OFST_S_BOT_E_LANE_7_0);

        reg_DFE_FEXTDC_S_TOP_O_LANE_5_0 = ofst_2ctosm6(lnx_CAL_OFST_S_TOP_O_LANE_7_0);
        reg_DFE_FEXTDC_S_MID_O_LANE_5_0 = ofst_2ctosm6(lnx_CAL_OFST_S_MID_O_LANE_7_0);
        reg_DFE_FEXTDC_S_BOT_O_LANE_5_0 = ofst_2ctosm6(lnx_CAL_OFST_S_BOT_O_LANE_7_0);

        reg_DFE_FEXTDC_E_E_LANE_6_0 = ofst_2ctosm7(lnx_CAL_OFST_EDGE_E_LANE_7_0);
        reg_DFE_FEXTDC_E_O_LANE_6_0 = ofst_2ctosm7(lnx_CAL_OFST_EDGE_O_LANE_7_0);
    }
    else
    {
        //  load adapted DC values to samplers
        reg_DFE_FEXTDC_D_TOP_E_LANE_5_0 = sav_dfe_sm.dc_d_top_e;
        reg_DFE_FEXTDC_D_MID_E_LANE_5_0 = sav_dfe_sm.dc_d_mid_e;
        reg_DFE_FEXTDC_D_BOT_E_LANE_5_0 = sav_dfe_sm.dc_d_bot_e;

        reg_DFE_FEXTDC_D_TOP_O_LANE_5_0 = sav_dfe_sm.dc_d_top_o;
        reg_DFE_FEXTDC_D_MID_O_LANE_5_0 = sav_dfe_sm.dc_d_mid_o;
        reg_DFE_FEXTDC_D_BOT_O_LANE_5_0 = sav_dfe_sm.dc_d_bot_o;

        reg_DFE_FEXTDC_S_TOP_E_LANE_5_0 = sav_dfe_sm.dc_s_top_e;
        reg_DFE_FEXTDC_S_MID_E_LANE_5_0 = sav_dfe_sm.dc_s_mid_e;
        reg_DFE_FEXTDC_S_BOT_E_LANE_5_0 = sav_dfe_sm.dc_s_bot_e;

        reg_DFE_FEXTDC_S_TOP_O_LANE_5_0 = sav_dfe_sm.dc_s_top_o;
        reg_DFE_FEXTDC_S_MID_O_LANE_5_0 = sav_dfe_sm.dc_s_mid_o;
        reg_DFE_FEXTDC_S_BOT_O_LANE_5_0 = sav_dfe_sm.dc_s_bot_o;

#ifdef _56G_R1P0
        reg_DFE_FEXTDC_E_E_LANE_6_0 = ofst_2ctosm7(lnx_CAL_OFST_EDGE_E_LANE_7_0);
        reg_DFE_FEXTDC_E_O_LANE_6_0 = ofst_2ctosm7(lnx_CAL_OFST_EDGE_O_LANE_7_0);
#else
        reg_DFE_FEXTDC_E_E_LANE_6_0 = sav_dfe_sm.f1p5_e;
        reg_DFE_FEXTDC_E_O_LANE_6_0 = sav_dfe_sm.f1p5_o;
#endif 
    }

    reg_DFE_FENDC_D_E_LANE_2_0 = 7;     reg_DFE_FENDC_D_E_LANE_2_0 = 0;
    reg_DFE_FENDC_D_O_LANE_2_0 = 7;     reg_DFE_FENDC_D_O_LANE_2_0 = 0;
    reg_DFE_FENDC_S_E_LANE_2_0 = 7;     reg_DFE_FENDC_S_E_LANE_2_0 = 0;
    reg_DFE_FENDC_S_O_LANE_2_0 = 7;     reg_DFE_FENDC_S_O_LANE_2_0 = 0;
    reg_DFE_FENDC_E_E_LANE = 1;         reg_DFE_FENDC_E_E_LANE = 0;
    reg_DFE_FENDC_E_O_LANE = 1;         reg_DFE_FENDC_E_O_LANE = 0;

    while(!reg_DFE_UPDATED_LANE);
}


/* **************************************************
 * GET_EC_VOLTAGE
 * Inputs:
 *      F0D
 *      F0A
 *      tag_EO_BASED
 *      tag_EYE_CHK_THRESH_K
 *      tag_EYE_CHK_THRESH_C
 * Return:
 *      f0: eye check voltage
 */
uint8_t get_ec_voltage() BANKING_CTRL
{
    uint8_t f0;
    uint8_t f0_min;
    if(tag_EO_BASED)
    {
        f0_min =            cds56.f0d.d_top_e;
        f0_min = min(f0_min,cds56.f0d.d_mid_e);
        f0_min = min(f0_min,cds56.f0d.d_bot_e);
        f0_min = min(f0_min,cds56.f0d.s_top_e);
        f0_min = min(f0_min,cds56.f0d.s_mid_e);
        f0_min = min(f0_min,cds56.f0d.s_bot_e);
        f0_min = min(f0_min,cds56.f0d.d_top_o);
        f0_min = min(f0_min,cds56.f0d.d_mid_o);
        f0_min = min(f0_min,cds56.f0d.d_bot_o);
        f0_min = min(f0_min,cds56.f0d.s_top_o);
        f0_min = min(f0_min,cds56.f0d.s_mid_o);
        f0_min = min(f0_min,cds56.f0d.s_bot_o);
    }
    else
    {
        f0_min =            cds56.f0a.d_top_e;
        f0_min = min(f0_min,cds56.f0a.d_mid_e);
        f0_min = min(f0_min,cds56.f0a.d_bot_e);
        f0_min = min(f0_min,cds56.f0a.s_top_e);
        f0_min = min(f0_min,cds56.f0a.s_mid_e);
        f0_min = min(f0_min,cds56.f0a.s_bot_e);
        f0_min = min(f0_min,cds56.f0a.d_top_o);
        f0_min = min(f0_min,cds56.f0a.d_mid_o);
        f0_min = min(f0_min,cds56.f0a.d_bot_o);
        f0_min = min(f0_min,cds56.f0a.s_top_o);
        f0_min = min(f0_min,cds56.f0a.s_mid_o);
        f0_min = min(f0_min,cds56.f0a.s_bot_o);
    }
    f0 = (f0_min >> tag_EYE_CHK_THRESH_K) + tag_EYE_CHK_THRESH_C;
    return f0;
}

void set_esm_voltage(uint8_t f0) BANKING_CTRL
{
    if(lnx_ESM_PATH_SEL_LANE) // S // TODO ESM_DFE_ADAPT_SPLR_EN[3:0]
    {
        reg_DFE_FEXT0_D_TOP_E_LANE_5_0 = 0;
        reg_DFE_FEXT0_D_MID_E_LANE_5_0 = 0;
        reg_DFE_FEXT0_D_BOT_E_LANE_5_0 = 0;
        reg_DFE_FEXT0_D_TOP_O_LANE_5_0 = 0;
        reg_DFE_FEXT0_D_MID_O_LANE_5_0 = 0;
        reg_DFE_FEXT0_D_BOT_O_LANE_5_0 = 0;

        reg_DFE_FEXT0_S_TOP_E_LANE_5_0 = f0;
        reg_DFE_FEXT0_S_MID_E_LANE_5_0 = f0;
        reg_DFE_FEXT0_S_BOT_E_LANE_5_0 = f0;
        reg_DFE_FEXT0_S_TOP_O_LANE_5_0 = f0;
        reg_DFE_FEXT0_S_MID_O_LANE_5_0 = f0;
        reg_DFE_FEXT0_S_BOT_O_LANE_5_0 = f0;
    }
    else // D
    {
        reg_DFE_FEXT0_D_TOP_E_LANE_5_0 = f0;
        reg_DFE_FEXT0_D_MID_E_LANE_5_0 = f0;
        reg_DFE_FEXT0_D_BOT_E_LANE_5_0 = f0;
        reg_DFE_FEXT0_D_TOP_O_LANE_5_0 = f0;
        reg_DFE_FEXT0_D_MID_O_LANE_5_0 = f0;
        reg_DFE_FEXT0_D_BOT_O_LANE_5_0 = f0;

        reg_DFE_FEXT0_S_TOP_E_LANE_5_0 = 0;
        reg_DFE_FEXT0_S_MID_E_LANE_5_0 = 0;
        reg_DFE_FEXT0_S_BOT_E_LANE_5_0 = 0;
        reg_DFE_FEXT0_S_TOP_O_LANE_5_0 = 0;
        reg_DFE_FEXT0_S_MID_O_LANE_5_0 = 0;
        reg_DFE_FEXT0_S_BOT_O_LANE_5_0 = 0;
    }

    tgl_fen0();
}

void tgl_fen0() BANKING_CTRL
{
    reg_DFE_FEN0_S_E_LANE_2_0 = 7;      reg_DFE_FEN0_S_E_LANE_2_0 = 0;
    reg_DFE_FEN0_D_E_LANE_2_0_b0 = 1;   reg_DFE_FEN0_D_E_LANE_2_0_b0 = 0;
    reg_DFE_FEN0_D_E_LANE_2_0_b1 = 3;   reg_DFE_FEN0_D_E_LANE_2_0_b1 = 0;

    reg_DFE_FEN0_S_O_LANE_2_0 = 7;      reg_DFE_FEN0_S_O_LANE_2_0 = 0;
    reg_DFE_FEN0_D_O_LANE_2_0_b0 = 1;   reg_DFE_FEN0_D_O_LANE_2_0_b0 = 0;
    reg_DFE_FEN0_D_O_LANE_2_0_b1 = 3;   reg_DFE_FEN0_D_O_LANE_2_0_b1 = 0;
}

/* **************************************************
 * CHECK_EYE
 * Inputs:
 *      reg_EOM_ERR_CNT_P/N_E/O_LANE_31_0_b3/2/1/0
 *      reg_EOM_VLD_CNT_P/N_E/O_LANE_31_0_b3/2/1/0
 *      tag_EYE_CHK_DIS
 * Return:
 *      0: eye check didn't pass
 *      1: eye check pass
 */
uint32_t maxu32(uint32_t a, uint32_t b) BANKING_CTRL
{
    if(a>b) return a;
    else return b;
}
bool check_eye() BANKING_CTRL
{
    uint32_t err_cnt;
    uint32_t pop_cnt;
    if(tag_EYE_CHK_DIS) return 1;
    else
    {
        // TODO optimize for code size
#if 1
        pop_cnt =                EOM_VLD_REG00.VAL;
        pop_cnt = maxu32(pop_cnt,EOM_VLD_REG01.VAL);
        pop_cnt = maxu32(pop_cnt,EOM_VLD_REG02.VAL);
        pop_cnt = maxu32(pop_cnt,EOM_VLD_REG10.VAL);
        pop_cnt = maxu32(pop_cnt,EOM_VLD_REG11.VAL);
        pop_cnt = maxu32(pop_cnt,EOM_VLD_REG12.VAL);
        pop_cnt = maxu32(pop_cnt,EOM_VLD_REG20.VAL);
        pop_cnt = maxu32(pop_cnt,EOM_VLD_REG21.VAL);
        pop_cnt = maxu32(pop_cnt,EOM_VLD_REG22.VAL);
        pop_cnt = maxu32(pop_cnt,EOM_VLD_REG30.VAL);
        pop_cnt = maxu32(pop_cnt,EOM_VLD_REG31.VAL);
        pop_cnt = maxu32(pop_cnt,EOM_VLD_REG32.VAL);
        err_cnt =                EOM_ERR_REG00.VAL;
        err_cnt = maxu32(err_cnt,EOM_ERR_REG01.VAL);
        err_cnt = maxu32(err_cnt,EOM_ERR_REG02.VAL);
        err_cnt = maxu32(err_cnt,EOM_ERR_REG10.VAL);
        err_cnt = maxu32(err_cnt,EOM_ERR_REG11.VAL);
        err_cnt = maxu32(err_cnt,EOM_ERR_REG12.VAL);
        err_cnt = maxu32(err_cnt,EOM_ERR_REG20.VAL);
        err_cnt = maxu32(err_cnt,EOM_ERR_REG21.VAL);
        err_cnt = maxu32(err_cnt,EOM_ERR_REG22.VAL);
        err_cnt = maxu32(err_cnt,EOM_ERR_REG30.VAL);
        err_cnt = maxu32(err_cnt,EOM_ERR_REG31.VAL);
        err_cnt = maxu32(err_cnt,EOM_ERR_REG32.VAL);
#else
        pop_cnt =                EOM_VLD_REG00.VAL;
        err_cnt =                EOM_ERR_REG00.VAL;
#endif
        if(pop_cnt < tag_EYE_CHK_THRESH_VLD) return 0;
        if(err_cnt > tag_EYE_CHK_THRESH_ERR) return 0;
        return 1;
    }
}

/* **************************************************
 * DFE_FSM
 * Args:
 *      lpnum: ADAPT_LPNUM & POL_LPNUM
 *      tap_en
 * Inputs:
 *      tag_LOCK_DFE_ON
 * Outputs:
 *      reg_DFE_UPDATE_EN[15:0]
 *      reg_DFE_UDATE_F_EN[5:0]
 *      reg_DFE_UPDATE_DC_EN
 *      reg_DFE_ADAPT_LPNUM[9:0]
 */
void dfe_fsm(uint16_t lpnum, uint16_t tap_en) BANKING_CTRL
{
    uint8_t adapt_lpnum;
    uint8_t pol_lpnum;
    // dfe_dis
    if(dfe_dis) return;

    adapt_lpnum = lpnum >> 8;
    pol_lpnum = lpnum % 256;

    // fast timer
    if(lnx_FAST_DFE_TIMER_EN_LANE)
    {
        reg_DFE_ADAPT_LPNUM_LANE_9_0_b0 = 0;
        reg_DFE_ADAPT_LPNUM_LANE_9_0_b1 = 0;
        reg_DFE_POL_LPNUM_LANE_9_0_b0 = 0;
        reg_DFE_POL_LPNUM_LANE_9_0_b1 = 0;
    }else{
        reg_DFE_ADAPT_LPNUM_LANE_9_0_b0 = adapt_lpnum;          // 8b
        reg_DFE_ADAPT_LPNUM_LANE_9_0_b1 = adapt_lpnum >> 8;     // 2b
        reg_DFE_POL_LPNUM_LANE_9_0_b0 = pol_lpnum;              // 6b
        reg_DFE_POL_LPNUM_LANE_9_0_b1 = pol_lpnum >> 6;         // 4b
    }

    reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0;
    reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0;
    reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;
    reg_DFE_UPDATE_DC_EN_LANE = 0;
    reg_DFE_UPDATE_VREF_EN_LANE = 0;
    reg_DFE_UPDATE_F1_TUNE_TOP_EN_LANE = 0;
    reg_DFE_UPDATE_F1_TUNE_BOT_EN_LANE = 0;
    reg_DFE_UPDATE_EE_EN_LANE = 0;
    reg_DFE_UPDATE_DCE_EN_LANE = 0;
    reg_DFE_UPDATE_HP1_EN_LANE = 0;
    reg_DFE_UPDATE_HN1_EN_LANE = 0;

    if(tap_en & Update0)        reg_DFE_UPDATE_EN_LANE_15_0_b0 |= 1;
    if(tap_en & Updatevref)     reg_DFE_UPDATE_VREF_EN_LANE = 1;
    if(tap_en & Updatedc)       reg_DFE_UPDATE_DC_EN_LANE = 1;
    if(tap_en & Updatef2)       reg_DFE_UPDATE_EN_LANE_15_0_b0 |= 0x4;
    if(tap_en & Updatef310)     {reg_DFE_UPDATE_EN_LANE_15_0_b0 |= 0xf8; reg_DFE_UPDATE_EN_LANE_15_0_b1 |= 0x7;}
    if(tap_en & Updatefixed)
        if(!tag_LOCK_DFE_ON)    {
                                reg_DFE_UPDATE_EN_LANE_15_0_b0 |= 0xff;
                                reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0xff; 
                                }
    if(tap_en & Updatefloat)
        if(!tag_LOCK_DFE_ON)    
                                reg_DFE_UPDATE_F_EN_LANE_5_0 = 0x3f;
    if(tap_en & Updateee)       reg_DFE_UPDATE_EE_EN_LANE = 1;
    if(tap_en & Updatedce)      reg_DFE_UPDATE_DCE_EN_LANE = 1;
    if(tap_en & Updatefir)      {
                                reg_DFE_UPDATE_HN1_EN_LANE = 1;
                                reg_DFE_UPDATE_HP1_EN_LANE = 1;
                                }
    if(tap_en & Updatef1t)      {
                                reg_DFE_UPDATE_F1_TUNE_TOP_EN_LANE = 1;
                                reg_DFE_UPDATE_F1_TUNE_BOT_EN_LANE = 1;
                                }
    
    if(reg_CDS_UPDATE_F_DIS_LANE)
        reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;
    
    if(reg_CDS_UPDATE_ODD_DIS_LANE)
    {
        reg_DFE_UPDATE_EN_LANE_15_0_b0 &= 0x55;
        reg_DFE_UPDATE_EN_LANE_15_0_b1 &= 0x55;
    }

#ifdef _56G_R1P0
    if(reg_CDS_F2_DIS_LANE)
        reg_DFE_UPDATE_EN_LANE_15_0_b0 &= 0xfb;
#endif

    reg_DFE_START_LANE = 1;
    short_delay();
#if 0
    timeout_start((uint16_t)20000);
    while(!reg_DFE_DONE_LANE && !timeout);
    timeout_stop;
    if(timeout) {
        tag_CDS_ERR_CODE |= CDS_ERR_TIMEOUT_FSM;
        timeout = 0;
    }
    reg_DFE_START_LANE = 0;
#else
    while(!reg_DFE_DONE_LANE);
    reg_DFE_START_LANE = 0;
#endif
    return;
}



/* **************************************************
 * DFE_SPD_INIT
 * Inputs:
 *      reg_RX_SPEED_DIV_LANE_2_0
 * Outputs:
 *      reg_CDS_ADAPT_SPLR_DIS_LANE_3_0
 *      reg_CDS_UPDATE_ODD_DIS_LANE
 *      reg_CDS_UPDATE_F_DIS_LANE
 */
void dfe_spd_init() BANKING_CTRL
{
    // Default: Enable all sampler, disable odd and floating taps
    reg_CDS_ADAPT_SPLR_DIS_LANE_3_0 = 0;
    reg_CDS_UPDATE_ODD_DIS_LANE = 1;
    reg_CDS_UPDATE_F_DIS_LANE = 1;

    switch(reg_RX_SPEED_DIV_LANE_2_0 & 0x3)
    {
        case 3:  // Disable even path adaptation
            reg_CDS_ADAPT_SPLR_DIS_LANE_3_0 = 0x5;
            break;
        case 2:  // Disable odd path adaptation
            reg_CDS_ADAPT_SPLR_DIS_LANE_3_0 = 0xa;
            break;
        case 1:  // Disable even path adaptation
            reg_CDS_ADAPT_SPLR_DIS_LANE_3_0 = 0x5;
            break;
        default: // Half Rate, Enable Odd tap and Floating tap
            reg_CDS_UPDATE_ODD_DIS_LANE = 0;
            reg_CDS_UPDATE_F_DIS_LANE = 0;
            break;
    }
}

/* **************************************************
 * SET_DFE_MOD
 * Inputs:
 *      
 * Outputs:
 *      reg_ANA_RX_CDR_PATTERN_EN_FORCE_LANE
 *      reg_DFE_PAM2_MODE_LANE 
 *      reg_DFE_PAM2_LP_MODE_LANE 
 */
void set_dfe_mod(uint8_t mod) BANKING_CTRL
{
    reg_PU_SMPLR_D_E_LANE_2_0 = 7;
    reg_PU_SMPLR_D_O_LANE_2_0 = 7;
    reg_PU_SMPLR_S_E_LANE_2_0 = 7;
    reg_PU_SMPLR_S_O_LANE_2_0 = 7;

    switch(mod)
    {
        case MODpam4:
            reg_ANA_RX_CDR_PATTERN_EN_FORCE_LANE = 1;
            reg_DFE_PAM2_MODE_LANE = 0;
            reg_DFE_PAM2_LP_MODE_LANE = 0;
            reg_EN_DFE_VREF_LANE = 1;
            reg_DFE_F0_RES_DOUBLE_LANE = 0;
            break;
        case MODpam2fp:
            reg_ANA_RX_CDR_PATTERN_EN_FORCE_LANE = 0;
            reg_DFE_PAM2_MODE_LANE = 1;
            reg_DFE_PAM2_LP_MODE_LANE = 0;
            reg_EN_DFE_VREF_LANE = 0;
            reg_DFE_F0_RES_DOUBLE_LANE = 1;
            break;
        case MODpam2lp:
            reg_ANA_RX_CDR_PATTERN_EN_FORCE_LANE = 0;
            reg_DFE_PAM2_MODE_LANE = 1;
            reg_DFE_PAM2_LP_MODE_LANE = 1;
            reg_EN_DFE_VREF_LANE = 0;
            reg_DFE_F0_RES_DOUBLE_LANE = 1;

            // -- Force Top/Bot Sampler Output
            reg_ANA_RX_DFE_F1_POL_D_LANE_2_0 = 4;
            reg_ANA_RX_DFE_F1_POL_S_LANE_2_0_b0 = 0;
            reg_ANA_RX_DFE_F1_POL_S_LANE_2_0_b1 = 2;

            reg_ANA_RX_DFE_F1_POL_EN_D_E_LANE_2_0 = 5;
            reg_ANA_RX_DFE_F1_POL_EN_D_O_LANE_2_0 = 5;
            reg_ANA_RX_DFE_F1_POL_EN_S_E_LANE_2_0_b0 = 1;
            reg_ANA_RX_DFE_F1_POL_EN_S_E_LANE_2_0_b1 = 1;
            reg_ANA_RX_DFE_F1_POL_EN_S_O_LANE_2_0 = 5;

            reg_ANA_RX_DFE_F1_POL_D_FORCE_LANE = 1;
            reg_ANA_RX_DFE_F1_POL_S_FORCE_LANE = 1;
            DFE_ANA_REG1.BT.B1 = 0xf; // POL1_EN_*_FORCE

            reg_PU_SMPLR_D_E_LANE_2_0 = 2;
            reg_PU_SMPLR_D_O_LANE_2_0 = 2;
            reg_PU_SMPLR_S_E_LANE_2_0 = 2;
            reg_PU_SMPLR_S_O_LANE_2_0 = 2;

            DFE_ANA_REG1.BT.B1 = 0; // POL1_EN_*_FORCE
            reg_ANA_RX_DFE_F1_POL_D_FORCE_LANE = 0;
            reg_ANA_RX_DFE_F1_POL_S_FORCE_LANE = 0;

            break;
    }
}
/* **************************************************
 * SET_DFE_EN
 * Inputs:
 *      en
 *      0: Disable
 *      1: Enable
 * Outputs:
 *      reg_DFE_EN_LANE
 *      reg_DFE_EN_FM_REG_LANE
 *      reg_EN_DFE_F*
 */
void set_dfe_en(uint8_t en) BANKING_CTRL
{
    if(en)
    {
        reg_DFE_EN_FM_REG_LANE = 0;
        reg_DFE_EN_LANE = 1;
        reg_EN_DFE_F1P5_LANE = 1;
        reg_EN_DFE_F1TO2_LANE = 1;
        reg_EN_DFE_F3TO7_LANE = 1;
        reg_EN_DFE_F8TO10_LANE = 1;
        reg_EN_DFE_F11TO15_LANE = 1;
        reg_EN_DFE_FLOATING_LANE = 1;
    }
    else
    {
        reg_DFE_EN_FM_REG_LANE = 1;
        reg_DFE_EN_LANE = 0;
        reg_EN_DFE_F1P5_LANE = 0;
        reg_EN_DFE_F1TO2_LANE = 0;
        reg_EN_DFE_F3TO7_LANE = 0;
        reg_EN_DFE_F8TO10_LANE = 0;
        reg_EN_DFE_F11TO15_LANE = 0;
        reg_EN_DFE_FLOATING_LANE = 0;
    }
}

void dfe_reset_f2() BANKING_CTRL
{
#ifdef _56G_R1P0
    while(!reg_DFE_UPDATED_LANE);

    DFE_FEXT_REG_ODD5.VAL = 0;
    reg_DFE_FEXT2_S_BOT_O_LANE_5_0 = 0;
    reg_DFE_FEXT2_D_BOT_O_LANE_5_0 = 0;
    reg_DFE_FEN2_S_O_LANE_2_0  = 7;     
    reg_DFE_FEN2_D_O_LANE_2_0_b0 = 1;   
    reg_DFE_FEN2_D_O_LANE_2_0_b1 = 3;   
    delay(Tus);
    reg_DFE_FEN2_S_O_LANE_2_0  = 0;
    reg_DFE_FEN2_D_O_LANE_2_0_b0 = 0;
    reg_DFE_FEN2_D_O_LANE_2_0_b1 = 0;

    while(!reg_DFE_UPDATED_LANE);

    DFE_FEXT_REG_EVEN5.VAL = 0;
    reg_DFE_FEXT2_S_BOT_E_LANE_5_0 = 0;
    reg_DFE_FEXT2_D_BOT_E_LANE_5_0 = 0;
    reg_DFE_FEN2_S_E_LANE_2_0  = 7;  
    reg_DFE_FEN2_D_E_LANE_2_0_b0 = 1;
    reg_DFE_FEN2_D_E_LANE_2_0_b1 = 3;
    delay(Tus);
    reg_DFE_FEN2_S_E_LANE_2_0  = 0;
    reg_DFE_FEN2_D_E_LANE_2_0_b0 = 0;
    reg_DFE_FEN2_D_E_LANE_2_0_b1 = 0;

    while(!reg_DFE_UPDATED_LANE);
#endif
}


/* **************************************************
 * DFE_PROT_F2
 * Inputs:
 *      type
 *          0:  Train
 *          1:  Track
 * Outputs:
 * Return:
 *      reg_CDS_F2_DIS_LANE
 */
void dfe_prot_f2(uint8_t type) BANKING_CTRL
{
#ifdef _56G_R1P0
    int8_t f2_max, f2_min;
    int8_t f2_th;
    bool sign_diff;
    uint8_t retry_cnt;
            // F2 Protection
            sign_diff = 0;
            retry_cnt = 0;
//#ifdef R1P0_DEBUGGING
            f2_th = reg_MCU_DEBUG8_LANE_7_0;
//#endif
            do {
                f2_max =                     reg_DFE_F2_D_TOP_E_2C_LANE_7_0;
                f2_min =                     reg_DFE_F2_D_TOP_E_2C_LANE_7_0;
                f2_max = max(f2_max, (int8_t)reg_DFE_F2_D_MID_E_2C_LANE_7_0);
                f2_min = min(f2_min, (int8_t)reg_DFE_F2_D_MID_E_2C_LANE_7_0);
                f2_max = max(f2_max, (int8_t)reg_DFE_F2_D_BOT_E_2C_LANE_7_0);
                f2_min = min(f2_min, (int8_t)reg_DFE_F2_D_BOT_E_2C_LANE_7_0);

                f2_max = max(f2_max, (int8_t)reg_DFE_F2_D_TOP_O_2C_LANE_7_0);
                f2_min = min(f2_min, (int8_t)reg_DFE_F2_D_TOP_O_2C_LANE_7_0);
                f2_max = max(f2_max, (int8_t)reg_DFE_F2_D_MID_O_2C_LANE_7_0);
                f2_min = min(f2_min, (int8_t)reg_DFE_F2_D_MID_O_2C_LANE_7_0);
                f2_max = max(f2_max, (int8_t)reg_DFE_F2_D_BOT_O_2C_LANE_7_0);
                f2_min = min(f2_min, (int8_t)reg_DFE_F2_D_BOT_O_2C_LANE_7_0);

                f2_max = max(f2_max, (int8_t)reg_DFE_F2_S_TOP_E_2C_LANE_7_0);
                f2_min = min(f2_min, (int8_t)reg_DFE_F2_S_TOP_E_2C_LANE_7_0);
                f2_max = max(f2_max, (int8_t)reg_DFE_F2_S_MID_E_2C_LANE_7_0);
                f2_min = min(f2_min, (int8_t)reg_DFE_F2_S_MID_E_2C_LANE_7_0);
                f2_max = max(f2_max, (int8_t)reg_DFE_F2_S_BOT_E_2C_LANE_7_0);
                f2_min = min(f2_min, (int8_t)reg_DFE_F2_S_BOT_E_2C_LANE_7_0);

                f2_max = max(f2_max, (int8_t)reg_DFE_F2_S_TOP_O_2C_LANE_7_0);
                f2_min = min(f2_min, (int8_t)reg_DFE_F2_S_TOP_O_2C_LANE_7_0);
                f2_max = max(f2_max, (int8_t)reg_DFE_F2_S_MID_O_2C_LANE_7_0);
                f2_min = min(f2_min, (int8_t)reg_DFE_F2_S_MID_O_2C_LANE_7_0);
                f2_max = max(f2_max, (int8_t)reg_DFE_F2_S_BOT_O_2C_LANE_7_0);
                f2_min = min(f2_min, (int8_t)reg_DFE_F2_S_BOT_O_2C_LANE_7_0);
//
//                if ((f2_max - f2_min) > 5) 
            sign_diff |= dfe_chk_sign_f2(reg_DFE_F2_D_TOP_E_SM_LANE_5_0, reg_DFE_F2_D_MID_E_SM_LANE_5_0, reg_DFE_F2_D_BOT_E_SM_LANE_5_0);
            sign_diff |= dfe_chk_sign_f2(reg_DFE_F2_D_TOP_O_SM_LANE_5_0, reg_DFE_F2_D_MID_O_SM_LANE_5_0, reg_DFE_F2_D_BOT_O_SM_LANE_5_0);
            sign_diff |= dfe_chk_sign_f2(reg_DFE_F2_S_TOP_E_SM_LANE_5_0, reg_DFE_F2_S_MID_E_SM_LANE_5_0, reg_DFE_F2_S_BOT_E_SM_LANE_5_0);
            sign_diff |= dfe_chk_sign_f2(reg_DFE_F2_S_TOP_O_SM_LANE_5_0, reg_DFE_F2_S_MID_O_SM_LANE_5_0, reg_DFE_F2_S_BOT_O_SM_LANE_5_0);

            if(sign_diff)
            {
                    //dfe_load(Loadsav);
                    dfe_reset_f2();
                    if(type==0) // Train
                        dfe_fsm(Tdfe_coarse, Updatef2);
                    else // Track
                        dfe_fsm(Tdc_fine, Updatef2);

                    retry_cnt ++;
                }else break;
            } while ( retry_cnt < 5 );

            //reg_MCU_DEBUG5_LANE_7_0 = f2_max;
            //reg_MCU_DEBUG6_LANE_7_0 = f2_min;
            //reg_MCU_DEBUG7_LANE_7_0 = sign_diff;
            //reg_MCU_DEBUG8_LANE_7_0 = retry_cnt;

            if(
                ((f2_max < f2_th) && (f2_min > -f2_th))
                || sign_diff
                || ( retry_cnt >= 5)
            )
            {
                reg_CDS_F2_DIS_LANE = 1;
                tag_CDS_ERR_CODE |=  CDS_ERR_F2_FAIL;
                //dfe_reset_f2();
            }
#endif
}
/* **************************************************
 * DFE_CHK_SIGN_F2
 * Inputs:
 *      top/mid/bot: F2 tap value in sign-mag format
 * Return:
 *      0: sign same
 *      1: sign diff
 */
uint8_t dfe_chk_sign_f2(uint8_t top, uint8_t mid, uint8_t bot) BANKING_CTRL
{
#ifdef _56G_R1P0
    if( (top & 0x20) && (mid & 0x20) && (bot & 0x20) ) return 0;
    if( !(top & 0x20) && !(mid & 0x20) && !(bot & 0x20) ) return 0;
#endif
    return 1;
}

void cds_init(void) BANKING_CTRL
{
#ifdef _TEST_CDS_TIMER
    Tdtl_init      = 0x300;
    Tdtl_coarse    = 0x300;
    Tdfe_init1     = 0x10ff;
    Tdfe_init2     = 0x10ff;
    Tee_coarse     = 0xA0f;
    Tee_fine       = 0xA0f;
    Tf0_coarse_pm  = 0xA01;
    Tf0_coarse     = 0xA01;
    Tdfe_coarse    = 0x10ff;
    Tdfe_coarse_pm = 0x204;
    Tdfe_fine      = 0x10ff;
    Tdfe_accu      = 0x10ff;
    Tf0b_fine      = 0x802;
    Tf0b_accu      = 0x404;
    Tf0k_coarse    = 0xA02;
    Tf0k_fine      = 0x804;
    Tf0d_coarse    = 0xA02;
    Tf0d_fine      = 0x804;
    Tmaxeo_fine    = 0x302;
    Tmaxeo_accu    = 0x204;
    Teyechk        = 0xA05;
    Tdc_fine       = 0x3FF;
    Tdc_accu       = 0x3FF;
#endif

    lnx_FAST_DFE_TIMER_EN_LANE = 0;
    reg_RESET_PH_EN_DTL_LANE = 1;
    reg_DFE_SAVE_EN_LANE = 1;
    reg_LOCK_DFE_ON_LANE = 0;
    reg_VH_EO_MODE_LANE = 0;
    reg_EYE_CHK_DIS_LANE = 0;
    reg_CDS_F2_DIS_LANE = 0;
    reg_CDS_F0D_AVG_MODE_LANE = 0;

    tag_EYE_CHK_THRESH_K = 3;
    tag_EYE_CHK_THRESH_C = 2;
    tag_EYE_CHK_THRESH_ERR = 1024L;
    tag_EYE_CHK_THRESH_VLD = 100;

#ifdef _56G_R1P1
    reg_TESTBUS_SEL_HI0_5_0_b0 = 10;
    reg_TESTBUS_SEL_LO0_5_0 = 1;
    reg_TESTBUS_LANE_SEL0_2_0 = 2;
#endif
    return;
}
