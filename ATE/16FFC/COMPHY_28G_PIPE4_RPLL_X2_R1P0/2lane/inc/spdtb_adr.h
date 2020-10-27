//speed table address table

__code REG_t lcpll_spdtbl_ana[] = {

{0x82dc, 4, 0x8f},    //pll_reg_sel
{0xe61e, 0, 0x00},    //pll_rate_sel
{0x82a4, 0, 0x00},    //fbdiv lo
{0x82a0, 4, 0xcf},    //fbdiv hi
{0x6103, 0, 0x00},    //fbdiv_cal lo
{0x6103, 0, 0x00},    //fbdiv_cal hi
{0x82a8, 4, 0x0f},    //refdiv
{0x829c, 1, 0xfd},    //vind_band_sel
{0x82e8, 0, 0x00},    //div_1g lo
{0x82e4, 6, 0x3f},    //div_1g hi
{0x82e8, 0, 0x00},    //div_1g_fbck lo
{0x82e4, 6, 0x3f},    //div_1g_fbck hi
{0x8334, 0, 0xe0},    //icp_lc
{0x82a8, 0, 0xfc},    //pll_lpfr
{0x82a8, 2, 0xf3},    //pll_lpfc
{0x820c, 4, 0x0f},    //intpi_lcpll
{0x82ec, 6, 0x3f},    //tx_intpr
{0xa008, 0, 0x00},    //init_txfoffs lo
{0xa009, 0, 0xfc},    //init_txfoffs hi
{0xe61c, 0, 0x00},    //speed_thresh lo
{0xe61d, 0, 0x00},    //speed_thresh hi
{0x82c0, 4, 0xef},    //lccap_usb
{0xa00b, 2, 0xfb},    //ssc_acc_factor
{0xa009, 2, 0xc3},    //ssc_step_125ppm
{0xa00e, 0, 0x00},    //ssc_m lo
{0xa00f, 0, 0xe0},    //ssc_m hi
};

__code REG_t ringpll_spdtbl_ana[] = {

{0xe61f, 0, 0x00},    //pll_rate_sel_ring
{0x8334, 7, 0x7f},    //ref_clk_ring_sel
{0x82d4, 6, 0xbf},    //clk1g_refclk_sel
{0x82f0, 3, 0x87},    //pll_refdiv_ring
{0x82f4, 0, 0x00},    //pll_fbdiv_ring lo
{0x82f0, 1, 0xf9},    //pll_fbdiv_ring hi
{0x82f4, 0, 0x00},    //pll_fbdiv_ring_fbck lo
{0x82f0, 1, 0xf9},    //pll_fbdiv_ring_fbck hi
{0x82f8, 4, 0x0f},    //icp_ring
{0xe618, 0, 0x00},    //pll_speed_thresh_ring lo
{0xe619, 0, 0x00},    //pll_speed_thresh_ring hi
{0x6103, 0, 0x00},    //fbdiv_cal_ring lo
{0x6103, 0, 0x00},    //fbdiv_cal_ring hi
{0x820c, 0, 0xf0},    //intpi_ring
{0x8310, 4, 0xcf},    //tx_intpr_ring
{0x8300, 2, 0xfb},    //pll_band_sel_ring
{0x82fc, 6, 0x3f},    //pll_lpf_c1_sel_ring
{0x82fc, 4, 0xcf},    //pll_lpf_c2_sel_ring
{0x82f8, 1, 0xf1},    //pll_lpf_r1_sel_ring
{0xa010, 0, 0x00},    //init_txfoffs_ring lo
{0xa011, 0, 0xfc},    //init_txfoffs_ring hi
{0xa010, 0, 0x00},    //init_txfoffs_ring_fbck lo
{0xa011, 0, 0xfc},    //init_txfoffs_ring_fbck hi
{0xa013, 2, 0xfb},    //ssc_acc_factor_ring
{0xa00c, 0, 0xf0},    //ssc_step_125ppm_ring
{0xa016, 0, 0x00},    //ssc_m_ring lo
{0xa017, 0, 0xe0},    //ssc_m_ring hi
};

