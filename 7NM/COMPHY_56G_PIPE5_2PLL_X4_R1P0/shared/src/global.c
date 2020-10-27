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
// bit 0x20 ~ 0x2F
BIT int_pu_rx, int_pu_tx;
BIT sync_check;
volatile BIT timeout, timeout2;
volatile BIT do_wake;
volatile BIT do_train;
volatile BIT do_rxtrain;
volatile BIT do_rxinit;
volatile BIT tsen_check;
BIT cont_cal_on;

BIT /*ctrl_cdr_phase_on,*/ ctrl_rx_train_on, ctrl_tx_train_on;
BIT ctrl_rx_train_done, ctrl_tx_train_done, ctrl_trx_train_done;
BIT gain_train_with_c, ctrl_trx_ffe_updated;
BIT pam2_en, tx_pam2_en;
//__xdata uint8_t cds_call, cds_tb_inx;
__xdata int8_t f1_sat_thresh, f2_sat_thresh;
//--------------------------------------
// xdata global variables 
//--------------------------------------
__xdata uint8_t save_pt_tx_pattern_sel_lane_5_0;
__xdata uint8_t save_pt_tx_en_lane; 				  
__xdata uint8_t save_pt_rx_en_lane; 				  
__xdata uint8_t save_pt_tx_clk_en_lane;       
__xdata uint8_t save_local_ana_tx2rx_lpbk_en_lane;     

// ------------------------------------- 
// -- main
__xdata uint8_t	old_status;
__xdata uint8_t	mcuclk_mc;

// -- Speed Change
__xdata uint8_t gen_tx;
__xdata uint8_t gen_rx;
__xdata uint8_t new_gen_tx;
__xdata uint8_t new_gen_rx;

__xdata int16_t Tshrtr;
__xdata uint8_t llpnum;
__xdata uint8_t lccap_msb_index, lccap_lsb_index;
// -- Power Ctrl

// -- Calibration 
__xdata uint8_t rs_pllcal_first_time, ts_pllcal_first_time;
__xdata uint8_t rs_tempc_step_state, ts_tempc_step_state;
__xdata uint8_t rs_tempc_dir, ts_tempc_dir; //pll_temp_cal
//__xdata uint8_t *SIGN_POS, *NEG, *SAMPLER_CAL_SAVE, *SAMPLER_TRAIN_SAVE; //sampler cal
__xdata int16_t tsen_dat_cal, tsen_dat_train, tsen_dat_normal;
__xdata uint8_t vdd_cnt, dcc_cont, align90_tracking_cnt, dfe_norm_cnt;
__xdata int8_t f1p_e_old, f1p_o_old;

// -- Train
__xdata Status_Train_t train;
__xdata Status_Train_t opt;

__xdata Status_TX_t tx;
__xdata Status_RX_t rx;
__xdata Status_CDR_t cdr;
__xdata uint8_t ctrl_num_blind_loop, ctrl_num_big_loop;

__xdata uint8_t dfe_res_f0a_low_thres_01;
__xdata uint8_t dfe_res_f0a_low_thres_0;
__xdata uint8_t dfe_res_f0a_low_thres_1;
__xdata uint8_t dfe_res_f0a_low_thres_2; 
__xdata uint8_t dfe_res_f0a_low_thres_3; 
__xdata uint8_t dfe_res_f0a_high_thres;

__xdata uint8_t short_flag;
__xdata bool r2_adj_on;
__xdata int16_t sumf_boost_target_c;
__xdata int8_t cdr_midpoint_phase_os;

//-- cds
__xdata uint16_t f0a_max_data, f0a_max_slicer;

__xdata uint16_t sum_f0;
__xdata uint16_t sum_f0a;
__xdata uint16_t sum_f0a_max;
__xdata uint16_t sum_f0d;
__xdata uint16_t sum_f0k;
__xdata uint16_t sum_f0b;
__xdata uint16_t sum_f0x;
__xdata uint16_t sum_f0d_left;
__xdata uint16_t sum_f0d_right;
#if _DBG_F0X
__xdata uint16_t sum_f0xp1;
__xdata uint16_t sum_f0xn3;
__xdata uint16_t sum_f0xn4;
__xdata uint16_t sum_f0xn5;
#endif

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

