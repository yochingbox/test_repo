                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:34 2018
                              5 ;--------------------------------------------------------
                              6 	.module tx_train
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
                            979 	.globl _tx_train
                            980 	.globl _tx_train_initial
                            981 	.globl _tx_train_end
                            982 	.globl _tx_g0_train
                            983 	.globl _tx_gn1_train
                            984 	.globl _tx_g1_train
                            985 	.globl _g1n1_maxf0t
                            986 	.globl _g1n1_midpoint
                            987 	.globl _compare_g0
                            988 	.globl _compare_g1n1
                            989 	.globl _tx_train_dummy
                            990 	.globl _tx_reset
                            991 	.globl _update_g0
                            992 	.globl _update_gn1
                            993 	.globl _update_g1
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
                           2053 ;Allocation info for local variables in function 'tx_train'
                           2054 ;------------------------------------------------------------
                           2055 ;------------------------------------------------------------
                           2056 ;	../../shared/src/tx_train.c:23: void tx_train(void)
                           2057 ;	-----------------------------------------
                           2058 ;	 function tx_train
                           2059 ;	-----------------------------------------
   6079                    2060 _tx_train:
                    0002   2061 	ar2 = 0x02
                    0003   2062 	ar3 = 0x03
                    0004   2063 	ar4 = 0x04
                    0005   2064 	ar5 = 0x05
                    0006   2065 	ar6 = 0x06
                    0007   2066 	ar7 = 0x07
                    0000   2067 	ar0 = 0x00
                    0001   2068 	ar1 = 0x01
                           2069 ;	../../shared/src/tx_train.c:28: PHY_STATUS = ST_TXTRAIN;
   6079 90 22 30           2070 	mov	dptr,#_MCU_STATUS0_LANE
   607C 74 29              2071 	mov	a,#0x29
   607E F0                 2072 	movx	@dptr,a
                           2073 ;	../../shared/src/tx_train.c:30: tx_train_initial();
   607F 12 60 C1           2074 	lcall	_tx_train_initial
                           2075 ;	../../shared/src/tx_train.c:32: while (1)
   6082                    2076 00112$:
                           2077 ;	../../shared/src/tx_train.c:34: if( tx_status_pcie_mode ) 
   6082 30 27 FD           2078 	jnb	_tx_status_pcie_mode,00112$
                           2079 ;	../../shared/src/tx_train.c:38: if( reg_EYE_OPEN_EN_RD_LANE ) {
   6085 90 26 7B           2080 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0003)
   6088 E0                 2081 	movx	a,@dptr
   6089 30 E6 24           2082 	jnb	acc.6,00107$
                           2083 ;	../../shared/src/tx_train.c:39: if(lnx_BYPASS_RXTRAIN_LANE==0){			
   608C 90 60 98           2084 	mov	dptr,#_DFE_CONTROL_10
   608F E0                 2085 	movx	a,@dptr
   6090 20 E6 0F           2086 	jb	acc.6,00105$
                           2087 ;	../../shared/src/tx_train.c:42: if(TRAIN_SIM_EN) rx_train_dummy();
   6093 90 E6 07           2088 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   6096 E0                 2089 	movx	a,@dptr
   6097 30 E2 05           2090 	jnb	acc.2,00102$
   609A 12 30 FF           2091 	lcall	_rx_train_dummy
   609D 80 03              2092 	sjmp	00105$
   609F                    2093 00102$:
                           2094 ;	../../shared/src/tx_train.c:45: rx_train();
   609F 12 30 4A           2095 	lcall	_rx_train
   60A2                    2096 00105$:
                           2097 ;	../../shared/src/tx_train.c:47: Send_ctrl_to_tx(0);
   60A2 90 00 00           2098 	mov	dptr,#0x0000
   60A5 78 74              2099 	mov	r0,#_Send_ctrl_to_tx
   60A7 79 E5              2100 	mov	r1,#(_Send_ctrl_to_tx >> 8)
   60A9 7A 01              2101 	mov	r2,#(_Send_ctrl_to_tx >> 16)
   60AB 12 00 B3           2102 	lcall	__sdcc_banked_call
   60AE 80 D2              2103 	sjmp	00112$
   60B0                    2104 00107$:
                           2105 ;	../../shared/src/tx_train.c:57: tx_train_PCIe();
   60B0 12 75 EF           2106 	lcall	_tx_train_PCIe
                           2107 ;	../../shared/src/tx_train.c:58: ctrl_tx_train_done = 1;
   60B3 D2 22              2108 	setb	_ctrl_tx_train_done
                           2109 ;	../../shared/src/tx_train.c:59: ctrl_rx_train_done = 0;
   60B5 C2 21              2110 	clr	_ctrl_rx_train_done
                           2111 ;	../../shared/src/tx_train.c:83: tx_train_end();
   60B7 12 60 CD           2112 	lcall	_tx_train_end
                           2113 ;	../../shared/src/tx_train.c:84: reg_MCU_DEBUG0_LANE_7_0 = 0x59;
   60BA 90 22 B4           2114 	mov	dptr,#_MCU_DEBUG0_LANE
   60BD 74 59              2115 	mov	a,#0x59
   60BF F0                 2116 	movx	@dptr,a
   60C0 22                 2117 	ret
                           2118 ;------------------------------------------------------------
                           2119 ;Allocation info for local variables in function 'tx_train_initial'
                           2120 ;------------------------------------------------------------
                           2121 ;------------------------------------------------------------
                           2122 ;	../../shared/src/tx_train.c:95: void tx_train_initial(void)
                           2123 ;	-----------------------------------------
                           2124 ;	 function tx_train_initial
                           2125 ;	-----------------------------------------
   60C1                    2126 _tx_train_initial:
                           2127 ;	../../shared/src/tx_train.c:100: ctrl_trx_ffe_updated = 1;
   60C1 D2 25              2128 	setb	_ctrl_trx_ffe_updated
                           2129 ;	../../shared/src/tx_train.c:101: ctrl_cdr_phase_on = 0;
   60C3 C2 1E              2130 	clr	_ctrl_cdr_phase_on
                           2131 ;	../../shared/src/tx_train.c:102: tx.num_tx_loop = 0;
   60C5 90 66 A0           2132 	mov	dptr,#(_tx + 0x0002)
   60C8 E4                 2133 	clr	a
   60C9 F0                 2134 	movx	@dptr,a
                           2135 ;	../../shared/src/tx_train.c:104: opt2train();// load the optimal eo for train
   60CA 02 5B DD           2136 	ljmp	_opt2train
                           2137 ;------------------------------------------------------------
                           2138 ;Allocation info for local variables in function 'tx_train_end'
                           2139 ;------------------------------------------------------------
                           2140 ;------------------------------------------------------------
                           2141 ;	../../shared/src/tx_train.c:116: void tx_train_end(void)
                           2142 ;	-----------------------------------------
                           2143 ;	 function tx_train_end
                           2144 ;	-----------------------------------------
   60CD                    2145 _tx_train_end:
                           2146 ;	../../shared/src/tx_train.c:121: update_opt_trx_ffe();
   60CD 12 59 A0           2147 	lcall	_update_opt_trx_ffe
                           2148 ;	../../shared/src/tx_train.c:123: opt2train();
   60D0 12 5B DD           2149 	lcall	_opt2train
                           2150 ;	../../shared/src/tx_train.c:126: if( tx_pipe4_en==1 )
   60D3 30 26 07           2151 	jnb	_tx_pipe4_en,00103$
                           2152 ;	../../shared/src/tx_train.c:127: reg_TX_FFE_TRAIN_DONE_LANE = 1;
   60D6 90 26 79           2153 	mov	dptr,#(_TX_TRAIN_CTRL_LANE + 0x0001)
   60D9 E0                 2154 	movx	a,@dptr
   60DA 44 80              2155 	orl	a,#0x80
   60DC F0                 2156 	movx	@dptr,a
   60DD                    2157 00103$:
   60DD 22                 2158 	ret
                           2159 ;------------------------------------------------------------
                           2160 ;Allocation info for local variables in function 'tx_g0_train'
                           2161 ;------------------------------------------------------------
                           2162 ;idx_ini                   Allocated to registers r2 
                           2163 ;cnt                       Allocated to registers r3 
                           2164 ;------------------------------------------------------------
                           2165 ;	../../shared/src/tx_train.c:142: void tx_g0_train(void)
                           2166 ;	-----------------------------------------
                           2167 ;	 function tx_g0_train
                           2168 ;	-----------------------------------------
   60DE                    2169 _tx_g0_train:
                           2170 ;	../../shared/src/tx_train.c:149: tx.num_count = 0;
   60DE 90 66 A8           2171 	mov	dptr,#(_tx + 0x000a)
   60E1 E4                 2172 	clr	a
   60E2 F0                 2173 	movx	@dptr,a
                           2174 ;	../../shared/src/tx_train.c:150: idx_ini = train_g0_index;
   60E3 90 60 32           2175 	mov	dptr,#_train_g0_index
   60E6 E0                 2176 	movx	a,@dptr
   60E7 FA                 2177 	mov	r2,a
                           2178 ;	../../shared/src/tx_train.c:151: tx.direction = 0;
   60E8 90 66 A9           2179 	mov	dptr,#(_tx + 0x000b)
                           2180 ;	../../shared/src/tx_train.c:152: tx.become_worse = 0;
   60EB E4                 2181 	clr	a
   60EC F0                 2182 	movx	@dptr,a
   60ED 90 66 A7           2183 	mov	dptr,#(_tx + 0x0009)
   60F0 F0                 2184 	movx	@dptr,a
                           2185 ;	../../shared/src/tx_train.c:153: while (cnt-->0)
   60F1 7B 14              2186 	mov	r3,#0x14
   60F3                    2187 00114$:
   60F3 8B 04              2188 	mov	ar4,r3
   60F5 1B                 2189 	dec	r3
   60F6 C3                 2190 	clr	c
   60F7 74 80              2191 	mov	a,#(0x00 ^ 0x80)
   60F9 8C F0              2192 	mov	b,r4
   60FB 63 F0 80           2193 	xrl	b,#0x80
   60FE 95 F0              2194 	subb	a,b
   6100 40 03              2195 	jc	00131$
   6102 02 61 C8           2196 	ljmp	00116$
   6105                    2197 00131$:
                           2198 ;	../../shared/src/tx_train.c:155: if ((tx.num_count >= tag_TX_G0_STEP_NUM || tx.g0_is_min || tx.become_worse) &&
   6105 90 66 A8           2199 	mov	dptr,#(_tx + 0x000a)
   6108 E0                 2200 	movx	a,@dptr
   6109 FC                 2201 	mov	r4,a
   610A 90 60 A6           2202 	mov	dptr,#(_CDS_CTRL_REG1 + 0x0002)
   610D E0                 2203 	movx	a,@dptr
   610E 54 0F              2204 	anl	a,#0x0f
   6110 FD                 2205 	mov	r5,a
   6111 C3                 2206 	clr	c
   6112 EC                 2207 	mov	a,r4
   6113 64 80              2208 	xrl	a,#0x80
   6115 8D F0              2209 	mov	b,r5
   6117 63 F0 80           2210 	xrl	b,#0x80
   611A 95 F0              2211 	subb	a,b
   611C 50 0C              2212 	jnc	00107$
   611E 90 66 A2           2213 	mov	dptr,#(_tx + 0x0004)
   6121 E0                 2214 	movx	a,@dptr
   6122 70 06              2215 	jnz	00107$
   6124 90 66 A7           2216 	mov	dptr,#(_tx + 0x0009)
   6127 E0                 2217 	movx	a,@dptr
   6128 60 32              2218 	jz	00104$
   612A                    2219 00107$:
                           2220 ;	../../shared/src/tx_train.c:156: tx.direction == 0) // switch direction
   612A 90 66 A9           2221 	mov	dptr,#(_tx + 0x000b)
   612D E0                 2222 	movx	a,@dptr
   612E 70 2C              2223 	jnz	00104$
                           2224 ;	../../shared/src/tx_train.c:161: tx.direction = 1;
   6130 90 66 A9           2225 	mov	dptr,#(_tx + 0x000b)
   6133 74 01              2226 	mov	a,#0x01
   6135 F0                 2227 	movx	@dptr,a
                           2228 ;	../../shared/src/tx_train.c:162: tx.num_count = 0;
   6136 90 66 A8           2229 	mov	dptr,#(_tx + 0x000a)
                           2230 ;	../../shared/src/tx_train.c:163: tx.become_worse = 0;
   6139 E4                 2231 	clr	a
   613A F0                 2232 	movx	@dptr,a
   613B 90 66 A7           2233 	mov	dptr,#(_tx + 0x0009)
   613E F0                 2234 	movx	@dptr,a
                           2235 ;	../../shared/src/tx_train.c:165: if (tag_TX_G0_STEP_NUM > 0)
   613F 90 60 A6           2236 	mov	dptr,#(_CDS_CTRL_REG1 + 0x0002)
   6142 E0                 2237 	movx	a,@dptr
   6143 54 0F              2238 	anl	a,#0x0f
   6145 60 15              2239 	jz	00104$
                           2240 ;	../../shared/src/tx_train.c:172: update_g0(idx_ini - train_g0_index);
   6147 90 60 32           2241 	mov	dptr,#_train_g0_index
   614A E0                 2242 	movx	a,@dptr
   614B FC                 2243 	mov	r4,a
   614C EA                 2244 	mov	a,r2
   614D C3                 2245 	clr	c
   614E 9C                 2246 	subb	a,r4
   614F F5 82              2247 	mov	dpl,a
   6151 C0 02              2248 	push	ar2
   6153 C0 03              2249 	push	ar3
   6155 12 71 A1           2250 	lcall	_update_g0
   6158 D0 03              2251 	pop	ar3
   615A D0 02              2252 	pop	ar2
   615C                    2253 00104$:
                           2254 ;	../../shared/src/tx_train.c:176: if (((tx.num_count >= tag_TX_G0_STEP_NUM) || tx.g0_is_max || tx.become_worse) &&
   615C 90 66 A8           2255 	mov	dptr,#(_tx + 0x000a)
   615F E0                 2256 	movx	a,@dptr
   6160 FC                 2257 	mov	r4,a
   6161 90 60 A6           2258 	mov	dptr,#(_CDS_CTRL_REG1 + 0x0002)
   6164 E0                 2259 	movx	a,@dptr
   6165 54 0F              2260 	anl	a,#0x0f
   6167 FD                 2261 	mov	r5,a
   6168 C3                 2262 	clr	c
   6169 EC                 2263 	mov	a,r4
   616A 64 80              2264 	xrl	a,#0x80
   616C 8D F0              2265 	mov	b,r5
   616E 63 F0 80           2266 	xrl	b,#0x80
   6171 95 F0              2267 	subb	a,b
   6173 50 0C              2268 	jnc	00113$
   6175 90 66 A1           2269 	mov	dptr,#(_tx + 0x0003)
   6178 E0                 2270 	movx	a,@dptr
   6179 70 06              2271 	jnz	00113$
   617B 90 66 A7           2272 	mov	dptr,#(_tx + 0x0009)
   617E E0                 2273 	movx	a,@dptr
   617F 60 0A              2274 	jz	00109$
   6181                    2275 00113$:
                           2276 ;	../../shared/src/tx_train.c:177: tx.direction ==1)
   6181 90 66 A9           2277 	mov	dptr,#(_tx + 0x000b)
   6184 E0                 2278 	movx	a,@dptr
   6185 FC                 2279 	mov	r4,a
   6186 BC 01 02           2280 	cjne	r4,#0x01,00140$
   6189 80 3D              2281 	sjmp	00116$
   618B                    2282 00140$:
                           2283 ;	../../shared/src/tx_train.c:182: break;
   618B                    2284 00109$:
                           2285 ;	../../shared/src/tx_train.c:187: tx.num_count ++; //update number of rounds
   618B 90 66 A8           2286 	mov	dptr,#(_tx + 0x000a)
   618E E0                 2287 	movx	a,@dptr
   618F FC                 2288 	mov	r4,a
   6190 0C                 2289 	inc	r4
   6191 90 66 A8           2290 	mov	dptr,#(_tx + 0x000a)
   6194 EC                 2291 	mov	a,r4
   6195 F0                 2292 	movx	@dptr,a
                           2293 ;	../../shared/src/tx_train.c:191: update_g0(tx.direction ? tag_TX_G0_STEP_SIZE : -tag_TX_G0_STEP_SIZE);
   6196 90 66 A9           2294 	mov	dptr,#(_tx + 0x000b)
   6199 E0                 2295 	movx	a,@dptr
   619A 60 0B              2296 	jz	00119$
   619C 90 60 A6           2297 	mov	dptr,#(_CDS_CTRL_REG1 + 0x0002)
   619F E0                 2298 	movx	a,@dptr
   61A0 23                 2299 	rl	a
   61A1 23                 2300 	rl	a
   61A2 54 03              2301 	anl	a,#0x03
   61A4 FC                 2302 	mov	r4,a
   61A5 80 0E              2303 	sjmp	00120$
   61A7                    2304 00119$:
   61A7 90 60 A6           2305 	mov	dptr,#(_CDS_CTRL_REG1 + 0x0002)
   61AA E0                 2306 	movx	a,@dptr
   61AB 23                 2307 	rl	a
   61AC 23                 2308 	rl	a
   61AD 54 03              2309 	anl	a,#0x03
   61AF FD                 2310 	mov	r5,a
   61B0 C3                 2311 	clr	c
   61B1 E4                 2312 	clr	a
   61B2 9D                 2313 	subb	a,r5
   61B3 FD                 2314 	mov	r5,a
   61B4 FC                 2315 	mov	r4,a
   61B5                    2316 00120$:
   61B5 8C 82              2317 	mov	dpl,r4
   61B7 C0 02              2318 	push	ar2
   61B9 C0 03              2319 	push	ar3
   61BB 12 71 A1           2320 	lcall	_update_g0
                           2321 ;	../../shared/src/tx_train.c:192: compare_g0();            
   61BE 12 6B A7           2322 	lcall	_compare_g0
   61C1 D0 03              2323 	pop	ar3
   61C3 D0 02              2324 	pop	ar2
   61C5 02 60 F3           2325 	ljmp	00114$
   61C8                    2326 00116$:
                           2327 ;	../../shared/src/tx_train.c:201: update_g0(opt_g0_index - train_g0_index);
   61C8 90 60 32           2328 	mov	dptr,#_train_g0_index
   61CB E0                 2329 	movx	a,@dptr
   61CC FA                 2330 	mov	r2,a
   61CD 90 67 B3           2331 	mov	dptr,#_opt_g0_index
   61D0 E0                 2332 	movx	a,@dptr
   61D1 C3                 2333 	clr	c
   61D2 9A                 2334 	subb	a,r2
   61D3 F5 82              2335 	mov	dpl,a
   61D5 12 71 A1           2336 	lcall	_update_g0
                           2337 ;	../../shared/src/tx_train.c:203: update_opt_trx_ffe();
   61D8 02 59 A0           2338 	ljmp	_update_opt_trx_ffe
                           2339 ;------------------------------------------------------------
                           2340 ;Allocation info for local variables in function 'tx_gn1_train'
                           2341 ;------------------------------------------------------------
                           2342 ;------------------------------------------------------------
                           2343 ;	../../shared/src/tx_train.c:206: void tx_gn1_train(void)
                           2344 ;	-----------------------------------------
                           2345 ;	 function tx_gn1_train
                           2346 ;	-----------------------------------------
   61DB                    2347 _tx_gn1_train:
                           2348 ;	../../shared/src/tx_train.c:214: if (tag_TX_GN1_MAXF0T_EN) // max f0t mode
   61DB 90 60 A4           2349 	mov	dptr,#_CDS_CTRL_REG1
   61DE E0                 2350 	movx	a,@dptr
   61DF 30 E6 3C           2351 	jnb	acc.6,00102$
                           2352 ;	../../shared/src/tx_train.c:219: &tx.gn1_is_min, &tx.gn1_is_max, //IS_MAX IS_MIN
                           2353 ;	../../shared/src/tx_train.c:218: &train_gn1_index,//ptr, //IDX
                           2354 ;	../../shared/src/tx_train.c:216: tag_TX_TRAIN_P2P_HOLD, //HOLD
   61E2 90 67 A0           2355 	mov	dptr,#_tx_train_p2p_hold
   61E5 E0                 2356 	movx	a,@dptr
   61E6 FA                 2357 	mov	r2,a
   61E7 74 51              2358 	mov	a,#_update_gn1
   61E9 C0 E0              2359 	push	acc
   61EB 74 72              2360 	mov	a,#(_update_gn1 >> 8)
   61ED C0 E0              2361 	push	acc
   61EF 74 A5              2362 	mov	a,#(_tx + 0x0007)
   61F1 C0 E0              2363 	push	acc
   61F3 74 66              2364 	mov	a,#((_tx + 0x0007) >> 8)
   61F5 C0 E0              2365 	push	acc
   61F7 E4                 2366 	clr	a
   61F8 C0 E0              2367 	push	acc
   61FA 74 A6              2368 	mov	a,#(_tx + 0x0008)
   61FC C0 E0              2369 	push	acc
   61FE 74 66              2370 	mov	a,#((_tx + 0x0008) >> 8)
   6200 C0 E0              2371 	push	acc
   6202 E4                 2372 	clr	a
   6203 C0 E0              2373 	push	acc
   6205 74 30              2374 	mov	a,#_train_gn1_index
   6207 C0 E0              2375 	push	acc
   6209 74 60              2376 	mov	a,#(_train_gn1_index >> 8)
   620B C0 E0              2377 	push	acc
   620D E4                 2378 	clr	a
   620E C0 E0              2379 	push	acc
   6210 E4                 2380 	clr	a
   6211 C0 E0              2381 	push	acc
   6213 8A 82              2382 	mov	dpl,r2
   6215 12 62 EB           2383 	lcall	_g1n1_maxf0t
   6218 E5 81              2384 	mov	a,sp
   621A 24 F4              2385 	add	a,#0xf4
   621C F5 81              2386 	mov	sp,a
   621E                    2387 00102$:
                           2388 ;	../../shared/src/tx_train.c:222: if (tag_TX_GN1_MIDPOINT_EN){
   621E 90 60 38           2389 	mov	dptr,#_DFE_CONTROL_1
   6221 E0                 2390 	movx	a,@dptr
   6222 30 E5 3C           2391 	jnb	acc.5,00105$
                           2392 ;	../../shared/src/tx_train.c:227: &tx.gn1_is_min, &tx.gn1_is_max,//IS_MAX IS_MIN
                           2393 ;	../../shared/src/tx_train.c:226: &train_gn1_index, //ptr, //IDX
                           2394 ;	../../shared/src/tx_train.c:224: tag_TX_TRAIN_P2P_HOLD,
   6225 90 67 A0           2395 	mov	dptr,#_tx_train_p2p_hold
   6228 E0                 2396 	movx	a,@dptr
   6229 FA                 2397 	mov	r2,a
   622A 74 51              2398 	mov	a,#_update_gn1
   622C C0 E0              2399 	push	acc
   622E 74 72              2400 	mov	a,#(_update_gn1 >> 8)
   6230 C0 E0              2401 	push	acc
   6232 74 A5              2402 	mov	a,#(_tx + 0x0007)
   6234 C0 E0              2403 	push	acc
   6236 74 66              2404 	mov	a,#((_tx + 0x0007) >> 8)
   6238 C0 E0              2405 	push	acc
   623A E4                 2406 	clr	a
   623B C0 E0              2407 	push	acc
   623D 74 A6              2408 	mov	a,#(_tx + 0x0008)
   623F C0 E0              2409 	push	acc
   6241 74 66              2410 	mov	a,#((_tx + 0x0008) >> 8)
   6243 C0 E0              2411 	push	acc
   6245 E4                 2412 	clr	a
   6246 C0 E0              2413 	push	acc
   6248 74 30              2414 	mov	a,#_train_gn1_index
   624A C0 E0              2415 	push	acc
   624C 74 60              2416 	mov	a,#(_train_gn1_index >> 8)
   624E C0 E0              2417 	push	acc
   6250 E4                 2418 	clr	a
   6251 C0 E0              2419 	push	acc
   6253 E4                 2420 	clr	a
   6254 C0 E0              2421 	push	acc
   6256 8A 82              2422 	mov	dpl,r2
   6258 12 66 10           2423 	lcall	_g1n1_midpoint
   625B E5 81              2424 	mov	a,sp
   625D 24 F4              2425 	add	a,#0xf4
   625F F5 81              2426 	mov	sp,a
   6261                    2427 00105$:
   6261 22                 2428 	ret
                           2429 ;------------------------------------------------------------
                           2430 ;Allocation info for local variables in function 'tx_g1_train'
                           2431 ;------------------------------------------------------------
                           2432 ;------------------------------------------------------------
                           2433 ;	../../shared/src/tx_train.c:234: void tx_g1_train(void)
                           2434 ;	-----------------------------------------
                           2435 ;	 function tx_g1_train
                           2436 ;	-----------------------------------------
   6262                    2437 _tx_g1_train:
                           2438 ;	../../shared/src/tx_train.c:242: if (tag_TX_G1_MAXF0T_EN) // max f0t mode
   6262 90 60 A4           2439 	mov	dptr,#_CDS_CTRL_REG1
   6265 E0                 2440 	movx	a,@dptr
   6266 30 E7 3D           2441 	jnb	acc.7,00102$
                           2442 ;	../../shared/src/tx_train.c:247: &tx.g1_is_min, &tx.g1_is_max, //IS_MAX IS_MIN
                           2443 ;	../../shared/src/tx_train.c:246: &train_g1_index, //ptr, //IDX
                           2444 ;	../../shared/src/tx_train.c:244: tag_TX_TRAIN_P2P_HOLD, //HOLD
   6269 90 67 A0           2445 	mov	dptr,#_tx_train_p2p_hold
   626C E0                 2446 	movx	a,@dptr
   626D FA                 2447 	mov	r2,a
   626E 74 55              2448 	mov	a,#_update_g1
   6270 C0 E0              2449 	push	acc
   6272 74 73              2450 	mov	a,#(_update_g1 >> 8)
   6274 C0 E0              2451 	push	acc
   6276 74 A3              2452 	mov	a,#(_tx + 0x0005)
   6278 C0 E0              2453 	push	acc
   627A 74 66              2454 	mov	a,#((_tx + 0x0005) >> 8)
   627C C0 E0              2455 	push	acc
   627E E4                 2456 	clr	a
   627F C0 E0              2457 	push	acc
   6281 74 A4              2458 	mov	a,#(_tx + 0x0006)
   6283 C0 E0              2459 	push	acc
   6285 74 66              2460 	mov	a,#((_tx + 0x0006) >> 8)
   6287 C0 E0              2461 	push	acc
   6289 E4                 2462 	clr	a
   628A C0 E0              2463 	push	acc
   628C 74 31              2464 	mov	a,#_train_g1_index
   628E C0 E0              2465 	push	acc
   6290 74 60              2466 	mov	a,#(_train_g1_index >> 8)
   6292 C0 E0              2467 	push	acc
   6294 E4                 2468 	clr	a
   6295 C0 E0              2469 	push	acc
   6297 74 01              2470 	mov	a,#0x01
   6299 C0 E0              2471 	push	acc
   629B 8A 82              2472 	mov	dpl,r2
   629D 12 62 EB           2473 	lcall	_g1n1_maxf0t
   62A0 E5 81              2474 	mov	a,sp
   62A2 24 F4              2475 	add	a,#0xf4
   62A4 F5 81              2476 	mov	sp,a
   62A6                    2477 00102$:
                           2478 ;	../../shared/src/tx_train.c:251: if (tag_TX_G1_MIDPOINT_EN){ // midpoint mode
   62A6 90 60 33           2479 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   62A9 E0                 2480 	movx	a,@dptr
   62AA 30 E1 3D           2481 	jnb	acc.1,00105$
                           2482 ;	../../shared/src/tx_train.c:256: &tx.g1_is_min, &tx.g1_is_max,//IS_MIN, IS_MAX
                           2483 ;	../../shared/src/tx_train.c:255: &train_g1_index, //ptr, //IDX
                           2484 ;	../../shared/src/tx_train.c:253: tag_TX_TRAIN_P2P_HOLD,  //HOLD
   62AD 90 67 A0           2485 	mov	dptr,#_tx_train_p2p_hold
   62B0 E0                 2486 	movx	a,@dptr
   62B1 FA                 2487 	mov	r2,a
   62B2 74 55              2488 	mov	a,#_update_g1
   62B4 C0 E0              2489 	push	acc
   62B6 74 73              2490 	mov	a,#(_update_g1 >> 8)
   62B8 C0 E0              2491 	push	acc
   62BA 74 A3              2492 	mov	a,#(_tx + 0x0005)
   62BC C0 E0              2493 	push	acc
   62BE 74 66              2494 	mov	a,#((_tx + 0x0005) >> 8)
   62C0 C0 E0              2495 	push	acc
   62C2 E4                 2496 	clr	a
   62C3 C0 E0              2497 	push	acc
   62C5 74 A4              2498 	mov	a,#(_tx + 0x0006)
   62C7 C0 E0              2499 	push	acc
   62C9 74 66              2500 	mov	a,#((_tx + 0x0006) >> 8)
   62CB C0 E0              2501 	push	acc
   62CD E4                 2502 	clr	a
   62CE C0 E0              2503 	push	acc
   62D0 74 31              2504 	mov	a,#_train_g1_index
   62D2 C0 E0              2505 	push	acc
   62D4 74 60              2506 	mov	a,#(_train_g1_index >> 8)
   62D6 C0 E0              2507 	push	acc
   62D8 E4                 2508 	clr	a
   62D9 C0 E0              2509 	push	acc
   62DB 74 01              2510 	mov	a,#0x01
   62DD C0 E0              2511 	push	acc
   62DF 8A 82              2512 	mov	dpl,r2
   62E1 12 66 10           2513 	lcall	_g1n1_midpoint
   62E4 E5 81              2514 	mov	a,sp
   62E6 24 F4              2515 	add	a,#0xf4
   62E8 F5 81              2516 	mov	sp,a
   62EA                    2517 00105$:
   62EA 22                 2518 	ret
                           2519 ;------------------------------------------------------------
                           2520 ;Allocation info for local variables in function 'g1n1_maxf0t'
                           2521 ;------------------------------------------------------------
                           2522 ;X                         Allocated to stack - offset -3
                           2523 ;IDX                       Allocated to stack - offset -6
                           2524 ;IS_MIN                    Allocated to stack - offset -9
                           2525 ;IS_MAX                    Allocated to stack - offset -12
                           2526 ;update_g                  Allocated to stack - offset -14
                           2527 ;HOLD                      Allocated to stack - offset 1
                           2528 ;num_count                 Allocated to registers r2 
                           2529 ;dir                       Allocated to registers b0 
                           2530 ;idx_ini                   Allocated to stack - offset 2
                           2531 ;update                    Allocated to stack - offset 3
                           2532 ;NUM                       Allocated to registers r3 
                           2533 ;STEP                      Allocated to stack - offset 4
                           2534 ;cnt                       Allocated to registers r4 
                           2535 ;sloc0                     Allocated to stack - offset 5
                           2536 ;sloc1                     Allocated to stack - offset 8
                           2537 ;sloc2                     Allocated to stack - offset 11
                           2538 ;sloc3                     Allocated to stack - offset 12
                           2539 ;sloc4                     Allocated to stack - offset 13
                           2540 ;------------------------------------------------------------
                           2541 ;	../../shared/src/tx_train.c:279: void g1n1_maxf0t(bool HOLD,  uint8_t X, uint8_t* IDX, 
                           2542 ;	-----------------------------------------
                           2543 ;	 function g1n1_maxf0t
                           2544 ;	-----------------------------------------
   62EB                    2545 _g1n1_maxf0t:
   62EB C0 18              2546 	push	_bp
   62ED 85 81 18           2547 	mov	_bp,sp
   62F0 C0 82              2548 	push	dpl
   62F2 E5 81              2549 	mov	a,sp
   62F4 24 0D              2550 	add	a,#0x0d
   62F6 F5 81              2551 	mov	sp,a
                           2552 ;	../../shared/src/tx_train.c:295: if(X){
   62F8 E5 18              2553 	mov	a,_bp
   62FA 24 FD              2554 	add	a,#0xfd
   62FC F8                 2555 	mov	r0,a
   62FD E6                 2556 	mov	a,@r0
   62FE 60 19              2557 	jz	00102$
                           2558 ;	../../shared/src/tx_train.c:296: NUM = tag_TX_G1_STEP_NUM;
   6300 90 60 8C           2559 	mov	dptr,#_DFE_CONTROL_7
   6303 E0                 2560 	movx	a,@dptr
   6304 C4                 2561 	swap	a
   6305 23                 2562 	rl	a
   6306 54 1F              2563 	anl	a,#0x1f
   6308 FB                 2564 	mov	r3,a
                           2565 ;	../../shared/src/tx_train.c:297: STEP= tag_TX_G1_STEP_SIZE;
   6309 90 60 A7           2566 	mov	dptr,#(_CDS_CTRL_REG1 + 0x0003)
   630C E0                 2567 	movx	a,@dptr
   630D 54 03              2568 	anl	a,#0x03
   630F FC                 2569 	mov	r4,a
   6310 E5 18              2570 	mov	a,_bp
   6312 24 04              2571 	add	a,#0x04
   6314 F8                 2572 	mov	r0,a
   6315 A6 04              2573 	mov	@r0,ar4
   6317 80 18              2574 	sjmp	00103$
   6319                    2575 00102$:
                           2576 ;	../../shared/src/tx_train.c:299: NUM = tag_TX_GN1_STEP_NUM;
   6319 90 60 A7           2577 	mov	dptr,#(_CDS_CTRL_REG1 + 0x0003)
   631C E0                 2578 	movx	a,@dptr
   631D 03                 2579 	rr	a
   631E 03                 2580 	rr	a
   631F 54 1F              2581 	anl	a,#0x1f
   6321 FB                 2582 	mov	r3,a
                           2583 ;	../../shared/src/tx_train.c:300: STEP= tag_TX_GN1_STEP_SIZE;
   6322 90 60 A6           2584 	mov	dptr,#(_CDS_CTRL_REG1 + 0x0002)
   6325 E0                 2585 	movx	a,@dptr
   6326 C4                 2586 	swap	a
   6327 54 03              2587 	anl	a,#0x03
   6329 FD                 2588 	mov	r5,a
   632A E5 18              2589 	mov	a,_bp
   632C 24 04              2590 	add	a,#0x04
   632E F8                 2591 	mov	r0,a
   632F A6 05              2592 	mov	@r0,ar5
   6331                    2593 00103$:
                           2594 ;	../../shared/src/tx_train.c:302: idx_ini = *IDX;
   6331 E5 18              2595 	mov	a,_bp
   6333 24 FA              2596 	add	a,#0xfa
   6335 F8                 2597 	mov	r0,a
   6336 86 05              2598 	mov	ar5,@r0
   6338 08                 2599 	inc	r0
   6339 86 06              2600 	mov	ar6,@r0
   633B 08                 2601 	inc	r0
   633C 86 07              2602 	mov	ar7,@r0
   633E 8D 82              2603 	mov	dpl,r5
   6340 8E 83              2604 	mov	dph,r6
   6342 8F F0              2605 	mov	b,r7
   6344 12 79 34           2606 	lcall	__gptrget
   6347 FA                 2607 	mov	r2,a
   6348 A8 18              2608 	mov	r0,_bp
   634A 08                 2609 	inc	r0
   634B 08                 2610 	inc	r0
   634C A6 02              2611 	mov	@r0,ar2
                           2612 ;	../../shared/src/tx_train.c:303: dir = HOLD ? 0 : 1;    
   634E A8 18              2613 	mov	r0,_bp
   6350 08                 2614 	inc	r0
   6351 E6                 2615 	mov	a,@r0
   6352 B4 01 00           2616 	cjne	a,#0x01,00161$
   6355                    2617 00161$:
   6355 92 28              2618 	mov	b0,c
                           2619 ;	../../shared/src/tx_train.c:304: tx.become_worse = 0; 
   6357 90 66 A7           2620 	mov	dptr,#(_tx + 0x0009)
   635A E4                 2621 	clr	a
   635B F0                 2622 	movx	@dptr,a
                           2623 ;	../../shared/src/tx_train.c:305: num_count = 0;
   635C 7A 00              2624 	mov	r2,#0x00
                           2625 ;	../../shared/src/tx_train.c:307: while (cnt-->0)
   635E E5 18              2626 	mov	a,_bp
   6360 24 F7              2627 	add	a,#0xf7
   6362 F8                 2628 	mov	r0,a
   6363 E5 18              2629 	mov	a,_bp
   6365 24 05              2630 	add	a,#0x05
   6367 F9                 2631 	mov	r1,a
   6368 E6                 2632 	mov	a,@r0
   6369 F7                 2633 	mov	@r1,a
   636A 08                 2634 	inc	r0
   636B 09                 2635 	inc	r1
   636C E6                 2636 	mov	a,@r0
   636D F7                 2637 	mov	@r1,a
   636E 08                 2638 	inc	r0
   636F 09                 2639 	inc	r1
   6370 E6                 2640 	mov	a,@r0
   6371 F7                 2641 	mov	@r1,a
   6372 E5 18              2642 	mov	a,_bp
   6374 24 F4              2643 	add	a,#0xf4
   6376 F8                 2644 	mov	r0,a
   6377 E5 18              2645 	mov	a,_bp
   6379 24 08              2646 	add	a,#0x08
   637B F9                 2647 	mov	r1,a
   637C E6                 2648 	mov	a,@r0
   637D F7                 2649 	mov	@r1,a
   637E 08                 2650 	inc	r0
   637F 09                 2651 	inc	r1
   6380 E6                 2652 	mov	a,@r0
   6381 F7                 2653 	mov	@r1,a
   6382 08                 2654 	inc	r0
   6383 09                 2655 	inc	r1
   6384 E6                 2656 	mov	a,@r0
   6385 F7                 2657 	mov	@r1,a
   6386 E5 18              2658 	mov	a,_bp
   6388 24 0B              2659 	add	a,#0x0b
   638A F8                 2660 	mov	r0,a
   638B E4                 2661 	clr	a
   638C B5 03 00           2662 	cjne	a,ar3,00162$
   638F                    2663 00162$:
   638F E4                 2664 	clr	a
   6390 33                 2665 	rlc	a
   6391 F6                 2666 	mov	@r0,a
   6392 E5 18              2667 	mov	a,_bp
   6394 24 04              2668 	add	a,#0x04
   6396 F8                 2669 	mov	r0,a
   6397 E5 18              2670 	mov	a,_bp
   6399 24 0C              2671 	add	a,#0x0c
   639B F9                 2672 	mov	r1,a
   639C C3                 2673 	clr	c
   639D E4                 2674 	clr	a
   639E 96                 2675 	subb	a,@r0
   639F F7                 2676 	mov	@r1,a
   63A0 7C 14              2677 	mov	r4,#0x14
   63A2                    2678 00131$:
   63A2 C0 05              2679 	push	ar5
   63A4 C0 06              2680 	push	ar6
   63A6 C0 07              2681 	push	ar7
   63A8 8C 05              2682 	mov	ar5,r4
   63AA 1C                 2683 	dec	r4
   63AB C3                 2684 	clr	c
   63AC 74 80              2685 	mov	a,#(0x00 ^ 0x80)
   63AE 8D F0              2686 	mov	b,r5
   63B0 63 F0 80           2687 	xrl	b,#0x80
   63B3 95 F0              2688 	subb	a,b
   63B5 D0 07              2689 	pop	ar7
   63B7 D0 06              2690 	pop	ar6
   63B9 D0 05              2691 	pop	ar5
   63BB 40 03              2692 	jc	00163$
   63BD 02 65 AF           2693 	ljmp	00133$
   63C0                    2694 00163$:
                           2695 ;	../../shared/src/tx_train.c:309: if(HOLD) {
   63C0 A8 18              2696 	mov	r0,_bp
   63C2 08                 2697 	inc	r0
   63C3 E6                 2698 	mov	a,@r0
   63C4 70 03              2699 	jnz	00164$
   63C6 02 64 82           2700 	ljmp	00129$
   63C9                    2701 00164$:
                           2702 ;	../../shared/src/tx_train.c:310: if( (num_count >= NUM || *IS_MIN || tx.become_worse) && dir==0 ) {
   63C9 EA                 2703 	mov	a,r2
   63CA B5 03 00           2704 	cjne	a,ar3,00165$
   63CD                    2705 00165$:
   63CD 50 18              2706 	jnc	00110$
   63CF E5 18              2707 	mov	a,_bp
   63D1 24 05              2708 	add	a,#0x05
   63D3 F8                 2709 	mov	r0,a
   63D4 86 82              2710 	mov	dpl,@r0
   63D6 08                 2711 	inc	r0
   63D7 86 83              2712 	mov	dph,@r0
   63D9 08                 2713 	inc	r0
   63DA 86 F0              2714 	mov	b,@r0
   63DC 12 79 34           2715 	lcall	__gptrget
   63DF 70 06              2716 	jnz	00110$
   63E1 90 66 A7           2717 	mov	dptr,#(_tx + 0x0009)
   63E4 E0                 2718 	movx	a,@dptr
   63E5 60 64              2719 	jz	00107$
   63E7                    2720 00110$:
   63E7 20 28 61           2721 	jb	b0,00107$
                           2722 ;	../../shared/src/tx_train.c:311: dir = 1;
   63EA D2 28              2723 	setb	b0
                           2724 ;	../../shared/src/tx_train.c:312: num_count = 0;
   63EC 7A 00              2725 	mov	r2,#0x00
                           2726 ;	../../shared/src/tx_train.c:313: tx.become_worse = 0;		  
   63EE 90 66 A7           2727 	mov	dptr,#(_tx + 0x0009)
   63F1 E4                 2728 	clr	a
   63F2 F0                 2729 	movx	@dptr,a
                           2730 ;	../../shared/src/tx_train.c:314: if(NUM > 0)  {
   63F3 EB                 2731 	mov	a,r3
   63F4 60 55              2732 	jz	00107$
                           2733 ;	../../shared/src/tx_train.c:316: update = idx_ini - *IDX;					
   63F6 C0 04              2734 	push	ar4
   63F8 8D 82              2735 	mov	dpl,r5
   63FA 8E 83              2736 	mov	dph,r6
   63FC 8F F0              2737 	mov	b,r7
   63FE 12 79 34           2738 	lcall	__gptrget
   6401 FC                 2739 	mov	r4,a
   6402 A8 18              2740 	mov	r0,_bp
   6404 08                 2741 	inc	r0
   6405 08                 2742 	inc	r0
   6406 E6                 2743 	mov	a,@r0
   6407 C3                 2744 	clr	c
   6408 9C                 2745 	subb	a,r4
   6409 FC                 2746 	mov	r4,a
   640A E5 18              2747 	mov	a,_bp
   640C 24 03              2748 	add	a,#0x03
   640E F8                 2749 	mov	r0,a
   640F A6 04              2750 	mov	@r0,ar4
                           2751 ;	../../shared/src/tx_train.c:317: update_g(update);		  
   6411 C0 02              2752 	push	ar2
   6413 C0 03              2753 	push	ar3
   6415 C0 04              2754 	push	ar4
   6417 C0 05              2755 	push	ar5
   6419 C0 06              2756 	push	ar6
   641B C0 07              2757 	push	ar7
   641D C0 25              2758 	push	bits
   641F 74 3B              2759 	mov	a,#00171$
   6421 C0 E0              2760 	push	acc
   6423 74 64              2761 	mov	a,#(00171$ >> 8)
   6425 C0 E0              2762 	push	acc
   6427 E5 18              2763 	mov	a,_bp
   6429 24 F2              2764 	add	a,#0xf2
   642B F8                 2765 	mov	r0,a
   642C E6                 2766 	mov	a,@r0
   642D C0 E0              2767 	push	acc
   642F 08                 2768 	inc	r0
   6430 E6                 2769 	mov	a,@r0
   6431 C0 E0              2770 	push	acc
   6433 E5 18              2771 	mov	a,_bp
   6435 24 03              2772 	add	a,#0x03
   6437 F8                 2773 	mov	r0,a
   6438 86 82              2774 	mov	dpl,@r0
   643A 22                 2775 	ret
   643B                    2776 00171$:
   643B D0 25              2777 	pop	bits
   643D D0 07              2778 	pop	ar7
   643F D0 06              2779 	pop	ar6
   6441 D0 05              2780 	pop	ar5
   6443 D0 04              2781 	pop	ar4
   6445 D0 03              2782 	pop	ar3
   6447 D0 02              2783 	pop	ar2
                           2784 ;	../../shared/src/tx_train.c:355: update_opt_trx_ffe();
   6449 D0 04              2785 	pop	ar4
                           2786 ;	../../shared/src/tx_train.c:317: update_g(update);		  
   644B                    2787 00107$:
                           2788 ;	../../shared/src/tx_train.c:320: if((num_count >= NUM || *IS_MAX || tx.become_worse) && dir==1 ) break;
   644B EA                 2789 	mov	a,r2
   644C B5 03 00           2790 	cjne	a,ar3,00172$
   644F                    2791 00172$:
   644F 50 1B              2792 	jnc	00115$
   6451 E5 18              2793 	mov	a,_bp
   6453 24 08              2794 	add	a,#0x08
   6455 F8                 2795 	mov	r0,a
   6456 86 82              2796 	mov	dpl,@r0
   6458 08                 2797 	inc	r0
   6459 86 83              2798 	mov	dph,@r0
   645B 08                 2799 	inc	r0
   645C 86 F0              2800 	mov	b,@r0
   645E 12 79 34           2801 	lcall	__gptrget
   6461 70 09              2802 	jnz	00115$
   6463 90 66 A7           2803 	mov	dptr,#(_tx + 0x0009)
   6466 E0                 2804 	movx	a,@dptr
   6467 70 03              2805 	jnz	00175$
   6469 02 65 36           2806 	ljmp	00130$
   646C                    2807 00175$:
   646C                    2808 00115$:
   646C C0 04              2809 	push	ar4
   646E A2 28              2810 	mov	c,b0
   6470 E4                 2811 	clr	a
   6471 33                 2812 	rlc	a
   6472 FC                 2813 	mov	r4,a
   6473 BC 01 02           2814 	cjne	r4,#0x01,00176$
   6476 80 05              2815 	sjmp	00177$
   6478                    2816 00176$:
   6478 D0 04              2817 	pop	ar4
   647A 02 65 36           2818 	ljmp	00130$
   647D                    2819 00177$:
   647D D0 04              2820 	pop	ar4
   647F 02 65 AF           2821 	ljmp	00133$
   6482                    2822 00129$:
                           2823 ;	../../shared/src/tx_train.c:323: if( (num_count >= NUM || *IS_MAX || tx.become_worse) && dir==1 )
   6482 EA                 2824 	mov	a,r2
   6483 B5 03 00           2825 	cjne	a,ar3,00178$
   6486                    2826 00178$:
   6486 50 18              2827 	jnc	00120$
   6488 E5 18              2828 	mov	a,_bp
   648A 24 08              2829 	add	a,#0x08
   648C F8                 2830 	mov	r0,a
   648D 86 82              2831 	mov	dpl,@r0
   648F 08                 2832 	inc	r0
   6490 86 83              2833 	mov	dph,@r0
   6492 08                 2834 	inc	r0
   6493 86 F0              2835 	mov	b,@r0
   6495 12 79 34           2836 	lcall	__gptrget
   6498 70 06              2837 	jnz	00120$
   649A 90 66 A7           2838 	mov	dptr,#(_tx + 0x0009)
   649D E0                 2839 	movx	a,@dptr
   649E 60 14              2840 	jz	00117$
   64A0                    2841 00120$:
   64A0 C0 04              2842 	push	ar4
   64A2 A2 28              2843 	mov	c,b0
   64A4 E4                 2844 	clr	a
   64A5 33                 2845 	rlc	a
   64A6 FC                 2846 	mov	r4,a
   64A7 BC 01 02           2847 	cjne	r4,#0x01,00182$
   64AA 80 04              2848 	sjmp	00183$
   64AC                    2849 00182$:
   64AC D0 04              2850 	pop	ar4
   64AE 80 04              2851 	sjmp	00117$
   64B0                    2852 00183$:
   64B0 D0 04              2853 	pop	ar4
                           2854 ;	../../shared/src/tx_train.c:324: dir = 0;
   64B2 C2 28              2855 	clr	b0
   64B4                    2856 00117$:
                           2857 ;	../../shared/src/tx_train.c:325: num_count = 0;
   64B4 7A 00              2858 	mov	r2,#0x00
                           2859 ;	../../shared/src/tx_train.c:326: tx.become_worse = 0;
   64B6 90 66 A7           2860 	mov	dptr,#(_tx + 0x0009)
   64B9 E4                 2861 	clr	a
   64BA F0                 2862 	movx	@dptr,a
                           2863 ;	../../shared/src/tx_train.c:328: if(NUM > 0)
   64BB EB                 2864 	mov	a,r3
   64BC 60 55              2865 	jz	00122$
                           2866 ;	../../shared/src/tx_train.c:330: update = idx_ini - *IDX;					
   64BE C0 04              2867 	push	ar4
   64C0 8D 82              2868 	mov	dpl,r5
   64C2 8E 83              2869 	mov	dph,r6
   64C4 8F F0              2870 	mov	b,r7
   64C6 12 79 34           2871 	lcall	__gptrget
   64C9 FC                 2872 	mov	r4,a
   64CA A8 18              2873 	mov	r0,_bp
   64CC 08                 2874 	inc	r0
   64CD 08                 2875 	inc	r0
   64CE E6                 2876 	mov	a,@r0
   64CF C3                 2877 	clr	c
   64D0 9C                 2878 	subb	a,r4
   64D1 FC                 2879 	mov	r4,a
   64D2 E5 18              2880 	mov	a,_bp
   64D4 24 03              2881 	add	a,#0x03
   64D6 F8                 2882 	mov	r0,a
   64D7 A6 04              2883 	mov	@r0,ar4
                           2884 ;	../../shared/src/tx_train.c:331: update_g(update);		  
   64D9 C0 02              2885 	push	ar2
   64DB C0 03              2886 	push	ar3
   64DD C0 04              2887 	push	ar4
   64DF C0 05              2888 	push	ar5
   64E1 C0 06              2889 	push	ar6
   64E3 C0 07              2890 	push	ar7
   64E5 C0 25              2891 	push	bits
   64E7 74 03              2892 	mov	a,#00185$
   64E9 C0 E0              2893 	push	acc
   64EB 74 65              2894 	mov	a,#(00185$ >> 8)
   64ED C0 E0              2895 	push	acc
   64EF E5 18              2896 	mov	a,_bp
   64F1 24 F2              2897 	add	a,#0xf2
   64F3 F8                 2898 	mov	r0,a
   64F4 E6                 2899 	mov	a,@r0
   64F5 C0 E0              2900 	push	acc
   64F7 08                 2901 	inc	r0
   64F8 E6                 2902 	mov	a,@r0
   64F9 C0 E0              2903 	push	acc
   64FB E5 18              2904 	mov	a,_bp
   64FD 24 03              2905 	add	a,#0x03
   64FF F8                 2906 	mov	r0,a
   6500 86 82              2907 	mov	dpl,@r0
   6502 22                 2908 	ret
   6503                    2909 00185$:
   6503 D0 25              2910 	pop	bits
   6505 D0 07              2911 	pop	ar7
   6507 D0 06              2912 	pop	ar6
   6509 D0 05              2913 	pop	ar5
   650B D0 04              2914 	pop	ar4
   650D D0 03              2915 	pop	ar3
   650F D0 02              2916 	pop	ar2
                           2917 ;	../../shared/src/tx_train.c:355: update_opt_trx_ffe();
   6511 D0 04              2918 	pop	ar4
                           2919 ;	../../shared/src/tx_train.c:331: update_g(update);		  
   6513                    2920 00122$:
                           2921 ;	../../shared/src/tx_train.c:333: if((num_count >= NUM || *IS_MIN || tx.become_worse) && dir==0 ) break;
   6513 E5 18              2922 	mov	a,_bp
   6515 24 0B              2923 	add	a,#0x0b
   6517 F8                 2924 	mov	r0,a
   6518 E6                 2925 	mov	a,@r0
   6519 60 18              2926 	jz	00127$
   651B E5 18              2927 	mov	a,_bp
   651D 24 05              2928 	add	a,#0x05
   651F F8                 2929 	mov	r0,a
   6520 86 82              2930 	mov	dpl,@r0
   6522 08                 2931 	inc	r0
   6523 86 83              2932 	mov	dph,@r0
   6525 08                 2933 	inc	r0
   6526 86 F0              2934 	mov	b,@r0
   6528 12 79 34           2935 	lcall	__gptrget
   652B 70 06              2936 	jnz	00127$
   652D 90 66 A7           2937 	mov	dptr,#(_tx + 0x0009)
   6530 E0                 2938 	movx	a,@dptr
   6531 60 03              2939 	jz	00130$
   6533                    2940 00127$:
   6533 30 28 79           2941 	jnb	b0,00133$
   6536                    2942 00130$:
                           2943 ;	../../shared/src/tx_train.c:336: update = dir ? STEP : -STEP;
   6536 30 28 0E           2944 	jnb	b0,00139$
   6539 E5 18              2945 	mov	a,_bp
   653B 24 04              2946 	add	a,#0x04
   653D F8                 2947 	mov	r0,a
   653E E5 18              2948 	mov	a,_bp
   6540 24 0D              2949 	add	a,#0x0d
   6542 F9                 2950 	mov	r1,a
   6543 E6                 2951 	mov	a,@r0
   6544 F7                 2952 	mov	@r1,a
   6545 80 0C              2953 	sjmp	00140$
   6547                    2954 00139$:
   6547 E5 18              2955 	mov	a,_bp
   6549 24 0C              2956 	add	a,#0x0c
   654B F8                 2957 	mov	r0,a
   654C E5 18              2958 	mov	a,_bp
   654E 24 0D              2959 	add	a,#0x0d
   6550 F9                 2960 	mov	r1,a
   6551 E6                 2961 	mov	a,@r0
   6552 F7                 2962 	mov	@r1,a
   6553                    2963 00140$:
   6553 C0 04              2964 	push	ar4
   6555 E5 18              2965 	mov	a,_bp
   6557 24 0D              2966 	add	a,#0x0d
   6559 F8                 2967 	mov	r0,a
   655A 86 04              2968 	mov	ar4,@r0
   655C E5 18              2969 	mov	a,_bp
   655E 24 03              2970 	add	a,#0x03
   6560 F8                 2971 	mov	r0,a
   6561 A6 04              2972 	mov	@r0,ar4
                           2973 ;	../../shared/src/tx_train.c:337: num_count ++; //update number of rounds
   6563 0A                 2974 	inc	r2
                           2975 ;	../../shared/src/tx_train.c:338: update_g(update);
   6564 C0 02              2976 	push	ar2
   6566 C0 03              2977 	push	ar3
   6568 C0 04              2978 	push	ar4
   656A C0 05              2979 	push	ar5
   656C C0 06              2980 	push	ar6
   656E C0 07              2981 	push	ar7
   6570 C0 25              2982 	push	bits
   6572 74 8E              2983 	mov	a,#00191$
   6574 C0 E0              2984 	push	acc
   6576 74 65              2985 	mov	a,#(00191$ >> 8)
   6578 C0 E0              2986 	push	acc
   657A E5 18              2987 	mov	a,_bp
   657C 24 F2              2988 	add	a,#0xf2
   657E F8                 2989 	mov	r0,a
   657F E6                 2990 	mov	a,@r0
   6580 C0 E0              2991 	push	acc
   6582 08                 2992 	inc	r0
   6583 E6                 2993 	mov	a,@r0
   6584 C0 E0              2994 	push	acc
   6586 E5 18              2995 	mov	a,_bp
   6588 24 03              2996 	add	a,#0x03
   658A F8                 2997 	mov	r0,a
   658B 86 82              2998 	mov	dpl,@r0
   658D 22                 2999 	ret
   658E                    3000 00191$:
   658E D0 25              3001 	pop	bits
                           3002 ;	../../shared/src/tx_train.c:339: compare_g1n1(X); // compare train data with saved optimal data
   6590 E5 18              3003 	mov	a,_bp
   6592 24 FD              3004 	add	a,#0xfd
   6594 F8                 3005 	mov	r0,a
   6595 86 82              3006 	mov	dpl,@r0
   6597 C0 25              3007 	push	bits
   6599 12 6D A6           3008 	lcall	_compare_g1n1
   659C D0 25              3009 	pop	bits
   659E D0 07              3010 	pop	ar7
   65A0 D0 06              3011 	pop	ar6
   65A2 D0 05              3012 	pop	ar5
   65A4 D0 04              3013 	pop	ar4
   65A6 D0 03              3014 	pop	ar3
   65A8 D0 02              3015 	pop	ar2
   65AA D0 04              3016 	pop	ar4
   65AC 02 63 A2           3017 	ljmp	00131$
   65AF                    3018 00133$:
                           3019 ;	../../shared/src/tx_train.c:350: if(X)
   65AF E5 18              3020 	mov	a,_bp
   65B1 24 FD              3021 	add	a,#0xfd
   65B3 F8                 3022 	mov	r0,a
   65B4 E6                 3023 	mov	a,@r0
   65B5 60 29              3024 	jz	00135$
                           3025 ;	../../shared/src/tx_train.c:351: update_g(opt_g1_index - *IDX);
   65B7 8D 82              3026 	mov	dpl,r5
   65B9 8E 83              3027 	mov	dph,r6
   65BB 8F F0              3028 	mov	b,r7
   65BD 12 79 34           3029 	lcall	__gptrget
   65C0 FA                 3030 	mov	r2,a
   65C1 90 67 B5           3031 	mov	dptr,#_opt_g1_index
   65C4 E0                 3032 	movx	a,@dptr
   65C5 C3                 3033 	clr	c
   65C6 9A                 3034 	subb	a,r2
   65C7 F5 82              3035 	mov	dpl,a
   65C9 74 DE              3036 	mov	a,#00193$
   65CB C0 E0              3037 	push	acc
   65CD 74 65              3038 	mov	a,#(00193$ >> 8)
   65CF C0 E0              3039 	push	acc
   65D1 E5 18              3040 	mov	a,_bp
   65D3 24 F2              3041 	add	a,#0xf2
   65D5 F8                 3042 	mov	r0,a
   65D6 E6                 3043 	mov	a,@r0
   65D7 C0 E0              3044 	push	acc
   65D9 08                 3045 	inc	r0
   65DA E6                 3046 	mov	a,@r0
   65DB C0 E0              3047 	push	acc
   65DD 22                 3048 	ret
   65DE                    3049 00193$:
   65DE 80 27              3050 	sjmp	00136$
   65E0                    3051 00135$:
                           3052 ;	../../shared/src/tx_train.c:353: update_g(opt_gn1_index - *IDX);
   65E0 8D 82              3053 	mov	dpl,r5
   65E2 8E 83              3054 	mov	dph,r6
   65E4 8F F0              3055 	mov	b,r7
   65E6 12 79 34           3056 	lcall	__gptrget
   65E9 FD                 3057 	mov	r5,a
   65EA 90 67 B4           3058 	mov	dptr,#_opt_gn1_index
   65ED E0                 3059 	movx	a,@dptr
   65EE C3                 3060 	clr	c
   65EF 9D                 3061 	subb	a,r5
   65F0 F5 82              3062 	mov	dpl,a
   65F2 74 07              3063 	mov	a,#00194$
   65F4 C0 E0              3064 	push	acc
   65F6 74 66              3065 	mov	a,#(00194$ >> 8)
   65F8 C0 E0              3066 	push	acc
   65FA E5 18              3067 	mov	a,_bp
   65FC 24 F2              3068 	add	a,#0xf2
   65FE F8                 3069 	mov	r0,a
   65FF E6                 3070 	mov	a,@r0
   6600 C0 E0              3071 	push	acc
   6602 08                 3072 	inc	r0
   6603 E6                 3073 	mov	a,@r0
   6604 C0 E0              3074 	push	acc
   6606 22                 3075 	ret
   6607                    3076 00194$:
   6607                    3077 00136$:
                           3078 ;	../../shared/src/tx_train.c:355: update_opt_trx_ffe();
   6607 12 59 A0           3079 	lcall	_update_opt_trx_ffe
   660A 85 18 81           3080 	mov	sp,_bp
   660D D0 18              3081 	pop	_bp
   660F 22                 3082 	ret
                           3083 ;------------------------------------------------------------
                           3084 ;Allocation info for local variables in function 'g1n1_midpoint'
                           3085 ;------------------------------------------------------------
                           3086 ;X                         Allocated to stack - offset -3
                           3087 ;IDX                       Allocated to stack - offset -6
                           3088 ;IS_MIN                    Allocated to stack - offset -9
                           3089 ;IS_MAX                    Allocated to stack - offset -12
                           3090 ;update_g                  Allocated to stack - offset -14
                           3091 ;HOLD                      Allocated to stack - offset 1
                           3092 ;num_count                 Allocated to stack - offset 2
                           3093 ;dir                       Allocated to registers b0 
                           3094 ;idx_ini                   Allocated to stack - offset 3
                           3095 ;idx_lo                    Allocated to registers r7 
                           3096 ;idx_hi                    Allocated to stack - offset 10
                           3097 ;update                    Allocated to registers r2 
                           3098 ;OBTH                      Allocated to registers 
                           3099 ;TH                        Allocated to stack - offset 4
                           3100 ;OS                        Allocated to stack - offset 6
                           3101 ;STEP                      Allocated to stack - offset 7
                           3102 ;OB                        Allocated to stack - offset 8
                           3103 ;cnt                       Allocated to stack - offset 9
                           3104 ;sloc0                     Allocated to stack - offset 10
                           3105 ;sloc1                     Allocated to stack - offset 11
                           3106 ;sloc2                     Allocated to stack - offset 13
                           3107 ;sloc3                     Allocated to stack - offset 15
                           3108 ;sloc4                     Allocated to stack - offset 18
                           3109 ;------------------------------------------------------------
                           3110 ;	../../shared/src/tx_train.c:379: void g1n1_midpoint(bool HOLD, uint8_t X, 
                           3111 ;	-----------------------------------------
                           3112 ;	 function g1n1_midpoint
                           3113 ;	-----------------------------------------
   6610                    3114 _g1n1_midpoint:
   6610 C0 18              3115 	push	_bp
   6612 85 81 18           3116 	mov	_bp,sp
   6615 C0 82              3117 	push	dpl
   6617 E5 81              3118 	mov	a,sp
   6619 24 14              3119 	add	a,#0x14
   661B F5 81              3120 	mov	sp,a
                           3121 ;	../../shared/src/tx_train.c:399: dir = HOLD ? 0 : 1;
   661D A8 18              3122 	mov	r0,_bp
   661F 08                 3123 	inc	r0
   6620 E6                 3124 	mov	a,@r0
   6621 B4 01 00           3125 	cjne	a,#0x01,00200$
   6624                    3126 00200$:
   6624 92 28              3127 	mov	b0,c
                           3128 ;	../../shared/src/tx_train.c:400: idx_ini = *IDX;
   6626 E5 18              3129 	mov	a,_bp
   6628 24 FA              3130 	add	a,#0xfa
   662A F8                 3131 	mov	r0,a
   662B 86 03              3132 	mov	ar3,@r0
   662D 08                 3133 	inc	r0
   662E 86 04              3134 	mov	ar4,@r0
   6630 08                 3135 	inc	r0
   6631 86 05              3136 	mov	ar5,@r0
   6633 8B 82              3137 	mov	dpl,r3
   6635 8C 83              3138 	mov	dph,r4
   6637 8D F0              3139 	mov	b,r5
   6639 12 79 34           3140 	lcall	__gptrget
   663C FE                 3141 	mov	r6,a
   663D E5 18              3142 	mov	a,_bp
   663F 24 03              3143 	add	a,#0x03
   6641 F8                 3144 	mov	r0,a
   6642 A6 06              3145 	mov	@r0,ar6
                           3146 ;	../../shared/src/tx_train.c:401: idx_lo  = idx_ini;
   6644 E5 18              3147 	mov	a,_bp
   6646 24 03              3148 	add	a,#0x03
   6648 F8                 3149 	mov	r0,a
   6649 86 07              3150 	mov	ar7,@r0
                           3151 ;	../../shared/src/tx_train.c:402: idx_hi  = idx_ini;
   664B E5 18              3152 	mov	a,_bp
   664D 24 03              3153 	add	a,#0x03
   664F F8                 3154 	mov	r0,a
   6650 E5 18              3155 	mov	a,_bp
   6652 24 0A              3156 	add	a,#0x0a
   6654 F9                 3157 	mov	r1,a
   6655 E6                 3158 	mov	a,@r0
   6656 F7                 3159 	mov	@r1,a
                           3160 ;	../../shared/src/tx_train.c:403: tx.become_worse = 0;
   6657 90 66 A7           3161 	mov	dptr,#(_tx + 0x0009)
   665A E4                 3162 	clr	a
   665B F0                 3163 	movx	@dptr,a
                           3164 ;	../../shared/src/tx_train.c:405: num_count = 0;
   665C A8 18              3165 	mov	r0,_bp
   665E 08                 3166 	inc	r0
   665F 08                 3167 	inc	r0
   6660 76 00              3168 	mov	@r0,#0x00
                           3169 ;	../../shared/src/tx_train.c:407: if(X){          
   6662 E5 18              3170 	mov	a,_bp
   6664 24 FD              3171 	add	a,#0xfd
   6666 F8                 3172 	mov	r0,a
   6667 E6                 3173 	mov	a,@r0
   6668 70 03              3174 	jnz	00201$
   666A 02 67 5E           3175 	ljmp	00102$
   666D                    3176 00201$:
                           3177 ;	../../shared/src/tx_train.c:408: TH   = ((opt.f0t*tag_TX_G1_MIDPOINT_THRES_K)>>tag_THRES_K_SHFT) + tag_TX_G1_MIDPOINT_THRES_C;
   666D C0 07              3178 	push	ar7
   666F 90 66 8D           3179 	mov	dptr,#(_opt + 0x001e)
   6672 E0                 3180 	movx	a,@dptr
   6673 FF                 3181 	mov	r7,a
   6674 90 60 85           3182 	mov	dptr,#(_DFE_TEST_4 + 0x0001)
   6677 E0                 3183 	movx	a,@dptr
   6678 FE                 3184 	mov	r6,a
   6679 E5 18              3185 	mov	a,_bp
   667B 24 0B              3186 	add	a,#0x0b
   667D F8                 3187 	mov	r0,a
   667E A6 07              3188 	mov	@r0,ar7
   6680 08                 3189 	inc	r0
   6681 76 00              3190 	mov	@r0,#0x00
   6683 7A 00              3191 	mov	r2,#0x00
   6685 C0 03              3192 	push	ar3
   6687 C0 04              3193 	push	ar4
   6689 C0 05              3194 	push	ar5
   668B C0 07              3195 	push	ar7
   668D C0 25              3196 	push	bits
   668F C0 06              3197 	push	ar6
   6691 C0 02              3198 	push	ar2
   6693 E5 18              3199 	mov	a,_bp
   6695 24 0B              3200 	add	a,#0x0b
   6697 F8                 3201 	mov	r0,a
   6698 86 82              3202 	mov	dpl,@r0
   669A 08                 3203 	inc	r0
   669B 86 83              3204 	mov	dph,@r0
   669D 12 78 4F           3205 	lcall	__mulint
   66A0 AA 82              3206 	mov	r2,dpl
   66A2 AE 83              3207 	mov	r6,dph
   66A4 15 81              3208 	dec	sp
   66A6 15 81              3209 	dec	sp
   66A8 D0 25              3210 	pop	bits
   66AA D0 07              3211 	pop	ar7
   66AC D0 05              3212 	pop	ar5
   66AE D0 04              3213 	pop	ar4
   66B0 D0 03              3214 	pop	ar3
   66B2 E5 18              3215 	mov	a,_bp
   66B4 24 0B              3216 	add	a,#0x0b
   66B6 F8                 3217 	mov	r0,a
   66B7 A6 02              3218 	mov	@r0,ar2
   66B9 EE                 3219 	mov	a,r6
   66BA C4                 3220 	swap	a
   66BB C6                 3221 	xch	a,@r0
   66BC C4                 3222 	swap	a
   66BD 54 0F              3223 	anl	a,#0x0f
   66BF 66                 3224 	xrl	a,@r0
   66C0 C6                 3225 	xch	a,@r0
   66C1 54 0F              3226 	anl	a,#0x0f
   66C3 C6                 3227 	xch	a,@r0
   66C4 66                 3228 	xrl	a,@r0
   66C5 C6                 3229 	xch	a,@r0
   66C6 30 E3 02           3230 	jnb	acc.3,00202$
   66C9 44 F0              3231 	orl	a,#0xf0
   66CB                    3232 00202$:
   66CB 08                 3233 	inc	r0
   66CC F6                 3234 	mov	@r0,a
   66CD 90 60 84           3235 	mov	dptr,#_DFE_TEST_4
   66D0 E0                 3236 	movx	a,@dptr
   66D1 FF                 3237 	mov	r7,a
   66D2 33                 3238 	rlc	a
   66D3 95 E0              3239 	subb	a,acc
   66D5 FA                 3240 	mov	r2,a
   66D6 E5 18              3241 	mov	a,_bp
   66D8 24 0B              3242 	add	a,#0x0b
   66DA F8                 3243 	mov	r0,a
   66DB EF                 3244 	mov	a,r7
   66DC 26                 3245 	add	a,@r0
   66DD FF                 3246 	mov	r7,a
   66DE EA                 3247 	mov	a,r2
   66DF 08                 3248 	inc	r0
   66E0 36                 3249 	addc	a,@r0
   66E1 FA                 3250 	mov	r2,a
   66E2 E5 18              3251 	mov	a,_bp
   66E4 24 04              3252 	add	a,#0x04
   66E6 F8                 3253 	mov	r0,a
   66E7 A6 07              3254 	mov	@r0,ar7
   66E9 08                 3255 	inc	r0
   66EA A6 02              3256 	mov	@r0,ar2
                           3257 ;	../../shared/src/tx_train.c:409: OS   = tag_TX_G1_MIDPOINT_INDEX_OS;
   66EC E5 18              3258 	mov	a,_bp
   66EE 24 06              3259 	add	a,#0x06
   66F0 F8                 3260 	mov	r0,a
   66F1 76 00              3261 	mov	@r0,#0x00
                           3262 ;	../../shared/src/tx_train.c:411: STEP = tag_TX_G1_STEP_SIZE;
   66F3 90 60 A7           3263 	mov	dptr,#(_CDS_CTRL_REG1 + 0x0003)
   66F6 E0                 3264 	movx	a,@dptr
   66F7 54 03              3265 	anl	a,#0x03
   66F9 FA                 3266 	mov	r2,a
   66FA E5 18              3267 	mov	a,_bp
   66FC 24 07              3268 	add	a,#0x07
   66FE F8                 3269 	mov	r0,a
   66FF A6 02              3270 	mov	@r0,ar2
                           3271 ;	../../shared/src/tx_train.c:412: OB   = (train.f1 < 0 || (train.f2 < 0 && ((train.f1 + train.f2) < tag_TX_G1_OVERBOOST_THRES)))? 1:0;
   6701 90 66 46           3272 	mov	dptr,#(_train + 0x0006)
   6704 E0                 3273 	movx	a,@dptr
   6705 FE                 3274 	mov	r6,a
   6706 D0 07              3275 	pop	ar7
   6708 20 E7 41           3276 	jb	acc.7,00136$
   670B 90 66 5B           3277 	mov	dptr,#(_train + 0x001b)
   670E E0                 3278 	movx	a,@dptr
   670F FA                 3279 	mov	r2,a
   6710 30 E7 2D           3280 	jnb	acc.7,00138$
   6713 C0 07              3281 	push	ar7
   6715 E5 18              3282 	mov	a,_bp
   6717 24 0B              3283 	add	a,#0x0b
   6719 F8                 3284 	mov	r0,a
   671A A6 06              3285 	mov	@r0,ar6
   671C EE                 3286 	mov	a,r6
   671D 33                 3287 	rlc	a
   671E 95 E0              3288 	subb	a,acc
   6720 08                 3289 	inc	r0
   6721 F6                 3290 	mov	@r0,a
   6722 EA                 3291 	mov	a,r2
   6723 33                 3292 	rlc	a
   6724 95 E0              3293 	subb	a,acc
   6726 FE                 3294 	mov	r6,a
   6727 E5 18              3295 	mov	a,_bp
   6729 24 0B              3296 	add	a,#0x0b
   672B F8                 3297 	mov	r0,a
   672C EA                 3298 	mov	a,r2
   672D 26                 3299 	add	a,@r0
   672E FA                 3300 	mov	r2,a
   672F EE                 3301 	mov	a,r6
   6730 08                 3302 	inc	r0
   6731 36                 3303 	addc	a,@r0
   6732 FE                 3304 	mov	r6,a
   6733 C3                 3305 	clr	c
   6734 EA                 3306 	mov	a,r2
   6735 94 03              3307 	subb	a,#0x03
   6737 EE                 3308 	mov	a,r6
   6738 64 80              3309 	xrl	a,#0x80
   673A 94 80              3310 	subb	a,#0x80
   673C D0 07              3311 	pop	ar7
   673E 40 04              3312 	jc	00139$
   6740                    3313 00138$:
   6740 7A 00              3314 	mov	r2,#0x00
   6742 80 02              3315 	sjmp	00140$
   6744                    3316 00139$:
   6744 7A 01              3317 	mov	r2,#0x01
   6746                    3318 00140$:
   6746 EA                 3319 	mov	a,r2
   6747 70 03              3320 	jnz	00136$
   6749 FA                 3321 	mov	r2,a
   674A 80 02              3322 	sjmp	00137$
   674C                    3323 00136$:
   674C 7A 01              3324 	mov	r2,#0x01
   674E                    3325 00137$:
   674E EA                 3326 	mov	a,r2
   674F 60 02              3327 	jz	00133$
   6751 74 01              3328 	mov	a,#0x01
   6753                    3329 00133$:
   6753 FA                 3330 	mov	r2,a
   6754 E5 18              3331 	mov	a,_bp
   6756 24 08              3332 	add	a,#0x08
   6758 F8                 3333 	mov	r0,a
   6759 A6 02              3334 	mov	@r0,ar2
   675B 02 68 48           3335 	ljmp	00197$
   675E                    3336 00102$:
                           3337 ;	../../shared/src/tx_train.c:414: TH   = ((opt.f0t*tag_TX_GN1_MIDPOINT_THRES_K)>>tag_THRES_K_SHFT) + tag_TX_GN1_MIDPOINT_THRES_C;
   675E C0 07              3338 	push	ar7
   6760 90 66 8D           3339 	mov	dptr,#(_opt + 0x001e)
   6763 E0                 3340 	movx	a,@dptr
   6764 FE                 3341 	mov	r6,a
   6765 90 60 51           3342 	mov	dptr,#(_TRAIN_CONTROL_0 + 0x0001)
   6768 E0                 3343 	movx	a,@dptr
   6769 FA                 3344 	mov	r2,a
   676A E5 18              3345 	mov	a,_bp
   676C 24 0D              3346 	add	a,#0x0d
   676E F8                 3347 	mov	r0,a
   676F A6 06              3348 	mov	@r0,ar6
   6771 08                 3349 	inc	r0
   6772 76 00              3350 	mov	@r0,#0x00
   6774 8A 06              3351 	mov	ar6,r2
   6776 7F 00              3352 	mov	r7,#0x00
   6778 C0 03              3353 	push	ar3
   677A C0 04              3354 	push	ar4
   677C C0 05              3355 	push	ar5
   677E C0 25              3356 	push	bits
   6780 C0 06              3357 	push	ar6
   6782 C0 07              3358 	push	ar7
   6784 E5 18              3359 	mov	a,_bp
   6786 24 0D              3360 	add	a,#0x0d
   6788 F8                 3361 	mov	r0,a
   6789 86 82              3362 	mov	dpl,@r0
   678B 08                 3363 	inc	r0
   678C 86 83              3364 	mov	dph,@r0
   678E 12 78 4F           3365 	lcall	__mulint
   6791 AE 82              3366 	mov	r6,dpl
   6793 AF 83              3367 	mov	r7,dph
   6795 15 81              3368 	dec	sp
   6797 15 81              3369 	dec	sp
   6799 D0 25              3370 	pop	bits
   679B D0 05              3371 	pop	ar5
   679D D0 04              3372 	pop	ar4
   679F D0 03              3373 	pop	ar3
   67A1 E5 18              3374 	mov	a,_bp
   67A3 24 0D              3375 	add	a,#0x0d
   67A5 F8                 3376 	mov	r0,a
   67A6 A6 06              3377 	mov	@r0,ar6
   67A8 EF                 3378 	mov	a,r7
   67A9 C4                 3379 	swap	a
   67AA C6                 3380 	xch	a,@r0
   67AB C4                 3381 	swap	a
   67AC 54 0F              3382 	anl	a,#0x0f
   67AE 66                 3383 	xrl	a,@r0
   67AF C6                 3384 	xch	a,@r0
   67B0 54 0F              3385 	anl	a,#0x0f
   67B2 C6                 3386 	xch	a,@r0
   67B3 66                 3387 	xrl	a,@r0
   67B4 C6                 3388 	xch	a,@r0
   67B5 30 E3 02           3389 	jnb	acc.3,00208$
   67B8 44 F0              3390 	orl	a,#0xf0
   67BA                    3391 00208$:
   67BA 08                 3392 	inc	r0
   67BB F6                 3393 	mov	@r0,a
   67BC 90 60 50           3394 	mov	dptr,#_TRAIN_CONTROL_0
   67BF E0                 3395 	movx	a,@dptr
   67C0 FE                 3396 	mov	r6,a
   67C1 33                 3397 	rlc	a
   67C2 95 E0              3398 	subb	a,acc
   67C4 FF                 3399 	mov	r7,a
   67C5 E5 18              3400 	mov	a,_bp
   67C7 24 0D              3401 	add	a,#0x0d
   67C9 F8                 3402 	mov	r0,a
   67CA EE                 3403 	mov	a,r6
   67CB 26                 3404 	add	a,@r0
   67CC FE                 3405 	mov	r6,a
   67CD EF                 3406 	mov	a,r7
   67CE 08                 3407 	inc	r0
   67CF 36                 3408 	addc	a,@r0
   67D0 FF                 3409 	mov	r7,a
   67D1 E5 18              3410 	mov	a,_bp
   67D3 24 04              3411 	add	a,#0x04
   67D5 F8                 3412 	mov	r0,a
   67D6 A6 06              3413 	mov	@r0,ar6
   67D8 08                 3414 	inc	r0
   67D9 A6 07              3415 	mov	@r0,ar7
                           3416 ;	../../shared/src/tx_train.c:415: OS   = tag_TX_GN1_MIDPOINT_INDEX_OS;
   67DB E5 18              3417 	mov	a,_bp
   67DD 24 06              3418 	add	a,#0x06
   67DF F8                 3419 	mov	r0,a
   67E0 76 FC              3420 	mov	@r0,#0xFC
                           3421 ;	../../shared/src/tx_train.c:417: STEP = tag_TX_GN1_STEP_SIZE;
   67E2 90 60 A6           3422 	mov	dptr,#(_CDS_CTRL_REG1 + 0x0002)
   67E5 E0                 3423 	movx	a,@dptr
   67E6 C4                 3424 	swap	a
   67E7 54 03              3425 	anl	a,#0x03
   67E9 FE                 3426 	mov	r6,a
   67EA E5 18              3427 	mov	a,_bp
   67EC 24 07              3428 	add	a,#0x07
   67EE F8                 3429 	mov	r0,a
   67EF A6 06              3430 	mov	@r0,ar6
                           3431 ;	../../shared/src/tx_train.c:418: OB   =  ((train.f0 < 63 && train.fn1 < tag_TX_GN1_OVERBOOST_THRES) || (train.f0 >= 63 && train.f0a >= 63))? 1:0;
   67F1 90 66 5A           3432 	mov	dptr,#(_train + 0x001a)
   67F4 E0                 3433 	movx	a,@dptr
   67F5 FE                 3434 	mov	r6,a
   67F6 BE 3F 00           3435 	cjne	r6,#0x3F,00209$
   67F9                    3436 00209$:
   67F9 E4                 3437 	clr	a
   67FA 33                 3438 	rlc	a
   67FB FA                 3439 	mov	r2,a
   67FC D0 07              3440 	pop	ar7
   67FE EA                 3441 	mov	a,r2
   67FF 60 0C              3442 	jz	00146$
   6801 90 66 5D           3443 	mov	dptr,#(_train + 0x001d)
   6804 E0                 3444 	movx	a,@dptr
   6805 FE                 3445 	mov	r6,a
   6806 C3                 3446 	clr	c
   6807 64 80              3447 	xrl	a,#0x80
   6809 94 83              3448 	subb	a,#0x83
   680B 40 04              3449 	jc	00147$
   680D                    3450 00146$:
   680D 7E 00              3451 	mov	r6,#0x00
   680F 80 02              3452 	sjmp	00148$
   6811                    3453 00147$:
   6811 7E 01              3454 	mov	r6,#0x01
   6813                    3455 00148$:
   6813 EE                 3456 	mov	a,r6
   6814 70 23              3457 	jnz	00144$
   6816 EA                 3458 	mov	a,r2
   6817 B4 01 00           3459 	cjne	a,#0x01,00213$
   681A                    3460 00213$:
   681A E4                 3461 	clr	a
   681B 33                 3462 	rlc	a
   681C FE                 3463 	mov	r6,a
   681D 60 0E              3464 	jz	00149$
   681F 90 66 59           3465 	mov	dptr,#(_train + 0x0019)
   6822 E0                 3466 	movx	a,@dptr
   6823 FE                 3467 	mov	r6,a
   6824 BE 3F 00           3468 	cjne	r6,#0x3F,00215$
   6827                    3469 00215$:
   6827 B3                 3470 	cpl	c
   6828 E4                 3471 	clr	a
   6829 33                 3472 	rlc	a
   682A FE                 3473 	mov	r6,a
   682B 70 04              3474 	jnz	00150$
   682D                    3475 00149$:
   682D 7E 00              3476 	mov	r6,#0x00
   682F 80 02              3477 	sjmp	00151$
   6831                    3478 00150$:
   6831 7E 01              3479 	mov	r6,#0x01
   6833                    3480 00151$:
   6833 EE                 3481 	mov	a,r6
   6834 70 03              3482 	jnz	00144$
   6836 FE                 3483 	mov	r6,a
   6837 80 02              3484 	sjmp	00145$
   6839                    3485 00144$:
   6839 7E 01              3486 	mov	r6,#0x01
   683B                    3487 00145$:
   683B EE                 3488 	mov	a,r6
   683C 60 02              3489 	jz	00141$
   683E 74 01              3490 	mov	a,#0x01
   6840                    3491 00141$:
   6840 FE                 3492 	mov	r6,a
   6841 E5 18              3493 	mov	a,_bp
   6843 24 08              3494 	add	a,#0x08
   6845 F8                 3495 	mov	r0,a
   6846 A6 06              3496 	mov	@r0,ar6
                           3497 ;	../../shared/src/tx_train.c:426: while(cnt-->0)
   6848                    3498 00197$:
   6848 E5 18              3499 	mov	a,_bp
   684A 24 F7              3500 	add	a,#0xf7
   684C F8                 3501 	mov	r0,a
   684D E5 18              3502 	mov	a,_bp
   684F 24 0F              3503 	add	a,#0x0f
   6851 F9                 3504 	mov	r1,a
   6852 E6                 3505 	mov	a,@r0
   6853 F7                 3506 	mov	@r1,a
   6854 08                 3507 	inc	r0
   6855 09                 3508 	inc	r1
   6856 E6                 3509 	mov	a,@r0
   6857 F7                 3510 	mov	@r1,a
   6858 08                 3511 	inc	r0
   6859 09                 3512 	inc	r1
   685A E6                 3513 	mov	a,@r0
   685B F7                 3514 	mov	@r1,a
   685C E5 18              3515 	mov	a,_bp
   685E 24 F4              3516 	add	a,#0xf4
   6860 F8                 3517 	mov	r0,a
   6861 E5 18              3518 	mov	a,_bp
   6863 24 12              3519 	add	a,#0x12
   6865 F9                 3520 	mov	r1,a
   6866 E6                 3521 	mov	a,@r0
   6867 F7                 3522 	mov	@r1,a
   6868 08                 3523 	inc	r0
   6869 09                 3524 	inc	r1
   686A E6                 3525 	mov	a,@r0
   686B F7                 3526 	mov	@r1,a
   686C 08                 3527 	inc	r0
   686D 09                 3528 	inc	r1
   686E E6                 3529 	mov	a,@r0
   686F F7                 3530 	mov	@r1,a
   6870 E5 18              3531 	mov	a,_bp
   6872 24 07              3532 	add	a,#0x07
   6874 F8                 3533 	mov	r0,a
   6875 C3                 3534 	clr	c
   6876 E4                 3535 	clr	a
   6877 96                 3536 	subb	a,@r0
   6878 FE                 3537 	mov	r6,a
   6879 E5 18              3538 	mov	a,_bp
   687B 24 09              3539 	add	a,#0x09
   687D F8                 3540 	mov	r0,a
   687E 76 14              3541 	mov	@r0,#0x14
   6880                    3542 00128$:
   6880 C0 07              3543 	push	ar7
   6882 E5 18              3544 	mov	a,_bp
   6884 24 09              3545 	add	a,#0x09
   6886 F8                 3546 	mov	r0,a
   6887 86 07              3547 	mov	ar7,@r0
   6889 E5 18              3548 	mov	a,_bp
   688B 24 09              3549 	add	a,#0x09
   688D F8                 3550 	mov	r0,a
   688E 16                 3551 	dec	@r0
   688F C3                 3552 	clr	c
   6890 74 80              3553 	mov	a,#(0x00 ^ 0x80)
   6892 8F F0              3554 	mov	b,r7
   6894 63 F0 80           3555 	xrl	b,#0x80
   6897 95 F0              3556 	subb	a,b
   6899 D0 07              3557 	pop	ar7
   689B 40 03              3558 	jc	00220$
   689D 02 6B 4D           3559 	ljmp	00130$
   68A0                    3560 00220$:
                           3561 ;	../../shared/src/tx_train.c:433: if(HOLD)
   68A0 A8 18              3562 	mov	r0,_bp
   68A2 08                 3563 	inc	r0
   68A3 E6                 3564 	mov	a,@r0
   68A4 70 03              3565 	jnz	00221$
   68A6 02 69 72           3566 	ljmp	00121$
   68A9                    3567 00221$:
                           3568 ;	../../shared/src/tx_train.c:435: if( (*IS_MIN || tx.become_worse) && dir==0) {
   68A9 E5 18              3569 	mov	a,_bp
   68AB 24 0F              3570 	add	a,#0x0f
   68AD F8                 3571 	mov	r0,a
   68AE 86 82              3572 	mov	dpl,@r0
   68B0 08                 3573 	inc	r0
   68B1 86 83              3574 	mov	dph,@r0
   68B3 08                 3575 	inc	r0
   68B4 86 F0              3576 	mov	b,@r0
   68B6 12 79 34           3577 	lcall	__gptrget
   68B9 70 09              3578 	jnz	00107$
   68BB 90 66 A7           3579 	mov	dptr,#(_tx + 0x0009)
   68BE E0                 3580 	movx	a,@dptr
   68BF 70 03              3581 	jnz	00223$
   68C1 02 69 41           3582 	ljmp	00105$
   68C4                    3583 00223$:
   68C4                    3584 00107$:
   68C4 20 28 7A           3585 	jb	b0,00105$
                           3586 ;	../../shared/src/tx_train.c:436: dir = 1;
   68C7 C0 07              3587 	push	ar7
   68C9 D2 28              3588 	setb	b0
                           3589 ;	../../shared/src/tx_train.c:437: tx.become_worse = 0;
   68CB 90 66 A7           3590 	mov	dptr,#(_tx + 0x0009)
   68CE E4                 3591 	clr	a
   68CF F0                 3592 	movx	@dptr,a
                           3593 ;	../../shared/src/tx_train.c:438: update = idx_ini - *IDX;
   68D0 8B 82              3594 	mov	dpl,r3
   68D2 8C 83              3595 	mov	dph,r4
   68D4 8D F0              3596 	mov	b,r5
   68D6 12 79 34           3597 	lcall	__gptrget
   68D9 FF                 3598 	mov	r7,a
   68DA E5 18              3599 	mov	a,_bp
   68DC 24 03              3600 	add	a,#0x03
   68DE F8                 3601 	mov	r0,a
   68DF E6                 3602 	mov	a,@r0
   68E0 C3                 3603 	clr	c
   68E1 9F                 3604 	subb	a,r7
   68E2 FF                 3605 	mov	r7,a
   68E3 FA                 3606 	mov	r2,a
                           3607 ;	../../shared/src/tx_train.c:439: update_g(update);				
   68E4 C0 02              3608 	push	ar2
   68E6 C0 03              3609 	push	ar3
   68E8 C0 04              3610 	push	ar4
   68EA C0 05              3611 	push	ar5
   68EC C0 06              3612 	push	ar6
   68EE C0 07              3613 	push	ar7
   68F0 C0 25              3614 	push	bits
   68F2 74 09              3615 	mov	a,#00225$
   68F4 C0 E0              3616 	push	acc
   68F6 74 69              3617 	mov	a,#(00225$ >> 8)
   68F8 C0 E0              3618 	push	acc
   68FA E5 18              3619 	mov	a,_bp
   68FC 24 F2              3620 	add	a,#0xf2
   68FE F8                 3621 	mov	r0,a
   68FF E6                 3622 	mov	a,@r0
   6900 C0 E0              3623 	push	acc
   6902 08                 3624 	inc	r0
   6903 E6                 3625 	mov	a,@r0
   6904 C0 E0              3626 	push	acc
   6906 8A 82              3627 	mov	dpl,r2
   6908 22                 3628 	ret
   6909                    3629 00225$:
   6909 D0 25              3630 	pop	bits
   690B D0 07              3631 	pop	ar7
   690D D0 06              3632 	pop	ar6
   690F D0 05              3633 	pop	ar5
   6911 D0 04              3634 	pop	ar4
   6913 D0 03              3635 	pop	ar3
   6915 D0 02              3636 	pop	ar2
                           3637 ;	../../shared/src/tx_train.c:440: num_count += abs(update);
   6917 8A 82              3638 	mov	dpl,r2
   6919 C0 03              3639 	push	ar3
   691B C0 04              3640 	push	ar4
   691D C0 05              3641 	push	ar5
   691F C0 06              3642 	push	ar6
   6921 C0 25              3643 	push	bits
   6923 78 41              3644 	mov	r0,#_abs
   6925 79 C1              3645 	mov	r1,#(_abs >> 8)
   6927 7A 02              3646 	mov	r2,#(_abs >> 16)
   6929 12 00 B3           3647 	lcall	__sdcc_banked_call
   692C AF 82              3648 	mov	r7,dpl
   692E D0 25              3649 	pop	bits
   6930 D0 06              3650 	pop	ar6
   6932 D0 05              3651 	pop	ar5
   6934 D0 04              3652 	pop	ar4
   6936 D0 03              3653 	pop	ar3
   6938 A8 18              3654 	mov	r0,_bp
   693A 08                 3655 	inc	r0
   693B 08                 3656 	inc	r0
   693C EF                 3657 	mov	a,r7
   693D 26                 3658 	add	a,@r0
   693E F6                 3659 	mov	@r0,a
                           3660 ;	../../shared/src/tx_train.c:500: update_opt_trx_ffe();
   693F D0 07              3661 	pop	ar7
                           3662 ;	../../shared/src/tx_train.c:440: num_count += abs(update);
   6941                    3663 00105$:
                           3664 ;	../../shared/src/tx_train.c:447: if( (*IS_MAX || tx.become_worse) && dir==1 ) break;
   6941 E5 18              3665 	mov	a,_bp
   6943 24 12              3666 	add	a,#0x12
   6945 F8                 3667 	mov	r0,a
   6946 86 82              3668 	mov	dpl,@r0
   6948 08                 3669 	inc	r0
   6949 86 83              3670 	mov	dph,@r0
   694B 08                 3671 	inc	r0
   694C 86 F0              3672 	mov	b,@r0
   694E 12 79 34           3673 	lcall	__gptrget
   6951 70 09              3674 	jnz	00111$
   6953 90 66 A7           3675 	mov	dptr,#(_tx + 0x0009)
   6956 E0                 3676 	movx	a,@dptr
   6957 70 03              3677 	jnz	00227$
   6959 02 6A 33           3678 	ljmp	00122$
   695C                    3679 00227$:
   695C                    3680 00111$:
   695C C0 07              3681 	push	ar7
   695E A2 28              3682 	mov	c,b0
   6960 E4                 3683 	clr	a
   6961 33                 3684 	rlc	a
   6962 FF                 3685 	mov	r7,a
   6963 BF 01 02           3686 	cjne	r7,#0x01,00228$
   6966 80 05              3687 	sjmp	00229$
   6968                    3688 00228$:
   6968 D0 07              3689 	pop	ar7
   696A 02 6A 33           3690 	ljmp	00122$
   696D                    3691 00229$:
   696D D0 07              3692 	pop	ar7
   696F 02 6B 4D           3693 	ljmp	00130$
   6972                    3694 00121$:
                           3695 ;	../../shared/src/tx_train.c:451: if( (*IS_MAX || tx.become_worse) && dir==1) {
   6972 E5 18              3696 	mov	a,_bp
   6974 24 12              3697 	add	a,#0x12
   6976 F8                 3698 	mov	r0,a
   6977 86 82              3699 	mov	dpl,@r0
   6979 08                 3700 	inc	r0
   697A 86 83              3701 	mov	dph,@r0
   697C 08                 3702 	inc	r0
   697D 86 F0              3703 	mov	b,@r0
   697F 12 79 34           3704 	lcall	__gptrget
   6982 70 09              3705 	jnz	00115$
   6984 90 66 A7           3706 	mov	dptr,#(_tx + 0x0009)
   6987 E0                 3707 	movx	a,@dptr
   6988 70 03              3708 	jnz	00231$
   698A 02 6A 15           3709 	ljmp	00113$
   698D                    3710 00231$:
   698D                    3711 00115$:
   698D C0 07              3712 	push	ar7
   698F A2 28              3713 	mov	c,b0
   6991 E4                 3714 	clr	a
   6992 33                 3715 	rlc	a
   6993 FF                 3716 	mov	r7,a
   6994 BF 01 02           3717 	cjne	r7,#0x01,00232$
   6997 80 04              3718 	sjmp	00233$
   6999                    3719 00232$:
   6999 D0 07              3720 	pop	ar7
   699B 80 78              3721 	sjmp	00113$
   699D                    3722 00233$:
                           3723 ;	../../shared/src/tx_train.c:452: dir = 0;
   699D C2 28              3724 	clr	b0
                           3725 ;	../../shared/src/tx_train.c:453: tx.become_worse = 0;
   699F 90 66 A7           3726 	mov	dptr,#(_tx + 0x0009)
   69A2 E4                 3727 	clr	a
   69A3 F0                 3728 	movx	@dptr,a
                           3729 ;	../../shared/src/tx_train.c:454: update = idx_ini - *IDX;
   69A4 8B 82              3730 	mov	dpl,r3
   69A6 8C 83              3731 	mov	dph,r4
   69A8 8D F0              3732 	mov	b,r5
   69AA 12 79 34           3733 	lcall	__gptrget
   69AD FF                 3734 	mov	r7,a
   69AE E5 18              3735 	mov	a,_bp
   69B0 24 03              3736 	add	a,#0x03
   69B2 F8                 3737 	mov	r0,a
   69B3 E6                 3738 	mov	a,@r0
   69B4 C3                 3739 	clr	c
   69B5 9F                 3740 	subb	a,r7
   69B6 FF                 3741 	mov	r7,a
   69B7 FA                 3742 	mov	r2,a
                           3743 ;	../../shared/src/tx_train.c:455: update_g(update);				
   69B8 C0 02              3744 	push	ar2
   69BA C0 03              3745 	push	ar3
   69BC C0 04              3746 	push	ar4
   69BE C0 05              3747 	push	ar5
   69C0 C0 06              3748 	push	ar6
   69C2 C0 07              3749 	push	ar7
   69C4 C0 25              3750 	push	bits
   69C6 74 DD              3751 	mov	a,#00234$
   69C8 C0 E0              3752 	push	acc
   69CA 74 69              3753 	mov	a,#(00234$ >> 8)
   69CC C0 E0              3754 	push	acc
   69CE E5 18              3755 	mov	a,_bp
   69D0 24 F2              3756 	add	a,#0xf2
   69D2 F8                 3757 	mov	r0,a
   69D3 E6                 3758 	mov	a,@r0
   69D4 C0 E0              3759 	push	acc
   69D6 08                 3760 	inc	r0
   69D7 E6                 3761 	mov	a,@r0
   69D8 C0 E0              3762 	push	acc
   69DA 8A 82              3763 	mov	dpl,r2
   69DC 22                 3764 	ret
   69DD                    3765 00234$:
   69DD D0 25              3766 	pop	bits
   69DF D0 07              3767 	pop	ar7
   69E1 D0 06              3768 	pop	ar6
   69E3 D0 05              3769 	pop	ar5
   69E5 D0 04              3770 	pop	ar4
   69E7 D0 03              3771 	pop	ar3
   69E9 D0 02              3772 	pop	ar2
                           3773 ;	../../shared/src/tx_train.c:456: num_count += abs(update);
   69EB 8A 82              3774 	mov	dpl,r2
   69ED C0 03              3775 	push	ar3
   69EF C0 04              3776 	push	ar4
   69F1 C0 05              3777 	push	ar5
   69F3 C0 06              3778 	push	ar6
   69F5 C0 25              3779 	push	bits
   69F7 78 41              3780 	mov	r0,#_abs
   69F9 79 C1              3781 	mov	r1,#(_abs >> 8)
   69FB 7A 02              3782 	mov	r2,#(_abs >> 16)
   69FD 12 00 B3           3783 	lcall	__sdcc_banked_call
   6A00 AF 82              3784 	mov	r7,dpl
   6A02 D0 25              3785 	pop	bits
   6A04 D0 06              3786 	pop	ar6
   6A06 D0 05              3787 	pop	ar5
   6A08 D0 04              3788 	pop	ar4
   6A0A D0 03              3789 	pop	ar3
   6A0C A8 18              3790 	mov	r0,_bp
   6A0E 08                 3791 	inc	r0
   6A0F 08                 3792 	inc	r0
   6A10 EF                 3793 	mov	a,r7
   6A11 26                 3794 	add	a,@r0
   6A12 F6                 3795 	mov	@r0,a
                           3796 ;	../../shared/src/tx_train.c:500: update_opt_trx_ffe();
   6A13 D0 07              3797 	pop	ar7
                           3798 ;	../../shared/src/tx_train.c:456: num_count += abs(update);
   6A15                    3799 00113$:
                           3800 ;	../../shared/src/tx_train.c:461: if( (*IS_MIN || tx.become_worse) && dir==0 ) break;
   6A15 E5 18              3801 	mov	a,_bp
   6A17 24 0F              3802 	add	a,#0x0f
   6A19 F8                 3803 	mov	r0,a
   6A1A 86 82              3804 	mov	dpl,@r0
   6A1C 08                 3805 	inc	r0
   6A1D 86 83              3806 	mov	dph,@r0
   6A1F 08                 3807 	inc	r0
   6A20 86 F0              3808 	mov	b,@r0
   6A22 12 79 34           3809 	lcall	__gptrget
   6A25 70 06              3810 	jnz	00119$
   6A27 90 66 A7           3811 	mov	dptr,#(_tx + 0x0009)
   6A2A E0                 3812 	movx	a,@dptr
   6A2B 60 06              3813 	jz	00122$
   6A2D                    3814 00119$:
   6A2D 20 28 03           3815 	jb	b0,00237$
   6A30 02 6B 4D           3816 	ljmp	00130$
   6A33                    3817 00237$:
   6A33                    3818 00122$:
                           3819 ;	../../shared/src/tx_train.c:464: update = dir ? STEP : -STEP;
   6A33 30 28 09           3820 	jnb	b0,00152$
   6A36 E5 18              3821 	mov	a,_bp
   6A38 24 07              3822 	add	a,#0x07
   6A3A F8                 3823 	mov	r0,a
   6A3B 86 02              3824 	mov	ar2,@r0
   6A3D 80 02              3825 	sjmp	00153$
   6A3F                    3826 00152$:
   6A3F 8E 02              3827 	mov	ar2,r6
   6A41                    3828 00153$:
   6A41 C0 07              3829 	push	ar7
   6A43 8A 07              3830 	mov	ar7,r2
   6A45 8F 02              3831 	mov	ar2,r7
                           3832 ;	../../shared/src/tx_train.c:465: num_count += abs(update);
   6A47 8A 82              3833 	mov	dpl,r2
   6A49 C0 02              3834 	push	ar2
   6A4B C0 03              3835 	push	ar3
   6A4D C0 04              3836 	push	ar4
   6A4F C0 05              3837 	push	ar5
   6A51 C0 06              3838 	push	ar6
   6A53 C0 25              3839 	push	bits
   6A55 78 41              3840 	mov	r0,#_abs
   6A57 79 C1              3841 	mov	r1,#(_abs >> 8)
   6A59 7A 02              3842 	mov	r2,#(_abs >> 16)
   6A5B 12 00 B3           3843 	lcall	__sdcc_banked_call
   6A5E AF 82              3844 	mov	r7,dpl
   6A60 D0 25              3845 	pop	bits
   6A62 D0 06              3846 	pop	ar6
   6A64 D0 05              3847 	pop	ar5
   6A66 D0 04              3848 	pop	ar4
   6A68 D0 03              3849 	pop	ar3
   6A6A D0 02              3850 	pop	ar2
   6A6C A8 18              3851 	mov	r0,_bp
   6A6E 08                 3852 	inc	r0
   6A6F 08                 3853 	inc	r0
   6A70 EF                 3854 	mov	a,r7
   6A71 26                 3855 	add	a,@r0
   6A72 F6                 3856 	mov	@r0,a
                           3857 ;	../../shared/src/tx_train.c:466: update_g(update);
   6A73 C0 03              3858 	push	ar3
   6A75 C0 04              3859 	push	ar4
   6A77 C0 05              3860 	push	ar5
   6A79 C0 06              3861 	push	ar6
   6A7B C0 07              3862 	push	ar7
   6A7D C0 25              3863 	push	bits
   6A7F 74 96              3864 	mov	a,#00239$
   6A81 C0 E0              3865 	push	acc
   6A83 74 6A              3866 	mov	a,#(00239$ >> 8)
   6A85 C0 E0              3867 	push	acc
   6A87 E5 18              3868 	mov	a,_bp
   6A89 24 F2              3869 	add	a,#0xf2
   6A8B F8                 3870 	mov	r0,a
   6A8C E6                 3871 	mov	a,@r0
   6A8D C0 E0              3872 	push	acc
   6A8F 08                 3873 	inc	r0
   6A90 E6                 3874 	mov	a,@r0
   6A91 C0 E0              3875 	push	acc
   6A93 8A 82              3876 	mov	dpl,r2
   6A95 22                 3877 	ret
   6A96                    3878 00239$:
   6A96 D0 25              3879 	pop	bits
   6A98 D0 07              3880 	pop	ar7
   6A9A D0 06              3881 	pop	ar6
   6A9C D0 05              3882 	pop	ar5
   6A9E D0 04              3883 	pop	ar4
   6AA0 D0 03              3884 	pop	ar3
                           3885 ;	../../shared/src/tx_train.c:468: tx.train_overboost = tag_TX_GN1_OVERBOOST_EN && OB;
                           3886 ;	../../shared/src/tx_train.c:500: update_opt_trx_ffe();
   6AA2 D0 07              3887 	pop	ar7
                           3888 ;	../../shared/src/tx_train.c:468: tx.train_overboost = tag_TX_GN1_OVERBOOST_EN && OB;
   6AA4 E5 18              3889 	mov	a,_bp
   6AA6 24 08              3890 	add	a,#0x08
   6AA8 F8                 3891 	mov	r0,a
   6AA9 E6                 3892 	mov	a,@r0
   6AAA 70 03              3893 	jnz	00155$
   6AAC FA                 3894 	mov	r2,a
   6AAD 80 02              3895 	sjmp	00156$
   6AAF                    3896 00155$:
   6AAF 7A 01              3897 	mov	r2,#0x01
   6AB1                    3898 00156$:
   6AB1 C0 07              3899 	push	ar7
   6AB3 90 66 AA           3900 	mov	dptr,#(_tx + 0x000c)
   6AB6 EA                 3901 	mov	a,r2
   6AB7 F0                 3902 	movx	@dptr,a
                           3903 ;	../../shared/src/tx_train.c:470: tx.become_worse = ((train.f0t < TH) || (num_count >= tag_TX_MAX_MIDPOINT_CTRL_CNT)
   6AB8 90 66 5E           3904 	mov	dptr,#(_train + 0x001e)
   6ABB E5 18              3905 	mov	a,_bp
   6ABD 24 0D              3906 	add	a,#0x0d
   6ABF F8                 3907 	mov	r0,a
   6AC0 E0                 3908 	movx	a,@dptr
   6AC1 F6                 3909 	mov	@r0,a
   6AC2 E5 18              3910 	mov	a,_bp
   6AC4 24 0D              3911 	add	a,#0x0d
   6AC6 F8                 3912 	mov	r0,a
   6AC7 86 07              3913 	mov	ar7,@r0
   6AC9 7A 00              3914 	mov	r2,#0x00
   6ACB E5 18              3915 	mov	a,_bp
   6ACD 24 04              3916 	add	a,#0x04
   6ACF F8                 3917 	mov	r0,a
   6AD0 C3                 3918 	clr	c
   6AD1 EF                 3919 	mov	a,r7
   6AD2 96                 3920 	subb	a,@r0
   6AD3 EA                 3921 	mov	a,r2
   6AD4 08                 3922 	inc	r0
   6AD5 96                 3923 	subb	a,@r0
   6AD6 D0 07              3924 	pop	ar7
   6AD8 40 10              3925 	jc	00164$
   6ADA A8 18              3926 	mov	r0,_bp
   6ADC 08                 3927 	inc	r0
   6ADD 08                 3928 	inc	r0
   6ADE B6 80 00           3929 	cjne	@r0,#0x80,00242$
   6AE1                    3930 00242$:
   6AE1 B3                 3931 	cpl	c
   6AE2 E4                 3932 	clr	a
   6AE3 33                 3933 	rlc	a
   6AE4 FA                 3934 	mov	r2,a
   6AE5 70 03              3935 	jnz	00164$
   6AE7 FA                 3936 	mov	r2,a
   6AE8 80 02              3937 	sjmp	00165$
   6AEA                    3938 00164$:
   6AEA 7A 01              3939 	mov	r2,#0x01
   6AEC                    3940 00165$:
   6AEC EA                 3941 	mov	a,r2
   6AED 70 19              3942 	jnz	00161$
                           3943 ;	../../shared/src/tx_train.c:471: || (tx.train_overboost && dir==0)
   6AEF 90 66 AA           3944 	mov	dptr,#(_tx + 0x000c)
   6AF2 E0                 3945 	movx	a,@dptr
   6AF3 60 07              3946 	jz	00166$
   6AF5 A2 28              3947 	mov	c,b0
   6AF7 E4                 3948 	clr	a
   6AF8 33                 3949 	rlc	a
   6AF9 FA                 3950 	mov	r2,a
   6AFA 60 04              3951 	jz	00167$
   6AFC                    3952 00166$:
   6AFC 7A 00              3953 	mov	r2,#0x00
   6AFE 80 02              3954 	sjmp	00168$
   6B00                    3955 00167$:
   6B00 7A 01              3956 	mov	r2,#0x01
   6B02                    3957 00168$:
   6B02 EA                 3958 	mov	a,r2
   6B03 70 03              3959 	jnz	00161$
   6B05 FA                 3960 	mov	r2,a
   6B06 80 02              3961 	sjmp	00162$
   6B08                    3962 00161$:
   6B08 7A 01              3963 	mov	r2,#0x01
   6B0A                    3964 00162$:
   6B0A EA                 3965 	mov	a,r2
   6B0B 70 0E              3966 	jnz	00158$
                           3967 ;	../../shared/src/tx_train.c:472: || train.f0t == 0);
   6B0D E5 18              3968 	mov	a,_bp
   6B0F 24 0D              3969 	add	a,#0x0d
   6B11 F8                 3970 	mov	r0,a
   6B12 B6 00 02           3971 	cjne	@r0,#0x00,00250$
   6B15 80 04              3972 	sjmp	00158$
   6B17                    3973 00250$:
   6B17 7A 00              3974 	mov	r2,#0x00
   6B19 80 02              3975 	sjmp	00159$
   6B1B                    3976 00158$:
   6B1B 7A 01              3977 	mov	r2,#0x01
   6B1D                    3978 00159$:
                           3979 ;	../../shared/src/tx_train.c:474: if(tx.become_worse==0){ // keep record hi/lo until worsen, will be max/min if not worsen
   6B1D 90 66 A7           3980 	mov	dptr,#(_tx + 0x0009)
   6B20 EA                 3981 	mov	a,r2
   6B21 F0                 3982 	movx	@dptr,a
   6B22 E0                 3983 	movx	a,@dptr
   6B23 60 03              3984 	jz	00251$
   6B25 02 68 80           3985 	ljmp	00128$
   6B28                    3986 00251$:
                           3987 ;	../../shared/src/tx_train.c:475: if(dir==0) idx_lo = *IDX;
   6B28 20 28 0E           3988 	jb	b0,00124$
   6B2B 8B 82              3989 	mov	dpl,r3
   6B2D 8C 83              3990 	mov	dph,r4
   6B2F 8D F0              3991 	mov	b,r5
   6B31 12 79 34           3992 	lcall	__gptrget
   6B34 FA                 3993 	mov	r2,a
   6B35 FF                 3994 	mov	r7,a
   6B36 02 68 80           3995 	ljmp	00128$
   6B39                    3996 00124$:
                           3997 ;	../../shared/src/tx_train.c:476: else       idx_hi = *IDX;
   6B39 8B 82              3998 	mov	dpl,r3
   6B3B 8C 83              3999 	mov	dph,r4
   6B3D 8D F0              4000 	mov	b,r5
   6B3F 12 79 34           4001 	lcall	__gptrget
   6B42 FA                 4002 	mov	r2,a
   6B43 E5 18              4003 	mov	a,_bp
   6B45 24 0A              4004 	add	a,#0x0a
   6B47 F8                 4005 	mov	r0,a
   6B48 A6 02              4006 	mov	@r0,ar2
   6B4A 02 68 80           4007 	ljmp	00128$
   6B4D                    4008 00130$:
                           4009 ;	../../shared/src/tx_train.c:487: update = ((idx_lo + idx_hi)>>1) + OS - *IDX;
   6B4D E5 18              4010 	mov	a,_bp
   6B4F 24 12              4011 	add	a,#0x12
   6B51 F8                 4012 	mov	r0,a
   6B52 A6 07              4013 	mov	@r0,ar7
   6B54 08                 4014 	inc	r0
   6B55 76 00              4015 	mov	@r0,#0x00
   6B57 E5 18              4016 	mov	a,_bp
   6B59 24 0A              4017 	add	a,#0x0a
   6B5B F8                 4018 	mov	r0,a
   6B5C 86 06              4019 	mov	ar6,@r0
   6B5E 7A 00              4020 	mov	r2,#0x00
   6B60 E5 18              4021 	mov	a,_bp
   6B62 24 12              4022 	add	a,#0x12
   6B64 F8                 4023 	mov	r0,a
   6B65 EE                 4024 	mov	a,r6
   6B66 26                 4025 	add	a,@r0
   6B67 FE                 4026 	mov	r6,a
   6B68 EA                 4027 	mov	a,r2
   6B69 08                 4028 	inc	r0
   6B6A 36                 4029 	addc	a,@r0
   6B6B A2 E7              4030 	mov	c,acc.7
   6B6D 13                 4031 	rrc	a
   6B6E CE                 4032 	xch	a,r6
   6B6F 13                 4033 	rrc	a
   6B70 CE                 4034 	xch	a,r6
   6B71 E5 18              4035 	mov	a,_bp
   6B73 24 06              4036 	add	a,#0x06
   6B75 F8                 4037 	mov	r0,a
   6B76 E6                 4038 	mov	a,@r0
   6B77 2E                 4039 	add	a,r6
   6B78 FE                 4040 	mov	r6,a
   6B79 8B 82              4041 	mov	dpl,r3
   6B7B 8C 83              4042 	mov	dph,r4
   6B7D 8D F0              4043 	mov	b,r5
   6B7F 12 79 34           4044 	lcall	__gptrget
   6B82 FB                 4045 	mov	r3,a
   6B83 EE                 4046 	mov	a,r6
   6B84 C3                 4047 	clr	c
   6B85 9B                 4048 	subb	a,r3
   6B86 FA                 4049 	mov	r2,a
                           4050 ;	../../shared/src/tx_train.c:488: update_g(update);
   6B87 74 9E              4051 	mov	a,#00253$
   6B89 C0 E0              4052 	push	acc
   6B8B 74 6B              4053 	mov	a,#(00253$ >> 8)
   6B8D C0 E0              4054 	push	acc
   6B8F E5 18              4055 	mov	a,_bp
   6B91 24 F2              4056 	add	a,#0xf2
   6B93 F8                 4057 	mov	r0,a
   6B94 E6                 4058 	mov	a,@r0
   6B95 C0 E0              4059 	push	acc
   6B97 08                 4060 	inc	r0
   6B98 E6                 4061 	mov	a,@r0
   6B99 C0 E0              4062 	push	acc
   6B9B 8A 82              4063 	mov	dpl,r2
   6B9D 22                 4064 	ret
   6B9E                    4065 00253$:
                           4066 ;	../../shared/src/tx_train.c:500: update_opt_trx_ffe();
   6B9E 12 59 A0           4067 	lcall	_update_opt_trx_ffe
   6BA1 85 18 81           4068 	mov	sp,_bp
   6BA4 D0 18              4069 	pop	_bp
   6BA6 22                 4070 	ret
                           4071 ;------------------------------------------------------------
                           4072 ;Allocation info for local variables in function 'compare_g0'
                           4073 ;------------------------------------------------------------
                           4074 ;ARG                       Allocated to registers r2 
                           4075 ;sloc0                     Allocated to stack - offset 2
                           4076 ;------------------------------------------------------------
                           4077 ;	../../shared/src/tx_train.c:523: void compare_g0(void)
                           4078 ;	-----------------------------------------
                           4079 ;	 function compare_g0
                           4080 ;	-----------------------------------------
   6BA7                    4081 _compare_g0:
                           4082 ;	../../shared/src/tx_train.c:525: bool ARG = (train_g0_index < opt_g0_index);
   6BA7 90 60 32           4083 	mov	dptr,#_train_g0_index
   6BAA E0                 4084 	movx	a,@dptr
   6BAB FA                 4085 	mov	r2,a
   6BAC 90 67 B3           4086 	mov	dptr,#_opt_g0_index
   6BAF E0                 4087 	movx	a,@dptr
   6BB0 FB                 4088 	mov	r3,a
   6BB1 EA                 4089 	mov	a,r2
   6BB2 B5 03 00           4090 	cjne	a,ar3,00194$
   6BB5                    4091 00194$:
   6BB5 E4                 4092 	clr	a
   6BB6 33                 4093 	rlc	a
   6BB7 FA                 4094 	mov	r2,a
                           4095 ;	../../shared/src/tx_train.c:527: if (opt.level < train.level)
   6BB8 90 66 92           4096 	mov	dptr,#(_opt + 0x0023)
   6BBB E0                 4097 	movx	a,@dptr
   6BBC FC                 4098 	mov	r4,a
   6BBD 90 66 63           4099 	mov	dptr,#(_train + 0x0023)
   6BC0 E0                 4100 	movx	a,@dptr
   6BC1 FD                 4101 	mov	r5,a
   6BC2 EC                 4102 	mov	a,r4
   6BC3 B5 05 00           4103 	cjne	a,ar5,00195$
   6BC6                    4104 00195$:
   6BC6 50 0E              4105 	jnc	00123$
                           4106 ;	../../shared/src/tx_train.c:529: tx.ffe_updated = 1;
   6BC8 90 66 9F           4107 	mov	dptr,#(_tx + 0x0001)
   6BCB 74 01              4108 	mov	a,#0x01
   6BCD F0                 4109 	movx	@dptr,a
                           4110 ;	../../shared/src/tx_train.c:530: tx.become_worse = 0;
   6BCE 90 66 A7           4111 	mov	dptr,#(_tx + 0x0009)
   6BD1 E4                 4112 	clr	a
   6BD2 F0                 4113 	movx	@dptr,a
   6BD3 02 6D 9C           4114 	ljmp	00124$
   6BD6                    4115 00123$:
                           4116 ;	../../shared/src/tx_train.c:532: else if (opt.level == train.level) // intra-level compare
   6BD6 EC                 4117 	mov	a,r4
   6BD7 B5 05 02           4118 	cjne	a,ar5,00197$
   6BDA 80 03              4119 	sjmp	00198$
   6BDC                    4120 00197$:
   6BDC 02 6D 82           4121 	ljmp	00120$
   6BDF                    4122 00198$:
                           4123 ;	../../shared/src/tx_train.c:534: if (opt.f0a >= tag_TX_F0A_HIGH_THRES)
   6BDF 90 66 88           4124 	mov	dptr,#(_opt + 0x0019)
   6BE2 E0                 4125 	movx	a,@dptr
   6BE3 FC                 4126 	mov	r4,a
   6BE4 BC 32 00           4127 	cjne	r4,#0x32,00199$
   6BE7                    4128 00199$:
   6BE7 E4                 4129 	clr	a
   6BE8 33                 4130 	rlc	a
   6BE9 FC                 4131 	mov	r4,a
   6BEA 70 0D              4132 	jnz	00117$
                           4133 ;	../../shared/src/tx_train.c:536: tx.ffe_updated = ARG;
   6BEC 90 66 9F           4134 	mov	dptr,#(_tx + 0x0001)
   6BEF EA                 4135 	mov	a,r2
   6BF0 F0                 4136 	movx	@dptr,a
                           4137 ;	../../shared/src/tx_train.c:537: tx.become_worse = 0;
   6BF1 90 66 A7           4138 	mov	dptr,#(_tx + 0x0009)
   6BF4 E4                 4139 	clr	a
   6BF5 F0                 4140 	movx	@dptr,a
   6BF6 02 6D 9C           4141 	ljmp	00124$
   6BF9                    4142 00117$:
                           4143 ;	../../shared/src/tx_train.c:539: else if (opt.f0a < tag_TX_F0A_HIGH_THRES && train.f0a >= tag_TX_F0A_HIGH_THRES)
   6BF9 EC                 4144 	mov	a,r4
   6BFA 60 16              4145 	jz	00113$
   6BFC 90 66 59           4146 	mov	dptr,#(_train + 0x0019)
   6BFF E0                 4147 	movx	a,@dptr
   6C00 FC                 4148 	mov	r4,a
   6C01 BC 32 00           4149 	cjne	r4,#0x32,00202$
   6C04                    4150 00202$:
   6C04 40 0C              4151 	jc	00113$
                           4152 ;	../../shared/src/tx_train.c:541: tx.ffe_updated = 0;
   6C06 90 66 9F           4153 	mov	dptr,#(_tx + 0x0001)
                           4154 ;	../../shared/src/tx_train.c:542: tx.become_worse = 0;
   6C09 E4                 4155 	clr	a
   6C0A F0                 4156 	movx	@dptr,a
   6C0B 90 66 A7           4157 	mov	dptr,#(_tx + 0x0009)
   6C0E F0                 4158 	movx	@dptr,a
   6C0F 02 6D 9C           4159 	ljmp	00124$
   6C12                    4160 00113$:
                           4161 ;	../../shared/src/tx_train.c:545: else if (train.level == 1 || train.level == 2 || train.level == 4) // level 1/2/4
   6C12 BD 01 02           4162 	cjne	r5,#0x01,00204$
   6C15 80 0D              4163 	sjmp	00107$
   6C17                    4164 00204$:
   6C17 BD 02 02           4165 	cjne	r5,#0x02,00205$
   6C1A 80 08              4166 	sjmp	00107$
   6C1C                    4167 00205$:
   6C1C BD 04 02           4168 	cjne	r5,#0x04,00206$
   6C1F 80 03              4169 	sjmp	00207$
   6C21                    4170 00206$:
   6C21 02 6C C2           4171 	ljmp	00108$
   6C24                    4172 00207$:
   6C24                    4173 00107$:
                           4174 ;	../../shared/src/tx_train.c:547: tx.ffe_updated = ((ARG && train.f0t > (opt.f0t + tag_TX_F0T_G0UPDATE_THRES))
   6C24 EA                 4175 	mov	a,r2
   6C25 60 28              4176 	jz	00132$
   6C27 C0 02              4177 	push	ar2
   6C29 90 66 5E           4178 	mov	dptr,#(_train + 0x001e)
   6C2C E0                 4179 	movx	a,@dptr
   6C2D FC                 4180 	mov	r4,a
   6C2E 90 66 8D           4181 	mov	dptr,#(_opt + 0x001e)
   6C31 E0                 4182 	movx	a,@dptr
   6C32 FE                 4183 	mov	r6,a
   6C33 7F 00              4184 	mov	r7,#0x00
   6C35 74 0A              4185 	mov	a,#0x0A
   6C37 2E                 4186 	add	a,r6
   6C38 FE                 4187 	mov	r6,a
   6C39 E4                 4188 	clr	a
   6C3A 3F                 4189 	addc	a,r7
   6C3B FF                 4190 	mov	r7,a
   6C3C 7A 00              4191 	mov	r2,#0x00
   6C3E C3                 4192 	clr	c
   6C3F EE                 4193 	mov	a,r6
   6C40 9C                 4194 	subb	a,r4
   6C41 EF                 4195 	mov	a,r7
   6C42 64 80              4196 	xrl	a,#0x80
   6C44 8A F0              4197 	mov	b,r2
   6C46 63 F0 80           4198 	xrl	b,#0x80
   6C49 95 F0              4199 	subb	a,b
   6C4B D0 02              4200 	pop	ar2
   6C4D 40 04              4201 	jc	00133$
   6C4F                    4202 00132$:
   6C4F 7C 00              4203 	mov	r4,#0x00
   6C51 80 02              4204 	sjmp	00134$
   6C53                    4205 00133$:
   6C53 7C 01              4206 	mov	r4,#0x01
   6C55                    4207 00134$:
   6C55 EC                 4208 	mov	a,r4
   6C56 70 32              4209 	jnz	00130$
                           4210 ;	../../shared/src/tx_train.c:548: || (ARG==0 && train.f0t > (opt.f0t - tag_TX_F0T_G0UPDATE_THRES)) );
   6C58 BA 00 23           4211 	cjne	r2,#0x00,00135$
   6C5B 90 66 5E           4212 	mov	dptr,#(_train + 0x001e)
   6C5E E0                 4213 	movx	a,@dptr
   6C5F FC                 4214 	mov	r4,a
   6C60 90 66 8D           4215 	mov	dptr,#(_opt + 0x001e)
   6C63 E0                 4216 	movx	a,@dptr
   6C64 7F 00              4217 	mov	r7,#0x00
   6C66 24 F6              4218 	add	a,#0xf6
   6C68 FA                 4219 	mov	r2,a
   6C69 EF                 4220 	mov	a,r7
   6C6A 34 FF              4221 	addc	a,#0xff
   6C6C FB                 4222 	mov	r3,a
   6C6D 7E 00              4223 	mov	r6,#0x00
   6C6F C3                 4224 	clr	c
   6C70 EA                 4225 	mov	a,r2
   6C71 9C                 4226 	subb	a,r4
   6C72 EB                 4227 	mov	a,r3
   6C73 64 80              4228 	xrl	a,#0x80
   6C75 8E F0              4229 	mov	b,r6
   6C77 63 F0 80           4230 	xrl	b,#0x80
   6C7A 95 F0              4231 	subb	a,b
   6C7C 40 04              4232 	jc	00136$
   6C7E                    4233 00135$:
   6C7E 7C 00              4234 	mov	r4,#0x00
   6C80 80 02              4235 	sjmp	00137$
   6C82                    4236 00136$:
   6C82 7C 01              4237 	mov	r4,#0x01
   6C84                    4238 00137$:
   6C84 EC                 4239 	mov	a,r4
   6C85 70 03              4240 	jnz	00130$
   6C87 FC                 4241 	mov	r4,a
   6C88 80 02              4242 	sjmp	00131$
   6C8A                    4243 00130$:
   6C8A 7C 01              4244 	mov	r4,#0x01
   6C8C                    4245 00131$:
   6C8C 90 66 9F           4246 	mov	dptr,#(_tx + 0x0001)
   6C8F EC                 4247 	mov	a,r4
   6C90 F0                 4248 	movx	@dptr,a
                           4249 ;	../../shared/src/tx_train.c:549: tx.become_worse = (tag_TX_STOP_IF_WORSE && train.f0t < (opt.f0t - tag_TX_STOP_THRES));
   6C91 90 66 5E           4250 	mov	dptr,#(_train + 0x001e)
   6C94 E0                 4251 	movx	a,@dptr
   6C95 FC                 4252 	mov	r4,a
   6C96 90 66 8D           4253 	mov	dptr,#(_opt + 0x001e)
   6C99 E0                 4254 	movx	a,@dptr
   6C9A 7F 00              4255 	mov	r7,#0x00
   6C9C 24 F6              4256 	add	a,#0xf6
   6C9E FA                 4257 	mov	r2,a
   6C9F EF                 4258 	mov	a,r7
   6CA0 34 FF              4259 	addc	a,#0xff
   6CA2 FB                 4260 	mov	r3,a
   6CA3 7E 00              4261 	mov	r6,#0x00
   6CA5 C3                 4262 	clr	c
   6CA6 EC                 4263 	mov	a,r4
   6CA7 9A                 4264 	subb	a,r2
   6CA8 EE                 4265 	mov	a,r6
   6CA9 64 80              4266 	xrl	a,#0x80
   6CAB 8B F0              4267 	mov	b,r3
   6CAD 63 F0 80           4268 	xrl	b,#0x80
   6CB0 95 F0              4269 	subb	a,b
   6CB2 40 04              4270 	jc	00139$
   6CB4 7C 00              4271 	mov	r4,#0x00
   6CB6 80 02              4272 	sjmp	00140$
   6CB8                    4273 00139$:
   6CB8 7C 01              4274 	mov	r4,#0x01
   6CBA                    4275 00140$:
   6CBA 90 66 A7           4276 	mov	dptr,#(_tx + 0x0009)
   6CBD EC                 4277 	mov	a,r4
   6CBE F0                 4278 	movx	@dptr,a
   6CBF 02 6D 9C           4279 	ljmp	00124$
   6CC2                    4280 00108$:
                           4281 ;	../../shared/src/tx_train.c:551: else if (train.level == 3) // level 3
   6CC2 BD 03 02           4282 	cjne	r5,#0x03,00216$
   6CC5 80 03              4283 	sjmp	00217$
   6CC7                    4284 00216$:
   6CC7 02 6D 58           4285 	ljmp	00105$
   6CCA                    4286 00217$:
                           4287 ;	../../shared/src/tx_train.c:553: tx.ffe_updated = (
                           4288 ;	../../shared/src/tx_train.c:554: (train.f0a_saturate==0 && opt.f0a_saturate && train.dfe_saturate == opt.dfe_saturate) 
   6CCA 90 66 66           4289 	mov	dptr,#(_train + 0x0026)
   6CCD E0                 4290 	movx	a,@dptr
   6CCE FC                 4291 	mov	r4,a
   6CCF 70 06              4292 	jnz	00150$
   6CD1 90 66 95           4293 	mov	dptr,#(_opt + 0x0026)
   6CD4 E0                 4294 	movx	a,@dptr
   6CD5 70 04              4295 	jnz	00151$
   6CD7                    4296 00150$:
   6CD7 7E 00              4297 	mov	r6,#0x00
   6CD9 80 02              4298 	sjmp	00152$
   6CDB                    4299 00151$:
   6CDB 7E 01              4300 	mov	r6,#0x01
   6CDD                    4301 00152$:
   6CDD EE                 4302 	mov	a,r6
   6CDE 60 10              4303 	jz	00147$
   6CE0 90 66 67           4304 	mov	dptr,#(_train + 0x0027)
   6CE3 E0                 4305 	movx	a,@dptr
   6CE4 FE                 4306 	mov	r6,a
   6CE5 90 66 96           4307 	mov	dptr,#(_opt + 0x0027)
   6CE8 E0                 4308 	movx	a,@dptr
   6CE9 FF                 4309 	mov	r7,a
   6CEA EE                 4310 	mov	a,r6
   6CEB B5 07 02           4311 	cjne	a,ar7,00222$
   6CEE 80 04              4312 	sjmp	00148$
   6CF0                    4313 00222$:
   6CF0                    4314 00147$:
   6CF0 7E 00              4315 	mov	r6,#0x00
   6CF2 80 02              4316 	sjmp	00149$
   6CF4                    4317 00148$:
   6CF4 7E 01              4318 	mov	r6,#0x01
   6CF6                    4319 00149$:
   6CF6 EE                 4320 	mov	a,r6
   6CF7 70 2B              4321 	jnz	00145$
                           4322 ;	../../shared/src/tx_train.c:555: || (train.f0a_saturate == opt.f0a_saturate && train.dfe_saturate==0 && opt.dfe_saturate)
   6CF9 90 66 95           4323 	mov	dptr,#(_opt + 0x0026)
   6CFC E0                 4324 	movx	a,@dptr
   6CFD FE                 4325 	mov	r6,a
   6CFE EC                 4326 	mov	a,r4
   6CFF B5 06 07           4327 	cjne	a,ar6,00156$
   6D02 90 66 67           4328 	mov	dptr,#(_train + 0x0027)
   6D05 E0                 4329 	movx	a,@dptr
   6D06 FE                 4330 	mov	r6,a
   6D07 60 04              4331 	jz	00157$
   6D09                    4332 00156$:
   6D09 7E 00              4333 	mov	r6,#0x00
   6D0B 80 02              4334 	sjmp	00158$
   6D0D                    4335 00157$:
   6D0D 7E 01              4336 	mov	r6,#0x01
   6D0F                    4337 00158$:
   6D0F EE                 4338 	mov	a,r6
   6D10 60 06              4339 	jz	00153$
   6D12 90 66 96           4340 	mov	dptr,#(_opt + 0x0027)
   6D15 E0                 4341 	movx	a,@dptr
   6D16 70 04              4342 	jnz	00154$
   6D18                    4343 00153$:
   6D18 7E 00              4344 	mov	r6,#0x00
   6D1A 80 02              4345 	sjmp	00155$
   6D1C                    4346 00154$:
   6D1C 7E 01              4347 	mov	r6,#0x01
   6D1E                    4348 00155$:
   6D1E EE                 4349 	mov	a,r6
   6D1F 70 03              4350 	jnz	00145$
   6D21 FE                 4351 	mov	r6,a
   6D22 80 02              4352 	sjmp	00146$
   6D24                    4353 00145$:
   6D24 7E 01              4354 	mov	r6,#0x01
   6D26                    4355 00146$:
   6D26 EE                 4356 	mov	a,r6
   6D27 70 21              4357 	jnz	00142$
                           4358 ;	../../shared/src/tx_train.c:556: || (train.f0a_saturate && opt.f0a_saturate && ARG));
   6D29 EC                 4359 	mov	a,r4
   6D2A 60 06              4360 	jz	00162$
   6D2C 90 66 95           4361 	mov	dptr,#(_opt + 0x0026)
   6D2F E0                 4362 	movx	a,@dptr
   6D30 70 04              4363 	jnz	00163$
   6D32                    4364 00162$:
   6D32 7C 00              4365 	mov	r4,#0x00
   6D34 80 02              4366 	sjmp	00164$
   6D36                    4367 00163$:
   6D36 7C 01              4368 	mov	r4,#0x01
   6D38                    4369 00164$:
   6D38 EC                 4370 	mov	a,r4
   6D39 60 03              4371 	jz	00159$
   6D3B EA                 4372 	mov	a,r2
   6D3C 70 04              4373 	jnz	00160$
   6D3E                    4374 00159$:
   6D3E 7A 00              4375 	mov	r2,#0x00
   6D40 80 02              4376 	sjmp	00161$
   6D42                    4377 00160$:
   6D42 7A 01              4378 	mov	r2,#0x01
   6D44                    4379 00161$:
   6D44 EA                 4380 	mov	a,r2
   6D45 70 03              4381 	jnz	00142$
   6D47 FA                 4382 	mov	r2,a
   6D48 80 02              4383 	sjmp	00143$
   6D4A                    4384 00142$:
   6D4A 7A 01              4385 	mov	r2,#0x01
   6D4C                    4386 00143$:
   6D4C 90 66 9F           4387 	mov	dptr,#(_tx + 0x0001)
   6D4F EA                 4388 	mov	a,r2
   6D50 F0                 4389 	movx	@dptr,a
                           4390 ;	../../shared/src/tx_train.c:557: tx.become_worse = 0;
   6D51 90 66 A7           4391 	mov	dptr,#(_tx + 0x0009)
   6D54 E4                 4392 	clr	a
   6D55 F0                 4393 	movx	@dptr,a
   6D56 80 44              4394 	sjmp	00124$
   6D58                    4395 00105$:
                           4396 ;	../../shared/src/tx_train.c:559: else if (train.level == 0) // for level 0
   6D58 ED                 4397 	mov	a,r5
   6D59 70 1C              4398 	jnz	00102$
                           4399 ;	../../shared/src/tx_train.c:561: tx.ffe_updated = (train_g0_index < opt_g0_index)==0; //g0 only
   6D5B 90 60 32           4400 	mov	dptr,#_train_g0_index
   6D5E E0                 4401 	movx	a,@dptr
   6D5F FA                 4402 	mov	r2,a
   6D60 B5 03 00           4403 	cjne	a,ar3,00237$
   6D63                    4404 00237$:
   6D63 E4                 4405 	clr	a
   6D64 33                 4406 	rlc	a
   6D65 FB                 4407 	mov	r3,a
   6D66 E4                 4408 	clr	a
   6D67 BB 00 01           4409 	cjne	r3,#0x00,00238$
   6D6A 04                 4410 	inc	a
   6D6B                    4411 00238$:
   6D6B FB                 4412 	mov	r3,a
   6D6C 90 66 9F           4413 	mov	dptr,#(_tx + 0x0001)
   6D6F F0                 4414 	movx	@dptr,a
                           4415 ;	../../shared/src/tx_train.c:562: tx.become_worse = 0;
   6D70 90 66 A7           4416 	mov	dptr,#(_tx + 0x0009)
   6D73 E4                 4417 	clr	a
   6D74 F0                 4418 	movx	@dptr,a
   6D75 80 25              4419 	sjmp	00124$
   6D77                    4420 00102$:
                           4421 ;	../../shared/src/tx_train.c:566: tx.ffe_updated = 0;
   6D77 90 66 9F           4422 	mov	dptr,#(_tx + 0x0001)
                           4423 ;	../../shared/src/tx_train.c:567: tx.become_worse = 0; // g1/n1: tag_TX_STOP_IF_WORSE
   6D7A E4                 4424 	clr	a
   6D7B F0                 4425 	movx	@dptr,a
   6D7C 90 66 A7           4426 	mov	dptr,#(_tx + 0x0009)
   6D7F F0                 4427 	movx	@dptr,a
   6D80 80 1A              4428 	sjmp	00124$
   6D82                    4429 00120$:
                           4430 ;	../../shared/src/tx_train.c:572: tx.ffe_updated = 0;
   6D82 90 66 9F           4431 	mov	dptr,#(_tx + 0x0001)
   6D85 E4                 4432 	clr	a
   6D86 F0                 4433 	movx	@dptr,a
                           4434 ;	../../shared/src/tx_train.c:573: tx.become_worse = (tag_TX_STOP_IF_WORSE && opt.f0a < tag_TX_F0A_HIGH_THRES);
   6D87 90 66 88           4435 	mov	dptr,#(_opt + 0x0019)
   6D8A E0                 4436 	movx	a,@dptr
   6D8B FA                 4437 	mov	r2,a
   6D8C BA 32 00           4438 	cjne	r2,#0x32,00240$
   6D8F                    4439 00240$:
   6D8F 40 04              4440 	jc	00166$
   6D91 7A 00              4441 	mov	r2,#0x00
   6D93 80 02              4442 	sjmp	00167$
   6D95                    4443 00166$:
   6D95 7A 01              4444 	mov	r2,#0x01
   6D97                    4445 00167$:
   6D97 90 66 A7           4446 	mov	dptr,#(_tx + 0x0009)
   6D9A EA                 4447 	mov	a,r2
   6D9B F0                 4448 	movx	@dptr,a
   6D9C                    4449 00124$:
                           4450 ;	../../shared/src/tx_train.c:576: if (tx.ffe_updated)
   6D9C 90 66 9F           4451 	mov	dptr,#(_tx + 0x0001)
   6D9F E0                 4452 	movx	a,@dptr
   6DA0 60 03              4453 	jz	00127$
                           4454 ;	../../shared/src/tx_train.c:578: update_opt_trx_ffe(); // update the memory of Opt
   6DA2 02 59 A0           4455 	ljmp	_update_opt_trx_ffe
   6DA5                    4456 00127$:
   6DA5 22                 4457 	ret
                           4458 ;------------------------------------------------------------
                           4459 ;Allocation info for local variables in function 'compare_g1n1'
                           4460 ;------------------------------------------------------------
                           4461 ;X                         Allocated to registers r2 
                           4462 ;UTH                       Allocated to stack - offset 1
                           4463 ;OBEN                      Allocated to stack - offset 2
                           4464 ;OBTH                      Allocated to stack - offset 3
                           4465 ;OBUTH                     Allocated to registers r5 
                           4466 ;Train_Index_is_big        Allocated to stack - offset 4
                           4467 ;sloc0                     Allocated to stack - offset 5
                           4468 ;------------------------------------------------------------
                           4469 ;	../../shared/src/tx_train.c:604: void compare_g1n1(uint8_t X)
                           4470 ;	-----------------------------------------
                           4471 ;	 function compare_g1n1
                           4472 ;	-----------------------------------------
   6DA6                    4473 _compare_g1n1:
   6DA6 C0 18              4474 	push	_bp
   6DA8 E5 81              4475 	mov	a,sp
   6DAA F5 18              4476 	mov	_bp,a
   6DAC 24 06              4477 	add	a,#0x06
   6DAE F5 81              4478 	mov	sp,a
                           4479 ;	../../shared/src/tx_train.c:611: if(X){ // G1
   6DB0 E5 82              4480 	mov	a,dpl
   6DB2 FA                 4481 	mov	r2,a
   6DB3 60 32              4482 	jz	00102$
                           4483 ;	../../shared/src/tx_train.c:612: UTH = tag_TX_F0T_G1UPDATE_THRES;
   6DB5 A8 18              4484 	mov	r0,_bp
   6DB7 08                 4485 	inc	r0
   6DB8 76 00              4486 	mov	@r0,#0x00
                           4487 ;	../../shared/src/tx_train.c:613: OBEN = tag_TX_G1_OVERBOOST_EN;
   6DBA A8 18              4488 	mov	r0,_bp
   6DBC 08                 4489 	inc	r0
   6DBD 08                 4490 	inc	r0
   6DBE 76 01              4491 	mov	@r0,#0x01
                           4492 ;	../../shared/src/tx_train.c:614: OBTH = tag_TX_G1_OVERBOOST_THRES;
   6DC0 E5 18              4493 	mov	a,_bp
   6DC2 24 03              4494 	add	a,#0x03
   6DC4 F8                 4495 	mov	r0,a
   6DC5 76 03              4496 	mov	@r0,#0x03
                           4497 ;	../../shared/src/tx_train.c:615: OBUTH = tag_TX_G1_OVERBOOST_UPDATE_THRES;
   6DC7 7D 04              4498 	mov	r5,#0x04
                           4499 ;	../../shared/src/tx_train.c:616: Train_Index_is_big = (train_g1_index > opt_g1_index) ? 1:0;
   6DC9 90 60 31           4500 	mov	dptr,#_train_g1_index
   6DCC E0                 4501 	movx	a,@dptr
   6DCD FE                 4502 	mov	r6,a
   6DCE 90 67 B5           4503 	mov	dptr,#_opt_g1_index
   6DD1 E0                 4504 	movx	a,@dptr
   6DD2 FF                 4505 	mov	r7,a
   6DD3 B5 06 00           4506 	cjne	a,ar6,00251$
   6DD6                    4507 00251$:
   6DD6 50 04              4508 	jnc	00122$
   6DD8 7E 01              4509 	mov	r6,#0x01
   6DDA 80 02              4510 	sjmp	00123$
   6DDC                    4511 00122$:
   6DDC 7E 00              4512 	mov	r6,#0x00
   6DDE                    4513 00123$:
   6DDE E5 18              4514 	mov	a,_bp
   6DE0 24 04              4515 	add	a,#0x04
   6DE2 F8                 4516 	mov	r0,a
   6DE3 A6 06              4517 	mov	@r0,ar6
   6DE5 80 30              4518 	sjmp	00103$
   6DE7                    4519 00102$:
                           4520 ;	../../shared/src/tx_train.c:618: UTH = tag_TX_F0T_GN1UPDATE_THRES;
   6DE7 A8 18              4521 	mov	r0,_bp
   6DE9 08                 4522 	inc	r0
   6DEA 76 00              4523 	mov	@r0,#0x00
                           4524 ;	../../shared/src/tx_train.c:619: OBEN = tag_TX_GN1_OVERBOOST_EN;
   6DEC A8 18              4525 	mov	r0,_bp
   6DEE 08                 4526 	inc	r0
   6DEF 08                 4527 	inc	r0
   6DF0 76 01              4528 	mov	@r0,#0x01
                           4529 ;	../../shared/src/tx_train.c:620: OBTH = tag_TX_GN1_OVERBOOST_THRES;
   6DF2 E5 18              4530 	mov	a,_bp
   6DF4 24 03              4531 	add	a,#0x03
   6DF6 F8                 4532 	mov	r0,a
   6DF7 76 03              4533 	mov	@r0,#0x03
                           4534 ;	../../shared/src/tx_train.c:621: OBUTH = tag_TX_GN1_OVERBOOST_UPDATE_THRES;
   6DF9 7D 04              4535 	mov	r5,#0x04
                           4536 ;	../../shared/src/tx_train.c:622: Train_Index_is_big = (train_gn1_index > opt_gn1_index) ? 1:0;
   6DFB 90 60 30           4537 	mov	dptr,#_train_gn1_index
   6DFE E0                 4538 	movx	a,@dptr
   6DFF FF                 4539 	mov	r7,a
   6E00 90 67 B4           4540 	mov	dptr,#_opt_gn1_index
   6E03 E0                 4541 	movx	a,@dptr
   6E04 FA                 4542 	mov	r2,a
   6E05 B5 07 00           4543 	cjne	a,ar7,00253$
   6E08                    4544 00253$:
   6E08 50 04              4545 	jnc	00124$
   6E0A 7A 01              4546 	mov	r2,#0x01
   6E0C 80 02              4547 	sjmp	00125$
   6E0E                    4548 00124$:
   6E0E 7A 00              4549 	mov	r2,#0x00
   6E10                    4550 00125$:
   6E10 E5 18              4551 	mov	a,_bp
   6E12 24 04              4552 	add	a,#0x04
   6E14 F8                 4553 	mov	r0,a
   6E15 A6 02              4554 	mov	@r0,ar2
   6E17                    4555 00103$:
                           4556 ;	../../shared/src/tx_train.c:625: if (opt.level < train.level)
   6E17 90 66 92           4557 	mov	dptr,#(_opt + 0x0023)
   6E1A E0                 4558 	movx	a,@dptr
   6E1B FA                 4559 	mov	r2,a
   6E1C 90 66 63           4560 	mov	dptr,#(_train + 0x0023)
   6E1F E0                 4561 	movx	a,@dptr
   6E20 FF                 4562 	mov	r7,a
   6E21 EA                 4563 	mov	a,r2
   6E22 B5 07 00           4564 	cjne	a,ar7,00255$
   6E25                    4565 00255$:
   6E25 50 0E              4566 	jnc	00116$
                           4567 ;	../../shared/src/tx_train.c:627: tx.ffe_updated = 1;
   6E27 90 66 9F           4568 	mov	dptr,#(_tx + 0x0001)
   6E2A 74 01              4569 	mov	a,#0x01
   6E2C F0                 4570 	movx	@dptr,a
                           4571 ;	../../shared/src/tx_train.c:628: tx.become_worse = 0;
   6E2D 90 66 A7           4572 	mov	dptr,#(_tx + 0x0009)
   6E30 E4                 4573 	clr	a
   6E31 F0                 4574 	movx	@dptr,a
   6E32 02 71 40           4575 	ljmp	00117$
   6E35                    4576 00116$:
                           4577 ;	../../shared/src/tx_train.c:630: else if (opt.level == train.level) // intra-level compare
   6E35 EA                 4578 	mov	a,r2
   6E36 B5 07 02           4579 	cjne	a,ar7,00257$
   6E39 80 03              4580 	sjmp	00258$
   6E3B                    4581 00257$:
   6E3B 02 71 35           4582 	ljmp	00113$
   6E3E                    4583 00258$:
                           4584 ;	../../shared/src/tx_train.c:632: tx.train_overboost = OBEN && ((train.f0 < 63 && train.fn1 < OBTH) || (train.f0 >= 63 && train.f0a >= 63));
   6E3E A8 18              4585 	mov	r0,_bp
   6E40 08                 4586 	inc	r0
   6E41 08                 4587 	inc	r0
   6E42 E6                 4588 	mov	a,@r0
   6E43 60 63              4589 	jz	00126$
   6E45 90 66 5A           4590 	mov	dptr,#(_train + 0x001a)
   6E48 E0                 4591 	movx	a,@dptr
   6E49 FA                 4592 	mov	r2,a
   6E4A BA 3F 00           4593 	cjne	r2,#0x3F,00260$
   6E4D                    4594 00260$:
   6E4D E4                 4595 	clr	a
   6E4E 33                 4596 	rlc	a
   6E4F FA                 4597 	mov	r2,a
   6E50 60 25              4598 	jz	00132$
   6E52 C0 02              4599 	push	ar2
   6E54 90 66 5D           4600 	mov	dptr,#(_train + 0x001d)
   6E57 E0                 4601 	movx	a,@dptr
   6E58 FA                 4602 	mov	r2,a
   6E59 33                 4603 	rlc	a
   6E5A 95 E0              4604 	subb	a,acc
   6E5C FE                 4605 	mov	r6,a
   6E5D E5 18              4606 	mov	a,_bp
   6E5F 24 03              4607 	add	a,#0x03
   6E61 F8                 4608 	mov	r0,a
   6E62 86 04              4609 	mov	ar4,@r0
   6E64 7B 00              4610 	mov	r3,#0x00
   6E66 C3                 4611 	clr	c
   6E67 EA                 4612 	mov	a,r2
   6E68 9C                 4613 	subb	a,r4
   6E69 EE                 4614 	mov	a,r6
   6E6A 64 80              4615 	xrl	a,#0x80
   6E6C 8B F0              4616 	mov	b,r3
   6E6E 63 F0 80           4617 	xrl	b,#0x80
   6E71 95 F0              4618 	subb	a,b
   6E73 D0 02              4619 	pop	ar2
   6E75 40 04              4620 	jc	00133$
   6E77                    4621 00132$:
   6E77 7B 00              4622 	mov	r3,#0x00
   6E79 80 02              4623 	sjmp	00134$
   6E7B                    4624 00133$:
   6E7B 7B 01              4625 	mov	r3,#0x01
   6E7D                    4626 00134$:
   6E7D EB                 4627 	mov	a,r3
   6E7E 70 23              4628 	jnz	00130$
   6E80 EA                 4629 	mov	a,r2
   6E81 B4 01 00           4630 	cjne	a,#0x01,00264$
   6E84                    4631 00264$:
   6E84 E4                 4632 	clr	a
   6E85 33                 4633 	rlc	a
   6E86 FA                 4634 	mov	r2,a
   6E87 60 0E              4635 	jz	00135$
   6E89 90 66 59           4636 	mov	dptr,#(_train + 0x0019)
   6E8C E0                 4637 	movx	a,@dptr
   6E8D FA                 4638 	mov	r2,a
   6E8E BA 3F 00           4639 	cjne	r2,#0x3F,00266$
   6E91                    4640 00266$:
   6E91 B3                 4641 	cpl	c
   6E92 E4                 4642 	clr	a
   6E93 33                 4643 	rlc	a
   6E94 FA                 4644 	mov	r2,a
   6E95 70 04              4645 	jnz	00136$
   6E97                    4646 00135$:
   6E97 7A 00              4647 	mov	r2,#0x00
   6E99 80 02              4648 	sjmp	00137$
   6E9B                    4649 00136$:
   6E9B 7A 01              4650 	mov	r2,#0x01
   6E9D                    4651 00137$:
   6E9D EA                 4652 	mov	a,r2
   6E9E 70 03              4653 	jnz	00130$
   6EA0 FA                 4654 	mov	r2,a
   6EA1 80 02              4655 	sjmp	00131$
   6EA3                    4656 00130$:
   6EA3 7A 01              4657 	mov	r2,#0x01
   6EA5                    4658 00131$:
   6EA5 EA                 4659 	mov	a,r2
   6EA6 70 04              4660 	jnz	00127$
   6EA8                    4661 00126$:
   6EA8 7A 00              4662 	mov	r2,#0x00
   6EAA 80 02              4663 	sjmp	00128$
   6EAC                    4664 00127$:
   6EAC 7A 01              4665 	mov	r2,#0x01
   6EAE                    4666 00128$:
   6EAE 90 66 AA           4667 	mov	dptr,#(_tx + 0x000c)
   6EB1 EA                 4668 	mov	a,r2
   6EB2 F0                 4669 	movx	@dptr,a
                           4670 ;	../../shared/src/tx_train.c:633: tx.opt_overboost = OBEN && ((opt.f0 < 63 && opt.fn1 < OBTH) || (opt.f0 >= 63 && opt.f0a >= 63));
   6EB3 A8 18              4671 	mov	r0,_bp
   6EB5 08                 4672 	inc	r0
   6EB6 08                 4673 	inc	r0
   6EB7 E6                 4674 	mov	a,@r0
   6EB8 60 63              4675 	jz	00138$
   6EBA 90 66 89           4676 	mov	dptr,#(_opt + 0x001a)
   6EBD E0                 4677 	movx	a,@dptr
   6EBE FA                 4678 	mov	r2,a
   6EBF BA 3F 00           4679 	cjne	r2,#0x3F,00272$
   6EC2                    4680 00272$:
   6EC2 E4                 4681 	clr	a
   6EC3 33                 4682 	rlc	a
   6EC4 FA                 4683 	mov	r2,a
   6EC5 60 25              4684 	jz	00144$
   6EC7 C0 02              4685 	push	ar2
   6EC9 90 66 8C           4686 	mov	dptr,#(_opt + 0x001d)
   6ECC E0                 4687 	movx	a,@dptr
   6ECD FB                 4688 	mov	r3,a
   6ECE 33                 4689 	rlc	a
   6ECF 95 E0              4690 	subb	a,acc
   6ED1 FC                 4691 	mov	r4,a
   6ED2 E5 18              4692 	mov	a,_bp
   6ED4 24 03              4693 	add	a,#0x03
   6ED6 F8                 4694 	mov	r0,a
   6ED7 86 06              4695 	mov	ar6,@r0
   6ED9 7A 00              4696 	mov	r2,#0x00
   6EDB C3                 4697 	clr	c
   6EDC EB                 4698 	mov	a,r3
   6EDD 9E                 4699 	subb	a,r6
   6EDE EC                 4700 	mov	a,r4
   6EDF 64 80              4701 	xrl	a,#0x80
   6EE1 8A F0              4702 	mov	b,r2
   6EE3 63 F0 80           4703 	xrl	b,#0x80
   6EE6 95 F0              4704 	subb	a,b
   6EE8 D0 02              4705 	pop	ar2
   6EEA 40 04              4706 	jc	00145$
   6EEC                    4707 00144$:
   6EEC 7B 00              4708 	mov	r3,#0x00
   6EEE 80 02              4709 	sjmp	00146$
   6EF0                    4710 00145$:
   6EF0 7B 01              4711 	mov	r3,#0x01
   6EF2                    4712 00146$:
   6EF2 EB                 4713 	mov	a,r3
   6EF3 70 23              4714 	jnz	00142$
   6EF5 EA                 4715 	mov	a,r2
   6EF6 B4 01 00           4716 	cjne	a,#0x01,00276$
   6EF9                    4717 00276$:
   6EF9 E4                 4718 	clr	a
   6EFA 33                 4719 	rlc	a
   6EFB FA                 4720 	mov	r2,a
   6EFC 60 0E              4721 	jz	00147$
   6EFE 90 66 88           4722 	mov	dptr,#(_opt + 0x0019)
   6F01 E0                 4723 	movx	a,@dptr
   6F02 FA                 4724 	mov	r2,a
   6F03 BA 3F 00           4725 	cjne	r2,#0x3F,00278$
   6F06                    4726 00278$:
   6F06 B3                 4727 	cpl	c
   6F07 E4                 4728 	clr	a
   6F08 33                 4729 	rlc	a
   6F09 FA                 4730 	mov	r2,a
   6F0A 70 04              4731 	jnz	00148$
   6F0C                    4732 00147$:
   6F0C 7A 00              4733 	mov	r2,#0x00
   6F0E 80 02              4734 	sjmp	00149$
   6F10                    4735 00148$:
   6F10 7A 01              4736 	mov	r2,#0x01
   6F12                    4737 00149$:
   6F12 EA                 4738 	mov	a,r2
   6F13 70 03              4739 	jnz	00142$
   6F15 FA                 4740 	mov	r2,a
   6F16 80 02              4741 	sjmp	00143$
   6F18                    4742 00142$:
   6F18 7A 01              4743 	mov	r2,#0x01
   6F1A                    4744 00143$:
   6F1A EA                 4745 	mov	a,r2
   6F1B 70 04              4746 	jnz	00139$
   6F1D                    4747 00138$:
   6F1D 7A 00              4748 	mov	r2,#0x00
   6F1F 80 02              4749 	sjmp	00140$
   6F21                    4750 00139$:
   6F21 7A 01              4751 	mov	r2,#0x01
   6F23                    4752 00140$:
   6F23 90 66 AB           4753 	mov	dptr,#(_tx + 0x000d)
   6F26 EA                 4754 	mov	a,r2
   6F27 F0                 4755 	movx	@dptr,a
                           4756 ;	../../shared/src/tx_train.c:635: if (train.level == 1 || train.level == 2 || train.level == 4) // level 1/2/4
   6F28 BF 01 02           4757 	cjne	r7,#0x01,00283$
   6F2B 80 0D              4758 	sjmp	00107$
   6F2D                    4759 00283$:
   6F2D BF 02 02           4760 	cjne	r7,#0x02,00284$
   6F30 80 08              4761 	sjmp	00107$
   6F32                    4762 00284$:
   6F32 BF 04 02           4763 	cjne	r7,#0x04,00285$
   6F35 80 03              4764 	sjmp	00286$
   6F37                    4765 00285$:
   6F37 02 70 5E           4766 	ljmp	00108$
   6F3A                    4767 00286$:
   6F3A                    4768 00107$:
                           4769 ;	../../shared/src/tx_train.c:637: tx.ffe_updated = (train.f0t > (opt.f0t + UTH))
   6F3A C0 05              4770 	push	ar5
   6F3C 90 66 5E           4771 	mov	dptr,#(_train + 0x001e)
   6F3F E0                 4772 	movx	a,@dptr
   6F40 FA                 4773 	mov	r2,a
   6F41 90 66 8D           4774 	mov	dptr,#(_opt + 0x001e)
   6F44 E0                 4775 	movx	a,@dptr
   6F45 FB                 4776 	mov	r3,a
   6F46 7C 00              4777 	mov	r4,#0x00
   6F48 A8 18              4778 	mov	r0,_bp
   6F4A 08                 4779 	inc	r0
   6F4B 86 06              4780 	mov	ar6,@r0
   6F4D 7D 00              4781 	mov	r5,#0x00
   6F4F EE                 4782 	mov	a,r6
   6F50 2B                 4783 	add	a,r3
   6F51 FE                 4784 	mov	r6,a
   6F52 ED                 4785 	mov	a,r5
   6F53 3C                 4786 	addc	a,r4
   6F54 FD                 4787 	mov	r5,a
   6F55 E5 18              4788 	mov	a,_bp
   6F57 24 05              4789 	add	a,#0x05
   6F59 F8                 4790 	mov	r0,a
   6F5A A6 02              4791 	mov	@r0,ar2
   6F5C 08                 4792 	inc	r0
   6F5D 76 00              4793 	mov	@r0,#0x00
   6F5F E5 18              4794 	mov	a,_bp
   6F61 24 05              4795 	add	a,#0x05
   6F63 F8                 4796 	mov	r0,a
   6F64 C3                 4797 	clr	c
   6F65 EE                 4798 	mov	a,r6
   6F66 96                 4799 	subb	a,@r0
   6F67 ED                 4800 	mov	a,r5
   6F68 64 80              4801 	xrl	a,#0x80
   6F6A 08                 4802 	inc	r0
   6F6B 86 F0              4803 	mov	b,@r0
   6F6D 63 F0 80           4804 	xrl	b,#0x80
   6F70 95 F0              4805 	subb	a,b
   6F72 D0 05              4806 	pop	ar5
   6F74 40 42              4807 	jc	00154$
                           4808 ;	../../shared/src/tx_train.c:638: || (tx.train_overboost==0 && tx.opt_overboost && train.f0t > (opt.f0t - OBUTH))
   6F76 90 66 AA           4809 	mov	dptr,#(_tx + 0x000c)
   6F79 E0                 4810 	movx	a,@dptr
   6F7A FA                 4811 	mov	r2,a
   6F7B 70 06              4812 	jnz	00159$
   6F7D 90 66 AB           4813 	mov	dptr,#(_tx + 0x000d)
   6F80 E0                 4814 	movx	a,@dptr
   6F81 70 04              4815 	jnz	00160$
   6F83                    4816 00159$:
   6F83 7A 00              4817 	mov	r2,#0x00
   6F85 80 02              4818 	sjmp	00161$
   6F87                    4819 00160$:
   6F87 7A 01              4820 	mov	r2,#0x01
   6F89                    4821 00161$:
   6F89 EA                 4822 	mov	a,r2
   6F8A 60 20              4823 	jz	00156$
   6F8C 8D 02              4824 	mov	ar2,r5
   6F8E 7E 00              4825 	mov	r6,#0x00
   6F90 EB                 4826 	mov	a,r3
   6F91 C3                 4827 	clr	c
   6F92 9A                 4828 	subb	a,r2
   6F93 FA                 4829 	mov	r2,a
   6F94 EC                 4830 	mov	a,r4
   6F95 9E                 4831 	subb	a,r6
   6F96 FE                 4832 	mov	r6,a
   6F97 E5 18              4833 	mov	a,_bp
   6F99 24 05              4834 	add	a,#0x05
   6F9B F8                 4835 	mov	r0,a
   6F9C C3                 4836 	clr	c
   6F9D EA                 4837 	mov	a,r2
   6F9E 96                 4838 	subb	a,@r0
   6F9F EE                 4839 	mov	a,r6
   6FA0 64 80              4840 	xrl	a,#0x80
   6FA2 08                 4841 	inc	r0
   6FA3 86 F0              4842 	mov	b,@r0
   6FA5 63 F0 80           4843 	xrl	b,#0x80
   6FA8 95 F0              4844 	subb	a,b
   6FAA 40 04              4845 	jc	00157$
   6FAC                    4846 00156$:
   6FAC 7A 00              4847 	mov	r2,#0x00
   6FAE 80 02              4848 	sjmp	00158$
   6FB0                    4849 00157$:
   6FB0 7A 01              4850 	mov	r2,#0x01
   6FB2                    4851 00158$:
   6FB2 EA                 4852 	mov	a,r2
   6FB3 70 03              4853 	jnz	00154$
   6FB5 FA                 4854 	mov	r2,a
   6FB6 80 02              4855 	sjmp	00155$
   6FB8                    4856 00154$:
   6FB8 7A 01              4857 	mov	r2,#0x01
   6FBA                    4858 00155$:
   6FBA EA                 4859 	mov	a,r2
   6FBB 70 52              4860 	jnz	00151$
                           4861 ;	../../shared/src/tx_train.c:639: || (tx.train_overboost && tx.opt_overboost && Train_Index_is_big && train.f0t > (opt.f0t - OBUTH));
   6FBD 90 66 AA           4862 	mov	dptr,#(_tx + 0x000c)
   6FC0 E0                 4863 	movx	a,@dptr
   6FC1 60 06              4864 	jz	00168$
   6FC3 90 66 AB           4865 	mov	dptr,#(_tx + 0x000d)
   6FC6 E0                 4866 	movx	a,@dptr
   6FC7 70 04              4867 	jnz	00169$
   6FC9                    4868 00168$:
   6FC9 7A 00              4869 	mov	r2,#0x00
   6FCB 80 02              4870 	sjmp	00170$
   6FCD                    4871 00169$:
   6FCD 7A 01              4872 	mov	r2,#0x01
   6FCF                    4873 00170$:
   6FCF EA                 4874 	mov	a,r2
   6FD0 60 08              4875 	jz	00165$
   6FD2 E5 18              4876 	mov	a,_bp
   6FD4 24 04              4877 	add	a,#0x04
   6FD6 F8                 4878 	mov	r0,a
   6FD7 E6                 4879 	mov	a,@r0
   6FD8 70 04              4880 	jnz	00166$
   6FDA                    4881 00165$:
   6FDA 7A 00              4882 	mov	r2,#0x00
   6FDC 80 02              4883 	sjmp	00167$
   6FDE                    4884 00166$:
   6FDE 7A 01              4885 	mov	r2,#0x01
   6FE0                    4886 00167$:
   6FE0 EA                 4887 	mov	a,r2
   6FE1 60 20              4888 	jz	00162$
   6FE3 8D 02              4889 	mov	ar2,r5
   6FE5 7E 00              4890 	mov	r6,#0x00
   6FE7 EB                 4891 	mov	a,r3
   6FE8 C3                 4892 	clr	c
   6FE9 9A                 4893 	subb	a,r2
   6FEA FA                 4894 	mov	r2,a
   6FEB EC                 4895 	mov	a,r4
   6FEC 9E                 4896 	subb	a,r6
   6FED FE                 4897 	mov	r6,a
   6FEE E5 18              4898 	mov	a,_bp
   6FF0 24 05              4899 	add	a,#0x05
   6FF2 F8                 4900 	mov	r0,a
   6FF3 C3                 4901 	clr	c
   6FF4 EA                 4902 	mov	a,r2
   6FF5 96                 4903 	subb	a,@r0
   6FF6 EE                 4904 	mov	a,r6
   6FF7 64 80              4905 	xrl	a,#0x80
   6FF9 08                 4906 	inc	r0
   6FFA 86 F0              4907 	mov	b,@r0
   6FFC 63 F0 80           4908 	xrl	b,#0x80
   6FFF 95 F0              4909 	subb	a,b
   7001 40 04              4910 	jc	00163$
   7003                    4911 00162$:
   7003 7A 00              4912 	mov	r2,#0x00
   7005 80 02              4913 	sjmp	00164$
   7007                    4914 00163$:
   7007 7A 01              4915 	mov	r2,#0x01
   7009                    4916 00164$:
   7009 EA                 4917 	mov	a,r2
   700A 70 03              4918 	jnz	00151$
   700C FA                 4919 	mov	r2,a
   700D 80 02              4920 	sjmp	00152$
   700F                    4921 00151$:
   700F 7A 01              4922 	mov	r2,#0x01
   7011                    4923 00152$:
   7011 90 66 9F           4924 	mov	dptr,#(_tx + 0x0001)
   7014 EA                 4925 	mov	a,r2
   7015 F0                 4926 	movx	@dptr,a
                           4927 ;	../../shared/src/tx_train.c:640: tx.become_worse = tag_TX_STOP_IF_WORSE && (train.f0t < (opt.f0t - tag_TX_STOP_THRES)
   7016 EB                 4928 	mov	a,r3
   7017 24 F6              4929 	add	a,#0xf6
   7019 FB                 4930 	mov	r3,a
   701A EC                 4931 	mov	a,r4
   701B 34 FF              4932 	addc	a,#0xff
   701D FC                 4933 	mov	r4,a
   701E E5 18              4934 	mov	a,_bp
   7020 24 05              4935 	add	a,#0x05
   7022 F8                 4936 	mov	r0,a
   7023 C3                 4937 	clr	c
   7024 E6                 4938 	mov	a,@r0
   7025 9B                 4939 	subb	a,r3
   7026 08                 4940 	inc	r0
   7027 E6                 4941 	mov	a,@r0
   7028 64 80              4942 	xrl	a,#0x80
   702A 8C F0              4943 	mov	b,r4
   702C 63 F0 80           4944 	xrl	b,#0x80
   702F 95 F0              4945 	subb	a,b
   7031 40 19              4946 	jc	00175$
                           4947 ;	../../shared/src/tx_train.c:641: || (tx.train_overboost && tx.opt_overboost==0));
   7033 90 66 AA           4948 	mov	dptr,#(_tx + 0x000c)
   7036 E0                 4949 	movx	a,@dptr
   7037 60 07              4950 	jz	00177$
   7039 90 66 AB           4951 	mov	dptr,#(_tx + 0x000d)
   703C E0                 4952 	movx	a,@dptr
   703D FA                 4953 	mov	r2,a
   703E 60 04              4954 	jz	00178$
   7040                    4955 00177$:
   7040 7A 00              4956 	mov	r2,#0x00
   7042 80 02              4957 	sjmp	00179$
   7044                    4958 00178$:
   7044 7A 01              4959 	mov	r2,#0x01
   7046                    4960 00179$:
   7046 EA                 4961 	mov	a,r2
   7047 70 03              4962 	jnz	00175$
   7049 FA                 4963 	mov	r2,a
   704A 80 02              4964 	sjmp	00176$
   704C                    4965 00175$:
   704C 7A 01              4966 	mov	r2,#0x01
   704E                    4967 00176$:
   704E EA                 4968 	mov	a,r2
   704F 70 03              4969 	jnz	00172$
   7051 FA                 4970 	mov	r2,a
   7052 80 02              4971 	sjmp	00173$
   7054                    4972 00172$:
   7054 7A 01              4973 	mov	r2,#0x01
   7056                    4974 00173$:
   7056 90 66 A7           4975 	mov	dptr,#(_tx + 0x0009)
   7059 EA                 4976 	mov	a,r2
   705A F0                 4977 	movx	@dptr,a
   705B 02 71 40           4978 	ljmp	00117$
   705E                    4979 00108$:
                           4980 ;	../../shared/src/tx_train.c:643: else if (train.level == 3) // level 3
   705E BF 03 02           4981 	cjne	r7,#0x03,00307$
   7061 80 03              4982 	sjmp	00308$
   7063                    4983 00307$:
   7063 02 71 2A           4984 	ljmp	00105$
   7066                    4985 00308$:
                           4986 ;	../../shared/src/tx_train.c:645: tx.ffe_updated = (train.f0a_saturate==0 && opt.f0a_saturate && train.dfe_saturate == opt.dfe_saturate) 
   7066 90 66 66           4987 	mov	dptr,#(_train + 0x0026)
   7069 E0                 4988 	movx	a,@dptr
   706A FA                 4989 	mov	r2,a
   706B 70 06              4990 	jnz	00189$
   706D 90 66 95           4991 	mov	dptr,#(_opt + 0x0026)
   7070 E0                 4992 	movx	a,@dptr
   7071 70 04              4993 	jnz	00190$
   7073                    4994 00189$:
   7073 7B 00              4995 	mov	r3,#0x00
   7075 80 02              4996 	sjmp	00191$
   7077                    4997 00190$:
   7077 7B 01              4998 	mov	r3,#0x01
   7079                    4999 00191$:
   7079 EB                 5000 	mov	a,r3
   707A 60 10              5001 	jz	00186$
   707C 90 66 67           5002 	mov	dptr,#(_train + 0x0027)
   707F E0                 5003 	movx	a,@dptr
   7080 FB                 5004 	mov	r3,a
   7081 90 66 96           5005 	mov	dptr,#(_opt + 0x0027)
   7084 E0                 5006 	movx	a,@dptr
   7085 FC                 5007 	mov	r4,a
   7086 EB                 5008 	mov	a,r3
   7087 B5 04 02           5009 	cjne	a,ar4,00313$
   708A 80 04              5010 	sjmp	00187$
   708C                    5011 00313$:
   708C                    5012 00186$:
   708C 7B 00              5013 	mov	r3,#0x00
   708E 80 02              5014 	sjmp	00188$
   7090                    5015 00187$:
   7090 7B 01              5016 	mov	r3,#0x01
   7092                    5017 00188$:
   7092 EB                 5018 	mov	a,r3
   7093 70 2B              5019 	jnz	00184$
                           5020 ;	../../shared/src/tx_train.c:646: || (train.f0a_saturate == opt.f0a_saturate && train.dfe_saturate==0 && opt.dfe_saturate)
   7095 90 66 95           5021 	mov	dptr,#(_opt + 0x0026)
   7098 E0                 5022 	movx	a,@dptr
   7099 FB                 5023 	mov	r3,a
   709A EA                 5024 	mov	a,r2
   709B B5 03 07           5025 	cjne	a,ar3,00195$
   709E 90 66 67           5026 	mov	dptr,#(_train + 0x0027)
   70A1 E0                 5027 	movx	a,@dptr
   70A2 FA                 5028 	mov	r2,a
   70A3 60 04              5029 	jz	00196$
   70A5                    5030 00195$:
   70A5 7A 00              5031 	mov	r2,#0x00
   70A7 80 02              5032 	sjmp	00197$
   70A9                    5033 00196$:
   70A9 7A 01              5034 	mov	r2,#0x01
   70AB                    5035 00197$:
   70AB EA                 5036 	mov	a,r2
   70AC 60 06              5037 	jz	00192$
   70AE 90 66 96           5038 	mov	dptr,#(_opt + 0x0027)
   70B1 E0                 5039 	movx	a,@dptr
   70B2 70 04              5040 	jnz	00193$
   70B4                    5041 00192$:
   70B4 7A 00              5042 	mov	r2,#0x00
   70B6 80 02              5043 	sjmp	00194$
   70B8                    5044 00193$:
   70B8 7A 01              5045 	mov	r2,#0x01
   70BA                    5046 00194$:
   70BA EA                 5047 	mov	a,r2
   70BB 70 03              5048 	jnz	00184$
   70BD FA                 5049 	mov	r2,a
   70BE 80 02              5050 	sjmp	00185$
   70C0                    5051 00184$:
   70C0 7A 01              5052 	mov	r2,#0x01
   70C2                    5053 00185$:
   70C2 EA                 5054 	mov	a,r2
   70C3 70 57              5055 	jnz	00181$
                           5056 ;	../../shared/src/tx_train.c:647: || (tx.train_overboost && tx.opt_overboost && Train_Index_is_big && train.f0t > (opt.f0t - OBUTH));
   70C5 90 66 AA           5057 	mov	dptr,#(_tx + 0x000c)
   70C8 E0                 5058 	movx	a,@dptr
   70C9 60 06              5059 	jz	00204$
   70CB 90 66 AB           5060 	mov	dptr,#(_tx + 0x000d)
   70CE E0                 5061 	movx	a,@dptr
   70CF 70 04              5062 	jnz	00205$
   70D1                    5063 00204$:
   70D1 7A 00              5064 	mov	r2,#0x00
   70D3 80 02              5065 	sjmp	00206$
   70D5                    5066 00205$:
   70D5 7A 01              5067 	mov	r2,#0x01
   70D7                    5068 00206$:
   70D7 EA                 5069 	mov	a,r2
   70D8 60 08              5070 	jz	00201$
   70DA E5 18              5071 	mov	a,_bp
   70DC 24 04              5072 	add	a,#0x04
   70DE F8                 5073 	mov	r0,a
   70DF E6                 5074 	mov	a,@r0
   70E0 70 04              5075 	jnz	00202$
   70E2                    5076 00201$:
   70E2 7A 00              5077 	mov	r2,#0x00
   70E4 80 02              5078 	sjmp	00203$
   70E6                    5079 00202$:
   70E6 7A 01              5080 	mov	r2,#0x01
   70E8                    5081 00203$:
   70E8 EA                 5082 	mov	a,r2
   70E9 60 25              5083 	jz	00198$
   70EB 90 66 5E           5084 	mov	dptr,#(_train + 0x001e)
   70EE E0                 5085 	movx	a,@dptr
   70EF FA                 5086 	mov	r2,a
   70F0 90 66 8D           5087 	mov	dptr,#(_opt + 0x001e)
   70F3 E0                 5088 	movx	a,@dptr
   70F4 FB                 5089 	mov	r3,a
   70F5 E4                 5090 	clr	a
   70F6 FC                 5091 	mov	r4,a
   70F7 FE                 5092 	mov	r6,a
   70F8 EB                 5093 	mov	a,r3
   70F9 C3                 5094 	clr	c
   70FA 9D                 5095 	subb	a,r5
   70FB FB                 5096 	mov	r3,a
   70FC EC                 5097 	mov	a,r4
   70FD 9E                 5098 	subb	a,r6
   70FE FC                 5099 	mov	r4,a
   70FF 7D 00              5100 	mov	r5,#0x00
   7101 C3                 5101 	clr	c
   7102 EB                 5102 	mov	a,r3
   7103 9A                 5103 	subb	a,r2
   7104 EC                 5104 	mov	a,r4
   7105 64 80              5105 	xrl	a,#0x80
   7107 8D F0              5106 	mov	b,r5
   7109 63 F0 80           5107 	xrl	b,#0x80
   710C 95 F0              5108 	subb	a,b
   710E 40 04              5109 	jc	00199$
   7110                    5110 00198$:
   7110 7A 00              5111 	mov	r2,#0x00
   7112 80 02              5112 	sjmp	00200$
   7114                    5113 00199$:
   7114 7A 01              5114 	mov	r2,#0x01
   7116                    5115 00200$:
   7116 EA                 5116 	mov	a,r2
   7117 70 03              5117 	jnz	00181$
   7119 FA                 5118 	mov	r2,a
   711A 80 02              5119 	sjmp	00182$
   711C                    5120 00181$:
   711C 7A 01              5121 	mov	r2,#0x01
   711E                    5122 00182$:
   711E 90 66 9F           5123 	mov	dptr,#(_tx + 0x0001)
   7121 EA                 5124 	mov	a,r2
   7122 F0                 5125 	movx	@dptr,a
                           5126 ;	../../shared/src/tx_train.c:648: tx.become_worse = 0;
   7123 90 66 A7           5127 	mov	dptr,#(_tx + 0x0009)
   7126 E4                 5128 	clr	a
   7127 F0                 5129 	movx	@dptr,a
   7128 80 16              5130 	sjmp	00117$
   712A                    5131 00105$:
                           5132 ;	../../shared/src/tx_train.c:652: tx.ffe_updated = 0;
   712A 90 66 9F           5133 	mov	dptr,#(_tx + 0x0001)
                           5134 ;	../../shared/src/tx_train.c:653: tx.become_worse = 0;
   712D E4                 5135 	clr	a
   712E F0                 5136 	movx	@dptr,a
   712F 90 66 A7           5137 	mov	dptr,#(_tx + 0x0009)
   7132 F0                 5138 	movx	@dptr,a
   7133 80 0B              5139 	sjmp	00117$
   7135                    5140 00113$:
                           5141 ;	../../shared/src/tx_train.c:658: tx.ffe_updated = 0;
   7135 90 66 9F           5142 	mov	dptr,#(_tx + 0x0001)
   7138 E4                 5143 	clr	a
   7139 F0                 5144 	movx	@dptr,a
                           5145 ;	../../shared/src/tx_train.c:659: tx.become_worse = tag_TX_STOP_IF_WORSE;
   713A 90 66 A7           5146 	mov	dptr,#(_tx + 0x0009)
   713D 74 01              5147 	mov	a,#0x01
   713F F0                 5148 	movx	@dptr,a
   7140                    5149 00117$:
                           5150 ;	../../shared/src/tx_train.c:662: if (tx.ffe_updated)
   7140 90 66 9F           5151 	mov	dptr,#(_tx + 0x0001)
   7143 E0                 5152 	movx	a,@dptr
   7144 60 03              5153 	jz	00120$
                           5154 ;	../../shared/src/tx_train.c:664: update_opt_trx_ffe(); // update the memory of Opt
   7146 12 59 A0           5155 	lcall	_update_opt_trx_ffe
   7149                    5156 00120$:
   7149 85 18 81           5157 	mov	sp,_bp
   714C D0 18              5158 	pop	_bp
   714E 22                 5159 	ret
                           5160 ;------------------------------------------------------------
                           5161 ;Allocation info for local variables in function 'tx_train_dummy'
                           5162 ;------------------------------------------------------------
                           5163 ;------------------------------------------------------------
                           5164 ;	../../shared/src/tx_train.c:776: void tx_train_dummy(void) {
                           5165 ;	-----------------------------------------
                           5166 ;	 function tx_train_dummy
                           5167 ;	-----------------------------------------
   714F                    5168 _tx_train_dummy:
                           5169 ;	../../shared/src/tx_train.c:778: PHY_STATUS = ST_TXTRAIN;
   714F 90 22 30           5170 	mov	dptr,#_MCU_STATUS0_LANE
   7152 74 29              5171 	mov	a,#0x29
   7154 F0                 5172 	movx	@dptr,a
                           5173 ;	../../shared/src/tx_train.c:779: reg_MCU_DEBUG0_LANE_7_0 = 0x80;
   7155 90 22 B4           5174 	mov	dptr,#_MCU_DEBUG0_LANE
   7158 74 80              5175 	mov	a,#0x80
   715A F0                 5176 	movx	@dptr,a
                           5177 ;	../../shared/src/tx_train.c:790: update_g1(-1); //shorten by customer's request
   715B 75 82 FF           5178 	mov	dpl,#0xFF
   715E 12 73 55           5179 	lcall	_update_g1
                           5180 ;	../../shared/src/tx_train.c:793: opt.eye_check_pass = 1;
   7161 90 66 84           5181 	mov	dptr,#(_opt + 0x0015)
   7164 74 01              5182 	mov	a,#0x01
   7166 F0                 5183 	movx	@dptr,a
                           5184 ;	../../shared/src/tx_train.c:794: ctrl_trx_ffe_updated =1; 
   7167 D2 25              5185 	setb	_ctrl_trx_ffe_updated
                           5186 ;	../../shared/src/tx_train.c:795: ctrl_tx_train_done = 1;	
   7169 D2 22              5187 	setb	_ctrl_tx_train_done
   716B 22                 5188 	ret
                           5189 ;------------------------------------------------------------
                           5190 ;Allocation info for local variables in function 'tx_reset'
                           5191 ;------------------------------------------------------------
                           5192 ;index                     Allocated to registers r2 
                           5193 ;------------------------------------------------------------
                           5194 ;	../../shared/src/tx_train.c:812: void tx_reset(uint8_t index) {
                           5195 ;	-----------------------------------------
                           5196 ;	 function tx_reset
                           5197 ;	-----------------------------------------
   716C                    5198 _tx_reset:
   716C AA 82              5199 	mov	r2,dpl
                           5200 ;	../../shared/src/tx_train.c:818: if(phy_mode == 4) //ethernet
   716E 90 A3 16           5201 	mov	dptr,#(_SYSTEM + 0x0002)
   7171 E0                 5202 	movx	a,@dptr
   7172 54 07              5203 	anl	a,#0x07
   7174 FB                 5204 	mov	r3,a
   7175 BB 04 14           5205 	cjne	r3,#0x04,00102$
                           5206 ;	../../shared/src/tx_train.c:819: Send_ctrl_to_tx((index&0x03)<<12);	
   7178 74 03              5207 	mov	a,#0x03
   717A 5A                 5208 	anl	a,r2
   717B C4                 5209 	swap	a
   717C 54 F0              5210 	anl	a,#0xf0
   717E F5 83              5211 	mov	dph,a
   7180 75 82 00           5212 	mov	dpl,#0x00
   7183 78 74              5213 	mov	r0,#_Send_ctrl_to_tx
   7185 79 E5              5214 	mov	r1,#(_Send_ctrl_to_tx >> 8)
   7187 7A 01              5215 	mov	r2,#(_Send_ctrl_to_tx >> 16)
   7189 02 00 B3           5216 	ljmp	__sdcc_banked_call
   718C                    5217 00102$:
                           5218 ;	../../shared/src/tx_train.c:821: Send_ctrl_to_tx((index&0x0f)<<10);
   718C 53 02 0F           5219 	anl	ar2,#0x0F
   718F EA                 5220 	mov	a,r2
   7190 2A                 5221 	add	a,r2
   7191 25 E0              5222 	add	a,acc
   7193 F5 83              5223 	mov	dph,a
   7195 75 82 00           5224 	mov	dpl,#0x00
   7198 78 74              5225 	mov	r0,#_Send_ctrl_to_tx
   719A 79 E5              5226 	mov	r1,#(_Send_ctrl_to_tx >> 8)
   719C 7A 01              5227 	mov	r2,#(_Send_ctrl_to_tx >> 16)
   719E 02 00 B3           5228 	ljmp	__sdcc_banked_call
                           5229 ;------------------------------------------------------------
                           5230 ;Allocation info for local variables in function 'update_g0'
                           5231 ;------------------------------------------------------------
                           5232 ;update                    Allocated to registers r2 
                           5233 ;------------------------------------------------------------
                           5234 ;	../../shared/src/tx_train.c:839: void update_g0(int8_t update) 
                           5235 ;	-----------------------------------------
                           5236 ;	 function update_g0
                           5237 ;	-----------------------------------------
   71A1                    5238 _update_g0:
   71A1 AA 82              5239 	mov	r2,dpl
                           5240 ;	../../shared/src/tx_train.c:842: cnt = 16;
   71A3 90 22 C1           5241 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0001)
   71A6 74 10              5242 	mov	a,#0x10
   71A8 F0                 5243 	movx	@dptr,a
                           5244 ;	../../shared/src/tx_train.c:847: if (update > 0 && tx.g0_is_max==0)
   71A9 C3                 5245 	clr	c
   71AA 74 80              5246 	mov	a,#(0x00 ^ 0x80)
   71AC 8A F0              5247 	mov	b,r2
   71AE 63 F0 80           5248 	xrl	b,#0x80
   71B1 95 F0              5249 	subb	a,b
   71B3 50 50              5250 	jnc	00125$
   71B5 90 66 A1           5251 	mov	dptr,#(_tx + 0x0003)
   71B8 E0                 5252 	movx	a,@dptr
   71B9 70 4A              5253 	jnz	00125$
                           5254 ;	../../shared/src/tx_train.c:849: while(cnt-->0){			
   71BB 8A 03              5255 	mov	ar3,r2
   71BD                    5256 00108$:
   71BD 90 22 C1           5257 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0001)
   71C0 E0                 5258 	movx	a,@dptr
   71C1 FC                 5259 	mov	r4,a
   71C2 14                 5260 	dec	a
   71C3 FD                 5261 	mov	r5,a
   71C4 90 22 C1           5262 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0001)
   71C7 ED                 5263 	mov	a,r5
   71C8 F0                 5264 	movx	@dptr,a
   71C9 EC                 5265 	mov	a,r4
   71CA 70 01              5266 	jnz	00144$
   71CC 22                 5267 	ret
   71CD                    5268 00144$:
                           5269 ;	../../shared/src/tx_train.c:850: if(update > 0 &&  tx.g0_is_max==0){
   71CD C3                 5270 	clr	c
   71CE 74 80              5271 	mov	a,#(0x00 ^ 0x80)
   71D0 8B F0              5272 	mov	b,r3
   71D2 63 F0 80           5273 	xrl	b,#0x80
   71D5 95 F0              5274 	subb	a,b
   71D7 50 29              5275 	jnc	00105$
   71D9 90 66 A1           5276 	mov	dptr,#(_tx + 0x0003)
   71DC E0                 5277 	movx	a,@dptr
   71DD 70 23              5278 	jnz	00105$
                           5279 ;	../../shared/src/tx_train.c:852: req_local_ctrl(CE_NORMAL, 0, 1, 0);
   71DF 90 00 04           5280 	mov	dptr,#0x0004
   71E2 C0 03              5281 	push	ar3
   71E4 78 74              5282 	mov	r0,#_Send_ctrl_to_tx
   71E6 79 E5              5283 	mov	r1,#(_Send_ctrl_to_tx >> 8)
   71E8 7A 01              5284 	mov	r2,#(_Send_ctrl_to_tx >> 16)
   71EA 12 00 B3           5285 	lcall	__sdcc_banked_call
   71ED D0 03              5286 	pop	ar3
                           5287 ;	../../shared/src/tx_train.c:854: if(tx_pipe4_en==0 || tx.g0_is_max==0) {
   71EF 30 26 06           5288 	jnb	_tx_pipe4_en,00101$
   71F2 90 66 A1           5289 	mov	dptr,#(_tx + 0x0003)
   71F5 E0                 5290 	movx	a,@dptr
   71F6 70 C5              5291 	jnz	00108$
   71F8                    5292 00101$:
                           5293 ;	../../shared/src/tx_train.c:856: train_g0_index ++;
   71F8 90 60 32           5294 	mov	dptr,#_train_g0_index
   71FB E0                 5295 	movx	a,@dptr
   71FC 24 01              5296 	add	a,#0x01
   71FE F0                 5297 	movx	@dptr,a
                           5298 ;	../../shared/src/tx_train.c:857: update--;		               
   71FF 1B                 5299 	dec	r3
   7200 80 BB              5300 	sjmp	00108$
   7202                    5301 00105$:
                           5302 ;	../../shared/src/tx_train.c:861: dfe_cdr_phase_opt();
                           5303 ;	../../shared/src/tx_train.c:862: break;			
   7202 02 59 ED           5304 	ljmp	_dfe_cdr_phase_opt
   7205                    5305 00125$:
                           5306 ;	../../shared/src/tx_train.c:866: else if(update < 0 && tx.g0_is_min==0){ 
   7205 EA                 5307 	mov	a,r2
   7206 30 E7 47           5308 	jnb	acc.7,00128$
   7209 90 66 A2           5309 	mov	dptr,#(_tx + 0x0004)
   720C E0                 5310 	movx	a,@dptr
   720D 70 41              5311 	jnz	00128$
                           5312 ;	../../shared/src/tx_train.c:868: while(cnt-->0) 
   720F                    5313 00118$:
   720F 90 22 C1           5314 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0001)
   7212 E0                 5315 	movx	a,@dptr
   7213 FB                 5316 	mov	r3,a
   7214 14                 5317 	dec	a
   7215 FC                 5318 	mov	r4,a
   7216 90 22 C1           5319 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0001)
   7219 EC                 5320 	mov	a,r4
   721A F0                 5321 	movx	@dptr,a
   721B EB                 5322 	mov	a,r3
   721C 60 32              5323 	jz	00128$
                           5324 ;	../../shared/src/tx_train.c:870: if(update < 0 && tx.g0_is_min==0){ 
   721E EA                 5325 	mov	a,r2
   721F 30 E7 2B           5326 	jnb	acc.7,00115$
   7222 90 66 A2           5327 	mov	dptr,#(_tx + 0x0004)
   7225 E0                 5328 	movx	a,@dptr
   7226 70 25              5329 	jnz	00115$
                           5330 ;	../../shared/src/tx_train.c:872: req_local_ctrl(CE_NORMAL, 0, 2, 0);										
   7228 90 00 08           5331 	mov	dptr,#0x0008
   722B C0 02              5332 	push	ar2
   722D 78 74              5333 	mov	r0,#_Send_ctrl_to_tx
   722F 79 E5              5334 	mov	r1,#(_Send_ctrl_to_tx >> 8)
   7231 7A 01              5335 	mov	r2,#(_Send_ctrl_to_tx >> 16)
   7233 12 00 B3           5336 	lcall	__sdcc_banked_call
   7236 D0 02              5337 	pop	ar2
                           5338 ;	../../shared/src/tx_train.c:873: if(tx.g0_is_min==0 || tx_pipe4_en==0) {		   
   7238 90 66 A2           5339 	mov	dptr,#(_tx + 0x0004)
   723B E0                 5340 	movx	a,@dptr
   723C 60 03              5341 	jz	00111$
   723E 20 26 CE           5342 	jb	_tx_pipe4_en,00118$
   7241                    5343 00111$:
                           5344 ;	../../shared/src/tx_train.c:874: update ++; ////DBG_Pritnf("-");
   7241 0A                 5345 	inc	r2
                           5346 ;	../../shared/src/tx_train.c:875: train_g0_index --;
   7242 90 60 32           5347 	mov	dptr,#_train_g0_index
   7245 E0                 5348 	movx	a,@dptr
   7246 14                 5349 	dec	a
   7247 90 60 32           5350 	mov	dptr,#_train_g0_index
   724A F0                 5351 	movx	@dptr,a
   724B 80 C2              5352 	sjmp	00118$
   724D                    5353 00115$:
                           5354 ;	../../shared/src/tx_train.c:881: dfe_cdr_phase_opt();				
                           5355 ;	../../shared/src/tx_train.c:882: break;
   724D 02 59 ED           5356 	ljmp	_dfe_cdr_phase_opt
   7250                    5357 00128$:
   7250 22                 5358 	ret
                           5359 ;------------------------------------------------------------
                           5360 ;Allocation info for local variables in function 'update_gn1'
                           5361 ;------------------------------------------------------------
                           5362 ;update                    Allocated to registers r2 
                           5363 ;------------------------------------------------------------
                           5364 ;	../../shared/src/tx_train.c:888: void update_gn1(int8_t update)
                           5365 ;	-----------------------------------------
                           5366 ;	 function update_gn1
                           5367 ;	-----------------------------------------
   7251                    5368 _update_gn1:
   7251 AA 82              5369 	mov	r2,dpl
                           5370 ;	../../shared/src/tx_train.c:891: cnt = 16;
   7253 90 22 C1           5371 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0001)
   7256 74 10              5372 	mov	a,#0x10
   7258 F0                 5373 	movx	@dptr,a
                           5374 ;	../../shared/src/tx_train.c:896: if (update > 0 && tx.gn1_is_max==0)
   7259 C3                 5375 	clr	c
   725A 74 80              5376 	mov	a,#(0x00 ^ 0x80)
   725C 8A F0              5377 	mov	b,r2
   725E 63 F0 80           5378 	xrl	b,#0x80
   7261 95 F0              5379 	subb	a,b
   7263 50 74              5380 	jnc	00125$
   7265 90 66 A5           5381 	mov	dptr,#(_tx + 0x0007)
   7268 E0                 5382 	movx	a,@dptr
   7269 70 6E              5383 	jnz	00125$
                           5384 ;	../../shared/src/tx_train.c:898: while(cnt-->0){		
   726B 8A 03              5385 	mov	ar3,r2
   726D                    5386 00108$:
   726D 90 22 C1           5387 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0001)
   7270 E0                 5388 	movx	a,@dptr
   7271 FC                 5389 	mov	r4,a
   7272 14                 5390 	dec	a
   7273 FD                 5391 	mov	r5,a
   7274 90 22 C1           5392 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0001)
   7277 F0                 5393 	movx	@dptr,a
   7278 EC                 5394 	mov	a,r4
   7279 70 01              5395 	jnz	00150$
   727B 22                 5396 	ret
   727C                    5397 00150$:
                           5398 ;	../../shared/src/tx_train.c:902: if(update >0 && tx.gn1_is_max==0){
   727C C3                 5399 	clr	c
   727D 74 80              5400 	mov	a,#(0x00 ^ 0x80)
   727F 8B F0              5401 	mov	b,r3
   7281 63 F0 80           5402 	xrl	b,#0x80
   7284 95 F0              5403 	subb	a,b
   7286 50 4E              5404 	jnc	00105$
   7288 90 66 A5           5405 	mov	dptr,#(_tx + 0x0007)
   728B E0                 5406 	movx	a,@dptr
   728C 70 48              5407 	jnz	00105$
                           5408 ;	../../shared/src/tx_train.c:905: req_local_ctrl(CE_NORMAL, 0, tag_TX_TRAIN_P2P_HOLD, 1);		
   728E 90 67 A0           5409 	mov	dptr,#_tx_train_p2p_hold
   7291 E0                 5410 	movx	a,@dptr
   7292 FC                 5411 	mov	r4,a
   7293 E4                 5412 	clr	a
   7294 CC                 5413 	xch	a,r4
   7295 25 E0              5414 	add	a,acc
   7297 CC                 5415 	xch	a,r4
   7298 33                 5416 	rlc	a
   7299 CC                 5417 	xch	a,r4
   729A 25 E0              5418 	add	a,acc
   729C CC                 5419 	xch	a,r4
   729D 33                 5420 	rlc	a
   729E FD                 5421 	mov	r5,a
   729F 74 01              5422 	mov	a,#0x01
   72A1 4C                 5423 	orl	a,r4
   72A2 F5 82              5424 	mov	dpl,a
   72A4 8D 83              5425 	mov	dph,r5
   72A6 C0 03              5426 	push	ar3
   72A8 78 74              5427 	mov	r0,#_Send_ctrl_to_tx
   72AA 79 E5              5428 	mov	r1,#(_Send_ctrl_to_tx >> 8)
   72AC 7A 01              5429 	mov	r2,#(_Send_ctrl_to_tx >> 16)
   72AE 12 00 B3           5430 	lcall	__sdcc_banked_call
   72B1 D0 03              5431 	pop	ar3
                           5432 ;	../../shared/src/tx_train.c:907: if(tx.gn1_is_max==0 || tx_pipe4_en==0) {
   72B3 90 66 A5           5433 	mov	dptr,#(_tx + 0x0007)
   72B6 E0                 5434 	movx	a,@dptr
   72B7 60 03              5435 	jz	00101$
   72B9 20 26 B1           5436 	jb	_tx_pipe4_en,00108$
   72BC                    5437 00101$:
                           5438 ;	../../shared/src/tx_train.c:908: update --; //DBG_Pritnf("+");
   72BC 1B                 5439 	dec	r3
                           5440 ;	../../shared/src/tx_train.c:909: train_gn1_index ++;
   72BD 90 60 30           5441 	mov	dptr,#_train_gn1_index
   72C0 E0                 5442 	movx	a,@dptr
   72C1 24 01              5443 	add	a,#0x01
   72C3 F0                 5444 	movx	@dptr,a
                           5445 ;	../../shared/src/tx_train.c:910: train_g0_index += tag_TX_TRAIN_P2P_HOLD;
   72C4 90 67 A0           5446 	mov	dptr,#_tx_train_p2p_hold
   72C7 E0                 5447 	movx	a,@dptr
   72C8 FC                 5448 	mov	r4,a
   72C9 90 60 32           5449 	mov	dptr,#_train_g0_index
   72CC E0                 5450 	movx	a,@dptr
   72CD FD                 5451 	mov	r5,a
   72CE 90 60 32           5452 	mov	dptr,#_train_g0_index
   72D1 EC                 5453 	mov	a,r4
   72D2 2D                 5454 	add	a,r5
   72D3 F0                 5455 	movx	@dptr,a
   72D4 80 97              5456 	sjmp	00108$
   72D6                    5457 00105$:
                           5458 ;	../../shared/src/tx_train.c:915: dfe_cdr_phase_opt();
                           5459 ;	../../shared/src/tx_train.c:916: break;
   72D6 02 59 ED           5460 	ljmp	_dfe_cdr_phase_opt
   72D9                    5461 00125$:
                           5462 ;	../../shared/src/tx_train.c:920: }else if (update < 0 && tx.gn1_is_min==0){ 
   72D9 EA                 5463 	mov	a,r2
   72DA 20 E7 01           5464 	jb	acc.7,00155$
   72DD 22                 5465 	ret
   72DE                    5466 00155$:
   72DE 90 66 A6           5467 	mov	dptr,#(_tx + 0x0008)
   72E1 E0                 5468 	movx	a,@dptr
   72E2 60 01              5469 	jz	00156$
   72E4 22                 5470 	ret
   72E5                    5471 00156$:
                           5472 ;	../../shared/src/tx_train.c:921: while(cnt-->0) 
   72E5                    5473 00118$:
   72E5 90 22 C1           5474 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0001)
   72E8 E0                 5475 	movx	a,@dptr
   72E9 FB                 5476 	mov	r3,a
   72EA 14                 5477 	dec	a
   72EB FC                 5478 	mov	r4,a
   72EC 90 22 C1           5479 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0001)
   72EF F0                 5480 	movx	@dptr,a
   72F0 EB                 5481 	mov	a,r3
   72F1 60 61              5482 	jz	00128$
                           5483 ;	../../shared/src/tx_train.c:926: if(update <0 && tx.gn1_is_min==0)
   72F3 EA                 5484 	mov	a,r2
   72F4 30 E7 5A           5485 	jnb	acc.7,00115$
   72F7 90 66 A6           5486 	mov	dptr,#(_tx + 0x0008)
   72FA E0                 5487 	movx	a,@dptr
   72FB 70 54              5488 	jnz	00115$
                           5489 ;	../../shared/src/tx_train.c:930: req_local_ctrl(CE_NORMAL, 0, (tag_TX_TRAIN_P2P_HOLD ? 2 : 0), 2);		
   72FD 90 67 A0           5490 	mov	dptr,#_tx_train_p2p_hold
   7300 E0                 5491 	movx	a,@dptr
   7301 FB                 5492 	mov	r3,a
   7302 60 02              5493 	jz	00130$
   7304 74 02              5494 	mov	a,#0x02
   7306                    5495 00130$:
   7306 FB                 5496 	mov	r3,a
   7307 E4                 5497 	clr	a
   7308 CB                 5498 	xch	a,r3
   7309 25 E0              5499 	add	a,acc
   730B CB                 5500 	xch	a,r3
   730C 33                 5501 	rlc	a
   730D CB                 5502 	xch	a,r3
   730E 25 E0              5503 	add	a,acc
   7310 CB                 5504 	xch	a,r3
   7311 33                 5505 	rlc	a
   7312 FC                 5506 	mov	r4,a
   7313 74 02              5507 	mov	a,#0x02
   7315 4B                 5508 	orl	a,r3
   7316 F5 82              5509 	mov	dpl,a
   7318 8C 83              5510 	mov	dph,r4
   731A C0 02              5511 	push	ar2
   731C 78 74              5512 	mov	r0,#_Send_ctrl_to_tx
   731E 79 E5              5513 	mov	r1,#(_Send_ctrl_to_tx >> 8)
   7320 7A 01              5514 	mov	r2,#(_Send_ctrl_to_tx >> 16)
   7322 12 00 B3           5515 	lcall	__sdcc_banked_call
   7325 D0 02              5516 	pop	ar2
                           5517 ;	../../shared/src/tx_train.c:932: if(tx.gn1_is_min==0 || tx_pipe4_en==0) {
   7327 90 66 A6           5518 	mov	dptr,#(_tx + 0x0008)
   732A E0                 5519 	movx	a,@dptr
   732B 60 03              5520 	jz	00111$
   732D 20 26 B5           5521 	jb	_tx_pipe4_en,00118$
   7330                    5522 00111$:
                           5523 ;	../../shared/src/tx_train.c:933: update ++; //DBG_Pritnf("-");
   7330 0A                 5524 	inc	r2
                           5525 ;	../../shared/src/tx_train.c:934: train_gn1_index --;
   7331 90 60 30           5526 	mov	dptr,#_train_gn1_index
   7334 E0                 5527 	movx	a,@dptr
   7335 14                 5528 	dec	a
   7336 90 60 30           5529 	mov	dptr,#_train_gn1_index
   7339 F0                 5530 	movx	@dptr,a
                           5531 ;	../../shared/src/tx_train.c:935: train_g0_index -= tag_TX_TRAIN_P2P_HOLD ? 1 : 0;
   733A 90 67 A0           5532 	mov	dptr,#_tx_train_p2p_hold
   733D E0                 5533 	movx	a,@dptr
   733E FB                 5534 	mov	r3,a
   733F 60 02              5535 	jz	00132$
   7341 74 01              5536 	mov	a,#0x01
   7343                    5537 00132$:
   7343 FB                 5538 	mov	r3,a
   7344 90 60 32           5539 	mov	dptr,#_train_g0_index
   7347 E0                 5540 	movx	a,@dptr
   7348 FC                 5541 	mov	r4,a
   7349 90 60 32           5542 	mov	dptr,#_train_g0_index
   734C C3                 5543 	clr	c
   734D 9B                 5544 	subb	a,r3
   734E F0                 5545 	movx	@dptr,a
   734F 80 94              5546 	sjmp	00118$
   7351                    5547 00115$:
                           5548 ;	../../shared/src/tx_train.c:941: dfe_cdr_phase_opt();
                           5549 ;	../../shared/src/tx_train.c:942: break;
   7351 02 59 ED           5550 	ljmp	_dfe_cdr_phase_opt
   7354                    5551 00128$:
   7354 22                 5552 	ret
                           5553 ;------------------------------------------------------------
                           5554 ;Allocation info for local variables in function 'update_g1'
                           5555 ;------------------------------------------------------------
                           5556 ;update                    Allocated to registers r2 
                           5557 ;------------------------------------------------------------
                           5558 ;	../../shared/src/tx_train.c:949: void update_g1(int8_t update)
                           5559 ;	-----------------------------------------
                           5560 ;	 function update_g1
                           5561 ;	-----------------------------------------
   7355                    5562 _update_g1:
   7355 AA 82              5563 	mov	r2,dpl
                           5564 ;	../../shared/src/tx_train.c:952: cnt = 16;
   7357 90 22 C1           5565 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0001)
   735A 74 10              5566 	mov	a,#0x10
   735C F0                 5567 	movx	@dptr,a
                           5568 ;	../../shared/src/tx_train.c:957: if (update > 0 && tx.g1_is_max==0)
   735D C3                 5569 	clr	c
   735E 74 80              5570 	mov	a,#(0x00 ^ 0x80)
   7360 8A F0              5571 	mov	b,r2
   7362 63 F0 80           5572 	xrl	b,#0x80
   7365 95 F0              5573 	subb	a,b
   7367 50 74              5574 	jnc	00125$
   7369 90 66 A3           5575 	mov	dptr,#(_tx + 0x0005)
   736C E0                 5576 	movx	a,@dptr
   736D 70 6E              5577 	jnz	00125$
                           5578 ;	../../shared/src/tx_train.c:959: while(cnt-->0){
   736F 8A 03              5579 	mov	ar3,r2
   7371                    5580 00108$:
   7371 90 22 C1           5581 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0001)
   7374 E0                 5582 	movx	a,@dptr
   7375 FC                 5583 	mov	r4,a
   7376 14                 5584 	dec	a
   7377 FD                 5585 	mov	r5,a
   7378 90 22 C1           5586 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0001)
   737B F0                 5587 	movx	@dptr,a
   737C EC                 5588 	mov	a,r4
   737D 70 01              5589 	jnz	00150$
   737F 22                 5590 	ret
   7380                    5591 00150$:
                           5592 ;	../../shared/src/tx_train.c:963: if(update >0 && tx.g1_is_max==0){
   7380 C3                 5593 	clr	c
   7381 74 80              5594 	mov	a,#(0x00 ^ 0x80)
   7383 8B F0              5595 	mov	b,r3
   7385 63 F0 80           5596 	xrl	b,#0x80
   7388 95 F0              5597 	subb	a,b
   738A 50 4E              5598 	jnc	00105$
   738C 90 66 A3           5599 	mov	dptr,#(_tx + 0x0005)
   738F E0                 5600 	movx	a,@dptr
   7390 70 48              5601 	jnz	00105$
                           5602 ;	../../shared/src/tx_train.c:966: req_local_ctrl(CE_NORMAL, 1, tag_TX_TRAIN_P2P_HOLD, 0);		
   7392 90 67 A0           5603 	mov	dptr,#_tx_train_p2p_hold
   7395 E0                 5604 	movx	a,@dptr
   7396 FC                 5605 	mov	r4,a
   7397 E4                 5606 	clr	a
   7398 CC                 5607 	xch	a,r4
   7399 25 E0              5608 	add	a,acc
   739B CC                 5609 	xch	a,r4
   739C 33                 5610 	rlc	a
   739D CC                 5611 	xch	a,r4
   739E 25 E0              5612 	add	a,acc
   73A0 CC                 5613 	xch	a,r4
   73A1 33                 5614 	rlc	a
   73A2 FD                 5615 	mov	r5,a
   73A3 74 10              5616 	mov	a,#0x10
   73A5 4C                 5617 	orl	a,r4
   73A6 F5 82              5618 	mov	dpl,a
   73A8 8D 83              5619 	mov	dph,r5
   73AA C0 03              5620 	push	ar3
   73AC 78 74              5621 	mov	r0,#_Send_ctrl_to_tx
   73AE 79 E5              5622 	mov	r1,#(_Send_ctrl_to_tx >> 8)
   73B0 7A 01              5623 	mov	r2,#(_Send_ctrl_to_tx >> 16)
   73B2 12 00 B3           5624 	lcall	__sdcc_banked_call
   73B5 D0 03              5625 	pop	ar3
                           5626 ;	../../shared/src/tx_train.c:968: if(tx.g1_is_max==0 || tx_pipe4_en==0) {
   73B7 90 66 A3           5627 	mov	dptr,#(_tx + 0x0005)
   73BA E0                 5628 	movx	a,@dptr
   73BB 60 03              5629 	jz	00101$
   73BD 20 26 B1           5630 	jb	_tx_pipe4_en,00108$
   73C0                    5631 00101$:
                           5632 ;	../../shared/src/tx_train.c:969: update --; //DBG_Pritnf("+");
   73C0 1B                 5633 	dec	r3
                           5634 ;	../../shared/src/tx_train.c:970: train_g1_index ++;
   73C1 90 60 31           5635 	mov	dptr,#_train_g1_index
   73C4 E0                 5636 	movx	a,@dptr
   73C5 24 01              5637 	add	a,#0x01
   73C7 F0                 5638 	movx	@dptr,a
                           5639 ;	../../shared/src/tx_train.c:971: train_g0_index += tag_TX_TRAIN_P2P_HOLD;
   73C8 90 67 A0           5640 	mov	dptr,#_tx_train_p2p_hold
   73CB E0                 5641 	movx	a,@dptr
   73CC FC                 5642 	mov	r4,a
   73CD 90 60 32           5643 	mov	dptr,#_train_g0_index
   73D0 E0                 5644 	movx	a,@dptr
   73D1 FD                 5645 	mov	r5,a
   73D2 90 60 32           5646 	mov	dptr,#_train_g0_index
   73D5 EC                 5647 	mov	a,r4
   73D6 2D                 5648 	add	a,r5
   73D7 F0                 5649 	movx	@dptr,a
   73D8 80 97              5650 	sjmp	00108$
   73DA                    5651 00105$:
                           5652 ;	../../shared/src/tx_train.c:976: dfe_cdr_phase_opt();
                           5653 ;	../../shared/src/tx_train.c:977: break;
   73DA 02 59 ED           5654 	ljmp	_dfe_cdr_phase_opt
   73DD                    5655 00125$:
                           5656 ;	../../shared/src/tx_train.c:980: }else if (update < 0 && tx.g1_is_min==0){ 
   73DD EA                 5657 	mov	a,r2
   73DE 20 E7 01           5658 	jb	acc.7,00155$
   73E1 22                 5659 	ret
   73E2                    5660 00155$:
   73E2 90 66 A4           5661 	mov	dptr,#(_tx + 0x0006)
   73E5 E0                 5662 	movx	a,@dptr
   73E6 60 01              5663 	jz	00156$
   73E8 22                 5664 	ret
   73E9                    5665 00156$:
                           5666 ;	../../shared/src/tx_train.c:981: while(cnt-->0) {
   73E9                    5667 00118$:
   73E9 90 22 C1           5668 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0001)
   73EC E0                 5669 	movx	a,@dptr
   73ED FB                 5670 	mov	r3,a
   73EE 14                 5671 	dec	a
   73EF FC                 5672 	mov	r4,a
   73F0 90 22 C1           5673 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0001)
   73F3 F0                 5674 	movx	@dptr,a
   73F4 EB                 5675 	mov	a,r3
   73F5 60 61              5676 	jz	00128$
                           5677 ;	../../shared/src/tx_train.c:985: if(update < 0 && tx.g1_is_min==0){ 
   73F7 EA                 5678 	mov	a,r2
   73F8 30 E7 5A           5679 	jnb	acc.7,00115$
   73FB 90 66 A4           5680 	mov	dptr,#(_tx + 0x0006)
   73FE E0                 5681 	movx	a,@dptr
   73FF 70 54              5682 	jnz	00115$
                           5683 ;	../../shared/src/tx_train.c:989: req_local_ctrl(CE_NORMAL, 2, (tag_TX_TRAIN_P2P_HOLD ? 2 : 0), 0);		
   7401 90 67 A0           5684 	mov	dptr,#_tx_train_p2p_hold
   7404 E0                 5685 	movx	a,@dptr
   7405 FB                 5686 	mov	r3,a
   7406 60 02              5687 	jz	00130$
   7408 74 02              5688 	mov	a,#0x02
   740A                    5689 00130$:
   740A FB                 5690 	mov	r3,a
   740B E4                 5691 	clr	a
   740C CB                 5692 	xch	a,r3
   740D 25 E0              5693 	add	a,acc
   740F CB                 5694 	xch	a,r3
   7410 33                 5695 	rlc	a
   7411 CB                 5696 	xch	a,r3
   7412 25 E0              5697 	add	a,acc
   7414 CB                 5698 	xch	a,r3
   7415 33                 5699 	rlc	a
   7416 FC                 5700 	mov	r4,a
   7417 74 20              5701 	mov	a,#0x20
   7419 4B                 5702 	orl	a,r3
   741A F5 82              5703 	mov	dpl,a
   741C 8C 83              5704 	mov	dph,r4
   741E C0 02              5705 	push	ar2
   7420 78 74              5706 	mov	r0,#_Send_ctrl_to_tx
   7422 79 E5              5707 	mov	r1,#(_Send_ctrl_to_tx >> 8)
   7424 7A 01              5708 	mov	r2,#(_Send_ctrl_to_tx >> 16)
   7426 12 00 B3           5709 	lcall	__sdcc_banked_call
   7429 D0 02              5710 	pop	ar2
                           5711 ;	../../shared/src/tx_train.c:991: if(tx.g1_is_min==0 || tx_pipe4_en==0) {
   742B 90 66 A4           5712 	mov	dptr,#(_tx + 0x0006)
   742E E0                 5713 	movx	a,@dptr
   742F 60 03              5714 	jz	00111$
   7431 20 26 B5           5715 	jb	_tx_pipe4_en,00118$
   7434                    5716 00111$:
                           5717 ;	../../shared/src/tx_train.c:992: update ++; //DBG_Pritnf("-");
   7434 0A                 5718 	inc	r2
                           5719 ;	../../shared/src/tx_train.c:993: train_g1_index --;
   7435 90 60 31           5720 	mov	dptr,#_train_g1_index
   7438 E0                 5721 	movx	a,@dptr
   7439 14                 5722 	dec	a
   743A 90 60 31           5723 	mov	dptr,#_train_g1_index
   743D F0                 5724 	movx	@dptr,a
                           5725 ;	../../shared/src/tx_train.c:994: train_g0_index -= tag_TX_TRAIN_P2P_HOLD ? 1 : 0;
   743E 90 67 A0           5726 	mov	dptr,#_tx_train_p2p_hold
   7441 E0                 5727 	movx	a,@dptr
   7442 FB                 5728 	mov	r3,a
   7443 60 02              5729 	jz	00132$
   7445 74 01              5730 	mov	a,#0x01
   7447                    5731 00132$:
   7447 FB                 5732 	mov	r3,a
   7448 90 60 32           5733 	mov	dptr,#_train_g0_index
   744B E0                 5734 	movx	a,@dptr
   744C FC                 5735 	mov	r4,a
   744D 90 60 32           5736 	mov	dptr,#_train_g0_index
   7450 C3                 5737 	clr	c
   7451 9B                 5738 	subb	a,r3
   7452 F0                 5739 	movx	@dptr,a
   7453 80 94              5740 	sjmp	00118$
   7455                    5741 00115$:
                           5742 ;	../../shared/src/tx_train.c:999: dfe_cdr_phase_opt();
                           5743 ;	../../shared/src/tx_train.c:1000: break;
   7455 02 59 ED           5744 	ljmp	_dfe_cdr_phase_opt
   7458                    5745 00128$:
   7458 22                 5746 	ret
                           5747 	.area CSEG    (CODE)
                           5748 	.area CONST   (CODE)
                           5749 	.area CABS    (ABS,CODE)
