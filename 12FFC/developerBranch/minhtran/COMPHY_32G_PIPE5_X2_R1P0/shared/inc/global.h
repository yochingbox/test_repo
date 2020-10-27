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
extern BIT rx_pll_rate, tx_pll_rate, use_ring_pll, lc_pll_used, ring_pll_enabled, ring_use_250m, force_exit_cal, no_pllspdchg; 
extern BIT cont_cal_on;

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
extern BIT ctrl_rx_train_done, ctrl_tx_train_done, ctrl_trx_train_done_;
extern BIT gain_train_with_c, ctrl_trx_ffe_updated;
extern BIT tx_pipe4_en;
extern BIT train_short_mode;
//------------------------------------
extern __xdata uint8_t save_pt_tx_pattern_sel_lane_5_0_b0;
extern __xdata uint8_t save_pt_tx_pattern_sel_lane_5_0_b1;
extern __xdata uint8_t save_pt_en_lane;
extern __xdata uint8_t save_pt_tx_clk_en_lane;   
extern __xdata uint8_t save_local_ana_tx2rx_lpbk_en_lane;      
extern __xdata uint8_t txclk_vdd_step_cnt;
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
extern __xdata uint8_t align90_step_cnt;     

extern __xdata uint8_t gen_tx;
extern __xdata uint8_t gen_rx;
//extern __xdata uint8_t gen_pll;
extern __xdata uint8_t new_gen_tx;
extern __xdata uint8_t new_gen_rx;
extern __xdata uint8_t old_status;

extern __xdata bool pwrsq_on;

extern __xdata uint8_t pllcal_first_time;
extern __xdata uint8_t ringpll_step_size_cnt;
extern __xdata uint8_t tempc_step_state; //pll_temp_cal
extern __xdata uint8_t tempc_dir; //pll_temp_cal
extern __xdata uint8_t *SIGN_POS, *NEG, *SAMPLER_CAL_SAVE, *SAMPLER_TRAIN_SAVE, *SAMPLER_CAL_SM_SAVE; //sampler cal

extern __xdata uint8_t dfe_dis;
//extern __xdata uint16_t cds_tb;
//extern __xdata uint8_t cdr_dfe_scheme_stage;
#define cdr_dfe_scheme_stage	reg_MCU_DEBUG8_LANE_7_0
//extern __xdata Status_dfe_sm_t dfe_sm;
extern __xdata Status_dfe_2c_t dfe_2c;
//extern __xdata uint32_t ec_valid_vote_num, ec_error_vote_num;
extern __xdata uint8_t ph_control_mode;
extern __xdata uint8_t /*center_phase, left_phase, right_phase,*/ adapted_phase;
extern __xdata Status_Train_t train;
extern __xdata Status_Train_t opt;
extern __xdata Status_TX_t tx;
extern __xdata Status_RX_t rx;
extern __xdata Status_CDR_t cdr;
extern __xdata uint8_t ctrl_num_blind_loop, ctrl_num_big_loop;
extern __xdata int16_t tsen_dat_cal, tsen_dat_train, tsen_dat_normal;
extern __xdata uint8_t dfe_res_f0a_low_thres_01;
extern __xdata uint8_t dfe_res_f0a_low_thres_2; 
extern __xdata uint8_t dfe_res_f0a_low_thres_3; 
extern __xdata uint8_t dfe_res_f0a_high_thres;

extern __xdata uint8_t tx_num_tx_preset;
extern __xdata uint8_t train_c;
extern __xdata uint8_t train_r;
extern __xdata uint8_t opt_c;
extern __xdata uint8_t opt_r;
extern __xdata bool r2_adj_on;
extern __xdata int8_t sumf_boost_target_c, cdr_midpoint_phase_os;
extern __xdata bool train_timer_int;

//-- cds
//extern __xdata Status_CDS_t cds;
extern __xdata Status_SUM_CDS_t sum;

extern __xdata uint8_t ctrl_max_dfe_adapt_shift;
extern __xdata uint8_t half_shift;

// For RPLL, there are CMN and LANE for the TESTBUS_SEL_HI/LOW
//extern __xdata	uint8_t  save_TESTBUS_SEL_HI0; 
//extern __xdata	uint8_t  save_TESTBUS_SEL_LO0;

