                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:22:05 2018
                              5 ;--------------------------------------------------------
                              6 	.module train_if
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
                            979 	.globl _frame_marker_ready
                            980 	.globl _request_local_status
                            981 	.globl _remote_error_check
                            982 	.globl _request_local_ctrl
                            983 	.globl _get_tx_status
                            984 	.globl _Send_ctrl_to_tx
                            985 	.globl _trainif_init
                            986 	.globl _txtrain_force_restart
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
                           2032 ;Allocation info for local variables in function 'frame_marker_ready'
                           2033 ;------------------------------------------------------------
                           2034 ;------------------------------------------------------------
                           2035 ;	../../shared/src/train_if.c:25: void frame_marker_ready(void) BANKING_CTRL {
                           2036 ;	-----------------------------------------
                           2037 ;	 function frame_marker_ready
                           2038 ;	-----------------------------------------
   E5FE                    2039 _frame_marker_ready:
                    0002   2040 	ar2 = 0x02
                    0003   2041 	ar3 = 0x03
                    0004   2042 	ar4 = 0x04
                    0005   2043 	ar5 = 0x05
                    0006   2044 	ar6 = 0x06
                    0007   2045 	ar7 = 0x07
                    0000   2046 	ar0 = 0x00
                    0001   2047 	ar1 = 0x01
                           2048 ;	../../shared/src/train_if.c:32: while(reg_FRAME_LOCK_LANE==0 ) {
   E5FE                    2049 00105$:
   E5FE 90 21 26           2050 	mov	dptr,#(_FRAME_SYNC_DET_REG1 + 0x0002)
   E601 E0                 2051 	movx	a,@dptr
   E602 20 E2 12           2052 	jb	acc.2,00108$
                           2053 ;	../../shared/src/train_if.c:33: if(lnx_TX_TRAIN_FRAME_LOCK_DET_FAIL_INT_LANE) {
   E605 90 60 5A           2054 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0002)
   E608 E0                 2055 	movx	a,@dptr
   E609 30 E1 F2           2056 	jnb	acc.1,00105$
                           2057 ;	../../shared/src/train_if.c:34: if(lnx_TX_TRAIN_FRAME_DET_TIMER_ENABLE_LANE == 1) break;
   E60C 90 60 33           2058 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   E60F E0                 2059 	movx	a,@dptr
   E610 C4                 2060 	swap	a
   E611 54 01              2061 	anl	a,#0x01
   E613 FA                 2062 	mov	r2,a
   E614 BA 01 E7           2063 	cjne	r2,#0x01,00105$
   E617                    2064 00108$:
   E617 02 00 C5           2065 	ljmp	__sdcc_banked_ret
                           2066 ;------------------------------------------------------------
                           2067 ;Allocation info for local variables in function 'request_local_status'
                           2068 ;------------------------------------------------------------
                           2069 ;dat                       Allocated to registers r2 r3 
                           2070 ;------------------------------------------------------------
                           2071 ;	../../shared/src/train_if.c:53: void request_local_status(void) BANKING_CTRL
                           2072 ;	-----------------------------------------
                           2073 ;	 function request_local_status
                           2074 ;	-----------------------------------------
   E61A                    2075 _request_local_status:
                           2076 ;	../../shared/src/train_if.c:59: if(phy_mode <= SAS &&  reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE==0) {
   E61A 90 A3 16           2077 	mov	dptr,#(_SYSTEM + 0x0002)
   E61D E0                 2078 	movx	a,@dptr
   E61E 54 07              2079 	anl	a,#0x07
   E620 FA                 2080 	mov	r2,a
   E621 C3                 2081 	clr	c
   E622 74 81              2082 	mov	a,#(0x01 ^ 0x80)
   E624 8A F0              2083 	mov	b,r2
   E626 63 F0 80           2084 	xrl	b,#0x80
   E629 95 F0              2085 	subb	a,b
   E62B 40 16              2086 	jc	00104$
   E62D 90 26 78           2087 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   E630 E0                 2088 	movx	a,@dptr
   E631 20 E0 0F           2089 	jb	acc.0,00104$
                           2090 ;	../../shared/src/train_if.c:60: if(remote_error_check()!=_EXIT_SUCCESS) return;
   E634 78 98              2091 	mov	r0,#_remote_error_check
   E636 79 E6              2092 	mov	r1,#(_remote_error_check >> 8)
   E638 7A 01              2093 	mov	r2,#(_remote_error_check >> 16)
   E63A 12 00 B3           2094 	lcall	__sdcc_banked_call
   E63D E5 82              2095 	mov	a,dpl
   E63F 60 02              2096 	jz	00104$
   E641 80 52              2097 	sjmp	00114$
   E643                    2098 00104$:
                           2099 ;	../../shared/src/train_if.c:64: dat = reg_LOCAL_STATUS_FIELD_LANE_15_0;
   E643 90 26 04           2100 	mov	dptr,#_DME_ENC_REG1
   E646 E0                 2101 	movx	a,@dptr
   E647 FA                 2102 	mov	r2,a
   E648 A3                 2103 	inc	dptr
   E649 E0                 2104 	movx	a,@dptr
   E64A FB                 2105 	mov	r3,a
                           2106 ;	../../shared/src/train_if.c:65: dat &= 0x3fff;
   E64B 53 03 3F           2107 	anl	ar3,#0x3F
                           2108 ;	../../shared/src/train_if.c:66: if(link_train_mode==0) {
   E64E 90 26 7B           2109 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   E651 E0                 2110 	movx	a,@dptr
   E652 20 E7 29           2111 	jb	acc.7,00113$
                           2112 ;	../../shared/src/train_if.c:67: if( train_comp ) 
   E655 90 67 11           2113 	mov	dptr,#_train_comp
   E658 E0                 2114 	movx	a,@dptr
   E659 FC                 2115 	mov	r4,a
   E65A 60 05              2116 	jz	00110$
                           2117 ;	../../shared/src/train_if.c:68: dat |= 0x8000;
   E65C 43 03 80           2118 	orl	ar3,#0x80
   E65F 80 1D              2119 	sjmp	00113$
   E661                    2120 00110$:
                           2121 ;	../../shared/src/train_if.c:69: else if( tx_init_bit && phy_mode <= SAS)
   E661 90 67 10           2122 	mov	dptr,#_tx_init_bit
   E664 E0                 2123 	movx	a,@dptr
   E665 FC                 2124 	mov	r4,a
   E666 60 16              2125 	jz	00113$
   E668 90 A3 16           2126 	mov	dptr,#(_SYSTEM + 0x0002)
   E66B E0                 2127 	movx	a,@dptr
   E66C 54 07              2128 	anl	a,#0x07
   E66E FC                 2129 	mov	r4,a
   E66F C3                 2130 	clr	c
   E670 74 81              2131 	mov	a,#(0x01 ^ 0x80)
   E672 8C F0              2132 	mov	b,r4
   E674 63 F0 80           2133 	xrl	b,#0x80
   E677 95 F0              2134 	subb	a,b
   E679 40 03              2135 	jc	00113$
                           2136 ;	../../shared/src/train_if.c:70: dat |= 0x4000;
   E67B 43 03 40           2137 	orl	ar3,#0x40
   E67E                    2138 00113$:
                           2139 ;	../../shared/src/train_if.c:73: EA = 0;
   E67E C2 AF              2140 	clr	_EA
                           2141 ;	../../shared/src/train_if.c:74: reg_LOCAL_STATUS_FIELD_LANE_15_0 = dat;
   E680 90 26 04           2142 	mov	dptr,#_DME_ENC_REG1
   E683 EA                 2143 	mov	a,r2
   E684 F0                 2144 	movx	@dptr,a
   E685 A3                 2145 	inc	dptr
   E686 EB                 2146 	mov	a,r3
   E687 F0                 2147 	movx	@dptr,a
                           2148 ;	../../shared/src/train_if.c:75: reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; 
                           2149 ;	../../shared/src/train_if.c:76: reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
   E688 90 26 7A           2150 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   E68B E0                 2151 	movx	a,@dptr
   E68C 44 20              2152 	orl	a,#0x20
   E68E F0                 2153 	movx	@dptr,a
   E68F E0                 2154 	movx	a,@dptr
   E690 54 DF              2155 	anl	a,#0xdf
   E692 F0                 2156 	movx	@dptr,a
                           2157 ;	../../shared/src/train_if.c:77: EA = 1;
   E693 D2 AF              2158 	setb	_EA
   E695                    2159 00114$:
   E695 02 00 C5           2160 	ljmp	__sdcc_banked_ret
                           2161 ;------------------------------------------------------------
                           2162 ;Allocation info for local variables in function 'remote_error_check'
                           2163 ;------------------------------------------------------------
                           2164 ;ce                        Allocated to registers r7 
                           2165 ;error_code                Allocated to registers r2 
                           2166 ;remote_ctrl_16            Allocated to registers r3 r4 
                           2167 ;remote_status_16          Allocated to stack - offset 1
                           2168 ;remote_control_bits_hi    Allocated to registers r5 
                           2169 ;remote_control_bits_lo    Allocated to registers r6 
                           2170 ;------------------------------------------------------------
                           2171 ;	../../shared/src/train_if.c:81: uint8_t remote_error_check(void) BANKING_CTRL {
                           2172 ;	-----------------------------------------
                           2173 ;	 function remote_error_check
                           2174 ;	-----------------------------------------
   E698                    2175 _remote_error_check:
   E698 C0 18              2176 	push	_bp
   E69A 85 81 18           2177 	mov	_bp,sp
   E69D 05 81              2178 	inc	sp
   E69F 05 81              2179 	inc	sp
                           2180 ;	../../shared/src/train_if.c:86: error_code = _EXIT_SUCCESS;
   E6A1 7A 00              2181 	mov	r2,#0x00
                           2182 ;	../../shared/src/train_if.c:90: EA = 0;
   E6A3 C2 AF              2183 	clr	_EA
                           2184 ;	../../shared/src/train_if.c:91: remote_ctrl_16 = device_remote_control_bits;
   E6A5 90 26 72           2185 	mov	dptr,#(_TX_TRAIN_IF_REG6 + 0x0002)
   E6A8 E0                 2186 	movx	a,@dptr
   E6A9 FB                 2187 	mov	r3,a
   E6AA A3                 2188 	inc	dptr
   E6AB E0                 2189 	movx	a,@dptr
   E6AC FC                 2190 	mov	r4,a
                           2191 ;	../../shared/src/train_if.c:92: remote_status_16 = device_remote_status_bits;
   E6AD 90 26 70           2192 	mov	dptr,#_TX_TRAIN_IF_REG6
   E6B0 E0                 2193 	movx	a,@dptr
   E6B1 FD                 2194 	mov	r5,a
   E6B2 A3                 2195 	inc	dptr
   E6B3 E0                 2196 	movx	a,@dptr
   E6B4 FE                 2197 	mov	r6,a
   E6B5 A8 18              2198 	mov	r0,_bp
   E6B7 08                 2199 	inc	r0
   E6B8 A6 05              2200 	mov	@r0,ar5
   E6BA 08                 2201 	inc	r0
   E6BB A6 06              2202 	mov	@r0,ar6
                           2203 ;	../../shared/src/train_if.c:93: EA =1;
   E6BD D2 AF              2204 	setb	_EA
                           2205 ;	../../shared/src/train_if.c:95: if( remote_ctrl_16 != device_remote_control_bits || remote_status_16 != device_remote_status_bits) {
   E6BF 90 26 72           2206 	mov	dptr,#(_TX_TRAIN_IF_REG6 + 0x0002)
   E6C2 E0                 2207 	movx	a,@dptr
   E6C3 FF                 2208 	mov	r7,a
   E6C4 A3                 2209 	inc	dptr
   E6C5 E0                 2210 	movx	a,@dptr
   E6C6 FD                 2211 	mov	r5,a
   E6C7 EB                 2212 	mov	a,r3
   E6C8 B5 07 1A           2213 	cjne	a,ar7,00103$
   E6CB EC                 2214 	mov	a,r4
   E6CC B5 05 16           2215 	cjne	a,ar5,00103$
   E6CF 90 26 70           2216 	mov	dptr,#_TX_TRAIN_IF_REG6
   E6D2 E0                 2217 	movx	a,@dptr
   E6D3 FD                 2218 	mov	r5,a
   E6D4 A3                 2219 	inc	dptr
   E6D5 E0                 2220 	movx	a,@dptr
   E6D6 FE                 2221 	mov	r6,a
   E6D7 A8 18              2222 	mov	r0,_bp
   E6D9 08                 2223 	inc	r0
   E6DA E6                 2224 	mov	a,@r0
   E6DB B5 05 07           2225 	cjne	a,ar5,00157$
   E6DE 08                 2226 	inc	r0
   E6DF E6                 2227 	mov	a,@r0
   E6E0 B5 06 02           2228 	cjne	a,ar6,00157$
   E6E3 80 32              2229 	sjmp	00104$
   E6E5                    2230 00157$:
   E6E5                    2231 00103$:
                           2232 ;	../../shared/src/train_if.c:96: if(reg_REMOTE_STATUS_VALID_ISR_LANE) {
   E6E5 90 26 5D           2233 	mov	dptr,#(_TRX_TRAIN_IF_INTERRUPT_LANE + 0x0001)
   E6E8 E0                 2234 	movx	a,@dptr
   E6E9 30 E0 0B           2235 	jnb	acc.0,00102$
                           2236 ;	../../shared/src/train_if.c:97: reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 1;
                           2237 ;	../../shared/src/train_if.c:98: reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 0;
   E6EC 90 26 65           2238 	mov	dptr,#(_TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE + 0x0001)
   E6EF E0                 2239 	movx	a,@dptr
   E6F0 44 01              2240 	orl	a,#0x01
   E6F2 F0                 2241 	movx	@dptr,a
   E6F3 E0                 2242 	movx	a,@dptr
   E6F4 54 FE              2243 	anl	a,#0xfe
   E6F6 F0                 2244 	movx	@dptr,a
   E6F7                    2245 00102$:
                           2246 ;	../../shared/src/train_if.c:101: EA = 0;
   E6F7 C2 AF              2247 	clr	_EA
                           2248 ;	../../shared/src/train_if.c:102: remote_ctrl_16 = device_remote_control_bits;
   E6F9 90 26 72           2249 	mov	dptr,#(_TX_TRAIN_IF_REG6 + 0x0002)
   E6FC E0                 2250 	movx	a,@dptr
   E6FD FD                 2251 	mov	r5,a
   E6FE A3                 2252 	inc	dptr
   E6FF E0                 2253 	movx	a,@dptr
   E700 FE                 2254 	mov	r6,a
   E701 8D 03              2255 	mov	ar3,r5
   E703 8E 04              2256 	mov	ar4,r6
                           2257 ;	../../shared/src/train_if.c:103: remote_status_16 = device_remote_status_bits;
   E705 90 26 70           2258 	mov	dptr,#_TX_TRAIN_IF_REG6
   E708 E0                 2259 	movx	a,@dptr
   E709 FD                 2260 	mov	r5,a
   E70A A3                 2261 	inc	dptr
   E70B E0                 2262 	movx	a,@dptr
   E70C FE                 2263 	mov	r6,a
   E70D A8 18              2264 	mov	r0,_bp
   E70F 08                 2265 	inc	r0
   E710 A6 05              2266 	mov	@r0,ar5
   E712 08                 2267 	inc	r0
   E713 A6 06              2268 	mov	@r0,ar6
                           2269 ;	../../shared/src/train_if.c:104: EA = 1;
   E715 D2 AF              2270 	setb	_EA
   E717                    2271 00104$:
                           2272 ;	../../shared/src/train_if.c:107: remote_control_bits_hi = (uint8_t)(remote_ctrl_16>>8);
   E717 8C 05              2273 	mov	ar5,r4
                           2274 ;	../../shared/src/train_if.c:108: remote_control_bits_lo = (uint8_t)(remote_ctrl_16);
   E719 8B 06              2275 	mov	ar6,r3
                           2276 ;	../../shared/src/train_if.c:110: if( (remote_control_bits_hi&0xe0) == 0) { //pattern check
   E71B ED                 2277 	mov	a,r5
   E71C 54 E0              2278 	anl	a,#0xE0
   E71E 60 02              2279 	jz	00160$
   E720 80 0B              2280 	sjmp	00110$
   E722                    2281 00160$:
                           2282 ;	../../shared/src/train_if.c:111: ce = (uint8_t)((remote_control_bits_hi>>2) & 0x03);
   E722 ED                 2283 	mov	a,r5
   E723 03                 2284 	rr	a
   E724 03                 2285 	rr	a
   E725 54 3F              2286 	anl	a,#0x3f
   E727 FF                 2287 	mov	r7,a
   E728 53 07 03           2288 	anl	ar7,#0x03
   E72B 80 1C              2289 	sjmp	00111$
   E72D                    2290 00110$:
                           2291 ;	../../shared/src/train_if.c:113: else if( (remote_control_bits_hi&0xe0) == 0xe0) {
   E72D C0 06              2292 	push	ar6
   E72F 74 E0              2293 	mov	a,#0xE0
   E731 5D                 2294 	anl	a,r5
   E732 FE                 2295 	mov	r6,a
   E733 BE E0 02           2296 	cjne	r6,#0xE0,00161$
   E736 80 04              2297 	sjmp	00162$
   E738                    2298 00161$:
   E738 D0 06              2299 	pop	ar6
   E73A 80 08              2300 	sjmp	00107$
   E73C                    2301 00162$:
   E73C D0 06              2302 	pop	ar6
                           2303 ;	../../shared/src/train_if.c:115: return _EXIT_DO_NOTHING;
   E73E 75 82 02           2304 	mov	dpl,#0x02
   E741 02 E8 4D           2305 	ljmp	00137$
   E744                    2306 00107$:
                           2307 ;	../../shared/src/train_if.c:118: error_code = RESERVED_PATTERN_TYPE;
   E744 7A 02              2308 	mov	r2,#0x02
                           2309 ;	../../shared/src/train_if.c:119: goto error_out;
   E746 02 E7 D3           2310 	ljmp	00134$
   E749                    2311 00111$:
                           2312 ;	../../shared/src/train_if.c:123: if( (((remote_control_bits_hi&0xe0)==0)&&((remote_ctrl_16 & 0x13c0) ||  //0001 0011 1100 0000
   E749 ED                 2313 	mov	a,r5
   E74A 54 E0              2314 	anl	a,#0xE0
   E74C 60 02              2315 	jz	00164$
   E74E 80 1C              2316 	sjmp	00118$
   E750                    2317 00164$:
   E750 EB                 2318 	mov	a,r3
   E751 54 C0              2319 	anl	a,#0xC0
   E753 70 05              2320 	jnz	00165$
   E755 EC                 2321 	mov	a,r4
   E756 54 13              2322 	anl	a,#0x13
   E758 60 02              2323 	jz	00166$
   E75A                    2324 00165$:
   E75A 80 3B              2325 	sjmp	00112$
   E75C                    2326 00166$:
                           2327 ;	../../shared/src/train_if.c:124: (remote_status_16 & 0x1fc0))) || //0001 1111 1100 0000
   E75C A8 18              2328 	mov	r0,_bp
   E75E 08                 2329 	inc	r0
   E75F E6                 2330 	mov	a,@r0
   E760 54 C0              2331 	anl	a,#0xC0
   E762 70 06              2332 	jnz	00167$
   E764 08                 2333 	inc	r0
   E765 E6                 2334 	mov	a,@r0
   E766 54 1F              2335 	anl	a,#0x1F
   E768 60 02              2336 	jz	00168$
   E76A                    2337 00167$:
   E76A 80 2B              2338 	sjmp	00112$
   E76C                    2339 00168$:
   E76C                    2340 00118$:
                           2341 ;	../../shared/src/train_if.c:125: (((remote_control_bits_hi&0xe0)==0xe0)&&((remote_ctrl_16 & 0x13c0) ||  //0001 0011 1100 0000
   E76C C0 06              2342 	push	ar6
   E76E 74 E0              2343 	mov	a,#0xE0
   E770 5D                 2344 	anl	a,r5
   E771 FE                 2345 	mov	r6,a
   E772 BE E0 02           2346 	cjne	r6,#0xE0,00169$
   E775 80 04              2347 	sjmp	00170$
   E777                    2348 00169$:
   E777 D0 06              2349 	pop	ar6
   E779 80 20              2350 	sjmp	00113$
   E77B                    2351 00170$:
   E77B D0 06              2352 	pop	ar6
   E77D EB                 2353 	mov	a,r3
   E77E 54 C0              2354 	anl	a,#0xC0
   E780 70 05              2355 	jnz	00171$
   E782 EC                 2356 	mov	a,r4
   E783 54 13              2357 	anl	a,#0x13
   E785 60 02              2358 	jz	00172$
   E787                    2359 00171$:
   E787 80 0E              2360 	sjmp	00112$
   E789                    2361 00172$:
                           2362 ;	../../shared/src/train_if.c:126: (remote_status_16 & 0xdfc0))) //1101 1111 1100 0000
   E789 A8 18              2363 	mov	r0,_bp
   E78B 08                 2364 	inc	r0
   E78C E6                 2365 	mov	a,@r0
   E78D 54 C0              2366 	anl	a,#0xC0
   E78F 70 06              2367 	jnz	00173$
   E791 08                 2368 	inc	r0
   E792 E6                 2369 	mov	a,@r0
   E793 54 DF              2370 	anl	a,#0xDF
   E795 60 04              2371 	jz	00113$
   E797                    2372 00173$:
   E797                    2373 00112$:
                           2374 ;	../../shared/src/train_if.c:128: error_code = RESERVED_TTIU_BIT_SET_TO_ONE;
   E797 7A 03              2375 	mov	r2,#0x03
                           2376 ;	../../shared/src/train_if.c:129: goto error_out;
   E799 80 38              2377 	sjmp	00134$
   E79B                    2378 00113$:
                           2379 ;	../../shared/src/train_if.c:132: if(ce>0 && ((remote_control_bits_lo&0x3f) != 0)) {
   E79B EF                 2380 	mov	a,r7
   E79C 60 09              2381 	jz	00120$
   E79E EE                 2382 	mov	a,r6
   E79F 54 3F              2383 	anl	a,#0x3F
   E7A1 60 04              2384 	jz	00120$
                           2385 ;	../../shared/src/train_if.c:133: error_code = RESERVED_COMB_COE_REQ;
   E7A3 7A 1A              2386 	mov	r2,#0x1A
                           2387 ;	../../shared/src/train_if.c:134: goto error_out;
   E7A5 80 2C              2388 	sjmp	00134$
   E7A7                    2389 00120$:
                           2390 ;	../../shared/src/train_if.c:136: ce = remote_control_bits_lo & 0x3f;
   E7A7 74 3F              2391 	mov	a,#0x3F
   E7A9 5E                 2392 	anl	a,r6
   E7AA FF                 2393 	mov	r7,a
                           2394 ;	../../shared/src/train_if.c:137: if((ce&0x03)==0x03) error_code = RESERVED_COE_1_REQ;
   E7AB 74 03              2395 	mov	a,#0x03
   E7AD 5F                 2396 	anl	a,r7
   E7AE FB                 2397 	mov	r3,a
   E7AF BB 03 02           2398 	cjne	r3,#0x03,00123$
   E7B2 7A 11              2399 	mov	r2,#0x11
   E7B4                    2400 00123$:
                           2401 ;	../../shared/src/train_if.c:138: if((ce&0x0c)==0x0c) {
   E7B4 74 0C              2402 	mov	a,#0x0C
   E7B6 5F                 2403 	anl	a,r7
   E7B7 FB                 2404 	mov	r3,a
   E7B8 BB 0C 09           2405 	cjne	r3,#0x0C,00128$
                           2406 ;	../../shared/src/train_if.c:139: if(error_code==0) error_code = RESERVED_COE_2_REQ;
   E7BB EA                 2407 	mov	a,r2
   E7BC 70 04              2408 	jnz	00125$
   E7BE 7A 13              2409 	mov	r2,#0x13
   E7C0 80 02              2410 	sjmp	00128$
   E7C2                    2411 00125$:
                           2412 ;	../../shared/src/train_if.c:140: else error_code = MULTI_RESERVED_COE_REQ;
   E7C2 7A 10              2413 	mov	r2,#0x10
   E7C4                    2414 00128$:
                           2415 ;	../../shared/src/train_if.c:142: if((ce&0x30)==0x30) {
   E7C4 53 07 30           2416 	anl	ar7,#0x30
   E7C7 BF 30 09           2417 	cjne	r7,#0x30,00134$
                           2418 ;	../../shared/src/train_if.c:143: if(error_code==0) error_code = RESERVED_COE_3_REQ;
   E7CA EA                 2419 	mov	a,r2
   E7CB 70 04              2420 	jnz	00130$
   E7CD 7A 15              2421 	mov	r2,#0x15
   E7CF 80 02              2422 	sjmp	00134$
   E7D1                    2423 00130$:
                           2424 ;	../../shared/src/train_if.c:144: else error_code = MULTI_RESERVED_COE_REQ;
   E7D1 7A 10              2425 	mov	r2,#0x10
                           2426 ;	../../shared/src/train_if.c:147: error_out:
   E7D3                    2427 00134$:
                           2428 ;	../../shared/src/train_if.c:148: if(error_code>0) {
   E7D3 EA                 2429 	mov	a,r2
   E7D4 70 03              2430 	jnz	00184$
   E7D6 02 E8 4B           2431 	ljmp	00136$
   E7D9                    2432 00184$:
                           2433 ;	../../shared/src/train_if.c:149: EA = 0;
   E7D9 C2 AF              2434 	clr	_EA
                           2435 ;	../../shared/src/train_if.c:150: reg_LOCAL_CTRL_FIELD_LANE_15_0_b1 = (remote_control_bits_hi & 0x0c)|0xe0 ; //(rm_ctrl.v&0x1fff)|0xe000;
   E7DB 74 0C              2436 	mov	a,#0x0C
   E7DD 5D                 2437 	anl	a,r5
   E7DE 44 E0              2438 	orl	a,#0xE0
   E7E0 FB                 2439 	mov	r3,a
   E7E1 90 26 07           2440 	mov	dptr,#(_DME_ENC_REG1 + 0x0003)
   E7E4 EB                 2441 	mov	a,r3
   E7E5 F0                 2442 	movx	@dptr,a
                           2443 ;	../../shared/src/train_if.c:151: reg_LOCAL_CTRL_FIELD_LANE_15_0_b0 = remote_control_bits_lo&0x3f;
   E7E6 53 06 3F           2444 	anl	ar6,#0x3F
   E7E9 90 26 06           2445 	mov	dptr,#(_DME_ENC_REG1 + 0x0002)
   E7EC EE                 2446 	mov	a,r6
   E7ED F0                 2447 	movx	@dptr,a
                           2448 ;	../../shared/src/train_if.c:152: reg_LOCAL_STATUS_FIELD_LANE_15_0 = (uint16_t)error_code;
   E7EE 8A 03              2449 	mov	ar3,r2
   E7F0 7C 00              2450 	mov	r4,#0x00
   E7F2 90 26 04           2451 	mov	dptr,#_DME_ENC_REG1
   E7F5 EB                 2452 	mov	a,r3
   E7F6 F0                 2453 	movx	@dptr,a
   E7F7 A3                 2454 	inc	dptr
   E7F8 EC                 2455 	mov	a,r4
   E7F9 F0                 2456 	movx	@dptr,a
                           2457 ;	../../shared/src/train_if.c:153: reg_LOCAL_ERROR_FIELD_VALID_LANE = 1; reg_LOCAL_ERROR_FIELD_VALID_LANE = 0;
   E7FA 90 26 00           2458 	mov	dptr,#_DME_ENC_REG0
   E7FD E0                 2459 	movx	a,@dptr
   E7FE 44 20              2460 	orl	a,#0x20
   E800 F0                 2461 	movx	@dptr,a
   E801 E0                 2462 	movx	a,@dptr
   E802 54 DF              2463 	anl	a,#0xdf
   E804 F0                 2464 	movx	@dptr,a
                           2465 ;	../../shared/src/train_if.c:154: lnx_ERROR_TTIU_DETECTED_LANE = 1;
   E805 90 60 0A           2466 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0002)
   E808 E0                 2467 	movx	a,@dptr
   E809 44 01              2468 	orl	a,#0x01
   E80B F0                 2469 	movx	@dptr,a
                           2470 ;	../../shared/src/train_if.c:156: delay01(10);  //wait for 1.4usec
   E80C 90 00 0A           2471 	mov	dptr,#0x000A
   E80F C0 02              2472 	push	ar2
   E811 78 16              2473 	mov	r0,#_delay01
   E813 79 BC              2474 	mov	r1,#(_delay01 >> 8)
   E815 7A 02              2475 	mov	r2,#(_delay01 >> 16)
   E817 12 00 B3           2476 	lcall	__sdcc_banked_call
   E81A D0 02              2477 	pop	ar2
                           2478 ;	../../shared/src/train_if.c:158: reg_LOCAL_CTRL_FIELD_LANE_15_0 = pre_local_ctrl;
   E81C 90 67 9C           2479 	mov	dptr,#_pre_local_ctrl
   E81F E0                 2480 	movx	a,@dptr
   E820 FB                 2481 	mov	r3,a
   E821 A3                 2482 	inc	dptr
   E822 E0                 2483 	movx	a,@dptr
   E823 FC                 2484 	mov	r4,a
   E824 90 26 06           2485 	mov	dptr,#(_DME_ENC_REG1 + 0x0002)
   E827 EB                 2486 	mov	a,r3
   E828 F0                 2487 	movx	@dptr,a
   E829 A3                 2488 	inc	dptr
   E82A EC                 2489 	mov	a,r4
   E82B F0                 2490 	movx	@dptr,a
                           2491 ;	../../shared/src/train_if.c:159: reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0;
   E82C 90 26 04           2492 	mov	dptr,#_DME_ENC_REG1
   E82F E4                 2493 	clr	a
   E830 F0                 2494 	movx	@dptr,a
   E831 A3                 2495 	inc	dptr
   E832 F0                 2496 	movx	@dptr,a
                           2497 ;	../../shared/src/train_if.c:160: reg_LOCAL_CTRL_FIELD_VALID_LANE = 1; reg_LOCAL_CTRL_FIELD_VALID_LANE = 0;
                           2498 ;	../../shared/src/train_if.c:161: reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
   E833 90 26 7A           2499 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   E836 E0                 2500 	movx	a,@dptr
   E837 44 40              2501 	orl	a,#0x40
   E839 F0                 2502 	movx	@dptr,a
   E83A E0                 2503 	movx	a,@dptr
   E83B 54 BF              2504 	anl	a,#0xbf
   E83D F0                 2505 	movx	@dptr,a
   E83E E0                 2506 	movx	a,@dptr
   E83F 44 20              2507 	orl	a,#0x20
   E841 F0                 2508 	movx	@dptr,a
   E842 90 26 7A           2509 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   E845 E0                 2510 	movx	a,@dptr
   E846 54 DF              2511 	anl	a,#0xdf
   E848 F0                 2512 	movx	@dptr,a
                           2513 ;	../../shared/src/train_if.c:162: EA = 1;
   E849 D2 AF              2514 	setb	_EA
   E84B                    2515 00136$:
                           2516 ;	../../shared/src/train_if.c:165: return error_code;
   E84B 8A 82              2517 	mov	dpl,r2
   E84D                    2518 00137$:
   E84D 85 18 81           2519 	mov	sp,_bp
   E850 D0 18              2520 	pop	_bp
   E852 02 00 C5           2521 	ljmp	__sdcc_banked_ret
                           2522 ;------------------------------------------------------------
                           2523 ;Allocation info for local variables in function 'request_local_ctrl'
                           2524 ;------------------------------------------------------------
                           2525 ;dat                       Allocated to registers r2 r3 
                           2526 ;stat                      Allocated to registers r4 
                           2527 ;------------------------------------------------------------
                           2528 ;	../../shared/src/train_if.c:169: bool request_local_ctrl(uint16_t dat) BANKING_CTRL
                           2529 ;	-----------------------------------------
                           2530 ;	 function request_local_ctrl
                           2531 ;	-----------------------------------------
   E855                    2532 _request_local_ctrl:
   E855 AA 82              2533 	mov	r2,dpl
   E857 AB 83              2534 	mov	r3,dph
                           2535 ;	../../shared/src/train_if.c:172: stat = _EXIT_SUCCESS;
   E859 7C 00              2536 	mov	r4,#0x00
                           2537 ;	../../shared/src/train_if.c:182: if(phy_mode <= SAS && reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE==0) {
   E85B 90 A3 16           2538 	mov	dptr,#(_SYSTEM + 0x0002)
   E85E E0                 2539 	movx	a,@dptr
   E85F 54 07              2540 	anl	a,#0x07
   E861 FD                 2541 	mov	r5,a
   E862 C3                 2542 	clr	c
   E863 74 81              2543 	mov	a,#(0x01 ^ 0x80)
   E865 8D F0              2544 	mov	b,r5
   E867 63 F0 80           2545 	xrl	b,#0x80
   E86A 95 F0              2546 	subb	a,b
   E86C 40 4C              2547 	jc	00113$
   E86E 90 26 78           2548 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   E871 E0                 2549 	movx	a,@dptr
   E872 20 E0 45           2550 	jb	acc.0,00113$
                           2551 ;	../../shared/src/train_if.c:183: if(remote_error_check()==_EXIT_SUCCESS) {
   E875 C0 02              2552 	push	ar2
   E877 C0 03              2553 	push	ar3
   E879 C0 04              2554 	push	ar4
   E87B 78 98              2555 	mov	r0,#_remote_error_check
   E87D 79 E6              2556 	mov	r1,#(_remote_error_check >> 8)
   E87F 7A 01              2557 	mov	r2,#(_remote_error_check >> 16)
   E881 12 00 B3           2558 	lcall	__sdcc_banked_call
   E884 E5 82              2559 	mov	a,dpl
   E886 D0 04              2560 	pop	ar4
   E888 D0 03              2561 	pop	ar3
   E88A D0 02              2562 	pop	ar2
   E88C 70 28              2563 	jnz	00102$
                           2564 ;	../../shared/src/train_if.c:184: EA = 0;
   E88E C2 AF              2565 	clr	_EA
                           2566 ;	../../shared/src/train_if.c:185: reg_LOCAL_CTRL_FIELD_LANE_15_0 = dat;
   E890 90 26 06           2567 	mov	dptr,#(_DME_ENC_REG1 + 0x0002)
   E893 EA                 2568 	mov	a,r2
   E894 F0                 2569 	movx	@dptr,a
   E895 A3                 2570 	inc	dptr
   E896 EB                 2571 	mov	a,r3
   E897 F0                 2572 	movx	@dptr,a
                           2573 ;	../../shared/src/train_if.c:186: reg_LOCAL_CTRL_FIELD_VALID_LANE = 1; 
                           2574 ;	../../shared/src/train_if.c:187: reg_LOCAL_CTRL_FIELD_VALID_LANE = 0;
   E898 90 26 7A           2575 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   E89B E0                 2576 	movx	a,@dptr
   E89C 44 40              2577 	orl	a,#0x40
   E89E F0                 2578 	movx	@dptr,a
   E89F E0                 2579 	movx	a,@dptr
   E8A0 54 BF              2580 	anl	a,#0xbf
   E8A2 F0                 2581 	movx	@dptr,a
                           2582 ;	../../shared/src/train_if.c:188: pre_local_ctrl = dat;
   E8A3 90 67 9C           2583 	mov	dptr,#_pre_local_ctrl
   E8A6 EA                 2584 	mov	a,r2
   E8A7 F0                 2585 	movx	@dptr,a
   E8A8 A3                 2586 	inc	dptr
   E8A9 EB                 2587 	mov	a,r3
   E8AA F0                 2588 	movx	@dptr,a
                           2589 ;	../../shared/src/train_if.c:189: EA = 1;
   E8AB D2 AF              2590 	setb	_EA
                           2591 ;	../../shared/src/train_if.c:190: lnx_ERROR_TTIU_DETECTED_LANE = 0;
   E8AD 90 60 0A           2592 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0002)
   E8B0 E0                 2593 	movx	a,@dptr
   E8B1 54 FE              2594 	anl	a,#0xfe
   E8B3 F0                 2595 	movx	@dptr,a
   E8B4 80 33              2596 	sjmp	00114$
   E8B6                    2597 00102$:
                           2598 ;	../../shared/src/train_if.c:193: stat = _EXIT_FAIL;
   E8B6 7C 01              2599 	mov	r4,#0x01
   E8B8 80 2F              2600 	sjmp	00114$
   E8BA                    2601 00113$:
                           2602 ;	../../shared/src/train_if.c:199: if(link_train_mode || tx_pipe4_en) {
   E8BA 90 26 7B           2603 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   E8BD E0                 2604 	movx	a,@dptr
   E8BE 20 E7 03           2605 	jb	acc.7,00106$
   E8C1 30 26 0E           2606 	jnb	_tx_pipe4_en,00110$
                           2607 ;	../../shared/src/train_if.c:200: while(reg_PIN_LOCAL_CTRL_FIELD_READY_RD_LANE==0){
   E8C4                    2608 00106$:
   E8C4 90 26 21           2609 	mov	dptr,#(_TX_TRAIN_IF_REG3 + 0x0001)
   E8C7 E0                 2610 	movx	a,@dptr
   E8C8 20 E2 07           2611 	jb	acc.2,00110$
                           2612 ;	../../shared/src/train_if.c:201: if(reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE==0) break;
   E8CB 90 26 79           2613 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   E8CE E0                 2614 	movx	a,@dptr
   E8CF 20 E6 F2           2615 	jb	acc.6,00106$
   E8D2                    2616 00110$:
                           2617 ;	../../shared/src/train_if.c:205: reg_LOCAL_CTRL_FIELD_LANE_15_0 = dat;
   E8D2 90 26 06           2618 	mov	dptr,#(_DME_ENC_REG1 + 0x0002)
   E8D5 EA                 2619 	mov	a,r2
   E8D6 F0                 2620 	movx	@dptr,a
   E8D7 A3                 2621 	inc	dptr
   E8D8 EB                 2622 	mov	a,r3
   E8D9 F0                 2623 	movx	@dptr,a
                           2624 ;	../../shared/src/train_if.c:206: reg_LOCAL_CTRL_FIELD_VALID_LANE = 0;
                           2625 ;	../../shared/src/train_if.c:207: reg_LOCAL_CTRL_FIELD_VALID_LANE = 1; 
                           2626 ;	../../shared/src/train_if.c:208: reg_LOCAL_CTRL_FIELD_VALID_LANE = 0;
   E8DA 90 26 7A           2627 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   E8DD E0                 2628 	movx	a,@dptr
   E8DE 54 BF              2629 	anl	a,#0xbf
   E8E0 F0                 2630 	movx	@dptr,a
   E8E1 E0                 2631 	movx	a,@dptr
   E8E2 44 40              2632 	orl	a,#0x40
   E8E4 F0                 2633 	movx	@dptr,a
   E8E5 E0                 2634 	movx	a,@dptr
   E8E6 54 BF              2635 	anl	a,#0xbf
   E8E8 F0                 2636 	movx	@dptr,a
   E8E9                    2637 00114$:
                           2638 ;	../../shared/src/train_if.c:211: short_delay();
   E8E9 C0 04              2639 	push	ar4
   E8EB 78 05              2640 	mov	r0,#_short_delay
   E8ED 79 C0              2641 	mov	r1,#(_short_delay >> 8)
   E8EF 7A 02              2642 	mov	r2,#(_short_delay >> 16)
   E8F1 12 00 B3           2643 	lcall	__sdcc_banked_call
   E8F4 D0 04              2644 	pop	ar4
                           2645 ;	../../shared/src/train_if.c:220: return stat;
   E8F6 8C 82              2646 	mov	dpl,r4
   E8F8 02 00 C5           2647 	ljmp	__sdcc_banked_ret
                           2648 ;------------------------------------------------------------
                           2649 ;Allocation info for local variables in function 'get_tx_status'
                           2650 ;------------------------------------------------------------
                           2651 ;check                     Allocated to registers r2 
                           2652 ;dat                       Allocated to registers 
                           2653 ;err_status                Allocated to registers r3 
                           2654 ;------------------------------------------------------------
                           2655 ;	../../shared/src/train_if.c:223: bool get_tx_status(uint8_t check) BANKING_CTRL
                           2656 ;	-----------------------------------------
                           2657 ;	 function get_tx_status
                           2658 ;	-----------------------------------------
   E8FB                    2659 _get_tx_status:
   E8FB AA 82              2660 	mov	r2,dpl
                           2661 ;	../../shared/src/train_if.c:226: uint8_t err_status = 0;
   E8FD 7B 00              2662 	mov	r3,#0x00
                           2663 ;	../../shared/src/train_if.c:228: dat = reg_LOCAL_CTRL_FIELD_LANE_15_0;
   E8FF 90 26 06           2664 	mov	dptr,#(_DME_ENC_REG1 + 0x0002)
   E902 E0                 2665 	movx	a,@dptr
   E903 A3                 2666 	inc	dptr
   E904 E0                 2667 	movx	a,@dptr
                           2668 ;	../../shared/src/train_if.c:231: timeout_start(2000); //2mS
   E905 75 8B 30           2669 	mov	_TMR1,#0x30
   E908 75 8D F8           2670 	mov	(_TMR1 >> 8),#0xF8
   E90B D2 8E              2671 	setb	_TR1
   E90D C2 03              2672 	clr	_timeout
                           2673 ;	../../shared/src/train_if.c:232: do {
   E90F                    2674 00124$:
                           2675 ;	../../shared/src/train_if.c:234: if(reg_REMOTE_STATUS_VALID_ISR_LANE==0) continue;
   E90F 90 26 5D           2676 	mov	dptr,#(_TRX_TRAIN_IF_INTERRUPT_LANE + 0x0001)
   E912 E0                 2677 	movx	a,@dptr
   E913 30 E0 F9           2678 	jnb	acc.0,00124$
                           2679 ;	../../shared/src/train_if.c:235: reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 1;
                           2680 ;	../../shared/src/train_if.c:236: reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 0;
   E916 90 26 65           2681 	mov	dptr,#(_TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE + 0x0001)
   E919 E0                 2682 	movx	a,@dptr
   E91A 44 01              2683 	orl	a,#0x01
   E91C F0                 2684 	movx	@dptr,a
   E91D E0                 2685 	movx	a,@dptr
   E91E 54 FE              2686 	anl	a,#0xfe
   E920 F0                 2687 	movx	@dptr,a
                           2688 ;	../../shared/src/train_if.c:239: if(phy_mode <= SAS && do_rx_apta==0) {
   E921 90 A3 16           2689 	mov	dptr,#(_SYSTEM + 0x0002)
   E924 E0                 2690 	movx	a,@dptr
   E925 54 07              2691 	anl	a,#0x07
   E927 FC                 2692 	mov	r4,a
   E928 C3                 2693 	clr	c
   E929 74 81              2694 	mov	a,#(0x01 ^ 0x80)
   E92B 8C F0              2695 	mov	b,r4
   E92D 63 F0 80           2696 	xrl	b,#0x80
   E930 95 F0              2697 	subb	a,b
   E932 40 17              2698 	jc	00106$
   E934 20 09 14           2699 	jb	_do_rx_apta,00106$
                           2700 ;	../../shared/src/train_if.c:240: err_status = remote_error_check();
   E937 C0 02              2701 	push	ar2
   E939 78 98              2702 	mov	r0,#_remote_error_check
   E93B 79 E6              2703 	mov	r1,#(_remote_error_check >> 8)
   E93D 7A 01              2704 	mov	r2,#(_remote_error_check >> 16)
   E93F 12 00 B3           2705 	lcall	__sdcc_banked_call
   E942 AC 82              2706 	mov	r4,dpl
   E944 D0 02              2707 	pop	ar2
   E946 8C 03              2708 	mov	ar3,r4
                           2709 ;	../../shared/src/train_if.c:241: if(err_status) continue;//wait until correct TTIU come
   E948 EB                 2710 	mov	a,r3
   E949 70 C4              2711 	jnz	00124$
   E94B                    2712 00106$:
                           2713 ;	../../shared/src/train_if.c:245: if(check==0) {
   E94B EA                 2714 	mov	a,r2
   E94C 70 0D              2715 	jnz	00113$
                           2716 ;	../../shared/src/train_if.c:246: if( (device_remote_status_bits_lo&0x3f)==0 ) break;
   E94E 90 26 70           2717 	mov	dptr,#_TX_TRAIN_IF_REG6
   E951 E0                 2718 	movx	a,@dptr
   E952 FC                 2719 	mov	r4,a
   E953 54 3F              2720 	anl	a,#0x3F
   E955 60 02              2721 	jz	00144$
   E957 80 0D              2722 	sjmp	00114$
   E959                    2723 00144$:
   E959 80 5D              2724 	sjmp	00126$
   E95B                    2725 00113$:
                           2726 ;	../../shared/src/train_if.c:249: if( (device_remote_status_bits_lo&0x3f)!=0 ) break;
   E95B 90 26 70           2727 	mov	dptr,#_TX_TRAIN_IF_REG6
   E95E E0                 2728 	movx	a,@dptr
   E95F FC                 2729 	mov	r4,a
   E960 54 3F              2730 	anl	a,#0x3F
   E962 60 02              2731 	jz	00146$
   E964 80 52              2732 	sjmp	00126$
   E966                    2733 00146$:
   E966                    2734 00114$:
                           2735 ;	../../shared/src/train_if.c:252: if( lnx_TX_TRAIN_STATUS_DET_TIMER_ENABLE_LANE==1) {
   E966 90 60 33           2736 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   E969 E0                 2737 	movx	a,@dptr
   E96A 23                 2738 	rl	a
   E96B 54 01              2739 	anl	a,#0x01
   E96D FC                 2740 	mov	r4,a
   E96E BC 01 12           2741 	cjne	r4,#0x01,00119$
                           2742 ;	../../shared/src/train_if.c:253: if( timeout || TMR1==0) { 
   E971 20 03 06           2743 	jb	_timeout,00115$
   E974 E5 8B              2744 	mov	a,_TMR1
   E976 45 8D              2745 	orl	a,(_TMR1 >> 8)
   E978 70 09              2746 	jnz	00119$
   E97A                    2747 00115$:
                           2748 ;	../../shared/src/train_if.c:254: lnx_TX_TRAIN_STATUS_DET_TIMEOUT_INT_LANE=1; 
   E97A 90 60 33           2749 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   E97D E0                 2750 	movx	a,@dptr
   E97E 44 04              2751 	orl	a,#0x04
   E980 F0                 2752 	movx	@dptr,a
                           2753 ;	../../shared/src/train_if.c:258: break;} 
   E981 80 35              2754 	sjmp	00126$
   E983                    2755 00119$:
                           2756 ;	../../shared/src/train_if.c:261: if(TRAIN_SIM_EN==0) { // && !tx_status_pcie_mode) {
   E983 90 E6 07           2757 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   E986 E0                 2758 	movx	a,@dptr
   E987 30 E2 03           2759 	jnb	acc.2,00151$
   E98A 02 E9 0F           2760 	ljmp	00124$
   E98D                    2761 00151$:
                           2762 ;	../../shared/src/train_if.c:262: cds_tb = cds_table[CDS_DATAADAPT];  //dfe_acc 
   E98D 90 00 EC           2763 	mov	dptr,#(_cds_table + 0x000e)
   E990 E4                 2764 	clr	a
   E991 93                 2765 	movc	a,@a+dptr
   E992 FC                 2766 	mov	r4,a
   E993 A3                 2767 	inc	dptr
   E994 E4                 2768 	clr	a
   E995 93                 2769 	movc	a,@a+dptr
   E996 FD                 2770 	mov	r5,a
   E997 90 61 74           2771 	mov	dptr,#_CDS_READ_MISC1
   E99A EC                 2772 	mov	a,r4
   E99B F0                 2773 	movx	@dptr,a
   E99C A3                 2774 	inc	dptr
   E99D ED                 2775 	mov	a,r5
   E99E F0                 2776 	movx	@dptr,a
                           2777 ;	../../shared/src/train_if.c:263: cdr_dfe_scheme();
   E99F C0 02              2778 	push	ar2
   E9A1 78 68              2779 	mov	r0,#_cdr_dfe_scheme
   E9A3 79 95              2780 	mov	r1,#(_cdr_dfe_scheme >> 8)
   E9A5 7A 01              2781 	mov	r2,#(_cdr_dfe_scheme >> 16)
   E9A7 12 00 B3           2782 	lcall	__sdcc_banked_call
   E9AA D0 02              2783 	pop	ar2
                           2784 ;	../../shared/src/train_if.c:264: err_status = lnx_CDS_ERR_CODE_LANE_7_0;
   E9AC 90 60 A3           2785 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0003)
   E9AF E0                 2786 	movx	a,@dptr
   E9B0 FC                 2787 	mov	r4,a
   E9B1 FB                 2788 	mov	r3,a
                           2789 ;	../../shared/src/train_if.c:265: if(err_status) break;
   E9B2 EB                 2790 	mov	a,r3
   E9B3 70 03              2791 	jnz	00152$
   E9B5 02 E9 0F           2792 	ljmp	00124$
   E9B8                    2793 00152$:
                           2794 ;	../../shared/src/train_if.c:269: } while(1);
   E9B8                    2795 00126$:
                           2796 ;	../../shared/src/train_if.c:271: timeout_stop;
   E9B8 C2 8E              2797 	clr	_TR1
   E9BA C2 8F              2798 	clr	_TF1
                           2799 ;	../../shared/src/train_if.c:274: reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 1;
                           2800 ;	../../shared/src/train_if.c:275: reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 0;
   E9BC 90 26 65           2801 	mov	dptr,#(_TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE + 0x0001)
   E9BF E0                 2802 	movx	a,@dptr
   E9C0 44 01              2803 	orl	a,#0x01
   E9C2 F0                 2804 	movx	@dptr,a
   E9C3 E0                 2805 	movx	a,@dptr
   E9C4 54 FE              2806 	anl	a,#0xfe
   E9C6 F0                 2807 	movx	@dptr,a
                           2808 ;	../../shared/src/train_if.c:282: return err_status;
   E9C7 8B 82              2809 	mov	dpl,r3
   E9C9 02 00 C5           2810 	ljmp	__sdcc_banked_ret
                           2811 ;------------------------------------------------------------
                           2812 ;Allocation info for local variables in function 'Send_ctrl_to_tx'
                           2813 ;------------------------------------------------------------
                           2814 ;dat                       Allocated to registers r2 r3 
                           2815 ;------------------------------------------------------------
                           2816 ;	../../shared/src/train_if.c:285: void Send_ctrl_to_tx(uint16_t dat) BANKING_CTRL
                           2817 ;	-----------------------------------------
                           2818 ;	 function Send_ctrl_to_tx
                           2819 ;	-----------------------------------------
   E9CC                    2820 _Send_ctrl_to_tx:
   E9CC AA 82              2821 	mov	r2,dpl
   E9CE AB 83              2822 	mov	r3,dph
                           2823 ;	../../shared/src/train_if.c:291: tx_ctrl_stat = _EXIT_SUCCESS;
   E9D0 90 67 68           2824 	mov	dptr,#_tx_ctrl_stat
   E9D3 E4                 2825 	clr	a
   E9D4 F0                 2826 	movx	@dptr,a
   E9D5 A3                 2827 	inc	dptr
   E9D6 F0                 2828 	movx	@dptr,a
                           2829 ;	../../shared/src/train_if.c:293: reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 1;
                           2830 ;	../../shared/src/train_if.c:294: reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 0;
   E9D7 90 26 65           2831 	mov	dptr,#(_TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE + 0x0001)
   E9DA E0                 2832 	movx	a,@dptr
   E9DB 44 01              2833 	orl	a,#0x01
   E9DD F0                 2834 	movx	@dptr,a
   E9DE E0                 2835 	movx	a,@dptr
   E9DF 54 FE              2836 	anl	a,#0xfe
   E9E1 F0                 2837 	movx	@dptr,a
                           2838 ;	../../shared/src/train_if.c:297: if(do_rx_apta==1 && apta_rm_state_err==1) { 
   E9E2 30 09 3D           2839 	jnb	_do_rx_apta,00104$
   E9E5 90 67 A3           2840 	mov	dptr,#_apta_rm_state_err
   E9E8 E0                 2841 	movx	a,@dptr
   E9E9 FC                 2842 	mov	r4,a
   E9EA BC 01 35           2843 	cjne	r4,#0x01,00104$
                           2844 ;	../../shared/src/train_if.c:298: request_local_ctrl(0x0400);
   E9ED 90 04 00           2845 	mov	dptr,#0x0400
   E9F0 C0 02              2846 	push	ar2
   E9F2 C0 03              2847 	push	ar3
   E9F4 78 55              2848 	mov	r0,#_request_local_ctrl
   E9F6 79 E8              2849 	mov	r1,#(_request_local_ctrl >> 8)
   E9F8 7A 01              2850 	mov	r2,#(_request_local_ctrl >> 16)
   E9FA 12 00 B3           2851 	lcall	__sdcc_banked_call
                           2852 ;	../../shared/src/train_if.c:301: if(get_tx_status(0)) {
   E9FD 75 82 00           2853 	mov	dpl,#0x00
   EA00 78 FB              2854 	mov	r0,#_get_tx_status
   EA02 79 E8              2855 	mov	r1,#(_get_tx_status >> 8)
   EA04 7A 01              2856 	mov	r2,#(_get_tx_status >> 16)
   EA06 12 00 B3           2857 	lcall	__sdcc_banked_call
   EA09 E5 82              2858 	mov	a,dpl
   EA0B D0 03              2859 	pop	ar3
   EA0D D0 02              2860 	pop	ar2
   EA0F 60 0C              2861 	jz	00102$
                           2862 ;	../../shared/src/train_if.c:302: tx_ctrl_stat = _EXIT_FAIL;
   EA11 90 67 68           2863 	mov	dptr,#_tx_ctrl_stat
   EA14 74 01              2864 	mov	a,#0x01
   EA16 F0                 2865 	movx	@dptr,a
   EA17 A3                 2866 	inc	dptr
   EA18 E4                 2867 	clr	a
   EA19 F0                 2868 	movx	@dptr,a
                           2869 ;	../../shared/src/train_if.c:303: return;
   EA1A 02 EB 86           2870 	ljmp	00125$
   EA1D                    2871 00102$:
                           2872 ;	../../shared/src/train_if.c:306: apta_rm_state_err = 0;
   EA1D 90 67 A3           2873 	mov	dptr,#_apta_rm_state_err
   EA20 E4                 2874 	clr	a
   EA21 F0                 2875 	movx	@dptr,a
   EA22                    2876 00104$:
                           2877 ;	../../shared/src/train_if.c:320: if(request_local_ctrl(dat)!= _EXIT_SUCCESS) {
   EA22 8A 82              2878 	mov	dpl,r2
   EA24 8B 83              2879 	mov	dph,r3
   EA26 78 55              2880 	mov	r0,#_request_local_ctrl
   EA28 79 E8              2881 	mov	r1,#(_request_local_ctrl >> 8)
   EA2A 7A 01              2882 	mov	r2,#(_request_local_ctrl >> 16)
   EA2C 12 00 B3           2883 	lcall	__sdcc_banked_call
   EA2F E5 82              2884 	mov	a,dpl
   EA31 60 0C              2885 	jz	00107$
                           2886 ;	../../shared/src/train_if.c:321: tx_ctrl_stat = _EXIT_FAIL;
   EA33 90 67 68           2887 	mov	dptr,#_tx_ctrl_stat
   EA36 74 01              2888 	mov	a,#0x01
   EA38 F0                 2889 	movx	@dptr,a
   EA39 A3                 2890 	inc	dptr
   EA3A E4                 2891 	clr	a
   EA3B F0                 2892 	movx	@dptr,a
                           2893 ;	../../shared/src/train_if.c:322: return;
   EA3C 02 EB 86           2894 	ljmp	00125$
   EA3F                    2895 00107$:
                           2896 ;	../../shared/src/train_if.c:327: if(get_tx_status(1)) {
   EA3F 75 82 01           2897 	mov	dpl,#0x01
   EA42 78 FB              2898 	mov	r0,#_get_tx_status
   EA44 79 E8              2899 	mov	r1,#(_get_tx_status >> 8)
   EA46 7A 01              2900 	mov	r2,#(_get_tx_status >> 16)
   EA48 12 00 B3           2901 	lcall	__sdcc_banked_call
   EA4B E5 82              2902 	mov	a,dpl
   EA4D 60 0C              2903 	jz	00109$
                           2904 ;	../../shared/src/train_if.c:328: tx_ctrl_stat = _EXIT_FAIL;
   EA4F 90 67 68           2905 	mov	dptr,#_tx_ctrl_stat
   EA52 74 01              2906 	mov	a,#0x01
   EA54 F0                 2907 	movx	@dptr,a
   EA55 A3                 2908 	inc	dptr
   EA56 E4                 2909 	clr	a
   EA57 F0                 2910 	movx	@dptr,a
                           2911 ;	../../shared/src/train_if.c:329: return;
   EA58 02 EB 86           2912 	ljmp	00125$
   EA5B                    2913 00109$:
                           2914 ;	../../shared/src/train_if.c:332: if( (reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b0&0x3f)!=0 ) { // get !0?
   EA5B 90 26 70           2915 	mov	dptr,#_TX_TRAIN_IF_REG6
   EA5E E0                 2916 	movx	a,@dptr
   EA5F FA                 2917 	mov	r2,a
   EA60 54 3F              2918 	anl	a,#0x3F
   EA62 70 03              2919 	jnz	00161$
   EA64 02 EB 3C           2920 	ljmp	00116$
   EA67                    2921 00161$:
                           2922 ;	../../shared/src/train_if.c:335: if((reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b0&0x3f)==0x3f && do_rx_apta==1) {
   EA67 90 26 70           2923 	mov	dptr,#_TX_TRAIN_IF_REG6
   EA6A E0                 2924 	movx	a,@dptr
   EA6B FA                 2925 	mov	r2,a
   EA6C 53 02 3F           2926 	anl	ar2,#0x3F
   EA6F BA 3F 0C           2927 	cjne	r2,#0x3F,00111$
   EA72 30 09 09           2928 	jnb	_do_rx_apta,00111$
                           2929 ;	../../shared/src/train_if.c:336: apta_rm_state_err = 1;
   EA75 90 67 A3           2930 	mov	dptr,#_apta_rm_state_err
   EA78 74 01              2931 	mov	a,#0x01
   EA7A F0                 2932 	movx	@dptr,a
                           2933 ;	../../shared/src/train_if.c:337: return;
   EA7B 02 EB 86           2934 	ljmp	00125$
   EA7E                    2935 00111$:
                           2936 ;	../../shared/src/train_if.c:342: tx.g0_is_max  = reg_REMOTE_STATUS_G0_LANE_1_0 == 3;
   EA7E 90 26 6C           2937 	mov	dptr,#_TX_TRAIN_IF_REG5
   EA81 E0                 2938 	movx	a,@dptr
   EA82 03                 2939 	rr	a
   EA83 54 03              2940 	anl	a,#0x03
   EA85 FA                 2941 	mov	r2,a
   EA86 E4                 2942 	clr	a
   EA87 BA 03 01           2943 	cjne	r2,#0x03,00165$
   EA8A 04                 2944 	inc	a
   EA8B                    2945 00165$:
   EA8B 90 66 A1           2946 	mov	dptr,#(_tx + 0x0003)
   EA8E F0                 2947 	movx	@dptr,a
                           2948 ;	../../shared/src/train_if.c:343: tx.g0_is_min  = reg_REMOTE_STATUS_G0_LANE_1_0 == 2;
   EA8F 90 26 6C           2949 	mov	dptr,#_TX_TRAIN_IF_REG5
   EA92 E0                 2950 	movx	a,@dptr
   EA93 03                 2951 	rr	a
   EA94 54 03              2952 	anl	a,#0x03
   EA96 FA                 2953 	mov	r2,a
   EA97 E4                 2954 	clr	a
   EA98 BA 02 01           2955 	cjne	r2,#0x02,00167$
   EA9B 04                 2956 	inc	a
   EA9C                    2957 00167$:
   EA9C 90 66 A2           2958 	mov	dptr,#(_tx + 0x0004)
   EA9F F0                 2959 	movx	@dptr,a
                           2960 ;	../../shared/src/train_if.c:344: tx.gn1_is_max = reg_REMOTE_STATUS_GN1_LANE_1_0 == 3;
   EAA0 90 26 6C           2961 	mov	dptr,#_TX_TRAIN_IF_REG5
   EAA3 E0                 2962 	movx	a,@dptr
   EAA4 C4                 2963 	swap	a
   EAA5 03                 2964 	rr	a
   EAA6 54 03              2965 	anl	a,#0x03
   EAA8 FA                 2966 	mov	r2,a
   EAA9 E4                 2967 	clr	a
   EAAA BA 03 01           2968 	cjne	r2,#0x03,00169$
   EAAD 04                 2969 	inc	a
   EAAE                    2970 00169$:
   EAAE 90 66 A5           2971 	mov	dptr,#(_tx + 0x0007)
   EAB1 F0                 2972 	movx	@dptr,a
                           2973 ;	../../shared/src/train_if.c:345: tx.gn1_is_min = reg_REMOTE_STATUS_GN1_LANE_1_0 == 2;
   EAB2 90 26 6C           2974 	mov	dptr,#_TX_TRAIN_IF_REG5
   EAB5 E0                 2975 	movx	a,@dptr
   EAB6 C4                 2976 	swap	a
   EAB7 03                 2977 	rr	a
   EAB8 54 03              2978 	anl	a,#0x03
   EABA FA                 2979 	mov	r2,a
   EABB E4                 2980 	clr	a
   EABC BA 02 01           2981 	cjne	r2,#0x02,00171$
   EABF 04                 2982 	inc	a
   EAC0                    2983 00171$:
   EAC0 90 66 A6           2984 	mov	dptr,#(_tx + 0x0008)
   EAC3 F0                 2985 	movx	@dptr,a
                           2986 ;	../../shared/src/train_if.c:346: tx.g1_is_max  = reg_REMOTE_STATUS_G1_LANE_1_0 == 3;
   EAC4 90 26 6C           2987 	mov	dptr,#_TX_TRAIN_IF_REG5
   EAC7 E0                 2988 	movx	a,@dptr
   EAC8 C4                 2989 	swap	a
   EAC9 23                 2990 	rl	a
   EACA 54 03              2991 	anl	a,#0x03
   EACC FA                 2992 	mov	r2,a
   EACD E4                 2993 	clr	a
   EACE BA 03 01           2994 	cjne	r2,#0x03,00173$
   EAD1 04                 2995 	inc	a
   EAD2                    2996 00173$:
   EAD2 90 66 A3           2997 	mov	dptr,#(_tx + 0x0005)
   EAD5 F0                 2998 	movx	@dptr,a
                           2999 ;	../../shared/src/train_if.c:347: tx.g1_is_min  = reg_REMOTE_STATUS_G1_LANE_1_0 == 2;
   EAD6 90 26 6C           3000 	mov	dptr,#_TX_TRAIN_IF_REG5
   EAD9 E0                 3001 	movx	a,@dptr
   EADA C4                 3002 	swap	a
   EADB 23                 3003 	rl	a
   EADC 54 03              3004 	anl	a,#0x03
   EADE FA                 3005 	mov	r2,a
   EADF E4                 3006 	clr	a
   EAE0 BA 02 01           3007 	cjne	r2,#0x02,00175$
   EAE3 04                 3008 	inc	a
   EAE4                    3009 00175$:
   EAE4 90 66 A4           3010 	mov	dptr,#(_tx + 0x0006)
   EAE7 F0                 3011 	movx	@dptr,a
                           3012 ;	../../shared/src/train_if.c:354: if(tag_TX_TRAIN_P2P_HOLD){
   EAE8 90 67 A0           3013 	mov	dptr,#_tx_train_p2p_hold
   EAEB E0                 3014 	movx	a,@dptr
   EAEC FA                 3015 	mov	r2,a
   EAED 60 56              3016 	jz	00117$
                           3017 ;	../../shared/src/train_if.c:355: tx.gn1_is_max = tx.gn1_is_max /*|| tx.g0_is_max*/;
   EAEF 90 66 A5           3018 	mov	dptr,#(_tx + 0x0007)
   EAF2 E0                 3019 	movx	a,@dptr
   EAF3 FA                 3020 	mov	r2,a
   EAF4 90 66 A5           3021 	mov	dptr,#(_tx + 0x0007)
   EAF7 F0                 3022 	movx	@dptr,a
                           3023 ;	../../shared/src/train_if.c:356: tx.gn1_is_min = tx.gn1_is_min || tx.g0_is_min;
   EAF8 90 66 A6           3024 	mov	dptr,#(_tx + 0x0008)
   EAFB E0                 3025 	movx	a,@dptr
   EAFC 70 09              3026 	jnz	00128$
   EAFE 90 66 A2           3027 	mov	dptr,#(_tx + 0x0004)
   EB01 E0                 3028 	movx	a,@dptr
   EB02 70 03              3029 	jnz	00128$
   EB04 FA                 3030 	mov	r2,a
   EB05 80 02              3031 	sjmp	00129$
   EB07                    3032 00128$:
   EB07 7A 01              3033 	mov	r2,#0x01
   EB09                    3034 00129$:
   EB09 90 66 A6           3035 	mov	dptr,#(_tx + 0x0008)
   EB0C EA                 3036 	mov	a,r2
   EB0D F0                 3037 	movx	@dptr,a
                           3038 ;	../../shared/src/train_if.c:357: tx.g1_is_max  = tx.g1_is_max  || tx.g0_is_max;
   EB0E 90 66 A3           3039 	mov	dptr,#(_tx + 0x0005)
   EB11 E0                 3040 	movx	a,@dptr
   EB12 70 09              3041 	jnz	00131$
   EB14 90 66 A1           3042 	mov	dptr,#(_tx + 0x0003)
   EB17 E0                 3043 	movx	a,@dptr
   EB18 70 03              3044 	jnz	00131$
   EB1A FA                 3045 	mov	r2,a
   EB1B 80 02              3046 	sjmp	00132$
   EB1D                    3047 00131$:
   EB1D 7A 01              3048 	mov	r2,#0x01
   EB1F                    3049 00132$:
   EB1F 90 66 A3           3050 	mov	dptr,#(_tx + 0x0005)
   EB22 EA                 3051 	mov	a,r2
   EB23 F0                 3052 	movx	@dptr,a
                           3053 ;	../../shared/src/train_if.c:358: tx.g1_is_min  = tx.g1_is_min  || tx.g0_is_min;
   EB24 90 66 A4           3054 	mov	dptr,#(_tx + 0x0006)
   EB27 E0                 3055 	movx	a,@dptr
   EB28 70 09              3056 	jnz	00134$
   EB2A 90 66 A2           3057 	mov	dptr,#(_tx + 0x0004)
   EB2D E0                 3058 	movx	a,@dptr
   EB2E 70 03              3059 	jnz	00134$
   EB30 FA                 3060 	mov	r2,a
   EB31 80 02              3061 	sjmp	00135$
   EB33                    3062 00134$:
   EB33 7A 01              3063 	mov	r2,#0x01
   EB35                    3064 00135$:
   EB35 90 66 A4           3065 	mov	dptr,#(_tx + 0x0006)
   EB38 EA                 3066 	mov	a,r2
   EB39 F0                 3067 	movx	@dptr,a
   EB3A 80 09              3068 	sjmp	00117$
   EB3C                    3069 00116$:
                           3070 ;	../../shared/src/train_if.c:362: tx_ctrl_stat = _EXIT_FAIL;
   EB3C 90 67 68           3071 	mov	dptr,#_tx_ctrl_stat
   EB3F 74 01              3072 	mov	a,#0x01
   EB41 F0                 3073 	movx	@dptr,a
   EB42 A3                 3074 	inc	dptr
   EB43 E4                 3075 	clr	a
   EB44 F0                 3076 	movx	@dptr,a
   EB45                    3077 00117$:
                           3078 ;	../../shared/src/train_if.c:366: if(tx_pipe4_en==0 && do_rx_apta==0) 
   EB45 20 26 3C           3079 	jb	_tx_pipe4_en,00123$
   EB48 20 09 39           3080 	jb	_do_rx_apta,00123$
                           3081 ;	../../shared/src/train_if.c:368: if(request_local_ctrl(0)!= _EXIT_SUCCESS) {
   EB4B 90 00 00           3082 	mov	dptr,#0x0000
   EB4E 78 55              3083 	mov	r0,#_request_local_ctrl
   EB50 79 E8              3084 	mov	r1,#(_request_local_ctrl >> 8)
   EB52 7A 01              3085 	mov	r2,#(_request_local_ctrl >> 16)
   EB54 12 00 B3           3086 	lcall	__sdcc_banked_call
   EB57 E5 82              3087 	mov	a,dpl
   EB59 60 0B              3088 	jz	00119$
                           3089 ;	../../shared/src/train_if.c:369: tx_ctrl_stat = _EXIT_FAIL;
   EB5B 90 67 68           3090 	mov	dptr,#_tx_ctrl_stat
   EB5E 74 01              3091 	mov	a,#0x01
   EB60 F0                 3092 	movx	@dptr,a
   EB61 A3                 3093 	inc	dptr
   EB62 E4                 3094 	clr	a
   EB63 F0                 3095 	movx	@dptr,a
                           3096 ;	../../shared/src/train_if.c:370: return;
   EB64 80 20              3097 	sjmp	00125$
   EB66                    3098 00119$:
                           3099 ;	../../shared/src/train_if.c:374: get_tx_status(0);
   EB66 75 82 00           3100 	mov	dpl,#0x00
   EB69 78 FB              3101 	mov	r0,#_get_tx_status
   EB6B 79 E8              3102 	mov	r1,#(_get_tx_status >> 8)
   EB6D 7A 01              3103 	mov	r2,#(_get_tx_status >> 16)
   EB6F 12 00 B3           3104 	lcall	__sdcc_banked_call
                           3105 ;	../../shared/src/train_if.c:375: if((device_remote_status_bits_lo&0x3f)!=0 ) // get 0?
   EB72 90 26 70           3106 	mov	dptr,#_TX_TRAIN_IF_REG6
   EB75 E0                 3107 	movx	a,@dptr
   EB76 FA                 3108 	mov	r2,a
   EB77 54 3F              3109 	anl	a,#0x3F
   EB79 60 09              3110 	jz	00123$
                           3111 ;	../../shared/src/train_if.c:376: tx_ctrl_stat = _EXIT_FAIL;
   EB7B 90 67 68           3112 	mov	dptr,#_tx_ctrl_stat
   EB7E 74 01              3113 	mov	a,#0x01
   EB80 F0                 3114 	movx	@dptr,a
   EB81 A3                 3115 	inc	dptr
   EB82 E4                 3116 	clr	a
   EB83 F0                 3117 	movx	@dptr,a
   EB84                    3118 00123$:
                           3119 ;	../../shared/src/train_if.c:383: timeout = 0;
   EB84 C2 03              3120 	clr	_timeout
   EB86                    3121 00125$:
   EB86 02 00 C5           3122 	ljmp	__sdcc_banked_ret
                           3123 ;------------------------------------------------------------
                           3124 ;Allocation info for local variables in function 'trainif_init'
                           3125 ;------------------------------------------------------------
                           3126 ;------------------------------------------------------------
                           3127 ;	../../shared/src/train_if.c:387: void trainif_init(void) BANKING_CTRL
                           3128 ;	-----------------------------------------
                           3129 ;	 function trainif_init
                           3130 ;	-----------------------------------------
   EB89                    3131 _trainif_init:
                           3132 ;	../../shared/src/train_if.c:392: /*if( phy_mode == SERDES )*/ frame_marker_ready();	//SAS need also frame lock check.
   EB89 78 FE              3133 	mov	r0,#_frame_marker_ready
   EB8B 79 E5              3134 	mov	r1,#(_frame_marker_ready >> 8)
   EB8D 7A 01              3135 	mov	r2,#(_frame_marker_ready >> 16)
   EB8F 12 00 B3           3136 	lcall	__sdcc_banked_call
                           3137 ;	../../shared/src/train_if.c:394: if( phy_mode <= SAS ) sq_wait();
   EB92 90 A3 16           3138 	mov	dptr,#(_SYSTEM + 0x0002)
   EB95 E0                 3139 	movx	a,@dptr
   EB96 54 07              3140 	anl	a,#0x07
   EB98 FA                 3141 	mov	r2,a
   EB99 C3                 3142 	clr	c
   EB9A 74 81              3143 	mov	a,#(0x01 ^ 0x80)
   EB9C 8A F0              3144 	mov	b,r2
   EB9E 63 F0 80           3145 	xrl	b,#0x80
   EBA1 95 F0              3146 	subb	a,b
   EBA3 40 03              3147 	jc	00102$
   EBA5 12 66 C3           3148 	lcall	_sq_wait
   EBA8                    3149 00102$:
                           3150 ;	../../shared/src/train_if.c:396: train_comp = 0; 
   EBA8 90 67 11           3151 	mov	dptr,#_train_comp
                           3152 ;	../../shared/src/train_if.c:397: tx_init_bit = 0; 
   EBAB E4                 3153 	clr	a
   EBAC F0                 3154 	movx	@dptr,a
   EBAD 90 67 10           3155 	mov	dptr,#_tx_init_bit
   EBB0 F0                 3156 	movx	@dptr,a
                           3157 ;	../../shared/src/train_if.c:399: if(	/*(tx_init_bit == 1) &&*/ (phy_mode != SERDES)) { //!Ethernet
   EBB1 90 A3 16           3158 	mov	dptr,#(_SYSTEM + 0x0002)
   EBB4 E0                 3159 	movx	a,@dptr
   EBB5 54 07              3160 	anl	a,#0x07
   EBB7 FA                 3161 	mov	r2,a
   EBB8 BA 04 02           3162 	cjne	r2,#0x04,00117$
   EBBB 80 21              3163 	sjmp	00110$
   EBBD                    3164 00117$:
                           3165 ;	../../shared/src/train_if.c:401: request_local_status();  
   EBBD 78 1A              3166 	mov	r0,#_request_local_status
   EBBF 79 E6              3167 	mov	r1,#(_request_local_status >> 8)
   EBC1 7A 01              3168 	mov	r2,#(_request_local_status >> 16)
   EBC3 12 00 B3           3169 	lcall	__sdcc_banked_call
                           3170 ;	../../shared/src/train_if.c:402: short_delay();//delay01(10);
   EBC6 78 05              3171 	mov	r0,#_short_delay
   EBC8 79 C0              3172 	mov	r1,#(_short_delay >> 8)
   EBCA 7A 02              3173 	mov	r2,#(_short_delay >> 16)
   EBCC 12 00 B3           3174 	lcall	__sdcc_banked_call
                           3175 ;	../../shared/src/train_if.c:405: while((/*reg_REMOTE_STATUS_VALID_ISR_LANE==0 ||*/ (reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b1&0x40)) ){
   EBCF                    3176 00105$:
   EBCF 90 26 71           3177 	mov	dptr,#(_TX_TRAIN_IF_REG6 + 0x0001)
   EBD2 E0                 3178 	movx	a,@dptr
   EBD3 FA                 3179 	mov	r2,a
   EBD4 30 E6 07           3180 	jnb	acc.6,00110$
                           3181 ;	../../shared/src/train_if.c:406: if(reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE==0) break;
   EBD7 90 26 79           3182 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   EBDA E0                 3183 	movx	a,@dptr
   EBDB 20 E6 F1           3184 	jb	acc.6,00105$
   EBDE                    3185 00110$:
   EBDE 02 00 C5           3186 	ljmp	__sdcc_banked_ret
                           3187 ;------------------------------------------------------------
                           3188 ;Allocation info for local variables in function 'txtrain_force_restart'
                           3189 ;------------------------------------------------------------
                           3190 ;------------------------------------------------------------
                           3191 ;	../../shared/src/train_if.c:467: void txtrain_force_restart(void) BANKING_CTRL{
                           3192 ;	-----------------------------------------
                           3193 ;	 function txtrain_force_restart
                           3194 ;	-----------------------------------------
   EBE1                    3195 _txtrain_force_restart:
                           3196 ;	../../shared/src/train_if.c:469: EA = 0;
   EBE1 C2 AF              3197 	clr	_EA
                           3198 ;	../../shared/src/train_if.c:471: reg_PIN_TX_TRAIN_ENABLE_ISR_LANE = 0;
   EBE3 90 26 5C           3199 	mov	dptr,#_TRX_TRAIN_IF_INTERRUPT_LANE
   EBE6 E0                 3200 	movx	a,@dptr
   EBE7 54 FD              3201 	anl	a,#0xfd
   EBE9 F0                 3202 	movx	@dptr,a
                           3203 ;	../../shared/src/train_if.c:473: if(phy_mode==SERDES) { reg_TX_SEL_BITS_LANE = 1; reg_RX_SEL_BITS_LANE = 1; } //force to 32bit
   EBEA 90 A3 16           3204 	mov	dptr,#(_SYSTEM + 0x0002)
   EBED E0                 3205 	movx	a,@dptr
   EBEE 54 07              3206 	anl	a,#0x07
   EBF0 FA                 3207 	mov	r2,a
   EBF1 BA 04 0E           3208 	cjne	r2,#0x04,00102$
   EBF4 90 20 37           3209 	mov	dptr,#(_TX_SYSTEM_LANE + 0x0003)
   EBF7 E0                 3210 	movx	a,@dptr
   EBF8 44 80              3211 	orl	a,#0x80
   EBFA F0                 3212 	movx	@dptr,a
   EBFB 90 21 07           3213 	mov	dptr,#(_RX_SYSTEM_LANE + 0x0003)
   EBFE E0                 3214 	movx	a,@dptr
   EBFF 44 80              3215 	orl	a,#0x80
   EC01 F0                 3216 	movx	@dptr,a
   EC02                    3217 00102$:
                           3218 ;	../../shared/src/train_if.c:475: reg_TX_TRAIN_ON_LANE = 1;// for internal hardware tx-train design
   EC02 90 26 7B           3219 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   EC05 E0                 3220 	movx	a,@dptr
   EC06 44 02              3221 	orl	a,#0x02
   EC08 F0                 3222 	movx	@dptr,a
                           3223 ;	../../shared/src/train_if.c:477: do_train = 1; PHY_STATUS = ST_TRXTRAIN;
   EC09 D2 06              3224 	setb	_do_train
   EC0B 90 22 30           3225 	mov	dptr,#_MCU_STATUS0_LANE
   EC0E 74 28              3226 	mov	a,#0x28
   EC10 F0                 3227 	movx	@dptr,a
                           3228 ;	../../shared/src/train_if.c:478: train_comp = 0;
   EC11 90 67 11           3229 	mov	dptr,#_train_comp
   EC14 E4                 3230 	clr	a
   EC15 F0                 3231 	movx	@dptr,a
                           3232 ;	../../shared/src/train_if.c:480: timeout = 0;
   EC16 C2 03              3233 	clr	_timeout
                           3234 ;	../../shared/src/train_if.c:481: timeout_stop2;
   EC18 75 C8 60           3235 	mov	_T2CON,#0x60
   EC1B C2 C6              3236 	clr	_TF2
                           3237 ;	../../shared/src/train_if.c:482: reg_FRAME_LOCK_ISR_LANE = 0;
   EC1D 90 21 43           3238 	mov	dptr,#(_RX_LANE_INTERRUPT + 0x0003)
   EC20 E0                 3239 	movx	a,@dptr
   EC21 54 BF              3240 	anl	a,#0xbf
   EC23 F0                 3241 	movx	@dptr,a
                           3242 ;	../../shared/src/train_if.c:483: reg_FRAME_UNLOCK_ISR_LANE = 0;
   EC24 90 21 43           3243 	mov	dptr,#(_RX_LANE_INTERRUPT + 0x0003)
   EC27 E0                 3244 	movx	a,@dptr
   EC28 54 DF              3245 	anl	a,#0xdf
   EC2A F0                 3246 	movx	@dptr,a
                           3247 ;	../../shared/src/train_if.c:484: reg_REMOTE_STATUS_VALID_ISR_LANE = 0;
   EC2B 90 26 5D           3248 	mov	dptr,#(_TRX_TRAIN_IF_INTERRUPT_LANE + 0x0001)
   EC2E E0                 3249 	movx	a,@dptr
   EC2F 54 FE              3250 	anl	a,#0xfe
   EC31 F0                 3251 	movx	@dptr,a
                           3252 ;	../../shared/src/train_if.c:485: lnx_TX_TRAIN_FRAME_LOCK_DET_FAIL_INT_LANE = 0;
   EC32 90 60 5A           3253 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0002)
   EC35 E0                 3254 	movx	a,@dptr
   EC36 54 FD              3255 	anl	a,#0xfd
   EC38 F0                 3256 	movx	@dptr,a
                           3257 ;	../../shared/src/train_if.c:488: if(link_train_mode) {
   EC39 90 26 7B           3258 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   EC3C E0                 3259 	movx	a,@dptr
   EC3D 30 E7 14           3260 	jnb	acc.7,00107$
                           3261 ;	../../shared/src/train_if.c:489: reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0; 
   EC40 90 26 04           3262 	mov	dptr,#_DME_ENC_REG1
   EC43 E4                 3263 	clr	a
   EC44 F0                 3264 	movx	@dptr,a
   EC45 A3                 3265 	inc	dptr
   EC46 F0                 3266 	movx	@dptr,a
                           3267 ;	../../shared/src/train_if.c:490: reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; 
                           3268 ;	../../shared/src/train_if.c:491: reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
   EC47 90 26 7A           3269 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   EC4A E0                 3270 	movx	a,@dptr
   EC4B 44 20              3271 	orl	a,#0x20
   EC4D F0                 3272 	movx	@dptr,a
   EC4E E0                 3273 	movx	a,@dptr
   EC4F 54 DF              3274 	anl	a,#0xdf
   EC51 F0                 3275 	movx	@dptr,a
   EC52 80 46              3276 	sjmp	00108$
   EC54                    3277 00107$:
                           3278 ;	../../shared/src/train_if.c:497: tx_init_bit = 1;
   EC54 90 67 10           3279 	mov	dptr,#_tx_init_bit
   EC57 74 01              3280 	mov	a,#0x01
   EC59 F0                 3281 	movx	@dptr,a
                           3282 ;	../../shared/src/train_if.c:498: if(phy_mode == SERDES) { //Ethernet
   EC5A 90 A3 16           3283 	mov	dptr,#(_SYSTEM + 0x0002)
   EC5D E0                 3284 	movx	a,@dptr
   EC5E 54 07              3285 	anl	a,#0x07
   EC60 FA                 3286 	mov	r2,a
   EC61 BA 04 10           3287 	cjne	r2,#0x04,00104$
                           3288 ;	../../shared/src/train_if.c:499: reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0x0000; //tx_comp=0
   EC64 90 26 04           3289 	mov	dptr,#_DME_ENC_REG1
   EC67 E4                 3290 	clr	a
   EC68 F0                 3291 	movx	@dptr,a
   EC69 A3                 3292 	inc	dptr
   EC6A F0                 3293 	movx	@dptr,a
                           3294 ;	../../shared/src/train_if.c:500: reg_LOCAL_CTRL_FIELD_LANE_15_0 = 0;        //hold
   EC6B 90 26 06           3295 	mov	dptr,#(_DME_ENC_REG1 + 0x0002)
   EC6E E4                 3296 	clr	a
   EC6F F0                 3297 	movx	@dptr,a
   EC70 A3                 3298 	inc	dptr
   EC71 F0                 3299 	movx	@dptr,a
   EC72 80 10              3300 	sjmp	00105$
   EC74                    3301 00104$:
                           3302 ;	../../shared/src/train_if.c:503: reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0x4000; //tx_comp=0,tx_init=1
   EC74 90 26 04           3303 	mov	dptr,#_DME_ENC_REG1
   EC77 E4                 3304 	clr	a
   EC78 F0                 3305 	movx	@dptr,a
   EC79 A3                 3306 	inc	dptr
   EC7A 74 40              3307 	mov	a,#0x40
   EC7C F0                 3308 	movx	@dptr,a
                           3309 ;	../../shared/src/train_if.c:504: reg_LOCAL_CTRL_FIELD_LANE_15_0 = 0;	   //hold
   EC7D 90 26 06           3310 	mov	dptr,#(_DME_ENC_REG1 + 0x0002)
   EC80 E4                 3311 	clr	a
   EC81 F0                 3312 	movx	@dptr,a
   EC82 A3                 3313 	inc	dptr
   EC83 F0                 3314 	movx	@dptr,a
   EC84                    3315 00105$:
                           3316 ;	../../shared/src/train_if.c:506: reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; 
                           3317 ;	../../shared/src/train_if.c:507: reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
                           3318 ;	../../shared/src/train_if.c:508: reg_LOCAL_CTRL_FIELD_VALID_LANE = 1; 
   EC84 90 26 7A           3319 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   EC87 E0                 3320 	movx	a,@dptr
   EC88 44 20              3321 	orl	a,#0x20
   EC8A F0                 3322 	movx	@dptr,a
   EC8B E0                 3323 	movx	a,@dptr
   EC8C 54 DF              3324 	anl	a,#0xdf
   EC8E F0                 3325 	movx	@dptr,a
   EC8F E0                 3326 	movx	a,@dptr
   EC90 44 40              3327 	orl	a,#0x40
   EC92 F0                 3328 	movx	@dptr,a
                           3329 ;	../../shared/src/train_if.c:509: reg_LOCAL_CTRL_FIELD_VALID_LANE = 0;
   EC93 90 26 7A           3330 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   EC96 E0                 3331 	movx	a,@dptr
   EC97 54 BF              3332 	anl	a,#0xbf
   EC99 F0                 3333 	movx	@dptr,a
   EC9A                    3334 00108$:
                           3335 ;	../../shared/src/train_if.c:513: EA = 1;
   EC9A D2 AF              3336 	setb	_EA
   EC9C 02 00 C5           3337 	ljmp	__sdcc_banked_ret
                           3338 	.area CSEG    (CODE)
                           3339 	.area CSEG    (CODE)
                           3340 	.area CABS    (ABS,CODE)
