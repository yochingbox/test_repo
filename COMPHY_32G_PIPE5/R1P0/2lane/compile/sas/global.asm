;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.0.0 #6037 (May 26 2011) (Linux)
; This file was generated Thu Oct 18 21:21:41 2018
;--------------------------------------------------------
	.module global
	.optsdcc -mmcs51 --model-small
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _TF2
	.globl _TI
	.globl _RI
	.globl _EX12
	.globl _EX11
	.globl _EX10
	.globl _EX9
	.globl _EX8
	.globl _ES1
	.globl _PS1
	.globl _EX6
	.globl _EX5
	.globl _EX4
	.globl _EX3
	.globl _EX2
	.globl _EX7
	.globl _EA
	.globl _WDT
	.globl _ET2
	.globl _ES
	.globl _ET1
	.globl _EX1
	.globl _ET0
	.globl _EX0
	.globl _TF1
	.globl _TR1
	.globl _TF0
	.globl _TR0
	.globl _IE1
	.globl _IT1
	.globl _IE0
	.globl _IT0
	.globl _P3_7
	.globl _P3_6
	.globl _P3_5
	.globl _P3_4
	.globl _P3_3
	.globl _P3_2
	.globl _P3_1
	.globl _P3_0
	.globl _P2_7
	.globl _P2_6
	.globl _P2_5
	.globl _P2_4
	.globl _P2_3
	.globl _P2_2
	.globl _P2_1
	.globl _P2_0
	.globl _P1_7
	.globl _P1_6
	.globl _P1_5
	.globl _P1_4
	.globl _P1_3
	.globl _P1_2
	.globl _P1_1
	.globl _P1_0
	.globl _P0_7
	.globl _P0_6
	.globl _P0_5
	.globl _P0_4
	.globl _P0_3
	.globl _P0_2
	.globl _P0_1
	.globl _P0_0
	.globl _DMAC
	.globl _DMATA
	.globl _DMASA
	.globl _TMR2
	.globl _TMR1
	.globl _TMR0
	.globl _SRST
	.globl _B
	.globl _EIE
	.globl _ACC
	.globl _ADCON
	.globl _PSW
	.globl _TH2
	.globl _TL2
	.globl _RCAP2H
	.globl _RCAP2L
	.globl _T2CON
	.globl _CCEN
	.globl _IRCON
	.globl _S0RELH
	.globl _IP1
	.globl _IEN1
	.globl _DMAM1
	.globl _DMAM0
	.globl _DMASEL
	.globl _DMAC2
	.globl _DMAC1
	.globl _DMAC0
	.globl _P3
	.globl _S0RELL
	.globl _IP0
	.globl _IEN0
	.globl _DMAT2
	.globl _DMAT1
	.globl _DMAT0
	.globl _DMAS2
	.globl _DMAS1
	.globl _DMAS0
	.globl _P2
	.globl _IEN2
	.globl _SBUF
	.globl _SCON
	.globl _PSBANK
	.globl _DPS
	.globl _P1
	.globl _CKCON
	.globl _TH1
	.globl _TH0
	.globl _TL1
	.globl _TL0
	.globl _TMOD
	.globl _TCON
	.globl _PCON
	.globl _WDTREL
	.globl _DPH
	.globl _DPL
	.globl _P0
	.globl _tx_apta_state
	.globl _pll_cal_timeout_dis_save
	.globl _opt_g1_index
	.globl _opt_gn1_index
	.globl _opt_g0_index
	.globl _pcie_f0b_en
	.globl _rx_sel_bit
	.globl _tx_sel_bit
	.globl _cal_start_on
	.globl _tx_pll_rate_x
	.globl _rx_pll_rate_x
	.globl _tx_train_frame_det_timer
	.globl _dfe_phase_save_en
	.globl _dfe_save_en
	.globl _dfe_res_save_en
	.globl _sq_thrs_ratio_gen_en
	.globl _sq_thrs_ratio
	.globl _g_fw_flags
	.globl _txffe_force_en
	.globl _apta_rm_state_err
	.globl _apta_sim_state
	.globl _rxinit_4_spdchg_en
	.globl _tx_train_p2p_hold
	.globl _save_local_status
	.globl _pre_local_ctrl
	.globl _train_ofst_save
	.globl _save_dfe_dis
	.globl _dfe_err_found
	.globl _cur_phase_offset_esm
	.globl _cur_phase_offset_data
	.globl _ofst_sat
	.globl _eom_data_align_success
	.globl _half_ui_code
	.globl _cdr_ui_pi_code_num
	.globl _cds_dfe_ofst
	.globl _skip_dfe_adapt_cdr_midpoint
	.globl _invalidate_pll_rate
	.globl _pre_ringpll_rate
	.globl _pre_lcpll_rate
	.globl _pre_gen_pll_rate
	.globl _gen_pll_rate
	.globl _uart_rx_buf
	.globl _uart_rx_out
	.globl _uart_rx_in
	.globl _cdr_state
	.globl _rpta_vote
	.globl _tx_ctrl_stat
	.globl _rpta_loop_cnt
	.globl _dfe_2c
	.globl _eom_ext_mode
	.globl _save_dfe_en
	.globl _save_eom_en_d
	.globl _save_eom_en_s
	.globl _save_dfe_adapt_o_en
	.globl _save_dfe_adapt_e_en
	.globl _save_dfe_adapt_splr
	.globl _save_pu_f1p_s_e
	.globl _save_pu_f1p_s_o
	.globl _pre_sq_rd
	.globl _tx_num_tx_preset
	.globl _ctrl_rx_train_mode
	.globl _ctrl_trx_train_pass
	.globl _ctrl_rx_only_mode
	.globl _detect_sat
	.globl _Phase_Adapt_Inited
	.globl _do_phase_adapt
	.globl _pcie_usb_mode
	.globl _tx_sweep_preset_en
	.globl _uart_rx_busy
	.globl _train_comp
	.globl _tx_init_bit
	.globl _cur_esm_phase
	.globl _adapt_eom_phase_save
	.globl _phase_offset
	.globl _phase_r_offset
	.globl _phase_l_offset
	.globl _f0d_r_pre
	.globl _f0d_l_pre
	.globl _f0d_c_pre
	.globl _eom_vote_acc
	.globl _phase_vote_acc
	.globl _norm_eom_ph_os_r
	.globl _norm_eom_ph_os_c
	.globl _norm_eom_ph_os_l
	.globl _norm_ofst
	.globl _norm_f1
	.globl _eom_conv_dir
	.globl _ph_conv_dir
	.globl _EOM_CONV_CNT
	.globl _PH_CONV_CNT
	.globl _adapted_phase
	.globl _ph_control_mode
	.globl _dfe_dis
	.globl _half_shift
	.globl _ctrl_max_dfe_adapt_shift
	.globl _sum
	.globl _train_timer_int
	.globl _cdr_midpoint_phase_os
	.globl _sumf_boost_target_c
	.globl _r2_adj_on
	.globl _opt_r
	.globl _opt_c
	.globl _train_r
	.globl _train_c
	.globl _dfe_res_f0a_high_thres
	.globl _dfe_res_f0a_low_thres_3
	.globl _dfe_res_f0a_low_thres_2
	.globl _dfe_res_f0a_low_thres_01
	.globl _ctrl_num_big_loop
	.globl _ctrl_num_blind_loop
	.globl _cdr
	.globl _rx
	.globl _tx
	.globl _opt
	.globl _train
	.globl _ring_size_counter_mid
	.globl _ring_size_counter
	.globl _first_time_ring_pll_cont
	.globl _f1p_o_old
	.globl _f1p_e_old
	.globl _dfe_norm_cnt
	.globl _dcc_cont
	.globl _vdd_cnt
	.globl _rxdll_temp_b_lane
	.globl _rxdll_temp_a_lane
	.globl _cal_align90_gm_bin
	.globl _tsen_dat_normal
	.globl _tsen_dat_train
	.globl _tsen_dat_cal
	.globl _ringpll_step_size_cnt
	.globl _pwrsq_on
	.globl _new_gen_rx
	.globl _new_gen_tx
	.globl _old_status
	.globl _tempc_dir
	.globl _tempc_step_state
	.globl _pllcal_first_time
	.globl _ring_lane_sel
	.globl _serdes_ring_lane_en
	.globl _ringpll_dac_fine
	.globl _gm
	.globl _dm
	.globl _dac
	.globl _gm_bin
	.globl _slave_phy_on
	.globl _cal_lccap_msb_index
	.globl _mcuclk_mc
	.globl _tsen_dat
	.globl _gen_rx
	.globl _gen_tx
	.globl _align90_step_cnt
	.globl _eom_dll_step_cnt
	.globl _rxdll_step_cnt
	.globl _txdetect_step_cnt
	.globl _txdcc_step_cnt
	.globl _txdcc_pdiv_step_cnt
	.globl _pllamp_step_cnt
	.globl _plldcc_step_cnt
	.globl _rxeomclk_vdd_step_cnt
	.globl _rxsmplr_vdd_step_cnt
	.globl _rxdcc_dll_step_cnt
	.globl _rxdcc_data_step_cnt
	.globl _rxdcc_eom_step_cnt
	.globl _txdata_vdd_step_cnt
	.globl _txpre_vdd_step_cnt
	.globl _txclk_vdd_step_cnt
	.globl _save_local_ana_tx2rx_lpbk_en_lane
	.globl _save_pt_tx_clk_en_lane
	.globl _save_pt_en_lane
	.globl _save_pt_tx_pattern_sel_lane_5_0_b1
	.globl _save_pt_tx_pattern_sel_lane_5_0_b0
	.globl _sq_thrs_ratio_tb
	.globl _train_save_tb
	.globl _tx_tb
	.globl _UPHY_ANAREG_REV_0
	.globl _dfe_sm_save
	.globl _dfe_sm_dc
	.globl _dfe_sm
	.globl _cds28
	.globl _lnx_calx_align90_gm
	.globl _lnx_calx_align90_dac
	.globl _lnx_calx_align90_dummy_clk
	.globl _lnx_calx_eom_dpher
	.globl _lnx_calx_vdda_dll_eom_sel
	.globl _lnx_calx_dll_eom_gmsel
	.globl _lnx_calx_vdda_dll_sel
	.globl _lnx_calx_dll_gmsel
	.globl _lnx_calx_rxdcc_dll_hg
	.globl _lnx_calx_rxdcc_dll
	.globl _lnx_calx_txdcc_hg
	.globl _lnx_calx_txdcc
	.globl _lnx_calx_txdcc_pdiv_hg
	.globl _lnx_calx_txdcc_pdiv
	.globl _lnx_spdoft_tx_preset_index_lane
	.globl _lnx_cal_sellv_rxeomclk
	.globl _lnx_cal_sellv_rxsampler
	.globl _lnx_cal_sellv_txpre
	.globl _lnx_cal_sellv_rxdataclk
	.globl _lnx_cal_sellv_txclk
	.globl _lnx_cal_sellv_txdata
	.globl _lnx_cal_align90_gm
	.globl _lnx_cal_align90_dac
	.globl _lnx_cal_align90_dummy_clk
	.globl _lnx_cal_eom_dpher
	.globl _lnx_cal_vdda_dll_eom_sel
	.globl _lnx_cal_dll_eom_gmsel
	.globl _lnx_cal_vdda_dll_sel
	.globl _lnx_cal_dll_gmsel
	.globl _lnx_cal_rxdcc_eom_hg
	.globl _lnx_cal_rxdcc_eom
	.globl _lnx_cal_rxdcc_data_hg
	.globl _lnx_cal_rxdcc_data
	.globl _lnx_cal_rxdcc_dll_hg
	.globl _lnx_cal_rxdcc_dll
	.globl _lnx_cal_txdcc_hg
	.globl _lnx_cal_txdcc
	.globl _lnx_cal_txdcc_pdiv_hg
	.globl _lnx_cal_txdcc_pdiv
	.globl _cmx_cal_sllp_dac_fine_ring
	.globl _cmx_cal_pll_sllp_dac_coarse_ring
	.globl _cmx_cal_pll_speed_ring
	.globl _cmx_cal_plldcc
	.globl _cmx_cal_lccap_lsb
	.globl _cmx_cal_lccap_msb
	.globl _cmx_cal_lcvco_dac_msb
	.globl _cmx_cal_lcvco_dac_lsb
	.globl _cmx_cal_lcvco_dac
	.globl _local_tx_preset_tb
	.globl _train_g0_index
	.globl _train_g1_index
	.globl _train_gn1_index
	.globl _phase_save
	.globl _txffe_save
	.globl _rc_save
	.globl _phy_mode_lane_table
	.globl _speedtable
	.globl _min_gen
	.globl _max_gen
	.globl _phy_mode_cmn_table
	.globl _ring_speedtable
	.globl _lc_speedtable
	.globl _TXTRAIN_IF_REG0
	.globl _CDS_READ_MISC1
	.globl _CDS_READ_MISC0
	.globl _DFE_READ_F0D_RIGHT_ODD
	.globl _DFE_READ_F0D_RIGHT_EVEN
	.globl _DFE_READ_F0D_LEFT_ODD
	.globl _DFE_READ_F0D_LEFT_EVEN
	.globl _DFE_READ_F0D_ODD
	.globl _DFE_READ_F0D_EVEN
	.globl _DFE_READ_F0B_ODD
	.globl _DFE_READ_F0B_EVEN
	.globl _DFE_READ_F0A_ODD
	.globl _DFE_READ_F0A_EVEN
	.globl _DFE_READ_ODD_REG8
	.globl _DFE_READ_EVEN_REG8
	.globl _DFE_READ_ODD_REG7
	.globl _DFE_READ_ODD_REG6
	.globl _DFE_READ_ODD_REG5
	.globl _DFE_READ_ODD_REG4
	.globl _DFE_READ_ODD_REG3
	.globl _DFE_READ_ODD_REG2
	.globl _DFE_READ_ODD_REG1
	.globl _DFE_READ_ODD_REG0
	.globl _DFE_READ_EVEN_REG7
	.globl _DFE_READ_EVEN_REG6
	.globl _DFE_READ_EVEN_REG5
	.globl _DFE_READ_EVEN_REG4
	.globl _DFE_READ_EVEN_REG3
	.globl _DFE_READ_EVEN_REG2
	.globl _DFE_READ_EVEN_REG1
	.globl _DFE_READ_EVEN_REG0
	.globl _TX_TRAIN_IF_REG8
	.globl _TX_TRAIN_CTRL_LANE
	.globl _TX_TRAIN_IF_REG7
	.globl _TX_TRAIN_IF_REG6
	.globl _TX_TRAIN_IF_REG5
	.globl _TX_TRAIN_IF_REG4
	.globl _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE
	.globl _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE
	.globl _TRX_TRAIN_IF_INTERRUPT_LANE
	.globl _TX_AMP_CTRL_REG0
	.globl _TX_DRV_RD_OUT_REG0
	.globl _LINK_TRAIN_MODE0
	.globl _TX_EMPH_CTRL_REG0
	.globl _TX_TRAIN_DEFAULT_REG5
	.globl _TX_TRAIN_DEFAULT_REG4
	.globl _TX_TRAIN_DEFAULT_REG3
	.globl _TX_TRAIN_DEFAULT_REG2
	.globl _TX_TRAIN_DEFAULT_REG1
	.globl _TX_TRAIN_DEFAULT_REG0
	.globl _TX_TRAIN_DRIVER_REG2
	.globl _TX_TRAIN_DRIVER_REG1
	.globl _TX_TRAIN_DRIVER_REG0
	.globl _TX_TRAIN_PATTTERN_REG0
	.globl _TX_TRAIN_IF_REG3
	.globl _TX_TRAIN_IF_REG2
	.globl _TX_TRAIN_IF_REG1
	.globl _TX_TRAIN_IF_REG0
	.globl _DME_DEC_REG1
	.globl _DME_DEC_REG0
	.globl _DME_ENC_REG2
	.globl _DME_ENC_REG1
	.globl _DME_ENC_REG0
	.globl _END_XDAT_CMN
	.globl _MCU_INFO_13
	.globl _MCU_INFO_12
	.globl _MCU_INFO_5
	.globl _MCU_INFO_4
	.globl _SYNC_INFO
	.globl _CDS_EYE_CLK_THR
	.globl _TX_SAVE_4
	.globl _TX_SAVE_3
	.globl _TX_SAVE_2
	.globl _TX_SAVE_1
	.globl _TX_SAVE_0
	.globl _ETH_PRESET1_TB
	.globl _ETH_PRESET0_TB
	.globl _SAS_PRESET2_TB
	.globl _SAS_PRESET1_TB
	.globl _SAS_PRESET0_TB
	.globl _G_SELLV_RXSAMPLER
	.globl _G_SELLV_RXDATACLK
	.globl _G_SELLV_RXEOMCLK
	.globl _G_SELLV_TXPRE
	.globl _G_SELLV_TXDATA
	.globl _G_SELLV_TXCLK
	.globl _TIMER_SEL3
	.globl _TIMER_SEL2
	.globl _TIMER_SEL1
	.globl _MCU_CONFIG1
	.globl _LOOP_CNTS
	.globl _CAL_DATA1
	.globl _MCU_CONFIG
	.globl _CAL_STATUS_READ
	.globl _CAL_TIME_OUT_AND_DIS
	.globl _CON_CAL_STEP_SIZE5
	.globl _CON_CAL_STEP_SIZE4
	.globl _CON_CAL_STEP_SIZE3
	.globl _CON_CAL_STEP_SIZE2
	.globl _CON_CAL_STEP_SIZE1
	.globl _CONTROL_CONFIG9
	.globl _CONTROL_CONFIG8
	.globl _TRAIN_IF_CONFIG
	.globl _CAL_DATA0
	.globl _CONTROL_CONFIG7
	.globl _CONTROL_CONFIG6
	.globl _CONTROL_CONFIG5
	.globl _CONTROL_CONFIG4
	.globl _CONTROL_CONFIG3
	.globl _CONTROL_CONFIG2
	.globl _CONTROL_CONFIG1
	.globl _CONTROL_CONFIG0
	.globl _FW_REV
	.globl _CID_REG1
	.globl _CID_REG0
	.globl _CMN_MCU_REG
	.globl _SET_LANE_ISR
	.globl _CMN_ISR_MASK_1
	.globl _CMN_ISR_1
	.globl _CMN_MCU_TIMER3_CONTROL
	.globl _CMN_MCU_TIMER2_CONTROL
	.globl _CMN_MCU_TIMER1_CONTROL
	.globl _CMN_MCU_TIMER0_CONTROL
	.globl _CMN_MCU_TIMER_CTRL_5_LANE
	.globl _CMN_MCU_TIMER_CTRL_4_LANE
	.globl _CMN_MCU_TIMER_CTRL_3_LANE
	.globl _CMN_MCU_TIMER_CTRL_2_LANE
	.globl _CMN_MCU_TIMER_CONTROL
	.globl _CMN_CACHE_DEBUG1
	.globl _CMN_MCU_GPIO
	.globl _CMN_ISR_CLEAR_2
	.globl _CMN_ISR_MASK_2
	.globl _CMN_ISR_2
	.globl _MCU_INT_ADDR
	.globl _CMN_CACHE_DEBUG0
	.globl _MCU_SDT_CMN
	.globl _XDATA_MEM_CHECKSUM_CMN_2
	.globl _XDATA_MEM_CHECKSUM_CMN_1
	.globl _XDATA_MEM_CHECKSUM_CMN_0
	.globl _TEST5
	.globl _PM_CMN_REG2
	.globl _INPUT_CMN_PIN_REG3
	.globl __FIELDNAME_
	.globl _CMN_CALIBRATION
	.globl _OUTPUT_CMN_PIN_REG0
	.globl _SPD_CMN_REG1
	.globl _CLKGEN_CMN_REG1
	.globl _PLLCAL_REG1
	.globl _PLLCAL_REG0
	.globl _ANA_TSEN_CONTROL
	.globl _INPUT_CMN_PIN_REG2
	.globl _INPUT_CMN_PIN_REG1
	.globl _INPUT_CMN_PIN_REG0
	.globl _PM_CMN_REG1
	.globl _SYSTEM
	.globl _TEST4
	.globl _TEST3
	.globl _TEST2
	.globl _TEST1
	.globl _TEST0
	.globl _MCU_SYNC2
	.globl _MCU_SYNC1
	.globl _MEM_IRQ_CLEAR
	.globl _APB_CONTROL_REG
	.globl _ANA_IF_CMN_REG0
	.globl _MEM_IRQ_MASK
	.globl _MEM_IRQ
	.globl _ANA_IF_CMN_REG1
	.globl _MEM_CMN_ECC_ERR_ADDRESS0
	.globl _MCU_INFO_3
	.globl _MCU_INFO_2
	.globl _MCU_INFO_1
	.globl _MCU_INFO_0
	.globl _MEMORY_CONTROL_4
	.globl _MEMORY_CONTROL_3
	.globl _MEMORY_CONTROL_2
	.globl _MEMORY_CONTROL_1
	.globl _MEMORY_CONTROL_0
	.globl _MCU_DEBUG1
	.globl _MCU_DEBUG0
	.globl _MCU_CONTROL_4
	.globl _MCU_CONTROL_3
	.globl _MCU_CONTROL_2
	.globl _MCU_CONTROL_1
	.globl _MCU_CONTROL_0
	.globl _GLOB_L1_SUBSTATES_CFG
	.globl _GLOB_PIPE_REVISION
	.globl _GLOB_BIST_DATA_HI
	.globl _GLOB_BIST_SEQR_CFG
	.globl _GLOB_BIST_RESULT
	.globl _GLOB_BIST_MASK
	.globl _GLOB_BIST_START
	.globl _GLOB_BIST_LANE_TYPE
	.globl _GLOB_BIST_CTRL
	.globl _GLOB_DP_BAL_CFG4
	.globl _GLOB_DP_BAL_CFG2
	.globl _GLOB_DP_BAL_CFG0
	.globl _GLOB_PM_DP_CTRL
	.globl _GLOB_COUNTER_HI
	.globl _GLOB_COUNTER_CTRL
	.globl _GLOB_PM_CFG0
	.globl _GLOB_DP_SAL_CFG5
	.globl _GLOB_DP_SAL_CFG3
	.globl _GLOB_DP_SAL_CFG1
	.globl _GLOB_DP_SAL_CFG
	.globl _GLOB_MISC_CTRL
	.globl _GLOB_CLK_SRC_HI
	.globl _GLOB_CLK_SRC_LO
	.globl _GLOB_RST_CLK_CTRL
	.globl _DFE_STATIC_REG6
	.globl _DFE_STATIC_REG5
	.globl _DFE_STATIC_REG4
	.globl _DFE_STATIC_REG3
	.globl _DFE_STATIC_REG1
	.globl _DFE_STATIC_REG0
	.globl _RX_CMN_0
	.globl _SRIS_REG1
	.globl _SRIS_REG0
	.globl _DTX_PHY_ALIGN_REG2
	.globl _DTX_PHY_ALIGN_REG1
	.globl _DTX_PHY_ALIGN_REG0
	.globl _DTX_REG4
	.globl _DTX_REG3
	.globl _DTX_REG2
	.globl _DTX_REG1
	.globl _DTX_REG0
	.globl _TX_CMN_REG
	.globl _END_XDAT_LANE
	.globl _TRAIN_CONTROL_17
	.globl _TRAIN_CONTROL_16
	.globl _TRAIN_CONTROL_15
	.globl _TRAIN_CONTROL_14
	.globl _TRAIN_CONTROL_13
	.globl _ESM_ERR_N_CNT_LOW_LANE
	.globl _ESM_POP_N_CNT_LOW_LANE
	.globl _TRAIN_CONTROL_12
	.globl _TRAIN_CONTROL_11
	.globl _TRAIN_CONTROL_10
	.globl _TRAIN_CONTROL_9
	.globl _TRAIN_CONTROL_8
	.globl _TRAIN_CONTROL_7
	.globl _TRAIN_CONTROL_6
	.globl _TRAIN_CONTROL_5
	.globl _TRAIN_CONTROL_4
	.globl _TRAIN_CONTROL_3
	.globl _ESM_ERR_POP_CNT_HIGH_LANE
	.globl _ESM_ERR_P_CNT_LOW_LANE
	.globl _ESM_POP_P_CNT_LOW_LANE
	.globl _CDS_CTRL_REG1
	.globl _CDS_CTRL_REG0
	.globl _DFE_CONTROL_11
	.globl _DFE_CONTROL_10
	.globl _DFE_CONTROL_9
	.globl _DFE_CONTROL_8
	.globl _DFE_CONTROL_7
	.globl _DFE_TEST_5
	.globl _DFE_TEST_4
	.globl _DFE_TEST_1
	.globl _DFE_TEST_0
	.globl _DFE_CONTROL_6
	.globl _TRAIN_PARA_3
	.globl _TRAIN_PARA_2
	.globl _TRAIN_PARA_1
	.globl _TRAIN_PARA_0
	.globl _DLL_CAL
	.globl _RPTA_CONFIG_1
	.globl _RPTA_CONFIG_0
	.globl _TRAIN_CONTROL_2
	.globl _TRAIN_CONTROL_1
	.globl _TRAIN_CONTROL_0
	.globl _DFE_CONTROL_5
	.globl _DFE_CONTROL_4
	.globl _DFE_CONTROL_3
	.globl _DFE_CONTROL_2
	.globl _DFE_CONTROL_1
	.globl _DFE_CONTROL_0
	.globl _TRX_TRAIN_IF_TIMERS_ENABLE_LANE
	.globl _TRX_TRAIN_IF_TIMERS2_LANE
	.globl _TRX_TRAIN_IF_TIMERS1_LANE
	.globl _PHY_LOCAL_VALUE_LANE
	.globl _PHY_REMOTE_CTRL_VALUE_LANE
	.globl _PHY_REMOTE_CTRL_COMMAND_LANE
	.globl _CAL_SAVE_DATA3_LANE
	.globl _CAL_SAVE_DATA2_LANE
	.globl _CAL_SAVE_DATA1_LANE
	.globl _CAL_CTRL4_LANE
	.globl _CAL_CTRL3_LANE
	.globl _CAL_CTRL2_LANE
	.globl _CAL_CTRL1_LANE
	.globl _LANE_MARGIN_REG0
	.globl _EOM_VLD_REG4
	.globl _EOM_REG0
	.globl _EOM_ERR_REG3
	.globl _EOM_ERR_REG2
	.globl _EOM_ERR_REG1
	.globl _EOM_ERR_REG0
	.globl _EOM_VLD_REG3
	.globl _EOM_VLD_REG2
	.globl _EOM_VLD_REG1
	.globl _EOM_VLD_REG0
	.globl _DFE_STATIC_LANE_REG6
	.globl _DFE_STATIC_LANE_REG5
	.globl _DFE_STATIC_LANE_REG4
	.globl _DFE_STATIC_LANE_REG3
	.globl _DFE_STATIC_LANE_REG1
	.globl _DFE_STATIC_LANE_REG0
	.globl _DFE_DCE_REG0
	.globl _CAL_OFST_REG2
	.globl _CAL_OFST_REG1
	.globl _CAL_OFST_REG0
	.globl _DFE_READ_ODD_2C_REG8
	.globl _DFE_READ_EVEN_2C_REG8
	.globl _DFE_READ_ODD_2C_REG7
	.globl _DFE_READ_ODD_2C_REG6
	.globl _DFE_READ_ODD_2C_REG5
	.globl _DFE_READ_ODD_2C_REG4
	.globl _DFE_READ_ODD_2C_REG3
	.globl _DFE_READ_ODD_2C_REG2
	.globl _DFE_READ_ODD_2C_REG1
	.globl _DFE_READ_ODD_2C_REG0
	.globl _DFE_READ_EVEN_2C_REG7
	.globl _DFE_READ_EVEN_2C_REG6
	.globl _DFE_READ_EVEN_2C_REG5
	.globl _DFE_READ_EVEN_2C_REG4
	.globl _DFE_READ_EVEN_2C_REG3
	.globl _DFE_READ_EVEN_2C_REG2
	.globl _DFE_READ_EVEN_2C_REG1
	.globl _DFE_READ_EVEN_2C_REG0
	.globl _DFE_READ_ODD_SM_REG8
	.globl _DFE_READ_EVEN_SM_REG8
	.globl _DFE_READ_ODD_SM_REG7
	.globl _DFE_READ_ODD_SM_REG6
	.globl _DFE_READ_ODD_SM_REG5
	.globl _DFE_READ_ODD_SM_REG4
	.globl _DFE_READ_ODD_SM_REG3
	.globl _DFE_READ_ODD_SM_REG2
	.globl _DFE_READ_ODD_SM_REG1
	.globl _DFE_READ_ODD_SM_REG0
	.globl _DFE_READ_EVEN_SM_REG7
	.globl _DFE_READ_EVEN_SM_REG6
	.globl _DFE_READ_EVEN_SM_REG5
	.globl _DFE_READ_EVEN_SM_REG4
	.globl _DFE_READ_EVEN_SM_REG3
	.globl _DFE_READ_EVEN_SM_REG2
	.globl _DFE_READ_EVEN_SM_REG1
	.globl _DFE_READ_EVEN_SM_REG0
	.globl _DFE_FEXT_ODD_REG7
	.globl _DFE_FEXT_ODD_REG6
	.globl _DFE_FEXT_ODD_REG5
	.globl _DFE_FEXT_ODD_REG4
	.globl _DFE_FEXT_ODD_REG3
	.globl _DFE_FEXT_ODD_REG2
	.globl _DFE_FEXT_ODD_REG1
	.globl _DFE_FEXT_ODD_REG0
	.globl _DFE_FEXT_EVEN_REG7
	.globl _DFE_FEXT_EVEN_REG6
	.globl _DFE_FEXT_EVEN_REG5
	.globl _DFE_FEXT_EVEN_REG4
	.globl _DFE_FEXT_EVEN_REG3
	.globl _DFE_FEXT_EVEN_REG2
	.globl _DFE_FEXT_EVEN_REG1
	.globl _DFE_FEXT_EVEN_REG0
	.globl _DFE_DC_ODD_REG8
	.globl _DFE_DC_EVEN_REG8
	.globl _DFE_FEN_ODD_REG
	.globl _DFE_FEN_EVEN_REG
	.globl _DFE_STEP_REG1
	.globl _DFE_STEP_REG0
	.globl _DFE_ANA_REG1
	.globl _DFE_ANA_REG0
	.globl _DFE_CTRL_REG4
	.globl _RX_EQ_CLK_CTRL
	.globl _DFE_CTRL_REG3
	.globl _DFE_CTRL_REG2
	.globl _DFE_CTRL_REG1
	.globl _DFE_CTRL_REG0
	.globl _PT_COUNTER2
	.globl _PT_COUNTER1
	.globl _PT_COUNTER0
	.globl _PT_USER_PATTERN2
	.globl _PT_USER_PATTERN1
	.globl _PT_USER_PATTERN0
	.globl _PT_CONTROL1
	.globl _PT_CONTROL0
	.globl _XDATA_MEM_CHECKSUM_LANE1
	.globl _XDATA_MEM_CHECKSUM_LANE0
	.globl _MEM_ECC_ERR_ADDRESS0
	.globl _MCU_COMMAND0
	.globl _MCU_INT_CONTROL_13
	.globl _MCU_WDT_LANE
	.globl _MCU_IRQ_ISR_LANE
	.globl _ANA_IF_DFEO_REG0
	.globl _ANA_IF_DFEE_REG0
	.globl _ANA_IF_TRX_REG0
	.globl _EXT_INT_CONTROL
	.globl _MCU_DEBUG_LANE
	.globl _MCU_DEBUG3_LANE
	.globl _MCU_DEBUG2_LANE
	.globl _MCU_DEBUG1_LANE
	.globl _MCU_DEBUG0_LANE
	.globl _MCU_TIMER_CTRL_7_LANE
	.globl _MCU_TIMER_CTRL_6_LANE
	.globl _MCU_TIMER_CTRL_5_LANE
	.globl _MCU_TIMER_CTRL_4_LANE
	.globl _MCU_TIMER_CTRL_3_LANE
	.globl _MCU_TIMER_CTRL_2_LANE
	.globl _MCU_TIMER_CTRL_1_LANE
	.globl _MCU_MEM_REG2_LANE
	.globl _MCU_MEM_REG1_LANE
	.globl _MCU_IRQ_MASK_LANE
	.globl _MCU_IRQ_LANE
	.globl _MCU_TIMER3_CONTROL
	.globl _MCU_TIMER2_CONTROL
	.globl _MCU_TIMER1_CONTROL
	.globl _MCU_TIMER0_CONTROL
	.globl _MCU_TIMER_CONTROL
	.globl _MCU_INT12_CONTROL
	.globl _MCU_INT11_CONTROL
	.globl _MCU_INT10_CONTROL
	.globl _MCU_INT9_CONTROL
	.globl _MCU_INT8_CONTROL
	.globl _MCU_INT7_CONTROL
	.globl _MCU_INT6_CONTROL
	.globl _MCU_INT5_CONTROL
	.globl _MCU_INT4_CONTROL
	.globl _MCU_INT3_CONTROL
	.globl _MCU_INT2_CONTROL
	.globl _MCU_INT1_CONTROL
	.globl _MCU_INT0_CONTROL
	.globl _MCU_STATUS3_LANE
	.globl _MCU_STATUS2_LANE
	.globl _MCU_STATUS1_LANE
	.globl _MCU_STATUS0_LANE
	.globl _LANE_SYSTEM0
	.globl _CACHE_DEBUG1
	.globl _CACHE_DEBUG0
	.globl _MCU_GPIO
	.globl _MCU_CONTROL_LANE
	.globl _LANE_32G_PRESET_CFG16_LANE
	.globl _LANE_32G_PRESET_CFG14_LANE
	.globl _LANE_32G_PRESET_CFG12_LANE
	.globl _LANE_32G_PRESET_CFG10_LANE
	.globl _LANE_32G_PRESET_CFG8_LANE
	.globl _LANE_32G_PRESET_CFG6_LANE
	.globl _LANE_32G_PRESET_CFG4_LANE
	.globl _LANE_32G_PRESET_CFG2_LANE
	.globl _LANE_32G_PRESET_CFG0_LANE
	.globl _LANE_EQ_32G_CFG0_LANE
	.globl _LANE_16G_PRESET_CFG16_LANE
	.globl _LANE_16G_PRESET_CFG14_LANE
	.globl _LANE_16G_PRESET_CFG12_LANE
	.globl _LANE_16G_PRESET_CFG10_LANE
	.globl _LANE_16G_PRESET_CFG8_LANE
	.globl _LANE_16G_PRESET_CFG6_LANE
	.globl _LANE_16G_PRESET_CFG4_LANE
	.globl _LANE_16G_PRESET_CFG2_LANE
	.globl _LANE_16G_PRESET_CFG0_LANE
	.globl _LANE_EQ_16G_CFG0_LANE
	.globl _LANE_REMOTE_SET_LANE
	.globl _LANE_COEFF_MAX0_LANE
	.globl _LANE_PRESET_CFG16_LANE
	.globl _LANE_PRESET_CFG14_LANE
	.globl _LANE_PRESET_CFG12_LANE
	.globl _LANE_PRESET_CFG10_LANE
	.globl _LANE_PRESET_CFG8_LANE
	.globl _LANE_PRESET_CFG6_LANE
	.globl _LANE_PRESET_CFG4_LANE
	.globl _LANE_PRESET_CFG2_LANE
	.globl _LANE_PRESET_CFG0_LANE
	.globl _LANE_EQ_CFG1_LANE
	.globl _LANE_EQ_CFG0_LANE
	.globl _LANE_USB_DP_CFG2_LANE
	.globl _LANE_USB_DP_CFG1_LANE
	.globl _LANE_DP_PIE8_CFG0_LANE
	.globl _LANE_CFG_STATUS3_LANE
	.globl _LANE_CFG4
	.globl _LANE_CFG2_LANE
	.globl _LANE_CFG_STATUS2_LANE
	.globl _LANE_STATUS0
	.globl _LANE_CFG0
	.globl _SQ_REG0
	.globl _DTL_REG3
	.globl _DTL_REG2
	.globl _DTL_REG1
	.globl _DTL_REG0
	.globl _RX_LANE_INTERRUPT_REG1
	.globl _RX_CALIBRATION_REG
	.globl _INPUT_RX_PIN_REG3_LANE
	.globl _RX_DATA_PATH_REG
	.globl _RX_LANE_INTERRUPT_MASK
	.globl _RX_LANE_INTERRUPT
	.globl _CDR_LOCK_REG
	.globl _FRAME_SYNC_DET_REG6
	.globl _FRAME_SYNC_DET_REG5
	.globl _FRAME_SYNC_DET_REG4
	.globl _FRAME_SYNC_DET_REG3
	.globl _FRAME_SYNC_DET_REG2
	.globl _FRAME_SYNC_DET_REG1
	.globl _FRAME_SYNC_DET_REG0
	.globl _CLKGEN_RX_LANE_REG1_LANE
	.globl _DIG_RX_RSVD_REG0
	.globl _SPD_CTRL_RX_LANE_REG1_LANE
	.globl _INPUT_RX_PIN_REG2_LANE
	.globl _INPUT_RX_PIN_REG1_LANE
	.globl _INPUT_RX_PIN_REG0_LANE
	.globl _RX_SYSTEM_LANE
	.globl _PM_CTRL_RX_LANE_REG1_LANE
	.globl _MON_TOP
	.globl _ANALOG_TX_REALTIME_REG_1
	.globl _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE
	.globl _PM_CTRL_INTERRUPT_ISR_REG1_LANE
	.globl __FIELDNAME__LANE
	.globl _INPUT_TX_PIN_REG5_LANE
	.globl _DIG_TX_RSVD_REG0
	.globl _TX_CALIBRATION_LANE
	.globl _INPUT_TX_PIN_REG4_LANE
	.globl _TX_SYSTEM_LANE
	.globl _SPD_CTRL_TX_LANE_REG1_LANE
	.globl _SPD_CTRL_INTERRUPT_REG2
	.globl _SPD_CTRL_INTERRUPT_REG1_LANE
	.globl _TX_SPEED_CONVERT_LANE
	.globl _CLKGEN_TX_LANE_REG1_LANE
	.globl _PM_CTRL_INTERRUPT_REG2
	.globl _PM_CTRL_INTERRUPT_REG1_LANE
	.globl _INPUT_TX_PIN_REG3_LANE
	.globl _INPUT_TX_PIN_REG2_LANE
	.globl _INPUT_TX_PIN_REG1_LANE
	.globl _INPUT_TX_PIN_REG0_LANE
	.globl _PM_CTRL_TX_LANE_REG2_LANE
	.globl _PM_CTRL_TX_LANE_REG1_LANE
	.globl _UPHY14_CMN_ANAREG_TOP_214
	.globl _UPHY14_CMN_ANAREG_TOP_213
	.globl _UPHY14_CMN_ANAREG_TOP_212
	.globl _UPHY14_CMN_ANAREG_TOP_211
	.globl _UPHY14_CMN_ANAREG_TOP_210
	.globl _UPHY14_CMN_ANAREG_TOP_209
	.globl _UPHY14_CMN_ANAREG_TOP_208
	.globl _UPHY14_CMN_ANAREG_TOP_207
	.globl _UPHY14_CMN_ANAREG_TOP_206
	.globl _UPHY14_CMN_ANAREG_TOP_205
	.globl _UPHY14_CMN_ANAREG_TOP_204
	.globl _UPHY14_CMN_ANAREG_TOP_203
	.globl _UPHY14_CMN_ANAREG_TOP_202
	.globl _UPHY14_CMN_ANAREG_TOP_201
	.globl _UPHY14_CMN_ANAREG_TOP_200
	.globl _UPHY14_CMN_ANAREG_TOP_199
	.globl _UPHY14_CMN_ANAREG_TOP_198
	.globl _UPHY14_CMN_ANAREG_TOP_197
	.globl _UPHY14_CMN_ANAREG_TOP_196
	.globl _UPHY14_CMN_ANAREG_TOP_195
	.globl _UPHY14_CMN_ANAREG_TOP_194
	.globl _UPHY14_CMN_ANAREG_TOP_193
	.globl _UPHY14_CMN_ANAREG_TOP_192
	.globl _UPHY14_CMN_ANAREG_TOP_191
	.globl _UPHY14_CMN_ANAREG_TOP_190
	.globl _UPHY14_CMN_ANAREG_TOP_189
	.globl _UPHY14_CMN_ANAREG_TOP_188
	.globl _UPHY14_CMN_ANAREG_TOP_187
	.globl _UPHY14_CMN_ANAREG_TOP_186
	.globl _UPHY14_CMN_ANAREG_TOP_185
	.globl _UPHY14_CMN_ANAREG_TOP_184
	.globl _UPHY14_CMN_ANAREG_TOP_183
	.globl _UPHY14_CMN_ANAREG_TOP_182
	.globl _UPHY14_CMN_ANAREG_TOP_181
	.globl _UPHY14_CMN_ANAREG_TOP_180
	.globl _UPHY14_CMN_ANAREG_TOP_179
	.globl _UPHY14_CMN_ANAREG_TOP_178
	.globl _UPHY14_CMN_ANAREG_TOP_177
	.globl _UPHY14_CMN_ANAREG_TOP_176
	.globl _UPHY14_CMN_ANAREG_TOP_175
	.globl _UPHY14_CMN_ANAREG_TOP_174
	.globl _UPHY14_CMN_ANAREG_TOP_173
	.globl _UPHY14_CMN_ANAREG_TOP_172
	.globl _UPHY14_CMN_ANAREG_TOP_171
	.globl _UPHY14_CMN_ANAREG_TOP_170
	.globl _UPHY14_CMN_ANAREG_TOP_169
	.globl _UPHY14_CMN_ANAREG_TOP_168
	.globl _UPHY14_CMN_ANAREG_TOP_167
	.globl _UPHY14_CMN_ANAREG_TOP_166
	.globl _UPHY14_CMN_ANAREG_TOP_165
	.globl _UPHY14_CMN_ANAREG_TOP_164
	.globl _UPHY14_CMN_ANAREG_TOP_163
	.globl _UPHY14_CMN_ANAREG_TOP_162
	.globl _UPHY14_CMN_ANAREG_TOP_161
	.globl _UPHY14_CMN_ANAREG_TOP_160
	.globl _UPHY14_CMN_ANAREG_TOP_159
	.globl _UPHY14_CMN_ANAREG_TOP_158
	.globl _UPHY14_CMN_ANAREG_TOP_157
	.globl _UPHY14_CMN_ANAREG_TOP_156
	.globl _UPHY14_CMN_ANAREG_TOP_155
	.globl _UPHY14_CMN_ANAREG_TOP_154
	.globl _UPHY14_CMN_ANAREG_TOP_153
	.globl _UPHY14_CMN_ANAREG_TOP_152
	.globl _UPHY14_CMN_ANAREG_TOP_151
	.globl _UPHY14_CMN_ANAREG_TOP_150
	.globl _UPHY14_CMN_ANAREG_TOP_149
	.globl _UPHY14_CMN_ANAREG_TOP_148
	.globl _UPHY14_CMN_ANAREG_TOP_147
	.globl _UPHY14_CMN_ANAREG_TOP_146
	.globl _UPHY14_CMN_ANAREG_TOP_145
	.globl _UPHY14_CMN_ANAREG_TOP_144
	.globl _UPHY14_CMN_ANAREG_TOP_143
	.globl _UPHY14_CMN_ANAREG_TOP_142
	.globl _UPHY14_CMN_ANAREG_TOP_141
	.globl _UPHY14_CMN_ANAREG_TOP_140
	.globl _UPHY14_CMN_ANAREG_TOP_139
	.globl _UPHY14_CMN_ANAREG_TOP_138
	.globl _UPHY14_CMN_ANAREG_TOP_137
	.globl _UPHY14_CMN_ANAREG_TOP_136
	.globl _UPHY14_CMN_ANAREG_TOP_135
	.globl _UPHY14_CMN_ANAREG_TOP_134
	.globl _UPHY14_CMN_ANAREG_TOP_133
	.globl _UPHY14_CMN_ANAREG_TOP_132
	.globl _UPHY14_CMN_ANAREG_TOP_131
	.globl _UPHY14_CMN_ANAREG_TOP_130
	.globl _UPHY14_CMN_ANAREG_TOP_129
	.globl _UPHY14_CMN_ANAREG_TOP_128
	.globl _ANA_DFEO_REG_0B
	.globl _ANA_DFEO_REG_0A
	.globl _ANA_DFEO_REG_09
	.globl _ANA_DFEO_REG_08
	.globl _ANA_DFEO_REG_07
	.globl _ANA_DFEO_REG_06
	.globl _ANA_DFEO_REG_05
	.globl _ANA_DFEO_REG_04
	.globl _ANA_DFEO_REG_03
	.globl _ANA_DFEO_REG_02
	.globl _ANA_DFEO_REG_01
	.globl _ANA_DFEO_REG_00
	.globl _ANA_DFEO_REG_27
	.globl _ANA_DFEO_REG_26
	.globl _ANA_DFEO_REG_25
	.globl _ANA_DFEO_REG_24
	.globl _ANA_DFEO_REG_23
	.globl _ANA_DFEO_REG_22
	.globl _ANA_DFEO_REG_21
	.globl _ANA_DFEO_REG_20
	.globl _ANA_DFEO_REG_1F
	.globl _ANA_DFEO_REG_1E
	.globl _ANA_DFEO_REG_1D
	.globl _ANA_DFEO_REG_1C
	.globl _ANA_DFEO_REG_1B
	.globl _ANA_DFEO_REG_1A
	.globl _ANA_DFEO_REG_19
	.globl _ANA_DFEO_REG_18
	.globl _ANA_DFEO_REG_17
	.globl _ANA_DFEO_REG_16
	.globl _ANA_DFEO_REG_15
	.globl _ANA_DFEO_REG_14
	.globl _ANA_DFEO_REG_13
	.globl _ANA_DFEO_REG_12
	.globl _ANA_DFEO_REG_11
	.globl _ANA_DFEO_REG_10
	.globl _ANA_DFEO_REG_0F
	.globl _ANA_DFEO_REG_0E
	.globl _ANA_DFEO_REG_0D
	.globl _ANA_DFEO_REG_0C
	.globl _ANA_DFEE_REG_1D
	.globl _ANA_DFEE_REG_1C
	.globl _ANA_DFEE_REG_1B
	.globl _ANA_DFEE_REG_1A
	.globl _ANA_DFEE_REG_19
	.globl _ANA_DFEE_REG_18
	.globl _ANA_DFEE_REG_17
	.globl _ANA_DFEE_REG_16
	.globl _ANA_DFEE_REG_15
	.globl _ANA_DFEE_REG_14
	.globl _ANA_DFEE_REG_13
	.globl _ANA_DFEE_REG_12
	.globl _ANA_DFEE_REG_11
	.globl _ANA_DFEE_REG_10
	.globl _ANA_DFEE_REG_0F
	.globl _ANA_DFEE_REG_0E
	.globl _ANA_DFEE_REG_0D
	.globl _ANA_DFEE_REG_0C
	.globl _ANA_DFEE_REG_0B
	.globl _ANA_DFEE_REG_0A
	.globl _ANA_DFEE_REG_09
	.globl _ANA_DFEE_REG_08
	.globl _ANA_DFEE_REG_07
	.globl _ANA_DFEE_REG_06
	.globl _ANA_DFEE_REG_05
	.globl _ANA_DFEE_REG_04
	.globl _ANA_DFEE_REG_03
	.globl _ANA_DFEE_REG_02
	.globl _ANA_DFEE_REG_01
	.globl _ANA_DFEE_REG_00
	.globl _ANA_DFEE_REG_27
	.globl _ANA_DFEE_REG_26
	.globl _ANA_DFEE_REG_25
	.globl _ANA_DFEE_REG_24
	.globl _ANA_DFEE_REG_23
	.globl _ANA_DFEE_REG_22
	.globl _ANA_DFEE_REG_21
	.globl _ANA_DFEE_REG_20
	.globl _ANA_DFEE_REG_1F
	.globl _ANA_DFEE_REG_1E
	.globl _UPHY14_TRX_ANAREG_BOT_32
	.globl _UPHY14_TRX_ANAREG_BOT_31
	.globl _UPHY14_TRX_ANAREG_BOT_30
	.globl _UPHY14_TRX_ANAREG_BOT_29
	.globl _UPHY14_TRX_ANAREG_BOT_28
	.globl _UPHY14_TRX_ANAREG_BOT_27
	.globl _UPHY14_TRX_ANAREG_BOT_26
	.globl _UPHY14_TRX_ANAREG_BOT_25
	.globl _UPHY14_TRX_ANAREG_BOT_24
	.globl _UPHY14_TRX_ANAREG_BOT_23
	.globl _UPHY14_TRX_ANAREG_BOT_22
	.globl _UPHY14_TRX_ANAREG_BOT_21
	.globl _UPHY14_TRX_ANAREG_BOT_20
	.globl _UPHY14_TRX_ANAREG_BOT_19
	.globl _UPHY14_TRX_ANAREG_BOT_18
	.globl _UPHY14_TRX_ANAREG_BOT_17
	.globl _UPHY14_TRX_ANAREG_BOT_16
	.globl _UPHY14_TRX_ANAREG_BOT_15
	.globl _UPHY14_TRX_ANAREG_BOT_14
	.globl _UPHY14_TRX_ANAREG_BOT_13
	.globl _UPHY14_TRX_ANAREG_BOT_12
	.globl _UPHY14_TRX_ANAREG_BOT_11
	.globl _UPHY14_TRX_ANAREG_BOT_10
	.globl _UPHY14_TRX_ANAREG_BOT_9
	.globl _UPHY14_TRX_ANAREG_BOT_8
	.globl _UPHY14_TRX_ANAREG_BOT_7
	.globl _UPHY14_TRX_ANAREG_BOT_6
	.globl _UPHY14_TRX_ANAREG_BOT_5
	.globl _UPHY14_TRX_ANAREG_BOT_4
	.globl _UPHY14_TRX_ANAREG_BOT_3
	.globl _UPHY14_TRX_ANAREG_BOT_2
	.globl _UPHY14_TRX_ANAREG_BOT_1
	.globl _UPHY14_TRX_ANAREG_BOT_0
	.globl _UPHY14_TRX_ANAREG_TOP_157
	.globl _UPHY14_TRX_ANAREG_TOP_156
	.globl _UPHY14_TRX_ANAREG_TOP_155
	.globl _UPHY14_TRX_ANAREG_TOP_154
	.globl _UPHY14_TRX_ANAREG_TOP_153
	.globl _UPHY14_TRX_ANAREG_TOP_152
	.globl _UPHY14_TRX_ANAREG_TOP_151
	.globl _UPHY14_TRX_ANAREG_TOP_150
	.globl _UPHY14_TRX_ANAREG_TOP_149
	.globl _UPHY14_TRX_ANAREG_TOP_148
	.globl _UPHY14_TRX_ANAREG_TOP_147
	.globl _UPHY14_TRX_ANAREG_TOP_146
	.globl _UPHY14_TRX_ANAREG_TOP_145
	.globl _UPHY14_TRX_ANAREG_TOP_144
	.globl _UPHY14_TRX_ANAREG_TOP_143
	.globl _UPHY14_TRX_ANAREG_TOP_142
	.globl _UPHY14_TRX_ANAREG_TOP_141
	.globl _UPHY14_TRX_ANAREG_TOP_140
	.globl _UPHY14_TRX_ANAREG_TOP_139
	.globl _UPHY14_TRX_ANAREG_TOP_138
	.globl _UPHY14_TRX_ANAREG_TOP_137
	.globl _UPHY14_TRX_ANAREG_TOP_136
	.globl _UPHY14_TRX_ANAREG_TOP_135
	.globl _UPHY14_TRX_ANAREG_TOP_134
	.globl _UPHY14_TRX_ANAREG_TOP_133
	.globl _UPHY14_TRX_ANAREG_TOP_132
	.globl _UPHY14_TRX_ANAREG_TOP_131
	.globl _UPHY14_TRX_ANAREG_TOP_130
	.globl _UPHY14_TRX_ANAREG_TOP_129
	.globl _UPHY14_TRX_ANAREG_TOP_128
	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_143
	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_142
	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_141
	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_140
	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_139
	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_138
	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_137
	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_136
	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_135
	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_134
	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_133
	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_132
	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_131
	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_130
	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_129
	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_128
	.globl _tx_status_pcie_mode
	.globl _tx_pipe4_en
	.globl _ctrl_trx_ffe_updated
	.globl _gain_train_with_c
	.globl _ctrl_trx_train_done
	.globl _ctrl_tx_train_done
	.globl _ctrl_rx_train_done
	.globl _ctrl_tx_train_on
	.globl _ctrl_rx_train_on
	.globl _ctrl_cdr_phase_on
	.globl _tx_remote_ctrl_on
	.globl _tx_emph1_is_min
	.globl _tx_emph1_is_max
	.globl _tx_emph0_is_min
	.globl _tx_emph0_is_max
	.globl _tx_amp_is_min
	.globl _tx_amp_is_max
	.globl _cont_cal_on
	.globl _no_pllspdchg
	.globl _force_exit_cal
	.globl _ring_use_250m
	.globl _ring_pll_enabled
	.globl _lc_pll_used
	.globl _use_ring_pll
	.globl _tx_pll_rate
	.globl _rx_pll_rate
	.globl _adapt_data_en
	.globl _adapt_slicer_en
	.globl _do_apta
	.globl _do_tx_apta
	.globl _do_rx_apta
	.globl _do_rxinit
	.globl _do_rxtrain
	.globl _do_train
	.globl _do_wake
	.globl _timeout2
	.globl _timeout
	.globl _sync_check
	.globl _int_pu_tx
	.globl _int_pu_rx
	.globl _SAMPLER_CAL_SM_SAVE
	.globl _SAMPLER_TRAIN_SAVE
	.globl _SAMPLER_CAL_SAVE
	.globl _NEG
	.globl _SIGN_POS
