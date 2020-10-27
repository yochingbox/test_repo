#ifndef DFETABLE_H
#define DFETABLE_H

/****************************************
 * CDR DFE SCHEME predefined parameter sets
*****************************************/

#ifndef NEW_CDS
__code uint16_t cds_table[]   = { 
	//0x0ff0, //CDS_DEFAULT //skip_cdr=0 ofst_adapt_en=0
	0x4ff0, //CDS_DEFAULT //skip_cdr=0 ofst_adapt_en=1
		  //0 = reset_bypass
		  //0 = coarse_dtl_bypass  
		  //0 = phase_move_with_dfe_en = !skip_cdr &&reg_phase_move_with_DFE_en
		  //0 = ee_os_adapt_en		  		  
		  //1 = dfe_adapt_en = reg_DFE_adapt_en 
		  //1 = dfe_adapt_f0a_en  
		  //1 = coarse_dfe_en =  !skip_cdr &&reg_coarse_DFE_en
		  //1 = coarse_f0_en =  !skip_cdr &&reg_coarse_F0_en		  
		  //1 = fine_dfe_en = reg_fine_DFE_en		  		  
		  //1 = accu_dfe_en 
		  //1 = f0b_adapt_en
		  //1 = f0d_adapt_en		  
		  //0 = vh_eo_mode REG		  
		  //0 = eye_check_bypass 
		  //1 = ofst_adapt_en
		  //0 = lock_dfe_on = skip_cdr&&reg_skip_cdr_freeze_dfe_mode
	0x4793, //cds_skipcdr 
          //1 = reset_bypass
          //1 = coarse_dtl_bypass
          //0 = phase_move_with_dfe_en 
          //0 = ee_os_adapt_en 
          //1 = dfe_adapt_en
          //0 = coarse_dfe_en 
          //0 = coarse_f0_en 
          //1 = fine_dfe_en
          //1 = accu_dfe_en
          //1 = f0b_adapt_en REG
          //1 = f0d_adapt_en
          //0 = vh_eo_mode REG
          //0 = eye_check_bypass REG
          //0 = err_slicer_eom_clock_en
          //1 = ofst_adapt_en
          //0 = lock_dfe_on
	0x2213, //cds_eomadapt
		  //1 = reset_bypass
		  //1 = coarse_dtl_bypass  
		  //0 = phase_move_with_dfe_en = !skip_cdr &&reg_phase_move_with_DFE_en
		  //0 = ee_os_adapt_en		  		  
		  //1 = dfe_adapt_en = reg_DFE_adapt_en 
		  //0 = dfe_adapt_f0a_en  
		  //0 = coarse_dfe_en =  !skip_cdr &&reg_coarse_DFE_en
		  //0 = coarse_f0_en =  !skip_cdr &&reg_coarse_F0_en		  		  
		  //0 = fine_dfe_en = reg_fine_DFE_en		  		  
		  //1 = accu_dfe_en 
		  //0 = f0b_adapt_en
		  //0 = f0d_adapt_en		  
		  //0 = vh_eo_mode REG		  
		  //1 = eye_check_bypass 
		  //0 = ofst_adapt_en
		  //0 = lock_dfe_on = skip_cdr&&reg_skip_cdr_freeze_dfe_mode  
	0x0003, //cds_eyecheck
		  //1 = reset_bypass
		  //1 = coarse_dtl_bypass  
		  //0 = phase_move_with_dfe_en = !skip_cdr &&reg_phase_move_with_DFE_en
		  //0 = ee_os_adapt_en		  		  
		  //0 = dfe_adapt_en = reg_DFE_adapt_en 
		  //0 = dfe_adapt_f0a_en  
		  //0 = coarse_dfe_en =  !skip_cdr &&reg_coarse_DFE_en
		  //0 = coarse_f0_en =  !skip_cdr &&reg_coarse_F0_en		  		  
		  //0 = fine_dfe_en = reg_fine_DFE_en		  		  
		  //0 = accu_dfe_en 
		  //0 = f0b_adapt_en
		  //0 = f0d_adapt_en		  		  
		  //0 = vh_eo_mode REG		  
		  //0 = eye_check_bypass 
		  //0 = ofst_adapt_en
		  //0 = lock_dfe_on = skip_cdr&&reg_skip_cdr_freeze_dfe_mode  
	0x2213, //cds_dataadapt
		  //1 = reset_bypass
		  //1 = coarse_dtl_bypass  
		  //0 = phase_move_with_dfe_en = !skip_cdr &&reg_phase_move_with_DFE_en
		  //0 = ee_os_adapt_en	  
		  //1 = dfe_adapt_en = reg_DFE_adapt_en 
		  //0 = dfe_adapt_f0a_en  
		  //0 = coarse_dfe_en =  !skip_cdr &&reg_coarse_DFE_en
		  //0 = coarse_f0_en =  !skip_cdr &&reg_coarse_F0_en		  		  
		  //0 = fine_dfe_en = reg_fine_DFE_en		  		  
		  //1 = accu_dfe_en 
		  //0 = f0b_adapt_en
		  //0 = f0d_adapt_en			  
		  //0 = vh_eo_mode REG		  
		  //1 = eye_check_bypass 
		  //0 = ofst_adapt_en
		  //0 = lock_dfe_on = skip_cdr&&reg_skip_cdr_freeze_dfe_mode  
	0x3803, //cds_normf0d 
		  //1 = reset_bypass
		  //1 = coarse_dtl_bypass  
		  //0 = phase_move_with_dfe_en = !skip_cdr &&reg_phase_move_with_DFE_en
		  //0 = ee_os_adapt_en			  
		  //0 = dfe_adapt_en = reg_DFE_adapt_en 
		  //0 = dfe_adapt_f0a_en  
		  //0 = coarse_dfe_en =  !skip_cdr &&reg_coarse_DFE_en
		  //0 = coarse_f0_en =  !skip_cdr &&reg_coarse_F0_en			  
		  //0 = fine_dfe_en = reg_fine_DFE_en		  		  
		  //0 = accu_dfe_en 
		  //0 = f0b_adapt_en
		  //1 = f0d_adapt_en			  
		  //1 = vh_eo_mode REG		  
		  //1 = eye_check_bypass 
		  //0 = ofst_adapt_en
		  //0 = lock_dfe_on = skip_cdr&&reg_skip_cdr_freeze_dfe_mode  
	0x2803, //cds_dataf0d
		  //1 = reset_bypass
		  //1 = coarse_dtl_bypass  
		  //0 = phase_move_with_dfe_en = !skip_cdr &&reg_phase_move_with_DFE_en
		  //0 = ee_os_adapt_en			  
		  //0 = dfe_adapt_en = reg_DFE_adapt_en 
		  //0 = dfe_adapt_f0a_en  
		  //0 = coarse_dfe_en =  !skip_cdr &&reg_coarse_DFE_en
		  //0 = coarse_f0_en =  !skip_cdr &&reg_coarse_F0_en			  
		  //0 = fine_dfe_en = reg_fine_DFE_en		  		  
		  //0 = accu_dfe_en 
		  //0 = f0b_adapt_en
		  //1 = f0d_adapt_en			  
		  //0 = vh_eo_mode REG		  
		  //1 = eye_check_bypass 
		  //0 = ofst_adapt_en
		  //0 = lock_dfe_on = skip_cdr&&reg_skip_cdr_freeze_dfe_mode  
	0x21f8, //cds_rxinit
		  //0 = reset_bypass
		  //0 = coarse_dtl_bypass  
		  //0 = phase_move_with_dfe_en = !skip_cdr &&reg_phase_move_with_DFE_en
		  //1 = ee_os_adapt_en			  
		  //1 = dfe_adapt_en = reg_DFE_adapt_en 
		  //1 = dfe_adapt_f0a_en  
		  //1 = coarse_dfe_en =  !skip_cdr &&reg_coarse_DFE_en
		  //1 = coarse_f0_en =  !skip_cdr &&reg_coarse_F0_en			  
		  //0 = fine_dfe_en = reg_fine_DFE_en		  		  
		  //0 = accu_dfe_en 
		  //0 = f0b_adapt_en
		  //0 = f0d_adapt_en			  
		  //0 = vh_eo_mode REG		  
		  //1 = eye_check_bypass 
		  //0 = ofst_adapt_en
		  //0 = lock_dfe_on = skip_cdr&&reg_skip_cdr_freeze_dfe_mode  
	0xe210,//cds_fastacq 
		  //0 = reset_bypass
		  //0 = coarse_dtl_bypass  
		  //0 = phase_move_with_dfe_en 
		  //0 = ee_os_adapt_en		  		  
		  //1 = dfe_adapt_en = reg_DFE_adapt_en 
		  //0 = coarse_dfe_en 
		  //0 = dfe_adapt_f0a_en
		  //0 = coarse_f0_en =  !fast_acq_mode &&reg_coarse_F0_en		  		  
		  //0 = fine_dfe_en = reg_fine_DFE_en		  			  
		  //1 = accu_dfe_en = !fast_acq_mode
		  //0 = f0b_adapt_en
		  //0 = f0d_adapt_en		  		  
		  //0 = vh_eo_mode REG			  
		  //1 = eye_check_bypass 
		  //1 = ofst_adapt_en
		  //1 = lock_dfe_on = fast_acq_mode
	0x2253, //cds_status_dataadapt
		  //1 = reset_bypass
		  //1 = coarse_dtl_bypass  
		  //0 = phase_move_with_dfe_en = !skip_cdr &&reg_phase_move_with_DFE_en
		  //0 = ee_os_adapt_en			  
		  //1 = dfe_adapt_en = reg_DFE_adapt_en 
		  //0 = dfe_adapt_f0a_en  
		  //1 = coarse_dfe_en =  !skip_cdr &&reg_coarse_DFE_en
		  //0 = coarse_f0_en =  !skip_cdr &&reg_coarse_F0_en		  		  
		  //0 = fine_dfe_en = reg_fine_DFE_en		  		  
		  //1 = accu_dfe_en 
		  //0 = f0b_adapt_en
		  //0 = f0d_adapt_en			  
		  //0 = vh_eo_mode REG		  
		  //1 = eye_check_bypass 
		  //0 = ofst_adapt_en
		  //0 = lock_dfe_on = skip_cdr&&reg_skip_cdr_freeze_dfe_mode  
};
#endif
#endif //DFETABLE_H

