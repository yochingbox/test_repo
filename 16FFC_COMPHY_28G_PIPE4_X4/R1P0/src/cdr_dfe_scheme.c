#include "common.h"
//#include "cdr_dfe_scheme.h"
//#include "ph_ctrl.h"

#ifdef SUPPORT_NEW_CDS

// -- Global variables
//#define RXEQ_ST                 cdr_state
__xdata bool tag_EC_PASS; //#define tag_EC_PASS             reg_MCU_DEBUGC_LANE_7_0
#define tag_ADAPT_DATA_EN       lnx_ADAPT_DATA_EN_LANE_7_0
#define tag_ADAPT_SLICER_EN     lnx_ADAPT_SLICER_EN_LANE_7_0

// -- CDS Variables
__code uint16_t cds_table[]   = {
0x55F7, 0x11D3, 0x57D7, 0x75D7, 0x5590, 0x4000, 0x0200, 0x0200, 0x1000, 0x01D3, 0x0093
};


// -- CDS State declaration
typedef enum {
        CDS_ST_INIT            = 0,
        CDS_ST_RESET           = 1,
        CDS_ST_SAVE_RESET      = 2,
        CDS_ST_TIMEACQ         = 3,
        CDS_ST_DFE_PM0         = 4,
        CDS_ST_DFE_PM1         = 5,
        CDS_ST_DFE_PM2         = 6,
        CDS_ST_DFE_PM5         = 7,
        CDS_ST_DFE_PM3         = 8,
        CDS_ST_DFE_PM4         = 9,
        CDS_ST_DFE_CONV0       = 10,
        CDS_ST_DFE_F0A1        = 11,
        CDS_ST_DFE_CONV1       = 12,
        CDS_ST_DFE_CONV2       = 13,
        CDS_ST_DFE_CONV3       = 14,
        CDS_ST_SAVE_DFE        = 15,
        CDS_ST_DFE_DC0         = 16,
        CDS_ST_DFE_DC2         = 17,
        CDS_ST_DFE_DC3         = 18,
        CDS_ST_SAVE_DC         = 19,
        CDS_ST_DFE_F0B0        = 20,
        CDS_ST_DFE_F0B2        = 21,
        CDS_ST_DFE_F0B3        = 22,
        CDS_ST_SAVE_F0B        = 23,
        CDS_ST_DFE_F0D0        = 24,
        CDS_ST_DFE_F0D1        = 25,
        CDS_ST_DFE_F0D2        = 26,
        CDS_ST_DFE_F0D_PM      = 27,
        CDS_ST_SAVE_F0D        = 28,
        CDS_ST_MAXEO0          = 29,
        CDS_ST_MAXEO2          = 30,
        CDS_ST_MAXEO3          = 31,
        CDS_ST_SAVE_MAXEO      = 32,
        CDS_ST_EYECHK0         = 33,
        CDS_ST_EYECHK          = 34,
        CDS_ST_SAVE_EYECHK     = 35,
        CDS_ST_SAVE_LAST       = 36,
        CDS_ST_DONE            = 37
} CDS_STATE_t;

#define CDS_ST lnx_CDS_STATE_LANE_7_0
#define CDS_ST_JUMP(name)  {CDS_ST = CDS_ST_ ## name;}



// ===================================================
// LOCAL DECLARATION

// PRIVATE METHODS
//void set_dfe_cont(bool on);
//void set_slicer_data_sampler_adapt(uint8_t sel);
void set_dfe_fbmd(uint8_t type);
#ifdef _RES_ADJ_IN_CDS
bool dfe_res_adj(void);
#endif

void cds_save(uint8_t type);
void cds_load_f0(uint8_t type);
void dc_load(uint8_t type);
void set_esm_voltage(uint8_t v);
uint8_t get_ec_voltage();
bool check_eye();
void set_ctle_accap(uint8_t);


// -- Subfunction Arguments
// DFE TIMERS //
#define     Tacq        0x300
#define     Tf0_coarse_pm   0xA01
#define     Tf0_coarse  0xA01
#define     Tdfe_coarse 0xA01
#define     Tdfe_coarse_pm  0x204
#define     Tdfe_fine   0x302
#define     Tdfe_accu   0x204
#define     Tf0b_fine   0x802
#define     Tf0b_accu   0x404
#define     Tf0d_coarse 0xA02
#define     Tf0d_fine   0x804
#define     Tmaxeo_fine 0x302
#define     Tmaxeo_accu 0x204
#define     Teyechk     0xA05
#define     Tesm        0x2008 // TODO add reg
#define     Tdc_fine    0xA01
#define     Tdc_accu    0x302

// DFE UPDATE EN //
//#define Update0         0
//#define Updatefixed     1
//#define Updatedfe       2
//#define Updatedc        3
//#define Updateoff       0xff
typedef enum {
    Update0      =  0,
    Updatefixed  =  1,
    Updatedfe    =  2,
    Updatedc     =  3,
    Updateoff    =  0xff
} DFE_update_t;
// CDS Save //
//#define Savf0a         0x00
//#define Savf0b         0x01
//#define Savf0d         0x02
//#define Savf0d_l       0x03
//#define Savf0d_r       0x04
//#define Savf0k         0x06
//#define Savdfe         0x10
//#define Saveyechk      0x11
//#define Savdc          0x12
typedef enum {
    Savf0a      = 0x00,
    Savf0b      = 0x01,
    Savf0d      = 0x02,
    Savf0d_l    = 0x03,
    Savf0d_r    = 0x04,
    Savf0k      = 0x06,
    Savdfe      = 0x10,
    Saveyechk   = 0x11,
    Savdc       = 0x12
} CDS_sav_t;

typedef enum {
    FBall   = 0,
    FB0     = 1,
    FBself  = 2
} DFE_fbmd_t;

// **************************************************
// CDR_DFE_SCHEME
// Args:
//      cds_en
// Inputs:
//#define tag_ADAPT_DATA_EN       lnx_ADAPT_DATA_EN_LANE_7_0
//#define tag_ADAPT_SLICER_EN     lnx_ADAPT_SLICER_EN_LANE_7_0
#define tag_RESET_PH_EN_DTL     lnx_RESET_PH_EN_DTL_LANE //1
#define tag_DFE_SAVE_EN         lnx_DFE_SAVE_EN_LANE //1
#define tag_PM_PH_ADJ_THRESH    2
#define tag_LOCK_DFE_ON         lnx_LOCK_DFE_ON_LANE //0
#define tag_VH_EO_MODE          lnx_VH_EO_MODE_LANE //0
//#define tag_EO_BASED            reg_EO_BASED_LANE // 0
#define tag_EYE_CHK_THRESH_K    1
#define tag_EYE_CHK_THRESH_C    2
#define tag_EYE_CHK_THRESH_ERR  1024L   
#define tag_EYE_CHK_THRESH_VLD  100L    
#define tag_EYE_CHK_DIS         lnx_EYE_CHK_DIS_LANE //0
#define tag_TRAIN_PH_OS_ESM     0       
#define tag_EOM_EL_PHASE_DELTA_LEFT 4   
#define tag_EOM_EL_PHASE_DELTA_RIGHT 4  
#define tag_ESM_VOLTAGE         lnx_ESM_VOLTAGE_LANE_5_0
// Outputs:
//     reg_DFE_F0_COARSE_STEP_EN
//     reg_DFE_F0_FINE_STEP_EN
//     reg_DFE_COARSE_STEP_EN
//     reg_DFE_FINE_STEP_EN
//     reg_DFE_F0B_MODE
//     reg_DFE_F0D_MODE
//     reg_DFE_MMSE_MODE
// Return:
//      cds28
#define tag_CDS_ERR_CODE        lnx_CDS_ERR_CODE_LANE_7_0
#define train_ph_dat    		train.phase_offset_data
//#define ph_dat reg_MCU_DEBUG9_LANE_7_0      // TODO

