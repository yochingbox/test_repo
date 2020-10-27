                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:33 2018
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
                            979 	.globl _request_local_status
                            980 	.globl _remote_error_check
                            981 	.globl _request_local_ctrl
                            982 	.globl _get_tx_status
                            983 	.globl _Send_ctrl_to_tx
                            984 	.globl _trainif_init
                            985 	.globl _txtrain_force_restart
                            986 ;--------------------------------------------------------
                            987 ; special function registers
                            988 ;--------------------------------------------------------
                            989 	.area RSEG    (ABS,DATA)
   0000                     990 	.org 0x0000
                    0080    991 _P0	=	0x0080
                    0082    992 _DPL	=	0x0082
                    0083    993 _DPH	=	0x0083
                    0086    994 _WDTREL	=	0x0086
                    0087    995 _PCON	=	0x0087
                    0088    996 _TCON	=	0x0088
                    0089    997 _TMOD	=	0x0089
                    008A    998 _TL0	=	0x008a
                    008B    999 _TL1	=	0x008b
                    008C   1000 _TH0	=	0x008c
                    008D   1001 _TH1	=	0x008d
                    008E   1002 _CKCON	=	0x008e
                    0090   1003 _P1	=	0x0090
                    0092   1004 _DPS	=	0x0092
                    0094   1005 _PSBANK	=	0x0094
                    0098   1006 _SCON	=	0x0098
                    0099   1007 _SBUF	=	0x0099
                    009A   1008 _IEN2	=	0x009a
                    00A0   1009 _P2	=	0x00a0
                    00A1   1010 _DMAS0	=	0x00a1
                    00A2   1011 _DMAS1	=	0x00a2
                    00A3   1012 _DMAS2	=	0x00a3
                    00A4   1013 _DMAT0	=	0x00a4
                    00A5   1014 _DMAT1	=	0x00a5
                    00A6   1015 _DMAT2	=	0x00a6
                    00A8   1016 _IEN0	=	0x00a8
                    00A9   1017 _IP0	=	0x00a9
                    00AA   1018 _S0RELL	=	0x00aa
                    00B0   1019 _P3	=	0x00b0
                    00B1   1020 _DMAC0	=	0x00b1
                    00B2   1021 _DMAC1	=	0x00b2
                    00B3   1022 _DMAC2	=	0x00b3
                    00B4   1023 _DMASEL	=	0x00b4
                    00B5   1024 _DMAM0	=	0x00b5
                    00B6   1025 _DMAM1	=	0x00b6
                    00B8   1026 _IEN1	=	0x00b8
                    00B9   1027 _IP1	=	0x00b9
                    00BA   1028 _S0RELH	=	0x00ba
                    00C0   1029 _IRCON	=	0x00c0
                    00C1   1030 _CCEN	=	0x00c1
                    00C8   1031 _T2CON	=	0x00c8
                    00CA   1032 _RCAP2L	=	0x00ca
                    00CB   1033 _RCAP2H	=	0x00cb
                    00CC   1034 _TL2	=	0x00cc
                    00CD   1035 _TH2	=	0x00cd
                    00D0   1036 _PSW	=	0x00d0
                    00D8   1037 _ADCON	=	0x00d8
                    00E0   1038 _ACC	=	0x00e0
                    00E8   1039 _EIE	=	0x00e8
                    00F0   1040 _B	=	0x00f0
                    00F7   1041 _SRST	=	0x00f7
                    8C8A   1042 _TMR0	=	0x8c8a
                    8D8B   1043 _TMR1	=	0x8d8b
                    CDCC   1044 _TMR2	=	0xcdcc
                    A2A1   1045 _DMASA	=	0xa2a1
                    A5A4   1046 _DMATA	=	0xa5a4
                    B2B1   1047 _DMAC	=	0xb2b1
                           1048 ;--------------------------------------------------------
                           1049 ; special function bits
                           1050 ;--------------------------------------------------------
                           1051 	.area RSEG    (ABS,DATA)
   0000                    1052 	.org 0x0000
                    0080   1053 _P0_0	=	0x0080
                    0081   1054 _P0_1	=	0x0081
                    0082   1055 _P0_2	=	0x0082
                    0083   1056 _P0_3	=	0x0083
                    0084   1057 _P0_4	=	0x0084
                    0085   1058 _P0_5	=	0x0085
                    0086   1059 _P0_6	=	0x0086
                    0087   1060 _P0_7	=	0x0087
                    0090   1061 _P1_0	=	0x0090
                    0091   1062 _P1_1	=	0x0091
                    0092   1063 _P1_2	=	0x0092
                    0093   1064 _P1_3	=	0x0093
                    0094   1065 _P1_4	=	0x0094
                    0095   1066 _P1_5	=	0x0095
                    0096   1067 _P1_6	=	0x0096
                    0097   1068 _P1_7	=	0x0097
                    00A0   1069 _P2_0	=	0x00a0
                    00A1   1070 _P2_1	=	0x00a1
                    00A2   1071 _P2_2	=	0x00a2
                    00A3   1072 _P2_3	=	0x00a3
                    00A4   1073 _P2_4	=	0x00a4
                    00A5   1074 _P2_5	=	0x00a5
                    00A6   1075 _P2_6	=	0x00a6
                    00A7   1076 _P2_7	=	0x00a7
                    00B0   1077 _P3_0	=	0x00b0
                    00B1   1078 _P3_1	=	0x00b1
                    00B2   1079 _P3_2	=	0x00b2
                    00B3   1080 _P3_3	=	0x00b3
                    00B4   1081 _P3_4	=	0x00b4
                    00B5   1082 _P3_5	=	0x00b5
                    00B6   1083 _P3_6	=	0x00b6
                    00B7   1084 _P3_7	=	0x00b7
                    0088   1085 _IT0	=	0x0088
                    0089   1086 _IE0	=	0x0089
                    008A   1087 _IT1	=	0x008a
                    008B   1088 _IE1	=	0x008b
                    008C   1089 _TR0	=	0x008c
                    008D   1090 _TF0	=	0x008d
                    008E   1091 _TR1	=	0x008e
                    008F   1092 _TF1	=	0x008f
                    00A8   1093 _EX0	=	0x00a8
                    00A9   1094 _ET0	=	0x00a9
                    00AA   1095 _EX1	=	0x00aa
                    00AB   1096 _ET1	=	0x00ab
                    00AC   1097 _ES	=	0x00ac
                    00AD   1098 _ET2	=	0x00ad
                    00AE   1099 _WDT	=	0x00ae
                    00AF   1100 _EA	=	0x00af
                    00B8   1101 _EX7	=	0x00b8
                    00B9   1102 _EX2	=	0x00b9
                    00BA   1103 _EX3	=	0x00ba
                    00BB   1104 _EX4	=	0x00bb
                    00BC   1105 _EX5	=	0x00bc
                    00BD   1106 _EX6	=	0x00bd
                    00BE   1107 _PS1	=	0x00be
                    009A   1108 _ES1	=	0x009a
                    009B   1109 _EX8	=	0x009b
                    009C   1110 _EX9	=	0x009c
                    009D   1111 _EX10	=	0x009d
                    009E   1112 _EX11	=	0x009e
                    009F   1113 _EX12	=	0x009f
                    0098   1114 _RI	=	0x0098
                    0099   1115 _TI	=	0x0099
                    00C6   1116 _TF2	=	0x00c6
                           1117 ;--------------------------------------------------------
                           1118 ; overlayable register banks
                           1119 ;--------------------------------------------------------
                           1120 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1121 	.ds 8
                           1122 ;--------------------------------------------------------
                           1123 ; internal ram data
                           1124 ;--------------------------------------------------------
                           1125 	.area DSEG    (DATA)
                           1126 ;--------------------------------------------------------
                           1127 ; overlayable items in internal ram 
                           1128 ;--------------------------------------------------------
                           1129 	.area OSEG    (OVR,DATA)
                           1130 ;--------------------------------------------------------
                           1131 ; indirectly addressable internal ram data
                           1132 ;--------------------------------------------------------
                           1133 	.area ISEG    (DATA)
                           1134 ;--------------------------------------------------------
                           1135 ; absolute internal ram data
                           1136 ;--------------------------------------------------------
                           1137 	.area IABS    (ABS,DATA)
                           1138 	.area IABS    (ABS,DATA)
                           1139 ;--------------------------------------------------------
                           1140 ; bit data
                           1141 ;--------------------------------------------------------
                           1142 	.area BSEG    (BIT)
                           1143 ;--------------------------------------------------------
                           1144 ; paged external ram data
                           1145 ;--------------------------------------------------------
                           1146 	.area PSEG    (PAG,XDATA)
                           1147 ;--------------------------------------------------------
                           1148 ; external ram data
                           1149 ;--------------------------------------------------------
                           1150 	.area XSEG    (XDATA)
                    1000   1151 _UPHY14_TRX_LANEPLL_ANAREG_TOP_128	=	0x1000
                    1004   1152 _UPHY14_TRX_LANEPLL_ANAREG_TOP_129	=	0x1004
                    1008   1153 _UPHY14_TRX_LANEPLL_ANAREG_TOP_130	=	0x1008
                    100C   1154 _UPHY14_TRX_LANEPLL_ANAREG_TOP_131	=	0x100c
                    1010   1155 _UPHY14_TRX_LANEPLL_ANAREG_TOP_132	=	0x1010
                    1014   1156 _UPHY14_TRX_LANEPLL_ANAREG_TOP_133	=	0x1014
                    1018   1157 _UPHY14_TRX_LANEPLL_ANAREG_TOP_134	=	0x1018
                    101C   1158 _UPHY14_TRX_LANEPLL_ANAREG_TOP_135	=	0x101c
                    1020   1159 _UPHY14_TRX_LANEPLL_ANAREG_TOP_136	=	0x1020
                    1024   1160 _UPHY14_TRX_LANEPLL_ANAREG_TOP_137	=	0x1024
                    1028   1161 _UPHY14_TRX_LANEPLL_ANAREG_TOP_138	=	0x1028
                    102C   1162 _UPHY14_TRX_LANEPLL_ANAREG_TOP_139	=	0x102c
                    1030   1163 _UPHY14_TRX_LANEPLL_ANAREG_TOP_140	=	0x1030
                    1034   1164 _UPHY14_TRX_LANEPLL_ANAREG_TOP_141	=	0x1034
                    1038   1165 _UPHY14_TRX_LANEPLL_ANAREG_TOP_142	=	0x1038
                    103C   1166 _UPHY14_TRX_LANEPLL_ANAREG_TOP_143	=	0x103c
                    0200   1167 _UPHY14_TRX_ANAREG_TOP_128	=	0x0200
                    0204   1168 _UPHY14_TRX_ANAREG_TOP_129	=	0x0204
                    0208   1169 _UPHY14_TRX_ANAREG_TOP_130	=	0x0208
                    020C   1170 _UPHY14_TRX_ANAREG_TOP_131	=	0x020c
                    0210   1171 _UPHY14_TRX_ANAREG_TOP_132	=	0x0210
                    0214   1172 _UPHY14_TRX_ANAREG_TOP_133	=	0x0214
                    0218   1173 _UPHY14_TRX_ANAREG_TOP_134	=	0x0218
                    021C   1174 _UPHY14_TRX_ANAREG_TOP_135	=	0x021c
                    0220   1175 _UPHY14_TRX_ANAREG_TOP_136	=	0x0220
                    0224   1176 _UPHY14_TRX_ANAREG_TOP_137	=	0x0224
                    0228   1177 _UPHY14_TRX_ANAREG_TOP_138	=	0x0228
                    022C   1178 _UPHY14_TRX_ANAREG_TOP_139	=	0x022c
                    0230   1179 _UPHY14_TRX_ANAREG_TOP_140	=	0x0230
                    0234   1180 _UPHY14_TRX_ANAREG_TOP_141	=	0x0234
                    0238   1181 _UPHY14_TRX_ANAREG_TOP_142	=	0x0238
                    023C   1182 _UPHY14_TRX_ANAREG_TOP_143	=	0x023c
                    0240   1183 _UPHY14_TRX_ANAREG_TOP_144	=	0x0240
                    0244   1184 _UPHY14_TRX_ANAREG_TOP_145	=	0x0244
                    0248   1185 _UPHY14_TRX_ANAREG_TOP_146	=	0x0248
                    024C   1186 _UPHY14_TRX_ANAREG_TOP_147	=	0x024c
                    0250   1187 _UPHY14_TRX_ANAREG_TOP_148	=	0x0250
                    0254   1188 _UPHY14_TRX_ANAREG_TOP_149	=	0x0254
                    0258   1189 _UPHY14_TRX_ANAREG_TOP_150	=	0x0258
                    025C   1190 _UPHY14_TRX_ANAREG_TOP_151	=	0x025c
                    0260   1191 _UPHY14_TRX_ANAREG_TOP_152	=	0x0260
                    0264   1192 _UPHY14_TRX_ANAREG_TOP_153	=	0x0264
                    0268   1193 _UPHY14_TRX_ANAREG_TOP_154	=	0x0268
                    026C   1194 _UPHY14_TRX_ANAREG_TOP_155	=	0x026c
                    0270   1195 _UPHY14_TRX_ANAREG_TOP_156	=	0x0270
                    0274   1196 _UPHY14_TRX_ANAREG_TOP_157	=	0x0274
                    0000   1197 _UPHY14_TRX_ANAREG_BOT_0	=	0x0000
                    0004   1198 _UPHY14_TRX_ANAREG_BOT_1	=	0x0004
                    0008   1199 _UPHY14_TRX_ANAREG_BOT_2	=	0x0008
                    000C   1200 _UPHY14_TRX_ANAREG_BOT_3	=	0x000c
                    0010   1201 _UPHY14_TRX_ANAREG_BOT_4	=	0x0010
                    0014   1202 _UPHY14_TRX_ANAREG_BOT_5	=	0x0014
                    0018   1203 _UPHY14_TRX_ANAREG_BOT_6	=	0x0018
                    001C   1204 _UPHY14_TRX_ANAREG_BOT_7	=	0x001c
                    0020   1205 _UPHY14_TRX_ANAREG_BOT_8	=	0x0020
                    0024   1206 _UPHY14_TRX_ANAREG_BOT_9	=	0x0024
                    0028   1207 _UPHY14_TRX_ANAREG_BOT_10	=	0x0028
                    002C   1208 _UPHY14_TRX_ANAREG_BOT_11	=	0x002c
                    0030   1209 _UPHY14_TRX_ANAREG_BOT_12	=	0x0030
                    0034   1210 _UPHY14_TRX_ANAREG_BOT_13	=	0x0034
                    0038   1211 _UPHY14_TRX_ANAREG_BOT_14	=	0x0038
                    003C   1212 _UPHY14_TRX_ANAREG_BOT_15	=	0x003c
                    0040   1213 _UPHY14_TRX_ANAREG_BOT_16	=	0x0040
                    0044   1214 _UPHY14_TRX_ANAREG_BOT_17	=	0x0044
                    0048   1215 _UPHY14_TRX_ANAREG_BOT_18	=	0x0048
                    004C   1216 _UPHY14_TRX_ANAREG_BOT_19	=	0x004c
                    0050   1217 _UPHY14_TRX_ANAREG_BOT_20	=	0x0050
                    0054   1218 _UPHY14_TRX_ANAREG_BOT_21	=	0x0054
                    0058   1219 _UPHY14_TRX_ANAREG_BOT_22	=	0x0058
                    005C   1220 _UPHY14_TRX_ANAREG_BOT_23	=	0x005c
                    0060   1221 _UPHY14_TRX_ANAREG_BOT_24	=	0x0060
                    0064   1222 _UPHY14_TRX_ANAREG_BOT_25	=	0x0064
                    0068   1223 _UPHY14_TRX_ANAREG_BOT_26	=	0x0068
                    006C   1224 _UPHY14_TRX_ANAREG_BOT_27	=	0x006c
                    0070   1225 _UPHY14_TRX_ANAREG_BOT_28	=	0x0070
                    0074   1226 _UPHY14_TRX_ANAREG_BOT_29	=	0x0074
                    0078   1227 _UPHY14_TRX_ANAREG_BOT_30	=	0x0078
                    007C   1228 _UPHY14_TRX_ANAREG_BOT_31	=	0x007c
                    0080   1229 _UPHY14_TRX_ANAREG_BOT_32	=	0x0080
                    0478   1230 _ANA_DFEE_REG_1E	=	0x0478
                    047C   1231 _ANA_DFEE_REG_1F	=	0x047c
                    0480   1232 _ANA_DFEE_REG_20	=	0x0480
                    0484   1233 _ANA_DFEE_REG_21	=	0x0484
                    0488   1234 _ANA_DFEE_REG_22	=	0x0488
                    048C   1235 _ANA_DFEE_REG_23	=	0x048c
                    0490   1236 _ANA_DFEE_REG_24	=	0x0490
                    0494   1237 _ANA_DFEE_REG_25	=	0x0494
                    0498   1238 _ANA_DFEE_REG_26	=	0x0498
                    049C   1239 _ANA_DFEE_REG_27	=	0x049c
                    0400   1240 _ANA_DFEE_REG_00	=	0x0400
                    0404   1241 _ANA_DFEE_REG_01	=	0x0404
                    0408   1242 _ANA_DFEE_REG_02	=	0x0408
                    040C   1243 _ANA_DFEE_REG_03	=	0x040c
                    0410   1244 _ANA_DFEE_REG_04	=	0x0410
                    0414   1245 _ANA_DFEE_REG_05	=	0x0414
                    0418   1246 _ANA_DFEE_REG_06	=	0x0418
                    041C   1247 _ANA_DFEE_REG_07	=	0x041c
                    0420   1248 _ANA_DFEE_REG_08	=	0x0420
                    0424   1249 _ANA_DFEE_REG_09	=	0x0424
                    0428   1250 _ANA_DFEE_REG_0A	=	0x0428
                    042C   1251 _ANA_DFEE_REG_0B	=	0x042c
                    0430   1252 _ANA_DFEE_REG_0C	=	0x0430
                    0434   1253 _ANA_DFEE_REG_0D	=	0x0434
                    0438   1254 _ANA_DFEE_REG_0E	=	0x0438
                    043C   1255 _ANA_DFEE_REG_0F	=	0x043c
                    0440   1256 _ANA_DFEE_REG_10	=	0x0440
                    0444   1257 _ANA_DFEE_REG_11	=	0x0444
                    0448   1258 _ANA_DFEE_REG_12	=	0x0448
                    044C   1259 _ANA_DFEE_REG_13	=	0x044c
                    0450   1260 _ANA_DFEE_REG_14	=	0x0450
                    0454   1261 _ANA_DFEE_REG_15	=	0x0454
                    0458   1262 _ANA_DFEE_REG_16	=	0x0458
                    045C   1263 _ANA_DFEE_REG_17	=	0x045c
                    0460   1264 _ANA_DFEE_REG_18	=	0x0460
                    0464   1265 _ANA_DFEE_REG_19	=	0x0464
                    0468   1266 _ANA_DFEE_REG_1A	=	0x0468
                    046C   1267 _ANA_DFEE_REG_1B	=	0x046c
                    0470   1268 _ANA_DFEE_REG_1C	=	0x0470
                    0474   1269 _ANA_DFEE_REG_1D	=	0x0474
                    0830   1270 _ANA_DFEO_REG_0C	=	0x0830
                    0834   1271 _ANA_DFEO_REG_0D	=	0x0834
                    0838   1272 _ANA_DFEO_REG_0E	=	0x0838
                    083C   1273 _ANA_DFEO_REG_0F	=	0x083c
                    0840   1274 _ANA_DFEO_REG_10	=	0x0840
                    0844   1275 _ANA_DFEO_REG_11	=	0x0844
                    0848   1276 _ANA_DFEO_REG_12	=	0x0848
                    084C   1277 _ANA_DFEO_REG_13	=	0x084c
                    0850   1278 _ANA_DFEO_REG_14	=	0x0850
                    0854   1279 _ANA_DFEO_REG_15	=	0x0854
                    0858   1280 _ANA_DFEO_REG_16	=	0x0858
                    085C   1281 _ANA_DFEO_REG_17	=	0x085c
                    0860   1282 _ANA_DFEO_REG_18	=	0x0860
                    0864   1283 _ANA_DFEO_REG_19	=	0x0864
                    0868   1284 _ANA_DFEO_REG_1A	=	0x0868
                    086C   1285 _ANA_DFEO_REG_1B	=	0x086c
                    0870   1286 _ANA_DFEO_REG_1C	=	0x0870
                    0874   1287 _ANA_DFEO_REG_1D	=	0x0874
                    0878   1288 _ANA_DFEO_REG_1E	=	0x0878
                    087C   1289 _ANA_DFEO_REG_1F	=	0x087c
                    0880   1290 _ANA_DFEO_REG_20	=	0x0880
                    0884   1291 _ANA_DFEO_REG_21	=	0x0884
                    0888   1292 _ANA_DFEO_REG_22	=	0x0888
                    088C   1293 _ANA_DFEO_REG_23	=	0x088c
                    0890   1294 _ANA_DFEO_REG_24	=	0x0890
                    0894   1295 _ANA_DFEO_REG_25	=	0x0894
                    0898   1296 _ANA_DFEO_REG_26	=	0x0898
                    089C   1297 _ANA_DFEO_REG_27	=	0x089c
                    0800   1298 _ANA_DFEO_REG_00	=	0x0800
                    0804   1299 _ANA_DFEO_REG_01	=	0x0804
                    0808   1300 _ANA_DFEO_REG_02	=	0x0808
                    080C   1301 _ANA_DFEO_REG_03	=	0x080c
                    0810   1302 _ANA_DFEO_REG_04	=	0x0810
                    0814   1303 _ANA_DFEO_REG_05	=	0x0814
                    0818   1304 _ANA_DFEO_REG_06	=	0x0818
                    081C   1305 _ANA_DFEO_REG_07	=	0x081c
                    0820   1306 _ANA_DFEO_REG_08	=	0x0820
                    0824   1307 _ANA_DFEO_REG_09	=	0x0824
                    0828   1308 _ANA_DFEO_REG_0A	=	0x0828
                    082C   1309 _ANA_DFEO_REG_0B	=	0x082c
                    8200   1310 _UPHY14_CMN_ANAREG_TOP_128	=	0x8200
                    8204   1311 _UPHY14_CMN_ANAREG_TOP_129	=	0x8204
                    8208   1312 _UPHY14_CMN_ANAREG_TOP_130	=	0x8208
                    820C   1313 _UPHY14_CMN_ANAREG_TOP_131	=	0x820c
                    8210   1314 _UPHY14_CMN_ANAREG_TOP_132	=	0x8210
                    8214   1315 _UPHY14_CMN_ANAREG_TOP_133	=	0x8214
                    8218   1316 _UPHY14_CMN_ANAREG_TOP_134	=	0x8218
                    821C   1317 _UPHY14_CMN_ANAREG_TOP_135	=	0x821c
                    8220   1318 _UPHY14_CMN_ANAREG_TOP_136	=	0x8220
                    8224   1319 _UPHY14_CMN_ANAREG_TOP_137	=	0x8224
                    8228   1320 _UPHY14_CMN_ANAREG_TOP_138	=	0x8228
                    822C   1321 _UPHY14_CMN_ANAREG_TOP_139	=	0x822c
                    8230   1322 _UPHY14_CMN_ANAREG_TOP_140	=	0x8230
                    8234   1323 _UPHY14_CMN_ANAREG_TOP_141	=	0x8234
                    8238   1324 _UPHY14_CMN_ANAREG_TOP_142	=	0x8238
                    823C   1325 _UPHY14_CMN_ANAREG_TOP_143	=	0x823c
                    8240   1326 _UPHY14_CMN_ANAREG_TOP_144	=	0x8240
                    8244   1327 _UPHY14_CMN_ANAREG_TOP_145	=	0x8244
                    8248   1328 _UPHY14_CMN_ANAREG_TOP_146	=	0x8248
                    824C   1329 _UPHY14_CMN_ANAREG_TOP_147	=	0x824c
                    8250   1330 _UPHY14_CMN_ANAREG_TOP_148	=	0x8250
                    8254   1331 _UPHY14_CMN_ANAREG_TOP_149	=	0x8254
                    8258   1332 _UPHY14_CMN_ANAREG_TOP_150	=	0x8258
                    825C   1333 _UPHY14_CMN_ANAREG_TOP_151	=	0x825c
                    8260   1334 _UPHY14_CMN_ANAREG_TOP_152	=	0x8260
                    8264   1335 _UPHY14_CMN_ANAREG_TOP_153	=	0x8264
                    8268   1336 _UPHY14_CMN_ANAREG_TOP_154	=	0x8268
                    826C   1337 _UPHY14_CMN_ANAREG_TOP_155	=	0x826c
                    8270   1338 _UPHY14_CMN_ANAREG_TOP_156	=	0x8270
                    8274   1339 _UPHY14_CMN_ANAREG_TOP_157	=	0x8274
                    8278   1340 _UPHY14_CMN_ANAREG_TOP_158	=	0x8278
                    827C   1341 _UPHY14_CMN_ANAREG_TOP_159	=	0x827c
                    8280   1342 _UPHY14_CMN_ANAREG_TOP_160	=	0x8280
                    8284   1343 _UPHY14_CMN_ANAREG_TOP_161	=	0x8284
                    8288   1344 _UPHY14_CMN_ANAREG_TOP_162	=	0x8288
                    828C   1345 _UPHY14_CMN_ANAREG_TOP_163	=	0x828c
                    8290   1346 _UPHY14_CMN_ANAREG_TOP_164	=	0x8290
                    8294   1347 _UPHY14_CMN_ANAREG_TOP_165	=	0x8294
                    8298   1348 _UPHY14_CMN_ANAREG_TOP_166	=	0x8298
                    829C   1349 _UPHY14_CMN_ANAREG_TOP_167	=	0x829c
                    82A0   1350 _UPHY14_CMN_ANAREG_TOP_168	=	0x82a0
                    82A4   1351 _UPHY14_CMN_ANAREG_TOP_169	=	0x82a4
                    82A8   1352 _UPHY14_CMN_ANAREG_TOP_170	=	0x82a8
                    82AC   1353 _UPHY14_CMN_ANAREG_TOP_171	=	0x82ac
                    82B0   1354 _UPHY14_CMN_ANAREG_TOP_172	=	0x82b0
                    82B4   1355 _UPHY14_CMN_ANAREG_TOP_173	=	0x82b4
                    82B8   1356 _UPHY14_CMN_ANAREG_TOP_174	=	0x82b8
                    82BC   1357 _UPHY14_CMN_ANAREG_TOP_175	=	0x82bc
                    82C0   1358 _UPHY14_CMN_ANAREG_TOP_176	=	0x82c0
                    82C4   1359 _UPHY14_CMN_ANAREG_TOP_177	=	0x82c4
                    82C8   1360 _UPHY14_CMN_ANAREG_TOP_178	=	0x82c8
                    82CC   1361 _UPHY14_CMN_ANAREG_TOP_179	=	0x82cc
                    82D0   1362 _UPHY14_CMN_ANAREG_TOP_180	=	0x82d0
                    82D4   1363 _UPHY14_CMN_ANAREG_TOP_181	=	0x82d4
                    82D8   1364 _UPHY14_CMN_ANAREG_TOP_182	=	0x82d8
                    82DC   1365 _UPHY14_CMN_ANAREG_TOP_183	=	0x82dc
                    82E0   1366 _UPHY14_CMN_ANAREG_TOP_184	=	0x82e0
                    82E4   1367 _UPHY14_CMN_ANAREG_TOP_185	=	0x82e4
                    82E8   1368 _UPHY14_CMN_ANAREG_TOP_186	=	0x82e8
                    82EC   1369 _UPHY14_CMN_ANAREG_TOP_187	=	0x82ec
                    82F0   1370 _UPHY14_CMN_ANAREG_TOP_188	=	0x82f0
                    82F4   1371 _UPHY14_CMN_ANAREG_TOP_189	=	0x82f4
                    82F8   1372 _UPHY14_CMN_ANAREG_TOP_190	=	0x82f8
                    82FC   1373 _UPHY14_CMN_ANAREG_TOP_191	=	0x82fc
                    8300   1374 _UPHY14_CMN_ANAREG_TOP_192	=	0x8300
                    8304   1375 _UPHY14_CMN_ANAREG_TOP_193	=	0x8304
                    8308   1376 _UPHY14_CMN_ANAREG_TOP_194	=	0x8308
                    830C   1377 _UPHY14_CMN_ANAREG_TOP_195	=	0x830c
                    8310   1378 _UPHY14_CMN_ANAREG_TOP_196	=	0x8310
                    8314   1379 _UPHY14_CMN_ANAREG_TOP_197	=	0x8314
                    8318   1380 _UPHY14_CMN_ANAREG_TOP_198	=	0x8318
                    831C   1381 _UPHY14_CMN_ANAREG_TOP_199	=	0x831c
                    8320   1382 _UPHY14_CMN_ANAREG_TOP_200	=	0x8320
                    8324   1383 _UPHY14_CMN_ANAREG_TOP_201	=	0x8324
                    8328   1384 _UPHY14_CMN_ANAREG_TOP_202	=	0x8328
                    832C   1385 _UPHY14_CMN_ANAREG_TOP_203	=	0x832c
                    8330   1386 _UPHY14_CMN_ANAREG_TOP_204	=	0x8330
                    8334   1387 _UPHY14_CMN_ANAREG_TOP_205	=	0x8334
                    8338   1388 _UPHY14_CMN_ANAREG_TOP_206	=	0x8338
                    833C   1389 _UPHY14_CMN_ANAREG_TOP_207	=	0x833c
                    8340   1390 _UPHY14_CMN_ANAREG_TOP_208	=	0x8340
                    8344   1391 _UPHY14_CMN_ANAREG_TOP_209	=	0x8344
                    8348   1392 _UPHY14_CMN_ANAREG_TOP_210	=	0x8348
                    834C   1393 _UPHY14_CMN_ANAREG_TOP_211	=	0x834c
                    8350   1394 _UPHY14_CMN_ANAREG_TOP_212	=	0x8350
                    8354   1395 _UPHY14_CMN_ANAREG_TOP_213	=	0x8354
                    8358   1396 _UPHY14_CMN_ANAREG_TOP_214	=	0x8358
                    2000   1397 _PM_CTRL_TX_LANE_REG1_LANE	=	0x2000
                    2004   1398 _PM_CTRL_TX_LANE_REG2_LANE	=	0x2004
                    2008   1399 _INPUT_TX_PIN_REG0_LANE	=	0x2008
                    200C   1400 _INPUT_TX_PIN_REG1_LANE	=	0x200c
                    2010   1401 _INPUT_TX_PIN_REG2_LANE	=	0x2010
                    2014   1402 _INPUT_TX_PIN_REG3_LANE	=	0x2014
                    2018   1403 _PM_CTRL_INTERRUPT_REG1_LANE	=	0x2018
                    201C   1404 _PM_CTRL_INTERRUPT_REG2	=	0x201c
                    2020   1405 _CLKGEN_TX_LANE_REG1_LANE	=	0x2020
                    2024   1406 _TX_SPEED_CONVERT_LANE	=	0x2024
                    2028   1407 _SPD_CTRL_INTERRUPT_REG1_LANE	=	0x2028
                    202C   1408 _SPD_CTRL_INTERRUPT_REG2	=	0x202c
                    2030   1409 _SPD_CTRL_TX_LANE_REG1_LANE	=	0x2030
                    2034   1410 _TX_SYSTEM_LANE	=	0x2034
                    203C   1411 _INPUT_TX_PIN_REG4_LANE	=	0x203c
                    2040   1412 _TX_CALIBRATION_LANE	=	0x2040
                    2044   1413 _DIG_TX_RSVD_REG0	=	0x2044
                    2048   1414 _INPUT_TX_PIN_REG5_LANE	=	0x2048
                    204C   1415 __FIELDNAME__LANE	=	0x204c
                    2050   1416 _PM_CTRL_INTERRUPT_ISR_REG1_LANE	=	0x2050
                    2054   1417 _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE	=	0x2054
                    2058   1418 _ANALOG_TX_REALTIME_REG_1	=	0x2058
                    205C   1419 _MON_TOP	=	0x205c
                    2100   1420 _PM_CTRL_RX_LANE_REG1_LANE	=	0x2100
                    2104   1421 _RX_SYSTEM_LANE	=	0x2104
                    2108   1422 _INPUT_RX_PIN_REG0_LANE	=	0x2108
                    210C   1423 _INPUT_RX_PIN_REG1_LANE	=	0x210c
                    2110   1424 _INPUT_RX_PIN_REG2_LANE	=	0x2110
                    2114   1425 _SPD_CTRL_RX_LANE_REG1_LANE	=	0x2114
                    2118   1426 _DIG_RX_RSVD_REG0	=	0x2118
                    211C   1427 _CLKGEN_RX_LANE_REG1_LANE	=	0x211c
                    2120   1428 _FRAME_SYNC_DET_REG0	=	0x2120
                    2124   1429 _FRAME_SYNC_DET_REG1	=	0x2124
                    2128   1430 _FRAME_SYNC_DET_REG2	=	0x2128
                    212C   1431 _FRAME_SYNC_DET_REG3	=	0x212c
                    2130   1432 _FRAME_SYNC_DET_REG4	=	0x2130
                    2134   1433 _FRAME_SYNC_DET_REG5	=	0x2134
                    2138   1434 _FRAME_SYNC_DET_REG6	=	0x2138
                    213C   1435 _CDR_LOCK_REG	=	0x213c
                    2140   1436 _RX_LANE_INTERRUPT	=	0x2140
                    2144   1437 _RX_LANE_INTERRUPT_MASK	=	0x2144
                    2148   1438 _RX_DATA_PATH_REG	=	0x2148
                    214C   1439 _INPUT_RX_PIN_REG3_LANE	=	0x214c
                    2150   1440 _RX_CALIBRATION_REG	=	0x2150
                    2158   1441 _RX_LANE_INTERRUPT_REG1	=	0x2158
                    2160   1442 _DTL_REG0	=	0x2160
                    2164   1443 _DTL_REG1	=	0x2164
                    2168   1444 _DTL_REG2	=	0x2168
                    216C   1445 _DTL_REG3	=	0x216c
                    2170   1446 _SQ_REG0	=	0x2170
                    4000   1447 _LANE_CFG0	=	0x4000
                    4004   1448 _LANE_STATUS0	=	0x4004
                    4008   1449 _LANE_CFG_STATUS2_LANE	=	0x4008
                    400C   1450 _LANE_CFG2_LANE	=	0x400c
                    4010   1451 _LANE_CFG4	=	0x4010
                    4014   1452 _LANE_CFG_STATUS3_LANE	=	0x4014
                    4018   1453 _LANE_DP_PIE8_CFG0_LANE	=	0x4018
                    401C   1454 _LANE_USB_DP_CFG1_LANE	=	0x401c
                    4020   1455 _LANE_USB_DP_CFG2_LANE	=	0x4020
                    4024   1456 _LANE_EQ_CFG0_LANE	=	0x4024
                    4028   1457 _LANE_EQ_CFG1_LANE	=	0x4028
                    402C   1458 _LANE_PRESET_CFG0_LANE	=	0x402c
                    4030   1459 _LANE_PRESET_CFG2_LANE	=	0x4030
                    4034   1460 _LANE_PRESET_CFG4_LANE	=	0x4034
                    4038   1461 _LANE_PRESET_CFG6_LANE	=	0x4038
                    403C   1462 _LANE_PRESET_CFG8_LANE	=	0x403c
                    4040   1463 _LANE_PRESET_CFG10_LANE	=	0x4040
                    4044   1464 _LANE_PRESET_CFG12_LANE	=	0x4044
                    4048   1465 _LANE_PRESET_CFG14_LANE	=	0x4048
                    404C   1466 _LANE_PRESET_CFG16_LANE	=	0x404c
                    4050   1467 _LANE_COEFF_MAX0_LANE	=	0x4050
                    4054   1468 _LANE_REMOTE_SET_LANE	=	0x4054
                    4058   1469 _LANE_EQ_16G_CFG0_LANE	=	0x4058
                    405C   1470 _LANE_16G_PRESET_CFG0_LANE	=	0x405c
                    4060   1471 _LANE_16G_PRESET_CFG2_LANE	=	0x4060
                    4064   1472 _LANE_16G_PRESET_CFG4_LANE	=	0x4064
                    4068   1473 _LANE_16G_PRESET_CFG6_LANE	=	0x4068
                    406C   1474 _LANE_16G_PRESET_CFG8_LANE	=	0x406c
                    4070   1475 _LANE_16G_PRESET_CFG10_LANE	=	0x4070
                    4074   1476 _LANE_16G_PRESET_CFG12_LANE	=	0x4074
                    4078   1477 _LANE_16G_PRESET_CFG14_LANE	=	0x4078
                    407C   1478 _LANE_16G_PRESET_CFG16_LANE	=	0x407c
                    4080   1479 _LANE_EQ_32G_CFG0_LANE	=	0x4080
                    4084   1480 _LANE_32G_PRESET_CFG0_LANE	=	0x4084
                    4088   1481 _LANE_32G_PRESET_CFG2_LANE	=	0x4088
                    408C   1482 _LANE_32G_PRESET_CFG4_LANE	=	0x408c
                    4090   1483 _LANE_32G_PRESET_CFG6_LANE	=	0x4090
                    4094   1484 _LANE_32G_PRESET_CFG8_LANE	=	0x4094
                    4098   1485 _LANE_32G_PRESET_CFG10_LANE	=	0x4098
                    409C   1486 _LANE_32G_PRESET_CFG12_LANE	=	0x409c
                    40A0   1487 _LANE_32G_PRESET_CFG14_LANE	=	0x40a0
                    40A4   1488 _LANE_32G_PRESET_CFG16_LANE	=	0x40a4
                    2200   1489 _MCU_CONTROL_LANE	=	0x2200
                    2204   1490 _MCU_GPIO	=	0x2204
                    2208   1491 _CACHE_DEBUG0	=	0x2208
                    220C   1492 _CACHE_DEBUG1	=	0x220c
                    2210   1493 _LANE_SYSTEM0	=	0x2210
                    2230   1494 _MCU_STATUS0_LANE	=	0x2230
                    2234   1495 _MCU_STATUS1_LANE	=	0x2234
                    2238   1496 _MCU_STATUS2_LANE	=	0x2238
                    223C   1497 _MCU_STATUS3_LANE	=	0x223c
                    2240   1498 _MCU_INT0_CONTROL	=	0x2240
                    2244   1499 _MCU_INT1_CONTROL	=	0x2244
                    2248   1500 _MCU_INT2_CONTROL	=	0x2248
                    224C   1501 _MCU_INT3_CONTROL	=	0x224c
                    2250   1502 _MCU_INT4_CONTROL	=	0x2250
                    2254   1503 _MCU_INT5_CONTROL	=	0x2254
                    2258   1504 _MCU_INT6_CONTROL	=	0x2258
                    225C   1505 _MCU_INT7_CONTROL	=	0x225c
                    2260   1506 _MCU_INT8_CONTROL	=	0x2260
                    2264   1507 _MCU_INT9_CONTROL	=	0x2264
                    2268   1508 _MCU_INT10_CONTROL	=	0x2268
                    226C   1509 _MCU_INT11_CONTROL	=	0x226c
                    2270   1510 _MCU_INT12_CONTROL	=	0x2270
                    2274   1511 _MCU_TIMER_CONTROL	=	0x2274
                    2278   1512 _MCU_TIMER0_CONTROL	=	0x2278
                    227C   1513 _MCU_TIMER1_CONTROL	=	0x227c
                    2280   1514 _MCU_TIMER2_CONTROL	=	0x2280
                    2284   1515 _MCU_TIMER3_CONTROL	=	0x2284
                    2288   1516 _MCU_IRQ_LANE	=	0x2288
                    228C   1517 _MCU_IRQ_MASK_LANE	=	0x228c
                    2290   1518 _MCU_MEM_REG1_LANE	=	0x2290
                    2294   1519 _MCU_MEM_REG2_LANE	=	0x2294
                    2298   1520 _MCU_TIMER_CTRL_1_LANE	=	0x2298
                    229C   1521 _MCU_TIMER_CTRL_2_LANE	=	0x229c
                    22A0   1522 _MCU_TIMER_CTRL_3_LANE	=	0x22a0
                    22A4   1523 _MCU_TIMER_CTRL_4_LANE	=	0x22a4
                    22A8   1524 _MCU_TIMER_CTRL_5_LANE	=	0x22a8
                    22AC   1525 _MCU_TIMER_CTRL_6_LANE	=	0x22ac
                    22B0   1526 _MCU_TIMER_CTRL_7_LANE	=	0x22b0
                    22B4   1527 _MCU_DEBUG0_LANE	=	0x22b4
                    22B8   1528 _MCU_DEBUG1_LANE	=	0x22b8
                    22BC   1529 _MCU_DEBUG2_LANE	=	0x22bc
                    22C0   1530 _MCU_DEBUG3_LANE	=	0x22c0
                    22C4   1531 _MCU_DEBUG_LANE	=	0x22c4
                    22C8   1532 _EXT_INT_CONTROL	=	0x22c8
                    22CC   1533 _ANA_IF_TRX_REG0	=	0x22cc
                    22D0   1534 _ANA_IF_DFEE_REG0	=	0x22d0
                    22D4   1535 _ANA_IF_DFEO_REG0	=	0x22d4
                    22D8   1536 _MCU_IRQ_ISR_LANE	=	0x22d8
                    22DC   1537 _MCU_WDT_LANE	=	0x22dc
                    22E0   1538 _MCU_INT_CONTROL_13	=	0x22e0
                    22E4   1539 _MCU_COMMAND0	=	0x22e4
                    22F4   1540 _MEM_ECC_ERR_ADDRESS0	=	0x22f4
                    22F8   1541 _XDATA_MEM_CHECKSUM_LANE0	=	0x22f8
                    22FC   1542 _XDATA_MEM_CHECKSUM_LANE1	=	0x22fc
                    2300   1543 _PT_CONTROL0	=	0x2300
                    2304   1544 _PT_CONTROL1	=	0x2304
                    2308   1545 _PT_USER_PATTERN0	=	0x2308
                    230C   1546 _PT_USER_PATTERN1	=	0x230c
                    2310   1547 _PT_USER_PATTERN2	=	0x2310
                    2314   1548 _PT_COUNTER0	=	0x2314
                    2318   1549 _PT_COUNTER1	=	0x2318
                    231C   1550 _PT_COUNTER2	=	0x231c
                    2400   1551 _DFE_CTRL_REG0	=	0x2400
                    2404   1552 _DFE_CTRL_REG1	=	0x2404
                    2408   1553 _DFE_CTRL_REG2	=	0x2408
                    240C   1554 _DFE_CTRL_REG3	=	0x240c
                    2410   1555 _RX_EQ_CLK_CTRL	=	0x2410
                    2414   1556 _DFE_CTRL_REG4	=	0x2414
                    2418   1557 _DFE_ANA_REG0	=	0x2418
                    241C   1558 _DFE_ANA_REG1	=	0x241c
                    2420   1559 _DFE_STEP_REG0	=	0x2420
                    2424   1560 _DFE_STEP_REG1	=	0x2424
                    2430   1561 _DFE_FEN_EVEN_REG	=	0x2430
                    2434   1562 _DFE_FEN_ODD_REG	=	0x2434
                    2438   1563 _DFE_DC_EVEN_REG8	=	0x2438
                    243C   1564 _DFE_DC_ODD_REG8	=	0x243c
                    2440   1565 _DFE_FEXT_EVEN_REG0	=	0x2440
                    2444   1566 _DFE_FEXT_EVEN_REG1	=	0x2444
                    2448   1567 _DFE_FEXT_EVEN_REG2	=	0x2448
                    244C   1568 _DFE_FEXT_EVEN_REG3	=	0x244c
                    2450   1569 _DFE_FEXT_EVEN_REG4	=	0x2450
                    2454   1570 _DFE_FEXT_EVEN_REG5	=	0x2454
                    2458   1571 _DFE_FEXT_EVEN_REG6	=	0x2458
                    245C   1572 _DFE_FEXT_EVEN_REG7	=	0x245c
                    2460   1573 _DFE_FEXT_ODD_REG0	=	0x2460
                    2464   1574 _DFE_FEXT_ODD_REG1	=	0x2464
                    2468   1575 _DFE_FEXT_ODD_REG2	=	0x2468
                    246C   1576 _DFE_FEXT_ODD_REG3	=	0x246c
                    2470   1577 _DFE_FEXT_ODD_REG4	=	0x2470
                    2474   1578 _DFE_FEXT_ODD_REG5	=	0x2474
                    2478   1579 _DFE_FEXT_ODD_REG6	=	0x2478
                    247C   1580 _DFE_FEXT_ODD_REG7	=	0x247c
                    2480   1581 _DFE_READ_EVEN_SM_REG0	=	0x2480
                    2484   1582 _DFE_READ_EVEN_SM_REG1	=	0x2484
                    2488   1583 _DFE_READ_EVEN_SM_REG2	=	0x2488
                    248C   1584 _DFE_READ_EVEN_SM_REG3	=	0x248c
                    2490   1585 _DFE_READ_EVEN_SM_REG4	=	0x2490
                    2494   1586 _DFE_READ_EVEN_SM_REG5	=	0x2494
                    2498   1587 _DFE_READ_EVEN_SM_REG6	=	0x2498
                    249C   1588 _DFE_READ_EVEN_SM_REG7	=	0x249c
                    24A0   1589 _DFE_READ_ODD_SM_REG0	=	0x24a0
                    24A4   1590 _DFE_READ_ODD_SM_REG1	=	0x24a4
                    24A8   1591 _DFE_READ_ODD_SM_REG2	=	0x24a8
                    24AC   1592 _DFE_READ_ODD_SM_REG3	=	0x24ac
                    24B0   1593 _DFE_READ_ODD_SM_REG4	=	0x24b0
                    24B4   1594 _DFE_READ_ODD_SM_REG5	=	0x24b4
                    24B8   1595 _DFE_READ_ODD_SM_REG6	=	0x24b8
                    24BC   1596 _DFE_READ_ODD_SM_REG7	=	0x24bc
                    24C0   1597 _DFE_READ_EVEN_SM_REG8	=	0x24c0
                    24C4   1598 _DFE_READ_ODD_SM_REG8	=	0x24c4
                    24D0   1599 _DFE_READ_EVEN_2C_REG0	=	0x24d0
                    24D4   1600 _DFE_READ_EVEN_2C_REG1	=	0x24d4
                    24D8   1601 _DFE_READ_EVEN_2C_REG2	=	0x24d8
                    24DC   1602 _DFE_READ_EVEN_2C_REG3	=	0x24dc
                    24E0   1603 _DFE_READ_EVEN_2C_REG4	=	0x24e0
                    24E4   1604 _DFE_READ_EVEN_2C_REG5	=	0x24e4
                    24E8   1605 _DFE_READ_EVEN_2C_REG6	=	0x24e8
                    24EC   1606 _DFE_READ_EVEN_2C_REG7	=	0x24ec
                    24F0   1607 _DFE_READ_ODD_2C_REG0	=	0x24f0
                    24F4   1608 _DFE_READ_ODD_2C_REG1	=	0x24f4
                    24F8   1609 _DFE_READ_ODD_2C_REG2	=	0x24f8
                    24FC   1610 _DFE_READ_ODD_2C_REG3	=	0x24fc
                    2500   1611 _DFE_READ_ODD_2C_REG4	=	0x2500
                    2504   1612 _DFE_READ_ODD_2C_REG5	=	0x2504
                    2508   1613 _DFE_READ_ODD_2C_REG6	=	0x2508
                    250C   1614 _DFE_READ_ODD_2C_REG7	=	0x250c
                    2510   1615 _DFE_READ_EVEN_2C_REG8	=	0x2510
                    2514   1616 _DFE_READ_ODD_2C_REG8	=	0x2514
                    2518   1617 _CAL_OFST_REG0	=	0x2518
                    251C   1618 _CAL_OFST_REG1	=	0x251c
                    2520   1619 _CAL_OFST_REG2	=	0x2520
                    2530   1620 _DFE_DCE_REG0	=	0x2530
                    2540   1621 _DFE_STATIC_LANE_REG0	=	0x2540
                    2544   1622 _DFE_STATIC_LANE_REG1	=	0x2544
                    2548   1623 _DFE_STATIC_LANE_REG3	=	0x2548
                    254C   1624 _DFE_STATIC_LANE_REG4	=	0x254c
                    2550   1625 _DFE_STATIC_LANE_REG5	=	0x2550
                    2554   1626 _DFE_STATIC_LANE_REG6	=	0x2554
                    2560   1627 _EOM_VLD_REG0	=	0x2560
                    2564   1628 _EOM_VLD_REG1	=	0x2564
                    2568   1629 _EOM_VLD_REG2	=	0x2568
                    256C   1630 _EOM_VLD_REG3	=	0x256c
                    2570   1631 _EOM_ERR_REG0	=	0x2570
                    2574   1632 _EOM_ERR_REG1	=	0x2574
                    2578   1633 _EOM_ERR_REG2	=	0x2578
                    257C   1634 _EOM_ERR_REG3	=	0x257c
                    2580   1635 _EOM_REG0	=	0x2580
                    25F0   1636 _EOM_VLD_REG4	=	0x25f0
                    25F4   1637 _LANE_MARGIN_REG0	=	0x25f4
                    6000   1638 _CAL_CTRL1_LANE	=	0x6000
                    6004   1639 _CAL_CTRL2_LANE	=	0x6004
                    6008   1640 _CAL_CTRL3_LANE	=	0x6008
                    600C   1641 _CAL_CTRL4_LANE	=	0x600c
                    6010   1642 _CAL_SAVE_DATA1_LANE	=	0x6010
                    6014   1643 _CAL_SAVE_DATA2_LANE	=	0x6014
                    6018   1644 _CAL_SAVE_DATA3_LANE	=	0x6018
                    601C   1645 _PHY_REMOTE_CTRL_COMMAND_LANE	=	0x601c
                    6020   1646 _PHY_REMOTE_CTRL_VALUE_LANE	=	0x6020
                    6024   1647 _PHY_LOCAL_VALUE_LANE	=	0x6024
                    6028   1648 _TRX_TRAIN_IF_TIMERS1_LANE	=	0x6028
                    602C   1649 _TRX_TRAIN_IF_TIMERS2_LANE	=	0x602c
                    6030   1650 _TRX_TRAIN_IF_TIMERS_ENABLE_LANE	=	0x6030
                    6034   1651 _DFE_CONTROL_0	=	0x6034
                    6038   1652 _DFE_CONTROL_1	=	0x6038
                    6040   1653 _DFE_CONTROL_2	=	0x6040
                    6044   1654 _DFE_CONTROL_3	=	0x6044
                    6048   1655 _DFE_CONTROL_4	=	0x6048
                    604C   1656 _DFE_CONTROL_5	=	0x604c
                    6050   1657 _TRAIN_CONTROL_0	=	0x6050
                    6054   1658 _TRAIN_CONTROL_1	=	0x6054
                    6058   1659 _TRAIN_CONTROL_2	=	0x6058
                    605C   1660 _RPTA_CONFIG_0	=	0x605c
                    6060   1661 _RPTA_CONFIG_1	=	0x6060
                    6064   1662 _DLL_CAL	=	0x6064
                    6068   1663 _TRAIN_PARA_0	=	0x6068
                    606C   1664 _TRAIN_PARA_1	=	0x606c
                    6070   1665 _TRAIN_PARA_2	=	0x6070
                    6074   1666 _TRAIN_PARA_3	=	0x6074
                    6078   1667 _DFE_CONTROL_6	=	0x6078
                    607C   1668 _DFE_TEST_0	=	0x607c
                    6080   1669 _DFE_TEST_1	=	0x6080
                    6084   1670 _DFE_TEST_4	=	0x6084
                    6088   1671 _DFE_TEST_5	=	0x6088
                    608C   1672 _DFE_CONTROL_7	=	0x608c
                    6090   1673 _DFE_CONTROL_8	=	0x6090
                    6094   1674 _DFE_CONTROL_9	=	0x6094
                    6098   1675 _DFE_CONTROL_10	=	0x6098
                    609C   1676 _DFE_CONTROL_11	=	0x609c
                    60A0   1677 _CDS_CTRL_REG0	=	0x60a0
                    60A4   1678 _CDS_CTRL_REG1	=	0x60a4
                    60A8   1679 _ESM_POP_P_CNT_LOW_LANE	=	0x60a8
                    60AC   1680 _ESM_ERR_P_CNT_LOW_LANE	=	0x60ac
                    60B0   1681 _ESM_ERR_POP_CNT_HIGH_LANE	=	0x60b0
                    60B4   1682 _TRAIN_CONTROL_3	=	0x60b4
                    60B8   1683 _TRAIN_CONTROL_4	=	0x60b8
                    60BC   1684 _TRAIN_CONTROL_5	=	0x60bc
                    60C0   1685 _TRAIN_CONTROL_6	=	0x60c0
                    60C4   1686 _TRAIN_CONTROL_7	=	0x60c4
                    60C8   1687 _TRAIN_CONTROL_8	=	0x60c8
                    60CC   1688 _TRAIN_CONTROL_9	=	0x60cc
                    60D0   1689 _TRAIN_CONTROL_10	=	0x60d0
                    60D4   1690 _TRAIN_CONTROL_11	=	0x60d4
                    60D8   1691 _TRAIN_CONTROL_12	=	0x60d8
                    60DC   1692 _ESM_POP_N_CNT_LOW_LANE	=	0x60dc
                    60E0   1693 _ESM_ERR_N_CNT_LOW_LANE	=	0x60e0
                    60E4   1694 _TRAIN_CONTROL_13	=	0x60e4
                    60E8   1695 _TRAIN_CONTROL_14	=	0x60e8
                    60EC   1696 _TRAIN_CONTROL_15	=	0x60ec
                    60F0   1697 _TRAIN_CONTROL_16	=	0x60f0
                    60F4   1698 _TRAIN_CONTROL_17	=	0x60f4
                    60F8   1699 _END_XDAT_LANE	=	0x60f8
                    A000   1700 _TX_CMN_REG	=	0xa000
                    A008   1701 _DTX_REG0	=	0xa008
                    A00C   1702 _DTX_REG1	=	0xa00c
                    A010   1703 _DTX_REG2	=	0xa010
                    A014   1704 _DTX_REG3	=	0xa014
                    A018   1705 _DTX_REG4	=	0xa018
                    A01C   1706 _DTX_PHY_ALIGN_REG0	=	0xa01c
                    A024   1707 _DTX_PHY_ALIGN_REG1	=	0xa024
                    A028   1708 _DTX_PHY_ALIGN_REG2	=	0xa028
                    A02C   1709 _SRIS_REG0	=	0xa02c
                    A030   1710 _SRIS_REG1	=	0xa030
                    A100   1711 _RX_CMN_0	=	0xa100
                    A110   1712 _DFE_STATIC_REG0	=	0xa110
                    A114   1713 _DFE_STATIC_REG1	=	0xa114
                    A118   1714 _DFE_STATIC_REG3	=	0xa118
                    A11C   1715 _DFE_STATIC_REG4	=	0xa11c
                    A120   1716 _DFE_STATIC_REG5	=	0xa120
                    A124   1717 _DFE_STATIC_REG6	=	0xa124
                    4200   1718 _GLOB_RST_CLK_CTRL	=	0x4200
                    4204   1719 _GLOB_CLK_SRC_LO	=	0x4204
                    4208   1720 _GLOB_CLK_SRC_HI	=	0x4208
                    420C   1721 _GLOB_MISC_CTRL	=	0x420c
                    4210   1722 _GLOB_DP_SAL_CFG	=	0x4210
                    4214   1723 _GLOB_DP_SAL_CFG1	=	0x4214
                    4218   1724 _GLOB_DP_SAL_CFG3	=	0x4218
                    421C   1725 _GLOB_DP_SAL_CFG5	=	0x421c
                    4220   1726 _GLOB_PM_CFG0	=	0x4220
                    4224   1727 _GLOB_COUNTER_CTRL	=	0x4224
                    4228   1728 _GLOB_COUNTER_HI	=	0x4228
                    422C   1729 _GLOB_PM_DP_CTRL	=	0x422c
                    4230   1730 _GLOB_DP_BAL_CFG0	=	0x4230
                    4234   1731 _GLOB_DP_BAL_CFG2	=	0x4234
                    4238   1732 _GLOB_DP_BAL_CFG4	=	0x4238
                    423C   1733 _GLOB_BIST_CTRL	=	0x423c
                    4240   1734 _GLOB_BIST_LANE_TYPE	=	0x4240
                    4244   1735 _GLOB_BIST_START	=	0x4244
                    4248   1736 _GLOB_BIST_MASK	=	0x4248
                    424C   1737 _GLOB_BIST_RESULT	=	0x424c
                    4250   1738 _GLOB_BIST_SEQR_CFG	=	0x4250
                    4254   1739 _GLOB_BIST_DATA_HI	=	0x4254
                    4258   1740 _GLOB_PIPE_REVISION	=	0x4258
                    425C   1741 _GLOB_L1_SUBSTATES_CFG	=	0x425c
                    A200   1742 _MCU_CONTROL_0	=	0xa200
                    A204   1743 _MCU_CONTROL_1	=	0xa204
                    A208   1744 _MCU_CONTROL_2	=	0xa208
                    A20C   1745 _MCU_CONTROL_3	=	0xa20c
                    A210   1746 _MCU_CONTROL_4	=	0xa210
                    A214   1747 _MCU_DEBUG0	=	0xa214
                    A218   1748 _MCU_DEBUG1	=	0xa218
                    A21C   1749 _MEMORY_CONTROL_0	=	0xa21c
                    A220   1750 _MEMORY_CONTROL_1	=	0xa220
                    A224   1751 _MEMORY_CONTROL_2	=	0xa224
                    A228   1752 _MEMORY_CONTROL_3	=	0xa228
                    A22C   1753 _MEMORY_CONTROL_4	=	0xa22c
                    A234   1754 _MCU_INFO_0	=	0xa234
                    A238   1755 _MCU_INFO_1	=	0xa238
                    A23C   1756 _MCU_INFO_2	=	0xa23c
                    A240   1757 _MCU_INFO_3	=	0xa240
                    A244   1758 _MEM_CMN_ECC_ERR_ADDRESS0	=	0xa244
                    A2E0   1759 _ANA_IF_CMN_REG1	=	0xa2e0
                    A2E4   1760 _MEM_IRQ	=	0xa2e4
                    A2E8   1761 _MEM_IRQ_MASK	=	0xa2e8
                    A2EC   1762 _ANA_IF_CMN_REG0	=	0xa2ec
                    A2F0   1763 _APB_CONTROL_REG	=	0xa2f0
                    A2F4   1764 _MEM_IRQ_CLEAR	=	0xa2f4
                    A2F8   1765 _MCU_SYNC1	=	0xa2f8
                    A2FC   1766 _MCU_SYNC2	=	0xa2fc
                    A300   1767 _TEST0	=	0xa300
                    A304   1768 _TEST1	=	0xa304
                    A308   1769 _TEST2	=	0xa308
                    A30C   1770 _TEST3	=	0xa30c
                    A310   1771 _TEST4	=	0xa310
                    A314   1772 _SYSTEM	=	0xa314
                    A318   1773 _PM_CMN_REG1	=	0xa318
                    A31C   1774 _INPUT_CMN_PIN_REG0	=	0xa31c
                    A320   1775 _INPUT_CMN_PIN_REG1	=	0xa320
                    A324   1776 _INPUT_CMN_PIN_REG2	=	0xa324
                    A328   1777 _ANA_TSEN_CONTROL	=	0xa328
                    A32C   1778 _PLLCAL_REG0	=	0xa32c
                    A330   1779 _PLLCAL_REG1	=	0xa330
                    A334   1780 _CLKGEN_CMN_REG1	=	0xa334
                    A338   1781 _SPD_CMN_REG1	=	0xa338
                    A33C   1782 _OUTPUT_CMN_PIN_REG0	=	0xa33c
                    A340   1783 _CMN_CALIBRATION	=	0xa340
                    A344   1784 __FIELDNAME_	=	0xa344
                    A348   1785 _INPUT_CMN_PIN_REG3	=	0xa348
                    A34C   1786 _PM_CMN_REG2	=	0xa34c
                    A354   1787 _TEST5	=	0xa354
                    A358   1788 _XDATA_MEM_CHECKSUM_CMN_0	=	0xa358
                    A35C   1789 _XDATA_MEM_CHECKSUM_CMN_1	=	0xa35c
                    A360   1790 _XDATA_MEM_CHECKSUM_CMN_2	=	0xa360
                    A364   1791 _MCU_SDT_CMN	=	0xa364
                    A368   1792 _CMN_CACHE_DEBUG0	=	0xa368
                    A36C   1793 _MCU_INT_ADDR	=	0xa36c
                    A370   1794 _CMN_ISR_2	=	0xa370
                    A374   1795 _CMN_ISR_MASK_2	=	0xa374
                    A378   1796 _CMN_ISR_CLEAR_2	=	0xa378
                    A37C   1797 _CMN_MCU_GPIO	=	0xa37c
                    A380   1798 _CMN_CACHE_DEBUG1	=	0xa380
                    A384   1799 _CMN_MCU_TIMER_CONTROL	=	0xa384
                    A388   1800 _CMN_MCU_TIMER_CTRL_2_LANE	=	0xa388
                    A38C   1801 _CMN_MCU_TIMER_CTRL_3_LANE	=	0xa38c
                    A390   1802 _CMN_MCU_TIMER_CTRL_4_LANE	=	0xa390
                    A394   1803 _CMN_MCU_TIMER_CTRL_5_LANE	=	0xa394
                    A398   1804 _CMN_MCU_TIMER0_CONTROL	=	0xa398
                    A39C   1805 _CMN_MCU_TIMER1_CONTROL	=	0xa39c
                    A3A0   1806 _CMN_MCU_TIMER2_CONTROL	=	0xa3a0
                    A3A4   1807 _CMN_MCU_TIMER3_CONTROL	=	0xa3a4
                    A3A8   1808 _CMN_ISR_1	=	0xa3a8
                    A3AC   1809 _CMN_ISR_MASK_1	=	0xa3ac
                    A3B0   1810 _SET_LANE_ISR	=	0xa3b0
                    A3F4   1811 _CMN_MCU_REG	=	0xa3f4
                    A3F8   1812 _CID_REG0	=	0xa3f8
                    A3FC   1813 _CID_REG1	=	0xa3fc
                    E600   1814 _FW_REV	=	0xe600
                    E604   1815 _CONTROL_CONFIG0	=	0xe604
                    E608   1816 _CONTROL_CONFIG1	=	0xe608
                    E60C   1817 _CONTROL_CONFIG2	=	0xe60c
                    E610   1818 _CONTROL_CONFIG3	=	0xe610
                    E614   1819 _CONTROL_CONFIG4	=	0xe614
                    E618   1820 _CONTROL_CONFIG5	=	0xe618
                    E61C   1821 _CONTROL_CONFIG6	=	0xe61c
                    E620   1822 _CONTROL_CONFIG7	=	0xe620
                    E624   1823 _CAL_DATA0	=	0xe624
                    E628   1824 _TRAIN_IF_CONFIG	=	0xe628
                    E62C   1825 _CONTROL_CONFIG8	=	0xe62c
                    E630   1826 _CONTROL_CONFIG9	=	0xe630
                    E634   1827 _CON_CAL_STEP_SIZE1	=	0xe634
                    E638   1828 _CON_CAL_STEP_SIZE2	=	0xe638
                    E63C   1829 _CON_CAL_STEP_SIZE3	=	0xe63c
                    E640   1830 _CON_CAL_STEP_SIZE4	=	0xe640
                    E644   1831 _CON_CAL_STEP_SIZE5	=	0xe644
                    E648   1832 _CAL_TIME_OUT_AND_DIS	=	0xe648
                    E64C   1833 _CAL_STATUS_READ	=	0xe64c
                    E650   1834 _MCU_CONFIG	=	0xe650
                    E654   1835 _CAL_DATA1	=	0xe654
                    E658   1836 _LOOP_CNTS	=	0xe658
                    E65C   1837 _MCU_CONFIG1	=	0xe65c
                    E660   1838 _TIMER_SEL1	=	0xe660
                    E664   1839 _TIMER_SEL2	=	0xe664
                    E668   1840 _TIMER_SEL3	=	0xe668
                    E66C   1841 _G_SELLV_TXCLK	=	0xe66c
                    E670   1842 _G_SELLV_TXDATA	=	0xe670
                    E674   1843 _G_SELLV_TXPRE	=	0xe674
                    E678   1844 _G_SELLV_RXEOMCLK	=	0xe678
                    E67C   1845 _G_SELLV_RXDATACLK	=	0xe67c
                    E680   1846 _G_SELLV_RXSAMPLER	=	0xe680
                    E684   1847 _SAS_PRESET0_TB	=	0xe684
                    E688   1848 _SAS_PRESET1_TB	=	0xe688
                    E68C   1849 _SAS_PRESET2_TB	=	0xe68c
                    E690   1850 _ETH_PRESET0_TB	=	0xe690
                    E694   1851 _ETH_PRESET1_TB	=	0xe694
                    E698   1852 _TX_SAVE_0	=	0xe698
                    E69C   1853 _TX_SAVE_1	=	0xe69c
                    E6A0   1854 _TX_SAVE_2	=	0xe6a0
                    E6A4   1855 _TX_SAVE_3	=	0xe6a4
                    E6A8   1856 _TX_SAVE_4	=	0xe6a8
                    E6AC   1857 _CDS_EYE_CLK_THR	=	0xe6ac
                    E6B0   1858 _SYNC_INFO	=	0xe6b0
                    E6B4   1859 _MCU_INFO_4	=	0xe6b4
                    E6B8   1860 _MCU_INFO_5	=	0xe6b8
                    E6BC   1861 _MCU_INFO_12	=	0xe6bc
                    E6C0   1862 _MCU_INFO_13	=	0xe6c0
                    E6C4   1863 _END_XDAT_CMN	=	0xe6c4
                    2600   1864 _DME_ENC_REG0	=	0x2600
                    2604   1865 _DME_ENC_REG1	=	0x2604
                    2608   1866 _DME_ENC_REG2	=	0x2608
                    260C   1867 _DME_DEC_REG0	=	0x260c
                    2610   1868 _DME_DEC_REG1	=	0x2610
                    2614   1869 _TX_TRAIN_IF_REG0	=	0x2614
                    2618   1870 _TX_TRAIN_IF_REG1	=	0x2618
                    261C   1871 _TX_TRAIN_IF_REG2	=	0x261c
                    2620   1872 _TX_TRAIN_IF_REG3	=	0x2620
                    2624   1873 _TX_TRAIN_PATTTERN_REG0	=	0x2624
                    2628   1874 _TX_TRAIN_DRIVER_REG0	=	0x2628
                    262C   1875 _TX_TRAIN_DRIVER_REG1	=	0x262c
                    2630   1876 _TX_TRAIN_DRIVER_REG2	=	0x2630
                    2634   1877 _TX_TRAIN_DEFAULT_REG0	=	0x2634
                    2638   1878 _TX_TRAIN_DEFAULT_REG1	=	0x2638
                    263C   1879 _TX_TRAIN_DEFAULT_REG2	=	0x263c
                    2640   1880 _TX_TRAIN_DEFAULT_REG3	=	0x2640
                    2644   1881 _TX_TRAIN_DEFAULT_REG4	=	0x2644
                    2648   1882 _TX_TRAIN_DEFAULT_REG5	=	0x2648
                    264C   1883 _TX_EMPH_CTRL_REG0	=	0x264c
                    2650   1884 _LINK_TRAIN_MODE0	=	0x2650
                    2654   1885 _TX_DRV_RD_OUT_REG0	=	0x2654
                    2658   1886 _TX_AMP_CTRL_REG0	=	0x2658
                    265C   1887 _TRX_TRAIN_IF_INTERRUPT_LANE	=	0x265c
                    2660   1888 _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE	=	0x2660
                    2664   1889 _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE	=	0x2664
                    2668   1890 _TX_TRAIN_IF_REG4	=	0x2668
                    266C   1891 _TX_TRAIN_IF_REG5	=	0x266c
                    2670   1892 _TX_TRAIN_IF_REG6	=	0x2670
                    2674   1893 _TX_TRAIN_IF_REG7	=	0x2674
                    2678   1894 _TX_TRAIN_CTRL_LANE	=	0x2678
                    267C   1895 _TX_TRAIN_IF_REG8	=	0x267c
                    6100   1896 _DFE_READ_EVEN_REG0	=	0x6100
                    6104   1897 _DFE_READ_EVEN_REG1	=	0x6104
                    6108   1898 _DFE_READ_EVEN_REG2	=	0x6108
                    610C   1899 _DFE_READ_EVEN_REG3	=	0x610c
                    6110   1900 _DFE_READ_EVEN_REG4	=	0x6110
                    6114   1901 _DFE_READ_EVEN_REG5	=	0x6114
                    6118   1902 _DFE_READ_EVEN_REG6	=	0x6118
                    611C   1903 _DFE_READ_EVEN_REG7	=	0x611c
                    6120   1904 _DFE_READ_ODD_REG0	=	0x6120
                    6124   1905 _DFE_READ_ODD_REG1	=	0x6124
                    6128   1906 _DFE_READ_ODD_REG2	=	0x6128
                    612C   1907 _DFE_READ_ODD_REG3	=	0x612c
                    6130   1908 _DFE_READ_ODD_REG4	=	0x6130
                    6134   1909 _DFE_READ_ODD_REG5	=	0x6134
                    6138   1910 _DFE_READ_ODD_REG6	=	0x6138
                    613C   1911 _DFE_READ_ODD_REG7	=	0x613c
                    6140   1912 _DFE_READ_EVEN_REG8	=	0x6140
                    6144   1913 _DFE_READ_ODD_REG8	=	0x6144
                    6148   1914 _DFE_READ_F0A_EVEN	=	0x6148
                    614C   1915 _DFE_READ_F0A_ODD	=	0x614c
                    6150   1916 _DFE_READ_F0B_EVEN	=	0x6150
                    6154   1917 _DFE_READ_F0B_ODD	=	0x6154
                    6158   1918 _DFE_READ_F0D_EVEN	=	0x6158
                    615C   1919 _DFE_READ_F0D_ODD	=	0x615c
                    6160   1920 _DFE_READ_F0D_LEFT_EVEN	=	0x6160
                    6164   1921 _DFE_READ_F0D_LEFT_ODD	=	0x6164
                    6168   1922 _DFE_READ_F0D_RIGHT_EVEN	=	0x6168
                    616C   1923 _DFE_READ_F0D_RIGHT_ODD	=	0x616c
                    6170   1924 _CDS_READ_MISC0	=	0x6170
                    6174   1925 _CDS_READ_MISC1	=	0x6174
                    6214   1926 _TXTRAIN_IF_REG0	=	0x6214
                    E000   1927 _lc_speedtable	=	0xe000
                    E1C0   1928 _ring_speedtable	=	0xe1c0
                    E5C0   1929 _phy_mode_cmn_table	=	0xe5c0
                    6300   1930 _max_gen	=	0x6300
                    6301   1931 _min_gen	=	0x6301
                    6304   1932 _speedtable	=	0x6304
                    65D4   1933 _phy_mode_lane_table	=	0x65d4
                    60B4   1934 _rc_save	=	0x60b4
                    60D0   1935 _txffe_save	=	0x60d0
                    60E4   1936 _phase_save	=	0x60e4
                    6030   1937 _train_gn1_index	=	0x6030
                    6031   1938 _train_g1_index	=	0x6031
                    6032   1939 _train_g0_index	=	0x6032
                    E6B0   1940 _local_tx_preset_tb	=	0xe6b0
                    E5C1   1941 _cmx_cal_lcvco_dac	=	0xe5c1
                    E5C1   1942 _cmx_cal_lcvco_dac_lsb	=	0xe5c1
                    E5C4   1943 _cmx_cal_lcvco_dac_msb	=	0xe5c4
                    E5CA   1944 _cmx_cal_lccap_msb	=	0xe5ca
                    E5C8   1945 _cmx_cal_lccap_lsb	=	0xe5c8
                    E5CC   1946 _cmx_cal_plldcc	=	0xe5cc
                    E5D0   1947 _cmx_cal_pll_speed_ring	=	0xe5d0
                    E5D4   1948 _cmx_cal_pll_sllp_dac_coarse_ring	=	0xe5d4
                    E5D8   1949 _cmx_cal_sllp_dac_fine_ring	=	0xe5d8
                    65D4   1950 _lnx_cal_txdcc_pdiv	=	0x65d4
                    65D8   1951 _lnx_cal_txdcc_pdiv_hg	=	0x65d8
                    65DA   1952 _lnx_cal_txdcc	=	0x65da
                    65DE   1953 _lnx_cal_txdcc_hg	=	0x65de
                    65E0   1954 _lnx_cal_rxdcc_dll	=	0x65e0
                    65E4   1955 _lnx_cal_rxdcc_dll_hg	=	0x65e4
                    65E6   1956 _lnx_cal_rxdcc_data	=	0x65e6
                    65F0   1957 _lnx_cal_rxdcc_data_hg	=	0x65f0
                    65F5   1958 _lnx_cal_rxdcc_eom	=	0x65f5
                    65FF   1959 _lnx_cal_rxdcc_eom_hg	=	0x65ff
                    6604   1960 _lnx_cal_dll_gmsel	=	0x6604
                    6606   1961 _lnx_cal_vdda_dll_sel	=	0x6606
                    660A   1962 _lnx_cal_dll_eom_gmsel	=	0x660a
                    660C   1963 _lnx_cal_vdda_dll_eom_sel	=	0x660c
                    6610   1964 _lnx_cal_eom_dpher	=	0x6610
                    6612   1965 _lnx_cal_align90_dummy_clk	=	0x6612
                    661A   1966 _lnx_cal_align90_dac	=	0x661a
                    6622   1967 _lnx_cal_align90_gm	=	0x6622
                    662A   1968 _lnx_cal_sellv_txdata	=	0x662a
                    6634   1969 _lnx_cal_sellv_txclk	=	0x6634
                    663E   1970 _lnx_cal_sellv_rxdataclk	=	0x663e
                    6648   1971 _lnx_cal_sellv_txpre	=	0x6648
                    6652   1972 _lnx_cal_sellv_rxsampler	=	0x6652
                    665C   1973 _lnx_cal_sellv_rxeomclk	=	0x665c
                    6666   1974 _lnx_spdoft_tx_preset_index_lane	=	0x6666
                    6490   1975 _lnx_calx_txdcc_pdiv	=	0x6490
                    6496   1976 _lnx_calx_txdcc_pdiv_hg	=	0x6496
                    6499   1977 _lnx_calx_txdcc	=	0x6499
                    649F   1978 _lnx_calx_txdcc_hg	=	0x649f
                    64A2   1979 _lnx_calx_rxdcc_dll	=	0x64a2
                    64A8   1980 _lnx_calx_rxdcc_dll_hg	=	0x64a8
                    64AB   1981 _lnx_calx_dll_gmsel	=	0x64ab
                    64AE   1982 _lnx_calx_vdda_dll_sel	=	0x64ae
                    64B4   1983 _lnx_calx_dll_eom_gmsel	=	0x64b4
                    64B7   1984 _lnx_calx_vdda_dll_eom_sel	=	0x64b7
                    64BD   1985 _lnx_calx_eom_dpher	=	0x64bd
                    64C0   1986 _lnx_calx_align90_dummy_clk	=	0x64c0
                    64CC   1987 _lnx_calx_align90_dac	=	0x64cc
                    64D8   1988 _lnx_calx_align90_gm	=	0x64d8
                    6100   1989 _cds28	=	0x6100
                    6178   1990 _dfe_sm	=	0x6178
                    61B8   1991 _dfe_sm_dc	=	0x61b8
                    61C0   1992 _dfe_sm_save	=	0x61c0
                    03FC   1993 _UPHY_ANAREG_REV_0	=	0x03fc
                    E684   1994 _tx_tb	=	0xe684
                    E698   1995 _train_save_tb	=	0xe698
                    607C   1996 _sq_thrs_ratio_tb	=	0x607c
                           1997 ;--------------------------------------------------------
                           1998 ; absolute external ram data
                           1999 ;--------------------------------------------------------
                           2000 	.area XABS    (ABS,XDATA)
                           2001 ;--------------------------------------------------------
                           2002 ; external initialized ram data
                           2003 ;--------------------------------------------------------
                           2004 	.area HOME    (CODE)
                           2005 	.area GSINIT0 (CODE)
                           2006 	.area GSINIT1 (CODE)
                           2007 	.area GSINIT2 (CODE)
                           2008 	.area GSINIT3 (CODE)
                           2009 	.area GSINIT4 (CODE)
                           2010 	.area GSINIT5 (CODE)
                           2011 	.area GSINIT  (CODE)
                           2012 	.area GSFINAL (CODE)
                           2013 	.area CSEG    (CODE)
                           2014 ;--------------------------------------------------------
                           2015 ; global & static initialisations
                           2016 ;--------------------------------------------------------
                           2017 	.area HOME    (CODE)
                           2018 	.area GSINIT  (CODE)
                           2019 	.area GSFINAL (CODE)
                           2020 	.area GSINIT  (CODE)
                           2021 ;--------------------------------------------------------
                           2022 ; Home
                           2023 ;--------------------------------------------------------
                           2024 	.area HOME    (CODE)
                           2025 	.area HOME    (CODE)
                           2026 ;--------------------------------------------------------
                           2027 ; code
                           2028 ;--------------------------------------------------------
                           2029 	.area BANK1   (CODE)
                           2030 ;------------------------------------------------------------
                           2031 ;Allocation info for local variables in function 'request_local_status'
                           2032 ;------------------------------------------------------------
                           2033 ;dat                       Allocated to registers r2 r3 
                           2034 ;------------------------------------------------------------
                           2035 ;	../../shared/src/train_if.c:53: void request_local_status(void) BANKING_CTRL
                           2036 ;	-----------------------------------------
                           2037 ;	 function request_local_status
                           2038 ;	-----------------------------------------
   E1C2                    2039 _request_local_status:
                    0002   2040 	ar2 = 0x02
                    0003   2041 	ar3 = 0x03
                    0004   2042 	ar4 = 0x04
                    0005   2043 	ar5 = 0x05
                    0006   2044 	ar6 = 0x06
                    0007   2045 	ar7 = 0x07
                    0000   2046 	ar0 = 0x00
                    0001   2047 	ar1 = 0x01
                           2048 ;	../../shared/src/train_if.c:59: if(phy_mode <= SAS &&  reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE==0) {
   E1C2 90 A3 16           2049 	mov	dptr,#(_SYSTEM + 0x0002)
   E1C5 E0                 2050 	movx	a,@dptr
   E1C6 54 07              2051 	anl	a,#0x07
   E1C8 FA                 2052 	mov	r2,a
   E1C9 C3                 2053 	clr	c
   E1CA 74 81              2054 	mov	a,#(0x01 ^ 0x80)
   E1CC 8A F0              2055 	mov	b,r2
   E1CE 63 F0 80           2056 	xrl	b,#0x80
   E1D1 95 F0              2057 	subb	a,b
   E1D3 40 16              2058 	jc	00104$
   E1D5 90 26 78           2059 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   E1D8 E0                 2060 	movx	a,@dptr
   E1D9 20 E0 0F           2061 	jb	acc.0,00104$
                           2062 ;	../../shared/src/train_if.c:60: if(remote_error_check()!=_EXIT_SUCCESS) return;
   E1DC 78 40              2063 	mov	r0,#_remote_error_check
   E1DE 79 E2              2064 	mov	r1,#(_remote_error_check >> 8)
   E1E0 7A 01              2065 	mov	r2,#(_remote_error_check >> 16)
   E1E2 12 00 B3           2066 	lcall	__sdcc_banked_call
   E1E5 E5 82              2067 	mov	a,dpl
   E1E7 60 02              2068 	jz	00104$
   E1E9 80 52              2069 	sjmp	00114$
   E1EB                    2070 00104$:
                           2071 ;	../../shared/src/train_if.c:64: dat = reg_LOCAL_STATUS_FIELD_LANE_15_0;
   E1EB 90 26 04           2072 	mov	dptr,#_DME_ENC_REG1
   E1EE E0                 2073 	movx	a,@dptr
   E1EF FA                 2074 	mov	r2,a
   E1F0 A3                 2075 	inc	dptr
   E1F1 E0                 2076 	movx	a,@dptr
   E1F2 FB                 2077 	mov	r3,a
                           2078 ;	../../shared/src/train_if.c:65: dat &= 0x3fff;
   E1F3 53 03 3F           2079 	anl	ar3,#0x3F
                           2080 ;	../../shared/src/train_if.c:66: if(link_train_mode==0) {
   E1F6 90 26 7B           2081 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   E1F9 E0                 2082 	movx	a,@dptr
   E1FA 20 E7 29           2083 	jb	acc.7,00113$
                           2084 ;	../../shared/src/train_if.c:67: if( train_comp ) 
   E1FD 90 67 11           2085 	mov	dptr,#_train_comp
   E200 E0                 2086 	movx	a,@dptr
   E201 FC                 2087 	mov	r4,a
   E202 60 05              2088 	jz	00110$
                           2089 ;	../../shared/src/train_if.c:68: dat |= 0x8000;
   E204 43 03 80           2090 	orl	ar3,#0x80
   E207 80 1D              2091 	sjmp	00113$
   E209                    2092 00110$:
                           2093 ;	../../shared/src/train_if.c:69: else if( tx_init_bit && phy_mode <= SAS)
   E209 90 67 10           2094 	mov	dptr,#_tx_init_bit
   E20C E0                 2095 	movx	a,@dptr
   E20D FC                 2096 	mov	r4,a
   E20E 60 16              2097 	jz	00113$
   E210 90 A3 16           2098 	mov	dptr,#(_SYSTEM + 0x0002)
   E213 E0                 2099 	movx	a,@dptr
   E214 54 07              2100 	anl	a,#0x07
   E216 FC                 2101 	mov	r4,a
   E217 C3                 2102 	clr	c
   E218 74 81              2103 	mov	a,#(0x01 ^ 0x80)
   E21A 8C F0              2104 	mov	b,r4
   E21C 63 F0 80           2105 	xrl	b,#0x80
   E21F 95 F0              2106 	subb	a,b
   E221 40 03              2107 	jc	00113$
                           2108 ;	../../shared/src/train_if.c:70: dat |= 0x4000;
   E223 43 03 40           2109 	orl	ar3,#0x40
   E226                    2110 00113$:
                           2111 ;	../../shared/src/train_if.c:73: EA = 0;
   E226 C2 AF              2112 	clr	_EA
                           2113 ;	../../shared/src/train_if.c:74: reg_LOCAL_STATUS_FIELD_LANE_15_0 = dat;
   E228 90 26 04           2114 	mov	dptr,#_DME_ENC_REG1
   E22B EA                 2115 	mov	a,r2
   E22C F0                 2116 	movx	@dptr,a
   E22D A3                 2117 	inc	dptr
   E22E EB                 2118 	mov	a,r3
   E22F F0                 2119 	movx	@dptr,a
                           2120 ;	../../shared/src/train_if.c:75: reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; 
                           2121 ;	../../shared/src/train_if.c:76: reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
   E230 90 26 7A           2122 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   E233 E0                 2123 	movx	a,@dptr
   E234 44 20              2124 	orl	a,#0x20
   E236 F0                 2125 	movx	@dptr,a
   E237 E0                 2126 	movx	a,@dptr
   E238 54 DF              2127 	anl	a,#0xdf
   E23A F0                 2128 	movx	@dptr,a
                           2129 ;	../../shared/src/train_if.c:77: EA = 1;
   E23B D2 AF              2130 	setb	_EA
   E23D                    2131 00114$:
   E23D 02 00 C5           2132 	ljmp	__sdcc_banked_ret
                           2133 ;------------------------------------------------------------
                           2134 ;Allocation info for local variables in function 'remote_error_check'
                           2135 ;------------------------------------------------------------
                           2136 ;ce                        Allocated to registers r7 
                           2137 ;error_code                Allocated to registers r2 
                           2138 ;remote_ctrl_16            Allocated to registers r3 r4 
                           2139 ;remote_status_16          Allocated to stack - offset 1
                           2140 ;remote_control_bits_hi    Allocated to registers r5 
                           2141 ;remote_control_bits_lo    Allocated to registers r6 
                           2142 ;------------------------------------------------------------
                           2143 ;	../../shared/src/train_if.c:81: uint8_t remote_error_check(void) BANKING_CTRL {
                           2144 ;	-----------------------------------------
                           2145 ;	 function remote_error_check
                           2146 ;	-----------------------------------------
   E240                    2147 _remote_error_check:
   E240 C0 18              2148 	push	_bp
   E242 85 81 18           2149 	mov	_bp,sp
   E245 05 81              2150 	inc	sp
   E247 05 81              2151 	inc	sp
                           2152 ;	../../shared/src/train_if.c:86: error_code = _EXIT_SUCCESS;
   E249 7A 00              2153 	mov	r2,#0x00
                           2154 ;	../../shared/src/train_if.c:90: EA = 0;
   E24B C2 AF              2155 	clr	_EA
                           2156 ;	../../shared/src/train_if.c:91: remote_ctrl_16 = device_remote_control_bits;
   E24D 90 26 72           2157 	mov	dptr,#(_TX_TRAIN_IF_REG6 + 0x0002)
   E250 E0                 2158 	movx	a,@dptr
   E251 FB                 2159 	mov	r3,a
   E252 A3                 2160 	inc	dptr
   E253 E0                 2161 	movx	a,@dptr
   E254 FC                 2162 	mov	r4,a
                           2163 ;	../../shared/src/train_if.c:92: remote_status_16 = device_remote_status_bits;
   E255 90 26 70           2164 	mov	dptr,#_TX_TRAIN_IF_REG6
   E258 E0                 2165 	movx	a,@dptr
   E259 FD                 2166 	mov	r5,a
   E25A A3                 2167 	inc	dptr
   E25B E0                 2168 	movx	a,@dptr
   E25C FE                 2169 	mov	r6,a
   E25D A8 18              2170 	mov	r0,_bp
   E25F 08                 2171 	inc	r0
   E260 A6 05              2172 	mov	@r0,ar5
   E262 08                 2173 	inc	r0
   E263 A6 06              2174 	mov	@r0,ar6
                           2175 ;	../../shared/src/train_if.c:93: EA =1;
   E265 D2 AF              2176 	setb	_EA
                           2177 ;	../../shared/src/train_if.c:95: if( remote_ctrl_16 != device_remote_control_bits || remote_status_16 != device_remote_status_bits) {
   E267 90 26 72           2178 	mov	dptr,#(_TX_TRAIN_IF_REG6 + 0x0002)
   E26A E0                 2179 	movx	a,@dptr
   E26B FF                 2180 	mov	r7,a
   E26C A3                 2181 	inc	dptr
   E26D E0                 2182 	movx	a,@dptr
   E26E FD                 2183 	mov	r5,a
   E26F EB                 2184 	mov	a,r3
   E270 B5 07 1A           2185 	cjne	a,ar7,00103$
   E273 EC                 2186 	mov	a,r4
   E274 B5 05 16           2187 	cjne	a,ar5,00103$
   E277 90 26 70           2188 	mov	dptr,#_TX_TRAIN_IF_REG6
   E27A E0                 2189 	movx	a,@dptr
   E27B FD                 2190 	mov	r5,a
   E27C A3                 2191 	inc	dptr
   E27D E0                 2192 	movx	a,@dptr
   E27E FE                 2193 	mov	r6,a
   E27F A8 18              2194 	mov	r0,_bp
   E281 08                 2195 	inc	r0
   E282 E6                 2196 	mov	a,@r0
   E283 B5 05 07           2197 	cjne	a,ar5,00157$
   E286 08                 2198 	inc	r0
   E287 E6                 2199 	mov	a,@r0
   E288 B5 06 02           2200 	cjne	a,ar6,00157$
   E28B 80 32              2201 	sjmp	00104$
   E28D                    2202 00157$:
   E28D                    2203 00103$:
                           2204 ;	../../shared/src/train_if.c:96: if(reg_REMOTE_STATUS_VALID_ISR_LANE) {
   E28D 90 26 5D           2205 	mov	dptr,#(_TRX_TRAIN_IF_INTERRUPT_LANE + 0x0001)
   E290 E0                 2206 	movx	a,@dptr
   E291 30 E0 0B           2207 	jnb	acc.0,00102$
                           2208 ;	../../shared/src/train_if.c:97: reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 1;
                           2209 ;	../../shared/src/train_if.c:98: reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 0;
   E294 90 26 65           2210 	mov	dptr,#(_TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE + 0x0001)
   E297 E0                 2211 	movx	a,@dptr
   E298 44 01              2212 	orl	a,#0x01
   E29A F0                 2213 	movx	@dptr,a
   E29B E0                 2214 	movx	a,@dptr
   E29C 54 FE              2215 	anl	a,#0xfe
   E29E F0                 2216 	movx	@dptr,a
   E29F                    2217 00102$:
                           2218 ;	../../shared/src/train_if.c:101: EA = 0;
   E29F C2 AF              2219 	clr	_EA
                           2220 ;	../../shared/src/train_if.c:102: remote_ctrl_16 = device_remote_control_bits;
   E2A1 90 26 72           2221 	mov	dptr,#(_TX_TRAIN_IF_REG6 + 0x0002)
   E2A4 E0                 2222 	movx	a,@dptr
   E2A5 FD                 2223 	mov	r5,a
   E2A6 A3                 2224 	inc	dptr
   E2A7 E0                 2225 	movx	a,@dptr
   E2A8 FE                 2226 	mov	r6,a
   E2A9 8D 03              2227 	mov	ar3,r5
   E2AB 8E 04              2228 	mov	ar4,r6
                           2229 ;	../../shared/src/train_if.c:103: remote_status_16 = device_remote_status_bits;
   E2AD 90 26 70           2230 	mov	dptr,#_TX_TRAIN_IF_REG6
   E2B0 E0                 2231 	movx	a,@dptr
   E2B1 FD                 2232 	mov	r5,a
   E2B2 A3                 2233 	inc	dptr
   E2B3 E0                 2234 	movx	a,@dptr
   E2B4 FE                 2235 	mov	r6,a
   E2B5 A8 18              2236 	mov	r0,_bp
   E2B7 08                 2237 	inc	r0
   E2B8 A6 05              2238 	mov	@r0,ar5
   E2BA 08                 2239 	inc	r0
   E2BB A6 06              2240 	mov	@r0,ar6
                           2241 ;	../../shared/src/train_if.c:104: EA = 1;
   E2BD D2 AF              2242 	setb	_EA
   E2BF                    2243 00104$:
                           2244 ;	../../shared/src/train_if.c:107: remote_control_bits_hi = (uint8_t)(remote_ctrl_16>>8);
   E2BF 8C 05              2245 	mov	ar5,r4
                           2246 ;	../../shared/src/train_if.c:108: remote_control_bits_lo = (uint8_t)(remote_ctrl_16);
   E2C1 8B 06              2247 	mov	ar6,r3
                           2248 ;	../../shared/src/train_if.c:110: if( (remote_control_bits_hi&0xe0) == 0) { //pattern check
   E2C3 ED                 2249 	mov	a,r5
   E2C4 54 E0              2250 	anl	a,#0xE0
   E2C6 60 02              2251 	jz	00160$
   E2C8 80 0B              2252 	sjmp	00110$
   E2CA                    2253 00160$:
                           2254 ;	../../shared/src/train_if.c:111: ce = (uint8_t)((remote_control_bits_hi>>2) & 0x03);
   E2CA ED                 2255 	mov	a,r5
   E2CB 03                 2256 	rr	a
   E2CC 03                 2257 	rr	a
   E2CD 54 3F              2258 	anl	a,#0x3f
   E2CF FF                 2259 	mov	r7,a
   E2D0 53 07 03           2260 	anl	ar7,#0x03
   E2D3 80 1C              2261 	sjmp	00111$
   E2D5                    2262 00110$:
                           2263 ;	../../shared/src/train_if.c:113: else if( (remote_control_bits_hi&0xe0) == 0xe0) {
   E2D5 C0 06              2264 	push	ar6
   E2D7 74 E0              2265 	mov	a,#0xE0
   E2D9 5D                 2266 	anl	a,r5
   E2DA FE                 2267 	mov	r6,a
   E2DB BE E0 02           2268 	cjne	r6,#0xE0,00161$
   E2DE 80 04              2269 	sjmp	00162$
   E2E0                    2270 00161$:
   E2E0 D0 06              2271 	pop	ar6
   E2E2 80 08              2272 	sjmp	00107$
   E2E4                    2273 00162$:
   E2E4 D0 06              2274 	pop	ar6
                           2275 ;	../../shared/src/train_if.c:115: return _EXIT_DO_NOTHING;
   E2E6 75 82 02           2276 	mov	dpl,#0x02
   E2E9 02 E3 F5           2277 	ljmp	00137$
   E2EC                    2278 00107$:
                           2279 ;	../../shared/src/train_if.c:118: error_code = RESERVED_PATTERN_TYPE;
   E2EC 7A 02              2280 	mov	r2,#0x02
                           2281 ;	../../shared/src/train_if.c:119: goto error_out;
   E2EE 02 E3 7B           2282 	ljmp	00134$
   E2F1                    2283 00111$:
                           2284 ;	../../shared/src/train_if.c:123: if( (((remote_control_bits_hi&0xe0)==0)&&((remote_ctrl_16 & 0x13c0) ||  //0001 0011 1100 0000
   E2F1 ED                 2285 	mov	a,r5
   E2F2 54 E0              2286 	anl	a,#0xE0
   E2F4 60 02              2287 	jz	00164$
   E2F6 80 1C              2288 	sjmp	00118$
   E2F8                    2289 00164$:
   E2F8 EB                 2290 	mov	a,r3
   E2F9 54 C0              2291 	anl	a,#0xC0
   E2FB 70 05              2292 	jnz	00165$
   E2FD EC                 2293 	mov	a,r4
   E2FE 54 13              2294 	anl	a,#0x13
   E300 60 02              2295 	jz	00166$
   E302                    2296 00165$:
   E302 80 3B              2297 	sjmp	00112$
   E304                    2298 00166$:
                           2299 ;	../../shared/src/train_if.c:124: (remote_status_16 & 0x1fc0))) || //0001 1111 1100 0000
   E304 A8 18              2300 	mov	r0,_bp
   E306 08                 2301 	inc	r0
   E307 E6                 2302 	mov	a,@r0
   E308 54 C0              2303 	anl	a,#0xC0
   E30A 70 06              2304 	jnz	00167$
   E30C 08                 2305 	inc	r0
   E30D E6                 2306 	mov	a,@r0
   E30E 54 1F              2307 	anl	a,#0x1F
   E310 60 02              2308 	jz	00168$
   E312                    2309 00167$:
   E312 80 2B              2310 	sjmp	00112$
   E314                    2311 00168$:
   E314                    2312 00118$:
                           2313 ;	../../shared/src/train_if.c:125: (((remote_control_bits_hi&0xe0)==0xe0)&&((remote_ctrl_16 & 0x13c0) ||  //0001 0011 1100 0000
   E314 C0 06              2314 	push	ar6
   E316 74 E0              2315 	mov	a,#0xE0
   E318 5D                 2316 	anl	a,r5
   E319 FE                 2317 	mov	r6,a
   E31A BE E0 02           2318 	cjne	r6,#0xE0,00169$
   E31D 80 04              2319 	sjmp	00170$
   E31F                    2320 00169$:
   E31F D0 06              2321 	pop	ar6
   E321 80 20              2322 	sjmp	00113$
   E323                    2323 00170$:
   E323 D0 06              2324 	pop	ar6
   E325 EB                 2325 	mov	a,r3
   E326 54 C0              2326 	anl	a,#0xC0
   E328 70 05              2327 	jnz	00171$
   E32A EC                 2328 	mov	a,r4
   E32B 54 13              2329 	anl	a,#0x13
   E32D 60 02              2330 	jz	00172$
   E32F                    2331 00171$:
   E32F 80 0E              2332 	sjmp	00112$
   E331                    2333 00172$:
                           2334 ;	../../shared/src/train_if.c:126: (remote_status_16 & 0xdfc0))) //1101 1111 1100 0000
   E331 A8 18              2335 	mov	r0,_bp
   E333 08                 2336 	inc	r0
   E334 E6                 2337 	mov	a,@r0
   E335 54 C0              2338 	anl	a,#0xC0
   E337 70 06              2339 	jnz	00173$
   E339 08                 2340 	inc	r0
   E33A E6                 2341 	mov	a,@r0
   E33B 54 DF              2342 	anl	a,#0xDF
   E33D 60 04              2343 	jz	00113$
   E33F                    2344 00173$:
   E33F                    2345 00112$:
                           2346 ;	../../shared/src/train_if.c:128: error_code = RESERVED_TTIU_BIT_SET_TO_ONE;
   E33F 7A 03              2347 	mov	r2,#0x03
                           2348 ;	../../shared/src/train_if.c:129: goto error_out;
   E341 80 38              2349 	sjmp	00134$
   E343                    2350 00113$:
                           2351 ;	../../shared/src/train_if.c:132: if(ce>0 && ((remote_control_bits_lo&0x3f) != 0)) {
   E343 EF                 2352 	mov	a,r7
   E344 60 09              2353 	jz	00120$
   E346 EE                 2354 	mov	a,r6
   E347 54 3F              2355 	anl	a,#0x3F
   E349 60 04              2356 	jz	00120$
                           2357 ;	../../shared/src/train_if.c:133: error_code = RESERVED_COMB_COE_REQ;
   E34B 7A 1A              2358 	mov	r2,#0x1A
                           2359 ;	../../shared/src/train_if.c:134: goto error_out;
   E34D 80 2C              2360 	sjmp	00134$
   E34F                    2361 00120$:
                           2362 ;	../../shared/src/train_if.c:136: ce = remote_control_bits_lo & 0x3f;
   E34F 74 3F              2363 	mov	a,#0x3F
   E351 5E                 2364 	anl	a,r6
   E352 FF                 2365 	mov	r7,a
                           2366 ;	../../shared/src/train_if.c:137: if((ce&0x03)==0x03) error_code = RESERVED_COE_1_REQ;
   E353 74 03              2367 	mov	a,#0x03
   E355 5F                 2368 	anl	a,r7
   E356 FB                 2369 	mov	r3,a
   E357 BB 03 02           2370 	cjne	r3,#0x03,00123$
   E35A 7A 11              2371 	mov	r2,#0x11
   E35C                    2372 00123$:
                           2373 ;	../../shared/src/train_if.c:138: if((ce&0x0c)==0x0c) {
   E35C 74 0C              2374 	mov	a,#0x0C
   E35E 5F                 2375 	anl	a,r7
   E35F FB                 2376 	mov	r3,a
   E360 BB 0C 09           2377 	cjne	r3,#0x0C,00128$
                           2378 ;	../../shared/src/train_if.c:139: if(error_code==0) error_code = RESERVED_COE_2_REQ;
   E363 EA                 2379 	mov	a,r2
   E364 70 04              2380 	jnz	00125$
   E366 7A 13              2381 	mov	r2,#0x13
   E368 80 02              2382 	sjmp	00128$
   E36A                    2383 00125$:
                           2384 ;	../../shared/src/train_if.c:140: else error_code = MULTI_RESERVED_COE_REQ;
   E36A 7A 10              2385 	mov	r2,#0x10
   E36C                    2386 00128$:
                           2387 ;	../../shared/src/train_if.c:142: if((ce&0x30)==0x30) {
   E36C 53 07 30           2388 	anl	ar7,#0x30
   E36F BF 30 09           2389 	cjne	r7,#0x30,00134$
                           2390 ;	../../shared/src/train_if.c:143: if(error_code==0) error_code = RESERVED_COE_3_REQ;
   E372 EA                 2391 	mov	a,r2
   E373 70 04              2392 	jnz	00130$
   E375 7A 15              2393 	mov	r2,#0x15
   E377 80 02              2394 	sjmp	00134$
   E379                    2395 00130$:
                           2396 ;	../../shared/src/train_if.c:144: else error_code = MULTI_RESERVED_COE_REQ;
   E379 7A 10              2397 	mov	r2,#0x10
                           2398 ;	../../shared/src/train_if.c:147: error_out:
   E37B                    2399 00134$:
                           2400 ;	../../shared/src/train_if.c:148: if(error_code>0) {
   E37B EA                 2401 	mov	a,r2
   E37C 70 03              2402 	jnz	00184$
   E37E 02 E3 F3           2403 	ljmp	00136$
   E381                    2404 00184$:
                           2405 ;	../../shared/src/train_if.c:149: EA = 0;
   E381 C2 AF              2406 	clr	_EA
                           2407 ;	../../shared/src/train_if.c:150: reg_LOCAL_CTRL_FIELD_LANE_15_0_b1 = (remote_control_bits_hi & 0x0c)|0xe0 ; //(rm_ctrl.v&0x1fff)|0xe000;
   E383 74 0C              2408 	mov	a,#0x0C
   E385 5D                 2409 	anl	a,r5
   E386 44 E0              2410 	orl	a,#0xE0
   E388 FB                 2411 	mov	r3,a
   E389 90 26 07           2412 	mov	dptr,#(_DME_ENC_REG1 + 0x0003)
   E38C EB                 2413 	mov	a,r3
   E38D F0                 2414 	movx	@dptr,a
                           2415 ;	../../shared/src/train_if.c:151: reg_LOCAL_CTRL_FIELD_LANE_15_0_b0 = remote_control_bits_lo&0x3f;
   E38E 53 06 3F           2416 	anl	ar6,#0x3F
   E391 90 26 06           2417 	mov	dptr,#(_DME_ENC_REG1 + 0x0002)
   E394 EE                 2418 	mov	a,r6
   E395 F0                 2419 	movx	@dptr,a
                           2420 ;	../../shared/src/train_if.c:152: reg_LOCAL_STATUS_FIELD_LANE_15_0 = (uint16_t)error_code;
   E396 8A 03              2421 	mov	ar3,r2
   E398 7C 00              2422 	mov	r4,#0x00
   E39A 90 26 04           2423 	mov	dptr,#_DME_ENC_REG1
   E39D EB                 2424 	mov	a,r3
   E39E F0                 2425 	movx	@dptr,a
   E39F A3                 2426 	inc	dptr
   E3A0 EC                 2427 	mov	a,r4
   E3A1 F0                 2428 	movx	@dptr,a
                           2429 ;	../../shared/src/train_if.c:153: reg_LOCAL_ERROR_FIELD_VALID_LANE = 1; reg_LOCAL_ERROR_FIELD_VALID_LANE = 0;
   E3A2 90 26 00           2430 	mov	dptr,#_DME_ENC_REG0
   E3A5 E0                 2431 	movx	a,@dptr
   E3A6 44 20              2432 	orl	a,#0x20
   E3A8 F0                 2433 	movx	@dptr,a
   E3A9 E0                 2434 	movx	a,@dptr
   E3AA 54 DF              2435 	anl	a,#0xdf
   E3AC F0                 2436 	movx	@dptr,a
                           2437 ;	../../shared/src/train_if.c:154: lnx_ERROR_TTIU_DETECTED_LANE = 1;
   E3AD 90 60 0A           2438 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0002)
   E3B0 E0                 2439 	movx	a,@dptr
   E3B1 44 01              2440 	orl	a,#0x01
   E3B3 F0                 2441 	movx	@dptr,a
                           2442 ;	../../shared/src/train_if.c:156: delay01(10);  //wait for 1.4usec
   E3B4 90 00 0A           2443 	mov	dptr,#0x000A
   E3B7 C0 02              2444 	push	ar2
   E3B9 78 16              2445 	mov	r0,#_delay01
   E3BB 79 BC              2446 	mov	r1,#(_delay01 >> 8)
   E3BD 7A 02              2447 	mov	r2,#(_delay01 >> 16)
   E3BF 12 00 B3           2448 	lcall	__sdcc_banked_call
   E3C2 D0 02              2449 	pop	ar2
                           2450 ;	../../shared/src/train_if.c:158: reg_LOCAL_CTRL_FIELD_LANE_15_0 = pre_local_ctrl;
   E3C4 90 67 9C           2451 	mov	dptr,#_pre_local_ctrl
   E3C7 E0                 2452 	movx	a,@dptr
   E3C8 FB                 2453 	mov	r3,a
   E3C9 A3                 2454 	inc	dptr
   E3CA E0                 2455 	movx	a,@dptr
   E3CB FC                 2456 	mov	r4,a
   E3CC 90 26 06           2457 	mov	dptr,#(_DME_ENC_REG1 + 0x0002)
   E3CF EB                 2458 	mov	a,r3
   E3D0 F0                 2459 	movx	@dptr,a
   E3D1 A3                 2460 	inc	dptr
   E3D2 EC                 2461 	mov	a,r4
   E3D3 F0                 2462 	movx	@dptr,a
                           2463 ;	../../shared/src/train_if.c:159: reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0;
   E3D4 90 26 04           2464 	mov	dptr,#_DME_ENC_REG1
   E3D7 E4                 2465 	clr	a
   E3D8 F0                 2466 	movx	@dptr,a
   E3D9 A3                 2467 	inc	dptr
   E3DA F0                 2468 	movx	@dptr,a
                           2469 ;	../../shared/src/train_if.c:160: reg_LOCAL_CTRL_FIELD_VALID_LANE = 1; reg_LOCAL_CTRL_FIELD_VALID_LANE = 0;
                           2470 ;	../../shared/src/train_if.c:161: reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
   E3DB 90 26 7A           2471 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   E3DE E0                 2472 	movx	a,@dptr
   E3DF 44 40              2473 	orl	a,#0x40
   E3E1 F0                 2474 	movx	@dptr,a
   E3E2 E0                 2475 	movx	a,@dptr
   E3E3 54 BF              2476 	anl	a,#0xbf
   E3E5 F0                 2477 	movx	@dptr,a
   E3E6 E0                 2478 	movx	a,@dptr
   E3E7 44 20              2479 	orl	a,#0x20
   E3E9 F0                 2480 	movx	@dptr,a
   E3EA 90 26 7A           2481 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   E3ED E0                 2482 	movx	a,@dptr
   E3EE 54 DF              2483 	anl	a,#0xdf
   E3F0 F0                 2484 	movx	@dptr,a
                           2485 ;	../../shared/src/train_if.c:162: EA = 1;
   E3F1 D2 AF              2486 	setb	_EA
   E3F3                    2487 00136$:
                           2488 ;	../../shared/src/train_if.c:165: return error_code;
   E3F3 8A 82              2489 	mov	dpl,r2
   E3F5                    2490 00137$:
   E3F5 85 18 81           2491 	mov	sp,_bp
   E3F8 D0 18              2492 	pop	_bp
   E3FA 02 00 C5           2493 	ljmp	__sdcc_banked_ret
                           2494 ;------------------------------------------------------------
                           2495 ;Allocation info for local variables in function 'request_local_ctrl'
                           2496 ;------------------------------------------------------------
                           2497 ;dat                       Allocated to registers r2 r3 
                           2498 ;stat                      Allocated to registers r4 
                           2499 ;------------------------------------------------------------
                           2500 ;	../../shared/src/train_if.c:169: bool request_local_ctrl(uint16_t dat) BANKING_CTRL
                           2501 ;	-----------------------------------------
                           2502 ;	 function request_local_ctrl
                           2503 ;	-----------------------------------------
   E3FD                    2504 _request_local_ctrl:
   E3FD AA 82              2505 	mov	r2,dpl
   E3FF AB 83              2506 	mov	r3,dph
                           2507 ;	../../shared/src/train_if.c:172: stat = _EXIT_SUCCESS;
   E401 7C 00              2508 	mov	r4,#0x00
                           2509 ;	../../shared/src/train_if.c:182: if(phy_mode <= SAS && reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE==0) {
   E403 90 A3 16           2510 	mov	dptr,#(_SYSTEM + 0x0002)
   E406 E0                 2511 	movx	a,@dptr
   E407 54 07              2512 	anl	a,#0x07
   E409 FD                 2513 	mov	r5,a
   E40A C3                 2514 	clr	c
   E40B 74 81              2515 	mov	a,#(0x01 ^ 0x80)
   E40D 8D F0              2516 	mov	b,r5
   E40F 63 F0 80           2517 	xrl	b,#0x80
   E412 95 F0              2518 	subb	a,b
   E414 40 4C              2519 	jc	00113$
   E416 90 26 78           2520 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   E419 E0                 2521 	movx	a,@dptr
   E41A 20 E0 45           2522 	jb	acc.0,00113$
                           2523 ;	../../shared/src/train_if.c:183: if(remote_error_check()==_EXIT_SUCCESS) {
   E41D C0 02              2524 	push	ar2
   E41F C0 03              2525 	push	ar3
   E421 C0 04              2526 	push	ar4
   E423 78 40              2527 	mov	r0,#_remote_error_check
   E425 79 E2              2528 	mov	r1,#(_remote_error_check >> 8)
   E427 7A 01              2529 	mov	r2,#(_remote_error_check >> 16)
   E429 12 00 B3           2530 	lcall	__sdcc_banked_call
   E42C E5 82              2531 	mov	a,dpl
   E42E D0 04              2532 	pop	ar4
   E430 D0 03              2533 	pop	ar3
   E432 D0 02              2534 	pop	ar2
   E434 70 28              2535 	jnz	00102$
                           2536 ;	../../shared/src/train_if.c:184: EA = 0;
   E436 C2 AF              2537 	clr	_EA
                           2538 ;	../../shared/src/train_if.c:185: reg_LOCAL_CTRL_FIELD_LANE_15_0 = dat;
   E438 90 26 06           2539 	mov	dptr,#(_DME_ENC_REG1 + 0x0002)
   E43B EA                 2540 	mov	a,r2
   E43C F0                 2541 	movx	@dptr,a
   E43D A3                 2542 	inc	dptr
   E43E EB                 2543 	mov	a,r3
   E43F F0                 2544 	movx	@dptr,a
                           2545 ;	../../shared/src/train_if.c:186: reg_LOCAL_CTRL_FIELD_VALID_LANE = 1; 
                           2546 ;	../../shared/src/train_if.c:187: reg_LOCAL_CTRL_FIELD_VALID_LANE = 0;
   E440 90 26 7A           2547 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   E443 E0                 2548 	movx	a,@dptr
   E444 44 40              2549 	orl	a,#0x40
   E446 F0                 2550 	movx	@dptr,a
   E447 E0                 2551 	movx	a,@dptr
   E448 54 BF              2552 	anl	a,#0xbf
   E44A F0                 2553 	movx	@dptr,a
                           2554 ;	../../shared/src/train_if.c:188: pre_local_ctrl = dat;
   E44B 90 67 9C           2555 	mov	dptr,#_pre_local_ctrl
   E44E EA                 2556 	mov	a,r2
   E44F F0                 2557 	movx	@dptr,a
   E450 A3                 2558 	inc	dptr
   E451 EB                 2559 	mov	a,r3
   E452 F0                 2560 	movx	@dptr,a
                           2561 ;	../../shared/src/train_if.c:189: EA = 1;
   E453 D2 AF              2562 	setb	_EA
                           2563 ;	../../shared/src/train_if.c:190: lnx_ERROR_TTIU_DETECTED_LANE = 0;
   E455 90 60 0A           2564 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0002)
   E458 E0                 2565 	movx	a,@dptr
   E459 54 FE              2566 	anl	a,#0xfe
   E45B F0                 2567 	movx	@dptr,a
   E45C 80 33              2568 	sjmp	00114$
   E45E                    2569 00102$:
                           2570 ;	../../shared/src/train_if.c:193: stat = _EXIT_FAIL;
   E45E 7C 01              2571 	mov	r4,#0x01
   E460 80 2F              2572 	sjmp	00114$
   E462                    2573 00113$:
                           2574 ;	../../shared/src/train_if.c:199: if(link_train_mode || tx_pipe4_en) {
   E462 90 26 7B           2575 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   E465 E0                 2576 	movx	a,@dptr
   E466 20 E7 03           2577 	jb	acc.7,00106$
   E469 30 26 0E           2578 	jnb	_tx_pipe4_en,00110$
                           2579 ;	../../shared/src/train_if.c:200: while(reg_PIN_LOCAL_CTRL_FIELD_READY_RD_LANE==0){
   E46C                    2580 00106$:
   E46C 90 26 21           2581 	mov	dptr,#(_TX_TRAIN_IF_REG3 + 0x0001)
   E46F E0                 2582 	movx	a,@dptr
   E470 20 E2 07           2583 	jb	acc.2,00110$
                           2584 ;	../../shared/src/train_if.c:201: if(reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE==0) break;
   E473 90 26 79           2585 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   E476 E0                 2586 	movx	a,@dptr
   E477 20 E6 F2           2587 	jb	acc.6,00106$
   E47A                    2588 00110$:
                           2589 ;	../../shared/src/train_if.c:205: reg_LOCAL_CTRL_FIELD_LANE_15_0 = dat;
   E47A 90 26 06           2590 	mov	dptr,#(_DME_ENC_REG1 + 0x0002)
   E47D EA                 2591 	mov	a,r2
   E47E F0                 2592 	movx	@dptr,a
   E47F A3                 2593 	inc	dptr
   E480 EB                 2594 	mov	a,r3
   E481 F0                 2595 	movx	@dptr,a
                           2596 ;	../../shared/src/train_if.c:206: reg_LOCAL_CTRL_FIELD_VALID_LANE = 0;
                           2597 ;	../../shared/src/train_if.c:207: reg_LOCAL_CTRL_FIELD_VALID_LANE = 1; 
                           2598 ;	../../shared/src/train_if.c:208: reg_LOCAL_CTRL_FIELD_VALID_LANE = 0;
   E482 90 26 7A           2599 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   E485 E0                 2600 	movx	a,@dptr
   E486 54 BF              2601 	anl	a,#0xbf
   E488 F0                 2602 	movx	@dptr,a
   E489 E0                 2603 	movx	a,@dptr
   E48A 44 40              2604 	orl	a,#0x40
   E48C F0                 2605 	movx	@dptr,a
   E48D E0                 2606 	movx	a,@dptr
   E48E 54 BF              2607 	anl	a,#0xbf
   E490 F0                 2608 	movx	@dptr,a
   E491                    2609 00114$:
                           2610 ;	../../shared/src/train_if.c:211: short_delay();
   E491 C0 04              2611 	push	ar4
   E493 78 05              2612 	mov	r0,#_short_delay
   E495 79 C0              2613 	mov	r1,#(_short_delay >> 8)
   E497 7A 02              2614 	mov	r2,#(_short_delay >> 16)
   E499 12 00 B3           2615 	lcall	__sdcc_banked_call
   E49C D0 04              2616 	pop	ar4
                           2617 ;	../../shared/src/train_if.c:220: return stat;
   E49E 8C 82              2618 	mov	dpl,r4
   E4A0 02 00 C5           2619 	ljmp	__sdcc_banked_ret
                           2620 ;------------------------------------------------------------
                           2621 ;Allocation info for local variables in function 'get_tx_status'
                           2622 ;------------------------------------------------------------
                           2623 ;check                     Allocated to registers r2 
                           2624 ;dat                       Allocated to registers 
                           2625 ;err_status                Allocated to registers r3 
                           2626 ;------------------------------------------------------------
                           2627 ;	../../shared/src/train_if.c:223: bool get_tx_status(uint8_t check) BANKING_CTRL
                           2628 ;	-----------------------------------------
                           2629 ;	 function get_tx_status
                           2630 ;	-----------------------------------------
   E4A3                    2631 _get_tx_status:
   E4A3 AA 82              2632 	mov	r2,dpl
                           2633 ;	../../shared/src/train_if.c:226: uint8_t err_status = 0;
   E4A5 7B 00              2634 	mov	r3,#0x00
                           2635 ;	../../shared/src/train_if.c:228: dat = reg_LOCAL_CTRL_FIELD_LANE_15_0;
   E4A7 90 26 06           2636 	mov	dptr,#(_DME_ENC_REG1 + 0x0002)
   E4AA E0                 2637 	movx	a,@dptr
   E4AB A3                 2638 	inc	dptr
   E4AC E0                 2639 	movx	a,@dptr
                           2640 ;	../../shared/src/train_if.c:231: timeout_start(2000); //2mS
   E4AD 75 8B 30           2641 	mov	_TMR1,#0x30
   E4B0 75 8D F8           2642 	mov	(_TMR1 >> 8),#0xF8
   E4B3 D2 8E              2643 	setb	_TR1
   E4B5 C2 03              2644 	clr	_timeout
                           2645 ;	../../shared/src/train_if.c:232: do {
   E4B7                    2646 00124$:
                           2647 ;	../../shared/src/train_if.c:234: if(reg_REMOTE_STATUS_VALID_ISR_LANE==0) continue;
   E4B7 90 26 5D           2648 	mov	dptr,#(_TRX_TRAIN_IF_INTERRUPT_LANE + 0x0001)
   E4BA E0                 2649 	movx	a,@dptr
   E4BB 30 E0 F9           2650 	jnb	acc.0,00124$
                           2651 ;	../../shared/src/train_if.c:235: reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 1;
                           2652 ;	../../shared/src/train_if.c:236: reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 0;
   E4BE 90 26 65           2653 	mov	dptr,#(_TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE + 0x0001)
   E4C1 E0                 2654 	movx	a,@dptr
   E4C2 44 01              2655 	orl	a,#0x01
   E4C4 F0                 2656 	movx	@dptr,a
   E4C5 E0                 2657 	movx	a,@dptr
   E4C6 54 FE              2658 	anl	a,#0xfe
   E4C8 F0                 2659 	movx	@dptr,a
                           2660 ;	../../shared/src/train_if.c:239: if(phy_mode <= SAS && do_rx_apta==0) {
   E4C9 90 A3 16           2661 	mov	dptr,#(_SYSTEM + 0x0002)
   E4CC E0                 2662 	movx	a,@dptr
   E4CD 54 07              2663 	anl	a,#0x07
   E4CF FC                 2664 	mov	r4,a
   E4D0 C3                 2665 	clr	c
   E4D1 74 81              2666 	mov	a,#(0x01 ^ 0x80)
   E4D3 8C F0              2667 	mov	b,r4
   E4D5 63 F0 80           2668 	xrl	b,#0x80
   E4D8 95 F0              2669 	subb	a,b
   E4DA 40 17              2670 	jc	00106$
   E4DC 20 09 14           2671 	jb	_do_rx_apta,00106$
                           2672 ;	../../shared/src/train_if.c:240: err_status = remote_error_check();
   E4DF C0 02              2673 	push	ar2
   E4E1 78 40              2674 	mov	r0,#_remote_error_check
   E4E3 79 E2              2675 	mov	r1,#(_remote_error_check >> 8)
   E4E5 7A 01              2676 	mov	r2,#(_remote_error_check >> 16)
   E4E7 12 00 B3           2677 	lcall	__sdcc_banked_call
   E4EA AC 82              2678 	mov	r4,dpl
   E4EC D0 02              2679 	pop	ar2
   E4EE 8C 03              2680 	mov	ar3,r4
                           2681 ;	../../shared/src/train_if.c:241: if(err_status) continue;//wait until correct TTIU come
   E4F0 EB                 2682 	mov	a,r3
   E4F1 70 C4              2683 	jnz	00124$
   E4F3                    2684 00106$:
                           2685 ;	../../shared/src/train_if.c:245: if(check==0) {
   E4F3 EA                 2686 	mov	a,r2
   E4F4 70 0D              2687 	jnz	00113$
                           2688 ;	../../shared/src/train_if.c:246: if( (device_remote_status_bits_lo&0x3f)==0 ) break;
   E4F6 90 26 70           2689 	mov	dptr,#_TX_TRAIN_IF_REG6
   E4F9 E0                 2690 	movx	a,@dptr
   E4FA FC                 2691 	mov	r4,a
   E4FB 54 3F              2692 	anl	a,#0x3F
   E4FD 60 02              2693 	jz	00144$
   E4FF 80 0D              2694 	sjmp	00114$
   E501                    2695 00144$:
   E501 80 5D              2696 	sjmp	00126$
   E503                    2697 00113$:
                           2698 ;	../../shared/src/train_if.c:249: if( (device_remote_status_bits_lo&0x3f)!=0 ) break;
   E503 90 26 70           2699 	mov	dptr,#_TX_TRAIN_IF_REG6
   E506 E0                 2700 	movx	a,@dptr
   E507 FC                 2701 	mov	r4,a
   E508 54 3F              2702 	anl	a,#0x3F
   E50A 60 02              2703 	jz	00146$
   E50C 80 52              2704 	sjmp	00126$
   E50E                    2705 00146$:
   E50E                    2706 00114$:
                           2707 ;	../../shared/src/train_if.c:252: if( lnx_TX_TRAIN_STATUS_DET_TIMER_ENABLE_LANE==1) {
   E50E 90 60 33           2708 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   E511 E0                 2709 	movx	a,@dptr
   E512 23                 2710 	rl	a
   E513 54 01              2711 	anl	a,#0x01
   E515 FC                 2712 	mov	r4,a
   E516 BC 01 12           2713 	cjne	r4,#0x01,00119$
                           2714 ;	../../shared/src/train_if.c:253: if( timeout || TMR1==0) { 
   E519 20 03 06           2715 	jb	_timeout,00115$
   E51C E5 8B              2716 	mov	a,_TMR1
   E51E 45 8D              2717 	orl	a,(_TMR1 >> 8)
   E520 70 09              2718 	jnz	00119$
   E522                    2719 00115$:
                           2720 ;	../../shared/src/train_if.c:254: lnx_TX_TRAIN_STATUS_DET_TIMEOUT_INT_LANE=1; 
   E522 90 60 33           2721 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   E525 E0                 2722 	movx	a,@dptr
   E526 44 04              2723 	orl	a,#0x04
   E528 F0                 2724 	movx	@dptr,a
                           2725 ;	../../shared/src/train_if.c:258: break;} 
   E529 80 35              2726 	sjmp	00126$
   E52B                    2727 00119$:
                           2728 ;	../../shared/src/train_if.c:261: if(TRAIN_SIM_EN==0) { // && !tx_status_pcie_mode) {
   E52B 90 E6 07           2729 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   E52E E0                 2730 	movx	a,@dptr
   E52F 30 E2 03           2731 	jnb	acc.2,00151$
   E532 02 E4 B7           2732 	ljmp	00124$
   E535                    2733 00151$:
                           2734 ;	../../shared/src/train_if.c:262: cds_tb = cds_table[CDS_DATAADAPT];  //dfe_acc 
   E535 90 00 EC           2735 	mov	dptr,#(_cds_table + 0x000e)
   E538 E4                 2736 	clr	a
   E539 93                 2737 	movc	a,@a+dptr
   E53A FC                 2738 	mov	r4,a
   E53B A3                 2739 	inc	dptr
   E53C E4                 2740 	clr	a
   E53D 93                 2741 	movc	a,@a+dptr
   E53E FD                 2742 	mov	r5,a
   E53F 90 61 74           2743 	mov	dptr,#_CDS_READ_MISC1
   E542 EC                 2744 	mov	a,r4
   E543 F0                 2745 	movx	@dptr,a
   E544 A3                 2746 	inc	dptr
   E545 ED                 2747 	mov	a,r5
   E546 F0                 2748 	movx	@dptr,a
                           2749 ;	../../shared/src/train_if.c:263: cdr_dfe_scheme();
   E547 C0 02              2750 	push	ar2
   E549 78 96              2751 	mov	r0,#_cdr_dfe_scheme
   E54B 79 92              2752 	mov	r1,#(_cdr_dfe_scheme >> 8)
   E54D 7A 01              2753 	mov	r2,#(_cdr_dfe_scheme >> 16)
   E54F 12 00 B3           2754 	lcall	__sdcc_banked_call
   E552 D0 02              2755 	pop	ar2
                           2756 ;	../../shared/src/train_if.c:264: err_status = lnx_CDS_ERR_CODE_LANE_7_0;
   E554 90 60 A3           2757 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0003)
   E557 E0                 2758 	movx	a,@dptr
   E558 FC                 2759 	mov	r4,a
   E559 FB                 2760 	mov	r3,a
                           2761 ;	../../shared/src/train_if.c:265: if(err_status) break;
   E55A EB                 2762 	mov	a,r3
   E55B 70 03              2763 	jnz	00152$
   E55D 02 E4 B7           2764 	ljmp	00124$
   E560                    2765 00152$:
                           2766 ;	../../shared/src/train_if.c:269: } while(1);
   E560                    2767 00126$:
                           2768 ;	../../shared/src/train_if.c:271: timeout_stop;
   E560 C2 8E              2769 	clr	_TR1
   E562 C2 8F              2770 	clr	_TF1
                           2771 ;	../../shared/src/train_if.c:274: reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 1;
                           2772 ;	../../shared/src/train_if.c:275: reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 0;
   E564 90 26 65           2773 	mov	dptr,#(_TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE + 0x0001)
   E567 E0                 2774 	movx	a,@dptr
   E568 44 01              2775 	orl	a,#0x01
   E56A F0                 2776 	movx	@dptr,a
   E56B E0                 2777 	movx	a,@dptr
   E56C 54 FE              2778 	anl	a,#0xfe
   E56E F0                 2779 	movx	@dptr,a
                           2780 ;	../../shared/src/train_if.c:282: return err_status;
   E56F 8B 82              2781 	mov	dpl,r3
   E571 02 00 C5           2782 	ljmp	__sdcc_banked_ret
                           2783 ;------------------------------------------------------------
                           2784 ;Allocation info for local variables in function 'Send_ctrl_to_tx'
                           2785 ;------------------------------------------------------------
                           2786 ;dat                       Allocated to registers r2 r3 
                           2787 ;------------------------------------------------------------
                           2788 ;	../../shared/src/train_if.c:285: void Send_ctrl_to_tx(uint16_t dat) BANKING_CTRL
                           2789 ;	-----------------------------------------
                           2790 ;	 function Send_ctrl_to_tx
                           2791 ;	-----------------------------------------
   E574                    2792 _Send_ctrl_to_tx:
   E574 AA 82              2793 	mov	r2,dpl
   E576 AB 83              2794 	mov	r3,dph
                           2795 ;	../../shared/src/train_if.c:291: tx_ctrl_stat = _EXIT_SUCCESS;
   E578 90 67 68           2796 	mov	dptr,#_tx_ctrl_stat
   E57B E4                 2797 	clr	a
   E57C F0                 2798 	movx	@dptr,a
   E57D A3                 2799 	inc	dptr
   E57E F0                 2800 	movx	@dptr,a
                           2801 ;	../../shared/src/train_if.c:293: reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 1;
                           2802 ;	../../shared/src/train_if.c:294: reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 0;
   E57F 90 26 65           2803 	mov	dptr,#(_TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE + 0x0001)
   E582 E0                 2804 	movx	a,@dptr
   E583 44 01              2805 	orl	a,#0x01
   E585 F0                 2806 	movx	@dptr,a
   E586 E0                 2807 	movx	a,@dptr
   E587 54 FE              2808 	anl	a,#0xfe
   E589 F0                 2809 	movx	@dptr,a
                           2810 ;	../../shared/src/train_if.c:312: if( tx_pipe4_en && reg_EYE_OPEN_EN_RD_LANE ) {
   E58A 30 26 26           2811 	jnb	_tx_pipe4_en,00104$
   E58D 90 26 7B           2812 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   E590 E0                 2813 	movx	a,@dptr
   E591 30 E6 1F           2814 	jnb	acc.6,00104$
                           2815 ;	../../shared/src/train_if.c:313: reg_EYE_OPEN_LANE_5_0 = train.eo;
   E594 90 66 5F           2816 	mov	dptr,#(_train + 0x001f)
   E597 E0                 2817 	movx	a,@dptr
   E598 FC                 2818 	mov	r4,a
   E599 90 24 0C           2819 	mov	dptr,#_DFE_CTRL_REG3
   E59C 54 3F              2820 	anl	a,#0x3f
   E59E F5 F0              2821 	mov	b,a
   E5A0 E0                 2822 	movx	a,@dptr
   E5A1 54 C0              2823 	anl	a,#0xc0
   E5A3 45 F0              2824 	orl	a,b
   E5A5 F0                 2825 	movx	@dptr,a
                           2826 ;	../../shared/src/train_if.c:314: reg_LOCAL_CTRL_FIELD_VALID_LANE = 1; 
                           2827 ;	../../shared/src/train_if.c:315: reg_LOCAL_CTRL_FIELD_VALID_LANE = 0;
   E5A6 90 26 7A           2828 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   E5A9 E0                 2829 	movx	a,@dptr
   E5AA 44 40              2830 	orl	a,#0x40
   E5AC F0                 2831 	movx	@dptr,a
   E5AD E0                 2832 	movx	a,@dptr
   E5AE 54 BF              2833 	anl	a,#0xbf
   E5B0 F0                 2834 	movx	@dptr,a
   E5B1 80 1D              2835 	sjmp	00105$
   E5B3                    2836 00104$:
                           2837 ;	../../shared/src/train_if.c:320: if(request_local_ctrl(dat)!= _EXIT_SUCCESS) {
   E5B3 8A 82              2838 	mov	dpl,r2
   E5B5 8B 83              2839 	mov	dph,r3
   E5B7 78 FD              2840 	mov	r0,#_request_local_ctrl
   E5B9 79 E3              2841 	mov	r1,#(_request_local_ctrl >> 8)
   E5BB 7A 01              2842 	mov	r2,#(_request_local_ctrl >> 16)
   E5BD 12 00 B3           2843 	lcall	__sdcc_banked_call
   E5C0 E5 82              2844 	mov	a,dpl
   E5C2 60 0C              2845 	jz	00105$
                           2846 ;	../../shared/src/train_if.c:321: tx_ctrl_stat = _EXIT_FAIL;
   E5C4 90 67 68           2847 	mov	dptr,#_tx_ctrl_stat
   E5C7 74 01              2848 	mov	a,#0x01
   E5C9 F0                 2849 	movx	@dptr,a
   E5CA A3                 2850 	inc	dptr
   E5CB E4                 2851 	clr	a
   E5CC F0                 2852 	movx	@dptr,a
                           2853 ;	../../shared/src/train_if.c:322: return;
   E5CD 02 E6 C1           2854 	ljmp	00114$
   E5D0                    2855 00105$:
                           2856 ;	../../shared/src/train_if.c:327: if(get_tx_status(1)) {
   E5D0 75 82 01           2857 	mov	dpl,#0x01
   E5D3 78 A3              2858 	mov	r0,#_get_tx_status
   E5D5 79 E4              2859 	mov	r1,#(_get_tx_status >> 8)
   E5D7 7A 01              2860 	mov	r2,#(_get_tx_status >> 16)
   E5D9 12 00 B3           2861 	lcall	__sdcc_banked_call
   E5DC E5 82              2862 	mov	a,dpl
   E5DE 60 0C              2863 	jz	00108$
                           2864 ;	../../shared/src/train_if.c:328: tx_ctrl_stat = _EXIT_FAIL;
   E5E0 90 67 68           2865 	mov	dptr,#_tx_ctrl_stat
   E5E3 74 01              2866 	mov	a,#0x01
   E5E5 F0                 2867 	movx	@dptr,a
   E5E6 A3                 2868 	inc	dptr
   E5E7 E4                 2869 	clr	a
   E5E8 F0                 2870 	movx	@dptr,a
                           2871 ;	../../shared/src/train_if.c:329: return;
   E5E9 02 E6 C1           2872 	ljmp	00114$
   E5EC                    2873 00108$:
                           2874 ;	../../shared/src/train_if.c:332: if( (reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b0&0x3f)!=0 ) { // get !0?
   E5EC 90 26 70           2875 	mov	dptr,#_TX_TRAIN_IF_REG6
   E5EF E0                 2876 	movx	a,@dptr
   E5F0 FA                 2877 	mov	r2,a
   E5F1 54 3F              2878 	anl	a,#0x3F
   E5F3 70 03              2879 	jnz	00141$
   E5F5 02 E6 B6           2880 	ljmp	00112$
   E5F8                    2881 00141$:
                           2882 ;	../../shared/src/train_if.c:342: tx.g0_is_max  = reg_REMOTE_STATUS_G0_LANE_1_0 == 3;
   E5F8 90 26 6C           2883 	mov	dptr,#_TX_TRAIN_IF_REG5
   E5FB E0                 2884 	movx	a,@dptr
   E5FC 03                 2885 	rr	a
   E5FD 54 03              2886 	anl	a,#0x03
   E5FF FA                 2887 	mov	r2,a
   E600 E4                 2888 	clr	a
   E601 BA 03 01           2889 	cjne	r2,#0x03,00142$
   E604 04                 2890 	inc	a
   E605                    2891 00142$:
   E605 90 66 A1           2892 	mov	dptr,#(_tx + 0x0003)
   E608 F0                 2893 	movx	@dptr,a
                           2894 ;	../../shared/src/train_if.c:343: tx.g0_is_min  = reg_REMOTE_STATUS_G0_LANE_1_0 == 2;
   E609 90 26 6C           2895 	mov	dptr,#_TX_TRAIN_IF_REG5
   E60C E0                 2896 	movx	a,@dptr
   E60D 03                 2897 	rr	a
   E60E 54 03              2898 	anl	a,#0x03
   E610 FA                 2899 	mov	r2,a
   E611 E4                 2900 	clr	a
   E612 BA 02 01           2901 	cjne	r2,#0x02,00144$
   E615 04                 2902 	inc	a
   E616                    2903 00144$:
   E616 90 66 A2           2904 	mov	dptr,#(_tx + 0x0004)
   E619 F0                 2905 	movx	@dptr,a
                           2906 ;	../../shared/src/train_if.c:344: tx.gn1_is_max = reg_REMOTE_STATUS_GN1_LANE_1_0 == 3;
   E61A 90 26 6C           2907 	mov	dptr,#_TX_TRAIN_IF_REG5
   E61D E0                 2908 	movx	a,@dptr
   E61E C4                 2909 	swap	a
   E61F 03                 2910 	rr	a
   E620 54 03              2911 	anl	a,#0x03
   E622 FA                 2912 	mov	r2,a
   E623 E4                 2913 	clr	a
   E624 BA 03 01           2914 	cjne	r2,#0x03,00146$
   E627 04                 2915 	inc	a
   E628                    2916 00146$:
   E628 90 66 A5           2917 	mov	dptr,#(_tx + 0x0007)
   E62B F0                 2918 	movx	@dptr,a
                           2919 ;	../../shared/src/train_if.c:345: tx.gn1_is_min = reg_REMOTE_STATUS_GN1_LANE_1_0 == 2;
   E62C 90 26 6C           2920 	mov	dptr,#_TX_TRAIN_IF_REG5
   E62F E0                 2921 	movx	a,@dptr
   E630 C4                 2922 	swap	a
   E631 03                 2923 	rr	a
   E632 54 03              2924 	anl	a,#0x03
   E634 FA                 2925 	mov	r2,a
   E635 E4                 2926 	clr	a
   E636 BA 02 01           2927 	cjne	r2,#0x02,00148$
   E639 04                 2928 	inc	a
   E63A                    2929 00148$:
   E63A 90 66 A6           2930 	mov	dptr,#(_tx + 0x0008)
   E63D F0                 2931 	movx	@dptr,a
                           2932 ;	../../shared/src/train_if.c:346: tx.g1_is_max  = reg_REMOTE_STATUS_G1_LANE_1_0 == 3;
   E63E 90 26 6C           2933 	mov	dptr,#_TX_TRAIN_IF_REG5
   E641 E0                 2934 	movx	a,@dptr
   E642 C4                 2935 	swap	a
   E643 23                 2936 	rl	a
   E644 54 03              2937 	anl	a,#0x03
   E646 FA                 2938 	mov	r2,a
   E647 E4                 2939 	clr	a
   E648 BA 03 01           2940 	cjne	r2,#0x03,00150$
   E64B 04                 2941 	inc	a
   E64C                    2942 00150$:
   E64C 90 66 A3           2943 	mov	dptr,#(_tx + 0x0005)
   E64F F0                 2944 	movx	@dptr,a
                           2945 ;	../../shared/src/train_if.c:347: tx.g1_is_min  = reg_REMOTE_STATUS_G1_LANE_1_0 == 2;
   E650 90 26 6C           2946 	mov	dptr,#_TX_TRAIN_IF_REG5
   E653 E0                 2947 	movx	a,@dptr
   E654 C4                 2948 	swap	a
   E655 23                 2949 	rl	a
   E656 54 03              2950 	anl	a,#0x03
   E658 FA                 2951 	mov	r2,a
   E659 E4                 2952 	clr	a
   E65A BA 02 01           2953 	cjne	r2,#0x02,00152$
   E65D 04                 2954 	inc	a
   E65E                    2955 00152$:
   E65E 90 66 A4           2956 	mov	dptr,#(_tx + 0x0006)
   E661 F0                 2957 	movx	@dptr,a
                           2958 ;	../../shared/src/train_if.c:354: if(tag_TX_TRAIN_P2P_HOLD){
   E662 90 67 A0           2959 	mov	dptr,#_tx_train_p2p_hold
   E665 E0                 2960 	movx	a,@dptr
   E666 FA                 2961 	mov	r2,a
   E667 60 56              2962 	jz	00113$
                           2963 ;	../../shared/src/train_if.c:355: tx.gn1_is_max = tx.gn1_is_max /*|| tx.g0_is_max*/;
   E669 90 66 A5           2964 	mov	dptr,#(_tx + 0x0007)
   E66C E0                 2965 	movx	a,@dptr
   E66D FA                 2966 	mov	r2,a
   E66E 90 66 A5           2967 	mov	dptr,#(_tx + 0x0007)
   E671 F0                 2968 	movx	@dptr,a
                           2969 ;	../../shared/src/train_if.c:356: tx.gn1_is_min = tx.gn1_is_min || tx.g0_is_min;
   E672 90 66 A6           2970 	mov	dptr,#(_tx + 0x0008)
   E675 E0                 2971 	movx	a,@dptr
   E676 70 09              2972 	jnz	00117$
   E678 90 66 A2           2973 	mov	dptr,#(_tx + 0x0004)
   E67B E0                 2974 	movx	a,@dptr
   E67C 70 03              2975 	jnz	00117$
   E67E FA                 2976 	mov	r2,a
   E67F 80 02              2977 	sjmp	00118$
   E681                    2978 00117$:
   E681 7A 01              2979 	mov	r2,#0x01
   E683                    2980 00118$:
   E683 90 66 A6           2981 	mov	dptr,#(_tx + 0x0008)
   E686 EA                 2982 	mov	a,r2
   E687 F0                 2983 	movx	@dptr,a
                           2984 ;	../../shared/src/train_if.c:357: tx.g1_is_max  = tx.g1_is_max  || tx.g0_is_max;
   E688 90 66 A3           2985 	mov	dptr,#(_tx + 0x0005)
   E68B E0                 2986 	movx	a,@dptr
   E68C 70 09              2987 	jnz	00120$
   E68E 90 66 A1           2988 	mov	dptr,#(_tx + 0x0003)
   E691 E0                 2989 	movx	a,@dptr
   E692 70 03              2990 	jnz	00120$
   E694 FA                 2991 	mov	r2,a
   E695 80 02              2992 	sjmp	00121$
   E697                    2993 00120$:
   E697 7A 01              2994 	mov	r2,#0x01
   E699                    2995 00121$:
   E699 90 66 A3           2996 	mov	dptr,#(_tx + 0x0005)
   E69C EA                 2997 	mov	a,r2
   E69D F0                 2998 	movx	@dptr,a
                           2999 ;	../../shared/src/train_if.c:358: tx.g1_is_min  = tx.g1_is_min  || tx.g0_is_min;
   E69E 90 66 A4           3000 	mov	dptr,#(_tx + 0x0006)
   E6A1 E0                 3001 	movx	a,@dptr
   E6A2 70 09              3002 	jnz	00123$
   E6A4 90 66 A2           3003 	mov	dptr,#(_tx + 0x0004)
   E6A7 E0                 3004 	movx	a,@dptr
   E6A8 70 03              3005 	jnz	00123$
   E6AA FA                 3006 	mov	r2,a
   E6AB 80 02              3007 	sjmp	00124$
   E6AD                    3008 00123$:
   E6AD 7A 01              3009 	mov	r2,#0x01
   E6AF                    3010 00124$:
   E6AF 90 66 A4           3011 	mov	dptr,#(_tx + 0x0006)
   E6B2 EA                 3012 	mov	a,r2
   E6B3 F0                 3013 	movx	@dptr,a
   E6B4 80 09              3014 	sjmp	00113$
   E6B6                    3015 00112$:
                           3016 ;	../../shared/src/train_if.c:362: tx_ctrl_stat = _EXIT_FAIL;
   E6B6 90 67 68           3017 	mov	dptr,#_tx_ctrl_stat
   E6B9 74 01              3018 	mov	a,#0x01
   E6BB F0                 3019 	movx	@dptr,a
   E6BC A3                 3020 	inc	dptr
   E6BD E4                 3021 	clr	a
   E6BE F0                 3022 	movx	@dptr,a
   E6BF                    3023 00113$:
                           3024 ;	../../shared/src/train_if.c:383: timeout = 0;
   E6BF C2 03              3025 	clr	_timeout
   E6C1                    3026 00114$:
   E6C1 02 00 C5           3027 	ljmp	__sdcc_banked_ret
                           3028 ;------------------------------------------------------------
                           3029 ;Allocation info for local variables in function 'trainif_init'
                           3030 ;------------------------------------------------------------
                           3031 ;------------------------------------------------------------
                           3032 ;	../../shared/src/train_if.c:387: void trainif_init(void) BANKING_CTRL
                           3033 ;	-----------------------------------------
                           3034 ;	 function trainif_init
                           3035 ;	-----------------------------------------
   E6C4                    3036 _trainif_init:
                           3037 ;	../../shared/src/train_if.c:410: }
   E6C4 02 00 C5           3038 	ljmp	__sdcc_banked_ret
                           3039 ;------------------------------------------------------------
                           3040 ;Allocation info for local variables in function 'txtrain_force_restart'
                           3041 ;------------------------------------------------------------
                           3042 ;------------------------------------------------------------
                           3043 ;	../../shared/src/train_if.c:467: void txtrain_force_restart(void) BANKING_CTRL{
                           3044 ;	-----------------------------------------
                           3045 ;	 function txtrain_force_restart
                           3046 ;	-----------------------------------------
   E6C7                    3047 _txtrain_force_restart:
                           3048 ;	../../shared/src/train_if.c:469: EA = 0;
   E6C7 C2 AF              3049 	clr	_EA
                           3050 ;	../../shared/src/train_if.c:471: reg_PIN_TX_TRAIN_ENABLE_ISR_LANE = 0;
   E6C9 90 26 5C           3051 	mov	dptr,#_TRX_TRAIN_IF_INTERRUPT_LANE
   E6CC E0                 3052 	movx	a,@dptr
   E6CD 54 FD              3053 	anl	a,#0xfd
   E6CF F0                 3054 	movx	@dptr,a
                           3055 ;	../../shared/src/train_if.c:475: reg_TX_TRAIN_ON_LANE = 1;// for internal hardware tx-train design
   E6D0 90 26 7B           3056 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   E6D3 E0                 3057 	movx	a,@dptr
   E6D4 44 02              3058 	orl	a,#0x02
   E6D6 F0                 3059 	movx	@dptr,a
                           3060 ;	../../shared/src/train_if.c:477: do_train = 1; PHY_STATUS = ST_TRXTRAIN;
   E6D7 D2 06              3061 	setb	_do_train
   E6D9 90 22 30           3062 	mov	dptr,#_MCU_STATUS0_LANE
   E6DC 74 28              3063 	mov	a,#0x28
   E6DE F0                 3064 	movx	@dptr,a
                           3065 ;	../../shared/src/train_if.c:478: train_comp = 0;
   E6DF 90 67 11           3066 	mov	dptr,#_train_comp
   E6E2 E4                 3067 	clr	a
   E6E3 F0                 3068 	movx	@dptr,a
                           3069 ;	../../shared/src/train_if.c:480: timeout = 0;
   E6E4 C2 03              3070 	clr	_timeout
                           3071 ;	../../shared/src/train_if.c:481: timeout_stop2;
   E6E6 75 C8 60           3072 	mov	_T2CON,#0x60
   E6E9 C2 C6              3073 	clr	_TF2
                           3074 ;	../../shared/src/train_if.c:482: reg_FRAME_LOCK_ISR_LANE = 0;
   E6EB 90 21 43           3075 	mov	dptr,#(_RX_LANE_INTERRUPT + 0x0003)
   E6EE E0                 3076 	movx	a,@dptr
   E6EF 54 BF              3077 	anl	a,#0xbf
   E6F1 F0                 3078 	movx	@dptr,a
                           3079 ;	../../shared/src/train_if.c:483: reg_FRAME_UNLOCK_ISR_LANE = 0;
   E6F2 90 21 43           3080 	mov	dptr,#(_RX_LANE_INTERRUPT + 0x0003)
   E6F5 E0                 3081 	movx	a,@dptr
   E6F6 54 DF              3082 	anl	a,#0xdf
   E6F8 F0                 3083 	movx	@dptr,a
                           3084 ;	../../shared/src/train_if.c:484: reg_REMOTE_STATUS_VALID_ISR_LANE = 0;
   E6F9 90 26 5D           3085 	mov	dptr,#(_TRX_TRAIN_IF_INTERRUPT_LANE + 0x0001)
   E6FC E0                 3086 	movx	a,@dptr
   E6FD 54 FE              3087 	anl	a,#0xfe
   E6FF F0                 3088 	movx	@dptr,a
                           3089 ;	../../shared/src/train_if.c:485: lnx_TX_TRAIN_FRAME_LOCK_DET_FAIL_INT_LANE = 0;
   E700 90 60 5A           3090 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0002)
   E703 E0                 3091 	movx	a,@dptr
   E704 54 FD              3092 	anl	a,#0xfd
   E706 F0                 3093 	movx	@dptr,a
                           3094 ;	../../shared/src/train_if.c:488: if(link_train_mode) {
   E707 90 26 7B           3095 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   E70A E0                 3096 	movx	a,@dptr
   E70B 30 E7 12           3097 	jnb	acc.7,00102$
                           3098 ;	../../shared/src/train_if.c:489: reg_LOCAL_STATUS_FIELD_LANE_15_0 = 0; 
   E70E 90 26 04           3099 	mov	dptr,#_DME_ENC_REG1
   E711 E4                 3100 	clr	a
   E712 F0                 3101 	movx	@dptr,a
   E713 A3                 3102 	inc	dptr
   E714 F0                 3103 	movx	@dptr,a
                           3104 ;	../../shared/src/train_if.c:490: reg_LOCAL_STATUS_FIELD_VALID_LANE = 1; 
                           3105 ;	../../shared/src/train_if.c:491: reg_LOCAL_STATUS_FIELD_VALID_LANE = 0;
   E715 90 26 7A           3106 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0002)
   E718 E0                 3107 	movx	a,@dptr
   E719 44 20              3108 	orl	a,#0x20
   E71B F0                 3109 	movx	@dptr,a
   E71C E0                 3110 	movx	a,@dptr
   E71D 54 DF              3111 	anl	a,#0xdf
   E71F F0                 3112 	movx	@dptr,a
   E720                    3113 00102$:
                           3114 ;	../../shared/src/train_if.c:513: EA = 1;
   E720 D2 AF              3115 	setb	_EA
   E722 02 00 C5           3116 	ljmp	__sdcc_banked_ret
                           3117 	.area CSEG    (CODE)
                           3118 	.area CSEG    (CODE)
                           3119 	.area CABS    (ABS,CODE)
