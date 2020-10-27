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
extern volatile BIT do_rx_apta, do_tx_apta, do_apta;
extern BIT adapt_slicer_en, adapt_data_en;
extern BIT cont_cal_on;
extern BIT pam4_en;
extern BIT train_pass;

//extern BIT c1_valid; 
//extern BIT c0_valid; 
//extern BIT cn1_valid; 
extern volatile BIT tx_remote_ctrl_on;
//extern BIT tx_power_is_max;
//extern BIT tx_vma_is_min;
extern BIT ctrl_cdr_phase_on, ctrl_rx_train_on, ctrl_tx_train_on;
extern BIT ctrl_rx_train_done, ctrl_tx_train_done, ctrl_trx_train_done;
extern BIT gain_train_with_c, ctrl_trx_ffe_updated;

//------------------------------------
extern __xdata uint8_t save_pt_tx_pattern_sel_lane_5_0;
extern __xdata uint8_t save_pt_tx_en_lane; 				  
extern __xdata uint8_t save_pt_tx_clk_en_lane;   
extern __xdata uint8_t save_local_ana_tx2rx_lpbk_en_lane;
/*extern __xdata uint8_t txclk_vdd_step_cnt;
extern __xdata uint8_t txpre_vdd_step_cnt;   
extern __xdata uint8_t txdata_vdd_step_cnt;  
extern __xdata uint8_t rxdcc_eom_step_cnt;   
extern __xdata uint8_t rxdcc_data_step_cnt;  
extern __xdata uint8_t rxdcc_dll_step_cnt;     
extern __xdata uint8_t rxsmplr_vdd_step_cnt; 
extern __xdata uint8_t rxeomclk_vdd_step_cnt;
extern __xdata uint8_t plldcc_step_cnt;      
extern __xdata uint8_t pllamp_step_cnt;      
extern __xdata uint8_t txdcc_pdiv_step_cnt;  
extern __xdata uint8_t txdcc_step_cnt;       
extern __xdata uint8_t txdetect_step_cnt;    
extern __xdata uint8_t rxdll_step_cnt;       
extern __xdata uint8_t eom_dll_step_cnt;     
extern __xdata uint8_t align90_step_cnt;*/

extern __xdata uint8_t gen_tx;
extern __xdata uint8_t gen_rx;
extern __xdata uint8_t gen_pll_rate;
extern __xdata uint8_t rx_pll_rate;
extern __xdata uint8_t tx_pll_rate;
extern __xdata uint8_t new_gen_tx;
extern __xdata uint8_t new_gen_rx;
extern __xdata uint8_t old_status;
extern __xdata uint8_t mcuclk_mc;
extern __xdata uint8_t save_status;

extern __xdata int16_t Tshrtr;

/*extern __xdata int16_t Thold_sel;
extern __xdata int16_t Tpamp0;
extern __xdata int16_t Tpamp1;
extern __xdata int16_t Tpfreq0;
extern __xdata int16_t Tpfreq1;
extern __xdata int16_t Tpfreq2;
extern __xdata int16_t Tpfreq3;
extern __xdata int16_t Tpfreq4;*/

//extern __xdata uint8_t pllcal_first_time;
//extern __xdata uint8_t ringpll_step_size_cnt;
//extern __xdata uint8_t tempc_step_state; //pll_temp_cal
//extern __xdata uint8_t tempc_dir; //pll_temp_cal
//extern __xdata uint8_t *SIGN_POS, *NEG, *SAMPLER_CAL_SAVE, *SAMPLER_TRAIN_SAVE; //sampler cal

extern __xdata uint8_t dfe_dis;
extern __xdata uint16_t cds;
//extern __xdata uint8_t cdr_dfe_scheme_stage;
#define cdr_dfe_scheme_stage	reg_MCU_DEBUG8_LANE_7_0
extern __xdata Status_dfe_sm_t dfe_sm;
extern __xdata Status_dfe_2c_t dfe_2c;
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
extern __xdata bool cur_tsen_mode;
extern __xdata ttiu_ctrl_t rm_ctrl;
extern __xdata uint8_t stat;
extern __xdata uint8_t ofst_sav[], ofst_mem[];

extern __xdata uint8_t control_state;

//extern __xdata bool train_eye_check_pass;

