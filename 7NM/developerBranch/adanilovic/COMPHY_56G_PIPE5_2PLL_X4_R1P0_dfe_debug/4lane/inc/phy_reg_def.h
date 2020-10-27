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

#define phy_mode 					reg_PIN_PHY_MODE_RD_2_0
#define pll_sel						lnx_PLL_SEL_LANE_1_0

//mcu
#define master_mcu			 		cmx_MASTER_MCU_SEL_7_0

#define mcuid						reg_MCU_ID_LANE_7_0		
#define PHY_STATUS					reg_MCU_STATUS0_LANE_31_0_b0
#define PHY_NS						reg_MCU_STATUS0_LANE_31_0_b1
#define PHY_STATUS_CMN				reg_MCU_STATUS0_CMN_31_0_b0

#define PHY_CHECK_LANE				reg_MCU_STATUS0_LANE_31_0_b2
#define PHY_CHECK_LANE0_READ		//reg_MCU_STATUS0_LANE0_31_0_b2
#define PHY_CHECK_LANE1_READ		//reg_MCU_STATUS0_LANE1_31_0_b2
#define PHY_CHECK_LANE2_READ		//reg_MCU_STATUS0_LANE2_31_0_b2
#define PHY_CHECK_LANE3_READ		//reg_MCU_STATUS0_LANE3_31_0_b2

#define PHY_INT_LANE				reg_MCU_STATUS0_LANE_31_0_b3

#define SPD_CFG 					reg_PIN_SPD_CFG_RD_3_0

#define POWERUP_SIMPLE				cmx_POWER_UP_SIMPLE_EN	
//#define FAST_POWER_ON_EN			cmx_FAST_POWER_ON_EN //(reg_MCU_COMMAND0_LANE_31_0_b0 & 0x01)
//#define EXT_FORCE_CAL_DONE			cmx_EXT_FORCE_CAL_DONE //(reg_MCU_COMMAND0_LANE_31_0_b0 & 0x02)
#define BYPASS_DELAY				cmx_BYPASS_DELAY_2_0 //((reg_MCU_COMMAND0_LANE_31_0_b0 & 0x1c)>>2)
//#define BYPASS_POWERON_DELAY		cmx_BYPASS_POWER_ON_DELAY //(reg_MCU_COMMAND0_LANE_31_0_b0 & 0x20)
#define BYPASS_XDATA_INIT			cmx_BYPASS_XDAT_INIT //(reg_MCU_COMMAND0_LANE_31_0_b0 & 0x40)
#define BYPASS_SPDTBL_LOAD			cmx_BYPASS_SPEED_TABLE_LOAD //(reg_MCU_COMMAND0_LANE_31_0_b0 & 0x80)
#define SIMENV_ON					(cmx_BYPASS_DELAY_2_0 || cmx_BYPASS_POWER_ON_DELAY || cmx_BYPASS_XDAT_INIT || cmx_BYPASS_SPEED_TABLE_LOAD || reg_EXT_FORCE_CAL_DONE)
//#define FAST_DFE_TIMER_EN			cmx_FAST_DFE_TIMER_EN

// --
//master control
#define SYNC_REQUEST_LANE			reg_SET_MCU_COMMAND_ALL0_LANE_31_0_b0	
#define SYNC_STATUS_LANE1_READ		reg_MCU_STATUS1_LANE1_31_0_b0
#define SYNC_STATUS_LANE2_READ		reg_MCU_STATUS1_LANE2_31_0_b0
#define SYNC_STATUS_LANE3_READ		reg_MCU_STATUS1_LANE3_31_0_b0
#define SYNC_STATUS_AND				reg_MCU_STATUS1_AND_31_0_b0
#define SYNC_STATUS_OR				reg_MCU_STATUS1_OR_31_0_b0
#define SYNC_STATUS_LANE0_EN_READ	reg_MCU_STATUS1_LANE0_31_0_b2
#define SYNC_STATUS_LANE1_EN_READ	reg_MCU_STATUS1_LANE1_31_0_b2
#define SYNC_STATUS_LANE2_EN_READ	reg_MCU_STATUS1_LANE2_31_0_b2
#define SYNC_STATUS_LANE3_EN_READ	reg_MCU_STATUS1_LANE3_31_0_b2
#define SYNC_SATUS_PLL_OR_OFF  		reg_MCU_STATUS0_CMN_31_0_b1
#define SYNC_SATUS_P2_2_P1_ON  		reg_SET_MCU_COMMAND_ALL0_LANE_31_0_b2

