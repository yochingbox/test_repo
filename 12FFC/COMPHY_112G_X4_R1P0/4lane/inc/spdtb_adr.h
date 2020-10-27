//speed table address table

__code REG_t lcpll_spdtbl_ana[] = {

{0x6103, 0, 0x00},    //pll_reg_sel
{0xe61e, 0, 0x00},    //pll_rate_sel
{0x6103, 0, 0x00},    //fbdiv lo
{0x6103, 0, 0x00},    //fbdiv hi
{0x6103, 0, 0x00},    //fbdiv_cal lo
{0x6103, 0, 0x00},    //fbdiv_cal hi
{0x6103, 0, 0x00},    //refdiv
{0x6103, 0, 0x00},    //vind_band_sel
{0x6103, 0, 0x00},    //div_1g lo
{0x6103, 0, 0x00},    //div_1g hi
{0x6103, 0, 0x00},    //div_1g_fbck lo
{0x6103, 0, 0x00},    //div_1g_fbck hi
{0x6103, 0, 0x00},    //pll_icp
{0x6103, 0, 0x00},    //pll_lpfr
{0x6103, 0, 0x00},    //pll_lpfc
{0x6103, 0, 0x00},    //init_txfoffs lo
{0x6103, 0, 0x00},    //init_txfoffs hi
{0xe61c, 0, 0x00},    //speed_thresh lo
{0xe61d, 0, 0x00},    //speed_thresh hi
{0x6103, 0, 0x00},    //lccap_usb
{0x6103, 0, 0x00},    //ssc_acc_factor
{0x6103, 0, 0x00},    //ssc_step_125ppm
{0x6103, 0, 0x00},    //ssc_m lo
{0x6103, 0, 0x00},    //ssc_m hi
};

__code REG_t gen_spdtbl_ana[] = {

//tx
{0x6103, 0, 0x00},    //pll_rate_sel_tx
{0x6103, 0, 0x00},    //tx_vddcal_rate_en_lane
{0x6103, 0, 0x00},    //tx_speeddiv_lane
{0x015c, 0, 0xf8},    //txreg_speedtrk_clk_lane
{0x0160, 0, 0xf8},    //txreg_speedtrk_data_lane
{0x2037, 5, 0xdf},    //tx_pam2_en_lane
{0x2037, 6, 0xbf},    //tx_halfrate_en_lane
{0x2300, 4, 0xcf},    //tx_train_pat_sel_lane
//rx
{0x6103, 0, 0x00},    //pll_rate_sel_rx
{0x6103, 0, 0x00},    //rx_vddcal_rate_en_lane
{0x6103, 0, 0x00},    //rx_speed_div_lane
{0x0088, 0, 0xf8},    //dtl_clk_speedup_lane
{0x00b0, 0, 0xf0},    //rxintpi_lane
{0x00ec, 0, 0xfc},    //intpr_lane
{0x0080, 0, 0xf8},    //dll_freq_sel_lane
{0x0098, 0, 0xf8},    //eom_dll_freq_sel_lane
{0x00e4, 0, 0xf8},    //rxreg_speedtrk_data_lane
{0x00e0, 0, 0xf8},    //rxreg_speedtrk_clk_lane
{0x00f0, 0, 0xfe},    //rxreg_speedtrk_clk_half_lane
{0x6103, 0, 0x00},    //selmufi_lane
{0x6103, 0, 0x00},    //selmuff_lane
{0x6103, 0, 0x00},    //selmupi_lane
{0x6103, 0, 0x00},    //selmupf_lane
{0x2163, 4, 0xcf},    //dtl_clk_mode_lane
{0x2168, 0, 0x00},    //rx_foffset_extra_m_lane lo
{0x2169, 0, 0xc0},    //rx_foffset_extra_m_lane hi
{0x2164, 0, 0x00},    //init_rxfoffs_lane lo
{0x2165, 0, 0xe0},    //init_rxfoffs_lane hi
{0x00d4, 3, 0xc7},    //pu_smplr_d_p2_lane
{0x00d8, 3, 0xc7},    //pu_smplr_s_p2_lane
{0x00d4, 0, 0xf8},    //pu_smplr_d_p4_lane
{0x00d8, 0, 0xf8},    //pu_smplr_s_p4_lane
{0x0100, 0, 0xfe},    //path_disable_edge_p2p4_lane
{0x0008, 0, 0xfe},    //path_disable_edge_p1p3_lane
{0x00c0, 3, 0xc7},    //pu_smplr_d_p1_lane
{0x00c8, 3, 0xc7},    //pu_smplr_s_p1_lane
{0x00c0, 0, 0xf8},    //pu_smplr_d_p3_lane
{0x00c8, 0, 0xf8},    //pu_smplr_s_p3_lane
{0x0104, 1, 0xfd},    //path_disable_d_p1p3_lane
{0x0104, 0, 0xfe},    //path_disable_s_p1p3_lane
{0x0278, 1, 0xf9},    //rxclk_25m_ctrl_lane
{0x0278, 0, 0xfe},    //rxclk_25m_div1p5_en_lane
{0x0264, 0, 0x00},    //rxclk_25m_div_lane
{0x0278, 3, 0xf7},    //rxclk_25m_fix_div_en_lane
{0x0130, 0, 0xfc},    //ctle_low_speed_sel_lane
{0x0134, 1, 0xfd},    //ctle_bypass1_en_lane
{0x0134, 0, 0xfe},    //ctle_bypass2_en_lane
{0x0050, 0, 0xf0},    //ctle_current1_sel_lane
{0x0060, 0, 0xf0},    //ctle_rl1_sel_lane
{0x007c, 0, 0xf0},    //ctle_rf_ctrl_lane
{0x0198, 0, 0xf0},    //ctle_rl1_tia_sel_lane
{0x019c, 0, 0xf0},    //ctle_current1_tia_sel_lane
{0x02b8, 0, 0xf0},    //ctle_rl2_sel_g_p2_lane
{0x01a4, 0, 0xf0},    //ctle_current2_sel_g_p2_lane
{0x02c0, 0, 0xf0},    //ctle_rl2_sel_g_p4_lane
{0x01ec, 0, 0xf0},    //ctle_current2_sel_g_p4_lane
{0x030c, 0, 0xf0},    //dfe_cur_sel_g_lane
{0x6103, 0, 0x00},    //reg_dfe_full_rate_mode_lane
{0x2410, 6, 0xbf},    //reg_dfe_dis_lane
{0x6103, 0, 0x00},    //reg_dfe_tap_settle_scale_lane
{0x6103, 0, 0x00},    //rxdll_temp_a_lane
{0x6103, 0, 0x00},    //rxdll_temp_b_lane
{0x2402, 6, 0xbf},    //dfe_pam2_mode_lane
{0x2107, 5, 0xdf},    //rx_pam2_en_lane
{0x2107, 6, 0xbf},    //rx_halfrate_en_lane
};

