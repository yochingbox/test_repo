/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file global.c
* \purpose define global variables
* \History
*	10/13/2015 Heejeong Ryu		Initial 
*/
#include "common.h"

//------------------------------------
// bit 0x20 ~ 0x2F :
//Don't change! ROM Used.
BIT int_pu_rx, int_pu_tx;
BIT sync_check;
volatile BIT timeout, timeout2;
volatile BIT do_wake;
volatile BIT do_train;
volatile BIT do_rxtrain;
volatile BIT do_rxinit;
volatile BIT do_rx_apta, do_tx_apta, do_apta;
BIT adapt_slicer_en, adapt_data_en;
BIT rx_pll_rate, tx_pll_rate, use_ring_pll, lc_pll_used, ring_pll_enabled, ring_use_250m, force_exit_cal, no_pllspdchg; 
BIT cont_cal_on;
BIT tx_amp_is_max;
BIT tx_amp_is_min;
BIT tx_emph0_is_max;
BIT tx_emph0_is_min;
BIT tx_emph1_is_max;
BIT tx_emph1_is_min;
volatile BIT tx_remote_ctrl_on;
//BIT tx_power_is_max;
//BIT tx_vma_is_min;
BIT ctrl_cdr_phase_on, ctrl_rx_train_on, ctrl_tx_train_on;
BIT ctrl_rx_train_done, ctrl_tx_train_done, ctrl_trx_train_done;
BIT gain_train_with_c, ctrl_trx_ffe_updated;
BIT tx_pipe4_en;
BIT tx_status_pcie_mode;
//--------------------------------------
// xdata global variables 
//--------------------------------------
// xdata used by ROM. Do not change!
__xdata uint8_t save_pt_tx_pattern_sel_lane_5_0_b0;
__xdata uint8_t save_pt_tx_pattern_sel_lane_5_0_b1;
__xdata uint8_t save_pt_en_lane; 				  
__xdata uint8_t save_pt_tx_clk_en_lane;       
__xdata uint8_t save_local_ana_tx2rx_lpbk_en_lane;      
__xdata uint8_t txclk_vdd_step_cnt;
__xdata uint8_t txpre_vdd_step_cnt;   
__xdata uint8_t txdata_vdd_step_cnt;  
__xdata uint8_t rxdcc_eom_step_cnt;   
__xdata uint8_t rxdcc_data_step_cnt;   
__xdata uint8_t rxdcc_dll_step_cnt;   
__xdata uint8_t rxsmplr_vdd_step_cnt; 
__xdata uint8_t rxeomclk_vdd_step_cnt;
__xdata uint8_t plldcc_step_cnt;      
__xdata uint8_t pllamp_step_cnt;      
__xdata uint8_t txdcc_pdiv_step_cnt;  
__xdata uint8_t txdcc_step_cnt;       
__xdata uint8_t txdetect_step_cnt;    
__xdata uint8_t rxdll_step_cnt;       
__xdata uint8_t eom_dll_step_cnt;     
__xdata uint8_t align90_step_cnt;     
__xdata uint8_t gen_tx;
__xdata uint8_t gen_rx;
__xdata	int16_t tsen_dat;
__xdata uint8_t mcuclk_mc;
__xdata uint8_t cal_lccap_msb_index[2];
__xdata bool slave_phy_on; 
__xdata uint8_t	gm_bin, dac, dm, gm; 
__xdata uint16_t ringpll_dac_fine;
__xdata bool serdes_ring_lane_en, ring_lane_sel;

// ------------------------------------- 
__xdata uint8_t pllcal_first_time;
__xdata uint8_t tempc_step_state; 
__xdata uint8_t tempc_dir;
// -- main
__xdata uint8_t	old_status;

// -- Speed Change
__xdata uint8_t new_gen_tx;
__xdata uint8_t new_gen_rx;

__xdata bool pwrsq_on;

// -- Calibration 
__xdata uint8_t ringpll_step_size_cnt;
__xdata uint8_t *SIGN_POS, *NEG, *SAMPLER_CAL_SAVE, *SAMPLER_TRAIN_SAVE; //sampler cal
__xdata int16_t tsen_dat_cal, tsen_dat_train, tsen_dat_normal;
__xdata uint8_t cal_align90_gm_bin[3];

__xdata uint8_t rxdll_temp_a_lane, rxdll_temp_b_lane;

__xdata uint8_t vdd_cnt, dcc_cont, dfe_norm_cnt;
__xdata int8_t f1p_e_old, f1p_o_old;

__xdata bool first_time_ring_pll_cont;
__xdata int8_t ring_size_counter; //ring_pll
__xdata int8_t ring_size_counter_mid; //ring_pll

// -- Train
__xdata Status_Train_t train;
__xdata Status_Train_t opt;

__xdata Status_TX_t tx;
__xdata Status_RX_t rx;
__xdata Status_CDR_t cdr;
__xdata uint8_t ctrl_num_blind_loop, ctrl_num_big_loop;

__xdata uint8_t dfe_res_f0a_low_thres_01;
__xdata uint8_t dfe_res_f0a_low_thres_2; 
__xdata uint8_t dfe_res_f0a_low_thres_3; 
__xdata uint8_t dfe_res_f0a_high_thres;

__xdata uint8_t train_c;
__xdata uint8_t train_r;
__xdata uint8_t opt_c;
__xdata uint8_t opt_r;
__xdata bool r2_adj_on;
__xdata int8_t sumf_boost_target_c, cdr_midpoint_phase_os;
__xdata bool train_timer_int;