extern __xdata uint8_t dfe_res_f0a_low_thres_01;
extern __xdata uint8_t dfe_res_f0a_low_thres_2; 
extern __xdata uint8_t dfe_res_f0a_low_thres_3; 
extern __xdata uint8_t dfe_res_f0a_high_thres;

//extern __xdata uint8_t tx_num_tx_preset;
//extern __xdata uint8_t tx_preset_table[];
//extern __xdata uint8_t train_g0_index;
//extern __xdata uint8_t train_g1_index;
//extern __xdata uint8_t train_gn1_index;
extern __xdata uint8_t train_c;
extern __xdata uint8_t train_r;
extern __xdata uint8_t opt_c;
extern __xdata uint8_t opt_r;
extern __xdata bool r2_adj_on;
extern __xdata int16_t sumf_boost_target_c;
extern __xdata int8_t cdr_midpoint_phase_os;
//extern __xdata uint8_t opt_g0_index; 
//extern __xdata uint8_t opt_g1_index; 
//extern __xdata uint8_t opt_gn1_index;

extern __xdata int16_t temp_trainning;
extern __xdata int16_t temp_dfe, temp_boundary;
extern __xdata	uint8_t train_recording;

//-- cds
/*extern __xdata uint8_t cds_f0a_data, cds_f0a_slicer;
extern __xdata uint8_t cds_f0a_max_data, cds_f0a_max_slicer;
extern __xdata uint8_t cds_f0_data, cds_f0_slicer;
extern __xdata int8_t cds_f1;
extern __xdata int8_t cds_f2_data, cds_f2_slicer;
extern __xdata int8_t cds_f3_data, cds_f3_slicer;
extern __xdata int8_t cds_f4;
extern __xdata int8_t cds_f5;
extern __xdata int8_t cds_f6;
extern __xdata int8_t cds_f7;
extern __xdata uint8_t cds_f0d_data_center, cds_f0d_slicer_center;
extern __xdata uint8_t cds_f0d_data_left, cds_f0d_slicer_left;
extern __xdata uint8_t cds_f0d_data_right, cds_f0d_slicer_right;
extern __xdata int8_t cds_eye_check_pass;*/

/*extern __xdata uint16_t sum_f0_data, sum_f0_slicer;
extern __xdata uint16_t sum_f0a_data, sum_f0a_slicer; 
xtern __xdata uint16_t sum_f0a_max_data, sum_f0a_max_slicer;*/
//extern __xdata int16_t sum_f1;
extern __xdata uint16_t f0a_max_data, f0a_max_slicer;

extern __xdata uint16_t sum_f0;
extern __xdata uint16_t sum_f0a;
extern __xdata uint16_t sum_f0a_max;
extern __xdata uint16_t sum_f0d;
extern __xdata uint16_t sum_f0b;
extern __xdata uint16_t sum_f0x;
extern __xdata uint16_t sum_f0d_left;
extern __xdata uint16_t sum_f0d_right;

/*extern __xdata int16_t sum_f1_data, sum_f1_slicer;
extern __xdata int16_t sum_f2_data, sum_f2_slicer;
extern __xdata int16_t sum_f3_data, sum_f3_slicer;
extern __xdata int16_t sum_f4_data, sum_f4_slicer;
*/

extern __xdata int16_t sum_f1;
extern __xdata int16_t sum_f2;
extern __xdata int16_t sum_f3;
extern __xdata int16_t sum_f4;

extern __xdata int16_t sum_f5;
extern __xdata int16_t sum_f6;
extern __xdata int16_t sum_f7;
extern __xdata int16_t sum_f8;
/*extern __xdata uint16_t sum_f0d_data, sum_f0d_slicer;
extern __xdata uint16_t sum_f0d_left_data, sum_f0d_left_slicer;
extern __xdata uint16_t sum_f0d_right_data, sum_f0d_right_slicer;*/
extern __xdata int16_t sum_vref_top, sum_vref_mid, sum_vref_bot;
extern __xdata int16_t sum_eye_check_pass;
extern __xdata uint8_t ctrl_max_dfe_adapt_shift;
extern __xdata uint8_t half_shift;