void cdr_dfe_scheme(void) {
    /* LOCAL VARIABLES*/
//    bool dfe_res_done;
//    uint8_t dfe_res_run_idx;
    uint8_t f0d_dir;
    uint8_t f0d_updated;
    
    CDS_ST_JUMP(INIT);
        tag_CDS_ERR_CODE = 0;
    if(cds_tb & reset_en)
    {
    CDS_ST_JUMP(RESET);
        // -- Reset DFE State
        { // ??
        reg_SEL_MU_F_LANE = 0; 
        reg_ANA_RX_SEL_MU_F_LANE = 0; 
        // Work around reset_dtl glitch in floop
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
        reg_ANA_REG_DFEE_RST_LANE = 1;
        reg_ANA_REG_DFEO_RST_LANE = 1;
        reg_ANA_REG_DFEE_RST_LANE = 0;
        reg_ANA_REG_DFEO_RST_LANE = 0;

        if(tag_RESET_PH_EN_DTL)
        {
            set_ph_dat(0);
            dfe_load_type(0);
            dc_load(0);
        }
        else
        {
            set_ph_dat(train_ph_dat);
            dfe_load_type(1);
            dc_load(1);
        }
    CDS_ST_JUMP(SAVE_RESET);
        if(tag_DFE_SAVE_EN)
        {
            dfe_save();
            cds_save(Savf0a);
            cds_save(Savdfe);
            cds_save(Savdc);
        }
    }
    if(cds_tb & coarse_dtl_en)  
    { 
    CDS_ST_JUMP(TIMEACQ);
        reg_SEL_MU_F_LANE = 1;
        reg_ANA_RX_SEL_MU_F_LANE = 1;
        dfe_fsm(Tacq,Updateoff);
    }
    if(cds_tb & phase_move_with_dfe_en)
    { 
    CDS_ST_JUMP(DFE_PM0);
        reg_SEL_MU_F_LANE = 1;
        reg_ANA_RX_SEL_MU_F_LANE = 1;
        reg_DFE_MMSE_MODE_LANE = 1;
        set_slicer_data_sampler_adapt(SLICER_SMPL_ONLY);
        set_dfe_fbmd(FBall);

        if(cds_tb & f0a_coarse_en)
        {CDS_ST_JUMP(DFE_PM1);
            dfe_fsm(Tf0_coarse_pm,Update0);
        }

        timeout_start((uint16_t)1000);
        do {
        CDS_ST_JUMP(DFE_PM2); 
            dfe_fsm(Tdfe_coarse,Updatefixed);
            if(train_ph_dat == cur_phase_offset_data) break;
        CDS_ST_JUMP(DFE_PM3); 
            if(cur_phase_offset_data < train_ph_dat)
                if ((train_ph_dat - cur_phase_offset_data)>tag_PM_PH_ADJ_THRESH)
                    set_ph_dat(cur_phase_offset_data + tag_PM_PH_ADJ_THRESH);
                else
                    set_ph_dat(train_ph_dat);
            else // cur_phase_offset_data >= train_ph_dat
                if ((cur_phase_offset_data - train_ph_dat)>tag_PM_PH_ADJ_THRESH)
                    set_ph_dat(cur_phase_offset_data - tag_PM_PH_ADJ_THRESH);
                else
                    set_ph_dat(train_ph_dat);
        } while (!timeout);
        if(timeout) {
            tag_CDS_ERR_CODE |= 0x2;
            timeout = 0;
        } timeout_stop;
        cds_save(Savf0a);
        cds_save(Savdfe);
    }
    else
    {
    CDS_ST_JUMP(DFE_PM4);
        set_ph_dat(train_ph_dat);
    }
    if(cds_tb & dfe_adapt_en)
    { 
    CDS_ST_JUMP(DFE_CONV0);
        reg_DFE_MMSE_MODE_LANE = 1;
        reg_DFE_F0B_MODE_LANE = 0;
        reg_DFE_F0D_MODE_LANE = 0;
        if(cds_tb & f0a_coarse_en) 
        {
        CDS_ST_JUMP(DFE_F0A1);
            set_slicer_data_sampler_adapt(SLICER_SMPL_ONLY);
            set_dfe_fbmd(FBall);
            reg_DFE_F0_COARSE_STEP_EN_LANE = 1;
            reg_DFE_F0_FINE_STEP_EN_LANE = 0;
            dfe_fsm(Tf0_coarse,Update0);
        }
        if(cds_tb & dfe_coarse_en)
        { 
        CDS_ST_JUMP(DFE_CONV1);
            set_slicer_data_sampler_adapt(SLICER_SMPL_ONLY);
            set_dfe_fbmd(FBall);
            reg_DFE_F0_COARSE_STEP_EN_LANE = 1;
            reg_DFE_F0_FINE_STEP_EN_LANE = 0;
            reg_DFE_COARSE_STEP_EN_LANE = 1;
            reg_DFE_FINE_STEP_EN_LANE = 0;
            dfe_fsm(Tdfe_coarse,Updatedfe);
        }
#ifdef _RES_ADJ_IN_CDS
        if(cds_tb & res_adj_en)
        {
        CDS_ST_JUMP(DFE_RES0);
            set_slicer_data_sampler_adapt(SLICER_SMPL_ONLY);
            set_dfe_fbmd(FBall);
            dfe_res_done = 0;
            dfe_res_run_idx = 0;
            do{
            CDS_ST_JUMP(DFE_RES_ADJ);
                dfe_res_run_idx ++;
                dfe_res_done = dfe_res_adj();
                if(dfe_res_done) break;
                else
                {
                    if(cds_tb & res_adj_coarse_en)
                    {CDS_ST_JUMP(DFE_RES1);
                        reg_DFE_F0_COARSE_STEP_EN_LANE = 1;
                        reg_DFE_F0_FINE_STEP_EN_LANE = 0;
                        reg_DFE_COARSE_STEP_EN_LANE = 1;
                        reg_DFE_FINE_STEP_EN_LANE = 0;
                        dfe_fsm(Tres_coarse,Updatedfe);
                    }
                    if(cds_tb & res_adj_fine_en)
                    {CDS_ST_JUMP(DFE_RES2);
                        reg_DFE_F0_COARSE_STEP_EN_LANE = 0;
                        reg_DFE_F0_FINE_STEP_EN_LANE = 1;
                        reg_DFE_COARSE_STEP_EN_LANE = 0;
                        reg_DFE_FINE_STEP_EN_LANE = 1;
                        dfe_fsm(Tres_fine,Updatedfe);
                    }
                }
            }while(dfe_res_run_idx < tag_DFE_RES_RUN_NUM);
        }
#endif
        if(cds_tb & dfe_fine_en)
        { 
        CDS_ST_JUMP(DFE_CONV2);
            set_slicer_data_sampler_adapt(BOTH_SMPL);
            set_dfe_fbmd(FBself);
            reg_DFE_F0_COARSE_STEP_EN_LANE = 1;
            reg_DFE_F0_FINE_STEP_EN_LANE = 0;
            reg_DFE_COARSE_STEP_EN_LANE = 1;
            reg_DFE_FINE_STEP_EN_LANE = 0;
            dfe_fsm(Tdfe_fine,Updatedfe);
        }
        if(cds_tb & dfe_accu_en)
        { 
        CDS_ST_JUMP(DFE_CONV3); 
            set_slicer_data_sampler_adapt(BOTH_SMPL);
            set_dfe_fbmd(FBself);
            reg_DFE_F0_COARSE_STEP_EN_LANE = 0;
            reg_DFE_F0_FINE_STEP_EN_LANE = 0;
            reg_DFE_COARSE_STEP_EN_LANE = 0;
            reg_DFE_FINE_STEP_EN_LANE = 0;
            dfe_fsm(Tdfe_accu,Updatedfe);
        }
        dfe_save();
        cds_save(Savdfe);
        cds_save(Savf0a);
    }
    if(cds_tb & dc_adapt_en)
    {
    CDS_ST_JUMP(DFE_DC0);
        reg_DFE_MMSE_MODE_LANE = 1;
        reg_DFE_F0B_MODE_LANE = 0;
        reg_DFE_F0D_MODE_LANE = 0;
    CDS_ST_JUMP(DFE_DC2);
        reg_DFE_F0_COARSE_STEP_EN_LANE = 0;
        reg_DFE_F0_FINE_STEP_EN_LANE = 1;
        reg_DFE_COARSE_STEP_EN_LANE = 0;
        reg_DFE_FINE_STEP_EN_LANE = 1;
        dfe_fsm(Tdc_fine,Updatedc);
    CDS_ST_JUMP(DFE_DC3);
        reg_DFE_F0_COARSE_STEP_EN_LANE = 0;
        reg_DFE_F0_FINE_STEP_EN_LANE = 0;
        reg_DFE_COARSE_STEP_EN_LANE = 0;
        reg_DFE_FINE_STEP_EN_LANE = 0;
        dfe_fsm(Tdc_accu,Updatedc);
    CDS_ST_JUMP(SAVE_DC);
        dfe_save();
        cds_save(Savf0a);
        cds_save(Savdfe);
        cds_save(Savdc);
    }
    if(cds_tb & f0b_adapt_en)
    {
    CDS_ST_JUMP(DFE_F0B0);
        set_slicer_data_sampler_adapt(BOTH_SMPL);
        set_dfe_fbmd(FBself);
    CDS_ST_JUMP(DFE_F0B2);
        reg_DFE_F0B_MODE_LANE = 1;
        reg_DFE_F0_COARSE_STEP_EN_LANE = 1;
        reg_DFE_F0_FINE_STEP_EN_LANE = 0;
        dfe_fsm(Tf0b_fine,Update0);

    CDS_ST_JUMP(DFE_F0B3);
        reg_DFE_F0_COARSE_STEP_EN_LANE = 0;
        reg_DFE_F0_FINE_STEP_EN_LANE = 0;
        dfe_fsm(Tf0b_accu,Update0);

        cds_save(Savf0b);
        reg_DFE_F0B_MODE_LANE = 0;
    }
    if(cds_tb & f0d_adapt_en)
    {
    CDS_ST_JUMP(DFE_F0D0);
        set_slicer_data_sampler_adapt(BOTH_SMPL);
        set_dfe_fbmd(FBself);
        reg_DFE_CLR_FRAC_EN_LANE = 0;
        reg_DFE_F0D_MODE_LANE = 1;
        f0d_dir = 0;
        f0d_updated = 0;

        do {
        dfe_load_type(2);
        CDS_ST_JUMP(DFE_F0D1);
            reg_DFE_F0_COARSE_STEP_EN_LANE = 1;
            reg_DFE_F0_FINE_STEP_EN_LANE = 0;
            dfe_fsm(Tf0d_coarse,Update0);

        CDS_ST_JUMP(DFE_F0D2);
            reg_DFE_F0_COARSE_STEP_EN_LANE = 0;
            reg_DFE_F0_FINE_STEP_EN_LANE = 1;
            dfe_fsm(Tf0d_fine,Update0);

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
                    set_ph_esm(tag_TRAIN_PH_OS_ESM - tag_EOM_EL_PHASE_DELTA_LEFT);
                }else if(f0d_dir == 0)
                {
                    f0d_dir = 1;
                    set_ph_esm(tag_TRAIN_PH_OS_ESM + tag_EOM_EL_PHASE_DELTA_RIGHT);
                }
                else 
                {
                    set_ph_esm(0);
                    break;
                }
            } else break;
        } while(1);

        reg_DFE_F0D_MODE_LANE = 0;
        reg_DFE_CLR_FRAC_EN_LANE = 1;
    }
    if(cds_tb & maxeo_adapt_en)
    {
    CDS_ST_JUMP(MAXEO0);
        reg_SEL_MU_F_LANE = 0; 
        reg_ANA_RX_SEL_MU_F_LANE = 0; 
        dfe_load_type(1);
        cds_load_f0(2);
        reg_DFE_MMSE_MODE_LANE = 0;
        reg_DFE_F0D_MODE_LANE = 1;
        set_slicer_data_sampler_adapt(BOTH_SMPL);
        set_dfe_fbmd(FBself);

    CDS_ST_JUMP(MAXEO2);
        reg_DFE_F0_COARSE_STEP_EN_LANE = 0;
        reg_DFE_F0_FINE_STEP_EN_LANE = 1;
        reg_DFE_COARSE_STEP_EN_LANE = 0;
        reg_DFE_FINE_STEP_EN_LANE = 1;
        dfe_fsm(Tmaxeo_fine, Updatedfe);

    CDS_ST_JUMP(MAXEO3);
        reg_DFE_F0_COARSE_STEP_EN_LANE = 0;
        reg_DFE_F0_FINE_STEP_EN_LANE = 0;
        reg_DFE_COARSE_STEP_EN_LANE = 0;
    CDS_ST_JUMP(DONE);
        reg_DFE_FINE_STEP_EN_LANE = 0;
        dfe_fsm(Tmaxeo_accu,Updatedfe);

        dfe_save();
        cds_save(Savdfe);
        cds_save(Savf0d);
    }
    if(cds_tb & eye_chk_en)
    {
    CDS_ST_JUMP(EYECHK0);
        tag_EC_PASS = 0;
        reg_EOM_EN_LANE = 1;
        dfe_load_type(1);
        reg_EOM_CNT_CLR_LANE = 1;
        reg_EOM_CNT_CLR_LANE = 0;
        if(lnx_ESM_EN_LANE)
        {
            set_esm_voltage(tag_ESM_VOLTAGE);
        }
        else
        {
            set_esm_voltage(get_ec_voltage());
        }
    CDS_ST_JUMP(EYECHK);
        if(lnx_ESM_EN_LANE)
        {
            dfe_fsm(Tesm,Updateoff);
        }
        else
        {
            dfe_fsm(Teyechk,Updateoff);
        }
    CDS_ST_JUMP(SAVE_EYECHK);
        reg_EOM_EN_LANE = 0;
        tag_EC_PASS = check_eye();
        cds_save(Saveyechk);
    }
    CDS_ST_JUMP(SAVE_LAST);
        dfe_load_type(1);
    CDS_ST_JUMP(DONE);
}