;--------------------------------------------------------
; special function registers
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
_P0	=	0x0080
_DPL	=	0x0082
_DPH	=	0x0083
_WDTREL	=	0x0086
_PCON	=	0x0087
_TCON	=	0x0088
_TMOD	=	0x0089
_TL0	=	0x008a
_TL1	=	0x008b
_TH0	=	0x008c
_TH1	=	0x008d
_CKCON	=	0x008e
_P1	=	0x0090
_DPS	=	0x0092
_PSBANK	=	0x0094
_SCON	=	0x0098
_SBUF	=	0x0099
_IEN2	=	0x009a
_P2	=	0x00a0
_DMAS0	=	0x00a1
_DMAS1	=	0x00a2
_DMAS2	=	0x00a3
_DMAT0	=	0x00a4
_DMAT1	=	0x00a5
_DMAT2	=	0x00a6
_IEN0	=	0x00a8
_IP0	=	0x00a9
_S0RELL	=	0x00aa
_P3	=	0x00b0
_DMAC0	=	0x00b1
_DMAC1	=	0x00b2
_DMAC2	=	0x00b3
_DMASEL	=	0x00b4
_DMAM0	=	0x00b5
_DMAM1	=	0x00b6
_IEN1	=	0x00b8
_IP1	=	0x00b9
_S0RELH	=	0x00ba
_IRCON	=	0x00c0
_CCEN	=	0x00c1
_T2CON	=	0x00c8
_RCAP2L	=	0x00ca
_RCAP2H	=	0x00cb
_TL2	=	0x00cc
_TH2	=	0x00cd
_PSW	=	0x00d0
_ADCON	=	0x00d8
_ACC	=	0x00e0
_EIE	=	0x00e8
_B	=	0x00f0
_SRST	=	0x00f7
_TMR0	=	0x8c8a
_TMR1	=	0x8d8b
_TMR2	=	0xcdcc
_DMASA	=	0xa2a1
_DMATA	=	0xa5a4
_DMAC	=	0xb2b1
;--------------------------------------------------------
; special function bits
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
_P0_0	=	0x0080
_P0_1	=	0x0081
_P0_2	=	0x0082
_P0_3	=	0x0083
_P0_4	=	0x0084
_P0_5	=	0x0085
_P0_6	=	0x0086
_P0_7	=	0x0087
_P1_0	=	0x0090
_P1_1	=	0x0091
_P1_2	=	0x0092
_P1_3	=	0x0093
_P1_4	=	0x0094
_P1_5	=	0x0095
_P1_6	=	0x0096
_P1_7	=	0x0097
_P2_0	=	0x00a0
_P2_1	=	0x00a1
_P2_2	=	0x00a2
_P2_3	=	0x00a3
_P2_4	=	0x00a4
_P2_5	=	0x00a5
_P2_6	=	0x00a6
_P2_7	=	0x00a7
_P3_0	=	0x00b0
_P3_1	=	0x00b1
_P3_2	=	0x00b2
_P3_3	=	0x00b3
_P3_4	=	0x00b4
_P3_5	=	0x00b5
_P3_6	=	0x00b6
_P3_7	=	0x00b7
_IT0	=	0x0088
_IE0	=	0x0089
_IT1	=	0x008a
_IE1	=	0x008b
_TR0	=	0x008c
_TF0	=	0x008d
_TR1	=	0x008e
_TF1	=	0x008f
_EX0	=	0x00a8
_ET0	=	0x00a9
_EX1	=	0x00aa
_ET1	=	0x00ab
_ES	=	0x00ac
_ET2	=	0x00ad
_WDT	=	0x00ae
_EA	=	0x00af
_EX7	=	0x00b8
_EX2	=	0x00b9
_EX3	=	0x00ba
_EX4	=	0x00bb
_EX5	=	0x00bc
_EX6	=	0x00bd
_PS1	=	0x00be
_ES1	=	0x009a
_EX8	=	0x009b
_EX9	=	0x009c
_EX10	=	0x009d
_EX11	=	0x009e
_EX12	=	0x009f
_RI	=	0x0098
_TI	=	0x0099
_TF2	=	0x00c6
;--------------------------------------------------------
; overlayable register banks
;--------------------------------------------------------
	.area REG_BANK_0	(REL,OVR,DATA)
	.ds 8