//-- cds
//__xdata Status_CDS_t cds;
__xdata Status_SUM_CDS_t sum;

__xdata uint8_t ctrl_max_dfe_adapt_shift;
__xdata uint8_t half_shift;

//__xdata	uint8_t  save_TESTBUS_SEL_HI0; 
//__xdata	uint8_t  save_TESTBUS_SEL_LO0;

// -- DFE
__xdata uint8_t dfe_dis;
//__xdata uint16_t cds_tb;
//__xdata uint8_t cdr_dfe_scheme_stage;
//__xdata uint32_t ec_valid_vote_num, ec_error_vote_num;
__xdata uint8_t ph_control_mode;
__xdata uint8_t adapted_phase;

// -- RPTA
__xdata uint8_t PH_CONV_CNT, EOM_CONV_CNT;
__xdata uint8_t ph_conv_dir, eom_conv_dir;
__xdata int8_t norm_f1, norm_ofst;
__xdata int8_t norm_eom_ph_os_l, norm_eom_ph_os_c, norm_eom_ph_os_r;
__xdata int16_t phase_vote_acc;
__xdata int16_t eom_vote_acc;
__xdata uint8_t f0d_c_pre;
__xdata uint8_t f0d_l_pre;
__xdata uint8_t f0d_r_pre;
__xdata int8_t phase_l_offset; //always negative
__xdata int8_t phase_r_offset, phase_offset, adapt_eom_phase_save;

//EOM
__xdata int16_t cur_esm_phase;

__xdata bool tx_init_bit;
__xdata bool train_comp;
__xdata bool uart_rx_busy;
__xdata bool tx_sweep_preset_en; 
__xdata bool pcie_usb_mode;
__xdata bool do_phase_adapt;
__xdata bool Phase_Adapt_Inited,detect_sat;
// -- Train Control Flags
__xdata bool ctrl_rx_only_mode; // indicate whether in RX training only mode
//__xdata bool ctrl_trx_train_done; // indicate whether training is done
__xdata bool ctrl_trx_train_pass; 
//__xdata bool ctrl_rx_train_done; 
//__xdata bool ctrl_tx_train_done; 
//__xdata bool ctrl_phase_train_done;
//__xdata bool gain_train_with_c;
//__xdata bool ctrl_rx_train_on; // turn on or off the RX training
//__xdata bool ctrl_tx_train_on; // turn on or off the TX training
//__xdata bool ctrl_trx_ffe_updated; // if the TX and RX FFE is updated after every TX or RX training
//__xdata bool skip_cdr;
__xdata bool ctrl_rx_train_mode; //not used, always 0 - control number of dfe_adaptation 
__xdata uint8_t tx_num_tx_preset;

__xdata bool pre_sq_rd, save_pu_f1p_s_o, save_pu_f1p_s_e, save_dfe_adapt_splr, save_dfe_adapt_e_en, save_dfe_adapt_o_en; //eom save
__xdata bool save_eom_en_s, save_eom_en_d, save_dfe_en;
__xdata bool eom_ext_mode;

//DFE
//__xdata Status_dfe_sm_t dfe_sm;
__xdata Status_dfe_2c_t dfe_2c;

__xdata	uint16_t rpta_loop_cnt, tx_ctrl_stat;
__xdata	int8_t  rpta_vote;
__xdata uint8_t cdr_state;

// -- UART
__xdata uint8_t uart_rx_in;
__xdata uint8_t uart_rx_out;
__xdata uint8_t uart_rx_buf[UART_RX_BUF_MAX];

// -- new add global variable should be here!
__xdata uint8_t gen_pll_rate, pre_gen_pll_rate, pre_lcpll_rate, pre_ringpll_rate;
__xdata bool invalidate_pll_rate;
__xdata uint8_t skip_dfe_adapt_cdr_midpoint, cds_dfe_ofst;
__xdata uint8_t cdr_ui_pi_code_num, half_ui_code, eom_data_align_success;
__xdata bool ofst_sat;
__xdata int8_t cur_phase_offset_data, cur_phase_offset_esm;
__xdata bool dfe_err_found;
__xdata uint8_t save_dfe_dis;
__xdata int8_t train_ofst_save;
__xdata uint16_t save_local_ctrl, save_local_status;
__xdata bool tx_train_p2p_hold, rxinit_4_spdchg_en;
//__xdata uint8_t apta_rm_state_err;
__xdata uint8_t apta_sim_state, apta_rm_state_err;
__xdata bool txffe_force_en;
__xdata uint8_t g_fw_flags;
__xdata uint8_t sq_thrs_ratio, sq_thrs_ratio_gen_en;
__xdata uint8_t dfe_res_save_en;
__xdata uint8_t dfe_save_en, dfe_phase_save_en;
__xdata uint16_t tx_train_frame_det_timer;
__xdata uint8_t rx_pll_rate_x, tx_pll_rate_x;
__xdata uint8_t cal_start_on;
__xdata uint8_t tx_sel_bit, rx_sel_bit;
__xdata bool pcie_f0b_en;
__xdata uint8_t opt_g0_index, opt_gn1_index, opt_g1_index;
__xdata bool pll_cal_timeout_dis_save;
__xdata uint8_t tx_apta_state;

#ifdef _28G_X2_DFE	
__xdata uint8_t *SAMPLER_CAL_SM_SAVE;
#endif