//slave control
#define SYNC_STATUS_LANE			reg_MCU_STATUS1_LANE_31_0_b0
#define SYNC_REQEST_LANE_READ		reg_MCU_COMMAND_ALL0_LANE_31_0_b0
#define SYNC_STATUS_LANE_EN			reg_MCU_STATUS1_LANE_31_0_b2
#define SYNC_SATUS_P2_2_P1_ON_READ	reg_MCU_COMMAND_ALL0_LANE_31_0_b2

//
#define SYNC_IDLE					0xff
#define SYNC_LINE_HOLD				reg_SET_MCU_COMMAND_ALL0_LANE_31_0_b3
#define SYNC_LINE_HOLD_READ			reg_MCU_COMMAND_ALL0_LANE_31_0_b3

// -- 
// bitmatch syncup
#define BITMATCH_SYNC_EN			reg_MCU_STATUS1_LANE_31_0_b1

#define mcu_en0  cmx_MCU_EN_LANE0_RD	//reg_PIN_PU_RD_LANE0
#define mcu_en1  cmx_MCU_EN_LANE1_RD	//reg_PIN_PU_RD_LANE1
#define mcu_en2  cmx_MCU_EN_LANE2_RD	//reg_PIN_PU_RD_LANE2
#define mcu_en3  cmx_MCU_EN_LANE3_RD	//reg_PIN_PU_RD_LANE3

#define MCU_INIT_DONE_LANE0				cmx_MCU_INIT_DONE_LANE0_RD
#define MCU_INIT_DONE_LANE1				cmx_MCU_INIT_DONE_LANE1_RD
#define MCU_INIT_DONE_LANE2				cmx_MCU_INIT_DONE_LANE2_RD
#define MCU_INIT_DONE_LANE3				cmx_MCU_INIT_DONE_LANE3_RD

#define CAL_DONE_LANE0				cmx_CAL_DONE_LANE0_RD
#define CAL_DONE_LANE1				cmx_CAL_DONE_LANE1_RD
#define CAL_DONE_LANE2				cmx_CAL_DONE_LANE2_RD
#define CAL_DONE_LANE3				cmx_CAL_DONE_LANE3_RD

#define RXIMP_CAL_DONE_LANE0				cmx_RXIMP_CAL_DONE_LANE0_RD
#define RXIMP_CAL_DONE_LANE1				cmx_RXIMP_CAL_DONE_LANE1_RD
#define RXIMP_CAL_DONE_LANE2				cmx_RXIMP_CAL_DONE_LANE2_RD
#define RXIMP_CAL_DONE_LANE3				cmx_RXIMP_CAL_DONE_LANE3_RD

#define TXIMP_CAL_DONE_LANE0				cmx_TXIMP_CAL_DONE_LANE0_RD
#define TXIMP_CAL_DONE_LANE1				cmx_TXIMP_CAL_DONE_LANE1_RD
#define TXIMP_CAL_DONE_LANE2				cmx_TXIMP_CAL_DONE_LANE2_RD
#define TXIMP_CAL_DONE_LANE3				cmx_TXIMP_CAL_DONE_LANE3_RD