;--------------------------------------------------------
; internal ram data
;--------------------------------------------------------
	.area DSEG    (DATA)
_SIGN_POS::
	.ds 2
_NEG::
	.ds 2
_SAMPLER_CAL_SAVE::
	.ds 2
_SAMPLER_TRAIN_SAVE::
	.ds 2
_SAMPLER_CAL_SM_SAVE::
	.ds 2
;--------------------------------------------------------
; overlayable items in internal ram 
;--------------------------------------------------------
	.area OSEG    (OVR,DATA)
;--------------------------------------------------------
; indirectly addressable internal ram data
;--------------------------------------------------------
	.area ISEG    (DATA)
;--------------------------------------------------------
; absolute internal ram data
;--------------------------------------------------------
	.area IABS    (ABS,DATA)
	.area IABS    (ABS,DATA)
;--------------------------------------------------------
; bit data
;--------------------------------------------------------
	.area BSEG    (BIT)
_int_pu_rx::
	.ds 1
_int_pu_tx::
	.ds 1
_sync_check::
	.ds 1
_timeout::
	.ds 1
_timeout2::
	.ds 1
_do_wake::
	.ds 1
_do_train::
	.ds 1
_do_rxtrain::
	.ds 1
_do_rxinit::
	.ds 1
_do_rx_apta::
	.ds 1
