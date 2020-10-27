/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file phy_reg_def.h
* \purpose Redefine registers
* \History
*	2/6/2017 Heejeong Ryu		Initial 
*/

// -- CAL
//PLL
#define PLL_RATE_SEL		cmx_PLL_RATE_SEL_7_0
#define PLL_RATE_SEL_RING 	cmx_PLL_RATE_SEL_RING_7_0
#define FBC_RATIO			cmx_FBC_RATIO_7_0

#define ALIGN90_CAL_STEP_SIZE	16
#define align90_step 	reg_MCU_DEBUG1_LANE_7_0


// -- Train & DFE

#define link_train_mode            reg_LINK_TRAIN_MODE_LANE
#define fbck_sel 				   reg_ANA_FBCK_SEL
#define fbck_sel_ring 			   reg_ANA_FBCK_SEL_RING

#define pi_sel_lc  					reg_ANA_FBCK_SEL
#define pi_sel_ring 				reg_VCOCLK_INTP_EN_RING 

#define tx_adapt_g0_en	 			lnx_TX_ADAPT_G0_EN_LANE
#define tx_adapt_gn1_en	 			lnx_TX_ADAPT_GN1_EN_LANE
#define tx_adapt_g1_en   			lnx_TX_ADAPT_G1_EN_LANE 

#define ctrl_step_res_dfe			reg_DFE_RES_F0_LANE_1_0

#define pol_hold_time				reg_DFE_HOLD_TIME_LANE_4_0			
#define pol_swch_time_7_0			reg_DFE_SWITCH_TIME_LANE_9_0_b0
#define pol_swch_time_9_8			reg_DFE_SWITCH_TIME_LANE_9_0_b1
#define pol_table_loop_num_1_0		reg_DFE_POL_LPNUM_LANE_9_0_b0
#define pol_table_loop_num_9_2		reg_DFE_POL_LPNUM_LANE_9_0_b1

#define f1_adjust_thresh_1			reg_DFE_ADAPT_ADJ_F1_DC_THRESH_1_4_0
#define f1_adjust_thresh_2			reg_DFE_ADAPT_ADJ_F1_DC_THRESH_2_5_0
#define f1_ofst_adjustment_en		reg_DFE_ADAPT_ADJ_F1_DC_EN_LANE

#define dfe_f0_res_sel				reg_DFE_RES_F0_LANE_1_0
#define dfe_f1_res_sel				reg_DFE_RES_F1_LANE_1_0
#define dfe_f234_res_sel 			reg_DFE_RES_F234_LANE
#define dfe_f567_res_sel 			reg_DFE_RES_F567_LANE
#define dfe_f8to15_res_sel 			reg_DFE_RES_F8TO15_LANE
#define dfe_ffloat_res_sel 			reg_DFE_RES_FLOATING_LANE
#define dfe_ofst_res_sel 			reg_OFST_RES_LANE_1_0

#define dfe_f0_en					reg_EN_DFE_F0_LANE
#define dfe_f1to3_en				reg_EN_DFE_F1TO3_LANE
#define dfe_f4to7_en				reg_EN_DFE_F4TO7_LANE
#define dfe_f8to15_en				reg_EN_DFE_F8TO15_LANE
#define dfe_ffloat_en				reg_EN_DFE_FLOATING_LANE

#define dfe_floating_tap_sel		reg_DFE_FLOAT_SEL_LANE_3_0	
#define data_slicer_path_switch_eve reg_ANA_RX_DATA_SLICER_PATH_SWITCH_E_LANE
#define data_slicer_path_switch_odd reg_ANA_RX_DATA_SLICER_PATH_SWITCH_O_LANE

#define analog_tap_reflesh_eve	 	reg_DFE_TAP_REFRESH_E_LANE
#define analog_tap_reflesh_odd	 	reg_DFE_TAP_REFRESH_O_LANE

#define f0b_en 						reg_DFE_F0B_MODE_LANE
#define f0d_en 						reg_DFE_F0D_MODE_LANE
#define ofst_en						reg_DFE_UPDATE_DC_EN_LANE

