/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file global.h
* \purpose global variables
* \History
*	10/13/2015 Heejeong Ryu		Initial 
*/ 
#include "common.h"
#include "ver.h"

#ifndef GLOBAL_H
#define GLOBAL_H

//------------------------------------
// bit 0x20 ~ 0x2F
//extern BIT mcu_en0, mcu_en1, mcu_en2, mcu_en3;
extern BIT int_pu_rx, int_pu_tx;
extern BIT sync_check;
extern volatile BIT timeout, timeout2;
extern volatile BIT do_wake;
extern volatile BIT do_train;
extern volatile BIT do_rxtrain;
extern volatile BIT do_rxinit;
extern volatile BIT do_rx_apta, do_tx_apta;
extern BIT adapt_slicer_en, adapt_data_en;
extern BIT pll_rate, use_ring_pll, lc_pll_used, ring_pll_enabled, ring_use_250m, force_exit_cal, no_pllspdchg, tx_status_pcie_mode ; 
extern BIT cont_cal_on;

extern //BIT c1_valid; 
extern //BIT c0_valid; 
extern //BIT cn1_valid; 
extern BIT tx_amp_is_max;
extern BIT tx_amp_is_min;
extern BIT tx_emph0_is_max;
extern BIT tx_emph0_is_min;
extern BIT tx_emph1_is_max;
extern BIT tx_emph1_is_min;
//extern BIT tx_power_is_max;
//extern BIT tx_vma_is_min;
extern BIT ctrl_cdr_phase_on, ctrl_rx_train_on, ctrl_tx_train_on;
extern BIT ctrl_rx_train_done, ctrl_tx_train_done, ctrl_trx_train_done;
extern BIT gain_train_with_c, ctrl_trx_ffe_updated;
extern BIT tx_pipe4_en;
//------------------------------------

extern __xdata uint8_t gen_tx;
extern __xdata uint8_t gen_rx;
//extern __xdata uint8_t gen_pll;
extern __xdata uint8_t new_gen_tx;
extern __xdata uint8_t new_gen_rx;
extern __xdata uint8_t	old_status;

extern __xdata int16_t Tshrtr;
extern __xdata int16_t Thold_sel;
extern __xdata int16_t Tpamp0;
extern __xdata int16_t Tpamp1;
extern __xdata int16_t Tpfreq0;
extern __xdata int16_t Tpfreq1;
extern __xdata int16_t Tpfreq2;
extern __xdata int16_t Tpfreq3;
extern __xdata int16_t Tpfreq4;

extern __xdata uint8_t pllcal_first_time;
extern __xdata uint8_t ringpll_step_size_cnt;
extern __xdata uint8_t tempc_step_state; //pll_temp_cal
extern __xdata uint8_t tempc_dir; //pll_temp_cal
extern __xdata uint8_t *SIGN_POS, *NEG, *SAMPLER_CAL_SAVE, *SAMPLER_TRAIN_SAVE; //sampler cal

extern __xdata uint8_t dfe_dis;
extern __xdata uint16_t cds_tb;
//extern __xdata uint8_t cdr_dfe_scheme_stage;
#define cdr_dfe_scheme_stage	reg_MCU_DEBUG8_LANE_7_0
#ifndef SUPPORT_NEW_CDS
extern __xdata Status_dfe_sm_t dfe_sm;
extern __xdata Status_dfe_2c_t dfe_2c;
#endif
//extern __xdata uint32_t ec_valid_vote_num, ec_error_vote_num;
extern __xdata uint8_t ph_control_mode;
extern __xdata uint8_t /*center_phase, left_phase, right_phase,*/ adapted_phase;
//extern __xdata uint8_t left_eye_width, right_eye_width, effect_eye_width;
//extern __xdata uint8_t left_eye_height, right_eye_height;
//extern __xdata uint8_t left_search_run_index, right_search_run_index;
//extern __xdata uint8_t phase_fine_adapt_run_index, phase_accu_adapt_run_index;
//extern __xdata bool    is_accu_phase_adapt, capturing_eye_diagram_en;
extern __xdata Status_Train_t train;
extern __xdata Status_Train_t opt;
extern __xdata Status_TX_t tx;
extern __xdata Status_RX_t rx;
extern __xdata Status_CDR_t cdr;
extern __xdata uint8_t ctrl_num_blind_loop, ctrl_num_big_loop;
extern __xdata int16_t	tsen_dat_cal, tsen_dat_train, tsen_dat_normal;
extern __xdata uint8_t stat;
extern __xdata uint8_t ofst_sav[], ofst_mem[];

//extern __xdata bool train_eye_check_pass;

extern __xdata uint8_t dfe_res_f0a_low_thres_01;
extern __xdata uint8_t dfe_res_f0a_low_thres_2; 
extern __xdata uint8_t dfe_res_f0a_low_thres_3; 
extern __xdata uint8_t dfe_res_f0a_high_thres;

