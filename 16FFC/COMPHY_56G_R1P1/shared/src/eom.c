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
void Check_EOM_Stage_fmExt(void)
{
#ifdef SUPPORT_EOM 
	
	esm_preparation();
	esm_measure();
	esm_exit();

#endif   // EOM

}

void esm_preparation() 
{
#ifdef SUPPORT_EOM
	//reg_DFE_ADAPT_CONT_LANE = 0;
	//reg_DFE_START_LANE = 0;
	if(lnx_ESM_EN_LANE==1 && lnx_EOM_READY_LANE==0)
	{
	        set_dfe_cont(0);

		if(lnx_ESM_PATH_SEL_LANE) {
//		    adapt_slicer_en = 1; adapt_data_en = 0;
		    drv_ADAPT_SLICER_EN = 1;
		    drv_ADAPT_DATA_EN = 0;
		}else{
//		    adapt_slicer_en = 0; adapt_data_en = 1;
		    drv_ADAPT_SLICER_EN = 0;
		    drv_ADAPT_DATA_EN = 1;
		}

		//if(DFE_DIS_LANE) 
		//    set_dfe_en(1);
		dfe_save();
		reg_EOM_CLK_EN_LANE = 1;


		eom_align_cal();

		set_ph_mode(1);

		eom_ui_align();
		PHY_STATUS = ST_NORMAL; 
		dfe_save();
		cds_save(Savf0a);

		eye_check_en = 1;		
		eom_ext_mode = 1;
		lnx_EOM_READY_LANE = 1;  //release
		dpher_offset = 0;
	}
#endif
}

void esm_measure()
{
#ifdef SUPPORT_EOM
        int16_t new_esm_ph;
	new_esm_ph = 0;

	if(lnx_ESM_EN_LANE==1 && lnx_EOM_READY_LANE==1 && lnx_EOM_DFE_CALL_LANE==1)
	{	

		if(lnx_ESM_PHASE_LANE_9_0_b1 & 0x02) {
			new_esm_ph = 0xfc00 |  (lnx_ESM_PHASE_LANE_9_0_b1<<8) | lnx_ESM_PHASE_LANE_9_0_b0; 
		}
		else {
			new_esm_ph = (lnx_ESM_PHASE_LANE_9_0_b1<<8) | lnx_ESM_PHASE_LANE_9_0_b0;
		}

		set_ph_esm(new_esm_ph);
		cdr_dfe_scheme_new(cds_table[CDS_EN_EYECHECK]);
		cur_esm_phase = new_esm_ph;

		lnx_EOM_DFE_CALL_LANE = 0;
	}
#endif
}

void esm_exit()
{
#ifdef SUPPORT_EOM
	if( eom_ext_mode==1 && lnx_ESM_EN_LANE==0 )
	{
		eye_check_en = 0;
		lnx_EOM_READY_LANE = 0;
		eom_ext_mode = 0;
		reg_EOM_CLK_EN_LANE = 0;
		drv_ADAPT_SLICER_EN = 1;
		drv_ADAPT_DATA_EN = 1;

		set_ph_esm(0);
		set_ph_mode(0);
		cds_load_f0(Savf0a);
		set_dfe_cont(1);
		//Call SPD_DFE_INIT
		//if (DFE_DIS_LANE)
		//    set_dfe_en(0)
		//else
		//    if(!RTPA_EN)
	        //         set_dfe_cont(on)
	}
#endif
}

