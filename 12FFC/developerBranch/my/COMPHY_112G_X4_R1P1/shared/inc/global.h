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
                uint8_t saved_ddc_dis_s_p2p4                    : 1;    /*      1     r/w   0*/
                uint8_t saved_ddc_pu_s_p2                       : 3;    /*      2     r/w   0*/
                uint8_t saved_ddc_pu_s_p4                       : 3;    /* [31:3]     r/w   0*/
                uint8_t saved_ddc_dis_s_p1p3                    : 1;    /* [31:3]     r/w   0*/
                uint8_t saved_ddc_pu_s_p1                       : 3;    /* [31:3]     r/w   0*/
                uint8_t saved_ddc_pu_s_p3                       : 3;    /* [31:3]     r/w   0*/
                uint8_t saved_ddc_cont_en                       : 1;    /* [31:3]     r/w   0*/
        } BF; 
        struct{uint8_t B0:8;uint8_t B1:8;}BT;
        uint16_t VAL;
} SAVE_REG_STATE_DFE_OFF_t;
extern __xdata SAVE_REG_STATE_DFE_OFF_t SAVE_REG_STATE_DFE_OFF;
#define saved_ddc_dfe_clk_off  SAVE_REG_STATE_DFE_OFF.BF.saved_ddc_dfe_clk_off
#define saved_ddc_dis_s_p2p4   SAVE_REG_STATE_DFE_OFF.BF.saved_ddc_dis_s_p2p4 
#define saved_ddc_pu_s_p2      SAVE_REG_STATE_DFE_OFF.BF.saved_ddc_pu_s_p2    
#define saved_ddc_pu_s_p4      SAVE_REG_STATE_DFE_OFF.BF.saved_ddc_pu_s_p4    
#define saved_ddc_dis_s_p1p3   SAVE_REG_STATE_DFE_OFF.BF.saved_ddc_dis_s_p1p3 
#define saved_ddc_pu_s_p1      SAVE_REG_STATE_DFE_OFF.BF.saved_ddc_pu_s_p1    
#define saved_ddc_pu_s_p3      SAVE_REG_STATE_DFE_OFF.BF.saved_ddc_pu_s_p3    
#define saved_ddc_cont_en      SAVE_REG_STATE_DFE_OFF.BF.saved_ddc_cont_en    


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
extern BIT rx_pll_rate, tx_pll_rate, use_ring_pll, lc_pll_used, ring_pll_enabled, ring_use_250m, force_exit_cal, no_pllspdchg; 
extern BIT cont_cal_on;
extern BIT pam4_en;
extern __xdata uint8_t timerMSB;
extern __xdata uint8_t save_dfe_PO_status;

//extern BIT c1_valid; 
//extern BIT c0_valid; 
//extern BIT cn1_valid; 
extern BIT tx_amp_is_max;
extern BIT tx_amp_is_min;
extern BIT tx_emph0_is_max;
extern BIT tx_emph0_is_min;
extern BIT tx_emph1_is_max;
extern BIT tx_emph1_is_min;
extern volatile BIT tx_remote_ctrl_on;
//extern BIT tx_power_is_max;
//extern BIT tx_vma_is_min;
extern BIT ctrl_cdr_phase_on, ctrl_rx_train_on, ctrl_tx_train_on;
extern BIT ctrl_rx_train_done, ctrl_tx_train_done, ctrl_trx_train_done;
extern BIT gain_train_with_c, ctrl_trx_ffe_updated;
extern __xdata uint8_t cds_call;
extern __xdata int8_t f1_sat_thresh, f2_sat_thresh;

//------------------------------------
extern __xdata uint8_t save_gray_code_en;
extern __xdata uint8_t save_train_tx_sel_bits_lane;
extern __xdata uint8_t save_train_rx_sel_bits_lane;

extern __xdata uint8_t save_tx_sel_bits_lane;
extern __xdata uint8_t save_rx_sel_bits_lane;

/////////////fixed cross-byte reg
//extern __xdata uint8_t save_pt_tx_pattern_sel_lane_5_0_b0;
//extern __xdata uint8_t save_pt_tx_pattern_sel_lane_5_0_b1;
extern __xdata uint8_t save_pt_tx_pattern_sel_lane_5_0;
extern __xdata uint8_t save_pt_en_lane; 				  
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
extern __xdata uint8_t new_gen_tx;
extern __xdata uint8_t new_gen_rx;
extern __xdata uint8_t	old_status;

//extern __xdata int16_t Tshrtr;

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
//#define cdr_dfe_scheme_stage	reg_MCU_DEBUG8_LANE_7_0
extern __xdata Status_dfe_sm_t dfe_sm;
extern __xdata Status_dfe_2c_t dfe_2c;
//extern __xdata uint32_t ec_valid_vote_num, ec_error_vote_num;
extern __xdata uint8_t ph_control_mode;

