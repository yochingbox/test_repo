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

#define pll_sel				lnx_PLL_SEL_LANE_1_0

//mcu
//#define master_mcu			0xc0//cmx_MASTER_MCU_SEL_7_0
#define master_mcu			cmx_MASTER_MCU_SEL_7_0

//power
#define PIPE4_EN			cmx_PIPE4_EN

// -- Train & DFE

#define reg_TXTRAIN_STATUS_C0_LANE_2_0 lnx_TXTRAIN_STATUS_C0_LANE_2_0
#define reg_TXTRAIN_STATUS_C1_LANE_2_0 lnx_TXTRAIN_STATUS_C1_LANE_2_0
#define reg_TXTRAIN_STATUS_CN1_LANE_2_0 lnx_TXTRAIN_STATUS_CN1_LANE_2_0
#define reg_TXTRAIN_STATUS_CN2_LANE_2_0 lnx_TXTRAIN_STATUS_CN2_LANE_2_0
#define reg_TXTRAIN_FAIL_LANE lnx_TXTRAIN_FAIL_LANE
#define reg_TXTRAIN_CTRL_PRESET_LANE_3_0 lnx_TXTRAIN_CTRL_PRESET_LANE_3_0
#define reg_TXTRAIN_CTRL_C0_LANE_1_0 lnx_TXTRAIN_CTRL_C0_LANE_1_0
#define reg_TXTRAIN_CTRL_C1_LANE_1_0 lnx_TXTRAIN_CTRL_C1_LANE_1_0
#define reg_TXTRAIN_CTRL_PAT_LANE_1_0 lnx_TXTRAIN_CTRL_PAT_LANE_1_0
#define reg_TXTRAIN_CTRL_CN1_LANE_1_0 lnx_TXTRAIN_CTRL_CN1_LANE_1_0
#define reg_TXTRAIN_CTRL_CN2_LANE_1_0 lnx_TXTRAIN_CTRL_CN2_LANE_1_0
#define reg_TXTRAIN_STATUS_VALID_LANE lnx_TXTRAIN_STATUS_VALID_LANE

#define link_train_mode            reg_LINK_TRAIN_MODE_LANE

#ifndef DEVELOP_TEMP
#define fbck_sel 				   reg_ANA_FBCK_SEL
#define fbck_sel_ring 			   reg_ANA_FBCK_SEL_RING

#define pi_sel_lc  					reg_ANA_FBCK_SEL
#define pi_sel_ring 				reg_VCOCLK_INTP_EN_RING 
#endif

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
#define PLL_RATE_SEL		cmx_PLL_RATE_SEL_7_0
#define PLL_RATE_SEL_RING 	cmx_PLL_RATE_SEL_RING_7_0
#define FBC_RATIO			cmx_FBC_RATIO_7_0
#define LOAD_CAL_ON			lnx_LOAD_CAL_ON_LANE_7_0 
#define PLLCAL_ON_LANE		lnx_PLLCAL_ON_LANE_7_0

#define PIN_REF_FREF_SEL_RD     reg_PIN_REF_FREF_SEL_RD_LANE_4_0
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
