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

typedef union {
        struct {
                uint8_t saved_ddc_dfe_clk_off                   : 1;    /*      0     r/w   0*/
                uint8_t saved_ddc_pu_s_e                        : 3;    /*      2     r/w   0*/
                uint8_t saved_ddc_pu_s_o                        : 3;    /* [31:3]     r/w   0*/
                uint8_t saved_ddc_cont_en                       : 1;    /* [31:3]     r/w   0*/
        } BF; 
        struct{uint8_t B0:8;uint8_t B1:8;}BT;
        uint16_t VAL;
} SAVE_REG_STATE_DFE_OFF_t;
extern __xdata SAVE_REG_STATE_DFE_OFF_t SAVE_REG_STATE_DFE_OFF;
#define saved_ddc_dfe_clk_off  SAVE_REG_STATE_DFE_OFF.BF.saved_ddc_dfe_clk_off
#define saved_ddc_pu_s_e       SAVE_REG_STATE_DFE_OFF.BF.saved_ddc_pu_s_e    
#define saved_ddc_pu_s_o       SAVE_REG_STATE_DFE_OFF.BF.saved_ddc_pu_s_o    
#define saved_ddc_cont_en      SAVE_REG_STATE_DFE_OFF.BF.saved_ddc_cont_en    


//------------------------------------
// bit 0x20 ~ 0x2F
extern BIT int_pu_rx, int_pu_tx;
extern BIT sync_check;
extern volatile BIT timeout, timeout2;
extern volatile BIT do_wake;
extern volatile BIT do_train;
extern volatile BIT do_rxtrain;
extern volatile BIT do_rxinit;
extern volatile BIT tsen_check;
//extern BIT adapt_slicer_en, adapt_data_en;
extern BIT cont_cal_on;

extern __xdata uint8_t timerMSB;
extern __xdata uint8_t save_dfe_PO_status;

extern BIT ctrl_cdr_phase_on, ctrl_rx_train_on, ctrl_tx_train_on;
extern BIT ctrl_rx_train_done, ctrl_tx_train_done, ctrl_trx_train_done;
extern BIT gain_train_with_c, ctrl_trx_ffe_updated;
extern BIT pam2_en, tx_pam2_en;

extern __xdata uint8_t cds_call, cds_tb_inx;
extern __xdata int8_t f1_sat_thresh, f2_sat_thresh;

//------------------------------------
extern __xdata uint8_t save_pt_tx_pattern_sel_lane_5_0;
extern __xdata uint8_t save_pt_tx_en_lane; 				  
extern __xdata uint8_t save_pt_rx_en_lane; 				  
extern __xdata uint8_t save_pt_tx_clk_en_lane;   
extern __xdata uint8_t save_local_ana_tx2rx_lpbk_en_lane;
//extern __xdata uint8_t save_path_disable_edge; 

extern __xdata uint8_t gen_tx;
extern __xdata uint8_t gen_rx;
//extern __xdata uint8_t gen_pll_rate;
//extern __xdata uint8_t rx_pll_rate;
//extern __xdata uint8_t tx_pll_rate;
extern __xdata uint8_t new_gen_tx;
extern __xdata uint8_t new_gen_rx;
extern __xdata uint8_t old_status;
extern __xdata uint8_t mcuclk_mc;
//extern __xdata uint8_t ref_clk;

extern __xdata int16_t Tshrtr;
extern __xdata uint8_t llpnum;
extern __xdata uint8_t lccap_msb_index, lccap_lsb_index;

extern __xdata uint8_t rs_pllcal_first_time, ts_pllcal_first_time;
//extern __xdata uint8_t ringpll_step_size_cnt;
extern __xdata uint8_t rs_tempc_step_state, ts_tempc_step_state; //pll_temp_cal
//#define ts_tempc_step_state   reg_MCU_DEBUGE_LANE_7_0 
extern __xdata uint8_t rs_tempc_dir, ts_tempc_dir; //pll_temp_cal
//extern __xdata uint8_t *SIGN_POS, *NEG, *SAMPLER_CAL_SAVE, *SAMPLER_TRAIN_SAVE; //sampler cal