#define VDD_CAL_DONE_LANE0				cmx_VDD_CAL_DONE_LANE0_RD
#define VDD_CAL_DONE_LANE1				cmx_VDD_CAL_DONE_LANE1_RD
#define VDD_CAL_DONE_LANE2				cmx_VDD_CAL_DONE_LANE2_RD
#define VDD_CAL_DONE_LANE3				cmx_VDD_CAL_DONE_LANE3_RD

//power

// -- Train & DFE

#define reg_tx_train_pat_sel_rx_lane	reg_TX_TRAIN_PAT_SEL_RX_LANE_1_0
#define reg_tx_train_pat_sel_lane		reg_TX_TRAIN_PAT_SEL_LANE_1_0

#define link_train_mode            reg_LINK_TRAIN_MODE_LANE

#define tx_adapt_g0_en	 			lnx_TX_ADAPT_G0_EN_LANE
#define tx_adapt_gn1_en	 			lnx_TX_ADAPT_GN1_EN_LANE
#define tx_adapt_g1_en   			lnx_TX_ADAPT_G1_EN_LANE 

#define ctrl_step_res_dfe			reg_DFE_RES_F0_LANE_1_0

#define pol_hold_time_1_0			reg_DFE_HOLD_TIME_LANE_4_0_b0 //[1:0] reg_DFE_HOLD_TIME_LANE_4_0			
#define pol_hold_time_4_2			reg_DFE_HOLD_TIME_LANE_4_0_b0 //[1:0] reg_DFE_HOLD_TIME_LANE_4_0			
#define pol_swch_time_7_0			reg_DFE_SWITCH_TIME_LANE_9_0_b0
#define pol_swch_time_9_8			reg_DFE_SWITCH_TIME_LANE_9_0_b1
#define pol_table_loop_num_1_0		reg_DFE_POL_LPNUM_LANE_9_0_b0
#define pol_table_loop_num_9_2		reg_DFE_POL_LPNUM_LANE_9_0_b1

#define f1_adjust_thresh_1			reg_DFE_ADAPT_ADJ_F1_DC_THRESH_1_4_0
#define f1_adjust_thresh_2			reg_DFE_ADAPT_ADJ_F1_DC_THRESH_2_5_0
//#define f1_ofst_adjustment_en		reg_DFE_ADAPT_ADJ_F1_DC_EN_LANE

#define dfe_f0_res_sel				reg_DFE_RES_F0_LANE_1_0
#define dfe_f1_res_sel				reg_DFE_RES_F1_LANE_1_0
#define dfe_f2_res_sel 				reg_DFE_RES_F2_LANE_1_0
#define dfe_f34_res_sel 			reg_DFE_RES_F34_LANE
#define dfe_f567_res_sel 			reg_DFE_RES_F567_LANE
#define dfe_f8to10_res_sel		    reg_DFE_RES_F8TO10_LANE
#define dfe_f11to15_res_sel 		reg_DFE_RES_F11TO15_LANE
#define dfe_ffloat_res_sel			reg_DFE_RES_FLOATING_LANE
#define dfe_vref_res_sel			reg_DFE_RES_VREF_LANE_1_0
#define dfe_ofst_res_sel 			reg_OFST_RES_LANE

#define adapt_data_en				reg_ADAPT_DATA_ENABLE_LANE	//cds_lane
#define adapt_slicer_en				reg_ADAPT_SLICER_ENABLE_LANE //cds_lane

//#define dfe_f0_en					reg_EN_DFE_F0_LANE
//#define dfe_f1p5_en				reg_EN_DFE_F1P5_LANE
//#define dfe_f1to2_en				reg_EN_DFE_F1TO2_LANE
//#define dfe_f3to7_en				reg_EN_DFE_F3TO7_LANE
//#define dfe_f8to10_en				reg_EN_DFE_F8TO10_LANE
//#define dfe_f11to15_en			reg_EN_DFE_F11TO15_LANE
//#define dfe_ffloat_en				reg_EN_DFE_FLOATING_LANE
//#define dfe_vref_en	 			reg_EN_DFE_VREF_LANE

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