_do_tx_apta::
	.ds 1
_do_apta::
	.ds 1
_adapt_slicer_en::
	.ds 1
_adapt_data_en::
	.ds 1
_rx_pll_rate::
	.ds 1
_tx_pll_rate::
	.ds 1
_use_ring_pll::
	.ds 1
_lc_pll_used::
	.ds 1
_ring_pll_enabled::
	.ds 1
_ring_use_250m::
	.ds 1
_force_exit_cal::
	.ds 1
_no_pllspdchg::
	.ds 1
_cont_cal_on::
	.ds 1
_tx_amp_is_max::
	.ds 1
_tx_amp_is_min::
	.ds 1
_tx_emph0_is_max::
	.ds 1
_tx_emph0_is_min::
	.ds 1
_tx_emph1_is_max::
	.ds 1
_tx_emph1_is_min::
	.ds 1
_tx_remote_ctrl_on::
	.ds 1
_ctrl_cdr_phase_on::
	.ds 1
_ctrl_rx_train_on::
	.ds 1
_ctrl_tx_train_on::
	.ds 1
_ctrl_rx_train_done::
	.ds 1
_ctrl_tx_train_done::
	.ds 1
_ctrl_trx_train_done::
	.ds 1
_gain_train_with_c::
	.ds 1
_ctrl_trx_ffe_updated::
	.ds 1
