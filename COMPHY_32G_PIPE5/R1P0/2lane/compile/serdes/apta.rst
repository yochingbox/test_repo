                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:53 2018
                              5 ;--------------------------------------------------------
                              6 	.module apta
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _apta_local_ctrl_sim_tb
                             13 	.globl _apta_local_ctrl_tb
                             14 	.globl _apta_l_r_error_check
                             15 	.globl _TF2
                             16 	.globl _TI
                             17 	.globl _RI
                             18 	.globl _EX12
                             19 	.globl _EX11
                             20 	.globl _EX10
                             21 	.globl _EX9
                             22 	.globl _EX8
                             23 	.globl _ES1
                             24 	.globl _PS1
                             25 	.globl _EX6
                             26 	.globl _EX5
                             27 	.globl _EX4
                             28 	.globl _EX3
                             29 	.globl _EX2
                             30 	.globl _EX7
                             31 	.globl _EA
                             32 	.globl _WDT
                             33 	.globl _ET2
                             34 	.globl _ES
                             35 	.globl _ET1
                             36 	.globl _EX1
                             37 	.globl _ET0
                             38 	.globl _EX0
                             39 	.globl _TF1
                             40 	.globl _TR1
                             41 	.globl _TF0
                             42 	.globl _TR0
                             43 	.globl _IE1
                             44 	.globl _IT1
                             45 	.globl _IE0
                             46 	.globl _IT0
                             47 	.globl _P3_7
                             48 	.globl _P3_6
                             49 	.globl _P3_5
                             50 	.globl _P3_4
                             51 	.globl _P3_3
                             52 	.globl _P3_2
                             53 	.globl _P3_1
                             54 	.globl _P3_0
                             55 	.globl _P2_7
                             56 	.globl _P2_6
                             57 	.globl _P2_5
                             58 	.globl _P2_4
                             59 	.globl _P2_3
                             60 	.globl _P2_2
                             61 	.globl _P2_1
                             62 	.globl _P2_0
                             63 	.globl _P1_7
                             64 	.globl _P1_6
                             65 	.globl _P1_5
                             66 	.globl _P1_4
                             67 	.globl _P1_3
                             68 	.globl _P1_2
                             69 	.globl _P1_1
                             70 	.globl _P1_0
                             71 	.globl _P0_7
                             72 	.globl _P0_6
                             73 	.globl _P0_5
                             74 	.globl _P0_4
                             75 	.globl _P0_3
                             76 	.globl _P0_2
                             77 	.globl _P0_1
                             78 	.globl _P0_0
                             79 	.globl _DMAC
                             80 	.globl _DMATA
                             81 	.globl _DMASA
                             82 	.globl _TMR2
                             83 	.globl _TMR1
                             84 	.globl _TMR0
                             85 	.globl _SRST
                             86 	.globl _B
                             87 	.globl _EIE
                             88 	.globl _ACC
                             89 	.globl _ADCON
                             90 	.globl _PSW
                             91 	.globl _TH2
                             92 	.globl _TL2
                             93 	.globl _RCAP2H
                             94 	.globl _RCAP2L
                             95 	.globl _T2CON
                             96 	.globl _CCEN
                             97 	.globl _IRCON
                             98 	.globl _S0RELH
                             99 	.globl _IP1
                            100 	.globl _IEN1
                            101 	.globl _DMAM1
                            102 	.globl _DMAM0
                            103 	.globl _DMASEL
                            104 	.globl _DMAC2
                            105 	.globl _DMAC1
                            106 	.globl _DMAC0
                            107 	.globl _P3
                            108 	.globl _S0RELL
                            109 	.globl _IP0
                            110 	.globl _IEN0
                            111 	.globl _DMAT2
                            112 	.globl _DMAT1
                            113 	.globl _DMAT0
                            114 	.globl _DMAS2
                            115 	.globl _DMAS1
                            116 	.globl _DMAS0
                            117 	.globl _P2
                            118 	.globl _IEN2
                            119 	.globl _SBUF
                            120 	.globl _SCON
                            121 	.globl _PSBANK
                            122 	.globl _DPS
                            123 	.globl _P1
                            124 	.globl _CKCON
                            125 	.globl _TH1
                            126 	.globl _TH0
                            127 	.globl _TL1
                            128 	.globl _TL0
                            129 	.globl _TMOD
                            130 	.globl _TCON
                            131 	.globl _PCON
                            132 	.globl _WDTREL
                            133 	.globl _DPH
                            134 	.globl _DPL
                            135 	.globl _P0
                            136 	.globl _sq_thrs_ratio_tb
                            137 	.globl _train_save_tb
                            138 	.globl _tx_tb
                            139 	.globl _UPHY_ANAREG_REV_0
                            140 	.globl _dfe_sm_save
                            141 	.globl _dfe_sm_dc
                            142 	.globl _dfe_sm
                            143 	.globl _cds28
                            144 	.globl _lnx_calx_align90_gm
                            145 	.globl _lnx_calx_align90_dac
                            146 	.globl _lnx_calx_align90_dummy_clk
                            147 	.globl _lnx_calx_eom_dpher
                            148 	.globl _lnx_calx_vdda_dll_eom_sel
                            149 	.globl _lnx_calx_dll_eom_gmsel
                            150 	.globl _lnx_calx_vdda_dll_sel
                            151 	.globl _lnx_calx_dll_gmsel
                            152 	.globl _lnx_calx_rxdcc_dll_hg
                            153 	.globl _lnx_calx_rxdcc_dll
                            154 	.globl _lnx_calx_txdcc_hg
                            155 	.globl _lnx_calx_txdcc
                            156 	.globl _lnx_calx_txdcc_pdiv_hg
                            157 	.globl _lnx_calx_txdcc_pdiv
                            158 	.globl _lnx_spdoft_tx_preset_index_lane
                            159 	.globl _lnx_cal_sellv_rxeomclk
                            160 	.globl _lnx_cal_sellv_rxsampler
                            161 	.globl _lnx_cal_sellv_txpre
                            162 	.globl _lnx_cal_sellv_rxdataclk
                            163 	.globl _lnx_cal_sellv_txclk
                            164 	.globl _lnx_cal_sellv_txdata
                            165 	.globl _lnx_cal_align90_gm
                            166 	.globl _lnx_cal_align90_dac
                            167 	.globl _lnx_cal_align90_dummy_clk
                            168 	.globl _lnx_cal_eom_dpher
                            169 	.globl _lnx_cal_vdda_dll_eom_sel
                            170 	.globl _lnx_cal_dll_eom_gmsel
                            171 	.globl _lnx_cal_vdda_dll_sel
                            172 	.globl _lnx_cal_dll_gmsel
                            173 	.globl _lnx_cal_rxdcc_eom_hg
                            174 	.globl _lnx_cal_rxdcc_eom
                            175 	.globl _lnx_cal_rxdcc_data_hg
                            176 	.globl _lnx_cal_rxdcc_data
                            177 	.globl _lnx_cal_rxdcc_dll_hg
                            178 	.globl _lnx_cal_rxdcc_dll
                            179 	.globl _lnx_cal_txdcc_hg
                            180 	.globl _lnx_cal_txdcc
                            181 	.globl _lnx_cal_txdcc_pdiv_hg
                            182 	.globl _lnx_cal_txdcc_pdiv
                            183 	.globl _cmx_cal_sllp_dac_fine_ring
                            184 	.globl _cmx_cal_pll_sllp_dac_coarse_ring
                            185 	.globl _cmx_cal_pll_speed_ring
                            186 	.globl _cmx_cal_plldcc
                            187 	.globl _cmx_cal_lccap_lsb
                            188 	.globl _cmx_cal_lccap_msb
                            189 	.globl _cmx_cal_lcvco_dac_msb
                            190 	.globl _cmx_cal_lcvco_dac_lsb
                            191 	.globl _cmx_cal_lcvco_dac
                            192 	.globl _local_tx_preset_tb
                            193 	.globl _train_g0_index
                            194 	.globl _train_g1_index
                            195 	.globl _train_gn1_index
                            196 	.globl _phase_save
                            197 	.globl _txffe_save
                            198 	.globl _rc_save
                            199 	.globl _phy_mode_lane_table
                            200 	.globl _speedtable
                            201 	.globl _min_gen
                            202 	.globl _max_gen
                            203 	.globl _phy_mode_cmn_table
                            204 	.globl _ring_speedtable
                            205 	.globl _lc_speedtable
                            206 	.globl _TXTRAIN_IF_REG0
                            207 	.globl _CDS_READ_MISC1
                            208 	.globl _CDS_READ_MISC0
                            209 	.globl _DFE_READ_F0D_RIGHT_ODD
                            210 	.globl _DFE_READ_F0D_RIGHT_EVEN
                            211 	.globl _DFE_READ_F0D_LEFT_ODD
                            212 	.globl _DFE_READ_F0D_LEFT_EVEN
                            213 	.globl _DFE_READ_F0D_ODD
                            214 	.globl _DFE_READ_F0D_EVEN
                            215 	.globl _DFE_READ_F0B_ODD
                            216 	.globl _DFE_READ_F0B_EVEN
                            217 	.globl _DFE_READ_F0A_ODD
                            218 	.globl _DFE_READ_F0A_EVEN
                            219 	.globl _DFE_READ_ODD_REG8
                            220 	.globl _DFE_READ_EVEN_REG8
                            221 	.globl _DFE_READ_ODD_REG7
                            222 	.globl _DFE_READ_ODD_REG6
                            223 	.globl _DFE_READ_ODD_REG5
                            224 	.globl _DFE_READ_ODD_REG4
                            225 	.globl _DFE_READ_ODD_REG3
                            226 	.globl _DFE_READ_ODD_REG2
                            227 	.globl _DFE_READ_ODD_REG1
                            228 	.globl _DFE_READ_ODD_REG0
                            229 	.globl _DFE_READ_EVEN_REG7
                            230 	.globl _DFE_READ_EVEN_REG6
                            231 	.globl _DFE_READ_EVEN_REG5
                            232 	.globl _DFE_READ_EVEN_REG4
                            233 	.globl _DFE_READ_EVEN_REG3
                            234 	.globl _DFE_READ_EVEN_REG2
                            235 	.globl _DFE_READ_EVEN_REG1
                            236 	.globl _DFE_READ_EVEN_REG0
                            237 	.globl _TX_TRAIN_IF_REG8
                            238 	.globl _TX_TRAIN_CTRL_LANE
                            239 	.globl _TX_TRAIN_IF_REG7
                            240 	.globl _TX_TRAIN_IF_REG6
                            241 	.globl _TX_TRAIN_IF_REG5
                            242 	.globl _TX_TRAIN_IF_REG4
                            243 	.globl _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE
                            244 	.globl _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE
                            245 	.globl _TRX_TRAIN_IF_INTERRUPT_LANE
                            246 	.globl _TX_AMP_CTRL_REG0
                            247 	.globl _TX_DRV_RD_OUT_REG0
                            248 	.globl _LINK_TRAIN_MODE0
                            249 	.globl _TX_EMPH_CTRL_REG0
                            250 	.globl _TX_TRAIN_DEFAULT_REG5
                            251 	.globl _TX_TRAIN_DEFAULT_REG4
                            252 	.globl _TX_TRAIN_DEFAULT_REG3
                            253 	.globl _TX_TRAIN_DEFAULT_REG2
                            254 	.globl _TX_TRAIN_DEFAULT_REG1
                            255 	.globl _TX_TRAIN_DEFAULT_REG0
                            256 	.globl _TX_TRAIN_DRIVER_REG2
                            257 	.globl _TX_TRAIN_DRIVER_REG1
                            258 	.globl _TX_TRAIN_DRIVER_REG0
                            259 	.globl _TX_TRAIN_PATTTERN_REG0
                            260 	.globl _TX_TRAIN_IF_REG3
                            261 	.globl _TX_TRAIN_IF_REG2
                            262 	.globl _TX_TRAIN_IF_REG1
                            263 	.globl _TX_TRAIN_IF_REG0
                            264 	.globl _DME_DEC_REG1
                            265 	.globl _DME_DEC_REG0
                            266 	.globl _DME_ENC_REG2
                            267 	.globl _DME_ENC_REG1
                            268 	.globl _DME_ENC_REG0
                            269 	.globl _END_XDAT_CMN
                            270 	.globl _MCU_INFO_13
                            271 	.globl _MCU_INFO_12
                            272 	.globl _MCU_INFO_5
                            273 	.globl _MCU_INFO_4
                            274 	.globl _SYNC_INFO
                            275 	.globl _CDS_EYE_CLK_THR
                            276 	.globl _TX_SAVE_4
                            277 	.globl _TX_SAVE_3
                            278 	.globl _TX_SAVE_2
                            279 	.globl _TX_SAVE_1
                            280 	.globl _TX_SAVE_0
                            281 	.globl _ETH_PRESET1_TB
                            282 	.globl _ETH_PRESET0_TB
                            283 	.globl _SAS_PRESET2_TB
                            284 	.globl _SAS_PRESET1_TB
                            285 	.globl _SAS_PRESET0_TB
                            286 	.globl _G_SELLV_RXSAMPLER
                            287 	.globl _G_SELLV_RXDATACLK
                            288 	.globl _G_SELLV_RXEOMCLK
                            289 	.globl _G_SELLV_TXPRE
                            290 	.globl _G_SELLV_TXDATA
                            291 	.globl _G_SELLV_TXCLK
                            292 	.globl _TIMER_SEL3
                            293 	.globl _TIMER_SEL2
                            294 	.globl _TIMER_SEL1
                            295 	.globl _MCU_CONFIG1
                            296 	.globl _LOOP_CNTS
                            297 	.globl _CAL_DATA1
                            298 	.globl _MCU_CONFIG
                            299 	.globl _CAL_STATUS_READ
                            300 	.globl _CAL_TIME_OUT_AND_DIS
                            301 	.globl _CON_CAL_STEP_SIZE5
                            302 	.globl _CON_CAL_STEP_SIZE4
                            303 	.globl _CON_CAL_STEP_SIZE3
                            304 	.globl _CON_CAL_STEP_SIZE2
                            305 	.globl _CON_CAL_STEP_SIZE1
                            306 	.globl _CONTROL_CONFIG9
                            307 	.globl _CONTROL_CONFIG8
                            308 	.globl _TRAIN_IF_CONFIG
                            309 	.globl _CAL_DATA0
                            310 	.globl _CONTROL_CONFIG7
                            311 	.globl _CONTROL_CONFIG6
                            312 	.globl _CONTROL_CONFIG5
                            313 	.globl _CONTROL_CONFIG4
                            314 	.globl _CONTROL_CONFIG3
                            315 	.globl _CONTROL_CONFIG2
                            316 	.globl _CONTROL_CONFIG1
                            317 	.globl _CONTROL_CONFIG0
                            318 	.globl _FW_REV
                            319 	.globl _CID_REG1
                            320 	.globl _CID_REG0
                            321 	.globl _CMN_MCU_REG
                            322 	.globl _SET_LANE_ISR
                            323 	.globl _CMN_ISR_MASK_1
                            324 	.globl _CMN_ISR_1
                            325 	.globl _CMN_MCU_TIMER3_CONTROL
                            326 	.globl _CMN_MCU_TIMER2_CONTROL
                            327 	.globl _CMN_MCU_TIMER1_CONTROL
                            328 	.globl _CMN_MCU_TIMER0_CONTROL
                            329 	.globl _CMN_MCU_TIMER_CTRL_5_LANE
                            330 	.globl _CMN_MCU_TIMER_CTRL_4_LANE
                            331 	.globl _CMN_MCU_TIMER_CTRL_3_LANE
                            332 	.globl _CMN_MCU_TIMER_CTRL_2_LANE
                            333 	.globl _CMN_MCU_TIMER_CONTROL
                            334 	.globl _CMN_CACHE_DEBUG1
                            335 	.globl _CMN_MCU_GPIO
                            336 	.globl _CMN_ISR_CLEAR_2
                            337 	.globl _CMN_ISR_MASK_2
                            338 	.globl _CMN_ISR_2
                            339 	.globl _MCU_INT_ADDR
                            340 	.globl _CMN_CACHE_DEBUG0
                            341 	.globl _MCU_SDT_CMN
                            342 	.globl _XDATA_MEM_CHECKSUM_CMN_2
                            343 	.globl _XDATA_MEM_CHECKSUM_CMN_1
                            344 	.globl _XDATA_MEM_CHECKSUM_CMN_0
                            345 	.globl _TEST5
                            346 	.globl _PM_CMN_REG2
                            347 	.globl _INPUT_CMN_PIN_REG3
                            348 	.globl __FIELDNAME_
                            349 	.globl _CMN_CALIBRATION
                            350 	.globl _OUTPUT_CMN_PIN_REG0
                            351 	.globl _SPD_CMN_REG1
                            352 	.globl _CLKGEN_CMN_REG1
                            353 	.globl _PLLCAL_REG1
                            354 	.globl _PLLCAL_REG0
                            355 	.globl _ANA_TSEN_CONTROL
                            356 	.globl _INPUT_CMN_PIN_REG2
                            357 	.globl _INPUT_CMN_PIN_REG1
                            358 	.globl _INPUT_CMN_PIN_REG0
                            359 	.globl _PM_CMN_REG1
                            360 	.globl _SYSTEM
                            361 	.globl _TEST4
                            362 	.globl _TEST3
                            363 	.globl _TEST2
                            364 	.globl _TEST1
                            365 	.globl _TEST0
                            366 	.globl _MCU_SYNC2
                            367 	.globl _MCU_SYNC1
                            368 	.globl _MEM_IRQ_CLEAR
                            369 	.globl _APB_CONTROL_REG
                            370 	.globl _ANA_IF_CMN_REG0
                            371 	.globl _MEM_IRQ_MASK
                            372 	.globl _MEM_IRQ
                            373 	.globl _ANA_IF_CMN_REG1
                            374 	.globl _MEM_CMN_ECC_ERR_ADDRESS0
                            375 	.globl _MCU_INFO_3
                            376 	.globl _MCU_INFO_2
                            377 	.globl _MCU_INFO_1
                            378 	.globl _MCU_INFO_0
                            379 	.globl _MEMORY_CONTROL_4
                            380 	.globl _MEMORY_CONTROL_3
                            381 	.globl _MEMORY_CONTROL_2
                            382 	.globl _MEMORY_CONTROL_1
                            383 	.globl _MEMORY_CONTROL_0
                            384 	.globl _MCU_DEBUG1
                            385 	.globl _MCU_DEBUG0
                            386 	.globl _MCU_CONTROL_4
                            387 	.globl _MCU_CONTROL_3
                            388 	.globl _MCU_CONTROL_2
                            389 	.globl _MCU_CONTROL_1
                            390 	.globl _MCU_CONTROL_0
                            391 	.globl _GLOB_L1_SUBSTATES_CFG
                            392 	.globl _GLOB_PIPE_REVISION
                            393 	.globl _GLOB_BIST_DATA_HI
                            394 	.globl _GLOB_BIST_SEQR_CFG
                            395 	.globl _GLOB_BIST_RESULT
                            396 	.globl _GLOB_BIST_MASK
                            397 	.globl _GLOB_BIST_START
                            398 	.globl _GLOB_BIST_LANE_TYPE
                            399 	.globl _GLOB_BIST_CTRL
                            400 	.globl _GLOB_DP_BAL_CFG4
                            401 	.globl _GLOB_DP_BAL_CFG2
                            402 	.globl _GLOB_DP_BAL_CFG0
                            403 	.globl _GLOB_PM_DP_CTRL
                            404 	.globl _GLOB_COUNTER_HI
                            405 	.globl _GLOB_COUNTER_CTRL
                            406 	.globl _GLOB_PM_CFG0
                            407 	.globl _GLOB_DP_SAL_CFG5
                            408 	.globl _GLOB_DP_SAL_CFG3
                            409 	.globl _GLOB_DP_SAL_CFG1
                            410 	.globl _GLOB_DP_SAL_CFG
                            411 	.globl _GLOB_MISC_CTRL
                            412 	.globl _GLOB_CLK_SRC_HI
                            413 	.globl _GLOB_CLK_SRC_LO
                            414 	.globl _GLOB_RST_CLK_CTRL
                            415 	.globl _DFE_STATIC_REG6
                            416 	.globl _DFE_STATIC_REG5
                            417 	.globl _DFE_STATIC_REG4
                            418 	.globl _DFE_STATIC_REG3
                            419 	.globl _DFE_STATIC_REG1
                            420 	.globl _DFE_STATIC_REG0
                            421 	.globl _RX_CMN_0
                            422 	.globl _SRIS_REG1
                            423 	.globl _SRIS_REG0
                            424 	.globl _DTX_PHY_ALIGN_REG2
                            425 	.globl _DTX_PHY_ALIGN_REG1
                            426 	.globl _DTX_PHY_ALIGN_REG0
                            427 	.globl _DTX_REG4
                            428 	.globl _DTX_REG3
                            429 	.globl _DTX_REG2
                            430 	.globl _DTX_REG1
                            431 	.globl _DTX_REG0
                            432 	.globl _TX_CMN_REG
                            433 	.globl _END_XDAT_LANE
                            434 	.globl _TRAIN_CONTROL_17
                            435 	.globl _TRAIN_CONTROL_16
                            436 	.globl _TRAIN_CONTROL_15
                            437 	.globl _TRAIN_CONTROL_14
                            438 	.globl _TRAIN_CONTROL_13
                            439 	.globl _ESM_ERR_N_CNT_LOW_LANE
                            440 	.globl _ESM_POP_N_CNT_LOW_LANE
                            441 	.globl _TRAIN_CONTROL_12
                            442 	.globl _TRAIN_CONTROL_11
                            443 	.globl _TRAIN_CONTROL_10
                            444 	.globl _TRAIN_CONTROL_9
                            445 	.globl _TRAIN_CONTROL_8
                            446 	.globl _TRAIN_CONTROL_7
                            447 	.globl _TRAIN_CONTROL_6
                            448 	.globl _TRAIN_CONTROL_5
                            449 	.globl _TRAIN_CONTROL_4
                            450 	.globl _TRAIN_CONTROL_3
                            451 	.globl _ESM_ERR_POP_CNT_HIGH_LANE
                            452 	.globl _ESM_ERR_P_CNT_LOW_LANE
                            453 	.globl _ESM_POP_P_CNT_LOW_LANE
                            454 	.globl _CDS_CTRL_REG1
                            455 	.globl _CDS_CTRL_REG0
                            456 	.globl _DFE_CONTROL_11
                            457 	.globl _DFE_CONTROL_10
                            458 	.globl _DFE_CONTROL_9
                            459 	.globl _DFE_CONTROL_8
                            460 	.globl _DFE_CONTROL_7
                            461 	.globl _DFE_TEST_5
                            462 	.globl _DFE_TEST_4
                            463 	.globl _DFE_TEST_1
                            464 	.globl _DFE_TEST_0
                            465 	.globl _DFE_CONTROL_6
                            466 	.globl _TRAIN_PARA_3
                            467 	.globl _TRAIN_PARA_2
                            468 	.globl _TRAIN_PARA_1
                            469 	.globl _TRAIN_PARA_0
                            470 	.globl _DLL_CAL
                            471 	.globl _RPTA_CONFIG_1
                            472 	.globl _RPTA_CONFIG_0
                            473 	.globl _TRAIN_CONTROL_2
                            474 	.globl _TRAIN_CONTROL_1
                            475 	.globl _TRAIN_CONTROL_0
                            476 	.globl _DFE_CONTROL_5
                            477 	.globl _DFE_CONTROL_4
                            478 	.globl _DFE_CONTROL_3
                            479 	.globl _DFE_CONTROL_2
                            480 	.globl _DFE_CONTROL_1
                            481 	.globl _DFE_CONTROL_0
                            482 	.globl _TRX_TRAIN_IF_TIMERS_ENABLE_LANE
                            483 	.globl _TRX_TRAIN_IF_TIMERS2_LANE
                            484 	.globl _TRX_TRAIN_IF_TIMERS1_LANE
                            485 	.globl _PHY_LOCAL_VALUE_LANE
                            486 	.globl _PHY_REMOTE_CTRL_VALUE_LANE
                            487 	.globl _PHY_REMOTE_CTRL_COMMAND_LANE
                            488 	.globl _CAL_SAVE_DATA3_LANE
                            489 	.globl _CAL_SAVE_DATA2_LANE
                            490 	.globl _CAL_SAVE_DATA1_LANE
                            491 	.globl _CAL_CTRL4_LANE
                            492 	.globl _CAL_CTRL3_LANE
                            493 	.globl _CAL_CTRL2_LANE
                            494 	.globl _CAL_CTRL1_LANE
                            495 	.globl _LANE_MARGIN_REG0
                            496 	.globl _EOM_VLD_REG4
                            497 	.globl _EOM_REG0
                            498 	.globl _EOM_ERR_REG3
                            499 	.globl _EOM_ERR_REG2
                            500 	.globl _EOM_ERR_REG1
                            501 	.globl _EOM_ERR_REG0
                            502 	.globl _EOM_VLD_REG3
                            503 	.globl _EOM_VLD_REG2
                            504 	.globl _EOM_VLD_REG1
                            505 	.globl _EOM_VLD_REG0
                            506 	.globl _DFE_STATIC_LANE_REG6
                            507 	.globl _DFE_STATIC_LANE_REG5
                            508 	.globl _DFE_STATIC_LANE_REG4
                            509 	.globl _DFE_STATIC_LANE_REG3
                            510 	.globl _DFE_STATIC_LANE_REG1
                            511 	.globl _DFE_STATIC_LANE_REG0
                            512 	.globl _DFE_DCE_REG0
                            513 	.globl _CAL_OFST_REG2
                            514 	.globl _CAL_OFST_REG1
                            515 	.globl _CAL_OFST_REG0
                            516 	.globl _DFE_READ_ODD_2C_REG8
                            517 	.globl _DFE_READ_EVEN_2C_REG8
                            518 	.globl _DFE_READ_ODD_2C_REG7
                            519 	.globl _DFE_READ_ODD_2C_REG6
                            520 	.globl _DFE_READ_ODD_2C_REG5
                            521 	.globl _DFE_READ_ODD_2C_REG4
                            522 	.globl _DFE_READ_ODD_2C_REG3
                            523 	.globl _DFE_READ_ODD_2C_REG2
                            524 	.globl _DFE_READ_ODD_2C_REG1
                            525 	.globl _DFE_READ_ODD_2C_REG0
                            526 	.globl _DFE_READ_EVEN_2C_REG7
                            527 	.globl _DFE_READ_EVEN_2C_REG6
                            528 	.globl _DFE_READ_EVEN_2C_REG5
                            529 	.globl _DFE_READ_EVEN_2C_REG4
                            530 	.globl _DFE_READ_EVEN_2C_REG3
                            531 	.globl _DFE_READ_EVEN_2C_REG2
                            532 	.globl _DFE_READ_EVEN_2C_REG1
                            533 	.globl _DFE_READ_EVEN_2C_REG0
                            534 	.globl _DFE_READ_ODD_SM_REG8
                            535 	.globl _DFE_READ_EVEN_SM_REG8
                            536 	.globl _DFE_READ_ODD_SM_REG7
                            537 	.globl _DFE_READ_ODD_SM_REG6
                            538 	.globl _DFE_READ_ODD_SM_REG5
                            539 	.globl _DFE_READ_ODD_SM_REG4
                            540 	.globl _DFE_READ_ODD_SM_REG3
                            541 	.globl _DFE_READ_ODD_SM_REG2
                            542 	.globl _DFE_READ_ODD_SM_REG1
                            543 	.globl _DFE_READ_ODD_SM_REG0
                            544 	.globl _DFE_READ_EVEN_SM_REG7
                            545 	.globl _DFE_READ_EVEN_SM_REG6
                            546 	.globl _DFE_READ_EVEN_SM_REG5
                            547 	.globl _DFE_READ_EVEN_SM_REG4
                            548 	.globl _DFE_READ_EVEN_SM_REG3
                            549 	.globl _DFE_READ_EVEN_SM_REG2
                            550 	.globl _DFE_READ_EVEN_SM_REG1
                            551 	.globl _DFE_READ_EVEN_SM_REG0
                            552 	.globl _DFE_FEXT_ODD_REG7
                            553 	.globl _DFE_FEXT_ODD_REG6
                            554 	.globl _DFE_FEXT_ODD_REG5
                            555 	.globl _DFE_FEXT_ODD_REG4
                            556 	.globl _DFE_FEXT_ODD_REG3
                            557 	.globl _DFE_FEXT_ODD_REG2
                            558 	.globl _DFE_FEXT_ODD_REG1
                            559 	.globl _DFE_FEXT_ODD_REG0
                            560 	.globl _DFE_FEXT_EVEN_REG7
                            561 	.globl _DFE_FEXT_EVEN_REG6
                            562 	.globl _DFE_FEXT_EVEN_REG5
                            563 	.globl _DFE_FEXT_EVEN_REG4
                            564 	.globl _DFE_FEXT_EVEN_REG3
                            565 	.globl _DFE_FEXT_EVEN_REG2
                            566 	.globl _DFE_FEXT_EVEN_REG1
                            567 	.globl _DFE_FEXT_EVEN_REG0
                            568 	.globl _DFE_DC_ODD_REG8
                            569 	.globl _DFE_DC_EVEN_REG8
                            570 	.globl _DFE_FEN_ODD_REG
                            571 	.globl _DFE_FEN_EVEN_REG
                            572 	.globl _DFE_STEP_REG1
                            573 	.globl _DFE_STEP_REG0
                            574 	.globl _DFE_ANA_REG1
                            575 	.globl _DFE_ANA_REG0
                            576 	.globl _DFE_CTRL_REG4
                            577 	.globl _RX_EQ_CLK_CTRL
                            578 	.globl _DFE_CTRL_REG3
                            579 	.globl _DFE_CTRL_REG2
                            580 	.globl _DFE_CTRL_REG1
                            581 	.globl _DFE_CTRL_REG0
                            582 	.globl _PT_COUNTER2
                            583 	.globl _PT_COUNTER1
                            584 	.globl _PT_COUNTER0
                            585 	.globl _PT_USER_PATTERN2
                            586 	.globl _PT_USER_PATTERN1
                            587 	.globl _PT_USER_PATTERN0
                            588 	.globl _PT_CONTROL1
                            589 	.globl _PT_CONTROL0
                            590 	.globl _XDATA_MEM_CHECKSUM_LANE1
                            591 	.globl _XDATA_MEM_CHECKSUM_LANE0
                            592 	.globl _MEM_ECC_ERR_ADDRESS0
                            593 	.globl _MCU_COMMAND0
                            594 	.globl _MCU_INT_CONTROL_13
                            595 	.globl _MCU_WDT_LANE
                            596 	.globl _MCU_IRQ_ISR_LANE
                            597 	.globl _ANA_IF_DFEO_REG0
                            598 	.globl _ANA_IF_DFEE_REG0
                            599 	.globl _ANA_IF_TRX_REG0
                            600 	.globl _EXT_INT_CONTROL
                            601 	.globl _MCU_DEBUG_LANE
                            602 	.globl _MCU_DEBUG3_LANE
                            603 	.globl _MCU_DEBUG2_LANE
                            604 	.globl _MCU_DEBUG1_LANE
                            605 	.globl _MCU_DEBUG0_LANE
                            606 	.globl _MCU_TIMER_CTRL_7_LANE
                            607 	.globl _MCU_TIMER_CTRL_6_LANE
                            608 	.globl _MCU_TIMER_CTRL_5_LANE
                            609 	.globl _MCU_TIMER_CTRL_4_LANE
                            610 	.globl _MCU_TIMER_CTRL_3_LANE
                            611 	.globl _MCU_TIMER_CTRL_2_LANE
                            612 	.globl _MCU_TIMER_CTRL_1_LANE
                            613 	.globl _MCU_MEM_REG2_LANE
                            614 	.globl _MCU_MEM_REG1_LANE
                            615 	.globl _MCU_IRQ_MASK_LANE
                            616 	.globl _MCU_IRQ_LANE
                            617 	.globl _MCU_TIMER3_CONTROL
                            618 	.globl _MCU_TIMER2_CONTROL
                            619 	.globl _MCU_TIMER1_CONTROL
                            620 	.globl _MCU_TIMER0_CONTROL
                            621 	.globl _MCU_TIMER_CONTROL
                            622 	.globl _MCU_INT12_CONTROL
                            623 	.globl _MCU_INT11_CONTROL
                            624 	.globl _MCU_INT10_CONTROL
                            625 	.globl _MCU_INT9_CONTROL
                            626 	.globl _MCU_INT8_CONTROL
                            627 	.globl _MCU_INT7_CONTROL
                            628 	.globl _MCU_INT6_CONTROL
                            629 	.globl _MCU_INT5_CONTROL
                            630 	.globl _MCU_INT4_CONTROL
                            631 	.globl _MCU_INT3_CONTROL
                            632 	.globl _MCU_INT2_CONTROL
                            633 	.globl _MCU_INT1_CONTROL
                            634 	.globl _MCU_INT0_CONTROL
                            635 	.globl _MCU_STATUS3_LANE
                            636 	.globl _MCU_STATUS2_LANE
                            637 	.globl _MCU_STATUS1_LANE
                            638 	.globl _MCU_STATUS0_LANE
                            639 	.globl _LANE_SYSTEM0
                            640 	.globl _CACHE_DEBUG1
                            641 	.globl _CACHE_DEBUG0
                            642 	.globl _MCU_GPIO
                            643 	.globl _MCU_CONTROL_LANE
                            644 	.globl _LANE_32G_PRESET_CFG16_LANE
                            645 	.globl _LANE_32G_PRESET_CFG14_LANE
                            646 	.globl _LANE_32G_PRESET_CFG12_LANE
                            647 	.globl _LANE_32G_PRESET_CFG10_LANE
                            648 	.globl _LANE_32G_PRESET_CFG8_LANE
                            649 	.globl _LANE_32G_PRESET_CFG6_LANE
                            650 	.globl _LANE_32G_PRESET_CFG4_LANE
                            651 	.globl _LANE_32G_PRESET_CFG2_LANE
                            652 	.globl _LANE_32G_PRESET_CFG0_LANE
                            653 	.globl _LANE_EQ_32G_CFG0_LANE
                            654 	.globl _LANE_16G_PRESET_CFG16_LANE
                            655 	.globl _LANE_16G_PRESET_CFG14_LANE
                            656 	.globl _LANE_16G_PRESET_CFG12_LANE
                            657 	.globl _LANE_16G_PRESET_CFG10_LANE
                            658 	.globl _LANE_16G_PRESET_CFG8_LANE
                            659 	.globl _LANE_16G_PRESET_CFG6_LANE
                            660 	.globl _LANE_16G_PRESET_CFG4_LANE
                            661 	.globl _LANE_16G_PRESET_CFG2_LANE
                            662 	.globl _LANE_16G_PRESET_CFG0_LANE
                            663 	.globl _LANE_EQ_16G_CFG0_LANE
                            664 	.globl _LANE_REMOTE_SET_LANE
                            665 	.globl _LANE_COEFF_MAX0_LANE
                            666 	.globl _LANE_PRESET_CFG16_LANE
                            667 	.globl _LANE_PRESET_CFG14_LANE
                            668 	.globl _LANE_PRESET_CFG12_LANE
                            669 	.globl _LANE_PRESET_CFG10_LANE
                            670 	.globl _LANE_PRESET_CFG8_LANE
                            671 	.globl _LANE_PRESET_CFG6_LANE
                            672 	.globl _LANE_PRESET_CFG4_LANE
                            673 	.globl _LANE_PRESET_CFG2_LANE
                            674 	.globl _LANE_PRESET_CFG0_LANE
                            675 	.globl _LANE_EQ_CFG1_LANE
                            676 	.globl _LANE_EQ_CFG0_LANE
                            677 	.globl _LANE_USB_DP_CFG2_LANE
                            678 	.globl _LANE_USB_DP_CFG1_LANE
                            679 	.globl _LANE_DP_PIE8_CFG0_LANE
                            680 	.globl _LANE_CFG_STATUS3_LANE
                            681 	.globl _LANE_CFG4
                            682 	.globl _LANE_CFG2_LANE
                            683 	.globl _LANE_CFG_STATUS2_LANE
                            684 	.globl _LANE_STATUS0
                            685 	.globl _LANE_CFG0
                            686 	.globl _SQ_REG0
                            687 	.globl _DTL_REG3
                            688 	.globl _DTL_REG2
                            689 	.globl _DTL_REG1
                            690 	.globl _DTL_REG0
                            691 	.globl _RX_LANE_INTERRUPT_REG1
                            692 	.globl _RX_CALIBRATION_REG
                            693 	.globl _INPUT_RX_PIN_REG3_LANE
                            694 	.globl _RX_DATA_PATH_REG
                            695 	.globl _RX_LANE_INTERRUPT_MASK
                            696 	.globl _RX_LANE_INTERRUPT
                            697 	.globl _CDR_LOCK_REG
                            698 	.globl _FRAME_SYNC_DET_REG6
                            699 	.globl _FRAME_SYNC_DET_REG5
                            700 	.globl _FRAME_SYNC_DET_REG4
                            701 	.globl _FRAME_SYNC_DET_REG3
                            702 	.globl _FRAME_SYNC_DET_REG2
                            703 	.globl _FRAME_SYNC_DET_REG1
                            704 	.globl _FRAME_SYNC_DET_REG0
                            705 	.globl _CLKGEN_RX_LANE_REG1_LANE
                            706 	.globl _DIG_RX_RSVD_REG0
                            707 	.globl _SPD_CTRL_RX_LANE_REG1_LANE
                            708 	.globl _INPUT_RX_PIN_REG2_LANE
                            709 	.globl _INPUT_RX_PIN_REG1_LANE
                            710 	.globl _INPUT_RX_PIN_REG0_LANE
                            711 	.globl _RX_SYSTEM_LANE
                            712 	.globl _PM_CTRL_RX_LANE_REG1_LANE
                            713 	.globl _MON_TOP
                            714 	.globl _ANALOG_TX_REALTIME_REG_1
                            715 	.globl _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE
                            716 	.globl _PM_CTRL_INTERRUPT_ISR_REG1_LANE
                            717 	.globl __FIELDNAME__LANE
                            718 	.globl _INPUT_TX_PIN_REG5_LANE
                            719 	.globl _DIG_TX_RSVD_REG0
                            720 	.globl _TX_CALIBRATION_LANE
                            721 	.globl _INPUT_TX_PIN_REG4_LANE
                            722 	.globl _TX_SYSTEM_LANE
                            723 	.globl _SPD_CTRL_TX_LANE_REG1_LANE
                            724 	.globl _SPD_CTRL_INTERRUPT_REG2
                            725 	.globl _SPD_CTRL_INTERRUPT_REG1_LANE
                            726 	.globl _TX_SPEED_CONVERT_LANE
                            727 	.globl _CLKGEN_TX_LANE_REG1_LANE
                            728 	.globl _PM_CTRL_INTERRUPT_REG2
                            729 	.globl _PM_CTRL_INTERRUPT_REG1_LANE
                            730 	.globl _INPUT_TX_PIN_REG3_LANE
                            731 	.globl _INPUT_TX_PIN_REG2_LANE
                            732 	.globl _INPUT_TX_PIN_REG1_LANE
                            733 	.globl _INPUT_TX_PIN_REG0_LANE
                            734 	.globl _PM_CTRL_TX_LANE_REG2_LANE
                            735 	.globl _PM_CTRL_TX_LANE_REG1_LANE
                            736 	.globl _UPHY14_CMN_ANAREG_TOP_214
                            737 	.globl _UPHY14_CMN_ANAREG_TOP_213
                            738 	.globl _UPHY14_CMN_ANAREG_TOP_212
                            739 	.globl _UPHY14_CMN_ANAREG_TOP_211
                            740 	.globl _UPHY14_CMN_ANAREG_TOP_210
                            741 	.globl _UPHY14_CMN_ANAREG_TOP_209
                            742 	.globl _UPHY14_CMN_ANAREG_TOP_208
                            743 	.globl _UPHY14_CMN_ANAREG_TOP_207
                            744 	.globl _UPHY14_CMN_ANAREG_TOP_206
                            745 	.globl _UPHY14_CMN_ANAREG_TOP_205
                            746 	.globl _UPHY14_CMN_ANAREG_TOP_204
                            747 	.globl _UPHY14_CMN_ANAREG_TOP_203
                            748 	.globl _UPHY14_CMN_ANAREG_TOP_202
                            749 	.globl _UPHY14_CMN_ANAREG_TOP_201
                            750 	.globl _UPHY14_CMN_ANAREG_TOP_200
                            751 	.globl _UPHY14_CMN_ANAREG_TOP_199
                            752 	.globl _UPHY14_CMN_ANAREG_TOP_198
                            753 	.globl _UPHY14_CMN_ANAREG_TOP_197
                            754 	.globl _UPHY14_CMN_ANAREG_TOP_196
                            755 	.globl _UPHY14_CMN_ANAREG_TOP_195
                            756 	.globl _UPHY14_CMN_ANAREG_TOP_194
                            757 	.globl _UPHY14_CMN_ANAREG_TOP_193
                            758 	.globl _UPHY14_CMN_ANAREG_TOP_192
                            759 	.globl _UPHY14_CMN_ANAREG_TOP_191
                            760 	.globl _UPHY14_CMN_ANAREG_TOP_190
                            761 	.globl _UPHY14_CMN_ANAREG_TOP_189
                            762 	.globl _UPHY14_CMN_ANAREG_TOP_188
                            763 	.globl _UPHY14_CMN_ANAREG_TOP_187
                            764 	.globl _UPHY14_CMN_ANAREG_TOP_186
                            765 	.globl _UPHY14_CMN_ANAREG_TOP_185
                            766 	.globl _UPHY14_CMN_ANAREG_TOP_184
                            767 	.globl _UPHY14_CMN_ANAREG_TOP_183
                            768 	.globl _UPHY14_CMN_ANAREG_TOP_182
                            769 	.globl _UPHY14_CMN_ANAREG_TOP_181
                            770 	.globl _UPHY14_CMN_ANAREG_TOP_180
                            771 	.globl _UPHY14_CMN_ANAREG_TOP_179
                            772 	.globl _UPHY14_CMN_ANAREG_TOP_178
                            773 	.globl _UPHY14_CMN_ANAREG_TOP_177
                            774 	.globl _UPHY14_CMN_ANAREG_TOP_176
                            775 	.globl _UPHY14_CMN_ANAREG_TOP_175
                            776 	.globl _UPHY14_CMN_ANAREG_TOP_174
                            777 	.globl _UPHY14_CMN_ANAREG_TOP_173
                            778 	.globl _UPHY14_CMN_ANAREG_TOP_172
                            779 	.globl _UPHY14_CMN_ANAREG_TOP_171
                            780 	.globl _UPHY14_CMN_ANAREG_TOP_170
                            781 	.globl _UPHY14_CMN_ANAREG_TOP_169
                            782 	.globl _UPHY14_CMN_ANAREG_TOP_168
                            783 	.globl _UPHY14_CMN_ANAREG_TOP_167
                            784 	.globl _UPHY14_CMN_ANAREG_TOP_166
                            785 	.globl _UPHY14_CMN_ANAREG_TOP_165
                            786 	.globl _UPHY14_CMN_ANAREG_TOP_164
                            787 	.globl _UPHY14_CMN_ANAREG_TOP_163
                            788 	.globl _UPHY14_CMN_ANAREG_TOP_162
                            789 	.globl _UPHY14_CMN_ANAREG_TOP_161
                            790 	.globl _UPHY14_CMN_ANAREG_TOP_160
                            791 	.globl _UPHY14_CMN_ANAREG_TOP_159
                            792 	.globl _UPHY14_CMN_ANAREG_TOP_158
                            793 	.globl _UPHY14_CMN_ANAREG_TOP_157
                            794 	.globl _UPHY14_CMN_ANAREG_TOP_156
                            795 	.globl _UPHY14_CMN_ANAREG_TOP_155
                            796 	.globl _UPHY14_CMN_ANAREG_TOP_154
                            797 	.globl _UPHY14_CMN_ANAREG_TOP_153
                            798 	.globl _UPHY14_CMN_ANAREG_TOP_152
                            799 	.globl _UPHY14_CMN_ANAREG_TOP_151
                            800 	.globl _UPHY14_CMN_ANAREG_TOP_150
                            801 	.globl _UPHY14_CMN_ANAREG_TOP_149
                            802 	.globl _UPHY14_CMN_ANAREG_TOP_148
                            803 	.globl _UPHY14_CMN_ANAREG_TOP_147
                            804 	.globl _UPHY14_CMN_ANAREG_TOP_146
                            805 	.globl _UPHY14_CMN_ANAREG_TOP_145
                            806 	.globl _UPHY14_CMN_ANAREG_TOP_144
                            807 	.globl _UPHY14_CMN_ANAREG_TOP_143
                            808 	.globl _UPHY14_CMN_ANAREG_TOP_142
                            809 	.globl _UPHY14_CMN_ANAREG_TOP_141
                            810 	.globl _UPHY14_CMN_ANAREG_TOP_140
                            811 	.globl _UPHY14_CMN_ANAREG_TOP_139
                            812 	.globl _UPHY14_CMN_ANAREG_TOP_138
                            813 	.globl _UPHY14_CMN_ANAREG_TOP_137
                            814 	.globl _UPHY14_CMN_ANAREG_TOP_136
                            815 	.globl _UPHY14_CMN_ANAREG_TOP_135
                            816 	.globl _UPHY14_CMN_ANAREG_TOP_134
                            817 	.globl _UPHY14_CMN_ANAREG_TOP_133
                            818 	.globl _UPHY14_CMN_ANAREG_TOP_132
                            819 	.globl _UPHY14_CMN_ANAREG_TOP_131
                            820 	.globl _UPHY14_CMN_ANAREG_TOP_130
                            821 	.globl _UPHY14_CMN_ANAREG_TOP_129
                            822 	.globl _UPHY14_CMN_ANAREG_TOP_128
                            823 	.globl _ANA_DFEO_REG_0B
                            824 	.globl _ANA_DFEO_REG_0A
                            825 	.globl _ANA_DFEO_REG_09
                            826 	.globl _ANA_DFEO_REG_08
                            827 	.globl _ANA_DFEO_REG_07
                            828 	.globl _ANA_DFEO_REG_06
                            829 	.globl _ANA_DFEO_REG_05
                            830 	.globl _ANA_DFEO_REG_04
                            831 	.globl _ANA_DFEO_REG_03
                            832 	.globl _ANA_DFEO_REG_02
                            833 	.globl _ANA_DFEO_REG_01
                            834 	.globl _ANA_DFEO_REG_00
                            835 	.globl _ANA_DFEO_REG_27
                            836 	.globl _ANA_DFEO_REG_26
                            837 	.globl _ANA_DFEO_REG_25
                            838 	.globl _ANA_DFEO_REG_24
                            839 	.globl _ANA_DFEO_REG_23
                            840 	.globl _ANA_DFEO_REG_22
                            841 	.globl _ANA_DFEO_REG_21
                            842 	.globl _ANA_DFEO_REG_20
                            843 	.globl _ANA_DFEO_REG_1F
                            844 	.globl _ANA_DFEO_REG_1E
                            845 	.globl _ANA_DFEO_REG_1D
                            846 	.globl _ANA_DFEO_REG_1C
                            847 	.globl _ANA_DFEO_REG_1B
                            848 	.globl _ANA_DFEO_REG_1A
                            849 	.globl _ANA_DFEO_REG_19
                            850 	.globl _ANA_DFEO_REG_18
                            851 	.globl _ANA_DFEO_REG_17
                            852 	.globl _ANA_DFEO_REG_16
                            853 	.globl _ANA_DFEO_REG_15
                            854 	.globl _ANA_DFEO_REG_14
                            855 	.globl _ANA_DFEO_REG_13
                            856 	.globl _ANA_DFEO_REG_12
                            857 	.globl _ANA_DFEO_REG_11
                            858 	.globl _ANA_DFEO_REG_10
                            859 	.globl _ANA_DFEO_REG_0F
                            860 	.globl _ANA_DFEO_REG_0E
                            861 	.globl _ANA_DFEO_REG_0D
                            862 	.globl _ANA_DFEO_REG_0C
                            863 	.globl _ANA_DFEE_REG_1D
                            864 	.globl _ANA_DFEE_REG_1C
                            865 	.globl _ANA_DFEE_REG_1B
                            866 	.globl _ANA_DFEE_REG_1A
                            867 	.globl _ANA_DFEE_REG_19
                            868 	.globl _ANA_DFEE_REG_18
                            869 	.globl _ANA_DFEE_REG_17
                            870 	.globl _ANA_DFEE_REG_16
                            871 	.globl _ANA_DFEE_REG_15
                            872 	.globl _ANA_DFEE_REG_14
                            873 	.globl _ANA_DFEE_REG_13
                            874 	.globl _ANA_DFEE_REG_12
                            875 	.globl _ANA_DFEE_REG_11
                            876 	.globl _ANA_DFEE_REG_10
                            877 	.globl _ANA_DFEE_REG_0F
                            878 	.globl _ANA_DFEE_REG_0E
                            879 	.globl _ANA_DFEE_REG_0D
                            880 	.globl _ANA_DFEE_REG_0C
                            881 	.globl _ANA_DFEE_REG_0B
                            882 	.globl _ANA_DFEE_REG_0A
                            883 	.globl _ANA_DFEE_REG_09
                            884 	.globl _ANA_DFEE_REG_08
                            885 	.globl _ANA_DFEE_REG_07
                            886 	.globl _ANA_DFEE_REG_06
                            887 	.globl _ANA_DFEE_REG_05
                            888 	.globl _ANA_DFEE_REG_04
                            889 	.globl _ANA_DFEE_REG_03
                            890 	.globl _ANA_DFEE_REG_02
                            891 	.globl _ANA_DFEE_REG_01
                            892 	.globl _ANA_DFEE_REG_00
                            893 	.globl _ANA_DFEE_REG_27
                            894 	.globl _ANA_DFEE_REG_26
                            895 	.globl _ANA_DFEE_REG_25
                            896 	.globl _ANA_DFEE_REG_24
                            897 	.globl _ANA_DFEE_REG_23
                            898 	.globl _ANA_DFEE_REG_22
                            899 	.globl _ANA_DFEE_REG_21
                            900 	.globl _ANA_DFEE_REG_20
                            901 	.globl _ANA_DFEE_REG_1F
                            902 	.globl _ANA_DFEE_REG_1E
                            903 	.globl _UPHY14_TRX_ANAREG_BOT_32
                            904 	.globl _UPHY14_TRX_ANAREG_BOT_31
                            905 	.globl _UPHY14_TRX_ANAREG_BOT_30
                            906 	.globl _UPHY14_TRX_ANAREG_BOT_29
                            907 	.globl _UPHY14_TRX_ANAREG_BOT_28
                            908 	.globl _UPHY14_TRX_ANAREG_BOT_27
                            909 	.globl _UPHY14_TRX_ANAREG_BOT_26
                            910 	.globl _UPHY14_TRX_ANAREG_BOT_25
                            911 	.globl _UPHY14_TRX_ANAREG_BOT_24
                            912 	.globl _UPHY14_TRX_ANAREG_BOT_23
                            913 	.globl _UPHY14_TRX_ANAREG_BOT_22
                            914 	.globl _UPHY14_TRX_ANAREG_BOT_21
                            915 	.globl _UPHY14_TRX_ANAREG_BOT_20
                            916 	.globl _UPHY14_TRX_ANAREG_BOT_19
                            917 	.globl _UPHY14_TRX_ANAREG_BOT_18
                            918 	.globl _UPHY14_TRX_ANAREG_BOT_17
                            919 	.globl _UPHY14_TRX_ANAREG_BOT_16
                            920 	.globl _UPHY14_TRX_ANAREG_BOT_15
                            921 	.globl _UPHY14_TRX_ANAREG_BOT_14
                            922 	.globl _UPHY14_TRX_ANAREG_BOT_13
                            923 	.globl _UPHY14_TRX_ANAREG_BOT_12
                            924 	.globl _UPHY14_TRX_ANAREG_BOT_11
                            925 	.globl _UPHY14_TRX_ANAREG_BOT_10
                            926 	.globl _UPHY14_TRX_ANAREG_BOT_9
                            927 	.globl _UPHY14_TRX_ANAREG_BOT_8
                            928 	.globl _UPHY14_TRX_ANAREG_BOT_7
                            929 	.globl _UPHY14_TRX_ANAREG_BOT_6
                            930 	.globl _UPHY14_TRX_ANAREG_BOT_5
                            931 	.globl _UPHY14_TRX_ANAREG_BOT_4
                            932 	.globl _UPHY14_TRX_ANAREG_BOT_3
                            933 	.globl _UPHY14_TRX_ANAREG_BOT_2
                            934 	.globl _UPHY14_TRX_ANAREG_BOT_1
                            935 	.globl _UPHY14_TRX_ANAREG_BOT_0
                            936 	.globl _UPHY14_TRX_ANAREG_TOP_157
                            937 	.globl _UPHY14_TRX_ANAREG_TOP_156
                            938 	.globl _UPHY14_TRX_ANAREG_TOP_155
                            939 	.globl _UPHY14_TRX_ANAREG_TOP_154
                            940 	.globl _UPHY14_TRX_ANAREG_TOP_153
                            941 	.globl _UPHY14_TRX_ANAREG_TOP_152
                            942 	.globl _UPHY14_TRX_ANAREG_TOP_151
                            943 	.globl _UPHY14_TRX_ANAREG_TOP_150
                            944 	.globl _UPHY14_TRX_ANAREG_TOP_149
                            945 	.globl _UPHY14_TRX_ANAREG_TOP_148
                            946 	.globl _UPHY14_TRX_ANAREG_TOP_147
                            947 	.globl _UPHY14_TRX_ANAREG_TOP_146
                            948 	.globl _UPHY14_TRX_ANAREG_TOP_145
                            949 	.globl _UPHY14_TRX_ANAREG_TOP_144
                            950 	.globl _UPHY14_TRX_ANAREG_TOP_143
                            951 	.globl _UPHY14_TRX_ANAREG_TOP_142
                            952 	.globl _UPHY14_TRX_ANAREG_TOP_141
                            953 	.globl _UPHY14_TRX_ANAREG_TOP_140
                            954 	.globl _UPHY14_TRX_ANAREG_TOP_139
                            955 	.globl _UPHY14_TRX_ANAREG_TOP_138
                            956 	.globl _UPHY14_TRX_ANAREG_TOP_137
                            957 	.globl _UPHY14_TRX_ANAREG_TOP_136
                            958 	.globl _UPHY14_TRX_ANAREG_TOP_135
                            959 	.globl _UPHY14_TRX_ANAREG_TOP_134
                            960 	.globl _UPHY14_TRX_ANAREG_TOP_133
                            961 	.globl _UPHY14_TRX_ANAREG_TOP_132
                            962 	.globl _UPHY14_TRX_ANAREG_TOP_131
                            963 	.globl _UPHY14_TRX_ANAREG_TOP_130
                            964 	.globl _UPHY14_TRX_ANAREG_TOP_129
                            965 	.globl _UPHY14_TRX_ANAREG_TOP_128
                            966 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_143
                            967 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_142
                            968 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_141
                            969 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_140
                            970 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_139
                            971 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_138
                            972 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_137
                            973 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_136
                            974 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_135
                            975 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_134
                            976 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_133
                            977 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_132
                            978 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_131
                            979 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_130
                            980 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_129
                            981 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_128
                            982 	.globl _apta_txtrain
                            983 ;--------------------------------------------------------
                            984 ; special function registers
                            985 ;--------------------------------------------------------
                            986 	.area RSEG    (ABS,DATA)
   0000                     987 	.org 0x0000
                    0080    988 _P0	=	0x0080
                    0082    989 _DPL	=	0x0082
                    0083    990 _DPH	=	0x0083
                    0086    991 _WDTREL	=	0x0086
                    0087    992 _PCON	=	0x0087
                    0088    993 _TCON	=	0x0088
                    0089    994 _TMOD	=	0x0089
                    008A    995 _TL0	=	0x008a
                    008B    996 _TL1	=	0x008b
                    008C    997 _TH0	=	0x008c
                    008D    998 _TH1	=	0x008d
                    008E    999 _CKCON	=	0x008e
                    0090   1000 _P1	=	0x0090
                    0092   1001 _DPS	=	0x0092
                    0094   1002 _PSBANK	=	0x0094
                    0098   1003 _SCON	=	0x0098
                    0099   1004 _SBUF	=	0x0099
                    009A   1005 _IEN2	=	0x009a
                    00A0   1006 _P2	=	0x00a0
                    00A1   1007 _DMAS0	=	0x00a1
                    00A2   1008 _DMAS1	=	0x00a2
                    00A3   1009 _DMAS2	=	0x00a3
                    00A4   1010 _DMAT0	=	0x00a4
                    00A5   1011 _DMAT1	=	0x00a5
                    00A6   1012 _DMAT2	=	0x00a6
                    00A8   1013 _IEN0	=	0x00a8
                    00A9   1014 _IP0	=	0x00a9
                    00AA   1015 _S0RELL	=	0x00aa
                    00B0   1016 _P3	=	0x00b0
                    00B1   1017 _DMAC0	=	0x00b1
                    00B2   1018 _DMAC1	=	0x00b2
                    00B3   1019 _DMAC2	=	0x00b3
                    00B4   1020 _DMASEL	=	0x00b4
                    00B5   1021 _DMAM0	=	0x00b5
                    00B6   1022 _DMAM1	=	0x00b6
                    00B8   1023 _IEN1	=	0x00b8
                    00B9   1024 _IP1	=	0x00b9
                    00BA   1025 _S0RELH	=	0x00ba
                    00C0   1026 _IRCON	=	0x00c0
                    00C1   1027 _CCEN	=	0x00c1
                    00C8   1028 _T2CON	=	0x00c8
                    00CA   1029 _RCAP2L	=	0x00ca
                    00CB   1030 _RCAP2H	=	0x00cb
                    00CC   1031 _TL2	=	0x00cc
                    00CD   1032 _TH2	=	0x00cd
                    00D0   1033 _PSW	=	0x00d0
                    00D8   1034 _ADCON	=	0x00d8
                    00E0   1035 _ACC	=	0x00e0
                    00E8   1036 _EIE	=	0x00e8
                    00F0   1037 _B	=	0x00f0
                    00F7   1038 _SRST	=	0x00f7
                    8C8A   1039 _TMR0	=	0x8c8a
                    8D8B   1040 _TMR1	=	0x8d8b
                    CDCC   1041 _TMR2	=	0xcdcc
                    A2A1   1042 _DMASA	=	0xa2a1
                    A5A4   1043 _DMATA	=	0xa5a4
                    B2B1   1044 _DMAC	=	0xb2b1
                           1045 ;--------------------------------------------------------
                           1046 ; special function bits
                           1047 ;--------------------------------------------------------
                           1048 	.area RSEG    (ABS,DATA)
   0000                    1049 	.org 0x0000
                    0080   1050 _P0_0	=	0x0080
                    0081   1051 _P0_1	=	0x0081
                    0082   1052 _P0_2	=	0x0082
                    0083   1053 _P0_3	=	0x0083
                    0084   1054 _P0_4	=	0x0084
                    0085   1055 _P0_5	=	0x0085
                    0086   1056 _P0_6	=	0x0086
                    0087   1057 _P0_7	=	0x0087
                    0090   1058 _P1_0	=	0x0090
                    0091   1059 _P1_1	=	0x0091
                    0092   1060 _P1_2	=	0x0092
                    0093   1061 _P1_3	=	0x0093
                    0094   1062 _P1_4	=	0x0094
                    0095   1063 _P1_5	=	0x0095
                    0096   1064 _P1_6	=	0x0096
                    0097   1065 _P1_7	=	0x0097
                    00A0   1066 _P2_0	=	0x00a0
                    00A1   1067 _P2_1	=	0x00a1
                    00A2   1068 _P2_2	=	0x00a2
                    00A3   1069 _P2_3	=	0x00a3
                    00A4   1070 _P2_4	=	0x00a4
                    00A5   1071 _P2_5	=	0x00a5
                    00A6   1072 _P2_6	=	0x00a6
                    00A7   1073 _P2_7	=	0x00a7
                    00B0   1074 _P3_0	=	0x00b0
                    00B1   1075 _P3_1	=	0x00b1
                    00B2   1076 _P3_2	=	0x00b2
                    00B3   1077 _P3_3	=	0x00b3
                    00B4   1078 _P3_4	=	0x00b4
                    00B5   1079 _P3_5	=	0x00b5
                    00B6   1080 _P3_6	=	0x00b6
                    00B7   1081 _P3_7	=	0x00b7
                    0088   1082 _IT0	=	0x0088
                    0089   1083 _IE0	=	0x0089
                    008A   1084 _IT1	=	0x008a
                    008B   1085 _IE1	=	0x008b
                    008C   1086 _TR0	=	0x008c
                    008D   1087 _TF0	=	0x008d
                    008E   1088 _TR1	=	0x008e
                    008F   1089 _TF1	=	0x008f
                    00A8   1090 _EX0	=	0x00a8
                    00A9   1091 _ET0	=	0x00a9
                    00AA   1092 _EX1	=	0x00aa
                    00AB   1093 _ET1	=	0x00ab
                    00AC   1094 _ES	=	0x00ac
                    00AD   1095 _ET2	=	0x00ad
                    00AE   1096 _WDT	=	0x00ae
                    00AF   1097 _EA	=	0x00af
                    00B8   1098 _EX7	=	0x00b8
                    00B9   1099 _EX2	=	0x00b9
                    00BA   1100 _EX3	=	0x00ba
                    00BB   1101 _EX4	=	0x00bb
                    00BC   1102 _EX5	=	0x00bc
                    00BD   1103 _EX6	=	0x00bd
                    00BE   1104 _PS1	=	0x00be
                    009A   1105 _ES1	=	0x009a
                    009B   1106 _EX8	=	0x009b
                    009C   1107 _EX9	=	0x009c
                    009D   1108 _EX10	=	0x009d
                    009E   1109 _EX11	=	0x009e
                    009F   1110 _EX12	=	0x009f
                    0098   1111 _RI	=	0x0098
                    0099   1112 _TI	=	0x0099
                    00C6   1113 _TF2	=	0x00c6
                           1114 ;--------------------------------------------------------
                           1115 ; overlayable register banks
                           1116 ;--------------------------------------------------------
                           1117 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1118 	.ds 8
                           1119 ;--------------------------------------------------------
                           1120 ; internal ram data
                           1121 ;--------------------------------------------------------
                           1122 	.area DSEG    (DATA)
                           1123 ;--------------------------------------------------------
                           1124 ; overlayable items in internal ram 
                           1125 ;--------------------------------------------------------
                           1126 	.area OSEG    (OVR,DATA)
                           1127 ;--------------------------------------------------------
                           1128 ; indirectly addressable internal ram data
                           1129 ;--------------------------------------------------------
                           1130 	.area ISEG    (DATA)
                           1131 ;--------------------------------------------------------
                           1132 ; absolute internal ram data
                           1133 ;--------------------------------------------------------
                           1134 	.area IABS    (ABS,DATA)
                           1135 	.area IABS    (ABS,DATA)
                           1136 ;--------------------------------------------------------
                           1137 ; bit data
                           1138 ;--------------------------------------------------------
                           1139 	.area BSEG    (BIT)
                           1140 ;--------------------------------------------------------
                           1141 ; paged external ram data
                           1142 ;--------------------------------------------------------
                           1143 	.area PSEG    (PAG,XDATA)
                           1144 ;--------------------------------------------------------
                           1145 ; external ram data
                           1146 ;--------------------------------------------------------
                           1147 	.area XSEG    (XDATA)
                    1000   1148 _UPHY14_TRX_LANEPLL_ANAREG_TOP_128	=	0x1000
                    1004   1149 _UPHY14_TRX_LANEPLL_ANAREG_TOP_129	=	0x1004
                    1008   1150 _UPHY14_TRX_LANEPLL_ANAREG_TOP_130	=	0x1008
                    100C   1151 _UPHY14_TRX_LANEPLL_ANAREG_TOP_131	=	0x100c
                    1010   1152 _UPHY14_TRX_LANEPLL_ANAREG_TOP_132	=	0x1010
                    1014   1153 _UPHY14_TRX_LANEPLL_ANAREG_TOP_133	=	0x1014
                    1018   1154 _UPHY14_TRX_LANEPLL_ANAREG_TOP_134	=	0x1018
                    101C   1155 _UPHY14_TRX_LANEPLL_ANAREG_TOP_135	=	0x101c
                    1020   1156 _UPHY14_TRX_LANEPLL_ANAREG_TOP_136	=	0x1020
                    1024   1157 _UPHY14_TRX_LANEPLL_ANAREG_TOP_137	=	0x1024
                    1028   1158 _UPHY14_TRX_LANEPLL_ANAREG_TOP_138	=	0x1028
                    102C   1159 _UPHY14_TRX_LANEPLL_ANAREG_TOP_139	=	0x102c
                    1030   1160 _UPHY14_TRX_LANEPLL_ANAREG_TOP_140	=	0x1030
                    1034   1161 _UPHY14_TRX_LANEPLL_ANAREG_TOP_141	=	0x1034
                    1038   1162 _UPHY14_TRX_LANEPLL_ANAREG_TOP_142	=	0x1038
                    103C   1163 _UPHY14_TRX_LANEPLL_ANAREG_TOP_143	=	0x103c
                    0200   1164 _UPHY14_TRX_ANAREG_TOP_128	=	0x0200
                    0204   1165 _UPHY14_TRX_ANAREG_TOP_129	=	0x0204
                    0208   1166 _UPHY14_TRX_ANAREG_TOP_130	=	0x0208
                    020C   1167 _UPHY14_TRX_ANAREG_TOP_131	=	0x020c
                    0210   1168 _UPHY14_TRX_ANAREG_TOP_132	=	0x0210
                    0214   1169 _UPHY14_TRX_ANAREG_TOP_133	=	0x0214
                    0218   1170 _UPHY14_TRX_ANAREG_TOP_134	=	0x0218
                    021C   1171 _UPHY14_TRX_ANAREG_TOP_135	=	0x021c
                    0220   1172 _UPHY14_TRX_ANAREG_TOP_136	=	0x0220
                    0224   1173 _UPHY14_TRX_ANAREG_TOP_137	=	0x0224
                    0228   1174 _UPHY14_TRX_ANAREG_TOP_138	=	0x0228
                    022C   1175 _UPHY14_TRX_ANAREG_TOP_139	=	0x022c
                    0230   1176 _UPHY14_TRX_ANAREG_TOP_140	=	0x0230
                    0234   1177 _UPHY14_TRX_ANAREG_TOP_141	=	0x0234
                    0238   1178 _UPHY14_TRX_ANAREG_TOP_142	=	0x0238
                    023C   1179 _UPHY14_TRX_ANAREG_TOP_143	=	0x023c
                    0240   1180 _UPHY14_TRX_ANAREG_TOP_144	=	0x0240
                    0244   1181 _UPHY14_TRX_ANAREG_TOP_145	=	0x0244
                    0248   1182 _UPHY14_TRX_ANAREG_TOP_146	=	0x0248
                    024C   1183 _UPHY14_TRX_ANAREG_TOP_147	=	0x024c
                    0250   1184 _UPHY14_TRX_ANAREG_TOP_148	=	0x0250
                    0254   1185 _UPHY14_TRX_ANAREG_TOP_149	=	0x0254
                    0258   1186 _UPHY14_TRX_ANAREG_TOP_150	=	0x0258
                    025C   1187 _UPHY14_TRX_ANAREG_TOP_151	=	0x025c
                    0260   1188 _UPHY14_TRX_ANAREG_TOP_152	=	0x0260
                    0264   1189 _UPHY14_TRX_ANAREG_TOP_153	=	0x0264
                    0268   1190 _UPHY14_TRX_ANAREG_TOP_154	=	0x0268
                    026C   1191 _UPHY14_TRX_ANAREG_TOP_155	=	0x026c
                    0270   1192 _UPHY14_TRX_ANAREG_TOP_156	=	0x0270
                    0274   1193 _UPHY14_TRX_ANAREG_TOP_157	=	0x0274
                    0000   1194 _UPHY14_TRX_ANAREG_BOT_0	=	0x0000
                    0004   1195 _UPHY14_TRX_ANAREG_BOT_1	=	0x0004
                    0008   1196 _UPHY14_TRX_ANAREG_BOT_2	=	0x0008
                    000C   1197 _UPHY14_TRX_ANAREG_BOT_3	=	0x000c
                    0010   1198 _UPHY14_TRX_ANAREG_BOT_4	=	0x0010
                    0014   1199 _UPHY14_TRX_ANAREG_BOT_5	=	0x0014
                    0018   1200 _UPHY14_TRX_ANAREG_BOT_6	=	0x0018
                    001C   1201 _UPHY14_TRX_ANAREG_BOT_7	=	0x001c
                    0020   1202 _UPHY14_TRX_ANAREG_BOT_8	=	0x0020
                    0024   1203 _UPHY14_TRX_ANAREG_BOT_9	=	0x0024
                    0028   1204 _UPHY14_TRX_ANAREG_BOT_10	=	0x0028
                    002C   1205 _UPHY14_TRX_ANAREG_BOT_11	=	0x002c
                    0030   1206 _UPHY14_TRX_ANAREG_BOT_12	=	0x0030
                    0034   1207 _UPHY14_TRX_ANAREG_BOT_13	=	0x0034
                    0038   1208 _UPHY14_TRX_ANAREG_BOT_14	=	0x0038
                    003C   1209 _UPHY14_TRX_ANAREG_BOT_15	=	0x003c
                    0040   1210 _UPHY14_TRX_ANAREG_BOT_16	=	0x0040
                    0044   1211 _UPHY14_TRX_ANAREG_BOT_17	=	0x0044
                    0048   1212 _UPHY14_TRX_ANAREG_BOT_18	=	0x0048
                    004C   1213 _UPHY14_TRX_ANAREG_BOT_19	=	0x004c
                    0050   1214 _UPHY14_TRX_ANAREG_BOT_20	=	0x0050
                    0054   1215 _UPHY14_TRX_ANAREG_BOT_21	=	0x0054
                    0058   1216 _UPHY14_TRX_ANAREG_BOT_22	=	0x0058
                    005C   1217 _UPHY14_TRX_ANAREG_BOT_23	=	0x005c
                    0060   1218 _UPHY14_TRX_ANAREG_BOT_24	=	0x0060
                    0064   1219 _UPHY14_TRX_ANAREG_BOT_25	=	0x0064
                    0068   1220 _UPHY14_TRX_ANAREG_BOT_26	=	0x0068
                    006C   1221 _UPHY14_TRX_ANAREG_BOT_27	=	0x006c
                    0070   1222 _UPHY14_TRX_ANAREG_BOT_28	=	0x0070
                    0074   1223 _UPHY14_TRX_ANAREG_BOT_29	=	0x0074
                    0078   1224 _UPHY14_TRX_ANAREG_BOT_30	=	0x0078
                    007C   1225 _UPHY14_TRX_ANAREG_BOT_31	=	0x007c
                    0080   1226 _UPHY14_TRX_ANAREG_BOT_32	=	0x0080
                    0478   1227 _ANA_DFEE_REG_1E	=	0x0478
                    047C   1228 _ANA_DFEE_REG_1F	=	0x047c
                    0480   1229 _ANA_DFEE_REG_20	=	0x0480
                    0484   1230 _ANA_DFEE_REG_21	=	0x0484
                    0488   1231 _ANA_DFEE_REG_22	=	0x0488
                    048C   1232 _ANA_DFEE_REG_23	=	0x048c
                    0490   1233 _ANA_DFEE_REG_24	=	0x0490
                    0494   1234 _ANA_DFEE_REG_25	=	0x0494
                    0498   1235 _ANA_DFEE_REG_26	=	0x0498
                    049C   1236 _ANA_DFEE_REG_27	=	0x049c
                    0400   1237 _ANA_DFEE_REG_00	=	0x0400
                    0404   1238 _ANA_DFEE_REG_01	=	0x0404
                    0408   1239 _ANA_DFEE_REG_02	=	0x0408
                    040C   1240 _ANA_DFEE_REG_03	=	0x040c
                    0410   1241 _ANA_DFEE_REG_04	=	0x0410
                    0414   1242 _ANA_DFEE_REG_05	=	0x0414
                    0418   1243 _ANA_DFEE_REG_06	=	0x0418
                    041C   1244 _ANA_DFEE_REG_07	=	0x041c
                    0420   1245 _ANA_DFEE_REG_08	=	0x0420
                    0424   1246 _ANA_DFEE_REG_09	=	0x0424
                    0428   1247 _ANA_DFEE_REG_0A	=	0x0428
                    042C   1248 _ANA_DFEE_REG_0B	=	0x042c
                    0430   1249 _ANA_DFEE_REG_0C	=	0x0430
                    0434   1250 _ANA_DFEE_REG_0D	=	0x0434
                    0438   1251 _ANA_DFEE_REG_0E	=	0x0438
                    043C   1252 _ANA_DFEE_REG_0F	=	0x043c
                    0440   1253 _ANA_DFEE_REG_10	=	0x0440
                    0444   1254 _ANA_DFEE_REG_11	=	0x0444
                    0448   1255 _ANA_DFEE_REG_12	=	0x0448
                    044C   1256 _ANA_DFEE_REG_13	=	0x044c
                    0450   1257 _ANA_DFEE_REG_14	=	0x0450
                    0454   1258 _ANA_DFEE_REG_15	=	0x0454
                    0458   1259 _ANA_DFEE_REG_16	=	0x0458
                    045C   1260 _ANA_DFEE_REG_17	=	0x045c
                    0460   1261 _ANA_DFEE_REG_18	=	0x0460
                    0464   1262 _ANA_DFEE_REG_19	=	0x0464
                    0468   1263 _ANA_DFEE_REG_1A	=	0x0468
                    046C   1264 _ANA_DFEE_REG_1B	=	0x046c
                    0470   1265 _ANA_DFEE_REG_1C	=	0x0470
                    0474   1266 _ANA_DFEE_REG_1D	=	0x0474
                    0830   1267 _ANA_DFEO_REG_0C	=	0x0830
                    0834   1268 _ANA_DFEO_REG_0D	=	0x0834
                    0838   1269 _ANA_DFEO_REG_0E	=	0x0838
                    083C   1270 _ANA_DFEO_REG_0F	=	0x083c
                    0840   1271 _ANA_DFEO_REG_10	=	0x0840
                    0844   1272 _ANA_DFEO_REG_11	=	0x0844
                    0848   1273 _ANA_DFEO_REG_12	=	0x0848
                    084C   1274 _ANA_DFEO_REG_13	=	0x084c
                    0850   1275 _ANA_DFEO_REG_14	=	0x0850
                    0854   1276 _ANA_DFEO_REG_15	=	0x0854
                    0858   1277 _ANA_DFEO_REG_16	=	0x0858
                    085C   1278 _ANA_DFEO_REG_17	=	0x085c
                    0860   1279 _ANA_DFEO_REG_18	=	0x0860
                    0864   1280 _ANA_DFEO_REG_19	=	0x0864
                    0868   1281 _ANA_DFEO_REG_1A	=	0x0868
                    086C   1282 _ANA_DFEO_REG_1B	=	0x086c
                    0870   1283 _ANA_DFEO_REG_1C	=	0x0870
                    0874   1284 _ANA_DFEO_REG_1D	=	0x0874
                    0878   1285 _ANA_DFEO_REG_1E	=	0x0878
                    087C   1286 _ANA_DFEO_REG_1F	=	0x087c
                    0880   1287 _ANA_DFEO_REG_20	=	0x0880
                    0884   1288 _ANA_DFEO_REG_21	=	0x0884
                    0888   1289 _ANA_DFEO_REG_22	=	0x0888
                    088C   1290 _ANA_DFEO_REG_23	=	0x088c
                    0890   1291 _ANA_DFEO_REG_24	=	0x0890
                    0894   1292 _ANA_DFEO_REG_25	=	0x0894
                    0898   1293 _ANA_DFEO_REG_26	=	0x0898
                    089C   1294 _ANA_DFEO_REG_27	=	0x089c
                    0800   1295 _ANA_DFEO_REG_00	=	0x0800
                    0804   1296 _ANA_DFEO_REG_01	=	0x0804
                    0808   1297 _ANA_DFEO_REG_02	=	0x0808
                    080C   1298 _ANA_DFEO_REG_03	=	0x080c
                    0810   1299 _ANA_DFEO_REG_04	=	0x0810
                    0814   1300 _ANA_DFEO_REG_05	=	0x0814
                    0818   1301 _ANA_DFEO_REG_06	=	0x0818
                    081C   1302 _ANA_DFEO_REG_07	=	0x081c
                    0820   1303 _ANA_DFEO_REG_08	=	0x0820
                    0824   1304 _ANA_DFEO_REG_09	=	0x0824
                    0828   1305 _ANA_DFEO_REG_0A	=	0x0828
                    082C   1306 _ANA_DFEO_REG_0B	=	0x082c
                    8200   1307 _UPHY14_CMN_ANAREG_TOP_128	=	0x8200
                    8204   1308 _UPHY14_CMN_ANAREG_TOP_129	=	0x8204
                    8208   1309 _UPHY14_CMN_ANAREG_TOP_130	=	0x8208
                    820C   1310 _UPHY14_CMN_ANAREG_TOP_131	=	0x820c
                    8210   1311 _UPHY14_CMN_ANAREG_TOP_132	=	0x8210
                    8214   1312 _UPHY14_CMN_ANAREG_TOP_133	=	0x8214
                    8218   1313 _UPHY14_CMN_ANAREG_TOP_134	=	0x8218
                    821C   1314 _UPHY14_CMN_ANAREG_TOP_135	=	0x821c
                    8220   1315 _UPHY14_CMN_ANAREG_TOP_136	=	0x8220
                    8224   1316 _UPHY14_CMN_ANAREG_TOP_137	=	0x8224
                    8228   1317 _UPHY14_CMN_ANAREG_TOP_138	=	0x8228
                    822C   1318 _UPHY14_CMN_ANAREG_TOP_139	=	0x822c
                    8230   1319 _UPHY14_CMN_ANAREG_TOP_140	=	0x8230
                    8234   1320 _UPHY14_CMN_ANAREG_TOP_141	=	0x8234
                    8238   1321 _UPHY14_CMN_ANAREG_TOP_142	=	0x8238
                    823C   1322 _UPHY14_CMN_ANAREG_TOP_143	=	0x823c
                    8240   1323 _UPHY14_CMN_ANAREG_TOP_144	=	0x8240
                    8244   1324 _UPHY14_CMN_ANAREG_TOP_145	=	0x8244
                    8248   1325 _UPHY14_CMN_ANAREG_TOP_146	=	0x8248
                    824C   1326 _UPHY14_CMN_ANAREG_TOP_147	=	0x824c
                    8250   1327 _UPHY14_CMN_ANAREG_TOP_148	=	0x8250
                    8254   1328 _UPHY14_CMN_ANAREG_TOP_149	=	0x8254
                    8258   1329 _UPHY14_CMN_ANAREG_TOP_150	=	0x8258
                    825C   1330 _UPHY14_CMN_ANAREG_TOP_151	=	0x825c
                    8260   1331 _UPHY14_CMN_ANAREG_TOP_152	=	0x8260
                    8264   1332 _UPHY14_CMN_ANAREG_TOP_153	=	0x8264
                    8268   1333 _UPHY14_CMN_ANAREG_TOP_154	=	0x8268
                    826C   1334 _UPHY14_CMN_ANAREG_TOP_155	=	0x826c
                    8270   1335 _UPHY14_CMN_ANAREG_TOP_156	=	0x8270
                    8274   1336 _UPHY14_CMN_ANAREG_TOP_157	=	0x8274
                    8278   1337 _UPHY14_CMN_ANAREG_TOP_158	=	0x8278
                    827C   1338 _UPHY14_CMN_ANAREG_TOP_159	=	0x827c
                    8280   1339 _UPHY14_CMN_ANAREG_TOP_160	=	0x8280
                    8284   1340 _UPHY14_CMN_ANAREG_TOP_161	=	0x8284
                    8288   1341 _UPHY14_CMN_ANAREG_TOP_162	=	0x8288
                    828C   1342 _UPHY14_CMN_ANAREG_TOP_163	=	0x828c
                    8290   1343 _UPHY14_CMN_ANAREG_TOP_164	=	0x8290
                    8294   1344 _UPHY14_CMN_ANAREG_TOP_165	=	0x8294
                    8298   1345 _UPHY14_CMN_ANAREG_TOP_166	=	0x8298
                    829C   1346 _UPHY14_CMN_ANAREG_TOP_167	=	0x829c
                    82A0   1347 _UPHY14_CMN_ANAREG_TOP_168	=	0x82a0
                    82A4   1348 _UPHY14_CMN_ANAREG_TOP_169	=	0x82a4
                    82A8   1349 _UPHY14_CMN_ANAREG_TOP_170	=	0x82a8
                    82AC   1350 _UPHY14_CMN_ANAREG_TOP_171	=	0x82ac
                    82B0   1351 _UPHY14_CMN_ANAREG_TOP_172	=	0x82b0
                    82B4   1352 _UPHY14_CMN_ANAREG_TOP_173	=	0x82b4
                    82B8   1353 _UPHY14_CMN_ANAREG_TOP_174	=	0x82b8
                    82BC   1354 _UPHY14_CMN_ANAREG_TOP_175	=	0x82bc
                    82C0   1355 _UPHY14_CMN_ANAREG_TOP_176	=	0x82c0
                    82C4   1356 _UPHY14_CMN_ANAREG_TOP_177	=	0x82c4
                    82C8   1357 _UPHY14_CMN_ANAREG_TOP_178	=	0x82c8
                    82CC   1358 _UPHY14_CMN_ANAREG_TOP_179	=	0x82cc
                    82D0   1359 _UPHY14_CMN_ANAREG_TOP_180	=	0x82d0
                    82D4   1360 _UPHY14_CMN_ANAREG_TOP_181	=	0x82d4
                    82D8   1361 _UPHY14_CMN_ANAREG_TOP_182	=	0x82d8
                    82DC   1362 _UPHY14_CMN_ANAREG_TOP_183	=	0x82dc
                    82E0   1363 _UPHY14_CMN_ANAREG_TOP_184	=	0x82e0
                    82E4   1364 _UPHY14_CMN_ANAREG_TOP_185	=	0x82e4
                    82E8   1365 _UPHY14_CMN_ANAREG_TOP_186	=	0x82e8
                    82EC   1366 _UPHY14_CMN_ANAREG_TOP_187	=	0x82ec
                    82F0   1367 _UPHY14_CMN_ANAREG_TOP_188	=	0x82f0
                    82F4   1368 _UPHY14_CMN_ANAREG_TOP_189	=	0x82f4
                    82F8   1369 _UPHY14_CMN_ANAREG_TOP_190	=	0x82f8
                    82FC   1370 _UPHY14_CMN_ANAREG_TOP_191	=	0x82fc
                    8300   1371 _UPHY14_CMN_ANAREG_TOP_192	=	0x8300
                    8304   1372 _UPHY14_CMN_ANAREG_TOP_193	=	0x8304
                    8308   1373 _UPHY14_CMN_ANAREG_TOP_194	=	0x8308
                    830C   1374 _UPHY14_CMN_ANAREG_TOP_195	=	0x830c
                    8310   1375 _UPHY14_CMN_ANAREG_TOP_196	=	0x8310
                    8314   1376 _UPHY14_CMN_ANAREG_TOP_197	=	0x8314
                    8318   1377 _UPHY14_CMN_ANAREG_TOP_198	=	0x8318
                    831C   1378 _UPHY14_CMN_ANAREG_TOP_199	=	0x831c
                    8320   1379 _UPHY14_CMN_ANAREG_TOP_200	=	0x8320
                    8324   1380 _UPHY14_CMN_ANAREG_TOP_201	=	0x8324
                    8328   1381 _UPHY14_CMN_ANAREG_TOP_202	=	0x8328
                    832C   1382 _UPHY14_CMN_ANAREG_TOP_203	=	0x832c
                    8330   1383 _UPHY14_CMN_ANAREG_TOP_204	=	0x8330
                    8334   1384 _UPHY14_CMN_ANAREG_TOP_205	=	0x8334
                    8338   1385 _UPHY14_CMN_ANAREG_TOP_206	=	0x8338
                    833C   1386 _UPHY14_CMN_ANAREG_TOP_207	=	0x833c
                    8340   1387 _UPHY14_CMN_ANAREG_TOP_208	=	0x8340
                    8344   1388 _UPHY14_CMN_ANAREG_TOP_209	=	0x8344
                    8348   1389 _UPHY14_CMN_ANAREG_TOP_210	=	0x8348
                    834C   1390 _UPHY14_CMN_ANAREG_TOP_211	=	0x834c
                    8350   1391 _UPHY14_CMN_ANAREG_TOP_212	=	0x8350
                    8354   1392 _UPHY14_CMN_ANAREG_TOP_213	=	0x8354
                    8358   1393 _UPHY14_CMN_ANAREG_TOP_214	=	0x8358
                    2000   1394 _PM_CTRL_TX_LANE_REG1_LANE	=	0x2000
                    2004   1395 _PM_CTRL_TX_LANE_REG2_LANE	=	0x2004
                    2008   1396 _INPUT_TX_PIN_REG0_LANE	=	0x2008
                    200C   1397 _INPUT_TX_PIN_REG1_LANE	=	0x200c
                    2010   1398 _INPUT_TX_PIN_REG2_LANE	=	0x2010
                    2014   1399 _INPUT_TX_PIN_REG3_LANE	=	0x2014
                    2018   1400 _PM_CTRL_INTERRUPT_REG1_LANE	=	0x2018
                    201C   1401 _PM_CTRL_INTERRUPT_REG2	=	0x201c
                    2020   1402 _CLKGEN_TX_LANE_REG1_LANE	=	0x2020
                    2024   1403 _TX_SPEED_CONVERT_LANE	=	0x2024
                    2028   1404 _SPD_CTRL_INTERRUPT_REG1_LANE	=	0x2028
                    202C   1405 _SPD_CTRL_INTERRUPT_REG2	=	0x202c
                    2030   1406 _SPD_CTRL_TX_LANE_REG1_LANE	=	0x2030
                    2034   1407 _TX_SYSTEM_LANE	=	0x2034
                    203C   1408 _INPUT_TX_PIN_REG4_LANE	=	0x203c
                    2040   1409 _TX_CALIBRATION_LANE	=	0x2040
                    2044   1410 _DIG_TX_RSVD_REG0	=	0x2044
                    2048   1411 _INPUT_TX_PIN_REG5_LANE	=	0x2048
                    204C   1412 __FIELDNAME__LANE	=	0x204c
                    2050   1413 _PM_CTRL_INTERRUPT_ISR_REG1_LANE	=	0x2050
                    2054   1414 _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE	=	0x2054
                    2058   1415 _ANALOG_TX_REALTIME_REG_1	=	0x2058
                    205C   1416 _MON_TOP	=	0x205c
                    2100   1417 _PM_CTRL_RX_LANE_REG1_LANE	=	0x2100
                    2104   1418 _RX_SYSTEM_LANE	=	0x2104
                    2108   1419 _INPUT_RX_PIN_REG0_LANE	=	0x2108
                    210C   1420 _INPUT_RX_PIN_REG1_LANE	=	0x210c
                    2110   1421 _INPUT_RX_PIN_REG2_LANE	=	0x2110
                    2114   1422 _SPD_CTRL_RX_LANE_REG1_LANE	=	0x2114
                    2118   1423 _DIG_RX_RSVD_REG0	=	0x2118
                    211C   1424 _CLKGEN_RX_LANE_REG1_LANE	=	0x211c
                    2120   1425 _FRAME_SYNC_DET_REG0	=	0x2120
                    2124   1426 _FRAME_SYNC_DET_REG1	=	0x2124
                    2128   1427 _FRAME_SYNC_DET_REG2	=	0x2128
                    212C   1428 _FRAME_SYNC_DET_REG3	=	0x212c
                    2130   1429 _FRAME_SYNC_DET_REG4	=	0x2130
                    2134   1430 _FRAME_SYNC_DET_REG5	=	0x2134
                    2138   1431 _FRAME_SYNC_DET_REG6	=	0x2138
                    213C   1432 _CDR_LOCK_REG	=	0x213c
                    2140   1433 _RX_LANE_INTERRUPT	=	0x2140
                    2144   1434 _RX_LANE_INTERRUPT_MASK	=	0x2144
                    2148   1435 _RX_DATA_PATH_REG	=	0x2148
                    214C   1436 _INPUT_RX_PIN_REG3_LANE	=	0x214c
                    2150   1437 _RX_CALIBRATION_REG	=	0x2150
                    2158   1438 _RX_LANE_INTERRUPT_REG1	=	0x2158
                    2160   1439 _DTL_REG0	=	0x2160
                    2164   1440 _DTL_REG1	=	0x2164
                    2168   1441 _DTL_REG2	=	0x2168
                    216C   1442 _DTL_REG3	=	0x216c
                    2170   1443 _SQ_REG0	=	0x2170
                    4000   1444 _LANE_CFG0	=	0x4000
                    4004   1445 _LANE_STATUS0	=	0x4004
                    4008   1446 _LANE_CFG_STATUS2_LANE	=	0x4008
                    400C   1447 _LANE_CFG2_LANE	=	0x400c
                    4010   1448 _LANE_CFG4	=	0x4010
                    4014   1449 _LANE_CFG_STATUS3_LANE	=	0x4014
                    4018   1450 _LANE_DP_PIE8_CFG0_LANE	=	0x4018
                    401C   1451 _LANE_USB_DP_CFG1_LANE	=	0x401c
                    4020   1452 _LANE_USB_DP_CFG2_LANE	=	0x4020
                    4024   1453 _LANE_EQ_CFG0_LANE	=	0x4024
                    4028   1454 _LANE_EQ_CFG1_LANE	=	0x4028
                    402C   1455 _LANE_PRESET_CFG0_LANE	=	0x402c
                    4030   1456 _LANE_PRESET_CFG2_LANE	=	0x4030
                    4034   1457 _LANE_PRESET_CFG4_LANE	=	0x4034
                    4038   1458 _LANE_PRESET_CFG6_LANE	=	0x4038
                    403C   1459 _LANE_PRESET_CFG8_LANE	=	0x403c
                    4040   1460 _LANE_PRESET_CFG10_LANE	=	0x4040
                    4044   1461 _LANE_PRESET_CFG12_LANE	=	0x4044
                    4048   1462 _LANE_PRESET_CFG14_LANE	=	0x4048
                    404C   1463 _LANE_PRESET_CFG16_LANE	=	0x404c
                    4050   1464 _LANE_COEFF_MAX0_LANE	=	0x4050
                    4054   1465 _LANE_REMOTE_SET_LANE	=	0x4054
                    4058   1466 _LANE_EQ_16G_CFG0_LANE	=	0x4058
                    405C   1467 _LANE_16G_PRESET_CFG0_LANE	=	0x405c
                    4060   1468 _LANE_16G_PRESET_CFG2_LANE	=	0x4060
                    4064   1469 _LANE_16G_PRESET_CFG4_LANE	=	0x4064
                    4068   1470 _LANE_16G_PRESET_CFG6_LANE	=	0x4068
                    406C   1471 _LANE_16G_PRESET_CFG8_LANE	=	0x406c
                    4070   1472 _LANE_16G_PRESET_CFG10_LANE	=	0x4070
                    4074   1473 _LANE_16G_PRESET_CFG12_LANE	=	0x4074
                    4078   1474 _LANE_16G_PRESET_CFG14_LANE	=	0x4078
                    407C   1475 _LANE_16G_PRESET_CFG16_LANE	=	0x407c
                    4080   1476 _LANE_EQ_32G_CFG0_LANE	=	0x4080
                    4084   1477 _LANE_32G_PRESET_CFG0_LANE	=	0x4084
                    4088   1478 _LANE_32G_PRESET_CFG2_LANE	=	0x4088
                    408C   1479 _LANE_32G_PRESET_CFG4_LANE	=	0x408c
                    4090   1480 _LANE_32G_PRESET_CFG6_LANE	=	0x4090
                    4094   1481 _LANE_32G_PRESET_CFG8_LANE	=	0x4094
                    4098   1482 _LANE_32G_PRESET_CFG10_LANE	=	0x4098
                    409C   1483 _LANE_32G_PRESET_CFG12_LANE	=	0x409c
                    40A0   1484 _LANE_32G_PRESET_CFG14_LANE	=	0x40a0
                    40A4   1485 _LANE_32G_PRESET_CFG16_LANE	=	0x40a4
                    2200   1486 _MCU_CONTROL_LANE	=	0x2200
                    2204   1487 _MCU_GPIO	=	0x2204
                    2208   1488 _CACHE_DEBUG0	=	0x2208
                    220C   1489 _CACHE_DEBUG1	=	0x220c
                    2210   1490 _LANE_SYSTEM0	=	0x2210
                    2230   1491 _MCU_STATUS0_LANE	=	0x2230
                    2234   1492 _MCU_STATUS1_LANE	=	0x2234
                    2238   1493 _MCU_STATUS2_LANE	=	0x2238
                    223C   1494 _MCU_STATUS3_LANE	=	0x223c
                    2240   1495 _MCU_INT0_CONTROL	=	0x2240
                    2244   1496 _MCU_INT1_CONTROL	=	0x2244
                    2248   1497 _MCU_INT2_CONTROL	=	0x2248
                    224C   1498 _MCU_INT3_CONTROL	=	0x224c
                    2250   1499 _MCU_INT4_CONTROL	=	0x2250
                    2254   1500 _MCU_INT5_CONTROL	=	0x2254
                    2258   1501 _MCU_INT6_CONTROL	=	0x2258
                    225C   1502 _MCU_INT7_CONTROL	=	0x225c
                    2260   1503 _MCU_INT8_CONTROL	=	0x2260
                    2264   1504 _MCU_INT9_CONTROL	=	0x2264
                    2268   1505 _MCU_INT10_CONTROL	=	0x2268
                    226C   1506 _MCU_INT11_CONTROL	=	0x226c
                    2270   1507 _MCU_INT12_CONTROL	=	0x2270
                    2274   1508 _MCU_TIMER_CONTROL	=	0x2274
                    2278   1509 _MCU_TIMER0_CONTROL	=	0x2278
                    227C   1510 _MCU_TIMER1_CONTROL	=	0x227c
                    2280   1511 _MCU_TIMER2_CONTROL	=	0x2280
                    2284   1512 _MCU_TIMER3_CONTROL	=	0x2284
                    2288   1513 _MCU_IRQ_LANE	=	0x2288
                    228C   1514 _MCU_IRQ_MASK_LANE	=	0x228c
                    2290   1515 _MCU_MEM_REG1_LANE	=	0x2290
                    2294   1516 _MCU_MEM_REG2_LANE	=	0x2294
                    2298   1517 _MCU_TIMER_CTRL_1_LANE	=	0x2298
                    229C   1518 _MCU_TIMER_CTRL_2_LANE	=	0x229c
                    22A0   1519 _MCU_TIMER_CTRL_3_LANE	=	0x22a0
                    22A4   1520 _MCU_TIMER_CTRL_4_LANE	=	0x22a4
                    22A8   1521 _MCU_TIMER_CTRL_5_LANE	=	0x22a8
                    22AC   1522 _MCU_TIMER_CTRL_6_LANE	=	0x22ac
                    22B0   1523 _MCU_TIMER_CTRL_7_LANE	=	0x22b0
                    22B4   1524 _MCU_DEBUG0_LANE	=	0x22b4
                    22B8   1525 _MCU_DEBUG1_LANE	=	0x22b8
                    22BC   1526 _MCU_DEBUG2_LANE	=	0x22bc
                    22C0   1527 _MCU_DEBUG3_LANE	=	0x22c0
                    22C4   1528 _MCU_DEBUG_LANE	=	0x22c4
                    22C8   1529 _EXT_INT_CONTROL	=	0x22c8
                    22CC   1530 _ANA_IF_TRX_REG0	=	0x22cc
                    22D0   1531 _ANA_IF_DFEE_REG0	=	0x22d0
                    22D4   1532 _ANA_IF_DFEO_REG0	=	0x22d4
                    22D8   1533 _MCU_IRQ_ISR_LANE	=	0x22d8
                    22DC   1534 _MCU_WDT_LANE	=	0x22dc
                    22E0   1535 _MCU_INT_CONTROL_13	=	0x22e0
                    22E4   1536 _MCU_COMMAND0	=	0x22e4
                    22F4   1537 _MEM_ECC_ERR_ADDRESS0	=	0x22f4
                    22F8   1538 _XDATA_MEM_CHECKSUM_LANE0	=	0x22f8
                    22FC   1539 _XDATA_MEM_CHECKSUM_LANE1	=	0x22fc
                    2300   1540 _PT_CONTROL0	=	0x2300
                    2304   1541 _PT_CONTROL1	=	0x2304
                    2308   1542 _PT_USER_PATTERN0	=	0x2308
                    230C   1543 _PT_USER_PATTERN1	=	0x230c
                    2310   1544 _PT_USER_PATTERN2	=	0x2310
                    2314   1545 _PT_COUNTER0	=	0x2314
                    2318   1546 _PT_COUNTER1	=	0x2318
                    231C   1547 _PT_COUNTER2	=	0x231c
                    2400   1548 _DFE_CTRL_REG0	=	0x2400
                    2404   1549 _DFE_CTRL_REG1	=	0x2404
                    2408   1550 _DFE_CTRL_REG2	=	0x2408
                    240C   1551 _DFE_CTRL_REG3	=	0x240c
                    2410   1552 _RX_EQ_CLK_CTRL	=	0x2410
                    2414   1553 _DFE_CTRL_REG4	=	0x2414
                    2418   1554 _DFE_ANA_REG0	=	0x2418
                    241C   1555 _DFE_ANA_REG1	=	0x241c
                    2420   1556 _DFE_STEP_REG0	=	0x2420
                    2424   1557 _DFE_STEP_REG1	=	0x2424
                    2430   1558 _DFE_FEN_EVEN_REG	=	0x2430
                    2434   1559 _DFE_FEN_ODD_REG	=	0x2434
                    2438   1560 _DFE_DC_EVEN_REG8	=	0x2438
                    243C   1561 _DFE_DC_ODD_REG8	=	0x243c
                    2440   1562 _DFE_FEXT_EVEN_REG0	=	0x2440
                    2444   1563 _DFE_FEXT_EVEN_REG1	=	0x2444
                    2448   1564 _DFE_FEXT_EVEN_REG2	=	0x2448
                    244C   1565 _DFE_FEXT_EVEN_REG3	=	0x244c
                    2450   1566 _DFE_FEXT_EVEN_REG4	=	0x2450
                    2454   1567 _DFE_FEXT_EVEN_REG5	=	0x2454
                    2458   1568 _DFE_FEXT_EVEN_REG6	=	0x2458
                    245C   1569 _DFE_FEXT_EVEN_REG7	=	0x245c
                    2460   1570 _DFE_FEXT_ODD_REG0	=	0x2460
                    2464   1571 _DFE_FEXT_ODD_REG1	=	0x2464
                    2468   1572 _DFE_FEXT_ODD_REG2	=	0x2468
                    246C   1573 _DFE_FEXT_ODD_REG3	=	0x246c
                    2470   1574 _DFE_FEXT_ODD_REG4	=	0x2470
                    2474   1575 _DFE_FEXT_ODD_REG5	=	0x2474
                    2478   1576 _DFE_FEXT_ODD_REG6	=	0x2478
                    247C   1577 _DFE_FEXT_ODD_REG7	=	0x247c
                    2480   1578 _DFE_READ_EVEN_SM_REG0	=	0x2480
                    2484   1579 _DFE_READ_EVEN_SM_REG1	=	0x2484
                    2488   1580 _DFE_READ_EVEN_SM_REG2	=	0x2488
                    248C   1581 _DFE_READ_EVEN_SM_REG3	=	0x248c
                    2490   1582 _DFE_READ_EVEN_SM_REG4	=	0x2490
                    2494   1583 _DFE_READ_EVEN_SM_REG5	=	0x2494
                    2498   1584 _DFE_READ_EVEN_SM_REG6	=	0x2498
                    249C   1585 _DFE_READ_EVEN_SM_REG7	=	0x249c
                    24A0   1586 _DFE_READ_ODD_SM_REG0	=	0x24a0
                    24A4   1587 _DFE_READ_ODD_SM_REG1	=	0x24a4
                    24A8   1588 _DFE_READ_ODD_SM_REG2	=	0x24a8
                    24AC   1589 _DFE_READ_ODD_SM_REG3	=	0x24ac
                    24B0   1590 _DFE_READ_ODD_SM_REG4	=	0x24b0
                    24B4   1591 _DFE_READ_ODD_SM_REG5	=	0x24b4
                    24B8   1592 _DFE_READ_ODD_SM_REG6	=	0x24b8
                    24BC   1593 _DFE_READ_ODD_SM_REG7	=	0x24bc
                    24C0   1594 _DFE_READ_EVEN_SM_REG8	=	0x24c0
                    24C4   1595 _DFE_READ_ODD_SM_REG8	=	0x24c4
                    24D0   1596 _DFE_READ_EVEN_2C_REG0	=	0x24d0
                    24D4   1597 _DFE_READ_EVEN_2C_REG1	=	0x24d4
                    24D8   1598 _DFE_READ_EVEN_2C_REG2	=	0x24d8
                    24DC   1599 _DFE_READ_EVEN_2C_REG3	=	0x24dc
                    24E0   1600 _DFE_READ_EVEN_2C_REG4	=	0x24e0
                    24E4   1601 _DFE_READ_EVEN_2C_REG5	=	0x24e4
                    24E8   1602 _DFE_READ_EVEN_2C_REG6	=	0x24e8
                    24EC   1603 _DFE_READ_EVEN_2C_REG7	=	0x24ec
                    24F0   1604 _DFE_READ_ODD_2C_REG0	=	0x24f0
                    24F4   1605 _DFE_READ_ODD_2C_REG1	=	0x24f4
                    24F8   1606 _DFE_READ_ODD_2C_REG2	=	0x24f8
                    24FC   1607 _DFE_READ_ODD_2C_REG3	=	0x24fc
                    2500   1608 _DFE_READ_ODD_2C_REG4	=	0x2500
                    2504   1609 _DFE_READ_ODD_2C_REG5	=	0x2504
                    2508   1610 _DFE_READ_ODD_2C_REG6	=	0x2508
                    250C   1611 _DFE_READ_ODD_2C_REG7	=	0x250c
                    2510   1612 _DFE_READ_EVEN_2C_REG8	=	0x2510
                    2514   1613 _DFE_READ_ODD_2C_REG8	=	0x2514
                    2518   1614 _CAL_OFST_REG0	=	0x2518
                    251C   1615 _CAL_OFST_REG1	=	0x251c
                    2520   1616 _CAL_OFST_REG2	=	0x2520
                    2530   1617 _DFE_DCE_REG0	=	0x2530
                    2540   1618 _DFE_STATIC_LANE_REG0	=	0x2540
                    2544   1619 _DFE_STATIC_LANE_REG1	=	0x2544
                    2548   1620 _DFE_STATIC_LANE_REG3	=	0x2548
                    254C   1621 _DFE_STATIC_LANE_REG4	=	0x254c
                    2550   1622 _DFE_STATIC_LANE_REG5	=	0x2550
                    2554   1623 _DFE_STATIC_LANE_REG6	=	0x2554
                    2560   1624 _EOM_VLD_REG0	=	0x2560
                    2564   1625 _EOM_VLD_REG1	=	0x2564
                    2568   1626 _EOM_VLD_REG2	=	0x2568
                    256C   1627 _EOM_VLD_REG3	=	0x256c
                    2570   1628 _EOM_ERR_REG0	=	0x2570
                    2574   1629 _EOM_ERR_REG1	=	0x2574
                    2578   1630 _EOM_ERR_REG2	=	0x2578
                    257C   1631 _EOM_ERR_REG3	=	0x257c
                    2580   1632 _EOM_REG0	=	0x2580
                    25F0   1633 _EOM_VLD_REG4	=	0x25f0
                    25F4   1634 _LANE_MARGIN_REG0	=	0x25f4
                    6000   1635 _CAL_CTRL1_LANE	=	0x6000
                    6004   1636 _CAL_CTRL2_LANE	=	0x6004
                    6008   1637 _CAL_CTRL3_LANE	=	0x6008
                    600C   1638 _CAL_CTRL4_LANE	=	0x600c
                    6010   1639 _CAL_SAVE_DATA1_LANE	=	0x6010
                    6014   1640 _CAL_SAVE_DATA2_LANE	=	0x6014
                    6018   1641 _CAL_SAVE_DATA3_LANE	=	0x6018
                    601C   1642 _PHY_REMOTE_CTRL_COMMAND_LANE	=	0x601c
                    6020   1643 _PHY_REMOTE_CTRL_VALUE_LANE	=	0x6020
                    6024   1644 _PHY_LOCAL_VALUE_LANE	=	0x6024
                    6028   1645 _TRX_TRAIN_IF_TIMERS1_LANE	=	0x6028
                    602C   1646 _TRX_TRAIN_IF_TIMERS2_LANE	=	0x602c
                    6030   1647 _TRX_TRAIN_IF_TIMERS_ENABLE_LANE	=	0x6030
                    6034   1648 _DFE_CONTROL_0	=	0x6034
                    6038   1649 _DFE_CONTROL_1	=	0x6038
                    6040   1650 _DFE_CONTROL_2	=	0x6040
                    6044   1651 _DFE_CONTROL_3	=	0x6044
                    6048   1652 _DFE_CONTROL_4	=	0x6048
                    604C   1653 _DFE_CONTROL_5	=	0x604c
                    6050   1654 _TRAIN_CONTROL_0	=	0x6050
                    6054   1655 _TRAIN_CONTROL_1	=	0x6054
                    6058   1656 _TRAIN_CONTROL_2	=	0x6058
                    605C   1657 _RPTA_CONFIG_0	=	0x605c
                    6060   1658 _RPTA_CONFIG_1	=	0x6060
                    6064   1659 _DLL_CAL	=	0x6064
                    6068   1660 _TRAIN_PARA_0	=	0x6068
                    606C   1661 _TRAIN_PARA_1	=	0x606c
                    6070   1662 _TRAIN_PARA_2	=	0x6070
                    6074   1663 _TRAIN_PARA_3	=	0x6074
                    6078   1664 _DFE_CONTROL_6	=	0x6078
                    607C   1665 _DFE_TEST_0	=	0x607c
                    6080   1666 _DFE_TEST_1	=	0x6080
                    6084   1667 _DFE_TEST_4	=	0x6084
                    6088   1668 _DFE_TEST_5	=	0x6088
                    608C   1669 _DFE_CONTROL_7	=	0x608c
                    6090   1670 _DFE_CONTROL_8	=	0x6090
                    6094   1671 _DFE_CONTROL_9	=	0x6094
                    6098   1672 _DFE_CONTROL_10	=	0x6098
                    609C   1673 _DFE_CONTROL_11	=	0x609c
                    60A0   1674 _CDS_CTRL_REG0	=	0x60a0
                    60A4   1675 _CDS_CTRL_REG1	=	0x60a4
                    60A8   1676 _ESM_POP_P_CNT_LOW_LANE	=	0x60a8
                    60AC   1677 _ESM_ERR_P_CNT_LOW_LANE	=	0x60ac
                    60B0   1678 _ESM_ERR_POP_CNT_HIGH_LANE	=	0x60b0
                    60B4   1679 _TRAIN_CONTROL_3	=	0x60b4
                    60B8   1680 _TRAIN_CONTROL_4	=	0x60b8
                    60BC   1681 _TRAIN_CONTROL_5	=	0x60bc
                    60C0   1682 _TRAIN_CONTROL_6	=	0x60c0
                    60C4   1683 _TRAIN_CONTROL_7	=	0x60c4
                    60C8   1684 _TRAIN_CONTROL_8	=	0x60c8
                    60CC   1685 _TRAIN_CONTROL_9	=	0x60cc
                    60D0   1686 _TRAIN_CONTROL_10	=	0x60d0
                    60D4   1687 _TRAIN_CONTROL_11	=	0x60d4
                    60D8   1688 _TRAIN_CONTROL_12	=	0x60d8
                    60DC   1689 _ESM_POP_N_CNT_LOW_LANE	=	0x60dc
                    60E0   1690 _ESM_ERR_N_CNT_LOW_LANE	=	0x60e0
                    60E4   1691 _TRAIN_CONTROL_13	=	0x60e4
                    60E8   1692 _TRAIN_CONTROL_14	=	0x60e8
                    60EC   1693 _TRAIN_CONTROL_15	=	0x60ec
                    60F0   1694 _TRAIN_CONTROL_16	=	0x60f0
                    60F4   1695 _TRAIN_CONTROL_17	=	0x60f4
                    60F8   1696 _END_XDAT_LANE	=	0x60f8
                    A000   1697 _TX_CMN_REG	=	0xa000
                    A008   1698 _DTX_REG0	=	0xa008
                    A00C   1699 _DTX_REG1	=	0xa00c
                    A010   1700 _DTX_REG2	=	0xa010
                    A014   1701 _DTX_REG3	=	0xa014
                    A018   1702 _DTX_REG4	=	0xa018
                    A01C   1703 _DTX_PHY_ALIGN_REG0	=	0xa01c
                    A024   1704 _DTX_PHY_ALIGN_REG1	=	0xa024
                    A028   1705 _DTX_PHY_ALIGN_REG2	=	0xa028
                    A02C   1706 _SRIS_REG0	=	0xa02c
                    A030   1707 _SRIS_REG1	=	0xa030
                    A100   1708 _RX_CMN_0	=	0xa100
                    A110   1709 _DFE_STATIC_REG0	=	0xa110
                    A114   1710 _DFE_STATIC_REG1	=	0xa114
                    A118   1711 _DFE_STATIC_REG3	=	0xa118
                    A11C   1712 _DFE_STATIC_REG4	=	0xa11c
                    A120   1713 _DFE_STATIC_REG5	=	0xa120
                    A124   1714 _DFE_STATIC_REG6	=	0xa124
                    4200   1715 _GLOB_RST_CLK_CTRL	=	0x4200
                    4204   1716 _GLOB_CLK_SRC_LO	=	0x4204
                    4208   1717 _GLOB_CLK_SRC_HI	=	0x4208
                    420C   1718 _GLOB_MISC_CTRL	=	0x420c
                    4210   1719 _GLOB_DP_SAL_CFG	=	0x4210
                    4214   1720 _GLOB_DP_SAL_CFG1	=	0x4214
                    4218   1721 _GLOB_DP_SAL_CFG3	=	0x4218
                    421C   1722 _GLOB_DP_SAL_CFG5	=	0x421c
                    4220   1723 _GLOB_PM_CFG0	=	0x4220
                    4224   1724 _GLOB_COUNTER_CTRL	=	0x4224
                    4228   1725 _GLOB_COUNTER_HI	=	0x4228
                    422C   1726 _GLOB_PM_DP_CTRL	=	0x422c
                    4230   1727 _GLOB_DP_BAL_CFG0	=	0x4230
                    4234   1728 _GLOB_DP_BAL_CFG2	=	0x4234
                    4238   1729 _GLOB_DP_BAL_CFG4	=	0x4238
                    423C   1730 _GLOB_BIST_CTRL	=	0x423c
                    4240   1731 _GLOB_BIST_LANE_TYPE	=	0x4240
                    4244   1732 _GLOB_BIST_START	=	0x4244
                    4248   1733 _GLOB_BIST_MASK	=	0x4248
                    424C   1734 _GLOB_BIST_RESULT	=	0x424c
                    4250   1735 _GLOB_BIST_SEQR_CFG	=	0x4250
                    4254   1736 _GLOB_BIST_DATA_HI	=	0x4254
                    4258   1737 _GLOB_PIPE_REVISION	=	0x4258
                    425C   1738 _GLOB_L1_SUBSTATES_CFG	=	0x425c
                    A200   1739 _MCU_CONTROL_0	=	0xa200
                    A204   1740 _MCU_CONTROL_1	=	0xa204
                    A208   1741 _MCU_CONTROL_2	=	0xa208
                    A20C   1742 _MCU_CONTROL_3	=	0xa20c
                    A210   1743 _MCU_CONTROL_4	=	0xa210
                    A214   1744 _MCU_DEBUG0	=	0xa214
                    A218   1745 _MCU_DEBUG1	=	0xa218
                    A21C   1746 _MEMORY_CONTROL_0	=	0xa21c
                    A220   1747 _MEMORY_CONTROL_1	=	0xa220
                    A224   1748 _MEMORY_CONTROL_2	=	0xa224
                    A228   1749 _MEMORY_CONTROL_3	=	0xa228
                    A22C   1750 _MEMORY_CONTROL_4	=	0xa22c
                    A234   1751 _MCU_INFO_0	=	0xa234
                    A238   1752 _MCU_INFO_1	=	0xa238
                    A23C   1753 _MCU_INFO_2	=	0xa23c
                    A240   1754 _MCU_INFO_3	=	0xa240
                    A244   1755 _MEM_CMN_ECC_ERR_ADDRESS0	=	0xa244
                    A2E0   1756 _ANA_IF_CMN_REG1	=	0xa2e0
                    A2E4   1757 _MEM_IRQ	=	0xa2e4
                    A2E8   1758 _MEM_IRQ_MASK	=	0xa2e8
                    A2EC   1759 _ANA_IF_CMN_REG0	=	0xa2ec
                    A2F0   1760 _APB_CONTROL_REG	=	0xa2f0
                    A2F4   1761 _MEM_IRQ_CLEAR	=	0xa2f4
                    A2F8   1762 _MCU_SYNC1	=	0xa2f8
                    A2FC   1763 _MCU_SYNC2	=	0xa2fc
                    A300   1764 _TEST0	=	0xa300
                    A304   1765 _TEST1	=	0xa304
                    A308   1766 _TEST2	=	0xa308
                    A30C   1767 _TEST3	=	0xa30c
                    A310   1768 _TEST4	=	0xa310
                    A314   1769 _SYSTEM	=	0xa314
                    A318   1770 _PM_CMN_REG1	=	0xa318
                    A31C   1771 _INPUT_CMN_PIN_REG0	=	0xa31c
                    A320   1772 _INPUT_CMN_PIN_REG1	=	0xa320
                    A324   1773 _INPUT_CMN_PIN_REG2	=	0xa324
                    A328   1774 _ANA_TSEN_CONTROL	=	0xa328
                    A32C   1775 _PLLCAL_REG0	=	0xa32c
                    A330   1776 _PLLCAL_REG1	=	0xa330
                    A334   1777 _CLKGEN_CMN_REG1	=	0xa334
                    A338   1778 _SPD_CMN_REG1	=	0xa338
                    A33C   1779 _OUTPUT_CMN_PIN_REG0	=	0xa33c
                    A340   1780 _CMN_CALIBRATION	=	0xa340
                    A344   1781 __FIELDNAME_	=	0xa344
                    A348   1782 _INPUT_CMN_PIN_REG3	=	0xa348
                    A34C   1783 _PM_CMN_REG2	=	0xa34c
                    A354   1784 _TEST5	=	0xa354
                    A358   1785 _XDATA_MEM_CHECKSUM_CMN_0	=	0xa358
                    A35C   1786 _XDATA_MEM_CHECKSUM_CMN_1	=	0xa35c
                    A360   1787 _XDATA_MEM_CHECKSUM_CMN_2	=	0xa360
                    A364   1788 _MCU_SDT_CMN	=	0xa364
                    A368   1789 _CMN_CACHE_DEBUG0	=	0xa368
                    A36C   1790 _MCU_INT_ADDR	=	0xa36c
                    A370   1791 _CMN_ISR_2	=	0xa370
                    A374   1792 _CMN_ISR_MASK_2	=	0xa374
                    A378   1793 _CMN_ISR_CLEAR_2	=	0xa378
                    A37C   1794 _CMN_MCU_GPIO	=	0xa37c
                    A380   1795 _CMN_CACHE_DEBUG1	=	0xa380
                    A384   1796 _CMN_MCU_TIMER_CONTROL	=	0xa384
                    A388   1797 _CMN_MCU_TIMER_CTRL_2_LANE	=	0xa388
                    A38C   1798 _CMN_MCU_TIMER_CTRL_3_LANE	=	0xa38c
                    A390   1799 _CMN_MCU_TIMER_CTRL_4_LANE	=	0xa390
                    A394   1800 _CMN_MCU_TIMER_CTRL_5_LANE	=	0xa394
                    A398   1801 _CMN_MCU_TIMER0_CONTROL	=	0xa398
                    A39C   1802 _CMN_MCU_TIMER1_CONTROL	=	0xa39c
                    A3A0   1803 _CMN_MCU_TIMER2_CONTROL	=	0xa3a0
                    A3A4   1804 _CMN_MCU_TIMER3_CONTROL	=	0xa3a4
                    A3A8   1805 _CMN_ISR_1	=	0xa3a8
                    A3AC   1806 _CMN_ISR_MASK_1	=	0xa3ac
                    A3B0   1807 _SET_LANE_ISR	=	0xa3b0
                    A3F4   1808 _CMN_MCU_REG	=	0xa3f4
                    A3F8   1809 _CID_REG0	=	0xa3f8
                    A3FC   1810 _CID_REG1	=	0xa3fc
                    E600   1811 _FW_REV	=	0xe600
                    E604   1812 _CONTROL_CONFIG0	=	0xe604
                    E608   1813 _CONTROL_CONFIG1	=	0xe608
                    E60C   1814 _CONTROL_CONFIG2	=	0xe60c
                    E610   1815 _CONTROL_CONFIG3	=	0xe610
                    E614   1816 _CONTROL_CONFIG4	=	0xe614
                    E618   1817 _CONTROL_CONFIG5	=	0xe618
                    E61C   1818 _CONTROL_CONFIG6	=	0xe61c
                    E620   1819 _CONTROL_CONFIG7	=	0xe620
                    E624   1820 _CAL_DATA0	=	0xe624
                    E628   1821 _TRAIN_IF_CONFIG	=	0xe628
                    E62C   1822 _CONTROL_CONFIG8	=	0xe62c
                    E630   1823 _CONTROL_CONFIG9	=	0xe630
                    E634   1824 _CON_CAL_STEP_SIZE1	=	0xe634
                    E638   1825 _CON_CAL_STEP_SIZE2	=	0xe638
                    E63C   1826 _CON_CAL_STEP_SIZE3	=	0xe63c
                    E640   1827 _CON_CAL_STEP_SIZE4	=	0xe640
                    E644   1828 _CON_CAL_STEP_SIZE5	=	0xe644
                    E648   1829 _CAL_TIME_OUT_AND_DIS	=	0xe648
                    E64C   1830 _CAL_STATUS_READ	=	0xe64c
                    E650   1831 _MCU_CONFIG	=	0xe650
                    E654   1832 _CAL_DATA1	=	0xe654
                    E658   1833 _LOOP_CNTS	=	0xe658
                    E65C   1834 _MCU_CONFIG1	=	0xe65c
                    E660   1835 _TIMER_SEL1	=	0xe660
                    E664   1836 _TIMER_SEL2	=	0xe664
                    E668   1837 _TIMER_SEL3	=	0xe668
                    E66C   1838 _G_SELLV_TXCLK	=	0xe66c
                    E670   1839 _G_SELLV_TXDATA	=	0xe670
                    E674   1840 _G_SELLV_TXPRE	=	0xe674
                    E678   1841 _G_SELLV_RXEOMCLK	=	0xe678
                    E67C   1842 _G_SELLV_RXDATACLK	=	0xe67c
                    E680   1843 _G_SELLV_RXSAMPLER	=	0xe680
                    E684   1844 _SAS_PRESET0_TB	=	0xe684
                    E688   1845 _SAS_PRESET1_TB	=	0xe688
                    E68C   1846 _SAS_PRESET2_TB	=	0xe68c
                    E690   1847 _ETH_PRESET0_TB	=	0xe690
                    E694   1848 _ETH_PRESET1_TB	=	0xe694
                    E698   1849 _TX_SAVE_0	=	0xe698
                    E69C   1850 _TX_SAVE_1	=	0xe69c
                    E6A0   1851 _TX_SAVE_2	=	0xe6a0
                    E6A4   1852 _TX_SAVE_3	=	0xe6a4
                    E6A8   1853 _TX_SAVE_4	=	0xe6a8
                    E6AC   1854 _CDS_EYE_CLK_THR	=	0xe6ac
                    E6B0   1855 _SYNC_INFO	=	0xe6b0
                    E6B4   1856 _MCU_INFO_4	=	0xe6b4
                    E6B8   1857 _MCU_INFO_5	=	0xe6b8
                    E6BC   1858 _MCU_INFO_12	=	0xe6bc
                    E6C0   1859 _MCU_INFO_13	=	0xe6c0
                    E6C4   1860 _END_XDAT_CMN	=	0xe6c4
                    2600   1861 _DME_ENC_REG0	=	0x2600
                    2604   1862 _DME_ENC_REG1	=	0x2604
                    2608   1863 _DME_ENC_REG2	=	0x2608
                    260C   1864 _DME_DEC_REG0	=	0x260c
                    2610   1865 _DME_DEC_REG1	=	0x2610
                    2614   1866 _TX_TRAIN_IF_REG0	=	0x2614
                    2618   1867 _TX_TRAIN_IF_REG1	=	0x2618
                    261C   1868 _TX_TRAIN_IF_REG2	=	0x261c
                    2620   1869 _TX_TRAIN_IF_REG3	=	0x2620
                    2624   1870 _TX_TRAIN_PATTTERN_REG0	=	0x2624
                    2628   1871 _TX_TRAIN_DRIVER_REG0	=	0x2628
                    262C   1872 _TX_TRAIN_DRIVER_REG1	=	0x262c
                    2630   1873 _TX_TRAIN_DRIVER_REG2	=	0x2630
                    2634   1874 _TX_TRAIN_DEFAULT_REG0	=	0x2634
                    2638   1875 _TX_TRAIN_DEFAULT_REG1	=	0x2638
                    263C   1876 _TX_TRAIN_DEFAULT_REG2	=	0x263c
                    2640   1877 _TX_TRAIN_DEFAULT_REG3	=	0x2640
                    2644   1878 _TX_TRAIN_DEFAULT_REG4	=	0x2644
                    2648   1879 _TX_TRAIN_DEFAULT_REG5	=	0x2648
                    264C   1880 _TX_EMPH_CTRL_REG0	=	0x264c
                    2650   1881 _LINK_TRAIN_MODE0	=	0x2650
                    2654   1882 _TX_DRV_RD_OUT_REG0	=	0x2654
                    2658   1883 _TX_AMP_CTRL_REG0	=	0x2658
                    265C   1884 _TRX_TRAIN_IF_INTERRUPT_LANE	=	0x265c
                    2660   1885 _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE	=	0x2660
                    2664   1886 _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE	=	0x2664
                    2668   1887 _TX_TRAIN_IF_REG4	=	0x2668
                    266C   1888 _TX_TRAIN_IF_REG5	=	0x266c
                    2670   1889 _TX_TRAIN_IF_REG6	=	0x2670
                    2674   1890 _TX_TRAIN_IF_REG7	=	0x2674
                    2678   1891 _TX_TRAIN_CTRL_LANE	=	0x2678
                    267C   1892 _TX_TRAIN_IF_REG8	=	0x267c
                    6100   1893 _DFE_READ_EVEN_REG0	=	0x6100
                    6104   1894 _DFE_READ_EVEN_REG1	=	0x6104
                    6108   1895 _DFE_READ_EVEN_REG2	=	0x6108
                    610C   1896 _DFE_READ_EVEN_REG3	=	0x610c
                    6110   1897 _DFE_READ_EVEN_REG4	=	0x6110
                    6114   1898 _DFE_READ_EVEN_REG5	=	0x6114
                    6118   1899 _DFE_READ_EVEN_REG6	=	0x6118
                    611C   1900 _DFE_READ_EVEN_REG7	=	0x611c
                    6120   1901 _DFE_READ_ODD_REG0	=	0x6120
                    6124   1902 _DFE_READ_ODD_REG1	=	0x6124
                    6128   1903 _DFE_READ_ODD_REG2	=	0x6128
                    612C   1904 _DFE_READ_ODD_REG3	=	0x612c
                    6130   1905 _DFE_READ_ODD_REG4	=	0x6130
                    6134   1906 _DFE_READ_ODD_REG5	=	0x6134
                    6138   1907 _DFE_READ_ODD_REG6	=	0x6138
                    613C   1908 _DFE_READ_ODD_REG7	=	0x613c
                    6140   1909 _DFE_READ_EVEN_REG8	=	0x6140
                    6144   1910 _DFE_READ_ODD_REG8	=	0x6144
                    6148   1911 _DFE_READ_F0A_EVEN	=	0x6148
                    614C   1912 _DFE_READ_F0A_ODD	=	0x614c
                    6150   1913 _DFE_READ_F0B_EVEN	=	0x6150
                    6154   1914 _DFE_READ_F0B_ODD	=	0x6154
                    6158   1915 _DFE_READ_F0D_EVEN	=	0x6158
                    615C   1916 _DFE_READ_F0D_ODD	=	0x615c
                    6160   1917 _DFE_READ_F0D_LEFT_EVEN	=	0x6160
                    6164   1918 _DFE_READ_F0D_LEFT_ODD	=	0x6164
                    6168   1919 _DFE_READ_F0D_RIGHT_EVEN	=	0x6168
                    616C   1920 _DFE_READ_F0D_RIGHT_ODD	=	0x616c
                    6170   1921 _CDS_READ_MISC0	=	0x6170
                    6174   1922 _CDS_READ_MISC1	=	0x6174
                    6214   1923 _TXTRAIN_IF_REG0	=	0x6214
                    E000   1924 _lc_speedtable	=	0xe000
                    E1C0   1925 _ring_speedtable	=	0xe1c0
                    E5C0   1926 _phy_mode_cmn_table	=	0xe5c0
                    6300   1927 _max_gen	=	0x6300
                    6301   1928 _min_gen	=	0x6301
                    6304   1929 _speedtable	=	0x6304
                    65D4   1930 _phy_mode_lane_table	=	0x65d4
                    60B4   1931 _rc_save	=	0x60b4
                    60D0   1932 _txffe_save	=	0x60d0
                    60E4   1933 _phase_save	=	0x60e4
                    6030   1934 _train_gn1_index	=	0x6030
                    6031   1935 _train_g1_index	=	0x6031
                    6032   1936 _train_g0_index	=	0x6032
                    E6B0   1937 _local_tx_preset_tb	=	0xe6b0
                    E5C1   1938 _cmx_cal_lcvco_dac	=	0xe5c1
                    E5C1   1939 _cmx_cal_lcvco_dac_lsb	=	0xe5c1
                    E5C4   1940 _cmx_cal_lcvco_dac_msb	=	0xe5c4
                    E5CA   1941 _cmx_cal_lccap_msb	=	0xe5ca
                    E5C8   1942 _cmx_cal_lccap_lsb	=	0xe5c8
                    E5CC   1943 _cmx_cal_plldcc	=	0xe5cc
                    E5D0   1944 _cmx_cal_pll_speed_ring	=	0xe5d0
                    E5D4   1945 _cmx_cal_pll_sllp_dac_coarse_ring	=	0xe5d4
                    E5D8   1946 _cmx_cal_sllp_dac_fine_ring	=	0xe5d8
                    65D4   1947 _lnx_cal_txdcc_pdiv	=	0x65d4
                    65D8   1948 _lnx_cal_txdcc_pdiv_hg	=	0x65d8
                    65DA   1949 _lnx_cal_txdcc	=	0x65da
                    65DE   1950 _lnx_cal_txdcc_hg	=	0x65de
                    65E0   1951 _lnx_cal_rxdcc_dll	=	0x65e0
                    65E4   1952 _lnx_cal_rxdcc_dll_hg	=	0x65e4
                    65E6   1953 _lnx_cal_rxdcc_data	=	0x65e6
                    65F0   1954 _lnx_cal_rxdcc_data_hg	=	0x65f0
                    65F5   1955 _lnx_cal_rxdcc_eom	=	0x65f5
                    65FF   1956 _lnx_cal_rxdcc_eom_hg	=	0x65ff
                    6604   1957 _lnx_cal_dll_gmsel	=	0x6604
                    6606   1958 _lnx_cal_vdda_dll_sel	=	0x6606
                    660A   1959 _lnx_cal_dll_eom_gmsel	=	0x660a
                    660C   1960 _lnx_cal_vdda_dll_eom_sel	=	0x660c
                    6610   1961 _lnx_cal_eom_dpher	=	0x6610
                    6612   1962 _lnx_cal_align90_dummy_clk	=	0x6612
                    661A   1963 _lnx_cal_align90_dac	=	0x661a
                    6622   1964 _lnx_cal_align90_gm	=	0x6622
                    662A   1965 _lnx_cal_sellv_txdata	=	0x662a
                    6634   1966 _lnx_cal_sellv_txclk	=	0x6634
                    663E   1967 _lnx_cal_sellv_rxdataclk	=	0x663e
                    6648   1968 _lnx_cal_sellv_txpre	=	0x6648
                    6652   1969 _lnx_cal_sellv_rxsampler	=	0x6652
                    665C   1970 _lnx_cal_sellv_rxeomclk	=	0x665c
                    6666   1971 _lnx_spdoft_tx_preset_index_lane	=	0x6666
                    6490   1972 _lnx_calx_txdcc_pdiv	=	0x6490
                    6496   1973 _lnx_calx_txdcc_pdiv_hg	=	0x6496
                    6499   1974 _lnx_calx_txdcc	=	0x6499
                    649F   1975 _lnx_calx_txdcc_hg	=	0x649f
                    64A2   1976 _lnx_calx_rxdcc_dll	=	0x64a2
                    64A8   1977 _lnx_calx_rxdcc_dll_hg	=	0x64a8
                    64AB   1978 _lnx_calx_dll_gmsel	=	0x64ab
                    64AE   1979 _lnx_calx_vdda_dll_sel	=	0x64ae
                    64B4   1980 _lnx_calx_dll_eom_gmsel	=	0x64b4
                    64B7   1981 _lnx_calx_vdda_dll_eom_sel	=	0x64b7
                    64BD   1982 _lnx_calx_eom_dpher	=	0x64bd
                    64C0   1983 _lnx_calx_align90_dummy_clk	=	0x64c0
                    64CC   1984 _lnx_calx_align90_dac	=	0x64cc
                    64D8   1985 _lnx_calx_align90_gm	=	0x64d8
                    6100   1986 _cds28	=	0x6100
                    6178   1987 _dfe_sm	=	0x6178
                    61B8   1988 _dfe_sm_dc	=	0x61b8
                    61C0   1989 _dfe_sm_save	=	0x61c0
                    03FC   1990 _UPHY_ANAREG_REV_0	=	0x03fc
                    E684   1991 _tx_tb	=	0xe684
                    E698   1992 _train_save_tb	=	0xe698
                    607C   1993 _sq_thrs_ratio_tb	=	0x607c
                           1994 ;--------------------------------------------------------
                           1995 ; absolute external ram data
                           1996 ;--------------------------------------------------------
                           1997 	.area XABS    (ABS,XDATA)
                           1998 ;--------------------------------------------------------
                           1999 ; external initialized ram data
                           2000 ;--------------------------------------------------------
                           2001 	.area HOME    (CODE)
                           2002 	.area GSINIT0 (CODE)
                           2003 	.area GSINIT1 (CODE)
                           2004 	.area GSINIT2 (CODE)
                           2005 	.area GSINIT3 (CODE)
                           2006 	.area GSINIT4 (CODE)
                           2007 	.area GSINIT5 (CODE)
                           2008 	.area GSINIT  (CODE)
                           2009 	.area GSFINAL (CODE)
                           2010 	.area CSEG    (CODE)
                           2011 ;--------------------------------------------------------
                           2012 ; global & static initialisations
                           2013 ;--------------------------------------------------------
                           2014 	.area HOME    (CODE)
                           2015 	.area GSINIT  (CODE)
                           2016 	.area GSFINAL (CODE)
                           2017 	.area GSINIT  (CODE)
                           2018 ;--------------------------------------------------------
                           2019 ; Home
                           2020 ;--------------------------------------------------------
                           2021 	.area HOME    (CODE)
                           2022 	.area HOME    (CODE)
                           2023 ;--------------------------------------------------------
                           2024 ; code
                           2025 ;--------------------------------------------------------
                           2026 	.area BANK1   (CODE)
                           2027 ;------------------------------------------------------------
                           2028 ;Allocation info for local variables in function 'apta_l_r_error_check'
                           2029 ;------------------------------------------------------------
                           2030 ;error_flag                Allocated to stack - offset 1
                           2031 ;ctrl                      Allocated to registers r3 
                           2032 ;status                    Allocated to registers r4 
                           2033 ;c1                        Allocated to stack - offset 2
                           2034 ;c0                        Allocated to stack - offset 3
                           2035 ;cn1                       Allocated to stack - offset 4
                           2036 ;g1                        Allocated to registers r7 
                           2037 ;g0                        Allocated to registers r2 
                           2038 ;gn1                       Allocated to registers r3 
                           2039 ;------------------------------------------------------------
                           2040 ;	../../shared/src/apta.c:18: uint8_t apta_l_r_error_check(void) BANKING_CTRL {
                           2041 ;	-----------------------------------------
                           2042 ;	 function apta_l_r_error_check
                           2043 ;	-----------------------------------------
   8425                    2044 _apta_l_r_error_check:
                    0002   2045 	ar2 = 0x02
                    0003   2046 	ar3 = 0x03
                    0004   2047 	ar4 = 0x04
                    0005   2048 	ar5 = 0x05
                    0006   2049 	ar6 = 0x06
                    0007   2050 	ar7 = 0x07
                    0000   2051 	ar0 = 0x00
                    0001   2052 	ar1 = 0x01
   8425 C0 18              2053 	push	_bp
   8427 E5 81              2054 	mov	a,sp
   8429 F5 18              2055 	mov	_bp,a
   842B 24 04              2056 	add	a,#0x04
   842D F5 81              2057 	mov	sp,a
                           2058 ;	../../shared/src/apta.c:23: error_flag = 0;
   842F A8 18              2059 	mov	r0,_bp
   8431 08                 2060 	inc	r0
   8432 76 00              2061 	mov	@r0,#0x00
                           2062 ;	../../shared/src/apta.c:24: ctrl = reg_LOCAL_CTRL_FIELD_LANE_15_0 & 0x3f;	
   8434 90 26 06           2063 	mov	dptr,#(_DME_ENC_REG1 + 0x0002)
   8437 E0                 2064 	movx	a,@dptr
   8438 FB                 2065 	mov	r3,a
   8439 A3                 2066 	inc	dptr
   843A E0                 2067 	movx	a,@dptr
   843B 53 03 3F           2068 	anl	ar3,#0x3F
                           2069 ;	../../shared/src/apta.c:25: status = reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b0 & 0x3f;
   843E 90 26 70           2070 	mov	dptr,#_TX_TRAIN_IF_REG6
   8441 E0                 2071 	movx	a,@dptr
   8442 FC                 2072 	mov	r4,a
   8443 53 04 3F           2073 	anl	ar4,#0x3F
                           2074 ;	../../shared/src/apta.c:26: c1 = ctrl & 0x30;
   8446 A8 18              2075 	mov	r0,_bp
   8448 08                 2076 	inc	r0
   8449 08                 2077 	inc	r0
   844A 74 30              2078 	mov	a,#0x30
   844C 5B                 2079 	anl	a,r3
   844D F6                 2080 	mov	@r0,a
                           2081 ;	../../shared/src/apta.c:27: c0 = ctrl & 0x0c;
   844E E5 18              2082 	mov	a,_bp
   8450 24 03              2083 	add	a,#0x03
   8452 F8                 2084 	mov	r0,a
   8453 74 0C              2085 	mov	a,#0x0C
   8455 5B                 2086 	anl	a,r3
   8456 F6                 2087 	mov	@r0,a
                           2088 ;	../../shared/src/apta.c:28: cn1 = ctrl & 0x03;
   8457 E5 18              2089 	mov	a,_bp
   8459 24 04              2090 	add	a,#0x04
   845B F8                 2091 	mov	r0,a
   845C 74 03              2092 	mov	a,#0x03
   845E 5B                 2093 	anl	a,r3
   845F F6                 2094 	mov	@r0,a
                           2095 ;	../../shared/src/apta.c:29: g1 = status & 0x30;
   8460 74 30              2096 	mov	a,#0x30
   8462 5C                 2097 	anl	a,r4
   8463 FF                 2098 	mov	r7,a
                           2099 ;	../../shared/src/apta.c:30: g0 = status & 0x0c;
   8464 74 0C              2100 	mov	a,#0x0C
   8466 5C                 2101 	anl	a,r4
   8467 FA                 2102 	mov	r2,a
                           2103 ;	../../shared/src/apta.c:31: gn1 = status & 0x03;
   8468 74 03              2104 	mov	a,#0x03
   846A 5C                 2105 	anl	a,r4
   846B FB                 2106 	mov	r3,a
                           2107 ;	../../shared/src/apta.c:33: switch (reg_LOCAL_CTRL_FIELD_LANE_15_0) {
   846C 90 26 06           2108 	mov	dptr,#(_DME_ENC_REG1 + 0x0002)
   846F E0                 2109 	movx	a,@dptr
   8470 FE                 2110 	mov	r6,a
   8471 A3                 2111 	inc	dptr
   8472 E0                 2112 	movx	a,@dptr
   8473 FD                 2113 	mov	r5,a
   8474 BE 00 05           2114 	cjne	r6,#0x00,00166$
   8477 BD 04 02           2115 	cjne	r5,#0x04,00166$
   847A 80 10              2116 	sjmp	00101$
   847C                    2117 00166$:
   847C BE 00 05           2118 	cjne	r6,#0x00,00167$
   847F BD 08 02           2119 	cjne	r5,#0x08,00167$
   8482 80 1F              2120 	sjmp	00106$
   8484                    2121 00167$:
                           2122 ;	../../shared/src/apta.c:34: case 0x0400: //APTA_START:	
   8484 BE 00 2A           2123 	cjne	r6,#0x00,00109$
   8487 BD 0C 27           2124 	cjne	r5,#0x0C,00109$
   848A 80 17              2125 	sjmp	00106$
   848C                    2126 00101$:
                           2127 ;	../../shared/src/apta.c:35: if(((status)!= 0) ||
   848C EC                 2128 	mov	a,r4
   848D 70 0C              2129 	jnz	00102$
                           2130 ;	../../shared/src/apta.c:36: ((reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b1&0x3f)!= 0)) error_flag = 1;
   848F 90 26 71           2131 	mov	dptr,#(_TX_TRAIN_IF_REG6 + 0x0001)
   8492 E0                 2132 	movx	a,@dptr
   8493 FD                 2133 	mov	r5,a
   8494 54 3F              2134 	anl	a,#0x3F
   8496 70 03              2135 	jnz	00170$
   8498 02 85 54           2136 	ljmp	00141$
   849B                    2137 00170$:
   849B                    2138 00102$:
   849B A8 18              2139 	mov	r0,_bp
   849D 08                 2140 	inc	r0
   849E 76 01              2141 	mov	@r0,#0x01
                           2142 ;	../../shared/src/apta.c:37: break;
   84A0 02 85 54           2143 	ljmp	00141$
                           2144 ;	../../shared/src/apta.c:39: case 0x0c00: //APTA_TERM:
   84A3                    2145 00106$:
                           2146 ;	../../shared/src/apta.c:40: if(status!= 0x15) error_flag = 1;
   84A3 BC 15 03           2147 	cjne	r4,#0x15,00171$
   84A6 02 85 54           2148 	ljmp	00141$
   84A9                    2149 00171$:
   84A9 A8 18              2150 	mov	r0,_bp
   84AB 08                 2151 	inc	r0
   84AC 76 01              2152 	mov	@r0,#0x01
                           2153 ;	../../shared/src/apta.c:41: break;
   84AE 02 85 54           2154 	ljmp	00141$
                           2155 ;	../../shared/src/apta.c:42: default:	
   84B1                    2156 00109$:
                           2157 ;	../../shared/src/apta.c:43: if((reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b1&0x0c)!= 0) error_flag = 1;
   84B1 90 26 71           2158 	mov	dptr,#(_TX_TRAIN_IF_REG6 + 0x0001)
   84B4 E0                 2159 	movx	a,@dptr
   84B5 FD                 2160 	mov	r5,a
   84B6 54 0C              2161 	anl	a,#0x0C
   84B8 60 05              2162 	jz	00111$
   84BA A8 18              2163 	mov	r0,_bp
   84BC 08                 2164 	inc	r0
   84BD 76 01              2165 	mov	@r0,#0x01
   84BF                    2166 00111$:
                           2167 ;	../../shared/src/apta.c:44: if(status == 0) error_flag = 1;
   84BF EC                 2168 	mov	a,r4
   84C0 70 05              2169 	jnz	00113$
   84C2 A8 18              2170 	mov	r0,_bp
   84C4 08                 2171 	inc	r0
   84C5 76 01              2172 	mov	@r0,#0x01
   84C7                    2173 00113$:
                           2174 ;	../../shared/src/apta.c:46: if(((cn1 == 0x01) && (gn1==0x02 || gn1==0x00)) || //inc
   84C7 E5 18              2175 	mov	a,_bp
   84C9 24 04              2176 	add	a,#0x04
   84CB F8                 2177 	mov	r0,a
   84CC B6 01 08           2178 	cjne	@r0,#0x01,00120$
   84CF BB 02 02           2179 	cjne	r3,#0x02,00176$
   84D2 80 1E              2180 	sjmp	00114$
   84D4                    2181 00176$:
   84D4 EB                 2182 	mov	a,r3
   84D5 60 1B              2183 	jz	00114$
   84D7                    2184 00120$:
                           2185 ;	../../shared/src/apta.c:47: ((cn1 == 0x02) && (gn1==0x03 || gn1==0x00)) || //dec
   84D7 E5 18              2186 	mov	a,_bp
   84D9 24 04              2187 	add	a,#0x04
   84DB F8                 2188 	mov	r0,a
   84DC B6 02 08           2189 	cjne	@r0,#0x02,00122$
   84DF BB 03 02           2190 	cjne	r3,#0x03,00180$
   84E2 80 0E              2191 	sjmp	00114$
   84E4                    2192 00180$:
   84E4 EB                 2193 	mov	a,r3
   84E5 60 0B              2194 	jz	00114$
   84E7                    2195 00122$:
                           2196 ;	../../shared/src/apta.c:48: ((cn1 == 0x00) && (gn1!=0x00)) ){ 
   84E7 E5 18              2197 	mov	a,_bp
   84E9 24 04              2198 	add	a,#0x04
   84EB F8                 2199 	mov	r0,a
   84EC E6                 2200 	mov	a,@r0
   84ED 70 08              2201 	jnz	00115$
   84EF EB                 2202 	mov	a,r3
   84F0 60 05              2203 	jz	00115$
   84F2                    2204 00114$:
                           2205 ;	../../shared/src/apta.c:49: error_flag = 1;
   84F2 A8 18              2206 	mov	r0,_bp
   84F4 08                 2207 	inc	r0
   84F5 76 01              2208 	mov	@r0,#0x01
   84F7                    2209 00115$:
                           2210 ;	../../shared/src/apta.c:52: if(((c0 == 0x04) && (g0==0x08 || g0==0x00)) || //inc
   84F7 E5 18              2211 	mov	a,_bp
   84F9 24 03              2212 	add	a,#0x03
   84FB F8                 2213 	mov	r0,a
   84FC B6 04 08           2214 	cjne	@r0,#0x04,00129$
   84FF BA 08 02           2215 	cjne	r2,#0x08,00186$
   8502 80 1E              2216 	sjmp	00123$
   8504                    2217 00186$:
   8504 EA                 2218 	mov	a,r2
   8505 60 1B              2219 	jz	00123$
   8507                    2220 00129$:
                           2221 ;	../../shared/src/apta.c:53: ((c0 == 0x08) && (g0==0x0c || g0==0x00)) ||  //dec
   8507 E5 18              2222 	mov	a,_bp
   8509 24 03              2223 	add	a,#0x03
   850B F8                 2224 	mov	r0,a
   850C B6 08 08           2225 	cjne	@r0,#0x08,00131$
   850F BA 0C 02           2226 	cjne	r2,#0x0C,00190$
   8512 80 0E              2227 	sjmp	00123$
   8514                    2228 00190$:
   8514 EA                 2229 	mov	a,r2
   8515 60 0B              2230 	jz	00123$
   8517                    2231 00131$:
                           2232 ;	../../shared/src/apta.c:54: ((c0 == 0x0) && (g0!=0x00)) ){
   8517 E5 18              2233 	mov	a,_bp
   8519 24 03              2234 	add	a,#0x03
   851B F8                 2235 	mov	r0,a
   851C E6                 2236 	mov	a,@r0
   851D 70 08              2237 	jnz	00124$
   851F EA                 2238 	mov	a,r2
   8520 60 05              2239 	jz	00124$
   8522                    2240 00123$:
                           2241 ;	../../shared/src/apta.c:55: error_flag = 1; 
   8522 A8 18              2242 	mov	r0,_bp
   8524 08                 2243 	inc	r0
   8525 76 01              2244 	mov	@r0,#0x01
   8527                    2245 00124$:
                           2246 ;	../../shared/src/apta.c:58: if(((c1 == 0x10) && (g1==0x20 || g1==0x00)) || //inc
   8527 A8 18              2247 	mov	r0,_bp
   8529 08                 2248 	inc	r0
   852A 08                 2249 	inc	r0
   852B B6 10 08           2250 	cjne	@r0,#0x10,00138$
   852E BF 20 02           2251 	cjne	r7,#0x20,00196$
   8531 80 1C              2252 	sjmp	00132$
   8533                    2253 00196$:
   8533 EF                 2254 	mov	a,r7
   8534 60 19              2255 	jz	00132$
   8536                    2256 00138$:
                           2257 ;	../../shared/src/apta.c:59: ((c1 == 0x20) && (g1==0x30 || g1==0x00)) || //dec
   8536 A8 18              2258 	mov	r0,_bp
   8538 08                 2259 	inc	r0
   8539 08                 2260 	inc	r0
   853A B6 20 08           2261 	cjne	@r0,#0x20,00140$
   853D BF 30 02           2262 	cjne	r7,#0x30,00200$
   8540 80 0D              2263 	sjmp	00132$
   8542                    2264 00200$:
   8542 EF                 2265 	mov	a,r7
   8543 60 0A              2266 	jz	00132$
   8545                    2267 00140$:
                           2268 ;	../../shared/src/apta.c:60: ((c1 == 0) && ( g1!=0x00)) ) {
   8545 A8 18              2269 	mov	r0,_bp
   8547 08                 2270 	inc	r0
   8548 08                 2271 	inc	r0
   8549 E6                 2272 	mov	a,@r0
   854A 70 08              2273 	jnz	00141$
   854C EF                 2274 	mov	a,r7
   854D 60 05              2275 	jz	00141$
   854F                    2276 00132$:
                           2277 ;	../../shared/src/apta.c:61: error_flag = 1; 
   854F A8 18              2278 	mov	r0,_bp
   8551 08                 2279 	inc	r0
   8552 76 01              2280 	mov	@r0,#0x01
                           2281 ;	../../shared/src/apta.c:64: }	
   8554                    2282 00141$:
                           2283 ;	../../shared/src/apta.c:66: return error_flag;
   8554 A8 18              2284 	mov	r0,_bp
   8556 08                 2285 	inc	r0
   8557 86 82              2286 	mov	dpl,@r0
   8559 85 18 81           2287 	mov	sp,_bp
   855C D0 18              2288 	pop	_bp
   855E 02 00 C5           2289 	ljmp	__sdcc_banked_ret
                           2290 ;------------------------------------------------------------
                           2291 ;Allocation info for local variables in function 'apta_txtrain'
                           2292 ;------------------------------------------------------------
                           2293 ;ctrl_inx                  Allocated to registers r3 
                           2294 ;cmd_if_on                 Allocated to registers r2 
                           2295 ;local_ctrl_field          Allocated to registers r3 r4 
                           2296 ;------------------------------------------------------------
                           2297 ;	../../shared/src/apta.c:115: void apta_txtrain(void) BANKING_CTRL{
                           2298 ;	-----------------------------------------
                           2299 ;	 function apta_txtrain
                           2300 ;	-----------------------------------------
   8561                    2301 _apta_txtrain:
                           2302 ;	../../shared/src/apta.c:122: reg_MCU_DEBUG0_LANE_7_0 = 3;
   8561 90 22 B4           2303 	mov	dptr,#_MCU_DEBUG0_LANE
   8564 74 03              2304 	mov	a,#0x03
   8566 F0                 2305 	movx	@dptr,a
                           2306 ;	../../shared/src/apta.c:123: cmd_if_on = 0;
   8567 7A 00              2307 	mov	r2,#0x00
                           2308 ;	../../shared/src/apta.c:124: if( reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE && reg_PIN_LOCAL_CTRL_FIELD_READY_RD_LANE) { //Xu: When Remote enable LOCAL_CTRL_FIELD_READY=1, Remote have to wait LOCAL_CTRL_VALID toggle.
   8569 90 26 78           2309 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   856C E0                 2310 	movx	a,@dptr
   856D 20 E0 03           2311 	jb	acc.0,00152$
   8570 02 86 5A           2312 	ljmp	00128$
   8573                    2313 00152$:
   8573 90 26 21           2314 	mov	dptr,#(_TX_TRAIN_IF_REG3 + 0x0001)
   8576 E0                 2315 	movx	a,@dptr
   8577 20 E2 03           2316 	jb	acc.2,00153$
   857A 02 86 5A           2317 	ljmp	00128$
   857D                    2318 00153$:
                           2319 ;	../../shared/src/apta.c:126: if(cmx_APTA_TRAIN_CMD_IF_EN && PHY_MCU_REMOTE_REQ_LANE && lnx_PHY_MCU_LOCAL_ACK_LANE==0) {
   857D 90 E6 07           2320 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   8580 E0                 2321 	movx	a,@dptr
   8581 30 E6 42           2322 	jnb	acc.6,00113$
   8584 90 22 E4           2323 	mov	dptr,#_MCU_COMMAND0
   8587 E0                 2324 	movx	a,@dptr
   8588 30 E0 3B           2325 	jnb	acc.0,00113$
   858B 90 60 33           2326 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   858E E0                 2327 	movx	a,@dptr
   858F 20 E0 34           2328 	jb	acc.0,00113$
                           2329 ;	../../shared/src/apta.c:127: reg_PHY_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 1; 
                           2330 ;	../../shared/src/apta.c:128: reg_PHY_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 0;
   8592 90 22 D8           2331 	mov	dptr,#_MCU_IRQ_ISR_LANE
   8595 E0                 2332 	movx	a,@dptr
   8596 44 20              2333 	orl	a,#0x20
   8598 F0                 2334 	movx	@dptr,a
   8599 E0                 2335 	movx	a,@dptr
   859A 54 DF              2336 	anl	a,#0xdf
   859C F0                 2337 	movx	@dptr,a
                           2338 ;	../../shared/src/apta.c:129: if(lnx_PHY_REMOTE_CTRL_COMMAND_TYPE_LANE_7_0==0x60 ){ //CMD_IF
   859D 90 60 1F           2339 	mov	dptr,#(_PHY_REMOTE_CTRL_COMMAND_LANE + 0x0003)
   85A0 E0                 2340 	movx	a,@dptr
   85A1 FB                 2341 	mov	r3,a
   85A2 BB 60 1C           2342 	cjne	r3,#0x60,00104$
                           2343 ;	../../shared/src/apta.c:130: ctrl_inx = (uint8_t)lnx_PHY_REMOTE_CTRL_COMMAND_CODE_LANE_15_0;				
   85A5 90 60 1C           2344 	mov	dptr,#_PHY_REMOTE_CTRL_COMMAND_LANE
   85A8 E0                 2345 	movx	a,@dptr
   85A9 FB                 2346 	mov	r3,a
   85AA A3                 2347 	inc	dptr
   85AB E0                 2348 	movx	a,@dptr
   85AC FC                 2349 	mov	r4,a
                           2350 ;	../../shared/src/apta.c:131: reg_MCU_DEBUG0_LANE_7_0 = 1;		
   85AD 90 22 B4           2351 	mov	dptr,#_MCU_DEBUG0_LANE
   85B0 74 01              2352 	mov	a,#0x01
   85B2 F0                 2353 	movx	@dptr,a
                           2354 ;	../../shared/src/apta.c:132: if(ctrl_inx>=APTA_ZERO)  {
   85B3 BB 0D 00           2355 	cjne	r3,#0x0D,00159$
   85B6                    2356 00159$:
   85B6 40 05              2357 	jc	00102$
                           2358 ;	../../shared/src/apta.c:133: cmd_if_on = 2;					
   85B8 7A 02              2359 	mov	r2,#0x02
                           2360 ;	../../shared/src/apta.c:134: goto cmd_if_exit; 
   85BA 02 86 5A           2361 	ljmp	00128$
   85BD                    2362 00102$:
                           2363 ;	../../shared/src/apta.c:136: cmd_if_on = 1;
   85BD 7A 01              2364 	mov	r2,#0x01
   85BF 80 3C              2365 	sjmp	00114$
   85C1                    2366 00104$:
                           2367 ;	../../shared/src/apta.c:139: cmd_if_on = 2;
   85C1 7A 02              2368 	mov	r2,#0x02
                           2369 ;	../../shared/src/apta.c:140: goto cmd_if_exit;
   85C3 02 86 5A           2370 	ljmp	00128$
   85C6                    2371 00113$:
                           2372 ;	../../shared/src/apta.c:143: else if(cmx_APTA_TRAIN_SIM_EN) {
   85C6 90 E6 07           2373 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   85C9 E0                 2374 	movx	a,@dptr
   85CA 20 E5 03           2375 	jb	acc.5,00161$
   85CD 02 86 74           2376 	ljmp	00134$
   85D0                    2377 00161$:
                           2378 ;	../../shared/src/apta.c:144: reg_MCU_DEBUG0_LANE_7_0 = 4;
   85D0 90 22 B4           2379 	mov	dptr,#_MCU_DEBUG0_LANE
   85D3 74 04              2380 	mov	a,#0x04
   85D5 F0                 2381 	movx	@dptr,a
                           2382 ;	../../shared/src/apta.c:145: ctrl_inx = apta_local_ctrl_sim_tb[apta_sim_state];
   85D6 90 67 A2           2383 	mov	dptr,#_apta_sim_state
   85D9 E0                 2384 	movx	a,@dptr
   85DA FC                 2385 	mov	r4,a
   85DB 90 86 9F           2386 	mov	dptr,#_apta_local_ctrl_sim_tb
   85DE 93                 2387 	movc	a,@a+dptr
   85DF FD                 2388 	mov	r5,a
   85E0 FB                 2389 	mov	r3,a
                           2390 ;	../../shared/src/apta.c:147: apta_sim_state++;
   85E1 90 67 A2           2391 	mov	dptr,#_apta_sim_state
   85E4 EC                 2392 	mov	a,r4
   85E5 04                 2393 	inc	a
   85E6 F0                 2394 	movx	@dptr,a
                           2395 ;	../../shared/src/apta.c:148: if((apta_local_ctrl_sim_tb[apta_sim_state] == 0xff) ||	
   85E7 90 67 A2           2396 	mov	dptr,#_apta_sim_state
   85EA E0                 2397 	movx	a,@dptr
   85EB 90 86 9F           2398 	mov	dptr,#_apta_local_ctrl_sim_tb
   85EE 93                 2399 	movc	a,@a+dptr
   85EF FC                 2400 	mov	r4,a
   85F0 BC FF 02           2401 	cjne	r4,#0xFF,00162$
   85F3 80 03              2402 	sjmp	00106$
   85F5                    2403 00162$:
                           2404 ;	../../shared/src/apta.c:149: (apta_local_ctrl_sim_tb[apta_sim_state] == APTA_TERM)) apta_sim_state = 0;					
   85F5 BC 0C 05           2405 	cjne	r4,#0x0C,00114$
   85F8                    2406 00106$:
   85F8 90 67 A2           2407 	mov	dptr,#_apta_sim_state
   85FB E4                 2408 	clr	a
   85FC F0                 2409 	movx	@dptr,a
                           2410 ;	../../shared/src/apta.c:151: else goto stop_exit;
   85FD                    2411 00114$:
                           2412 ;	../../shared/src/apta.c:153: local_ctrl_field = apta_local_ctrl_tb[ctrl_inx];
   85FD EB                 2413 	mov	a,r3
   85FE 2B                 2414 	add	a,r3
   85FF FB                 2415 	mov	r3,a
   8600 90 86 83           2416 	mov	dptr,#_apta_local_ctrl_tb
   8603 93                 2417 	movc	a,@a+dptr
   8604 CB                 2418 	xch	a,r3
   8605 A3                 2419 	inc	dptr
   8606 93                 2420 	movc	a,@a+dptr
   8607 FC                 2421 	mov	r4,a
                           2422 ;	../../shared/src/apta.c:155: reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 1;
                           2423 ;	../../shared/src/apta.c:156: reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 0;
   8608 90 26 65           2424 	mov	dptr,#(_TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE + 0x0001)
   860B E0                 2425 	movx	a,@dptr
   860C 44 01              2426 	orl	a,#0x01
   860E F0                 2427 	movx	@dptr,a
   860F E0                 2428 	movx	a,@dptr
   8610 54 FE              2429 	anl	a,#0xfe
   8612 F0                 2430 	movx	@dptr,a
                           2431 ;	../../shared/src/apta.c:157: request_local_ctrl(local_ctrl_field); //	LOCAL_CTRL_FIELD_LANE[11:10]=01
   8613 8B 82              2432 	mov	dpl,r3
   8615 8C 83              2433 	mov	dph,r4
   8617 C0 02              2434 	push	ar2
   8619 78 55              2435 	mov	r0,#_request_local_ctrl
   861B 79 E8              2436 	mov	r1,#(_request_local_ctrl >> 8)
   861D 7A 01              2437 	mov	r2,#(_request_local_ctrl >> 16)
   861F 12 00 B3           2438 	lcall	__sdcc_banked_call
   8622 D0 02              2439 	pop	ar2
                           2440 ;	../../shared/src/apta.c:177: while(reg_REMOTE_STATUS_VALID_ISR_LANE==0); 
   8624                    2441 00117$:
   8624 90 26 5D           2442 	mov	dptr,#(_TRX_TRAIN_IF_INTERRUPT_LANE + 0x0001)
   8627 E0                 2443 	movx	a,@dptr
   8628 30 E0 F9           2444 	jnb	acc.0,00117$
                           2445 ;	../../shared/src/apta.c:180: if((reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b0&0x3f) == 0x3f) { //terminate
   862B 90 26 70           2446 	mov	dptr,#_TX_TRAIN_IF_REG6
   862E E0                 2447 	movx	a,@dptr
   862F FB                 2448 	mov	r3,a
   8630 53 03 3F           2449 	anl	ar3,#0x3F
   8633 BB 3F 07           2450 	cjne	r3,#0x3F,00123$
                           2451 ;	../../shared/src/apta.c:181: apta_sim_state = 0;
   8636 90 67 A2           2452 	mov	dptr,#_apta_sim_state
   8639 E4                 2453 	clr	a
   863A F0                 2454 	movx	@dptr,a
   863B 80 1D              2455 	sjmp	00128$
   863D                    2456 00123$:
                           2457 ;	../../shared/src/apta.c:184: if(apta_l_r_error_check()) {
   863D C0 02              2458 	push	ar2
   863F 78 25              2459 	mov	r0,#_apta_l_r_error_check
   8641 79 84              2460 	mov	r1,#(_apta_l_r_error_check >> 8)
   8643 7A 01              2461 	mov	r2,#(_apta_l_r_error_check >> 16)
   8645 12 00 B3           2462 	lcall	__sdcc_banked_call
   8648 E5 82              2463 	mov	a,dpl
   864A D0 02              2464 	pop	ar2
   864C 60 0C              2465 	jz	00128$
                           2466 ;	../../shared/src/apta.c:185: apta_sim_state = 6; //APTA_TERM
   864E 90 67 A2           2467 	mov	dptr,#_apta_sim_state
   8651 74 06              2468 	mov	a,#0x06
   8653 F0                 2469 	movx	@dptr,a
                           2470 ;	../../shared/src/apta.c:186: lnx_APTA_TERMINATE_REASON_LANE_7_0 = 0x03; //received wrong status
   8654 90 60 09           2471 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0001)
   8657 74 03              2472 	mov	a,#0x03
   8659 F0                 2473 	movx	@dptr,a
                           2474 ;	../../shared/src/apta.c:191: cmd_if_exit:	
   865A                    2475 00128$:
                           2476 ;	../../shared/src/apta.c:192: if(	cmd_if_on > 0) {
   865A EA                 2477 	mov	a,r2
   865B 60 17              2478 	jz	00134$
                           2479 ;	../../shared/src/apta.c:193: if(cmd_if_on==2) lnx_PHY_LOCAL_STATUS_LANE_7_0 = 1; //invalid command
   865D BA 02 08           2480 	cjne	r2,#0x02,00130$
   8660 90 60 2E           2481 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS2_LANE + 0x0002)
   8663 74 01              2482 	mov	a,#0x01
   8665 F0                 2483 	movx	@dptr,a
   8666 80 05              2484 	sjmp	00131$
   8668                    2485 00130$:
                           2486 ;	../../shared/src/apta.c:194: else lnx_PHY_LOCAL_STATUS_LANE_7_0 = 0; //complete
   8668 90 60 2E           2487 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS2_LANE + 0x0002)
   866B E4                 2488 	clr	a
   866C F0                 2489 	movx	@dptr,a
   866D                    2490 00131$:
                           2491 ;	../../shared/src/apta.c:196: lnx_PHY_MCU_LOCAL_ACK_LANE = 1;		
   866D 90 60 33           2492 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   8670 E0                 2493 	movx	a,@dptr
   8671 44 01              2494 	orl	a,#0x01
   8673 F0                 2495 	movx	@dptr,a
                           2496 ;	../../shared/src/apta.c:198: stop_exit:
   8674                    2497 00134$:
                           2498 ;	../../shared/src/apta.c:203: reg_MCU_DEBUG0_LANE_7_0 = 2;		
   8674 90 22 B4           2499 	mov	dptr,#_MCU_DEBUG0_LANE
   8677 74 02              2500 	mov	a,#0x02
   8679 F0                 2501 	movx	@dptr,a
                           2502 ;	../../shared/src/apta.c:204: PHY_STATUS = ST_NORMAL; 
   867A 90 22 30           2503 	mov	dptr,#_MCU_STATUS0_LANE
   867D 74 2B              2504 	mov	a,#0x2B
   867F F0                 2505 	movx	@dptr,a
   8680 02 00 C5           2506 	ljmp	__sdcc_banked_ret
                           2507 	.area CSEG    (CODE)
                           2508 	.area BANK1   (CODE)
   8683                    2509 _apta_local_ctrl_tb:
   8683 00 04              2510 	.byte #0x00,#0x04	; 1024
   8685 0A 00              2511 	.byte #0x0A,#0x00	; 10
   8687 05 00              2512 	.byte #0x05,#0x00	; 5
   8689 28 00              2513 	.byte #0x28,#0x00	; 40
   868B 14 00              2514 	.byte #0x14,#0x00	; 20
   868D 08 00              2515 	.byte #0x08,#0x00	; 8
   868F 04 00              2516 	.byte #0x04,#0x00	; 4
   8691 02 00              2517 	.byte #0x02,#0x00	; 2
   8693 01 00              2518 	.byte #0x01,#0x00	; 1
   8695 20 00              2519 	.byte #0x20,#0x00	; 32
   8697 10 00              2520 	.byte #0x10,#0x00	; 16
   8699 00 08              2521 	.byte #0x00,#0x08	; 2048
   869B 00 0C              2522 	.byte #0x00,#0x0C	; 3072
   869D 00 00              2523 	.byte #0x00,#0x00	; 0
   869F                    2524 _apta_local_ctrl_sim_tb:
   869F 00                 2525 	.db #0x00	; 0
   86A0 01                 2526 	.db #0x01	; 1
   86A1 03                 2527 	.db #0x03	; 3
   86A2 0A                 2528 	.db #0x0A	; 10
   86A3 08                 2529 	.db #0x08	; 8
   86A4 0B                 2530 	.db #0x0B	; 11
   86A5 0C                 2531 	.db #0x0C	; 12
   86A6 FF                 2532 	.db #0xFF	; 255
                           2533 	.area CABS    (ABS,CODE)