extern __xdata uint8_t f0_1_factor;
extern __xdata uint8_t f0d_factor;
extern __xdata uint8_t f2_factor;
extern __xdata uint8_t f3_factor;
extern __xdata uint8_t f4_factor;
extern __xdata uint8_t f5_factor;
extern __xdata uint8_t f6_factor;
extern __xdata uint8_t f7_factor;
extern __xdata uint8_t vref_factor;

extern __xdata int16_t f0_res;
extern __xdata int16_t f1_res;
extern __xdata int16_t f2_res;
extern __xdata int16_t f3_res;
extern __xdata int16_t f4_res;
extern __xdata int16_t f5_res;
extern __xdata int16_t f6_res;
extern __xdata int16_t f7_res;
extern __xdata int16_t vref_res;

extern __xdata	uint8_t  save_TESTBUS_SEL_HI0; 
extern __xdata	uint8_t  save_TESTBUS_SEL_LO0;

extern __xdata bool tag_EC_PASS;
extern __xdata int16_t dpher_offset;

extern __xdata uint8_t uart_rx_in;
extern __xdata uint8_t uart_rx_out;
extern __xdata uint8_t uart_rx_buf[];

//extern __xdata uint8_t cal_lccap_msb_index[];
//extern __xdata uint8_t cal_align90_gm_bin[];
//extern __xdata uint8_t	gm_bin, dac, dm, gm; //current align90
//extern __xdata uint8_t align90_soft_lookup_on;
extern __xdata uint8_t vdd_cnt, dcc_cont, align90_tracking_cnt, dfe_norm_cnt;
extern __xdata int8_t f1p_e_old, f1p_o_old;
extern __xdata uint8_t rxdll_temp_a_lane, rxdll_temp_b_lane;
extern __xdata uint8_t PH_CONV_CNT, EOM_CONV_CNT;
extern __xdata uint8_t ph_conv_dir, eom_conv_dir;
//extern __xdata uint8_t EOM_ADAPT_STEP_SIZE;
//extern __xdata uint8_t PH_ADAPT_STEP_SIZE;
//extern __xdata uint16_t EOM_CONV_NUM;
//extern __xdata uint8_t PH_CONV_NUM;
extern __xdata int8_t norm_f1;
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
//extern __xdata bool tx_sweep_preset_en; 
//extern __xdata bool tx_status_pcie_mode;
//extern __xdata bool tx_adapt_g0_en;
//extern __xdata bool tx_adapt_gn1_en;
//extern __xdata bool tx_adapt_g1_en;   
//extern __xdata bool pcie_usb_mode;
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

extern __xdata uint8_t tx_amp_index;	
extern __xdata uint8_t tx_emph1_index;
extern __xdata uint8_t tx_emph0_index;

//extern __xdata bool adapt_slicer_en, adapt_data_en;

extern __xdata bool pre_sq_rd, save_pu_f1p_s_o, save_pu_f1p_s_e, save_dfe_adapt_splr, save_dfe_adapt_e_en, save_dfe_adapt_o_en; //eom save
extern __xdata bool save_eom_en_s, save_eom_en_d, save_dfe_en;
extern __xdata bool eom_ext_mode;

extern __xdata	uint16_t rpta_loop_cnt, tx_ctrl_stat ;
extern __xdata	int8_t  rpta_vote;
extern __xdata uint8_t dfe_cnt, dfe_max_cnt, dfe_err_loop_cnt, cdr_state, remote_status_time_out;
//extern __xdata uint8_t align90_pd_0_cnt, align90_pd_1_cnt, align90_track_cnt;

//extern __xdata bool first_time_ring_pll_cont;
//extern __xdata int8_t ring_size_counter; //ring_pll
extern __xdata	uint8_t  save_TESTBUS_HI8BSEL_8BMODE, save_TESTBUS_SEL_HI0_lo, save_TESTBUS_SEL_HI0_hi; 
extern __xdata	uint8_t  save_TESTBUS_SEL_ORDER0;
extern __xdata	uint16_t save_TESTBUS_SEL_SWAP;
//extern __xdata uint16_t ringpll_dac_fine;

extern __xdata bool rx_init_done;
extern __xdata uint16_t Tpfreq0;

#ifndef NEW_CDS
extern __code uint16_t cds_table[] ;  
#endif

