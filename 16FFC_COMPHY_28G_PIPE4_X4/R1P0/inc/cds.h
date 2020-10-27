#ifndef DFETABLE_H
#define DFETABLE_H

/****************************************
 * CDR DFE SCHEME predefined parameter sets
*****************************************/


__code uint16_t cds_table[]   = { 
0x0f50, //CDS_DEFAULT //skip_cdr=0 ofst_adapt_en=0
//0 = reset_bypass
//0 = coarse_dtl_bypass  
//0 = phase_move_with_dfe_en = !skip_cdr &&reg_phase_move_with_DFE_en
//0 = ee_os_adapt_en			  
//1 = dfe_adapt_en = reg_DFE_adapt_en 
//0 //1 = dfe_adapt_f0a_en  
//1 = coarse_dfe_en =  !skip_cdr &&reg_coarse_DFE_en
//0 = dis_adapt_f1 =  !skip_cdr &&reg_dis_adapt_f1_en		  		  		  
//1 = fine_dfe_en = reg_fine_DFE_en		  		  
//1 = accu_dfe_en 
//1 = f0b_adapt_en
//1 = f0d_adapt_en		  		  
//0 = vh_eo_mode REG		  
//0 = eye_check_bypass 
//0 = ofst_adapt_en
//0 = lock_dfe_on = skip_cdr&&reg_skip_cdr_freeze_dfe_mode
0x0793, //cds_skipcdr 
//1 = reset_bypass
//1 = coarse_dtl_bypass
//0 = phase_move_with_dfe_en 
//0 = ee_os_adapt_en 		  
//1 = dfe_adapt_en
//0 = coarse_dfe_en 
//0 = dis_adapt_f1 
//1 = fine_dfe_en		  
//1 = accu_dfe_en
//1 = f0b_adapt_en REG
//1 = f0d_adapt_en
//0 = vh_eo_mode REG
//0 = eye_check_bypass REG
//0 = err_slicer_eom_clock_en
//0 = ofst_adapt_en
//0 = lock_dfe_on
0x6003, //cds_eomadapt
//1 = reset_bypass
//1 = coarse_dtl_bypass  
//0 = phase_move_with_dfe_en = !skip_cdr &&reg_phase_move_with_DFE_en
//0 = ee_os_adapt_en		  		  
//0 = dfe_adapt_en = reg_DFE_adapt_en 
//0 = dfe_adapt_f0a_en  
//0 = coarse_dfe_en =  !skip_cdr &&reg_coarse_DFE_en
//0 = dis_adapt_f1 =  !skip_cdr &&reg_dis_adapt_f1_en		  		  
//0 = fine_dfe_en = reg_fine_DFE_en		  		  
//0 = accu_dfe_en 
//0 = f0b_adapt_en
//0 = f0d_adapt_en		  
//0 = vh_eo_mode REG		  
//1 = eye_check_bypass 
//1 = ofst_adapt_en
//0 = lock_dfe_on = skip_cdr&&reg_skip_cdr_freeze_dfe_mode  
0x0003, //cds_eyecheck
//1 = reset_bypass
//1 = coarse_dtl_bypass  
//0 = phase_move_with_dfe_en = !skip_cdr &&reg_phase_move_with_DFE_en
//0 = ee_os_adapt_en		  		  
//0 = dfe_adapt_en = reg_DFE_adapt_en 
//0 = dfe_adapt_f0a_en  
//0 = coarse_dfe_en =  !skip_cdr &&reg_coarse_DFE_en
//0 = dis_adapt_f1 =  !skip_cdr &&reg_dis_adapt_f1_en		  		  
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
//0 = dis_adapt_f1 =  !skip_cdr &&reg_dis_adapt_f1_en		  		  
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
//0 = dis_adapt_f1 =  !skip_cdr &&reg_dis_adapt_f1_en			  
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
//0 = dis_adapt_f1 =  !skip_cdr &&reg_dis_adapt_f1_en			  
//0 = fine_dfe_en = reg_fine_DFE_en		  		  
//0 = accu_dfe_en 
//0 = f0b_adapt_en
//1 = f0d_adapt_en			  
//0 = vh_eo_mode REG		  
//1 = eye_check_bypass 
//0 = ofst_adapt_en
//0 = lock_dfe_on = skip_cdr&&reg_skip_cdr_freeze_dfe_mode  
0x2178, //cds_rxinit
//0 = reset_bypass
//0 = coarse_dtl_bypass  
//0 = phase_move_with_dfe_en = !skip_cdr &&reg_phase_move_with_DFE_en
//1 = ee_os_adapt_en			  
//1 = dfe_adapt_en = reg_DFE_adapt_en 
//1 = dfe_adapt_f0a_en  
//1 = coarse_dfe_en =  !skip_cdr &&reg_coarse_DFE_en
//0 = dis_adapt_f1 =  !skip_cdr &&reg_dis_adapt_f1_en			  
//0 = fine_dfe_en = reg_fine_DFE_en		  		  
//0 = accu_dfe_en 
//0 = f0b_adapt_en
//0 = f0d_adapt_en			  
//0 = vh_eo_mode REG		  
//1 = eye_check_bypass 
//0 = ofst_adapt_en
//0 = lock_dfe_on = skip_cdr&&reg_skip_cdr_freeze_dfe_mode  
0xa110,//cds_fastacq 
//0 = reset_bypass
//0 = coarse_dtl_bypass  
//0 = phase_move_with_dfe_en 
//0 = ee_os_adapt_en		  			  
//1 = dfe_adapt_en = reg_DFE_adapt_en 
//0 = coarse_dfe_en 
//0 = dfe_adapt_f0a_en
//0 = dis_adapt_f1 =  !fast_acq_mode &&reg_dis_adapt_f1_en		  		  		  
//1 = fine_dfe_en = reg_fine_DFE_en		  			  
//0 = accu_dfe_en = !fast_acq_mode
//0 = f0b_adapt_en
//0 = f0d_adapt_en		  		  		  
//0 = vh_eo_mode REG			  
//1 = eye_check_bypass 
//0 = ofst_adapt_en
//1 = lock_dfe_on = fast_acq_mode
0x2253, //cds_status_dataadapt
//1 = reset_bypass
//1 = coarse_dtl_bypass  
//0 = phase_move_with_dfe_en = !skip_cdr &&reg_phase_move_with_DFE_en
//0 = ee_os_adapt_en			  
//1 = dfe_adapt_en = reg_DFE_adapt_en 
//0 = dfe_adapt_f0a_en  
//1 = coarse_dfe_en =  !skip_cdr &&reg_coarse_DFE_en
//0 = dis_adapt_f1 =  !skip_cdr &&reg_dis_adapt_f1_en		  		  
//0 = fine_dfe_en = reg_fine_DFE_en		  		  
//1 = accu_dfe_en 
//0 = f0b_adapt_en
//0 = f0d_adapt_en			  
//0 = vh_eo_mode REG		  
//1 = eye_check_bypass 
//0 = ofst_adapt_en
//0 = lock_dfe_on = skip_cdr&&reg_skip_cdr_freeze_dfe_mode  
0x0f74, //CDS_DEFAULT_PHASE_MOVE_DFE_EN //skip_cdr=0 ofst_adapt_en=0 phase_move_with_dfe_en=1
//0 = reset_bypass
//0 = coarse_dtl_bypass  
//1 = phase_move_with_dfe_en = !skip_cdr &&reg_phase_move_with_DFE_en
//0 = ee_os_adapt_en		  		  
//1 = dfe_adapt_en = reg_DFE_adapt_en 
//1 = dfe_adapt_f0a_en  
//1 = coarse_dfe_en =  !skip_cdr &&reg_coarse_DFE_en
//0 = dis_adapt_f1 =  !skip_cdr &&reg_dis_adapt_f1_en		  
//1 = fine_dfe_en = reg_fine_DFE_en		  		  
//1 = accu_dfe_en 
//1 = f0b_adapt_en
//1 = f0d_adapt_en		  
//0 = vh_eo_mode REG		  
//0 = eye_check_bypass 
//0 = ofst_adapt_en
//0 = lock_dfe_on = skip_cdr&&reg_skip_cdr_freeze_dfe_mode
0x2b50, //CDS_DEFAULT_PCIE //skip_cdr=0 ofst_adapt_en=0 phase_move_with_dfe_en=0
//0 = reset_bypass
//0 = coarse_dtl_bypass  
//0 = phase_move_with_dfe_en = !skip_cdr &&reg_phase_move_with_DFE_en
//0 = ee_os_adapt_en		  
//1 = dfe_adapt_en = reg_DFE_adapt_en 
//0 = dfe_adapt_f0a_en  
//1 = coarse_dfe_en =  !skip_cdr &&reg_coarse_DFE_en
//0 = dis_adapt_f1 =  !skip_cdr &&reg_dis_adapt_f1_en		  		  
//1 = fine_dfe_en = reg_fine_DFE_en		  		  
//1 = accu_dfe_en 
//0 = f0b_adapt_en
//1 = f0d_adapt_en		  		  
//0 = vh_eo_mode REG		  
//1 = eye_check_bypass 
//0 = ofst_adapt_en
//0 = lock_dfe_on = skip_cdr&&reg_skip_cdr_freeze_dfe_mode
0x6293, //cds_ofstdataadapt 
//1 = reset_bypass
//1 = coarse_dtl_bypass  
//0 = phase_move_with_dfe_en = !skip_cdr &&reg_phase_move_with_DFE_en
//0 = ee_os_adapt_en	  
//1 = dfe_adapt_en = reg_DFE_adapt_en 
//0 = dfe_adapt_f0a_en  
//0 = coarse_dfe_en =  !skip_cdr &&reg_coarse_DFE_en
//1 = dis_adapt_f1 =  !skip_cdr &&reg_dis_adapt_f1_en		  		  
//0 = fine_dfe_en = reg_fine_DFE_en		  		  
//1 = accu_dfe_en 
//0 = f0b_adapt_en
//0 = f0d_adapt_en			  
//0 = vh_eo_mode REG		  
//1 = eye_check_bypass 
//1 = ofst_adapt_en
//0 = lock_dfe_on = skip_cdr&&reg_skip_cdr_freeze_dfe_mode  
0x0803, //CDS_DEFAULT_PHASE_MOVE_DFE_DIS //skip_cdr=0 ofst_adapt_en=0 phase_move_with_dfe_en=1
//1 = reset_bypass
//1 = coarse_dtl_bypass  
//0 = phase_move_with_dfe_en = !skip_cdr &&reg_phase_move_with_DFE_en
//0 = ee_os_adapt_en		  		  
//0 = dfe_adapt_en = reg_DFE_adapt_en 
//0 = dfe_adapt_f0a_en  
//0 = coarse_dfe_en =  !skip_cdr &&reg_coarse_DFE_en
//0 = dis_adapt_f1 =  !skip_cdr &&reg_dis_adapt_f1_en		  
//0 = fine_dfe_en = reg_fine_DFE_en		  		  
//0 = accu_dfe_en 
//0 = f0b_adapt_en
//1 = f0d_adapt_en		  
//0 = vh_eo_mode REG		  
//0 = eye_check_bypass 
//0 = ofst_adapt_en
//0 = lock_dfe_on = skip_cdr&&reg_skip_cdr_freeze_dfe_mode	  
0x4fd0, //CDS_DFE_OFST //skip_cdr=0 ofst_adapt_en=1 phase_move_with_dfe_en=0 dis_adapt_f1=1
//0 = reset_bypass
//0 = coarse_dtl_bypass  
//0 = phase_move_with_dfe_en = !skip_cdr &&reg_phase_move_with_DFE_en
//0 = ee_os_adapt_en		  		  
//1 = dfe_adapt_en = reg_DFE_adapt_en 
//0 = dfe_adapt_f0a_en  
//1 = coarse_dfe_en =  !skip_cdr &&reg_coarse_DFE_en
//1 = dis_adapt_f1 =  !skip_cdr &&reg_dis_adapt_f1_en		  
//1 = fine_dfe_en = reg_fine_DFE_en		  		  
//1 = accu_dfe_en 
//1 = f0b_adapt_en
//1 = f0d_adapt_en		  
//0 = vh_eo_mode REG		  
//0 = eye_check_bypass 
//1 = ofst_adapt_en
//0 = lock_dfe_on = skip_cdr&&reg_skip_cdr_freeze_dfe_mode

};

#endif //DFETABLE_H