_tx_pipe4_en::
	.ds 1
_tx_status_pcie_mode::
	.ds 1
;--------------------------------------------------------
; paged external ram data
;--------------------------------------------------------
	.area PSEG    (PAG,XDATA)
;--------------------------------------------------------
; external ram data
;--------------------------------------------------------
	.area XSEG    (XDATA)
_UPHY14_TRX_LANEPLL_ANAREG_TOP_128	=	0x1000
_UPHY14_TRX_LANEPLL_ANAREG_TOP_129	=	0x1004
_UPHY14_TRX_LANEPLL_ANAREG_TOP_130	=	0x1008
_UPHY14_TRX_LANEPLL_ANAREG_TOP_131	=	0x100c
_UPHY14_TRX_LANEPLL_ANAREG_TOP_132	=	0x1010
_UPHY14_TRX_LANEPLL_ANAREG_TOP_133	=	0x1014
_UPHY14_TRX_LANEPLL_ANAREG_TOP_134	=	0x1018
_UPHY14_TRX_LANEPLL_ANAREG_TOP_135	=	0x101c
_UPHY14_TRX_LANEPLL_ANAREG_TOP_136	=	0x1020
_UPHY14_TRX_LANEPLL_ANAREG_TOP_137	=	0x1024
_UPHY14_TRX_LANEPLL_ANAREG_TOP_138	=	0x1028
_UPHY14_TRX_LANEPLL_ANAREG_TOP_139	=	0x102c
_UPHY14_TRX_LANEPLL_ANAREG_TOP_140	=	0x1030
_UPHY14_TRX_LANEPLL_ANAREG_TOP_141	=	0x1034
_UPHY14_TRX_LANEPLL_ANAREG_TOP_142	=	0x1038
_UPHY14_TRX_LANEPLL_ANAREG_TOP_143	=	0x103c
_UPHY14_TRX_ANAREG_TOP_128	=	0x0200
_UPHY14_TRX_ANAREG_TOP_129	=	0x0204
_UPHY14_TRX_ANAREG_TOP_130	=	0x0208
_UPHY14_TRX_ANAREG_TOP_131	=	0x020c
_UPHY14_TRX_ANAREG_TOP_132	=	0x0210
_UPHY14_TRX_ANAREG_TOP_133	=	0x0214
_UPHY14_TRX_ANAREG_TOP_134	=	0x0218
_UPHY14_TRX_ANAREG_TOP_135	=	0x021c
_UPHY14_TRX_ANAREG_TOP_136	=	0x0220
_UPHY14_TRX_ANAREG_TOP_137	=	0x0224
_UPHY14_TRX_ANAREG_TOP_138	=	0x0228
_UPHY14_TRX_ANAREG_TOP_139	=	0x022c
_UPHY14_TRX_ANAREG_TOP_140	=	0x0230
_UPHY14_TRX_ANAREG_TOP_141	=	0x0234
_UPHY14_TRX_ANAREG_TOP_142	=	0x0238
_UPHY14_TRX_ANAREG_TOP_143	=	0x023c
_UPHY14_TRX_ANAREG_TOP_144	=	0x0240
_UPHY14_TRX_ANAREG_TOP_145	=	0x0244
_UPHY14_TRX_ANAREG_TOP_146	=	0x0248
_UPHY14_TRX_ANAREG_TOP_147	=	0x024c
_UPHY14_TRX_ANAREG_TOP_148	=	0x0250
_UPHY14_TRX_ANAREG_TOP_149	=	0x0254
_UPHY14_TRX_ANAREG_TOP_150	=	0x0258
_UPHY14_TRX_ANAREG_TOP_151	=	0x025c
_UPHY14_TRX_ANAREG_TOP_152	=	0x0260
_UPHY14_TRX_ANAREG_TOP_153	=	0x0264
_UPHY14_TRX_ANAREG_TOP_154	=	0x0268
_UPHY14_TRX_ANAREG_TOP_155	=	0x026c
_UPHY14_TRX_ANAREG_TOP_156	=	0x0270
_UPHY14_TRX_ANAREG_TOP_157	=	0x0274
_UPHY14_TRX_ANAREG_BOT_0	=	0x0000
_UPHY14_TRX_ANAREG_BOT_1	=	0x0004
_UPHY14_TRX_ANAREG_BOT_2	=	0x0008
_UPHY14_TRX_ANAREG_BOT_3	=	0x000c
_UPHY14_TRX_ANAREG_BOT_4	=	0x0010
_UPHY14_TRX_ANAREG_BOT_5	=	0x0014
_UPHY14_TRX_ANAREG_BOT_6	=	0x0018
_UPHY14_TRX_ANAREG_BOT_7	=	0x001c
_UPHY14_TRX_ANAREG_BOT_8	=	0x0020
_UPHY14_TRX_ANAREG_BOT_9	=	0x0024
_UPHY14_TRX_ANAREG_BOT_10	=	0x0028
_UPHY14_TRX_ANAREG_BOT_11	=	0x002c
_UPHY14_TRX_ANAREG_BOT_12	=	0x0030
_UPHY14_TRX_ANAREG_BOT_13	=	0x0034
_UPHY14_TRX_ANAREG_BOT_14	=	0x0038
_UPHY14_TRX_ANAREG_BOT_15	=	0x003c
_UPHY14_TRX_ANAREG_BOT_16	=	0x0040
_UPHY14_TRX_ANAREG_BOT_17	=	0x0044
_UPHY14_TRX_ANAREG_BOT_18	=	0x0048
_UPHY14_TRX_ANAREG_BOT_19	=	0x004c
_UPHY14_TRX_ANAREG_BOT_20	=	0x0050
_UPHY14_TRX_ANAREG_BOT_21	=	0x0054
_UPHY14_TRX_ANAREG_BOT_22	=	0x0058
_UPHY14_TRX_ANAREG_BOT_23	=	0x005c
_UPHY14_TRX_ANAREG_BOT_24	=	0x0060
_UPHY14_TRX_ANAREG_BOT_25	=	0x0064
_UPHY14_TRX_ANAREG_BOT_26	=	0x0068
_UPHY14_TRX_ANAREG_BOT_27	=	0x006c
_UPHY14_TRX_ANAREG_BOT_28	=	0x0070
_UPHY14_TRX_ANAREG_BOT_29	=	0x0074
_UPHY14_TRX_ANAREG_BOT_30	=	0x0078
_UPHY14_TRX_ANAREG_BOT_31	=	0x007c
_UPHY14_TRX_ANAREG_BOT_32	=	0x0080
_ANA_DFEE_REG_1E	=	0x0478
_ANA_DFEE_REG_1F	=	0x047c
_ANA_DFEE_REG_20	=	0x0480
_ANA_DFEE_REG_21	=	0x0484
_ANA_DFEE_REG_22	=	0x0488
_ANA_DFEE_REG_23	=	0x048c
_ANA_DFEE_REG_24	=	0x0490
_ANA_DFEE_REG_25	=	0x0494
_ANA_DFEE_REG_26	=	0x0498
_ANA_DFEE_REG_27	=	0x049c
_ANA_DFEE_REG_00	=	0x0400
_ANA_DFEE_REG_01	=	0x0404
_ANA_DFEE_REG_02	=	0x0408
_ANA_DFEE_REG_03	=	0x040c
_ANA_DFEE_REG_04	=	0x0410
_ANA_DFEE_REG_05	=	0x0414
_ANA_DFEE_REG_06	=	0x0418
_ANA_DFEE_REG_07	=	0x041c
_ANA_DFEE_REG_08	=	0x0420
_ANA_DFEE_REG_09	=	0x0424
_ANA_DFEE_REG_0A	=	0x0428
_ANA_DFEE_REG_0B	=	0x042c
_ANA_DFEE_REG_0C	=	0x0430
_ANA_DFEE_REG_0D	=	0x0434
_ANA_DFEE_REG_0E	=	0x0438
_ANA_DFEE_REG_0F	=	0x043c
_ANA_DFEE_REG_10	=	0x0440
_ANA_DFEE_REG_11	=	0x0444
_ANA_DFEE_REG_12	=	0x0448
_ANA_DFEE_REG_13	=	0x044c
_ANA_DFEE_REG_14	=	0x0450
_ANA_DFEE_REG_15	=	0x0454
_ANA_DFEE_REG_16	=	0x0458
_ANA_DFEE_REG_17	=	0x045c
_ANA_DFEE_REG_18	=	0x0460
_ANA_DFEE_REG_19	=	0x0464
_ANA_DFEE_REG_1A	=	0x0468
_ANA_DFEE_REG_1B	=	0x046c
_ANA_DFEE_REG_1C	=	0x0470
_ANA_DFEE_REG_1D	=	0x0474
_ANA_DFEO_REG_0C	=	0x0830
_ANA_DFEO_REG_0D	=	0x0834
_ANA_DFEO_REG_0E	=	0x0838
_ANA_DFEO_REG_0F	=	0x083c
_ANA_DFEO_REG_10	=	0x0840
_ANA_DFEO_REG_11	=	0x0844
_ANA_DFEO_REG_12	=	0x0848
_ANA_DFEO_REG_13	=	0x084c
_ANA_DFEO_REG_14	=	0x0850
_ANA_DFEO_REG_15	=	0x0854
_ANA_DFEO_REG_16	=	0x0858
_ANA_DFEO_REG_17	=	0x085c
_ANA_DFEO_REG_18	=	0x0860
_ANA_DFEO_REG_19	=	0x0864
_ANA_DFEO_REG_1A	=	0x0868
_ANA_DFEO_REG_1B	=	0x086c
_ANA_DFEO_REG_1C	=	0x0870
_ANA_DFEO_REG_1D	=	0x0874
_ANA_DFEO_REG_1E	=	0x0878
_ANA_DFEO_REG_1F	=	0x087c
_ANA_DFEO_REG_20	=	0x0880
_ANA_DFEO_REG_21	=	0x0884
_ANA_DFEO_REG_22	=	0x0888
_ANA_DFEO_REG_23	=	0x088c
_ANA_DFEO_REG_24	=	0x0890
_ANA_DFEO_REG_25	=	0x0894
_ANA_DFEO_REG_26	=	0x0898
_ANA_DFEO_REG_27	=	0x089c
_ANA_DFEO_REG_00	=	0x0800
_ANA_DFEO_REG_01	=	0x0804
_ANA_DFEO_REG_02	=	0x0808
_ANA_DFEO_REG_03	=	0x080c
_ANA_DFEO_REG_04	=	0x0810
_ANA_DFEO_REG_05	=	0x0814
_ANA_DFEO_REG_06	=	0x0818
_ANA_DFEO_REG_07	=	0x081c
_ANA_DFEO_REG_08	=	0x0820
_ANA_DFEO_REG_09	=	0x0824
_ANA_DFEO_REG_0A	=	0x0828
_ANA_DFEO_REG_0B	=	0x082c
_UPHY14_CMN_ANAREG_TOP_128	=	0x8200
_UPHY14_CMN_ANAREG_TOP_129	=	0x8204
_UPHY14_CMN_ANAREG_TOP_130	=	0x8208
_UPHY14_CMN_ANAREG_TOP_131	=	0x820c
_UPHY14_CMN_ANAREG_TOP_132	=	0x8210
_UPHY14_CMN_ANAREG_TOP_133	=	0x8214
_UPHY14_CMN_ANAREG_TOP_134	=	0x8218
_UPHY14_CMN_ANAREG_TOP_135	=	0x821c
_UPHY14_CMN_ANAREG_TOP_136	=	0x8220
_UPHY14_CMN_ANAREG_TOP_137	=	0x8224
_UPHY14_CMN_ANAREG_TOP_138	=	0x8228
_UPHY14_CMN_ANAREG_TOP_139	=	0x822c
_UPHY14_CMN_ANAREG_TOP_140	=	0x8230
_UPHY14_CMN_ANAREG_TOP_141	=	0x8234
_UPHY14_CMN_ANAREG_TOP_142	=	0x8238
_UPHY14_CMN_ANAREG_TOP_143	=	0x823c
_UPHY14_CMN_ANAREG_TOP_144	=	0x8240
_UPHY14_CMN_ANAREG_TOP_145	=	0x8244
_UPHY14_CMN_ANAREG_TOP_146	=	0x8248
_UPHY14_CMN_ANAREG_TOP_147	=	0x824c
_UPHY14_CMN_ANAREG_TOP_148	=	0x8250
_UPHY14_CMN_ANAREG_TOP_149	=	0x8254
_UPHY14_CMN_ANAREG_TOP_150	=	0x8258
_UPHY14_CMN_ANAREG_TOP_151	=	0x825c
_UPHY14_CMN_ANAREG_TOP_152	=	0x8260
_UPHY14_CMN_ANAREG_TOP_153	=	0x8264
_UPHY14_CMN_ANAREG_TOP_154	=	0x8268
_UPHY14_CMN_ANAREG_TOP_155	=	0x826c
_UPHY14_CMN_ANAREG_TOP_156	=	0x8270
_UPHY14_CMN_ANAREG_TOP_157	=	0x8274
_UPHY14_CMN_ANAREG_TOP_158	=	0x8278
_UPHY14_CMN_ANAREG_TOP_159	=	0x827c
_UPHY14_CMN_ANAREG_TOP_160	=	0x8280
_UPHY14_CMN_ANAREG_TOP_161	=	0x8284
_UPHY14_CMN_ANAREG_TOP_162	=	0x8288
_UPHY14_CMN_ANAREG_TOP_163	=	0x828c
_UPHY14_CMN_ANAREG_TOP_164	=	0x8290
_UPHY14_CMN_ANAREG_TOP_165	=	0x8294
_UPHY14_CMN_ANAREG_TOP_166	=	0x8298
_UPHY14_CMN_ANAREG_TOP_167	=	0x829c
_UPHY14_CMN_ANAREG_TOP_168	=	0x82a0
_UPHY14_CMN_ANAREG_TOP_169	=	0x82a4
_UPHY14_CMN_ANAREG_TOP_170	=	0x82a8
_UPHY14_CMN_ANAREG_TOP_171	=	0x82ac
_UPHY14_CMN_ANAREG_TOP_172	=	0x82b0
_UPHY14_CMN_ANAREG_TOP_173	=	0x82b4
_UPHY14_CMN_ANAREG_TOP_174	=	0x82b8
_UPHY14_CMN_ANAREG_TOP_175	=	0x82bc
_UPHY14_CMN_ANAREG_TOP_176	=	0x82c0
_UPHY14_CMN_ANAREG_TOP_177	=	0x82c4
_UPHY14_CMN_ANAREG_TOP_178	=	0x82c8
_UPHY14_CMN_ANAREG_TOP_179	=	0x82cc
_UPHY14_CMN_ANAREG_TOP_180	=	0x82d0
_UPHY14_CMN_ANAREG_TOP_181	=	0x82d4
_UPHY14_CMN_ANAREG_TOP_182	=	0x82d8
_UPHY14_CMN_ANAREG_TOP_183	=	0x82dc
_UPHY14_CMN_ANAREG_TOP_184	=	0x82e0
_UPHY14_CMN_ANAREG_TOP_185	=	0x82e4
_UPHY14_CMN_ANAREG_TOP_186	=	0x82e8
_UPHY14_CMN_ANAREG_TOP_187	=	0x82ec
_UPHY14_CMN_ANAREG_TOP_188	=	0x82f0
_UPHY14_CMN_ANAREG_TOP_189	=	0x82f4
_UPHY14_CMN_ANAREG_TOP_190	=	0x82f8
_UPHY14_CMN_ANAREG_TOP_191	=	0x82fc
_UPHY14_CMN_ANAREG_TOP_192	=	0x8300
_UPHY14_CMN_ANAREG_TOP_193	=	0x8304
_UPHY14_CMN_ANAREG_TOP_194	=	0x8308
_UPHY14_CMN_ANAREG_TOP_195	=	0x830c
_UPHY14_CMN_ANAREG_TOP_196	=	0x8310
_UPHY14_CMN_ANAREG_TOP_197	=	0x8314
_UPHY14_CMN_ANAREG_TOP_198	=	0x8318
_UPHY14_CMN_ANAREG_TOP_199	=	0x831c
_UPHY14_CMN_ANAREG_TOP_200	=	0x8320
_UPHY14_CMN_ANAREG_TOP_201	=	0x8324
_UPHY14_CMN_ANAREG_TOP_202	=	0x8328
_UPHY14_CMN_ANAREG_TOP_203	=	0x832c
_UPHY14_CMN_ANAREG_TOP_204	=	0x8330
_UPHY14_CMN_ANAREG_TOP_205	=	0x8334
_UPHY14_CMN_ANAREG_TOP_206	=	0x8338
_UPHY14_CMN_ANAREG_TOP_207	=	0x833c
_UPHY14_CMN_ANAREG_TOP_208	=	0x8340
_UPHY14_CMN_ANAREG_TOP_209	=	0x8344
_UPHY14_CMN_ANAREG_TOP_210	=	0x8348
_UPHY14_CMN_ANAREG_TOP_211	=	0x834c
_UPHY14_CMN_ANAREG_TOP_212	=	0x8350
_UPHY14_CMN_ANAREG_TOP_213	=	0x8354
_UPHY14_CMN_ANAREG_TOP_214	=	0x8358
_PM_CTRL_TX_LANE_REG1_LANE	=	0x2000
_PM_CTRL_TX_LANE_REG2_LANE	=	0x2004
_INPUT_TX_PIN_REG0_LANE	=	0x2008
_INPUT_TX_PIN_REG1_LANE	=	0x200c
_INPUT_TX_PIN_REG2_LANE	=	0x2010
_INPUT_TX_PIN_REG3_LANE	=	0x2014
_PM_CTRL_INTERRUPT_REG1_LANE	=	0x2018
_PM_CTRL_INTERRUPT_REG2	=	0x201c
_CLKGEN_TX_LANE_REG1_LANE	=	0x2020
_TX_SPEED_CONVERT_LANE	=	0x2024
_SPD_CTRL_INTERRUPT_REG1_LANE	=	0x2028
_SPD_CTRL_INTERRUPT_REG2	=	0x202c
_SPD_CTRL_TX_LANE_REG1_LANE	=	0x2030
_TX_SYSTEM_LANE	=	0x2034
_INPUT_TX_PIN_REG4_LANE	=	0x203c
_TX_CALIBRATION_LANE	=	0x2040
_DIG_TX_RSVD_REG0	=	0x2044
_INPUT_TX_PIN_REG5_LANE	=	0x2048
__FIELDNAME__LANE	=	0x204c
_PM_CTRL_INTERRUPT_ISR_REG1_LANE	=	0x2050
_SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE	=	0x2054
_ANALOG_TX_REALTIME_REG_1	=	0x2058
_MON_TOP	=	0x205c
_PM_CTRL_RX_LANE_REG1_LANE	=	0x2100
_RX_SYSTEM_LANE	=	0x2104
_INPUT_RX_PIN_REG0_LANE	=	0x2108
_INPUT_RX_PIN_REG1_LANE	=	0x210c
_INPUT_RX_PIN_REG2_LANE	=	0x2110
_SPD_CTRL_RX_LANE_REG1_LANE	=	0x2114
_DIG_RX_RSVD_REG0	=	0x2118
_CLKGEN_RX_LANE_REG1_LANE	=	0x211c
_FRAME_SYNC_DET_REG0	=	0x2120
_FRAME_SYNC_DET_REG1	=	0x2124
_FRAME_SYNC_DET_REG2	=	0x2128
_FRAME_SYNC_DET_REG3	=	0x212c
_FRAME_SYNC_DET_REG4	=	0x2130
_FRAME_SYNC_DET_REG5	=	0x2134
_FRAME_SYNC_DET_REG6	=	0x2138
_CDR_LOCK_REG	=	0x213c
_RX_LANE_INTERRUPT	=	0x2140
_RX_LANE_INTERRUPT_MASK	=	0x2144
_RX_DATA_PATH_REG	=	0x2148
_INPUT_RX_PIN_REG3_LANE	=	0x214c
_RX_CALIBRATION_REG	=	0x2150
_RX_LANE_INTERRUPT_REG1	=	0x2158
_DTL_REG0	=	0x2160
_DTL_REG1	=	0x2164
_DTL_REG2	=	0x2168
_DTL_REG3	=	0x216c
_SQ_REG0	=	0x2170
_LANE_CFG0	=	0x4000
_LANE_STATUS0	=	0x4004
_LANE_CFG_STATUS2_LANE	=	0x4008
_LANE_CFG2_LANE	=	0x400c
_LANE_CFG4	=	0x4010
_LANE_CFG_STATUS3_LANE	=	0x4014
_LANE_DP_PIE8_CFG0_LANE	=	0x4018
_LANE_USB_DP_CFG1_LANE	=	0x401c
_LANE_USB_DP_CFG2_LANE	=	0x4020
_LANE_EQ_CFG0_LANE	=	0x4024
_LANE_EQ_CFG1_LANE	=	0x4028
_LANE_PRESET_CFG0_LANE	=	0x402c
_LANE_PRESET_CFG2_LANE	=	0x4030
_LANE_PRESET_CFG4_LANE	=	0x4034
_LANE_PRESET_CFG6_LANE	=	0x4038
_LANE_PRESET_CFG8_LANE	=	0x403c
_LANE_PRESET_CFG10_LANE	=	0x4040
_LANE_PRESET_CFG12_LANE	=	0x4044
_LANE_PRESET_CFG14_LANE	=	0x4048
_LANE_PRESET_CFG16_LANE	=	0x404c
_LANE_COEFF_MAX0_LANE	=	0x4050
_LANE_REMOTE_SET_LANE	=	0x4054
_LANE_EQ_16G_CFG0_LANE	=	0x4058
_LANE_16G_PRESET_CFG0_LANE	=	0x405c
_LANE_16G_PRESET_CFG2_LANE	=	0x4060
_LANE_16G_PRESET_CFG4_LANE	=	0x4064
_LANE_16G_PRESET_CFG6_LANE	=	0x4068
_LANE_16G_PRESET_CFG8_LANE	=	0x406c
_LANE_16G_PRESET_CFG10_LANE	=	0x4070
_LANE_16G_PRESET_CFG12_LANE	=	0x4074
_LANE_16G_PRESET_CFG14_LANE	=	0x4078
_LANE_16G_PRESET_CFG16_LANE	=	0x407c
_LANE_EQ_32G_CFG0_LANE	=	0x4080
_LANE_32G_PRESET_CFG0_LANE	=	0x4084
_LANE_32G_PRESET_CFG2_LANE	=	0x4088
_LANE_32G_PRESET_CFG4_LANE	=	0x408c
_LANE_32G_PRESET_CFG6_LANE	=	0x4090
_LANE_32G_PRESET_CFG8_LANE	=	0x4094
_LANE_32G_PRESET_CFG10_LANE	=	0x4098
_LANE_32G_PRESET_CFG12_LANE	=	0x409c
_LANE_32G_PRESET_CFG14_LANE	=	0x40a0
_LANE_32G_PRESET_CFG16_LANE	=	0x40a4
_MCU_CONTROL_LANE	=	0x2200
_MCU_GPIO	=	0x2204
_CACHE_DEBUG0	=	0x2208
_CACHE_DEBUG1	=	0x220c
_LANE_SYSTEM0	=	0x2210
_MCU_STATUS0_LANE	=	0x2230
_MCU_STATUS1_LANE	=	0x2234
_MCU_STATUS2_LANE	=	0x2238
_MCU_STATUS3_LANE	=	0x223c
_MCU_INT0_CONTROL	=	0x2240
_MCU_INT1_CONTROL	=	0x2244
_MCU_INT2_CONTROL	=	0x2248
_MCU_INT3_CONTROL	=	0x224c
_MCU_INT4_CONTROL	=	0x2250
_MCU_INT5_CONTROL	=	0x2254
_MCU_INT6_CONTROL	=	0x2258
_MCU_INT7_CONTROL	=	0x225c
_MCU_INT8_CONTROL	=	0x2260
_MCU_INT9_CONTROL	=	0x2264
_MCU_INT10_CONTROL	=	0x2268
_MCU_INT11_CONTROL	=	0x226c
_MCU_INT12_CONTROL	=	0x2270
_MCU_TIMER_CONTROL	=	0x2274
_MCU_TIMER0_CONTROL	=	0x2278
_MCU_TIMER1_CONTROL	=	0x227c
_MCU_TIMER2_CONTROL	=	0x2280
_MCU_TIMER3_CONTROL	=	0x2284
_MCU_IRQ_LANE	=	0x2288
_MCU_IRQ_MASK_LANE	=	0x228c
_MCU_MEM_REG1_LANE	=	0x2290
_MCU_MEM_REG2_LANE	=	0x2294
_MCU_TIMER_CTRL_1_LANE	=	0x2298
_MCU_TIMER_CTRL_2_LANE	=	0x229c
_MCU_TIMER_CTRL_3_LANE	=	0x22a0
_MCU_TIMER_CTRL_4_LANE	=	0x22a4
_MCU_TIMER_CTRL_5_LANE	=	0x22a8
_MCU_TIMER_CTRL_6_LANE	=	0x22ac
_MCU_TIMER_CTRL_7_LANE	=	0x22b0
_MCU_DEBUG0_LANE	=	0x22b4
_MCU_DEBUG1_LANE	=	0x22b8
_MCU_DEBUG2_LANE	=	0x22bc
_MCU_DEBUG3_LANE	=	0x22c0
_MCU_DEBUG_LANE	=	0x22c4
_EXT_INT_CONTROL	=	0x22c8
_ANA_IF_TRX_REG0	=	0x22cc
_ANA_IF_DFEE_REG0	=	0x22d0
_ANA_IF_DFEO_REG0	=	0x22d4
_MCU_IRQ_ISR_LANE	=	0x22d8
_MCU_WDT_LANE	=	0x22dc
_MCU_INT_CONTROL_13	=	0x22e0
_MCU_COMMAND0	=	0x22e4
_MEM_ECC_ERR_ADDRESS0	=	0x22f4
_XDATA_MEM_CHECKSUM_LANE0	=	0x22f8
_XDATA_MEM_CHECKSUM_LANE1	=	0x22fc
_PT_CONTROL0	=	0x2300
_PT_CONTROL1	=	0x2304
_PT_USER_PATTERN0	=	0x2308
_PT_USER_PATTERN1	=	0x230c
_PT_USER_PATTERN2	=	0x2310
_PT_COUNTER0	=	0x2314
_PT_COUNTER1	=	0x2318
_PT_COUNTER2	=	0x231c
_DFE_CTRL_REG0	=	0x2400
_DFE_CTRL_REG1	=	0x2404
_DFE_CTRL_REG2	=	0x2408
_DFE_CTRL_REG3	=	0x240c
_RX_EQ_CLK_CTRL	=	0x2410
_DFE_CTRL_REG4	=	0x2414
_DFE_ANA_REG0	=	0x2418
_DFE_ANA_REG1	=	0x241c
_DFE_STEP_REG0	=	0x2420
_DFE_STEP_REG1	=	0x2424
_DFE_FEN_EVEN_REG	=	0x2430
_DFE_FEN_ODD_REG	=	0x2434
_DFE_DC_EVEN_REG8	=	0x2438
_DFE_DC_ODD_REG8	=	0x243c
_DFE_FEXT_EVEN_REG0	=	0x2440
_DFE_FEXT_EVEN_REG1	=	0x2444
_DFE_FEXT_EVEN_REG2	=	0x2448
_DFE_FEXT_EVEN_REG3	=	0x244c
_DFE_FEXT_EVEN_REG4	=	0x2450
_DFE_FEXT_EVEN_REG5	=	0x2454
_DFE_FEXT_EVEN_REG6	=	0x2458
_DFE_FEXT_EVEN_REG7	=	0x245c
_DFE_FEXT_ODD_REG0	=	0x2460
_DFE_FEXT_ODD_REG1	=	0x2464
_DFE_FEXT_ODD_REG2	=	0x2468
_DFE_FEXT_ODD_REG3	=	0x246c
_DFE_FEXT_ODD_REG4	=	0x2470
_DFE_FEXT_ODD_REG5	=	0x2474
_DFE_FEXT_ODD_REG6	=	0x2478
_DFE_FEXT_ODD_REG7	=	0x247c
_DFE_READ_EVEN_SM_REG0	=	0x2480
_DFE_READ_EVEN_SM_REG1	=	0x2484
_DFE_READ_EVEN_SM_REG2	=	0x2488
_DFE_READ_EVEN_SM_REG3	=	0x248c
_DFE_READ_EVEN_SM_REG4	=	0x2490
_DFE_READ_EVEN_SM_REG5	=	0x2494
_DFE_READ_EVEN_SM_REG6	=	0x2498
_DFE_READ_EVEN_SM_REG7	=	0x249c
_DFE_READ_ODD_SM_REG0	=	0x24a0
_DFE_READ_ODD_SM_REG1	=	0x24a4
_DFE_READ_ODD_SM_REG2	=	0x24a8
_DFE_READ_ODD_SM_REG3	=	0x24ac
_DFE_READ_ODD_SM_REG4	=	0x24b0
_DFE_READ_ODD_SM_REG5	=	0x24b4
_DFE_READ_ODD_SM_REG6	=	0x24b8
_DFE_READ_ODD_SM_REG7	=	0x24bc
_DFE_READ_EVEN_SM_REG8	=	0x24c0
_DFE_READ_ODD_SM_REG8	=	0x24c4
_DFE_READ_EVEN_2C_REG0	=	0x24d0
_DFE_READ_EVEN_2C_REG1	=	0x24d4
_DFE_READ_EVEN_2C_REG2	=	0x24d8
_DFE_READ_EVEN_2C_REG3	=	0x24dc
_DFE_READ_EVEN_2C_REG4	=	0x24e0
_DFE_READ_EVEN_2C_REG5	=	0x24e4
_DFE_READ_EVEN_2C_REG6	=	0x24e8
_DFE_READ_EVEN_2C_REG7	=	0x24ec
_DFE_READ_ODD_2C_REG0	=	0x24f0
_DFE_READ_ODD_2C_REG1	=	0x24f4
_DFE_READ_ODD_2C_REG2	=	0x24f8
_DFE_READ_ODD_2C_REG3	=	0x24fc
_DFE_READ_ODD_2C_REG4	=	0x2500
_DFE_READ_ODD_2C_REG5	=	0x2504
_DFE_READ_ODD_2C_REG6	=	0x2508
_DFE_READ_ODD_2C_REG7	=	0x250c
_DFE_READ_EVEN_2C_REG8	=	0x2510
_DFE_READ_ODD_2C_REG8	=	0x2514
_CAL_OFST_REG0	=	0x2518
_CAL_OFST_REG1	=	0x251c
_CAL_OFST_REG2	=	0x2520
_DFE_DCE_REG0	=	0x2530
_DFE_STATIC_LANE_REG0	=	0x2540
_DFE_STATIC_LANE_REG1	=	0x2544
_DFE_STATIC_LANE_REG3	=	0x2548
_DFE_STATIC_LANE_REG4	=	0x254c
_DFE_STATIC_LANE_REG5	=	0x2550
_DFE_STATIC_LANE_REG6	=	0x2554
_EOM_VLD_REG0	=	0x2560
_EOM_VLD_REG1	=	0x2564
_EOM_VLD_REG2	=	0x2568
_EOM_VLD_REG3	=	0x256c
_EOM_ERR_REG0	=	0x2570
_EOM_ERR_REG1	=	0x2574
_EOM_ERR_REG2	=	0x2578
_EOM_ERR_REG3	=	0x257c
_EOM_REG0	=	0x2580
_EOM_VLD_REG4	=	0x25f0
_LANE_MARGIN_REG0	=	0x25f4
_CAL_CTRL1_LANE	=	0x6000
_CAL_CTRL2_LANE	=	0x6004
_CAL_CTRL3_LANE	=	0x6008
_CAL_CTRL4_LANE	=	0x600c
_CAL_SAVE_DATA1_LANE	=	0x6010
_CAL_SAVE_DATA2_LANE	=	0x6014
_CAL_SAVE_DATA3_LANE	=	0x6018
_PHY_REMOTE_CTRL_COMMAND_LANE	=	0x601c
_PHY_REMOTE_CTRL_VALUE_LANE	=	0x6020
_PHY_LOCAL_VALUE_LANE	=	0x6024
_TRX_TRAIN_IF_TIMERS1_LANE	=	0x6028
_TRX_TRAIN_IF_TIMERS2_LANE	=	0x602c
_TRX_TRAIN_IF_TIMERS_ENABLE_LANE	=	0x6030
_DFE_CONTROL_0	=	0x6034
_DFE_CONTROL_1	=	0x6038
_DFE_CONTROL_2	=	0x6040
_DFE_CONTROL_3	=	0x6044
_DFE_CONTROL_4	=	0x6048
_DFE_CONTROL_5	=	0x604c
_TRAIN_CONTROL_0	=	0x6050
_TRAIN_CONTROL_1	=	0x6054
_TRAIN_CONTROL_2	=	0x6058
_RPTA_CONFIG_0	=	0x605c
_RPTA_CONFIG_1	=	0x6060
_DLL_CAL	=	0x6064
_TRAIN_PARA_0	=	0x6068
_TRAIN_PARA_1	=	0x606c
_TRAIN_PARA_2	=	0x6070
_TRAIN_PARA_3	=	0x6074
_DFE_CONTROL_6	=	0x6078
_DFE_TEST_0	=	0x607c
_DFE_TEST_1	=	0x6080
_DFE_TEST_4	=	0x6084
_DFE_TEST_5	=	0x6088
_DFE_CONTROL_7	=	0x608c
_DFE_CONTROL_8	=	0x6090
_DFE_CONTROL_9	=	0x6094
_DFE_CONTROL_10	=	0x6098
_DFE_CONTROL_11	=	0x609c
_CDS_CTRL_REG0	=	0x60a0
_CDS_CTRL_REG1	=	0x60a4
_ESM_POP_P_CNT_LOW_LANE	=	0x60a8
_ESM_ERR_P_CNT_LOW_LANE	=	0x60ac
_ESM_ERR_POP_CNT_HIGH_LANE	=	0x60b0
_TRAIN_CONTROL_3	=	0x60b4
_TRAIN_CONTROL_4	=	0x60b8
_TRAIN_CONTROL_5	=	0x60bc
_TRAIN_CONTROL_6	=	0x60c0
_TRAIN_CONTROL_7	=	0x60c4
_TRAIN_CONTROL_8	=	0x60c8
_TRAIN_CONTROL_9	=	0x60cc
_TRAIN_CONTROL_10	=	0x60d0
_TRAIN_CONTROL_11	=	0x60d4
_TRAIN_CONTROL_12	=	0x60d8
_ESM_POP_N_CNT_LOW_LANE	=	0x60dc
_ESM_ERR_N_CNT_LOW_LANE	=	0x60e0
_TRAIN_CONTROL_13	=	0x60e4
_TRAIN_CONTROL_14	=	0x60e8
_TRAIN_CONTROL_15	=	0x60ec
_TRAIN_CONTROL_16	=	0x60f0
_TRAIN_CONTROL_17	=	0x60f4
_END_XDAT_LANE	=	0x60f8
_TX_CMN_REG	=	0xa000
_DTX_REG0	=	0xa008
_DTX_REG1	=	0xa00c
_DTX_REG2	=	0xa010
_DTX_REG3	=	0xa014
_DTX_REG4	=	0xa018
_DTX_PHY_ALIGN_REG0	=	0xa01c
_DTX_PHY_ALIGN_REG1	=	0xa024
_DTX_PHY_ALIGN_REG2	=	0xa028
_SRIS_REG0	=	0xa02c
_SRIS_REG1	=	0xa030
_RX_CMN_0	=	0xa100
_DFE_STATIC_REG0	=	0xa110
_DFE_STATIC_REG1	=	0xa114
_DFE_STATIC_REG3	=	0xa118
_DFE_STATIC_REG4	=	0xa11c
_DFE_STATIC_REG5	=	0xa120
_DFE_STATIC_REG6	=	0xa124
_GLOB_RST_CLK_CTRL	=	0x4200
_GLOB_CLK_SRC_LO	=	0x4204
_GLOB_CLK_SRC_HI	=	0x4208
_GLOB_MISC_CTRL	=	0x420c
_GLOB_DP_SAL_CFG	=	0x4210
_GLOB_DP_SAL_CFG1	=	0x4214
_GLOB_DP_SAL_CFG3	=	0x4218
_GLOB_DP_SAL_CFG5	=	0x421c
_GLOB_PM_CFG0	=	0x4220
_GLOB_COUNTER_CTRL	=	0x4224
_GLOB_COUNTER_HI	=	0x4228
_GLOB_PM_DP_CTRL	=	0x422c
_GLOB_DP_BAL_CFG0	=	0x4230
_GLOB_DP_BAL_CFG2	=	0x4234
_GLOB_DP_BAL_CFG4	=	0x4238
_GLOB_BIST_CTRL	=	0x423c
_GLOB_BIST_LANE_TYPE	=	0x4240
_GLOB_BIST_START	=	0x4244
_GLOB_BIST_MASK	=	0x4248
_GLOB_BIST_RESULT	=	0x424c
_GLOB_BIST_SEQR_CFG	=	0x4250
_GLOB_BIST_DATA_HI	=	0x4254
_GLOB_PIPE_REVISION	=	0x4258
_GLOB_L1_SUBSTATES_CFG	=	0x425c
_MCU_CONTROL_0	=	0xa200
_MCU_CONTROL_1	=	0xa204
_MCU_CONTROL_2	=	0xa208
_MCU_CONTROL_3	=	0xa20c
_MCU_CONTROL_4	=	0xa210
_MCU_DEBUG0	=	0xa214
_MCU_DEBUG1	=	0xa218
_MEMORY_CONTROL_0	=	0xa21c
_MEMORY_CONTROL_1	=	0xa220
_MEMORY_CONTROL_2	=	0xa224
_MEMORY_CONTROL_3	=	0xa228
_MEMORY_CONTROL_4	=	0xa22c
_MCU_INFO_0	=	0xa234
_MCU_INFO_1	=	0xa238
_MCU_INFO_2	=	0xa23c
_MCU_INFO_3	=	0xa240
_MEM_CMN_ECC_ERR_ADDRESS0	=	0xa244
_ANA_IF_CMN_REG1	=	0xa2e0
_MEM_IRQ	=	0xa2e4
_MEM_IRQ_MASK	=	0xa2e8
_ANA_IF_CMN_REG0	=	0xa2ec
_APB_CONTROL_REG	=	0xa2f0
_MEM_IRQ_CLEAR	=	0xa2f4
_MCU_SYNC1	=	0xa2f8
_MCU_SYNC2	=	0xa2fc
_TEST0	=	0xa300
_TEST1	=	0xa304
_TEST2	=	0xa308
_TEST3	=	0xa30c
_TEST4	=	0xa310
_SYSTEM	=	0xa314
_PM_CMN_REG1	=	0xa318
_INPUT_CMN_PIN_REG0	=	0xa31c
_INPUT_CMN_PIN_REG1	=	0xa320
_INPUT_CMN_PIN_REG2	=	0xa324
_ANA_TSEN_CONTROL	=	0xa328
_PLLCAL_REG0	=	0xa32c
_PLLCAL_REG1	=	0xa330
_CLKGEN_CMN_REG1	=	0xa334
_SPD_CMN_REG1	=	0xa338
_OUTPUT_CMN_PIN_REG0	=	0xa33c
_CMN_CALIBRATION	=	0xa340
__FIELDNAME_	=	0xa344
_INPUT_CMN_PIN_REG3	=	0xa348
_PM_CMN_REG2	=	0xa34c
_TEST5	=	0xa354
_XDATA_MEM_CHECKSUM_CMN_0	=	0xa358
_XDATA_MEM_CHECKSUM_CMN_1	=	0xa35c
_XDATA_MEM_CHECKSUM_CMN_2	=	0xa360
_MCU_SDT_CMN	=	0xa364
_CMN_CACHE_DEBUG0	=	0xa368
_MCU_INT_ADDR	=	0xa36c
_CMN_ISR_2	=	0xa370
_CMN_ISR_MASK_2	=	0xa374
_CMN_ISR_CLEAR_2	=	0xa378
_CMN_MCU_GPIO	=	0xa37c
_CMN_CACHE_DEBUG1	=	0xa380
_CMN_MCU_TIMER_CONTROL	=	0xa384
_CMN_MCU_TIMER_CTRL_2_LANE	=	0xa388
_CMN_MCU_TIMER_CTRL_3_LANE	=	0xa38c
_CMN_MCU_TIMER_CTRL_4_LANE	=	0xa390
_CMN_MCU_TIMER_CTRL_5_LANE	=	0xa394
_CMN_MCU_TIMER0_CONTROL	=	0xa398
_CMN_MCU_TIMER1_CONTROL	=	0xa39c
_CMN_MCU_TIMER2_CONTROL	=	0xa3a0
_CMN_MCU_TIMER3_CONTROL	=	0xa3a4
_CMN_ISR_1	=	0xa3a8
_CMN_ISR_MASK_1	=	0xa3ac
_SET_LANE_ISR	=	0xa3b0
_CMN_MCU_REG	=	0xa3f4
_CID_REG0	=	0xa3f8
_CID_REG1	=	0xa3fc
_FW_REV	=	0xe600
_CONTROL_CONFIG0	=	0xe604
_CONTROL_CONFIG1	=	0xe608
_CONTROL_CONFIG2	=	0xe60c
_CONTROL_CONFIG3	=	0xe610
_CONTROL_CONFIG4	=	0xe614
_CONTROL_CONFIG5	=	0xe618
_CONTROL_CONFIG6	=	0xe61c
_CONTROL_CONFIG7	=	0xe620
_CAL_DATA0	=	0xe624
_TRAIN_IF_CONFIG	=	0xe628
_CONTROL_CONFIG8	=	0xe62c
_CONTROL_CONFIG9	=	0xe630
_CON_CAL_STEP_SIZE1	=	0xe634
_CON_CAL_STEP_SIZE2	=	0xe638
_CON_CAL_STEP_SIZE3	=	0xe63c
_CON_CAL_STEP_SIZE4	=	0xe640
_CON_CAL_STEP_SIZE5	=	0xe644
_CAL_TIME_OUT_AND_DIS	=	0xe648
_CAL_STATUS_READ	=	0xe64c
_MCU_CONFIG	=	0xe650
_CAL_DATA1	=	0xe654
_LOOP_CNTS	=	0xe658
_MCU_CONFIG1	=	0xe65c
_TIMER_SEL1	=	0xe660
_TIMER_SEL2	=	0xe664
_TIMER_SEL3	=	0xe668
_G_SELLV_TXCLK	=	0xe66c
_G_SELLV_TXDATA	=	0xe670
_G_SELLV_TXPRE	=	0xe674
_G_SELLV_RXEOMCLK	=	0xe678
_G_SELLV_RXDATACLK	=	0xe67c
_G_SELLV_RXSAMPLER	=	0xe680
_SAS_PRESET0_TB	=	0xe684
_SAS_PRESET1_TB	=	0xe688
_SAS_PRESET2_TB	=	0xe68c
_ETH_PRESET0_TB	=	0xe690
_ETH_PRESET1_TB	=	0xe694
_TX_SAVE_0	=	0xe698
_TX_SAVE_1	=	0xe69c
_TX_SAVE_2	=	0xe6a0
_TX_SAVE_3	=	0xe6a4
_TX_SAVE_4	=	0xe6a8
_CDS_EYE_CLK_THR	=	0xe6ac
_SYNC_INFO	=	0xe6b0
_MCU_INFO_4	=	0xe6b4
_MCU_INFO_5	=	0xe6b8
_MCU_INFO_12	=	0xe6bc
_MCU_INFO_13	=	0xe6c0
_END_XDAT_CMN	=	0xe6c4
_DME_ENC_REG0	=	0x2600
_DME_ENC_REG1	=	0x2604
_DME_ENC_REG2	=	0x2608
_DME_DEC_REG0	=	0x260c
_DME_DEC_REG1	=	0x2610
_TX_TRAIN_IF_REG0	=	0x2614
_TX_TRAIN_IF_REG1	=	0x2618
_TX_TRAIN_IF_REG2	=	0x261c
_TX_TRAIN_IF_REG3	=	0x2620
_TX_TRAIN_PATTTERN_REG0	=	0x2624
_TX_TRAIN_DRIVER_REG0	=	0x2628
_TX_TRAIN_DRIVER_REG1	=	0x262c
_TX_TRAIN_DRIVER_REG2	=	0x2630
_TX_TRAIN_DEFAULT_REG0	=	0x2634
_TX_TRAIN_DEFAULT_REG1	=	0x2638
_TX_TRAIN_DEFAULT_REG2	=	0x263c
_TX_TRAIN_DEFAULT_REG3	=	0x2640
_TX_TRAIN_DEFAULT_REG4	=	0x2644
_TX_TRAIN_DEFAULT_REG5	=	0x2648
_TX_EMPH_CTRL_REG0	=	0x264c
_LINK_TRAIN_MODE0	=	0x2650
_TX_DRV_RD_OUT_REG0	=	0x2654
_TX_AMP_CTRL_REG0	=	0x2658
_TRX_TRAIN_IF_INTERRUPT_LANE	=	0x265c
_TRX_TRAIN_IF_INTERRUPT_MASK0_LANE	=	0x2660
_TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE	=	0x2664
_TX_TRAIN_IF_REG4	=	0x2668
_TX_TRAIN_IF_REG5	=	0x266c
_TX_TRAIN_IF_REG6	=	0x2670
_TX_TRAIN_IF_REG7	=	0x2674
_TX_TRAIN_CTRL_LANE	=	0x2678
_TX_TRAIN_IF_REG8	=	0x267c
_DFE_READ_EVEN_REG0	=	0x6100
_DFE_READ_EVEN_REG1	=	0x6104
_DFE_READ_EVEN_REG2	=	0x6108
_DFE_READ_EVEN_REG3	=	0x610c
_DFE_READ_EVEN_REG4	=	0x6110
_DFE_READ_EVEN_REG5	=	0x6114
_DFE_READ_EVEN_REG6	=	0x6118
_DFE_READ_EVEN_REG7	=	0x611c
_DFE_READ_ODD_REG0	=	0x6120
_DFE_READ_ODD_REG1	=	0x6124
_DFE_READ_ODD_REG2	=	0x6128
_DFE_READ_ODD_REG3	=	0x612c
_DFE_READ_ODD_REG4	=	0x6130
_DFE_READ_ODD_REG5	=	0x6134
_DFE_READ_ODD_REG6	=	0x6138
_DFE_READ_ODD_REG7	=	0x613c
_DFE_READ_EVEN_REG8	=	0x6140
_DFE_READ_ODD_REG8	=	0x6144
_DFE_READ_F0A_EVEN	=	0x6148
_DFE_READ_F0A_ODD	=	0x614c
_DFE_READ_F0B_EVEN	=	0x6150
_DFE_READ_F0B_ODD	=	0x6154
_DFE_READ_F0D_EVEN	=	0x6158
_DFE_READ_F0D_ODD	=	0x615c
_DFE_READ_F0D_LEFT_EVEN	=	0x6160
_DFE_READ_F0D_LEFT_ODD	=	0x6164
_DFE_READ_F0D_RIGHT_EVEN	=	0x6168
_DFE_READ_F0D_RIGHT_ODD	=	0x616c
_CDS_READ_MISC0	=	0x6170
_CDS_READ_MISC1	=	0x6174
_TXTRAIN_IF_REG0	=	0x6214
_lc_speedtable	=	0xe000
_ring_speedtable	=	0xe1c0
_phy_mode_cmn_table	=	0xe5c0
_max_gen	=	0x6300
_min_gen	=	0x6301
_speedtable	=	0x6304
_phy_mode_lane_table	=	0x65d4
_rc_save	=	0x60b4
_txffe_save	=	0x60d0
_phase_save	=	0x60e4
_train_gn1_index	=	0x6030
_train_g1_index	=	0x6031
_train_g0_index	=	0x6032
_local_tx_preset_tb	=	0xe6b0
_cmx_cal_lcvco_dac	=	0xe5c1
_cmx_cal_lcvco_dac_lsb	=	0xe5c1
_cmx_cal_lcvco_dac_msb	=	0xe5c4
_cmx_cal_lccap_msb	=	0xe5ca
_cmx_cal_lccap_lsb	=	0xe5c8
_cmx_cal_plldcc	=	0xe5cc
_cmx_cal_pll_speed_ring	=	0xe5d0
_cmx_cal_pll_sllp_dac_coarse_ring	=	0xe5d4
_cmx_cal_sllp_dac_fine_ring	=	0xe5d8
_lnx_cal_txdcc_pdiv	=	0x65d4
_lnx_cal_txdcc_pdiv_hg	=	0x65d8
_lnx_cal_txdcc	=	0x65da
_lnx_cal_txdcc_hg	=	0x65de
_lnx_cal_rxdcc_dll	=	0x65e0
_lnx_cal_rxdcc_dll_hg	=	0x65e4
_lnx_cal_rxdcc_data	=	0x65e6
_lnx_cal_rxdcc_data_hg	=	0x65f0
_lnx_cal_rxdcc_eom	=	0x65f5
_lnx_cal_rxdcc_eom_hg	=	0x65ff
_lnx_cal_dll_gmsel	=	0x6604
_lnx_cal_vdda_dll_sel	=	0x6606
_lnx_cal_dll_eom_gmsel	=	0x660a
_lnx_cal_vdda_dll_eom_sel	=	0x660c
_lnx_cal_eom_dpher	=	0x6610
_lnx_cal_align90_dummy_clk	=	0x6612
_lnx_cal_align90_dac	=	0x661a
_lnx_cal_align90_gm	=	0x6622
_lnx_cal_sellv_txdata	=	0x662a
_lnx_cal_sellv_txclk	=	0x6634
_lnx_cal_sellv_rxdataclk	=	0x663e
_lnx_cal_sellv_txpre	=	0x6648
_lnx_cal_sellv_rxsampler	=	0x6652
_lnx_cal_sellv_rxeomclk	=	0x665c
_lnx_spdoft_tx_preset_index_lane	=	0x6666
_lnx_calx_txdcc_pdiv	=	0x6490
_lnx_calx_txdcc_pdiv_hg	=	0x6496
_lnx_calx_txdcc	=	0x6499
_lnx_calx_txdcc_hg	=	0x649f
_lnx_calx_rxdcc_dll	=	0x64a2
_lnx_calx_rxdcc_dll_hg	=	0x64a8
_lnx_calx_dll_gmsel	=	0x64ab
_lnx_calx_vdda_dll_sel	=	0x64ae
_lnx_calx_dll_eom_gmsel	=	0x64b4
_lnx_calx_vdda_dll_eom_sel	=	0x64b7
_lnx_calx_eom_dpher	=	0x64bd
_lnx_calx_align90_dummy_clk	=	0x64c0
_lnx_calx_align90_dac	=	0x64cc
_lnx_calx_align90_gm	=	0x64d8
_cds28	=	0x6100
_dfe_sm	=	0x6178
_dfe_sm_dc	=	0x61b8
_dfe_sm_save	=	0x61c0
_UPHY_ANAREG_REV_0	=	0x03fc
_tx_tb	=	0xe684
_train_save_tb	=	0xe698
_sq_thrs_ratio_tb	=	0x607c
_save_pt_tx_pattern_sel_lane_5_0_b0::
	.ds 1
