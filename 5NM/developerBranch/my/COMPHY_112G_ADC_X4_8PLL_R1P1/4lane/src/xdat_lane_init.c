#include "common.h"
#ifdef USE_BANKING
#pragma codeseg BANK3
#endif
void xdat_lane_init () BANKING_CTRL {
//CAL_CTRL1_LANE.BT.B0 = 0x0; //00000000, rxdcc_data_cal_done_lane, rx_clk_cal_done_lane, txdetect_cal_done_lane, dll_eom_vdata_cal_done_lane, dll_cal_done_lane, sq_thresh_cal_done_lane, dll_gm_cal_done_lane, dll_comp_cal_done_lane
//CAL_CTRL1_LANE.BT.B1 = 0x0; //00000000, vdd_cal_done_lane, rximp_cal_done_lane, tximp_cal_done_lane, sampler_res_cal_done_lane, sampler_cal_done_lane, eom_align_cal_done_lane, rxalign90_cal_done_lane, rx_eom_cal_done_lane
//CAL_CTRL1_LANE.BT.B2 = 0x0; //#0000000, adc_vddr_cal_done_lane, adc_cmn_mode_cal_done_lane, adc_cal_done_lane, align90_comp_cal_done_lane, sq_ofst_cal_done_lane, txdcc_pdiv_cal_done_lane, txdcc_cal_done_lane
//CAL_CTRL1_LANE.BT.B3 = 0x0; //#000000#, load_rx_speedtbl_done_lane, load_tx_speedtbl_done_lane, load_speedtbl_done_lane, cal_done_lane, tx_cal_done_lane, rx_cal_done_lane
//CAL_CTRL2_LANE.BT.B0 = 0x0; //00000000, rxdcc_data_cal_pass_lane, rx_clk_cal_pass_lane, txdetect_cal_pass_lane, dll_eom_vdata_cal_pass_lane, dll_cal_pass_lane, sq_thresh_cal_pass_lane, dll_gm_cal_pass_lane, dll_comp_cal_pass_lane
//CAL_CTRL2_LANE.BT.B1 = 0x0; //00000000, tximp_cal_pass_lane, sampler_cal_pass_lane, eom_eomdat_cal_pass_lane, eom_eomedg_fine_cal_pass_lane, eom_eomedg_coarse_cal_pass_lane, eom_dac_cal_pass_lane, rxalign90_cal_pass_lane, rx_eom_cal_pass_lane
//CAL_CTRL2_LANE.BT.B2 = 0x0; //00000000, sellv_txdata_pass_lane, sellv_txclk_pass_lane, sq_ofst_cal_pass_lane, txdcc_cal_pass_lane, align90_tracking_pass_lane, align90_comp_pass_lane, vdd_cal_pass_lane, rximp_cal_pass_lane
//CAL_CTRL2_LANE.BT.B3 = 0x0; //00000000, sellv_rx_clktopvddl_pass_lane, sellv_rx_thdrv_pass_lane, txdcc_pdiv_cal_pass_lane, sellv_rx_thclk_sampler_pass_lane, sellv_rx_skew_eomclk_pass_lane, sellv_rx_a90_dataclk_pass_lane, sellv_rxintp_pass_lane, sellv_rxdll_pass_lane
//CAL_CTRL3_LANE.BT.B0 = 0x0; //00000000, load_cal_on_lane[7:0]
//CAL_CTRL3_LANE.BT.B1 = 0x0; //00000000, pllcal_on_lane[7:0]
//CAL_CTRL3_LANE.BT.B2 = 0x0; //00000000, rximp_cal_timeout_lane, tximp_cal_timeout_lane, dll_vdda_tracking_on_lane, txdcc_cal_stop_sel_lane, cal_vdd_continuous_mode_en_lane, rxdcc_data_cal_stop_sel_lane, rxdcc_eom_cal_stop_sel_lane, rxdcc_dll_cal_stop_sel_lane
//CAL_CTRL3_LANE.BT.B3 = 0x0; //000000##, sellv_rx_ctle_pass_lane, sellv_rx_div2_pass_lane, sellv_rx_intpeom_dlleom_pass_lane, adc_cal_pass_lane, adc_cmn_mode_cal_pass_lane, adc_vddr_cal_pass_lane
//CAL_CTRL4_LANE.BT.B0 = 0x0; //00000000, sampler_cal_avg_mode_lane[7:0]
  CAL_CTRL4_LANE.BT.B1 = 0x3; //00000011, sampler_sample_size_lane[7:0]
//CAL_CTRL4_LANE.BT.B2 = 0x0; //00000000, rx_pll_rate_lane[7:0]
//CAL_CTRL4_LANE.BT.B3 = 0x0; //00000000, tx_pll_rate_lane[7:0]
//PLL_RS_CAL_CTRL_LANE.BT.B0 = 0x0; //00000000, pll_rs_speed_thresh_lane[15:0]
//PLL_RS_CAL_CTRL_LANE.BT.B1 = 0x0; //00000000, pll_rs_speed_thresh_lane[15:0]
//PLL_RS_CAL_CTRL_LANE.BT.B2 = 0x0; //###00000, rx_pll_rate_sel_lane[4:0]
//PLL_RS_CAL_CTRL_LANE.BT.B3 = 0x0; //###00000, tx_pll_rate_sel_lane[4:0]
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
//CAL_SAVE_DATA4_LANE.BT.B0 = 0x0; //00000000, cal_ofst_d_top_e_lane[7:0]
//CAL_SAVE_DATA4_LANE.BT.B1 = 0x0; //00000000, cal_ofst_d_mid_e_lane[7:0]
//CAL_SAVE_DATA4_LANE.BT.B2 = 0x0; //00000000, cal_ofst_d_bot_e_lane[7:0]
//CAL_SAVE_DATA4_LANE.BT.B3 = 0x0; //00000000, cal_ofst_d_top_o_lane[7:0]
//CAL_SAVE_DATA5_LANE.BT.B0 = 0x0; //00000000, cal_ofst_d_mid_o_lane[7:0]
//CAL_SAVE_DATA5_LANE.BT.B1 = 0x0; //00000000, cal_ofst_d_bot_o_lane[7:0]
//CAL_SAVE_DATA5_LANE.BT.B2 = 0x0; //00000000, cal_ofst_s_top_e_lane[7:0]
//CAL_SAVE_DATA5_LANE.BT.B3 = 0x0; //00000000, cal_ofst_s_mid_e_lane[7:0]
//CAL_SAVE_DATA6_LANE.BT.B0 = 0x0; //00000000, cal_ofst_s_bot_e_lane[7:0]
//CAL_SAVE_DATA6_LANE.BT.B1 = 0x0; //00000000, cal_ofst_s_top_o_lane[7:0]
//CAL_SAVE_DATA6_LANE.BT.B2 = 0x0; //00000000, cal_ofst_s_mid_o_lane[7:0]
//CAL_SAVE_DATA6_LANE.BT.B3 = 0x0; //00000000, cal_ofst_s_bot_o_lane[7:0]
//CAL_SAVE_DATA7_LANE.BT.B0 = 0x0; //00000000, cal_ofst_edge_e_lane[7:0]
//CAL_SAVE_DATA7_LANE.BT.B1 = 0x0; //00000000, cal_ofst_edge_o_lane[7:0]
//CAL_SAVE_DATA7_LANE.BT.B2 = 0x0; //00000000, cal_sampler_res_lane[7:0]
  TRX_TRAIN_IF_TIMERS1_LANE.BT.B3 = 0x3; //00000011, tx_train_status_det_timer_lane[7:0]
  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BT.B3 = 0xF0; //111100##, tx_train_status_det_timer_enable_lane, rx_train_timer_enable_lane, tx_train_timer_enable_lane, tx_train_frame_det_timer_enable_lane, frame_lock_sel_timeout_lane, tx_train_status_det_timeout_int_lane
//TRX_TRAINING_TOP_CTRL_0.BT.B0 = 0x0; //00000000, trx_train_final_tuning_bypass_en_lane, trx_train_opt_bypass_en_lane, tx_train_txffe_set_pre_bypass_en_lane, trx_train_sweep_coarse_ctle_bypass_en_lane, trx_train_lock_cdr_bypass_en_lane, tx_train_ffe_det_pre_bypass_en_lane, rx_train_blind_bypass_en_lane, trx_train_sat_check_bypass_en_lane
//TRX_TRAINING_TOP_CTRL_0.BT.B1 = 0x0; //####0000, trx_train_adc_cal_bypass_en_lane, trx_train_exit_bypass_en_lane, trx_final_tune_bypass_en_lane, trx_train_init_bypass_en_lane
  TRX_TRAINING_TOP_CTRL_0.BT.B2 = 0xFE; //1111111#, trx_train_trx_opt_en_lane, trx_train_dfe_opt_en_lane, trx_train_flt_opt_en_lane, trx_train_agc_en_lane, trx_train_adc_cal_gao_en_lane, trx_train_adc_cal_skew_en_lane, tx_train_p2p_hold_lane
  TRX_TRAINING_TOP_CTRL_0.BT.B3 = 0x16; //00010110, trx_train_debug_en_lane, pause_lane, trx_train_txffe_preset_ext_en_lane, trx_train_tx_train_en_lane, trx_train_txffe_preset_ext_lane[2:0], tx_train_only_start_lane
  TRX_TRAINING_TOP_CTRL_1.BT.B0 = 0x64; //01100100, trx_train_ctle_c_max_lane[7:0]
//TRX_TRAINING_TOP_CTRL_1.BT.B1 = 0x0; //00000000, trx_train_ctle_c_min_lane[7:0]
  TRX_TRAINING_TOP_CTRL_1.BT.B2 = 0x9; //###01001, trx_train_ctle_r_max_lane[4:0]
//TRX_TRAINING_TOP_CTRL_1.BT.B3 = 0x0; //###00000, trx_train_ctle_r_min_lane[4:0]
  TRX_TRAINING_TOP_CTRL_2.BT.B0 = 0x19; //##011001, trx_train_dfe_stop_val_lane[5:0]
//TRX_TRAINING_TOP_CTRL_2.BT.B1 = 0x0; //##000000, trx_train_dfe_start_val_lane[5:0]
  TRX_TRAINING_TOP_CTRL_2.BT.B2 = 0x5; //00000101, trx_train_ctle_gc_min_lane[3:0], trx_train_ctle_gc_max_lane[3:0]
  TRX_TRAINING_TOP_CTRL_3.BT.B0 = 0xE0; //11100000, trx_train_snr_dtl_check_lane[15:0]
//TRX_TRAINING_TOP_CTRL_3.BT.B1 = 0x0; //00000000, trx_train_snr_dtl_check_lane[15:0]
  TRX_TRAINING_TOP_CTRL_3.BT.B2 = 0x6; //####0110, trx_train_snr_len_lane[3:0]
  TRAIN_INITIALIZATION.BT.B0 = 0x3; //######11, trx_train_init_adc_cal_gao_reset_lane, trx_train_init_adc_cal_skew_reset_lane
//TRAIN_CONTROL_0.BT.B0 = 0x0; //00000000, midpoint_small_thres_c_lane[7:0]
//TRAIN_CONTROL_0.BT.B1 = 0x0; //00000000, midpoint_small_thres_k_lane[7:0]
//TRAIN_CONTROL_0.BT.B2 = 0x0; //00000000, midpoint_large_thres_c_lane[7:0]
//TRAIN_CONTROL_0.BT.B3 = 0x0; //00000000, midpoint_large_thres_k_lane[7:0]
//TRAIN_CONTROL_1.BT.B0 = 0x0; //00000000, ini_phase_offset_lane[7:0]
//TRAIN_CONTROL_1.BT.B1 = 0x0; //00000000, midpoint_phase_os_lane[7:0]
//TRAIN_CONTROL_1.BT.B2 = 0x0; //00000000, sumf_boost_target_c_lane[7:0]
//TRAIN_CONTROL_1.BT.B3 = 0x0; //00000000, sumf_boost_target_k_lane[7:0]
//TRAIN_CONTROL_2.BT.B0 = 0x0; //00000000, esm_phase_lane[9:0]
  TRAIN_CONTROL_2.BT.B1 = 0xC0; //11000000, tx_train_fail_int_lane, tx_train_complete_int_lane, esm_dfe_adapt_splr_en_lane[3:0], esm_phase_lane[9:0]
//TRAIN_CONTROL_2.BT.B2 = 0x0; //00000000, tx_adapt_g0_en_lane, tx_adapt_gn1_en_lane, tx_adapt_g1_en_lane, remote_multi_rsv_coe_req_err_int_lane, tx_train_remote_pattern_error_int_lane, esm_en_lane, tx_train_frame_lock_det_fail_int_lane, esm_path_sel_lane
//TRAIN_CONTROL_2.BT.B3 = 0x0; //00000000, rx_rxffe_r_ini_lane[3:0], rxffe_r_gain_train_lane[3:0]
//RPTA_CONFIG_0.BT.B0 = 0x0; //00000000, eom_conv_num_lane[15:0]
//RPTA_CONFIG_0.BT.B1 = 0x0; //00000000, eom_conv_num_lane[15:0]
//RPTA_CONFIG_0.BT.B2 = 0x0; //00000000, eom_adapt_step_size_lane[7:0]
//RPTA_CONFIG_0.BT.B3 = 0x0; //00000000, eom_clk_offset_2c_lane[7:0]
//RPTA_CONFIG_1.BT.B0 = 0x0; //00000000, data_clk_offset_2c_lane[7:0]
//RPTA_CONFIG_1.BT.B1 = 0x0; //00000000, f0d_thre_lane[7:0]
//RPTA_CONFIG_1.BT.B2 = 0x0; //00000000, ph_adapt_step_size_lane[7:0]
//RPTA_CONFIG_1.BT.B3 = 0x0; //00000000, ph_conv_num_lane[7:0]
//CLI_ARG.BT.B0 = 0x0; //00000000, cli_cmd_lane[7:0]
//CLI_ARG.BT.B1 = 0x0; //#######0, cli_start_lane
//CLI_ARG.BT.B2 = 0x0; //00000000, cli_args_lane[15:0]
//CLI_ARG.BT.B3 = 0x0; //00000000, cli_args_lane[15:0]
//MCU_COMMAND0_LANE.BT.B0 = 0x0; //00000000, mcu_command0_lane[31:0]
//MCU_COMMAND0_LANE.BT.B1 = 0x0; //00000000, mcu_command0_lane[31:0]
//MCU_COMMAND0_LANE.BT.B2 = 0x0; //00000000, mcu_command0_lane[31:0]
//MCU_COMMAND0_LANE.BT.B3 = 0x0; //00000000, mcu_command0_lane[31:0]
//CAL_STATUS_READ.BT.B0 = 0x0; //00000000, rx_pll_amp_cal_done_lane, tx_pll_amp_cal_done_lane, rx_pll_temp_cal_done_lane, tx_pll_temp_cal_done_lane, rx_pll_cal_done_lane, tx_pll_cal_done_lane, rx_plldcc_cal_done_lane, tx_plldcc_cal_done_lane
//CAL_STATUS_READ.BT.B1 = 0x0; //00000000, tx_pll_amp_cal_pass_lane, rx_pll_temp_cal_pass_lane, tx_pll_temp_cal_pass_lane, rx_pll_cal_pass_lane, tx_pll_cal_pass_lane, rx_pllvdda_cal_done_lane, tx_pllvdda_cal_done_lane, process_cal_done_lane
//CAL_STATUS_READ.BT.B2 = 0x0; //##000000, rx_pllvdda_cal_pass_lane, tx_pllvdda_cal_pass_lane, rx_plldcc_cal_pass_lane, tx_plldcc_cal_pass_lane, process_cal_pass_lane, rx_pll_amp_cal_pass_lane
//CHEST_LANE.BT.B0 = 0x0; //00000000, chest_val_out_lane[7:0]
//CHEST_LANE.BT.B1 = 0x0; //00000000, chest_val_out_lane[15:8]
//TXTRAIN_IF_REG0.BT.B0 = 0x0; //00000000, txtrain_ctrl_c0_lane[1:0], txtrain_ctrl_cn1_lane[1:0], txtrain_ctrl_cn2_lane[1:0], txtrain_ctrl_pat_lane[1:0]
//TXTRAIN_IF_REG0.BT.B1 = 0x0; //#0000000, txtrain_fail_lane, txtrain_ctrl_preset_lane[3:0], txtrain_ctrl_c1_lane[1:0]
//TXTRAIN_IF_REG0.BT.B2 = 0x0; //##000000, txtrain_status_cn1_lane[2:0], txtrain_status_cn2_lane[2:0]
//TXTRAIN_IF_REG0.BT.B3 = 0x0; //#0000000, txtrain_status_valid_lane, txtrain_status_c1_lane[2:0], txtrain_status_c0_lane[2:0]
//SYSTEM_CONFIG_0.BT.B0 = 0x0; //00000000, refclk_freq_rd_lane[15:0]
//SYSTEM_CONFIG_0.BT.B1 = 0x0; //00000000, refclk_freq_rd_lane[15:0]
//SYSTEM_CONFIG_0.BT.B2 = 0x0; //#0000000, rx_nt_mul_lane[1:0], pll_tsrs_switch_xdat_lane, pll_sel_lane[1:0], mcu_ctrl_pll_lane[1:0]
//SYSTEM_CONFIG_0.BT.B3 = 0x0; //00000000, rx_rate_2_pll_ratio_x8_lane[7:0]
//PLL_TS_CAL_CTRL_LANE.BT.B0 = 0x0; //00000000, pll_ts_speed_thresh_lane[15:0]
//PLL_TS_CAL_CTRL_LANE.BT.B1 = 0x0; //00000000, pll_ts_speed_thresh_lane[15:0]
  RX_TRAIN_SAT_CHK_CTRL_0.BT.B0 = 0xB8; //1#111000, rx_train_adc_sat_check_phase_scan_en_lane, rx_train_adc_sat_check_th2_lane[5:0]
  RX_TRAIN_SAT_CHK_CTRL_0.BT.B1 = 0x20; //##100000, rx_train_adc_sat_check_th1_lane[5:0]
  RX_TRAIN_SAT_CHK_CTRL_0.BT.B2 = 0x20; //00100000, rx_train_adc_sat_check_large_sig_th_lane[7:0]
  RX_TRAIN_SAT_CHK_CTRL_0.BT.B3 = 0x8; //00001000, rx_train_adc_sat_check_small_sig_th_lane[7:0]
//RX_TRAIN_SAT_CHK_CTRL_1.BT.B0 = 0x0; //00000000, rx_train_adc_sat_check_phase_scan_ppm_lane[15:0]
  RX_TRAIN_SAT_CHK_CTRL_1.BT.B1 = 0x80; //10000000, rx_train_adc_sat_check_phase_scan_ppm_lane[15:0]
  RX_TRAIN_SAT_CHK_CTRL_2.BT.B0 = 0x46; //#1000110, rx_train_adc_sat_check_nominal_signal_c_lane[6:0]
//RX_TRAIN_SAT_CHK_CTRL_2.BT.B1 = 0x0; //###00000, rx_train_adc_sat_check_large_signal_coarse_gain_lane[4:0]
  RX_TRAIN_SAT_CHK_CTRL_2.BT.B2 = 0x60; //0110####, rx_train_adc_sat_check_large_signal_r_lane[3:0]
  RX_TRAIN_SAT_CHK_CTRL_2.BT.B3 = 0x42; //01000010, rx_train_adc_sat_check_nominal_signal_r_lane[3:0], rx_train_adc_sat_check_small_signal_r_lane[3:0]
  RX_TRAIN_SAT_CHK_CTRL_3.BT.B0 = 0x4; //###00100, rx_train_adc_sat_check_small_signal_coarse_gain_lane[4:0]
  RX_TRAIN_SAT_CHK_CTRL_3.BT.B1 = 0x2; //###00010, rx_train_adc_sat_check_nominal_signal_coarse_gain_lane[4:0]
  RX_TRAIN_SAT_CHK_CTRL_3.BT.B2 = 0x32; //#0110010, rx_train_adc_sat_check_large_signal_c_lane[6:0]
  RX_TRAIN_SAT_CHK_CTRL_3.BT.B3 = 0x5A; //#1011010, rx_train_adc_sat_check_small_signal_c_lane[6:0]
  RX_BLIND_TRAIN_CTRL_0.BT.B0 = 0x7; //###00111, rx_train_blind_ctle_r_max_lane[4:0]
  RX_BLIND_TRAIN_CTRL_0.BT.B1 = 0x94; //100101##, rx_train_blind_ctle_c_step_lane[1:0], rx_train_blind_ctle_r_step_lane[1:0], rx_train_blind_gain_coarse_step_lane[1:0]
  RX_BLIND_TRAIN_CTRL_0.BT.B2 = 0x78; //#1111000, rx_train_blind_phase_scan_en_lane, rx_train_blind_adc_th1_lane[5:0]
  RX_BLIND_TRAIN_CTRL_0.BT.B3 = 0x14; //00010100, rx_train_blind_max_trial_lane[7:0]
//RX_BLIND_TRAIN_CTRL_1.BT.B0 = 0x0; //00000000, rx_train_blind_phase_scan_ppm_lane[15:0]
  RX_BLIND_TRAIN_CTRL_1.BT.B1 = 0x80; //10000000, rx_train_blind_phase_scan_ppm_lane[15:0]
  RX_BLIND_TRAIN_CTRL_1.BT.B2 = 0x7; //00000111, rx_train_blind_adc_sat_th_lane[15:0]
//RX_BLIND_TRAIN_CTRL_1.BT.B3 = 0x0; //00000000, rx_train_blind_adc_sat_th_lane[15:0]
//EOM_HIST_REG0.BT.B0 = 0x0; //00000000, eom_hist_n_bot_h_cnt_lane[31:0]
//EOM_HIST_REG0.BT.B1 = 0x0; //00000000, eom_hist_n_bot_h_cnt_lane[31:0]
//EOM_HIST_REG0.BT.B2 = 0x0; //00000000, eom_hist_n_bot_h_cnt_lane[31:0]
//EOM_HIST_REG0.BT.B3 = 0x0; //00000000, eom_hist_n_bot_h_cnt_lane[31:0]
//EOM_HIST_REG1.BT.B0 = 0x0; //00000000, eom_hist_n_bot_l_cnt_lane[31:0]
//EOM_HIST_REG1.BT.B1 = 0x0; //00000000, eom_hist_n_bot_l_cnt_lane[31:0]
//EOM_HIST_REG1.BT.B2 = 0x0; //00000000, eom_hist_n_bot_l_cnt_lane[31:0]
//EOM_HIST_REG1.BT.B3 = 0x0; //00000000, eom_hist_n_bot_l_cnt_lane[31:0]
//EOM_HIST_REG2.BT.B0 = 0x0; //00000000, eom_hist_n_mid_h_cnt_lane[31:0]
//EOM_HIST_REG2.BT.B1 = 0x0; //00000000, eom_hist_n_mid_h_cnt_lane[31:0]
//EOM_HIST_REG2.BT.B2 = 0x0; //00000000, eom_hist_n_mid_h_cnt_lane[31:0]
//EOM_HIST_REG2.BT.B3 = 0x0; //00000000, eom_hist_n_mid_h_cnt_lane[31:0]
//EOM_HIST_REG3.BT.B0 = 0x0; //00000000, eom_hist_n_mid_l_cnt_lane[31:0]
//EOM_HIST_REG3.BT.B1 = 0x0; //00000000, eom_hist_n_mid_l_cnt_lane[31:0]
//EOM_HIST_REG3.BT.B2 = 0x0; //00000000, eom_hist_n_mid_l_cnt_lane[31:0]
//EOM_HIST_REG3.BT.B3 = 0x0; //00000000, eom_hist_n_mid_l_cnt_lane[31:0]
//EOM_HIST_REG4.BT.B0 = 0x0; //00000000, eom_hist_n_top_h_cnt_lane[31:0]
//EOM_HIST_REG4.BT.B1 = 0x0; //00000000, eom_hist_n_top_h_cnt_lane[31:0]
//EOM_HIST_REG4.BT.B2 = 0x0; //00000000, eom_hist_n_top_h_cnt_lane[31:0]
//EOM_HIST_REG4.BT.B3 = 0x0; //00000000, eom_hist_n_top_h_cnt_lane[31:0]
//EOM_HIST_REG5.BT.B0 = 0x0; //00000000, eom_hist_n_top_l_cnt_lane[31:0]
//EOM_HIST_REG5.BT.B1 = 0x0; //00000000, eom_hist_n_top_l_cnt_lane[31:0]
//EOM_HIST_REG5.BT.B2 = 0x0; //00000000, eom_hist_n_top_l_cnt_lane[31:0]
//EOM_HIST_REG5.BT.B3 = 0x0; //00000000, eom_hist_n_top_l_cnt_lane[31:0]
//EOM_HIST_REG6.BT.B0 = 0x0; //00000000, eom_hist_n_d00_cnt_lane[31:0]
//EOM_HIST_REG6.BT.B1 = 0x0; //00000000, eom_hist_n_d00_cnt_lane[31:0]
//EOM_HIST_REG6.BT.B2 = 0x0; //00000000, eom_hist_n_d00_cnt_lane[31:0]
//EOM_HIST_REG6.BT.B3 = 0x0; //00000000, eom_hist_n_d00_cnt_lane[31:0]
//EOM_HIST_REG7.BT.B0 = 0x0; //00000000, eom_hist_n_d01_cnt_lane[31:0]
//EOM_HIST_REG7.BT.B1 = 0x0; //00000000, eom_hist_n_d01_cnt_lane[31:0]
//EOM_HIST_REG7.BT.B2 = 0x0; //00000000, eom_hist_n_d01_cnt_lane[31:0]
//EOM_HIST_REG7.BT.B3 = 0x0; //00000000, eom_hist_n_d01_cnt_lane[31:0]
//EOM_HIST_REG8.BT.B0 = 0x0; //00000000, eom_hist_n_d10_cnt_lane[31:0]
//EOM_HIST_REG8.BT.B1 = 0x0; //00000000, eom_hist_n_d10_cnt_lane[31:0]
//EOM_HIST_REG8.BT.B2 = 0x0; //00000000, eom_hist_n_d10_cnt_lane[31:0]
//EOM_HIST_REG8.BT.B3 = 0x0; //00000000, eom_hist_n_d10_cnt_lane[31:0]
//EOM_HIST_REG9.BT.B0 = 0x0; //00000000, eom_hist_n_d11_cnt_lane[31:0]
//EOM_HIST_REG9.BT.B1 = 0x0; //00000000, eom_hist_n_d11_cnt_lane[31:0]
//EOM_HIST_REG9.BT.B2 = 0x0; //00000000, eom_hist_n_d11_cnt_lane[31:0]
//EOM_HIST_REG9.BT.B3 = 0x0; //00000000, eom_hist_n_d11_cnt_lane[31:0]
  TX_SHAPED_BASED_TRAIN_CTRL_0.BT.B1 = 0xE0; //1110####, tx_train_g1_adapt_en_lane, tx_train_gn1_adapt_en_lane, tx_train_gn2_adapt_en_lane, tx_train_gn3_adapt_en_lane
  TX_SHAPED_BASED_TRAIN_CTRL_0.BT.B2 = 0x14; //00010100, tx_train_max_trial_lane[7:0]
  TX_SHAPED_BASED_TRAIN_CTRL_0.BT.B3 = 0xA; //00001010, tx_train_min_trial_lane[7:0]
  TX_SHAPED_BASED_TRAIN_CTRL_1.BT.B0 = 0xF6; //11110110, tx_train_gn1_low_th_lane[7:0]
  TX_SHAPED_BASED_TRAIN_CTRL_1.BT.B1 = 0xA; //00001010, tx_train_gn1_high_th_lane[7:0]
  TX_SHAPED_BASED_TRAIN_CTRL_1.BT.B2 = 0xF6; //11110110, tx_train_g1_low_th_lane[7:0]
  TX_SHAPED_BASED_TRAIN_CTRL_1.BT.B3 = 0xA; //00001010, tx_train_g1_high_th_lane[7:0]
  TX_SHAPED_BASED_TRAIN_CTRL_2.BT.B0 = 0xF9; //11111001, tx_train_gn3_low_th_lane[7:0]
  TX_SHAPED_BASED_TRAIN_CTRL_2.BT.B1 = 0x7; //00000111, tx_train_gn3_high_th_lane[7:0]
  TX_SHAPED_BASED_TRAIN_CTRL_2.BT.B2 = 0xF9; //11111001, tx_train_gn2_low_th_lane[7:0]
  TX_SHAPED_BASED_TRAIN_CTRL_2.BT.B3 = 0x7; //00000111, tx_train_gn2_high_th_lane[7:0]
//SIGMNT_AVE.BT.B0 = 0x0; //00000000, sigmnt_shared_val_ave_lane[7:0]
//SIGMNT_AVE.BT.B1 = 0x0; //00000000, sigmnt_shared_val_ave_lane[15:8]
//SIGMNT_AVE.BT.B2 = 0x0; //00000000, sigmnt_adc_to_dp_val_ave_lane[7:0]
//SIGMNT_AVE.BT.B3 = 0x0; //00000000, sigmnt_adc_to_dp_val_ave_lane[15:8]
//ADC_TO_DP_SIGMNT_CDF.BT.B0 = 0x0; //00000000, sigmnt_adc_to_dp_val_cdf2_lane[7:0]
//ADC_TO_DP_SIGMNT_CDF.BT.B1 = 0x0; //00000000, sigmnt_adc_to_dp_val_cdf2_lane[15:8]
//ADC_TO_DP_SIGMNT_CDF.BT.B2 = 0x0; //00000000, sigmnt_adc_to_dp_val_cdf1_lane[7:0]
//ADC_TO_DP_SIGMNT_CDF.BT.B3 = 0x0; //00000000, sigmnt_adc_to_dp_val_cdf1_lane[15:8]
//SHARED_SIGMNT_CDF.BT.B0 = 0x0; //00000000, sigmnt_shared_val_cdf2_lane[7:0]
//SHARED_SIGMNT_CDF.BT.B1 = 0x0; //00000000, sigmnt_shared_val_cdf2_lane[15:8]
//SHARED_SIGMNT_CDF.BT.B2 = 0x0; //00000000, sigmnt_shared_val_cdf1_lane[7:0]
//SHARED_SIGMNT_CDF.BT.B3 = 0x0; //00000000, sigmnt_shared_val_cdf1_lane[15:8]
  TRX_TRAINING_OPT_CTRL_0.BT.B1 = 0x14; //0001010#, trx_train_ctle_grid_inc_en_lane, trx_train_ctle_r_inc_lane[2:0], trx_train_ctle_c_inc_lane[2:0]
  TRX_TRAINING_OPT_CTRL_0.BT.B2 = 0x2; //00000010, trx_train_iter_min_lane[7:0]
  TRX_TRAINING_OPT_CTRL_0.BT.B3 = 0xA; //00001010, trx_train_iter_max_lane[7:0]
  TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_0.BT.B0 = 0x1; //###00001, tx_train_opt_ext_iter_max_lane[4:0]
  TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_0.BT.B1 = 0x2; //###00010, tx_train_opt_int_iter_max_lane[4:0]
  TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_0.BT.B2 = 0x10; //00010000, tx_train_opt_snr_th_lane[7:0]
  TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_0.BT.B3 = 0x3C; //##111100, tx_train_opt_adc_th1_lane[5:0]
  TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_1.BT.B0 = 0x8F; //10001111, tx_train_opt_adc_sat_th_lane[15:0]
  TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_1.BT.B1 = 0x2; //00000010, tx_train_opt_adc_sat_th_lane[15:0]
  TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_1.BT.B2 = 0x16; //###10110, tx_train_opt_g1_adapt_en_lane, tx_train_opt_g0_adapt_en_lane, tx_train_opt_gn1_adapt_en_lane, tx_train_opt_gn2_adapt_en_lane, tx_train_opt_gn3_adapt_en_lane
  TX_FFE_PRESET_SELECTION_CTRL.BT.B0 = 0xD; //#0001101, tx_train_preset_ctle_comp_en_lane, tx_train_preset_ctle_comp_iter_max_lane[3:0], tx_train_preset_ctle_comp_r_step_lane[1:0]
  CTLE_GRID_SEARCH_CTRL_0.BT.B1 = 0x1; //###00001, rx_train_opt_gc_step_lane[4:0]
  CTLE_GRID_SEARCH_CTRL_0.BT.B2 = 0x3; //###00011, rx_train_opt_c_step_lane[4:0]
  CTLE_GRID_SEARCH_CTRL_0.BT.B3 = 0x1; //###00001, rx_train_opt_r_step_lane[4:0]
  CTLE_GRID_SEARCH_CTRL_1.BT.B1 = 0x1; //###00001, rx_train_opt_gc_iter_max_lane[4:0]
  CTLE_GRID_SEARCH_CTRL_1.BT.B2 = 0x4; //###00100, rx_train_opt_c_iter_max_lane[4:0]
  CTLE_GRID_SEARCH_CTRL_1.BT.B3 = 0x2; //###00010, rx_train_opt_r_iter_max_lane[4:0]
  CTLE_GRID_SEARCH_CTRL_2.BT.B0 = 0x8F; //10001111, rx_train_opt_adc_sat_th_lane[15:0]
  CTLE_GRID_SEARCH_CTRL_2.BT.B1 = 0x2; //00000010, rx_train_opt_adc_sat_th_lane[15:0]
  CTLE_GRID_SEARCH_CTRL_2.BT.B2 = 0x10; //00010000, rx_train_opt_snr_th_lane[7:0]
  CTLE_GRID_SEARCH_CTRL_2.BT.B3 = 0x3C; //##111100, rx_train_opt_adc_th1_lane[5:0]
//TRAIN_STATUS_LANE.BT.B3 = 0x0; //000000##, tx_train_done_lane, tx_train_pass_lane, tx_train_abort_lane, rx_train_done_lane, rx_train_pass_lane, rx_train_abort_lane
//EOM_IF.BT.B0 = 0x0; //00000000, esm_voltage_lane[7:0]
//EOM_IF.BT.B1 = 0x0; //#####000, eom_call_lane, eom_call_conv_lane, eom_ready_lane
  COMMAND_INTERFACE.BT.B0 = 0x1; //#######1, mcu_cmd_done_lane
  END_XDAT_LANE.BT.B0 = 0xAA; //10101010, end_xdat_lane[7:0]
}