extern __code uint8_t c1_default[] ; 
extern __code uint8_t c0_default[] ; 
extern __code uint8_t cn1_default[] ; 
extern __code uint8_t valid_coe_tb[];

extern __xdata int8_t GC_sat;
extern __xdata int8_t C_sat;
extern __xdata int8_t R_sat;

extern __xdata int8_t signed_ctle_GC;
extern __xdata int8_t signed_ctle_R;
extern __xdata int8_t signed_ctle_C;

extern __xdata uint16_t cost_function_list[];
extern __xdata uint16_t R_list[];
extern __xdata uint16_t C_list[];
extern __xdata uint16_t GC_list[];

__xdata __at(0xe668) uint8_t proc_thr_tb[10][3];

#if 0
__xdata __at(PHY_MODE_LANE_BASE + 0) uint8_t phy_mode_lane_table[cal_lane_size];


//--------------------------------------
//data[x][y] 
// x: [0]pwr - [1]cont
// y: [0]rate0 - [1]rate1 or [0]gen0 - [1]gen1 - ..
//phy_mode_cmn
__xdata __at(PHY_MODE_CMN_BASE + caloft_lcvco_dac_lsb_rate0) 			uint8_t cmx_cal_lcvco_dac_lsb[2][2];
__xdata __at(PHY_MODE_CMN_BASE + caloft_lcvco_dac_msb_rate0) 			uint8_t cmx_cal_lcvco_dac_msb[2][2];
__xdata __at(PHY_MODE_CMN_BASE + caloft_lccap_msb_rate0) 	 			uint8_t cmx_cal_lccap_msb[2];
__xdata __at(PHY_MODE_CMN_BASE + caloft_lccap_lsb_rate0) 	 			uint8_t cmx_cal_lccap_lsb[2];
__xdata __at(PHY_MODE_CMN_BASE + caloft_plldcc_cnt_rate0) 	 			uint8_t cmx_cal_plldcc[2][2]; 
__xdata __at(PHY_MODE_CMN_BASE + caloft_pll_speed_ring_rate0) 	 		uint8_t cmx_cal_pll_speed_ring[2][2];
__xdata __at(PHY_MODE_CMN_BASE + caloft_pll_sllp_dac_coarse_ring_rate0) uint8_t cmx_cal_pll_sllp_dac_coarse_ring[2][2];
__xdata __at(PHY_MODE_CMN_BASE + caloft_sllp_dac_fine_ring_rate0) 	 	uint16_t cmx_cal_sllp_dac_fine_ring[2][2];

__xdata __at(PHY_MODE_CMN_BASE + 0)	uint8_t cmx_cal_sellv_txclk[4][2][1];
__xdata __at(PHY_MODE_CMN_BASE + 8)	uint8_t cmx_cal_sellv_txdata[4][2][1];
__xdata __at(PHY_MODE_CMN_BASE + 16)	uint8_t cmx_cal_sellv_rxintp[4][2][1];
__xdata __at(PHY_MODE_CMN_BASE + 24)	uint8_t cmx_cal_sellv_rxdll[4][2][1];
__xdata __at(PHY_MODE_CMN_BASE + 32)	uint8_t cmx_cal_sellv_rx_a90_dataclk[4][2][1];
__xdata __at(PHY_MODE_CMN_BASE + 40)	uint8_t cmx_cal_sellv_rx_skew_eomclk[4][2][1];
__xdata __at(PHY_MODE_CMN_BASE + 48)	uint8_t cmx_cal_sellv_rx_thclk_sampler[4][2][1];
__xdata __at(PHY_MODE_CMN_BASE + 56)	uint8_t cmx_cal_sellv_rx_thdrv[4][2][1];
__xdata __at(PHY_MODE_CMN_BASE + 64)	uint8_t cmx_cal_sellv_rx_clktopvddl[4][2][1];
__xdata __at(PHY_MODE_CMN_BASE + 72)	uint8_t cmx_cal_sellv_rx_intpeom_dlleom[4][2][1];
__xdata __at(PHY_MODE_CMN_BASE + 80)	uint8_t cmx_cal_sellv_rx_div2[4][2][1];
__xdata __at(PHY_MODE_CMN_BASE + 88)	uint8_t cmx_cal_sellv_rx_ctle[4][2][1];