_save_pt_tx_pattern_sel_lane_5_0_b1::
	.ds 1
_save_pt_en_lane::
	.ds 1
_save_pt_tx_clk_en_lane::
	.ds 1
_save_local_ana_tx2rx_lpbk_en_lane::
	.ds 1
_txclk_vdd_step_cnt::
	.ds 1
_txpre_vdd_step_cnt::
	.ds 1
_txdata_vdd_step_cnt::
	.ds 1
_rxdcc_eom_step_cnt::
	.ds 1
_rxdcc_data_step_cnt::
	.ds 1
_rxdcc_dll_step_cnt::
	.ds 1
_rxsmplr_vdd_step_cnt::
	.ds 1
_rxeomclk_vdd_step_cnt::
	.ds 1
_plldcc_step_cnt::
	.ds 1
_pllamp_step_cnt::
	.ds 1
_txdcc_pdiv_step_cnt::
	.ds 1
_txdcc_step_cnt::
	.ds 1
_txdetect_step_cnt::
	.ds 1
_rxdll_step_cnt::
	.ds 1
_eom_dll_step_cnt::
	.ds 1
_align90_step_cnt::
	.ds 1
_gen_tx::
	.ds 1
_gen_rx::
	.ds 1
_tsen_dat::
	.ds 2
