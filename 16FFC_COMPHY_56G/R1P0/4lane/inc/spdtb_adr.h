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
{0xa008, 0, 0x00},    //init_txfoffs lo
{0xa009, 0, 0xfc},    //init_txfoffs hi
{0xe61c, 0, 0x00},    //speed_thresh lo
{0xe61d, 0, 0x00},    //speed_thresh hi
{0x82c0, 4, 0xef},    //lccap_usb
{0xa00b, 2, 0xfb},    //ssc_acc_factor
{0xa00c, 0, 0x00},    //ssc_step lo
{0xa00d, 0, 0xf8},    //ssc_step hi
{0xa00e, 0, 0x00},    //ssc_m lo
{0xa00f, 0, 0xe0},    //ssc_m hi
};

__code REG_t ringpll_spdtbl_ana[] = {

{0xe61f, 0, 0x00},    //pll_rate_sel_ring
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
{0xa014, 0, 0x00},    //ssc_step_ring lo
{0xa015, 0, 0xf8},    //ssc_step_ring hi
{0xa016, 0, 0x00},    //ssc_m_ring lo
{0xa017, 0, 0xe0},    //ssc_m_ring hi
};

__code REG_t gen_spdtbl_ana[] = {

//tx
{0x6103, 0, 0x00},    //pll_rate_sel_tx
{0x6103, 0, 0x00},    //tx_ck_sel_lane
{0x6103, 0, 0x00},    //tx_vddcal_rate_en_lane
{0x6103, 0, 0x00},    //tx_speeddiv_lane
{0x015c, 0, 0xf8},    //txreg_speedtrk_clk_lane
{0x0160, 0, 0xf8},    //txreg_speedtrk_data_lane
{0x00fc, 5, 0xdf},    //slewrate_en_lane
{0x0108, 0, 0xfc},    //slewctrl1_lane
{0x0108, 2, 0xf3},    //slewctrl0_lane
{0x0108, 7, 0x7f},    //slew_no_em_lane
{0x2037, 5, 0xdf},    //tx_pam2_en_lane
{0x2801, 6, 0x3f},    //ethernet_mode_lane
{0x2300, 4, 0xcf},    //tx_train_pat_sel_lane
{0x2825, 3, 0xf7},    //tx_train_pat_mode_lane
{0x2824, 0, 0x00},    //train_pat_num_lane lo
{0x2825, 0, 0xfc},    //train_pat_num_lane hi
{0x2825, 2, 0xfb},    //tx_train_pat_toggle_lane
{0x283c, 0, 0x80},    //tx_amp_default1_lane
{0x2840, 0, 0xe0},    //tx_emph0_default1_lane
{0x2844, 0, 0xe0},    //tx_emph1_default1_lane
{0x2848, 0, 0xe0},    //tx_emph2_default1_lane
{0x283d, 0, 0x80},    //tx_amp_default2_lane
{0x2841, 0, 0xe0},    //tx_emph0_default2_lane
{0x2845, 0, 0xe0},    //tx_emph1_default2_lane
{0x2849, 0, 0xe0},    //tx_emph2_default2_lane
{0x283e, 0, 0x80},    //tx_amp_default3_lane
{0x2842, 0, 0xe0},    //tx_emph0_default3_lane
{0x2846, 0, 0xe0},    //tx_emph1_default3_lane
{0x284a, 0, 0xe0},    //tx_emph2_default3_lane
//rx
{0x6103, 0, 0x00},    //pll_rate_sel_rx
{0x6103, 0, 0x00},    //rx_ck_sel_lane
{0x6103, 0, 0x00},    //rx_vddcal_rate_en_lane
{0x6103, 0, 0x00},    //rx_speed_div_lane
{0x0088, 0, 0xf8},    //dtl_clk_speedup_lane
{0x00b0, 0, 0xf0},    //intpi_lane
{0x00b4, 0, 0xfc},    //intpr_lane
{0x0080, 0, 0xfc},    //dll_freq_sel_lane
{0x0098, 0, 0xfc},    //eom_dll_freq_sel_lane
{0x00e4, 0, 0xf8},    //rxreg_speedtrk_data_lane
{0x00e0, 0, 0xf8},    //rxreg_speedtrk_clk_lane
{0x00e8, 3, 0xf7},    //rxreg_speedtrk_clk_half_lane
{0x6103, 0, 0x00},    //selmufi_lane
{0x6103, 0, 0x00},    //selmuff_lane
{0x6103, 0, 0x00},    //selmupi_lane
{0x6103, 0, 0x00},    //selmupf_lane
{0x2163, 4, 0xcf},    //dtl_clk_mode_lane
{0x2168, 0, 0x00},    //rx_foffset_extra_m_lane lo
{0x2169, 0, 0xc0},    //rx_foffset_extra_m_lane hi
{0x2164, 0, 0x00},    //init_rxfoffs_lane lo
{0x2165, 0, 0xfc},    //init_rxfoffs_lane hi
{0x00c0, 3, 0xc7},    //pu_smplr_d_e_lane
{0x00c8, 3, 0xc7},    //pu_smplr_s_e_lane
{0x00c0, 0, 0xf8},    //pu_smplr_d_o_lane
{0x00c8, 0, 0xf8},    //pu_smplr_s_o_lane
{0x00b8, 5, 0xdf},    //path_disable_edge_lane
{0x240d, 0, 0xfe},    //reg_dfe_full_rate_mode_lane
{0x240c, 6, 0xbf},    //reg_dfe_dis_lane
{0x2407, 2, 0xf3},    //reg_dfe_tap_settle_scale_lane
{0x6103, 0, 0x00},    //rxdll_temp_a_lane
{0x6103, 0, 0x00},    //rxdll_temp_b_lane
{0x2402, 6, 0xbf},    //dfe_pam2_mode_lane
{0x2107, 5, 0xdf},    //rx_pam2_en_lane
};

