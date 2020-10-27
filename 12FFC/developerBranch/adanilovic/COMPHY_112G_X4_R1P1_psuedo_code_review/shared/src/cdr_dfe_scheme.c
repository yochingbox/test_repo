#include "common.h"
#include "driver.h"

#ifdef USE_BANKING
#pragma codeseg BANK1
#pragma constseg BANK1
#endif

// -- Global variables

#define reset_en                0x0001
#define dtl_init_en             0x0002
#define dtl_coarse_en           0x0004
#define alignee_en              0x0008
#define dfe_init1_en            0x0010
#define dfe_init2_en            0x0020
#define phase_move_with_dfe_en  0x0040 
#define ee_os_adapt_en          0x0080 
#define dfe_adapt_en            0x0100
#define f0a_coarse_en           0x0200
#define dfe_coarse_en           0x0400 
#define dfe_fine_en             0x0800 
#define dfe_accu_en             0x1000 
#define dc_adapt_en             0x2000
#define f0b_adapt_en            0x4000
#define f0x_adapt_en            0x8000
#define f0k_adapt_en            0x10000
#define f0d_adapt_en            0x20000
#define maxeo_adapt_en          0x40000
#define maxeo_f0d_load_en       0x80000
#define maxeo_fine_en           0x100000
#define maxeo_accu_en           0x200000
#define eye_chk_en              0x400000
#define save_last_en            0x800000
#define pam2_mask               0x30

// -- CDS Variables
__code uint32_t cds_table[]   = {
   0xC3DFBF, // CDS_EN_DEFAULT,
   0x021D3F, // CDS_EN_DEFAULTPCIE,
   0xC3DDFF, // CDS_EN_DFEPLUSDC,
   0x7E5D7F, // CDS_EN_MAXEO,
   0xC3DF3F, // CDS_EN_PAM4_HR,
   0x83DF8F, // CDS_EN_PAM2_HR,
   0x83DF0F, // CDS_EN_PAM2_FR,
   0x42D900, // CDS_EN_SKIPCDR,
   0x400000, // CDS_EN_EYECHECK,
   0x002000, // CDS_EN_EOMADAPT,
   0x002000, // CDS_EN_DATAADAPT,
   0x020000, // CDS_EN_F0D,
   0x001D0F, // CDS_EN_RXINIT,
   0x00090F, // CDS_EN_FASTACQ,
   0x42CF78, // CDS_EN_PHASETRAIN,
   0xC3DF48, // CDS_EN_PHASETRAIN2,
   0x420F00, // CDS_EN_RESTRAIN,
   0x420F31, // CDS_EN_RECOVER,
   0x420FFF, // CDS_EN_GAINTRAIN,
   0x803F80, // CDS_EN_FINAL,
   0x803FFF, // CDS_EN_DEFAULT_PM,
   0x00F100, // CDS_EN_PHASE_TRAIN_ADV   
   0x00D100, // CDS_EN_RTPCA
};