/* **************************************************
 * SET_DFE_CONT
 * Args:
 *      on
 *      0: DFE Contunous Off
 *      1: DFE Continous On
 * Inputs:
 *      lnx_ADAPT_DATA_EN_LANE_7_0
 *      lnx_ADAPT_SLICER_EN_LANE_7_0
 * Outputs:
 *      reg_DFE_ADAPT_SPLR_EN_LANE_3_0
 */
 /* //removed because duplicated with current CDS
void set_dfe_cont(bool on)
{
    if(on)
    {
        reg_DFE_ADAPT_CONT_LANE = 1;
        reg_DFE_START_LANE = 1;
    }
    else // off
    {
        timeout_start((uint16_t)1000);
        reg_DFE_ADAPT_CONT_LANE = 0;
        while(!reg_DFE_DONE_LANE && !timeout);
        reg_DFE_START_LANE = 0;
        while(reg_DFE_DONE_LANE && !timeout);
        timeout_stop;
    }
}
*/

/* **************************************************
 * set_slicer_data_sampler_adapt
 * Args:
 *      sel
 *      0: adapt error path Only
 *      1: adapt both path
 * Inputs:
 *      tag_ADAPT_DATA_EN
 *      tag_ADAPT_SLICER_EN
 * Outputs:
 *      reg_DFE_ADAPT_SPLR_EN_LANE_3_0
 */
 /* //removed because duplicated with current CDS
void set_slicer_data_sampler_adapt(uint8_t sel)
{
    if(
        (tag_ADAPT_DATA_EN && tag_ADAPT_SLICER_EN) ||
        (!tag_ADAPT_DATA_EN && !tag_ADAPT_SLICER_EN)
    )
    {
        if(sel) // Both
            reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0xf;
        else    // Err Only
            reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0xc;
    }
    else
    {
        if (tag_ADAPT_DATA_EN)
            reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0x3;
        else //  tag_ADAPT_SLICER_EN
            reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0xc;
    }
    reg_DFE_ADAPT_SPLR_EN_LANE_3_0 &= ~reg_CDS_ADAPT_SPLR_DIS_LANE_3_0;
}
*/

/* **************************************************
 * SET_DFE_FBMD
 * Args:
 *      type
 *      0: Feedback to all
 *      1: Feedback F0 to all
 *      2: Feedback to self
 * Inputs:
 *      reg_DFE_MMSE_MODE_LANE
 *      reg_DFE_ADAPT_SPLR_EN_LANE_3_0
 *      RXEQ_STATE
 * Outputs:
 *      reg_DFE_FBMD_F0_LANE
 *      reg_DFE_FBMD_F1PN_LANE
 *      reg_DFE_FBMD_DATASLICER_LANE
 */
void set_dfe_fbmd(uint8_t type)
{
    switch(type)
    {
        case 0: 
            reg_DFE_FBMD_F0_LANE = 1;
            reg_DFE_FBMD_F1PN_LANE = 1;
            reg_DFE_FBMD_DATASLICER_LANE = 1;
            break;
        case 1: 
            reg_DFE_FBMD_F0_LANE = 1;
            reg_DFE_FBMD_F1PN_LANE = 0;
            reg_DFE_FBMD_DATASLICER_LANE = 0;
            break;
        default: 
            if(reg_DFE_MMSE_MODE_LANE)
            {
                reg_DFE_FBMD_F0_LANE = 0;
            }else{
                reg_DFE_FBMD_F0_LANE = 0;
            }
            if(reg_DFE_ADAPT_SPLR_EN_LANE_3_0 == 0xf)
            {
                reg_DFE_FBMD_DATASLICER_LANE = 0;
            }else{
                reg_DFE_FBMD_DATASLICER_LANE = 1;
            }
                reg_DFE_FBMD_F1PN_LANE = 0;
            break;
    }
}

/* **************************************************
 * DFE_RES_ADJ
 * Return:
 *      0: dfe res changed, need to re-adapt
 *      1: dfe res not changed, res adj done
 * Inputs:
 *      reg_DFE_MMSE_MODE_LANE
 *      reg_DFE_ADAPT_SPLR_EN_LANE_3_0
 *      RXEQ_STATE
 * Outputs:
 *      reg_DFE_RES_F1_LANE_1_0
 *      reg_DFE_RES_F234_LANE
 *      reg_DFE_RES_F567_LANE
 *      reg_DFE_RES_F8TO15_LANE
 *      reg_DFE_RES_FLOATING_LANE
 */