// RPTA
//extern __xdata uint8_t PH_CONV_CNT, EOM_CONV_CNT;
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
extern __xdata ttiu_ctrl_t rm_ctrl;
extern __xdata uint8_t stat;
extern __xdata uint8_t ofst_sav[], ofst_mem[];

extern __xdata uint8_t control_state;

//extern __xdata bool train_eye_check_pass;

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
extern __xdata uint8_t train_c;
extern __xdata uint8_t train_r;
extern __xdata uint8_t short_flag;
extern __xdata uint8_t opt_c;
extern __xdata uint8_t opt_r;
extern __xdata bool r2_adj_on;
extern __xdata int16_t cdr_midpoint_phase_os;
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

//extern __xdata	uint8_t  save_TESTBUS_SEL_HI0; 
//extern __xdata	uint8_t  save_TESTBUS_SEL_LO0;

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

extern __xdata bool tx_init_bit;
extern __xdata bool train_comp;
//extern __xdata bool link_train_mode;
extern __xdata bool uart_rx_busy;
//extern __xdata bool tx_sweep_preset_en; 
//extern __xdata bool tx_status_pcie_mode;
//extern __xdata bool pcie_usb_mode;
//extern __xdata bool do_phase_adapt;
//extern __xdata bool Phase_Adapt_Inited, detect_sat;
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
extern __xdata bool tx_amp_is_max;
extern __xdata bool tx_amp_is_min;
extern __xdata bool tx_emph0_is_max;
extern __xdata bool tx_emph0_is_min;
extern __xdata bool tx_emph1_is_max;
extern __xdata bool tx_emph1_is_min;
extern __xdata bool tx_power_is_max;
extern __xdata bool tx_vma_is_min;
*/
extern __xdata uint8_t tx_amp_index;	
extern __xdata uint8_t tx_emph1_index;
extern __xdata uint8_t tx_emph0_index;

//extern __xdata bool adapt_slicer_en, adapt_data_en;

extern __xdata bool pre_sq_rd, save_pu_f1p_s_o, save_pu_f1p_s_e;
extern __xdata bool save_dfe_adapt_splr, save_dfe_adapt_e_en, save_dfe_adapt_o_en; //eom save
extern __xdata bool save_eom_en_s, save_eom_en_d, save_dfe_en;
extern __xdata bool eom_ext_mode;

extern __xdata	uint16_t rpta_loop_cnt, tx_ctrl_stat ;
extern __xdata	int8_t  phase_adapt_cnt;
//extern __xdata uint8_t dfe_cnt, dfe_max_cnt;
extern __xdata uint8_t dfe_err_loop_cnt, cdr_state, remote_status_time_out;
//extern __xdata uint8_t align90_pd_0_cnt, align90_pd_1_cnt, align90_track_cnt;

//extern __xdata bool first_time_ring_pll_cont;
//extern __xdata int8_t ring_size_counter; //ring_pll
//extern __xdata	uint8_t  save_TESTBUS_HI8BSEL_8BMODE, save_TESTBUS_SEL_HI0_lo, save_TESTBUS_SEL_HI0_hi; 
//extern __xdata	uint8_t  save_TESTBUS_SEL_ORDER0;
//extern __xdata	uint16_t save_TESTBUS_SEL_SWAP;
//extern __xdata uint16_t ringpll_dac_fine;
 
#ifndef NEW_CDS
extern __code uint16_t cds_table[] ;  
#endif

extern __code uint8_t c1_default[] ; 
extern __code uint8_t c0_default[] ; 
extern __code uint8_t cn1_default[] ; 
extern __code uint8_t valid_coe_tb[];

//--------------------------------------
// speed table
__xdata __at(SPDTBL_XDAT_CMN_BASE + 0) uint8_t lc_speedtable[1][9][lc_size];
//__xdata __at(RING_SPDTBL_BASE + 0) uint8_t ring_speedtable[2][2][4][ring_size];
__xdata __at(PHY_MODE_CMN_BASE + 0) uint8_t phy_mode_cmn_table[cal_cmn_size];

__xdata __at(SPDTBL_XDAT_LANE_BASE + 0) uint8_t max_gen;
__xdata __at(SPDTBL_XDAT_LANE_BASE + 1) uint8_t min_gen;
__xdata __at(SPDTBL_XDAT_LANE_BASE + 4) uint8_t speedtable[24][gen_size];
__xdata __at(PHY_MODE_LANE_BASE + 0) uint8_t phy_mode_lane_table[cal_lane_size];

#if 0

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

#endif

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

typedef struct Timeout2_Timer_tag{
	uint32_t start_time;
	uint32_t duration;
}Timeout2_Timer_t;
#define MAX_TIMERS 8
// timer index
#define TRAINING_TIMER 0
#define DFE_POWER_SAVING_TIMER 1
#define CTLE_TIMER 2
#define PRBS_TIMER 3 // during training
#define PHASE_TIMER 4
#define TEST_TIMER 5

