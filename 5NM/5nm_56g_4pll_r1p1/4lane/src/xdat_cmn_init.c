#include "common.h"
#ifdef USE_BANKING
#pragma codeseg BANK3
#endif
void xdat_cmn_init () BANKING_CTRL {
//FW_REV.BT.B0 = 0x0; //00000000, fw_build_ver[7:0]
//FW_REV.BT.B1 = 0x0; //00000000, fw_patch_ver[7:0]
//FW_REV.BT.B2 = 0x0; //00000000, fw_minor_ver[7:0]
//FW_REV.BT.B3 = 0x0; //00000000, fw_major_ver[7:0]
//CONTROL_CONFIG0.BT.B0 = 0x0; //00000#00, rx_cal_done, tx_cal_done, not_use_cmn_mcu, ana_clk100m_125m_sel, ana_clk100m_125m_en, spd_cfg_sel[1:0]
//CONTROL_CONFIG0.BT.B1 = 0x0; //##0000#0, train_sim_en, fast_dfe_timer_en, ext_force_cal_done, fast_power_on_en, cal_done
//CONTROL_CONFIG0.BT.B2 = 0x0; //00000000, bypass_speed_table_load, bypass_xdat_init, bypass_power_on_delay, bypass_delay[2:0], power_up_simple_en, bypass_speed_table_load_dis
//CONTROL_CONFIG0.BT.B3 = 0x0; //00000000, force_skip_indv_cal_done_check, no_cal_loop, apta_train_sim_en, bypass_ctle_tune, bypass_ctle_ctrl, bypass_ph_ctrl, skip_cdr_dfe_scheme, force_cont_cal_skip
  CONTROL_CONFIG1.BT.B0 = 0x4; //####0100, tx_vdd_cal_ext_en, rx_vdd_cal_ext_en, rx_cal_ext_en, cal_start
//CONTROL_CONFIG1.BT.B1 = 0x0; //00000000, rxdcc_dll_cal_ext_en, rx_eom_cal_ext_en, rx_pllvdda_cal_ext_en, rxdll_cal_ext_en, pll_temp_cal_ext_en, tx_plldcc_cal_ext_en, rx_plldcc_cal_ext_en, tx_pllvdda_cal_ext_en
//CONTROL_CONFIG1.BT.B2 = 0x0; //00000000, vdd_cal_ext_en, rximp_cal_ext_en, tximp_cal_ext_en, sampler_cal_ext_en, eom_align_cal_ext_en, rxalign90_cal_ext_en, rxdcc_eom_cal_ext_en, rxdcc_data_cal_ext_en
//CONTROL_CONFIG1.BT.B3 = 0x0; //#000000#, txalign90_cal_ext_en, tx_pll_cal_ext_en, rx_pll_cal_ext_en, sq_cal_ext_en, process_cal_ext_en, txdcc_cal_ext_en
  CONTROL_CONFIG2.BT.B1 = 0xC0; //11000###, rxdcc_dll_cal_cont_en, pll_temp_cal_cont_en, tx_pllamp_cal_cont_en, rx_pllamp_cal_cont_en, pll_temp_cal_cont_fw_en
  CONTROL_CONFIG2.BT.B2 = 0xBA; //1#11101#, txdcc_cal_cont_en, tx_plldcc_cal_cont_en, rx_plldcc_cal_cont_en, align90_cal_cont_en, eom_clk_cal_cont_en, rxdll_cal_cont_en
  CONTROL_CONFIG2.BT.B3 = 0x3; //00000011, txclk_vdd_cal_cont_en, txdata_vdd_cal_cont_en, txpre_vdd_cal_cont_en, rxdclk_vdd_cal_cont_en, rxeomclk_vdd_cal_cont_en, rxsmplr_vdd_cal_cont_en, rxdcc_data_cal_cont_en, rxdcc_eom_cal_cont_en
//CONTROL_CONFIG3.BT.B0 = 0x0; //00000000, tshrtr[7:0]
  CONTROL_CONFIG3.BT.B1 = 0x14; //00010100, thold_sel2[7:0]
  CONTROL_CONFIG3.BT.B2 = 0x6; //00000110, fast_pll_mode, spdchg_fast_pll_mode[1:0], tempc_step_ctrl[2:0], tempc_dac_mode[1:0]
//CONTROL_CONFIG3.BT.B3 = 0x0; //#00000##, pll_vdda_cal_mode, process_cal_pass, process_cal_done, cal_process_result_sel, pllamp_cal_speedup_disable
  CONTROL_CONFIG4.BT.B0 = 0x2; //00000010, fbc_ratio[7:0]
  CONTROL_CONFIG5.BT.B0 = 0x7; //00000111, ref_freq_sel_fw[7:0]
//CONTROL_CONFIG5.BT.B1 = 0x0; //00000000, temp_rd_2c[7:0]
//CONTROL_CONFIG5.BT.B2 = 0x0; //000000#0, tpllfreq1[1:0], tpllfreq0[1:0], tpllamp0[1:0], temp_rdy
  CONTROL_CONFIG5.BT.B3 = 0x80; //10000000, pll_txvco_sf_icptat_sel[2:0], tpllfreq4, tpllfreq3[1:0], tpllfreq2[1:0]
//CONTROL_CONFIG6.BT.B0 = 0x0; //00000000, vdd_cal_done_lane0_rd, tximp_cal_done_lane0_rd, power_on_seq_lane0_rd, mcu_sync_lane0_rd, rximp_cal_done_lane0_rd, cal_done_lane0_rd, mcu_init_done_lane0_rd, mcu_en_lane0_rd
//CONTROL_CONFIG6.BT.B1 = 0x0; //00000000, vdd_cal_done_lane1_rd, tximp_cal_done_lane1_rd, power_on_seq_lane1_rd, mcu_sync_lane1_rd, rximp_cal_done_lane1_rd, cal_done_lane1_rd, mcu_init_done_lane1_rd, mcu_en_lane1_rd
//CONTROL_CONFIG6.BT.B2 = 0x0; //00000000, vdd_cal_done_lane2_rd, tximp_cal_done_lane2_rd, power_on_seq_lane2_rd, mcu_sync_lane2_rd, rximp_cal_done_lane2_rd, cal_done_lane2_rd, mcu_init_done_lane2_rd, mcu_en_lane2_rd
//CONTROL_CONFIG6.BT.B3 = 0x0; //00000000, vdd_cal_done_lane3_rd, tximp_cal_done_lane3_rd, power_on_seq_lane3_rd, mcu_sync_lane3_rd, rximp_cal_done_lane3_rd, cal_done_lane3_rd, mcu_init_done_lane3_rd, mcu_en_lane3_rd
  CONTROL_CONFIG7.BT.B3 = 0x6; //00000110, cal_sq_thresh_in[7:0]
  TX_PRESET.BT.B0 = 0x5; //####0101, tx_preset_index_pam4[1:0], tx_preset_index_pam2[1:0]
  TRAIN_IF_CONFIG.BT.B0 = 0x1; //#######1, pipe4_en
  CONTROL_CONFIG8.BT.B0 = 0x3A; //00111010, dfe_fx_sum_sat_thres[7:0]
//CONTROL_CONFIG8.BT.B1 = 0x0; //00000000, dfe_outer_eye_thres[7:0]
  CONTROL_CONFIG8.BT.B2 = 0x2; //######10, tsen_adc_single_diff_user_sel, auto_rx_init_en
//CONTROL_CONFIG9.BT.B1 = 0x0; //0#######, rxdcc_dll_cal_cont_cur_load_en
//CONTROL_CONFIG9.BT.B2 = 0x0; //00000000, txdcc_cal_cont_cur_load_en, txdcc_pdiv_cal_cont_cur_load_en, pllamp_cal_cont_cur_load_en, plldcc_cal_cont_cur_load_en, align90_cal_cont_cur_load_en, eom_dll_cal_cont_cur_load_en, rxdll_cal_cont_cur_load_en, txdetect_cal_cont_cur_load_en
//CONTROL_CONFIG9.BT.B3 = 0x0; //00000000, txclk_vdd_cal_cont_cur_load_en, txdata_vdd_cal_cont_cur_load_en, txpre_vdd_cal_cont_cur_load_en, rxdclk_vdd_cal_cont_cur_load_en, rxeomclk_vdd_cal_cont_cur_load_en, rxsmplr_vdd_cal_cont_cur_load_en, rxdcc_data_cal_cont_cur_load_en, rxdcc_eom_cal_cont_cur_load_en
  CON_CAL_STEP_SIZE1.BT.B0 = 0x20; //00100000, rxdclk_vdd_cal_step_size[7:0]
  CON_CAL_STEP_SIZE1.BT.B1 = 0x20; //00100000, txpre_vdd_cal_step_size[7:0]
  CON_CAL_STEP_SIZE1.BT.B2 = 0x20; //00100000, txdata_vdd_cal_step_size[7:0]
  CON_CAL_STEP_SIZE1.BT.B3 = 0x20; //00100000, txclk_vdd_cal_step_size[7:0]
  CON_CAL_STEP_SIZE2.BT.B0 = 0x20; //00100000, rxdcc_eom_cal_step_size[7:0]
  CON_CAL_STEP_SIZE2.BT.B1 = 0x20; //00100000, rxdcc_data_cal_step_size[7:0]
  CON_CAL_STEP_SIZE2.BT.B2 = 0x20; //00100000, rxsmplr_vdd_cal_step_size[7:0]
  CON_CAL_STEP_SIZE2.BT.B3 = 0x20; //00100000, rxeomclk_vdd_cal_step_size[7:0]
  CON_CAL_STEP_SIZE3.BT.B0 = 0x20; //00100000, plldcc_cal_step_size[7:0]
  CON_CAL_STEP_SIZE3.BT.B1 = 0x20; //00100000, pllamp_cal_step_size[7:0]
  CON_CAL_STEP_SIZE3.BT.B2 = 0x20; //00100000, txdcc_pdiv_cal_step_size[7:0]
  CON_CAL_STEP_SIZE3.BT.B3 = 0x20; //00100000, txdcc_cal_step_size[7:0]
  CON_CAL_STEP_SIZE4.BT.B0 = 0x20; //00100000, txdetect_cal_step_size[7:0]
  CON_CAL_STEP_SIZE4.BT.B1 = 0x20; //00100000, rxdll_cal_step_size[7:0]
  CON_CAL_STEP_SIZE4.BT.B2 = 0x20; //00100000, eom_dll_cal_step_size[7:0]
  CON_CAL_STEP_SIZE4.BT.B3 = 0x20; //00100000, align90_cal_step_size[7:0]
//CON_CAL_STEP_SIZE5.BT.B0 = 0x0; //00000000, mcu_sync_dat_lane0[7:0]
//CON_CAL_STEP_SIZE5.BT.B1 = 0x0; //00000000, mcu_sync_dat_lane1[7:0]
//CON_CAL_STEP_SIZE5.BT.B2 = 0x0; //00000000, mcu_sync_dat_lane2[7:0]
//CON_CAL_STEP_SIZE5.BT.B3 = 0x0; //00000000, mcu_sync_dat_lane3[7:0]
//CAL_TIME_OUT_AND_DIS.BT.B0 = 0x0; //00000000, rximp_cal_timeout_dis, tximp_cal_timeout_dis, plldcc_cal_timeout_dis, txdcc_cal_timeout_dis, txdcc_pdiv_cal_timeout_dis, rxdcc_dll_cal_timeout_dis, rxdcc_data_cal_timeout_dis, rxdcc_eom_cal_timeout_dis
//CAL_TIME_OUT_AND_DIS.BT.B1 = 0x0; //###00000, eom_align_cal_timeout_dis, plldcc_cal_timeout, rx_pll_cal_timeout_dis, tx_pll_cal_timeout_dis, align90_cal_timeout_dis
//CAL_TIME_OUT_AND_DIS.BT.B3 = 0x0; //00000000, tsen_delay_wakeup_time[7:0]
//MCU_CONFIG.BT.B0 = 0x0; //00000000, master_mcu_sel[7:0]
//CAL_DATA1.BT.B0 = 0x0; //00000000, cal_process_value_ulvt[7:0]
//CAL_DATA1.BT.B1 = 0x0; //00000000, cal_process_value_lvt[7:0]
  LOOP_CNTS.BT.B0 = 0x10; //00010000, phase_tracking_loop_cnts[7:0]
//MCU_CONFIG1.BT.B2 = 0x0; //00000000, mcuclk_mc[7:0]
  PROCESS_THRESHOLD1.BT.B0 = 0x4; //00000100, cal_proc_tt2ff_ring1[7:0]
  PROCESS_THRESHOLD1.BT.B1 = 0x4; //00000100, cal_proc_ss2tt_ring1[7:0]
  PROCESS_THRESHOLD1.BT.B2 = 0xD; //00001101, cal_proc_subss_ring1[7:0]
  PROCESS_THRESHOLD1.BT.B3 = 0x4; //00000100, cal_proc_tt2ff_ring2[7:0]
  PROCESS_THRESHOLD2.BT.B0 = 0x4; //00000100, cal_proc_ss2tt_ring2[7:0]
  PROCESS_THRESHOLD2.BT.B1 = 0xC; //00001100, cal_proc_subss_ring2[7:0]
  PROCESS_THRESHOLD2.BT.B2 = 0x3; //00000011, cal_proc_tt2ff_ring3[7:0]
  PROCESS_THRESHOLD2.BT.B3 = 0x3; //00000011, cal_proc_ss2tt_ring3[7:0]
  PROCESS_THRESHOLD3.BT.B0 = 0xB; //00001011, cal_proc_subss_ring3[7:0]
  PROCESS_THRESHOLD3.BT.B1 = 0x2; //00000010, cal_proc_tt2ff_ring4[7:0]
  PROCESS_THRESHOLD3.BT.B2 = 0x2; //00000010, cal_proc_ss2tt_ring4[7:0]
  PROCESS_THRESHOLD3.BT.B3 = 0x9; //00001001, cal_proc_subss_ring4[7:0]
  PROCESS_THRESHOLD4.BT.B0 = 0x4; //00000100, cal_proc_tt2ff_ring5[7:0]
  PROCESS_THRESHOLD4.BT.B1 = 0x4; //00000100, cal_proc_ss2tt_ring5[7:0]
  PROCESS_THRESHOLD4.BT.B2 = 0xB; //00001011, cal_proc_subss_ring5[7:0]
  PROCESS_THRESHOLD4.BT.B3 = 0x6; //00000110, cal_proc_tt2ff_ring6[7:0]
  PROCESS_THRESHOLD5.BT.B0 = 0x6; //00000110, cal_proc_ss2tt_ring6[7:0]
  PROCESS_THRESHOLD5.BT.B1 = 0xC; //00001100, cal_proc_subss_ring6[7:0]
  PROCESS_THRESHOLD5.BT.B2 = 0x5; //00000101, cal_proc_tt2ff_ring7[7:0]
  PROCESS_THRESHOLD5.BT.B3 = 0x5; //00000101, cal_proc_ss2tt_ring7[7:0]
  PROCESS_THRESHOLD6.BT.B0 = 0xC; //00001100, cal_proc_subss_ring7[7:0]
  PROCESS_THRESHOLD6.BT.B1 = 0x4; //00000100, cal_proc_tt2ff_ring8[7:0]
  PROCESS_THRESHOLD6.BT.B2 = 0x4; //00000100, cal_proc_ss2tt_ring8[7:0]
  PROCESS_THRESHOLD6.BT.B3 = 0xA; //00001010, cal_proc_subss_ring8[7:0]
  PROCESS_THRESHOLD7.BT.B0 = 0x5; //00000101, cal_proc_tt2ff_ring9[7:0]
  PROCESS_THRESHOLD7.BT.B1 = 0x5; //00000101, cal_proc_ss2tt_ring9[7:0]
  PROCESS_THRESHOLD7.BT.B2 = 0xE; //00001110, cal_proc_subss_ring9[7:0]
  PROCESS_THRESHOLD7.BT.B3 = 0x6; //00000110, cal_proc_tt2ff_ring10[7:0]
  PROCESS_THRESHOLD8.BT.B0 = 0x6; //00000110, cal_proc_ss2tt_ring10[7:0]
  PROCESS_THRESHOLD8.BT.B1 = 0xC; //00001100, cal_proc_subss_ring10[7:0]
//MCU_DATA_PAYLOAD_CHANNEL0.BT.B0 = 0x0; //00000000, mcu_data_payload_channel0_data1[7:0]
//MCU_DATA_PAYLOAD_CHANNEL0.BT.B1 = 0x0; //00000000, mcu_data_payload_channel0_data2[7:0]
//MCU_DATA_PAYLOAD_CHANNEL0.BT.B2 = 0x0; //00000000, mcu_data_payload_channel0_data3[7:0]
//MCU_DATA_PAYLOAD_CHANNEL0.BT.B3 = 0x0; //00000000, mcu_data_payload_channel0_data4[7:0]
//MCU_DATA_PAYLOAD_CHANNEL1.BT.B0 = 0x0; //00000000, mcu_data_payload_channel1_data1[7:0]
//MCU_DATA_PAYLOAD_CHANNEL1.BT.B1 = 0x0; //00000000, mcu_data_payload_channel1_data2[7:0]
//MCU_DATA_PAYLOAD_CHANNEL1.BT.B2 = 0x0; //00000000, mcu_data_payload_channel1_data3[7:0]
//MCU_DATA_PAYLOAD_CHANNEL1.BT.B3 = 0x0; //00000000, mcu_data_payload_channel1_data4[7:0]
//MCU_DATA_PAYLOAD_CHANNEL2.BT.B0 = 0x0; //00000000, mcu_data_payload_channel2_data1[7:0]
//MCU_DATA_PAYLOAD_CHANNEL2.BT.B1 = 0x0; //00000000, mcu_data_payload_channel2_data2[7:0]
//MCU_DATA_PAYLOAD_CHANNEL2.BT.B2 = 0x0; //00000000, mcu_data_payload_channel2_data3[7:0]
//MCU_DATA_PAYLOAD_CHANNEL2.BT.B3 = 0x0; //00000000, mcu_data_payload_channel2_data4[7:0]
//PLL_SLAVE_CURRENT_STATE.BT.B0 = 0x0; //00000000, pll_slave_current_state_s0[7:0]
//PLL_SLAVE_CURRENT_STATE.BT.B1 = 0x0; //00000000, pll_slave_current_state_s1[7:0]
//PLL_SLAVE_CURRENT_STATE.BT.B2 = 0x0; //00000000, pll_slave_current_state_s2[7:0]
//PLL_SLAVE_CURRENT_STATE.BT.B3 = 0x0; //00000000, pll_slave_current_state_s3[7:0]
//PLL_SLAVE_CURRENT_SEQUENCE.BT.B0 = 0x0; //00000000, pll_slave_current_sequence_s0[7:0]
//PLL_SLAVE_CURRENT_SEQUENCE.BT.B1 = 0x0; //00000000, pll_slave_current_sequence_s1[7:0]
//PLL_SLAVE_CURRENT_SEQUENCE.BT.B2 = 0x0; //00000000, pll_slave_current_sequence_s2[7:0]
//PLL_SLAVE_CURRENT_SEQUENCE.BT.B3 = 0x0; //00000000, pll_slave_current_sequence_s3[7:0]
//COMMON_CONFIG_UPDATE_NEEDED.BT.B0 = 0x0; //00000000, common_config_update_needed_lane3[7:0]
//COMMON_CONFIG_UPDATE_NEEDED.BT.B1 = 0x0; //00000000, common_config_update_needed_lane2[7:0]
//COMMON_CONFIG_UPDATE_NEEDED.BT.B2 = 0x0; //00000000, common_config_update_needed_lane1[7:0]
//COMMON_CONFIG_UPDATE_NEEDED.BT.B3 = 0x0; //00000000, common_config_update_needed_lane0[7:0]
//COMMON_CONFIG_UPDATE_DONE.BT.B0 = 0x0; //00000000, common_config_update_done[7:0]
  TRAIN_CDS_0.BT.B0 = 0xF; //00001111, cds_tx_train_preset[31:0]
  TRAIN_CDS_0.BT.B1 = 0x9; //00001001, cds_tx_train_preset[31:0]
//TRAIN_CDS_0.BT.B2 = 0x0; //00000000, cds_tx_train_preset[31:0]
//TRAIN_CDS_0.BT.B3 = 0x0; //00000000, cds_tx_train_preset[31:0]
  TRAIN_CDS_1.BT.B0 = 0xFF; //11111111, cds_gaintrain_init[31:0]
  TRAIN_CDS_1.BT.B1 = 0xF; //00001111, cds_gaintrain_init[31:0]
//TRAIN_CDS_1.BT.B2 = 0x0; //00000000, cds_gaintrain_init[31:0]
//TRAIN_CDS_1.BT.B3 = 0x0; //00000000, cds_gaintrain_init[31:0]
  TRAIN_CDS_2.BT.B0 = 0xBF; //10111111, cds_gaintrain_init1[31:0]
  TRAIN_CDS_2.BT.B1 = 0xDF; //11011111, cds_gaintrain_init1[31:0]
  TRAIN_CDS_2.BT.B2 = 0xC3; //11000011, cds_gaintrain_init1[31:0]
//TRAIN_CDS_2.BT.B3 = 0x0; //00000000, cds_gaintrain_init1[31:0]
  TRAIN_CDS_3.BT.B0 = 0xBF; //10111111, cds_gaintrain_init2[31:0]
  TRAIN_CDS_3.BT.B1 = 0xDF; //11011111, cds_gaintrain_init2[31:0]
  TRAIN_CDS_3.BT.B2 = 0xC3; //11000011, cds_gaintrain_init2[31:0]
//TRAIN_CDS_3.BT.B3 = 0x0; //00000000, cds_gaintrain_init2[31:0]
  TRAIN_CDS_4.BT.B0 = 0x78; //01111000, cds_init_phase_train[31:0]
  TRAIN_CDS_4.BT.B1 = 0xCF; //11001111, cds_init_phase_train[31:0]
  TRAIN_CDS_4.BT.B2 = 0x42; //01000010, cds_init_phase_train[31:0]
//TRAIN_CDS_4.BT.B3 = 0x0; //00000000, cds_init_phase_train[31:0]
  TRAIN_CDS_5.BT.B0 = 0xBF; //10111111, cds_res_f0_start[31:0]
  TRAIN_CDS_5.BT.B1 = 0xDF; //11011111, cds_res_f0_start[31:0]
  TRAIN_CDS_5.BT.B2 = 0xC3; //11000011, cds_res_f0_start[31:0]
//TRAIN_CDS_5.BT.B3 = 0x0; //00000000, cds_res_f0_start[31:0]
//TRAIN_CDS_6.BT.B0 = 0x0; //00000000, cds_res_f0[31:0]
  TRAIN_CDS_6.BT.B1 = 0xF; //00001111, cds_res_f0[31:0]
  TRAIN_CDS_6.BT.B2 = 0x42; //01000010, cds_res_f0[31:0]
//TRAIN_CDS_6.BT.B3 = 0x0; //00000000, cds_res_f0[31:0]
  TRAIN_CDS_7.BT.B0 = 0x78; //01111000, cds_init_phase_train2[31:0]
  TRAIN_CDS_7.BT.B1 = 0xCF; //11001111, cds_init_phase_train2[31:0]
  TRAIN_CDS_7.BT.B2 = 0x42; //01000010, cds_init_phase_train2[31:0]
//TRAIN_CDS_7.BT.B3 = 0x0; //00000000, cds_init_phase_train2[31:0]
  TRAIN_CDS_8.BT.B0 = 0xBF; //10111111, cds_rsweep[31:0]
  TRAIN_CDS_8.BT.B1 = 0xDF; //11011111, cds_rsweep[31:0]
  TRAIN_CDS_8.BT.B2 = 0xC3; //11000011, cds_rsweep[31:0]
//TRAIN_CDS_8.BT.B3 = 0x0; //00000000, cds_rsweep[31:0]
  TRAIN_CDS_9.BT.B0 = 0x31; //00110001, cds_rsweep_short[31:0]
  TRAIN_CDS_9.BT.B1 = 0xF; //00001111, cds_rsweep_short[31:0]
  TRAIN_CDS_9.BT.B2 = 0x42; //01000010, cds_rsweep_short[31:0]
//TRAIN_CDS_9.BT.B3 = 0x0; //00000000, cds_rsweep_short[31:0]
//TRAIN_CDS_10.BT.B0 = 0x0; //00000000, cds_dfe_res[31:0]
  TRAIN_CDS_10.BT.B1 = 0xF; //00001111, cds_dfe_res[31:0]
  TRAIN_CDS_10.BT.B2 = 0x42; //01000010, cds_dfe_res[31:0]
//TRAIN_CDS_10.BT.B3 = 0x0; //00000000, cds_dfe_res[31:0]
  TRAIN_CDS_11.BT.B0 = 0x31; //00110001, cds_res_vref[31:0]
  TRAIN_CDS_11.BT.B1 = 0xF; //00001111, cds_res_vref[31:0]
  TRAIN_CDS_11.BT.B2 = 0x42; //01000010, cds_res_vref[31:0]
//TRAIN_CDS_11.BT.B3 = 0x0; //00000000, cds_res_vref[31:0]
  TRAIN_CDS_12.BT.B0 = 0x78; //01111000, cds_phase_train[31:0]
  TRAIN_CDS_12.BT.B1 = 0xCF; //11001111, cds_phase_train[31:0]
  TRAIN_CDS_12.BT.B2 = 0x42; //01000010, cds_phase_train[31:0]
//TRAIN_CDS_12.BT.B3 = 0x0; //00000000, cds_phase_train[31:0]
  TRAIN_CDS_13.BT.B0 = 0x78; //01111000, cds_rl2_tune_adj[31:0]
  TRAIN_CDS_13.BT.B1 = 0xCF; //11001111, cds_rl2_tune_adj[31:0]
  TRAIN_CDS_13.BT.B2 = 0x42; //01000010, cds_rl2_tune_adj[31:0]
//TRAIN_CDS_13.BT.B3 = 0x0; //00000000, cds_rl2_tune_adj[31:0]
  TRAIN_CDS_14.BT.B0 = 0x78; //01111000, cds_phase_train_final[31:0]
  TRAIN_CDS_14.BT.B1 = 0xCF; //11001111, cds_phase_train_final[31:0]
  TRAIN_CDS_14.BT.B2 = 0x42; //01000010, cds_phase_train_final[31:0]
//TRAIN_CDS_14.BT.B3 = 0x0; //00000000, cds_phase_train_final[31:0]
//TRAIN_CDS_15.BT.B0 = 0x0; //00000000, cds_final_pre[31:0]
  TRAIN_CDS_15.BT.B1 = 0xF; //00001111, cds_final_pre[31:0]
  TRAIN_CDS_15.BT.B2 = 0x42; //01000010, cds_final_pre[31:0]
//TRAIN_CDS_15.BT.B3 = 0x0; //00000000, cds_final_pre[31:0]
  TRAIN_CDS_16.BT.B0 = 0x80; //10000000, cds_final[31:0]
  TRAIN_CDS_16.BT.B1 = 0x7F; //01111111, cds_final[31:0]
  TRAIN_CDS_16.BT.B2 = 0x80; //10000000, cds_final[31:0]
//TRAIN_CDS_16.BT.B3 = 0x0; //00000000, cds_final[31:0]
//TRAIN_CDS_17.BT.B0 = 0x0; //00000000, cds_final_measure[31:0]
  TRAIN_CDS_17.BT.B1 = 0xC1; //11000001, cds_final_measure[31:0]
  TRAIN_CDS_17.BT.B2 = 0x2; //00000010, cds_final_measure[31:0]
//TRAIN_CDS_17.BT.B3 = 0x0; //00000000, cds_final_measure[31:0]
  TRAIN_CDS_18.BT.B0 = 0x48; //01001000, cds_trx_train[31:0]
  TRAIN_CDS_18.BT.B1 = 0xDF; //11011111, cds_trx_train[31:0]
  TRAIN_CDS_18.BT.B2 = 0xC3; //11000011, cds_trx_train[31:0]
//TRAIN_CDS_18.BT.B3 = 0x0; //00000000, cds_trx_train[31:0]
  TRAIN_CDS_19.BT.B0 = 0x3F; //00111111, cds_pcie_train[31:0]
  TRAIN_CDS_19.BT.B1 = 0x1D; //00011101, cds_pcie_train[31:0]
  TRAIN_CDS_19.BT.B2 = 0x2; //00000010, cds_pcie_train[31:0]
//TRAIN_CDS_19.BT.B3 = 0x0; //00000000, cds_pcie_train[31:0]
  TRAIN_CDS_20.BT.B0 = 0x3F; //00111111, cds_pcie_train_f0b[31:0]
  TRAIN_CDS_20.BT.B1 = 0x1D; //00011101, cds_pcie_train_f0b[31:0]
  TRAIN_CDS_20.BT.B2 = 0x6; //00000110, cds_pcie_train_f0b[31:0]
//TRAIN_CDS_20.BT.B3 = 0x0; //00000000, cds_pcie_train_f0b[31:0]
  TRAIN_CDS_21.BT.B0 = 0x90; //10010000, cds_final_pcie[31:0]
  TRAIN_CDS_21.BT.B1 = 0x38; //00111000, cds_final_pcie[31:0]
  TRAIN_CDS_21.BT.B2 = 0x80; //10000000, cds_final_pcie[31:0]
//TRAIN_CDS_21.BT.B3 = 0x0; //00000000, cds_final_pcie[31:0]
  TRAIN_CDS_22.BT.B0 = 0x3; //00000011, cds_gaintrain_init_pcie[31:0]
  TRAIN_CDS_22.BT.B1 = 0x1D; //00011101, cds_gaintrain_init_pcie[31:0]
//TRAIN_CDS_22.BT.B2 = 0x0; //00000000, cds_gaintrain_init_pcie[31:0]
//TRAIN_CDS_22.BT.B3 = 0x0; //00000000, cds_gaintrain_init_pcie[31:0]
//MCU_SOFT_RESET_OCCURRED.BT.B0 = 0x0; //00000000, mcu_soft_reset_occurred_lane3[7:0]
//MCU_SOFT_RESET_OCCURRED.BT.B1 = 0x0; //00000000, mcu_soft_reset_occurred_lane2[7:0]
//MCU_SOFT_RESET_OCCURRED.BT.B2 = 0x0; //00000000, mcu_soft_reset_occurred_lane1[7:0]
//MCU_SOFT_RESET_OCCURRED.BT.B3 = 0x0; //00000000, mcu_soft_reset_occurred_lane0[7:0]
//REFCLK_DIS_FALLING_RESPONSE.BT.B0 = 0x0; //00000000, refclk_dis_falling_response_lane3[7:0]
//REFCLK_DIS_FALLING_RESPONSE.BT.B1 = 0x0; //00000000, refclk_dis_falling_response_lane2[7:0]
//REFCLK_DIS_FALLING_RESPONSE.BT.B2 = 0x0; //00000000, refclk_dis_falling_response_lane1[7:0]
//REFCLK_DIS_FALLING_RESPONSE.BT.B3 = 0x0; //00000000, refclk_dis_falling_response_lane0[7:0]
//REFCLK_DIS_FALLING_QUERY.BT.B2 = 0x0; //00000000, all_lanes_toggle_ana_pu_sq[7:0]
//REFCLK_DIS_FALLING_QUERY.BT.B3 = 0x0; //00000000, refclk_dis_falling_query[7:0]
}