#ifdef _RES_ADJ_IN_CDS
bool dfe_res_adj(void)
{
    bool ofh,ofl; // Overflow Hi/Lo
    uint8_t mag;
    bool done;
    done = 1;

    // -- res1
    ofh = 0; ofl = 0; mag = 0;
    mag = reg_DFE_F1_E_SM_LANE_5_0 & 0x3f; if(mag > tag_DFE_REA_F1_HIGH) ofh = 1; if(mag > tag_DFE_REA_F1_LOW) ofl = 1;
    mag = reg_DFE_F1_O_SM_LANE_5_0 & 0x3f; if(mag > tag_DFE_REA_F1_HIGH) ofh = 1; if(mag > tag_DFE_REA_F1_LOW) ofl = 1;
    if (ofh && (reg_DFE_RES_F1_LANE_1_0 < 3)) 
    {
        reg_DFE_RES_F1_LANE_1_0++;
        done = 0;
    }
    else if (~ofl && (reg_DFE_RES_F1_LANE_1_0 > 0))
    {
        reg_DFE_RES_F1_LANE_1_0--;
        done = 0;
    }
    
    // -- res234
    ofh = 0; ofl = 0; mag = 0;
    mag = reg_DFE_F2_D_P_E_SM_LANE_5_0 & 0x1f; if(mag > tag_DFE_REA_F2_HIGH) ofh = 1; if(mag > tag_DFE_REA_F2_LOW) ofl = 1;
    mag = reg_DFE_F2_D_N_E_SM_LANE_5_0 & 0x1f; if(mag > tag_DFE_REA_F2_HIGH) ofh = 1; if(mag > tag_DFE_REA_F2_LOW) ofl = 1;
    mag = reg_DFE_F2_S_P_E_SM_LANE_5_0 & 0x1f; if(mag > tag_DFE_REA_F2_HIGH) ofh = 1; if(mag > tag_DFE_REA_F2_LOW) ofl = 1;
    mag = reg_DFE_F2_S_N_E_SM_LANE_5_0 & 0x1f; if(mag > tag_DFE_REA_F2_HIGH) ofh = 1; if(mag > tag_DFE_REA_F2_LOW) ofl = 1;
    mag = reg_DFE_F2_D_P_O_SM_LANE_5_0 & 0x1f; if(mag > tag_DFE_REA_F2_HIGH) ofh = 1; if(mag > tag_DFE_REA_F2_LOW) ofl = 1;
    mag = reg_DFE_F2_D_N_O_SM_LANE_5_0 & 0x1f; if(mag > tag_DFE_REA_F2_HIGH) ofh = 1; if(mag > tag_DFE_REA_F2_LOW) ofl = 1;
    mag = reg_DFE_F2_S_P_O_SM_LANE_5_0 & 0x1f; if(mag > tag_DFE_REA_F2_HIGH) ofh = 1; if(mag > tag_DFE_REA_F2_LOW) ofl = 1;
    mag = reg_DFE_F2_S_N_O_SM_LANE_5_0 & 0x1f; if(mag > tag_DFE_REA_F2_HIGH) ofh = 1; if(mag > tag_DFE_REA_F2_LOW) ofl = 1;

    mag = reg_DFE_F3_D_P_E_SM_LANE_4_0 & 0x0f; if(mag > tag_DFE_REA_F3_HIGH) ofh = 1; if(mag > tag_DFE_REA_F3_LOW) ofl = 1;
    mag = reg_DFE_F3_D_N_E_SM_LANE_4_0 & 0x0f; if(mag > tag_DFE_REA_F3_HIGH) ofh = 1; if(mag > tag_DFE_REA_F3_LOW) ofl = 1;
    mag = reg_DFE_F3_S_P_E_SM_LANE_4_0 & 0x0f; if(mag > tag_DFE_REA_F3_HIGH) ofh = 1; if(mag > tag_DFE_REA_F3_LOW) ofl = 1;
    mag = reg_DFE_F3_S_N_E_SM_LANE_4_0 & 0x0f; if(mag > tag_DFE_REA_F3_HIGH) ofh = 1; if(mag > tag_DFE_REA_F3_LOW) ofl = 1;
    mag = reg_DFE_F3_D_P_O_SM_LANE_4_0 & 0x0f; if(mag > tag_DFE_REA_F3_HIGH) ofh = 1; if(mag > tag_DFE_REA_F3_LOW) ofl = 1;
    mag = reg_DFE_F3_D_N_O_SM_LANE_4_0 & 0x0f; if(mag > tag_DFE_REA_F3_HIGH) ofh = 1; if(mag > tag_DFE_REA_F3_LOW) ofl = 1;
    mag = reg_DFE_F3_S_P_O_SM_LANE_4_0 & 0x0f; if(mag > tag_DFE_REA_F3_HIGH) ofh = 1; if(mag > tag_DFE_REA_F3_LOW) ofl = 1;
    mag = reg_DFE_F3_S_N_O_SM_LANE_4_0 & 0x0f; if(mag > tag_DFE_REA_F3_HIGH) ofh = 1; if(mag > tag_DFE_REA_F3_LOW) ofl = 1;

    mag = reg_DFE_F4_E_SM_LANE_5_0 & 0x1f; if(mag > tag_DFE_REA_F4_HIGH) ofh = 1; if(mag > tag_DFE_REA_F4_LOW) ofl = 1;
    mag = reg_DFE_F4_E_SM_LANE_5_0 & 0x1f; if(mag > tag_DFE_REA_F4_HIGH) ofh = 1; if(mag > tag_DFE_REA_F4_LOW) ofl = 1;

    if (ofh && (reg_DFE_RES_F234_LANE == 0)) 
    {
        reg_DFE_RES_F234_LANE = 1;
        done = 0;
    }
    else if (~ofl && (reg_DFE_RES_F234_LANE == 1))
    {
        reg_DFE_RES_F234_LANE = 0;
        done = 0;
    }

    // -- res567
    ofh = 0; ofl = 0; mag = 0;
    mag = reg_DFE_F5_E_SM_LANE_5_0 & 0x1f; if(mag > tag_DFE_REA_F5_HIGH) ofh = 1; if(mag > tag_DFE_REA_F5_LOW) ofl = 1;
    mag = reg_DFE_F5_E_SM_LANE_5_0 & 0x1f; if(mag > tag_DFE_REA_F5_HIGH) ofh = 1; if(mag > tag_DFE_REA_F5_LOW) ofl = 1;
    mag = reg_DFE_F6_E_SM_LANE_5_0 & 0x1f; if(mag > tag_DFE_REA_F6_HIGH) ofh = 1; if(mag > tag_DFE_REA_F6_LOW) ofl = 1;
    mag = reg_DFE_F6_E_SM_LANE_5_0 & 0x1f; if(mag > tag_DFE_REA_F6_HIGH) ofh = 1; if(mag > tag_DFE_REA_F6_LOW) ofl = 1;
    mag = reg_DFE_F7_E_SM_LANE_4_0 & 0x0f; if(mag > tag_DFE_REA_F7_HIGH) ofh = 1; if(mag > tag_DFE_REA_F7_LOW) ofl = 1;
    mag = reg_DFE_F7_E_SM_LANE_4_0 & 0x0f; if(mag > tag_DFE_REA_F7_HIGH) ofh = 1; if(mag > tag_DFE_REA_F7_LOW) ofl = 1;
    if (ofh && (reg_DFE_RES_F567_LANE == 0)) 
    {
        reg_DFE_RES_F567_LANE = 1;
        done = 0;
    }
    else if (~ofl && (reg_DFE_RES_F567_LANE == 1))
    {
        reg_DFE_RES_F567_LANE = 0;
        done = 0;
    }
    // -- res8to15
    // -- resfloating
    return done;
}
#endif

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
 */