#define pattern_protect_dis			reg_DFE_PAT_DIS_LANE // [HR] 16ffc Changes: SOC need to control in non isolate mode  

#define cdr_align90					reg_ALIGN90_REF_LANE_5_0

#define EOM_EN_D 				    reg_EOM_EN_D_LANE
#define EOM_EN_S 				    reg_EOM_EN_S_LANE
#define EOM_EN_E 				    reg_EOM_EN_E_LANE

#define dfe_res_vref				reg_DFE_RES_VREF_LANE_1_0
#define dfe_res_f0					reg_DFE_RES_F0_LANE_1_0
#define dfe_res_f1					reg_DFE_RES_F1_LANE_1_0
#define dfe_res_f2					reg_DFE_RES_F2_LANE_1_0
#define dfe_res_f3					reg_DFE_RES_F34_LANE
#define dfe_res_f4					reg_DFE_RES_F34_LANE
#define dfe_res_f5					reg_DFE_RES_F567_LANE
#define dfe_res_f6					reg_DFE_RES_F567_LANE
#define dfe_res_f7					reg_DFE_RES_F567_LANE

#define cal_phase					lnx_CAL_PHASE_LANE_7_0
#define cal_eom_dpher 				lnx_CAL_EOM_DPHER_LANE_7_0
//#define ph_control_mode				lnx_PH_CONTROL_MODE_LANE_7_0
//#define phase_offset_data			lnx_PHASE_OFFSET_DATA_LANE_7_0
//#define phase_offset_esm			lnx_PHASE_OFFSET_ESM_LANE_7_0
#define opt_phase_offset_data		lnx_OPT_PHASE_OFFSET_DATA_LANE_7_0

#define device_remote_control_bits reg_REMOTE_CTRL_FIELD_RD_LANE_15_0
#define device_remote_control_bits_lo reg_REMOTE_CTRL_FIELD_RD_LANE_15_0_b0
#define device_remote_control_bits_hi reg_REMOTE_CTRL_FIELD_RD_LANE_15_0_b1
#define device_remote_status_bits  reg_REMOTE_STATUS_FIELD_RD_LANE_15_0
//#define tx_amp_index		reg_TX_EM_PEAK_CTRL_LANE_3_0 
//#define tx_emph1_index		reg_TX_EM_PO_CTRL_LANE_3_0     
//#define tx_emph0_index		reg_TX_EM_PRE_CTRL_LANE_3_0       

// -- CAL
//PLL
#define PLL_RATE_SEL_RING 	cmx_PLL_RATE_SEL_RING_7_0
#define FBC_RATIO			cmx_FBC_RATIO_7_0
#define LOAD_CAL_ON			lnx_LOAD_CAL_ON_LANE_7_0 
#define PLLCAL_ON_LANE		lnx_PLLCAL_ON_LANE_7_0

#define PIN_REF_FREF_SEL_RD 	reg_PIN_REF_FREF_SEL_RD_4_0

//tempc
#define rs_tempc_mux_sel_2c  	   lnx_RS_TEMPC_MUX_SEL_LANE_7_0
#define rs_tempc_mux_hold_sel_2c   lnx_RS_TEMPC_MUX_HOLD_SEL_LANE_7_0
#define ts_tempc_mux_sel_2c  	   lnx_TS_TEMPC_MUX_SEL_LANE_7_0
#define ts_tempc_mux_hold_sel_2c   lnx_TS_TEMPC_MUX_HOLD_SEL_LANE_7_0