extern __xdata uint8_t dfe_dis;
extern __xdata uint16_t cds;
//extern __xdata uint8_t cdr_dfe_scheme_stage;
#define cdr_dfe_scheme_stage	reg_MCU_DEBUG8_LANE_7_0
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

extern __xdata uint8_t ofst_sav[], ofst_mem[];

extern __xdata uint8_t dfe_res_f0a_low_thres_01;
extern __xdata uint8_t dfe_res_f0a_low_thres_0; 
extern __xdata uint8_t dfe_res_f0a_low_thres_1; 
extern __xdata uint8_t dfe_res_f0a_low_thres_2; 
extern __xdata uint8_t dfe_res_f0a_low_thres_3; 
extern __xdata uint8_t dfe_res_f0a_high_thres;

//extern __xdata uint8_t tx_num_tx_preset;
//extern __xdata uint8_t tx_preset_table[];
//extern __xdata uint8_t train_g0_index;
//extern __xdata uint8_t train_g1_index;
//extern __xdata uint8_t train_gn1_index;
extern __xdata uint8_t short_flag;
extern __xdata bool r2_adj_on;
//extern __xdata int16_t sumf_boost_target_c;
extern __xdata int8_t cdr_midpoint_phase_os;
//extern __xdata uint8_t opt_g0_index; 
//extern __xdata uint8_t opt_g1_index; 
//extern __xdata uint8_t opt_gn1_index;

extern __xdata int16_t temp_trainning;
extern __xdata int16_t temp_dfe, temp_boundary;
extern __xdata	uint8_t train_recording;
extern __xdata	uint8_t f0_res_min, f1_res_min, f2_res_min, f34_res_min, f567_res_min,vref_res_min, vrefshift_min;


//-- cds
extern __xdata uint16_t sum_f0;
extern __xdata uint16_t sum_f0a;
extern __xdata uint16_t sum_f0d;
extern __xdata uint16_t sum_f0k;
extern __xdata uint16_t sum_f0b;
extern __xdata uint16_t sum_f0x;
extern __xdata uint16_t sum_f0d_left;
extern __xdata uint16_t sum_f0d_right;
#if _DBG_F0X
extern __xdata uint16_t sum_f0xp1;
extern __xdata uint16_t sum_f0xn3;
extern __xdata uint16_t sum_f0xn4;
extern __xdata uint16_t sum_f0xn5;
#endif

/*extern __xdata int16_t sum_f1_data, sum_f1_slicer;
extern __xdata int16_t sum_f2_data, sum_f2_slicer;
extern __xdata int16_t sum_f3_data, sum_f3_slicer;
extern __xdata int16_t sum_f4_data, sum_f4_slicer;
*/
extern __xdata int16_t sum_f[8];

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
//extern __xdata bool skip_cdr;
extern __xdata bool ctrl_rx_train_mode;

//extern __xdata uint8_t tx_amp_index;	
//extern __xdata uint8_t tx_emph1_index;
//extern __xdata uint8_t tx_emph0_index;

extern __xdata bool rx_ctle_adapt_en, rx_phase_adapt_en;
extern __xdata uint8_t	f0b_vote_cnt, pa_lpcnt;
extern __xdata uint8_t	norm_f0b_his_thrs, f0b_low_thrs, f0b_high_thrs;
extern __xdata int16_t sum_f0b_diff, sum_f1;
extern __xdata int16_t pa_sum_fn1, pa_sum_f1;  

extern __xdata bool rx_rl2_adapt_en;
extern __xdata int8_t pre_temp;


extern __xdata bool pre_sq_rd, save_pu_f1p_s_o, save_pu_f1p_s_e, save_dfe_adapt_splr, save_dfe_adapt_e_en, save_dfe_adapt_o_en; //eom save
extern __xdata bool save_eom_en_s, save_eom_en_d, save_dfe_en;
extern __xdata bool eom_ext_mode;
extern __xdata uint8_t save_pu_smplr_s_e, save_pu_smplr_s_o;