_mcuclk_mc::
	.ds 1
_cal_lccap_msb_index::
	.ds 2
_slave_phy_on::
	.ds 1
_gm_bin::
	.ds 1
_dac::
	.ds 1
_dm::
	.ds 1
_gm::
	.ds 1
_ringpll_dac_fine::
	.ds 2
_serdes_ring_lane_en::
	.ds 1
_ring_lane_sel::
	.ds 1
_pllcal_first_time::
	.ds 1
_tempc_step_state::
	.ds 1
_tempc_dir::
	.ds 1
_old_status::
	.ds 1
_new_gen_tx::
	.ds 1
_new_gen_rx::
	.ds 1
_pwrsq_on::
	.ds 1
_ringpll_step_size_cnt::
	.ds 1
_tsen_dat_cal::
	.ds 2
_tsen_dat_train::
	.ds 2
_tsen_dat_normal::
	.ds 2
_cal_align90_gm_bin::
	.ds 3
_rxdll_temp_a_lane::
	.ds 1
_rxdll_temp_b_lane::
	.ds 1
_vdd_cnt::
	.ds 1
_dcc_cont::
	.ds 1
_dfe_norm_cnt::
	.ds 1
_f1p_e_old::
	.ds 1
_f1p_o_old::
	.ds 1
_first_time_ring_pll_cont::
	.ds 1
