#include "common.h"
#ifdef USE_BANKING
#pragma codeseg BANK3
#endif
void xdat_lane_init () BANKING_CTRL {
//CAL_CTRL1_LANE.BT.B0 = 0x0; //00000000, rxdcc_data_cal_done_lane, rx_clk_cal_done_lane, txdetect_cal_done_lane, dll_eom_vdata_cal_done_lane, dll_cal_done_lane, sq_thresh_cal_done_lane, tx_pllvdda_cal_done_lane, rx_pllvdda_cal_done_lane
//CAL_CTRL1_LANE.BT.B1 = 0x0; //00000000, vdd_cal_done_lane, rximp_cal_done_lane, tximp_cal_done_lane, sampler_res_cal_done_lane, sampler_cal_done_lane, eom_align_cal_done_lane, rxalign90_cal_done_lane, rx_eom_cal_done_lane
//CAL_CTRL1_LANE.BT.B2 = 0x0; //00000000, rx_pll_cal_done_lane, tx_pll_cal_done_lane, rx_plldcc_cal_done_lane, tx_plldcc_cal_done_lane, align90_comp_cal_done_lane, sq_ofst_cal_done_lane, txdcc_pdiv_cal_done_lane, txdcc_cal_done_lane
//CAL_CTRL1_LANE.BT.B3 = 0x0; //0000000#, rx_pll_amp_cal_done_lane, tx_pll_amp_cal_done_lane, tx_load_speedtbl_done_lane, rx_load_speedtbl_done_lane, cal_done_lane, tx_cal_done_lane, rx_cal_done_lane
//CAL_CTRL2_LANE.BT.B0 = 0x0; //00000000, rxdcc_data_cal_pass_lane, rx_clk_cal_pass_lane, txdetect_cal_pass_lane, tx_pllvdda_cal_pass_lane, rx_pllvdda_cal_pass_lane, sq_thresh_cal_pass_lane, rx_pll_amp_cal_pass_lane, tx_pll_amp_cal_pass_lane
//CAL_CTRL2_LANE.BT.B1 = 0x0; //00000000, tximp_cal_pass_lane, sampler_cal_pass_lane, eom_eomdat_cal_pass_lane, eom_eomedg_fine_cal_pass_lane, eom_eomedg_coarse_cal_pass_lane, eom_dac_cal_pass_lane, rxalign90_cal_pass_lane, rx_eom_cal_pass_lane
//CAL_CTRL2_LANE.BT.B2 = 0x0; //00000000, sellv_txdata_pass_lane, sellv_txclk_pass_lane, sq_ofst_cal_pass_lane, txdcc_cal_pass_lane, rx_plldcc_cal_pass_lane, tx_plldcc_cal_pass_lane, vdd_cal_pass_lane, rximp_cal_pass_lane
//CAL_CTRL2_LANE.BT.B3 = 0x0; //#0000000, rx_pll_cal_pass_lane, tx_pll_cal_pass_lane, sellv_rxsampler_pass_lane, sellv_rxclk_eom_pass_lane, sellv_rxclk_pass_lane, sellv_rxdll_eom_pass_lane, sellv_rxdll_pass_lane
//CAL_CTRL3_LANE.BT.B0 = 0x0; //00000000, load_cal_on_lane[7:0]
//CAL_CTRL3_LANE.BT.B1 = 0x0; //####0000, train_db_en_lane, dis_bypass_rxtrain_in_fom_lane, pcie_rxtrain_on_before_dir_lane, uart_en_lane
//CAL_CTRL3_LANE.BT.B2 = 0x0; //00000000, rximp_cal_timeout_lane, tximp_cal_timeout_lane, dll_vdda_tracking_on_lane, txdcc_cal_stop_sel_lane, cal_vdd_continuous_mode_en_lane, rxdcc_data_cal_stop_sel_lane, rxdcc_eom_cal_stop_sel_lane, rxdcc_dll_cal_stop_sel_lane
//CAL_CTRL3_LANE.BT.B3 = 0x0; //####0000, rx_pll_temp_cal_pass_lane, tx_pll_temp_cal_pass_lane, rx_pll_temp_cal_done_lane, tx_pll_temp_cal_done_lane
//CAL_CTRL4_LANE.BT.B0 = 0x0; //00000000, sampler_cal_avg_mode_lane[7:0]
  CAL_CTRL4_LANE.BT.B1 = 0x3; //00000011, sampler_sample_size_lane[7:0]
//CAL_CTRL4_LANE.BT.B2 = 0x0; //00000000, rx_pll_rate_lane[7:0]
//CAL_CTRL4_LANE.BT.B3 = 0x0; //00000000, tx_pll_rate_lane[7:0]
//PLL_RS_CAL_CTRL_LANE.BT.B0 = 0x0; //00000000, pll_rs_speed_thresh_lane[15:0]
//PLL_RS_CAL_CTRL_LANE.BT.B1 = 0x0; //00000000, pll_rs_speed_thresh_lane[15:0]
  PLL_RS_CAL_CTRL_LANE.BT.B2 = 0x55; //01010101, pll_rs_vco_amp_vth_mid_lane[3:0], pll_rs_vco_amp_vth_low_lane[3:0]
  PLL_RS_CAL_CTRL_LANE.BT.B3 = 0x5; //####0101, pll_rs_vco_amp_vth_high_lane[3:0]
//CAL_SAVE_DATA1_LANE.BT.B0 = 0x0; //00000000, cal_dll_cmp_offset_lane[7:0]
//CAL_SAVE_DATA1_LANE.BT.B1 = 0x0; //00000000, cal_eom_align_comp_ofstdac_lane[7:0]
//CAL_SAVE_DATA1_LANE.BT.B2 = 0x0; //00000000, cal_sq_offset_lane[7:0]
//CAL_SAVE_DATA1_LANE.BT.B3 = 0x0; //00000000, cal_sq_thresh_lane[7:0]
//CAL_SAVE_DATA2_LANE.BT.B0 = 0x0; //00000000, cal_align90_cmp_offset_lane[7:0]
  CAL_SAVE_DATA2_LANE.BT.B1 = 0xC; //00001100, cal_rx_imp_lane[7:0]
  CAL_SAVE_DATA2_LANE.BT.B2 = 0x8; //00001000, cal_tximp_tunen_top_lane[7:0]
  CAL_SAVE_DATA2_LANE.BT.B3 = 0x37; //00110111, cal_tximp_tunep_top_lane[7:0]
  CAL_SAVE_DATA3_LANE.BT.B0 = 0x8; //00001000, cal_tximp_tunen_mid_lane[7:0]
  CAL_SAVE_DATA3_LANE.BT.B1 = 0x37; //00110111, cal_tximp_tunep_mid_lane[7:0]
  CAL_SAVE_DATA3_LANE.BT.B2 = 0x8; //00001000, cal_tximp_tunen_bot_lane[7:0]
  CAL_SAVE_DATA3_LANE.BT.B3 = 0x37; //00110111, cal_tximp_tunep_bot_lane[7:0]
//CAL_SAVE_DATA4_LANE.BT.B0 = 0x0; //00000000, cal_smplr_d_top_e_lane[7:0]
//CAL_SAVE_DATA4_LANE.BT.B1 = 0x0; //00000000, cal_smplr_d_mid_e_lane[7:0]
//CAL_SAVE_DATA4_LANE.BT.B2 = 0x0; //00000000, cal_smplr_d_bot_e_lane[7:0]
//CAL_SAVE_DATA4_LANE.BT.B3 = 0x0; //00000000, cal_smplr_d_top_o_lane[7:0]
//CAL_SAVE_DATA5_LANE.BT.B0 = 0x0; //00000000, cal_smplr_d_mid_o_lane[7:0]
//CAL_SAVE_DATA5_LANE.BT.B1 = 0x0; //00000000, cal_smplr_d_bot_o_lane[7:0]
//CAL_SAVE_DATA5_LANE.BT.B2 = 0x0; //00000000, cal_smplr_s_top_e_lane[7:0]
//CAL_SAVE_DATA5_LANE.BT.B3 = 0x0; //00000000, cal_smplr_s_mid_e_lane[7:0]
//CAL_SAVE_DATA6_LANE.BT.B0 = 0x0; //00000000, cal_smplr_s_bot_e_lane[7:0]
//CAL_SAVE_DATA6_LANE.BT.B1 = 0x0; //00000000, cal_smplr_s_top_o_lane[7:0]
//CAL_SAVE_DATA6_LANE.BT.B2 = 0x0; //00000000, cal_smplr_s_mid_o_lane[7:0]
//CAL_SAVE_DATA6_LANE.BT.B3 = 0x0; //00000000, cal_smplr_s_bot_o_lane[7:0]
//CAL_SAVE_DATA7_LANE.BT.B0 = 0x0; //00000000, cal_smplr_edge_e_lane[7:0]
//CAL_SAVE_DATA7_LANE.BT.B1 = 0x0; //00000000, cal_smplr_edge_o_lane[7:0]
//CAL_SAVE_DATA7_LANE.BT.B2 = 0x0; //00000000, cal_sampler_res_lane[7:0]
  CAL_SAVE_DATA7_LANE.BT.B3 = 0xE0; //11100000, pll_amp_cal_val_max_lane[7:0]
//CDS_TB.BT.B0 = 0x0; //00000000, cds_call_force_lane[31:0]
//CDS_TB.BT.B1 = 0x0; //00000000, cds_call_force_lane[31:0]
//CDS_TB.BT.B2 = 0x0; //00000000, cds_call_force_lane[31:0]
//CDS_TB.BT.B3 = 0x0; //00000000, cds_call_force_lane[31:0]
//TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BT.B0 = 0x0; //00000000, refclk_freq_rd_lane[15:0]
//TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BT.B1 = 0x0; //00000000, refclk_freq_rd_lane[15:0]
//TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BT.B2 = 0x0; //00000000, train_db_step_lane[7:0]
  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BT.B3 = 0xF0; //111100##, tx_train_status_det_timer_enable_lane, rx_train_timer_enable_lane, tx_train_timer_enable_lane, tx_train_frame_det_timer_enable_lane, frame_lock_sel_timeout_lane, tx_train_status_det_timeout_int_lane
//DFE_CONTROL_0.BT.B0 = 0x0; //00000000, dfe_adapt_lp_num_load1_lane[15:0]
//DFE_CONTROL_0.BT.B1 = 0x0; //00000000, dfe_adapt_lp_num_load1_lane[15:0]
//DFE_CONTROL_0.BT.B2 = 0x0; //00000000, dfe_force_zero_lane[7:0]
//DFE_CONTROL_0.BT.B3 = 0x0; //00000000, dfe_dbg_step_mode_lane[7:0]
//DFE_CONTROL_1.BT.B0 = 0x0; //00#00###, dfe_cal_done_lane, dfe_f1p5_en_lane, eom_dfe_call_lane, eom_ready_lane
//DFE_CONTROL_1.BT.B1 = 0x0; //00000000, esm_voltage_lane[7:0]
//DFE_CONTROL_1.BT.B2 = 0x0; //000000##, rx_train_only_dfe_lane, sq_auto_train_lane, phase_adapt_temp_auto_en_lane, phase_adapt_sat_detect_lane, sq_fw_filter_en_lane, cds_call_force_en_lane
  DFE_CONTROL_1.BT.B3 = 0xC; //00001100, phase_adapt_temp_thr_lane[7:0]
//DFE_CONTROL_2.BT.B0 = 0x0; //00000000, dfe_dbg_step_lane[7:0]
//DFE_CONTROL_2.BT.B1 = 0x0; //00000000, adapted_phase_offset_data_lane[7:0]
//DFE_CONTROL_2.BT.B2 = 0x0; //00000000, temp_cdegree_lane[15:0]
//DFE_CONTROL_2.BT.B3 = 0x0; //00000000, temp_cdegree_lane[15:0]
  DFE_CONTROL_3.BT.B0 = 0xC9; //11001##1, train_use_s_lane, train_use_d_lane, train_ph_control_mode_lane[1:0], tx_train_p2p_hold_lane, final_gain_adjust_en_lane
//DFE_CONTROL_3.BT.B1 = 0x0; //00000000, cal_eom_dpher_lane[7:0]
//DFE_CONTROL_3.BT.B2 = 0x0; //00000000, cal_phase_lane[7:0]
//DFE_CONTROL_3.BT.B3 = 0x0; //00000000, opt_phase_offset_normal_lane[7:0]
//DFE_CONTROL_4.BT.B0 = 0x0; //00000000, train_f0d_lane[7:0]
//DFE_CONTROL_4.BT.B1 = 0x0; //00000000, train_f0a_lane[7:0]
//DFE_CONTROL_4.BT.B2 = 0x0; //00000000, train_f0a_max_lane[7:0]
//DFE_CONTROL_4.BT.B3 = 0x0; //00000000, train_f0b_lane[7:0]
//DFE_CONTROL_5.BT.B0 = 0x0; //00000000, f1_align_skip_lane, phase_adapt_mode_lane, phase_adapt_enable_lane, dfe_adapt_normal_soft_cont_en_lane, dfe_adapt_normal_force_skip_lane, tx_no_init_lane, rx_no_init_lane, cdr_phase_opt_first_en_lane
  DFE_CONTROL_5.BT.B1 = 0xA2; //10100010, cdrphase_opt_en_lane, saturate_disable_lane, edge_sampler_normal_en_lane, thre_good_lane[4:0]
  DFE_CONTROL_5.BT.B2 = 0x1; //00000001, maxeo_adapt_normal_mode_en_lane, pattern_protect_en_lane, eom_phase_ui_align_failed_lane, init_phase_train_en_lane, phase_adapt_ui_align_skip_lane, thre_poor_lane[2:0]
  DFE_CONTROL_5.BT.B3 = 0x7F; //01111111, fast_dfe_timer_en_lane, eye_check_bypass_lane, thre_excellent_lane[5:0]
//TRAIN_CONTROL_0.BT.B0 = 0x0; //00000000, midpoint_small_thres_c_lane[7:0]
  TRAIN_CONTROL_0.BT.B1 = 0xC; //00001100, midpoint_small_thres_k_lane[7:0]
//TRAIN_CONTROL_0.BT.B2 = 0x0; //00000000, midpoint_large_thres_c_lane[7:0]
  TRAIN_CONTROL_0.BT.B3 = 0xC; //00001100, midpoint_large_thres_k_lane[7:0]
//TRAIN_CONTROL_1.BT.B0 = 0x0; //00000000, ini_phase_offset_lane[7:0]
//TRAIN_CONTROL_1.BT.B1 = 0x0; //00000000, midpoint_phase_os_lane[7:0]
  TRAIN_CONTROL_1.BT.B2 = 0x60; //01100000, sumf_boost_target_c_lane[7:0]
  TRAIN_CONTROL_1.BT.B3 = 0x7; //00000111, sumf_boost_target_k_lane[7:0]
  TRAIN_CONTROL_2.BT.B1 = 0xC0; //110000##, tx_train_fail_int_lane, tx_train_complete_int_lane, esm_dfe_adapt_splr_en_lane[3:0]
//TRAIN_CONTROL_2.BT.B2 = 0x0; //00000000, tx_adapt_g0_en_lane, tx_adapt_gn1_en_lane, tx_adapt_g1_en_lane, tx_adapt_gn2_en_lane, tx_train_alg_sel_lane, esm_en_lane, tx_train_frame_lock_det_fail_int_lane, esm_path_sel_lane
  TRAIN_CONTROL_2.BT.B3 = 0x3; //00000011, rx_rxffe_r_ini_lane[3:0], rxffe_r_gain_train_lane[3:0]
//RPTA_CONFIG_0.BT.B0 = 0x0; //00000000, eom_conv_num_lane[15:0]
//RPTA_CONFIG_0.BT.B1 = 0x0; //00000000, eom_conv_num_lane[15:0]
//RPTA_CONFIG_0.BT.B2 = 0x0; //00000000, eom_adapt_step_size_lane[7:0]
//RPTA_CONFIG_0.BT.B3 = 0x0; //00000000, eom_clk_offset_2c_lane[7:0]
//RPTA_CONFIG_1.BT.B0 = 0x0; //00000000, data_clk_offset_2c_lane[7:0]
//RPTA_CONFIG_1.BT.B1 = 0x0; //00000000, f0d_thre_lane[7:0]
//RPTA_CONFIG_1.BT.B2 = 0x0; //00000000, ph_adapt_step_size_lane[7:0]
//RPTA_CONFIG_1.BT.B3 = 0x0; //00000000, ph_conv_num_lane[7:0]
  DLL_CAL.BT.B0 = 0x35; //00110101, dll_eom_gmsel_min_lane[3:0], dll_sellv_rxdll_final_step_num_sel_lane[1:0], dll_sellv_rxeomdll_final_step_num_sel_lane[1:0]
  DLL_CAL.BT.B1 = 0x3; //####0011, dll_gmsel_min_lane[3:0]
//DLL_CAL.BT.B2 = 0x0; //00000000, rx_pll_rate_index_lane[7:0]
//DLL_CAL.BT.B3 = 0x0; //0000####, rx_rxffe_c_ini_lane[3:0]
//CLI_ARG.BT.B0 = 0x0; //00000000, cli_cmd_lane[7:0]
//CLI_ARG.BT.B1 = 0x0; //#######0, cli_start_lane
//CLI_ARG.BT.B2 = 0x0; //00000000, cli_return_lane[15:0]
//CLI_ARG.BT.B3 = 0x0; //00000000, cli_return_lane[15:0]
//CLI_REG1.BT.B0 = 0x0; //00000000, cli_args_lane[31:0]
//CLI_REG1.BT.B1 = 0x0; //00000000, cli_args_lane[31:0]
//CLI_REG1.BT.B2 = 0x0; //00000000, cli_args_lane[31:0]
//CLI_REG1.BT.B3 = 0x0; //00000000, cli_args_lane[31:0]
//MCU_COMMAND0_LANE.BT.B0 = 0x0; //00000000, mcu_command0_lane[31:0]
//MCU_COMMAND0_LANE.BT.B1 = 0x0; //00000000, mcu_command0_lane[31:0]
//MCU_COMMAND0_LANE.BT.B2 = 0x0; //00000000, mcu_command0_lane[31:0]
//MCU_COMMAND0_LANE.BT.B3 = 0x0; //00000000, mcu_command0_lane[31:0]
//PLL_TS_CAL_CTRL_LANE.BT.B0 = 0x0; //00000000, pll_ts_speed_thresh_lane[15:0]
//PLL_TS_CAL_CTRL_LANE.BT.B1 = 0x0; //00000000, pll_ts_speed_thresh_lane[15:0]
  PLL_TS_CAL_CTRL_LANE.BT.B2 = 0x55; //01010101, pll_ts_vco_amp_vth_mid_lane[3:0], pll_ts_vco_amp_vth_low_lane[3:0]
  PLL_TS_CAL_CTRL_LANE.BT.B3 = 0x5; //####0101, pll_ts_vco_amp_vth_high_lane[3:0]
//ESM_REG0.BT.B0 = 0x0; //00000000, esm_lpnum_lane[15:0]
//ESM_REG0.BT.B1 = 0x0; //00000000, esm_lpnum_lane[15:0]
//ESM_REG0.BT.B2 = 0x0; //00000000, esm_phase_lane[10:0]
//ESM_REG0.BT.B3 = 0x0; //00000000, esm_phase_reserved_lane[4:0], esm_phase_lane[10:0]
//SYSTEM_CONFIG_0.BT.B0 = 0x0; //######00, mcu_ctrl_pll_lane[1:0]
//SYSTEM_CONFIG_0.BT.B1 = 0x0; //#####000, pll_tsrs_switch_xdat_lane, pll_sel_lane[1:0]
//SYSTEM_CONFIG_0.BT.B2 = 0x0; //00000000, fn2_thre_lane[7:0]
//SYSTEM_CONFIG_0.BT.B3 = 0x0; //00000000, fn1_thre_lane[7:0]
//TRAIN_CONTROL_3.BT.B0 = 0x0; //00000000, train_f1_lane[7:0]
//TRAIN_CONTROL_3.BT.B1 = 0x0; //00000000, train_f2_lane[7:0]
//TRAIN_CONTROL_3.BT.B2 = 0x0; //00000000, train_f0x_lane[7:0]
//TRAIN_CONTROL_3.BT.B3 = 0x0; //00000000, tx_pll_rate_index_lane[7:0]
//TRAIN_CONTROL_4.BT.B0 = 0x0; //00000000, train_fn1_lane[7:0]
//TRAIN_CONTROL_4.BT.B1 = 0x0; //00000000, train_f7_lane[7:0]
//TRAIN_CONTROL_4.BT.B2 = 0x0; //00000000, train_f6_lane[7:0]
//TRAIN_CONTROL_4.BT.B3 = 0x0; //00000000, train_f5_lane[7:0]
//TRAIN_CONTROL_5.BT.B0 = 0x0; //####0000, eye_check_pass_lane, tx_reset_lane, train_pass_lane, train_done_lane
//TRAIN_CONTROL_5.BT.B1 = 0x0; //00000000, g0_index_lane[7:0]
//TRAIN_CONTROL_5.BT.B2 = 0x0; //00000000, g1_index_lane[7:0]
//TRAIN_CONTROL_5.BT.B3 = 0x0; //00000000, gn1_index_lane[7:0]
//TRAIN_CONTROL_6.BT.B0 = 0x0; //00000000, gn2_index_lane[7:0]
//TRAIN_CONTROL_6.BT.B1 = 0x0; //00000000, train_f4_lane[7:0]
//TRAIN_CONTROL_6.BT.B2 = 0x0; //00000000, train_f3_lane[7:0]
//TRAIN_CONTROL_6.BT.B3 = 0x0; //00000000, train_fn2_lane[7:0]
  RL2_CONTROL_0.BT.B0 = 0x7; //00000111, rl2_temp_delta_thrs_lane[7:0]
  RL2_CONTROL_0.BT.B1 = 0x3; //0#000011, rl2_adapt_en_lane, train_rl2_tune_lane[2:0], ini_rl2_train_lane[2:0]
  RL2_CONTROL_0.BT.B2 = 0xC8; //11001000, rl2_adapt_time_lane[15:0]
//RL2_CONTROL_0.BT.B3 = 0x0; //00000000, rl2_adapt_time_lane[15:0]
//RL2_CONTROL_1.BT.B0 = 0x0; //#0000000, ctrl_cdr_phase_on_lane, train_level_lane[2:0], norm_rl2_tune_lane[2:0]
//RL2_CONTROL_1.BT.B1 = 0x0; //00000000, train_dbg_step_lane[7:0]
//RL2_CONTROL_1.BT.B2 = 0x0; //00000000, train_boost_lane[15:0]
//RL2_CONTROL_1.BT.B3 = 0x0; //00000000, train_boost_lane[15:0]
  TRAIN_CONTROL_8.BT.B0 = 0xE8; //11101000, pt_out_time_train_comp_lane[15:0]
  TRAIN_CONTROL_8.BT.B1 = 0x3; //00000011, pt_out_time_train_comp_lane[15:0]
  TRAIN_CONTROL_8.BT.B2 = 0x2; //######1#, tx_train_coding_mode_lane
  DFE_POWER_SAVING.BT.B0 = 0xFF; //11111111, dfe_power_saving_temp_dfe_on_time_lane[7:0]
//DFE_POWER_SAVING.BT.B1 = 0x0; //00000000, dfe_power_saving_clkoff_time_lane[7:0]
//DFE_POWER_SAVING.BT.B2 = 0x0; //00000000, dfe_power_saving_temp_previous_lane[7:0]
//DFE_POWER_SAVING.BT.B3 = 0x0; //00000000, dfe_power_saving_dfe_off_flag_lane, dfe_power_saving_temp_changed_flag_lane, dfe_power_saving_temp_delta_lane[5:0]
//ESM_REG1.BT.B0 = 0x0; //00000000, esm_estimated_width_lane[15:0]
//ESM_REG1.BT.B1 = 0x0; //00000000, esm_estimated_width_lane[15:0]
//ESM_REG1.BT.B2 = 0x0; //00000000, esm_debug_lane[15:0]
//ESM_REG1.BT.B3 = 0x0; //00000000, esm_debug_lane[15:0]
//TRAIN_DEBUG_0.BT.B0 = 0x0; //00000000, speed_change_debug0_lane[7:0]
//TRAIN_DEBUG_0.BT.B1 = 0x0; //00000000, train_vref_top_lane[7:0]
//TRAIN_DEBUG_0.BT.B2 = 0x0; //00000000, train_vref_bot_lane[7:0]
//TRAIN_DEBUG_0.BT.B3 = 0x0; //00000000, train_dbg_step_mode_lane[7:0]
//CAL_TIME_0.BT.B0 = 0x0; //00000000, cal_time_lane[31:0]
//CAL_TIME_0.BT.B1 = 0x0; //00000000, cal_time_lane[31:0]
//CAL_TIME_0.BT.B2 = 0x0; //00000000, cal_time_lane[31:0]
//CAL_TIME_0.BT.B3 = 0x0; //00000000, cal_time_lane[31:0]
//CAL_TIME_1.BT.B0 = 0x0; //00000000, rs_pll_cal_time_lane[15:0]
//CAL_TIME_1.BT.B1 = 0x0; //00000000, rs_pll_cal_time_lane[15:0]
//CAL_TIME_1.BT.B2 = 0x0; //00000000, ts_pll_cal_time_lane[15:0]
//CAL_TIME_1.BT.B3 = 0x0; //00000000, ts_pll_cal_time_lane[15:0]
//CAL_TIME_2.BT.B0 = 0x0; //00000000, rs_pll_dcc_cal_time_lane[15:0]
//CAL_TIME_2.BT.B1 = 0x0; //00000000, rs_pll_dcc_cal_time_lane[15:0]
//CAL_TIME_2.BT.B2 = 0x0; //00000000, ts_pll_dcc_cal_time_lane[15:0]
//CAL_TIME_2.BT.B3 = 0x0; //00000000, ts_pll_dcc_cal_time_lane[15:0]
//CAL_TIME_3.BT.B0 = 0x0; //00000000, tx_dcc_cal_time_lane[15:0]
//CAL_TIME_3.BT.B1 = 0x0; //00000000, tx_dcc_cal_time_lane[15:0]
//CAL_TIME_3.BT.B2 = 0x0; //00000000, vdd_cal_time_lane[15:0]
//CAL_TIME_3.BT.B3 = 0x0; //00000000, vdd_cal_time_lane[15:0]
//CAL_TIME_4.BT.B0 = 0x0; //00000000, rx_eom_cal_time_lane[15:0]
//CAL_TIME_4.BT.B1 = 0x0; //00000000, rx_eom_cal_time_lane[15:0]
//CAL_TIME_4.BT.B2 = 0x0; //00000000, rx_clk_cal_time_lane[15:0]
//CAL_TIME_4.BT.B3 = 0x0; //00000000, rx_clk_cal_time_lane[15:0]
//CAL_TIME_5.BT.B0 = 0x0; //00000000, rx_sampler_cal_time_lane[15:0]
//CAL_TIME_5.BT.B1 = 0x0; //00000000, rx_sampler_cal_time_lane[15:0]
//CAL_TIME_5.BT.B2 = 0x0; //00000000, tx_imp_cal_time_lane[15:0]
//CAL_TIME_5.BT.B3 = 0x0; //00000000, tx_imp_cal_time_lane[15:0]
//CAL_TIME_6.BT.B0 = 0x0; //00000000, rx_sq_thresh_cal_time_lane[15:0]
//CAL_TIME_6.BT.B1 = 0x0; //00000000, rx_sq_thresh_cal_time_lane[15:0]
//CAL_TIME_6.BT.B2 = 0x0; //00000000, rx_sq_ofst_cal_time_lane[15:0]
//CAL_TIME_6.BT.B3 = 0x0; //00000000, rx_sq_ofst_cal_time_lane[15:0]
//CAL_TIME_7.BT.B0 = 0x0; //00000000, pll_rs_vdda_cal_time_lane[15:0]
//CAL_TIME_7.BT.B1 = 0x0; //00000000, pll_rs_vdda_cal_time_lane[15:0]
//CAL_TIME_7.BT.B2 = 0x0; //00000000, rx_imp_cal_time_lane[15:0]
//CAL_TIME_7.BT.B3 = 0x0; //00000000, rx_imp_cal_time_lane[15:0]
//TRAIN_DEBUG_1.BT.B0 = 0x0; //00000000, train_debug0_lane[7:0]
//TRAIN_DEBUG_1.BT.B1 = 0x0; //00000000, train_debug1_lane[7:0]
//TRAIN_DEBUG_1.BT.B2 = 0x0; //00000000, train_debug2_lane[7:0]
//TRAIN_DEBUG_1.BT.B3 = 0x0; //00000000, train_debug3_lane[7:0]
//CALIBRATION_DEBUG_0.BT.B0 = 0x0; //00000000, calibration_debug0_lane[7:0]
//CALIBRATION_DEBUG_0.BT.B1 = 0x0; //00000000, calibration_debug1_lane[7:0]
//CALIBRATION_DEBUG_0.BT.B2 = 0x0; //00000000, calibration_debug2_lane[7:0]
//CALIBRATION_DEBUG_0.BT.B3 = 0x0; //00000000, calibration_debug3_lane[7:0]
//PRBS_DEBUG_0.BT.B0 = 0x0; //00000000, prbs_debug0_lane[7:0]
//PRBS_DEBUG_0.BT.B1 = 0x0; //00000000, prbs_debug1_lane[7:0]
//PRBS_DEBUG_0.BT.B2 = 0x0; //00000000, prbs_debug2_lane[7:0]
//PRBS_DEBUG_0.BT.B3 = 0x0; //00000000, prbs_debug3_lane[7:0]
//MCU_RESERVED_0.BT.B0 = 0x0; //00000000, mcu_reservedx00_lane[7:0]
//MCU_RESERVED_0.BT.B1 = 0x0; //00000000, mcu_reservedx01_lane[7:0]
//MCU_RESERVED_0.BT.B2 = 0x0; //00000000, mcu_reservedx02_lane[7:0]
//MCU_RESERVED_0.BT.B3 = 0x0; //00000000, mcu_reservedx03_lane[7:0]
//CAL_TIME_8.BT.B0 = 0x0; //00000000, pll_ts_vdda_cal_time_lane[15:0]
//CAL_TIME_8.BT.B1 = 0x0; //00000000, pll_ts_vdda_cal_time_lane[15:0]
//CAL_TIME_8.BT.B2 = 0x0; //00000000, process_cal_time_lane[15:0]
//CAL_TIME_8.BT.B3 = 0x0; //00000000, process_cal_time_lane[15:0]
//CLI_DEBUG_0.BT.B0 = 0x0; //00000000, cli_debug0_lane[7:0]
//CLI_DEBUG_0.BT.B1 = 0x0; //00000000, cli_debug1_lane[7:0]
//CLI_DEBUG_0.BT.B2 = 0x0; //00000000, cli_debug2_lane[7:0]
//CLI_DEBUG_0.BT.B3 = 0x0; //00000000, cli_debug3_lane[7:0]
  TRAIN_STEP_0.BT.B0 = 0xFF; //11111111, train_step_en_lane[31:0]
  TRAIN_STEP_0.BT.B1 = 0xFF; //11111111, train_step_en_lane[31:0]
  TRAIN_STEP_0.BT.B2 = 0x3; //00000011, train_step_en_lane[31:0]
//TRAIN_STEP_0.BT.B3 = 0x0; //00000000, train_step_en_lane[31:0]
//TRAIN_STATUS_0.BT.B0 = 0x0; //00000000, train_st_lane[7:0]
//TRAIN_STATUS_0.BT.B1 = 0x0; //00000000, ph_control_mode_lane[7:0]
//TRAIN_STATUS_0.BT.B2 = 0x0; //00000000, train_sumftap_lane[15:0]
//TRAIN_STATUS_0.BT.B3 = 0x0; //00000000, train_sumftap_lane[15:0]
  TRAIN_PARA_8.BT.B0 = 0x28; //00101000, dfe_vref_res_thrs_lane[7:0]
  TRAIN_PARA_8.BT.B1 = 0x1E; //00011110, dfe_res_f0a_low_thres_0_init_lane[7:0]
  TRAIN_PARA_8.BT.B2 = 0xB; //00001011, dfe_res_f0a_low_thres_1_init_lane[7:0]
  TRAIN_PARA_7.BT.B0 = 0x15; //00010101, dfe_f567_res_thrs_lane[7:0]
  TRAIN_PARA_7.BT.B1 = 0x2C; //00101100, dfe_f34_res_thrs_lane[7:0]
  TRAIN_PARA_7.BT.B2 = 0x15; //00010101, dfe_f2_res_thrs_lane[7:0]
  TRAIN_PARA_7.BT.B3 = 0x2C; //00101100, dfe_f1_res_thrs_lane[7:0]
//TRAIN_TIME.BT.B0 = 0x0; //00000000, train_time_rd_lane[31:0]
//TRAIN_TIME.BT.B1 = 0x0; //00000000, train_time_rd_lane[31:0]
//TRAIN_TIME.BT.B2 = 0x0; //00000000, train_time_rd_lane[31:0]
//TRAIN_TIME.BT.B3 = 0x0; //00000000, train_time_rd_lane[31:0]
  TRAIN_PARA_1.BT.B0 = 0x32; //00110010, dfe_res_f0a_high_thres_init_lane[7:0]
  TRAIN_PARA_1.BT.B1 = 0x6; //00000110, dfe_res_f0a_low_thres_3_init_lane[7:0]
  TRAIN_PARA_1.BT.B2 = 0xA; //00001010, dfe_res_f0a_low_thres_2_init_lane[7:0]
  TRAIN_PARA_1.BT.B3 = 0x3A; //00111010, dfe_fx_sum_sat_thres_lane[7:0]
  TRAIN_PARA_0.BT.B0 = 0x14; //00010100, vref_res_high_thres_lane[7:0]
  TRAIN_PARA_0.BT.B1 = 0x28; //00101000, vref_res_low_thres_lane[7:0]
  TRAIN_PARA_0.BT.B2 = 0x37; //00110111, dfe_res_f0a_high_thres_init_56g_intercept_lane[7:0]
  TRAIN_PARA_0.BT.B3 = 0x37; //00110111, dfe_res_f0a_high_thres_init_pam2_intercept_lane[7:0]
//CAL_SAVE0.BT.B0 = 0x0; //00000000, cal_ts_lccap_msb_index_rate0[7:0]
//CAL_SAVE0.BT.B1 = 0x0; //00000000, cal_ts_lccap_msb_index_rate1[7:0]
//CAL_SAVE0.BT.B2 = 0x0; //00000000, cal_ts_lccap_msb_index_rate2[7:0]
//CAL_SAVE0.BT.B3 = 0x0; //00000000, cal_ts_lccap_lsb_index_rate0[7:0]
//CAL_SAVE1.BT.B0 = 0x0; //00000000, cal_ts_lccap_lsb_index_rate1[7:0]
//CAL_SAVE1.BT.B1 = 0x0; //00000000, cal_ts_lccap_lsb_index_rate2[7:0]
//CAL_SAVE1.BT.B2 = 0x0; //00000000, cal_ts_lccap_ulsb_rate0[7:0]
//CAL_SAVE1.BT.B3 = 0x0; //00000000, cal_ts_lccap_ulsb_rate1[7:0]
//CAL_SAVE2.BT.B0 = 0x0; //00000000, cal_ts_lccap_ulsb_rate2[7:0]
//CAL_SAVE2.BT.B1 = 0x0; //00000000, cal_ts_pllamp_rate0[7:0]
//CAL_SAVE2.BT.B2 = 0x0; //00000000, cal_ts_pllamp_rate1[7:0]
//CAL_SAVE2.BT.B3 = 0x0; //00000000, cal_ts_pllamp_rate2[7:0]
//CAL_SAVE3.BT.B0 = 0x0; //00000000, cal_ts_plldcc_result_rate0[7:0]
//CAL_SAVE3.BT.B1 = 0x0; //00000000, cal_ts_plldcc_result_rate1[7:0]
//CAL_SAVE3.BT.B2 = 0x0; //00000000, cal_ts_plldcc_result_rate2[7:0]
//CAL_SAVE3.BT.B3 = 0x0; //00000000, cal_ts_pllvdda_fbdiv_result_rate0[7:0]
//CAL_SAVE4.BT.B0 = 0x0; //00000000, cal_ts_pllvdda_fbdiv_result_rate1[7:0]
//CAL_SAVE4.BT.B1 = 0x0; //00000000, cal_ts_pllvdda_fbdiv_result_rate2[7:0]
//CAL_SAVE4.BT.B2 = 0x0; //00000000, cal_ts_pllvdda_intp_result_rate0[7:0]
//CAL_SAVE4.BT.B3 = 0x0; //00000000, cal_ts_pllvdda_intp_result_rate1[7:0]
//CAL_SAVE5.BT.B0 = 0x0; //00000000, cal_ts_pllvdda_intp_result_rate2[7:0]
//CAL_SAVE5.BT.B1 = 0x0; //00000000, cal_ts_pllvdda_pfd_result_rate0[7:0]
//CAL_SAVE5.BT.B2 = 0x0; //00000000, cal_ts_pllvdda_pfd_result_rate1[7:0]
//CAL_SAVE5.BT.B3 = 0x0; //00000000, cal_ts_pllvdda_pfd_result_rate2[7:0]
//CAL_SAVE6.BT.B0 = 0x0; //00000000, cal_rs_lccap_msb_index_rate0[7:0]
//CAL_SAVE6.BT.B1 = 0x0; //00000000, cal_rs_lccap_msb_index_rate1[7:0]
//CAL_SAVE6.BT.B2 = 0x0; //00000000, cal_rs_lccap_msb_index_rate2[7:0]
//CAL_SAVE6.BT.B3 = 0x0; //00000000, cal_rs_lccap_lsb_index_rate0[7:0]
//CAL_SAVE7.BT.B0 = 0x0; //00000000, cal_rs_lccap_lsb_index_rate1[7:0]
//CAL_SAVE7.BT.B1 = 0x0; //00000000, cal_rs_lccap_lsb_index_rate2[7:0]
//CAL_SAVE7.BT.B2 = 0x0; //00000000, cal_rs_lccap_ulsb_rate0[7:0]
//CAL_SAVE7.BT.B3 = 0x0; //00000000, cal_rs_lccap_ulsb_rate1[7:0]
//CAL_SAVE8.BT.B0 = 0x0; //00000000, cal_rs_lccap_ulsb_rate2[7:0]
//CAL_SAVE8.BT.B1 = 0x0; //00000000, cal_rs_pllamp_rate0[7:0]
//CAL_SAVE8.BT.B2 = 0x0; //00000000, cal_rs_pllamp_rate1[7:0]
//CAL_SAVE8.BT.B3 = 0x0; //00000000, cal_rs_pllamp_rate2[7:0]
//CAL_SAVE9.BT.B0 = 0x0; //00000000, cal_rs_plldcc_result_rate0[7:0]
//CAL_SAVE9.BT.B1 = 0x0; //00000000, cal_rs_plldcc_result_rate1[7:0]
//CAL_SAVE9.BT.B2 = 0x0; //00000000, cal_rs_plldcc_result_rate2[7:0]
//CAL_SAVE9.BT.B3 = 0x0; //00000000, cal_rs_pllvdda_fbdiv_result_rate0[7:0]
//CAL_SAVE10.BT.B0 = 0x0; //00000000, cal_rs_pllvdda_fbdiv_result_rate1[7:0]
//CAL_SAVE10.BT.B1 = 0x0; //00000000, cal_rs_pllvdda_fbdiv_result_rate2[7:0]
//CAL_SAVE10.BT.B2 = 0x0; //00000000, cal_rs_pllvdda_intp_result_rate0[7:0]
//CAL_SAVE10.BT.B3 = 0x0; //00000000, cal_rs_pllvdda_intp_result_rate1[7:0]
//CAL_SAVE11.BT.B0 = 0x0; //00000000, cal_rs_pllvdda_intp_result_rate2[7:0]
//CAL_SAVE11.BT.B1 = 0x0; //00000000, cal_rs_pllvdda_pfd_result_rate0[7:0]
//CAL_SAVE11.BT.B2 = 0x0; //00000000, cal_rs_pllvdda_pfd_result_rate1[7:0]
//CAL_SAVE11.BT.B3 = 0x0; //00000000, cal_rs_pllvdda_pfd_result_rate2[7:0]
//CAL_SAVE12.BT.B0 = 0x0; //00000000, cal_tx_dcc1_g0[7:0]
//CAL_SAVE12.BT.B1 = 0x0; //00000000, cal_tx_dcc1_g1[7:0]
//CAL_SAVE12.BT.B2 = 0x0; //00000000, cal_tx_dcc1_g2[7:0]
//CAL_SAVE12.BT.B3 = 0x0; //00000000, cal_tx_dcc1_g3[7:0]
//CAL_SAVE13.BT.B0 = 0x0; //00000000, cal_tx_dcc1_g4[7:0]
//CAL_SAVE13.BT.B1 = 0x0; //00000000, cal_tx_dcc2_g0[7:0]
//CAL_SAVE13.BT.B2 = 0x0; //00000000, cal_tx_dcc2_g1[7:0]
//CAL_SAVE13.BT.B3 = 0x0; //00000000, cal_tx_dcc2_g2[7:0]
//CAL_SAVE14.BT.B0 = 0x0; //00000000, cal_tx_dcc2_g3[7:0]
//CAL_SAVE14.BT.B1 = 0x0; //00000000, cal_tx_dcc2_g4[7:0]
//CAL_SAVE14.BT.B2 = 0x0; //00000000, cal_tx_dcc4_msb_g0[7:0]
//CAL_SAVE14.BT.B3 = 0x0; //00000000, cal_tx_dcc4_msb_g1[7:0]
//CAL_SAVE15.BT.B0 = 0x0; //00000000, cal_tx_dcc4_msb_g2[7:0]
//CAL_SAVE15.BT.B1 = 0x0; //00000000, cal_tx_dcc4_msb_g3[7:0]
//CAL_SAVE15.BT.B2 = 0x0; //00000000, cal_tx_dcc4_msb_g4[7:0]
//CAL_SAVE15.BT.B3 = 0x0; //00000000, cal_tx_dcc4_lsb_g0[7:0]
//CAL_SAVE16.BT.B0 = 0x0; //00000000, cal_tx_dcc4_lsb_g1[7:0]
//CAL_SAVE16.BT.B1 = 0x0; //00000000, cal_tx_dcc4_lsb_g2[7:0]
//CAL_SAVE16.BT.B2 = 0x0; //00000000, cal_tx_dcc4_lsb_g3[7:0]
//CAL_SAVE16.BT.B3 = 0x0; //00000000, cal_tx_dcc4_lsb_g4[7:0]
//CAL_SAVE17.BT.B0 = 0x0; //00000000, cal_tx_imp_iccp_g0[7:0]
//CAL_SAVE17.BT.B1 = 0x0; //00000000, cal_tx_imp_iccp_g1[7:0]
//CAL_SAVE17.BT.B2 = 0x0; //00000000, cal_tx_imp_iccp_g2[7:0]
//CAL_SAVE17.BT.B3 = 0x0; //00000000, cal_tx_imp_iccp_g3[7:0]
//CAL_SAVE18.BT.B0 = 0x0; //00000000, cal_tx_imp_iccp_g4[7:0]
//CAL_SAVE18.BT.B1 = 0x0; //00000000, cal_tx_imp_iccn_g0[7:0]
//CAL_SAVE18.BT.B2 = 0x0; //00000000, cal_tx_imp_iccn_g1[7:0]
//CAL_SAVE18.BT.B3 = 0x0; //00000000, cal_tx_imp_iccn_g2[7:0]
//CAL_SAVE19.BT.B0 = 0x0; //00000000, cal_tx_imp_iccn_g3[7:0]
//CAL_SAVE19.BT.B1 = 0x0; //00000000, cal_tx_imp_iccn_g4[7:0]
//CAL_SAVE19.BT.B2 = 0x0; //00000000, cal_rx_e2c_dcc_g0[7:0]
//CAL_SAVE19.BT.B3 = 0x0; //00000000, cal_rx_e2c_dcc_g1[7:0]
//CAL_SAVE20.BT.B0 = 0x0; //00000000, cal_rx_e2c_dcc_g2[7:0]
//CAL_SAVE20.BT.B1 = 0x0; //00000000, cal_rx_e2c_dcc_g3[7:0]
//CAL_SAVE20.BT.B2 = 0x0; //00000000, cal_rx_e2c_dcc_g4[7:0]
//CAL_SAVE20.BT.B3 = 0x0; //00000000, cal_rx_dll_msb_g0[7:0]
//CAL_SAVE21.BT.B0 = 0x0; //00000000, cal_rx_dll_msb_g1[7:0]
//CAL_SAVE21.BT.B1 = 0x0; //00000000, cal_rx_dll_msb_g2[7:0]
//CAL_SAVE21.BT.B2 = 0x0; //00000000, cal_rx_dll_msb_g3[7:0]
//CAL_SAVE21.BT.B3 = 0x0; //00000000, cal_rx_dll_msb_g4[7:0]
//CAL_SAVE22.BT.B0 = 0x0; //00000000, cal_rx_dll_lsb_g0[7:0]
//CAL_SAVE22.BT.B1 = 0x0; //00000000, cal_rx_dll_lsb_g1[7:0]
//CAL_SAVE22.BT.B2 = 0x0; //00000000, cal_rx_dll_lsb_g2[7:0]
//CAL_SAVE22.BT.B3 = 0x0; //00000000, cal_rx_dll_lsb_g3[7:0]
//CAL_SAVE23.BT.B0 = 0x0; //00000000, cal_rx_dll_lsb_g4[7:0]
//CAL_SAVE23.BT.B1 = 0x0; //00000000, cal_rx_pi_dcc_g0[7:0]
//CAL_SAVE23.BT.B2 = 0x0; //00000000, cal_rx_pi_dcc_g1[7:0]
//CAL_SAVE23.BT.B3 = 0x0; //00000000, cal_rx_pi_dcc_g2[7:0]
//CAL_SAVE24.BT.B0 = 0x0; //00000000, cal_rx_pi_dcc_g3[7:0]
//CAL_SAVE24.BT.B1 = 0x0; //00000000, cal_rx_pi_dcc_g4[7:0]
//CAL_SAVE24.BT.B2 = 0x0; //00000000, cal_rx_align90_msb_g0[7:0]
//CAL_SAVE24.BT.B3 = 0x0; //00000000, cal_rx_align90_msb_g1[7:0]
//CAL_SAVE25.BT.B0 = 0x0; //00000000, cal_rx_align90_msb_g2[7:0]
//CAL_SAVE25.BT.B1 = 0x0; //00000000, cal_rx_align90_msb_g3[7:0]
//CAL_SAVE25.BT.B2 = 0x0; //00000000, cal_rx_align90_msb_g4[7:0]
//CAL_SAVE25.BT.B3 = 0x0; //00000000, cal_rx_align90_lsb_g0[7:0]
//CAL_SAVE26.BT.B0 = 0x0; //00000000, cal_rx_align90_lsb_g1[7:0]
//CAL_SAVE26.BT.B1 = 0x0; //00000000, cal_rx_align90_1sb_g2[7:0]
//CAL_SAVE26.BT.B2 = 0x0; //00000000, cal_rx_align90_1sb_g3[7:0]
//CAL_SAVE26.BT.B3 = 0x0; //00000000, cal_rx_align90_lsb_g4[7:0]
//CAL_SAVE27.BT.B0 = 0x0; //00000000, cal_rx_data_dcc_msb_g0[7:0]
//CAL_SAVE27.BT.B1 = 0x0; //00000000, cal_rx_data_dcc_msb_g1[7:0]
//CAL_SAVE27.BT.B2 = 0x0; //00000000, cal_rx_data_dcc_msb_g2[7:0]
//CAL_SAVE27.BT.B3 = 0x0; //00000000, cal_rx_data_dcc_msb_g3[7:0]
//CAL_SAVE28.BT.B0 = 0x0; //00000000, cal_rx_data_dcc_msb_g4[7:0]
//CAL_SAVE28.BT.B1 = 0x0; //00000000, cal_rx_data_dcc_lsb_g0[7:0]
//CAL_SAVE28.BT.B2 = 0x0; //00000000, cal_rx_data_dcc_lsb_g1[7:0]
//CAL_SAVE28.BT.B3 = 0x0; //00000000, cal_rx_data_dcc_lsb_g2[7:0]
//CAL_SAVE29.BT.B0 = 0x0; //00000000, cal_rx_data_dcc_lsb_g3[7:0]
//CAL_SAVE29.BT.B1 = 0x0; //00000000, cal_rx_data_dcc_lsb_g4[7:0]
//CAL_SAVE29.BT.B2 = 0x0; //00000000, cal_rx_edge_dcc_msb_g0[7:0]
//CAL_SAVE29.BT.B3 = 0x0; //00000000, cal_rx_edge_dcc_msb_g1[7:0]
//CAL_SAVE30.BT.B0 = 0x0; //00000000, cal_rx_edge_dcc_msb_g2[7:0]
//CAL_SAVE30.BT.B1 = 0x0; //00000000, cal_rx_edge_dcc_msb_g3[7:0]
//CAL_SAVE30.BT.B2 = 0x0; //00000000, cal_rx_edge_dcc_msb_g4[7:0]
//CAL_SAVE30.BT.B3 = 0x0; //00000000, cal_rx_edge_dcc_lsb_g0[7:0]
//CAL_SAVE31.BT.B0 = 0x0; //00000000, cal_rx_edge_dcc_lsb_g1[7:0]
//CAL_SAVE31.BT.B1 = 0x0; //00000000, cal_rx_edge_dcc_lsb_g2[7:0]
//CAL_SAVE31.BT.B2 = 0x0; //00000000, cal_rx_edge_dcc_lsb_g3[7:0]
//CAL_SAVE31.BT.B3 = 0x0; //00000000, cal_rx_edge_dcc_lab_g4[7:0]
//CAL_SAVE32.BT.B0 = 0x0; //00000000, cal_rx_eom_dll_msb_g0[7:0]
//CAL_SAVE32.BT.B1 = 0x0; //00000000, cal_rx_eom_dll_msb_g1[7:0]
//CAL_SAVE32.BT.B2 = 0x0; //00000000, cal_rx_eom_dll_msb_g2[7:0]
//CAL_SAVE32.BT.B3 = 0x0; //00000000, cal_rx_eom_dll_msb_g3[7:0]
//CAL_SAVE33.BT.B0 = 0x0; //00000000, cal_rx_eom_dll_msb_g4[7:0]
//CAL_SAVE33.BT.B1 = 0x0; //00000000, cal_rx_eom_dll_lsb_g0[7:0]
//CAL_SAVE33.BT.B2 = 0x0; //00000000, cal_rx_eom_dll_lsb_g1[7:0]
//CAL_SAVE33.BT.B3 = 0x0; //00000000, cal_rx_eom_dll_lsb_g2[7:0]
//CAL_SAVE34.BT.B0 = 0x0; //00000000, cal_rx_eom_dll_lsb_g3[7:0]
//CAL_SAVE34.BT.B1 = 0x0; //00000000, cal_rx_eom_dll_lsb_g4[7:0]
//CAL_SAVE34.BT.B2 = 0x0; //00000000, cal_rx_eom_pi_msb_g0[7:0]
//CAL_SAVE34.BT.B3 = 0x0; //00000000, cal_rx_eom_pi_msb_g1[7:0]
//CAL_SAVE35.BT.B0 = 0x0; //00000000, cal_rx_eom_pi_msb_g2[7:0]
//CAL_SAVE35.BT.B1 = 0x0; //00000000, cal_rx_eom_pi_msb_g3[7:0]
//CAL_SAVE35.BT.B2 = 0x0; //00000000, cal_rx_eom_pi_msb_g4[7:0]
//CAL_SAVE35.BT.B3 = 0x0; //00000000, cal_rx_eom_pi_lsb_g0[7:0]
//CAL_SAVE36.BT.B0 = 0x0; //00000000, cal_rx_eom_pi_lsb_g1[7:0]
//CAL_SAVE36.BT.B1 = 0x0; //00000000, cal_rx_eom_pi_lsb_g2[7:0]
//CAL_SAVE36.BT.B2 = 0x0; //00000000, cal_rx_eom_pi_lsb_g3[7:0]
//CAL_SAVE36.BT.B3 = 0x0; //00000000, cal_rx_eom_pi_lsb_g4[7:0]
//CAL_SAVE37.BT.B0 = 0x0; //00000000, cal_rx_eom_pi_dcc_g0[7:0]
//CAL_SAVE37.BT.B1 = 0x0; //00000000, cal_rx_eom_pi_dcc_g1[7:0]
//CAL_SAVE37.BT.B2 = 0x0; //00000000, cal_rx_eom_pi_dcc_g2[7:0]
//CAL_SAVE37.BT.B3 = 0x0; //00000000, cal_rx_eom_pi_dcc_g3[7:0]
//CAL_SAVE38.BT.B0 = 0x0; //00000000, cal_rx_eom_pi_dcc_g4[7:0]
  TRAIN_PARA_2.BT.B0 = 0xBF; //10111111, phase_train_init_en_lane, gain_train_end_en_lane, gain_train_init_en_lane, dis_dfe_res_f0_gain_train_lane, dfe_res_res_f0_ini_lane[1:0], dfe_res_vref_ini_lane[1:0]
  TRAIN_PARA_2.BT.B1 = 0x28; //00101000, dfe_f0_res_thrs_lane[7:0]
  TRAIN_PARA_2.BT.B2 = 0x7; //00000111, dc_vref_adj_dfe_lpnum_lane[15:0]
  TRAIN_PARA_2.BT.B3 = 0xF; //00001111, dc_vref_adj_dfe_lpnum_lane[15:0]
  TRAIN_PARA_3.BT.B0 = 0xE0; //11100000, align90_vref_max_lane[7:0]
  TRAIN_PARA_3.BT.B1 = 0x2; //00000010, ctle_adapt_r2p0_en_lane, bypass_rl2_train_lane, force_ctle_rl2_tune_en_lane, force_ctle_rl2_tune_train_en_lane, force_ctle_rl2_tune_track_en_lane, ctle_c1_adapt_en_lane, dc_vref_adj_en_lane, rx_tracking_enable_lane
  TRAIN_PARA_3.BT.B2 = 0x32; //00110010, ctle_adapt_time_lane[7:0]
  TRAIN_PARA_3.BT.B3 = 0x28; //00101000, dc_vref_adj_trans_lpnum_lane[7:0]
//TRAIN_PARA_4.BT.B0 = 0x0; //00000000, track_ctle_vref_thrs_lane[7:0]
  TRAIN_PARA_4.BT.B1 = 0x14; //00010100, track_ctle_f0b_thrs_lane[7:0]
  TRAIN_PARA_4.BT.B2 = 0x32; //00110010, ctle_c1_adapt_time_lane[7:0]
  TRAIN_PARA_4.BT.B3 = 0x3F; //00111111, adapt_f0b_vote_num_lane[7:0]
//TRAIN_PARA_5.BT.B1 = 0x0; //00000000, opt_vref_lane[7:0]
  TRAIN_PARA_5.BT.B2 = 0x8; //00001000, force_ctle_rl2_tune_track_index_lane[1:0], force_ctle_rl2_tune_train_index_lane[2:0], force_ctle_rl2_tune_g_lane[2:0]
//TRAIN_PARA_5.BT.B3 = 0x0; //00000000, adapt_c1_inx_lane[7:0]
//TRAIN_PARA_6.BT.B0 = 0x0; //00000000, norm_f0b_lane[7:0]
  TRAIN_PARA_6.BT.B1 = 0x32; //00110010, phase_adapt_time_lane[7:0]
  TRAIN_PARA_6.BT.B2 = 0x8; //00001000, phase_adapt_lpnum_lane[7:0]
  TRAIN_PARA_6.BT.B3 = 0x2; //00000010, phase_f0b_hyst_low_lane[7:0]
  TRAIN_SAVE_0.BT.B0 = 0xA; //00001010, phase_f0b_hyst_high_lane[7:0]
//TRAIN_SAVE_0.BT.B1 = 0x0; //00000000, phase_fn1_thres_lane[7:0]
  TRAIN_SAVE_0.BT.B2 = 0x1; //00000001, phase_f1_thres1_lane[7:0]
  TRAIN_SAVE_0.BT.B3 = 0x3; //00000011, phase_f1_thres3_lane[7:0]
//TRAIN_SAVE_1.BT.B0 = 0x0; //00000000, opt_f0a_max_lane[7:0]
//TRAIN_SAVE_1.BT.B1 = 0x0; //00000000, opt_f0a_max_data_lane[7:0]
//TRAIN_SAVE_1.BT.B2 = 0x0; //00000000, opt_f0a_max_slicer_lane[7:0]
//TRAIN_SAVE_1.BT.B3 = 0x0; //00000000, opt_f0a_lane[7:0]
//TRAIN_SAVE_2.BT.B0 = 0x0; //00000000, opt_f0a_data_lane[7:0]
//TRAIN_SAVE_2.BT.B1 = 0x0; //00000000, opt_f0a_slicer_lane[7:0]
//TRAIN_SAVE_2.BT.B2 = 0x0; //00000000, opt_f0b_lane[7:0]
//TRAIN_SAVE_2.BT.B3 = 0x0; //00000000, opt_f0k_lane[7:0]
//TRAIN_SAVE_3.BT.B0 = 0x0; //00000000, opt_f0_slicer_lane[7:0]
//TRAIN_SAVE_3.BT.B1 = 0x0; //00000000, opt_f1_lane[7:0]
//TRAIN_SAVE_3.BT.B2 = 0x0; //00000000, opt_f2_lane[7:0]
//TRAIN_SAVE_3.BT.B3 = 0x0; //00000000, opt_f3_lane[7:0]
//TRAIN_SAVE_4.BT.B0 = 0x0; //00000000, opt_f4_lane[7:0]
//TRAIN_SAVE_4.BT.B1 = 0x0; //00000000, opt_f5_lane[7:0]
//TRAIN_SAVE_4.BT.B2 = 0x0; //00000000, opt_f6_lane[7:0]
//TRAIN_SAVE_4.BT.B3 = 0x0; //00000000, opt_f7_lane[7:0]
//TRAIN_SAVE_6.BT.B1 = 0x0; //00000000, opt_fn1_lane[7:0]
//TRAIN_SAVE_6.BT.B2 = 0x0; //00000000, opt_fn2_lane[7:0]
//TRAIN_SAVE_6.BT.B3 = 0x0; //00000000, opt_f0t_lane[7:0]
//TRAIN_SAVE_7.BT.B0 = 0x0; //00000000, opt_eo_lane[7:0]
//TRAIN_SAVE_7.BT.B3 = 0x0; //00000000, opt_phase_data_lane[7:0]
//TRAIN_SAVE_8.BT.B1 = 0x0; //00000000, opt_r_index_lane[7:0]
//TRAIN_SAVE_8.BT.B2 = 0x0; //00000000, opt_c_index_lane[7:0]
  TS_PLL_VCO_AMP.BT.B0 = 0x6; //00000110, ts_tempc_mux_hold_sel_2c_lane[7:0]
  TS_PLL_VCO_AMP.BT.B1 = 0x5; //00000101, ts_tempc_mux_sel_2c_lane[7:0]
//TS_PLL_VCO_AMP.BT.B2 = 0x0; //00000000, ts_tempc_dac_sel_lane[7:0]
  TS_PLL_VCO_AMP.BT.B3 = 0x5; //00000101, ts_vcoamp_vth_amp_lane[7:0]
  RS_PLL_VCO_AMP.BT.B0 = 0x6; //00000110, rs_tempc_mux_hold_sel_2c_lane[7:0]
  RS_PLL_VCO_AMP.BT.B1 = 0x5; //00000101, rs_tempc_mux_sel_2c_lane[7:0]
//RS_PLL_VCO_AMP.BT.B2 = 0x0; //00000000, rs_tempc_dac_sel_lane[7:0]
  RS_PLL_VCO_AMP.BT.B3 = 0x5; //00000101, rs_vcoamp_vth_amp_lane[7:0]
//CLI_TIME.BT.B0 = 0x0; //00000000, cli_time_lane[31:0]
//CLI_TIME.BT.B1 = 0x0; //00000000, cli_time_lane[31:0]
//CLI_TIME.BT.B2 = 0x0; //00000000, cli_time_lane[31:0]
//CLI_TIME.BT.B3 = 0x0; //00000000, cli_time_lane[31:0]
}