extern __xdata	uint16_t rpta_loop_cnt, tx_ctrl_stat ;
extern __xdata	int8_t  rpta_vote;
extern __xdata uint8_t dfe_cnt, dfe_max_cnt, dfe_err_loop_cnt, cdr_state, remote_status_time_out;
//extern __xdata uint8_t align90_pd_0_cnt, align90_pd_1_cnt, align90_track_cnt;


extern __xdata bool rx_init_done;
extern __xdata uint16_t Tpfreq0; 

extern __xdata  uint8_t save_gray_code_en;

extern __xdata  uint8_t train_db_step;
extern __xdata  int8_t cur_ph_dat;

extern __xdata  uint8_t save_gray_code_en;
extern __xdata  uint8_t train_db_step;

extern uint16_t tick; //us
extern uint16_t tick_1ms; //ms 
extern uint8_t tsec; 


extern __code uint32_t cds_table[] ;  

extern __code uint8_t c1_default[] ; 
extern __code uint8_t c0_default[] ; 
extern __code uint8_t cn1_default[] ; 
extern __code uint8_t valid_coe_tb[];


__xdata __at(0xe668) uint8_t proc_thr_tb[10][3];

#define PHY_CAL_SAVE_BASE_LANE 0x6100

#define caloft_ts_lccap_msb_index_rate0 			0
#define caloft_ts_lccap_lsb_index_rate0				(caloft_ts_lccap_msb_index_rate0 + 3)
#define caloft_ts_lccap_ulsb_rate0					(caloft_ts_lccap_lsb_index_rate0 + 3)
#define caloft_ts_pllamp_rate0						(caloft_ts_lccap_ulsb_rate0 + 3)
#define caloft_ts_plldcc_result_rate0				(caloft_ts_pllamp_rate0 + 3)
#define caloft_ts_pllvdda_fbdiv_result_rate0		(caloft_ts_plldcc_result_rate0 + 3)
#define caloft_ts_pllvdda_intp_result_rate0			(caloft_ts_pllvdda_fbdiv_result_rate0 + 3)
#define caloft_ts_pllvdda_pfd_result_rate0			(caloft_ts_pllvdda_intp_result_rate0 + 3)
// --
#define caloft_rs_lccap_msb_index_rate0 			(caloft_ts_pllvdda_pfd_result_rate0 + 3)
#define caloft_rs_lccap_lsb_index_rate0				(caloft_rs_lccap_msb_index_rate0 + 3)
#define caloft_rs_lccap_ulsb_rate0					(caloft_rs_lccap_lsb_index_rate0 + 3)
#define caloft_rs_pllamp_rate0						(caloft_rs_lccap_ulsb_rate0 + 3)
#define caloft_rs_plldcc_result_rate0				(caloft_rs_pllamp_rate0 + 3)
#define caloft_rs_pllvdda_fbdiv_result_rate0		(caloft_rs_plldcc_result_rate0 + 3)
#define caloft_rs_pllvdda_intp_result_rate0			(caloft_rs_pllvdda_fbdiv_result_rate0 + 3)
#define caloft_rs_pllvdda_pfd_result_rate0			(caloft_rs_pllvdda_intp_result_rate0 + 3)

// --
#define caloft_tx_dcc1_g0					 		(caloft_rs_pllvdda_pfd_result_rate0 + 5)	
#define caloft_tx_dcc2_g0                    		(caloft_tx_dcc1_g0 + 5)
#define caloft_tx_dcc4_msb_g0                		(caloft_tx_dcc2_g0 + 5)
#define caloft_tx_dcc4_lsb_g0                		(caloft_tx_dcc4_msb_g0 + 5)
		
#define caloft_tx_imp_iccp_g0                		(caloft_tx_dcc4_lsb_g0 + 5)
#define caloft_tx_imp_iccn_g0	             		(caloft_tx_imp_iccp_g0 + 5)

