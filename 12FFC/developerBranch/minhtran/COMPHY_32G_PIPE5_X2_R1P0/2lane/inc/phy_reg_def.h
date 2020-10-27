/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file phy_reg_def.h
* \purpose Redefine registers
* \History
*	2/6/2017 Heejeong Ryu		Initial 
*/
#ifndef PHY_REG_DEF_H
#define PHY_REG_DEF_H

//mcu
#define master_mcu			cmx_MASTER_MCU_SEL_7_0	

//power
#define PIPE4_EN		 	cmx_PIPE4_EN

// -- Train & DFE

#define link_train_mode			reg_LINK_TRAIN_MODE_LANE
#define fbck_sel 			reg_ANA_FBCK_SEL
#ifdef _LANE_RPLL
#define fbck_sel_ring			reg_ANA_FBCK_SEL_TX_RING_LANE
#else // CMN_RPLL
#define fbck_sel_ring			reg_ANA_FBCK_SEL_RING
#endif

#define pi_sel_lc  				reg_ANA_FBCK_SEL
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

#define f1_adjust_thresh_1			reg_DFE_ADAPT_ADJ_F1_DC_THRESH_1_LANE_4_0
#define f1_adjust_thresh_2			reg_DFE_ADAPT_ADJ_F1_DC_THRESH_2_LANE_5_0
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

#define pin_dfe_en					reg_INT_DFE_EN_LANE

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
#define opt_phase_offset_data		lnx_OPT_PHASE_OFFSET_DATA_LANE_7_0

#ifdef _32G_ANA
// 32G tx_train_if new registers rename
#define reg_REMOTE_CTRL_FIELD_RD_LANE_15_0_b1 reg_REMOTE_CTRL_BITS_RD_LANE_15_0_b1
#define reg_REMOTE_CTRL_FIELD_RD_LANE_15_0_b0 reg_REMOTE_CTRL_BITS_RD_LANE_15_0_b0
#define reg_REMOTE_CTRL_FIELD_RD_LANE_15_0 reg_REMOTE_CTRL_BITS_RD_LANE_15_0
#define reg_REMOTE_CTRL_VALID_ISR_LANE reg_REMOTE_CTRL_FIELD_VALID_MUX_ISR_LANE
#define reg_REMOTE_CTRL_VALID_ISR_CLEAR_LANE reg_REMOTE_CTRL_FIELD_VALID_MUX_ISR_CLEAR_LANE
#define reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b1 reg_REMOTE_STATUS_BITS_RD_LANE_15_0_b1
#define reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b0 reg_REMOTE_STATUS_BITS_RD_LANE_15_0_b0
#define reg_REMOTE_STATUS_FIELD_RD_LANE_15_0 reg_REMOTE_STATUS_BITS_RD_LANE_15_0
#define reg_REMOTE_STATUS_G0_LANE_1_0 reg_INT_REMOTE_STATUS_G0_LANE_1_0
#define reg_REMOTE_STATUS_GN1_LANE_1_0 reg_INT_REMOTE_STATUS_GN1_LANE_1_0
#define reg_REMOTE_STATUS_G1_LANE_1_0 reg_INT_REMOTE_STATUS_G1_LANE_1_0
#define reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE reg_REMOTE_STATUS_FIELD_VALID_MUX_ISR_CLEAR_LANE
#define reg_REMOTE_STATUS_VALID_ISR_LANE reg_REMOTE_STATUS_FIELD_VALID_MUX_ISR_LANE
#define reg_REMOTE_CTRL_FIELD_HIGH_LANE reg_REMOTE_CTRL_FIELD_READY_LANE

#define reg_LOCAL_CTRL_FIELD_LANE_15_0_b1 reg_LOCAL_CTRL_BITS_LANE_15_0_b1
#define reg_LOCAL_CTRL_FIELD_LANE_15_0_b0 reg_LOCAL_CTRL_BITS_LANE_15_0_b0
#define reg_LOCAL_CTRL_FIELD_LANE_15_0 reg_LOCAL_CTRL_BITS_LANE_15_0
#define reg_LOCAL_STATUS_FIELD_LANE_15_0_b1 reg_LOCAL_STATUS_BITS_LANE_15_0_b1
#define reg_LOCAL_STATUS_FIELD_LANE_15_0_b0 reg_LOCAL_STATUS_BITS_LANE_15_0_b0
#define reg_LOCAL_STATUS_FIELD_LANE_15_0 reg_LOCAL_STATUS_BITS_LANE_15_0
#define reg_LOCAL_STATUS_FIELD_INIT_LANE_15_0 reg_LOCAL_STATUS_BITS_LANE_15_0
#define reg_PIN_LOCAL_CTRL_FIELD_READY_RD_LANE reg_LOCAL_CTRL_FIELD_READY_RD_LANE
#define reg_LOCAL_ERROR_FIELD_VALID_LANE reg_LOCAL_FIELD_VALID_LANE