//phy_mode_lane
__xdata __at(PHY_MODE_LANE_BASE + caloft_pll_amp_result_lane)			uint8_t lnx_cal_pll_amp_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_plldcc_result_lane)			uint8_t lnx_cal_plldcc_result_lane;

__xdata __at(PHY_MODE_LANE_BASE + caloft_tx_align90_result_msb_lane)               uint8_t lnx_cal_tx_align90_result_msb_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_tx_align90_result_lsb_lane)            uint8_t lnx_cal_tx_align90_result_lsb_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_txdcc1_result_lane)           uint8_t lnx_cal_txdcc1_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_txdcc2_result_lane)        uint8_t lnx_cal_txdcc2_result_lane;

__xdata __at(PHY_MODE_LANE_BASE + caloft_dll_gm_result_lane)           uint8_t lnx_cal_dll_gm_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_eom_dll_gm_result_lane)        uint8_t lnx_cal_eom_dll_gm_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_dll_vdda_result_lane)           uint8_t lnx_cal_dll_vdda_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_eom_dll_vdda_result_lane)        uint8_t lnx_cal_eom_dll_vdda_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_dll_dcc_result_lane)           uint8_t lnx_cal_dll_dcc_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_tx_dcc1_result_lane)        uint8_t lnx_cal_tx_dcc1_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_tx_dcc2_result_lane)       uint8_t lnx_cal_tx_dcc2_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_tx_dcc3_result_msb_lane)    uint8_t lnx_cal_tx_dcc3_result_msb_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_tx_dcc3_result_lsb_lane)           uint8_t lnx_cal_tx_dcc3_result_lsb_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_tx_dcc4_result_msb_lane)   uint8_t lnx_cal_tx_dcc4_result_msb_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_tx_dcc4_result_lsb_lane)         uint8_t lnx_cal_tx_dcc4_result_lsb_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_tx_imp_n_result_lane)          uint8_t lnx_cal_tx_imp_n_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_tx_imp_p_result_lane)         uint8_t lnx_cal_tx_imp_p_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_rx_eom_dcc_result_lane)          	uint8_t lnx_cal_rx_eom_dcc_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_rx_eom_pi_result_lane)      		uint8_t lnx_cal_rx_eom_pi_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_rx_eom_align90_result_msb_lane)    uint8_t lnx_cal_rx_eom_align90_result_msb_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_rx_eom_align90_result_lsb_lane)    uint8_t lnx_cal_rx_eom_align90_result_lsb_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_rx_align90_dd_result_msb_lane)     uint8_t lnx_cal_rx_align90_dd_result_msb_lane;



__xdata __at(PHY_MODE_LANE_BASE + caloft_rx_align90_dd_result_lsb_lane)       uint8_t lnx_cal_rx_align90_dd_result_lsb_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_rx_align90_de_result_msb_lane)       uint8_t lnx_cal_rx_align90_de_result_msb_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_rx_align90_de_result_lsb_lane)       uint8_t lnx_cal_rx_align90_de_result_lsb_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_rx_align90_ee_result_msb_lane)       uint8_t lnx_cal_rx_align90_ee_result_msb_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_rx_align90_ee_result_lsb_lane)       uint8_t lnx_cal_rx_align90_ee_result_lsb_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_rx_dcc1_result_msb_lane)       uint8_t lnx_cal_rx_dcc1_result_msb_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_rx_dcc1_result_lsb_lane)       uint8_t lnx_cal_rx_dcc1_result_lsb_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_rx_dcc2_result_msb_lane)       uint8_t lnx_cal_rx_dcc2_result_msb_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_rx_dcc2_result_lsb_lane)       uint8_t lnx_cal_rx_dcc2_result_lsb_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_rx_dcc3_result_msb_lane)       uint8_t lnx_cal_rx_dcc3_result_msb_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_rx_dcc3_result_lsb_lane)       uint8_t lnx_cal_rx_dcc3_result_lsb_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_rx_dcc4_result_msb_lane)       uint8_t lnx_cal_rx_dcc4_result_msb_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_rx_dcc4_result_lsb_lane)       uint8_t lnx_cal_rx_dcc4_result_lsb_lane;