// -- CDS State declaration
typedef enum {
        CDS_ST_INIT            = 0,
        CDS_ST_RESET           = 1,
        CDS_ST_SAVE_RESET      = 2,
        CDS_ST_DTL_INIT        = 3,
        CDS_ST_DTL_COARSE      = 4,
        CDS_ST_ALIGNEE         = 5,
        CDS_ST_DFE_INIT1       = 6,
        CDS_ST_DFE_INIT2       = 7,
        CDS_ST_DFE_PM0         = 8,
        CDS_ST_DFE_PM1         = 9,
        CDS_ST_DFE_PM2         = 10,
        CDS_ST_DFE_PM3         = 11,
        CDS_ST_DFE_PM4         = 12,
        CDS_ST_DFE_EDGE0       = 13,
        CDS_ST_DFE_EDGE1       = 14,
        CDS_ST_DFE_EDGE2       = 15,
        CDS_ST_SAVE_EDGE       = 16,
        CDS_ST_DFE_CONV0       = 17,
        CDS_ST_DFE_F0A1        = 18,
        CDS_ST_DFE_CONV1       = 19,
        CDS_ST_DFE_CONV2       = 20,
        CDS_ST_DFE_CONV3       = 21,
        CDS_ST_SAVE_DFE        = 22,
        CDS_ST_DFE_DC0         = 23,
        CDS_ST_DFE_DC2         = 24,
        CDS_ST_DFE_DC3         = 25,
        CDS_ST_SAVE_DC         = 26,
        CDS_ST_DFE_F0B0        = 27,
        CDS_ST_DFE_F0B2        = 28,
        CDS_ST_DFE_F0B3        = 29,
        CDS_ST_SAVE_F0B        = 30,
        CDS_ST_DFE_F0X0        = 31,
        CDS_ST_DFE_F0X2        = 32,
        CDS_ST_DFE_F0X3        = 33,
        CDS_ST_SAVE_F0X        = 34,
        CDS_ST_DFE_F0K0        = 35,
        CDS_ST_DFE_F0K1        = 36,
        CDS_ST_DFE_F0K2        = 37,
        CDS_ST_SAVE_F0K        = 38,
        CDS_ST_DFE_F0D0        = 39,
        CDS_ST_DFE_F0D1        = 40,
        CDS_ST_DFE_F0D2        = 41,
        CDS_ST_DFE_F0D_PM      = 42,
        CDS_ST_SAVE_F0D        = 43,
        CDS_ST_MAXEO0          = 44,
        CDS_ST_MAXEO2          = 45,
        CDS_ST_MAXEO3          = 46,
        CDS_ST_SAVE_MAXEO      = 47,
        CDS_ST_EYECHK0         = 48,
        CDS_ST_EYECHK          = 49,
        CDS_ST_SAVE_EYECHK     = 50,
        CDS_ST_SAVE_LAST       = 51,
        CDS_ST_DONE            = 52
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

#define _TEST_CDS_TIMER

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
#define     Tf0x_fine       reg_CDS_TF0X_FINE_LANE_15_0
#define     Tf0x_accu       reg_CDS_TF0X_ACCU_LANE_15_0
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
#define     Tdfe_init1      0x304
#define     Tdfe_init2      0x207
#define     Tee_coarse      0xA0f
#define     Tee_fine        0xA0f
#define     Tf0_coarse_pm   0xA01
#define     Tf0_coarse      0xA01
#define     Tdfe_coarse     0xf07
#define     Tdfe_coarse_pm  0x204
#define     Tdfe_fine       0xf07
#define     Tdfe_accu       0xf07
#define     Tf0b_fine       0x802
#define     Tf0b_accu       0x404
#define     Tf0x_fine       0x802
#define     Tf0x_accu       0x404
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
// Even 0x2005, 0x1808 may cause unstable result
#define		Tui_align		0x2008

// DFE UPDATE EN //
#define Update0         0x01
#define Updatevref      0x02
#define Updatedc        0x04
#define Updatefixed     0x08
#define Updatefloat     0x10
#define Updatedce       0x20
#define Updatefir       0x40
#define Updatef2t       0x80
//#define Updatef2        0x200
//#define Updatef310      0x400
#define Updateoff       0

#define Updateisi       Updatefixed | Updatefloat
#define Updateconv      Updatevref | Update0 | Updatefixed | Updatefloat

// added by JL
// Used by PHASE_TRAIN_ADV
// Disable vref adapting since BER can go bad
#define Updatef0_to_ff6      Update0 | Updatefixed | Updatefloat
//

#define Updatetrack     Updatedc | Update0 | Updateisi

// CDS Save //
typedef enum {
    Savf0a      = 0x00,
    Savf0b      = 0x01,
    Savf0d      = 0x02,
    Savf0d_l    = 0x03,
    Savf0d_r    = 0x04,
    Savf0k      = 0x05,
    Savf0x      = 0x06,
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

// PATH select
typedef enum {
    PATHall     = 0xff, // Quar rate
    PATHp1      = 0x11,
    PATHp2      = 0x22,
    PATHp3      = 0x44,
    PATHp4      = 0x88,
    PATHo       = 0xcc,
    PATHe       = 0x33,
    PATHs       = 0xf0,
    PATHsp4     = 0xa0,
    PATHd       = 0x0f
} DFE_path_t;

// Feed back mode select
typedef enum {
    FBmmse  = 0,
    FBmaxeo = 1,
    FBf0k   = 2,
    FBall   = 3,
    FBself  = 4
} DFE_fbmd_t;

// Valid mode select
typedef enum {
    VLDmmse = 0,
    VLDfast = 1,
    VLDmaxeo = 2,
    VLDzero = 3
} DFE_vldmd_t;

// DFE mode select
typedef enum {
    MODpam4qr   = 0,
    MODpam4hr   = 1,
    MODpam2hr   = 2,
    MODpam2fr   = 3
} DFE_mod_t;

void cdr_dfe_scheme(uint32_t cds_en) BANKING_CTRL
{
    /* LOCAL VARIABLES*/
    uint8_t f0d_dir;
    uint8_t f0d_updated;
    uint8_t f0_res_saved;
    uint8_t cdr_mode_saved;
		// a bitmask is applied to the cds_en parameter in order to disable
		// dfe_init1 and dfe_init2 whenever in PAM2 mode (don't adapt vref)
		cds_en &= ~(pam4_en ? 0 : pam2_mask);
		//DBG_Printf("\r\ncds_en=0x%x%x", cds_en, cds_en << 16);

	if(TRAIN_SIM_EN) return; 

    CDS_ST_JUMP(INIT);
        tag_CDS_ERR_CODE = 0;
        set_dfe_vldmd(VLDzero);

    if(cds_en & reset_en)
    {
    CDS_ST_JUMP(RESET);
        // -- Reset DFE State
        {
        reg_SEL_MU_F_LANE = 0; 
        reg_ANA_RX_SEL_MU_F_LANE = 0; 
        reg_DTL_FLOOP_EN_LANE  = 0;
        reg_RESET_DTL_LANE = 1; 
        reg_RESET_DTL_LANE = 0; 
        short_delay();
        reg_DTL_FLOOP_EN_LANE  = 1;
        }
        CKCON = 0x07 ; //MCU WAIT time the slowest
        reg_RESET_DFE_LANE = 1;
        reg_RESET_DFE_LANE = 0;
        CKCON = 0x00 ; //MCU WAIT time setting back to normal.
        reg_ANA_REG_DFE_RST_LANE = 1;
        reg_ANA_REG_DFE_RST_LANE = 0;

        if(tag_RESET_PH_EN_DTL)
        {
            set_ph_dat(0);
        }
        else
        {
            set_ph_dat(drv_PH_OS_DAT);
        }
        if(tag_RESET_DFE_TAP_MODE)
        {
            dfe_load(Loadsav);
        }
        else
        {
            dfe_load(Loadrst);
        }
    CDS_ST_JUMP(SAVE_RESET);
        if(tag_DFE_SAVE_EN)
        {
    CDS_ST_JUMP(SAVE_DFE);
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
        cdr_mode_saved = reg_CDR_MODE_LANE_2_0;
        reg_CDR_MODE_LANE_2_0 = 0;
        reg_SEL_MU_F_LANE = 0;
        reg_ANA_RX_SEL_MU_F_LANE = 0;
        set_dfe_adapt_path(PATHsp4);
        dfe_fsm(Tdtl_init, Updateoff);
        reg_CDR_MODE_LANE_2_0 = cdr_mode_saved;
    }
    if(cds_en & dtl_coarse_en)  
    { 
    CDS_ST_JUMP(DTL_COARSE);
        reg_SEL_MU_F_LANE = 0;
        reg_ANA_RX_SEL_MU_F_LANE = 0;
        dfe_fsm(Tdtl_coarse, Updateoff);
    }
    if(cds_en & alignee_en)  
    {
    CDS_ST_JUMP(ALIGNEE);
	 align90ee_ref_adapt(0);
    }
    if(cds_en & dfe_init1_en)  
    { 
    CDS_ST_JUMP(DFE_INIT1);
        reg_SEL_MU_F_LANE = 1;
        reg_ANA_RX_SEL_MU_F_LANE = 1;
        reg_DFE_MMSE_MODE_LANE = 1;
        set_dfe_adapt_path(PATHsp4);
        set_dfe_fbmd(FBmmse);
        set_dfe_vldmd(VLDmmse);
        reg_DFE_VREF_MODE_LANE_1_0 = 1;
        reg_DFE_VREF_COARSE_STEP_EN_LANE = 1;
    if (reg_CDS_VREF_VAL_FORCE_LANE) {
        cds_load_vref();
    } else {
        dfe_fsm(Tdfe_init1, Updatevref);
    }
        cds_save(Savvref);
    }
    if(cds_en & dfe_init2_en)  
    { 
    if (!reg_CDS_VREF_VAL_FORCE_LANE) {
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
        cds_save(Savf0a);
        cds_save(Savvref);
	}
    }
    if(cds_en & phase_move_with_dfe_en)
    { 
        CDS_ST_JUMP(DFE_PM0);
        if (tag_DFE_LOAD_EN) {
			dfe_load(Loadsav);
		}
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
          if((int16_t)drv_PH_OS_DAT == (int16_t)cur_ph_dat) break;
        CDS_ST_JUMP(DFE_PM3); 
          if((int16_t)cur_ph_dat < (int16_t)drv_PH_OS_DAT)
              if (((int16_t)drv_PH_OS_DAT - (int16_t)cur_ph_dat)>tag_PM_PH_ADJ_THRESH)
                  set_ph_dat((int16_t)cur_ph_dat + tag_PM_PH_ADJ_THRESH);
              else
                  set_ph_dat(drv_PH_OS_DAT);
          else // cur_ph_dat >= drv_PH_OS_DAT
              if (((int16_t)cur_ph_dat - (int16_t)drv_PH_OS_DAT)>tag_PM_PH_ADJ_THRESH)
                  set_ph_dat((int16_t)cur_ph_dat - tag_PM_PH_ADJ_THRESH);
              else
                  set_ph_dat(drv_PH_OS_DAT);
        } while(1); //(!timeout);
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
        if (bit_performing_phase_train_adv != 1)
        {
            CDS_ST_JUMP(DFE_PM4);
                reg_SEL_MU_F_LANE = 1;
                reg_ANA_RX_SEL_MU_F_LANE = 1;
                set_ph_dat(drv_PH_OS_DAT);
        }    
    }
    if(cds_en & ee_os_adapt_en)
    {
    CDS_ST_JUMP(DFE_EDGE0);
        reg_DFE_EE_MODE_LANE = 1;
        reg_SEL_EDGE_EQ_LANE = 1;
        reg_DFE_VREF_MODE_LANE_1_0 = 0;
        reg_DFE_MMSE_MODE_LANE = 1;
        set_dfe_fbmd(FBmmse);
        set_dfe_vldmd(VLDmmse);
        set_dfe_adapt_path(PATHs);
    CDS_ST_JUMP(DFE_EDGE1);
        reg_DFE_DC_COARSE_STEP_EN_LANE = 1;
        dfe_fsm(Tee_coarse, Updatedce);
    CDS_ST_JUMP(DFE_EDGE2);
        reg_DFE_DC_COARSE_STEP_EN_LANE = 0;
        reg_DFE_DC_FINE_STEP_EN_LANE = 1;
        dfe_fsm(Tee_fine, Updatedce);
    CDS_ST_JUMP(SAVE_EDGE);
        reg_DFE_EE_MODE_LANE = 0;
        reg_SEL_EDGE_EQ_LANE = 0;
        cds_save(Saveeos);
    }
    if(cds_en & dfe_adapt_en)
    { 
    CDS_ST_JUMP(DFE_CONV0);
        if (tag_DFE_LOAD_EN) {
			dfe_load(Loadsav);
		}
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
            dfe_fsm(Tdfe_coarse, Updatevref | Update0 | Updateisi);
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
            // added by JL
            if (bit_performing_phase_train_adv == 1)
                dfe_fsm(Tdfe_fine, Updatef0_to_ff6);
            //            
            else if (reg_CDS_F2T_VAL_FORCE_LANE) {
            dfe_fsm(Tdfe_fine, Updateconv);
	    } else {
            dfe_fsm(Tdfe_fine, Updateconv | Updatef2t);
	    }
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
            // added by JL
            if (bit_performing_phase_train_adv == 1)
                dfe_fsm(Tdfe_fine, Updatef0_to_ff6);
            //  
            else if (reg_CDS_F2T_VAL_FORCE_LANE) {
            dfe_fsm(Tdfe_accu, Updateconv);
	    } else {
            dfe_fsm(Tdfe_accu, Updateconv | Updatef2t);
	    }

        }
        dfe_save();
        cds_save(Savdfe);
        cds_save(Savf0a);
        cds_save(Savvref);
    }
    if(cds_en & dc_adapt_en)
    {
    CDS_ST_JUMP(DFE_DC0);
        if (tag_DFE_LOAD_EN) {
			dfe_load(Loadsav);
		}
        reg_DFE_MMSE_MODE_LANE = 1;
        reg_DFE_F0B_MODE_LANE = 0;
        reg_DFE_F0D_MODE_LANE = 0;
        reg_DFE_VREF_MODE_LANE_1_0 = 0;
        set_dfe_adapt_path(PATHall);
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
        dfe_fsm(Tdc_fine, Updatedc);
    CDS_ST_JUMP(DFE_DC3);
        reg_DFE_F0_FINE_STEP_EN_LANE = 0;
        reg_DFE_FINE_STEP_EN_LANE = 0;
        reg_DFE_DC_FINE_STEP_EN_LANE = 0;
        reg_DFE_VREF_FINE_STEP_EN_LANE = 0;
        dfe_fsm(Tdc_accu, Updatedc);
    CDS_ST_JUMP(SAVE_DC);
        dfe_save();
        cds_save(Savf0a);
        cds_save(Savdfe);
        cds_save(Savdc);
    }
    if(cds_en & f0b_adapt_en)
    {
    CDS_ST_JUMP(DFE_F0B0);
        if (tag_DFE_LOAD_EN) {
			dfe_load(Loadsav);
		}
        set_dfe_adapt_path(PATHall);
        set_dfe_fbmd(FBmmse);
        set_dfe_vldmd(VLDmmse);
        reg_DFE_F0B_MODE_LANE = 1;
    CDS_ST_JUMP(DFE_F0B2);
        reg_DFE_F0B_COARSE_STEP_EN_LANE = 0;
        reg_DFE_F0B_FINE_STEP_EN_LANE = 1;
        dfe_fsm(Tf0b_fine, Update0);

    CDS_ST_JUMP(DFE_F0B3);
        reg_DFE_F0B_FINE_STEP_EN_LANE = 0;
        dfe_fsm(Tf0b_accu, Update0);

    CDS_ST_JUMP(SAVE_F0B);
        cds_save(Savf0b);
        reg_DFE_F0B_MODE_LANE = 0;
    }
    if(cds_en & f0x_adapt_en)
    {
    CDS_ST_JUMP(DFE_F0X0);
        if (tag_DFE_LOAD_EN) {
			dfe_load(Loadsav);
		}
        set_dfe_adapt_path(PATHall);
        set_dfe_fbmd(FBmmse);
        set_dfe_vldmd(VLDmmse);
        reg_DFE_F0X_MODE_LANE = 1;
    CDS_ST_JUMP(DFE_F0X2);
        reg_DFE_F0X_COARSE_STEP_EN_LANE = 0;
        reg_DFE_F0X_FINE_STEP_EN_LANE = 1;
        dfe_fsm(Tf0x_fine, Update0);

    CDS_ST_JUMP(DFE_F0X3);
        reg_DFE_F0X_FINE_STEP_EN_LANE = 0;
        dfe_fsm(Tf0x_accu, Update0);

    CDS_ST_JUMP(SAVE_F0X);
        cds_save(Savf0x);
        reg_DFE_F0X_MODE_LANE = 0;
    }    
    if(cds_en & f0k_adapt_en)
    {
    CDS_ST_JUMP(DFE_F0K0);
        if (tag_DFE_LOAD_EN) {
			dfe_load(Loadsav);
		}
        if (tag_F0DK_RES_CUSTOM_EN) {
			f0_res_saved = reg_DFE_RES_F0_LANE_1_0;
			reg_DFE_RES_F0_LANE_1_0 = tag_F0K_RES_CUSTOM;
		}
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

    CDS_ST_JUMP(SAVE_F0K);
        cds_save(Savf0k);
        reg_DFE_F0K_MODE_LANE = 0;
        if (tag_F0DK_RES_CUSTOM_EN) {
	  reg_DFE_RES_F0_LANE_1_0 = f0_res_saved;
	}
    }
    if(cds_en & f0d_adapt_en)
    {
    CDS_ST_JUMP(DFE_F0D0);
        set_ph_esm(drv_PH_OS_ESM);
        set_dfe_adapt_path(PATHall);
        set_dfe_fbmd(FBmmse);
        set_dfe_vldmd(VLDmmse);
        if (tag_F0DK_RES_CUSTOM_EN) {
		  f0_res_saved = reg_DFE_RES_F0_LANE_1_0;
		  reg_DFE_RES_F0_LANE_1_0 = tag_F0D_RES_CUSTOM;
		}
        reg_DFE_VREF_MODE_LANE_1_0 = 0;
        reg_DFE_CLR_FRAC_EN_LANE_1_0 = 0;
        reg_DFE_F0D_MODE_LANE = 1;
        f0d_dir = 0;
        f0d_updated = 0;

        do {
        cds_load_f0(5);
        if (tag_DFE_LOAD_EN) {
			dfe_load(Loadsav);
		}
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
        if (tag_F0DK_RES_CUSTOM_EN) {
		  reg_DFE_RES_F0_LANE_1_0 = f0_res_saved;
		}
        reg_DFE_CLR_FRAC_EN_LANE_1_0 = 1;
    }
    if(cds_en & maxeo_adapt_en)
    {
    CDS_ST_JUMP(MAXEO0);
        reg_SEL_MU_F_LANE = 1; 
        reg_ANA_RX_SEL_MU_F_LANE = 1; 
        if (tag_DFE_LOAD_EN) {
		    dfe_load(Loadsav);
		}
        if(cds_en & maxeo_f0d_load_en) {
		    cds_load_f0(2);
		}
        reg_DFE_MMSE_MODE_LANE = 0;
        reg_DFE_F0D_MODE_LANE = 1;
        reg_DFE_VREF_MODE_LANE_1_0 = 0;
        set_dfe_adapt_path(PATHall);
        set_dfe_fbmd(FBmaxeo);
        set_dfe_vldmd(VLDmaxeo);

        if(cds_en & maxeo_fine_en) {
    CDS_ST_JUMP(MAXEO2);
        reg_DFE_F0_COARSE_STEP_EN_LANE = 0;
        reg_DFE_F0_FINE_STEP_EN_LANE = 1;
        reg_DFE_COARSE_STEP_EN_LANE = 0;
        reg_DFE_FINE_STEP_EN_LANE = 1;
        reg_DFE_VREF_COARSE_STEP_EN_LANE = 0;
        reg_DFE_VREF_FINE_STEP_EN_LANE = 1;
        reg_DFE_F0D_COARSE_STEP_EN_LANE = 1;
        if (reg_CDS_F2T_VAL_FORCE_LANE) {
        dfe_fsm(Tmaxeo_fine, Updateconv);
	} else {
        dfe_fsm(Tmaxeo_fine, Updateconv | Updatef2t);
	}
	}
        if(cds_en & maxeo_accu_en) {
    CDS_ST_JUMP(MAXEO3);
		    reg_DFE_F0_COARSE_STEP_EN_LANE = 0;
		    reg_DFE_F0_FINE_STEP_EN_LANE = 0;
		    reg_DFE_VREF_COARSE_STEP_EN_LANE = 0;
		    reg_DFE_VREF_FINE_STEP_EN_LANE = 0;
		    reg_DFE_COARSE_STEP_EN_LANE = 0;
		    reg_DFE_FINE_STEP_EN_LANE = 0;
		    reg_DFE_F0D_COARSE_STEP_EN_LANE = 0;
		}
        reg_DFE_FINE_STEP_EN_LANE = 0;
        if (reg_CDS_F2T_VAL_FORCE_LANE) {
        dfe_fsm(Tmaxeo_accu,Updateconv);
	} else {
        dfe_fsm(Tmaxeo_accu,Updateconv | Updatef2t);
	}

    CDS_ST_JUMP(SAVE_MAXEO);
        dfe_save();
        cds_save(Savdfe);
        cds_save(Savf0d);
    }
    if(cds_en & eye_chk_en)
    {
    CDS_ST_JUMP(EYECHK0);
        tag_EC_PASS = 0;
        reg_DFE_EC_MODE_LANE = 1;
        reg_DFE_F0D_MODE_LANE = 0;
        reg_DFE_VREF_MODE_LANE_1_0 = 0;
        reg_DFE_MMSE_MODE_LANE = 0;
        if (tag_DFE_LOAD_EN) {
		    dfe_load(Loadsav);
		}
        set_dfe_adapt_path(PATHall);
        set_dfe_fbmd(FBmmse);
        set_dfe_vldmd(VLDmmse);
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
		if(drv_ESM_EN)// && drv_ESM_READY)
        {
			if(drv_ESM_READY){
				// 0xa05 53G ~42000 valid bits
				dfe_fsm(Tesm, Updateoff);
			}else{
				// 0x2008 53G ~190000 valid bits
				dfe_fsm(Tui_align, Updateoff);
			}
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
        if (tag_DFE_LOAD_EN) {
		    dfe_load(Loadsav);
		}
    }
    CDS_ST_JUMP(DONE);
}

/* **************************************************
 * dc_vref_adj: speparate function for dc_vref adjustment
 */
void dc_vref_adj() BANKING_CTRL
{
    int8_t i;
    uint8_t dcvref_dfe_mmse_mode;
    uint8_t dcvref_dfe_f0b_mode;
    uint8_t dcvref_dfe_f0d_mode;
    uint8_t dcvref_dfe_vref_mode;
    uint8_t dcvref_dfe_adapt_splr_en;
    uint8_t dcvref_dfe_fbmd_ds;
    uint8_t dcvref_dfe_fbmd_eo;
    uint8_t dcvref_dfe_fbmd_f0k;
    uint8_t dcvref_dfe_fbmd_f0d;
    uint8_t dcvref_dfe_tmb_vld_mode_f0d;
    uint8_t dcvref_dfe_cmn_mode_tmb;
    uint8_t dcvref_dfe_tmb_vld_mode_f0;
    uint8_t dcvref_dfe_tmb_vld_mode_f2;
    uint8_t dcvref_dfe_tmb_vld_mode_f3;
    uint8_t dcvref_dfe_tmb_vld_mode_f4;
    uint8_t dcvref_dfe_tmb_vld_mode_dc;
    uint8_t dcvref_dfe_tmb_vld_mode_vref;
    uint8_t dcvref_dfe_adapt_cont;

	//if(reg_VREF_SHIFT_LANE_1_0>1) return;
    //if(reg_RX_PAM2_EN_LANE) return;
    if(lnx_ESM_EN_LANE==1) return;

    // save settings
    dcvref_dfe_mmse_mode         = reg_DFE_MMSE_MODE_LANE         ;
    dcvref_dfe_f0b_mode          = reg_DFE_F0B_MODE_LANE          ;
    dcvref_dfe_f0d_mode          = reg_DFE_F0D_MODE_LANE          ;
    dcvref_dfe_vref_mode         = reg_DFE_VREF_MODE_LANE_1_0     ;
    dcvref_dfe_adapt_splr_en     = reg_DFE_ADAPT_SPLR_EN_LANE_7_0 ;
    dcvref_dfe_fbmd_ds           = reg_DFE_FBMD_DS_LANE           ;
    dcvref_dfe_fbmd_eo           = reg_DFE_FBMD_EO_LANE           ;
    dcvref_dfe_fbmd_f0k          = reg_DFE_FBMD_F0K_LANE          ;
    dcvref_dfe_fbmd_f0d          = reg_DFE_FBMD_F0D_LANE          ;
    dcvref_dfe_tmb_vld_mode_f0d  = reg_DFE_TMB_VLD_MODE_F0D_LANE  ;
    dcvref_dfe_cmn_mode_tmb      = reg_DFE_CMN_MODE_TMB_LANE      ;
    dcvref_dfe_tmb_vld_mode_f0   = reg_DFE_TMB_VLD_MODE_F0_LANE   ;
    dcvref_dfe_tmb_vld_mode_f2   = reg_DFE_TMB_VLD_MODE_F2_LANE   ;
    dcvref_dfe_tmb_vld_mode_f3   = reg_DFE_TMB_VLD_MODE_F3_LANE   ;
    dcvref_dfe_tmb_vld_mode_f4   = reg_DFE_TMB_VLD_MODE_F4_LANE   ;
    dcvref_dfe_tmb_vld_mode_dc   = reg_DFE_TMB_VLD_MODE_DC_LANE   ;
    dcvref_dfe_tmb_vld_mode_vref = reg_DFE_TMB_VLD_MODE_VREF_LANE ;
    dcvref_dfe_adapt_cont        = reg_DFE_ADAPT_CONT_LANE        ;

    // abort cont mode
    if (dcvref_dfe_adapt_cont)
        set_dfe_cont(0);

    // load saved tap value
    dfe_load(Loadsav);
    
    for (i=0; i<NUM_PATH*NUM_DS; ++i) {
        reg_DFE_MMSE_MODE_LANE = 1;
        reg_DFE_F0B_MODE_LANE = 0;
        reg_DFE_F0D_MODE_LANE = 0;
        reg_DFE_VREF_MODE_LANE_1_0 = 0;
        
        reg_DFE_ADAPT_SPLR_EN_LANE_7_0 = 1 << i;
        reg_DFE_FBMD_DS_LANE = 0;
        reg_DFE_FBMD_EO_LANE = 0;

        reg_DFE_ADAPT_SPLR_EN_LANE_7_0 &= ~reg_CDS_ADAPT_SPLR_DIS_LANE_7_0;

        set_dfe_fbmd(FBmmse);
        set_dfe_vldmd(VLDmmse);
        dfe_fsm(Tdc_fine, 0);
    }

    // save tap value
    dfe_save();
    cds_save(Savdc);
    cds_save(Savvref);

    // restore settings
    reg_DFE_MMSE_MODE_LANE         = dcvref_dfe_mmse_mode         ; 
    reg_DFE_F0B_MODE_LANE          = dcvref_dfe_f0b_mode          ; 
    reg_DFE_F0D_MODE_LANE          = dcvref_dfe_f0d_mode          ; 
    reg_DFE_VREF_MODE_LANE_1_0     = dcvref_dfe_vref_mode         ; 
    reg_DFE_ADAPT_SPLR_EN_LANE_7_0 = dcvref_dfe_adapt_splr_en     ; 
    reg_DFE_FBMD_DS_LANE           = dcvref_dfe_fbmd_ds           ; 
    reg_DFE_FBMD_EO_LANE           = dcvref_dfe_fbmd_eo           ; 
    reg_DFE_FBMD_F0K_LANE          = dcvref_dfe_fbmd_f0k          ; 
    reg_DFE_FBMD_F0D_LANE          = dcvref_dfe_fbmd_f0d          ; 
    reg_DFE_TMB_VLD_MODE_F0D_LANE  = dcvref_dfe_tmb_vld_mode_f0d  ; 
    reg_DFE_CMN_MODE_TMB_LANE      = dcvref_dfe_cmn_mode_tmb      ; 
    reg_DFE_TMB_VLD_MODE_F0_LANE   = dcvref_dfe_tmb_vld_mode_f0   ; 
    reg_DFE_TMB_VLD_MODE_F2_LANE   = dcvref_dfe_tmb_vld_mode_f2   ; 
    reg_DFE_TMB_VLD_MODE_F3_LANE   = dcvref_dfe_tmb_vld_mode_f3   ; 
    reg_DFE_TMB_VLD_MODE_F4_LANE   = dcvref_dfe_tmb_vld_mode_f4   ; 
    reg_DFE_TMB_VLD_MODE_DC_LANE   = dcvref_dfe_tmb_vld_mode_dc   ; 
    reg_DFE_TMB_VLD_MODE_VREF_LANE = dcvref_dfe_tmb_vld_mode_vref ; 

    // restore cont mode
    if (dcvref_dfe_adapt_cont)
        set_dfe_cont(1);

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
	if(TRAIN_SIM_EN) return;
    if(on)
    {
        reg_DFE_UPDATE_EN_LANE_30_0_b0  = 0xff;
        reg_DFE_UPDATE_EN_LANE_30_0_b1  = 0xff;
        reg_DFE_UPDATE_EN_LANE_30_0_b2  = 0xff;
        reg_DFE_UPDATE_EN_LANE_30_0_b3  = 0x7f;
        reg_DFE_UPDATE_DC_EN_LANE       = 1;
        reg_DFE_UPDATE_VREF_EN_LANE     = 0;


        if(tag_DFE_RATE_MODE == 0) // half rate
        {
            reg_DFE_UPDATE_EN_LANE_30_0_b0 &= 0x55;
            reg_DFE_UPDATE_EN_LANE_30_0_b1 &= 0x55;
            reg_DFE_UPDATE_EN_LANE_30_0_b2 &= 0x55;
            reg_DFE_UPDATE_EN_LANE_30_0_b3 &= 0x55;
        }

        if(tag_DFE_RATE_MODE == 1) // full rate
        {
            reg_DFE_UPDATE_EN_LANE_30_0_b0 &= 0x11;
            reg_DFE_UPDATE_EN_LANE_30_0_b1 &= 0x11;
            reg_DFE_UPDATE_EN_LANE_30_0_b2 &= 0x11;
            reg_DFE_UPDATE_EN_LANE_30_0_b3 &= 0x11;
        }

	if(!reg_CDS_UPDATE_F_DIS_LANE) 
	{
            reg_DFE_UPDATE_EN_LANE_30_0_b1 |= 0x80; // f15 -> ff1
            reg_DFE_UPDATE_EN_LANE_30_0_b2 |= 0xaa; // f17,19,21,23 -> ff2,3,4,5
            reg_DFE_UPDATE_EN_LANE_30_0_b3 |= 0x2a; // f25,27,29    -> ff6,7
	}


        reg_DFE_ADAPT_CONT_LANE = 1;
        reg_DFE_ADAPT_LPNUM_LANE_9_0_b0 = 0;
        reg_DFE_POL_LPNUM_LANE_9_0_b0 = Tdc_accu % 256;
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
        while(!reg_DFE_DONE_LANE)       delay_ram(Tus);
        //while(reg_DIG_TEST_BUS_15_0_b1) delay_ram(Tus);
        //while(reg_DIG_TEST_BUS_15_0_b1) delay_ram(Tus);
        while(!reg_DFE_UPDATED_LANE)    delay_ram(Tus);
        while(!reg_DFE_UPDATED_LANE)    delay_ram(Tus);
        reg_DFE_START_LANE = 0;
        delay_ram(Tus);
#endif
    }
}

void turn_off_floating_taps(void)//  BANKING_CTRL //save power turn off floating taps in digital and analog

{        
	uint16_t sum_abs_floating_taps = 0;
	int8_t path;

	for (path=0; path!=NUM_PATH; ++path) {
		sum_abs_floating_taps += abs(cds112.s.dfe_2c[path].f15);
		sum_abs_floating_taps += abs(cds112.s.dfe_2c[path].f17);
		sum_abs_floating_taps += abs(cds112.s.dfe_2c[path].f19);
		sum_abs_floating_taps += abs(cds112.s.dfe_2c[path].f21);
		sum_abs_floating_taps += abs(cds112.s.dfe_2c[path].f23);
		sum_abs_floating_taps += abs(cds112.s.dfe_2c[path].f25);
		sum_abs_floating_taps += abs(cds112.s.dfe_2c[path].f27);
		sum_abs_floating_taps += abs(cds112.s.dfe_2c[path].f29);
	}


//	DBG_Printf("\r\n OPT_eo = %d  Sum_abs_floating_taps = %d", opt.eo, sum_abs_floating_taps );	

	set_dfe_cont(1);

	if (opt.eo > 15 && sum_abs_floating_taps < 1024 )
	{
		reg_DFE_UPDATE_EN_LANE_30_0_b0 &= 0x55;
        	reg_DFE_UPDATE_EN_LANE_30_0_b1 &= 0x55;
        	reg_DFE_UPDATE_EN_LANE_30_0_b2 &= 0x55;
        	reg_DFE_UPDATE_EN_LANE_30_0_b3 &= 0x55;
        	reg_EN_DFE_FLOATING_LANE = 0;
//	DBG_Printf("\r\nTurn off floating taps");
	}

}

/* **************************************************
 * SET_DFE_ADAPT_PATH
 * Args:
 *      path
 *          PATHall
 *          PATHsp4
 *          PATHe
 *          PATHs
 * Inputs:
 *      drv_ADAPT_DATA_EN
 *      drv_ADAPT_SLICER_EN
 *      drv_ADAPT_P1_EN
 *      drv_ADAPT_P2_EN
 *      drv_ADAPT_P3_EN
 *      drv_ADAPT_P4_EN
 * Outputs:
 *      reg_DFE_ADAPT_SPLR_EN_LANE_7_0
 */

void set_dfe_adapt_path(uint8_t path)  BANKING_CTRL
{
    bool DATA_ON;
    bool SLICER_ON;
    bool EVEN_ON;
    bool ODD_ON;

    bool use_ds;
    bool use_eo;
    bool single_on;

    use_ds = (drv_ADAPT_DATA_EN != drv_ADAPT_SLICER_EN) ? 1 : 0;
    use_eo = (drv_ADAPT_EVEN_EN != drv_ADAPT_ODD_EN) ? 1 : 0;
    DATA_ON = 1;
    SLICER_ON = 1;
    EVEN_ON = 1;
    ODD_ON = 1;
    single_on = 0;

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
                ODD_ON = 0; 
            }
            break;
        case PATHsp4:
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
	    single_on = 1;
            break;
        default:
            DATA_ON = 1;
            SLICER_ON = 1;
            EVEN_ON = 1;
            ODD_ON = 1;
	    single_on = 0;
            break;
    }

    reg_DFE_ADAPT_SPLR_EN_LANE_7_0 = 0;
    if (!single_on) 
    {
        if(DATA_ON && EVEN_ON)   reg_DFE_ADAPT_SPLR_EN_LANE_7_0 |= 0x03; // DP1/DP2
        if(DATA_ON && ODD_ON)    reg_DFE_ADAPT_SPLR_EN_LANE_7_0 |= 0x0c; // DP3/DP4
        if(SLICER_ON && EVEN_ON) reg_DFE_ADAPT_SPLR_EN_LANE_7_0 |= 0x30; // SP1/SP2
        if(SLICER_ON && ODD_ON)  reg_DFE_ADAPT_SPLR_EN_LANE_7_0 |= 0xc0; // SP3/SP4
    } else {
        if(DATA_ON)     reg_DFE_ADAPT_SPLR_EN_LANE_7_0 |= 0x08; // DP4
        if(SLICER_ON)   reg_DFE_ADAPT_SPLR_EN_LANE_7_0 |= 0x80; // SP4
    }

    reg_DFE_FBMD_DS_LANE = (DATA_ON && SLICER_ON) ? 0 : 1;
    reg_DFE_FBMD_EO_LANE = (EVEN_ON && ODD_ON) ? 0 : (reg_RXSPEED_DIV_LANE_2_0 ? 0 : 1);

	// Let ESM_DFE_ADAPT_SPLR_EN_LANE_3_0 overwrite
	if(lnx_ESM_EN_LANE==1 && lnx_ESM_DFE_ADAPT_SPLR_EN_LANE_3_0!=0){
		uint8_t mask = (uint8_t)lnx_ESM_DFE_ADAPT_SPLR_EN_LANE_3_0<<4 | (uint8_t)lnx_ESM_DFE_ADAPT_SPLR_EN_LANE_3_0;
		reg_DFE_ADAPT_SPLR_EN_LANE_7_0 &= mask;
	}

    reg_DFE_ADAPT_SPLR_EN_LANE_7_0 &= ~reg_CDS_ADAPT_SPLR_DIS_LANE_7_0;
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
    // EVEN_ODD FMBD and DATA_SLICER FBMD are handled in set_dfe_adapt_path. Here, only the FeedBack all and FeedBack-self would over write them.
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
 *      reg_DFE_CMN_MODE_TMB_MODE
 *      reg_DFE_TMB_VLD_F*_MODE
 *      reg_DFE_TMB_VLD_MODE_DC
 *      reg_DFE_TMB_VLD_MODE_F0D
 *      reg_DFE_TMB_VLD_MODE_VREF
 */
void set_dfe_vldmd(uint8_t type) BANKING_CTRL
{
    switch(type)
    {
        case VLDmmse:
            reg_DFE_TMB_VLD_MODE_F0D_LANE = 0;
	    reg_DFE_CMN_MODE_TMB_LANE = 1;
            reg_DFE_TMB_VLD_MODE_F0_LANE = 0;
            reg_DFE_TMB_VLD_MODE_F2_LANE = 0;
            reg_DFE_TMB_VLD_MODE_F3_LANE = 0;
            reg_DFE_TMB_VLD_MODE_F4_LANE = 0;
            reg_DFE_TMB_VLD_MODE_DC_LANE = 0;
            reg_DFE_TMB_VLD_MODE_VREF_LANE = 0;
            break;
        case VLDfast:
            reg_DFE_TMB_VLD_MODE_F0D_LANE = 0;
	    reg_DFE_CMN_MODE_TMB_LANE = 1;
            reg_DFE_TMB_VLD_MODE_F0_LANE = 1;
            reg_DFE_TMB_VLD_MODE_F2_LANE = 1;
            reg_DFE_TMB_VLD_MODE_F3_LANE = 1;
            reg_DFE_TMB_VLD_MODE_F4_LANE = 1;
            reg_DFE_TMB_VLD_MODE_DC_LANE = 0;
            reg_DFE_TMB_VLD_MODE_VREF_LANE = 1;
            break;
        case VLDmaxeo:
            reg_DFE_TMB_VLD_MODE_F0D_LANE = 1;
	    reg_DFE_CMN_MODE_TMB_LANE = 1;
            reg_DFE_TMB_VLD_MODE_F0_LANE = 0;
            reg_DFE_TMB_VLD_MODE_F2_LANE = 0;
            reg_DFE_TMB_VLD_MODE_F3_LANE = 0;
            reg_DFE_TMB_VLD_MODE_F4_LANE = 0;
            reg_DFE_TMB_VLD_MODE_DC_LANE = 0;
            reg_DFE_TMB_VLD_MODE_VREF_LANE = 0;
            break;
        default: // VLDzero
            reg_DFE_TMB_VLD_MODE_F0D_LANE = 0;
	    reg_DFE_CMN_MODE_TMB_LANE = 0;
            reg_DFE_TMB_VLD_MODE_F0_LANE = 0;
            reg_DFE_TMB_VLD_MODE_F2_LANE = 0;
            reg_DFE_TMB_VLD_MODE_F3_LANE = 0;
            reg_DFE_TMB_VLD_MODE_F4_LANE = 0;
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
 *      5: F0K
 *      6: F0X
 *     10: DFE (everything)
 *     11: eyechk
 *     12: DC
 *     13: EEOS
 *     14: VREF
 */
void cds_save(uint8_t type) BANKING_CTRL
{
    switch(type)
    {
        case Savf0a:
            cds112.f.f0a.d_top_p1 = reg_DFE_F0_D_TOP_P1_2C_LANE_7_0;
            cds112.f.f0a.d_mid_p1 = reg_DFE_F0_D_MID_P1_2C_LANE_7_0;
            cds112.f.f0a.d_bot_p1 = reg_DFE_F0_D_BOT_P1_2C_LANE_7_0;
            cds112.f.f0a.d_top_p2 = reg_DFE_F0_D_TOP_P2_2C_LANE_7_0;
            cds112.f.f0a.d_mid_p2 = reg_DFE_F0_D_MID_P2_2C_LANE_7_0;
            cds112.f.f0a.d_bot_p2 = reg_DFE_F0_D_BOT_P2_2C_LANE_7_0;
            cds112.f.f0a.d_top_p3 = reg_DFE_F0_D_TOP_P3_2C_LANE_7_0;
            cds112.f.f0a.d_mid_p3 = reg_DFE_F0_D_MID_P3_2C_LANE_7_0;
            cds112.f.f0a.d_bot_p3 = reg_DFE_F0_D_BOT_P3_2C_LANE_7_0;
            cds112.f.f0a.d_top_p4 = reg_DFE_F0_D_TOP_P4_2C_LANE_7_0;
            cds112.f.f0a.d_mid_p4 = reg_DFE_F0_D_MID_P4_2C_LANE_7_0;
            cds112.f.f0a.d_bot_p4 = reg_DFE_F0_D_BOT_P4_2C_LANE_7_0;

            cds112.f.f0a.s_top_p1 = reg_DFE_F0_S_TOP_P1_2C_LANE_7_0;
            cds112.f.f0a.s_mid_p1 = reg_DFE_F0_S_MID_P1_2C_LANE_7_0;
            cds112.f.f0a.s_bot_p1 = reg_DFE_F0_S_BOT_P1_2C_LANE_7_0;
            cds112.f.f0a.s_top_p2 = reg_DFE_F0_S_TOP_P2_2C_LANE_7_0;
            cds112.f.f0a.s_mid_p2 = reg_DFE_F0_S_MID_P2_2C_LANE_7_0;
            cds112.f.f0a.s_bot_p2 = reg_DFE_F0_S_BOT_P2_2C_LANE_7_0;
            cds112.f.f0a.s_top_p3 = reg_DFE_F0_S_TOP_P3_2C_LANE_7_0;
            cds112.f.f0a.s_mid_p3 = reg_DFE_F0_S_MID_P3_2C_LANE_7_0;
            cds112.f.f0a.s_bot_p3 = reg_DFE_F0_S_BOT_P3_2C_LANE_7_0;
            cds112.f.f0a.s_top_p4 = reg_DFE_F0_S_TOP_P4_2C_LANE_7_0;
            cds112.f.f0a.s_mid_p4 = reg_DFE_F0_S_MID_P4_2C_LANE_7_0;
            cds112.f.f0a.s_bot_p4 = reg_DFE_F0_S_BOT_P4_2C_LANE_7_0;

            cds112.f.f0a_saturate =  reg_DFE_DLY_SAT_F0_LANE ? 1 : 0;
            cds112.f.vref_saturate = reg_DFE_DLY_SAT_VREF_LANE ? 1 : 0;
            break;    
        case Savf0b:
            cds112.f.f0b.d_top_p1 = reg_DFE_F0_D_TOP_P1_2C_LANE_7_0;
            cds112.f.f0b.d_mid_p1 = reg_DFE_F0_D_MID_P1_2C_LANE_7_0;
            cds112.f.f0b.d_bot_p1 = reg_DFE_F0_D_BOT_P1_2C_LANE_7_0;
            cds112.f.f0b.d_top_p2 = reg_DFE_F0_D_TOP_P2_2C_LANE_7_0;
            cds112.f.f0b.d_mid_p2 = reg_DFE_F0_D_MID_P2_2C_LANE_7_0;
            cds112.f.f0b.d_bot_p2 = reg_DFE_F0_D_BOT_P2_2C_LANE_7_0;
            cds112.f.f0b.d_top_p3 = reg_DFE_F0_D_TOP_P3_2C_LANE_7_0;
            cds112.f.f0b.d_mid_p3 = reg_DFE_F0_D_MID_P3_2C_LANE_7_0;
            cds112.f.f0b.d_bot_p3 = reg_DFE_F0_D_BOT_P3_2C_LANE_7_0;
            cds112.f.f0b.d_top_p4 = reg_DFE_F0_D_TOP_P4_2C_LANE_7_0;
            cds112.f.f0b.d_mid_p4 = reg_DFE_F0_D_MID_P4_2C_LANE_7_0;
            cds112.f.f0b.d_bot_p4 = reg_DFE_F0_D_BOT_P4_2C_LANE_7_0;

            cds112.f.f0b.s_top_p1 = reg_DFE_F0_S_TOP_P1_2C_LANE_7_0;
            cds112.f.f0b.s_mid_p1 = reg_DFE_F0_S_MID_P1_2C_LANE_7_0;
            cds112.f.f0b.s_bot_p1 = reg_DFE_F0_S_BOT_P1_2C_LANE_7_0;
            cds112.f.f0b.s_top_p2 = reg_DFE_F0_S_TOP_P2_2C_LANE_7_0;
            cds112.f.f0b.s_mid_p2 = reg_DFE_F0_S_MID_P2_2C_LANE_7_0;
            cds112.f.f0b.s_bot_p2 = reg_DFE_F0_S_BOT_P2_2C_LANE_7_0;
            cds112.f.f0b.s_top_p3 = reg_DFE_F0_S_TOP_P3_2C_LANE_7_0;
            cds112.f.f0b.s_mid_p3 = reg_DFE_F0_S_MID_P3_2C_LANE_7_0;
            cds112.f.f0b.s_bot_p3 = reg_DFE_F0_S_BOT_P3_2C_LANE_7_0;
            cds112.f.f0b.s_top_p4 = reg_DFE_F0_S_TOP_P4_2C_LANE_7_0;
            cds112.f.f0b.s_mid_p4 = reg_DFE_F0_S_MID_P4_2C_LANE_7_0;
            cds112.f.f0b.s_bot_p4 = reg_DFE_F0_S_BOT_P4_2C_LANE_7_0;
            break;
        case Savf0x:
            cds112.f.f0x.d_top_p1 = reg_DFE_F0_D_TOP_P1_2C_LANE_7_0;
            cds112.f.f0x.d_mid_p1 = reg_DFE_F0_D_MID_P1_2C_LANE_7_0;
            cds112.f.f0x.d_bot_p1 = reg_DFE_F0_D_BOT_P1_2C_LANE_7_0;
            cds112.f.f0x.d_top_p2 = reg_DFE_F0_D_TOP_P2_2C_LANE_7_0;
            cds112.f.f0x.d_mid_p2 = reg_DFE_F0_D_MID_P2_2C_LANE_7_0;
            cds112.f.f0x.d_bot_p2 = reg_DFE_F0_D_BOT_P2_2C_LANE_7_0;
            cds112.f.f0x.d_top_p3 = reg_DFE_F0_D_TOP_P3_2C_LANE_7_0;
            cds112.f.f0x.d_mid_p3 = reg_DFE_F0_D_MID_P3_2C_LANE_7_0;
            cds112.f.f0x.d_bot_p3 = reg_DFE_F0_D_BOT_P3_2C_LANE_7_0;
            cds112.f.f0x.d_top_p4 = reg_DFE_F0_D_TOP_P4_2C_LANE_7_0;
            cds112.f.f0x.d_mid_p4 = reg_DFE_F0_D_MID_P4_2C_LANE_7_0;
            cds112.f.f0x.d_bot_p4 = reg_DFE_F0_D_BOT_P4_2C_LANE_7_0;

            cds112.f.f0x.s_top_p1 = reg_DFE_F0_S_TOP_P1_2C_LANE_7_0;
            cds112.f.f0x.s_mid_p1 = reg_DFE_F0_S_MID_P1_2C_LANE_7_0;
            cds112.f.f0x.s_bot_p1 = reg_DFE_F0_S_BOT_P1_2C_LANE_7_0;
            cds112.f.f0x.s_top_p2 = reg_DFE_F0_S_TOP_P2_2C_LANE_7_0;
            cds112.f.f0x.s_mid_p2 = reg_DFE_F0_S_MID_P2_2C_LANE_7_0;
            cds112.f.f0x.s_bot_p2 = reg_DFE_F0_S_BOT_P2_2C_LANE_7_0;
            cds112.f.f0x.s_top_p3 = reg_DFE_F0_S_TOP_P3_2C_LANE_7_0;
            cds112.f.f0x.s_mid_p3 = reg_DFE_F0_S_MID_P3_2C_LANE_7_0;
            cds112.f.f0x.s_bot_p3 = reg_DFE_F0_S_BOT_P3_2C_LANE_7_0;
            cds112.f.f0x.s_top_p4 = reg_DFE_F0_S_TOP_P4_2C_LANE_7_0;
            cds112.f.f0x.s_mid_p4 = reg_DFE_F0_S_MID_P4_2C_LANE_7_0;
            cds112.f.f0x.s_bot_p4 = reg_DFE_F0_S_BOT_P4_2C_LANE_7_0;
            break;
        case Savf0k:
            cds112.f.f0k.d_top_p1 = reg_DFE_F0_D_TOP_P1_2C_LANE_7_0;
            cds112.f.f0k.d_mid_p1 = reg_DFE_F0_D_MID_P1_2C_LANE_7_0;
            cds112.f.f0k.d_bot_p1 = reg_DFE_F0_D_BOT_P1_2C_LANE_7_0;
            cds112.f.f0k.d_top_p2 = reg_DFE_F0_D_TOP_P2_2C_LANE_7_0;
            cds112.f.f0k.d_mid_p2 = reg_DFE_F0_D_MID_P2_2C_LANE_7_0;
            cds112.f.f0k.d_bot_p2 = reg_DFE_F0_D_BOT_P2_2C_LANE_7_0;
            cds112.f.f0k.d_top_p3 = reg_DFE_F0_D_TOP_P3_2C_LANE_7_0;
            cds112.f.f0k.d_mid_p3 = reg_DFE_F0_D_MID_P3_2C_LANE_7_0;
            cds112.f.f0k.d_bot_p3 = reg_DFE_F0_D_BOT_P3_2C_LANE_7_0;
            cds112.f.f0k.d_top_p4 = reg_DFE_F0_D_TOP_P4_2C_LANE_7_0;
            cds112.f.f0k.d_mid_p4 = reg_DFE_F0_D_MID_P4_2C_LANE_7_0;
            cds112.f.f0k.d_bot_p4 = reg_DFE_F0_D_BOT_P4_2C_LANE_7_0;

            cds112.f.f0k.s_top_p1 = reg_DFE_F0_S_TOP_P1_2C_LANE_7_0;
            cds112.f.f0k.s_mid_p1 = reg_DFE_F0_S_MID_P1_2C_LANE_7_0;
            cds112.f.f0k.s_bot_p1 = reg_DFE_F0_S_BOT_P1_2C_LANE_7_0;
            cds112.f.f0k.s_top_p2 = reg_DFE_F0_S_TOP_P2_2C_LANE_7_0;
            cds112.f.f0k.s_mid_p2 = reg_DFE_F0_S_MID_P2_2C_LANE_7_0;
            cds112.f.f0k.s_bot_p2 = reg_DFE_F0_S_BOT_P2_2C_LANE_7_0;
            cds112.f.f0k.s_top_p3 = reg_DFE_F0_S_TOP_P3_2C_LANE_7_0;
            cds112.f.f0k.s_mid_p3 = reg_DFE_F0_S_MID_P3_2C_LANE_7_0;
            cds112.f.f0k.s_bot_p3 = reg_DFE_F0_S_BOT_P3_2C_LANE_7_0;
            cds112.f.f0k.s_top_p4 = reg_DFE_F0_S_TOP_P4_2C_LANE_7_0;
            cds112.f.f0k.s_mid_p4 = reg_DFE_F0_S_MID_P4_2C_LANE_7_0;
            cds112.f.f0k.s_bot_p4 = reg_DFE_F0_S_BOT_P4_2C_LANE_7_0;
            break;
        case Savf0d:
            cds112.f.f0d.d_top_p1 = reg_DFE_F0_D_TOP_P1_2C_LANE_7_0;
            cds112.f.f0d.d_mid_p1 = reg_DFE_F0_D_MID_P1_2C_LANE_7_0;
            cds112.f.f0d.d_bot_p1 = reg_DFE_F0_D_BOT_P1_2C_LANE_7_0;
            cds112.f.f0d.d_top_p2 = reg_DFE_F0_D_TOP_P2_2C_LANE_7_0;
            cds112.f.f0d.d_mid_p2 = reg_DFE_F0_D_MID_P2_2C_LANE_7_0;
            cds112.f.f0d.d_bot_p2 = reg_DFE_F0_D_BOT_P2_2C_LANE_7_0;
            cds112.f.f0d.d_top_p3 = reg_DFE_F0_D_TOP_P3_2C_LANE_7_0;
            cds112.f.f0d.d_mid_p3 = reg_DFE_F0_D_MID_P3_2C_LANE_7_0;
            cds112.f.f0d.d_bot_p3 = reg_DFE_F0_D_BOT_P3_2C_LANE_7_0;
            cds112.f.f0d.d_top_p4 = reg_DFE_F0_D_TOP_P4_2C_LANE_7_0;
            cds112.f.f0d.d_mid_p4 = reg_DFE_F0_D_MID_P4_2C_LANE_7_0;
            cds112.f.f0d.d_bot_p4 = reg_DFE_F0_D_BOT_P4_2C_LANE_7_0;

            cds112.f.f0d.s_top_p1 = reg_DFE_F0_S_TOP_P1_2C_LANE_7_0;
            cds112.f.f0d.s_mid_p1 = reg_DFE_F0_S_MID_P1_2C_LANE_7_0;
            cds112.f.f0d.s_bot_p1 = reg_DFE_F0_S_BOT_P1_2C_LANE_7_0;
            cds112.f.f0d.s_top_p2 = reg_DFE_F0_S_TOP_P2_2C_LANE_7_0;
            cds112.f.f0d.s_mid_p2 = reg_DFE_F0_S_MID_P2_2C_LANE_7_0;
            cds112.f.f0d.s_bot_p2 = reg_DFE_F0_S_BOT_P2_2C_LANE_7_0;
            cds112.f.f0d.s_top_p3 = reg_DFE_F0_S_TOP_P3_2C_LANE_7_0;
            cds112.f.f0d.s_mid_p3 = reg_DFE_F0_S_MID_P3_2C_LANE_7_0;
            cds112.f.f0d.s_bot_p3 = reg_DFE_F0_S_BOT_P3_2C_LANE_7_0;
            cds112.f.f0d.s_top_p4 = reg_DFE_F0_S_TOP_P4_2C_LANE_7_0;
            cds112.f.f0d.s_mid_p4 = reg_DFE_F0_S_MID_P4_2C_LANE_7_0;
            cds112.f.f0d.s_bot_p4 = reg_DFE_F0_S_BOT_P4_2C_LANE_7_0;
            break;
        case Savf0d_l:
            cds112.f.f0d_left.d_top_p1 = reg_DFE_F0_D_TOP_P1_2C_LANE_7_0;
            cds112.f.f0d_left.d_mid_p1 = reg_DFE_F0_D_MID_P1_2C_LANE_7_0;
            cds112.f.f0d_left.d_bot_p1 = reg_DFE_F0_D_BOT_P1_2C_LANE_7_0;
            cds112.f.f0d_left.d_top_p2 = reg_DFE_F0_D_TOP_P2_2C_LANE_7_0;
            cds112.f.f0d_left.d_mid_p2 = reg_DFE_F0_D_MID_P2_2C_LANE_7_0;
            cds112.f.f0d_left.d_bot_p2 = reg_DFE_F0_D_BOT_P2_2C_LANE_7_0;
            cds112.f.f0d_left.d_top_p3 = reg_DFE_F0_D_TOP_P3_2C_LANE_7_0;
            cds112.f.f0d_left.d_mid_p3 = reg_DFE_F0_D_MID_P3_2C_LANE_7_0;
            cds112.f.f0d_left.d_bot_p3 = reg_DFE_F0_D_BOT_P3_2C_LANE_7_0;
            cds112.f.f0d_left.d_top_p4 = reg_DFE_F0_D_TOP_P4_2C_LANE_7_0;
            cds112.f.f0d_left.d_mid_p4 = reg_DFE_F0_D_MID_P4_2C_LANE_7_0;
            cds112.f.f0d_left.d_bot_p4 = reg_DFE_F0_D_BOT_P4_2C_LANE_7_0;

            cds112.f.f0d_left.s_top_p1 = reg_DFE_F0_S_TOP_P1_2C_LANE_7_0;
            cds112.f.f0d_left.s_mid_p1 = reg_DFE_F0_S_MID_P1_2C_LANE_7_0;
            cds112.f.f0d_left.s_bot_p1 = reg_DFE_F0_S_BOT_P1_2C_LANE_7_0;
            cds112.f.f0d_left.s_top_p2 = reg_DFE_F0_S_TOP_P2_2C_LANE_7_0;
            cds112.f.f0d_left.s_mid_p2 = reg_DFE_F0_S_MID_P2_2C_LANE_7_0;
            cds112.f.f0d_left.s_bot_p2 = reg_DFE_F0_S_BOT_P2_2C_LANE_7_0;
            cds112.f.f0d_left.s_top_p3 = reg_DFE_F0_S_TOP_P3_2C_LANE_7_0;
            cds112.f.f0d_left.s_mid_p3 = reg_DFE_F0_S_MID_P3_2C_LANE_7_0;
            cds112.f.f0d_left.s_bot_p3 = reg_DFE_F0_S_BOT_P3_2C_LANE_7_0;
            cds112.f.f0d_left.s_top_p4 = reg_DFE_F0_S_TOP_P4_2C_LANE_7_0;
            cds112.f.f0d_left.s_mid_p4 = reg_DFE_F0_S_MID_P4_2C_LANE_7_0;
            cds112.f.f0d_left.s_bot_p4 = reg_DFE_F0_S_BOT_P4_2C_LANE_7_0;

            break;
        case Savf0d_r:
            cds112.f.f0d_right.d_top_p1 = reg_DFE_F0_D_TOP_P1_2C_LANE_7_0;
            cds112.f.f0d_right.d_mid_p1 = reg_DFE_F0_D_MID_P1_2C_LANE_7_0;
            cds112.f.f0d_right.d_bot_p1 = reg_DFE_F0_D_BOT_P1_2C_LANE_7_0;
            cds112.f.f0d_right.d_top_p2 = reg_DFE_F0_D_TOP_P2_2C_LANE_7_0;
            cds112.f.f0d_right.d_mid_p2 = reg_DFE_F0_D_MID_P2_2C_LANE_7_0;
            cds112.f.f0d_right.d_bot_p2 = reg_DFE_F0_D_BOT_P2_2C_LANE_7_0;
            cds112.f.f0d_right.d_top_p3 = reg_DFE_F0_D_TOP_P3_2C_LANE_7_0;
            cds112.f.f0d_right.d_mid_p3 = reg_DFE_F0_D_MID_P3_2C_LANE_7_0;
            cds112.f.f0d_right.d_bot_p3 = reg_DFE_F0_D_BOT_P3_2C_LANE_7_0;
            cds112.f.f0d_right.d_top_p4 = reg_DFE_F0_D_TOP_P4_2C_LANE_7_0;
            cds112.f.f0d_right.d_mid_p4 = reg_DFE_F0_D_MID_P4_2C_LANE_7_0;
            cds112.f.f0d_right.d_bot_p4 = reg_DFE_F0_D_BOT_P4_2C_LANE_7_0;

            cds112.f.f0d_right.s_top_p1 = reg_DFE_F0_S_TOP_P1_2C_LANE_7_0;
            cds112.f.f0d_right.s_mid_p1 = reg_DFE_F0_S_MID_P1_2C_LANE_7_0;
            cds112.f.f0d_right.s_bot_p1 = reg_DFE_F0_S_BOT_P1_2C_LANE_7_0;
            cds112.f.f0d_right.s_top_p2 = reg_DFE_F0_S_TOP_P2_2C_LANE_7_0;
            cds112.f.f0d_right.s_mid_p2 = reg_DFE_F0_S_MID_P2_2C_LANE_7_0;
            cds112.f.f0d_right.s_bot_p2 = reg_DFE_F0_S_BOT_P2_2C_LANE_7_0;
            cds112.f.f0d_right.s_top_p3 = reg_DFE_F0_S_TOP_P3_2C_LANE_7_0;
            cds112.f.f0d_right.s_mid_p3 = reg_DFE_F0_S_MID_P3_2C_LANE_7_0;
            cds112.f.f0d_right.s_bot_p3 = reg_DFE_F0_S_BOT_P3_2C_LANE_7_0;
            cds112.f.f0d_right.s_top_p4 = reg_DFE_F0_S_TOP_P4_2C_LANE_7_0;
            cds112.f.f0d_right.s_mid_p4 = reg_DFE_F0_S_MID_P4_2C_LANE_7_0;
            cds112.f.f0d_right.s_bot_p4 = reg_DFE_F0_S_BOT_P4_2C_LANE_7_0;
            break;
        case Savdfe:
            // this one copies F0A as well
            memcpy((uint8_t *)&(cds112.f.dfe_2c), (uint8_t *)&DFE_READ_2C_REG0_P1, sizeof(dfe_2c_t));
            break;
        case Savdc:
            cds112.f.dfe_2c.dc_s_bot_p1 = reg_DFE_DC_S_BOT_P1_2C_LANE_7_0;
            cds112.f.dfe_2c.dc_s_mid_p1 = reg_DFE_DC_S_MID_P1_2C_LANE_7_0;
            cds112.f.dfe_2c.dc_s_top_p1 = reg_DFE_DC_S_TOP_P1_2C_LANE_7_0;
            cds112.f.dfe_2c.dc_d_bot_p1 = reg_DFE_DC_D_BOT_P1_2C_LANE_7_0;
            cds112.f.dfe_2c.dc_d_mid_p1 = reg_DFE_DC_D_MID_P1_2C_LANE_7_0;
            cds112.f.dfe_2c.dc_d_top_p1 = reg_DFE_DC_D_TOP_P1_2C_LANE_7_0;
            cds112.f.dfe_2c.dc_s_bot_p2 = reg_DFE_DC_S_BOT_P2_2C_LANE_7_0;
            cds112.f.dfe_2c.dc_s_mid_p2 = reg_DFE_DC_S_MID_P2_2C_LANE_7_0;
            cds112.f.dfe_2c.dc_s_top_p2 = reg_DFE_DC_S_TOP_P2_2C_LANE_7_0;
            cds112.f.dfe_2c.dc_d_bot_p2 = reg_DFE_DC_D_BOT_P2_2C_LANE_7_0;
            cds112.f.dfe_2c.dc_d_mid_p2 = reg_DFE_DC_D_MID_P2_2C_LANE_7_0;
            cds112.f.dfe_2c.dc_d_top_p2 = reg_DFE_DC_D_TOP_P2_2C_LANE_7_0;
            cds112.f.dfe_2c.dc_s_bot_p3 = reg_DFE_DC_S_BOT_P3_2C_LANE_7_0;
            cds112.f.dfe_2c.dc_s_mid_p3 = reg_DFE_DC_S_MID_P3_2C_LANE_7_0;
            cds112.f.dfe_2c.dc_s_top_p3 = reg_DFE_DC_S_TOP_P3_2C_LANE_7_0;
            cds112.f.dfe_2c.dc_d_bot_p3 = reg_DFE_DC_D_BOT_P3_2C_LANE_7_0;
            cds112.f.dfe_2c.dc_d_mid_p3 = reg_DFE_DC_D_MID_P3_2C_LANE_7_0;
            cds112.f.dfe_2c.dc_d_top_p3 = reg_DFE_DC_D_TOP_P3_2C_LANE_7_0;
            cds112.f.dfe_2c.dc_s_bot_p4 = reg_DFE_DC_S_BOT_P4_2C_LANE_7_0;
            cds112.f.dfe_2c.dc_s_mid_p4 = reg_DFE_DC_S_MID_P4_2C_LANE_7_0;
            cds112.f.dfe_2c.dc_s_top_p4 = reg_DFE_DC_S_TOP_P4_2C_LANE_7_0;
            cds112.f.dfe_2c.dc_d_bot_p4 = reg_DFE_DC_D_BOT_P4_2C_LANE_7_0;
            cds112.f.dfe_2c.dc_d_mid_p4 = reg_DFE_DC_D_MID_P4_2C_LANE_7_0;
            cds112.f.dfe_2c.dc_d_top_p4 = reg_DFE_DC_D_TOP_P4_2C_LANE_7_0;
            break;
        case Saveeos:
            cds112.f.dfe_2c.dc_e_p1 = reg_DFE_DC_E_P1_2C_LANE_7_0;
            cds112.f.dfe_2c.dc_e_p2 = reg_DFE_DC_E_P2_2C_LANE_7_0;
            cds112.f.dfe_2c.dc_e_p3 = reg_DFE_DC_E_P3_2C_LANE_7_0;
            cds112.f.dfe_2c.dc_e_p4 = reg_DFE_DC_E_P4_2C_LANE_7_0;
            break;
        case Savvref:
            cds112.f.dfe_2c.vref_top_p1 = reg_DFE_VREF_TOP_P1_2C_LANE_7_0;
            cds112.f.dfe_2c.vref_mid_p1 = reg_DFE_VREF_MID_P1_2C_LANE_7_0;
            cds112.f.dfe_2c.vref_bot_p1 = reg_DFE_VREF_BOT_P1_2C_LANE_7_0;
            cds112.f.dfe_2c.vref_top_p2 = reg_DFE_VREF_TOP_P2_2C_LANE_7_0;
            cds112.f.dfe_2c.vref_mid_p2 = reg_DFE_VREF_MID_P2_2C_LANE_7_0;
            cds112.f.dfe_2c.vref_bot_p2 = reg_DFE_VREF_BOT_P2_2C_LANE_7_0;
            cds112.f.dfe_2c.vref_top_p3 = reg_DFE_VREF_TOP_P3_2C_LANE_7_0;
            cds112.f.dfe_2c.vref_mid_p3 = reg_DFE_VREF_MID_P3_2C_LANE_7_0;
            cds112.f.dfe_2c.vref_bot_p3 = reg_DFE_VREF_BOT_P3_2C_LANE_7_0;
            cds112.f.dfe_2c.vref_top_p4 = reg_DFE_VREF_TOP_P4_2C_LANE_7_0;
            cds112.f.dfe_2c.vref_mid_p4 = reg_DFE_VREF_MID_P4_2C_LANE_7_0;
            cds112.f.dfe_2c.vref_bot_p4 = reg_DFE_VREF_BOT_P4_2C_LANE_7_0;
            break;
        case Saveyechk:
            cds112.f.eye_check_pass = tag_EC_PASS;
        default: break;
    }
}

/* **************************************************
 * CDS_LOAD_VREF
 * Args:
 *      0: from reg CDS_VREF_VAL 
 * Inputs:
 * Outputs:
 */
void cds_load_vref() BANKING_CTRL
{
    uint8_t val;
    
    val = (1 <<6) || reg_CDS_VREF_VAL_LANE_5_0;
    reg_DFE_FEXTVREF_BOT_P4_LANE_6_0   = val;
    reg_DFE_FEXTVREF_BOT_P2_LANE_6_0   = val;
    reg_DFE_FEXTVREF_BOT_P3_LANE_6_0   = val;
    reg_DFE_FEXTVREF_BOT_P4_LANE_6_0   = val;
    val =            reg_CDS_VREF_VAL_LANE_5_0;
    reg_DFE_FEXTVREF_TOP_P1_LANE_6_0   = val;
    reg_DFE_FEXTVREF_TOP_P2_LANE_6_0   = val;
    reg_DFE_FEXTVREF_TOP_P3_LANE_6_0   = val;
    reg_DFE_FEXTVREF_TOP_P4_LANE_6_0   = val;
    tgl_fen_vref();
    while(!reg_DFE_UPDATED_LANE);
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
            reg_DFE_FEXT0_D_TOP_P1_LANE_5_0      = cds112.f.f0a.d_top_p1;
            reg_DFE_FEXT0_D_MID_P1_LANE_5_0      = cds112.f.f0a.d_mid_p1;
            reg_DFE_FEXT0_D_BOT_P1_LANE_5_0      = cds112.f.f0a.d_bot_p1;
            reg_DFE_FEXT0_S_TOP_P1_LANE_5_0      = cds112.f.f0a.s_top_p1;
            reg_DFE_FEXT0_S_MID_P1_LANE_5_0      = cds112.f.f0a.s_mid_p1;
            reg_DFE_FEXT0_S_BOT_P1_LANE_5_0      = cds112.f.f0a.s_bot_p1;
            reg_DFE_FEXT0_D_TOP_P2_LANE_5_0      = cds112.f.f0a.d_top_p2;
            reg_DFE_FEXT0_D_MID_P2_LANE_5_0      = cds112.f.f0a.d_mid_p2;
            reg_DFE_FEXT0_D_BOT_P2_LANE_5_0      = cds112.f.f0a.d_bot_p2;
            reg_DFE_FEXT0_S_TOP_P2_LANE_5_0      = cds112.f.f0a.s_top_p2;
            reg_DFE_FEXT0_S_MID_P2_LANE_5_0      = cds112.f.f0a.s_mid_p2;
            reg_DFE_FEXT0_S_BOT_P2_LANE_5_0      = cds112.f.f0a.s_bot_p2;
            reg_DFE_FEXT0_D_TOP_P3_LANE_5_0      = cds112.f.f0a.d_top_p3;
            reg_DFE_FEXT0_D_MID_P3_LANE_5_0      = cds112.f.f0a.d_mid_p3;
            reg_DFE_FEXT0_D_BOT_P3_LANE_5_0      = cds112.f.f0a.d_bot_p3;
            reg_DFE_FEXT0_S_TOP_P3_LANE_5_0      = cds112.f.f0a.s_top_p3;
            reg_DFE_FEXT0_S_MID_P3_LANE_5_0      = cds112.f.f0a.s_mid_p3;
            reg_DFE_FEXT0_S_BOT_P3_LANE_5_0      = cds112.f.f0a.s_bot_p3;
            reg_DFE_FEXT0_D_TOP_P4_LANE_5_0      = cds112.f.f0a.d_top_p4;
            reg_DFE_FEXT0_D_MID_P4_LANE_5_0      = cds112.f.f0a.d_mid_p4;
            reg_DFE_FEXT0_D_BOT_P4_LANE_5_0      = cds112.f.f0a.d_bot_p4;
            reg_DFE_FEXT0_S_TOP_P4_LANE_5_0      = cds112.f.f0a.s_top_p4;
            reg_DFE_FEXT0_S_MID_P4_LANE_5_0      = cds112.f.f0a.s_mid_p4;
            reg_DFE_FEXT0_S_BOT_P4_LANE_5_0      = cds112.f.f0a.s_bot_p4;
            break;
        case 1:
            reg_DFE_FEXT0_D_TOP_P1_LANE_5_0      = cds112.f.f0b.d_top_p1;
            reg_DFE_FEXT0_D_MID_P1_LANE_5_0      = cds112.f.f0b.d_mid_p1;
            reg_DFE_FEXT0_D_BOT_P1_LANE_5_0      = cds112.f.f0b.d_bot_p1;
            reg_DFE_FEXT0_S_TOP_P1_LANE_5_0      = cds112.f.f0b.s_top_p1;
            reg_DFE_FEXT0_S_MID_P1_LANE_5_0      = cds112.f.f0b.s_mid_p1;
            reg_DFE_FEXT0_S_BOT_P1_LANE_5_0      = cds112.f.f0b.s_bot_p1;
            reg_DFE_FEXT0_D_TOP_P2_LANE_5_0      = cds112.f.f0b.d_top_p2;
            reg_DFE_FEXT0_D_MID_P2_LANE_5_0      = cds112.f.f0b.d_mid_p2;
            reg_DFE_FEXT0_D_BOT_P2_LANE_5_0      = cds112.f.f0b.d_bot_p2;
            reg_DFE_FEXT0_S_TOP_P2_LANE_5_0      = cds112.f.f0b.s_top_p2;
            reg_DFE_FEXT0_S_MID_P2_LANE_5_0      = cds112.f.f0b.s_mid_p2;
            reg_DFE_FEXT0_S_BOT_P2_LANE_5_0      = cds112.f.f0b.s_bot_p2;
            reg_DFE_FEXT0_D_TOP_P3_LANE_5_0      = cds112.f.f0b.d_top_p3;
            reg_DFE_FEXT0_D_MID_P3_LANE_5_0      = cds112.f.f0b.d_mid_p3;
            reg_DFE_FEXT0_D_BOT_P3_LANE_5_0      = cds112.f.f0b.d_bot_p3;
            reg_DFE_FEXT0_S_TOP_P3_LANE_5_0      = cds112.f.f0b.s_top_p3;
            reg_DFE_FEXT0_S_MID_P3_LANE_5_0      = cds112.f.f0b.s_mid_p3;
            reg_DFE_FEXT0_S_BOT_P3_LANE_5_0      = cds112.f.f0b.s_bot_p3;
            reg_DFE_FEXT0_D_TOP_P4_LANE_5_0      = cds112.f.f0b.d_top_p4;
            reg_DFE_FEXT0_D_MID_P4_LANE_5_0      = cds112.f.f0b.d_mid_p4;
            reg_DFE_FEXT0_D_BOT_P4_LANE_5_0      = cds112.f.f0b.d_bot_p4;
            reg_DFE_FEXT0_S_TOP_P4_LANE_5_0      = cds112.f.f0b.s_top_p4;
            reg_DFE_FEXT0_S_MID_P4_LANE_5_0      = cds112.f.f0b.s_mid_p4;
            reg_DFE_FEXT0_S_BOT_P4_LANE_5_0      = cds112.f.f0b.s_bot_p4;
            break;
        case 2:
            reg_DFE_FEXT0_D_TOP_P1_LANE_5_0      = cds112.f.f0d.d_top_p1;
            reg_DFE_FEXT0_D_MID_P1_LANE_5_0      = cds112.f.f0d.d_mid_p1;
            reg_DFE_FEXT0_D_BOT_P1_LANE_5_0      = cds112.f.f0d.d_bot_p1;
            reg_DFE_FEXT0_S_TOP_P1_LANE_5_0      = cds112.f.f0d.s_top_p1;
            reg_DFE_FEXT0_S_MID_P1_LANE_5_0      = cds112.f.f0d.s_mid_p1;
            reg_DFE_FEXT0_S_BOT_P1_LANE_5_0      = cds112.f.f0d.s_bot_p1;
            reg_DFE_FEXT0_D_TOP_P2_LANE_5_0      = cds112.f.f0d.d_top_p2;
            reg_DFE_FEXT0_D_MID_P2_LANE_5_0      = cds112.f.f0d.d_mid_p2;
            reg_DFE_FEXT0_D_BOT_P2_LANE_5_0      = cds112.f.f0d.d_bot_p2;
            reg_DFE_FEXT0_S_TOP_P2_LANE_5_0      = cds112.f.f0d.s_top_p2;
            reg_DFE_FEXT0_S_MID_P2_LANE_5_0      = cds112.f.f0d.s_mid_p2;
            reg_DFE_FEXT0_S_BOT_P2_LANE_5_0      = cds112.f.f0d.s_bot_p2;
            reg_DFE_FEXT0_D_TOP_P3_LANE_5_0      = cds112.f.f0d.d_top_p3;
            reg_DFE_FEXT0_D_MID_P3_LANE_5_0      = cds112.f.f0d.d_mid_p3;
            reg_DFE_FEXT0_D_BOT_P3_LANE_5_0      = cds112.f.f0d.d_bot_p3;
            reg_DFE_FEXT0_S_TOP_P3_LANE_5_0      = cds112.f.f0d.s_top_p3;
            reg_DFE_FEXT0_S_MID_P3_LANE_5_0      = cds112.f.f0d.s_mid_p3;
            reg_DFE_FEXT0_S_BOT_P3_LANE_5_0      = cds112.f.f0d.s_bot_p3;
            reg_DFE_FEXT0_D_TOP_P4_LANE_5_0      = cds112.f.f0d.d_top_p4;
            reg_DFE_FEXT0_D_MID_P4_LANE_5_0      = cds112.f.f0d.d_mid_p4;
            reg_DFE_FEXT0_D_BOT_P4_LANE_5_0      = cds112.f.f0d.d_bot_p4;
            reg_DFE_FEXT0_S_TOP_P4_LANE_5_0      = cds112.f.f0d.s_top_p4;
            reg_DFE_FEXT0_S_MID_P4_LANE_5_0      = cds112.f.f0d.s_mid_p4;
            reg_DFE_FEXT0_S_BOT_P4_LANE_5_0      = cds112.f.f0d.s_bot_p4;
            break;
        case 3:
            reg_DFE_FEXT0_D_TOP_P1_LANE_5_0      = cds112.f.f0k.d_top_p1;
            reg_DFE_FEXT0_D_MID_P1_LANE_5_0      = cds112.f.f0k.d_mid_p1;
            reg_DFE_FEXT0_D_BOT_P1_LANE_5_0      = cds112.f.f0k.d_bot_p1;
            reg_DFE_FEXT0_S_TOP_P1_LANE_5_0      = cds112.f.f0k.s_top_p1;
            reg_DFE_FEXT0_S_MID_P1_LANE_5_0      = cds112.f.f0k.s_mid_p1;
            reg_DFE_FEXT0_S_BOT_P1_LANE_5_0      = cds112.f.f0k.s_bot_p1;
            reg_DFE_FEXT0_D_TOP_P2_LANE_5_0      = cds112.f.f0k.d_top_p2;
            reg_DFE_FEXT0_D_MID_P2_LANE_5_0      = cds112.f.f0k.d_mid_p2;
            reg_DFE_FEXT0_D_BOT_P2_LANE_5_0      = cds112.f.f0k.d_bot_p2;
            reg_DFE_FEXT0_S_TOP_P2_LANE_5_0      = cds112.f.f0k.s_top_p2;
            reg_DFE_FEXT0_S_MID_P2_LANE_5_0      = cds112.f.f0k.s_mid_p2;
            reg_DFE_FEXT0_S_BOT_P2_LANE_5_0      = cds112.f.f0k.s_bot_p2;
            reg_DFE_FEXT0_D_TOP_P3_LANE_5_0      = cds112.f.f0k.d_top_p3;
            reg_DFE_FEXT0_D_MID_P3_LANE_5_0      = cds112.f.f0k.d_mid_p3;
            reg_DFE_FEXT0_D_BOT_P3_LANE_5_0      = cds112.f.f0k.d_bot_p3;
            reg_DFE_FEXT0_S_TOP_P3_LANE_5_0      = cds112.f.f0k.s_top_p3;
            reg_DFE_FEXT0_S_MID_P3_LANE_5_0      = cds112.f.f0k.s_mid_p3;
            reg_DFE_FEXT0_S_BOT_P3_LANE_5_0      = cds112.f.f0k.s_bot_p3;
            reg_DFE_FEXT0_D_TOP_P4_LANE_5_0      = cds112.f.f0k.d_top_p4;
            reg_DFE_FEXT0_D_MID_P4_LANE_5_0      = cds112.f.f0k.d_mid_p4;
            reg_DFE_FEXT0_D_BOT_P4_LANE_5_0      = cds112.f.f0k.d_bot_p4;
            reg_DFE_FEXT0_S_TOP_P4_LANE_5_0      = cds112.f.f0k.s_top_p4;
            reg_DFE_FEXT0_S_MID_P4_LANE_5_0      = cds112.f.f0k.s_mid_p4;
            reg_DFE_FEXT0_S_BOT_P4_LANE_5_0      = cds112.f.f0k.s_bot_p4;
            break;
        case 4:
            reg_DFE_FEXT0_D_TOP_P1_LANE_5_0      = cds112.f.f0x.d_top_p1;
            reg_DFE_FEXT0_D_MID_P1_LANE_5_0      = cds112.f.f0x.d_mid_p1;
            reg_DFE_FEXT0_D_BOT_P1_LANE_5_0      = cds112.f.f0x.d_bot_p1;
            reg_DFE_FEXT0_S_TOP_P1_LANE_5_0      = cds112.f.f0x.s_top_p1;
            reg_DFE_FEXT0_S_MID_P1_LANE_5_0      = cds112.f.f0x.s_mid_p1;
            reg_DFE_FEXT0_S_BOT_P1_LANE_5_0      = cds112.f.f0x.s_bot_p1;
            reg_DFE_FEXT0_D_TOP_P2_LANE_5_0      = cds112.f.f0x.d_top_p2;
            reg_DFE_FEXT0_D_MID_P2_LANE_5_0      = cds112.f.f0x.d_mid_p2;
            reg_DFE_FEXT0_D_BOT_P2_LANE_5_0      = cds112.f.f0x.d_bot_p2;
            reg_DFE_FEXT0_S_TOP_P2_LANE_5_0      = cds112.f.f0x.s_top_p2;
            reg_DFE_FEXT0_S_MID_P2_LANE_5_0      = cds112.f.f0x.s_mid_p2;
            reg_DFE_FEXT0_S_BOT_P2_LANE_5_0      = cds112.f.f0x.s_bot_p2;
            reg_DFE_FEXT0_D_TOP_P3_LANE_5_0      = cds112.f.f0x.d_top_p3;
            reg_DFE_FEXT0_D_MID_P3_LANE_5_0      = cds112.f.f0x.d_mid_p3;
            reg_DFE_FEXT0_D_BOT_P3_LANE_5_0      = cds112.f.f0x.d_bot_p3;
            reg_DFE_FEXT0_S_TOP_P3_LANE_5_0      = cds112.f.f0x.s_top_p3;
            reg_DFE_FEXT0_S_MID_P3_LANE_5_0      = cds112.f.f0x.s_mid_p3;
            reg_DFE_FEXT0_S_BOT_P3_LANE_5_0      = cds112.f.f0x.s_bot_p3;
            reg_DFE_FEXT0_D_TOP_P4_LANE_5_0      = cds112.f.f0x.d_top_p4;
            reg_DFE_FEXT0_D_MID_P4_LANE_5_0      = cds112.f.f0x.d_mid_p4;
            reg_DFE_FEXT0_D_BOT_P4_LANE_5_0      = cds112.f.f0x.d_bot_p4;
            reg_DFE_FEXT0_S_TOP_P4_LANE_5_0      = cds112.f.f0x.s_top_p4;
            reg_DFE_FEXT0_S_MID_P4_LANE_5_0      = cds112.f.f0x.s_mid_p4;
            reg_DFE_FEXT0_S_BOT_P4_LANE_5_0      = cds112.f.f0x.s_bot_p4;
            break;
        case 5:
            reg_DFE_FEXT0_D_TOP_P1_LANE_5_0      = 32;
            reg_DFE_FEXT0_D_MID_P1_LANE_5_0      = 32;
            reg_DFE_FEXT0_D_BOT_P1_LANE_5_0      = 32;
            reg_DFE_FEXT0_S_TOP_P1_LANE_5_0      = 32;
            reg_DFE_FEXT0_S_MID_P1_LANE_5_0      = 32;
            reg_DFE_FEXT0_S_BOT_P1_LANE_5_0      = 32;
            reg_DFE_FEXT0_D_TOP_P2_LANE_5_0      = 32;
            reg_DFE_FEXT0_D_MID_P2_LANE_5_0      = 32;
            reg_DFE_FEXT0_D_BOT_P2_LANE_5_0      = 32;
            reg_DFE_FEXT0_S_TOP_P2_LANE_5_0      = 32;
            reg_DFE_FEXT0_S_MID_P2_LANE_5_0      = 32;
            reg_DFE_FEXT0_S_BOT_P2_LANE_5_0      = 32;
            reg_DFE_FEXT0_D_TOP_P3_LANE_5_0      = 32;
            reg_DFE_FEXT0_D_MID_P3_LANE_5_0      = 32;
            reg_DFE_FEXT0_D_BOT_P3_LANE_5_0      = 32;
            reg_DFE_FEXT0_S_TOP_P3_LANE_5_0      = 32;
            reg_DFE_FEXT0_S_MID_P3_LANE_5_0      = 32;
            reg_DFE_FEXT0_S_BOT_P3_LANE_5_0      = 32;
            reg_DFE_FEXT0_D_TOP_P4_LANE_5_0      = 32;
            reg_DFE_FEXT0_D_MID_P4_LANE_5_0      = 32;
            reg_DFE_FEXT0_D_BOT_P4_LANE_5_0      = 32;
            reg_DFE_FEXT0_S_TOP_P4_LANE_5_0      = 32;
            reg_DFE_FEXT0_S_MID_P4_LANE_5_0      = 32;
            reg_DFE_FEXT0_S_BOT_P4_LANE_5_0      = 32;

            if(reg_DFE_PAM2_LP_MODE_LANE) //Shut off the current
            {
            reg_DFE_FEXT0_D_BOT_P1_LANE_5_0      = 0;
            reg_DFE_FEXT0_D_BOT_P2_LANE_5_0      = 0;
            reg_DFE_FEXT0_D_BOT_P3_LANE_5_0      = 0;
            reg_DFE_FEXT0_D_BOT_P4_LANE_5_0      = 0;
            reg_DFE_FEXT0_D_TOP_P1_LANE_5_0      = 0;
            reg_DFE_FEXT0_D_TOP_P2_LANE_5_0      = 0;
            reg_DFE_FEXT0_D_TOP_P3_LANE_5_0      = 0;
            reg_DFE_FEXT0_D_TOP_P4_LANE_5_0      = 0;
            reg_DFE_FEXT0_S_BOT_P1_LANE_5_0      = 0;
            reg_DFE_FEXT0_S_BOT_P2_LANE_5_0      = 0;
            reg_DFE_FEXT0_S_BOT_P3_LANE_5_0      = 0;
            reg_DFE_FEXT0_S_BOT_P4_LANE_5_0      = 0;
            reg_DFE_FEXT0_S_TOP_P1_LANE_5_0      = 0;
            reg_DFE_FEXT0_S_TOP_P2_LANE_5_0      = 0;
            reg_DFE_FEXT0_S_TOP_P3_LANE_5_0      = 0;
            reg_DFE_FEXT0_S_TOP_P4_LANE_5_0      = 0;
            }
            break;
    }
    tgl_fen0();
    while(!reg_DFE_UPDATED_LANE);
}

/* **************************************************
 * CDS_LOAD_F2T
 * Args: 
 * Outputs:
 */

void cds_load_f2t() BANKING_CTRL
{   
    uint8_t val;
    val =            reg_CDS_F2T_VAL_LANE_3_0;
    reg_DFE_FEXT2_TUNE3_D_P1_LANE_3_0      = val;
    reg_DFE_FEXT2_TUNE1_D_P1_LANE_3_0      = val;
    reg_DFE_FEXT2_TUNE3_S_P1_LANE_3_0      = val;
    reg_DFE_FEXT2_TUNE1_S_P1_LANE_3_0      = val;
    reg_DFE_FEXT2_TUNE3_D_P2_LANE_3_0      = val;
    reg_DFE_FEXT2_TUNE1_D_P2_LANE_3_0      = val;
    reg_DFE_FEXT2_TUNE3_S_P2_LANE_3_0      = val;
    reg_DFE_FEXT2_TUNE1_S_P2_LANE_3_0      = val;
    reg_DFE_FEXT2_TUNE3_D_P3_LANE_3_0      = val;
    reg_DFE_FEXT2_TUNE1_D_P3_LANE_3_0      = val;
    reg_DFE_FEXT2_TUNE3_S_P3_LANE_3_0      = val;
    reg_DFE_FEXT2_TUNE1_S_P3_LANE_3_0      = val;
    reg_DFE_FEXT2_TUNE3_D_P4_LANE_3_0      = val;
    reg_DFE_FEXT2_TUNE1_D_P4_LANE_3_0      = val;
    reg_DFE_FEXT2_TUNE3_S_P4_LANE_3_0      = val;
    reg_DFE_FEXT2_TUNE1_S_P4_LANE_3_0      = val;
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
    memcpy((uint8_t *)&sav_dfe_sm, (uint8_t *)&DFE_READ_SM_REG0_P1, sizeof(dfe_sm_t));
}
/* **************************************************
 * DFE_LOAD
 *      Load DFE tap values, DFE resolution keep
 * Args:
 *      type
 *      0: EXT
 *      1: SAV
 *      2: F0 Only
 *      9: Reset all FEXT to 0 and load to taps.
 * Inputs:
 *      FEXT
 *      sav_dfe_sm
 *      cds.dfe_res
 * Outputs:
 *      FEXT_F0
 *      FEXT_OFST
 *      FEXT_DFE_RES*
 */
void dfe_load(uint8_t type) BANKING_CTRL
{
    switch(type)
    {
        case Loadsav:
            memcpy((uint8_t *)&DFE_FEXT_REG0_P1, (uint8_t *)&sav_dfe_sm, sizeof(dfe_sm_t));
            // skip break to save code size
        case Loadext:
            DFE_FEN_REG0_P1.VAL    = 0xffffffff;
            DFE_FEN_REG1_P1.VAL    = 0xffffffff;
            DFE_FEN_REG2_P1.VAL    = 0xffffffff;
            DFE_FEN_REG0_P2.VAL    = 0xffffffff;
            DFE_FEN_REG1_P2.VAL    = 0xffffffff;
            DFE_FEN_REG2_P2.VAL    = 0xffffffff;
            DFE_FEN_REG0_P3.VAL    = 0xffffffff;
            DFE_FEN_REG1_P3.VAL    = 0xffffffff;
            DFE_FEN_REG2_P3.VAL    = 0xffffffff;
            DFE_FEN_REG0_P4.VAL    = 0xffffffff;
            DFE_FEN_REG1_P4.VAL    = 0xffffffff;
            DFE_FEN_REG2_P4.VAL    = 0xffffffff;
            DFE_FEN_REG0_P1.VAL    = 0;
            DFE_FEN_REG1_P1.VAL    = 0;
            DFE_FEN_REG2_P1.VAL    = 0;
            DFE_FEN_REG0_P2.VAL    = 0;
            DFE_FEN_REG1_P2.VAL    = 0;
            DFE_FEN_REG2_P2.VAL    = 0;
            DFE_FEN_REG0_P3.VAL    = 0;
            DFE_FEN_REG1_P3.VAL    = 0;
            DFE_FEN_REG2_P3.VAL    = 0;
            DFE_FEN_REG0_P4.VAL    = 0;
            DFE_FEN_REG1_P4.VAL    = 0;
            DFE_FEN_REG2_P4.VAL    = 0;
            break;
        case Loadf0:
            reg_DFE_FEXT0_D_TOP_P1_LANE_5_0      = sav_dfe_sm.f0_d_top_p1;
            reg_DFE_FEXT0_D_MID_P1_LANE_5_0      = sav_dfe_sm.f0_d_mid_p1;
            reg_DFE_FEXT0_D_BOT_P1_LANE_5_0      = sav_dfe_sm.f0_d_bot_p1;
            reg_DFE_FEXT0_S_TOP_P1_LANE_5_0      = sav_dfe_sm.f0_s_top_p1;
            reg_DFE_FEXT0_S_MID_P1_LANE_5_0      = sav_dfe_sm.f0_s_mid_p1;
            reg_DFE_FEXT0_S_BOT_P1_LANE_5_0      = sav_dfe_sm.f0_s_bot_p1;
            reg_DFE_FEXT0_D_TOP_P2_LANE_5_0      = sav_dfe_sm.f0_d_top_p2;
            reg_DFE_FEXT0_D_MID_P2_LANE_5_0      = sav_dfe_sm.f0_d_mid_p2;
            reg_DFE_FEXT0_D_BOT_P2_LANE_5_0      = sav_dfe_sm.f0_d_bot_p2;
            reg_DFE_FEXT0_S_TOP_P2_LANE_5_0      = sav_dfe_sm.f0_s_top_p2;
            reg_DFE_FEXT0_S_MID_P2_LANE_5_0      = sav_dfe_sm.f0_s_mid_p2;
            reg_DFE_FEXT0_S_BOT_P2_LANE_5_0      = sav_dfe_sm.f0_s_bot_p2;
            reg_DFE_FEXT0_D_TOP_P3_LANE_5_0      = sav_dfe_sm.f0_d_top_p3;
            reg_DFE_FEXT0_D_MID_P3_LANE_5_0      = sav_dfe_sm.f0_d_mid_p3;
            reg_DFE_FEXT0_D_BOT_P3_LANE_5_0      = sav_dfe_sm.f0_d_bot_p3;
            reg_DFE_FEXT0_S_TOP_P3_LANE_5_0      = sav_dfe_sm.f0_s_top_p3;
            reg_DFE_FEXT0_S_MID_P3_LANE_5_0      = sav_dfe_sm.f0_s_mid_p3;
            reg_DFE_FEXT0_S_BOT_P3_LANE_5_0      = sav_dfe_sm.f0_s_bot_p3;
            reg_DFE_FEXT0_D_TOP_P4_LANE_5_0      = sav_dfe_sm.f0_d_top_p4;
            reg_DFE_FEXT0_D_MID_P4_LANE_5_0      = sav_dfe_sm.f0_d_mid_p4;
            reg_DFE_FEXT0_D_BOT_P4_LANE_5_0      = sav_dfe_sm.f0_d_bot_p4;
            reg_DFE_FEXT0_S_TOP_P4_LANE_5_0      = sav_dfe_sm.f0_s_top_p4;
            reg_DFE_FEXT0_S_MID_P4_LANE_5_0      = sav_dfe_sm.f0_s_mid_p4;
            reg_DFE_FEXT0_S_BOT_P4_LANE_5_0      = sav_dfe_sm.f0_s_bot_p4;
            tgl_fen0();
            break;
        case Loadrst:
            memset0((uint8_t *)&DFE_FEXT_REG0_P1, sizeof(dfe_sm_t));
            if (reg_CDS_F2T_VAL_FORCE_LANE) {
            cds_load_f2t();
	    }
            DFE_FEN_REG0_P1.VAL    = 0xffffffff;
            DFE_FEN_REG1_P1.VAL    = 0xffffffff;
            DFE_FEN_REG2_P1.VAL    = 0xffffffff;
            DFE_FEN_REG0_P2.VAL    = 0xffffffff;
            DFE_FEN_REG1_P2.VAL    = 0xffffffff;
            DFE_FEN_REG2_P2.VAL    = 0xffffffff;
            DFE_FEN_REG0_P3.VAL    = 0xffffffff;
            DFE_FEN_REG1_P3.VAL    = 0xffffffff;
            DFE_FEN_REG2_P3.VAL    = 0xffffffff;
            DFE_FEN_REG0_P4.VAL    = 0xffffffff;
            DFE_FEN_REG1_P4.VAL    = 0xffffffff;
            DFE_FEN_REG2_P4.VAL    = 0xffffffff;
            DFE_FEN_REG0_P1.VAL    = 0;
            DFE_FEN_REG1_P1.VAL    = 0;
            DFE_FEN_REG2_P1.VAL    = 0;
            DFE_FEN_REG0_P2.VAL    = 0;
            DFE_FEN_REG1_P2.VAL    = 0;
            DFE_FEN_REG2_P2.VAL    = 0;
            DFE_FEN_REG0_P3.VAL    = 0;
            DFE_FEN_REG1_P3.VAL    = 0;
            DFE_FEN_REG2_P3.VAL    = 0;
            DFE_FEN_REG0_P4.VAL    = 0;
            DFE_FEN_REG1_P4.VAL    = 0;
            DFE_FEN_REG2_P4.VAL    = 0;
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
    // TODO. This is a sign poloarity change. Need test to confirm.
uint8_t ofst_2ctosm6(int8_t ofst) BANKING_CTRL
{
    uint8_t fextdc;
    ofst = ofst >> 1;
#if 1
    ofst = -ofst; 
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
        smplr_to_dfe_ofst_P1P3();
        config_sampler_p1to3_ext(1);
        smplr_to_dfe_ofst_P2P4();
        config_sampler_p2to4_ext(1);
    /*

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
	*/
    }
    else
    {
        //  load adapted DC values to samplers
        reg_DFE_FEXTDC_D_TOP_P1_LANE_5_0 = sav_dfe_sm.dc_d_top_p1;
        reg_DFE_FEXTDC_D_MID_P1_LANE_5_0 = sav_dfe_sm.dc_d_mid_p1;
        reg_DFE_FEXTDC_D_BOT_P1_LANE_5_0 = sav_dfe_sm.dc_d_bot_p1;

        reg_DFE_FEXTDC_D_TOP_P2_LANE_5_0 = sav_dfe_sm.dc_d_top_p2;
        reg_DFE_FEXTDC_D_MID_P2_LANE_5_0 = sav_dfe_sm.dc_d_mid_p2;
        reg_DFE_FEXTDC_D_BOT_P2_LANE_5_0 = sav_dfe_sm.dc_d_bot_p2;

        reg_DFE_FEXTDC_D_TOP_P3_LANE_5_0 = sav_dfe_sm.dc_d_top_p3;
        reg_DFE_FEXTDC_D_MID_P3_LANE_5_0 = sav_dfe_sm.dc_d_mid_p3;
        reg_DFE_FEXTDC_D_BOT_P3_LANE_5_0 = sav_dfe_sm.dc_d_bot_p3;

        reg_DFE_FEXTDC_D_TOP_P4_LANE_5_0 = sav_dfe_sm.dc_d_top_p4;
        reg_DFE_FEXTDC_D_MID_P4_LANE_5_0 = sav_dfe_sm.dc_d_mid_p4;
        reg_DFE_FEXTDC_D_BOT_P4_LANE_5_0 = sav_dfe_sm.dc_d_bot_p4;

        reg_DFE_FEXTDC_S_TOP_P1_LANE_5_0 = sav_dfe_sm.dc_s_top_p1;
        reg_DFE_FEXTDC_S_MID_P1_LANE_5_0 = sav_dfe_sm.dc_s_mid_p1;
        reg_DFE_FEXTDC_S_BOT_P1_LANE_5_0 = sav_dfe_sm.dc_s_bot_p1;

        reg_DFE_FEXTDC_S_TOP_P2_LANE_5_0 = sav_dfe_sm.dc_s_top_p2;
        reg_DFE_FEXTDC_S_MID_P2_LANE_5_0 = sav_dfe_sm.dc_s_mid_p2;
        reg_DFE_FEXTDC_S_BOT_P2_LANE_5_0 = sav_dfe_sm.dc_s_bot_p2;

        reg_DFE_FEXTDC_S_TOP_P3_LANE_5_0 = sav_dfe_sm.dc_s_top_p3;
        reg_DFE_FEXTDC_S_MID_P3_LANE_5_0 = sav_dfe_sm.dc_s_mid_p3;
        reg_DFE_FEXTDC_S_BOT_P3_LANE_5_0 = sav_dfe_sm.dc_s_bot_p3;

        reg_DFE_FEXTDC_S_TOP_P4_LANE_5_0 = sav_dfe_sm.dc_s_top_p4;
        reg_DFE_FEXTDC_S_MID_P4_LANE_5_0 = sav_dfe_sm.dc_s_mid_p4;
        reg_DFE_FEXTDC_S_BOT_P4_LANE_5_0 = sav_dfe_sm.dc_s_bot_p4;

        reg_DFE_FEXTDC_E_P1_LANE_6_0 = sav_dfe_sm.dc_e_p1;
        reg_DFE_FEXTDC_E_P2_LANE_6_0 = sav_dfe_sm.dc_e_p2;
        reg_DFE_FEXTDC_E_P3_LANE_6_0 = sav_dfe_sm.dc_e_p3;
        reg_DFE_FEXTDC_E_P4_LANE_6_0 = sav_dfe_sm.dc_e_p4;
    }

    reg_DFE_FENDC_D_P1_LANE_2_0 = 7;     reg_DFE_FENDC_D_P1_LANE_2_0 = 0;
    reg_DFE_FENDC_D_P2_LANE_2_0 = 7;     reg_DFE_FENDC_D_P2_LANE_2_0 = 0;
    reg_DFE_FENDC_D_P3_LANE_2_0 = 7;     reg_DFE_FENDC_D_P3_LANE_2_0 = 0;
    reg_DFE_FENDC_D_P4_LANE_2_0 = 7;     reg_DFE_FENDC_D_P4_LANE_2_0 = 0;
    reg_DFE_FENDC_S_P1_LANE_2_0 = 7;     reg_DFE_FENDC_S_P1_LANE_2_0 = 0;
    reg_DFE_FENDC_S_P2_LANE_2_0 = 7;     reg_DFE_FENDC_S_P2_LANE_2_0 = 0;
    reg_DFE_FENDC_S_P3_LANE_2_0 = 7;     reg_DFE_FENDC_S_P3_LANE_2_0 = 0;
    reg_DFE_FENDC_S_P4_LANE_2_0 = 7;     reg_DFE_FENDC_S_P4_LANE_2_0 = 0;

    reg_DFE_FENDC_E_P1_LANE = 1;         reg_DFE_FENDC_E_P1_LANE = 0;
    reg_DFE_FENDC_E_P2_LANE = 1;         reg_DFE_FENDC_E_P2_LANE = 0;
    reg_DFE_FENDC_E_P3_LANE = 1;         reg_DFE_FENDC_E_P3_LANE = 0;
    reg_DFE_FENDC_E_P4_LANE = 1;         reg_DFE_FENDC_E_P4_LANE = 0;

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
        f0_min =            cds112.f.f0d.d_top_p1;
        f0_min = min_ram(f0_min,cds112.f.f0d.d_mid_p1);
        f0_min = min_ram(f0_min,cds112.f.f0d.d_bot_p1);
        f0_min = min_ram(f0_min,cds112.f.f0d.s_top_p1);
        f0_min = min_ram(f0_min,cds112.f.f0d.s_mid_p1);
        f0_min = min_ram(f0_min,cds112.f.f0d.s_bot_p1);
        f0_min = min_ram(f0_min,cds112.f.f0d.d_top_p2);
        f0_min = min_ram(f0_min,cds112.f.f0d.d_mid_p2);
        f0_min = min_ram(f0_min,cds112.f.f0d.d_bot_p2);
        f0_min = min_ram(f0_min,cds112.f.f0d.s_top_p2);
        f0_min = min_ram(f0_min,cds112.f.f0d.s_mid_p2);
        f0_min = min_ram(f0_min,cds112.f.f0d.s_bot_p2);
        f0_min = min_ram(f0_min,cds112.f.f0d.d_top_p3);
        f0_min = min_ram(f0_min,cds112.f.f0d.d_mid_p3);
        f0_min = min_ram(f0_min,cds112.f.f0d.d_bot_p3);
        f0_min = min_ram(f0_min,cds112.f.f0d.s_top_p3);
        f0_min = min_ram(f0_min,cds112.f.f0d.s_mid_p3);
        f0_min = min_ram(f0_min,cds112.f.f0d.s_bot_p3);
        f0_min = min_ram(f0_min,cds112.f.f0d.d_top_p4);
        f0_min = min_ram(f0_min,cds112.f.f0d.d_mid_p4);
        f0_min = min_ram(f0_min,cds112.f.f0d.d_bot_p4);
        f0_min = min_ram(f0_min,cds112.f.f0d.s_top_p4);
        f0_min = min_ram(f0_min,cds112.f.f0d.s_mid_p4);
        f0_min = min_ram(f0_min,cds112.f.f0d.s_bot_p4);
    }
    else
    {
        f0_min =            cds112.f.f0a.d_top_p1;
        f0_min = min_ram(f0_min,cds112.f.f0a.d_mid_p1);
        f0_min = min_ram(f0_min,cds112.f.f0a.d_bot_p1);
        f0_min = min_ram(f0_min,cds112.f.f0a.s_top_p1);
        f0_min = min_ram(f0_min,cds112.f.f0a.s_mid_p1);
        f0_min = min_ram(f0_min,cds112.f.f0a.s_bot_p1);
        f0_min = min_ram(f0_min,cds112.f.f0a.d_top_p2);
        f0_min = min_ram(f0_min,cds112.f.f0a.d_mid_p2);
        f0_min = min_ram(f0_min,cds112.f.f0a.d_bot_p2);
        f0_min = min_ram(f0_min,cds112.f.f0a.s_top_p2);
        f0_min = min_ram(f0_min,cds112.f.f0a.s_mid_p2);
        f0_min = min_ram(f0_min,cds112.f.f0a.s_bot_p2);
        f0_min = min_ram(f0_min,cds112.f.f0a.d_top_p3);
        f0_min = min_ram(f0_min,cds112.f.f0a.d_mid_p3);
        f0_min = min_ram(f0_min,cds112.f.f0a.d_bot_p3);
        f0_min = min_ram(f0_min,cds112.f.f0a.s_top_p3);
        f0_min = min_ram(f0_min,cds112.f.f0a.s_mid_p3);
        f0_min = min_ram(f0_min,cds112.f.f0a.s_bot_p3);
        f0_min = min_ram(f0_min,cds112.f.f0a.d_top_p4);
        f0_min = min_ram(f0_min,cds112.f.f0a.d_mid_p4);
        f0_min = min_ram(f0_min,cds112.f.f0a.d_bot_p4);
        f0_min = min_ram(f0_min,cds112.f.f0a.s_top_p4);
        f0_min = min_ram(f0_min,cds112.f.f0a.s_mid_p4);
        f0_min = min_ram(f0_min,cds112.f.f0a.s_bot_p4);

    }
    f0 = (f0_min >> tag_EYE_CHK_THRESH_K) + tag_EYE_CHK_THRESH_C;
    return f0;
}

void set_esm_voltage(uint8_t f0) BANKING_CTRL
{
    if(lnx_ESM_PATH_SEL_LANE) // S 
    {
        reg_DFE_FEXT0_D_TOP_P1_LANE_5_0 = 0;
        reg_DFE_FEXT0_D_MID_P1_LANE_5_0 = 0;
        reg_DFE_FEXT0_D_BOT_P1_LANE_5_0 = 0;
        reg_DFE_FEXT0_D_TOP_P2_LANE_5_0 = 0;
        reg_DFE_FEXT0_D_MID_P2_LANE_5_0 = 0;
        reg_DFE_FEXT0_D_BOT_P2_LANE_5_0 = 0;
        reg_DFE_FEXT0_D_TOP_P3_LANE_5_0 = 0;
        reg_DFE_FEXT0_D_MID_P3_LANE_5_0 = 0;
        reg_DFE_FEXT0_D_BOT_P3_LANE_5_0 = 0;
        reg_DFE_FEXT0_D_TOP_P4_LANE_5_0 = 0;
        reg_DFE_FEXT0_D_MID_P4_LANE_5_0 = 0;
        reg_DFE_FEXT0_D_BOT_P4_LANE_5_0 = 0;

        reg_DFE_FEXT0_S_TOP_P1_LANE_5_0 = f0;
        reg_DFE_FEXT0_S_MID_P1_LANE_5_0 = f0;
        reg_DFE_FEXT0_S_BOT_P1_LANE_5_0 = f0;
        reg_DFE_FEXT0_S_TOP_P2_LANE_5_0 = f0;
        reg_DFE_FEXT0_S_MID_P2_LANE_5_0 = f0;
        reg_DFE_FEXT0_S_BOT_P2_LANE_5_0 = f0;
        reg_DFE_FEXT0_S_TOP_P3_LANE_5_0 = f0;
        reg_DFE_FEXT0_S_MID_P3_LANE_5_0 = f0;
        reg_DFE_FEXT0_S_BOT_P3_LANE_5_0 = f0;
        reg_DFE_FEXT0_S_TOP_P4_LANE_5_0 = f0;
        reg_DFE_FEXT0_S_MID_P4_LANE_5_0 = f0;
        reg_DFE_FEXT0_S_BOT_P4_LANE_5_0 = f0;

    }
    else // D
    {
        reg_DFE_FEXT0_D_TOP_P1_LANE_5_0 = f0;
        reg_DFE_FEXT0_D_MID_P1_LANE_5_0 = f0;
        reg_DFE_FEXT0_D_BOT_P1_LANE_5_0 = f0;
        reg_DFE_FEXT0_D_TOP_P2_LANE_5_0 = f0;
        reg_DFE_FEXT0_D_MID_P2_LANE_5_0 = f0;
        reg_DFE_FEXT0_D_BOT_P2_LANE_5_0 = f0;
        reg_DFE_FEXT0_D_TOP_P3_LANE_5_0 = f0;
        reg_DFE_FEXT0_D_MID_P3_LANE_5_0 = f0;
        reg_DFE_FEXT0_D_BOT_P3_LANE_5_0 = f0;
        reg_DFE_FEXT0_D_TOP_P4_LANE_5_0 = f0;
        reg_DFE_FEXT0_D_MID_P4_LANE_5_0 = f0;
        reg_DFE_FEXT0_D_BOT_P4_LANE_5_0 = f0;

        reg_DFE_FEXT0_S_TOP_P1_LANE_5_0 = 0;
        reg_DFE_FEXT0_S_MID_P1_LANE_5_0 = 0;
        reg_DFE_FEXT0_S_BOT_P1_LANE_5_0 = 0;
        reg_DFE_FEXT0_S_TOP_P2_LANE_5_0 = 0;
        reg_DFE_FEXT0_S_MID_P2_LANE_5_0 = 0;
        reg_DFE_FEXT0_S_BOT_P2_LANE_5_0 = 0;
        reg_DFE_FEXT0_S_TOP_P3_LANE_5_0 = 0;
        reg_DFE_FEXT0_S_MID_P3_LANE_5_0 = 0;
        reg_DFE_FEXT0_S_BOT_P3_LANE_5_0 = 0;
        reg_DFE_FEXT0_S_TOP_P4_LANE_5_0 = 0;
        reg_DFE_FEXT0_S_MID_P4_LANE_5_0 = 0;
        reg_DFE_FEXT0_S_BOT_P4_LANE_5_0 = 0;
    }

    tgl_fen0();
}

void tgl_fen0() BANKING_CTRL
{
    reg_DFE_FEN0_S_P1_LANE_2_0 = 7;   reg_DFE_FEN0_S_P1_LANE_2_0 = 0;
    reg_DFE_FEN0_D_P1_LANE_2_0 = 7;   reg_DFE_FEN0_D_P1_LANE_2_0 = 0;
    reg_DFE_FEN0_S_P2_LANE_2_0 = 7;   reg_DFE_FEN0_S_P2_LANE_2_0 = 0;
    reg_DFE_FEN0_D_P2_LANE_2_0 = 7;   reg_DFE_FEN0_D_P2_LANE_2_0 = 0;
    reg_DFE_FEN0_S_P3_LANE_2_0 = 7;   reg_DFE_FEN0_S_P3_LANE_2_0 = 0;
    reg_DFE_FEN0_D_P3_LANE_2_0 = 7;   reg_DFE_FEN0_D_P3_LANE_2_0 = 0;
    reg_DFE_FEN0_S_P4_LANE_2_0 = 7;   reg_DFE_FEN0_S_P4_LANE_2_0 = 0;
    reg_DFE_FEN0_D_P4_LANE_2_0 = 7;   reg_DFE_FEN0_D_P4_LANE_2_0 = 0;
}

void tgl_fen_vref() BANKING_CTRL
{
    reg_DFE_FENVREF_P1_LANE_2_0_b0 = 1;   reg_DFE_FENVREF_P1_LANE_2_0_b0 = 0;
    reg_DFE_FENVREF_P1_LANE_2_0_b1 = 3;   reg_DFE_FENVREF_P1_LANE_2_0_b1 = 0;
    reg_DFE_FENVREF_P2_LANE_2_0_b0 = 1;   reg_DFE_FENVREF_P2_LANE_2_0_b0 = 0;
    reg_DFE_FENVREF_P2_LANE_2_0_b1 = 3;   reg_DFE_FENVREF_P2_LANE_2_0_b1 = 0;
    reg_DFE_FENVREF_P3_LANE_2_0_b0 = 1;   reg_DFE_FENVREF_P3_LANE_2_0_b0 = 0;
    reg_DFE_FENVREF_P3_LANE_2_0_b1 = 3;   reg_DFE_FENVREF_P3_LANE_2_0_b1 = 0;
    reg_DFE_FENVREF_P4_LANE_2_0_b0 = 1;   reg_DFE_FENVREF_P4_LANE_2_0_b0 = 0;
    reg_DFE_FENVREF_P4_LANE_2_0_b1 = 3;   reg_DFE_FENVREF_P4_LANE_2_0_b1 = 0;
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
#if 1
        pop_cnt =                EOM_VLD_REG00.VAL;
        pop_cnt = maxu32(pop_cnt,EOM_VLD_REG01.VAL);
        pop_cnt = maxu32(pop_cnt,EOM_VLD_REG02.VAL);
        pop_cnt = maxu32(pop_cnt,EOM_VLD_REG10.VAL);
        pop_cnt = maxu32(pop_cnt,EOM_VLD_REG11.VAL);
        pop_cnt = maxu32(pop_cnt,EOM_VLD_REG12.VAL);
        err_cnt =                EOM_ERR_REG00.VAL;
        err_cnt = maxu32(err_cnt,EOM_ERR_REG01.VAL);
        err_cnt = maxu32(err_cnt,EOM_ERR_REG02.VAL);
        err_cnt = maxu32(err_cnt,EOM_ERR_REG10.VAL);
        err_cnt = maxu32(err_cnt,EOM_ERR_REG11.VAL);
        err_cnt = maxu32(err_cnt,EOM_ERR_REG12.VAL);
#else
        pop_cnt =                EOM_VLD_REG00.VAL;
        err_cnt =                EOM_ERR_REG00.VAL;
#endif
#if _DBG_EOM
{
	int16_t ph_os_tmp;
	ph_os_tmp = (int16_t)reg_RX_EOM_PI_CAL_RESULT_RD_LANE_10_4;
    ph_os_tmp = ph_os_tmp << 4; 
    ph_os_tmp = ph_os_tmp | (int16_t)reg_RX_EOM_PI_CAL_RESULT_RD_LANE_3_0;
//if(!lnx_EOM_READY_LANE)
if((reg_MCU_DEBUGB_LANE_7_0>>7&0x1)==0)
	DBG_Printf("[%d,%d:%lu,%lu]\r\n",ph_os_tmp,drv_ESM_VOLTAGE,pop_cnt,err_cnt);
}
#endif
        if(pop_cnt < tag_EYE_CHK_THRESH_VLD) return 0;
// Consider to vary with speed?
		if(lnx_ESM_EN_LANE==1 && lnx_EOM_READY_LANE==0){// ui_align stage use 4096L to match lpnum 0x2008
			if(err_cnt > 4096L) return 0;
		}else{
			if(err_cnt > tag_EYE_CHK_THRESH_ERR) return 0;
        }
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
 *      reg_DFE_UPDATE_EN[30:0]
 *      reg_DFE_UPDATE_DC_EN
 *      reg_DFE_ADAPT_LPNUM[9:0]
 */
void dfe_fsm(uint16_t lpnum, uint16_t tap_en) BANKING_CTRL
{
    uint8_t adapt_lpnum;
    uint8_t pol_lpnum;
    // dfe_dis
    if(!reg_DFE_EN_LANE) return;

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
        //reg_DFE_ADAPT_LPNUM_LANE_9_0_b1 = adapt_lpnum >> 8;     // 2b
        reg_DFE_POL_LPNUM_LANE_9_0_b0 = pol_lpnum;              // 6b
        reg_DFE_POL_LPNUM_LANE_9_0_b1 = pol_lpnum >> 6;         // 4b
    }

    reg_DFE_UPDATE_EN_LANE_30_0_b0 = 0;
    reg_DFE_UPDATE_EN_LANE_30_0_b1 = 0;
    reg_DFE_UPDATE_EN_LANE_30_0_b2 = 0;
    reg_DFE_UPDATE_EN_LANE_30_0_b3 = 0;
    reg_DFE_UPDATE_DC_EN_LANE = 0;
    reg_DFE_UPDATE_VREF_EN_LANE = 0;
    reg_DFE_UPDATE_UT_EN_LANE = 0;
    reg_DFE_UPDATE_UB_EN_LANE = 0;
    reg_DFE_UPDATE_DCE_EN_LANE = 0;
    reg_DFE_UPDATE_HP1_EN_LANE = 0;
    reg_DFE_UPDATE_HN1_EN_LANE = 0;

    if(tap_en & Update0)        reg_DFE_UPDATE_EN_LANE_30_0_b0 |= 1;
    if(tap_en & Updatevref)     reg_DFE_UPDATE_VREF_EN_LANE = 1;
    if(tap_en & Updatedc)       reg_DFE_UPDATE_DC_EN_LANE = 1;
    if(tap_en & Updatefixed)
        if(!tag_LOCK_DFE_ON)    {
                                reg_DFE_UPDATE_EN_LANE_30_0_b0 = 0xff;
                                reg_DFE_UPDATE_EN_LANE_30_0_b1 = 0xff; 
                                reg_DFE_UPDATE_EN_LANE_30_0_b2 = 0xff; 
                                reg_DFE_UPDATE_EN_LANE_30_0_b3 = 0x7f; 
                                }

    if(tag_DFE_RATE_MODE == 0) // half rate
    {
        reg_DFE_UPDATE_EN_LANE_30_0_b0 &= 0x55;
        reg_DFE_UPDATE_EN_LANE_30_0_b1 &= 0x55;
        reg_DFE_UPDATE_EN_LANE_30_0_b2 &= 0x55;
        reg_DFE_UPDATE_EN_LANE_30_0_b3 &= 0x55;
    }

    if(tag_DFE_RATE_MODE == 1) // full rate
    {
        reg_DFE_UPDATE_EN_LANE_30_0_b0 &= 0x11;
        reg_DFE_UPDATE_EN_LANE_30_0_b1 &= 0x11;
        reg_DFE_UPDATE_EN_LANE_30_0_b2 &= 0x11;
        reg_DFE_UPDATE_EN_LANE_30_0_b3 &= 0x11;
    }

    if(tap_en & Updatefloat)
        if(!tag_LOCK_DFE_ON && !reg_CDS_UPDATE_F_DIS_LANE)    
	{
            reg_DFE_UPDATE_EN_LANE_30_0_b1 |= 0x80; // f15 -> ff1
            reg_DFE_UPDATE_EN_LANE_30_0_b2 |= 0xaa; // f17,19,21,23 -> ff2,3,4,5
            reg_DFE_UPDATE_EN_LANE_30_0_b3 |= 0x2a; // f25,27,29    -> ff6,7
	}
    if(tap_en & Updatedce)      reg_DFE_UPDATE_DCE_EN_LANE = 1;
    if(tap_en & Updatefir)      {
                                reg_DFE_UPDATE_HN1_EN_LANE = 1;
                                reg_DFE_UPDATE_HP1_EN_LANE = 1;
                                }
    if(tap_en & Updatef2t)      {
                                reg_DFE_UPDATE_UT_EN_LANE = 1;
                                reg_DFE_UPDATE_UB_EN_LANE = 1;
                                }
    reg_DFE_START_LANE = 1;
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
 *      reg_RX_HALFRATE_EN_LANE
 *      reg_RX_SPEED_DIV_LANE_2_0
 * Outputs:
 */
void dfe_spd_init() BANKING_CTRL
{
    // Set RESET_DFE = 1 if needed
    uint8_t rd_reset_dfe = reg_RESET_DFE_LANE;
    if (rd_reset_dfe != 1) reg_RESET_DFE_LANE = 1;

	// Mo: Updated dfe_spd_init() to reset all DFE external values to 0 in the beginning
	//dfe_load(Loadrst);
    // set fext to 0
    memset0((uint8_t *)&DFE_FEXT_REG0_P1, sizeof(dfe_sm_t));
    reg_DFE_FEXT0_D_TOP_P1_LANE_5_0  = 32;
    reg_DFE_FEXT0_D_MID_P1_LANE_5_0  = 32;
    reg_DFE_FEXT0_D_BOT_P1_LANE_5_0  = 32;
    reg_DFE_FEXT0_S_TOP_P1_LANE_5_0  = 32;
    reg_DFE_FEXT0_S_MID_P1_LANE_5_0  = 32;
    reg_DFE_FEXT0_S_BOT_P1_LANE_5_0  = 32;
    reg_DFE_FEXT0_D_TOP_P2_LANE_5_0  = 32;
    reg_DFE_FEXT0_D_MID_P2_LANE_5_0  = 32;
    reg_DFE_FEXT0_D_BOT_P2_LANE_5_0  = 32;
    reg_DFE_FEXT0_S_TOP_P2_LANE_5_0  = 32;
    reg_DFE_FEXT0_S_MID_P2_LANE_5_0  = 32;
    reg_DFE_FEXT0_S_BOT_P2_LANE_5_0  = 32;
    reg_DFE_FEXT0_D_TOP_P3_LANE_5_0  = 32;
    reg_DFE_FEXT0_D_MID_P3_LANE_5_0  = 32;
    reg_DFE_FEXT0_D_BOT_P3_LANE_5_0  = 32;
    reg_DFE_FEXT0_S_TOP_P3_LANE_5_0  = 32;
    reg_DFE_FEXT0_S_MID_P3_LANE_5_0  = 32;
    reg_DFE_FEXT0_S_BOT_P3_LANE_5_0  = 32;
    reg_DFE_FEXT0_D_TOP_P4_LANE_5_0  = 32;
    reg_DFE_FEXT0_D_MID_P4_LANE_5_0  = 32;
    reg_DFE_FEXT0_D_BOT_P4_LANE_5_0  = 32;
    reg_DFE_FEXT0_S_TOP_P4_LANE_5_0  = 32;
    reg_DFE_FEXT0_S_MID_P4_LANE_5_0  = 32;
    reg_DFE_FEXT0_S_BOT_P4_LANE_5_0  = 32;
/*    // Set F0 analog register in case when spd high to low, no clock to send fext0 to f0*/
/*    reg_DFE_F0_D_TOP_P1_LANE_5_0  = 32;*/
/*    reg_DFE_F0_D_MID_P1_LANE_5_0  = 32;*/
/*    reg_DFE_F0_D_BOT_P1_LANE_5_0  = 32;*/
/*    reg_DFE_F0_S_TOP_P1_LANE_5_0  = 32;*/
/*    reg_DFE_F0_S_MID_P1_LANE_5_0  = 32;*/
/*    reg_DFE_F0_S_BOT_P1_LANE_5_0  = 32;*/
/*    reg_DFE_F0_D_TOP_P2_LANE_5_0  = 32;*/
/*    reg_DFE_F0_D_MID_P2_LANE_5_0  = 32;*/
/*    reg_DFE_F0_D_BOT_P2_LANE_5_0  = 32;*/
/*    reg_DFE_F0_S_TOP_P2_LANE_5_0  = 32;*/
/*    reg_DFE_F0_S_MID_P2_LANE_5_0  = 32;*/
/*    reg_DFE_F0_S_BOT_P2_LANE_5_0  = 32;*/
/*    reg_DFE_F0_D_TOP_P3_LANE_5_0  = 32;*/
/*    reg_DFE_F0_D_MID_P3_LANE_5_0  = 32;*/
/*    reg_DFE_F0_D_BOT_P3_LANE_5_0  = 32;*/
/*    reg_DFE_F0_S_TOP_P3_LANE_5_0  = 32;*/
/*    reg_DFE_F0_S_MID_P3_LANE_5_0  = 32;*/
/*    reg_DFE_F0_S_BOT_P3_LANE_5_0  = 32;*/
/*    reg_DFE_F0_D_TOP_P4_LANE_5_0  = 32;*/
/*    reg_DFE_F0_D_MID_P4_LANE_5_0  = 32;*/
/*    reg_DFE_F0_D_BOT_P4_LANE_5_0  = 32;*/
/*    reg_DFE_F0_S_TOP_P4_LANE_5_0  = 32;*/
/*    reg_DFE_F0_S_MID_P4_LANE_5_0  = 32;*/
/*    reg_DFE_F0_S_BOT_P4_LANE_5_0  = 32;*/

    if (!reg_RX_HALFRATE_EN_LANE) {
        set_dfe_mod(MODpam4qr);
    } else if ((reg_RXSPEED_DIV_LANE_2_0 & 0x3) == 0) {
        if (!reg_RX_PAM2_EN_LANE) {
		    set_dfe_mod(MODpam4hr);
		} else {
		    set_dfe_mod(MODpam2hr);
		}
    } else {
        set_dfe_mod(MODpam2fr);
    }
    
    // Mo: disable DFE EQ for low data rates
    if (reg_RXSPEED_DIV_LANE_2_0 == 0x6) {
        set_dfe_en(0);
    } else {
        set_dfe_en(1);
    }

    // Set RESET_DFE = 1 if needed
    if (rd_reset_dfe != 1) reg_RESET_DFE_LANE = 0;
	
	// Confirmed by Xu. No need for long time.
	delay_ram(T_100us);
/*	timeout_start((uint16_t)50);*/
/*	while(!timeout);*/
}

/* **************************************************
 * SET_DFE_MOD
 * Inputs:
 *      mod
 * Outputs:
 *      tag_DFE_RATE_MODE 
 *      reg_CDS_ADAPT_SPLR_DIS_LANE_7_0 
 *      reg_CDS_UPDATE_F_DIS_LANE 
 *      reg_DFE_PAM2_MODE_LANE 
 *      reg_DFE_PAM2_LP_MODE_LANE 
 *      reg_EN_DFE_VREF_LANE 
 *      reg_DFE_F0_RES_DOUBLE_LANE 
 *      reg_ANA_RX_ADAPT_P1P3_EN_LANE 
 *      reg_DFE_PAM2_LP_MODE_LANE 
 *      reg_DFE_PAM2_MODE_LANE 
 *      reg_CDS_ADAPT_SPLR_DIS_LANE_7_0
 *      reg_CDS_UPDATE_F_DIS_LANE
 */
void set_dfe_mod(uint8_t mod) BANKING_CTRL
{
    reg_PU_SMPLR_D_P1_LANE_2_0 = 7;
    reg_PU_SMPLR_D_P2_LANE_2_0 = 7;
    reg_PU_SMPLR_D_P3_LANE_2_0 = 7;
    reg_PU_SMPLR_D_P4_LANE_2_0 = 7;
    reg_PU_SMPLR_S_P1_LANE_2_0 = 7;
    reg_PU_SMPLR_S_P2_LANE_2_0 = 7;
    reg_PU_SMPLR_S_P3_LANE_2_0 = 7;
    reg_PU_SMPLR_S_P4_LANE_2_0 = 7;

    switch(mod)
    {
        case MODpam4qr:
            tag_DFE_RATE_MODE = 2;
            reg_CDS_ADAPT_SPLR_DIS_LANE_7_0 = 0;
            reg_CDS_UPDATE_F_DIS_LANE = 1;
            reg_DFE_PAM2_MODE_LANE = 0;
            reg_DFE_PAM2_LP_MODE_LANE = 0;
//            reg_EN_DFE_VREF_LANE = 1;
            reg_DFE_F0_RES_DOUBLE_LANE = 0;
	    reg_ANA_RX_ADAPT_P1P3_EN_LANE = 1;
	    break;
        case MODpam4hr:
            tag_DFE_RATE_MODE = 0;
            reg_CDS_ADAPT_SPLR_DIS_LANE_7_0 = 0x55;
            reg_CDS_UPDATE_F_DIS_LANE = 0;
            reg_DFE_PAM2_MODE_LANE = 0;
            reg_DFE_PAM2_LP_MODE_LANE = 0;
//            reg_EN_DFE_VREF_LANE = 1;
            reg_DFE_F0_RES_DOUBLE_LANE = 0;
            reg_PU_SMPLR_D_P1_LANE_2_0 = 0;
            reg_PU_SMPLR_D_P3_LANE_2_0 = 0;
            reg_PU_SMPLR_S_P1_LANE_2_0 = 0;
            reg_PU_SMPLR_S_P3_LANE_2_0 = 0;
	    reg_ANA_RX_ADAPT_P1P3_EN_LANE = 0;
            break;
        case MODpam2hr:
            tag_DFE_RATE_MODE = 0;
            reg_CDS_ADAPT_SPLR_DIS_LANE_7_0 = 0x55;
            reg_CDS_UPDATE_F_DIS_LANE = 0;
            reg_DFE_PAM2_MODE_LANE = 1;
//            reg_EN_DFE_VREF_LANE = 0;
            reg_DFE_F0_RES_DOUBLE_LANE = 1;
            reg_PU_SMPLR_D_P1_LANE_2_0 = 0;
            reg_PU_SMPLR_D_P3_LANE_2_0 = 0;
            reg_PU_SMPLR_S_P1_LANE_2_0 = 0;
            reg_PU_SMPLR_S_P3_LANE_2_0 = 0;
	    reg_ANA_RX_ADAPT_P1P3_EN_LANE = 0;
            if (reg_DFE_PAM2_LP_MODE_LANE ) {

            reg_ANA_RX_DFE_F2_POL_EN_D_P2_LANE_2_0     = 5;
            reg_ANA_RX_DFE_F2_POL_EN_D_P4_LANE_2_0     = 5;
            reg_ANA_RX_DFE_F2_POL_EN_S_P2_LANE_2_0_b0  = 1;
            reg_ANA_RX_DFE_F2_POL_EN_S_P2_LANE_2_0_b1  = 2;
            reg_ANA_RX_DFE_F2_POL_EN_S_P4_LANE_2_0     = 4;
            reg_ANA_RX_DFE_F2_POL_D_P2P4_LANE_2_0_b0   = 0;
            reg_ANA_RX_DFE_F2_POL_D_P2P4_LANE_2_0_b1   = 1;
            reg_ANA_RX_DFE_F2_POL_S_P2P4_LANE_2_0      = 4;
            reg_ANA_RX_DFE_F2_POL_EN_D_P2_FORCE_LANE = 1;
            reg_ANA_RX_DFE_F2_POL_EN_D_P4_FORCE_LANE = 1;
            reg_ANA_RX_DFE_F2_POL_EN_S_P2_FORCE_LANE = 1;
            reg_ANA_RX_DFE_F2_POL_EN_S_P4_FORCE_LANE = 1;
            reg_ANA_RX_DFE_F2_POL_D_P2P4_FORCE_LANE  = 1;
            reg_ANA_RX_DFE_F2_POL_S_P2P4_FORCE_LANE  = 1;

            reg_PU_SMPLR_D_P2_LANE_2_0 = 2;
            reg_PU_SMPLR_D_P4_LANE_2_0 = 2;
            reg_PU_SMPLR_S_P2_LANE_2_0 = 2;
            reg_PU_SMPLR_S_P4_LANE_2_0 = 2;

            reg_ANA_RX_DFE_F2_POL_EN_D_P2_FORCE_LANE = 0;
            reg_ANA_RX_DFE_F2_POL_EN_D_P4_FORCE_LANE = 0;
            reg_ANA_RX_DFE_F2_POL_EN_S_P2_FORCE_LANE = 0;
            reg_ANA_RX_DFE_F2_POL_EN_S_P4_FORCE_LANE = 0;
            reg_ANA_RX_DFE_F2_POL_D_P2P4_FORCE_LANE  = 0;
            reg_ANA_RX_DFE_F2_POL_S_P2P4_FORCE_LANE  = 0;
	    
	    }
            break;
        case MODpam2fr:
            tag_DFE_RATE_MODE = 1;
            reg_CDS_ADAPT_SPLR_DIS_LANE_7_0 = 0x77;
            reg_CDS_UPDATE_F_DIS_LANE = 1;
            reg_DFE_PAM2_MODE_LANE = 1;
//            reg_EN_DFE_VREF_LANE = 0;
            reg_DFE_F0_RES_DOUBLE_LANE = 1;
            reg_PU_SMPLR_D_P1_LANE_2_0 = 0;
            reg_PU_SMPLR_D_P2_LANE_2_0 = 0x2; // keep p2 mid for edge.
            reg_PU_SMPLR_D_P3_LANE_2_0 = 0;
            reg_PU_SMPLR_S_P1_LANE_2_0 = 0;
            reg_PU_SMPLR_S_P2_LANE_2_0 = 0x2; // keep p2 mid for edge
            reg_PU_SMPLR_S_P3_LANE_2_0 = 0;
	    reg_ANA_RX_ADAPT_P1P3_EN_LANE = 0;
            if (reg_DFE_PAM2_LP_MODE_LANE) {

            reg_ANA_RX_DFE_F2_POL_EN_D_P2_LANE_2_0     = 5;
            reg_ANA_RX_DFE_F2_POL_EN_D_P4_LANE_2_0     = 5;
            reg_ANA_RX_DFE_F2_POL_EN_S_P2_LANE_2_0_b0  = 1;
            reg_ANA_RX_DFE_F2_POL_EN_S_P2_LANE_2_0_b1  = 2;
            reg_ANA_RX_DFE_F2_POL_EN_S_P4_LANE_2_0     = 4;
            reg_ANA_RX_DFE_F2_POL_D_P2P4_LANE_2_0_b0   = 0;
            reg_ANA_RX_DFE_F2_POL_D_P2P4_LANE_2_0_b1   = 1;
            reg_ANA_RX_DFE_F2_POL_S_P2P4_LANE_2_0      = 4;
            reg_ANA_RX_DFE_F2_POL_EN_D_P2_FORCE_LANE = 1;
            reg_ANA_RX_DFE_F2_POL_EN_D_P4_FORCE_LANE = 1;
            reg_ANA_RX_DFE_F2_POL_EN_S_P2_FORCE_LANE = 1;
            reg_ANA_RX_DFE_F2_POL_EN_S_P4_FORCE_LANE = 1;
            reg_ANA_RX_DFE_F2_POL_D_P2P4_FORCE_LANE  = 1;
            reg_ANA_RX_DFE_F2_POL_S_P2P4_FORCE_LANE  = 1;

            reg_PU_SMPLR_D_P4_LANE_2_0 = 2;
            reg_PU_SMPLR_S_P4_LANE_2_0 = 2;

            reg_ANA_RX_DFE_F2_POL_EN_D_P2_FORCE_LANE = 0;
            reg_ANA_RX_DFE_F2_POL_EN_D_P4_FORCE_LANE = 0;
            reg_ANA_RX_DFE_F2_POL_EN_S_P2_FORCE_LANE = 0;
            reg_ANA_RX_DFE_F2_POL_EN_S_P4_FORCE_LANE = 0;
            reg_ANA_RX_DFE_F2_POL_D_P2P4_FORCE_LANE  = 0;
            reg_ANA_RX_DFE_F2_POL_S_P2P4_FORCE_LANE  = 0;
	    
	    }
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
        reg_DFE_EN_FM_REG_LANE = 1;
        reg_DFE_EN_LANE = 1;
        reg_EN_DFE_F2_LANE = 1;
        reg_EN_DFE_F3TO4_LANE = 1;
        reg_EN_DFE_F5TO14_LANE = 1;
        reg_EN_DFE_F15TO22_LANE = 1;
        reg_EN_DFE_F23TO30_LANE = 1;
        reg_EN_DFE_FLOATING_LANE = 1;
    }
    else
    {
        reg_DFE_EN_FM_REG_LANE = 1;
        reg_DFE_EN_LANE = 0;
        reg_EN_DFE_F2_LANE = 0;
        reg_EN_DFE_F3TO4_LANE = 0;
        reg_EN_DFE_F5TO14_LANE = 0;
        reg_EN_DFE_F15TO22_LANE = 0;
        reg_EN_DFE_F23TO30_LANE = 0;
        reg_EN_DFE_FLOATING_LANE = 0;
    }
}


void cds_init(void) BANKING_CTRL
{
#ifdef _TEST_CDS_TIMER
   Tdtl_init             = 0x300;
   Tdtl_coarse           = 0x300;
   Tdfe_init1            = 0x304;
   Tdfe_init2            = 0x207;
   Tee_coarse            = 0xA0f;
   Tee_fine              = 0xA0f;
   Tf0_coarse_pm         = 0xA01;
   Tf0_coarse            = 0xA01;
   Tdfe_coarse           = 0xf07;
   Tdfe_coarse_pm        = 0x204;
   Tdfe_fine             = 0xf07;
   Tdfe_accu             = 0xf07;
   Tf0b_fine             = 0x802;
   Tf0b_accu             = 0x404;
   Tf0x_fine             = 0x802;
   Tf0x_accu             = 0x404;
   Tf0k_coarse           = 0xA02;
   Tf0k_fine             = 0x804;
   Tf0d_coarse           = 0xA02;
   Tf0d_fine             = 0x804;
   Tmaxeo_fine           = 0x302;
   Tmaxeo_accu           = 0x204;
   Teyechk               = 0xA05;
   Tdc_fine              = 0x30f;
   Tdc_accu              = 0x30f;
#endif
#ifdef _DEV_112G
   Tdtl_init             = 0x300;
   Tdtl_coarse           = 0x300;
   Tdfe_init1            = 0x10ff;
   Tdfe_init2            = 0x10ff;
   Tee_coarse            = 0xA0f;
   Tee_fine              = 0xA0f;
   Tf0_coarse_pm         = 0xA01;
   Tf0_coarse            = 0xA01;
   Tdfe_coarse           = 0x10ff;
   Tdfe_coarse_pm        = 0x204;
   Tdfe_fine             = 0x10ff;
   Tdfe_accu             = 0x10ff;
   Tf0b_fine             = 0x802;
   Tf0b_accu             = 0x404;
   Tf0x_fine             = 0x802;
   Tf0x_accu             = 0x404;
   Tf0k_coarse           = 0xA02;
   Tf0k_fine             = 0x804;
   Tf0d_coarse           = 0xA02;
   Tf0d_fine             = 0x804;
   Tmaxeo_fine           = 0x302;
   Tmaxeo_accu           = 0x204;
   Teyechk               = 0xA05;
   Tdc_fine              = 0x3FF;
   Tdc_accu              = 0x3FF;
#endif

    lnx_FAST_DFE_TIMER_EN_LANE = 0;
    reg_RESET_PH_EN_DTL_LANE = 1;
    reg_DFE_SAVE_EN_LANE = 1;
    reg_DFE_LOAD_EN_LANE = 1;
    reg_LOCK_DFE_ON_LANE = 0;
    reg_VH_EO_MODE_LANE = 0;
    reg_EYE_CHK_DIS_LANE = 0;

    tag_EYE_CHK_THRESH_K = 3;
    tag_EYE_CHK_THRESH_C = 2;
    tag_EYE_CHK_THRESH_ERR = 1024L;
    tag_EYE_CHK_THRESH_VLD = 100;

    return;
}

void dfe_setoff(void) BANKING_CTRL {

	if(lnx_DFE_POWER_SAVING_DFE_OFF_FLAG == 1) {return;}
    if (!reg_INT_DFE_EN_LANE) {return;}

    EA = 0;
    // Save all registers to global variables here
    saved_ddc_dfe_clk_off = reg_DFE_CLK_OFF_LANE        ; // 1 bit
    saved_ddc_dis_s_p2p4 = reg_PATH_DISABLE_S_P2P4_LANE;  // 1 bit
    saved_ddc_pu_s_p2 = reg_PU_SMPLR_S_P2_LANE_2_0  ;     // 3 bits
    saved_ddc_pu_s_p4 = reg_PU_SMPLR_S_P4_LANE_2_0  ;     // 3 bits
    saved_ddc_dis_s_p1p3 = reg_PATH_DISABLE_S_P1P3_LANE;  // 1 bit
    saved_ddc_pu_s_p1 = reg_PU_SMPLR_S_P1_LANE_2_0  ;     // 3 bits
    saved_ddc_pu_s_p3 = reg_PU_SMPLR_S_P3_LANE_2_0  ;     // 3 bits
    saved_ddc_cont_en = reg_DFE_ADAPT_CONT_LANE;          // 1 bits

    // Turn on digital clock
    reg_DFE_CLK_OFF_LANE = 0;

    if (reg_DFE_ADAPT_CONT_LANE) {

      // Abort DFE run
      reg_DFE_ADAPT_CONT_LANE = 0;
      short_delay();
      reg_DFE_ADAPT_ABORT_LANE = 1;
      short_delay();
    }

      reg_DFE_START_LANE = 1;

      // Wait for DFE done.
      while(!reg_DFE_DONE_LANE);
      reg_DFE_START_LANE = 0;
      reg_DFE_ADAPT_ABORT_LANE = 0;

      // Turn off analog sampler
      reg_PU_SMPLR_S_P2_LANE_2_0 = 0;
      short_delay();
      reg_PU_SMPLR_S_P4_LANE_2_0 = 0;
      short_delay();
      reg_PATH_DISABLE_S_P2P4_LANE = 1;
      short_delay();
      if (!reg_TX_HALFRATE_EN_LANE) {
      reg_PU_SMPLR_S_P1_LANE_2_0 = 0;
      short_delay();
      reg_PU_SMPLR_S_P3_LANE_2_0 = 0;
      short_delay();
      reg_PATH_DISABLE_S_P1P3_LANE = 1;
      short_delay();

      // Turn off digital clock
    }
      reg_DFE_CLK_OFF_LANE = 1;
	lnx_DFE_POWER_SAVING_DFE_OFF_FLAG = 1;
	EA = 1;
    return;
}
void dfe_backon(void) BANKING_CTRL {

	if(lnx_DFE_POWER_SAVING_DFE_OFF_FLAG == 0) return;
    if (!reg_INT_DFE_EN_LANE) {return;}
    // Restore all registers from global variables here.
    EA = 0;
    // Turn on digital clock
    reg_DFE_CLK_OFF_LANE         = saved_ddc_dfe_clk_off; // 1 bit

    // Turn on analog sampler
    reg_PATH_DISABLE_S_P2P4_LANE = saved_ddc_dis_s_p2p4;  // 1 bit
    short_delay();
    reg_PU_SMPLR_S_P2_LANE_2_0   = saved_ddc_pu_s_p2;     // 3 bits
    short_delay();
    reg_PU_SMPLR_S_P4_LANE_2_0   = saved_ddc_pu_s_p4;     // 3 bits
    short_delay();
    reg_PATH_DISABLE_S_P1P3_LANE = saved_ddc_dis_s_p1p3;  // 1 bit
    short_delay();
    reg_PU_SMPLR_S_P1_LANE_2_0   = saved_ddc_pu_s_p1;     // 3 bits
    short_delay();
    reg_PU_SMPLR_S_P3_LANE_2_0   = saved_ddc_pu_s_p3;     // 3 bits
    short_delay();
    reg_DFE_ADAPT_CONT_LANE      = saved_ddc_cont_en;     // 1 bits

    reg_DFE_START_LANE = 1;
	lnx_DFE_POWER_SAVING_DFE_OFF_FLAG = 0;
	EA = 1;
    return;
}

