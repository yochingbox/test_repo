#include "common.h"
#ifdef USE_BANKING
#pragma codeseg BANK3
#endif
#ifdef _SERDES_BUILD
void loadspeedtbl_rx() BANKING_CTRL {
  uint8_t tmp0 = 0xA4; //RX_TOP_ANA_REG_37.BT.B0 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
  uint8_t tmp1 = 0x70; //RX_TOP_ANA_REG_40.BT.B0 , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
  uint8_t tmp2 = 0x0; //RX_TOP_ANA_REG_35.BT.B0 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
  uint8_t tmp3 = 0xC0; //RX_TOP_ANA_REG_33.BT.B0 , rx_ctle_cs1_ctrl_lane[4:0]
  uint8_t tmp4 = 0x2; //RX_EQ_REG0.BT.B0 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
  uint8_t tmp5 = 0x4; //TX_TRAIN_PATTTERN_REG0.BT.B1 , ethernet_mode_lane[1:0]
  uint8_t tmp6 = 0x58; //RX_TOP_ANA_REG_39.BT.B0 , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
  uint8_t tmp7 = 0x1; //INPUT_RX_PIN_REG0_LANE.BT.B0 , rx_pam2_en_lane
  uint8_t tmp8 = 0x15; //TRX_PLL_CTRL_LANE.BT.B2 , rx_pll_rate_sel_lane[4:0]
  uint8_t tmp9 = 0x7; //ANA_RX_PI_REG0.BT.B0 , rx_pi_icclow_ctrl_lane[3:0]
  uint8_t tmp10 = 0x5; //ANA_RX_PI_REG1.BT.B0 , rx_pi_icc_ctrl_lane[3:0]
  uint8_t tmp11 = 0x5C; //RX_TOP_ANA_REG_38.BT.B0 , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
  uint8_t tmp12 = 0xA; //RX_TOP_ANA_REG_32.BT.B0 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
  uint8_t tmp13 = 0x28; //RX_TOP_ANA_REG_36.BT.B0 , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
  uint8_t tmp14 = 0x6A; //RX_TOP_ANA_REG_34.BT.B0 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
  uint8_t tmp15 = 0x0; //SYSTEM_CONFIG_0.BT.B2 , rx_nt_mul_lane[1:0], pll_tsrs_switch_xdat_lane, pll_sel_lane[1:0], mcu_ctrl_pll_lane[1:0]
  uint8_t tmp16 = 0x20; //SYSTEM_CONFIG_0.BT.B3 , rx_rate_2_pll_ratio_x8_lane[7:0]
  uint8_t tmp17 = 0x22; //RX_SPD_TABLE_LANE.BT.B0 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
  uint8_t tmp18 = 0x12; //RX_SPD_TABLE_LANE.BT.B1 , rx_rxclk_2x_div_ratio_lane[2:0], rx_rxclk_div_ratio_lane[2:0]
  uint8_t tmp19 = 0x7; //RX_SPD_TABLE_LANE.BT.B2 , rx_rxclk_4x_div_ratio_lane[2:0]
  if (gen_rx==52){
    tmp0 = 0xC4;// RX_TOP_ANA_REG_37.BT.B0 = 11000100 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp1 = 0x30;// RX_TOP_ANA_REG_40.BT.B0 = 00110### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp4 = 0x3;// RX_EQ_REG0.BT.B0 = ####0011 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp5 = 0xC;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####11## , ethernet_mode_lane[1:0]
    tmp7 = 0x0;// INPUT_RX_PIN_REG0_LANE.BT.B0 = #######0 , rx_pam2_en_lane
    tmp8 = 0x13;// TRX_PLL_CTRL_LANE.BT.B2 = ###10011 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0xB;// ANA_RX_PI_REG0.BT.B0 = ####1011 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0xB;// ANA_RX_PI_REG1.BT.B0 = ####1011 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0xE8;// RX_TOP_ANA_REG_38.BT.B0 = 1110100# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp12 = 0xF;// RX_TOP_ANA_REG_32.BT.B0 = 00001111 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x3C;// RX_TOP_ANA_REG_36.BT.B0 = 001111## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0x4F;// RX_TOP_ANA_REG_34.BT.B0 = 01001111 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp15 = 0x40;// SYSTEM_CONFIG_0.BT.B2 = #10##### , rx_nt_mul_lane[1:0], pll_tsrs_switch_xdat_lane, pll_sel_lane[1:0], mcu_ctrl_pll_lane[1:0]
    tmp16 = 0x40;// SYSTEM_CONFIG_0.BT.B3 = 01000000 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x26;// RX_SPD_TABLE_LANE.BT.B0 = #010#110 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
  }
  else if (gen_rx==51){
    tmp1 = 0x28;// RX_TOP_ANA_REG_40.BT.B0 = 00101### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp4 = 0x3;// RX_EQ_REG0.BT.B0 = ####0011 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp5 = 0x8;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####10## , ethernet_mode_lane[1:0]
    tmp6 = 0x28;// RX_TOP_ANA_REG_39.BT.B0 = 0010100# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp7 = 0x0;// INPUT_RX_PIN_REG0_LANE.BT.B0 = #######0 , rx_pam2_en_lane
    tmp8 = 0x19;// TRX_PLL_CTRL_LANE.BT.B2 = ###11001 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0x4;// ANA_RX_PI_REG0.BT.B0 = ####0100 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0x2;// ANA_RX_PI_REG1.BT.B0 = ####0010 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0x6E;// RX_TOP_ANA_REG_38.BT.B0 = 0110111# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp15 = 0x40;// SYSTEM_CONFIG_0.BT.B2 = #10##### , rx_nt_mul_lane[1:0], pll_tsrs_switch_xdat_lane, pll_sel_lane[1:0], mcu_ctrl_pll_lane[1:0]
    tmp16 = 0x40;// SYSTEM_CONFIG_0.BT.B3 = 01000000 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x26;// RX_SPD_TABLE_LANE.BT.B0 = #010#110 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
  }
  else if (gen_rx==50){
    tmp1 = 0x30;// RX_TOP_ANA_REG_40.BT.B0 = 00110### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp4 = 0x3;// RX_EQ_REG0.BT.B0 = ####0011 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp6 = 0x28;// RX_TOP_ANA_REG_39.BT.B0 = 0010100# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp9 = 0x4;// ANA_RX_PI_REG0.BT.B0 = ####0100 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0x2;// ANA_RX_PI_REG1.BT.B0 = ####0010 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0x6E;// RX_TOP_ANA_REG_38.BT.B0 = 0110111# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp17 = 0x24;// RX_SPD_TABLE_LANE.BT.B0 = #010#100 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp19 = 0x0;// RX_SPD_TABLE_LANE.BT.B2 = #####000 , rx_rxclk_4x_div_ratio_lane[2:0]
  }
  else if (gen_rx==49){
    tmp0 = 0x55;// RX_TOP_ANA_REG_37.BT.B0 = 01010101 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp1 = 0x30;// RX_TOP_ANA_REG_40.BT.B0 = 00110### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp2 = 0x2;// RX_TOP_ANA_REG_35.BT.B0 = 00000010 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
    tmp3 = 0x60;// RX_TOP_ANA_REG_33.BT.B0 = 01100### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp6 = 0x2A;// RX_TOP_ANA_REG_39.BT.B0 = 0010101# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp9 = 0x4;// ANA_RX_PI_REG0.BT.B0 = ####0100 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0x2;// ANA_RX_PI_REG1.BT.B0 = ####0010 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0x5E;// RX_TOP_ANA_REG_38.BT.B0 = 0101111# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp12 = 0x5;// RX_TOP_ANA_REG_32.BT.B0 = 00000101 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x14;// RX_TOP_ANA_REG_36.BT.B0 = 000101## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0x95;// RX_TOP_ANA_REG_34.BT.B0 = 10010101 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x10;// SYSTEM_CONFIG_0.BT.B3 = 00010000 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp19 = 0x0;// RX_SPD_TABLE_LANE.BT.B2 = #####000 , rx_rxclk_4x_div_ratio_lane[2:0]
  }
  else if (gen_rx==48){
    tmp0 = 0x55;// RX_TOP_ANA_REG_37.BT.B0 = 01010101 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp1 = 0x50;// RX_TOP_ANA_REG_40.BT.B0 = 01010### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp2 = 0x2;// RX_TOP_ANA_REG_35.BT.B0 = 00000010 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
    tmp3 = 0x60;// RX_TOP_ANA_REG_33.BT.B0 = 01100### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp5 = 0x8;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####10## , ethernet_mode_lane[1:0]
    tmp6 = 0x2A;// RX_TOP_ANA_REG_39.BT.B0 = 0010101# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp7 = 0x0;// INPUT_RX_PIN_REG0_LANE.BT.B0 = #######0 , rx_pam2_en_lane
    tmp8 = 0x18;// TRX_PLL_CTRL_LANE.BT.B2 = ###11000 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0x4;// ANA_RX_PI_REG0.BT.B0 = ####0100 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0x2;// ANA_RX_PI_REG1.BT.B0 = ####0010 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0x5E;// RX_TOP_ANA_REG_38.BT.B0 = 0101111# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp12 = 0x5;// RX_TOP_ANA_REG_32.BT.B0 = 00000101 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x14;// RX_TOP_ANA_REG_36.BT.B0 = 000101## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0x95;// RX_TOP_ANA_REG_34.BT.B0 = 10010101 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp17 = 0x25;// RX_SPD_TABLE_LANE.BT.B0 = #010#101 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp19 = 0x0;// RX_SPD_TABLE_LANE.BT.B2 = #####000 , rx_rxclk_4x_div_ratio_lane[2:0]
  }
  else if (gen_rx==47){
    tmp0 = 0x55;// RX_TOP_ANA_REG_37.BT.B0 = 01010101 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp1 = 0x98;// RX_TOP_ANA_REG_40.BT.B0 = 10011### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp2 = 0x2;// RX_TOP_ANA_REG_35.BT.B0 = 00000010 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
    tmp3 = 0x60;// RX_TOP_ANA_REG_33.BT.B0 = 01100### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp6 = 0x2A;// RX_TOP_ANA_REG_39.BT.B0 = 0010101# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x0;// TRX_PLL_CTRL_LANE.BT.B2 = ###00000 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0x4;// ANA_RX_PI_REG0.BT.B0 = ####0100 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0x2;// ANA_RX_PI_REG1.BT.B0 = ####0010 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0x5E;// RX_TOP_ANA_REG_38.BT.B0 = 0101111# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp12 = 0x5;// RX_TOP_ANA_REG_32.BT.B0 = 00000101 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x14;// RX_TOP_ANA_REG_36.BT.B0 = 000101## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0x95;// RX_TOP_ANA_REG_34.BT.B0 = 10010101 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x10;// SYSTEM_CONFIG_0.BT.B3 = 00010000 , rx_rate_2_pll_ratio_x8_lane[7:0]
  }
  else if (gen_rx==46){
    tmp0 = 0x7;// RX_TOP_ANA_REG_37.BT.B0 = 00000111 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp1 = 0xD8;// RX_TOP_ANA_REG_40.BT.B0 = 11011### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp2 = 0x9;// RX_TOP_ANA_REG_35.BT.B0 = 00001001 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
    tmp3 = 0x0;// RX_TOP_ANA_REG_33.BT.B0 = 00000### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp4 = 0x4;// RX_EQ_REG0.BT.B0 = ####0100 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp6 = 0x64;// RX_TOP_ANA_REG_39.BT.B0 = 0110010# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x6;// TRX_PLL_CTRL_LANE.BT.B2 = ###00110 , rx_pll_rate_sel_lane[4:0]
    tmp12 = 0x0;// RX_TOP_ANA_REG_32.BT.B0 = 00000000 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x0;// RX_TOP_ANA_REG_36.BT.B0 = 000000## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0xC0;// RX_TOP_ANA_REG_34.BT.B0 = 11000000 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x2;// SYSTEM_CONFIG_0.BT.B3 = 00000010 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x53;// RX_SPD_TABLE_LANE.BT.B0 = #101#011 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp18 = 0x45;// RX_SPD_TABLE_LANE.BT.B1 = #100#101 , rx_rxclk_2x_div_ratio_lane[2:0], rx_rxclk_div_ratio_lane[2:0]
    tmp19 = 0x3;// RX_SPD_TABLE_LANE.BT.B2 = #####011 , rx_rxclk_4x_div_ratio_lane[2:0]
  }
  else if (gen_rx==45){
    tmp1 = 0x30;// RX_TOP_ANA_REG_40.BT.B0 = 00110### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp4 = 0x3;// RX_EQ_REG0.BT.B0 = ####0011 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp5 = 0x8;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####10## , ethernet_mode_lane[1:0]
    tmp6 = 0x28;// RX_TOP_ANA_REG_39.BT.B0 = 0010100# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp7 = 0x0;// INPUT_RX_PIN_REG0_LANE.BT.B0 = #######0 , rx_pam2_en_lane
    tmp8 = 0x16;// TRX_PLL_CTRL_LANE.BT.B2 = ###10110 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0x4;// ANA_RX_PI_REG0.BT.B0 = ####0100 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0x2;// ANA_RX_PI_REG1.BT.B0 = ####0010 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0x6E;// RX_TOP_ANA_REG_38.BT.B0 = 0110111# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp15 = 0x20;// SYSTEM_CONFIG_0.BT.B2 = #01##### , rx_nt_mul_lane[1:0], pll_tsrs_switch_xdat_lane, pll_sel_lane[1:0], mcu_ctrl_pll_lane[1:0]
    tmp16 = 0x40;// SYSTEM_CONFIG_0.BT.B3 = 01000000 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x14;// RX_SPD_TABLE_LANE.BT.B0 = #001#100 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp18 = 0x1;// RX_SPD_TABLE_LANE.BT.B1 = #000#001 , rx_rxclk_2x_div_ratio_lane[2:0], rx_rxclk_div_ratio_lane[2:0]
  }
  else if (gen_rx==44){
    tmp1 = 0x30;// RX_TOP_ANA_REG_40.BT.B0 = 00110### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp4 = 0x3;// RX_EQ_REG0.BT.B0 = ####0011 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp5 = 0x8;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####10## , ethernet_mode_lane[1:0]
    tmp6 = 0x28;// RX_TOP_ANA_REG_39.BT.B0 = 0010100# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp7 = 0x0;// INPUT_RX_PIN_REG0_LANE.BT.B0 = #######0 , rx_pam2_en_lane
    tmp9 = 0x4;// ANA_RX_PI_REG0.BT.B0 = ####0100 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0x2;// ANA_RX_PI_REG1.BT.B0 = ####0010 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0x6E;// RX_TOP_ANA_REG_38.BT.B0 = 0110111# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp15 = 0x20;// SYSTEM_CONFIG_0.BT.B2 = #01##### , rx_nt_mul_lane[1:0], pll_tsrs_switch_xdat_lane, pll_sel_lane[1:0], mcu_ctrl_pll_lane[1:0]
    tmp16 = 0x40;// SYSTEM_CONFIG_0.BT.B3 = 01000000 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x14;// RX_SPD_TABLE_LANE.BT.B0 = #001#100 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp18 = 0x1;// RX_SPD_TABLE_LANE.BT.B1 = #000#001 , rx_rxclk_2x_div_ratio_lane[2:0], rx_rxclk_div_ratio_lane[2:0]
  }
  else if (gen_rx==43){
    tmp1 = 0x30;// RX_TOP_ANA_REG_40.BT.B0 = 00110### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp4 = 0x3;// RX_EQ_REG0.BT.B0 = ####0011 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp6 = 0x28;// RX_TOP_ANA_REG_39.BT.B0 = 0010100# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x16;// TRX_PLL_CTRL_LANE.BT.B2 = ###10110 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0x4;// ANA_RX_PI_REG0.BT.B0 = ####0100 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0x2;// ANA_RX_PI_REG1.BT.B0 = ####0010 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0x6E;// RX_TOP_ANA_REG_38.BT.B0 = 0110111# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp17 = 0x12;// RX_SPD_TABLE_LANE.BT.B0 = #001#010 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp18 = 0x1;// RX_SPD_TABLE_LANE.BT.B1 = #000#001 , rx_rxclk_2x_div_ratio_lane[2:0], rx_rxclk_div_ratio_lane[2:0]
  }
  else if (gen_rx==42){
    tmp1 = 0x30;// RX_TOP_ANA_REG_40.BT.B0 = 00110### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp4 = 0x3;// RX_EQ_REG0.BT.B0 = ####0011 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp6 = 0x28;// RX_TOP_ANA_REG_39.BT.B0 = 0010100# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp9 = 0x4;// ANA_RX_PI_REG0.BT.B0 = ####0100 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0x2;// ANA_RX_PI_REG1.BT.B0 = ####0010 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0x6E;// RX_TOP_ANA_REG_38.BT.B0 = 0110111# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp17 = 0x12;// RX_SPD_TABLE_LANE.BT.B0 = #001#010 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp18 = 0x1;// RX_SPD_TABLE_LANE.BT.B1 = #000#001 , rx_rxclk_2x_div_ratio_lane[2:0], rx_rxclk_div_ratio_lane[2:0]
  }
  else if (gen_rx==41){
    tmp0 = 0xC4;// RX_TOP_ANA_REG_37.BT.B0 = 11000100 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp1 = 0x30;// RX_TOP_ANA_REG_40.BT.B0 = 00110### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp4 = 0x3;// RX_EQ_REG0.BT.B0 = ####0011 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp5 = 0xC;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####11## , ethernet_mode_lane[1:0]
    tmp7 = 0x0;// INPUT_RX_PIN_REG0_LANE.BT.B0 = #######0 , rx_pam2_en_lane
    tmp8 = 0x14;// TRX_PLL_CTRL_LANE.BT.B2 = ###10100 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0xB;// ANA_RX_PI_REG0.BT.B0 = ####1011 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0xB;// ANA_RX_PI_REG1.BT.B0 = ####1011 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0xE8;// RX_TOP_ANA_REG_38.BT.B0 = 1110100# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp12 = 0xF;// RX_TOP_ANA_REG_32.BT.B0 = 00001111 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x3C;// RX_TOP_ANA_REG_36.BT.B0 = 001111## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0x4F;// RX_TOP_ANA_REG_34.BT.B0 = 01001111 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp15 = 0x40;// SYSTEM_CONFIG_0.BT.B2 = #10##### , rx_nt_mul_lane[1:0], pll_tsrs_switch_xdat_lane, pll_sel_lane[1:0], mcu_ctrl_pll_lane[1:0]
    tmp16 = 0x40;// SYSTEM_CONFIG_0.BT.B3 = 01000000 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x26;// RX_SPD_TABLE_LANE.BT.B0 = #010#110 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
  }
  else if (gen_rx==40){
    tmp0 = 0xC4;// RX_TOP_ANA_REG_37.BT.B0 = 11000100 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp1 = 0x30;// RX_TOP_ANA_REG_40.BT.B0 = 00110### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp4 = 0x3;// RX_EQ_REG0.BT.B0 = ####0011 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp5 = 0xC;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####11## , ethernet_mode_lane[1:0]
    tmp7 = 0x0;// INPUT_RX_PIN_REG0_LANE.BT.B0 = #######0 , rx_pam2_en_lane
    tmp8 = 0x12;// TRX_PLL_CTRL_LANE.BT.B2 = ###10010 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0xB;// ANA_RX_PI_REG0.BT.B0 = ####1011 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0xB;// ANA_RX_PI_REG1.BT.B0 = ####1011 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0xE8;// RX_TOP_ANA_REG_38.BT.B0 = 1110100# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp12 = 0xF;// RX_TOP_ANA_REG_32.BT.B0 = 00001111 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x3C;// RX_TOP_ANA_REG_36.BT.B0 = 001111## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0x4F;// RX_TOP_ANA_REG_34.BT.B0 = 01001111 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp15 = 0x40;// SYSTEM_CONFIG_0.BT.B2 = #10##### , rx_nt_mul_lane[1:0], pll_tsrs_switch_xdat_lane, pll_sel_lane[1:0], mcu_ctrl_pll_lane[1:0]
    tmp16 = 0x40;// SYSTEM_CONFIG_0.BT.B3 = 01000000 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x26;// RX_SPD_TABLE_LANE.BT.B0 = #010#110 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
  }
  else if (gen_rx==39){
    tmp0 = 0xC4;// RX_TOP_ANA_REG_37.BT.B0 = 11000100 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp1 = 0x50;// RX_TOP_ANA_REG_40.BT.B0 = 01010### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp4 = 0x3;// RX_EQ_REG0.BT.B0 = ####0011 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp5 = 0xC;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####11## , ethernet_mode_lane[1:0]
    tmp7 = 0x0;// INPUT_RX_PIN_REG0_LANE.BT.B0 = #######0 , rx_pam2_en_lane
    tmp8 = 0x10;// TRX_PLL_CTRL_LANE.BT.B2 = ###10000 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0xB;// ANA_RX_PI_REG0.BT.B0 = ####1011 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0xB;// ANA_RX_PI_REG1.BT.B0 = ####1011 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0xE8;// RX_TOP_ANA_REG_38.BT.B0 = 1110100# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp12 = 0xF;// RX_TOP_ANA_REG_32.BT.B0 = 00001111 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x3C;// RX_TOP_ANA_REG_36.BT.B0 = 001111## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0x4F;// RX_TOP_ANA_REG_34.BT.B0 = 01001111 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp15 = 0x40;// SYSTEM_CONFIG_0.BT.B2 = #10##### , rx_nt_mul_lane[1:0], pll_tsrs_switch_xdat_lane, pll_sel_lane[1:0], mcu_ctrl_pll_lane[1:0]
    tmp16 = 0x40;// SYSTEM_CONFIG_0.BT.B3 = 01000000 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x26;// RX_SPD_TABLE_LANE.BT.B0 = #010#110 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
  }
  else if (gen_rx==38){
    tmp1 = 0x30;// RX_TOP_ANA_REG_40.BT.B0 = 00110### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp5 = 0x8;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####10## , ethernet_mode_lane[1:0]
    tmp7 = 0x0;// INPUT_RX_PIN_REG0_LANE.BT.B0 = #######0 , rx_pam2_en_lane
    tmp8 = 0x14;// TRX_PLL_CTRL_LANE.BT.B2 = ###10100 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0xB;// ANA_RX_PI_REG0.BT.B0 = ####1011 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0xB;// ANA_RX_PI_REG1.BT.B0 = ####1011 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0x68;// RX_TOP_ANA_REG_38.BT.B0 = 0110100# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp15 = 0x20;// SYSTEM_CONFIG_0.BT.B2 = #01##### , rx_nt_mul_lane[1:0], pll_tsrs_switch_xdat_lane, pll_sel_lane[1:0], mcu_ctrl_pll_lane[1:0]
    tmp17 = 0x24;// RX_SPD_TABLE_LANE.BT.B0 = #010#100 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
  }
  else if (gen_rx==37){
    tmp1 = 0x30;// RX_TOP_ANA_REG_40.BT.B0 = 00110### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp5 = 0x8;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####10## , ethernet_mode_lane[1:0]
    tmp7 = 0x0;// INPUT_RX_PIN_REG0_LANE.BT.B0 = #######0 , rx_pam2_en_lane
    tmp8 = 0x13;// TRX_PLL_CTRL_LANE.BT.B2 = ###10011 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0xB;// ANA_RX_PI_REG0.BT.B0 = ####1011 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0xB;// ANA_RX_PI_REG1.BT.B0 = ####1011 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0x68;// RX_TOP_ANA_REG_38.BT.B0 = 0110100# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp15 = 0x20;// SYSTEM_CONFIG_0.BT.B2 = #01##### , rx_nt_mul_lane[1:0], pll_tsrs_switch_xdat_lane, pll_sel_lane[1:0], mcu_ctrl_pll_lane[1:0]
    tmp17 = 0x24;// RX_SPD_TABLE_LANE.BT.B0 = #010#100 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
  }
  else if (gen_rx==36){
    tmp0 = 0xC4;// RX_TOP_ANA_REG_37.BT.B0 = 11000100 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp1 = 0x30;// RX_TOP_ANA_REG_40.BT.B0 = 00110### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp4 = 0x3;// RX_EQ_REG0.BT.B0 = ####0011 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp8 = 0x12;// TRX_PLL_CTRL_LANE.BT.B2 = ###10010 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0xB;// ANA_RX_PI_REG0.BT.B0 = ####1011 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0xB;// ANA_RX_PI_REG1.BT.B0 = ####1011 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0xE8;// RX_TOP_ANA_REG_38.BT.B0 = 1110100# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp12 = 0xF;// RX_TOP_ANA_REG_32.BT.B0 = 00001111 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x3C;// RX_TOP_ANA_REG_36.BT.B0 = 001111## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0x4F;// RX_TOP_ANA_REG_34.BT.B0 = 01001111 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp15 = 0x20;// SYSTEM_CONFIG_0.BT.B2 = #01##### , rx_nt_mul_lane[1:0], pll_tsrs_switch_xdat_lane, pll_sel_lane[1:0], mcu_ctrl_pll_lane[1:0]
    tmp17 = 0x24;// RX_SPD_TABLE_LANE.BT.B0 = #010#100 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
  }
  else if (gen_rx==35){
    tmp0 = 0x94;// RX_TOP_ANA_REG_37.BT.B0 = 10010100 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp1 = 0x50;// RX_TOP_ANA_REG_40.BT.B0 = 01010### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp5 = 0x8;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####10## , ethernet_mode_lane[1:0]
    tmp7 = 0x0;// INPUT_RX_PIN_REG0_LANE.BT.B0 = #######0 , rx_pam2_en_lane
    tmp8 = 0x10;// TRX_PLL_CTRL_LANE.BT.B2 = ###10000 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0xB;// ANA_RX_PI_REG0.BT.B0 = ####1011 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0xB;// ANA_RX_PI_REG1.BT.B0 = ####1011 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0x60;// RX_TOP_ANA_REG_38.BT.B0 = 0110000# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp12 = 0x9;// RX_TOP_ANA_REG_32.BT.B0 = 00001001 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x24;// RX_TOP_ANA_REG_36.BT.B0 = 001001## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0x79;// RX_TOP_ANA_REG_34.BT.B0 = 01111001 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp15 = 0x20;// SYSTEM_CONFIG_0.BT.B2 = #01##### , rx_nt_mul_lane[1:0], pll_tsrs_switch_xdat_lane, pll_sel_lane[1:0], mcu_ctrl_pll_lane[1:0]
    tmp17 = 0x24;// RX_SPD_TABLE_LANE.BT.B0 = #010#100 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
  }
  else if (gen_rx==34){
    tmp0 = 0x94;// RX_TOP_ANA_REG_37.BT.B0 = 10010100 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp3 = 0x50;// RX_TOP_ANA_REG_33.BT.B0 = 01010### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp5 = 0x8;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####10## , ethernet_mode_lane[1:0]
    tmp7 = 0x0;// INPUT_RX_PIN_REG0_LANE.BT.B0 = #######0 , rx_pam2_en_lane
    tmp8 = 0xE;// TRX_PLL_CTRL_LANE.BT.B2 = ###01110 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0xB;// ANA_RX_PI_REG0.BT.B0 = ####1011 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0xB;// ANA_RX_PI_REG1.BT.B0 = ####1011 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0x60;// RX_TOP_ANA_REG_38.BT.B0 = 0110000# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp12 = 0x9;// RX_TOP_ANA_REG_32.BT.B0 = 00001001 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x24;// RX_TOP_ANA_REG_36.BT.B0 = 001001## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0x79;// RX_TOP_ANA_REG_34.BT.B0 = 01111001 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp15 = 0x20;// SYSTEM_CONFIG_0.BT.B2 = #01##### , rx_nt_mul_lane[1:0], pll_tsrs_switch_xdat_lane, pll_sel_lane[1:0], mcu_ctrl_pll_lane[1:0]
    tmp17 = 0x24;// RX_SPD_TABLE_LANE.BT.B0 = #010#100 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
  }
  else if (gen_rx==33){
    tmp0 = 0xC4;// RX_TOP_ANA_REG_37.BT.B0 = 11000100 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp4 = 0x3;// RX_EQ_REG0.BT.B0 = ####0011 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp6 = 0x60;// RX_TOP_ANA_REG_39.BT.B0 = 0110000# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0xC;// TRX_PLL_CTRL_LANE.BT.B2 = ###01100 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0x9;// ANA_RX_PI_REG0.BT.B0 = ####1001 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0x8;// ANA_RX_PI_REG1.BT.B0 = ####1000 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0xEA;// RX_TOP_ANA_REG_38.BT.B0 = 1110101# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp12 = 0xF;// RX_TOP_ANA_REG_32.BT.B0 = 00001111 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x3C;// RX_TOP_ANA_REG_36.BT.B0 = 001111## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0x4F;// RX_TOP_ANA_REG_34.BT.B0 = 01001111 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp15 = 0x20;// SYSTEM_CONFIG_0.BT.B2 = #01##### , rx_nt_mul_lane[1:0], pll_tsrs_switch_xdat_lane, pll_sel_lane[1:0], mcu_ctrl_pll_lane[1:0]
    tmp17 = 0x24;// RX_SPD_TABLE_LANE.BT.B0 = #010#100 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
  }
  else if (gen_rx==32){
    tmp0 = 0x84;// RX_TOP_ANA_REG_37.BT.B0 = 10000100 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp1 = 0x98;// RX_TOP_ANA_REG_40.BT.B0 = 10011### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp3 = 0x50;// RX_TOP_ANA_REG_33.BT.B0 = 01010### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp5 = 0x8;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####10## , ethernet_mode_lane[1:0]
    tmp6 = 0x60;// RX_TOP_ANA_REG_39.BT.B0 = 0110000# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp7 = 0x0;// INPUT_RX_PIN_REG0_LANE.BT.B0 = #######0 , rx_pam2_en_lane
    tmp8 = 0x8;// TRX_PLL_CTRL_LANE.BT.B2 = ###01000 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0x9;// ANA_RX_PI_REG0.BT.B0 = ####1001 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0x8;// ANA_RX_PI_REG1.BT.B0 = ####1000 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0x62;// RX_TOP_ANA_REG_38.BT.B0 = 0110001# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp12 = 0x8;// RX_TOP_ANA_REG_32.BT.B0 = 00001000 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x20;// RX_TOP_ANA_REG_36.BT.B0 = 001000## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0x78;// RX_TOP_ANA_REG_34.BT.B0 = 01111000 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp15 = 0x20;// SYSTEM_CONFIG_0.BT.B2 = #01##### , rx_nt_mul_lane[1:0], pll_tsrs_switch_xdat_lane, pll_sel_lane[1:0], mcu_ctrl_pll_lane[1:0]
    tmp17 = 0x24;// RX_SPD_TABLE_LANE.BT.B0 = #010#100 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
  }
  else if (gen_rx==31){
    tmp0 = 0x65;// RX_TOP_ANA_REG_37.BT.B0 = 01100101 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp2 = 0x1;// RX_TOP_ANA_REG_35.BT.B0 = 00000001 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
    tmp3 = 0x60;// RX_TOP_ANA_REG_33.BT.B0 = 01100### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp5 = 0x8;// TX_TRAIN_PATTTERN_REG0.BT.B1 = ####10## , ethernet_mode_lane[1:0]
    tmp6 = 0x6A;// RX_TOP_ANA_REG_39.BT.B0 = 0110101# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp7 = 0x0;// INPUT_RX_PIN_REG0_LANE.BT.B0 = #######0 , rx_pam2_en_lane
    tmp8 = 0x1;// TRX_PLL_CTRL_LANE.BT.B2 = ###00001 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0x4;// ANA_RX_PI_REG0.BT.B0 = ####0100 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0x2;// ANA_RX_PI_REG1.BT.B0 = ####0010 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0x5E;// RX_TOP_ANA_REG_38.BT.B0 = 0101111# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp12 = 0x6;// RX_TOP_ANA_REG_32.BT.B0 = 00000110 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x18;// RX_TOP_ANA_REG_36.BT.B0 = 000110## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0x86;// RX_TOP_ANA_REG_34.BT.B0 = 10000110 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp15 = 0x20;// SYSTEM_CONFIG_0.BT.B2 = #01##### , rx_nt_mul_lane[1:0], pll_tsrs_switch_xdat_lane, pll_sel_lane[1:0], mcu_ctrl_pll_lane[1:0]
    tmp17 = 0x24;// RX_SPD_TABLE_LANE.BT.B0 = #010#100 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
  }
  else if (gen_rx==30){
    tmp1 = 0x30;// RX_TOP_ANA_REG_40.BT.B0 = 00110### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp8 = 0x14;// TRX_PLL_CTRL_LANE.BT.B2 = ###10100 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0xB;// ANA_RX_PI_REG0.BT.B0 = ####1011 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0xB;// ANA_RX_PI_REG1.BT.B0 = ####1011 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0x68;// RX_TOP_ANA_REG_38.BT.B0 = 0110100# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp16 = 0x10;// SYSTEM_CONFIG_0.BT.B3 = 00010000 , rx_rate_2_pll_ratio_x8_lane[7:0]
  }
  else if (gen_rx==29){
    tmp1 = 0x30;// RX_TOP_ANA_REG_40.BT.B0 = 00110### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp8 = 0x13;// TRX_PLL_CTRL_LANE.BT.B2 = ###10011 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0xB;// ANA_RX_PI_REG0.BT.B0 = ####1011 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0xB;// ANA_RX_PI_REG1.BT.B0 = ####1011 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0x68;// RX_TOP_ANA_REG_38.BT.B0 = 0110100# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp16 = 0x10;// SYSTEM_CONFIG_0.BT.B3 = 00010000 , rx_rate_2_pll_ratio_x8_lane[7:0]
  }
  else if (gen_rx==28){
    tmp1 = 0x50;// RX_TOP_ANA_REG_40.BT.B0 = 01010### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp8 = 0x11;// TRX_PLL_CTRL_LANE.BT.B2 = ###10001 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0xB;// ANA_RX_PI_REG0.BT.B0 = ####1011 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0xB;// ANA_RX_PI_REG1.BT.B0 = ####1011 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0x68;// RX_TOP_ANA_REG_38.BT.B0 = 0110100# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp16 = 0x10;// SYSTEM_CONFIG_0.BT.B3 = 00010000 , rx_rate_2_pll_ratio_x8_lane[7:0]
  }
  else if (gen_rx==27){
    tmp0 = 0x94;// RX_TOP_ANA_REG_37.BT.B0 = 10010100 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp1 = 0x50;// RX_TOP_ANA_REG_40.BT.B0 = 01010### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp8 = 0x10;// TRX_PLL_CTRL_LANE.BT.B2 = ###10000 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0xB;// ANA_RX_PI_REG0.BT.B0 = ####1011 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0xB;// ANA_RX_PI_REG1.BT.B0 = ####1011 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0x60;// RX_TOP_ANA_REG_38.BT.B0 = 0110000# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp12 = 0x9;// RX_TOP_ANA_REG_32.BT.B0 = 00001001 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x24;// RX_TOP_ANA_REG_36.BT.B0 = 001001## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0x79;// RX_TOP_ANA_REG_34.BT.B0 = 01111001 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x10;// SYSTEM_CONFIG_0.BT.B3 = 00010000 , rx_rate_2_pll_ratio_x8_lane[7:0]
  }
  else if (gen_rx==26){
    tmp0 = 0x94;// RX_TOP_ANA_REG_37.BT.B0 = 10010100 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp3 = 0x50;// RX_TOP_ANA_REG_33.BT.B0 = 01010### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp8 = 0xE;// TRX_PLL_CTRL_LANE.BT.B2 = ###01110 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0xB;// ANA_RX_PI_REG0.BT.B0 = ####1011 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0xB;// ANA_RX_PI_REG1.BT.B0 = ####1011 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0x60;// RX_TOP_ANA_REG_38.BT.B0 = 0110000# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp12 = 0x9;// RX_TOP_ANA_REG_32.BT.B0 = 00001001 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x24;// RX_TOP_ANA_REG_36.BT.B0 = 001001## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0x79;// RX_TOP_ANA_REG_34.BT.B0 = 01111001 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x10;// SYSTEM_CONFIG_0.BT.B3 = 00010000 , rx_rate_2_pll_ratio_x8_lane[7:0]
  }
  else if (gen_rx==25){
    tmp0 = 0x94;// RX_TOP_ANA_REG_37.BT.B0 = 10010100 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp3 = 0x50;// RX_TOP_ANA_REG_33.BT.B0 = 01010### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp6 = 0x60;// RX_TOP_ANA_REG_39.BT.B0 = 0110000# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x9;// TRX_PLL_CTRL_LANE.BT.B2 = ###01001 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0x9;// ANA_RX_PI_REG0.BT.B0 = ####1001 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0x8;// ANA_RX_PI_REG1.BT.B0 = ####1000 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0x62;// RX_TOP_ANA_REG_38.BT.B0 = 0110001# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp12 = 0x9;// RX_TOP_ANA_REG_32.BT.B0 = 00001001 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x24;// RX_TOP_ANA_REG_36.BT.B0 = 001001## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0x79;// RX_TOP_ANA_REG_34.BT.B0 = 01111001 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x10;// SYSTEM_CONFIG_0.BT.B3 = 00010000 , rx_rate_2_pll_ratio_x8_lane[7:0]
  }
  else if (gen_rx==24){
    tmp0 = 0x75;// RX_TOP_ANA_REG_37.BT.B0 = 01110101 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp1 = 0xD8;// RX_TOP_ANA_REG_40.BT.B0 = 11011### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp2 = 0x1;// RX_TOP_ANA_REG_35.BT.B0 = 00000001 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
    tmp3 = 0x50;// RX_TOP_ANA_REG_33.BT.B0 = 01010### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp6 = 0x60;// RX_TOP_ANA_REG_39.BT.B0 = 0110000# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x6;// TRX_PLL_CTRL_LANE.BT.B2 = ###00110 , rx_pll_rate_sel_lane[4:0]
    tmp11 = 0x64;// RX_TOP_ANA_REG_38.BT.B0 = 0110010# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp12 = 0x7;// RX_TOP_ANA_REG_32.BT.B0 = 00000111 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x1C;// RX_TOP_ANA_REG_36.BT.B0 = 000111## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0x87;// RX_TOP_ANA_REG_34.BT.B0 = 10000111 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x10;// SYSTEM_CONFIG_0.BT.B3 = 00010000 , rx_rate_2_pll_ratio_x8_lane[7:0]
  }
  else if (gen_rx==23){
    tmp0 = 0x55;// RX_TOP_ANA_REG_37.BT.B0 = 01010101 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp1 = 0x30;// RX_TOP_ANA_REG_40.BT.B0 = 00110### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp2 = 0x2;// RX_TOP_ANA_REG_35.BT.B0 = 00000010 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
    tmp3 = 0x60;// RX_TOP_ANA_REG_33.BT.B0 = 01100### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp6 = 0x2A;// RX_TOP_ANA_REG_39.BT.B0 = 0010101# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp9 = 0x4;// ANA_RX_PI_REG0.BT.B0 = ####0100 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0x2;// ANA_RX_PI_REG1.BT.B0 = ####0010 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0x5E;// RX_TOP_ANA_REG_38.BT.B0 = 0101111# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp12 = 0x5;// RX_TOP_ANA_REG_32.BT.B0 = 00000101 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x14;// RX_TOP_ANA_REG_36.BT.B0 = 000101## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0x95;// RX_TOP_ANA_REG_34.BT.B0 = 10010101 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x10;// SYSTEM_CONFIG_0.BT.B3 = 00010000 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp19 = 0x0;// RX_SPD_TABLE_LANE.BT.B2 = #####000 , rx_rxclk_4x_div_ratio_lane[2:0]
  }
  else if (gen_rx==22){
    tmp0 = 0x45;// RX_TOP_ANA_REG_37.BT.B0 = 01000101 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp2 = 0x3;// RX_TOP_ANA_REG_35.BT.B0 = 00000011 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
    tmp3 = 0x60;// RX_TOP_ANA_REG_33.BT.B0 = 01100### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp4 = 0x1;// RX_EQ_REG0.BT.B0 = ####0001 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp6 = 0x5A;// RX_TOP_ANA_REG_39.BT.B0 = 0101101# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0xD;// TRX_PLL_CTRL_LANE.BT.B2 = ###01101 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0xB;// ANA_RX_PI_REG0.BT.B0 = ####1011 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0xB;// ANA_RX_PI_REG1.BT.B0 = ####1011 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0x58;// RX_TOP_ANA_REG_38.BT.B0 = 0101100# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp12 = 0x4;// RX_TOP_ANA_REG_32.BT.B0 = 00000100 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x10;// RX_TOP_ANA_REG_36.BT.B0 = 000100## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0x94;// RX_TOP_ANA_REG_34.BT.B0 = 10010100 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x8;// SYSTEM_CONFIG_0.BT.B3 = 00001000 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x33;// RX_SPD_TABLE_LANE.BT.B0 = #011#011 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp18 = 0x23;// RX_SPD_TABLE_LANE.BT.B1 = #010#011 , rx_rxclk_2x_div_ratio_lane[2:0], rx_rxclk_div_ratio_lane[2:0]
    tmp19 = 0x1;// RX_SPD_TABLE_LANE.BT.B2 = #####001 , rx_rxclk_4x_div_ratio_lane[2:0]
  }
  else if (gen_rx==21){
    tmp0 = 0x45;// RX_TOP_ANA_REG_37.BT.B0 = 01000101 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp2 = 0x3;// RX_TOP_ANA_REG_35.BT.B0 = 00000011 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
    tmp3 = 0x60;// RX_TOP_ANA_REG_33.BT.B0 = 01100### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp4 = 0x1;// RX_EQ_REG0.BT.B0 = ####0001 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp6 = 0x62;// RX_TOP_ANA_REG_39.BT.B0 = 0110001# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0xC;// TRX_PLL_CTRL_LANE.BT.B2 = ###01100 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0x9;// ANA_RX_PI_REG0.BT.B0 = ####1001 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0x8;// ANA_RX_PI_REG1.BT.B0 = ####1000 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0x5A;// RX_TOP_ANA_REG_38.BT.B0 = 0101101# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp12 = 0x4;// RX_TOP_ANA_REG_32.BT.B0 = 00000100 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x10;// RX_TOP_ANA_REG_36.BT.B0 = 000100## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0x94;// RX_TOP_ANA_REG_34.BT.B0 = 10010100 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x8;// SYSTEM_CONFIG_0.BT.B3 = 00001000 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x33;// RX_SPD_TABLE_LANE.BT.B0 = #011#011 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp18 = 0x23;// RX_SPD_TABLE_LANE.BT.B1 = #010#011 , rx_rxclk_2x_div_ratio_lane[2:0], rx_rxclk_div_ratio_lane[2:0]
    tmp19 = 0x1;// RX_SPD_TABLE_LANE.BT.B2 = #####001 , rx_rxclk_4x_div_ratio_lane[2:0]
  }
  else if (gen_rx==20){
    tmp0 = 0x45;// RX_TOP_ANA_REG_37.BT.B0 = 01000101 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp2 = 0x3;// RX_TOP_ANA_REG_35.BT.B0 = 00000011 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
    tmp3 = 0x60;// RX_TOP_ANA_REG_33.BT.B0 = 01100### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp4 = 0x1;// RX_EQ_REG0.BT.B0 = ####0001 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp6 = 0x62;// RX_TOP_ANA_REG_39.BT.B0 = 0110001# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0xA;// TRX_PLL_CTRL_LANE.BT.B2 = ###01010 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0x9;// ANA_RX_PI_REG0.BT.B0 = ####1001 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0x8;// ANA_RX_PI_REG1.BT.B0 = ####1000 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0x5A;// RX_TOP_ANA_REG_38.BT.B0 = 0101101# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp12 = 0x4;// RX_TOP_ANA_REG_32.BT.B0 = 00000100 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x10;// RX_TOP_ANA_REG_36.BT.B0 = 000100## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0x94;// RX_TOP_ANA_REG_34.BT.B0 = 10010100 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x8;// SYSTEM_CONFIG_0.BT.B3 = 00001000 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x33;// RX_SPD_TABLE_LANE.BT.B0 = #011#011 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp18 = 0x23;// RX_SPD_TABLE_LANE.BT.B1 = #010#011 , rx_rxclk_2x_div_ratio_lane[2:0], rx_rxclk_div_ratio_lane[2:0]
    tmp19 = 0x1;// RX_SPD_TABLE_LANE.BT.B2 = #####001 , rx_rxclk_4x_div_ratio_lane[2:0]
  }
  else if (gen_rx==19){
    tmp0 = 0x45;// RX_TOP_ANA_REG_37.BT.B0 = 01000101 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp2 = 0x3;// RX_TOP_ANA_REG_35.BT.B0 = 00000011 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
    tmp3 = 0x60;// RX_TOP_ANA_REG_33.BT.B0 = 01100### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp4 = 0x1;// RX_EQ_REG0.BT.B0 = ####0001 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp6 = 0x62;// RX_TOP_ANA_REG_39.BT.B0 = 0110001# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x9;// TRX_PLL_CTRL_LANE.BT.B2 = ###01001 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0x9;// ANA_RX_PI_REG0.BT.B0 = ####1001 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0x8;// ANA_RX_PI_REG1.BT.B0 = ####1000 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0x5A;// RX_TOP_ANA_REG_38.BT.B0 = 0101101# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp12 = 0x4;// RX_TOP_ANA_REG_32.BT.B0 = 00000100 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x10;// RX_TOP_ANA_REG_36.BT.B0 = 000100## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0x94;// RX_TOP_ANA_REG_34.BT.B0 = 10010100 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x8;// SYSTEM_CONFIG_0.BT.B3 = 00001000 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x33;// RX_SPD_TABLE_LANE.BT.B0 = #011#011 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp18 = 0x23;// RX_SPD_TABLE_LANE.BT.B1 = #010#011 , rx_rxclk_2x_div_ratio_lane[2:0], rx_rxclk_div_ratio_lane[2:0]
    tmp19 = 0x1;// RX_SPD_TABLE_LANE.BT.B2 = #####001 , rx_rxclk_4x_div_ratio_lane[2:0]
  }
  else if (gen_rx==18){
    tmp0 = 0x35;// RX_TOP_ANA_REG_37.BT.B0 = 00110101 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp1 = 0xB8;// RX_TOP_ANA_REG_40.BT.B0 = 10111### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp2 = 0x5;// RX_TOP_ANA_REG_35.BT.B0 = 00000101 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
    tmp3 = 0x60;// RX_TOP_ANA_REG_33.BT.B0 = 01100### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp4 = 0x1;// RX_EQ_REG0.BT.B0 = ####0001 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp6 = 0x62;// RX_TOP_ANA_REG_39.BT.B0 = 0110001# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x7;// TRX_PLL_CTRL_LANE.BT.B2 = ###00111 , rx_pll_rate_sel_lane[4:0]
    tmp12 = 0x3;// RX_TOP_ANA_REG_32.BT.B0 = 00000011 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0xC;// RX_TOP_ANA_REG_36.BT.B0 = 000011## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0xA3;// RX_TOP_ANA_REG_34.BT.B0 = 10100011 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x8;// SYSTEM_CONFIG_0.BT.B3 = 00001000 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x33;// RX_SPD_TABLE_LANE.BT.B0 = #011#011 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp18 = 0x23;// RX_SPD_TABLE_LANE.BT.B1 = #010#011 , rx_rxclk_2x_div_ratio_lane[2:0], rx_rxclk_div_ratio_lane[2:0]
    tmp19 = 0x1;// RX_SPD_TABLE_LANE.BT.B2 = #####001 , rx_rxclk_4x_div_ratio_lane[2:0]
  }
  else if (gen_rx==17){
    tmp0 = 0x35;// RX_TOP_ANA_REG_37.BT.B0 = 00110101 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp1 = 0xD8;// RX_TOP_ANA_REG_40.BT.B0 = 11011### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp2 = 0x5;// RX_TOP_ANA_REG_35.BT.B0 = 00000101 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
    tmp3 = 0x30;// RX_TOP_ANA_REG_33.BT.B0 = 00110### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp4 = 0x1;// RX_EQ_REG0.BT.B0 = ####0001 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp6 = 0x62;// RX_TOP_ANA_REG_39.BT.B0 = 0110001# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x6;// TRX_PLL_CTRL_LANE.BT.B2 = ###00110 , rx_pll_rate_sel_lane[4:0]
    tmp12 = 0x3;// RX_TOP_ANA_REG_32.BT.B0 = 00000011 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0xC;// RX_TOP_ANA_REG_36.BT.B0 = 000011## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0xA3;// RX_TOP_ANA_REG_34.BT.B0 = 10100011 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x8;// SYSTEM_CONFIG_0.BT.B3 = 00001000 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x33;// RX_SPD_TABLE_LANE.BT.B0 = #011#011 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp18 = 0x23;// RX_SPD_TABLE_LANE.BT.B1 = #010#011 , rx_rxclk_2x_div_ratio_lane[2:0], rx_rxclk_div_ratio_lane[2:0]
    tmp19 = 0x1;// RX_SPD_TABLE_LANE.BT.B2 = #####001 , rx_rxclk_4x_div_ratio_lane[2:0]
  }
  else if (gen_rx==16){
    tmp0 = 0x35;// RX_TOP_ANA_REG_37.BT.B0 = 00110101 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp1 = 0xD8;// RX_TOP_ANA_REG_40.BT.B0 = 11011### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp2 = 0x5;// RX_TOP_ANA_REG_35.BT.B0 = 00000101 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
    tmp3 = 0x30;// RX_TOP_ANA_REG_33.BT.B0 = 00110### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp4 = 0x1;// RX_EQ_REG0.BT.B0 = ####0001 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp6 = 0x62;// RX_TOP_ANA_REG_39.BT.B0 = 0110001# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x5;// TRX_PLL_CTRL_LANE.BT.B2 = ###00101 , rx_pll_rate_sel_lane[4:0]
    tmp12 = 0x3;// RX_TOP_ANA_REG_32.BT.B0 = 00000011 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0xC;// RX_TOP_ANA_REG_36.BT.B0 = 000011## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0xA3;// RX_TOP_ANA_REG_34.BT.B0 = 10100011 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x8;// SYSTEM_CONFIG_0.BT.B3 = 00001000 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x33;// RX_SPD_TABLE_LANE.BT.B0 = #011#011 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp18 = 0x23;// RX_SPD_TABLE_LANE.BT.B1 = #010#011 , rx_rxclk_2x_div_ratio_lane[2:0], rx_rxclk_div_ratio_lane[2:0]
    tmp19 = 0x1;// RX_SPD_TABLE_LANE.BT.B2 = #####001 , rx_rxclk_4x_div_ratio_lane[2:0]
  }
  else if (gen_rx==15){
    tmp0 = 0x35;// RX_TOP_ANA_REG_37.BT.B0 = 00110101 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp1 = 0x28;// RX_TOP_ANA_REG_40.BT.B0 = 00101### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp2 = 0x5;// RX_TOP_ANA_REG_35.BT.B0 = 00000101 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
    tmp3 = 0x30;// RX_TOP_ANA_REG_33.BT.B0 = 00110### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp4 = 0x1;// RX_EQ_REG0.BT.B0 = ####0001 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp6 = 0x64;// RX_TOP_ANA_REG_39.BT.B0 = 0110010# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x3;// TRX_PLL_CTRL_LANE.BT.B2 = ###00011 , rx_pll_rate_sel_lane[4:0]
    tmp12 = 0x3;// RX_TOP_ANA_REG_32.BT.B0 = 00000011 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0xC;// RX_TOP_ANA_REG_36.BT.B0 = 000011## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0xA3;// RX_TOP_ANA_REG_34.BT.B0 = 10100011 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x8;// SYSTEM_CONFIG_0.BT.B3 = 00001000 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x33;// RX_SPD_TABLE_LANE.BT.B0 = #011#011 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp18 = 0x23;// RX_SPD_TABLE_LANE.BT.B1 = #010#011 , rx_rxclk_2x_div_ratio_lane[2:0], rx_rxclk_div_ratio_lane[2:0]
    tmp19 = 0x1;// RX_SPD_TABLE_LANE.BT.B2 = #####001 , rx_rxclk_4x_div_ratio_lane[2:0]
  }
  else if (gen_rx==14){
    tmp0 = 0x35;// RX_TOP_ANA_REG_37.BT.B0 = 00110101 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp2 = 0x5;// RX_TOP_ANA_REG_35.BT.B0 = 00000101 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
    tmp3 = 0x30;// RX_TOP_ANA_REG_33.BT.B0 = 00110### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp4 = 0x1;// RX_EQ_REG0.BT.B0 = ####0001 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp6 = 0x6C;// RX_TOP_ANA_REG_39.BT.B0 = 0110110# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x2;// TRX_PLL_CTRL_LANE.BT.B2 = ###00010 , rx_pll_rate_sel_lane[4:0]
    tmp12 = 0x3;// RX_TOP_ANA_REG_32.BT.B0 = 00000011 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0xC;// RX_TOP_ANA_REG_36.BT.B0 = 000011## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0xA3;// RX_TOP_ANA_REG_34.BT.B0 = 10100011 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x8;// SYSTEM_CONFIG_0.BT.B3 = 00001000 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x33;// RX_SPD_TABLE_LANE.BT.B0 = #011#011 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp18 = 0x23;// RX_SPD_TABLE_LANE.BT.B1 = #010#011 , rx_rxclk_2x_div_ratio_lane[2:0], rx_rxclk_div_ratio_lane[2:0]
    tmp19 = 0x1;// RX_SPD_TABLE_LANE.BT.B2 = #####001 , rx_rxclk_4x_div_ratio_lane[2:0]
  }
  else if (gen_rx==13){
    tmp0 = 0x35;// RX_TOP_ANA_REG_37.BT.B0 = 00110101 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp1 = 0x98;// RX_TOP_ANA_REG_40.BT.B0 = 10011### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp2 = 0x5;// RX_TOP_ANA_REG_35.BT.B0 = 00000101 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
    tmp3 = 0x30;// RX_TOP_ANA_REG_33.BT.B0 = 00110### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp4 = 0x1;// RX_EQ_REG0.BT.B0 = ####0001 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp6 = 0x2C;// RX_TOP_ANA_REG_39.BT.B0 = 0010110# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x0;// TRX_PLL_CTRL_LANE.BT.B2 = ###00000 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0x4;// ANA_RX_PI_REG0.BT.B0 = ####0100 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0x2;// ANA_RX_PI_REG1.BT.B0 = ####0010 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0x5E;// RX_TOP_ANA_REG_38.BT.B0 = 0101111# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp12 = 0x3;// RX_TOP_ANA_REG_32.BT.B0 = 00000011 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0xC;// RX_TOP_ANA_REG_36.BT.B0 = 000011## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0xA3;// RX_TOP_ANA_REG_34.BT.B0 = 10100011 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x8;// SYSTEM_CONFIG_0.BT.B3 = 00001000 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x33;// RX_SPD_TABLE_LANE.BT.B0 = #011#011 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp18 = 0x23;// RX_SPD_TABLE_LANE.BT.B1 = #010#011 , rx_rxclk_2x_div_ratio_lane[2:0], rx_rxclk_div_ratio_lane[2:0]
    tmp19 = 0x1;// RX_SPD_TABLE_LANE.BT.B2 = #####001 , rx_rxclk_4x_div_ratio_lane[2:0]
  }
  else if (gen_rx==12){
    tmp0 = 0x26;// RX_TOP_ANA_REG_37.BT.B0 = 00100110 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp2 = 0x6;// RX_TOP_ANA_REG_35.BT.B0 = 00000110 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
    tmp3 = 0x30;// RX_TOP_ANA_REG_33.BT.B0 = 00110### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp4 = 0x0;// RX_EQ_REG0.BT.B0 = ####0000 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp6 = 0x64;// RX_TOP_ANA_REG_39.BT.B0 = 0110010# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0xC;// TRX_PLL_CTRL_LANE.BT.B2 = ###01100 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0x9;// ANA_RX_PI_REG0.BT.B0 = ####1001 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0x8;// ANA_RX_PI_REG1.BT.B0 = ####1000 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0x5A;// RX_TOP_ANA_REG_38.BT.B0 = 0101101# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp12 = 0x2;// RX_TOP_ANA_REG_32.BT.B0 = 00000010 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x8;// RX_TOP_ANA_REG_36.BT.B0 = 000010## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0xA2;// RX_TOP_ANA_REG_34.BT.B0 = 10100010 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x4;// SYSTEM_CONFIG_0.BT.B3 = 00000100 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x43;// RX_SPD_TABLE_LANE.BT.B0 = #100#011 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp18 = 0x34;// RX_SPD_TABLE_LANE.BT.B1 = #011#100 , rx_rxclk_2x_div_ratio_lane[2:0], rx_rxclk_div_ratio_lane[2:0]
    tmp19 = 0x2;// RX_SPD_TABLE_LANE.BT.B2 = #####010 , rx_rxclk_4x_div_ratio_lane[2:0]
  }
  else if (gen_rx==11){
    tmp0 = 0x26;// RX_TOP_ANA_REG_37.BT.B0 = 00100110 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp2 = 0x6;// RX_TOP_ANA_REG_35.BT.B0 = 00000110 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
    tmp3 = 0x30;// RX_TOP_ANA_REG_33.BT.B0 = 00110### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp4 = 0x0;// RX_EQ_REG0.BT.B0 = ####0000 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp6 = 0x64;// RX_TOP_ANA_REG_39.BT.B0 = 0110010# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0xB;// TRX_PLL_CTRL_LANE.BT.B2 = ###01011 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0x9;// ANA_RX_PI_REG0.BT.B0 = ####1001 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0x8;// ANA_RX_PI_REG1.BT.B0 = ####1000 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0x5A;// RX_TOP_ANA_REG_38.BT.B0 = 0101101# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp12 = 0x2;// RX_TOP_ANA_REG_32.BT.B0 = 00000010 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x8;// RX_TOP_ANA_REG_36.BT.B0 = 000010## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0xA2;// RX_TOP_ANA_REG_34.BT.B0 = 10100010 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x4;// SYSTEM_CONFIG_0.BT.B3 = 00000100 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x43;// RX_SPD_TABLE_LANE.BT.B0 = #100#011 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp18 = 0x34;// RX_SPD_TABLE_LANE.BT.B1 = #011#100 , rx_rxclk_2x_div_ratio_lane[2:0], rx_rxclk_div_ratio_lane[2:0]
    tmp19 = 0x2;// RX_SPD_TABLE_LANE.BT.B2 = #####010 , rx_rxclk_4x_div_ratio_lane[2:0]
  }
  else if (gen_rx==10){
    tmp0 = 0x26;// RX_TOP_ANA_REG_37.BT.B0 = 00100110 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp1 = 0xD8;// RX_TOP_ANA_REG_40.BT.B0 = 11011### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp2 = 0x6;// RX_TOP_ANA_REG_35.BT.B0 = 00000110 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
    tmp3 = 0x0;// RX_TOP_ANA_REG_33.BT.B0 = 00000### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp4 = 0x0;// RX_EQ_REG0.BT.B0 = ####0000 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp6 = 0x64;// RX_TOP_ANA_REG_39.BT.B0 = 0110010# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x6;// TRX_PLL_CTRL_LANE.BT.B2 = ###00110 , rx_pll_rate_sel_lane[4:0]
    tmp12 = 0x2;// RX_TOP_ANA_REG_32.BT.B0 = 00000010 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x8;// RX_TOP_ANA_REG_36.BT.B0 = 000010## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0xA2;// RX_TOP_ANA_REG_34.BT.B0 = 10100010 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x4;// SYSTEM_CONFIG_0.BT.B3 = 00000100 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x43;// RX_SPD_TABLE_LANE.BT.B0 = #100#011 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp18 = 0x34;// RX_SPD_TABLE_LANE.BT.B1 = #011#100 , rx_rxclk_2x_div_ratio_lane[2:0], rx_rxclk_div_ratio_lane[2:0]
    tmp19 = 0x2;// RX_SPD_TABLE_LANE.BT.B2 = #####010 , rx_rxclk_4x_div_ratio_lane[2:0]
  }
  else if (gen_rx==9){
    tmp0 = 0x26;// RX_TOP_ANA_REG_37.BT.B0 = 00100110 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp1 = 0xD8;// RX_TOP_ANA_REG_40.BT.B0 = 11011### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp2 = 0x6;// RX_TOP_ANA_REG_35.BT.B0 = 00000110 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
    tmp3 = 0x0;// RX_TOP_ANA_REG_33.BT.B0 = 00000### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp4 = 0x0;// RX_EQ_REG0.BT.B0 = ####0000 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp6 = 0x64;// RX_TOP_ANA_REG_39.BT.B0 = 0110010# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x4;// TRX_PLL_CTRL_LANE.BT.B2 = ###00100 , rx_pll_rate_sel_lane[4:0]
    tmp12 = 0x2;// RX_TOP_ANA_REG_32.BT.B0 = 00000010 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x8;// RX_TOP_ANA_REG_36.BT.B0 = 000010## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0xA2;// RX_TOP_ANA_REG_34.BT.B0 = 10100010 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x4;// SYSTEM_CONFIG_0.BT.B3 = 00000100 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x43;// RX_SPD_TABLE_LANE.BT.B0 = #100#011 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp18 = 0x34;// RX_SPD_TABLE_LANE.BT.B1 = #011#100 , rx_rxclk_2x_div_ratio_lane[2:0], rx_rxclk_div_ratio_lane[2:0]
    tmp19 = 0x2;// RX_SPD_TABLE_LANE.BT.B2 = #####010 , rx_rxclk_4x_div_ratio_lane[2:0]
  }
  else if (gen_rx==8){
    tmp0 = 0x26;// RX_TOP_ANA_REG_37.BT.B0 = 00100110 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp1 = 0x28;// RX_TOP_ANA_REG_40.BT.B0 = 00101### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp2 = 0x6;// RX_TOP_ANA_REG_35.BT.B0 = 00000110 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
    tmp3 = 0x0;// RX_TOP_ANA_REG_33.BT.B0 = 00000### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp4 = 0x0;// RX_EQ_REG0.BT.B0 = ####0000 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp6 = 0x64;// RX_TOP_ANA_REG_39.BT.B0 = 0110010# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x3;// TRX_PLL_CTRL_LANE.BT.B2 = ###00011 , rx_pll_rate_sel_lane[4:0]
    tmp12 = 0x2;// RX_TOP_ANA_REG_32.BT.B0 = 00000010 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x8;// RX_TOP_ANA_REG_36.BT.B0 = 000010## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0xA2;// RX_TOP_ANA_REG_34.BT.B0 = 10100010 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x4;// SYSTEM_CONFIG_0.BT.B3 = 00000100 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x43;// RX_SPD_TABLE_LANE.BT.B0 = #100#011 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp18 = 0x34;// RX_SPD_TABLE_LANE.BT.B1 = #011#100 , rx_rxclk_2x_div_ratio_lane[2:0], rx_rxclk_div_ratio_lane[2:0]
    tmp19 = 0x2;// RX_SPD_TABLE_LANE.BT.B2 = #####010 , rx_rxclk_4x_div_ratio_lane[2:0]
  }
  else if (gen_rx==7){
    tmp0 = 0x16;// RX_TOP_ANA_REG_37.BT.B0 = 00010110 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp2 = 0x7;// RX_TOP_ANA_REG_35.BT.B0 = 00000111 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
    tmp3 = 0x0;// RX_TOP_ANA_REG_33.BT.B0 = 00000### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp4 = 0x0;// RX_EQ_REG0.BT.B0 = ####0000 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp6 = 0x6C;// RX_TOP_ANA_REG_39.BT.B0 = 0110110# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x2;// TRX_PLL_CTRL_LANE.BT.B2 = ###00010 , rx_pll_rate_sel_lane[4:0]
    tmp12 = 0x1;// RX_TOP_ANA_REG_32.BT.B0 = 00000001 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x4;// RX_TOP_ANA_REG_36.BT.B0 = 000001## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0xB1;// RX_TOP_ANA_REG_34.BT.B0 = 10110001 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x4;// SYSTEM_CONFIG_0.BT.B3 = 00000100 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x43;// RX_SPD_TABLE_LANE.BT.B0 = #100#011 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp18 = 0x34;// RX_SPD_TABLE_LANE.BT.B1 = #011#100 , rx_rxclk_2x_div_ratio_lane[2:0], rx_rxclk_div_ratio_lane[2:0]
    tmp19 = 0x2;// RX_SPD_TABLE_LANE.BT.B2 = #####010 , rx_rxclk_4x_div_ratio_lane[2:0]
  }
  else if (gen_rx==6){
    tmp0 = 0x16;// RX_TOP_ANA_REG_37.BT.B0 = 00010110 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp2 = 0x7;// RX_TOP_ANA_REG_35.BT.B0 = 00000111 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
    tmp3 = 0x0;// RX_TOP_ANA_REG_33.BT.B0 = 00000### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp4 = 0x4;// RX_EQ_REG0.BT.B0 = ####0100 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp6 = 0x64;// RX_TOP_ANA_REG_39.BT.B0 = 0110010# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0xC;// TRX_PLL_CTRL_LANE.BT.B2 = ###01100 , rx_pll_rate_sel_lane[4:0]
    tmp9 = 0x9;// ANA_RX_PI_REG0.BT.B0 = ####1001 , rx_pi_icclow_ctrl_lane[3:0]
    tmp10 = 0x8;// ANA_RX_PI_REG1.BT.B0 = ####1000 , rx_pi_icc_ctrl_lane[3:0]
    tmp11 = 0x5A;// RX_TOP_ANA_REG_38.BT.B0 = 0101101# , rx_ctle_rfb_sel_lane[1:0], rx_ctle_iptat_sel_lane[2:0], rx_pi_rsel_lane[1:0]
    tmp12 = 0x1;// RX_TOP_ANA_REG_32.BT.B0 = 00000001 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x4;// RX_TOP_ANA_REG_36.BT.B0 = 000001## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0xB1;// RX_TOP_ANA_REG_34.BT.B0 = 10110001 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x2;// SYSTEM_CONFIG_0.BT.B3 = 00000010 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x53;// RX_SPD_TABLE_LANE.BT.B0 = #101#011 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp18 = 0x45;// RX_SPD_TABLE_LANE.BT.B1 = #100#101 , rx_rxclk_2x_div_ratio_lane[2:0], rx_rxclk_div_ratio_lane[2:0]
    tmp19 = 0x3;// RX_SPD_TABLE_LANE.BT.B2 = #####011 , rx_rxclk_4x_div_ratio_lane[2:0]
  }
  else if (gen_rx==5){
    tmp0 = 0x7;// RX_TOP_ANA_REG_37.BT.B0 = 00000111 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp1 = 0xD8;// RX_TOP_ANA_REG_40.BT.B0 = 11011### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp2 = 0x9;// RX_TOP_ANA_REG_35.BT.B0 = 00001001 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
    tmp3 = 0x0;// RX_TOP_ANA_REG_33.BT.B0 = 00000### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp4 = 0x4;// RX_EQ_REG0.BT.B0 = ####0100 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp6 = 0x64;// RX_TOP_ANA_REG_39.BT.B0 = 0110010# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x4;// TRX_PLL_CTRL_LANE.BT.B2 = ###00100 , rx_pll_rate_sel_lane[4:0]
    tmp12 = 0x0;// RX_TOP_ANA_REG_32.BT.B0 = 00000000 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x0;// RX_TOP_ANA_REG_36.BT.B0 = 000000## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0xC0;// RX_TOP_ANA_REG_34.BT.B0 = 11000000 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x2;// SYSTEM_CONFIG_0.BT.B3 = 00000010 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x53;// RX_SPD_TABLE_LANE.BT.B0 = #101#011 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp18 = 0x45;// RX_SPD_TABLE_LANE.BT.B1 = #100#101 , rx_rxclk_2x_div_ratio_lane[2:0], rx_rxclk_div_ratio_lane[2:0]
    tmp19 = 0x3;// RX_SPD_TABLE_LANE.BT.B2 = #####011 , rx_rxclk_4x_div_ratio_lane[2:0]
  }
  else if (gen_rx==4){
    tmp0 = 0x7;// RX_TOP_ANA_REG_37.BT.B0 = 00000111 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp1 = 0x28;// RX_TOP_ANA_REG_40.BT.B0 = 00101### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp2 = 0x9;// RX_TOP_ANA_REG_35.BT.B0 = 00001001 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
    tmp3 = 0x0;// RX_TOP_ANA_REG_33.BT.B0 = 00000### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp4 = 0x4;// RX_EQ_REG0.BT.B0 = ####0100 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp6 = 0x64;// RX_TOP_ANA_REG_39.BT.B0 = 0110010# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x3;// TRX_PLL_CTRL_LANE.BT.B2 = ###00011 , rx_pll_rate_sel_lane[4:0]
    tmp12 = 0x0;// RX_TOP_ANA_REG_32.BT.B0 = 00000000 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x0;// RX_TOP_ANA_REG_36.BT.B0 = 000000## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0xC0;// RX_TOP_ANA_REG_34.BT.B0 = 11000000 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x2;// SYSTEM_CONFIG_0.BT.B3 = 00000010 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x53;// RX_SPD_TABLE_LANE.BT.B0 = #101#011 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp18 = 0x45;// RX_SPD_TABLE_LANE.BT.B1 = #100#101 , rx_rxclk_2x_div_ratio_lane[2:0], rx_rxclk_div_ratio_lane[2:0]
    tmp19 = 0x3;// RX_SPD_TABLE_LANE.BT.B2 = #####011 , rx_rxclk_4x_div_ratio_lane[2:0]
  }
  else if (gen_rx==3){
    tmp0 = 0x7;// RX_TOP_ANA_REG_37.BT.B0 = 00000111 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp2 = 0x9;// RX_TOP_ANA_REG_35.BT.B0 = 00001001 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
    tmp3 = 0x0;// RX_TOP_ANA_REG_33.BT.B0 = 00000### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp4 = 0x4;// RX_EQ_REG0.BT.B0 = ####0100 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp6 = 0x6C;// RX_TOP_ANA_REG_39.BT.B0 = 0110110# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x2;// TRX_PLL_CTRL_LANE.BT.B2 = ###00010 , rx_pll_rate_sel_lane[4:0]
    tmp12 = 0x0;// RX_TOP_ANA_REG_32.BT.B0 = 00000000 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x0;// RX_TOP_ANA_REG_36.BT.B0 = 000000## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0xC0;// RX_TOP_ANA_REG_34.BT.B0 = 11000000 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x2;// SYSTEM_CONFIG_0.BT.B3 = 00000010 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x53;// RX_SPD_TABLE_LANE.BT.B0 = #101#011 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp18 = 0x45;// RX_SPD_TABLE_LANE.BT.B1 = #100#101 , rx_rxclk_2x_div_ratio_lane[2:0], rx_rxclk_div_ratio_lane[2:0]
    tmp19 = 0x3;// RX_SPD_TABLE_LANE.BT.B2 = #####011 , rx_rxclk_4x_div_ratio_lane[2:0]
  }
  else if (gen_rx==2){
    tmp0 = 0x7;// RX_TOP_ANA_REG_37.BT.B0 = 00000111 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp1 = 0xD8;// RX_TOP_ANA_REG_40.BT.B0 = 11011### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp2 = 0x9;// RX_TOP_ANA_REG_35.BT.B0 = 00001001 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
    tmp3 = 0x0;// RX_TOP_ANA_REG_33.BT.B0 = 00000### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp4 = 0x8;// RX_EQ_REG0.BT.B0 = ####1000 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp6 = 0x64;// RX_TOP_ANA_REG_39.BT.B0 = 0110010# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x4;// TRX_PLL_CTRL_LANE.BT.B2 = ###00100 , rx_pll_rate_sel_lane[4:0]
    tmp12 = 0x0;// RX_TOP_ANA_REG_32.BT.B0 = 00000000 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x0;// RX_TOP_ANA_REG_36.BT.B0 = 000000## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0xC0;// RX_TOP_ANA_REG_34.BT.B0 = 11000000 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x1;// SYSTEM_CONFIG_0.BT.B3 = 00000001 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x63;// RX_SPD_TABLE_LANE.BT.B0 = #110#011 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp18 = 0x56;// RX_SPD_TABLE_LANE.BT.B1 = #101#110 , rx_rxclk_2x_div_ratio_lane[2:0], rx_rxclk_div_ratio_lane[2:0]
    tmp19 = 0x4;// RX_SPD_TABLE_LANE.BT.B2 = #####100 , rx_rxclk_4x_div_ratio_lane[2:0]
  }
  else if (gen_rx==1){
    tmp0 = 0x7;// RX_TOP_ANA_REG_37.BT.B0 = 00000111 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp1 = 0x28;// RX_TOP_ANA_REG_40.BT.B0 = 00101### , rx_dll_cap_sel_lane[2:0], rx_a90_cap_sel_lane[1:0]
    tmp2 = 0x9;// RX_TOP_ANA_REG_35.BT.B0 = 00001001 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
    tmp3 = 0x0;// RX_TOP_ANA_REG_33.BT.B0 = 00000### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp4 = 0x8;// RX_EQ_REG0.BT.B0 = ####1000 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp6 = 0x64;// RX_TOP_ANA_REG_39.BT.B0 = 0110010# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x3;// TRX_PLL_CTRL_LANE.BT.B2 = ###00011 , rx_pll_rate_sel_lane[4:0]
    tmp12 = 0x0;// RX_TOP_ANA_REG_32.BT.B0 = 00000000 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x0;// RX_TOP_ANA_REG_36.BT.B0 = 000000## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0xC0;// RX_TOP_ANA_REG_34.BT.B0 = 11000000 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x1;// SYSTEM_CONFIG_0.BT.B3 = 00000001 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x63;// RX_SPD_TABLE_LANE.BT.B0 = #110#011 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp18 = 0x56;// RX_SPD_TABLE_LANE.BT.B1 = #101#110 , rx_rxclk_2x_div_ratio_lane[2:0], rx_rxclk_div_ratio_lane[2:0]
    tmp19 = 0x4;// RX_SPD_TABLE_LANE.BT.B2 = #####100 , rx_rxclk_4x_div_ratio_lane[2:0]
  }
  else if (gen_rx==0){
    tmp0 = 0x7;// RX_TOP_ANA_REG_37.BT.B0 = 00000111 , rx_ctle_cur_tia_sel_lane[3:0], rx_ctle_gain_coarse_lane[3:0]
    tmp2 = 0x9;// RX_TOP_ANA_REG_35.BT.B0 = 00001001 , rx_ctle_cs2_ctrl_lane[3:0], rx_ctle_rs2_ctrl_lane[3:0]
    tmp3 = 0x0;// RX_TOP_ANA_REG_33.BT.B0 = 00000### , rx_ctle_cs1_ctrl_lane[4:0]
    tmp4 = 0x8;// RX_EQ_REG0.BT.B0 = ####1000 , rx_eq_pam2_en_lane, rx_rate_mode_lane[1:0], rx_th_sel_lane[1:0]
    tmp6 = 0x6C;// RX_TOP_ANA_REG_39.BT.B0 = 0110110# , rx_adc_icc_sel_lane[1:0], rx_adc_vdd_sel_lane[2:0], rx_adc_res_sel_lane[1:0]
    tmp8 = 0x2;// TRX_PLL_CTRL_LANE.BT.B2 = ###00010 , rx_pll_rate_sel_lane[4:0]
    tmp12 = 0x0;// RX_TOP_ANA_REG_32.BT.B0 = 00000000 , rx_innet_tcoil_cl_lane[3:0], rx_ctle_rl1_ctrl_lane[3:0]
    tmp13 = 0x0;// RX_TOP_ANA_REG_36.BT.B0 = 000000## , rx_ctle_rs2_sel_lane[1:0], rx_ctle_cur2_sel_lane[3:0]
    tmp14 = 0xC0;// RX_TOP_ANA_REG_34.BT.B0 = 11000000 , rx_ctle_rs1_ctrl_lane[3:0], rx_ctle_cur1_sel_lane[3:0]
    tmp16 = 0x1;// SYSTEM_CONFIG_0.BT.B3 = 00000001 , rx_rate_2_pll_ratio_x8_lane[7:0]
    tmp17 = 0x63;// RX_SPD_TABLE_LANE.BT.B0 = #110#011 , rx_adcclk_div_ratio_lane[2:0], rx_data_width_lane[1:0], rxdata_latency_reduce_en_lane
    tmp18 = 0x56;// RX_SPD_TABLE_LANE.BT.B1 = #101#110 , rx_rxclk_2x_div_ratio_lane[2:0], rx_rxclk_div_ratio_lane[2:0]
    tmp19 = 0x4;// RX_SPD_TABLE_LANE.BT.B2 = #####100 , rx_rxclk_4x_div_ratio_lane[2:0]
  }
  RX_TOP_ANA_REG_37.BT.B0 = tmp0;
  RX_TOP_ANA_REG_40.BT.B0 = tmp1;
  RX_TOP_ANA_REG_35.BT.B0 = tmp2;
  RX_TOP_ANA_REG_33.BT.B0 = tmp3;
  RX_EQ_REG0.BT.B0 = (RX_EQ_REG0.BT.B0 & 0x10) | (tmp4 & 0xef); // (RX_EQ_REG0.BT.B0 & 00010000) | (tmp4 & 11101111)
  TX_TRAIN_PATTTERN_REG0.BT.B1 = tmp5;
  RX_TOP_ANA_REG_39.BT.B0 = tmp6;
  INPUT_RX_PIN_REG0_LANE.BT.B0 = tmp7;
  TRX_PLL_CTRL_LANE.BT.B2 = tmp8;
  ANA_RX_PI_REG0.BT.B0 = tmp9;
  ANA_RX_PI_REG1.BT.B0 = tmp10;
  RX_TOP_ANA_REG_38.BT.B0 = tmp11;
  RX_TOP_ANA_REG_32.BT.B0 = tmp12;
  RX_TOP_ANA_REG_36.BT.B0 = tmp13;
  RX_TOP_ANA_REG_34.BT.B0 = tmp14;
  SYSTEM_CONFIG_0.BT.B2 = (SYSTEM_CONFIG_0.BT.B2 & 0x1f) | (tmp15 & 0xe0); // (SYSTEM_CONFIG_0.BT.B2 & 00011111) | (tmp15 & 11100000)
  SYSTEM_CONFIG_0.BT.B3 = tmp16;
  RX_SPD_TABLE_LANE.BT.B0 = tmp17;
  RX_SPD_TABLE_LANE.BT.B1 = tmp18;
  RX_SPD_TABLE_LANE.BT.B2 = tmp19;
}
void loadspeedtbl_lc_pll (uint8_t pll_rate_sel, uint8_t ref_clk_sel, int tsrs_sel) BANKING_CTRL {
  uint8_t tmp0 = 0x1C; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
  uint8_t tmp1 = 0x0; //PLL_TS_LANE_REG12.BT.B1 , pll_ts_fbdiv_cal_lane[9:0]
  uint8_t tmp2 = 0x38; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
  uint8_t tmp3 = 0xE5; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
  uint8_t tmp4 = 0xD; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
  uint8_t tmp5 = 0x18; //PLL_TS_DTX_REG2.BT.B3 , pll_ts_ssc_step_125ppm_lane[3:0], pll_ts_ssc_acc_factor_lane
  uint8_t tmp6 = 0x68; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
  uint8_t tmp7 = 0x83; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
  uint8_t tmp8 = 0x15; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
  uint8_t tmp9 = 0x4E; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
  uint8_t tmp10 = 0x1F; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
  uint8_t tmp11 = 0x80; //PLL_TS_UPHY14_CMN_ANAREG_TOP_022.BT.B0 , pll_ts_reg0p9_speed_track_clk_lane[2:0]
  uint8_t tmp12 = 0xA; //PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
  uint8_t tmp13 = 0x0; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
  uint8_t tmp14 = 0x0; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
  uint8_t tmp15 = 0x0; //PLL_TS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 , pll_ts_ck500m_div_lane[1:0], pll_ts_lcpll_postdiv_en_lane, pll_ts_lcpll_postdiv_1p5or2_en_lane
  uint8_t tmp16 = 0xF8; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
  if (pll_rate_sel==25){
    tmp0 = 0x1B; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x48; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0xFD; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp6 = 0x48; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
    tmp7 = 0xA5; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0x94; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp9 = 0x24; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp13 = 0xD4; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0xE; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp15 = 0x2; //PLL_TS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 , pll_ts_ck500m_div_lane[1:0], pll_ts_lcpll_postdiv_en_lane, pll_ts_lcpll_postdiv_1p5or2_en_lane
    tmp16 = 0xC4; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x74;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01110100 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x2A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x2C;// PLL_TS_LANE_REG1.BT.B0 = 00101100 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xBC;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10111100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x1D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00011101 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x90;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 10010000 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0x2C;// PLL_TS_LANE_REG1.BT.B0 = 00101100 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x44;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01000100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp2 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00100100 , pll_ts_fbdiv_lane[7:0]
      tmp14 = 0xF1;// PLL_TS_LANE_REG1.BT.B1 = 11110001 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x34;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 00110100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x3A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111010 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x2C;// PLL_TS_LANE_REG1.BT.B0 = 00101100 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x5C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp14 = 0xF1;// PLL_TS_LANE_REG1.BT.B1 = 11110001 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x74;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01110100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x5A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01011010 , pll_ts_fbdiv_lane[7:0]
      tmp14 = 0xF1;// PLL_TS_LANE_REG1.BT.B1 = 11110001 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x94;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10010100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x78;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111000 , pll_ts_fbdiv_lane[7:0]
      tmp14 = 0xF1;// PLL_TS_LANE_REG1.BT.B1 = 11110001 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==0){
      tmp2 = 0x91;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10010001 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x2C;// PLL_TS_LANE_REG1.BT.B0 = 00101100 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xEC;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11101100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
  }
  else if (pll_rate_sel==24){
    tmp0 = 0x1B; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x88; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0x29; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp6 = 0x58; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
    tmp8 = 0x14; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp9 = 0x78; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp13 = 0xE2; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0x1; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp15 = 0x2; //PLL_TS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 , pll_ts_ck500m_div_lane[1:0], pll_ts_lcpll_postdiv_en_lane, pll_ts_lcpll_postdiv_1p5or2_en_lane
    tmp16 = 0xFC; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x57;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010111 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x22;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xB4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x36;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00110110 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x10;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010000 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xC0;// PLL_TS_LANE_REG1.BT.B0 = 11000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xE3;// PLL_TS_LANE_REG1.BT.B1 = 11100011 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xAC;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10101100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp12 = 0x22;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x36;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00110110 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0xC0;// PLL_TS_LANE_REG1.BT.B0 = 11000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xE3;// PLL_TS_LANE_REG1.BT.B1 = 11100011 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x6C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01101100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x55;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010101 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0xB4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x71;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01110001 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0xD5;// PLL_TS_LANE_REG1.BT.B0 = 11010101 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF5;// PLL_TS_LANE_REG1.BT.B1 = 11110101 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xEC;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11101100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
    }
  }
  else if (pll_rate_sel==23){
    tmp0 = 0x1B; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x88; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0x29; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp6 = 0x58; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
    tmp8 = 0x14; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp9 = 0x78; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp13 = 0xE2; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0x1; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp16 = 0xFC; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x57;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010111 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x10;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010000 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp12 = 0x22;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x36;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00110110 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x10;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010000 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xC0;// PLL_TS_LANE_REG1.BT.B0 = 11000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xE3;// PLL_TS_LANE_REG1.BT.B1 = 11100011 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xAC;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10101100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp12 = 0x22;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x36;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00110110 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x10;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010000 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0xC0;// PLL_TS_LANE_REG1.BT.B0 = 11000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xE3;// PLL_TS_LANE_REG1.BT.B1 = 11100011 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xAC;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10101100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x55;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010101 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x10;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010000 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x71;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01110001 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0xD5;// PLL_TS_LANE_REG1.BT.B0 = 11010101 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF5;// PLL_TS_LANE_REG1.BT.B1 = 11110101 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xEC;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11101100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
    }
  }
  else if (pll_rate_sel==22){
    tmp2 = 0x46; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0x9D; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp5 = 0x10; //PLL_TS_DTX_REG2.BT.B3 , pll_ts_ssc_step_125ppm_lane[3:0], pll_ts_ssc_acc_factor_lane
    tmp6 = 0x48; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
    tmp7 = 0xA5; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0x14; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp9 = 0x64; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp13 = 0xCC; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0xED; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp15 = 0x2; //PLL_TS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 , pll_ts_ck500m_div_lane[1:0], pll_ts_lcpll_postdiv_en_lane, pll_ts_lcpll_postdiv_1p5or2_en_lane
    tmp16 = 0x6C; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x2D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00101101 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x10;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010000 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x38;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111000 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x10;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010000 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp16 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10000100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp8 = 0x10;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010000 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp16 = 0xAC;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10101100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x38;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111000 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x10;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010000 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10000100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x58;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01011000 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x19;// PLL_TS_LANE_REG1.BT.B0 = 00011001 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x5;// PLL_TS_LANE_REG1.BT.B1 = 00000101 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x8C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10001100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x75;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01110101 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x72;// PLL_TS_LANE_REG1.BT.B0 = 01110010 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF9;// PLL_TS_LANE_REG1.BT.B1 = 11111001 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xBC;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10111100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
      tmp2 = 0x8D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10001101 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0xEC;// PLL_TS_LANE_REG1.BT.B0 = 11101100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xA;// PLL_TS_LANE_REG1.BT.B1 = 00001010 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xE4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11100100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
  }
  else if (pll_rate_sel==21){
    tmp2 = 0x58; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0x95; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp5 = 0x10; //PLL_TS_DTX_REG2.BT.B3 , pll_ts_ssc_step_125ppm_lane[3:0], pll_ts_ssc_acc_factor_lane
    tmp6 = 0x48; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
    tmp7 = 0xA5; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0x14; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp13 = 0xB3; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0xF8; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp15 = 0x2; //PLL_TS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 , pll_ts_ck500m_div_lane[1:0], pll_ts_lcpll_postdiv_en_lane, pll_ts_lcpll_postdiv_1p5or2_en_lane
    tmp16 = 0x6C; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x2D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00101101 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x10;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010000 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xF4;// PLL_TS_LANE_REG1.BT.B0 = 11110100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xA;// PLL_TS_LANE_REG1.BT.B1 = 00001010 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x1C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00011100 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 00100100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp2 = 0x23;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00100011 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x34;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 00110100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x38;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111000 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x54;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01010100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp2 = 0x46;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01000110 , pll_ts_fbdiv_lane[7:0]
    }
    else if (ref_clk_sel==2){
      tmp13 = 0x10;// PLL_TS_LANE_REG1.BT.B0 = 00010000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x10;// PLL_TS_LANE_REG1.BT.B1 = 00010000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x8C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10001100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x75;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01110101 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x61;// PLL_TS_LANE_REG1.BT.B0 = 01100001 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x4;// PLL_TS_LANE_REG1.BT.B1 = 00000100 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xBC;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10111100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
      tmp2 = 0x8C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10001100 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0xE4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11100100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
  }
  else if (pll_rate_sel==20){
    tmp2 = 0x46; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0x9D; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp5 = 0x10; //PLL_TS_DTX_REG2.BT.B3 , pll_ts_ssc_step_125ppm_lane[3:0], pll_ts_ssc_acc_factor_lane
    tmp6 = 0x48; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
    tmp7 = 0xA5; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0x14; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp9 = 0x64; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp13 = 0xCC; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0xED; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp16 = 0x6C; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x2D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00101101 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x10;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010000 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x38;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111000 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x10;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010000 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp16 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10000100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp8 = 0x10;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010000 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp16 = 0xAC;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10101100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x38;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111000 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x10;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010000 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10000100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x58;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01011000 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x19;// PLL_TS_LANE_REG1.BT.B0 = 00011001 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x5;// PLL_TS_LANE_REG1.BT.B1 = 00000101 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x8C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10001100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x75;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01110101 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x72;// PLL_TS_LANE_REG1.BT.B0 = 01110010 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF9;// PLL_TS_LANE_REG1.BT.B1 = 11111001 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xBC;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10111100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
      tmp2 = 0x8D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10001101 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0xEC;// PLL_TS_LANE_REG1.BT.B0 = 11101100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xA;// PLL_TS_LANE_REG1.BT.B1 = 00001010 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xE4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11100100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
  }
  else if (pll_rate_sel==19){
    tmp2 = 0x58; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0x95; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp5 = 0x10; //PLL_TS_DTX_REG2.BT.B3 , pll_ts_ssc_step_125ppm_lane[3:0], pll_ts_ssc_acc_factor_lane
    tmp6 = 0x48; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
    tmp7 = 0xA5; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0x14; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp13 = 0xB3; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0xF8; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp16 = 0x54; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x2D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00101101 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xF4;// PLL_TS_LANE_REG1.BT.B0 = 11110100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xA;// PLL_TS_LANE_REG1.BT.B1 = 00001010 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x44;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01000100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x1C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00011100 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x24;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 00100100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp2 = 0x23;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00100011 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x34;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 00110100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x38;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111000 , pll_ts_fbdiv_lane[7:0]
    }
    else if (ref_clk_sel==3){
      tmp2 = 0x46;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01000110 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x6C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01101100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp13 = 0x10;// PLL_TS_LANE_REG1.BT.B0 = 00010000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x10;// PLL_TS_LANE_REG1.BT.B1 = 00010000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x8C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10001100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x75;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01110101 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x61;// PLL_TS_LANE_REG1.BT.B0 = 01100001 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x4;// PLL_TS_LANE_REG1.BT.B1 = 00000100 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xBC;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10111100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
      tmp2 = 0x8C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10001100 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0xE4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11100100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
  }
  else if (pll_rate_sel==18){
    tmp2 = 0x46; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0x8F; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp5 = 0x10; //PLL_TS_DTX_REG2.BT.B3 , pll_ts_ssc_step_125ppm_lane[3:0], pll_ts_ssc_acc_factor_lane
    tmp6 = 0x58; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
    tmp7 = 0xA5; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0x14; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp9 = 0x40; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp16 = 0x6C; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x2D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00101101 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x10;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010000 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x49;// PLL_TS_LANE_REG1.BT.B0 = 01001001 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x12;// PLL_TS_LANE_REG1.BT.B1 = 00010010 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x38;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111000 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x10;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010000 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp16 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10000100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp8 = 0x10;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010000 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp16 = 0xAC;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10101100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x38;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111000 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x10;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010000 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x84;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10000100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x58;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01011000 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x68;// PLL_TS_LANE_REG1.BT.B0 = 01101000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x17;// PLL_TS_LANE_REG1.BT.B1 = 00010111 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x8C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10001100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x75;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01110101 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0xB4;// PLL_TS_LANE_REG1.BT.B0 = 10110100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xB;// PLL_TS_LANE_REG1.BT.B1 = 00001011 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xBC;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10111100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
      tmp2 = 0x8C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10001100 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0xE4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11100100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
  }
  else if (pll_rate_sel==17){
    tmp2 = 0x45; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0x51; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp5 = 0x10; //PLL_TS_DTX_REG2.BT.B3 , pll_ts_ssc_step_125ppm_lane[3:0], pll_ts_ssc_acc_factor_lane
    tmp6 = 0x58; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
    tmp8 = 0x14; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp9 = 0xB1; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp10 = 0x1E; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
    tmp12 = 0x12; //PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    tmp13 = 0xE5; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0xE; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp16 = 0xFC; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x2C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00101100 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x10;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010000 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x8C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10001100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x37;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00110111 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x10;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010000 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xAC;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10101100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp8 = 0x10;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010000 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0xDC;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11011100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x37;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00110111 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x10;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010000 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp12 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xAC;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10101100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp12 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp16 = 0x8C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10001100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x56;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010110 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xFB;// PLL_TS_LANE_REG1.BT.B0 = 11111011 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x2;// PLL_TS_LANE_REG1.BT.B1 = 00000010 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xB4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0xE5;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 11100101 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x5;// PLL_TS_LANE_REG1.BT.B0 = 00000101 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xFD;// PLL_TS_LANE_REG1.BT.B1 = 11111101 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==0){
      tmp2 = 0x8A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10001010 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
  }
  else if (pll_rate_sel==16){
    tmp0 = 0x1B; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x85; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0xDB; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp4 = 0xC; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp6 = 0x58; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
    tmp8 = 0x14; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp9 = 0xBE; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp10 = 0x1E; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
    tmp13 = 0xC8; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0x5; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp16 = 0xFC; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x55;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010101 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x22;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xB4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x35;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00110101 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x10;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010000 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x5D;// PLL_TS_LANE_REG1.BT.B0 = 01011101 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF6;// PLL_TS_LANE_REG1.BT.B1 = 11110110 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xA4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10100100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp8 = 0x10;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010000 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp12 = 0x22;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x35;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00110101 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x10;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010000 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0x5D;// PLL_TS_LANE_REG1.BT.B0 = 01011101 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF6;// PLL_TS_LANE_REG1.BT.B1 = 11110110 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xA4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10100100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x53;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010011 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x9D;// PLL_TS_LANE_REG1.BT.B0 = 10011101 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xFF;// PLL_TS_LANE_REG1.BT.B1 = 11111111 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xAC;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10101100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x6F;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01101111 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0xF3;// PLL_TS_LANE_REG1.BT.B0 = 11110011 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xB;// PLL_TS_LANE_REG1.BT.B1 = 00001011 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xEC;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11101100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
    }
  }
  else if (pll_rate_sel==15){
    tmp0 = 0x1B; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x85; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0xDB; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp4 = 0xC; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp6 = 0x58; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
    tmp8 = 0x14; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp9 = 0xBE; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp10 = 0x1E; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
    tmp13 = 0x2B; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0x6; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp16 = 0xFC; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x55;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010101 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x22;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x63;// PLL_TS_LANE_REG1.BT.B0 = 01100011 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xB4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x35;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00110101 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xBF;// PLL_TS_LANE_REG1.BT.B0 = 10111111 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF6;// PLL_TS_LANE_REG1.BT.B1 = 11110110 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x6C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01101100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp12 = 0x22;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x35;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00110101 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0xBF;// PLL_TS_LANE_REG1.BT.B0 = 10111111 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF6;// PLL_TS_LANE_REG1.BT.B1 = 11110110 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x6C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01101100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x53;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010011 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xAC;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10101100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x6F;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01101111 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x56;// PLL_TS_LANE_REG1.BT.B0 = 01010110 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xC;// PLL_TS_LANE_REG1.BT.B1 = 00001100 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xEC;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11101100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
    }
  }
  else if (pll_rate_sel==14){
    tmp0 = 0x1A; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x81; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0x7B; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp4 = 0xC; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp9 = 0xFD; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp10 = 0x1E; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
    tmp12 = 0x1A; //PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    tmp13 = 0xFB; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0x2; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp16 = 0xFB; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x3E;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111110 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x11;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0x46;// PLL_TS_LANE_REG1.BT.B0 = 01000110 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x8;// PLL_TS_LANE_REG1.BT.B1 = 00001000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xC3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11000011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp12 = 0x2A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==5){
      tmp2 = 0x61;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100001 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x92;// PLL_TS_LANE_REG1.BT.B0 = 10010010 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xD;// PLL_TS_LANE_REG1.BT.B1 = 00001101 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xCB;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11001011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x9B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10011011 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x46;// PLL_TS_LANE_REG1.BT.B0 = 01000110 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x8;// PLL_TS_LANE_REG1.BT.B1 = 00001000 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==3){
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x51;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010001 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xB;// PLL_TS_LANE_REG1.BT.B0 = 00001011 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x16;// PLL_TS_LANE_REG1.BT.B1 = 00010110 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xAB;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10101011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x6B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01101011 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xEA;// PLL_TS_LANE_REG1.BT.B0 = 11101010 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xEF;// PLL_TS_LANE_REG1.BT.B1 = 11101111 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xE3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11100011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
      tmp12 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
  }
  else if (pll_rate_sel==13){
    tmp0 = 0x1A; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x81; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0x7B; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp4 = 0xC; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp9 = 0xFD; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp10 = 0x1E; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
    tmp12 = 0x12; //PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    tmp13 = 0xFD; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0x2; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp16 = 0xFB; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x3E;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111110 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x48;// PLL_TS_LANE_REG1.BT.B0 = 01001000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x8;// PLL_TS_LANE_REG1.BT.B1 = 00001000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x7B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x4D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001101 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xCE;// PLL_TS_LANE_REG1.BT.B0 = 11001110 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xED;// PLL_TS_LANE_REG1.BT.B1 = 11101101 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xA3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10100011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp2 = 0x61;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100001 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x94;// PLL_TS_LANE_REG1.BT.B0 = 10010100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xD;// PLL_TS_LANE_REG1.BT.B1 = 00001101 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xCB;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11001011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x67;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100111 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0xB;// PLL_TS_LANE_REG1.BT.B0 = 00001011 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xFB;// PLL_TS_LANE_REG1.BT.B1 = 11111011 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xDB;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11011011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
    }
    else if (ref_clk_sel==2){
      tmp2 = 0xA1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10100001 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0xA2;// PLL_TS_LANE_REG1.BT.B0 = 10100010 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xFC;// PLL_TS_LANE_REG1.BT.B1 = 11111100 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x6B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01101011 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xEC;// PLL_TS_LANE_REG1.BT.B0 = 11101100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xEF;// PLL_TS_LANE_REG1.BT.B1 = 11101111 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xE3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11100011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
      tmp12 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
  }
  else if (pll_rate_sel==12){
    tmp0 = 0x19; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x7D; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0x1B; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp4 = 0xC; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp9 = 0x40; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp16 = 0xFB; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x14;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00010100 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x11;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x53;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01010011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x19;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00011001 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x11;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x6B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01101011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp2 = 0x5E;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01011110 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xEC;// PLL_TS_LANE_REG1.BT.B0 = 11101100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xA;// PLL_TS_LANE_REG1.BT.B1 = 00001010 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x32;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00110010 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x11;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0xDB;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11011011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x4E;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001110 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x72;// PLL_TS_LANE_REG1.BT.B0 = 01110010 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF9;// PLL_TS_LANE_REG1.BT.B1 = 11111001 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xE3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11100011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
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
    tmp9 = 0xB8; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp10 = 0x1E; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
    tmp14 = 0xF3; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp16 = 0xFB; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x3B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111011 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x39;// PLL_TS_LANE_REG1.BT.B0 = 00111001 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x1;// PLL_TS_LANE_REG1.BT.B1 = 00000001 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xAB;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10101011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x55;// PLL_TS_LANE_REG1.BT.B0 = 01010101 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x8B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10001011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp2 = 0x5C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01011100 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xE4;// PLL_TS_LANE_REG1.BT.B0 = 11100100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF8;// PLL_TS_LANE_REG1.BT.B1 = 11111000 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==4){
      tmp13 = 0x55;// PLL_TS_LANE_REG1.BT.B0 = 01010101 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x8B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10001011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp2 = 0x7B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111011 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp14 = 0x4;// PLL_TS_LANE_REG1.BT.B1 = 00000100 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x4D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001101 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0xAB;// PLL_TS_LANE_REG1.BT.B0 = 10101011 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xA;// PLL_TS_LANE_REG1.BT.B1 = 00001010 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xE3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11100011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
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
    tmp9 = 0xBD; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp12 = 0x12; //PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    tmp13 = 0x33; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0x4; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp16 = 0xFB; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x27;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00100111 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x11;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xAB;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10101011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp8 = 0x11;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0x1;// PLL_TS_LANE_REG1.BT.B0 = 00000001 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x15;// PLL_TS_LANE_REG1.BT.B1 = 00010101 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xDB;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11011011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp2 = 0x3D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111101 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x11;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    }
    else if (ref_clk_sel==4){
      tmp12 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x1;// PLL_TS_LANE_REG1.BT.B0 = 00000001 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x15;// PLL_TS_LANE_REG1.BT.B1 = 00010101 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x8B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10001011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp2 = 0x7A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111010 , pll_ts_fbdiv_lane[7:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x4C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001100 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xC2;// PLL_TS_LANE_REG1.BT.B0 = 11000010 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF6;// PLL_TS_LANE_REG1.BT.B1 = 11110110 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xE3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11100011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0xCB;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 11001011 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x7B;// PLL_TS_LANE_REG1.BT.B0 = 01111011 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xFD;// PLL_TS_LANE_REG1.BT.B1 = 11111101 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==0){
      tmp2 = 0x7A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111010 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
  }
  else if (pll_rate_sel==9){
    tmp0 = 0x18; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x3D; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0xC7; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp4 = 0xB; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp9 = 0xAE; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp13 = 0xBE; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0xB; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp16 = 0xFB; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x27;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00100111 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x89;// PLL_TS_LANE_REG1.BT.B0 = 10001001 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x7;// PLL_TS_LANE_REG1.BT.B1 = 00000111 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x6B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01101011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x49;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001001 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x85;// PLL_TS_LANE_REG1.BT.B0 = 10000101 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xD3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp16 = 0xB3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x61;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100001 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x7E;// PLL_TS_LANE_REG1.BT.B0 = 01111110 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF2;// PLL_TS_LANE_REG1.BT.B1 = 11110010 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==3){
      tmp16 = 0xB3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x4C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001100 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x47;// PLL_TS_LANE_REG1.BT.B0 = 01000111 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xFE;// PLL_TS_LANE_REG1.BT.B1 = 11111110 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xE3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11100011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x65;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100101 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0xCF;// PLL_TS_LANE_REG1.BT.B0 = 11001111 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF0;// PLL_TS_LANE_REG1.BT.B1 = 11110000 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==0){
      tmp2 = 0x7A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111010 , pll_ts_fbdiv_lane[7:0]
    }
  }
  else if (pll_rate_sel==8){
    tmp0 = 0x17; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x74; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0x31; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp4 = 0xB; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp6 = 0x78; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
    tmp7 = 0x42; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp9 = 0x6B; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp13 = 0x49; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0xD; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp16 = 0xF9; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x25;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00100101 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x69;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01101001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp12 = 0x2A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==5){
      tmp2 = 0x1D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00011101 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x51;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01010001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x8B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10001011 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x61;// PLL_TS_LANE_REG1.BT.B0 = 01100001 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x7;// PLL_TS_LANE_REG1.BT.B1 = 00000111 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==3){
      tmp2 = 0x3A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111010 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0xA9;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10101001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x48;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001000 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0xF2;// PLL_TS_LANE_REG1.BT.B0 = 11110010 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF0;// PLL_TS_LANE_REG1.BT.B1 = 11110000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xD1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x60;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100000 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0xF2;// PLL_TS_LANE_REG1.BT.B0 = 11110010 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF0;// PLL_TS_LANE_REG1.BT.B1 = 11110000 , pll_ts_init_foffs_lane[15:0]
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
    tmp8 = 0x16; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp13 = 0xB3; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0xF8; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    if (ref_clk_sel==7){
      tmp2 = 0x54;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010100 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x2A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x15;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00010101 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x60;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01100000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp12 = 0x22;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x2A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00101010 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0xC8;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11001000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x42;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01000010 , pll_ts_fbdiv_lane[7:0]
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
    tmp8 = 0x16; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp9 = 0xB1; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp10 = 0x1E; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
    tmp12 = 0x12; //PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    tmp13 = 0x9; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0xFB; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    if (ref_clk_sel==7){
      tmp2 = 0x21;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00100001 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xA0;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10100000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x3E;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111110 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x46;// PLL_TS_LANE_REG1.BT.B0 = 01000110 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x8;// PLL_TS_LANE_REG1.BT.B1 = 00001000 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==5){
      tmp12 = 0x22;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0xA5;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10100101 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x22;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==3){
    }
    else if (ref_clk_sel==2){
      tmp2 = 0xC1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 11000001 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x63;// PLL_TS_LANE_REG1.BT.B0 = 01100011 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF8;// PLL_TS_LANE_REG1.BT.B1 = 11111000 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0xAC;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10101100 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0xFB;// PLL_TS_LANE_REG1.BT.B0 = 11111011 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x2;// PLL_TS_LANE_REG1.BT.B1 = 00000010 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==0){
      tmp12 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
  }
  else if (pll_rate_sel==5){
    tmp0 = 0x14; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x65; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0xD1; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp4 = 0x9; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp6 = 0x78; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
    tmp7 = 0x42; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0x16; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp9 = 0xAE; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp12 = 0x12; //PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    tmp13 = 0xE9; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0xFA; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    if (ref_clk_sel==7){
      tmp2 = 0x51;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010001 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x2A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x51;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010001 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x22;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==5){
      tmp12 = 0x22;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xCF;// PLL_TS_LANE_REG1.BT.B0 = 11001111 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF0;// PLL_TS_LANE_REG1.BT.B1 = 11110000 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x51;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010001 , pll_ts_fbdiv_lane[7:0]
    }
    else if (ref_clk_sel==3){
      tmp13 = 0xCF;// PLL_TS_LANE_REG1.BT.B0 = 11001111 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF0;// PLL_TS_LANE_REG1.BT.B1 = 11110000 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x7F;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111111 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0xD;// PLL_TS_LANE_REG1.BT.B0 = 00001101 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x9;// PLL_TS_LANE_REG1.BT.B1 = 00001001 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0xFD;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 11111101 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xE4;// PLL_TS_LANE_REG1.BT.B0 = 11100100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF8;// PLL_TS_LANE_REG1.BT.B1 = 11111000 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==0){
      tmp12 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xCF;// PLL_TS_LANE_REG1.BT.B0 = 11001111 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF0;// PLL_TS_LANE_REG1.BT.B1 = 11110000 , pll_ts_init_foffs_lane[15:0]
    }
  }
  else if (pll_rate_sel==4){
    tmp0 = 0x14; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x64; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0xAF; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp4 = 0x9; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp6 = 0x78; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
    tmp7 = 0x42; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp8 = 0x16; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp9 = 0x40; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp12 = 0x12; //PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    if (ref_clk_sel==7){
      tmp2 = 0x20;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00100000 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x98;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10011000 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x3C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111100 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==5){
      tmp2 = 0x4B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001011 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x78;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111000 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
    }
    else if (ref_clk_sel==3){
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x7D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111101 , pll_ts_fbdiv_lane[7:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x53;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01010011 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x9E;// PLL_TS_LANE_REG1.BT.B0 = 10011110 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xEF;// PLL_TS_LANE_REG1.BT.B1 = 11101111 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==0){
      tmp12 = 0xA;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0000101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
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
    tmp8 = 0x94; //PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
    tmp9 = 0xC8; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp13 = 0x55; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0xF3; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp15 = 0x3; //PLL_TS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 , pll_ts_ck500m_div_lane[1:0], pll_ts_lcpll_postdiv_en_lane, pll_ts_lcpll_postdiv_1p5or2_en_lane
    tmp16 = 0x5C; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x2F;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00101111 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xDC;// PLL_TS_LANE_REG1.BT.B0 = 11011100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xEF;// PLL_TS_LANE_REG1.BT.B1 = 11101111 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x44;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01000100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x39;// PLL_TS_LANE_REG1.BT.B0 = 00111001 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x1;// PLL_TS_LANE_REG1.BT.B1 = 00000001 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==5){
      tmp2 = 0x25;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00100101 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x1C;// PLL_TS_LANE_REG1.BT.B0 = 00011100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF;// PLL_TS_LANE_REG1.BT.B1 = 00001111 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x34;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 00110100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp13 = 0x39;// PLL_TS_LANE_REG1.BT.B0 = 00111001 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x1;// PLL_TS_LANE_REG1.BT.B1 = 00000001 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==3){
      tmp2 = 0x93;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10010011 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp16 = 0xF4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11110100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x5C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01011100 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0xE4;// PLL_TS_LANE_REG1.BT.B0 = 11100100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF8;// PLL_TS_LANE_REG1.BT.B1 = 11111000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x94;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10010100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x7B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111011 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x4;// PLL_TS_LANE_REG1.BT.B1 = 00000100 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xCC;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11001100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
      tmp2 = 0x93;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10010011 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0xF4;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11110100 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
  }
  else if (pll_rate_sel==2){
    tmp0 = 0x1A; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x33; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0x59; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp4 = 0xC; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp9 = 0xA6; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp10 = 0x1E; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
    tmp13 = 0x10; //PLL_TS_LANE_REG1.BT.B0 , pll_ts_init_foffs_lane[15:0]
    tmp14 = 0x10; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp15 = 0x3; //PLL_TS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 , pll_ts_ck500m_div_lane[1:0], pll_ts_lcpll_postdiv_en_lane, pll_ts_lcpll_postdiv_1p5or2_en_lane
    tmp16 = 0xFB; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x66;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100110 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x2A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0010101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xD3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x63;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01100011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp2 = 0x20;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00100000 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x3B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 00111011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp13 = 0x0;// PLL_TS_LANE_REG1.BT.B0 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x63;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01100011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp2 = 0x40;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01000000 , pll_ts_fbdiv_lane[7:0]
      tmp16 = 0x83;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10000011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x9F;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10011111 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x5D;// PLL_TS_LANE_REG1.BT.B0 = 01011101 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF6;// PLL_TS_LANE_REG1.BT.B1 = 11110110 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x6A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01101010 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x5D;// PLL_TS_LANE_REG1.BT.B0 = 01011101 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xF6;// PLL_TS_LANE_REG1.BT.B1 = 11110110 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xDB;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11011011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==0){
      tmp2 = 0x80;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10000000 , pll_ts_fbdiv_lane[7:0]
    }
  }
  else if (pll_rate_sel==1){
    tmp0 = 0x18; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x3D; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp3 = 0xCD; //PLL_TS_DTX_REG2.BT.B0 , pll_ts_ssc_m_lane[12:0]
    tmp4 = 0xB; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp9 = 0xBD; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp14 = 0x4; //PLL_TS_LANE_REG1.BT.B1 , pll_ts_init_foffs_lane[15:0]
    tmp15 = 0x3; //PLL_TS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 , pll_ts_ck500m_div_lane[1:0], pll_ts_lcpll_postdiv_en_lane, pll_ts_lcpll_postdiv_1p5or2_en_lane
    tmp16 = 0xFB; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x27;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00100111 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp14 = 0x0;// PLL_TS_LANE_REG1.BT.B1 = 00000000 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x6B;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01101011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp2 = 0x49;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01001001 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp14 = 0xF9;// PLL_TS_LANE_REG1.BT.B1 = 11111001 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xD3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11010011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0x33;// PLL_TS_LANE_REG1.BT.B0 = 00110011 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xB3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10110011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp2 = 0x92;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10010010 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x1A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001101# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
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
      tmp16 = 0xE3;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11100011 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x66;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01100110 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0xA5;// PLL_TS_LANE_REG1.BT.B0 = 10100101 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x11;// PLL_TS_LANE_REG1.BT.B1 = 00010001 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==0){
      tmp2 = 0x7A;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01111010 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x33;// PLL_TS_LANE_REG1.BT.B0 = 00110011 , pll_ts_init_foffs_lane[15:0]
    }
  }
  else if (pll_rate_sel==0){
    tmp0 = 0x17; //PLL_TS_LANE_REG12.BT.B0 , pll_ts_fbdiv_cal_lane[9:0]
    tmp2 = 0x2D; //PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 , pll_ts_fbdiv_lane[7:0]
    tmp4 = 0xA; //PLL_TS_DTX_REG2.BT.B1 , pll_ts_ssc_m_lane[12:0]
    tmp6 = 0x78; //PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BT.B0 , pll_ts_lcpll_postdiv_dcc_cap_en_lane[4:0]
    tmp7 = 0x42; //PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BT.B0 , pll_ts_txclk_pi_icc_ctrl_lane[3:0], pll_ts_txclk_pi_icclow_ctrl_lane[3:0]
    tmp9 = 0x92; //PLL_TS_CAL_CTRL_LANE.BT.B0 , pll_ts_speed_thresh_lane[15:0]
    tmp10 = 0x1E; //PLL_TS_CAL_CTRL_LANE.BT.B1 , pll_ts_speed_thresh_lane[15:0]
    tmp15 = 0x3; //PLL_TS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 , pll_ts_ck500m_div_lane[1:0], pll_ts_lcpll_postdiv_en_lane, pll_ts_lcpll_postdiv_1p5or2_en_lane
    tmp16 = 0xF9; //PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    if (ref_clk_sel==7){
      tmp2 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00010010 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x11;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp16 = 0x49;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01001001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==6){
      tmp8 = 0x11;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp16 = 0xC1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 11000001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==5){
      tmp2 = 0x1C;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00011100 , pll_ts_fbdiv_lane[7:0]
      tmp8 = 0x11;// PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BT.B0 = 00010001 , pll_ts_vind_band_sel_lane, pll_ts_fbdiv_lane[9:8], pll_ts_pll_lpfr_lane[2:0], pll_ts_tx_intpr_lane[1:0]
      tmp13 = 0xCC;// PLL_TS_LANE_REG1.BT.B0 = 11001100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xED;// PLL_TS_LANE_REG1.BT.B1 = 11101101 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0x79;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 01111001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==4){
      tmp16 = 0x81;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10000001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==3){
      tmp2 = 0x38;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 00111000 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0xCC;// PLL_TS_LANE_REG1.BT.B0 = 11001100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xED;// PLL_TS_LANE_REG1.BT.B1 = 11101101 , pll_ts_init_foffs_lane[15:0]
      tmp16 = 0xA1;// PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = 10100001 , pll_ts_icp_lane[4:0], pll_ts_pll_reg_sel_lane[2:0]
    }
    else if (ref_clk_sel==2){
      tmp2 = 0x8D;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 10001101 , pll_ts_fbdiv_lane[7:0]
      tmp12 = 0x12;// PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = 0001001# , pll_ts_refdiv_lane[4:0], pll_ts_pll_lpfc_lane[1:0]
      tmp13 = 0xEC;// PLL_TS_LANE_REG1.BT.B0 = 11101100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xA;// PLL_TS_LANE_REG1.BT.B1 = 00001010 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==1){
      tmp2 = 0x5E;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01011110 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0xEC;// PLL_TS_LANE_REG1.BT.B0 = 11101100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0xA;// PLL_TS_LANE_REG1.BT.B1 = 00001010 , pll_ts_init_foffs_lane[15:0]
    }
    else if (ref_clk_sel==0){
      tmp2 = 0x71;// PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BT.B0 = 01110001 , pll_ts_fbdiv_lane[7:0]
      tmp13 = 0x34;// PLL_TS_LANE_REG1.BT.B0 = 00110100 , pll_ts_init_foffs_lane[15:0]
      tmp14 = 0x12;// PLL_TS_LANE_REG1.BT.B1 = 00010010 , pll_ts_init_foffs_lane[15:0]
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
    PLL_TS_CAL_CTRL_LANE.BT.B0 = tmp9;
    PLL_TS_CAL_CTRL_LANE.BT.B1 = tmp10;
    PLL_TS_UPHY14_CMN_ANAREG_TOP_022.BT.B0 = tmp11;
    PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = tmp12;
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
    PLL_RS_CAL_CTRL_LANE.BT.B0 = tmp9;
    PLL_RS_CAL_CTRL_LANE.BT.B1 = tmp10;
    PLL_RS_UPHY14_CMN_ANAREG_TOP_022.BT.B0 = tmp11;
    PLL_RS_UPHY14_CMN_ANAREG_TOP_003.BT.B0 = tmp12;
    PLL_RS_LANE_REG1.BT.B0 = tmp13;
    PLL_RS_LANE_REG1.BT.B1 = tmp14;
    PLL_RS_UPHY14_CMN_ANAREG_TOP_018.BT.B0 = tmp15;
    PLL_RS_UPHY14_CMN_ANAREG_TOP_004.BT.B0 = tmp16;
  }
}
void loadspeedtbl_tx() BANKING_CTRL {
  uint8_t tmp0 = 0x40; //TX_SYSTEM_LANE1.BT.B3 , tx_pam2_en_lane
  uint8_t tmp1 = 0x20; //PHYTEST_TX0.BT.B2 , tx_train_pat_sel_lane[2:0]
  uint8_t tmp2 = 0x11; //TX_TRAINING_IF_REG3.BT.B0 , tx_train_pat_two_zero_lane, ethernet_mode_tx_lane[1:0]
  uint8_t tmp3 = 0x66; //ANA_TXREG_REG0.BT.B0 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
  uint8_t tmp4 = 0x0; //CLKGEN_TX_LANE_REG1_LANE.BT.B0 , txdata_latency_reduce_en_lane
  uint8_t tmp5 = 0x15; //TRX_PLL_CTRL_LANE.BT.B3 , tx_pll_rate_sel_lane[4:0]
  uint8_t tmp6 = 0x1; //ANA_TXSPEED_REG0.BT.B0 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
  uint8_t tmp7 = 0x1; //TX_SYSTEM_LANE0.BT.B1 , tx_data_width_lane[1:0]
  uint8_t tmp8 = 0x0; //ANA_TX_FIR_REG0.BT.B0 , tx_fir_bypass_l1_delay_lane, tx_fir_bypass_l2_delay_lane, tx_fir_bypass_l3_delay_lane, tx_fir_2_dig_clk_div_lane
  if (gen_tx==52){
    tmp0 = 0x0;// TX_SYSTEM_LANE1.BT.B3 = #0###### , tx_pam2_en_lane
    tmp1 = 0x60;// PHYTEST_TX0.BT.B2 = 011##### , tx_train_pat_sel_lane[2:0]
    tmp2 = 0x13;// TX_TRAINING_IF_REG3.BT.B0 = ###1##11 , tx_train_pat_two_zero_lane, ethernet_mode_tx_lane[1:0]
    tmp3 = 0xCC;// ANA_TXREG_REG0.BT.B0 = 11001100 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0x13;// TRX_PLL_CTRL_LANE.BT.B3 = ###10011 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x20;// ANA_TXSPEED_REG0.BT.B0 = 001##000 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp7 = 0x3;// TX_SYSTEM_LANE0.BT.B1 = ######11 , tx_data_width_lane[1:0]
    tmp8 = 0x10;// ANA_TX_FIR_REG0.BT.B0 = 0001#### , tx_fir_bypass_l1_delay_lane, tx_fir_bypass_l2_delay_lane, tx_fir_bypass_l3_delay_lane, tx_fir_2_dig_clk_div_lane
  }
  else if (gen_tx==51){
    tmp0 = 0x0;// TX_SYSTEM_LANE1.BT.B3 = #0###### , tx_pam2_en_lane
    tmp1 = 0x60;// PHYTEST_TX0.BT.B2 = 011##### , tx_train_pat_sel_lane[2:0]
    tmp2 = 0x12;// TX_TRAINING_IF_REG3.BT.B0 = ###1##10 , tx_train_pat_two_zero_lane, ethernet_mode_tx_lane[1:0]
    tmp3 = 0x77;// ANA_TXREG_REG0.BT.B0 = 01110111 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0x19;// TRX_PLL_CTRL_LANE.BT.B3 = ###11001 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x60;// ANA_TXSPEED_REG0.BT.B0 = 011##000 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp7 = 0x2;// TX_SYSTEM_LANE0.BT.B1 = ######10 , tx_data_width_lane[1:0]
  }
  else if (gen_tx==50){
    tmp1 = 0x40;// PHYTEST_TX0.BT.B2 = 010##### , tx_train_pat_sel_lane[2:0]
    tmp6 = 0x60;// ANA_TXSPEED_REG0.BT.B0 = 011##000 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
  }
  else if (gen_tx==49){
    tmp3 = 0x33;// ANA_TXREG_REG0.BT.B0 = 00110011 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
  }
  else if (gen_tx==48){
    tmp0 = 0x0;// TX_SYSTEM_LANE1.BT.B3 = #0###### , tx_pam2_en_lane
    tmp1 = 0x60;// PHYTEST_TX0.BT.B2 = 011##### , tx_train_pat_sel_lane[2:0]
    tmp2 = 0x12;// TX_TRAINING_IF_REG3.BT.B0 = ###1##10 , tx_train_pat_two_zero_lane, ethernet_mode_tx_lane[1:0]
    tmp3 = 0x33;// ANA_TXREG_REG0.BT.B0 = 00110011 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0x18;// TRX_PLL_CTRL_LANE.BT.B3 = ###11000 , tx_pll_rate_sel_lane[4:0]
    tmp7 = 0x2;// TX_SYSTEM_LANE0.BT.B1 = ######10 , tx_data_width_lane[1:0]
  }
  else if (gen_tx==47){
    tmp3 = 0x44;// ANA_TXREG_REG0.BT.B0 = 01000100 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0x0;// TRX_PLL_CTRL_LANE.BT.B3 = ###00000 , tx_pll_rate_sel_lane[4:0]
  }
  else if (gen_tx==46){
    tmp3 = 0x11;// ANA_TXREG_REG0.BT.B0 = 00010001 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp4 = 0x1;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = #######1 , txdata_latency_reduce_en_lane
    tmp5 = 0x6;// TRX_PLL_CTRL_LANE.BT.B3 = ###00110 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x4;// ANA_TXSPEED_REG0.BT.B0 = 000##100 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp8 = 0xE0;// ANA_TX_FIR_REG0.BT.B0 = 1110#### , tx_fir_bypass_l1_delay_lane, tx_fir_bypass_l2_delay_lane, tx_fir_bypass_l3_delay_lane, tx_fir_2_dig_clk_div_lane
  }
  else if (gen_tx==45){
    tmp0 = 0x0;// TX_SYSTEM_LANE1.BT.B3 = #0###### , tx_pam2_en_lane
    tmp1 = 0x60;// PHYTEST_TX0.BT.B2 = 011##### , tx_train_pat_sel_lane[2:0]
    tmp2 = 0x12;// TX_TRAINING_IF_REG3.BT.B0 = ###1##10 , tx_train_pat_two_zero_lane, ethernet_mode_tx_lane[1:0]
    tmp5 = 0x16;// TRX_PLL_CTRL_LANE.BT.B3 = ###10110 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x60;// ANA_TXSPEED_REG0.BT.B0 = 011##000 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp7 = 0x2;// TX_SYSTEM_LANE0.BT.B1 = ######10 , tx_data_width_lane[1:0]
  }
  else if (gen_tx==44){
    tmp0 = 0x0;// TX_SYSTEM_LANE1.BT.B3 = #0###### , tx_pam2_en_lane
    tmp1 = 0x60;// PHYTEST_TX0.BT.B2 = 011##### , tx_train_pat_sel_lane[2:0]
    tmp2 = 0x12;// TX_TRAINING_IF_REG3.BT.B0 = ###1##10 , tx_train_pat_two_zero_lane, ethernet_mode_tx_lane[1:0]
    tmp6 = 0x60;// ANA_TXSPEED_REG0.BT.B0 = 011##000 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp7 = 0x2;// TX_SYSTEM_LANE0.BT.B1 = ######10 , tx_data_width_lane[1:0]
  }
  else if (gen_tx==43){
    tmp1 = 0x40;// PHYTEST_TX0.BT.B2 = 010##### , tx_train_pat_sel_lane[2:0]
    tmp5 = 0x16;// TRX_PLL_CTRL_LANE.BT.B3 = ###10110 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x60;// ANA_TXSPEED_REG0.BT.B0 = 011##000 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
  }
  else if (gen_tx==42){
    tmp1 = 0x40;// PHYTEST_TX0.BT.B2 = 010##### , tx_train_pat_sel_lane[2:0]
    tmp6 = 0x60;// ANA_TXSPEED_REG0.BT.B0 = 011##000 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
  }
  else if (gen_tx==41){
    tmp0 = 0x0;// TX_SYSTEM_LANE1.BT.B3 = #0###### , tx_pam2_en_lane
    tmp1 = 0x60;// PHYTEST_TX0.BT.B2 = 011##### , tx_train_pat_sel_lane[2:0]
    tmp2 = 0x13;// TX_TRAINING_IF_REG3.BT.B0 = ###1##11 , tx_train_pat_two_zero_lane, ethernet_mode_tx_lane[1:0]
    tmp3 = 0xCC;// ANA_TXREG_REG0.BT.B0 = 11001100 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0x14;// TRX_PLL_CTRL_LANE.BT.B3 = ###10100 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x20;// ANA_TXSPEED_REG0.BT.B0 = 001##000 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp7 = 0x3;// TX_SYSTEM_LANE0.BT.B1 = ######11 , tx_data_width_lane[1:0]
    tmp8 = 0x10;// ANA_TX_FIR_REG0.BT.B0 = 0001#### , tx_fir_bypass_l1_delay_lane, tx_fir_bypass_l2_delay_lane, tx_fir_bypass_l3_delay_lane, tx_fir_2_dig_clk_div_lane
  }
  else if (gen_tx==40){
    tmp0 = 0x0;// TX_SYSTEM_LANE1.BT.B3 = #0###### , tx_pam2_en_lane
    tmp1 = 0x60;// PHYTEST_TX0.BT.B2 = 011##### , tx_train_pat_sel_lane[2:0]
    tmp2 = 0x13;// TX_TRAINING_IF_REG3.BT.B0 = ###1##11 , tx_train_pat_two_zero_lane, ethernet_mode_tx_lane[1:0]
    tmp3 = 0xCC;// ANA_TXREG_REG0.BT.B0 = 11001100 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0x12;// TRX_PLL_CTRL_LANE.BT.B3 = ###10010 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x40;// ANA_TXSPEED_REG0.BT.B0 = 010##000 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp7 = 0x3;// TX_SYSTEM_LANE0.BT.B1 = ######11 , tx_data_width_lane[1:0]
    tmp8 = 0x10;// ANA_TX_FIR_REG0.BT.B0 = 0001#### , tx_fir_bypass_l1_delay_lane, tx_fir_bypass_l2_delay_lane, tx_fir_bypass_l3_delay_lane, tx_fir_2_dig_clk_div_lane
  }
  else if (gen_tx==39){
    tmp0 = 0x0;// TX_SYSTEM_LANE1.BT.B3 = #0###### , tx_pam2_en_lane
    tmp1 = 0x60;// PHYTEST_TX0.BT.B2 = 011##### , tx_train_pat_sel_lane[2:0]
    tmp2 = 0x13;// TX_TRAINING_IF_REG3.BT.B0 = ###1##11 , tx_train_pat_two_zero_lane, ethernet_mode_tx_lane[1:0]
    tmp3 = 0xCC;// ANA_TXREG_REG0.BT.B0 = 11001100 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0x10;// TRX_PLL_CTRL_LANE.BT.B3 = ###10000 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x40;// ANA_TXSPEED_REG0.BT.B0 = 010##000 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp7 = 0x3;// TX_SYSTEM_LANE0.BT.B1 = ######11 , tx_data_width_lane[1:0]
    tmp8 = 0x10;// ANA_TX_FIR_REG0.BT.B0 = 0001#### , tx_fir_bypass_l1_delay_lane, tx_fir_bypass_l2_delay_lane, tx_fir_bypass_l3_delay_lane, tx_fir_2_dig_clk_div_lane
  }
  else if (gen_tx==38){
    tmp0 = 0x0;// TX_SYSTEM_LANE1.BT.B3 = #0###### , tx_pam2_en_lane
    tmp1 = 0x60;// PHYTEST_TX0.BT.B2 = 011##### , tx_train_pat_sel_lane[2:0]
    tmp2 = 0x12;// TX_TRAINING_IF_REG3.BT.B0 = ###1##10 , tx_train_pat_two_zero_lane, ethernet_mode_tx_lane[1:0]
    tmp5 = 0x14;// TRX_PLL_CTRL_LANE.BT.B3 = ###10100 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xE0;// ANA_TXSPEED_REG0.BT.B0 = 111##000 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp7 = 0x2;// TX_SYSTEM_LANE0.BT.B1 = ######10 , tx_data_width_lane[1:0]
  }
  else if (gen_tx==37){
    tmp0 = 0x0;// TX_SYSTEM_LANE1.BT.B3 = #0###### , tx_pam2_en_lane
    tmp1 = 0x60;// PHYTEST_TX0.BT.B2 = 011##### , tx_train_pat_sel_lane[2:0]
    tmp2 = 0x12;// TX_TRAINING_IF_REG3.BT.B0 = ###1##10 , tx_train_pat_two_zero_lane, ethernet_mode_tx_lane[1:0]
    tmp5 = 0x13;// TRX_PLL_CTRL_LANE.BT.B3 = ###10011 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xE0;// ANA_TXSPEED_REG0.BT.B0 = 111##000 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp7 = 0x2;// TX_SYSTEM_LANE0.BT.B1 = ######10 , tx_data_width_lane[1:0]
  }
  else if (gen_tx==36){
    tmp1 = 0x40;// PHYTEST_TX0.BT.B2 = 010##### , tx_train_pat_sel_lane[2:0]
    tmp3 = 0xCC;// ANA_TXREG_REG0.BT.B0 = 11001100 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0x12;// TRX_PLL_CTRL_LANE.BT.B3 = ###10010 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x40;// ANA_TXSPEED_REG0.BT.B0 = 010##000 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp7 = 0x2;// TX_SYSTEM_LANE0.BT.B1 = ######10 , tx_data_width_lane[1:0]
    tmp8 = 0x10;// ANA_TX_FIR_REG0.BT.B0 = 0001#### , tx_fir_bypass_l1_delay_lane, tx_fir_bypass_l2_delay_lane, tx_fir_bypass_l3_delay_lane, tx_fir_2_dig_clk_div_lane
  }
  else if (gen_tx==35){
    tmp0 = 0x0;// TX_SYSTEM_LANE1.BT.B3 = #0###### , tx_pam2_en_lane
    tmp1 = 0x60;// PHYTEST_TX0.BT.B2 = 011##### , tx_train_pat_sel_lane[2:0]
    tmp2 = 0x12;// TX_TRAINING_IF_REG3.BT.B0 = ###1##10 , tx_train_pat_two_zero_lane, ethernet_mode_tx_lane[1:0]
    tmp5 = 0x10;// TRX_PLL_CTRL_LANE.BT.B3 = ###10000 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xE0;// ANA_TXSPEED_REG0.BT.B0 = 111##000 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp7 = 0x2;// TX_SYSTEM_LANE0.BT.B1 = ######10 , tx_data_width_lane[1:0]
  }
  else if (gen_tx==34){
    tmp0 = 0x0;// TX_SYSTEM_LANE1.BT.B3 = #0###### , tx_pam2_en_lane
    tmp1 = 0x60;// PHYTEST_TX0.BT.B2 = 011##### , tx_train_pat_sel_lane[2:0]
    tmp2 = 0x12;// TX_TRAINING_IF_REG3.BT.B0 = ###1##10 , tx_train_pat_two_zero_lane, ethernet_mode_tx_lane[1:0]
    tmp5 = 0xE;// TRX_PLL_CTRL_LANE.BT.B3 = ###01110 , tx_pll_rate_sel_lane[4:0]
    tmp7 = 0x2;// TX_SYSTEM_LANE0.BT.B1 = ######10 , tx_data_width_lane[1:0]
  }
  else if (gen_tx==33){
    tmp1 = 0x40;// PHYTEST_TX0.BT.B2 = 010##### , tx_train_pat_sel_lane[2:0]
    tmp3 = 0xBB;// ANA_TXREG_REG0.BT.B0 = 10111011 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0xC;// TRX_PLL_CTRL_LANE.BT.B3 = ###01100 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x40;// ANA_TXSPEED_REG0.BT.B0 = 010##000 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp7 = 0x2;// TX_SYSTEM_LANE0.BT.B1 = ######10 , tx_data_width_lane[1:0]
    tmp8 = 0x10;// ANA_TX_FIR_REG0.BT.B0 = 0001#### , tx_fir_bypass_l1_delay_lane, tx_fir_bypass_l2_delay_lane, tx_fir_bypass_l3_delay_lane, tx_fir_2_dig_clk_div_lane
  }
  else if (gen_tx==32){
    tmp0 = 0x0;// TX_SYSTEM_LANE1.BT.B3 = #0###### , tx_pam2_en_lane
    tmp1 = 0x60;// PHYTEST_TX0.BT.B2 = 011##### , tx_train_pat_sel_lane[2:0]
    tmp2 = 0x12;// TX_TRAINING_IF_REG3.BT.B0 = ###1##10 , tx_train_pat_two_zero_lane, ethernet_mode_tx_lane[1:0]
    tmp3 = 0x55;// ANA_TXREG_REG0.BT.B0 = 01010101 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0x8;// TRX_PLL_CTRL_LANE.BT.B3 = ###01000 , tx_pll_rate_sel_lane[4:0]
    tmp7 = 0x2;// TX_SYSTEM_LANE0.BT.B1 = ######10 , tx_data_width_lane[1:0]
  }
  else if (gen_tx==31){
    tmp0 = 0x0;// TX_SYSTEM_LANE1.BT.B3 = #0###### , tx_pam2_en_lane
    tmp1 = 0x60;// PHYTEST_TX0.BT.B2 = 011##### , tx_train_pat_sel_lane[2:0]
    tmp2 = 0x12;// TX_TRAINING_IF_REG3.BT.B0 = ###1##10 , tx_train_pat_two_zero_lane, ethernet_mode_tx_lane[1:0]
    tmp3 = 0x44;// ANA_TXREG_REG0.BT.B0 = 01000100 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0x1;// TRX_PLL_CTRL_LANE.BT.B3 = ###00001 , tx_pll_rate_sel_lane[4:0]
    tmp7 = 0x2;// TX_SYSTEM_LANE0.BT.B1 = ######10 , tx_data_width_lane[1:0]
  }
  else if (gen_tx==30){
    tmp1 = 0x40;// PHYTEST_TX0.BT.B2 = 010##### , tx_train_pat_sel_lane[2:0]
    tmp5 = 0x14;// TRX_PLL_CTRL_LANE.BT.B3 = ###10100 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xE0;// ANA_TXSPEED_REG0.BT.B0 = 111##000 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
  }
  else if (gen_tx==29){
    tmp1 = 0x40;// PHYTEST_TX0.BT.B2 = 010##### , tx_train_pat_sel_lane[2:0]
    tmp5 = 0x13;// TRX_PLL_CTRL_LANE.BT.B3 = ###10011 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xE0;// ANA_TXSPEED_REG0.BT.B0 = 111##000 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
  }
  else if (gen_tx==28){
    tmp1 = 0x40;// PHYTEST_TX0.BT.B2 = 010##### , tx_train_pat_sel_lane[2:0]
    tmp5 = 0x11;// TRX_PLL_CTRL_LANE.BT.B3 = ###10001 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xE0;// ANA_TXSPEED_REG0.BT.B0 = 111##000 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
  }
  else if (gen_tx==27){
    tmp1 = 0x40;// PHYTEST_TX0.BT.B2 = 010##### , tx_train_pat_sel_lane[2:0]
    tmp5 = 0x10;// TRX_PLL_CTRL_LANE.BT.B3 = ###10000 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0xE0;// ANA_TXSPEED_REG0.BT.B0 = 111##000 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
  }
  else if (gen_tx==26){
    tmp1 = 0x40;// PHYTEST_TX0.BT.B2 = 010##### , tx_train_pat_sel_lane[2:0]
    tmp5 = 0xE;// TRX_PLL_CTRL_LANE.BT.B3 = ###01110 , tx_pll_rate_sel_lane[4:0]
  }
  else if (gen_tx==25){
    tmp1 = 0x40;// PHYTEST_TX0.BT.B2 = 010##### , tx_train_pat_sel_lane[2:0]
    tmp5 = 0x9;// TRX_PLL_CTRL_LANE.BT.B3 = ###01001 , tx_pll_rate_sel_lane[4:0]
  }
  else if (gen_tx==24){
    tmp1 = 0x40;// PHYTEST_TX0.BT.B2 = 010##### , tx_train_pat_sel_lane[2:0]
    tmp3 = 0x55;// ANA_TXREG_REG0.BT.B0 = 01010101 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0x6;// TRX_PLL_CTRL_LANE.BT.B3 = ###00110 , tx_pll_rate_sel_lane[4:0]
  }
  else if (gen_tx==23){
    tmp3 = 0x33;// ANA_TXREG_REG0.BT.B0 = 00110011 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
  }
  else if (gen_tx==22){
    tmp3 = 0x33;// ANA_TXREG_REG0.BT.B0 = 00110011 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0xD;// TRX_PLL_CTRL_LANE.BT.B3 = ###01101 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x2;// ANA_TXSPEED_REG0.BT.B0 = 000##010 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
  }
  else if (gen_tx==21){
    tmp3 = 0x33;// ANA_TXREG_REG0.BT.B0 = 00110011 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0xC;// TRX_PLL_CTRL_LANE.BT.B3 = ###01100 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x2;// ANA_TXSPEED_REG0.BT.B0 = 000##010 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp8 = 0x60;// ANA_TX_FIR_REG0.BT.B0 = 0110#### , tx_fir_bypass_l1_delay_lane, tx_fir_bypass_l2_delay_lane, tx_fir_bypass_l3_delay_lane, tx_fir_2_dig_clk_div_lane
  }
  else if (gen_tx==20){
    tmp3 = 0x33;// ANA_TXREG_REG0.BT.B0 = 00110011 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0xA;// TRX_PLL_CTRL_LANE.BT.B3 = ###01010 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x2;// ANA_TXSPEED_REG0.BT.B0 = 000##010 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp8 = 0x60;// ANA_TX_FIR_REG0.BT.B0 = 0110#### , tx_fir_bypass_l1_delay_lane, tx_fir_bypass_l2_delay_lane, tx_fir_bypass_l3_delay_lane, tx_fir_2_dig_clk_div_lane
  }
  else if (gen_tx==19){
    tmp3 = 0x33;// ANA_TXREG_REG0.BT.B0 = 00110011 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0x9;// TRX_PLL_CTRL_LANE.BT.B3 = ###01001 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x2;// ANA_TXSPEED_REG0.BT.B0 = 000##010 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp8 = 0x60;// ANA_TX_FIR_REG0.BT.B0 = 0110#### , tx_fir_bypass_l1_delay_lane, tx_fir_bypass_l2_delay_lane, tx_fir_bypass_l3_delay_lane, tx_fir_2_dig_clk_div_lane
  }
  else if (gen_tx==18){
    tmp3 = 0x33;// ANA_TXREG_REG0.BT.B0 = 00110011 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0x7;// TRX_PLL_CTRL_LANE.BT.B3 = ###00111 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x2;// ANA_TXSPEED_REG0.BT.B0 = 000##010 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp8 = 0x60;// ANA_TX_FIR_REG0.BT.B0 = 0110#### , tx_fir_bypass_l1_delay_lane, tx_fir_bypass_l2_delay_lane, tx_fir_bypass_l3_delay_lane, tx_fir_2_dig_clk_div_lane
  }
  else if (gen_tx==17){
    tmp3 = 0x33;// ANA_TXREG_REG0.BT.B0 = 00110011 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0x6;// TRX_PLL_CTRL_LANE.BT.B3 = ###00110 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x2;// ANA_TXSPEED_REG0.BT.B0 = 000##010 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp8 = 0x60;// ANA_TX_FIR_REG0.BT.B0 = 0110#### , tx_fir_bypass_l1_delay_lane, tx_fir_bypass_l2_delay_lane, tx_fir_bypass_l3_delay_lane, tx_fir_2_dig_clk_div_lane
  }
  else if (gen_tx==16){
    tmp3 = 0x33;// ANA_TXREG_REG0.BT.B0 = 00110011 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0x5;// TRX_PLL_CTRL_LANE.BT.B3 = ###00101 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x2;// ANA_TXSPEED_REG0.BT.B0 = 000##010 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp8 = 0x60;// ANA_TX_FIR_REG0.BT.B0 = 0110#### , tx_fir_bypass_l1_delay_lane, tx_fir_bypass_l2_delay_lane, tx_fir_bypass_l3_delay_lane, tx_fir_2_dig_clk_div_lane
  }
  else if (gen_tx==15){
    tmp3 = 0x33;// ANA_TXREG_REG0.BT.B0 = 00110011 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0x3;// TRX_PLL_CTRL_LANE.BT.B3 = ###00011 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x2;// ANA_TXSPEED_REG0.BT.B0 = 000##010 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp8 = 0x60;// ANA_TX_FIR_REG0.BT.B0 = 0110#### , tx_fir_bypass_l1_delay_lane, tx_fir_bypass_l2_delay_lane, tx_fir_bypass_l3_delay_lane, tx_fir_2_dig_clk_div_lane
  }
  else if (gen_tx==14){
    tmp3 = 0x22;// ANA_TXREG_REG0.BT.B0 = 00100010 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0x2;// TRX_PLL_CTRL_LANE.BT.B3 = ###00010 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x2;// ANA_TXSPEED_REG0.BT.B0 = 000##010 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp8 = 0x60;// ANA_TX_FIR_REG0.BT.B0 = 0110#### , tx_fir_bypass_l1_delay_lane, tx_fir_bypass_l2_delay_lane, tx_fir_bypass_l3_delay_lane, tx_fir_2_dig_clk_div_lane
  }
  else if (gen_tx==13){
    tmp3 = 0x22;// ANA_TXREG_REG0.BT.B0 = 00100010 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp5 = 0x0;// TRX_PLL_CTRL_LANE.BT.B3 = ###00000 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x2;// ANA_TXSPEED_REG0.BT.B0 = 000##010 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp8 = 0x60;// ANA_TX_FIR_REG0.BT.B0 = 0110#### , tx_fir_bypass_l1_delay_lane, tx_fir_bypass_l2_delay_lane, tx_fir_bypass_l3_delay_lane, tx_fir_2_dig_clk_div_lane
  }
  else if (gen_tx==12){
    tmp3 = 0x22;// ANA_TXREG_REG0.BT.B0 = 00100010 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp4 = 0x1;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = #######1 , txdata_latency_reduce_en_lane
    tmp5 = 0xC;// TRX_PLL_CTRL_LANE.BT.B3 = ###01100 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x3;// ANA_TXSPEED_REG0.BT.B0 = 000##011 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp8 = 0x60;// ANA_TX_FIR_REG0.BT.B0 = 0110#### , tx_fir_bypass_l1_delay_lane, tx_fir_bypass_l2_delay_lane, tx_fir_bypass_l3_delay_lane, tx_fir_2_dig_clk_div_lane
  }
  else if (gen_tx==11){
    tmp3 = 0x22;// ANA_TXREG_REG0.BT.B0 = 00100010 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp4 = 0x1;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = #######1 , txdata_latency_reduce_en_lane
    tmp5 = 0xB;// TRX_PLL_CTRL_LANE.BT.B3 = ###01011 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x3;// ANA_TXSPEED_REG0.BT.B0 = 000##011 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp8 = 0x60;// ANA_TX_FIR_REG0.BT.B0 = 0110#### , tx_fir_bypass_l1_delay_lane, tx_fir_bypass_l2_delay_lane, tx_fir_bypass_l3_delay_lane, tx_fir_2_dig_clk_div_lane
  }
  else if (gen_tx==10){
    tmp3 = 0x22;// ANA_TXREG_REG0.BT.B0 = 00100010 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp4 = 0x1;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = #######1 , txdata_latency_reduce_en_lane
    tmp5 = 0x6;// TRX_PLL_CTRL_LANE.BT.B3 = ###00110 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x3;// ANA_TXSPEED_REG0.BT.B0 = 000##011 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp8 = 0x60;// ANA_TX_FIR_REG0.BT.B0 = 0110#### , tx_fir_bypass_l1_delay_lane, tx_fir_bypass_l2_delay_lane, tx_fir_bypass_l3_delay_lane, tx_fir_2_dig_clk_div_lane
  }
  else if (gen_tx==9){
    tmp3 = 0x22;// ANA_TXREG_REG0.BT.B0 = 00100010 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp4 = 0x1;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = #######1 , txdata_latency_reduce_en_lane
    tmp5 = 0x4;// TRX_PLL_CTRL_LANE.BT.B3 = ###00100 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x3;// ANA_TXSPEED_REG0.BT.B0 = 000##011 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp8 = 0x60;// ANA_TX_FIR_REG0.BT.B0 = 0110#### , tx_fir_bypass_l1_delay_lane, tx_fir_bypass_l2_delay_lane, tx_fir_bypass_l3_delay_lane, tx_fir_2_dig_clk_div_lane
  }
  else if (gen_tx==8){
    tmp3 = 0x22;// ANA_TXREG_REG0.BT.B0 = 00100010 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp4 = 0x1;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = #######1 , txdata_latency_reduce_en_lane
    tmp5 = 0x3;// TRX_PLL_CTRL_LANE.BT.B3 = ###00011 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x3;// ANA_TXSPEED_REG0.BT.B0 = 000##011 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp8 = 0x60;// ANA_TX_FIR_REG0.BT.B0 = 0110#### , tx_fir_bypass_l1_delay_lane, tx_fir_bypass_l2_delay_lane, tx_fir_bypass_l3_delay_lane, tx_fir_2_dig_clk_div_lane
  }
  else if (gen_tx==7){
    tmp3 = 0x11;// ANA_TXREG_REG0.BT.B0 = 00010001 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp4 = 0x1;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = #######1 , txdata_latency_reduce_en_lane
    tmp5 = 0x2;// TRX_PLL_CTRL_LANE.BT.B3 = ###00010 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x3;// ANA_TXSPEED_REG0.BT.B0 = 000##011 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp8 = 0xE0;// ANA_TX_FIR_REG0.BT.B0 = 1110#### , tx_fir_bypass_l1_delay_lane, tx_fir_bypass_l2_delay_lane, tx_fir_bypass_l3_delay_lane, tx_fir_2_dig_clk_div_lane
  }
  else if (gen_tx==6){
    tmp3 = 0x11;// ANA_TXREG_REG0.BT.B0 = 00010001 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp4 = 0x1;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = #######1 , txdata_latency_reduce_en_lane
    tmp5 = 0xC;// TRX_PLL_CTRL_LANE.BT.B3 = ###01100 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x4;// ANA_TXSPEED_REG0.BT.B0 = 000##100 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp8 = 0xE0;// ANA_TX_FIR_REG0.BT.B0 = 1110#### , tx_fir_bypass_l1_delay_lane, tx_fir_bypass_l2_delay_lane, tx_fir_bypass_l3_delay_lane, tx_fir_2_dig_clk_div_lane
  }
  else if (gen_tx==5){
    tmp3 = 0x11;// ANA_TXREG_REG0.BT.B0 = 00010001 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp4 = 0x1;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = #######1 , txdata_latency_reduce_en_lane
    tmp5 = 0x4;// TRX_PLL_CTRL_LANE.BT.B3 = ###00100 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x4;// ANA_TXSPEED_REG0.BT.B0 = 000##100 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp8 = 0xE0;// ANA_TX_FIR_REG0.BT.B0 = 1110#### , tx_fir_bypass_l1_delay_lane, tx_fir_bypass_l2_delay_lane, tx_fir_bypass_l3_delay_lane, tx_fir_2_dig_clk_div_lane
  }
  else if (gen_tx==4){
    tmp3 = 0x11;// ANA_TXREG_REG0.BT.B0 = 00010001 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp4 = 0x1;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = #######1 , txdata_latency_reduce_en_lane
    tmp5 = 0x3;// TRX_PLL_CTRL_LANE.BT.B3 = ###00011 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x4;// ANA_TXSPEED_REG0.BT.B0 = 000##100 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp8 = 0xE0;// ANA_TX_FIR_REG0.BT.B0 = 1110#### , tx_fir_bypass_l1_delay_lane, tx_fir_bypass_l2_delay_lane, tx_fir_bypass_l3_delay_lane, tx_fir_2_dig_clk_div_lane
  }
  else if (gen_tx==3){
    tmp3 = 0x11;// ANA_TXREG_REG0.BT.B0 = 00010001 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp4 = 0x1;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = #######1 , txdata_latency_reduce_en_lane
    tmp5 = 0x2;// TRX_PLL_CTRL_LANE.BT.B3 = ###00010 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x4;// ANA_TXSPEED_REG0.BT.B0 = 000##100 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp8 = 0xE0;// ANA_TX_FIR_REG0.BT.B0 = 1110#### , tx_fir_bypass_l1_delay_lane, tx_fir_bypass_l2_delay_lane, tx_fir_bypass_l3_delay_lane, tx_fir_2_dig_clk_div_lane
  }
  else if (gen_tx==2){
    tmp3 = 0x11;// ANA_TXREG_REG0.BT.B0 = 00010001 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp4 = 0x1;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = #######1 , txdata_latency_reduce_en_lane
    tmp5 = 0x4;// TRX_PLL_CTRL_LANE.BT.B3 = ###00100 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x5;// ANA_TXSPEED_REG0.BT.B0 = 000##101 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp8 = 0xE0;// ANA_TX_FIR_REG0.BT.B0 = 1110#### , tx_fir_bypass_l1_delay_lane, tx_fir_bypass_l2_delay_lane, tx_fir_bypass_l3_delay_lane, tx_fir_2_dig_clk_div_lane
  }
  else if (gen_tx==1){
    tmp3 = 0x11;// ANA_TXREG_REG0.BT.B0 = 00010001 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp4 = 0x1;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = #######1 , txdata_latency_reduce_en_lane
    tmp5 = 0x3;// TRX_PLL_CTRL_LANE.BT.B3 = ###00011 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x5;// ANA_TXSPEED_REG0.BT.B0 = 000##101 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp8 = 0xE0;// ANA_TX_FIR_REG0.BT.B0 = 1110#### , tx_fir_bypass_l1_delay_lane, tx_fir_bypass_l2_delay_lane, tx_fir_bypass_l3_delay_lane, tx_fir_2_dig_clk_div_lane
  }
  else if (gen_tx==0){
    tmp3 = 0x11;// ANA_TXREG_REG0.BT.B0 = 00010001 , txreg_speedtrk_data_lane[3:0], txreg_speedtrk_clk_lane[3:0]
    tmp4 = 0x1;// CLKGEN_TX_LANE_REG1_LANE.BT.B0 = #######1 , txdata_latency_reduce_en_lane
    tmp5 = 0x2;// TRX_PLL_CTRL_LANE.BT.B3 = ###00010 , tx_pll_rate_sel_lane[4:0]
    tmp6 = 0x5;// ANA_TXSPEED_REG0.BT.B0 = 000##101 , tx_hs_div2_sel_lane, tx_a90_vcap_lane[1:0], txspeed_div_lane[2:0]
    tmp8 = 0xE0;// ANA_TX_FIR_REG0.BT.B0 = 1110#### , tx_fir_bypass_l1_delay_lane, tx_fir_bypass_l2_delay_lane, tx_fir_bypass_l3_delay_lane, tx_fir_2_dig_clk_div_lane
  }
  TX_SYSTEM_LANE1.BT.B3 = tmp0;
  PHYTEST_TX0.BT.B2 = tmp1;
  TX_TRAINING_IF_REG3.BT.B0 = tmp2;
  ANA_TXREG_REG0.BT.B0 = tmp3;
  CLKGEN_TX_LANE_REG1_LANE.BT.B0 = tmp4;
  TRX_PLL_CTRL_LANE.BT.B3 = tmp5;
  ANA_TXSPEED_REG0.BT.B0 = tmp6;
  TX_SYSTEM_LANE0.BT.B1 = tmp7;
  ANA_TX_FIR_REG0.BT.B0 = tmp8;
}
#endif //_SERDES_BUILD