extern __xdata uint8_t uart_rx_in;
extern __xdata uint8_t uart_rx_out;
extern __xdata uint8_t uart_rx_buf[];

extern __xdata uint8_t cal_lccap_msb_index[];
extern __xdata uint8_t cal_align90_gm_bin[];
extern __xdata uint8_t gm_bin, dac, dm, gm; //current align90
extern __xdata uint8_t vdd_cnt, dcc_cont, dfe_norm_cnt;
extern __xdata int8_t f1p_e_old, f1p_o_old;
extern __xdata uint8_t rxdll_temp_a_lane, rxdll_temp_b_lane;
extern __xdata uint8_t PH_CONV_CNT, EOM_CONV_CNT;
extern __xdata uint8_t ph_conv_dir, eom_conv_dir;
extern __xdata int8_t norm_f1, norm_ofst;
extern __xdata int8_t norm_eom_ph_os_l, norm_eom_ph_os_c, norm_eom_ph_os_r;
extern __xdata int16_t phase_vote_acc;
extern __xdata int16_t eom_vote_acc;
extern __xdata uint8_t f0d_c_pre;
extern __xdata uint8_t f0d_l_pre;
extern __xdata uint8_t f0d_r_pre;
extern __xdata int8_t phase_l_offset, phase_offset; //always negative
extern __xdata int8_t phase_r_offset, adapt_eom_phase_save;

extern __xdata int16_t cur_esm_phase;

extern __xdata bool tx_init_bit;
extern __xdata bool train_comp;
extern __xdata bool uart_rx_busy;
extern __xdata bool tx_sweep_preset_en; 
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

extern __xdata bool pre_sq_rd, save_pu_f1p_s_o, save_pu_f1p_s_e, save_dfe_adapt_splr, save_dfe_adapt_e_en, save_dfe_adapt_o_en; //eom save
extern __xdata bool save_eom_en_s, save_eom_en_d, save_dfe_en;
extern __xdata bool eom_ext_mode;

extern __xdata uint16_t rpta_loop_cnt, tx_ctrl_stat ;
extern __xdata int8_t  rpta_vote;
extern __xdata uint8_t cdr_state;

extern __xdata bool first_time_ring_pll_cont;
extern __xdata int8_t ring_size_counter; //ring_pll
extern __xdata int8_t ring_size_counter_mid; //ring_pll counter mid point
extern __xdata uint16_t ringpll_dac_fine;

extern __xdata bool serdes_ring_lane_en, ring_lane_sel;
extern __xdata uint8_t gen_pll_rate, pre_gen_pll_rate, pre_lcpll_rate, pre_ringpll_rate;
extern __xdata bool invalidate_pll_rate;
extern __xdata uint8_t mcuclk_mc;
extern __xdata bool slave_phy_on; 
extern __xdata int8_t cur_phase_offset_data, cur_phase_offset_esm;
extern __xdata int8_t current_EOM_phase_offset;
extern __xdata bool dfe_err_found;
extern __xdata uint8_t skip_dfe_adapt_cdr_midpoint, cds_dfe_ofst, dfe_ofst_adapt_en;
extern __xdata uint8_t cdr_ui_pi_code_num, half_ui_code, eom_data_align_success;
extern __xdata bool ofst_sat;
extern __xdata uint8_t save_dfe_dis;
extern __xdata int8_t train_ofst_save;
extern __xdata uint16_t pre_local_ctrl, save_local_status;
extern __xdata int16_t tsen_dat;
extern __xdata bool tx_train_p2p_hold, rxinit_4_spdchg_en;
extern __xdata uint8_t apta_sim_state, apta_rm_state_err;
//extern __xdata uint8_t apta_rm_state_err;
//#define apta_sim_state reg_MCU_DEBUGC_LANE_7_0
extern __xdata bool txffe_force_en;
extern __xdata uint8_t g_fw_flags;	// 8 global flags for internal use. [0] is flag for speed table copy from pmem to xdata
extern __xdata uint8_t sq_thrs_ratio, sq_thrs_ratio_gen_en;
extern __xdata uint8_t dfe_res_save_en;
extern __xdata uint8_t dfe_save_en, dfe_phase_save_en;
extern __xdata uint16_t tx_train_frame_det_timer;
extern __xdata uint8_t rx_pll_rate_x, tx_pll_rate_x;
extern __xdata uint8_t cal_start_on;
extern __xdata uint8_t tx_sel_bit, rx_sel_bit;
extern __xdata bool pcie_f0b_en;
extern __xdata uint8_t opt_g0_index, opt_gn1_index, opt_g1_index;
extern __xdata bool pll_cal_timeout_dis_save;

