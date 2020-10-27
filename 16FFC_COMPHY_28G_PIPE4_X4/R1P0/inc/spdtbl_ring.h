#ifdef _USB
#if _REF_SEL == 0
#if _GEN == 1
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0190;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0190;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0064;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0064;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 2
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0190;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0190;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0064;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0064;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#endif
#if _REF_SEL == 1
#if _GEN == 1
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x014d;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x014d;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x03df;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x03df;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0053;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0053;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0e;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x037d;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x037d;
#endif
#if _GEN == 2
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x014d;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x014d;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x03df;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x03df;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0053;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0053;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0e;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x037d;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x037d;
#endif
#endif
#if _REF_SEL == 2
#if _GEN == 1
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x003e;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x003e;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x02fa;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x02fa;
#endif
#if _GEN == 2
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x003e;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x003e;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x02fa;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x02fa;
#endif
#endif
#if _REF_SEL == 3
#if _GEN == 1
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00c8;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00c8;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 2
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00c8;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00c8;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#endif
#if _REF_SEL == 4
#if _GEN == 1
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00a0;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00a0;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 2
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00a0;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00a0;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#endif
#if _REF_SEL == 5
#if _GEN == 1
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0064;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0064;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0019;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0019;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 2
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0064;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0064;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0019;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0019;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#endif
#if _REF_SEL == 6
#if _GEN == 1
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0050;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0050;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0014;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0014;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 2
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0050;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0050;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0014;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0014;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#endif
#if _REF_SEL == 7
#if _GEN == 1
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0040;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0040;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fb;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0010;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0010;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fb;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 2
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0040;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0040;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fb;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0010;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0010;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fb;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#endif
#if _REF_SEL == 8
#if _GEN == 1
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x00;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x00;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 2
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x00;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x00;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#endif
#endif

#ifdef _SERDES
#if _REF_SEL == 0
#if _GEN == 0
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0190;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0190;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0064;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0064;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 4
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x019c;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x019c;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0029;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x03d8;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x03d8;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0067;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0067;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0029;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x03d8;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x03d8;
#endif
#if _GEN == 6
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x01f4;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x01f4;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x007d;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x007d;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 7
#endif
#if _GEN == 9
#endif
#endif
#if _REF_SEL == 1
#if _GEN == 0
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x014d;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x014d;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x03df;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x03df;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0053;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0053;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0e;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x037d;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x037d;
#endif
#if _GEN == 4
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0158;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0158;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0029;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0018;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0018;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0056;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0056;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0029;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0018;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0018;
#endif
#if _GEN == 6
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x01a1;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x01a1;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x001a;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x001a;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0068;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0068;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x03cc;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x03cc;
#endif
#if _GEN == 7
#endif
#if _GEN == 9
#endif
#endif
#if _REF_SEL == 2
#if _GEN == 0
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x003e;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x003e;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x02fa;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x02fa;
#endif
#if _GEN == 4
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0102;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0102;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0029;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0018;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0018;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0040;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0040;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0029;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x031a;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x031a;
#endif
#if _GEN == 6
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0138;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0138;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x03cc;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x03cc;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x004e;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x004e;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0e;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x03cc;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x03cc;
#endif
#if _GEN == 7
#endif
#if _GEN == 9
#endif
#endif
#if _REF_SEL == 3
#if _GEN == 0
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00c8;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00c8;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 4
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00ce;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00ce;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0029;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x03d8;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x03d8;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0034;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0034;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0029;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0116;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0116;
#endif
#if _GEN == 6
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x003e;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x003e;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0e;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x02fa;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x02fa;
#endif
#if _GEN == 7
#endif
#if _GEN == 9
#endif
#endif
#if _REF_SEL == 4
#if _GEN == 0
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00a0;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00a0;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 4
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00a5;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00a5;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fe;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0029;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0029;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0029;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fe;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0029;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0339;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0339;
#endif
#if _GEN == 6
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00c8;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00c8;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0e;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 7
#endif
#if _GEN == 9
#endif
#endif
#if _REF_SEL == 5
#if _GEN == 0
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0064;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0064;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0019;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0019;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 4
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0067;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0067;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0029;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x03d8;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x03d8;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x001a;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x001a;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0029;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0116;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0116;
#endif
#if _GEN == 6
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x007d;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x007d;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0e;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x001f;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x001f;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0e;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x02fa;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x02fa;
#endif
#if _GEN == 7
#endif
#if _GEN == 9
#endif
#endif
#if _REF_SEL == 6
#if _GEN == 0
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0050;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0050;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0014;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0014;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 4
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00a5;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00a5;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0029;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0029;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0029;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0029;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0339;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0339;
#endif
#if _GEN == 6
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0064;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0064;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0e;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0019;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0019;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 7
#endif
#if _GEN == 9
#endif
#endif
#if _REF_SEL == 7
#if _GEN == 0
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0040;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0040;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fb;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0010;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0010;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fb;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 4
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0042;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0042;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fd;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0029;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0021;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0021;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0e;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fd;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0029;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 6
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0050;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0050;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0e;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fb;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0014;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0014;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fb;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 7
#endif
#if _GEN == 9
#endif
#endif
#if _REF_SEL == 8
#if _GEN == 0
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x00;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x00;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 4
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x00;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00a5;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00a5;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0029;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x00;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0029;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0029;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0029;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0339;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0339;
#endif
#if _GEN == 6
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x00;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x00;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 7
#endif
#if _GEN == 9
#endif
#endif
#endif

