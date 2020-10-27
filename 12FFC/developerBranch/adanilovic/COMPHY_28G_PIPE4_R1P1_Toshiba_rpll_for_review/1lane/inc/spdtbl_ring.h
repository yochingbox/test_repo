#ifdef _USB
#if _REF_SEL == 8
#if _GEN == 1
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint16_t spd_tbl_pll_fbdiv_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 5) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 6) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 10) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 11) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 17) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 19) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 21) uint8_t spd_tbl_pll_refdiv_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 22) uint16_t spd_tbl_pll_fbdiv_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 24) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 26) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 29) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 31) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 32) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 33) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 2
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint16_t spd_tbl_pll_fbdiv_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 5) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 6) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 10) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 11) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 17) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 19) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 21) uint8_t spd_tbl_pll_refdiv_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 22) uint16_t spd_tbl_pll_fbdiv_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 24) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 26) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 29) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 31) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 32) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 33) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#endif
#endif

#ifdef _SERDES
#if _REF_SEL == 8
#if _GEN == 0
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint16_t spd_tbl_pll_fbdiv_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 5) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 6) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 10) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 11) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 17) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 19) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 21) uint8_t spd_tbl_pll_refdiv_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 22) uint16_t spd_tbl_pll_fbdiv_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 24) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 26) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 29) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 31) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 32) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 33) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 4
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_refdiv_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 1) uint16_t spd_tbl_pll_fbdiv_ring = 0x00a5;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x00a5;
__xdata __at(RING_SPDTBL_BASE + 5) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 6) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_fbdiv_cal_ring = 0x0029;
__xdata __at(RING_SPDTBL_BASE + 10) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 11) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 17) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 19) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 21) uint8_t spd_tbl_pll_refdiv_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 22) uint16_t spd_tbl_pll_fbdiv_ring = 0x0029;
__xdata __at(RING_SPDTBL_BASE + 24) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0029;
__xdata __at(RING_SPDTBL_BASE + 26) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fc;
__xdata __at(RING_SPDTBL_BASE + 29) uint16_t spd_tbl_fbdiv_cal_ring = 0x0029;
__xdata __at(RING_SPDTBL_BASE + 31) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 32) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 33) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint16_t spd_tbl_init_txfoffs_ring = 0x0339;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0339;
#endif
#if _GEN == 6
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint16_t spd_tbl_pll_fbdiv_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 5) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 6) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_fbdiv_cal_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 10) uint8_t spd_tbl_pll_rate_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 11) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 17) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 19) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 21) uint8_t spd_tbl_pll_refdiv_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 22) uint16_t spd_tbl_pll_fbdiv_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 24) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 26) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 29) uint16_t spd_tbl_fbdiv_cal_ring = 0x0032;
__xdata __at(RING_SPDTBL_BASE + 31) uint8_t spd_tbl_pll_rate_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 32) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 33) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 7
#endif
#if _GEN == 9
#endif
#endif
#endif

#ifdef _SAS
#if _REF_SEL == 8
#if _GEN == 0
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint16_t spd_tbl_pll_fbdiv_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x002f;
__xdata __at(RING_SPDTBL_BASE + 5) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 6) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 10) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 11) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 17) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 19) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x002f;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 21) uint8_t spd_tbl_pll_refdiv_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 22) uint16_t spd_tbl_pll_fbdiv_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 24) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x002f;
__xdata __at(RING_SPDTBL_BASE + 26) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 29) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 31) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 32) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 33) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x002f;
#endif
#if _GEN == 1
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint16_t spd_tbl_pll_fbdiv_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x002f;
__xdata __at(RING_SPDTBL_BASE + 5) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 6) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 10) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 11) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 17) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 19) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x002f;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 21) uint8_t spd_tbl_pll_refdiv_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 22) uint16_t spd_tbl_pll_fbdiv_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 24) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x002f;
__xdata __at(RING_SPDTBL_BASE + 26) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 29) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 31) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 32) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 33) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x002f;
#endif
#if _GEN == 2
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint16_t spd_tbl_pll_fbdiv_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x002f;
__xdata __at(RING_SPDTBL_BASE + 5) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 6) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 10) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 11) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 17) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 19) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x002f;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 21) uint8_t spd_tbl_pll_refdiv_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 22) uint16_t spd_tbl_pll_fbdiv_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 24) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x002f;
__xdata __at(RING_SPDTBL_BASE + 26) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 29) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 31) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 32) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 33) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x002f;
#endif
#if _GEN == 3
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint16_t spd_tbl_pll_fbdiv_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x002f;
__xdata __at(RING_SPDTBL_BASE + 5) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 6) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 10) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 11) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 17) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 19) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x002f;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 21) uint8_t spd_tbl_pll_refdiv_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 22) uint16_t spd_tbl_pll_fbdiv_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 24) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x002f;
__xdata __at(RING_SPDTBL_BASE + 26) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 29) uint16_t spd_tbl_fbdiv_cal_ring = 0x0030;
__xdata __at(RING_SPDTBL_BASE + 31) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 32) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 33) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x002f;
#endif
#if _GEN == 4
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint16_t spd_tbl_pll_fbdiv_ring = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 5) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 6) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_fbdiv_cal_ring = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 10) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 11) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 17) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 19) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 21) uint8_t spd_tbl_pll_refdiv_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 22) uint16_t spd_tbl_pll_fbdiv_ring = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 24) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 26) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 29) uint16_t spd_tbl_fbdiv_cal_ring = 0x002d;
__xdata __at(RING_SPDTBL_BASE + 31) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 32) uint8_t spd_tbl_intpi_ring = 0x07;
__xdata __at(RING_SPDTBL_BASE + 33) uint8_t spd_tbl_tx_intpr_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_pll_band_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#endif
#endif

