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
/*uint8_t versions[4];// place holder*/
/*const __at(0) major_ver = MAJOR_VER;*/
/*const __at(1) minor_ver = MINOR_VER;*/
/*const __at(2) patch_ver = PATCH_VER;*/
/*const __at(3) build_ver = BUILD_VER;*/
// bit 0x20 ~ 0x2F
//BIT mcu_en0, mcu_en1, mcu_en2, mcu_en3;
BIT int_pu_rx, int_pu_tx;
BIT sync_check;// meaningless
volatile BIT timeout, timeout2;
volatile BIT do_wake;
volatile BIT do_train;
volatile BIT do_rxtrain;
volatile BIT do_rxinit;
volatile BIT do_rx_apta, do_tx_apta, do_apta; // not used
BIT rx_pll_rate, tx_pll_rate, use_ring_pll, lc_pll_used, ring_pll_enabled, ring_use_250m, force_exit_cal, no_pllspdchg; 
BIT cont_cal_on;
BIT pam4_en;

//BIT c1_valid; 
//BIT c0_valid; 
//BIT cn1_valid; 
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
__xdata uint8_t cds_call;
__xdata int8_t f1_sat_thresh, f2_sat_thresh;

//--------------------------------------
// xdata global variables 
//--------------------------------------
// xdata used by ROM. Do not change!
__xdata uint8_t save_gray_code_en;
__xdata uint8_t save_train_tx_sel_bits_lane;
__xdata uint8_t save_train_rx_sel_bits_lane;

__xdata uint8_t save_tx_sel_bits_lane;
__xdata uint8_t save_rx_sel_bits_lane;

/////////////fixed cross-byte reg
//__xdata uint8_t save_pt_tx_pattern_sel_lane_5_0_b0;
//__xdata uint8_t save_pt_tx_pattern_sel_lane_5_0_b1;
__xdata uint8_t save_pt_tx_pattern_sel_lane_5_0;
__xdata uint8_t save_pt_en_lane; 				  
__xdata uint8_t save_pt_tx_clk_en_lane;       
__xdata uint8_t save_local_ana_tx2rx_lpbk_en_lane;      
/*__xdata uint8_t txclk_vdd_step_cnt;
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
__xdata uint8_t align90_step_cnt;*/

// ------------------------------------- 
// -- main
__xdata uint8_t	old_status;

// -- Speed Change
//__xdata uint8_t phy_mode;
__xdata uint8_t gen_tx;
__xdata uint8_t gen_rx;
__xdata uint8_t gen_pll_rate;
__xdata uint8_t new_gen_tx;
__xdata uint8_t new_gen_rx;
//__xdata int16_t Tshrtr; // macro in pll_cal.c
//__xdata int16_t Thold_sel;
//__xdata int16_t Tpamp0;
//__xdata int16_t Tpamp1;
//__xdata int16_t Tpfreq0;
//__xdata int16_t Tpfreq1;
//__xdata int16_t Tpfreq2;
//__xdata int16_t Tpfreq3;
//__xdata int16_t Tpfreq4;

// -- Power Ctrl

// -- Calibration 
//__xdata uint8_t pllcal_first_time;
//__xdata uint8_t ringpll_step_size_cnt;
//__xdata uint8_t tempc_step_state; //pll_temp_cal
//__xdata uint8_t tempc_dir; //pll_temp_cal
//__xdata uint8_t *SIGN_POS, *NEG, *SAMPLER_CAL_SAVE, *SAMPLER_TRAIN_SAVE; //sampler cal
__xdata int16_t tsen_dat_cal, tsen_dat_train, tsen_dat_normal;
//__xdata uint8_t cal_lccap_msb_index[2];
//__xdata uint8_t cal_align90_gm_bin[2];

__xdata uint8_t rxdll_temp_a_lane, rxdll_temp_b_lane;
//__xdata uint8_t	gm_bin, dac, dm, gm, step_size;

__xdata uint8_t vdd_cnt, dcc_cont, align90_tracking_cnt, dfe_norm_cnt;
__xdata int8_t f1p_e_old, f1p_o_old;

__xdata uint8_t control_state;
// -- Train
__xdata Status_Train_t train;
__xdata Status_Train_t opt;

