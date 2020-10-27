                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:27 2018
                              5 ;--------------------------------------------------------
                              6 	.module main
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _main
                             13 	.globl _TF2
                             14 	.globl _TI
                             15 	.globl _RI
                             16 	.globl _EX12
                             17 	.globl _EX11
                             18 	.globl _EX10
                             19 	.globl _EX9
                             20 	.globl _EX8
                             21 	.globl _ES1
                             22 	.globl _PS1
                             23 	.globl _EX6
                             24 	.globl _EX5
                             25 	.globl _EX4
                             26 	.globl _EX3
                             27 	.globl _EX2
                             28 	.globl _EX7
                             29 	.globl _EA
                             30 	.globl _WDT
                             31 	.globl _ET2
                             32 	.globl _ES
                             33 	.globl _ET1
                             34 	.globl _EX1
                             35 	.globl _ET0
                             36 	.globl _EX0
                             37 	.globl _TF1
                             38 	.globl _TR1
                             39 	.globl _TF0
                             40 	.globl _TR0
                             41 	.globl _IE1
                             42 	.globl _IT1
                             43 	.globl _IE0
                             44 	.globl _IT0
                             45 	.globl _P3_7
                             46 	.globl _P3_6
                             47 	.globl _P3_5
                             48 	.globl _P3_4
                             49 	.globl _P3_3
                             50 	.globl _P3_2
                             51 	.globl _P3_1
                             52 	.globl _P3_0
                             53 	.globl _P2_7
                             54 	.globl _P2_6
                             55 	.globl _P2_5
                             56 	.globl _P2_4
                             57 	.globl _P2_3
                             58 	.globl _P2_2
                             59 	.globl _P2_1
                             60 	.globl _P2_0
                             61 	.globl _P1_7
                             62 	.globl _P1_6
                             63 	.globl _P1_5
                             64 	.globl _P1_4
                             65 	.globl _P1_3
                             66 	.globl _P1_2
                             67 	.globl _P1_1
                             68 	.globl _P1_0
                             69 	.globl _P0_7
                             70 	.globl _P0_6
                             71 	.globl _P0_5
                             72 	.globl _P0_4
                             73 	.globl _P0_3
                             74 	.globl _P0_2
                             75 	.globl _P0_1
                             76 	.globl _P0_0
                             77 	.globl _DMAC
                             78 	.globl _DMATA
                             79 	.globl _DMASA
                             80 	.globl _TMR2
                             81 	.globl _TMR1
                             82 	.globl _TMR0
                             83 	.globl _SRST
                             84 	.globl _B
                             85 	.globl _EIE
                             86 	.globl _ACC
                             87 	.globl _ADCON
                             88 	.globl _PSW
                             89 	.globl _TH2
                             90 	.globl _TL2
                             91 	.globl _RCAP2H
                             92 	.globl _RCAP2L
                             93 	.globl _T2CON
                             94 	.globl _CCEN
                             95 	.globl _IRCON
                             96 	.globl _S0RELH
                             97 	.globl _IP1
                             98 	.globl _IEN1
                             99 	.globl _DMAM1
                            100 	.globl _DMAM0
                            101 	.globl _DMASEL
                            102 	.globl _DMAC2
                            103 	.globl _DMAC1
                            104 	.globl _DMAC0
                            105 	.globl _P3
                            106 	.globl _S0RELL
                            107 	.globl _IP0
                            108 	.globl _IEN0
                            109 	.globl _DMAT2
                            110 	.globl _DMAT1
                            111 	.globl _DMAT0
                            112 	.globl _DMAS2
                            113 	.globl _DMAS1
                            114 	.globl _DMAS0
                            115 	.globl _P2
                            116 	.globl _IEN2
                            117 	.globl _SBUF
                            118 	.globl _SCON
                            119 	.globl _PSBANK
                            120 	.globl _DPS
                            121 	.globl _P1
                            122 	.globl _CKCON
                            123 	.globl _TH1
                            124 	.globl _TH0
                            125 	.globl _TL1
                            126 	.globl _TL0
                            127 	.globl _TMOD
                            128 	.globl _TCON
                            129 	.globl _PCON
                            130 	.globl _WDTREL
                            131 	.globl _DPH
                            132 	.globl _DPL
                            133 	.globl _P0
                            134 	.globl _sq_thrs_ratio_tb
                            135 	.globl _train_save_tb
                            136 	.globl _tx_tb
                            137 	.globl _UPHY_ANAREG_REV_0
                            138 	.globl _dfe_sm_save
                            139 	.globl _dfe_sm_dc
                            140 	.globl _dfe_sm
                            141 	.globl _cds28
                            142 	.globl _lnx_calx_align90_gm
                            143 	.globl _lnx_calx_align90_dac
                            144 	.globl _lnx_calx_align90_dummy_clk
                            145 	.globl _lnx_calx_eom_dpher
                            146 	.globl _lnx_calx_vdda_dll_eom_sel
                            147 	.globl _lnx_calx_dll_eom_gmsel
                            148 	.globl _lnx_calx_vdda_dll_sel
                            149 	.globl _lnx_calx_dll_gmsel
                            150 	.globl _lnx_calx_rxdcc_dll_hg
                            151 	.globl _lnx_calx_rxdcc_dll
                            152 	.globl _lnx_calx_txdcc_hg
                            153 	.globl _lnx_calx_txdcc
                            154 	.globl _lnx_calx_txdcc_pdiv_hg
                            155 	.globl _lnx_calx_txdcc_pdiv
                            156 	.globl _lnx_spdoft_tx_preset_index_lane
                            157 	.globl _lnx_cal_sellv_rxeomclk
                            158 	.globl _lnx_cal_sellv_rxsampler
                            159 	.globl _lnx_cal_sellv_txpre
                            160 	.globl _lnx_cal_sellv_rxdataclk
                            161 	.globl _lnx_cal_sellv_txclk
                            162 	.globl _lnx_cal_sellv_txdata
                            163 	.globl _lnx_cal_align90_gm
                            164 	.globl _lnx_cal_align90_dac
                            165 	.globl _lnx_cal_align90_dummy_clk
                            166 	.globl _lnx_cal_eom_dpher
                            167 	.globl _lnx_cal_vdda_dll_eom_sel
                            168 	.globl _lnx_cal_dll_eom_gmsel
                            169 	.globl _lnx_cal_vdda_dll_sel
                            170 	.globl _lnx_cal_dll_gmsel
                            171 	.globl _lnx_cal_rxdcc_eom_hg
                            172 	.globl _lnx_cal_rxdcc_eom
                            173 	.globl _lnx_cal_rxdcc_data_hg
                            174 	.globl _lnx_cal_rxdcc_data
                            175 	.globl _lnx_cal_rxdcc_dll_hg
                            176 	.globl _lnx_cal_rxdcc_dll
                            177 	.globl _lnx_cal_txdcc_hg
                            178 	.globl _lnx_cal_txdcc
                            179 	.globl _lnx_cal_txdcc_pdiv_hg
                            180 	.globl _lnx_cal_txdcc_pdiv
                            181 	.globl _cmx_cal_sllp_dac_fine_ring
                            182 	.globl _cmx_cal_pll_sllp_dac_coarse_ring
                            183 	.globl _cmx_cal_pll_speed_ring
                            184 	.globl _cmx_cal_plldcc
                            185 	.globl _cmx_cal_lccap_lsb
                            186 	.globl _cmx_cal_lccap_msb
                            187 	.globl _cmx_cal_lcvco_dac_msb
                            188 	.globl _cmx_cal_lcvco_dac_lsb
                            189 	.globl _cmx_cal_lcvco_dac
                            190 	.globl _local_tx_preset_tb
                            191 	.globl _train_g0_index
                            192 	.globl _train_g1_index
                            193 	.globl _train_gn1_index
                            194 	.globl _phase_save
                            195 	.globl _txffe_save
                            196 	.globl _rc_save
                            197 	.globl _phy_mode_lane_table
                            198 	.globl _speedtable
                            199 	.globl _min_gen
                            200 	.globl _max_gen
                            201 	.globl _phy_mode_cmn_table
                            202 	.globl _ring_speedtable
                            203 	.globl _lc_speedtable
                            204 	.globl _TXTRAIN_IF_REG0
                            205 	.globl _CDS_READ_MISC1
                            206 	.globl _CDS_READ_MISC0
                            207 	.globl _DFE_READ_F0D_RIGHT_ODD
                            208 	.globl _DFE_READ_F0D_RIGHT_EVEN
                            209 	.globl _DFE_READ_F0D_LEFT_ODD
                            210 	.globl _DFE_READ_F0D_LEFT_EVEN
                            211 	.globl _DFE_READ_F0D_ODD
                            212 	.globl _DFE_READ_F0D_EVEN
                            213 	.globl _DFE_READ_F0B_ODD
                            214 	.globl _DFE_READ_F0B_EVEN
                            215 	.globl _DFE_READ_F0A_ODD
                            216 	.globl _DFE_READ_F0A_EVEN
                            217 	.globl _DFE_READ_ODD_REG8
                            218 	.globl _DFE_READ_EVEN_REG8
                            219 	.globl _DFE_READ_ODD_REG7
                            220 	.globl _DFE_READ_ODD_REG6
                            221 	.globl _DFE_READ_ODD_REG5
                            222 	.globl _DFE_READ_ODD_REG4
                            223 	.globl _DFE_READ_ODD_REG3
                            224 	.globl _DFE_READ_ODD_REG2
                            225 	.globl _DFE_READ_ODD_REG1
                            226 	.globl _DFE_READ_ODD_REG0
                            227 	.globl _DFE_READ_EVEN_REG7
                            228 	.globl _DFE_READ_EVEN_REG6
                            229 	.globl _DFE_READ_EVEN_REG5
                            230 	.globl _DFE_READ_EVEN_REG4
                            231 	.globl _DFE_READ_EVEN_REG3
                            232 	.globl _DFE_READ_EVEN_REG2
                            233 	.globl _DFE_READ_EVEN_REG1
                            234 	.globl _DFE_READ_EVEN_REG0
                            235 	.globl _TX_TRAIN_IF_REG8
                            236 	.globl _TX_TRAIN_CTRL_LANE
                            237 	.globl _TX_TRAIN_IF_REG7
                            238 	.globl _TX_TRAIN_IF_REG6
                            239 	.globl _TX_TRAIN_IF_REG5
                            240 	.globl _TX_TRAIN_IF_REG4
                            241 	.globl _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE
                            242 	.globl _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE
                            243 	.globl _TRX_TRAIN_IF_INTERRUPT_LANE
                            244 	.globl _TX_AMP_CTRL_REG0
                            245 	.globl _TX_DRV_RD_OUT_REG0
                            246 	.globl _LINK_TRAIN_MODE0
                            247 	.globl _TX_EMPH_CTRL_REG0
                            248 	.globl _TX_TRAIN_DEFAULT_REG5
                            249 	.globl _TX_TRAIN_DEFAULT_REG4
                            250 	.globl _TX_TRAIN_DEFAULT_REG3
                            251 	.globl _TX_TRAIN_DEFAULT_REG2
                            252 	.globl _TX_TRAIN_DEFAULT_REG1
                            253 	.globl _TX_TRAIN_DEFAULT_REG0
                            254 	.globl _TX_TRAIN_DRIVER_REG2
                            255 	.globl _TX_TRAIN_DRIVER_REG1
                            256 	.globl _TX_TRAIN_DRIVER_REG0
                            257 	.globl _TX_TRAIN_PATTTERN_REG0
                            258 	.globl _TX_TRAIN_IF_REG3
                            259 	.globl _TX_TRAIN_IF_REG2
                            260 	.globl _TX_TRAIN_IF_REG1
                            261 	.globl _TX_TRAIN_IF_REG0
                            262 	.globl _DME_DEC_REG1
                            263 	.globl _DME_DEC_REG0
                            264 	.globl _DME_ENC_REG2
                            265 	.globl _DME_ENC_REG1
                            266 	.globl _DME_ENC_REG0
                            267 	.globl _END_XDAT_CMN
                            268 	.globl _MCU_INFO_13
                            269 	.globl _MCU_INFO_12
                            270 	.globl _MCU_INFO_5
                            271 	.globl _MCU_INFO_4
                            272 	.globl _SYNC_INFO
                            273 	.globl _CDS_EYE_CLK_THR
                            274 	.globl _TX_SAVE_4
                            275 	.globl _TX_SAVE_3
                            276 	.globl _TX_SAVE_2
                            277 	.globl _TX_SAVE_1
                            278 	.globl _TX_SAVE_0
                            279 	.globl _ETH_PRESET1_TB
                            280 	.globl _ETH_PRESET0_TB
                            281 	.globl _SAS_PRESET2_TB
                            282 	.globl _SAS_PRESET1_TB
                            283 	.globl _SAS_PRESET0_TB
                            284 	.globl _G_SELLV_RXSAMPLER
                            285 	.globl _G_SELLV_RXDATACLK
                            286 	.globl _G_SELLV_RXEOMCLK
                            287 	.globl _G_SELLV_TXPRE
                            288 	.globl _G_SELLV_TXDATA
                            289 	.globl _G_SELLV_TXCLK
                            290 	.globl _TIMER_SEL3
                            291 	.globl _TIMER_SEL2
                            292 	.globl _TIMER_SEL1
                            293 	.globl _MCU_CONFIG1
                            294 	.globl _LOOP_CNTS
                            295 	.globl _CAL_DATA1
                            296 	.globl _MCU_CONFIG
                            297 	.globl _CAL_STATUS_READ
                            298 	.globl _CAL_TIME_OUT_AND_DIS
                            299 	.globl _CON_CAL_STEP_SIZE5
                            300 	.globl _CON_CAL_STEP_SIZE4
                            301 	.globl _CON_CAL_STEP_SIZE3
                            302 	.globl _CON_CAL_STEP_SIZE2
                            303 	.globl _CON_CAL_STEP_SIZE1
                            304 	.globl _CONTROL_CONFIG9
                            305 	.globl _CONTROL_CONFIG8
                            306 	.globl _TRAIN_IF_CONFIG
                            307 	.globl _CAL_DATA0
                            308 	.globl _CONTROL_CONFIG7
                            309 	.globl _CONTROL_CONFIG6
                            310 	.globl _CONTROL_CONFIG5
                            311 	.globl _CONTROL_CONFIG4
                            312 	.globl _CONTROL_CONFIG3
                            313 	.globl _CONTROL_CONFIG2
                            314 	.globl _CONTROL_CONFIG1
                            315 	.globl _CONTROL_CONFIG0
                            316 	.globl _FW_REV
                            317 	.globl _CID_REG1
                            318 	.globl _CID_REG0
                            319 	.globl _CMN_MCU_REG
                            320 	.globl _SET_LANE_ISR
                            321 	.globl _CMN_ISR_MASK_1
                            322 	.globl _CMN_ISR_1
                            323 	.globl _CMN_MCU_TIMER3_CONTROL
                            324 	.globl _CMN_MCU_TIMER2_CONTROL
                            325 	.globl _CMN_MCU_TIMER1_CONTROL
                            326 	.globl _CMN_MCU_TIMER0_CONTROL
                            327 	.globl _CMN_MCU_TIMER_CTRL_5_LANE
                            328 	.globl _CMN_MCU_TIMER_CTRL_4_LANE
                            329 	.globl _CMN_MCU_TIMER_CTRL_3_LANE
                            330 	.globl _CMN_MCU_TIMER_CTRL_2_LANE
                            331 	.globl _CMN_MCU_TIMER_CONTROL
                            332 	.globl _CMN_CACHE_DEBUG1
                            333 	.globl _CMN_MCU_GPIO
                            334 	.globl _CMN_ISR_CLEAR_2
                            335 	.globl _CMN_ISR_MASK_2
                            336 	.globl _CMN_ISR_2
                            337 	.globl _MCU_INT_ADDR
                            338 	.globl _CMN_CACHE_DEBUG0
                            339 	.globl _MCU_SDT_CMN
                            340 	.globl _XDATA_MEM_CHECKSUM_CMN_2
                            341 	.globl _XDATA_MEM_CHECKSUM_CMN_1
                            342 	.globl _XDATA_MEM_CHECKSUM_CMN_0
                            343 	.globl _TEST5
                            344 	.globl _PM_CMN_REG2
                            345 	.globl _INPUT_CMN_PIN_REG3
                            346 	.globl __FIELDNAME_
                            347 	.globl _CMN_CALIBRATION
                            348 	.globl _OUTPUT_CMN_PIN_REG0
                            349 	.globl _SPD_CMN_REG1
                            350 	.globl _CLKGEN_CMN_REG1
                            351 	.globl _PLLCAL_REG1
                            352 	.globl _PLLCAL_REG0
                            353 	.globl _ANA_TSEN_CONTROL
                            354 	.globl _INPUT_CMN_PIN_REG2
                            355 	.globl _INPUT_CMN_PIN_REG1
                            356 	.globl _INPUT_CMN_PIN_REG0
                            357 	.globl _PM_CMN_REG1
                            358 	.globl _SYSTEM
                            359 	.globl _TEST4
                            360 	.globl _TEST3
                            361 	.globl _TEST2
                            362 	.globl _TEST1
                            363 	.globl _TEST0
                            364 	.globl _MCU_SYNC2
                            365 	.globl _MCU_SYNC1
                            366 	.globl _MEM_IRQ_CLEAR
                            367 	.globl _APB_CONTROL_REG
                            368 	.globl _ANA_IF_CMN_REG0
                            369 	.globl _MEM_IRQ_MASK
                            370 	.globl _MEM_IRQ
                            371 	.globl _ANA_IF_CMN_REG1
                            372 	.globl _MEM_CMN_ECC_ERR_ADDRESS0
                            373 	.globl _MCU_INFO_3
                            374 	.globl _MCU_INFO_2
                            375 	.globl _MCU_INFO_1
                            376 	.globl _MCU_INFO_0
                            377 	.globl _MEMORY_CONTROL_4
                            378 	.globl _MEMORY_CONTROL_3
                            379 	.globl _MEMORY_CONTROL_2
                            380 	.globl _MEMORY_CONTROL_1
                            381 	.globl _MEMORY_CONTROL_0
                            382 	.globl _MCU_DEBUG1
                            383 	.globl _MCU_DEBUG0
                            384 	.globl _MCU_CONTROL_4
                            385 	.globl _MCU_CONTROL_3
                            386 	.globl _MCU_CONTROL_2
                            387 	.globl _MCU_CONTROL_1
                            388 	.globl _MCU_CONTROL_0
                            389 	.globl _GLOB_L1_SUBSTATES_CFG
                            390 	.globl _GLOB_PIPE_REVISION
                            391 	.globl _GLOB_BIST_DATA_HI
                            392 	.globl _GLOB_BIST_SEQR_CFG
                            393 	.globl _GLOB_BIST_RESULT
                            394 	.globl _GLOB_BIST_MASK
                            395 	.globl _GLOB_BIST_START
                            396 	.globl _GLOB_BIST_LANE_TYPE
                            397 	.globl _GLOB_BIST_CTRL
                            398 	.globl _GLOB_DP_BAL_CFG4
                            399 	.globl _GLOB_DP_BAL_CFG2
                            400 	.globl _GLOB_DP_BAL_CFG0
                            401 	.globl _GLOB_PM_DP_CTRL
                            402 	.globl _GLOB_COUNTER_HI
                            403 	.globl _GLOB_COUNTER_CTRL
                            404 	.globl _GLOB_PM_CFG0
                            405 	.globl _GLOB_DP_SAL_CFG5
                            406 	.globl _GLOB_DP_SAL_CFG3
                            407 	.globl _GLOB_DP_SAL_CFG1
                            408 	.globl _GLOB_DP_SAL_CFG
                            409 	.globl _GLOB_MISC_CTRL
                            410 	.globl _GLOB_CLK_SRC_HI
                            411 	.globl _GLOB_CLK_SRC_LO
                            412 	.globl _GLOB_RST_CLK_CTRL
                            413 	.globl _DFE_STATIC_REG6
                            414 	.globl _DFE_STATIC_REG5
                            415 	.globl _DFE_STATIC_REG4
                            416 	.globl _DFE_STATIC_REG3
                            417 	.globl _DFE_STATIC_REG1
                            418 	.globl _DFE_STATIC_REG0
                            419 	.globl _RX_CMN_0
                            420 	.globl _SRIS_REG1
                            421 	.globl _SRIS_REG0
                            422 	.globl _DTX_PHY_ALIGN_REG2
                            423 	.globl _DTX_PHY_ALIGN_REG1
                            424 	.globl _DTX_PHY_ALIGN_REG0
                            425 	.globl _DTX_REG4
                            426 	.globl _DTX_REG3
                            427 	.globl _DTX_REG2
                            428 	.globl _DTX_REG1
                            429 	.globl _DTX_REG0
                            430 	.globl _TX_CMN_REG
                            431 	.globl _END_XDAT_LANE
                            432 	.globl _TRAIN_CONTROL_17
                            433 	.globl _TRAIN_CONTROL_16
                            434 	.globl _TRAIN_CONTROL_15
                            435 	.globl _TRAIN_CONTROL_14
                            436 	.globl _TRAIN_CONTROL_13
                            437 	.globl _ESM_ERR_N_CNT_LOW_LANE
                            438 	.globl _ESM_POP_N_CNT_LOW_LANE
                            439 	.globl _TRAIN_CONTROL_12
                            440 	.globl _TRAIN_CONTROL_11
                            441 	.globl _TRAIN_CONTROL_10
                            442 	.globl _TRAIN_CONTROL_9
                            443 	.globl _TRAIN_CONTROL_8
                            444 	.globl _TRAIN_CONTROL_7
                            445 	.globl _TRAIN_CONTROL_6
                            446 	.globl _TRAIN_CONTROL_5
                            447 	.globl _TRAIN_CONTROL_4
                            448 	.globl _TRAIN_CONTROL_3
                            449 	.globl _ESM_ERR_POP_CNT_HIGH_LANE
                            450 	.globl _ESM_ERR_P_CNT_LOW_LANE
                            451 	.globl _ESM_POP_P_CNT_LOW_LANE
                            452 	.globl _CDS_CTRL_REG1
                            453 	.globl _CDS_CTRL_REG0
                            454 	.globl _DFE_CONTROL_11
                            455 	.globl _DFE_CONTROL_10
                            456 	.globl _DFE_CONTROL_9
                            457 	.globl _DFE_CONTROL_8
                            458 	.globl _DFE_CONTROL_7
                            459 	.globl _DFE_TEST_5
                            460 	.globl _DFE_TEST_4
                            461 	.globl _DFE_TEST_1
                            462 	.globl _DFE_TEST_0
                            463 	.globl _DFE_CONTROL_6
                            464 	.globl _TRAIN_PARA_3
                            465 	.globl _TRAIN_PARA_2
                            466 	.globl _TRAIN_PARA_1
                            467 	.globl _TRAIN_PARA_0
                            468 	.globl _DLL_CAL
                            469 	.globl _RPTA_CONFIG_1
                            470 	.globl _RPTA_CONFIG_0
                            471 	.globl _TRAIN_CONTROL_2
                            472 	.globl _TRAIN_CONTROL_1
                            473 	.globl _TRAIN_CONTROL_0
                            474 	.globl _DFE_CONTROL_5
                            475 	.globl _DFE_CONTROL_4
                            476 	.globl _DFE_CONTROL_3
                            477 	.globl _DFE_CONTROL_2
                            478 	.globl _DFE_CONTROL_1
                            479 	.globl _DFE_CONTROL_0
                            480 	.globl _TRX_TRAIN_IF_TIMERS_ENABLE_LANE
                            481 	.globl _TRX_TRAIN_IF_TIMERS2_LANE
                            482 	.globl _TRX_TRAIN_IF_TIMERS1_LANE
                            483 	.globl _PHY_LOCAL_VALUE_LANE
                            484 	.globl _PHY_REMOTE_CTRL_VALUE_LANE
                            485 	.globl _PHY_REMOTE_CTRL_COMMAND_LANE
                            486 	.globl _CAL_SAVE_DATA3_LANE
                            487 	.globl _CAL_SAVE_DATA2_LANE
                            488 	.globl _CAL_SAVE_DATA1_LANE
                            489 	.globl _CAL_CTRL4_LANE
                            490 	.globl _CAL_CTRL3_LANE
                            491 	.globl _CAL_CTRL2_LANE
                            492 	.globl _CAL_CTRL1_LANE
                            493 	.globl _LANE_MARGIN_REG0
                            494 	.globl _EOM_VLD_REG4
                            495 	.globl _EOM_REG0
                            496 	.globl _EOM_ERR_REG3
                            497 	.globl _EOM_ERR_REG2
                            498 	.globl _EOM_ERR_REG1
                            499 	.globl _EOM_ERR_REG0
                            500 	.globl _EOM_VLD_REG3
                            501 	.globl _EOM_VLD_REG2
                            502 	.globl _EOM_VLD_REG1
                            503 	.globl _EOM_VLD_REG0
                            504 	.globl _DFE_STATIC_LANE_REG6
                            505 	.globl _DFE_STATIC_LANE_REG5
                            506 	.globl _DFE_STATIC_LANE_REG4
                            507 	.globl _DFE_STATIC_LANE_REG3
                            508 	.globl _DFE_STATIC_LANE_REG1
                            509 	.globl _DFE_STATIC_LANE_REG0
                            510 	.globl _DFE_DCE_REG0
                            511 	.globl _CAL_OFST_REG2
                            512 	.globl _CAL_OFST_REG1
                            513 	.globl _CAL_OFST_REG0
                            514 	.globl _DFE_READ_ODD_2C_REG8
                            515 	.globl _DFE_READ_EVEN_2C_REG8
                            516 	.globl _DFE_READ_ODD_2C_REG7
                            517 	.globl _DFE_READ_ODD_2C_REG6
                            518 	.globl _DFE_READ_ODD_2C_REG5
                            519 	.globl _DFE_READ_ODD_2C_REG4
                            520 	.globl _DFE_READ_ODD_2C_REG3
                            521 	.globl _DFE_READ_ODD_2C_REG2
                            522 	.globl _DFE_READ_ODD_2C_REG1
                            523 	.globl _DFE_READ_ODD_2C_REG0
                            524 	.globl _DFE_READ_EVEN_2C_REG7
                            525 	.globl _DFE_READ_EVEN_2C_REG6
                            526 	.globl _DFE_READ_EVEN_2C_REG5
                            527 	.globl _DFE_READ_EVEN_2C_REG4
                            528 	.globl _DFE_READ_EVEN_2C_REG3
                            529 	.globl _DFE_READ_EVEN_2C_REG2
                            530 	.globl _DFE_READ_EVEN_2C_REG1
                            531 	.globl _DFE_READ_EVEN_2C_REG0
                            532 	.globl _DFE_READ_ODD_SM_REG8
                            533 	.globl _DFE_READ_EVEN_SM_REG8
                            534 	.globl _DFE_READ_ODD_SM_REG7
                            535 	.globl _DFE_READ_ODD_SM_REG6
                            536 	.globl _DFE_READ_ODD_SM_REG5
                            537 	.globl _DFE_READ_ODD_SM_REG4
                            538 	.globl _DFE_READ_ODD_SM_REG3
                            539 	.globl _DFE_READ_ODD_SM_REG2
                            540 	.globl _DFE_READ_ODD_SM_REG1
                            541 	.globl _DFE_READ_ODD_SM_REG0
                            542 	.globl _DFE_READ_EVEN_SM_REG7
                            543 	.globl _DFE_READ_EVEN_SM_REG6
                            544 	.globl _DFE_READ_EVEN_SM_REG5
                            545 	.globl _DFE_READ_EVEN_SM_REG4
                            546 	.globl _DFE_READ_EVEN_SM_REG3
                            547 	.globl _DFE_READ_EVEN_SM_REG2
                            548 	.globl _DFE_READ_EVEN_SM_REG1
                            549 	.globl _DFE_READ_EVEN_SM_REG0
                            550 	.globl _DFE_FEXT_ODD_REG7
                            551 	.globl _DFE_FEXT_ODD_REG6
                            552 	.globl _DFE_FEXT_ODD_REG5
                            553 	.globl _DFE_FEXT_ODD_REG4
                            554 	.globl _DFE_FEXT_ODD_REG3
                            555 	.globl _DFE_FEXT_ODD_REG2
                            556 	.globl _DFE_FEXT_ODD_REG1
                            557 	.globl _DFE_FEXT_ODD_REG0
                            558 	.globl _DFE_FEXT_EVEN_REG7
                            559 	.globl _DFE_FEXT_EVEN_REG6
                            560 	.globl _DFE_FEXT_EVEN_REG5
                            561 	.globl _DFE_FEXT_EVEN_REG4
                            562 	.globl _DFE_FEXT_EVEN_REG3
                            563 	.globl _DFE_FEXT_EVEN_REG2
                            564 	.globl _DFE_FEXT_EVEN_REG1
                            565 	.globl _DFE_FEXT_EVEN_REG0
                            566 	.globl _DFE_DC_ODD_REG8
                            567 	.globl _DFE_DC_EVEN_REG8
                            568 	.globl _DFE_FEN_ODD_REG
                            569 	.globl _DFE_FEN_EVEN_REG
                            570 	.globl _DFE_STEP_REG1
                            571 	.globl _DFE_STEP_REG0
                            572 	.globl _DFE_ANA_REG1
                            573 	.globl _DFE_ANA_REG0
                            574 	.globl _DFE_CTRL_REG4
                            575 	.globl _RX_EQ_CLK_CTRL
                            576 	.globl _DFE_CTRL_REG3
                            577 	.globl _DFE_CTRL_REG2
                            578 	.globl _DFE_CTRL_REG1
                            579 	.globl _DFE_CTRL_REG0
                            580 	.globl _PT_COUNTER2
                            581 	.globl _PT_COUNTER1
                            582 	.globl _PT_COUNTER0
                            583 	.globl _PT_USER_PATTERN2
                            584 	.globl _PT_USER_PATTERN1
                            585 	.globl _PT_USER_PATTERN0
                            586 	.globl _PT_CONTROL1
                            587 	.globl _PT_CONTROL0
                            588 	.globl _XDATA_MEM_CHECKSUM_LANE1
                            589 	.globl _XDATA_MEM_CHECKSUM_LANE0
                            590 	.globl _MEM_ECC_ERR_ADDRESS0
                            591 	.globl _MCU_COMMAND0
                            592 	.globl _MCU_INT_CONTROL_13
                            593 	.globl _MCU_WDT_LANE
                            594 	.globl _MCU_IRQ_ISR_LANE
                            595 	.globl _ANA_IF_DFEO_REG0
                            596 	.globl _ANA_IF_DFEE_REG0
                            597 	.globl _ANA_IF_TRX_REG0
                            598 	.globl _EXT_INT_CONTROL
                            599 	.globl _MCU_DEBUG_LANE
                            600 	.globl _MCU_DEBUG3_LANE
                            601 	.globl _MCU_DEBUG2_LANE
                            602 	.globl _MCU_DEBUG1_LANE
                            603 	.globl _MCU_DEBUG0_LANE
                            604 	.globl _MCU_TIMER_CTRL_7_LANE
                            605 	.globl _MCU_TIMER_CTRL_6_LANE
                            606 	.globl _MCU_TIMER_CTRL_5_LANE
                            607 	.globl _MCU_TIMER_CTRL_4_LANE
                            608 	.globl _MCU_TIMER_CTRL_3_LANE
                            609 	.globl _MCU_TIMER_CTRL_2_LANE
                            610 	.globl _MCU_TIMER_CTRL_1_LANE
                            611 	.globl _MCU_MEM_REG2_LANE
                            612 	.globl _MCU_MEM_REG1_LANE
                            613 	.globl _MCU_IRQ_MASK_LANE
                            614 	.globl _MCU_IRQ_LANE
                            615 	.globl _MCU_TIMER3_CONTROL
                            616 	.globl _MCU_TIMER2_CONTROL
                            617 	.globl _MCU_TIMER1_CONTROL
                            618 	.globl _MCU_TIMER0_CONTROL
                            619 	.globl _MCU_TIMER_CONTROL
                            620 	.globl _MCU_INT12_CONTROL
                            621 	.globl _MCU_INT11_CONTROL
                            622 	.globl _MCU_INT10_CONTROL
                            623 	.globl _MCU_INT9_CONTROL
                            624 	.globl _MCU_INT8_CONTROL
                            625 	.globl _MCU_INT7_CONTROL
                            626 	.globl _MCU_INT6_CONTROL
                            627 	.globl _MCU_INT5_CONTROL
                            628 	.globl _MCU_INT4_CONTROL
                            629 	.globl _MCU_INT3_CONTROL
                            630 	.globl _MCU_INT2_CONTROL
                            631 	.globl _MCU_INT1_CONTROL
                            632 	.globl _MCU_INT0_CONTROL
                            633 	.globl _MCU_STATUS3_LANE
                            634 	.globl _MCU_STATUS2_LANE
                            635 	.globl _MCU_STATUS1_LANE
                            636 	.globl _MCU_STATUS0_LANE
                            637 	.globl _LANE_SYSTEM0
                            638 	.globl _CACHE_DEBUG1
                            639 	.globl _CACHE_DEBUG0
                            640 	.globl _MCU_GPIO
                            641 	.globl _MCU_CONTROL_LANE
                            642 	.globl _LANE_32G_PRESET_CFG16_LANE
                            643 	.globl _LANE_32G_PRESET_CFG14_LANE
                            644 	.globl _LANE_32G_PRESET_CFG12_LANE
                            645 	.globl _LANE_32G_PRESET_CFG10_LANE
                            646 	.globl _LANE_32G_PRESET_CFG8_LANE
                            647 	.globl _LANE_32G_PRESET_CFG6_LANE
                            648 	.globl _LANE_32G_PRESET_CFG4_LANE
                            649 	.globl _LANE_32G_PRESET_CFG2_LANE
                            650 	.globl _LANE_32G_PRESET_CFG0_LANE
                            651 	.globl _LANE_EQ_32G_CFG0_LANE
                            652 	.globl _LANE_16G_PRESET_CFG16_LANE
                            653 	.globl _LANE_16G_PRESET_CFG14_LANE
                            654 	.globl _LANE_16G_PRESET_CFG12_LANE
                            655 	.globl _LANE_16G_PRESET_CFG10_LANE
                            656 	.globl _LANE_16G_PRESET_CFG8_LANE
                            657 	.globl _LANE_16G_PRESET_CFG6_LANE
                            658 	.globl _LANE_16G_PRESET_CFG4_LANE
                            659 	.globl _LANE_16G_PRESET_CFG2_LANE
                            660 	.globl _LANE_16G_PRESET_CFG0_LANE
                            661 	.globl _LANE_EQ_16G_CFG0_LANE
                            662 	.globl _LANE_REMOTE_SET_LANE
                            663 	.globl _LANE_COEFF_MAX0_LANE
                            664 	.globl _LANE_PRESET_CFG16_LANE
                            665 	.globl _LANE_PRESET_CFG14_LANE
                            666 	.globl _LANE_PRESET_CFG12_LANE
                            667 	.globl _LANE_PRESET_CFG10_LANE
                            668 	.globl _LANE_PRESET_CFG8_LANE
                            669 	.globl _LANE_PRESET_CFG6_LANE
                            670 	.globl _LANE_PRESET_CFG4_LANE
                            671 	.globl _LANE_PRESET_CFG2_LANE
                            672 	.globl _LANE_PRESET_CFG0_LANE
                            673 	.globl _LANE_EQ_CFG1_LANE
                            674 	.globl _LANE_EQ_CFG0_LANE
                            675 	.globl _LANE_USB_DP_CFG2_LANE
                            676 	.globl _LANE_USB_DP_CFG1_LANE
                            677 	.globl _LANE_DP_PIE8_CFG0_LANE
                            678 	.globl _LANE_CFG_STATUS3_LANE
                            679 	.globl _LANE_CFG4
                            680 	.globl _LANE_CFG2_LANE
                            681 	.globl _LANE_CFG_STATUS2_LANE
                            682 	.globl _LANE_STATUS0
                            683 	.globl _LANE_CFG0
                            684 	.globl _SQ_REG0
                            685 	.globl _DTL_REG3
                            686 	.globl _DTL_REG2
                            687 	.globl _DTL_REG1
                            688 	.globl _DTL_REG0
                            689 	.globl _RX_LANE_INTERRUPT_REG1
                            690 	.globl _RX_CALIBRATION_REG
                            691 	.globl _INPUT_RX_PIN_REG3_LANE
                            692 	.globl _RX_DATA_PATH_REG
                            693 	.globl _RX_LANE_INTERRUPT_MASK
                            694 	.globl _RX_LANE_INTERRUPT
                            695 	.globl _CDR_LOCK_REG
                            696 	.globl _FRAME_SYNC_DET_REG6
                            697 	.globl _FRAME_SYNC_DET_REG5
                            698 	.globl _FRAME_SYNC_DET_REG4
                            699 	.globl _FRAME_SYNC_DET_REG3
                            700 	.globl _FRAME_SYNC_DET_REG2
                            701 	.globl _FRAME_SYNC_DET_REG1
                            702 	.globl _FRAME_SYNC_DET_REG0
                            703 	.globl _CLKGEN_RX_LANE_REG1_LANE
                            704 	.globl _DIG_RX_RSVD_REG0
                            705 	.globl _SPD_CTRL_RX_LANE_REG1_LANE
                            706 	.globl _INPUT_RX_PIN_REG2_LANE
                            707 	.globl _INPUT_RX_PIN_REG1_LANE
                            708 	.globl _INPUT_RX_PIN_REG0_LANE
                            709 	.globl _RX_SYSTEM_LANE
                            710 	.globl _PM_CTRL_RX_LANE_REG1_LANE
                            711 	.globl _MON_TOP
                            712 	.globl _ANALOG_TX_REALTIME_REG_1
                            713 	.globl _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE
                            714 	.globl _PM_CTRL_INTERRUPT_ISR_REG1_LANE
                            715 	.globl __FIELDNAME__LANE
                            716 	.globl _INPUT_TX_PIN_REG5_LANE
                            717 	.globl _DIG_TX_RSVD_REG0
                            718 	.globl _TX_CALIBRATION_LANE
                            719 	.globl _INPUT_TX_PIN_REG4_LANE
                            720 	.globl _TX_SYSTEM_LANE
                            721 	.globl _SPD_CTRL_TX_LANE_REG1_LANE
                            722 	.globl _SPD_CTRL_INTERRUPT_REG2
                            723 	.globl _SPD_CTRL_INTERRUPT_REG1_LANE
                            724 	.globl _TX_SPEED_CONVERT_LANE
                            725 	.globl _CLKGEN_TX_LANE_REG1_LANE
                            726 	.globl _PM_CTRL_INTERRUPT_REG2
                            727 	.globl _PM_CTRL_INTERRUPT_REG1_LANE
                            728 	.globl _INPUT_TX_PIN_REG3_LANE
                            729 	.globl _INPUT_TX_PIN_REG2_LANE
                            730 	.globl _INPUT_TX_PIN_REG1_LANE
                            731 	.globl _INPUT_TX_PIN_REG0_LANE
                            732 	.globl _PM_CTRL_TX_LANE_REG2_LANE
                            733 	.globl _PM_CTRL_TX_LANE_REG1_LANE
                            734 	.globl _UPHY14_CMN_ANAREG_TOP_214
                            735 	.globl _UPHY14_CMN_ANAREG_TOP_213
                            736 	.globl _UPHY14_CMN_ANAREG_TOP_212
                            737 	.globl _UPHY14_CMN_ANAREG_TOP_211
                            738 	.globl _UPHY14_CMN_ANAREG_TOP_210
                            739 	.globl _UPHY14_CMN_ANAREG_TOP_209
                            740 	.globl _UPHY14_CMN_ANAREG_TOP_208
                            741 	.globl _UPHY14_CMN_ANAREG_TOP_207
                            742 	.globl _UPHY14_CMN_ANAREG_TOP_206
                            743 	.globl _UPHY14_CMN_ANAREG_TOP_205
                            744 	.globl _UPHY14_CMN_ANAREG_TOP_204
                            745 	.globl _UPHY14_CMN_ANAREG_TOP_203
                            746 	.globl _UPHY14_CMN_ANAREG_TOP_202
                            747 	.globl _UPHY14_CMN_ANAREG_TOP_201
                            748 	.globl _UPHY14_CMN_ANAREG_TOP_200
                            749 	.globl _UPHY14_CMN_ANAREG_TOP_199
                            750 	.globl _UPHY14_CMN_ANAREG_TOP_198
                            751 	.globl _UPHY14_CMN_ANAREG_TOP_197
                            752 	.globl _UPHY14_CMN_ANAREG_TOP_196
                            753 	.globl _UPHY14_CMN_ANAREG_TOP_195
                            754 	.globl _UPHY14_CMN_ANAREG_TOP_194
                            755 	.globl _UPHY14_CMN_ANAREG_TOP_193
                            756 	.globl _UPHY14_CMN_ANAREG_TOP_192
                            757 	.globl _UPHY14_CMN_ANAREG_TOP_191
                            758 	.globl _UPHY14_CMN_ANAREG_TOP_190
                            759 	.globl _UPHY14_CMN_ANAREG_TOP_189
                            760 	.globl _UPHY14_CMN_ANAREG_TOP_188
                            761 	.globl _UPHY14_CMN_ANAREG_TOP_187
                            762 	.globl _UPHY14_CMN_ANAREG_TOP_186
                            763 	.globl _UPHY14_CMN_ANAREG_TOP_185
                            764 	.globl _UPHY14_CMN_ANAREG_TOP_184
                            765 	.globl _UPHY14_CMN_ANAREG_TOP_183
                            766 	.globl _UPHY14_CMN_ANAREG_TOP_182
                            767 	.globl _UPHY14_CMN_ANAREG_TOP_181
                            768 	.globl _UPHY14_CMN_ANAREG_TOP_180
                            769 	.globl _UPHY14_CMN_ANAREG_TOP_179
                            770 	.globl _UPHY14_CMN_ANAREG_TOP_178
                            771 	.globl _UPHY14_CMN_ANAREG_TOP_177
                            772 	.globl _UPHY14_CMN_ANAREG_TOP_176
                            773 	.globl _UPHY14_CMN_ANAREG_TOP_175
                            774 	.globl _UPHY14_CMN_ANAREG_TOP_174
                            775 	.globl _UPHY14_CMN_ANAREG_TOP_173
                            776 	.globl _UPHY14_CMN_ANAREG_TOP_172
                            777 	.globl _UPHY14_CMN_ANAREG_TOP_171
                            778 	.globl _UPHY14_CMN_ANAREG_TOP_170
                            779 	.globl _UPHY14_CMN_ANAREG_TOP_169
                            780 	.globl _UPHY14_CMN_ANAREG_TOP_168
                            781 	.globl _UPHY14_CMN_ANAREG_TOP_167
                            782 	.globl _UPHY14_CMN_ANAREG_TOP_166
                            783 	.globl _UPHY14_CMN_ANAREG_TOP_165
                            784 	.globl _UPHY14_CMN_ANAREG_TOP_164
                            785 	.globl _UPHY14_CMN_ANAREG_TOP_163
                            786 	.globl _UPHY14_CMN_ANAREG_TOP_162
                            787 	.globl _UPHY14_CMN_ANAREG_TOP_161
                            788 	.globl _UPHY14_CMN_ANAREG_TOP_160
                            789 	.globl _UPHY14_CMN_ANAREG_TOP_159
                            790 	.globl _UPHY14_CMN_ANAREG_TOP_158
                            791 	.globl _UPHY14_CMN_ANAREG_TOP_157
                            792 	.globl _UPHY14_CMN_ANAREG_TOP_156
                            793 	.globl _UPHY14_CMN_ANAREG_TOP_155
                            794 	.globl _UPHY14_CMN_ANAREG_TOP_154
                            795 	.globl _UPHY14_CMN_ANAREG_TOP_153
                            796 	.globl _UPHY14_CMN_ANAREG_TOP_152
                            797 	.globl _UPHY14_CMN_ANAREG_TOP_151
                            798 	.globl _UPHY14_CMN_ANAREG_TOP_150
                            799 	.globl _UPHY14_CMN_ANAREG_TOP_149
                            800 	.globl _UPHY14_CMN_ANAREG_TOP_148
                            801 	.globl _UPHY14_CMN_ANAREG_TOP_147
                            802 	.globl _UPHY14_CMN_ANAREG_TOP_146
                            803 	.globl _UPHY14_CMN_ANAREG_TOP_145
                            804 	.globl _UPHY14_CMN_ANAREG_TOP_144
                            805 	.globl _UPHY14_CMN_ANAREG_TOP_143
                            806 	.globl _UPHY14_CMN_ANAREG_TOP_142
                            807 	.globl _UPHY14_CMN_ANAREG_TOP_141
                            808 	.globl _UPHY14_CMN_ANAREG_TOP_140
                            809 	.globl _UPHY14_CMN_ANAREG_TOP_139
                            810 	.globl _UPHY14_CMN_ANAREG_TOP_138
                            811 	.globl _UPHY14_CMN_ANAREG_TOP_137
                            812 	.globl _UPHY14_CMN_ANAREG_TOP_136
                            813 	.globl _UPHY14_CMN_ANAREG_TOP_135
                            814 	.globl _UPHY14_CMN_ANAREG_TOP_134
                            815 	.globl _UPHY14_CMN_ANAREG_TOP_133
                            816 	.globl _UPHY14_CMN_ANAREG_TOP_132
                            817 	.globl _UPHY14_CMN_ANAREG_TOP_131
                            818 	.globl _UPHY14_CMN_ANAREG_TOP_130
                            819 	.globl _UPHY14_CMN_ANAREG_TOP_129
                            820 	.globl _UPHY14_CMN_ANAREG_TOP_128
                            821 	.globl _ANA_DFEO_REG_0B
                            822 	.globl _ANA_DFEO_REG_0A
                            823 	.globl _ANA_DFEO_REG_09
                            824 	.globl _ANA_DFEO_REG_08
                            825 	.globl _ANA_DFEO_REG_07
                            826 	.globl _ANA_DFEO_REG_06
                            827 	.globl _ANA_DFEO_REG_05
                            828 	.globl _ANA_DFEO_REG_04
                            829 	.globl _ANA_DFEO_REG_03
                            830 	.globl _ANA_DFEO_REG_02
                            831 	.globl _ANA_DFEO_REG_01
                            832 	.globl _ANA_DFEO_REG_00
                            833 	.globl _ANA_DFEO_REG_27
                            834 	.globl _ANA_DFEO_REG_26
                            835 	.globl _ANA_DFEO_REG_25
                            836 	.globl _ANA_DFEO_REG_24
                            837 	.globl _ANA_DFEO_REG_23
                            838 	.globl _ANA_DFEO_REG_22
                            839 	.globl _ANA_DFEO_REG_21
                            840 	.globl _ANA_DFEO_REG_20
                            841 	.globl _ANA_DFEO_REG_1F
                            842 	.globl _ANA_DFEO_REG_1E
                            843 	.globl _ANA_DFEO_REG_1D
                            844 	.globl _ANA_DFEO_REG_1C
                            845 	.globl _ANA_DFEO_REG_1B
                            846 	.globl _ANA_DFEO_REG_1A
                            847 	.globl _ANA_DFEO_REG_19
                            848 	.globl _ANA_DFEO_REG_18
                            849 	.globl _ANA_DFEO_REG_17
                            850 	.globl _ANA_DFEO_REG_16
                            851 	.globl _ANA_DFEO_REG_15
                            852 	.globl _ANA_DFEO_REG_14
                            853 	.globl _ANA_DFEO_REG_13
                            854 	.globl _ANA_DFEO_REG_12
                            855 	.globl _ANA_DFEO_REG_11
                            856 	.globl _ANA_DFEO_REG_10
                            857 	.globl _ANA_DFEO_REG_0F
                            858 	.globl _ANA_DFEO_REG_0E
                            859 	.globl _ANA_DFEO_REG_0D
                            860 	.globl _ANA_DFEO_REG_0C
                            861 	.globl _ANA_DFEE_REG_1D
                            862 	.globl _ANA_DFEE_REG_1C
                            863 	.globl _ANA_DFEE_REG_1B
                            864 	.globl _ANA_DFEE_REG_1A
                            865 	.globl _ANA_DFEE_REG_19
                            866 	.globl _ANA_DFEE_REG_18
                            867 	.globl _ANA_DFEE_REG_17
                            868 	.globl _ANA_DFEE_REG_16
                            869 	.globl _ANA_DFEE_REG_15
                            870 	.globl _ANA_DFEE_REG_14
                            871 	.globl _ANA_DFEE_REG_13
                            872 	.globl _ANA_DFEE_REG_12
                            873 	.globl _ANA_DFEE_REG_11
                            874 	.globl _ANA_DFEE_REG_10
                            875 	.globl _ANA_DFEE_REG_0F
                            876 	.globl _ANA_DFEE_REG_0E
                            877 	.globl _ANA_DFEE_REG_0D
                            878 	.globl _ANA_DFEE_REG_0C
                            879 	.globl _ANA_DFEE_REG_0B
                            880 	.globl _ANA_DFEE_REG_0A
                            881 	.globl _ANA_DFEE_REG_09
                            882 	.globl _ANA_DFEE_REG_08
                            883 	.globl _ANA_DFEE_REG_07
                            884 	.globl _ANA_DFEE_REG_06
                            885 	.globl _ANA_DFEE_REG_05
                            886 	.globl _ANA_DFEE_REG_04
                            887 	.globl _ANA_DFEE_REG_03
                            888 	.globl _ANA_DFEE_REG_02
                            889 	.globl _ANA_DFEE_REG_01
                            890 	.globl _ANA_DFEE_REG_00
                            891 	.globl _ANA_DFEE_REG_27
                            892 	.globl _ANA_DFEE_REG_26
                            893 	.globl _ANA_DFEE_REG_25
                            894 	.globl _ANA_DFEE_REG_24
                            895 	.globl _ANA_DFEE_REG_23
                            896 	.globl _ANA_DFEE_REG_22
                            897 	.globl _ANA_DFEE_REG_21
                            898 	.globl _ANA_DFEE_REG_20
                            899 	.globl _ANA_DFEE_REG_1F
                            900 	.globl _ANA_DFEE_REG_1E
                            901 	.globl _UPHY14_TRX_ANAREG_BOT_32
                            902 	.globl _UPHY14_TRX_ANAREG_BOT_31
                            903 	.globl _UPHY14_TRX_ANAREG_BOT_30
                            904 	.globl _UPHY14_TRX_ANAREG_BOT_29
                            905 	.globl _UPHY14_TRX_ANAREG_BOT_28
                            906 	.globl _UPHY14_TRX_ANAREG_BOT_27
                            907 	.globl _UPHY14_TRX_ANAREG_BOT_26
                            908 	.globl _UPHY14_TRX_ANAREG_BOT_25
                            909 	.globl _UPHY14_TRX_ANAREG_BOT_24
                            910 	.globl _UPHY14_TRX_ANAREG_BOT_23
                            911 	.globl _UPHY14_TRX_ANAREG_BOT_22
                            912 	.globl _UPHY14_TRX_ANAREG_BOT_21
                            913 	.globl _UPHY14_TRX_ANAREG_BOT_20
                            914 	.globl _UPHY14_TRX_ANAREG_BOT_19
                            915 	.globl _UPHY14_TRX_ANAREG_BOT_18
                            916 	.globl _UPHY14_TRX_ANAREG_BOT_17
                            917 	.globl _UPHY14_TRX_ANAREG_BOT_16
                            918 	.globl _UPHY14_TRX_ANAREG_BOT_15
                            919 	.globl _UPHY14_TRX_ANAREG_BOT_14
                            920 	.globl _UPHY14_TRX_ANAREG_BOT_13
                            921 	.globl _UPHY14_TRX_ANAREG_BOT_12
                            922 	.globl _UPHY14_TRX_ANAREG_BOT_11
                            923 	.globl _UPHY14_TRX_ANAREG_BOT_10
                            924 	.globl _UPHY14_TRX_ANAREG_BOT_9
                            925 	.globl _UPHY14_TRX_ANAREG_BOT_8
                            926 	.globl _UPHY14_TRX_ANAREG_BOT_7
                            927 	.globl _UPHY14_TRX_ANAREG_BOT_6
                            928 	.globl _UPHY14_TRX_ANAREG_BOT_5
                            929 	.globl _UPHY14_TRX_ANAREG_BOT_4
                            930 	.globl _UPHY14_TRX_ANAREG_BOT_3
                            931 	.globl _UPHY14_TRX_ANAREG_BOT_2
                            932 	.globl _UPHY14_TRX_ANAREG_BOT_1
                            933 	.globl _UPHY14_TRX_ANAREG_BOT_0
                            934 	.globl _UPHY14_TRX_ANAREG_TOP_157
                            935 	.globl _UPHY14_TRX_ANAREG_TOP_156
                            936 	.globl _UPHY14_TRX_ANAREG_TOP_155
                            937 	.globl _UPHY14_TRX_ANAREG_TOP_154
                            938 	.globl _UPHY14_TRX_ANAREG_TOP_153
                            939 	.globl _UPHY14_TRX_ANAREG_TOP_152
                            940 	.globl _UPHY14_TRX_ANAREG_TOP_151
                            941 	.globl _UPHY14_TRX_ANAREG_TOP_150
                            942 	.globl _UPHY14_TRX_ANAREG_TOP_149
                            943 	.globl _UPHY14_TRX_ANAREG_TOP_148
                            944 	.globl _UPHY14_TRX_ANAREG_TOP_147
                            945 	.globl _UPHY14_TRX_ANAREG_TOP_146
                            946 	.globl _UPHY14_TRX_ANAREG_TOP_145
                            947 	.globl _UPHY14_TRX_ANAREG_TOP_144
                            948 	.globl _UPHY14_TRX_ANAREG_TOP_143
                            949 	.globl _UPHY14_TRX_ANAREG_TOP_142
                            950 	.globl _UPHY14_TRX_ANAREG_TOP_141
                            951 	.globl _UPHY14_TRX_ANAREG_TOP_140
                            952 	.globl _UPHY14_TRX_ANAREG_TOP_139
                            953 	.globl _UPHY14_TRX_ANAREG_TOP_138
                            954 	.globl _UPHY14_TRX_ANAREG_TOP_137
                            955 	.globl _UPHY14_TRX_ANAREG_TOP_136
                            956 	.globl _UPHY14_TRX_ANAREG_TOP_135
                            957 	.globl _UPHY14_TRX_ANAREG_TOP_134
                            958 	.globl _UPHY14_TRX_ANAREG_TOP_133
                            959 	.globl _UPHY14_TRX_ANAREG_TOP_132
                            960 	.globl _UPHY14_TRX_ANAREG_TOP_131
                            961 	.globl _UPHY14_TRX_ANAREG_TOP_130
                            962 	.globl _UPHY14_TRX_ANAREG_TOP_129
                            963 	.globl _UPHY14_TRX_ANAREG_TOP_128
                            964 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_143
                            965 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_142
                            966 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_141
                            967 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_140
                            968 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_139
                            969 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_138
                            970 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_137
                            971 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_136
                            972 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_135
                            973 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_134
                            974 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_133
                            975 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_132
                            976 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_131
                            977 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_130
                            978 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_129
                            979 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_128
                            980 	.globl __sdcc_external_startup
                            981 ;--------------------------------------------------------
                            982 ; special function registers
                            983 ;--------------------------------------------------------
                            984 	.area RSEG    (ABS,DATA)
   0000                     985 	.org 0x0000
                    0080    986 _P0	=	0x0080
                    0082    987 _DPL	=	0x0082
                    0083    988 _DPH	=	0x0083
                    0086    989 _WDTREL	=	0x0086
                    0087    990 _PCON	=	0x0087
                    0088    991 _TCON	=	0x0088
                    0089    992 _TMOD	=	0x0089
                    008A    993 _TL0	=	0x008a
                    008B    994 _TL1	=	0x008b
                    008C    995 _TH0	=	0x008c
                    008D    996 _TH1	=	0x008d
                    008E    997 _CKCON	=	0x008e
                    0090    998 _P1	=	0x0090
                    0092    999 _DPS	=	0x0092
                    0094   1000 _PSBANK	=	0x0094
                    0098   1001 _SCON	=	0x0098
                    0099   1002 _SBUF	=	0x0099
                    009A   1003 _IEN2	=	0x009a
                    00A0   1004 _P2	=	0x00a0
                    00A1   1005 _DMAS0	=	0x00a1
                    00A2   1006 _DMAS1	=	0x00a2
                    00A3   1007 _DMAS2	=	0x00a3
                    00A4   1008 _DMAT0	=	0x00a4
                    00A5   1009 _DMAT1	=	0x00a5
                    00A6   1010 _DMAT2	=	0x00a6
                    00A8   1011 _IEN0	=	0x00a8
                    00A9   1012 _IP0	=	0x00a9
                    00AA   1013 _S0RELL	=	0x00aa
                    00B0   1014 _P3	=	0x00b0
                    00B1   1015 _DMAC0	=	0x00b1
                    00B2   1016 _DMAC1	=	0x00b2
                    00B3   1017 _DMAC2	=	0x00b3
                    00B4   1018 _DMASEL	=	0x00b4
                    00B5   1019 _DMAM0	=	0x00b5
                    00B6   1020 _DMAM1	=	0x00b6
                    00B8   1021 _IEN1	=	0x00b8
                    00B9   1022 _IP1	=	0x00b9
                    00BA   1023 _S0RELH	=	0x00ba
                    00C0   1024 _IRCON	=	0x00c0
                    00C1   1025 _CCEN	=	0x00c1
                    00C8   1026 _T2CON	=	0x00c8
                    00CA   1027 _RCAP2L	=	0x00ca
                    00CB   1028 _RCAP2H	=	0x00cb
                    00CC   1029 _TL2	=	0x00cc
                    00CD   1030 _TH2	=	0x00cd
                    00D0   1031 _PSW	=	0x00d0
                    00D8   1032 _ADCON	=	0x00d8
                    00E0   1033 _ACC	=	0x00e0
                    00E8   1034 _EIE	=	0x00e8
                    00F0   1035 _B	=	0x00f0
                    00F7   1036 _SRST	=	0x00f7
                    8C8A   1037 _TMR0	=	0x8c8a
                    8D8B   1038 _TMR1	=	0x8d8b
                    CDCC   1039 _TMR2	=	0xcdcc
                    A2A1   1040 _DMASA	=	0xa2a1
                    A5A4   1041 _DMATA	=	0xa5a4
                    B2B1   1042 _DMAC	=	0xb2b1
                           1043 ;--------------------------------------------------------
                           1044 ; special function bits
                           1045 ;--------------------------------------------------------
                           1046 	.area RSEG    (ABS,DATA)
   0000                    1047 	.org 0x0000
                    0080   1048 _P0_0	=	0x0080
                    0081   1049 _P0_1	=	0x0081
                    0082   1050 _P0_2	=	0x0082
                    0083   1051 _P0_3	=	0x0083
                    0084   1052 _P0_4	=	0x0084
                    0085   1053 _P0_5	=	0x0085
                    0086   1054 _P0_6	=	0x0086
                    0087   1055 _P0_7	=	0x0087
                    0090   1056 _P1_0	=	0x0090
                    0091   1057 _P1_1	=	0x0091
                    0092   1058 _P1_2	=	0x0092
                    0093   1059 _P1_3	=	0x0093
                    0094   1060 _P1_4	=	0x0094
                    0095   1061 _P1_5	=	0x0095
                    0096   1062 _P1_6	=	0x0096
                    0097   1063 _P1_7	=	0x0097
                    00A0   1064 _P2_0	=	0x00a0
                    00A1   1065 _P2_1	=	0x00a1
                    00A2   1066 _P2_2	=	0x00a2
                    00A3   1067 _P2_3	=	0x00a3
                    00A4   1068 _P2_4	=	0x00a4
                    00A5   1069 _P2_5	=	0x00a5
                    00A6   1070 _P2_6	=	0x00a6
                    00A7   1071 _P2_7	=	0x00a7
                    00B0   1072 _P3_0	=	0x00b0
                    00B1   1073 _P3_1	=	0x00b1
                    00B2   1074 _P3_2	=	0x00b2
                    00B3   1075 _P3_3	=	0x00b3
                    00B4   1076 _P3_4	=	0x00b4
                    00B5   1077 _P3_5	=	0x00b5
                    00B6   1078 _P3_6	=	0x00b6
                    00B7   1079 _P3_7	=	0x00b7
                    0088   1080 _IT0	=	0x0088
                    0089   1081 _IE0	=	0x0089
                    008A   1082 _IT1	=	0x008a
                    008B   1083 _IE1	=	0x008b
                    008C   1084 _TR0	=	0x008c
                    008D   1085 _TF0	=	0x008d
                    008E   1086 _TR1	=	0x008e
                    008F   1087 _TF1	=	0x008f
                    00A8   1088 _EX0	=	0x00a8
                    00A9   1089 _ET0	=	0x00a9
                    00AA   1090 _EX1	=	0x00aa
                    00AB   1091 _ET1	=	0x00ab
                    00AC   1092 _ES	=	0x00ac
                    00AD   1093 _ET2	=	0x00ad
                    00AE   1094 _WDT	=	0x00ae
                    00AF   1095 _EA	=	0x00af
                    00B8   1096 _EX7	=	0x00b8
                    00B9   1097 _EX2	=	0x00b9
                    00BA   1098 _EX3	=	0x00ba
                    00BB   1099 _EX4	=	0x00bb
                    00BC   1100 _EX5	=	0x00bc
                    00BD   1101 _EX6	=	0x00bd
                    00BE   1102 _PS1	=	0x00be
                    009A   1103 _ES1	=	0x009a
                    009B   1104 _EX8	=	0x009b
                    009C   1105 _EX9	=	0x009c
                    009D   1106 _EX10	=	0x009d
                    009E   1107 _EX11	=	0x009e
                    009F   1108 _EX12	=	0x009f
                    0098   1109 _RI	=	0x0098
                    0099   1110 _TI	=	0x0099
                    00C6   1111 _TF2	=	0x00c6
                           1112 ;--------------------------------------------------------
                           1113 ; overlayable register banks
                           1114 ;--------------------------------------------------------
                           1115 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1116 	.ds 8
                           1117 ;--------------------------------------------------------
                           1118 ; internal ram data
                           1119 ;--------------------------------------------------------
                           1120 	.area DSEG    (DATA)
                           1121 ;--------------------------------------------------------
                           1122 ; overlayable items in internal ram 
                           1123 ;--------------------------------------------------------
                           1124 	.area OSEG    (OVR,DATA)
                           1125 ;--------------------------------------------------------
                           1126 ; Stack segment in internal ram 
                           1127 ;--------------------------------------------------------
                           1128 	.area	SSEG	(DATA)
   0030                    1129 __start__stack:
   0030                    1130 	.ds	1
                           1131 
                           1132 ;--------------------------------------------------------
                           1133 ; indirectly addressable internal ram data
                           1134 ;--------------------------------------------------------
                           1135 	.area ISEG    (DATA)
                           1136 ;--------------------------------------------------------
                           1137 ; absolute internal ram data
                           1138 ;--------------------------------------------------------
                           1139 	.area IABS    (ABS,DATA)
                           1140 	.area IABS    (ABS,DATA)
                           1141 ;--------------------------------------------------------
                           1142 ; bit data
                           1143 ;--------------------------------------------------------
                           1144 	.area BSEG    (BIT)
                           1145 ;--------------------------------------------------------
                           1146 ; paged external ram data
                           1147 ;--------------------------------------------------------
                           1148 	.area PSEG    (PAG,XDATA)
                           1149 ;--------------------------------------------------------
                           1150 ; external ram data
                           1151 ;--------------------------------------------------------
                           1152 	.area XSEG    (XDATA)
                    1000   1153 _UPHY14_TRX_LANEPLL_ANAREG_TOP_128	=	0x1000
                    1004   1154 _UPHY14_TRX_LANEPLL_ANAREG_TOP_129	=	0x1004
                    1008   1155 _UPHY14_TRX_LANEPLL_ANAREG_TOP_130	=	0x1008
                    100C   1156 _UPHY14_TRX_LANEPLL_ANAREG_TOP_131	=	0x100c
                    1010   1157 _UPHY14_TRX_LANEPLL_ANAREG_TOP_132	=	0x1010
                    1014   1158 _UPHY14_TRX_LANEPLL_ANAREG_TOP_133	=	0x1014
                    1018   1159 _UPHY14_TRX_LANEPLL_ANAREG_TOP_134	=	0x1018
                    101C   1160 _UPHY14_TRX_LANEPLL_ANAREG_TOP_135	=	0x101c
                    1020   1161 _UPHY14_TRX_LANEPLL_ANAREG_TOP_136	=	0x1020
                    1024   1162 _UPHY14_TRX_LANEPLL_ANAREG_TOP_137	=	0x1024
                    1028   1163 _UPHY14_TRX_LANEPLL_ANAREG_TOP_138	=	0x1028
                    102C   1164 _UPHY14_TRX_LANEPLL_ANAREG_TOP_139	=	0x102c
                    1030   1165 _UPHY14_TRX_LANEPLL_ANAREG_TOP_140	=	0x1030
                    1034   1166 _UPHY14_TRX_LANEPLL_ANAREG_TOP_141	=	0x1034
                    1038   1167 _UPHY14_TRX_LANEPLL_ANAREG_TOP_142	=	0x1038
                    103C   1168 _UPHY14_TRX_LANEPLL_ANAREG_TOP_143	=	0x103c
                    0200   1169 _UPHY14_TRX_ANAREG_TOP_128	=	0x0200
                    0204   1170 _UPHY14_TRX_ANAREG_TOP_129	=	0x0204
                    0208   1171 _UPHY14_TRX_ANAREG_TOP_130	=	0x0208
                    020C   1172 _UPHY14_TRX_ANAREG_TOP_131	=	0x020c
                    0210   1173 _UPHY14_TRX_ANAREG_TOP_132	=	0x0210
                    0214   1174 _UPHY14_TRX_ANAREG_TOP_133	=	0x0214
                    0218   1175 _UPHY14_TRX_ANAREG_TOP_134	=	0x0218
                    021C   1176 _UPHY14_TRX_ANAREG_TOP_135	=	0x021c
                    0220   1177 _UPHY14_TRX_ANAREG_TOP_136	=	0x0220
                    0224   1178 _UPHY14_TRX_ANAREG_TOP_137	=	0x0224
                    0228   1179 _UPHY14_TRX_ANAREG_TOP_138	=	0x0228
                    022C   1180 _UPHY14_TRX_ANAREG_TOP_139	=	0x022c
                    0230   1181 _UPHY14_TRX_ANAREG_TOP_140	=	0x0230
                    0234   1182 _UPHY14_TRX_ANAREG_TOP_141	=	0x0234
                    0238   1183 _UPHY14_TRX_ANAREG_TOP_142	=	0x0238
                    023C   1184 _UPHY14_TRX_ANAREG_TOP_143	=	0x023c
                    0240   1185 _UPHY14_TRX_ANAREG_TOP_144	=	0x0240
                    0244   1186 _UPHY14_TRX_ANAREG_TOP_145	=	0x0244
                    0248   1187 _UPHY14_TRX_ANAREG_TOP_146	=	0x0248
                    024C   1188 _UPHY14_TRX_ANAREG_TOP_147	=	0x024c
                    0250   1189 _UPHY14_TRX_ANAREG_TOP_148	=	0x0250
                    0254   1190 _UPHY14_TRX_ANAREG_TOP_149	=	0x0254
                    0258   1191 _UPHY14_TRX_ANAREG_TOP_150	=	0x0258
                    025C   1192 _UPHY14_TRX_ANAREG_TOP_151	=	0x025c
                    0260   1193 _UPHY14_TRX_ANAREG_TOP_152	=	0x0260
                    0264   1194 _UPHY14_TRX_ANAREG_TOP_153	=	0x0264
                    0268   1195 _UPHY14_TRX_ANAREG_TOP_154	=	0x0268
                    026C   1196 _UPHY14_TRX_ANAREG_TOP_155	=	0x026c
                    0270   1197 _UPHY14_TRX_ANAREG_TOP_156	=	0x0270
                    0274   1198 _UPHY14_TRX_ANAREG_TOP_157	=	0x0274
                    0000   1199 _UPHY14_TRX_ANAREG_BOT_0	=	0x0000
                    0004   1200 _UPHY14_TRX_ANAREG_BOT_1	=	0x0004
                    0008   1201 _UPHY14_TRX_ANAREG_BOT_2	=	0x0008
                    000C   1202 _UPHY14_TRX_ANAREG_BOT_3	=	0x000c
                    0010   1203 _UPHY14_TRX_ANAREG_BOT_4	=	0x0010
                    0014   1204 _UPHY14_TRX_ANAREG_BOT_5	=	0x0014
                    0018   1205 _UPHY14_TRX_ANAREG_BOT_6	=	0x0018
                    001C   1206 _UPHY14_TRX_ANAREG_BOT_7	=	0x001c
                    0020   1207 _UPHY14_TRX_ANAREG_BOT_8	=	0x0020
                    0024   1208 _UPHY14_TRX_ANAREG_BOT_9	=	0x0024
                    0028   1209 _UPHY14_TRX_ANAREG_BOT_10	=	0x0028
                    002C   1210 _UPHY14_TRX_ANAREG_BOT_11	=	0x002c
                    0030   1211 _UPHY14_TRX_ANAREG_BOT_12	=	0x0030
                    0034   1212 _UPHY14_TRX_ANAREG_BOT_13	=	0x0034
                    0038   1213 _UPHY14_TRX_ANAREG_BOT_14	=	0x0038
                    003C   1214 _UPHY14_TRX_ANAREG_BOT_15	=	0x003c
                    0040   1215 _UPHY14_TRX_ANAREG_BOT_16	=	0x0040
                    0044   1216 _UPHY14_TRX_ANAREG_BOT_17	=	0x0044
                    0048   1217 _UPHY14_TRX_ANAREG_BOT_18	=	0x0048
                    004C   1218 _UPHY14_TRX_ANAREG_BOT_19	=	0x004c
                    0050   1219 _UPHY14_TRX_ANAREG_BOT_20	=	0x0050
                    0054   1220 _UPHY14_TRX_ANAREG_BOT_21	=	0x0054
                    0058   1221 _UPHY14_TRX_ANAREG_BOT_22	=	0x0058
                    005C   1222 _UPHY14_TRX_ANAREG_BOT_23	=	0x005c
                    0060   1223 _UPHY14_TRX_ANAREG_BOT_24	=	0x0060
                    0064   1224 _UPHY14_TRX_ANAREG_BOT_25	=	0x0064
                    0068   1225 _UPHY14_TRX_ANAREG_BOT_26	=	0x0068
                    006C   1226 _UPHY14_TRX_ANAREG_BOT_27	=	0x006c
                    0070   1227 _UPHY14_TRX_ANAREG_BOT_28	=	0x0070
                    0074   1228 _UPHY14_TRX_ANAREG_BOT_29	=	0x0074
                    0078   1229 _UPHY14_TRX_ANAREG_BOT_30	=	0x0078
                    007C   1230 _UPHY14_TRX_ANAREG_BOT_31	=	0x007c
                    0080   1231 _UPHY14_TRX_ANAREG_BOT_32	=	0x0080
                    0478   1232 _ANA_DFEE_REG_1E	=	0x0478
                    047C   1233 _ANA_DFEE_REG_1F	=	0x047c
                    0480   1234 _ANA_DFEE_REG_20	=	0x0480
                    0484   1235 _ANA_DFEE_REG_21	=	0x0484
                    0488   1236 _ANA_DFEE_REG_22	=	0x0488
                    048C   1237 _ANA_DFEE_REG_23	=	0x048c
                    0490   1238 _ANA_DFEE_REG_24	=	0x0490
                    0494   1239 _ANA_DFEE_REG_25	=	0x0494
                    0498   1240 _ANA_DFEE_REG_26	=	0x0498
                    049C   1241 _ANA_DFEE_REG_27	=	0x049c
                    0400   1242 _ANA_DFEE_REG_00	=	0x0400
                    0404   1243 _ANA_DFEE_REG_01	=	0x0404
                    0408   1244 _ANA_DFEE_REG_02	=	0x0408
                    040C   1245 _ANA_DFEE_REG_03	=	0x040c
                    0410   1246 _ANA_DFEE_REG_04	=	0x0410
                    0414   1247 _ANA_DFEE_REG_05	=	0x0414
                    0418   1248 _ANA_DFEE_REG_06	=	0x0418
                    041C   1249 _ANA_DFEE_REG_07	=	0x041c
                    0420   1250 _ANA_DFEE_REG_08	=	0x0420
                    0424   1251 _ANA_DFEE_REG_09	=	0x0424
                    0428   1252 _ANA_DFEE_REG_0A	=	0x0428
                    042C   1253 _ANA_DFEE_REG_0B	=	0x042c
                    0430   1254 _ANA_DFEE_REG_0C	=	0x0430
                    0434   1255 _ANA_DFEE_REG_0D	=	0x0434
                    0438   1256 _ANA_DFEE_REG_0E	=	0x0438
                    043C   1257 _ANA_DFEE_REG_0F	=	0x043c
                    0440   1258 _ANA_DFEE_REG_10	=	0x0440
                    0444   1259 _ANA_DFEE_REG_11	=	0x0444
                    0448   1260 _ANA_DFEE_REG_12	=	0x0448
                    044C   1261 _ANA_DFEE_REG_13	=	0x044c
                    0450   1262 _ANA_DFEE_REG_14	=	0x0450
                    0454   1263 _ANA_DFEE_REG_15	=	0x0454
                    0458   1264 _ANA_DFEE_REG_16	=	0x0458
                    045C   1265 _ANA_DFEE_REG_17	=	0x045c
                    0460   1266 _ANA_DFEE_REG_18	=	0x0460
                    0464   1267 _ANA_DFEE_REG_19	=	0x0464
                    0468   1268 _ANA_DFEE_REG_1A	=	0x0468
                    046C   1269 _ANA_DFEE_REG_1B	=	0x046c
                    0470   1270 _ANA_DFEE_REG_1C	=	0x0470
                    0474   1271 _ANA_DFEE_REG_1D	=	0x0474
                    0830   1272 _ANA_DFEO_REG_0C	=	0x0830
                    0834   1273 _ANA_DFEO_REG_0D	=	0x0834
                    0838   1274 _ANA_DFEO_REG_0E	=	0x0838
                    083C   1275 _ANA_DFEO_REG_0F	=	0x083c
                    0840   1276 _ANA_DFEO_REG_10	=	0x0840
                    0844   1277 _ANA_DFEO_REG_11	=	0x0844
                    0848   1278 _ANA_DFEO_REG_12	=	0x0848
                    084C   1279 _ANA_DFEO_REG_13	=	0x084c
                    0850   1280 _ANA_DFEO_REG_14	=	0x0850
                    0854   1281 _ANA_DFEO_REG_15	=	0x0854
                    0858   1282 _ANA_DFEO_REG_16	=	0x0858
                    085C   1283 _ANA_DFEO_REG_17	=	0x085c
                    0860   1284 _ANA_DFEO_REG_18	=	0x0860
                    0864   1285 _ANA_DFEO_REG_19	=	0x0864
                    0868   1286 _ANA_DFEO_REG_1A	=	0x0868
                    086C   1287 _ANA_DFEO_REG_1B	=	0x086c
                    0870   1288 _ANA_DFEO_REG_1C	=	0x0870
                    0874   1289 _ANA_DFEO_REG_1D	=	0x0874
                    0878   1290 _ANA_DFEO_REG_1E	=	0x0878
                    087C   1291 _ANA_DFEO_REG_1F	=	0x087c
                    0880   1292 _ANA_DFEO_REG_20	=	0x0880
                    0884   1293 _ANA_DFEO_REG_21	=	0x0884
                    0888   1294 _ANA_DFEO_REG_22	=	0x0888
                    088C   1295 _ANA_DFEO_REG_23	=	0x088c
                    0890   1296 _ANA_DFEO_REG_24	=	0x0890
                    0894   1297 _ANA_DFEO_REG_25	=	0x0894
                    0898   1298 _ANA_DFEO_REG_26	=	0x0898
                    089C   1299 _ANA_DFEO_REG_27	=	0x089c
                    0800   1300 _ANA_DFEO_REG_00	=	0x0800
                    0804   1301 _ANA_DFEO_REG_01	=	0x0804
                    0808   1302 _ANA_DFEO_REG_02	=	0x0808
                    080C   1303 _ANA_DFEO_REG_03	=	0x080c
                    0810   1304 _ANA_DFEO_REG_04	=	0x0810
                    0814   1305 _ANA_DFEO_REG_05	=	0x0814
                    0818   1306 _ANA_DFEO_REG_06	=	0x0818
                    081C   1307 _ANA_DFEO_REG_07	=	0x081c
                    0820   1308 _ANA_DFEO_REG_08	=	0x0820
                    0824   1309 _ANA_DFEO_REG_09	=	0x0824
                    0828   1310 _ANA_DFEO_REG_0A	=	0x0828
                    082C   1311 _ANA_DFEO_REG_0B	=	0x082c
                    8200   1312 _UPHY14_CMN_ANAREG_TOP_128	=	0x8200
                    8204   1313 _UPHY14_CMN_ANAREG_TOP_129	=	0x8204
                    8208   1314 _UPHY14_CMN_ANAREG_TOP_130	=	0x8208
                    820C   1315 _UPHY14_CMN_ANAREG_TOP_131	=	0x820c
                    8210   1316 _UPHY14_CMN_ANAREG_TOP_132	=	0x8210
                    8214   1317 _UPHY14_CMN_ANAREG_TOP_133	=	0x8214
                    8218   1318 _UPHY14_CMN_ANAREG_TOP_134	=	0x8218
                    821C   1319 _UPHY14_CMN_ANAREG_TOP_135	=	0x821c
                    8220   1320 _UPHY14_CMN_ANAREG_TOP_136	=	0x8220
                    8224   1321 _UPHY14_CMN_ANAREG_TOP_137	=	0x8224
                    8228   1322 _UPHY14_CMN_ANAREG_TOP_138	=	0x8228
                    822C   1323 _UPHY14_CMN_ANAREG_TOP_139	=	0x822c
                    8230   1324 _UPHY14_CMN_ANAREG_TOP_140	=	0x8230
                    8234   1325 _UPHY14_CMN_ANAREG_TOP_141	=	0x8234
                    8238   1326 _UPHY14_CMN_ANAREG_TOP_142	=	0x8238
                    823C   1327 _UPHY14_CMN_ANAREG_TOP_143	=	0x823c
                    8240   1328 _UPHY14_CMN_ANAREG_TOP_144	=	0x8240
                    8244   1329 _UPHY14_CMN_ANAREG_TOP_145	=	0x8244
                    8248   1330 _UPHY14_CMN_ANAREG_TOP_146	=	0x8248
                    824C   1331 _UPHY14_CMN_ANAREG_TOP_147	=	0x824c
                    8250   1332 _UPHY14_CMN_ANAREG_TOP_148	=	0x8250
                    8254   1333 _UPHY14_CMN_ANAREG_TOP_149	=	0x8254
                    8258   1334 _UPHY14_CMN_ANAREG_TOP_150	=	0x8258
                    825C   1335 _UPHY14_CMN_ANAREG_TOP_151	=	0x825c
                    8260   1336 _UPHY14_CMN_ANAREG_TOP_152	=	0x8260
                    8264   1337 _UPHY14_CMN_ANAREG_TOP_153	=	0x8264
                    8268   1338 _UPHY14_CMN_ANAREG_TOP_154	=	0x8268
                    826C   1339 _UPHY14_CMN_ANAREG_TOP_155	=	0x826c
                    8270   1340 _UPHY14_CMN_ANAREG_TOP_156	=	0x8270
                    8274   1341 _UPHY14_CMN_ANAREG_TOP_157	=	0x8274
                    8278   1342 _UPHY14_CMN_ANAREG_TOP_158	=	0x8278
                    827C   1343 _UPHY14_CMN_ANAREG_TOP_159	=	0x827c
                    8280   1344 _UPHY14_CMN_ANAREG_TOP_160	=	0x8280
                    8284   1345 _UPHY14_CMN_ANAREG_TOP_161	=	0x8284
                    8288   1346 _UPHY14_CMN_ANAREG_TOP_162	=	0x8288
                    828C   1347 _UPHY14_CMN_ANAREG_TOP_163	=	0x828c
                    8290   1348 _UPHY14_CMN_ANAREG_TOP_164	=	0x8290
                    8294   1349 _UPHY14_CMN_ANAREG_TOP_165	=	0x8294
                    8298   1350 _UPHY14_CMN_ANAREG_TOP_166	=	0x8298
                    829C   1351 _UPHY14_CMN_ANAREG_TOP_167	=	0x829c
                    82A0   1352 _UPHY14_CMN_ANAREG_TOP_168	=	0x82a0
                    82A4   1353 _UPHY14_CMN_ANAREG_TOP_169	=	0x82a4
                    82A8   1354 _UPHY14_CMN_ANAREG_TOP_170	=	0x82a8
                    82AC   1355 _UPHY14_CMN_ANAREG_TOP_171	=	0x82ac
                    82B0   1356 _UPHY14_CMN_ANAREG_TOP_172	=	0x82b0
                    82B4   1357 _UPHY14_CMN_ANAREG_TOP_173	=	0x82b4
                    82B8   1358 _UPHY14_CMN_ANAREG_TOP_174	=	0x82b8
                    82BC   1359 _UPHY14_CMN_ANAREG_TOP_175	=	0x82bc
                    82C0   1360 _UPHY14_CMN_ANAREG_TOP_176	=	0x82c0
                    82C4   1361 _UPHY14_CMN_ANAREG_TOP_177	=	0x82c4
                    82C8   1362 _UPHY14_CMN_ANAREG_TOP_178	=	0x82c8
                    82CC   1363 _UPHY14_CMN_ANAREG_TOP_179	=	0x82cc
                    82D0   1364 _UPHY14_CMN_ANAREG_TOP_180	=	0x82d0
                    82D4   1365 _UPHY14_CMN_ANAREG_TOP_181	=	0x82d4
                    82D8   1366 _UPHY14_CMN_ANAREG_TOP_182	=	0x82d8
                    82DC   1367 _UPHY14_CMN_ANAREG_TOP_183	=	0x82dc
                    82E0   1368 _UPHY14_CMN_ANAREG_TOP_184	=	0x82e0
                    82E4   1369 _UPHY14_CMN_ANAREG_TOP_185	=	0x82e4
                    82E8   1370 _UPHY14_CMN_ANAREG_TOP_186	=	0x82e8
                    82EC   1371 _UPHY14_CMN_ANAREG_TOP_187	=	0x82ec
                    82F0   1372 _UPHY14_CMN_ANAREG_TOP_188	=	0x82f0
                    82F4   1373 _UPHY14_CMN_ANAREG_TOP_189	=	0x82f4
                    82F8   1374 _UPHY14_CMN_ANAREG_TOP_190	=	0x82f8
                    82FC   1375 _UPHY14_CMN_ANAREG_TOP_191	=	0x82fc
                    8300   1376 _UPHY14_CMN_ANAREG_TOP_192	=	0x8300
                    8304   1377 _UPHY14_CMN_ANAREG_TOP_193	=	0x8304
                    8308   1378 _UPHY14_CMN_ANAREG_TOP_194	=	0x8308
                    830C   1379 _UPHY14_CMN_ANAREG_TOP_195	=	0x830c
                    8310   1380 _UPHY14_CMN_ANAREG_TOP_196	=	0x8310
                    8314   1381 _UPHY14_CMN_ANAREG_TOP_197	=	0x8314
                    8318   1382 _UPHY14_CMN_ANAREG_TOP_198	=	0x8318
                    831C   1383 _UPHY14_CMN_ANAREG_TOP_199	=	0x831c
                    8320   1384 _UPHY14_CMN_ANAREG_TOP_200	=	0x8320
                    8324   1385 _UPHY14_CMN_ANAREG_TOP_201	=	0x8324
                    8328   1386 _UPHY14_CMN_ANAREG_TOP_202	=	0x8328
                    832C   1387 _UPHY14_CMN_ANAREG_TOP_203	=	0x832c
                    8330   1388 _UPHY14_CMN_ANAREG_TOP_204	=	0x8330
                    8334   1389 _UPHY14_CMN_ANAREG_TOP_205	=	0x8334
                    8338   1390 _UPHY14_CMN_ANAREG_TOP_206	=	0x8338
                    833C   1391 _UPHY14_CMN_ANAREG_TOP_207	=	0x833c
                    8340   1392 _UPHY14_CMN_ANAREG_TOP_208	=	0x8340
                    8344   1393 _UPHY14_CMN_ANAREG_TOP_209	=	0x8344
                    8348   1394 _UPHY14_CMN_ANAREG_TOP_210	=	0x8348
                    834C   1395 _UPHY14_CMN_ANAREG_TOP_211	=	0x834c
                    8350   1396 _UPHY14_CMN_ANAREG_TOP_212	=	0x8350
                    8354   1397 _UPHY14_CMN_ANAREG_TOP_213	=	0x8354
                    8358   1398 _UPHY14_CMN_ANAREG_TOP_214	=	0x8358
                    2000   1399 _PM_CTRL_TX_LANE_REG1_LANE	=	0x2000
                    2004   1400 _PM_CTRL_TX_LANE_REG2_LANE	=	0x2004
                    2008   1401 _INPUT_TX_PIN_REG0_LANE	=	0x2008
                    200C   1402 _INPUT_TX_PIN_REG1_LANE	=	0x200c
                    2010   1403 _INPUT_TX_PIN_REG2_LANE	=	0x2010
                    2014   1404 _INPUT_TX_PIN_REG3_LANE	=	0x2014
                    2018   1405 _PM_CTRL_INTERRUPT_REG1_LANE	=	0x2018
                    201C   1406 _PM_CTRL_INTERRUPT_REG2	=	0x201c
                    2020   1407 _CLKGEN_TX_LANE_REG1_LANE	=	0x2020
                    2024   1408 _TX_SPEED_CONVERT_LANE	=	0x2024
                    2028   1409 _SPD_CTRL_INTERRUPT_REG1_LANE	=	0x2028
                    202C   1410 _SPD_CTRL_INTERRUPT_REG2	=	0x202c
                    2030   1411 _SPD_CTRL_TX_LANE_REG1_LANE	=	0x2030
                    2034   1412 _TX_SYSTEM_LANE	=	0x2034
                    203C   1413 _INPUT_TX_PIN_REG4_LANE	=	0x203c
                    2040   1414 _TX_CALIBRATION_LANE	=	0x2040
                    2044   1415 _DIG_TX_RSVD_REG0	=	0x2044
                    2048   1416 _INPUT_TX_PIN_REG5_LANE	=	0x2048
                    204C   1417 __FIELDNAME__LANE	=	0x204c
                    2050   1418 _PM_CTRL_INTERRUPT_ISR_REG1_LANE	=	0x2050
                    2054   1419 _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE	=	0x2054
                    2058   1420 _ANALOG_TX_REALTIME_REG_1	=	0x2058
                    205C   1421 _MON_TOP	=	0x205c
                    2100   1422 _PM_CTRL_RX_LANE_REG1_LANE	=	0x2100
                    2104   1423 _RX_SYSTEM_LANE	=	0x2104
                    2108   1424 _INPUT_RX_PIN_REG0_LANE	=	0x2108
                    210C   1425 _INPUT_RX_PIN_REG1_LANE	=	0x210c
                    2110   1426 _INPUT_RX_PIN_REG2_LANE	=	0x2110
                    2114   1427 _SPD_CTRL_RX_LANE_REG1_LANE	=	0x2114
                    2118   1428 _DIG_RX_RSVD_REG0	=	0x2118
                    211C   1429 _CLKGEN_RX_LANE_REG1_LANE	=	0x211c
                    2120   1430 _FRAME_SYNC_DET_REG0	=	0x2120
                    2124   1431 _FRAME_SYNC_DET_REG1	=	0x2124
                    2128   1432 _FRAME_SYNC_DET_REG2	=	0x2128
                    212C   1433 _FRAME_SYNC_DET_REG3	=	0x212c
                    2130   1434 _FRAME_SYNC_DET_REG4	=	0x2130
                    2134   1435 _FRAME_SYNC_DET_REG5	=	0x2134
                    2138   1436 _FRAME_SYNC_DET_REG6	=	0x2138
                    213C   1437 _CDR_LOCK_REG	=	0x213c
                    2140   1438 _RX_LANE_INTERRUPT	=	0x2140
                    2144   1439 _RX_LANE_INTERRUPT_MASK	=	0x2144
                    2148   1440 _RX_DATA_PATH_REG	=	0x2148
                    214C   1441 _INPUT_RX_PIN_REG3_LANE	=	0x214c
                    2150   1442 _RX_CALIBRATION_REG	=	0x2150
                    2158   1443 _RX_LANE_INTERRUPT_REG1	=	0x2158
                    2160   1444 _DTL_REG0	=	0x2160
                    2164   1445 _DTL_REG1	=	0x2164
                    2168   1446 _DTL_REG2	=	0x2168
                    216C   1447 _DTL_REG3	=	0x216c
                    2170   1448 _SQ_REG0	=	0x2170
                    4000   1449 _LANE_CFG0	=	0x4000
                    4004   1450 _LANE_STATUS0	=	0x4004
                    4008   1451 _LANE_CFG_STATUS2_LANE	=	0x4008
                    400C   1452 _LANE_CFG2_LANE	=	0x400c
                    4010   1453 _LANE_CFG4	=	0x4010
                    4014   1454 _LANE_CFG_STATUS3_LANE	=	0x4014
                    4018   1455 _LANE_DP_PIE8_CFG0_LANE	=	0x4018
                    401C   1456 _LANE_USB_DP_CFG1_LANE	=	0x401c
                    4020   1457 _LANE_USB_DP_CFG2_LANE	=	0x4020
                    4024   1458 _LANE_EQ_CFG0_LANE	=	0x4024
                    4028   1459 _LANE_EQ_CFG1_LANE	=	0x4028
                    402C   1460 _LANE_PRESET_CFG0_LANE	=	0x402c
                    4030   1461 _LANE_PRESET_CFG2_LANE	=	0x4030
                    4034   1462 _LANE_PRESET_CFG4_LANE	=	0x4034
                    4038   1463 _LANE_PRESET_CFG6_LANE	=	0x4038
                    403C   1464 _LANE_PRESET_CFG8_LANE	=	0x403c
                    4040   1465 _LANE_PRESET_CFG10_LANE	=	0x4040
                    4044   1466 _LANE_PRESET_CFG12_LANE	=	0x4044
                    4048   1467 _LANE_PRESET_CFG14_LANE	=	0x4048
                    404C   1468 _LANE_PRESET_CFG16_LANE	=	0x404c
                    4050   1469 _LANE_COEFF_MAX0_LANE	=	0x4050
                    4054   1470 _LANE_REMOTE_SET_LANE	=	0x4054
                    4058   1471 _LANE_EQ_16G_CFG0_LANE	=	0x4058
                    405C   1472 _LANE_16G_PRESET_CFG0_LANE	=	0x405c
                    4060   1473 _LANE_16G_PRESET_CFG2_LANE	=	0x4060
                    4064   1474 _LANE_16G_PRESET_CFG4_LANE	=	0x4064
                    4068   1475 _LANE_16G_PRESET_CFG6_LANE	=	0x4068
                    406C   1476 _LANE_16G_PRESET_CFG8_LANE	=	0x406c
                    4070   1477 _LANE_16G_PRESET_CFG10_LANE	=	0x4070
                    4074   1478 _LANE_16G_PRESET_CFG12_LANE	=	0x4074
                    4078   1479 _LANE_16G_PRESET_CFG14_LANE	=	0x4078
                    407C   1480 _LANE_16G_PRESET_CFG16_LANE	=	0x407c
                    4080   1481 _LANE_EQ_32G_CFG0_LANE	=	0x4080
                    4084   1482 _LANE_32G_PRESET_CFG0_LANE	=	0x4084
                    4088   1483 _LANE_32G_PRESET_CFG2_LANE	=	0x4088
                    408C   1484 _LANE_32G_PRESET_CFG4_LANE	=	0x408c
                    4090   1485 _LANE_32G_PRESET_CFG6_LANE	=	0x4090
                    4094   1486 _LANE_32G_PRESET_CFG8_LANE	=	0x4094
                    4098   1487 _LANE_32G_PRESET_CFG10_LANE	=	0x4098
                    409C   1488 _LANE_32G_PRESET_CFG12_LANE	=	0x409c
                    40A0   1489 _LANE_32G_PRESET_CFG14_LANE	=	0x40a0
                    40A4   1490 _LANE_32G_PRESET_CFG16_LANE	=	0x40a4
                    2200   1491 _MCU_CONTROL_LANE	=	0x2200
                    2204   1492 _MCU_GPIO	=	0x2204
                    2208   1493 _CACHE_DEBUG0	=	0x2208
                    220C   1494 _CACHE_DEBUG1	=	0x220c
                    2210   1495 _LANE_SYSTEM0	=	0x2210
                    2230   1496 _MCU_STATUS0_LANE	=	0x2230
                    2234   1497 _MCU_STATUS1_LANE	=	0x2234
                    2238   1498 _MCU_STATUS2_LANE	=	0x2238
                    223C   1499 _MCU_STATUS3_LANE	=	0x223c
                    2240   1500 _MCU_INT0_CONTROL	=	0x2240
                    2244   1501 _MCU_INT1_CONTROL	=	0x2244
                    2248   1502 _MCU_INT2_CONTROL	=	0x2248
                    224C   1503 _MCU_INT3_CONTROL	=	0x224c
                    2250   1504 _MCU_INT4_CONTROL	=	0x2250
                    2254   1505 _MCU_INT5_CONTROL	=	0x2254
                    2258   1506 _MCU_INT6_CONTROL	=	0x2258
                    225C   1507 _MCU_INT7_CONTROL	=	0x225c
                    2260   1508 _MCU_INT8_CONTROL	=	0x2260
                    2264   1509 _MCU_INT9_CONTROL	=	0x2264
                    2268   1510 _MCU_INT10_CONTROL	=	0x2268
                    226C   1511 _MCU_INT11_CONTROL	=	0x226c
                    2270   1512 _MCU_INT12_CONTROL	=	0x2270
                    2274   1513 _MCU_TIMER_CONTROL	=	0x2274
                    2278   1514 _MCU_TIMER0_CONTROL	=	0x2278
                    227C   1515 _MCU_TIMER1_CONTROL	=	0x227c
                    2280   1516 _MCU_TIMER2_CONTROL	=	0x2280
                    2284   1517 _MCU_TIMER3_CONTROL	=	0x2284
                    2288   1518 _MCU_IRQ_LANE	=	0x2288
                    228C   1519 _MCU_IRQ_MASK_LANE	=	0x228c
                    2290   1520 _MCU_MEM_REG1_LANE	=	0x2290
                    2294   1521 _MCU_MEM_REG2_LANE	=	0x2294
                    2298   1522 _MCU_TIMER_CTRL_1_LANE	=	0x2298
                    229C   1523 _MCU_TIMER_CTRL_2_LANE	=	0x229c
                    22A0   1524 _MCU_TIMER_CTRL_3_LANE	=	0x22a0
                    22A4   1525 _MCU_TIMER_CTRL_4_LANE	=	0x22a4
                    22A8   1526 _MCU_TIMER_CTRL_5_LANE	=	0x22a8
                    22AC   1527 _MCU_TIMER_CTRL_6_LANE	=	0x22ac
                    22B0   1528 _MCU_TIMER_CTRL_7_LANE	=	0x22b0
                    22B4   1529 _MCU_DEBUG0_LANE	=	0x22b4
                    22B8   1530 _MCU_DEBUG1_LANE	=	0x22b8
                    22BC   1531 _MCU_DEBUG2_LANE	=	0x22bc
                    22C0   1532 _MCU_DEBUG3_LANE	=	0x22c0
                    22C4   1533 _MCU_DEBUG_LANE	=	0x22c4
                    22C8   1534 _EXT_INT_CONTROL	=	0x22c8
                    22CC   1535 _ANA_IF_TRX_REG0	=	0x22cc
                    22D0   1536 _ANA_IF_DFEE_REG0	=	0x22d0
                    22D4   1537 _ANA_IF_DFEO_REG0	=	0x22d4
                    22D8   1538 _MCU_IRQ_ISR_LANE	=	0x22d8
                    22DC   1539 _MCU_WDT_LANE	=	0x22dc
                    22E0   1540 _MCU_INT_CONTROL_13	=	0x22e0
                    22E4   1541 _MCU_COMMAND0	=	0x22e4
                    22F4   1542 _MEM_ECC_ERR_ADDRESS0	=	0x22f4
                    22F8   1543 _XDATA_MEM_CHECKSUM_LANE0	=	0x22f8
                    22FC   1544 _XDATA_MEM_CHECKSUM_LANE1	=	0x22fc
                    2300   1545 _PT_CONTROL0	=	0x2300
                    2304   1546 _PT_CONTROL1	=	0x2304
                    2308   1547 _PT_USER_PATTERN0	=	0x2308
                    230C   1548 _PT_USER_PATTERN1	=	0x230c
                    2310   1549 _PT_USER_PATTERN2	=	0x2310
                    2314   1550 _PT_COUNTER0	=	0x2314
                    2318   1551 _PT_COUNTER1	=	0x2318
                    231C   1552 _PT_COUNTER2	=	0x231c
                    2400   1553 _DFE_CTRL_REG0	=	0x2400
                    2404   1554 _DFE_CTRL_REG1	=	0x2404
                    2408   1555 _DFE_CTRL_REG2	=	0x2408
                    240C   1556 _DFE_CTRL_REG3	=	0x240c
                    2410   1557 _RX_EQ_CLK_CTRL	=	0x2410
                    2414   1558 _DFE_CTRL_REG4	=	0x2414
                    2418   1559 _DFE_ANA_REG0	=	0x2418
                    241C   1560 _DFE_ANA_REG1	=	0x241c
                    2420   1561 _DFE_STEP_REG0	=	0x2420
                    2424   1562 _DFE_STEP_REG1	=	0x2424
                    2430   1563 _DFE_FEN_EVEN_REG	=	0x2430
                    2434   1564 _DFE_FEN_ODD_REG	=	0x2434
                    2438   1565 _DFE_DC_EVEN_REG8	=	0x2438
                    243C   1566 _DFE_DC_ODD_REG8	=	0x243c
                    2440   1567 _DFE_FEXT_EVEN_REG0	=	0x2440
                    2444   1568 _DFE_FEXT_EVEN_REG1	=	0x2444
                    2448   1569 _DFE_FEXT_EVEN_REG2	=	0x2448
                    244C   1570 _DFE_FEXT_EVEN_REG3	=	0x244c
                    2450   1571 _DFE_FEXT_EVEN_REG4	=	0x2450
                    2454   1572 _DFE_FEXT_EVEN_REG5	=	0x2454
                    2458   1573 _DFE_FEXT_EVEN_REG6	=	0x2458
                    245C   1574 _DFE_FEXT_EVEN_REG7	=	0x245c
                    2460   1575 _DFE_FEXT_ODD_REG0	=	0x2460
                    2464   1576 _DFE_FEXT_ODD_REG1	=	0x2464
                    2468   1577 _DFE_FEXT_ODD_REG2	=	0x2468
                    246C   1578 _DFE_FEXT_ODD_REG3	=	0x246c
                    2470   1579 _DFE_FEXT_ODD_REG4	=	0x2470
                    2474   1580 _DFE_FEXT_ODD_REG5	=	0x2474
                    2478   1581 _DFE_FEXT_ODD_REG6	=	0x2478
                    247C   1582 _DFE_FEXT_ODD_REG7	=	0x247c
                    2480   1583 _DFE_READ_EVEN_SM_REG0	=	0x2480
                    2484   1584 _DFE_READ_EVEN_SM_REG1	=	0x2484
                    2488   1585 _DFE_READ_EVEN_SM_REG2	=	0x2488
                    248C   1586 _DFE_READ_EVEN_SM_REG3	=	0x248c
                    2490   1587 _DFE_READ_EVEN_SM_REG4	=	0x2490
                    2494   1588 _DFE_READ_EVEN_SM_REG5	=	0x2494
                    2498   1589 _DFE_READ_EVEN_SM_REG6	=	0x2498
                    249C   1590 _DFE_READ_EVEN_SM_REG7	=	0x249c
                    24A0   1591 _DFE_READ_ODD_SM_REG0	=	0x24a0
                    24A4   1592 _DFE_READ_ODD_SM_REG1	=	0x24a4
                    24A8   1593 _DFE_READ_ODD_SM_REG2	=	0x24a8
                    24AC   1594 _DFE_READ_ODD_SM_REG3	=	0x24ac
                    24B0   1595 _DFE_READ_ODD_SM_REG4	=	0x24b0
                    24B4   1596 _DFE_READ_ODD_SM_REG5	=	0x24b4
                    24B8   1597 _DFE_READ_ODD_SM_REG6	=	0x24b8
                    24BC   1598 _DFE_READ_ODD_SM_REG7	=	0x24bc
                    24C0   1599 _DFE_READ_EVEN_SM_REG8	=	0x24c0
                    24C4   1600 _DFE_READ_ODD_SM_REG8	=	0x24c4
                    24D0   1601 _DFE_READ_EVEN_2C_REG0	=	0x24d0
                    24D4   1602 _DFE_READ_EVEN_2C_REG1	=	0x24d4
                    24D8   1603 _DFE_READ_EVEN_2C_REG2	=	0x24d8
                    24DC   1604 _DFE_READ_EVEN_2C_REG3	=	0x24dc
                    24E0   1605 _DFE_READ_EVEN_2C_REG4	=	0x24e0
                    24E4   1606 _DFE_READ_EVEN_2C_REG5	=	0x24e4
                    24E8   1607 _DFE_READ_EVEN_2C_REG6	=	0x24e8
                    24EC   1608 _DFE_READ_EVEN_2C_REG7	=	0x24ec
                    24F0   1609 _DFE_READ_ODD_2C_REG0	=	0x24f0
                    24F4   1610 _DFE_READ_ODD_2C_REG1	=	0x24f4
                    24F8   1611 _DFE_READ_ODD_2C_REG2	=	0x24f8
                    24FC   1612 _DFE_READ_ODD_2C_REG3	=	0x24fc
                    2500   1613 _DFE_READ_ODD_2C_REG4	=	0x2500
                    2504   1614 _DFE_READ_ODD_2C_REG5	=	0x2504
                    2508   1615 _DFE_READ_ODD_2C_REG6	=	0x2508
                    250C   1616 _DFE_READ_ODD_2C_REG7	=	0x250c
                    2510   1617 _DFE_READ_EVEN_2C_REG8	=	0x2510
                    2514   1618 _DFE_READ_ODD_2C_REG8	=	0x2514
                    2518   1619 _CAL_OFST_REG0	=	0x2518
                    251C   1620 _CAL_OFST_REG1	=	0x251c
                    2520   1621 _CAL_OFST_REG2	=	0x2520
                    2530   1622 _DFE_DCE_REG0	=	0x2530
                    2540   1623 _DFE_STATIC_LANE_REG0	=	0x2540
                    2544   1624 _DFE_STATIC_LANE_REG1	=	0x2544
                    2548   1625 _DFE_STATIC_LANE_REG3	=	0x2548
                    254C   1626 _DFE_STATIC_LANE_REG4	=	0x254c
                    2550   1627 _DFE_STATIC_LANE_REG5	=	0x2550
                    2554   1628 _DFE_STATIC_LANE_REG6	=	0x2554
                    2560   1629 _EOM_VLD_REG0	=	0x2560
                    2564   1630 _EOM_VLD_REG1	=	0x2564
                    2568   1631 _EOM_VLD_REG2	=	0x2568
                    256C   1632 _EOM_VLD_REG3	=	0x256c
                    2570   1633 _EOM_ERR_REG0	=	0x2570
                    2574   1634 _EOM_ERR_REG1	=	0x2574
                    2578   1635 _EOM_ERR_REG2	=	0x2578
                    257C   1636 _EOM_ERR_REG3	=	0x257c
                    2580   1637 _EOM_REG0	=	0x2580
                    25F0   1638 _EOM_VLD_REG4	=	0x25f0
                    25F4   1639 _LANE_MARGIN_REG0	=	0x25f4
                    6000   1640 _CAL_CTRL1_LANE	=	0x6000
                    6004   1641 _CAL_CTRL2_LANE	=	0x6004
                    6008   1642 _CAL_CTRL3_LANE	=	0x6008
                    600C   1643 _CAL_CTRL4_LANE	=	0x600c
                    6010   1644 _CAL_SAVE_DATA1_LANE	=	0x6010
                    6014   1645 _CAL_SAVE_DATA2_LANE	=	0x6014
                    6018   1646 _CAL_SAVE_DATA3_LANE	=	0x6018
                    601C   1647 _PHY_REMOTE_CTRL_COMMAND_LANE	=	0x601c
                    6020   1648 _PHY_REMOTE_CTRL_VALUE_LANE	=	0x6020
                    6024   1649 _PHY_LOCAL_VALUE_LANE	=	0x6024
                    6028   1650 _TRX_TRAIN_IF_TIMERS1_LANE	=	0x6028
                    602C   1651 _TRX_TRAIN_IF_TIMERS2_LANE	=	0x602c
                    6030   1652 _TRX_TRAIN_IF_TIMERS_ENABLE_LANE	=	0x6030
                    6034   1653 _DFE_CONTROL_0	=	0x6034
                    6038   1654 _DFE_CONTROL_1	=	0x6038
                    6040   1655 _DFE_CONTROL_2	=	0x6040
                    6044   1656 _DFE_CONTROL_3	=	0x6044
                    6048   1657 _DFE_CONTROL_4	=	0x6048
                    604C   1658 _DFE_CONTROL_5	=	0x604c
                    6050   1659 _TRAIN_CONTROL_0	=	0x6050
                    6054   1660 _TRAIN_CONTROL_1	=	0x6054
                    6058   1661 _TRAIN_CONTROL_2	=	0x6058
                    605C   1662 _RPTA_CONFIG_0	=	0x605c
                    6060   1663 _RPTA_CONFIG_1	=	0x6060
                    6064   1664 _DLL_CAL	=	0x6064
                    6068   1665 _TRAIN_PARA_0	=	0x6068
                    606C   1666 _TRAIN_PARA_1	=	0x606c
                    6070   1667 _TRAIN_PARA_2	=	0x6070
                    6074   1668 _TRAIN_PARA_3	=	0x6074
                    6078   1669 _DFE_CONTROL_6	=	0x6078
                    607C   1670 _DFE_TEST_0	=	0x607c
                    6080   1671 _DFE_TEST_1	=	0x6080
                    6084   1672 _DFE_TEST_4	=	0x6084
                    6088   1673 _DFE_TEST_5	=	0x6088
                    608C   1674 _DFE_CONTROL_7	=	0x608c
                    6090   1675 _DFE_CONTROL_8	=	0x6090
                    6094   1676 _DFE_CONTROL_9	=	0x6094
                    6098   1677 _DFE_CONTROL_10	=	0x6098
                    609C   1678 _DFE_CONTROL_11	=	0x609c
                    60A0   1679 _CDS_CTRL_REG0	=	0x60a0
                    60A4   1680 _CDS_CTRL_REG1	=	0x60a4
                    60A8   1681 _ESM_POP_P_CNT_LOW_LANE	=	0x60a8
                    60AC   1682 _ESM_ERR_P_CNT_LOW_LANE	=	0x60ac
                    60B0   1683 _ESM_ERR_POP_CNT_HIGH_LANE	=	0x60b0
                    60B4   1684 _TRAIN_CONTROL_3	=	0x60b4
                    60B8   1685 _TRAIN_CONTROL_4	=	0x60b8
                    60BC   1686 _TRAIN_CONTROL_5	=	0x60bc
                    60C0   1687 _TRAIN_CONTROL_6	=	0x60c0
                    60C4   1688 _TRAIN_CONTROL_7	=	0x60c4
                    60C8   1689 _TRAIN_CONTROL_8	=	0x60c8
                    60CC   1690 _TRAIN_CONTROL_9	=	0x60cc
                    60D0   1691 _TRAIN_CONTROL_10	=	0x60d0
                    60D4   1692 _TRAIN_CONTROL_11	=	0x60d4
                    60D8   1693 _TRAIN_CONTROL_12	=	0x60d8
                    60DC   1694 _ESM_POP_N_CNT_LOW_LANE	=	0x60dc
                    60E0   1695 _ESM_ERR_N_CNT_LOW_LANE	=	0x60e0
                    60E4   1696 _TRAIN_CONTROL_13	=	0x60e4
                    60E8   1697 _TRAIN_CONTROL_14	=	0x60e8
                    60EC   1698 _TRAIN_CONTROL_15	=	0x60ec
                    60F0   1699 _TRAIN_CONTROL_16	=	0x60f0
                    60F4   1700 _TRAIN_CONTROL_17	=	0x60f4
                    60F8   1701 _END_XDAT_LANE	=	0x60f8
                    A000   1702 _TX_CMN_REG	=	0xa000
                    A008   1703 _DTX_REG0	=	0xa008
                    A00C   1704 _DTX_REG1	=	0xa00c
                    A010   1705 _DTX_REG2	=	0xa010
                    A014   1706 _DTX_REG3	=	0xa014
                    A018   1707 _DTX_REG4	=	0xa018
                    A01C   1708 _DTX_PHY_ALIGN_REG0	=	0xa01c
                    A024   1709 _DTX_PHY_ALIGN_REG1	=	0xa024
                    A028   1710 _DTX_PHY_ALIGN_REG2	=	0xa028
                    A02C   1711 _SRIS_REG0	=	0xa02c
                    A030   1712 _SRIS_REG1	=	0xa030
                    A100   1713 _RX_CMN_0	=	0xa100
                    A110   1714 _DFE_STATIC_REG0	=	0xa110
                    A114   1715 _DFE_STATIC_REG1	=	0xa114
                    A118   1716 _DFE_STATIC_REG3	=	0xa118
                    A11C   1717 _DFE_STATIC_REG4	=	0xa11c
                    A120   1718 _DFE_STATIC_REG5	=	0xa120
                    A124   1719 _DFE_STATIC_REG6	=	0xa124
                    4200   1720 _GLOB_RST_CLK_CTRL	=	0x4200
                    4204   1721 _GLOB_CLK_SRC_LO	=	0x4204
                    4208   1722 _GLOB_CLK_SRC_HI	=	0x4208
                    420C   1723 _GLOB_MISC_CTRL	=	0x420c
                    4210   1724 _GLOB_DP_SAL_CFG	=	0x4210
                    4214   1725 _GLOB_DP_SAL_CFG1	=	0x4214
                    4218   1726 _GLOB_DP_SAL_CFG3	=	0x4218
                    421C   1727 _GLOB_DP_SAL_CFG5	=	0x421c
                    4220   1728 _GLOB_PM_CFG0	=	0x4220
                    4224   1729 _GLOB_COUNTER_CTRL	=	0x4224
                    4228   1730 _GLOB_COUNTER_HI	=	0x4228
                    422C   1731 _GLOB_PM_DP_CTRL	=	0x422c
                    4230   1732 _GLOB_DP_BAL_CFG0	=	0x4230
                    4234   1733 _GLOB_DP_BAL_CFG2	=	0x4234
                    4238   1734 _GLOB_DP_BAL_CFG4	=	0x4238
                    423C   1735 _GLOB_BIST_CTRL	=	0x423c
                    4240   1736 _GLOB_BIST_LANE_TYPE	=	0x4240
                    4244   1737 _GLOB_BIST_START	=	0x4244
                    4248   1738 _GLOB_BIST_MASK	=	0x4248
                    424C   1739 _GLOB_BIST_RESULT	=	0x424c
                    4250   1740 _GLOB_BIST_SEQR_CFG	=	0x4250
                    4254   1741 _GLOB_BIST_DATA_HI	=	0x4254
                    4258   1742 _GLOB_PIPE_REVISION	=	0x4258
                    425C   1743 _GLOB_L1_SUBSTATES_CFG	=	0x425c
                    A200   1744 _MCU_CONTROL_0	=	0xa200
                    A204   1745 _MCU_CONTROL_1	=	0xa204
                    A208   1746 _MCU_CONTROL_2	=	0xa208
                    A20C   1747 _MCU_CONTROL_3	=	0xa20c
                    A210   1748 _MCU_CONTROL_4	=	0xa210
                    A214   1749 _MCU_DEBUG0	=	0xa214
                    A218   1750 _MCU_DEBUG1	=	0xa218
                    A21C   1751 _MEMORY_CONTROL_0	=	0xa21c
                    A220   1752 _MEMORY_CONTROL_1	=	0xa220
                    A224   1753 _MEMORY_CONTROL_2	=	0xa224
                    A228   1754 _MEMORY_CONTROL_3	=	0xa228
                    A22C   1755 _MEMORY_CONTROL_4	=	0xa22c
                    A234   1756 _MCU_INFO_0	=	0xa234
                    A238   1757 _MCU_INFO_1	=	0xa238
                    A23C   1758 _MCU_INFO_2	=	0xa23c
                    A240   1759 _MCU_INFO_3	=	0xa240
                    A244   1760 _MEM_CMN_ECC_ERR_ADDRESS0	=	0xa244
                    A2E0   1761 _ANA_IF_CMN_REG1	=	0xa2e0
                    A2E4   1762 _MEM_IRQ	=	0xa2e4
                    A2E8   1763 _MEM_IRQ_MASK	=	0xa2e8
                    A2EC   1764 _ANA_IF_CMN_REG0	=	0xa2ec
                    A2F0   1765 _APB_CONTROL_REG	=	0xa2f0
                    A2F4   1766 _MEM_IRQ_CLEAR	=	0xa2f4
                    A2F8   1767 _MCU_SYNC1	=	0xa2f8
                    A2FC   1768 _MCU_SYNC2	=	0xa2fc
                    A300   1769 _TEST0	=	0xa300
                    A304   1770 _TEST1	=	0xa304
                    A308   1771 _TEST2	=	0xa308
                    A30C   1772 _TEST3	=	0xa30c
                    A310   1773 _TEST4	=	0xa310
                    A314   1774 _SYSTEM	=	0xa314
                    A318   1775 _PM_CMN_REG1	=	0xa318
                    A31C   1776 _INPUT_CMN_PIN_REG0	=	0xa31c
                    A320   1777 _INPUT_CMN_PIN_REG1	=	0xa320
                    A324   1778 _INPUT_CMN_PIN_REG2	=	0xa324
                    A328   1779 _ANA_TSEN_CONTROL	=	0xa328
                    A32C   1780 _PLLCAL_REG0	=	0xa32c
                    A330   1781 _PLLCAL_REG1	=	0xa330
                    A334   1782 _CLKGEN_CMN_REG1	=	0xa334
                    A338   1783 _SPD_CMN_REG1	=	0xa338
                    A33C   1784 _OUTPUT_CMN_PIN_REG0	=	0xa33c
                    A340   1785 _CMN_CALIBRATION	=	0xa340
                    A344   1786 __FIELDNAME_	=	0xa344
                    A348   1787 _INPUT_CMN_PIN_REG3	=	0xa348
                    A34C   1788 _PM_CMN_REG2	=	0xa34c
                    A354   1789 _TEST5	=	0xa354
                    A358   1790 _XDATA_MEM_CHECKSUM_CMN_0	=	0xa358
                    A35C   1791 _XDATA_MEM_CHECKSUM_CMN_1	=	0xa35c
                    A360   1792 _XDATA_MEM_CHECKSUM_CMN_2	=	0xa360
                    A364   1793 _MCU_SDT_CMN	=	0xa364
                    A368   1794 _CMN_CACHE_DEBUG0	=	0xa368
                    A36C   1795 _MCU_INT_ADDR	=	0xa36c
                    A370   1796 _CMN_ISR_2	=	0xa370
                    A374   1797 _CMN_ISR_MASK_2	=	0xa374
                    A378   1798 _CMN_ISR_CLEAR_2	=	0xa378
                    A37C   1799 _CMN_MCU_GPIO	=	0xa37c
                    A380   1800 _CMN_CACHE_DEBUG1	=	0xa380
                    A384   1801 _CMN_MCU_TIMER_CONTROL	=	0xa384
                    A388   1802 _CMN_MCU_TIMER_CTRL_2_LANE	=	0xa388
                    A38C   1803 _CMN_MCU_TIMER_CTRL_3_LANE	=	0xa38c
                    A390   1804 _CMN_MCU_TIMER_CTRL_4_LANE	=	0xa390
                    A394   1805 _CMN_MCU_TIMER_CTRL_5_LANE	=	0xa394
                    A398   1806 _CMN_MCU_TIMER0_CONTROL	=	0xa398
                    A39C   1807 _CMN_MCU_TIMER1_CONTROL	=	0xa39c
                    A3A0   1808 _CMN_MCU_TIMER2_CONTROL	=	0xa3a0
                    A3A4   1809 _CMN_MCU_TIMER3_CONTROL	=	0xa3a4
                    A3A8   1810 _CMN_ISR_1	=	0xa3a8
                    A3AC   1811 _CMN_ISR_MASK_1	=	0xa3ac
                    A3B0   1812 _SET_LANE_ISR	=	0xa3b0
                    A3F4   1813 _CMN_MCU_REG	=	0xa3f4
                    A3F8   1814 _CID_REG0	=	0xa3f8
                    A3FC   1815 _CID_REG1	=	0xa3fc
                    E600   1816 _FW_REV	=	0xe600
                    E604   1817 _CONTROL_CONFIG0	=	0xe604
                    E608   1818 _CONTROL_CONFIG1	=	0xe608
                    E60C   1819 _CONTROL_CONFIG2	=	0xe60c
                    E610   1820 _CONTROL_CONFIG3	=	0xe610
                    E614   1821 _CONTROL_CONFIG4	=	0xe614
                    E618   1822 _CONTROL_CONFIG5	=	0xe618
                    E61C   1823 _CONTROL_CONFIG6	=	0xe61c
                    E620   1824 _CONTROL_CONFIG7	=	0xe620
                    E624   1825 _CAL_DATA0	=	0xe624
                    E628   1826 _TRAIN_IF_CONFIG	=	0xe628
                    E62C   1827 _CONTROL_CONFIG8	=	0xe62c
                    E630   1828 _CONTROL_CONFIG9	=	0xe630
                    E634   1829 _CON_CAL_STEP_SIZE1	=	0xe634
                    E638   1830 _CON_CAL_STEP_SIZE2	=	0xe638
                    E63C   1831 _CON_CAL_STEP_SIZE3	=	0xe63c
                    E640   1832 _CON_CAL_STEP_SIZE4	=	0xe640
                    E644   1833 _CON_CAL_STEP_SIZE5	=	0xe644
                    E648   1834 _CAL_TIME_OUT_AND_DIS	=	0xe648
                    E64C   1835 _CAL_STATUS_READ	=	0xe64c
                    E650   1836 _MCU_CONFIG	=	0xe650
                    E654   1837 _CAL_DATA1	=	0xe654
                    E658   1838 _LOOP_CNTS	=	0xe658
                    E65C   1839 _MCU_CONFIG1	=	0xe65c
                    E660   1840 _TIMER_SEL1	=	0xe660
                    E664   1841 _TIMER_SEL2	=	0xe664
                    E668   1842 _TIMER_SEL3	=	0xe668
                    E66C   1843 _G_SELLV_TXCLK	=	0xe66c
                    E670   1844 _G_SELLV_TXDATA	=	0xe670
                    E674   1845 _G_SELLV_TXPRE	=	0xe674
                    E678   1846 _G_SELLV_RXEOMCLK	=	0xe678
                    E67C   1847 _G_SELLV_RXDATACLK	=	0xe67c
                    E680   1848 _G_SELLV_RXSAMPLER	=	0xe680
                    E684   1849 _SAS_PRESET0_TB	=	0xe684
                    E688   1850 _SAS_PRESET1_TB	=	0xe688
                    E68C   1851 _SAS_PRESET2_TB	=	0xe68c
                    E690   1852 _ETH_PRESET0_TB	=	0xe690
                    E694   1853 _ETH_PRESET1_TB	=	0xe694
                    E698   1854 _TX_SAVE_0	=	0xe698
                    E69C   1855 _TX_SAVE_1	=	0xe69c
                    E6A0   1856 _TX_SAVE_2	=	0xe6a0
                    E6A4   1857 _TX_SAVE_3	=	0xe6a4
                    E6A8   1858 _TX_SAVE_4	=	0xe6a8
                    E6AC   1859 _CDS_EYE_CLK_THR	=	0xe6ac
                    E6B0   1860 _SYNC_INFO	=	0xe6b0
                    E6B4   1861 _MCU_INFO_4	=	0xe6b4
                    E6B8   1862 _MCU_INFO_5	=	0xe6b8
                    E6BC   1863 _MCU_INFO_12	=	0xe6bc
                    E6C0   1864 _MCU_INFO_13	=	0xe6c0
                    E6C4   1865 _END_XDAT_CMN	=	0xe6c4
                    2600   1866 _DME_ENC_REG0	=	0x2600
                    2604   1867 _DME_ENC_REG1	=	0x2604
                    2608   1868 _DME_ENC_REG2	=	0x2608
                    260C   1869 _DME_DEC_REG0	=	0x260c
                    2610   1870 _DME_DEC_REG1	=	0x2610
                    2614   1871 _TX_TRAIN_IF_REG0	=	0x2614
                    2618   1872 _TX_TRAIN_IF_REG1	=	0x2618
                    261C   1873 _TX_TRAIN_IF_REG2	=	0x261c
                    2620   1874 _TX_TRAIN_IF_REG3	=	0x2620
                    2624   1875 _TX_TRAIN_PATTTERN_REG0	=	0x2624
                    2628   1876 _TX_TRAIN_DRIVER_REG0	=	0x2628
                    262C   1877 _TX_TRAIN_DRIVER_REG1	=	0x262c
                    2630   1878 _TX_TRAIN_DRIVER_REG2	=	0x2630
                    2634   1879 _TX_TRAIN_DEFAULT_REG0	=	0x2634
                    2638   1880 _TX_TRAIN_DEFAULT_REG1	=	0x2638
                    263C   1881 _TX_TRAIN_DEFAULT_REG2	=	0x263c
                    2640   1882 _TX_TRAIN_DEFAULT_REG3	=	0x2640
                    2644   1883 _TX_TRAIN_DEFAULT_REG4	=	0x2644
                    2648   1884 _TX_TRAIN_DEFAULT_REG5	=	0x2648
                    264C   1885 _TX_EMPH_CTRL_REG0	=	0x264c
                    2650   1886 _LINK_TRAIN_MODE0	=	0x2650
                    2654   1887 _TX_DRV_RD_OUT_REG0	=	0x2654
                    2658   1888 _TX_AMP_CTRL_REG0	=	0x2658
                    265C   1889 _TRX_TRAIN_IF_INTERRUPT_LANE	=	0x265c
                    2660   1890 _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE	=	0x2660
                    2664   1891 _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE	=	0x2664
                    2668   1892 _TX_TRAIN_IF_REG4	=	0x2668
                    266C   1893 _TX_TRAIN_IF_REG5	=	0x266c
                    2670   1894 _TX_TRAIN_IF_REG6	=	0x2670
                    2674   1895 _TX_TRAIN_IF_REG7	=	0x2674
                    2678   1896 _TX_TRAIN_CTRL_LANE	=	0x2678
                    267C   1897 _TX_TRAIN_IF_REG8	=	0x267c
                    6100   1898 _DFE_READ_EVEN_REG0	=	0x6100
                    6104   1899 _DFE_READ_EVEN_REG1	=	0x6104
                    6108   1900 _DFE_READ_EVEN_REG2	=	0x6108
                    610C   1901 _DFE_READ_EVEN_REG3	=	0x610c
                    6110   1902 _DFE_READ_EVEN_REG4	=	0x6110
                    6114   1903 _DFE_READ_EVEN_REG5	=	0x6114
                    6118   1904 _DFE_READ_EVEN_REG6	=	0x6118
                    611C   1905 _DFE_READ_EVEN_REG7	=	0x611c
                    6120   1906 _DFE_READ_ODD_REG0	=	0x6120
                    6124   1907 _DFE_READ_ODD_REG1	=	0x6124
                    6128   1908 _DFE_READ_ODD_REG2	=	0x6128
                    612C   1909 _DFE_READ_ODD_REG3	=	0x612c
                    6130   1910 _DFE_READ_ODD_REG4	=	0x6130
                    6134   1911 _DFE_READ_ODD_REG5	=	0x6134
                    6138   1912 _DFE_READ_ODD_REG6	=	0x6138
                    613C   1913 _DFE_READ_ODD_REG7	=	0x613c
                    6140   1914 _DFE_READ_EVEN_REG8	=	0x6140
                    6144   1915 _DFE_READ_ODD_REG8	=	0x6144
                    6148   1916 _DFE_READ_F0A_EVEN	=	0x6148
                    614C   1917 _DFE_READ_F0A_ODD	=	0x614c
                    6150   1918 _DFE_READ_F0B_EVEN	=	0x6150
                    6154   1919 _DFE_READ_F0B_ODD	=	0x6154
                    6158   1920 _DFE_READ_F0D_EVEN	=	0x6158
                    615C   1921 _DFE_READ_F0D_ODD	=	0x615c
                    6160   1922 _DFE_READ_F0D_LEFT_EVEN	=	0x6160
                    6164   1923 _DFE_READ_F0D_LEFT_ODD	=	0x6164
                    6168   1924 _DFE_READ_F0D_RIGHT_EVEN	=	0x6168
                    616C   1925 _DFE_READ_F0D_RIGHT_ODD	=	0x616c
                    6170   1926 _CDS_READ_MISC0	=	0x6170
                    6174   1927 _CDS_READ_MISC1	=	0x6174
                    6214   1928 _TXTRAIN_IF_REG0	=	0x6214
                    E000   1929 _lc_speedtable	=	0xe000
                    E1C0   1930 _ring_speedtable	=	0xe1c0
                    E5C0   1931 _phy_mode_cmn_table	=	0xe5c0
                    6300   1932 _max_gen	=	0x6300
                    6301   1933 _min_gen	=	0x6301
                    6304   1934 _speedtable	=	0x6304
                    65D4   1935 _phy_mode_lane_table	=	0x65d4
                    60B4   1936 _rc_save	=	0x60b4
                    60D0   1937 _txffe_save	=	0x60d0
                    60E4   1938 _phase_save	=	0x60e4
                    6030   1939 _train_gn1_index	=	0x6030
                    6031   1940 _train_g1_index	=	0x6031
                    6032   1941 _train_g0_index	=	0x6032
                    E6B0   1942 _local_tx_preset_tb	=	0xe6b0
                    E5C1   1943 _cmx_cal_lcvco_dac	=	0xe5c1
                    E5C1   1944 _cmx_cal_lcvco_dac_lsb	=	0xe5c1
                    E5C4   1945 _cmx_cal_lcvco_dac_msb	=	0xe5c4
                    E5CA   1946 _cmx_cal_lccap_msb	=	0xe5ca
                    E5C8   1947 _cmx_cal_lccap_lsb	=	0xe5c8
                    E5CC   1948 _cmx_cal_plldcc	=	0xe5cc
                    E5D0   1949 _cmx_cal_pll_speed_ring	=	0xe5d0
                    E5D4   1950 _cmx_cal_pll_sllp_dac_coarse_ring	=	0xe5d4
                    E5D8   1951 _cmx_cal_sllp_dac_fine_ring	=	0xe5d8
                    65D4   1952 _lnx_cal_txdcc_pdiv	=	0x65d4
                    65D8   1953 _lnx_cal_txdcc_pdiv_hg	=	0x65d8
                    65DA   1954 _lnx_cal_txdcc	=	0x65da
                    65DE   1955 _lnx_cal_txdcc_hg	=	0x65de
                    65E0   1956 _lnx_cal_rxdcc_dll	=	0x65e0
                    65E4   1957 _lnx_cal_rxdcc_dll_hg	=	0x65e4
                    65E6   1958 _lnx_cal_rxdcc_data	=	0x65e6
                    65F0   1959 _lnx_cal_rxdcc_data_hg	=	0x65f0
                    65F5   1960 _lnx_cal_rxdcc_eom	=	0x65f5
                    65FF   1961 _lnx_cal_rxdcc_eom_hg	=	0x65ff
                    6604   1962 _lnx_cal_dll_gmsel	=	0x6604
                    6606   1963 _lnx_cal_vdda_dll_sel	=	0x6606
                    660A   1964 _lnx_cal_dll_eom_gmsel	=	0x660a
                    660C   1965 _lnx_cal_vdda_dll_eom_sel	=	0x660c
                    6610   1966 _lnx_cal_eom_dpher	=	0x6610
                    6612   1967 _lnx_cal_align90_dummy_clk	=	0x6612
                    661A   1968 _lnx_cal_align90_dac	=	0x661a
                    6622   1969 _lnx_cal_align90_gm	=	0x6622
                    662A   1970 _lnx_cal_sellv_txdata	=	0x662a
                    6634   1971 _lnx_cal_sellv_txclk	=	0x6634
                    663E   1972 _lnx_cal_sellv_rxdataclk	=	0x663e
                    6648   1973 _lnx_cal_sellv_txpre	=	0x6648
                    6652   1974 _lnx_cal_sellv_rxsampler	=	0x6652
                    665C   1975 _lnx_cal_sellv_rxeomclk	=	0x665c
                    6666   1976 _lnx_spdoft_tx_preset_index_lane	=	0x6666
                    6490   1977 _lnx_calx_txdcc_pdiv	=	0x6490
                    6496   1978 _lnx_calx_txdcc_pdiv_hg	=	0x6496
                    6499   1979 _lnx_calx_txdcc	=	0x6499
                    649F   1980 _lnx_calx_txdcc_hg	=	0x649f
                    64A2   1981 _lnx_calx_rxdcc_dll	=	0x64a2
                    64A8   1982 _lnx_calx_rxdcc_dll_hg	=	0x64a8
                    64AB   1983 _lnx_calx_dll_gmsel	=	0x64ab
                    64AE   1984 _lnx_calx_vdda_dll_sel	=	0x64ae
                    64B4   1985 _lnx_calx_dll_eom_gmsel	=	0x64b4
                    64B7   1986 _lnx_calx_vdda_dll_eom_sel	=	0x64b7
                    64BD   1987 _lnx_calx_eom_dpher	=	0x64bd
                    64C0   1988 _lnx_calx_align90_dummy_clk	=	0x64c0
                    64CC   1989 _lnx_calx_align90_dac	=	0x64cc
                    64D8   1990 _lnx_calx_align90_gm	=	0x64d8
                    6100   1991 _cds28	=	0x6100
                    6178   1992 _dfe_sm	=	0x6178
                    61B8   1993 _dfe_sm_dc	=	0x61b8
                    61C0   1994 _dfe_sm_save	=	0x61c0
                    03FC   1995 _UPHY_ANAREG_REV_0	=	0x03fc
                    E684   1996 _tx_tb	=	0xe684
                    E698   1997 _train_save_tb	=	0xe698
                    607C   1998 _sq_thrs_ratio_tb	=	0x607c
                           1999 ;--------------------------------------------------------
                           2000 ; absolute external ram data
                           2001 ;--------------------------------------------------------
                           2002 	.area XABS    (ABS,XDATA)
                           2003 ;--------------------------------------------------------
                           2004 ; external initialized ram data
                           2005 ;--------------------------------------------------------
                           2006 	.area HOME    (CODE)
                           2007 	.area GSINIT0 (CODE)
                           2008 	.area GSINIT1 (CODE)
                           2009 	.area GSINIT2 (CODE)
                           2010 	.area GSINIT3 (CODE)
                           2011 	.area GSINIT4 (CODE)
                           2012 	.area GSINIT5 (CODE)
                           2013 	.area GSINIT  (CODE)
                           2014 	.area GSFINAL (CODE)
                           2015 	.area CSEG    (CODE)
                           2016 ;--------------------------------------------------------
                           2017 ; interrupt vector 
                           2018 ;--------------------------------------------------------
                           2019 	.area HOME    (CODE)
   0000                    2020 __interrupt_vect:
   0000 02 00 C8           2021 	ljmp	__sdcc_gsinit_startup
   0003 02 17 87           2022 	ljmp	_int0_isr
   0006                    2023 	.ds	5
   000B 02 16 69           2024 	ljmp	_timer0_isr
   000E                    2025 	.ds	5
   0013 02 18 26           2026 	ljmp	_int1_isr
   0016                    2027 	.ds	5
   001B 02 16 91           2028 	ljmp	_timer1_isr
   001E                    2029 	.ds	5
   0023 02 28 B7           2030 	ljmp	_uart0_isr
   0026                    2031 	.ds	5
   002B 02 16 A3           2032 	ljmp	_timer2_isr
   002E                    2033 	.ds	5
   0033 32                 2034 	reti
   0034                    2035 	.ds	7
   003B 32                 2036 	reti
   003C                    2037 	.ds	7
   0043 02 1E C1           2038 	ljmp	_int7_isr
   0046                    2039 	.ds	5
   004B 02 1B 72           2040 	ljmp	_int2_isr
   004E                    2041 	.ds	5
   0053 02 17 A4           2042 	ljmp	_int3_isr
   0056                    2043 	.ds	5
   005B 02 27 75           2044 	ljmp	_int4_isr
   005E                    2045 	.ds	5
   0063 02 1C DF           2046 	ljmp	_int5_isr
   0066                    2047 	.ds	5
   006B 02 27 59           2048 	ljmp	_int6_isr
   006E                    2049 	.ds	5
   0073 32                 2050 	reti
   0074                    2051 	.ds	7
   007B 32                 2052 	reti
   007C                    2053 	.ds	7
   0083 32                 2054 	reti
   0084                    2055 	.ds	7
   008B 02 1A 6C           2056 	ljmp	_int8_isr
   008E                    2057 	.ds	5
   0093 02 1B 6A           2058 	ljmp	_int9_isr
   0096                    2059 	.ds	5
   009B 02 1E 7A           2060 	ljmp	_int10_isr
   009E                    2061 	.ds	5
   00A3 02 1C 08           2062 	ljmp	_int11_isr
   00A6                    2063 	.ds	5
   00AB 02 27 65           2064 	ljmp	_int12_isr
                           2065 ;--------------------------------------------------------
                           2066 ; global & static initialisations
                           2067 ;--------------------------------------------------------
                           2068 	.area HOME    (CODE)
                           2069 	.area GSINIT  (CODE)
                           2070 	.area GSFINAL (CODE)
                           2071 	.area GSINIT  (CODE)
                           2072 	.globl __sdcc_gsinit_startup
                           2073 	.globl __sdcc_program_startup
                           2074 	.globl __start__stack
                           2075 	.globl __mcs51_genRAMCLEAR
                           2076 	.area GSFINAL (CODE)
   00DB 02 00 AE           2077 	ljmp	__sdcc_program_startup
                           2078 ;--------------------------------------------------------
                           2079 ; Home
                           2080 ;--------------------------------------------------------
                           2081 	.area HOME    (CODE)
                           2082 	.area HOME    (CODE)
   00AE                    2083 __sdcc_program_startup:
   00AE 12 28 DC           2084 	lcall	_main
                           2085 ;	return from main will lock up
   00B1 80 FE              2086 	sjmp .
                           2087 ;--------------------------------------------------------
                           2088 ; code
                           2089 ;--------------------------------------------------------
                           2090 	.area CSEG    (CODE)
                           2091 ;------------------------------------------------------------
                           2092 ;Allocation info for local variables in function '_sdcc_external_startup'
                           2093 ;------------------------------------------------------------
                           2094 ;------------------------------------------------------------
                           2095 ;	../../shared/src/main.c:46: _sdcc_external_startup() {
                           2096 ;	-----------------------------------------
                           2097 ;	 function _sdcc_external_startup
                           2098 ;	-----------------------------------------
   28D8                    2099 __sdcc_external_startup:
                    0002   2100 	ar2 = 0x02
                    0003   2101 	ar3 = 0x03
                    0004   2102 	ar4 = 0x04
                    0005   2103 	ar5 = 0x05
                    0006   2104 	ar6 = 0x06
                    0007   2105 	ar7 = 0x07
                    0000   2106 	ar0 = 0x00
                    0001   2107 	ar1 = 0x01
                           2108 ;	../../shared/src/main.c:47: return(1);
   28D8 90 00 01           2109 	mov	dptr,#0x0001
   28DB 22                 2110 	ret
                           2111 ;------------------------------------------------------------
                           2112 ;Allocation info for local variables in function 'main'
                           2113 ;------------------------------------------------------------
                           2114 ;------------------------------------------------------------
                           2115 ;	../../shared/src/main.c:59: void main(){
                           2116 ;	-----------------------------------------
                           2117 ;	 function main
                           2118 ;	-----------------------------------------
   28DC                    2119 _main:
                           2120 ;	../../shared/src/main.c:60: CKCON = 0x00; 
   28DC 75 8E 00           2121 	mov	_CKCON,#0x00
                           2122 ;	../../shared/src/main.c:62: EA = 0;
   28DF C2 AF              2123 	clr	_EA
                           2124 ;	../../shared/src/main.c:78: if (mcuid != MCU_CMN) {
   28E1 90 22 00           2125 	mov	dptr,#_MCU_CONTROL_LANE
   28E4 E0                 2126 	movx	a,@dptr
   28E5 FA                 2127 	mov	r2,a
   28E6 BA C0 03           2128 	cjne	r2,#0xC0,00224$
   28E9 02 29 A7           2129 	ljmp	00176$
   28EC                    2130 00224$:
                           2131 ;	../../shared/src/main.c:79: cpu_init();
   28EC 12 0F B6           2132 	lcall	_cpu_init
                           2133 ;	../../shared/src/main.c:81: pll_cal_timeout_dis_save = cmx_PLL_CAL_TIMEOUT_DIS;
   28EF 90 E6 49           2134 	mov	dptr,#(_CAL_TIME_OUT_AND_DIS + 0x0001)
   28F2 E0                 2135 	movx	a,@dptr
   28F3 03                 2136 	rr	a
   28F4 54 01              2137 	anl	a,#0x01
   28F6 FA                 2138 	mov	r2,a
   28F7 90 67 B6           2139 	mov	dptr,#_pll_cal_timeout_dis_save
   28FA F0                 2140 	movx	@dptr,a
                           2141 ;	../../shared/src/main.c:99: if (reg_PHY_FM_RST_LANE || reg_PHY_FM_RST) {
   28FB 90 22 10           2142 	mov	dptr,#_LANE_SYSTEM0
   28FE E0                 2143 	movx	a,@dptr
   28FF 20 E2 07           2144 	jb	acc.2,00105$
   2902 90 A3 20           2145 	mov	dptr,#_INPUT_CMN_PIN_REG1
   2905 E0                 2146 	movx	a,@dptr
   2906 30 E6 45           2147 	jnb	acc.6,00106$
   2909                    2148 00105$:
                           2149 ;	../../shared/src/main.c:100: if (PHY_STATUS != 0) {
   2909 90 22 30           2150 	mov	dptr,#_MCU_STATUS0_LANE
   290C E0                 2151 	movx	a,@dptr
   290D 60 16              2152 	jz	00102$
                           2153 ;	../../shared/src/main.c:102: pwrsq_on = 1;
   290F 90 66 2B           2154 	mov	dptr,#_pwrsq_on
   2912 74 01              2155 	mov	a,#0x01
   2914 F0                 2156 	movx	@dptr,a
                           2157 ;	../../shared/src/main.c:104: reset_pwr_reg();
   2915 78 27              2158 	mov	r0,#_reset_pwr_reg
   2917 79 BD              2159 	mov	r1,#(_reset_pwr_reg >> 8)
   2919 7A 01              2160 	mov	r2,#(_reset_pwr_reg >> 16)
   291B 12 00 B3           2161 	lcall	__sdcc_banked_call
                           2162 ;	../../shared/src/main.c:105: cmx_PLL_CAL_TIMEOUT_DIS = 1;
   291E 90 E6 49           2163 	mov	dptr,#(_CAL_TIME_OUT_AND_DIS + 0x0001)
   2921 E0                 2164 	movx	a,@dptr
   2922 44 02              2165 	orl	a,#0x02
   2924 F0                 2166 	movx	@dptr,a
   2925                    2167 00102$:
                           2168 ;	../../shared/src/main.c:109: reg_CLEAR_PHY_FM_RST_LANE = 0;
                           2169 ;	../../shared/src/main.c:110: reg_CLEAR_PHY_FM_RST_LANE = 1;
   2925 90 22 10           2170 	mov	dptr,#_LANE_SYSTEM0
   2928 E0                 2171 	movx	a,@dptr
   2929 54 F7              2172 	anl	a,#0xf7
   292B F0                 2173 	movx	@dptr,a
   292C E0                 2174 	movx	a,@dptr
   292D 44 08              2175 	orl	a,#0x08
   292F F0                 2176 	movx	@dptr,a
                           2177 ;	../../shared/src/main.c:111: if(mcuid== master_mcu) {
   2930 90 22 00           2178 	mov	dptr,#_MCU_CONTROL_LANE
   2933 E0                 2179 	movx	a,@dptr
   2934 FA                 2180 	mov	r2,a
   2935 90 E6 50           2181 	mov	dptr,#_MCU_CONFIG
   2938 E0                 2182 	movx	a,@dptr
   2939 FB                 2183 	mov	r3,a
   293A EA                 2184 	mov	a,r2
   293B B5 03 0B           2185 	cjne	a,ar3,00104$
                           2186 ;	../../shared/src/main.c:112: reg_CLEAR_PHY_FM_RST = 1;
                           2187 ;	../../shared/src/main.c:113: reg_CLEAR_PHY_FM_RST = 0;
   293E 90 A3 20           2188 	mov	dptr,#_INPUT_CMN_PIN_REG1
   2941 E0                 2189 	movx	a,@dptr
   2942 44 80              2190 	orl	a,#0x80
   2944 F0                 2191 	movx	@dptr,a
   2945 E0                 2192 	movx	a,@dptr
   2946 54 7F              2193 	anl	a,#0x7f
   2948 F0                 2194 	movx	@dptr,a
   2949                    2195 00104$:
                           2196 ;	../../shared/src/main.c:116: PHY_STATUS = ST_INIT;
   2949 90 22 30           2197 	mov	dptr,#_MCU_STATUS0_LANE
   294C E4                 2198 	clr	a
   294D F0                 2199 	movx	@dptr,a
   294E                    2200 00106$:
                           2201 ;	../../shared/src/main.c:119: if (PHY_STATUS != ST_INIT)
   294E 90 22 30           2202 	mov	dptr,#_MCU_STATUS0_LANE
   2951 E0                 2203 	movx	a,@dptr
   2952 60 09              2204 	jz	00109$
                           2205 ;	../../shared/src/main.c:120: PHY_STATUS = PHY_NS;
   2954 90 22 31           2206 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   2957 E0                 2207 	movx	a,@dptr
   2958 FA                 2208 	mov	r2,a
   2959 90 22 30           2209 	mov	dptr,#_MCU_STATUS0_LANE
   295C F0                 2210 	movx	@dptr,a
   295D                    2211 00109$:
                           2212 ;	../../shared/src/main.c:122: PHY_NS = ST_INIT;
   295D 90 22 31           2213 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   2960 E4                 2214 	clr	a
   2961 F0                 2215 	movx	@dptr,a
                           2216 ;	../../shared/src/main.c:124: sync_status_lane(IDLE);
   2962 75 82 00           2217 	mov	dpl,#0x00
   2965 78 C2              2218 	mov	r0,#_sync_status_lane
   2967 79 B1              2219 	mov	r1,#(_sync_status_lane >> 8)
   2969 7A 01              2220 	mov	r2,#(_sync_status_lane >> 16)
   296B 12 00 B3           2221 	lcall	__sdcc_banked_call
                           2222 ;	../../shared/src/main.c:125: MCU_INIT_ST |= MCU_INIT;
   296E 90 22 3C           2223 	mov	dptr,#_MCU_STATUS3_LANE
   2971 E0                 2224 	movx	a,@dptr
   2972 FA                 2225 	mov	r2,a
   2973 43 02 01           2226 	orl	ar2,#0x01
   2976 90 22 3C           2227 	mov	dptr,#_MCU_STATUS3_LANE
   2979 EA                 2228 	mov	a,r2
   297A F0                 2229 	movx	@dptr,a
                           2230 ;	../../shared/src/main.c:127: if( PHY_STATUS == ST_INIT) {
   297B 90 22 30           2231 	mov	dptr,#_MCU_STATUS0_LANE
   297E E0                 2232 	movx	a,@dptr
   297F 70 14              2233 	jnz	00111$
                           2234 ;	../../shared/src/main.c:128: clear_xdata(); 
   2981 78 D1              2235 	mov	r0,#_clear_xdata
   2983 79 B6              2236 	mov	r1,#(_clear_xdata >> 8)
   2985 7A 01              2237 	mov	r2,#(_clear_xdata >> 16)
   2987 12 00 B3           2238 	lcall	__sdcc_banked_call
                           2239 ;	../../shared/src/main.c:135: PowerUp_Seq();
   298A 78 44              2240 	mov	r0,#_PowerUp_Seq
   298C 79 C2              2241 	mov	r1,#(_PowerUp_Seq >> 8)
   298E 7A 01              2242 	mov	r2,#(_PowerUp_Seq >> 16)
   2990 12 00 B3           2243 	lcall	__sdcc_banked_call
   2993 80 09              2244 	sjmp	00112$
   2995                    2245 00111$:
                           2246 ;	../../shared/src/main.c:139: clear_normal_mode_cal_en();
   2995 78 F0              2247 	mov	r0,#_clear_normal_mode_cal_en
   2997 79 90              2248 	mov	r1,#(_clear_normal_mode_cal_en >> 8)
   2999 7A 01              2249 	mov	r2,#(_clear_normal_mode_cal_en >> 16)
   299B 12 00 B3           2250 	lcall	__sdcc_banked_call
   299E                    2251 00112$:
                           2252 ;	../../shared/src/main.c:142: reg_INT_ENABLE_ALL_LANE = 1; 
   299E 90 22 0B           2253 	mov	dptr,#(_CACHE_DEBUG0 + 0x0003)
   29A1 E0                 2254 	movx	a,@dptr
   29A2 44 80              2255 	orl	a,#0x80
   29A4 F0                 2256 	movx	@dptr,a
                           2257 ;	../../shared/src/main.c:143: EA = 1;
   29A5 D2 AF              2258 	setb	_EA
                           2259 ;	../../shared/src/main.c:151: while(1){
   29A7                    2260 00176$:
                           2261 ;	../../shared/src/main.c:153: if (mcuid != MCU_CMN) {
   29A7 90 22 00           2262 	mov	dptr,#_MCU_CONTROL_LANE
   29AA E0                 2263 	movx	a,@dptr
   29AB FA                 2264 	mov	r2,a
   29AC BA C0 02           2265 	cjne	r2,#0xC0,00232$
   29AF 80 F6              2266 	sjmp	00176$
   29B1                    2267 00232$:
                           2268 ;	../../shared/src/main.c:162: switch(PHY_STATUS){
   29B1 90 22 30           2269 	mov	dptr,#_MCU_STATUS0_LANE
   29B4 E0                 2270 	movx	a,@dptr
   29B5 FA                 2271 	mov	r2,a
   29B6 BA 03 03           2272 	cjne	r2,#0x03,00233$
   29B9 02 2A AD           2273 	ljmp	00131$
   29BC                    2274 00233$:
   29BC BA 19 02           2275 	cjne	r2,#0x19,00234$
   29BF 80 64              2276 	sjmp	00115$
   29C1                    2277 00234$:
   29C1 BA 1B 03           2278 	cjne	r2,#0x1B,00235$
   29C4 02 2A 5B           2279 	ljmp	00120$
   29C7                    2280 00235$:
   29C7 BA 1E 03           2281 	cjne	r2,#0x1E,00236$
   29CA 02 2A 66           2282 	ljmp	00121$
   29CD                    2283 00236$:
   29CD BA 1F 03           2284 	cjne	r2,#0x1F,00237$
   29D0 02 2A 71           2285 	ljmp	00122$
   29D3                    2286 00237$:
   29D3 BA 20 03           2287 	cjne	r2,#0x20,00238$
   29D6 02 2A 87           2288 	ljmp	00124$
   29D9                    2289 00238$:
   29D9 BA 21 02           2290 	cjne	r2,#0x21,00239$
   29DC 80 71              2291 	sjmp	00119$
   29DE                    2292 00239$:
   29DE BA 22 02           2293 	cjne	r2,#0x22,00240$
   29E1 80 48              2294 	sjmp	00116$
   29E3                    2295 00240$:
   29E3 BA 23 02           2296 	cjne	r2,#0x23,00241$
   29E6 80 4F              2297 	sjmp	00117$
   29E8                    2298 00241$:
   29E8 BA 26 03           2299 	cjne	r2,#0x26,00242$
   29EB 02 2A 92           2300 	ljmp	00125$
   29EE                    2301 00242$:
   29EE BA 27 03           2302 	cjne	r2,#0x27,00243$
   29F1 02 2A E1           2303 	ljmp	00136$
   29F4                    2304 00243$:
   29F4 BA 28 03           2305 	cjne	r2,#0x28,00244$
   29F7 02 2A 9D           2306 	ljmp	00128$
   29FA                    2307 00244$:
   29FA BA 29 03           2308 	cjne	r2,#0x29,00245$
   29FD 02 2A 9D           2309 	ljmp	00128$
   2A00                    2310 00245$:
   2A00 BA 2A 03           2311 	cjne	r2,#0x2A,00246$
   2A03 02 2A 9D           2312 	ljmp	00128$
   2A06                    2313 00246$:
   2A06 BA 2B 03           2314 	cjne	r2,#0x2B,00247$
   2A09 02 2A C3           2315 	ljmp	00133$
   2A0C                    2316 00247$:
   2A0C BA 2C 03           2317 	cjne	r2,#0x2C,00248$
   2A0F 02 2A A2           2318 	ljmp	00129$
   2A12                    2319 00248$:
   2A12 BA 32 02           2320 	cjne	r2,#0x32,00249$
   2A15 80 2C              2321 	sjmp	00118$
   2A17                    2322 00249$:
   2A17 BA 33 02           2323 	cjne	r2,#0x33,00250$
   2A1A 80 60              2324 	sjmp	00123$
   2A1C                    2325 00250$:
   2A1C BA 3B 03           2326 	cjne	r2,#0x3B,00251$
   2A1F 02 2A B8           2327 	ljmp	00132$
   2A22                    2328 00251$:
   2A22 02 2A E1           2329 	ljmp	00136$
                           2330 ;	../../shared/src/main.c:163: case ST_SPDCHG: SpeedChange();		break;
   2A25                    2331 00115$:
   2A25 12 33 D5           2332 	lcall	_SpeedChange
   2A28 02 2A E1           2333 	ljmp	00136$
                           2334 ;	../../shared/src/main.c:165: case ST_P1:     Power_P0s_P1();		break;
   2A2B                    2335 00116$:
   2A2B 78 98              2336 	mov	r0,#_Power_P0s_P1
   2A2D 79 C7              2337 	mov	r1,#(_Power_P0s_P1 >> 8)
   2A2F 7A 01              2338 	mov	r2,#(_Power_P0s_P1 >> 16)
   2A31 12 00 B3           2339 	lcall	__sdcc_banked_call
   2A34 02 2A E1           2340 	ljmp	00136$
                           2341 ;	../../shared/src/main.c:166: case ST_P1_WK:  Power_P1_P0();		break;
   2A37                    2342 00117$:
   2A37 78 5B              2343 	mov	r0,#_Power_P1_P0
   2A39 79 CA              2344 	mov	r1,#(_Power_P1_P0 >> 8)
   2A3B 7A 01              2345 	mov	r2,#(_Power_P1_P0 >> 16)
   2A3D 12 00 B3           2346 	lcall	__sdcc_banked_call
   2A40 02 2A E1           2347 	ljmp	00136$
                           2348 ;	../../shared/src/main.c:167: case ST_P2_P0:	Power_P2_P0();		break;
   2A43                    2349 00118$:
   2A43 78 BC              2350 	mov	r0,#_Power_P2_P0
   2A45 79 CA              2351 	mov	r1,#(_Power_P2_P0 >> 8)
   2A47 7A 01              2352 	mov	r2,#(_Power_P2_P0 >> 16)
   2A49 12 00 B3           2353 	lcall	__sdcc_banked_call
   2A4C 02 2A E1           2354 	ljmp	00136$
                           2355 ;	../../shared/src/main.c:168: case ST_P2: 	Power_P1_P2();	 	break;
   2A4F                    2356 00119$:
   2A4F 78 5A              2357 	mov	r0,#_Power_P1_P2
   2A51 79 C8              2358 	mov	r1,#(_Power_P1_P2 >> 8)
   2A53 7A 01              2359 	mov	r2,#(_Power_P1_P2 >> 16)
   2A55 12 00 B3           2360 	lcall	__sdcc_banked_call
   2A58 02 2A E1           2361 	ljmp	00136$
                           2362 ;	../../shared/src/main.c:169: case ST_P2_WK: 	Power_P2_P1();	 	break;
   2A5B                    2363 00120$:
   2A5B 78 3B              2364 	mov	r0,#_Power_P2_P1
   2A5D 79 C9              2365 	mov	r1,#(_Power_P2_P1 >> 8)
   2A5F 7A 01              2366 	mov	r2,#(_Power_P2_P1 >> 16)
   2A61 12 00 B3           2367 	lcall	__sdcc_banked_call
                           2368 ;	../../shared/src/main.c:170: case ST_P2_BEACON:	Power_P2_BEACON();	break;
   2A64 80 7B              2369 	sjmp	00136$
   2A66                    2370 00121$:
   2A66 78 87              2371 	mov	r0,#_Power_P2_BEACON
   2A68 79 CF              2372 	mov	r1,#(_Power_P2_BEACON >> 8)
   2A6A 7A 01              2373 	mov	r2,#(_Power_P2_BEACON >> 16)
   2A6C 12 00 B3           2374 	lcall	__sdcc_banked_call
                           2375 ;	../../shared/src/main.c:171: case ST_TXDETRX: Power_P0_TXDETRX();	break;
   2A6F 80 70              2376 	sjmp	00136$
   2A71                    2377 00122$:
   2A71 78 28              2378 	mov	r0,#_Power_P0_TXDETRX
   2A73 79 CE              2379 	mov	r1,#(_Power_P0_TXDETRX >> 8)
   2A75 7A 01              2380 	mov	r2,#(_Power_P0_TXDETRX >> 16)
   2A77 12 00 B3           2381 	lcall	__sdcc_banked_call
                           2382 ;	../../shared/src/main.c:172: case ST_P1_TXDETRX: Power_P1_TXDETRX(); break;
   2A7A 80 65              2383 	sjmp	00136$
   2A7C                    2384 00123$:
   2A7C 78 71              2385 	mov	r0,#_Power_P1_TXDETRX
   2A7E 79 CE              2386 	mov	r1,#(_Power_P1_TXDETRX >> 8)
   2A80 7A 01              2387 	mov	r2,#(_Power_P1_TXDETRX >> 16)
   2A82 12 00 B3           2388 	lcall	__sdcc_banked_call
                           2389 ;	../../shared/src/main.c:173: case ST_P2_TXDETRX: Power_P2_TXDETRX(); break;
   2A85 80 5A              2390 	sjmp	00136$
   2A87                    2391 00124$:
   2A87 78 04              2392 	mov	r0,#_Power_P2_TXDETRX
   2A89 79 CF              2393 	mov	r1,#(_Power_P2_TXDETRX >> 8)
   2A8B 7A 01              2394 	mov	r2,#(_Power_P2_TXDETRX >> 16)
   2A8D 12 00 B3           2395 	lcall	__sdcc_banked_call
                           2396 ;	../../shared/src/main.c:174: case ST_P1CLKREQ_WK:	Power_P1CLKREQ_P1();	break;
   2A90 80 4F              2397 	sjmp	00136$
   2A92                    2398 00125$:
   2A92 78 A8              2399 	mov	r0,#_Power_P1CLKREQ_P1
   2A94 79 CB              2400 	mov	r1,#(_Power_P1CLKREQ_P1 >> 8)
   2A96 7A 01              2401 	mov	r2,#(_Power_P1CLKREQ_P1 >> 16)
   2A98 12 00 B3           2402 	lcall	__sdcc_banked_call
                           2403 ;	../../shared/src/main.c:184: case ST_TRXTRAIN: TRX_Train();  	break;
   2A9B 80 44              2404 	sjmp	00136$
   2A9D                    2405 00128$:
   2A9D 12 4E AE           2406 	lcall	_TRX_Train
                           2407 ;	../../shared/src/main.c:185: case ST_DTL:	  RX_Init();		break;
   2AA0 80 3F              2408 	sjmp	00136$
   2AA2                    2409 00129$:
   2AA2 78 2B              2410 	mov	r0,#_RX_Init
   2AA4 79 E0              2411 	mov	r1,#(_RX_Init >> 8)
   2AA6 7A 01              2412 	mov	r2,#(_RX_Init >> 16)
   2AA8 12 00 B3           2413 	lcall	__sdcc_banked_call
                           2414 ;	../../shared/src/main.c:192: case ST_CAL:	  Calibration(); 		break;
   2AAB 80 34              2415 	sjmp	00136$
   2AAD                    2416 00131$:
   2AAD 78 25              2417 	mov	r0,#_Calibration
   2AAF 79 84              2418 	mov	r1,#(_Calibration >> 8)
   2AB1 7A 01              2419 	mov	r2,#(_Calibration >> 16)
   2AB3 12 00 B3           2420 	lcall	__sdcc_banked_call
                           2421 ;	../../shared/src/main.c:194: case ST_LANE_MARGIN_EN:  lane_margin_start(); 		break;
   2AB6 80 29              2422 	sjmp	00136$
   2AB8                    2423 00132$:
   2AB8 78 AF              2424 	mov	r0,#_lane_margin_start
   2ABA 79 AD              2425 	mov	r1,#(_lane_margin_start >> 8)
   2ABC 7A 01              2426 	mov	r2,#(_lane_margin_start >> 16)
   2ABE 12 00 B3           2427 	lcall	__sdcc_banked_call
                           2428 ;	../../shared/src/main.c:196: case ST_NORMAL: 
   2AC1 80 1E              2429 	sjmp	00136$
   2AC3                    2430 00133$:
                           2431 ;	../../shared/src/main.c:197: Cal_Cont();
   2AC3 78 C8              2432 	mov	r0,#_Cal_Cont
   2AC5 79 8B              2433 	mov	r1,#(_Cal_Cont >> 8)
   2AC7 7A 01              2434 	mov	r2,#(_Cal_Cont >> 16)
   2AC9 12 00 B3           2435 	lcall	__sdcc_banked_call
                           2436 ;	../../shared/src/main.c:198: if(PHY_NS != ST_INIT) break;
   2ACC 90 22 31           2437 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   2ACF E0                 2438 	movx	a,@dptr
   2AD0 70 0F              2439 	jnz	00136$
                           2440 ;	../../shared/src/main.c:201: RxFFE_ACCap(); //dfe cont run
   2AD2 78 A7              2441 	mov	r0,#_RxFFE_ACCap
   2AD4 79 9C              2442 	mov	r1,#(_RxFFE_ACCap >> 8)
   2AD6 7A 01              2443 	mov	r2,#(_RxFFE_ACCap >> 16)
   2AD8 12 00 B3           2444 	lcall	__sdcc_banked_call
                           2445 ;	../../shared/src/main.c:206: PHY_STATUS = ST_NORMAL;
   2ADB 90 22 30           2446 	mov	dptr,#_MCU_STATUS0_LANE
   2ADE 74 2B              2447 	mov	a,#0x2B
   2AE0 F0                 2448 	movx	@dptr,a
                           2449 ;	../../shared/src/main.c:209: }
   2AE1                    2450 00136$:
                           2451 ;	../../shared/src/main.c:212: if(do_rxinit || reg_INT_RX_INIT_RISE_ISR_LANE) {
   2AE1 20 08 07           2452 	jb	_do_rxinit,00157$
   2AE4 90 20 1B           2453 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG1_LANE + 0x0003)
   2AE7 E0                 2454 	movx	a,@dptr
   2AE8 30 E3 32           2455 	jnb	acc.3,00158$
   2AEB                    2456 00157$:
                           2457 ;	../../shared/src/main.c:213: if(SKIP_RX_INIT) {
   2AEB 90 22 3A           2458 	mov	dptr,#(_MCU_STATUS2_LANE + 0x0002)
   2AEE E0                 2459 	movx	a,@dptr
   2AEF 60 23              2460 	jz	00138$
                           2461 ;	../../shared/src/main.c:214: reg_RX_INIT_DONE_LANE = 0; 
   2AF1 90 21 02           2462 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   2AF4 E0                 2463 	movx	a,@dptr
   2AF5 54 F7              2464 	anl	a,#0xf7
   2AF7 F0                 2465 	movx	@dptr,a
                           2466 ;	../../shared/src/main.c:215: reg_INT_RX_INIT_RISE_ISR_CLEAR_LANE = 1;
                           2467 ;	../../shared/src/main.c:216: reg_INT_RX_INIT_RISE_ISR_CLEAR_LANE = 0;
   2AF8 90 20 53           2468 	mov	dptr,#(_PM_CTRL_INTERRUPT_ISR_REG1_LANE + 0x0003)
   2AFB E0                 2469 	movx	a,@dptr
   2AFC 44 08              2470 	orl	a,#0x08
   2AFE F0                 2471 	movx	@dptr,a
   2AFF E0                 2472 	movx	a,@dptr
   2B00 54 F7              2473 	anl	a,#0xf7
   2B02 F0                 2474 	movx	@dptr,a
                           2475 ;	../../shared/src/main.c:217: SKIP_RX_INIT = 0;
   2B03 90 22 3A           2476 	mov	dptr,#(_MCU_STATUS2_LANE + 0x0002)
   2B06 E4                 2477 	clr	a
   2B07 F0                 2478 	movx	@dptr,a
                           2479 ;	../../shared/src/main.c:218: do_rxinit = 0;
   2B08 C2 08              2480 	clr	_do_rxinit
                           2481 ;	../../shared/src/main.c:219: reg_RX_INIT_DONE_LANE = 1; 
   2B0A 90 21 02           2482 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   2B0D E0                 2483 	movx	a,@dptr
   2B0E 44 08              2484 	orl	a,#0x08
   2B10 F0                 2485 	movx	@dptr,a
   2B11 02 2B 9C           2486 	ljmp	00159$
   2B14                    2487 00138$:
                           2488 ;	../../shared/src/main.c:221: else PHY_STATUS = ST_DTL; 
   2B14 90 22 30           2489 	mov	dptr,#_MCU_STATUS0_LANE
   2B17 74 2C              2490 	mov	a,#0x2C
   2B19 F0                 2491 	movx	@dptr,a
   2B1A 02 2B 9C           2492 	ljmp	00159$
   2B1D                    2493 00158$:
                           2494 ;	../../shared/src/main.c:223: else if(do_train | do_rxtrain)  { PHY_STATUS = ST_TRXTRAIN; }
   2B1D A2 06              2495 	mov	c,_do_train
   2B1F 72 07              2496 	orl	c,_do_rxtrain
   2B21 50 08              2497 	jnc	00155$
   2B23 90 22 30           2498 	mov	dptr,#_MCU_STATUS0_LANE
   2B26 74 28              2499 	mov	a,#0x28
   2B28 F0                 2500 	movx	@dptr,a
   2B29 80 71              2501 	sjmp	00159$
   2B2B                    2502 00155$:
                           2503 ;	../../shared/src/main.c:224: else if(do_train==0 && reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE) {
   2B2B 20 06 18           2504 	jb	_do_train,00151$
   2B2E 90 26 79           2505 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   2B31 E0                 2506 	movx	a,@dptr
   2B32 30 E6 11           2507 	jnb	acc.6,00151$
                           2508 ;	../../shared/src/main.c:225: reg_MCU_DEBUG0_LANE_7_0 = 0x98;
   2B35 90 22 B4           2509 	mov	dptr,#_MCU_DEBUG0_LANE
   2B38 74 98              2510 	mov	a,#0x98
   2B3A F0                 2511 	movx	@dptr,a
                           2512 ;	../../shared/src/main.c:226: txtrain_force_restart();
   2B3B 78 C7              2513 	mov	r0,#_txtrain_force_restart
   2B3D 79 E6              2514 	mov	r1,#(_txtrain_force_restart >> 8)
   2B3F 7A 01              2515 	mov	r2,#(_txtrain_force_restart >> 16)
   2B41 12 00 B3           2516 	lcall	__sdcc_banked_call
   2B44 80 56              2517 	sjmp	00159$
   2B46                    2518 00151$:
                           2519 ;	../../shared/src/main.c:228: else if(do_rxtrain==0 && reg_PIN_RX_TRAIN_ENABLE_RD_LANE) {
   2B46 20 07 2A           2520 	jb	_do_rxtrain,00147$
   2B49 90 26 79           2521 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   2B4C E0                 2522 	movx	a,@dptr
   2B4D 30 E5 23           2523 	jnb	acc.5,00147$
                           2524 ;	../../shared/src/main.c:229: reg_MCU_DEBUG0_LANE_7_0 = 0x99;
   2B50 90 22 B4           2525 	mov	dptr,#_MCU_DEBUG0_LANE
   2B53 74 99              2526 	mov	a,#0x99
   2B55 F0                 2527 	movx	@dptr,a
                           2528 ;	../../shared/src/main.c:230: EA = 0;
   2B56 C2 AF              2529 	clr	_EA
                           2530 ;	../../shared/src/main.c:231: TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B0 = 0x01;
                           2531 ;	../../shared/src/main.c:232: TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B0 = 0;
   2B58 90 26 64           2532 	mov	dptr,#_TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE
   2B5B 74 01              2533 	mov	a,#0x01
   2B5D F0                 2534 	movx	@dptr,a
   2B5E E4                 2535 	clr	a
   2B5F F0                 2536 	movx	@dptr,a
                           2537 ;	../../shared/src/main.c:234: PHY_STATUS = ST_TRXTRAIN; reg_RX_TRAIN_ON_LANE = 1; do_rxtrain = 1;
   2B60 90 22 30           2538 	mov	dptr,#_MCU_STATUS0_LANE
   2B63 74 28              2539 	mov	a,#0x28
   2B65 F0                 2540 	movx	@dptr,a
   2B66 90 26 7B           2541 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   2B69 E0                 2542 	movx	a,@dptr
   2B6A 44 04              2543 	orl	a,#0x04
   2B6C F0                 2544 	movx	@dptr,a
   2B6D D2 07              2545 	setb	_do_rxtrain
                           2546 ;	../../shared/src/main.c:235: EA = 1;
   2B6F D2 AF              2547 	setb	_EA
   2B71 80 29              2548 	sjmp	00159$
   2B73                    2549 00147$:
                           2550 ;	../../shared/src/main.c:240: else if(reg_DFE_MARGIN_EN_LANE && pcie_usb_mode)  { PHY_STATUS = ST_LANE_MARGIN_EN; }
   2B73 90 25 F5           2551 	mov	dptr,#(_LANE_MARGIN_REG0 + 0x0001)
   2B76 E0                 2552 	movx	a,@dptr
   2B77 30 E0 0F           2553 	jnb	acc.0,00143$
   2B7A 90 67 14           2554 	mov	dptr,#_pcie_usb_mode
   2B7D E0                 2555 	movx	a,@dptr
   2B7E FA                 2556 	mov	r2,a
   2B7F 60 08              2557 	jz	00143$
   2B81 90 22 30           2558 	mov	dptr,#_MCU_STATUS0_LANE
   2B84 74 3B              2559 	mov	a,#0x3B
   2B86 F0                 2560 	movx	@dptr,a
   2B87 80 13              2561 	sjmp	00159$
   2B89                    2562 00143$:
                           2563 ;	../../shared/src/main.c:241: else if(cmx_CAL_START)  { PHY_STATUS = ST_CAL; cal_start_on = 1; }
   2B89 90 E6 08           2564 	mov	dptr,#_CONTROL_CONFIG1
   2B8C E0                 2565 	movx	a,@dptr
   2B8D 30 E0 0C           2566 	jnb	acc.0,00159$
   2B90 90 22 30           2567 	mov	dptr,#_MCU_STATUS0_LANE
   2B93 74 03              2568 	mov	a,#0x03
   2B95 F0                 2569 	movx	@dptr,a
   2B96 90 67 AF           2570 	mov	dptr,#_cal_start_on
   2B99 74 01              2571 	mov	a,#0x01
   2B9B F0                 2572 	movx	@dptr,a
   2B9C                    2573 00159$:
                           2574 ;	../../shared/src/main.c:243: if(PHY_MCU_REMOTE_REQ_LANE && lnx_PHY_MCU_LOCAL_ACK_LANE==0)
   2B9C 90 22 E4           2575 	mov	dptr,#_MCU_COMMAND0
   2B9F E0                 2576 	movx	a,@dptr
   2BA0 30 E0 0C           2577 	jnb	acc.0,00164$
   2BA3 90 60 33           2578 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   2BA6 E0                 2579 	movx	a,@dptr
   2BA7 20 E0 05           2580 	jb	acc.0,00164$
                           2581 ;	../../shared/src/main.c:244: cmd_if();
   2BAA 12 02 22           2582 	lcall	_cmd_if
   2BAD 80 0E              2583 	sjmp	00165$
   2BAF                    2584 00164$:
                           2585 ;	../../shared/src/main.c:246: else if(PHY_MCU_REMOTE_REQ_LANE==0)
   2BAF 90 22 E4           2586 	mov	dptr,#_MCU_COMMAND0
   2BB2 E0                 2587 	movx	a,@dptr
   2BB3 20 E0 07           2588 	jb	acc.0,00165$
                           2589 ;	../../shared/src/main.c:247: lnx_PHY_MCU_LOCAL_ACK_LANE = 0;
   2BB6 90 60 33           2590 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   2BB9 E0                 2591 	movx	a,@dptr
   2BBA 54 FE              2592 	anl	a,#0xfe
   2BBC F0                 2593 	movx	@dptr,a
   2BBD                    2594 00165$:
                           2595 ;	../../shared/src/main.c:257: if(lnx_SQ_AUTO_TRAIN_LANE==1) {
   2BBD 90 60 3A           2596 	mov	dptr,#(_DFE_CONTROL_1 + 0x0002)
   2BC0 E0                 2597 	movx	a,@dptr
   2BC1 23                 2598 	rl	a
   2BC2 23                 2599 	rl	a
   2BC3 54 01              2600 	anl	a,#0x01
   2BC5 FA                 2601 	mov	r2,a
   2BC6 BA 01 03           2602 	cjne	r2,#0x01,00168$
                           2603 ;	../../shared/src/main.c:258: sq_auto_train_enable();
   2BC9 12 60 50           2604 	lcall	_sq_auto_train_enable
   2BCC                    2605 00168$:
                           2606 ;	../../shared/src/main.c:261: if(PHY_NS != ST_INIT) {
   2BCC 90 22 31           2607 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   2BCF E0                 2608 	movx	a,@dptr
   2BD0 60 13              2609 	jz	00170$
                           2610 ;	../../shared/src/main.c:262: PHY_STATUS = PHY_NS;
   2BD2 90 22 31           2611 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   2BD5 E0                 2612 	movx	a,@dptr
   2BD6 FA                 2613 	mov	r2,a
   2BD7 90 22 30           2614 	mov	dptr,#_MCU_STATUS0_LANE
   2BDA F0                 2615 	movx	@dptr,a
                           2616 ;	../../shared/src/main.c:263: PHY_NS = ST_INIT;
   2BDB 90 22 31           2617 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   2BDE E4                 2618 	clr	a
   2BDF F0                 2619 	movx	@dptr,a
                           2620 ;	../../shared/src/main.c:264: do_wake = 0;
   2BE0 C2 05              2621 	clr	_do_wake
                           2622 ;	../../shared/src/main.c:265: continue;
   2BE2 02 29 A7           2623 	ljmp	00176$
   2BE5                    2624 00170$:
                           2625 ;	../../shared/src/main.c:269: Check_EOM_Stage_fmExt();
   2BE5 12 0F F4           2626 	lcall	_Check_EOM_Stage_fmExt
                           2627 ;	../../shared/src/main.c:273: Check_F0d();
   2BE8 78 96              2628 	mov	r0,#_Check_F0d
   2BEA 79 A8              2629 	mov	r1,#(_Check_F0d >> 8)
   2BEC 7A 01              2630 	mov	r2,#(_Check_F0d >> 16)
   2BEE 12 00 B3           2631 	lcall	__sdcc_banked_call
                           2632 ;	../../shared/src/main.c:277: if( lnx_CLI_START_LANE == 1 ) cli_monitor();
   2BF1 90 60 98           2633 	mov	dptr,#_DFE_CONTROL_10
   2BF4 E0                 2634 	movx	a,@dptr
   2BF5 54 01              2635 	anl	a,#0x01
   2BF7 FA                 2636 	mov	r2,a
   2BF8 BA 01 03           2637 	cjne	r2,#0x01,00172$
   2BFB 12 00 F8           2638 	lcall	_cli_monitor
   2BFE                    2639 00172$:
                           2640 ;	../../shared/src/main.c:281: reg_MCU_WDT_RESET_LANE = !reg_MCU_WDT_RESET_LANE;
   2BFE 90 22 97           2641 	mov	dptr,#(_MCU_MEM_REG2_LANE + 0x0003)
   2C01 E0                 2642 	movx	a,@dptr
   2C02 23                 2643 	rl	a
   2C03 54 01              2644 	anl	a,#0x01
   2C05 FA                 2645 	mov	r2,a
   2C06 B4 01 00           2646 	cjne	a,#0x01,00272$
   2C09                    2647 00272$:
   2C09 E4                 2648 	clr	a
   2C0A 33                 2649 	rlc	a
   2C0B FA                 2650 	mov	r2,a
   2C0C 90 22 97           2651 	mov	dptr,#(_MCU_MEM_REG2_LANE + 0x0003)
   2C0F 13                 2652 	rrc	a
   2C10 E0                 2653 	movx	a,@dptr
   2C11 92 E7              2654 	mov	acc.7,c
   2C13 F0                 2655 	movx	@dptr,a
   2C14 02 29 A7           2656 	ljmp	00176$
                           2657 	.area CSEG    (CODE)
                           2658 	.area CONST   (CODE)
                           2659 	.area CABS    (ABS,CODE)
   0200                    2660 	.org 0x0200
   0200                    2661 _gaFwRev:
   0200 26                 2662 	.db #0x26	; 38
   0201 08                 2663 	.db #0x08	; 8
   0202 0C                 2664 	.db #0x0C	; 12
   0203 00                 2665 	.db #0x00	; 0
   0204                    2666 	.org 0x0204
   0204                    2667 _gnFwPhyMode:
   0204 01                 2668 	.db #0x01	; 1
