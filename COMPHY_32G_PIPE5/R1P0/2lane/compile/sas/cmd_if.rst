                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:39 2018
                              5 ;--------------------------------------------------------
                              6 	.module cmd_if
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
                            979 	.globl _cmd_if
                            980 	.globl _cmd_tx_ffe
                            981 	.globl _cmd_dfe_res
                            982 	.globl _cmd_rx_ffe
                            983 	.globl _cmd_sq_thrs_ratio
                            984 	.globl _cmd_tx_slew_rate
                            985 	.globl _cmd_bypass_ctle_train
                            986 	.globl _cmd_rx_cdr_bw
                            987 	.globl _cmd_tx_margin
                            988 	.globl _cmd_remote_tx_preset_index
                            989 	.globl _cmd_tx_preset
                            990 	.globl _cmd_local_tx_preset_index
                            991 	.globl _cmd_ssc
                            992 	.globl _cmd_rx_imp_cal
                            993 	.globl _cmd_tx_imp_cal
                            994 ;--------------------------------------------------------
                            995 ; special function registers
                            996 ;--------------------------------------------------------
                            997 	.area RSEG    (ABS,DATA)
   0000                     998 	.org 0x0000
                    0080    999 _P0	=	0x0080
                    0082   1000 _DPL	=	0x0082
                    0083   1001 _DPH	=	0x0083
                    0086   1002 _WDTREL	=	0x0086
                    0087   1003 _PCON	=	0x0087
                    0088   1004 _TCON	=	0x0088
                    0089   1005 _TMOD	=	0x0089
                    008A   1006 _TL0	=	0x008a
                    008B   1007 _TL1	=	0x008b
                    008C   1008 _TH0	=	0x008c
                    008D   1009 _TH1	=	0x008d
                    008E   1010 _CKCON	=	0x008e
                    0090   1011 _P1	=	0x0090
                    0092   1012 _DPS	=	0x0092
                    0094   1013 _PSBANK	=	0x0094
                    0098   1014 _SCON	=	0x0098
                    0099   1015 _SBUF	=	0x0099
                    009A   1016 _IEN2	=	0x009a
                    00A0   1017 _P2	=	0x00a0
                    00A1   1018 _DMAS0	=	0x00a1
                    00A2   1019 _DMAS1	=	0x00a2
                    00A3   1020 _DMAS2	=	0x00a3
                    00A4   1021 _DMAT0	=	0x00a4
                    00A5   1022 _DMAT1	=	0x00a5
                    00A6   1023 _DMAT2	=	0x00a6
                    00A8   1024 _IEN0	=	0x00a8
                    00A9   1025 _IP0	=	0x00a9
                    00AA   1026 _S0RELL	=	0x00aa
                    00B0   1027 _P3	=	0x00b0
                    00B1   1028 _DMAC0	=	0x00b1
                    00B2   1029 _DMAC1	=	0x00b2
                    00B3   1030 _DMAC2	=	0x00b3
                    00B4   1031 _DMASEL	=	0x00b4
                    00B5   1032 _DMAM0	=	0x00b5
                    00B6   1033 _DMAM1	=	0x00b6
                    00B8   1034 _IEN1	=	0x00b8
                    00B9   1035 _IP1	=	0x00b9
                    00BA   1036 _S0RELH	=	0x00ba
                    00C0   1037 _IRCON	=	0x00c0
                    00C1   1038 _CCEN	=	0x00c1
                    00C8   1039 _T2CON	=	0x00c8
                    00CA   1040 _RCAP2L	=	0x00ca
                    00CB   1041 _RCAP2H	=	0x00cb
                    00CC   1042 _TL2	=	0x00cc
                    00CD   1043 _TH2	=	0x00cd
                    00D0   1044 _PSW	=	0x00d0
                    00D8   1045 _ADCON	=	0x00d8
                    00E0   1046 _ACC	=	0x00e0
                    00E8   1047 _EIE	=	0x00e8
                    00F0   1048 _B	=	0x00f0
                    00F7   1049 _SRST	=	0x00f7
                    8C8A   1050 _TMR0	=	0x8c8a
                    8D8B   1051 _TMR1	=	0x8d8b
                    CDCC   1052 _TMR2	=	0xcdcc
                    A2A1   1053 _DMASA	=	0xa2a1
                    A5A4   1054 _DMATA	=	0xa5a4
                    B2B1   1055 _DMAC	=	0xb2b1
                           1056 ;--------------------------------------------------------
                           1057 ; special function bits
                           1058 ;--------------------------------------------------------
                           1059 	.area RSEG    (ABS,DATA)
   0000                    1060 	.org 0x0000
                    0080   1061 _P0_0	=	0x0080
                    0081   1062 _P0_1	=	0x0081
                    0082   1063 _P0_2	=	0x0082
                    0083   1064 _P0_3	=	0x0083
                    0084   1065 _P0_4	=	0x0084
                    0085   1066 _P0_5	=	0x0085
                    0086   1067 _P0_6	=	0x0086
                    0087   1068 _P0_7	=	0x0087
                    0090   1069 _P1_0	=	0x0090
                    0091   1070 _P1_1	=	0x0091
                    0092   1071 _P1_2	=	0x0092
                    0093   1072 _P1_3	=	0x0093
                    0094   1073 _P1_4	=	0x0094
                    0095   1074 _P1_5	=	0x0095
                    0096   1075 _P1_6	=	0x0096
                    0097   1076 _P1_7	=	0x0097
                    00A0   1077 _P2_0	=	0x00a0
                    00A1   1078 _P2_1	=	0x00a1
                    00A2   1079 _P2_2	=	0x00a2
                    00A3   1080 _P2_3	=	0x00a3
                    00A4   1081 _P2_4	=	0x00a4
                    00A5   1082 _P2_5	=	0x00a5
                    00A6   1083 _P2_6	=	0x00a6
                    00A7   1084 _P2_7	=	0x00a7
                    00B0   1085 _P3_0	=	0x00b0
                    00B1   1086 _P3_1	=	0x00b1
                    00B2   1087 _P3_2	=	0x00b2
                    00B3   1088 _P3_3	=	0x00b3
                    00B4   1089 _P3_4	=	0x00b4
                    00B5   1090 _P3_5	=	0x00b5
                    00B6   1091 _P3_6	=	0x00b6
                    00B7   1092 _P3_7	=	0x00b7
                    0088   1093 _IT0	=	0x0088
                    0089   1094 _IE0	=	0x0089
                    008A   1095 _IT1	=	0x008a
                    008B   1096 _IE1	=	0x008b
                    008C   1097 _TR0	=	0x008c
                    008D   1098 _TF0	=	0x008d
                    008E   1099 _TR1	=	0x008e
                    008F   1100 _TF1	=	0x008f
                    00A8   1101 _EX0	=	0x00a8
                    00A9   1102 _ET0	=	0x00a9
                    00AA   1103 _EX1	=	0x00aa
                    00AB   1104 _ET1	=	0x00ab
                    00AC   1105 _ES	=	0x00ac
                    00AD   1106 _ET2	=	0x00ad
                    00AE   1107 _WDT	=	0x00ae
                    00AF   1108 _EA	=	0x00af
                    00B8   1109 _EX7	=	0x00b8
                    00B9   1110 _EX2	=	0x00b9
                    00BA   1111 _EX3	=	0x00ba
                    00BB   1112 _EX4	=	0x00bb
                    00BC   1113 _EX5	=	0x00bc
                    00BD   1114 _EX6	=	0x00bd
                    00BE   1115 _PS1	=	0x00be
                    009A   1116 _ES1	=	0x009a
                    009B   1117 _EX8	=	0x009b
                    009C   1118 _EX9	=	0x009c
                    009D   1119 _EX10	=	0x009d
                    009E   1120 _EX11	=	0x009e
                    009F   1121 _EX12	=	0x009f
                    0098   1122 _RI	=	0x0098
                    0099   1123 _TI	=	0x0099
                    00C6   1124 _TF2	=	0x00c6
                           1125 ;--------------------------------------------------------
                           1126 ; overlayable register banks
                           1127 ;--------------------------------------------------------
                           1128 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1129 	.ds 8
                           1130 ;--------------------------------------------------------
                           1131 ; overlayable bit register bank
                           1132 ;--------------------------------------------------------
                           1133 	.area BIT_BANK	(REL,OVR,DATA)
   0025                    1134 bits:
   0025                    1135 	.ds 1
                    8000   1136 	b0 = bits[0]
                    8100   1137 	b1 = bits[1]
                    8200   1138 	b2 = bits[2]
                    8300   1139 	b3 = bits[3]
                    8400   1140 	b4 = bits[4]
                    8500   1141 	b5 = bits[5]
                    8600   1142 	b6 = bits[6]
                    8700   1143 	b7 = bits[7]
                           1144 ;--------------------------------------------------------
                           1145 ; internal ram data
                           1146 ;--------------------------------------------------------
                           1147 	.area DSEG    (DATA)
                           1148 ;--------------------------------------------------------
                           1149 ; overlayable items in internal ram 
                           1150 ;--------------------------------------------------------
                           1151 	.area OSEG    (OVR,DATA)
                           1152 ;--------------------------------------------------------
                           1153 ; indirectly addressable internal ram data
                           1154 ;--------------------------------------------------------
                           1155 	.area ISEG    (DATA)
                           1156 ;--------------------------------------------------------
                           1157 ; absolute internal ram data
                           1158 ;--------------------------------------------------------
                           1159 	.area IABS    (ABS,DATA)
                           1160 	.area IABS    (ABS,DATA)
                           1161 ;--------------------------------------------------------
                           1162 ; bit data
                           1163 ;--------------------------------------------------------
                           1164 	.area BSEG    (BIT)
                           1165 ;--------------------------------------------------------
                           1166 ; paged external ram data
                           1167 ;--------------------------------------------------------
                           1168 	.area PSEG    (PAG,XDATA)
                           1169 ;--------------------------------------------------------
                           1170 ; external ram data
                           1171 ;--------------------------------------------------------
                           1172 	.area XSEG    (XDATA)
                    1000   1173 _UPHY14_TRX_LANEPLL_ANAREG_TOP_128	=	0x1000
                    1004   1174 _UPHY14_TRX_LANEPLL_ANAREG_TOP_129	=	0x1004
                    1008   1175 _UPHY14_TRX_LANEPLL_ANAREG_TOP_130	=	0x1008
                    100C   1176 _UPHY14_TRX_LANEPLL_ANAREG_TOP_131	=	0x100c
                    1010   1177 _UPHY14_TRX_LANEPLL_ANAREG_TOP_132	=	0x1010
                    1014   1178 _UPHY14_TRX_LANEPLL_ANAREG_TOP_133	=	0x1014
                    1018   1179 _UPHY14_TRX_LANEPLL_ANAREG_TOP_134	=	0x1018
                    101C   1180 _UPHY14_TRX_LANEPLL_ANAREG_TOP_135	=	0x101c
                    1020   1181 _UPHY14_TRX_LANEPLL_ANAREG_TOP_136	=	0x1020
                    1024   1182 _UPHY14_TRX_LANEPLL_ANAREG_TOP_137	=	0x1024
                    1028   1183 _UPHY14_TRX_LANEPLL_ANAREG_TOP_138	=	0x1028
                    102C   1184 _UPHY14_TRX_LANEPLL_ANAREG_TOP_139	=	0x102c
                    1030   1185 _UPHY14_TRX_LANEPLL_ANAREG_TOP_140	=	0x1030
                    1034   1186 _UPHY14_TRX_LANEPLL_ANAREG_TOP_141	=	0x1034
                    1038   1187 _UPHY14_TRX_LANEPLL_ANAREG_TOP_142	=	0x1038
                    103C   1188 _UPHY14_TRX_LANEPLL_ANAREG_TOP_143	=	0x103c
                    0200   1189 _UPHY14_TRX_ANAREG_TOP_128	=	0x0200
                    0204   1190 _UPHY14_TRX_ANAREG_TOP_129	=	0x0204
                    0208   1191 _UPHY14_TRX_ANAREG_TOP_130	=	0x0208
                    020C   1192 _UPHY14_TRX_ANAREG_TOP_131	=	0x020c
                    0210   1193 _UPHY14_TRX_ANAREG_TOP_132	=	0x0210
                    0214   1194 _UPHY14_TRX_ANAREG_TOP_133	=	0x0214
                    0218   1195 _UPHY14_TRX_ANAREG_TOP_134	=	0x0218
                    021C   1196 _UPHY14_TRX_ANAREG_TOP_135	=	0x021c
                    0220   1197 _UPHY14_TRX_ANAREG_TOP_136	=	0x0220
                    0224   1198 _UPHY14_TRX_ANAREG_TOP_137	=	0x0224
                    0228   1199 _UPHY14_TRX_ANAREG_TOP_138	=	0x0228
                    022C   1200 _UPHY14_TRX_ANAREG_TOP_139	=	0x022c
                    0230   1201 _UPHY14_TRX_ANAREG_TOP_140	=	0x0230
                    0234   1202 _UPHY14_TRX_ANAREG_TOP_141	=	0x0234
                    0238   1203 _UPHY14_TRX_ANAREG_TOP_142	=	0x0238
                    023C   1204 _UPHY14_TRX_ANAREG_TOP_143	=	0x023c
                    0240   1205 _UPHY14_TRX_ANAREG_TOP_144	=	0x0240
                    0244   1206 _UPHY14_TRX_ANAREG_TOP_145	=	0x0244
                    0248   1207 _UPHY14_TRX_ANAREG_TOP_146	=	0x0248
                    024C   1208 _UPHY14_TRX_ANAREG_TOP_147	=	0x024c
                    0250   1209 _UPHY14_TRX_ANAREG_TOP_148	=	0x0250
                    0254   1210 _UPHY14_TRX_ANAREG_TOP_149	=	0x0254
                    0258   1211 _UPHY14_TRX_ANAREG_TOP_150	=	0x0258
                    025C   1212 _UPHY14_TRX_ANAREG_TOP_151	=	0x025c
                    0260   1213 _UPHY14_TRX_ANAREG_TOP_152	=	0x0260
                    0264   1214 _UPHY14_TRX_ANAREG_TOP_153	=	0x0264
                    0268   1215 _UPHY14_TRX_ANAREG_TOP_154	=	0x0268
                    026C   1216 _UPHY14_TRX_ANAREG_TOP_155	=	0x026c
                    0270   1217 _UPHY14_TRX_ANAREG_TOP_156	=	0x0270
                    0274   1218 _UPHY14_TRX_ANAREG_TOP_157	=	0x0274
                    0000   1219 _UPHY14_TRX_ANAREG_BOT_0	=	0x0000
                    0004   1220 _UPHY14_TRX_ANAREG_BOT_1	=	0x0004
                    0008   1221 _UPHY14_TRX_ANAREG_BOT_2	=	0x0008
                    000C   1222 _UPHY14_TRX_ANAREG_BOT_3	=	0x000c
                    0010   1223 _UPHY14_TRX_ANAREG_BOT_4	=	0x0010
                    0014   1224 _UPHY14_TRX_ANAREG_BOT_5	=	0x0014
                    0018   1225 _UPHY14_TRX_ANAREG_BOT_6	=	0x0018
                    001C   1226 _UPHY14_TRX_ANAREG_BOT_7	=	0x001c
                    0020   1227 _UPHY14_TRX_ANAREG_BOT_8	=	0x0020
                    0024   1228 _UPHY14_TRX_ANAREG_BOT_9	=	0x0024
                    0028   1229 _UPHY14_TRX_ANAREG_BOT_10	=	0x0028
                    002C   1230 _UPHY14_TRX_ANAREG_BOT_11	=	0x002c
                    0030   1231 _UPHY14_TRX_ANAREG_BOT_12	=	0x0030
                    0034   1232 _UPHY14_TRX_ANAREG_BOT_13	=	0x0034
                    0038   1233 _UPHY14_TRX_ANAREG_BOT_14	=	0x0038
                    003C   1234 _UPHY14_TRX_ANAREG_BOT_15	=	0x003c
                    0040   1235 _UPHY14_TRX_ANAREG_BOT_16	=	0x0040
                    0044   1236 _UPHY14_TRX_ANAREG_BOT_17	=	0x0044
                    0048   1237 _UPHY14_TRX_ANAREG_BOT_18	=	0x0048
                    004C   1238 _UPHY14_TRX_ANAREG_BOT_19	=	0x004c
                    0050   1239 _UPHY14_TRX_ANAREG_BOT_20	=	0x0050
                    0054   1240 _UPHY14_TRX_ANAREG_BOT_21	=	0x0054
                    0058   1241 _UPHY14_TRX_ANAREG_BOT_22	=	0x0058
                    005C   1242 _UPHY14_TRX_ANAREG_BOT_23	=	0x005c
                    0060   1243 _UPHY14_TRX_ANAREG_BOT_24	=	0x0060
                    0064   1244 _UPHY14_TRX_ANAREG_BOT_25	=	0x0064
                    0068   1245 _UPHY14_TRX_ANAREG_BOT_26	=	0x0068
                    006C   1246 _UPHY14_TRX_ANAREG_BOT_27	=	0x006c
                    0070   1247 _UPHY14_TRX_ANAREG_BOT_28	=	0x0070
                    0074   1248 _UPHY14_TRX_ANAREG_BOT_29	=	0x0074
                    0078   1249 _UPHY14_TRX_ANAREG_BOT_30	=	0x0078
                    007C   1250 _UPHY14_TRX_ANAREG_BOT_31	=	0x007c
                    0080   1251 _UPHY14_TRX_ANAREG_BOT_32	=	0x0080
                    0478   1252 _ANA_DFEE_REG_1E	=	0x0478
                    047C   1253 _ANA_DFEE_REG_1F	=	0x047c
                    0480   1254 _ANA_DFEE_REG_20	=	0x0480
                    0484   1255 _ANA_DFEE_REG_21	=	0x0484
                    0488   1256 _ANA_DFEE_REG_22	=	0x0488
                    048C   1257 _ANA_DFEE_REG_23	=	0x048c
                    0490   1258 _ANA_DFEE_REG_24	=	0x0490
                    0494   1259 _ANA_DFEE_REG_25	=	0x0494
                    0498   1260 _ANA_DFEE_REG_26	=	0x0498
                    049C   1261 _ANA_DFEE_REG_27	=	0x049c
                    0400   1262 _ANA_DFEE_REG_00	=	0x0400
                    0404   1263 _ANA_DFEE_REG_01	=	0x0404
                    0408   1264 _ANA_DFEE_REG_02	=	0x0408
                    040C   1265 _ANA_DFEE_REG_03	=	0x040c
                    0410   1266 _ANA_DFEE_REG_04	=	0x0410
                    0414   1267 _ANA_DFEE_REG_05	=	0x0414
                    0418   1268 _ANA_DFEE_REG_06	=	0x0418
                    041C   1269 _ANA_DFEE_REG_07	=	0x041c
                    0420   1270 _ANA_DFEE_REG_08	=	0x0420
                    0424   1271 _ANA_DFEE_REG_09	=	0x0424
                    0428   1272 _ANA_DFEE_REG_0A	=	0x0428
                    042C   1273 _ANA_DFEE_REG_0B	=	0x042c
                    0430   1274 _ANA_DFEE_REG_0C	=	0x0430
                    0434   1275 _ANA_DFEE_REG_0D	=	0x0434
                    0438   1276 _ANA_DFEE_REG_0E	=	0x0438
                    043C   1277 _ANA_DFEE_REG_0F	=	0x043c
                    0440   1278 _ANA_DFEE_REG_10	=	0x0440
                    0444   1279 _ANA_DFEE_REG_11	=	0x0444
                    0448   1280 _ANA_DFEE_REG_12	=	0x0448
                    044C   1281 _ANA_DFEE_REG_13	=	0x044c
                    0450   1282 _ANA_DFEE_REG_14	=	0x0450
                    0454   1283 _ANA_DFEE_REG_15	=	0x0454
                    0458   1284 _ANA_DFEE_REG_16	=	0x0458
                    045C   1285 _ANA_DFEE_REG_17	=	0x045c
                    0460   1286 _ANA_DFEE_REG_18	=	0x0460
                    0464   1287 _ANA_DFEE_REG_19	=	0x0464
                    0468   1288 _ANA_DFEE_REG_1A	=	0x0468
                    046C   1289 _ANA_DFEE_REG_1B	=	0x046c
                    0470   1290 _ANA_DFEE_REG_1C	=	0x0470
                    0474   1291 _ANA_DFEE_REG_1D	=	0x0474
                    0830   1292 _ANA_DFEO_REG_0C	=	0x0830
                    0834   1293 _ANA_DFEO_REG_0D	=	0x0834
                    0838   1294 _ANA_DFEO_REG_0E	=	0x0838
                    083C   1295 _ANA_DFEO_REG_0F	=	0x083c
                    0840   1296 _ANA_DFEO_REG_10	=	0x0840
                    0844   1297 _ANA_DFEO_REG_11	=	0x0844
                    0848   1298 _ANA_DFEO_REG_12	=	0x0848
                    084C   1299 _ANA_DFEO_REG_13	=	0x084c
                    0850   1300 _ANA_DFEO_REG_14	=	0x0850
                    0854   1301 _ANA_DFEO_REG_15	=	0x0854
                    0858   1302 _ANA_DFEO_REG_16	=	0x0858
                    085C   1303 _ANA_DFEO_REG_17	=	0x085c
                    0860   1304 _ANA_DFEO_REG_18	=	0x0860
                    0864   1305 _ANA_DFEO_REG_19	=	0x0864
                    0868   1306 _ANA_DFEO_REG_1A	=	0x0868
                    086C   1307 _ANA_DFEO_REG_1B	=	0x086c
                    0870   1308 _ANA_DFEO_REG_1C	=	0x0870
                    0874   1309 _ANA_DFEO_REG_1D	=	0x0874
                    0878   1310 _ANA_DFEO_REG_1E	=	0x0878
                    087C   1311 _ANA_DFEO_REG_1F	=	0x087c
                    0880   1312 _ANA_DFEO_REG_20	=	0x0880
                    0884   1313 _ANA_DFEO_REG_21	=	0x0884
                    0888   1314 _ANA_DFEO_REG_22	=	0x0888
                    088C   1315 _ANA_DFEO_REG_23	=	0x088c
                    0890   1316 _ANA_DFEO_REG_24	=	0x0890
                    0894   1317 _ANA_DFEO_REG_25	=	0x0894
                    0898   1318 _ANA_DFEO_REG_26	=	0x0898
                    089C   1319 _ANA_DFEO_REG_27	=	0x089c
                    0800   1320 _ANA_DFEO_REG_00	=	0x0800
                    0804   1321 _ANA_DFEO_REG_01	=	0x0804
                    0808   1322 _ANA_DFEO_REG_02	=	0x0808
                    080C   1323 _ANA_DFEO_REG_03	=	0x080c
                    0810   1324 _ANA_DFEO_REG_04	=	0x0810
                    0814   1325 _ANA_DFEO_REG_05	=	0x0814
                    0818   1326 _ANA_DFEO_REG_06	=	0x0818
                    081C   1327 _ANA_DFEO_REG_07	=	0x081c
                    0820   1328 _ANA_DFEO_REG_08	=	0x0820
                    0824   1329 _ANA_DFEO_REG_09	=	0x0824
                    0828   1330 _ANA_DFEO_REG_0A	=	0x0828
                    082C   1331 _ANA_DFEO_REG_0B	=	0x082c
                    8200   1332 _UPHY14_CMN_ANAREG_TOP_128	=	0x8200
                    8204   1333 _UPHY14_CMN_ANAREG_TOP_129	=	0x8204
                    8208   1334 _UPHY14_CMN_ANAREG_TOP_130	=	0x8208
                    820C   1335 _UPHY14_CMN_ANAREG_TOP_131	=	0x820c
                    8210   1336 _UPHY14_CMN_ANAREG_TOP_132	=	0x8210
                    8214   1337 _UPHY14_CMN_ANAREG_TOP_133	=	0x8214
                    8218   1338 _UPHY14_CMN_ANAREG_TOP_134	=	0x8218
                    821C   1339 _UPHY14_CMN_ANAREG_TOP_135	=	0x821c
                    8220   1340 _UPHY14_CMN_ANAREG_TOP_136	=	0x8220
                    8224   1341 _UPHY14_CMN_ANAREG_TOP_137	=	0x8224
                    8228   1342 _UPHY14_CMN_ANAREG_TOP_138	=	0x8228
                    822C   1343 _UPHY14_CMN_ANAREG_TOP_139	=	0x822c
                    8230   1344 _UPHY14_CMN_ANAREG_TOP_140	=	0x8230
                    8234   1345 _UPHY14_CMN_ANAREG_TOP_141	=	0x8234
                    8238   1346 _UPHY14_CMN_ANAREG_TOP_142	=	0x8238
                    823C   1347 _UPHY14_CMN_ANAREG_TOP_143	=	0x823c
                    8240   1348 _UPHY14_CMN_ANAREG_TOP_144	=	0x8240
                    8244   1349 _UPHY14_CMN_ANAREG_TOP_145	=	0x8244
                    8248   1350 _UPHY14_CMN_ANAREG_TOP_146	=	0x8248
                    824C   1351 _UPHY14_CMN_ANAREG_TOP_147	=	0x824c
                    8250   1352 _UPHY14_CMN_ANAREG_TOP_148	=	0x8250
                    8254   1353 _UPHY14_CMN_ANAREG_TOP_149	=	0x8254
                    8258   1354 _UPHY14_CMN_ANAREG_TOP_150	=	0x8258
                    825C   1355 _UPHY14_CMN_ANAREG_TOP_151	=	0x825c
                    8260   1356 _UPHY14_CMN_ANAREG_TOP_152	=	0x8260
                    8264   1357 _UPHY14_CMN_ANAREG_TOP_153	=	0x8264
                    8268   1358 _UPHY14_CMN_ANAREG_TOP_154	=	0x8268
                    826C   1359 _UPHY14_CMN_ANAREG_TOP_155	=	0x826c
                    8270   1360 _UPHY14_CMN_ANAREG_TOP_156	=	0x8270
                    8274   1361 _UPHY14_CMN_ANAREG_TOP_157	=	0x8274
                    8278   1362 _UPHY14_CMN_ANAREG_TOP_158	=	0x8278
                    827C   1363 _UPHY14_CMN_ANAREG_TOP_159	=	0x827c
                    8280   1364 _UPHY14_CMN_ANAREG_TOP_160	=	0x8280
                    8284   1365 _UPHY14_CMN_ANAREG_TOP_161	=	0x8284
                    8288   1366 _UPHY14_CMN_ANAREG_TOP_162	=	0x8288
                    828C   1367 _UPHY14_CMN_ANAREG_TOP_163	=	0x828c
                    8290   1368 _UPHY14_CMN_ANAREG_TOP_164	=	0x8290
                    8294   1369 _UPHY14_CMN_ANAREG_TOP_165	=	0x8294
                    8298   1370 _UPHY14_CMN_ANAREG_TOP_166	=	0x8298
                    829C   1371 _UPHY14_CMN_ANAREG_TOP_167	=	0x829c
                    82A0   1372 _UPHY14_CMN_ANAREG_TOP_168	=	0x82a0
                    82A4   1373 _UPHY14_CMN_ANAREG_TOP_169	=	0x82a4
                    82A8   1374 _UPHY14_CMN_ANAREG_TOP_170	=	0x82a8
                    82AC   1375 _UPHY14_CMN_ANAREG_TOP_171	=	0x82ac
                    82B0   1376 _UPHY14_CMN_ANAREG_TOP_172	=	0x82b0
                    82B4   1377 _UPHY14_CMN_ANAREG_TOP_173	=	0x82b4
                    82B8   1378 _UPHY14_CMN_ANAREG_TOP_174	=	0x82b8
                    82BC   1379 _UPHY14_CMN_ANAREG_TOP_175	=	0x82bc
                    82C0   1380 _UPHY14_CMN_ANAREG_TOP_176	=	0x82c0
                    82C4   1381 _UPHY14_CMN_ANAREG_TOP_177	=	0x82c4
                    82C8   1382 _UPHY14_CMN_ANAREG_TOP_178	=	0x82c8
                    82CC   1383 _UPHY14_CMN_ANAREG_TOP_179	=	0x82cc
                    82D0   1384 _UPHY14_CMN_ANAREG_TOP_180	=	0x82d0
                    82D4   1385 _UPHY14_CMN_ANAREG_TOP_181	=	0x82d4
                    82D8   1386 _UPHY14_CMN_ANAREG_TOP_182	=	0x82d8
                    82DC   1387 _UPHY14_CMN_ANAREG_TOP_183	=	0x82dc
                    82E0   1388 _UPHY14_CMN_ANAREG_TOP_184	=	0x82e0
                    82E4   1389 _UPHY14_CMN_ANAREG_TOP_185	=	0x82e4
                    82E8   1390 _UPHY14_CMN_ANAREG_TOP_186	=	0x82e8
                    82EC   1391 _UPHY14_CMN_ANAREG_TOP_187	=	0x82ec
                    82F0   1392 _UPHY14_CMN_ANAREG_TOP_188	=	0x82f0
                    82F4   1393 _UPHY14_CMN_ANAREG_TOP_189	=	0x82f4
                    82F8   1394 _UPHY14_CMN_ANAREG_TOP_190	=	0x82f8
                    82FC   1395 _UPHY14_CMN_ANAREG_TOP_191	=	0x82fc
                    8300   1396 _UPHY14_CMN_ANAREG_TOP_192	=	0x8300
                    8304   1397 _UPHY14_CMN_ANAREG_TOP_193	=	0x8304
                    8308   1398 _UPHY14_CMN_ANAREG_TOP_194	=	0x8308
                    830C   1399 _UPHY14_CMN_ANAREG_TOP_195	=	0x830c
                    8310   1400 _UPHY14_CMN_ANAREG_TOP_196	=	0x8310
                    8314   1401 _UPHY14_CMN_ANAREG_TOP_197	=	0x8314
                    8318   1402 _UPHY14_CMN_ANAREG_TOP_198	=	0x8318
                    831C   1403 _UPHY14_CMN_ANAREG_TOP_199	=	0x831c
                    8320   1404 _UPHY14_CMN_ANAREG_TOP_200	=	0x8320
                    8324   1405 _UPHY14_CMN_ANAREG_TOP_201	=	0x8324
                    8328   1406 _UPHY14_CMN_ANAREG_TOP_202	=	0x8328
                    832C   1407 _UPHY14_CMN_ANAREG_TOP_203	=	0x832c
                    8330   1408 _UPHY14_CMN_ANAREG_TOP_204	=	0x8330
                    8334   1409 _UPHY14_CMN_ANAREG_TOP_205	=	0x8334
                    8338   1410 _UPHY14_CMN_ANAREG_TOP_206	=	0x8338
                    833C   1411 _UPHY14_CMN_ANAREG_TOP_207	=	0x833c
                    8340   1412 _UPHY14_CMN_ANAREG_TOP_208	=	0x8340
                    8344   1413 _UPHY14_CMN_ANAREG_TOP_209	=	0x8344
                    8348   1414 _UPHY14_CMN_ANAREG_TOP_210	=	0x8348
                    834C   1415 _UPHY14_CMN_ANAREG_TOP_211	=	0x834c
                    8350   1416 _UPHY14_CMN_ANAREG_TOP_212	=	0x8350
                    8354   1417 _UPHY14_CMN_ANAREG_TOP_213	=	0x8354
                    8358   1418 _UPHY14_CMN_ANAREG_TOP_214	=	0x8358
                    2000   1419 _PM_CTRL_TX_LANE_REG1_LANE	=	0x2000
                    2004   1420 _PM_CTRL_TX_LANE_REG2_LANE	=	0x2004
                    2008   1421 _INPUT_TX_PIN_REG0_LANE	=	0x2008
                    200C   1422 _INPUT_TX_PIN_REG1_LANE	=	0x200c
                    2010   1423 _INPUT_TX_PIN_REG2_LANE	=	0x2010
                    2014   1424 _INPUT_TX_PIN_REG3_LANE	=	0x2014
                    2018   1425 _PM_CTRL_INTERRUPT_REG1_LANE	=	0x2018
                    201C   1426 _PM_CTRL_INTERRUPT_REG2	=	0x201c
                    2020   1427 _CLKGEN_TX_LANE_REG1_LANE	=	0x2020
                    2024   1428 _TX_SPEED_CONVERT_LANE	=	0x2024
                    2028   1429 _SPD_CTRL_INTERRUPT_REG1_LANE	=	0x2028
                    202C   1430 _SPD_CTRL_INTERRUPT_REG2	=	0x202c
                    2030   1431 _SPD_CTRL_TX_LANE_REG1_LANE	=	0x2030
                    2034   1432 _TX_SYSTEM_LANE	=	0x2034
                    203C   1433 _INPUT_TX_PIN_REG4_LANE	=	0x203c
                    2040   1434 _TX_CALIBRATION_LANE	=	0x2040
                    2044   1435 _DIG_TX_RSVD_REG0	=	0x2044
                    2048   1436 _INPUT_TX_PIN_REG5_LANE	=	0x2048
                    204C   1437 __FIELDNAME__LANE	=	0x204c
                    2050   1438 _PM_CTRL_INTERRUPT_ISR_REG1_LANE	=	0x2050
                    2054   1439 _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE	=	0x2054
                    2058   1440 _ANALOG_TX_REALTIME_REG_1	=	0x2058
                    205C   1441 _MON_TOP	=	0x205c
                    2100   1442 _PM_CTRL_RX_LANE_REG1_LANE	=	0x2100
                    2104   1443 _RX_SYSTEM_LANE	=	0x2104
                    2108   1444 _INPUT_RX_PIN_REG0_LANE	=	0x2108
                    210C   1445 _INPUT_RX_PIN_REG1_LANE	=	0x210c
                    2110   1446 _INPUT_RX_PIN_REG2_LANE	=	0x2110
                    2114   1447 _SPD_CTRL_RX_LANE_REG1_LANE	=	0x2114
                    2118   1448 _DIG_RX_RSVD_REG0	=	0x2118
                    211C   1449 _CLKGEN_RX_LANE_REG1_LANE	=	0x211c
                    2120   1450 _FRAME_SYNC_DET_REG0	=	0x2120
                    2124   1451 _FRAME_SYNC_DET_REG1	=	0x2124
                    2128   1452 _FRAME_SYNC_DET_REG2	=	0x2128
                    212C   1453 _FRAME_SYNC_DET_REG3	=	0x212c
                    2130   1454 _FRAME_SYNC_DET_REG4	=	0x2130
                    2134   1455 _FRAME_SYNC_DET_REG5	=	0x2134
                    2138   1456 _FRAME_SYNC_DET_REG6	=	0x2138
                    213C   1457 _CDR_LOCK_REG	=	0x213c
                    2140   1458 _RX_LANE_INTERRUPT	=	0x2140
                    2144   1459 _RX_LANE_INTERRUPT_MASK	=	0x2144
                    2148   1460 _RX_DATA_PATH_REG	=	0x2148
                    214C   1461 _INPUT_RX_PIN_REG3_LANE	=	0x214c
                    2150   1462 _RX_CALIBRATION_REG	=	0x2150
                    2158   1463 _RX_LANE_INTERRUPT_REG1	=	0x2158
                    2160   1464 _DTL_REG0	=	0x2160
                    2164   1465 _DTL_REG1	=	0x2164
                    2168   1466 _DTL_REG2	=	0x2168
                    216C   1467 _DTL_REG3	=	0x216c
                    2170   1468 _SQ_REG0	=	0x2170
                    4000   1469 _LANE_CFG0	=	0x4000
                    4004   1470 _LANE_STATUS0	=	0x4004
                    4008   1471 _LANE_CFG_STATUS2_LANE	=	0x4008
                    400C   1472 _LANE_CFG2_LANE	=	0x400c
                    4010   1473 _LANE_CFG4	=	0x4010
                    4014   1474 _LANE_CFG_STATUS3_LANE	=	0x4014
                    4018   1475 _LANE_DP_PIE8_CFG0_LANE	=	0x4018
                    401C   1476 _LANE_USB_DP_CFG1_LANE	=	0x401c
                    4020   1477 _LANE_USB_DP_CFG2_LANE	=	0x4020
                    4024   1478 _LANE_EQ_CFG0_LANE	=	0x4024
                    4028   1479 _LANE_EQ_CFG1_LANE	=	0x4028
                    402C   1480 _LANE_PRESET_CFG0_LANE	=	0x402c
                    4030   1481 _LANE_PRESET_CFG2_LANE	=	0x4030
                    4034   1482 _LANE_PRESET_CFG4_LANE	=	0x4034
                    4038   1483 _LANE_PRESET_CFG6_LANE	=	0x4038
                    403C   1484 _LANE_PRESET_CFG8_LANE	=	0x403c
                    4040   1485 _LANE_PRESET_CFG10_LANE	=	0x4040
                    4044   1486 _LANE_PRESET_CFG12_LANE	=	0x4044
                    4048   1487 _LANE_PRESET_CFG14_LANE	=	0x4048
                    404C   1488 _LANE_PRESET_CFG16_LANE	=	0x404c
                    4050   1489 _LANE_COEFF_MAX0_LANE	=	0x4050
                    4054   1490 _LANE_REMOTE_SET_LANE	=	0x4054
                    4058   1491 _LANE_EQ_16G_CFG0_LANE	=	0x4058
                    405C   1492 _LANE_16G_PRESET_CFG0_LANE	=	0x405c
                    4060   1493 _LANE_16G_PRESET_CFG2_LANE	=	0x4060
                    4064   1494 _LANE_16G_PRESET_CFG4_LANE	=	0x4064
                    4068   1495 _LANE_16G_PRESET_CFG6_LANE	=	0x4068
                    406C   1496 _LANE_16G_PRESET_CFG8_LANE	=	0x406c
                    4070   1497 _LANE_16G_PRESET_CFG10_LANE	=	0x4070
                    4074   1498 _LANE_16G_PRESET_CFG12_LANE	=	0x4074
                    4078   1499 _LANE_16G_PRESET_CFG14_LANE	=	0x4078
                    407C   1500 _LANE_16G_PRESET_CFG16_LANE	=	0x407c
                    4080   1501 _LANE_EQ_32G_CFG0_LANE	=	0x4080
                    4084   1502 _LANE_32G_PRESET_CFG0_LANE	=	0x4084
                    4088   1503 _LANE_32G_PRESET_CFG2_LANE	=	0x4088
                    408C   1504 _LANE_32G_PRESET_CFG4_LANE	=	0x408c
                    4090   1505 _LANE_32G_PRESET_CFG6_LANE	=	0x4090
                    4094   1506 _LANE_32G_PRESET_CFG8_LANE	=	0x4094
                    4098   1507 _LANE_32G_PRESET_CFG10_LANE	=	0x4098
                    409C   1508 _LANE_32G_PRESET_CFG12_LANE	=	0x409c
                    40A0   1509 _LANE_32G_PRESET_CFG14_LANE	=	0x40a0
                    40A4   1510 _LANE_32G_PRESET_CFG16_LANE	=	0x40a4
                    2200   1511 _MCU_CONTROL_LANE	=	0x2200
                    2204   1512 _MCU_GPIO	=	0x2204
                    2208   1513 _CACHE_DEBUG0	=	0x2208
                    220C   1514 _CACHE_DEBUG1	=	0x220c
                    2210   1515 _LANE_SYSTEM0	=	0x2210
                    2230   1516 _MCU_STATUS0_LANE	=	0x2230
                    2234   1517 _MCU_STATUS1_LANE	=	0x2234
                    2238   1518 _MCU_STATUS2_LANE	=	0x2238
                    223C   1519 _MCU_STATUS3_LANE	=	0x223c
                    2240   1520 _MCU_INT0_CONTROL	=	0x2240
                    2244   1521 _MCU_INT1_CONTROL	=	0x2244
                    2248   1522 _MCU_INT2_CONTROL	=	0x2248
                    224C   1523 _MCU_INT3_CONTROL	=	0x224c
                    2250   1524 _MCU_INT4_CONTROL	=	0x2250
                    2254   1525 _MCU_INT5_CONTROL	=	0x2254
                    2258   1526 _MCU_INT6_CONTROL	=	0x2258
                    225C   1527 _MCU_INT7_CONTROL	=	0x225c
                    2260   1528 _MCU_INT8_CONTROL	=	0x2260
                    2264   1529 _MCU_INT9_CONTROL	=	0x2264
                    2268   1530 _MCU_INT10_CONTROL	=	0x2268
                    226C   1531 _MCU_INT11_CONTROL	=	0x226c
                    2270   1532 _MCU_INT12_CONTROL	=	0x2270
                    2274   1533 _MCU_TIMER_CONTROL	=	0x2274
                    2278   1534 _MCU_TIMER0_CONTROL	=	0x2278
                    227C   1535 _MCU_TIMER1_CONTROL	=	0x227c
                    2280   1536 _MCU_TIMER2_CONTROL	=	0x2280
                    2284   1537 _MCU_TIMER3_CONTROL	=	0x2284
                    2288   1538 _MCU_IRQ_LANE	=	0x2288
                    228C   1539 _MCU_IRQ_MASK_LANE	=	0x228c
                    2290   1540 _MCU_MEM_REG1_LANE	=	0x2290
                    2294   1541 _MCU_MEM_REG2_LANE	=	0x2294
                    2298   1542 _MCU_TIMER_CTRL_1_LANE	=	0x2298
                    229C   1543 _MCU_TIMER_CTRL_2_LANE	=	0x229c
                    22A0   1544 _MCU_TIMER_CTRL_3_LANE	=	0x22a0
                    22A4   1545 _MCU_TIMER_CTRL_4_LANE	=	0x22a4
                    22A8   1546 _MCU_TIMER_CTRL_5_LANE	=	0x22a8
                    22AC   1547 _MCU_TIMER_CTRL_6_LANE	=	0x22ac
                    22B0   1548 _MCU_TIMER_CTRL_7_LANE	=	0x22b0
                    22B4   1549 _MCU_DEBUG0_LANE	=	0x22b4
                    22B8   1550 _MCU_DEBUG1_LANE	=	0x22b8
                    22BC   1551 _MCU_DEBUG2_LANE	=	0x22bc
                    22C0   1552 _MCU_DEBUG3_LANE	=	0x22c0
                    22C4   1553 _MCU_DEBUG_LANE	=	0x22c4
                    22C8   1554 _EXT_INT_CONTROL	=	0x22c8
                    22CC   1555 _ANA_IF_TRX_REG0	=	0x22cc
                    22D0   1556 _ANA_IF_DFEE_REG0	=	0x22d0
                    22D4   1557 _ANA_IF_DFEO_REG0	=	0x22d4
                    22D8   1558 _MCU_IRQ_ISR_LANE	=	0x22d8
                    22DC   1559 _MCU_WDT_LANE	=	0x22dc
                    22E0   1560 _MCU_INT_CONTROL_13	=	0x22e0
                    22E4   1561 _MCU_COMMAND0	=	0x22e4
                    22F4   1562 _MEM_ECC_ERR_ADDRESS0	=	0x22f4
                    22F8   1563 _XDATA_MEM_CHECKSUM_LANE0	=	0x22f8
                    22FC   1564 _XDATA_MEM_CHECKSUM_LANE1	=	0x22fc
                    2300   1565 _PT_CONTROL0	=	0x2300
                    2304   1566 _PT_CONTROL1	=	0x2304
                    2308   1567 _PT_USER_PATTERN0	=	0x2308
                    230C   1568 _PT_USER_PATTERN1	=	0x230c
                    2310   1569 _PT_USER_PATTERN2	=	0x2310
                    2314   1570 _PT_COUNTER0	=	0x2314
                    2318   1571 _PT_COUNTER1	=	0x2318
                    231C   1572 _PT_COUNTER2	=	0x231c
                    2400   1573 _DFE_CTRL_REG0	=	0x2400
                    2404   1574 _DFE_CTRL_REG1	=	0x2404
                    2408   1575 _DFE_CTRL_REG2	=	0x2408
                    240C   1576 _DFE_CTRL_REG3	=	0x240c
                    2410   1577 _RX_EQ_CLK_CTRL	=	0x2410
                    2414   1578 _DFE_CTRL_REG4	=	0x2414
                    2418   1579 _DFE_ANA_REG0	=	0x2418
                    241C   1580 _DFE_ANA_REG1	=	0x241c
                    2420   1581 _DFE_STEP_REG0	=	0x2420
                    2424   1582 _DFE_STEP_REG1	=	0x2424
                    2430   1583 _DFE_FEN_EVEN_REG	=	0x2430
                    2434   1584 _DFE_FEN_ODD_REG	=	0x2434
                    2438   1585 _DFE_DC_EVEN_REG8	=	0x2438
                    243C   1586 _DFE_DC_ODD_REG8	=	0x243c
                    2440   1587 _DFE_FEXT_EVEN_REG0	=	0x2440
                    2444   1588 _DFE_FEXT_EVEN_REG1	=	0x2444
                    2448   1589 _DFE_FEXT_EVEN_REG2	=	0x2448
                    244C   1590 _DFE_FEXT_EVEN_REG3	=	0x244c
                    2450   1591 _DFE_FEXT_EVEN_REG4	=	0x2450
                    2454   1592 _DFE_FEXT_EVEN_REG5	=	0x2454
                    2458   1593 _DFE_FEXT_EVEN_REG6	=	0x2458
                    245C   1594 _DFE_FEXT_EVEN_REG7	=	0x245c
                    2460   1595 _DFE_FEXT_ODD_REG0	=	0x2460
                    2464   1596 _DFE_FEXT_ODD_REG1	=	0x2464
                    2468   1597 _DFE_FEXT_ODD_REG2	=	0x2468
                    246C   1598 _DFE_FEXT_ODD_REG3	=	0x246c
                    2470   1599 _DFE_FEXT_ODD_REG4	=	0x2470
                    2474   1600 _DFE_FEXT_ODD_REG5	=	0x2474
                    2478   1601 _DFE_FEXT_ODD_REG6	=	0x2478
                    247C   1602 _DFE_FEXT_ODD_REG7	=	0x247c
                    2480   1603 _DFE_READ_EVEN_SM_REG0	=	0x2480
                    2484   1604 _DFE_READ_EVEN_SM_REG1	=	0x2484
                    2488   1605 _DFE_READ_EVEN_SM_REG2	=	0x2488
                    248C   1606 _DFE_READ_EVEN_SM_REG3	=	0x248c
                    2490   1607 _DFE_READ_EVEN_SM_REG4	=	0x2490
                    2494   1608 _DFE_READ_EVEN_SM_REG5	=	0x2494
                    2498   1609 _DFE_READ_EVEN_SM_REG6	=	0x2498
                    249C   1610 _DFE_READ_EVEN_SM_REG7	=	0x249c
                    24A0   1611 _DFE_READ_ODD_SM_REG0	=	0x24a0
                    24A4   1612 _DFE_READ_ODD_SM_REG1	=	0x24a4
                    24A8   1613 _DFE_READ_ODD_SM_REG2	=	0x24a8
                    24AC   1614 _DFE_READ_ODD_SM_REG3	=	0x24ac
                    24B0   1615 _DFE_READ_ODD_SM_REG4	=	0x24b0
                    24B4   1616 _DFE_READ_ODD_SM_REG5	=	0x24b4
                    24B8   1617 _DFE_READ_ODD_SM_REG6	=	0x24b8
                    24BC   1618 _DFE_READ_ODD_SM_REG7	=	0x24bc
                    24C0   1619 _DFE_READ_EVEN_SM_REG8	=	0x24c0
                    24C4   1620 _DFE_READ_ODD_SM_REG8	=	0x24c4
                    24D0   1621 _DFE_READ_EVEN_2C_REG0	=	0x24d0
                    24D4   1622 _DFE_READ_EVEN_2C_REG1	=	0x24d4
                    24D8   1623 _DFE_READ_EVEN_2C_REG2	=	0x24d8
                    24DC   1624 _DFE_READ_EVEN_2C_REG3	=	0x24dc
                    24E0   1625 _DFE_READ_EVEN_2C_REG4	=	0x24e0
                    24E4   1626 _DFE_READ_EVEN_2C_REG5	=	0x24e4
                    24E8   1627 _DFE_READ_EVEN_2C_REG6	=	0x24e8
                    24EC   1628 _DFE_READ_EVEN_2C_REG7	=	0x24ec
                    24F0   1629 _DFE_READ_ODD_2C_REG0	=	0x24f0
                    24F4   1630 _DFE_READ_ODD_2C_REG1	=	0x24f4
                    24F8   1631 _DFE_READ_ODD_2C_REG2	=	0x24f8
                    24FC   1632 _DFE_READ_ODD_2C_REG3	=	0x24fc
                    2500   1633 _DFE_READ_ODD_2C_REG4	=	0x2500
                    2504   1634 _DFE_READ_ODD_2C_REG5	=	0x2504
                    2508   1635 _DFE_READ_ODD_2C_REG6	=	0x2508
                    250C   1636 _DFE_READ_ODD_2C_REG7	=	0x250c
                    2510   1637 _DFE_READ_EVEN_2C_REG8	=	0x2510
                    2514   1638 _DFE_READ_ODD_2C_REG8	=	0x2514
                    2518   1639 _CAL_OFST_REG0	=	0x2518
                    251C   1640 _CAL_OFST_REG1	=	0x251c
                    2520   1641 _CAL_OFST_REG2	=	0x2520
                    2530   1642 _DFE_DCE_REG0	=	0x2530
                    2540   1643 _DFE_STATIC_LANE_REG0	=	0x2540
                    2544   1644 _DFE_STATIC_LANE_REG1	=	0x2544
                    2548   1645 _DFE_STATIC_LANE_REG3	=	0x2548
                    254C   1646 _DFE_STATIC_LANE_REG4	=	0x254c
                    2550   1647 _DFE_STATIC_LANE_REG5	=	0x2550
                    2554   1648 _DFE_STATIC_LANE_REG6	=	0x2554
                    2560   1649 _EOM_VLD_REG0	=	0x2560
                    2564   1650 _EOM_VLD_REG1	=	0x2564
                    2568   1651 _EOM_VLD_REG2	=	0x2568
                    256C   1652 _EOM_VLD_REG3	=	0x256c
                    2570   1653 _EOM_ERR_REG0	=	0x2570
                    2574   1654 _EOM_ERR_REG1	=	0x2574
                    2578   1655 _EOM_ERR_REG2	=	0x2578
                    257C   1656 _EOM_ERR_REG3	=	0x257c
                    2580   1657 _EOM_REG0	=	0x2580
                    25F0   1658 _EOM_VLD_REG4	=	0x25f0
                    25F4   1659 _LANE_MARGIN_REG0	=	0x25f4
                    6000   1660 _CAL_CTRL1_LANE	=	0x6000
                    6004   1661 _CAL_CTRL2_LANE	=	0x6004
                    6008   1662 _CAL_CTRL3_LANE	=	0x6008
                    600C   1663 _CAL_CTRL4_LANE	=	0x600c
                    6010   1664 _CAL_SAVE_DATA1_LANE	=	0x6010
                    6014   1665 _CAL_SAVE_DATA2_LANE	=	0x6014
                    6018   1666 _CAL_SAVE_DATA3_LANE	=	0x6018
                    601C   1667 _PHY_REMOTE_CTRL_COMMAND_LANE	=	0x601c
                    6020   1668 _PHY_REMOTE_CTRL_VALUE_LANE	=	0x6020
                    6024   1669 _PHY_LOCAL_VALUE_LANE	=	0x6024
                    6028   1670 _TRX_TRAIN_IF_TIMERS1_LANE	=	0x6028
                    602C   1671 _TRX_TRAIN_IF_TIMERS2_LANE	=	0x602c
                    6030   1672 _TRX_TRAIN_IF_TIMERS_ENABLE_LANE	=	0x6030
                    6034   1673 _DFE_CONTROL_0	=	0x6034
                    6038   1674 _DFE_CONTROL_1	=	0x6038
                    6040   1675 _DFE_CONTROL_2	=	0x6040
                    6044   1676 _DFE_CONTROL_3	=	0x6044
                    6048   1677 _DFE_CONTROL_4	=	0x6048
                    604C   1678 _DFE_CONTROL_5	=	0x604c
                    6050   1679 _TRAIN_CONTROL_0	=	0x6050
                    6054   1680 _TRAIN_CONTROL_1	=	0x6054
                    6058   1681 _TRAIN_CONTROL_2	=	0x6058
                    605C   1682 _RPTA_CONFIG_0	=	0x605c
                    6060   1683 _RPTA_CONFIG_1	=	0x6060
                    6064   1684 _DLL_CAL	=	0x6064
                    6068   1685 _TRAIN_PARA_0	=	0x6068
                    606C   1686 _TRAIN_PARA_1	=	0x606c
                    6070   1687 _TRAIN_PARA_2	=	0x6070
                    6074   1688 _TRAIN_PARA_3	=	0x6074
                    6078   1689 _DFE_CONTROL_6	=	0x6078
                    607C   1690 _DFE_TEST_0	=	0x607c
                    6080   1691 _DFE_TEST_1	=	0x6080
                    6084   1692 _DFE_TEST_4	=	0x6084
                    6088   1693 _DFE_TEST_5	=	0x6088
                    608C   1694 _DFE_CONTROL_7	=	0x608c
                    6090   1695 _DFE_CONTROL_8	=	0x6090
                    6094   1696 _DFE_CONTROL_9	=	0x6094
                    6098   1697 _DFE_CONTROL_10	=	0x6098
                    609C   1698 _DFE_CONTROL_11	=	0x609c
                    60A0   1699 _CDS_CTRL_REG0	=	0x60a0
                    60A4   1700 _CDS_CTRL_REG1	=	0x60a4
                    60A8   1701 _ESM_POP_P_CNT_LOW_LANE	=	0x60a8
                    60AC   1702 _ESM_ERR_P_CNT_LOW_LANE	=	0x60ac
                    60B0   1703 _ESM_ERR_POP_CNT_HIGH_LANE	=	0x60b0
                    60B4   1704 _TRAIN_CONTROL_3	=	0x60b4
                    60B8   1705 _TRAIN_CONTROL_4	=	0x60b8
                    60BC   1706 _TRAIN_CONTROL_5	=	0x60bc
                    60C0   1707 _TRAIN_CONTROL_6	=	0x60c0
                    60C4   1708 _TRAIN_CONTROL_7	=	0x60c4
                    60C8   1709 _TRAIN_CONTROL_8	=	0x60c8
                    60CC   1710 _TRAIN_CONTROL_9	=	0x60cc
                    60D0   1711 _TRAIN_CONTROL_10	=	0x60d0
                    60D4   1712 _TRAIN_CONTROL_11	=	0x60d4
                    60D8   1713 _TRAIN_CONTROL_12	=	0x60d8
                    60DC   1714 _ESM_POP_N_CNT_LOW_LANE	=	0x60dc
                    60E0   1715 _ESM_ERR_N_CNT_LOW_LANE	=	0x60e0
                    60E4   1716 _TRAIN_CONTROL_13	=	0x60e4
                    60E8   1717 _TRAIN_CONTROL_14	=	0x60e8
                    60EC   1718 _TRAIN_CONTROL_15	=	0x60ec
                    60F0   1719 _TRAIN_CONTROL_16	=	0x60f0
                    60F4   1720 _TRAIN_CONTROL_17	=	0x60f4
                    60F8   1721 _END_XDAT_LANE	=	0x60f8
                    A000   1722 _TX_CMN_REG	=	0xa000
                    A008   1723 _DTX_REG0	=	0xa008
                    A00C   1724 _DTX_REG1	=	0xa00c
                    A010   1725 _DTX_REG2	=	0xa010
                    A014   1726 _DTX_REG3	=	0xa014
                    A018   1727 _DTX_REG4	=	0xa018
                    A01C   1728 _DTX_PHY_ALIGN_REG0	=	0xa01c
                    A024   1729 _DTX_PHY_ALIGN_REG1	=	0xa024
                    A028   1730 _DTX_PHY_ALIGN_REG2	=	0xa028
                    A02C   1731 _SRIS_REG0	=	0xa02c
                    A030   1732 _SRIS_REG1	=	0xa030
                    A100   1733 _RX_CMN_0	=	0xa100
                    A110   1734 _DFE_STATIC_REG0	=	0xa110
                    A114   1735 _DFE_STATIC_REG1	=	0xa114
                    A118   1736 _DFE_STATIC_REG3	=	0xa118
                    A11C   1737 _DFE_STATIC_REG4	=	0xa11c
                    A120   1738 _DFE_STATIC_REG5	=	0xa120
                    A124   1739 _DFE_STATIC_REG6	=	0xa124
                    4200   1740 _GLOB_RST_CLK_CTRL	=	0x4200
                    4204   1741 _GLOB_CLK_SRC_LO	=	0x4204
                    4208   1742 _GLOB_CLK_SRC_HI	=	0x4208
                    420C   1743 _GLOB_MISC_CTRL	=	0x420c
                    4210   1744 _GLOB_DP_SAL_CFG	=	0x4210
                    4214   1745 _GLOB_DP_SAL_CFG1	=	0x4214
                    4218   1746 _GLOB_DP_SAL_CFG3	=	0x4218
                    421C   1747 _GLOB_DP_SAL_CFG5	=	0x421c
                    4220   1748 _GLOB_PM_CFG0	=	0x4220
                    4224   1749 _GLOB_COUNTER_CTRL	=	0x4224
                    4228   1750 _GLOB_COUNTER_HI	=	0x4228
                    422C   1751 _GLOB_PM_DP_CTRL	=	0x422c
                    4230   1752 _GLOB_DP_BAL_CFG0	=	0x4230
                    4234   1753 _GLOB_DP_BAL_CFG2	=	0x4234
                    4238   1754 _GLOB_DP_BAL_CFG4	=	0x4238
                    423C   1755 _GLOB_BIST_CTRL	=	0x423c
                    4240   1756 _GLOB_BIST_LANE_TYPE	=	0x4240
                    4244   1757 _GLOB_BIST_START	=	0x4244
                    4248   1758 _GLOB_BIST_MASK	=	0x4248
                    424C   1759 _GLOB_BIST_RESULT	=	0x424c
                    4250   1760 _GLOB_BIST_SEQR_CFG	=	0x4250
                    4254   1761 _GLOB_BIST_DATA_HI	=	0x4254
                    4258   1762 _GLOB_PIPE_REVISION	=	0x4258
                    425C   1763 _GLOB_L1_SUBSTATES_CFG	=	0x425c
                    A200   1764 _MCU_CONTROL_0	=	0xa200
                    A204   1765 _MCU_CONTROL_1	=	0xa204
                    A208   1766 _MCU_CONTROL_2	=	0xa208
                    A20C   1767 _MCU_CONTROL_3	=	0xa20c
                    A210   1768 _MCU_CONTROL_4	=	0xa210
                    A214   1769 _MCU_DEBUG0	=	0xa214
                    A218   1770 _MCU_DEBUG1	=	0xa218
                    A21C   1771 _MEMORY_CONTROL_0	=	0xa21c
                    A220   1772 _MEMORY_CONTROL_1	=	0xa220
                    A224   1773 _MEMORY_CONTROL_2	=	0xa224
                    A228   1774 _MEMORY_CONTROL_3	=	0xa228
                    A22C   1775 _MEMORY_CONTROL_4	=	0xa22c
                    A234   1776 _MCU_INFO_0	=	0xa234
                    A238   1777 _MCU_INFO_1	=	0xa238
                    A23C   1778 _MCU_INFO_2	=	0xa23c
                    A240   1779 _MCU_INFO_3	=	0xa240
                    A244   1780 _MEM_CMN_ECC_ERR_ADDRESS0	=	0xa244
                    A2E0   1781 _ANA_IF_CMN_REG1	=	0xa2e0
                    A2E4   1782 _MEM_IRQ	=	0xa2e4
                    A2E8   1783 _MEM_IRQ_MASK	=	0xa2e8
                    A2EC   1784 _ANA_IF_CMN_REG0	=	0xa2ec
                    A2F0   1785 _APB_CONTROL_REG	=	0xa2f0
                    A2F4   1786 _MEM_IRQ_CLEAR	=	0xa2f4
                    A2F8   1787 _MCU_SYNC1	=	0xa2f8
                    A2FC   1788 _MCU_SYNC2	=	0xa2fc
                    A300   1789 _TEST0	=	0xa300
                    A304   1790 _TEST1	=	0xa304
                    A308   1791 _TEST2	=	0xa308
                    A30C   1792 _TEST3	=	0xa30c
                    A310   1793 _TEST4	=	0xa310
                    A314   1794 _SYSTEM	=	0xa314
                    A318   1795 _PM_CMN_REG1	=	0xa318
                    A31C   1796 _INPUT_CMN_PIN_REG0	=	0xa31c
                    A320   1797 _INPUT_CMN_PIN_REG1	=	0xa320
                    A324   1798 _INPUT_CMN_PIN_REG2	=	0xa324
                    A328   1799 _ANA_TSEN_CONTROL	=	0xa328
                    A32C   1800 _PLLCAL_REG0	=	0xa32c
                    A330   1801 _PLLCAL_REG1	=	0xa330
                    A334   1802 _CLKGEN_CMN_REG1	=	0xa334
                    A338   1803 _SPD_CMN_REG1	=	0xa338
                    A33C   1804 _OUTPUT_CMN_PIN_REG0	=	0xa33c
                    A340   1805 _CMN_CALIBRATION	=	0xa340
                    A344   1806 __FIELDNAME_	=	0xa344
                    A348   1807 _INPUT_CMN_PIN_REG3	=	0xa348
                    A34C   1808 _PM_CMN_REG2	=	0xa34c
                    A354   1809 _TEST5	=	0xa354
                    A358   1810 _XDATA_MEM_CHECKSUM_CMN_0	=	0xa358
                    A35C   1811 _XDATA_MEM_CHECKSUM_CMN_1	=	0xa35c
                    A360   1812 _XDATA_MEM_CHECKSUM_CMN_2	=	0xa360
                    A364   1813 _MCU_SDT_CMN	=	0xa364
                    A368   1814 _CMN_CACHE_DEBUG0	=	0xa368
                    A36C   1815 _MCU_INT_ADDR	=	0xa36c
                    A370   1816 _CMN_ISR_2	=	0xa370
                    A374   1817 _CMN_ISR_MASK_2	=	0xa374
                    A378   1818 _CMN_ISR_CLEAR_2	=	0xa378
                    A37C   1819 _CMN_MCU_GPIO	=	0xa37c
                    A380   1820 _CMN_CACHE_DEBUG1	=	0xa380
                    A384   1821 _CMN_MCU_TIMER_CONTROL	=	0xa384
                    A388   1822 _CMN_MCU_TIMER_CTRL_2_LANE	=	0xa388
                    A38C   1823 _CMN_MCU_TIMER_CTRL_3_LANE	=	0xa38c
                    A390   1824 _CMN_MCU_TIMER_CTRL_4_LANE	=	0xa390
                    A394   1825 _CMN_MCU_TIMER_CTRL_5_LANE	=	0xa394
                    A398   1826 _CMN_MCU_TIMER0_CONTROL	=	0xa398
                    A39C   1827 _CMN_MCU_TIMER1_CONTROL	=	0xa39c
                    A3A0   1828 _CMN_MCU_TIMER2_CONTROL	=	0xa3a0
                    A3A4   1829 _CMN_MCU_TIMER3_CONTROL	=	0xa3a4
                    A3A8   1830 _CMN_ISR_1	=	0xa3a8
                    A3AC   1831 _CMN_ISR_MASK_1	=	0xa3ac
                    A3B0   1832 _SET_LANE_ISR	=	0xa3b0
                    A3F4   1833 _CMN_MCU_REG	=	0xa3f4
                    A3F8   1834 _CID_REG0	=	0xa3f8
                    A3FC   1835 _CID_REG1	=	0xa3fc
                    E600   1836 _FW_REV	=	0xe600
                    E604   1837 _CONTROL_CONFIG0	=	0xe604
                    E608   1838 _CONTROL_CONFIG1	=	0xe608
                    E60C   1839 _CONTROL_CONFIG2	=	0xe60c
                    E610   1840 _CONTROL_CONFIG3	=	0xe610
                    E614   1841 _CONTROL_CONFIG4	=	0xe614
                    E618   1842 _CONTROL_CONFIG5	=	0xe618
                    E61C   1843 _CONTROL_CONFIG6	=	0xe61c
                    E620   1844 _CONTROL_CONFIG7	=	0xe620
                    E624   1845 _CAL_DATA0	=	0xe624
                    E628   1846 _TRAIN_IF_CONFIG	=	0xe628
                    E62C   1847 _CONTROL_CONFIG8	=	0xe62c
                    E630   1848 _CONTROL_CONFIG9	=	0xe630
                    E634   1849 _CON_CAL_STEP_SIZE1	=	0xe634
                    E638   1850 _CON_CAL_STEP_SIZE2	=	0xe638
                    E63C   1851 _CON_CAL_STEP_SIZE3	=	0xe63c
                    E640   1852 _CON_CAL_STEP_SIZE4	=	0xe640
                    E644   1853 _CON_CAL_STEP_SIZE5	=	0xe644
                    E648   1854 _CAL_TIME_OUT_AND_DIS	=	0xe648
                    E64C   1855 _CAL_STATUS_READ	=	0xe64c
                    E650   1856 _MCU_CONFIG	=	0xe650
                    E654   1857 _CAL_DATA1	=	0xe654
                    E658   1858 _LOOP_CNTS	=	0xe658
                    E65C   1859 _MCU_CONFIG1	=	0xe65c
                    E660   1860 _TIMER_SEL1	=	0xe660
                    E664   1861 _TIMER_SEL2	=	0xe664
                    E668   1862 _TIMER_SEL3	=	0xe668
                    E66C   1863 _G_SELLV_TXCLK	=	0xe66c
                    E670   1864 _G_SELLV_TXDATA	=	0xe670
                    E674   1865 _G_SELLV_TXPRE	=	0xe674
                    E678   1866 _G_SELLV_RXEOMCLK	=	0xe678
                    E67C   1867 _G_SELLV_RXDATACLK	=	0xe67c
                    E680   1868 _G_SELLV_RXSAMPLER	=	0xe680
                    E684   1869 _SAS_PRESET0_TB	=	0xe684
                    E688   1870 _SAS_PRESET1_TB	=	0xe688
                    E68C   1871 _SAS_PRESET2_TB	=	0xe68c
                    E690   1872 _ETH_PRESET0_TB	=	0xe690
                    E694   1873 _ETH_PRESET1_TB	=	0xe694
                    E698   1874 _TX_SAVE_0	=	0xe698
                    E69C   1875 _TX_SAVE_1	=	0xe69c
                    E6A0   1876 _TX_SAVE_2	=	0xe6a0
                    E6A4   1877 _TX_SAVE_3	=	0xe6a4
                    E6A8   1878 _TX_SAVE_4	=	0xe6a8
                    E6AC   1879 _CDS_EYE_CLK_THR	=	0xe6ac
                    E6B0   1880 _SYNC_INFO	=	0xe6b0
                    E6B4   1881 _MCU_INFO_4	=	0xe6b4
                    E6B8   1882 _MCU_INFO_5	=	0xe6b8
                    E6BC   1883 _MCU_INFO_12	=	0xe6bc
                    E6C0   1884 _MCU_INFO_13	=	0xe6c0
                    E6C4   1885 _END_XDAT_CMN	=	0xe6c4
                    2600   1886 _DME_ENC_REG0	=	0x2600
                    2604   1887 _DME_ENC_REG1	=	0x2604
                    2608   1888 _DME_ENC_REG2	=	0x2608
                    260C   1889 _DME_DEC_REG0	=	0x260c
                    2610   1890 _DME_DEC_REG1	=	0x2610
                    2614   1891 _TX_TRAIN_IF_REG0	=	0x2614
                    2618   1892 _TX_TRAIN_IF_REG1	=	0x2618
                    261C   1893 _TX_TRAIN_IF_REG2	=	0x261c
                    2620   1894 _TX_TRAIN_IF_REG3	=	0x2620
                    2624   1895 _TX_TRAIN_PATTTERN_REG0	=	0x2624
                    2628   1896 _TX_TRAIN_DRIVER_REG0	=	0x2628
                    262C   1897 _TX_TRAIN_DRIVER_REG1	=	0x262c
                    2630   1898 _TX_TRAIN_DRIVER_REG2	=	0x2630
                    2634   1899 _TX_TRAIN_DEFAULT_REG0	=	0x2634
                    2638   1900 _TX_TRAIN_DEFAULT_REG1	=	0x2638
                    263C   1901 _TX_TRAIN_DEFAULT_REG2	=	0x263c
                    2640   1902 _TX_TRAIN_DEFAULT_REG3	=	0x2640
                    2644   1903 _TX_TRAIN_DEFAULT_REG4	=	0x2644
                    2648   1904 _TX_TRAIN_DEFAULT_REG5	=	0x2648
                    264C   1905 _TX_EMPH_CTRL_REG0	=	0x264c
                    2650   1906 _LINK_TRAIN_MODE0	=	0x2650
                    2654   1907 _TX_DRV_RD_OUT_REG0	=	0x2654
                    2658   1908 _TX_AMP_CTRL_REG0	=	0x2658
                    265C   1909 _TRX_TRAIN_IF_INTERRUPT_LANE	=	0x265c
                    2660   1910 _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE	=	0x2660
                    2664   1911 _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE	=	0x2664
                    2668   1912 _TX_TRAIN_IF_REG4	=	0x2668
                    266C   1913 _TX_TRAIN_IF_REG5	=	0x266c
                    2670   1914 _TX_TRAIN_IF_REG6	=	0x2670
                    2674   1915 _TX_TRAIN_IF_REG7	=	0x2674
                    2678   1916 _TX_TRAIN_CTRL_LANE	=	0x2678
                    267C   1917 _TX_TRAIN_IF_REG8	=	0x267c
                    6100   1918 _DFE_READ_EVEN_REG0	=	0x6100
                    6104   1919 _DFE_READ_EVEN_REG1	=	0x6104
                    6108   1920 _DFE_READ_EVEN_REG2	=	0x6108
                    610C   1921 _DFE_READ_EVEN_REG3	=	0x610c
                    6110   1922 _DFE_READ_EVEN_REG4	=	0x6110
                    6114   1923 _DFE_READ_EVEN_REG5	=	0x6114
                    6118   1924 _DFE_READ_EVEN_REG6	=	0x6118
                    611C   1925 _DFE_READ_EVEN_REG7	=	0x611c
                    6120   1926 _DFE_READ_ODD_REG0	=	0x6120
                    6124   1927 _DFE_READ_ODD_REG1	=	0x6124
                    6128   1928 _DFE_READ_ODD_REG2	=	0x6128
                    612C   1929 _DFE_READ_ODD_REG3	=	0x612c
                    6130   1930 _DFE_READ_ODD_REG4	=	0x6130
                    6134   1931 _DFE_READ_ODD_REG5	=	0x6134
                    6138   1932 _DFE_READ_ODD_REG6	=	0x6138
                    613C   1933 _DFE_READ_ODD_REG7	=	0x613c
                    6140   1934 _DFE_READ_EVEN_REG8	=	0x6140
                    6144   1935 _DFE_READ_ODD_REG8	=	0x6144
                    6148   1936 _DFE_READ_F0A_EVEN	=	0x6148
                    614C   1937 _DFE_READ_F0A_ODD	=	0x614c
                    6150   1938 _DFE_READ_F0B_EVEN	=	0x6150
                    6154   1939 _DFE_READ_F0B_ODD	=	0x6154
                    6158   1940 _DFE_READ_F0D_EVEN	=	0x6158
                    615C   1941 _DFE_READ_F0D_ODD	=	0x615c
                    6160   1942 _DFE_READ_F0D_LEFT_EVEN	=	0x6160
                    6164   1943 _DFE_READ_F0D_LEFT_ODD	=	0x6164
                    6168   1944 _DFE_READ_F0D_RIGHT_EVEN	=	0x6168
                    616C   1945 _DFE_READ_F0D_RIGHT_ODD	=	0x616c
                    6170   1946 _CDS_READ_MISC0	=	0x6170
                    6174   1947 _CDS_READ_MISC1	=	0x6174
                    6214   1948 _TXTRAIN_IF_REG0	=	0x6214
                    E000   1949 _lc_speedtable	=	0xe000
                    E1C0   1950 _ring_speedtable	=	0xe1c0
                    E5C0   1951 _phy_mode_cmn_table	=	0xe5c0
                    6300   1952 _max_gen	=	0x6300
                    6301   1953 _min_gen	=	0x6301
                    6304   1954 _speedtable	=	0x6304
                    65D4   1955 _phy_mode_lane_table	=	0x65d4
                    60B4   1956 _rc_save	=	0x60b4
                    60D0   1957 _txffe_save	=	0x60d0
                    60E4   1958 _phase_save	=	0x60e4
                    6030   1959 _train_gn1_index	=	0x6030
                    6031   1960 _train_g1_index	=	0x6031
                    6032   1961 _train_g0_index	=	0x6032
                    E6B0   1962 _local_tx_preset_tb	=	0xe6b0
                    E5C1   1963 _cmx_cal_lcvco_dac	=	0xe5c1
                    E5C1   1964 _cmx_cal_lcvco_dac_lsb	=	0xe5c1
                    E5C4   1965 _cmx_cal_lcvco_dac_msb	=	0xe5c4
                    E5CA   1966 _cmx_cal_lccap_msb	=	0xe5ca
                    E5C8   1967 _cmx_cal_lccap_lsb	=	0xe5c8
                    E5CC   1968 _cmx_cal_plldcc	=	0xe5cc
                    E5D0   1969 _cmx_cal_pll_speed_ring	=	0xe5d0
                    E5D4   1970 _cmx_cal_pll_sllp_dac_coarse_ring	=	0xe5d4
                    E5D8   1971 _cmx_cal_sllp_dac_fine_ring	=	0xe5d8
                    65D4   1972 _lnx_cal_txdcc_pdiv	=	0x65d4
                    65D8   1973 _lnx_cal_txdcc_pdiv_hg	=	0x65d8
                    65DA   1974 _lnx_cal_txdcc	=	0x65da
                    65DE   1975 _lnx_cal_txdcc_hg	=	0x65de
                    65E0   1976 _lnx_cal_rxdcc_dll	=	0x65e0
                    65E4   1977 _lnx_cal_rxdcc_dll_hg	=	0x65e4
                    65E6   1978 _lnx_cal_rxdcc_data	=	0x65e6
                    65F0   1979 _lnx_cal_rxdcc_data_hg	=	0x65f0
                    65F5   1980 _lnx_cal_rxdcc_eom	=	0x65f5
                    65FF   1981 _lnx_cal_rxdcc_eom_hg	=	0x65ff
                    6604   1982 _lnx_cal_dll_gmsel	=	0x6604
                    6606   1983 _lnx_cal_vdda_dll_sel	=	0x6606
                    660A   1984 _lnx_cal_dll_eom_gmsel	=	0x660a
                    660C   1985 _lnx_cal_vdda_dll_eom_sel	=	0x660c
                    6610   1986 _lnx_cal_eom_dpher	=	0x6610
                    6612   1987 _lnx_cal_align90_dummy_clk	=	0x6612
                    661A   1988 _lnx_cal_align90_dac	=	0x661a
                    6622   1989 _lnx_cal_align90_gm	=	0x6622
                    662A   1990 _lnx_cal_sellv_txdata	=	0x662a
                    6634   1991 _lnx_cal_sellv_txclk	=	0x6634
                    663E   1992 _lnx_cal_sellv_rxdataclk	=	0x663e
                    6648   1993 _lnx_cal_sellv_txpre	=	0x6648
                    6652   1994 _lnx_cal_sellv_rxsampler	=	0x6652
                    665C   1995 _lnx_cal_sellv_rxeomclk	=	0x665c
                    6666   1996 _lnx_spdoft_tx_preset_index_lane	=	0x6666
                    6490   1997 _lnx_calx_txdcc_pdiv	=	0x6490
                    6496   1998 _lnx_calx_txdcc_pdiv_hg	=	0x6496
                    6499   1999 _lnx_calx_txdcc	=	0x6499
                    649F   2000 _lnx_calx_txdcc_hg	=	0x649f
                    64A2   2001 _lnx_calx_rxdcc_dll	=	0x64a2
                    64A8   2002 _lnx_calx_rxdcc_dll_hg	=	0x64a8
                    64AB   2003 _lnx_calx_dll_gmsel	=	0x64ab
                    64AE   2004 _lnx_calx_vdda_dll_sel	=	0x64ae
                    64B4   2005 _lnx_calx_dll_eom_gmsel	=	0x64b4
                    64B7   2006 _lnx_calx_vdda_dll_eom_sel	=	0x64b7
                    64BD   2007 _lnx_calx_eom_dpher	=	0x64bd
                    64C0   2008 _lnx_calx_align90_dummy_clk	=	0x64c0
                    64CC   2009 _lnx_calx_align90_dac	=	0x64cc
                    64D8   2010 _lnx_calx_align90_gm	=	0x64d8
                    6100   2011 _cds28	=	0x6100
                    6178   2012 _dfe_sm	=	0x6178
                    61B8   2013 _dfe_sm_dc	=	0x61b8
                    61C0   2014 _dfe_sm_save	=	0x61c0
                    03FC   2015 _UPHY_ANAREG_REV_0	=	0x03fc
                    E684   2016 _tx_tb	=	0xe684
                    E698   2017 _train_save_tb	=	0xe698
                    607C   2018 _sq_thrs_ratio_tb	=	0x607c
                           2019 ;--------------------------------------------------------
                           2020 ; absolute external ram data
                           2021 ;--------------------------------------------------------
                           2022 	.area XABS    (ABS,XDATA)
                           2023 ;--------------------------------------------------------
                           2024 ; external initialized ram data
                           2025 ;--------------------------------------------------------
                           2026 	.area HOME    (CODE)
                           2027 	.area GSINIT0 (CODE)
                           2028 	.area GSINIT1 (CODE)
                           2029 	.area GSINIT2 (CODE)
                           2030 	.area GSINIT3 (CODE)
                           2031 	.area GSINIT4 (CODE)
                           2032 	.area GSINIT5 (CODE)
                           2033 	.area GSINIT  (CODE)
                           2034 	.area GSFINAL (CODE)
                           2035 	.area CSEG    (CODE)
                           2036 ;--------------------------------------------------------
                           2037 ; global & static initialisations
                           2038 ;--------------------------------------------------------
                           2039 	.area HOME    (CODE)
                           2040 	.area GSINIT  (CODE)
                           2041 	.area GSFINAL (CODE)
                           2042 	.area GSINIT  (CODE)
                           2043 ;--------------------------------------------------------
                           2044 ; Home
                           2045 ;--------------------------------------------------------
                           2046 	.area HOME    (CODE)
                           2047 	.area HOME    (CODE)
                           2048 ;--------------------------------------------------------
                           2049 ; code
                           2050 ;--------------------------------------------------------
                           2051 	.area CSEG    (CODE)
                           2052 ;------------------------------------------------------------
                           2053 ;Allocation info for local variables in function 'cmd_if'
                           2054 ;------------------------------------------------------------
                           2055 ;cmd_type                  Allocated to stack - offset 1
                           2056 ;cmd_code                  Allocated to registers r4 
                           2057 ;result                    Allocated to registers r2 
                           2058 ;gen                       Allocated to registers r3 
                           2059 ;en_debug                  Allocated to stack - offset 2
                           2060 ;------------------------------------------------------------
                           2061 ;	../../shared/src/cmd_if.c:64: void cmd_if(void) CMD_BANK {
                           2062 ;	-----------------------------------------
                           2063 ;	 function cmd_if
                           2064 ;	-----------------------------------------
   0222                    2065 _cmd_if:
                    0002   2066 	ar2 = 0x02
                    0003   2067 	ar3 = 0x03
                    0004   2068 	ar4 = 0x04
                    0005   2069 	ar5 = 0x05
                    0006   2070 	ar6 = 0x06
                    0007   2071 	ar7 = 0x07
                    0000   2072 	ar0 = 0x00
                    0001   2073 	ar1 = 0x01
   0222 C0 18              2074 	push	_bp
   0224 85 81 18           2075 	mov	_bp,sp
   0227 05 81              2076 	inc	sp
   0229 05 81              2077 	inc	sp
                           2078 ;	../../shared/src/cmd_if.c:69: reg_PHY_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 1; 
                           2079 ;	../../shared/src/cmd_if.c:70: reg_PHY_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 0;
   022B 90 22 D8           2080 	mov	dptr,#_MCU_IRQ_ISR_LANE
   022E E0                 2081 	movx	a,@dptr
   022F 44 20              2082 	orl	a,#0x20
   0231 F0                 2083 	movx	@dptr,a
   0232 E0                 2084 	movx	a,@dptr
   0233 54 DF              2085 	anl	a,#0xdf
   0235 F0                 2086 	movx	@dptr,a
                           2087 ;	../../shared/src/cmd_if.c:72: reg_MCU_DEBUG0_LANE_7_0 = 0x14;	
   0236 90 22 B4           2088 	mov	dptr,#_MCU_DEBUG0_LANE
   0239 74 14              2089 	mov	a,#0x14
   023B F0                 2090 	movx	@dptr,a
                           2091 ;	../../shared/src/cmd_if.c:74: if(PHY_MCU_REMOTE_REQ_LANE==0) {
   023C 90 22 E4           2092 	mov	dptr,#_MCU_COMMAND0
   023F E0                 2093 	movx	a,@dptr
   0240 20 E0 0A           2094 	jb	acc.0,00102$
                           2095 ;	../../shared/src/cmd_if.c:75: lnx_PHY_MCU_LOCAL_ACK_LANE = 0;
   0243 90 60 33           2096 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   0246 E0                 2097 	movx	a,@dptr
   0247 54 FE              2098 	anl	a,#0xfe
   0249 F0                 2099 	movx	@dptr,a
                           2100 ;	../../shared/src/cmd_if.c:76: return;
   024A 02 04 F0           2101 	ljmp	00163$
   024D                    2102 00102$:
                           2103 ;	../../shared/src/cmd_if.c:79: result = CMD_ST_NA;
   024D 7A 02              2104 	mov	r2,#0x02
                           2105 ;	../../shared/src/cmd_if.c:80: cmd_type = lnx_PHY_REMOTE_CTRL_COMMAND_TYPE_LANE_7_0;
   024F 90 60 1F           2106 	mov	dptr,#(_PHY_REMOTE_CTRL_COMMAND_LANE + 0x0003)
   0252 E0                 2107 	movx	a,@dptr
   0253 FB                 2108 	mov	r3,a
   0254 A8 18              2109 	mov	r0,_bp
   0256 08                 2110 	inc	r0
   0257 A6 03              2111 	mov	@r0,ar3
                           2112 ;	../../shared/src/cmd_if.c:81: cmd_code = lnx_PHY_REMOTE_CTRL_COMMAND_CODE_LANE_15_0_b0;
   0259 90 60 1C           2113 	mov	dptr,#_PHY_REMOTE_CTRL_COMMAND_LANE
   025C E0                 2114 	movx	a,@dptr
   025D FC                 2115 	mov	r4,a
                           2116 ;	../../shared/src/cmd_if.c:82: en_debug = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b3&0x80)==0x80;
   025E 90 60 23           2117 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0003)
   0261 E0                 2118 	movx	a,@dptr
   0262 FD                 2119 	mov	r5,a
   0263 53 05 80           2120 	anl	ar5,#0x80
   0266 A8 18              2121 	mov	r0,_bp
   0268 08                 2122 	inc	r0
   0269 08                 2123 	inc	r0
   026A E4                 2124 	clr	a
   026B BD 80 01           2125 	cjne	r5,#0x80,00185$
   026E 04                 2126 	inc	a
   026F                    2127 00185$:
   026F F6                 2128 	mov	@r0,a
                           2129 ;	../../shared/src/cmd_if.c:84: PHY_LOCAL_VALUE_LANE.VAL = PHY_REMOTE_CTRL_VALUE_LANE.VAL; 
   0270 90 60 20           2130 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0273 E0                 2131 	movx	a,@dptr
   0274 FE                 2132 	mov	r6,a
   0275 A3                 2133 	inc	dptr
   0276 E0                 2134 	movx	a,@dptr
   0277 FF                 2135 	mov	r7,a
   0278 A3                 2136 	inc	dptr
   0279 E0                 2137 	movx	a,@dptr
   027A FD                 2138 	mov	r5,a
   027B A3                 2139 	inc	dptr
   027C E0                 2140 	movx	a,@dptr
   027D FB                 2141 	mov	r3,a
   027E 90 60 24           2142 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0281 EE                 2143 	mov	a,r6
   0282 F0                 2144 	movx	@dptr,a
   0283 A3                 2145 	inc	dptr
   0284 EF                 2146 	mov	a,r7
   0285 F0                 2147 	movx	@dptr,a
   0286 A3                 2148 	inc	dptr
   0287 ED                 2149 	mov	a,r5
   0288 F0                 2150 	movx	@dptr,a
   0289 A3                 2151 	inc	dptr
   028A EB                 2152 	mov	a,r3
   028B F0                 2153 	movx	@dptr,a
                           2154 ;	../../shared/src/cmd_if.c:86: gen = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b3&0xf);
   028C 90 60 23           2155 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0003)
   028F E0                 2156 	movx	a,@dptr
   0290 FB                 2157 	mov	r3,a
   0291 53 03 0F           2158 	anl	ar3,#0x0F
                           2159 ;	../../shared/src/cmd_if.c:88: if(phy_mode==SERDES) { 
   0294 90 A3 16           2160 	mov	dptr,#(_SYSTEM + 0x0002)
   0297 E0                 2161 	movx	a,@dptr
   0298 54 07              2162 	anl	a,#0x07
   029A FD                 2163 	mov	r5,a
   029B BD 04 32           2164 	cjne	r5,#0x04,00104$
                           2165 ;	../../shared/src/cmd_if.c:89: gen = min(reg_PIN_PHY_GEN_TX_RD_LANE_3_0, cmx_PHY_GEN_MAX_3_0);
   029E 90 E6 2C           2166 	mov	dptr,#_CONTROL_CONFIG8
   02A1 E0                 2167 	movx	a,@dptr
   02A2 54 0F              2168 	anl	a,#0x0f
   02A4 FD                 2169 	mov	r5,a
   02A5 90 20 33           2170 	mov	dptr,#(_SPD_CTRL_TX_LANE_REG1_LANE + 0x0003)
   02A8 E0                 2171 	movx	a,@dptr
   02A9 C4                 2172 	swap	a
   02AA 54 0F              2173 	anl	a,#0x0f
   02AC F5 82              2174 	mov	dpl,a
   02AE C0 02              2175 	push	ar2
   02B0 C0 04              2176 	push	ar4
   02B2 C0 05              2177 	push	ar5
   02B4 78 3B              2178 	mov	r0,#_min
   02B6 79 C0              2179 	mov	r1,#(_min >> 8)
   02B8 7A 02              2180 	mov	r2,#(_min >> 16)
   02BA 12 00 B3           2181 	lcall	__sdcc_banked_call
   02BD AD 82              2182 	mov	r5,dpl
   02BF 15 81              2183 	dec	sp
   02C1 8D 03              2184 	mov	ar3,r5
                           2185 ;	../../shared/src/cmd_if.c:90: gen = get_gen_memory_index(gen);
   02C3 8B 82              2186 	mov	dpl,r3
   02C5 12 42 30           2187 	lcall	_get_gen_memory_index
   02C8 AD 82              2188 	mov	r5,dpl
   02CA D0 04              2189 	pop	ar4
   02CC D0 02              2190 	pop	ar2
   02CE 8D 03              2191 	mov	ar3,r5
   02D0                    2192 00104$:
                           2193 ;	../../shared/src/cmd_if.c:93: if(gen>=5) 	 { 
   02D0 BB 05 00           2194 	cjne	r3,#0x05,00189$
   02D3                    2195 00189$:
   02D3 40 05              2196 	jc	00106$
                           2197 ;	../../shared/src/cmd_if.c:94: result = CMD_ST_INVALID_VALUE;
   02D5 7A 04              2198 	mov	r2,#0x04
                           2199 ;	../../shared/src/cmd_if.c:95: goto finish0;
   02D7 02 04 BA           2200 	ljmp	00162$
   02DA                    2201 00106$:
                           2202 ;	../../shared/src/cmd_if.c:98: if(en_debug) gen = 0x80;
   02DA A8 18              2203 	mov	r0,_bp
   02DC 08                 2204 	inc	r0
   02DD 08                 2205 	inc	r0
   02DE E6                 2206 	mov	a,@r0
   02DF 60 02              2207 	jz	00108$
   02E1 7B 80              2208 	mov	r3,#0x80
   02E3                    2209 00108$:
                           2210 ;	../../shared/src/cmd_if.c:100: reg_MCU_DEBUG0_LANE_7_0 = 0x13;	
   02E3 C0 02              2211 	push	ar2
   02E5 90 22 B4           2212 	mov	dptr,#_MCU_DEBUG0_LANE
   02E8 74 13              2213 	mov	a,#0x13
   02EA F0                 2214 	movx	@dptr,a
                           2215 ;	../../shared/src/cmd_if.c:101: reg_MCU_DEBUG1_LANE_7_0 = cmd_type;
   02EB 90 22 B5           2216 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0001)
   02EE A8 18              2217 	mov	r0,_bp
   02F0 08                 2218 	inc	r0
   02F1 E6                 2219 	mov	a,@r0
   02F2 F0                 2220 	movx	@dptr,a
                           2221 ;	../../shared/src/cmd_if.c:102: reg_MCU_DEBUG2_LANE_7_0 = cmd_code;
   02F3 90 22 B6           2222 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0002)
   02F6 EC                 2223 	mov	a,r4
   02F7 F0                 2224 	movx	@dptr,a
                           2225 ;	../../shared/src/cmd_if.c:103: MCU_DEBUG_LANE.VAL = PHY_REMOTE_CTRL_VALUE_LANE.VAL; 
   02F8 90 60 20           2226 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   02FB E0                 2227 	movx	a,@dptr
   02FC FD                 2228 	mov	r5,a
   02FD A3                 2229 	inc	dptr
   02FE E0                 2230 	movx	a,@dptr
   02FF FE                 2231 	mov	r6,a
   0300 A3                 2232 	inc	dptr
   0301 E0                 2233 	movx	a,@dptr
   0302 FF                 2234 	mov	r7,a
   0303 A3                 2235 	inc	dptr
   0304 E0                 2236 	movx	a,@dptr
   0305 FA                 2237 	mov	r2,a
   0306 90 22 C4           2238 	mov	dptr,#_MCU_DEBUG_LANE
   0309 ED                 2239 	mov	a,r5
   030A F0                 2240 	movx	@dptr,a
   030B A3                 2241 	inc	dptr
   030C EE                 2242 	mov	a,r6
   030D F0                 2243 	movx	@dptr,a
   030E A3                 2244 	inc	dptr
   030F EF                 2245 	mov	a,r7
   0310 F0                 2246 	movx	@dptr,a
   0311 A3                 2247 	inc	dptr
   0312 EA                 2248 	mov	a,r2
   0313 F0                 2249 	movx	@dptr,a
                           2250 ;	../../shared/src/cmd_if.c:105: if(cmd_type == CMD_TYPE_APTA) {
   0314 A8 18              2251 	mov	r0,_bp
   0316 08                 2252 	inc	r0
   0317 B6 60 02           2253 	cjne	@r0,#0x60,00192$
   031A 80 04              2254 	sjmp	00193$
   031C                    2255 00192$:
   031C D0 02              2256 	pop	ar2
   031E 80 0F              2257 	sjmp	00112$
   0320                    2258 00193$:
   0320 D0 02              2259 	pop	ar2
                           2260 ;	../../shared/src/cmd_if.c:106: if(reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE==0) goto finish0;
   0322 90 26 78           2261 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   0325 E0                 2262 	movx	a,@dptr
   0326 20 E0 03           2263 	jb	acc.0,00194$
   0329 02 04 BA           2264 	ljmp	00162$
   032C                    2265 00194$:
                           2266 ;	../../shared/src/cmd_if.c:107: return;
   032C 02 04 F0           2267 	ljmp	00163$
   032F                    2268 00112$:
                           2269 ;	../../shared/src/cmd_if.c:110: if(cmd_type == CMD_TYPE_ANA0) { //ana_ctrl
   032F A8 18              2270 	mov	r0,_bp
   0331 08                 2271 	inc	r0
   0332 B6 80 71           2272 	cjne	@r0,#0x80,00160$
                           2273 ;	../../shared/src/cmd_if.c:111: switch(cmd_code) {
   0335 74 0B              2274 	mov	a,#0x0B
   0337 B5 04 00           2275 	cjne	a,ar4,00197$
   033A                    2276 00197$:
   033A 50 03              2277 	jnc	00198$
   033C 02 04 BA           2278 	ljmp	00162$
   033F                    2279 00198$:
   033F EC                 2280 	mov	a,r4
   0340 2C                 2281 	add	a,r4
   0341 2C                 2282 	add	a,r4
   0342 90 03 46           2283 	mov	dptr,#00199$
   0345 73                 2284 	jmp	@a+dptr
   0346                    2285 00199$:
   0346 02 03 6A           2286 	ljmp	00114$
   0349 02 03 6A           2287 	ljmp	00113$
   034C 02 03 A3           2288 	ljmp	00121$
   034F 02 03 A3           2289 	ljmp	00121$
   0352 02 03 A3           2290 	ljmp	00121$
   0355 02 03 A3           2291 	ljmp	00121$
   0358 02 03 7A           2292 	ljmp	00116$
   035B 02 03 7A           2293 	ljmp	00115$
   035E 02 03 8A           2294 	ljmp	00118$
   0361 02 03 8A           2295 	ljmp	00117$
   0364 02 03 9A           2296 	ljmp	00120$
   0367 02 03 9A           2297 	ljmp	00119$
                           2298 ;	../../shared/src/cmd_if.c:112: case CMD_TX_FFE_GET:
   036A                    2299 00113$:
                           2300 ;	../../shared/src/cmd_if.c:113: case CMD_TX_FFE_SET:		result = cmd_tx_ffe(gen, cmd_code); break;
   036A                    2301 00114$:
   036A C0 04              2302 	push	ar4
   036C 8B 82              2303 	mov	dpl,r3
   036E 12 04 F6           2304 	lcall	_cmd_tx_ffe
   0371 AD 82              2305 	mov	r5,dpl
   0373 15 81              2306 	dec	sp
   0375 8D 02              2307 	mov	ar2,r5
   0377 02 04 BA           2308 	ljmp	00162$
                           2309 ;	../../shared/src/cmd_if.c:114: case CMD_TX_SLEW_RATE_GET:
   037A                    2310 00115$:
                           2311 ;	../../shared/src/cmd_if.c:115: case CMD_TX_SLEW_RATE_SET:  result = cmd_tx_slew_rate(gen, cmd_code); break;
   037A                    2312 00116$:
   037A C0 04              2313 	push	ar4
   037C 8B 82              2314 	mov	dpl,r3
   037E 12 09 6A           2315 	lcall	_cmd_tx_slew_rate
   0381 AD 82              2316 	mov	r5,dpl
   0383 15 81              2317 	dec	sp
   0385 8D 02              2318 	mov	ar2,r5
   0387 02 04 BA           2319 	ljmp	00162$
                           2320 ;	../../shared/src/cmd_if.c:116: case CMD_TX_SSC_GET:
   038A                    2321 00117$:
                           2322 ;	../../shared/src/cmd_if.c:117: case CMD_TX_SSC_SET:		result = cmd_ssc(gen, cmd_code); break;
   038A                    2323 00118$:
   038A C0 04              2324 	push	ar4
   038C 8B 82              2325 	mov	dpl,r3
   038E 12 0E 06           2326 	lcall	_cmd_ssc
   0391 AD 82              2327 	mov	r5,dpl
   0393 15 81              2328 	dec	sp
   0395 8D 02              2329 	mov	ar2,r5
   0397 02 04 BA           2330 	ljmp	00162$
                           2331 ;	../../shared/src/cmd_if.c:118: case CMD_TX_MARGIN_GET:
   039A                    2332 00119$:
                           2333 ;	../../shared/src/cmd_if.c:119: case CMD_TX_MARGIN_SET:		result = cmd_tx_margin(cmd_code); break;
   039A                    2334 00120$:
   039A 8C 82              2335 	mov	dpl,r4
   039C 12 0C 9A           2336 	lcall	_cmd_tx_margin
   039F AD 82              2337 	mov	r5,dpl
   03A1 8D 02              2338 	mov	ar2,r5
                           2339 ;	../../shared/src/cmd_if.c:120: }		
   03A3                    2340 00121$:
   03A3 02 04 BA           2341 	ljmp	00162$
   03A6                    2342 00160$:
                           2343 ;	../../shared/src/cmd_if.c:122: else if(cmd_type == CMD_TYPE_ANA1) { //ana_ctrl
   03A6 A8 18              2344 	mov	r0,_bp
   03A8 08                 2345 	inc	r0
   03A9 B6 81 47           2346 	cjne	@r0,#0x81,00157$
                           2347 ;	../../shared/src/cmd_if.c:123: switch(cmd_code) {
   03AC 74 05              2348 	mov	a,#0x05
   03AE B5 04 00           2349 	cjne	a,ar4,00202$
   03B1                    2350 00202$:
   03B1 50 03              2351 	jnc	00203$
   03B3 02 04 BA           2352 	ljmp	00162$
   03B6                    2353 00203$:
   03B6 EC                 2354 	mov	a,r4
   03B7 2C                 2355 	add	a,r4
   03B8 2C                 2356 	add	a,r4
   03B9 90 03 BD           2357 	mov	dptr,#00204$
   03BC 73                 2358 	jmp	@a+dptr
   03BD                    2359 00204$:
   03BD 02 03 CF           2360 	ljmp	00122$
   03C0 02 03 CF           2361 	ljmp	00123$
   03C3 02 03 DB           2362 	ljmp	00125$
   03C6 02 03 DB           2363 	ljmp	00124$
   03C9 02 03 E7           2364 	ljmp	00126$
   03CC 02 03 E7           2365 	ljmp	00127$
                           2366 ;	../../shared/src/cmd_if.c:124: case CMD_TX_REMOTE_PRESET_INX_SET:
   03CF                    2367 00122$:
                           2368 ;	../../shared/src/cmd_if.c:125: case CMD_TX_REMOTE_PRESET_INX_GET:	result = cmd_remote_tx_preset_index(cmd_code);  break;
   03CF                    2369 00123$:
   03CF 8C 82              2370 	mov	dpl,r4
   03D1 12 0C D3           2371 	lcall	_cmd_remote_tx_preset_index
   03D4 AD 82              2372 	mov	r5,dpl
   03D6 8D 02              2373 	mov	ar2,r5
   03D8 02 04 BA           2374 	ljmp	00162$
                           2375 ;	../../shared/src/cmd_if.c:126: case CMD_TX_PRESET_GET:
   03DB                    2376 00124$:
                           2377 ;	../../shared/src/cmd_if.c:127: case CMD_TX_PRESET_SET:			result = cmd_tx_preset(cmd_code); break;
   03DB                    2378 00125$:
   03DB 8C 82              2379 	mov	dpl,r4
   03DD 12 0D 1F           2380 	lcall	_cmd_tx_preset
   03E0 AD 82              2381 	mov	r5,dpl
   03E2 8D 02              2382 	mov	ar2,r5
   03E4 02 04 BA           2383 	ljmp	00162$
                           2384 ;	../../shared/src/cmd_if.c:128: case CMD_TX_LOCAL_PRESET_INX_SET:
   03E7                    2385 00126$:
                           2386 ;	../../shared/src/cmd_if.c:129: case CMD_TX_LOCAL_PRESET_INX_GET:	result = cmd_local_tx_preset_index(cmd_code);   break;
   03E7                    2387 00127$:
   03E7 8C 82              2388 	mov	dpl,r4
   03E9 12 0D B1           2389 	lcall	_cmd_local_tx_preset_index
   03EC AD 82              2390 	mov	r5,dpl
   03EE 8D 02              2391 	mov	ar2,r5
                           2392 ;	../../shared/src/cmd_if.c:130: }
   03F0 02 04 BA           2393 	ljmp	00162$
   03F3                    2394 00157$:
                           2395 ;	../../shared/src/cmd_if.c:132: else if(cmd_type == CMD_TYPE_ANA2) { //ana_ctrl
   03F3 A8 18              2396 	mov	r0,_bp
   03F5 08                 2397 	inc	r0
   03F6 B6 82 66           2398 	cjne	@r0,#0x82,00154$
                           2399 ;	../../shared/src/cmd_if.c:133: switch(cmd_code) {
   03F9 74 07              2400 	mov	a,#0x07
   03FB B5 04 00           2401 	cjne	a,ar4,00207$
   03FE                    2402 00207$:
   03FE 50 03              2403 	jnc	00208$
   0400 02 04 BA           2404 	ljmp	00162$
   0403                    2405 00208$:
   0403 EC                 2406 	mov	a,r4
   0404 2C                 2407 	add	a,r4
   0405 2C                 2408 	add	a,r4
   0406 90 04 0A           2409 	mov	dptr,#00209$
   0409 73                 2410 	jmp	@a+dptr
   040A                    2411 00209$:
   040A 02 04 22           2412 	ljmp	00130$
   040D 02 04 22           2413 	ljmp	00129$
   0410 02 04 32           2414 	ljmp	00132$
   0413 02 04 32           2415 	ljmp	00131$
   0416 02 04 41           2416 	ljmp	00134$
   0419 02 04 41           2417 	ljmp	00133$
   041C 02 04 50           2418 	ljmp	00136$
   041F 02 04 50           2419 	ljmp	00135$
                           2420 ;	../../shared/src/cmd_if.c:134: case CMD_RX_CDR_BW_GET:
   0422                    2421 00129$:
                           2422 ;	../../shared/src/cmd_if.c:135: case CMD_RX_CDR_BW_SET:	 	result = cmd_rx_cdr_bw(gen, cmd_code); break;
   0422                    2423 00130$:
   0422 C0 04              2424 	push	ar4
   0424 8B 82              2425 	mov	dpl,r3
   0426 12 0A F3           2426 	lcall	_cmd_rx_cdr_bw
   0429 AD 82              2427 	mov	r5,dpl
   042B 15 81              2428 	dec	sp
   042D 8D 02              2429 	mov	ar2,r5
   042F 02 04 BA           2430 	ljmp	00162$
                           2431 ;	../../shared/src/cmd_if.c:136: case CMD_RX_FFE_GET: 
   0432                    2432 00131$:
                           2433 ;	../../shared/src/cmd_if.c:137: case CMD_RX_FFE_SET:  		result = cmd_rx_ffe(gen, cmd_code); break;
   0432                    2434 00132$:
   0432 C0 04              2435 	push	ar4
   0434 8B 82              2436 	mov	dpl,r3
   0436 12 07 92           2437 	lcall	_cmd_rx_ffe
   0439 AD 82              2438 	mov	r5,dpl
   043B 15 81              2439 	dec	sp
   043D 8D 02              2440 	mov	ar2,r5
                           2441 ;	../../shared/src/cmd_if.c:138: case CMD_RX_DFE_RES_GET:
   043F 80 79              2442 	sjmp	00162$
   0441                    2443 00133$:
                           2444 ;	../../shared/src/cmd_if.c:139: case CMD_RX_DFE_RES_SET:  	result = cmd_dfe_res(gen, cmd_code); break;
   0441                    2445 00134$:
   0441 C0 04              2446 	push	ar4
   0443 8B 82              2447 	mov	dpl,r3
   0445 12 06 74           2448 	lcall	_cmd_dfe_res
   0448 AD 82              2449 	mov	r5,dpl
   044A 15 81              2450 	dec	sp
   044C 8D 02              2451 	mov	ar2,r5
                           2452 ;	../../shared/src/cmd_if.c:140: case CMD_SQ_THRS_RATIO_GET:
   044E 80 6A              2453 	sjmp	00162$
   0450                    2454 00135$:
                           2455 ;	../../shared/src/cmd_if.c:141: case CMD_SQ_THRS_RATIO_SET:  result = cmd_sq_thrs_ratio(gen, cmd_code); break;
   0450                    2456 00136$:
   0450 C0 04              2457 	push	ar4
   0452 8B 82              2458 	mov	dpl,r3
   0454 12 08 84           2459 	lcall	_cmd_sq_thrs_ratio
   0457 AB 82              2460 	mov	r3,dpl
   0459 15 81              2461 	dec	sp
   045B 8B 02              2462 	mov	ar2,r3
                           2463 ;	../../shared/src/cmd_if.c:142: }
   045D 80 5B              2464 	sjmp	00162$
   045F                    2465 00154$:
                           2466 ;	../../shared/src/cmd_if.c:144: else if(cmd_type == CMD_TYPE_CTRL) { 
   045F A8 18              2467 	mov	r0,_bp
   0461 08                 2468 	inc	r0
   0462 B6 83 13           2469 	cjne	@r0,#0x83,00151$
                           2470 ;	../../shared/src/cmd_if.c:145: switch(cmd_code) {
   0465 BC 00 02           2471 	cjne	r4,#0x00,00212$
   0468 80 03              2472 	sjmp	00139$
   046A                    2473 00212$:
   046A BC 01 4D           2474 	cjne	r4,#0x01,00162$
                           2475 ;	../../shared/src/cmd_if.c:147: case CMD_BYPASS_CTLE_TRAIN_SET:	result = cmd_bypass_ctle_train(cmd_code); break;
   046D                    2476 00139$:
   046D 8C 82              2477 	mov	dpl,r4
   046F 12 0A CD           2478 	lcall	_cmd_bypass_ctle_train
   0472 AB 82              2479 	mov	r3,dpl
   0474 8B 02              2480 	mov	ar2,r3
                           2481 ;	../../shared/src/cmd_if.c:148: }
   0476 80 42              2482 	sjmp	00162$
   0478                    2483 00151$:
                           2484 ;	../../shared/src/cmd_if.c:150: else if(cmd_type == CMD_TYPE_CAL) { //cal
   0478 A8 18              2485 	mov	r0,_bp
   047A 08                 2486 	inc	r0
   047B B6 84 3C           2487 	cjne	@r0,#0x84,00162$
                           2488 ;	../../shared/src/cmd_if.c:151: switch(cmd_code) {
   047E BC 00 02           2489 	cjne	r4,#0x00,00217$
   0481 80 05              2490 	sjmp	00141$
   0483                    2491 00217$:
                           2492 ;	../../shared/src/cmd_if.c:152: case CMD_RX_IMP_CAL: 
   0483 BC 01 34           2493 	cjne	r4,#0x01,00162$
   0486 80 1A              2494 	sjmp	00144$
   0488                    2495 00141$:
                           2496 ;	../../shared/src/cmd_if.c:153: if((lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x03)==mcuid) result = cmd_rx_imp_cal(); break;
   0488 90 60 20           2497 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   048B E0                 2498 	movx	a,@dptr
   048C FB                 2499 	mov	r3,a
   048D 53 03 03           2500 	anl	ar3,#0x03
   0490 90 22 00           2501 	mov	dptr,#_MCU_CONTROL_LANE
   0493 E0                 2502 	movx	a,@dptr
   0494 FC                 2503 	mov	r4,a
   0495 EB                 2504 	mov	a,r3
   0496 B5 04 21           2505 	cjne	a,ar4,00162$
   0499 12 0F 8C           2506 	lcall	_cmd_rx_imp_cal
   049C AB 82              2507 	mov	r3,dpl
   049E 8B 02              2508 	mov	ar2,r3
                           2509 ;	../../shared/src/cmd_if.c:154: case CMD_TX_IMP_CAL: 
   04A0 80 18              2510 	sjmp	00162$
   04A2                    2511 00144$:
                           2512 ;	../../shared/src/cmd_if.c:155: if((lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x03)==mcuid) result = cmd_tx_imp_cal(); break;
   04A2 90 60 20           2513 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   04A5 E0                 2514 	movx	a,@dptr
   04A6 FB                 2515 	mov	r3,a
   04A7 53 03 03           2516 	anl	ar3,#0x03
   04AA 90 22 00           2517 	mov	dptr,#_MCU_CONTROL_LANE
   04AD E0                 2518 	movx	a,@dptr
   04AE FC                 2519 	mov	r4,a
   04AF EB                 2520 	mov	a,r3
   04B0 B5 04 07           2521 	cjne	a,ar4,00162$
   04B3 12 0F BD           2522 	lcall	_cmd_tx_imp_cal
   04B6 AB 82              2523 	mov	r3,dpl
   04B8 8B 02              2524 	mov	ar2,r3
                           2525 ;	../../shared/src/cmd_if.c:159: finish0:
   04BA                    2526 00162$:
                           2527 ;	../../shared/src/cmd_if.c:160: lnx_PHY_LOCAL_STATUS_LANE_7_0 = result;
   04BA 90 60 2E           2528 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS2_LANE + 0x0002)
   04BD EA                 2529 	mov	a,r2
   04BE F0                 2530 	movx	@dptr,a
                           2531 ;	../../shared/src/cmd_if.c:161: lnx_PHY_MCU_LOCAL_ACK_LANE = 1;
   04BF 90 60 33           2532 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   04C2 E0                 2533 	movx	a,@dptr
   04C3 44 01              2534 	orl	a,#0x01
   04C5 F0                 2535 	movx	@dptr,a
                           2536 ;	../../shared/src/cmd_if.c:163: reg_MCU_DEBUG0_LANE_7_0 = 15;
   04C6 90 22 B4           2537 	mov	dptr,#_MCU_DEBUG0_LANE
   04C9 74 0F              2538 	mov	a,#0x0F
   04CB F0                 2539 	movx	@dptr,a
                           2540 ;	../../shared/src/cmd_if.c:164: reg_MCU_DEBUG1_LANE_7_0 = lnx_PHY_LOCAL_STATUS_LANE_7_0;
   04CC 90 60 2E           2541 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS2_LANE + 0x0002)
   04CF E0                 2542 	movx	a,@dptr
   04D0 90 22 B5           2543 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0001)
   04D3 F0                 2544 	movx	@dptr,a
                           2545 ;	../../shared/src/cmd_if.c:165: MCU_DEBUG_LANE.VAL = PHY_LOCAL_VALUE_LANE.VAL; 
   04D4 90 60 24           2546 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   04D7 E0                 2547 	movx	a,@dptr
   04D8 FA                 2548 	mov	r2,a
   04D9 A3                 2549 	inc	dptr
   04DA E0                 2550 	movx	a,@dptr
   04DB FB                 2551 	mov	r3,a
   04DC A3                 2552 	inc	dptr
   04DD E0                 2553 	movx	a,@dptr
   04DE FC                 2554 	mov	r4,a
   04DF A3                 2555 	inc	dptr
   04E0 E0                 2556 	movx	a,@dptr
   04E1 FD                 2557 	mov	r5,a
   04E2 90 22 C4           2558 	mov	dptr,#_MCU_DEBUG_LANE
   04E5 EA                 2559 	mov	a,r2
   04E6 F0                 2560 	movx	@dptr,a
   04E7 A3                 2561 	inc	dptr
   04E8 EB                 2562 	mov	a,r3
   04E9 F0                 2563 	movx	@dptr,a
   04EA A3                 2564 	inc	dptr
   04EB EC                 2565 	mov	a,r4
   04EC F0                 2566 	movx	@dptr,a
   04ED A3                 2567 	inc	dptr
   04EE ED                 2568 	mov	a,r5
   04EF F0                 2569 	movx	@dptr,a
   04F0                    2570 00163$:
   04F0 85 18 81           2571 	mov	sp,_bp
   04F3 D0 18              2572 	pop	_bp
   04F5 22                 2573 	ret
                           2574 ;------------------------------------------------------------
                           2575 ;Allocation info for local variables in function 'cmd_tx_ffe'
                           2576 ;------------------------------------------------------------
                           2577 ;cmd_code                  Allocated to stack - offset -3
                           2578 ;gen                       Allocated to registers r2 
                           2579 ;------------------------------------------------------------
                           2580 ;	../../shared/src/cmd_if.c:168: uint8_t cmd_tx_ffe(uint8_t gen, uint8_t cmd_code) CMD_BANK {
                           2581 ;	-----------------------------------------
                           2582 ;	 function cmd_tx_ffe
                           2583 ;	-----------------------------------------
   04F6                    2584 _cmd_tx_ffe:
   04F6 C0 18              2585 	push	_bp
   04F8 85 81 18           2586 	mov	_bp,sp
   04FB AA 82              2587 	mov	r2,dpl
                           2588 ;	../../shared/src/cmd_if.c:170: if(gen==0x80) {//current
   04FD BA 80 02           2589 	cjne	r2,#0x80,00130$
   0500 80 03              2590 	sjmp	00131$
   0502                    2591 00130$:
   0502 02 05 FB           2592 	ljmp	00118$
   0505                    2593 00131$:
                           2594 ;	../../shared/src/cmd_if.c:172: if(cmd_code==CMD_TX_FFE_GET) {
   0505 E5 18              2595 	mov	a,_bp
   0507 24 FD              2596 	add	a,#0xfd
   0509 F8                 2597 	mov	r0,a
   050A B6 01 67           2598 	cjne	@r0,#0x01,00112$
                           2599 ;	../../shared/src/cmd_if.c:173: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = LINK_TRAIN_MODE0.BT.B0; //[7:4]em_po
   050D 90 26 50           2600 	mov	dptr,#_LINK_TRAIN_MODE0
   0510 E0                 2601 	movx	a,@dptr
   0511 90 60 24           2602 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0514 F0                 2603 	movx	@dptr,a
                           2604 ;	../../shared/src/cmd_if.c:174: lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = LINK_TRAIN_MODE0.BT.B1; //[7:4]em_peak [3:0]em_pre
   0515 90 26 51           2605 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   0518 E0                 2606 	movx	a,@dptr
   0519 FB                 2607 	mov	r3,a
   051A 90 60 25           2608 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0001)
   051D F0                 2609 	movx	@dptr,a
                           2610 ;	../../shared/src/cmd_if.c:176: if(reg_ANA_TX_EM_PEAK_EN_LANE) lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 |= 0x08;
   051E 90 26 52           2611 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0002)
   0521 E0                 2612 	movx	a,@dptr
   0522 30 E7 0D           2613 	jnb	acc.7,00102$
   0525 90 60 24           2614 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0528 E0                 2615 	movx	a,@dptr
   0529 FB                 2616 	mov	r3,a
   052A 43 03 08           2617 	orl	ar3,#0x08
   052D 90 60 24           2618 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0530 EB                 2619 	mov	a,r3
   0531 F0                 2620 	movx	@dptr,a
   0532                    2621 00102$:
                           2622 ;	../../shared/src/cmd_if.c:177: if(reg_ANA_TX_EM_PRE_EN_LANE)  lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 |= 0x04; 
   0532 90 26 52           2623 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0002)
   0535 E0                 2624 	movx	a,@dptr
   0536 30 E6 0D           2625 	jnb	acc.6,00104$
   0539 90 60 24           2626 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   053C E0                 2627 	movx	a,@dptr
   053D FB                 2628 	mov	r3,a
   053E 43 03 04           2629 	orl	ar3,#0x04
   0541 90 60 24           2630 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0544 EB                 2631 	mov	a,r3
   0545 F0                 2632 	movx	@dptr,a
   0546                    2633 00104$:
                           2634 ;	../../shared/src/cmd_if.c:178: if(reg_ANA_TX_EM_PO_EN_LANE)   lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 |= 0x02;
   0546 90 26 52           2635 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0002)
   0549 E0                 2636 	movx	a,@dptr
   054A 30 E5 0D           2637 	jnb	acc.5,00106$
   054D 90 60 24           2638 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0550 E0                 2639 	movx	a,@dptr
   0551 FB                 2640 	mov	r3,a
   0552 43 03 02           2641 	orl	ar3,#0x02
   0555 90 60 24           2642 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0558 EB                 2643 	mov	a,r3
   0559 F0                 2644 	movx	@dptr,a
   055A                    2645 00106$:
                           2646 ;	../../shared/src/cmd_if.c:179: if(txffe_force_en)    		   lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 |= 0x01;
   055A 90 67 A4           2647 	mov	dptr,#_txffe_force_en
   055D E0                 2648 	movx	a,@dptr
   055E FB                 2649 	mov	r3,a
   055F 70 03              2650 	jnz	00137$
   0561 02 06 6E           2651 	ljmp	00119$
   0564                    2652 00137$:
   0564 90 60 24           2653 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0567 E0                 2654 	movx	a,@dptr
   0568 FB                 2655 	mov	r3,a
   0569 43 03 01           2656 	orl	ar3,#0x01
   056C 90 60 24           2657 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   056F EB                 2658 	mov	a,r3
   0570 F0                 2659 	movx	@dptr,a
   0571 02 06 6E           2660 	ljmp	00119$
   0574                    2661 00112$:
                           2662 ;	../../shared/src/cmd_if.c:182: reg_TX_EM_CTRL_REG_EN_LANE = 1;
   0574 90 26 53           2663 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0003)
   0577 E0                 2664 	movx	a,@dptr
   0578 44 80              2665 	orl	a,#0x80
   057A F0                 2666 	movx	@dptr,a
                           2667 ;	../../shared/src/cmd_if.c:183: LINK_TRAIN_MODE0.BT.B0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0; //[7:4]em_po
   057B 90 60 20           2668 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   057E E0                 2669 	movx	a,@dptr
   057F 90 26 50           2670 	mov	dptr,#_LINK_TRAIN_MODE0
   0582 F0                 2671 	movx	@dptr,a
                           2672 ;	../../shared/src/cmd_if.c:184: LINK_TRAIN_MODE0.BT.B1 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1; //[7:4]em_peak [3:0]em_pre
   0583 90 60 21           2673 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0001)
   0586 E0                 2674 	movx	a,@dptr
   0587 90 26 51           2675 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   058A F0                 2676 	movx	@dptr,a
                           2677 ;	../../shared/src/cmd_if.c:185: if (cmx_TX_TRAIN_MODE == 1)
   058B 90 E6 28           2678 	mov	dptr,#_TRAIN_IF_CONFIG
   058E E0                 2679 	movx	a,@dptr
   058F 03                 2680 	rr	a
   0590 54 01              2681 	anl	a,#0x01
   0592 FB                 2682 	mov	r3,a
   0593 BB 01 52           2683 	cjne	r3,#0x01,00110$
                           2684 ;	../../shared/src/cmd_if.c:187: reg_ANA_TX_EM_PEAK_EN_LANE = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x08)==0x08;
   0596 90 60 20           2685 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0599 E0                 2686 	movx	a,@dptr
   059A FB                 2687 	mov	r3,a
   059B 53 03 08           2688 	anl	ar3,#0x08
   059E BB 08 03           2689 	cjne	r3,#0x08,00140$
   05A1 D3                 2690 	setb	c
   05A2 80 01              2691 	sjmp	00141$
   05A4                    2692 00140$:
   05A4 C3                 2693 	clr	c
   05A5                    2694 00141$:
   05A5 92 28              2695 	mov  b0,c
   05A7 E4                 2696 	clr	a
   05A8 33                 2697 	rlc	a
   05A9 90 26 52           2698 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0002)
   05AC 13                 2699 	rrc	a
   05AD E0                 2700 	movx	a,@dptr
   05AE 92 E7              2701 	mov	acc.7,c
   05B0 F0                 2702 	movx	@dptr,a
                           2703 ;	../../shared/src/cmd_if.c:188: reg_ANA_TX_EM_PRE_EN_LANE = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x04)==0x04;
   05B1 90 60 20           2704 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   05B4 E0                 2705 	movx	a,@dptr
   05B5 FB                 2706 	mov	r3,a
   05B6 53 03 04           2707 	anl	ar3,#0x04
   05B9 BB 04 03           2708 	cjne	r3,#0x04,00142$
   05BC D3                 2709 	setb	c
   05BD 80 01              2710 	sjmp	00143$
   05BF                    2711 00142$:
   05BF C3                 2712 	clr	c
   05C0                    2713 00143$:
   05C0 92 28              2714 	mov  b0,c
   05C2 E4                 2715 	clr	a
   05C3 33                 2716 	rlc	a
   05C4 90 26 52           2717 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0002)
   05C7 13                 2718 	rrc	a
   05C8 E0                 2719 	movx	a,@dptr
   05C9 92 E6              2720 	mov	acc.6,c
   05CB F0                 2721 	movx	@dptr,a
                           2722 ;	../../shared/src/cmd_if.c:189: reg_ANA_TX_EM_PO_EN_LANE = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x02)==0x02;
   05CC 90 60 20           2723 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   05CF E0                 2724 	movx	a,@dptr
   05D0 FB                 2725 	mov	r3,a
   05D1 53 03 02           2726 	anl	ar3,#0x02
   05D4 BB 02 03           2727 	cjne	r3,#0x02,00144$
   05D7 D3                 2728 	setb	c
   05D8 80 01              2729 	sjmp	00145$
   05DA                    2730 00144$:
   05DA C3                 2731 	clr	c
   05DB                    2732 00145$:
   05DB 92 28              2733 	mov  b0,c
   05DD E4                 2734 	clr	a
   05DE 33                 2735 	rlc	a
   05DF FB                 2736 	mov	r3,a
   05E0 90 26 52           2737 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0002)
   05E3 13                 2738 	rrc	a
   05E4 E0                 2739 	movx	a,@dptr
   05E5 92 E5              2740 	mov	acc.5,c
   05E7 F0                 2741 	movx	@dptr,a
   05E8                    2742 00110$:
                           2743 ;	../../shared/src/cmd_if.c:191: txffe_force_en = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x01)==0x01;
   05E8 90 60 20           2744 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   05EB E0                 2745 	movx	a,@dptr
   05EC FB                 2746 	mov	r3,a
   05ED 53 03 01           2747 	anl	ar3,#0x01
   05F0 90 67 A4           2748 	mov	dptr,#_txffe_force_en
   05F3 E4                 2749 	clr	a
   05F4 BB 01 01           2750 	cjne	r3,#0x01,00146$
   05F7 04                 2751 	inc	a
   05F8                    2752 00146$:
   05F8 F0                 2753 	movx	@dptr,a
   05F9 80 73              2754 	sjmp	00119$
   05FB                    2755 00118$:
                           2756 ;	../../shared/src/cmd_if.c:195: if(cmd_code==CMD_TX_FFE_GET) {
   05FB E5 18              2757 	mov	a,_bp
   05FD 24 FD              2758 	add	a,#0xfd
   05FF F8                 2759 	mov	r0,a
   0600 B6 01 26           2760 	cjne	@r0,#0x01,00115$
                           2761 ;	../../shared/src/cmd_if.c:196: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = txffe_save[gen][0]; //[7:4]em_po
   0603 EA                 2762 	mov	a,r2
   0604 2A                 2763 	add	a,r2
   0605 FB                 2764 	mov	r3,a
   0606 24 D0              2765 	add	a,#_txffe_save
   0608 F5 82              2766 	mov	dpl,a
   060A E4                 2767 	clr	a
   060B 34 60              2768 	addc	a,#(_txffe_save >> 8)
   060D F5 83              2769 	mov	dph,a
   060F E0                 2770 	movx	a,@dptr
   0610 90 60 24           2771 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0613 F0                 2772 	movx	@dptr,a
                           2773 ;	../../shared/src/cmd_if.c:197: lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = txffe_save[gen][1];  //[7:4]em_peak [3:0]em_pre
   0614 EB                 2774 	mov	a,r3
   0615 24 D0              2775 	add	a,#_txffe_save
   0617 FB                 2776 	mov	r3,a
   0618 E4                 2777 	clr	a
   0619 34 60              2778 	addc	a,#(_txffe_save >> 8)
   061B FC                 2779 	mov	r4,a
   061C 8B 82              2780 	mov	dpl,r3
   061E 8C 83              2781 	mov	dph,r4
   0620 A3                 2782 	inc	dptr
   0621 E0                 2783 	movx	a,@dptr
   0622 FB                 2784 	mov	r3,a
   0623 90 60 25           2785 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0001)
   0626 F0                 2786 	movx	@dptr,a
   0627 80 45              2787 	sjmp	00119$
   0629                    2788 00115$:
                           2789 ;	../../shared/src/cmd_if.c:200: txffe_save[gen][0] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0; //[7:4]em_po
   0629 EA                 2790 	mov	a,r2
   062A 2A                 2791 	add	a,r2
   062B FB                 2792 	mov	r3,a
   062C 24 D0              2793 	add	a,#_txffe_save
   062E FC                 2794 	mov	r4,a
   062F E4                 2795 	clr	a
   0630 34 60              2796 	addc	a,#(_txffe_save >> 8)
   0632 FD                 2797 	mov	r5,a
   0633 90 60 20           2798 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0636 E0                 2799 	movx	a,@dptr
   0637 FE                 2800 	mov	r6,a
   0638 8C 82              2801 	mov	dpl,r4
   063A 8D 83              2802 	mov	dph,r5
   063C F0                 2803 	movx	@dptr,a
                           2804 ;	../../shared/src/cmd_if.c:201: txffe_save[gen][1] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1; //[7:4]em_peak [3:0]em_pre
   063D EB                 2805 	mov	a,r3
   063E 24 D0              2806 	add	a,#_txffe_save
   0640 FB                 2807 	mov	r3,a
   0641 E4                 2808 	clr	a
   0642 34 60              2809 	addc	a,#(_txffe_save >> 8)
   0644 FC                 2810 	mov	r4,a
   0645 0B                 2811 	inc	r3
   0646 BB 00 01           2812 	cjne	r3,#0x00,00150$
   0649 0C                 2813 	inc	r4
   064A                    2814 00150$:
   064A 90 60 21           2815 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0001)
   064D E0                 2816 	movx	a,@dptr
   064E FD                 2817 	mov	r5,a
   064F 8B 82              2818 	mov	dpl,r3
   0651 8C 83              2819 	mov	dph,r4
   0653 F0                 2820 	movx	@dptr,a
                           2821 ;	../../shared/src/cmd_if.c:202: TRAIN_CONTROL_9.BT.B3 |= (0x01<<gen); //changed
   0654 90 60 CF           2822 	mov	dptr,#(_TRAIN_CONTROL_9 + 0x0003)
   0657 E0                 2823 	movx	a,@dptr
   0658 FB                 2824 	mov	r3,a
   0659 8A F0              2825 	mov	b,r2
   065B 05 F0              2826 	inc	b
   065D 74 01              2827 	mov	a,#0x01
   065F 80 02              2828 	sjmp	00153$
   0661                    2829 00151$:
   0661 25 E0              2830 	add	a,acc
   0663                    2831 00153$:
   0663 D5 F0 FB           2832 	djnz	b,00151$
   0666 FA                 2833 	mov	r2,a
   0667 42 03              2834 	orl	ar3,a
   0669 90 60 CF           2835 	mov	dptr,#(_TRAIN_CONTROL_9 + 0x0003)
   066C EB                 2836 	mov	a,r3
   066D F0                 2837 	movx	@dptr,a
   066E                    2838 00119$:
                           2839 ;	../../shared/src/cmd_if.c:205: return 0;
   066E 75 82 00           2840 	mov	dpl,#0x00
   0671 D0 18              2841 	pop	_bp
   0673 22                 2842 	ret
                           2843 ;------------------------------------------------------------
                           2844 ;Allocation info for local variables in function 'cmd_dfe_res'
                           2845 ;------------------------------------------------------------
                           2846 ;cmd_code                  Allocated to stack - offset -3
                           2847 ;gen                       Allocated to registers r2 
                           2848 ;------------------------------------------------------------
                           2849 ;	../../shared/src/cmd_if.c:208: uint8_t cmd_dfe_res(uint8_t gen, uint8_t cmd_code) CMD_BANK {
                           2850 ;	-----------------------------------------
                           2851 ;	 function cmd_dfe_res
                           2852 ;	-----------------------------------------
   0674                    2853 _cmd_dfe_res:
   0674 C0 18              2854 	push	_bp
   0676 85 81 18           2855 	mov	_bp,sp
   0679 AA 82              2856 	mov	r2,dpl
                           2857 ;	../../shared/src/cmd_if.c:210: if(gen==0x80) {//current
   067B BA 80 02           2858 	cjne	r2,#0x80,00115$
   067E 80 03              2859 	sjmp	00116$
   0680                    2860 00115$:
   0680 02 06 FE           2861 	ljmp	00108$
   0683                    2862 00116$:
                           2863 ;	../../shared/src/cmd_if.c:212: if(cmd_code==CMD_RX_DFE_RES_GET) {
   0683 E5 18              2864 	mov	a,_bp
   0685 24 FD              2865 	add	a,#0xfd
   0687 F8                 2866 	mov	r0,a
   0688 B6 05 28           2867 	cjne	@r0,#0x05,00102$
                           2868 ;	../../shared/src/cmd_if.c:213: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = UPHY14_TRX_ANAREG_BOT_20.BT.B0; //dfe_res_f0/f1/f234
   068B 90 00 50           2869 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   068E E0                 2870 	movx	a,@dptr
                           2871 ;	../../shared/src/cmd_if.c:214: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 |= (UPHY14_TRX_ANAREG_BOT_21.BT.B0 & 0xe0); //FLOATING/F8TO15/F567
   068F 90 60 24           2872 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0692 F0                 2873 	movx	@dptr,a
   0693 E0                 2874 	movx	a,@dptr
   0694 FB                 2875 	mov	r3,a
   0695 90 00 54           2876 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   0698 E0                 2877 	movx	a,@dptr
   0699 FC                 2878 	mov	r4,a
   069A 74 E0              2879 	mov	a,#0xE0
   069C 5C                 2880 	anl	a,r4
   069D 42 03              2881 	orl	ar3,a
   069F 90 60 24           2882 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   06A2 EB                 2883 	mov	a,r3
   06A3 F0                 2884 	movx	@dptr,a
                           2885 ;	../../shared/src/cmd_if.c:215: lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = reg_INT_DFE_EN_LANE;
   06A4 90 24 11           2886 	mov	dptr,#(_RX_EQ_CLK_CTRL + 0x0001)
   06A7 E0                 2887 	movx	a,@dptr
   06A8 03                 2888 	rr	a
   06A9 54 01              2889 	anl	a,#0x01
   06AB FB                 2890 	mov	r3,a
   06AC 90 60 25           2891 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0001)
   06AF F0                 2892 	movx	@dptr,a
   06B0 02 07 8C           2893 	ljmp	00109$
   06B3                    2894 00102$:
                           2895 ;	../../shared/src/cmd_if.c:218: UPHY14_TRX_ANAREG_BOT_20.BT.B0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0; //dfe_res_f0/f1/f234
   06B3 90 60 20           2896 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   06B6 E0                 2897 	movx	a,@dptr
   06B7 90 00 50           2898 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   06BA F0                 2899 	movx	@dptr,a
                           2900 ;	../../shared/src/cmd_if.c:219: UPHY14_TRX_ANAREG_BOT_21.BT.B0 &= 0x1f;
   06BB 90 00 54           2901 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   06BE E0                 2902 	movx	a,@dptr
   06BF FB                 2903 	mov	r3,a
   06C0 53 03 1F           2904 	anl	ar3,#0x1F
                           2905 ;	../../shared/src/cmd_if.c:220: UPHY14_TRX_ANAREG_BOT_21.BT.B0 |= (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 & 0xe0); //FLOATING/F8TO15/F567
   06C3 90 00 54           2906 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   06C6 EB                 2907 	mov	a,r3
   06C7 F0                 2908 	movx	@dptr,a
   06C8 E0                 2909 	movx	a,@dptr
   06C9 FB                 2910 	mov	r3,a
   06CA 90 60 20           2911 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   06CD E0                 2912 	movx	a,@dptr
   06CE FC                 2913 	mov	r4,a
   06CF 74 E0              2914 	mov	a,#0xE0
   06D1 5C                 2915 	anl	a,r4
   06D2 42 03              2916 	orl	ar3,a
   06D4 90 00 54           2917 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   06D7 EB                 2918 	mov	a,r3
   06D8 F0                 2919 	movx	@dptr,a
                           2920 ;	../../shared/src/cmd_if.c:221: reg_DFE_EN_LANE = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1 & 0x01;	dfe_dis = ~reg_DFE_EN_LANE;  dfe_dis = reg_DFE_DIS_LANE;  
   06D9 90 60 21           2921 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0001)
   06DC E0                 2922 	movx	a,@dptr
   06DD 54 01              2923 	anl	a,#0x01
   06DF 90 24 10           2924 	mov	dptr,#_RX_EQ_CLK_CTRL
   06E2 13                 2925 	rrc	a
   06E3 E0                 2926 	movx	a,@dptr
   06E4 92 E4              2927 	mov	acc.4,c
   06E6 F0                 2928 	movx	@dptr,a
   06E7 90 24 10           2929 	mov	dptr,#_RX_EQ_CLK_CTRL
   06EA E0                 2930 	movx	a,@dptr
   06EB C4                 2931 	swap	a
   06EC 54 01              2932 	anl	a,#0x01
   06EE 90 24 0C           2933 	mov	dptr,#_DFE_CTRL_REG3
   06F1 E0                 2934 	movx	a,@dptr
   06F2 23                 2935 	rl	a
   06F3 23                 2936 	rl	a
   06F4 54 01              2937 	anl	a,#0x01
   06F6 FB                 2938 	mov	r3,a
   06F7 90 66 F7           2939 	mov	dptr,#_dfe_dis
   06FA F0                 2940 	movx	@dptr,a
   06FB 02 07 8C           2941 	ljmp	00109$
   06FE                    2942 00108$:
                           2943 ;	../../shared/src/cmd_if.c:225: if(cmd_code==CMD_RX_DFE_RES_GET) {
   06FE E5 18              2944 	mov	a,_bp
   0700 24 FD              2945 	add	a,#0xfd
   0702 F8                 2946 	mov	r0,a
   0703 B6 05 36           2947 	cjne	@r0,#0x05,00105$
                           2948 ;	../../shared/src/cmd_if.c:226: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = rc_save[gen][0];//dfe_res
   0706 EA                 2949 	mov	a,r2
   0707 2A                 2950 	add	a,r2
   0708 25 E0              2951 	add	a,acc
   070A 24 B4              2952 	add	a,#_rc_save
   070C F5 82              2953 	mov	dpl,a
   070E E4                 2954 	clr	a
   070F 34 60              2955 	addc	a,#(_rc_save >> 8)
   0711 F5 83              2956 	mov	dph,a
   0713 E0                 2957 	movx	a,@dptr
   0714 90 60 24           2958 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0717 F0                 2959 	movx	@dptr,a
                           2960 ;	../../shared/src/cmd_if.c:227: lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = speedtable[gen][spdoft_reg_dfe_dis_lane]==0; 
   0718 EA                 2961 	mov	a,r2
   0719 75 F0 50           2962 	mov	b,#0x50
   071C A4                 2963 	mul	ab
   071D 24 04              2964 	add	a,#_speedtable
   071F FB                 2965 	mov	r3,a
   0720 74 63              2966 	mov	a,#(_speedtable >> 8)
   0722 35 F0              2967 	addc	a,b
   0724 FC                 2968 	mov	r4,a
   0725 74 41              2969 	mov	a,#0x41
   0727 2B                 2970 	add	a,r3
   0728 F5 82              2971 	mov	dpl,a
   072A E4                 2972 	clr	a
   072B 3C                 2973 	addc	a,r4
   072C F5 83              2974 	mov	dph,a
   072E E0                 2975 	movx	a,@dptr
   072F FB                 2976 	mov	r3,a
   0730 E4                 2977 	clr	a
   0731 BB 00 01           2978 	cjne	r3,#0x00,00121$
   0734 04                 2979 	inc	a
   0735                    2980 00121$:
   0735 FB                 2981 	mov	r3,a
   0736 90 60 25           2982 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0001)
   0739 F0                 2983 	movx	@dptr,a
   073A 80 50              2984 	sjmp	00109$
   073C                    2985 00105$:
                           2986 ;	../../shared/src/cmd_if.c:230: rc_save[gen][0] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0; 
   073C EA                 2987 	mov	a,r2
   073D 2A                 2988 	add	a,r2
   073E 25 E0              2989 	add	a,acc
   0740 24 B4              2990 	add	a,#_rc_save
   0742 FB                 2991 	mov	r3,a
   0743 E4                 2992 	clr	a
   0744 34 60              2993 	addc	a,#(_rc_save >> 8)
   0746 FC                 2994 	mov	r4,a
   0747 90 60 20           2995 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   074A E0                 2996 	movx	a,@dptr
   074B 8B 82              2997 	mov	dpl,r3
   074D 8C 83              2998 	mov	dph,r4
   074F F0                 2999 	movx	@dptr,a
                           3000 ;	../../shared/src/cmd_if.c:231: speedtable[gen][spdoft_reg_dfe_dis_lane] = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1&0x1)==0; 
   0750 EA                 3001 	mov	a,r2
   0751 75 F0 50           3002 	mov	b,#0x50
   0754 A4                 3003 	mul	ab
   0755 24 04              3004 	add	a,#_speedtable
   0757 FB                 3005 	mov	r3,a
   0758 74 63              3006 	mov	a,#(_speedtable >> 8)
   075A 35 F0              3007 	addc	a,b
   075C FC                 3008 	mov	r4,a
   075D 74 41              3009 	mov	a,#0x41
   075F 2B                 3010 	add	a,r3
   0760 FB                 3011 	mov	r3,a
   0761 E4                 3012 	clr	a
   0762 3C                 3013 	addc	a,r4
   0763 FC                 3014 	mov	r4,a
   0764 90 60 21           3015 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0001)
   0767 E0                 3016 	movx	a,@dptr
   0768 FD                 3017 	mov	r5,a
   0769 53 05 01           3018 	anl	ar5,#0x01
   076C E4                 3019 	clr	a
   076D BD 00 01           3020 	cjne	r5,#0x00,00123$
   0770 04                 3021 	inc	a
   0771                    3022 00123$:
   0771 FD                 3023 	mov	r5,a
   0772 8B 82              3024 	mov	dpl,r3
   0774 8C 83              3025 	mov	dph,r4
   0776 F0                 3026 	movx	@dptr,a
                           3027 ;	../../shared/src/cmd_if.c:232: dfe_res_save_en |= 0x01<<gen;
   0777 8A F0              3028 	mov	b,r2
   0779 05 F0              3029 	inc	b
   077B 74 01              3030 	mov	a,#0x01
   077D 80 02              3031 	sjmp	00127$
   077F                    3032 00125$:
   077F 25 E0              3033 	add	a,acc
   0781                    3034 00127$:
   0781 D5 F0 FB           3035 	djnz	b,00125$
   0784 FA                 3036 	mov	r2,a
   0785 90 67 A8           3037 	mov	dptr,#_dfe_res_save_en
   0788 E0                 3038 	movx	a,@dptr
   0789 FB                 3039 	mov	r3,a
   078A 4A                 3040 	orl	a,r2
   078B F0                 3041 	movx	@dptr,a
   078C                    3042 00109$:
                           3043 ;	../../shared/src/cmd_if.c:235: return 0;
   078C 75 82 00           3044 	mov	dpl,#0x00
   078F D0 18              3045 	pop	_bp
   0791 22                 3046 	ret
                           3047 ;------------------------------------------------------------
                           3048 ;Allocation info for local variables in function 'cmd_rx_ffe'
                           3049 ;------------------------------------------------------------
                           3050 ;cmd_code                  Allocated to stack - offset -3
                           3051 ;gen                       Allocated to registers r2 
                           3052 ;------------------------------------------------------------
                           3053 ;	../../shared/src/cmd_if.c:238: uint8_t cmd_rx_ffe(uint8_t gen, uint8_t cmd_code) CMD_BANK {
                           3054 ;	-----------------------------------------
                           3055 ;	 function cmd_rx_ffe
                           3056 ;	-----------------------------------------
   0792                    3057 _cmd_rx_ffe:
   0792 C0 18              3058 	push	_bp
   0794 85 81 18           3059 	mov	_bp,sp
   0797 AA 82              3060 	mov	r2,dpl
                           3061 ;	../../shared/src/cmd_if.c:240: if(gen==0x80) {//current
   0799 BA 80 40           3062 	cjne	r2,#0x80,00108$
                           3063 ;	../../shared/src/cmd_if.c:242: if(cmd_code==CMD_RX_FFE_GET) {
   079C E5 18              3064 	mov	a,_bp
   079E 24 FD              3065 	add	a,#0xfd
   07A0 F8                 3066 	mov	r0,a
   07A1 B6 03 17           3067 	cjne	@r0,#0x03,00102$
                           3068 ;	../../shared/src/cmd_if.c:243: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = UPHY14_TRX_ANAREG_TOP_128.BT.B0; //ffe_cap1/res1
   07A4 90 02 00           3069 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_128
   07A7 E0                 3070 	movx	a,@dptr
   07A8 FB                 3071 	mov	r3,a
   07A9 90 60 24           3072 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   07AC EB                 3073 	mov	a,r3
   07AD F0                 3074 	movx	@dptr,a
                           3075 ;	../../shared/src/cmd_if.c:245: lnx_PHY_LOCAL_VALUE_LANE_31_0_b2 = UPHY14_TRX_ANAREG_TOP_129.BT.B0; //ffe_cap2/res2/O
   07AE 90 02 04           3076 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_129
   07B1 E0                 3077 	movx	a,@dptr
   07B2 FB                 3078 	mov	r3,a
   07B3 90 60 26           3079 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0002)
   07B6 EB                 3080 	mov	a,r3
   07B7 F0                 3081 	movx	@dptr,a
   07B8 02 08 7E           3082 	ljmp	00109$
   07BB                    3083 00102$:
                           3084 ;	../../shared/src/cmd_if.c:248: UPHY14_TRX_ANAREG_TOP_128.BT.B0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0; //ffe_cap1/res1
   07BB 90 60 20           3085 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   07BE E0                 3086 	movx	a,@dptr
   07BF FB                 3087 	mov	r3,a
   07C0 90 02 00           3088 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_128
   07C3 EB                 3089 	mov	a,r3
   07C4 F0                 3090 	movx	@dptr,a
                           3091 ;	../../shared/src/cmd_if.c:250: UPHY14_TRX_ANAREG_BOT_0.BT.B0   = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2; //ffe_cap2/res2/E
   07C5 90 60 22           3092 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0002)
   07C8 E0                 3093 	movx	a,@dptr
   07C9 FB                 3094 	mov	r3,a
   07CA 90 00 00           3095 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_0
   07CD EB                 3096 	mov	a,r3
   07CE F0                 3097 	movx	@dptr,a
                           3098 ;	../../shared/src/cmd_if.c:251: UPHY14_TRX_ANAREG_TOP_129.BT.B0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2; //ffe_cap2/res2/O
   07CF 90 60 22           3099 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0002)
   07D2 E0                 3100 	movx	a,@dptr
   07D3 FB                 3101 	mov	r3,a
   07D4 90 02 04           3102 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_129
   07D7 EB                 3103 	mov	a,r3
   07D8 F0                 3104 	movx	@dptr,a
   07D9 02 08 7E           3105 	ljmp	00109$
   07DC                    3106 00108$:
                           3107 ;	../../shared/src/cmd_if.c:255: if(cmd_code==CMD_RX_FFE_GET) {
   07DC E5 18              3108 	mov	a,_bp
   07DE 24 FD              3109 	add	a,#0xfd
   07E0 F8                 3110 	mov	r0,a
   07E1 B6 03 30           3111 	cjne	@r0,#0x03,00105$
                           3112 ;	../../shared/src/cmd_if.c:256: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = rc_save[gen][1]; //ffe_cap1/res1
   07E4 EA                 3113 	mov	a,r2
   07E5 2A                 3114 	add	a,r2
   07E6 25 E0              3115 	add	a,acc
   07E8 FB                 3116 	mov	r3,a
   07E9 24 B4              3117 	add	a,#_rc_save
   07EB FC                 3118 	mov	r4,a
   07EC E4                 3119 	clr	a
   07ED 34 60              3120 	addc	a,#(_rc_save >> 8)
   07EF FD                 3121 	mov	r5,a
   07F0 8C 82              3122 	mov	dpl,r4
   07F2 8D 83              3123 	mov	dph,r5
   07F4 A3                 3124 	inc	dptr
   07F5 E0                 3125 	movx	a,@dptr
   07F6 FC                 3126 	mov	r4,a
   07F7 90 60 24           3127 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   07FA EC                 3128 	mov	a,r4
   07FB F0                 3129 	movx	@dptr,a
                           3130 ;	../../shared/src/cmd_if.c:258: lnx_PHY_LOCAL_VALUE_LANE_31_0_b2 = rc_save[gen][3]; //ffe_cap2/res2/O
   07FC EB                 3131 	mov	a,r3
   07FD 24 B4              3132 	add	a,#_rc_save
   07FF FB                 3133 	mov	r3,a
   0800 E4                 3134 	clr	a
   0801 34 60              3135 	addc	a,#(_rc_save >> 8)
   0803 FC                 3136 	mov	r4,a
   0804 8B 82              3137 	mov	dpl,r3
   0806 8C 83              3138 	mov	dph,r4
   0808 A3                 3139 	inc	dptr
   0809 A3                 3140 	inc	dptr
   080A A3                 3141 	inc	dptr
   080B E0                 3142 	movx	a,@dptr
   080C FB                 3143 	mov	r3,a
   080D 90 60 26           3144 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0002)
   0810 EB                 3145 	mov	a,r3
   0811 F0                 3146 	movx	@dptr,a
   0812 80 6A              3147 	sjmp	00109$
   0814                    3148 00105$:
                           3149 ;	../../shared/src/cmd_if.c:261: rc_save[gen][1] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0; //ffe_cap1/res1
   0814 EA                 3150 	mov	a,r2
   0815 2A                 3151 	add	a,r2
   0816 25 E0              3152 	add	a,acc
   0818 FB                 3153 	mov	r3,a
   0819 24 B4              3154 	add	a,#_rc_save
   081B FC                 3155 	mov	r4,a
   081C E4                 3156 	clr	a
   081D 34 60              3157 	addc	a,#(_rc_save >> 8)
   081F FD                 3158 	mov	r5,a
   0820 0C                 3159 	inc	r4
   0821 BC 00 01           3160 	cjne	r4,#0x00,00121$
   0824 0D                 3161 	inc	r5
   0825                    3162 00121$:
   0825 90 60 20           3163 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0828 E0                 3164 	movx	a,@dptr
   0829 FE                 3165 	mov	r6,a
   082A 8C 82              3166 	mov	dpl,r4
   082C 8D 83              3167 	mov	dph,r5
   082E EE                 3168 	mov	a,r6
   082F F0                 3169 	movx	@dptr,a
                           3170 ;	../../shared/src/cmd_if.c:263: rc_save[gen][2] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2; //ffe_cap2/res2/E
   0830 EB                 3171 	mov	a,r3
   0831 24 B4              3172 	add	a,#_rc_save
   0833 FC                 3173 	mov	r4,a
   0834 E4                 3174 	clr	a
   0835 34 60              3175 	addc	a,#(_rc_save >> 8)
   0837 FD                 3176 	mov	r5,a
   0838 74 02              3177 	mov	a,#0x02
   083A 2C                 3178 	add	a,r4
   083B FC                 3179 	mov	r4,a
   083C E4                 3180 	clr	a
   083D 3D                 3181 	addc	a,r5
   083E FD                 3182 	mov	r5,a
   083F 90 60 22           3183 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0002)
   0842 E0                 3184 	movx	a,@dptr
   0843 FE                 3185 	mov	r6,a
   0844 8C 82              3186 	mov	dpl,r4
   0846 8D 83              3187 	mov	dph,r5
   0848 EE                 3188 	mov	a,r6
   0849 F0                 3189 	movx	@dptr,a
                           3190 ;	../../shared/src/cmd_if.c:264: rc_save[gen][3] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2; //ffe_cap2/res2/O
   084A EB                 3191 	mov	a,r3
   084B 24 B4              3192 	add	a,#_rc_save
   084D FB                 3193 	mov	r3,a
   084E E4                 3194 	clr	a
   084F 34 60              3195 	addc	a,#(_rc_save >> 8)
   0851 FC                 3196 	mov	r4,a
   0852 74 03              3197 	mov	a,#0x03
   0854 2B                 3198 	add	a,r3
   0855 FB                 3199 	mov	r3,a
   0856 E4                 3200 	clr	a
   0857 3C                 3201 	addc	a,r4
   0858 FC                 3202 	mov	r4,a
   0859 90 60 22           3203 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0002)
   085C E0                 3204 	movx	a,@dptr
   085D FD                 3205 	mov	r5,a
   085E 8B 82              3206 	mov	dpl,r3
   0860 8C 83              3207 	mov	dph,r4
   0862 ED                 3208 	mov	a,r5
   0863 F0                 3209 	movx	@dptr,a
                           3210 ;	../../shared/src/cmd_if.c:265: TRAIN_CONTROL_9.BT.B1 |= (0x01<<gen);
   0864 90 60 CD           3211 	mov	dptr,#(_TRAIN_CONTROL_9 + 0x0001)
   0867 E0                 3212 	movx	a,@dptr
   0868 FB                 3213 	mov	r3,a
   0869 8A F0              3214 	mov	b,r2
   086B 05 F0              3215 	inc	b
   086D 74 01              3216 	mov	a,#0x01
   086F 80 02              3217 	sjmp	00124$
   0871                    3218 00122$:
   0871 25 E0              3219 	add	a,acc
   0873                    3220 00124$:
   0873 D5 F0 FB           3221 	djnz	b,00122$
   0876 FA                 3222 	mov	r2,a
   0877 42 03              3223 	orl	ar3,a
   0879 90 60 CD           3224 	mov	dptr,#(_TRAIN_CONTROL_9 + 0x0001)
   087C EB                 3225 	mov	a,r3
   087D F0                 3226 	movx	@dptr,a
   087E                    3227 00109$:
                           3228 ;	../../shared/src/cmd_if.c:268: return 0;
   087E 75 82 00           3229 	mov	dpl,#0x00
   0881 D0 18              3230 	pop	_bp
   0883 22                 3231 	ret
                           3232 ;------------------------------------------------------------
                           3233 ;Allocation info for local variables in function 'cmd_sq_thrs_ratio'
                           3234 ;------------------------------------------------------------
                           3235 ;cmd_code                  Allocated to stack - offset -3
                           3236 ;gen                       Allocated to registers r2 
                           3237 ;temp                      Allocated to registers r3 r4 
                           3238 ;------------------------------------------------------------
                           3239 ;	../../shared/src/cmd_if.c:272: uint8_t cmd_sq_thrs_ratio(uint8_t gen, uint8_t cmd_code) CMD_BANK {
                           3240 ;	-----------------------------------------
                           3241 ;	 function cmd_sq_thrs_ratio
                           3242 ;	-----------------------------------------
   0884                    3243 _cmd_sq_thrs_ratio:
   0884 C0 18              3244 	push	_bp
   0886 85 81 18           3245 	mov	_bp,sp
   0889 AA 82              3246 	mov	r2,dpl
                           3247 ;	../../shared/src/cmd_if.c:275: if(gen==0x80) {//current
   088B BA 80 02           3248 	cjne	r2,#0x80,00119$
   088E 80 03              3249 	sjmp	00120$
   0890                    3250 00119$:
   0890 02 09 1F           3251 	ljmp	00111$
   0893                    3252 00120$:
                           3253 ;	../../shared/src/cmd_if.c:276: if(cmd_code==CMD_SQ_THRS_RATIO_GET) {
   0893 E5 18              3254 	mov	a,_bp
   0895 24 FD              3255 	add	a,#0xfd
   0897 F8                 3256 	mov	r0,a
   0898 B6 07 0C           3257 	cjne	@r0,#0x07,00105$
                           3258 ;	../../shared/src/cmd_if.c:277: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = sq_thrs_ratio;
   089B 90 67 A6           3259 	mov	dptr,#_sq_thrs_ratio
   089E E0                 3260 	movx	a,@dptr
   089F FB                 3261 	mov	r3,a
   08A0 90 60 24           3262 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   08A3 F0                 3263 	movx	@dptr,a
   08A4 02 09 64           3264 	ljmp	00112$
   08A7                    3265 00105$:
                           3266 ;	../../shared/src/cmd_if.c:280: temp = lnx_CAL_SQ_THRESH_LANE_7_0 & 0x1f;
   08A7 90 60 13           3267 	mov	dptr,#(_CAL_SAVE_DATA1_LANE + 0x0003)
   08AA E0                 3268 	movx	a,@dptr
   08AB FB                 3269 	mov	r3,a
   08AC 53 03 1F           3270 	anl	ar3,#0x1F
   08AF 7C 00              3271 	mov	r4,#0x00
                           3272 ;	../../shared/src/cmd_if.c:281: sq_thrs_ratio = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x1f;
   08B1 90 60 20           3273 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   08B4 E0                 3274 	movx	a,@dptr
   08B5 FD                 3275 	mov	r5,a
   08B6 53 05 1F           3276 	anl	ar5,#0x1F
   08B9 90 67 A6           3277 	mov	dptr,#_sq_thrs_ratio
   08BC ED                 3278 	mov	a,r5
   08BD F0                 3279 	movx	@dptr,a
                           3280 ;	../../shared/src/cmd_if.c:282: if(sq_thrs_ratio==0) 
   08BE ED                 3281 	mov	a,r5
   08BF 70 19              3282 	jnz	00102$
                           3283 ;	../../shared/src/cmd_if.c:283: reg_SQ_THRESH_LANE_5_0 = lnx_CAL_SQ_THRESH_LANE_7_0;	
   08C1 90 60 13           3284 	mov	dptr,#(_CAL_SAVE_DATA1_LANE + 0x0003)
   08C4 E0                 3285 	movx	a,@dptr
   08C5 FE                 3286 	mov	r6,a
   08C6 90 00 10           3287 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_4
   08C9 25 E0              3288 	add	a,acc
   08CB 25 E0              3289 	add	a,acc
   08CD 54 FC              3290 	anl	a,#0xfc
   08CF F5 F0              3291 	mov	b,a
   08D1 E0                 3292 	movx	a,@dptr
   08D2 54 03              3293 	anl	a,#0x03
   08D4 45 F0              3294 	orl	a,b
   08D6 F0                 3295 	movx	@dptr,a
   08D7 02 09 64           3296 	ljmp	00112$
   08DA                    3297 00102$:
                           3298 ;	../../shared/src/cmd_if.c:285: temp = (temp * sq_thrs_ratio)>>5;
   08DA 7E 00              3299 	mov	r6,#0x00
   08DC C0 05              3300 	push	ar5
   08DE C0 06              3301 	push	ar6
   08E0 8B 82              3302 	mov	dpl,r3
   08E2 8C 83              3303 	mov	dph,r4
   08E4 12 7C E3           3304 	lcall	__mulint
   08E7 AD 82              3305 	mov	r5,dpl
   08E9 AE 83              3306 	mov	r6,dph
   08EB 15 81              3307 	dec	sp
   08ED 15 81              3308 	dec	sp
   08EF 8D 03              3309 	mov	ar3,r5
   08F1 EE                 3310 	mov	a,r6
   08F2 C4                 3311 	swap	a
   08F3 03                 3312 	rr	a
   08F4 CB                 3313 	xch	a,r3
   08F5 C4                 3314 	swap	a
   08F6 03                 3315 	rr	a
   08F7 54 07              3316 	anl	a,#0x07
   08F9 6B                 3317 	xrl	a,r3
   08FA CB                 3318 	xch	a,r3
   08FB 54 07              3319 	anl	a,#0x07
   08FD CB                 3320 	xch	a,r3
   08FE 6B                 3321 	xrl	a,r3
   08FF CB                 3322 	xch	a,r3
   0900 FC                 3323 	mov	r4,a
                           3324 ;	../../shared/src/cmd_if.c:286: reg_SQ_THRESH_LANE_5_0 = (lnx_CAL_SQ_THRESH_LANE_7_0&0x20) | ((uint8_t)temp); 
   0901 90 60 13           3325 	mov	dptr,#(_CAL_SAVE_DATA1_LANE + 0x0003)
   0904 E0                 3326 	movx	a,@dptr
   0905 FD                 3327 	mov	r5,a
   0906 53 05 20           3328 	anl	ar5,#0x20
   0909 EB                 3329 	mov	a,r3
   090A 42 05              3330 	orl	ar5,a
   090C 90 00 10           3331 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_4
   090F ED                 3332 	mov	a,r5
   0910 2D                 3333 	add	a,r5
   0911 25 E0              3334 	add	a,acc
   0913 54 FC              3335 	anl	a,#0xfc
   0915 F5 F0              3336 	mov	b,a
   0917 E0                 3337 	movx	a,@dptr
   0918 54 03              3338 	anl	a,#0x03
   091A 45 F0              3339 	orl	a,b
   091C F0                 3340 	movx	@dptr,a
   091D 80 45              3341 	sjmp	00112$
   091F                    3342 00111$:
                           3343 ;	../../shared/src/cmd_if.c:291: if(cmd_code==CMD_SQ_THRS_RATIO_GET) {
   091F E5 18              3344 	mov	a,_bp
   0921 24 FD              3345 	add	a,#0xfd
   0923 F8                 3346 	mov	r0,a
   0924 B6 07 12           3347 	cjne	@r0,#0x07,00108$
                           3348 ;	../../shared/src/cmd_if.c:292: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = sq_thrs_ratio_tb[gen];
   0927 EA                 3349 	mov	a,r2
   0928 24 7C              3350 	add	a,#_sq_thrs_ratio_tb
   092A F5 82              3351 	mov	dpl,a
   092C E4                 3352 	clr	a
   092D 34 60              3353 	addc	a,#(_sq_thrs_ratio_tb >> 8)
   092F F5 83              3354 	mov	dph,a
   0931 E0                 3355 	movx	a,@dptr
   0932 FB                 3356 	mov	r3,a
   0933 90 60 24           3357 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0936 F0                 3358 	movx	@dptr,a
   0937 80 2B              3359 	sjmp	00112$
   0939                    3360 00108$:
                           3361 ;	../../shared/src/cmd_if.c:295: sq_thrs_ratio_tb[gen] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x1f;
   0939 EA                 3362 	mov	a,r2
   093A 24 7C              3363 	add	a,#_sq_thrs_ratio_tb
   093C FB                 3364 	mov	r3,a
   093D E4                 3365 	clr	a
   093E 34 60              3366 	addc	a,#(_sq_thrs_ratio_tb >> 8)
   0940 FC                 3367 	mov	r4,a
   0941 90 60 20           3368 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0944 E0                 3369 	movx	a,@dptr
   0945 FD                 3370 	mov	r5,a
   0946 53 05 1F           3371 	anl	ar5,#0x1F
   0949 8B 82              3372 	mov	dpl,r3
   094B 8C 83              3373 	mov	dph,r4
   094D ED                 3374 	mov	a,r5
   094E F0                 3375 	movx	@dptr,a
                           3376 ;	../../shared/src/cmd_if.c:296: sq_thrs_ratio_gen_en |= (0x1 << gen);
   094F 8A F0              3377 	mov	b,r2
   0951 05 F0              3378 	inc	b
   0953 74 01              3379 	mov	a,#0x01
   0955 80 02              3380 	sjmp	00128$
   0957                    3381 00126$:
   0957 25 E0              3382 	add	a,acc
   0959                    3383 00128$:
   0959 D5 F0 FB           3384 	djnz	b,00126$
   095C FA                 3385 	mov	r2,a
   095D 90 67 A7           3386 	mov	dptr,#_sq_thrs_ratio_gen_en
   0960 E0                 3387 	movx	a,@dptr
   0961 FB                 3388 	mov	r3,a
   0962 4A                 3389 	orl	a,r2
   0963 F0                 3390 	movx	@dptr,a
   0964                    3391 00112$:
                           3392 ;	../../shared/src/cmd_if.c:299: return 0;
   0964 75 82 00           3393 	mov	dpl,#0x00
   0967 D0 18              3394 	pop	_bp
   0969 22                 3395 	ret
                           3396 ;------------------------------------------------------------
                           3397 ;Allocation info for local variables in function 'cmd_tx_slew_rate'
                           3398 ;------------------------------------------------------------
                           3399 ;cmd_code                  Allocated to stack - offset -3
                           3400 ;gen                       Allocated to registers r2 
                           3401 ;------------------------------------------------------------
                           3402 ;	../../shared/src/cmd_if.c:302: uint8_t cmd_tx_slew_rate(uint8_t gen, uint8_t cmd_code) CMD_BANK {
                           3403 ;	-----------------------------------------
                           3404 ;	 function cmd_tx_slew_rate
                           3405 ;	-----------------------------------------
   096A                    3406 _cmd_tx_slew_rate:
   096A C0 18              3407 	push	_bp
   096C 85 81 18           3408 	mov	_bp,sp
   096F AA 82              3409 	mov	r2,dpl
                           3410 ;	../../shared/src/cmd_if.c:304: if(gen==0x80) {//current ana
   0971 BA 80 02           3411 	cjne	r2,#0x80,00118$
   0974 80 03              3412 	sjmp	00119$
   0976                    3413 00118$:
   0976 02 0A 10           3414 	ljmp	00110$
   0979                    3415 00119$:
                           3416 ;	../../shared/src/cmd_if.c:305: if(cmd_code==CMD_TX_SLEW_RATE_GET) {
   0979 E5 18              3417 	mov	a,_bp
   097B 24 FD              3418 	add	a,#0xfd
   097D F8                 3419 	mov	r0,a
   097E B6 07 2C           3420 	cjne	@r0,#0x07,00105$
                           3421 ;	../../shared/src/cmd_if.c:306: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = reg_SLEWCTRL0_LANE_1_0;
   0981 90 00 4C           3422 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_19
   0984 E0                 3423 	movx	a,@dptr
   0985 C4                 3424 	swap	a
   0986 54 03              3425 	anl	a,#0x03
   0988 FB                 3426 	mov	r3,a
   0989 90 60 24           3427 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   098C EB                 3428 	mov	a,r3
   098D F0                 3429 	movx	@dptr,a
                           3430 ;	../../shared/src/cmd_if.c:307: lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = reg_SLEWCTRL1_LANE_1_0;
   098E 90 00 4C           3431 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_19
   0991 E0                 3432 	movx	a,@dptr
   0992 03                 3433 	rr	a
   0993 03                 3434 	rr	a
   0994 54 03              3435 	anl	a,#0x03
   0996 FB                 3436 	mov	r3,a
   0997 90 60 25           3437 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0001)
   099A EB                 3438 	mov	a,r3
   099B F0                 3439 	movx	@dptr,a
                           3440 ;	../../shared/src/cmd_if.c:308: lnx_PHY_LOCAL_VALUE_LANE_31_0_b2 = reg_SLEWRATE_EN_LANE_1_0;
   099C 90 00 4C           3441 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_19
   099F E0                 3442 	movx	a,@dptr
   09A0 23                 3443 	rl	a
   09A1 23                 3444 	rl	a
   09A2 54 03              3445 	anl	a,#0x03
   09A4 FB                 3446 	mov	r3,a
   09A5 90 60 26           3447 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0002)
   09A8 EB                 3448 	mov	a,r3
   09A9 F0                 3449 	movx	@dptr,a
   09AA 02 0A C7           3450 	ljmp	00111$
   09AD                    3451 00105$:
                           3452 ;	../../shared/src/cmd_if.c:311: if(lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2==1 || lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2==2) return CMD_ST_INVALID_VALUE;
   09AD 90 60 22           3453 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0002)
   09B0 E0                 3454 	movx	a,@dptr
   09B1 FB                 3455 	mov	r3,a
   09B2 BB 01 02           3456 	cjne	r3,#0x01,00122$
   09B5 80 08              3457 	sjmp	00101$
   09B7                    3458 00122$:
   09B7 90 60 22           3459 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0002)
   09BA E0                 3460 	movx	a,@dptr
   09BB FB                 3461 	mov	r3,a
   09BC BB 02 06           3462 	cjne	r3,#0x02,00102$
   09BF                    3463 00101$:
   09BF 75 82 04           3464 	mov	dpl,#0x04
   09C2 02 0A CA           3465 	ljmp	00112$
   09C5                    3466 00102$:
                           3467 ;	../../shared/src/cmd_if.c:312: reg_SLEWCTRL0_LANE_1_0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 & 0x3;
   09C5 90 60 20           3468 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   09C8 E0                 3469 	movx	a,@dptr
   09C9 FB                 3470 	mov	r3,a
   09CA 53 03 03           3471 	anl	ar3,#0x03
   09CD 90 00 4C           3472 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_19
   09D0 EB                 3473 	mov	a,r3
   09D1 C4                 3474 	swap	a
   09D2 54 30              3475 	anl	a,#(0xf0&0x30)
   09D4 F5 F0              3476 	mov	b,a
   09D6 E0                 3477 	movx	a,@dptr
   09D7 54 CF              3478 	anl	a,#0xcf
   09D9 45 F0              3479 	orl	a,b
   09DB F0                 3480 	movx	@dptr,a
                           3481 ;	../../shared/src/cmd_if.c:313: reg_SLEWCTRL1_LANE_1_0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1 & 0x3;
   09DC 90 60 21           3482 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0001)
   09DF E0                 3483 	movx	a,@dptr
   09E0 FB                 3484 	mov	r3,a
   09E1 53 03 03           3485 	anl	ar3,#0x03
   09E4 90 00 4C           3486 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_19
   09E7 EB                 3487 	mov	a,r3
   09E8 2B                 3488 	add	a,r3
   09E9 25 E0              3489 	add	a,acc
   09EB 54 0C              3490 	anl	a,#0x0c
   09ED F5 F0              3491 	mov	b,a
   09EF E0                 3492 	movx	a,@dptr
   09F0 54 F3              3493 	anl	a,#0xf3
   09F2 45 F0              3494 	orl	a,b
   09F4 F0                 3495 	movx	@dptr,a
                           3496 ;	../../shared/src/cmd_if.c:314: reg_SLEWRATE_EN_LANE_1_0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2 & 0x3;
   09F5 90 60 22           3497 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0002)
   09F8 E0                 3498 	movx	a,@dptr
   09F9 FB                 3499 	mov	r3,a
   09FA 53 03 03           3500 	anl	ar3,#0x03
   09FD 90 00 4C           3501 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_19
   0A00 EB                 3502 	mov	a,r3
   0A01 03                 3503 	rr	a
   0A02 03                 3504 	rr	a
   0A03 54 C0              3505 	anl	a,#(0xc0&0xc0)
   0A05 F5 F0              3506 	mov	b,a
   0A07 E0                 3507 	movx	a,@dptr
   0A08 54 3F              3508 	anl	a,#0x3f
   0A0A 45 F0              3509 	orl	a,b
   0A0C F0                 3510 	movx	@dptr,a
   0A0D 02 0A C7           3511 	ljmp	00111$
   0A10                    3512 00110$:
                           3513 ;	../../shared/src/cmd_if.c:319: if(cmd_code==CMD_TX_SLEW_RATE_SET) {
   0A10 E5 18              3514 	mov	a,_bp
   0A12 24 FD              3515 	add	a,#0xfd
   0A14 F8                 3516 	mov	r0,a
   0A15 B6 06 5F           3517 	cjne	@r0,#0x06,00108$
                           3518 ;	../../shared/src/cmd_if.c:320: speedtable[gen][spdoft_slewctrl0_lane] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 & 0x03;
   0A18 EA                 3519 	mov	a,r2
   0A19 75 F0 50           3520 	mov	b,#0x50
   0A1C A4                 3521 	mul	ab
   0A1D FB                 3522 	mov	r3,a
   0A1E AC F0              3523 	mov	r4,b
   0A20 EB                 3524 	mov	a,r3
   0A21 24 04              3525 	add	a,#_speedtable
   0A23 FD                 3526 	mov	r5,a
   0A24 EC                 3527 	mov	a,r4
   0A25 34 63              3528 	addc	a,#(_speedtable >> 8)
   0A27 FE                 3529 	mov	r6,a
   0A28 74 0E              3530 	mov	a,#0x0E
   0A2A 2D                 3531 	add	a,r5
   0A2B FD                 3532 	mov	r5,a
   0A2C E4                 3533 	clr	a
   0A2D 3E                 3534 	addc	a,r6
   0A2E FE                 3535 	mov	r6,a
   0A2F 90 60 20           3536 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0A32 E0                 3537 	movx	a,@dptr
   0A33 FF                 3538 	mov	r7,a
   0A34 53 07 03           3539 	anl	ar7,#0x03
   0A37 8D 82              3540 	mov	dpl,r5
   0A39 8E 83              3541 	mov	dph,r6
   0A3B EF                 3542 	mov	a,r7
   0A3C F0                 3543 	movx	@dptr,a
                           3544 ;	../../shared/src/cmd_if.c:321: speedtable[gen][spdoft_slewctrl1_lane] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1 & 0x03;
   0A3D EB                 3545 	mov	a,r3
   0A3E 24 04              3546 	add	a,#_speedtable
   0A40 FD                 3547 	mov	r5,a
   0A41 EC                 3548 	mov	a,r4
   0A42 34 63              3549 	addc	a,#(_speedtable >> 8)
   0A44 FE                 3550 	mov	r6,a
   0A45 74 0D              3551 	mov	a,#0x0D
   0A47 2D                 3552 	add	a,r5
   0A48 FD                 3553 	mov	r5,a
   0A49 E4                 3554 	clr	a
   0A4A 3E                 3555 	addc	a,r6
   0A4B FE                 3556 	mov	r6,a
   0A4C 90 60 21           3557 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0001)
   0A4F E0                 3558 	movx	a,@dptr
   0A50 FF                 3559 	mov	r7,a
   0A51 53 07 03           3560 	anl	ar7,#0x03
   0A54 8D 82              3561 	mov	dpl,r5
   0A56 8E 83              3562 	mov	dph,r6
   0A58 EF                 3563 	mov	a,r7
   0A59 F0                 3564 	movx	@dptr,a
                           3565 ;	../../shared/src/cmd_if.c:322: speedtable[gen][spdoft_slewrate_en_lane] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2 & 0x3;
   0A5A EB                 3566 	mov	a,r3
   0A5B 24 04              3567 	add	a,#_speedtable
   0A5D FB                 3568 	mov	r3,a
   0A5E EC                 3569 	mov	a,r4
   0A5F 34 63              3570 	addc	a,#(_speedtable >> 8)
   0A61 FC                 3571 	mov	r4,a
   0A62 74 0C              3572 	mov	a,#0x0C
   0A64 2B                 3573 	add	a,r3
   0A65 FB                 3574 	mov	r3,a
   0A66 E4                 3575 	clr	a
   0A67 3C                 3576 	addc	a,r4
   0A68 FC                 3577 	mov	r4,a
   0A69 90 60 22           3578 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0002)
   0A6C E0                 3579 	movx	a,@dptr
   0A6D FD                 3580 	mov	r5,a
   0A6E 53 05 03           3581 	anl	ar5,#0x03
   0A71 8B 82              3582 	mov	dpl,r3
   0A73 8C 83              3583 	mov	dph,r4
   0A75 ED                 3584 	mov	a,r5
   0A76 F0                 3585 	movx	@dptr,a
   0A77                    3586 00108$:
                           3587 ;	../../shared/src/cmd_if.c:324: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = speedtable[gen][spdoft_slewctrl0_lane];
   0A77 EA                 3588 	mov	a,r2
   0A78 75 F0 50           3589 	mov	b,#0x50
   0A7B A4                 3590 	mul	ab
   0A7C FA                 3591 	mov	r2,a
   0A7D AB F0              3592 	mov	r3,b
   0A7F EA                 3593 	mov	a,r2
   0A80 24 04              3594 	add	a,#_speedtable
   0A82 FC                 3595 	mov	r4,a
   0A83 EB                 3596 	mov	a,r3
   0A84 34 63              3597 	addc	a,#(_speedtable >> 8)
   0A86 FD                 3598 	mov	r5,a
   0A87 74 0E              3599 	mov	a,#0x0E
   0A89 2C                 3600 	add	a,r4
   0A8A F5 82              3601 	mov	dpl,a
   0A8C E4                 3602 	clr	a
   0A8D 3D                 3603 	addc	a,r5
   0A8E F5 83              3604 	mov	dph,a
   0A90 E0                 3605 	movx	a,@dptr
   0A91 FC                 3606 	mov	r4,a
   0A92 90 60 24           3607 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0A95 EC                 3608 	mov	a,r4
   0A96 F0                 3609 	movx	@dptr,a
                           3610 ;	../../shared/src/cmd_if.c:325: lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = speedtable[gen][spdoft_slewctrl1_lane];
   0A97 EA                 3611 	mov	a,r2
   0A98 24 04              3612 	add	a,#_speedtable
   0A9A FC                 3613 	mov	r4,a
   0A9B EB                 3614 	mov	a,r3
   0A9C 34 63              3615 	addc	a,#(_speedtable >> 8)
   0A9E FD                 3616 	mov	r5,a
   0A9F 74 0D              3617 	mov	a,#0x0D
   0AA1 2C                 3618 	add	a,r4
   0AA2 F5 82              3619 	mov	dpl,a
   0AA4 E4                 3620 	clr	a
   0AA5 3D                 3621 	addc	a,r5
   0AA6 F5 83              3622 	mov	dph,a
   0AA8 E0                 3623 	movx	a,@dptr
   0AA9 FC                 3624 	mov	r4,a
   0AAA 90 60 25           3625 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0001)
   0AAD EC                 3626 	mov	a,r4
   0AAE F0                 3627 	movx	@dptr,a
                           3628 ;	../../shared/src/cmd_if.c:326: lnx_PHY_LOCAL_VALUE_LANE_31_0_b2 = speedtable[gen][spdoft_slewrate_en_lane];
   0AAF EA                 3629 	mov	a,r2
   0AB0 24 04              3630 	add	a,#_speedtable
   0AB2 FA                 3631 	mov	r2,a
   0AB3 EB                 3632 	mov	a,r3
   0AB4 34 63              3633 	addc	a,#(_speedtable >> 8)
   0AB6 FB                 3634 	mov	r3,a
   0AB7 74 0C              3635 	mov	a,#0x0C
   0AB9 2A                 3636 	add	a,r2
   0ABA F5 82              3637 	mov	dpl,a
   0ABC E4                 3638 	clr	a
   0ABD 3B                 3639 	addc	a,r3
   0ABE F5 83              3640 	mov	dph,a
   0AC0 E0                 3641 	movx	a,@dptr
   0AC1 FA                 3642 	mov	r2,a
   0AC2 90 60 26           3643 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0002)
   0AC5 EA                 3644 	mov	a,r2
   0AC6 F0                 3645 	movx	@dptr,a
   0AC7                    3646 00111$:
                           3647 ;	../../shared/src/cmd_if.c:328: return 0;
   0AC7 75 82 00           3648 	mov	dpl,#0x00
   0ACA                    3649 00112$:
   0ACA D0 18              3650 	pop	_bp
   0ACC 22                 3651 	ret
                           3652 ;------------------------------------------------------------
                           3653 ;Allocation info for local variables in function 'cmd_bypass_ctle_train'
                           3654 ;------------------------------------------------------------
                           3655 ;cmd_code                  Allocated to registers r2 
                           3656 ;------------------------------------------------------------
                           3657 ;	../../shared/src/cmd_if.c:331: uint8_t cmd_bypass_ctle_train(uint8_t cmd_code) CMD_BANK {
                           3658 ;	-----------------------------------------
                           3659 ;	 function cmd_bypass_ctle_train
                           3660 ;	-----------------------------------------
   0ACD                    3661 _cmd_bypass_ctle_train:
   0ACD AA 82              3662 	mov	r2,dpl
                           3663 ;	../../shared/src/cmd_if.c:332: if(cmd_code==CMD_BYPASS_CTLE_TRAIN_GET) {
   0ACF BA 01 0E           3664 	cjne	r2,#0x01,00102$
                           3665 ;	../../shared/src/cmd_if.c:333: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = lnx_BYPASS_CTLE_TRAIN_LANE;
   0AD2 90 60 98           3666 	mov	dptr,#_DFE_CONTROL_10
   0AD5 E0                 3667 	movx	a,@dptr
   0AD6 23                 3668 	rl	a
   0AD7 54 01              3669 	anl	a,#0x01
   0AD9 FA                 3670 	mov	r2,a
   0ADA 90 60 24           3671 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0ADD F0                 3672 	movx	@dptr,a
   0ADE 80 0F              3673 	sjmp	00103$
   0AE0                    3674 00102$:
                           3675 ;	../../shared/src/cmd_if.c:336: lnx_BYPASS_CTLE_TRAIN_LANE = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 & 0x01;
   0AE0 90 60 20           3676 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0AE3 E0                 3677 	movx	a,@dptr
   0AE4 54 01              3678 	anl	a,#0x01
   0AE6 FA                 3679 	mov	r2,a
   0AE7 90 60 98           3680 	mov	dptr,#_DFE_CONTROL_10
   0AEA 13                 3681 	rrc	a
   0AEB E0                 3682 	movx	a,@dptr
   0AEC 92 E7              3683 	mov	acc.7,c
   0AEE F0                 3684 	movx	@dptr,a
   0AEF                    3685 00103$:
                           3686 ;	../../shared/src/cmd_if.c:338: return 0;
   0AEF 75 82 00           3687 	mov	dpl,#0x00
   0AF2 22                 3688 	ret
                           3689 ;------------------------------------------------------------
                           3690 ;Allocation info for local variables in function 'cmd_rx_cdr_bw'
                           3691 ;------------------------------------------------------------
                           3692 ;cmd_code                  Allocated to stack - offset -3
                           3693 ;gen                       Allocated to registers r2 
                           3694 ;------------------------------------------------------------
                           3695 ;	../../shared/src/cmd_if.c:341: uint8_t cmd_rx_cdr_bw(uint8_t gen, uint8_t cmd_code) CMD_BANK {
                           3696 ;	-----------------------------------------
                           3697 ;	 function cmd_rx_cdr_bw
                           3698 ;	-----------------------------------------
   0AF3                    3699 _cmd_rx_cdr_bw:
   0AF3 C0 18              3700 	push	_bp
   0AF5 85 81 18           3701 	mov	_bp,sp
   0AF8 AA 82              3702 	mov	r2,dpl
                           3703 ;	../../shared/src/cmd_if.c:343: if(gen==0x80) {//current ana
   0AFA BA 80 02           3704 	cjne	r2,#0x80,00114$
   0AFD 80 03              3705 	sjmp	00115$
   0AFF                    3706 00114$:
   0AFF 02 0B A6           3707 	ljmp	00107$
   0B02                    3708 00115$:
                           3709 ;	../../shared/src/cmd_if.c:344: if(cmd_code==CMD_RX_CDR_BW_GET) {
   0B02 E5 18              3710 	mov	a,_bp
   0B04 24 FD              3711 	add	a,#0xfd
   0B06 F8                 3712 	mov	r0,a
   0B07 B6 01 3A           3713 	cjne	@r0,#0x01,00102$
                           3714 ;	../../shared/src/cmd_if.c:345: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = reg_RX_SELMUFI_LANE_2_0|(reg_RX_SELMUFF_LANE_2_0<<4);
   0B0A 90 21 65           3715 	mov	dptr,#(_DTL_REG1 + 0x0001)
   0B0D E0                 3716 	movx	a,@dptr
   0B0E 03                 3717 	rr	a
   0B0F 03                 3718 	rr	a
   0B10 54 07              3719 	anl	a,#0x07
   0B12 FB                 3720 	mov	r3,a
   0B13 90 21 65           3721 	mov	dptr,#(_DTL_REG1 + 0x0001)
   0B16 E0                 3722 	movx	a,@dptr
   0B17 C4                 3723 	swap	a
   0B18 03                 3724 	rr	a
   0B19 54 07              3725 	anl	a,#0x07
   0B1B C4                 3726 	swap	a
   0B1C 54 F0              3727 	anl	a,#0xf0
   0B1E FC                 3728 	mov	r4,a
   0B1F EB                 3729 	mov	a,r3
   0B20 42 04              3730 	orl	ar4,a
   0B22 90 60 24           3731 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0B25 EC                 3732 	mov	a,r4
   0B26 F0                 3733 	movx	@dptr,a
                           3734 ;	../../shared/src/cmd_if.c:346: lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = reg_REG_SELMUPI_LANE_3_0|(reg_REG_SELMUPF_LANE_3_0<<4);
   0B27 90 02 2C           3735 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_139
   0B2A E0                 3736 	movx	a,@dptr
   0B2B 54 0F              3737 	anl	a,#0x0f
   0B2D FB                 3738 	mov	r3,a
   0B2E 90 02 30           3739 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_140
   0B31 E0                 3740 	movx	a,@dptr
   0B32 C4                 3741 	swap	a
   0B33 54 0F              3742 	anl	a,#0x0f
   0B35 C4                 3743 	swap	a
   0B36 54 F0              3744 	anl	a,#0xf0
   0B38 FC                 3745 	mov	r4,a
   0B39 EB                 3746 	mov	a,r3
   0B3A 42 04              3747 	orl	ar4,a
   0B3C 90 60 25           3748 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0001)
   0B3F EC                 3749 	mov	a,r4
   0B40 F0                 3750 	movx	@dptr,a
   0B41 02 0C 94           3751 	ljmp	00108$
   0B44                    3752 00102$:
                           3753 ;	../../shared/src/cmd_if.c:349: reg_RX_SELMUFI_LANE_2_0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 & 0x07;
   0B44 90 60 20           3754 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0B47 E0                 3755 	movx	a,@dptr
   0B48 FB                 3756 	mov	r3,a
   0B49 53 03 07           3757 	anl	ar3,#0x07
   0B4C 90 21 65           3758 	mov	dptr,#(_DTL_REG1 + 0x0001)
   0B4F EB                 3759 	mov	a,r3
   0B50 2B                 3760 	add	a,r3
   0B51 25 E0              3761 	add	a,acc
   0B53 54 1C              3762 	anl	a,#0x1c
   0B55 F5 F0              3763 	mov	b,a
   0B57 E0                 3764 	movx	a,@dptr
   0B58 54 E3              3765 	anl	a,#0xe3
   0B5A 45 F0              3766 	orl	a,b
   0B5C F0                 3767 	movx	@dptr,a
                           3768 ;	../../shared/src/cmd_if.c:350: reg_RX_SELMUFF_LANE_2_0 = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 & 0x70)>>4;
   0B5D 90 60 20           3769 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0B60 E0                 3770 	movx	a,@dptr
   0B61 54 70              3771 	anl	a,#0x70
   0B63 C4                 3772 	swap	a
   0B64 54 0F              3773 	anl	a,#0x0f
   0B66 90 21 65           3774 	mov	dptr,#(_DTL_REG1 + 0x0001)
   0B69 C4                 3775 	swap	a
   0B6A 23                 3776 	rl	a
   0B6B 54 E0              3777 	anl	a,#(0xe0&0xe0)
   0B6D F5 F0              3778 	mov	b,a
   0B6F E0                 3779 	movx	a,@dptr
   0B70 54 1F              3780 	anl	a,#0x1f
   0B72 45 F0              3781 	orl	a,b
   0B74 F0                 3782 	movx	@dptr,a
                           3783 ;	../../shared/src/cmd_if.c:351: reg_REG_SELMUPI_LANE_3_0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1 & 0x0f;
   0B75 90 60 21           3784 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0001)
   0B78 E0                 3785 	movx	a,@dptr
   0B79 FB                 3786 	mov	r3,a
   0B7A 53 03 0F           3787 	anl	ar3,#0x0F
   0B7D 90 02 2C           3788 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_139
   0B80 EB                 3789 	mov	a,r3
   0B81 54 0F              3790 	anl	a,#0x0f
   0B83 F5 F0              3791 	mov	b,a
   0B85 E0                 3792 	movx	a,@dptr
   0B86 54 F0              3793 	anl	a,#0xf0
   0B88 45 F0              3794 	orl	a,b
   0B8A F0                 3795 	movx	@dptr,a
                           3796 ;	../../shared/src/cmd_if.c:352: reg_REG_SELMUPF_LANE_3_0 = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1 & 0xf0)>>4;
   0B8B 90 60 21           3797 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0001)
   0B8E E0                 3798 	movx	a,@dptr
   0B8F 54 F0              3799 	anl	a,#0xF0
   0B91 C4                 3800 	swap	a
   0B92 54 0F              3801 	anl	a,#0x0f
   0B94 FB                 3802 	mov	r3,a
   0B95 90 02 30           3803 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_140
   0B98 C4                 3804 	swap	a
   0B99 54 F0              3805 	anl	a,#(0xf0&0xf0)
   0B9B F5 F0              3806 	mov	b,a
   0B9D E0                 3807 	movx	a,@dptr
   0B9E 54 0F              3808 	anl	a,#0x0f
   0BA0 45 F0              3809 	orl	a,b
   0BA2 F0                 3810 	movx	@dptr,a
   0BA3 02 0C 94           3811 	ljmp	00108$
   0BA6                    3812 00107$:
                           3813 ;	../../shared/src/cmd_if.c:356: if(cmd_code==CMD_RX_CDR_BW_SET) {
   0BA6 E5 18              3814 	mov	a,_bp
   0BA8 24 FD              3815 	add	a,#0xfd
   0BAA F8                 3816 	mov	r0,a
   0BAB E6                 3817 	mov	a,@r0
   0BAC 70 7C              3818 	jnz	00105$
                           3819 ;	../../shared/src/cmd_if.c:357: speedtable[gen][spdoft_rx_selmufi_lane] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 & 0x07;
   0BAE EA                 3820 	mov	a,r2
   0BAF 75 F0 50           3821 	mov	b,#0x50
   0BB2 A4                 3822 	mul	ab
   0BB3 FB                 3823 	mov	r3,a
   0BB4 AC F0              3824 	mov	r4,b
   0BB6 24 04              3825 	add	a,#_speedtable
   0BB8 FD                 3826 	mov	r5,a
   0BB9 EC                 3827 	mov	a,r4
   0BBA 34 63              3828 	addc	a,#(_speedtable >> 8)
   0BBC FE                 3829 	mov	r6,a
   0BBD 74 22              3830 	mov	a,#0x22
   0BBF 2D                 3831 	add	a,r5
   0BC0 FD                 3832 	mov	r5,a
   0BC1 E4                 3833 	clr	a
   0BC2 3E                 3834 	addc	a,r6
   0BC3 FE                 3835 	mov	r6,a
   0BC4 90 60 20           3836 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0BC7 E0                 3837 	movx	a,@dptr
   0BC8 FF                 3838 	mov	r7,a
   0BC9 53 07 07           3839 	anl	ar7,#0x07
   0BCC 8D 82              3840 	mov	dpl,r5
   0BCE 8E 83              3841 	mov	dph,r6
   0BD0 EF                 3842 	mov	a,r7
   0BD1 F0                 3843 	movx	@dptr,a
                           3844 ;	../../shared/src/cmd_if.c:358: speedtable[gen][spdoft_rx_selmuff_lane] = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 & 0x70)>>4;
   0BD2 EB                 3845 	mov	a,r3
   0BD3 24 04              3846 	add	a,#_speedtable
   0BD5 FD                 3847 	mov	r5,a
   0BD6 EC                 3848 	mov	a,r4
   0BD7 34 63              3849 	addc	a,#(_speedtable >> 8)
   0BD9 FE                 3850 	mov	r6,a
   0BDA 74 23              3851 	mov	a,#0x23
   0BDC 2D                 3852 	add	a,r5
   0BDD FD                 3853 	mov	r5,a
   0BDE E4                 3854 	clr	a
   0BDF 3E                 3855 	addc	a,r6
   0BE0 FE                 3856 	mov	r6,a
   0BE1 90 60 20           3857 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0BE4 E0                 3858 	movx	a,@dptr
   0BE5 54 70              3859 	anl	a,#0x70
   0BE7 C4                 3860 	swap	a
   0BE8 54 0F              3861 	anl	a,#0x0f
   0BEA 8D 82              3862 	mov	dpl,r5
   0BEC 8E 83              3863 	mov	dph,r6
   0BEE F0                 3864 	movx	@dptr,a
                           3865 ;	../../shared/src/cmd_if.c:359: speedtable[gen][spdoft_reg_selmupi_lane] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1 & 0x0f;
   0BEF EB                 3866 	mov	a,r3
   0BF0 24 04              3867 	add	a,#_speedtable
   0BF2 FD                 3868 	mov	r5,a
   0BF3 EC                 3869 	mov	a,r4
   0BF4 34 63              3870 	addc	a,#(_speedtable >> 8)
   0BF6 FE                 3871 	mov	r6,a
   0BF7 74 24              3872 	mov	a,#0x24
   0BF9 2D                 3873 	add	a,r5
   0BFA FD                 3874 	mov	r5,a
   0BFB E4                 3875 	clr	a
   0BFC 3E                 3876 	addc	a,r6
   0BFD FE                 3877 	mov	r6,a
   0BFE 90 60 21           3878 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0001)
   0C01 E0                 3879 	movx	a,@dptr
   0C02 FF                 3880 	mov	r7,a
   0C03 53 07 0F           3881 	anl	ar7,#0x0F
   0C06 8D 82              3882 	mov	dpl,r5
   0C08 8E 83              3883 	mov	dph,r6
   0C0A EF                 3884 	mov	a,r7
   0C0B F0                 3885 	movx	@dptr,a
                           3886 ;	../../shared/src/cmd_if.c:360: speedtable[gen][spdoft_reg_selmupf_lane] = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1 & 0xf0)>>4;
   0C0C EB                 3887 	mov	a,r3
   0C0D 24 04              3888 	add	a,#_speedtable
   0C0F FB                 3889 	mov	r3,a
   0C10 EC                 3890 	mov	a,r4
   0C11 34 63              3891 	addc	a,#(_speedtable >> 8)
   0C13 FC                 3892 	mov	r4,a
   0C14 74 25              3893 	mov	a,#0x25
   0C16 2B                 3894 	add	a,r3
   0C17 FB                 3895 	mov	r3,a
   0C18 E4                 3896 	clr	a
   0C19 3C                 3897 	addc	a,r4
   0C1A FC                 3898 	mov	r4,a
   0C1B 90 60 21           3899 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0001)
   0C1E E0                 3900 	movx	a,@dptr
   0C1F 54 F0              3901 	anl	a,#0xF0
   0C21 C4                 3902 	swap	a
   0C22 54 0F              3903 	anl	a,#0x0f
   0C24 FD                 3904 	mov	r5,a
   0C25 8B 82              3905 	mov	dpl,r3
   0C27 8C 83              3906 	mov	dph,r4
   0C29 F0                 3907 	movx	@dptr,a
   0C2A                    3908 00105$:
                           3909 ;	../../shared/src/cmd_if.c:362: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = speedtable[gen][spdoft_rx_selmufi_lane]|(speedtable[gen][spdoft_rx_selmuff_lane]<<4);
   0C2A EA                 3910 	mov	a,r2
   0C2B 75 F0 50           3911 	mov	b,#0x50
   0C2E A4                 3912 	mul	ab
   0C2F FA                 3913 	mov	r2,a
   0C30 AB F0              3914 	mov	r3,b
   0C32 24 04              3915 	add	a,#_speedtable
   0C34 FC                 3916 	mov	r4,a
   0C35 EB                 3917 	mov	a,r3
   0C36 34 63              3918 	addc	a,#(_speedtable >> 8)
   0C38 FD                 3919 	mov	r5,a
   0C39 74 22              3920 	mov	a,#0x22
   0C3B 2C                 3921 	add	a,r4
   0C3C FC                 3922 	mov	r4,a
   0C3D E4                 3923 	clr	a
   0C3E 3D                 3924 	addc	a,r5
   0C3F FD                 3925 	mov	r5,a
   0C40 EA                 3926 	mov	a,r2
   0C41 24 04              3927 	add	a,#_speedtable
   0C43 FE                 3928 	mov	r6,a
   0C44 EB                 3929 	mov	a,r3
   0C45 34 63              3930 	addc	a,#(_speedtable >> 8)
   0C47 FF                 3931 	mov	r7,a
   0C48 74 23              3932 	mov	a,#0x23
   0C4A 2E                 3933 	add	a,r6
   0C4B F5 82              3934 	mov	dpl,a
   0C4D E4                 3935 	clr	a
   0C4E 3F                 3936 	addc	a,r7
   0C4F F5 83              3937 	mov	dph,a
   0C51 E0                 3938 	movx	a,@dptr
   0C52 C4                 3939 	swap	a
   0C53 54 F0              3940 	anl	a,#0xf0
   0C55 FE                 3941 	mov	r6,a
   0C56 8C 82              3942 	mov	dpl,r4
   0C58 8D 83              3943 	mov	dph,r5
   0C5A E0                 3944 	movx	a,@dptr
   0C5B 42 06              3945 	orl	ar6,a
   0C5D 90 60 24           3946 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0C60 EE                 3947 	mov	a,r6
   0C61 F0                 3948 	movx	@dptr,a
                           3949 ;	../../shared/src/cmd_if.c:363: lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = speedtable[gen][spdoft_reg_selmupi_lane]|(speedtable[gen][spdoft_reg_selmupf_lane]<<4);
   0C62 EA                 3950 	mov	a,r2
   0C63 24 04              3951 	add	a,#_speedtable
   0C65 FC                 3952 	mov	r4,a
   0C66 EB                 3953 	mov	a,r3
   0C67 34 63              3954 	addc	a,#(_speedtable >> 8)
   0C69 FD                 3955 	mov	r5,a
   0C6A 74 24              3956 	mov	a,#0x24
   0C6C 2C                 3957 	add	a,r4
   0C6D FC                 3958 	mov	r4,a
   0C6E E4                 3959 	clr	a
   0C6F 3D                 3960 	addc	a,r5
   0C70 FD                 3961 	mov	r5,a
   0C71 EA                 3962 	mov	a,r2
   0C72 24 04              3963 	add	a,#_speedtable
   0C74 FA                 3964 	mov	r2,a
   0C75 EB                 3965 	mov	a,r3
   0C76 34 63              3966 	addc	a,#(_speedtable >> 8)
   0C78 FB                 3967 	mov	r3,a
   0C79 74 25              3968 	mov	a,#0x25
   0C7B 2A                 3969 	add	a,r2
   0C7C F5 82              3970 	mov	dpl,a
   0C7E E4                 3971 	clr	a
   0C7F 3B                 3972 	addc	a,r3
   0C80 F5 83              3973 	mov	dph,a
   0C82 E0                 3974 	movx	a,@dptr
   0C83 C4                 3975 	swap	a
   0C84 54 F0              3976 	anl	a,#0xf0
   0C86 FA                 3977 	mov	r2,a
   0C87 8C 82              3978 	mov	dpl,r4
   0C89 8D 83              3979 	mov	dph,r5
   0C8B E0                 3980 	movx	a,@dptr
   0C8C FC                 3981 	mov	r4,a
   0C8D 42 02              3982 	orl	ar2,a
   0C8F 90 60 25           3983 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0001)
   0C92 EA                 3984 	mov	a,r2
   0C93 F0                 3985 	movx	@dptr,a
   0C94                    3986 00108$:
                           3987 ;	../../shared/src/cmd_if.c:365: return 0;
   0C94 75 82 00           3988 	mov	dpl,#0x00
   0C97 D0 18              3989 	pop	_bp
   0C99 22                 3990 	ret
                           3991 ;------------------------------------------------------------
                           3992 ;Allocation info for local variables in function 'cmd_tx_margin'
                           3993 ;------------------------------------------------------------
                           3994 ;cmd_code                  Allocated to registers r2 
                           3995 ;------------------------------------------------------------
                           3996 ;	../../shared/src/cmd_if.c:368: uint8_t cmd_tx_margin(uint8_t cmd_code) CMD_BANK {
                           3997 ;	-----------------------------------------
                           3998 ;	 function cmd_tx_margin
                           3999 ;	-----------------------------------------
   0C9A                    4000 _cmd_tx_margin:
   0C9A AA 82              4001 	mov	r2,dpl
                           4002 ;	../../shared/src/cmd_if.c:370: if(phy_mode== PCIE) return CMD_ST_NA;
   0C9C 90 A3 16           4003 	mov	dptr,#(_SYSTEM + 0x0002)
   0C9F E0                 4004 	movx	a,@dptr
   0CA0 54 07              4005 	anl	a,#0x07
   0CA2 FB                 4006 	mov	r3,a
   0CA3 BB 03 04           4007 	cjne	r3,#0x03,00102$
   0CA6 75 82 02           4008 	mov	dpl,#0x02
   0CA9 22                 4009 	ret
   0CAA                    4010 00102$:
                           4011 ;	../../shared/src/cmd_if.c:372: if (cmd_code==CMD_TX_MARGIN_SET) {
   0CAA BA 0A 16           4012 	cjne	r2,#0x0A,00104$
                           4013 ;	../../shared/src/cmd_if.c:373: reg_TX_MARGIN_V0_LANE_2_0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x07;
   0CAD 90 60 20           4014 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0CB0 E0                 4015 	movx	a,@dptr
   0CB1 FA                 4016 	mov	r2,a
   0CB2 53 02 07           4017 	anl	ar2,#0x07
   0CB5 90 26 58           4018 	mov	dptr,#_TX_AMP_CTRL_REG0
   0CB8 EA                 4019 	mov	a,r2
   0CB9 54 07              4020 	anl	a,#0x07
   0CBB F5 F0              4021 	mov	b,a
   0CBD E0                 4022 	movx	a,@dptr
   0CBE 54 F8              4023 	anl	a,#0xf8
   0CC0 45 F0              4024 	orl	a,b
   0CC2 F0                 4025 	movx	@dptr,a
   0CC3                    4026 00104$:
                           4027 ;	../../shared/src/cmd_if.c:375: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = reg_TX_MARGIN_V0_LANE_2_0;
   0CC3 90 26 58           4028 	mov	dptr,#_TX_AMP_CTRL_REG0
   0CC6 E0                 4029 	movx	a,@dptr
   0CC7 54 07              4030 	anl	a,#0x07
   0CC9 FA                 4031 	mov	r2,a
   0CCA 90 60 24           4032 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0CCD EA                 4033 	mov	a,r2
   0CCE F0                 4034 	movx	@dptr,a
                           4035 ;	../../shared/src/cmd_if.c:377: return 0;
   0CCF 75 82 00           4036 	mov	dpl,#0x00
   0CD2 22                 4037 	ret
                           4038 ;------------------------------------------------------------
                           4039 ;Allocation info for local variables in function 'cmd_remote_tx_preset_index'
                           4040 ;------------------------------------------------------------
                           4041 ;cmd_code                  Allocated to registers r2 
                           4042 ;------------------------------------------------------------
                           4043 ;	../../shared/src/cmd_if.c:380: uint8_t cmd_remote_tx_preset_index(uint8_t cmd_code) CMD_BANK {
                           4044 ;	-----------------------------------------
                           4045 ;	 function cmd_remote_tx_preset_index
                           4046 ;	-----------------------------------------
   0CD3                    4047 _cmd_remote_tx_preset_index:
   0CD3 AA 82              4048 	mov	r2,dpl
                           4049 ;	../../shared/src/cmd_if.c:381: if(phy_mode==PCIE || phy_mode==USB) return CMD_ST_NA;	
   0CD5 90 A3 16           4050 	mov	dptr,#(_SYSTEM + 0x0002)
   0CD8 E0                 4051 	movx	a,@dptr
   0CD9 54 07              4052 	anl	a,#0x07
   0CDB FB                 4053 	mov	r3,a
   0CDC BB 03 02           4054 	cjne	r3,#0x03,00114$
   0CDF 80 0A              4055 	sjmp	00101$
   0CE1                    4056 00114$:
   0CE1 90 A3 16           4057 	mov	dptr,#(_SYSTEM + 0x0002)
   0CE4 E0                 4058 	movx	a,@dptr
   0CE5 54 07              4059 	anl	a,#0x07
   0CE7 FB                 4060 	mov	r3,a
   0CE8 BB 05 04           4061 	cjne	r3,#0x05,00102$
   0CEB                    4062 00101$:
   0CEB 75 82 02           4063 	mov	dpl,#0x02
   0CEE 22                 4064 	ret
   0CEF                    4065 00102$:
                           4066 ;	../../shared/src/cmd_if.c:382: if( lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 > 5 || lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0==0) return CMD_ST_INVALID_VALUE;
   0CEF 90 60 20           4067 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0CF2 E0                 4068 	movx	a,@dptr
   0CF3 FB                 4069 	mov	r3,a
   0CF4 74 05              4070 	mov	a,#0x05
   0CF6 B5 03 00           4071 	cjne	a,ar3,00117$
   0CF9                    4072 00117$:
   0CF9 40 06              4073 	jc	00104$
   0CFB 90 60 20           4074 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0CFE E0                 4075 	movx	a,@dptr
   0CFF 70 04              4076 	jnz	00105$
   0D01                    4077 00104$:
   0D01 75 82 04           4078 	mov	dpl,#0x04
   0D04 22                 4079 	ret
   0D05                    4080 00105$:
                           4081 ;	../../shared/src/cmd_if.c:384: if(cmd_code==CMD_TX_REMOTE_PRESET_INX_SET) {
   0D05 EA                 4082 	mov	a,r2
   0D06 70 09              4083 	jnz	00108$
                           4084 ;	../../shared/src/cmd_if.c:385: lnx_spdoft_tx_preset_index_lane = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0;
   0D08 90 60 20           4085 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0D0B E0                 4086 	movx	a,@dptr
   0D0C FA                 4087 	mov	r2,a
   0D0D 90 66 66           4088 	mov	dptr,#_lnx_spdoft_tx_preset_index_lane
   0D10 F0                 4089 	movx	@dptr,a
   0D11                    4090 00108$:
                           4091 ;	../../shared/src/cmd_if.c:387: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = lnx_spdoft_tx_preset_index_lane;
   0D11 90 66 66           4092 	mov	dptr,#_lnx_spdoft_tx_preset_index_lane
   0D14 E0                 4093 	movx	a,@dptr
   0D15 FA                 4094 	mov	r2,a
   0D16 90 60 24           4095 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0D19 EA                 4096 	mov	a,r2
   0D1A F0                 4097 	movx	@dptr,a
                           4098 ;	../../shared/src/cmd_if.c:388: return 0;	
   0D1B 75 82 00           4099 	mov	dpl,#0x00
   0D1E 22                 4100 	ret
                           4101 ;------------------------------------------------------------
                           4102 ;Allocation info for local variables in function 'cmd_tx_preset'
                           4103 ;------------------------------------------------------------
                           4104 ;cmd_code                  Allocated to registers r2 
                           4105 ;inx                       Allocated to registers r3 
                           4106 ;------------------------------------------------------------
                           4107 ;	../../shared/src/cmd_if.c:419: uint8_t cmd_tx_preset(uint8_t cmd_code) CMD_BANK {
                           4108 ;	-----------------------------------------
                           4109 ;	 function cmd_tx_preset
                           4110 ;	-----------------------------------------
   0D1F                    4111 _cmd_tx_preset:
   0D1F AA 82              4112 	mov	r2,dpl
                           4113 ;	../../shared/src/cmd_if.c:424: if(phy_mode==PCIE || phy_mode==USB) {
   0D21 90 A3 16           4114 	mov	dptr,#(_SYSTEM + 0x0002)
   0D24 E0                 4115 	movx	a,@dptr
   0D25 54 07              4116 	anl	a,#0x07
   0D27 FB                 4117 	mov	r3,a
   0D28 BB 03 02           4118 	cjne	r3,#0x03,00114$
   0D2B 80 0A              4119 	sjmp	00101$
   0D2D                    4120 00114$:
   0D2D 90 A3 16           4121 	mov	dptr,#(_SYSTEM + 0x0002)
   0D30 E0                 4122 	movx	a,@dptr
   0D31 54 07              4123 	anl	a,#0x07
   0D33 FB                 4124 	mov	r3,a
   0D34 BB 05 04           4125 	cjne	r3,#0x05,00102$
   0D37                    4126 00101$:
                           4127 ;	../../shared/src/cmd_if.c:425: return CMD_ST_INVALID_CMD;
   0D37 75 82 01           4128 	mov	dpl,#0x01
   0D3A 22                 4129 	ret
   0D3B                    4130 00102$:
                           4131 ;	../../shared/src/cmd_if.c:428: inx = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2 & 0x0f;
   0D3B 90 60 22           4132 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0002)
   0D3E E0                 4133 	movx	a,@dptr
   0D3F FB                 4134 	mov	r3,a
   0D40 53 03 0F           4135 	anl	ar3,#0x0F
                           4136 ;	../../shared/src/cmd_if.c:429: if( inx > 5 || inx==0) return CMD_ST_INVALID_VALUE;
   0D43 74 05              4137 	mov	a,#0x05
   0D45 B5 03 00           4138 	cjne	a,ar3,00117$
   0D48                    4139 00117$:
   0D48 40 03              4140 	jc	00104$
   0D4A EB                 4141 	mov	a,r3
   0D4B 70 04              4142 	jnz	00105$
   0D4D                    4143 00104$:
   0D4D 75 82 04           4144 	mov	dpl,#0x04
   0D50 22                 4145 	ret
   0D51                    4146 00105$:
                           4147 ;	../../shared/src/cmd_if.c:431: if(cmd_code==CMD_TX_PRESET_SET) {
   0D51 BA 02 2D           4148 	cjne	r2,#0x02,00108$
                           4149 ;	../../shared/src/cmd_if.c:432: local_tx_preset_tb[inx][1] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1;
   0D54 EB                 4150 	mov	a,r3
   0D55 2B                 4151 	add	a,r3
   0D56 FA                 4152 	mov	r2,a
   0D57 24 B0              4153 	add	a,#_local_tx_preset_tb
   0D59 FC                 4154 	mov	r4,a
   0D5A E4                 4155 	clr	a
   0D5B 34 E6              4156 	addc	a,#(_local_tx_preset_tb >> 8)
   0D5D FD                 4157 	mov	r5,a
   0D5E 0C                 4158 	inc	r4
   0D5F BC 00 01           4159 	cjne	r4,#0x00,00122$
   0D62 0D                 4160 	inc	r5
   0D63                    4161 00122$:
   0D63 90 60 21           4162 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0001)
   0D66 E0                 4163 	movx	a,@dptr
   0D67 FE                 4164 	mov	r6,a
   0D68 8C 82              4165 	mov	dpl,r4
   0D6A 8D 83              4166 	mov	dph,r5
   0D6C EE                 4167 	mov	a,r6
   0D6D F0                 4168 	movx	@dptr,a
                           4169 ;	../../shared/src/cmd_if.c:433: local_tx_preset_tb[inx][0] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0;
   0D6E EA                 4170 	mov	a,r2
   0D6F 24 B0              4171 	add	a,#_local_tx_preset_tb
   0D71 FA                 4172 	mov	r2,a
   0D72 E4                 4173 	clr	a
   0D73 34 E6              4174 	addc	a,#(_local_tx_preset_tb >> 8)
   0D75 FC                 4175 	mov	r4,a
   0D76 90 60 20           4176 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0D79 E0                 4177 	movx	a,@dptr
   0D7A FD                 4178 	mov	r5,a
   0D7B 8A 82              4179 	mov	dpl,r2
   0D7D 8C 83              4180 	mov	dph,r4
   0D7F ED                 4181 	mov	a,r5
   0D80 F0                 4182 	movx	@dptr,a
   0D81                    4183 00108$:
                           4184 ;	../../shared/src/cmd_if.c:436: lnx_PHY_LOCAL_VALUE_LANE_31_0_b2 = inx;
   0D81 90 60 26           4185 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0002)
   0D84 EB                 4186 	mov	a,r3
   0D85 F0                 4187 	movx	@dptr,a
                           4188 ;	../../shared/src/cmd_if.c:437: lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = local_tx_preset_tb[inx][1];
   0D86 EB                 4189 	mov	a,r3
   0D87 2B                 4190 	add	a,r3
   0D88 FB                 4191 	mov	r3,a
   0D89 24 B0              4192 	add	a,#_local_tx_preset_tb
   0D8B FA                 4193 	mov	r2,a
   0D8C E4                 4194 	clr	a
   0D8D 34 E6              4195 	addc	a,#(_local_tx_preset_tb >> 8)
   0D8F FC                 4196 	mov	r4,a
   0D90 8A 82              4197 	mov	dpl,r2
   0D92 8C 83              4198 	mov	dph,r4
   0D94 A3                 4199 	inc	dptr
   0D95 E0                 4200 	movx	a,@dptr
   0D96 FA                 4201 	mov	r2,a
   0D97 90 60 25           4202 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0001)
   0D9A EA                 4203 	mov	a,r2
   0D9B F0                 4204 	movx	@dptr,a
                           4205 ;	../../shared/src/cmd_if.c:438: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = local_tx_preset_tb[inx][0];
   0D9C EB                 4206 	mov	a,r3
   0D9D 24 B0              4207 	add	a,#_local_tx_preset_tb
   0D9F F5 82              4208 	mov	dpl,a
   0DA1 E4                 4209 	clr	a
   0DA2 34 E6              4210 	addc	a,#(_local_tx_preset_tb >> 8)
   0DA4 F5 83              4211 	mov	dph,a
   0DA6 E0                 4212 	movx	a,@dptr
   0DA7 FA                 4213 	mov	r2,a
   0DA8 90 60 24           4214 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0DAB EA                 4215 	mov	a,r2
   0DAC F0                 4216 	movx	@dptr,a
                           4217 ;	../../shared/src/cmd_if.c:440: return 0;
   0DAD 75 82 00           4218 	mov	dpl,#0x00
   0DB0 22                 4219 	ret
                           4220 ;------------------------------------------------------------
                           4221 ;Allocation info for local variables in function 'cmd_local_tx_preset_index'
                           4222 ;------------------------------------------------------------
                           4223 ;cmd_code                  Allocated to registers r2 
                           4224 ;------------------------------------------------------------
                           4225 ;	../../shared/src/cmd_if.c:443: uint8_t cmd_local_tx_preset_index(uint8_t cmd_code) CMD_BANK {
                           4226 ;	-----------------------------------------
                           4227 ;	 function cmd_local_tx_preset_index
                           4228 ;	-----------------------------------------
   0DB1                    4229 _cmd_local_tx_preset_index:
   0DB1 AA 82              4230 	mov	r2,dpl
                           4231 ;	../../shared/src/cmd_if.c:444: if(phy_mode==PCIE || phy_mode==USB) return CMD_ST_NA;
   0DB3 90 A3 16           4232 	mov	dptr,#(_SYSTEM + 0x0002)
   0DB6 E0                 4233 	movx	a,@dptr
   0DB7 54 07              4234 	anl	a,#0x07
   0DB9 FB                 4235 	mov	r3,a
   0DBA BB 03 02           4236 	cjne	r3,#0x03,00114$
   0DBD 80 0A              4237 	sjmp	00101$
   0DBF                    4238 00114$:
   0DBF 90 A3 16           4239 	mov	dptr,#(_SYSTEM + 0x0002)
   0DC2 E0                 4240 	movx	a,@dptr
   0DC3 54 07              4241 	anl	a,#0x07
   0DC5 FB                 4242 	mov	r3,a
   0DC6 BB 05 04           4243 	cjne	r3,#0x05,00102$
   0DC9                    4244 00101$:
   0DC9 75 82 02           4245 	mov	dpl,#0x02
   0DCC 22                 4246 	ret
   0DCD                    4247 00102$:
                           4248 ;	../../shared/src/cmd_if.c:445: if( lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 > 5 || lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0==0) return CMD_ST_INVALID_VALUE;
   0DCD 90 60 20           4249 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0DD0 E0                 4250 	movx	a,@dptr
   0DD1 FB                 4251 	mov	r3,a
   0DD2 74 05              4252 	mov	a,#0x05
   0DD4 B5 03 00           4253 	cjne	a,ar3,00117$
   0DD7                    4254 00117$:
   0DD7 40 06              4255 	jc	00104$
   0DD9 90 60 20           4256 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0DDC E0                 4257 	movx	a,@dptr
   0DDD 70 04              4258 	jnz	00105$
   0DDF                    4259 00104$:
   0DDF 75 82 04           4260 	mov	dpl,#0x04
   0DE2 22                 4261 	ret
   0DE3                    4262 00105$:
                           4263 ;	../../shared/src/cmd_if.c:447: if(cmd_code==CMD_TX_LOCAL_PRESET_INX_SET) {
   0DE3 BA 04 12           4264 	cjne	r2,#0x04,00108$
                           4265 ;	../../shared/src/cmd_if.c:448: cmx_LOCAL_TX_PRESET_INDEX_3_0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0;
   0DE6 90 60 20           4266 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0DE9 E0                 4267 	movx	a,@dptr
   0DEA FA                 4268 	mov	r2,a
   0DEB 90 E6 2B           4269 	mov	dptr,#(_TRAIN_IF_CONFIG + 0x0003)
   0DEE 54 0F              4270 	anl	a,#0x0f
   0DF0 F5 F0              4271 	mov	b,a
   0DF2 E0                 4272 	movx	a,@dptr
   0DF3 54 F0              4273 	anl	a,#0xf0
   0DF5 45 F0              4274 	orl	a,b
   0DF7 F0                 4275 	movx	@dptr,a
   0DF8                    4276 00108$:
                           4277 ;	../../shared/src/cmd_if.c:450: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = cmx_LOCAL_TX_PRESET_INDEX_3_0;
   0DF8 90 E6 2B           4278 	mov	dptr,#(_TRAIN_IF_CONFIG + 0x0003)
   0DFB E0                 4279 	movx	a,@dptr
   0DFC 54 0F              4280 	anl	a,#0x0f
   0DFE 90 60 24           4281 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0E01 F0                 4282 	movx	@dptr,a
                           4283 ;	../../shared/src/cmd_if.c:451: return 0;
   0E02 75 82 00           4284 	mov	dpl,#0x00
   0E05 22                 4285 	ret
                           4286 ;------------------------------------------------------------
                           4287 ;Allocation info for local variables in function 'cmd_ssc'
                           4288 ;------------------------------------------------------------
                           4289 ;cmd_code                  Allocated to stack - offset -3
                           4290 ;gen                       Allocated to registers r2 
                           4291 ;------------------------------------------------------------
                           4292 ;	../../shared/src/cmd_if.c:455: uint8_t cmd_ssc(uint8_t gen,  uint8_t cmd_code) CMD_BANK {
                           4293 ;	-----------------------------------------
                           4294 ;	 function cmd_ssc
                           4295 ;	-----------------------------------------
   0E06                    4296 _cmd_ssc:
   0E06 C0 18              4297 	push	_bp
   0E08 85 81 18           4298 	mov	_bp,sp
   0E0B AA 82              4299 	mov	r2,dpl
                           4300 ;	../../shared/src/cmd_if.c:457: if(gen==0x80) { //current ana
   0E0D BA 80 02           4301 	cjne	r2,#0x80,00126$
   0E10 80 03              4302 	sjmp	00127$
   0E12                    4303 00126$:
   0E12 02 0E CC           4304 	ljmp	00116$
   0E15                    4305 00127$:
                           4306 ;	../../shared/src/cmd_if.c:459: if(cmd_code==CMD_TX_SSC_GET) {
   0E15 E5 18              4307 	mov	a,_bp
   0E17 24 FD              4308 	add	a,#0xfd
   0E19 F8                 4309 	mov	r0,a
   0E1A B6 09 45           4310 	cjne	@r0,#0x09,00111$
                           4311 ;	../../shared/src/cmd_if.c:460: lnx_PHY_LOCAL_VALUE_LANE_31_0_b2 = reg_SSC_EN_LANE;
   0E1D 90 20 0C           4312 	mov	dptr,#_INPUT_TX_PIN_REG1_LANE
   0E20 E0                 4313 	movx	a,@dptr
   0E21 03                 4314 	rr	a
   0E22 03                 4315 	rr	a
   0E23 54 01              4316 	anl	a,#0x01
   0E25 FB                 4317 	mov	r3,a
   0E26 90 60 26           4318 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0002)
   0E29 F0                 4319 	movx	@dptr,a
                           4320 ;	../../shared/src/cmd_if.c:461: if(use_ring_pll) {
   0E2A 30 10 1B           4321 	jnb	_use_ring_pll,00102$
                           4322 ;	../../shared/src/cmd_if.c:466: lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = reg_SSC_DSPREAD_TX_RING;
   0E2D 90 A0 13           4323 	mov	dptr,#(_DTX_REG2 + 0x0003)
   0E30 E0                 4324 	movx	a,@dptr
   0E31 23                 4325 	rl	a
   0E32 23                 4326 	rl	a
   0E33 54 01              4327 	anl	a,#0x01
   0E35 90 60 25           4328 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0001)
   0E38 F0                 4329 	movx	@dptr,a
                           4330 ;	../../shared/src/cmd_if.c:467: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = reg_SSC_AMP_RING_6_0;
   0E39 90 A0 1B           4331 	mov	dptr,#(_DTX_REG4 + 0x0003)
   0E3C E0                 4332 	movx	a,@dptr
   0E3D 03                 4333 	rr	a
   0E3E 54 7F              4334 	anl	a,#0x7f
   0E40 FB                 4335 	mov	r3,a
   0E41 90 60 24           4336 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0E44 F0                 4337 	movx	@dptr,a
   0E45 02 0F 86           4338 	ljmp	00117$
   0E48                    4339 00102$:
                           4340 ;	../../shared/src/cmd_if.c:471: lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = reg_SSC_DSPREAD_TX;
   0E48 90 A0 0B           4341 	mov	dptr,#(_DTX_REG0 + 0x0003)
   0E4B E0                 4342 	movx	a,@dptr
   0E4C 23                 4343 	rl	a
   0E4D 23                 4344 	rl	a
   0E4E 54 01              4345 	anl	a,#0x01
   0E50 90 60 25           4346 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0001)
   0E53 F0                 4347 	movx	@dptr,a
                           4348 ;	../../shared/src/cmd_if.c:472: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = reg_SSC_AMP_6_0;
   0E54 90 A0 12           4349 	mov	dptr,#(_DTX_REG2 + 0x0002)
   0E57 E0                 4350 	movx	a,@dptr
   0E58 54 7F              4351 	anl	a,#0x7f
   0E5A FB                 4352 	mov	r3,a
   0E5B 90 60 24           4353 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0E5E F0                 4354 	movx	@dptr,a
   0E5F 02 0F 86           4355 	ljmp	00117$
   0E62                    4356 00111$:
                           4357 ;	../../shared/src/cmd_if.c:476: reg_SSC_EN_FM_REG_LANE = 1;
   0E62 90 20 0C           4358 	mov	dptr,#_INPUT_TX_PIN_REG1_LANE
   0E65 E0                 4359 	movx	a,@dptr
   0E66 44 02              4360 	orl	a,#0x02
   0E68 F0                 4361 	movx	@dptr,a
                           4362 ;	../../shared/src/cmd_if.c:477: if(lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2&0x01) {
   0E69 90 60 22           4363 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0002)
   0E6C E0                 4364 	movx	a,@dptr
   0E6D FB                 4365 	mov	r3,a
   0E6E 30 E0 09           4366 	jnb	acc.0,00105$
                           4367 ;	../../shared/src/cmd_if.c:478: reg_SSC_EN_LANE = 1;
   0E71 90 20 0C           4368 	mov	dptr,#_INPUT_TX_PIN_REG1_LANE
   0E74 E0                 4369 	movx	a,@dptr
   0E75 44 04              4370 	orl	a,#0x04
   0E77 F0                 4371 	movx	@dptr,a
   0E78 80 07              4372 	sjmp	00106$
   0E7A                    4373 00105$:
                           4374 ;	../../shared/src/cmd_if.c:481: reg_SSC_EN_LANE = 0;
   0E7A 90 20 0C           4375 	mov	dptr,#_INPUT_TX_PIN_REG1_LANE
   0E7D E0                 4376 	movx	a,@dptr
   0E7E 54 FB              4377 	anl	a,#0xfb
   0E80 F0                 4378 	movx	@dptr,a
   0E81                    4379 00106$:
                           4380 ;	../../shared/src/cmd_if.c:484: if(use_ring_pll) {
   0E81 30 10 25           4381 	jnb	_use_ring_pll,00108$
                           4382 ;	../../shared/src/cmd_if.c:489: reg_SSC_DSPREAD_TX_RING	=  lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1&0x01;
   0E84 90 60 21           4383 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0001)
   0E87 E0                 4384 	movx	a,@dptr
   0E88 54 01              4385 	anl	a,#0x01
   0E8A 90 A0 13           4386 	mov	dptr,#(_DTX_REG2 + 0x0003)
   0E8D 13                 4387 	rrc	a
   0E8E E0                 4388 	movx	a,@dptr
   0E8F 92 E6              4389 	mov	acc.6,c
   0E91 F0                 4390 	movx	@dptr,a
                           4391 ;	../../shared/src/cmd_if.c:490: reg_SSC_AMP_RING_6_0 =  lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0;
   0E92 90 60 20           4392 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0E95 E0                 4393 	movx	a,@dptr
   0E96 FB                 4394 	mov	r3,a
   0E97 90 A0 1B           4395 	mov	dptr,#(_DTX_REG4 + 0x0003)
   0E9A 25 E0              4396 	add	a,acc
   0E9C 54 FE              4397 	anl	a,#0xfe
   0E9E F5 F0              4398 	mov	b,a
   0EA0 E0                 4399 	movx	a,@dptr
   0EA1 54 01              4400 	anl	a,#0x01
   0EA3 45 F0              4401 	orl	a,b
   0EA5 F0                 4402 	movx	@dptr,a
   0EA6 02 0F 86           4403 	ljmp	00117$
   0EA9                    4404 00108$:
                           4405 ;	../../shared/src/cmd_if.c:494: reg_SSC_DSPREAD_TX = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1&0x01;
   0EA9 90 60 21           4406 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0001)
   0EAC E0                 4407 	movx	a,@dptr
   0EAD 54 01              4408 	anl	a,#0x01
   0EAF 90 A0 0B           4409 	mov	dptr,#(_DTX_REG0 + 0x0003)
   0EB2 13                 4410 	rrc	a
   0EB3 E0                 4411 	movx	a,@dptr
   0EB4 92 E6              4412 	mov	acc.6,c
   0EB6 F0                 4413 	movx	@dptr,a
                           4414 ;	../../shared/src/cmd_if.c:495: reg_SSC_AMP_6_0	= lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0;
   0EB7 90 60 20           4415 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0EBA E0                 4416 	movx	a,@dptr
   0EBB FB                 4417 	mov	r3,a
   0EBC 90 A0 12           4418 	mov	dptr,#(_DTX_REG2 + 0x0002)
   0EBF 54 7F              4419 	anl	a,#0x7f
   0EC1 F5 F0              4420 	mov	b,a
   0EC3 E0                 4421 	movx	a,@dptr
   0EC4 54 80              4422 	anl	a,#0x80
   0EC6 45 F0              4423 	orl	a,b
   0EC8 F0                 4424 	movx	@dptr,a
   0EC9 02 0F 86           4425 	ljmp	00117$
   0ECC                    4426 00116$:
                           4427 ;	../../shared/src/cmd_if.c:500: if(cmd_code==CMD_TX_SSC_SET) {
   0ECC E5 18              4428 	mov	a,_bp
   0ECE 24 FD              4429 	add	a,#0xfd
   0ED0 F8                 4430 	mov	r0,a
   0ED1 B6 08 6E           4431 	cjne	@r0,#0x08,00114$
                           4432 ;	../../shared/src/cmd_if.c:501: cmx_TX_SSC_CTRL_SEL = 1; //1:cmd_if, 0:reg/pin
   0ED4 90 E6 13           4433 	mov	dptr,#(_CONTROL_CONFIG3 + 0x0003)
   0ED7 E0                 4434 	movx	a,@dptr
   0ED8 44 10              4435 	orl	a,#0x10
   0EDA F0                 4436 	movx	@dptr,a
                           4437 ;	../../shared/src/cmd_if.c:502: train_save_tb[gen].ssc_en = ((lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2&0x01)==0x01);
   0EDB EA                 4438 	mov	a,r2
   0EDC 2A                 4439 	add	a,r2
   0EDD 25 E0              4440 	add	a,acc
   0EDF FB                 4441 	mov	r3,a
   0EE0 24 98              4442 	add	a,#_train_save_tb
   0EE2 FC                 4443 	mov	r4,a
   0EE3 E4                 4444 	clr	a
   0EE4 34 E6              4445 	addc	a,#(_train_save_tb >> 8)
   0EE6 FD                 4446 	mov	r5,a
   0EE7 90 60 22           4447 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0002)
   0EEA E0                 4448 	movx	a,@dptr
   0EEB FE                 4449 	mov	r6,a
   0EEC 53 06 01           4450 	anl	ar6,#0x01
   0EEF BE 01 03           4451 	cjne	r6,#0x01,00135$
   0EF2 D3                 4452 	setb	c
   0EF3 80 01              4453 	sjmp	00136$
   0EF5                    4454 00135$:
   0EF5 C3                 4455 	clr	c
   0EF6                    4456 00136$:
   0EF6 92 28              4457 	mov  b0,c
   0EF8 E4                 4458 	clr	a
   0EF9 33                 4459 	rlc	a
   0EFA 8C 82              4460 	mov	dpl,r4
   0EFC 8D 83              4461 	mov	dph,r5
   0EFE 13                 4462 	rrc	a
   0EFF E0                 4463 	movx	a,@dptr
   0F00 92 E0              4464 	mov	acc.0,c
   0F02 F0                 4465 	movx	@dptr,a
                           4466 ;	../../shared/src/cmd_if.c:503: tx_tb[gen].ssc_amp = 	lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0;
   0F03 EB                 4467 	mov	a,r3
   0F04 24 84              4468 	add	a,#_tx_tb
   0F06 FC                 4469 	mov	r4,a
   0F07 E4                 4470 	clr	a
   0F08 34 E6              4471 	addc	a,#(_tx_tb >> 8)
   0F0A FD                 4472 	mov	r5,a
   0F0B 74 03              4473 	mov	a,#0x03
   0F0D 2C                 4474 	add	a,r4
   0F0E FC                 4475 	mov	r4,a
   0F0F E4                 4476 	clr	a
   0F10 3D                 4477 	addc	a,r5
   0F11 FD                 4478 	mov	r5,a
   0F12 90 60 20           4479 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0F15 E0                 4480 	movx	a,@dptr
   0F16 FE                 4481 	mov	r6,a
   0F17 8C 82              4482 	mov	dpl,r4
   0F19 8D 83              4483 	mov	dph,r5
   0F1B 54 7F              4484 	anl	a,#0x7f
   0F1D F5 F0              4485 	mov	b,a
   0F1F E0                 4486 	movx	a,@dptr
   0F20 54 80              4487 	anl	a,#0x80
   0F22 45 F0              4488 	orl	a,b
   0F24 F0                 4489 	movx	@dptr,a
                           4490 ;	../../shared/src/cmd_if.c:504: tx_tb[gen].ssc_dspread = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1;
   0F25 EB                 4491 	mov	a,r3
   0F26 24 84              4492 	add	a,#_tx_tb
   0F28 FB                 4493 	mov	r3,a
   0F29 E4                 4494 	clr	a
   0F2A 34 E6              4495 	addc	a,#(_tx_tb >> 8)
   0F2C FC                 4496 	mov	r4,a
   0F2D 74 03              4497 	mov	a,#0x03
   0F2F 2B                 4498 	add	a,r3
   0F30 FB                 4499 	mov	r3,a
   0F31 E4                 4500 	clr	a
   0F32 3C                 4501 	addc	a,r4
   0F33 FC                 4502 	mov	r4,a
   0F34 90 60 21           4503 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0001)
   0F37 E0                 4504 	movx	a,@dptr
   0F38 FD                 4505 	mov	r5,a
   0F39 8B 82              4506 	mov	dpl,r3
   0F3B 8C 83              4507 	mov	dph,r4
   0F3D 13                 4508 	rrc	a
   0F3E E0                 4509 	movx	a,@dptr
   0F3F 92 E7              4510 	mov	acc.7,c
   0F41 F0                 4511 	movx	@dptr,a
   0F42                    4512 00114$:
                           4513 ;	../../shared/src/cmd_if.c:506: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = tx_tb[gen].ssc_amp;
   0F42 EA                 4514 	mov	a,r2
   0F43 2A                 4515 	add	a,r2
   0F44 25 E0              4516 	add	a,acc
   0F46 FA                 4517 	mov	r2,a
   0F47 24 84              4518 	add	a,#_tx_tb
   0F49 FB                 4519 	mov	r3,a
   0F4A E4                 4520 	clr	a
   0F4B 34 E6              4521 	addc	a,#(_tx_tb >> 8)
   0F4D FC                 4522 	mov	r4,a
   0F4E 8B 82              4523 	mov	dpl,r3
   0F50 8C 83              4524 	mov	dph,r4
   0F52 A3                 4525 	inc	dptr
   0F53 A3                 4526 	inc	dptr
   0F54 A3                 4527 	inc	dptr
   0F55 E0                 4528 	movx	a,@dptr
   0F56 54 7F              4529 	anl	a,#0x7f
   0F58 90 60 24           4530 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0F5B F0                 4531 	movx	@dptr,a
                           4532 ;	../../shared/src/cmd_if.c:507: lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = tx_tb[gen].ssc_dspread;
   0F5C EA                 4533 	mov	a,r2
   0F5D 24 84              4534 	add	a,#_tx_tb
   0F5F FB                 4535 	mov	r3,a
   0F60 E4                 4536 	clr	a
   0F61 34 E6              4537 	addc	a,#(_tx_tb >> 8)
   0F63 FC                 4538 	mov	r4,a
   0F64 8B 82              4539 	mov	dpl,r3
   0F66 8C 83              4540 	mov	dph,r4
   0F68 A3                 4541 	inc	dptr
   0F69 A3                 4542 	inc	dptr
   0F6A A3                 4543 	inc	dptr
   0F6B E0                 4544 	movx	a,@dptr
   0F6C 23                 4545 	rl	a
   0F6D 54 01              4546 	anl	a,#0x01
   0F6F FB                 4547 	mov	r3,a
   0F70 90 60 25           4548 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0001)
   0F73 F0                 4549 	movx	@dptr,a
                           4550 ;	../../shared/src/cmd_if.c:508: lnx_PHY_LOCAL_VALUE_LANE_31_0_b2 = train_save_tb[gen].ssc_en;
   0F74 EA                 4551 	mov	a,r2
   0F75 24 98              4552 	add	a,#_train_save_tb
   0F77 F5 82              4553 	mov	dpl,a
   0F79 E4                 4554 	clr	a
   0F7A 34 E6              4555 	addc	a,#(_train_save_tb >> 8)
   0F7C F5 83              4556 	mov	dph,a
   0F7E E0                 4557 	movx	a,@dptr
   0F7F 54 01              4558 	anl	a,#0x01
   0F81 FA                 4559 	mov	r2,a
   0F82 90 60 26           4560 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0002)
   0F85 F0                 4561 	movx	@dptr,a
   0F86                    4562 00117$:
                           4563 ;	../../shared/src/cmd_if.c:510: return 0;
   0F86 75 82 00           4564 	mov	dpl,#0x00
   0F89 D0 18              4565 	pop	_bp
   0F8B 22                 4566 	ret
                           4567 ;------------------------------------------------------------
                           4568 ;Allocation info for local variables in function 'cmd_rx_imp_cal'
                           4569 ;------------------------------------------------------------
                           4570 ;error_flg                 Allocated to registers r2 
                           4571 ;------------------------------------------------------------
                           4572 ;	../../shared/src/cmd_if.c:513: uint8_t cmd_rx_imp_cal(void) CMD_BANK {
                           4573 ;	-----------------------------------------
                           4574 ;	 function cmd_rx_imp_cal
                           4575 ;	-----------------------------------------
   0F8C                    4576 _cmd_rx_imp_cal:
                           4577 ;	../../shared/src/cmd_if.c:516: error_flg = 0;
   0F8C 7A 00              4578 	mov	r2,#0x00
                           4579 ;	../../shared/src/cmd_if.c:517: if(reg_PIN_PLL_READY_RX_LANE==0) error_flg = CMD_ST_NA;
   0F8E 90 21 02           4580 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   0F91 E0                 4581 	movx	a,@dptr
   0F92 20 E6 04           4582 	jb	acc.6,00102$
   0F95 7A 02              4583 	mov	r2,#0x02
   0F97 80 21              4584 	sjmp	00103$
   0F99                    4585 00102$:
                           4586 ;	../../shared/src/cmd_if.c:519: reg_RXIMPCAL_EN	= 1;
   0F99 90 82 00           4587 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_128
   0F9C E0                 4588 	movx	a,@dptr
   0F9D 44 04              4589 	orl	a,#0x04
   0F9F F0                 4590 	movx	@dptr,a
                           4591 ;	../../shared/src/cmd_if.c:520: rximp_cal();
   0FA0 C0 02              4592 	push	ar2
   0FA2 78 8E              4593 	mov	r0,#_rximp_cal
   0FA4 79 BA              4594 	mov	r1,#(_rximp_cal >> 8)
   0FA6 7A 02              4595 	mov	r2,#(_rximp_cal >> 16)
   0FA8 12 00 B3           4596 	lcall	__sdcc_banked_call
   0FAB D0 02              4597 	pop	ar2
                           4598 ;	../../shared/src/cmd_if.c:521: reg_RXIMPCAL_EN	= 0;
   0FAD 90 82 00           4599 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_128
   0FB0 E0                 4600 	movx	a,@dptr
   0FB1 54 FB              4601 	anl	a,#0xfb
   0FB3 F0                 4602 	movx	@dptr,a
                           4603 ;	../../shared/src/cmd_if.c:522: PHY_STATUS = ST_NORMAL;
   0FB4 90 22 30           4604 	mov	dptr,#_MCU_STATUS0_LANE
   0FB7 74 2B              4605 	mov	a,#0x2B
   0FB9 F0                 4606 	movx	@dptr,a
   0FBA                    4607 00103$:
                           4608 ;	../../shared/src/cmd_if.c:525: return error_flg;
   0FBA 8A 82              4609 	mov	dpl,r2
   0FBC 22                 4610 	ret
                           4611 ;------------------------------------------------------------
                           4612 ;Allocation info for local variables in function 'cmd_tx_imp_cal'
                           4613 ;------------------------------------------------------------
                           4614 ;error_flg                 Allocated to registers r2 
                           4615 ;------------------------------------------------------------
                           4616 ;	../../shared/src/cmd_if.c:528: uint8_t cmd_tx_imp_cal(void) CMD_BANK {
                           4617 ;	-----------------------------------------
                           4618 ;	 function cmd_tx_imp_cal
                           4619 ;	-----------------------------------------
   0FBD                    4620 _cmd_tx_imp_cal:
                           4621 ;	../../shared/src/cmd_if.c:531: error_flg = 0;
   0FBD 7A 00              4622 	mov	r2,#0x00
                           4623 ;	../../shared/src/cmd_if.c:532: if(reg_PIN_PLL_READY_RX_LANE==0) error_flg = CMD_ST_NA;
   0FBF 90 21 02           4624 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   0FC2 E0                 4625 	movx	a,@dptr
   0FC3 20 E6 04           4626 	jb	acc.6,00102$
   0FC6 7A 02              4627 	mov	r2,#0x02
   0FC8 80 21              4628 	sjmp	00103$
   0FCA                    4629 00102$:
                           4630 ;	../../shared/src/cmd_if.c:534: reg_TXIMPCAL_EN	= 1;
   0FCA 90 82 00           4631 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_128
   0FCD E0                 4632 	movx	a,@dptr
   0FCE 44 08              4633 	orl	a,#0x08
   0FD0 F0                 4634 	movx	@dptr,a
                           4635 ;	../../shared/src/cmd_if.c:535: tximp_cal();
   0FD1 C0 02              4636 	push	ar2
   0FD3 78 D7              4637 	mov	r0,#_tximp_cal
   0FD5 79 B3              4638 	mov	r1,#(_tximp_cal >> 8)
   0FD7 7A 02              4639 	mov	r2,#(_tximp_cal >> 16)
   0FD9 12 00 B3           4640 	lcall	__sdcc_banked_call
   0FDC D0 02              4641 	pop	ar2
                           4642 ;	../../shared/src/cmd_if.c:536: reg_TXIMPCAL_EN	= 0;
   0FDE 90 82 00           4643 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_128
   0FE1 E0                 4644 	movx	a,@dptr
   0FE2 54 F7              4645 	anl	a,#0xf7
   0FE4 F0                 4646 	movx	@dptr,a
                           4647 ;	../../shared/src/cmd_if.c:537: PHY_STATUS = ST_NORMAL;
   0FE5 90 22 30           4648 	mov	dptr,#_MCU_STATUS0_LANE
   0FE8 74 2B              4649 	mov	a,#0x2B
   0FEA F0                 4650 	movx	@dptr,a
   0FEB                    4651 00103$:
                           4652 ;	../../shared/src/cmd_if.c:540: return error_flg;
   0FEB 8A 82              4653 	mov	dpl,r2
   0FED 22                 4654 	ret
                           4655 	.area CSEG    (CODE)
                           4656 	.area CONST   (CODE)
                           4657 	.area CABS    (ABS,CODE)