#define reg_PIN_TX_TRAIN_ENABLE_ISR_LANE reg_TX_TRAIN_ENABLE_ISR_LANE
#define reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE reg_TX_TRAIN_ENABLE_RD_LANE
#define reg_LOCAL_TX_TRAIN_COMPLETE_LANE reg_INT_TX_TRAIN_COMPLETE_LANE 
#define reg_REMOTE_TX_TRAIN_COMPLETE_LANE reg_REMOTE_TRAIN_COMP_LANE
#define reg_TX_TRAIN_FAILED_LANE reg_INT_TX_TRAIN_FAILED_LANE
#define reg_TX_TRAIN_ERROR_LANE_1_0_b1 reg_PIN_TX_TRAIN_ERROR_LANE_1_0_b1
#define reg_TX_TRAIN_ERROR_LANE_1_0_b0 reg_PIN_TX_TRAIN_ERROR_LANE_1_0_b0
#define reg_PIN_RX_TRAIN_ENABLE_ISR_LANE reg_RX_TRAIN_ENABLE_ISR_LANE
#define reg_PIN_RX_TRAIN_ENABLE_RD_LANE reg_RX_TRAIN_ENABLE_RD_LANE
#define reg_RX_TRAIN_COMPLETE_LANE reg_INT_RX_TRAIN_COMPLETE_LANE
#define reg_RX_TRAIN_FAILED_LANE reg_INT_RX_TRAIN_FAILED_LANE

#define reg_ANA_TX_EM_PEAK_EN_LANE reg_TX_EM_PEAK_EN_LANE
#define reg_ANA_TX_EM_PRE_EN_LANE reg_TX_EM_PRE_EN_LANE
#define reg_ANA_TX_EM_PO_EN_LANE reg_TX_EM_POST_EN_LANE
#define reg_TX_EM_PO_CTRL_LANE_3_0 reg_TX_EM_POST_CTRL_LANE_3_0
#define reg_DME_ENC_BALANCE_CAL_EN_LANE reg_LOCAL_BALANCE_CAL_EN_LANE
#define reg_DME_DEC_BALANCE_CHK_EN_LANE reg_BALANCE_CHK_EN_LANE
#define lnx_TRX_TRAIN_TIMER_LANE_15_0 reg_TRX_TRAIN_TIMER_LANE_15_0
#define lnx_RX_TRAIN_TIMER_LANE_15_0 reg_RX_TRAIN_TIMER_LANE_15_0
//#define reg_TX_EM_CTRL_PIPE_SEL_LANE reg_TX_COE_FM_PIN_PCIE3_EN_LANE

