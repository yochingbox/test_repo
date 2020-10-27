//speed table address offset

//xdat cmn
//lc pll speed table address offset
#define spdoft_pll_reg_sel                              0
#define spdoft_pll_rate_sel                             1
#define spdoft_fbdiv                                    2
#define spdoft_fbdiv_cal                                4
#define spdoft_refdiv                                   6
#define spdoft_vind_band_sel                            7
#define spdoft_div_1g                                   8
#define spdoft_div_1g_fbck                              10
#define spdoft_icp_lc                                   12
#define spdoft_pll_lpfr                                 13
#define spdoft_pll_lpfc                                 14
#define spdoft_init_txfoffs                             15
#define spdoft_speed_thresh                             17
#define spdoft_lccap_usb                                19
#define spdoft_ssc_acc_factor                           20
#define spdoft_ssc_step_125ppm                          21
#define spdoft_ssc_m                                    22

//ring pll speed table address offset
#define spdoft_pll_rate_sel_ring                        0
#define spdoft_pll_refdiv_ring                          1
#define spdoft_pll_fbdiv_ring                           2
#define spdoft_pll_fbdiv_ring_fbck                      4
#define spdoft_icp_ring                                 6
#define spdoft_pll_speed_thresh_ring                    7
#define spdoft_fbdiv_cal_ring                           9
#define spdoft_intpi_ring                               11
#define spdoft_tx_intpr_ring                            12
#define spdoft_pll_band_sel_ring                        13
#define spdoft_pll_lpf_c1_sel_ring                      14
#define spdoft_pll_lpf_c2_sel_ring                      15
#define spdoft_pll_lpf_r1_sel_ring                      16
#define spdoft_init_txfoffs_ring                        17
#define spdoft_init_txfoffs_ring_fbck                   19
#define spdoft_ssc_acc_factor_ring                      21
#define spdoft_ssc_step_125ppm_ring                     22
#define spdoft_ssc_m_ring                               23

//phy_mode_cmn
#define spdoft_use_ring_refclk_250m                     0
#define caloft_lcvco_dac_lsb_rate0                      1
#define caloft_lcvco_dac_lsb_rate1                      2
#define caloft_lcvco_dac_lsb_cont_rate1                 3
#define caloft_lcvco_dac_msb_rate0                      4
#define caloft_lcvco_dac_msb_rate1                      5
#define caloft_lcvco_dac_msb_cont_rate0                 6
#define caloft_lcvco_dac_msb_cont_rate1                 7
#define caloft_lccap_lsb_rate0                          8
#define caloft_lccap_lsb_rate1                          9
#define caloft_lccap_msb_rate0                          10
#define caloft_lccap_msb_rate1                          11
#define caloft_plldcc_cnt_rate0                         12
#define caloft_plldcc_cnt_rate1                         13
#define caloft_plldcc_cnt_cont_rate0                    14
#define caloft_plldcc_cnt_cont_rate1                    15
#define caloft_pll_speed_ring_rate0                     16
#define caloft_pll_speed_ring_rate1                     17
#define caloft_pll_speed_ring_cont_rate0                18
#define caloft_pll_speed_ring_cont_rate1                19
#define caloft_pll_sllp_dac_coarse_ring_rate0           20
#define caloft_pll_sllp_dac_coarse_ring_rate1           21
#define caloft_pll_sllp_dac_coarse_ring_cont_rate0      22
#define caloft_pll_sllp_dac_coarse_ring_cont_rate1      23
#define caloft_sllp_dac_fine_ring_rate0                 24
#define caloft_sllp_dac_fine_ring_rate1                 26
#define caloft_sllp_dac_fine_ring_cont_rate0            28
#define caloft_sllp_dac_fine_ring_cont_rate1            30

//speed_tx
#define spdoft_pll_rate_sel_tx                          0
#define spdoft_tx_ck_sel_lane                           1
#define spdoft_tx_vddcal_rate_en_lane                   2
#define spdoft_tx_speed_div_lane                        3
#define spdoft_tx_reg_speed_trk_clk_lane                4
#define spdoft_tx_reg_speed_trk_data_lane               5
#define spdoft_tx_em_ctrl_reg_en_lane                   6
#define spdoft_tx_em_ctrl_pipe_sel_lane                 7
#define spdoft_tx_em_pre_en_lane                        8
#define spdoft_tx_em_pre_ctrl_lane                      9
#define spdoft_tx_em_po_en_lane                         10
#define spdoft_tx_em_po_ctrl_lane                       11
#define spdoft_slewrate_en_lane                         12
#define spdoft_slewctrl1_lane                           13
#define spdoft_slewctrl0_lane                           14
#define spdoft_tx_train_pat_sel_lane                    15
#define spdoft_train_pat_num_lane                       16
#define spdoft_tx_train_pat_toggle_lane                 18
#define spdoft_packet_sync_dis_lane                     19
#define spdoft_sync_det_dis_lane                        20