void cds_save(uint8_t type)
{
    switch(type)
    {
        case Savf0a:
            cds28.f0a.d_p_e = reg_DFE_F0_D_P_E_2C_LANE_7_0;
            cds28.f0a.d_n_e = reg_DFE_F0_D_N_E_2C_LANE_7_0;
            cds28.f0a.s_p_e = reg_DFE_F0_S_P_E_2C_LANE_7_0;
            cds28.f0a.s_n_e = reg_DFE_F0_S_N_E_2C_LANE_7_0;
            cds28.f0a.d_p_o = reg_DFE_F0_D_P_O_2C_LANE_7_0;
            cds28.f0a.d_n_o = reg_DFE_F0_D_N_O_2C_LANE_7_0;
            cds28.f0a.s_p_o = reg_DFE_F0_S_P_O_2C_LANE_7_0;
            cds28.f0a.s_n_o = reg_DFE_F0_S_N_O_2C_LANE_7_0;
            cds28.f0a_saturate =  reg_DFE_SATUR_STATUS_LANE ? 1 : 0;
            break;    
        case Savf0b:
            cds28.f0b.d_p_e = reg_DFE_F0_D_P_E_2C_LANE_7_0;
            cds28.f0b.d_n_e = reg_DFE_F0_D_N_E_2C_LANE_7_0;
            cds28.f0b.s_p_e = reg_DFE_F0_S_P_E_2C_LANE_7_0;
            cds28.f0b.s_n_e = reg_DFE_F0_S_N_E_2C_LANE_7_0;
            cds28.f0b.d_p_o = reg_DFE_F0_D_P_O_2C_LANE_7_0;
            cds28.f0b.d_n_o = reg_DFE_F0_D_N_O_2C_LANE_7_0;
            cds28.f0b.s_p_o = reg_DFE_F0_S_P_O_2C_LANE_7_0;
            cds28.f0b.s_n_o = reg_DFE_F0_S_N_O_2C_LANE_7_0;
            break;
        case Savf0d:
            cds28.f0d.d_p_e = reg_DFE_F0_D_P_E_2C_LANE_7_0;
            cds28.f0d.d_n_e = reg_DFE_F0_D_N_E_2C_LANE_7_0;
            cds28.f0d.s_p_e = reg_DFE_F0_S_P_E_2C_LANE_7_0;
            cds28.f0d.s_n_e = reg_DFE_F0_S_N_E_2C_LANE_7_0;
            cds28.f0d.d_p_o = reg_DFE_F0_D_P_O_2C_LANE_7_0;
            cds28.f0d.d_n_o = reg_DFE_F0_D_N_O_2C_LANE_7_0;
            cds28.f0d.s_p_o = reg_DFE_F0_S_P_O_2C_LANE_7_0;
            cds28.f0d.s_n_o = reg_DFE_F0_S_N_O_2C_LANE_7_0;
            break;
        case Savf0d_l:
            cds28.f0d_left.d_p_e = reg_DFE_F0_D_P_E_2C_LANE_7_0;
            cds28.f0d_left.d_n_e = reg_DFE_F0_D_N_E_2C_LANE_7_0;
            cds28.f0d_left.s_p_e = reg_DFE_F0_S_P_E_2C_LANE_7_0;
            cds28.f0d_left.s_n_e = reg_DFE_F0_S_N_E_2C_LANE_7_0;
            cds28.f0d_left.d_p_o = reg_DFE_F0_D_P_O_2C_LANE_7_0;
            cds28.f0d_left.d_n_o = reg_DFE_F0_D_N_O_2C_LANE_7_0;
            cds28.f0d_left.s_p_o = reg_DFE_F0_S_P_O_2C_LANE_7_0;
            cds28.f0d_left.s_n_o = reg_DFE_F0_S_N_O_2C_LANE_7_0;
            break;
        case Savf0d_r:
            cds28.f0d_right.d_p_e = reg_DFE_F0_D_P_E_2C_LANE_7_0;
            cds28.f0d_right.d_n_e = reg_DFE_F0_D_N_E_2C_LANE_7_0;
            cds28.f0d_right.s_p_e = reg_DFE_F0_S_P_E_2C_LANE_7_0;
            cds28.f0d_right.s_n_e = reg_DFE_F0_S_N_E_2C_LANE_7_0;
            cds28.f0d_right.d_p_o = reg_DFE_F0_D_P_O_2C_LANE_7_0;
            cds28.f0d_right.d_n_o = reg_DFE_F0_D_N_O_2C_LANE_7_0;
            cds28.f0d_right.s_p_o = reg_DFE_F0_S_P_O_2C_LANE_7_0;
            cds28.f0d_right.s_n_o = reg_DFE_F0_S_N_O_2C_LANE_7_0;
            break;
        case Savdfe:
#ifdef _RES_ADJ_IN_CDS
             ASSIGN8(cds28.dfe_res.res_f1         ,    reg_DFE_RES_F1_LANE_1_0  )
             ASSIGN8(cds28.dfe_res.res_f234       ,    reg_DFE_RES_F234_LANE    )
             ASSIGN8(cds28.dfe_res.res_f567       ,    reg_DFE_RES_F567_LANE    )
             ASSIGN8(cds28.dfe_res.res_f8to15     ,    reg_DFE_RES_F8TO15_LANE  )
             ASSIGN8(cds28.dfe_res.res_floating   ,    reg_DFE_RES_FLOATING_LANE)
#endif
#if 1
            // this one copies F0A as well
            memcpy((uint8_t *)&(cds28.dfe_2c), (uint8_t *)&DFE_READ_EVEN_2C_REG0, sizeof(Status_dfe_t));
#else
            // -- even
            cds28.dfe_2c.f1_e       = reg_DFE_F1_E_2C_LANE_7_0;
            cds28.dfe_2c.f2_d_p_e   = reg_DFE_F2_D_P_E_2C_LANE_7_0;
            cds28.dfe_2c.f2_d_n_e   = reg_DFE_F2_D_N_E_2C_LANE_7_0;
            cds28.dfe_2c.f2_s_p_e   = reg_DFE_F2_S_P_E_2C_LANE_7_0;
            cds28.dfe_2c.f2_s_n_e   = reg_DFE_F2_S_N_E_2C_LANE_7_0;
            cds28.dfe_2c.f3_d_p_e   = reg_DFE_F3_D_P_E_2C_LANE_7_0;
            cds28.dfe_2c.f3_d_n_e   = reg_DFE_F3_D_N_E_2C_LANE_7_0;
            cds28.dfe_2c.f3_s_p_e   = reg_DFE_F3_S_P_E_2C_LANE_7_0;
            cds28.dfe_2c.f3_s_n_e   = reg_DFE_F3_S_N_E_2C_LANE_7_0;
            cds28.dfe_2c.f4_e       =  reg_DFE_F4_E_2C_LANE_7_0;
            cds28.dfe_2c.f5_e       =  reg_DFE_F5_E_2C_LANE_7_0;
            cds28.dfe_2c.f6_e       =  reg_DFE_F6_E_2C_LANE_7_0;
            cds28.dfe_2c.f7_e       =  reg_DFE_F7_E_2C_LANE_7_0;
            cds28.dfe_2c.f8_e       =  reg_DFE_F8_E_2C_LANE_7_0;
            cds28.dfe_2c.f9_e       =  reg_DFE_F9_E_2C_LANE_7_0;
            cds28.dfe_2c.f10_e      = reg_DFE_F10_E_2C_LANE_7_0;
            cds28.dfe_2c.f11_e      = reg_DFE_F11_E_2C_LANE_7_0;
            cds28.dfe_2c.f12_e      = reg_DFE_F12_E_2C_LANE_7_0;
            cds28.dfe_2c.f13_e      = reg_DFE_F13_E_2C_LANE_7_0;
            cds28.dfe_2c.f14_e      = reg_DFE_F14_E_2C_LANE_7_0;
            cds28.dfe_2c.f15_e      = reg_DFE_F15_E_2C_LANE_7_0;
            cds28.dfe_2c.ff0_e      = reg_DFE_FF0_E_2C_LANE_7_0;
            cds28.dfe_2c.ff1_e      = reg_DFE_FF1_E_2C_LANE_7_0;
            cds28.dfe_2c.ff2_e      = reg_DFE_FF2_E_2C_LANE_7_0;
            cds28.dfe_2c.ff3_e      = reg_DFE_FF3_E_2C_LANE_7_0;
            cds28.dfe_2c.ff4_e      = reg_DFE_FF4_E_2C_LANE_7_0;
            cds28.dfe_2c.ff5_e      = reg_DFE_FF5_E_2C_LANE_7_0;
            // -- odd
            cds28.dfe_2c.f1_o       = reg_DFE_F1_O_2C_LANE_7_0;
            cds28.dfe_2c.f2_d_p_o   = reg_DFE_F2_D_P_O_2C_LANE_7_0;
            cds28.dfe_2c.f2_d_n_o   = reg_DFE_F2_D_N_O_2C_LANE_7_0;
            cds28.dfe_2c.f2_s_p_o   = reg_DFE_F2_S_P_O_2C_LANE_7_0;
            cds28.dfe_2c.f2_s_n_o   = reg_DFE_F2_S_N_O_2C_LANE_7_0;
            cds28.dfe_2c.f3_d_p_o   = reg_DFE_F3_D_P_O_2C_LANE_7_0;
            cds28.dfe_2c.f3_d_n_o   = reg_DFE_F3_D_N_O_2C_LANE_7_0;
            cds28.dfe_2c.f3_s_p_o   = reg_DFE_F3_S_P_O_2C_LANE_7_0;
            cds28.dfe_2c.f3_s_n_o   = reg_DFE_F3_S_N_O_2C_LANE_7_0;
            cds28.dfe_2c.f4_o       =  reg_DFE_F4_O_2C_LANE_7_0;
            cds28.dfe_2c.f5_o       =  reg_DFE_F5_O_2C_LANE_7_0;
            cds28.dfe_2c.f6_o       =  reg_DFE_F6_O_2C_LANE_7_0;
            cds28.dfe_2c.f7_o       =  reg_DFE_F7_O_2C_LANE_7_0;
            cds28.dfe_2c.f8_o       =  reg_DFE_F8_O_2C_LANE_7_0;
            cds28.dfe_2c.f9_o       =  reg_DFE_F9_O_2C_LANE_7_0;
            cds28.dfe_2c.f10_o      = reg_DFE_F10_O_2C_LANE_7_0;
            cds28.dfe_2c.f11_o      = reg_DFE_F11_O_2C_LANE_7_0;
            cds28.dfe_2c.f12_o      = reg_DFE_F12_O_2C_LANE_7_0;
            cds28.dfe_2c.f13_o      = reg_DFE_F13_O_2C_LANE_7_0;
            cds28.dfe_2c.f14_o      = reg_DFE_F14_O_2C_LANE_7_0;
            cds28.dfe_2c.f15_o      = reg_DFE_F15_O_2C_LANE_7_0;
            cds28.dfe_2c.ff0_o      = reg_DFE_FF0_O_2C_LANE_7_0;
            cds28.dfe_2c.ff1_o      = reg_DFE_FF1_O_2C_LANE_7_0;
            cds28.dfe_2c.ff2_o      = reg_DFE_FF2_O_2C_LANE_7_0;
            cds28.dfe_2c.ff3_o      = reg_DFE_FF3_O_2C_LANE_7_0;
            cds28.dfe_2c.ff4_o      = reg_DFE_FF4_O_2C_LANE_7_0;
            cds28.dfe_2c.ff5_o      = reg_DFE_FF5_O_2C_LANE_7_0;
#endif
            break;
        case Savdc:
            cds28.dfe_2c.dc_d_p_e = reg_DFE_DC_D_P_E_2C_LANE_7_0;
            cds28.dfe_2c.dc_d_n_e = reg_DFE_DC_D_N_E_2C_LANE_7_0;
            cds28.dfe_2c.dc_s_p_e = reg_DFE_DC_S_P_E_2C_LANE_7_0;
            cds28.dfe_2c.dc_s_n_e = reg_DFE_DC_S_N_E_2C_LANE_7_0;
            cds28.dfe_2c.dc_d_p_o = reg_DFE_DC_D_P_O_2C_LANE_7_0;
            cds28.dfe_2c.dc_d_n_o = reg_DFE_DC_D_N_O_2C_LANE_7_0;
            cds28.dfe_2c.dc_s_p_o = reg_DFE_DC_S_P_O_2C_LANE_7_0;
            cds28.dfe_2c.dc_s_n_o = reg_DFE_DC_S_N_O_2C_LANE_7_0;
            break;
        case Saveyechk:
            cds28.eye_check_pass = tag_EC_PASS;
        default: break;
    }
}
/* **************************************************
 * CDS_SAVE
 * Args:
 *      0: F0A
 *      2: F0D
 * Inputs:
 *      cds.f0a
 *      cds.f0d
 * Outputs:
 */
