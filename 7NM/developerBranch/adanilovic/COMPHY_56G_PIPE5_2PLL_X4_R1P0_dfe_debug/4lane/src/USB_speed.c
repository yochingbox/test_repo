#include "common.h"
#ifdef USE_BANKING
#pragma codeseg BANK3
#endif
#ifdef _USB_BUILD
void loadspeedtbl_rx() BANKING_CTRL {
  uint8_t tmp0 = 0x0; //ANA_RSVD_REG9.BT.B0 , ctle_cl2_sel_lane[1:0], ctle_cl1_sel_lane[1:0]
  uint8_t tmp1 = 0x30; //ANA_CTLE_REG0.BT.B0 , ctle_bypass1_en_lane, ctle_bypass2_en_lane
  uint8_t tmp2 = 0xD; //ANA_CTLE_REG5.BT.B0 , ctle_res1_sel_lane[3:0]
  uint8_t tmp3 = 0x0; //DFE_CTRL_REG5.BT.B0 , dfe_dis_lane
  uint8_t tmp4 = 0x1A; //PLL_RS_LANE_REG12.BT.B2 , rx_pll_rate_sel_lane[4:0]
  uint8_t tmp5 = 0x40; //ANA_RXREG_REG1.BT.B0 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
  uint8_t tmp6 = 0x54; //PM_CTRL_RX_LANE_REG1_LANE.BT.B0 , rx_selmuff_lane[3:0], rx_selmufi_lane[3:0]
  uint8_t tmp7 = 0xA; //DTL_REG2.BT.B0 , rx_foffset_extra_m_lane[13:0]
  uint8_t tmp8 = 0x95; //DTL_REG2.BT.B1 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
  uint8_t tmp9 = 0x2; //ANA_IMPCAL_REG0.BT.B0 , path_disable_edge_lane, intpr_lane[1:0]
  uint8_t tmp10 = 0x88; //TX_TRAIN_PATTTERN_REG0.BT.B0 , train_pat_num_lane[9:0]
  uint8_t tmp11 = 0x4; //TX_TRAIN_PATTTERN_REG0.BT.B1 , ethernet_mode_lane[1:0], train_pat_num_lane[9:0]
  uint8_t tmp12 = 0x4; //ANA_SMPLR_REG1.BT.B0 , reg_selmupf_lane[2:0]
  uint8_t tmp13 = 0xA; //ANA_RXREG_REG0.BT.B0 , rxreg_speedtrk_clk_half_lane, rxreg_speedtrk_clk_lane[2:0]
  uint8_t tmp14 = 0x0; //ANA_EOM_REG3.BT.B0 , rxpll_hi_speed_lane
  uint8_t tmp15 = 0x75; //ANA_INTPI_REG0.BT.B0 , rxintpi_low_lane[3:0], rxintpi_lane[3:0]
  uint8_t tmp16 = 0x0; //DTL_REG1.BT.B0 , init_rxfoffs_lane[12:0]
  uint8_t tmp17 = 0x0; //DTL_REG1.BT.B1 , init_rxfoffs_lane[12:0]
  uint8_t tmp18 = 0x7; //ANA_CTLE_REG1.BT.B0 , ctle_cap1_sel_lane[3:0]
  uint8_t tmp19 = 0x5; //ANA_CTLE_REG4.BT.B0 , ctle_current2_sel_lane[3:0]
  uint8_t tmp20 = 0x7; //ANA_CTLE_REG6.BT.B0 , ctle_res2_sel_lane[3:0]
  uint8_t tmp21 = 0x3; //RX_SYSTEM_LANE.BT.B0 , rx_data_width_lane[1:0], rx_pam2_en_lane
  uint8_t tmp22 = 0x7; //ANA_CTLE_REG7.BT.B0 , ctle_rl1_sel_lane[3:0]
  uint8_t tmp23 = 0x0; //ANA_DTL_REG3.BT.B0 , dtl_clk_speedup_lane[2:0]
  uint8_t tmp24 = 0x42; //TX_TRAIN_PATTERN_REG1.BT.B2 , train_pat_num_rx_lane[9:0]
  uint8_t tmp25 = 0x0; //TX_TRAIN_PATTERN_REG1.BT.B3 , train_pat_num_rx_lane[9:0]
  uint8_t tmp26 = 0x12; //ANA_SMPLR_REG0.BT.B0 , pu_smplr_d_e_lane[2:0], pu_smplr_d_o_lane[2:0]
  uint8_t tmp27 = 0x7; //ANA_CTLE_REG2.BT.B0 , ctle_cap2_sel_lane[3:0]
  uint8_t tmp28 = 0x3; //ANA_SMPLR_REG3.BT.B0 , reg_selmupi_lane[2:0]
  uint8_t tmp29 = 0x7; //ANA_CTLE_REG3.BT.B0 , ctle_current1_sel_lane[3:0]
  uint8_t tmp30 = 0x5; //ANA_CTLE_REG8.BT.B0 , ctle_rl2_sel_lane[3:0]
  uint8_t tmp31 = 0xC2; //ANA_SMPLR_REG2.BT.B0 , pu_ctle_even_lane, pu_ctle_odd_lane, pu_smplr_s_e_lane[2:0], pu_smplr_s_o_lane[2:0]
  if (gen_rx==2){
    tmp2 = 0xA;// ANA_CTLE_REG5.BT.B0 = ####1010 , ctle_res1_sel_lane[3:0]
    tmp18 = 0xA;// ANA_CTLE_REG1.BT.B0 = ####1010 , ctle_cap1_sel_lane[3:0]
    tmp19 = 0xA;// ANA_CTLE_REG4.BT.B0 = ####1010 , ctle_current2_sel_lane[3:0]
    tmp27 = 0xA;// ANA_CTLE_REG2.BT.B0 = ####1010 , ctle_cap2_sel_lane[3:0]
    tmp30 = 0xA;// ANA_CTLE_REG8.BT.B0 = ####1010 , ctle_rl2_sel_lane[3:0]
    tmp31 = 0xD2;// ANA_SMPLR_REG2.BT.B0 = 11010010 , pu_ctle_even_lane, pu_ctle_odd_lane, pu_smplr_s_e_lane[2:0], pu_smplr_s_o_lane[2:0]
  }
  else if (gen_rx==1){
    tmp5 = 0x50;// ANA_RXREG_REG1.BT.B0 = #101#000 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp9 = 0x6;// ANA_IMPCAL_REG0.BT.B0 = #####110 , path_disable_edge_lane, intpr_lane[1:0]
    tmp20 = 0xC;// ANA_CTLE_REG6.BT.B0 = ####1100 , ctle_res2_sel_lane[3:0]
    tmp22 = 0x3;// ANA_CTLE_REG7.BT.B0 = ####0011 , ctle_rl1_sel_lane[3:0]
    tmp29 = 0x3;// ANA_CTLE_REG3.BT.B0 = ####0011 , ctle_current1_sel_lane[3:0]
  }
  ANA_RSVD_REG9.BT.B0 = tmp0;
  ANA_CTLE_REG0.BT.B0 = tmp1;
  ANA_CTLE_REG5.BT.B0 = tmp2;
  DFE_CTRL_REG5.BT.B0 = tmp3;
  PLL_RS_LANE_REG12.BT.B2 = tmp4;
  ANA_RXREG_REG1.BT.B0 = tmp5;
  PM_CTRL_RX_LANE_REG1_LANE.BT.B0 = tmp6;
  DTL_REG2.BT.B0 = tmp7;
  DTL_REG2.BT.B1 = tmp8;
  ANA_IMPCAL_REG0.BT.B0 = tmp9;
  TX_TRAIN_PATTTERN_REG0.BT.B0 = tmp10;
  TX_TRAIN_PATTTERN_REG0.BT.B1 = tmp11;
  ANA_SMPLR_REG1.BT.B0 = tmp12;
  ANA_RXREG_REG0.BT.B0 = tmp13;
  ANA_EOM_REG3.BT.B0 = tmp14;
  ANA_INTPI_REG0.BT.B0 = tmp15;
  DTL_REG1.BT.B0 = tmp16;
  DTL_REG1.BT.B1 = tmp17;
  ANA_CTLE_REG1.BT.B0 = tmp18;
  ANA_CTLE_REG4.BT.B0 = tmp19;
  ANA_CTLE_REG6.BT.B0 = tmp20;
  RX_SYSTEM_LANE.BT.B0 = tmp21;
  ANA_CTLE_REG7.BT.B0 = tmp22;
  ANA_DTL_REG3.BT.B0 = tmp23;
  TX_TRAIN_PATTERN_REG1.BT.B2 = tmp24;
  TX_TRAIN_PATTERN_REG1.BT.B3 = tmp25;
  ANA_SMPLR_REG0.BT.B0 = tmp26;
  ANA_CTLE_REG2.BT.B0 = tmp27;
  ANA_SMPLR_REG3.BT.B0 = tmp28;
  ANA_CTLE_REG3.BT.B0 = tmp29;
  ANA_CTLE_REG8.BT.B0 = tmp30;
  ANA_SMPLR_REG2.BT.B0 = tmp31;
}
void loadspeedtbl_lc_pll (uint8_t pll_rate_sel, uint8_t ref_clk_sel, int tsrs_sel) BANKING_CTRL {
  uint8_t tmp0 = 0x1E; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
  uint8_t tmp1 = 0x0; //PLL_TS_LANE_REG12.BT.B1 , pll_ts_fbdiv_cal_lane[9:0]
  uint8_t tmp2 = 0x4B; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
  uint8_t tmp3 = 0x87; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
  uint8_t tmp4 = 0xE; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
  uint8_t tmp5 = 0x10; //PLL_TS_DTX_REG2.BT.B3 , pll_ts_ssc_step_125ppm_lane[3:0], pll_ts_ssc_acc_factor_lane
  uint8_t tmp6 = 0x95; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
  uint8_t tmp7 = 0x80; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
  uint8_t tmp8 = 0x14; //PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
  uint8_t tmp9 = 0x40; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
  uint8_t tmp10 = 0x1F; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
  uint8_t tmp11 = 0x55; //PLL_TS_CAL_CTRL_LANE.BT.B2 , pll_ts_vco_amp_vth_mid_lane[3:0], pll_ts_vco_amp_vth_low_lane[3:0]
  uint8_t tmp12 = 0x5; //PLL_TS_CAL_CTRL_LANE.BT.B3 , pll_ts_vco_amp_vth_high_lane[3:0]
  uint8_t tmp13 = 0x0; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
  uint8_t tmp14 = 0x0; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
  uint8_t tmp15 = 0x3; //PLL_TS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 , pll_ts_ck500m_div_lane[1:0], pll_ts_lcpll_postdiv_en_lane, pll_ts_lcpll_postdiv_1p5or2_en_lane
  uint8_t tmp16 = 0xB1; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
  uint8_t tmp17 = 0x80; //PLL_TS_UPHY14_CMN_ANAREG_TOP_026.BT.B0 , pll_ts_reg0p9_speed_track_clk_lane[2:0]
  if (pll_rate_sel==26){
    if (ref_clk_sel==7){
      tmp2 = 0x18;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00011000 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x39;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 00111001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x3C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111100 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp16 = 0x79;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp8 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp16 = 0x59;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01011001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x3C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111100 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x79;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
    }
    else if (ref_clk_sel==2){
      tmp2 = 0xBC;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10111100 , pll_ts_fbdiv_lane[7:0]
      tmp7 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp8 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xEC;// PLL_TS_LANE_REG1.BT.B0 = 11101100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xA;// PLL_TS_LANE_REG1.BT.B1 = 00001010 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x7D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111101 , pll_ts_fbdiv_lane[7:0]
      tmp7 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    }
    else if (ref_clk_sel==0){
      tmp2 = 0x96;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10010110 , pll_ts_fbdiv_lane[7:0]
      tmp7 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0xD1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
  }
  if (tsrs_sel==0){
    PLL_TS_LANE_REG12.BT.B0 = tmp0;
    PLL_TS_LANE_REG12.BT.B1 = tmp1;
    PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = tmp2;
    PLL_TS_DTX_REG2.BT.B0 = tmp3;
    PLL_TS_DTX_REG2.BT.B1 = tmp4;
    PLL_TS_DTX_REG2.BT.B3 = tmp5;
    PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 = tmp6;
    PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = tmp7;
    PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = tmp8;
    PLL_TS_CAL_CTRL_LANE.BT.B0 = tmp9;
    PLL_TS_CAL_CTRL_LANE.BT.B1 = tmp10;
    PLL_TS_CAL_CTRL_LANE.BT.B2 = tmp11;
    PLL_TS_CAL_CTRL_LANE.BT.B3 = tmp12;
    PLL_TS_LANE_REG1.BT.B0 = tmp13;
    PLL_TS_LANE_REG1.BT.B1 = tmp14;
    PLL_TS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 = tmp15;
    PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = tmp16;
    PLL_TS_UPHY14_CMN_ANAREG_TOP_026.BT.B0 = tmp17;
  }
  else{
    PLL_RS_LANE_REG12.BT.B0 = tmp0;
    PLL_RS_LANE_REG12.BT.B1 = tmp1;
    PLL_RS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = tmp2;
    PLL_RS_DTX_REG2.BT.B0 = tmp3;
    PLL_RS_DTX_REG2.BT.B1 = tmp4;
    PLL_RS_DTX_REG2.BT.B3 = tmp5;
    PLL_RS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 = tmp6;
    PLL_RS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = tmp7;
    PLL_RS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = tmp8;
    PLL_RS_CAL_CTRL_LANE.BT.B0 = tmp9;
    PLL_RS_CAL_CTRL_LANE.BT.B1 = tmp10;
    PLL_RS_CAL_CTRL_LANE.BT.B2 = tmp11;
    PLL_RS_CAL_CTRL_LANE.BT.B3 = tmp12;
    PLL_RS_LANE_REG1.BT.B0 = tmp13;
    PLL_RS_LANE_REG1.BT.B1 = tmp14;
    PLL_RS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 = tmp15;
    PLL_RS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = tmp16;
    PLL_RS_UPHY14_CMN_ANAREG_TOP_026.BT.B0 = tmp17;
  }
}
void loadspeedtbl_tx() BANKING_CTRL {
  uint8_t tmp0 = 0x3F; //TX_TRAIN_DEFAULT1.BT.B0 , tx_amp_default1_lane[6:0]
  uint8_t tmp1 = 0x2F; //TX_TRAIN_DEFAULT1.BT.B1 , tx_amp_default2_lane[6:0]
  uint8_t tmp2 = 0x2F; //TX_TRAIN_DEFAULT1.BT.B2 , tx_amp_default3_lane[6:0]
  uint8_t tmp3 = 0x0; //PHYTEST_TX0.BT.B2 , tx_train_pat_sel_lane[1:0]
  uint8_t tmp4 = 0x0; //TX_TRAIN_DEFAULT4.BT.B0 , tx_emph2_default1_lane[4:0]
  uint8_t tmp5 = 0x0; //TX_TRAIN_DEFAULT4.BT.B1 , tx_emph2_default2_lane[4:0]
  uint8_t tmp6 = 0x0; //TX_TRAIN_DEFAULT4.BT.B2 , tx_emph2_default3_lane[4:0]
  uint8_t tmp7 = 0x2; //TX_TRAIN_PATTTERN_REG0.BT.B2 , tx_train_pat_two_zero_lane, tx_train_pat_mode_lane, tx_train_pat_toggle_lane
  uint8_t tmp8 = 0x80; //TX_SPEED_CONVERT_LANE.BT.B1 , txdata_latency_reduce_en_lane
  uint8_t tmp9 = 0x9; //ANA_TXSPEED_REG0.BT.B0 , txclk_div_dig_lane[2:0], txspeed_div_lane[2:0]
  uint8_t tmp10 = 0x40; //TX_SYSTEM_LANE0.BT.B0 , tx_data_width_lane[1:0]
  uint8_t tmp11 = 0x2; //ANA_TXREG_REG1.BT.B0 , txreg_speedtrk_data_lane[3:0]
  uint8_t tmp12 = 0x0; //TX_TRAIN_DEFAULT3.BT.B0 , tx_emph1_default1_lane[4:0]
  uint8_t tmp13 = 0x6; //TX_TRAIN_DEFAULT3.BT.B1 , tx_emph1_default2_lane[4:0]
  uint8_t tmp14 = 0x0; //TX_TRAIN_DEFAULT3.BT.B2 , tx_emph1_default3_lane[4:0]
  uint8_t tmp15 = 0x0; //TX_TRAIN_DEFAULT2.BT.B0 , tx_emph0_default1_lane[4:0]
  uint8_t tmp16 = 0x9; //TX_TRAIN_DEFAULT2.BT.B1 , tx_emph0_default2_lane[4:0]
  uint8_t tmp17 = 0xF; //TX_TRAIN_DEFAULT2.BT.B2 , tx_emph0_default3_lane[4:0]
  uint8_t tmp18 = 0x1A; //PLL_TS_LANE_REG12.BT.B2 , tx_pll_rate_sel_lane[4:0]
  uint8_t tmp19 = 0x0; //ANA_EOM_REG4.BT.B0 , txpll_hi_speed_lane
  uint8_t tmp20 = 0xF; //TX_TRAIN_DRIVER_REG1.BT.B0 , tx_emph0_max_lane[4:0]
  uint8_t tmp21 = 0xF; //TX_TRAIN_DRIVER_REG1.BT.B2 , tx_emph1_max_lane[4:0]
  uint8_t tmp22 = 0x2; //ANA_TXREG_REG0.BT.B0 , txreg_speedtrk_clk_lane[3:0]
  uint8_t tmp23 = 0xF; //TX_TRAIN_DRIVER_REG2.BT.B0 , tx_emph2_max_lane[4:0]
  uint8_t tmp24 = 0x88; //TX_TRAIN_PATTERN_REG1.BT.B0 , tx_train_pat_num_lane[9:0]
  uint8_t tmp25 = 0x0; //TX_TRAIN_PATTERN_REG1.BT.B1 , tx_train_pat_num_lane[9:0]
  uint8_t tmp26 = 0x3; //ANA_CLKCTRL_REG0.BT.B0 , txfir_bypass_din_latch_lane, txfir_bypass_dout_latch_lane
  uint8_t tmp27 = 0xC0; //TX_SYSTEM_LANE1.BT.B3 , tx_halfrate_en_lane, tx_pam2_en_lane
  if (gen_tx==2){
    tmp8 = 0x0;// TX_SPEED_CONVERT_LANE.BT.B1 = 0####### , txdata_latency_reduce_en_lane
    tmp9 = 0x1;// ANA_TXSPEED_REG0.BT.B0 = ##000001 , txclk_div_dig_lane[2:0], txspeed_div_lane[2:0]
  }
  else if (gen_tx==1){
    tmp11 = 0x1;// ANA_TXREG_REG1.BT.B0 = ####0001 , txreg_speedtrk_data_lane[3:0]
  }
  TX_TRAIN_DEFAULT1.BT.B0 = tmp0;
  TX_TRAIN_DEFAULT1.BT.B1 = tmp1;
  TX_TRAIN_DEFAULT1.BT.B2 = tmp2;
  PHYTEST_TX0.BT.B2 = tmp3;
  TX_TRAIN_DEFAULT4.BT.B0 = tmp4;
  TX_TRAIN_DEFAULT4.BT.B1 = tmp5;
  TX_TRAIN_DEFAULT4.BT.B2 = tmp6;
  TX_TRAIN_PATTTERN_REG0.BT.B2 = tmp7;
  TX_SPEED_CONVERT_LANE.BT.B1 = tmp8;
  ANA_TXSPEED_REG0.BT.B0 = tmp9;
  TX_SYSTEM_LANE0.BT.B0 = tmp10;
  ANA_TXREG_REG1.BT.B0 = tmp11;
  TX_TRAIN_DEFAULT3.BT.B0 = tmp12;
  TX_TRAIN_DEFAULT3.BT.B1 = tmp13;
  TX_TRAIN_DEFAULT3.BT.B2 = tmp14;
  TX_TRAIN_DEFAULT2.BT.B0 = tmp15;
  TX_TRAIN_DEFAULT2.BT.B1 = tmp16;
  TX_TRAIN_DEFAULT2.BT.B2 = tmp17;
  PLL_TS_LANE_REG12.BT.B2 = tmp18;
  ANA_EOM_REG4.BT.B0 = tmp19;
  TX_TRAIN_DRIVER_REG1.BT.B0 = tmp20;
  TX_TRAIN_DRIVER_REG1.BT.B2 = tmp21;
  ANA_TXREG_REG0.BT.B0 = tmp22;
  TX_TRAIN_DRIVER_REG2.BT.B0 = tmp23;
  TX_TRAIN_PATTERN_REG1.BT.B0 = tmp24;
  TX_TRAIN_PATTERN_REG1.BT.B1 = tmp25;
  ANA_CLKCTRL_REG0.BT.B0 = tmp26;
  TX_SYSTEM_LANE1.BT.B3 = tmp27;
}
#endif //_USB_BUILD