#define caloft_rx_e2c_dcc_g0        				(caloft_tx_imp_iccn_g0 + 5)
#define caloft_rx_dll_msb_g0   						(caloft_rx_e2c_dcc_g0 + 5)
#define caloft_rx_dll_lsb_g0   						(caloft_rx_dll_msb_g0 + 5)
#define caloft_rx_pi_dcc_g0   						(caloft_rx_dll_lsb_g0 + 5)
#define caloft_rx_align90_msb_g0   					(caloft_rx_pi_dcc_g0 + 5)
#define caloft_rx_align90_lsb_g0   					(caloft_rx_align90_msb_g0 + 5)
#define caloft_rx_data_dcc_msb_g0   				(caloft_rx_align90_lsb_g0 + 5)
#define caloft_rx_data_dcc_lsb_g0   				(caloft_rx_data_dcc_msb_g0 + 5)
#define caloft_rx_edge_dcc_msb_g0   				(caloft_rx_data_dcc_lsb_g0 + 5)
#define caloft_rx_edge_dcc_lsb_g0   				(caloft_rx_edge_dcc_msb_g0 + 5)

#define caloft_rx_eom_dll_msb_g0 					(caloft_rx_edge_dcc_lsb_g0 + 5)
#define caloft_rx_eom_dll_lsb_g0 					(caloft_rx_eom_dll_msb_g0 + 5) 
#define caloft_rx_eom_pi_msb_g0                     (caloft_rx_eom_dll_lsb_g0 + 5)
#define caloft_rx_eom_pi_lsb_g0                     (caloft_rx_eom_pi_msb_g0 + 5) 
#define caloft_rx_eom_pi_dcc_g0                     (caloft_rx_eom_pi_lsb_g0 + 5)   

// --

__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_ts_lccap_msb_index_rate0) 	 	uint8_t lnx_cal_ts_lccap_msb[3];
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_ts_lccap_lsb_index_rate0) 	 	uint8_t lnx_cal_ts_lccap_lsb[3];
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_ts_lccap_ulsb_rate0) 	 		uint8_t lnx_cal_ts_lccap_ulsb[3];
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_ts_pllamp_rate0) 	 			uint8_t lnx_cal_ts_pllamp[3]; 
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_ts_plldcc_result_rate0) 	 	uint8_t lnx_cal_ts_plldcc[3]; 
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_ts_pllvdda_fbdiv_result_rate0) uint8_t lnx_cal_ts_pllvdda_fbdiv[3]; 
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_ts_pllvdda_intp_result_rate0) 	uint8_t lnx_cal_ts_pllvdda_intp[3]; 
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_ts_pllvdda_pfd_result_rate0) 	uint8_t lnx_cal_ts_pllvdda_pfd[3]; 

__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_rs_lccap_msb_index_rate0) 	 	uint8_t lnx_cal_rs_lccap_msb[3];
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_rs_lccap_lsb_index_rate0) 	 	uint8_t lnx_cal_rs_lccap_lsb[3];
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_rs_lccap_ulsb_rate0) 	 		uint8_t lnx_cal_rs_lccap_ulsb[3];
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_rs_pllamp_rate0) 	 			uint8_t lnx_cal_rs_pllamp[3]; 
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_rs_plldcc_result_rate0) 	 	uint8_t lnx_cal_rs_plldcc[3]; 
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_rs_pllvdda_fbdiv_result_rate0) uint8_t lnx_cal_rs_pllvdda_fbdiv[3]; 
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_rs_pllvdda_intp_result_rate0) 	uint8_t lnx_cal_rs_pllvdda_intp[3]; 
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_rs_pllvdda_pfd_result_rate0) 	uint8_t lnx_cal_rs_pllvdda_pfd[3]; 

__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_tx_dcc1_g0)        			uint8_t lnx_cal_tx_dcc1[5];
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_tx_dcc2_g0)       				uint8_t lnx_cal_tx_dcc2[5];
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_tx_dcc4_msb_g0)    			uint8_t lnx_cal_tx_dcc4_msb[5];
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_tx_dcc4_lsb_g0)        		uint8_t lnx_cal_tx_dcc4_lsb[5];

__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_tx_imp_iccp_g0)        		uint8_t lnx_cal_tx_imp_iccp[5];
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_tx_imp_iccn_g0)	       		uint8_t lnx_cal_tx_imp_iccn[5];