//#define timer2_msb ((volatile uint16_t)(*((volatile uint16_t *)0x6c00)))
extern __xdata uint16_t timer2_msb;
extern __xdata uint16_t save_pt_cnt_max_47_32;
extern __xdata uint32_t save_pt_cnt_max_31_0;
extern __xdata  volatile Timeout2_Timer_t timeout2_timers[MAX_TIMERS];// 8*8=64

// Clear at rx_init and training start; Set after training
extern __xdata  volatile uint8_t realtime_adapt_en;
extern __xdata  volatile uint8_t ctle_adaptation_running;
//for JL
extern __xdata  Status_Phase_Train_Adv_t ph_train_opt;//10
extern __xdata  uint8_t sum_f0_tmb[NUM_PATH][NUM_DS];//8
extern __xdata  uint8_t sum_f0x_tmb[NUM_PATH][NUM_DS];//8
extern __xdata  uint8_t sum_f0a_tmb[NUM_PATH][NUM_DS];//8
extern __xdata  uint8_t sum_f0d_tmb[NUM_PATH][NUM_DS];//8
extern __xdata  uint8_t bit_print_debug;
extern __xdata  uint8_t bit_performing_phase_train_adv;

#define comphy_int_in0 (reg_PIN_RESERVED_INPUT_TX_RD_LANE_15_0_b0 & 0x01)

#define speed_change_with_slumber_rd (lnx_SPEED_CHANGE_DEBUG3_LANE_7_0&0x1)
#define speed_change_with_analog_reset_rd (lnx_SPEED_CHANGE_DEBUG3_LANE_7_0>>1&0x1)
#define slumber_wakeup_with_speed_change_rd (lnx_SPEED_CHANGE_DEBUG3_LANE_7_0>>2&0x1)
//3 rsvd
#define no_tx_fir_reset_at_rx_init_rd (lnx_SPEED_CHANGE_DEBUG3_LANE_7_0>>4&0x1)
extern __xdata uint8_t force_slumber; // 1:used for speed_change_with_slumber_rd
#define dfe_backon_with_dc_vref_adj_rd (reg_MCU_DEBUGB_LANE_7_0&0x1)

// IPCE_COMPHY-1557 flexible cdr_phase_min/max
extern __xdata uint8_t tag_CDR_PHASE_MIN;
extern __xdata uint8_t tag_CDR_PHASE_MAX;

extern __xdata int16_t temp_pre;

// Do not use SUPPORT_CTLE_ADAPT to guard because training also uses some of the parameters
//#define CTLE_ADAPT_F0A
#define CTLE_ADAPT_F0B

#define tag_CTLE_EN_HR (lnx_MCU_RESERVEDX10_LANE_7_0&0x1)
#define tag_CTLE_CONFIG_EN_HR (lnx_MCU_RESERVEDX10_LANE_7_0>>1&0x1)
#define tag_CTLE_TEMP_STEP_HR (tag_CTLE_CONFIG_EN_HR?lnx_MCU_RESERVEDX11_LANE_7_0:0xa)
#define tag_CTLE_BUFFER_HR (tag_CTLE_CONFIG_EN_HR?lnx_MCU_RESERVEDX12_LANE_7_0:5)
#define tag_CTLE_TIMER_HR (tag_CTLE_CONFIG_EN_HR?lnx_MCU_RESERVEDX13_LANE_7_0:50) // ms
#define tag_CTLE_TEMP_CONST_HR (tag_CTLE_CONFIG_EN_HR?lnx_MCU_RESERVEDX14_LANE_7_0:2)

#define tag_CTLE_EN (lnx_TRAIN_DEBUG0_LANE_7_0&0x1)
#define tag_CTLE_CONFIG_EN (lnx_TRAIN_DEBUG0_LANE_7_0>>1&0x1)

#ifdef CTLE_ADAPT_F0A
#define tag_CTLE_STEP (tag_CTLE_CONFIG_EN?lnx_CTLE_DEBUG0_LANE_7_0:1)
#endif
#ifdef CTLE_ADAPT_F0B
// 20200302 Change to 3
#define tag_CTLE_F0B_DIVISOR (tag_CTLE_CONFIG_EN?(lnx_CTLE_DEBUG0_LANE_7_0>>4&0xf):4)//10)
#define tag_CTLE_STEP (tag_CTLE_CONFIG_EN?(lnx_CTLE_DEBUG0_LANE_7_0&0xf):8)
#endif
#define tag_CTLE_THRES (tag_CTLE_CONFIG_EN?min_ram(lnx_CTLE_DEBUG1_LANE_7_0,127):64)
#define tag_CTLE_TIMER (tag_CTLE_CONFIG_EN?lnx_CTLE_DEBUG2_LANE_7_0:50) // ms
#define ctle_vote lnx_CTLE_DEBUG3_LANE_7_0