__xdata Status_TX_t tx;
__xdata Status_RX_t rx;
__xdata Status_CDR_t cdr;
__xdata uint8_t ctrl_num_blind_loop, ctrl_num_big_loop;

__xdata ttiu_ctrl_t rm_ctrl; //not used, don't delete, protect address for bitmatch
__xdata uint8_t stat;       // not used, 

//__xdata bool train_eye_check_pass;

__xdata uint8_t dfe_res_f0a_low_thres_01;
__xdata uint8_t dfe_res_f0a_low_thres_0; 
__xdata uint8_t dfe_res_f0a_low_thres_1; 
__xdata uint8_t dfe_res_f0a_low_thres_2; 
__xdata uint8_t dfe_res_f0a_low_thres_3; 
__xdata uint8_t dfe_res_f0a_high_thres;

//__xdata uint8_t train_g0_index;
//__xdata uint8_t train_g1_index;
//__xdata uint8_t train_gn1_index;
__xdata uint8_t train_c;
__xdata uint8_t train_r;
__xdata uint8_t opt_c;
__xdata uint8_t opt_r;
__xdata uint8_t short_flag;
__xdata bool r2_adj_on;
__xdata int16_t cdr_midpoint_phase_os;

//__xdata uint8_t opt_g0_index; 
//__xdata uint8_t opt_g1_index; 
//__xdata uint8_t opt_gn1_index;

//-- cds
/*__xdata uint8_t cds_f0a_data, cds_f0a_slicer;
__xdata uint8_t cds_f0a_max_data, cds_f0a_max_slicer;
__xdata uint8_t cds_f0_data, cds_f0_slicer;
__xdata int8_t cds_f1;
__xdata int8_t cds_f2_data, cds_f2_slicer;
__xdata int8_t cds_f3_data, cds_f3_slicer;
__xdata int8_t cds_f4;
__xdata int8_t cds_f5;
__xdata int8_t cds_f6;
__xdata int8_t cds_f7;
__xdata uint8_t cds_f0d_data_center, cds_f0d_slicer_center;
__xdata uint8_t cds_f0d_data_left, cds_f0d_slicer_left;
__xdata uint8_t cds_f0d_data_right, cds_f0d_slicer_right;
__xdata int8_t cds_eye_check_pass;*/

/*__xdata uint16_t sum_f0_data, sum_f0_slicer;
__xdata uint16_t sum_f0a_data, sum_f0a_slicer; */
//__xdata __xdata uint16_t sum_f0;
__xdata uint16_t sum_f0;
__xdata uint16_t sum_f0a;
__xdata uint16_t sum_f0d;
__xdata uint16_t sum_f0k;
__xdata uint16_t sum_f0b;
__xdata uint16_t sum_f0d_left;
__xdata uint16_t sum_f0d_right;
__xdata uint16_t sum_f0x;

//__xdata uint16_t combined_f0_tmb[NUM_PATH][NUM_DS];
//__xdata uint16_t combined_f0x_tmb[NUM_PATH][NUM_DS];
//

#if _DBG_F0X
__xdata uint16_t sum_f0xp1;
__xdata uint16_t sum_f0xn3;
__xdata uint16_t sum_f0xn4;
__xdata uint16_t sum_f0xn5;
#endif
/*__xdata int16_t sum_f1_data, sum_f1_slicer;
__xdata int16_t sum_f2_data, sum_f2_slicer;
__xdata int16_t sum_f3_data, sum_f3_slicer;
__xdata int16_t sum_f4_data, sum_f4_slicer;
*/
__xdata int16_t sum_f[8];
/*__xdata uint16_t sum_f0d_data, sum_f0d_slicer;
__xdata uint16_t sum_f0d_left_data, sum_f0d_left_slicer;
__xdata uint16_t sum_f0d_right_data, sum_f0d_right_slicer;*/
__xdata int16_t sum_vref_top, sum_vref_mid, sum_vref_bot;
__xdata int16_t sum_eye_check_pass;
__xdata uint8_t ctrl_max_dfe_adapt_shift;
__xdata uint8_t half_shift;

__xdata uint8_t f0_1_factor;
__xdata uint8_t f0d_factor;
__xdata uint8_t f2_factor;
__xdata uint8_t f3_factor;
__xdata uint8_t f4_factor;
__xdata uint8_t f5_factor;
__xdata uint8_t f6_factor;
__xdata uint8_t f7_factor;
__xdata uint8_t vref_factor;

