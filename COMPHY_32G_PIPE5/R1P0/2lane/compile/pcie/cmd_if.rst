                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:23 2018
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
   024A 02 04 B8           2101 	ljmp	00161$
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
   026B BD 80 01           2125 	cjne	r5,#0x80,00182$
   026E 04                 2126 	inc	a
   026F                    2127 00182$:
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
                           2159 ;	../../shared/src/cmd_if.c:93: if(gen>=5) 	 { 
   0294 BB 05 00           2160 	cjne	r3,#0x05,00184$
   0297                    2161 00184$:
   0297 40 05              2162 	jc	00104$
                           2163 ;	../../shared/src/cmd_if.c:94: result = CMD_ST_INVALID_VALUE;
   0299 7A 04              2164 	mov	r2,#0x04
                           2165 ;	../../shared/src/cmd_if.c:95: goto finish0;
   029B 02 04 80           2166 	ljmp	00160$
   029E                    2167 00104$:
                           2168 ;	../../shared/src/cmd_if.c:98: if(en_debug) gen = 0x80;
   029E A8 18              2169 	mov	r0,_bp
   02A0 08                 2170 	inc	r0
   02A1 08                 2171 	inc	r0
   02A2 E6                 2172 	mov	a,@r0
   02A3 60 02              2173 	jz	00106$
   02A5 7B 80              2174 	mov	r3,#0x80
   02A7                    2175 00106$:
                           2176 ;	../../shared/src/cmd_if.c:100: reg_MCU_DEBUG0_LANE_7_0 = 0x13;	
   02A7 C0 02              2177 	push	ar2
   02A9 90 22 B4           2178 	mov	dptr,#_MCU_DEBUG0_LANE
   02AC 74 13              2179 	mov	a,#0x13
   02AE F0                 2180 	movx	@dptr,a
                           2181 ;	../../shared/src/cmd_if.c:101: reg_MCU_DEBUG1_LANE_7_0 = cmd_type;
   02AF 90 22 B5           2182 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0001)
   02B2 A8 18              2183 	mov	r0,_bp
   02B4 08                 2184 	inc	r0
   02B5 E6                 2185 	mov	a,@r0
   02B6 F0                 2186 	movx	@dptr,a
                           2187 ;	../../shared/src/cmd_if.c:102: reg_MCU_DEBUG2_LANE_7_0 = cmd_code;
   02B7 90 22 B6           2188 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0002)
   02BA EC                 2189 	mov	a,r4
   02BB F0                 2190 	movx	@dptr,a
                           2191 ;	../../shared/src/cmd_if.c:103: MCU_DEBUG_LANE.VAL = PHY_REMOTE_CTRL_VALUE_LANE.VAL; 
   02BC 90 60 20           2192 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   02BF E0                 2193 	movx	a,@dptr
   02C0 FD                 2194 	mov	r5,a
   02C1 A3                 2195 	inc	dptr
   02C2 E0                 2196 	movx	a,@dptr
   02C3 FE                 2197 	mov	r6,a
   02C4 A3                 2198 	inc	dptr
   02C5 E0                 2199 	movx	a,@dptr
   02C6 FF                 2200 	mov	r7,a
   02C7 A3                 2201 	inc	dptr
   02C8 E0                 2202 	movx	a,@dptr
   02C9 FA                 2203 	mov	r2,a
   02CA 90 22 C4           2204 	mov	dptr,#_MCU_DEBUG_LANE
   02CD ED                 2205 	mov	a,r5
   02CE F0                 2206 	movx	@dptr,a
   02CF A3                 2207 	inc	dptr
   02D0 EE                 2208 	mov	a,r6
   02D1 F0                 2209 	movx	@dptr,a
   02D2 A3                 2210 	inc	dptr
   02D3 EF                 2211 	mov	a,r7
   02D4 F0                 2212 	movx	@dptr,a
   02D5 A3                 2213 	inc	dptr
   02D6 EA                 2214 	mov	a,r2
   02D7 F0                 2215 	movx	@dptr,a
                           2216 ;	../../shared/src/cmd_if.c:105: if(cmd_type == CMD_TYPE_APTA) {
   02D8 A8 18              2217 	mov	r0,_bp
   02DA 08                 2218 	inc	r0
   02DB B6 60 02           2219 	cjne	@r0,#0x60,00187$
   02DE 80 04              2220 	sjmp	00188$
   02E0                    2221 00187$:
   02E0 D0 02              2222 	pop	ar2
   02E2 80 0F              2223 	sjmp	00110$
   02E4                    2224 00188$:
   02E4 D0 02              2225 	pop	ar2
                           2226 ;	../../shared/src/cmd_if.c:106: if(reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE==0) goto finish0;
   02E6 90 26 78           2227 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   02E9 E0                 2228 	movx	a,@dptr
   02EA 20 E0 03           2229 	jb	acc.0,00189$
   02ED 02 04 80           2230 	ljmp	00160$
   02F0                    2231 00189$:
                           2232 ;	../../shared/src/cmd_if.c:107: return;
   02F0 02 04 B8           2233 	ljmp	00161$
   02F3                    2234 00110$:
                           2235 ;	../../shared/src/cmd_if.c:110: if(cmd_type == CMD_TYPE_ANA0) { //ana_ctrl
   02F3 A8 18              2236 	mov	r0,_bp
   02F5 08                 2237 	inc	r0
   02F6 B6 80 71           2238 	cjne	@r0,#0x80,00158$
                           2239 ;	../../shared/src/cmd_if.c:111: switch(cmd_code) {
   02F9 74 0B              2240 	mov	a,#0x0B
   02FB B5 04 00           2241 	cjne	a,ar4,00192$
   02FE                    2242 00192$:
   02FE 50 03              2243 	jnc	00193$
   0300 02 04 80           2244 	ljmp	00160$
   0303                    2245 00193$:
   0303 EC                 2246 	mov	a,r4
   0304 2C                 2247 	add	a,r4
   0305 2C                 2248 	add	a,r4
   0306 90 03 0A           2249 	mov	dptr,#00194$
   0309 73                 2250 	jmp	@a+dptr
   030A                    2251 00194$:
   030A 02 03 2E           2252 	ljmp	00112$
   030D 02 03 2E           2253 	ljmp	00111$
   0310 02 03 67           2254 	ljmp	00119$
   0313 02 03 67           2255 	ljmp	00119$
   0316 02 03 67           2256 	ljmp	00119$
   0319 02 03 67           2257 	ljmp	00119$
   031C 02 03 3E           2258 	ljmp	00114$
   031F 02 03 3E           2259 	ljmp	00113$
   0322 02 03 4E           2260 	ljmp	00116$
   0325 02 03 4E           2261 	ljmp	00115$
   0328 02 03 5E           2262 	ljmp	00118$
   032B 02 03 5E           2263 	ljmp	00117$
                           2264 ;	../../shared/src/cmd_if.c:112: case CMD_TX_FFE_GET:
   032E                    2265 00111$:
                           2266 ;	../../shared/src/cmd_if.c:113: case CMD_TX_FFE_SET:		result = cmd_tx_ffe(gen, cmd_code); break;
   032E                    2267 00112$:
   032E C0 04              2268 	push	ar4
   0330 8B 82              2269 	mov	dpl,r3
   0332 12 04 BE           2270 	lcall	_cmd_tx_ffe
   0335 AD 82              2271 	mov	r5,dpl
   0337 15 81              2272 	dec	sp
   0339 8D 02              2273 	mov	ar2,r5
   033B 02 04 80           2274 	ljmp	00160$
                           2275 ;	../../shared/src/cmd_if.c:114: case CMD_TX_SLEW_RATE_GET:
   033E                    2276 00113$:
                           2277 ;	../../shared/src/cmd_if.c:115: case CMD_TX_SLEW_RATE_SET:  result = cmd_tx_slew_rate(gen, cmd_code); break;
   033E                    2278 00114$:
   033E C0 04              2279 	push	ar4
   0340 8B 82              2280 	mov	dpl,r3
   0342 12 09 32           2281 	lcall	_cmd_tx_slew_rate
   0345 AD 82              2282 	mov	r5,dpl
   0347 15 81              2283 	dec	sp
   0349 8D 02              2284 	mov	ar2,r5
   034B 02 04 80           2285 	ljmp	00160$
                           2286 ;	../../shared/src/cmd_if.c:116: case CMD_TX_SSC_GET:
   034E                    2287 00115$:
                           2288 ;	../../shared/src/cmd_if.c:117: case CMD_TX_SSC_SET:		result = cmd_ssc(gen, cmd_code); break;
   034E                    2289 00116$:
   034E C0 04              2290 	push	ar4
   0350 8B 82              2291 	mov	dpl,r3
   0352 12 0D CE           2292 	lcall	_cmd_ssc
   0355 AD 82              2293 	mov	r5,dpl
   0357 15 81              2294 	dec	sp
   0359 8D 02              2295 	mov	ar2,r5
   035B 02 04 80           2296 	ljmp	00160$
                           2297 ;	../../shared/src/cmd_if.c:118: case CMD_TX_MARGIN_GET:
   035E                    2298 00117$:
                           2299 ;	../../shared/src/cmd_if.c:119: case CMD_TX_MARGIN_SET:		result = cmd_tx_margin(cmd_code); break;
   035E                    2300 00118$:
   035E 8C 82              2301 	mov	dpl,r4
   0360 12 0C 62           2302 	lcall	_cmd_tx_margin
   0363 AD 82              2303 	mov	r5,dpl
   0365 8D 02              2304 	mov	ar2,r5
                           2305 ;	../../shared/src/cmd_if.c:120: }		
   0367                    2306 00119$:
   0367 02 04 80           2307 	ljmp	00160$
   036A                    2308 00158$:
                           2309 ;	../../shared/src/cmd_if.c:122: else if(cmd_type == CMD_TYPE_ANA1) { //ana_ctrl
   036A A8 18              2310 	mov	r0,_bp
   036C 08                 2311 	inc	r0
   036D B6 81 47           2312 	cjne	@r0,#0x81,00155$
                           2313 ;	../../shared/src/cmd_if.c:123: switch(cmd_code) {
   0370 74 05              2314 	mov	a,#0x05
   0372 B5 04 00           2315 	cjne	a,ar4,00197$
   0375                    2316 00197$:
   0375 50 03              2317 	jnc	00198$
   0377 02 04 80           2318 	ljmp	00160$
   037A                    2319 00198$:
   037A EC                 2320 	mov	a,r4
   037B 2C                 2321 	add	a,r4
   037C 2C                 2322 	add	a,r4
   037D 90 03 81           2323 	mov	dptr,#00199$
   0380 73                 2324 	jmp	@a+dptr
   0381                    2325 00199$:
   0381 02 03 93           2326 	ljmp	00120$
   0384 02 03 93           2327 	ljmp	00121$
   0387 02 03 9F           2328 	ljmp	00123$
   038A 02 03 9F           2329 	ljmp	00122$
   038D 02 03 AB           2330 	ljmp	00124$
   0390 02 03 AB           2331 	ljmp	00125$
                           2332 ;	../../shared/src/cmd_if.c:124: case CMD_TX_REMOTE_PRESET_INX_SET:
   0393                    2333 00120$:
                           2334 ;	../../shared/src/cmd_if.c:125: case CMD_TX_REMOTE_PRESET_INX_GET:	result = cmd_remote_tx_preset_index(cmd_code);  break;
   0393                    2335 00121$:
   0393 8C 82              2336 	mov	dpl,r4
   0395 12 0C 9B           2337 	lcall	_cmd_remote_tx_preset_index
   0398 AD 82              2338 	mov	r5,dpl
   039A 8D 02              2339 	mov	ar2,r5
   039C 02 04 80           2340 	ljmp	00160$
                           2341 ;	../../shared/src/cmd_if.c:126: case CMD_TX_PRESET_GET:
   039F                    2342 00122$:
                           2343 ;	../../shared/src/cmd_if.c:127: case CMD_TX_PRESET_SET:			result = cmd_tx_preset(cmd_code); break;
   039F                    2344 00123$:
   039F 8C 82              2345 	mov	dpl,r4
   03A1 12 0C E7           2346 	lcall	_cmd_tx_preset
   03A4 AD 82              2347 	mov	r5,dpl
   03A6 8D 02              2348 	mov	ar2,r5
   03A8 02 04 80           2349 	ljmp	00160$
                           2350 ;	../../shared/src/cmd_if.c:128: case CMD_TX_LOCAL_PRESET_INX_SET:
   03AB                    2351 00124$:
                           2352 ;	../../shared/src/cmd_if.c:129: case CMD_TX_LOCAL_PRESET_INX_GET:	result = cmd_local_tx_preset_index(cmd_code);   break;
   03AB                    2353 00125$:
   03AB 8C 82              2354 	mov	dpl,r4
   03AD 12 0D 79           2355 	lcall	_cmd_local_tx_preset_index
   03B0 AD 82              2356 	mov	r5,dpl
   03B2 8D 02              2357 	mov	ar2,r5
                           2358 ;	../../shared/src/cmd_if.c:130: }
   03B4 02 04 80           2359 	ljmp	00160$
   03B7                    2360 00155$:
                           2361 ;	../../shared/src/cmd_if.c:132: else if(cmd_type == CMD_TYPE_ANA2) { //ana_ctrl
   03B7 A8 18              2362 	mov	r0,_bp
   03B9 08                 2363 	inc	r0
   03BA B6 82 68           2364 	cjne	@r0,#0x82,00152$
                           2365 ;	../../shared/src/cmd_if.c:133: switch(cmd_code) {
   03BD 74 07              2366 	mov	a,#0x07
   03BF B5 04 00           2367 	cjne	a,ar4,00202$
   03C2                    2368 00202$:
   03C2 50 03              2369 	jnc	00203$
   03C4 02 04 80           2370 	ljmp	00160$
   03C7                    2371 00203$:
   03C7 EC                 2372 	mov	a,r4
   03C8 2C                 2373 	add	a,r4
   03C9 2C                 2374 	add	a,r4
   03CA 90 03 CE           2375 	mov	dptr,#00204$
   03CD 73                 2376 	jmp	@a+dptr
   03CE                    2377 00204$:
   03CE 02 03 E6           2378 	ljmp	00128$
   03D1 02 03 E6           2379 	ljmp	00127$
   03D4 02 03 F6           2380 	ljmp	00130$
   03D7 02 03 F6           2381 	ljmp	00129$
   03DA 02 04 06           2382 	ljmp	00132$
   03DD 02 04 06           2383 	ljmp	00131$
   03E0 02 04 16           2384 	ljmp	00134$
   03E3 02 04 16           2385 	ljmp	00133$
                           2386 ;	../../shared/src/cmd_if.c:134: case CMD_RX_CDR_BW_GET:
   03E6                    2387 00127$:
                           2388 ;	../../shared/src/cmd_if.c:135: case CMD_RX_CDR_BW_SET:	 	result = cmd_rx_cdr_bw(gen, cmd_code); break;
   03E6                    2389 00128$:
   03E6 C0 04              2390 	push	ar4
   03E8 8B 82              2391 	mov	dpl,r3
   03EA 12 0A BB           2392 	lcall	_cmd_rx_cdr_bw
   03ED AD 82              2393 	mov	r5,dpl
   03EF 15 81              2394 	dec	sp
   03F1 8D 02              2395 	mov	ar2,r5
   03F3 02 04 80           2396 	ljmp	00160$
                           2397 ;	../../shared/src/cmd_if.c:136: case CMD_RX_FFE_GET: 
   03F6                    2398 00129$:
                           2399 ;	../../shared/src/cmd_if.c:137: case CMD_RX_FFE_SET:  		result = cmd_rx_ffe(gen, cmd_code); break;
   03F6                    2400 00130$:
   03F6 C0 04              2401 	push	ar4
   03F8 8B 82              2402 	mov	dpl,r3
   03FA 12 07 5A           2403 	lcall	_cmd_rx_ffe
   03FD AD 82              2404 	mov	r5,dpl
   03FF 15 81              2405 	dec	sp
   0401 8D 02              2406 	mov	ar2,r5
   0403 02 04 80           2407 	ljmp	00160$
                           2408 ;	../../shared/src/cmd_if.c:138: case CMD_RX_DFE_RES_GET:
   0406                    2409 00131$:
                           2410 ;	../../shared/src/cmd_if.c:139: case CMD_RX_DFE_RES_SET:  	result = cmd_dfe_res(gen, cmd_code); break;
   0406                    2411 00132$:
   0406 C0 04              2412 	push	ar4
   0408 8B 82              2413 	mov	dpl,r3
   040A 12 06 3C           2414 	lcall	_cmd_dfe_res
   040D AD 82              2415 	mov	r5,dpl
   040F 15 81              2416 	dec	sp
   0411 8D 02              2417 	mov	ar2,r5
   0413 02 04 80           2418 	ljmp	00160$
                           2419 ;	../../shared/src/cmd_if.c:140: case CMD_SQ_THRS_RATIO_GET:
   0416                    2420 00133$:
                           2421 ;	../../shared/src/cmd_if.c:141: case CMD_SQ_THRS_RATIO_SET:  result = cmd_sq_thrs_ratio(gen, cmd_code); break;
   0416                    2422 00134$:
   0416 C0 04              2423 	push	ar4
   0418 8B 82              2424 	mov	dpl,r3
   041A 12 08 4C           2425 	lcall	_cmd_sq_thrs_ratio
   041D AB 82              2426 	mov	r3,dpl
   041F 15 81              2427 	dec	sp
   0421 8B 02              2428 	mov	ar2,r3
                           2429 ;	../../shared/src/cmd_if.c:142: }
   0423 80 5B              2430 	sjmp	00160$
   0425                    2431 00152$:
                           2432 ;	../../shared/src/cmd_if.c:144: else if(cmd_type == CMD_TYPE_CTRL) { 
   0425 A8 18              2433 	mov	r0,_bp
   0427 08                 2434 	inc	r0
   0428 B6 83 13           2435 	cjne	@r0,#0x83,00149$
                           2436 ;	../../shared/src/cmd_if.c:145: switch(cmd_code) {
   042B BC 00 02           2437 	cjne	r4,#0x00,00207$
   042E 80 03              2438 	sjmp	00137$
   0430                    2439 00207$:
   0430 BC 01 4D           2440 	cjne	r4,#0x01,00160$
                           2441 ;	../../shared/src/cmd_if.c:147: case CMD_BYPASS_CTLE_TRAIN_SET:	result = cmd_bypass_ctle_train(cmd_code); break;
   0433                    2442 00137$:
   0433 8C 82              2443 	mov	dpl,r4
   0435 12 0A 95           2444 	lcall	_cmd_bypass_ctle_train
   0438 AB 82              2445 	mov	r3,dpl
   043A 8B 02              2446 	mov	ar2,r3
                           2447 ;	../../shared/src/cmd_if.c:148: }
   043C 80 42              2448 	sjmp	00160$
   043E                    2449 00149$:
                           2450 ;	../../shared/src/cmd_if.c:150: else if(cmd_type == CMD_TYPE_CAL) { //cal
   043E A8 18              2451 	mov	r0,_bp
   0440 08                 2452 	inc	r0
   0441 B6 84 3C           2453 	cjne	@r0,#0x84,00160$
                           2454 ;	../../shared/src/cmd_if.c:151: switch(cmd_code) {
   0444 BC 00 02           2455 	cjne	r4,#0x00,00212$
   0447 80 05              2456 	sjmp	00139$
   0449                    2457 00212$:
                           2458 ;	../../shared/src/cmd_if.c:152: case CMD_RX_IMP_CAL: 
   0449 BC 01 34           2459 	cjne	r4,#0x01,00160$
   044C 80 1A              2460 	sjmp	00142$
   044E                    2461 00139$:
                           2462 ;	../../shared/src/cmd_if.c:153: if((lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x03)==mcuid) result = cmd_rx_imp_cal(); break;
   044E 90 60 20           2463 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0451 E0                 2464 	movx	a,@dptr
   0452 FB                 2465 	mov	r3,a
   0453 53 03 03           2466 	anl	ar3,#0x03
   0456 90 22 00           2467 	mov	dptr,#_MCU_CONTROL_LANE
   0459 E0                 2468 	movx	a,@dptr
   045A FC                 2469 	mov	r4,a
   045B EB                 2470 	mov	a,r3
   045C B5 04 21           2471 	cjne	a,ar4,00160$
   045F 12 0F 54           2472 	lcall	_cmd_rx_imp_cal
   0462 AB 82              2473 	mov	r3,dpl
   0464 8B 02              2474 	mov	ar2,r3
                           2475 ;	../../shared/src/cmd_if.c:154: case CMD_TX_IMP_CAL: 
   0466 80 18              2476 	sjmp	00160$
   0468                    2477 00142$:
                           2478 ;	../../shared/src/cmd_if.c:155: if((lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x03)==mcuid) result = cmd_tx_imp_cal(); break;
   0468 90 60 20           2479 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   046B E0                 2480 	movx	a,@dptr
   046C FB                 2481 	mov	r3,a
   046D 53 03 03           2482 	anl	ar3,#0x03
   0470 90 22 00           2483 	mov	dptr,#_MCU_CONTROL_LANE
   0473 E0                 2484 	movx	a,@dptr
   0474 FC                 2485 	mov	r4,a
   0475 EB                 2486 	mov	a,r3
   0476 B5 04 07           2487 	cjne	a,ar4,00160$
   0479 12 0F 85           2488 	lcall	_cmd_tx_imp_cal
   047C AB 82              2489 	mov	r3,dpl
   047E 8B 02              2490 	mov	ar2,r3
                           2491 ;	../../shared/src/cmd_if.c:159: finish0:
   0480                    2492 00160$:
                           2493 ;	../../shared/src/cmd_if.c:160: lnx_PHY_LOCAL_STATUS_LANE_7_0 = result;
   0480 90 60 2E           2494 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS2_LANE + 0x0002)
   0483 EA                 2495 	mov	a,r2
   0484 F0                 2496 	movx	@dptr,a
                           2497 ;	../../shared/src/cmd_if.c:161: lnx_PHY_MCU_LOCAL_ACK_LANE = 1;
   0485 90 60 33           2498 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   0488 E0                 2499 	movx	a,@dptr
   0489 44 01              2500 	orl	a,#0x01
   048B F0                 2501 	movx	@dptr,a
                           2502 ;	../../shared/src/cmd_if.c:163: reg_MCU_DEBUG0_LANE_7_0 = 15;
   048C 90 22 B4           2503 	mov	dptr,#_MCU_DEBUG0_LANE
   048F 74 0F              2504 	mov	a,#0x0F
   0491 F0                 2505 	movx	@dptr,a
                           2506 ;	../../shared/src/cmd_if.c:164: reg_MCU_DEBUG1_LANE_7_0 = lnx_PHY_LOCAL_STATUS_LANE_7_0;
   0492 90 60 2E           2507 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS2_LANE + 0x0002)
   0495 E0                 2508 	movx	a,@dptr
   0496 FA                 2509 	mov	r2,a
   0497 90 22 B5           2510 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0001)
   049A EA                 2511 	mov	a,r2
   049B F0                 2512 	movx	@dptr,a
                           2513 ;	../../shared/src/cmd_if.c:165: MCU_DEBUG_LANE.VAL = PHY_LOCAL_VALUE_LANE.VAL; 
   049C 90 60 24           2514 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   049F E0                 2515 	movx	a,@dptr
   04A0 FA                 2516 	mov	r2,a
   04A1 A3                 2517 	inc	dptr
   04A2 E0                 2518 	movx	a,@dptr
   04A3 FB                 2519 	mov	r3,a
   04A4 A3                 2520 	inc	dptr
   04A5 E0                 2521 	movx	a,@dptr
   04A6 FC                 2522 	mov	r4,a
   04A7 A3                 2523 	inc	dptr
   04A8 E0                 2524 	movx	a,@dptr
   04A9 FD                 2525 	mov	r5,a
   04AA 90 22 C4           2526 	mov	dptr,#_MCU_DEBUG_LANE
   04AD EA                 2527 	mov	a,r2
   04AE F0                 2528 	movx	@dptr,a
   04AF A3                 2529 	inc	dptr
   04B0 EB                 2530 	mov	a,r3
   04B1 F0                 2531 	movx	@dptr,a
   04B2 A3                 2532 	inc	dptr
   04B3 EC                 2533 	mov	a,r4
   04B4 F0                 2534 	movx	@dptr,a
   04B5 A3                 2535 	inc	dptr
   04B6 ED                 2536 	mov	a,r5
   04B7 F0                 2537 	movx	@dptr,a
   04B8                    2538 00161$:
   04B8 85 18 81           2539 	mov	sp,_bp
   04BB D0 18              2540 	pop	_bp
   04BD 22                 2541 	ret
                           2542 ;------------------------------------------------------------
                           2543 ;Allocation info for local variables in function 'cmd_tx_ffe'
                           2544 ;------------------------------------------------------------
                           2545 ;cmd_code                  Allocated to stack - offset -3
                           2546 ;gen                       Allocated to registers r2 
                           2547 ;------------------------------------------------------------
                           2548 ;	../../shared/src/cmd_if.c:168: uint8_t cmd_tx_ffe(uint8_t gen, uint8_t cmd_code) CMD_BANK {
                           2549 ;	-----------------------------------------
                           2550 ;	 function cmd_tx_ffe
                           2551 ;	-----------------------------------------
   04BE                    2552 _cmd_tx_ffe:
   04BE C0 18              2553 	push	_bp
   04C0 85 81 18           2554 	mov	_bp,sp
   04C3 AA 82              2555 	mov	r2,dpl
                           2556 ;	../../shared/src/cmd_if.c:170: if(gen==0x80) {//current
   04C5 BA 80 02           2557 	cjne	r2,#0x80,00130$
   04C8 80 03              2558 	sjmp	00131$
   04CA                    2559 00130$:
   04CA 02 05 C3           2560 	ljmp	00118$
   04CD                    2561 00131$:
                           2562 ;	../../shared/src/cmd_if.c:172: if(cmd_code==CMD_TX_FFE_GET) {
   04CD E5 18              2563 	mov	a,_bp
   04CF 24 FD              2564 	add	a,#0xfd
   04D1 F8                 2565 	mov	r0,a
   04D2 B6 01 67           2566 	cjne	@r0,#0x01,00112$
                           2567 ;	../../shared/src/cmd_if.c:173: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = LINK_TRAIN_MODE0.BT.B0; //[7:4]em_po
   04D5 90 26 50           2568 	mov	dptr,#_LINK_TRAIN_MODE0
   04D8 E0                 2569 	movx	a,@dptr
   04D9 90 60 24           2570 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   04DC F0                 2571 	movx	@dptr,a
                           2572 ;	../../shared/src/cmd_if.c:174: lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = LINK_TRAIN_MODE0.BT.B1; //[7:4]em_peak [3:0]em_pre
   04DD 90 26 51           2573 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   04E0 E0                 2574 	movx	a,@dptr
   04E1 FB                 2575 	mov	r3,a
   04E2 90 60 25           2576 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0001)
   04E5 F0                 2577 	movx	@dptr,a
                           2578 ;	../../shared/src/cmd_if.c:176: if(reg_ANA_TX_EM_PEAK_EN_LANE) lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 |= 0x08;
   04E6 90 26 52           2579 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0002)
   04E9 E0                 2580 	movx	a,@dptr
   04EA 30 E7 0D           2581 	jnb	acc.7,00102$
   04ED 90 60 24           2582 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   04F0 E0                 2583 	movx	a,@dptr
   04F1 FB                 2584 	mov	r3,a
   04F2 43 03 08           2585 	orl	ar3,#0x08
   04F5 90 60 24           2586 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   04F8 EB                 2587 	mov	a,r3
   04F9 F0                 2588 	movx	@dptr,a
   04FA                    2589 00102$:
                           2590 ;	../../shared/src/cmd_if.c:177: if(reg_ANA_TX_EM_PRE_EN_LANE)  lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 |= 0x04; 
   04FA 90 26 52           2591 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0002)
   04FD E0                 2592 	movx	a,@dptr
   04FE 30 E6 0D           2593 	jnb	acc.6,00104$
   0501 90 60 24           2594 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0504 E0                 2595 	movx	a,@dptr
   0505 FB                 2596 	mov	r3,a
   0506 43 03 04           2597 	orl	ar3,#0x04
   0509 90 60 24           2598 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   050C EB                 2599 	mov	a,r3
   050D F0                 2600 	movx	@dptr,a
   050E                    2601 00104$:
                           2602 ;	../../shared/src/cmd_if.c:178: if(reg_ANA_TX_EM_PO_EN_LANE)   lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 |= 0x02;
   050E 90 26 52           2603 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0002)
   0511 E0                 2604 	movx	a,@dptr
   0512 30 E5 0D           2605 	jnb	acc.5,00106$
   0515 90 60 24           2606 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0518 E0                 2607 	movx	a,@dptr
   0519 FB                 2608 	mov	r3,a
   051A 43 03 02           2609 	orl	ar3,#0x02
   051D 90 60 24           2610 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0520 EB                 2611 	mov	a,r3
   0521 F0                 2612 	movx	@dptr,a
   0522                    2613 00106$:
                           2614 ;	../../shared/src/cmd_if.c:179: if(txffe_force_en)    		   lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 |= 0x01;
   0522 90 67 A4           2615 	mov	dptr,#_txffe_force_en
   0525 E0                 2616 	movx	a,@dptr
   0526 FB                 2617 	mov	r3,a
   0527 70 03              2618 	jnz	00137$
   0529 02 06 36           2619 	ljmp	00119$
   052C                    2620 00137$:
   052C 90 60 24           2621 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   052F E0                 2622 	movx	a,@dptr
   0530 FB                 2623 	mov	r3,a
   0531 43 03 01           2624 	orl	ar3,#0x01
   0534 90 60 24           2625 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0537 EB                 2626 	mov	a,r3
   0538 F0                 2627 	movx	@dptr,a
   0539 02 06 36           2628 	ljmp	00119$
   053C                    2629 00112$:
                           2630 ;	../../shared/src/cmd_if.c:182: reg_TX_EM_CTRL_REG_EN_LANE = 1;
   053C 90 26 53           2631 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0003)
   053F E0                 2632 	movx	a,@dptr
   0540 44 80              2633 	orl	a,#0x80
   0542 F0                 2634 	movx	@dptr,a
                           2635 ;	../../shared/src/cmd_if.c:183: LINK_TRAIN_MODE0.BT.B0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0; //[7:4]em_po
   0543 90 60 20           2636 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0546 E0                 2637 	movx	a,@dptr
   0547 90 26 50           2638 	mov	dptr,#_LINK_TRAIN_MODE0
   054A F0                 2639 	movx	@dptr,a
                           2640 ;	../../shared/src/cmd_if.c:184: LINK_TRAIN_MODE0.BT.B1 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1; //[7:4]em_peak [3:0]em_pre
   054B 90 60 21           2641 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0001)
   054E E0                 2642 	movx	a,@dptr
   054F 90 26 51           2643 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0001)
   0552 F0                 2644 	movx	@dptr,a
                           2645 ;	../../shared/src/cmd_if.c:185: if (cmx_TX_TRAIN_MODE == 1)
   0553 90 E6 28           2646 	mov	dptr,#_TRAIN_IF_CONFIG
   0556 E0                 2647 	movx	a,@dptr
   0557 03                 2648 	rr	a
   0558 54 01              2649 	anl	a,#0x01
   055A FB                 2650 	mov	r3,a
   055B BB 01 52           2651 	cjne	r3,#0x01,00110$
                           2652 ;	../../shared/src/cmd_if.c:187: reg_ANA_TX_EM_PEAK_EN_LANE = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x08)==0x08;
   055E 90 60 20           2653 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0561 E0                 2654 	movx	a,@dptr
   0562 FB                 2655 	mov	r3,a
   0563 53 03 08           2656 	anl	ar3,#0x08
   0566 BB 08 03           2657 	cjne	r3,#0x08,00140$
   0569 D3                 2658 	setb	c
   056A 80 01              2659 	sjmp	00141$
   056C                    2660 00140$:
   056C C3                 2661 	clr	c
   056D                    2662 00141$:
   056D 92 28              2663 	mov  b0,c
   056F E4                 2664 	clr	a
   0570 33                 2665 	rlc	a
   0571 90 26 52           2666 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0002)
   0574 13                 2667 	rrc	a
   0575 E0                 2668 	movx	a,@dptr
   0576 92 E7              2669 	mov	acc.7,c
   0578 F0                 2670 	movx	@dptr,a
                           2671 ;	../../shared/src/cmd_if.c:188: reg_ANA_TX_EM_PRE_EN_LANE = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x04)==0x04;
   0579 90 60 20           2672 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   057C E0                 2673 	movx	a,@dptr
   057D FB                 2674 	mov	r3,a
   057E 53 03 04           2675 	anl	ar3,#0x04
   0581 BB 04 03           2676 	cjne	r3,#0x04,00142$
   0584 D3                 2677 	setb	c
   0585 80 01              2678 	sjmp	00143$
   0587                    2679 00142$:
   0587 C3                 2680 	clr	c
   0588                    2681 00143$:
   0588 92 28              2682 	mov  b0,c
   058A E4                 2683 	clr	a
   058B 33                 2684 	rlc	a
   058C 90 26 52           2685 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0002)
   058F 13                 2686 	rrc	a
   0590 E0                 2687 	movx	a,@dptr
   0591 92 E6              2688 	mov	acc.6,c
   0593 F0                 2689 	movx	@dptr,a
                           2690 ;	../../shared/src/cmd_if.c:189: reg_ANA_TX_EM_PO_EN_LANE = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x02)==0x02;
   0594 90 60 20           2691 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0597 E0                 2692 	movx	a,@dptr
   0598 FB                 2693 	mov	r3,a
   0599 53 03 02           2694 	anl	ar3,#0x02
   059C BB 02 03           2695 	cjne	r3,#0x02,00144$
   059F D3                 2696 	setb	c
   05A0 80 01              2697 	sjmp	00145$
   05A2                    2698 00144$:
   05A2 C3                 2699 	clr	c
   05A3                    2700 00145$:
   05A3 92 28              2701 	mov  b0,c
   05A5 E4                 2702 	clr	a
   05A6 33                 2703 	rlc	a
   05A7 FB                 2704 	mov	r3,a
   05A8 90 26 52           2705 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0002)
   05AB 13                 2706 	rrc	a
   05AC E0                 2707 	movx	a,@dptr
   05AD 92 E5              2708 	mov	acc.5,c
   05AF F0                 2709 	movx	@dptr,a
   05B0                    2710 00110$:
                           2711 ;	../../shared/src/cmd_if.c:191: txffe_force_en = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x01)==0x01;
   05B0 90 60 20           2712 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   05B3 E0                 2713 	movx	a,@dptr
   05B4 FB                 2714 	mov	r3,a
   05B5 53 03 01           2715 	anl	ar3,#0x01
   05B8 90 67 A4           2716 	mov	dptr,#_txffe_force_en
   05BB E4                 2717 	clr	a
   05BC BB 01 01           2718 	cjne	r3,#0x01,00146$
   05BF 04                 2719 	inc	a
   05C0                    2720 00146$:
   05C0 F0                 2721 	movx	@dptr,a
   05C1 80 73              2722 	sjmp	00119$
   05C3                    2723 00118$:
                           2724 ;	../../shared/src/cmd_if.c:195: if(cmd_code==CMD_TX_FFE_GET) {
   05C3 E5 18              2725 	mov	a,_bp
   05C5 24 FD              2726 	add	a,#0xfd
   05C7 F8                 2727 	mov	r0,a
   05C8 B6 01 26           2728 	cjne	@r0,#0x01,00115$
                           2729 ;	../../shared/src/cmd_if.c:196: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = txffe_save[gen][0]; //[7:4]em_po
   05CB EA                 2730 	mov	a,r2
   05CC 2A                 2731 	add	a,r2
   05CD FB                 2732 	mov	r3,a
   05CE 24 D0              2733 	add	a,#_txffe_save
   05D0 F5 82              2734 	mov	dpl,a
   05D2 E4                 2735 	clr	a
   05D3 34 60              2736 	addc	a,#(_txffe_save >> 8)
   05D5 F5 83              2737 	mov	dph,a
   05D7 E0                 2738 	movx	a,@dptr
   05D8 90 60 24           2739 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   05DB F0                 2740 	movx	@dptr,a
                           2741 ;	../../shared/src/cmd_if.c:197: lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = txffe_save[gen][1];  //[7:4]em_peak [3:0]em_pre
   05DC EB                 2742 	mov	a,r3
   05DD 24 D0              2743 	add	a,#_txffe_save
   05DF FB                 2744 	mov	r3,a
   05E0 E4                 2745 	clr	a
   05E1 34 60              2746 	addc	a,#(_txffe_save >> 8)
   05E3 FC                 2747 	mov	r4,a
   05E4 8B 82              2748 	mov	dpl,r3
   05E6 8C 83              2749 	mov	dph,r4
   05E8 A3                 2750 	inc	dptr
   05E9 E0                 2751 	movx	a,@dptr
   05EA FB                 2752 	mov	r3,a
   05EB 90 60 25           2753 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0001)
   05EE F0                 2754 	movx	@dptr,a
   05EF 80 45              2755 	sjmp	00119$
   05F1                    2756 00115$:
                           2757 ;	../../shared/src/cmd_if.c:200: txffe_save[gen][0] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0; //[7:4]em_po
   05F1 EA                 2758 	mov	a,r2
   05F2 2A                 2759 	add	a,r2
   05F3 FB                 2760 	mov	r3,a
   05F4 24 D0              2761 	add	a,#_txffe_save
   05F6 FC                 2762 	mov	r4,a
   05F7 E4                 2763 	clr	a
   05F8 34 60              2764 	addc	a,#(_txffe_save >> 8)
   05FA FD                 2765 	mov	r5,a
   05FB 90 60 20           2766 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   05FE E0                 2767 	movx	a,@dptr
   05FF FE                 2768 	mov	r6,a
   0600 8C 82              2769 	mov	dpl,r4
   0602 8D 83              2770 	mov	dph,r5
   0604 F0                 2771 	movx	@dptr,a
                           2772 ;	../../shared/src/cmd_if.c:201: txffe_save[gen][1] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1; //[7:4]em_peak [3:0]em_pre
   0605 EB                 2773 	mov	a,r3
   0606 24 D0              2774 	add	a,#_txffe_save
   0608 FB                 2775 	mov	r3,a
   0609 E4                 2776 	clr	a
   060A 34 60              2777 	addc	a,#(_txffe_save >> 8)
   060C FC                 2778 	mov	r4,a
   060D 0B                 2779 	inc	r3
   060E BB 00 01           2780 	cjne	r3,#0x00,00150$
   0611 0C                 2781 	inc	r4
   0612                    2782 00150$:
   0612 90 60 21           2783 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0001)
   0615 E0                 2784 	movx	a,@dptr
   0616 FD                 2785 	mov	r5,a
   0617 8B 82              2786 	mov	dpl,r3
   0619 8C 83              2787 	mov	dph,r4
   061B F0                 2788 	movx	@dptr,a
                           2789 ;	../../shared/src/cmd_if.c:202: TRAIN_CONTROL_9.BT.B3 |= (0x01<<gen); //changed
   061C 90 60 CF           2790 	mov	dptr,#(_TRAIN_CONTROL_9 + 0x0003)
   061F E0                 2791 	movx	a,@dptr
   0620 FB                 2792 	mov	r3,a
   0621 8A F0              2793 	mov	b,r2
   0623 05 F0              2794 	inc	b
   0625 74 01              2795 	mov	a,#0x01
   0627 80 02              2796 	sjmp	00153$
   0629                    2797 00151$:
   0629 25 E0              2798 	add	a,acc
   062B                    2799 00153$:
   062B D5 F0 FB           2800 	djnz	b,00151$
   062E FA                 2801 	mov	r2,a
   062F 42 03              2802 	orl	ar3,a
   0631 90 60 CF           2803 	mov	dptr,#(_TRAIN_CONTROL_9 + 0x0003)
   0634 EB                 2804 	mov	a,r3
   0635 F0                 2805 	movx	@dptr,a
   0636                    2806 00119$:
                           2807 ;	../../shared/src/cmd_if.c:205: return 0;
   0636 75 82 00           2808 	mov	dpl,#0x00
   0639 D0 18              2809 	pop	_bp
   063B 22                 2810 	ret
                           2811 ;------------------------------------------------------------
                           2812 ;Allocation info for local variables in function 'cmd_dfe_res'
                           2813 ;------------------------------------------------------------
                           2814 ;cmd_code                  Allocated to stack - offset -3
                           2815 ;gen                       Allocated to registers r2 
                           2816 ;------------------------------------------------------------
                           2817 ;	../../shared/src/cmd_if.c:208: uint8_t cmd_dfe_res(uint8_t gen, uint8_t cmd_code) CMD_BANK {
                           2818 ;	-----------------------------------------
                           2819 ;	 function cmd_dfe_res
                           2820 ;	-----------------------------------------
   063C                    2821 _cmd_dfe_res:
   063C C0 18              2822 	push	_bp
   063E 85 81 18           2823 	mov	_bp,sp
   0641 AA 82              2824 	mov	r2,dpl
                           2825 ;	../../shared/src/cmd_if.c:210: if(gen==0x80) {//current
   0643 BA 80 02           2826 	cjne	r2,#0x80,00115$
   0646 80 03              2827 	sjmp	00116$
   0648                    2828 00115$:
   0648 02 06 C6           2829 	ljmp	00108$
   064B                    2830 00116$:
                           2831 ;	../../shared/src/cmd_if.c:212: if(cmd_code==CMD_RX_DFE_RES_GET) {
   064B E5 18              2832 	mov	a,_bp
   064D 24 FD              2833 	add	a,#0xfd
   064F F8                 2834 	mov	r0,a
   0650 B6 05 28           2835 	cjne	@r0,#0x05,00102$
                           2836 ;	../../shared/src/cmd_if.c:213: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = UPHY14_TRX_ANAREG_BOT_20.BT.B0; //dfe_res_f0/f1/f234
   0653 90 00 50           2837 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   0656 E0                 2838 	movx	a,@dptr
                           2839 ;	../../shared/src/cmd_if.c:214: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 |= (UPHY14_TRX_ANAREG_BOT_21.BT.B0 & 0xe0); //FLOATING/F8TO15/F567
   0657 90 60 24           2840 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   065A F0                 2841 	movx	@dptr,a
   065B E0                 2842 	movx	a,@dptr
   065C FB                 2843 	mov	r3,a
   065D 90 00 54           2844 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   0660 E0                 2845 	movx	a,@dptr
   0661 FC                 2846 	mov	r4,a
   0662 74 E0              2847 	mov	a,#0xE0
   0664 5C                 2848 	anl	a,r4
   0665 42 03              2849 	orl	ar3,a
   0667 90 60 24           2850 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   066A EB                 2851 	mov	a,r3
   066B F0                 2852 	movx	@dptr,a
                           2853 ;	../../shared/src/cmd_if.c:215: lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = reg_INT_DFE_EN_LANE;
   066C 90 24 11           2854 	mov	dptr,#(_RX_EQ_CLK_CTRL + 0x0001)
   066F E0                 2855 	movx	a,@dptr
   0670 03                 2856 	rr	a
   0671 54 01              2857 	anl	a,#0x01
   0673 FB                 2858 	mov	r3,a
   0674 90 60 25           2859 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0001)
   0677 F0                 2860 	movx	@dptr,a
   0678 02 07 54           2861 	ljmp	00109$
   067B                    2862 00102$:
                           2863 ;	../../shared/src/cmd_if.c:218: UPHY14_TRX_ANAREG_BOT_20.BT.B0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0; //dfe_res_f0/f1/f234
   067B 90 60 20           2864 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   067E E0                 2865 	movx	a,@dptr
   067F 90 00 50           2866 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   0682 F0                 2867 	movx	@dptr,a
                           2868 ;	../../shared/src/cmd_if.c:219: UPHY14_TRX_ANAREG_BOT_21.BT.B0 &= 0x1f;
   0683 90 00 54           2869 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   0686 E0                 2870 	movx	a,@dptr
   0687 FB                 2871 	mov	r3,a
   0688 53 03 1F           2872 	anl	ar3,#0x1F
                           2873 ;	../../shared/src/cmd_if.c:220: UPHY14_TRX_ANAREG_BOT_21.BT.B0 |= (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 & 0xe0); //FLOATING/F8TO15/F567
   068B 90 00 54           2874 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   068E EB                 2875 	mov	a,r3
   068F F0                 2876 	movx	@dptr,a
   0690 E0                 2877 	movx	a,@dptr
   0691 FB                 2878 	mov	r3,a
   0692 90 60 20           2879 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0695 E0                 2880 	movx	a,@dptr
   0696 FC                 2881 	mov	r4,a
   0697 74 E0              2882 	mov	a,#0xE0
   0699 5C                 2883 	anl	a,r4
   069A 42 03              2884 	orl	ar3,a
   069C 90 00 54           2885 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   069F EB                 2886 	mov	a,r3
   06A0 F0                 2887 	movx	@dptr,a
                           2888 ;	../../shared/src/cmd_if.c:221: reg_DFE_EN_LANE = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1 & 0x01;	dfe_dis = ~reg_DFE_EN_LANE;  dfe_dis = reg_DFE_DIS_LANE;  
   06A1 90 60 21           2889 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0001)
   06A4 E0                 2890 	movx	a,@dptr
   06A5 54 01              2891 	anl	a,#0x01
   06A7 90 24 10           2892 	mov	dptr,#_RX_EQ_CLK_CTRL
   06AA 13                 2893 	rrc	a
   06AB E0                 2894 	movx	a,@dptr
   06AC 92 E4              2895 	mov	acc.4,c
   06AE F0                 2896 	movx	@dptr,a
   06AF 90 24 10           2897 	mov	dptr,#_RX_EQ_CLK_CTRL
   06B2 E0                 2898 	movx	a,@dptr
   06B3 C4                 2899 	swap	a
   06B4 54 01              2900 	anl	a,#0x01
   06B6 90 24 0C           2901 	mov	dptr,#_DFE_CTRL_REG3
   06B9 E0                 2902 	movx	a,@dptr
   06BA 23                 2903 	rl	a
   06BB 23                 2904 	rl	a
   06BC 54 01              2905 	anl	a,#0x01
   06BE FB                 2906 	mov	r3,a
   06BF 90 66 F7           2907 	mov	dptr,#_dfe_dis
   06C2 F0                 2908 	movx	@dptr,a
   06C3 02 07 54           2909 	ljmp	00109$
   06C6                    2910 00108$:
                           2911 ;	../../shared/src/cmd_if.c:225: if(cmd_code==CMD_RX_DFE_RES_GET) {
   06C6 E5 18              2912 	mov	a,_bp
   06C8 24 FD              2913 	add	a,#0xfd
   06CA F8                 2914 	mov	r0,a
   06CB B6 05 36           2915 	cjne	@r0,#0x05,00105$
                           2916 ;	../../shared/src/cmd_if.c:226: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = rc_save[gen][0];//dfe_res
   06CE EA                 2917 	mov	a,r2
   06CF 2A                 2918 	add	a,r2
   06D0 25 E0              2919 	add	a,acc
   06D2 24 B4              2920 	add	a,#_rc_save
   06D4 F5 82              2921 	mov	dpl,a
   06D6 E4                 2922 	clr	a
   06D7 34 60              2923 	addc	a,#(_rc_save >> 8)
   06D9 F5 83              2924 	mov	dph,a
   06DB E0                 2925 	movx	a,@dptr
   06DC 90 60 24           2926 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   06DF F0                 2927 	movx	@dptr,a
                           2928 ;	../../shared/src/cmd_if.c:227: lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = speedtable[gen][spdoft_reg_dfe_dis_lane]==0; 
   06E0 EA                 2929 	mov	a,r2
   06E1 75 F0 50           2930 	mov	b,#0x50
   06E4 A4                 2931 	mul	ab
   06E5 24 04              2932 	add	a,#_speedtable
   06E7 FB                 2933 	mov	r3,a
   06E8 74 63              2934 	mov	a,#(_speedtable >> 8)
   06EA 35 F0              2935 	addc	a,b
   06EC FC                 2936 	mov	r4,a
   06ED 74 41              2937 	mov	a,#0x41
   06EF 2B                 2938 	add	a,r3
   06F0 F5 82              2939 	mov	dpl,a
   06F2 E4                 2940 	clr	a
   06F3 3C                 2941 	addc	a,r4
   06F4 F5 83              2942 	mov	dph,a
   06F6 E0                 2943 	movx	a,@dptr
   06F7 FB                 2944 	mov	r3,a
   06F8 E4                 2945 	clr	a
   06F9 BB 00 01           2946 	cjne	r3,#0x00,00121$
   06FC 04                 2947 	inc	a
   06FD                    2948 00121$:
   06FD FB                 2949 	mov	r3,a
   06FE 90 60 25           2950 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0001)
   0701 F0                 2951 	movx	@dptr,a
   0702 80 50              2952 	sjmp	00109$
   0704                    2953 00105$:
                           2954 ;	../../shared/src/cmd_if.c:230: rc_save[gen][0] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0; 
   0704 EA                 2955 	mov	a,r2
   0705 2A                 2956 	add	a,r2
   0706 25 E0              2957 	add	a,acc
   0708 24 B4              2958 	add	a,#_rc_save
   070A FB                 2959 	mov	r3,a
   070B E4                 2960 	clr	a
   070C 34 60              2961 	addc	a,#(_rc_save >> 8)
   070E FC                 2962 	mov	r4,a
   070F 90 60 20           2963 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0712 E0                 2964 	movx	a,@dptr
   0713 8B 82              2965 	mov	dpl,r3
   0715 8C 83              2966 	mov	dph,r4
   0717 F0                 2967 	movx	@dptr,a
                           2968 ;	../../shared/src/cmd_if.c:231: speedtable[gen][spdoft_reg_dfe_dis_lane] = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1&0x1)==0; 
   0718 EA                 2969 	mov	a,r2
   0719 75 F0 50           2970 	mov	b,#0x50
   071C A4                 2971 	mul	ab
   071D 24 04              2972 	add	a,#_speedtable
   071F FB                 2973 	mov	r3,a
   0720 74 63              2974 	mov	a,#(_speedtable >> 8)
   0722 35 F0              2975 	addc	a,b
   0724 FC                 2976 	mov	r4,a
   0725 74 41              2977 	mov	a,#0x41
   0727 2B                 2978 	add	a,r3
   0728 FB                 2979 	mov	r3,a
   0729 E4                 2980 	clr	a
   072A 3C                 2981 	addc	a,r4
   072B FC                 2982 	mov	r4,a
   072C 90 60 21           2983 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0001)
   072F E0                 2984 	movx	a,@dptr
   0730 FD                 2985 	mov	r5,a
   0731 53 05 01           2986 	anl	ar5,#0x01
   0734 E4                 2987 	clr	a
   0735 BD 00 01           2988 	cjne	r5,#0x00,00123$
   0738 04                 2989 	inc	a
   0739                    2990 00123$:
   0739 FD                 2991 	mov	r5,a
   073A 8B 82              2992 	mov	dpl,r3
   073C 8C 83              2993 	mov	dph,r4
   073E F0                 2994 	movx	@dptr,a
                           2995 ;	../../shared/src/cmd_if.c:232: dfe_res_save_en |= 0x01<<gen;
   073F 8A F0              2996 	mov	b,r2
   0741 05 F0              2997 	inc	b
   0743 74 01              2998 	mov	a,#0x01
   0745 80 02              2999 	sjmp	00127$
   0747                    3000 00125$:
   0747 25 E0              3001 	add	a,acc
   0749                    3002 00127$:
   0749 D5 F0 FB           3003 	djnz	b,00125$
   074C FA                 3004 	mov	r2,a
   074D 90 67 A8           3005 	mov	dptr,#_dfe_res_save_en
   0750 E0                 3006 	movx	a,@dptr
   0751 FB                 3007 	mov	r3,a
   0752 4A                 3008 	orl	a,r2
   0753 F0                 3009 	movx	@dptr,a
   0754                    3010 00109$:
                           3011 ;	../../shared/src/cmd_if.c:235: return 0;
   0754 75 82 00           3012 	mov	dpl,#0x00
   0757 D0 18              3013 	pop	_bp
   0759 22                 3014 	ret
                           3015 ;------------------------------------------------------------
                           3016 ;Allocation info for local variables in function 'cmd_rx_ffe'
                           3017 ;------------------------------------------------------------
                           3018 ;cmd_code                  Allocated to stack - offset -3
                           3019 ;gen                       Allocated to registers r2 
                           3020 ;------------------------------------------------------------
                           3021 ;	../../shared/src/cmd_if.c:238: uint8_t cmd_rx_ffe(uint8_t gen, uint8_t cmd_code) CMD_BANK {
                           3022 ;	-----------------------------------------
                           3023 ;	 function cmd_rx_ffe
                           3024 ;	-----------------------------------------
   075A                    3025 _cmd_rx_ffe:
   075A C0 18              3026 	push	_bp
   075C 85 81 18           3027 	mov	_bp,sp
   075F AA 82              3028 	mov	r2,dpl
                           3029 ;	../../shared/src/cmd_if.c:240: if(gen==0x80) {//current
   0761 BA 80 40           3030 	cjne	r2,#0x80,00108$
                           3031 ;	../../shared/src/cmd_if.c:242: if(cmd_code==CMD_RX_FFE_GET) {
   0764 E5 18              3032 	mov	a,_bp
   0766 24 FD              3033 	add	a,#0xfd
   0768 F8                 3034 	mov	r0,a
   0769 B6 03 17           3035 	cjne	@r0,#0x03,00102$
                           3036 ;	../../shared/src/cmd_if.c:243: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = UPHY14_TRX_ANAREG_TOP_128.BT.B0; //ffe_cap1/res1
   076C 90 02 00           3037 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_128
   076F E0                 3038 	movx	a,@dptr
   0770 FB                 3039 	mov	r3,a
   0771 90 60 24           3040 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0774 EB                 3041 	mov	a,r3
   0775 F0                 3042 	movx	@dptr,a
                           3043 ;	../../shared/src/cmd_if.c:245: lnx_PHY_LOCAL_VALUE_LANE_31_0_b2 = UPHY14_TRX_ANAREG_TOP_129.BT.B0; //ffe_cap2/res2/O
   0776 90 02 04           3044 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_129
   0779 E0                 3045 	movx	a,@dptr
   077A FB                 3046 	mov	r3,a
   077B 90 60 26           3047 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0002)
   077E EB                 3048 	mov	a,r3
   077F F0                 3049 	movx	@dptr,a
   0780 02 08 46           3050 	ljmp	00109$
   0783                    3051 00102$:
                           3052 ;	../../shared/src/cmd_if.c:248: UPHY14_TRX_ANAREG_TOP_128.BT.B0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0; //ffe_cap1/res1
   0783 90 60 20           3053 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0786 E0                 3054 	movx	a,@dptr
   0787 FB                 3055 	mov	r3,a
   0788 90 02 00           3056 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_128
   078B EB                 3057 	mov	a,r3
   078C F0                 3058 	movx	@dptr,a
                           3059 ;	../../shared/src/cmd_if.c:250: UPHY14_TRX_ANAREG_BOT_0.BT.B0   = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2; //ffe_cap2/res2/E
   078D 90 60 22           3060 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0002)
   0790 E0                 3061 	movx	a,@dptr
   0791 FB                 3062 	mov	r3,a
   0792 90 00 00           3063 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_0
   0795 EB                 3064 	mov	a,r3
   0796 F0                 3065 	movx	@dptr,a
                           3066 ;	../../shared/src/cmd_if.c:251: UPHY14_TRX_ANAREG_TOP_129.BT.B0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2; //ffe_cap2/res2/O
   0797 90 60 22           3067 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0002)
   079A E0                 3068 	movx	a,@dptr
   079B FB                 3069 	mov	r3,a
   079C 90 02 04           3070 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_129
   079F EB                 3071 	mov	a,r3
   07A0 F0                 3072 	movx	@dptr,a
   07A1 02 08 46           3073 	ljmp	00109$
   07A4                    3074 00108$:
                           3075 ;	../../shared/src/cmd_if.c:255: if(cmd_code==CMD_RX_FFE_GET) {
   07A4 E5 18              3076 	mov	a,_bp
   07A6 24 FD              3077 	add	a,#0xfd
   07A8 F8                 3078 	mov	r0,a
   07A9 B6 03 30           3079 	cjne	@r0,#0x03,00105$
                           3080 ;	../../shared/src/cmd_if.c:256: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = rc_save[gen][1]; //ffe_cap1/res1
   07AC EA                 3081 	mov	a,r2
   07AD 2A                 3082 	add	a,r2
   07AE 25 E0              3083 	add	a,acc
   07B0 FB                 3084 	mov	r3,a
   07B1 24 B4              3085 	add	a,#_rc_save
   07B3 FC                 3086 	mov	r4,a
   07B4 E4                 3087 	clr	a
   07B5 34 60              3088 	addc	a,#(_rc_save >> 8)
   07B7 FD                 3089 	mov	r5,a
   07B8 8C 82              3090 	mov	dpl,r4
   07BA 8D 83              3091 	mov	dph,r5
   07BC A3                 3092 	inc	dptr
   07BD E0                 3093 	movx	a,@dptr
   07BE FC                 3094 	mov	r4,a
   07BF 90 60 24           3095 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   07C2 EC                 3096 	mov	a,r4
   07C3 F0                 3097 	movx	@dptr,a
                           3098 ;	../../shared/src/cmd_if.c:258: lnx_PHY_LOCAL_VALUE_LANE_31_0_b2 = rc_save[gen][3]; //ffe_cap2/res2/O
   07C4 EB                 3099 	mov	a,r3
   07C5 24 B4              3100 	add	a,#_rc_save
   07C7 FB                 3101 	mov	r3,a
   07C8 E4                 3102 	clr	a
   07C9 34 60              3103 	addc	a,#(_rc_save >> 8)
   07CB FC                 3104 	mov	r4,a
   07CC 8B 82              3105 	mov	dpl,r3
   07CE 8C 83              3106 	mov	dph,r4
   07D0 A3                 3107 	inc	dptr
   07D1 A3                 3108 	inc	dptr
   07D2 A3                 3109 	inc	dptr
   07D3 E0                 3110 	movx	a,@dptr
   07D4 FB                 3111 	mov	r3,a
   07D5 90 60 26           3112 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0002)
   07D8 EB                 3113 	mov	a,r3
   07D9 F0                 3114 	movx	@dptr,a
   07DA 80 6A              3115 	sjmp	00109$
   07DC                    3116 00105$:
                           3117 ;	../../shared/src/cmd_if.c:261: rc_save[gen][1] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0; //ffe_cap1/res1
   07DC EA                 3118 	mov	a,r2
   07DD 2A                 3119 	add	a,r2
   07DE 25 E0              3120 	add	a,acc
   07E0 FB                 3121 	mov	r3,a
   07E1 24 B4              3122 	add	a,#_rc_save
   07E3 FC                 3123 	mov	r4,a
   07E4 E4                 3124 	clr	a
   07E5 34 60              3125 	addc	a,#(_rc_save >> 8)
   07E7 FD                 3126 	mov	r5,a
   07E8 0C                 3127 	inc	r4
   07E9 BC 00 01           3128 	cjne	r4,#0x00,00121$
   07EC 0D                 3129 	inc	r5
   07ED                    3130 00121$:
   07ED 90 60 20           3131 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   07F0 E0                 3132 	movx	a,@dptr
   07F1 FE                 3133 	mov	r6,a
   07F2 8C 82              3134 	mov	dpl,r4
   07F4 8D 83              3135 	mov	dph,r5
   07F6 EE                 3136 	mov	a,r6
   07F7 F0                 3137 	movx	@dptr,a
                           3138 ;	../../shared/src/cmd_if.c:263: rc_save[gen][2] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2; //ffe_cap2/res2/E
   07F8 EB                 3139 	mov	a,r3
   07F9 24 B4              3140 	add	a,#_rc_save
   07FB FC                 3141 	mov	r4,a
   07FC E4                 3142 	clr	a
   07FD 34 60              3143 	addc	a,#(_rc_save >> 8)
   07FF FD                 3144 	mov	r5,a
   0800 74 02              3145 	mov	a,#0x02
   0802 2C                 3146 	add	a,r4
   0803 FC                 3147 	mov	r4,a
   0804 E4                 3148 	clr	a
   0805 3D                 3149 	addc	a,r5
   0806 FD                 3150 	mov	r5,a
   0807 90 60 22           3151 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0002)
   080A E0                 3152 	movx	a,@dptr
   080B FE                 3153 	mov	r6,a
   080C 8C 82              3154 	mov	dpl,r4
   080E 8D 83              3155 	mov	dph,r5
   0810 EE                 3156 	mov	a,r6
   0811 F0                 3157 	movx	@dptr,a
                           3158 ;	../../shared/src/cmd_if.c:264: rc_save[gen][3] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2; //ffe_cap2/res2/O
   0812 EB                 3159 	mov	a,r3
   0813 24 B4              3160 	add	a,#_rc_save
   0815 FB                 3161 	mov	r3,a
   0816 E4                 3162 	clr	a
   0817 34 60              3163 	addc	a,#(_rc_save >> 8)
   0819 FC                 3164 	mov	r4,a
   081A 74 03              3165 	mov	a,#0x03
   081C 2B                 3166 	add	a,r3
   081D FB                 3167 	mov	r3,a
   081E E4                 3168 	clr	a
   081F 3C                 3169 	addc	a,r4
   0820 FC                 3170 	mov	r4,a
   0821 90 60 22           3171 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0002)
   0824 E0                 3172 	movx	a,@dptr
   0825 FD                 3173 	mov	r5,a
   0826 8B 82              3174 	mov	dpl,r3
   0828 8C 83              3175 	mov	dph,r4
   082A ED                 3176 	mov	a,r5
   082B F0                 3177 	movx	@dptr,a
                           3178 ;	../../shared/src/cmd_if.c:265: TRAIN_CONTROL_9.BT.B1 |= (0x01<<gen);
   082C 90 60 CD           3179 	mov	dptr,#(_TRAIN_CONTROL_9 + 0x0001)
   082F E0                 3180 	movx	a,@dptr
   0830 FB                 3181 	mov	r3,a
   0831 8A F0              3182 	mov	b,r2
   0833 05 F0              3183 	inc	b
   0835 74 01              3184 	mov	a,#0x01
   0837 80 02              3185 	sjmp	00124$
   0839                    3186 00122$:
   0839 25 E0              3187 	add	a,acc
   083B                    3188 00124$:
   083B D5 F0 FB           3189 	djnz	b,00122$
   083E FA                 3190 	mov	r2,a
   083F 42 03              3191 	orl	ar3,a
   0841 90 60 CD           3192 	mov	dptr,#(_TRAIN_CONTROL_9 + 0x0001)
   0844 EB                 3193 	mov	a,r3
   0845 F0                 3194 	movx	@dptr,a
   0846                    3195 00109$:
                           3196 ;	../../shared/src/cmd_if.c:268: return 0;
   0846 75 82 00           3197 	mov	dpl,#0x00
   0849 D0 18              3198 	pop	_bp
   084B 22                 3199 	ret
                           3200 ;------------------------------------------------------------
                           3201 ;Allocation info for local variables in function 'cmd_sq_thrs_ratio'
                           3202 ;------------------------------------------------------------
                           3203 ;cmd_code                  Allocated to stack - offset -3
                           3204 ;gen                       Allocated to registers r2 
                           3205 ;temp                      Allocated to registers r3 r4 
                           3206 ;------------------------------------------------------------
                           3207 ;	../../shared/src/cmd_if.c:272: uint8_t cmd_sq_thrs_ratio(uint8_t gen, uint8_t cmd_code) CMD_BANK {
                           3208 ;	-----------------------------------------
                           3209 ;	 function cmd_sq_thrs_ratio
                           3210 ;	-----------------------------------------
   084C                    3211 _cmd_sq_thrs_ratio:
   084C C0 18              3212 	push	_bp
   084E 85 81 18           3213 	mov	_bp,sp
   0851 AA 82              3214 	mov	r2,dpl
                           3215 ;	../../shared/src/cmd_if.c:275: if(gen==0x80) {//current
   0853 BA 80 02           3216 	cjne	r2,#0x80,00119$
   0856 80 03              3217 	sjmp	00120$
   0858                    3218 00119$:
   0858 02 08 E7           3219 	ljmp	00111$
   085B                    3220 00120$:
                           3221 ;	../../shared/src/cmd_if.c:276: if(cmd_code==CMD_SQ_THRS_RATIO_GET) {
   085B E5 18              3222 	mov	a,_bp
   085D 24 FD              3223 	add	a,#0xfd
   085F F8                 3224 	mov	r0,a
   0860 B6 07 0C           3225 	cjne	@r0,#0x07,00105$
                           3226 ;	../../shared/src/cmd_if.c:277: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = sq_thrs_ratio;
   0863 90 67 A6           3227 	mov	dptr,#_sq_thrs_ratio
   0866 E0                 3228 	movx	a,@dptr
   0867 FB                 3229 	mov	r3,a
   0868 90 60 24           3230 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   086B F0                 3231 	movx	@dptr,a
   086C 02 09 2C           3232 	ljmp	00112$
   086F                    3233 00105$:
                           3234 ;	../../shared/src/cmd_if.c:280: temp = lnx_CAL_SQ_THRESH_LANE_7_0 & 0x1f;
   086F 90 60 13           3235 	mov	dptr,#(_CAL_SAVE_DATA1_LANE + 0x0003)
   0872 E0                 3236 	movx	a,@dptr
   0873 FB                 3237 	mov	r3,a
   0874 53 03 1F           3238 	anl	ar3,#0x1F
   0877 7C 00              3239 	mov	r4,#0x00
                           3240 ;	../../shared/src/cmd_if.c:281: sq_thrs_ratio = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x1f;
   0879 90 60 20           3241 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   087C E0                 3242 	movx	a,@dptr
   087D FD                 3243 	mov	r5,a
   087E 53 05 1F           3244 	anl	ar5,#0x1F
   0881 90 67 A6           3245 	mov	dptr,#_sq_thrs_ratio
   0884 ED                 3246 	mov	a,r5
   0885 F0                 3247 	movx	@dptr,a
                           3248 ;	../../shared/src/cmd_if.c:282: if(sq_thrs_ratio==0) 
   0886 ED                 3249 	mov	a,r5
   0887 70 19              3250 	jnz	00102$
                           3251 ;	../../shared/src/cmd_if.c:283: reg_SQ_THRESH_LANE_5_0 = lnx_CAL_SQ_THRESH_LANE_7_0;	
   0889 90 60 13           3252 	mov	dptr,#(_CAL_SAVE_DATA1_LANE + 0x0003)
   088C E0                 3253 	movx	a,@dptr
   088D FE                 3254 	mov	r6,a
   088E 90 00 10           3255 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_4
   0891 25 E0              3256 	add	a,acc
   0893 25 E0              3257 	add	a,acc
   0895 54 FC              3258 	anl	a,#0xfc
   0897 F5 F0              3259 	mov	b,a
   0899 E0                 3260 	movx	a,@dptr
   089A 54 03              3261 	anl	a,#0x03
   089C 45 F0              3262 	orl	a,b
   089E F0                 3263 	movx	@dptr,a
   089F 02 09 2C           3264 	ljmp	00112$
   08A2                    3265 00102$:
                           3266 ;	../../shared/src/cmd_if.c:285: temp = (temp * sq_thrs_ratio)>>5;
   08A2 7E 00              3267 	mov	r6,#0x00
   08A4 C0 05              3268 	push	ar5
   08A6 C0 06              3269 	push	ar6
   08A8 8B 82              3270 	mov	dpl,r3
   08AA 8C 83              3271 	mov	dph,r4
   08AC 12 78 4F           3272 	lcall	__mulint
   08AF AD 82              3273 	mov	r5,dpl
   08B1 AE 83              3274 	mov	r6,dph
   08B3 15 81              3275 	dec	sp
   08B5 15 81              3276 	dec	sp
   08B7 8D 03              3277 	mov	ar3,r5
   08B9 EE                 3278 	mov	a,r6
   08BA C4                 3279 	swap	a
   08BB 03                 3280 	rr	a
   08BC CB                 3281 	xch	a,r3
   08BD C4                 3282 	swap	a
   08BE 03                 3283 	rr	a
   08BF 54 07              3284 	anl	a,#0x07
   08C1 6B                 3285 	xrl	a,r3
   08C2 CB                 3286 	xch	a,r3
   08C3 54 07              3287 	anl	a,#0x07
   08C5 CB                 3288 	xch	a,r3
   08C6 6B                 3289 	xrl	a,r3
   08C7 CB                 3290 	xch	a,r3
   08C8 FC                 3291 	mov	r4,a
                           3292 ;	../../shared/src/cmd_if.c:286: reg_SQ_THRESH_LANE_5_0 = (lnx_CAL_SQ_THRESH_LANE_7_0&0x20) | ((uint8_t)temp); 
   08C9 90 60 13           3293 	mov	dptr,#(_CAL_SAVE_DATA1_LANE + 0x0003)
   08CC E0                 3294 	movx	a,@dptr
   08CD FD                 3295 	mov	r5,a
   08CE 53 05 20           3296 	anl	ar5,#0x20
   08D1 EB                 3297 	mov	a,r3
   08D2 42 05              3298 	orl	ar5,a
   08D4 90 00 10           3299 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_4
   08D7 ED                 3300 	mov	a,r5
   08D8 2D                 3301 	add	a,r5
   08D9 25 E0              3302 	add	a,acc
   08DB 54 FC              3303 	anl	a,#0xfc
   08DD F5 F0              3304 	mov	b,a
   08DF E0                 3305 	movx	a,@dptr
   08E0 54 03              3306 	anl	a,#0x03
   08E2 45 F0              3307 	orl	a,b
   08E4 F0                 3308 	movx	@dptr,a
   08E5 80 45              3309 	sjmp	00112$
   08E7                    3310 00111$:
                           3311 ;	../../shared/src/cmd_if.c:291: if(cmd_code==CMD_SQ_THRS_RATIO_GET) {
   08E7 E5 18              3312 	mov	a,_bp
   08E9 24 FD              3313 	add	a,#0xfd
   08EB F8                 3314 	mov	r0,a
   08EC B6 07 12           3315 	cjne	@r0,#0x07,00108$
                           3316 ;	../../shared/src/cmd_if.c:292: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = sq_thrs_ratio_tb[gen];
   08EF EA                 3317 	mov	a,r2
   08F0 24 7C              3318 	add	a,#_sq_thrs_ratio_tb
   08F2 F5 82              3319 	mov	dpl,a
   08F4 E4                 3320 	clr	a
   08F5 34 60              3321 	addc	a,#(_sq_thrs_ratio_tb >> 8)
   08F7 F5 83              3322 	mov	dph,a
   08F9 E0                 3323 	movx	a,@dptr
   08FA FB                 3324 	mov	r3,a
   08FB 90 60 24           3325 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   08FE F0                 3326 	movx	@dptr,a
   08FF 80 2B              3327 	sjmp	00112$
   0901                    3328 00108$:
                           3329 ;	../../shared/src/cmd_if.c:295: sq_thrs_ratio_tb[gen] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x1f;
   0901 EA                 3330 	mov	a,r2
   0902 24 7C              3331 	add	a,#_sq_thrs_ratio_tb
   0904 FB                 3332 	mov	r3,a
   0905 E4                 3333 	clr	a
   0906 34 60              3334 	addc	a,#(_sq_thrs_ratio_tb >> 8)
   0908 FC                 3335 	mov	r4,a
   0909 90 60 20           3336 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   090C E0                 3337 	movx	a,@dptr
   090D FD                 3338 	mov	r5,a
   090E 53 05 1F           3339 	anl	ar5,#0x1F
   0911 8B 82              3340 	mov	dpl,r3
   0913 8C 83              3341 	mov	dph,r4
   0915 ED                 3342 	mov	a,r5
   0916 F0                 3343 	movx	@dptr,a
                           3344 ;	../../shared/src/cmd_if.c:296: sq_thrs_ratio_gen_en |= (0x1 << gen);
   0917 8A F0              3345 	mov	b,r2
   0919 05 F0              3346 	inc	b
   091B 74 01              3347 	mov	a,#0x01
   091D 80 02              3348 	sjmp	00128$
   091F                    3349 00126$:
   091F 25 E0              3350 	add	a,acc
   0921                    3351 00128$:
   0921 D5 F0 FB           3352 	djnz	b,00126$
   0924 FA                 3353 	mov	r2,a
   0925 90 67 A7           3354 	mov	dptr,#_sq_thrs_ratio_gen_en
   0928 E0                 3355 	movx	a,@dptr
   0929 FB                 3356 	mov	r3,a
   092A 4A                 3357 	orl	a,r2
   092B F0                 3358 	movx	@dptr,a
   092C                    3359 00112$:
                           3360 ;	../../shared/src/cmd_if.c:299: return 0;
   092C 75 82 00           3361 	mov	dpl,#0x00
   092F D0 18              3362 	pop	_bp
   0931 22                 3363 	ret
                           3364 ;------------------------------------------------------------
                           3365 ;Allocation info for local variables in function 'cmd_tx_slew_rate'
                           3366 ;------------------------------------------------------------
                           3367 ;cmd_code                  Allocated to stack - offset -3
                           3368 ;gen                       Allocated to registers r2 
                           3369 ;------------------------------------------------------------
                           3370 ;	../../shared/src/cmd_if.c:302: uint8_t cmd_tx_slew_rate(uint8_t gen, uint8_t cmd_code) CMD_BANK {
                           3371 ;	-----------------------------------------
                           3372 ;	 function cmd_tx_slew_rate
                           3373 ;	-----------------------------------------
   0932                    3374 _cmd_tx_slew_rate:
   0932 C0 18              3375 	push	_bp
   0934 85 81 18           3376 	mov	_bp,sp
   0937 AA 82              3377 	mov	r2,dpl
                           3378 ;	../../shared/src/cmd_if.c:304: if(gen==0x80) {//current ana
   0939 BA 80 02           3379 	cjne	r2,#0x80,00118$
   093C 80 03              3380 	sjmp	00119$
   093E                    3381 00118$:
   093E 02 09 D8           3382 	ljmp	00110$
   0941                    3383 00119$:
                           3384 ;	../../shared/src/cmd_if.c:305: if(cmd_code==CMD_TX_SLEW_RATE_GET) {
   0941 E5 18              3385 	mov	a,_bp
   0943 24 FD              3386 	add	a,#0xfd
   0945 F8                 3387 	mov	r0,a
   0946 B6 07 2C           3388 	cjne	@r0,#0x07,00105$
                           3389 ;	../../shared/src/cmd_if.c:306: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = reg_SLEWCTRL0_LANE_1_0;
   0949 90 00 4C           3390 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_19
   094C E0                 3391 	movx	a,@dptr
   094D C4                 3392 	swap	a
   094E 54 03              3393 	anl	a,#0x03
   0950 FB                 3394 	mov	r3,a
   0951 90 60 24           3395 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0954 EB                 3396 	mov	a,r3
   0955 F0                 3397 	movx	@dptr,a
                           3398 ;	../../shared/src/cmd_if.c:307: lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = reg_SLEWCTRL1_LANE_1_0;
   0956 90 00 4C           3399 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_19
   0959 E0                 3400 	movx	a,@dptr
   095A 03                 3401 	rr	a
   095B 03                 3402 	rr	a
   095C 54 03              3403 	anl	a,#0x03
   095E FB                 3404 	mov	r3,a
   095F 90 60 25           3405 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0001)
   0962 EB                 3406 	mov	a,r3
   0963 F0                 3407 	movx	@dptr,a
                           3408 ;	../../shared/src/cmd_if.c:308: lnx_PHY_LOCAL_VALUE_LANE_31_0_b2 = reg_SLEWRATE_EN_LANE_1_0;
   0964 90 00 4C           3409 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_19
   0967 E0                 3410 	movx	a,@dptr
   0968 23                 3411 	rl	a
   0969 23                 3412 	rl	a
   096A 54 03              3413 	anl	a,#0x03
   096C FB                 3414 	mov	r3,a
   096D 90 60 26           3415 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0002)
   0970 EB                 3416 	mov	a,r3
   0971 F0                 3417 	movx	@dptr,a
   0972 02 0A 8F           3418 	ljmp	00111$
   0975                    3419 00105$:
                           3420 ;	../../shared/src/cmd_if.c:311: if(lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2==1 || lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2==2) return CMD_ST_INVALID_VALUE;
   0975 90 60 22           3421 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0002)
   0978 E0                 3422 	movx	a,@dptr
   0979 FB                 3423 	mov	r3,a
   097A BB 01 02           3424 	cjne	r3,#0x01,00122$
   097D 80 08              3425 	sjmp	00101$
   097F                    3426 00122$:
   097F 90 60 22           3427 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0002)
   0982 E0                 3428 	movx	a,@dptr
   0983 FB                 3429 	mov	r3,a
   0984 BB 02 06           3430 	cjne	r3,#0x02,00102$
   0987                    3431 00101$:
   0987 75 82 04           3432 	mov	dpl,#0x04
   098A 02 0A 92           3433 	ljmp	00112$
   098D                    3434 00102$:
                           3435 ;	../../shared/src/cmd_if.c:312: reg_SLEWCTRL0_LANE_1_0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 & 0x3;
   098D 90 60 20           3436 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0990 E0                 3437 	movx	a,@dptr
   0991 FB                 3438 	mov	r3,a
   0992 53 03 03           3439 	anl	ar3,#0x03
   0995 90 00 4C           3440 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_19
   0998 EB                 3441 	mov	a,r3
   0999 C4                 3442 	swap	a
   099A 54 30              3443 	anl	a,#(0xf0&0x30)
   099C F5 F0              3444 	mov	b,a
   099E E0                 3445 	movx	a,@dptr
   099F 54 CF              3446 	anl	a,#0xcf
   09A1 45 F0              3447 	orl	a,b
   09A3 F0                 3448 	movx	@dptr,a
                           3449 ;	../../shared/src/cmd_if.c:313: reg_SLEWCTRL1_LANE_1_0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1 & 0x3;
   09A4 90 60 21           3450 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0001)
   09A7 E0                 3451 	movx	a,@dptr
   09A8 FB                 3452 	mov	r3,a
   09A9 53 03 03           3453 	anl	ar3,#0x03
   09AC 90 00 4C           3454 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_19
   09AF EB                 3455 	mov	a,r3
   09B0 2B                 3456 	add	a,r3
   09B1 25 E0              3457 	add	a,acc
   09B3 54 0C              3458 	anl	a,#0x0c
   09B5 F5 F0              3459 	mov	b,a
   09B7 E0                 3460 	movx	a,@dptr
   09B8 54 F3              3461 	anl	a,#0xf3
   09BA 45 F0              3462 	orl	a,b
   09BC F0                 3463 	movx	@dptr,a
                           3464 ;	../../shared/src/cmd_if.c:314: reg_SLEWRATE_EN_LANE_1_0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2 & 0x3;
   09BD 90 60 22           3465 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0002)
   09C0 E0                 3466 	movx	a,@dptr
   09C1 FB                 3467 	mov	r3,a
   09C2 53 03 03           3468 	anl	ar3,#0x03
   09C5 90 00 4C           3469 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_19
   09C8 EB                 3470 	mov	a,r3
   09C9 03                 3471 	rr	a
   09CA 03                 3472 	rr	a
   09CB 54 C0              3473 	anl	a,#(0xc0&0xc0)
   09CD F5 F0              3474 	mov	b,a
   09CF E0                 3475 	movx	a,@dptr
   09D0 54 3F              3476 	anl	a,#0x3f
   09D2 45 F0              3477 	orl	a,b
   09D4 F0                 3478 	movx	@dptr,a
   09D5 02 0A 8F           3479 	ljmp	00111$
   09D8                    3480 00110$:
                           3481 ;	../../shared/src/cmd_if.c:319: if(cmd_code==CMD_TX_SLEW_RATE_SET) {
   09D8 E5 18              3482 	mov	a,_bp
   09DA 24 FD              3483 	add	a,#0xfd
   09DC F8                 3484 	mov	r0,a
   09DD B6 06 5F           3485 	cjne	@r0,#0x06,00108$
                           3486 ;	../../shared/src/cmd_if.c:320: speedtable[gen][spdoft_slewctrl0_lane] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 & 0x03;
   09E0 EA                 3487 	mov	a,r2
   09E1 75 F0 50           3488 	mov	b,#0x50
   09E4 A4                 3489 	mul	ab
   09E5 FB                 3490 	mov	r3,a
   09E6 AC F0              3491 	mov	r4,b
   09E8 EB                 3492 	mov	a,r3
   09E9 24 04              3493 	add	a,#_speedtable
   09EB FD                 3494 	mov	r5,a
   09EC EC                 3495 	mov	a,r4
   09ED 34 63              3496 	addc	a,#(_speedtable >> 8)
   09EF FE                 3497 	mov	r6,a
   09F0 74 0E              3498 	mov	a,#0x0E
   09F2 2D                 3499 	add	a,r5
   09F3 FD                 3500 	mov	r5,a
   09F4 E4                 3501 	clr	a
   09F5 3E                 3502 	addc	a,r6
   09F6 FE                 3503 	mov	r6,a
   09F7 90 60 20           3504 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   09FA E0                 3505 	movx	a,@dptr
   09FB FF                 3506 	mov	r7,a
   09FC 53 07 03           3507 	anl	ar7,#0x03
   09FF 8D 82              3508 	mov	dpl,r5
   0A01 8E 83              3509 	mov	dph,r6
   0A03 EF                 3510 	mov	a,r7
   0A04 F0                 3511 	movx	@dptr,a
                           3512 ;	../../shared/src/cmd_if.c:321: speedtable[gen][spdoft_slewctrl1_lane] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1 & 0x03;
   0A05 EB                 3513 	mov	a,r3
   0A06 24 04              3514 	add	a,#_speedtable
   0A08 FD                 3515 	mov	r5,a
   0A09 EC                 3516 	mov	a,r4
   0A0A 34 63              3517 	addc	a,#(_speedtable >> 8)
   0A0C FE                 3518 	mov	r6,a
   0A0D 74 0D              3519 	mov	a,#0x0D
   0A0F 2D                 3520 	add	a,r5
   0A10 FD                 3521 	mov	r5,a
   0A11 E4                 3522 	clr	a
   0A12 3E                 3523 	addc	a,r6
   0A13 FE                 3524 	mov	r6,a
   0A14 90 60 21           3525 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0001)
   0A17 E0                 3526 	movx	a,@dptr
   0A18 FF                 3527 	mov	r7,a
   0A19 53 07 03           3528 	anl	ar7,#0x03
   0A1C 8D 82              3529 	mov	dpl,r5
   0A1E 8E 83              3530 	mov	dph,r6
   0A20 EF                 3531 	mov	a,r7
   0A21 F0                 3532 	movx	@dptr,a
                           3533 ;	../../shared/src/cmd_if.c:322: speedtable[gen][spdoft_slewrate_en_lane] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2 & 0x3;
   0A22 EB                 3534 	mov	a,r3
   0A23 24 04              3535 	add	a,#_speedtable
   0A25 FB                 3536 	mov	r3,a
   0A26 EC                 3537 	mov	a,r4
   0A27 34 63              3538 	addc	a,#(_speedtable >> 8)
   0A29 FC                 3539 	mov	r4,a
   0A2A 74 0C              3540 	mov	a,#0x0C
   0A2C 2B                 3541 	add	a,r3
   0A2D FB                 3542 	mov	r3,a
   0A2E E4                 3543 	clr	a
   0A2F 3C                 3544 	addc	a,r4
   0A30 FC                 3545 	mov	r4,a
   0A31 90 60 22           3546 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0002)
   0A34 E0                 3547 	movx	a,@dptr
   0A35 FD                 3548 	mov	r5,a
   0A36 53 05 03           3549 	anl	ar5,#0x03
   0A39 8B 82              3550 	mov	dpl,r3
   0A3B 8C 83              3551 	mov	dph,r4
   0A3D ED                 3552 	mov	a,r5
   0A3E F0                 3553 	movx	@dptr,a
   0A3F                    3554 00108$:
                           3555 ;	../../shared/src/cmd_if.c:324: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = speedtable[gen][spdoft_slewctrl0_lane];
   0A3F EA                 3556 	mov	a,r2
   0A40 75 F0 50           3557 	mov	b,#0x50
   0A43 A4                 3558 	mul	ab
   0A44 FA                 3559 	mov	r2,a
   0A45 AB F0              3560 	mov	r3,b
   0A47 EA                 3561 	mov	a,r2
   0A48 24 04              3562 	add	a,#_speedtable
   0A4A FC                 3563 	mov	r4,a
   0A4B EB                 3564 	mov	a,r3
   0A4C 34 63              3565 	addc	a,#(_speedtable >> 8)
   0A4E FD                 3566 	mov	r5,a
   0A4F 74 0E              3567 	mov	a,#0x0E
   0A51 2C                 3568 	add	a,r4
   0A52 F5 82              3569 	mov	dpl,a
   0A54 E4                 3570 	clr	a
   0A55 3D                 3571 	addc	a,r5
   0A56 F5 83              3572 	mov	dph,a
   0A58 E0                 3573 	movx	a,@dptr
   0A59 FC                 3574 	mov	r4,a
   0A5A 90 60 24           3575 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0A5D EC                 3576 	mov	a,r4
   0A5E F0                 3577 	movx	@dptr,a
                           3578 ;	../../shared/src/cmd_if.c:325: lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = speedtable[gen][spdoft_slewctrl1_lane];
   0A5F EA                 3579 	mov	a,r2
   0A60 24 04              3580 	add	a,#_speedtable
   0A62 FC                 3581 	mov	r4,a
   0A63 EB                 3582 	mov	a,r3
   0A64 34 63              3583 	addc	a,#(_speedtable >> 8)
   0A66 FD                 3584 	mov	r5,a
   0A67 74 0D              3585 	mov	a,#0x0D
   0A69 2C                 3586 	add	a,r4
   0A6A F5 82              3587 	mov	dpl,a
   0A6C E4                 3588 	clr	a
   0A6D 3D                 3589 	addc	a,r5
   0A6E F5 83              3590 	mov	dph,a
   0A70 E0                 3591 	movx	a,@dptr
   0A71 FC                 3592 	mov	r4,a
   0A72 90 60 25           3593 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0001)
   0A75 EC                 3594 	mov	a,r4
   0A76 F0                 3595 	movx	@dptr,a
                           3596 ;	../../shared/src/cmd_if.c:326: lnx_PHY_LOCAL_VALUE_LANE_31_0_b2 = speedtable[gen][spdoft_slewrate_en_lane];
   0A77 EA                 3597 	mov	a,r2
   0A78 24 04              3598 	add	a,#_speedtable
   0A7A FA                 3599 	mov	r2,a
   0A7B EB                 3600 	mov	a,r3
   0A7C 34 63              3601 	addc	a,#(_speedtable >> 8)
   0A7E FB                 3602 	mov	r3,a
   0A7F 74 0C              3603 	mov	a,#0x0C
   0A81 2A                 3604 	add	a,r2
   0A82 F5 82              3605 	mov	dpl,a
   0A84 E4                 3606 	clr	a
   0A85 3B                 3607 	addc	a,r3
   0A86 F5 83              3608 	mov	dph,a
   0A88 E0                 3609 	movx	a,@dptr
   0A89 FA                 3610 	mov	r2,a
   0A8A 90 60 26           3611 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0002)
   0A8D EA                 3612 	mov	a,r2
   0A8E F0                 3613 	movx	@dptr,a
   0A8F                    3614 00111$:
                           3615 ;	../../shared/src/cmd_if.c:328: return 0;
   0A8F 75 82 00           3616 	mov	dpl,#0x00
   0A92                    3617 00112$:
   0A92 D0 18              3618 	pop	_bp
   0A94 22                 3619 	ret
                           3620 ;------------------------------------------------------------
                           3621 ;Allocation info for local variables in function 'cmd_bypass_ctle_train'
                           3622 ;------------------------------------------------------------
                           3623 ;cmd_code                  Allocated to registers r2 
                           3624 ;------------------------------------------------------------
                           3625 ;	../../shared/src/cmd_if.c:331: uint8_t cmd_bypass_ctle_train(uint8_t cmd_code) CMD_BANK {
                           3626 ;	-----------------------------------------
                           3627 ;	 function cmd_bypass_ctle_train
                           3628 ;	-----------------------------------------
   0A95                    3629 _cmd_bypass_ctle_train:
   0A95 AA 82              3630 	mov	r2,dpl
                           3631 ;	../../shared/src/cmd_if.c:332: if(cmd_code==CMD_BYPASS_CTLE_TRAIN_GET) {
   0A97 BA 01 0E           3632 	cjne	r2,#0x01,00102$
                           3633 ;	../../shared/src/cmd_if.c:333: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = lnx_BYPASS_CTLE_TRAIN_LANE;
   0A9A 90 60 98           3634 	mov	dptr,#_DFE_CONTROL_10
   0A9D E0                 3635 	movx	a,@dptr
   0A9E 23                 3636 	rl	a
   0A9F 54 01              3637 	anl	a,#0x01
   0AA1 FA                 3638 	mov	r2,a
   0AA2 90 60 24           3639 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0AA5 F0                 3640 	movx	@dptr,a
   0AA6 80 0F              3641 	sjmp	00103$
   0AA8                    3642 00102$:
                           3643 ;	../../shared/src/cmd_if.c:336: lnx_BYPASS_CTLE_TRAIN_LANE = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 & 0x01;
   0AA8 90 60 20           3644 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0AAB E0                 3645 	movx	a,@dptr
   0AAC 54 01              3646 	anl	a,#0x01
   0AAE FA                 3647 	mov	r2,a
   0AAF 90 60 98           3648 	mov	dptr,#_DFE_CONTROL_10
   0AB2 13                 3649 	rrc	a
   0AB3 E0                 3650 	movx	a,@dptr
   0AB4 92 E7              3651 	mov	acc.7,c
   0AB6 F0                 3652 	movx	@dptr,a
   0AB7                    3653 00103$:
                           3654 ;	../../shared/src/cmd_if.c:338: return 0;
   0AB7 75 82 00           3655 	mov	dpl,#0x00
   0ABA 22                 3656 	ret
                           3657 ;------------------------------------------------------------
                           3658 ;Allocation info for local variables in function 'cmd_rx_cdr_bw'
                           3659 ;------------------------------------------------------------
                           3660 ;cmd_code                  Allocated to stack - offset -3
                           3661 ;gen                       Allocated to registers r2 
                           3662 ;------------------------------------------------------------
                           3663 ;	../../shared/src/cmd_if.c:341: uint8_t cmd_rx_cdr_bw(uint8_t gen, uint8_t cmd_code) CMD_BANK {
                           3664 ;	-----------------------------------------
                           3665 ;	 function cmd_rx_cdr_bw
                           3666 ;	-----------------------------------------
   0ABB                    3667 _cmd_rx_cdr_bw:
   0ABB C0 18              3668 	push	_bp
   0ABD 85 81 18           3669 	mov	_bp,sp
   0AC0 AA 82              3670 	mov	r2,dpl
                           3671 ;	../../shared/src/cmd_if.c:343: if(gen==0x80) {//current ana
   0AC2 BA 80 02           3672 	cjne	r2,#0x80,00114$
   0AC5 80 03              3673 	sjmp	00115$
   0AC7                    3674 00114$:
   0AC7 02 0B 6E           3675 	ljmp	00107$
   0ACA                    3676 00115$:
                           3677 ;	../../shared/src/cmd_if.c:344: if(cmd_code==CMD_RX_CDR_BW_GET) {
   0ACA E5 18              3678 	mov	a,_bp
   0ACC 24 FD              3679 	add	a,#0xfd
   0ACE F8                 3680 	mov	r0,a
   0ACF B6 01 3A           3681 	cjne	@r0,#0x01,00102$
                           3682 ;	../../shared/src/cmd_if.c:345: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = reg_RX_SELMUFI_LANE_2_0|(reg_RX_SELMUFF_LANE_2_0<<4);
   0AD2 90 21 65           3683 	mov	dptr,#(_DTL_REG1 + 0x0001)
   0AD5 E0                 3684 	movx	a,@dptr
   0AD6 03                 3685 	rr	a
   0AD7 03                 3686 	rr	a
   0AD8 54 07              3687 	anl	a,#0x07
   0ADA FB                 3688 	mov	r3,a
   0ADB 90 21 65           3689 	mov	dptr,#(_DTL_REG1 + 0x0001)
   0ADE E0                 3690 	movx	a,@dptr
   0ADF C4                 3691 	swap	a
   0AE0 03                 3692 	rr	a
   0AE1 54 07              3693 	anl	a,#0x07
   0AE3 C4                 3694 	swap	a
   0AE4 54 F0              3695 	anl	a,#0xf0
   0AE6 FC                 3696 	mov	r4,a
   0AE7 EB                 3697 	mov	a,r3
   0AE8 42 04              3698 	orl	ar4,a
   0AEA 90 60 24           3699 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0AED EC                 3700 	mov	a,r4
   0AEE F0                 3701 	movx	@dptr,a
                           3702 ;	../../shared/src/cmd_if.c:346: lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = reg_REG_SELMUPI_LANE_3_0|(reg_REG_SELMUPF_LANE_3_0<<4);
   0AEF 90 02 2C           3703 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_139
   0AF2 E0                 3704 	movx	a,@dptr
   0AF3 54 0F              3705 	anl	a,#0x0f
   0AF5 FB                 3706 	mov	r3,a
   0AF6 90 02 30           3707 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_140
   0AF9 E0                 3708 	movx	a,@dptr
   0AFA C4                 3709 	swap	a
   0AFB 54 0F              3710 	anl	a,#0x0f
   0AFD C4                 3711 	swap	a
   0AFE 54 F0              3712 	anl	a,#0xf0
   0B00 FC                 3713 	mov	r4,a
   0B01 EB                 3714 	mov	a,r3
   0B02 42 04              3715 	orl	ar4,a
   0B04 90 60 25           3716 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0001)
   0B07 EC                 3717 	mov	a,r4
   0B08 F0                 3718 	movx	@dptr,a
   0B09 02 0C 5C           3719 	ljmp	00108$
   0B0C                    3720 00102$:
                           3721 ;	../../shared/src/cmd_if.c:349: reg_RX_SELMUFI_LANE_2_0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 & 0x07;
   0B0C 90 60 20           3722 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0B0F E0                 3723 	movx	a,@dptr
   0B10 FB                 3724 	mov	r3,a
   0B11 53 03 07           3725 	anl	ar3,#0x07
   0B14 90 21 65           3726 	mov	dptr,#(_DTL_REG1 + 0x0001)
   0B17 EB                 3727 	mov	a,r3
   0B18 2B                 3728 	add	a,r3
   0B19 25 E0              3729 	add	a,acc
   0B1B 54 1C              3730 	anl	a,#0x1c
   0B1D F5 F0              3731 	mov	b,a
   0B1F E0                 3732 	movx	a,@dptr
   0B20 54 E3              3733 	anl	a,#0xe3
   0B22 45 F0              3734 	orl	a,b
   0B24 F0                 3735 	movx	@dptr,a
                           3736 ;	../../shared/src/cmd_if.c:350: reg_RX_SELMUFF_LANE_2_0 = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 & 0x70)>>4;
   0B25 90 60 20           3737 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0B28 E0                 3738 	movx	a,@dptr
   0B29 54 70              3739 	anl	a,#0x70
   0B2B C4                 3740 	swap	a
   0B2C 54 0F              3741 	anl	a,#0x0f
   0B2E 90 21 65           3742 	mov	dptr,#(_DTL_REG1 + 0x0001)
   0B31 C4                 3743 	swap	a
   0B32 23                 3744 	rl	a
   0B33 54 E0              3745 	anl	a,#(0xe0&0xe0)
   0B35 F5 F0              3746 	mov	b,a
   0B37 E0                 3747 	movx	a,@dptr
   0B38 54 1F              3748 	anl	a,#0x1f
   0B3A 45 F0              3749 	orl	a,b
   0B3C F0                 3750 	movx	@dptr,a
                           3751 ;	../../shared/src/cmd_if.c:351: reg_REG_SELMUPI_LANE_3_0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1 & 0x0f;
   0B3D 90 60 21           3752 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0001)
   0B40 E0                 3753 	movx	a,@dptr
   0B41 FB                 3754 	mov	r3,a
   0B42 53 03 0F           3755 	anl	ar3,#0x0F
   0B45 90 02 2C           3756 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_139
   0B48 EB                 3757 	mov	a,r3
   0B49 54 0F              3758 	anl	a,#0x0f
   0B4B F5 F0              3759 	mov	b,a
   0B4D E0                 3760 	movx	a,@dptr
   0B4E 54 F0              3761 	anl	a,#0xf0
   0B50 45 F0              3762 	orl	a,b
   0B52 F0                 3763 	movx	@dptr,a
                           3764 ;	../../shared/src/cmd_if.c:352: reg_REG_SELMUPF_LANE_3_0 = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1 & 0xf0)>>4;
   0B53 90 60 21           3765 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0001)
   0B56 E0                 3766 	movx	a,@dptr
   0B57 54 F0              3767 	anl	a,#0xF0
   0B59 C4                 3768 	swap	a
   0B5A 54 0F              3769 	anl	a,#0x0f
   0B5C FB                 3770 	mov	r3,a
   0B5D 90 02 30           3771 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_140
   0B60 C4                 3772 	swap	a
   0B61 54 F0              3773 	anl	a,#(0xf0&0xf0)
   0B63 F5 F0              3774 	mov	b,a
   0B65 E0                 3775 	movx	a,@dptr
   0B66 54 0F              3776 	anl	a,#0x0f
   0B68 45 F0              3777 	orl	a,b
   0B6A F0                 3778 	movx	@dptr,a
   0B6B 02 0C 5C           3779 	ljmp	00108$
   0B6E                    3780 00107$:
                           3781 ;	../../shared/src/cmd_if.c:356: if(cmd_code==CMD_RX_CDR_BW_SET) {
   0B6E E5 18              3782 	mov	a,_bp
   0B70 24 FD              3783 	add	a,#0xfd
   0B72 F8                 3784 	mov	r0,a
   0B73 E6                 3785 	mov	a,@r0
   0B74 70 7C              3786 	jnz	00105$
                           3787 ;	../../shared/src/cmd_if.c:357: speedtable[gen][spdoft_rx_selmufi_lane] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 & 0x07;
   0B76 EA                 3788 	mov	a,r2
   0B77 75 F0 50           3789 	mov	b,#0x50
   0B7A A4                 3790 	mul	ab
   0B7B FB                 3791 	mov	r3,a
   0B7C AC F0              3792 	mov	r4,b
   0B7E 24 04              3793 	add	a,#_speedtable
   0B80 FD                 3794 	mov	r5,a
   0B81 EC                 3795 	mov	a,r4
   0B82 34 63              3796 	addc	a,#(_speedtable >> 8)
   0B84 FE                 3797 	mov	r6,a
   0B85 74 22              3798 	mov	a,#0x22
   0B87 2D                 3799 	add	a,r5
   0B88 FD                 3800 	mov	r5,a
   0B89 E4                 3801 	clr	a
   0B8A 3E                 3802 	addc	a,r6
   0B8B FE                 3803 	mov	r6,a
   0B8C 90 60 20           3804 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0B8F E0                 3805 	movx	a,@dptr
   0B90 FF                 3806 	mov	r7,a
   0B91 53 07 07           3807 	anl	ar7,#0x07
   0B94 8D 82              3808 	mov	dpl,r5
   0B96 8E 83              3809 	mov	dph,r6
   0B98 EF                 3810 	mov	a,r7
   0B99 F0                 3811 	movx	@dptr,a
                           3812 ;	../../shared/src/cmd_if.c:358: speedtable[gen][spdoft_rx_selmuff_lane] = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 & 0x70)>>4;
   0B9A EB                 3813 	mov	a,r3
   0B9B 24 04              3814 	add	a,#_speedtable
   0B9D FD                 3815 	mov	r5,a
   0B9E EC                 3816 	mov	a,r4
   0B9F 34 63              3817 	addc	a,#(_speedtable >> 8)
   0BA1 FE                 3818 	mov	r6,a
   0BA2 74 23              3819 	mov	a,#0x23
   0BA4 2D                 3820 	add	a,r5
   0BA5 FD                 3821 	mov	r5,a
   0BA6 E4                 3822 	clr	a
   0BA7 3E                 3823 	addc	a,r6
   0BA8 FE                 3824 	mov	r6,a
   0BA9 90 60 20           3825 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0BAC E0                 3826 	movx	a,@dptr
   0BAD 54 70              3827 	anl	a,#0x70
   0BAF C4                 3828 	swap	a
   0BB0 54 0F              3829 	anl	a,#0x0f
   0BB2 8D 82              3830 	mov	dpl,r5
   0BB4 8E 83              3831 	mov	dph,r6
   0BB6 F0                 3832 	movx	@dptr,a
                           3833 ;	../../shared/src/cmd_if.c:359: speedtable[gen][spdoft_reg_selmupi_lane] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1 & 0x0f;
   0BB7 EB                 3834 	mov	a,r3
   0BB8 24 04              3835 	add	a,#_speedtable
   0BBA FD                 3836 	mov	r5,a
   0BBB EC                 3837 	mov	a,r4
   0BBC 34 63              3838 	addc	a,#(_speedtable >> 8)
   0BBE FE                 3839 	mov	r6,a
   0BBF 74 24              3840 	mov	a,#0x24
   0BC1 2D                 3841 	add	a,r5
   0BC2 FD                 3842 	mov	r5,a
   0BC3 E4                 3843 	clr	a
   0BC4 3E                 3844 	addc	a,r6
   0BC5 FE                 3845 	mov	r6,a
   0BC6 90 60 21           3846 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0001)
   0BC9 E0                 3847 	movx	a,@dptr
   0BCA FF                 3848 	mov	r7,a
   0BCB 53 07 0F           3849 	anl	ar7,#0x0F
   0BCE 8D 82              3850 	mov	dpl,r5
   0BD0 8E 83              3851 	mov	dph,r6
   0BD2 EF                 3852 	mov	a,r7
   0BD3 F0                 3853 	movx	@dptr,a
                           3854 ;	../../shared/src/cmd_if.c:360: speedtable[gen][spdoft_reg_selmupf_lane] = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1 & 0xf0)>>4;
   0BD4 EB                 3855 	mov	a,r3
   0BD5 24 04              3856 	add	a,#_speedtable
   0BD7 FB                 3857 	mov	r3,a
   0BD8 EC                 3858 	mov	a,r4
   0BD9 34 63              3859 	addc	a,#(_speedtable >> 8)
   0BDB FC                 3860 	mov	r4,a
   0BDC 74 25              3861 	mov	a,#0x25
   0BDE 2B                 3862 	add	a,r3
   0BDF FB                 3863 	mov	r3,a
   0BE0 E4                 3864 	clr	a
   0BE1 3C                 3865 	addc	a,r4
   0BE2 FC                 3866 	mov	r4,a
   0BE3 90 60 21           3867 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0001)
   0BE6 E0                 3868 	movx	a,@dptr
   0BE7 54 F0              3869 	anl	a,#0xF0
   0BE9 C4                 3870 	swap	a
   0BEA 54 0F              3871 	anl	a,#0x0f
   0BEC FD                 3872 	mov	r5,a
   0BED 8B 82              3873 	mov	dpl,r3
   0BEF 8C 83              3874 	mov	dph,r4
   0BF1 F0                 3875 	movx	@dptr,a
   0BF2                    3876 00105$:
                           3877 ;	../../shared/src/cmd_if.c:362: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = speedtable[gen][spdoft_rx_selmufi_lane]|(speedtable[gen][spdoft_rx_selmuff_lane]<<4);
   0BF2 EA                 3878 	mov	a,r2
   0BF3 75 F0 50           3879 	mov	b,#0x50
   0BF6 A4                 3880 	mul	ab
   0BF7 FA                 3881 	mov	r2,a
   0BF8 AB F0              3882 	mov	r3,b
   0BFA 24 04              3883 	add	a,#_speedtable
   0BFC FC                 3884 	mov	r4,a
   0BFD EB                 3885 	mov	a,r3
   0BFE 34 63              3886 	addc	a,#(_speedtable >> 8)
   0C00 FD                 3887 	mov	r5,a
   0C01 74 22              3888 	mov	a,#0x22
   0C03 2C                 3889 	add	a,r4
   0C04 FC                 3890 	mov	r4,a
   0C05 E4                 3891 	clr	a
   0C06 3D                 3892 	addc	a,r5
   0C07 FD                 3893 	mov	r5,a
   0C08 EA                 3894 	mov	a,r2
   0C09 24 04              3895 	add	a,#_speedtable
   0C0B FE                 3896 	mov	r6,a
   0C0C EB                 3897 	mov	a,r3
   0C0D 34 63              3898 	addc	a,#(_speedtable >> 8)
   0C0F FF                 3899 	mov	r7,a
   0C10 74 23              3900 	mov	a,#0x23
   0C12 2E                 3901 	add	a,r6
   0C13 F5 82              3902 	mov	dpl,a
   0C15 E4                 3903 	clr	a
   0C16 3F                 3904 	addc	a,r7
   0C17 F5 83              3905 	mov	dph,a
   0C19 E0                 3906 	movx	a,@dptr
   0C1A C4                 3907 	swap	a
   0C1B 54 F0              3908 	anl	a,#0xf0
   0C1D FE                 3909 	mov	r6,a
   0C1E 8C 82              3910 	mov	dpl,r4
   0C20 8D 83              3911 	mov	dph,r5
   0C22 E0                 3912 	movx	a,@dptr
   0C23 42 06              3913 	orl	ar6,a
   0C25 90 60 24           3914 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0C28 EE                 3915 	mov	a,r6
   0C29 F0                 3916 	movx	@dptr,a
                           3917 ;	../../shared/src/cmd_if.c:363: lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = speedtable[gen][spdoft_reg_selmupi_lane]|(speedtable[gen][spdoft_reg_selmupf_lane]<<4);
   0C2A EA                 3918 	mov	a,r2
   0C2B 24 04              3919 	add	a,#_speedtable
   0C2D FC                 3920 	mov	r4,a
   0C2E EB                 3921 	mov	a,r3
   0C2F 34 63              3922 	addc	a,#(_speedtable >> 8)
   0C31 FD                 3923 	mov	r5,a
   0C32 74 24              3924 	mov	a,#0x24
   0C34 2C                 3925 	add	a,r4
   0C35 FC                 3926 	mov	r4,a
   0C36 E4                 3927 	clr	a
   0C37 3D                 3928 	addc	a,r5
   0C38 FD                 3929 	mov	r5,a
   0C39 EA                 3930 	mov	a,r2
   0C3A 24 04              3931 	add	a,#_speedtable
   0C3C FA                 3932 	mov	r2,a
   0C3D EB                 3933 	mov	a,r3
   0C3E 34 63              3934 	addc	a,#(_speedtable >> 8)
   0C40 FB                 3935 	mov	r3,a
   0C41 74 25              3936 	mov	a,#0x25
   0C43 2A                 3937 	add	a,r2
   0C44 F5 82              3938 	mov	dpl,a
   0C46 E4                 3939 	clr	a
   0C47 3B                 3940 	addc	a,r3
   0C48 F5 83              3941 	mov	dph,a
   0C4A E0                 3942 	movx	a,@dptr
   0C4B C4                 3943 	swap	a
   0C4C 54 F0              3944 	anl	a,#0xf0
   0C4E FA                 3945 	mov	r2,a
   0C4F 8C 82              3946 	mov	dpl,r4
   0C51 8D 83              3947 	mov	dph,r5
   0C53 E0                 3948 	movx	a,@dptr
   0C54 FC                 3949 	mov	r4,a
   0C55 42 02              3950 	orl	ar2,a
   0C57 90 60 25           3951 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0001)
   0C5A EA                 3952 	mov	a,r2
   0C5B F0                 3953 	movx	@dptr,a
   0C5C                    3954 00108$:
                           3955 ;	../../shared/src/cmd_if.c:365: return 0;
   0C5C 75 82 00           3956 	mov	dpl,#0x00
   0C5F D0 18              3957 	pop	_bp
   0C61 22                 3958 	ret
                           3959 ;------------------------------------------------------------
                           3960 ;Allocation info for local variables in function 'cmd_tx_margin'
                           3961 ;------------------------------------------------------------
                           3962 ;cmd_code                  Allocated to registers r2 
                           3963 ;------------------------------------------------------------
                           3964 ;	../../shared/src/cmd_if.c:368: uint8_t cmd_tx_margin(uint8_t cmd_code) CMD_BANK {
                           3965 ;	-----------------------------------------
                           3966 ;	 function cmd_tx_margin
                           3967 ;	-----------------------------------------
   0C62                    3968 _cmd_tx_margin:
   0C62 AA 82              3969 	mov	r2,dpl
                           3970 ;	../../shared/src/cmd_if.c:370: if(phy_mode== PCIE) return CMD_ST_NA;
   0C64 90 A3 16           3971 	mov	dptr,#(_SYSTEM + 0x0002)
   0C67 E0                 3972 	movx	a,@dptr
   0C68 54 07              3973 	anl	a,#0x07
   0C6A FB                 3974 	mov	r3,a
   0C6B BB 03 04           3975 	cjne	r3,#0x03,00102$
   0C6E 75 82 02           3976 	mov	dpl,#0x02
   0C71 22                 3977 	ret
   0C72                    3978 00102$:
                           3979 ;	../../shared/src/cmd_if.c:372: if (cmd_code==CMD_TX_MARGIN_SET) {
   0C72 BA 0A 16           3980 	cjne	r2,#0x0A,00104$
                           3981 ;	../../shared/src/cmd_if.c:373: reg_TX_MARGIN_V0_LANE_2_0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x07;
   0C75 90 60 20           3982 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0C78 E0                 3983 	movx	a,@dptr
   0C79 FA                 3984 	mov	r2,a
   0C7A 53 02 07           3985 	anl	ar2,#0x07
   0C7D 90 26 58           3986 	mov	dptr,#_TX_AMP_CTRL_REG0
   0C80 EA                 3987 	mov	a,r2
   0C81 54 07              3988 	anl	a,#0x07
   0C83 F5 F0              3989 	mov	b,a
   0C85 E0                 3990 	movx	a,@dptr
   0C86 54 F8              3991 	anl	a,#0xf8
   0C88 45 F0              3992 	orl	a,b
   0C8A F0                 3993 	movx	@dptr,a
   0C8B                    3994 00104$:
                           3995 ;	../../shared/src/cmd_if.c:375: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = reg_TX_MARGIN_V0_LANE_2_0;
   0C8B 90 26 58           3996 	mov	dptr,#_TX_AMP_CTRL_REG0
   0C8E E0                 3997 	movx	a,@dptr
   0C8F 54 07              3998 	anl	a,#0x07
   0C91 FA                 3999 	mov	r2,a
   0C92 90 60 24           4000 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0C95 EA                 4001 	mov	a,r2
   0C96 F0                 4002 	movx	@dptr,a
                           4003 ;	../../shared/src/cmd_if.c:377: return 0;
   0C97 75 82 00           4004 	mov	dpl,#0x00
   0C9A 22                 4005 	ret
                           4006 ;------------------------------------------------------------
                           4007 ;Allocation info for local variables in function 'cmd_remote_tx_preset_index'
                           4008 ;------------------------------------------------------------
                           4009 ;cmd_code                  Allocated to registers r2 
                           4010 ;------------------------------------------------------------
                           4011 ;	../../shared/src/cmd_if.c:380: uint8_t cmd_remote_tx_preset_index(uint8_t cmd_code) CMD_BANK {
                           4012 ;	-----------------------------------------
                           4013 ;	 function cmd_remote_tx_preset_index
                           4014 ;	-----------------------------------------
   0C9B                    4015 _cmd_remote_tx_preset_index:
   0C9B AA 82              4016 	mov	r2,dpl
                           4017 ;	../../shared/src/cmd_if.c:381: if(phy_mode==PCIE || phy_mode==USB) return CMD_ST_NA;	
   0C9D 90 A3 16           4018 	mov	dptr,#(_SYSTEM + 0x0002)
   0CA0 E0                 4019 	movx	a,@dptr
   0CA1 54 07              4020 	anl	a,#0x07
   0CA3 FB                 4021 	mov	r3,a
   0CA4 BB 03 02           4022 	cjne	r3,#0x03,00114$
   0CA7 80 0A              4023 	sjmp	00101$
   0CA9                    4024 00114$:
   0CA9 90 A3 16           4025 	mov	dptr,#(_SYSTEM + 0x0002)
   0CAC E0                 4026 	movx	a,@dptr
   0CAD 54 07              4027 	anl	a,#0x07
   0CAF FB                 4028 	mov	r3,a
   0CB0 BB 05 04           4029 	cjne	r3,#0x05,00102$
   0CB3                    4030 00101$:
   0CB3 75 82 02           4031 	mov	dpl,#0x02
   0CB6 22                 4032 	ret
   0CB7                    4033 00102$:
                           4034 ;	../../shared/src/cmd_if.c:382: if( lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 > 5 || lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0==0) return CMD_ST_INVALID_VALUE;
   0CB7 90 60 20           4035 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0CBA E0                 4036 	movx	a,@dptr
   0CBB FB                 4037 	mov	r3,a
   0CBC 74 05              4038 	mov	a,#0x05
   0CBE B5 03 00           4039 	cjne	a,ar3,00117$
   0CC1                    4040 00117$:
   0CC1 40 06              4041 	jc	00104$
   0CC3 90 60 20           4042 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0CC6 E0                 4043 	movx	a,@dptr
   0CC7 70 04              4044 	jnz	00105$
   0CC9                    4045 00104$:
   0CC9 75 82 04           4046 	mov	dpl,#0x04
   0CCC 22                 4047 	ret
   0CCD                    4048 00105$:
                           4049 ;	../../shared/src/cmd_if.c:384: if(cmd_code==CMD_TX_REMOTE_PRESET_INX_SET) {
   0CCD EA                 4050 	mov	a,r2
   0CCE 70 09              4051 	jnz	00108$
                           4052 ;	../../shared/src/cmd_if.c:385: lnx_spdoft_tx_preset_index_lane = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0;
   0CD0 90 60 20           4053 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0CD3 E0                 4054 	movx	a,@dptr
   0CD4 FA                 4055 	mov	r2,a
   0CD5 90 66 66           4056 	mov	dptr,#_lnx_spdoft_tx_preset_index_lane
   0CD8 F0                 4057 	movx	@dptr,a
   0CD9                    4058 00108$:
                           4059 ;	../../shared/src/cmd_if.c:387: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = lnx_spdoft_tx_preset_index_lane;
   0CD9 90 66 66           4060 	mov	dptr,#_lnx_spdoft_tx_preset_index_lane
   0CDC E0                 4061 	movx	a,@dptr
   0CDD FA                 4062 	mov	r2,a
   0CDE 90 60 24           4063 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0CE1 EA                 4064 	mov	a,r2
   0CE2 F0                 4065 	movx	@dptr,a
                           4066 ;	../../shared/src/cmd_if.c:388: return 0;	
   0CE3 75 82 00           4067 	mov	dpl,#0x00
   0CE6 22                 4068 	ret
                           4069 ;------------------------------------------------------------
                           4070 ;Allocation info for local variables in function 'cmd_tx_preset'
                           4071 ;------------------------------------------------------------
                           4072 ;cmd_code                  Allocated to registers r2 
                           4073 ;inx                       Allocated to registers r3 
                           4074 ;------------------------------------------------------------
                           4075 ;	../../shared/src/cmd_if.c:419: uint8_t cmd_tx_preset(uint8_t cmd_code) CMD_BANK {
                           4076 ;	-----------------------------------------
                           4077 ;	 function cmd_tx_preset
                           4078 ;	-----------------------------------------
   0CE7                    4079 _cmd_tx_preset:
   0CE7 AA 82              4080 	mov	r2,dpl
                           4081 ;	../../shared/src/cmd_if.c:424: if(phy_mode==PCIE || phy_mode==USB) {
   0CE9 90 A3 16           4082 	mov	dptr,#(_SYSTEM + 0x0002)
   0CEC E0                 4083 	movx	a,@dptr
   0CED 54 07              4084 	anl	a,#0x07
   0CEF FB                 4085 	mov	r3,a
   0CF0 BB 03 02           4086 	cjne	r3,#0x03,00114$
   0CF3 80 0A              4087 	sjmp	00101$
   0CF5                    4088 00114$:
   0CF5 90 A3 16           4089 	mov	dptr,#(_SYSTEM + 0x0002)
   0CF8 E0                 4090 	movx	a,@dptr
   0CF9 54 07              4091 	anl	a,#0x07
   0CFB FB                 4092 	mov	r3,a
   0CFC BB 05 04           4093 	cjne	r3,#0x05,00102$
   0CFF                    4094 00101$:
                           4095 ;	../../shared/src/cmd_if.c:425: return CMD_ST_INVALID_CMD;
   0CFF 75 82 01           4096 	mov	dpl,#0x01
   0D02 22                 4097 	ret
   0D03                    4098 00102$:
                           4099 ;	../../shared/src/cmd_if.c:428: inx = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2 & 0x0f;
   0D03 90 60 22           4100 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0002)
   0D06 E0                 4101 	movx	a,@dptr
   0D07 FB                 4102 	mov	r3,a
   0D08 53 03 0F           4103 	anl	ar3,#0x0F
                           4104 ;	../../shared/src/cmd_if.c:429: if( inx > 5 || inx==0) return CMD_ST_INVALID_VALUE;
   0D0B 74 05              4105 	mov	a,#0x05
   0D0D B5 03 00           4106 	cjne	a,ar3,00117$
   0D10                    4107 00117$:
   0D10 40 03              4108 	jc	00104$
   0D12 EB                 4109 	mov	a,r3
   0D13 70 04              4110 	jnz	00105$
   0D15                    4111 00104$:
   0D15 75 82 04           4112 	mov	dpl,#0x04
   0D18 22                 4113 	ret
   0D19                    4114 00105$:
                           4115 ;	../../shared/src/cmd_if.c:431: if(cmd_code==CMD_TX_PRESET_SET) {
   0D19 BA 02 2D           4116 	cjne	r2,#0x02,00108$
                           4117 ;	../../shared/src/cmd_if.c:432: local_tx_preset_tb[inx][1] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1;
   0D1C EB                 4118 	mov	a,r3
   0D1D 2B                 4119 	add	a,r3
   0D1E FA                 4120 	mov	r2,a
   0D1F 24 B0              4121 	add	a,#_local_tx_preset_tb
   0D21 FC                 4122 	mov	r4,a
   0D22 E4                 4123 	clr	a
   0D23 34 E6              4124 	addc	a,#(_local_tx_preset_tb >> 8)
   0D25 FD                 4125 	mov	r5,a
   0D26 0C                 4126 	inc	r4
   0D27 BC 00 01           4127 	cjne	r4,#0x00,00122$
   0D2A 0D                 4128 	inc	r5
   0D2B                    4129 00122$:
   0D2B 90 60 21           4130 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0001)
   0D2E E0                 4131 	movx	a,@dptr
   0D2F FE                 4132 	mov	r6,a
   0D30 8C 82              4133 	mov	dpl,r4
   0D32 8D 83              4134 	mov	dph,r5
   0D34 EE                 4135 	mov	a,r6
   0D35 F0                 4136 	movx	@dptr,a
                           4137 ;	../../shared/src/cmd_if.c:433: local_tx_preset_tb[inx][0] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0;
   0D36 EA                 4138 	mov	a,r2
   0D37 24 B0              4139 	add	a,#_local_tx_preset_tb
   0D39 FA                 4140 	mov	r2,a
   0D3A E4                 4141 	clr	a
   0D3B 34 E6              4142 	addc	a,#(_local_tx_preset_tb >> 8)
   0D3D FC                 4143 	mov	r4,a
   0D3E 90 60 20           4144 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0D41 E0                 4145 	movx	a,@dptr
   0D42 FD                 4146 	mov	r5,a
   0D43 8A 82              4147 	mov	dpl,r2
   0D45 8C 83              4148 	mov	dph,r4
   0D47 ED                 4149 	mov	a,r5
   0D48 F0                 4150 	movx	@dptr,a
   0D49                    4151 00108$:
                           4152 ;	../../shared/src/cmd_if.c:436: lnx_PHY_LOCAL_VALUE_LANE_31_0_b2 = inx;
   0D49 90 60 26           4153 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0002)
   0D4C EB                 4154 	mov	a,r3
   0D4D F0                 4155 	movx	@dptr,a
                           4156 ;	../../shared/src/cmd_if.c:437: lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = local_tx_preset_tb[inx][1];
   0D4E EB                 4157 	mov	a,r3
   0D4F 2B                 4158 	add	a,r3
   0D50 FB                 4159 	mov	r3,a
   0D51 24 B0              4160 	add	a,#_local_tx_preset_tb
   0D53 FA                 4161 	mov	r2,a
   0D54 E4                 4162 	clr	a
   0D55 34 E6              4163 	addc	a,#(_local_tx_preset_tb >> 8)
   0D57 FC                 4164 	mov	r4,a
   0D58 8A 82              4165 	mov	dpl,r2
   0D5A 8C 83              4166 	mov	dph,r4
   0D5C A3                 4167 	inc	dptr
   0D5D E0                 4168 	movx	a,@dptr
   0D5E FA                 4169 	mov	r2,a
   0D5F 90 60 25           4170 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0001)
   0D62 EA                 4171 	mov	a,r2
   0D63 F0                 4172 	movx	@dptr,a
                           4173 ;	../../shared/src/cmd_if.c:438: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = local_tx_preset_tb[inx][0];
   0D64 EB                 4174 	mov	a,r3
   0D65 24 B0              4175 	add	a,#_local_tx_preset_tb
   0D67 F5 82              4176 	mov	dpl,a
   0D69 E4                 4177 	clr	a
   0D6A 34 E6              4178 	addc	a,#(_local_tx_preset_tb >> 8)
   0D6C F5 83              4179 	mov	dph,a
   0D6E E0                 4180 	movx	a,@dptr
   0D6F FA                 4181 	mov	r2,a
   0D70 90 60 24           4182 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0D73 EA                 4183 	mov	a,r2
   0D74 F0                 4184 	movx	@dptr,a
                           4185 ;	../../shared/src/cmd_if.c:440: return 0;
   0D75 75 82 00           4186 	mov	dpl,#0x00
   0D78 22                 4187 	ret
                           4188 ;------------------------------------------------------------
                           4189 ;Allocation info for local variables in function 'cmd_local_tx_preset_index'
                           4190 ;------------------------------------------------------------
                           4191 ;cmd_code                  Allocated to registers r2 
                           4192 ;------------------------------------------------------------
                           4193 ;	../../shared/src/cmd_if.c:443: uint8_t cmd_local_tx_preset_index(uint8_t cmd_code) CMD_BANK {
                           4194 ;	-----------------------------------------
                           4195 ;	 function cmd_local_tx_preset_index
                           4196 ;	-----------------------------------------
   0D79                    4197 _cmd_local_tx_preset_index:
   0D79 AA 82              4198 	mov	r2,dpl
                           4199 ;	../../shared/src/cmd_if.c:444: if(phy_mode==PCIE || phy_mode==USB) return CMD_ST_NA;
   0D7B 90 A3 16           4200 	mov	dptr,#(_SYSTEM + 0x0002)
   0D7E E0                 4201 	movx	a,@dptr
   0D7F 54 07              4202 	anl	a,#0x07
   0D81 FB                 4203 	mov	r3,a
   0D82 BB 03 02           4204 	cjne	r3,#0x03,00114$
   0D85 80 0A              4205 	sjmp	00101$
   0D87                    4206 00114$:
   0D87 90 A3 16           4207 	mov	dptr,#(_SYSTEM + 0x0002)
   0D8A E0                 4208 	movx	a,@dptr
   0D8B 54 07              4209 	anl	a,#0x07
   0D8D FB                 4210 	mov	r3,a
   0D8E BB 05 04           4211 	cjne	r3,#0x05,00102$
   0D91                    4212 00101$:
   0D91 75 82 02           4213 	mov	dpl,#0x02
   0D94 22                 4214 	ret
   0D95                    4215 00102$:
                           4216 ;	../../shared/src/cmd_if.c:445: if( lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 > 5 || lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0==0) return CMD_ST_INVALID_VALUE;
   0D95 90 60 20           4217 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0D98 E0                 4218 	movx	a,@dptr
   0D99 FB                 4219 	mov	r3,a
   0D9A 74 05              4220 	mov	a,#0x05
   0D9C B5 03 00           4221 	cjne	a,ar3,00117$
   0D9F                    4222 00117$:
   0D9F 40 06              4223 	jc	00104$
   0DA1 90 60 20           4224 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0DA4 E0                 4225 	movx	a,@dptr
   0DA5 70 04              4226 	jnz	00105$
   0DA7                    4227 00104$:
   0DA7 75 82 04           4228 	mov	dpl,#0x04
   0DAA 22                 4229 	ret
   0DAB                    4230 00105$:
                           4231 ;	../../shared/src/cmd_if.c:447: if(cmd_code==CMD_TX_LOCAL_PRESET_INX_SET) {
   0DAB BA 04 12           4232 	cjne	r2,#0x04,00108$
                           4233 ;	../../shared/src/cmd_if.c:448: cmx_LOCAL_TX_PRESET_INDEX_3_0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0;
   0DAE 90 60 20           4234 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0DB1 E0                 4235 	movx	a,@dptr
   0DB2 FA                 4236 	mov	r2,a
   0DB3 90 E6 2B           4237 	mov	dptr,#(_TRAIN_IF_CONFIG + 0x0003)
   0DB6 54 0F              4238 	anl	a,#0x0f
   0DB8 F5 F0              4239 	mov	b,a
   0DBA E0                 4240 	movx	a,@dptr
   0DBB 54 F0              4241 	anl	a,#0xf0
   0DBD 45 F0              4242 	orl	a,b
   0DBF F0                 4243 	movx	@dptr,a
   0DC0                    4244 00108$:
                           4245 ;	../../shared/src/cmd_if.c:450: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = cmx_LOCAL_TX_PRESET_INDEX_3_0;
   0DC0 90 E6 2B           4246 	mov	dptr,#(_TRAIN_IF_CONFIG + 0x0003)
   0DC3 E0                 4247 	movx	a,@dptr
   0DC4 54 0F              4248 	anl	a,#0x0f
   0DC6 90 60 24           4249 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0DC9 F0                 4250 	movx	@dptr,a
                           4251 ;	../../shared/src/cmd_if.c:451: return 0;
   0DCA 75 82 00           4252 	mov	dpl,#0x00
   0DCD 22                 4253 	ret
                           4254 ;------------------------------------------------------------
                           4255 ;Allocation info for local variables in function 'cmd_ssc'
                           4256 ;------------------------------------------------------------
                           4257 ;cmd_code                  Allocated to stack - offset -3
                           4258 ;gen                       Allocated to registers r2 
                           4259 ;------------------------------------------------------------
                           4260 ;	../../shared/src/cmd_if.c:455: uint8_t cmd_ssc(uint8_t gen,  uint8_t cmd_code) CMD_BANK {
                           4261 ;	-----------------------------------------
                           4262 ;	 function cmd_ssc
                           4263 ;	-----------------------------------------
   0DCE                    4264 _cmd_ssc:
   0DCE C0 18              4265 	push	_bp
   0DD0 85 81 18           4266 	mov	_bp,sp
   0DD3 AA 82              4267 	mov	r2,dpl
                           4268 ;	../../shared/src/cmd_if.c:457: if(gen==0x80) { //current ana
   0DD5 BA 80 02           4269 	cjne	r2,#0x80,00126$
   0DD8 80 03              4270 	sjmp	00127$
   0DDA                    4271 00126$:
   0DDA 02 0E 94           4272 	ljmp	00116$
   0DDD                    4273 00127$:
                           4274 ;	../../shared/src/cmd_if.c:459: if(cmd_code==CMD_TX_SSC_GET) {
   0DDD E5 18              4275 	mov	a,_bp
   0DDF 24 FD              4276 	add	a,#0xfd
   0DE1 F8                 4277 	mov	r0,a
   0DE2 B6 09 45           4278 	cjne	@r0,#0x09,00111$
                           4279 ;	../../shared/src/cmd_if.c:460: lnx_PHY_LOCAL_VALUE_LANE_31_0_b2 = reg_SSC_EN_LANE;
   0DE5 90 20 0C           4280 	mov	dptr,#_INPUT_TX_PIN_REG1_LANE
   0DE8 E0                 4281 	movx	a,@dptr
   0DE9 03                 4282 	rr	a
   0DEA 03                 4283 	rr	a
   0DEB 54 01              4284 	anl	a,#0x01
   0DED FB                 4285 	mov	r3,a
   0DEE 90 60 26           4286 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0002)
   0DF1 F0                 4287 	movx	@dptr,a
                           4288 ;	../../shared/src/cmd_if.c:461: if(use_ring_pll) {
   0DF2 30 10 1B           4289 	jnb	_use_ring_pll,00102$
                           4290 ;	../../shared/src/cmd_if.c:466: lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = reg_SSC_DSPREAD_TX_RING;
   0DF5 90 A0 13           4291 	mov	dptr,#(_DTX_REG2 + 0x0003)
   0DF8 E0                 4292 	movx	a,@dptr
   0DF9 23                 4293 	rl	a
   0DFA 23                 4294 	rl	a
   0DFB 54 01              4295 	anl	a,#0x01
   0DFD 90 60 25           4296 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0001)
   0E00 F0                 4297 	movx	@dptr,a
                           4298 ;	../../shared/src/cmd_if.c:467: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = reg_SSC_AMP_RING_6_0;
   0E01 90 A0 1B           4299 	mov	dptr,#(_DTX_REG4 + 0x0003)
   0E04 E0                 4300 	movx	a,@dptr
   0E05 03                 4301 	rr	a
   0E06 54 7F              4302 	anl	a,#0x7f
   0E08 FB                 4303 	mov	r3,a
   0E09 90 60 24           4304 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0E0C F0                 4305 	movx	@dptr,a
   0E0D 02 0F 4E           4306 	ljmp	00117$
   0E10                    4307 00102$:
                           4308 ;	../../shared/src/cmd_if.c:471: lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = reg_SSC_DSPREAD_TX;
   0E10 90 A0 0B           4309 	mov	dptr,#(_DTX_REG0 + 0x0003)
   0E13 E0                 4310 	movx	a,@dptr
   0E14 23                 4311 	rl	a
   0E15 23                 4312 	rl	a
   0E16 54 01              4313 	anl	a,#0x01
   0E18 90 60 25           4314 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0001)
   0E1B F0                 4315 	movx	@dptr,a
                           4316 ;	../../shared/src/cmd_if.c:472: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = reg_SSC_AMP_6_0;
   0E1C 90 A0 12           4317 	mov	dptr,#(_DTX_REG2 + 0x0002)
   0E1F E0                 4318 	movx	a,@dptr
   0E20 54 7F              4319 	anl	a,#0x7f
   0E22 FB                 4320 	mov	r3,a
   0E23 90 60 24           4321 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0E26 F0                 4322 	movx	@dptr,a
   0E27 02 0F 4E           4323 	ljmp	00117$
   0E2A                    4324 00111$:
                           4325 ;	../../shared/src/cmd_if.c:476: reg_SSC_EN_FM_REG_LANE = 1;
   0E2A 90 20 0C           4326 	mov	dptr,#_INPUT_TX_PIN_REG1_LANE
   0E2D E0                 4327 	movx	a,@dptr
   0E2E 44 02              4328 	orl	a,#0x02
   0E30 F0                 4329 	movx	@dptr,a
                           4330 ;	../../shared/src/cmd_if.c:477: if(lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2&0x01) {
   0E31 90 60 22           4331 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0002)
   0E34 E0                 4332 	movx	a,@dptr
   0E35 FB                 4333 	mov	r3,a
   0E36 30 E0 09           4334 	jnb	acc.0,00105$
                           4335 ;	../../shared/src/cmd_if.c:478: reg_SSC_EN_LANE = 1;
   0E39 90 20 0C           4336 	mov	dptr,#_INPUT_TX_PIN_REG1_LANE
   0E3C E0                 4337 	movx	a,@dptr
   0E3D 44 04              4338 	orl	a,#0x04
   0E3F F0                 4339 	movx	@dptr,a
   0E40 80 07              4340 	sjmp	00106$
   0E42                    4341 00105$:
                           4342 ;	../../shared/src/cmd_if.c:481: reg_SSC_EN_LANE = 0;
   0E42 90 20 0C           4343 	mov	dptr,#_INPUT_TX_PIN_REG1_LANE
   0E45 E0                 4344 	movx	a,@dptr
   0E46 54 FB              4345 	anl	a,#0xfb
   0E48 F0                 4346 	movx	@dptr,a
   0E49                    4347 00106$:
                           4348 ;	../../shared/src/cmd_if.c:484: if(use_ring_pll) {
   0E49 30 10 25           4349 	jnb	_use_ring_pll,00108$
                           4350 ;	../../shared/src/cmd_if.c:489: reg_SSC_DSPREAD_TX_RING	=  lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1&0x01;
   0E4C 90 60 21           4351 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0001)
   0E4F E0                 4352 	movx	a,@dptr
   0E50 54 01              4353 	anl	a,#0x01
   0E52 90 A0 13           4354 	mov	dptr,#(_DTX_REG2 + 0x0003)
   0E55 13                 4355 	rrc	a
   0E56 E0                 4356 	movx	a,@dptr
   0E57 92 E6              4357 	mov	acc.6,c
   0E59 F0                 4358 	movx	@dptr,a
                           4359 ;	../../shared/src/cmd_if.c:490: reg_SSC_AMP_RING_6_0 =  lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0;
   0E5A 90 60 20           4360 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0E5D E0                 4361 	movx	a,@dptr
   0E5E FB                 4362 	mov	r3,a
   0E5F 90 A0 1B           4363 	mov	dptr,#(_DTX_REG4 + 0x0003)
   0E62 25 E0              4364 	add	a,acc
   0E64 54 FE              4365 	anl	a,#0xfe
   0E66 F5 F0              4366 	mov	b,a
   0E68 E0                 4367 	movx	a,@dptr
   0E69 54 01              4368 	anl	a,#0x01
   0E6B 45 F0              4369 	orl	a,b
   0E6D F0                 4370 	movx	@dptr,a
   0E6E 02 0F 4E           4371 	ljmp	00117$
   0E71                    4372 00108$:
                           4373 ;	../../shared/src/cmd_if.c:494: reg_SSC_DSPREAD_TX = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1&0x01;
   0E71 90 60 21           4374 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0001)
   0E74 E0                 4375 	movx	a,@dptr
   0E75 54 01              4376 	anl	a,#0x01
   0E77 90 A0 0B           4377 	mov	dptr,#(_DTX_REG0 + 0x0003)
   0E7A 13                 4378 	rrc	a
   0E7B E0                 4379 	movx	a,@dptr
   0E7C 92 E6              4380 	mov	acc.6,c
   0E7E F0                 4381 	movx	@dptr,a
                           4382 ;	../../shared/src/cmd_if.c:495: reg_SSC_AMP_6_0	= lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0;
   0E7F 90 60 20           4383 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0E82 E0                 4384 	movx	a,@dptr
   0E83 FB                 4385 	mov	r3,a
   0E84 90 A0 12           4386 	mov	dptr,#(_DTX_REG2 + 0x0002)
   0E87 54 7F              4387 	anl	a,#0x7f
   0E89 F5 F0              4388 	mov	b,a
   0E8B E0                 4389 	movx	a,@dptr
   0E8C 54 80              4390 	anl	a,#0x80
   0E8E 45 F0              4391 	orl	a,b
   0E90 F0                 4392 	movx	@dptr,a
   0E91 02 0F 4E           4393 	ljmp	00117$
   0E94                    4394 00116$:
                           4395 ;	../../shared/src/cmd_if.c:500: if(cmd_code==CMD_TX_SSC_SET) {
   0E94 E5 18              4396 	mov	a,_bp
   0E96 24 FD              4397 	add	a,#0xfd
   0E98 F8                 4398 	mov	r0,a
   0E99 B6 08 6E           4399 	cjne	@r0,#0x08,00114$
                           4400 ;	../../shared/src/cmd_if.c:501: cmx_TX_SSC_CTRL_SEL = 1; //1:cmd_if, 0:reg/pin
   0E9C 90 E6 13           4401 	mov	dptr,#(_CONTROL_CONFIG3 + 0x0003)
   0E9F E0                 4402 	movx	a,@dptr
   0EA0 44 10              4403 	orl	a,#0x10
   0EA2 F0                 4404 	movx	@dptr,a
                           4405 ;	../../shared/src/cmd_if.c:502: train_save_tb[gen].ssc_en = ((lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2&0x01)==0x01);
   0EA3 EA                 4406 	mov	a,r2
   0EA4 2A                 4407 	add	a,r2
   0EA5 25 E0              4408 	add	a,acc
   0EA7 FB                 4409 	mov	r3,a
   0EA8 24 98              4410 	add	a,#_train_save_tb
   0EAA FC                 4411 	mov	r4,a
   0EAB E4                 4412 	clr	a
   0EAC 34 E6              4413 	addc	a,#(_train_save_tb >> 8)
   0EAE FD                 4414 	mov	r5,a
   0EAF 90 60 22           4415 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0002)
   0EB2 E0                 4416 	movx	a,@dptr
   0EB3 FE                 4417 	mov	r6,a
   0EB4 53 06 01           4418 	anl	ar6,#0x01
   0EB7 BE 01 03           4419 	cjne	r6,#0x01,00135$
   0EBA D3                 4420 	setb	c
   0EBB 80 01              4421 	sjmp	00136$
   0EBD                    4422 00135$:
   0EBD C3                 4423 	clr	c
   0EBE                    4424 00136$:
   0EBE 92 28              4425 	mov  b0,c
   0EC0 E4                 4426 	clr	a
   0EC1 33                 4427 	rlc	a
   0EC2 8C 82              4428 	mov	dpl,r4
   0EC4 8D 83              4429 	mov	dph,r5
   0EC6 13                 4430 	rrc	a
   0EC7 E0                 4431 	movx	a,@dptr
   0EC8 92 E0              4432 	mov	acc.0,c
   0ECA F0                 4433 	movx	@dptr,a
                           4434 ;	../../shared/src/cmd_if.c:503: tx_tb[gen].ssc_amp = 	lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0;
   0ECB EB                 4435 	mov	a,r3
   0ECC 24 84              4436 	add	a,#_tx_tb
   0ECE FC                 4437 	mov	r4,a
   0ECF E4                 4438 	clr	a
   0ED0 34 E6              4439 	addc	a,#(_tx_tb >> 8)
   0ED2 FD                 4440 	mov	r5,a
   0ED3 74 03              4441 	mov	a,#0x03
   0ED5 2C                 4442 	add	a,r4
   0ED6 FC                 4443 	mov	r4,a
   0ED7 E4                 4444 	clr	a
   0ED8 3D                 4445 	addc	a,r5
   0ED9 FD                 4446 	mov	r5,a
   0EDA 90 60 20           4447 	mov	dptr,#_PHY_REMOTE_CTRL_VALUE_LANE
   0EDD E0                 4448 	movx	a,@dptr
   0EDE FE                 4449 	mov	r6,a
   0EDF 8C 82              4450 	mov	dpl,r4
   0EE1 8D 83              4451 	mov	dph,r5
   0EE3 54 7F              4452 	anl	a,#0x7f
   0EE5 F5 F0              4453 	mov	b,a
   0EE7 E0                 4454 	movx	a,@dptr
   0EE8 54 80              4455 	anl	a,#0x80
   0EEA 45 F0              4456 	orl	a,b
   0EEC F0                 4457 	movx	@dptr,a
                           4458 ;	../../shared/src/cmd_if.c:504: tx_tb[gen].ssc_dspread = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1;
   0EED EB                 4459 	mov	a,r3
   0EEE 24 84              4460 	add	a,#_tx_tb
   0EF0 FB                 4461 	mov	r3,a
   0EF1 E4                 4462 	clr	a
   0EF2 34 E6              4463 	addc	a,#(_tx_tb >> 8)
   0EF4 FC                 4464 	mov	r4,a
   0EF5 74 03              4465 	mov	a,#0x03
   0EF7 2B                 4466 	add	a,r3
   0EF8 FB                 4467 	mov	r3,a
   0EF9 E4                 4468 	clr	a
   0EFA 3C                 4469 	addc	a,r4
   0EFB FC                 4470 	mov	r4,a
   0EFC 90 60 21           4471 	mov	dptr,#(_PHY_REMOTE_CTRL_VALUE_LANE + 0x0001)
   0EFF E0                 4472 	movx	a,@dptr
   0F00 FD                 4473 	mov	r5,a
   0F01 8B 82              4474 	mov	dpl,r3
   0F03 8C 83              4475 	mov	dph,r4
   0F05 13                 4476 	rrc	a
   0F06 E0                 4477 	movx	a,@dptr
   0F07 92 E7              4478 	mov	acc.7,c
   0F09 F0                 4479 	movx	@dptr,a
   0F0A                    4480 00114$:
                           4481 ;	../../shared/src/cmd_if.c:506: lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = tx_tb[gen].ssc_amp;
   0F0A EA                 4482 	mov	a,r2
   0F0B 2A                 4483 	add	a,r2
   0F0C 25 E0              4484 	add	a,acc
   0F0E FA                 4485 	mov	r2,a
   0F0F 24 84              4486 	add	a,#_tx_tb
   0F11 FB                 4487 	mov	r3,a
   0F12 E4                 4488 	clr	a
   0F13 34 E6              4489 	addc	a,#(_tx_tb >> 8)
   0F15 FC                 4490 	mov	r4,a
   0F16 8B 82              4491 	mov	dpl,r3
   0F18 8C 83              4492 	mov	dph,r4
   0F1A A3                 4493 	inc	dptr
   0F1B A3                 4494 	inc	dptr
   0F1C A3                 4495 	inc	dptr
   0F1D E0                 4496 	movx	a,@dptr
   0F1E 54 7F              4497 	anl	a,#0x7f
   0F20 90 60 24           4498 	mov	dptr,#_PHY_LOCAL_VALUE_LANE
   0F23 F0                 4499 	movx	@dptr,a
                           4500 ;	../../shared/src/cmd_if.c:507: lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = tx_tb[gen].ssc_dspread;
   0F24 EA                 4501 	mov	a,r2
   0F25 24 84              4502 	add	a,#_tx_tb
   0F27 FB                 4503 	mov	r3,a
   0F28 E4                 4504 	clr	a
   0F29 34 E6              4505 	addc	a,#(_tx_tb >> 8)
   0F2B FC                 4506 	mov	r4,a
   0F2C 8B 82              4507 	mov	dpl,r3
   0F2E 8C 83              4508 	mov	dph,r4
   0F30 A3                 4509 	inc	dptr
   0F31 A3                 4510 	inc	dptr
   0F32 A3                 4511 	inc	dptr
   0F33 E0                 4512 	movx	a,@dptr
   0F34 23                 4513 	rl	a
   0F35 54 01              4514 	anl	a,#0x01
   0F37 FB                 4515 	mov	r3,a
   0F38 90 60 25           4516 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0001)
   0F3B F0                 4517 	movx	@dptr,a
                           4518 ;	../../shared/src/cmd_if.c:508: lnx_PHY_LOCAL_VALUE_LANE_31_0_b2 = train_save_tb[gen].ssc_en;
   0F3C EA                 4519 	mov	a,r2
   0F3D 24 98              4520 	add	a,#_train_save_tb
   0F3F F5 82              4521 	mov	dpl,a
   0F41 E4                 4522 	clr	a
   0F42 34 E6              4523 	addc	a,#(_train_save_tb >> 8)
   0F44 F5 83              4524 	mov	dph,a
   0F46 E0                 4525 	movx	a,@dptr
   0F47 54 01              4526 	anl	a,#0x01
   0F49 FA                 4527 	mov	r2,a
   0F4A 90 60 26           4528 	mov	dptr,#(_PHY_LOCAL_VALUE_LANE + 0x0002)
   0F4D F0                 4529 	movx	@dptr,a
   0F4E                    4530 00117$:
                           4531 ;	../../shared/src/cmd_if.c:510: return 0;
   0F4E 75 82 00           4532 	mov	dpl,#0x00
   0F51 D0 18              4533 	pop	_bp
   0F53 22                 4534 	ret
                           4535 ;------------------------------------------------------------
                           4536 ;Allocation info for local variables in function 'cmd_rx_imp_cal'
                           4537 ;------------------------------------------------------------
                           4538 ;error_flg                 Allocated to registers r2 
                           4539 ;------------------------------------------------------------
                           4540 ;	../../shared/src/cmd_if.c:513: uint8_t cmd_rx_imp_cal(void) CMD_BANK {
                           4541 ;	-----------------------------------------
                           4542 ;	 function cmd_rx_imp_cal
                           4543 ;	-----------------------------------------
   0F54                    4544 _cmd_rx_imp_cal:
                           4545 ;	../../shared/src/cmd_if.c:516: error_flg = 0;
   0F54 7A 00              4546 	mov	r2,#0x00
                           4547 ;	../../shared/src/cmd_if.c:517: if(reg_PIN_PLL_READY_RX_LANE==0) error_flg = CMD_ST_NA;
   0F56 90 21 02           4548 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   0F59 E0                 4549 	movx	a,@dptr
   0F5A 20 E6 04           4550 	jb	acc.6,00102$
   0F5D 7A 02              4551 	mov	r2,#0x02
   0F5F 80 21              4552 	sjmp	00103$
   0F61                    4553 00102$:
                           4554 ;	../../shared/src/cmd_if.c:519: reg_RXIMPCAL_EN	= 1;
   0F61 90 82 00           4555 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_128
   0F64 E0                 4556 	movx	a,@dptr
   0F65 44 04              4557 	orl	a,#0x04
   0F67 F0                 4558 	movx	@dptr,a
                           4559 ;	../../shared/src/cmd_if.c:520: rximp_cal();
   0F68 C0 02              4560 	push	ar2
   0F6A 78 8E              4561 	mov	r0,#_rximp_cal
   0F6C 79 BA              4562 	mov	r1,#(_rximp_cal >> 8)
   0F6E 7A 02              4563 	mov	r2,#(_rximp_cal >> 16)
   0F70 12 00 B3           4564 	lcall	__sdcc_banked_call
   0F73 D0 02              4565 	pop	ar2
                           4566 ;	../../shared/src/cmd_if.c:521: reg_RXIMPCAL_EN	= 0;
   0F75 90 82 00           4567 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_128
   0F78 E0                 4568 	movx	a,@dptr
   0F79 54 FB              4569 	anl	a,#0xfb
   0F7B F0                 4570 	movx	@dptr,a
                           4571 ;	../../shared/src/cmd_if.c:522: PHY_STATUS = ST_NORMAL;
   0F7C 90 22 30           4572 	mov	dptr,#_MCU_STATUS0_LANE
   0F7F 74 2B              4573 	mov	a,#0x2B
   0F81 F0                 4574 	movx	@dptr,a
   0F82                    4575 00103$:
                           4576 ;	../../shared/src/cmd_if.c:525: return error_flg;
   0F82 8A 82              4577 	mov	dpl,r2
   0F84 22                 4578 	ret
                           4579 ;------------------------------------------------------------
                           4580 ;Allocation info for local variables in function 'cmd_tx_imp_cal'
                           4581 ;------------------------------------------------------------
                           4582 ;error_flg                 Allocated to registers r2 
                           4583 ;------------------------------------------------------------
                           4584 ;	../../shared/src/cmd_if.c:528: uint8_t cmd_tx_imp_cal(void) CMD_BANK {
                           4585 ;	-----------------------------------------
                           4586 ;	 function cmd_tx_imp_cal
                           4587 ;	-----------------------------------------
   0F85                    4588 _cmd_tx_imp_cal:
                           4589 ;	../../shared/src/cmd_if.c:531: error_flg = 0;
   0F85 7A 00              4590 	mov	r2,#0x00
                           4591 ;	../../shared/src/cmd_if.c:532: if(reg_PIN_PLL_READY_RX_LANE==0) error_flg = CMD_ST_NA;
   0F87 90 21 02           4592 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   0F8A E0                 4593 	movx	a,@dptr
   0F8B 20 E6 04           4594 	jb	acc.6,00102$
   0F8E 7A 02              4595 	mov	r2,#0x02
   0F90 80 21              4596 	sjmp	00103$
   0F92                    4597 00102$:
                           4598 ;	../../shared/src/cmd_if.c:534: reg_TXIMPCAL_EN	= 1;
   0F92 90 82 00           4599 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_128
   0F95 E0                 4600 	movx	a,@dptr
   0F96 44 08              4601 	orl	a,#0x08
   0F98 F0                 4602 	movx	@dptr,a
                           4603 ;	../../shared/src/cmd_if.c:535: tximp_cal();
   0F99 C0 02              4604 	push	ar2
   0F9B 78 D7              4605 	mov	r0,#_tximp_cal
   0F9D 79 B3              4606 	mov	r1,#(_tximp_cal >> 8)
   0F9F 7A 02              4607 	mov	r2,#(_tximp_cal >> 16)
   0FA1 12 00 B3           4608 	lcall	__sdcc_banked_call
   0FA4 D0 02              4609 	pop	ar2
                           4610 ;	../../shared/src/cmd_if.c:536: reg_TXIMPCAL_EN	= 0;
   0FA6 90 82 00           4611 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_128
   0FA9 E0                 4612 	movx	a,@dptr
   0FAA 54 F7              4613 	anl	a,#0xf7
   0FAC F0                 4614 	movx	@dptr,a
                           4615 ;	../../shared/src/cmd_if.c:537: PHY_STATUS = ST_NORMAL;
   0FAD 90 22 30           4616 	mov	dptr,#_MCU_STATUS0_LANE
   0FB0 74 2B              4617 	mov	a,#0x2B
   0FB2 F0                 4618 	movx	@dptr,a
   0FB3                    4619 00103$:
                           4620 ;	../../shared/src/cmd_if.c:540: return error_flg;
   0FB3 8A 82              4621 	mov	dpl,r2
   0FB5 22                 4622 	ret
                           4623 	.area CSEG    (CODE)
                           4624 	.area CONST   (CODE)
                           4625 	.area CABS    (ABS,CODE)
