#include "common.h"
#ifdef USE_BANKING
#pragma codeseg BANK3
#endif
#ifdef _SERDES_BUILD
void loadspeedtbl_rx() BANKING_CTRL {
  uint8_t tmp0 = 0x6; //ANA_DLL_REG1.BT.B0 , eom_dll_cap_sel_lane[2:0]
  uint8_t tmp1 = 0x30; //ANA_CTLE_REG0.BT.B0 , ctle_bypass1_en_lane[1:0], ctle_bypass2_en_lane
  uint8_t tmp2 = 0x4; //PLL_RS_LANE_REG12.BT.B2 , rx_pll_rate_sel_lane[4:0]
  uint8_t tmp3 = 0xE2; //DTL_REG2.BT.B0 , rx_foffset_extra_m_lane[13:0]
  uint8_t tmp4 = 0x95; //DTL_REG2.BT.B1 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
  uint8_t tmp5 = 0x0; //ANA_IMPCAL_REG0.BT.B0 , path_disable_edge_lane, intpr_lane[1:0]
  uint8_t tmp6 = 0x88; //TX_TRAIN_PAT_NUM1.BT.B0 , train_pat_num_lane[9:0]
  uint8_t tmp7 = 0x0; //TX_TRAIN_PAT_NUM1.BT.B1 , train_pat_num_lane[9:0]
  uint8_t tmp8 = 0x0; //ANA_SMPLR_REG4.BT.B0 , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
  uint8_t tmp9 = 0x0; //DFE_CTRL_REG5.BT.B0 , dfe_dis_lane
  uint8_t tmp10 = 0x0; //ANA_EOM_REG3.BT.B0 , rxpll_hi_speed_lane
  uint8_t tmp11 = 0x0; //DTL_REG1.BT.B0 , init_rxfoffs_lane[12:0]
  uint8_t tmp12 = 0x0; //DTL_REG1.BT.B1 , init_rxfoffs_lane[12:0]
  uint8_t tmp13 = 0x76; //ANA_INTPI_REG0.BT.B0 , rxintpi_low_lane[3:0], rxintpi_lane[3:0]
  uint8_t tmp14 = 0x4; //ANA_CTLE_REG1.BT.B0 , ctle_cap1_sel_g_lane[3:0]
  uint8_t tmp15 = 0xF; //ANA_CTLE_REG4.BT.B0 , ctle_current2_sel_lane[3:0]
  uint8_t tmp16 = 0xF; //ANA_CTLE_REG7.BT.B0 , ctle_rl1_sel_lane[3:0]
  uint8_t tmp17 = 0x0; //ANA_ALIGN90_REG1.BT.B0 , align90_vcap_lane[1:0], align90_ref_filt_bw_lane
  uint8_t tmp18 = 0x0; //ANA_DTL_REG3.BT.B0 , dtl_clk_speedup_lane[2:0]
  uint8_t tmp19 = 0x42; //TX_TRAIN_PATTERN_REG1.BT.B2 , train_pat_num_rx_lane[9:0]
  uint8_t tmp20 = 0x0; //TX_TRAIN_PATTERN_REG1.BT.B3 , train_pat_num_rx_lane[9:0]
  uint8_t tmp21 = 0xF; //ANA_CTLE_REG2.BT.B0 , ctle_cap2_sel_lane[3:0]
  uint8_t tmp22 = 0x3; //ANA_SMPLR_REG3.BT.B0 , reg_selmupi_lane[2:0]
  uint8_t tmp23 = 0xD2; //ANA_SMPLR_REG2.BT.B0 , pu_ctle_even_lane, pu_ctle_odd_lane, pu_smplr_s_e_lane[2:0], pu_smplr_s_o_lane[2:0]
  uint8_t tmp24 = 0x0; //ANA_RSVD_REG9.BT.B0 , ctle_cl2_sel_lane[1:0], ctle_cl1_sel_lane[1:0]
  uint8_t tmp25 = 0x5; //ANA_CTLE_REG5.BT.B0 , ctle_res1_sel_lane[3:0]
  uint8_t tmp26 = 0x40; //ANA_RXREG_REG1.BT.B0 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
  uint8_t tmp27 = 0x6; //ANA_DLL_REG.BT.B0 , dll_cap_sel_lane[2:0]
  uint8_t tmp28 = 0x4; //TX_TRAIN_PATTTERN_REG0.BT.B1 , ethernet_mode_lane[1:0]
  uint8_t tmp29 = 0x54; //PM_CTRL_RX_LANE_REG1_LANE.BT.B0 , rx_selmuff_lane[3:0], rx_selmufi_lane[3:0]
  uint8_t tmp30 = 0x4; //ANA_SMPLR_REG1.BT.B0 , reg_selmupf_lane[2:0]
  uint8_t tmp31 = 0xA; //ANA_RXREG_REG0.BT.B0 , rxreg_speedtrk_clk_half_lane, rxreg_speedtrk_clk_lane[2:0]
  uint8_t tmp32 = 0x3; //ANA_CTLE_REG6.BT.B0 , ctle_res2_sel_lane[3:0]
  uint8_t tmp33 = 0x3; //RX_SYSTEM_LANE.BT.B0 , rx_data_width_lane[1:0], rx_pam2_en_lane
  uint8_t tmp34 = 0x12; //ANA_SMPLR_REG0.BT.B0 , pu_smplr_d_e_lane[2:0], pu_smplr_d_o_lane[2:0]
  uint8_t tmp35 = 0xF; //ANA_CTLE_REG3.BT.B0 , ctle_current1_sel_lane[3:0]
  uint8_t tmp36 = 0x7; //ANA_RSVD_REG1.BT.B0 , ana_rsvd1_lane[7:0]
  uint8_t tmp37 = 0xF; //ANA_CTLE_REG8.BT.B0 , ctle_rl2_sel_lane[3:0]
  if (gen_rx==49){
    tmp3 = 0xA;// DTL_REG2.BT.B0 = 00001010 , rx_foffset_extra_m_lane[13:0]
    tmp5 = 0x2;// ANA_IMPCAL_REG0.BT.B0 = #####010 , path_disable_edge_lane, intpr_lane[1:0]
    tmp8 = 0x10;// ANA_SMPLR_REG4.BT.B0 = ##01#### , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
    tmp15 = 0xA;// ANA_CTLE_REG4.BT.B0 = ####1010 , ctle_current2_sel_lane[3:0]
    tmp16 = 0x7;// ANA_CTLE_REG7.BT.B0 = ####0111 , ctle_rl1_sel_lane[3:0]
    tmp21 = 0xA;// ANA_CTLE_REG2.BT.B0 = ####1010 , ctle_cap2_sel_lane[3:0]
    tmp25 = 0x8;// ANA_CTLE_REG5.BT.B0 = ####1000 , ctle_res1_sel_lane[3:0]
    tmp32 = 0x7;// ANA_CTLE_REG6.BT.B0 = ####0111 , ctle_res2_sel_lane[3:0]
    tmp35 = 0x7;// ANA_CTLE_REG3.BT.B0 = ####0111 , ctle_current1_sel_lane[3:0]
    tmp37 = 0xA;// ANA_CTLE_REG8.BT.B0 = ####1010 , ctle_rl2_sel_lane[3:0]
  }
  else if (gen_rx==48){
    tmp0 = 0x0;// ANA_DLL_REG1.BT.B0 = #####000 , eom_dll_cap_sel_lane[2:0]
    tmp1 = 0x0;// ANA_CTLE_REG0.BT.B0 = #000#### , ctle_bypass1_en_lane[1:0], ctle_bypass2_en_lane
    tmp2 = 0x1C;// PLL_RS_LANE_REG12.BT.B2 = ###11100 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0xAB;// DTL_REG2.BT.B0 = 10101011 , rx_foffset_extra_m_lane[13:0]
    tmp4 = 0xA1;// DTL_REG2.BT.B1 = 10100001 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp10 = 0x1;// ANA_EOM_REG3.BT.B0 = #######1 , rxpll_hi_speed_lane
    tmp13 = 0xBC;// ANA_INTPI_REG0.BT.B0 = 10111100 , rxintpi_low_lane[3:0], rxintpi_lane[3:0]
    tmp14 = 0xF;// ANA_CTLE_REG1.BT.B0 = ####1111 , ctle_cap1_sel_g_lane[3:0]
    tmp18 = 0x4;// ANA_DTL_REG3.BT.B0 = #####100 , dtl_clk_speedup_lane[2:0]
    tmp26 = 0x7;// ANA_RXREG_REG1.BT.B0 = #000#111 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp27 = 0x0;// ANA_DLL_REG.BT.B0 = #####000 , dll_cap_sel_lane[2:0]
    tmp31 = 0x7;// ANA_RXREG_REG0.BT.B0 = ####0111 , rxreg_speedtrk_clk_half_lane, rxreg_speedtrk_clk_lane[2:0]
    tmp36 = 0x0;// ANA_RSVD_REG1.BT.B0 = 00000000 , ana_rsvd1_lane[7:0]
  }
  else if (gen_rx==47){
    tmp0 = 0x7;// ANA_DLL_REG1.BT.B0 = #####111 , eom_dll_cap_sel_lane[2:0]
    tmp2 = 0x0;// PLL_RS_LANE_REG12.BT.B2 = ###00000 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0xC7;// DTL_REG2.BT.B0 = 11000111 , rx_foffset_extra_m_lane[13:0]
    tmp4 = 0x8F;// DTL_REG2.BT.B1 = 10001111 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp5 = 0x3;// ANA_IMPCAL_REG0.BT.B0 = #####011 , path_disable_edge_lane, intpr_lane[1:0]
    tmp13 = 0x42;// ANA_INTPI_REG0.BT.B0 = 01000010 , rxintpi_low_lane[3:0], rxintpi_lane[3:0]
    tmp14 = 0xF;// ANA_CTLE_REG1.BT.B0 = ####1111 , ctle_cap1_sel_g_lane[3:0]
    tmp15 = 0xE;// ANA_CTLE_REG4.BT.B0 = ####1110 , ctle_current2_sel_lane[3:0]
    tmp16 = 0xA;// ANA_CTLE_REG7.BT.B0 = ####1010 , ctle_rl1_sel_lane[3:0]
    tmp17 = 0x2;// ANA_ALIGN90_REG1.BT.B0 = #####01# , align90_vcap_lane[1:0], align90_ref_filt_bw_lane
    tmp18 = 0x4;// ANA_DTL_REG3.BT.B0 = #####100 , dtl_clk_speedup_lane[2:0]
    tmp25 = 0x7;// ANA_CTLE_REG5.BT.B0 = ####0111 , ctle_res1_sel_lane[3:0]
    tmp26 = 0x3;// ANA_RXREG_REG1.BT.B0 = #000#011 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp27 = 0x7;// ANA_DLL_REG.BT.B0 = #####111 , dll_cap_sel_lane[2:0]
    tmp31 = 0x2;// ANA_RXREG_REG0.BT.B0 = ####0010 , rxreg_speedtrk_clk_half_lane, rxreg_speedtrk_clk_lane[2:0]
    tmp32 = 0x4;// ANA_CTLE_REG6.BT.B0 = ####0100 , ctle_res2_sel_lane[3:0]
    tmp35 = 0xA;// ANA_CTLE_REG3.BT.B0 = ####1010 , ctle_current1_sel_lane[3:0]
    tmp37 = 0xE;// ANA_CTLE_REG8.BT.B0 = ####1110 , ctle_rl2_sel_lane[3:0]
  }
  else if (gen_rx==46){
    tmp2 = 0x6;// PLL_RS_LANE_REG12.BT.B2 = ###00110 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0xB3;// DTL_REG2.BT.B0 = 10110011 , rx_foffset_extra_m_lane[13:0]
    tmp5 = 0x6;// ANA_IMPCAL_REG0.BT.B0 = #####110 , path_disable_edge_lane, intpr_lane[1:0]
    tmp8 = 0x30;// ANA_SMPLR_REG4.BT.B0 = ##11#### , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
    tmp9 = 0x1;// DFE_CTRL_REG5.BT.B0 = #######1 , dfe_dis_lane
    tmp14 = 0x7;// ANA_CTLE_REG1.BT.B0 = ####0111 , ctle_cap1_sel_g_lane[3:0]
    tmp15 = 0x2;// ANA_CTLE_REG4.BT.B0 = ####0010 , ctle_current2_sel_lane[3:0]
    tmp16 = 0x0;// ANA_CTLE_REG7.BT.B0 = ####0000 , ctle_rl1_sel_lane[3:0]
    tmp21 = 0x7;// ANA_CTLE_REG2.BT.B0 = ####0111 , ctle_cap2_sel_lane[3:0]
    tmp23 = 0x80;// ANA_SMPLR_REG2.BT.B0 = 10000000 , pu_ctle_even_lane, pu_ctle_odd_lane, pu_smplr_s_e_lane[2:0], pu_smplr_s_o_lane[2:0]
    tmp25 = 0xF;// ANA_CTLE_REG5.BT.B0 = ####1111 , ctle_res1_sel_lane[3:0]
    tmp26 = 0x60;// ANA_RXREG_REG1.BT.B0 = #110#000 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp32 = 0xD;// ANA_CTLE_REG6.BT.B0 = ####1101 , ctle_res2_sel_lane[3:0]
    tmp34 = 0x10;// ANA_SMPLR_REG0.BT.B0 = ##010000 , pu_smplr_d_e_lane[2:0], pu_smplr_d_o_lane[2:0]
    tmp35 = 0x0;// ANA_CTLE_REG3.BT.B0 = ####0000 , ctle_current1_sel_lane[3:0]
    tmp37 = 0x2;// ANA_CTLE_REG8.BT.B0 = ####0010 , ctle_rl2_sel_lane[3:0]
  }
  else if (gen_rx==42){
    tmp0 = 0x1;// ANA_DLL_REG1.BT.B0 = #####001 , eom_dll_cap_sel_lane[2:0]
    tmp1 = 0x0;// ANA_CTLE_REG0.BT.B0 = #000#### , ctle_bypass1_en_lane[1:0], ctle_bypass2_en_lane
    tmp2 = 0x12;// PLL_RS_LANE_REG12.BT.B2 = ###10010 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0x76;// DTL_REG2.BT.B0 = 01110110 , rx_foffset_extra_m_lane[13:0]
    tmp4 = 0x9D;// DTL_REG2.BT.B1 = 10011101 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp6 = 0x8;// TX_TRAIN_PAT_NUM1.BT.B0 = 00001000 , train_pat_num_lane[9:0]
    tmp7 = 0x2;// TX_TRAIN_PAT_NUM1.BT.B1 = ######10 , train_pat_num_lane[9:0]
    tmp10 = 0x1;// ANA_EOM_REG3.BT.B0 = #######1 , rxpll_hi_speed_lane
    tmp13 = 0xBC;// ANA_INTPI_REG0.BT.B0 = 10111100 , rxintpi_low_lane[3:0], rxintpi_lane[3:0]
    tmp14 = 0xF;// ANA_CTLE_REG1.BT.B0 = ####1111 , ctle_cap1_sel_g_lane[3:0]
    tmp18 = 0x4;// ANA_DTL_REG3.BT.B0 = #####100 , dtl_clk_speedup_lane[2:0]
    tmp23 = 0xFF;// ANA_SMPLR_REG2.BT.B0 = 11111111 , pu_ctle_even_lane, pu_ctle_odd_lane, pu_smplr_s_e_lane[2:0], pu_smplr_s_o_lane[2:0]
    tmp24 = 0x2;// ANA_RSVD_REG9.BT.B0 = ####0010 , ctle_cl2_sel_lane[1:0], ctle_cl1_sel_lane[1:0]
    tmp26 = 0x6;// ANA_RXREG_REG1.BT.B0 = #000#110 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp27 = 0x1;// ANA_DLL_REG.BT.B0 = #####001 , dll_cap_sel_lane[2:0]
    tmp28 = 0x8;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####10## , ethernet_mode_lane[1:0]
    tmp31 = 0x6;// ANA_RXREG_REG0.BT.B0 = ####0110 , rxreg_speedtrk_clk_half_lane, rxreg_speedtrk_clk_lane[2:0]
    tmp33 = 0x4;// RX_SYSTEM_LANE.BT.B0 = #####100 , rx_data_width_lane[1:0], rx_pam2_en_lane
    tmp34 = 0x3F;// ANA_SMPLR_REG0.BT.B0 = ##111111 , pu_smplr_d_e_lane[2:0], pu_smplr_d_o_lane[2:0]
    tmp36 = 0x0;// ANA_RSVD_REG1.BT.B0 = 00000000 , ana_rsvd1_lane[7:0]
  }
  else if (gen_rx==38){
    tmp0 = 0x1;// ANA_DLL_REG1.BT.B0 = #####001 , eom_dll_cap_sel_lane[2:0]
    tmp1 = 0x0;// ANA_CTLE_REG0.BT.B0 = #000#### , ctle_bypass1_en_lane[1:0], ctle_bypass2_en_lane
    tmp2 = 0x14;// PLL_RS_LANE_REG12.BT.B2 = ###10100 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0x97;// DTL_REG2.BT.B0 = 10010111 , rx_foffset_extra_m_lane[13:0]
    tmp4 = 0x9D;// DTL_REG2.BT.B1 = 10011101 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp6 = 0x8;// TX_TRAIN_PAT_NUM1.BT.B0 = 00001000 , train_pat_num_lane[9:0]
    tmp7 = 0x2;// TX_TRAIN_PAT_NUM1.BT.B1 = ######10 , train_pat_num_lane[9:0]
    tmp10 = 0x1;// ANA_EOM_REG3.BT.B0 = #######1 , rxpll_hi_speed_lane
    tmp13 = 0xBC;// ANA_INTPI_REG0.BT.B0 = 10111100 , rxintpi_low_lane[3:0], rxintpi_lane[3:0]
    tmp14 = 0xF;// ANA_CTLE_REG1.BT.B0 = ####1111 , ctle_cap1_sel_g_lane[3:0]
    tmp18 = 0x4;// ANA_DTL_REG3.BT.B0 = #####100 , dtl_clk_speedup_lane[2:0]
    tmp23 = 0xFF;// ANA_SMPLR_REG2.BT.B0 = 11111111 , pu_ctle_even_lane, pu_ctle_odd_lane, pu_smplr_s_e_lane[2:0], pu_smplr_s_o_lane[2:0]
    tmp24 = 0x2;// ANA_RSVD_REG9.BT.B0 = ####0010 , ctle_cl2_sel_lane[1:0], ctle_cl1_sel_lane[1:0]
    tmp26 = 0x6;// ANA_RXREG_REG1.BT.B0 = #000#110 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp27 = 0x1;// ANA_DLL_REG.BT.B0 = #####001 , dll_cap_sel_lane[2:0]
    tmp28 = 0x8;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####10## , ethernet_mode_lane[1:0]
    tmp31 = 0x6;// ANA_RXREG_REG0.BT.B0 = ####0110 , rxreg_speedtrk_clk_half_lane, rxreg_speedtrk_clk_lane[2:0]
    tmp33 = 0x4;// RX_SYSTEM_LANE.BT.B0 = #####100 , rx_data_width_lane[1:0], rx_pam2_en_lane
    tmp34 = 0x3F;// ANA_SMPLR_REG0.BT.B0 = ##111111 , pu_smplr_d_e_lane[2:0], pu_smplr_d_o_lane[2:0]
    tmp36 = 0x0;// ANA_RSVD_REG1.BT.B0 = 00000000 , ana_rsvd1_lane[7:0]
  }
  else if (gen_rx==37){
    tmp0 = 0x1;// ANA_DLL_REG1.BT.B0 = #####001 , eom_dll_cap_sel_lane[2:0]
    tmp1 = 0x0;// ANA_CTLE_REG0.BT.B0 = #000#### , ctle_bypass1_en_lane[1:0], ctle_bypass2_en_lane
    tmp2 = 0x13;// PLL_RS_LANE_REG12.BT.B2 = ###10011 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0x83;// DTL_REG2.BT.B0 = 10000011 , rx_foffset_extra_m_lane[13:0]
    tmp4 = 0x9D;// DTL_REG2.BT.B1 = 10011101 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp6 = 0x8;// TX_TRAIN_PAT_NUM1.BT.B0 = 00001000 , train_pat_num_lane[9:0]
    tmp7 = 0x2;// TX_TRAIN_PAT_NUM1.BT.B1 = ######10 , train_pat_num_lane[9:0]
    tmp10 = 0x1;// ANA_EOM_REG3.BT.B0 = #######1 , rxpll_hi_speed_lane
    tmp13 = 0xBC;// ANA_INTPI_REG0.BT.B0 = 10111100 , rxintpi_low_lane[3:0], rxintpi_lane[3:0]
    tmp14 = 0xF;// ANA_CTLE_REG1.BT.B0 = ####1111 , ctle_cap1_sel_g_lane[3:0]
    tmp18 = 0x4;// ANA_DTL_REG3.BT.B0 = #####100 , dtl_clk_speedup_lane[2:0]
    tmp23 = 0xFF;// ANA_SMPLR_REG2.BT.B0 = 11111111 , pu_ctle_even_lane, pu_ctle_odd_lane, pu_smplr_s_e_lane[2:0], pu_smplr_s_o_lane[2:0]
    tmp24 = 0x2;// ANA_RSVD_REG9.BT.B0 = ####0010 , ctle_cl2_sel_lane[1:0], ctle_cl1_sel_lane[1:0]
    tmp26 = 0x6;// ANA_RXREG_REG1.BT.B0 = #000#110 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp27 = 0x1;// ANA_DLL_REG.BT.B0 = #####001 , dll_cap_sel_lane[2:0]
    tmp28 = 0x8;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####10## , ethernet_mode_lane[1:0]
    tmp31 = 0x6;// ANA_RXREG_REG0.BT.B0 = ####0110 , rxreg_speedtrk_clk_half_lane, rxreg_speedtrk_clk_lane[2:0]
    tmp33 = 0x4;// RX_SYSTEM_LANE.BT.B0 = #####100 , rx_data_width_lane[1:0], rx_pam2_en_lane
    tmp34 = 0x3F;// ANA_SMPLR_REG0.BT.B0 = ##111111 , pu_smplr_d_e_lane[2:0], pu_smplr_d_o_lane[2:0]
    tmp36 = 0x0;// ANA_RSVD_REG1.BT.B0 = 00000000 , ana_rsvd1_lane[7:0]
  }
  else if (gen_rx==35){
    tmp0 = 0x2;// ANA_DLL_REG1.BT.B0 = #####010 , eom_dll_cap_sel_lane[2:0]
    tmp1 = 0x0;// ANA_CTLE_REG0.BT.B0 = #000#### , ctle_bypass1_en_lane[1:0], ctle_bypass2_en_lane
    tmp2 = 0x10;// PLL_RS_LANE_REG12.BT.B2 = ###10000 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0xF2;// DTL_REG2.BT.B0 = 11110010 , rx_foffset_extra_m_lane[13:0]
    tmp4 = 0x9B;// DTL_REG2.BT.B1 = 10011011 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp6 = 0x8;// TX_TRAIN_PAT_NUM1.BT.B0 = 00001000 , train_pat_num_lane[9:0]
    tmp7 = 0x2;// TX_TRAIN_PAT_NUM1.BT.B1 = ######10 , train_pat_num_lane[9:0]
    tmp13 = 0xBC;// ANA_INTPI_REG0.BT.B0 = 10111100 , rxintpi_low_lane[3:0], rxintpi_lane[3:0]
    tmp14 = 0xF;// ANA_CTLE_REG1.BT.B0 = ####1111 , ctle_cap1_sel_g_lane[3:0]
    tmp18 = 0x4;// ANA_DTL_REG3.BT.B0 = #####100 , dtl_clk_speedup_lane[2:0]
    tmp23 = 0xFF;// ANA_SMPLR_REG2.BT.B0 = 11111111 , pu_ctle_even_lane, pu_ctle_odd_lane, pu_smplr_s_e_lane[2:0], pu_smplr_s_o_lane[2:0]
    tmp24 = 0x2;// ANA_RSVD_REG9.BT.B0 = ####0010 , ctle_cl2_sel_lane[1:0], ctle_cl1_sel_lane[1:0]
    tmp26 = 0x4;// ANA_RXREG_REG1.BT.B0 = #000#100 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp27 = 0x2;// ANA_DLL_REG.BT.B0 = #####010 , dll_cap_sel_lane[2:0]
    tmp28 = 0x8;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####10## , ethernet_mode_lane[1:0]
    tmp31 = 0x3;// ANA_RXREG_REG0.BT.B0 = ####0011 , rxreg_speedtrk_clk_half_lane, rxreg_speedtrk_clk_lane[2:0]
    tmp33 = 0x4;// RX_SYSTEM_LANE.BT.B0 = #####100 , rx_data_width_lane[1:0], rx_pam2_en_lane
    tmp34 = 0x3F;// ANA_SMPLR_REG0.BT.B0 = ##111111 , pu_smplr_d_e_lane[2:0], pu_smplr_d_o_lane[2:0]
    tmp36 = 0x0;// ANA_RSVD_REG1.BT.B0 = 00000000 , ana_rsvd1_lane[7:0]
  }
  else if (gen_rx==34){
    tmp0 = 0x3;// ANA_DLL_REG1.BT.B0 = #####011 , eom_dll_cap_sel_lane[2:0]
    tmp1 = 0x0;// ANA_CTLE_REG0.BT.B0 = #000#### , ctle_bypass1_en_lane[1:0], ctle_bypass2_en_lane
    tmp2 = 0xE;// PLL_RS_LANE_REG12.BT.B2 = ###01110 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0x20;// DTL_REG2.BT.B0 = 00100000 , rx_foffset_extra_m_lane[13:0]
    tmp4 = 0x9B;// DTL_REG2.BT.B1 = 10011011 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp6 = 0x8;// TX_TRAIN_PAT_NUM1.BT.B0 = 00001000 , train_pat_num_lane[9:0]
    tmp7 = 0x2;// TX_TRAIN_PAT_NUM1.BT.B1 = ######10 , train_pat_num_lane[9:0]
    tmp13 = 0xBC;// ANA_INTPI_REG0.BT.B0 = 10111100 , rxintpi_low_lane[3:0], rxintpi_lane[3:0]
    tmp14 = 0xF;// ANA_CTLE_REG1.BT.B0 = ####1111 , ctle_cap1_sel_g_lane[3:0]
    tmp18 = 0x4;// ANA_DTL_REG3.BT.B0 = #####100 , dtl_clk_speedup_lane[2:0]
    tmp23 = 0xFF;// ANA_SMPLR_REG2.BT.B0 = 11111111 , pu_ctle_even_lane, pu_ctle_odd_lane, pu_smplr_s_e_lane[2:0], pu_smplr_s_o_lane[2:0]
    tmp24 = 0x2;// ANA_RSVD_REG9.BT.B0 = ####0010 , ctle_cl2_sel_lane[1:0], ctle_cl1_sel_lane[1:0]
    tmp26 = 0x4;// ANA_RXREG_REG1.BT.B0 = #000#100 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp27 = 0x3;// ANA_DLL_REG.BT.B0 = #####011 , dll_cap_sel_lane[2:0]
    tmp28 = 0x8;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####10## , ethernet_mode_lane[1:0]
    tmp31 = 0x3;// ANA_RXREG_REG0.BT.B0 = ####0011 , rxreg_speedtrk_clk_half_lane, rxreg_speedtrk_clk_lane[2:0]
    tmp33 = 0x4;// RX_SYSTEM_LANE.BT.B0 = #####100 , rx_data_width_lane[1:0], rx_pam2_en_lane
    tmp34 = 0x3F;// ANA_SMPLR_REG0.BT.B0 = ##111111 , pu_smplr_d_e_lane[2:0], pu_smplr_d_o_lane[2:0]
    tmp36 = 0x0;// ANA_RSVD_REG1.BT.B0 = 00000000 , ana_rsvd1_lane[7:0]
  }
  else if (gen_rx==32){
    tmp0 = 0x4;// ANA_DLL_REG1.BT.B0 = #####100 , eom_dll_cap_sel_lane[2:0]
    tmp1 = 0x0;// ANA_CTLE_REG0.BT.B0 = #000#### , ctle_bypass1_en_lane[1:0], ctle_bypass2_en_lane
    tmp2 = 0x8;// PLL_RS_LANE_REG12.BT.B2 = ###01000 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0x54;// DTL_REG2.BT.B0 = 01010100 , rx_foffset_extra_m_lane[13:0]
    tmp4 = 0x98;// DTL_REG2.BT.B1 = 10011000 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp5 = 0x1;// ANA_IMPCAL_REG0.BT.B0 = #####001 , path_disable_edge_lane, intpr_lane[1:0]
    tmp6 = 0x8;// TX_TRAIN_PAT_NUM1.BT.B0 = 00001000 , train_pat_num_lane[9:0]
    tmp7 = 0x2;// TX_TRAIN_PAT_NUM1.BT.B1 = ######10 , train_pat_num_lane[9:0]
    tmp13 = 0x99;// ANA_INTPI_REG0.BT.B0 = 10011001 , rxintpi_low_lane[3:0], rxintpi_lane[3:0]
    tmp14 = 0xF;// ANA_CTLE_REG1.BT.B0 = ####1111 , ctle_cap1_sel_g_lane[3:0]
    tmp18 = 0x4;// ANA_DTL_REG3.BT.B0 = #####100 , dtl_clk_speedup_lane[2:0]
    tmp23 = 0xFF;// ANA_SMPLR_REG2.BT.B0 = 11111111 , pu_ctle_even_lane, pu_ctle_odd_lane, pu_smplr_s_e_lane[2:0], pu_smplr_s_o_lane[2:0]
    tmp24 = 0x2;// ANA_RSVD_REG9.BT.B0 = ####0010 , ctle_cl2_sel_lane[1:0], ctle_cl1_sel_lane[1:0]
    tmp26 = 0x3;// ANA_RXREG_REG1.BT.B0 = #000#011 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp27 = 0x4;// ANA_DLL_REG.BT.B0 = #####100 , dll_cap_sel_lane[2:0]
    tmp28 = 0x8;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####10## , ethernet_mode_lane[1:0]
    tmp31 = 0x2;// ANA_RXREG_REG0.BT.B0 = ####0010 , rxreg_speedtrk_clk_half_lane, rxreg_speedtrk_clk_lane[2:0]
    tmp33 = 0x4;// RX_SYSTEM_LANE.BT.B0 = #####100 , rx_data_width_lane[1:0], rx_pam2_en_lane
    tmp34 = 0x3F;// ANA_SMPLR_REG0.BT.B0 = ##111111 , pu_smplr_d_e_lane[2:0], pu_smplr_d_o_lane[2:0]
    tmp36 = 0x0;// ANA_RSVD_REG1.BT.B0 = 00000000 , ana_rsvd1_lane[7:0]
  }
  else if (gen_rx==30){
    tmp0 = 0x1;// ANA_DLL_REG1.BT.B0 = #####001 , eom_dll_cap_sel_lane[2:0]
    tmp1 = 0x0;// ANA_CTLE_REG0.BT.B0 = #000#### , ctle_bypass1_en_lane[1:0], ctle_bypass2_en_lane
    tmp2 = 0x14;// PLL_RS_LANE_REG12.BT.B2 = ###10100 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0x97;// DTL_REG2.BT.B0 = 10010111 , rx_foffset_extra_m_lane[13:0]
    tmp4 = 0x9D;// DTL_REG2.BT.B1 = 10011101 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp10 = 0x1;// ANA_EOM_REG3.BT.B0 = #######1 , rxpll_hi_speed_lane
    tmp13 = 0xBC;// ANA_INTPI_REG0.BT.B0 = 10111100 , rxintpi_low_lane[3:0], rxintpi_lane[3:0]
    tmp14 = 0xF;// ANA_CTLE_REG1.BT.B0 = ####1111 , ctle_cap1_sel_g_lane[3:0]
    tmp18 = 0x4;// ANA_DTL_REG3.BT.B0 = #####100 , dtl_clk_speedup_lane[2:0]
    tmp24 = 0x2;// ANA_RSVD_REG9.BT.B0 = ####0010 , ctle_cl2_sel_lane[1:0], ctle_cl1_sel_lane[1:0]
    tmp26 = 0x6;// ANA_RXREG_REG1.BT.B0 = #000#110 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp27 = 0x1;// ANA_DLL_REG.BT.B0 = #####001 , dll_cap_sel_lane[2:0]
    tmp31 = 0x6;// ANA_RXREG_REG0.BT.B0 = ####0110 , rxreg_speedtrk_clk_half_lane, rxreg_speedtrk_clk_lane[2:0]
    tmp36 = 0x0;// ANA_RSVD_REG1.BT.B0 = 00000000 , ana_rsvd1_lane[7:0]
  }
  else if (gen_rx==29){
    tmp0 = 0x1;// ANA_DLL_REG1.BT.B0 = #####001 , eom_dll_cap_sel_lane[2:0]
    tmp1 = 0x0;// ANA_CTLE_REG0.BT.B0 = #000#### , ctle_bypass1_en_lane[1:0], ctle_bypass2_en_lane
    tmp2 = 0x13;// PLL_RS_LANE_REG12.BT.B2 = ###10011 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0x83;// DTL_REG2.BT.B0 = 10000011 , rx_foffset_extra_m_lane[13:0]
    tmp4 = 0x9D;// DTL_REG2.BT.B1 = 10011101 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp10 = 0x1;// ANA_EOM_REG3.BT.B0 = #######1 , rxpll_hi_speed_lane
    tmp13 = 0xBC;// ANA_INTPI_REG0.BT.B0 = 10111100 , rxintpi_low_lane[3:0], rxintpi_lane[3:0]
    tmp14 = 0xF;// ANA_CTLE_REG1.BT.B0 = ####1111 , ctle_cap1_sel_g_lane[3:0]
    tmp18 = 0x4;// ANA_DTL_REG3.BT.B0 = #####100 , dtl_clk_speedup_lane[2:0]
    tmp24 = 0x2;// ANA_RSVD_REG9.BT.B0 = ####0010 , ctle_cl2_sel_lane[1:0], ctle_cl1_sel_lane[1:0]
    tmp26 = 0x6;// ANA_RXREG_REG1.BT.B0 = #000#110 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp27 = 0x1;// ANA_DLL_REG.BT.B0 = #####001 , dll_cap_sel_lane[2:0]
    tmp31 = 0x6;// ANA_RXREG_REG0.BT.B0 = ####0110 , rxreg_speedtrk_clk_half_lane, rxreg_speedtrk_clk_lane[2:0]
    tmp36 = 0x0;// ANA_RSVD_REG1.BT.B0 = 00000000 , ana_rsvd1_lane[7:0]
  }
  else if (gen_rx==28){
    tmp0 = 0x2;// ANA_DLL_REG1.BT.B0 = #####010 , eom_dll_cap_sel_lane[2:0]
    tmp1 = 0x0;// ANA_CTLE_REG0.BT.B0 = #000#### , ctle_bypass1_en_lane[1:0], ctle_bypass2_en_lane
    tmp2 = 0x11;// PLL_RS_LANE_REG12.BT.B2 = ###10001 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0xEF;// DTL_REG2.BT.B0 = 11101111 , rx_foffset_extra_m_lane[13:0]
    tmp4 = 0x9C;// DTL_REG2.BT.B1 = 10011100 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp13 = 0xBC;// ANA_INTPI_REG0.BT.B0 = 10111100 , rxintpi_low_lane[3:0], rxintpi_lane[3:0]
    tmp14 = 0xF;// ANA_CTLE_REG1.BT.B0 = ####1111 , ctle_cap1_sel_g_lane[3:0]
    tmp18 = 0x4;// ANA_DTL_REG3.BT.B0 = #####100 , dtl_clk_speedup_lane[2:0]
    tmp24 = 0x2;// ANA_RSVD_REG9.BT.B0 = ####0010 , ctle_cl2_sel_lane[1:0], ctle_cl1_sel_lane[1:0]
    tmp26 = 0x5;// ANA_RXREG_REG1.BT.B0 = #000#101 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp27 = 0x2;// ANA_DLL_REG.BT.B0 = #####010 , dll_cap_sel_lane[2:0]
    tmp31 = 0x5;// ANA_RXREG_REG0.BT.B0 = ####0101 , rxreg_speedtrk_clk_half_lane, rxreg_speedtrk_clk_lane[2:0]
    tmp36 = 0x0;// ANA_RSVD_REG1.BT.B0 = 00000000 , ana_rsvd1_lane[7:0]
  }
  else if (gen_rx==27){
    tmp0 = 0x2;// ANA_DLL_REG1.BT.B0 = #####010 , eom_dll_cap_sel_lane[2:0]
    tmp1 = 0x0;// ANA_CTLE_REG0.BT.B0 = #000#### , ctle_bypass1_en_lane[1:0], ctle_bypass2_en_lane
    tmp2 = 0x10;// PLL_RS_LANE_REG12.BT.B2 = ###10000 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0xF2;// DTL_REG2.BT.B0 = 11110010 , rx_foffset_extra_m_lane[13:0]
    tmp4 = 0x9B;// DTL_REG2.BT.B1 = 10011011 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp13 = 0xBC;// ANA_INTPI_REG0.BT.B0 = 10111100 , rxintpi_low_lane[3:0], rxintpi_lane[3:0]
    tmp14 = 0xF;// ANA_CTLE_REG1.BT.B0 = ####1111 , ctle_cap1_sel_g_lane[3:0]
    tmp18 = 0x4;// ANA_DTL_REG3.BT.B0 = #####100 , dtl_clk_speedup_lane[2:0]
    tmp24 = 0x2;// ANA_RSVD_REG9.BT.B0 = ####0010 , ctle_cl2_sel_lane[1:0], ctle_cl1_sel_lane[1:0]
    tmp26 = 0x4;// ANA_RXREG_REG1.BT.B0 = #000#100 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp27 = 0x2;// ANA_DLL_REG.BT.B0 = #####010 , dll_cap_sel_lane[2:0]
    tmp31 = 0x3;// ANA_RXREG_REG0.BT.B0 = ####0011 , rxreg_speedtrk_clk_half_lane, rxreg_speedtrk_clk_lane[2:0]
    tmp36 = 0x0;// ANA_RSVD_REG1.BT.B0 = 00000000 , ana_rsvd1_lane[7:0]
  }
  else if (gen_rx==26){
    tmp0 = 0x3;// ANA_DLL_REG1.BT.B0 = #####011 , eom_dll_cap_sel_lane[2:0]
    tmp1 = 0x0;// ANA_CTLE_REG0.BT.B0 = #000#### , ctle_bypass1_en_lane[1:0], ctle_bypass2_en_lane
    tmp2 = 0xE;// PLL_RS_LANE_REG12.BT.B2 = ###01110 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0x20;// DTL_REG2.BT.B0 = 00100000 , rx_foffset_extra_m_lane[13:0]
    tmp4 = 0x9B;// DTL_REG2.BT.B1 = 10011011 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp13 = 0xBC;// ANA_INTPI_REG0.BT.B0 = 10111100 , rxintpi_low_lane[3:0], rxintpi_lane[3:0]
    tmp14 = 0xF;// ANA_CTLE_REG1.BT.B0 = ####1111 , ctle_cap1_sel_g_lane[3:0]
    tmp18 = 0x4;// ANA_DTL_REG3.BT.B0 = #####100 , dtl_clk_speedup_lane[2:0]
    tmp24 = 0x2;// ANA_RSVD_REG9.BT.B0 = ####0010 , ctle_cl2_sel_lane[1:0], ctle_cl1_sel_lane[1:0]
    tmp26 = 0x4;// ANA_RXREG_REG1.BT.B0 = #000#100 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp27 = 0x3;// ANA_DLL_REG.BT.B0 = #####011 , dll_cap_sel_lane[2:0]
    tmp31 = 0x3;// ANA_RXREG_REG0.BT.B0 = ####0011 , rxreg_speedtrk_clk_half_lane, rxreg_speedtrk_clk_lane[2:0]
    tmp36 = 0x0;// ANA_RSVD_REG1.BT.B0 = 00000000 , ana_rsvd1_lane[7:0]
  }
  else if (gen_rx==25){
    tmp0 = 0x3;// ANA_DLL_REG1.BT.B0 = #####011 , eom_dll_cap_sel_lane[2:0]
    tmp1 = 0x0;// ANA_CTLE_REG0.BT.B0 = #000#### , ctle_bypass1_en_lane[1:0], ctle_bypass2_en_lane
    tmp2 = 0x9;// PLL_RS_LANE_REG12.BT.B2 = ###01001 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0x99;// DTL_REG2.BT.B0 = 10011001 , rx_foffset_extra_m_lane[13:0]
    tmp4 = 0x99;// DTL_REG2.BT.B1 = 10011001 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp5 = 0x1;// ANA_IMPCAL_REG0.BT.B0 = #####001 , path_disable_edge_lane, intpr_lane[1:0]
    tmp13 = 0x99;// ANA_INTPI_REG0.BT.B0 = 10011001 , rxintpi_low_lane[3:0], rxintpi_lane[3:0]
    tmp14 = 0xF;// ANA_CTLE_REG1.BT.B0 = ####1111 , ctle_cap1_sel_g_lane[3:0]
    tmp18 = 0x4;// ANA_DTL_REG3.BT.B0 = #####100 , dtl_clk_speedup_lane[2:0]
    tmp24 = 0x2;// ANA_RSVD_REG9.BT.B0 = ####0010 , ctle_cl2_sel_lane[1:0], ctle_cl1_sel_lane[1:0]
    tmp26 = 0x4;// ANA_RXREG_REG1.BT.B0 = #000#100 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp27 = 0x3;// ANA_DLL_REG.BT.B0 = #####011 , dll_cap_sel_lane[2:0]
    tmp31 = 0x3;// ANA_RXREG_REG0.BT.B0 = ####0011 , rxreg_speedtrk_clk_half_lane, rxreg_speedtrk_clk_lane[2:0]
    tmp36 = 0x0;// ANA_RSVD_REG1.BT.B0 = 00000000 , ana_rsvd1_lane[7:0]
  }
  else if (gen_rx==24){
    tmp2 = 0x6;// PLL_RS_LANE_REG12.BT.B2 = ###00110 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0xB3;// DTL_REG2.BT.B0 = 10110011 , rx_foffset_extra_m_lane[13:0]
    tmp5 = 0x2;// ANA_IMPCAL_REG0.BT.B0 = #####010 , path_disable_edge_lane, intpr_lane[1:0]
    tmp14 = 0xF;// ANA_CTLE_REG1.BT.B0 = ####1111 , ctle_cap1_sel_g_lane[3:0]
    tmp18 = 0x4;// ANA_DTL_REG3.BT.B0 = #####100 , dtl_clk_speedup_lane[2:0]
    tmp26 = 0x3;// ANA_RXREG_REG1.BT.B0 = #000#011 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp31 = 0x2;// ANA_RXREG_REG0.BT.B0 = ####0010 , rxreg_speedtrk_clk_half_lane, rxreg_speedtrk_clk_lane[2:0]
  }
  else if (gen_rx==23){
    tmp0 = 0x1;// ANA_DLL_REG1.BT.B0 = #####001 , eom_dll_cap_sel_lane[2:0]
    tmp2 = 0x13;// PLL_RS_LANE_REG12.BT.B2 = ###10011 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0x83;// DTL_REG2.BT.B0 = 10000011 , rx_foffset_extra_m_lane[13:0]
    tmp4 = 0x9D;// DTL_REG2.BT.B1 = 10011101 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp8 = 0x10;// ANA_SMPLR_REG4.BT.B0 = ##01#### , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
    tmp10 = 0x1;// ANA_EOM_REG3.BT.B0 = #######1 , rxpll_hi_speed_lane
    tmp13 = 0xBC;// ANA_INTPI_REG0.BT.B0 = 10111100 , rxintpi_low_lane[3:0], rxintpi_lane[3:0]
    tmp15 = 0xE;// ANA_CTLE_REG4.BT.B0 = ####1110 , ctle_current2_sel_lane[3:0]
    tmp16 = 0x9;// ANA_CTLE_REG7.BT.B0 = ####1001 , ctle_rl1_sel_lane[3:0]
    tmp25 = 0x7;// ANA_CTLE_REG5.BT.B0 = ####0111 , ctle_res1_sel_lane[3:0]
    tmp26 = 0x41;// ANA_RXREG_REG1.BT.B0 = #100#001 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp27 = 0x1;// ANA_DLL_REG.BT.B0 = #####001 , dll_cap_sel_lane[2:0]
    tmp31 = 0xE;// ANA_RXREG_REG0.BT.B0 = ####1110 , rxreg_speedtrk_clk_half_lane, rxreg_speedtrk_clk_lane[2:0]
    tmp32 = 0x4;// ANA_CTLE_REG6.BT.B0 = ####0100 , ctle_res2_sel_lane[3:0]
    tmp35 = 0x9;// ANA_CTLE_REG3.BT.B0 = ####1001 , ctle_current1_sel_lane[3:0]
    tmp37 = 0xE;// ANA_CTLE_REG8.BT.B0 = ####1110 , ctle_rl2_sel_lane[3:0]
  }
  else if (gen_rx==22){
    tmp0 = 0x3;// ANA_DLL_REG1.BT.B0 = #####011 , eom_dll_cap_sel_lane[2:0]
    tmp2 = 0xD;// PLL_RS_LANE_REG12.BT.B2 = ###01101 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0x20;// DTL_REG2.BT.B0 = 00100000 , rx_foffset_extra_m_lane[13:0]
    tmp4 = 0x9B;// DTL_REG2.BT.B1 = 10011011 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp8 = 0x10;// ANA_SMPLR_REG4.BT.B0 = ##01#### , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
    tmp13 = 0xBC;// ANA_INTPI_REG0.BT.B0 = 10111100 , rxintpi_low_lane[3:0], rxintpi_lane[3:0]
    tmp15 = 0xC;// ANA_CTLE_REG4.BT.B0 = ####1100 , ctle_current2_sel_lane[3:0]
    tmp16 = 0x8;// ANA_CTLE_REG7.BT.B0 = ####1000 , ctle_rl1_sel_lane[3:0]
    tmp25 = 0x8;// ANA_CTLE_REG5.BT.B0 = ####1000 , ctle_res1_sel_lane[3:0]
    tmp26 = 0x41;// ANA_RXREG_REG1.BT.B0 = #100#001 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp27 = 0x3;// ANA_DLL_REG.BT.B0 = #####011 , dll_cap_sel_lane[2:0]
    tmp31 = 0xB;// ANA_RXREG_REG0.BT.B0 = ####1011 , rxreg_speedtrk_clk_half_lane, rxreg_speedtrk_clk_lane[2:0]
    tmp32 = 0x5;// ANA_CTLE_REG6.BT.B0 = ####0101 , ctle_res2_sel_lane[3:0]
    tmp35 = 0x8;// ANA_CTLE_REG3.BT.B0 = ####1000 , ctle_current1_sel_lane[3:0]
    tmp37 = 0xC;// ANA_CTLE_REG8.BT.B0 = ####1100 , ctle_rl2_sel_lane[3:0]
  }
  else if (gen_rx==21){
    tmp0 = 0x3;// ANA_DLL_REG1.BT.B0 = #####011 , eom_dll_cap_sel_lane[2:0]
    tmp2 = 0xC;// PLL_RS_LANE_REG12.BT.B2 = ###01100 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0x4D;// DTL_REG2.BT.B0 = 01001101 , rx_foffset_extra_m_lane[13:0]
    tmp4 = 0x9A;// DTL_REG2.BT.B1 = 10011010 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp5 = 0x1;// ANA_IMPCAL_REG0.BT.B0 = #####001 , path_disable_edge_lane, intpr_lane[1:0]
    tmp8 = 0x10;// ANA_SMPLR_REG4.BT.B0 = ##01#### , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
    tmp13 = 0x99;// ANA_INTPI_REG0.BT.B0 = 10011001 , rxintpi_low_lane[3:0], rxintpi_lane[3:0]
    tmp15 = 0xC;// ANA_CTLE_REG4.BT.B0 = ####1100 , ctle_current2_sel_lane[3:0]
    tmp16 = 0x8;// ANA_CTLE_REG7.BT.B0 = ####1000 , ctle_rl1_sel_lane[3:0]
    tmp25 = 0x8;// ANA_CTLE_REG5.BT.B0 = ####1000 , ctle_res1_sel_lane[3:0]
    tmp26 = 0x41;// ANA_RXREG_REG1.BT.B0 = #100#001 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp27 = 0x3;// ANA_DLL_REG.BT.B0 = #####011 , dll_cap_sel_lane[2:0]
    tmp31 = 0xB;// ANA_RXREG_REG0.BT.B0 = ####1011 , rxreg_speedtrk_clk_half_lane, rxreg_speedtrk_clk_lane[2:0]
    tmp32 = 0x5;// ANA_CTLE_REG6.BT.B0 = ####0101 , ctle_res2_sel_lane[3:0]
    tmp35 = 0x8;// ANA_CTLE_REG3.BT.B0 = ####1000 , ctle_current1_sel_lane[3:0]
    tmp37 = 0xC;// ANA_CTLE_REG8.BT.B0 = ####1100 , ctle_rl2_sel_lane[3:0]
  }
  else if (gen_rx==20){
    tmp0 = 0x3;// ANA_DLL_REG1.BT.B0 = #####011 , eom_dll_cap_sel_lane[2:0]
    tmp2 = 0xA;// PLL_RS_LANE_REG12.BT.B2 = ###01010 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0xA5;// DTL_REG2.BT.B0 = 10100101 , rx_foffset_extra_m_lane[13:0]
    tmp4 = 0x99;// DTL_REG2.BT.B1 = 10011001 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp5 = 0x1;// ANA_IMPCAL_REG0.BT.B0 = #####001 , path_disable_edge_lane, intpr_lane[1:0]
    tmp8 = 0x10;// ANA_SMPLR_REG4.BT.B0 = ##01#### , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
    tmp13 = 0x99;// ANA_INTPI_REG0.BT.B0 = 10011001 , rxintpi_low_lane[3:0], rxintpi_lane[3:0]
    tmp15 = 0xC;// ANA_CTLE_REG4.BT.B0 = ####1100 , ctle_current2_sel_lane[3:0]
    tmp16 = 0x8;// ANA_CTLE_REG7.BT.B0 = ####1000 , ctle_rl1_sel_lane[3:0]
    tmp25 = 0x8;// ANA_CTLE_REG5.BT.B0 = ####1000 , ctle_res1_sel_lane[3:0]
    tmp26 = 0x41;// ANA_RXREG_REG1.BT.B0 = #100#001 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp27 = 0x3;// ANA_DLL_REG.BT.B0 = #####011 , dll_cap_sel_lane[2:0]
    tmp31 = 0xB;// ANA_RXREG_REG0.BT.B0 = ####1011 , rxreg_speedtrk_clk_half_lane, rxreg_speedtrk_clk_lane[2:0]
    tmp32 = 0x5;// ANA_CTLE_REG6.BT.B0 = ####0101 , ctle_res2_sel_lane[3:0]
    tmp35 = 0x8;// ANA_CTLE_REG3.BT.B0 = ####1000 , ctle_current1_sel_lane[3:0]
    tmp37 = 0xC;// ANA_CTLE_REG8.BT.B0 = ####1100 , ctle_rl2_sel_lane[3:0]
  }
  else if (gen_rx==19){
    tmp0 = 0x3;// ANA_DLL_REG1.BT.B0 = #####011 , eom_dll_cap_sel_lane[2:0]
    tmp2 = 0x9;// PLL_RS_LANE_REG12.BT.B2 = ###01001 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0x99;// DTL_REG2.BT.B0 = 10011001 , rx_foffset_extra_m_lane[13:0]
    tmp4 = 0x99;// DTL_REG2.BT.B1 = 10011001 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp5 = 0x1;// ANA_IMPCAL_REG0.BT.B0 = #####001 , path_disable_edge_lane, intpr_lane[1:0]
    tmp8 = 0x10;// ANA_SMPLR_REG4.BT.B0 = ##01#### , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
    tmp13 = 0x99;// ANA_INTPI_REG0.BT.B0 = 10011001 , rxintpi_low_lane[3:0], rxintpi_lane[3:0]
    tmp15 = 0xC;// ANA_CTLE_REG4.BT.B0 = ####1100 , ctle_current2_sel_lane[3:0]
    tmp16 = 0x8;// ANA_CTLE_REG7.BT.B0 = ####1000 , ctle_rl1_sel_lane[3:0]
    tmp25 = 0x8;// ANA_CTLE_REG5.BT.B0 = ####1000 , ctle_res1_sel_lane[3:0]
    tmp26 = 0x41;// ANA_RXREG_REG1.BT.B0 = #100#001 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp27 = 0x3;// ANA_DLL_REG.BT.B0 = #####011 , dll_cap_sel_lane[2:0]
    tmp31 = 0xB;// ANA_RXREG_REG0.BT.B0 = ####1011 , rxreg_speedtrk_clk_half_lane, rxreg_speedtrk_clk_lane[2:0]
    tmp32 = 0x5;// ANA_CTLE_REG6.BT.B0 = ####0101 , ctle_res2_sel_lane[3:0]
    tmp35 = 0x8;// ANA_CTLE_REG3.BT.B0 = ####1000 , ctle_current1_sel_lane[3:0]
    tmp37 = 0xC;// ANA_CTLE_REG8.BT.B0 = ####1100 , ctle_rl2_sel_lane[3:0]
  }
  else if (gen_rx==18){
    tmp0 = 0x5;// ANA_DLL_REG1.BT.B0 = #####101 , eom_dll_cap_sel_lane[2:0]
    tmp2 = 0x7;// PLL_RS_LANE_REG12.BT.B2 = ###00111 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0x22;// DTL_REG2.BT.B0 = 00100010 , rx_foffset_extra_m_lane[13:0]
    tmp4 = 0x96;// DTL_REG2.BT.B1 = 10010110 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp5 = 0x2;// ANA_IMPCAL_REG0.BT.B0 = #####010 , path_disable_edge_lane, intpr_lane[1:0]
    tmp8 = 0x10;// ANA_SMPLR_REG4.BT.B0 = ##01#### , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
    tmp15 = 0xA;// ANA_CTLE_REG4.BT.B0 = ####1010 , ctle_current2_sel_lane[3:0]
    tmp16 = 0x7;// ANA_CTLE_REG7.BT.B0 = ####0111 , ctle_rl1_sel_lane[3:0]
    tmp21 = 0xA;// ANA_CTLE_REG2.BT.B0 = ####1010 , ctle_cap2_sel_lane[3:0]
    tmp25 = 0x8;// ANA_CTLE_REG5.BT.B0 = ####1000 , ctle_res1_sel_lane[3:0]
    tmp27 = 0x5;// ANA_DLL_REG.BT.B0 = #####101 , dll_cap_sel_lane[2:0]
    tmp32 = 0x7;// ANA_CTLE_REG6.BT.B0 = ####0111 , ctle_res2_sel_lane[3:0]
    tmp35 = 0x7;// ANA_CTLE_REG3.BT.B0 = ####0111 , ctle_current1_sel_lane[3:0]
    tmp37 = 0xA;// ANA_CTLE_REG8.BT.B0 = ####1010 , ctle_rl2_sel_lane[3:0]
  }
  else if (gen_rx==17){
    tmp2 = 0x6;// PLL_RS_LANE_REG12.BT.B2 = ###00110 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0xB3;// DTL_REG2.BT.B0 = 10110011 , rx_foffset_extra_m_lane[13:0]
    tmp5 = 0x2;// ANA_IMPCAL_REG0.BT.B0 = #####010 , path_disable_edge_lane, intpr_lane[1:0]
    tmp8 = 0x10;// ANA_SMPLR_REG4.BT.B0 = ##01#### , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
    tmp15 = 0xA;// ANA_CTLE_REG4.BT.B0 = ####1010 , ctle_current2_sel_lane[3:0]
    tmp16 = 0x7;// ANA_CTLE_REG7.BT.B0 = ####0111 , ctle_rl1_sel_lane[3:0]
    tmp21 = 0xA;// ANA_CTLE_REG2.BT.B0 = ####1010 , ctle_cap2_sel_lane[3:0]
    tmp25 = 0x8;// ANA_CTLE_REG5.BT.B0 = ####1000 , ctle_res1_sel_lane[3:0]
    tmp32 = 0x7;// ANA_CTLE_REG6.BT.B0 = ####0111 , ctle_res2_sel_lane[3:0]
    tmp35 = 0x7;// ANA_CTLE_REG3.BT.B0 = ####0111 , ctle_current1_sel_lane[3:0]
    tmp37 = 0xA;// ANA_CTLE_REG8.BT.B0 = ####1010 , ctle_rl2_sel_lane[3:0]
  }
  else if (gen_rx==16){
    tmp2 = 0x5;// PLL_RS_LANE_REG12.BT.B2 = ###00101 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0x54;// DTL_REG2.BT.B0 = 01010100 , rx_foffset_extra_m_lane[13:0]
    tmp5 = 0x2;// ANA_IMPCAL_REG0.BT.B0 = #####010 , path_disable_edge_lane, intpr_lane[1:0]
    tmp8 = 0x10;// ANA_SMPLR_REG4.BT.B0 = ##01#### , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
    tmp15 = 0xA;// ANA_CTLE_REG4.BT.B0 = ####1010 , ctle_current2_sel_lane[3:0]
    tmp16 = 0x7;// ANA_CTLE_REG7.BT.B0 = ####0111 , ctle_rl1_sel_lane[3:0]
    tmp21 = 0xA;// ANA_CTLE_REG2.BT.B0 = ####1010 , ctle_cap2_sel_lane[3:0]
    tmp25 = 0x8;// ANA_CTLE_REG5.BT.B0 = ####1000 , ctle_res1_sel_lane[3:0]
    tmp32 = 0x7;// ANA_CTLE_REG6.BT.B0 = ####0111 , ctle_res2_sel_lane[3:0]
    tmp35 = 0x7;// ANA_CTLE_REG3.BT.B0 = ####0111 , ctle_current1_sel_lane[3:0]
    tmp37 = 0xA;// ANA_CTLE_REG8.BT.B0 = ####1010 , ctle_rl2_sel_lane[3:0]
  }
  else if (gen_rx==15){
    tmp2 = 0x3;// PLL_RS_LANE_REG12.BT.B2 = ###00011 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0xAF;// DTL_REG2.BT.B0 = 10101111 , rx_foffset_extra_m_lane[13:0]
    tmp4 = 0x94;// DTL_REG2.BT.B1 = 10010100 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp5 = 0x2;// ANA_IMPCAL_REG0.BT.B0 = #####010 , path_disable_edge_lane, intpr_lane[1:0]
    tmp8 = 0x10;// ANA_SMPLR_REG4.BT.B0 = ##01#### , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
    tmp15 = 0xA;// ANA_CTLE_REG4.BT.B0 = ####1010 , ctle_current2_sel_lane[3:0]
    tmp16 = 0x7;// ANA_CTLE_REG7.BT.B0 = ####0111 , ctle_rl1_sel_lane[3:0]
    tmp21 = 0xA;// ANA_CTLE_REG2.BT.B0 = ####1010 , ctle_cap2_sel_lane[3:0]
    tmp25 = 0x8;// ANA_CTLE_REG5.BT.B0 = ####1000 , ctle_res1_sel_lane[3:0]
    tmp32 = 0x7;// ANA_CTLE_REG6.BT.B0 = ####0111 , ctle_res2_sel_lane[3:0]
    tmp35 = 0x7;// ANA_CTLE_REG3.BT.B0 = ####0111 , ctle_current1_sel_lane[3:0]
    tmp37 = 0xA;// ANA_CTLE_REG8.BT.B0 = ####1010 , ctle_rl2_sel_lane[3:0]
  }
  else if (gen_rx==14){
    tmp0 = 0x7;// ANA_DLL_REG1.BT.B0 = #####111 , eom_dll_cap_sel_lane[2:0]
    tmp2 = 0x2;// PLL_RS_LANE_REG12.BT.B2 = ###00010 , rx_pll_rate_sel_lane[4:0]
    tmp4 = 0x91;// DTL_REG2.BT.B1 = 10010001 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp5 = 0x2;// ANA_IMPCAL_REG0.BT.B0 = #####010 , path_disable_edge_lane, intpr_lane[1:0]
    tmp8 = 0x10;// ANA_SMPLR_REG4.BT.B0 = ##01#### , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
    tmp15 = 0x7;// ANA_CTLE_REG4.BT.B0 = ####0111 , ctle_current2_sel_lane[3:0]
    tmp16 = 0x5;// ANA_CTLE_REG7.BT.B0 = ####0101 , ctle_rl1_sel_lane[3:0]
    tmp21 = 0x7;// ANA_CTLE_REG2.BT.B0 = ####0111 , ctle_cap2_sel_lane[3:0]
    tmp25 = 0x9;// ANA_CTLE_REG5.BT.B0 = ####1001 , ctle_res1_sel_lane[3:0]
    tmp27 = 0x7;// ANA_DLL_REG.BT.B0 = #####111 , dll_cap_sel_lane[2:0]
    tmp32 = 0xA;// ANA_CTLE_REG6.BT.B0 = ####1010 , ctle_res2_sel_lane[3:0]
    tmp35 = 0x5;// ANA_CTLE_REG3.BT.B0 = ####0101 , ctle_current1_sel_lane[3:0]
    tmp37 = 0x7;// ANA_CTLE_REG8.BT.B0 = ####0111 , ctle_rl2_sel_lane[3:0]
  }
  else if (gen_rx==13){
    tmp0 = 0x7;// ANA_DLL_REG1.BT.B0 = #####111 , eom_dll_cap_sel_lane[2:0]
    tmp2 = 0x0;// PLL_RS_LANE_REG12.BT.B2 = ###00000 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0xC7;// DTL_REG2.BT.B0 = 11000111 , rx_foffset_extra_m_lane[13:0]
    tmp4 = 0x8F;// DTL_REG2.BT.B1 = 10001111 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp5 = 0x3;// ANA_IMPCAL_REG0.BT.B0 = #####011 , path_disable_edge_lane, intpr_lane[1:0]
    tmp8 = 0x10;// ANA_SMPLR_REG4.BT.B0 = ##01#### , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
    tmp13 = 0x42;// ANA_INTPI_REG0.BT.B0 = 01000010 , rxintpi_low_lane[3:0], rxintpi_lane[3:0]
    tmp15 = 0x6;// ANA_CTLE_REG4.BT.B0 = ####0110 , ctle_current2_sel_lane[3:0]
    tmp16 = 0x4;// ANA_CTLE_REG7.BT.B0 = ####0100 , ctle_rl1_sel_lane[3:0]
    tmp21 = 0x7;// ANA_CTLE_REG2.BT.B0 = ####0111 , ctle_cap2_sel_lane[3:0]
    tmp25 = 0xB;// ANA_CTLE_REG5.BT.B0 = ####1011 , ctle_res1_sel_lane[3:0]
    tmp27 = 0x7;// ANA_DLL_REG.BT.B0 = #####111 , dll_cap_sel_lane[2:0]
    tmp32 = 0xB;// ANA_CTLE_REG6.BT.B0 = ####1011 , ctle_res2_sel_lane[3:0]
    tmp35 = 0x4;// ANA_CTLE_REG3.BT.B0 = ####0100 , ctle_current1_sel_lane[3:0]
    tmp37 = 0x6;// ANA_CTLE_REG8.BT.B0 = ####0110 , ctle_rl2_sel_lane[3:0]
  }
  else if (gen_rx==12){
    tmp0 = 0x3;// ANA_DLL_REG1.BT.B0 = #####011 , eom_dll_cap_sel_lane[2:0]
    tmp2 = 0xC;// PLL_RS_LANE_REG12.BT.B2 = ###01100 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0x4D;// DTL_REG2.BT.B0 = 01001101 , rx_foffset_extra_m_lane[13:0]
    tmp4 = 0x9A;// DTL_REG2.BT.B1 = 10011010 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp5 = 0x5;// ANA_IMPCAL_REG0.BT.B0 = #####101 , path_disable_edge_lane, intpr_lane[1:0]
    tmp8 = 0x20;// ANA_SMPLR_REG4.BT.B0 = ##10#### , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
    tmp13 = 0x99;// ANA_INTPI_REG0.BT.B0 = 10011001 , rxintpi_low_lane[3:0], rxintpi_lane[3:0]
    tmp15 = 0x5;// ANA_CTLE_REG4.BT.B0 = ####0101 , ctle_current2_sel_lane[3:0]
    tmp16 = 0x3;// ANA_CTLE_REG7.BT.B0 = ####0011 , ctle_rl1_sel_lane[3:0]
    tmp21 = 0x7;// ANA_CTLE_REG2.BT.B0 = ####0111 , ctle_cap2_sel_lane[3:0]
    tmp23 = 0xC2;// ANA_SMPLR_REG2.BT.B0 = 11000010 , pu_ctle_even_lane, pu_ctle_odd_lane, pu_smplr_s_e_lane[2:0], pu_smplr_s_o_lane[2:0]
    tmp25 = 0xB;// ANA_CTLE_REG5.BT.B0 = ####1011 , ctle_res1_sel_lane[3:0]
    tmp26 = 0x51;// ANA_RXREG_REG1.BT.B0 = #101#001 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp27 = 0x3;// ANA_DLL_REG.BT.B0 = #####011 , dll_cap_sel_lane[2:0]
    tmp31 = 0xB;// ANA_RXREG_REG0.BT.B0 = ####1011 , rxreg_speedtrk_clk_half_lane, rxreg_speedtrk_clk_lane[2:0]
    tmp32 = 0xC;// ANA_CTLE_REG6.BT.B0 = ####1100 , ctle_res2_sel_lane[3:0]
    tmp35 = 0x3;// ANA_CTLE_REG3.BT.B0 = ####0011 , ctle_current1_sel_lane[3:0]
    tmp37 = 0x5;// ANA_CTLE_REG8.BT.B0 = ####0101 , ctle_rl2_sel_lane[3:0]
  }
  else if (gen_rx==11){
    tmp0 = 0x3;// ANA_DLL_REG1.BT.B0 = #####011 , eom_dll_cap_sel_lane[2:0]
    tmp2 = 0xB;// PLL_RS_LANE_REG12.BT.B2 = ###01011 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0xDB;// DTL_REG2.BT.B0 = 11011011 , rx_foffset_extra_m_lane[13:0]
    tmp4 = 0x99;// DTL_REG2.BT.B1 = 10011001 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp5 = 0x5;// ANA_IMPCAL_REG0.BT.B0 = #####101 , path_disable_edge_lane, intpr_lane[1:0]
    tmp8 = 0x20;// ANA_SMPLR_REG4.BT.B0 = ##10#### , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
    tmp13 = 0x99;// ANA_INTPI_REG0.BT.B0 = 10011001 , rxintpi_low_lane[3:0], rxintpi_lane[3:0]
    tmp15 = 0x5;// ANA_CTLE_REG4.BT.B0 = ####0101 , ctle_current2_sel_lane[3:0]
    tmp16 = 0x3;// ANA_CTLE_REG7.BT.B0 = ####0011 , ctle_rl1_sel_lane[3:0]
    tmp21 = 0x7;// ANA_CTLE_REG2.BT.B0 = ####0111 , ctle_cap2_sel_lane[3:0]
    tmp23 = 0xC2;// ANA_SMPLR_REG2.BT.B0 = 11000010 , pu_ctle_even_lane, pu_ctle_odd_lane, pu_smplr_s_e_lane[2:0], pu_smplr_s_o_lane[2:0]
    tmp25 = 0xB;// ANA_CTLE_REG5.BT.B0 = ####1011 , ctle_res1_sel_lane[3:0]
    tmp26 = 0x51;// ANA_RXREG_REG1.BT.B0 = #101#001 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp27 = 0x3;// ANA_DLL_REG.BT.B0 = #####011 , dll_cap_sel_lane[2:0]
    tmp31 = 0xB;// ANA_RXREG_REG0.BT.B0 = ####1011 , rxreg_speedtrk_clk_half_lane, rxreg_speedtrk_clk_lane[2:0]
    tmp32 = 0xC;// ANA_CTLE_REG6.BT.B0 = ####1100 , ctle_res2_sel_lane[3:0]
    tmp35 = 0x3;// ANA_CTLE_REG3.BT.B0 = ####0011 , ctle_current1_sel_lane[3:0]
    tmp37 = 0x5;// ANA_CTLE_REG8.BT.B0 = ####0101 , ctle_rl2_sel_lane[3:0]
  }
  else if (gen_rx==10){
    tmp2 = 0x6;// PLL_RS_LANE_REG12.BT.B2 = ###00110 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0xB3;// DTL_REG2.BT.B0 = 10110011 , rx_foffset_extra_m_lane[13:0]
    tmp5 = 0x6;// ANA_IMPCAL_REG0.BT.B0 = #####110 , path_disable_edge_lane, intpr_lane[1:0]
    tmp8 = 0x20;// ANA_SMPLR_REG4.BT.B0 = ##10#### , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
    tmp15 = 0x5;// ANA_CTLE_REG4.BT.B0 = ####0101 , ctle_current2_sel_lane[3:0]
    tmp16 = 0x3;// ANA_CTLE_REG7.BT.B0 = ####0011 , ctle_rl1_sel_lane[3:0]
    tmp21 = 0x7;// ANA_CTLE_REG2.BT.B0 = ####0111 , ctle_cap2_sel_lane[3:0]
    tmp23 = 0xC2;// ANA_SMPLR_REG2.BT.B0 = 11000010 , pu_ctle_even_lane, pu_ctle_odd_lane, pu_smplr_s_e_lane[2:0], pu_smplr_s_o_lane[2:0]
    tmp25 = 0xB;// ANA_CTLE_REG5.BT.B0 = ####1011 , ctle_res1_sel_lane[3:0]
    tmp26 = 0x50;// ANA_RXREG_REG1.BT.B0 = #101#000 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp32 = 0xC;// ANA_CTLE_REG6.BT.B0 = ####1100 , ctle_res2_sel_lane[3:0]
    tmp35 = 0x3;// ANA_CTLE_REG3.BT.B0 = ####0011 , ctle_current1_sel_lane[3:0]
    tmp37 = 0x5;// ANA_CTLE_REG8.BT.B0 = ####0101 , ctle_rl2_sel_lane[3:0]
  }
  else if (gen_rx==9){
    tmp3 = 0xA;// DTL_REG2.BT.B0 = 00001010 , rx_foffset_extra_m_lane[13:0]
    tmp5 = 0x6;// ANA_IMPCAL_REG0.BT.B0 = #####110 , path_disable_edge_lane, intpr_lane[1:0]
    tmp8 = 0x20;// ANA_SMPLR_REG4.BT.B0 = ##10#### , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
    tmp15 = 0x5;// ANA_CTLE_REG4.BT.B0 = ####0101 , ctle_current2_sel_lane[3:0]
    tmp16 = 0x3;// ANA_CTLE_REG7.BT.B0 = ####0011 , ctle_rl1_sel_lane[3:0]
    tmp21 = 0x7;// ANA_CTLE_REG2.BT.B0 = ####0111 , ctle_cap2_sel_lane[3:0]
    tmp23 = 0xC2;// ANA_SMPLR_REG2.BT.B0 = 11000010 , pu_ctle_even_lane, pu_ctle_odd_lane, pu_smplr_s_e_lane[2:0], pu_smplr_s_o_lane[2:0]
    tmp25 = 0xB;// ANA_CTLE_REG5.BT.B0 = ####1011 , ctle_res1_sel_lane[3:0]
    tmp26 = 0x50;// ANA_RXREG_REG1.BT.B0 = #101#000 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp32 = 0xC;// ANA_CTLE_REG6.BT.B0 = ####1100 , ctle_res2_sel_lane[3:0]
    tmp35 = 0x3;// ANA_CTLE_REG3.BT.B0 = ####0011 , ctle_current1_sel_lane[3:0]
    tmp37 = 0x5;// ANA_CTLE_REG8.BT.B0 = ####0101 , ctle_rl2_sel_lane[3:0]
  }
  else if (gen_rx==8){
    tmp2 = 0x3;// PLL_RS_LANE_REG12.BT.B2 = ###00011 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0xAF;// DTL_REG2.BT.B0 = 10101111 , rx_foffset_extra_m_lane[13:0]
    tmp4 = 0x94;// DTL_REG2.BT.B1 = 10010100 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp5 = 0x6;// ANA_IMPCAL_REG0.BT.B0 = #####110 , path_disable_edge_lane, intpr_lane[1:0]
    tmp8 = 0x20;// ANA_SMPLR_REG4.BT.B0 = ##10#### , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
    tmp15 = 0x3;// ANA_CTLE_REG4.BT.B0 = ####0011 , ctle_current2_sel_lane[3:0]
    tmp16 = 0x2;// ANA_CTLE_REG7.BT.B0 = ####0010 , ctle_rl1_sel_lane[3:0]
    tmp21 = 0x7;// ANA_CTLE_REG2.BT.B0 = ####0111 , ctle_cap2_sel_lane[3:0]
    tmp23 = 0xC2;// ANA_SMPLR_REG2.BT.B0 = 11000010 , pu_ctle_even_lane, pu_ctle_odd_lane, pu_smplr_s_e_lane[2:0], pu_smplr_s_o_lane[2:0]
    tmp25 = 0xC;// ANA_CTLE_REG5.BT.B0 = ####1100 , ctle_res1_sel_lane[3:0]
    tmp26 = 0x50;// ANA_RXREG_REG1.BT.B0 = #101#000 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp32 = 0xD;// ANA_CTLE_REG6.BT.B0 = ####1101 , ctle_res2_sel_lane[3:0]
    tmp35 = 0x2;// ANA_CTLE_REG3.BT.B0 = ####0010 , ctle_current1_sel_lane[3:0]
    tmp37 = 0x3;// ANA_CTLE_REG8.BT.B0 = ####0011 , ctle_rl2_sel_lane[3:0]
  }
  else if (gen_rx==7){
    tmp0 = 0x7;// ANA_DLL_REG1.BT.B0 = #####111 , eom_dll_cap_sel_lane[2:0]
    tmp2 = 0x2;// PLL_RS_LANE_REG12.BT.B2 = ###00010 , rx_pll_rate_sel_lane[4:0]
    tmp4 = 0x91;// DTL_REG2.BT.B1 = 10010001 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp5 = 0x6;// ANA_IMPCAL_REG0.BT.B0 = #####110 , path_disable_edge_lane, intpr_lane[1:0]
    tmp8 = 0x20;// ANA_SMPLR_REG4.BT.B0 = ##10#### , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
    tmp15 = 0x3;// ANA_CTLE_REG4.BT.B0 = ####0011 , ctle_current2_sel_lane[3:0]
    tmp16 = 0x2;// ANA_CTLE_REG7.BT.B0 = ####0010 , ctle_rl1_sel_lane[3:0]
    tmp21 = 0x7;// ANA_CTLE_REG2.BT.B0 = ####0111 , ctle_cap2_sel_lane[3:0]
    tmp23 = 0xC2;// ANA_SMPLR_REG2.BT.B0 = 11000010 , pu_ctle_even_lane, pu_ctle_odd_lane, pu_smplr_s_e_lane[2:0], pu_smplr_s_o_lane[2:0]
    tmp25 = 0xC;// ANA_CTLE_REG5.BT.B0 = ####1100 , ctle_res1_sel_lane[3:0]
    tmp26 = 0x50;// ANA_RXREG_REG1.BT.B0 = #101#000 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp27 = 0x7;// ANA_DLL_REG.BT.B0 = #####111 , dll_cap_sel_lane[2:0]
    tmp32 = 0xD;// ANA_CTLE_REG6.BT.B0 = ####1101 , ctle_res2_sel_lane[3:0]
    tmp35 = 0x2;// ANA_CTLE_REG3.BT.B0 = ####0010 , ctle_current1_sel_lane[3:0]
    tmp37 = 0x3;// ANA_CTLE_REG8.BT.B0 = ####0011 , ctle_rl2_sel_lane[3:0]
  }
  else if (gen_rx==6){
    tmp0 = 0x3;// ANA_DLL_REG1.BT.B0 = #####011 , eom_dll_cap_sel_lane[2:0]
    tmp2 = 0xC;// PLL_RS_LANE_REG12.BT.B2 = ###01100 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0x4D;// DTL_REG2.BT.B0 = 01001101 , rx_foffset_extra_m_lane[13:0]
    tmp4 = 0x9A;// DTL_REG2.BT.B1 = 10011010 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp5 = 0x5;// ANA_IMPCAL_REG0.BT.B0 = #####101 , path_disable_edge_lane, intpr_lane[1:0]
    tmp8 = 0x30;// ANA_SMPLR_REG4.BT.B0 = ##11#### , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
    tmp9 = 0x1;// DFE_CTRL_REG5.BT.B0 = #######1 , dfe_dis_lane
    tmp13 = 0x99;// ANA_INTPI_REG0.BT.B0 = 10011001 , rxintpi_low_lane[3:0], rxintpi_lane[3:0]
    tmp15 = 0x2;// ANA_CTLE_REG4.BT.B0 = ####0010 , ctle_current2_sel_lane[3:0]
    tmp16 = 0x1;// ANA_CTLE_REG7.BT.B0 = ####0001 , ctle_rl1_sel_lane[3:0]
    tmp21 = 0x7;// ANA_CTLE_REG2.BT.B0 = ####0111 , ctle_cap2_sel_lane[3:0]
    tmp23 = 0x80;// ANA_SMPLR_REG2.BT.B0 = 10000000 , pu_ctle_even_lane, pu_ctle_odd_lane, pu_smplr_s_e_lane[2:0], pu_smplr_s_o_lane[2:0]
    tmp25 = 0xD;// ANA_CTLE_REG5.BT.B0 = ####1101 , ctle_res1_sel_lane[3:0]
    tmp26 = 0x61;// ANA_RXREG_REG1.BT.B0 = #110#001 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp27 = 0x3;// ANA_DLL_REG.BT.B0 = #####011 , dll_cap_sel_lane[2:0]
    tmp31 = 0xB;// ANA_RXREG_REG0.BT.B0 = ####1011 , rxreg_speedtrk_clk_half_lane, rxreg_speedtrk_clk_lane[2:0]
    tmp32 = 0xD;// ANA_CTLE_REG6.BT.B0 = ####1101 , ctle_res2_sel_lane[3:0]
    tmp34 = 0x10;// ANA_SMPLR_REG0.BT.B0 = ##010000 , pu_smplr_d_e_lane[2:0], pu_smplr_d_o_lane[2:0]
    tmp35 = 0x1;// ANA_CTLE_REG3.BT.B0 = ####0001 , ctle_current1_sel_lane[3:0]
    tmp37 = 0x2;// ANA_CTLE_REG8.BT.B0 = ####0010 , ctle_rl2_sel_lane[3:0]
  }
  else if (gen_rx==5){
    tmp3 = 0xA;// DTL_REG2.BT.B0 = 00001010 , rx_foffset_extra_m_lane[13:0]
    tmp5 = 0x6;// ANA_IMPCAL_REG0.BT.B0 = #####110 , path_disable_edge_lane, intpr_lane[1:0]
    tmp8 = 0x30;// ANA_SMPLR_REG4.BT.B0 = ##11#### , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
    tmp9 = 0x1;// DFE_CTRL_REG5.BT.B0 = #######1 , dfe_dis_lane
    tmp14 = 0x7;// ANA_CTLE_REG1.BT.B0 = ####0111 , ctle_cap1_sel_g_lane[3:0]
    tmp15 = 0x2;// ANA_CTLE_REG4.BT.B0 = ####0010 , ctle_current2_sel_lane[3:0]
    tmp16 = 0x0;// ANA_CTLE_REG7.BT.B0 = ####0000 , ctle_rl1_sel_lane[3:0]
    tmp21 = 0x7;// ANA_CTLE_REG2.BT.B0 = ####0111 , ctle_cap2_sel_lane[3:0]
    tmp23 = 0x80;// ANA_SMPLR_REG2.BT.B0 = 10000000 , pu_ctle_even_lane, pu_ctle_odd_lane, pu_smplr_s_e_lane[2:0], pu_smplr_s_o_lane[2:0]
    tmp25 = 0xF;// ANA_CTLE_REG5.BT.B0 = ####1111 , ctle_res1_sel_lane[3:0]
    tmp26 = 0x60;// ANA_RXREG_REG1.BT.B0 = #110#000 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp32 = 0xD;// ANA_CTLE_REG6.BT.B0 = ####1101 , ctle_res2_sel_lane[3:0]
    tmp34 = 0x10;// ANA_SMPLR_REG0.BT.B0 = ##010000 , pu_smplr_d_e_lane[2:0], pu_smplr_d_o_lane[2:0]
    tmp35 = 0x0;// ANA_CTLE_REG3.BT.B0 = ####0000 , ctle_current1_sel_lane[3:0]
    tmp37 = 0x2;// ANA_CTLE_REG8.BT.B0 = ####0010 , ctle_rl2_sel_lane[3:0]
  }
  else if (gen_rx==4){
    tmp2 = 0x3;// PLL_RS_LANE_REG12.BT.B2 = ###00011 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0xAF;// DTL_REG2.BT.B0 = 10101111 , rx_foffset_extra_m_lane[13:0]
    tmp4 = 0x94;// DTL_REG2.BT.B1 = 10010100 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp5 = 0x6;// ANA_IMPCAL_REG0.BT.B0 = #####110 , path_disable_edge_lane, intpr_lane[1:0]
    tmp8 = 0x30;// ANA_SMPLR_REG4.BT.B0 = ##11#### , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
    tmp9 = 0x1;// DFE_CTRL_REG5.BT.B0 = #######1 , dfe_dis_lane
    tmp14 = 0x7;// ANA_CTLE_REG1.BT.B0 = ####0111 , ctle_cap1_sel_g_lane[3:0]
    tmp15 = 0x2;// ANA_CTLE_REG4.BT.B0 = ####0010 , ctle_current2_sel_lane[3:0]
    tmp16 = 0x0;// ANA_CTLE_REG7.BT.B0 = ####0000 , ctle_rl1_sel_lane[3:0]
    tmp21 = 0x7;// ANA_CTLE_REG2.BT.B0 = ####0111 , ctle_cap2_sel_lane[3:0]
    tmp23 = 0x80;// ANA_SMPLR_REG2.BT.B0 = 10000000 , pu_ctle_even_lane, pu_ctle_odd_lane, pu_smplr_s_e_lane[2:0], pu_smplr_s_o_lane[2:0]
    tmp25 = 0xF;// ANA_CTLE_REG5.BT.B0 = ####1111 , ctle_res1_sel_lane[3:0]
    tmp26 = 0x60;// ANA_RXREG_REG1.BT.B0 = #110#000 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp32 = 0xD;// ANA_CTLE_REG6.BT.B0 = ####1101 , ctle_res2_sel_lane[3:0]
    tmp34 = 0x10;// ANA_SMPLR_REG0.BT.B0 = ##010000 , pu_smplr_d_e_lane[2:0], pu_smplr_d_o_lane[2:0]
    tmp35 = 0x0;// ANA_CTLE_REG3.BT.B0 = ####0000 , ctle_current1_sel_lane[3:0]
    tmp37 = 0x2;// ANA_CTLE_REG8.BT.B0 = ####0010 , ctle_rl2_sel_lane[3:0]
  }
  else if (gen_rx==3){
    tmp0 = 0x7;// ANA_DLL_REG1.BT.B0 = #####111 , eom_dll_cap_sel_lane[2:0]
    tmp2 = 0x2;// PLL_RS_LANE_REG12.BT.B2 = ###00010 , rx_pll_rate_sel_lane[4:0]
    tmp4 = 0x91;// DTL_REG2.BT.B1 = 10010001 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp5 = 0x6;// ANA_IMPCAL_REG0.BT.B0 = #####110 , path_disable_edge_lane, intpr_lane[1:0]
    tmp8 = 0x30;// ANA_SMPLR_REG4.BT.B0 = ##11#### , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
    tmp9 = 0x1;// DFE_CTRL_REG5.BT.B0 = #######1 , dfe_dis_lane
    tmp14 = 0x7;// ANA_CTLE_REG1.BT.B0 = ####0111 , ctle_cap1_sel_g_lane[3:0]
    tmp15 = 0x2;// ANA_CTLE_REG4.BT.B0 = ####0010 , ctle_current2_sel_lane[3:0]
    tmp16 = 0x0;// ANA_CTLE_REG7.BT.B0 = ####0000 , ctle_rl1_sel_lane[3:0]
    tmp21 = 0x7;// ANA_CTLE_REG2.BT.B0 = ####0111 , ctle_cap2_sel_lane[3:0]
    tmp23 = 0x80;// ANA_SMPLR_REG2.BT.B0 = 10000000 , pu_ctle_even_lane, pu_ctle_odd_lane, pu_smplr_s_e_lane[2:0], pu_smplr_s_o_lane[2:0]
    tmp25 = 0xF;// ANA_CTLE_REG5.BT.B0 = ####1111 , ctle_res1_sel_lane[3:0]
    tmp26 = 0x60;// ANA_RXREG_REG1.BT.B0 = #110#000 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp27 = 0x7;// ANA_DLL_REG.BT.B0 = #####111 , dll_cap_sel_lane[2:0]
    tmp32 = 0xD;// ANA_CTLE_REG6.BT.B0 = ####1101 , ctle_res2_sel_lane[3:0]
    tmp34 = 0x10;// ANA_SMPLR_REG0.BT.B0 = ##010000 , pu_smplr_d_e_lane[2:0], pu_smplr_d_o_lane[2:0]
    tmp35 = 0x0;// ANA_CTLE_REG3.BT.B0 = ####0000 , ctle_current1_sel_lane[3:0]
    tmp37 = 0x2;// ANA_CTLE_REG8.BT.B0 = ####0010 , ctle_rl2_sel_lane[3:0]
  }
  else if (gen_rx==2){
    tmp3 = 0xA;// DTL_REG2.BT.B0 = 00001010 , rx_foffset_extra_m_lane[13:0]
    tmp5 = 0x6;// ANA_IMPCAL_REG0.BT.B0 = #####110 , path_disable_edge_lane, intpr_lane[1:0]
    tmp8 = 0x30;// ANA_SMPLR_REG4.BT.B0 = ##11#### , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
    tmp9 = 0x1;// DFE_CTRL_REG5.BT.B0 = #######1 , dfe_dis_lane
    tmp14 = 0x7;// ANA_CTLE_REG1.BT.B0 = ####0111 , ctle_cap1_sel_g_lane[3:0]
    tmp15 = 0x1;// ANA_CTLE_REG4.BT.B0 = ####0001 , ctle_current2_sel_lane[3:0]
    tmp16 = 0x0;// ANA_CTLE_REG7.BT.B0 = ####0000 , ctle_rl1_sel_lane[3:0]
    tmp21 = 0x5;// ANA_CTLE_REG2.BT.B0 = ####0101 , ctle_cap2_sel_lane[3:0]
    tmp23 = 0x40;// ANA_SMPLR_REG2.BT.B0 = 01000000 , pu_ctle_even_lane, pu_ctle_odd_lane, pu_smplr_s_e_lane[2:0], pu_smplr_s_o_lane[2:0]
    tmp24 = 0xF;// ANA_RSVD_REG9.BT.B0 = ####1111 , ctle_cl2_sel_lane[1:0], ctle_cl1_sel_lane[1:0]
    tmp25 = 0xF;// ANA_CTLE_REG5.BT.B0 = ####1111 , ctle_res1_sel_lane[3:0]
    tmp26 = 0x70;// ANA_RXREG_REG1.BT.B0 = #111#000 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp32 = 0xE;// ANA_CTLE_REG6.BT.B0 = ####1110 , ctle_res2_sel_lane[3:0]
    tmp34 = 0x2;// ANA_SMPLR_REG0.BT.B0 = ##000010 , pu_smplr_d_e_lane[2:0], pu_smplr_d_o_lane[2:0]
    tmp35 = 0x0;// ANA_CTLE_REG3.BT.B0 = ####0000 , ctle_current1_sel_lane[3:0]
    tmp37 = 0x1;// ANA_CTLE_REG8.BT.B0 = ####0001 , ctle_rl2_sel_lane[3:0]
  }
  else if (gen_rx==1){
    tmp2 = 0x3;// PLL_RS_LANE_REG12.BT.B2 = ###00011 , rx_pll_rate_sel_lane[4:0]
    tmp3 = 0xAF;// DTL_REG2.BT.B0 = 10101111 , rx_foffset_extra_m_lane[13:0]
    tmp4 = 0x94;// DTL_REG2.BT.B1 = 10010100 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp5 = 0x6;// ANA_IMPCAL_REG0.BT.B0 = #####110 , path_disable_edge_lane, intpr_lane[1:0]
    tmp8 = 0x30;// ANA_SMPLR_REG4.BT.B0 = ##11#### , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
    tmp9 = 0x1;// DFE_CTRL_REG5.BT.B0 = #######1 , dfe_dis_lane
    tmp14 = 0x7;// ANA_CTLE_REG1.BT.B0 = ####0111 , ctle_cap1_sel_g_lane[3:0]
    tmp15 = 0x1;// ANA_CTLE_REG4.BT.B0 = ####0001 , ctle_current2_sel_lane[3:0]
    tmp16 = 0x0;// ANA_CTLE_REG7.BT.B0 = ####0000 , ctle_rl1_sel_lane[3:0]
    tmp21 = 0x5;// ANA_CTLE_REG2.BT.B0 = ####0101 , ctle_cap2_sel_lane[3:0]
    tmp23 = 0x40;// ANA_SMPLR_REG2.BT.B0 = 01000000 , pu_ctle_even_lane, pu_ctle_odd_lane, pu_smplr_s_e_lane[2:0], pu_smplr_s_o_lane[2:0]
    tmp24 = 0xF;// ANA_RSVD_REG9.BT.B0 = ####1111 , ctle_cl2_sel_lane[1:0], ctle_cl1_sel_lane[1:0]
    tmp25 = 0xF;// ANA_CTLE_REG5.BT.B0 = ####1111 , ctle_res1_sel_lane[3:0]
    tmp26 = 0x70;// ANA_RXREG_REG1.BT.B0 = #111#000 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp32 = 0xE;// ANA_CTLE_REG6.BT.B0 = ####1110 , ctle_res2_sel_lane[3:0]
    tmp34 = 0x2;// ANA_SMPLR_REG0.BT.B0 = ##000010 , pu_smplr_d_e_lane[2:0], pu_smplr_d_o_lane[2:0]
    tmp35 = 0x0;// ANA_CTLE_REG3.BT.B0 = ####0000 , ctle_current1_sel_lane[3:0]
    tmp37 = 0x1;// ANA_CTLE_REG8.BT.B0 = ####0001 , ctle_rl2_sel_lane[3:0]
  }
  else if (gen_rx==0){
    tmp0 = 0x7;// ANA_DLL_REG1.BT.B0 = #####111 , eom_dll_cap_sel_lane[2:0]
    tmp2 = 0x2;// PLL_RS_LANE_REG12.BT.B2 = ###00010 , rx_pll_rate_sel_lane[4:0]
    tmp4 = 0x91;// DTL_REG2.BT.B1 = 10010001 , dtl_clk_mode_lane[1:0], rx_foffset_extra_m_lane[13:0]
    tmp5 = 0x6;// ANA_IMPCAL_REG0.BT.B0 = #####110 , path_disable_edge_lane, intpr_lane[1:0]
    tmp8 = 0x30;// ANA_SMPLR_REG4.BT.B0 = ##11#### , rxspeed_div_2x_lane[1:0], rxtsen_sel_lane, rxterm_extra_lane[1:0], rxtest_lane[8]
    tmp9 = 0x1;// DFE_CTRL_REG5.BT.B0 = #######1 , dfe_dis_lane
    tmp14 = 0x7;// ANA_CTLE_REG1.BT.B0 = ####0111 , ctle_cap1_sel_g_lane[3:0]
    tmp15 = 0x1;// ANA_CTLE_REG4.BT.B0 = ####0001 , ctle_current2_sel_lane[3:0]
    tmp16 = 0x0;// ANA_CTLE_REG7.BT.B0 = ####0000 , ctle_rl1_sel_lane[3:0]
    tmp21 = 0x5;// ANA_CTLE_REG2.BT.B0 = ####0101 , ctle_cap2_sel_lane[3:0]
    tmp23 = 0x40;// ANA_SMPLR_REG2.BT.B0 = 01000000 , pu_ctle_even_lane, pu_ctle_odd_lane, pu_smplr_s_e_lane[2:0], pu_smplr_s_o_lane[2:0]
    tmp24 = 0xF;// ANA_RSVD_REG9.BT.B0 = ####1111 , ctle_cl2_sel_lane[1:0], ctle_cl1_sel_lane[1:0]
    tmp25 = 0xF;// ANA_CTLE_REG5.BT.B0 = ####1111 , ctle_res1_sel_lane[3:0]
    tmp26 = 0x70;// ANA_RXREG_REG1.BT.B0 = #111#000 , rxspeed_div_lane[2:0], rxreg_speedtrk_data_lane[2:0]
    tmp27 = 0x7;// ANA_DLL_REG.BT.B0 = #####111 , dll_cap_sel_lane[2:0]
    tmp32 = 0xE;// ANA_CTLE_REG6.BT.B0 = ####1110 , ctle_res2_sel_lane[3:0]
    tmp34 = 0x2;// ANA_SMPLR_REG0.BT.B0 = ##000010 , pu_smplr_d_e_lane[2:0], pu_smplr_d_o_lane[2:0]
    tmp35 = 0x0;// ANA_CTLE_REG3.BT.B0 = ####0000 , ctle_current1_sel_lane[3:0]
    tmp37 = 0x1;// ANA_CTLE_REG8.BT.B0 = ####0001 , ctle_rl2_sel_lane[3:0]
  }
  ANA_DLL_REG1.BT.B0 = tmp0;
  ANA_CTLE_REG0.BT.B0 = tmp1;
  PLL_RS_LANE_REG12.BT.B2 = tmp2;
  DTL_REG2.BT.B0 = tmp3;
  DTL_REG2.BT.B1 = tmp4;
  ANA_IMPCAL_REG0.BT.B0 = tmp5;
  TX_TRAIN_PAT_NUM1.BT.B0 = tmp6;
  TX_TRAIN_PAT_NUM1.BT.B1 = tmp7;
  ANA_SMPLR_REG4.BT.B0 = (ANA_SMPLR_REG4.BT.B0 & 0xf) | (tmp8 & 0xf0); // (ANA_SMPLR_REG4.BT.B0 & 00001111) | (tmp8 & 11110000)
  DFE_CTRL_REG5.BT.B0 = tmp9;
  ANA_EOM_REG3.BT.B0 = tmp10;
  DTL_REG1.BT.B0 = tmp11;
  DTL_REG1.BT.B1 = tmp12;
  ANA_INTPI_REG0.BT.B0 = tmp13;
  ANA_CTLE_REG1.BT.B0 = tmp14;
  ANA_CTLE_REG4.BT.B0 = tmp15;
  ANA_CTLE_REG7.BT.B0 = tmp16;
  ANA_ALIGN90_REG1.BT.B0 = (ANA_ALIGN90_REG1.BT.B0 & 0x1) | (tmp17 & 0xfe); // (ANA_ALIGN90_REG1.BT.B0 & 00000001) | (tmp17 & 11111110)
  ANA_DTL_REG3.BT.B0 = tmp18;
  TX_TRAIN_PATTERN_REG1.BT.B2 = tmp19;
  TX_TRAIN_PATTERN_REG1.BT.B3 = tmp20;
  ANA_CTLE_REG2.BT.B0 = tmp21;
  ANA_SMPLR_REG3.BT.B0 = tmp22;
  ANA_SMPLR_REG2.BT.B0 = tmp23;
  ANA_RSVD_REG9.BT.B0 = tmp24;
  ANA_CTLE_REG5.BT.B0 = tmp25;
  ANA_RXREG_REG1.BT.B0 = tmp26;
  ANA_DLL_REG.BT.B0 = tmp27;
  TX_TRAIN_PATTTERN_REG0.BT.B1 = tmp28;
  PM_CTRL_RX_LANE_REG1_LANE.BT.B0 = tmp29;
  ANA_SMPLR_REG1.BT.B0 = tmp30;
  ANA_RXREG_REG0.BT.B0 = tmp31;
  ANA_CTLE_REG6.BT.B0 = tmp32;
  RX_SYSTEM_LANE.BT.B0 = tmp33;
  ANA_SMPLR_REG0.BT.B0 = tmp34;
  ANA_CTLE_REG3.BT.B0 = tmp35;
  ANA_RSVD_REG1.BT.B0 = tmp36;
  ANA_CTLE_REG8.BT.B0 = tmp37;
}
void loadspeedtbl_lc_pll (uint8_t pll_rate_sel, uint8_t ref_clk_sel, int tsrs_sel) BANKING_CTRL {
  uint8_t tmp0 = 0x1C; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
  uint8_t tmp1 = 0x0; //PLL_TS_LANE_REG12.BT.B1 , pll_ts_fbdiv_cal_lane[9:0]
  uint8_t tmp2 = 0x85; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
  uint8_t tmp3 = 0xE5; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
  uint8_t tmp4 = 0xC; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
  uint8_t tmp5 = 0x18; //PLL_TS_DTX_REG2.BT.B3 , pll_ts_ssc_step_125ppm_lane[3:0], pll_ts_ssc_acc_factor_lane
  uint8_t tmp6 = 0x68; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
  uint8_t tmp7 = 0x83; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
  uint8_t tmp8 = 0x5; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
  uint8_t tmp9 = 0x80; //PLL_TS_UPHY14_CMN_ANAREG_TOP_022.BT.B0 , pll_ts_reg0p9_speed_track_clk_lane[2:0]
  uint8_t tmp10 = 0xA; //PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
  uint8_t tmp11 = 0x40; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
  uint8_t tmp12 = 0x1F; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
  uint8_t tmp13 = 0x0; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
  uint8_t tmp14 = 0x0; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
  uint8_t tmp15 = 0x0; //PLL_TS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 , pll_ts_ck500m_div_lane[1:0], pll_ts_lcpll_postdiv_en_lane, pll_ts_lcpll_postdiv_1p5or2_en_lane
  uint8_t tmp16 = 0xD3; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
  if (pll_rate_sel==28){
    tmp0 = 0x17; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x40; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0x7F; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp4 = 0xF; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp5 = 0x10; //PLL_TS_DTX_REG2.BT.B3 , pll_ts_ssc_step_125ppm_lane[3:0], pll_ts_ssc_acc_factor_lane
    tmp6 = 0x38; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
    tmp7 = 0xA5; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0x80; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp16 = 0xB4; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x4D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001101 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp11 = 0x66;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 01100110 , pll_ts_speed_thresh_lane[15:0]
      tmp13 = 0xAB;// PLL_TS_LANE_REG1.BT.B0 = 10101011 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xA;// PLL_TS_LANE_REG1.BT.B1 = 00001010 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x3C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 00111100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp16 = 0x7C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp2 = 0x28;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00101000 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x5C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp11 = 0x80;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 10000000 , pll_ts_speed_thresh_lane[15:0]
      tmp16 = 0x7C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp2 = 0x50;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010000 , pll_ts_fbdiv_lane[7:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0xC8;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 11001000 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x85;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10000101 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0xC3;// PLL_TS_LANE_REG1.BT.B0 = 11000011 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF5;// PLL_TS_LANE_REG1.BT.B1 = 11110101 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==0){
      tmp2 = 0xA0;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10100000 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0xD4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
  }
  else if (pll_rate_sel==20){
    tmp2 = 0x46; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0x9D; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp4 = 0xD; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp5 = 0x10; //PLL_TS_DTX_REG2.BT.B3 , pll_ts_ssc_step_125ppm_lane[3:0], pll_ts_ssc_acc_factor_lane
    tmp6 = 0x48; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
    tmp7 = 0xA5; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0x0; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp11 = 0x64; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp13 = 0xCC; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0xED; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp16 = 0x7C; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x2D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00101101 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp11 = 0x8A;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 10001010 , pll_ts_speed_thresh_lane[15:0]
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x5C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x38;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111000 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==5){
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp16 = 0x9C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x38;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111000 , pll_ts_fbdiv_lane[7:0]
      tmp11 = 0xA4;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 10100100 , pll_ts_speed_thresh_lane[15:0]
    }
    else if (ref_clk_sel==3){
      tmp8 = 0x4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x5C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x58;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01011000 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0x19;// PLL_TS_LANE_REG1.BT.B0 = 00011001 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x5;// PLL_TS_LANE_REG1.BT.B1 = 00000101 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x75;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01110101 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0x72;// PLL_TS_LANE_REG1.BT.B0 = 01110010 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF9;// PLL_TS_LANE_REG1.BT.B1 = 11111001 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x9C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
      tmp2 = 0x8D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10001101 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0xEC;// PLL_TS_LANE_REG1.BT.B0 = 11101100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xA;// PLL_TS_LANE_REG1.BT.B1 = 00001010 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xB4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
  }
  else if (pll_rate_sel==19){
    tmp2 = 0x58; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0x95; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp4 = 0xD; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp5 = 0x10; //PLL_TS_DTX_REG2.BT.B3 , pll_ts_ssc_step_125ppm_lane[3:0], pll_ts_ssc_acc_factor_lane
    tmp6 = 0x48; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
    tmp7 = 0xA5; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0x0; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp11 = 0x4E; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp13 = 0xB3; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0xF8; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp16 = 0xD4; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x2D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00101101 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp11 = 0x75;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 01110101 , pll_ts_speed_thresh_lane[15:0]
      tmp13 = 0xF4;// PLL_TS_LANE_REG1.BT.B0 = 11110100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xA;// PLL_TS_LANE_REG1.BT.B1 = 00001010 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x5C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x1C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00011100 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x44;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01000100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp2 = 0x23;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00100011 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x54;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01010100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x38;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111000 , pll_ts_fbdiv_lane[7:0]
      tmp11 = 0x8E;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 10001110 , pll_ts_speed_thresh_lane[15:0]
      tmp16 = 0x7C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp2 = 0x46;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01000110 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x9C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp13 = 0x10;// PLL_TS_LANE_REG1.BT.B0 = 00010000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x10;// PLL_TS_LANE_REG1.BT.B1 = 00010000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xB4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x75;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01110101 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x61;// PLL_TS_LANE_REG1.BT.B0 = 01100001 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x4;// PLL_TS_LANE_REG1.BT.B1 = 00000100 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==0){
      tmp2 = 0x8C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10001100 , pll_ts_fbdiv_lane[7:0]
    }
  }
  else if (pll_rate_sel==18){
    tmp2 = 0x46; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0x8F; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp4 = 0xD; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp5 = 0x10; //PLL_TS_DTX_REG2.BT.B3 , pll_ts_ssc_step_125ppm_lane[3:0], pll_ts_ssc_acc_factor_lane
    tmp6 = 0x58; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
    tmp7 = 0xA5; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0x0; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp16 = 0x7C; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x2D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00101101 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp11 = 0x66;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 01100110 , pll_ts_speed_thresh_lane[15:0]
      tmp13 = 0x49;// PLL_TS_LANE_REG1.BT.B0 = 01001001 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x12;// PLL_TS_LANE_REG1.BT.B1 = 00010010 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x5C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x38;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111000 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==5){
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp16 = 0x9C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x38;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111000 , pll_ts_fbdiv_lane[7:0]
      tmp11 = 0x80;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 10000000 , pll_ts_speed_thresh_lane[15:0]
    }
    else if (ref_clk_sel==3){
      tmp8 = 0x4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x5C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x58;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01011000 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0x68;// PLL_TS_LANE_REG1.BT.B0 = 01101000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x17;// PLL_TS_LANE_REG1.BT.B1 = 00010111 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x75;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01110101 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0xB4;// PLL_TS_LANE_REG1.BT.B0 = 10110100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xB;// PLL_TS_LANE_REG1.BT.B1 = 00001011 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x9C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
      tmp2 = 0x8C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10001100 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0xB4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
  }
  else if (pll_rate_sel==17){
    tmp2 = 0x45; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0x51; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp4 = 0xD; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp5 = 0x10; //PLL_TS_DTX_REG2.BT.B3 , pll_ts_ssc_step_125ppm_lane[3:0], pll_ts_ssc_acc_factor_lane
    tmp6 = 0x58; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
    tmp8 = 0x0; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp10 = 0x12; //PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    tmp11 = 0xB1; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp12 = 0x1E; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
    tmp13 = 0xE5; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0xE; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp16 = 0x9C; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x2C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00101100 , pll_ts_fbdiv_lane[7:0]
      tmp11 = 0xD7;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 11010111 , pll_ts_speed_thresh_lane[15:0]
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x7C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x37;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00110111 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==5){
      tmp16 = 0xB4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x37;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00110111 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp11 = 0xF0;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 11110000 , pll_ts_speed_thresh_lane[15:0]
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==3){
      tmp8 = 0x4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp10 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp16 = 0x7C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x56;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010110 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp10 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xFB;// PLL_TS_LANE_REG1.BT.B0 = 11111011 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x2;// PLL_TS_LANE_REG1.BT.B1 = 00000010 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0xE5;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 11100101 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0x5;// PLL_TS_LANE_REG1.BT.B0 = 00000101 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xFD;// PLL_TS_LANE_REG1.BT.B1 = 11111101 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xD4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
      tmp2 = 0x8A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10001010 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp10 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp16 = 0xD4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
  }
  else if (pll_rate_sel==16){
    tmp0 = 0x1B; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp3 = 0xDB; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp6 = 0x58; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
    tmp8 = 0x0; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp11 = 0xBE; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp12 = 0x1E; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
    tmp13 = 0xC8; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0x5; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp16 = 0xD4; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x55;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010101 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0x22;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp11 = 0xE4;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 11100100 , pll_ts_speed_thresh_lane[15:0]
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x35;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00110101 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x5D;// PLL_TS_LANE_REG1.BT.B0 = 01011101 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF6;// PLL_TS_LANE_REG1.BT.B1 = 11110110 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x9C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp10 = 0x22;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x35;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00110101 , pll_ts_fbdiv_lane[7:0]
      tmp11 = 0xFD;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 11111101 , pll_ts_speed_thresh_lane[15:0]
      tmp13 = 0x5D;// PLL_TS_LANE_REG1.BT.B0 = 01011101 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF6;// PLL_TS_LANE_REG1.BT.B1 = 11110110 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x9C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp8 = 0x4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x53;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010011 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0x9D;// PLL_TS_LANE_REG1.BT.B0 = 10011101 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xFF;// PLL_TS_LANE_REG1.BT.B1 = 11111111 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x9C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x6F;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01101111 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0xF3;// PLL_TS_LANE_REG1.BT.B0 = 11110011 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xB;// PLL_TS_LANE_REG1.BT.B1 = 00001011 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==0){
      tmp8 = 0x4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    }
  }
  else if (pll_rate_sel==15){
    tmp0 = 0x1B; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp3 = 0xDB; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp6 = 0x58; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
    tmp8 = 0x0; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp11 = 0xBE; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp12 = 0x1E; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
    tmp13 = 0x2B; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0x6; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp16 = 0xD4; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x55;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010101 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0x22;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp11 = 0xE3;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 11100011 , pll_ts_speed_thresh_lane[15:0]
      tmp13 = 0x63;// PLL_TS_LANE_REG1.BT.B0 = 01100011 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x35;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00110101 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xBF;// PLL_TS_LANE_REG1.BT.B0 = 10111111 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF6;// PLL_TS_LANE_REG1.BT.B1 = 11110110 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x9C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp8 = 0x4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp10 = 0x22;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x35;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00110101 , pll_ts_fbdiv_lane[7:0]
      tmp11 = 0xFD;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 11111101 , pll_ts_speed_thresh_lane[15:0]
      tmp13 = 0xBF;// PLL_TS_LANE_REG1.BT.B0 = 10111111 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF6;// PLL_TS_LANE_REG1.BT.B1 = 11110110 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x9C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp8 = 0x4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x53;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010011 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x6F;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01101111 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0x56;// PLL_TS_LANE_REG1.BT.B0 = 01010110 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xC;// PLL_TS_LANE_REG1.BT.B1 = 00001100 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==0){
      tmp8 = 0x4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    }
  }
  else if (pll_rate_sel==14){
    tmp0 = 0x1A; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x81; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0x7B; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp10 = 0x1A; //PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    tmp11 = 0xFD; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp12 = 0x1E; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
    tmp13 = 0xFB; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0x2; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    if (ref_clk_sel==7){
      tmp2 = 0x3E;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111110 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp11 = 0x23;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 00100011 , pll_ts_speed_thresh_lane[15:0]
      tmp12 = 0x1F;// PLL_TS_CAL_CTRL_LANE.BT.B1 = 00011111 , pll_ts_speed_thresh_lane[15:0]
      tmp13 = 0x46;// PLL_TS_LANE_REG1.BT.B0 = 01000110 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x8;// PLL_TS_LANE_REG1.BT.B1 = 00001000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x9B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp10 = 0x2A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==5){
      tmp2 = 0x61;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100001 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x92;// PLL_TS_LANE_REG1.BT.B0 = 10010010 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xD;// PLL_TS_LANE_REG1.BT.B1 = 00001101 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xB3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x9B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10011011 , pll_ts_fbdiv_lane[7:0]
      tmp11 = 0x3C;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 00111100 , pll_ts_speed_thresh_lane[15:0]
      tmp12 = 0x1F;// PLL_TS_CAL_CTRL_LANE.BT.B1 = 00011111 , pll_ts_speed_thresh_lane[15:0]
      tmp13 = 0x46;// PLL_TS_LANE_REG1.BT.B0 = 01000110 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x8;// PLL_TS_LANE_REG1.BT.B1 = 00001000 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==3){
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x51;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010001 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xB;// PLL_TS_LANE_REG1.BT.B0 = 00001011 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x16;// PLL_TS_LANE_REG1.BT.B1 = 00010110 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x9B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x6B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01101011 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xEA;// PLL_TS_LANE_REG1.BT.B0 = 11101010 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xEF;// PLL_TS_LANE_REG1.BT.B1 = 11101111 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xB3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
      tmp10 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
  }
  else if (pll_rate_sel==13){
    tmp0 = 0x1A; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x81; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0x7B; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp10 = 0x12; //PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    tmp11 = 0xFD; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp12 = 0x1E; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
    tmp13 = 0xFD; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0x2; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp16 = 0xB3; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x3E;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111110 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp10 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp11 = 0x23;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 00100011 , pll_ts_speed_thresh_lane[15:0]
      tmp12 = 0x1F;// PLL_TS_CAL_CTRL_LANE.BT.B1 = 00011111 , pll_ts_speed_thresh_lane[15:0]
      tmp13 = 0x48;// PLL_TS_LANE_REG1.BT.B0 = 01001000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x8;// PLL_TS_LANE_REG1.BT.B1 = 00001000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x9B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x4D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001101 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp10 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xCE;// PLL_TS_LANE_REG1.BT.B0 = 11001110 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xED;// PLL_TS_LANE_REG1.BT.B1 = 11101101 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xD3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp2 = 0x61;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100001 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x94;// PLL_TS_LANE_REG1.BT.B0 = 10010100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xD;// PLL_TS_LANE_REG1.BT.B1 = 00001101 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x67;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100111 , pll_ts_fbdiv_lane[7:0]
      tmp11 = 0x3C;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 00111100 , pll_ts_speed_thresh_lane[15:0]
      tmp12 = 0x1F;// PLL_TS_CAL_CTRL_LANE.BT.B1 = 00011111 , pll_ts_speed_thresh_lane[15:0]
      tmp13 = 0xB;// PLL_TS_LANE_REG1.BT.B0 = 00001011 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xFB;// PLL_TS_LANE_REG1.BT.B1 = 11111011 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==3){
      tmp16 = 0xD3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0xA1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10100001 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0xA2;// PLL_TS_LANE_REG1.BT.B0 = 10100010 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xFC;// PLL_TS_LANE_REG1.BT.B1 = 11111100 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x6B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01101011 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xEC;// PLL_TS_LANE_REG1.BT.B0 = 11101100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xEF;// PLL_TS_LANE_REG1.BT.B1 = 11101111 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==0){
      tmp10 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp16 = 0xD3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
  }
  else if (pll_rate_sel==12){
    tmp0 = 0x19; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x7D; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0x1B; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    if (ref_clk_sel==7){
      tmp2 = 0x14;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00010100 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp11 = 0x66;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 01100110 , pll_ts_speed_thresh_lane[15:0]
      tmp16 = 0x43;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01000011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x19;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00011001 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x53;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01010011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp2 = 0x5E;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01011110 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xEC;// PLL_TS_LANE_REG1.BT.B0 = 11101100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xA;// PLL_TS_LANE_REG1.BT.B1 = 00001010 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xB3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x32;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00110010 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp11 = 0x80;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 10000000 , pll_ts_speed_thresh_lane[15:0]
      tmp16 = 0x9B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x4E;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001110 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x72;// PLL_TS_LANE_REG1.BT.B0 = 01110010 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF9;// PLL_TS_LANE_REG1.BT.B1 = 11111001 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x9B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x68;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01101000 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x72;// PLL_TS_LANE_REG1.BT.B0 = 01110010 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF9;// PLL_TS_LANE_REG1.BT.B1 = 11111001 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==0){
    }
  }
  else if (pll_rate_sel==11){
    tmp0 = 0x19; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x31; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp4 = 0xB; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp11 = 0xB8; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp12 = 0x1E; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
    tmp14 = 0xF3; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    if (ref_clk_sel==7){
      tmp2 = 0x3B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111011 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp10 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp11 = 0xDE;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 11011110 , pll_ts_speed_thresh_lane[15:0]
      tmp13 = 0x39;// PLL_TS_LANE_REG1.BT.B0 = 00111001 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x1;// PLL_TS_LANE_REG1.BT.B1 = 00000001 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xB3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp8 = 0x1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x55;// PLL_TS_LANE_REG1.BT.B0 = 01010101 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x9B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp2 = 0x5C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01011100 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xE4;// PLL_TS_LANE_REG1.BT.B0 = 11100100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF8;// PLL_TS_LANE_REG1.BT.B1 = 11111000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xB3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp8 = 0x1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp11 = 0xF7;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 11110111 , pll_ts_speed_thresh_lane[15:0]
      tmp13 = 0x55;// PLL_TS_LANE_REG1.BT.B0 = 01010101 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x9B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp2 = 0x7B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111011 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp14 = 0x4;// PLL_TS_LANE_REG1.BT.B1 = 00000100 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x4D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001101 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0xAB;// PLL_TS_LANE_REG1.BT.B0 = 10101011 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xA;// PLL_TS_LANE_REG1.BT.B1 = 00001010 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x66;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100110 , pll_ts_fbdiv_lane[7:0]
      tmp14 = 0xF0;// PLL_TS_LANE_REG1.BT.B1 = 11110000 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==0){
      tmp2 = 0x7B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111011 , pll_ts_fbdiv_lane[7:0]
      tmp14 = 0x4;// PLL_TS_LANE_REG1.BT.B1 = 00000100 , pll_ts_init_foffs_lane[15:0]
    }
  }
  else if (pll_rate_sel==10){
    tmp0 = 0x18; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x31; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0xCD; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp4 = 0xB; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp10 = 0x12; //PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    tmp11 = 0xBD; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp13 = 0x33; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0x4; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp16 = 0x9B; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x27;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00100111 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp11 = 0xE4;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 11100100 , pll_ts_speed_thresh_lane[15:0]
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x7B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp8 = 0x1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0x1;// PLL_TS_LANE_REG1.BT.B0 = 00000001 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x15;// PLL_TS_LANE_REG1.BT.B1 = 00010101 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==5){
      tmp2 = 0x3D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111101 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x7B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp8 = 0x1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp10 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp11 = 0xFE;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 11111110 , pll_ts_speed_thresh_lane[15:0]
      tmp13 = 0x1;// PLL_TS_LANE_REG1.BT.B0 = 00000001 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x15;// PLL_TS_LANE_REG1.BT.B1 = 00010101 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==3){
      tmp2 = 0x7A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111010 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0xD3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x4C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001100 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xC2;// PLL_TS_LANE_REG1.BT.B0 = 11000010 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF6;// PLL_TS_LANE_REG1.BT.B1 = 11110110 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0xCB;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 11001011 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x7B;// PLL_TS_LANE_REG1.BT.B0 = 01111011 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xFD;// PLL_TS_LANE_REG1.BT.B1 = 11111101 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xD3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
      tmp2 = 0x7A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111010 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp16 = 0xD3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
  }
  else if (pll_rate_sel==9){
    tmp0 = 0x18; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x3D; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0xC7; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp4 = 0xB; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp8 = 0x1; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp11 = 0xAE; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp13 = 0xBE; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0xB; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    if (ref_clk_sel==7){
      tmp2 = 0x27;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00100111 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp11 = 0xD5;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 11010101 , pll_ts_speed_thresh_lane[15:0]
      tmp13 = 0x89;// PLL_TS_LANE_REG1.BT.B0 = 10001001 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x7;// PLL_TS_LANE_REG1.BT.B1 = 00000111 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x7B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x49;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001001 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x85;// PLL_TS_LANE_REG1.BT.B0 = 10000101 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==5){
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp16 = 0xB3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x61;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100001 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x5;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000101 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp11 = 0xEF;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 11101111 , pll_ts_speed_thresh_lane[15:0]
      tmp13 = 0x7E;// PLL_TS_LANE_REG1.BT.B0 = 01111110 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF2;// PLL_TS_LANE_REG1.BT.B1 = 11110010 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xB3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp16 = 0xB3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x4C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001100 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x47;// PLL_TS_LANE_REG1.BT.B0 = 01000111 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xFE;// PLL_TS_LANE_REG1.BT.B1 = 11111110 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x65;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100101 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x5;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000101 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0xCF;// PLL_TS_LANE_REG1.BT.B0 = 11001111 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF0;// PLL_TS_LANE_REG1.BT.B1 = 11110000 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==0){
      tmp2 = 0x7A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111010 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x5;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000101 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    }
  }
  else if (pll_rate_sel==8){
    tmp0 = 0x17; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x74; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0x31; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp4 = 0xB; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp6 = 0x78; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
    tmp7 = 0x42; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp11 = 0x6B; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp13 = 0x49; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0xD; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp16 = 0xD1; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x25;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00100101 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp11 = 0x92;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 10010010 , pll_ts_speed_thresh_lane[15:0]
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x69;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01101001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp10 = 0x2A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==5){
      tmp2 = 0x1D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00011101 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x59;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01011001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x8B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10001011 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp11 = 0xAC;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 10101100 , pll_ts_speed_thresh_lane[15:0]
      tmp13 = 0x61;// PLL_TS_LANE_REG1.BT.B0 = 01100001 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x7;// PLL_TS_LANE_REG1.BT.B1 = 00000111 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==3){
      tmp2 = 0x3A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111010 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0xB1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x48;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001000 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0xF2;// PLL_TS_LANE_REG1.BT.B0 = 11110010 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF0;// PLL_TS_LANE_REG1.BT.B1 = 11110000 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x60;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100000 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0xF2;// PLL_TS_LANE_REG1.BT.B0 = 11110010 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF0;// PLL_TS_LANE_REG1.BT.B1 = 11110000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xB1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
    }
  }
  else if (pll_rate_sel==7){
    tmp0 = 0x15; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x69; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0x2F; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp4 = 0xA; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp6 = 0x78; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
    tmp7 = 0x42; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0x6; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp11 = 0x4E; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp13 = 0xB3; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0xF8; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp16 = 0xD0; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x54;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010100 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0x2A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp11 = 0x75;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 01110101 , pll_ts_speed_thresh_lane[15:0]
      tmp16 = 0xB0;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x15;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00010101 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x2;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000010 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x50;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01010000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp10 = 0x22;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x2A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00101010 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x2;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000010 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp11 = 0x8E;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 10001110 , pll_ts_speed_thresh_lane[15:0]
      tmp16 = 0x98;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x42;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01000010 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x2;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000010 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0x10;// PLL_TS_LANE_REG1.BT.B0 = 00010000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x10;// PLL_TS_LANE_REG1.BT.B1 = 00010000 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x58;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01011000 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x10;// PLL_TS_LANE_REG1.BT.B0 = 00010000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x10;// PLL_TS_LANE_REG1.BT.B1 = 00010000 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==0){
    }
  }
  else if (pll_rate_sel==6){
    tmp0 = 0x15; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x67; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0xFB; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp4 = 0x9; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp6 = 0x78; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
    tmp7 = 0x42; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0x6; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp10 = 0x12; //PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    tmp11 = 0xB1; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp12 = 0x1E; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
    tmp13 = 0x9; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0xFB; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp16 = 0xD0; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x21;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00100001 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x2;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000010 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp11 = 0xD7;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 11010111 , pll_ts_speed_thresh_lane[15:0]
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x78;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x3E;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111110 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x2;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000010 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp10 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x46;// PLL_TS_LANE_REG1.BT.B0 = 01000110 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x8;// PLL_TS_LANE_REG1.BT.B1 = 00001000 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==5){
      tmp10 = 0x22;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0xA5;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10100101 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00001010 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp10 = 0x22;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp11 = 0xF0;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 11110000 , pll_ts_speed_thresh_lane[15:0]
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x78;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
    }
    else if (ref_clk_sel==2){
      tmp2 = 0xC1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 11000001 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00001010 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp10 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x63;// PLL_TS_LANE_REG1.BT.B0 = 01100011 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF8;// PLL_TS_LANE_REG1.BT.B1 = 11111000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x98;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0xAC;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10101100 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00001010 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0xFB;// PLL_TS_LANE_REG1.BT.B0 = 11111011 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x2;// PLL_TS_LANE_REG1.BT.B1 = 00000010 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x98;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
      tmp10 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
  }
  else if (pll_rate_sel==5){
    tmp0 = 0x14; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x51; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0xD1; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp4 = 0x9; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp6 = 0x78; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
    tmp7 = 0x42; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0x6; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp10 = 0x12; //PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    tmp11 = 0xAE; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp13 = 0x27; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0xFB; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp16 = 0xB0; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp10 = 0x2A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp11 = 0xD5;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 11010101 , pll_ts_speed_thresh_lane[15:0]
    }
    else if (ref_clk_sel==6){
      tmp10 = 0x22;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==5){
      tmp2 = 0x4C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001100 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x85;// PLL_TS_LANE_REG1.BT.B0 = 10000101 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xFE;// PLL_TS_LANE_REG1.BT.B1 = 11111110 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==4){
      tmp11 = 0xEE;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 11101110 , pll_ts_speed_thresh_lane[15:0]
    }
    else if (ref_clk_sel==3){
      tmp2 = 0x65;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100101 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0xD;// PLL_TS_LANE_REG1.BT.B0 = 00001101 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF1;// PLL_TS_LANE_REG1.BT.B1 = 11110001 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xD0;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x7F;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111111 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x4B;// PLL_TS_LANE_REG1.BT.B0 = 01001011 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x9;// PLL_TS_LANE_REG1.BT.B1 = 00001001 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0xA9;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10101001 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x36;// PLL_TS_LANE_REG1.BT.B0 = 00110110 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x1;// PLL_TS_LANE_REG1.BT.B1 = 00000001 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xD0;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
      tmp2 = 0x65;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100101 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xD;// PLL_TS_LANE_REG1.BT.B0 = 00001101 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF1;// PLL_TS_LANE_REG1.BT.B1 = 11110001 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xD0;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
  }
  else if (pll_rate_sel==4){
    tmp0 = 0x14; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x64; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0xAF; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp4 = 0x9; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp6 = 0x78; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
    tmp7 = 0x42; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0x6; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp10 = 0x12; //PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    tmp16 = 0xB0; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x20;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00100000 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x2;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000010 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp11 = 0x66;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 01100110 , pll_ts_speed_thresh_lane[15:0]
      tmp16 = 0x68;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01101000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x3C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111100 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp16 = 0x78;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp2 = 0x4B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001011 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x78;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111000 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp11 = 0x80;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 10000000 , pll_ts_speed_thresh_lane[15:0]
      tmp16 = 0xD0;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp16 = 0xD0;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x7D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111101 , pll_ts_fbdiv_lane[7:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x53;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010011 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x9E;// PLL_TS_LANE_REG1.BT.B0 = 10011110 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xEF;// PLL_TS_LANE_REG1.BT.B1 = 11101111 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==0){
      tmp10 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp16 = 0xD0;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
  }
  else if (pll_rate_sel==3){
    tmp0 = 0x1D; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x3B; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0x47; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp4 = 0xE; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp5 = 0x10; //PLL_TS_DTX_REG2.BT.B3 , pll_ts_ssc_step_125ppm_lane[3:0], pll_ts_ssc_acc_factor_lane
    tmp6 = 0x48; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
    tmp7 = 0xA5; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0x80; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp11 = 0xC8; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp13 = 0x55; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0xF3; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp15 = 0x3; //PLL_TS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 , pll_ts_ck500m_div_lane[1:0], pll_ts_lcpll_postdiv_en_lane, pll_ts_lcpll_postdiv_1p5or2_en_lane
    tmp16 = 0xB4; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x2F;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00101111 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp11 = 0xEF;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 11101111 , pll_ts_speed_thresh_lane[15:0]
      tmp13 = 0xDC;// PLL_TS_LANE_REG1.BT.B0 = 11011100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xEF;// PLL_TS_LANE_REG1.BT.B1 = 11101111 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x54;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01010100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x39;// PLL_TS_LANE_REG1.BT.B0 = 00111001 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x1;// PLL_TS_LANE_REG1.BT.B1 = 00000001 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x6C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01101100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp2 = 0x25;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00100101 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x1C;// PLL_TS_LANE_REG1.BT.B0 = 00011100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF;// PLL_TS_LANE_REG1.BT.B1 = 00001111 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x44;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01000100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp11 = 0x9;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 00001001 , pll_ts_speed_thresh_lane[15:0]
      tmp12 = 0x20;// PLL_TS_CAL_CTRL_LANE.BT.B1 = 00100000 , pll_ts_speed_thresh_lane[15:0]
      tmp13 = 0x39;// PLL_TS_LANE_REG1.BT.B0 = 00111001 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x1;// PLL_TS_LANE_REG1.BT.B1 = 00000001 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x6C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01101100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp2 = 0x93;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10010011 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x5C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01011100 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0xE4;// PLL_TS_LANE_REG1.BT.B0 = 11100100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF8;// PLL_TS_LANE_REG1.BT.B1 = 11111000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x9C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x7B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111011 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x4;// PLL_TS_LANE_REG1.BT.B1 = 00000100 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xD4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
      tmp2 = 0x93;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10010011 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    }
  }
  else if (pll_rate_sel==2){
    tmp0 = 0x1A; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x33; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0x59; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp11 = 0xA6; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp12 = 0x1E; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
    tmp13 = 0x10; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0x10; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp15 = 0x3; //PLL_TS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 , pll_ts_ck500m_div_lane[1:0], pll_ts_lcpll_postdiv_en_lane, pll_ts_lcpll_postdiv_1p5or2_en_lane
    tmp16 = 0xB3; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x66;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100110 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0x2A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp11 = 0xCC;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 11001100 , pll_ts_speed_thresh_lane[15:0]
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==6){
      tmp8 = 0x1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x7B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp2 = 0x20;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00100000 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x5B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01011011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp8 = 0x1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp11 = 0xE5;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 11100101 , pll_ts_speed_thresh_lane[15:0]
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x7B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp2 = 0x40;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01000000 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x9F;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10011111 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x5D;// PLL_TS_LANE_REG1.BT.B0 = 01011101 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF6;// PLL_TS_LANE_REG1.BT.B1 = 11110110 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x6A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01101010 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x5D;// PLL_TS_LANE_REG1.BT.B0 = 01011101 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF6;// PLL_TS_LANE_REG1.BT.B1 = 11110110 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==0){
      tmp2 = 0x80;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10000000 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0xD3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
  }
  else if (pll_rate_sel==1){
    tmp0 = 0x18; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x3D; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0xCD; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp4 = 0xB; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp8 = 0x1; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp11 = 0xBD; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp14 = 0x4; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp15 = 0x3; //PLL_TS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 , pll_ts_ck500m_div_lane[1:0], pll_ts_lcpll_postdiv_en_lane, pll_ts_lcpll_postdiv_1p5or2_en_lane
    if (ref_clk_sel==7){
      tmp2 = 0x27;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00100111 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp11 = 0xE4;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 11100100 , pll_ts_speed_thresh_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x7B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x49;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001001 , pll_ts_fbdiv_lane[7:0]
      tmp10 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp14 = 0xF9;// PLL_TS_LANE_REG1.BT.B1 = 11111001 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==5){
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x33;// PLL_TS_LANE_REG1.BT.B0 = 00110011 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xB3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x92;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10010010 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x5;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000101 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp10 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp11 = 0xFE;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 11111110 , pll_ts_speed_thresh_lane[15:0]
      tmp14 = 0xF9;// PLL_TS_LANE_REG1.BT.B1 = 11111001 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==3){
      tmp13 = 0x33;// PLL_TS_LANE_REG1.BT.B0 = 00110011 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xB3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x4C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001100 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0xC2;// PLL_TS_LANE_REG1.BT.B0 = 11000010 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF6;// PLL_TS_LANE_REG1.BT.B1 = 11110110 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x66;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100110 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x5;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000101 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0xA5;// PLL_TS_LANE_REG1.BT.B0 = 10100101 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x11;// PLL_TS_LANE_REG1.BT.B1 = 00010001 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==0){
      tmp2 = 0x7A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111010 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x5;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000101 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0x33;// PLL_TS_LANE_REG1.BT.B0 = 00110011 , pll_ts_init_foffs_lane[15:0]
    }
  }
  else if (pll_rate_sel==0){
    tmp0 = 0x17; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x2D; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp4 = 0xA; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp6 = 0x78; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
    tmp7 = 0x42; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0x1; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp11 = 0x92; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp12 = 0x1E; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
    tmp15 = 0x3; //PLL_TS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 , pll_ts_ck500m_div_lane[1:0], pll_ts_lcpll_postdiv_en_lane, pll_ts_lcpll_postdiv_1p5or2_en_lane
    tmp16 = 0xB1; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00010010 , pll_ts_fbdiv_lane[7:0]
      tmp11 = 0xB8;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 10111000 , pll_ts_speed_thresh_lane[15:0]
      tmp16 = 0x39;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 00111001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp16 = 0x79;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp2 = 0x1C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00011100 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0xCC;// PLL_TS_LANE_REG1.BT.B0 = 11001100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xED;// PLL_TS_LANE_REG1.BT.B1 = 11101101 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x59;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01011001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp11 = 0xD1;// PLL_TS_CAL_CTRL_LANE.BT.B0 = 11010001 , pll_ts_speed_thresh_lane[15:0]
      tmp16 = 0x79;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp2 = 0x38;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111000 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0xCC;// PLL_TS_LANE_REG1.BT.B0 = 11001100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xED;// PLL_TS_LANE_REG1.BT.B1 = 11101101 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x8D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10001101 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x5;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000101 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp10 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xEC;// PLL_TS_LANE_REG1.BT.B0 = 11101100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xA;// PLL_TS_LANE_REG1.BT.B1 = 00001010 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x5E;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01011110 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x5;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000101 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0xEC;// PLL_TS_LANE_REG1.BT.B0 = 11101100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xA;// PLL_TS_LANE_REG1.BT.B1 = 00001010 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==0){
      tmp2 = 0x71;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01110001 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x5;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000101 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0x34;// PLL_TS_LANE_REG1.BT.B0 = 00110100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x12;// PLL_TS_LANE_REG1.BT.B1 = 00010010 , pll_ts_init_foffs_lane[15:0]
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
  uint8_t tmp0 = 0x3F; //TX_TRAIN_DEFAULT1.BT.B0 , tx_amp_default1_lane[6:0]
  uint8_t tmp1 = 0x2F; //TX_TRAIN_DEFAULT1.BT.B1 , tx_amp_default2_lane[6:0]
  uint8_t tmp2 = 0x2F; //TX_TRAIN_DEFAULT1.BT.B2 , tx_amp_default3_lane[6:0]
  uint8_t tmp3 = 0x4; //PLL_TS_LANE_REG12.BT.B2 , tx_pll_rate_sel_lane[4:0]
  uint8_t tmp4 = 0x1; //TX_RSVD_REG0.BT.B0 , txrsvd0_lane[7:1], txrsvd0_lane[0]
  uint8_t tmp5 = 0x0; //ANA_EOM_REG4.BT.B0 , txpll_hi_speed_lane
  uint8_t tmp6 = 0x40; //TX_SYSTEM_LANE1.BT.B3 , tx_pam2_en_lane
  uint8_t tmp7 = 0xF; //TX_TRAIN_DRIVER_REG1.BT.B0 , tx_emph0_max_lane[4:0]
  uint8_t tmp8 = 0xF; //TX_TRAIN_DRIVER_REG1.BT.B2 , tx_emph1_max_lane[4:0]
  uint8_t tmp9 = 0x0; //TX_TRAIN_DEFAULT4.BT.B0 , tx_emph2_default1_lane[4:0]
  uint8_t tmp10 = 0x0; //TX_TRAIN_DEFAULT4.BT.B1 , tx_emph2_default2_lane[4:0]
  uint8_t tmp11 = 0x0; //TX_TRAIN_DEFAULT4.BT.B2 , tx_emph2_default3_lane[4:0]
  uint8_t tmp12 = 0x0; //ANA_TXSPEED_REG0.BT.B0 , txspeed_div_lane[2:0]
  uint8_t tmp13 = 0xF; //TX_TRAIN_DRIVER_REG2.BT.B0 , tx_emph2_max_lane[4:0]
  uint8_t tmp14 = 0x6; //ANA_TXREG_REG0.BT.B0 , txreg_speedtrk_clk_lane[3:0]
  uint8_t tmp15 = 0x6; //ANA_TXREG_REG1.BT.B0 , txreg_speedtrk_data_lane[3:0]
  uint8_t tmp16 = 0x12; //CLKGEN_TX_LANE_REG1_LANE.BT.B0 , tx_train_pat_sel_lane[2:0], tx_data_width_lane[1:0], txdata_latency_reduce_en_lane
  uint8_t tmp17 = 0x0; //TX_TRAIN_DEFAULT3.BT.B0 , tx_emph1_default1_lane[4:0]
  uint8_t tmp18 = 0x6; //TX_TRAIN_DEFAULT3.BT.B1 , tx_emph1_default2_lane[4:0]
  uint8_t tmp19 = 0x0; //TX_TRAIN_DEFAULT3.BT.B2 , tx_emph1_default3_lane[4:0]
  uint8_t tmp20 = 0x1; //ANA_TX_FIR_SPD_REG0.BT.B0 , txfir_bypass_l1_delay_lane, txfir_bypass_l2_delay_lane, txfir_bypass_l3_delay_lane, txfir_2_dig_clk_div_lane
  uint8_t tmp21 = 0x0; //TX_TRAIN_DEFAULT2.BT.B0 , tx_emph0_default1_lane[4:0]
  uint8_t tmp22 = 0x9; //TX_TRAIN_DEFAULT2.BT.B1 , tx_emph0_default2_lane[4:0]
  uint8_t tmp23 = 0xF; //TX_TRAIN_DEFAULT2.BT.B2 , tx_emph0_default3_lane[4:0]
  uint8_t tmp24 = 0x1; //TX_TRAINING_IF_REG3.BT.B0 , ethernet_mode_tx_lane[1:0]
  uint8_t tmp25 = 0x0; //TX_TRAINING_IF_REG3.BT.B3 , tx_train_pat_two_zero_lane
  if (gen_tx==49){
    tmp12 = 0x1;// ANA_TXSPEED_REG0.BT.B0 = #####001 , txspeed_div_lane[2:0]
    tmp14 = 0x3;// ANA_TXREG_REG0.BT.B0 = ####0011 , txreg_speedtrk_clk_lane[3:0]
    tmp15 = 0x3;// ANA_TXREG_REG1.BT.B0 = ####0011 , txreg_speedtrk_data_lane[3:0]
  }
  else if (gen_tx==48){
    tmp3 = 0x1C;// PLL_TS_LANE_REG12.BT.B2 = ###11100 , tx_pll_rate_sel_lane[4:0]
    tmp4 = 0x0;// TX_RSVD_REG0.BT.B0 = 00000000 , txrsvd0_lane[7:1], txrsvd0_lane[0]
    tmp5 = 0x1;// ANA_EOM_REG4.BT.B0 = #######1 , txpll_hi_speed_lane
    tmp14 = 0x7;// ANA_TXREG_REG0.BT.B0 = ####0111 , txreg_speedtrk_clk_lane[3:0]
    tmp15 = 0x7;// ANA_TXREG_REG1.BT.B0 = ####0111 , txreg_speedtrk_data_lane[3:0]
    tmp16 = 0x2;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = ##000010 , tx_train_pat_sel_lane[2:0], tx_data_width_lane[1:0], txdata_latency_reduce_en_lane
  }
  else if (gen_tx==47){
    tmp3 = 0x0;// PLL_TS_LANE_REG12.BT.B2 = ###00000 , tx_pll_rate_sel_lane[4:0]
    tmp14 = 0x4;// ANA_TXREG_REG0.BT.B0 = ####0100 , txreg_speedtrk_clk_lane[3:0]
    tmp15 = 0x4;// ANA_TXREG_REG1.BT.B0 = ####0100 , txreg_speedtrk_data_lane[3:0]
  }
  else if (gen_tx==46){
    tmp3 = 0x6;// PLL_TS_LANE_REG12.BT.B2 = ###00110 , tx_pll_rate_sel_lane[4:0]
    tmp12 = 0x3;// ANA_TXSPEED_REG0.BT.B0 = #####011 , txspeed_div_lane[2:0]
    tmp14 = 0x1;// ANA_TXREG_REG0.BT.B0 = ####0001 , txreg_speedtrk_clk_lane[3:0]
    tmp15 = 0x1;// ANA_TXREG_REG1.BT.B0 = ####0001 , txreg_speedtrk_data_lane[3:0]
    tmp16 = 0x13;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = ##010011 , tx_train_pat_sel_lane[2:0], tx_data_width_lane[1:0], txdata_latency_reduce_en_lane
    tmp20 = 0x7;// ANA_TX_FIR_SPD_REG0.BT.B0 = ####0111 , txfir_bypass_l1_delay_lane, txfir_bypass_l2_delay_lane, txfir_bypass_l3_delay_lane, txfir_2_dig_clk_div_lane
  }
  else if (gen_tx==42){
    tmp3 = 0x12;// PLL_TS_LANE_REG12.BT.B2 = ###10010 , tx_pll_rate_sel_lane[4:0]
    tmp4 = 0x0;// TX_RSVD_REG0.BT.B0 = 00000000 , txrsvd0_lane[7:1], txrsvd0_lane[0]
    tmp5 = 0x1;// ANA_EOM_REG4.BT.B0 = #######1 , txpll_hi_speed_lane
    tmp6 = 0x0;// TX_SYSTEM_LANE1.BT.B3 = #0###### , tx_pam2_en_lane
    tmp16 = 0x14;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = ##010100 , tx_train_pat_sel_lane[2:0], tx_data_width_lane[1:0], txdata_latency_reduce_en_lane
    tmp24 = 0x2;// TX_TRAINING_IF_REG3.BT.B0 = ######10 , ethernet_mode_tx_lane[1:0]
  }
  else if (gen_tx==38){
    tmp3 = 0x14;// PLL_TS_LANE_REG12.BT.B2 = ###10100 , tx_pll_rate_sel_lane[4:0]
    tmp4 = 0x0;// TX_RSVD_REG0.BT.B0 = 00000000 , txrsvd0_lane[7:1], txrsvd0_lane[0]
    tmp5 = 0x1;// ANA_EOM_REG4.BT.B0 = #######1 , txpll_hi_speed_lane
    tmp6 = 0x0;// TX_SYSTEM_LANE1.BT.B3 = #0###### , tx_pam2_en_lane
    tmp16 = 0x14;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = ##010100 , tx_train_pat_sel_lane[2:0], tx_data_width_lane[1:0], txdata_latency_reduce_en_lane
    tmp24 = 0x2;// TX_TRAINING_IF_REG3.BT.B0 = ######10 , ethernet_mode_tx_lane[1:0]
  }
  else if (gen_tx==37){
    tmp3 = 0x13;// PLL_TS_LANE_REG12.BT.B2 = ###10011 , tx_pll_rate_sel_lane[4:0]
    tmp4 = 0x0;// TX_RSVD_REG0.BT.B0 = 00000000 , txrsvd0_lane[7:1], txrsvd0_lane[0]
    tmp5 = 0x1;// ANA_EOM_REG4.BT.B0 = #######1 , txpll_hi_speed_lane
    tmp6 = 0x0;// TX_SYSTEM_LANE1.BT.B3 = #0###### , tx_pam2_en_lane
    tmp16 = 0x14;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = ##010100 , tx_train_pat_sel_lane[2:0], tx_data_width_lane[1:0], txdata_latency_reduce_en_lane
    tmp24 = 0x2;// TX_TRAINING_IF_REG3.BT.B0 = ######10 , ethernet_mode_tx_lane[1:0]
  }
  else if (gen_tx==35){
    tmp3 = 0x10;// PLL_TS_LANE_REG12.BT.B2 = ###10000 , tx_pll_rate_sel_lane[4:0]
    tmp4 = 0x0;// TX_RSVD_REG0.BT.B0 = 00000000 , txrsvd0_lane[7:1], txrsvd0_lane[0]
    tmp6 = 0x0;// TX_SYSTEM_LANE1.BT.B3 = #0###### , tx_pam2_en_lane
    tmp16 = 0x14;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = ##010100 , tx_train_pat_sel_lane[2:0], tx_data_width_lane[1:0], txdata_latency_reduce_en_lane
    tmp24 = 0x2;// TX_TRAINING_IF_REG3.BT.B0 = ######10 , ethernet_mode_tx_lane[1:0]
  }
  else if (gen_tx==34){
    tmp3 = 0xE;// PLL_TS_LANE_REG12.BT.B2 = ###01110 , tx_pll_rate_sel_lane[4:0]
    tmp4 = 0x0;// TX_RSVD_REG0.BT.B0 = 00000000 , txrsvd0_lane[7:1], txrsvd0_lane[0]
    tmp6 = 0x0;// TX_SYSTEM_LANE1.BT.B3 = #0###### , tx_pam2_en_lane
    tmp16 = 0x14;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = ##010100 , tx_train_pat_sel_lane[2:0], tx_data_width_lane[1:0], txdata_latency_reduce_en_lane
    tmp24 = 0x2;// TX_TRAINING_IF_REG3.BT.B0 = ######10 , ethernet_mode_tx_lane[1:0]
  }
  else if (gen_tx==32){
    tmp3 = 0x8;// PLL_TS_LANE_REG12.BT.B2 = ###01000 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x0;// TX_SYSTEM_LANE1.BT.B3 = #0###### , tx_pam2_en_lane
    tmp14 = 0x5;// ANA_TXREG_REG0.BT.B0 = ####0101 , txreg_speedtrk_clk_lane[3:0]
    tmp15 = 0x5;// ANA_TXREG_REG1.BT.B0 = ####0101 , txreg_speedtrk_data_lane[3:0]
    tmp16 = 0x14;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = ##010100 , tx_train_pat_sel_lane[2:0], tx_data_width_lane[1:0], txdata_latency_reduce_en_lane
    tmp24 = 0x2;// TX_TRAINING_IF_REG3.BT.B0 = ######10 , ethernet_mode_tx_lane[1:0]
  }
  else if (gen_tx==30){
    tmp3 = 0x14;// PLL_TS_LANE_REG12.BT.B2 = ###10100 , tx_pll_rate_sel_lane[4:0]
    tmp4 = 0x0;// TX_RSVD_REG0.BT.B0 = 00000000 , txrsvd0_lane[7:1], txrsvd0_lane[0]
    tmp5 = 0x1;// ANA_EOM_REG4.BT.B0 = #######1 , txpll_hi_speed_lane
  }
  else if (gen_tx==29){
    tmp3 = 0x13;// PLL_TS_LANE_REG12.BT.B2 = ###10011 , tx_pll_rate_sel_lane[4:0]
    tmp4 = 0x0;// TX_RSVD_REG0.BT.B0 = 00000000 , txrsvd0_lane[7:1], txrsvd0_lane[0]
    tmp5 = 0x1;// ANA_EOM_REG4.BT.B0 = #######1 , txpll_hi_speed_lane
  }
  else if (gen_tx==28){
    tmp3 = 0x11;// PLL_TS_LANE_REG12.BT.B2 = ###10001 , tx_pll_rate_sel_lane[4:0]
    tmp4 = 0x0;// TX_RSVD_REG0.BT.B0 = 00000000 , txrsvd0_lane[7:1], txrsvd0_lane[0]
  }
  else if (gen_tx==27){
    tmp3 = 0x10;// PLL_TS_LANE_REG12.BT.B2 = ###10000 , tx_pll_rate_sel_lane[4:0]
    tmp4 = 0x0;// TX_RSVD_REG0.BT.B0 = 00000000 , txrsvd0_lane[7:1], txrsvd0_lane[0]
  }
  else if (gen_tx==26){
    tmp3 = 0xE;// PLL_TS_LANE_REG12.BT.B2 = ###01110 , tx_pll_rate_sel_lane[4:0]
    tmp4 = 0x0;// TX_RSVD_REG0.BT.B0 = 00000000 , txrsvd0_lane[7:1], txrsvd0_lane[0]
  }
  else if (gen_tx==25){
    tmp3 = 0x9;// PLL_TS_LANE_REG12.BT.B2 = ###01001 , tx_pll_rate_sel_lane[4:0]
  }
  else if (gen_tx==24){
    tmp3 = 0x6;// PLL_TS_LANE_REG12.BT.B2 = ###00110 , tx_pll_rate_sel_lane[4:0]
    tmp14 = 0x5;// ANA_TXREG_REG0.BT.B0 = ####0101 , txreg_speedtrk_clk_lane[3:0]
    tmp15 = 0x5;// ANA_TXREG_REG1.BT.B0 = ####0101 , txreg_speedtrk_data_lane[3:0]
  }
  else if (gen_tx==23){
    tmp3 = 0x13;// PLL_TS_LANE_REG12.BT.B2 = ###10011 , tx_pll_rate_sel_lane[4:0]
    tmp5 = 0x1;// ANA_EOM_REG4.BT.B0 = #######1 , txpll_hi_speed_lane
    tmp12 = 0x1;// ANA_TXSPEED_REG0.BT.B0 = #####001 , txspeed_div_lane[2:0]
    tmp14 = 0x3;// ANA_TXREG_REG0.BT.B0 = ####0011 , txreg_speedtrk_clk_lane[3:0]
    tmp15 = 0x3;// ANA_TXREG_REG1.BT.B0 = ####0011 , txreg_speedtrk_data_lane[3:0]
  }
  else if (gen_tx==22){
    tmp3 = 0xD;// PLL_TS_LANE_REG12.BT.B2 = ###01101 , tx_pll_rate_sel_lane[4:0]
    tmp12 = 0x1;// ANA_TXSPEED_REG0.BT.B0 = #####001 , txspeed_div_lane[2:0]
    tmp14 = 0x3;// ANA_TXREG_REG0.BT.B0 = ####0011 , txreg_speedtrk_clk_lane[3:0]
    tmp15 = 0x3;// ANA_TXREG_REG1.BT.B0 = ####0011 , txreg_speedtrk_data_lane[3:0]
  }
  else if (gen_tx==21){
    tmp3 = 0xC;// PLL_TS_LANE_REG12.BT.B2 = ###01100 , tx_pll_rate_sel_lane[4:0]
    tmp12 = 0x1;// ANA_TXSPEED_REG0.BT.B0 = #####001 , txspeed_div_lane[2:0]
    tmp14 = 0x3;// ANA_TXREG_REG0.BT.B0 = ####0011 , txreg_speedtrk_clk_lane[3:0]
    tmp15 = 0x3;// ANA_TXREG_REG1.BT.B0 = ####0011 , txreg_speedtrk_data_lane[3:0]
  }
  else if (gen_tx==20){
    tmp3 = 0xA;// PLL_TS_LANE_REG12.BT.B2 = ###01010 , tx_pll_rate_sel_lane[4:0]
    tmp12 = 0x1;// ANA_TXSPEED_REG0.BT.B0 = #####001 , txspeed_div_lane[2:0]
    tmp14 = 0x3;// ANA_TXREG_REG0.BT.B0 = ####0011 , txreg_speedtrk_clk_lane[3:0]
    tmp15 = 0x3;// ANA_TXREG_REG1.BT.B0 = ####0011 , txreg_speedtrk_data_lane[3:0]
  }
  else if (gen_tx==19){
    tmp3 = 0x9;// PLL_TS_LANE_REG12.BT.B2 = ###01001 , tx_pll_rate_sel_lane[4:0]
    tmp12 = 0x1;// ANA_TXSPEED_REG0.BT.B0 = #####001 , txspeed_div_lane[2:0]
    tmp14 = 0x3;// ANA_TXREG_REG0.BT.B0 = ####0011 , txreg_speedtrk_clk_lane[3:0]
    tmp15 = 0x3;// ANA_TXREG_REG1.BT.B0 = ####0011 , txreg_speedtrk_data_lane[3:0]
  }
  else if (gen_tx==18){
    tmp3 = 0x7;// PLL_TS_LANE_REG12.BT.B2 = ###00111 , tx_pll_rate_sel_lane[4:0]
    tmp12 = 0x1;// ANA_TXSPEED_REG0.BT.B0 = #####001 , txspeed_div_lane[2:0]
    tmp14 = 0x3;// ANA_TXREG_REG0.BT.B0 = ####0011 , txreg_speedtrk_clk_lane[3:0]
    tmp15 = 0x3;// ANA_TXREG_REG1.BT.B0 = ####0011 , txreg_speedtrk_data_lane[3:0]
  }
  else if (gen_tx==17){
    tmp3 = 0x6;// PLL_TS_LANE_REG12.BT.B2 = ###00110 , tx_pll_rate_sel_lane[4:0]
    tmp12 = 0x1;// ANA_TXSPEED_REG0.BT.B0 = #####001 , txspeed_div_lane[2:0]
    tmp14 = 0x3;// ANA_TXREG_REG0.BT.B0 = ####0011 , txreg_speedtrk_clk_lane[3:0]
    tmp15 = 0x3;// ANA_TXREG_REG1.BT.B0 = ####0011 , txreg_speedtrk_data_lane[3:0]
  }
  else if (gen_tx==16){
    tmp3 = 0x5;// PLL_TS_LANE_REG12.BT.B2 = ###00101 , tx_pll_rate_sel_lane[4:0]
    tmp12 = 0x1;// ANA_TXSPEED_REG0.BT.B0 = #####001 , txspeed_div_lane[2:0]
    tmp14 = 0x3;// ANA_TXREG_REG0.BT.B0 = ####0011 , txreg_speedtrk_clk_lane[3:0]
    tmp15 = 0x3;// ANA_TXREG_REG1.BT.B0 = ####0011 , txreg_speedtrk_data_lane[3:0]
  }
  else if (gen_tx==15){
    tmp3 = 0x3;// PLL_TS_LANE_REG12.BT.B2 = ###00011 , tx_pll_rate_sel_lane[4:0]
    tmp12 = 0x1;// ANA_TXSPEED_REG0.BT.B0 = #####001 , txspeed_div_lane[2:0]
    tmp14 = 0x3;// ANA_TXREG_REG0.BT.B0 = ####0011 , txreg_speedtrk_clk_lane[3:0]
    tmp15 = 0x3;// ANA_TXREG_REG1.BT.B0 = ####0011 , txreg_speedtrk_data_lane[3:0]
  }
  else if (gen_tx==14){
    tmp3 = 0x2;// PLL_TS_LANE_REG12.BT.B2 = ###00010 , tx_pll_rate_sel_lane[4:0]
    tmp12 = 0x1;// ANA_TXSPEED_REG0.BT.B0 = #####001 , txspeed_div_lane[2:0]
    tmp14 = 0x2;// ANA_TXREG_REG0.BT.B0 = ####0010 , txreg_speedtrk_clk_lane[3:0]
    tmp15 = 0x2;// ANA_TXREG_REG1.BT.B0 = ####0010 , txreg_speedtrk_data_lane[3:0]
  }
  else if (gen_tx==13){
    tmp3 = 0x0;// PLL_TS_LANE_REG12.BT.B2 = ###00000 , tx_pll_rate_sel_lane[4:0]
    tmp12 = 0x1;// ANA_TXSPEED_REG0.BT.B0 = #####001 , txspeed_div_lane[2:0]
    tmp14 = 0x2;// ANA_TXREG_REG0.BT.B0 = ####0010 , txreg_speedtrk_clk_lane[3:0]
    tmp15 = 0x2;// ANA_TXREG_REG1.BT.B0 = ####0010 , txreg_speedtrk_data_lane[3:0]
    tmp16 = 0x13;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = ##010011 , tx_train_pat_sel_lane[2:0], tx_data_width_lane[1:0], txdata_latency_reduce_en_lane
    tmp20 = 0x7;// ANA_TX_FIR_SPD_REG0.BT.B0 = ####0111 , txfir_bypass_l1_delay_lane, txfir_bypass_l2_delay_lane, txfir_bypass_l3_delay_lane, txfir_2_dig_clk_div_lane
  }
  else if (gen_tx==12){
    tmp3 = 0xC;// PLL_TS_LANE_REG12.BT.B2 = ###01100 , tx_pll_rate_sel_lane[4:0]
    tmp12 = 0x2;// ANA_TXSPEED_REG0.BT.B0 = #####010 , txspeed_div_lane[2:0]
    tmp14 = 0x2;// ANA_TXREG_REG0.BT.B0 = ####0010 , txreg_speedtrk_clk_lane[3:0]
    tmp15 = 0x2;// ANA_TXREG_REG1.BT.B0 = ####0010 , txreg_speedtrk_data_lane[3:0]
    tmp16 = 0x13;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = ##010011 , tx_train_pat_sel_lane[2:0], tx_data_width_lane[1:0], txdata_latency_reduce_en_lane
    tmp20 = 0x7;// ANA_TX_FIR_SPD_REG0.BT.B0 = ####0111 , txfir_bypass_l1_delay_lane, txfir_bypass_l2_delay_lane, txfir_bypass_l3_delay_lane, txfir_2_dig_clk_div_lane
  }
  else if (gen_tx==11){
    tmp3 = 0xB;// PLL_TS_LANE_REG12.BT.B2 = ###01011 , tx_pll_rate_sel_lane[4:0]
    tmp12 = 0x2;// ANA_TXSPEED_REG0.BT.B0 = #####010 , txspeed_div_lane[2:0]
    tmp14 = 0x2;// ANA_TXREG_REG0.BT.B0 = ####0010 , txreg_speedtrk_clk_lane[3:0]
    tmp15 = 0x2;// ANA_TXREG_REG1.BT.B0 = ####0010 , txreg_speedtrk_data_lane[3:0]
    tmp16 = 0x13;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = ##010011 , tx_train_pat_sel_lane[2:0], tx_data_width_lane[1:0], txdata_latency_reduce_en_lane
    tmp20 = 0x7;// ANA_TX_FIR_SPD_REG0.BT.B0 = ####0111 , txfir_bypass_l1_delay_lane, txfir_bypass_l2_delay_lane, txfir_bypass_l3_delay_lane, txfir_2_dig_clk_div_lane
  }
  else if (gen_tx==10){
    tmp3 = 0x6;// PLL_TS_LANE_REG12.BT.B2 = ###00110 , tx_pll_rate_sel_lane[4:0]
    tmp12 = 0x2;// ANA_TXSPEED_REG0.BT.B0 = #####010 , txspeed_div_lane[2:0]
    tmp14 = 0x2;// ANA_TXREG_REG0.BT.B0 = ####0010 , txreg_speedtrk_clk_lane[3:0]
    tmp15 = 0x2;// ANA_TXREG_REG1.BT.B0 = ####0010 , txreg_speedtrk_data_lane[3:0]
    tmp16 = 0x13;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = ##010011 , tx_train_pat_sel_lane[2:0], tx_data_width_lane[1:0], txdata_latency_reduce_en_lane
    tmp20 = 0x7;// ANA_TX_FIR_SPD_REG0.BT.B0 = ####0111 , txfir_bypass_l1_delay_lane, txfir_bypass_l2_delay_lane, txfir_bypass_l3_delay_lane, txfir_2_dig_clk_div_lane
  }
  else if (gen_tx==9){
    tmp12 = 0x2;// ANA_TXSPEED_REG0.BT.B0 = #####010 , txspeed_div_lane[2:0]
    tmp14 = 0x2;// ANA_TXREG_REG0.BT.B0 = ####0010 , txreg_speedtrk_clk_lane[3:0]
    tmp15 = 0x2;// ANA_TXREG_REG1.BT.B0 = ####0010 , txreg_speedtrk_data_lane[3:0]
    tmp16 = 0x13;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = ##010011 , tx_train_pat_sel_lane[2:0], tx_data_width_lane[1:0], txdata_latency_reduce_en_lane
    tmp20 = 0x7;// ANA_TX_FIR_SPD_REG0.BT.B0 = ####0111 , txfir_bypass_l1_delay_lane, txfir_bypass_l2_delay_lane, txfir_bypass_l3_delay_lane, txfir_2_dig_clk_div_lane
  }
  else if (gen_tx==8){
    tmp3 = 0x3;// PLL_TS_LANE_REG12.BT.B2 = ###00011 , tx_pll_rate_sel_lane[4:0]
    tmp12 = 0x2;// ANA_TXSPEED_REG0.BT.B0 = #####010 , txspeed_div_lane[2:0]
    tmp14 = 0x2;// ANA_TXREG_REG0.BT.B0 = ####0010 , txreg_speedtrk_clk_lane[3:0]
    tmp15 = 0x2;// ANA_TXREG_REG1.BT.B0 = ####0010 , txreg_speedtrk_data_lane[3:0]
    tmp16 = 0x13;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = ##010011 , tx_train_pat_sel_lane[2:0], tx_data_width_lane[1:0], txdata_latency_reduce_en_lane
    tmp20 = 0x7;// ANA_TX_FIR_SPD_REG0.BT.B0 = ####0111 , txfir_bypass_l1_delay_lane, txfir_bypass_l2_delay_lane, txfir_bypass_l3_delay_lane, txfir_2_dig_clk_div_lane
  }
  else if (gen_tx==7){
    tmp3 = 0x2;// PLL_TS_LANE_REG12.BT.B2 = ###00010 , tx_pll_rate_sel_lane[4:0]
    tmp12 = 0x2;// ANA_TXSPEED_REG0.BT.B0 = #####010 , txspeed_div_lane[2:0]
    tmp14 = 0x1;// ANA_TXREG_REG0.BT.B0 = ####0001 , txreg_speedtrk_clk_lane[3:0]
    tmp15 = 0x1;// ANA_TXREG_REG1.BT.B0 = ####0001 , txreg_speedtrk_data_lane[3:0]
    tmp16 = 0x13;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = ##010011 , tx_train_pat_sel_lane[2:0], tx_data_width_lane[1:0], txdata_latency_reduce_en_lane
    tmp20 = 0x7;// ANA_TX_FIR_SPD_REG0.BT.B0 = ####0111 , txfir_bypass_l1_delay_lane, txfir_bypass_l2_delay_lane, txfir_bypass_l3_delay_lane, txfir_2_dig_clk_div_lane
  }
  else if (gen_tx==6){
    tmp3 = 0xC;// PLL_TS_LANE_REG12.BT.B2 = ###01100 , tx_pll_rate_sel_lane[4:0]
    tmp12 = 0x3;// ANA_TXSPEED_REG0.BT.B0 = #####011 , txspeed_div_lane[2:0]
    tmp14 = 0x1;// ANA_TXREG_REG0.BT.B0 = ####0001 , txreg_speedtrk_clk_lane[3:0]
    tmp15 = 0x1;// ANA_TXREG_REG1.BT.B0 = ####0001 , txreg_speedtrk_data_lane[3:0]
    tmp16 = 0x13;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = ##010011 , tx_train_pat_sel_lane[2:0], tx_data_width_lane[1:0], txdata_latency_reduce_en_lane
    tmp20 = 0x7;// ANA_TX_FIR_SPD_REG0.BT.B0 = ####0111 , txfir_bypass_l1_delay_lane, txfir_bypass_l2_delay_lane, txfir_bypass_l3_delay_lane, txfir_2_dig_clk_div_lane
  }
  else if (gen_tx==5){
    tmp12 = 0x3;// ANA_TXSPEED_REG0.BT.B0 = #####011 , txspeed_div_lane[2:0]
    tmp14 = 0x1;// ANA_TXREG_REG0.BT.B0 = ####0001 , txreg_speedtrk_clk_lane[3:0]
    tmp15 = 0x1;// ANA_TXREG_REG1.BT.B0 = ####0001 , txreg_speedtrk_data_lane[3:0]
    tmp16 = 0x13;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = ##010011 , tx_train_pat_sel_lane[2:0], tx_data_width_lane[1:0], txdata_latency_reduce_en_lane
    tmp20 = 0x7;// ANA_TX_FIR_SPD_REG0.BT.B0 = ####0111 , txfir_bypass_l1_delay_lane, txfir_bypass_l2_delay_lane, txfir_bypass_l3_delay_lane, txfir_2_dig_clk_div_lane
  }
  else if (gen_tx==4){
    tmp3 = 0x3;// PLL_TS_LANE_REG12.BT.B2 = ###00011 , tx_pll_rate_sel_lane[4:0]
    tmp12 = 0x3;// ANA_TXSPEED_REG0.BT.B0 = #####011 , txspeed_div_lane[2:0]
    tmp14 = 0x1;// ANA_TXREG_REG0.BT.B0 = ####0001 , txreg_speedtrk_clk_lane[3:0]
    tmp15 = 0x1;// ANA_TXREG_REG1.BT.B0 = ####0001 , txreg_speedtrk_data_lane[3:0]
    tmp16 = 0x13;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = ##010011 , tx_train_pat_sel_lane[2:0], tx_data_width_lane[1:0], txdata_latency_reduce_en_lane
    tmp20 = 0x7;// ANA_TX_FIR_SPD_REG0.BT.B0 = ####0111 , txfir_bypass_l1_delay_lane, txfir_bypass_l2_delay_lane, txfir_bypass_l3_delay_lane, txfir_2_dig_clk_div_lane
  }
  else if (gen_tx==3){
    tmp3 = 0x2;// PLL_TS_LANE_REG12.BT.B2 = ###00010 , tx_pll_rate_sel_lane[4:0]
    tmp12 = 0x3;// ANA_TXSPEED_REG0.BT.B0 = #####011 , txspeed_div_lane[2:0]
    tmp14 = 0x1;// ANA_TXREG_REG0.BT.B0 = ####0001 , txreg_speedtrk_clk_lane[3:0]
    tmp15 = 0x1;// ANA_TXREG_REG1.BT.B0 = ####0001 , txreg_speedtrk_data_lane[3:0]
    tmp16 = 0x13;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = ##010011 , tx_train_pat_sel_lane[2:0], tx_data_width_lane[1:0], txdata_latency_reduce_en_lane
    tmp20 = 0xF;// ANA_TX_FIR_SPD_REG0.BT.B0 = ####1111 , txfir_bypass_l1_delay_lane, txfir_bypass_l2_delay_lane, txfir_bypass_l3_delay_lane, txfir_2_dig_clk_div_lane
  }
  else if (gen_tx==2){
    tmp12 = 0x4;// ANA_TXSPEED_REG0.BT.B0 = #####100 , txspeed_div_lane[2:0]
    tmp14 = 0x1;// ANA_TXREG_REG0.BT.B0 = ####0001 , txreg_speedtrk_clk_lane[3:0]
    tmp15 = 0x1;// ANA_TXREG_REG1.BT.B0 = ####0001 , txreg_speedtrk_data_lane[3:0]
    tmp16 = 0x13;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = ##010011 , tx_train_pat_sel_lane[2:0], tx_data_width_lane[1:0], txdata_latency_reduce_en_lane
    tmp20 = 0xF;// ANA_TX_FIR_SPD_REG0.BT.B0 = ####1111 , txfir_bypass_l1_delay_lane, txfir_bypass_l2_delay_lane, txfir_bypass_l3_delay_lane, txfir_2_dig_clk_div_lane
  }
  else if (gen_tx==1){
    tmp3 = 0x3;// PLL_TS_LANE_REG12.BT.B2 = ###00011 , tx_pll_rate_sel_lane[4:0]
    tmp12 = 0x4;// ANA_TXSPEED_REG0.BT.B0 = #####100 , txspeed_div_lane[2:0]
    tmp14 = 0x1;// ANA_TXREG_REG0.BT.B0 = ####0001 , txreg_speedtrk_clk_lane[3:0]
    tmp15 = 0x1;// ANA_TXREG_REG1.BT.B0 = ####0001 , txreg_speedtrk_data_lane[3:0]
    tmp16 = 0x13;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = ##010011 , tx_train_pat_sel_lane[2:0], tx_data_width_lane[1:0], txdata_latency_reduce_en_lane
    tmp20 = 0xF;// ANA_TX_FIR_SPD_REG0.BT.B0 = ####1111 , txfir_bypass_l1_delay_lane, txfir_bypass_l2_delay_lane, txfir_bypass_l3_delay_lane, txfir_2_dig_clk_div_lane
  }
  else if (gen_tx==0){
    tmp3 = 0x2;// PLL_TS_LANE_REG12.BT.B2 = ###00010 , tx_pll_rate_sel_lane[4:0]
    tmp12 = 0x4;// ANA_TXSPEED_REG0.BT.B0 = #####100 , txspeed_div_lane[2:0]
    tmp14 = 0x1;// ANA_TXREG_REG0.BT.B0 = ####0001 , txreg_speedtrk_clk_lane[3:0]
    tmp15 = 0x1;// ANA_TXREG_REG1.BT.B0 = ####0001 , txreg_speedtrk_data_lane[3:0]
    tmp16 = 0x13;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = ##010011 , tx_train_pat_sel_lane[2:0], tx_data_width_lane[1:0], txdata_latency_reduce_en_lane
    tmp20 = 0xF;// ANA_TX_FIR_SPD_REG0.BT.B0 = ####1111 , txfir_bypass_l1_delay_lane, txfir_bypass_l2_delay_lane, txfir_bypass_l3_delay_lane, txfir_2_dig_clk_div_lane
    tmp25 = 0x80;// TX_TRAINING_IF_REG3.BT.B3 = 1####### , tx_train_pat_two_zero_lane
  }
  TX_TRAIN_DEFAULT1.BT.B0 = tmp0;
  TX_TRAIN_DEFAULT1.BT.B1 = tmp1;
  TX_TRAIN_DEFAULT1.BT.B2 = tmp2;
  PLL_TS_LANE_REG12.BT.B2 = tmp3;
  TX_RSVD_REG0.BT.B0 = tmp4;
  ANA_EOM_REG4.BT.B0 = tmp5;
  TX_SYSTEM_LANE1.BT.B3 = tmp6;
  TX_TRAIN_DRIVER_REG1.BT.B0 = tmp7;
  TX_TRAIN_DRIVER_REG1.BT.B2 = tmp8;
  TX_TRAIN_DEFAULT4.BT.B0 = tmp9;
  TX_TRAIN_DEFAULT4.BT.B1 = tmp10;
  TX_TRAIN_DEFAULT4.BT.B2 = tmp11;
  ANA_TXSPEED_REG0.BT.B0 = tmp12;
  TX_TRAIN_DRIVER_REG2.BT.B0 = tmp13;
  ANA_TXREG_REG0.BT.B0 = tmp14;
  ANA_TXREG_REG1.BT.B0 = tmp15;
  CLKGEN_TX_LANE_REG1_LANE.BT.B0 = tmp16;
  TX_TRAIN_DEFAULT3.BT.B0 = tmp17;
  TX_TRAIN_DEFAULT3.BT.B1 = tmp18;
  TX_TRAIN_DEFAULT3.BT.B2 = tmp19;
  ANA_TX_FIR_SPD_REG0.BT.B0 = tmp20;
  TX_TRAIN_DEFAULT2.BT.B0 = tmp21;
  TX_TRAIN_DEFAULT2.BT.B1 = tmp22;
  TX_TRAIN_DEFAULT2.BT.B2 = tmp23;
  TX_TRAINING_IF_REG3.BT.B0 = tmp24;
  TX_TRAINING_IF_REG3.BT.B3 = tmp25;
}
#endif //_SERDES_BUILD
