                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:41 2018
                              5 ;--------------------------------------------------------
                              6 	.module global
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _TF2
                             13 	.globl _TI
                             14 	.globl _RI
                             15 	.globl _EX12
                             16 	.globl _EX11
                             17 	.globl _EX10
                             18 	.globl _EX9
                             19 	.globl _EX8
                             20 	.globl _ES1
                             21 	.globl _PS1
                             22 	.globl _EX6
                             23 	.globl _EX5
                             24 	.globl _EX4
                             25 	.globl _EX3
                             26 	.globl _EX2
                             27 	.globl _EX7
                             28 	.globl _EA
                             29 	.globl _WDT
                             30 	.globl _ET2
                             31 	.globl _ES
                             32 	.globl _ET1
                             33 	.globl _EX1
                             34 	.globl _ET0
                             35 	.globl _EX0
                             36 	.globl _TF1
                             37 	.globl _TR1
                             38 	.globl _TF0
                             39 	.globl _TR0
                             40 	.globl _IE1
                             41 	.globl _IT1
                             42 	.globl _IE0
                             43 	.globl _IT0
                             44 	.globl _P3_7
                             45 	.globl _P3_6
                             46 	.globl _P3_5
                             47 	.globl _P3_4
                             48 	.globl _P3_3
                             49 	.globl _P3_2
                             50 	.globl _P3_1
                             51 	.globl _P3_0
                             52 	.globl _P2_7
                             53 	.globl _P2_6
                             54 	.globl _P2_5
                             55 	.globl _P2_4
                             56 	.globl _P2_3
                             57 	.globl _P2_2
                             58 	.globl _P2_1
                             59 	.globl _P2_0
                             60 	.globl _P1_7
                             61 	.globl _P1_6
                             62 	.globl _P1_5
                             63 	.globl _P1_4
                             64 	.globl _P1_3
                             65 	.globl _P1_2
                             66 	.globl _P1_1
                             67 	.globl _P1_0
                             68 	.globl _P0_7
                             69 	.globl _P0_6
                             70 	.globl _P0_5
                             71 	.globl _P0_4
                             72 	.globl _P0_3
                             73 	.globl _P0_2
                             74 	.globl _P0_1
                             75 	.globl _P0_0
                             76 	.globl _DMAC
                             77 	.globl _DMATA
                             78 	.globl _DMASA
                             79 	.globl _TMR2
                             80 	.globl _TMR1
                             81 	.globl _TMR0
                             82 	.globl _SRST
                             83 	.globl _B
                             84 	.globl _EIE
                             85 	.globl _ACC
                             86 	.globl _ADCON
                             87 	.globl _PSW
                             88 	.globl _TH2
                             89 	.globl _TL2
                             90 	.globl _RCAP2H
                             91 	.globl _RCAP2L
                             92 	.globl _T2CON
                             93 	.globl _CCEN
                             94 	.globl _IRCON
                             95 	.globl _S0RELH
                             96 	.globl _IP1
                             97 	.globl _IEN1
                             98 	.globl _DMAM1
                             99 	.globl _DMAM0
                            100 	.globl _DMASEL
                            101 	.globl _DMAC2
                            102 	.globl _DMAC1
                            103 	.globl _DMAC0
                            104 	.globl _P3
                            105 	.globl _S0RELL
                            106 	.globl _IP0
                            107 	.globl _IEN0
                            108 	.globl _DMAT2
                            109 	.globl _DMAT1
                            110 	.globl _DMAT0
                            111 	.globl _DMAS2
                            112 	.globl _DMAS1
                            113 	.globl _DMAS0
                            114 	.globl _P2
                            115 	.globl _IEN2
                            116 	.globl _SBUF
                            117 	.globl _SCON
                            118 	.globl _PSBANK
                            119 	.globl _DPS
                            120 	.globl _P1
                            121 	.globl _CKCON
                            122 	.globl _TH1
                            123 	.globl _TH0
                            124 	.globl _TL1
                            125 	.globl _TL0
                            126 	.globl _TMOD
                            127 	.globl _TCON
                            128 	.globl _PCON
                            129 	.globl _WDTREL
                            130 	.globl _DPH
                            131 	.globl _DPL
                            132 	.globl _P0
                            133 	.globl _tx_apta_state
                            134 	.globl _pll_cal_timeout_dis_save
                            135 	.globl _opt_g1_index
                            136 	.globl _opt_gn1_index
                            137 	.globl _opt_g0_index
                            138 	.globl _pcie_f0b_en
                            139 	.globl _rx_sel_bit
                            140 	.globl _tx_sel_bit
                            141 	.globl _cal_start_on
                            142 	.globl _tx_pll_rate_x
                            143 	.globl _rx_pll_rate_x
                            144 	.globl _tx_train_frame_det_timer
                            145 	.globl _dfe_phase_save_en
                            146 	.globl _dfe_save_en
                            147 	.globl _dfe_res_save_en
                            148 	.globl _sq_thrs_ratio_gen_en
                            149 	.globl _sq_thrs_ratio
                            150 	.globl _g_fw_flags
                            151 	.globl _txffe_force_en
                            152 	.globl _apta_rm_state_err
                            153 	.globl _apta_sim_state
                            154 	.globl _rxinit_4_spdchg_en
                            155 	.globl _tx_train_p2p_hold
                            156 	.globl _save_local_status
                            157 	.globl _pre_local_ctrl
                            158 	.globl _train_ofst_save
                            159 	.globl _save_dfe_dis
                            160 	.globl _dfe_err_found
                            161 	.globl _cur_phase_offset_esm
                            162 	.globl _cur_phase_offset_data
                            163 	.globl _ofst_sat
                            164 	.globl _eom_data_align_success
                            165 	.globl _half_ui_code
                            166 	.globl _cdr_ui_pi_code_num
                            167 	.globl _cds_dfe_ofst
                            168 	.globl _skip_dfe_adapt_cdr_midpoint
                            169 	.globl _invalidate_pll_rate
                            170 	.globl _pre_ringpll_rate
                            171 	.globl _pre_lcpll_rate
                            172 	.globl _pre_gen_pll_rate
                            173 	.globl _gen_pll_rate
                            174 	.globl _uart_rx_buf
                            175 	.globl _uart_rx_out
                            176 	.globl _uart_rx_in
                            177 	.globl _cdr_state
                            178 	.globl _rpta_vote
                            179 	.globl _tx_ctrl_stat
                            180 	.globl _rpta_loop_cnt
                            181 	.globl _dfe_2c
                            182 	.globl _eom_ext_mode
                            183 	.globl _save_dfe_en
                            184 	.globl _save_eom_en_d
                            185 	.globl _save_eom_en_s
                            186 	.globl _save_dfe_adapt_o_en
                            187 	.globl _save_dfe_adapt_e_en
                            188 	.globl _save_dfe_adapt_splr
                            189 	.globl _save_pu_f1p_s_e
                            190 	.globl _save_pu_f1p_s_o
                            191 	.globl _pre_sq_rd
                            192 	.globl _tx_num_tx_preset
                            193 	.globl _ctrl_rx_train_mode
                            194 	.globl _ctrl_trx_train_pass
                            195 	.globl _ctrl_rx_only_mode
                            196 	.globl _detect_sat
                            197 	.globl _Phase_Adapt_Inited
                            198 	.globl _do_phase_adapt
                            199 	.globl _pcie_usb_mode
                            200 	.globl _tx_sweep_preset_en
                            201 	.globl _uart_rx_busy
                            202 	.globl _train_comp
                            203 	.globl _tx_init_bit
                            204 	.globl _cur_esm_phase
                            205 	.globl _adapt_eom_phase_save
                            206 	.globl _phase_offset
                            207 	.globl _phase_r_offset
                            208 	.globl _phase_l_offset
                            209 	.globl _f0d_r_pre
                            210 	.globl _f0d_l_pre
                            211 	.globl _f0d_c_pre
                            212 	.globl _eom_vote_acc
                            213 	.globl _phase_vote_acc
                            214 	.globl _norm_eom_ph_os_r
                            215 	.globl _norm_eom_ph_os_c
                            216 	.globl _norm_eom_ph_os_l
                            217 	.globl _norm_ofst
                            218 	.globl _norm_f1
                            219 	.globl _eom_conv_dir
                            220 	.globl _ph_conv_dir
                            221 	.globl _EOM_CONV_CNT
                            222 	.globl _PH_CONV_CNT
                            223 	.globl _adapted_phase
                            224 	.globl _ph_control_mode
                            225 	.globl _dfe_dis
                            226 	.globl _half_shift
                            227 	.globl _ctrl_max_dfe_adapt_shift
                            228 	.globl _sum
                            229 	.globl _train_timer_int
                            230 	.globl _cdr_midpoint_phase_os
                            231 	.globl _sumf_boost_target_c
                            232 	.globl _r2_adj_on
                            233 	.globl _opt_r
                            234 	.globl _opt_c
                            235 	.globl _train_r
                            236 	.globl _train_c
                            237 	.globl _dfe_res_f0a_high_thres
                            238 	.globl _dfe_res_f0a_low_thres_3
                            239 	.globl _dfe_res_f0a_low_thres_2
                            240 	.globl _dfe_res_f0a_low_thres_01
                            241 	.globl _ctrl_num_big_loop
                            242 	.globl _ctrl_num_blind_loop
                            243 	.globl _cdr
                            244 	.globl _rx
                            245 	.globl _tx
                            246 	.globl _opt
                            247 	.globl _train
                            248 	.globl _ring_size_counter_mid
                            249 	.globl _ring_size_counter
                            250 	.globl _first_time_ring_pll_cont
                            251 	.globl _f1p_o_old
                            252 	.globl _f1p_e_old
                            253 	.globl _dfe_norm_cnt
                            254 	.globl _dcc_cont
                            255 	.globl _vdd_cnt
                            256 	.globl _rxdll_temp_b_lane
                            257 	.globl _rxdll_temp_a_lane
                            258 	.globl _cal_align90_gm_bin
                            259 	.globl _tsen_dat_normal
                            260 	.globl _tsen_dat_train
                            261 	.globl _tsen_dat_cal
                            262 	.globl _ringpll_step_size_cnt
                            263 	.globl _pwrsq_on
                            264 	.globl _new_gen_rx
                            265 	.globl _new_gen_tx
                            266 	.globl _old_status
                            267 	.globl _tempc_dir
                            268 	.globl _tempc_step_state
                            269 	.globl _pllcal_first_time
                            270 	.globl _ring_lane_sel
                            271 	.globl _serdes_ring_lane_en
                            272 	.globl _ringpll_dac_fine
                            273 	.globl _gm
                            274 	.globl _dm
                            275 	.globl _dac
                            276 	.globl _gm_bin
                            277 	.globl _slave_phy_on
                            278 	.globl _cal_lccap_msb_index
                            279 	.globl _mcuclk_mc
                            280 	.globl _tsen_dat
                            281 	.globl _gen_rx
                            282 	.globl _gen_tx
                            283 	.globl _align90_step_cnt
                            284 	.globl _eom_dll_step_cnt
                            285 	.globl _rxdll_step_cnt
                            286 	.globl _txdetect_step_cnt
                            287 	.globl _txdcc_step_cnt
                            288 	.globl _txdcc_pdiv_step_cnt
                            289 	.globl _pllamp_step_cnt
                            290 	.globl _plldcc_step_cnt
                            291 	.globl _rxeomclk_vdd_step_cnt
                            292 	.globl _rxsmplr_vdd_step_cnt
                            293 	.globl _rxdcc_dll_step_cnt
                            294 	.globl _rxdcc_data_step_cnt
                            295 	.globl _rxdcc_eom_step_cnt
                            296 	.globl _txdata_vdd_step_cnt
                            297 	.globl _txpre_vdd_step_cnt
                            298 	.globl _txclk_vdd_step_cnt
                            299 	.globl _save_local_ana_tx2rx_lpbk_en_lane
                            300 	.globl _save_pt_tx_clk_en_lane
                            301 	.globl _save_pt_en_lane
                            302 	.globl _save_pt_tx_pattern_sel_lane_5_0_b1
                            303 	.globl _save_pt_tx_pattern_sel_lane_5_0_b0
                            304 	.globl _sq_thrs_ratio_tb
                            305 	.globl _train_save_tb
                            306 	.globl _tx_tb
                            307 	.globl _UPHY_ANAREG_REV_0
                            308 	.globl _dfe_sm_save
                            309 	.globl _dfe_sm_dc
                            310 	.globl _dfe_sm
                            311 	.globl _cds28
                            312 	.globl _lnx_calx_align90_gm
                            313 	.globl _lnx_calx_align90_dac
                            314 	.globl _lnx_calx_align90_dummy_clk
                            315 	.globl _lnx_calx_eom_dpher
                            316 	.globl _lnx_calx_vdda_dll_eom_sel
                            317 	.globl _lnx_calx_dll_eom_gmsel
                            318 	.globl _lnx_calx_vdda_dll_sel
                            319 	.globl _lnx_calx_dll_gmsel
                            320 	.globl _lnx_calx_rxdcc_dll_hg
                            321 	.globl _lnx_calx_rxdcc_dll
                            322 	.globl _lnx_calx_txdcc_hg
                            323 	.globl _lnx_calx_txdcc
                            324 	.globl _lnx_calx_txdcc_pdiv_hg
                            325 	.globl _lnx_calx_txdcc_pdiv
                            326 	.globl _lnx_spdoft_tx_preset_index_lane
                            327 	.globl _lnx_cal_sellv_rxeomclk
                            328 	.globl _lnx_cal_sellv_rxsampler
                            329 	.globl _lnx_cal_sellv_txpre
                            330 	.globl _lnx_cal_sellv_rxdataclk
                            331 	.globl _lnx_cal_sellv_txclk
                            332 	.globl _lnx_cal_sellv_txdata
                            333 	.globl _lnx_cal_align90_gm
                            334 	.globl _lnx_cal_align90_dac
                            335 	.globl _lnx_cal_align90_dummy_clk
                            336 	.globl _lnx_cal_eom_dpher
                            337 	.globl _lnx_cal_vdda_dll_eom_sel
                            338 	.globl _lnx_cal_dll_eom_gmsel
                            339 	.globl _lnx_cal_vdda_dll_sel
                            340 	.globl _lnx_cal_dll_gmsel
                            341 	.globl _lnx_cal_rxdcc_eom_hg
                            342 	.globl _lnx_cal_rxdcc_eom
                            343 	.globl _lnx_cal_rxdcc_data_hg
                            344 	.globl _lnx_cal_rxdcc_data
                            345 	.globl _lnx_cal_rxdcc_dll_hg
                            346 	.globl _lnx_cal_rxdcc_dll
                            347 	.globl _lnx_cal_txdcc_hg
                            348 	.globl _lnx_cal_txdcc
                            349 	.globl _lnx_cal_txdcc_pdiv_hg
                            350 	.globl _lnx_cal_txdcc_pdiv
                            351 	.globl _cmx_cal_sllp_dac_fine_ring
                            352 	.globl _cmx_cal_pll_sllp_dac_coarse_ring
                            353 	.globl _cmx_cal_pll_speed_ring
                            354 	.globl _cmx_cal_plldcc
                            355 	.globl _cmx_cal_lccap_lsb
                            356 	.globl _cmx_cal_lccap_msb
                            357 	.globl _cmx_cal_lcvco_dac_msb
                            358 	.globl _cmx_cal_lcvco_dac_lsb
                            359 	.globl _cmx_cal_lcvco_dac
                            360 	.globl _local_tx_preset_tb
                            361 	.globl _train_g0_index
                            362 	.globl _train_g1_index
                            363 	.globl _train_gn1_index
                            364 	.globl _phase_save
                            365 	.globl _txffe_save
                            366 	.globl _rc_save
                            367 	.globl _phy_mode_lane_table
                            368 	.globl _speedtable
                            369 	.globl _min_gen
                            370 	.globl _max_gen
                            371 	.globl _phy_mode_cmn_table
                            372 	.globl _ring_speedtable
                            373 	.globl _lc_speedtable
                            374 	.globl _TXTRAIN_IF_REG0
                            375 	.globl _CDS_READ_MISC1
                            376 	.globl _CDS_READ_MISC0
                            377 	.globl _DFE_READ_F0D_RIGHT_ODD
                            378 	.globl _DFE_READ_F0D_RIGHT_EVEN
                            379 	.globl _DFE_READ_F0D_LEFT_ODD
                            380 	.globl _DFE_READ_F0D_LEFT_EVEN
                            381 	.globl _DFE_READ_F0D_ODD
                            382 	.globl _DFE_READ_F0D_EVEN
                            383 	.globl _DFE_READ_F0B_ODD
                            384 	.globl _DFE_READ_F0B_EVEN
                            385 	.globl _DFE_READ_F0A_ODD
                            386 	.globl _DFE_READ_F0A_EVEN
                            387 	.globl _DFE_READ_ODD_REG8
                            388 	.globl _DFE_READ_EVEN_REG8
                            389 	.globl _DFE_READ_ODD_REG7
                            390 	.globl _DFE_READ_ODD_REG6
                            391 	.globl _DFE_READ_ODD_REG5
                            392 	.globl _DFE_READ_ODD_REG4
                            393 	.globl _DFE_READ_ODD_REG3
                            394 	.globl _DFE_READ_ODD_REG2
                            395 	.globl _DFE_READ_ODD_REG1
                            396 	.globl _DFE_READ_ODD_REG0
                            397 	.globl _DFE_READ_EVEN_REG7
                            398 	.globl _DFE_READ_EVEN_REG6
                            399 	.globl _DFE_READ_EVEN_REG5
                            400 	.globl _DFE_READ_EVEN_REG4
                            401 	.globl _DFE_READ_EVEN_REG3
                            402 	.globl _DFE_READ_EVEN_REG2
                            403 	.globl _DFE_READ_EVEN_REG1
                            404 	.globl _DFE_READ_EVEN_REG0
                            405 	.globl _TX_TRAIN_IF_REG8
                            406 	.globl _TX_TRAIN_CTRL_LANE
                            407 	.globl _TX_TRAIN_IF_REG7
                            408 	.globl _TX_TRAIN_IF_REG6
                            409 	.globl _TX_TRAIN_IF_REG5
                            410 	.globl _TX_TRAIN_IF_REG4
                            411 	.globl _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE
                            412 	.globl _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE
                            413 	.globl _TRX_TRAIN_IF_INTERRUPT_LANE
                            414 	.globl _TX_AMP_CTRL_REG0
                            415 	.globl _TX_DRV_RD_OUT_REG0
                            416 	.globl _LINK_TRAIN_MODE0
                            417 	.globl _TX_EMPH_CTRL_REG0
                            418 	.globl _TX_TRAIN_DEFAULT_REG5
                            419 	.globl _TX_TRAIN_DEFAULT_REG4
                            420 	.globl _TX_TRAIN_DEFAULT_REG3
                            421 	.globl _TX_TRAIN_DEFAULT_REG2
                            422 	.globl _TX_TRAIN_DEFAULT_REG1
                            423 	.globl _TX_TRAIN_DEFAULT_REG0
                            424 	.globl _TX_TRAIN_DRIVER_REG2
                            425 	.globl _TX_TRAIN_DRIVER_REG1
                            426 	.globl _TX_TRAIN_DRIVER_REG0
                            427 	.globl _TX_TRAIN_PATTTERN_REG0
                            428 	.globl _TX_TRAIN_IF_REG3
                            429 	.globl _TX_TRAIN_IF_REG2
                            430 	.globl _TX_TRAIN_IF_REG1
                            431 	.globl _TX_TRAIN_IF_REG0
                            432 	.globl _DME_DEC_REG1
                            433 	.globl _DME_DEC_REG0
                            434 	.globl _DME_ENC_REG2
                            435 	.globl _DME_ENC_REG1
                            436 	.globl _DME_ENC_REG0
                            437 	.globl _END_XDAT_CMN
                            438 	.globl _MCU_INFO_13
                            439 	.globl _MCU_INFO_12
                            440 	.globl _MCU_INFO_5
                            441 	.globl _MCU_INFO_4
                            442 	.globl _SYNC_INFO
                            443 	.globl _CDS_EYE_CLK_THR
                            444 	.globl _TX_SAVE_4
                            445 	.globl _TX_SAVE_3
                            446 	.globl _TX_SAVE_2
                            447 	.globl _TX_SAVE_1
                            448 	.globl _TX_SAVE_0
                            449 	.globl _ETH_PRESET1_TB
                            450 	.globl _ETH_PRESET0_TB
                            451 	.globl _SAS_PRESET2_TB
                            452 	.globl _SAS_PRESET1_TB
                            453 	.globl _SAS_PRESET0_TB
                            454 	.globl _G_SELLV_RXSAMPLER
                            455 	.globl _G_SELLV_RXDATACLK
                            456 	.globl _G_SELLV_RXEOMCLK
                            457 	.globl _G_SELLV_TXPRE
                            458 	.globl _G_SELLV_TXDATA
                            459 	.globl _G_SELLV_TXCLK
                            460 	.globl _TIMER_SEL3
                            461 	.globl _TIMER_SEL2
                            462 	.globl _TIMER_SEL1
                            463 	.globl _MCU_CONFIG1
                            464 	.globl _LOOP_CNTS
                            465 	.globl _CAL_DATA1
                            466 	.globl _MCU_CONFIG
                            467 	.globl _CAL_STATUS_READ
                            468 	.globl _CAL_TIME_OUT_AND_DIS
                            469 	.globl _CON_CAL_STEP_SIZE5
                            470 	.globl _CON_CAL_STEP_SIZE4
                            471 	.globl _CON_CAL_STEP_SIZE3
                            472 	.globl _CON_CAL_STEP_SIZE2
                            473 	.globl _CON_CAL_STEP_SIZE1
                            474 	.globl _CONTROL_CONFIG9
                            475 	.globl _CONTROL_CONFIG8
                            476 	.globl _TRAIN_IF_CONFIG
                            477 	.globl _CAL_DATA0
                            478 	.globl _CONTROL_CONFIG7
                            479 	.globl _CONTROL_CONFIG6
                            480 	.globl _CONTROL_CONFIG5
                            481 	.globl _CONTROL_CONFIG4
                            482 	.globl _CONTROL_CONFIG3
                            483 	.globl _CONTROL_CONFIG2
                            484 	.globl _CONTROL_CONFIG1
                            485 	.globl _CONTROL_CONFIG0
                            486 	.globl _FW_REV
                            487 	.globl _CID_REG1
                            488 	.globl _CID_REG0
                            489 	.globl _CMN_MCU_REG
                            490 	.globl _SET_LANE_ISR
                            491 	.globl _CMN_ISR_MASK_1
                            492 	.globl _CMN_ISR_1
                            493 	.globl _CMN_MCU_TIMER3_CONTROL
                            494 	.globl _CMN_MCU_TIMER2_CONTROL
                            495 	.globl _CMN_MCU_TIMER1_CONTROL
                            496 	.globl _CMN_MCU_TIMER0_CONTROL
                            497 	.globl _CMN_MCU_TIMER_CTRL_5_LANE
                            498 	.globl _CMN_MCU_TIMER_CTRL_4_LANE
                            499 	.globl _CMN_MCU_TIMER_CTRL_3_LANE
                            500 	.globl _CMN_MCU_TIMER_CTRL_2_LANE
                            501 	.globl _CMN_MCU_TIMER_CONTROL
                            502 	.globl _CMN_CACHE_DEBUG1
                            503 	.globl _CMN_MCU_GPIO
                            504 	.globl _CMN_ISR_CLEAR_2
                            505 	.globl _CMN_ISR_MASK_2
                            506 	.globl _CMN_ISR_2
                            507 	.globl _MCU_INT_ADDR
                            508 	.globl _CMN_CACHE_DEBUG0
                            509 	.globl _MCU_SDT_CMN
                            510 	.globl _XDATA_MEM_CHECKSUM_CMN_2
                            511 	.globl _XDATA_MEM_CHECKSUM_CMN_1
                            512 	.globl _XDATA_MEM_CHECKSUM_CMN_0
                            513 	.globl _TEST5
                            514 	.globl _PM_CMN_REG2
                            515 	.globl _INPUT_CMN_PIN_REG3
                            516 	.globl __FIELDNAME_
                            517 	.globl _CMN_CALIBRATION
                            518 	.globl _OUTPUT_CMN_PIN_REG0
                            519 	.globl _SPD_CMN_REG1
                            520 	.globl _CLKGEN_CMN_REG1
                            521 	.globl _PLLCAL_REG1
                            522 	.globl _PLLCAL_REG0
                            523 	.globl _ANA_TSEN_CONTROL
                            524 	.globl _INPUT_CMN_PIN_REG2
                            525 	.globl _INPUT_CMN_PIN_REG1
                            526 	.globl _INPUT_CMN_PIN_REG0
                            527 	.globl _PM_CMN_REG1
                            528 	.globl _SYSTEM
                            529 	.globl _TEST4
                            530 	.globl _TEST3
                            531 	.globl _TEST2
                            532 	.globl _TEST1
                            533 	.globl _TEST0
                            534 	.globl _MCU_SYNC2
                            535 	.globl _MCU_SYNC1
                            536 	.globl _MEM_IRQ_CLEAR
                            537 	.globl _APB_CONTROL_REG
                            538 	.globl _ANA_IF_CMN_REG0
                            539 	.globl _MEM_IRQ_MASK
                            540 	.globl _MEM_IRQ
                            541 	.globl _ANA_IF_CMN_REG1
                            542 	.globl _MEM_CMN_ECC_ERR_ADDRESS0
                            543 	.globl _MCU_INFO_3
                            544 	.globl _MCU_INFO_2
                            545 	.globl _MCU_INFO_1
                            546 	.globl _MCU_INFO_0
                            547 	.globl _MEMORY_CONTROL_4
                            548 	.globl _MEMORY_CONTROL_3
                            549 	.globl _MEMORY_CONTROL_2
                            550 	.globl _MEMORY_CONTROL_1
                            551 	.globl _MEMORY_CONTROL_0
                            552 	.globl _MCU_DEBUG1
                            553 	.globl _MCU_DEBUG0
                            554 	.globl _MCU_CONTROL_4
                            555 	.globl _MCU_CONTROL_3
                            556 	.globl _MCU_CONTROL_2
                            557 	.globl _MCU_CONTROL_1
                            558 	.globl _MCU_CONTROL_0
                            559 	.globl _GLOB_L1_SUBSTATES_CFG
                            560 	.globl _GLOB_PIPE_REVISION
                            561 	.globl _GLOB_BIST_DATA_HI
                            562 	.globl _GLOB_BIST_SEQR_CFG
                            563 	.globl _GLOB_BIST_RESULT
                            564 	.globl _GLOB_BIST_MASK
                            565 	.globl _GLOB_BIST_START
                            566 	.globl _GLOB_BIST_LANE_TYPE
                            567 	.globl _GLOB_BIST_CTRL
                            568 	.globl _GLOB_DP_BAL_CFG4
                            569 	.globl _GLOB_DP_BAL_CFG2
                            570 	.globl _GLOB_DP_BAL_CFG0
                            571 	.globl _GLOB_PM_DP_CTRL
                            572 	.globl _GLOB_COUNTER_HI
                            573 	.globl _GLOB_COUNTER_CTRL
                            574 	.globl _GLOB_PM_CFG0
                            575 	.globl _GLOB_DP_SAL_CFG5
                            576 	.globl _GLOB_DP_SAL_CFG3
                            577 	.globl _GLOB_DP_SAL_CFG1
                            578 	.globl _GLOB_DP_SAL_CFG
                            579 	.globl _GLOB_MISC_CTRL
                            580 	.globl _GLOB_CLK_SRC_HI
                            581 	.globl _GLOB_CLK_SRC_LO
                            582 	.globl _GLOB_RST_CLK_CTRL
                            583 	.globl _DFE_STATIC_REG6
                            584 	.globl _DFE_STATIC_REG5
                            585 	.globl _DFE_STATIC_REG4
                            586 	.globl _DFE_STATIC_REG3
                            587 	.globl _DFE_STATIC_REG1
                            588 	.globl _DFE_STATIC_REG0
                            589 	.globl _RX_CMN_0
                            590 	.globl _SRIS_REG1
                            591 	.globl _SRIS_REG0
                            592 	.globl _DTX_PHY_ALIGN_REG2
                            593 	.globl _DTX_PHY_ALIGN_REG1
                            594 	.globl _DTX_PHY_ALIGN_REG0
                            595 	.globl _DTX_REG4
                            596 	.globl _DTX_REG3
                            597 	.globl _DTX_REG2
                            598 	.globl _DTX_REG1
                            599 	.globl _DTX_REG0
                            600 	.globl _TX_CMN_REG
                            601 	.globl _END_XDAT_LANE
                            602 	.globl _TRAIN_CONTROL_17
                            603 	.globl _TRAIN_CONTROL_16
                            604 	.globl _TRAIN_CONTROL_15
                            605 	.globl _TRAIN_CONTROL_14
                            606 	.globl _TRAIN_CONTROL_13
                            607 	.globl _ESM_ERR_N_CNT_LOW_LANE
                            608 	.globl _ESM_POP_N_CNT_LOW_LANE
                            609 	.globl _TRAIN_CONTROL_12
                            610 	.globl _TRAIN_CONTROL_11
                            611 	.globl _TRAIN_CONTROL_10
                            612 	.globl _TRAIN_CONTROL_9
                            613 	.globl _TRAIN_CONTROL_8
                            614 	.globl _TRAIN_CONTROL_7
                            615 	.globl _TRAIN_CONTROL_6
                            616 	.globl _TRAIN_CONTROL_5
                            617 	.globl _TRAIN_CONTROL_4
                            618 	.globl _TRAIN_CONTROL_3
                            619 	.globl _ESM_ERR_POP_CNT_HIGH_LANE
                            620 	.globl _ESM_ERR_P_CNT_LOW_LANE
                            621 	.globl _ESM_POP_P_CNT_LOW_LANE
                            622 	.globl _CDS_CTRL_REG1
                            623 	.globl _CDS_CTRL_REG0
                            624 	.globl _DFE_CONTROL_11
                            625 	.globl _DFE_CONTROL_10
                            626 	.globl _DFE_CONTROL_9
                            627 	.globl _DFE_CONTROL_8
                            628 	.globl _DFE_CONTROL_7
                            629 	.globl _DFE_TEST_5
                            630 	.globl _DFE_TEST_4
                            631 	.globl _DFE_TEST_1
                            632 	.globl _DFE_TEST_0
                            633 	.globl _DFE_CONTROL_6
                            634 	.globl _TRAIN_PARA_3
                            635 	.globl _TRAIN_PARA_2
                            636 	.globl _TRAIN_PARA_1
                            637 	.globl _TRAIN_PARA_0
                            638 	.globl _DLL_CAL
                            639 	.globl _RPTA_CONFIG_1
                            640 	.globl _RPTA_CONFIG_0
                            641 	.globl _TRAIN_CONTROL_2
                            642 	.globl _TRAIN_CONTROL_1
                            643 	.globl _TRAIN_CONTROL_0
                            644 	.globl _DFE_CONTROL_5
                            645 	.globl _DFE_CONTROL_4
                            646 	.globl _DFE_CONTROL_3
                            647 	.globl _DFE_CONTROL_2
                            648 	.globl _DFE_CONTROL_1
                            649 	.globl _DFE_CONTROL_0
                            650 	.globl _TRX_TRAIN_IF_TIMERS_ENABLE_LANE
                            651 	.globl _TRX_TRAIN_IF_TIMERS2_LANE
                            652 	.globl _TRX_TRAIN_IF_TIMERS1_LANE
                            653 	.globl _PHY_LOCAL_VALUE_LANE
                            654 	.globl _PHY_REMOTE_CTRL_VALUE_LANE
                            655 	.globl _PHY_REMOTE_CTRL_COMMAND_LANE
                            656 	.globl _CAL_SAVE_DATA3_LANE
                            657 	.globl _CAL_SAVE_DATA2_LANE
                            658 	.globl _CAL_SAVE_DATA1_LANE
                            659 	.globl _CAL_CTRL4_LANE
                            660 	.globl _CAL_CTRL3_LANE
                            661 	.globl _CAL_CTRL2_LANE
                            662 	.globl _CAL_CTRL1_LANE
                            663 	.globl _LANE_MARGIN_REG0
                            664 	.globl _EOM_VLD_REG4
                            665 	.globl _EOM_REG0
                            666 	.globl _EOM_ERR_REG3
                            667 	.globl _EOM_ERR_REG2
                            668 	.globl _EOM_ERR_REG1
                            669 	.globl _EOM_ERR_REG0
                            670 	.globl _EOM_VLD_REG3
                            671 	.globl _EOM_VLD_REG2
                            672 	.globl _EOM_VLD_REG1
                            673 	.globl _EOM_VLD_REG0
                            674 	.globl _DFE_STATIC_LANE_REG6
                            675 	.globl _DFE_STATIC_LANE_REG5
                            676 	.globl _DFE_STATIC_LANE_REG4
                            677 	.globl _DFE_STATIC_LANE_REG3
                            678 	.globl _DFE_STATIC_LANE_REG1
                            679 	.globl _DFE_STATIC_LANE_REG0
                            680 	.globl _DFE_DCE_REG0
                            681 	.globl _CAL_OFST_REG2
                            682 	.globl _CAL_OFST_REG1
                            683 	.globl _CAL_OFST_REG0
                            684 	.globl _DFE_READ_ODD_2C_REG8
                            685 	.globl _DFE_READ_EVEN_2C_REG8
                            686 	.globl _DFE_READ_ODD_2C_REG7
                            687 	.globl _DFE_READ_ODD_2C_REG6
                            688 	.globl _DFE_READ_ODD_2C_REG5
                            689 	.globl _DFE_READ_ODD_2C_REG4
                            690 	.globl _DFE_READ_ODD_2C_REG3
                            691 	.globl _DFE_READ_ODD_2C_REG2
                            692 	.globl _DFE_READ_ODD_2C_REG1
                            693 	.globl _DFE_READ_ODD_2C_REG0
                            694 	.globl _DFE_READ_EVEN_2C_REG7
                            695 	.globl _DFE_READ_EVEN_2C_REG6
                            696 	.globl _DFE_READ_EVEN_2C_REG5
                            697 	.globl _DFE_READ_EVEN_2C_REG4
                            698 	.globl _DFE_READ_EVEN_2C_REG3
                            699 	.globl _DFE_READ_EVEN_2C_REG2
                            700 	.globl _DFE_READ_EVEN_2C_REG1
                            701 	.globl _DFE_READ_EVEN_2C_REG0
                            702 	.globl _DFE_READ_ODD_SM_REG8
                            703 	.globl _DFE_READ_EVEN_SM_REG8
                            704 	.globl _DFE_READ_ODD_SM_REG7
                            705 	.globl _DFE_READ_ODD_SM_REG6
                            706 	.globl _DFE_READ_ODD_SM_REG5
                            707 	.globl _DFE_READ_ODD_SM_REG4
                            708 	.globl _DFE_READ_ODD_SM_REG3
                            709 	.globl _DFE_READ_ODD_SM_REG2
                            710 	.globl _DFE_READ_ODD_SM_REG1
                            711 	.globl _DFE_READ_ODD_SM_REG0
                            712 	.globl _DFE_READ_EVEN_SM_REG7
                            713 	.globl _DFE_READ_EVEN_SM_REG6
                            714 	.globl _DFE_READ_EVEN_SM_REG5
                            715 	.globl _DFE_READ_EVEN_SM_REG4
                            716 	.globl _DFE_READ_EVEN_SM_REG3
                            717 	.globl _DFE_READ_EVEN_SM_REG2
                            718 	.globl _DFE_READ_EVEN_SM_REG1
                            719 	.globl _DFE_READ_EVEN_SM_REG0
                            720 	.globl _DFE_FEXT_ODD_REG7
                            721 	.globl _DFE_FEXT_ODD_REG6
                            722 	.globl _DFE_FEXT_ODD_REG5
                            723 	.globl _DFE_FEXT_ODD_REG4
                            724 	.globl _DFE_FEXT_ODD_REG3
                            725 	.globl _DFE_FEXT_ODD_REG2
                            726 	.globl _DFE_FEXT_ODD_REG1
                            727 	.globl _DFE_FEXT_ODD_REG0
                            728 	.globl _DFE_FEXT_EVEN_REG7
                            729 	.globl _DFE_FEXT_EVEN_REG6
                            730 	.globl _DFE_FEXT_EVEN_REG5
                            731 	.globl _DFE_FEXT_EVEN_REG4
                            732 	.globl _DFE_FEXT_EVEN_REG3
                            733 	.globl _DFE_FEXT_EVEN_REG2
                            734 	.globl _DFE_FEXT_EVEN_REG1
                            735 	.globl _DFE_FEXT_EVEN_REG0
                            736 	.globl _DFE_DC_ODD_REG8
                            737 	.globl _DFE_DC_EVEN_REG8
                            738 	.globl _DFE_FEN_ODD_REG
                            739 	.globl _DFE_FEN_EVEN_REG
                            740 	.globl _DFE_STEP_REG1
                            741 	.globl _DFE_STEP_REG0
                            742 	.globl _DFE_ANA_REG1
                            743 	.globl _DFE_ANA_REG0
                            744 	.globl _DFE_CTRL_REG4
                            745 	.globl _RX_EQ_CLK_CTRL
                            746 	.globl _DFE_CTRL_REG3
                            747 	.globl _DFE_CTRL_REG2
                            748 	.globl _DFE_CTRL_REG1
                            749 	.globl _DFE_CTRL_REG0
                            750 	.globl _PT_COUNTER2
                            751 	.globl _PT_COUNTER1
                            752 	.globl _PT_COUNTER0
                            753 	.globl _PT_USER_PATTERN2
                            754 	.globl _PT_USER_PATTERN1
                            755 	.globl _PT_USER_PATTERN0
                            756 	.globl _PT_CONTROL1
                            757 	.globl _PT_CONTROL0
                            758 	.globl _XDATA_MEM_CHECKSUM_LANE1
                            759 	.globl _XDATA_MEM_CHECKSUM_LANE0
                            760 	.globl _MEM_ECC_ERR_ADDRESS0
                            761 	.globl _MCU_COMMAND0
                            762 	.globl _MCU_INT_CONTROL_13
                            763 	.globl _MCU_WDT_LANE
                            764 	.globl _MCU_IRQ_ISR_LANE
                            765 	.globl _ANA_IF_DFEO_REG0
                            766 	.globl _ANA_IF_DFEE_REG0
                            767 	.globl _ANA_IF_TRX_REG0
                            768 	.globl _EXT_INT_CONTROL
                            769 	.globl _MCU_DEBUG_LANE
                            770 	.globl _MCU_DEBUG3_LANE
                            771 	.globl _MCU_DEBUG2_LANE
                            772 	.globl _MCU_DEBUG1_LANE
                            773 	.globl _MCU_DEBUG0_LANE
                            774 	.globl _MCU_TIMER_CTRL_7_LANE
                            775 	.globl _MCU_TIMER_CTRL_6_LANE
                            776 	.globl _MCU_TIMER_CTRL_5_LANE
                            777 	.globl _MCU_TIMER_CTRL_4_LANE
                            778 	.globl _MCU_TIMER_CTRL_3_LANE
                            779 	.globl _MCU_TIMER_CTRL_2_LANE
                            780 	.globl _MCU_TIMER_CTRL_1_LANE
                            781 	.globl _MCU_MEM_REG2_LANE
                            782 	.globl _MCU_MEM_REG1_LANE
                            783 	.globl _MCU_IRQ_MASK_LANE
                            784 	.globl _MCU_IRQ_LANE
                            785 	.globl _MCU_TIMER3_CONTROL
                            786 	.globl _MCU_TIMER2_CONTROL
                            787 	.globl _MCU_TIMER1_CONTROL
                            788 	.globl _MCU_TIMER0_CONTROL
                            789 	.globl _MCU_TIMER_CONTROL
                            790 	.globl _MCU_INT12_CONTROL
                            791 	.globl _MCU_INT11_CONTROL
                            792 	.globl _MCU_INT10_CONTROL
                            793 	.globl _MCU_INT9_CONTROL
                            794 	.globl _MCU_INT8_CONTROL
                            795 	.globl _MCU_INT7_CONTROL
                            796 	.globl _MCU_INT6_CONTROL
                            797 	.globl _MCU_INT5_CONTROL
                            798 	.globl _MCU_INT4_CONTROL
                            799 	.globl _MCU_INT3_CONTROL
                            800 	.globl _MCU_INT2_CONTROL
                            801 	.globl _MCU_INT1_CONTROL
                            802 	.globl _MCU_INT0_CONTROL
                            803 	.globl _MCU_STATUS3_LANE
                            804 	.globl _MCU_STATUS2_LANE
                            805 	.globl _MCU_STATUS1_LANE
                            806 	.globl _MCU_STATUS0_LANE
                            807 	.globl _LANE_SYSTEM0
                            808 	.globl _CACHE_DEBUG1
                            809 	.globl _CACHE_DEBUG0
                            810 	.globl _MCU_GPIO
                            811 	.globl _MCU_CONTROL_LANE
                            812 	.globl _LANE_32G_PRESET_CFG16_LANE
                            813 	.globl _LANE_32G_PRESET_CFG14_LANE
                            814 	.globl _LANE_32G_PRESET_CFG12_LANE
                            815 	.globl _LANE_32G_PRESET_CFG10_LANE
                            816 	.globl _LANE_32G_PRESET_CFG8_LANE
                            817 	.globl _LANE_32G_PRESET_CFG6_LANE
                            818 	.globl _LANE_32G_PRESET_CFG4_LANE
                            819 	.globl _LANE_32G_PRESET_CFG2_LANE
                            820 	.globl _LANE_32G_PRESET_CFG0_LANE
                            821 	.globl _LANE_EQ_32G_CFG0_LANE
                            822 	.globl _LANE_16G_PRESET_CFG16_LANE
                            823 	.globl _LANE_16G_PRESET_CFG14_LANE
                            824 	.globl _LANE_16G_PRESET_CFG12_LANE
                            825 	.globl _LANE_16G_PRESET_CFG10_LANE
                            826 	.globl _LANE_16G_PRESET_CFG8_LANE
                            827 	.globl _LANE_16G_PRESET_CFG6_LANE
                            828 	.globl _LANE_16G_PRESET_CFG4_LANE
                            829 	.globl _LANE_16G_PRESET_CFG2_LANE
                            830 	.globl _LANE_16G_PRESET_CFG0_LANE
                            831 	.globl _LANE_EQ_16G_CFG0_LANE
                            832 	.globl _LANE_REMOTE_SET_LANE
                            833 	.globl _LANE_COEFF_MAX0_LANE
                            834 	.globl _LANE_PRESET_CFG16_LANE
                            835 	.globl _LANE_PRESET_CFG14_LANE
                            836 	.globl _LANE_PRESET_CFG12_LANE
                            837 	.globl _LANE_PRESET_CFG10_LANE
                            838 	.globl _LANE_PRESET_CFG8_LANE
                            839 	.globl _LANE_PRESET_CFG6_LANE
                            840 	.globl _LANE_PRESET_CFG4_LANE
                            841 	.globl _LANE_PRESET_CFG2_LANE
                            842 	.globl _LANE_PRESET_CFG0_LANE
                            843 	.globl _LANE_EQ_CFG1_LANE
                            844 	.globl _LANE_EQ_CFG0_LANE
                            845 	.globl _LANE_USB_DP_CFG2_LANE
                            846 	.globl _LANE_USB_DP_CFG1_LANE
                            847 	.globl _LANE_DP_PIE8_CFG0_LANE
                            848 	.globl _LANE_CFG_STATUS3_LANE
                            849 	.globl _LANE_CFG4
                            850 	.globl _LANE_CFG2_LANE
                            851 	.globl _LANE_CFG_STATUS2_LANE
                            852 	.globl _LANE_STATUS0
                            853 	.globl _LANE_CFG0
                            854 	.globl _SQ_REG0
                            855 	.globl _DTL_REG3
                            856 	.globl _DTL_REG2
                            857 	.globl _DTL_REG1
                            858 	.globl _DTL_REG0
                            859 	.globl _RX_LANE_INTERRUPT_REG1
                            860 	.globl _RX_CALIBRATION_REG
                            861 	.globl _INPUT_RX_PIN_REG3_LANE
                            862 	.globl _RX_DATA_PATH_REG
                            863 	.globl _RX_LANE_INTERRUPT_MASK
                            864 	.globl _RX_LANE_INTERRUPT
                            865 	.globl _CDR_LOCK_REG
                            866 	.globl _FRAME_SYNC_DET_REG6
                            867 	.globl _FRAME_SYNC_DET_REG5
                            868 	.globl _FRAME_SYNC_DET_REG4
                            869 	.globl _FRAME_SYNC_DET_REG3
                            870 	.globl _FRAME_SYNC_DET_REG2
                            871 	.globl _FRAME_SYNC_DET_REG1
                            872 	.globl _FRAME_SYNC_DET_REG0
                            873 	.globl _CLKGEN_RX_LANE_REG1_LANE
                            874 	.globl _DIG_RX_RSVD_REG0
                            875 	.globl _SPD_CTRL_RX_LANE_REG1_LANE
                            876 	.globl _INPUT_RX_PIN_REG2_LANE
                            877 	.globl _INPUT_RX_PIN_REG1_LANE
                            878 	.globl _INPUT_RX_PIN_REG0_LANE
                            879 	.globl _RX_SYSTEM_LANE
                            880 	.globl _PM_CTRL_RX_LANE_REG1_LANE
                            881 	.globl _MON_TOP
                            882 	.globl _ANALOG_TX_REALTIME_REG_1
                            883 	.globl _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE
                            884 	.globl _PM_CTRL_INTERRUPT_ISR_REG1_LANE
                            885 	.globl __FIELDNAME__LANE
                            886 	.globl _INPUT_TX_PIN_REG5_LANE
                            887 	.globl _DIG_TX_RSVD_REG0
                            888 	.globl _TX_CALIBRATION_LANE
                            889 	.globl _INPUT_TX_PIN_REG4_LANE
                            890 	.globl _TX_SYSTEM_LANE
                            891 	.globl _SPD_CTRL_TX_LANE_REG1_LANE
                            892 	.globl _SPD_CTRL_INTERRUPT_REG2
                            893 	.globl _SPD_CTRL_INTERRUPT_REG1_LANE
                            894 	.globl _TX_SPEED_CONVERT_LANE
                            895 	.globl _CLKGEN_TX_LANE_REG1_LANE
                            896 	.globl _PM_CTRL_INTERRUPT_REG2
                            897 	.globl _PM_CTRL_INTERRUPT_REG1_LANE
                            898 	.globl _INPUT_TX_PIN_REG3_LANE
                            899 	.globl _INPUT_TX_PIN_REG2_LANE
                            900 	.globl _INPUT_TX_PIN_REG1_LANE
                            901 	.globl _INPUT_TX_PIN_REG0_LANE
                            902 	.globl _PM_CTRL_TX_LANE_REG2_LANE
                            903 	.globl _PM_CTRL_TX_LANE_REG1_LANE
                            904 	.globl _UPHY14_CMN_ANAREG_TOP_214
                            905 	.globl _UPHY14_CMN_ANAREG_TOP_213
                            906 	.globl _UPHY14_CMN_ANAREG_TOP_212
                            907 	.globl _UPHY14_CMN_ANAREG_TOP_211
                            908 	.globl _UPHY14_CMN_ANAREG_TOP_210
                            909 	.globl _UPHY14_CMN_ANAREG_TOP_209
                            910 	.globl _UPHY14_CMN_ANAREG_TOP_208
                            911 	.globl _UPHY14_CMN_ANAREG_TOP_207
                            912 	.globl _UPHY14_CMN_ANAREG_TOP_206
                            913 	.globl _UPHY14_CMN_ANAREG_TOP_205
                            914 	.globl _UPHY14_CMN_ANAREG_TOP_204
                            915 	.globl _UPHY14_CMN_ANAREG_TOP_203
                            916 	.globl _UPHY14_CMN_ANAREG_TOP_202
                            917 	.globl _UPHY14_CMN_ANAREG_TOP_201
                            918 	.globl _UPHY14_CMN_ANAREG_TOP_200
                            919 	.globl _UPHY14_CMN_ANAREG_TOP_199
                            920 	.globl _UPHY14_CMN_ANAREG_TOP_198
                            921 	.globl _UPHY14_CMN_ANAREG_TOP_197
                            922 	.globl _UPHY14_CMN_ANAREG_TOP_196
                            923 	.globl _UPHY14_CMN_ANAREG_TOP_195
                            924 	.globl _UPHY14_CMN_ANAREG_TOP_194
                            925 	.globl _UPHY14_CMN_ANAREG_TOP_193
                            926 	.globl _UPHY14_CMN_ANAREG_TOP_192
                            927 	.globl _UPHY14_CMN_ANAREG_TOP_191
                            928 	.globl _UPHY14_CMN_ANAREG_TOP_190
                            929 	.globl _UPHY14_CMN_ANAREG_TOP_189
                            930 	.globl _UPHY14_CMN_ANAREG_TOP_188
                            931 	.globl _UPHY14_CMN_ANAREG_TOP_187
                            932 	.globl _UPHY14_CMN_ANAREG_TOP_186
                            933 	.globl _UPHY14_CMN_ANAREG_TOP_185
                            934 	.globl _UPHY14_CMN_ANAREG_TOP_184
                            935 	.globl _UPHY14_CMN_ANAREG_TOP_183
                            936 	.globl _UPHY14_CMN_ANAREG_TOP_182
                            937 	.globl _UPHY14_CMN_ANAREG_TOP_181
                            938 	.globl _UPHY14_CMN_ANAREG_TOP_180
                            939 	.globl _UPHY14_CMN_ANAREG_TOP_179
                            940 	.globl _UPHY14_CMN_ANAREG_TOP_178
                            941 	.globl _UPHY14_CMN_ANAREG_TOP_177
                            942 	.globl _UPHY14_CMN_ANAREG_TOP_176
                            943 	.globl _UPHY14_CMN_ANAREG_TOP_175
                            944 	.globl _UPHY14_CMN_ANAREG_TOP_174
                            945 	.globl _UPHY14_CMN_ANAREG_TOP_173
                            946 	.globl _UPHY14_CMN_ANAREG_TOP_172
                            947 	.globl _UPHY14_CMN_ANAREG_TOP_171
                            948 	.globl _UPHY14_CMN_ANAREG_TOP_170
                            949 	.globl _UPHY14_CMN_ANAREG_TOP_169
                            950 	.globl _UPHY14_CMN_ANAREG_TOP_168
                            951 	.globl _UPHY14_CMN_ANAREG_TOP_167
                            952 	.globl _UPHY14_CMN_ANAREG_TOP_166
                            953 	.globl _UPHY14_CMN_ANAREG_TOP_165
                            954 	.globl _UPHY14_CMN_ANAREG_TOP_164
                            955 	.globl _UPHY14_CMN_ANAREG_TOP_163
                            956 	.globl _UPHY14_CMN_ANAREG_TOP_162
                            957 	.globl _UPHY14_CMN_ANAREG_TOP_161
                            958 	.globl _UPHY14_CMN_ANAREG_TOP_160
                            959 	.globl _UPHY14_CMN_ANAREG_TOP_159
                            960 	.globl _UPHY14_CMN_ANAREG_TOP_158
                            961 	.globl _UPHY14_CMN_ANAREG_TOP_157
                            962 	.globl _UPHY14_CMN_ANAREG_TOP_156
                            963 	.globl _UPHY14_CMN_ANAREG_TOP_155
                            964 	.globl _UPHY14_CMN_ANAREG_TOP_154
                            965 	.globl _UPHY14_CMN_ANAREG_TOP_153
                            966 	.globl _UPHY14_CMN_ANAREG_TOP_152
                            967 	.globl _UPHY14_CMN_ANAREG_TOP_151
                            968 	.globl _UPHY14_CMN_ANAREG_TOP_150
                            969 	.globl _UPHY14_CMN_ANAREG_TOP_149
                            970 	.globl _UPHY14_CMN_ANAREG_TOP_148
                            971 	.globl _UPHY14_CMN_ANAREG_TOP_147
                            972 	.globl _UPHY14_CMN_ANAREG_TOP_146
                            973 	.globl _UPHY14_CMN_ANAREG_TOP_145
                            974 	.globl _UPHY14_CMN_ANAREG_TOP_144
                            975 	.globl _UPHY14_CMN_ANAREG_TOP_143
                            976 	.globl _UPHY14_CMN_ANAREG_TOP_142
                            977 	.globl _UPHY14_CMN_ANAREG_TOP_141
                            978 	.globl _UPHY14_CMN_ANAREG_TOP_140
                            979 	.globl _UPHY14_CMN_ANAREG_TOP_139
                            980 	.globl _UPHY14_CMN_ANAREG_TOP_138
                            981 	.globl _UPHY14_CMN_ANAREG_TOP_137
                            982 	.globl _UPHY14_CMN_ANAREG_TOP_136
                            983 	.globl _UPHY14_CMN_ANAREG_TOP_135
                            984 	.globl _UPHY14_CMN_ANAREG_TOP_134
                            985 	.globl _UPHY14_CMN_ANAREG_TOP_133
                            986 	.globl _UPHY14_CMN_ANAREG_TOP_132
                            987 	.globl _UPHY14_CMN_ANAREG_TOP_131
                            988 	.globl _UPHY14_CMN_ANAREG_TOP_130
                            989 	.globl _UPHY14_CMN_ANAREG_TOP_129
                            990 	.globl _UPHY14_CMN_ANAREG_TOP_128
                            991 	.globl _ANA_DFEO_REG_0B
                            992 	.globl _ANA_DFEO_REG_0A
                            993 	.globl _ANA_DFEO_REG_09
                            994 	.globl _ANA_DFEO_REG_08
                            995 	.globl _ANA_DFEO_REG_07
                            996 	.globl _ANA_DFEO_REG_06
                            997 	.globl _ANA_DFEO_REG_05
                            998 	.globl _ANA_DFEO_REG_04
                            999 	.globl _ANA_DFEO_REG_03
                           1000 	.globl _ANA_DFEO_REG_02
                           1001 	.globl _ANA_DFEO_REG_01
                           1002 	.globl _ANA_DFEO_REG_00
                           1003 	.globl _ANA_DFEO_REG_27
                           1004 	.globl _ANA_DFEO_REG_26
                           1005 	.globl _ANA_DFEO_REG_25
                           1006 	.globl _ANA_DFEO_REG_24
                           1007 	.globl _ANA_DFEO_REG_23
                           1008 	.globl _ANA_DFEO_REG_22
                           1009 	.globl _ANA_DFEO_REG_21
                           1010 	.globl _ANA_DFEO_REG_20
                           1011 	.globl _ANA_DFEO_REG_1F
                           1012 	.globl _ANA_DFEO_REG_1E
                           1013 	.globl _ANA_DFEO_REG_1D
                           1014 	.globl _ANA_DFEO_REG_1C
                           1015 	.globl _ANA_DFEO_REG_1B
                           1016 	.globl _ANA_DFEO_REG_1A
                           1017 	.globl _ANA_DFEO_REG_19
                           1018 	.globl _ANA_DFEO_REG_18
                           1019 	.globl _ANA_DFEO_REG_17
                           1020 	.globl _ANA_DFEO_REG_16
                           1021 	.globl _ANA_DFEO_REG_15
                           1022 	.globl _ANA_DFEO_REG_14
                           1023 	.globl _ANA_DFEO_REG_13
                           1024 	.globl _ANA_DFEO_REG_12
                           1025 	.globl _ANA_DFEO_REG_11
                           1026 	.globl _ANA_DFEO_REG_10
                           1027 	.globl _ANA_DFEO_REG_0F
                           1028 	.globl _ANA_DFEO_REG_0E
                           1029 	.globl _ANA_DFEO_REG_0D
                           1030 	.globl _ANA_DFEO_REG_0C
                           1031 	.globl _ANA_DFEE_REG_1D
                           1032 	.globl _ANA_DFEE_REG_1C
                           1033 	.globl _ANA_DFEE_REG_1B
                           1034 	.globl _ANA_DFEE_REG_1A
                           1035 	.globl _ANA_DFEE_REG_19
                           1036 	.globl _ANA_DFEE_REG_18
                           1037 	.globl _ANA_DFEE_REG_17
                           1038 	.globl _ANA_DFEE_REG_16
                           1039 	.globl _ANA_DFEE_REG_15
                           1040 	.globl _ANA_DFEE_REG_14
                           1041 	.globl _ANA_DFEE_REG_13
                           1042 	.globl _ANA_DFEE_REG_12
                           1043 	.globl _ANA_DFEE_REG_11
                           1044 	.globl _ANA_DFEE_REG_10
                           1045 	.globl _ANA_DFEE_REG_0F
                           1046 	.globl _ANA_DFEE_REG_0E
                           1047 	.globl _ANA_DFEE_REG_0D
                           1048 	.globl _ANA_DFEE_REG_0C
                           1049 	.globl _ANA_DFEE_REG_0B
                           1050 	.globl _ANA_DFEE_REG_0A
                           1051 	.globl _ANA_DFEE_REG_09
                           1052 	.globl _ANA_DFEE_REG_08
                           1053 	.globl _ANA_DFEE_REG_07
                           1054 	.globl _ANA_DFEE_REG_06
                           1055 	.globl _ANA_DFEE_REG_05
                           1056 	.globl _ANA_DFEE_REG_04
                           1057 	.globl _ANA_DFEE_REG_03
                           1058 	.globl _ANA_DFEE_REG_02
                           1059 	.globl _ANA_DFEE_REG_01
                           1060 	.globl _ANA_DFEE_REG_00
                           1061 	.globl _ANA_DFEE_REG_27
                           1062 	.globl _ANA_DFEE_REG_26
                           1063 	.globl _ANA_DFEE_REG_25
                           1064 	.globl _ANA_DFEE_REG_24
                           1065 	.globl _ANA_DFEE_REG_23
                           1066 	.globl _ANA_DFEE_REG_22
                           1067 	.globl _ANA_DFEE_REG_21
                           1068 	.globl _ANA_DFEE_REG_20
                           1069 	.globl _ANA_DFEE_REG_1F
                           1070 	.globl _ANA_DFEE_REG_1E
                           1071 	.globl _UPHY14_TRX_ANAREG_BOT_32
                           1072 	.globl _UPHY14_TRX_ANAREG_BOT_31
                           1073 	.globl _UPHY14_TRX_ANAREG_BOT_30
                           1074 	.globl _UPHY14_TRX_ANAREG_BOT_29
                           1075 	.globl _UPHY14_TRX_ANAREG_BOT_28
                           1076 	.globl _UPHY14_TRX_ANAREG_BOT_27
                           1077 	.globl _UPHY14_TRX_ANAREG_BOT_26
                           1078 	.globl _UPHY14_TRX_ANAREG_BOT_25
                           1079 	.globl _UPHY14_TRX_ANAREG_BOT_24
                           1080 	.globl _UPHY14_TRX_ANAREG_BOT_23
                           1081 	.globl _UPHY14_TRX_ANAREG_BOT_22
                           1082 	.globl _UPHY14_TRX_ANAREG_BOT_21
                           1083 	.globl _UPHY14_TRX_ANAREG_BOT_20
                           1084 	.globl _UPHY14_TRX_ANAREG_BOT_19
                           1085 	.globl _UPHY14_TRX_ANAREG_BOT_18
                           1086 	.globl _UPHY14_TRX_ANAREG_BOT_17
                           1087 	.globl _UPHY14_TRX_ANAREG_BOT_16
                           1088 	.globl _UPHY14_TRX_ANAREG_BOT_15
                           1089 	.globl _UPHY14_TRX_ANAREG_BOT_14
                           1090 	.globl _UPHY14_TRX_ANAREG_BOT_13
                           1091 	.globl _UPHY14_TRX_ANAREG_BOT_12
                           1092 	.globl _UPHY14_TRX_ANAREG_BOT_11
                           1093 	.globl _UPHY14_TRX_ANAREG_BOT_10
                           1094 	.globl _UPHY14_TRX_ANAREG_BOT_9
                           1095 	.globl _UPHY14_TRX_ANAREG_BOT_8
                           1096 	.globl _UPHY14_TRX_ANAREG_BOT_7
                           1097 	.globl _UPHY14_TRX_ANAREG_BOT_6
                           1098 	.globl _UPHY14_TRX_ANAREG_BOT_5
                           1099 	.globl _UPHY14_TRX_ANAREG_BOT_4
                           1100 	.globl _UPHY14_TRX_ANAREG_BOT_3
                           1101 	.globl _UPHY14_TRX_ANAREG_BOT_2
                           1102 	.globl _UPHY14_TRX_ANAREG_BOT_1
                           1103 	.globl _UPHY14_TRX_ANAREG_BOT_0
                           1104 	.globl _UPHY14_TRX_ANAREG_TOP_157
                           1105 	.globl _UPHY14_TRX_ANAREG_TOP_156
                           1106 	.globl _UPHY14_TRX_ANAREG_TOP_155
                           1107 	.globl _UPHY14_TRX_ANAREG_TOP_154
                           1108 	.globl _UPHY14_TRX_ANAREG_TOP_153
                           1109 	.globl _UPHY14_TRX_ANAREG_TOP_152
                           1110 	.globl _UPHY14_TRX_ANAREG_TOP_151
                           1111 	.globl _UPHY14_TRX_ANAREG_TOP_150
                           1112 	.globl _UPHY14_TRX_ANAREG_TOP_149
                           1113 	.globl _UPHY14_TRX_ANAREG_TOP_148
                           1114 	.globl _UPHY14_TRX_ANAREG_TOP_147
                           1115 	.globl _UPHY14_TRX_ANAREG_TOP_146
                           1116 	.globl _UPHY14_TRX_ANAREG_TOP_145
                           1117 	.globl _UPHY14_TRX_ANAREG_TOP_144
                           1118 	.globl _UPHY14_TRX_ANAREG_TOP_143
                           1119 	.globl _UPHY14_TRX_ANAREG_TOP_142
                           1120 	.globl _UPHY14_TRX_ANAREG_TOP_141
                           1121 	.globl _UPHY14_TRX_ANAREG_TOP_140
                           1122 	.globl _UPHY14_TRX_ANAREG_TOP_139
                           1123 	.globl _UPHY14_TRX_ANAREG_TOP_138
                           1124 	.globl _UPHY14_TRX_ANAREG_TOP_137
                           1125 	.globl _UPHY14_TRX_ANAREG_TOP_136
                           1126 	.globl _UPHY14_TRX_ANAREG_TOP_135
                           1127 	.globl _UPHY14_TRX_ANAREG_TOP_134
                           1128 	.globl _UPHY14_TRX_ANAREG_TOP_133
                           1129 	.globl _UPHY14_TRX_ANAREG_TOP_132
                           1130 	.globl _UPHY14_TRX_ANAREG_TOP_131
                           1131 	.globl _UPHY14_TRX_ANAREG_TOP_130
                           1132 	.globl _UPHY14_TRX_ANAREG_TOP_129
                           1133 	.globl _UPHY14_TRX_ANAREG_TOP_128
                           1134 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_143
                           1135 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_142
                           1136 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_141
                           1137 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_140
                           1138 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_139
                           1139 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_138
                           1140 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_137
                           1141 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_136
                           1142 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_135
                           1143 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_134
                           1144 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_133
                           1145 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_132
                           1146 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_131
                           1147 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_130
                           1148 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_129
                           1149 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_128
                           1150 	.globl _tx_status_pcie_mode
                           1151 	.globl _tx_pipe4_en
                           1152 	.globl _ctrl_trx_ffe_updated
                           1153 	.globl _gain_train_with_c
                           1154 	.globl _ctrl_trx_train_done
                           1155 	.globl _ctrl_tx_train_done
                           1156 	.globl _ctrl_rx_train_done
                           1157 	.globl _ctrl_tx_train_on
                           1158 	.globl _ctrl_rx_train_on
                           1159 	.globl _ctrl_cdr_phase_on
                           1160 	.globl _tx_remote_ctrl_on
                           1161 	.globl _tx_emph1_is_min
                           1162 	.globl _tx_emph1_is_max
                           1163 	.globl _tx_emph0_is_min
                           1164 	.globl _tx_emph0_is_max
                           1165 	.globl _tx_amp_is_min
                           1166 	.globl _tx_amp_is_max
                           1167 	.globl _cont_cal_on
                           1168 	.globl _no_pllspdchg
                           1169 	.globl _force_exit_cal
                           1170 	.globl _ring_use_250m
                           1171 	.globl _ring_pll_enabled
                           1172 	.globl _lc_pll_used
                           1173 	.globl _use_ring_pll
                           1174 	.globl _tx_pll_rate
                           1175 	.globl _rx_pll_rate
                           1176 	.globl _adapt_data_en
                           1177 	.globl _adapt_slicer_en
                           1178 	.globl _do_apta
                           1179 	.globl _do_tx_apta
                           1180 	.globl _do_rx_apta
                           1181 	.globl _do_rxinit
                           1182 	.globl _do_rxtrain
                           1183 	.globl _do_train
                           1184 	.globl _do_wake
                           1185 	.globl _timeout2
                           1186 	.globl _timeout
                           1187 	.globl _sync_check
                           1188 	.globl _int_pu_tx
                           1189 	.globl _int_pu_rx
                           1190 	.globl _SAMPLER_CAL_SM_SAVE
                           1191 	.globl _SAMPLER_TRAIN_SAVE
                           1192 	.globl _SAMPLER_CAL_SAVE
                           1193 	.globl _NEG
                           1194 	.globl _SIGN_POS
                           1195 ;--------------------------------------------------------
                           1196 ; special function registers
                           1197 ;--------------------------------------------------------
                           1198 	.area RSEG    (ABS,DATA)
   0000                    1199 	.org 0x0000
                    0080   1200 _P0	=	0x0080
                    0082   1201 _DPL	=	0x0082
                    0083   1202 _DPH	=	0x0083
                    0086   1203 _WDTREL	=	0x0086
                    0087   1204 _PCON	=	0x0087
                    0088   1205 _TCON	=	0x0088
                    0089   1206 _TMOD	=	0x0089
                    008A   1207 _TL0	=	0x008a
                    008B   1208 _TL1	=	0x008b
                    008C   1209 _TH0	=	0x008c
                    008D   1210 _TH1	=	0x008d
                    008E   1211 _CKCON	=	0x008e
                    0090   1212 _P1	=	0x0090
                    0092   1213 _DPS	=	0x0092
                    0094   1214 _PSBANK	=	0x0094
                    0098   1215 _SCON	=	0x0098
                    0099   1216 _SBUF	=	0x0099
                    009A   1217 _IEN2	=	0x009a
                    00A0   1218 _P2	=	0x00a0
                    00A1   1219 _DMAS0	=	0x00a1
                    00A2   1220 _DMAS1	=	0x00a2
                    00A3   1221 _DMAS2	=	0x00a3
                    00A4   1222 _DMAT0	=	0x00a4
                    00A5   1223 _DMAT1	=	0x00a5
                    00A6   1224 _DMAT2	=	0x00a6
                    00A8   1225 _IEN0	=	0x00a8
                    00A9   1226 _IP0	=	0x00a9
                    00AA   1227 _S0RELL	=	0x00aa
                    00B0   1228 _P3	=	0x00b0
                    00B1   1229 _DMAC0	=	0x00b1
                    00B2   1230 _DMAC1	=	0x00b2
                    00B3   1231 _DMAC2	=	0x00b3
                    00B4   1232 _DMASEL	=	0x00b4
                    00B5   1233 _DMAM0	=	0x00b5
                    00B6   1234 _DMAM1	=	0x00b6
                    00B8   1235 _IEN1	=	0x00b8
                    00B9   1236 _IP1	=	0x00b9
                    00BA   1237 _S0RELH	=	0x00ba
                    00C0   1238 _IRCON	=	0x00c0
                    00C1   1239 _CCEN	=	0x00c1
                    00C8   1240 _T2CON	=	0x00c8
                    00CA   1241 _RCAP2L	=	0x00ca
                    00CB   1242 _RCAP2H	=	0x00cb
                    00CC   1243 _TL2	=	0x00cc
                    00CD   1244 _TH2	=	0x00cd
                    00D0   1245 _PSW	=	0x00d0
                    00D8   1246 _ADCON	=	0x00d8
                    00E0   1247 _ACC	=	0x00e0
                    00E8   1248 _EIE	=	0x00e8
                    00F0   1249 _B	=	0x00f0
                    00F7   1250 _SRST	=	0x00f7
                    8C8A   1251 _TMR0	=	0x8c8a
                    8D8B   1252 _TMR1	=	0x8d8b
                    CDCC   1253 _TMR2	=	0xcdcc
                    A2A1   1254 _DMASA	=	0xa2a1
                    A5A4   1255 _DMATA	=	0xa5a4
                    B2B1   1256 _DMAC	=	0xb2b1
                           1257 ;--------------------------------------------------------
                           1258 ; special function bits
                           1259 ;--------------------------------------------------------
                           1260 	.area RSEG    (ABS,DATA)
   0000                    1261 	.org 0x0000
                    0080   1262 _P0_0	=	0x0080
                    0081   1263 _P0_1	=	0x0081
                    0082   1264 _P0_2	=	0x0082
                    0083   1265 _P0_3	=	0x0083
                    0084   1266 _P0_4	=	0x0084
                    0085   1267 _P0_5	=	0x0085
                    0086   1268 _P0_6	=	0x0086
                    0087   1269 _P0_7	=	0x0087
                    0090   1270 _P1_0	=	0x0090
                    0091   1271 _P1_1	=	0x0091
                    0092   1272 _P1_2	=	0x0092
                    0093   1273 _P1_3	=	0x0093
                    0094   1274 _P1_4	=	0x0094
                    0095   1275 _P1_5	=	0x0095
                    0096   1276 _P1_6	=	0x0096
                    0097   1277 _P1_7	=	0x0097
                    00A0   1278 _P2_0	=	0x00a0
                    00A1   1279 _P2_1	=	0x00a1
                    00A2   1280 _P2_2	=	0x00a2
                    00A3   1281 _P2_3	=	0x00a3
                    00A4   1282 _P2_4	=	0x00a4
                    00A5   1283 _P2_5	=	0x00a5
                    00A6   1284 _P2_6	=	0x00a6
                    00A7   1285 _P2_7	=	0x00a7
                    00B0   1286 _P3_0	=	0x00b0
                    00B1   1287 _P3_1	=	0x00b1
                    00B2   1288 _P3_2	=	0x00b2
                    00B3   1289 _P3_3	=	0x00b3
                    00B4   1290 _P3_4	=	0x00b4
                    00B5   1291 _P3_5	=	0x00b5
                    00B6   1292 _P3_6	=	0x00b6
                    00B7   1293 _P3_7	=	0x00b7
                    0088   1294 _IT0	=	0x0088
                    0089   1295 _IE0	=	0x0089
                    008A   1296 _IT1	=	0x008a
                    008B   1297 _IE1	=	0x008b
                    008C   1298 _TR0	=	0x008c
                    008D   1299 _TF0	=	0x008d
                    008E   1300 _TR1	=	0x008e
                    008F   1301 _TF1	=	0x008f
                    00A8   1302 _EX0	=	0x00a8
                    00A9   1303 _ET0	=	0x00a9
                    00AA   1304 _EX1	=	0x00aa
                    00AB   1305 _ET1	=	0x00ab
                    00AC   1306 _ES	=	0x00ac
                    00AD   1307 _ET2	=	0x00ad
                    00AE   1308 _WDT	=	0x00ae
                    00AF   1309 _EA	=	0x00af
                    00B8   1310 _EX7	=	0x00b8
                    00B9   1311 _EX2	=	0x00b9
                    00BA   1312 _EX3	=	0x00ba
                    00BB   1313 _EX4	=	0x00bb
                    00BC   1314 _EX5	=	0x00bc
                    00BD   1315 _EX6	=	0x00bd
                    00BE   1316 _PS1	=	0x00be
                    009A   1317 _ES1	=	0x009a
                    009B   1318 _EX8	=	0x009b
                    009C   1319 _EX9	=	0x009c
                    009D   1320 _EX10	=	0x009d
                    009E   1321 _EX11	=	0x009e
                    009F   1322 _EX12	=	0x009f
                    0098   1323 _RI	=	0x0098
                    0099   1324 _TI	=	0x0099
                    00C6   1325 _TF2	=	0x00c6
                           1326 ;--------------------------------------------------------
                           1327 ; overlayable register banks
                           1328 ;--------------------------------------------------------
                           1329 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1330 	.ds 8
                           1331 ;--------------------------------------------------------
                           1332 ; internal ram data
                           1333 ;--------------------------------------------------------
                           1334 	.area DSEG    (DATA)
   0026                    1335 _SIGN_POS::
   0026                    1336 	.ds 2
   0028                    1337 _NEG::
   0028                    1338 	.ds 2
   002A                    1339 _SAMPLER_CAL_SAVE::
   002A                    1340 	.ds 2
   002C                    1341 _SAMPLER_TRAIN_SAVE::
   002C                    1342 	.ds 2
   002E                    1343 _SAMPLER_CAL_SM_SAVE::
   002E                    1344 	.ds 2
                           1345 ;--------------------------------------------------------
                           1346 ; overlayable items in internal ram 
                           1347 ;--------------------------------------------------------
                           1348 	.area OSEG    (OVR,DATA)
                           1349 ;--------------------------------------------------------
                           1350 ; indirectly addressable internal ram data
                           1351 ;--------------------------------------------------------
                           1352 	.area ISEG    (DATA)
                           1353 ;--------------------------------------------------------
                           1354 ; absolute internal ram data
                           1355 ;--------------------------------------------------------
                           1356 	.area IABS    (ABS,DATA)
                           1357 	.area IABS    (ABS,DATA)
                           1358 ;--------------------------------------------------------
                           1359 ; bit data
                           1360 ;--------------------------------------------------------
                           1361 	.area BSEG    (BIT)
   0000                    1362 _int_pu_rx::
   0000                    1363 	.ds 1
   0001                    1364 _int_pu_tx::
   0001                    1365 	.ds 1
   0002                    1366 _sync_check::
   0002                    1367 	.ds 1
   0003                    1368 _timeout::
   0003                    1369 	.ds 1
   0004                    1370 _timeout2::
   0004                    1371 	.ds 1
   0005                    1372 _do_wake::
   0005                    1373 	.ds 1
   0006                    1374 _do_train::
   0006                    1375 	.ds 1
   0007                    1376 _do_rxtrain::
   0007                    1377 	.ds 1
   0008                    1378 _do_rxinit::
   0008                    1379 	.ds 1
   0009                    1380 _do_rx_apta::
   0009                    1381 	.ds 1
   000A                    1382 _do_tx_apta::
   000A                    1383 	.ds 1
   000B                    1384 _do_apta::
   000B                    1385 	.ds 1
   000C                    1386 _adapt_slicer_en::
   000C                    1387 	.ds 1
   000D                    1388 _adapt_data_en::
   000D                    1389 	.ds 1
   000E                    1390 _rx_pll_rate::
   000E                    1391 	.ds 1
   000F                    1392 _tx_pll_rate::
   000F                    1393 	.ds 1
   0010                    1394 _use_ring_pll::
   0010                    1395 	.ds 1
   0011                    1396 _lc_pll_used::
   0011                    1397 	.ds 1
   0012                    1398 _ring_pll_enabled::
   0012                    1399 	.ds 1
   0013                    1400 _ring_use_250m::
   0013                    1401 	.ds 1
   0014                    1402 _force_exit_cal::
   0014                    1403 	.ds 1
   0015                    1404 _no_pllspdchg::
   0015                    1405 	.ds 1
   0016                    1406 _cont_cal_on::
   0016                    1407 	.ds 1
   0017                    1408 _tx_amp_is_max::
   0017                    1409 	.ds 1
   0018                    1410 _tx_amp_is_min::
   0018                    1411 	.ds 1
   0019                    1412 _tx_emph0_is_max::
   0019                    1413 	.ds 1
   001A                    1414 _tx_emph0_is_min::
   001A                    1415 	.ds 1
   001B                    1416 _tx_emph1_is_max::
   001B                    1417 	.ds 1
   001C                    1418 _tx_emph1_is_min::
   001C                    1419 	.ds 1
   001D                    1420 _tx_remote_ctrl_on::
   001D                    1421 	.ds 1
   001E                    1422 _ctrl_cdr_phase_on::
   001E                    1423 	.ds 1
   001F                    1424 _ctrl_rx_train_on::
   001F                    1425 	.ds 1
   0020                    1426 _ctrl_tx_train_on::
   0020                    1427 	.ds 1
   0021                    1428 _ctrl_rx_train_done::
   0021                    1429 	.ds 1
   0022                    1430 _ctrl_tx_train_done::
   0022                    1431 	.ds 1
   0023                    1432 _ctrl_trx_train_done::
   0023                    1433 	.ds 1
   0024                    1434 _gain_train_with_c::
   0024                    1435 	.ds 1
   0025                    1436 _ctrl_trx_ffe_updated::
   0025                    1437 	.ds 1
   0026                    1438 _tx_pipe4_en::
   0026                    1439 	.ds 1
   0027                    1440 _tx_status_pcie_mode::
   0027                    1441 	.ds 1
                           1442 ;--------------------------------------------------------
                           1443 ; paged external ram data
                           1444 ;--------------------------------------------------------
                           1445 	.area PSEG    (PAG,XDATA)
                           1446 ;--------------------------------------------------------
                           1447 ; external ram data
                           1448 ;--------------------------------------------------------
                           1449 	.area XSEG    (XDATA)
                    1000   1450 _UPHY14_TRX_LANEPLL_ANAREG_TOP_128	=	0x1000
                    1004   1451 _UPHY14_TRX_LANEPLL_ANAREG_TOP_129	=	0x1004
                    1008   1452 _UPHY14_TRX_LANEPLL_ANAREG_TOP_130	=	0x1008
                    100C   1453 _UPHY14_TRX_LANEPLL_ANAREG_TOP_131	=	0x100c
                    1010   1454 _UPHY14_TRX_LANEPLL_ANAREG_TOP_132	=	0x1010
                    1014   1455 _UPHY14_TRX_LANEPLL_ANAREG_TOP_133	=	0x1014
                    1018   1456 _UPHY14_TRX_LANEPLL_ANAREG_TOP_134	=	0x1018
                    101C   1457 _UPHY14_TRX_LANEPLL_ANAREG_TOP_135	=	0x101c
                    1020   1458 _UPHY14_TRX_LANEPLL_ANAREG_TOP_136	=	0x1020
                    1024   1459 _UPHY14_TRX_LANEPLL_ANAREG_TOP_137	=	0x1024
                    1028   1460 _UPHY14_TRX_LANEPLL_ANAREG_TOP_138	=	0x1028
                    102C   1461 _UPHY14_TRX_LANEPLL_ANAREG_TOP_139	=	0x102c
                    1030   1462 _UPHY14_TRX_LANEPLL_ANAREG_TOP_140	=	0x1030
                    1034   1463 _UPHY14_TRX_LANEPLL_ANAREG_TOP_141	=	0x1034
                    1038   1464 _UPHY14_TRX_LANEPLL_ANAREG_TOP_142	=	0x1038
                    103C   1465 _UPHY14_TRX_LANEPLL_ANAREG_TOP_143	=	0x103c
                    0200   1466 _UPHY14_TRX_ANAREG_TOP_128	=	0x0200
                    0204   1467 _UPHY14_TRX_ANAREG_TOP_129	=	0x0204
                    0208   1468 _UPHY14_TRX_ANAREG_TOP_130	=	0x0208
                    020C   1469 _UPHY14_TRX_ANAREG_TOP_131	=	0x020c
                    0210   1470 _UPHY14_TRX_ANAREG_TOP_132	=	0x0210
                    0214   1471 _UPHY14_TRX_ANAREG_TOP_133	=	0x0214
                    0218   1472 _UPHY14_TRX_ANAREG_TOP_134	=	0x0218
                    021C   1473 _UPHY14_TRX_ANAREG_TOP_135	=	0x021c
                    0220   1474 _UPHY14_TRX_ANAREG_TOP_136	=	0x0220
                    0224   1475 _UPHY14_TRX_ANAREG_TOP_137	=	0x0224
                    0228   1476 _UPHY14_TRX_ANAREG_TOP_138	=	0x0228
                    022C   1477 _UPHY14_TRX_ANAREG_TOP_139	=	0x022c
                    0230   1478 _UPHY14_TRX_ANAREG_TOP_140	=	0x0230
                    0234   1479 _UPHY14_TRX_ANAREG_TOP_141	=	0x0234
                    0238   1480 _UPHY14_TRX_ANAREG_TOP_142	=	0x0238
                    023C   1481 _UPHY14_TRX_ANAREG_TOP_143	=	0x023c
                    0240   1482 _UPHY14_TRX_ANAREG_TOP_144	=	0x0240
                    0244   1483 _UPHY14_TRX_ANAREG_TOP_145	=	0x0244
                    0248   1484 _UPHY14_TRX_ANAREG_TOP_146	=	0x0248
                    024C   1485 _UPHY14_TRX_ANAREG_TOP_147	=	0x024c
                    0250   1486 _UPHY14_TRX_ANAREG_TOP_148	=	0x0250
                    0254   1487 _UPHY14_TRX_ANAREG_TOP_149	=	0x0254
                    0258   1488 _UPHY14_TRX_ANAREG_TOP_150	=	0x0258
                    025C   1489 _UPHY14_TRX_ANAREG_TOP_151	=	0x025c
                    0260   1490 _UPHY14_TRX_ANAREG_TOP_152	=	0x0260
                    0264   1491 _UPHY14_TRX_ANAREG_TOP_153	=	0x0264
                    0268   1492 _UPHY14_TRX_ANAREG_TOP_154	=	0x0268
                    026C   1493 _UPHY14_TRX_ANAREG_TOP_155	=	0x026c
                    0270   1494 _UPHY14_TRX_ANAREG_TOP_156	=	0x0270
                    0274   1495 _UPHY14_TRX_ANAREG_TOP_157	=	0x0274
                    0000   1496 _UPHY14_TRX_ANAREG_BOT_0	=	0x0000
                    0004   1497 _UPHY14_TRX_ANAREG_BOT_1	=	0x0004
                    0008   1498 _UPHY14_TRX_ANAREG_BOT_2	=	0x0008
                    000C   1499 _UPHY14_TRX_ANAREG_BOT_3	=	0x000c
                    0010   1500 _UPHY14_TRX_ANAREG_BOT_4	=	0x0010
                    0014   1501 _UPHY14_TRX_ANAREG_BOT_5	=	0x0014
                    0018   1502 _UPHY14_TRX_ANAREG_BOT_6	=	0x0018
                    001C   1503 _UPHY14_TRX_ANAREG_BOT_7	=	0x001c
                    0020   1504 _UPHY14_TRX_ANAREG_BOT_8	=	0x0020
                    0024   1505 _UPHY14_TRX_ANAREG_BOT_9	=	0x0024
                    0028   1506 _UPHY14_TRX_ANAREG_BOT_10	=	0x0028
                    002C   1507 _UPHY14_TRX_ANAREG_BOT_11	=	0x002c
                    0030   1508 _UPHY14_TRX_ANAREG_BOT_12	=	0x0030
                    0034   1509 _UPHY14_TRX_ANAREG_BOT_13	=	0x0034
                    0038   1510 _UPHY14_TRX_ANAREG_BOT_14	=	0x0038
                    003C   1511 _UPHY14_TRX_ANAREG_BOT_15	=	0x003c
                    0040   1512 _UPHY14_TRX_ANAREG_BOT_16	=	0x0040
                    0044   1513 _UPHY14_TRX_ANAREG_BOT_17	=	0x0044
                    0048   1514 _UPHY14_TRX_ANAREG_BOT_18	=	0x0048
                    004C   1515 _UPHY14_TRX_ANAREG_BOT_19	=	0x004c
                    0050   1516 _UPHY14_TRX_ANAREG_BOT_20	=	0x0050
                    0054   1517 _UPHY14_TRX_ANAREG_BOT_21	=	0x0054
                    0058   1518 _UPHY14_TRX_ANAREG_BOT_22	=	0x0058
                    005C   1519 _UPHY14_TRX_ANAREG_BOT_23	=	0x005c
                    0060   1520 _UPHY14_TRX_ANAREG_BOT_24	=	0x0060
                    0064   1521 _UPHY14_TRX_ANAREG_BOT_25	=	0x0064
                    0068   1522 _UPHY14_TRX_ANAREG_BOT_26	=	0x0068
                    006C   1523 _UPHY14_TRX_ANAREG_BOT_27	=	0x006c
                    0070   1524 _UPHY14_TRX_ANAREG_BOT_28	=	0x0070
                    0074   1525 _UPHY14_TRX_ANAREG_BOT_29	=	0x0074
                    0078   1526 _UPHY14_TRX_ANAREG_BOT_30	=	0x0078
                    007C   1527 _UPHY14_TRX_ANAREG_BOT_31	=	0x007c
                    0080   1528 _UPHY14_TRX_ANAREG_BOT_32	=	0x0080
                    0478   1529 _ANA_DFEE_REG_1E	=	0x0478
                    047C   1530 _ANA_DFEE_REG_1F	=	0x047c
                    0480   1531 _ANA_DFEE_REG_20	=	0x0480
                    0484   1532 _ANA_DFEE_REG_21	=	0x0484
                    0488   1533 _ANA_DFEE_REG_22	=	0x0488
                    048C   1534 _ANA_DFEE_REG_23	=	0x048c
                    0490   1535 _ANA_DFEE_REG_24	=	0x0490
                    0494   1536 _ANA_DFEE_REG_25	=	0x0494
                    0498   1537 _ANA_DFEE_REG_26	=	0x0498
                    049C   1538 _ANA_DFEE_REG_27	=	0x049c
                    0400   1539 _ANA_DFEE_REG_00	=	0x0400
                    0404   1540 _ANA_DFEE_REG_01	=	0x0404
                    0408   1541 _ANA_DFEE_REG_02	=	0x0408
                    040C   1542 _ANA_DFEE_REG_03	=	0x040c
                    0410   1543 _ANA_DFEE_REG_04	=	0x0410
                    0414   1544 _ANA_DFEE_REG_05	=	0x0414
                    0418   1545 _ANA_DFEE_REG_06	=	0x0418
                    041C   1546 _ANA_DFEE_REG_07	=	0x041c
                    0420   1547 _ANA_DFEE_REG_08	=	0x0420
                    0424   1548 _ANA_DFEE_REG_09	=	0x0424
                    0428   1549 _ANA_DFEE_REG_0A	=	0x0428
                    042C   1550 _ANA_DFEE_REG_0B	=	0x042c
                    0430   1551 _ANA_DFEE_REG_0C	=	0x0430
                    0434   1552 _ANA_DFEE_REG_0D	=	0x0434
                    0438   1553 _ANA_DFEE_REG_0E	=	0x0438
                    043C   1554 _ANA_DFEE_REG_0F	=	0x043c
                    0440   1555 _ANA_DFEE_REG_10	=	0x0440
                    0444   1556 _ANA_DFEE_REG_11	=	0x0444
                    0448   1557 _ANA_DFEE_REG_12	=	0x0448
                    044C   1558 _ANA_DFEE_REG_13	=	0x044c
                    0450   1559 _ANA_DFEE_REG_14	=	0x0450
                    0454   1560 _ANA_DFEE_REG_15	=	0x0454
                    0458   1561 _ANA_DFEE_REG_16	=	0x0458
                    045C   1562 _ANA_DFEE_REG_17	=	0x045c
                    0460   1563 _ANA_DFEE_REG_18	=	0x0460
                    0464   1564 _ANA_DFEE_REG_19	=	0x0464
                    0468   1565 _ANA_DFEE_REG_1A	=	0x0468
                    046C   1566 _ANA_DFEE_REG_1B	=	0x046c
                    0470   1567 _ANA_DFEE_REG_1C	=	0x0470
                    0474   1568 _ANA_DFEE_REG_1D	=	0x0474
                    0830   1569 _ANA_DFEO_REG_0C	=	0x0830
                    0834   1570 _ANA_DFEO_REG_0D	=	0x0834
                    0838   1571 _ANA_DFEO_REG_0E	=	0x0838
                    083C   1572 _ANA_DFEO_REG_0F	=	0x083c
                    0840   1573 _ANA_DFEO_REG_10	=	0x0840
                    0844   1574 _ANA_DFEO_REG_11	=	0x0844
                    0848   1575 _ANA_DFEO_REG_12	=	0x0848
                    084C   1576 _ANA_DFEO_REG_13	=	0x084c
                    0850   1577 _ANA_DFEO_REG_14	=	0x0850
                    0854   1578 _ANA_DFEO_REG_15	=	0x0854
                    0858   1579 _ANA_DFEO_REG_16	=	0x0858
                    085C   1580 _ANA_DFEO_REG_17	=	0x085c
                    0860   1581 _ANA_DFEO_REG_18	=	0x0860
                    0864   1582 _ANA_DFEO_REG_19	=	0x0864
                    0868   1583 _ANA_DFEO_REG_1A	=	0x0868
                    086C   1584 _ANA_DFEO_REG_1B	=	0x086c
                    0870   1585 _ANA_DFEO_REG_1C	=	0x0870
                    0874   1586 _ANA_DFEO_REG_1D	=	0x0874
                    0878   1587 _ANA_DFEO_REG_1E	=	0x0878
                    087C   1588 _ANA_DFEO_REG_1F	=	0x087c
                    0880   1589 _ANA_DFEO_REG_20	=	0x0880
                    0884   1590 _ANA_DFEO_REG_21	=	0x0884
                    0888   1591 _ANA_DFEO_REG_22	=	0x0888
                    088C   1592 _ANA_DFEO_REG_23	=	0x088c
                    0890   1593 _ANA_DFEO_REG_24	=	0x0890
                    0894   1594 _ANA_DFEO_REG_25	=	0x0894
                    0898   1595 _ANA_DFEO_REG_26	=	0x0898
                    089C   1596 _ANA_DFEO_REG_27	=	0x089c
                    0800   1597 _ANA_DFEO_REG_00	=	0x0800
                    0804   1598 _ANA_DFEO_REG_01	=	0x0804
                    0808   1599 _ANA_DFEO_REG_02	=	0x0808
                    080C   1600 _ANA_DFEO_REG_03	=	0x080c
                    0810   1601 _ANA_DFEO_REG_04	=	0x0810
                    0814   1602 _ANA_DFEO_REG_05	=	0x0814
                    0818   1603 _ANA_DFEO_REG_06	=	0x0818
                    081C   1604 _ANA_DFEO_REG_07	=	0x081c
                    0820   1605 _ANA_DFEO_REG_08	=	0x0820
                    0824   1606 _ANA_DFEO_REG_09	=	0x0824
                    0828   1607 _ANA_DFEO_REG_0A	=	0x0828
                    082C   1608 _ANA_DFEO_REG_0B	=	0x082c
                    8200   1609 _UPHY14_CMN_ANAREG_TOP_128	=	0x8200
                    8204   1610 _UPHY14_CMN_ANAREG_TOP_129	=	0x8204
                    8208   1611 _UPHY14_CMN_ANAREG_TOP_130	=	0x8208
                    820C   1612 _UPHY14_CMN_ANAREG_TOP_131	=	0x820c
                    8210   1613 _UPHY14_CMN_ANAREG_TOP_132	=	0x8210
                    8214   1614 _UPHY14_CMN_ANAREG_TOP_133	=	0x8214
                    8218   1615 _UPHY14_CMN_ANAREG_TOP_134	=	0x8218
                    821C   1616 _UPHY14_CMN_ANAREG_TOP_135	=	0x821c
                    8220   1617 _UPHY14_CMN_ANAREG_TOP_136	=	0x8220
                    8224   1618 _UPHY14_CMN_ANAREG_TOP_137	=	0x8224
                    8228   1619 _UPHY14_CMN_ANAREG_TOP_138	=	0x8228
                    822C   1620 _UPHY14_CMN_ANAREG_TOP_139	=	0x822c
                    8230   1621 _UPHY14_CMN_ANAREG_TOP_140	=	0x8230
                    8234   1622 _UPHY14_CMN_ANAREG_TOP_141	=	0x8234
                    8238   1623 _UPHY14_CMN_ANAREG_TOP_142	=	0x8238
                    823C   1624 _UPHY14_CMN_ANAREG_TOP_143	=	0x823c
                    8240   1625 _UPHY14_CMN_ANAREG_TOP_144	=	0x8240
                    8244   1626 _UPHY14_CMN_ANAREG_TOP_145	=	0x8244
                    8248   1627 _UPHY14_CMN_ANAREG_TOP_146	=	0x8248
                    824C   1628 _UPHY14_CMN_ANAREG_TOP_147	=	0x824c
                    8250   1629 _UPHY14_CMN_ANAREG_TOP_148	=	0x8250
                    8254   1630 _UPHY14_CMN_ANAREG_TOP_149	=	0x8254
                    8258   1631 _UPHY14_CMN_ANAREG_TOP_150	=	0x8258
                    825C   1632 _UPHY14_CMN_ANAREG_TOP_151	=	0x825c
                    8260   1633 _UPHY14_CMN_ANAREG_TOP_152	=	0x8260
                    8264   1634 _UPHY14_CMN_ANAREG_TOP_153	=	0x8264
                    8268   1635 _UPHY14_CMN_ANAREG_TOP_154	=	0x8268
                    826C   1636 _UPHY14_CMN_ANAREG_TOP_155	=	0x826c
                    8270   1637 _UPHY14_CMN_ANAREG_TOP_156	=	0x8270
                    8274   1638 _UPHY14_CMN_ANAREG_TOP_157	=	0x8274
                    8278   1639 _UPHY14_CMN_ANAREG_TOP_158	=	0x8278
                    827C   1640 _UPHY14_CMN_ANAREG_TOP_159	=	0x827c
                    8280   1641 _UPHY14_CMN_ANAREG_TOP_160	=	0x8280
                    8284   1642 _UPHY14_CMN_ANAREG_TOP_161	=	0x8284
                    8288   1643 _UPHY14_CMN_ANAREG_TOP_162	=	0x8288
                    828C   1644 _UPHY14_CMN_ANAREG_TOP_163	=	0x828c
                    8290   1645 _UPHY14_CMN_ANAREG_TOP_164	=	0x8290
                    8294   1646 _UPHY14_CMN_ANAREG_TOP_165	=	0x8294
                    8298   1647 _UPHY14_CMN_ANAREG_TOP_166	=	0x8298
                    829C   1648 _UPHY14_CMN_ANAREG_TOP_167	=	0x829c
                    82A0   1649 _UPHY14_CMN_ANAREG_TOP_168	=	0x82a0
                    82A4   1650 _UPHY14_CMN_ANAREG_TOP_169	=	0x82a4
                    82A8   1651 _UPHY14_CMN_ANAREG_TOP_170	=	0x82a8
                    82AC   1652 _UPHY14_CMN_ANAREG_TOP_171	=	0x82ac
                    82B0   1653 _UPHY14_CMN_ANAREG_TOP_172	=	0x82b0
                    82B4   1654 _UPHY14_CMN_ANAREG_TOP_173	=	0x82b4
                    82B8   1655 _UPHY14_CMN_ANAREG_TOP_174	=	0x82b8
                    82BC   1656 _UPHY14_CMN_ANAREG_TOP_175	=	0x82bc
                    82C0   1657 _UPHY14_CMN_ANAREG_TOP_176	=	0x82c0
                    82C4   1658 _UPHY14_CMN_ANAREG_TOP_177	=	0x82c4
                    82C8   1659 _UPHY14_CMN_ANAREG_TOP_178	=	0x82c8
                    82CC   1660 _UPHY14_CMN_ANAREG_TOP_179	=	0x82cc
                    82D0   1661 _UPHY14_CMN_ANAREG_TOP_180	=	0x82d0
                    82D4   1662 _UPHY14_CMN_ANAREG_TOP_181	=	0x82d4
                    82D8   1663 _UPHY14_CMN_ANAREG_TOP_182	=	0x82d8
                    82DC   1664 _UPHY14_CMN_ANAREG_TOP_183	=	0x82dc
                    82E0   1665 _UPHY14_CMN_ANAREG_TOP_184	=	0x82e0
                    82E4   1666 _UPHY14_CMN_ANAREG_TOP_185	=	0x82e4
                    82E8   1667 _UPHY14_CMN_ANAREG_TOP_186	=	0x82e8
                    82EC   1668 _UPHY14_CMN_ANAREG_TOP_187	=	0x82ec
                    82F0   1669 _UPHY14_CMN_ANAREG_TOP_188	=	0x82f0
                    82F4   1670 _UPHY14_CMN_ANAREG_TOP_189	=	0x82f4
                    82F8   1671 _UPHY14_CMN_ANAREG_TOP_190	=	0x82f8
                    82FC   1672 _UPHY14_CMN_ANAREG_TOP_191	=	0x82fc
                    8300   1673 _UPHY14_CMN_ANAREG_TOP_192	=	0x8300
                    8304   1674 _UPHY14_CMN_ANAREG_TOP_193	=	0x8304
                    8308   1675 _UPHY14_CMN_ANAREG_TOP_194	=	0x8308
                    830C   1676 _UPHY14_CMN_ANAREG_TOP_195	=	0x830c
                    8310   1677 _UPHY14_CMN_ANAREG_TOP_196	=	0x8310
                    8314   1678 _UPHY14_CMN_ANAREG_TOP_197	=	0x8314
                    8318   1679 _UPHY14_CMN_ANAREG_TOP_198	=	0x8318
                    831C   1680 _UPHY14_CMN_ANAREG_TOP_199	=	0x831c
                    8320   1681 _UPHY14_CMN_ANAREG_TOP_200	=	0x8320
                    8324   1682 _UPHY14_CMN_ANAREG_TOP_201	=	0x8324
                    8328   1683 _UPHY14_CMN_ANAREG_TOP_202	=	0x8328
                    832C   1684 _UPHY14_CMN_ANAREG_TOP_203	=	0x832c
                    8330   1685 _UPHY14_CMN_ANAREG_TOP_204	=	0x8330
                    8334   1686 _UPHY14_CMN_ANAREG_TOP_205	=	0x8334
                    8338   1687 _UPHY14_CMN_ANAREG_TOP_206	=	0x8338
                    833C   1688 _UPHY14_CMN_ANAREG_TOP_207	=	0x833c
                    8340   1689 _UPHY14_CMN_ANAREG_TOP_208	=	0x8340
                    8344   1690 _UPHY14_CMN_ANAREG_TOP_209	=	0x8344
                    8348   1691 _UPHY14_CMN_ANAREG_TOP_210	=	0x8348
                    834C   1692 _UPHY14_CMN_ANAREG_TOP_211	=	0x834c
                    8350   1693 _UPHY14_CMN_ANAREG_TOP_212	=	0x8350
                    8354   1694 _UPHY14_CMN_ANAREG_TOP_213	=	0x8354
                    8358   1695 _UPHY14_CMN_ANAREG_TOP_214	=	0x8358
                    2000   1696 _PM_CTRL_TX_LANE_REG1_LANE	=	0x2000
                    2004   1697 _PM_CTRL_TX_LANE_REG2_LANE	=	0x2004
                    2008   1698 _INPUT_TX_PIN_REG0_LANE	=	0x2008
                    200C   1699 _INPUT_TX_PIN_REG1_LANE	=	0x200c
                    2010   1700 _INPUT_TX_PIN_REG2_LANE	=	0x2010
                    2014   1701 _INPUT_TX_PIN_REG3_LANE	=	0x2014
                    2018   1702 _PM_CTRL_INTERRUPT_REG1_LANE	=	0x2018
                    201C   1703 _PM_CTRL_INTERRUPT_REG2	=	0x201c
                    2020   1704 _CLKGEN_TX_LANE_REG1_LANE	=	0x2020
                    2024   1705 _TX_SPEED_CONVERT_LANE	=	0x2024
                    2028   1706 _SPD_CTRL_INTERRUPT_REG1_LANE	=	0x2028
                    202C   1707 _SPD_CTRL_INTERRUPT_REG2	=	0x202c
                    2030   1708 _SPD_CTRL_TX_LANE_REG1_LANE	=	0x2030
                    2034   1709 _TX_SYSTEM_LANE	=	0x2034
                    203C   1710 _INPUT_TX_PIN_REG4_LANE	=	0x203c
                    2040   1711 _TX_CALIBRATION_LANE	=	0x2040
                    2044   1712 _DIG_TX_RSVD_REG0	=	0x2044
                    2048   1713 _INPUT_TX_PIN_REG5_LANE	=	0x2048
                    204C   1714 __FIELDNAME__LANE	=	0x204c
                    2050   1715 _PM_CTRL_INTERRUPT_ISR_REG1_LANE	=	0x2050
                    2054   1716 _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE	=	0x2054
                    2058   1717 _ANALOG_TX_REALTIME_REG_1	=	0x2058
                    205C   1718 _MON_TOP	=	0x205c
                    2100   1719 _PM_CTRL_RX_LANE_REG1_LANE	=	0x2100
                    2104   1720 _RX_SYSTEM_LANE	=	0x2104
                    2108   1721 _INPUT_RX_PIN_REG0_LANE	=	0x2108
                    210C   1722 _INPUT_RX_PIN_REG1_LANE	=	0x210c
                    2110   1723 _INPUT_RX_PIN_REG2_LANE	=	0x2110
                    2114   1724 _SPD_CTRL_RX_LANE_REG1_LANE	=	0x2114
                    2118   1725 _DIG_RX_RSVD_REG0	=	0x2118
                    211C   1726 _CLKGEN_RX_LANE_REG1_LANE	=	0x211c
                    2120   1727 _FRAME_SYNC_DET_REG0	=	0x2120
                    2124   1728 _FRAME_SYNC_DET_REG1	=	0x2124
                    2128   1729 _FRAME_SYNC_DET_REG2	=	0x2128
                    212C   1730 _FRAME_SYNC_DET_REG3	=	0x212c
                    2130   1731 _FRAME_SYNC_DET_REG4	=	0x2130
                    2134   1732 _FRAME_SYNC_DET_REG5	=	0x2134
                    2138   1733 _FRAME_SYNC_DET_REG6	=	0x2138
                    213C   1734 _CDR_LOCK_REG	=	0x213c
                    2140   1735 _RX_LANE_INTERRUPT	=	0x2140
                    2144   1736 _RX_LANE_INTERRUPT_MASK	=	0x2144
                    2148   1737 _RX_DATA_PATH_REG	=	0x2148
                    214C   1738 _INPUT_RX_PIN_REG3_LANE	=	0x214c
                    2150   1739 _RX_CALIBRATION_REG	=	0x2150
                    2158   1740 _RX_LANE_INTERRUPT_REG1	=	0x2158
                    2160   1741 _DTL_REG0	=	0x2160
                    2164   1742 _DTL_REG1	=	0x2164
                    2168   1743 _DTL_REG2	=	0x2168
                    216C   1744 _DTL_REG3	=	0x216c
                    2170   1745 _SQ_REG0	=	0x2170
                    4000   1746 _LANE_CFG0	=	0x4000
                    4004   1747 _LANE_STATUS0	=	0x4004
                    4008   1748 _LANE_CFG_STATUS2_LANE	=	0x4008
                    400C   1749 _LANE_CFG2_LANE	=	0x400c
                    4010   1750 _LANE_CFG4	=	0x4010
                    4014   1751 _LANE_CFG_STATUS3_LANE	=	0x4014
                    4018   1752 _LANE_DP_PIE8_CFG0_LANE	=	0x4018
                    401C   1753 _LANE_USB_DP_CFG1_LANE	=	0x401c
                    4020   1754 _LANE_USB_DP_CFG2_LANE	=	0x4020
                    4024   1755 _LANE_EQ_CFG0_LANE	=	0x4024
                    4028   1756 _LANE_EQ_CFG1_LANE	=	0x4028
                    402C   1757 _LANE_PRESET_CFG0_LANE	=	0x402c
                    4030   1758 _LANE_PRESET_CFG2_LANE	=	0x4030
                    4034   1759 _LANE_PRESET_CFG4_LANE	=	0x4034
                    4038   1760 _LANE_PRESET_CFG6_LANE	=	0x4038
                    403C   1761 _LANE_PRESET_CFG8_LANE	=	0x403c
                    4040   1762 _LANE_PRESET_CFG10_LANE	=	0x4040
                    4044   1763 _LANE_PRESET_CFG12_LANE	=	0x4044
                    4048   1764 _LANE_PRESET_CFG14_LANE	=	0x4048
                    404C   1765 _LANE_PRESET_CFG16_LANE	=	0x404c
                    4050   1766 _LANE_COEFF_MAX0_LANE	=	0x4050
                    4054   1767 _LANE_REMOTE_SET_LANE	=	0x4054
                    4058   1768 _LANE_EQ_16G_CFG0_LANE	=	0x4058
                    405C   1769 _LANE_16G_PRESET_CFG0_LANE	=	0x405c
                    4060   1770 _LANE_16G_PRESET_CFG2_LANE	=	0x4060
                    4064   1771 _LANE_16G_PRESET_CFG4_LANE	=	0x4064
                    4068   1772 _LANE_16G_PRESET_CFG6_LANE	=	0x4068
                    406C   1773 _LANE_16G_PRESET_CFG8_LANE	=	0x406c
                    4070   1774 _LANE_16G_PRESET_CFG10_LANE	=	0x4070
                    4074   1775 _LANE_16G_PRESET_CFG12_LANE	=	0x4074
                    4078   1776 _LANE_16G_PRESET_CFG14_LANE	=	0x4078
                    407C   1777 _LANE_16G_PRESET_CFG16_LANE	=	0x407c
                    4080   1778 _LANE_EQ_32G_CFG0_LANE	=	0x4080
                    4084   1779 _LANE_32G_PRESET_CFG0_LANE	=	0x4084
                    4088   1780 _LANE_32G_PRESET_CFG2_LANE	=	0x4088
                    408C   1781 _LANE_32G_PRESET_CFG4_LANE	=	0x408c
                    4090   1782 _LANE_32G_PRESET_CFG6_LANE	=	0x4090
                    4094   1783 _LANE_32G_PRESET_CFG8_LANE	=	0x4094
                    4098   1784 _LANE_32G_PRESET_CFG10_LANE	=	0x4098
                    409C   1785 _LANE_32G_PRESET_CFG12_LANE	=	0x409c
                    40A0   1786 _LANE_32G_PRESET_CFG14_LANE	=	0x40a0
                    40A4   1787 _LANE_32G_PRESET_CFG16_LANE	=	0x40a4
                    2200   1788 _MCU_CONTROL_LANE	=	0x2200
                    2204   1789 _MCU_GPIO	=	0x2204
                    2208   1790 _CACHE_DEBUG0	=	0x2208
                    220C   1791 _CACHE_DEBUG1	=	0x220c
                    2210   1792 _LANE_SYSTEM0	=	0x2210
                    2230   1793 _MCU_STATUS0_LANE	=	0x2230
                    2234   1794 _MCU_STATUS1_LANE	=	0x2234
                    2238   1795 _MCU_STATUS2_LANE	=	0x2238
                    223C   1796 _MCU_STATUS3_LANE	=	0x223c
                    2240   1797 _MCU_INT0_CONTROL	=	0x2240
                    2244   1798 _MCU_INT1_CONTROL	=	0x2244
                    2248   1799 _MCU_INT2_CONTROL	=	0x2248
                    224C   1800 _MCU_INT3_CONTROL	=	0x224c
                    2250   1801 _MCU_INT4_CONTROL	=	0x2250
                    2254   1802 _MCU_INT5_CONTROL	=	0x2254
                    2258   1803 _MCU_INT6_CONTROL	=	0x2258
                    225C   1804 _MCU_INT7_CONTROL	=	0x225c
                    2260   1805 _MCU_INT8_CONTROL	=	0x2260
                    2264   1806 _MCU_INT9_CONTROL	=	0x2264
                    2268   1807 _MCU_INT10_CONTROL	=	0x2268
                    226C   1808 _MCU_INT11_CONTROL	=	0x226c
                    2270   1809 _MCU_INT12_CONTROL	=	0x2270
                    2274   1810 _MCU_TIMER_CONTROL	=	0x2274
                    2278   1811 _MCU_TIMER0_CONTROL	=	0x2278
                    227C   1812 _MCU_TIMER1_CONTROL	=	0x227c
                    2280   1813 _MCU_TIMER2_CONTROL	=	0x2280
                    2284   1814 _MCU_TIMER3_CONTROL	=	0x2284
                    2288   1815 _MCU_IRQ_LANE	=	0x2288
                    228C   1816 _MCU_IRQ_MASK_LANE	=	0x228c
                    2290   1817 _MCU_MEM_REG1_LANE	=	0x2290
                    2294   1818 _MCU_MEM_REG2_LANE	=	0x2294
                    2298   1819 _MCU_TIMER_CTRL_1_LANE	=	0x2298
                    229C   1820 _MCU_TIMER_CTRL_2_LANE	=	0x229c
                    22A0   1821 _MCU_TIMER_CTRL_3_LANE	=	0x22a0
                    22A4   1822 _MCU_TIMER_CTRL_4_LANE	=	0x22a4
                    22A8   1823 _MCU_TIMER_CTRL_5_LANE	=	0x22a8
                    22AC   1824 _MCU_TIMER_CTRL_6_LANE	=	0x22ac
                    22B0   1825 _MCU_TIMER_CTRL_7_LANE	=	0x22b0
                    22B4   1826 _MCU_DEBUG0_LANE	=	0x22b4
                    22B8   1827 _MCU_DEBUG1_LANE	=	0x22b8
                    22BC   1828 _MCU_DEBUG2_LANE	=	0x22bc
                    22C0   1829 _MCU_DEBUG3_LANE	=	0x22c0
                    22C4   1830 _MCU_DEBUG_LANE	=	0x22c4
                    22C8   1831 _EXT_INT_CONTROL	=	0x22c8
                    22CC   1832 _ANA_IF_TRX_REG0	=	0x22cc
                    22D0   1833 _ANA_IF_DFEE_REG0	=	0x22d0
                    22D4   1834 _ANA_IF_DFEO_REG0	=	0x22d4
                    22D8   1835 _MCU_IRQ_ISR_LANE	=	0x22d8
                    22DC   1836 _MCU_WDT_LANE	=	0x22dc
                    22E0   1837 _MCU_INT_CONTROL_13	=	0x22e0
                    22E4   1838 _MCU_COMMAND0	=	0x22e4
                    22F4   1839 _MEM_ECC_ERR_ADDRESS0	=	0x22f4
                    22F8   1840 _XDATA_MEM_CHECKSUM_LANE0	=	0x22f8
                    22FC   1841 _XDATA_MEM_CHECKSUM_LANE1	=	0x22fc
                    2300   1842 _PT_CONTROL0	=	0x2300
                    2304   1843 _PT_CONTROL1	=	0x2304
                    2308   1844 _PT_USER_PATTERN0	=	0x2308
                    230C   1845 _PT_USER_PATTERN1	=	0x230c
                    2310   1846 _PT_USER_PATTERN2	=	0x2310
                    2314   1847 _PT_COUNTER0	=	0x2314
                    2318   1848 _PT_COUNTER1	=	0x2318
                    231C   1849 _PT_COUNTER2	=	0x231c
                    2400   1850 _DFE_CTRL_REG0	=	0x2400
                    2404   1851 _DFE_CTRL_REG1	=	0x2404
                    2408   1852 _DFE_CTRL_REG2	=	0x2408
                    240C   1853 _DFE_CTRL_REG3	=	0x240c
                    2410   1854 _RX_EQ_CLK_CTRL	=	0x2410
                    2414   1855 _DFE_CTRL_REG4	=	0x2414
                    2418   1856 _DFE_ANA_REG0	=	0x2418
                    241C   1857 _DFE_ANA_REG1	=	0x241c
                    2420   1858 _DFE_STEP_REG0	=	0x2420
                    2424   1859 _DFE_STEP_REG1	=	0x2424
                    2430   1860 _DFE_FEN_EVEN_REG	=	0x2430
                    2434   1861 _DFE_FEN_ODD_REG	=	0x2434
                    2438   1862 _DFE_DC_EVEN_REG8	=	0x2438
                    243C   1863 _DFE_DC_ODD_REG8	=	0x243c
                    2440   1864 _DFE_FEXT_EVEN_REG0	=	0x2440
                    2444   1865 _DFE_FEXT_EVEN_REG1	=	0x2444
                    2448   1866 _DFE_FEXT_EVEN_REG2	=	0x2448
                    244C   1867 _DFE_FEXT_EVEN_REG3	=	0x244c
                    2450   1868 _DFE_FEXT_EVEN_REG4	=	0x2450
                    2454   1869 _DFE_FEXT_EVEN_REG5	=	0x2454
                    2458   1870 _DFE_FEXT_EVEN_REG6	=	0x2458
                    245C   1871 _DFE_FEXT_EVEN_REG7	=	0x245c
                    2460   1872 _DFE_FEXT_ODD_REG0	=	0x2460
                    2464   1873 _DFE_FEXT_ODD_REG1	=	0x2464
                    2468   1874 _DFE_FEXT_ODD_REG2	=	0x2468
                    246C   1875 _DFE_FEXT_ODD_REG3	=	0x246c
                    2470   1876 _DFE_FEXT_ODD_REG4	=	0x2470
                    2474   1877 _DFE_FEXT_ODD_REG5	=	0x2474
                    2478   1878 _DFE_FEXT_ODD_REG6	=	0x2478
                    247C   1879 _DFE_FEXT_ODD_REG7	=	0x247c
                    2480   1880 _DFE_READ_EVEN_SM_REG0	=	0x2480
                    2484   1881 _DFE_READ_EVEN_SM_REG1	=	0x2484
                    2488   1882 _DFE_READ_EVEN_SM_REG2	=	0x2488
                    248C   1883 _DFE_READ_EVEN_SM_REG3	=	0x248c
                    2490   1884 _DFE_READ_EVEN_SM_REG4	=	0x2490
                    2494   1885 _DFE_READ_EVEN_SM_REG5	=	0x2494
                    2498   1886 _DFE_READ_EVEN_SM_REG6	=	0x2498
                    249C   1887 _DFE_READ_EVEN_SM_REG7	=	0x249c
                    24A0   1888 _DFE_READ_ODD_SM_REG0	=	0x24a0
                    24A4   1889 _DFE_READ_ODD_SM_REG1	=	0x24a4
                    24A8   1890 _DFE_READ_ODD_SM_REG2	=	0x24a8
                    24AC   1891 _DFE_READ_ODD_SM_REG3	=	0x24ac
                    24B0   1892 _DFE_READ_ODD_SM_REG4	=	0x24b0
                    24B4   1893 _DFE_READ_ODD_SM_REG5	=	0x24b4
                    24B8   1894 _DFE_READ_ODD_SM_REG6	=	0x24b8
                    24BC   1895 _DFE_READ_ODD_SM_REG7	=	0x24bc
                    24C0   1896 _DFE_READ_EVEN_SM_REG8	=	0x24c0
                    24C4   1897 _DFE_READ_ODD_SM_REG8	=	0x24c4
                    24D0   1898 _DFE_READ_EVEN_2C_REG0	=	0x24d0
                    24D4   1899 _DFE_READ_EVEN_2C_REG1	=	0x24d4
                    24D8   1900 _DFE_READ_EVEN_2C_REG2	=	0x24d8
                    24DC   1901 _DFE_READ_EVEN_2C_REG3	=	0x24dc
                    24E0   1902 _DFE_READ_EVEN_2C_REG4	=	0x24e0
                    24E4   1903 _DFE_READ_EVEN_2C_REG5	=	0x24e4
                    24E8   1904 _DFE_READ_EVEN_2C_REG6	=	0x24e8
                    24EC   1905 _DFE_READ_EVEN_2C_REG7	=	0x24ec
                    24F0   1906 _DFE_READ_ODD_2C_REG0	=	0x24f0
                    24F4   1907 _DFE_READ_ODD_2C_REG1	=	0x24f4
                    24F8   1908 _DFE_READ_ODD_2C_REG2	=	0x24f8
                    24FC   1909 _DFE_READ_ODD_2C_REG3	=	0x24fc
                    2500   1910 _DFE_READ_ODD_2C_REG4	=	0x2500
                    2504   1911 _DFE_READ_ODD_2C_REG5	=	0x2504
                    2508   1912 _DFE_READ_ODD_2C_REG6	=	0x2508
                    250C   1913 _DFE_READ_ODD_2C_REG7	=	0x250c
                    2510   1914 _DFE_READ_EVEN_2C_REG8	=	0x2510
                    2514   1915 _DFE_READ_ODD_2C_REG8	=	0x2514
                    2518   1916 _CAL_OFST_REG0	=	0x2518
                    251C   1917 _CAL_OFST_REG1	=	0x251c
                    2520   1918 _CAL_OFST_REG2	=	0x2520
                    2530   1919 _DFE_DCE_REG0	=	0x2530
                    2540   1920 _DFE_STATIC_LANE_REG0	=	0x2540
                    2544   1921 _DFE_STATIC_LANE_REG1	=	0x2544
                    2548   1922 _DFE_STATIC_LANE_REG3	=	0x2548
                    254C   1923 _DFE_STATIC_LANE_REG4	=	0x254c
                    2550   1924 _DFE_STATIC_LANE_REG5	=	0x2550
                    2554   1925 _DFE_STATIC_LANE_REG6	=	0x2554
                    2560   1926 _EOM_VLD_REG0	=	0x2560
                    2564   1927 _EOM_VLD_REG1	=	0x2564
                    2568   1928 _EOM_VLD_REG2	=	0x2568
                    256C   1929 _EOM_VLD_REG3	=	0x256c
                    2570   1930 _EOM_ERR_REG0	=	0x2570
                    2574   1931 _EOM_ERR_REG1	=	0x2574
                    2578   1932 _EOM_ERR_REG2	=	0x2578
                    257C   1933 _EOM_ERR_REG3	=	0x257c
                    2580   1934 _EOM_REG0	=	0x2580
                    25F0   1935 _EOM_VLD_REG4	=	0x25f0
                    25F4   1936 _LANE_MARGIN_REG0	=	0x25f4
                    6000   1937 _CAL_CTRL1_LANE	=	0x6000
                    6004   1938 _CAL_CTRL2_LANE	=	0x6004
                    6008   1939 _CAL_CTRL3_LANE	=	0x6008
                    600C   1940 _CAL_CTRL4_LANE	=	0x600c
                    6010   1941 _CAL_SAVE_DATA1_LANE	=	0x6010
                    6014   1942 _CAL_SAVE_DATA2_LANE	=	0x6014
                    6018   1943 _CAL_SAVE_DATA3_LANE	=	0x6018
                    601C   1944 _PHY_REMOTE_CTRL_COMMAND_LANE	=	0x601c
                    6020   1945 _PHY_REMOTE_CTRL_VALUE_LANE	=	0x6020
                    6024   1946 _PHY_LOCAL_VALUE_LANE	=	0x6024
                    6028   1947 _TRX_TRAIN_IF_TIMERS1_LANE	=	0x6028
                    602C   1948 _TRX_TRAIN_IF_TIMERS2_LANE	=	0x602c
                    6030   1949 _TRX_TRAIN_IF_TIMERS_ENABLE_LANE	=	0x6030
                    6034   1950 _DFE_CONTROL_0	=	0x6034
                    6038   1951 _DFE_CONTROL_1	=	0x6038
                    6040   1952 _DFE_CONTROL_2	=	0x6040
                    6044   1953 _DFE_CONTROL_3	=	0x6044
                    6048   1954 _DFE_CONTROL_4	=	0x6048
                    604C   1955 _DFE_CONTROL_5	=	0x604c
                    6050   1956 _TRAIN_CONTROL_0	=	0x6050
                    6054   1957 _TRAIN_CONTROL_1	=	0x6054
                    6058   1958 _TRAIN_CONTROL_2	=	0x6058
                    605C   1959 _RPTA_CONFIG_0	=	0x605c
                    6060   1960 _RPTA_CONFIG_1	=	0x6060
                    6064   1961 _DLL_CAL	=	0x6064
                    6068   1962 _TRAIN_PARA_0	=	0x6068
                    606C   1963 _TRAIN_PARA_1	=	0x606c
                    6070   1964 _TRAIN_PARA_2	=	0x6070
                    6074   1965 _TRAIN_PARA_3	=	0x6074
                    6078   1966 _DFE_CONTROL_6	=	0x6078
                    607C   1967 _DFE_TEST_0	=	0x607c
                    6080   1968 _DFE_TEST_1	=	0x6080
                    6084   1969 _DFE_TEST_4	=	0x6084
                    6088   1970 _DFE_TEST_5	=	0x6088
                    608C   1971 _DFE_CONTROL_7	=	0x608c
                    6090   1972 _DFE_CONTROL_8	=	0x6090
                    6094   1973 _DFE_CONTROL_9	=	0x6094
                    6098   1974 _DFE_CONTROL_10	=	0x6098
                    609C   1975 _DFE_CONTROL_11	=	0x609c
                    60A0   1976 _CDS_CTRL_REG0	=	0x60a0
                    60A4   1977 _CDS_CTRL_REG1	=	0x60a4
                    60A8   1978 _ESM_POP_P_CNT_LOW_LANE	=	0x60a8
                    60AC   1979 _ESM_ERR_P_CNT_LOW_LANE	=	0x60ac
                    60B0   1980 _ESM_ERR_POP_CNT_HIGH_LANE	=	0x60b0
                    60B4   1981 _TRAIN_CONTROL_3	=	0x60b4
                    60B8   1982 _TRAIN_CONTROL_4	=	0x60b8
                    60BC   1983 _TRAIN_CONTROL_5	=	0x60bc
                    60C0   1984 _TRAIN_CONTROL_6	=	0x60c0
                    60C4   1985 _TRAIN_CONTROL_7	=	0x60c4
                    60C8   1986 _TRAIN_CONTROL_8	=	0x60c8
                    60CC   1987 _TRAIN_CONTROL_9	=	0x60cc
                    60D0   1988 _TRAIN_CONTROL_10	=	0x60d0
                    60D4   1989 _TRAIN_CONTROL_11	=	0x60d4
                    60D8   1990 _TRAIN_CONTROL_12	=	0x60d8
                    60DC   1991 _ESM_POP_N_CNT_LOW_LANE	=	0x60dc
                    60E0   1992 _ESM_ERR_N_CNT_LOW_LANE	=	0x60e0
                    60E4   1993 _TRAIN_CONTROL_13	=	0x60e4
                    60E8   1994 _TRAIN_CONTROL_14	=	0x60e8
                    60EC   1995 _TRAIN_CONTROL_15	=	0x60ec
                    60F0   1996 _TRAIN_CONTROL_16	=	0x60f0
                    60F4   1997 _TRAIN_CONTROL_17	=	0x60f4
                    60F8   1998 _END_XDAT_LANE	=	0x60f8
                    A000   1999 _TX_CMN_REG	=	0xa000
                    A008   2000 _DTX_REG0	=	0xa008
                    A00C   2001 _DTX_REG1	=	0xa00c
                    A010   2002 _DTX_REG2	=	0xa010
                    A014   2003 _DTX_REG3	=	0xa014
                    A018   2004 _DTX_REG4	=	0xa018
                    A01C   2005 _DTX_PHY_ALIGN_REG0	=	0xa01c
                    A024   2006 _DTX_PHY_ALIGN_REG1	=	0xa024
                    A028   2007 _DTX_PHY_ALIGN_REG2	=	0xa028
                    A02C   2008 _SRIS_REG0	=	0xa02c
                    A030   2009 _SRIS_REG1	=	0xa030
                    A100   2010 _RX_CMN_0	=	0xa100
                    A110   2011 _DFE_STATIC_REG0	=	0xa110
                    A114   2012 _DFE_STATIC_REG1	=	0xa114
                    A118   2013 _DFE_STATIC_REG3	=	0xa118
                    A11C   2014 _DFE_STATIC_REG4	=	0xa11c
                    A120   2015 _DFE_STATIC_REG5	=	0xa120
                    A124   2016 _DFE_STATIC_REG6	=	0xa124
                    4200   2017 _GLOB_RST_CLK_CTRL	=	0x4200
                    4204   2018 _GLOB_CLK_SRC_LO	=	0x4204
                    4208   2019 _GLOB_CLK_SRC_HI	=	0x4208
                    420C   2020 _GLOB_MISC_CTRL	=	0x420c
                    4210   2021 _GLOB_DP_SAL_CFG	=	0x4210
                    4214   2022 _GLOB_DP_SAL_CFG1	=	0x4214
                    4218   2023 _GLOB_DP_SAL_CFG3	=	0x4218
                    421C   2024 _GLOB_DP_SAL_CFG5	=	0x421c
                    4220   2025 _GLOB_PM_CFG0	=	0x4220
                    4224   2026 _GLOB_COUNTER_CTRL	=	0x4224
                    4228   2027 _GLOB_COUNTER_HI	=	0x4228
                    422C   2028 _GLOB_PM_DP_CTRL	=	0x422c
                    4230   2029 _GLOB_DP_BAL_CFG0	=	0x4230
                    4234   2030 _GLOB_DP_BAL_CFG2	=	0x4234
                    4238   2031 _GLOB_DP_BAL_CFG4	=	0x4238
                    423C   2032 _GLOB_BIST_CTRL	=	0x423c
                    4240   2033 _GLOB_BIST_LANE_TYPE	=	0x4240
                    4244   2034 _GLOB_BIST_START	=	0x4244
                    4248   2035 _GLOB_BIST_MASK	=	0x4248
                    424C   2036 _GLOB_BIST_RESULT	=	0x424c
                    4250   2037 _GLOB_BIST_SEQR_CFG	=	0x4250
                    4254   2038 _GLOB_BIST_DATA_HI	=	0x4254
                    4258   2039 _GLOB_PIPE_REVISION	=	0x4258
                    425C   2040 _GLOB_L1_SUBSTATES_CFG	=	0x425c
                    A200   2041 _MCU_CONTROL_0	=	0xa200
                    A204   2042 _MCU_CONTROL_1	=	0xa204
                    A208   2043 _MCU_CONTROL_2	=	0xa208
                    A20C   2044 _MCU_CONTROL_3	=	0xa20c
                    A210   2045 _MCU_CONTROL_4	=	0xa210
                    A214   2046 _MCU_DEBUG0	=	0xa214
                    A218   2047 _MCU_DEBUG1	=	0xa218
                    A21C   2048 _MEMORY_CONTROL_0	=	0xa21c
                    A220   2049 _MEMORY_CONTROL_1	=	0xa220
                    A224   2050 _MEMORY_CONTROL_2	=	0xa224
                    A228   2051 _MEMORY_CONTROL_3	=	0xa228
                    A22C   2052 _MEMORY_CONTROL_4	=	0xa22c
                    A234   2053 _MCU_INFO_0	=	0xa234
                    A238   2054 _MCU_INFO_1	=	0xa238
                    A23C   2055 _MCU_INFO_2	=	0xa23c
                    A240   2056 _MCU_INFO_3	=	0xa240
                    A244   2057 _MEM_CMN_ECC_ERR_ADDRESS0	=	0xa244
                    A2E0   2058 _ANA_IF_CMN_REG1	=	0xa2e0
                    A2E4   2059 _MEM_IRQ	=	0xa2e4
                    A2E8   2060 _MEM_IRQ_MASK	=	0xa2e8
                    A2EC   2061 _ANA_IF_CMN_REG0	=	0xa2ec
                    A2F0   2062 _APB_CONTROL_REG	=	0xa2f0
                    A2F4   2063 _MEM_IRQ_CLEAR	=	0xa2f4
                    A2F8   2064 _MCU_SYNC1	=	0xa2f8
                    A2FC   2065 _MCU_SYNC2	=	0xa2fc
                    A300   2066 _TEST0	=	0xa300
                    A304   2067 _TEST1	=	0xa304
                    A308   2068 _TEST2	=	0xa308
                    A30C   2069 _TEST3	=	0xa30c
                    A310   2070 _TEST4	=	0xa310
                    A314   2071 _SYSTEM	=	0xa314
                    A318   2072 _PM_CMN_REG1	=	0xa318
                    A31C   2073 _INPUT_CMN_PIN_REG0	=	0xa31c
                    A320   2074 _INPUT_CMN_PIN_REG1	=	0xa320
                    A324   2075 _INPUT_CMN_PIN_REG2	=	0xa324
                    A328   2076 _ANA_TSEN_CONTROL	=	0xa328
                    A32C   2077 _PLLCAL_REG0	=	0xa32c
                    A330   2078 _PLLCAL_REG1	=	0xa330
                    A334   2079 _CLKGEN_CMN_REG1	=	0xa334
                    A338   2080 _SPD_CMN_REG1	=	0xa338
                    A33C   2081 _OUTPUT_CMN_PIN_REG0	=	0xa33c
                    A340   2082 _CMN_CALIBRATION	=	0xa340
                    A344   2083 __FIELDNAME_	=	0xa344
                    A348   2084 _INPUT_CMN_PIN_REG3	=	0xa348
                    A34C   2085 _PM_CMN_REG2	=	0xa34c
                    A354   2086 _TEST5	=	0xa354
                    A358   2087 _XDATA_MEM_CHECKSUM_CMN_0	=	0xa358
                    A35C   2088 _XDATA_MEM_CHECKSUM_CMN_1	=	0xa35c
                    A360   2089 _XDATA_MEM_CHECKSUM_CMN_2	=	0xa360
                    A364   2090 _MCU_SDT_CMN	=	0xa364
                    A368   2091 _CMN_CACHE_DEBUG0	=	0xa368
                    A36C   2092 _MCU_INT_ADDR	=	0xa36c
                    A370   2093 _CMN_ISR_2	=	0xa370
                    A374   2094 _CMN_ISR_MASK_2	=	0xa374
                    A378   2095 _CMN_ISR_CLEAR_2	=	0xa378
                    A37C   2096 _CMN_MCU_GPIO	=	0xa37c
                    A380   2097 _CMN_CACHE_DEBUG1	=	0xa380
                    A384   2098 _CMN_MCU_TIMER_CONTROL	=	0xa384
                    A388   2099 _CMN_MCU_TIMER_CTRL_2_LANE	=	0xa388
                    A38C   2100 _CMN_MCU_TIMER_CTRL_3_LANE	=	0xa38c
                    A390   2101 _CMN_MCU_TIMER_CTRL_4_LANE	=	0xa390
                    A394   2102 _CMN_MCU_TIMER_CTRL_5_LANE	=	0xa394
                    A398   2103 _CMN_MCU_TIMER0_CONTROL	=	0xa398
                    A39C   2104 _CMN_MCU_TIMER1_CONTROL	=	0xa39c
                    A3A0   2105 _CMN_MCU_TIMER2_CONTROL	=	0xa3a0
                    A3A4   2106 _CMN_MCU_TIMER3_CONTROL	=	0xa3a4
                    A3A8   2107 _CMN_ISR_1	=	0xa3a8
                    A3AC   2108 _CMN_ISR_MASK_1	=	0xa3ac
                    A3B0   2109 _SET_LANE_ISR	=	0xa3b0
                    A3F4   2110 _CMN_MCU_REG	=	0xa3f4
                    A3F8   2111 _CID_REG0	=	0xa3f8
                    A3FC   2112 _CID_REG1	=	0xa3fc
                    E600   2113 _FW_REV	=	0xe600
                    E604   2114 _CONTROL_CONFIG0	=	0xe604
                    E608   2115 _CONTROL_CONFIG1	=	0xe608
                    E60C   2116 _CONTROL_CONFIG2	=	0xe60c
                    E610   2117 _CONTROL_CONFIG3	=	0xe610
                    E614   2118 _CONTROL_CONFIG4	=	0xe614
                    E618   2119 _CONTROL_CONFIG5	=	0xe618
                    E61C   2120 _CONTROL_CONFIG6	=	0xe61c
                    E620   2121 _CONTROL_CONFIG7	=	0xe620
                    E624   2122 _CAL_DATA0	=	0xe624
                    E628   2123 _TRAIN_IF_CONFIG	=	0xe628
                    E62C   2124 _CONTROL_CONFIG8	=	0xe62c
                    E630   2125 _CONTROL_CONFIG9	=	0xe630
                    E634   2126 _CON_CAL_STEP_SIZE1	=	0xe634
                    E638   2127 _CON_CAL_STEP_SIZE2	=	0xe638
                    E63C   2128 _CON_CAL_STEP_SIZE3	=	0xe63c
                    E640   2129 _CON_CAL_STEP_SIZE4	=	0xe640
                    E644   2130 _CON_CAL_STEP_SIZE5	=	0xe644
                    E648   2131 _CAL_TIME_OUT_AND_DIS	=	0xe648
                    E64C   2132 _CAL_STATUS_READ	=	0xe64c
                    E650   2133 _MCU_CONFIG	=	0xe650
                    E654   2134 _CAL_DATA1	=	0xe654
                    E658   2135 _LOOP_CNTS	=	0xe658
                    E65C   2136 _MCU_CONFIG1	=	0xe65c
                    E660   2137 _TIMER_SEL1	=	0xe660
                    E664   2138 _TIMER_SEL2	=	0xe664
                    E668   2139 _TIMER_SEL3	=	0xe668
                    E66C   2140 _G_SELLV_TXCLK	=	0xe66c
                    E670   2141 _G_SELLV_TXDATA	=	0xe670
                    E674   2142 _G_SELLV_TXPRE	=	0xe674
                    E678   2143 _G_SELLV_RXEOMCLK	=	0xe678
                    E67C   2144 _G_SELLV_RXDATACLK	=	0xe67c
                    E680   2145 _G_SELLV_RXSAMPLER	=	0xe680
                    E684   2146 _SAS_PRESET0_TB	=	0xe684
                    E688   2147 _SAS_PRESET1_TB	=	0xe688
                    E68C   2148 _SAS_PRESET2_TB	=	0xe68c
                    E690   2149 _ETH_PRESET0_TB	=	0xe690
                    E694   2150 _ETH_PRESET1_TB	=	0xe694
                    E698   2151 _TX_SAVE_0	=	0xe698
                    E69C   2152 _TX_SAVE_1	=	0xe69c
                    E6A0   2153 _TX_SAVE_2	=	0xe6a0
                    E6A4   2154 _TX_SAVE_3	=	0xe6a4
                    E6A8   2155 _TX_SAVE_4	=	0xe6a8
                    E6AC   2156 _CDS_EYE_CLK_THR	=	0xe6ac
                    E6B0   2157 _SYNC_INFO	=	0xe6b0
                    E6B4   2158 _MCU_INFO_4	=	0xe6b4
                    E6B8   2159 _MCU_INFO_5	=	0xe6b8
                    E6BC   2160 _MCU_INFO_12	=	0xe6bc
                    E6C0   2161 _MCU_INFO_13	=	0xe6c0
                    E6C4   2162 _END_XDAT_CMN	=	0xe6c4
                    2600   2163 _DME_ENC_REG0	=	0x2600
                    2604   2164 _DME_ENC_REG1	=	0x2604
                    2608   2165 _DME_ENC_REG2	=	0x2608
                    260C   2166 _DME_DEC_REG0	=	0x260c
                    2610   2167 _DME_DEC_REG1	=	0x2610
                    2614   2168 _TX_TRAIN_IF_REG0	=	0x2614
                    2618   2169 _TX_TRAIN_IF_REG1	=	0x2618
                    261C   2170 _TX_TRAIN_IF_REG2	=	0x261c
                    2620   2171 _TX_TRAIN_IF_REG3	=	0x2620
                    2624   2172 _TX_TRAIN_PATTTERN_REG0	=	0x2624
                    2628   2173 _TX_TRAIN_DRIVER_REG0	=	0x2628
                    262C   2174 _TX_TRAIN_DRIVER_REG1	=	0x262c
                    2630   2175 _TX_TRAIN_DRIVER_REG2	=	0x2630
                    2634   2176 _TX_TRAIN_DEFAULT_REG0	=	0x2634
                    2638   2177 _TX_TRAIN_DEFAULT_REG1	=	0x2638
                    263C   2178 _TX_TRAIN_DEFAULT_REG2	=	0x263c
                    2640   2179 _TX_TRAIN_DEFAULT_REG3	=	0x2640
                    2644   2180 _TX_TRAIN_DEFAULT_REG4	=	0x2644
                    2648   2181 _TX_TRAIN_DEFAULT_REG5	=	0x2648
                    264C   2182 _TX_EMPH_CTRL_REG0	=	0x264c
                    2650   2183 _LINK_TRAIN_MODE0	=	0x2650
                    2654   2184 _TX_DRV_RD_OUT_REG0	=	0x2654
                    2658   2185 _TX_AMP_CTRL_REG0	=	0x2658
                    265C   2186 _TRX_TRAIN_IF_INTERRUPT_LANE	=	0x265c
                    2660   2187 _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE	=	0x2660
                    2664   2188 _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE	=	0x2664
                    2668   2189 _TX_TRAIN_IF_REG4	=	0x2668
                    266C   2190 _TX_TRAIN_IF_REG5	=	0x266c
                    2670   2191 _TX_TRAIN_IF_REG6	=	0x2670
                    2674   2192 _TX_TRAIN_IF_REG7	=	0x2674
                    2678   2193 _TX_TRAIN_CTRL_LANE	=	0x2678
                    267C   2194 _TX_TRAIN_IF_REG8	=	0x267c
                    6100   2195 _DFE_READ_EVEN_REG0	=	0x6100
                    6104   2196 _DFE_READ_EVEN_REG1	=	0x6104
                    6108   2197 _DFE_READ_EVEN_REG2	=	0x6108
                    610C   2198 _DFE_READ_EVEN_REG3	=	0x610c
                    6110   2199 _DFE_READ_EVEN_REG4	=	0x6110
                    6114   2200 _DFE_READ_EVEN_REG5	=	0x6114
                    6118   2201 _DFE_READ_EVEN_REG6	=	0x6118
                    611C   2202 _DFE_READ_EVEN_REG7	=	0x611c
                    6120   2203 _DFE_READ_ODD_REG0	=	0x6120
                    6124   2204 _DFE_READ_ODD_REG1	=	0x6124
                    6128   2205 _DFE_READ_ODD_REG2	=	0x6128
                    612C   2206 _DFE_READ_ODD_REG3	=	0x612c
                    6130   2207 _DFE_READ_ODD_REG4	=	0x6130
                    6134   2208 _DFE_READ_ODD_REG5	=	0x6134
                    6138   2209 _DFE_READ_ODD_REG6	=	0x6138
                    613C   2210 _DFE_READ_ODD_REG7	=	0x613c
                    6140   2211 _DFE_READ_EVEN_REG8	=	0x6140
                    6144   2212 _DFE_READ_ODD_REG8	=	0x6144
                    6148   2213 _DFE_READ_F0A_EVEN	=	0x6148
                    614C   2214 _DFE_READ_F0A_ODD	=	0x614c
                    6150   2215 _DFE_READ_F0B_EVEN	=	0x6150
                    6154   2216 _DFE_READ_F0B_ODD	=	0x6154
                    6158   2217 _DFE_READ_F0D_EVEN	=	0x6158
                    615C   2218 _DFE_READ_F0D_ODD	=	0x615c
                    6160   2219 _DFE_READ_F0D_LEFT_EVEN	=	0x6160
                    6164   2220 _DFE_READ_F0D_LEFT_ODD	=	0x6164
                    6168   2221 _DFE_READ_F0D_RIGHT_EVEN	=	0x6168
                    616C   2222 _DFE_READ_F0D_RIGHT_ODD	=	0x616c
                    6170   2223 _CDS_READ_MISC0	=	0x6170
                    6174   2224 _CDS_READ_MISC1	=	0x6174
                    6214   2225 _TXTRAIN_IF_REG0	=	0x6214
                    E000   2226 _lc_speedtable	=	0xe000
                    E1C0   2227 _ring_speedtable	=	0xe1c0
                    E5C0   2228 _phy_mode_cmn_table	=	0xe5c0
                    6300   2229 _max_gen	=	0x6300
                    6301   2230 _min_gen	=	0x6301
                    6304   2231 _speedtable	=	0x6304
                    65D4   2232 _phy_mode_lane_table	=	0x65d4
                    60B4   2233 _rc_save	=	0x60b4
                    60D0   2234 _txffe_save	=	0x60d0
                    60E4   2235 _phase_save	=	0x60e4
                    6030   2236 _train_gn1_index	=	0x6030
                    6031   2237 _train_g1_index	=	0x6031
                    6032   2238 _train_g0_index	=	0x6032
                    E6B0   2239 _local_tx_preset_tb	=	0xe6b0
                    E5C1   2240 _cmx_cal_lcvco_dac	=	0xe5c1
                    E5C1   2241 _cmx_cal_lcvco_dac_lsb	=	0xe5c1
                    E5C4   2242 _cmx_cal_lcvco_dac_msb	=	0xe5c4
                    E5CA   2243 _cmx_cal_lccap_msb	=	0xe5ca
                    E5C8   2244 _cmx_cal_lccap_lsb	=	0xe5c8
                    E5CC   2245 _cmx_cal_plldcc	=	0xe5cc
                    E5D0   2246 _cmx_cal_pll_speed_ring	=	0xe5d0
                    E5D4   2247 _cmx_cal_pll_sllp_dac_coarse_ring	=	0xe5d4
                    E5D8   2248 _cmx_cal_sllp_dac_fine_ring	=	0xe5d8
                    65D4   2249 _lnx_cal_txdcc_pdiv	=	0x65d4
                    65D8   2250 _lnx_cal_txdcc_pdiv_hg	=	0x65d8
                    65DA   2251 _lnx_cal_txdcc	=	0x65da
                    65DE   2252 _lnx_cal_txdcc_hg	=	0x65de
                    65E0   2253 _lnx_cal_rxdcc_dll	=	0x65e0
                    65E4   2254 _lnx_cal_rxdcc_dll_hg	=	0x65e4
                    65E6   2255 _lnx_cal_rxdcc_data	=	0x65e6
                    65F0   2256 _lnx_cal_rxdcc_data_hg	=	0x65f0
                    65F5   2257 _lnx_cal_rxdcc_eom	=	0x65f5
                    65FF   2258 _lnx_cal_rxdcc_eom_hg	=	0x65ff
                    6604   2259 _lnx_cal_dll_gmsel	=	0x6604
                    6606   2260 _lnx_cal_vdda_dll_sel	=	0x6606
                    660A   2261 _lnx_cal_dll_eom_gmsel	=	0x660a
                    660C   2262 _lnx_cal_vdda_dll_eom_sel	=	0x660c
                    6610   2263 _lnx_cal_eom_dpher	=	0x6610
                    6612   2264 _lnx_cal_align90_dummy_clk	=	0x6612
                    661A   2265 _lnx_cal_align90_dac	=	0x661a
                    6622   2266 _lnx_cal_align90_gm	=	0x6622
                    662A   2267 _lnx_cal_sellv_txdata	=	0x662a
                    6634   2268 _lnx_cal_sellv_txclk	=	0x6634
                    663E   2269 _lnx_cal_sellv_rxdataclk	=	0x663e
                    6648   2270 _lnx_cal_sellv_txpre	=	0x6648
                    6652   2271 _lnx_cal_sellv_rxsampler	=	0x6652
                    665C   2272 _lnx_cal_sellv_rxeomclk	=	0x665c
                    6666   2273 _lnx_spdoft_tx_preset_index_lane	=	0x6666
                    6490   2274 _lnx_calx_txdcc_pdiv	=	0x6490
                    6496   2275 _lnx_calx_txdcc_pdiv_hg	=	0x6496
                    6499   2276 _lnx_calx_txdcc	=	0x6499
                    649F   2277 _lnx_calx_txdcc_hg	=	0x649f
                    64A2   2278 _lnx_calx_rxdcc_dll	=	0x64a2
                    64A8   2279 _lnx_calx_rxdcc_dll_hg	=	0x64a8
                    64AB   2280 _lnx_calx_dll_gmsel	=	0x64ab
                    64AE   2281 _lnx_calx_vdda_dll_sel	=	0x64ae
                    64B4   2282 _lnx_calx_dll_eom_gmsel	=	0x64b4
                    64B7   2283 _lnx_calx_vdda_dll_eom_sel	=	0x64b7
                    64BD   2284 _lnx_calx_eom_dpher	=	0x64bd
                    64C0   2285 _lnx_calx_align90_dummy_clk	=	0x64c0
                    64CC   2286 _lnx_calx_align90_dac	=	0x64cc
                    64D8   2287 _lnx_calx_align90_gm	=	0x64d8
                    6100   2288 _cds28	=	0x6100
                    6178   2289 _dfe_sm	=	0x6178
                    61B8   2290 _dfe_sm_dc	=	0x61b8
                    61C0   2291 _dfe_sm_save	=	0x61c0
                    03FC   2292 _UPHY_ANAREG_REV_0	=	0x03fc
                    E684   2293 _tx_tb	=	0xe684
                    E698   2294 _train_save_tb	=	0xe698
                    607C   2295 _sq_thrs_ratio_tb	=	0x607c
   6600                    2296 _save_pt_tx_pattern_sel_lane_5_0_b0::
   6600                    2297 	.ds 1
   6601                    2298 _save_pt_tx_pattern_sel_lane_5_0_b1::
   6601                    2299 	.ds 1
   6602                    2300 _save_pt_en_lane::
   6602                    2301 	.ds 1
   6603                    2302 _save_pt_tx_clk_en_lane::
   6603                    2303 	.ds 1
   6604                    2304 _save_local_ana_tx2rx_lpbk_en_lane::
   6604                    2305 	.ds 1
   6605                    2306 _txclk_vdd_step_cnt::
   6605                    2307 	.ds 1
   6606                    2308 _txpre_vdd_step_cnt::
   6606                    2309 	.ds 1
   6607                    2310 _txdata_vdd_step_cnt::
   6607                    2311 	.ds 1
   6608                    2312 _rxdcc_eom_step_cnt::
   6608                    2313 	.ds 1
   6609                    2314 _rxdcc_data_step_cnt::
   6609                    2315 	.ds 1
   660A                    2316 _rxdcc_dll_step_cnt::
   660A                    2317 	.ds 1
   660B                    2318 _rxsmplr_vdd_step_cnt::
   660B                    2319 	.ds 1
   660C                    2320 _rxeomclk_vdd_step_cnt::
   660C                    2321 	.ds 1
   660D                    2322 _plldcc_step_cnt::
   660D                    2323 	.ds 1
   660E                    2324 _pllamp_step_cnt::
   660E                    2325 	.ds 1
   660F                    2326 _txdcc_pdiv_step_cnt::
   660F                    2327 	.ds 1
   6610                    2328 _txdcc_step_cnt::
   6610                    2329 	.ds 1
   6611                    2330 _txdetect_step_cnt::
   6611                    2331 	.ds 1
   6612                    2332 _rxdll_step_cnt::
   6612                    2333 	.ds 1
   6613                    2334 _eom_dll_step_cnt::
   6613                    2335 	.ds 1
   6614                    2336 _align90_step_cnt::
   6614                    2337 	.ds 1
   6615                    2338 _gen_tx::
   6615                    2339 	.ds 1
   6616                    2340 _gen_rx::
   6616                    2341 	.ds 1
   6617                    2342 _tsen_dat::
   6617                    2343 	.ds 2
   6619                    2344 _mcuclk_mc::
   6619                    2345 	.ds 1
   661A                    2346 _cal_lccap_msb_index::
   661A                    2347 	.ds 2
   661C                    2348 _slave_phy_on::
   661C                    2349 	.ds 1
   661D                    2350 _gm_bin::
   661D                    2351 	.ds 1
   661E                    2352 _dac::
   661E                    2353 	.ds 1
   661F                    2354 _dm::
   661F                    2355 	.ds 1
   6620                    2356 _gm::
   6620                    2357 	.ds 1
   6621                    2358 _ringpll_dac_fine::
   6621                    2359 	.ds 2
   6623                    2360 _serdes_ring_lane_en::
   6623                    2361 	.ds 1
   6624                    2362 _ring_lane_sel::
   6624                    2363 	.ds 1
   6625                    2364 _pllcal_first_time::
   6625                    2365 	.ds 1
   6626                    2366 _tempc_step_state::
   6626                    2367 	.ds 1
   6627                    2368 _tempc_dir::
   6627                    2369 	.ds 1
   6628                    2370 _old_status::
   6628                    2371 	.ds 1
   6629                    2372 _new_gen_tx::
   6629                    2373 	.ds 1
   662A                    2374 _new_gen_rx::
   662A                    2375 	.ds 1
   662B                    2376 _pwrsq_on::
   662B                    2377 	.ds 1
   662C                    2378 _ringpll_step_size_cnt::
   662C                    2379 	.ds 1
   662D                    2380 _tsen_dat_cal::
   662D                    2381 	.ds 2
   662F                    2382 _tsen_dat_train::
   662F                    2383 	.ds 2
   6631                    2384 _tsen_dat_normal::
   6631                    2385 	.ds 2
   6633                    2386 _cal_align90_gm_bin::
   6633                    2387 	.ds 3
   6636                    2388 _rxdll_temp_a_lane::
   6636                    2389 	.ds 1
   6637                    2390 _rxdll_temp_b_lane::
   6637                    2391 	.ds 1
   6638                    2392 _vdd_cnt::
   6638                    2393 	.ds 1
   6639                    2394 _dcc_cont::
   6639                    2395 	.ds 1
   663A                    2396 _dfe_norm_cnt::
   663A                    2397 	.ds 1
   663B                    2398 _f1p_e_old::
   663B                    2399 	.ds 1
   663C                    2400 _f1p_o_old::
   663C                    2401 	.ds 1
   663D                    2402 _first_time_ring_pll_cont::
   663D                    2403 	.ds 1
   663E                    2404 _ring_size_counter::
   663E                    2405 	.ds 1
   663F                    2406 _ring_size_counter_mid::
   663F                    2407 	.ds 1
   6640                    2408 _train::
   6640                    2409 	.ds 47
   666F                    2410 _opt::
   666F                    2411 	.ds 47
   669E                    2412 _tx::
   669E                    2413 	.ds 14
   66AC                    2414 _rx::
   66AC                    2415 	.ds 5
   66B1                    2416 _cdr::
   66B1                    2417 	.ds 14
   66BF                    2418 _ctrl_num_blind_loop::
   66BF                    2419 	.ds 1
   66C0                    2420 _ctrl_num_big_loop::
   66C0                    2421 	.ds 1
   66C1                    2422 _dfe_res_f0a_low_thres_01::
   66C1                    2423 	.ds 1
   66C2                    2424 _dfe_res_f0a_low_thres_2::
   66C2                    2425 	.ds 1
   66C3                    2426 _dfe_res_f0a_low_thres_3::
   66C3                    2427 	.ds 1
   66C4                    2428 _dfe_res_f0a_high_thres::
   66C4                    2429 	.ds 1
   66C5                    2430 _train_c::
   66C5                    2431 	.ds 1
   66C6                    2432 _train_r::
   66C6                    2433 	.ds 1
   66C7                    2434 _opt_c::
   66C7                    2435 	.ds 1
   66C8                    2436 _opt_r::
   66C8                    2437 	.ds 1
   66C9                    2438 _r2_adj_on::
   66C9                    2439 	.ds 1
   66CA                    2440 _sumf_boost_target_c::
   66CA                    2441 	.ds 1
   66CB                    2442 _cdr_midpoint_phase_os::
   66CB                    2443 	.ds 1
   66CC                    2444 _train_timer_int::
   66CC                    2445 	.ds 1
   66CD                    2446 _sum::
   66CD                    2447 	.ds 40
   66F5                    2448 _ctrl_max_dfe_adapt_shift::
   66F5                    2449 	.ds 1
   66F6                    2450 _half_shift::
   66F6                    2451 	.ds 1
   66F7                    2452 _dfe_dis::
   66F7                    2453 	.ds 1
   66F8                    2454 _ph_control_mode::
   66F8                    2455 	.ds 1
   66F9                    2456 _adapted_phase::
   66F9                    2457 	.ds 1
   66FA                    2458 _PH_CONV_CNT::
   66FA                    2459 	.ds 1
   66FB                    2460 _EOM_CONV_CNT::
   66FB                    2461 	.ds 1
   66FC                    2462 _ph_conv_dir::
   66FC                    2463 	.ds 1
   66FD                    2464 _eom_conv_dir::
   66FD                    2465 	.ds 1
   66FE                    2466 _norm_f1::
   66FE                    2467 	.ds 1
   66FF                    2468 _norm_ofst::
   66FF                    2469 	.ds 1
   6700                    2470 _norm_eom_ph_os_l::
   6700                    2471 	.ds 1
   6701                    2472 _norm_eom_ph_os_c::
   6701                    2473 	.ds 1
   6702                    2474 _norm_eom_ph_os_r::
   6702                    2475 	.ds 1
   6703                    2476 _phase_vote_acc::
   6703                    2477 	.ds 2
   6705                    2478 _eom_vote_acc::
   6705                    2479 	.ds 2
   6707                    2480 _f0d_c_pre::
   6707                    2481 	.ds 1
   6708                    2482 _f0d_l_pre::
   6708                    2483 	.ds 1
   6709                    2484 _f0d_r_pre::
   6709                    2485 	.ds 1
   670A                    2486 _phase_l_offset::
   670A                    2487 	.ds 1
   670B                    2488 _phase_r_offset::
   670B                    2489 	.ds 1
   670C                    2490 _phase_offset::
   670C                    2491 	.ds 1
   670D                    2492 _adapt_eom_phase_save::
   670D                    2493 	.ds 1
   670E                    2494 _cur_esm_phase::
   670E                    2495 	.ds 2
   6710                    2496 _tx_init_bit::
   6710                    2497 	.ds 1
   6711                    2498 _train_comp::
   6711                    2499 	.ds 1
   6712                    2500 _uart_rx_busy::
   6712                    2501 	.ds 1
   6713                    2502 _tx_sweep_preset_en::
   6713                    2503 	.ds 1
   6714                    2504 _pcie_usb_mode::
   6714                    2505 	.ds 1
   6715                    2506 _do_phase_adapt::
   6715                    2507 	.ds 1
   6716                    2508 _Phase_Adapt_Inited::
   6716                    2509 	.ds 1
   6717                    2510 _detect_sat::
   6717                    2511 	.ds 1
   6718                    2512 _ctrl_rx_only_mode::
   6718                    2513 	.ds 1
   6719                    2514 _ctrl_trx_train_pass::
   6719                    2515 	.ds 1
   671A                    2516 _ctrl_rx_train_mode::
   671A                    2517 	.ds 1
   671B                    2518 _tx_num_tx_preset::
   671B                    2519 	.ds 1
   671C                    2520 _pre_sq_rd::
   671C                    2521 	.ds 1
   671D                    2522 _save_pu_f1p_s_o::
   671D                    2523 	.ds 1
   671E                    2524 _save_pu_f1p_s_e::
   671E                    2525 	.ds 1
   671F                    2526 _save_dfe_adapt_splr::
   671F                    2527 	.ds 1
   6720                    2528 _save_dfe_adapt_e_en::
   6720                    2529 	.ds 1
   6721                    2530 _save_dfe_adapt_o_en::
   6721                    2531 	.ds 1
   6722                    2532 _save_eom_en_s::
   6722                    2533 	.ds 1
   6723                    2534 _save_eom_en_d::
   6723                    2535 	.ds 1
   6724                    2536 _save_dfe_en::
   6724                    2537 	.ds 1
   6725                    2538 _eom_ext_mode::
   6725                    2539 	.ds 1
   6726                    2540 _dfe_2c::
   6726                    2541 	.ds 64
   6766                    2542 _rpta_loop_cnt::
   6766                    2543 	.ds 2
   6768                    2544 _tx_ctrl_stat::
   6768                    2545 	.ds 2
   676A                    2546 _rpta_vote::
   676A                    2547 	.ds 1
   676B                    2548 _cdr_state::
   676B                    2549 	.ds 1
   676C                    2550 _uart_rx_in::
   676C                    2551 	.ds 1
   676D                    2552 _uart_rx_out::
   676D                    2553 	.ds 1
   676E                    2554 _uart_rx_buf::
   676E                    2555 	.ds 30
   678C                    2556 _gen_pll_rate::
   678C                    2557 	.ds 1
   678D                    2558 _pre_gen_pll_rate::
   678D                    2559 	.ds 1
   678E                    2560 _pre_lcpll_rate::
   678E                    2561 	.ds 1
   678F                    2562 _pre_ringpll_rate::
   678F                    2563 	.ds 1
   6790                    2564 _invalidate_pll_rate::
   6790                    2565 	.ds 1
   6791                    2566 _skip_dfe_adapt_cdr_midpoint::
   6791                    2567 	.ds 1
   6792                    2568 _cds_dfe_ofst::
   6792                    2569 	.ds 1
   6793                    2570 _cdr_ui_pi_code_num::
   6793                    2571 	.ds 1
   6794                    2572 _half_ui_code::
   6794                    2573 	.ds 1
   6795                    2574 _eom_data_align_success::
   6795                    2575 	.ds 1
   6796                    2576 _ofst_sat::
   6796                    2577 	.ds 1
   6797                    2578 _cur_phase_offset_data::
   6797                    2579 	.ds 1
   6798                    2580 _cur_phase_offset_esm::
   6798                    2581 	.ds 1
   6799                    2582 _dfe_err_found::
   6799                    2583 	.ds 1
   679A                    2584 _save_dfe_dis::
   679A                    2585 	.ds 1
   679B                    2586 _train_ofst_save::
   679B                    2587 	.ds 1
   679C                    2588 _pre_local_ctrl::
   679C                    2589 	.ds 2
   679E                    2590 _save_local_status::
   679E                    2591 	.ds 2
   67A0                    2592 _tx_train_p2p_hold::
   67A0                    2593 	.ds 1
   67A1                    2594 _rxinit_4_spdchg_en::
   67A1                    2595 	.ds 1
   67A2                    2596 _apta_sim_state::
   67A2                    2597 	.ds 1
   67A3                    2598 _apta_rm_state_err::
   67A3                    2599 	.ds 1
   67A4                    2600 _txffe_force_en::
   67A4                    2601 	.ds 1
   67A5                    2602 _g_fw_flags::
   67A5                    2603 	.ds 1
   67A6                    2604 _sq_thrs_ratio::
   67A6                    2605 	.ds 1
   67A7                    2606 _sq_thrs_ratio_gen_en::
   67A7                    2607 	.ds 1
   67A8                    2608 _dfe_res_save_en::
   67A8                    2609 	.ds 1
   67A9                    2610 _dfe_save_en::
   67A9                    2611 	.ds 1
   67AA                    2612 _dfe_phase_save_en::
   67AA                    2613 	.ds 1
   67AB                    2614 _tx_train_frame_det_timer::
   67AB                    2615 	.ds 2
   67AD                    2616 _rx_pll_rate_x::
   67AD                    2617 	.ds 1
   67AE                    2618 _tx_pll_rate_x::
   67AE                    2619 	.ds 1
   67AF                    2620 _cal_start_on::
   67AF                    2621 	.ds 1
   67B0                    2622 _tx_sel_bit::
   67B0                    2623 	.ds 1
   67B1                    2624 _rx_sel_bit::
   67B1                    2625 	.ds 1
   67B2                    2626 _pcie_f0b_en::
   67B2                    2627 	.ds 1
   67B3                    2628 _opt_g0_index::
   67B3                    2629 	.ds 1
   67B4                    2630 _opt_gn1_index::
   67B4                    2631 	.ds 1
   67B5                    2632 _opt_g1_index::
   67B5                    2633 	.ds 1
   67B6                    2634 _pll_cal_timeout_dis_save::
   67B6                    2635 	.ds 1
   67B7                    2636 _tx_apta_state::
   67B7                    2637 	.ds 1
                           2638 ;--------------------------------------------------------
                           2639 ; absolute external ram data
                           2640 ;--------------------------------------------------------
                           2641 	.area XABS    (ABS,XDATA)
                           2642 ;--------------------------------------------------------
                           2643 ; external initialized ram data
                           2644 ;--------------------------------------------------------
                           2645 	.area HOME    (CODE)
                           2646 	.area GSINIT0 (CODE)
                           2647 	.area GSINIT1 (CODE)
                           2648 	.area GSINIT2 (CODE)
                           2649 	.area GSINIT3 (CODE)
                           2650 	.area GSINIT4 (CODE)
                           2651 	.area GSINIT5 (CODE)
                           2652 	.area GSINIT  (CODE)
                           2653 	.area GSFINAL (CODE)
                           2654 	.area CSEG    (CODE)
                           2655 ;--------------------------------------------------------
                           2656 ; global & static initialisations
                           2657 ;--------------------------------------------------------
                           2658 	.area HOME    (CODE)
                           2659 	.area GSINIT  (CODE)
                           2660 	.area GSFINAL (CODE)
                           2661 	.area GSINIT  (CODE)
                           2662 ;--------------------------------------------------------
                           2663 ; Home
                           2664 ;--------------------------------------------------------
                           2665 	.area HOME    (CODE)
                           2666 	.area HOME    (CODE)
                           2667 ;--------------------------------------------------------
                           2668 ; code
                           2669 ;--------------------------------------------------------
                           2670 	.area CSEG    (CODE)
                           2671 	.area CSEG    (CODE)
                           2672 	.area CONST   (CODE)
                           2673 	.area CABS    (ABS,CODE)