#if 0 //MT debug
// Unified cal changes
#define reg_DLL_GMSEL_LANE_2_0  UPHY14_TRX_ANAREG_BOT_7.BF.RESERVED_3
#define reg_DLL_PD_SEL_LANE_1_0  UPHY14_TRX_ANAREG_BOT_8.BF.RESERVED_2
#define reg_DLL_CMP_OFFSET_LANE_3_0  UPHY14_TRX_ANAREG_BOT_8.BF.RESERVED_4
#define reg_EOM_DLL_GMSEL_LANE_2_0  UPHY14_TRX_ANAREG_BOT_9.BF.RESERVED_5
#define reg_ALIGN90_GM_LANE_2_0  UPHY14_TRX_ANAREG_BOT_12.BF.RESERVED_1
#define reg_ALIGN90_CMP_OFFSET_LANE_3_0  UPHY14_TRX_ANAREG_BOT_12.BF.RESERVED_4
#define reg_ALIGN90_SYN_CLK_LANE  UPHY14_TRX_ANAREG_BOT_13.BF.RESERVED_0
#define reg_ALIGN90_DUMMY_CLK_LANE  UPHY14_TRX_ANAREG_BOT_13.BF.RESERVED_1
#define reg_ALIGN90_DAC_LANE_5_0  UPHY14_TRX_ANAREG_BOT_13.BF.RESERVED_2
#define reg_RXDCC_EOMCLK_LANE_5_0  UPHY14_TRX_ANAREG_BOT_16.BF.RESERVED_2
#define reg_TRXDCCIN_SEL_LANE_2_0  UPHY14_TRX_ANAREG_BOT_17.BF.RESERVED_5
#define reg_RXDCC_DLLCLK_LANE_5_0  UPHY14_TRX_ANAREG_TOP_135.BF.RESERVED_2
#define reg_TRXDCC_CAL_CLK100KHZ_LANE  UPHY14_TRX_ANAREG_TOP_136.BF.RESERVED_0
#define reg_RXDCC_DATACLK_LANE_5_0  UPHY14_TRX_ANAREG_TOP_136.BF.RESERVED_2
#define reg_TXDCC_CNT_LANE_5_0  UPHY14_TRX_ANAREG_TOP_147.BF.RESERVED_1	
#define reg_TXDCCCAL_PDIV_EN_LANE  UPHY14_TRX_ANAREG_TOP_151.BF.RESERVED_1
#define reg_TXDCCCAL_PDIV_CNT_LANE_5_0  UPHY14_TRX_ANAREG_TOP_151.BF.RESERVED_2
#define reg_ANA_RX_ALIGN90_PD_OUT_RD_LANE  RX_CALIBRATION_REG.BF.RESERVED_0
#define reg_ANA_RX_DLL_CAL_CMP_OUT_RD_LANE  RX_CALIBRATION_REG.BF.RESERVED_1
#define reg_RX_ALIGN90_PD_OUT_RD_REQ_LANE  RX_CALIBRATION_REG.BF.RESERVED_16
#define reg_ANA_TRX_TXDCC_DN_RD_LANE  TX_CALIBRATION_LANE.BF.RESERVED_0 & 0x01 //(bit0)
//#define reg_ANA_TRX_TXDCC_DN_RD_LANE  TX_CALIBRATION_LANE.BF.RESERVED_0
#endif // MT debug

#endif

#define device_remote_control_bits reg_REMOTE_CTRL_FIELD_RD_LANE_15_0
#define device_remote_control_bits_lo reg_REMOTE_CTRL_FIELD_RD_LANE_15_0_b0
#define device_remote_control_bits_hi reg_REMOTE_CTRL_FIELD_RD_LANE_15_0_b1
#define device_remote_status_bits  reg_REMOTE_STATUS_FIELD_RD_LANE_15_0
#define device_remote_status_bits_lo  reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b0
#define device_remote_status_bits_hi  reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b1
#define device_remote_bits      TRX_TRAIN_IF_REMOTE_FIELD_LANE.VAL
#define tx_amp_index		reg_TX_EM_PEAK_CTRL_LANE_3_0 
#define tx_emph1_index		reg_TX_EM_PO_CTRL_LANE_3_0     
#define tx_emph0_index		reg_TX_EM_PRE_CTRL_LANE_3_0       

// -- CAL
//PLL
#define PLL_RATE_SEL		cmx_PLL_RATE_SEL_7_0
#define PLL_RATE_SEL_RING 	cmx_PLL_RATE_SEL_RING_7_0
#define FBC_RATIO			cmx_FBC_RATIO_7_0
#define LOAD_CAL_ON			lnx_LOAD_CAL_ON_LANE_7_0 

