
#ifndef DRV_CDS_H
#define DRV_CDS_H


// PRIVATE METHODS
void drv_set_dp_lms_ffe_pre_en (uint8_t ffe_en);
void drv_set_dp_lms_ffe_pst_en (uint8_t ffe_en_b0, uint8_t ffe_en_b1, uint8_t ffe_en_b2);
void drv_set_dp_lms_ffe_flt_en (uint8_t ffe_en);
void drv_set_dtl_lms_ffe_pre_en (uint8_t ffe_en);
void drv_set_dtl_lms_ffe_pst_en (uint8_t ffe_en);
void drv_set_dp_lms_ld (bool set);
void drv_set_dp_lms_ext (uint8_t set);
void drv_set_dtl_lms_ld (bool set);
void drv_set_dtl_lms_ext (bool set);
void drv_sav_dp_lms (void);
void drv_sav_dtl_lms (void);
void drv_ph_scn_en (uint32_t freq_ofst);
void drv_ph_scn_dis (void);
void wait_converge (uint16_t timer);
void drv_dfe_opt (void);
void drv_ffe_flt_opt (void);
bool check_cdr_lock (void);
void drv_pwr_opt (uint8_t en);


#endif