#ifdef _SAS
#if _REF_SEL == 0
#if _GEN == 0
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x01e0;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x01e0;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0e;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0078;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0078;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 1
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x01e0;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x01e0;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0e;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0078;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0078;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 2
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x01e0;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x01e0;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0e;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0078;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0078;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 3
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x01e0;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x01e0;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0e;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0078;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0078;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 4
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x01c2;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x01c2;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0070;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0070;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x036e;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x036e;
#endif
#endif
#if _REF_SEL == 1
#if _GEN == 0
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0190;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0190;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0064;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0064;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 1
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0190;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0190;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0064;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0064;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 2
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0190;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0190;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0064;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0064;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 3
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0190;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0190;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0064;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0064;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 4
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0177;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0177;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x005e;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x005e;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0057;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0057;
#endif
#endif
#if _REF_SEL == 2
#if _GEN == 0
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x012c;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x012c;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x004b;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x004b;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 1
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x012c;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x012c;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x004b;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x004b;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 2
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x012c;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x012c;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x004b;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x004b;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 3
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x012c;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x012c;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x004b;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x004b;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 4
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0119;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0119;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0b;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x03e3;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x03e3;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0046;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0046;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x036e;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x036e;
#endif
#endif
#if _REF_SEL == 3
#if _GEN == 0
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00f0;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00f0;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x003c;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x003c;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 1
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00f0;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00f0;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x003c;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x003c;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 2
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00f0;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00f0;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x003c;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x003c;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 3
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00f0;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00f0;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x003c;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x003c;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 4
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00e1;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00e1;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0038;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0038;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x036e;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x036e;
#endif
#endif
#if _REF_SEL == 4
#if _GEN == 0
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00c0;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00c0;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 1
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00c0;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00c0;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 2
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00c0;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00c0;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 3
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00c0;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00c0;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 4
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00b4;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00b4;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#endif
#if _REF_SEL == 5
#if _GEN == 0
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0078;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0078;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x001e;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x001e;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 1
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0078;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0078;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x001e;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x001e;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 2
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0078;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0078;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x001e;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x001e;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 3
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0078;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0078;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x001e;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x001e;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 4
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00e1;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00e1;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x001c;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x001c;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x036e;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x036e;
#endif
#endif
#if _REF_SEL == 6
#if _GEN == 0
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0060;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0060;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0018;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0018;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 1
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0060;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0060;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0018;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0018;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 2
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0060;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0060;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0018;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0018;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 3
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0060;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0060;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0018;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0018;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 4
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x005a;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x005a;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#endif
#if _REF_SEL == 7
#if _GEN == 0
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x004d;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x004d;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fb;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0055;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0055;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x003a;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x003a;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fb;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x00e4;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x00e4;
#endif
#if _GEN == 1
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x004d;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x004d;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fb;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0055;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0055;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x003a;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x003a;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fb;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x00e4;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x00e4;
#endif
#if _GEN == 2
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x004d;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x004d;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fb;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0055;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0055;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x003a;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x003a;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fb;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x00e4;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x00e4;
#endif
#if _GEN == 3
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x004d;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x004d;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fb;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0055;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0055;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x003a;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x003a;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fb;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x00e4;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x00e4;
#endif
#if _GEN == 4
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0048;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0048;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fb;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0012;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0012;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fb;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#endif
#if _REF_SEL == 8
#if _GEN == 0
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x00;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x002f;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x002f;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x00;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x002f;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x002f;
#endif
#if _GEN == 1
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x00;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x002f;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x002f;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x00;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x002f;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x002f;
#endif
#if _GEN == 2
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x00;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x002f;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x002f;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x00;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x002f;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x002f;
#endif
#if _GEN == 3
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x00;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x002f;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x002f;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x00;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x002f;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x002f;
#endif
#if _GEN == 4
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x00;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x00;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#endif
#endif