#define  RXDCLK_VDD_CAL_STEP_SIZE      cmx_RXDCLK_VDD_CAL_STEP_SIZE_7_0  
#define  TXPRE_VDD_CAL_STEP_SIZE       cmx_TXPRE_VDD_CAL_STEP_SIZE_7_0   
#define  TXDATA_VDD_CAL_STEP_SIZE      cmx_TXDATA_VDD_CAL_STEP_SIZE_7_0  
#define  TXCLK_VDD_CAL_STEP_SIZE       cmx_TXCLK_VDD_CAL_STEP_SIZE_7_0   
#define  RXDCC_DLL_CAL_STEP_SIZE       cmx_RXDCC_DLL_CAL_STEP_SIZE_7_0     
#define  RXDCC_EOM_CAL_STEP_SIZE       cmx_RXDCC_EOM_CAL_STEP_SIZE_7_0   
#define  RXDCC_DATA_CAL_STEP_SIZE      cmx_RXDCC_DATA_CAL_STEP_SIZE_7_0     
#define  RXSMPLR_VDD_CAL_STEP_SIZE     cmx_RXSMPLR_VDD_CAL_STEP_SIZE_7_0 
#define  RXEOMCLK_VDD_CAL_STEP_SIZE    cmx_RXEOMCLK_VDD_CAL_STEP_SIZE_7_0
#define  PLLDCC_CAL_STEP_SIZE          cmx_PLLDCC_CAL_STEP_SIZE_7_0      
#define  PLLAMP_CAL_STEP_SIZE          cmx_PLLAMP_CAL_STEP_SIZE_7_0      
#define  TXDCC_PDIV_CAL_STEP_SIZE      cmx_TXDCC_PDIV_CAL_STEP_SIZE_7_0  
#define  TXDCC_CAL_STEP_SIZE           cmx_TXDCC_CAL_STEP_SIZE_7_0       
#define  TXDETECT_CAL_STEP_SIZE        cmx_TXDETECT_CAL_STEP_SIZE_7_0    
#define  RXDLL_CAL_STEP_SIZE           cmx_RXDLL_CAL_STEP_SIZE_7_0       
#define  EOM_DLL_CAL_STEP_SIZE         cmx_EOM_DLL_CAL_STEP_SIZE_7_0     
#define  ALIGN90_CAL_STEP_SIZE         cmx_ALIGN90_CAL_STEP_SIZE_7_0     
#define  RINGPLL_CAL_COUNTER_SIZE      cmx_RINGPLL_CAL_COUNTER_SIZE_7_0
#define  RINGPLL_CAL_FINE_STEP	       cmx_RINGPLL_CAL_FINE_STEP_7_0

#define USE_RING_REFCLK_250M		 			phy_mode_cmn_table[spdoft_use_ring_refclk_250m]	

//TODO to be removed.
#define lnx_CAL_SELLV_TXDATA_R0_LANE_7_0			phy_mode_lane_table[caloft_sellv_txdata_gen0_lane]
#define lnx_CAL_SELLV_TXDATA_R1_LANE_7_0			phy_mode_lane_table[caloft_sellv_txdata_gen1_lane]
#define lnx_CAL_SELLV_TXCLK_R0_LANE_7_0				phy_mode_lane_table[caloft_sellv_txclk_gen0_lane]
#define lnx_CAL_SELLV_TXCLK_R1_LANE_7_0				phy_mode_lane_table[caloft_sellv_txclk_gen1_lane]
#define lnx_CAL_SELLV_TXPRE_R0_LANE_7_0				phy_mode_lane_table[caloft_sellv_txpre_gen0_lane]
#define lnx_CAL_SELLV_TXPRE_R1_LANE_7_0				phy_mode_lane_table[caloft_sellv_txpre_gen1_lane]
#define lnx_CAL_SELLV_RXEOMCLK_R0_LANE_7_0			phy_mode_lane_table[caloft_sellv_rxeomclk_gen0_lane]
#define lnx_CAL_SELLV_RXEOMCLK_R1_LANE_7_0			phy_mode_lane_table[caloft_sellv_rxeomclk_gen1_lane]
#define lnx_CAL_SELLV_RXDATACLK_R0_LANE_7_0			phy_mode_lane_table[caloft_sellv_rxdataclk_gen0_lane]
#define lnx_CAL_SELLV_RXDATACLK_R1_LANE_7_0			phy_mode_lane_table[caloft_sellv_rxdataclk_gen1_lane]
#define lnx_CAL_SELLV_RXSAMPLER_R0_LANE_7_0			phy_mode_lane_table[caloft_sellv_rxsampler_gen0_lane]
#define lnx_CAL_SELLV_RXSAMPLER_R1_LANE_7_0			phy_mode_lane_table[caloft_sellv_rxsampler_gen1_lane]

#define PHY_MCU_REMOTE_REQ_LANE		reg_PHY_MCU_REMOTE_REQ_LANE

#define dfe_f0a_max_sat_thres_4_r1		lnx_DFE_F0A_MAX_SAT_THRES_4_R1_LANE_7_0
#define rx_ffe_r1_index0_force_value		lnx_RX_FFE_R1_INDEX0_FORCE_LANE_3_0

//#define set_txdcccal_pdiv_en_lane()	reg_ANA_RSVDA_LANE_7_0 |= 0x08
//#define clear_txdcccal_pdiv_en_lane()	reg_ANA_RSVDA_LANE_7_0 &= 0xf7

#endif //PHY_REG_DEF_H