__xdata int16_t f0_res;
__xdata int16_t f1_res;
__xdata int16_t f2_res;
__xdata int16_t f3_res;
__xdata int16_t f4_res;
__xdata int16_t f5_res;
__xdata int16_t f6_res;
__xdata int16_t f7_res;
__xdata int16_t vref_res;

__xdata	uint8_t  save_TESTBUS_SEL_HI0; 
__xdata	uint8_t  save_TESTBUS_SEL_LO0;

__xdata bool tag_EC_PASS;
__xdata int16_t dpher_offset;



__xdata int16_t temp_trainning;
__xdata int16_t temp_dfe, temp_boundary;
__xdata	uint8_t train_recording;

// -- DFE
__xdata uint8_t dfe_dis;
__xdata uint16_t cds;// not used
//__xdata uint8_t cdr_dfe_scheme_stage;
//__xdata uint32_t ec_valid_vote_num, ec_error_vote_num;
__xdata uint8_t ph_control_mode;
__xdata uint8_t /*center_phase, left_phase, right_phase,*/ adapted_phase;
//__xdata uint8_t left_eye_width, right_eye_width, effect_eye_width;
//__xdata uint8_t left_eye_height, right_eye_height;
//__xdata uint8_t left_search_run_index, right_search_run_index;
//__xdata bool    is_accu_phase_adapt, capturing_eye_diagram_en ;
//__xdata uint8_t phase_fine_adapt_run_index, phase_accu_adapt_run_index;
//__xdata uint8_t ofst_sav[10], ofst_mem[10];

// -- RPTA: all not used
//__xdata uint8_t PH_CONV_CNT, EOM_CONV_CNT;
__xdata uint8_t ph_conv_dir, eom_conv_dir;
//__xdata uint8_t EOM_ADAPT_STEP_SIZE;
//__xdata uint8_t PH_ADAPT_STEP_SIZE;
//__xdata uint16_t EOM_CONV_NUM;
//__xdata uint8_t PH_CONV_NUM;
__xdata int8_t norm_f1;
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

__xdata bool tx_init_bit;// meaningless
__xdata bool train_comp;
//__xdata bool link_train_mode;   //used register
__xdata bool uart_rx_busy;
//__xdata bool tx_sweep_preset_en; 
//__xdata bool tx_status_pcie_mode;
//__xdata bool tx_pipe4_en;
//__xdata bool pcie_usb_mode;
//__xdata bool do_phase_adapt;
//__xdata bool Phase_Adapt_Inited,detect_sat;
// -- Train Control Flags
__xdata bool ctrl_rx_only_mode; // indicate whether in RX training only mode
//__xdata bool ctrl_trx_train_done; // indicate whether training is done
__xdata bool ctrl_trx_train_pass; 
//__xdata bool ctrl_rx_train_done; 
//__xdata bool ctrl_tx_train_done; 
//__xdata bool ctrl_phase_train_done;
//__xdata bool gain_train_with_c;
//__xdata bool ctrl_cdr_phase_on;
//__xdata bool ctrl_rx_train_on; // turn on or off the RX training
//__xdata bool ctrl_tx_train_on; // turn on or off the TX training
//__xdata bool ctrl_trx_ffe_updated; // if the TX and RX FFE is updated after every TX or RX training
//__xdata bool skip_cdr;
__xdata bool ctrl_rx_train_mode; // now always 0 - control number of dfe_adaptation 

/*
__xdata bool tx_amp_is_max;
__xdata bool tx_amp_is_min;
__xdata bool tx_emph0_is_max;
__xdata bool tx_emph0_is_min;
__xdata bool tx_emph1_is_max;
__xdata bool tx_emph1_is_min;
__xdata bool tx_power_is_max;
__xdata bool tx_vma_is_min;
*/
__xdata uint8_t tx_amp_index;	// not used
__xdata uint8_t tx_emph1_index;// not used
__xdata uint8_t tx_emph0_index;// not used

//__xdata bool adapt_slicer_en, adapt_data_en;
//__xdata bool gain_train_with_sampler;

