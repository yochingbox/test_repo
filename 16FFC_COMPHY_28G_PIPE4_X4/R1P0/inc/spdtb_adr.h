//speed table address table

__code REG_t lcpll_spdtbl_ana[] = {

{0x82dc, 4, 0x8f},    //pll_reg_sel
{0xe41a, 0, 0x00},    //pll_rate_sel
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
{0x82ac, 4, 0x0f},    //icp
{0x82a8, 0, 0xfc},    //pll_lpfr
{0x82a8, 2, 0xf3},    //pll_lpfc
{0xa008, 0, 0x00},    //init_txfoffs lo
{0xa009, 0, 0xfc},    //init_txfoffs hi
{0xe418, 0, 0x00},    //speed_thresh lo
{0xe419, 0, 0x00},    //speed_thresh hi
{0x82c0, 4, 0xef},    //lccap_usb
{0xa00b, 2, 0xfb},    //ssc_acc_factor
{0xa00c, 0, 0x00},    //ssc_step lo
{0xa00d, 0, 0xf8},    //ssc_step hi
{0xa00e, 0, 0x00},    //ssc_m lo
{0xa00f, 0, 0xe0},    //ssc_m hi
};

__code REG_t ringpll_spdtbl_ana[] = {

{0xe41b, 0, 0x00},    //pll_rate_sel_ring
{0x82d4, 6, 0xbf},    //clk1g_refclk_sel
{0x6103, 0, 0x00},    //lcpll_rate_sel_refclk
{0x82f0, 3, 0x87},    //pll_refdiv_ring
{0x82f4, 0, 0x00},    //pll_fbdiv_ring lo
{0x82f0, 1, 0xf9},    //pll_fbdiv_ring hi
{0x82f4, 0, 0x00},    //pll_fbdiv_ring_fbck lo
{0x82f0, 1, 0xf9},    //pll_fbdiv_ring_fbck hi
{0x82f8, 4, 0x0f},    //icp_ring
{0xe414, 0, 0x00},    //pll_speed_thresh_ring lo
{0xe415, 0, 0x00},    //pll_speed_thresh_ring hi
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
{0xa014, 0, 0x00},    //ssc_step_ring lo
{0xa015, 0, 0xf8},    //ssc_step_ring hi
{0xa016, 0, 0x00},    //ssc_m_ring lo
{0xa017, 0, 0xe0},    //ssc_m_ring hi
};

__code REG_t gen_spdtbl_ana[] = {

//tx
{0x6103, 0, 0x00},    //pll_rate_sel_tx
{0x6103, 0, 0x00},    //tx_vdd_cal_en
{0x0258, 3, 0xf7},    //tx_ck_sel_lane
{0x6103, 0, 0x00},    //tx_vddcal_rate_en
{0x6103, 0, 0x00},    //tx_speeddiv
{0x6103, 0, 0x00},    //tx_reg_speed_trk_clk
{0x6103, 0, 0x00},    //tx_reg_speed_trk_data
{0x2637, 5, 0xdf},    //tx_em_ctrl_reg_en_lane
{0x2637, 4, 0xef},    //tx_em_ctrl_pipe_sel_lane
{0x6103, 0, 0x00},    //tx_em_pre_en_lane
{0x2635, 0, 0xf0},    //tx_em_pre_ctrl_lane
{0x6103, 0, 0x00},    //tx_em_po_en_lane
{0x2634, 4, 0x0f},    //tx_em_po_ctrl_lane
{0x6103, 0, 0x00},    //slewrate_en
{0x6103, 0, 0x00},    //slewctrl1
{0x6103, 0, 0x00},    //slewctrl0
{0x2301, 0, 0xfc},    //tx_train_pat_sel_lane
{0x2126, 0, 0x01},    //train_pat_num_lane lo
{0x2127, 1, 0xfc},    //train_pat_num_lane hi
{0x2633, 3, 0xf7},    //tx_train_pat_toggle_lane
{0x2124, 6, 0xbf},    //packet_sync_dis_lane
{0x2124, 7, 0x7f},    //sync_det_dis_lane
//rx
{0x6103, 0, 0x00},    //pll_rate_sel_rx
{0x6103, 0, 0x00},    //rx_vdd_cal_en
{0x0258, 4, 0xef},    //rx_ck_sel_lane
{0x6103, 0, 0x00},    //rx_vddcal_rate_en
{0x6103, 0, 0x00},    //rx_speed_div
{0x6103, 0, 0x00},    //dtl_clk_speedup
{0x6103, 0, 0x00},    //intpi
{0x6103, 0, 0x00},    //intpr
{0x6103, 0, 0x00},    //dll_freq_sel
{0x6103, 0, 0x00},    //eom_dll_freq_sel
{0x6103, 0, 0x00},    //rx_reg0p9_speed_track_clk
{0x6103, 0, 0x00},    //rx_reg0p9_speed_track_clk_half
{0x6103, 0, 0x00},    //rx_reg0p9_speed_track_data
{0x6103, 0, 0x00},    //selmufi
{0x6103, 0, 0x00},    //selmuff
{0x6103, 0, 0x00},    //selmupi
{0x6103, 0, 0x00},    //selmupf
{0x6103, 0, 0x00},    //dtl_clk_mode
{0x6103, 0, 0x00},    //rx_foffset_extra_m lo
{0x6103, 0, 0x00},    //rx_foffset_extra_m hi
{0x6103, 0, 0x00},    //init_rxfoffs lo
{0x6103, 0, 0x00},    //init_rxfoffs hi
{0x6103, 0, 0x00},    //pu_f1p_d_e
{0x6103, 0, 0x00},    //pu_f1n_d_e
{0x6103, 0, 0x00},    //pu_f1p_s_e
{0x6103, 0, 0x00},    //pu_f1n_s_e
{0x6103, 0, 0x00},    //pu_f1p_d_o
{0x6103, 0, 0x00},    //pu_f1n_d_o
{0x6103, 0, 0x00},    //pu_f1p_s_o
{0x6103, 0, 0x00},    //pu_f1n_s_o
{0x6103, 0, 0x00},    //path_disable_edge
{0x6103, 0, 0x00},    //dfe_f1_pol_en_d
{0x6103, 0, 0x00},    //dfe_f1_pol_en_s
{0x6103, 0, 0x00},    //dfe_f1_pol_d
{0x6103, 0, 0x00},    //dfe_f1_pol_s
{0x6103, 0, 0x00},    //reg_ana_rx_dfe_f1_pol_en_d_force
{0x6103, 0, 0x00},    //reg_ana_rx_dfe_f1_pol_en_s_force
{0x6103, 0, 0x00},    //reg_ana_rx_dfe_f1_pol_d_force
{0x6103, 0, 0x00},    //reg_ana_rx_dfe_f1_pol_s_force
{0x240d, 0, 0xfe},    //reg_dfe_full_rate_mode_lane
{0x240c, 6, 0xbf},    //reg_dfe_dis_lane
{0x6103, 0, 0x00},    //reg_dfe_tap_settle_scale
{0x0208, 4, 0x0f},    //ffe_data_rate_lane
};