extern __xdata uint8_t rm_stat, error_code, c0, c1, cn1, ce, single_arg;
extern __xdata volatile uint8_t remote_ctrl_h, remote_ctrl_l;
extern __xdata volatile uint8_t remote_status_h, remote_status_l;
extern __xdata volatile uint16_t remote_ctrl_16, remote_status_16;
extern __xdata volatile bool remote_status_in;
extern __xdata bool tx_align_on, llpnum, rx_init_done, bypass_ctle_train_on;
extern __xdata  uint16_t save_adapt_lpnum;
//extern __xdata uint8_t dfe_stop;
extern __xdata uint8_t cont_cal_inx, dfe_sm_dc_e_e, dfe_sm_dc_e_o;

extern __code uint16_t cds_table[] ;  
//extern __code uint8_t c1_default[] ; 
//extern __code uint8_t c0_default[] ; 
//extern __code uint8_t cn1_default[] ; 

#define tempc_mux_sel_2c  		cmx_CAL_TEMPC_MUX_SEL_7_0
#define tempc_mux_hold_sel_2c   cmx_CAL_TEMPC_MUX_HOLD_SEL_7_0


//--------------------------------------
// speed table
__xdata __at(SPDTBL_XDAT_CMN_BASE + 0) uint8_t lc_speedtable[2][PLL_TBL_MAX][lc_size]; 
__xdata __at(RING_SPDTBL_BASE + 0) uint8_t ring_speedtable[2][2][RINGPLL_TBL_MAX][ring_size];
__xdata __at(PHY_MODE_CMN_BASE + 0) uint8_t phy_mode_cmn_table[cal_cmn_size];

__xdata __at(SPDTBL_XDAT_LANE_BASE + 0) uint8_t max_gen;
__xdata __at(SPDTBL_XDAT_LANE_BASE + 1) uint8_t min_gen;
__xdata __at(SPDTBL_XDAT_LANE_BASE + 4) uint8_t speedtable[GEN_TBL_MAX][gen_size];
__xdata __at(PHY_MODE_LANE_BASE + 0) uint8_t phy_mode_lane_table[cal_lane_size];

//----------------------------------------
// train result save 
//data[y][x] 
// x: [0]: dfe_res_F234/F1/F0[/FLOATING/F8TO15/F567]
//    [1]: rxffe_res1/cap1
//    [2]: rxffe_res2/cap2/O 
//    [3]: rxffe_res2/cap2/E
// y: [0]g0 - [1]g1 - [2]g2 - [3]g3 - [4]g4   
__xdata __at(XDAT_BASE + 0x00b4) uint8_t rc_save[5][4];

//data[y][x]
// x: [0]: [7:4]em_po, [3]peak_en, [2]pre_en, [1]po_en, [0]force_en
//    [1]: [7:4]em_peak, [3:0]em_pre  
// y: [0]g0 - [1]g1 - [2]g2 - [3]g3 - [4]g4   
__xdata __at(XDAT_BASE + 0x00d0) uint8_t txffe_save[5][2];

//data[y][x]
// x: [0]: align90_ref
//    [1]: [7]reserved [6:4]gm, [3:0]reserved  
//    [2]: [7]reserved [6]dummy_clk [5:0]dac
// y: [0]g0 - [1]g1 - [2]g2 - [3]g3 - [4]g4   
__xdata __at(XDAT_BASE + 0x00e4) uint8_t phase_save[5][4];


//__xdata __at(XDAT_BASE + 0x0081) uint8_t dfe_en_tb[5];
//__xdata __at(XDAT_BASE + 0x0081) uint8_t dfe_en_sel_tb[5]; //

//--------------------------------------
// remap tx train index
__xdata __at(XDAT_BASE + 0x0030) uint8_t train_gn1_index;
__xdata __at(XDAT_BASE + 0x0031) uint8_t train_g1_index;
__xdata __at(XDAT_BASE + 0x0032) uint8_t train_g0_index;

