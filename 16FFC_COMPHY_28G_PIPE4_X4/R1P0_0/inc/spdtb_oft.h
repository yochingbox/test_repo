//speed table address offset
//speed_pll_PI0
#define spdoft_pll_reg_sel                              0
#define spdoft_pll_rate_sel                             1
#define spdoft_fbdiv                                    2
#define spdoft_fbdiv_cal                                4
#define spdoft_refdiv                                   6
#define spdoft_vind_band_sel                            7
#define spdoft_div_1g                                   8
#define spdoft_div_1g_fbck                              10
#define spdoft_icp                                      12
#define spdoft_pll_lpfr                                 13
#define spdoft_pll_lpfc                                 14
#define spdoft_init_txfoffs                             15
#define spdoft_speed_thresh                             17
//speed_pll_PI1
#define spdoft_pll_reg_sel_1                            19
#define spdoft_pll_rate_sel_1                           20
#define spdoft_fbdiv_1                                  21
#define spdoft_fbdiv_cal_1                              23
#define spdoft_refdiv_1                                 25
#define spdoft_vind_band_sel_1                          26
#define spdoft_div_1g_1                                 27
#define spdoft_div_1g_fbck_1                            29
#define spdoft_icp_1                                    31
#define spdoft_pll_lpfr_1                               32
#define spdoft_pll_lpfc_1                               33
#define spdoft_init_txfoffs_1                           34
#define spdoft_speed_thresh_1                           36
//speed_tx
#define spdoft_tx_use_ring_pll                          38
#define spdoft_tx_speeddiv                              39
#define spdoft_tx_reg_speed_trk_clk                     40
#define spdoft_tx_reg_speed_trk_data                    41
#define spdoft_ssc_acc_factor                           42
#define spdoft_ssc_step                                 43
#define spdoft_ssc_m                                    45
#define spdoft_tx_em_ctrl_reg_en_lane                   47
#define spdoft_tx_em_ctrl_pipe_sel_lane                 48
#define spdoft_slewrate_en                              49
#define spdoft_slewctrl1                                50
#define spdoft_slewctrl0                                51
//speed_rx
#define spdoft_rx_use_ring_pll                          52
#define spdoft_rx_speed_div                             53
#define spdoft_dtl_clk_speedup                          54
#define spdoft_intpi                                    55
#define spdoft_intpr                                    56
#define spdoft_dll_freq_sel                             57
#define spdoft_rx_reg0p9_speed_track_clk                58
#define spdoft_rx_reg0p9_speed_track_clk_half           59
#define spdoft_rx_reg0p9_speed_track_data               60
#define spdoft_selmufi                                  61
#define spdoft_selmuff                                  62
#define spdoft_selmupi                                  63
#define spdoft_selmupf                                  64
#define spdoft_dtl_clk_mode                             65
#define spdoft_rx_foffset_extra_m                       66
#define spdoft_init_rxfoffs                             68
#define spdoft_pu_f1p_d_e                               70
#define spdoft_pu_f1n_d_e                               71
#define spdoft_pu_f1p_s_e                               72
#define spdoft_pu_f1n_s_e                               73
#define spdoft_pu_f1p_d_o                               74
#define spdoft_pu_f1n_d_o                               75
#define spdoft_pu_f1p_s_o                               76
#define spdoft_pu_f1n_s_o                               77
#define spdoft_path_disable_edge                        78
#define spdoft_dfe_f1_pol_en_d                          79
#define spdoft_dfe_f1_pol_en_s                          80
#define spdoft_dfe_f1_pol_d                             81
#define spdoft_dfe_f1_pol_s                             82
#define spdoft_reg_ana_rx_dfe_f1_pol_en_d_force         83
#define spdoft_reg_ana_rx_dfe_f1_pol_en_s_force         84
#define spdoft_reg_ana_rx_dfe_f1_pol_d_force            85
#define spdoft_reg_ana_rx_dfe_f1_pol_s_force            86
#define spdoft_reg_dfe_full_rate_mode_lane              87
#define spdoft_reg_dfe_dis_lane                         88
#define spdoft_reg_dfe_tap_settle_scale                 89
#define spdoft_ffe_data_rate_lane                       90

#define lc_size 92 //should be %4 = 0

// ----------------
//ring speed table address offset
//speed_pll_PI0
#define spdoft_pll_rate_sel0_ring                        0
#define spdoft_clk1g_refclk_sel                         1
#define spdoft_pll_refdiv_ring                          2
#define spdoft_pll_fbdiv_ring                           3
#define spdoft_pll_fbdiv_ring_fbck                      5
#define spdoft_icp_ring                                 7
#define spdoft_pll_speed_thresh_ring                    8
#define spdoft_fbdiv_cal_ring                           10
#define spdoft_pll_rate_sel_ring                        12
#define spdoft_intpi_ring                               13
#define spdoft_tx_intpr_ring                            14
#define spdoft_pll_band_sel_ring                        15
#define spdoft_pll_lpf_c1_sel_ring                      16
#define spdoft_pll_lpf_c2_sel_ring                      17
#define spdoft_pll_lpf_r1_sel_ring                      18
#define spdoft_init_txfoffs_ring                        19
#define spdoft_init_txfoffs_ring_fbck                   21
//speed_pll_PI1
#define spdoft_pll_rate_sel0_ring_1                      23
#define spdoft_clk1g_refclk_sel_1                       24
#define spdoft_pll_refdiv_ring_1                        25
#define spdoft_pll_fbdiv_ring_1                         26
#define spdoft_pll_fbdiv_ring_fbck_1                    28
#define spdoft_icp_ring_1                               30
#define spdoft_pll_speed_thresh_ring_1                  31
#define spdoft_fbdiv_cal_ring_1                         33
#define spdoft_pll_rate_sel_ring_1                      35
#define spdoft_intpi_ring_1                             36
#define spdoft_tx_intpr_ring_1                          37
#define spdoft_pll_band_sel_ring_1                      38
#define spdoft_pll_lpf_c1_sel_ring_1                    39
#define spdoft_pll_lpf_c2_sel_ring_1                    40
#define spdoft_pll_lpf_r1_sel_ring_1                    41
#define spdoft_init_txfoffs_ring_1                      42
#define spdoft_init_txfoffs_ring_fbck_1                 44

#define ring_size 48 //should be %4 = 0

#define RING_SPDTBL_BASE (SPDTBL_BASE+4+(lc_size*5))