#define f0_fb_mode					reg_DFE_FBMD_F0_LANE
#define f1p_f1n_fb_mode				reg_DFE_FBMD_F1PN_LANE
#define data_slic_fb_mode			reg_DFE_FBMD_DATASLICER_LANE 

#define dfe_f0_f1p_d_eve 			reg_DFE_F0_D_P_E_SM_LANE_5_0
#define dfe_f0_f1n_d_eve 			reg_DFE_F0_D_N_E_SM_LANE_5_0
#define dfe_f0_f1p_s_eve 			reg_DFE_F0_S_P_E_SM_LANE_5_0
#define dfe_f0_f1n_s_eve 			reg_DFE_F0_S_N_E_SM_LANE_5_0
#define dfe_f0_f1p_d_odd 			reg_DFE_F0_D_P_O_SM_LANE_5_0
#define dfe_f0_f1n_d_odd 			reg_DFE_F0_D_N_O_SM_LANE_5_0
#define dfe_f0_f1p_s_odd 			reg_DFE_F0_S_P_O_SM_LANE_5_0
#define dfe_f0_f1n_s_odd 			reg_DFE_F0_S_N_O_SM_LANE_5_0

#define adapt_alg					reg_DFE_MMSE_MODE_LANE
#define dfe_adapt_lpnum_3_0			reg_DFE_ADAPT_LPNUM_LANE_9_0_b0
#define dfe_adapt_lpnum_9_4			reg_DFE_ADAPT_LPNUM_LANE_9_0_b1

#define f0d_step_dn					reg_DFE_STEP_COARSE_EO_DN_LANE_3_0
#define f0d_step_up					reg_DFE_STEP_COARSE_EO_UP_LANE_3_0

#define eye_check_en				reg_EOM_EN_LANE 

#define pattern_protect_dis			reg_DFE_PAT_DIS_LANE // [HR] 16ffc Changes: SOC need to control in non isolate mode  

#define cdr_align90					reg_ALIGN90_REF_LANE_5_0

#define EOM_EN_D 				    reg_EOM_EN_D_LANE
#define EOM_EN_S 				    reg_EOM_EN_S_LANE
#define EOM_EN_E 				    reg_EOM_EN_E_LANE

#define dfe_res_f0					reg_DFE_RES_F0_LANE_1_0
#define dfe_res_f1					reg_DFE_RES_F1_LANE_1_0
#define dfe_res_f2					reg_DFE_RES_F234_LANE
#define dfe_res_f3					reg_DFE_RES_F234_LANE
#define dfe_res_f4					reg_DFE_RES_F234_LANE
#define dfe_res_f5					reg_DFE_RES_F567_LANE
#define dfe_res_f6					reg_DFE_RES_F567_LANE
#define dfe_res_f7					reg_DFE_RES_F567_LANE

#define cal_phase					lnx_CAL_PHASE_LANE_7_0
#define cal_eom_dpher 				lnx_CAL_EOM_DPHER_LANE_7_0
//#define ph_control_mode				lnx_PH_CONTROL_MODE_LANE_7_0
//#define phase_offset_data			lnx_PHASE_OFFSET_DATA_LANE_7_0
//#define phase_offset_esm			lnx_PHASE_OFFSET_ESM_LANE_7_0
//#define opt_phase_offset_data		lnx_OPT_PHASE_OFFSET_DATA_LANE_7_0

#define device_remote_control_bits reg_REMOTE_CTRL_FIELD_RD_LANE_15_0
#define device_remote_control_bits_lo reg_REMOTE_CTRL_FIELD_RD_LANE_15_0_b0
#define device_remote_control_bits_hi reg_REMOTE_CTRL_FIELD_RD_LANE_15_0_b1
#define device_remote_status_bits  reg_REMOTE_STATUS_FIELD_RD_LANE_15_0
#define tx_amp_index		reg_TX_EM_PEAK_CTRL_LANE_3_0 
#define tx_emph1_index		reg_TX_EM_PO_CTRL_LANE_3_0     
#define tx_emph0_index		reg_TX_EM_PRE_CTRL_LANE_3_0       