#define RS_TEMPC_DAC_SEL		reg_PLL_RS_LCPLL_TEMPC_DAC_SEL_EXT_LANE_7_0
#define RS_TEMPC_DAC_VAILD		reg_PLL_RS_LCPLL_TEMPC_DAC_VALID_EXT_LANE
#define RS_TEMPC_MUX_SEL		reg_PLL_RS_LCPLL_TEMPC_MUX_SEL_EXT_LANE_3_0
#define RS_TEMPC_MUX_HOLD_SEL	reg_PLL_RS_LCPLL_TEMPC_MUX_HOLD_SEL_EXT_LANE_3_0
#define RS_TEMPC_DAC_MIN		reg_PLL_RS_LCPLL_TEMPC_DAC_MIN_LANE_7_0
#define RS_TEMPC_DAC_MAX		reg_PLL_RS_LCPLL_TEMPC_DAC_MAX_LANE_7_0

#define TS_TEMPC_DAC_SEL		reg_PLL_TS_LCPLL_TEMPC_DAC_SEL_EXT_LANE_7_0
#define TS_TEMPC_DAC_VAILD		reg_PLL_TS_LCPLL_TEMPC_DAC_VALID_EXT_LANE
#define TS_TEMPC_MUX_SEL		reg_PLL_TS_LCPLL_TEMPC_MUX_SEL_EXT_LANE_3_0
#define TS_TEMPC_MUX_HOLD_SEL	reg_PLL_TS_LCPLL_TEMPC_MUX_HOLD_SEL_EXT_LANE_3_0
#define TS_TEMPC_DAC_MIN		reg_PLL_TS_LCPLL_TEMPC_DAC_MIN_LANE_7_0
#define TS_TEMPC_DAC_MAX		reg_PLL_TS_LCPLL_TEMPC_DAC_MAX_LANE_7_0

#if 0

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
#define  RINGPLL_CAL_STEP_SIZE		   cmx_RINGPLL_CAL_STEP_SIZE_7_0

#define USE_RING_REFCLK_250M		 				phy_mode_cmn_table[spdoft_use_ring_refclk_250m]	

#define lnx_CAL_SELLV_TXCLK_R0_LANE_7_0				phy_mode_lane_table[caloft_sellv_txclk_gen0_lane]
#define lnx_CAL_SELLV_TXCLK_R1_LANE_7_0				phy_mode_lane_table[caloft_sellv_txclk_gen1_lane]
#define lnx_CAL_SELLV_TXDATA_R0_LANE_7_0			phy_mode_lane_table[caloft_sellv_txdata_gen0_lane]
#define lnx_CAL_SELLV_TXDATA_R1_LANE_7_0			phy_mode_lane_table[caloft_sellv_txdata_gen1_lane]
#define lnx_CAL_SELLV_TXPRE_R0_LANE_7_0				phy_mode_lane_table[caloft_sellv_txpre_gen0_lane]
#define lnx_CAL_SELLV_TXPRE_R1_LANE_7_0				phy_mode_lane_table[caloft_sellv_txpre_gen1_lane]
#define lnx_CAL_SELLV_RXEOMCLK_R0_LANE_7_0			phy_mode_lane_table[caloft_sellv_rxeomclk_gen0_lane]
#define lnx_CAL_SELLV_RXEOMCLK_R1_LANE_7_0			phy_mode_lane_table[caloft_sellv_rxeomclk_gen1_lane]
#define lnx_CAL_SELLV_RXDATACLK_R0_LANE_7_0			phy_mode_lane_table[caloft_sellv_rxdataclk_gen0_lane]
#define lnx_CAL_SELLV_RXDATACLK_R1_LANE_7_0			phy_mode_lane_table[caloft_sellv_rxdataclk_gen1_lane]
#define lnx_CAL_SELLV_RXSAMPLER_R0_LANE_7_0			phy_mode_lane_table[caloft_sellv_rxsampler_gen0_lane]
#define lnx_CAL_SELLV_RXSAMPLER_R1_LANE_7_0			phy_mode_lane_table[caloft_sellv_rxsampler_gen1_lane]

#endif

#endif //PHY_REG_DEF_H
