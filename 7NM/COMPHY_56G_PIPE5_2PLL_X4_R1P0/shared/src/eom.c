#include "common.h"
#include "driver.h"

void esm_preparation();
void esm_measure();
void esm_exit();
//void set_dfe_cont(bool on);
//void cds_save(uint8_t type);
//void cds_load_f0(uint8_t type);
//void dfe_save();

void dfe_load(uint8_t type) BANKING_CTRL;

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

void Check_EOM_Stage_fmExt(void) {
#ifdef SUPPORT_EOM 

    esm_preparation();
    esm_measure();
    esm_exit();

#endif   // EOM
}

void esm_preparation() {
#ifdef SUPPORT_EOM
    //reg_DFE_ADAPT_CONT_LANE = 0;
    //reg_DFE_START_LANE = 0;
    if(lnx_ESM_EN_LANE==1 && lnx_EOM_READY_LANE==0)
    {
        //TODO dfe_backon();
        if(reg_RX_EOM_TOP_CONT_START_LANE) {
            reg_RX_EOM_TOP_CONT_START_LANE = 0;
            while(!reg_RX_EOM_TOP_CONT_DONE_LANE);
        }

        set_dfe_cont(0);
        save_dfe_en = ~reg_DFE_DIS_LANE;
        save_pu_smplr_s_e = reg_PU_SMPLR_S_E_LANE_2_0;
        save_pu_smplr_s_o = reg_PU_SMPLR_S_O_LANE_2_0;
        reg_DFE_DIS_LANE = 0;
        reg_PU_SMPLR_S_E_LANE_2_0 = reg_PU_SMPLR_D_E_LANE_2_0;
        reg_PU_SMPLR_S_O_LANE_2_0 = reg_PU_SMPLR_D_O_LANE_2_0;
        set_dfe_en(1);

        if(lnx_ESM_PATH_SEL_LANE) {
            drv_ADAPT_SLICER_EN = 1;
            drv_ADAPT_DATA_EN = 0;
        }else{
            drv_ADAPT_SLICER_EN = 0;
            drv_ADAPT_DATA_EN = 1;
        }

        //if(DFE_DIS_LANE) 
        //    set_dfe_en(1);
        dfe_save();

        if (reg_RXSPEED_DIV_LANE_2_0&0x04) {  //  the PI DCC is not able to be detected when DIV2 is on
            reg_RX_EOM_PI_DCC_CAL_BYPASS_EN_LANE = 1; 
        }
        else { //set back default setting
            reg_RX_EOM_PI_DCC_CAL_BYPASS_EN_LANE = 0;
        }
        if (reg_RXSPEED_DIV_LANE_2_0&0x03 != 0) {    // EDGE clk will turn off at low data rate
            reg_RX_EOM_PI_CAL_BYPASS_EN_LANE = 1;
        }
        else{
            reg_RX_EOM_PI_CAL_BYPASS_EN_LANE = 0;
        }

        rx_eom_cal();

        set_ph_mode(1);
        reg_EOM_DPHERCK_SEL_LANE = 0; 
        eom_ext_mode = 1;
        eom_ui_align();

        PHY_STATUS = ST_NORMAL; 
        dfe_save();
        cds_save(Savf0a);

        //eye_check_en = 1;
        lnx_EOM_READY_LANE = 1;  //release
        dpher_offset = 0;

        //Set default LPNUM: as Tui_align
        if(!drv_ESM_LPNUM1) drv_ESM_LPNUM1 = 0x20;
        if(!drv_ESM_LPNUM0) drv_ESM_LPNUM0 = 0x8;

        cur_esm_phase = 0;
    }
#endif
}

void esm_measure() {
#ifdef SUPPORT_EOM
    int16_t new_esm_ph;
    new_esm_ph = 0;

    if(lnx_ESM_EN_LANE==1 && lnx_EOM_READY_LANE==1 && lnx_EOM_DFE_CALL_LANE==1)
    {    
        if(lnx_ESM_PHASE_LANE_10_0_b1 & 0x04) {
            new_esm_ph = 0xf800 |  (lnx_ESM_PHASE_LANE_10_0_b1<<8) | lnx_ESM_PHASE_LANE_10_0_b0; 
        }
        else {
            new_esm_ph = (lnx_ESM_PHASE_LANE_10_0_b1<<8) | lnx_ESM_PHASE_LANE_10_0_b0;
        }

        move_eom_phase(new_esm_ph - cur_esm_phase);
        cur_esm_phase = new_esm_ph;

        drv_cdr_dfe_scheme(cds_table[CDS_EN_EYECHECK]);
        
        lnx_EOM_DFE_CALL_LANE = 0;
    }
#endif
}

void esm_exit() {
#ifdef SUPPORT_EOM
    if( eom_ext_mode==1 && lnx_ESM_EN_LANE==0 )
    {
        //eye_check_en = 0;
        reg_EOM_DPHERCK_SEL_LANE = 1; //set back to 1
        lnx_EOM_READY_LANE = 0;
        reg_EOM_CLK_EN_LANE = 0;
        reg_EOM_DCCEN_LANE = 0;
        drv_ADAPT_SLICER_EN = 1;
        drv_ADAPT_DATA_EN = 1;

        set_ph_esm(0);
        set_ph_mode(0);
        cds_load_f0(0);

        if(save_dfe_en==0){
            reg_DFE_DIS_LANE = 1;
            set_dfe_en(0);
        }
        reg_PU_SMPLR_S_E_LANE_2_0 = save_pu_smplr_s_e;
        reg_PU_SMPLR_S_O_LANE_2_0 = save_pu_smplr_s_o;
        set_dfe_cont(1);
        //Call SPD_DFE_INIT
        //if (DFE_DIS_LANE)
        //    set_dfe_en(0)
        //else
        //    if(!RTPA_EN)
            //         set_dfe_cont(on)
        //?? reg_RX_EOM_TOP_CONT_START_LANE = 1;
        eom_ext_mode = 0;
    }
#endif
}