//--------------------------------------
//// remap local_tx_preset table
////data[y][x]
//// x: [0]: [7:4]em_po, [3:0]rsv
////    [1]: [7:4]em_peak, [3:0]em_pre
//// y: table #
__xdata __at(XDAT_CMN_BASE + 0x00b0) uint8_t local_tx_preset_tb[11][2];

//--------------------------------------
//data[x][y] 
// x: [0]pwr - [1]cont
// y: [0]rate0 - [1]rate1 or [0]gen0 - [1]gen1 - ..
//phy_mode_cmn
__xdata __at(PHY_MODE_CMN_BASE + caloft_lcvco_dac_lsb_rate0)                    uint8_t cmx_cal_lcvco_dac[2][2];
__xdata __at(PHY_MODE_CMN_BASE + caloft_lcvco_dac_lsb_rate0) 			uint8_t cmx_cal_lcvco_dac_lsb[2][2];
__xdata __at(PHY_MODE_CMN_BASE + caloft_lcvco_dac_msb_rate0) 			uint8_t cmx_cal_lcvco_dac_msb[2][2];
__xdata __at(PHY_MODE_CMN_BASE + caloft_lccap_msb_rate0) 	 			uint8_t cmx_cal_lccap_msb[2];
__xdata __at(PHY_MODE_CMN_BASE + caloft_lccap_lsb_rate0) 	 			uint8_t cmx_cal_lccap_lsb[2];
__xdata __at(PHY_MODE_CMN_BASE + caloft_plldcc_cnt_rate0) 	 			uint8_t cmx_cal_plldcc[2][2]; 
__xdata __at(PHY_MODE_CMN_BASE + caloft_pll_speed_ring_rate0) 	 		uint8_t cmx_cal_pll_speed_ring[2][2];
__xdata __at(PHY_MODE_CMN_BASE + caloft_pll_sllp_dac_coarse_ring_rate0) uint8_t cmx_cal_pll_sllp_dac_coarse_ring[2][2];
__xdata __at(PHY_MODE_CMN_BASE + caloft_sllp_dac_fine_ring_rate0) 	 	uint16_t cmx_cal_sllp_dac_fine_ring[2][2];

