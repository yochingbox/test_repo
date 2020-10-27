
#ifndef DRV_CDS_H
#define DRV_CDS_H


// PRIVATE METHODS
void drv_set_dp_lms_ffe_pre_en (uint8_t ffe_en) BANKING_CTRL;
void drv_set_dp_lms_ffe_pst_en (uint16_t ffe_en) BANKING_CTRL;
void drv_set_dp_lms_ffe_flt_en (uint8_t ffe_en) BANKING_CTRL;
void drv_set_dtl_lms_ffe_pre_en (uint8_t ffe_en) BANKING_CTRL;
void drv_set_dtl_lms_ffe_pst_en (uint8_t ffe_en) BANKING_CTRL;
void drv_set_dp_lms_ld (bool set) BANKING_CTRL;
void drv_set_dp_lms_ext (uint8_t set) BANKING_CTRL;
void drv_set_dtl_lms_ld (bool set) BANKING_CTRL;
void drv_set_dtl_lms_ext (bool set) BANKING_CTRL;
void drv_sav_dp_lms (void) BANKING_CTRL;
void drv_sav_dtl_lms (void) BANKING_CTRL;
void drv_ph_scn_en (uint16_t freq_ofst) BANKING_CTRL;
void drv_ph_scn_dis (void) BANKING_CTRL;
void drv_ph_scn_wait (uint16_t freq_ofst, uint16_t loop_num) BANKING_CTRL;
void wait_converge (uint16_t timer) BANKING_CTRL;
void drv_dfe_opt (void) BANKING_CTRL;
void drv_ffe_flt_opt (void) BANKING_CTRL;
void drv_ffe_len_opt (void) BANKING_CTRL;
void drv_dtl_ph_opt (uint8_t cont_en) BANKING_CTRL;
bool check_cdr_lock (void) BANKING_CTRL;
void drv_pwr_opt (uint8_t en) BANKING_CTRL;
void drv_adc_res_cfg (uint8_t idx, uint8_t loop_ctrl_flag) BANKING_CTRL;


#endif