__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_rx_e2c_dcc_g0)        			uint8_t lnx_cal_rx_e2c_dcc[5];
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_rx_dll_msb_g0)   				uint8_t lnx_cal_rx_dll_msb[5];
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_rx_dll_lsb_g0)   				uint8_t lnx_cal_rx_dll_lsb[5];
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_rx_pi_dcc_g0)   				uint8_t lnx_cal_rx_pi_dcc[5];
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_rx_align90_msb_g0)   			uint8_t lnx_cal_rx_align90_msb[5];
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_rx_align90_lsb_g0)   			uint8_t lnx_cal_rx_align90_lsb[5];
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_rx_data_dcc_msb_g0)   			uint8_t lnx_cal_rx_data_dcc_msb[5];
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_rx_data_dcc_lsb_g0)   			uint8_t lnx_cal_rx_data_dcc_lsb[5];
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_rx_edge_dcc_msb_g0)   			uint8_t lnx_cal_rx_edge_dcc_msb[5];
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_rx_edge_dcc_lsb_g0)   			uint8_t lnx_cal_rx_edge_dcc_lsb[5];

__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_rx_eom_dll_msb_g0) 			uint8_t lnx_cal_rx_eom_dll_msb[5];
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_rx_eom_dll_lsb_g0) 			uint8_t lnx_cal_rx_eom_dll_lsb[5];
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_rx_eom_pi_msb_g0)   			uint8_t lnx_cal_rx_eom_pi_msb[5];
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_rx_eom_pi_lsb_g0)   			uint8_t lnx_cal_rx_eom_pi_lsb[5];
__xdata __at(PHY_CAL_SAVE_BASE_LANE + caloft_rx_eom_pi_dcc_g0)   			uint8_t lnx_cal_rx_eom_pi_dcc[5];


#define TRAIN_DB_MAX	35
#define TRAIN_DB_BASE	0x6800
__xdata __at(TRAIN_DB_BASE) Status_Train_t train_db[TRAIN_DB_MAX];	 

__xdata __at(0x6200) Status_Train_t optrcd;	 


#define ctle_vote lnx_CTLE_DEBUG3_LANE_7_0
//#define timer2_msb ((volatile uint16_t)(*((volatile uint16_t *)0x6c00)))
__xdata __at(0x6f00) volatile uint16_t timer2_msb;
__xdata __at(0x6f04) volatile uint16_t global_debug[16];// 2*16=32
#define ctle_adaptation_running global_debug[0]

#define save_pt_cnt_max_47_32 global_debug[1]
// 2&3
#define save_pt_cnt_max_31_0 (*((uint32_t*)&global_debug[2]))

typedef struct Timeout2_Timer_tag{
	uint32_t start_time;
	uint32_t duration;
}Timeout2_Timer_t;
// to 6f24
#define MAX_TIMERS 10
// timer index
#define TRAINING_TIMER 0
#define DFE_POWER_SAVING_TIMER 1
#define CTLE_TIMER 2
#define PRBS_TIMER 3
#define PHASE_TIMER 4
#define CTLE_TIMER_2 5
#define RL2_TIMER 6
#define TSTEMPC	  7
#define RSTEMPC	  8

__xdata __at(0x6f24) volatile Timeout2_Timer_t timeout2_timers[MAX_TIMERS];// 8*8=64
// to 6f64

//----------------------------------
//ana reserve register
typedef union {
	struct {
		uint8_t CTLE_CAP1_SEL_EXTRA_LANE_2_0        : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_0                        	: 5;	/*  [7:3]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RSVD_REG1_MAP_t;
__xdata __at( 0x1010 ) volatile ANA_RSVD_REG1_MAP_t ANA_RSVD_REG1_MAP;
#define reg_CTLE_CAP1_SEL_EXTRA_LANE_2_0  ANA_RSVD_REG1_MAP.BF.CTLE_CAP1_SEL_EXTRA_LANE_2_0


	
extern __code const uint8_t pcie_pll_rate_tb[];	

#endif