//phy_mode_lane
__xdata __at(PHY_MODE_LANE_BASE + caloft_txdcc_pdiv_rate0_lane)          uint8_t lnx_cal_txdcc_pdiv[2][2];
__xdata __at(PHY_MODE_LANE_BASE + caloft_txdcc_pdiv_hg_rate0_lane)       uint8_t lnx_cal_txdcc_pdiv_hg[2];
__xdata __at(PHY_MODE_LANE_BASE + caloft_txdcc_rate0_lane)               uint8_t lnx_cal_txdcc[2][2];
__xdata __at(PHY_MODE_LANE_BASE + caloft_txdcc_hg_rate0_lane)            uint8_t lnx_cal_txdcc_hg[2];
__xdata __at(PHY_MODE_LANE_BASE + caloft_rxdcc_dll_rate0_lane)           uint8_t lnx_cal_rxdcc_dll[2][2];
__xdata __at(PHY_MODE_LANE_BASE + caloft_rxdcc_dll_hg_rate0_lane)        uint8_t lnx_cal_rxdcc_dll_hg[2];
__xdata __at(PHY_MODE_LANE_BASE + caloft_rxdcc_data_gen0_lane)           uint8_t lnx_cal_rxdcc_data[2][5]; 
__xdata __at(PHY_MODE_LANE_BASE + caloft_rxdcc_data_hg_gen0_lane)        uint8_t lnx_cal_rxdcc_data_hg[5];  
__xdata __at(PHY_MODE_LANE_BASE + caloft_rxdcc_eom_rate0_lane)           uint8_t lnx_cal_rxdcc_eom[2][5];
__xdata __at(PHY_MODE_LANE_BASE + caloft_rxdcc_eom_hg_rate0_lane)        uint8_t lnx_cal_rxdcc_eom_hg[5]; 
__xdata __at(PHY_MODE_LANE_BASE + caloft_dll_gmsel_rate0_lane)           uint8_t lnx_cal_dll_gmsel[2];
__xdata __at(PHY_MODE_LANE_BASE + caloft_vdda_dll_sel_rate0_lane)        uint8_t lnx_cal_vdda_dll_sel[2][2];
__xdata __at(PHY_MODE_LANE_BASE + caloft_dll_eom_gmsel_rate0_lane)       uint8_t lnx_cal_dll_eom_gmsel[2];
__xdata __at(PHY_MODE_LANE_BASE + caloft_vdda_dll_eom_sel_rate0_lane)    uint8_t lnx_cal_vdda_dll_eom_sel[2][2];
__xdata __at(PHY_MODE_LANE_BASE + caloft_eom_dpher_rate0_lane)           uint8_t lnx_cal_eom_dpher[2];
__xdata __at(PHY_MODE_LANE_BASE + caloft_align90_dummy_clk_rate0_div0_lane)   uint8_t lnx_cal_align90_dummy_clk[2][2][2];
__xdata __at(PHY_MODE_LANE_BASE + caloft_align90_dac_rate0_div0_lane)         uint8_t lnx_cal_align90_dac[2][2][2];
__xdata __at(PHY_MODE_LANE_BASE + caloft_align90_gm_rate0_div0_lane)          uint8_t lnx_cal_align90_gm[2][2][2];
__xdata __at(PHY_MODE_LANE_BASE + caloft_sellv_txdata_gen0_lane)         uint8_t lnx_cal_sellv_txdata[2][5];
__xdata __at(PHY_MODE_LANE_BASE + caloft_sellv_txclk_gen0_lane)          uint8_t lnx_cal_sellv_txclk[2][5];
__xdata __at(PHY_MODE_LANE_BASE + caloft_sellv_rxdataclk_gen0_lane)      uint8_t lnx_cal_sellv_rxdataclk[2][5];
__xdata __at(PHY_MODE_LANE_BASE + caloft_sellv_txpre_gen0_lane)          uint8_t lnx_cal_sellv_txpre[2][5];
__xdata __at(PHY_MODE_LANE_BASE + caloft_sellv_rxsampler_gen0_lane)      uint8_t lnx_cal_sellv_rxsampler[2][5];
__xdata __at(PHY_MODE_LANE_BASE + caloft_sellv_rxeomclk_gen0_lane)       uint8_t lnx_cal_sellv_rxeomclk[2][5];
__xdata __at(PHY_MODE_LANE_BASE + spdoft_tx_preset_index_lane)       	 uint8_t lnx_spdoft_tx_preset_index_lane; //local-to_remote ttiu preset control

#ifdef _32G_ANA
//----------------------------------
//// For 28G_X4_R2P1 PCIe 32G support

#define caloftx_txdcc_pdiv_rate0_lane			0 
#define caloftx_txdcc_pdiv_hg_rate0_lane		6
#define caloftx_txdcc_rate0_lane			9
#define caloftx_txdcc_hg_rate0_lane			15
#define caloftx_rxdcc_dll_rate0_lane			18
#define caloftx_rxdcc_dll_hg_rate0_lane			24
#define caloftx_dll_gmsel_rate0_lane			27
#define caloftx_vdda_dll_sel_rate0_lane			30
#define caloftx_dll_eom_gmsel_rate0_lane		36
#define caloftx_vdda_dll_eom_sel_rate0_lane		39
#define caloftx_eom_dpher_rate0_lane			45
#define caloftx_align90_dummy_clk_rate0_div0_lane	48
#define caloftx_align90_dac_rate0_div0_lane		60
#define caloftx_align90_gm_rate0_div0_lane		72