//speed_rx
#define spdoft_pll_rate_sel_rx                          21
#define spdoft_rx_ck_sel_lane                           22
#define spdoft_rx_vddcal_rate_en_lane                   23
#define spdoft_rx_speed_div_lane                        24
#define spdoft_dtl_clk_speedup_lane                     25
#define spdoft_intpi_lane                               26
#define spdoft_intpr_lane                               27
#define spdoft_dll_freq_sel_lane                        28
#define spdoft_eom_dll_freq_sel_lane                    29
#define spdoft_align90_8g_en_lane                       30
#define spdoft_rx_reg0p9_speed_track_clk_lane           31
#define spdoft_rx_reg0p9_speed_track_clk_half_lane      32
#define spdoft_rx_reg0p9_speed_track_data_lane          33
#define spdoft_rx_selmufi_lane                          34
#define spdoft_rx_selmuff_lane                          35
#define spdoft_reg_selmupi_lane                         36
#define spdoft_reg_selmupf_lane                         37
#define spdoft_rx_rxclk_25m_ctrl_lane                   38
#define spdoft_rx_rxclk_25m_div1p5_en_lane              39
#define spdoft_rx_rxclk_25m_div_lane                    40
#define spdoft_rx_rxclk_25m_fix_div_en_lane             41
#define spdoft_dtl_clk_mode_lane                        42
#define spdoft_rx_foffset_extra_m_lane                  43
#define spdoft_init_rxfoffs_lane                        45
#define spdoft_pu_f1p_d_e_lane                          47
#define spdoft_pu_f1n_d_e_lane                          48
#define spdoft_pu_f1p_s_e_lane                          49
#define spdoft_pu_f1n_s_e_lane                          50
#define spdoft_pu_f1p_d_o_lane                          51
#define spdoft_pu_f1n_d_o_lane                          52
#define spdoft_pu_f1p_s_o_lane                          53
#define spdoft_pu_f1n_s_o_lane                          54
#define spdoft_path_disable_edge_lane                   55
#define spdoft_dfe_f1_pol_en_d_lane                     56
#define spdoft_dfe_f1_pol_en_s_lane                     57
#define spdoft_dfe_f1_pol_d_lane                        58
#define spdoft_dfe_f1_pol_s_lane                        59
#define spdoft_reg_ana_rx_dfe_f1_pol_en_d_force_lane    60
#define spdoft_reg_ana_rx_dfe_f1_pol_en_s_force_lane    61
#define spdoft_reg_ana_rx_dfe_f1_pol_d_force_lane       62
#define spdoft_reg_ana_rx_dfe_f1_pol_s_force_lane       63
#define spdoft_reg_dfe_full_rate_mode_lane              64
#define spdoft_reg_dfe_dis_lane                         65
#define spdoft_reg_dfe_tap_settle_scale_lane            66
#define spdoft_ffe_data_rate_lane                       67
#define spdoft_rxdll_temp_a_lane                        68
#define spdoft_rxdll_temp_b_lane                        69

