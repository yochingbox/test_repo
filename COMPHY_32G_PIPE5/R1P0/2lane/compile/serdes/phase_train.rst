                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:22:00 2018
                              5 ;--------------------------------------------------------
                              6 	.module phase_train
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
                            133 	.globl _sq_thrs_ratio_tb
                            134 	.globl _train_save_tb
                            135 	.globl _tx_tb
                            136 	.globl _UPHY_ANAREG_REV_0
                            137 	.globl _dfe_sm_save
                            138 	.globl _dfe_sm_dc
                            139 	.globl _dfe_sm
                            140 	.globl _cds28
                            141 	.globl _lnx_calx_align90_gm
                            142 	.globl _lnx_calx_align90_dac
                            143 	.globl _lnx_calx_align90_dummy_clk
                            144 	.globl _lnx_calx_eom_dpher
                            145 	.globl _lnx_calx_vdda_dll_eom_sel
                            146 	.globl _lnx_calx_dll_eom_gmsel
                            147 	.globl _lnx_calx_vdda_dll_sel
                            148 	.globl _lnx_calx_dll_gmsel
                            149 	.globl _lnx_calx_rxdcc_dll_hg
                            150 	.globl _lnx_calx_rxdcc_dll
                            151 	.globl _lnx_calx_txdcc_hg
                            152 	.globl _lnx_calx_txdcc
                            153 	.globl _lnx_calx_txdcc_pdiv_hg
                            154 	.globl _lnx_calx_txdcc_pdiv
                            155 	.globl _lnx_spdoft_tx_preset_index_lane
                            156 	.globl _lnx_cal_sellv_rxeomclk
                            157 	.globl _lnx_cal_sellv_rxsampler
                            158 	.globl _lnx_cal_sellv_txpre
                            159 	.globl _lnx_cal_sellv_rxdataclk
                            160 	.globl _lnx_cal_sellv_txclk
                            161 	.globl _lnx_cal_sellv_txdata
                            162 	.globl _lnx_cal_align90_gm
                            163 	.globl _lnx_cal_align90_dac
                            164 	.globl _lnx_cal_align90_dummy_clk
                            165 	.globl _lnx_cal_eom_dpher
                            166 	.globl _lnx_cal_vdda_dll_eom_sel
                            167 	.globl _lnx_cal_dll_eom_gmsel
                            168 	.globl _lnx_cal_vdda_dll_sel
                            169 	.globl _lnx_cal_dll_gmsel
                            170 	.globl _lnx_cal_rxdcc_eom_hg
                            171 	.globl _lnx_cal_rxdcc_eom
                            172 	.globl _lnx_cal_rxdcc_data_hg
                            173 	.globl _lnx_cal_rxdcc_data
                            174 	.globl _lnx_cal_rxdcc_dll_hg
                            175 	.globl _lnx_cal_rxdcc_dll
                            176 	.globl _lnx_cal_txdcc_hg
                            177 	.globl _lnx_cal_txdcc
                            178 	.globl _lnx_cal_txdcc_pdiv_hg
                            179 	.globl _lnx_cal_txdcc_pdiv
                            180 	.globl _cmx_cal_sllp_dac_fine_ring
                            181 	.globl _cmx_cal_pll_sllp_dac_coarse_ring
                            182 	.globl _cmx_cal_pll_speed_ring
                            183 	.globl _cmx_cal_plldcc
                            184 	.globl _cmx_cal_lccap_lsb
                            185 	.globl _cmx_cal_lccap_msb
                            186 	.globl _cmx_cal_lcvco_dac_msb
                            187 	.globl _cmx_cal_lcvco_dac_lsb
                            188 	.globl _cmx_cal_lcvco_dac
                            189 	.globl _local_tx_preset_tb
                            190 	.globl _train_g0_index
                            191 	.globl _train_g1_index
                            192 	.globl _train_gn1_index
                            193 	.globl _phase_save
                            194 	.globl _txffe_save
                            195 	.globl _rc_save
                            196 	.globl _phy_mode_lane_table
                            197 	.globl _speedtable
                            198 	.globl _min_gen
                            199 	.globl _max_gen
                            200 	.globl _phy_mode_cmn_table
                            201 	.globl _ring_speedtable
                            202 	.globl _lc_speedtable
                            203 	.globl _TXTRAIN_IF_REG0
                            204 	.globl _CDS_READ_MISC1
                            205 	.globl _CDS_READ_MISC0
                            206 	.globl _DFE_READ_F0D_RIGHT_ODD
                            207 	.globl _DFE_READ_F0D_RIGHT_EVEN
                            208 	.globl _DFE_READ_F0D_LEFT_ODD
                            209 	.globl _DFE_READ_F0D_LEFT_EVEN
                            210 	.globl _DFE_READ_F0D_ODD
                            211 	.globl _DFE_READ_F0D_EVEN
                            212 	.globl _DFE_READ_F0B_ODD
                            213 	.globl _DFE_READ_F0B_EVEN
                            214 	.globl _DFE_READ_F0A_ODD
                            215 	.globl _DFE_READ_F0A_EVEN
                            216 	.globl _DFE_READ_ODD_REG8
                            217 	.globl _DFE_READ_EVEN_REG8
                            218 	.globl _DFE_READ_ODD_REG7
                            219 	.globl _DFE_READ_ODD_REG6
                            220 	.globl _DFE_READ_ODD_REG5
                            221 	.globl _DFE_READ_ODD_REG4
                            222 	.globl _DFE_READ_ODD_REG3
                            223 	.globl _DFE_READ_ODD_REG2
                            224 	.globl _DFE_READ_ODD_REG1
                            225 	.globl _DFE_READ_ODD_REG0
                            226 	.globl _DFE_READ_EVEN_REG7
                            227 	.globl _DFE_READ_EVEN_REG6
                            228 	.globl _DFE_READ_EVEN_REG5
                            229 	.globl _DFE_READ_EVEN_REG4
                            230 	.globl _DFE_READ_EVEN_REG3
                            231 	.globl _DFE_READ_EVEN_REG2
                            232 	.globl _DFE_READ_EVEN_REG1
                            233 	.globl _DFE_READ_EVEN_REG0
                            234 	.globl _TX_TRAIN_IF_REG8
                            235 	.globl _TX_TRAIN_CTRL_LANE
                            236 	.globl _TX_TRAIN_IF_REG7
                            237 	.globl _TX_TRAIN_IF_REG6
                            238 	.globl _TX_TRAIN_IF_REG5
                            239 	.globl _TX_TRAIN_IF_REG4
                            240 	.globl _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE
                            241 	.globl _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE
                            242 	.globl _TRX_TRAIN_IF_INTERRUPT_LANE
                            243 	.globl _TX_AMP_CTRL_REG0
                            244 	.globl _TX_DRV_RD_OUT_REG0
                            245 	.globl _LINK_TRAIN_MODE0
                            246 	.globl _TX_EMPH_CTRL_REG0
                            247 	.globl _TX_TRAIN_DEFAULT_REG5
                            248 	.globl _TX_TRAIN_DEFAULT_REG4
                            249 	.globl _TX_TRAIN_DEFAULT_REG3
                            250 	.globl _TX_TRAIN_DEFAULT_REG2
                            251 	.globl _TX_TRAIN_DEFAULT_REG1
                            252 	.globl _TX_TRAIN_DEFAULT_REG0
                            253 	.globl _TX_TRAIN_DRIVER_REG2
                            254 	.globl _TX_TRAIN_DRIVER_REG1
                            255 	.globl _TX_TRAIN_DRIVER_REG0
                            256 	.globl _TX_TRAIN_PATTTERN_REG0
                            257 	.globl _TX_TRAIN_IF_REG3
                            258 	.globl _TX_TRAIN_IF_REG2
                            259 	.globl _TX_TRAIN_IF_REG1
                            260 	.globl _TX_TRAIN_IF_REG0
                            261 	.globl _DME_DEC_REG1
                            262 	.globl _DME_DEC_REG0
                            263 	.globl _DME_ENC_REG2
                            264 	.globl _DME_ENC_REG1
                            265 	.globl _DME_ENC_REG0
                            266 	.globl _END_XDAT_CMN
                            267 	.globl _MCU_INFO_13
                            268 	.globl _MCU_INFO_12
                            269 	.globl _MCU_INFO_5
                            270 	.globl _MCU_INFO_4
                            271 	.globl _SYNC_INFO
                            272 	.globl _CDS_EYE_CLK_THR
                            273 	.globl _TX_SAVE_4
                            274 	.globl _TX_SAVE_3
                            275 	.globl _TX_SAVE_2
                            276 	.globl _TX_SAVE_1
                            277 	.globl _TX_SAVE_0
                            278 	.globl _ETH_PRESET1_TB
                            279 	.globl _ETH_PRESET0_TB
                            280 	.globl _SAS_PRESET2_TB
                            281 	.globl _SAS_PRESET1_TB
                            282 	.globl _SAS_PRESET0_TB
                            283 	.globl _G_SELLV_RXSAMPLER
                            284 	.globl _G_SELLV_RXDATACLK
                            285 	.globl _G_SELLV_RXEOMCLK
                            286 	.globl _G_SELLV_TXPRE
                            287 	.globl _G_SELLV_TXDATA
                            288 	.globl _G_SELLV_TXCLK
                            289 	.globl _TIMER_SEL3
                            290 	.globl _TIMER_SEL2
                            291 	.globl _TIMER_SEL1
                            292 	.globl _MCU_CONFIG1
                            293 	.globl _LOOP_CNTS
                            294 	.globl _CAL_DATA1
                            295 	.globl _MCU_CONFIG
                            296 	.globl _CAL_STATUS_READ
                            297 	.globl _CAL_TIME_OUT_AND_DIS
                            298 	.globl _CON_CAL_STEP_SIZE5
                            299 	.globl _CON_CAL_STEP_SIZE4
                            300 	.globl _CON_CAL_STEP_SIZE3
                            301 	.globl _CON_CAL_STEP_SIZE2
                            302 	.globl _CON_CAL_STEP_SIZE1
                            303 	.globl _CONTROL_CONFIG9
                            304 	.globl _CONTROL_CONFIG8
                            305 	.globl _TRAIN_IF_CONFIG
                            306 	.globl _CAL_DATA0
                            307 	.globl _CONTROL_CONFIG7
                            308 	.globl _CONTROL_CONFIG6
                            309 	.globl _CONTROL_CONFIG5
                            310 	.globl _CONTROL_CONFIG4
                            311 	.globl _CONTROL_CONFIG3
                            312 	.globl _CONTROL_CONFIG2
                            313 	.globl _CONTROL_CONFIG1
                            314 	.globl _CONTROL_CONFIG0
                            315 	.globl _FW_REV
                            316 	.globl _CID_REG1
                            317 	.globl _CID_REG0
                            318 	.globl _CMN_MCU_REG
                            319 	.globl _SET_LANE_ISR
                            320 	.globl _CMN_ISR_MASK_1
                            321 	.globl _CMN_ISR_1
                            322 	.globl _CMN_MCU_TIMER3_CONTROL
                            323 	.globl _CMN_MCU_TIMER2_CONTROL
                            324 	.globl _CMN_MCU_TIMER1_CONTROL
                            325 	.globl _CMN_MCU_TIMER0_CONTROL
                            326 	.globl _CMN_MCU_TIMER_CTRL_5_LANE
                            327 	.globl _CMN_MCU_TIMER_CTRL_4_LANE
                            328 	.globl _CMN_MCU_TIMER_CTRL_3_LANE
                            329 	.globl _CMN_MCU_TIMER_CTRL_2_LANE
                            330 	.globl _CMN_MCU_TIMER_CONTROL
                            331 	.globl _CMN_CACHE_DEBUG1
                            332 	.globl _CMN_MCU_GPIO
                            333 	.globl _CMN_ISR_CLEAR_2
                            334 	.globl _CMN_ISR_MASK_2
                            335 	.globl _CMN_ISR_2
                            336 	.globl _MCU_INT_ADDR
                            337 	.globl _CMN_CACHE_DEBUG0
                            338 	.globl _MCU_SDT_CMN
                            339 	.globl _XDATA_MEM_CHECKSUM_CMN_2
                            340 	.globl _XDATA_MEM_CHECKSUM_CMN_1
                            341 	.globl _XDATA_MEM_CHECKSUM_CMN_0
                            342 	.globl _TEST5
                            343 	.globl _PM_CMN_REG2
                            344 	.globl _INPUT_CMN_PIN_REG3
                            345 	.globl __FIELDNAME_
                            346 	.globl _CMN_CALIBRATION
                            347 	.globl _OUTPUT_CMN_PIN_REG0
                            348 	.globl _SPD_CMN_REG1
                            349 	.globl _CLKGEN_CMN_REG1
                            350 	.globl _PLLCAL_REG1
                            351 	.globl _PLLCAL_REG0
                            352 	.globl _ANA_TSEN_CONTROL
                            353 	.globl _INPUT_CMN_PIN_REG2
                            354 	.globl _INPUT_CMN_PIN_REG1
                            355 	.globl _INPUT_CMN_PIN_REG0
                            356 	.globl _PM_CMN_REG1
                            357 	.globl _SYSTEM
                            358 	.globl _TEST4
                            359 	.globl _TEST3
                            360 	.globl _TEST2
                            361 	.globl _TEST1
                            362 	.globl _TEST0
                            363 	.globl _MCU_SYNC2
                            364 	.globl _MCU_SYNC1
                            365 	.globl _MEM_IRQ_CLEAR
                            366 	.globl _APB_CONTROL_REG
                            367 	.globl _ANA_IF_CMN_REG0
                            368 	.globl _MEM_IRQ_MASK
                            369 	.globl _MEM_IRQ
                            370 	.globl _ANA_IF_CMN_REG1
                            371 	.globl _MEM_CMN_ECC_ERR_ADDRESS0
                            372 	.globl _MCU_INFO_3
                            373 	.globl _MCU_INFO_2
                            374 	.globl _MCU_INFO_1
                            375 	.globl _MCU_INFO_0
                            376 	.globl _MEMORY_CONTROL_4
                            377 	.globl _MEMORY_CONTROL_3
                            378 	.globl _MEMORY_CONTROL_2
                            379 	.globl _MEMORY_CONTROL_1
                            380 	.globl _MEMORY_CONTROL_0
                            381 	.globl _MCU_DEBUG1
                            382 	.globl _MCU_DEBUG0
                            383 	.globl _MCU_CONTROL_4
                            384 	.globl _MCU_CONTROL_3
                            385 	.globl _MCU_CONTROL_2
                            386 	.globl _MCU_CONTROL_1
                            387 	.globl _MCU_CONTROL_0
                            388 	.globl _GLOB_L1_SUBSTATES_CFG
                            389 	.globl _GLOB_PIPE_REVISION
                            390 	.globl _GLOB_BIST_DATA_HI
                            391 	.globl _GLOB_BIST_SEQR_CFG
                            392 	.globl _GLOB_BIST_RESULT
                            393 	.globl _GLOB_BIST_MASK
                            394 	.globl _GLOB_BIST_START
                            395 	.globl _GLOB_BIST_LANE_TYPE
                            396 	.globl _GLOB_BIST_CTRL
                            397 	.globl _GLOB_DP_BAL_CFG4
                            398 	.globl _GLOB_DP_BAL_CFG2
                            399 	.globl _GLOB_DP_BAL_CFG0
                            400 	.globl _GLOB_PM_DP_CTRL
                            401 	.globl _GLOB_COUNTER_HI
                            402 	.globl _GLOB_COUNTER_CTRL
                            403 	.globl _GLOB_PM_CFG0
                            404 	.globl _GLOB_DP_SAL_CFG5
                            405 	.globl _GLOB_DP_SAL_CFG3
                            406 	.globl _GLOB_DP_SAL_CFG1
                            407 	.globl _GLOB_DP_SAL_CFG
                            408 	.globl _GLOB_MISC_CTRL
                            409 	.globl _GLOB_CLK_SRC_HI
                            410 	.globl _GLOB_CLK_SRC_LO
                            411 	.globl _GLOB_RST_CLK_CTRL
                            412 	.globl _DFE_STATIC_REG6
                            413 	.globl _DFE_STATIC_REG5
                            414 	.globl _DFE_STATIC_REG4
                            415 	.globl _DFE_STATIC_REG3
                            416 	.globl _DFE_STATIC_REG1
                            417 	.globl _DFE_STATIC_REG0
                            418 	.globl _RX_CMN_0
                            419 	.globl _SRIS_REG1
                            420 	.globl _SRIS_REG0
                            421 	.globl _DTX_PHY_ALIGN_REG2
                            422 	.globl _DTX_PHY_ALIGN_REG1
                            423 	.globl _DTX_PHY_ALIGN_REG0
                            424 	.globl _DTX_REG4
                            425 	.globl _DTX_REG3
                            426 	.globl _DTX_REG2
                            427 	.globl _DTX_REG1
                            428 	.globl _DTX_REG0
                            429 	.globl _TX_CMN_REG
                            430 	.globl _END_XDAT_LANE
                            431 	.globl _TRAIN_CONTROL_17
                            432 	.globl _TRAIN_CONTROL_16
                            433 	.globl _TRAIN_CONTROL_15
                            434 	.globl _TRAIN_CONTROL_14
                            435 	.globl _TRAIN_CONTROL_13
                            436 	.globl _ESM_ERR_N_CNT_LOW_LANE
                            437 	.globl _ESM_POP_N_CNT_LOW_LANE
                            438 	.globl _TRAIN_CONTROL_12
                            439 	.globl _TRAIN_CONTROL_11
                            440 	.globl _TRAIN_CONTROL_10
                            441 	.globl _TRAIN_CONTROL_9
                            442 	.globl _TRAIN_CONTROL_8
                            443 	.globl _TRAIN_CONTROL_7
                            444 	.globl _TRAIN_CONTROL_6
                            445 	.globl _TRAIN_CONTROL_5
                            446 	.globl _TRAIN_CONTROL_4
                            447 	.globl _TRAIN_CONTROL_3
                            448 	.globl _ESM_ERR_POP_CNT_HIGH_LANE
                            449 	.globl _ESM_ERR_P_CNT_LOW_LANE
                            450 	.globl _ESM_POP_P_CNT_LOW_LANE
                            451 	.globl _CDS_CTRL_REG1
                            452 	.globl _CDS_CTRL_REG0
                            453 	.globl _DFE_CONTROL_11
                            454 	.globl _DFE_CONTROL_10
                            455 	.globl _DFE_CONTROL_9
                            456 	.globl _DFE_CONTROL_8
                            457 	.globl _DFE_CONTROL_7
                            458 	.globl _DFE_TEST_5
                            459 	.globl _DFE_TEST_4
                            460 	.globl _DFE_TEST_1
                            461 	.globl _DFE_TEST_0
                            462 	.globl _DFE_CONTROL_6
                            463 	.globl _TRAIN_PARA_3
                            464 	.globl _TRAIN_PARA_2
                            465 	.globl _TRAIN_PARA_1
                            466 	.globl _TRAIN_PARA_0
                            467 	.globl _DLL_CAL
                            468 	.globl _RPTA_CONFIG_1
                            469 	.globl _RPTA_CONFIG_0
                            470 	.globl _TRAIN_CONTROL_2
                            471 	.globl _TRAIN_CONTROL_1
                            472 	.globl _TRAIN_CONTROL_0
                            473 	.globl _DFE_CONTROL_5
                            474 	.globl _DFE_CONTROL_4
                            475 	.globl _DFE_CONTROL_3
                            476 	.globl _DFE_CONTROL_2
                            477 	.globl _DFE_CONTROL_1
                            478 	.globl _DFE_CONTROL_0
                            479 	.globl _TRX_TRAIN_IF_TIMERS_ENABLE_LANE
                            480 	.globl _TRX_TRAIN_IF_TIMERS2_LANE
                            481 	.globl _TRX_TRAIN_IF_TIMERS1_LANE
                            482 	.globl _PHY_LOCAL_VALUE_LANE
                            483 	.globl _PHY_REMOTE_CTRL_VALUE_LANE
                            484 	.globl _PHY_REMOTE_CTRL_COMMAND_LANE
                            485 	.globl _CAL_SAVE_DATA3_LANE
                            486 	.globl _CAL_SAVE_DATA2_LANE
                            487 	.globl _CAL_SAVE_DATA1_LANE
                            488 	.globl _CAL_CTRL4_LANE
                            489 	.globl _CAL_CTRL3_LANE
                            490 	.globl _CAL_CTRL2_LANE
                            491 	.globl _CAL_CTRL1_LANE
                            492 	.globl _LANE_MARGIN_REG0
                            493 	.globl _EOM_VLD_REG4
                            494 	.globl _EOM_REG0
                            495 	.globl _EOM_ERR_REG3
                            496 	.globl _EOM_ERR_REG2
                            497 	.globl _EOM_ERR_REG1
                            498 	.globl _EOM_ERR_REG0
                            499 	.globl _EOM_VLD_REG3
                            500 	.globl _EOM_VLD_REG2
                            501 	.globl _EOM_VLD_REG1
                            502 	.globl _EOM_VLD_REG0
                            503 	.globl _DFE_STATIC_LANE_REG6
                            504 	.globl _DFE_STATIC_LANE_REG5
                            505 	.globl _DFE_STATIC_LANE_REG4
                            506 	.globl _DFE_STATIC_LANE_REG3
                            507 	.globl _DFE_STATIC_LANE_REG1
                            508 	.globl _DFE_STATIC_LANE_REG0
                            509 	.globl _DFE_DCE_REG0
                            510 	.globl _CAL_OFST_REG2
                            511 	.globl _CAL_OFST_REG1
                            512 	.globl _CAL_OFST_REG0
                            513 	.globl _DFE_READ_ODD_2C_REG8
                            514 	.globl _DFE_READ_EVEN_2C_REG8
                            515 	.globl _DFE_READ_ODD_2C_REG7
                            516 	.globl _DFE_READ_ODD_2C_REG6
                            517 	.globl _DFE_READ_ODD_2C_REG5
                            518 	.globl _DFE_READ_ODD_2C_REG4
                            519 	.globl _DFE_READ_ODD_2C_REG3
                            520 	.globl _DFE_READ_ODD_2C_REG2
                            521 	.globl _DFE_READ_ODD_2C_REG1
                            522 	.globl _DFE_READ_ODD_2C_REG0
                            523 	.globl _DFE_READ_EVEN_2C_REG7
                            524 	.globl _DFE_READ_EVEN_2C_REG6
                            525 	.globl _DFE_READ_EVEN_2C_REG5
                            526 	.globl _DFE_READ_EVEN_2C_REG4
                            527 	.globl _DFE_READ_EVEN_2C_REG3
                            528 	.globl _DFE_READ_EVEN_2C_REG2
                            529 	.globl _DFE_READ_EVEN_2C_REG1
                            530 	.globl _DFE_READ_EVEN_2C_REG0
                            531 	.globl _DFE_READ_ODD_SM_REG8
                            532 	.globl _DFE_READ_EVEN_SM_REG8
                            533 	.globl _DFE_READ_ODD_SM_REG7
                            534 	.globl _DFE_READ_ODD_SM_REG6
                            535 	.globl _DFE_READ_ODD_SM_REG5
                            536 	.globl _DFE_READ_ODD_SM_REG4
                            537 	.globl _DFE_READ_ODD_SM_REG3
                            538 	.globl _DFE_READ_ODD_SM_REG2
                            539 	.globl _DFE_READ_ODD_SM_REG1
                            540 	.globl _DFE_READ_ODD_SM_REG0
                            541 	.globl _DFE_READ_EVEN_SM_REG7
                            542 	.globl _DFE_READ_EVEN_SM_REG6
                            543 	.globl _DFE_READ_EVEN_SM_REG5
                            544 	.globl _DFE_READ_EVEN_SM_REG4
                            545 	.globl _DFE_READ_EVEN_SM_REG3
                            546 	.globl _DFE_READ_EVEN_SM_REG2
                            547 	.globl _DFE_READ_EVEN_SM_REG1
                            548 	.globl _DFE_READ_EVEN_SM_REG0
                            549 	.globl _DFE_FEXT_ODD_REG7
                            550 	.globl _DFE_FEXT_ODD_REG6
                            551 	.globl _DFE_FEXT_ODD_REG5
                            552 	.globl _DFE_FEXT_ODD_REG4
                            553 	.globl _DFE_FEXT_ODD_REG3
                            554 	.globl _DFE_FEXT_ODD_REG2
                            555 	.globl _DFE_FEXT_ODD_REG1
                            556 	.globl _DFE_FEXT_ODD_REG0
                            557 	.globl _DFE_FEXT_EVEN_REG7
                            558 	.globl _DFE_FEXT_EVEN_REG6
                            559 	.globl _DFE_FEXT_EVEN_REG5
                            560 	.globl _DFE_FEXT_EVEN_REG4
                            561 	.globl _DFE_FEXT_EVEN_REG3
                            562 	.globl _DFE_FEXT_EVEN_REG2
                            563 	.globl _DFE_FEXT_EVEN_REG1
                            564 	.globl _DFE_FEXT_EVEN_REG0
                            565 	.globl _DFE_DC_ODD_REG8
                            566 	.globl _DFE_DC_EVEN_REG8
                            567 	.globl _DFE_FEN_ODD_REG
                            568 	.globl _DFE_FEN_EVEN_REG
                            569 	.globl _DFE_STEP_REG1
                            570 	.globl _DFE_STEP_REG0
                            571 	.globl _DFE_ANA_REG1
                            572 	.globl _DFE_ANA_REG0
                            573 	.globl _DFE_CTRL_REG4
                            574 	.globl _RX_EQ_CLK_CTRL
                            575 	.globl _DFE_CTRL_REG3
                            576 	.globl _DFE_CTRL_REG2
                            577 	.globl _DFE_CTRL_REG1
                            578 	.globl _DFE_CTRL_REG0
                            579 	.globl _PT_COUNTER2
                            580 	.globl _PT_COUNTER1
                            581 	.globl _PT_COUNTER0
                            582 	.globl _PT_USER_PATTERN2
                            583 	.globl _PT_USER_PATTERN1
                            584 	.globl _PT_USER_PATTERN0
                            585 	.globl _PT_CONTROL1
                            586 	.globl _PT_CONTROL0
                            587 	.globl _XDATA_MEM_CHECKSUM_LANE1
                            588 	.globl _XDATA_MEM_CHECKSUM_LANE0
                            589 	.globl _MEM_ECC_ERR_ADDRESS0
                            590 	.globl _MCU_COMMAND0
                            591 	.globl _MCU_INT_CONTROL_13
                            592 	.globl _MCU_WDT_LANE
                            593 	.globl _MCU_IRQ_ISR_LANE
                            594 	.globl _ANA_IF_DFEO_REG0
                            595 	.globl _ANA_IF_DFEE_REG0
                            596 	.globl _ANA_IF_TRX_REG0
                            597 	.globl _EXT_INT_CONTROL
                            598 	.globl _MCU_DEBUG_LANE
                            599 	.globl _MCU_DEBUG3_LANE
                            600 	.globl _MCU_DEBUG2_LANE
                            601 	.globl _MCU_DEBUG1_LANE
                            602 	.globl _MCU_DEBUG0_LANE
                            603 	.globl _MCU_TIMER_CTRL_7_LANE
                            604 	.globl _MCU_TIMER_CTRL_6_LANE
                            605 	.globl _MCU_TIMER_CTRL_5_LANE
                            606 	.globl _MCU_TIMER_CTRL_4_LANE
                            607 	.globl _MCU_TIMER_CTRL_3_LANE
                            608 	.globl _MCU_TIMER_CTRL_2_LANE
                            609 	.globl _MCU_TIMER_CTRL_1_LANE
                            610 	.globl _MCU_MEM_REG2_LANE
                            611 	.globl _MCU_MEM_REG1_LANE
                            612 	.globl _MCU_IRQ_MASK_LANE
                            613 	.globl _MCU_IRQ_LANE
                            614 	.globl _MCU_TIMER3_CONTROL
                            615 	.globl _MCU_TIMER2_CONTROL
                            616 	.globl _MCU_TIMER1_CONTROL
                            617 	.globl _MCU_TIMER0_CONTROL
                            618 	.globl _MCU_TIMER_CONTROL
                            619 	.globl _MCU_INT12_CONTROL
                            620 	.globl _MCU_INT11_CONTROL
                            621 	.globl _MCU_INT10_CONTROL
                            622 	.globl _MCU_INT9_CONTROL
                            623 	.globl _MCU_INT8_CONTROL
                            624 	.globl _MCU_INT7_CONTROL
                            625 	.globl _MCU_INT6_CONTROL
                            626 	.globl _MCU_INT5_CONTROL
                            627 	.globl _MCU_INT4_CONTROL
                            628 	.globl _MCU_INT3_CONTROL
                            629 	.globl _MCU_INT2_CONTROL
                            630 	.globl _MCU_INT1_CONTROL
                            631 	.globl _MCU_INT0_CONTROL
                            632 	.globl _MCU_STATUS3_LANE
                            633 	.globl _MCU_STATUS2_LANE
                            634 	.globl _MCU_STATUS1_LANE
                            635 	.globl _MCU_STATUS0_LANE
                            636 	.globl _LANE_SYSTEM0
                            637 	.globl _CACHE_DEBUG1
                            638 	.globl _CACHE_DEBUG0
                            639 	.globl _MCU_GPIO
                            640 	.globl _MCU_CONTROL_LANE
                            641 	.globl _LANE_32G_PRESET_CFG16_LANE
                            642 	.globl _LANE_32G_PRESET_CFG14_LANE
                            643 	.globl _LANE_32G_PRESET_CFG12_LANE
                            644 	.globl _LANE_32G_PRESET_CFG10_LANE
                            645 	.globl _LANE_32G_PRESET_CFG8_LANE
                            646 	.globl _LANE_32G_PRESET_CFG6_LANE
                            647 	.globl _LANE_32G_PRESET_CFG4_LANE
                            648 	.globl _LANE_32G_PRESET_CFG2_LANE
                            649 	.globl _LANE_32G_PRESET_CFG0_LANE
                            650 	.globl _LANE_EQ_32G_CFG0_LANE
                            651 	.globl _LANE_16G_PRESET_CFG16_LANE
                            652 	.globl _LANE_16G_PRESET_CFG14_LANE
                            653 	.globl _LANE_16G_PRESET_CFG12_LANE
                            654 	.globl _LANE_16G_PRESET_CFG10_LANE
                            655 	.globl _LANE_16G_PRESET_CFG8_LANE
                            656 	.globl _LANE_16G_PRESET_CFG6_LANE
                            657 	.globl _LANE_16G_PRESET_CFG4_LANE
                            658 	.globl _LANE_16G_PRESET_CFG2_LANE
                            659 	.globl _LANE_16G_PRESET_CFG0_LANE
                            660 	.globl _LANE_EQ_16G_CFG0_LANE
                            661 	.globl _LANE_REMOTE_SET_LANE
                            662 	.globl _LANE_COEFF_MAX0_LANE
                            663 	.globl _LANE_PRESET_CFG16_LANE
                            664 	.globl _LANE_PRESET_CFG14_LANE
                            665 	.globl _LANE_PRESET_CFG12_LANE
                            666 	.globl _LANE_PRESET_CFG10_LANE
                            667 	.globl _LANE_PRESET_CFG8_LANE
                            668 	.globl _LANE_PRESET_CFG6_LANE
                            669 	.globl _LANE_PRESET_CFG4_LANE
                            670 	.globl _LANE_PRESET_CFG2_LANE
                            671 	.globl _LANE_PRESET_CFG0_LANE
                            672 	.globl _LANE_EQ_CFG1_LANE
                            673 	.globl _LANE_EQ_CFG0_LANE
                            674 	.globl _LANE_USB_DP_CFG2_LANE
                            675 	.globl _LANE_USB_DP_CFG1_LANE
                            676 	.globl _LANE_DP_PIE8_CFG0_LANE
                            677 	.globl _LANE_CFG_STATUS3_LANE
                            678 	.globl _LANE_CFG4
                            679 	.globl _LANE_CFG2_LANE
                            680 	.globl _LANE_CFG_STATUS2_LANE
                            681 	.globl _LANE_STATUS0
                            682 	.globl _LANE_CFG0
                            683 	.globl _SQ_REG0
                            684 	.globl _DTL_REG3
                            685 	.globl _DTL_REG2
                            686 	.globl _DTL_REG1
                            687 	.globl _DTL_REG0
                            688 	.globl _RX_LANE_INTERRUPT_REG1
                            689 	.globl _RX_CALIBRATION_REG
                            690 	.globl _INPUT_RX_PIN_REG3_LANE
                            691 	.globl _RX_DATA_PATH_REG
                            692 	.globl _RX_LANE_INTERRUPT_MASK
                            693 	.globl _RX_LANE_INTERRUPT
                            694 	.globl _CDR_LOCK_REG
                            695 	.globl _FRAME_SYNC_DET_REG6
                            696 	.globl _FRAME_SYNC_DET_REG5
                            697 	.globl _FRAME_SYNC_DET_REG4
                            698 	.globl _FRAME_SYNC_DET_REG3
                            699 	.globl _FRAME_SYNC_DET_REG2
                            700 	.globl _FRAME_SYNC_DET_REG1
                            701 	.globl _FRAME_SYNC_DET_REG0
                            702 	.globl _CLKGEN_RX_LANE_REG1_LANE
                            703 	.globl _DIG_RX_RSVD_REG0
                            704 	.globl _SPD_CTRL_RX_LANE_REG1_LANE
                            705 	.globl _INPUT_RX_PIN_REG2_LANE
                            706 	.globl _INPUT_RX_PIN_REG1_LANE
                            707 	.globl _INPUT_RX_PIN_REG0_LANE
                            708 	.globl _RX_SYSTEM_LANE
                            709 	.globl _PM_CTRL_RX_LANE_REG1_LANE
                            710 	.globl _MON_TOP
                            711 	.globl _ANALOG_TX_REALTIME_REG_1
                            712 	.globl _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE
                            713 	.globl _PM_CTRL_INTERRUPT_ISR_REG1_LANE
                            714 	.globl __FIELDNAME__LANE
                            715 	.globl _INPUT_TX_PIN_REG5_LANE
                            716 	.globl _DIG_TX_RSVD_REG0
                            717 	.globl _TX_CALIBRATION_LANE
                            718 	.globl _INPUT_TX_PIN_REG4_LANE
                            719 	.globl _TX_SYSTEM_LANE
                            720 	.globl _SPD_CTRL_TX_LANE_REG1_LANE
                            721 	.globl _SPD_CTRL_INTERRUPT_REG2
                            722 	.globl _SPD_CTRL_INTERRUPT_REG1_LANE
                            723 	.globl _TX_SPEED_CONVERT_LANE
                            724 	.globl _CLKGEN_TX_LANE_REG1_LANE
                            725 	.globl _PM_CTRL_INTERRUPT_REG2
                            726 	.globl _PM_CTRL_INTERRUPT_REG1_LANE
                            727 	.globl _INPUT_TX_PIN_REG3_LANE
                            728 	.globl _INPUT_TX_PIN_REG2_LANE
                            729 	.globl _INPUT_TX_PIN_REG1_LANE
                            730 	.globl _INPUT_TX_PIN_REG0_LANE
                            731 	.globl _PM_CTRL_TX_LANE_REG2_LANE
                            732 	.globl _PM_CTRL_TX_LANE_REG1_LANE
                            733 	.globl _UPHY14_CMN_ANAREG_TOP_214
                            734 	.globl _UPHY14_CMN_ANAREG_TOP_213
                            735 	.globl _UPHY14_CMN_ANAREG_TOP_212
                            736 	.globl _UPHY14_CMN_ANAREG_TOP_211
                            737 	.globl _UPHY14_CMN_ANAREG_TOP_210
                            738 	.globl _UPHY14_CMN_ANAREG_TOP_209
                            739 	.globl _UPHY14_CMN_ANAREG_TOP_208
                            740 	.globl _UPHY14_CMN_ANAREG_TOP_207
                            741 	.globl _UPHY14_CMN_ANAREG_TOP_206
                            742 	.globl _UPHY14_CMN_ANAREG_TOP_205
                            743 	.globl _UPHY14_CMN_ANAREG_TOP_204
                            744 	.globl _UPHY14_CMN_ANAREG_TOP_203
                            745 	.globl _UPHY14_CMN_ANAREG_TOP_202
                            746 	.globl _UPHY14_CMN_ANAREG_TOP_201
                            747 	.globl _UPHY14_CMN_ANAREG_TOP_200
                            748 	.globl _UPHY14_CMN_ANAREG_TOP_199
                            749 	.globl _UPHY14_CMN_ANAREG_TOP_198
                            750 	.globl _UPHY14_CMN_ANAREG_TOP_197
                            751 	.globl _UPHY14_CMN_ANAREG_TOP_196
                            752 	.globl _UPHY14_CMN_ANAREG_TOP_195
                            753 	.globl _UPHY14_CMN_ANAREG_TOP_194
                            754 	.globl _UPHY14_CMN_ANAREG_TOP_193
                            755 	.globl _UPHY14_CMN_ANAREG_TOP_192
                            756 	.globl _UPHY14_CMN_ANAREG_TOP_191
                            757 	.globl _UPHY14_CMN_ANAREG_TOP_190
                            758 	.globl _UPHY14_CMN_ANAREG_TOP_189
                            759 	.globl _UPHY14_CMN_ANAREG_TOP_188
                            760 	.globl _UPHY14_CMN_ANAREG_TOP_187
                            761 	.globl _UPHY14_CMN_ANAREG_TOP_186
                            762 	.globl _UPHY14_CMN_ANAREG_TOP_185
                            763 	.globl _UPHY14_CMN_ANAREG_TOP_184
                            764 	.globl _UPHY14_CMN_ANAREG_TOP_183
                            765 	.globl _UPHY14_CMN_ANAREG_TOP_182
                            766 	.globl _UPHY14_CMN_ANAREG_TOP_181
                            767 	.globl _UPHY14_CMN_ANAREG_TOP_180
                            768 	.globl _UPHY14_CMN_ANAREG_TOP_179
                            769 	.globl _UPHY14_CMN_ANAREG_TOP_178
                            770 	.globl _UPHY14_CMN_ANAREG_TOP_177
                            771 	.globl _UPHY14_CMN_ANAREG_TOP_176
                            772 	.globl _UPHY14_CMN_ANAREG_TOP_175
                            773 	.globl _UPHY14_CMN_ANAREG_TOP_174
                            774 	.globl _UPHY14_CMN_ANAREG_TOP_173
                            775 	.globl _UPHY14_CMN_ANAREG_TOP_172
                            776 	.globl _UPHY14_CMN_ANAREG_TOP_171
                            777 	.globl _UPHY14_CMN_ANAREG_TOP_170
                            778 	.globl _UPHY14_CMN_ANAREG_TOP_169
                            779 	.globl _UPHY14_CMN_ANAREG_TOP_168
                            780 	.globl _UPHY14_CMN_ANAREG_TOP_167
                            781 	.globl _UPHY14_CMN_ANAREG_TOP_166
                            782 	.globl _UPHY14_CMN_ANAREG_TOP_165
                            783 	.globl _UPHY14_CMN_ANAREG_TOP_164
                            784 	.globl _UPHY14_CMN_ANAREG_TOP_163
                            785 	.globl _UPHY14_CMN_ANAREG_TOP_162
                            786 	.globl _UPHY14_CMN_ANAREG_TOP_161
                            787 	.globl _UPHY14_CMN_ANAREG_TOP_160
                            788 	.globl _UPHY14_CMN_ANAREG_TOP_159
                            789 	.globl _UPHY14_CMN_ANAREG_TOP_158
                            790 	.globl _UPHY14_CMN_ANAREG_TOP_157
                            791 	.globl _UPHY14_CMN_ANAREG_TOP_156
                            792 	.globl _UPHY14_CMN_ANAREG_TOP_155
                            793 	.globl _UPHY14_CMN_ANAREG_TOP_154
                            794 	.globl _UPHY14_CMN_ANAREG_TOP_153
                            795 	.globl _UPHY14_CMN_ANAREG_TOP_152
                            796 	.globl _UPHY14_CMN_ANAREG_TOP_151
                            797 	.globl _UPHY14_CMN_ANAREG_TOP_150
                            798 	.globl _UPHY14_CMN_ANAREG_TOP_149
                            799 	.globl _UPHY14_CMN_ANAREG_TOP_148
                            800 	.globl _UPHY14_CMN_ANAREG_TOP_147
                            801 	.globl _UPHY14_CMN_ANAREG_TOP_146
                            802 	.globl _UPHY14_CMN_ANAREG_TOP_145
                            803 	.globl _UPHY14_CMN_ANAREG_TOP_144
                            804 	.globl _UPHY14_CMN_ANAREG_TOP_143
                            805 	.globl _UPHY14_CMN_ANAREG_TOP_142
                            806 	.globl _UPHY14_CMN_ANAREG_TOP_141
                            807 	.globl _UPHY14_CMN_ANAREG_TOP_140
                            808 	.globl _UPHY14_CMN_ANAREG_TOP_139
                            809 	.globl _UPHY14_CMN_ANAREG_TOP_138
                            810 	.globl _UPHY14_CMN_ANAREG_TOP_137
                            811 	.globl _UPHY14_CMN_ANAREG_TOP_136
                            812 	.globl _UPHY14_CMN_ANAREG_TOP_135
                            813 	.globl _UPHY14_CMN_ANAREG_TOP_134
                            814 	.globl _UPHY14_CMN_ANAREG_TOP_133
                            815 	.globl _UPHY14_CMN_ANAREG_TOP_132
                            816 	.globl _UPHY14_CMN_ANAREG_TOP_131
                            817 	.globl _UPHY14_CMN_ANAREG_TOP_130
                            818 	.globl _UPHY14_CMN_ANAREG_TOP_129
                            819 	.globl _UPHY14_CMN_ANAREG_TOP_128
                            820 	.globl _ANA_DFEO_REG_0B
                            821 	.globl _ANA_DFEO_REG_0A
                            822 	.globl _ANA_DFEO_REG_09
                            823 	.globl _ANA_DFEO_REG_08
                            824 	.globl _ANA_DFEO_REG_07
                            825 	.globl _ANA_DFEO_REG_06
                            826 	.globl _ANA_DFEO_REG_05
                            827 	.globl _ANA_DFEO_REG_04
                            828 	.globl _ANA_DFEO_REG_03
                            829 	.globl _ANA_DFEO_REG_02
                            830 	.globl _ANA_DFEO_REG_01
                            831 	.globl _ANA_DFEO_REG_00
                            832 	.globl _ANA_DFEO_REG_27
                            833 	.globl _ANA_DFEO_REG_26
                            834 	.globl _ANA_DFEO_REG_25
                            835 	.globl _ANA_DFEO_REG_24
                            836 	.globl _ANA_DFEO_REG_23
                            837 	.globl _ANA_DFEO_REG_22
                            838 	.globl _ANA_DFEO_REG_21
                            839 	.globl _ANA_DFEO_REG_20
                            840 	.globl _ANA_DFEO_REG_1F
                            841 	.globl _ANA_DFEO_REG_1E
                            842 	.globl _ANA_DFEO_REG_1D
                            843 	.globl _ANA_DFEO_REG_1C
                            844 	.globl _ANA_DFEO_REG_1B
                            845 	.globl _ANA_DFEO_REG_1A
                            846 	.globl _ANA_DFEO_REG_19
                            847 	.globl _ANA_DFEO_REG_18
                            848 	.globl _ANA_DFEO_REG_17
                            849 	.globl _ANA_DFEO_REG_16
                            850 	.globl _ANA_DFEO_REG_15
                            851 	.globl _ANA_DFEO_REG_14
                            852 	.globl _ANA_DFEO_REG_13
                            853 	.globl _ANA_DFEO_REG_12
                            854 	.globl _ANA_DFEO_REG_11
                            855 	.globl _ANA_DFEO_REG_10
                            856 	.globl _ANA_DFEO_REG_0F
                            857 	.globl _ANA_DFEO_REG_0E
                            858 	.globl _ANA_DFEO_REG_0D
                            859 	.globl _ANA_DFEO_REG_0C
                            860 	.globl _ANA_DFEE_REG_1D
                            861 	.globl _ANA_DFEE_REG_1C
                            862 	.globl _ANA_DFEE_REG_1B
                            863 	.globl _ANA_DFEE_REG_1A
                            864 	.globl _ANA_DFEE_REG_19
                            865 	.globl _ANA_DFEE_REG_18
                            866 	.globl _ANA_DFEE_REG_17
                            867 	.globl _ANA_DFEE_REG_16
                            868 	.globl _ANA_DFEE_REG_15
                            869 	.globl _ANA_DFEE_REG_14
                            870 	.globl _ANA_DFEE_REG_13
                            871 	.globl _ANA_DFEE_REG_12
                            872 	.globl _ANA_DFEE_REG_11
                            873 	.globl _ANA_DFEE_REG_10
                            874 	.globl _ANA_DFEE_REG_0F
                            875 	.globl _ANA_DFEE_REG_0E
                            876 	.globl _ANA_DFEE_REG_0D
                            877 	.globl _ANA_DFEE_REG_0C
                            878 	.globl _ANA_DFEE_REG_0B
                            879 	.globl _ANA_DFEE_REG_0A
                            880 	.globl _ANA_DFEE_REG_09
                            881 	.globl _ANA_DFEE_REG_08
                            882 	.globl _ANA_DFEE_REG_07
                            883 	.globl _ANA_DFEE_REG_06
                            884 	.globl _ANA_DFEE_REG_05
                            885 	.globl _ANA_DFEE_REG_04
                            886 	.globl _ANA_DFEE_REG_03
                            887 	.globl _ANA_DFEE_REG_02
                            888 	.globl _ANA_DFEE_REG_01
                            889 	.globl _ANA_DFEE_REG_00
                            890 	.globl _ANA_DFEE_REG_27
                            891 	.globl _ANA_DFEE_REG_26
                            892 	.globl _ANA_DFEE_REG_25
                            893 	.globl _ANA_DFEE_REG_24
                            894 	.globl _ANA_DFEE_REG_23
                            895 	.globl _ANA_DFEE_REG_22
                            896 	.globl _ANA_DFEE_REG_21
                            897 	.globl _ANA_DFEE_REG_20
                            898 	.globl _ANA_DFEE_REG_1F
                            899 	.globl _ANA_DFEE_REG_1E
                            900 	.globl _UPHY14_TRX_ANAREG_BOT_32
                            901 	.globl _UPHY14_TRX_ANAREG_BOT_31
                            902 	.globl _UPHY14_TRX_ANAREG_BOT_30
                            903 	.globl _UPHY14_TRX_ANAREG_BOT_29
                            904 	.globl _UPHY14_TRX_ANAREG_BOT_28
                            905 	.globl _UPHY14_TRX_ANAREG_BOT_27
                            906 	.globl _UPHY14_TRX_ANAREG_BOT_26
                            907 	.globl _UPHY14_TRX_ANAREG_BOT_25
                            908 	.globl _UPHY14_TRX_ANAREG_BOT_24
                            909 	.globl _UPHY14_TRX_ANAREG_BOT_23
                            910 	.globl _UPHY14_TRX_ANAREG_BOT_22
                            911 	.globl _UPHY14_TRX_ANAREG_BOT_21
                            912 	.globl _UPHY14_TRX_ANAREG_BOT_20
                            913 	.globl _UPHY14_TRX_ANAREG_BOT_19
                            914 	.globl _UPHY14_TRX_ANAREG_BOT_18
                            915 	.globl _UPHY14_TRX_ANAREG_BOT_17
                            916 	.globl _UPHY14_TRX_ANAREG_BOT_16
                            917 	.globl _UPHY14_TRX_ANAREG_BOT_15
                            918 	.globl _UPHY14_TRX_ANAREG_BOT_14
                            919 	.globl _UPHY14_TRX_ANAREG_BOT_13
                            920 	.globl _UPHY14_TRX_ANAREG_BOT_12
                            921 	.globl _UPHY14_TRX_ANAREG_BOT_11
                            922 	.globl _UPHY14_TRX_ANAREG_BOT_10
                            923 	.globl _UPHY14_TRX_ANAREG_BOT_9
                            924 	.globl _UPHY14_TRX_ANAREG_BOT_8
                            925 	.globl _UPHY14_TRX_ANAREG_BOT_7
                            926 	.globl _UPHY14_TRX_ANAREG_BOT_6
                            927 	.globl _UPHY14_TRX_ANAREG_BOT_5
                            928 	.globl _UPHY14_TRX_ANAREG_BOT_4
                            929 	.globl _UPHY14_TRX_ANAREG_BOT_3
                            930 	.globl _UPHY14_TRX_ANAREG_BOT_2
                            931 	.globl _UPHY14_TRX_ANAREG_BOT_1
                            932 	.globl _UPHY14_TRX_ANAREG_BOT_0
                            933 	.globl _UPHY14_TRX_ANAREG_TOP_157
                            934 	.globl _UPHY14_TRX_ANAREG_TOP_156
                            935 	.globl _UPHY14_TRX_ANAREG_TOP_155
                            936 	.globl _UPHY14_TRX_ANAREG_TOP_154
                            937 	.globl _UPHY14_TRX_ANAREG_TOP_153
                            938 	.globl _UPHY14_TRX_ANAREG_TOP_152
                            939 	.globl _UPHY14_TRX_ANAREG_TOP_151
                            940 	.globl _UPHY14_TRX_ANAREG_TOP_150
                            941 	.globl _UPHY14_TRX_ANAREG_TOP_149
                            942 	.globl _UPHY14_TRX_ANAREG_TOP_148
                            943 	.globl _UPHY14_TRX_ANAREG_TOP_147
                            944 	.globl _UPHY14_TRX_ANAREG_TOP_146
                            945 	.globl _UPHY14_TRX_ANAREG_TOP_145
                            946 	.globl _UPHY14_TRX_ANAREG_TOP_144
                            947 	.globl _UPHY14_TRX_ANAREG_TOP_143
                            948 	.globl _UPHY14_TRX_ANAREG_TOP_142
                            949 	.globl _UPHY14_TRX_ANAREG_TOP_141
                            950 	.globl _UPHY14_TRX_ANAREG_TOP_140
                            951 	.globl _UPHY14_TRX_ANAREG_TOP_139
                            952 	.globl _UPHY14_TRX_ANAREG_TOP_138
                            953 	.globl _UPHY14_TRX_ANAREG_TOP_137
                            954 	.globl _UPHY14_TRX_ANAREG_TOP_136
                            955 	.globl _UPHY14_TRX_ANAREG_TOP_135
                            956 	.globl _UPHY14_TRX_ANAREG_TOP_134
                            957 	.globl _UPHY14_TRX_ANAREG_TOP_133
                            958 	.globl _UPHY14_TRX_ANAREG_TOP_132
                            959 	.globl _UPHY14_TRX_ANAREG_TOP_131
                            960 	.globl _UPHY14_TRX_ANAREG_TOP_130
                            961 	.globl _UPHY14_TRX_ANAREG_TOP_129
                            962 	.globl _UPHY14_TRX_ANAREG_TOP_128
                            963 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_143
                            964 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_142
                            965 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_141
                            966 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_140
                            967 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_139
                            968 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_138
                            969 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_137
                            970 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_136
                            971 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_135
                            972 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_134
                            973 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_133
                            974 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_132
                            975 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_131
                            976 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_130
                            977 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_129
                            978 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_128
                            979 	.globl _cdr_phase_opt
                            980 	.globl _cdr_phase_opt_init
                            981 	.globl _cdr_phase_maxf0p
                            982 	.globl _cdr_phase_midpoint
                            983 	.globl _cdr_phase_opt_final_processing
                            984 	.globl _calculatef0p
                            985 	.globl _advanced_clk_align
                            986 	.globl _dfe_adapt_align
                            987 ;--------------------------------------------------------
                            988 ; special function registers
                            989 ;--------------------------------------------------------
                            990 	.area RSEG    (ABS,DATA)
   0000                     991 	.org 0x0000
                    0080    992 _P0	=	0x0080
                    0082    993 _DPL	=	0x0082
                    0083    994 _DPH	=	0x0083
                    0086    995 _WDTREL	=	0x0086
                    0087    996 _PCON	=	0x0087
                    0088    997 _TCON	=	0x0088
                    0089    998 _TMOD	=	0x0089
                    008A    999 _TL0	=	0x008a
                    008B   1000 _TL1	=	0x008b
                    008C   1001 _TH0	=	0x008c
                    008D   1002 _TH1	=	0x008d
                    008E   1003 _CKCON	=	0x008e
                    0090   1004 _P1	=	0x0090
                    0092   1005 _DPS	=	0x0092
                    0094   1006 _PSBANK	=	0x0094
                    0098   1007 _SCON	=	0x0098
                    0099   1008 _SBUF	=	0x0099
                    009A   1009 _IEN2	=	0x009a
                    00A0   1010 _P2	=	0x00a0
                    00A1   1011 _DMAS0	=	0x00a1
                    00A2   1012 _DMAS1	=	0x00a2
                    00A3   1013 _DMAS2	=	0x00a3
                    00A4   1014 _DMAT0	=	0x00a4
                    00A5   1015 _DMAT1	=	0x00a5
                    00A6   1016 _DMAT2	=	0x00a6
                    00A8   1017 _IEN0	=	0x00a8
                    00A9   1018 _IP0	=	0x00a9
                    00AA   1019 _S0RELL	=	0x00aa
                    00B0   1020 _P3	=	0x00b0
                    00B1   1021 _DMAC0	=	0x00b1
                    00B2   1022 _DMAC1	=	0x00b2
                    00B3   1023 _DMAC2	=	0x00b3
                    00B4   1024 _DMASEL	=	0x00b4
                    00B5   1025 _DMAM0	=	0x00b5
                    00B6   1026 _DMAM1	=	0x00b6
                    00B8   1027 _IEN1	=	0x00b8
                    00B9   1028 _IP1	=	0x00b9
                    00BA   1029 _S0RELH	=	0x00ba
                    00C0   1030 _IRCON	=	0x00c0
                    00C1   1031 _CCEN	=	0x00c1
                    00C8   1032 _T2CON	=	0x00c8
                    00CA   1033 _RCAP2L	=	0x00ca
                    00CB   1034 _RCAP2H	=	0x00cb
                    00CC   1035 _TL2	=	0x00cc
                    00CD   1036 _TH2	=	0x00cd
                    00D0   1037 _PSW	=	0x00d0
                    00D8   1038 _ADCON	=	0x00d8
                    00E0   1039 _ACC	=	0x00e0
                    00E8   1040 _EIE	=	0x00e8
                    00F0   1041 _B	=	0x00f0
                    00F7   1042 _SRST	=	0x00f7
                    8C8A   1043 _TMR0	=	0x8c8a
                    8D8B   1044 _TMR1	=	0x8d8b
                    CDCC   1045 _TMR2	=	0xcdcc
                    A2A1   1046 _DMASA	=	0xa2a1
                    A5A4   1047 _DMATA	=	0xa5a4
                    B2B1   1048 _DMAC	=	0xb2b1
                           1049 ;--------------------------------------------------------
                           1050 ; special function bits
                           1051 ;--------------------------------------------------------
                           1052 	.area RSEG    (ABS,DATA)
   0000                    1053 	.org 0x0000
                    0080   1054 _P0_0	=	0x0080
                    0081   1055 _P0_1	=	0x0081
                    0082   1056 _P0_2	=	0x0082
                    0083   1057 _P0_3	=	0x0083
                    0084   1058 _P0_4	=	0x0084
                    0085   1059 _P0_5	=	0x0085
                    0086   1060 _P0_6	=	0x0086
                    0087   1061 _P0_7	=	0x0087
                    0090   1062 _P1_0	=	0x0090
                    0091   1063 _P1_1	=	0x0091
                    0092   1064 _P1_2	=	0x0092
                    0093   1065 _P1_3	=	0x0093
                    0094   1066 _P1_4	=	0x0094
                    0095   1067 _P1_5	=	0x0095
                    0096   1068 _P1_6	=	0x0096
                    0097   1069 _P1_7	=	0x0097
                    00A0   1070 _P2_0	=	0x00a0
                    00A1   1071 _P2_1	=	0x00a1
                    00A2   1072 _P2_2	=	0x00a2
                    00A3   1073 _P2_3	=	0x00a3
                    00A4   1074 _P2_4	=	0x00a4
                    00A5   1075 _P2_5	=	0x00a5
                    00A6   1076 _P2_6	=	0x00a6
                    00A7   1077 _P2_7	=	0x00a7
                    00B0   1078 _P3_0	=	0x00b0
                    00B1   1079 _P3_1	=	0x00b1
                    00B2   1080 _P3_2	=	0x00b2
                    00B3   1081 _P3_3	=	0x00b3
                    00B4   1082 _P3_4	=	0x00b4
                    00B5   1083 _P3_5	=	0x00b5
                    00B6   1084 _P3_6	=	0x00b6
                    00B7   1085 _P3_7	=	0x00b7
                    0088   1086 _IT0	=	0x0088
                    0089   1087 _IE0	=	0x0089
                    008A   1088 _IT1	=	0x008a
                    008B   1089 _IE1	=	0x008b
                    008C   1090 _TR0	=	0x008c
                    008D   1091 _TF0	=	0x008d
                    008E   1092 _TR1	=	0x008e
                    008F   1093 _TF1	=	0x008f
                    00A8   1094 _EX0	=	0x00a8
                    00A9   1095 _ET0	=	0x00a9
                    00AA   1096 _EX1	=	0x00aa
                    00AB   1097 _ET1	=	0x00ab
                    00AC   1098 _ES	=	0x00ac
                    00AD   1099 _ET2	=	0x00ad
                    00AE   1100 _WDT	=	0x00ae
                    00AF   1101 _EA	=	0x00af
                    00B8   1102 _EX7	=	0x00b8
                    00B9   1103 _EX2	=	0x00b9
                    00BA   1104 _EX3	=	0x00ba
                    00BB   1105 _EX4	=	0x00bb
                    00BC   1106 _EX5	=	0x00bc
                    00BD   1107 _EX6	=	0x00bd
                    00BE   1108 _PS1	=	0x00be
                    009A   1109 _ES1	=	0x009a
                    009B   1110 _EX8	=	0x009b
                    009C   1111 _EX9	=	0x009c
                    009D   1112 _EX10	=	0x009d
                    009E   1113 _EX11	=	0x009e
                    009F   1114 _EX12	=	0x009f
                    0098   1115 _RI	=	0x0098
                    0099   1116 _TI	=	0x0099
                    00C6   1117 _TF2	=	0x00c6
                           1118 ;--------------------------------------------------------
                           1119 ; overlayable register banks
                           1120 ;--------------------------------------------------------
                           1121 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1122 	.ds 8
                           1123 ;--------------------------------------------------------
                           1124 ; internal ram data
                           1125 ;--------------------------------------------------------
                           1126 	.area DSEG    (DATA)
                           1127 ;--------------------------------------------------------
                           1128 ; overlayable items in internal ram 
                           1129 ;--------------------------------------------------------
                           1130 	.area OSEG    (OVR,DATA)
                           1131 ;--------------------------------------------------------
                           1132 ; indirectly addressable internal ram data
                           1133 ;--------------------------------------------------------
                           1134 	.area ISEG    (DATA)
                           1135 ;--------------------------------------------------------
                           1136 ; absolute internal ram data
                           1137 ;--------------------------------------------------------
                           1138 	.area IABS    (ABS,DATA)
                           1139 	.area IABS    (ABS,DATA)
                           1140 ;--------------------------------------------------------
                           1141 ; bit data
                           1142 ;--------------------------------------------------------
                           1143 	.area BSEG    (BIT)
                           1144 ;--------------------------------------------------------
                           1145 ; paged external ram data
                           1146 ;--------------------------------------------------------
                           1147 	.area PSEG    (PAG,XDATA)
                           1148 ;--------------------------------------------------------
                           1149 ; external ram data
                           1150 ;--------------------------------------------------------
                           1151 	.area XSEG    (XDATA)
                    1000   1152 _UPHY14_TRX_LANEPLL_ANAREG_TOP_128	=	0x1000
                    1004   1153 _UPHY14_TRX_LANEPLL_ANAREG_TOP_129	=	0x1004
                    1008   1154 _UPHY14_TRX_LANEPLL_ANAREG_TOP_130	=	0x1008
                    100C   1155 _UPHY14_TRX_LANEPLL_ANAREG_TOP_131	=	0x100c
                    1010   1156 _UPHY14_TRX_LANEPLL_ANAREG_TOP_132	=	0x1010
                    1014   1157 _UPHY14_TRX_LANEPLL_ANAREG_TOP_133	=	0x1014
                    1018   1158 _UPHY14_TRX_LANEPLL_ANAREG_TOP_134	=	0x1018
                    101C   1159 _UPHY14_TRX_LANEPLL_ANAREG_TOP_135	=	0x101c
                    1020   1160 _UPHY14_TRX_LANEPLL_ANAREG_TOP_136	=	0x1020
                    1024   1161 _UPHY14_TRX_LANEPLL_ANAREG_TOP_137	=	0x1024
                    1028   1162 _UPHY14_TRX_LANEPLL_ANAREG_TOP_138	=	0x1028
                    102C   1163 _UPHY14_TRX_LANEPLL_ANAREG_TOP_139	=	0x102c
                    1030   1164 _UPHY14_TRX_LANEPLL_ANAREG_TOP_140	=	0x1030
                    1034   1165 _UPHY14_TRX_LANEPLL_ANAREG_TOP_141	=	0x1034
                    1038   1166 _UPHY14_TRX_LANEPLL_ANAREG_TOP_142	=	0x1038
                    103C   1167 _UPHY14_TRX_LANEPLL_ANAREG_TOP_143	=	0x103c
                    0200   1168 _UPHY14_TRX_ANAREG_TOP_128	=	0x0200
                    0204   1169 _UPHY14_TRX_ANAREG_TOP_129	=	0x0204
                    0208   1170 _UPHY14_TRX_ANAREG_TOP_130	=	0x0208
                    020C   1171 _UPHY14_TRX_ANAREG_TOP_131	=	0x020c
                    0210   1172 _UPHY14_TRX_ANAREG_TOP_132	=	0x0210
                    0214   1173 _UPHY14_TRX_ANAREG_TOP_133	=	0x0214
                    0218   1174 _UPHY14_TRX_ANAREG_TOP_134	=	0x0218
                    021C   1175 _UPHY14_TRX_ANAREG_TOP_135	=	0x021c
                    0220   1176 _UPHY14_TRX_ANAREG_TOP_136	=	0x0220
                    0224   1177 _UPHY14_TRX_ANAREG_TOP_137	=	0x0224
                    0228   1178 _UPHY14_TRX_ANAREG_TOP_138	=	0x0228
                    022C   1179 _UPHY14_TRX_ANAREG_TOP_139	=	0x022c
                    0230   1180 _UPHY14_TRX_ANAREG_TOP_140	=	0x0230
                    0234   1181 _UPHY14_TRX_ANAREG_TOP_141	=	0x0234
                    0238   1182 _UPHY14_TRX_ANAREG_TOP_142	=	0x0238
                    023C   1183 _UPHY14_TRX_ANAREG_TOP_143	=	0x023c
                    0240   1184 _UPHY14_TRX_ANAREG_TOP_144	=	0x0240
                    0244   1185 _UPHY14_TRX_ANAREG_TOP_145	=	0x0244
                    0248   1186 _UPHY14_TRX_ANAREG_TOP_146	=	0x0248
                    024C   1187 _UPHY14_TRX_ANAREG_TOP_147	=	0x024c
                    0250   1188 _UPHY14_TRX_ANAREG_TOP_148	=	0x0250
                    0254   1189 _UPHY14_TRX_ANAREG_TOP_149	=	0x0254
                    0258   1190 _UPHY14_TRX_ANAREG_TOP_150	=	0x0258
                    025C   1191 _UPHY14_TRX_ANAREG_TOP_151	=	0x025c
                    0260   1192 _UPHY14_TRX_ANAREG_TOP_152	=	0x0260
                    0264   1193 _UPHY14_TRX_ANAREG_TOP_153	=	0x0264
                    0268   1194 _UPHY14_TRX_ANAREG_TOP_154	=	0x0268
                    026C   1195 _UPHY14_TRX_ANAREG_TOP_155	=	0x026c
                    0270   1196 _UPHY14_TRX_ANAREG_TOP_156	=	0x0270
                    0274   1197 _UPHY14_TRX_ANAREG_TOP_157	=	0x0274
                    0000   1198 _UPHY14_TRX_ANAREG_BOT_0	=	0x0000
                    0004   1199 _UPHY14_TRX_ANAREG_BOT_1	=	0x0004
                    0008   1200 _UPHY14_TRX_ANAREG_BOT_2	=	0x0008
                    000C   1201 _UPHY14_TRX_ANAREG_BOT_3	=	0x000c
                    0010   1202 _UPHY14_TRX_ANAREG_BOT_4	=	0x0010
                    0014   1203 _UPHY14_TRX_ANAREG_BOT_5	=	0x0014
                    0018   1204 _UPHY14_TRX_ANAREG_BOT_6	=	0x0018
                    001C   1205 _UPHY14_TRX_ANAREG_BOT_7	=	0x001c
                    0020   1206 _UPHY14_TRX_ANAREG_BOT_8	=	0x0020
                    0024   1207 _UPHY14_TRX_ANAREG_BOT_9	=	0x0024
                    0028   1208 _UPHY14_TRX_ANAREG_BOT_10	=	0x0028
                    002C   1209 _UPHY14_TRX_ANAREG_BOT_11	=	0x002c
                    0030   1210 _UPHY14_TRX_ANAREG_BOT_12	=	0x0030
                    0034   1211 _UPHY14_TRX_ANAREG_BOT_13	=	0x0034
                    0038   1212 _UPHY14_TRX_ANAREG_BOT_14	=	0x0038
                    003C   1213 _UPHY14_TRX_ANAREG_BOT_15	=	0x003c
                    0040   1214 _UPHY14_TRX_ANAREG_BOT_16	=	0x0040
                    0044   1215 _UPHY14_TRX_ANAREG_BOT_17	=	0x0044
                    0048   1216 _UPHY14_TRX_ANAREG_BOT_18	=	0x0048
                    004C   1217 _UPHY14_TRX_ANAREG_BOT_19	=	0x004c
                    0050   1218 _UPHY14_TRX_ANAREG_BOT_20	=	0x0050
                    0054   1219 _UPHY14_TRX_ANAREG_BOT_21	=	0x0054
                    0058   1220 _UPHY14_TRX_ANAREG_BOT_22	=	0x0058
                    005C   1221 _UPHY14_TRX_ANAREG_BOT_23	=	0x005c
                    0060   1222 _UPHY14_TRX_ANAREG_BOT_24	=	0x0060
                    0064   1223 _UPHY14_TRX_ANAREG_BOT_25	=	0x0064
                    0068   1224 _UPHY14_TRX_ANAREG_BOT_26	=	0x0068
                    006C   1225 _UPHY14_TRX_ANAREG_BOT_27	=	0x006c
                    0070   1226 _UPHY14_TRX_ANAREG_BOT_28	=	0x0070
                    0074   1227 _UPHY14_TRX_ANAREG_BOT_29	=	0x0074
                    0078   1228 _UPHY14_TRX_ANAREG_BOT_30	=	0x0078
                    007C   1229 _UPHY14_TRX_ANAREG_BOT_31	=	0x007c
                    0080   1230 _UPHY14_TRX_ANAREG_BOT_32	=	0x0080
                    0478   1231 _ANA_DFEE_REG_1E	=	0x0478
                    047C   1232 _ANA_DFEE_REG_1F	=	0x047c
                    0480   1233 _ANA_DFEE_REG_20	=	0x0480
                    0484   1234 _ANA_DFEE_REG_21	=	0x0484
                    0488   1235 _ANA_DFEE_REG_22	=	0x0488
                    048C   1236 _ANA_DFEE_REG_23	=	0x048c
                    0490   1237 _ANA_DFEE_REG_24	=	0x0490
                    0494   1238 _ANA_DFEE_REG_25	=	0x0494
                    0498   1239 _ANA_DFEE_REG_26	=	0x0498
                    049C   1240 _ANA_DFEE_REG_27	=	0x049c
                    0400   1241 _ANA_DFEE_REG_00	=	0x0400
                    0404   1242 _ANA_DFEE_REG_01	=	0x0404
                    0408   1243 _ANA_DFEE_REG_02	=	0x0408
                    040C   1244 _ANA_DFEE_REG_03	=	0x040c
                    0410   1245 _ANA_DFEE_REG_04	=	0x0410
                    0414   1246 _ANA_DFEE_REG_05	=	0x0414
                    0418   1247 _ANA_DFEE_REG_06	=	0x0418
                    041C   1248 _ANA_DFEE_REG_07	=	0x041c
                    0420   1249 _ANA_DFEE_REG_08	=	0x0420
                    0424   1250 _ANA_DFEE_REG_09	=	0x0424
                    0428   1251 _ANA_DFEE_REG_0A	=	0x0428
                    042C   1252 _ANA_DFEE_REG_0B	=	0x042c
                    0430   1253 _ANA_DFEE_REG_0C	=	0x0430
                    0434   1254 _ANA_DFEE_REG_0D	=	0x0434
                    0438   1255 _ANA_DFEE_REG_0E	=	0x0438
                    043C   1256 _ANA_DFEE_REG_0F	=	0x043c
                    0440   1257 _ANA_DFEE_REG_10	=	0x0440
                    0444   1258 _ANA_DFEE_REG_11	=	0x0444
                    0448   1259 _ANA_DFEE_REG_12	=	0x0448
                    044C   1260 _ANA_DFEE_REG_13	=	0x044c
                    0450   1261 _ANA_DFEE_REG_14	=	0x0450
                    0454   1262 _ANA_DFEE_REG_15	=	0x0454
                    0458   1263 _ANA_DFEE_REG_16	=	0x0458
                    045C   1264 _ANA_DFEE_REG_17	=	0x045c
                    0460   1265 _ANA_DFEE_REG_18	=	0x0460
                    0464   1266 _ANA_DFEE_REG_19	=	0x0464
                    0468   1267 _ANA_DFEE_REG_1A	=	0x0468
                    046C   1268 _ANA_DFEE_REG_1B	=	0x046c
                    0470   1269 _ANA_DFEE_REG_1C	=	0x0470
                    0474   1270 _ANA_DFEE_REG_1D	=	0x0474
                    0830   1271 _ANA_DFEO_REG_0C	=	0x0830
                    0834   1272 _ANA_DFEO_REG_0D	=	0x0834
                    0838   1273 _ANA_DFEO_REG_0E	=	0x0838
                    083C   1274 _ANA_DFEO_REG_0F	=	0x083c
                    0840   1275 _ANA_DFEO_REG_10	=	0x0840
                    0844   1276 _ANA_DFEO_REG_11	=	0x0844
                    0848   1277 _ANA_DFEO_REG_12	=	0x0848
                    084C   1278 _ANA_DFEO_REG_13	=	0x084c
                    0850   1279 _ANA_DFEO_REG_14	=	0x0850
                    0854   1280 _ANA_DFEO_REG_15	=	0x0854
                    0858   1281 _ANA_DFEO_REG_16	=	0x0858
                    085C   1282 _ANA_DFEO_REG_17	=	0x085c
                    0860   1283 _ANA_DFEO_REG_18	=	0x0860
                    0864   1284 _ANA_DFEO_REG_19	=	0x0864
                    0868   1285 _ANA_DFEO_REG_1A	=	0x0868
                    086C   1286 _ANA_DFEO_REG_1B	=	0x086c
                    0870   1287 _ANA_DFEO_REG_1C	=	0x0870
                    0874   1288 _ANA_DFEO_REG_1D	=	0x0874
                    0878   1289 _ANA_DFEO_REG_1E	=	0x0878
                    087C   1290 _ANA_DFEO_REG_1F	=	0x087c
                    0880   1291 _ANA_DFEO_REG_20	=	0x0880
                    0884   1292 _ANA_DFEO_REG_21	=	0x0884
                    0888   1293 _ANA_DFEO_REG_22	=	0x0888
                    088C   1294 _ANA_DFEO_REG_23	=	0x088c
                    0890   1295 _ANA_DFEO_REG_24	=	0x0890
                    0894   1296 _ANA_DFEO_REG_25	=	0x0894
                    0898   1297 _ANA_DFEO_REG_26	=	0x0898
                    089C   1298 _ANA_DFEO_REG_27	=	0x089c
                    0800   1299 _ANA_DFEO_REG_00	=	0x0800
                    0804   1300 _ANA_DFEO_REG_01	=	0x0804
                    0808   1301 _ANA_DFEO_REG_02	=	0x0808
                    080C   1302 _ANA_DFEO_REG_03	=	0x080c
                    0810   1303 _ANA_DFEO_REG_04	=	0x0810
                    0814   1304 _ANA_DFEO_REG_05	=	0x0814
                    0818   1305 _ANA_DFEO_REG_06	=	0x0818
                    081C   1306 _ANA_DFEO_REG_07	=	0x081c
                    0820   1307 _ANA_DFEO_REG_08	=	0x0820
                    0824   1308 _ANA_DFEO_REG_09	=	0x0824
                    0828   1309 _ANA_DFEO_REG_0A	=	0x0828
                    082C   1310 _ANA_DFEO_REG_0B	=	0x082c
                    8200   1311 _UPHY14_CMN_ANAREG_TOP_128	=	0x8200
                    8204   1312 _UPHY14_CMN_ANAREG_TOP_129	=	0x8204
                    8208   1313 _UPHY14_CMN_ANAREG_TOP_130	=	0x8208
                    820C   1314 _UPHY14_CMN_ANAREG_TOP_131	=	0x820c
                    8210   1315 _UPHY14_CMN_ANAREG_TOP_132	=	0x8210
                    8214   1316 _UPHY14_CMN_ANAREG_TOP_133	=	0x8214
                    8218   1317 _UPHY14_CMN_ANAREG_TOP_134	=	0x8218
                    821C   1318 _UPHY14_CMN_ANAREG_TOP_135	=	0x821c
                    8220   1319 _UPHY14_CMN_ANAREG_TOP_136	=	0x8220
                    8224   1320 _UPHY14_CMN_ANAREG_TOP_137	=	0x8224
                    8228   1321 _UPHY14_CMN_ANAREG_TOP_138	=	0x8228
                    822C   1322 _UPHY14_CMN_ANAREG_TOP_139	=	0x822c
                    8230   1323 _UPHY14_CMN_ANAREG_TOP_140	=	0x8230
                    8234   1324 _UPHY14_CMN_ANAREG_TOP_141	=	0x8234
                    8238   1325 _UPHY14_CMN_ANAREG_TOP_142	=	0x8238
                    823C   1326 _UPHY14_CMN_ANAREG_TOP_143	=	0x823c
                    8240   1327 _UPHY14_CMN_ANAREG_TOP_144	=	0x8240
                    8244   1328 _UPHY14_CMN_ANAREG_TOP_145	=	0x8244
                    8248   1329 _UPHY14_CMN_ANAREG_TOP_146	=	0x8248
                    824C   1330 _UPHY14_CMN_ANAREG_TOP_147	=	0x824c
                    8250   1331 _UPHY14_CMN_ANAREG_TOP_148	=	0x8250
                    8254   1332 _UPHY14_CMN_ANAREG_TOP_149	=	0x8254
                    8258   1333 _UPHY14_CMN_ANAREG_TOP_150	=	0x8258
                    825C   1334 _UPHY14_CMN_ANAREG_TOP_151	=	0x825c
                    8260   1335 _UPHY14_CMN_ANAREG_TOP_152	=	0x8260
                    8264   1336 _UPHY14_CMN_ANAREG_TOP_153	=	0x8264
                    8268   1337 _UPHY14_CMN_ANAREG_TOP_154	=	0x8268
                    826C   1338 _UPHY14_CMN_ANAREG_TOP_155	=	0x826c
                    8270   1339 _UPHY14_CMN_ANAREG_TOP_156	=	0x8270
                    8274   1340 _UPHY14_CMN_ANAREG_TOP_157	=	0x8274
                    8278   1341 _UPHY14_CMN_ANAREG_TOP_158	=	0x8278
                    827C   1342 _UPHY14_CMN_ANAREG_TOP_159	=	0x827c
                    8280   1343 _UPHY14_CMN_ANAREG_TOP_160	=	0x8280
                    8284   1344 _UPHY14_CMN_ANAREG_TOP_161	=	0x8284
                    8288   1345 _UPHY14_CMN_ANAREG_TOP_162	=	0x8288
                    828C   1346 _UPHY14_CMN_ANAREG_TOP_163	=	0x828c
                    8290   1347 _UPHY14_CMN_ANAREG_TOP_164	=	0x8290
                    8294   1348 _UPHY14_CMN_ANAREG_TOP_165	=	0x8294
                    8298   1349 _UPHY14_CMN_ANAREG_TOP_166	=	0x8298
                    829C   1350 _UPHY14_CMN_ANAREG_TOP_167	=	0x829c
                    82A0   1351 _UPHY14_CMN_ANAREG_TOP_168	=	0x82a0
                    82A4   1352 _UPHY14_CMN_ANAREG_TOP_169	=	0x82a4
                    82A8   1353 _UPHY14_CMN_ANAREG_TOP_170	=	0x82a8
                    82AC   1354 _UPHY14_CMN_ANAREG_TOP_171	=	0x82ac
                    82B0   1355 _UPHY14_CMN_ANAREG_TOP_172	=	0x82b0
                    82B4   1356 _UPHY14_CMN_ANAREG_TOP_173	=	0x82b4
                    82B8   1357 _UPHY14_CMN_ANAREG_TOP_174	=	0x82b8
                    82BC   1358 _UPHY14_CMN_ANAREG_TOP_175	=	0x82bc
                    82C0   1359 _UPHY14_CMN_ANAREG_TOP_176	=	0x82c0
                    82C4   1360 _UPHY14_CMN_ANAREG_TOP_177	=	0x82c4
                    82C8   1361 _UPHY14_CMN_ANAREG_TOP_178	=	0x82c8
                    82CC   1362 _UPHY14_CMN_ANAREG_TOP_179	=	0x82cc
                    82D0   1363 _UPHY14_CMN_ANAREG_TOP_180	=	0x82d0
                    82D4   1364 _UPHY14_CMN_ANAREG_TOP_181	=	0x82d4
                    82D8   1365 _UPHY14_CMN_ANAREG_TOP_182	=	0x82d8
                    82DC   1366 _UPHY14_CMN_ANAREG_TOP_183	=	0x82dc
                    82E0   1367 _UPHY14_CMN_ANAREG_TOP_184	=	0x82e0
                    82E4   1368 _UPHY14_CMN_ANAREG_TOP_185	=	0x82e4
                    82E8   1369 _UPHY14_CMN_ANAREG_TOP_186	=	0x82e8
                    82EC   1370 _UPHY14_CMN_ANAREG_TOP_187	=	0x82ec
                    82F0   1371 _UPHY14_CMN_ANAREG_TOP_188	=	0x82f0
                    82F4   1372 _UPHY14_CMN_ANAREG_TOP_189	=	0x82f4
                    82F8   1373 _UPHY14_CMN_ANAREG_TOP_190	=	0x82f8
                    82FC   1374 _UPHY14_CMN_ANAREG_TOP_191	=	0x82fc
                    8300   1375 _UPHY14_CMN_ANAREG_TOP_192	=	0x8300
                    8304   1376 _UPHY14_CMN_ANAREG_TOP_193	=	0x8304
                    8308   1377 _UPHY14_CMN_ANAREG_TOP_194	=	0x8308
                    830C   1378 _UPHY14_CMN_ANAREG_TOP_195	=	0x830c
                    8310   1379 _UPHY14_CMN_ANAREG_TOP_196	=	0x8310
                    8314   1380 _UPHY14_CMN_ANAREG_TOP_197	=	0x8314
                    8318   1381 _UPHY14_CMN_ANAREG_TOP_198	=	0x8318
                    831C   1382 _UPHY14_CMN_ANAREG_TOP_199	=	0x831c
                    8320   1383 _UPHY14_CMN_ANAREG_TOP_200	=	0x8320
                    8324   1384 _UPHY14_CMN_ANAREG_TOP_201	=	0x8324
                    8328   1385 _UPHY14_CMN_ANAREG_TOP_202	=	0x8328
                    832C   1386 _UPHY14_CMN_ANAREG_TOP_203	=	0x832c
                    8330   1387 _UPHY14_CMN_ANAREG_TOP_204	=	0x8330
                    8334   1388 _UPHY14_CMN_ANAREG_TOP_205	=	0x8334
                    8338   1389 _UPHY14_CMN_ANAREG_TOP_206	=	0x8338
                    833C   1390 _UPHY14_CMN_ANAREG_TOP_207	=	0x833c
                    8340   1391 _UPHY14_CMN_ANAREG_TOP_208	=	0x8340
                    8344   1392 _UPHY14_CMN_ANAREG_TOP_209	=	0x8344
                    8348   1393 _UPHY14_CMN_ANAREG_TOP_210	=	0x8348
                    834C   1394 _UPHY14_CMN_ANAREG_TOP_211	=	0x834c
                    8350   1395 _UPHY14_CMN_ANAREG_TOP_212	=	0x8350
                    8354   1396 _UPHY14_CMN_ANAREG_TOP_213	=	0x8354
                    8358   1397 _UPHY14_CMN_ANAREG_TOP_214	=	0x8358
                    2000   1398 _PM_CTRL_TX_LANE_REG1_LANE	=	0x2000
                    2004   1399 _PM_CTRL_TX_LANE_REG2_LANE	=	0x2004
                    2008   1400 _INPUT_TX_PIN_REG0_LANE	=	0x2008
                    200C   1401 _INPUT_TX_PIN_REG1_LANE	=	0x200c
                    2010   1402 _INPUT_TX_PIN_REG2_LANE	=	0x2010
                    2014   1403 _INPUT_TX_PIN_REG3_LANE	=	0x2014
                    2018   1404 _PM_CTRL_INTERRUPT_REG1_LANE	=	0x2018
                    201C   1405 _PM_CTRL_INTERRUPT_REG2	=	0x201c
                    2020   1406 _CLKGEN_TX_LANE_REG1_LANE	=	0x2020
                    2024   1407 _TX_SPEED_CONVERT_LANE	=	0x2024
                    2028   1408 _SPD_CTRL_INTERRUPT_REG1_LANE	=	0x2028
                    202C   1409 _SPD_CTRL_INTERRUPT_REG2	=	0x202c
                    2030   1410 _SPD_CTRL_TX_LANE_REG1_LANE	=	0x2030
                    2034   1411 _TX_SYSTEM_LANE	=	0x2034
                    203C   1412 _INPUT_TX_PIN_REG4_LANE	=	0x203c
                    2040   1413 _TX_CALIBRATION_LANE	=	0x2040
                    2044   1414 _DIG_TX_RSVD_REG0	=	0x2044
                    2048   1415 _INPUT_TX_PIN_REG5_LANE	=	0x2048
                    204C   1416 __FIELDNAME__LANE	=	0x204c
                    2050   1417 _PM_CTRL_INTERRUPT_ISR_REG1_LANE	=	0x2050
                    2054   1418 _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE	=	0x2054
                    2058   1419 _ANALOG_TX_REALTIME_REG_1	=	0x2058
                    205C   1420 _MON_TOP	=	0x205c
                    2100   1421 _PM_CTRL_RX_LANE_REG1_LANE	=	0x2100
                    2104   1422 _RX_SYSTEM_LANE	=	0x2104
                    2108   1423 _INPUT_RX_PIN_REG0_LANE	=	0x2108
                    210C   1424 _INPUT_RX_PIN_REG1_LANE	=	0x210c
                    2110   1425 _INPUT_RX_PIN_REG2_LANE	=	0x2110
                    2114   1426 _SPD_CTRL_RX_LANE_REG1_LANE	=	0x2114
                    2118   1427 _DIG_RX_RSVD_REG0	=	0x2118
                    211C   1428 _CLKGEN_RX_LANE_REG1_LANE	=	0x211c
                    2120   1429 _FRAME_SYNC_DET_REG0	=	0x2120
                    2124   1430 _FRAME_SYNC_DET_REG1	=	0x2124
                    2128   1431 _FRAME_SYNC_DET_REG2	=	0x2128
                    212C   1432 _FRAME_SYNC_DET_REG3	=	0x212c
                    2130   1433 _FRAME_SYNC_DET_REG4	=	0x2130
                    2134   1434 _FRAME_SYNC_DET_REG5	=	0x2134
                    2138   1435 _FRAME_SYNC_DET_REG6	=	0x2138
                    213C   1436 _CDR_LOCK_REG	=	0x213c
                    2140   1437 _RX_LANE_INTERRUPT	=	0x2140
                    2144   1438 _RX_LANE_INTERRUPT_MASK	=	0x2144
                    2148   1439 _RX_DATA_PATH_REG	=	0x2148
                    214C   1440 _INPUT_RX_PIN_REG3_LANE	=	0x214c
                    2150   1441 _RX_CALIBRATION_REG	=	0x2150
                    2158   1442 _RX_LANE_INTERRUPT_REG1	=	0x2158
                    2160   1443 _DTL_REG0	=	0x2160
                    2164   1444 _DTL_REG1	=	0x2164
                    2168   1445 _DTL_REG2	=	0x2168
                    216C   1446 _DTL_REG3	=	0x216c
                    2170   1447 _SQ_REG0	=	0x2170
                    4000   1448 _LANE_CFG0	=	0x4000
                    4004   1449 _LANE_STATUS0	=	0x4004
                    4008   1450 _LANE_CFG_STATUS2_LANE	=	0x4008
                    400C   1451 _LANE_CFG2_LANE	=	0x400c
                    4010   1452 _LANE_CFG4	=	0x4010
                    4014   1453 _LANE_CFG_STATUS3_LANE	=	0x4014
                    4018   1454 _LANE_DP_PIE8_CFG0_LANE	=	0x4018
                    401C   1455 _LANE_USB_DP_CFG1_LANE	=	0x401c
                    4020   1456 _LANE_USB_DP_CFG2_LANE	=	0x4020
                    4024   1457 _LANE_EQ_CFG0_LANE	=	0x4024
                    4028   1458 _LANE_EQ_CFG1_LANE	=	0x4028
                    402C   1459 _LANE_PRESET_CFG0_LANE	=	0x402c
                    4030   1460 _LANE_PRESET_CFG2_LANE	=	0x4030
                    4034   1461 _LANE_PRESET_CFG4_LANE	=	0x4034
                    4038   1462 _LANE_PRESET_CFG6_LANE	=	0x4038
                    403C   1463 _LANE_PRESET_CFG8_LANE	=	0x403c
                    4040   1464 _LANE_PRESET_CFG10_LANE	=	0x4040
                    4044   1465 _LANE_PRESET_CFG12_LANE	=	0x4044
                    4048   1466 _LANE_PRESET_CFG14_LANE	=	0x4048
                    404C   1467 _LANE_PRESET_CFG16_LANE	=	0x404c
                    4050   1468 _LANE_COEFF_MAX0_LANE	=	0x4050
                    4054   1469 _LANE_REMOTE_SET_LANE	=	0x4054
                    4058   1470 _LANE_EQ_16G_CFG0_LANE	=	0x4058
                    405C   1471 _LANE_16G_PRESET_CFG0_LANE	=	0x405c
                    4060   1472 _LANE_16G_PRESET_CFG2_LANE	=	0x4060
                    4064   1473 _LANE_16G_PRESET_CFG4_LANE	=	0x4064
                    4068   1474 _LANE_16G_PRESET_CFG6_LANE	=	0x4068
                    406C   1475 _LANE_16G_PRESET_CFG8_LANE	=	0x406c
                    4070   1476 _LANE_16G_PRESET_CFG10_LANE	=	0x4070
                    4074   1477 _LANE_16G_PRESET_CFG12_LANE	=	0x4074
                    4078   1478 _LANE_16G_PRESET_CFG14_LANE	=	0x4078
                    407C   1479 _LANE_16G_PRESET_CFG16_LANE	=	0x407c
                    4080   1480 _LANE_EQ_32G_CFG0_LANE	=	0x4080
                    4084   1481 _LANE_32G_PRESET_CFG0_LANE	=	0x4084
                    4088   1482 _LANE_32G_PRESET_CFG2_LANE	=	0x4088
                    408C   1483 _LANE_32G_PRESET_CFG4_LANE	=	0x408c
                    4090   1484 _LANE_32G_PRESET_CFG6_LANE	=	0x4090
                    4094   1485 _LANE_32G_PRESET_CFG8_LANE	=	0x4094
                    4098   1486 _LANE_32G_PRESET_CFG10_LANE	=	0x4098
                    409C   1487 _LANE_32G_PRESET_CFG12_LANE	=	0x409c
                    40A0   1488 _LANE_32G_PRESET_CFG14_LANE	=	0x40a0
                    40A4   1489 _LANE_32G_PRESET_CFG16_LANE	=	0x40a4
                    2200   1490 _MCU_CONTROL_LANE	=	0x2200
                    2204   1491 _MCU_GPIO	=	0x2204
                    2208   1492 _CACHE_DEBUG0	=	0x2208
                    220C   1493 _CACHE_DEBUG1	=	0x220c
                    2210   1494 _LANE_SYSTEM0	=	0x2210
                    2230   1495 _MCU_STATUS0_LANE	=	0x2230
                    2234   1496 _MCU_STATUS1_LANE	=	0x2234
                    2238   1497 _MCU_STATUS2_LANE	=	0x2238
                    223C   1498 _MCU_STATUS3_LANE	=	0x223c
                    2240   1499 _MCU_INT0_CONTROL	=	0x2240
                    2244   1500 _MCU_INT1_CONTROL	=	0x2244
                    2248   1501 _MCU_INT2_CONTROL	=	0x2248
                    224C   1502 _MCU_INT3_CONTROL	=	0x224c
                    2250   1503 _MCU_INT4_CONTROL	=	0x2250
                    2254   1504 _MCU_INT5_CONTROL	=	0x2254
                    2258   1505 _MCU_INT6_CONTROL	=	0x2258
                    225C   1506 _MCU_INT7_CONTROL	=	0x225c
                    2260   1507 _MCU_INT8_CONTROL	=	0x2260
                    2264   1508 _MCU_INT9_CONTROL	=	0x2264
                    2268   1509 _MCU_INT10_CONTROL	=	0x2268
                    226C   1510 _MCU_INT11_CONTROL	=	0x226c
                    2270   1511 _MCU_INT12_CONTROL	=	0x2270
                    2274   1512 _MCU_TIMER_CONTROL	=	0x2274
                    2278   1513 _MCU_TIMER0_CONTROL	=	0x2278
                    227C   1514 _MCU_TIMER1_CONTROL	=	0x227c
                    2280   1515 _MCU_TIMER2_CONTROL	=	0x2280
                    2284   1516 _MCU_TIMER3_CONTROL	=	0x2284
                    2288   1517 _MCU_IRQ_LANE	=	0x2288
                    228C   1518 _MCU_IRQ_MASK_LANE	=	0x228c
                    2290   1519 _MCU_MEM_REG1_LANE	=	0x2290
                    2294   1520 _MCU_MEM_REG2_LANE	=	0x2294
                    2298   1521 _MCU_TIMER_CTRL_1_LANE	=	0x2298
                    229C   1522 _MCU_TIMER_CTRL_2_LANE	=	0x229c
                    22A0   1523 _MCU_TIMER_CTRL_3_LANE	=	0x22a0
                    22A4   1524 _MCU_TIMER_CTRL_4_LANE	=	0x22a4
                    22A8   1525 _MCU_TIMER_CTRL_5_LANE	=	0x22a8
                    22AC   1526 _MCU_TIMER_CTRL_6_LANE	=	0x22ac
                    22B0   1527 _MCU_TIMER_CTRL_7_LANE	=	0x22b0
                    22B4   1528 _MCU_DEBUG0_LANE	=	0x22b4
                    22B8   1529 _MCU_DEBUG1_LANE	=	0x22b8
                    22BC   1530 _MCU_DEBUG2_LANE	=	0x22bc
                    22C0   1531 _MCU_DEBUG3_LANE	=	0x22c0
                    22C4   1532 _MCU_DEBUG_LANE	=	0x22c4
                    22C8   1533 _EXT_INT_CONTROL	=	0x22c8
                    22CC   1534 _ANA_IF_TRX_REG0	=	0x22cc
                    22D0   1535 _ANA_IF_DFEE_REG0	=	0x22d0
                    22D4   1536 _ANA_IF_DFEO_REG0	=	0x22d4
                    22D8   1537 _MCU_IRQ_ISR_LANE	=	0x22d8
                    22DC   1538 _MCU_WDT_LANE	=	0x22dc
                    22E0   1539 _MCU_INT_CONTROL_13	=	0x22e0
                    22E4   1540 _MCU_COMMAND0	=	0x22e4
                    22F4   1541 _MEM_ECC_ERR_ADDRESS0	=	0x22f4
                    22F8   1542 _XDATA_MEM_CHECKSUM_LANE0	=	0x22f8
                    22FC   1543 _XDATA_MEM_CHECKSUM_LANE1	=	0x22fc
                    2300   1544 _PT_CONTROL0	=	0x2300
                    2304   1545 _PT_CONTROL1	=	0x2304
                    2308   1546 _PT_USER_PATTERN0	=	0x2308
                    230C   1547 _PT_USER_PATTERN1	=	0x230c
                    2310   1548 _PT_USER_PATTERN2	=	0x2310
                    2314   1549 _PT_COUNTER0	=	0x2314
                    2318   1550 _PT_COUNTER1	=	0x2318
                    231C   1551 _PT_COUNTER2	=	0x231c
                    2400   1552 _DFE_CTRL_REG0	=	0x2400
                    2404   1553 _DFE_CTRL_REG1	=	0x2404
                    2408   1554 _DFE_CTRL_REG2	=	0x2408
                    240C   1555 _DFE_CTRL_REG3	=	0x240c
                    2410   1556 _RX_EQ_CLK_CTRL	=	0x2410
                    2414   1557 _DFE_CTRL_REG4	=	0x2414
                    2418   1558 _DFE_ANA_REG0	=	0x2418
                    241C   1559 _DFE_ANA_REG1	=	0x241c
                    2420   1560 _DFE_STEP_REG0	=	0x2420
                    2424   1561 _DFE_STEP_REG1	=	0x2424
                    2430   1562 _DFE_FEN_EVEN_REG	=	0x2430
                    2434   1563 _DFE_FEN_ODD_REG	=	0x2434
                    2438   1564 _DFE_DC_EVEN_REG8	=	0x2438
                    243C   1565 _DFE_DC_ODD_REG8	=	0x243c
                    2440   1566 _DFE_FEXT_EVEN_REG0	=	0x2440
                    2444   1567 _DFE_FEXT_EVEN_REG1	=	0x2444
                    2448   1568 _DFE_FEXT_EVEN_REG2	=	0x2448
                    244C   1569 _DFE_FEXT_EVEN_REG3	=	0x244c
                    2450   1570 _DFE_FEXT_EVEN_REG4	=	0x2450
                    2454   1571 _DFE_FEXT_EVEN_REG5	=	0x2454
                    2458   1572 _DFE_FEXT_EVEN_REG6	=	0x2458
                    245C   1573 _DFE_FEXT_EVEN_REG7	=	0x245c
                    2460   1574 _DFE_FEXT_ODD_REG0	=	0x2460
                    2464   1575 _DFE_FEXT_ODD_REG1	=	0x2464
                    2468   1576 _DFE_FEXT_ODD_REG2	=	0x2468
                    246C   1577 _DFE_FEXT_ODD_REG3	=	0x246c
                    2470   1578 _DFE_FEXT_ODD_REG4	=	0x2470
                    2474   1579 _DFE_FEXT_ODD_REG5	=	0x2474
                    2478   1580 _DFE_FEXT_ODD_REG6	=	0x2478
                    247C   1581 _DFE_FEXT_ODD_REG7	=	0x247c
                    2480   1582 _DFE_READ_EVEN_SM_REG0	=	0x2480
                    2484   1583 _DFE_READ_EVEN_SM_REG1	=	0x2484
                    2488   1584 _DFE_READ_EVEN_SM_REG2	=	0x2488
                    248C   1585 _DFE_READ_EVEN_SM_REG3	=	0x248c
                    2490   1586 _DFE_READ_EVEN_SM_REG4	=	0x2490
                    2494   1587 _DFE_READ_EVEN_SM_REG5	=	0x2494
                    2498   1588 _DFE_READ_EVEN_SM_REG6	=	0x2498
                    249C   1589 _DFE_READ_EVEN_SM_REG7	=	0x249c
                    24A0   1590 _DFE_READ_ODD_SM_REG0	=	0x24a0
                    24A4   1591 _DFE_READ_ODD_SM_REG1	=	0x24a4
                    24A8   1592 _DFE_READ_ODD_SM_REG2	=	0x24a8
                    24AC   1593 _DFE_READ_ODD_SM_REG3	=	0x24ac
                    24B0   1594 _DFE_READ_ODD_SM_REG4	=	0x24b0
                    24B4   1595 _DFE_READ_ODD_SM_REG5	=	0x24b4
                    24B8   1596 _DFE_READ_ODD_SM_REG6	=	0x24b8
                    24BC   1597 _DFE_READ_ODD_SM_REG7	=	0x24bc
                    24C0   1598 _DFE_READ_EVEN_SM_REG8	=	0x24c0
                    24C4   1599 _DFE_READ_ODD_SM_REG8	=	0x24c4
                    24D0   1600 _DFE_READ_EVEN_2C_REG0	=	0x24d0
                    24D4   1601 _DFE_READ_EVEN_2C_REG1	=	0x24d4
                    24D8   1602 _DFE_READ_EVEN_2C_REG2	=	0x24d8
                    24DC   1603 _DFE_READ_EVEN_2C_REG3	=	0x24dc
                    24E0   1604 _DFE_READ_EVEN_2C_REG4	=	0x24e0
                    24E4   1605 _DFE_READ_EVEN_2C_REG5	=	0x24e4
                    24E8   1606 _DFE_READ_EVEN_2C_REG6	=	0x24e8
                    24EC   1607 _DFE_READ_EVEN_2C_REG7	=	0x24ec
                    24F0   1608 _DFE_READ_ODD_2C_REG0	=	0x24f0
                    24F4   1609 _DFE_READ_ODD_2C_REG1	=	0x24f4
                    24F8   1610 _DFE_READ_ODD_2C_REG2	=	0x24f8
                    24FC   1611 _DFE_READ_ODD_2C_REG3	=	0x24fc
                    2500   1612 _DFE_READ_ODD_2C_REG4	=	0x2500
                    2504   1613 _DFE_READ_ODD_2C_REG5	=	0x2504
                    2508   1614 _DFE_READ_ODD_2C_REG6	=	0x2508
                    250C   1615 _DFE_READ_ODD_2C_REG7	=	0x250c
                    2510   1616 _DFE_READ_EVEN_2C_REG8	=	0x2510
                    2514   1617 _DFE_READ_ODD_2C_REG8	=	0x2514
                    2518   1618 _CAL_OFST_REG0	=	0x2518
                    251C   1619 _CAL_OFST_REG1	=	0x251c
                    2520   1620 _CAL_OFST_REG2	=	0x2520
                    2530   1621 _DFE_DCE_REG0	=	0x2530
                    2540   1622 _DFE_STATIC_LANE_REG0	=	0x2540
                    2544   1623 _DFE_STATIC_LANE_REG1	=	0x2544
                    2548   1624 _DFE_STATIC_LANE_REG3	=	0x2548
                    254C   1625 _DFE_STATIC_LANE_REG4	=	0x254c
                    2550   1626 _DFE_STATIC_LANE_REG5	=	0x2550
                    2554   1627 _DFE_STATIC_LANE_REG6	=	0x2554
                    2560   1628 _EOM_VLD_REG0	=	0x2560
                    2564   1629 _EOM_VLD_REG1	=	0x2564
                    2568   1630 _EOM_VLD_REG2	=	0x2568
                    256C   1631 _EOM_VLD_REG3	=	0x256c
                    2570   1632 _EOM_ERR_REG0	=	0x2570
                    2574   1633 _EOM_ERR_REG1	=	0x2574
                    2578   1634 _EOM_ERR_REG2	=	0x2578
                    257C   1635 _EOM_ERR_REG3	=	0x257c
                    2580   1636 _EOM_REG0	=	0x2580
                    25F0   1637 _EOM_VLD_REG4	=	0x25f0
                    25F4   1638 _LANE_MARGIN_REG0	=	0x25f4
                    6000   1639 _CAL_CTRL1_LANE	=	0x6000
                    6004   1640 _CAL_CTRL2_LANE	=	0x6004
                    6008   1641 _CAL_CTRL3_LANE	=	0x6008
                    600C   1642 _CAL_CTRL4_LANE	=	0x600c
                    6010   1643 _CAL_SAVE_DATA1_LANE	=	0x6010
                    6014   1644 _CAL_SAVE_DATA2_LANE	=	0x6014
                    6018   1645 _CAL_SAVE_DATA3_LANE	=	0x6018
                    601C   1646 _PHY_REMOTE_CTRL_COMMAND_LANE	=	0x601c
                    6020   1647 _PHY_REMOTE_CTRL_VALUE_LANE	=	0x6020
                    6024   1648 _PHY_LOCAL_VALUE_LANE	=	0x6024
                    6028   1649 _TRX_TRAIN_IF_TIMERS1_LANE	=	0x6028
                    602C   1650 _TRX_TRAIN_IF_TIMERS2_LANE	=	0x602c
                    6030   1651 _TRX_TRAIN_IF_TIMERS_ENABLE_LANE	=	0x6030
                    6034   1652 _DFE_CONTROL_0	=	0x6034
                    6038   1653 _DFE_CONTROL_1	=	0x6038
                    6040   1654 _DFE_CONTROL_2	=	0x6040
                    6044   1655 _DFE_CONTROL_3	=	0x6044
                    6048   1656 _DFE_CONTROL_4	=	0x6048
                    604C   1657 _DFE_CONTROL_5	=	0x604c
                    6050   1658 _TRAIN_CONTROL_0	=	0x6050
                    6054   1659 _TRAIN_CONTROL_1	=	0x6054
                    6058   1660 _TRAIN_CONTROL_2	=	0x6058
                    605C   1661 _RPTA_CONFIG_0	=	0x605c
                    6060   1662 _RPTA_CONFIG_1	=	0x6060
                    6064   1663 _DLL_CAL	=	0x6064
                    6068   1664 _TRAIN_PARA_0	=	0x6068
                    606C   1665 _TRAIN_PARA_1	=	0x606c
                    6070   1666 _TRAIN_PARA_2	=	0x6070
                    6074   1667 _TRAIN_PARA_3	=	0x6074
                    6078   1668 _DFE_CONTROL_6	=	0x6078
                    607C   1669 _DFE_TEST_0	=	0x607c
                    6080   1670 _DFE_TEST_1	=	0x6080
                    6084   1671 _DFE_TEST_4	=	0x6084
                    6088   1672 _DFE_TEST_5	=	0x6088
                    608C   1673 _DFE_CONTROL_7	=	0x608c
                    6090   1674 _DFE_CONTROL_8	=	0x6090
                    6094   1675 _DFE_CONTROL_9	=	0x6094
                    6098   1676 _DFE_CONTROL_10	=	0x6098
                    609C   1677 _DFE_CONTROL_11	=	0x609c
                    60A0   1678 _CDS_CTRL_REG0	=	0x60a0
                    60A4   1679 _CDS_CTRL_REG1	=	0x60a4
                    60A8   1680 _ESM_POP_P_CNT_LOW_LANE	=	0x60a8
                    60AC   1681 _ESM_ERR_P_CNT_LOW_LANE	=	0x60ac
                    60B0   1682 _ESM_ERR_POP_CNT_HIGH_LANE	=	0x60b0
                    60B4   1683 _TRAIN_CONTROL_3	=	0x60b4
                    60B8   1684 _TRAIN_CONTROL_4	=	0x60b8
                    60BC   1685 _TRAIN_CONTROL_5	=	0x60bc
                    60C0   1686 _TRAIN_CONTROL_6	=	0x60c0
                    60C4   1687 _TRAIN_CONTROL_7	=	0x60c4
                    60C8   1688 _TRAIN_CONTROL_8	=	0x60c8
                    60CC   1689 _TRAIN_CONTROL_9	=	0x60cc
                    60D0   1690 _TRAIN_CONTROL_10	=	0x60d0
                    60D4   1691 _TRAIN_CONTROL_11	=	0x60d4
                    60D8   1692 _TRAIN_CONTROL_12	=	0x60d8
                    60DC   1693 _ESM_POP_N_CNT_LOW_LANE	=	0x60dc
                    60E0   1694 _ESM_ERR_N_CNT_LOW_LANE	=	0x60e0
                    60E4   1695 _TRAIN_CONTROL_13	=	0x60e4
                    60E8   1696 _TRAIN_CONTROL_14	=	0x60e8
                    60EC   1697 _TRAIN_CONTROL_15	=	0x60ec
                    60F0   1698 _TRAIN_CONTROL_16	=	0x60f0
                    60F4   1699 _TRAIN_CONTROL_17	=	0x60f4
                    60F8   1700 _END_XDAT_LANE	=	0x60f8
                    A000   1701 _TX_CMN_REG	=	0xa000
                    A008   1702 _DTX_REG0	=	0xa008
                    A00C   1703 _DTX_REG1	=	0xa00c
                    A010   1704 _DTX_REG2	=	0xa010
                    A014   1705 _DTX_REG3	=	0xa014
                    A018   1706 _DTX_REG4	=	0xa018
                    A01C   1707 _DTX_PHY_ALIGN_REG0	=	0xa01c
                    A024   1708 _DTX_PHY_ALIGN_REG1	=	0xa024
                    A028   1709 _DTX_PHY_ALIGN_REG2	=	0xa028
                    A02C   1710 _SRIS_REG0	=	0xa02c
                    A030   1711 _SRIS_REG1	=	0xa030
                    A100   1712 _RX_CMN_0	=	0xa100
                    A110   1713 _DFE_STATIC_REG0	=	0xa110
                    A114   1714 _DFE_STATIC_REG1	=	0xa114
                    A118   1715 _DFE_STATIC_REG3	=	0xa118
                    A11C   1716 _DFE_STATIC_REG4	=	0xa11c
                    A120   1717 _DFE_STATIC_REG5	=	0xa120
                    A124   1718 _DFE_STATIC_REG6	=	0xa124
                    4200   1719 _GLOB_RST_CLK_CTRL	=	0x4200
                    4204   1720 _GLOB_CLK_SRC_LO	=	0x4204
                    4208   1721 _GLOB_CLK_SRC_HI	=	0x4208
                    420C   1722 _GLOB_MISC_CTRL	=	0x420c
                    4210   1723 _GLOB_DP_SAL_CFG	=	0x4210
                    4214   1724 _GLOB_DP_SAL_CFG1	=	0x4214
                    4218   1725 _GLOB_DP_SAL_CFG3	=	0x4218
                    421C   1726 _GLOB_DP_SAL_CFG5	=	0x421c
                    4220   1727 _GLOB_PM_CFG0	=	0x4220
                    4224   1728 _GLOB_COUNTER_CTRL	=	0x4224
                    4228   1729 _GLOB_COUNTER_HI	=	0x4228
                    422C   1730 _GLOB_PM_DP_CTRL	=	0x422c
                    4230   1731 _GLOB_DP_BAL_CFG0	=	0x4230
                    4234   1732 _GLOB_DP_BAL_CFG2	=	0x4234
                    4238   1733 _GLOB_DP_BAL_CFG4	=	0x4238
                    423C   1734 _GLOB_BIST_CTRL	=	0x423c
                    4240   1735 _GLOB_BIST_LANE_TYPE	=	0x4240
                    4244   1736 _GLOB_BIST_START	=	0x4244
                    4248   1737 _GLOB_BIST_MASK	=	0x4248
                    424C   1738 _GLOB_BIST_RESULT	=	0x424c
                    4250   1739 _GLOB_BIST_SEQR_CFG	=	0x4250
                    4254   1740 _GLOB_BIST_DATA_HI	=	0x4254
                    4258   1741 _GLOB_PIPE_REVISION	=	0x4258
                    425C   1742 _GLOB_L1_SUBSTATES_CFG	=	0x425c
                    A200   1743 _MCU_CONTROL_0	=	0xa200
                    A204   1744 _MCU_CONTROL_1	=	0xa204
                    A208   1745 _MCU_CONTROL_2	=	0xa208
                    A20C   1746 _MCU_CONTROL_3	=	0xa20c
                    A210   1747 _MCU_CONTROL_4	=	0xa210
                    A214   1748 _MCU_DEBUG0	=	0xa214
                    A218   1749 _MCU_DEBUG1	=	0xa218
                    A21C   1750 _MEMORY_CONTROL_0	=	0xa21c
                    A220   1751 _MEMORY_CONTROL_1	=	0xa220
                    A224   1752 _MEMORY_CONTROL_2	=	0xa224
                    A228   1753 _MEMORY_CONTROL_3	=	0xa228
                    A22C   1754 _MEMORY_CONTROL_4	=	0xa22c
                    A234   1755 _MCU_INFO_0	=	0xa234
                    A238   1756 _MCU_INFO_1	=	0xa238
                    A23C   1757 _MCU_INFO_2	=	0xa23c
                    A240   1758 _MCU_INFO_3	=	0xa240
                    A244   1759 _MEM_CMN_ECC_ERR_ADDRESS0	=	0xa244
                    A2E0   1760 _ANA_IF_CMN_REG1	=	0xa2e0
                    A2E4   1761 _MEM_IRQ	=	0xa2e4
                    A2E8   1762 _MEM_IRQ_MASK	=	0xa2e8
                    A2EC   1763 _ANA_IF_CMN_REG0	=	0xa2ec
                    A2F0   1764 _APB_CONTROL_REG	=	0xa2f0
                    A2F4   1765 _MEM_IRQ_CLEAR	=	0xa2f4
                    A2F8   1766 _MCU_SYNC1	=	0xa2f8
                    A2FC   1767 _MCU_SYNC2	=	0xa2fc
                    A300   1768 _TEST0	=	0xa300
                    A304   1769 _TEST1	=	0xa304
                    A308   1770 _TEST2	=	0xa308
                    A30C   1771 _TEST3	=	0xa30c
                    A310   1772 _TEST4	=	0xa310
                    A314   1773 _SYSTEM	=	0xa314
                    A318   1774 _PM_CMN_REG1	=	0xa318
                    A31C   1775 _INPUT_CMN_PIN_REG0	=	0xa31c
                    A320   1776 _INPUT_CMN_PIN_REG1	=	0xa320
                    A324   1777 _INPUT_CMN_PIN_REG2	=	0xa324
                    A328   1778 _ANA_TSEN_CONTROL	=	0xa328
                    A32C   1779 _PLLCAL_REG0	=	0xa32c
                    A330   1780 _PLLCAL_REG1	=	0xa330
                    A334   1781 _CLKGEN_CMN_REG1	=	0xa334
                    A338   1782 _SPD_CMN_REG1	=	0xa338
                    A33C   1783 _OUTPUT_CMN_PIN_REG0	=	0xa33c
                    A340   1784 _CMN_CALIBRATION	=	0xa340
                    A344   1785 __FIELDNAME_	=	0xa344
                    A348   1786 _INPUT_CMN_PIN_REG3	=	0xa348
                    A34C   1787 _PM_CMN_REG2	=	0xa34c
                    A354   1788 _TEST5	=	0xa354
                    A358   1789 _XDATA_MEM_CHECKSUM_CMN_0	=	0xa358
                    A35C   1790 _XDATA_MEM_CHECKSUM_CMN_1	=	0xa35c
                    A360   1791 _XDATA_MEM_CHECKSUM_CMN_2	=	0xa360
                    A364   1792 _MCU_SDT_CMN	=	0xa364
                    A368   1793 _CMN_CACHE_DEBUG0	=	0xa368
                    A36C   1794 _MCU_INT_ADDR	=	0xa36c
                    A370   1795 _CMN_ISR_2	=	0xa370
                    A374   1796 _CMN_ISR_MASK_2	=	0xa374
                    A378   1797 _CMN_ISR_CLEAR_2	=	0xa378
                    A37C   1798 _CMN_MCU_GPIO	=	0xa37c
                    A380   1799 _CMN_CACHE_DEBUG1	=	0xa380
                    A384   1800 _CMN_MCU_TIMER_CONTROL	=	0xa384
                    A388   1801 _CMN_MCU_TIMER_CTRL_2_LANE	=	0xa388
                    A38C   1802 _CMN_MCU_TIMER_CTRL_3_LANE	=	0xa38c
                    A390   1803 _CMN_MCU_TIMER_CTRL_4_LANE	=	0xa390
                    A394   1804 _CMN_MCU_TIMER_CTRL_5_LANE	=	0xa394
                    A398   1805 _CMN_MCU_TIMER0_CONTROL	=	0xa398
                    A39C   1806 _CMN_MCU_TIMER1_CONTROL	=	0xa39c
                    A3A0   1807 _CMN_MCU_TIMER2_CONTROL	=	0xa3a0
                    A3A4   1808 _CMN_MCU_TIMER3_CONTROL	=	0xa3a4
                    A3A8   1809 _CMN_ISR_1	=	0xa3a8
                    A3AC   1810 _CMN_ISR_MASK_1	=	0xa3ac
                    A3B0   1811 _SET_LANE_ISR	=	0xa3b0
                    A3F4   1812 _CMN_MCU_REG	=	0xa3f4
                    A3F8   1813 _CID_REG0	=	0xa3f8
                    A3FC   1814 _CID_REG1	=	0xa3fc
                    E600   1815 _FW_REV	=	0xe600
                    E604   1816 _CONTROL_CONFIG0	=	0xe604
                    E608   1817 _CONTROL_CONFIG1	=	0xe608
                    E60C   1818 _CONTROL_CONFIG2	=	0xe60c
                    E610   1819 _CONTROL_CONFIG3	=	0xe610
                    E614   1820 _CONTROL_CONFIG4	=	0xe614
                    E618   1821 _CONTROL_CONFIG5	=	0xe618
                    E61C   1822 _CONTROL_CONFIG6	=	0xe61c
                    E620   1823 _CONTROL_CONFIG7	=	0xe620
                    E624   1824 _CAL_DATA0	=	0xe624
                    E628   1825 _TRAIN_IF_CONFIG	=	0xe628
                    E62C   1826 _CONTROL_CONFIG8	=	0xe62c
                    E630   1827 _CONTROL_CONFIG9	=	0xe630
                    E634   1828 _CON_CAL_STEP_SIZE1	=	0xe634
                    E638   1829 _CON_CAL_STEP_SIZE2	=	0xe638
                    E63C   1830 _CON_CAL_STEP_SIZE3	=	0xe63c
                    E640   1831 _CON_CAL_STEP_SIZE4	=	0xe640
                    E644   1832 _CON_CAL_STEP_SIZE5	=	0xe644
                    E648   1833 _CAL_TIME_OUT_AND_DIS	=	0xe648
                    E64C   1834 _CAL_STATUS_READ	=	0xe64c
                    E650   1835 _MCU_CONFIG	=	0xe650
                    E654   1836 _CAL_DATA1	=	0xe654
                    E658   1837 _LOOP_CNTS	=	0xe658
                    E65C   1838 _MCU_CONFIG1	=	0xe65c
                    E660   1839 _TIMER_SEL1	=	0xe660
                    E664   1840 _TIMER_SEL2	=	0xe664
                    E668   1841 _TIMER_SEL3	=	0xe668
                    E66C   1842 _G_SELLV_TXCLK	=	0xe66c
                    E670   1843 _G_SELLV_TXDATA	=	0xe670
                    E674   1844 _G_SELLV_TXPRE	=	0xe674
                    E678   1845 _G_SELLV_RXEOMCLK	=	0xe678
                    E67C   1846 _G_SELLV_RXDATACLK	=	0xe67c
                    E680   1847 _G_SELLV_RXSAMPLER	=	0xe680
                    E684   1848 _SAS_PRESET0_TB	=	0xe684
                    E688   1849 _SAS_PRESET1_TB	=	0xe688
                    E68C   1850 _SAS_PRESET2_TB	=	0xe68c
                    E690   1851 _ETH_PRESET0_TB	=	0xe690
                    E694   1852 _ETH_PRESET1_TB	=	0xe694
                    E698   1853 _TX_SAVE_0	=	0xe698
                    E69C   1854 _TX_SAVE_1	=	0xe69c
                    E6A0   1855 _TX_SAVE_2	=	0xe6a0
                    E6A4   1856 _TX_SAVE_3	=	0xe6a4
                    E6A8   1857 _TX_SAVE_4	=	0xe6a8
                    E6AC   1858 _CDS_EYE_CLK_THR	=	0xe6ac
                    E6B0   1859 _SYNC_INFO	=	0xe6b0
                    E6B4   1860 _MCU_INFO_4	=	0xe6b4
                    E6B8   1861 _MCU_INFO_5	=	0xe6b8
                    E6BC   1862 _MCU_INFO_12	=	0xe6bc
                    E6C0   1863 _MCU_INFO_13	=	0xe6c0
                    E6C4   1864 _END_XDAT_CMN	=	0xe6c4
                    2600   1865 _DME_ENC_REG0	=	0x2600
                    2604   1866 _DME_ENC_REG1	=	0x2604
                    2608   1867 _DME_ENC_REG2	=	0x2608
                    260C   1868 _DME_DEC_REG0	=	0x260c
                    2610   1869 _DME_DEC_REG1	=	0x2610
                    2614   1870 _TX_TRAIN_IF_REG0	=	0x2614
                    2618   1871 _TX_TRAIN_IF_REG1	=	0x2618
                    261C   1872 _TX_TRAIN_IF_REG2	=	0x261c
                    2620   1873 _TX_TRAIN_IF_REG3	=	0x2620
                    2624   1874 _TX_TRAIN_PATTTERN_REG0	=	0x2624
                    2628   1875 _TX_TRAIN_DRIVER_REG0	=	0x2628
                    262C   1876 _TX_TRAIN_DRIVER_REG1	=	0x262c
                    2630   1877 _TX_TRAIN_DRIVER_REG2	=	0x2630
                    2634   1878 _TX_TRAIN_DEFAULT_REG0	=	0x2634
                    2638   1879 _TX_TRAIN_DEFAULT_REG1	=	0x2638
                    263C   1880 _TX_TRAIN_DEFAULT_REG2	=	0x263c
                    2640   1881 _TX_TRAIN_DEFAULT_REG3	=	0x2640
                    2644   1882 _TX_TRAIN_DEFAULT_REG4	=	0x2644
                    2648   1883 _TX_TRAIN_DEFAULT_REG5	=	0x2648
                    264C   1884 _TX_EMPH_CTRL_REG0	=	0x264c
                    2650   1885 _LINK_TRAIN_MODE0	=	0x2650
                    2654   1886 _TX_DRV_RD_OUT_REG0	=	0x2654
                    2658   1887 _TX_AMP_CTRL_REG0	=	0x2658
                    265C   1888 _TRX_TRAIN_IF_INTERRUPT_LANE	=	0x265c
                    2660   1889 _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE	=	0x2660
                    2664   1890 _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE	=	0x2664
                    2668   1891 _TX_TRAIN_IF_REG4	=	0x2668
                    266C   1892 _TX_TRAIN_IF_REG5	=	0x266c
                    2670   1893 _TX_TRAIN_IF_REG6	=	0x2670
                    2674   1894 _TX_TRAIN_IF_REG7	=	0x2674
                    2678   1895 _TX_TRAIN_CTRL_LANE	=	0x2678
                    267C   1896 _TX_TRAIN_IF_REG8	=	0x267c
                    6100   1897 _DFE_READ_EVEN_REG0	=	0x6100
                    6104   1898 _DFE_READ_EVEN_REG1	=	0x6104
                    6108   1899 _DFE_READ_EVEN_REG2	=	0x6108
                    610C   1900 _DFE_READ_EVEN_REG3	=	0x610c
                    6110   1901 _DFE_READ_EVEN_REG4	=	0x6110
                    6114   1902 _DFE_READ_EVEN_REG5	=	0x6114
                    6118   1903 _DFE_READ_EVEN_REG6	=	0x6118
                    611C   1904 _DFE_READ_EVEN_REG7	=	0x611c
                    6120   1905 _DFE_READ_ODD_REG0	=	0x6120
                    6124   1906 _DFE_READ_ODD_REG1	=	0x6124
                    6128   1907 _DFE_READ_ODD_REG2	=	0x6128
                    612C   1908 _DFE_READ_ODD_REG3	=	0x612c
                    6130   1909 _DFE_READ_ODD_REG4	=	0x6130
                    6134   1910 _DFE_READ_ODD_REG5	=	0x6134
                    6138   1911 _DFE_READ_ODD_REG6	=	0x6138
                    613C   1912 _DFE_READ_ODD_REG7	=	0x613c
                    6140   1913 _DFE_READ_EVEN_REG8	=	0x6140
                    6144   1914 _DFE_READ_ODD_REG8	=	0x6144
                    6148   1915 _DFE_READ_F0A_EVEN	=	0x6148
                    614C   1916 _DFE_READ_F0A_ODD	=	0x614c
                    6150   1917 _DFE_READ_F0B_EVEN	=	0x6150
                    6154   1918 _DFE_READ_F0B_ODD	=	0x6154
                    6158   1919 _DFE_READ_F0D_EVEN	=	0x6158
                    615C   1920 _DFE_READ_F0D_ODD	=	0x615c
                    6160   1921 _DFE_READ_F0D_LEFT_EVEN	=	0x6160
                    6164   1922 _DFE_READ_F0D_LEFT_ODD	=	0x6164
                    6168   1923 _DFE_READ_F0D_RIGHT_EVEN	=	0x6168
                    616C   1924 _DFE_READ_F0D_RIGHT_ODD	=	0x616c
                    6170   1925 _CDS_READ_MISC0	=	0x6170
                    6174   1926 _CDS_READ_MISC1	=	0x6174
                    6214   1927 _TXTRAIN_IF_REG0	=	0x6214
                    E000   1928 _lc_speedtable	=	0xe000
                    E1C0   1929 _ring_speedtable	=	0xe1c0
                    E5C0   1930 _phy_mode_cmn_table	=	0xe5c0
                    6300   1931 _max_gen	=	0x6300
                    6301   1932 _min_gen	=	0x6301
                    6304   1933 _speedtable	=	0x6304
                    65D4   1934 _phy_mode_lane_table	=	0x65d4
                    60B4   1935 _rc_save	=	0x60b4
                    60D0   1936 _txffe_save	=	0x60d0
                    60E4   1937 _phase_save	=	0x60e4
                    6030   1938 _train_gn1_index	=	0x6030
                    6031   1939 _train_g1_index	=	0x6031
                    6032   1940 _train_g0_index	=	0x6032
                    E6B0   1941 _local_tx_preset_tb	=	0xe6b0
                    E5C1   1942 _cmx_cal_lcvco_dac	=	0xe5c1
                    E5C1   1943 _cmx_cal_lcvco_dac_lsb	=	0xe5c1
                    E5C4   1944 _cmx_cal_lcvco_dac_msb	=	0xe5c4
                    E5CA   1945 _cmx_cal_lccap_msb	=	0xe5ca
                    E5C8   1946 _cmx_cal_lccap_lsb	=	0xe5c8
                    E5CC   1947 _cmx_cal_plldcc	=	0xe5cc
                    E5D0   1948 _cmx_cal_pll_speed_ring	=	0xe5d0
                    E5D4   1949 _cmx_cal_pll_sllp_dac_coarse_ring	=	0xe5d4
                    E5D8   1950 _cmx_cal_sllp_dac_fine_ring	=	0xe5d8
                    65D4   1951 _lnx_cal_txdcc_pdiv	=	0x65d4
                    65D8   1952 _lnx_cal_txdcc_pdiv_hg	=	0x65d8
                    65DA   1953 _lnx_cal_txdcc	=	0x65da
                    65DE   1954 _lnx_cal_txdcc_hg	=	0x65de
                    65E0   1955 _lnx_cal_rxdcc_dll	=	0x65e0
                    65E4   1956 _lnx_cal_rxdcc_dll_hg	=	0x65e4
                    65E6   1957 _lnx_cal_rxdcc_data	=	0x65e6
                    65F0   1958 _lnx_cal_rxdcc_data_hg	=	0x65f0
                    65F5   1959 _lnx_cal_rxdcc_eom	=	0x65f5
                    65FF   1960 _lnx_cal_rxdcc_eom_hg	=	0x65ff
                    6604   1961 _lnx_cal_dll_gmsel	=	0x6604
                    6606   1962 _lnx_cal_vdda_dll_sel	=	0x6606
                    660A   1963 _lnx_cal_dll_eom_gmsel	=	0x660a
                    660C   1964 _lnx_cal_vdda_dll_eom_sel	=	0x660c
                    6610   1965 _lnx_cal_eom_dpher	=	0x6610
                    6612   1966 _lnx_cal_align90_dummy_clk	=	0x6612
                    661A   1967 _lnx_cal_align90_dac	=	0x661a
                    6622   1968 _lnx_cal_align90_gm	=	0x6622
                    662A   1969 _lnx_cal_sellv_txdata	=	0x662a
                    6634   1970 _lnx_cal_sellv_txclk	=	0x6634
                    663E   1971 _lnx_cal_sellv_rxdataclk	=	0x663e
                    6648   1972 _lnx_cal_sellv_txpre	=	0x6648
                    6652   1973 _lnx_cal_sellv_rxsampler	=	0x6652
                    665C   1974 _lnx_cal_sellv_rxeomclk	=	0x665c
                    6666   1975 _lnx_spdoft_tx_preset_index_lane	=	0x6666
                    6490   1976 _lnx_calx_txdcc_pdiv	=	0x6490
                    6496   1977 _lnx_calx_txdcc_pdiv_hg	=	0x6496
                    6499   1978 _lnx_calx_txdcc	=	0x6499
                    649F   1979 _lnx_calx_txdcc_hg	=	0x649f
                    64A2   1980 _lnx_calx_rxdcc_dll	=	0x64a2
                    64A8   1981 _lnx_calx_rxdcc_dll_hg	=	0x64a8
                    64AB   1982 _lnx_calx_dll_gmsel	=	0x64ab
                    64AE   1983 _lnx_calx_vdda_dll_sel	=	0x64ae
                    64B4   1984 _lnx_calx_dll_eom_gmsel	=	0x64b4
                    64B7   1985 _lnx_calx_vdda_dll_eom_sel	=	0x64b7
                    64BD   1986 _lnx_calx_eom_dpher	=	0x64bd
                    64C0   1987 _lnx_calx_align90_dummy_clk	=	0x64c0
                    64CC   1988 _lnx_calx_align90_dac	=	0x64cc
                    64D8   1989 _lnx_calx_align90_gm	=	0x64d8
                    6100   1990 _cds28	=	0x6100
                    6178   1991 _dfe_sm	=	0x6178
                    61B8   1992 _dfe_sm_dc	=	0x61b8
                    61C0   1993 _dfe_sm_save	=	0x61c0
                    03FC   1994 _UPHY_ANAREG_REV_0	=	0x03fc
                    E684   1995 _tx_tb	=	0xe684
                    E698   1996 _train_save_tb	=	0xe698
                    607C   1997 _sq_thrs_ratio_tb	=	0x607c
                           1998 ;--------------------------------------------------------
                           1999 ; absolute external ram data
                           2000 ;--------------------------------------------------------
                           2001 	.area XABS    (ABS,XDATA)
                           2002 ;--------------------------------------------------------
                           2003 ; external initialized ram data
                           2004 ;--------------------------------------------------------
                           2005 	.area HOME    (CODE)
                           2006 	.area GSINIT0 (CODE)
                           2007 	.area GSINIT1 (CODE)
                           2008 	.area GSINIT2 (CODE)
                           2009 	.area GSINIT3 (CODE)
                           2010 	.area GSINIT4 (CODE)
                           2011 	.area GSINIT5 (CODE)
                           2012 	.area GSINIT  (CODE)
                           2013 	.area GSFINAL (CODE)
                           2014 	.area CSEG    (CODE)
                           2015 ;--------------------------------------------------------
                           2016 ; global & static initialisations
                           2017 ;--------------------------------------------------------
                           2018 	.area HOME    (CODE)
                           2019 	.area GSINIT  (CODE)
                           2020 	.area GSFINAL (CODE)
                           2021 	.area GSINIT  (CODE)
                           2022 ;--------------------------------------------------------
                           2023 ; Home
                           2024 ;--------------------------------------------------------
                           2025 	.area HOME    (CODE)
                           2026 	.area HOME    (CODE)
                           2027 ;--------------------------------------------------------
                           2028 ; code
                           2029 ;--------------------------------------------------------
                           2030 	.area BANK1   (CODE)
                           2031 ;------------------------------------------------------------
                           2032 ;Allocation info for local variables in function 'cdr_phase_opt'
                           2033 ;------------------------------------------------------------
                           2034 ;cdr_num                   Allocated to registers r2 
                           2035 ;------------------------------------------------------------
                           2036 ;	../../shared/src/phase_train.c:27: void cdr_phase_opt(void) BANKING_CTRL
                           2037 ;	-----------------------------------------
                           2038 ;	 function cdr_phase_opt
                           2039 ;	-----------------------------------------
   B9D9                    2040 _cdr_phase_opt:
                    0002   2041 	ar2 = 0x02
                    0003   2042 	ar3 = 0x03
                    0004   2043 	ar4 = 0x04
                    0005   2044 	ar5 = 0x05
                    0006   2045 	ar6 = 0x06
                    0007   2046 	ar7 = 0x07
                    0000   2047 	ar0 = 0x00
                    0001   2048 	ar1 = 0x01
                           2049 ;	../../shared/src/phase_train.c:35: if (train.level >= 5 || train.eo > tag_CDR_EO_BYPASS_THRES) //tag_CDR_EO_BYPASS_THRES=63
   B9D9 90 66 63           2050 	mov	dptr,#(_train + 0x0023)
   B9DC E0                 2051 	movx	a,@dptr
   B9DD FA                 2052 	mov	r2,a
   B9DE BA 05 00           2053 	cjne	r2,#0x05,00122$
   B9E1                    2054 00122$:
   B9E1 50 0C              2055 	jnc	00101$
   B9E3 90 66 5F           2056 	mov	dptr,#(_train + 0x001f)
   B9E6 E0                 2057 	movx	a,@dptr
   B9E7 FA                 2058 	mov	r2,a
   B9E8 74 3F              2059 	mov	a,#0x3F
   B9EA B5 02 00           2060 	cjne	a,ar2,00124$
   B9ED                    2061 00124$:
   B9ED 50 02              2062 	jnc	00102$
   B9EF                    2063 00101$:
                           2064 ;	../../shared/src/phase_train.c:36: return; 
   B9EF 80 64              2065 	sjmp	00113$
   B9F1                    2066 00102$:
                           2067 ;	../../shared/src/phase_train.c:40: cdr_phase_opt_init();
   B9F1 78 58              2068 	mov	r0,#_cdr_phase_opt_init
   B9F3 79 BA              2069 	mov	r1,#(_cdr_phase_opt_init >> 8)
   B9F5 7A 01              2070 	mov	r2,#(_cdr_phase_opt_init >> 16)
   B9F7 12 00 B3           2071 	lcall	__sdcc_banked_call
                           2072 ;	../../shared/src/phase_train.c:42: if (tag_CDR_MAXF0P_EN)  //1
   B9FA 90 60 A0           2073 	mov	dptr,#_CDS_CTRL_REG0
   B9FD E0                 2074 	movx	a,@dptr
   B9FE 30 E6 09           2075 	jnb	acc.6,00105$
                           2076 ;	../../shared/src/phase_train.c:43: cdr_phase_maxf0p(); 	
   BA01 78 DD              2077 	mov	r0,#_cdr_phase_maxf0p
   BA03 79 BA              2078 	mov	r1,#(_cdr_phase_maxf0p >> 8)
   BA05 7A 01              2079 	mov	r2,#(_cdr_phase_maxf0p >> 16)
   BA07 12 00 B3           2080 	lcall	__sdcc_banked_call
   BA0A                    2081 00105$:
                           2082 ;	../../shared/src/phase_train.c:45: if (tag_CDR_MIDPOINT_EN) { //1
   BA0A 90 60 38           2083 	mov	dptr,#_DFE_CONTROL_1
   BA0D E0                 2084 	movx	a,@dptr
   BA0E 30 E0 20           2085 	jnb	acc.0,00110$
                           2086 ;	../../shared/src/phase_train.c:48: while(cdr_num-->0) {
   BA11 7A 01              2087 	mov	r2,#0x01
   BA13                    2088 00106$:
   BA13 8A 03              2089 	mov	ar3,r2
   BA15 1A                 2090 	dec	r2
   BA16 C3                 2091 	clr	c
   BA17 74 80              2092 	mov	a,#(0x00 ^ 0x80)
   BA19 8B F0              2093 	mov	b,r3
   BA1B 63 F0 80           2094 	xrl	b,#0x80
   BA1E 95 F0              2095 	subb	a,b
   BA20 50 0F              2096 	jnc	00110$
                           2097 ;	../../shared/src/phase_train.c:49: cdr_phase_midpoint(); 
   BA22 C0 02              2098 	push	ar2
   BA24 78 4F              2099 	mov	r0,#_cdr_phase_midpoint
   BA26 79 BC              2100 	mov	r1,#(_cdr_phase_midpoint >> 8)
   BA28 7A 01              2101 	mov	r2,#(_cdr_phase_midpoint >> 16)
   BA2A 12 00 B3           2102 	lcall	__sdcc_banked_call
   BA2D D0 02              2103 	pop	ar2
   BA2F 80 E2              2104 	sjmp	00106$
   BA31                    2105 00110$:
                           2106 ;	../../shared/src/phase_train.c:53: cdr_phase_opt_final_processing();
   BA31 78 0C              2107 	mov	r0,#_cdr_phase_opt_final_processing
   BA33 79 BF              2108 	mov	r1,#(_cdr_phase_opt_final_processing >> 8)
   BA35 7A 01              2109 	mov	r2,#(_cdr_phase_opt_final_processing >> 16)
   BA37 12 00 B3           2110 	lcall	__sdcc_banked_call
                           2111 ;	../../shared/src/phase_train.c:55: if(lnx_FORCE_PHASE_TRAIN_OFFSET_EN_LANE) {
   BA3A 90 60 47           2112 	mov	dptr,#(_DFE_CONTROL_3 + 0x0003)
   BA3D E0                 2113 	movx	a,@dptr
   BA3E 30 E0 14           2114 	jnb	acc.0,00113$
                           2115 ;	../../shared/src/phase_train.c:56: train.phase_offset_data = (int8_t)lnx_FORCE_PHASE_TRAIN_OFFSET_2C_LANE_7_0;
   BA41 90 60 90           2116 	mov	dptr,#_DFE_CONTROL_8
   BA44 E0                 2117 	movx	a,@dptr
   BA45 90 66 61           2118 	mov	dptr,#(_train + 0x0021)
   BA48 F0                 2119 	movx	@dptr,a
                           2120 ;	../../shared/src/phase_train.c:57: phase_control_func();
   BA49 12 2D F3           2121 	lcall	_phase_control_func
                           2122 ;	../../shared/src/phase_train.c:58: dfe_adaptation();
   BA4C 78 AD              2123 	mov	r0,#_dfe_adaptation
   BA4E 79 9F              2124 	mov	r1,#(_dfe_adaptation >> 8)
   BA50 7A 01              2125 	mov	r2,#(_dfe_adaptation >> 16)
   BA52 12 00 B3           2126 	lcall	__sdcc_banked_call
   BA55                    2127 00113$:
   BA55 02 00 C5           2128 	ljmp	__sdcc_banked_ret
                           2129 ;------------------------------------------------------------
                           2130 ;Allocation info for local variables in function 'cdr_phase_opt_init'
                           2131 ;------------------------------------------------------------
                           2132 ;------------------------------------------------------------
                           2133 ;	../../shared/src/phase_train.c:72: void cdr_phase_opt_init(void) BANKING_CTRL
                           2134 ;	-----------------------------------------
                           2135 ;	 function cdr_phase_opt_init
                           2136 ;	-----------------------------------------
   BA58                    2137 _cdr_phase_opt_init:
                           2138 ;	../../shared/src/phase_train.c:75: calculatef0p();
   BA58 78 99              2139 	mov	r0,#_calculatef0p
   BA5A 79 BF              2140 	mov	r1,#(_calculatef0p >> 8)
   BA5C 7A 01              2141 	mov	r2,#(_calculatef0p >> 16)
   BA5E 12 00 B3           2142 	lcall	__sdcc_banked_call
                           2143 ;	../../shared/src/phase_train.c:76: cdr.num_count = 0;
   BA61 90 66 B1           2144 	mov	dptr,#_cdr
                           2145 ;	../../shared/src/phase_train.c:77: cdr.direction = 0; // go left in the beginning
                           2146 ;	../../shared/src/phase_train.c:78: cdr.become_worse = 0;
   BA64 E4                 2147 	clr	a
   BA65 F0                 2148 	movx	@dptr,a
   BA66 90 66 B2           2149 	mov	dptr,#(_cdr + 0x0001)
   BA69 F0                 2150 	movx	@dptr,a
   BA6A 90 66 BC           2151 	mov	dptr,#(_cdr + 0x000b)
   BA6D F0                 2152 	movx	@dptr,a
                           2153 ;	../../shared/src/phase_train.c:79: cdr.ini_phase_offset = train.phase_offset_data; 
   BA6E 90 66 61           2154 	mov	dptr,#(_train + 0x0021)
   BA71 E0                 2155 	movx	a,@dptr
   BA72 FA                 2156 	mov	r2,a
   BA73 90 66 B7           2157 	mov	dptr,#(_cdr + 0x0006)
   BA76 F0                 2158 	movx	@dptr,a
                           2159 ;	../../shared/src/phase_train.c:80: cdr.ini_f0p = cdr.train_f0p;
   BA77 90 66 B3           2160 	mov	dptr,#(_cdr + 0x0002)
   BA7A E0                 2161 	movx	a,@dptr
   BA7B FB                 2162 	mov	r3,a
   BA7C 90 66 B9           2163 	mov	dptr,#(_cdr + 0x0008)
   BA7F F0                 2164 	movx	@dptr,a
                           2165 ;	../../shared/src/phase_train.c:81: cdr.ini_level = train.level;
   BA80 90 66 63           2166 	mov	dptr,#(_train + 0x0023)
   BA83 E0                 2167 	movx	a,@dptr
   BA84 FC                 2168 	mov	r4,a
   BA85 90 66 B8           2169 	mov	dptr,#(_cdr + 0x0007)
   BA88 F0                 2170 	movx	@dptr,a
                           2171 ;	../../shared/src/phase_train.c:82: cdr.opt_phase_offset = cdr.ini_phase_offset;
   BA89 90 66 B6           2172 	mov	dptr,#(_cdr + 0x0005)
   BA8C EA                 2173 	mov	a,r2
   BA8D F0                 2174 	movx	@dptr,a
                           2175 ;	../../shared/src/phase_train.c:83: cdr.opt_f0p = cdr.train_f0p;
   BA8E 90 66 B5           2176 	mov	dptr,#(_cdr + 0x0004)
   BA91 EB                 2177 	mov	a,r3
   BA92 F0                 2178 	movx	@dptr,a
                           2179 ;	../../shared/src/phase_train.c:84: cdr.opt_level = train.level;
   BA93 90 66 B4           2180 	mov	dptr,#(_cdr + 0x0003)
   BA96 EC                 2181 	mov	a,r4
   BA97 F0                 2182 	movx	@dptr,a
                           2183 ;	../../shared/src/phase_train.c:85: cdr.min_phase_os = (ph_control_mode == 0 || ph_control_mode == 1)? tag_CDR_MIN_PHASE_OS_MODE01:tag_CDR_MIN_PHASE_OS_MODE23;
   BA98 90 66 F8           2184 	mov	dptr,#_ph_control_mode
   BA9B E0                 2185 	movx	a,@dptr
   BA9C FA                 2186 	mov	r2,a
   BA9D B4 01 00           2187 	cjne	a,#0x01,00119$
   BAA0                    2188 00119$:
   BAA0 E4                 2189 	clr	a
   BAA1 33                 2190 	rlc	a
   BAA2 FB                 2191 	mov	r3,a
   BAA3 70 09              2192 	jnz	00106$
   BAA5 BA 01 02           2193 	cjne	r2,#0x01,00121$
   BAA8 80 04              2194 	sjmp	00106$
   BAAA                    2195 00121$:
   BAAA 7C 00              2196 	mov	r4,#0x00
   BAAC 80 02              2197 	sjmp	00107$
   BAAE                    2198 00106$:
   BAAE 7C 01              2199 	mov	r4,#0x01
   BAB0                    2200 00107$:
   BAB0 EC                 2201 	mov	a,r4
   BAB1 60 04              2202 	jz	00103$
   BAB3 7C E4              2203 	mov	r4,#0xE4
   BAB5 80 02              2204 	sjmp	00104$
   BAB7                    2205 00103$:
   BAB7 7C C4              2206 	mov	r4,#0xC4
   BAB9                    2207 00104$:
   BAB9 90 66 BA           2208 	mov	dptr,#(_cdr + 0x0009)
   BABC EC                 2209 	mov	a,r4
   BABD F0                 2210 	movx	@dptr,a
                           2211 ;	../../shared/src/phase_train.c:86: cdr.max_phase_os = (ph_control_mode == 0 || ph_control_mode == 1)? tag_CDR_MAX_PHASE_OS_MODE01:tag_CDR_MAX_PHASE_OS_MODE23;
   BABE EB                 2212 	mov	a,r3
   BABF 70 09              2213 	jnz	00111$
   BAC1 BA 01 02           2214 	cjne	r2,#0x01,00124$
   BAC4 80 04              2215 	sjmp	00111$
   BAC6                    2216 00124$:
   BAC6 7A 00              2217 	mov	r2,#0x00
   BAC8 80 02              2218 	sjmp	00112$
   BACA                    2219 00111$:
   BACA 7A 01              2220 	mov	r2,#0x01
   BACC                    2221 00112$:
   BACC EA                 2222 	mov	a,r2
   BACD 60 04              2223 	jz	00108$
   BACF 7A 12              2224 	mov	r2,#0x12
   BAD1 80 02              2225 	sjmp	00109$
   BAD3                    2226 00108$:
   BAD3 7A 3C              2227 	mov	r2,#0x3C
   BAD5                    2228 00109$:
   BAD5 90 66 BB           2229 	mov	dptr,#(_cdr + 0x000a)
   BAD8 EA                 2230 	mov	a,r2
   BAD9 F0                 2231 	movx	@dptr,a
   BADA 02 00 C5           2232 	ljmp	__sdcc_banked_ret
                           2233 ;------------------------------------------------------------
                           2234 ;Allocation info for local variables in function 'cdr_phase_maxf0p'
                           2235 ;------------------------------------------------------------
                           2236 ;------------------------------------------------------------
                           2237 ;	../../shared/src/phase_train.c:105: void cdr_phase_maxf0p(void) BANKING_CTRL
                           2238 ;	-----------------------------------------
                           2239 ;	 function cdr_phase_maxf0p
                           2240 ;	-----------------------------------------
   BADD                    2241 _cdr_phase_maxf0p:
                           2242 ;	../../shared/src/phase_train.c:112: while (1)
   BADD                    2243 00120$:
                           2244 ;	../../shared/src/phase_train.c:118: (cdr.direction == 0) && //-1
   BADD 90 66 B2           2245 	mov	dptr,#(_cdr + 0x0001)
   BAE0 E0                 2246 	movx	a,@dptr
   BAE1 70 50              2247 	jnz	00102$
                           2248 ;	../../shared/src/phase_train.c:119: ((cdr.num_count >= tag_CDR_STEP_NUM) || //8
   BAE3 90 66 B1           2249 	mov	dptr,#_cdr
   BAE6 E0                 2250 	movx	a,@dptr
   BAE7 FA                 2251 	mov	r2,a
   BAE8 90 60 A5           2252 	mov	dptr,#(_CDS_CTRL_REG1 + 0x0001)
   BAEB E0                 2253 	movx	a,@dptr
   BAEC C4                 2254 	swap	a
   BAED 54 0F              2255 	anl	a,#0x0f
   BAEF FB                 2256 	mov	r3,a
   BAF0 C3                 2257 	clr	c
   BAF1 EA                 2258 	mov	a,r2
   BAF2 64 80              2259 	xrl	a,#0x80
   BAF4 8B F0              2260 	mov	b,r3
   BAF6 63 F0 80           2261 	xrl	b,#0x80
   BAF9 95 F0              2262 	subb	a,b
   BAFB 50 1E              2263 	jnc	00101$
                           2264 ;	../../shared/src/phase_train.c:120: ((train.phase_offset_data) <= cdr.min_phase_os) || //??
   BAFD 90 66 61           2265 	mov	dptr,#(_train + 0x0021)
   BB00 E0                 2266 	movx	a,@dptr
   BB01 FA                 2267 	mov	r2,a
   BB02 90 66 BA           2268 	mov	dptr,#(_cdr + 0x0009)
   BB05 E0                 2269 	movx	a,@dptr
   BB06 FB                 2270 	mov	r3,a
   BB07 C3                 2271 	clr	c
   BB08 64 80              2272 	xrl	a,#0x80
   BB0A 8A F0              2273 	mov	b,r2
   BB0C 63 F0 80           2274 	xrl	b,#0x80
   BB0F 95 F0              2275 	subb	a,b
   BB11 50 08              2276 	jnc	00101$
                           2277 ;	../../shared/src/phase_train.c:121: (cdr.become_worse==1))
   BB13 90 66 BC           2278 	mov	dptr,#(_cdr + 0x000b)
   BB16 E0                 2279 	movx	a,@dptr
   BB17 FA                 2280 	mov	r2,a
   BB18 BA 01 18           2281 	cjne	r2,#0x01,00102$
   BB1B                    2282 00101$:
                           2283 ;	../../shared/src/phase_train.c:124: cdr.direction = 1;
   BB1B 90 66 B2           2284 	mov	dptr,#(_cdr + 0x0001)
   BB1E 74 01              2285 	mov	a,#0x01
   BB20 F0                 2286 	movx	@dptr,a
                           2287 ;	../../shared/src/phase_train.c:125: cdr.num_count = 0;
   BB21 90 66 B1           2288 	mov	dptr,#_cdr
                           2289 ;	../../shared/src/phase_train.c:126: cdr.become_worse = 0;
   BB24 E4                 2290 	clr	a
   BB25 F0                 2291 	movx	@dptr,a
   BB26 90 66 BC           2292 	mov	dptr,#(_cdr + 0x000b)
   BB29 F0                 2293 	movx	@dptr,a
                           2294 ;	../../shared/src/phase_train.c:127: train.phase_offset_data = cdr.ini_phase_offset;
   BB2A 90 66 B7           2295 	mov	dptr,#(_cdr + 0x0006)
   BB2D E0                 2296 	movx	a,@dptr
   BB2E FA                 2297 	mov	r2,a
   BB2F 90 66 61           2298 	mov	dptr,#(_train + 0x0021)
   BB32 F0                 2299 	movx	@dptr,a
   BB33                    2300 00102$:
                           2301 ;	../../shared/src/phase_train.c:131: if ((  ( cdr.num_count >= tag_CDR_STEP_NUM ) //8
   BB33 90 66 B1           2302 	mov	dptr,#_cdr
   BB36 E0                 2303 	movx	a,@dptr
   BB37 FA                 2304 	mov	r2,a
   BB38 90 60 A5           2305 	mov	dptr,#(_CDS_CTRL_REG1 + 0x0001)
   BB3B E0                 2306 	movx	a,@dptr
   BB3C C4                 2307 	swap	a
   BB3D 54 0F              2308 	anl	a,#0x0f
   BB3F FB                 2309 	mov	r3,a
   BB40 C3                 2310 	clr	c
   BB41 EA                 2311 	mov	a,r2
   BB42 64 80              2312 	xrl	a,#0x80
   BB44 8B F0              2313 	mov	b,r3
   BB46 63 F0 80           2314 	xrl	b,#0x80
   BB49 95 F0              2315 	subb	a,b
   BB4B 50 1D              2316 	jnc	00118$
                           2317 ;	../../shared/src/phase_train.c:132: || ( (train.phase_offset_data) >= cdr.max_phase_os ) //31
   BB4D 90 66 61           2318 	mov	dptr,#(_train + 0x0021)
   BB50 E0                 2319 	movx	a,@dptr
   BB51 FA                 2320 	mov	r2,a
   BB52 90 66 BB           2321 	mov	dptr,#(_cdr + 0x000a)
   BB55 E0                 2322 	movx	a,@dptr
   BB56 FB                 2323 	mov	r3,a
   BB57 C3                 2324 	clr	c
   BB58 EA                 2325 	mov	a,r2
   BB59 64 80              2326 	xrl	a,#0x80
   BB5B 8B F0              2327 	mov	b,r3
   BB5D 63 F0 80           2328 	xrl	b,#0x80
   BB60 95 F0              2329 	subb	a,b
   BB62 50 06              2330 	jnc	00118$
                           2331 ;	../../shared/src/phase_train.c:133: || cdr.become_worse) && (cdr.direction == 1 ))			
   BB64 90 66 BC           2332 	mov	dptr,#(_cdr + 0x000b)
   BB67 E0                 2333 	movx	a,@dptr
   BB68 60 0B              2334 	jz	00114$
   BB6A                    2335 00118$:
   BB6A 90 66 B2           2336 	mov	dptr,#(_cdr + 0x0001)
   BB6D E0                 2337 	movx	a,@dptr
   BB6E FA                 2338 	mov	r2,a
   BB6F BA 01 03           2339 	cjne	r2,#0x01,00145$
   BB72 02 BC 4C           2340 	ljmp	00122$
   BB75                    2341 00145$:
                           2342 ;	../../shared/src/phase_train.c:135: break;//CGR Phase Maxf0p State End
   BB75                    2343 00114$:
                           2344 ;	../../shared/src/phase_train.c:139: if( cdr.direction == 0)	train.phase_offset_data -= tag_CDR_PHASE_STEP_SIZE; //2 compute the phase offset
   BB75 90 66 B2           2345 	mov	dptr,#(_cdr + 0x0001)
   BB78 E0                 2346 	movx	a,@dptr
   BB79 70 0E              2347 	jnz	00107$
   BB7B 90 66 61           2348 	mov	dptr,#(_train + 0x0021)
   BB7E E0                 2349 	movx	a,@dptr
   BB7F FA                 2350 	mov	r2,a
   BB80 1A                 2351 	dec	r2
   BB81 1A                 2352 	dec	r2
   BB82 90 66 61           2353 	mov	dptr,#(_train + 0x0021)
   BB85 EA                 2354 	mov	a,r2
   BB86 F0                 2355 	movx	@dptr,a
   BB87 80 0C              2356 	sjmp	00108$
   BB89                    2357 00107$:
                           2358 ;	../../shared/src/phase_train.c:140: else		train.phase_offset_data += tag_CDR_PHASE_STEP_SIZE; 
   BB89 90 66 61           2359 	mov	dptr,#(_train + 0x0021)
   BB8C E0                 2360 	movx	a,@dptr
   BB8D FA                 2361 	mov	r2,a
   BB8E 0A                 2362 	inc	r2
   BB8F 0A                 2363 	inc	r2
   BB90 90 66 61           2364 	mov	dptr,#(_train + 0x0021)
   BB93 EA                 2365 	mov	a,r2
   BB94 F0                 2366 	movx	@dptr,a
   BB95                    2367 00108$:
                           2368 ;	../../shared/src/phase_train.c:141: train.phase_offset_data = clamp(train.phase_offset_data,cdr.max_phase_os,cdr.min_phase_os);
   BB95 90 66 BA           2369 	mov	dptr,#(_cdr + 0x0009)
   BB98 E0                 2370 	movx	a,@dptr
   BB99 FA                 2371 	mov	r2,a
   BB9A 90 66 BB           2372 	mov	dptr,#(_cdr + 0x000a)
   BB9D E0                 2373 	movx	a,@dptr
   BB9E FB                 2374 	mov	r3,a
   BB9F 90 66 61           2375 	mov	dptr,#(_train + 0x0021)
   BBA2 E0                 2376 	movx	a,@dptr
   BBA3 FC                 2377 	mov	r4,a
   BBA4 C0 02              2378 	push	ar2
   BBA6 C0 03              2379 	push	ar3
   BBA8 8C 82              2380 	mov	dpl,r4
   BBAA 78 64              2381 	mov	r0,#_clamp
   BBAC 79 C0              2382 	mov	r1,#(_clamp >> 8)
   BBAE 7A 02              2383 	mov	r2,#(_clamp >> 16)
   BBB0 12 00 B3           2384 	lcall	__sdcc_banked_call
   BBB3 AA 82              2385 	mov	r2,dpl
   BBB5 15 81              2386 	dec	sp
   BBB7 15 81              2387 	dec	sp
   BBB9 90 66 61           2388 	mov	dptr,#(_train + 0x0021)
   BBBC EA                 2389 	mov	a,r2
   BBBD F0                 2390 	movx	@dptr,a
                           2391 ;	../../shared/src/phase_train.c:143: cdr.num_count ++; //update number of rounds
   BBBE 90 66 B1           2392 	mov	dptr,#_cdr
   BBC1 E0                 2393 	movx	a,@dptr
   BBC2 FA                 2394 	mov	r2,a
   BBC3 0A                 2395 	inc	r2
   BBC4 90 66 B1           2396 	mov	dptr,#_cdr
   BBC7 EA                 2397 	mov	a,r2
   BBC8 F0                 2398 	movx	@dptr,a
                           2399 ;	../../shared/src/phase_train.c:146: dfe_adaptation();
   BBC9 78 AD              2400 	mov	r0,#_dfe_adaptation
   BBCB 79 9F              2401 	mov	r1,#(_dfe_adaptation >> 8)
   BBCD 7A 01              2402 	mov	r2,#(_dfe_adaptation >> 16)
   BBCF 12 00 B3           2403 	lcall	__sdcc_banked_call
                           2404 ;	../../shared/src/phase_train.c:147: calculatef0p();
   BBD2 78 99              2405 	mov	r0,#_calculatef0p
   BBD4 79 BF              2406 	mov	r1,#(_calculatef0p >> 8)
   BBD6 7A 01              2407 	mov	r2,#(_calculatef0p >> 16)
   BBD8 12 00 B3           2408 	lcall	__sdcc_banked_call
                           2409 ;	../../shared/src/phase_train.c:152: cdr.become_worse = (tag_CDR_STOP_IF_WORSE && (cdr.train_f0p < (cdr.opt_f0p - tag_CDR_STOPPING_THRE)));
   BBDB 90 66 B3           2410 	mov	dptr,#(_cdr + 0x0002)
   BBDE E0                 2411 	movx	a,@dptr
   BBDF FA                 2412 	mov	r2,a
   BBE0 90 66 B5           2413 	mov	dptr,#(_cdr + 0x0004)
   BBE3 E0                 2414 	movx	a,@dptr
   BBE4 FB                 2415 	mov	r3,a
   BBE5 7C 00              2416 	mov	r4,#0x00
   BBE7 24 FB              2417 	add	a,#0xfb
   BBE9 FD                 2418 	mov	r5,a
   BBEA EC                 2419 	mov	a,r4
   BBEB 34 FF              2420 	addc	a,#0xff
   BBED FE                 2421 	mov	r6,a
   BBEE 8A 07              2422 	mov	ar7,r2
   BBF0 78 00              2423 	mov	r0,#0x00
   BBF2 C3                 2424 	clr	c
   BBF3 EF                 2425 	mov	a,r7
   BBF4 9D                 2426 	subb	a,r5
   BBF5 E8                 2427 	mov	a,r0
   BBF6 64 80              2428 	xrl	a,#0x80
   BBF8 8E F0              2429 	mov	b,r6
   BBFA 63 F0 80           2430 	xrl	b,#0x80
   BBFD 95 F0              2431 	subb	a,b
   BBFF 40 04              2432 	jc	00125$
   BC01 7D 00              2433 	mov	r5,#0x00
   BC03 80 02              2434 	sjmp	00126$
   BC05                    2435 00125$:
   BC05 7D 01              2436 	mov	r5,#0x01
   BC07                    2437 00126$:
   BC07 90 66 BC           2438 	mov	dptr,#(_cdr + 0x000b)
   BC0A ED                 2439 	mov	a,r5
   BC0B F0                 2440 	movx	@dptr,a
                           2441 ;	../../shared/src/phase_train.c:157: if ( (train.level > cdr.opt_level) ||                              //0
   BC0C 90 66 63           2442 	mov	dptr,#(_train + 0x0023)
   BC0F E0                 2443 	movx	a,@dptr
   BC10 FD                 2444 	mov	r5,a
   BC11 90 66 B4           2445 	mov	dptr,#(_cdr + 0x0003)
   BC14 E0                 2446 	movx	a,@dptr
   BC15 FE                 2447 	mov	r6,a
   BC16 B5 05 00           2448 	cjne	a,ar5,00148$
   BC19                    2449 00148$:
   BC19 40 1B              2450 	jc	00109$
                           2451 ;	../../shared/src/phase_train.c:158: ((train.level == cdr.opt_level) && (cdr.train_f0p > (cdr.opt_f0p + tag_CDR_F0P_PHASEUPDATE_THRES)) )) // if the current train sampling phase has a larger f0p, update
   BC1B ED                 2452 	mov	a,r5
   BC1C B5 06 02           2453 	cjne	a,ar6,00150$
   BC1F 80 03              2454 	sjmp	00151$
   BC21                    2455 00150$:
   BC21 02 BA DD           2456 	ljmp	00120$
   BC24                    2457 00151$:
   BC24 C3                 2458 	clr	c
   BC25 EB                 2459 	mov	a,r3
   BC26 9F                 2460 	subb	a,r7
   BC27 EC                 2461 	mov	a,r4
   BC28 64 80              2462 	xrl	a,#0x80
   BC2A 88 F0              2463 	mov	b,r0
   BC2C 63 F0 80           2464 	xrl	b,#0x80
   BC2F 95 F0              2465 	subb	a,b
   BC31 40 03              2466 	jc	00152$
   BC33 02 BA DD           2467 	ljmp	00120$
   BC36                    2468 00152$:
   BC36                    2469 00109$:
                           2470 ;	../../shared/src/phase_train.c:160: cdr.opt_phase_offset = train.phase_offset_data; // update the phase offset
   BC36 90 66 61           2471 	mov	dptr,#(_train + 0x0021)
   BC39 E0                 2472 	movx	a,@dptr
   BC3A FB                 2473 	mov	r3,a
   BC3B 90 66 B6           2474 	mov	dptr,#(_cdr + 0x0005)
   BC3E F0                 2475 	movx	@dptr,a
                           2476 ;	../../shared/src/phase_train.c:161: cdr.opt_f0p = cdr.train_f0p; //update f0p
   BC3F 90 66 B5           2477 	mov	dptr,#(_cdr + 0x0004)
   BC42 EA                 2478 	mov	a,r2
   BC43 F0                 2479 	movx	@dptr,a
                           2480 ;	../../shared/src/phase_train.c:162: cdr.opt_level = train.level;
   BC44 90 66 B4           2481 	mov	dptr,#(_cdr + 0x0003)
   BC47 ED                 2482 	mov	a,r5
   BC48 F0                 2483 	movx	@dptr,a
   BC49 02 BA DD           2484 	ljmp	00120$
   BC4C                    2485 00122$:
   BC4C 02 00 C5           2486 	ljmp	__sdcc_banked_ret
                           2487 ;------------------------------------------------------------
                           2488 ;Allocation info for local variables in function 'cdr_phase_midpoint'
                           2489 ;------------------------------------------------------------
                           2490 ;thres_large               Allocated to registers r2 
                           2491 ;thres_small               Allocated to registers r3 
                           2492 ;------------------------------------------------------------
                           2493 ;	../../shared/src/phase_train.c:208: void cdr_phase_midpoint(void) BANKING_CTRL
                           2494 ;	-----------------------------------------
                           2495 ;	 function cdr_phase_midpoint
                           2496 ;	-----------------------------------------
   BC4F                    2497 _cdr_phase_midpoint:
                           2498 ;	../../shared/src/phase_train.c:215: cdr.direction = 0; //-1
   BC4F 90 66 B2           2499 	mov	dptr,#(_cdr + 0x0001)
                           2500 ;	../../shared/src/phase_train.c:216: cdr.become_worse = 0;
   BC52 E4                 2501 	clr	a
   BC53 F0                 2502 	movx	@dptr,a
   BC54 90 66 BC           2503 	mov	dptr,#(_cdr + 0x000b)
   BC57 F0                 2504 	movx	@dptr,a
                           2505 ;	../../shared/src/phase_train.c:217: train.phase_offset_data = cdr.opt_phase_offset;
   BC58 90 66 B6           2506 	mov	dptr,#(_cdr + 0x0005)
   BC5B E0                 2507 	movx	a,@dptr
   BC5C 90 66 61           2508 	mov	dptr,#(_train + 0x0021)
   BC5F F0                 2509 	movx	@dptr,a
                           2510 ;	../../shared/src/phase_train.c:219: dfe_adaptation();
   BC60 78 AD              2511 	mov	r0,#_dfe_adaptation
   BC62 79 9F              2512 	mov	r1,#(_dfe_adaptation >> 8)
   BC64 7A 01              2513 	mov	r2,#(_dfe_adaptation >> 16)
   BC66 12 00 B3           2514 	lcall	__sdcc_banked_call
                           2515 ;	../../shared/src/phase_train.c:220: calculatef0p();
   BC69 78 99              2516 	mov	r0,#_calculatef0p
   BC6B 79 BF              2517 	mov	r1,#(_calculatef0p >> 8)
   BC6D 7A 01              2518 	mov	r2,#(_calculatef0p >> 16)
   BC6F 12 00 B3           2519 	lcall	__sdcc_banked_call
                           2520 ;	../../shared/src/phase_train.c:221: cdr.opt_f0p = cdr.train_f0p; 
   BC72 90 66 B3           2521 	mov	dptr,#(_cdr + 0x0002)
   BC75 E0                 2522 	movx	a,@dptr
   BC76 FA                 2523 	mov	r2,a
   BC77 90 66 B5           2524 	mov	dptr,#(_cdr + 0x0004)
   BC7A F0                 2525 	movx	@dptr,a
                           2526 ;	../../shared/src/phase_train.c:222: cdr.opt_level = train.level;
   BC7B 90 66 63           2527 	mov	dptr,#(_train + 0x0023)
   BC7E E0                 2528 	movx	a,@dptr
   BC7F FB                 2529 	mov	r3,a
   BC80 90 66 B4           2530 	mov	dptr,#(_cdr + 0x0003)
   BC83 F0                 2531 	movx	@dptr,a
                           2532 ;	../../shared/src/phase_train.c:224: cdr.ini_phase_offset = cdr.opt_phase_offset;
   BC84 90 66 B6           2533 	mov	dptr,#(_cdr + 0x0005)
   BC87 E0                 2534 	movx	a,@dptr
   BC88 FC                 2535 	mov	r4,a
   BC89 90 66 B7           2536 	mov	dptr,#(_cdr + 0x0006)
   BC8C F0                 2537 	movx	@dptr,a
                           2538 ;	../../shared/src/phase_train.c:225: cdr.ini_level = cdr.opt_level;
   BC8D 90 66 B8           2539 	mov	dptr,#(_cdr + 0x0007)
   BC90 EB                 2540 	mov	a,r3
   BC91 F0                 2541 	movx	@dptr,a
                           2542 ;	../../shared/src/phase_train.c:226: cdr.ini_f0p = cdr.opt_f0p;
   BC92 90 66 B9           2543 	mov	dptr,#(_cdr + 0x0008)
   BC95 EA                 2544 	mov	a,r2
   BC96 F0                 2545 	movx	@dptr,a
                           2546 ;	../../shared/src/phase_train.c:227: cdr.phase_small = cdr.ini_phase_offset ;
   BC97 90 66 BD           2547 	mov	dptr,#(_cdr + 0x000c)
   BC9A EC                 2548 	mov	a,r4
   BC9B F0                 2549 	movx	@dptr,a
                           2550 ;	../../shared/src/phase_train.c:228: cdr.phase_large = cdr.ini_phase_offset ;
   BC9C 90 66 BE           2551 	mov	dptr,#(_cdr + 0x000d)
   BC9F EC                 2552 	mov	a,r4
   BCA0 F0                 2553 	movx	@dptr,a
                           2554 ;	../../shared/src/phase_train.c:235: if(lnx_SKIP_DFE_ADAPT_CDR_MIDPOINT_LANE) {	
   BCA1 90 60 98           2555 	mov	dptr,#_DFE_CONTROL_10
   BCA4 E0                 2556 	movx	a,@dptr
   BCA5 30 E5 06           2557 	jnb	acc.5,00156$
                           2558 ;	../../shared/src/phase_train.c:236: skip_dfe_adapt_cdr_midpoint = 1;
   BCA8 90 67 91           2559 	mov	dptr,#_skip_dfe_adapt_cdr_midpoint
   BCAB 74 01              2560 	mov	a,#0x01
   BCAD F0                 2561 	movx	@dptr,a
                           2562 ;	../../shared/src/phase_train.c:239: while (1)
   BCAE                    2563 00156$:
   BCAE                    2564 00125$:
                           2565 ;	../../shared/src/phase_train.c:244: if ((cdr.become_worse || ((train.phase_offset_data) <= cdr.min_phase_os)) 
   BCAE 90 66 BC           2566 	mov	dptr,#(_cdr + 0x000b)
   BCB1 E0                 2567 	movx	a,@dptr
   BCB2 70 16              2568 	jnz	00108$
   BCB4 90 66 61           2569 	mov	dptr,#(_train + 0x0021)
   BCB7 E0                 2570 	movx	a,@dptr
   BCB8 FA                 2571 	mov	r2,a
   BCB9 90 66 BA           2572 	mov	dptr,#(_cdr + 0x0009)
   BCBC E0                 2573 	movx	a,@dptr
   BCBD FB                 2574 	mov	r3,a
   BCBE C3                 2575 	clr	c
   BCBF 64 80              2576 	xrl	a,#0x80
   BCC1 8A F0              2577 	mov	b,r2
   BCC3 63 F0 80           2578 	xrl	b,#0x80
   BCC6 95 F0              2579 	subb	a,b
   BCC8 40 38              2580 	jc	00106$
   BCCA                    2581 00108$:
                           2582 ;	../../shared/src/phase_train.c:245: && (cdr.direction == 0)) //-1
   BCCA 90 66 B2           2583 	mov	dptr,#(_cdr + 0x0001)
   BCCD E0                 2584 	movx	a,@dptr
   BCCE 70 32              2585 	jnz	00106$
                           2586 ;	../../shared/src/phase_train.c:250: cdr.direction = 1;
   BCD0 90 66 B2           2587 	mov	dptr,#(_cdr + 0x0001)
   BCD3 74 01              2588 	mov	a,#0x01
   BCD5 F0                 2589 	movx	@dptr,a
                           2590 ;	../../shared/src/phase_train.c:251: cdr.num_count = 0;
   BCD6 90 66 B1           2591 	mov	dptr,#_cdr
                           2592 ;	../../shared/src/phase_train.c:252: cdr.become_worse = 0;
   BCD9 E4                 2593 	clr	a
   BCDA F0                 2594 	movx	@dptr,a
   BCDB 90 66 BC           2595 	mov	dptr,#(_cdr + 0x000b)
   BCDE F0                 2596 	movx	@dptr,a
                           2597 ;	../../shared/src/phase_train.c:253: train.phase_offset_data = cdr.ini_phase_offset;
   BCDF 90 66 B7           2598 	mov	dptr,#(_cdr + 0x0006)
   BCE2 E0                 2599 	movx	a,@dptr
   BCE3 90 66 61           2600 	mov	dptr,#(_train + 0x0021)
   BCE6 F0                 2601 	movx	@dptr,a
                           2602 ;	../../shared/src/phase_train.c:259: skip_dfe_adapt_cdr_midpoint = 0;
   BCE7 90 67 91           2603 	mov	dptr,#_skip_dfe_adapt_cdr_midpoint
   BCEA E4                 2604 	clr	a
   BCEB F0                 2605 	movx	@dptr,a
                           2606 ;	../../shared/src/phase_train.c:260: dfe_adaptation();
   BCEC 78 AD              2607 	mov	r0,#_dfe_adaptation
   BCEE 79 9F              2608 	mov	r1,#(_dfe_adaptation >> 8)
   BCF0 7A 01              2609 	mov	r2,#(_dfe_adaptation >> 16)
   BCF2 12 00 B3           2610 	lcall	__sdcc_banked_call
                           2611 ;	../../shared/src/phase_train.c:262: if(lnx_SKIP_DFE_ADAPT_CDR_MIDPOINT_LANE) {	
   BCF5 90 60 98           2612 	mov	dptr,#_DFE_CONTROL_10
   BCF8 E0                 2613 	movx	a,@dptr
   BCF9 30 E5 06           2614 	jnb	acc.5,00106$
                           2615 ;	../../shared/src/phase_train.c:263: skip_dfe_adapt_cdr_midpoint = 1;
   BCFC 90 67 91           2616 	mov	dptr,#_skip_dfe_adapt_cdr_midpoint
   BCFF 74 01              2617 	mov	a,#0x01
   BD01 F0                 2618 	movx	@dptr,a
   BD02                    2619 00106$:
                           2620 ;	../../shared/src/phase_train.c:268: if ((cdr.become_worse || ((train.phase_offset_data) >= cdr.max_phase_os)) 
   BD02 90 66 BC           2621 	mov	dptr,#(_cdr + 0x000b)
   BD05 E0                 2622 	movx	a,@dptr
   BD06 70 17              2623 	jnz	00123$
   BD08 90 66 61           2624 	mov	dptr,#(_train + 0x0021)
   BD0B E0                 2625 	movx	a,@dptr
   BD0C FA                 2626 	mov	r2,a
   BD0D 90 66 BB           2627 	mov	dptr,#(_cdr + 0x000a)
   BD10 E0                 2628 	movx	a,@dptr
   BD11 FB                 2629 	mov	r3,a
   BD12 C3                 2630 	clr	c
   BD13 EA                 2631 	mov	a,r2
   BD14 64 80              2632 	xrl	a,#0x80
   BD16 8B F0              2633 	mov	b,r3
   BD18 63 F0 80           2634 	xrl	b,#0x80
   BD1B 95 F0              2635 	subb	a,b
   BD1D 40 0B              2636 	jc	00120$
   BD1F                    2637 00123$:
                           2638 ;	../../shared/src/phase_train.c:269: && (cdr.direction == 1))	{ 
   BD1F 90 66 B2           2639 	mov	dptr,#(_cdr + 0x0001)
   BD22 E0                 2640 	movx	a,@dptr
   BD23 FA                 2641 	mov	r2,a
   BD24 BA 01 03           2642 	cjne	r2,#0x01,00166$
   BD27 02 BE A5           2643 	ljmp	00127$
   BD2A                    2644 00166$:
                           2645 ;	../../shared/src/phase_train.c:273: break;
   BD2A                    2646 00120$:
                           2647 ;	../../shared/src/phase_train.c:279: if( cdr.direction == 1)
   BD2A 90 66 B2           2648 	mov	dptr,#(_cdr + 0x0001)
   BD2D E0                 2649 	movx	a,@dptr
   BD2E FA                 2650 	mov	r2,a
   BD2F BA 01 0E           2651 	cjne	r2,#0x01,00110$
                           2652 ;	../../shared/src/phase_train.c:280: train.phase_offset_data += tag_CDR_PHASE_STEP_SIZE; 
   BD32 90 66 61           2653 	mov	dptr,#(_train + 0x0021)
   BD35 E0                 2654 	movx	a,@dptr
   BD36 FA                 2655 	mov	r2,a
   BD37 0A                 2656 	inc	r2
   BD38 0A                 2657 	inc	r2
   BD39 90 66 61           2658 	mov	dptr,#(_train + 0x0021)
   BD3C EA                 2659 	mov	a,r2
   BD3D F0                 2660 	movx	@dptr,a
   BD3E 80 0C              2661 	sjmp	00111$
   BD40                    2662 00110$:
                           2663 ;	../../shared/src/phase_train.c:282: train.phase_offset_data -= tag_CDR_PHASE_STEP_SIZE; 			
   BD40 90 66 61           2664 	mov	dptr,#(_train + 0x0021)
   BD43 E0                 2665 	movx	a,@dptr
   BD44 FA                 2666 	mov	r2,a
   BD45 1A                 2667 	dec	r2
   BD46 1A                 2668 	dec	r2
   BD47 90 66 61           2669 	mov	dptr,#(_train + 0x0021)
   BD4A EA                 2670 	mov	a,r2
   BD4B F0                 2671 	movx	@dptr,a
   BD4C                    2672 00111$:
                           2673 ;	../../shared/src/phase_train.c:283: train.phase_offset_data = clamp(train.phase_offset_data, cdr.max_phase_os, cdr.min_phase_os);
   BD4C 90 66 BA           2674 	mov	dptr,#(_cdr + 0x0009)
   BD4F E0                 2675 	movx	a,@dptr
   BD50 FA                 2676 	mov	r2,a
   BD51 90 66 BB           2677 	mov	dptr,#(_cdr + 0x000a)
   BD54 E0                 2678 	movx	a,@dptr
   BD55 FB                 2679 	mov	r3,a
   BD56 90 66 61           2680 	mov	dptr,#(_train + 0x0021)
   BD59 E0                 2681 	movx	a,@dptr
   BD5A FC                 2682 	mov	r4,a
   BD5B C0 02              2683 	push	ar2
   BD5D C0 03              2684 	push	ar3
   BD5F 8C 82              2685 	mov	dpl,r4
   BD61 78 64              2686 	mov	r0,#_clamp
   BD63 79 C0              2687 	mov	r1,#(_clamp >> 8)
   BD65 7A 02              2688 	mov	r2,#(_clamp >> 16)
   BD67 12 00 B3           2689 	lcall	__sdcc_banked_call
   BD6A AA 82              2690 	mov	r2,dpl
   BD6C 15 81              2691 	dec	sp
   BD6E 15 81              2692 	dec	sp
   BD70 90 66 61           2693 	mov	dptr,#(_train + 0x0021)
   BD73 EA                 2694 	mov	a,r2
   BD74 F0                 2695 	movx	@dptr,a
                           2696 ;	../../shared/src/phase_train.c:292: dfe_adaptation();
   BD75 78 AD              2697 	mov	r0,#_dfe_adaptation
   BD77 79 9F              2698 	mov	r1,#(_dfe_adaptation >> 8)
   BD79 7A 01              2699 	mov	r2,#(_dfe_adaptation >> 16)
   BD7B 12 00 B3           2700 	lcall	__sdcc_banked_call
                           2701 ;	../../shared/src/phase_train.c:293: calculatef0p();
   BD7E 78 99              2702 	mov	r0,#_calculatef0p
   BD80 79 BF              2703 	mov	r1,#(_calculatef0p >> 8)
   BD82 7A 01              2704 	mov	r2,#(_calculatef0p >> 16)
   BD84 12 00 B3           2705 	lcall	__sdcc_banked_call
                           2706 ;	../../shared/src/phase_train.c:298: thres_small = ((cdr.opt_f0p*tag_CDR_MIDPOINT_SMALL_THRES_K)>>tag_THRES_K_BASE) + tag_CDR_MIDPOINT_SMALL_THRES_C; //8 0
   BD87 90 66 B5           2707 	mov	dptr,#(_cdr + 0x0004)
   BD8A E0                 2708 	movx	a,@dptr
   BD8B FA                 2709 	mov	r2,a
   BD8C 90 60 52           2710 	mov	dptr,#(_TRAIN_CONTROL_0 + 0x0002)
   BD8F E0                 2711 	movx	a,@dptr
   BD90 C4                 2712 	swap	a
   BD91 54 0F              2713 	anl	a,#0x0f
   BD93 FB                 2714 	mov	r3,a
   BD94 7C 00              2715 	mov	r4,#0x00
   BD96 7D 00              2716 	mov	r5,#0x00
   BD98 C0 02              2717 	push	ar2
   BD9A C0 04              2718 	push	ar4
   BD9C C0 03              2719 	push	ar3
   BD9E C0 05              2720 	push	ar5
   BDA0 8A 82              2721 	mov	dpl,r2
   BDA2 8C 83              2722 	mov	dph,r4
   BDA4 12 7C E3           2723 	lcall	__mulint
   BDA7 AB 82              2724 	mov	r3,dpl
   BDA9 AD 83              2725 	mov	r5,dph
   BDAB 15 81              2726 	dec	sp
   BDAD 15 81              2727 	dec	sp
   BDAF D0 04              2728 	pop	ar4
   BDB1 D0 02              2729 	pop	ar2
   BDB3 ED                 2730 	mov	a,r5
   BDB4 C4                 2731 	swap	a
   BDB5 CB                 2732 	xch	a,r3
   BDB6 C4                 2733 	swap	a
   BDB7 54 0F              2734 	anl	a,#0x0f
   BDB9 6B                 2735 	xrl	a,r3
   BDBA CB                 2736 	xch	a,r3
   BDBB 54 0F              2737 	anl	a,#0x0f
   BDBD CB                 2738 	xch	a,r3
   BDBE 6B                 2739 	xrl	a,r3
   BDBF CB                 2740 	xch	a,r3
   BDC0 30 E3 02           2741 	jnb	acc.3,00169$
   BDC3 44 F0              2742 	orl	a,#0xf0
   BDC5                    2743 00169$:
   BDC5 90 60 52           2744 	mov	dptr,#(_TRAIN_CONTROL_0 + 0x0002)
   BDC8 E0                 2745 	movx	a,@dptr
   BDC9 54 0F              2746 	anl	a,#0x0f
   BDCB 2B                 2747 	add	a,r3
   BDCC FB                 2748 	mov	r3,a
                           2749 ;	../../shared/src/phase_train.c:299: thres_large = ((cdr.opt_f0p*tag_CDR_MIDPOINT_LARGE_THRES_K)>>tag_THRES_K_BASE) + tag_CDR_MIDPOINT_LARGE_THRES_C; //9 2
   BDCD 90 60 53           2750 	mov	dptr,#(_TRAIN_CONTROL_0 + 0x0003)
   BDD0 E0                 2751 	movx	a,@dptr
   BDD1 C4                 2752 	swap	a
   BDD2 54 0F              2753 	anl	a,#0x0f
   BDD4 FD                 2754 	mov	r5,a
   BDD5 7E 00              2755 	mov	r6,#0x00
   BDD7 C0 03              2756 	push	ar3
   BDD9 C0 05              2757 	push	ar5
   BDDB C0 06              2758 	push	ar6
   BDDD 8A 82              2759 	mov	dpl,r2
   BDDF 8C 83              2760 	mov	dph,r4
   BDE1 12 7C E3           2761 	lcall	__mulint
   BDE4 AA 82              2762 	mov	r2,dpl
   BDE6 AC 83              2763 	mov	r4,dph
   BDE8 15 81              2764 	dec	sp
   BDEA 15 81              2765 	dec	sp
   BDEC D0 03              2766 	pop	ar3
   BDEE EC                 2767 	mov	a,r4
   BDEF C4                 2768 	swap	a
   BDF0 CA                 2769 	xch	a,r2
   BDF1 C4                 2770 	swap	a
   BDF2 54 0F              2771 	anl	a,#0x0f
   BDF4 6A                 2772 	xrl	a,r2
   BDF5 CA                 2773 	xch	a,r2
   BDF6 54 0F              2774 	anl	a,#0x0f
   BDF8 CA                 2775 	xch	a,r2
   BDF9 6A                 2776 	xrl	a,r2
   BDFA CA                 2777 	xch	a,r2
   BDFB 30 E3 02           2778 	jnb	acc.3,00170$
   BDFE 44 F0              2779 	orl	a,#0xf0
   BE00                    2780 00170$:
   BE00 90 60 53           2781 	mov	dptr,#(_TRAIN_CONTROL_0 + 0x0003)
   BE03 E0                 2782 	movx	a,@dptr
   BE04 54 0F              2783 	anl	a,#0x0f
   BE06 2A                 2784 	add	a,r2
   BE07 FA                 2785 	mov	r2,a
                           2786 ;	../../shared/src/phase_train.c:300: cdr.become_worse = 
                           2787 ;	../../shared/src/phase_train.c:301: ( ( (cdr.direction == 0) && (cdr.train_f0p < thres_small) ) 
   BE08 90 66 B2           2788 	mov	dptr,#(_cdr + 0x0001)
   BE0B E0                 2789 	movx	a,@dptr
   BE0C FC                 2790 	mov	r4,a
   BE0D 60 02              2791 	jz	00172$
   BE0F 80 1B              2792 	sjmp	00136$
   BE11                    2793 00172$:
   BE11 90 66 B3           2794 	mov	dptr,#(_cdr + 0x0002)
   BE14 E0                 2795 	movx	a,@dptr
   BE15 FD                 2796 	mov	r5,a
   BE16 7E 00              2797 	mov	r6,#0x00
   BE18 EB                 2798 	mov	a,r3
   BE19 33                 2799 	rlc	a
   BE1A 95 E0              2800 	subb	a,acc
   BE1C FF                 2801 	mov	r7,a
   BE1D C3                 2802 	clr	c
   BE1E ED                 2803 	mov	a,r5
   BE1F 9B                 2804 	subb	a,r3
   BE20 EE                 2805 	mov	a,r6
   BE21 64 80              2806 	xrl	a,#0x80
   BE23 8F F0              2807 	mov	b,r7
   BE25 63 F0 80           2808 	xrl	b,#0x80
   BE28 95 F0              2809 	subb	a,b
   BE2A 40 04              2810 	jc	00137$
   BE2C                    2811 00136$:
   BE2C 7B 00              2812 	mov	r3,#0x00
   BE2E 80 02              2813 	sjmp	00138$
   BE30                    2814 00137$:
   BE30 7B 01              2815 	mov	r3,#0x01
   BE32                    2816 00138$:
   BE32 EB                 2817 	mov	a,r3
   BE33 70 2A              2818 	jnz	00134$
                           2819 ;	../../shared/src/phase_train.c:302: || ( cdr.direction == 1 && (cdr.train_f0p < thres_large) )
   BE35 BC 01 1B           2820 	cjne	r4,#0x01,00139$
   BE38 90 66 B3           2821 	mov	dptr,#(_cdr + 0x0002)
   BE3B E0                 2822 	movx	a,@dptr
   BE3C FB                 2823 	mov	r3,a
   BE3D 7D 00              2824 	mov	r5,#0x00
   BE3F EA                 2825 	mov	a,r2
   BE40 33                 2826 	rlc	a
   BE41 95 E0              2827 	subb	a,acc
   BE43 FE                 2828 	mov	r6,a
   BE44 C3                 2829 	clr	c
   BE45 EB                 2830 	mov	a,r3
   BE46 9A                 2831 	subb	a,r2
   BE47 ED                 2832 	mov	a,r5
   BE48 64 80              2833 	xrl	a,#0x80
   BE4A 8E F0              2834 	mov	b,r6
   BE4C 63 F0 80           2835 	xrl	b,#0x80
   BE4F 95 F0              2836 	subb	a,b
   BE51 40 04              2837 	jc	00140$
   BE53                    2838 00139$:
   BE53 7A 00              2839 	mov	r2,#0x00
   BE55 80 02              2840 	sjmp	00141$
   BE57                    2841 00140$:
   BE57 7A 01              2842 	mov	r2,#0x01
   BE59                    2843 00141$:
   BE59 EA                 2844 	mov	a,r2
   BE5A 70 03              2845 	jnz	00134$
   BE5C FA                 2846 	mov	r2,a
   BE5D 80 02              2847 	sjmp	00135$
   BE5F                    2848 00134$:
   BE5F 7A 01              2849 	mov	r2,#0x01
   BE61                    2850 00135$:
   BE61 EA                 2851 	mov	a,r2
   BE62 70 0B              2852 	jnz	00131$
                           2853 ;	../../shared/src/phase_train.c:303: || (cdr.train_f0p == 0)
   BE64 90 66 B3           2854 	mov	dptr,#(_cdr + 0x0002)
   BE67 E0                 2855 	movx	a,@dptr
   BE68 FA                 2856 	mov	r2,a
   BE69 60 04              2857 	jz	00131$
   BE6B 7A 00              2858 	mov	r2,#0x00
   BE6D 80 02              2859 	sjmp	00132$
   BE6F                    2860 00131$:
   BE6F 7A 01              2861 	mov	r2,#0x01
   BE71                    2862 00132$:
                           2863 ;	../../shared/src/phase_train.c:309: if (!cdr.become_worse && cdr.direction == 0) // update phase_small and phase_large
   BE71 90 66 BC           2864 	mov	dptr,#(_cdr + 0x000b)
   BE74 EA                 2865 	mov	a,r2
   BE75 F0                 2866 	movx	@dptr,a
   BE76 E0                 2867 	movx	a,@dptr
   BE77 70 0F              2868 	jnz	00116$
   BE79 EC                 2869 	mov	a,r4
   BE7A 70 0C              2870 	jnz	00116$
                           2871 ;	../../shared/src/phase_train.c:311: cdr.phase_small = train.phase_offset_data;
   BE7C 90 66 61           2872 	mov	dptr,#(_train + 0x0021)
   BE7F E0                 2873 	movx	a,@dptr
   BE80 FA                 2874 	mov	r2,a
   BE81 90 66 BD           2875 	mov	dptr,#(_cdr + 0x000c)
   BE84 F0                 2876 	movx	@dptr,a
   BE85 02 BC AE           2877 	ljmp	00125$
   BE88                    2878 00116$:
                           2879 ;	../../shared/src/phase_train.c:316: else if (!cdr.become_worse && cdr.direction == 1)
   BE88 90 66 BC           2880 	mov	dptr,#(_cdr + 0x000b)
   BE8B E0                 2881 	movx	a,@dptr
   BE8C 60 03              2882 	jz	00183$
   BE8E 02 BC AE           2883 	ljmp	00125$
   BE91                    2884 00183$:
   BE91 BC 01 02           2885 	cjne	r4,#0x01,00184$
   BE94 80 03              2886 	sjmp	00185$
   BE96                    2887 00184$:
   BE96 02 BC AE           2888 	ljmp	00125$
   BE99                    2889 00185$:
                           2890 ;	../../shared/src/phase_train.c:318: cdr.phase_large = train.phase_offset_data;
   BE99 90 66 61           2891 	mov	dptr,#(_train + 0x0021)
   BE9C E0                 2892 	movx	a,@dptr
   BE9D FA                 2893 	mov	r2,a
   BE9E 90 66 BE           2894 	mov	dptr,#(_cdr + 0x000d)
   BEA1 F0                 2895 	movx	@dptr,a
   BEA2 02 BC AE           2896 	ljmp	00125$
                           2897 ;	../../shared/src/phase_train.c:326: End_State:
   BEA5                    2898 00127$:
                           2899 ;	../../shared/src/phase_train.c:327: cdr.opt_phase_offset = ((cdr.phase_small + cdr.phase_large) >> 1);// + cdr_midpoint_phase_os; //tag_CDR_MIDPOINT_PHASE_OS=0
   BEA5 90 66 BD           2900 	mov	dptr,#(_cdr + 0x000c)
   BEA8 E0                 2901 	movx	a,@dptr
   BEA9 FA                 2902 	mov	r2,a
   BEAA 33                 2903 	rlc	a
   BEAB 95 E0              2904 	subb	a,acc
   BEAD FB                 2905 	mov	r3,a
   BEAE 90 66 BE           2906 	mov	dptr,#(_cdr + 0x000d)
   BEB1 E0                 2907 	movx	a,@dptr
   BEB2 FC                 2908 	mov	r4,a
   BEB3 33                 2909 	rlc	a
   BEB4 95 E0              2910 	subb	a,acc
   BEB6 FD                 2911 	mov	r5,a
   BEB7 EC                 2912 	mov	a,r4
   BEB8 2A                 2913 	add	a,r2
   BEB9 FA                 2914 	mov	r2,a
   BEBA ED                 2915 	mov	a,r5
   BEBB 3B                 2916 	addc	a,r3
   BEBC A2 E7              2917 	mov	c,acc.7
   BEBE 13                 2918 	rrc	a
   BEBF CA                 2919 	xch	a,r2
   BEC0 13                 2920 	rrc	a
   BEC1 CA                 2921 	xch	a,r2
   BEC2 90 66 B6           2922 	mov	dptr,#(_cdr + 0x0005)
   BEC5 EA                 2923 	mov	a,r2
   BEC6 F0                 2924 	movx	@dptr,a
                           2925 ;	../../shared/src/phase_train.c:328: cdr.opt_phase_offset = clamp(cdr.opt_phase_offset, cdr.max_phase_os, cdr.min_phase_os);
   BEC7 90 66 BA           2926 	mov	dptr,#(_cdr + 0x0009)
   BECA E0                 2927 	movx	a,@dptr
   BECB FB                 2928 	mov	r3,a
   BECC 90 66 BB           2929 	mov	dptr,#(_cdr + 0x000a)
   BECF E0                 2930 	movx	a,@dptr
   BED0 FC                 2931 	mov	r4,a
   BED1 C0 03              2932 	push	ar3
   BED3 C0 04              2933 	push	ar4
   BED5 8A 82              2934 	mov	dpl,r2
   BED7 78 64              2935 	mov	r0,#_clamp
   BED9 79 C0              2936 	mov	r1,#(_clamp >> 8)
   BEDB 7A 02              2937 	mov	r2,#(_clamp >> 16)
   BEDD 12 00 B3           2938 	lcall	__sdcc_banked_call
   BEE0 AA 82              2939 	mov	r2,dpl
   BEE2 15 81              2940 	dec	sp
   BEE4 15 81              2941 	dec	sp
   BEE6 90 66 B6           2942 	mov	dptr,#(_cdr + 0x0005)
   BEE9 EA                 2943 	mov	a,r2
   BEEA F0                 2944 	movx	@dptr,a
                           2945 ;	../../shared/src/phase_train.c:330: lnx_EYE_LEFT_2C_LANE_7_0 = (uint8_t)cdr.phase_small;
   BEEB 90 66 BD           2946 	mov	dptr,#(_cdr + 0x000c)
   BEEE E0                 2947 	movx	a,@dptr
   BEEF FA                 2948 	mov	r2,a
   BEF0 90 60 73           2949 	mov	dptr,#(_TRAIN_PARA_2 + 0x0003)
   BEF3 EA                 2950 	mov	a,r2
   BEF4 F0                 2951 	movx	@dptr,a
                           2952 ;	../../shared/src/phase_train.c:331: lnx_EYE_RIGHT_2C_LANE_7_0 = (uint8_t)cdr.phase_large;	
   BEF5 90 66 BE           2953 	mov	dptr,#(_cdr + 0x000d)
   BEF8 E0                 2954 	movx	a,@dptr
   BEF9 FA                 2955 	mov	r2,a
   BEFA 90 60 72           2956 	mov	dptr,#(_TRAIN_PARA_2 + 0x0002)
   BEFD EA                 2957 	mov	a,r2
   BEFE F0                 2958 	movx	@dptr,a
                           2959 ;	../../shared/src/phase_train.c:332: lnx_EYE_MID_2C_LANE_7_0 = (uint8_t)cdr.opt_phase_offset;	
   BEFF 90 66 B6           2960 	mov	dptr,#(_cdr + 0x0005)
   BF02 E0                 2961 	movx	a,@dptr
   BF03 FA                 2962 	mov	r2,a
   BF04 90 60 94           2963 	mov	dptr,#_DFE_CONTROL_9
   BF07 EA                 2964 	mov	a,r2
   BF08 F0                 2965 	movx	@dptr,a
   BF09 02 00 C5           2966 	ljmp	__sdcc_banked_ret
                           2967 ;------------------------------------------------------------
                           2968 ;Allocation info for local variables in function 'cdr_phase_opt_final_processing'
                           2969 ;------------------------------------------------------------
                           2970 ;------------------------------------------------------------
                           2971 ;	../../shared/src/phase_train.c:349: void cdr_phase_opt_final_processing(void) BANKING_CTRL
                           2972 ;	-----------------------------------------
                           2973 ;	 function cdr_phase_opt_final_processing
                           2974 ;	-----------------------------------------
   BF0C                    2975 _cdr_phase_opt_final_processing:
                           2976 ;	../../shared/src/phase_train.c:355: train.phase_offset_data = cdr.opt_phase_offset + cdr_midpoint_phase_os; 
   BF0C 90 66 B6           2977 	mov	dptr,#(_cdr + 0x0005)
   BF0F E0                 2978 	movx	a,@dptr
   BF10 FA                 2979 	mov	r2,a
   BF11 90 66 CB           2980 	mov	dptr,#_cdr_midpoint_phase_os
   BF14 E0                 2981 	movx	a,@dptr
   BF15 2A                 2982 	add	a,r2
   BF16 90 66 61           2983 	mov	dptr,#(_train + 0x0021)
   BF19 F0                 2984 	movx	@dptr,a
                           2985 ;	../../shared/src/phase_train.c:357: dfe_adaptation();
   BF1A 78 AD              2986 	mov	r0,#_dfe_adaptation
   BF1C 79 9F              2987 	mov	r1,#(_dfe_adaptation >> 8)
   BF1E 7A 01              2988 	mov	r2,#(_dfe_adaptation >> 16)
   BF20 12 00 B3           2989 	lcall	__sdcc_banked_call
                           2990 ;	../../shared/src/phase_train.c:358: calculatef0p();
   BF23 78 99              2991 	mov	r0,#_calculatef0p
   BF25 79 BF              2992 	mov	r1,#(_calculatef0p >> 8)
   BF27 7A 01              2993 	mov	r2,#(_calculatef0p >> 16)
   BF29 12 00 B3           2994 	lcall	__sdcc_banked_call
                           2995 ;	../../shared/src/phase_train.c:368: if (( (train.level < cdr.ini_level && tag_CDR_PHASE_LEVEL_PROTECT_EN) || 
   BF2C 90 66 63           2996 	mov	dptr,#(_train + 0x0023)
   BF2F E0                 2997 	movx	a,@dptr
   BF30 FA                 2998 	mov	r2,a
   BF31 90 66 B8           2999 	mov	dptr,#(_cdr + 0x0007)
   BF34 E0                 3000 	movx	a,@dptr
   BF35 FB                 3001 	mov	r3,a
   BF36 EA                 3002 	mov	a,r2
   BF37 B5 03 00           3003 	cjne	a,ar3,00116$
   BF3A                    3004 00116$:
   BF3A 40 2A              3005 	jc	00104$
                           3006 ;	../../shared/src/phase_train.c:369: ((train.level == cdr.ini_level) && (cdr.train_f0p < (cdr.ini_f0p - tag_CDR_F0P_REJECT_THRES))) || //8
   BF3C EA                 3007 	mov	a,r2
   BF3D B5 03 23           3008 	cjne	a,ar3,00110$
   BF40 90 66 B3           3009 	mov	dptr,#(_cdr + 0x0002)
   BF43 E0                 3010 	movx	a,@dptr
   BF44 FB                 3011 	mov	r3,a
   BF45 90 66 B9           3012 	mov	dptr,#(_cdr + 0x0008)
   BF48 E0                 3013 	movx	a,@dptr
   BF49 7D 00              3014 	mov	r5,#0x00
   BF4B 24 F8              3015 	add	a,#0xf8
   BF4D FC                 3016 	mov	r4,a
   BF4E ED                 3017 	mov	a,r5
   BF4F 34 FF              3018 	addc	a,#0xff
   BF51 FD                 3019 	mov	r5,a
   BF52 7E 00              3020 	mov	r6,#0x00
   BF54 C3                 3021 	clr	c
   BF55 EB                 3022 	mov	a,r3
   BF56 9C                 3023 	subb	a,r4
   BF57 EE                 3024 	mov	a,r6
   BF58 64 80              3025 	xrl	a,#0x80
   BF5A 8D F0              3026 	mov	b,r5
   BF5C 63 F0 80           3027 	xrl	b,#0x80
   BF5F 95 F0              3028 	subb	a,b
   BF61 40 03              3029 	jc	00104$
   BF63                    3030 00110$:
                           3031 ;	../../shared/src/phase_train.c:370: (train.level == 0 && tag_CDR_PHASE_EO_PROTECT_EN) ))
   BF63 EA                 3032 	mov	a,r2
   BF64 70 30              3033 	jnz	00111$
   BF66                    3034 00104$:
                           3035 ;	../../shared/src/phase_train.c:384: train.phase_offset_data = cdr.ini_phase_offset; 
   BF66 90 66 B7           3036 	mov	dptr,#(_cdr + 0x0006)
   BF69 E0                 3037 	movx	a,@dptr
   BF6A 90 66 61           3038 	mov	dptr,#(_train + 0x0021)
   BF6D F0                 3039 	movx	@dptr,a
                           3040 ;	../../shared/src/phase_train.c:386: dfe_adaptation(); 
   BF6E 78 AD              3041 	mov	r0,#_dfe_adaptation
   BF70 79 9F              3042 	mov	r1,#(_dfe_adaptation >> 8)
   BF72 7A 01              3043 	mov	r2,#(_dfe_adaptation >> 16)
   BF74 12 00 B3           3044 	lcall	__sdcc_banked_call
                           3045 ;	../../shared/src/phase_train.c:388: if (tag_SAME_SET_NO_UPDATE || cdr.ini_level > train.level) //tag_SAME_SET_NO_UPDATE=1
   BF77 90 60 47           3046 	mov	dptr,#(_DFE_CONTROL_3 + 0x0003)
   BF7A E0                 3047 	movx	a,@dptr
   BF7B 20 E2 0F           3048 	jb	acc.2,00101$
   BF7E 90 66 B8           3049 	mov	dptr,#(_cdr + 0x0007)
   BF81 E0                 3050 	movx	a,@dptr
   BF82 FA                 3051 	mov	r2,a
   BF83 90 66 63           3052 	mov	dptr,#(_train + 0x0023)
   BF86 E0                 3053 	movx	a,@dptr
   BF87 FB                 3054 	mov	r3,a
   BF88 B5 02 00           3055 	cjne	a,ar2,00123$
   BF8B                    3056 00123$:
   BF8B 50 09              3057 	jnc	00111$
   BF8D                    3058 00101$:
                           3059 ;	../../shared/src/phase_train.c:390: train.level = cdr.ini_level;
   BF8D 90 66 B8           3060 	mov	dptr,#(_cdr + 0x0007)
   BF90 E0                 3061 	movx	a,@dptr
   BF91 FA                 3062 	mov	r2,a
   BF92 90 66 63           3063 	mov	dptr,#(_train + 0x0023)
   BF95 F0                 3064 	movx	@dptr,a
   BF96                    3065 00111$:
   BF96 02 00 C5           3066 	ljmp	__sdcc_banked_ret
                           3067 ;------------------------------------------------------------
                           3068 ;Allocation info for local variables in function 'calculatef0p'
                           3069 ;------------------------------------------------------------
                           3070 ;------------------------------------------------------------
                           3071 ;	../../shared/src/phase_train.c:419: void calculatef0p(void) BANKING_CTRL
                           3072 ;	-----------------------------------------
                           3073 ;	 function calculatef0p
                           3074 ;	-----------------------------------------
   BF99                    3075 _calculatef0p:
                           3076 ;	../../shared/src/phase_train.c:431: if(train.eye_check_pass) {
   BF99 90 66 55           3077 	mov	dptr,#(_train + 0x0015)
   BF9C E0                 3078 	movx	a,@dptr
   BF9D 60 0B              3079 	jz	00102$
                           3080 ;	../../shared/src/phase_train.c:433: cdr.train_f0p = train.eo;
   BF9F 90 66 5F           3081 	mov	dptr,#(_train + 0x001f)
   BFA2 E0                 3082 	movx	a,@dptr
   BFA3 FA                 3083 	mov	r2,a
   BFA4 90 66 B3           3084 	mov	dptr,#(_cdr + 0x0002)
   BFA7 F0                 3085 	movx	@dptr,a
   BFA8 80 05              3086 	sjmp	00104$
   BFAA                    3087 00102$:
                           3088 ;	../../shared/src/phase_train.c:438: else cdr.train_f0p = 0;		
   BFAA 90 66 B3           3089 	mov	dptr,#(_cdr + 0x0002)
   BFAD E4                 3090 	clr	a
   BFAE F0                 3091 	movx	@dptr,a
   BFAF                    3092 00104$:
   BFAF 02 00 C5           3093 	ljmp	__sdcc_banked_ret
                           3094 ;------------------------------------------------------------
                           3095 ;Allocation info for local variables in function 'advanced_clk_align'
                           3096 ;------------------------------------------------------------
                           3097 ;sum                       Allocated to registers r2 r3 
                           3098 ;align_ref                 Allocated to registers r2 
                           3099 ;align_tap                 Allocated to registers r5 
                           3100 ;clock_align_run1_index    Allocated to stack - offset 1
                           3101 ;clk_sum                   Allocated to stack - offset 2
                           3102 ;clk_step                  Allocated to registers r7 r6 
                           3103 ;------------------------------------------------------------
                           3104 ;	../../shared/src/phase_train.c:449: void advanced_clk_align(void) BANKING_CTRL {
                           3105 ;	-----------------------------------------
                           3106 ;	 function advanced_clk_align
                           3107 ;	-----------------------------------------
   BFB2                    3108 _advanced_clk_align:
   BFB2 C0 18              3109 	push	_bp
   BFB4 85 81 18           3110 	mov	_bp,sp
   BFB7 05 81              3111 	inc	sp
   BFB9 05 81              3112 	inc	sp
   BFBB 05 81              3113 	inc	sp
                           3114 ;	../../shared/src/phase_train.c:463: if(TRAIN_SIM_EN) return;
   BFBD 90 E6 07           3115 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   BFC0 E0                 3116 	movx	a,@dptr
   BFC1 30 E2 03           3117 	jnb	acc.2,00102$
   BFC4 02 C2 9D           3118 	ljmp	00142$
   BFC7                    3119 00102$:
                           3120 ;	../../shared/src/phase_train.c:465: if(lnx_OFST_ALIGN_ADV_CLK_ALIGN_EN_LANE) {
   BFC7 90 60 8E           3121 	mov	dptr,#(_DFE_CONTROL_7 + 0x0002)
   BFCA E0                 3122 	movx	a,@dptr
   BFCB 30 E0 06           3123 	jnb	acc.0,00104$
                           3124 ;	../../shared/src/phase_train.c:466: cds_dfe_ofst = 1;
   BFCE 90 67 92           3125 	mov	dptr,#_cds_dfe_ofst
   BFD1 74 01              3126 	mov	a,#0x01
   BFD3 F0                 3127 	movx	@dptr,a
   BFD4                    3128 00104$:
                           3129 ;	../../shared/src/phase_train.c:469: sum = 0;
   BFD4 7A 00              3130 	mov	r2,#0x00
   BFD6 7B 00              3131 	mov	r3,#0x00
                           3132 ;	../../shared/src/phase_train.c:472: do {
   BFD8 7C 01              3133 	mov	r4,#0x01
   BFDA                    3134 00105$:
                           3135 ;	../../shared/src/phase_train.c:473: align_tap = dfe_adapt_align();
   BFDA C0 02              3136 	push	ar2
   BFDC C0 03              3137 	push	ar3
   BFDE C0 04              3138 	push	ar4
   BFE0 78 A5              3139 	mov	r0,#_dfe_adapt_align
   BFE2 79 C2              3140 	mov	r1,#(_dfe_adapt_align >> 8)
   BFE4 7A 01              3141 	mov	r2,#(_dfe_adapt_align >> 16)
   BFE6 12 00 B3           3142 	lcall	__sdcc_banked_call
   BFE9 AD 82              3143 	mov	r5,dpl
   BFEB D0 04              3144 	pop	ar4
   BFED D0 03              3145 	pop	ar3
   BFEF D0 02              3146 	pop	ar2
                           3147 ;	../../shared/src/phase_train.c:474: sum += align_tap;
   BFF1 ED                 3148 	mov	a,r5
   BFF2 FE                 3149 	mov	r6,a
   BFF3 33                 3150 	rlc	a
   BFF4 95 E0              3151 	subb	a,acc
   BFF6 FF                 3152 	mov	r7,a
   BFF7 EE                 3153 	mov	a,r6
   BFF8 2A                 3154 	add	a,r2
   BFF9 FA                 3155 	mov	r2,a
   BFFA EF                 3156 	mov	a,r7
   BFFB 3B                 3157 	addc	a,r3
   BFFC FB                 3158 	mov	r3,a
                           3159 ;	../../shared/src/phase_train.c:481: } while (clock_align_run1_index++<(1<<tag_CLOCK_ALIGN_RUN1_NUM));
   BFFD 8C 06              3160 	mov	ar6,r4
   BFFF 0C                 3161 	inc	r4
   C000 BE 10 00           3162 	cjne	r6,#0x10,00184$
   C003                    3163 00184$:
   C003 40 D5              3164 	jc	00105$
                           3165 ;	../../shared/src/phase_train.c:483: align_ref = (int8_t)(sum>>tag_CLOCK_ALIGN_RUN1_NUM);
   C005 EB                 3166 	mov	a,r3
   C006 C4                 3167 	swap	a
   C007 CA                 3168 	xch	a,r2
   C008 C4                 3169 	swap	a
   C009 54 0F              3170 	anl	a,#0x0f
   C00B 6A                 3171 	xrl	a,r2
   C00C CA                 3172 	xch	a,r2
   C00D 54 0F              3173 	anl	a,#0x0f
   C00F CA                 3174 	xch	a,r2
   C010 6A                 3175 	xrl	a,r2
   C011 CA                 3176 	xch	a,r2
   C012 30 E3 02           3177 	jnb	acc.3,00186$
   C015 44 F0              3178 	orl	a,#0xf0
   C017                    3179 00186$:
                           3180 ;	../../shared/src/phase_train.c:493: ph_control_mode = 0;
   C017 90 66 F8           3181 	mov	dptr,#_ph_control_mode
   C01A E4                 3182 	clr	a
   C01B F0                 3183 	movx	@dptr,a
                           3184 ;	../../shared/src/phase_train.c:494: cdr.min_phase_os = (ph_control_mode == 0 || ph_control_mode == 1)? tag_CDR_MIN_PHASE_OS_MODE01:tag_CDR_MIN_PHASE_OS_MODE23;
   C01C 90 66 BA           3185 	mov	dptr,#(_cdr + 0x0009)
   C01F 74 E4              3186 	mov	a,#0xE4
   C021 F0                 3187 	movx	@dptr,a
                           3188 ;	../../shared/src/phase_train.c:495: cdr.max_phase_os = (ph_control_mode == 0 || ph_control_mode == 1)? tag_CDR_MAX_PHASE_OS_MODE01:tag_CDR_MAX_PHASE_OS_MODE23;
   C022 90 66 BB           3189 	mov	dptr,#(_cdr + 0x000a)
   C025 74 12              3190 	mov	a,#0x12
   C027 F0                 3191 	movx	@dptr,a
                           3192 ;	../../shared/src/phase_train.c:496: set_ph_mode();
   C028 C0 02              3193 	push	ar2
   C02A 78 3B              3194 	mov	r0,#_set_ph_mode
   C02C 79 97              3195 	mov	r1,#(_set_ph_mode >> 8)
   C02E 7A 02              3196 	mov	r2,#(_set_ph_mode >> 16)
   C030 12 00 B3           3197 	lcall	__sdcc_banked_call
                           3198 ;	../../shared/src/phase_train.c:498: adapt_data_en = 1; //??
   C033 D2 0D              3199 	setb	_adapt_data_en
                           3200 ;	../../shared/src/phase_train.c:499: adapt_slicer_en = 1;
   C035 D2 0C              3201 	setb	_adapt_slicer_en
                           3202 ;	../../shared/src/phase_train.c:501: cdr.ini_phase_offset = train.phase_offset_data;
   C037 90 66 61           3203 	mov	dptr,#(_train + 0x0021)
   C03A E0                 3204 	movx	a,@dptr
   C03B FB                 3205 	mov	r3,a
   C03C 90 66 B7           3206 	mov	dptr,#(_cdr + 0x0006)
   C03F F0                 3207 	movx	@dptr,a
                           3208 ;	../../shared/src/phase_train.c:502: adapted_phase = clamp( train.phase_offset_data, cdr.max_phase_os, cdr.min_phase_os);
   C040 90 66 BA           3209 	mov	dptr,#(_cdr + 0x0009)
   C043 E0                 3210 	movx	a,@dptr
   C044 FC                 3211 	mov	r4,a
   C045 90 66 BB           3212 	mov	dptr,#(_cdr + 0x000a)
   C048 E0                 3213 	movx	a,@dptr
   C049 FE                 3214 	mov	r6,a
   C04A C0 04              3215 	push	ar4
   C04C C0 06              3216 	push	ar6
   C04E 8B 82              3217 	mov	dpl,r3
   C050 78 64              3218 	mov	r0,#_clamp
   C052 79 C0              3219 	mov	r1,#(_clamp >> 8)
   C054 7A 02              3220 	mov	r2,#(_clamp >> 16)
   C056 12 00 B3           3221 	lcall	__sdcc_banked_call
   C059 AB 82              3222 	mov	r3,dpl
   C05B 15 81              3223 	dec	sp
   C05D 15 81              3224 	dec	sp
   C05F 90 66 F9           3225 	mov	dptr,#_adapted_phase
   C062 EB                 3226 	mov	a,r3
   C063 F0                 3227 	movx	@dptr,a
                           3228 ;	../../shared/src/phase_train.c:503: train.phase_offset_esm = 0;
   C064 90 66 62           3229 	mov	dptr,#(_train + 0x0022)
   C067 E4                 3230 	clr	a
   C068 F0                 3231 	movx	@dptr,a
                           3232 ;	../../shared/src/phase_train.c:504: phase_control_func();
   C069 12 2D F3           3233 	lcall	_phase_control_func
   C06C D0 02              3234 	pop	ar2
                           3235 ;	../../shared/src/phase_train.c:512: clk_sum = 0; clk_step = 0;
   C06E A8 18              3236 	mov	r0,_bp
   C070 08                 3237 	inc	r0
   C071 08                 3238 	inc	r0
   C072 76 00              3239 	mov	@r0,#0x00
   C074 08                 3240 	inc	r0
   C075 76 00              3241 	mov	@r0,#0x00
                           3242 ;	../../shared/src/phase_train.c:513: do {
   C077 A8 18              3243 	mov	r0,_bp
   C079 08                 3244 	inc	r0
   C07A 76 00              3245 	mov	@r0,#0x00
   C07C                    3246 00121$:
                           3247 ;	../../shared/src/phase_train.c:514: align_tap = dfe_adapt_align();
   C07C C0 02              3248 	push	ar2
   C07E 78 A5              3249 	mov	r0,#_dfe_adapt_align
   C080 79 C2              3250 	mov	r1,#(_dfe_adapt_align >> 8)
   C082 7A 01              3251 	mov	r2,#(_dfe_adapt_align >> 16)
   C084 12 00 B3           3252 	lcall	__sdcc_banked_call
   C087 AF 82              3253 	mov	r7,dpl
   C089 D0 02              3254 	pop	ar2
   C08B 8F 05              3255 	mov	ar5,r7
                           3256 ;	../../shared/src/phase_train.c:517: if(align_tap<align_ref) 
   C08D C3                 3257 	clr	c
   C08E ED                 3258 	mov	a,r5
   C08F 64 80              3259 	xrl	a,#0x80
   C091 8A F0              3260 	mov	b,r2
   C093 63 F0 80           3261 	xrl	b,#0x80
   C096 95 F0              3262 	subb	a,b
   C098 50 0C              3263 	jnc	00111$
                           3264 ;	../../shared/src/phase_train.c:518: clk_sum--;
   C09A A8 18              3265 	mov	r0,_bp
   C09C 08                 3266 	inc	r0
   C09D 08                 3267 	inc	r0
   C09E 16                 3268 	dec	@r0
   C09F B6 FF 02           3269 	cjne	@r0,#0xff,00188$
   C0A2 08                 3270 	inc	r0
   C0A3 16                 3271 	dec	@r0
   C0A4                    3272 00188$:
   C0A4 80 17              3273 	sjmp	00112$
   C0A6                    3274 00111$:
                           3275 ;	../../shared/src/phase_train.c:519: else if(align_tap>align_ref)	
   C0A6 C3                 3276 	clr	c
   C0A7 EA                 3277 	mov	a,r2
   C0A8 64 80              3278 	xrl	a,#0x80
   C0AA 8D F0              3279 	mov	b,r5
   C0AC 63 F0 80           3280 	xrl	b,#0x80
   C0AF 95 F0              3281 	subb	a,b
   C0B1 50 0A              3282 	jnc	00112$
                           3283 ;	../../shared/src/phase_train.c:520: clk_sum++;
   C0B3 A8 18              3284 	mov	r0,_bp
   C0B5 08                 3285 	inc	r0
   C0B6 08                 3286 	inc	r0
   C0B7 06                 3287 	inc	@r0
   C0B8 B6 00 02           3288 	cjne	@r0,#0x00,00190$
   C0BB 08                 3289 	inc	r0
   C0BC 06                 3290 	inc	@r0
   C0BD                    3291 00190$:
   C0BD                    3292 00112$:
                           3293 ;	../../shared/src/phase_train.c:522: if( clk_sum > 0)
   C0BD A8 18              3294 	mov	r0,_bp
   C0BF 08                 3295 	inc	r0
   C0C0 08                 3296 	inc	r0
   C0C1 C3                 3297 	clr	c
   C0C2 E4                 3298 	clr	a
   C0C3 96                 3299 	subb	a,@r0
   C0C4 74 80              3300 	mov	a,#(0x00 ^ 0x80)
   C0C6 08                 3301 	inc	r0
   C0C7 86 F0              3302 	mov	b,@r0
   C0C9 63 F0 80           3303 	xrl	b,#0x80
   C0CC 95 F0              3304 	subb	a,b
   C0CE 50 11              3305 	jnc	00117$
                           3306 ;	../../shared/src/phase_train.c:523: clk_step = clk_sum>>tag_CLOCK_ALIGN_PHASE_STEP_SIZE2;	 ////(1,1/2,1/4,1/8,1/16,1/32,1/64,1/128)
   C0D0 A8 18              3307 	mov	r0,_bp
   C0D2 08                 3308 	inc	r0
   C0D3 08                 3309 	inc	r0
   C0D4 86 07              3310 	mov	ar7,@r0
   C0D6 08                 3311 	inc	r0
   C0D7 E6                 3312 	mov	a,@r0
   C0D8 A2 E7              3313 	mov	c,acc.7
   C0DA 13                 3314 	rrc	a
   C0DB CF                 3315 	xch	a,r7
   C0DC 13                 3316 	rrc	a
   C0DD CF                 3317 	xch	a,r7
   C0DE FE                 3318 	mov	r6,a
   C0DF 80 2F              3319 	sjmp	00118$
   C0E1                    3320 00117$:
                           3321 ;	../../shared/src/phase_train.c:524: else if( clk_sum < 0)
   C0E1 A8 18              3322 	mov	r0,_bp
   C0E3 08                 3323 	inc	r0
   C0E4 08                 3324 	inc	r0
   C0E5 08                 3325 	inc	r0
   C0E6 E6                 3326 	mov	a,@r0
   C0E7 30 E7 22           3327 	jnb	acc.7,00114$
                           3328 ;	../../shared/src/phase_train.c:525: clk_step = -(~(clk_sum)>>tag_CLOCK_ALIGN_PHASE_STEP_SIZE2);
   C0EA C0 02              3329 	push	ar2
   C0EC A8 18              3330 	mov	r0,_bp
   C0EE 08                 3331 	inc	r0
   C0EF 08                 3332 	inc	r0
   C0F0 E6                 3333 	mov	a,@r0
   C0F1 F4                 3334 	cpl	a
   C0F2 FA                 3335 	mov	r2,a
   C0F3 08                 3336 	inc	r0
   C0F4 E6                 3337 	mov	a,@r0
   C0F5 F4                 3338 	cpl	a
   C0F6 A2 E7              3339 	mov	c,acc.7
   C0F8 13                 3340 	rrc	a
   C0F9 CA                 3341 	xch	a,r2
   C0FA 13                 3342 	rrc	a
   C0FB CA                 3343 	xch	a,r2
   C0FC FB                 3344 	mov	r3,a
   C0FD C3                 3345 	clr	c
   C0FE E4                 3346 	clr	a
   C0FF 9A                 3347 	subb	a,r2
   C100 FA                 3348 	mov	r2,a
   C101 E4                 3349 	clr	a
   C102 9B                 3350 	subb	a,r3
   C103 FB                 3351 	mov	r3,a
   C104 8A 07              3352 	mov	ar7,r2
   C106 8B 06              3353 	mov	ar6,r3
   C108 D0 02              3354 	pop	ar2
   C10A 80 04              3355 	sjmp	00118$
   C10C                    3356 00114$:
                           3357 ;	../../shared/src/phase_train.c:526: else clk_step = 0;	
   C10C 7F 00              3358 	mov	r7,#0x00
   C10E 7E 00              3359 	mov	r6,#0x00
   C110                    3360 00118$:
                           3361 ;	../../shared/src/phase_train.c:532: if(clk_step!=0)  {
   C110 EF                 3362 	mov	a,r7
   C111 4E                 3363 	orl	a,r6
   C112 60 52              3364 	jz	00122$
                           3365 ;	../../shared/src/phase_train.c:533: adapted_phase = adapted_phase + clk_step;
   C114 C0 02              3366 	push	ar2
   C116 8F 03              3367 	mov	ar3,r7
   C118 90 66 F9           3368 	mov	dptr,#_adapted_phase
   C11B E0                 3369 	movx	a,@dptr
   C11C FC                 3370 	mov	r4,a
   C11D 90 66 F9           3371 	mov	dptr,#_adapted_phase
   C120 EB                 3372 	mov	a,r3
   C121 2C                 3373 	add	a,r4
   C122 F0                 3374 	movx	@dptr,a
                           3375 ;	../../shared/src/phase_train.c:534: train.phase_offset_data = adapted_phase;
   C123 90 66 F9           3376 	mov	dptr,#_adapted_phase
   C126 E0                 3377 	movx	a,@dptr
   C127 90 66 61           3378 	mov	dptr,#(_train + 0x0021)
   C12A F0                 3379 	movx	@dptr,a
                           3380 ;	../../shared/src/phase_train.c:535: train.phase_offset_data = clamp( train.phase_offset_data, cdr.max_phase_os, cdr.min_phase_os);
   C12B 90 66 BA           3381 	mov	dptr,#(_cdr + 0x0009)
   C12E E0                 3382 	movx	a,@dptr
   C12F FB                 3383 	mov	r3,a
   C130 90 66 BB           3384 	mov	dptr,#(_cdr + 0x000a)
   C133 E0                 3385 	movx	a,@dptr
   C134 FC                 3386 	mov	r4,a
   C135 90 66 61           3387 	mov	dptr,#(_train + 0x0021)
   C138 E0                 3388 	movx	a,@dptr
   C139 FA                 3389 	mov	r2,a
   C13A C0 03              3390 	push	ar3
   C13C C0 04              3391 	push	ar4
   C13E 8A 82              3392 	mov	dpl,r2
   C140 78 64              3393 	mov	r0,#_clamp
   C142 79 C0              3394 	mov	r1,#(_clamp >> 8)
   C144 7A 02              3395 	mov	r2,#(_clamp >> 16)
   C146 12 00 B3           3396 	lcall	__sdcc_banked_call
   C149 AA 82              3397 	mov	r2,dpl
   C14B 15 81              3398 	dec	sp
   C14D 15 81              3399 	dec	sp
   C14F 90 66 61           3400 	mov	dptr,#(_train + 0x0021)
   C152 EA                 3401 	mov	a,r2
   C153 F0                 3402 	movx	@dptr,a
                           3403 ;	../../shared/src/phase_train.c:536: phase_control_func();
   C154 C0 02              3404 	push	ar2
   C156 12 2D F3           3405 	lcall	_phase_control_func
   C159 D0 02              3406 	pop	ar2
                           3407 ;	../../shared/src/phase_train.c:537: clk_sum = 0;
   C15B A8 18              3408 	mov	r0,_bp
   C15D 08                 3409 	inc	r0
   C15E 08                 3410 	inc	r0
   C15F 76 00              3411 	mov	@r0,#0x00
   C161 08                 3412 	inc	r0
   C162 76 00              3413 	mov	@r0,#0x00
                           3414 ;	../../shared/src/phase_train.c:586: cds_dfe_ofst = 0;
   C164 D0 02              3415 	pop	ar2
                           3416 ;	../../shared/src/phase_train.c:537: clk_sum = 0;
   C166                    3417 00122$:
                           3418 ;	../../shared/src/phase_train.c:540: } while( clock_align_run1_index++ < tag_CLOCK_ALIGN_RUN2_NUM);
   C166 A8 18              3419 	mov	r0,_bp
   C168 08                 3420 	inc	r0
   C169 86 03              3421 	mov	ar3,@r0
   C16B A8 18              3422 	mov	r0,_bp
   C16D 08                 3423 	inc	r0
   C16E 06                 3424 	inc	@r0
   C16F BB 20 00           3425 	cjne	r3,#0x20,00194$
   C172                    3426 00194$:
   C172 50 03              3427 	jnc	00195$
   C174 02 C0 7C           3428 	ljmp	00121$
   C177                    3429 00195$:
                           3430 ;	../../shared/src/phase_train.c:545: clk_sum = 0; clk_step = 0;
   C177 A8 18              3431 	mov	r0,_bp
   C179 08                 3432 	inc	r0
   C17A 08                 3433 	inc	r0
   C17B 76 00              3434 	mov	@r0,#0x00
   C17D 08                 3435 	inc	r0
   C17E 76 00              3436 	mov	@r0,#0x00
                           3437 ;	../../shared/src/phase_train.c:546: do {
   C180 7B 00              3438 	mov	r3,#0x00
   C182                    3439 00137$:
                           3440 ;	../../shared/src/phase_train.c:547: align_tap = dfe_adapt_align();
   C182 C0 02              3441 	push	ar2
   C184 C0 03              3442 	push	ar3
   C186 78 A5              3443 	mov	r0,#_dfe_adapt_align
   C188 79 C2              3444 	mov	r1,#(_dfe_adapt_align >> 8)
   C18A 7A 01              3445 	mov	r2,#(_dfe_adapt_align >> 16)
   C18C 12 00 B3           3446 	lcall	__sdcc_banked_call
   C18F AC 82              3447 	mov	r4,dpl
   C191 D0 03              3448 	pop	ar3
   C193 D0 02              3449 	pop	ar2
   C195 8C 05              3450 	mov	ar5,r4
                           3451 ;	../../shared/src/phase_train.c:550: if(align_tap<align_ref) 
   C197 C3                 3452 	clr	c
   C198 ED                 3453 	mov	a,r5
   C199 64 80              3454 	xrl	a,#0x80
   C19B 8A F0              3455 	mov	b,r2
   C19D 63 F0 80           3456 	xrl	b,#0x80
   C1A0 95 F0              3457 	subb	a,b
   C1A2 50 0C              3458 	jnc	00127$
                           3459 ;	../../shared/src/phase_train.c:551: clk_sum--;
   C1A4 A8 18              3460 	mov	r0,_bp
   C1A6 08                 3461 	inc	r0
   C1A7 08                 3462 	inc	r0
   C1A8 16                 3463 	dec	@r0
   C1A9 B6 FF 02           3464 	cjne	@r0,#0xff,00197$
   C1AC 08                 3465 	inc	r0
   C1AD 16                 3466 	dec	@r0
   C1AE                    3467 00197$:
   C1AE 80 17              3468 	sjmp	00128$
   C1B0                    3469 00127$:
                           3470 ;	../../shared/src/phase_train.c:552: else if(align_tap>align_ref)	
   C1B0 C3                 3471 	clr	c
   C1B1 EA                 3472 	mov	a,r2
   C1B2 64 80              3473 	xrl	a,#0x80
   C1B4 8D F0              3474 	mov	b,r5
   C1B6 63 F0 80           3475 	xrl	b,#0x80
   C1B9 95 F0              3476 	subb	a,b
   C1BB 50 0A              3477 	jnc	00128$
                           3478 ;	../../shared/src/phase_train.c:553: clk_sum++;	
   C1BD A8 18              3479 	mov	r0,_bp
   C1BF 08                 3480 	inc	r0
   C1C0 08                 3481 	inc	r0
   C1C1 06                 3482 	inc	@r0
   C1C2 B6 00 02           3483 	cjne	@r0,#0x00,00199$
   C1C5 08                 3484 	inc	r0
   C1C6 06                 3485 	inc	@r0
   C1C7                    3486 00199$:
   C1C7                    3487 00128$:
                           3488 ;	../../shared/src/phase_train.c:555: if( clk_sum > 0)
   C1C7 A8 18              3489 	mov	r0,_bp
   C1C9 08                 3490 	inc	r0
   C1CA 08                 3491 	inc	r0
   C1CB C3                 3492 	clr	c
   C1CC E4                 3493 	clr	a
   C1CD 96                 3494 	subb	a,@r0
   C1CE 74 80              3495 	mov	a,#(0x00 ^ 0x80)
   C1D0 08                 3496 	inc	r0
   C1D1 86 F0              3497 	mov	b,@r0
   C1D3 63 F0 80           3498 	xrl	b,#0x80
   C1D6 95 F0              3499 	subb	a,b
   C1D8 50 1C              3500 	jnc	00133$
                           3501 ;	../../shared/src/phase_train.c:556: clk_step = clk_sum>>tag_CLOCK_ALIGN_PHASE_STEP_SIZE3;	 ////(1,1/2,1/4,1/8,1/16,1/32,1/64,1/128)
   C1DA A8 18              3502 	mov	r0,_bp
   C1DC 08                 3503 	inc	r0
   C1DD 08                 3504 	inc	r0
   C1DE 86 07              3505 	mov	ar7,@r0
   C1E0 08                 3506 	inc	r0
   C1E1 E6                 3507 	mov	a,@r0
   C1E2 C4                 3508 	swap	a
   C1E3 CF                 3509 	xch	a,r7
   C1E4 C4                 3510 	swap	a
   C1E5 54 0F              3511 	anl	a,#0x0f
   C1E7 6F                 3512 	xrl	a,r7
   C1E8 CF                 3513 	xch	a,r7
   C1E9 54 0F              3514 	anl	a,#0x0f
   C1EB CF                 3515 	xch	a,r7
   C1EC 6F                 3516 	xrl	a,r7
   C1ED CF                 3517 	xch	a,r7
   C1EE 30 E3 02           3518 	jnb	acc.3,00201$
   C1F1 44 F0              3519 	orl	a,#0xf0
   C1F3                    3520 00201$:
   C1F3 FE                 3521 	mov	r6,a
   C1F4 80 37              3522 	sjmp	00134$
   C1F6                    3523 00133$:
                           3524 ;	../../shared/src/phase_train.c:557: else if( clk_sum < 0)
   C1F6 A8 18              3525 	mov	r0,_bp
   C1F8 08                 3526 	inc	r0
   C1F9 08                 3527 	inc	r0
   C1FA 08                 3528 	inc	r0
   C1FB E6                 3529 	mov	a,@r0
   C1FC 30 E7 2A           3530 	jnb	acc.7,00130$
                           3531 ;	../../shared/src/phase_train.c:558: clk_step = -(~(clk_sum)>>tag_CLOCK_ALIGN_PHASE_STEP_SIZE3);
   C1FF A8 18              3532 	mov	r0,_bp
   C201 08                 3533 	inc	r0
   C202 08                 3534 	inc	r0
   C203 E6                 3535 	mov	a,@r0
   C204 F4                 3536 	cpl	a
   C205 FC                 3537 	mov	r4,a
   C206 08                 3538 	inc	r0
   C207 E6                 3539 	mov	a,@r0
   C208 F4                 3540 	cpl	a
   C209 FD                 3541 	mov	r5,a
   C20A C4                 3542 	swap	a
   C20B CC                 3543 	xch	a,r4
   C20C C4                 3544 	swap	a
   C20D 54 0F              3545 	anl	a,#0x0f
   C20F 6C                 3546 	xrl	a,r4
   C210 CC                 3547 	xch	a,r4
   C211 54 0F              3548 	anl	a,#0x0f
   C213 CC                 3549 	xch	a,r4
   C214 6C                 3550 	xrl	a,r4
   C215 CC                 3551 	xch	a,r4
   C216 30 E3 02           3552 	jnb	acc.3,00203$
   C219 44 F0              3553 	orl	a,#0xf0
   C21B                    3554 00203$:
   C21B FD                 3555 	mov	r5,a
   C21C C3                 3556 	clr	c
   C21D E4                 3557 	clr	a
   C21E 9C                 3558 	subb	a,r4
   C21F FC                 3559 	mov	r4,a
   C220 E4                 3560 	clr	a
   C221 9D                 3561 	subb	a,r5
   C222 FD                 3562 	mov	r5,a
   C223 8C 07              3563 	mov	ar7,r4
   C225 8D 06              3564 	mov	ar6,r5
   C227 80 04              3565 	sjmp	00134$
   C229                    3566 00130$:
                           3567 ;	../../shared/src/phase_train.c:559: else clk_step = 0;	
   C229 7F 00              3568 	mov	r7,#0x00
   C22B 7E 00              3569 	mov	r6,#0x00
   C22D                    3570 00134$:
                           3571 ;	../../shared/src/phase_train.c:566: if(clk_step!=0)  {
   C22D EF                 3572 	mov	a,r7
   C22E 4E                 3573 	orl	a,r6
   C22F 60 50              3574 	jz	00138$
                           3575 ;	../../shared/src/phase_train.c:567: adapted_phase = adapted_phase + clk_step;
   C231 90 66 F9           3576 	mov	dptr,#_adapted_phase
   C234 E0                 3577 	movx	a,@dptr
   C235 FC                 3578 	mov	r4,a
   C236 90 66 F9           3579 	mov	dptr,#_adapted_phase
   C239 EF                 3580 	mov	a,r7
   C23A 2C                 3581 	add	a,r4
   C23B F0                 3582 	movx	@dptr,a
                           3583 ;	../../shared/src/phase_train.c:568: train.phase_offset_data = adapted_phase;
   C23C 90 66 F9           3584 	mov	dptr,#_adapted_phase
   C23F E0                 3585 	movx	a,@dptr
   C240 90 66 61           3586 	mov	dptr,#(_train + 0x0021)
   C243 F0                 3587 	movx	@dptr,a
                           3588 ;	../../shared/src/phase_train.c:569: train.phase_offset_data = clamp( train.phase_offset_data, cdr.max_phase_os, cdr.min_phase_os);
   C244 90 66 BA           3589 	mov	dptr,#(_cdr + 0x0009)
   C247 E0                 3590 	movx	a,@dptr
   C248 FC                 3591 	mov	r4,a
   C249 90 66 BB           3592 	mov	dptr,#(_cdr + 0x000a)
   C24C E0                 3593 	movx	a,@dptr
   C24D FD                 3594 	mov	r5,a
   C24E 90 66 61           3595 	mov	dptr,#(_train + 0x0021)
   C251 E0                 3596 	movx	a,@dptr
   C252 FE                 3597 	mov	r6,a
   C253 C0 02              3598 	push	ar2
   C255 C0 03              3599 	push	ar3
   C257 C0 04              3600 	push	ar4
   C259 C0 05              3601 	push	ar5
   C25B 8E 82              3602 	mov	dpl,r6
   C25D 78 64              3603 	mov	r0,#_clamp
   C25F 79 C0              3604 	mov	r1,#(_clamp >> 8)
   C261 7A 02              3605 	mov	r2,#(_clamp >> 16)
   C263 12 00 B3           3606 	lcall	__sdcc_banked_call
   C266 AC 82              3607 	mov	r4,dpl
   C268 15 81              3608 	dec	sp
   C26A 15 81              3609 	dec	sp
   C26C 90 66 61           3610 	mov	dptr,#(_train + 0x0021)
   C26F EC                 3611 	mov	a,r4
   C270 F0                 3612 	movx	@dptr,a
                           3613 ;	../../shared/src/phase_train.c:570: phase_control_func();
   C271 12 2D F3           3614 	lcall	_phase_control_func
   C274 D0 03              3615 	pop	ar3
   C276 D0 02              3616 	pop	ar2
                           3617 ;	../../shared/src/phase_train.c:571: clk_sum = 0;
   C278 A8 18              3618 	mov	r0,_bp
   C27A 08                 3619 	inc	r0
   C27B 08                 3620 	inc	r0
   C27C 76 00              3621 	mov	@r0,#0x00
   C27E 08                 3622 	inc	r0
   C27F 76 00              3623 	mov	@r0,#0x00
   C281                    3624 00138$:
                           3625 ;	../../shared/src/phase_train.c:574: } while( clock_align_run1_index++ < tag_CLOCK_ALIGN_RUN3_NUM);
   C281 8B 04              3626 	mov	ar4,r3
   C283 0B                 3627 	inc	r3
   C284 BC 80 00           3628 	cjne	r4,#0x80,00205$
   C287                    3629 00205$:
   C287 50 03              3630 	jnc	00206$
   C289 02 C1 82           3631 	ljmp	00137$
   C28C                    3632 00206$:
                           3633 ;	../../shared/src/phase_train.c:585: if(cds_dfe_ofst==0) lnx_AVG_F1_LANE_7_0 = (uint8_t)align_ref;		
   C28C 90 67 92           3634 	mov	dptr,#_cds_dfe_ofst
   C28F E0                 3635 	movx	a,@dptr
   C290 FB                 3636 	mov	r3,a
   C291 70 05              3637 	jnz	00141$
   C293 90 60 69           3638 	mov	dptr,#(_TRAIN_PARA_0 + 0x0001)
   C296 EA                 3639 	mov	a,r2
   C297 F0                 3640 	movx	@dptr,a
   C298                    3641 00141$:
                           3642 ;	../../shared/src/phase_train.c:586: cds_dfe_ofst = 0;
   C298 90 67 92           3643 	mov	dptr,#_cds_dfe_ofst
   C29B E4                 3644 	clr	a
   C29C F0                 3645 	movx	@dptr,a
   C29D                    3646 00142$:
   C29D 85 18 81           3647 	mov	sp,_bp
   C2A0 D0 18              3648 	pop	_bp
   C2A2 02 00 C5           3649 	ljmp	__sdcc_banked_ret
                           3650 ;------------------------------------------------------------
                           3651 ;Allocation info for local variables in function 'dfe_adapt_align'
                           3652 ;------------------------------------------------------------
                           3653 ;------------------------------------------------------------
                           3654 ;	../../shared/src/phase_train.c:590: int8_t dfe_adapt_align(void) BANKING_CTRL {
                           3655 ;	-----------------------------------------
                           3656 ;	 function dfe_adapt_align
                           3657 ;	-----------------------------------------
   C2A5                    3658 _dfe_adapt_align:
                           3659 ;	../../shared/src/phase_train.c:591: dfe_adaptation();
   C2A5 78 AD              3660 	mov	r0,#_dfe_adaptation
   C2A7 79 9F              3661 	mov	r1,#(_dfe_adaptation >> 8)
   C2A9 7A 01              3662 	mov	r2,#(_dfe_adaptation >> 16)
   C2AB 12 00 B3           3663 	lcall	__sdcc_banked_call
                           3664 ;	../../shared/src/phase_train.c:592: if(cds_dfe_ofst) {
   C2AE 90 67 92           3665 	mov	dptr,#_cds_dfe_ofst
   C2B1 E0                 3666 	movx	a,@dptr
   C2B2 FA                 3667 	mov	r2,a
   C2B3 60 09              3668 	jz	00102$
                           3669 ;	../../shared/src/phase_train.c:594: return (train.ofst_slicer);	
   C2B5 90 66 57           3670 	mov	dptr,#(_train + 0x0017)
   C2B8 E0                 3671 	movx	a,@dptr
   C2B9 FA                 3672 	mov	r2,a
   C2BA F5 82              3673 	mov	dpl,a
   C2BC 80 07              3674 	sjmp	00104$
   C2BE                    3675 00102$:
                           3676 ;	../../shared/src/phase_train.c:597: return train.f1;
   C2BE 90 66 46           3677 	mov	dptr,#(_train + 0x0006)
   C2C1 E0                 3678 	movx	a,@dptr
   C2C2 FA                 3679 	mov	r2,a
   C2C3 F5 82              3680 	mov	dpl,a
   C2C5                    3681 00104$:
   C2C5 02 00 C5           3682 	ljmp	__sdcc_banked_ret
                           3683 	.area CSEG    (CODE)
                           3684 	.area BANK1   (CODE)
                           3685 	.area CABS    (ABS,CODE)