extern __xdata uint8_t tx_num_tx_preset;
//extern __xdata uint8_t tx_preset_table[];
//extern __xdata uint8_t train_g0_index;
//extern __xdata uint8_t train_g1_index;
//extern __xdata uint8_t train_gn1_index;
extern __xdata uint8_t train_c;
extern __xdata uint8_t train_r;
extern __xdata uint8_t opt_c;
extern __xdata uint8_t opt_r;
extern __xdata bool r2_adj_on;
extern __xdata int8_t sumf_boost_target_c, cdr_midpoint_phase_os;
//extern __xdata uint8_t opt_g0_index; 
//extern __xdata uint8_t opt_g1_index; 
//extern __xdata uint8_t opt_gn1_index;

//-- cds
extern __xdata Status_CDS_t cds;
extern __xdata Status_SUM_CDS_t sum;

extern __xdata uint8_t ctrl_max_dfe_adapt_shift;
extern __xdata uint8_t half_shift;

extern __xdata	uint8_t  save_TESTBUS_SEL_HI0; 
extern __xdata	uint8_t  save_TESTBUS_SEL_LO0;

extern __xdata uint8_t uart_rx_in;
extern __xdata uint8_t uart_rx_out;
extern __xdata uint8_t uart_rx_buf[];

extern __xdata uint8_t cal_lccap_msb_index[];
extern __xdata uint8_t cal_align90_gm_bin[];
extern __xdata uint8_t	gm_bin, dac, dm, gm; //current align90
//extern __xdata uint8_t align90_soft_lookup_on;
extern __xdata uint8_t dcc_cont, align90_tracking_cnt, align90_step_cnt, dfe_norm_cnt;
extern __xdata int8_t f1p_e_old, f1p_o_old;

extern __xdata uint8_t PH_CONV_CNT, EOM_CONV_CNT;
extern __xdata uint8_t ph_conv_dir, eom_conv_dir;
//extern __xdata uint8_t EOM_ADAPT_STEP_SIZE;
//extern __xdata uint8_t PH_ADAPT_STEP_SIZE;
//extern __xdata uint16_t EOM_CONV_NUM;
//extern __xdata uint8_t PH_CONV_NUM;
extern __xdata int8_t norm_f1, norm_ofst, train_ofst;
//extern __xdata int16_t norm_pa_ofst, train_pa_ofst;
extern __xdata int8_t norm_eom_ph_os_l, norm_eom_ph_os_c, norm_eom_ph_os_r;
extern __xdata int16_t phase_vote_acc;
extern __xdata int16_t eom_vote_acc;
extern __xdata uint8_t f0d_c_pre;
extern __xdata uint8_t f0d_l_pre;
extern __xdata uint8_t f0d_r_pre;
extern __xdata int8_t phase_l_offset, phase_offset; //always negative
extern __xdata int8_t phase_r_offset, adapt_eom_phase_save;
//extern __xdata Status_NORM_t norm;

extern __xdata int16_t cur_esm_phase;

extern __xdata bool tx_init_bit;
extern __xdata bool train_comp;
//extern __xdata bool link_train_mode;
extern __xdata bool uart_rx_busy;
extern __xdata bool tx_sweep_preset_en; 
//extern __xdata bool tx_status_pcie_mode;
//extern __xdata bool tx_pipe4_en;
//extern __xdata bool tx_adapt_g0_en;
//extern __xdata bool tx_adapt_gn1_en;
//extern __xdata bool tx_adapt_g1_en;   
extern __xdata bool pcie_usb_mode;
extern __xdata bool do_phase_adapt;
extern __xdata bool Phase_Adapt_Inited, detect_sat;
extern __xdata bool ctrl_rx_only_mode; // indicate whether in RX training only mode
//extern __xdata bool ctrl_trx_train_done; // indicate whether training is done
extern __xdata bool ctrl_trx_train_pass; // indicate whether training is done
//extern __xdata bool ctrl_rx_train_done; // indicate whether RX training is done in this round
//extern __xdata bool ctrl_tx_train_done; // indicate whether TX training is done in this round
//extern __xdata bool gain_train_with_c;
//extern __xdata bool gain_train_with_sampler;
//extern __xdata bool ctrl_phase_train_done;
//extern __xdata bool ctrl_cdr_phase_on;
//extern __xdata bool ctrl_rx_train_on; // turn on or off the RX training
//extern __xdata bool ctrl_tx_train_on; // turn on or off the TX training
//extern __xdata bool ctrl_trx_ffe_updated; // if the TX and RX FFE is updated after every TX or RX training
//extern __xdata bool skip_cdr;
extern __xdata bool ctrl_rx_train_mode;
/*
extern __xdata bool c1_valid; 
extern __xdata bool c0_valid; 
extern __xdata bool cn1_valid; 
extern __xdata bool tx_amp_is_max;
extern __xdata bool tx_amp_is_min;
extern __xdata bool tx_emph0_is_max;
extern __xdata bool tx_emph0_is_min;
extern __xdata bool tx_emph1_is_max;
extern __xdata bool tx_emph1_is_min;
extern __xdata bool tx_power_is_max;
extern __xdata bool tx_vma_is_min;
*/
//extern __xdata uint8_t tx_amp_index;	
//extern __xdata uint8_t tx_emph1_index;
//extern __xdata uint8_t tx_emph0_index;