void cds_load_f0(uint8_t type)
{
    switch(type)
    {
        case 0:
            reg_DFE_FEXT0_D_P_E_LANE_5_0      = cds28.f0a.d_p_e; 
            reg_DFE_FEXT0_D_N_E_LANE_5_0      = cds28.f0a.d_n_e; 
            reg_DFE_FEXT0_S_P_E_LANE_5_0      = cds28.f0a.s_p_e; 
            reg_DFE_FEXT0_S_N_E_LANE_5_0      = cds28.f0a.s_n_e; 
            reg_DFE_FEXT0_D_P_O_LANE_5_0      = cds28.f0a.d_p_o; 
            reg_DFE_FEXT0_D_N_O_LANE_5_0      = cds28.f0a.d_n_o; 
            reg_DFE_FEXT0_S_P_O_LANE_5_0      = cds28.f0a.s_p_o; 
            reg_DFE_FEXT0_S_N_O_LANE_5_0      = cds28.f0a.s_n_o; 
            break;
        case 2:
            reg_DFE_FEXT0_D_P_E_LANE_5_0      = cds28.f0d.d_p_e; 
            reg_DFE_FEXT0_D_N_E_LANE_5_0      = cds28.f0d.d_n_e; 
            reg_DFE_FEXT0_S_P_E_LANE_5_0      = cds28.f0d.s_p_e; 
            reg_DFE_FEXT0_S_N_E_LANE_5_0      = cds28.f0d.s_n_e; 
            reg_DFE_FEXT0_D_P_O_LANE_5_0      = cds28.f0d.d_p_o; 
            reg_DFE_FEXT0_D_N_O_LANE_5_0      = cds28.f0d.d_n_o; 
            reg_DFE_FEXT0_S_P_O_LANE_5_0      = cds28.f0d.s_p_o; 
            reg_DFE_FEXT0_S_N_O_LANE_5_0      = cds28.f0d.s_n_o; 
            break;
    }
    DFE_FEN_EVEN_REG.BT.B0    = 0x0f;
    DFE_FEN_EVEN_REG.BT.B0    = 0;
    DFE_FEN_ODD_REG.BT.B0     = 0x0f;
    DFE_FEN_ODD_REG.BT.B0     = 0;
    while(!reg_DFE_UPDATED_LANE);
}
/* **************************************************
 * DFE_SAVE
 * Inputs: 
 *      reg_DFE_*_SM
 * Outputs:
 *      dfe_sm
 */
void dfe_save()
{
    memcpy((uint8_t *)&dfe_sm, (uint8_t *)&DFE_READ_EVEN_SM_REG0, sizeof(Status_dfe_t));
}
/* **************************************************
 * dfe_load_type
 * Args:
 *      type
 *      0: EXT
 *      1: SAV
 *      2: F0 Only
 * Inputs:
 *      FEXT
 *      dfe_sm
 *      cds.dfe_res
 * Outputs:
 *      F0
 *      F1+
 *      OFST
 *      DFE_RES*
 */