#define tag_PHASE_EN_HR (lnx_MCU_RESERVEDX10_LANE_7_0>>2&0x1)

#define tag_NEVER_CTLE_BYPASS1 (lnx_TRAIN_DEBUG3_LANE_7_0>>6&0x1)

extern __xdata int16_t ctle_sum_metric;
#define MAX_TRAIN_F0D_COUNT 8
extern __xdata uint8_t train_f0d_count;
extern __xdata uint16_t sum_train_f0d;
extern __xdata uint8_t force_calibration;// 1:used for slumber_wakeup_with_speed_change_rd
extern __xdata uint8_t train_step;
extern __xdata uint8_t vref_res_high_thres;
// starting from 0x6fcc
extern __xdata volatile uint8_t dsp_debug[51];
//extern __xdata  uint16_t __at(0x6ffc) wtag;
extern __xdata uint8_t end_var;

#ifdef SUPPORT_COMPHY_INT_01
#define ctle_res1_sel_min lnx_MCU_RESERVEDX18_LANE_7_0
#define ctle_res1_sel_max lnx_MCU_RESERVEDX19_LANE_7_0
#define ctle_cap1_sel_min lnx_MCU_RESERVEDX1A_LANE_7_0
#define ctle_cap1_sel_max lnx_MCU_RESERVEDX1B_LANE_7_0
#define ctle_rl2_tune_min lnx_MCU_RESERVEDX1C_LANE_7_0
#define ctle_rl2_tune_max lnx_MCU_RESERVEDX1D_LANE_7_0
#define ctle_cap2_sel_min lnx_MCU_RESERVEDX1E_LANE_7_0
#define ctle_cap2_sel_max lnx_MCU_RESERVEDX1F_LANE_7_0
#endif

#define bypass_optimize_ckpx_tune_rd (lnx_TRAIN_DEBUGA_LANE_7_0>>1&0x1)

// cmn
// Sync interface: each lane should have own byte to guarantee dedicated access
extern __xdata uint8_t __at(0xe700) mcu_request_lane0;
extern __xdata uint8_t __at(0xe701) mcu_request_lane1;
extern __xdata uint8_t __at(0xe702) mcu_request_lane2;
extern __xdata uint8_t __at(0xe703) mcu_request_lane3;

extern __xdata uint8_t __at(0xe710) mcuclk_mc;

// cmx_MCU_DEBUG_CMN_8_7_0:
#define force_phase_offset_data_before_gain_train_rd (cmx_MCU_DEBUG_CMN_8_7_0&0x1)
#define force_de_setting_before_apt_rd (cmx_MCU_DEBUG_CMN_8_7_0>>1&0x1)

#define enable_vref_shift_adj_rd (cmx_MCU_DEBUG_CMN_8_7_0>>2&0x1)
#define vref_target_overwrite_en (cmx_MCU_DEBUG_CMN_8_7_0>>3&0x1)
#define vref_target_slope (vref_target_overwrite_en?cmx_MCU_DEBUG_CMN_11_7_0:3)
#define vref_target_intercept (vref_target_overwrite_en?cmx_MCU_DEBUG_CMN_12_7_0:48)

#define apt_parameter_sel_rd (cmx_MCU_DEBUG_CMN_8_7_0>>4&0x1)
#define apt_de_sweep_down_first_rd (cmx_MCU_DEBUG_CMN_8_7_0>>5&0x1)
#define apt_dd_sweep_down_first_rd (cmx_MCU_DEBUG_CMN_8_7_0>>6&0x1)

#define force_default_de_setting_112g_rd (cmx_MCU_DEBUG_CMN_16_7_0&0x1)
#define force_default_de_setting_56g_rd (cmx_MCU_DEBUG_CMN_16_7_0>>1&0x1)
#define default_de_setting_112g cmx_MCU_DEBUG_CMN_17_7_0
#define default_de_setting_56g cmx_MCU_DEBUG_CMN_18_7_0

#define ffe_rl2_tune_adjust_qr_en_rd (cmx_MCU_DEBUG_CMN_20_7_0&0x1)
#define phase_train_qr_en_rd (cmx_MCU_DEBUG_CMN_20_7_0>>1&0x1)

#define slumber_wakeup_delay (cmx_MCU_DEBUG_CMN_21_7_0)

#define short_channel_r_index_rd (cmx_MCU_DEBUG_CMN_22_7_0&0xf)
#define always_sweep_r_rd (cmx_MCU_DEBUG_CMN_22_7_0>>4&0x1)
#define short_channel_change_step_vref_rd (cmx_MCU_DEBUG_CMN_22_7_0>>5&0x1)

#endif

