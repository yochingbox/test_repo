#include "common.h"
#ifdef USE_BANKING
#pragma codeseg BANK3
#endif
#ifdef _SERDES_BUILD
void loadspeedtbl_rx() BANKING_CTRL {
  uint8_t tmp0 = 0x3; //RX_SYSTEM_LANE.BT.B0 , rx_width_half_sel_lane, rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
  uint8_t tmp1 = 0x11; //RX_EQ_REG0.BT.B0 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
  uint8_t tmp2 = 0x5; //ANA_RX_PI_REG1.BT.B0 , rx_pi_icc_ctrl_lane[3:0]
  uint8_t tmp3 = 0x0; //RX_TOP_ANA_REG_35.BT.B0 , rx_ctle_cs2_ctrl_lane[4:0]
  uint8_t tmp4 = 0xA0; //RX_TOP_ANA_REG_34.BT.B0 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
  uint8_t tmp5 = 0x3; //PLL_RS_LANE_REG12.BT.B2 , rx_pll_rate_sel_lane[4:0]
  uint8_t tmp6 = 0x7; //ANA_RX_PI_REG0.BT.B0 , rx_pi_icclow_ctrl_lane[3:0]
  uint8_t tmp7 = 0x58; //RX_TOP_ANA_REG_39.BT.B0 , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
  uint8_t tmp8 = 0x0; //RX_TOP_ANA_REG_37.BT.B0 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
  uint8_t tmp9 = 0x32; //RX_TOP_ANA_REG_38.BT.B0 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
  uint8_t tmp10 = 0x0; //RX_TOP_ANA_REG_33.BT.B0 , rx_ctle_cs1_ctrl_lane[5:0]
  uint8_t tmp11 = 0x80; //RX_TOP_ANA_REG_36.BT.B0 , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
  uint8_t tmp12 = 0x4; //TX_TRAIN_PATTTERN_REG0.BT.B1 , ethernet_mode_lane[1:0], train_pat_num_lane[9:0]
  uint8_t tmp13 = 0x0; //RX_TOP_ANA_REG_32.BT.B0 , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  if (gen_rx==48){
    tmp0 = 0x5;// RX_SYSTEM_LANE.BT.B0 = ####0101 , rx_width_half_sel_lane, rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp1 = 0x22;// RX_EQ_REG0.BT.B0 = ##100010 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp2 = 0x2;// ANA_RX_PI_REG1.BT.B0 = ####0010 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0x30;// RX_TOP_ANA_REG_35.BT.B0 = 00110### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0x93;// RX_TOP_ANA_REG_34.BT.B0 = 10010011 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0x18;// PLL_RS_LANE_REG12.BT.B2 = ###11000 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0x4;// ANA_RX_PI_REG0.BT.B0 = ####0100 , rx_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x2A;// RX_TOP_ANA_REG_39.BT.B0 = 0010101# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x33;// RX_TOP_ANA_REG_37.BT.B0 = 00110011 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x53;// RX_TOP_ANA_REG_38.BT.B0 = 01010011 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x30;// RX_TOP_ANA_REG_33.BT.B0 = 001100## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x70;// RX_TOP_ANA_REG_36.BT.B0 = 0111000# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp12 = 0x8;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####10## , ethernet_mode_lane[1:0], train_pat_num_lane[9:0]
    tmp13 = 0xC;// RX_TOP_ANA_REG_32.BT.B0 = 000011## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==47){
    tmp0 = 0x2;// RX_SYSTEM_LANE.BT.B0 = ####0010 , rx_width_half_sel_lane, rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp1 = 0x32;// RX_EQ_REG0.BT.B0 = ##110010 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp2 = 0x2;// ANA_RX_PI_REG1.BT.B0 = ####0010 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0x40;// RX_TOP_ANA_REG_35.BT.B0 = 01000### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0x94;// RX_TOP_ANA_REG_34.BT.B0 = 10010100 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0x0;// PLL_RS_LANE_REG12.BT.B2 = ###00000 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0x4;// ANA_RX_PI_REG0.BT.B0 = ####0100 , rx_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x2A;// RX_TOP_ANA_REG_39.BT.B0 = 0010101# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x44;// RX_TOP_ANA_REG_37.BT.B0 = 01000100 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0xA7;// RX_TOP_ANA_REG_38.BT.B0 = 10100111 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x40;// RX_TOP_ANA_REG_33.BT.B0 = 010000## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x72;// RX_TOP_ANA_REG_36.BT.B0 = 0111001# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp13 = 0x10;// RX_TOP_ANA_REG_32.BT.B0 = 000100## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==46){
    tmp1 = 0x14;// RX_EQ_REG0.BT.B0 = ##010100 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp5 = 0x6;// PLL_RS_LANE_REG12.BT.B2 = ###00110 , rx_pll_rate_sel_lane[4:0]
    tmp7 = 0x64;// RX_TOP_ANA_REG_39.BT.B0 = 0110010# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
  }
  else if (gen_rx==45){
    tmp0 = 0x6;// RX_SYSTEM_LANE.BT.B0 = ####0110 , rx_width_half_sel_lane, rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp1 = 0x23;// RX_EQ_REG0.BT.B0 = ##100011 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp2 = 0x2;// ANA_RX_PI_REG1.BT.B0 = ####0010 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0x80;// RX_TOP_ANA_REG_35.BT.B0 = 10000### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0x88;// RX_TOP_ANA_REG_34.BT.B0 = 10001000 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0x16;// PLL_RS_LANE_REG12.BT.B2 = ###10110 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0x4;// ANA_RX_PI_REG0.BT.B0 = ####0100 , rx_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x28;// RX_TOP_ANA_REG_39.BT.B0 = 0010100# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x88;// RX_TOP_ANA_REG_37.BT.B0 = 10001000 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x67;// RX_TOP_ANA_REG_38.BT.B0 = 01100111 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x80;// RX_TOP_ANA_REG_33.BT.B0 = 100000## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x64;// RX_TOP_ANA_REG_36.BT.B0 = 0110010# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp12 = 0x8;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####10## , ethernet_mode_lane[1:0], train_pat_num_lane[9:0]
    tmp13 = 0x20;// RX_TOP_ANA_REG_32.BT.B0 = 001000## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==44){
    tmp0 = 0x6;// RX_SYSTEM_LANE.BT.B0 = ####0110 , rx_width_half_sel_lane, rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp1 = 0x23;// RX_EQ_REG0.BT.B0 = ##100011 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp2 = 0x2;// ANA_RX_PI_REG1.BT.B0 = ####0010 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0x80;// RX_TOP_ANA_REG_35.BT.B0 = 10000### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0x88;// RX_TOP_ANA_REG_34.BT.B0 = 10001000 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0x15;// PLL_RS_LANE_REG12.BT.B2 = ###10101 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0x4;// ANA_RX_PI_REG0.BT.B0 = ####0100 , rx_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x28;// RX_TOP_ANA_REG_39.BT.B0 = 0010100# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x88;// RX_TOP_ANA_REG_37.BT.B0 = 10001000 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x67;// RX_TOP_ANA_REG_38.BT.B0 = 01100111 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x80;// RX_TOP_ANA_REG_33.BT.B0 = 100000## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x64;// RX_TOP_ANA_REG_36.BT.B0 = 0110010# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp12 = 0x8;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####10## , ethernet_mode_lane[1:0], train_pat_num_lane[9:0]
    tmp13 = 0x20;// RX_TOP_ANA_REG_32.BT.B0 = 001000## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==43){
    tmp0 = 0x4;// RX_SYSTEM_LANE.BT.B0 = ####0100 , rx_width_half_sel_lane, rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp1 = 0x33;// RX_EQ_REG0.BT.B0 = ##110011 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp2 = 0x2;// ANA_RX_PI_REG1.BT.B0 = ####0010 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0x80;// RX_TOP_ANA_REG_35.BT.B0 = 10000### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0x88;// RX_TOP_ANA_REG_34.BT.B0 = 10001000 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0x16;// PLL_RS_LANE_REG12.BT.B2 = ###10110 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0x4;// ANA_RX_PI_REG0.BT.B0 = ####0100 , rx_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x28;// RX_TOP_ANA_REG_39.BT.B0 = 0010100# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x88;// RX_TOP_ANA_REG_37.BT.B0 = 10001000 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x67;// RX_TOP_ANA_REG_38.BT.B0 = 01100111 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x80;// RX_TOP_ANA_REG_33.BT.B0 = 100000## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x64;// RX_TOP_ANA_REG_36.BT.B0 = 0110010# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp13 = 0x20;// RX_TOP_ANA_REG_32.BT.B0 = 001000## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==42){
    tmp0 = 0x4;// RX_SYSTEM_LANE.BT.B0 = ####0100 , rx_width_half_sel_lane, rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp1 = 0x33;// RX_EQ_REG0.BT.B0 = ##110011 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp2 = 0x2;// ANA_RX_PI_REG1.BT.B0 = ####0010 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0x80;// RX_TOP_ANA_REG_35.BT.B0 = 10000### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0x88;// RX_TOP_ANA_REG_34.BT.B0 = 10001000 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0x15;// PLL_RS_LANE_REG12.BT.B2 = ###10101 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0x4;// ANA_RX_PI_REG0.BT.B0 = ####0100 , rx_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x28;// RX_TOP_ANA_REG_39.BT.B0 = 0010100# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x88;// RX_TOP_ANA_REG_37.BT.B0 = 10001000 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x67;// RX_TOP_ANA_REG_38.BT.B0 = 01100111 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x80;// RX_TOP_ANA_REG_33.BT.B0 = 100000## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x64;// RX_TOP_ANA_REG_36.BT.B0 = 0110010# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp13 = 0x20;// RX_TOP_ANA_REG_32.BT.B0 = 001000## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==41){
    tmp0 = 0x6;// RX_SYSTEM_LANE.BT.B0 = ####0110 , rx_width_half_sel_lane, rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp1 = 0x3;// RX_EQ_REG0.BT.B0 = ##000011 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp2 = 0xB;// ANA_RX_PI_REG1.BT.B0 = ####1011 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0xF8;// RX_TOP_ANA_REG_35.BT.B0 = 11111### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0x6F;// RX_TOP_ANA_REG_34.BT.B0 = 01101111 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0x14;// PLL_RS_LANE_REG12.BT.B2 = ###10100 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0xB;// ANA_RX_PI_REG0.BT.B0 = ####1011 , rx_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0xFF;// RX_TOP_ANA_REG_37.BT.B0 = 11111111 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x6C;// RX_TOP_ANA_REG_38.BT.B0 = 01101100 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0xFC;// RX_TOP_ANA_REG_33.BT.B0 = 111111## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x46;// RX_TOP_ANA_REG_36.BT.B0 = 0100011# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp12 = 0x8;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####10## , ethernet_mode_lane[1:0], train_pat_num_lane[9:0]
    tmp13 = 0x3C;// RX_TOP_ANA_REG_32.BT.B0 = 001111## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==40){
    tmp0 = 0x6;// RX_SYSTEM_LANE.BT.B0 = ####0110 , rx_width_half_sel_lane, rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp1 = 0x3;// RX_EQ_REG0.BT.B0 = ##000011 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp2 = 0xB;// ANA_RX_PI_REG1.BT.B0 = ####1011 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0xF8;// RX_TOP_ANA_REG_35.BT.B0 = 11111### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0x6F;// RX_TOP_ANA_REG_34.BT.B0 = 01101111 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0x12;// PLL_RS_LANE_REG12.BT.B2 = ###10010 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0xB;// ANA_RX_PI_REG0.BT.B0 = ####1011 , rx_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0xFF;// RX_TOP_ANA_REG_37.BT.B0 = 11111111 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x6C;// RX_TOP_ANA_REG_38.BT.B0 = 01101100 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0xFC;// RX_TOP_ANA_REG_33.BT.B0 = 111111## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x46;// RX_TOP_ANA_REG_36.BT.B0 = 0100011# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp12 = 0x8;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####10## , ethernet_mode_lane[1:0], train_pat_num_lane[9:0]
    tmp13 = 0x3C;// RX_TOP_ANA_REG_32.BT.B0 = 001111## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==39){
    tmp0 = 0x6;// RX_SYSTEM_LANE.BT.B0 = ####0110 , rx_width_half_sel_lane, rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp1 = 0x3;// RX_EQ_REG0.BT.B0 = ##000011 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp2 = 0xB;// ANA_RX_PI_REG1.BT.B0 = ####1011 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0xF8;// RX_TOP_ANA_REG_35.BT.B0 = 11111### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0x6F;// RX_TOP_ANA_REG_34.BT.B0 = 01101111 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0x10;// PLL_RS_LANE_REG12.BT.B2 = ###10000 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0xB;// ANA_RX_PI_REG0.BT.B0 = ####1011 , rx_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0xFF;// RX_TOP_ANA_REG_37.BT.B0 = 11111111 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x6C;// RX_TOP_ANA_REG_38.BT.B0 = 01101100 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0xFC;// RX_TOP_ANA_REG_33.BT.B0 = 111111## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x46;// RX_TOP_ANA_REG_36.BT.B0 = 0100011# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp12 = 0x8;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####10## , ethernet_mode_lane[1:0], train_pat_num_lane[9:0]
    tmp13 = 0x3C;// RX_TOP_ANA_REG_32.BT.B0 = 001111## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==38){
    tmp0 = 0x4;// RX_SYSTEM_LANE.BT.B0 = ####0100 , rx_width_half_sel_lane, rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp1 = 0x2;// RX_EQ_REG0.BT.B0 = ##000010 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp2 = 0xB;// ANA_RX_PI_REG1.BT.B0 = ####1011 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0x80;// RX_TOP_ANA_REG_35.BT.B0 = 10000### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0x88;// RX_TOP_ANA_REG_34.BT.B0 = 10001000 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0x14;// PLL_RS_LANE_REG12.BT.B2 = ###10100 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0xB;// ANA_RX_PI_REG0.BT.B0 = ####1011 , rx_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0x88;// RX_TOP_ANA_REG_37.BT.B0 = 10001000 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x64;// RX_TOP_ANA_REG_38.BT.B0 = 01100100 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x80;// RX_TOP_ANA_REG_33.BT.B0 = 100000## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x64;// RX_TOP_ANA_REG_36.BT.B0 = 0110010# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp12 = 0x8;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####10## , ethernet_mode_lane[1:0], train_pat_num_lane[9:0]
    tmp13 = 0x20;// RX_TOP_ANA_REG_32.BT.B0 = 001000## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==37){
    tmp0 = 0x4;// RX_SYSTEM_LANE.BT.B0 = ####0100 , rx_width_half_sel_lane, rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp1 = 0x2;// RX_EQ_REG0.BT.B0 = ##000010 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp2 = 0xB;// ANA_RX_PI_REG1.BT.B0 = ####1011 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0x80;// RX_TOP_ANA_REG_35.BT.B0 = 10000### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0x88;// RX_TOP_ANA_REG_34.BT.B0 = 10001000 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0x13;// PLL_RS_LANE_REG12.BT.B2 = ###10011 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0xB;// ANA_RX_PI_REG0.BT.B0 = ####1011 , rx_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0x88;// RX_TOP_ANA_REG_37.BT.B0 = 10001000 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x64;// RX_TOP_ANA_REG_38.BT.B0 = 01100100 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x80;// RX_TOP_ANA_REG_33.BT.B0 = 100000## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x64;// RX_TOP_ANA_REG_36.BT.B0 = 0110010# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp12 = 0x8;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####10## , ethernet_mode_lane[1:0], train_pat_num_lane[9:0]
    tmp13 = 0x20;// RX_TOP_ANA_REG_32.BT.B0 = 001000## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==36){
    tmp0 = 0x4;// RX_SYSTEM_LANE.BT.B0 = ####0100 , rx_width_half_sel_lane, rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp1 = 0x13;// RX_EQ_REG0.BT.B0 = ##010011 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp2 = 0xB;// ANA_RX_PI_REG1.BT.B0 = ####1011 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0xF8;// RX_TOP_ANA_REG_35.BT.B0 = 11111### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0x6F;// RX_TOP_ANA_REG_34.BT.B0 = 01101111 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0x12;// PLL_RS_LANE_REG12.BT.B2 = ###10010 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0xB;// ANA_RX_PI_REG0.BT.B0 = ####1011 , rx_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0xFF;// RX_TOP_ANA_REG_37.BT.B0 = 11111111 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x6C;// RX_TOP_ANA_REG_38.BT.B0 = 01101100 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0xFC;// RX_TOP_ANA_REG_33.BT.B0 = 111111## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x46;// RX_TOP_ANA_REG_36.BT.B0 = 0100011# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp13 = 0x3C;// RX_TOP_ANA_REG_32.BT.B0 = 001111## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==35){
    tmp0 = 0x4;// RX_SYSTEM_LANE.BT.B0 = ####0100 , rx_width_half_sel_lane, rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp1 = 0x2;// RX_EQ_REG0.BT.B0 = ##000010 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp2 = 0xB;// ANA_RX_PI_REG1.BT.B0 = ####1011 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0x70;// RX_TOP_ANA_REG_35.BT.B0 = 01110### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0x87;// RX_TOP_ANA_REG_34.BT.B0 = 10000111 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0x10;// PLL_RS_LANE_REG12.BT.B2 = ###10000 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0xB;// ANA_RX_PI_REG0.BT.B0 = ####1011 , rx_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0x77;// RX_TOP_ANA_REG_37.BT.B0 = 01110111 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x74;// RX_TOP_ANA_REG_38.BT.B0 = 01110100 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x70;// RX_TOP_ANA_REG_33.BT.B0 = 011100## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x62;// RX_TOP_ANA_REG_36.BT.B0 = 0110001# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp12 = 0x8;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####10## , ethernet_mode_lane[1:0], train_pat_num_lane[9:0]
    tmp13 = 0x1C;// RX_TOP_ANA_REG_32.BT.B0 = 000111## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==34){
    tmp0 = 0x4;// RX_SYSTEM_LANE.BT.B0 = ####0100 , rx_width_half_sel_lane, rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp1 = 0x2;// RX_EQ_REG0.BT.B0 = ##000010 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp2 = 0xB;// ANA_RX_PI_REG1.BT.B0 = ####1011 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0x70;// RX_TOP_ANA_REG_35.BT.B0 = 01110### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0x87;// RX_TOP_ANA_REG_34.BT.B0 = 10000111 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0xE;// PLL_RS_LANE_REG12.BT.B2 = ###01110 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0xB;// ANA_RX_PI_REG0.BT.B0 = ####1011 , rx_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0x77;// RX_TOP_ANA_REG_37.BT.B0 = 01110111 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x74;// RX_TOP_ANA_REG_38.BT.B0 = 01110100 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x70;// RX_TOP_ANA_REG_33.BT.B0 = 011100## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x62;// RX_TOP_ANA_REG_36.BT.B0 = 0110001# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp12 = 0x8;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####10## , ethernet_mode_lane[1:0], train_pat_num_lane[9:0]
    tmp13 = 0x1C;// RX_TOP_ANA_REG_32.BT.B0 = 000111## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==33){
    tmp0 = 0x4;// RX_SYSTEM_LANE.BT.B0 = ####0100 , rx_width_half_sel_lane, rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp1 = 0x13;// RX_EQ_REG0.BT.B0 = ##010011 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp2 = 0x8;// ANA_RX_PI_REG1.BT.B0 = ####1000 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0xE0;// RX_TOP_ANA_REG_35.BT.B0 = 11100### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0x6E;// RX_TOP_ANA_REG_34.BT.B0 = 01101110 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0xC;// PLL_RS_LANE_REG12.BT.B2 = ###01100 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0x9;// ANA_RX_PI_REG0.BT.B0 = ####1001 , rx_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x60;// RX_TOP_ANA_REG_39.BT.B0 = 0110000# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0xEE;// RX_TOP_ANA_REG_37.BT.B0 = 11101110 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x6D;// RX_TOP_ANA_REG_38.BT.B0 = 01101101 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0xE0;// RX_TOP_ANA_REG_33.BT.B0 = 111000## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x46;// RX_TOP_ANA_REG_36.BT.B0 = 0100011# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp13 = 0x38;// RX_TOP_ANA_REG_32.BT.B0 = 001110## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==32){
    tmp0 = 0x4;// RX_SYSTEM_LANE.BT.B0 = ####0100 , rx_width_half_sel_lane, rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp1 = 0x2;// RX_EQ_REG0.BT.B0 = ##000010 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp2 = 0x8;// ANA_RX_PI_REG1.BT.B0 = ####1000 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0x60;// RX_TOP_ANA_REG_35.BT.B0 = 01100### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0x86;// RX_TOP_ANA_REG_34.BT.B0 = 10000110 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0x8;// PLL_RS_LANE_REG12.BT.B2 = ###01000 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0x9;// ANA_RX_PI_REG0.BT.B0 = ####1001 , rx_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x60;// RX_TOP_ANA_REG_39.BT.B0 = 0110000# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x66;// RX_TOP_ANA_REG_37.BT.B0 = 01100110 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x85;// RX_TOP_ANA_REG_38.BT.B0 = 10000101 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x60;// RX_TOP_ANA_REG_33.BT.B0 = 011000## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x62;// RX_TOP_ANA_REG_36.BT.B0 = 0110001# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp12 = 0x8;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####10## , ethernet_mode_lane[1:0], train_pat_num_lane[9:0]
    tmp13 = 0x18;// RX_TOP_ANA_REG_32.BT.B0 = 000110## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==31){
    tmp0 = 0x4;// RX_SYSTEM_LANE.BT.B0 = ####0100 , rx_width_half_sel_lane, rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp1 = 0x2;// RX_EQ_REG0.BT.B0 = ##000010 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp2 = 0x2;// ANA_RX_PI_REG1.BT.B0 = ####0010 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0x40;// RX_TOP_ANA_REG_35.BT.B0 = 01000### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0x94;// RX_TOP_ANA_REG_34.BT.B0 = 10010100 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0x1;// PLL_RS_LANE_REG12.BT.B2 = ###00001 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0x4;// ANA_RX_PI_REG0.BT.B0 = ####0100 , rx_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x6A;// RX_TOP_ANA_REG_39.BT.B0 = 0110101# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x44;// RX_TOP_ANA_REG_37.BT.B0 = 01000100 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0xA7;// RX_TOP_ANA_REG_38.BT.B0 = 10100111 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x40;// RX_TOP_ANA_REG_33.BT.B0 = 010000## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x72;// RX_TOP_ANA_REG_36.BT.B0 = 0111001# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp12 = 0x8;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####10## , ethernet_mode_lane[1:0], train_pat_num_lane[9:0]
    tmp13 = 0x10;// RX_TOP_ANA_REG_32.BT.B0 = 000100## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==30){
    tmp0 = 0x2;// RX_SYSTEM_LANE.BT.B0 = ####0010 , rx_width_half_sel_lane, rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp1 = 0x12;// RX_EQ_REG0.BT.B0 = ##010010 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp2 = 0xB;// ANA_RX_PI_REG1.BT.B0 = ####1011 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0x80;// RX_TOP_ANA_REG_35.BT.B0 = 10000### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0x88;// RX_TOP_ANA_REG_34.BT.B0 = 10001000 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0x14;// PLL_RS_LANE_REG12.BT.B2 = ###10100 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0xB;// ANA_RX_PI_REG0.BT.B0 = ####1011 , rx_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0x88;// RX_TOP_ANA_REG_37.BT.B0 = 10001000 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x64;// RX_TOP_ANA_REG_38.BT.B0 = 01100100 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x80;// RX_TOP_ANA_REG_33.BT.B0 = 100000## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x64;// RX_TOP_ANA_REG_36.BT.B0 = 0110010# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp13 = 0x20;// RX_TOP_ANA_REG_32.BT.B0 = 001000## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==29){
    tmp0 = 0x2;// RX_SYSTEM_LANE.BT.B0 = ####0010 , rx_width_half_sel_lane, rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp1 = 0x12;// RX_EQ_REG0.BT.B0 = ##010010 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp2 = 0xB;// ANA_RX_PI_REG1.BT.B0 = ####1011 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0x80;// RX_TOP_ANA_REG_35.BT.B0 = 10000### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0x88;// RX_TOP_ANA_REG_34.BT.B0 = 10001000 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0x13;// PLL_RS_LANE_REG12.BT.B2 = ###10011 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0xB;// ANA_RX_PI_REG0.BT.B0 = ####1011 , rx_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0x88;// RX_TOP_ANA_REG_37.BT.B0 = 10001000 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x64;// RX_TOP_ANA_REG_38.BT.B0 = 01100100 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x80;// RX_TOP_ANA_REG_33.BT.B0 = 100000## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x64;// RX_TOP_ANA_REG_36.BT.B0 = 0110010# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp13 = 0x20;// RX_TOP_ANA_REG_32.BT.B0 = 001000## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==28){
    tmp0 = 0x2;// RX_SYSTEM_LANE.BT.B0 = ####0010 , rx_width_half_sel_lane, rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp1 = 0x12;// RX_EQ_REG0.BT.B0 = ##010010 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp2 = 0xB;// ANA_RX_PI_REG1.BT.B0 = ####1011 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0x70;// RX_TOP_ANA_REG_35.BT.B0 = 01110### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0x87;// RX_TOP_ANA_REG_34.BT.B0 = 10000111 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0x11;// PLL_RS_LANE_REG12.BT.B2 = ###10001 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0xB;// ANA_RX_PI_REG0.BT.B0 = ####1011 , rx_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0x77;// RX_TOP_ANA_REG_37.BT.B0 = 01110111 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x74;// RX_TOP_ANA_REG_38.BT.B0 = 01110100 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x70;// RX_TOP_ANA_REG_33.BT.B0 = 011100## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x62;// RX_TOP_ANA_REG_36.BT.B0 = 0110001# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp13 = 0x1C;// RX_TOP_ANA_REG_32.BT.B0 = 000111## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==27){
    tmp0 = 0x2;// RX_SYSTEM_LANE.BT.B0 = ####0010 , rx_width_half_sel_lane, rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp1 = 0x12;// RX_EQ_REG0.BT.B0 = ##010010 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp2 = 0xB;// ANA_RX_PI_REG1.BT.B0 = ####1011 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0x70;// RX_TOP_ANA_REG_35.BT.B0 = 01110### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0x87;// RX_TOP_ANA_REG_34.BT.B0 = 10000111 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0x10;// PLL_RS_LANE_REG12.BT.B2 = ###10000 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0xB;// ANA_RX_PI_REG0.BT.B0 = ####1011 , rx_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0x77;// RX_TOP_ANA_REG_37.BT.B0 = 01110111 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x74;// RX_TOP_ANA_REG_38.BT.B0 = 01110100 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x70;// RX_TOP_ANA_REG_33.BT.B0 = 011100## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x62;// RX_TOP_ANA_REG_36.BT.B0 = 0110001# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp13 = 0x1C;// RX_TOP_ANA_REG_32.BT.B0 = 000111## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==26){
    tmp0 = 0x2;// RX_SYSTEM_LANE.BT.B0 = ####0010 , rx_width_half_sel_lane, rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp1 = 0x12;// RX_EQ_REG0.BT.B0 = ##010010 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp2 = 0xB;// ANA_RX_PI_REG1.BT.B0 = ####1011 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0x70;// RX_TOP_ANA_REG_35.BT.B0 = 01110### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0x87;// RX_TOP_ANA_REG_34.BT.B0 = 10000111 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0xE;// PLL_RS_LANE_REG12.BT.B2 = ###01110 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0xB;// ANA_RX_PI_REG0.BT.B0 = ####1011 , rx_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0x77;// RX_TOP_ANA_REG_37.BT.B0 = 01110111 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x74;// RX_TOP_ANA_REG_38.BT.B0 = 01110100 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x70;// RX_TOP_ANA_REG_33.BT.B0 = 011100## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x62;// RX_TOP_ANA_REG_36.BT.B0 = 0110001# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp13 = 0x1C;// RX_TOP_ANA_REG_32.BT.B0 = 000111## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==25){
    tmp0 = 0x2;// RX_SYSTEM_LANE.BT.B0 = ####0010 , rx_width_half_sel_lane, rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp1 = 0x12;// RX_EQ_REG0.BT.B0 = ##010010 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp2 = 0x8;// ANA_RX_PI_REG1.BT.B0 = ####1000 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0x60;// RX_TOP_ANA_REG_35.BT.B0 = 01100### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0x86;// RX_TOP_ANA_REG_34.BT.B0 = 10000110 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0x9;// PLL_RS_LANE_REG12.BT.B2 = ###01001 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0x9;// ANA_RX_PI_REG0.BT.B0 = ####1001 , rx_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x60;// RX_TOP_ANA_REG_39.BT.B0 = 0110000# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x66;// RX_TOP_ANA_REG_37.BT.B0 = 01100110 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x85;// RX_TOP_ANA_REG_38.BT.B0 = 10000101 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x60;// RX_TOP_ANA_REG_33.BT.B0 = 011000## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x62;// RX_TOP_ANA_REG_36.BT.B0 = 0110001# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp13 = 0x18;// RX_TOP_ANA_REG_32.BT.B0 = 000110## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==24){
    tmp0 = 0x2;// RX_SYSTEM_LANE.BT.B0 = ####0010 , rx_width_half_sel_lane, rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp1 = 0x12;// RX_EQ_REG0.BT.B0 = ##010010 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp3 = 0x50;// RX_TOP_ANA_REG_35.BT.B0 = 01010### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0x95;// RX_TOP_ANA_REG_34.BT.B0 = 10010101 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0x6;// PLL_RS_LANE_REG12.BT.B2 = ###00110 , rx_pll_rate_sel_lane[4:0]
    tmp7 = 0x60;// RX_TOP_ANA_REG_39.BT.B0 = 0110000# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x55;// RX_TOP_ANA_REG_37.BT.B0 = 01010101 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x96;// RX_TOP_ANA_REG_38.BT.B0 = 10010110 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x50;// RX_TOP_ANA_REG_33.BT.B0 = 010100## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x62;// RX_TOP_ANA_REG_36.BT.B0 = 0110001# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp13 = 0x14;// RX_TOP_ANA_REG_32.BT.B0 = 000101## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==23){
    tmp0 = 0x2;// RX_SYSTEM_LANE.BT.B0 = ####0010 , rx_width_half_sel_lane, rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp1 = 0x32;// RX_EQ_REG0.BT.B0 = ##110010 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp2 = 0x2;// ANA_RX_PI_REG1.BT.B0 = ####0010 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0x40;// RX_TOP_ANA_REG_35.BT.B0 = 01000### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0x94;// RX_TOP_ANA_REG_34.BT.B0 = 10010100 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0x15;// PLL_RS_LANE_REG12.BT.B2 = ###10101 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0x4;// ANA_RX_PI_REG0.BT.B0 = ####0100 , rx_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x2A;// RX_TOP_ANA_REG_39.BT.B0 = 0010101# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x44;// RX_TOP_ANA_REG_37.BT.B0 = 01000100 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0xA7;// RX_TOP_ANA_REG_38.BT.B0 = 10100111 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x40;// RX_TOP_ANA_REG_33.BT.B0 = 010000## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x72;// RX_TOP_ANA_REG_36.BT.B0 = 0111001# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp13 = 0x10;// RX_TOP_ANA_REG_32.BT.B0 = 000100## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==22){
    tmp2 = 0xB;// ANA_RX_PI_REG1.BT.B0 = ####1011 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0x30;// RX_TOP_ANA_REG_35.BT.B0 = 00110### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0x93;// RX_TOP_ANA_REG_34.BT.B0 = 10010011 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0xD;// PLL_RS_LANE_REG12.BT.B2 = ###01101 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0xB;// ANA_RX_PI_REG0.BT.B0 = ####1011 , rx_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x5A;// RX_TOP_ANA_REG_39.BT.B0 = 0101101# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x33;// RX_TOP_ANA_REG_37.BT.B0 = 00110011 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x50;// RX_TOP_ANA_REG_38.BT.B0 = 01010000 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x30;// RX_TOP_ANA_REG_33.BT.B0 = 001100## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x70;// RX_TOP_ANA_REG_36.BT.B0 = 0111000# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp13 = 0xC;// RX_TOP_ANA_REG_32.BT.B0 = 000011## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==21){
    tmp2 = 0x8;// ANA_RX_PI_REG1.BT.B0 = ####1000 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0x30;// RX_TOP_ANA_REG_35.BT.B0 = 00110### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0x93;// RX_TOP_ANA_REG_34.BT.B0 = 10010011 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0xC;// PLL_RS_LANE_REG12.BT.B2 = ###01100 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0x9;// ANA_RX_PI_REG0.BT.B0 = ####1001 , rx_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x62;// RX_TOP_ANA_REG_39.BT.B0 = 0110001# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x33;// RX_TOP_ANA_REG_37.BT.B0 = 00110011 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x51;// RX_TOP_ANA_REG_38.BT.B0 = 01010001 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x30;// RX_TOP_ANA_REG_33.BT.B0 = 001100## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x70;// RX_TOP_ANA_REG_36.BT.B0 = 0111000# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp13 = 0xC;// RX_TOP_ANA_REG_32.BT.B0 = 000011## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==20){
    tmp2 = 0x8;// ANA_RX_PI_REG1.BT.B0 = ####1000 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0x30;// RX_TOP_ANA_REG_35.BT.B0 = 00110### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0x93;// RX_TOP_ANA_REG_34.BT.B0 = 10010011 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0xA;// PLL_RS_LANE_REG12.BT.B2 = ###01010 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0x9;// ANA_RX_PI_REG0.BT.B0 = ####1001 , rx_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x62;// RX_TOP_ANA_REG_39.BT.B0 = 0110001# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x33;// RX_TOP_ANA_REG_37.BT.B0 = 00110011 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x51;// RX_TOP_ANA_REG_38.BT.B0 = 01010001 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x30;// RX_TOP_ANA_REG_33.BT.B0 = 001100## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x70;// RX_TOP_ANA_REG_36.BT.B0 = 0111000# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp13 = 0xC;// RX_TOP_ANA_REG_32.BT.B0 = 000011## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==19){
    tmp2 = 0x8;// ANA_RX_PI_REG1.BT.B0 = ####1000 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0x30;// RX_TOP_ANA_REG_35.BT.B0 = 00110### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0x93;// RX_TOP_ANA_REG_34.BT.B0 = 10010011 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0x9;// PLL_RS_LANE_REG12.BT.B2 = ###01001 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0x9;// ANA_RX_PI_REG0.BT.B0 = ####1001 , rx_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x62;// RX_TOP_ANA_REG_39.BT.B0 = 0110001# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x33;// RX_TOP_ANA_REG_37.BT.B0 = 00110011 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x51;// RX_TOP_ANA_REG_38.BT.B0 = 01010001 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x30;// RX_TOP_ANA_REG_33.BT.B0 = 001100## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x70;// RX_TOP_ANA_REG_36.BT.B0 = 0111000# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp13 = 0xC;// RX_TOP_ANA_REG_32.BT.B0 = 000011## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==18){
    tmp3 = 0x30;// RX_TOP_ANA_REG_35.BT.B0 = 00110### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0x93;// RX_TOP_ANA_REG_34.BT.B0 = 10010011 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0x7;// PLL_RS_LANE_REG12.BT.B2 = ###00111 , rx_pll_rate_sel_lane[4:0]
    tmp7 = 0x62;// RX_TOP_ANA_REG_39.BT.B0 = 0110001# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x33;// RX_TOP_ANA_REG_37.BT.B0 = 00110011 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x52;// RX_TOP_ANA_REG_38.BT.B0 = 01010010 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x30;// RX_TOP_ANA_REG_33.BT.B0 = 001100## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x70;// RX_TOP_ANA_REG_36.BT.B0 = 0111000# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp13 = 0xC;// RX_TOP_ANA_REG_32.BT.B0 = 000011## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==17){
    tmp3 = 0x20;// RX_TOP_ANA_REG_35.BT.B0 = 00100### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0xA2;// RX_TOP_ANA_REG_34.BT.B0 = 10100010 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0x6;// PLL_RS_LANE_REG12.BT.B2 = ###00110 , rx_pll_rate_sel_lane[4:0]
    tmp7 = 0x62;// RX_TOP_ANA_REG_39.BT.B0 = 0110001# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x22;// RX_TOP_ANA_REG_37.BT.B0 = 00100010 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x52;// RX_TOP_ANA_REG_38.BT.B0 = 01010010 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x20;// RX_TOP_ANA_REG_33.BT.B0 = 001000## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x70;// RX_TOP_ANA_REG_36.BT.B0 = 0111000# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp13 = 0x8;// RX_TOP_ANA_REG_32.BT.B0 = 000010## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==16){
    tmp3 = 0x20;// RX_TOP_ANA_REG_35.BT.B0 = 00100### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0xA2;// RX_TOP_ANA_REG_34.BT.B0 = 10100010 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0x5;// PLL_RS_LANE_REG12.BT.B2 = ###00101 , rx_pll_rate_sel_lane[4:0]
    tmp7 = 0x62;// RX_TOP_ANA_REG_39.BT.B0 = 0110001# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x22;// RX_TOP_ANA_REG_37.BT.B0 = 00100010 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x52;// RX_TOP_ANA_REG_38.BT.B0 = 01010010 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x20;// RX_TOP_ANA_REG_33.BT.B0 = 001000## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x70;// RX_TOP_ANA_REG_36.BT.B0 = 0111000# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp13 = 0x8;// RX_TOP_ANA_REG_32.BT.B0 = 000010## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==15){
    tmp3 = 0x20;// RX_TOP_ANA_REG_35.BT.B0 = 00100### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0xA2;// RX_TOP_ANA_REG_34.BT.B0 = 10100010 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp7 = 0x64;// RX_TOP_ANA_REG_39.BT.B0 = 0110010# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x22;// RX_TOP_ANA_REG_37.BT.B0 = 00100010 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x52;// RX_TOP_ANA_REG_38.BT.B0 = 01010010 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x20;// RX_TOP_ANA_REG_33.BT.B0 = 001000## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp11 = 0x70;// RX_TOP_ANA_REG_36.BT.B0 = 0111000# , rx_ctle_rs2_ctrl_lane[4:0], rx_ctle_rs2_sel_lane[1:0]
    tmp13 = 0x8;// RX_TOP_ANA_REG_32.BT.B0 = 000010## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==14){
    tmp3 = 0x10;// RX_TOP_ANA_REG_35.BT.B0 = 00010### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0xA1;// RX_TOP_ANA_REG_34.BT.B0 = 10100001 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0x2;// PLL_RS_LANE_REG12.BT.B2 = ###00010 , rx_pll_rate_sel_lane[4:0]
    tmp7 = 0x6C;// RX_TOP_ANA_REG_39.BT.B0 = 0110110# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x11;// RX_TOP_ANA_REG_37.BT.B0 = 00010001 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x52;// RX_TOP_ANA_REG_38.BT.B0 = 01010010 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x10;// RX_TOP_ANA_REG_33.BT.B0 = 000100## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp13 = 0x4;// RX_TOP_ANA_REG_32.BT.B0 = 000001## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==13){
    tmp1 = 0x31;// RX_EQ_REG0.BT.B0 = ##110001 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp2 = 0x2;// ANA_RX_PI_REG1.BT.B0 = ####0010 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0x10;// RX_TOP_ANA_REG_35.BT.B0 = 00010### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0xA1;// RX_TOP_ANA_REG_34.BT.B0 = 10100001 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0x0;// PLL_RS_LANE_REG12.BT.B2 = ###00000 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0x4;// ANA_RX_PI_REG0.BT.B0 = ####0100 , rx_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x2C;// RX_TOP_ANA_REG_39.BT.B0 = 0010110# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x11;// RX_TOP_ANA_REG_37.BT.B0 = 00010001 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x53;// RX_TOP_ANA_REG_38.BT.B0 = 01010011 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x10;// RX_TOP_ANA_REG_33.BT.B0 = 000100## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp13 = 0x4;// RX_TOP_ANA_REG_32.BT.B0 = 000001## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==12){
    tmp1 = 0x10;// RX_EQ_REG0.BT.B0 = ##010000 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp2 = 0x8;// ANA_RX_PI_REG1.BT.B0 = ####1000 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0x10;// RX_TOP_ANA_REG_35.BT.B0 = 00010### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0xA1;// RX_TOP_ANA_REG_34.BT.B0 = 10100001 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0xC;// PLL_RS_LANE_REG12.BT.B2 = ###01100 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0x9;// ANA_RX_PI_REG0.BT.B0 = ####1001 , rx_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x64;// RX_TOP_ANA_REG_39.BT.B0 = 0110010# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x11;// RX_TOP_ANA_REG_37.BT.B0 = 00010001 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x51;// RX_TOP_ANA_REG_38.BT.B0 = 01010001 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x10;// RX_TOP_ANA_REG_33.BT.B0 = 000100## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp13 = 0x4;// RX_TOP_ANA_REG_32.BT.B0 = 000001## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==11){
    tmp1 = 0x10;// RX_EQ_REG0.BT.B0 = ##010000 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp2 = 0x8;// ANA_RX_PI_REG1.BT.B0 = ####1000 , rx_pi_icc_ctrl_lane[3:0]
    tmp3 = 0x10;// RX_TOP_ANA_REG_35.BT.B0 = 00010### , rx_ctle_cs2_ctrl_lane[4:0]
    tmp4 = 0xA1;// RX_TOP_ANA_REG_34.BT.B0 = 10100001 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp5 = 0xB;// PLL_RS_LANE_REG12.BT.B2 = ###01011 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0x9;// ANA_RX_PI_REG0.BT.B0 = ####1001 , rx_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x64;// RX_TOP_ANA_REG_39.BT.B0 = 0110010# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x11;// RX_TOP_ANA_REG_37.BT.B0 = 00010001 , rx_ctle_cur2_sel_lane[3:0], rx_ctle_cur_tia_sel_lane[3:0]
    tmp9 = 0x51;// RX_TOP_ANA_REG_38.BT.B0 = 01010001 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
    tmp10 = 0x10;// RX_TOP_ANA_REG_33.BT.B0 = 000100## , rx_ctle_cs1_ctrl_lane[5:0]
    tmp13 = 0x4;// RX_TOP_ANA_REG_32.BT.B0 = 000001## , rx_innet_tcoil_cl_lane[1:0], rx_ctle_rl1_ctrl_lane[3:0]
  }
  else if (gen_rx==10){
    tmp1 = 0x10;// RX_EQ_REG0.BT.B0 = ##010000 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp5 = 0x6;// PLL_RS_LANE_REG12.BT.B2 = ###00110 , rx_pll_rate_sel_lane[4:0]
    tmp7 = 0x64;// RX_TOP_ANA_REG_39.BT.B0 = 0110010# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
  }
  else if (gen_rx==9){
    tmp1 = 0x10;// RX_EQ_REG0.BT.B0 = ##010000 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp5 = 0x4;// PLL_RS_LANE_REG12.BT.B2 = ###00100 , rx_pll_rate_sel_lane[4:0]
    tmp7 = 0x64;// RX_TOP_ANA_REG_39.BT.B0 = 0110010# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
  }
  else if (gen_rx==8){
    tmp1 = 0x10;// RX_EQ_REG0.BT.B0 = ##010000 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp7 = 0x64;// RX_TOP_ANA_REG_39.BT.B0 = 0110010# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
  }
  else if (gen_rx==7){
    tmp1 = 0x10;// RX_EQ_REG0.BT.B0 = ##010000 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp5 = 0x2;// PLL_RS_LANE_REG12.BT.B2 = ###00010 , rx_pll_rate_sel_lane[4:0]
    tmp7 = 0x6C;// RX_TOP_ANA_REG_39.BT.B0 = 0110110# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
  }
  else if (gen_rx==6){
    tmp1 = 0x14;// RX_EQ_REG0.BT.B0 = ##010100 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp2 = 0x8;// ANA_RX_PI_REG1.BT.B0 = ####1000 , rx_pi_icc_ctrl_lane[3:0]
    tmp5 = 0xC;// PLL_RS_LANE_REG12.BT.B2 = ###01100 , rx_pll_rate_sel_lane[4:0]
    tmp6 = 0x9;// ANA_RX_PI_REG0.BT.B0 = ####1001 , rx_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x64;// RX_TOP_ANA_REG_39.BT.B0 = 0110010# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp9 = 0x31;// RX_TOP_ANA_REG_38.BT.B0 = 00110001 , rx_ctle_gain_coarse_lane[3:0], rx_ctle_rfb_sel_lane[1:0], rx_pi_rsel_lane[1:0]
  }
  else if (gen_rx==5){
    tmp1 = 0x14;// RX_EQ_REG0.BT.B0 = ##010100 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp5 = 0x4;// PLL_RS_LANE_REG12.BT.B2 = ###00100 , rx_pll_rate_sel_lane[4:0]
    tmp7 = 0x64;// RX_TOP_ANA_REG_39.BT.B0 = 0110010# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
  }
  else if (gen_rx==4){
    tmp1 = 0x14;// RX_EQ_REG0.BT.B0 = ##010100 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp7 = 0x64;// RX_TOP_ANA_REG_39.BT.B0 = 0110010# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
  }
  else if (gen_rx==3){
    tmp1 = 0x14;// RX_EQ_REG0.BT.B0 = ##010100 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp5 = 0x2;// PLL_RS_LANE_REG12.BT.B2 = ###00010 , rx_pll_rate_sel_lane[4:0]
    tmp7 = 0x6C;// RX_TOP_ANA_REG_39.BT.B0 = 0110110# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
  }
  else if (gen_rx==2){
    tmp1 = 0x18;// RX_EQ_REG0.BT.B0 = ##011000 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp5 = 0x4;// PLL_RS_LANE_REG12.BT.B2 = ###00100 , rx_pll_rate_sel_lane[4:0]
    tmp7 = 0x64;// RX_TOP_ANA_REG_39.BT.B0 = 0110010# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
  }
  else if (gen_rx==1){
    tmp1 = 0x18;// RX_EQ_REG0.BT.B0 = ##011000 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp7 = 0x64;// RX_TOP_ANA_REG_39.BT.B0 = 0110010# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
  }
  else if (gen_rx==0){
    tmp1 = 0x18;// RX_EQ_REG0.BT.B0 = ##011000 , rx_dtl_pipeline_mode_lane, rx_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp5 = 0x2;// PLL_RS_LANE_REG12.BT.B2 = ###00010 , rx_pll_rate_sel_lane[4:0]
    tmp7 = 0x6C;// RX_TOP_ANA_REG_39.BT.B0 = 0110110# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
  }
  RX_SYSTEM_LANE.BT.B0 = tmp0;
  RX_EQ_REG0.BT.B0 = tmp1;
  ANA_RX_PI_REG1.BT.B0 = tmp2;
  RX_TOP_ANA_REG_35.BT.B0 = tmp3;
  RX_TOP_ANA_REG_34.BT.B0 = tmp4;
  PLL_RS_LANE_REG12.BT.B2 = tmp5;
  ANA_RX_PI_REG0.BT.B0 = tmp6;
  RX_TOP_ANA_REG_39.BT.B0 = tmp7;
  RX_TOP_ANA_REG_37.BT.B0 = tmp8;
  RX_TOP_ANA_REG_38.BT.B0 = tmp9;
  RX_TOP_ANA_REG_33.BT.B0 = tmp10;
  RX_TOP_ANA_REG_36.BT.B0 = tmp11;
  TX_TRAIN_PATTTERN_REG0.BT.B1 = (TX_TRAIN_PATTTERN_REG0.BT.B1 & 0x3) | (tmp12 & 0xfc); // (TX_TRAIN_PATTTERN_REG0.BT.B1 & 00000011) | (tmp12 & 11111100)
  RX_TOP_ANA_REG_32.BT.B0 = tmp13;
}
void loadspeedtbl_lc_pll (uint8_t pll_rate_sel, uint8_t ref_clk_sel, int tsrs_sel) BANKING_CTRL {
  uint8_t tmp0 = 0xE5; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
  uint8_t tmp1 = 0xD; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
  uint8_t tmp2 = 0x18; //PLL_TS_DTX_REG2.BT.B3 , pll_ts_ssc_step_125ppm_lane[3:0], pll_ts_ssc_acc_factor_lane
  uint8_t tmp3 = 0x0; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
  uint8_t tmp4 = 0x0; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
  uint8_t tmp5 = 0x0; //PLL_TS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 , pll_ts_ck500m_div_lane[1:0], pll_ts_lcpll_postdiv_en_lane, pll_ts_lcpll_postdiv_1p5or2_en_lane
  uint8_t tmp6 = 0x93; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
  uint8_t tmp7 = 0x38; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
  uint8_t tmp8 = 0x4E; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
  uint8_t tmp9 = 0x1F; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
  uint8_t tmp10 = 0x55; //PLL_TS_CAL_CTRL_LANE.BT.B2 , pll_ts_vco_amp_vth_mid_lane[3:0], pll_ts_vco_amp_vth_low_lane[3:0]
  uint8_t tmp11 = 0x5; //PLL_TS_CAL_CTRL_LANE.BT.B3 , pll_ts_vco_amp_vth_high_lane[3:0]
  uint8_t tmp12 = 0x80; //PLL_TS_UPHY14_CMN_ANAREG_TOP_026.BT.B0 , pll_ts_reg0p9_speed_track_clk_lane[2:0]
  uint8_t tmp13 = 0x1C; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
  uint8_t tmp14 = 0x0; //PLL_TS_LANE_REG12.BT.B1 , pll_ts_fbdiv_cal_lane[9:0]
  uint8_t tmp15 = 0x80; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
  uint8_t tmp16 = 0x14; //PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
  uint8_t tmp17 = 0xF; //TRXIVREF_RSVD_REG0.BT.B0 , trxivref_rsvd0_lane[7:0]
  uint8_t tmp18 = 0xD4; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
  if (pll_rate_sel==24){
    tmp0 = 0x29; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp3 = 0xE2; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp4 = 0x1; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp5 = 0x2; //PLL_TS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 , pll_ts_ck500m_div_lane[1:0], pll_ts_lcpll_postdiv_en_lane, pll_ts_lcpll_postdiv_1p5or2_en_lane
    tmp7 = 0x88; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp8 = 0x78; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp10 = 0x66; //PLL_TS_CAL_CTRL_LANE.BT.B2 , pll_ts_vco_amp_vth_mid_lane[3:0], pll_ts_vco_amp_vth_low_lane[3:0]
    tmp11 = 0x6; //PLL_TS_CAL_CTRL_LANE.BT.B3 , pll_ts_vco_amp_vth_high_lane[3:0]
    tmp13 = 0x1B; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp17 = 0x5; //TRXIVREF_RSVD_REG0.BT.B0 , trxivref_rsvd0_lane[7:0]
    if (ref_clk_sel==7){
      tmp3 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x57;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010111 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x44;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 010001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==6){
      tmp3 = 0xC0;// PLL_TS_LANE_REG1.BT.B0 = 11000000 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xE3;// PLL_TS_LANE_REG1.BT.B1 = 11100011 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x36;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00110110 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0x9C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp15 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x44;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 010001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==4){
      tmp3 = 0xC0;// PLL_TS_LANE_REG1.BT.B0 = 11000000 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xE3;// PLL_TS_LANE_REG1.BT.B1 = 11100011 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x36;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00110110 , pll_ts_fbdiv_lane[7:0]
      tmp18 = 0x9C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp15 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==2){
      tmp7 = 0x55;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010101 , pll_ts_fbdiv_lane[7:0]
    }
    else if (ref_clk_sel==1){
      tmp3 = 0xD5;// PLL_TS_LANE_REG1.BT.B0 = 11010101 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xF5;// PLL_TS_LANE_REG1.BT.B1 = 11110101 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x71;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01110001 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    }
    else if (ref_clk_sel==0){
      tmp15 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    }
  }
  else if (pll_rate_sel==23){
    tmp0 = 0x29; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp3 = 0xE2; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp4 = 0x1; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp7 = 0x88; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp8 = 0x78; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp10 = 0x66; //PLL_TS_CAL_CTRL_LANE.BT.B2 , pll_ts_vco_amp_vth_mid_lane[3:0], pll_ts_vco_amp_vth_low_lane[3:0]
    tmp11 = 0x6; //PLL_TS_CAL_CTRL_LANE.BT.B3 , pll_ts_vco_amp_vth_high_lane[3:0]
    tmp13 = 0x1B; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    if (ref_clk_sel==7){
      tmp3 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x57;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010111 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x44;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 010001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==6){
      tmp3 = 0xC0;// PLL_TS_LANE_REG1.BT.B0 = 11000000 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xE3;// PLL_TS_LANE_REG1.BT.B1 = 11100011 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x36;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00110110 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0x9C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp15 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x44;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 010001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==4){
      tmp3 = 0xC0;// PLL_TS_LANE_REG1.BT.B0 = 11000000 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xE3;// PLL_TS_LANE_REG1.BT.B1 = 11100011 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x36;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00110110 , pll_ts_fbdiv_lane[7:0]
      tmp18 = 0x9C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp15 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==2){
      tmp7 = 0x55;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010101 , pll_ts_fbdiv_lane[7:0]
    }
    else if (ref_clk_sel==1){
      tmp3 = 0xD5;// PLL_TS_LANE_REG1.BT.B0 = 11010101 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xF5;// PLL_TS_LANE_REG1.BT.B1 = 11110101 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x71;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01110001 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    }
    else if (ref_clk_sel==0){
      tmp15 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    }
  }
  else if (pll_rate_sel==22){
    tmp0 = 0x9D; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp2 = 0x10; //PLL_TS_DTX_REG2.BT.B3 , pll_ts_ssc_step_125ppm_lane[3:0], pll_ts_ssc_acc_factor_lane
    tmp3 = 0xCC; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp4 = 0xED; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp5 = 0x2; //PLL_TS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 , pll_ts_ck500m_div_lane[1:0], pll_ts_lcpll_postdiv_en_lane, pll_ts_lcpll_postdiv_1p5or2_en_lane
    tmp6 = 0xC5; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x46; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp8 = 0x64; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp17 = 0xA; //TRXIVREF_RSVD_REG0.BT.B0 , trxivref_rsvd0_lane[7:0]
    tmp18 = 0x7C; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp3 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x2D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00101101 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0x5C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp7 = 0x38;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111000 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==5){
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0x9C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp7 = 0x38;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111000 , pll_ts_fbdiv_lane[7:0]
    }
    else if (ref_clk_sel==3){
      tmp15 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp18 = 0x5C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp3 = 0x19;// PLL_TS_LANE_REG1.BT.B0 = 00011001 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x5;// PLL_TS_LANE_REG1.BT.B1 = 00000101 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x58;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01011000 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    }
    else if (ref_clk_sel==1){
      tmp3 = 0x72;// PLL_TS_LANE_REG1.BT.B0 = 01110010 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xF9;// PLL_TS_LANE_REG1.BT.B1 = 11111001 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x75;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01110101 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp18 = 0x9C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
      tmp3 = 0xEC;// PLL_TS_LANE_REG1.BT.B0 = 11101100 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xA;// PLL_TS_LANE_REG1.BT.B1 = 00001010 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x8D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10001101 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp18 = 0xB4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
  }
  else if (pll_rate_sel==21){
    tmp0 = 0x95; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp2 = 0x10; //PLL_TS_DTX_REG2.BT.B3 , pll_ts_ssc_step_125ppm_lane[3:0], pll_ts_ssc_acc_factor_lane
    tmp3 = 0xB3; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp4 = 0xF8; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp5 = 0x2; //PLL_TS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 , pll_ts_ck500m_div_lane[1:0], pll_ts_lcpll_postdiv_en_lane, pll_ts_lcpll_postdiv_1p5or2_en_lane
    tmp6 = 0xC5; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x58; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp17 = 0xA; //TRXIVREF_RSVD_REG0.BT.B0 , trxivref_rsvd0_lane[7:0]
    if (ref_clk_sel==7){
      tmp3 = 0xF4;// PLL_TS_LANE_REG1.BT.B0 = 11110100 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xA;// PLL_TS_LANE_REG1.BT.B1 = 00001010 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x2D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00101101 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0x5C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp7 = 0x1C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00011100 , pll_ts_fbdiv_lane[7:0]
      tmp18 = 0x44;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01000100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp7 = 0x23;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00100011 , pll_ts_fbdiv_lane[7:0]
      tmp18 = 0x54;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01010100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp7 = 0x38;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111000 , pll_ts_fbdiv_lane[7:0]
      tmp18 = 0x7C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp7 = 0x46;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01000110 , pll_ts_fbdiv_lane[7:0]
      tmp18 = 0x9C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp3 = 0x10;// PLL_TS_LANE_REG1.BT.B0 = 00010000 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x10;// PLL_TS_LANE_REG1.BT.B1 = 00010000 , pll_ts_init_foffs_lane[15:0]
      tmp18 = 0xB4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==1){
      tmp3 = 0x61;// PLL_TS_LANE_REG1.BT.B0 = 01100001 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x4;// PLL_TS_LANE_REG1.BT.B1 = 00000100 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x75;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01110101 , pll_ts_fbdiv_lane[7:0]
    }
    else if (ref_clk_sel==0){
      tmp7 = 0x8C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10001100 , pll_ts_fbdiv_lane[7:0]
    }
  }
  else if (pll_rate_sel==20){
    tmp0 = 0x9D; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp2 = 0x10; //PLL_TS_DTX_REG2.BT.B3 , pll_ts_ssc_step_125ppm_lane[3:0], pll_ts_ssc_acc_factor_lane
    tmp3 = 0xCC; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp4 = 0xED; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp6 = 0xC5; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x46; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp8 = 0x64; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp18 = 0x7C; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp3 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x2D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00101101 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0x5C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp7 = 0x38;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111000 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==5){
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0x9C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp7 = 0x38;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111000 , pll_ts_fbdiv_lane[7:0]
    }
    else if (ref_clk_sel==3){
      tmp15 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp18 = 0x5C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp3 = 0x19;// PLL_TS_LANE_REG1.BT.B0 = 00011001 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x5;// PLL_TS_LANE_REG1.BT.B1 = 00000101 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x58;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01011000 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    }
    else if (ref_clk_sel==1){
      tmp3 = 0x72;// PLL_TS_LANE_REG1.BT.B0 = 01110010 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xF9;// PLL_TS_LANE_REG1.BT.B1 = 11111001 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x75;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01110101 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp18 = 0x9C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
      tmp3 = 0xEC;// PLL_TS_LANE_REG1.BT.B0 = 11101100 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xA;// PLL_TS_LANE_REG1.BT.B1 = 00001010 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x8D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10001101 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp18 = 0xB4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
  }
  else if (pll_rate_sel==19){
    tmp0 = 0x95; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp2 = 0x10; //PLL_TS_DTX_REG2.BT.B3 , pll_ts_ssc_step_125ppm_lane[3:0], pll_ts_ssc_acc_factor_lane
    tmp3 = 0xB3; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp4 = 0xF8; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp6 = 0xC5; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x58; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    if (ref_clk_sel==7){
      tmp3 = 0xF4;// PLL_TS_LANE_REG1.BT.B0 = 11110100 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xA;// PLL_TS_LANE_REG1.BT.B1 = 00001010 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x2D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00101101 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0x5C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp7 = 0x1C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00011100 , pll_ts_fbdiv_lane[7:0]
      tmp18 = 0x44;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01000100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp7 = 0x23;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00100011 , pll_ts_fbdiv_lane[7:0]
      tmp18 = 0x54;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01010100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp7 = 0x38;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111000 , pll_ts_fbdiv_lane[7:0]
      tmp18 = 0x7C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp7 = 0x46;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01000110 , pll_ts_fbdiv_lane[7:0]
      tmp18 = 0x9C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp3 = 0x10;// PLL_TS_LANE_REG1.BT.B0 = 00010000 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x10;// PLL_TS_LANE_REG1.BT.B1 = 00010000 , pll_ts_init_foffs_lane[15:0]
      tmp18 = 0xB4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==1){
      tmp3 = 0x61;// PLL_TS_LANE_REG1.BT.B0 = 01100001 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x4;// PLL_TS_LANE_REG1.BT.B1 = 00000100 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x75;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01110101 , pll_ts_fbdiv_lane[7:0]
    }
    else if (ref_clk_sel==0){
      tmp7 = 0x8C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10001100 , pll_ts_fbdiv_lane[7:0]
    }
  }
  else if (pll_rate_sel==18){
    tmp0 = 0x8F; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp2 = 0x10; //PLL_TS_DTX_REG2.BT.B3 , pll_ts_ssc_step_125ppm_lane[3:0], pll_ts_ssc_acc_factor_lane
    tmp6 = 0xC5; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x46; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp8 = 0x40; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp18 = 0x7C; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp3 = 0x49;// PLL_TS_LANE_REG1.BT.B0 = 01001001 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x12;// PLL_TS_LANE_REG1.BT.B1 = 00010010 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x2D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00101101 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0x5C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp7 = 0x38;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111000 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==5){
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0x9C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp7 = 0x38;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111000 , pll_ts_fbdiv_lane[7:0]
    }
    else if (ref_clk_sel==3){
      tmp15 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp18 = 0x5C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp3 = 0x68;// PLL_TS_LANE_REG1.BT.B0 = 01101000 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x17;// PLL_TS_LANE_REG1.BT.B1 = 00010111 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x58;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01011000 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    }
    else if (ref_clk_sel==1){
      tmp3 = 0xB4;// PLL_TS_LANE_REG1.BT.B0 = 10110100 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xB;// PLL_TS_LANE_REG1.BT.B1 = 00001011 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x75;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01110101 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp18 = 0x9C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
      tmp7 = 0x8C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10001100 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp18 = 0xB4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
  }
  else if (pll_rate_sel==17){
    tmp0 = 0x51; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp2 = 0x10; //PLL_TS_DTX_REG2.BT.B3 , pll_ts_ssc_step_125ppm_lane[3:0], pll_ts_ssc_acc_factor_lane
    tmp3 = 0xE5; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp4 = 0xE; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp7 = 0x45; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp8 = 0xB1; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp9 = 0x1E; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
    tmp18 = 0x9C; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp3 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x2C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00101100 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0x7C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp3 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x37;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00110111 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==5){
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0xB4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp3 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x37;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00110111 , pll_ts_fbdiv_lane[7:0]
    }
    else if (ref_clk_sel==3){
      tmp15 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp18 = 0x7C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp3 = 0xFB;// PLL_TS_LANE_REG1.BT.B0 = 11111011 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x2;// PLL_TS_LANE_REG1.BT.B1 = 00000010 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x56;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010110 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    }
    else if (ref_clk_sel==1){
      tmp3 = 0x5;// PLL_TS_LANE_REG1.BT.B0 = 00000101 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xFD;// PLL_TS_LANE_REG1.BT.B1 = 11111101 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0xE5;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 11100101 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0xD4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
      tmp7 = 0x8A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10001010 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp18 = 0xD4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
  }
  else if (pll_rate_sel==16){
    tmp0 = 0xDB; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp1 = 0xC; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp3 = 0xC8; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp4 = 0x5; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp7 = 0x85; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp8 = 0xBE; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp9 = 0x1E; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
    tmp10 = 0x67; //PLL_TS_CAL_CTRL_LANE.BT.B2 , pll_ts_vco_amp_vth_mid_lane[3:0], pll_ts_vco_amp_vth_low_lane[3:0]
    tmp11 = 0x6; //PLL_TS_CAL_CTRL_LANE.BT.B3 , pll_ts_vco_amp_vth_high_lane[3:0]
    tmp13 = 0x1B; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp15 = 0x84; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    if (ref_clk_sel==7){
      tmp3 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x55;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010101 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x4C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 010011## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0x54;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01010100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp3 = 0x5D;// PLL_TS_LANE_REG1.BT.B0 = 01011101 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xF6;// PLL_TS_LANE_REG1.BT.B1 = 11110110 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x35;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00110101 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x80;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000000 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0x9C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp15 = 0x80;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000000 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x44;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 010001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==4){
      tmp3 = 0x5D;// PLL_TS_LANE_REG1.BT.B0 = 01011101 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xF6;// PLL_TS_LANE_REG1.BT.B1 = 11110110 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x35;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00110101 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x80;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000000 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp18 = 0x9C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==2){
      tmp3 = 0x9D;// PLL_TS_LANE_REG1.BT.B0 = 10011101 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xFF;// PLL_TS_LANE_REG1.BT.B1 = 11111111 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x53;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010011 , pll_ts_fbdiv_lane[7:0]
      tmp18 = 0x9C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==1){
      tmp3 = 0xF3;// PLL_TS_LANE_REG1.BT.B0 = 11110011 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xB;// PLL_TS_LANE_REG1.BT.B1 = 00001011 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x6F;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01101111 , pll_ts_fbdiv_lane[7:0]
    }
    else if (ref_clk_sel==0){
    }
  }
  else if (pll_rate_sel==15){
    tmp0 = 0xDB; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp1 = 0xC; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp3 = 0x2B; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp4 = 0x6; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp7 = 0x85; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp8 = 0xBE; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp9 = 0x1E; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
    tmp10 = 0x67; //PLL_TS_CAL_CTRL_LANE.BT.B2 , pll_ts_vco_amp_vth_mid_lane[3:0], pll_ts_vco_amp_vth_low_lane[3:0]
    tmp11 = 0x6; //PLL_TS_CAL_CTRL_LANE.BT.B3 , pll_ts_vco_amp_vth_high_lane[3:0]
    tmp13 = 0x1B; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    if (ref_clk_sel==7){
      tmp3 = 0x63;// PLL_TS_LANE_REG1.BT.B0 = 01100011 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x55;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010101 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x44;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 010001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==6){
      tmp3 = 0xBF;// PLL_TS_LANE_REG1.BT.B0 = 10111111 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xF6;// PLL_TS_LANE_REG1.BT.B1 = 11110110 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x35;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00110101 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0x9C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp15 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x44;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 010001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==4){
      tmp3 = 0xBF;// PLL_TS_LANE_REG1.BT.B0 = 10111111 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xF6;// PLL_TS_LANE_REG1.BT.B1 = 11110110 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x35;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00110101 , pll_ts_fbdiv_lane[7:0]
      tmp18 = 0x9C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp15 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==2){
      tmp3 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x53;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010011 , pll_ts_fbdiv_lane[7:0]
    }
    else if (ref_clk_sel==1){
      tmp3 = 0x56;// PLL_TS_LANE_REG1.BT.B0 = 01010110 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xC;// PLL_TS_LANE_REG1.BT.B1 = 00001100 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x6F;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01101111 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    }
    else if (ref_clk_sel==0){
      tmp15 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    }
  }
  else if (pll_rate_sel==14){
    tmp0 = 0x7B; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp1 = 0xC; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp3 = 0xFB; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp4 = 0x2; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp7 = 0x81; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp8 = 0xFD; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp9 = 0x1E; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
    tmp10 = 0x67; //PLL_TS_CAL_CTRL_LANE.BT.B2 , pll_ts_vco_amp_vth_mid_lane[3:0], pll_ts_vco_amp_vth_low_lane[3:0]
    tmp11 = 0x6; //PLL_TS_CAL_CTRL_LANE.BT.B3 , pll_ts_vco_amp_vth_high_lane[3:0]
    tmp13 = 0x1A; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp15 = 0x85; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp18 = 0xD3; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp3 = 0x46;// PLL_TS_LANE_REG1.BT.B0 = 01000110 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x8;// PLL_TS_LANE_REG1.BT.B1 = 00001000 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x3E;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111110 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x81;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x34;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0x9B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp16 = 0x54;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 010101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==5){
      tmp3 = 0x92;// PLL_TS_LANE_REG1.BT.B0 = 10010010 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xD;// PLL_TS_LANE_REG1.BT.B1 = 00001101 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x61;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100001 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x34;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0xB3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp3 = 0x46;// PLL_TS_LANE_REG1.BT.B0 = 01000110 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x8;// PLL_TS_LANE_REG1.BT.B1 = 00001000 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x9B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10011011 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x34;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==3){
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==2){
      tmp3 = 0xB;// PLL_TS_LANE_REG1.BT.B0 = 00001011 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x16;// PLL_TS_LANE_REG1.BT.B1 = 00010110 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x51;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010001 , pll_ts_fbdiv_lane[7:0]
      tmp18 = 0x9B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==1){
      tmp3 = 0xEA;// PLL_TS_LANE_REG1.BT.B0 = 11101010 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xEF;// PLL_TS_LANE_REG1.BT.B1 = 11101111 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x6B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01101011 , pll_ts_fbdiv_lane[7:0]
      tmp18 = 0xB3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
    }
  }
  else if (pll_rate_sel==13){
    tmp0 = 0x7B; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp1 = 0xC; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp3 = 0xFD; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp4 = 0x2; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp7 = 0x81; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp8 = 0xFD; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp9 = 0x1E; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
    tmp10 = 0x67; //PLL_TS_CAL_CTRL_LANE.BT.B2 , pll_ts_vco_amp_vth_mid_lane[3:0], pll_ts_vco_amp_vth_low_lane[3:0]
    tmp11 = 0x6; //PLL_TS_CAL_CTRL_LANE.BT.B3 , pll_ts_vco_amp_vth_high_lane[3:0]
    tmp13 = 0x1A; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp15 = 0x85; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp16 = 0x24; //PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    tmp18 = 0xB3; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp3 = 0x48;// PLL_TS_LANE_REG1.BT.B0 = 01001000 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x8;// PLL_TS_LANE_REG1.BT.B1 = 00001000 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x3E;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111110 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x81;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x34;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0x9B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp3 = 0xCE;// PLL_TS_LANE_REG1.BT.B0 = 11001110 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xED;// PLL_TS_LANE_REG1.BT.B1 = 11101101 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x4D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001101 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x81;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x34;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0xD3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp3 = 0x94;// PLL_TS_LANE_REG1.BT.B0 = 10010100 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xD;// PLL_TS_LANE_REG1.BT.B1 = 00001101 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x61;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100001 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x34;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==4){
      tmp3 = 0xB;// PLL_TS_LANE_REG1.BT.B0 = 00001011 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xFB;// PLL_TS_LANE_REG1.BT.B1 = 11111011 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x67;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100111 , pll_ts_fbdiv_lane[7:0]
    }
    else if (ref_clk_sel==3){
      tmp18 = 0xD3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp3 = 0xA2;// PLL_TS_LANE_REG1.BT.B0 = 10100010 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xFC;// PLL_TS_LANE_REG1.BT.B1 = 11111100 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0xA1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10100001 , pll_ts_fbdiv_lane[7:0]
    }
    else if (ref_clk_sel==1){
      tmp3 = 0xEC;// PLL_TS_LANE_REG1.BT.B0 = 11101100 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xEF;// PLL_TS_LANE_REG1.BT.B1 = 11101111 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x6B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01101011 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x14;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 000101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==0){
      tmp16 = 0x14;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 000101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0xD3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
  }
  else if (pll_rate_sel==12){
    tmp0 = 0x1B; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp1 = 0xC; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp7 = 0x7D; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp8 = 0x40; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp10 = 0x67; //PLL_TS_CAL_CTRL_LANE.BT.B2 , pll_ts_vco_amp_vth_mid_lane[3:0], pll_ts_vco_amp_vth_low_lane[3:0]
    tmp11 = 0x6; //PLL_TS_CAL_CTRL_LANE.BT.B3 , pll_ts_vco_amp_vth_high_lane[3:0]
    tmp13 = 0x19; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp15 = 0x85; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp18 = 0xD3; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp7 = 0x14;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00010100 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x81;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp18 = 0x43;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01000011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp7 = 0x19;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00011001 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x81;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp18 = 0x53;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01010011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp3 = 0xEC;// PLL_TS_LANE_REG1.BT.B0 = 11101100 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xA;// PLL_TS_LANE_REG1.BT.B1 = 00001010 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x5E;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01011110 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x34;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0xB3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp7 = 0x32;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00110010 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x81;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp18 = 0x9B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==2){
      tmp3 = 0x72;// PLL_TS_LANE_REG1.BT.B0 = 01110010 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xF9;// PLL_TS_LANE_REG1.BT.B1 = 11111001 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x4E;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001110 , pll_ts_fbdiv_lane[7:0]
      tmp18 = 0x9B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==1){
      tmp3 = 0x72;// PLL_TS_LANE_REG1.BT.B0 = 01110010 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xF9;// PLL_TS_LANE_REG1.BT.B1 = 11111001 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x68;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01101000 , pll_ts_fbdiv_lane[7:0]
    }
    else if (ref_clk_sel==0){
    }
  }
  else if (pll_rate_sel==11){
    tmp1 = 0xB; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp4 = 0xF3; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp7 = 0x31; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp8 = 0xB8; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp9 = 0x1E; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
    tmp10 = 0x89; //PLL_TS_CAL_CTRL_LANE.BT.B2 , pll_ts_vco_amp_vth_mid_lane[3:0], pll_ts_vco_amp_vth_low_lane[3:0]
    tmp11 = 0x7; //PLL_TS_CAL_CTRL_LANE.BT.B3 , pll_ts_vco_amp_vth_high_lane[3:0]
    tmp13 = 0x19; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp15 = 0x85; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp18 = 0xD3; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp3 = 0x39;// PLL_TS_LANE_REG1.BT.B0 = 00111001 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x1;// PLL_TS_LANE_REG1.BT.B1 = 00000001 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x3B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111011 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x81;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x34;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0xB3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp3 = 0x55;// PLL_TS_LANE_REG1.BT.B0 = 01010101 , pll_ts_init_foffs_lane[15:0]
      tmp15 = 0x81;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0x9B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp3 = 0xE4;// PLL_TS_LANE_REG1.BT.B0 = 11100100 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xF8;// PLL_TS_LANE_REG1.BT.B1 = 11111000 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x5C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01011100 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x34;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0xB3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp3 = 0x55;// PLL_TS_LANE_REG1.BT.B0 = 01010101 , pll_ts_init_foffs_lane[15:0]
      tmp15 = 0x81;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp18 = 0x9B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp4 = 0x4;// PLL_TS_LANE_REG1.BT.B1 = 00000100 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x7B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111011 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==2){
      tmp3 = 0xAB;// PLL_TS_LANE_REG1.BT.B0 = 10101011 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xA;// PLL_TS_LANE_REG1.BT.B1 = 00001010 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x4D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001101 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x81;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    }
    else if (ref_clk_sel==1){
      tmp4 = 0xF0;// PLL_TS_LANE_REG1.BT.B1 = 11110000 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x66;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100110 , pll_ts_fbdiv_lane[7:0]
    }
    else if (ref_clk_sel==0){
      tmp4 = 0x4;// PLL_TS_LANE_REG1.BT.B1 = 00000100 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x7B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111011 , pll_ts_fbdiv_lane[7:0]
    }
  }
  else if (pll_rate_sel==10){
    tmp0 = 0xCD; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp1 = 0xB; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp3 = 0x33; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp4 = 0x4; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp7 = 0x31; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp8 = 0xBD; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp10 = 0x89; //PLL_TS_CAL_CTRL_LANE.BT.B2 , pll_ts_vco_amp_vth_mid_lane[3:0], pll_ts_vco_amp_vth_low_lane[3:0]
    tmp11 = 0x7; //PLL_TS_CAL_CTRL_LANE.BT.B3 , pll_ts_vco_amp_vth_high_lane[3:0]
    tmp13 = 0x18; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp15 = 0x85; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp16 = 0x24; //PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    tmp18 = 0x9B; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp3 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x27;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00100111 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x81;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp18 = 0x7B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp3 = 0x1;// PLL_TS_LANE_REG1.BT.B0 = 00000001 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x15;// PLL_TS_LANE_REG1.BT.B1 = 00010101 , pll_ts_init_foffs_lane[15:0]
      tmp15 = 0x81;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    }
    else if (ref_clk_sel==5){
      tmp7 = 0x3D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111101 , pll_ts_fbdiv_lane[7:0]
      tmp18 = 0x7B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp3 = 0x1;// PLL_TS_LANE_REG1.BT.B0 = 00000001 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x15;// PLL_TS_LANE_REG1.BT.B1 = 00010101 , pll_ts_init_foffs_lane[15:0]
      tmp15 = 0x81;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x14;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 000101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==3){
      tmp7 = 0x7A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111010 , pll_ts_fbdiv_lane[7:0]
      tmp18 = 0xD3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp3 = 0xC2;// PLL_TS_LANE_REG1.BT.B0 = 11000010 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xF6;// PLL_TS_LANE_REG1.BT.B1 = 11110110 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x4C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001100 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x14;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 000101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==1){
      tmp3 = 0x7B;// PLL_TS_LANE_REG1.BT.B0 = 01111011 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xFD;// PLL_TS_LANE_REG1.BT.B1 = 11111101 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0xCB;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 11001011 , pll_ts_fbdiv_lane[7:0]
      tmp18 = 0xD3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
      tmp7 = 0x7A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111010 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x14;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 000101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0xD3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
  }
  else if (pll_rate_sel==9){
    tmp0 = 0xC7; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp1 = 0xB; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp3 = 0xBE; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp4 = 0xB; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp7 = 0x3D; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp8 = 0xAE; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp10 = 0x89; //PLL_TS_CAL_CTRL_LANE.BT.B2 , pll_ts_vco_amp_vth_mid_lane[3:0], pll_ts_vco_amp_vth_low_lane[3:0]
    tmp11 = 0x7; //PLL_TS_CAL_CTRL_LANE.BT.B3 , pll_ts_vco_amp_vth_high_lane[3:0]
    tmp13 = 0x18; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp15 = 0x81; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp18 = 0xD3; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp3 = 0x89;// PLL_TS_LANE_REG1.BT.B0 = 10001001 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x7;// PLL_TS_LANE_REG1.BT.B1 = 00000111 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x27;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00100111 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0x7B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp3 = 0x85;// PLL_TS_LANE_REG1.BT.B0 = 10000101 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x49;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001001 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x34;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==5){
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0xB3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp3 = 0x7E;// PLL_TS_LANE_REG1.BT.B0 = 01111110 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xF2;// PLL_TS_LANE_REG1.BT.B1 = 11110010 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x61;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100001 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x85;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000101 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0xB3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp18 = 0xB3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp3 = 0x47;// PLL_TS_LANE_REG1.BT.B0 = 01000111 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xFE;// PLL_TS_LANE_REG1.BT.B1 = 11111110 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x4C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001100 , pll_ts_fbdiv_lane[7:0]
    }
    else if (ref_clk_sel==1){
      tmp3 = 0xCF;// PLL_TS_LANE_REG1.BT.B0 = 11001111 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xF0;// PLL_TS_LANE_REG1.BT.B1 = 11110000 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x65;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100101 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x85;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000101 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    }
    else if (ref_clk_sel==0){
      tmp7 = 0x7A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111010 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x85;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000101 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    }
  }
  else if (pll_rate_sel==8){
    tmp0 = 0x31; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp1 = 0xB; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp3 = 0x49; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp4 = 0xD; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp6 = 0x51; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x74; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp8 = 0x6B; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp13 = 0x17; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp15 = 0x5; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp18 = 0xD1; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp3 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x25;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00100101 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0x69;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01101001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp16 = 0x54;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 010101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==5){
      tmp7 = 0x1D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00011101 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp18 = 0x59;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01011001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp3 = 0x61;// PLL_TS_LANE_REG1.BT.B0 = 01100001 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x7;// PLL_TS_LANE_REG1.BT.B1 = 00000111 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x8B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10001011 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x34;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==3){
      tmp7 = 0x3A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111010 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp18 = 0xB1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp3 = 0xF2;// PLL_TS_LANE_REG1.BT.B0 = 11110010 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xF0;// PLL_TS_LANE_REG1.BT.B1 = 11110000 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x48;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001000 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    }
    else if (ref_clk_sel==1){
      tmp3 = 0xF2;// PLL_TS_LANE_REG1.BT.B0 = 11110010 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xF0;// PLL_TS_LANE_REG1.BT.B1 = 11110000 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x60;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100000 , pll_ts_fbdiv_lane[7:0]
      tmp18 = 0xB1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
    }
  }
  else if (pll_rate_sel==7){
    tmp0 = 0x2F; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp1 = 0xA; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp3 = 0xB3; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp4 = 0xF8; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp6 = 0x51; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x69; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp10 = 0x9A; //PLL_TS_CAL_CTRL_LANE.BT.B2 , pll_ts_vco_amp_vth_mid_lane[3:0], pll_ts_vco_amp_vth_low_lane[3:0]
    tmp11 = 0x8; //PLL_TS_CAL_CTRL_LANE.BT.B3 , pll_ts_vco_amp_vth_high_lane[3:0]
    tmp13 = 0x15; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp15 = 0x6; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp18 = 0xD0; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp7 = 0x54;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010100 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x54;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 010101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0xB0;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp7 = 0x15;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00010101 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x2;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000010 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp18 = 0x50;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01010000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp16 = 0x44;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 010001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==4){
      tmp7 = 0x2A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00101010 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x2;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000010 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp18 = 0x98;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==2){
      tmp3 = 0x10;// PLL_TS_LANE_REG1.BT.B0 = 00010000 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x10;// PLL_TS_LANE_REG1.BT.B1 = 00010000 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x42;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01000010 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x2;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000010 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    }
    else if (ref_clk_sel==1){
      tmp3 = 0x10;// PLL_TS_LANE_REG1.BT.B0 = 00010000 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x10;// PLL_TS_LANE_REG1.BT.B1 = 00010000 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x58;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01011000 , pll_ts_fbdiv_lane[7:0]
    }
    else if (ref_clk_sel==0){
    }
  }
  else if (pll_rate_sel==6){
    tmp0 = 0xFB; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp1 = 0x9; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp3 = 0x9; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp4 = 0xFB; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp6 = 0x51; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x67; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp8 = 0xB1; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp9 = 0x1E; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
    tmp10 = 0x9A; //PLL_TS_CAL_CTRL_LANE.BT.B2 , pll_ts_vco_amp_vth_mid_lane[3:0], pll_ts_vco_amp_vth_low_lane[3:0]
    tmp11 = 0x8; //PLL_TS_CAL_CTRL_LANE.BT.B3 , pll_ts_vco_amp_vth_high_lane[3:0]
    tmp13 = 0x15; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp15 = 0x6; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp16 = 0x24; //PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    tmp18 = 0xD0; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp3 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x21;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00100001 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x2;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000010 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp18 = 0x78;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp3 = 0x46;// PLL_TS_LANE_REG1.BT.B0 = 01000110 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x8;// PLL_TS_LANE_REG1.BT.B1 = 00001000 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x3E;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111110 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x2;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000010 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x34;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==5){
      tmp16 = 0x44;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 010001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==4){
      tmp3 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0xA5;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10100101 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00001010 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x44;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 010001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0x78;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
    }
    else if (ref_clk_sel==2){
      tmp3 = 0x63;// PLL_TS_LANE_REG1.BT.B0 = 01100011 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xF8;// PLL_TS_LANE_REG1.BT.B1 = 11111000 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0xC1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 11000001 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00001010 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x34;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0x98;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==1){
      tmp3 = 0xFB;// PLL_TS_LANE_REG1.BT.B0 = 11111011 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x2;// PLL_TS_LANE_REG1.BT.B1 = 00000010 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0xAC;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10101100 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00001010 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp18 = 0x98;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
      tmp16 = 0x14;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 000101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
  }
  else if (pll_rate_sel==5){
    tmp0 = 0xD1; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp1 = 0x9; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp3 = 0x27; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp4 = 0xFB; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp6 = 0x51; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x51; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp8 = 0xAE; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp10 = 0x9A; //PLL_TS_CAL_CTRL_LANE.BT.B2 , pll_ts_vco_amp_vth_mid_lane[3:0], pll_ts_vco_amp_vth_low_lane[3:0]
    tmp11 = 0x8; //PLL_TS_CAL_CTRL_LANE.BT.B3 , pll_ts_vco_amp_vth_high_lane[3:0]
    tmp13 = 0x14; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp15 = 0x6; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp16 = 0x24; //PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    tmp18 = 0xB0; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp16 = 0x54;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 010101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==6){
      tmp16 = 0x44;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 010001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==5){
      tmp3 = 0x85;// PLL_TS_LANE_REG1.BT.B0 = 10000101 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xFE;// PLL_TS_LANE_REG1.BT.B1 = 11111110 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x4C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001100 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x34;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==4){
    }
    else if (ref_clk_sel==3){
      tmp3 = 0xD;// PLL_TS_LANE_REG1.BT.B0 = 00001101 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xF1;// PLL_TS_LANE_REG1.BT.B1 = 11110001 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x65;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100101 , pll_ts_fbdiv_lane[7:0]
      tmp18 = 0xD0;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp3 = 0x4B;// PLL_TS_LANE_REG1.BT.B0 = 01001011 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x9;// PLL_TS_LANE_REG1.BT.B1 = 00001001 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x7F;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111111 , pll_ts_fbdiv_lane[7:0]
    }
    else if (ref_clk_sel==1){
      tmp3 = 0x36;// PLL_TS_LANE_REG1.BT.B0 = 00110110 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x1;// PLL_TS_LANE_REG1.BT.B1 = 00000001 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0xA9;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10101001 , pll_ts_fbdiv_lane[7:0]
      tmp18 = 0xD0;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
      tmp3 = 0xD;// PLL_TS_LANE_REG1.BT.B0 = 00001101 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xF1;// PLL_TS_LANE_REG1.BT.B1 = 11110001 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x65;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100101 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x14;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 000101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0xD0;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
  }
  else if (pll_rate_sel==4){
    tmp0 = 0xAF; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp1 = 0x9; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp6 = 0x51; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x64; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp8 = 0x40; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp10 = 0x9A; //PLL_TS_CAL_CTRL_LANE.BT.B2 , pll_ts_vco_amp_vth_mid_lane[3:0], pll_ts_vco_amp_vth_low_lane[3:0]
    tmp11 = 0x8; //PLL_TS_CAL_CTRL_LANE.BT.B3 , pll_ts_vco_amp_vth_high_lane[3:0]
    tmp13 = 0x14; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp15 = 0x6; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp16 = 0x24; //PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    tmp17 = 0xA; //TRXIVREF_RSVD_REG0.BT.B0 , trxivref_rsvd0_lane[7:0]
    tmp18 = 0xB0; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp7 = 0x20;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00100000 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x2;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000010 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp18 = 0x68;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01101000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp7 = 0x3C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111100 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x34;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0x78;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp7 = 0x4B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001011 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x34;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==4){
      tmp7 = 0x78;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111000 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x34;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0xD0;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp18 = 0xD0;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp7 = 0x7D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111101 , pll_ts_fbdiv_lane[7:0]
    }
    else if (ref_clk_sel==1){
      tmp3 = 0x9E;// PLL_TS_LANE_REG1.BT.B0 = 10011110 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xEF;// PLL_TS_LANE_REG1.BT.B1 = 11101111 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x53;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010011 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x14;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 000101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==0){
      tmp16 = 0x14;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 000101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0xD0;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
  }
  else if (pll_rate_sel==3){
    tmp0 = 0x47; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp1 = 0xE; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp2 = 0x10; //PLL_TS_DTX_REG2.BT.B3 , pll_ts_ssc_step_125ppm_lane[3:0], pll_ts_ssc_acc_factor_lane
    tmp3 = 0x55; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp4 = 0xF3; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp5 = 0x3; //PLL_TS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 , pll_ts_ck500m_div_lane[1:0], pll_ts_lcpll_postdiv_en_lane, pll_ts_lcpll_postdiv_1p5or2_en_lane
    tmp6 = 0xC5; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x3B; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp8 = 0xC8; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp13 = 0x1D; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp17 = 0xA; //TRXIVREF_RSVD_REG0.BT.B0 , trxivref_rsvd0_lane[7:0]
    tmp18 = 0xB4; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp3 = 0xDC;// PLL_TS_LANE_REG1.BT.B0 = 11011100 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xEF;// PLL_TS_LANE_REG1.BT.B1 = 11101111 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x2F;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00101111 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0x54;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01010100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp3 = 0x39;// PLL_TS_LANE_REG1.BT.B0 = 00111001 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x1;// PLL_TS_LANE_REG1.BT.B1 = 00000001 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0x6C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01101100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp3 = 0x1C;// PLL_TS_LANE_REG1.BT.B0 = 00011100 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xF;// PLL_TS_LANE_REG1.BT.B1 = 00001111 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x25;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00100101 , pll_ts_fbdiv_lane[7:0]
      tmp18 = 0x44;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01000100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp3 = 0x39;// PLL_TS_LANE_REG1.BT.B0 = 00111001 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x1;// PLL_TS_LANE_REG1.BT.B1 = 00000001 , pll_ts_init_foffs_lane[15:0]
      tmp18 = 0x6C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01101100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp7 = 0x93;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10010011 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==2){
      tmp3 = 0xE4;// PLL_TS_LANE_REG1.BT.B0 = 11100100 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xF8;// PLL_TS_LANE_REG1.BT.B1 = 11111000 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x5C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01011100 , pll_ts_fbdiv_lane[7:0]
      tmp18 = 0x9C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==1){
      tmp3 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x4;// PLL_TS_LANE_REG1.BT.B1 = 00000100 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x7B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111011 , pll_ts_fbdiv_lane[7:0]
      tmp18 = 0xD4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
      tmp7 = 0x93;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10010011 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000100 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    }
  }
  else if (pll_rate_sel==2){
    tmp0 = 0x59; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp1 = 0xC; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp3 = 0x10; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp4 = 0x10; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp5 = 0x3; //PLL_TS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 , pll_ts_ck500m_div_lane[1:0], pll_ts_lcpll_postdiv_en_lane, pll_ts_lcpll_postdiv_1p5or2_en_lane
    tmp7 = 0x33; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp8 = 0xA6; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp9 = 0x1E; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
    tmp13 = 0x1A; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp15 = 0x85; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp17 = 0xA; //TRXIVREF_RSVD_REG0.BT.B0 , trxivref_rsvd0_lane[7:0]
    tmp18 = 0xB3; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp3 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x66;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100110 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x54;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 010101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==6){
      tmp3 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp15 = 0x81;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0x7B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp7 = 0x20;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00100000 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x81;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp18 = 0x5B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01011011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp3 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp15 = 0x81;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp18 = 0x7B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp7 = 0x40;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01000000 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x81;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    }
    else if (ref_clk_sel==2){
      tmp3 = 0x5D;// PLL_TS_LANE_REG1.BT.B0 = 01011101 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xF6;// PLL_TS_LANE_REG1.BT.B1 = 11110110 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x9F;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10011111 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==1){
      tmp3 = 0x5D;// PLL_TS_LANE_REG1.BT.B0 = 01011101 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xF6;// PLL_TS_LANE_REG1.BT.B1 = 11110110 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x6A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01101010 , pll_ts_fbdiv_lane[7:0]
    }
    else if (ref_clk_sel==0){
      tmp7 = 0x80;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10000000 , pll_ts_fbdiv_lane[7:0]
      tmp18 = 0xD3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
  }
  else if (pll_rate_sel==1){
    tmp0 = 0xCD; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp1 = 0xB; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp4 = 0x4; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp5 = 0x3; //PLL_TS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 , pll_ts_ck500m_div_lane[1:0], pll_ts_lcpll_postdiv_en_lane, pll_ts_lcpll_postdiv_1p5or2_en_lane
    tmp7 = 0x3D; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp8 = 0xBD; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp10 = 0x89; //PLL_TS_CAL_CTRL_LANE.BT.B2 , pll_ts_vco_amp_vth_mid_lane[3:0], pll_ts_vco_amp_vth_low_lane[3:0]
    tmp11 = 0x7; //PLL_TS_CAL_CTRL_LANE.BT.B3 , pll_ts_vco_amp_vth_high_lane[3:0]
    tmp13 = 0x18; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp15 = 0x81; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp17 = 0xA; //TRXIVREF_RSVD_REG0.BT.B0 , trxivref_rsvd0_lane[7:0]
    tmp18 = 0xD3; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp4 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x27;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00100111 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0x7B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp4 = 0xF9;// PLL_TS_LANE_REG1.BT.B1 = 11111001 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x49;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001001 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x34;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==5){
      tmp3 = 0x33;// PLL_TS_LANE_REG1.BT.B0 = 00110011 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0xB3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp4 = 0xF9;// PLL_TS_LANE_REG1.BT.B1 = 11111001 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x92;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10010010 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x85;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000101 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x34;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001101## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==3){
      tmp3 = 0x33;// PLL_TS_LANE_REG1.BT.B0 = 00110011 , pll_ts_init_foffs_lane[15:0]
      tmp18 = 0xB3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp3 = 0xC2;// PLL_TS_LANE_REG1.BT.B0 = 11000010 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xF6;// PLL_TS_LANE_REG1.BT.B1 = 11110110 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x4C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001100 , pll_ts_fbdiv_lane[7:0]
    }
    else if (ref_clk_sel==1){
      tmp3 = 0xA5;// PLL_TS_LANE_REG1.BT.B0 = 10100101 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x11;// PLL_TS_LANE_REG1.BT.B1 = 00010001 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x66;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100110 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x85;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000101 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    }
    else if (ref_clk_sel==0){
      tmp3 = 0x33;// PLL_TS_LANE_REG1.BT.B0 = 00110011 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x7A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111010 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x85;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10000101 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    }
  }
  else if (pll_rate_sel==0){
    tmp1 = 0xA; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp5 = 0x3; //PLL_TS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 , pll_ts_ck500m_div_lane[1:0], pll_ts_lcpll_postdiv_en_lane, pll_ts_lcpll_postdiv_1p5or2_en_lane
    tmp6 = 0x51; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp7 = 0x2D; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp8 = 0x92; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp9 = 0x1E; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
    tmp10 = 0x56; //PLL_TS_CAL_CTRL_LANE.BT.B2 , pll_ts_vco_amp_vth_mid_lane[3:0], pll_ts_vco_amp_vth_low_lane[3:0]
    tmp13 = 0x17; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp15 = 0x1; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp17 = 0xA; //TRXIVREF_RSVD_REG0.BT.B0 , trxivref_rsvd0_lane[7:0]
    tmp18 = 0xB1; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp7 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00010010 , pll_ts_fbdiv_lane[7:0]
      tmp18 = 0x39;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 00111001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
      tmp18 = 0x79;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp3 = 0xCC;// PLL_TS_LANE_REG1.BT.B0 = 11001100 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xED;// PLL_TS_LANE_REG1.BT.B1 = 11101101 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x1C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00011100 , pll_ts_fbdiv_lane[7:0]
      tmp18 = 0x59;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01011001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp18 = 0x79;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp3 = 0xCC;// PLL_TS_LANE_REG1.BT.B0 = 11001100 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xED;// PLL_TS_LANE_REG1.BT.B1 = 11101101 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x38;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111000 , pll_ts_fbdiv_lane[7:0]
    }
    else if (ref_clk_sel==2){
      tmp3 = 0xEC;// PLL_TS_LANE_REG1.BT.B0 = 11101100 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xA;// PLL_TS_LANE_REG1.BT.B1 = 00001010 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x8D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10001101 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x5;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000101 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 001001## , pll_ts_refdiv_lane[3:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==1){
      tmp3 = 0xEC;// PLL_TS_LANE_REG1.BT.B0 = 11101100 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0xA;// PLL_TS_LANE_REG1.BT.B1 = 00001010 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x5E;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01011110 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x5;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000101 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    }
    else if (ref_clk_sel==0){
      tmp3 = 0x34;// PLL_TS_LANE_REG1.BT.B0 = 00110100 , pll_ts_init_foffs_lane[15:0]
      tmp4 = 0x12;// PLL_TS_LANE_REG1.BT.B1 = 00010010 , pll_ts_init_foffs_lane[15:0]
      tmp7 = 0x71;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01110001 , pll_ts_fbdiv_lane[7:0]
      tmp15 = 0x5;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00000101 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp18 = 0xD1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
  }
  if (tsrs_sel==0){
    PLL_TS_DTX_REG2.BT.B0 = tmp0;
    PLL_TS_DTX_REG2.BT.B1 = tmp1;
    PLL_TS_DTX_REG2.BT.B3 = tmp2;
    PLL_TS_LANE_REG1.BT.B0 = tmp3;
    PLL_TS_LANE_REG1.BT.B1 = tmp4;
    PLL_TS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 = tmp5;
    PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 = tmp6;
    PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = tmp7;
    PLL_TS_CAL_CTRL_LANE.BT.B0 = tmp8;
    PLL_TS_CAL_CTRL_LANE.BT.B1 = tmp9;
    PLL_TS_CAL_CTRL_LANE.BT.B2 = tmp10;
    PLL_TS_CAL_CTRL_LANE.BT.B3 = tmp11;
    PLL_TS_UPHY14_CMN_ANAREG_TOP_026.BT.B0 = tmp12;
    PLL_TS_LANE_REG12.BT.B0 = tmp13;
    PLL_TS_LANE_REG12.BT.B1 = tmp14;
    PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = tmp15;
    PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = tmp16;
    TRXIVREF_RSVD_REG0.BT.B0 = tmp17;
    PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = tmp18;
  }
  else{
    PLL_RS_DTX_REG2.BT.B0 = tmp0;
    PLL_RS_DTX_REG2.BT.B1 = tmp1;
    PLL_RS_DTX_REG2.BT.B3 = tmp2;
    PLL_RS_LANE_REG1.BT.B0 = tmp3;
    PLL_RS_LANE_REG1.BT.B1 = tmp4;
    PLL_RS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 = tmp5;
    PLL_RS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 = tmp6;
    PLL_RS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = tmp7;
    PLL_RS_CAL_CTRL_LANE.BT.B0 = tmp8;
    PLL_RS_CAL_CTRL_LANE.BT.B1 = tmp9;
    PLL_RS_CAL_CTRL_LANE.BT.B2 = tmp10;
    PLL_RS_CAL_CTRL_LANE.BT.B3 = tmp11;
    PLL_RS_UPHY14_CMN_ANAREG_TOP_026.BT.B0 = tmp12;
    PLL_RS_LANE_REG12.BT.B0 = tmp13;
    PLL_RS_LANE_REG12.BT.B1 = tmp14;
    PLL_RS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = tmp15;
    PLL_RS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = tmp16;
    TRXIVREF_RSVD_REG0.BT.B0 = tmp17;
    PLL_RS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = tmp18;
  }
}
void loadspeedtbl_tx() BANKING_CTRL {
  uint8_t tmp0 = 0x2; //ANA_TXREG_REG0.BT.B0 , txreg_speedtrk_clk_lane[3:0]
  uint8_t tmp1 = 0x40; //TX_SYSTEM_LANE0.BT.B0 , tx_data_width_lane[1:0]
  uint8_t tmp2 = 0x1; //ANA_TXREG_REG1.BT.B0 , txreg_speedtrk_data_lane[3:0]
  uint8_t tmp3 = 0x40; //PHYTEST_TX0.BT.B2 , tx_train_pat_sel_lane[1:0]
  uint8_t tmp4 = 0xC0; //TX_SYSTEM_LANE1.BT.B3 , tx_halfrate_en_lane, tx_pam2_en_lane
  uint8_t tmp5 = 0x3; //PLL_TS_LANE_REG12.BT.B2 , tx_pll_rate_sel_lane[4:0]
  uint8_t tmp6 = 0x0; //ANA_TXSPEED_REG0.BT.B0 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
  uint8_t tmp7 = 0x0; //TX_SPEED_CONVERT_LANE.BT.B1 , txdata_latency_reduce_en_lane
  uint8_t tmp8 = 0x4; //TX_TRAIN_PATTTERN_REG0.BT.B2 , tx_train_pat_two_zero_lane, tx_train_pat_mode_lane, tx_train_pat_toggle_lane
  if (gen_tx==48){
    tmp1 = 0x80;// TX_SYSTEM_LANE0.BT.B0 = 10###### , tx_data_width_lane[1:0]
    tmp2 = 0x2;// ANA_TXREG_REG1.BT.B0 = ####0010 , txreg_speedtrk_data_lane[3:0]
    tmp3 = 0xC0;// PHYTEST_TX0.BT.B2 = 11###### , tx_train_pat_sel_lane[1:0]
    tmp4 = 0x80;// TX_SYSTEM_LANE1.BT.B3 = 10###### , tx_halfrate_en_lane, tx_pam2_en_lane
    tmp5 = 0x18;// PLL_TS_LANE_REG12.BT.B2 = ###11000 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xC0;// ANA_TXSPEED_REG0.BT.B0 = 11000000 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
  }
  else if (gen_tx==47){
    tmp0 = 0x1;// ANA_TXREG_REG0.BT.B0 = ####0001 , txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0x0;// PLL_TS_LANE_REG12.BT.B2 = ###00000 , tx_pll_rate_sel_lane[4:0]
  }
  else if (gen_tx==46){
    tmp0 = 0x1;// ANA_TXREG_REG0.BT.B0 = ####0001 , txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0x6;// PLL_TS_LANE_REG12.BT.B2 = ###00110 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xD1;// ANA_TXSPEED_REG0.BT.B0 = 11010001 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
    tmp7 = 0x80;// TX_SPEED_CONVERT_LANE.BT.B1 = 1####### , txdata_latency_reduce_en_lane
  }
  else if (gen_tx==45){
    tmp0 = 0x7;// ANA_TXREG_REG0.BT.B0 = ####0111 , txreg_speedtrk_clk_lane[3:0]
    tmp1 = 0xC0;// TX_SYSTEM_LANE0.BT.B0 = 11###### , tx_data_width_lane[1:0]
    tmp2 = 0x7;// ANA_TXREG_REG1.BT.B0 = ####0111 , txreg_speedtrk_data_lane[3:0]
    tmp3 = 0xC0;// PHYTEST_TX0.BT.B2 = 11###### , tx_train_pat_sel_lane[1:0]
    tmp4 = 0x0;// TX_SYSTEM_LANE1.BT.B3 = 00###### , tx_halfrate_en_lane, tx_pam2_en_lane
    tmp5 = 0x16;// PLL_TS_LANE_REG12.BT.B2 = ###10110 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xC0;// ANA_TXSPEED_REG0.BT.B0 = 11000000 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
  }
  else if (gen_tx==44){
    tmp0 = 0x7;// ANA_TXREG_REG0.BT.B0 = ####0111 , txreg_speedtrk_clk_lane[3:0]
    tmp1 = 0xC0;// TX_SYSTEM_LANE0.BT.B0 = 11###### , tx_data_width_lane[1:0]
    tmp2 = 0x7;// ANA_TXREG_REG1.BT.B0 = ####0111 , txreg_speedtrk_data_lane[3:0]
    tmp3 = 0xC0;// PHYTEST_TX0.BT.B2 = 11###### , tx_train_pat_sel_lane[1:0]
    tmp4 = 0x0;// TX_SYSTEM_LANE1.BT.B3 = 00###### , tx_halfrate_en_lane, tx_pam2_en_lane
    tmp5 = 0x15;// PLL_TS_LANE_REG12.BT.B2 = ###10101 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xC0;// ANA_TXSPEED_REG0.BT.B0 = 11000000 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
  }
  else if (gen_tx==43){
    tmp0 = 0x4;// ANA_TXREG_REG0.BT.B0 = ####0100 , txreg_speedtrk_clk_lane[3:0]
    tmp1 = 0x80;// TX_SYSTEM_LANE0.BT.B0 = 10###### , tx_data_width_lane[1:0]
    tmp2 = 0x4;// ANA_TXREG_REG1.BT.B0 = ####0100 , txreg_speedtrk_data_lane[3:0]
    tmp3 = 0x80;// PHYTEST_TX0.BT.B2 = 10###### , tx_train_pat_sel_lane[1:0]
    tmp4 = 0x40;// TX_SYSTEM_LANE1.BT.B3 = 01###### , tx_halfrate_en_lane, tx_pam2_en_lane
    tmp5 = 0x16;// PLL_TS_LANE_REG12.BT.B2 = ###10110 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xC0;// ANA_TXSPEED_REG0.BT.B0 = 11000000 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
  }
  else if (gen_tx==42){
    tmp0 = 0x4;// ANA_TXREG_REG0.BT.B0 = ####0100 , txreg_speedtrk_clk_lane[3:0]
    tmp1 = 0x80;// TX_SYSTEM_LANE0.BT.B0 = 10###### , tx_data_width_lane[1:0]
    tmp2 = 0x4;// ANA_TXREG_REG1.BT.B0 = ####0100 , txreg_speedtrk_data_lane[3:0]
    tmp3 = 0x80;// PHYTEST_TX0.BT.B2 = 10###### , tx_train_pat_sel_lane[1:0]
    tmp4 = 0x40;// TX_SYSTEM_LANE1.BT.B3 = 01###### , tx_halfrate_en_lane, tx_pam2_en_lane
    tmp5 = 0x15;// PLL_TS_LANE_REG12.BT.B2 = ###10101 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xC0;// ANA_TXSPEED_REG0.BT.B0 = 11000000 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
  }
  else if (gen_tx==41){
    tmp0 = 0xC;// ANA_TXREG_REG0.BT.B0 = ####1100 , txreg_speedtrk_clk_lane[3:0]
    tmp1 = 0xC0;// TX_SYSTEM_LANE0.BT.B0 = 11###### , tx_data_width_lane[1:0]
    tmp2 = 0xC;// ANA_TXREG_REG1.BT.B0 = ####1100 , txreg_speedtrk_data_lane[3:0]
    tmp3 = 0xC0;// PHYTEST_TX0.BT.B2 = 11###### , tx_train_pat_sel_lane[1:0]
    tmp4 = 0x0;// TX_SYSTEM_LANE1.BT.B3 = 00###### , tx_halfrate_en_lane, tx_pam2_en_lane
    tmp5 = 0x14;// PLL_TS_LANE_REG12.BT.B2 = ###10100 , tx_pll_rate_sel_lane[4:0]
  }
  else if (gen_tx==40){
    tmp0 = 0xC;// ANA_TXREG_REG0.BT.B0 = ####1100 , txreg_speedtrk_clk_lane[3:0]
    tmp1 = 0xC0;// TX_SYSTEM_LANE0.BT.B0 = 11###### , tx_data_width_lane[1:0]
    tmp2 = 0xC;// ANA_TXREG_REG1.BT.B0 = ####1100 , txreg_speedtrk_data_lane[3:0]
    tmp3 = 0xC0;// PHYTEST_TX0.BT.B2 = 11###### , tx_train_pat_sel_lane[1:0]
    tmp4 = 0x0;// TX_SYSTEM_LANE1.BT.B3 = 00###### , tx_halfrate_en_lane, tx_pam2_en_lane
    tmp5 = 0x12;// PLL_TS_LANE_REG12.BT.B2 = ###10010 , tx_pll_rate_sel_lane[4:0]
  }
  else if (gen_tx==39){
    tmp0 = 0xC;// ANA_TXREG_REG0.BT.B0 = ####1100 , txreg_speedtrk_clk_lane[3:0]
    tmp1 = 0xC0;// TX_SYSTEM_LANE0.BT.B0 = 11###### , tx_data_width_lane[1:0]
    tmp2 = 0xC;// ANA_TXREG_REG1.BT.B0 = ####1100 , txreg_speedtrk_data_lane[3:0]
    tmp3 = 0xC0;// PHYTEST_TX0.BT.B2 = 11###### , tx_train_pat_sel_lane[1:0]
    tmp4 = 0x0;// TX_SYSTEM_LANE1.BT.B3 = 00###### , tx_halfrate_en_lane, tx_pam2_en_lane
    tmp5 = 0x10;// PLL_TS_LANE_REG12.BT.B2 = ###10000 , tx_pll_rate_sel_lane[4:0]
  }
  else if (gen_tx==38){
    tmp0 = 0x7;// ANA_TXREG_REG0.BT.B0 = ####0111 , txreg_speedtrk_clk_lane[3:0]
    tmp1 = 0x80;// TX_SYSTEM_LANE0.BT.B0 = 10###### , tx_data_width_lane[1:0]
    tmp2 = 0x7;// ANA_TXREG_REG1.BT.B0 = ####0111 , txreg_speedtrk_data_lane[3:0]
    tmp3 = 0xC0;// PHYTEST_TX0.BT.B2 = 11###### , tx_train_pat_sel_lane[1:0]
    tmp4 = 0x80;// TX_SYSTEM_LANE1.BT.B3 = 10###### , tx_halfrate_en_lane, tx_pam2_en_lane
    tmp5 = 0x14;// PLL_TS_LANE_REG12.BT.B2 = ###10100 , tx_pll_rate_sel_lane[4:0]
  }
  else if (gen_tx==37){
    tmp0 = 0x7;// ANA_TXREG_REG0.BT.B0 = ####0111 , txreg_speedtrk_clk_lane[3:0]
    tmp1 = 0x80;// TX_SYSTEM_LANE0.BT.B0 = 10###### , tx_data_width_lane[1:0]
    tmp2 = 0x7;// ANA_TXREG_REG1.BT.B0 = ####0111 , txreg_speedtrk_data_lane[3:0]
    tmp3 = 0xC0;// PHYTEST_TX0.BT.B2 = 11###### , tx_train_pat_sel_lane[1:0]
    tmp4 = 0x80;// TX_SYSTEM_LANE1.BT.B3 = 10###### , tx_halfrate_en_lane, tx_pam2_en_lane
    tmp5 = 0x13;// PLL_TS_LANE_REG12.BT.B2 = ###10011 , tx_pll_rate_sel_lane[4:0]
  }
  else if (gen_tx==36){
    tmp0 = 0xC;// ANA_TXREG_REG0.BT.B0 = ####1100 , txreg_speedtrk_clk_lane[3:0]
    tmp1 = 0x80;// TX_SYSTEM_LANE0.BT.B0 = 10###### , tx_data_width_lane[1:0]
    tmp2 = 0xC;// ANA_TXREG_REG1.BT.B0 = ####1100 , txreg_speedtrk_data_lane[3:0]
    tmp3 = 0x80;// PHYTEST_TX0.BT.B2 = 10###### , tx_train_pat_sel_lane[1:0]
    tmp4 = 0x40;// TX_SYSTEM_LANE1.BT.B3 = 01###### , tx_halfrate_en_lane, tx_pam2_en_lane
    tmp5 = 0x12;// PLL_TS_LANE_REG12.BT.B2 = ###10010 , tx_pll_rate_sel_lane[4:0]
  }
  else if (gen_tx==35){
    tmp0 = 0x7;// ANA_TXREG_REG0.BT.B0 = ####0111 , txreg_speedtrk_clk_lane[3:0]
    tmp1 = 0x80;// TX_SYSTEM_LANE0.BT.B0 = 10###### , tx_data_width_lane[1:0]
    tmp2 = 0x7;// ANA_TXREG_REG1.BT.B0 = ####0111 , txreg_speedtrk_data_lane[3:0]
    tmp3 = 0xC0;// PHYTEST_TX0.BT.B2 = 11###### , tx_train_pat_sel_lane[1:0]
    tmp4 = 0x80;// TX_SYSTEM_LANE1.BT.B3 = 10###### , tx_halfrate_en_lane, tx_pam2_en_lane
    tmp5 = 0x10;// PLL_TS_LANE_REG12.BT.B2 = ###10000 , tx_pll_rate_sel_lane[4:0]
  }
  else if (gen_tx==34){
    tmp0 = 0x7;// ANA_TXREG_REG0.BT.B0 = ####0111 , txreg_speedtrk_clk_lane[3:0]
    tmp1 = 0x80;// TX_SYSTEM_LANE0.BT.B0 = 10###### , tx_data_width_lane[1:0]
    tmp2 = 0x7;// ANA_TXREG_REG1.BT.B0 = ####0111 , txreg_speedtrk_data_lane[3:0]
    tmp3 = 0xC0;// PHYTEST_TX0.BT.B2 = 11###### , tx_train_pat_sel_lane[1:0]
    tmp4 = 0x80;// TX_SYSTEM_LANE1.BT.B3 = 10###### , tx_halfrate_en_lane, tx_pam2_en_lane
    tmp5 = 0xE;// PLL_TS_LANE_REG12.BT.B2 = ###01110 , tx_pll_rate_sel_lane[4:0]
  }
  else if (gen_tx==33){
    tmp0 = 0xB;// ANA_TXREG_REG0.BT.B0 = ####1011 , txreg_speedtrk_clk_lane[3:0]
    tmp1 = 0x80;// TX_SYSTEM_LANE0.BT.B0 = 10###### , tx_data_width_lane[1:0]
    tmp2 = 0xB;// ANA_TXREG_REG1.BT.B0 = ####1011 , txreg_speedtrk_data_lane[3:0]
    tmp3 = 0x80;// PHYTEST_TX0.BT.B2 = 10###### , tx_train_pat_sel_lane[1:0]
    tmp4 = 0x40;// TX_SYSTEM_LANE1.BT.B3 = 01###### , tx_halfrate_en_lane, tx_pam2_en_lane
    tmp5 = 0xC;// PLL_TS_LANE_REG12.BT.B2 = ###01100 , tx_pll_rate_sel_lane[4:0]
  }
  else if (gen_tx==32){
    tmp0 = 0x6;// ANA_TXREG_REG0.BT.B0 = ####0110 , txreg_speedtrk_clk_lane[3:0]
    tmp1 = 0x80;// TX_SYSTEM_LANE0.BT.B0 = 10###### , tx_data_width_lane[1:0]
    tmp2 = 0x6;// ANA_TXREG_REG1.BT.B0 = ####0110 , txreg_speedtrk_data_lane[3:0]
    tmp3 = 0xC0;// PHYTEST_TX0.BT.B2 = 11###### , tx_train_pat_sel_lane[1:0]
    tmp4 = 0x80;// TX_SYSTEM_LANE1.BT.B3 = 10###### , tx_halfrate_en_lane, tx_pam2_en_lane
    tmp5 = 0x8;// PLL_TS_LANE_REG12.BT.B2 = ###01000 , tx_pll_rate_sel_lane[4:0]
  }
  else if (gen_tx==31){
    tmp0 = 0x5;// ANA_TXREG_REG0.BT.B0 = ####0101 , txreg_speedtrk_clk_lane[3:0]
    tmp1 = 0x80;// TX_SYSTEM_LANE0.BT.B0 = 10###### , tx_data_width_lane[1:0]
    tmp2 = 0x5;// ANA_TXREG_REG1.BT.B0 = ####0101 , txreg_speedtrk_data_lane[3:0]
    tmp3 = 0xC0;// PHYTEST_TX0.BT.B2 = 11###### , tx_train_pat_sel_lane[1:0]
    tmp4 = 0x80;// TX_SYSTEM_LANE1.BT.B3 = 10###### , tx_halfrate_en_lane, tx_pam2_en_lane
    tmp5 = 0x1;// PLL_TS_LANE_REG12.BT.B2 = ###00001 , tx_pll_rate_sel_lane[4:0]
  }
  else if (gen_tx==30){
    tmp0 = 0x4;// ANA_TXREG_REG0.BT.B0 = ####0100 , txreg_speedtrk_clk_lane[3:0]
    tmp2 = 0x4;// ANA_TXREG_REG1.BT.B0 = ####0100 , txreg_speedtrk_data_lane[3:0]
    tmp3 = 0x80;// PHYTEST_TX0.BT.B2 = 10###### , tx_train_pat_sel_lane[1:0]
    tmp5 = 0x14;// PLL_TS_LANE_REG12.BT.B2 = ###10100 , tx_pll_rate_sel_lane[4:0]
  }
  else if (gen_tx==29){
    tmp0 = 0x4;// ANA_TXREG_REG0.BT.B0 = ####0100 , txreg_speedtrk_clk_lane[3:0]
    tmp2 = 0x4;// ANA_TXREG_REG1.BT.B0 = ####0100 , txreg_speedtrk_data_lane[3:0]
    tmp3 = 0x80;// PHYTEST_TX0.BT.B2 = 10###### , tx_train_pat_sel_lane[1:0]
    tmp5 = 0x13;// PLL_TS_LANE_REG12.BT.B2 = ###10011 , tx_pll_rate_sel_lane[4:0]
  }
  else if (gen_tx==28){
    tmp0 = 0x4;// ANA_TXREG_REG0.BT.B0 = ####0100 , txreg_speedtrk_clk_lane[3:0]
    tmp2 = 0x4;// ANA_TXREG_REG1.BT.B0 = ####0100 , txreg_speedtrk_data_lane[3:0]
    tmp3 = 0x80;// PHYTEST_TX0.BT.B2 = 10###### , tx_train_pat_sel_lane[1:0]
    tmp5 = 0x11;// PLL_TS_LANE_REG12.BT.B2 = ###10001 , tx_pll_rate_sel_lane[4:0]
  }
  else if (gen_tx==27){
    tmp0 = 0x4;// ANA_TXREG_REG0.BT.B0 = ####0100 , txreg_speedtrk_clk_lane[3:0]
    tmp2 = 0x4;// ANA_TXREG_REG1.BT.B0 = ####0100 , txreg_speedtrk_data_lane[3:0]
    tmp3 = 0x80;// PHYTEST_TX0.BT.B2 = 10###### , tx_train_pat_sel_lane[1:0]
    tmp5 = 0x10;// PLL_TS_LANE_REG12.BT.B2 = ###10000 , tx_pll_rate_sel_lane[4:0]
  }
  else if (gen_tx==26){
    tmp0 = 0x4;// ANA_TXREG_REG0.BT.B0 = ####0100 , txreg_speedtrk_clk_lane[3:0]
    tmp2 = 0x4;// ANA_TXREG_REG1.BT.B0 = ####0100 , txreg_speedtrk_data_lane[3:0]
    tmp3 = 0x80;// PHYTEST_TX0.BT.B2 = 10###### , tx_train_pat_sel_lane[1:0]
    tmp5 = 0xE;// PLL_TS_LANE_REG12.BT.B2 = ###01110 , tx_pll_rate_sel_lane[4:0]
  }
  else if (gen_tx==25){
    tmp0 = 0x4;// ANA_TXREG_REG0.BT.B0 = ####0100 , txreg_speedtrk_clk_lane[3:0]
    tmp2 = 0x4;// ANA_TXREG_REG1.BT.B0 = ####0100 , txreg_speedtrk_data_lane[3:0]
    tmp3 = 0x80;// PHYTEST_TX0.BT.B2 = 10###### , tx_train_pat_sel_lane[1:0]
    tmp5 = 0x9;// PLL_TS_LANE_REG12.BT.B2 = ###01001 , tx_pll_rate_sel_lane[4:0]
  }
  else if (gen_tx==24){
    tmp0 = 0x3;// ANA_TXREG_REG0.BT.B0 = ####0011 , txreg_speedtrk_clk_lane[3:0]
    tmp2 = 0x3;// ANA_TXREG_REG1.BT.B0 = ####0011 , txreg_speedtrk_data_lane[3:0]
    tmp3 = 0x80;// PHYTEST_TX0.BT.B2 = 10###### , tx_train_pat_sel_lane[1:0]
    tmp5 = 0x6;// PLL_TS_LANE_REG12.BT.B2 = ###00110 , tx_pll_rate_sel_lane[4:0]
  }
  else if (gen_tx==23){
    tmp0 = 0x1;// ANA_TXREG_REG0.BT.B0 = ####0001 , txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0x15;// PLL_TS_LANE_REG12.BT.B2 = ###10101 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xC0;// ANA_TXSPEED_REG0.BT.B0 = 11000000 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
  }
  else if (gen_tx==22){
    tmp2 = 0x2;// ANA_TXREG_REG1.BT.B0 = ####0010 , txreg_speedtrk_data_lane[3:0]
    tmp5 = 0xD;// PLL_TS_LANE_REG12.BT.B2 = ###01101 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xC1;// ANA_TXSPEED_REG0.BT.B0 = 11000001 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
  }
  else if (gen_tx==21){
    tmp2 = 0x2;// ANA_TXREG_REG1.BT.B0 = ####0010 , txreg_speedtrk_data_lane[3:0]
    tmp5 = 0xC;// PLL_TS_LANE_REG12.BT.B2 = ###01100 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xC1;// ANA_TXSPEED_REG0.BT.B0 = 11000001 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
  }
  else if (gen_tx==20){
    tmp2 = 0x2;// ANA_TXREG_REG1.BT.B0 = ####0010 , txreg_speedtrk_data_lane[3:0]
    tmp5 = 0xA;// PLL_TS_LANE_REG12.BT.B2 = ###01010 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xC1;// ANA_TXSPEED_REG0.BT.B0 = 11000001 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
  }
  else if (gen_tx==19){
    tmp2 = 0x2;// ANA_TXREG_REG1.BT.B0 = ####0010 , txreg_speedtrk_data_lane[3:0]
    tmp5 = 0x9;// PLL_TS_LANE_REG12.BT.B2 = ###01001 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xC1;// ANA_TXSPEED_REG0.BT.B0 = 11000001 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
  }
  else if (gen_tx==18){
    tmp2 = 0x2;// ANA_TXREG_REG1.BT.B0 = ####0010 , txreg_speedtrk_data_lane[3:0]
    tmp5 = 0x7;// PLL_TS_LANE_REG12.BT.B2 = ###00111 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xC1;// ANA_TXSPEED_REG0.BT.B0 = 11000001 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
  }
  else if (gen_tx==17){
    tmp2 = 0x2;// ANA_TXREG_REG1.BT.B0 = ####0010 , txreg_speedtrk_data_lane[3:0]
    tmp5 = 0x6;// PLL_TS_LANE_REG12.BT.B2 = ###00110 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xC1;// ANA_TXSPEED_REG0.BT.B0 = 11000001 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
  }
  else if (gen_tx==16){
    tmp2 = 0x2;// ANA_TXREG_REG1.BT.B0 = ####0010 , txreg_speedtrk_data_lane[3:0]
    tmp5 = 0x5;// PLL_TS_LANE_REG12.BT.B2 = ###00101 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xC1;// ANA_TXSPEED_REG0.BT.B0 = 11000001 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
  }
  else if (gen_tx==15){
    tmp0 = 0x1;// ANA_TXREG_REG0.BT.B0 = ####0001 , txreg_speedtrk_clk_lane[3:0]
    tmp6 = 0xC1;// ANA_TXSPEED_REG0.BT.B0 = 11000001 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
  }
  else if (gen_tx==14){
    tmp0 = 0x1;// ANA_TXREG_REG0.BT.B0 = ####0001 , txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0x2;// PLL_TS_LANE_REG12.BT.B2 = ###00010 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xC1;// ANA_TXSPEED_REG0.BT.B0 = 11000001 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
  }
  else if (gen_tx==13){
    tmp0 = 0x1;// ANA_TXREG_REG0.BT.B0 = ####0001 , txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0x0;// PLL_TS_LANE_REG12.BT.B2 = ###00000 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x88;// ANA_TXSPEED_REG0.BT.B0 = 10001000 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
  }
  else if (gen_tx==12){
    tmp5 = 0xC;// PLL_TS_LANE_REG12.BT.B2 = ###01100 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xC9;// ANA_TXSPEED_REG0.BT.B0 = 11001001 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
    tmp7 = 0x80;// TX_SPEED_CONVERT_LANE.BT.B1 = 1####### , txdata_latency_reduce_en_lane
  }
  else if (gen_tx==11){
    tmp5 = 0xB;// PLL_TS_LANE_REG12.BT.B2 = ###01011 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xC9;// ANA_TXSPEED_REG0.BT.B0 = 11001001 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
    tmp7 = 0x80;// TX_SPEED_CONVERT_LANE.BT.B1 = 1####### , txdata_latency_reduce_en_lane
  }
  else if (gen_tx==10){
    tmp5 = 0x6;// PLL_TS_LANE_REG12.BT.B2 = ###00110 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xC9;// ANA_TXSPEED_REG0.BT.B0 = 11001001 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
    tmp7 = 0x80;// TX_SPEED_CONVERT_LANE.BT.B1 = 1####### , txdata_latency_reduce_en_lane
  }
  else if (gen_tx==9){
    tmp5 = 0x4;// PLL_TS_LANE_REG12.BT.B2 = ###00100 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xC9;// ANA_TXSPEED_REG0.BT.B0 = 11001001 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
    tmp7 = 0x80;// TX_SPEED_CONVERT_LANE.BT.B1 = 1####### , txdata_latency_reduce_en_lane
  }
  else if (gen_tx==8){
    tmp0 = 0x1;// ANA_TXREG_REG0.BT.B0 = ####0001 , txreg_speedtrk_clk_lane[3:0]
    tmp6 = 0xC9;// ANA_TXSPEED_REG0.BT.B0 = 11001001 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
    tmp7 = 0x80;// TX_SPEED_CONVERT_LANE.BT.B1 = 1####### , txdata_latency_reduce_en_lane
  }
  else if (gen_tx==7){
    tmp0 = 0x1;// ANA_TXREG_REG0.BT.B0 = ####0001 , txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0x2;// PLL_TS_LANE_REG12.BT.B2 = ###00010 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xC9;// ANA_TXSPEED_REG0.BT.B0 = 11001001 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
    tmp7 = 0x80;// TX_SPEED_CONVERT_LANE.BT.B1 = 1####### , txdata_latency_reduce_en_lane
  }
  else if (gen_tx==6){
    tmp5 = 0xC;// PLL_TS_LANE_REG12.BT.B2 = ###01100 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xD1;// ANA_TXSPEED_REG0.BT.B0 = 11010001 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
    tmp7 = 0x80;// TX_SPEED_CONVERT_LANE.BT.B1 = 1####### , txdata_latency_reduce_en_lane
  }
  else if (gen_tx==5){
    tmp0 = 0x1;// ANA_TXREG_REG0.BT.B0 = ####0001 , txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0x4;// PLL_TS_LANE_REG12.BT.B2 = ###00100 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xD1;// ANA_TXSPEED_REG0.BT.B0 = 11010001 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
    tmp7 = 0x80;// TX_SPEED_CONVERT_LANE.BT.B1 = 1####### , txdata_latency_reduce_en_lane
  }
  else if (gen_tx==4){
    tmp0 = 0x1;// ANA_TXREG_REG0.BT.B0 = ####0001 , txreg_speedtrk_clk_lane[3:0]
    tmp6 = 0xD1;// ANA_TXSPEED_REG0.BT.B0 = 11010001 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
    tmp7 = 0x80;// TX_SPEED_CONVERT_LANE.BT.B1 = 1####### , txdata_latency_reduce_en_lane
  }
  else if (gen_tx==3){
    tmp0 = 0x1;// ANA_TXREG_REG0.BT.B0 = ####0001 , txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0x2;// PLL_TS_LANE_REG12.BT.B2 = ###00010 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xD1;// ANA_TXSPEED_REG0.BT.B0 = 11010001 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
    tmp7 = 0x80;// TX_SPEED_CONVERT_LANE.BT.B1 = 1####### , txdata_latency_reduce_en_lane
  }
  else if (gen_tx==2){
    tmp5 = 0x4;// PLL_TS_LANE_REG12.BT.B2 = ###00100 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xD9;// ANA_TXSPEED_REG0.BT.B0 = 11011001 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
    tmp7 = 0x80;// TX_SPEED_CONVERT_LANE.BT.B1 = 1####### , txdata_latency_reduce_en_lane
  }
  else if (gen_tx==1){
    tmp0 = 0x1;// ANA_TXREG_REG0.BT.B0 = ####0001 , txreg_speedtrk_clk_lane[3:0]
    tmp6 = 0xD9;// ANA_TXSPEED_REG0.BT.B0 = 11011001 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
    tmp7 = 0x80;// TX_SPEED_CONVERT_LANE.BT.B1 = 1####### , txdata_latency_reduce_en_lane
  }
  else if (gen_tx==0){
    tmp0 = 0x1;// ANA_TXREG_REG0.BT.B0 = ####0001 , txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0x2;// PLL_TS_LANE_REG12.BT.B2 = ###00010 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xD9;// ANA_TXSPEED_REG0.BT.B0 = 11011001 , tx_fir_bypass_din_latch_lane, tx_fir_bypass_dout_latch_lane, tx_clk_div_dig_lane[2:0], txspeed_div_lane[2:0]
    tmp7 = 0x80;// TX_SPEED_CONVERT_LANE.BT.B1 = 1####### , txdata_latency_reduce_en_lane
  }
  ANA_TXREG_REG0.BT.B0 = tmp0;
  TX_SYSTEM_LANE0.BT.B0 = tmp1;
  ANA_TXREG_REG1.BT.B0 = tmp2;
  PHYTEST_TX0.BT.B2 = tmp3;
  TX_SYSTEM_LANE1.BT.B3 = tmp4;
  PLL_TS_LANE_REG12.BT.B2 = tmp5;
  ANA_TXSPEED_REG0.BT.B0 = tmp6;
  TX_SPEED_CONVERT_LANE.BT.B1 = tmp7;
  TX_TRAIN_PATTTERN_REG0.BT.B2 = (TX_TRAIN_PATTTERN_REG0.BT.B2 & 0x3) | (tmp8 & 0xfc); // (TX_TRAIN_PATTTERN_REG0.BT.B2 & 00000011) | (tmp8 & 11111100)
}
#endif //_SERDES_BUILD