void dfe_load_type(uint8_t type)
{
    switch(type)
    {
        case 0:
            // load Ext
            // DFE_RES = current register value
            DFE_FEN_EVEN_REG.VAL    = 0xffffffff;
            DFE_FEN_ODD_REG.VAL     = 0xffffffff;
            DFE_FEN_EVEN_REG.VAL    = 0;
            DFE_FEN_ODD_REG.VAL     = 0;
            break;
        case 1: // load from SAV
#ifdef _RES_ADJ_IN_CDS
            reg_DFE_RES_F1_LANE_1_0     = cds28.dfe_res.res_f1;
            reg_DFE_RES_F234_LANE       = cds28.dfe_res.res_f234;
            reg_DFE_RES_F567_LANE       = cds28.dfe_res.res_f567;
            reg_DFE_RES_F8TO15_LANE     = cds28.dfe_res.res_f8to15;
            reg_DFE_RES_FLOATING_LANE   = cds28.dfe_res.res_floating;
#endif
#if 1
            memcpy((uint8_t *)&DFE_FEXT_EVEN_REG0, (uint8_t *)&dfe_sm, sizeof(Status_dfe_t));
#else
            reg_DFE_FEXT0_D_P_E_LANE_5_0      = dfe_sm.f0_d_p_e; 
            reg_DFE_FEXT0_D_N_E_LANE_5_0      = dfe_sm.f0_d_n_e; 
            reg_DFE_FEXT0_S_P_E_LANE_5_0      = dfe_sm.f0_s_p_e; 
            reg_DFE_FEXT0_S_N_E_LANE_5_0      = dfe_sm.f0_s_n_e; 
            reg_DFE_FEXT0_D_P_O_LANE_5_0      = dfe_sm.f0_d_p_o; 
            reg_DFE_FEXT0_D_N_O_LANE_5_0      = dfe_sm.f0_d_n_o; 
            reg_DFE_FEXT0_S_P_O_LANE_5_0      = dfe_sm.f0_s_p_o; 
            reg_DFE_FEXT0_S_N_O_LANE_5_0      = dfe_sm.f0_s_n_o; 

            reg_DFE_FEXT2_D_P_E_LANE_5_0      = dfe_sm.f2_d_p_e; 
            reg_DFE_FEXT2_D_N_E_LANE_5_0      = dfe_sm.f2_d_n_e; 
            reg_DFE_FEXT2_S_P_E_LANE_5_0      = dfe_sm.f2_s_p_e; 
            reg_DFE_FEXT2_S_N_E_LANE_5_0      = dfe_sm.f2_s_n_e; 
            reg_DFE_FEXT2_D_P_O_LANE_5_0      = dfe_sm.f2_d_p_o; 
            reg_DFE_FEXT2_D_N_O_LANE_5_0      = dfe_sm.f2_d_n_o; 
            reg_DFE_FEXT2_S_P_O_LANE_5_0      = dfe_sm.f2_s_p_o; 
            reg_DFE_FEXT2_S_N_O_LANE_5_0      = dfe_sm.f2_s_n_o; 

            reg_DFE_FEXT3_D_P_E_LANE_4_0      = dfe_sm.f3_d_p_e; 
            reg_DFE_FEXT3_D_N_E_LANE_4_0      = dfe_sm.f3_d_n_e; 
            reg_DFE_FEXT3_S_P_E_LANE_4_0      = dfe_sm.f3_s_p_e; 
            reg_DFE_FEXT3_S_N_E_LANE_4_0      = dfe_sm.f3_s_n_e; 
            reg_DFE_FEXT3_D_P_O_LANE_4_0      = dfe_sm.f3_d_p_o; 
            reg_DFE_FEXT3_D_N_O_LANE_4_0      = dfe_sm.f3_d_n_o; 
            reg_DFE_FEXT3_S_P_O_LANE_4_0      = dfe_sm.f3_s_p_o; 
            reg_DFE_FEXT3_S_N_O_LANE_4_0      = dfe_sm.f3_s_n_o;

            reg_DFE_FEXT1_E_LANE_5_0          = dfe_sm.f1_e;
            reg_DFE_FEXT4_E_LANE_5_0          = dfe_sm.f4_e;
            reg_DFE_FEXT5_E_LANE_5_0          = dfe_sm.f5_e;
            reg_DFE_FEXT6_E_LANE_5_0          = dfe_sm.f6_e;
            reg_DFE_FEXT7_E_LANE_4_0          = dfe_sm.f7_e;
            reg_DFE_FEXT8_E_LANE_4_0          = dfe_sm.f8_e;
            reg_DFE_FEXT9_E_LANE_4_0          = dfe_sm.f9_e;
            reg_DFE_FEXT10_E_LANE_4_0         = dfe_sm.f10_e;
            reg_DFE_FEXT11_E_LANE_4_0         = dfe_sm.f11_e;
            reg_DFE_FEXT12_E_LANE_4_0         = dfe_sm.f12_e;
            reg_DFE_FEXT13_E_LANE_4_0         = dfe_sm.f13_e;
            reg_DFE_FEXT14_E_LANE_4_0         = dfe_sm.f14_e;
            reg_DFE_FEXT15_E_LANE_4_0         = dfe_sm.f15_e;

            reg_DFE_FEXT1_O_LANE_5_0          = dfe_sm.f1_o;
            reg_DFE_FEXT4_O_LANE_5_0          = dfe_sm.f4_o;
            reg_DFE_FEXT5_O_LANE_5_0          = dfe_sm.f5_o;
            reg_DFE_FEXT6_O_LANE_5_0          = dfe_sm.f6_o;
            reg_DFE_FEXT7_O_LANE_4_0          = dfe_sm.f7_o;
            reg_DFE_FEXT8_O_LANE_4_0          = dfe_sm.f8_o;
            reg_DFE_FEXT9_O_LANE_4_0          = dfe_sm.f9_o;
            reg_DFE_FEXT10_O_LANE_4_0         = dfe_sm.f10_o;
            reg_DFE_FEXT11_O_LANE_4_0         = dfe_sm.f11_o;
            reg_DFE_FEXT12_O_LANE_4_0         = dfe_sm.f12_o;
            reg_DFE_FEXT13_O_LANE_4_0         = dfe_sm.f13_o;
            reg_DFE_FEXT14_O_LANE_4_0         = dfe_sm.f14_o;
            reg_DFE_FEXT15_O_LANE_4_0         = dfe_sm.f15_o;

            reg_DFE_FEXTF0_E_LANE_5_0         = dfe_sm.ff0_e;
            reg_DFE_FEXTF1_E_LANE_5_0         = dfe_sm.ff1_e;
            reg_DFE_FEXTF2_E_LANE_5_0         = dfe_sm.ff2_e;
            reg_DFE_FEXTF3_E_LANE_5_0         = dfe_sm.ff3_e;
            reg_DFE_FEXTF4_E_LANE_5_0         = dfe_sm.ff4_e;
            reg_DFE_FEXTF5_E_LANE_5_0         = dfe_sm.ff5_e;

            reg_DFE_FEXTF0_O_LANE_5_0         = dfe_sm.ff0_o;
            reg_DFE_FEXTF1_O_LANE_5_0         = dfe_sm.ff1_o;
            reg_DFE_FEXTF2_O_LANE_5_0         = dfe_sm.ff2_o;
            reg_DFE_FEXTF3_O_LANE_5_0         = dfe_sm.ff3_o;
            reg_DFE_FEXTF4_O_LANE_5_0         = dfe_sm.ff4_o;
            reg_DFE_FEXTF5_O_LANE_5_0         = dfe_sm.ff5_o;
#endif
            DFE_FEN_EVEN_REG.VAL    = 0xffffffff;
            DFE_FEN_EVEN_REG.VAL    = 0;
            DFE_FEN_ODD_REG.VAL     = 0xffffffff;
            DFE_FEN_ODD_REG.VAL     = 0;
            break;
        case 2:
            // load F0 only
            reg_DFE_FEXT0_D_P_E_LANE_5_0      = dfe_sm.f0_d_p_e; 
            reg_DFE_FEXT0_D_N_E_LANE_5_0      = dfe_sm.f0_d_n_e; 
            reg_DFE_FEXT0_S_P_E_LANE_5_0      = dfe_sm.f0_s_p_e; 
            reg_DFE_FEXT0_S_N_E_LANE_5_0      = dfe_sm.f0_s_n_e; 
            reg_DFE_FEXT0_D_P_O_LANE_5_0      = dfe_sm.f0_d_p_o; 
            reg_DFE_FEXT0_D_N_O_LANE_5_0      = dfe_sm.f0_d_n_o; 
            reg_DFE_FEXT0_S_P_O_LANE_5_0      = dfe_sm.f0_s_p_o; 
            reg_DFE_FEXT0_S_N_O_LANE_5_0      = dfe_sm.f0_s_n_o; 
            DFE_FEN_EVEN_REG.BT.B0    = 0x0f;
            DFE_FEN_EVEN_REG.BT.B0    = 0;
            DFE_FEN_ODD_REG.BT.B0     = 0x0f;
            DFE_FEN_ODD_REG.BT.B0     = 0;
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
 * Outputs:
 *      reg_DFE_FEXTDC_*
 *      reg_DFE_FENDC_*
 *      reg_DFE_CTRL_BYPASS
 *      reg_DFE_CTRL_SPLR_LANE_1_0
 */
uint8_t ofst_2ctosm(int8_t ofst)
{
    uint8_t fextdc;
    if(ofst >= 0) fextdc = ofst;
    else {
        fextdc = -ofst;
        fextdc |= 0x40;
    }
    return fextdc;
}
void dc_load(uint8_t type)
{
    if(type==0)
    {
        sampler_sel(OFST_EDGE_E); set_sampler(lnx_CAL_OFST_EDGE_E_LANE_7_0);
        sampler_sel(OFST_EDGE_O); set_sampler(lnx_CAL_OFST_EDGE_O_LANE_7_0);

        reg_OFST_RES_LANE_1_0 = lnx_CAL_SAMPLER_RES_LANE_7_0;
        reg_DFE_FEXTDC_D_P_E_LANE_6_0 = ofst_2ctosm(lnx_CAL_OFST_F1P_D_E_LANE_7_0);
        reg_DFE_FEXTDC_D_N_E_LANE_6_0 = ofst_2ctosm(lnx_CAL_OFST_F1N_D_E_LANE_7_0);
        reg_DFE_FEXTDC_S_P_E_LANE_6_0 = ofst_2ctosm(lnx_CAL_OFST_F1P_S_E_LANE_7_0);
        reg_DFE_FEXTDC_S_N_E_LANE_6_0 = ofst_2ctosm(lnx_CAL_OFST_F1N_S_E_LANE_7_0);
        reg_DFE_FEXTDC_D_P_O_LANE_6_0 = ofst_2ctosm(lnx_CAL_OFST_F1P_D_O_LANE_7_0);
        reg_DFE_FEXTDC_D_N_O_LANE_6_0 = ofst_2ctosm(lnx_CAL_OFST_F1N_D_O_LANE_7_0);
        reg_DFE_FEXTDC_S_P_O_LANE_6_0 = ofst_2ctosm(lnx_CAL_OFST_F1P_S_O_LANE_7_0);
        reg_DFE_FEXTDC_S_N_O_LANE_6_0 = ofst_2ctosm(lnx_CAL_OFST_F1N_S_O_LANE_7_0);
        
    }
    else
    {
        sampler_sel(OFST_EDGE_E); set_sampler(lnx_CAL_OFST_EDGE_E_LANE_7_0);
        sampler_sel(OFST_EDGE_O); set_sampler(lnx_CAL_OFST_EDGE_O_LANE_7_0);
        //  load adapted DC values to samplers
        reg_DFE_FEXTDC_D_P_E_LANE_6_0 = dfe_sm.dc_d_p_e;
        reg_DFE_FEXTDC_D_N_E_LANE_6_0 = dfe_sm.dc_d_n_e;
        reg_DFE_FEXTDC_S_P_E_LANE_6_0 = dfe_sm.dc_s_p_e;
        reg_DFE_FEXTDC_S_N_E_LANE_6_0 = dfe_sm.dc_s_n_e;
        reg_DFE_FEXTDC_D_P_O_LANE_6_0 = dfe_sm.dc_d_p_o;
        reg_DFE_FEXTDC_D_N_O_LANE_6_0 = dfe_sm.dc_d_n_o;
        reg_DFE_FEXTDC_S_P_O_LANE_6_0 = dfe_sm.dc_s_p_o;
        reg_DFE_FEXTDC_S_N_O_LANE_6_0 = dfe_sm.dc_s_n_o;
    }
        reg_DFE_CTRL_BYPASS_LANE = 1;

        reg_DFE_CTRL_SPLR_LANE_1_0 = 1; reg_DFE_FENDC_D_P_E_LANE = 1; reg_DFE_FENDC_D_P_E_LANE = 0; while(!reg_DFE_UPDATED_LANE);
        reg_DFE_CTRL_SPLR_LANE_1_0 = 0; reg_DFE_FENDC_D_N_E_LANE = 1; reg_DFE_FENDC_D_N_E_LANE = 0; while(!reg_DFE_UPDATED_LANE);
        reg_DFE_CTRL_SPLR_LANE_1_0 = 3; reg_DFE_FENDC_S_P_E_LANE = 1; reg_DFE_FENDC_S_P_E_LANE = 0; while(!reg_DFE_UPDATED_LANE);
        reg_DFE_CTRL_SPLR_LANE_1_0 = 2; reg_DFE_FENDC_S_N_E_LANE = 1; reg_DFE_FENDC_S_N_E_LANE = 0; while(!reg_DFE_UPDATED_LANE);
        reg_DFE_CTRL_SPLR_LANE_1_0 = 1; reg_DFE_FENDC_D_P_O_LANE = 1; reg_DFE_FENDC_D_P_O_LANE = 0; while(!reg_DFE_UPDATED_LANE);
        reg_DFE_CTRL_SPLR_LANE_1_0 = 0; reg_DFE_FENDC_D_N_O_LANE = 1; reg_DFE_FENDC_D_N_O_LANE = 0; while(!reg_DFE_UPDATED_LANE);
        reg_DFE_CTRL_SPLR_LANE_1_0 = 3; reg_DFE_FENDC_S_P_O_LANE = 1; reg_DFE_FENDC_S_P_O_LANE = 0; while(!reg_DFE_UPDATED_LANE);
        reg_DFE_CTRL_SPLR_LANE_1_0 = 2; reg_DFE_FENDC_S_N_O_LANE = 1; reg_DFE_FENDC_S_N_O_LANE = 0; while(!reg_DFE_UPDATED_LANE);

        reg_DFE_CTRL_BYPASS_LANE = 0;

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
uint8_t get_ec_voltage()
{
    uint8_t f0;
    uint8_t f0_min;
    if(tag_EO_BASED)
    {
        f0_min =            cds28.f0d.d_p_e;
        f0_min = min(f0_min,cds28.f0d.d_n_e);
        f0_min = min(f0_min,cds28.f0d.s_p_e);
        f0_min = min(f0_min,cds28.f0d.s_n_e);
        f0_min = min(f0_min,cds28.f0d.d_p_o);
        f0_min = min(f0_min,cds28.f0d.d_n_o);
        f0_min = min(f0_min,cds28.f0d.s_p_o);
        f0_min = min(f0_min,cds28.f0d.s_n_o);
    }
    else
    {
        f0_min =            cds28.f0d.d_p_e;
        f0_min = min(f0_min,cds28.f0d.d_n_e);
        f0_min = min(f0_min,cds28.f0d.s_p_e);
        f0_min = min(f0_min,cds28.f0d.s_n_e);
        f0_min = min(f0_min,cds28.f0d.d_p_o);
        f0_min = min(f0_min,cds28.f0d.d_n_o);
        f0_min = min(f0_min,cds28.f0d.s_p_o);
        f0_min = min(f0_min,cds28.f0d.s_n_o);
    }
    f0 = (f0_min >> tag_EYE_CHK_THRESH_K) + tag_EYE_CHK_THRESH_C;
    return f0;
}

void set_esm_voltage(uint8_t f0)
{
    reg_DFE_FEXT0_D_P_E_LANE_5_0      = f0; 
    reg_DFE_FEXT0_D_N_E_LANE_5_0      = f0; 
    reg_DFE_FEXT0_S_P_E_LANE_5_0      = f0; 
    reg_DFE_FEXT0_S_N_E_LANE_5_0      = f0; 
    reg_DFE_FEXT0_D_P_O_LANE_5_0      = f0; 
    reg_DFE_FEXT0_D_N_O_LANE_5_0      = f0; 
    reg_DFE_FEXT0_S_P_O_LANE_5_0      = f0; 
    reg_DFE_FEXT0_S_N_O_LANE_5_0      = f0; 
    DFE_FEN_EVEN_REG.BT.B0    = 0x0f;
    DFE_FEN_EVEN_REG.BT.B0    = 0;
    DFE_FEN_ODD_REG.BT.B0     = 0x0f;
    DFE_FEN_ODD_REG.BT.B0     = 0;
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
uint32_t maxu32(uint32_t a, uint32_t b)
{
    if(a>b) return a;
    else return b;
}
bool check_eye()
{
    uint32_t err_cnt;
    uint32_t pop_cnt;
    if(tag_EYE_CHK_DIS) return 1;
    else
    {
        pop_cnt = EOM_VLD_REG0.VAL;
        pop_cnt = maxu32(pop_cnt,EOM_VLD_REG1.VAL);
        pop_cnt = maxu32(pop_cnt,EOM_VLD_REG2.VAL);
        pop_cnt = maxu32(pop_cnt,EOM_VLD_REG3.VAL);
        err_cnt = EOM_ERR_REG0.VAL;
        err_cnt = maxu32(err_cnt,EOM_ERR_REG1.VAL);
        err_cnt = maxu32(err_cnt,EOM_ERR_REG2.VAL);
        err_cnt = maxu32(err_cnt,EOM_ERR_REG3.VAL);
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
 *      0: F0
 *      1: F0~15
 *      2: F0~15+FF*
 *      3: F0+DC
 *      Others: disable all
 * Inputs:
 *      tag_LOCK_DFE_ON
 * Outputs:
 *      reg_DFE_UPDATE_EN[15:0]
 *      reg_DFE_UDATE_F_EN[5:0]
 *      reg_DFE_UPDATE_DC_EN
 *      reg_DFE_ADAPT_LPNUM[9:0]
 */
void dfe_fsm(uint16_t lpnum, uint8_t tap_en)
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
        reg_DFE_ADAPT_LPNUM_LANE_9_0_b0 = adapt_lpnum;
        reg_DFE_ADAPT_LPNUM_LANE_9_0_b1 = adapt_lpnum >> 4;
        reg_DFE_POL_LPNUM_LANE_9_0_b0 = pol_lpnum;
        reg_DFE_POL_LPNUM_LANE_9_0_b1 = pol_lpnum>>2;
    }

    switch(tap_en)
    {
        case 0: // F0
            reg_DFE_UPDATE_EN_LANE_15_0_b0 = 1;
            reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0;
            reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;
            reg_DFE_UPDATE_DC_EN_LANE = 0;
            break;
        case 1: // Fixed
            reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0xff;
            reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0xff;
            reg_DFE_UPDATE_F_EN_LANE_5_0 = 0x00;
            reg_DFE_UPDATE_DC_EN_LANE = 0;
            break;
        case 2: // All
            reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0xff;
            reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0xff;
            reg_DFE_UPDATE_F_EN_LANE_5_0 = 0x3f;
            reg_DFE_UPDATE_DC_EN_LANE = 0;
            break;
        case 3: // DC
            reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0xfd;
            reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0xff;
            reg_DFE_UPDATE_F_EN_LANE_5_0 = 0x3f;
            reg_DFE_UPDATE_DC_EN_LANE = 1;
            break;
        case 4: // f0/f2/f3/ofst
            reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0x0d;
            reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0x00;
            reg_DFE_UPDATE_F_EN_LANE_5_0 = 0x3f;
            reg_DFE_UPDATE_DC_EN_LANE = 1;
            break;
         case 5: // f4-f15
            reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0xf0;
            reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0xff;
            reg_DFE_UPDATE_F_EN_LANE_5_0 = 0x3f;
            reg_DFE_UPDATE_DC_EN_LANE = 0;
            break;
       default:
            reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0;
            reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0;
            reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;
            reg_DFE_UPDATE_DC_EN_LANE = 0;
    }
    if(tag_LOCK_DFE_ON)
    {
            reg_DFE_UPDATE_EN_LANE_15_0_b0 &= 0x1;
            reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0;
            reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;
    }
    else
    {
        if(lnx_CDS_UPDATE_F_DIS_LANE)
            reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;
        if(lnx_CDS_UPDATE_ODD_DIS_LANE)
        {
            reg_DFE_UPDATE_EN_LANE_15_0_b0 &= 0x55;
            reg_DFE_UPDATE_EN_LANE_15_0_b1 &= 0x55;
        }
    }

//if(reg_DFE_UPDATE_EN_LANE_15_0_b0 & 0x2) //Bug. removed
//    set_ctle_accap(0); // Fast ACCAP for F1 Adaptation

    reg_DFE_START_LANE = 1;
    short_delay();
    timeout_start((uint16_t)2000);
    while(!reg_DFE_DONE_LANE && !timeout);
    if(timeout) {
        tag_CDS_ERR_CODE |= 0x1;
        timeout = 0;
    } timeout_stop;
    reg_DFE_START_LANE = 0;

//    set_ctle_accap(1);
    reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0;
    reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0;
    reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;
    reg_DFE_UPDATE_DC_EN_LANE = 0;
    return;
}

/* **************************************************
 * SET_CTLE_ACCAP
 * Args:
 *      mode
 *      0: Fast
 *      1: Slow
 * Outputs:
 *      reg_ANA_RSVD6_LANE_7_0
 *      reg_FFE_PULSE_DIV_LANE_2_0
 */
void set_ctle_accap(uint8_t mode)
{
    if(mode)
    { // Slow
        reg_ANA_RSVD6_LANE_7_0 = 0xe8;
        reg_FFE_PULSE_DIV_LANE_2_0 = 5;
    }
    else
    { //Fast
        reg_ANA_RSVD6_LANE_7_0 = 0xf0;
        reg_FFE_PULSE_DIV_LANE_2_0 = 2;
    }
    delay(Tus);
}


/* **************************************************
 * DFE_SPD_INIT
 * Inputs:
 *      reg_RX_SPEED_DIV_LANE_2_0
 * Outputs:
 *      reg_DFE_EVEN_ODD_SIM_ADAPT_LANE
 *      reg_DFE_ADAPT_EVEN_EN_LANE
 *      reg_DFE_ADAPT_ODD_EN_LANE
 *      reg_CDS_ADAPT_SPLR_DIS_LANE_3_0
 *      reg_CDS_UPDATE_ODD_DIS_LANE
 *      reg_CDS_UPDATE_F_DIS_LANE
 */
 /* //removed because of duplicate in spdchg
void dfe_spd_init()
{
    // Default: Enable both even and odd path adaptation
    reg_DFE_EVEN_ODD_SIM_ADAPT_LANE = 1;
    reg_DFE_ADAPT_EVEN_EN_LANE = 1;
    reg_DFE_ADAPT_ODD_EN_LANE = 1;
    reg_CDS_ADAPT_SPLR_DIS_LANE_3_0 = 0;
    reg_CDS_UPDATE_ODD_DIS_LANE = 0;
    reg_CDS_UPDATE_F_DIS_LANE = 0;

    switch(reg_RX_SPEED_DIV_LANE_2_0 & 0x3)
    {
        case 3:  // Disable even path adaptation
            reg_DFE_EVEN_ODD_SIM_ADAPT_LANE = 0;
            reg_DFE_ADAPT_EVEN_EN_LANE = 0;
            reg_CDS_ADAPT_SPLR_DIS_LANE_3_0 = 5;
            break;
        case 2:  // Disable odd path adaptation
            reg_DFE_EVEN_ODD_SIM_ADAPT_LANE = 0;
            reg_DFE_ADAPT_ODD_EN_LANE = 0;
            reg_CDS_ADAPT_SPLR_DIS_LANE_3_0 = 5;
            break;
        case 1:  // Disable even path adaptation
            reg_DFE_EVEN_ODD_SIM_ADAPT_LANE = 0;
            reg_DFE_ADAPT_EVEN_EN_LANE = 0;
            reg_CDS_ADAPT_SPLR_DIS_LANE_3_0 = 5;
            reg_CDS_UPDATE_ODD_DIS_LANE = 1;
            reg_CDS_UPDATE_F_DIS_LANE = 1;
            break;
    }
}
*/
#endif //SUPPORT_NEW_CDS