__xdata bool tag_EC_PASS;
__xdata int16_t dpher_offset;



__xdata int16_t temp_trainning;
__xdata int16_t temp_dfe, temp_boundary;
__xdata	uint8_t train_recording;
__xdata	uint8_t f0_res_min, f1_res_min, f2_res_min, f34_res_min, f567_res_min,vref_res_min, vrefshift_min;

// -- DFE
__xdata uint8_t dfe_dis;
__xdata uint16_t cds;
//__xdata uint8_t ph_control_mode;
__xdata uint8_t /*center_phase, left_phase, right_phase,*/ adapted_phase;

// -- RPTA
__xdata uint8_t PH_CONV_CNT, EOM_CONV_CNT;
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

__xdata int8_t train_cds;
//__xdata bool link_train_mode;   //used register
//__xdata bool tx_sweep_preset_en; 
//__xdata bool tx_status_pcie_mode;
//__xdata bool tx_pipe4_en;
//__xdata bool tx_adapt_g0_en;
//__xdata bool tx_adapt_gn1_en;
//__xdata bool tx_adapt_g1_en;   
//__xdata bool pcie_usb_mode;
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
//__xdata bool ctrl_cdr_phase_on;
//__xdata bool ctrl_rx_train_on; // turn on or off the RX training
//__xdata bool ctrl_tx_train_on; // turn on or off the TX training
//__xdata bool skip_cdr;
__xdata bool ctrl_rx_train_mode; //not used, always 0 - control number of dfe_adaptation 

/*
__xdata bool tx_amp_is_max;
__xdata bool tx_amp_is_min;
__xdata bool tx_emph0_is_max;
__xdata bool tx_emph0_is_min;
__xdata bool tx_emph1_is_max;
__xdata bool tx_emph1_is_min;
__xdata bool tx_power_is_max;
__xdata bool tx_vma_is_min;
__xdata uint8_t tx_amp_index;	
__xdata uint8_t tx_emph1_index;
__xdata uint8_t tx_emph0_index;
*/

//__xdata bool gain_train_with_sampler;

__xdata bool pre_sq_rd, save_pu_f1p_s_o, save_pu_f1p_s_e, save_dfe_adapt_splr, save_dfe_adapt_e_en, save_dfe_adapt_o_en; //eom save
__xdata bool save_eom_en_s, save_eom_en_d, save_dfe_en;
__xdata bool eom_ext_mode;
__xdata uint8_t save_pu_smplr_s_e, save_pu_smplr_s_o;

__xdata	uint16_t rpta_loop_cnt, tx_ctrl_stat;
__xdata	int8_t  rpta_vote;
__xdata uint8_t dfe_cnt, dfe_max_cnt, dfe_err_loop_cnt, emote_status_time_out;

__xdata bool rx_init_done;
__xdata uint16_t Tpfreq0; 

__xdata bool rx_ctle_adapt_en, rx_phase_adapt_en;
__xdata uint8_t	f0b_vote_cnt, pa_lpcnt;
__xdata uint8_t	norm_f0b_his_thrs, f0b_low_thrs, f0b_high_thrs;
__xdata int16_t sum_f0b_diff, sum_f1;
__xdata int16_t pa_sum_fn1, pa_sum_f1;  

__xdata bool rx_rl2_adapt_en;
__xdata int8_t pre_temp;


// -- UART
bool __xdata uart_rx_busy;
uint8_t __xdata uart_rx_in;
uint8_t __xdata uart_rx_out;
uint8_t __xdata uart_rx_buf[UART_RX_BUF_MAX];

//
__xdata SAVE_REG_STATE_DFE_OFF_t SAVE_REG_STATE_DFE_OFF; 
__xdata uint8_t timerMSB;
__xdata uint8_t save_dfe_PO_status;

__xdata  uint8_t save_gray_code_en;
__xdata  uint8_t train_db_step;
__xdata  int8_t cur_ph_dat;

//
uint16_t tick; //us
uint16_t tick_1ms; //ms 
uint8_t tsec; //sec

uint32_t cal_time_save, cal_time_save1;