#ifdef _PCIE
#if _REF_SEL == 0
#if _GEN == 0
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0190;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0190;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0064;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0064;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 1
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0190;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0190;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0064;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0064;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 2
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0140;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0140;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0e;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0050;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0050;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0e;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 3
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0140;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0140;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0e;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0050;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0050;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0e;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#endif
#if _REF_SEL == 1
#if _GEN == 0
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x014d;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x014d;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x03df;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x03df;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0053;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0053;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0e;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x037d;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x037d;
#endif
#if _GEN == 1
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x014d;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x014d;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x03df;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x03df;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0053;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0053;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0e;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x037d;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x037d;
#endif
#if _GEN == 2
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x010b;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x010b;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0029;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0029;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0043;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0043;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x00a4;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x00a4;
#endif
#if _GEN == 3
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x010b;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x010b;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0029;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0029;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0043;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0043;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x00a4;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x00a4;
#endif
#endif
#if _REF_SEL == 2
#if _GEN == 0
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x003e;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x003e;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x02fa;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x02fa;
#endif
#if _GEN == 1
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x003e;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x003e;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x02fa;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x02fa;
#endif
#if _GEN == 2
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00c8;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00c8;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0e;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0e;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 3
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00c8;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00c8;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0e;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0e;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#endif
#if _REF_SEL == 3
#if _GEN == 0
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00c8;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00c8;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 1
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00c8;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00c8;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 2
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00a0;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00a0;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 3
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00a0;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00a0;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#endif
#if _REF_SEL == 4
#if _GEN == 0
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00a0;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00a0;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 1
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x00a0;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00a0;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 2
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0080;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0080;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 3
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0080;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0080;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#endif
#if _REF_SEL == 5
#if _GEN == 0
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0064;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0064;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0019;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0019;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 1
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0064;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0064;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0019;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0019;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 2
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0050;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0050;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x09;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0014;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0014;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x09;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 3
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0050;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0050;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x09;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0014;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0014;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x09;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#endif
#if _REF_SEL == 6
#if _GEN == 0
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0050;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0050;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0014;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0014;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 1
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0050;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0050;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0014;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0014;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 2
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0040;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0040;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x08;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 3
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0040;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0040;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x08;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#endif
#if _REF_SEL == 7
#if _GEN == 0
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0040;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0040;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fb;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fb;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 1
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0040;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0040;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0d;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fb;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fb;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 2
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0066;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0066;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0a;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fb;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0380;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0380;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0026;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0026;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0b;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fb;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x02ab;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x02ab;
#endif
#if _GEN == 3
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0066;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0066;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0a;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fb;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0380;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0380;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x01;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0026;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0026;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0b;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fb;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x06;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x02ab;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x02ab;
#endif
#endif
#if _REF_SEL == 8
#if _GEN == 0
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x00;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0b;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x00;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 1
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x00;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x0b;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x00;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 2
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x00;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x00;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 3
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 1) uint8_t spd_tbl_clk1g_refclk_sel = 0x00;
__xdata __at(RING_SPDTBL_BASE + 2) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 5) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 7) uint8_t spd_tbl_icp_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 10) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 17) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 18) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 20) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 22) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 23) uint8_t spd_tbl_clk1g_refclk_sel = 0x00;
__xdata __at(RING_SPDTBL_BASE + 24) uint8_t spd_tbl_pll_refdiv_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 25) uint16_t spd_tbl_pll_fbdiv_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 29) uint8_t spd_tbl_icp_ring = 0x0c;
__xdata __at(RING_SPDTBL_BASE + 30) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 32) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 39) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 42) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#endif
#endif

