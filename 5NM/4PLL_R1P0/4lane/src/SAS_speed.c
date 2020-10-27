#include "common.h"
#ifdef USE_BANKING
#pragma codeseg BANK3
#endif
#ifdef _SAS_BUILD
void loadspeedtbl_rx() BANKING_CTRL {
  uint8_t tmp0 = 0x3; //ANA_DLL_REG1.BT.B0 , eom_dll_cap_sel_lane[2:0]
  uint8_t tmp1 = 0x30; //ANA_CTLE_REG0.BT.B0 , ctle_bypass1_en_lane[1:0], ctle_bypass2_en_lane
  uint8_t tmp2 = 0xEE; //RX_DETERMINISTIC_LATENCY.BT.B0 , ck2floop_freq_lane[9:0]
  uint8_t tmp3 = 0x2; //RX_DETERMINISTIC_LATENCY.BT.B1 , ck2floop_freq_lane[9:0]
  uint8_t tmp4 = 0x40; //DTL_REG2.BT.B0 , rx_foffset_extra_m_lane[13:0]
  uint8_t tmp5 = 0x99; //DTL_REG2.BT.B1 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
  uint8_t tmp6 = 0x5; //ANA_IMPCAL_REG0.BT.B0 , path_disable_edge_lane, intpr_lane[1:0]
  uint8_t tmp7 = 0x42; //TX_TRAIN_PAT_NUM1.BT.B0 , train_pat_num_lane[9:0]
  uint8_t tmp8 = 0x0; //TX_TRAIN_PAT_NUM1.BT.B1 , train_pat_num_lane[9:0]
  uint8_t tmp9 = 0x30; //ANA_SMPLR_REG4.BT.B0 , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
  uint8_t tmp10 = 0x0; //DFE_CTRL_REG5.BT.B0 , dfe_dis_lane
  uint8_t tmp11 = 0x0; //ANA_EOM_REG3.BT.B0 , rxpll_hi_speed_lane
  uint8_t tmp12 = 0x0; //DTL_REG1.BT.B0 , init_rxfoffs_lane[12:0]
  uint8_t tmp13 = 0x0; //DTL_REG1.BT.B1 , init_rxfoffs_lane[12:0]
  uint8_t tmp14 = 0x99; //ANA_INTPI_REG0.BT.B0 , rxintpi_low_lane[3:0], rxintpi_lane[3:0]
  uint8_t tmp15 = 0x4; //ANA_CTLE_REG1.BT.B0 , ctle_cap1_sel_g_lane[3:0]
  uint8_t tmp16 = 0x5; //ANA_CTLE_REG4.BT.B0 , ctle_current2_sel_lane[3:0]
  uint8_t tmp17 = 0x7; //ANA_CTLE_REG7.BT.B0 , ctle_rl1_sel_lane[3:0]
  uint8_t tmp18 = 0x0; //ANA_ALIGN90_REG1.BT.B0 , align90_vcap_lane[1:0], align90_ref_filt_bw_lane
  uint8_t tmp19 = 0x0; //ANA_DTL_REG3.BT.B0 , dtl_clk_speedup_lane[2:0]
  uint8_t tmp20 = 0x42; //TX_TRAIN_PATTERN_REG1.BT.B2 , train_pat_num_rx_lane[9:0]
  uint8_t tmp21 = 0x0; //TX_TRAIN_PATTERN_REG1.BT.B3 , train_pat_num_rx_lane[9:0]
  uint8_t tmp22 = 0x7; //ANA_CTLE_REG2.BT.B0 , ctle_cap2_sel_lane[3:0]
  uint8_t tmp23 = 0x1; //ANA_SMPLR_REG3.BT.B0 , reg_selmupi_lane[2:0]
  uint8_t tmp24 = 0xD2; //ANA_SMPLR_REG2.BT.B0 , pu_ctle_even_lane, pu_ctle_odd_lane, pu_smplr_s_e_lane[2:0], pu_smplr_s_o_lane[2:0]
  uint8_t tmp25 = 0x0; //ANA_RSVD_REG9.BT.B0 , ctle_cl2_sel_lane[1:0], ctle_cl1_sel_lane[1:0]
  uint8_t tmp26 = 0x5; //ANA_CTLE_REG5.BT.B0 , ctle_res1_sel_lane[3:0]
  uint8_t tmp27 = 0x41; //ANA_RXREG_REG1.BT.B0 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
  uint8_t tmp28 = 0x3; //ANA_DLL_REG.BT.B0 , dll_cap_sel_lane[2:0]
  uint8_t tmp29 = 0x0; //TX_TRAIN_PATTTERN_REG0.BT.B1 , ethernet_mode_lane[1:0]
  uint8_t tmp30 = 0x43; //PM_CTRL_RX_LANE_REG1_LANE.BT.B0 , rx_selmuff_lane[3:0], rx_selmufi_lane[3:0]
  uint8_t tmp31 = 0x2; //ANA_SMPLR_REG1.BT.B0 , reg_selmupf_lane[2:0]
  uint8_t tmp32 = 0x15; //CAL_CTRL4_LANE.BT.B2 , rx_pll_rate_lane[7:0]
  uint8_t tmp33 = 0xB; //ANA_RXREG_REG0.BT.B0 , rxreg_speedtrk_clk_half_lane, rxreg_speedtrk_clk_lane[2:0]
  uint8_t tmp34 = 0xE; //ANA_CTLE_REG6.BT.B0 , ctle_res2_sel_lane[3:0]
  uint8_t tmp35 = 0x3; //RX_SYSTEM_LANE.BT.B0 , rx_data_width_lane[1:0], rx_pam2_en_lane
  uint8_t tmp36 = 0x12; //ANA_SMPLR_REG0.BT.B0 , pu_smplr_d_e_lane[2:0], pu_smplr_d_o_lane[2:0]
  uint8_t tmp37 = 0x7; //ANA_CTLE_REG3.BT.B0 , ctle_current1_sel_lane[3:0]
  uint8_t tmp38 = 0x7; //ANA_RSVD_REG1.BT.B0 , ana_rsvd1_lane[7:0]
  uint8_t tmp39 = 0x5; //ANA_CTLE_REG8.BT.B0 , ctle_rl2_sel_lane[3:0]
  if (gen_rx==4){
    tmp0 = 0x4;// ANA_DLL_REG1.BT.B0 = #####100 , eom_dll_cap_sel_lane[2:0]
    tmp1 = 0x0;// ANA_CTLE_REG0.BT.B0 = #000#### , ctle_bypass1_en_lane[1:0], ctle_bypass2_en_lane
    tmp2 = 0xBF;// RX_DETERMINISTIC_LATENCY.BT.B0 = 10111111 , ck2floop_freq_lane[9:0]
    tmp4 = 0xAC;// DTL_REG2.BT.B0 = 10101100 , rx_foffset_extra_m_lane[13:0]
    tmp5 = 0x97;// DTL_REG2.BT.B1 = 10010111 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp6 = 0x1;// ANA_IMPCAL_REG0.BT.B0 = #####001 , path_disable_edge_lane, intpr_lane[1:0]
    tmp7 = 0xE9;// TX_TRAIN_PAT_NUM1.BT.B0 = 11101001 , train_pat_num_lane[9:0]
    tmp9 = 0x0;// ANA_SMPLR_REG4.BT.B0 = ##00#### , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
    tmp15 = 0xF;// ANA_CTLE_REG1.BT.B0 = ####1111 , ctle_cap1_sel_g_lane[3:0]
    tmp16 = 0xF;// ANA_CTLE_REG4.BT.B0 = ####1111 , ctle_current2_sel_lane[3:0]
    tmp17 = 0xF;// ANA_CTLE_REG7.BT.B0 = ####1111 , ctle_rl1_sel_lane[3:0]
    tmp19 = 0x4;// ANA_DTL_REG3.BT.B0 = #####100 , dtl_clk_speedup_lane[2:0]
    tmp20 = 0xE9;// TX_TRAIN_PATTERN_REG1.BT.B2 = 11101001 , train_pat_num_rx_lane[9:0]
    tmp22 = 0xF;// ANA_CTLE_REG2.BT.B0 = ####1111 , ctle_cap2_sel_lane[3:0]
    tmp23 = 0x3;// ANA_SMPLR_REG3.BT.B0 = #####011 , reg_selmupi_lane[2:0]
    tmp25 = 0x2;// ANA_RSVD_REG9.BT.B0 = ####0010 , ctle_cl2_sel_lane[1:0], ctle_cl1_sel_lane[1:0]
    tmp27 = 0x3;// ANA_RXREG_REG1.BT.B0 = #000#011 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp28 = 0x4;// ANA_DLL_REG.BT.B0 = #####100 , dll_cap_sel_lane[2:0]
    tmp30 = 0x54;// PM_CTRL_RX_LANE_REG1_LANE.BT.B0 = 01010100 , rx_selmuff_lane[3:0], rx_selmufi_lane[3:0]
    tmp31 = 0x4;// ANA_SMPLR_REG1.BT.B0 = #####100 , reg_selmupf_lane[2:0]
    tmp32 = 0x16;// CAL_CTRL4_LANE.BT.B2 = 00010110 , rx_pll_rate_lane[7:0]
    tmp33 = 0x2;// ANA_RXREG_REG0.BT.B0 = ####0010 , rxreg_speedtrk_clk_half_lane, rxreg_speedtrk_clk_lane[2:0]
    tmp34 = 0x3;// ANA_CTLE_REG6.BT.B0 = ####0011 , ctle_res2_sel_lane[3:0]
    tmp37 = 0xF;// ANA_CTLE_REG3.BT.B0 = ####1111 , ctle_current1_sel_lane[3:0]
    tmp38 = 0x0;// ANA_RSVD_REG1.BT.B0 = 00000000 , ana_rsvd1_lane[7:0]
    tmp39 = 0xF;// ANA_CTLE_REG8.BT.B0 = ####1111 , ctle_rl2_sel_lane[3:0]
  }
  else if (gen_rx==3){
    tmp6 = 0x1;// ANA_IMPCAL_REG0.BT.B0 = #####001 , path_disable_edge_lane, intpr_lane[1:0]
    tmp9 = 0x10;// ANA_SMPLR_REG4.BT.B0 = ##01#### , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
    tmp16 = 0xA;// ANA_CTLE_REG4.BT.B0 = ####1010 , ctle_current2_sel_lane[3:0]
    tmp22 = 0xA;// ANA_CTLE_REG2.BT.B0 = ####1010 , ctle_cap2_sel_lane[3:0]
    tmp26 = 0x8;// ANA_CTLE_REG5.BT.B0 = ####1000 , ctle_res1_sel_lane[3:0]
    tmp34 = 0x7;// ANA_CTLE_REG6.BT.B0 = ####0111 , ctle_res2_sel_lane[3:0]
    tmp39 = 0xA;// ANA_CTLE_REG8.BT.B0 = ####1010 , ctle_rl2_sel_lane[3:0]
  }
  else if (gen_rx==2){
    tmp9 = 0x20;// ANA_SMPLR_REG4.BT.B0 = ##10#### , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
    tmp17 = 0x3;// ANA_CTLE_REG7.BT.B0 = ####0011 , ctle_rl1_sel_lane[3:0]
    tmp24 = 0xC2;// ANA_SMPLR_REG2.BT.B0 = 11000010 , pu_ctle_even_lane, pu_ctle_odd_lane, pu_smplr_s_e_lane[2:0], pu_smplr_s_o_lane[2:0]
    tmp26 = 0xB;// ANA_CTLE_REG5.BT.B0 = ####1011 , ctle_res1_sel_lane[3:0]
    tmp27 = 0x51;// ANA_RXREG_REG1.BT.B0 = #101#001 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp34 = 0xC;// ANA_CTLE_REG6.BT.B0 = ####1100 , ctle_res2_sel_lane[3:0]
    tmp37 = 0x3;// ANA_CTLE_REG3.BT.B0 = ####0011 , ctle_current1_sel_lane[3:0]
  }
  else if (gen_rx==1){
    tmp10 = 0x1;// DFE_CTRL_REG5.BT.B0 = #######1 , dfe_dis_lane
    tmp16 = 0x2;// ANA_CTLE_REG4.BT.B0 = ####0010 , ctle_current2_sel_lane[3:0]
    tmp17 = 0x1;// ANA_CTLE_REG7.BT.B0 = ####0001 , ctle_rl1_sel_lane[3:0]
    tmp24 = 0x80;// ANA_SMPLR_REG2.BT.B0 = 10000000 , pu_ctle_even_lane, pu_ctle_odd_lane, pu_smplr_s_e_lane[2:0], pu_smplr_s_o_lane[2:0]
    tmp26 = 0xD;// ANA_CTLE_REG5.BT.B0 = ####1101 , ctle_res1_sel_lane[3:0]
    tmp27 = 0x61;// ANA_RXREG_REG1.BT.B0 = #110#001 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp31 = 0x1;// ANA_SMPLR_REG1.BT.B0 = #####001 , reg_selmupf_lane[2:0]
    tmp34 = 0xD;// ANA_CTLE_REG6.BT.B0 = ####1101 , ctle_res2_sel_lane[3:0]
    tmp36 = 0x10;// ANA_SMPLR_REG0.BT.B0 = ##010000 , pu_smplr_d_e_lane[2:0], pu_smplr_d_o_lane[2:0]
    tmp37 = 0x1;// ANA_CTLE_REG3.BT.B0 = ####0001 , ctle_current1_sel_lane[3:0]
    tmp39 = 0x2;// ANA_CTLE_REG8.BT.B0 = ####0010 , ctle_rl2_sel_lane[3:0]
  }
  else if (gen_rx==0){
    tmp10 = 0x1;// DFE_CTRL_REG5.BT.B0 = #######1 , dfe_dis_lane
    tmp15 = 0x7;// ANA_CTLE_REG1.BT.B0 = ####0111 , ctle_cap1_sel_g_lane[3:0]
    tmp16 = 0x1;// ANA_CTLE_REG4.BT.B0 = ####0001 , ctle_current2_sel_lane[3:0]
    tmp17 = 0x0;// ANA_CTLE_REG7.BT.B0 = ####0000 , ctle_rl1_sel_lane[3:0]
    tmp22 = 0x5;// ANA_CTLE_REG2.BT.B0 = ####0101 , ctle_cap2_sel_lane[3:0]
    tmp24 = 0x40;// ANA_SMPLR_REG2.BT.B0 = 01000000 , pu_ctle_even_lane, pu_ctle_odd_lane, pu_smplr_s_e_lane[2:0], pu_smplr_s_o_lane[2:0]
    tmp25 = 0xF;// ANA_RSVD_REG9.BT.B0 = ####1111 , ctle_cl2_sel_lane[1:0], ctle_cl1_sel_lane[1:0]
    tmp26 = 0xF;// ANA_CTLE_REG5.BT.B0 = ####1111 , ctle_res1_sel_lane[3:0]
    tmp27 = 0x71;// ANA_RXREG_REG1.BT.B0 = #111#001 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp31 = 0x1;// ANA_SMPLR_REG1.BT.B0 = #####001 , reg_selmupf_lane[2:0]
    tmp36 = 0x2;// ANA_SMPLR_REG0.BT.B0 = ##000010 , pu_smplr_d_e_lane[2:0], pu_smplr_d_o_lane[2:0]
    tmp37 = 0x0;// ANA_CTLE_REG3.BT.B0 = ####0000 , ctle_current1_sel_lane[3:0]
    tmp39 = 0x1;// ANA_CTLE_REG8.BT.B0 = ####0001 , ctle_rl2_sel_lane[3:0]
  }
  ANA_DLL_REG1.BT.B0 = tmp0;
  ANA_CTLE_REG0.BT.B0 = tmp1;
  RX_DETERMINISTIC_LATENCY.BT.B0 = tmp2;
  RX_DETERMINISTIC_LATENCY.BT.B1 = tmp3;
  DTL_REG2.BT.B0 = tmp4;
  DTL_REG2.BT.B1 = tmp5;
  ANA_IMPCAL_REG0.BT.B0 = tmp6;
  TX_TRAIN_PAT_NUM1.BT.B0 = tmp7;
  TX_TRAIN_PAT_NUM1.BT.B1 = tmp8;
  ANA_SMPLR_REG4.BT.B0 = (ANA_SMPLR_REG4.BT.B0 & 0xf) | (tmp9 & 0xf0); // (ANA_SMPLR_REG4.BT.B0 & 00001111) | (tmp9 & 11110000)
  DFE_CTRL_REG5.BT.B0 = tmp10;
  ANA_EOM_REG3.BT.B0 = tmp11;
  DTL_REG1.BT.B0 = tmp12;
  DTL_REG1.BT.B1 = tmp13;
  ANA_INTPI_REG0.BT.B0 = tmp14;
  ANA_CTLE_REG1.BT.B0 = tmp15;
  ANA_CTLE_REG4.BT.B0 = tmp16;
  ANA_CTLE_REG7.BT.B0 = tmp17;
  ANA_ALIGN90_REG1.BT.B0 = (ANA_ALIGN90_REG1.BT.B0 & 0x1) | (tmp18 & 0xfe); // (ANA_ALIGN90_REG1.BT.B0 & 00000001) | (tmp18 & 11111110)
  ANA_DTL_REG3.BT.B0 = tmp19;
  TX_TRAIN_PATTERN_REG1.BT.B2 = tmp20;
  TX_TRAIN_PATTERN_REG1.BT.B3 = tmp21;
  ANA_CTLE_REG2.BT.B0 = tmp22;
  ANA_SMPLR_REG3.BT.B0 = tmp23;
  ANA_SMPLR_REG2.BT.B0 = tmp24;
  ANA_RSVD_REG9.BT.B0 = tmp25;
  ANA_CTLE_REG5.BT.B0 = tmp26;
  ANA_RXREG_REG1.BT.B0 = tmp27;
  ANA_DLL_REG.BT.B0 = tmp28;
  TX_TRAIN_PATTTERN_REG0.BT.B1 = tmp29;
  PM_CTRL_RX_LANE_REG1_LANE.BT.B0 = tmp30;
  ANA_SMPLR_REG1.BT.B0 = tmp31;
  CAL_CTRL4_LANE.BT.B2 = tmp32;
  ANA_RXREG_REG0.BT.B0 = tmp33;
  ANA_CTLE_REG6.BT.B0 = tmp34;
  RX_SYSTEM_LANE.BT.B0 = tmp35;
  ANA_SMPLR_REG0.BT.B0 = tmp36;
  ANA_CTLE_REG3.BT.B0 = tmp37;
  ANA_RSVD_REG1.BT.B0 = tmp38;
  ANA_CTLE_REG8.BT.B0 = tmp39;
}
void loadspeedtbl_avdd() BANKING_CTRL {
  uint8_t tmp0; //CMN_REG_5.BT.B0 , iop_chgpump_sel[2:0], iosc_chgpump_sel[3:0]
  uint8_t tmp1; //CMN_REG_6.BT.B0 , osc_chgpump_ctune[2:0], brch_chgpump_sel[3:0]
  uint8_t tmp2; //CMN_REG_79.BT.B0 , adc_ch_sel[1:0], tsen_adc_chop_sel[1:0], tsen_bias, tsen_dem_en, tsen_adc_raw_sel[1:0]
  uint8_t tmp3; //CMN_REG_88.BT.B0 , pulup, shrtr, pullup_rxtx_sel[1:0]
  uint8_t tmp4; //CMN_REG_1.BT.B0 , avdd_sel_cmn[2:0], en_bg_chopper_clk, en_bg_clk, en_bg_notch
  uint8_t tmp5; //CMN_REG_3.BT.B0 , bg_res_trim_sel[4:0]
  uint8_t tmp6; //CMN_REG_7.BT.B0 , sel_div_clkbg[1:0], en_ana_tst, sel_div_clkana, ana_tmon[1:0]
  uint8_t tmp7; //CMN_REG_100.BT.B0 , ipp_adj[1:0], sel_avdd_0p9v, rx_adc_vref_0p5v_sel[1:0]
  uint8_t tmp8; //CMN_REG_87.BT.B0 , pcm_sel_vref[2:0]
  uint8_t tmp9; //CMN_REG_4.BT.B0 , vref_chgpump_sel[2:0], en_chgpump2vddrs, en_chgpump_bgref, en_chgpump_clp, en_chgpump_hvop
  uint8_t tmp10; //CMN_REG_85.BT.B0 , vref_processmon_sel[2:0], pcm_ctrl[4:0]
  uint8_t tmp11; //CMN_REG_76.BT.B0 , tsen_adc_mode[1:0], tsen_adc_osr[1:0]
  uint8_t tmp12; //CMN_REG_86.BT.B0 , pcm_en, dro_sel[3:0], dro_en
  uint8_t tmp13; //CMN_REG_78.BT.B0 , tsen_adc_atest[2:0], tsen_adc_avg_bypass, tsen_adc_cal[1:0], bg_rpc_en, capswp_en
  uint8_t tmp14; //CMN_REG_77.BT.B0 , tsen_adc_chop_en[1:0], bg_trim[3:0]
  if (reg_PIN_AVDD_SEL_RD_2_0==6){
    tmp0 = 0x8E;// CMN_REG_5.BT.B0 = 1000111# , iop_chgpump_sel[2:0], iosc_chgpump_sel[3:0]
    tmp1 = 0x5E;// CMN_REG_6.BT.B0 = 0101111# , osc_chgpump_ctune[2:0], brch_chgpump_sel[3:0]
    tmp2 = 0x0;// CMN_REG_79.BT.B0 = 00000### , adc_ch_sel[1:0], tsen_adc_chop_sel[1:0], tsen_bias, tsen_dem_en, tsen_adc_raw_sel[1:0]
    tmp3 = 0x0;// CMN_REG_88.BT.B0 = 0####### , pulup, shrtr, pullup_rxtx_sel[1:0]
    tmp4 = 0x30;// CMN_REG_1.BT.B0 = ##110### , avdd_sel_cmn[2:0], en_bg_chopper_clk, en_bg_clk, en_bg_notch
    tmp5 = 0x68;// CMN_REG_3.BT.B0 = 01101### , bg_res_trim_sel[4:0]
    tmp6 = 0x0;// CMN_REG_7.BT.B0 = ##0000## , sel_div_clkbg[1:0], en_ana_tst, sel_div_clkana, ana_tmon[1:0]
    tmp7 = 0x0;// CMN_REG_100.BT.B0 = ##0##### , ipp_adj[1:0], sel_avdd_0p9v, rx_adc_vref_0p5v_sel[1:0]
    tmp8 = 0x40;// CMN_REG_87.BT.B0 = 010##### , pcm_sel_vref[2:0]
    tmp9 = 0x6A;// CMN_REG_4.BT.B0 = 01101#1# , vref_chgpump_sel[2:0], en_chgpump2vddrs, en_chgpump_bgref, en_chgpump_clp, en_chgpump_hvop
    tmp10 = 0xC0;// CMN_REG_85.BT.B0 = 11000000 , vref_processmon_sel[2:0], pcm_ctrl[4:0]
    tmp11 = 0x6;// CMN_REG_76.BT.B0 = ###0011# , tsen_adc_mode[1:0], tsen_adc_osr[1:0]
    tmp12 = 0x8;// CMN_REG_86.BT.B0 = #0001### , pcm_en, dro_sel[3:0], dro_en
    tmp13 = 0x1;// CMN_REG_78.BT.B0 = ###0###1 , tsen_adc_atest[2:0], tsen_adc_avg_bypass, tsen_adc_cal[1:0], bg_rpc_en, capswp_en
    tmp14 = 0xE0;// CMN_REG_77.BT.B0 = 111000## , tsen_adc_chop_en[1:0], bg_trim[3:0]
  }
  else if (reg_PIN_AVDD_SEL_RD_2_0==4){
    tmp0 = 0x8E;// CMN_REG_5.BT.B0 = 1000111# , iop_chgpump_sel[2:0], iosc_chgpump_sel[3:0]
    tmp1 = 0x5E;// CMN_REG_6.BT.B0 = 0101111# , osc_chgpump_ctune[2:0], brch_chgpump_sel[3:0]
    tmp2 = 0x0;// CMN_REG_79.BT.B0 = 00000### , adc_ch_sel[1:0], tsen_adc_chop_sel[1:0], tsen_bias, tsen_dem_en, tsen_adc_raw_sel[1:0]
    tmp3 = 0x0;// CMN_REG_88.BT.B0 = 0####### , pulup, shrtr, pullup_rxtx_sel[1:0]
    tmp4 = 0x20;// CMN_REG_1.BT.B0 = ##100### , avdd_sel_cmn[2:0], en_bg_chopper_clk, en_bg_clk, en_bg_notch
    tmp5 = 0x68;// CMN_REG_3.BT.B0 = 01101### , bg_res_trim_sel[4:0]
    tmp6 = 0x0;// CMN_REG_7.BT.B0 = ##0000## , sel_div_clkbg[1:0], en_ana_tst, sel_div_clkana, ana_tmon[1:0]
    tmp7 = 0x20;// CMN_REG_100.BT.B0 = ##1##### , ipp_adj[1:0], sel_avdd_0p9v, rx_adc_vref_0p5v_sel[1:0]
    tmp8 = 0x40;// CMN_REG_87.BT.B0 = 010##### , pcm_sel_vref[2:0]
    tmp9 = 0x6A;// CMN_REG_4.BT.B0 = 01101#1# , vref_chgpump_sel[2:0], en_chgpump2vddrs, en_chgpump_bgref, en_chgpump_clp, en_chgpump_hvop
    tmp10 = 0xC0;// CMN_REG_85.BT.B0 = 11000000 , vref_processmon_sel[2:0], pcm_ctrl[4:0]
    tmp11 = 0x6;// CMN_REG_76.BT.B0 = ###0011# , tsen_adc_mode[1:0], tsen_adc_osr[1:0]
    tmp12 = 0x8;// CMN_REG_86.BT.B0 = #0001### , pcm_en, dro_sel[3:0], dro_en
    tmp13 = 0x1;// CMN_REG_78.BT.B0 = ###0###1 , tsen_adc_atest[2:0], tsen_adc_avg_bypass, tsen_adc_cal[1:0], bg_rpc_en, capswp_en
    tmp14 = 0xE0;// CMN_REG_77.BT.B0 = 111000## , tsen_adc_chop_en[1:0], bg_trim[3:0]
  }
  else if (reg_PIN_AVDD_SEL_RD_2_0==3){
    tmp0 = 0x8E;// CMN_REG_5.BT.B0 = 1000111# , iop_chgpump_sel[2:0], iosc_chgpump_sel[3:0]
    tmp1 = 0x5E;// CMN_REG_6.BT.B0 = 0101111# , osc_chgpump_ctune[2:0], brch_chgpump_sel[3:0]
    tmp2 = 0x0;// CMN_REG_79.BT.B0 = 00000### , adc_ch_sel[1:0], tsen_adc_chop_sel[1:0], tsen_bias, tsen_dem_en, tsen_adc_raw_sel[1:0]
    tmp3 = 0x0;// CMN_REG_88.BT.B0 = 0####### , pulup, shrtr, pullup_rxtx_sel[1:0]
    tmp4 = 0x18;// CMN_REG_1.BT.B0 = ##011### , avdd_sel_cmn[2:0], en_bg_chopper_clk, en_bg_clk, en_bg_notch
    tmp5 = 0x68;// CMN_REG_3.BT.B0 = 01101### , bg_res_trim_sel[4:0]
    tmp6 = 0x0;// CMN_REG_7.BT.B0 = ##0000## , sel_div_clkbg[1:0], en_ana_tst, sel_div_clkana, ana_tmon[1:0]
    tmp7 = 0x20;// CMN_REG_100.BT.B0 = ##1##### , ipp_adj[1:0], sel_avdd_0p9v, rx_adc_vref_0p5v_sel[1:0]
    tmp8 = 0x40;// CMN_REG_87.BT.B0 = 010##### , pcm_sel_vref[2:0]
    tmp9 = 0x6A;// CMN_REG_4.BT.B0 = 01101#1# , vref_chgpump_sel[2:0], en_chgpump2vddrs, en_chgpump_bgref, en_chgpump_clp, en_chgpump_hvop
    tmp10 = 0xC0;// CMN_REG_85.BT.B0 = 11000000 , vref_processmon_sel[2:0], pcm_ctrl[4:0]
    tmp11 = 0x6;// CMN_REG_76.BT.B0 = ###0011# , tsen_adc_mode[1:0], tsen_adc_osr[1:0]
    tmp12 = 0x8;// CMN_REG_86.BT.B0 = #0001### , pcm_en, dro_sel[3:0], dro_en
    tmp13 = 0x1;// CMN_REG_78.BT.B0 = ###0###1 , tsen_adc_atest[2:0], tsen_adc_avg_bypass, tsen_adc_cal[1:0], bg_rpc_en, capswp_en
    tmp14 = 0xE0;// CMN_REG_77.BT.B0 = 111000## , tsen_adc_chop_en[1:0], bg_trim[3:0]
  }
  else if (reg_PIN_AVDD_SEL_RD_2_0==7){
    tmp0 = 0x8E;// CMN_REG_5.BT.B0 = 1000111# , iop_chgpump_sel[2:0], iosc_chgpump_sel[3:0]
    tmp1 = 0x5E;// CMN_REG_6.BT.B0 = 0101111# , osc_chgpump_ctune[2:0], brch_chgpump_sel[3:0]
    tmp2 = 0x0;// CMN_REG_79.BT.B0 = 00000### , adc_ch_sel[1:0], tsen_adc_chop_sel[1:0], tsen_bias, tsen_dem_en, tsen_adc_raw_sel[1:0]
    tmp3 = 0x0;// CMN_REG_88.BT.B0 = 0####### , pulup, shrtr, pullup_rxtx_sel[1:0]
    tmp4 = 0x38;// CMN_REG_1.BT.B0 = ##111### , avdd_sel_cmn[2:0], en_bg_chopper_clk, en_bg_clk, en_bg_notch
    tmp5 = 0x68;// CMN_REG_3.BT.B0 = 01101### , bg_res_trim_sel[4:0]
    tmp6 = 0x0;// CMN_REG_7.BT.B0 = ##0000## , sel_div_clkbg[1:0], en_ana_tst, sel_div_clkana, ana_tmon[1:0]
    tmp7 = 0x0;// CMN_REG_100.BT.B0 = ##0##### , ipp_adj[1:0], sel_avdd_0p9v, rx_adc_vref_0p5v_sel[1:0]
    tmp8 = 0x40;// CMN_REG_87.BT.B0 = 010##### , pcm_sel_vref[2:0]
    tmp9 = 0x6A;// CMN_REG_4.BT.B0 = 01101#1# , vref_chgpump_sel[2:0], en_chgpump2vddrs, en_chgpump_bgref, en_chgpump_clp, en_chgpump_hvop
    tmp10 = 0xC0;// CMN_REG_85.BT.B0 = 11000000 , vref_processmon_sel[2:0], pcm_ctrl[4:0]
    tmp11 = 0x6;// CMN_REG_76.BT.B0 = ###0011# , tsen_adc_mode[1:0], tsen_adc_osr[1:0]
    tmp12 = 0x8;// CMN_REG_86.BT.B0 = #0001### , pcm_en, dro_sel[3:0], dro_en
    tmp13 = 0x1;// CMN_REG_78.BT.B0 = ###0###1 , tsen_adc_atest[2:0], tsen_adc_avg_bypass, tsen_adc_cal[1:0], bg_rpc_en, capswp_en
    tmp14 = 0xE0;// CMN_REG_77.BT.B0 = 111000## , tsen_adc_chop_en[1:0], bg_trim[3:0]
  }
  else if (reg_PIN_AVDD_SEL_RD_2_0==2){
    tmp0 = 0x8E;// CMN_REG_5.BT.B0 = 1000111# , iop_chgpump_sel[2:0], iosc_chgpump_sel[3:0]
    tmp1 = 0x5E;// CMN_REG_6.BT.B0 = 0101111# , osc_chgpump_ctune[2:0], brch_chgpump_sel[3:0]
    tmp2 = 0x0;// CMN_REG_79.BT.B0 = 00000### , adc_ch_sel[1:0], tsen_adc_chop_sel[1:0], tsen_bias, tsen_dem_en, tsen_adc_raw_sel[1:0]
    tmp3 = 0x0;// CMN_REG_88.BT.B0 = 0####### , pulup, shrtr, pullup_rxtx_sel[1:0]
    tmp4 = 0x10;// CMN_REG_1.BT.B0 = ##010### , avdd_sel_cmn[2:0], en_bg_chopper_clk, en_bg_clk, en_bg_notch
    tmp5 = 0x68;// CMN_REG_3.BT.B0 = 01101### , bg_res_trim_sel[4:0]
    tmp6 = 0x0;// CMN_REG_7.BT.B0 = ##0000## , sel_div_clkbg[1:0], en_ana_tst, sel_div_clkana, ana_tmon[1:0]
    tmp7 = 0x20;// CMN_REG_100.BT.B0 = ##1##### , ipp_adj[1:0], sel_avdd_0p9v, rx_adc_vref_0p5v_sel[1:0]
    tmp8 = 0x40;// CMN_REG_87.BT.B0 = 010##### , pcm_sel_vref[2:0]
    tmp9 = 0x2A;// CMN_REG_4.BT.B0 = 00101#1# , vref_chgpump_sel[2:0], en_chgpump2vddrs, en_chgpump_bgref, en_chgpump_clp, en_chgpump_hvop
    tmp10 = 0xC0;// CMN_REG_85.BT.B0 = 11000000 , vref_processmon_sel[2:0], pcm_ctrl[4:0]
    tmp11 = 0x6;// CMN_REG_76.BT.B0 = ###0011# , tsen_adc_mode[1:0], tsen_adc_osr[1:0]
    tmp12 = 0x8;// CMN_REG_86.BT.B0 = #0001### , pcm_en, dro_sel[3:0], dro_en
    tmp13 = 0x1;// CMN_REG_78.BT.B0 = ###0###1 , tsen_adc_atest[2:0], tsen_adc_avg_bypass, tsen_adc_cal[1:0], bg_rpc_en, capswp_en
    tmp14 = 0xE0;// CMN_REG_77.BT.B0 = 111000## , tsen_adc_chop_en[1:0], bg_trim[3:0]
  }
  else if (reg_PIN_AVDD_SEL_RD_2_0==5){
    tmp0 = 0x8E;// CMN_REG_5.BT.B0 = 1000111# , iop_chgpump_sel[2:0], iosc_chgpump_sel[3:0]
    tmp1 = 0x5E;// CMN_REG_6.BT.B0 = 0101111# , osc_chgpump_ctune[2:0], brch_chgpump_sel[3:0]
    tmp2 = 0x0;// CMN_REG_79.BT.B0 = 00000### , adc_ch_sel[1:0], tsen_adc_chop_sel[1:0], tsen_bias, tsen_dem_en, tsen_adc_raw_sel[1:0]
    tmp3 = 0x0;// CMN_REG_88.BT.B0 = 0####### , pulup, shrtr, pullup_rxtx_sel[1:0]
    tmp4 = 0x28;// CMN_REG_1.BT.B0 = ##101### , avdd_sel_cmn[2:0], en_bg_chopper_clk, en_bg_clk, en_bg_notch
    tmp5 = 0x68;// CMN_REG_3.BT.B0 = 01101### , bg_res_trim_sel[4:0]
    tmp6 = 0x0;// CMN_REG_7.BT.B0 = ##0000## , sel_div_clkbg[1:0], en_ana_tst, sel_div_clkana, ana_tmon[1:0]
    tmp7 = 0x0;// CMN_REG_100.BT.B0 = ##0##### , ipp_adj[1:0], sel_avdd_0p9v, rx_adc_vref_0p5v_sel[1:0]
    tmp8 = 0x40;// CMN_REG_87.BT.B0 = 010##### , pcm_sel_vref[2:0]
    tmp9 = 0x6A;// CMN_REG_4.BT.B0 = 01101#1# , vref_chgpump_sel[2:0], en_chgpump2vddrs, en_chgpump_bgref, en_chgpump_clp, en_chgpump_hvop
    tmp10 = 0xC0;// CMN_REG_85.BT.B0 = 11000000 , vref_processmon_sel[2:0], pcm_ctrl[4:0]
    tmp11 = 0x6;// CMN_REG_76.BT.B0 = ###0011# , tsen_adc_mode[1:0], tsen_adc_osr[1:0]
    tmp12 = 0x8;// CMN_REG_86.BT.B0 = #0001### , pcm_en, dro_sel[3:0], dro_en
    tmp13 = 0x1;// CMN_REG_78.BT.B0 = ###0###1 , tsen_adc_atest[2:0], tsen_adc_avg_bypass, tsen_adc_cal[1:0], bg_rpc_en, capswp_en
    tmp14 = 0xE0;// CMN_REG_77.BT.B0 = 111000## , tsen_adc_chop_en[1:0], bg_trim[3:0]
  }
  CMN_REG_5.BT.B0 = tmp0;
  CMN_REG_6.BT.B0 = tmp1;
  CMN_REG_79.BT.B0 = (CMN_REG_79.BT.B0 & 0x7) | (tmp2 & 0xf8); // (CMN_REG_79.BT.B0 & 00000111) | (tmp2 & 11111000)
  CMN_REG_88.BT.B0 = (CMN_REG_88.BT.B0 & 0x70) | (tmp3 & 0x8f); // (CMN_REG_88.BT.B0 & 01110000) | (tmp3 & 10001111)
  CMN_REG_1.BT.B0 = (CMN_REG_1.BT.B0 & 0x7) | (tmp4 & 0xf8); // (CMN_REG_1.BT.B0 & 00000111) | (tmp4 & 11111000)
  CMN_REG_3.BT.B0 = tmp5;
  CMN_REG_7.BT.B0 = (CMN_REG_7.BT.B0 & 0xc0) | (tmp6 & 0x3f); // (CMN_REG_7.BT.B0 & 11000000) | (tmp6 & 00111111)
  CMN_REG_100.BT.B0 = (CMN_REG_100.BT.B0 & 0xd8) | (tmp7 & 0x27); // (CMN_REG_100.BT.B0 & 11011000) | (tmp7 & 00100111)
  CMN_REG_87.BT.B0 = tmp8;
  CMN_REG_4.BT.B0 = (CMN_REG_4.BT.B0 & 0x4) | (tmp9 & 0xfb); // (CMN_REG_4.BT.B0 & 00000100) | (tmp9 & 11111011)
  CMN_REG_85.BT.B0 = tmp10;
  CMN_REG_76.BT.B0 = tmp11;
  CMN_REG_86.BT.B0 = (CMN_REG_86.BT.B0 & 0x84) | (tmp12 & 0x7b); // (CMN_REG_86.BT.B0 & 10000100) | (tmp12 & 01111011)
  CMN_REG_78.BT.B0 = (CMN_REG_78.BT.B0 & 0xee) | (tmp13 & 0x11); // (CMN_REG_78.BT.B0 & 11101110) | (tmp13 & 00010001)
  CMN_REG_77.BT.B0 = tmp14;
}
void loadspeedtbl_lc_pll (uint8_t pll_rate_sel, uint8_t ref_clk_sel, int tsrs_sel) BANKING_CTRL {
  uint8_t tmp0 = 0x17; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
  uint8_t tmp1 = 0x0; //PLL_TS_LANE_REG12.BT.B1 , pll_ts_fbdiv_cal_lane[9:0]
  uint8_t tmp2 = 0x30; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
  uint8_t tmp3 = 0x9F; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
  uint8_t tmp4 = 0xB; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
  uint8_t tmp5 = 0x18; //PLL_TS_DTX_REG2.BT.B3 , pll_ts_ssc_step_125ppm_lane[3:0], pll_ts_ssc_acc_factor_lane
  uint8_t tmp6 = 0x78; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
  uint8_t tmp7 = 0x42; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
  uint8_t tmp8 = 0x11; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
  uint8_t tmp9 = 0x80; //PLL_TS_UPHY14_CMN_ANAREG_TOP_022.BT.B0 , pll_ts_reg0p9_speed_track_clk_lane[2:0]
  uint8_t tmp10 = 0xA; //PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
  uint8_t tmp11 = 0x40; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
  uint8_t tmp12 = 0x1F; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
  uint8_t tmp13 = 0x0; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
  uint8_t tmp14 = 0x0; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
  uint8_t tmp15 = 0x0; //PLL_TS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 , pll_ts_ck500m_div_lane[1:0], pll_ts_lcpll_postdiv_en_lane, pll_ts_lcpll_postdiv_1p5or2_en_lane
  uint8_t tmp16 = 0x72; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
  if (pll_rate_sel==22){
    tmp2 = 0x2D; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0xE5; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp4 = 0xA; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp11 = 0x92; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp12 = 0x1E; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
    if (ref_clk_sel==7){
      tmp2 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00010010 , pll_ts_fbdiv_lane[7:0]
      tmp11 = 0xB8;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 10111000 , pll_ts_speed_thresh_lane[15:0]
      tmp16 = 0x3A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 00111010 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp16 = 0x62;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01100010 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp2 = 0x1C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00011100 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0xCC;// PLL_TS_LANE_REG1.BT.B0 = 11001100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xED;// PLL_TS_LANE_REG1.BT.B1 = 11101101 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x52;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01010010 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp11 = 0xD1;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 11010001 , pll_ts_speed_thresh_lane[15:0]
      tmp16 = 0x62;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01100010 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp2 = 0x38;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111000 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0xCC;// PLL_TS_LANE_REG1.BT.B0 = 11001100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xED;// PLL_TS_LANE_REG1.BT.B1 = 11101101 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x8D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10001101 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x15;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010101 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xEC;// PLL_TS_LANE_REG1.BT.B0 = 11101100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xA;// PLL_TS_LANE_REG1.BT.B1 = 00001010 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x5E;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01011110 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x15;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010101 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0xEC;// PLL_TS_LANE_REG1.BT.B0 = 11101100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xA;// PLL_TS_LANE_REG1.BT.B1 = 00001010 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==0){
      tmp2 = 0x71;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01110001 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x15;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010101 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0x34;// PLL_TS_LANE_REG1.BT.B0 = 00110100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x12;// PLL_TS_LANE_REG1.BT.B1 = 00010010 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x7A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111010 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
  }
  else if (pll_rate_sel==21){
    if (ref_clk_sel==7){
      tmp2 = 0x4D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001101 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0x22;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp11 = 0x66;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 01100110 , pll_ts_speed_thresh_lane[15:0]
      tmp13 = 0xAB;// PLL_TS_LANE_REG1.BT.B0 = 10101011 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xA;// PLL_TS_LANE_REG1.BT.B1 = 00001010 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x3A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 00111010 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp16 = 0x62;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01100010 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp2 = 0x1E;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00011110 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x52;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01010010 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp11 = 0x80;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 10000000 , pll_ts_speed_thresh_lane[15:0]
      tmp16 = 0x62;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01100010 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp2 = 0x3C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111100 , pll_ts_fbdiv_lane[7:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x96;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10010110 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x15;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010101 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x64;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100100 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x15;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010101 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    }
    else if (ref_clk_sel==0){
      tmp2 = 0x78;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111000 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x15;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010101 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x7A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111010 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
  }
  if (tsrs_sel==0){
    PLL_TS_LANE_REG12.BT.B0 = tmp0;
    PLL_TS_LANE_REG12.BT.B1 = tmp1;
    PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = tmp2;
    PLL_TS_DTX_REG2.BT.B0 = tmp3;
    PLL_TS_DTX_REG2.BT.B1 = tmp4;
    PLL_TS_DTX_REG2.BT.B3 = tmp5;
    PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 = tmp6;
    PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 = tmp7;
    PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = tmp8;
    PLL_TS_UPHY14_CMN_ANAREG_TOP_022.BT.B0 = tmp9;
    PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = tmp10;
    PLL_TS_CAL_CTRL_LANE.BT.B0 = tmp11;
    PLL_TS_CAL_CTRL_LANE.BT.B1 = tmp12;
    PLL_TS_LANE_REG1.BT.B0 = tmp13;
    PLL_TS_LANE_REG1.BT.B1 = tmp14;
    PLL_TS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 = tmp15;
    PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = tmp16;
  }
  else{
    PLL_RS_LANE_REG12.BT.B0 = tmp0;
    PLL_RS_LANE_REG12.BT.B1 = tmp1;
    PLL_RS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = tmp2;
    PLL_RS_DTX_REG2.BT.B0 = tmp3;
    PLL_RS_DTX_REG2.BT.B1 = tmp4;
    PLL_RS_DTX_REG2.BT.B3 = tmp5;
    PLL_RS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 = tmp6;
    PLL_RS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 = tmp7;
    PLL_RS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = tmp8;
    PLL_RS_UPHY14_CMN_ANAREG_TOP_022.BT.B0 = tmp9;
    PLL_RS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = tmp10;
    PLL_RS_CAL_CTRL_LANE.BT.B0 = tmp11;
    PLL_RS_CAL_CTRL_LANE.BT.B1 = tmp12;
    PLL_RS_LANE_REG1.BT.B0 = tmp13;
    PLL_RS_LANE_REG1.BT.B1 = tmp14;
    PLL_RS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 = tmp15;
    PLL_RS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = tmp16;
  }
}
void loadspeedtbl_tx() BANKING_CTRL {
  uint8_t tmp0 = 0x1; //TX_RSVD_REG0.BT.B0 , txrsvd0_lane[7:1], txrsvd0_lane[0]
  uint8_t tmp1 = 0x0; //ANA_EOM_REG4.BT.B0 , txpll_hi_speed_lane
  uint8_t tmp2 = 0x40; //TX_SYSTEM_LANE1.BT.B3 , tx_pam2_en_lane
  uint8_t tmp3 = 0x2; //ANA_TXSPEED_REG0.BT.B0 , txspeed_div_lane[2:0]
  uint8_t tmp4 = 0x2; //ANA_TXREG_REG0.BT.B0 , txreg_speedtrk_clk_lane[3:0]
  uint8_t tmp5 = 0x2; //ANA_TXREG_REG1.BT.B0 , txreg_speedtrk_data_lane[3:0]
  uint8_t tmp6 = 0x3; //CLKGEN_TX_LANE_REG1_LANE.BT.B0 , tx_train_pat_sel_lane[2:0], tx_data_width_lane[1:0], txdata_latency_reduce_en_lane
  uint8_t tmp7 = 0x15; //CAL_CTRL4_LANE.BT.B3 , tx_pll_rate_lane[7:0]
  uint8_t tmp8 = 0x7; //ANA_TX_FIR_SPD_REG0.BT.B0 , txfir_bypass_l1_delay_lane, txfir_bypass_l2_delay_lane, txfir_bypass_l3_delay_lane, txfir_2_dig_clk_div_lane
  uint8_t tmp9 = 0x0; //TX_TRAINING_IF_REG3.BT.B0 , ethernet_mode_tx_lane[1:0]
  uint8_t tmp10 = 0x0; //TX_TRAINING_IF_REG3.BT.B3 , tx_train_pat_two_zero_lane
  if (gen_tx==4){
    tmp3 = 0x0;// ANA_TXSPEED_REG0.BT.B0 = #####000 , txspeed_div_lane[2:0]
    tmp4 = 0xA;// ANA_TXREG_REG0.BT.B0 = ####1010 , txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0xA;// ANA_TXREG_REG1.BT.B0 = ####1010 , txreg_speedtrk_data_lane[3:0]
    tmp6 = 0x22;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = ##100010 , tx_train_pat_sel_lane[2:0], tx_data_width_lane[1:0], txdata_latency_reduce_en_lane
    tmp7 = 0x16;// CAL_CTRL4_LANE.BT.B3 = 00010110 , tx_pll_rate_lane[7:0]
    tmp8 = 0x1;// ANA_TX_FIR_SPD_REG0.BT.B0 = ####0001 , txfir_bypass_l1_delay_lane, txfir_bypass_l2_delay_lane, txfir_bypass_l3_delay_lane, txfir_2_dig_clk_div_lane
  }
  else if (gen_tx==3){
    tmp3 = 0x1;// ANA_TXSPEED_REG0.BT.B0 = #####001 , txspeed_div_lane[2:0]
    tmp4 = 0x6;// ANA_TXREG_REG0.BT.B0 = ####0110 , txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0x6;// ANA_TXREG_REG1.BT.B0 = ####0110 , txreg_speedtrk_data_lane[3:0]
    tmp6 = 0x2;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = ##000010 , tx_train_pat_sel_lane[2:0], tx_data_width_lane[1:0], txdata_latency_reduce_en_lane
    tmp8 = 0x1;// ANA_TX_FIR_SPD_REG0.BT.B0 = ####0001 , txfir_bypass_l1_delay_lane, txfir_bypass_l2_delay_lane, txfir_bypass_l3_delay_lane, txfir_2_dig_clk_div_lane
  }
  else if (gen_tx==2){
    tmp4 = 0x4;// ANA_TXREG_REG0.BT.B0 = ####0100 , txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0x4;// ANA_TXREG_REG1.BT.B0 = ####0100 , txreg_speedtrk_data_lane[3:0]
  }
  else if (gen_tx==1){
    tmp3 = 0x3;// ANA_TXSPEED_REG0.BT.B0 = #####011 , txspeed_div_lane[2:0]
  }
  else if (gen_tx==0){
    tmp3 = 0x4;// ANA_TXSPEED_REG0.BT.B0 = #####100 , txspeed_div_lane[2:0]
    tmp8 = 0xF;// ANA_TX_FIR_SPD_REG0.BT.B0 = ####1111 , txfir_bypass_l1_delay_lane, txfir_bypass_l2_delay_lane, txfir_bypass_l3_delay_lane, txfir_2_dig_clk_div_lane
  }
  TX_RSVD_REG0.BT.B0 = tmp0;
  ANA_EOM_REG4.BT.B0 = tmp1;
  TX_SYSTEM_LANE1.BT.B3 = tmp2;
  ANA_TXSPEED_REG0.BT.B0 = tmp3;
  ANA_TXREG_REG0.BT.B0 = tmp4;
  ANA_TXREG_REG1.BT.B0 = tmp5;
  CLKGEN_TX_LANE_REG1_LANE.BT.B0 = tmp6;
  CAL_CTRL4_LANE.BT.B3 = tmp7;
  ANA_TX_FIR_SPD_REG0.BT.B0 = tmp8;
  TX_TRAINING_IF_REG3.BT.B0 = tmp9;
  TX_TRAINING_IF_REG3.BT.B3 = tmp10;
}
#endif //_SAS_BUILD