//phy_mode_lane
#define caloft_txdcc_pdiv_rate0_lane                    0
#define caloft_txdcc_pdiv_rate1_lane                    1
#define caloft_txdcc_pdiv_cont_rate0_lane               2
#define caloft_txdcc_pdiv_cont_rate1_lane               3
#define caloft_txdcc_pdiv_hg_rate0_lane                 4
#define caloft_txdcc_pdiv_hg_rate1_lane                 5
#define caloft_txdcc_rate0_lane                         6
#define caloft_txdcc_rate1_lane                         7
#define caloft_txdcc_cont_rate0_lane                    8
#define caloft_txdcc_cont_rate1_lane                    9
#define caloft_txdcc_hg_rate0_lane                      10
#define caloft_txdcc_hg_rate1_lane                      11
#define caloft_rxdcc_dll_rate0_lane                     12
#define caloft_rxdcc_dll_rate1_lane                     13
#define caloft_rxdcc_dll_cont_rate0_lane                14
#define caloft_rxdcc_dll_cont_rate1_lane                15
#define caloft_rxdcc_dll_hg_rate0_lane                  16
#define caloft_rxdcc_dll_hg_rate1_lane                  17
#define caloft_rxdcc_data_gen0_lane                     18
#define caloft_rxdcc_data_gen1_lane                     19
#define caloft_rxdcc_data_gen2_lane                     20
#define caloft_rxdcc_data_gen3_lane                     21
#define caloft_rxdcc_data_gen4_lane                     22
#define caloft_rxdcc_data_cont_gen0_lane                23
#define caloft_rxdcc_data_cont_gen1_lane                24
#define caloft_rxdcc_data_cont_gen2_lane                25
#define caloft_rxdcc_data_cont_gen3_lane                26
#define caloft_rxdcc_data_cont_gen4_lane                27
#define caloft_rxdcc_data_hg_gen0_lane                  28
#define caloft_rxdcc_data_hg_gen1_lane                  29
#define caloft_rxdcc_data_hg_gen2_lane                  30
#define caloft_rxdcc_data_hg_gen3_lane                  31
#define caloft_rxdcc_data_hg_gen4_lane                  32
#define caloft_rxdcc_eom_rate0_lane                     33
#define caloft_rxdcc_eom_rate1_lane                     34
#define caloft_rxdcc_eom_rate2_lane                     35
#define caloft_rxdcc_eom_rate3_lane                     36
#define caloft_rxdcc_eom_rate4_lane                     37
#define caloft_rxdcc_eom_cont_rate0_lane                38
#define caloft_rxdcc_eom_cont_rate1_lane                39
#define caloft_rxdcc_eom_cont_rate2_lane                40
#define caloft_rxdcc_eom_cont_rate3_lane                41
#define caloft_rxdcc_eom_cont_rate4_lane                42
#define caloft_rxdcc_eom_hg_rate0_lane                  43
#define caloft_rxdcc_eom_hg_rate1_lane                  44
#define caloft_rxdcc_eom_hg_rate2_lane                  45
#define caloft_rxdcc_eom_hg_rate3_lane                  46
#define caloft_rxdcc_eom_hg_rate4_lane                  47
#define caloft_dll_gmsel_rate0_lane                     48
#define caloft_dll_gmsel_rate1_lane                     49
#define caloft_vdda_dll_sel_rate0_lane                  50
#define caloft_vdda_dll_sel_rate1_lane                  51
#define caloft_vdda_dll_sel_cont_rate0_lane             52
#define caloft_vdda_dll_sel_cont_rate1_lane             53
#define caloft_dll_eom_gmsel_rate0_lane                 54
#define caloft_dll_eom_gmsel_rate1_lane                 55
#define caloft_vdda_dll_eom_sel_rate0_lane              56
#define caloft_vdda_dll_eom_sel_rate1_lane              57
#define caloft_vdda_dll_eom_sel_cont_rate0_lane         58
#define caloft_vdda_dll_eom_sel_cont_rate1_lane         59
#define caloft_eom_dpher_rate0_lane                     60
#define caloft_eom_dpher_rate1_lane                     61
#define caloft_align90_dummy_clk_rate0_div0_lane        62
#define caloft_align90_dummy_clk_rate0_div1_lane        63
#define caloft_align90_dummy_clk_rate1_div0_lane        64
#define caloft_align90_dummy_clk_rate1_div1_lane        65
#define caloft_align90_dummy_clk_cont_rate0_div0_lane   66
#define caloft_align90_dummy_clk_cont_rate0_div1_lane   67
#define caloft_align90_dummy_clk_cont_rate1_div0_lane   68
#define caloft_align90_dummy_clk_cont_rate1_div1_lane   69
#define caloft_align90_dac_rate0_div0_lane              70
#define caloft_align90_dac_rate0_div1_lane              71
#define caloft_align90_dac_rate1_div0_lane              72
#define caloft_align90_dac_rate1_div1_lane              73
#define caloft_align90_dac_cont_rate0_div0_lane         74
#define caloft_align90_dac_cont_rate0_div1_lane         75
#define caloft_align90_dac_cont_rate1_div0_lane         76
#define caloft_align90_dac_cont_rate1_div1_lane         77
#define caloft_align90_gm_rate0_div0_lane               78
#define caloft_align90_gm_rate0_div1_lane               79
#define caloft_align90_gm_rate1_div0_lane               80
#define caloft_align90_gm_rate1_div1_lane               81
#define caloft_align90_gm_cont_rate0_div0_lane          82
#define caloft_align90_gm_cont_rate0_div1_lane          83
#define caloft_align90_gm_cont_rate1_div0_lane          84
#define caloft_align90_gm_cont_rate1_div1_lane          85
#define caloft_sellv_txdata_gen0_lane                   86
#define caloft_sellv_txdata_gen1_lane                   87
#define caloft_sellv_txdata_gen2_lane                   88
#define caloft_sellv_txdata_gen3_lane                   89
#define caloft_sellv_txdata_gen4_lane                   90
#define caloft_sellv_txdata_cont_gen0_lane              91
#define caloft_sellv_txdata_cont_gen1_lane              92
#define caloft_sellv_txdata_cont_gen2_lane              93
#define caloft_sellv_txdata_cont_gen3_lane              94
#define caloft_sellv_txdata_cont_gen4_lane              95
#define caloft_sellv_txclk_gen0_lane                    96
#define caloft_sellv_txclk_gen1_lane                    97
#define caloft_sellv_txclk_gen2_lane                    98
#define caloft_sellv_txclk_gen3_lane                    99
#define caloft_sellv_txclk_gen4_lane                    100
#define caloft_sellv_txclk_cont_gen0_lane               101
#define caloft_sellv_txclk_cont_gen1_lane               102
#define caloft_sellv_txclk_cont_gen2_lane               103
#define caloft_sellv_txclk_cont_gen3_lane               104
#define caloft_sellv_txclk_cont_gen4_lane               105
#define caloft_sellv_rxdataclk_gen0_lane                106
#define caloft_sellv_rxdataclk_gen1_lane                107
#define caloft_sellv_rxdataclk_gen2_lane                108
#define caloft_sellv_rxdataclk_gen3_lane                109
#define caloft_sellv_rxdataclk_gen4_lane                110
#define caloft_sellv_rxdataclk_cont_gen0_lane           111
#define caloft_sellv_rxdataclk_cont_gen1_lane           112
#define caloft_sellv_rxdataclk_cont_gen2_lane           113
#define caloft_sellv_rxdataclk_cont_gen3_lane           114
#define caloft_sellv_rxdataclk_cont_gen4_lane           115
#define caloft_sellv_txpre_gen0_lane                    116
#define caloft_sellv_txpre_gen1_lane                    117
#define caloft_sellv_txpre_gen2_lane                    118
#define caloft_sellv_txpre_gen3_lane                    119
#define caloft_sellv_txpre_gen4_lane                    120
#define caloft_sellv_txpre_cont_gen0_lane               121
#define caloft_sellv_txpre_cont_gen1_lane               122
#define caloft_sellv_txpre_cont_gen2_lane               123
#define caloft_sellv_txpre_cont_gen3_lane               124
#define caloft_sellv_txpre_cont_gen4_lane               125
#define caloft_sellv_rxsampler_gen0_lane                126
#define caloft_sellv_rxsampler_gen1_lane                127
#define caloft_sellv_rxsampler_gen2_lane                128
#define caloft_sellv_rxsampler_gen3_lane                129
#define caloft_sellv_rxsampler_gen4_lane                130
#define caloft_sellv_rxsampler_cont_gen0_lane           131
#define caloft_sellv_rxsampler_cont_gen1_lane           132
#define caloft_sellv_rxsampler_cont_gen2_lane           133
#define caloft_sellv_rxsampler_cont_gen3_lane           134
#define caloft_sellv_rxsampler_cont_gen4_lane           135
#define caloft_sellv_rxeomclk_gen0_lane                 136
#define caloft_sellv_rxeomclk_gen1_lane                 137
#define caloft_sellv_rxeomclk_gen2_lane                 138
#define caloft_sellv_rxeomclk_gen3_lane                 139
#define caloft_sellv_rxeomclk_gen4_lane                 140
#define caloft_sellv_rxeomclk_cont_gen0_lane            141
#define caloft_sellv_rxeomclk_cont_gen1_lane            142
#define caloft_sellv_rxeomclk_cont_gen2_lane            143
#define caloft_sellv_rxeomclk_cont_gen3_lane            144
#define caloft_sellv_rxeomclk_cont_gen4_lane            145
#define spdoft_tx_preset_index_lane                     146 //manually added

//size should be %4 = 0
#define lc_size 32
#define ring_size 36
#define cal_cmn_size 32
#define gen_size 80
#define cal_lane_size 148

#define lc_speed_size 24
#define ring_speed_size 25
#define tx_speed_size 21
#define gen_speed_size 70

#define RING_SPDTBL_BASE    (SPDTBL_XDAT_CMN_BASE+(lc_size*7*2))
#define PHY_MODE_CMN_BASE   0xe5c0
#define PHY_MODE_LANE_BASE   0x6564