__xdata __at(PHY_MODE_LANE_BASE + caloft_rx_dcc5_result_lane)       uint8_t lnx_cal_rx_dcc5_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_rx_imp_result_lane)       uint8_t lnx_cal_rx_imp_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_sq_result_lane)       uint8_t lnx_cal_sq_result_lane;



__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_d_top_p1_result_lane)       uint8_t lnx_cal_smplr_d_top_p1_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_d_mid_p1_result_lane)       uint8_t lnx_cal_smplr_d_mid_p1_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_d_bot_p1_result_lane)       uint8_t lnx_cal_smplr_d_bot_p1_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_d_top_p3_result_lane)       uint8_t lnx_cal_smplr_d_top_p3_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_d_mid_p3_result_lane)       uint8_t lnx_cal_smplr_d_mid_p3_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_d_bot_p3_result_lane)       uint8_t lnx_cal_smplr_d_bot_p3_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_s_top_p1_result_lane)       uint8_t lnx_cal_smplr_s_top_p1_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_s_mid_p1_result_lane)       uint8_t lnx_cal_smplr_s_mid_p1_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_s_bot_p1_result_lane)       uint8_t lnx_cal_smplr_s_bot_p1_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_s_top_p3_result_lane)       uint8_t lnx_cal_smplr_s_top_p3_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_s_mid_p3_result_lane)       uint8_t lnx_cal_smplr_s_mid_p3_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_s_bot_p3_result_lane)       uint8_t lnx_cal_smplr_s_bot_p3_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_edge_p1_result_pn_sign_lane)       uint8_t lnx_cal_smplr_edge_p1_result_pn_sign_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_edge_p1_result_p_sign_lane )       uint8_t lnx_cal_smplr_edge_p1_result_p_sign_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_edge_p1_result_n_sign_lane )       uint8_t lnx_cal_smplr_edge_p1_result_n_sign_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_edge_p3_result_pn_sign_lane)       uint8_t lnx_cal_smplr_edge_p3_result_pn_sign_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_edge_p3_result_p_sign_lane )       uint8_t lnx_cal_smplr_edge_p3_result_p_sign_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_edge_p3_result_n_sign_lane )       uint8_t lnx_cal_smplr_edge_p3_result_n_sign_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_d_top_p2_result_lane)       uint8_t lnx_cal_smplr_d_top_p2_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_d_mid_p2_result_lane)       uint8_t lnx_cal_smplr_d_mid_p2_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_d_bot_p2_result_lane)       uint8_t lnx_cal_smplr_d_bot_p2_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_d_top_p4_result_lane)       uint8_t lnx_cal_smplr_d_top_p4_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_d_mid_p4_result_lane)       uint8_t lnx_cal_smplr_d_mid_p4_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_d_bot_p4_result_lane)       uint8_t lnx_cal_smplr_d_bot_p4_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_s_top_p2_result_lane)       uint8_t lnx_cal_smplr_s_top_p2_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_s_mid_p2_result_lane)       uint8_t lnx_cal_smplr_s_mid_p2_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_s_bot_p2_result_lane)       uint8_t lnx_cal_smplr_s_bot_p2_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_s_top_p4_result_lane)       uint8_t lnx_cal_smplr_s_top_p4_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_s_mid_p4_result_lane)       uint8_t lnx_cal_smplr_s_mid_p4_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_s_bot_p4_result_lane)       uint8_t lnx_cal_smplr_s_bot_p4_result_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_edge_p2_result_pn_sign_lane)       uint8_t lnx_cal_smplr_edge_p2_result_pn_sign_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_edge_p2_result_p_sign_lane )       uint8_t lnx_cal_smplr_edge_p2_result_p_sign_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_edge_p2_result_n_sign_lane )       uint8_t lnx_cal_smplr_edge_p2_result_n_sign_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_edge_p4_result_pn_sign_lane)       uint8_t lnx_cal_smplr_edge_p4_result_pn_sign_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_edge_p4_result_p_sign_lane )       uint8_t lnx_cal_smplr_edge_p4_result_p_sign_lane;
__xdata __at(PHY_MODE_LANE_BASE + caloft_smplr_edge_p4_result_n_sign_lane )       uint8_t lnx_cal_smplr_edge_p4_result_n_sign_lane;

#endif

#endif