_ring_size_counter::
	.ds 1
_ring_size_counter_mid::
	.ds 1
_train::
	.ds 47
_opt::
	.ds 47
_tx::
	.ds 14
_rx::
	.ds 5
_cdr::
	.ds 14
_ctrl_num_blind_loop::
	.ds 1
_ctrl_num_big_loop::
	.ds 1
_dfe_res_f0a_low_thres_01::
	.ds 1
_dfe_res_f0a_low_thres_2::
	.ds 1
_dfe_res_f0a_low_thres_3::
	.ds 1
_dfe_res_f0a_high_thres::
	.ds 1
_train_c::
	.ds 1
_train_r::
	.ds 1
_opt_c::
	.ds 1
_opt_r::
	.ds 1
_r2_adj_on::
	.ds 1
_sumf_boost_target_c::
	.ds 1
_cdr_midpoint_phase_os::
	.ds 1
_train_timer_int::
	.ds 1
_sum::
	.ds 40
_ctrl_max_dfe_adapt_shift::
	.ds 1
_half_shift::
	.ds 1
_dfe_dis::
	.ds 1
_ph_control_mode::
	.ds 1
_adapted_phase::
	.ds 1
_PH_CONV_CNT::
	.ds 1
_EOM_CONV_CNT::
	.ds 1
_ph_conv_dir::
	.ds 1
_eom_conv_dir::
	.ds 1
_norm_f1::
	.ds 1
_norm_ofst::
	.ds 1
_norm_eom_ph_os_l::
	.ds 1
_norm_eom_ph_os_c::
	.ds 1
_norm_eom_ph_os_r::
	.ds 1
_phase_vote_acc::
	.ds 2
_eom_vote_acc::
	.ds 2
_f0d_c_pre::
	.ds 1
_f0d_l_pre::
	.ds 1
_f0d_r_pre::
	.ds 1
_phase_l_offset::
	.ds 1
_phase_r_offset::
	.ds 1
_phase_offset::
	.ds 1
_adapt_eom_phase_save::
	.ds 1
_cur_esm_phase::
	.ds 2
_tx_init_bit::
	.ds 1
_train_comp::
	.ds 1
_uart_rx_busy::
	.ds 1
_tx_sweep_preset_en::
	.ds 1
_pcie_usb_mode::
	.ds 1
_do_phase_adapt::
	.ds 1
_Phase_Adapt_Inited::
	.ds 1
_detect_sat::
	.ds 1
_ctrl_rx_only_mode::
	.ds 1
_ctrl_trx_train_pass::
	.ds 1
_ctrl_rx_train_mode::
	.ds 1
_tx_num_tx_preset::
	.ds 1
_pre_sq_rd::
	.ds 1
_save_pu_f1p_s_o::
	.ds 1
_save_pu_f1p_s_e::
	.ds 1
_save_dfe_adapt_splr::
	.ds 1
_save_dfe_adapt_e_en::
	.ds 1
_save_dfe_adapt_o_en::
	.ds 1
_save_eom_en_s::
	.ds 1
_save_eom_en_d::
	.ds 1
_save_dfe_en::
	.ds 1
_eom_ext_mode::
	.ds 1
_dfe_2c::
	.ds 64
_rpta_loop_cnt::
	.ds 2
_tx_ctrl_stat::
	.ds 2
_rpta_vote::
	.ds 1
_cdr_state::
	.ds 1
_uart_rx_in::
	.ds 1
_uart_rx_out::
	.ds 1
_uart_rx_buf::
	.ds 30
_gen_pll_rate::
	.ds 1
_pre_gen_pll_rate::
	.ds 1
_pre_lcpll_rate::
	.ds 1
_pre_ringpll_rate::
	.ds 1
_invalidate_pll_rate::
	.ds 1
_skip_dfe_adapt_cdr_midpoint::
	.ds 1
_cds_dfe_ofst::
	.ds 1
_cdr_ui_pi_code_num::
	.ds 1
_half_ui_code::
	.ds 1
_eom_data_align_success::
	.ds 1
_ofst_sat::
	.ds 1
_cur_phase_offset_data::
	.ds 1
_cur_phase_offset_esm::
	.ds 1
_dfe_err_found::
	.ds 1
_save_dfe_dis::
	.ds 1
_train_ofst_save::
	.ds 1
_pre_local_ctrl::
	.ds 2
_save_local_status::
	.ds 2
_tx_train_p2p_hold::
	.ds 1
_rxinit_4_spdchg_en::
	.ds 1
_apta_sim_state::
	.ds 1
_apta_rm_state_err::
	.ds 1
_txffe_force_en::
	.ds 1
_g_fw_flags::
	.ds 1
_sq_thrs_ratio::
	.ds 1
_sq_thrs_ratio_gen_en::
	.ds 1
_dfe_res_save_en::
	.ds 1
_dfe_save_en::
	.ds 1
_dfe_phase_save_en::
	.ds 1
_tx_train_frame_det_timer::
	.ds 2
_rx_pll_rate_x::
	.ds 1
_tx_pll_rate_x::
	.ds 1
_cal_start_on::
	.ds 1
_tx_sel_bit::
	.ds 1
_rx_sel_bit::
	.ds 1
_pcie_f0b_en::
	.ds 1
_opt_g0_index::
	.ds 1
_opt_gn1_index::
	.ds 1
_opt_g1_index::
	.ds 1
_pll_cal_timeout_dis_save::
	.ds 1
_tx_apta_state::
	.ds 1
;--------------------------------------------------------
; absolute external ram data
;--------------------------------------------------------
	.area XABS    (ABS,XDATA)
;--------------------------------------------------------
; external initialized ram data
;--------------------------------------------------------
	.area HOME    (CODE)
	.area GSINIT0 (CODE)
	.area GSINIT1 (CODE)
	.area GSINIT2 (CODE)
	.area GSINIT3 (CODE)
	.area GSINIT4 (CODE)
	.area GSINIT5 (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area CSEG    (CODE)
;--------------------------------------------------------
; global & static initialisations
;--------------------------------------------------------
	.area HOME    (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area GSINIT  (CODE)
;--------------------------------------------------------
; Home
;--------------------------------------------------------
	.area HOME    (CODE)
	.area HOME    (CODE)
;--------------------------------------------------------
; code
;--------------------------------------------------------
	.area CSEG    (CODE)
	.area CSEG    (CODE)
	.area CONST   (CODE)
	.area CABS    (ABS,CODE)