__xdata bool pre_sq_rd, save_pu_f1p_s_o, save_pu_f1p_s_e;
__xdata bool save_dfe_adapt_splr, save_dfe_adapt_e_en, save_dfe_adapt_o_en; //eom save // not used
__xdata bool save_eom_en_s, save_eom_en_d, save_dfe_en;
__xdata bool eom_ext_mode;

//DFE
__xdata Status_dfe_sm_t dfe_sm;
__xdata Status_dfe_2c_t dfe_2c;

//__xdata	uint16_t rpta_loop_cnt, tx_ctrl_stat;// not used
// signed!
__xdata	int16_t pa_sum_fn1,pa_sum_f1; 
__xdata	int8_t  phase_adapt_cnt;
//__xdata uint8_t dfe_cnt, dfe_max_cnt;// can be local
__xdata uint8_t dfe_err_loop_cnt, remote_status_time_out;// not used
__xdata uint8_t cdr_state;// meaningless
//__xdata uint8_t align90_pd_0_cnt, align90_pd_1_cnt, align90_track_cnt;
//__xdata bool first_time_ring_pll_cont;
//__xdata int8_t ring_size_counter; //ring_pll
//__xdata	uint8_t  save_TESTBUS_HI8BSEL_8BMODE, save_TESTBUS_SEL_HI0_lo, save_TESTBUS_SEL_HI0_hi; 
//__xdata	uint8_t  save_TESTBUS_SEL_ORDER0;
//__xdata	uint16_t save_TESTBUS_SEL_SWAP;
//__xdata uint16_t ringpll_dac_fine;

// -- UART
__xdata uint8_t uart_rx_in;
__xdata uint8_t uart_rx_out;
__xdata uint8_t uart_rx_buf[UART_RX_BUF_MAX];
__xdata SAVE_REG_STATE_DFE_OFF_t SAVE_REG_STATE_DFE_OFF; 
__xdata uint8_t timerMSB;
__xdata uint8_t save_dfe_PO_status;

__xdata uint16_t timer2_msb;
__xdata uint16_t save_pt_cnt_max_47_32;
__xdata uint32_t save_pt_cnt_max_31_0;
__xdata  volatile Timeout2_Timer_t timeout2_timers[MAX_TIMERS];// 8*8=64

__xdata  volatile uint8_t realtime_adapt_en;
__xdata  volatile uint8_t ctle_adaptation_running;
//for JL
__xdata  Status_Phase_Train_Adv_t ph_train_opt;//10
__xdata  Status_Phase_Train_Adv_t ph_train_snapshot;//10

__xdata  uint8_t sum_f0_tmb[NUM_PATH][NUM_DS];//8
__xdata  uint8_t sum_f0x_tmb[NUM_PATH][NUM_DS];//8
__xdata  uint8_t sum_f0a_tmb[NUM_PATH][NUM_DS];//8
__xdata  uint8_t sum_f0d_tmb[NUM_PATH][NUM_DS];//8
__xdata  uint8_t bit_print_debug;
__xdata  uint8_t bit_performing_phase_train_adv;

__xdata uint8_t force_slumber;
// IPCE_COMPHY-1557 flexible cdr_phase_min/max
__xdata uint8_t tag_CDR_PHASE_MIN;
__xdata uint8_t tag_CDR_PHASE_MAX;

__xdata int16_t temp_pre;

__xdata int16_t ctle_sum_metric;
__xdata uint8_t train_f0d_count;
__xdata uint16_t sum_train_f0d;
__xdata uint8_t force_calibration;
__xdata uint8_t train_step;
__xdata uint8_t vref_res_high_thres;
__xdata uint8_t reserved;
// 0x6fcc
__xdata volatile uint8_t dsp_debug[51];
//__xdata  uint16_t __at(0x6ffc) wtag = 0;
__xdata uint8_t end_var;

// cmn
// Any global that mcu_cmn reads should be here. Use a new name if each mcu needs a copy.

// Sync interface: each lane should have own byte to guarantee dedicated access
// And variable is better than reg for bit operation
__xdata uint8_t __at(0xe700) mcu_request_lane[4];
//~e703
__xdata uint8_t __at(0xe704) mcu_response_status[4];
//~e707
__xdata uint16_t __at(0xe708) mcu_response_data[4];
//~e70f
__xdata uint8_t __at(0xe710) mcuclk_mc;
__xdata uint8_t __at(0xe714) tsen_state;