extern __xdata bool pre_sq_rd, save_pu_f1p_s_o, save_pu_f1p_s_e, save_dfe_adapt_splr, save_dfe_adapt_e_en, save_dfe_adapt_o_en; //eom save
extern __xdata bool save_eom_en_s, save_eom_en_d, save_dfe_en;
extern __xdata bool eom_ext_mode;

extern __xdata	uint16_t rpta_loop_cnt, tx_ctrl_stat ;
extern __xdata	int8_t  rpta_vote;
extern __xdata uint8_t dfe_cnt, dfe_max_cnt, dfe_err_loop_cnt, cdr_state, remote_status_time_out;
extern __xdata uint8_t align90_pd_0_cnt, align90_pd_1_cnt, align90_track_cnt;
extern __xdata bool dfe_err_found;

extern __xdata bool first_time_ring_pll_cont;
extern __xdata int8_t ring_size_counter; //ring_pll
extern __xdata	uint8_t  save_TESTBUS_HI8BSEL_8BMODE, save_TESTBUS_SEL_HI0_lo, save_TESTBUS_SEL_HI0_hi; 
extern __xdata	uint8_t  save_TESTBUS_SEL_ORDER0;
extern __xdata	uint16_t save_TESTBUS_SEL_SWAP;
extern __xdata uint8_t save_pt_tx_pattern_sel_lane_5_0_b0;
extern __xdata uint8_t save_pt_tx_pattern_sel_lane_5_0_b1;
extern __xdata uint8_t save_pt_rx_pattern_sel_lane_5_0;
extern __xdata uint8_t save_pt_en_lane; 				  
extern __xdata uint8_t save_pt_tx_clk_en_lane;   
extern __xdata uint8_t save_local_ana_tx2rx_lpbk_en_lane;      
extern __xdata uint8_t g_txclk_accummulator; //vdd_cal
extern __xdata uint8_t g_txdata_accummulator; //vdd_cal
extern __xdata uint8_t g_txpre_accummulator; //vdd_cal
extern __xdata uint8_t g_rxeomclk_accummulator; //vdd_cal
extern __xdata uint8_t g_rxdataclk_accummulator; //vdd_cal
extern __xdata uint8_t g_rxsampler_accummulator; //vdd_cal
extern __xdata uint16_t ringpll_dac_fine;
extern __xdata uint8_t save_dfe_dis;
extern __xdata uint8_t skip_dfe_adapt_cdr_midpoint, cds_dfe_ofst, final_ofst_adapt_en;
extern __xdata uint8_t dfe_adapt_splr_force_dis;
extern __xdata uint8_t cdr_ui_pi_code_num, eom_data_align_success;
extern __xdata bool dfe_update_en_force_even_dis, ofst_sat, half_ui_code;
extern __xdata int8_t cur_phase_offset_data, cur_phase_offset_esm;

extern __xdata bool phy_fm_rst;

extern __xdata uint8_t mcuclk_mc;

//--------------------------------------
// speed table
// speed table
__xdata __at(SPDTBL_XDAT_CMN_BASE + 0) uint8_t lc_speedtable[2][2][lc_size]; 
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t ring_speedtable[2][2][2][ring_size];
__xdata __at(PHY_MODE_CMN_BASE + 0) uint8_t phy_mode_cmn_table[cal_cmn_size];

__xdata __at(SPDTBL_XDAT_LANE_BASE + 0) uint8_t max_gen;
__xdata __at(SPDTBL_XDAT_LANE_BASE + 1) uint8_t min_gen;
__xdata __at(SPDTBL_XDAT_LANE_BASE + 4) uint8_t speedtable[5][gen_size];
__xdata __at(PHY_MODE_LANE_BASE + 0) uint8_t phy_mode_lane_table[cal_lane_size];

// ---- 
//new cds memory
#ifdef SUPPORT_NEW_CDS
 __xdata __at(0x6400) Status_CDS_28G_t cds28;
 __xdata __at(0x6480) Status_dfe_t dfe_sm;
#endif

extern __code uint16_t cds_table[] ;  
extern __code uint8_t c1_default[] ; 
extern __code uint8_t c0_default[] ; 
extern __code uint8_t cn1_default[] ; 
extern __code uint8_t valid_coe_tb[];


#endif