__code REG_t gen_spdtbl_ana[] = {

//tx
{0x6103, 0, 0x00},    //pll_rate_sel_tx
{0x0258, 3, 0xf7},    //tx_ck_sel_lane
{0x6103, 0, 0x00},    //tx_vddcal_rate_en_lane
{0x0258, 0, 0xf8},    //tx_speed_div_lane
{0x0048, 5, 0x1f},    //tx_reg_speed_trk_clk_lane
{0x0048, 2, 0xe3},    //tx_reg_speed_trk_data_lane
{0x2637, 5, 0xdf},    //tx_em_ctrl_reg_en_lane
{0x2637, 4, 0xef},    //tx_em_ctrl_pipe_sel_lane
{0x6103, 0, 0x00},    //tx_em_pre_en_lane
{0x2635, 0, 0xf0},    //tx_em_pre_ctrl_lane
{0x6103, 0, 0x00},    //tx_em_po_en_lane
{0x2634, 4, 0x0f},    //tx_em_po_ctrl_lane
{0x004c, 6, 0x3f},    //slewrate_en_lane
{0x004c, 2, 0xf3},    //slewctrl1_lane
{0x004c, 4, 0xcf},    //slewctrl0_lane
{0x2300, 4, 0xcf},    //tx_train_pat_sel_lane
{0x2124, 0, 0x00},    //train_pat_num_lane lo
{0x2125, 0, 0xfe},    //train_pat_num_lane hi
{0x2633, 3, 0xf7},    //tx_train_pat_toggle_lane
{0x2125, 7, 0x7f},    //packet_sync_dis_lane
{0x2126, 0, 0xfe},    //sync_det_dis_lane
//rx
{0x6103, 0, 0x00},    //pll_rate_sel_rx
{0x0258, 4, 0xef},    //rx_ck_sel_lane
{0x6103, 0, 0x00},    //rx_vddcal_rate_en_lane
{0x0228, 2, 0xe3},    //rx_speed_div_lane
{0x0228, 5, 0x1f},    //dtl_clk_speedup_lane
{0x002c, 1, 0xe1},    //intpi_lane
{0x0214, 0, 0xfc},    //intpr_lane
{0x001c, 6, 0x3f},    //dll_freq_sel_lane
{0x0074, 6, 0xbf},    //dll_freq_sel_lane hi
{0x0020, 0, 0xfc},    //eom_dll_freq_sel_lane
{0x0074, 7, 0x7f},    //eom_dll_freq_sel_lane hi
{0x0070, 3, 0xf7},    //align90_8g_en_lane
{0x0238, 5, 0x1f},    //rx_reg0p9_speed_track_clk_lane
{0x0238, 4, 0xef},    //rx_reg0p9_speed_track_clk_half_lane
{0x0238, 1, 0xf1},    //rx_reg0p9_speed_track_data_lane
{0x2165, 2, 0xe3},    //rx_selmufi_lane
{0x2165, 5, 0x1f},    //rx_selmuff_lane
{0x6103, 0, 0x00},    //reg_selmupi_lane
{0x6103, 0, 0x00},    //reg_selmupf_lane
{0x6103, 0, 0x00},    //rx_rxclk_25m_ctrl_lane
{0x6103, 0, 0x00},    //rx_rxclk_25m_div1p5_en_lane
{0x6103, 0, 0x00},    //rx_rxclk_25m_div_lane
{0x6103, 0, 0x00},    //rx_rxclk_25m_fix_div_en_lane
{0x2163, 4, 0xcf},    //dtl_clk_mode_lane
{0x2168, 0, 0x00},    //rx_foffset_extra_m_lane lo
{0x2169, 0, 0xc0},    //rx_foffset_extra_m_lane hi
{0x2164, 0, 0x00},    //init_rxfoffs_lane lo
{0x2165, 0, 0xfc},    //init_rxfoffs_lane hi
{0x005c, 3, 0xf7},    //pu_f1p_d_e_lane
{0x005c, 2, 0xfb},    //pu_f1n_d_e_lane
{0x005c, 1, 0xfd},    //pu_f1p_s_e_lane
{0x005c, 0, 0xfe},    //pu_f1n_s_e_lane
{0x0060, 7, 0x7f},    //pu_f1p_d_o_lane
{0x0060, 6, 0xbf},    //pu_f1n_d_o_lane
{0x0060, 5, 0xdf},    //pu_f1p_s_o_lane
{0x0060, 4, 0xef},    //pu_f1n_s_o_lane
{0x004c, 1, 0xfd},    //path_disable_edge_lane
{0x2419, 2, 0xfb},    //dfe_f1_pol_en_d_lane
{0x2419, 3, 0xf7},    //dfe_f1_pol_en_s_lane
{0x241a, 2, 0xfb},    //dfe_f1_pol_d_lane
{0x241a, 3, 0xf7},    //dfe_f1_pol_s_lane
{0x241d, 2, 0xfb},    //reg_ana_rx_dfe_f1_pol_en_d_force_lane
{0x241d, 3, 0xf7},    //reg_ana_rx_dfe_f1_pol_en_s_force_lane
{0x241e, 2, 0xfb},    //reg_ana_rx_dfe_f1_pol_d_force_lane
{0x241e, 3, 0xf7},    //reg_ana_rx_dfe_f1_pol_s_force_lane
{0x240d, 0, 0xfe},    //reg_dfe_full_rate_mode_lane
{0x240c, 6, 0xbf},    //reg_dfe_dis_lane
{0x240b, 0, 0xfc},    //reg_dfe_tap_settle_scale_lane
{0x0208, 4, 0x0f},    //ffe_data_rate_lane
{0x6103, 0, 0x00},    //rxdll_temp_a_lane
{0x6103, 0, 0x00},    //rxdll_temp_b_lane
};