#ifdef _PCIE
#if _REF_SEL == 8
#if _GEN == 0
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint16_t spd_tbl_pll_fbdiv_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 5) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 6) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 10) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 11) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 17) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 19) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 21) uint8_t spd_tbl_pll_refdiv_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 22) uint16_t spd_tbl_pll_fbdiv_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 24) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 26) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 29) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 31) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 32) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 33) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 1
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint16_t spd_tbl_pll_fbdiv_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 5) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 6) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 10) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 11) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 17) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 19) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 21) uint8_t spd_tbl_pll_refdiv_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 22) uint16_t spd_tbl_pll_fbdiv_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 24) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 26) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 29) uint16_t spd_tbl_fbdiv_cal_ring = 0x0028;
__xdata __at(RING_SPDTBL_BASE + 31) uint8_t spd_tbl_pll_rate_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 32) uint8_t spd_tbl_intpi_ring = 0x05;
__xdata __at(RING_SPDTBL_BASE + 33) uint8_t spd_tbl_tx_intpr_ring = 0x02;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 2
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint16_t spd_tbl_pll_fbdiv_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 5) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 6) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 10) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 11) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 17) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 19) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 21) uint8_t spd_tbl_pll_refdiv_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 22) uint16_t spd_tbl_pll_fbdiv_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 24) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 26) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 29) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 31) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 32) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 33) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#if _GEN == 3
//speed_pll_PI0
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t spd_tbl_pll_refdiv_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 1) uint16_t spd_tbl_pll_fbdiv_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 3) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 5) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 6) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 8) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 10) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 11) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 12) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 13) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 14) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 15) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 16) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x01;
__xdata __at(RING_SPDTBL_BASE + 17) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 19) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
//speed_pll_PI1
__xdata __at(RING_SPDTBL_BASE + 21) uint8_t spd_tbl_pll_refdiv_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 22) uint16_t spd_tbl_pll_fbdiv_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 24) uint16_t spd_tbl_pll_fbdiv_ring_fbck = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 26) uint8_t spd_tbl_icp_ring = 0x0f;
__xdata __at(RING_SPDTBL_BASE + 27) uint16_t spd_tbl_pll_speed_thresh_ring = 0x00fa;
__xdata __at(RING_SPDTBL_BASE + 29) uint16_t spd_tbl_fbdiv_cal_ring = 0x0020;
__xdata __at(RING_SPDTBL_BASE + 31) uint8_t spd_tbl_pll_rate_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 32) uint8_t spd_tbl_intpi_ring = 0x04;
__xdata __at(RING_SPDTBL_BASE + 33) uint8_t spd_tbl_tx_intpr_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 34) uint8_t spd_tbl_pll_band_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 35) uint8_t spd_tbl_pll_lpf_c1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 36) uint8_t spd_tbl_pll_lpf_c2_sel_ring = 0x00;
__xdata __at(RING_SPDTBL_BASE + 37) uint8_t spd_tbl_pll_lpf_r1_sel_ring = 0x03;
__xdata __at(RING_SPDTBL_BASE + 38) uint16_t spd_tbl_init_txfoffs_ring = 0x0000;
__xdata __at(RING_SPDTBL_BASE + 40) uint16_t spd_tbl_init_txfoffs_ring_fbck = 0x0000;
#endif
#endif
#endif