__xdata __at(SPDTBL_XDAT_LANE_BASE + (gen_size * 5) + caloftx_txdcc_pdiv_rate0_lane)              uint8_t lnx_calx_txdcc_pdiv[2][3];
__xdata __at(SPDTBL_XDAT_LANE_BASE + (gen_size * 5) + caloftx_txdcc_pdiv_hg_rate0_lane)           uint8_t lnx_calx_txdcc_pdiv_hg[3];
__xdata __at(SPDTBL_XDAT_LANE_BASE + (gen_size * 5) + caloftx_txdcc_rate0_lane)                   uint8_t lnx_calx_txdcc[2][3];
__xdata __at(SPDTBL_XDAT_LANE_BASE + (gen_size * 5) + caloftx_txdcc_hg_rate0_lane)                uint8_t lnx_calx_txdcc_hg[3];
__xdata __at(SPDTBL_XDAT_LANE_BASE + (gen_size * 5) + caloftx_rxdcc_dll_rate0_lane)               uint8_t lnx_calx_rxdcc_dll[2][3];
__xdata __at(SPDTBL_XDAT_LANE_BASE + (gen_size * 5) + caloftx_rxdcc_dll_hg_rate0_lane)            uint8_t lnx_calx_rxdcc_dll_hg[3];
__xdata __at(SPDTBL_XDAT_LANE_BASE + (gen_size * 5) + caloftx_dll_gmsel_rate0_lane)               uint8_t lnx_calx_dll_gmsel[3];
__xdata __at(SPDTBL_XDAT_LANE_BASE + (gen_size * 5) + caloftx_vdda_dll_sel_rate0_lane)            uint8_t lnx_calx_vdda_dll_sel[2][3];
__xdata __at(SPDTBL_XDAT_LANE_BASE + (gen_size * 5) + caloftx_dll_eom_gmsel_rate0_lane)           uint8_t lnx_calx_dll_eom_gmsel[3];
__xdata __at(SPDTBL_XDAT_LANE_BASE + (gen_size * 5) + caloftx_vdda_dll_eom_sel_rate0_lane)        uint8_t lnx_calx_vdda_dll_eom_sel[2][3];
__xdata __at(SPDTBL_XDAT_LANE_BASE + (gen_size * 5) + caloftx_eom_dpher_rate0_lane)               uint8_t lnx_calx_eom_dpher[3];
__xdata __at(SPDTBL_XDAT_LANE_BASE + (gen_size * 5) + caloftx_align90_dummy_clk_rate0_div0_lane)  uint8_t lnx_calx_align90_dummy_clk[2][3][2];
__xdata __at(SPDTBL_XDAT_LANE_BASE + (gen_size * 5) + caloftx_align90_dac_rate0_div0_lane)        uint8_t lnx_calx_align90_dac[2][3][2];
__xdata __at(SPDTBL_XDAT_LANE_BASE + (gen_size * 5) + caloftx_align90_gm_rate0_div0_lane)         uint8_t lnx_calx_align90_gm[2][3][2];

#endif

//----------------------------------
//new cds memory
 __xdata __at(0x6100) Status_CDS_28G_t cds28;
 __xdata __at(0x6178) Status_dfe_sm_t dfe_sm;
 __xdata __at(0x6178+sizeof(Status_dfe_sm_t)) Status_dfe_sm_dc_t dfe_sm_dc;
 __xdata __at(0x6178+sizeof(Status_dfe_sm_t)+sizeof(Status_dfe_sm_dc_t)) Status_dfe_sm_t dfe_sm_save[5]; //320
 
//----------------------------------
//ana reserve register
typedef union {
	struct {
		uint8_t TRX_VIRTUAL_CTRL_LANE                    : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_0                        		: 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY_ANAREG_REV_0_t;
__xdata __at( 0x3fc ) volatile UPHY_ANAREG_REV_0_t UPHY_ANAREG_REV_0;
#define reg_TRX_VIRTUAL_CTRL_LANE  UPHY_ANAREG_REV_0.BF.TRX_VIRTUAL_CTRL_LANE

//----------------------------------
// tx tb 
typedef struct {
	uint8_t pre						: 8;  //tx train pre
	uint8_t peak            				: 8;  //tx train preset tb peak
	uint8_t post            				: 8;  //tx train preset tb post
	uint8_t ssc_amp						: 7;
	uint8_t ssc_dspread					: 1; /*     31     r/w   1*/
} tx_tb_t;
 __xdata __at(0xe684) tx_tb_t tx_tb[5];

//----------------------------------
// tx save tb 
typedef struct {
	uint8_t ssc_en						: 1; /*      0     r/w   0*/
	uint8_t rsv0						: 7; 
	uint8_t rsv1            				: 8;
	uint8_t rsv2            				: 8;
	uint8_t rsv3						: 8;
} train_save_tb_t; 
 __xdata __at(0xe698) train_save_tb_t train_save_tb[5];  

 __xdata __at(0x607c) uint8_t sq_thrs_ratio_tb[5];  
 
__xdata __at(XDAT_BASE + 0x00c8) uint16_t tx_em_peak_ctrl_g;
__xdata __at(XDAT_BASE + 0x00cb) uint32_t tx_em_peak_en_g;

#endif //GLOBAL_H
