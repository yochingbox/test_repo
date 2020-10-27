                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:50 2018
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
   66E1                    2060 _tx_train:
                    0002   2061 	ar2 = 0x02
                    0003   2062 	ar3 = 0x03
                    0004   2063 	ar4 = 0x04
                    0005   2064 	ar5 = 0x05
                    0006   2065 	ar6 = 0x06
                    0007   2066 	ar7 = 0x07
                    0000   2067 	ar0 = 0x00
                    0001   2068 	ar1 = 0x01
                           2069 ;	../../shared/src/tx_train.c:28: PHY_STATUS = ST_TXTRAIN;
   66E1 90 22 30           2070 	mov	dptr,#_MCU_STATUS0_LANE
   66E4 74 29              2071 	mov	a,#0x29
   66E6 F0                 2072 	movx	@dptr,a
                           2073 ;	../../shared/src/tx_train.c:30: tx_train_initial();
   66E7 12 67 02           2074 	lcall	_tx_train_initial
                           2075 ;	../../shared/src/tx_train.c:32: while (1)
   66EA                    2076 00107$:
                           2077 ;	../../shared/src/tx_train.c:34: if( tx_status_pcie_mode ) 
   66EA 20 27 FD           2078 	jb	_tx_status_pcie_mode,00107$
                           2079 ;	../../shared/src/tx_train.c:76: tx_train_control();
   66ED 12 7C 25           2080 	lcall	_tx_train_control
                           2081 ;	../../shared/src/tx_train.c:77: if (ctrl_tx_train_done)	break;		
   66F0 20 22 05           2082 	jb	_ctrl_tx_train_done,00108$
                           2083 ;	../../shared/src/tx_train.c:78: tx_ffe_train();	
   66F3 12 7C 60           2084 	lcall	_tx_ffe_train
   66F6 80 F2              2085 	sjmp	00107$
   66F8                    2086 00108$:
                           2087 ;	../../shared/src/tx_train.c:83: tx_train_end();
   66F8 12 67 0E           2088 	lcall	_tx_train_end
                           2089 ;	../../shared/src/tx_train.c:84: reg_MCU_DEBUG0_LANE_7_0 = 0x59;
   66FB 90 22 B4           2090 	mov	dptr,#_MCU_DEBUG0_LANE
   66FE 74 59              2091 	mov	a,#0x59
   6700 F0                 2092 	movx	@dptr,a
   6701 22                 2093 	ret
                           2094 ;------------------------------------------------------------
                           2095 ;Allocation info for local variables in function 'tx_train_initial'
                           2096 ;------------------------------------------------------------
                           2097 ;------------------------------------------------------------
                           2098 ;	../../shared/src/tx_train.c:95: void tx_train_initial(void)
                           2099 ;	-----------------------------------------
                           2100 ;	 function tx_train_initial
                           2101 ;	-----------------------------------------
   6702                    2102 _tx_train_initial:
                           2103 ;	../../shared/src/tx_train.c:100: ctrl_trx_ffe_updated = 1;
   6702 D2 25              2104 	setb	_ctrl_trx_ffe_updated
                           2105 ;	../../shared/src/tx_train.c:101: ctrl_cdr_phase_on = 0;
   6704 C2 1E              2106 	clr	_ctrl_cdr_phase_on
                           2107 ;	../../shared/src/tx_train.c:102: tx.num_tx_loop = 0;
   6706 90 66 A0           2108 	mov	dptr,#(_tx + 0x0002)
   6709 E4                 2109 	clr	a
   670A F0                 2110 	movx	@dptr,a
                           2111 ;	../../shared/src/tx_train.c:104: opt2train();// load the optimal eo for train
   670B 02 60 02           2112 	ljmp	_opt2train
                           2113 ;------------------------------------------------------------
                           2114 ;Allocation info for local variables in function 'tx_train_end'
                           2115 ;------------------------------------------------------------
                           2116 ;------------------------------------------------------------
                           2117 ;	../../shared/src/tx_train.c:116: void tx_train_end(void)
                           2118 ;	-----------------------------------------
                           2119 ;	 function tx_train_end
                           2120 ;	-----------------------------------------
   670E                    2121 _tx_train_end:
                           2122 ;	../../shared/src/tx_train.c:121: update_opt_trx_ffe();
   670E 12 5D 77           2123 	lcall	_update_opt_trx_ffe
                           2124 ;	../../shared/src/tx_train.c:123: opt2train();
   6711 02 60 02           2125 	ljmp	_opt2train
                           2126 ;------------------------------------------------------------
                           2127 ;Allocation info for local variables in function 'tx_g0_train'
                           2128 ;------------------------------------------------------------
                           2129 ;idx_ini                   Allocated to registers r2 
                           2130 ;cnt                       Allocated to registers r3 
                           2131 ;------------------------------------------------------------
                           2132 ;	../../shared/src/tx_train.c:142: void tx_g0_train(void)
                           2133 ;	-----------------------------------------
                           2134 ;	 function tx_g0_train
                           2135 ;	-----------------------------------------
   6714                    2136 _tx_g0_train:
                           2137 ;	../../shared/src/tx_train.c:149: tx.num_count = 0;
   6714 90 66 A8           2138 	mov	dptr,#(_tx + 0x000a)
   6717 E4                 2139 	clr	a
   6718 F0                 2140 	movx	@dptr,a
                           2141 ;	../../shared/src/tx_train.c:150: idx_ini = train_g0_index;
   6719 90 60 32           2142 	mov	dptr,#_train_g0_index
   671C E0                 2143 	movx	a,@dptr
   671D FA                 2144 	mov	r2,a
                           2145 ;	../../shared/src/tx_train.c:151: tx.direction = 0;
   671E 90 66 A9           2146 	mov	dptr,#(_tx + 0x000b)
                           2147 ;	../../shared/src/tx_train.c:152: tx.become_worse = 0;
   6721 E4                 2148 	clr	a
   6722 F0                 2149 	movx	@dptr,a
   6723 90 66 A7           2150 	mov	dptr,#(_tx + 0x0009)
   6726 F0                 2151 	movx	@dptr,a
                           2152 ;	../../shared/src/tx_train.c:153: while (cnt-->0)
   6727 7B 14              2153 	mov	r3,#0x14
   6729                    2154 00114$:
   6729 8B 04              2155 	mov	ar4,r3
   672B 1B                 2156 	dec	r3
   672C C3                 2157 	clr	c
   672D 74 80              2158 	mov	a,#(0x00 ^ 0x80)
   672F 8C F0              2159 	mov	b,r4
   6731 63 F0 80           2160 	xrl	b,#0x80
   6734 95 F0              2161 	subb	a,b
   6736 40 03              2162 	jc	00131$
   6738 02 67 FE           2163 	ljmp	00116$
   673B                    2164 00131$:
                           2165 ;	../../shared/src/tx_train.c:155: if ((tx.num_count >= tag_TX_G0_STEP_NUM || tx.g0_is_min || tx.become_worse) &&
   673B 90 66 A8           2166 	mov	dptr,#(_tx + 0x000a)
   673E E0                 2167 	movx	a,@dptr
   673F FC                 2168 	mov	r4,a
   6740 90 60 A6           2169 	mov	dptr,#(_CDS_CTRL_REG1 + 0x0002)
   6743 E0                 2170 	movx	a,@dptr
   6744 54 0F              2171 	anl	a,#0x0f
   6746 FD                 2172 	mov	r5,a
   6747 C3                 2173 	clr	c
   6748 EC                 2174 	mov	a,r4
   6749 64 80              2175 	xrl	a,#0x80
   674B 8D F0              2176 	mov	b,r5
   674D 63 F0 80           2177 	xrl	b,#0x80
   6750 95 F0              2178 	subb	a,b
   6752 50 0C              2179 	jnc	00107$
   6754 90 66 A2           2180 	mov	dptr,#(_tx + 0x0004)
   6757 E0                 2181 	movx	a,@dptr
   6758 70 06              2182 	jnz	00107$
   675A 90 66 A7           2183 	mov	dptr,#(_tx + 0x0009)
   675D E0                 2184 	movx	a,@dptr
   675E 60 32              2185 	jz	00104$
   6760                    2186 00107$:
                           2187 ;	../../shared/src/tx_train.c:156: tx.direction == 0) // switch direction
   6760 90 66 A9           2188 	mov	dptr,#(_tx + 0x000b)
   6763 E0                 2189 	movx	a,@dptr
   6764 70 2C              2190 	jnz	00104$
                           2191 ;	../../shared/src/tx_train.c:161: tx.direction = 1;
   6766 90 66 A9           2192 	mov	dptr,#(_tx + 0x000b)
   6769 74 01              2193 	mov	a,#0x01
   676B F0                 2194 	movx	@dptr,a
                           2195 ;	../../shared/src/tx_train.c:162: tx.num_count = 0;
   676C 90 66 A8           2196 	mov	dptr,#(_tx + 0x000a)
                           2197 ;	../../shared/src/tx_train.c:163: tx.become_worse = 0;
   676F E4                 2198 	clr	a
   6770 F0                 2199 	movx	@dptr,a
   6771 90 66 A7           2200 	mov	dptr,#(_tx + 0x0009)
   6774 F0                 2201 	movx	@dptr,a
                           2202 ;	../../shared/src/tx_train.c:165: if (tag_TX_G0_STEP_NUM > 0)
   6775 90 60 A6           2203 	mov	dptr,#(_CDS_CTRL_REG1 + 0x0002)
   6778 E0                 2204 	movx	a,@dptr
   6779 54 0F              2205 	anl	a,#0x0f
   677B 60 15              2206 	jz	00104$
                           2207 ;	../../shared/src/tx_train.c:172: update_g0(idx_ini - train_g0_index);
   677D 90 60 32           2208 	mov	dptr,#_train_g0_index
   6780 E0                 2209 	movx	a,@dptr
   6781 FC                 2210 	mov	r4,a
   6782 EA                 2211 	mov	a,r2
   6783 C3                 2212 	clr	c
   6784 9C                 2213 	subb	a,r4
   6785 F5 82              2214 	mov	dpl,a
   6787 C0 02              2215 	push	ar2
   6789 C0 03              2216 	push	ar3
   678B 12 77 D7           2217 	lcall	_update_g0
   678E D0 03              2218 	pop	ar3
   6790 D0 02              2219 	pop	ar2
   6792                    2220 00104$:
                           2221 ;	../../shared/src/tx_train.c:176: if (((tx.num_count >= tag_TX_G0_STEP_NUM) || tx.g0_is_max || tx.become_worse) &&
   6792 90 66 A8           2222 	mov	dptr,#(_tx + 0x000a)
   6795 E0                 2223 	movx	a,@dptr
   6796 FC                 2224 	mov	r4,a
   6797 90 60 A6           2225 	mov	dptr,#(_CDS_CTRL_REG1 + 0x0002)
   679A E0                 2226 	movx	a,@dptr
   679B 54 0F              2227 	anl	a,#0x0f
   679D FD                 2228 	mov	r5,a
   679E C3                 2229 	clr	c
   679F EC                 2230 	mov	a,r4
   67A0 64 80              2231 	xrl	a,#0x80
   67A2 8D F0              2232 	mov	b,r5
   67A4 63 F0 80           2233 	xrl	b,#0x80
   67A7 95 F0              2234 	subb	a,b
   67A9 50 0C              2235 	jnc	00113$
   67AB 90 66 A1           2236 	mov	dptr,#(_tx + 0x0003)
   67AE E0                 2237 	movx	a,@dptr
   67AF 70 06              2238 	jnz	00113$
   67B1 90 66 A7           2239 	mov	dptr,#(_tx + 0x0009)
   67B4 E0                 2240 	movx	a,@dptr
   67B5 60 0A              2241 	jz	00109$
   67B7                    2242 00113$:
                           2243 ;	../../shared/src/tx_train.c:177: tx.direction ==1)
   67B7 90 66 A9           2244 	mov	dptr,#(_tx + 0x000b)
   67BA E0                 2245 	movx	a,@dptr
   67BB FC                 2246 	mov	r4,a
   67BC BC 01 02           2247 	cjne	r4,#0x01,00140$
   67BF 80 3D              2248 	sjmp	00116$
   67C1                    2249 00140$:
                           2250 ;	../../shared/src/tx_train.c:182: break;
   67C1                    2251 00109$:
                           2252 ;	../../shared/src/tx_train.c:187: tx.num_count ++; //update number of rounds
   67C1 90 66 A8           2253 	mov	dptr,#(_tx + 0x000a)
   67C4 E0                 2254 	movx	a,@dptr
   67C5 FC                 2255 	mov	r4,a
   67C6 0C                 2256 	inc	r4
   67C7 90 66 A8           2257 	mov	dptr,#(_tx + 0x000a)
   67CA EC                 2258 	mov	a,r4
   67CB F0                 2259 	movx	@dptr,a
                           2260 ;	../../shared/src/tx_train.c:191: update_g0(tx.direction ? tag_TX_G0_STEP_SIZE : -tag_TX_G0_STEP_SIZE);
   67CC 90 66 A9           2261 	mov	dptr,#(_tx + 0x000b)
   67CF E0                 2262 	movx	a,@dptr
   67D0 60 0B              2263 	jz	00119$
   67D2 90 60 A6           2264 	mov	dptr,#(_CDS_CTRL_REG1 + 0x0002)
   67D5 E0                 2265 	movx	a,@dptr
   67D6 23                 2266 	rl	a
   67D7 23                 2267 	rl	a
   67D8 54 03              2268 	anl	a,#0x03
   67DA FC                 2269 	mov	r4,a
   67DB 80 0E              2270 	sjmp	00120$
   67DD                    2271 00119$:
   67DD 90 60 A6           2272 	mov	dptr,#(_CDS_CTRL_REG1 + 0x0002)
   67E0 E0                 2273 	movx	a,@dptr
   67E1 23                 2274 	rl	a
   67E2 23                 2275 	rl	a
   67E3 54 03              2276 	anl	a,#0x03
   67E5 FD                 2277 	mov	r5,a
   67E6 C3                 2278 	clr	c
   67E7 E4                 2279 	clr	a
   67E8 9D                 2280 	subb	a,r5
   67E9 FD                 2281 	mov	r5,a
   67EA FC                 2282 	mov	r4,a
   67EB                    2283 00120$:
   67EB 8C 82              2284 	mov	dpl,r4
   67ED C0 02              2285 	push	ar2
   67EF C0 03              2286 	push	ar3
   67F1 12 77 D7           2287 	lcall	_update_g0
                           2288 ;	../../shared/src/tx_train.c:192: compare_g0();            
   67F4 12 71 DD           2289 	lcall	_compare_g0
   67F7 D0 03              2290 	pop	ar3
   67F9 D0 02              2291 	pop	ar2
   67FB 02 67 29           2292 	ljmp	00114$
   67FE                    2293 00116$:
                           2294 ;	../../shared/src/tx_train.c:201: update_g0(opt_g0_index - train_g0_index);
   67FE 90 60 32           2295 	mov	dptr,#_train_g0_index
   6801 E0                 2296 	movx	a,@dptr
   6802 FA                 2297 	mov	r2,a
   6803 90 67 B3           2298 	mov	dptr,#_opt_g0_index
   6806 E0                 2299 	movx	a,@dptr
   6807 C3                 2300 	clr	c
   6808 9A                 2301 	subb	a,r2
   6809 F5 82              2302 	mov	dpl,a
   680B 12 77 D7           2303 	lcall	_update_g0
                           2304 ;	../../shared/src/tx_train.c:203: update_opt_trx_ffe();
   680E 02 5D 77           2305 	ljmp	_update_opt_trx_ffe
                           2306 ;------------------------------------------------------------
                           2307 ;Allocation info for local variables in function 'tx_gn1_train'
                           2308 ;------------------------------------------------------------
                           2309 ;------------------------------------------------------------
                           2310 ;	../../shared/src/tx_train.c:206: void tx_gn1_train(void)
                           2311 ;	-----------------------------------------
                           2312 ;	 function tx_gn1_train
                           2313 ;	-----------------------------------------
   6811                    2314 _tx_gn1_train:
                           2315 ;	../../shared/src/tx_train.c:214: if (tag_TX_GN1_MAXF0T_EN) // max f0t mode
   6811 90 60 A4           2316 	mov	dptr,#_CDS_CTRL_REG1
   6814 E0                 2317 	movx	a,@dptr
   6815 30 E6 3C           2318 	jnb	acc.6,00102$
                           2319 ;	../../shared/src/tx_train.c:219: &tx.gn1_is_min, &tx.gn1_is_max, //IS_MAX IS_MIN
                           2320 ;	../../shared/src/tx_train.c:218: &train_gn1_index,//ptr, //IDX
                           2321 ;	../../shared/src/tx_train.c:216: tag_TX_TRAIN_P2P_HOLD, //HOLD
   6818 90 67 A0           2322 	mov	dptr,#_tx_train_p2p_hold
   681B E0                 2323 	movx	a,@dptr
   681C FA                 2324 	mov	r2,a
   681D 74 87              2325 	mov	a,#_update_gn1
   681F C0 E0              2326 	push	acc
   6821 74 78              2327 	mov	a,#(_update_gn1 >> 8)
   6823 C0 E0              2328 	push	acc
   6825 74 A5              2329 	mov	a,#(_tx + 0x0007)
   6827 C0 E0              2330 	push	acc
   6829 74 66              2331 	mov	a,#((_tx + 0x0007) >> 8)
   682B C0 E0              2332 	push	acc
   682D E4                 2333 	clr	a
   682E C0 E0              2334 	push	acc
   6830 74 A6              2335 	mov	a,#(_tx + 0x0008)
   6832 C0 E0              2336 	push	acc
   6834 74 66              2337 	mov	a,#((_tx + 0x0008) >> 8)
   6836 C0 E0              2338 	push	acc
   6838 E4                 2339 	clr	a
   6839 C0 E0              2340 	push	acc
   683B 74 30              2341 	mov	a,#_train_gn1_index
   683D C0 E0              2342 	push	acc
   683F 74 60              2343 	mov	a,#(_train_gn1_index >> 8)
   6841 C0 E0              2344 	push	acc
   6843 E4                 2345 	clr	a
   6844 C0 E0              2346 	push	acc
   6846 E4                 2347 	clr	a
   6847 C0 E0              2348 	push	acc
   6849 8A 82              2349 	mov	dpl,r2
   684B 12 69 21           2350 	lcall	_g1n1_maxf0t
   684E E5 81              2351 	mov	a,sp
   6850 24 F4              2352 	add	a,#0xf4
   6852 F5 81              2353 	mov	sp,a
   6854                    2354 00102$:
                           2355 ;	../../shared/src/tx_train.c:222: if (tag_TX_GN1_MIDPOINT_EN){
   6854 90 60 38           2356 	mov	dptr,#_DFE_CONTROL_1
   6857 E0                 2357 	movx	a,@dptr
   6858 30 E5 3C           2358 	jnb	acc.5,00105$
                           2359 ;	../../shared/src/tx_train.c:227: &tx.gn1_is_min, &tx.gn1_is_max,//IS_MAX IS_MIN
                           2360 ;	../../shared/src/tx_train.c:226: &train_gn1_index, //ptr, //IDX
                           2361 ;	../../shared/src/tx_train.c:224: tag_TX_TRAIN_P2P_HOLD,
   685B 90 67 A0           2362 	mov	dptr,#_tx_train_p2p_hold
   685E E0                 2363 	movx	a,@dptr
   685F FA                 2364 	mov	r2,a
   6860 74 87              2365 	mov	a,#_update_gn1
   6862 C0 E0              2366 	push	acc
   6864 74 78              2367 	mov	a,#(_update_gn1 >> 8)
   6866 C0 E0              2368 	push	acc
   6868 74 A5              2369 	mov	a,#(_tx + 0x0007)
   686A C0 E0              2370 	push	acc
   686C 74 66              2371 	mov	a,#((_tx + 0x0007) >> 8)
   686E C0 E0              2372 	push	acc
   6870 E4                 2373 	clr	a
   6871 C0 E0              2374 	push	acc
   6873 74 A6              2375 	mov	a,#(_tx + 0x0008)
   6875 C0 E0              2376 	push	acc
   6877 74 66              2377 	mov	a,#((_tx + 0x0008) >> 8)
   6879 C0 E0              2378 	push	acc
   687B E4                 2379 	clr	a
   687C C0 E0              2380 	push	acc
   687E 74 30              2381 	mov	a,#_train_gn1_index
   6880 C0 E0              2382 	push	acc
   6882 74 60              2383 	mov	a,#(_train_gn1_index >> 8)
   6884 C0 E0              2384 	push	acc
   6886 E4                 2385 	clr	a
   6887 C0 E0              2386 	push	acc
   6889 E4                 2387 	clr	a
   688A C0 E0              2388 	push	acc
   688C 8A 82              2389 	mov	dpl,r2
   688E 12 6C 46           2390 	lcall	_g1n1_midpoint
   6891 E5 81              2391 	mov	a,sp
   6893 24 F4              2392 	add	a,#0xf4
   6895 F5 81              2393 	mov	sp,a
   6897                    2394 00105$:
   6897 22                 2395 	ret
                           2396 ;------------------------------------------------------------
                           2397 ;Allocation info for local variables in function 'tx_g1_train'
                           2398 ;------------------------------------------------------------
                           2399 ;------------------------------------------------------------
                           2400 ;	../../shared/src/tx_train.c:234: void tx_g1_train(void)
                           2401 ;	-----------------------------------------
                           2402 ;	 function tx_g1_train
                           2403 ;	-----------------------------------------
   6898                    2404 _tx_g1_train:
                           2405 ;	../../shared/src/tx_train.c:242: if (tag_TX_G1_MAXF0T_EN) // max f0t mode
   6898 90 60 A4           2406 	mov	dptr,#_CDS_CTRL_REG1
   689B E0                 2407 	movx	a,@dptr
   689C 30 E7 3D           2408 	jnb	acc.7,00102$
                           2409 ;	../../shared/src/tx_train.c:247: &tx.g1_is_min, &tx.g1_is_max, //IS_MAX IS_MIN
                           2410 ;	../../shared/src/tx_train.c:246: &train_g1_index, //ptr, //IDX
                           2411 ;	../../shared/src/tx_train.c:244: tag_TX_TRAIN_P2P_HOLD, //HOLD
   689F 90 67 A0           2412 	mov	dptr,#_tx_train_p2p_hold
   68A2 E0                 2413 	movx	a,@dptr
   68A3 FA                 2414 	mov	r2,a
   68A4 74 8B              2415 	mov	a,#_update_g1
   68A6 C0 E0              2416 	push	acc
   68A8 74 79              2417 	mov	a,#(_update_g1 >> 8)
   68AA C0 E0              2418 	push	acc
   68AC 74 A3              2419 	mov	a,#(_tx + 0x0005)
   68AE C0 E0              2420 	push	acc
   68B0 74 66              2421 	mov	a,#((_tx + 0x0005) >> 8)
   68B2 C0 E0              2422 	push	acc
   68B4 E4                 2423 	clr	a
   68B5 C0 E0              2424 	push	acc
   68B7 74 A4              2425 	mov	a,#(_tx + 0x0006)
   68B9 C0 E0              2426 	push	acc
   68BB 74 66              2427 	mov	a,#((_tx + 0x0006) >> 8)
   68BD C0 E0              2428 	push	acc
   68BF E4                 2429 	clr	a
   68C0 C0 E0              2430 	push	acc
   68C2 74 31              2431 	mov	a,#_train_g1_index
   68C4 C0 E0              2432 	push	acc
   68C6 74 60              2433 	mov	a,#(_train_g1_index >> 8)
   68C8 C0 E0              2434 	push	acc
   68CA E4                 2435 	clr	a
   68CB C0 E0              2436 	push	acc
   68CD 74 01              2437 	mov	a,#0x01
   68CF C0 E0              2438 	push	acc
   68D1 8A 82              2439 	mov	dpl,r2
   68D3 12 69 21           2440 	lcall	_g1n1_maxf0t
   68D6 E5 81              2441 	mov	a,sp
   68D8 24 F4              2442 	add	a,#0xf4
   68DA F5 81              2443 	mov	sp,a
   68DC                    2444 00102$:
                           2445 ;	../../shared/src/tx_train.c:251: if (tag_TX_G1_MIDPOINT_EN){ // midpoint mode
   68DC 90 60 33           2446 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   68DF E0                 2447 	movx	a,@dptr
   68E0 30 E1 3D           2448 	jnb	acc.1,00105$
                           2449 ;	../../shared/src/tx_train.c:256: &tx.g1_is_min, &tx.g1_is_max,//IS_MIN, IS_MAX
                           2450 ;	../../shared/src/tx_train.c:255: &train_g1_index, //ptr, //IDX
                           2451 ;	../../shared/src/tx_train.c:253: tag_TX_TRAIN_P2P_HOLD,  //HOLD
   68E3 90 67 A0           2452 	mov	dptr,#_tx_train_p2p_hold
   68E6 E0                 2453 	movx	a,@dptr
   68E7 FA                 2454 	mov	r2,a
   68E8 74 8B              2455 	mov	a,#_update_g1
   68EA C0 E0              2456 	push	acc
   68EC 74 79              2457 	mov	a,#(_update_g1 >> 8)
   68EE C0 E0              2458 	push	acc
   68F0 74 A3              2459 	mov	a,#(_tx + 0x0005)
   68F2 C0 E0              2460 	push	acc
   68F4 74 66              2461 	mov	a,#((_tx + 0x0005) >> 8)
   68F6 C0 E0              2462 	push	acc
   68F8 E4                 2463 	clr	a
   68F9 C0 E0              2464 	push	acc
   68FB 74 A4              2465 	mov	a,#(_tx + 0x0006)
   68FD C0 E0              2466 	push	acc
   68FF 74 66              2467 	mov	a,#((_tx + 0x0006) >> 8)
   6901 C0 E0              2468 	push	acc
   6903 E4                 2469 	clr	a
   6904 C0 E0              2470 	push	acc
   6906 74 31              2471 	mov	a,#_train_g1_index
   6908 C0 E0              2472 	push	acc
   690A 74 60              2473 	mov	a,#(_train_g1_index >> 8)
   690C C0 E0              2474 	push	acc
   690E E4                 2475 	clr	a
   690F C0 E0              2476 	push	acc
   6911 74 01              2477 	mov	a,#0x01
   6913 C0 E0              2478 	push	acc
   6915 8A 82              2479 	mov	dpl,r2
   6917 12 6C 46           2480 	lcall	_g1n1_midpoint
   691A E5 81              2481 	mov	a,sp
   691C 24 F4              2482 	add	a,#0xf4
   691E F5 81              2483 	mov	sp,a
   6920                    2484 00105$:
   6920 22                 2485 	ret
                           2486 ;------------------------------------------------------------
                           2487 ;Allocation info for local variables in function 'g1n1_maxf0t'
                           2488 ;------------------------------------------------------------
                           2489 ;X                         Allocated to stack - offset -3
                           2490 ;IDX                       Allocated to stack - offset -6
                           2491 ;IS_MIN                    Allocated to stack - offset -9
                           2492 ;IS_MAX                    Allocated to stack - offset -12
                           2493 ;update_g                  Allocated to stack - offset -14
                           2494 ;HOLD                      Allocated to stack - offset 1
                           2495 ;num_count                 Allocated to registers r2 
                           2496 ;dir                       Allocated to registers b0 
                           2497 ;idx_ini                   Allocated to stack - offset 2
                           2498 ;update                    Allocated to stack - offset 3
                           2499 ;NUM                       Allocated to registers r3 
                           2500 ;STEP                      Allocated to stack - offset 4
                           2501 ;cnt                       Allocated to registers r4 
                           2502 ;sloc0                     Allocated to stack - offset 5
                           2503 ;sloc1                     Allocated to stack - offset 8
                           2504 ;sloc2                     Allocated to stack - offset 11
                           2505 ;sloc3                     Allocated to stack - offset 12
                           2506 ;sloc4                     Allocated to stack - offset 13
                           2507 ;------------------------------------------------------------
                           2508 ;	../../shared/src/tx_train.c:279: void g1n1_maxf0t(bool HOLD,  uint8_t X, uint8_t* IDX, 
                           2509 ;	-----------------------------------------
                           2510 ;	 function g1n1_maxf0t
                           2511 ;	-----------------------------------------
   6921                    2512 _g1n1_maxf0t:
   6921 C0 18              2513 	push	_bp
   6923 85 81 18           2514 	mov	_bp,sp
   6926 C0 82              2515 	push	dpl
   6928 E5 81              2516 	mov	a,sp
   692A 24 0D              2517 	add	a,#0x0d
   692C F5 81              2518 	mov	sp,a
                           2519 ;	../../shared/src/tx_train.c:295: if(X){
   692E E5 18              2520 	mov	a,_bp
   6930 24 FD              2521 	add	a,#0xfd
   6932 F8                 2522 	mov	r0,a
   6933 E6                 2523 	mov	a,@r0
   6934 60 19              2524 	jz	00102$
                           2525 ;	../../shared/src/tx_train.c:296: NUM = tag_TX_G1_STEP_NUM;
   6936 90 60 8C           2526 	mov	dptr,#_DFE_CONTROL_7
   6939 E0                 2527 	movx	a,@dptr
   693A C4                 2528 	swap	a
   693B 23                 2529 	rl	a
   693C 54 1F              2530 	anl	a,#0x1f
   693E FB                 2531 	mov	r3,a
                           2532 ;	../../shared/src/tx_train.c:297: STEP= tag_TX_G1_STEP_SIZE;
   693F 90 60 A7           2533 	mov	dptr,#(_CDS_CTRL_REG1 + 0x0003)
   6942 E0                 2534 	movx	a,@dptr
   6943 54 03              2535 	anl	a,#0x03
   6945 FC                 2536 	mov	r4,a
   6946 E5 18              2537 	mov	a,_bp
   6948 24 04              2538 	add	a,#0x04
   694A F8                 2539 	mov	r0,a
   694B A6 04              2540 	mov	@r0,ar4
   694D 80 18              2541 	sjmp	00103$
   694F                    2542 00102$:
                           2543 ;	../../shared/src/tx_train.c:299: NUM = tag_TX_GN1_STEP_NUM;
   694F 90 60 A7           2544 	mov	dptr,#(_CDS_CTRL_REG1 + 0x0003)
   6952 E0                 2545 	movx	a,@dptr
   6953 03                 2546 	rr	a
   6954 03                 2547 	rr	a
   6955 54 1F              2548 	anl	a,#0x1f
   6957 FB                 2549 	mov	r3,a
                           2550 ;	../../shared/src/tx_train.c:300: STEP= tag_TX_GN1_STEP_SIZE;
   6958 90 60 A6           2551 	mov	dptr,#(_CDS_CTRL_REG1 + 0x0002)
   695B E0                 2552 	movx	a,@dptr
   695C C4                 2553 	swap	a
   695D 54 03              2554 	anl	a,#0x03
   695F FD                 2555 	mov	r5,a
   6960 E5 18              2556 	mov	a,_bp
   6962 24 04              2557 	add	a,#0x04
   6964 F8                 2558 	mov	r0,a
   6965 A6 05              2559 	mov	@r0,ar5
   6967                    2560 00103$:
                           2561 ;	../../shared/src/tx_train.c:302: idx_ini = *IDX;
   6967 E5 18              2562 	mov	a,_bp
   6969 24 FA              2563 	add	a,#0xfa
   696B F8                 2564 	mov	r0,a
   696C 86 05              2565 	mov	ar5,@r0
   696E 08                 2566 	inc	r0
   696F 86 06              2567 	mov	ar6,@r0
   6971 08                 2568 	inc	r0
   6972 86 07              2569 	mov	ar7,@r0
   6974 8D 82              2570 	mov	dpl,r5
   6976 8E 83              2571 	mov	dph,r6
   6978 8F F0              2572 	mov	b,r7
   697A 12 7D C8           2573 	lcall	__gptrget
   697D FA                 2574 	mov	r2,a
   697E A8 18              2575 	mov	r0,_bp
   6980 08                 2576 	inc	r0
   6981 08                 2577 	inc	r0
   6982 A6 02              2578 	mov	@r0,ar2
                           2579 ;	../../shared/src/tx_train.c:303: dir = HOLD ? 0 : 1;    
   6984 A8 18              2580 	mov	r0,_bp
   6986 08                 2581 	inc	r0
   6987 E6                 2582 	mov	a,@r0
   6988 B4 01 00           2583 	cjne	a,#0x01,00161$
   698B                    2584 00161$:
   698B 92 28              2585 	mov	b0,c
                           2586 ;	../../shared/src/tx_train.c:304: tx.become_worse = 0; 
   698D 90 66 A7           2587 	mov	dptr,#(_tx + 0x0009)
   6990 E4                 2588 	clr	a
   6991 F0                 2589 	movx	@dptr,a
                           2590 ;	../../shared/src/tx_train.c:305: num_count = 0;
   6992 7A 00              2591 	mov	r2,#0x00
                           2592 ;	../../shared/src/tx_train.c:307: while (cnt-->0)
   6994 E5 18              2593 	mov	a,_bp
   6996 24 F7              2594 	add	a,#0xf7
   6998 F8                 2595 	mov	r0,a
   6999 E5 18              2596 	mov	a,_bp
   699B 24 05              2597 	add	a,#0x05
   699D F9                 2598 	mov	r1,a
   699E E6                 2599 	mov	a,@r0
   699F F7                 2600 	mov	@r1,a
   69A0 08                 2601 	inc	r0
   69A1 09                 2602 	inc	r1
   69A2 E6                 2603 	mov	a,@r0
   69A3 F7                 2604 	mov	@r1,a
   69A4 08                 2605 	inc	r0
   69A5 09                 2606 	inc	r1
   69A6 E6                 2607 	mov	a,@r0
   69A7 F7                 2608 	mov	@r1,a
   69A8 E5 18              2609 	mov	a,_bp
   69AA 24 F4              2610 	add	a,#0xf4
   69AC F8                 2611 	mov	r0,a
   69AD E5 18              2612 	mov	a,_bp
   69AF 24 08              2613 	add	a,#0x08
   69B1 F9                 2614 	mov	r1,a
   69B2 E6                 2615 	mov	a,@r0
   69B3 F7                 2616 	mov	@r1,a
   69B4 08                 2617 	inc	r0
   69B5 09                 2618 	inc	r1
   69B6 E6                 2619 	mov	a,@r0
   69B7 F7                 2620 	mov	@r1,a
   69B8 08                 2621 	inc	r0
   69B9 09                 2622 	inc	r1
   69BA E6                 2623 	mov	a,@r0
   69BB F7                 2624 	mov	@r1,a
   69BC E5 18              2625 	mov	a,_bp
   69BE 24 0B              2626 	add	a,#0x0b
   69C0 F8                 2627 	mov	r0,a
   69C1 E4                 2628 	clr	a
   69C2 B5 03 00           2629 	cjne	a,ar3,00162$
   69C5                    2630 00162$:
   69C5 E4                 2631 	clr	a
   69C6 33                 2632 	rlc	a
   69C7 F6                 2633 	mov	@r0,a
   69C8 E5 18              2634 	mov	a,_bp
   69CA 24 04              2635 	add	a,#0x04
   69CC F8                 2636 	mov	r0,a
   69CD E5 18              2637 	mov	a,_bp
   69CF 24 0C              2638 	add	a,#0x0c
   69D1 F9                 2639 	mov	r1,a
   69D2 C3                 2640 	clr	c
   69D3 E4                 2641 	clr	a
   69D4 96                 2642 	subb	a,@r0
   69D5 F7                 2643 	mov	@r1,a
   69D6 7C 14              2644 	mov	r4,#0x14
   69D8                    2645 00131$:
   69D8 C0 05              2646 	push	ar5
   69DA C0 06              2647 	push	ar6
   69DC C0 07              2648 	push	ar7
   69DE 8C 05              2649 	mov	ar5,r4
   69E0 1C                 2650 	dec	r4
   69E1 C3                 2651 	clr	c
   69E2 74 80              2652 	mov	a,#(0x00 ^ 0x80)
   69E4 8D F0              2653 	mov	b,r5
   69E6 63 F0 80           2654 	xrl	b,#0x80
   69E9 95 F0              2655 	subb	a,b
   69EB D0 07              2656 	pop	ar7
   69ED D0 06              2657 	pop	ar6
   69EF D0 05              2658 	pop	ar5
   69F1 40 03              2659 	jc	00163$
   69F3 02 6B E5           2660 	ljmp	00133$
   69F6                    2661 00163$:
                           2662 ;	../../shared/src/tx_train.c:309: if(HOLD) {
   69F6 A8 18              2663 	mov	r0,_bp
   69F8 08                 2664 	inc	r0
   69F9 E6                 2665 	mov	a,@r0
   69FA 70 03              2666 	jnz	00164$
   69FC 02 6A B8           2667 	ljmp	00129$
   69FF                    2668 00164$:
                           2669 ;	../../shared/src/tx_train.c:310: if( (num_count >= NUM || *IS_MIN || tx.become_worse) && dir==0 ) {
   69FF EA                 2670 	mov	a,r2
   6A00 B5 03 00           2671 	cjne	a,ar3,00165$
   6A03                    2672 00165$:
   6A03 50 18              2673 	jnc	00110$
   6A05 E5 18              2674 	mov	a,_bp
   6A07 24 05              2675 	add	a,#0x05
   6A09 F8                 2676 	mov	r0,a
   6A0A 86 82              2677 	mov	dpl,@r0
   6A0C 08                 2678 	inc	r0
   6A0D 86 83              2679 	mov	dph,@r0
   6A0F 08                 2680 	inc	r0
   6A10 86 F0              2681 	mov	b,@r0
   6A12 12 7D C8           2682 	lcall	__gptrget
   6A15 70 06              2683 	jnz	00110$
   6A17 90 66 A7           2684 	mov	dptr,#(_tx + 0x0009)
   6A1A E0                 2685 	movx	a,@dptr
   6A1B 60 64              2686 	jz	00107$
   6A1D                    2687 00110$:
   6A1D 20 28 61           2688 	jb	b0,00107$
                           2689 ;	../../shared/src/tx_train.c:311: dir = 1;
   6A20 D2 28              2690 	setb	b0
                           2691 ;	../../shared/src/tx_train.c:312: num_count = 0;
   6A22 7A 00              2692 	mov	r2,#0x00
                           2693 ;	../../shared/src/tx_train.c:313: tx.become_worse = 0;		  
   6A24 90 66 A7           2694 	mov	dptr,#(_tx + 0x0009)
   6A27 E4                 2695 	clr	a
   6A28 F0                 2696 	movx	@dptr,a
                           2697 ;	../../shared/src/tx_train.c:314: if(NUM > 0)  {
   6A29 EB                 2698 	mov	a,r3
   6A2A 60 55              2699 	jz	00107$
                           2700 ;	../../shared/src/tx_train.c:316: update = idx_ini - *IDX;					
   6A2C C0 04              2701 	push	ar4
   6A2E 8D 82              2702 	mov	dpl,r5
   6A30 8E 83              2703 	mov	dph,r6
   6A32 8F F0              2704 	mov	b,r7
   6A34 12 7D C8           2705 	lcall	__gptrget
   6A37 FC                 2706 	mov	r4,a
   6A38 A8 18              2707 	mov	r0,_bp
   6A3A 08                 2708 	inc	r0
   6A3B 08                 2709 	inc	r0
   6A3C E6                 2710 	mov	a,@r0
   6A3D C3                 2711 	clr	c
   6A3E 9C                 2712 	subb	a,r4
   6A3F FC                 2713 	mov	r4,a
   6A40 E5 18              2714 	mov	a,_bp
   6A42 24 03              2715 	add	a,#0x03
   6A44 F8                 2716 	mov	r0,a
   6A45 A6 04              2717 	mov	@r0,ar4
                           2718 ;	../../shared/src/tx_train.c:317: update_g(update);		  
   6A47 C0 02              2719 	push	ar2
   6A49 C0 03              2720 	push	ar3
   6A4B C0 04              2721 	push	ar4
   6A4D C0 05              2722 	push	ar5
   6A4F C0 06              2723 	push	ar6
   6A51 C0 07              2724 	push	ar7
   6A53 C0 25              2725 	push	bits
   6A55 74 71              2726 	mov	a,#00171$
   6A57 C0 E0              2727 	push	acc
   6A59 74 6A              2728 	mov	a,#(00171$ >> 8)
   6A5B C0 E0              2729 	push	acc
   6A5D E5 18              2730 	mov	a,_bp
   6A5F 24 F2              2731 	add	a,#0xf2
   6A61 F8                 2732 	mov	r0,a
   6A62 E6                 2733 	mov	a,@r0
   6A63 C0 E0              2734 	push	acc
   6A65 08                 2735 	inc	r0
   6A66 E6                 2736 	mov	a,@r0
   6A67 C0 E0              2737 	push	acc
   6A69 E5 18              2738 	mov	a,_bp
   6A6B 24 03              2739 	add	a,#0x03
   6A6D F8                 2740 	mov	r0,a
   6A6E 86 82              2741 	mov	dpl,@r0
   6A70 22                 2742 	ret
   6A71                    2743 00171$:
   6A71 D0 25              2744 	pop	bits
   6A73 D0 07              2745 	pop	ar7
   6A75 D0 06              2746 	pop	ar6
   6A77 D0 05              2747 	pop	ar5
   6A79 D0 04              2748 	pop	ar4
   6A7B D0 03              2749 	pop	ar3
   6A7D D0 02              2750 	pop	ar2
                           2751 ;	../../shared/src/tx_train.c:355: update_opt_trx_ffe();
   6A7F D0 04              2752 	pop	ar4
                           2753 ;	../../shared/src/tx_train.c:317: update_g(update);		  
   6A81                    2754 00107$:
                           2755 ;	../../shared/src/tx_train.c:320: if((num_count >= NUM || *IS_MAX || tx.become_worse) && dir==1 ) break;
   6A81 EA                 2756 	mov	a,r2
   6A82 B5 03 00           2757 	cjne	a,ar3,00172$
   6A85                    2758 00172$:
   6A85 50 1B              2759 	jnc	00115$
   6A87 E5 18              2760 	mov	a,_bp
   6A89 24 08              2761 	add	a,#0x08
   6A8B F8                 2762 	mov	r0,a
   6A8C 86 82              2763 	mov	dpl,@r0
   6A8E 08                 2764 	inc	r0
   6A8F 86 83              2765 	mov	dph,@r0
   6A91 08                 2766 	inc	r0
   6A92 86 F0              2767 	mov	b,@r0
   6A94 12 7D C8           2768 	lcall	__gptrget
   6A97 70 09              2769 	jnz	00115$
   6A99 90 66 A7           2770 	mov	dptr,#(_tx + 0x0009)
   6A9C E0                 2771 	movx	a,@dptr
   6A9D 70 03              2772 	jnz	00175$
   6A9F 02 6B 6C           2773 	ljmp	00130$
   6AA2                    2774 00175$:
   6AA2                    2775 00115$:
   6AA2 C0 04              2776 	push	ar4
   6AA4 A2 28              2777 	mov	c,b0
   6AA6 E4                 2778 	clr	a
   6AA7 33                 2779 	rlc	a
   6AA8 FC                 2780 	mov	r4,a
   6AA9 BC 01 02           2781 	cjne	r4,#0x01,00176$
   6AAC 80 05              2782 	sjmp	00177$
   6AAE                    2783 00176$:
   6AAE D0 04              2784 	pop	ar4
   6AB0 02 6B 6C           2785 	ljmp	00130$
   6AB3                    2786 00177$:
   6AB3 D0 04              2787 	pop	ar4
   6AB5 02 6B E5           2788 	ljmp	00133$
   6AB8                    2789 00129$:
                           2790 ;	../../shared/src/tx_train.c:323: if( (num_count >= NUM || *IS_MAX || tx.become_worse) && dir==1 )
   6AB8 EA                 2791 	mov	a,r2
   6AB9 B5 03 00           2792 	cjne	a,ar3,00178$
   6ABC                    2793 00178$:
   6ABC 50 18              2794 	jnc	00120$
   6ABE E5 18              2795 	mov	a,_bp
   6AC0 24 08              2796 	add	a,#0x08
   6AC2 F8                 2797 	mov	r0,a
   6AC3 86 82              2798 	mov	dpl,@r0
   6AC5 08                 2799 	inc	r0
   6AC6 86 83              2800 	mov	dph,@r0
   6AC8 08                 2801 	inc	r0
   6AC9 86 F0              2802 	mov	b,@r0
   6ACB 12 7D C8           2803 	lcall	__gptrget
   6ACE 70 06              2804 	jnz	00120$
   6AD0 90 66 A7           2805 	mov	dptr,#(_tx + 0x0009)
   6AD3 E0                 2806 	movx	a,@dptr
   6AD4 60 14              2807 	jz	00117$
   6AD6                    2808 00120$:
   6AD6 C0 04              2809 	push	ar4
   6AD8 A2 28              2810 	mov	c,b0
   6ADA E4                 2811 	clr	a
   6ADB 33                 2812 	rlc	a
   6ADC FC                 2813 	mov	r4,a
   6ADD BC 01 02           2814 	cjne	r4,#0x01,00182$
   6AE0 80 04              2815 	sjmp	00183$
   6AE2                    2816 00182$:
   6AE2 D0 04              2817 	pop	ar4
   6AE4 80 04              2818 	sjmp	00117$
   6AE6                    2819 00183$:
   6AE6 D0 04              2820 	pop	ar4
                           2821 ;	../../shared/src/tx_train.c:324: dir = 0;
   6AE8 C2 28              2822 	clr	b0
   6AEA                    2823 00117$:
                           2824 ;	../../shared/src/tx_train.c:325: num_count = 0;
   6AEA 7A 00              2825 	mov	r2,#0x00
                           2826 ;	../../shared/src/tx_train.c:326: tx.become_worse = 0;
   6AEC 90 66 A7           2827 	mov	dptr,#(_tx + 0x0009)
   6AEF E4                 2828 	clr	a
   6AF0 F0                 2829 	movx	@dptr,a
                           2830 ;	../../shared/src/tx_train.c:328: if(NUM > 0)
   6AF1 EB                 2831 	mov	a,r3
   6AF2 60 55              2832 	jz	00122$
                           2833 ;	../../shared/src/tx_train.c:330: update = idx_ini - *IDX;					
   6AF4 C0 04              2834 	push	ar4
   6AF6 8D 82              2835 	mov	dpl,r5
   6AF8 8E 83              2836 	mov	dph,r6
   6AFA 8F F0              2837 	mov	b,r7
   6AFC 12 7D C8           2838 	lcall	__gptrget
   6AFF FC                 2839 	mov	r4,a
   6B00 A8 18              2840 	mov	r0,_bp
   6B02 08                 2841 	inc	r0
   6B03 08                 2842 	inc	r0
   6B04 E6                 2843 	mov	a,@r0
   6B05 C3                 2844 	clr	c
   6B06 9C                 2845 	subb	a,r4
   6B07 FC                 2846 	mov	r4,a
   6B08 E5 18              2847 	mov	a,_bp
   6B0A 24 03              2848 	add	a,#0x03
   6B0C F8                 2849 	mov	r0,a
   6B0D A6 04              2850 	mov	@r0,ar4
                           2851 ;	../../shared/src/tx_train.c:331: update_g(update);		  
   6B0F C0 02              2852 	push	ar2
   6B11 C0 03              2853 	push	ar3
   6B13 C0 04              2854 	push	ar4
   6B15 C0 05              2855 	push	ar5
   6B17 C0 06              2856 	push	ar6
   6B19 C0 07              2857 	push	ar7
   6B1B C0 25              2858 	push	bits
   6B1D 74 39              2859 	mov	a,#00185$
   6B1F C0 E0              2860 	push	acc
   6B21 74 6B              2861 	mov	a,#(00185$ >> 8)
   6B23 C0 E0              2862 	push	acc
   6B25 E5 18              2863 	mov	a,_bp
   6B27 24 F2              2864 	add	a,#0xf2
   6B29 F8                 2865 	mov	r0,a
   6B2A E6                 2866 	mov	a,@r0
   6B2B C0 E0              2867 	push	acc
   6B2D 08                 2868 	inc	r0
   6B2E E6                 2869 	mov	a,@r0
   6B2F C0 E0              2870 	push	acc
   6B31 E5 18              2871 	mov	a,_bp
   6B33 24 03              2872 	add	a,#0x03
   6B35 F8                 2873 	mov	r0,a
   6B36 86 82              2874 	mov	dpl,@r0
   6B38 22                 2875 	ret
   6B39                    2876 00185$:
   6B39 D0 25              2877 	pop	bits
   6B3B D0 07              2878 	pop	ar7
   6B3D D0 06              2879 	pop	ar6
   6B3F D0 05              2880 	pop	ar5
   6B41 D0 04              2881 	pop	ar4
   6B43 D0 03              2882 	pop	ar3
   6B45 D0 02              2883 	pop	ar2
                           2884 ;	../../shared/src/tx_train.c:355: update_opt_trx_ffe();
   6B47 D0 04              2885 	pop	ar4
                           2886 ;	../../shared/src/tx_train.c:331: update_g(update);		  
   6B49                    2887 00122$:
                           2888 ;	../../shared/src/tx_train.c:333: if((num_count >= NUM || *IS_MIN || tx.become_worse) && dir==0 ) break;
   6B49 E5 18              2889 	mov	a,_bp
   6B4B 24 0B              2890 	add	a,#0x0b
   6B4D F8                 2891 	mov	r0,a
   6B4E E6                 2892 	mov	a,@r0
   6B4F 60 18              2893 	jz	00127$
   6B51 E5 18              2894 	mov	a,_bp
   6B53 24 05              2895 	add	a,#0x05
   6B55 F8                 2896 	mov	r0,a
   6B56 86 82              2897 	mov	dpl,@r0
   6B58 08                 2898 	inc	r0
   6B59 86 83              2899 	mov	dph,@r0
   6B5B 08                 2900 	inc	r0
   6B5C 86 F0              2901 	mov	b,@r0
   6B5E 12 7D C8           2902 	lcall	__gptrget
   6B61 70 06              2903 	jnz	00127$
   6B63 90 66 A7           2904 	mov	dptr,#(_tx + 0x0009)
   6B66 E0                 2905 	movx	a,@dptr
   6B67 60 03              2906 	jz	00130$
   6B69                    2907 00127$:
   6B69 30 28 79           2908 	jnb	b0,00133$
   6B6C                    2909 00130$:
                           2910 ;	../../shared/src/tx_train.c:336: update = dir ? STEP : -STEP;
   6B6C 30 28 0E           2911 	jnb	b0,00139$
   6B6F E5 18              2912 	mov	a,_bp
   6B71 24 04              2913 	add	a,#0x04
   6B73 F8                 2914 	mov	r0,a
   6B74 E5 18              2915 	mov	a,_bp
   6B76 24 0D              2916 	add	a,#0x0d
   6B78 F9                 2917 	mov	r1,a
   6B79 E6                 2918 	mov	a,@r0
   6B7A F7                 2919 	mov	@r1,a
   6B7B 80 0C              2920 	sjmp	00140$
   6B7D                    2921 00139$:
   6B7D E5 18              2922 	mov	a,_bp
   6B7F 24 0C              2923 	add	a,#0x0c
   6B81 F8                 2924 	mov	r0,a
   6B82 E5 18              2925 	mov	a,_bp
   6B84 24 0D              2926 	add	a,#0x0d
   6B86 F9                 2927 	mov	r1,a
   6B87 E6                 2928 	mov	a,@r0
   6B88 F7                 2929 	mov	@r1,a
   6B89                    2930 00140$:
   6B89 C0 04              2931 	push	ar4
   6B8B E5 18              2932 	mov	a,_bp
   6B8D 24 0D              2933 	add	a,#0x0d
   6B8F F8                 2934 	mov	r0,a
   6B90 86 04              2935 	mov	ar4,@r0
   6B92 E5 18              2936 	mov	a,_bp
   6B94 24 03              2937 	add	a,#0x03
   6B96 F8                 2938 	mov	r0,a
   6B97 A6 04              2939 	mov	@r0,ar4
                           2940 ;	../../shared/src/tx_train.c:337: num_count ++; //update number of rounds
   6B99 0A                 2941 	inc	r2
                           2942 ;	../../shared/src/tx_train.c:338: update_g(update);
   6B9A C0 02              2943 	push	ar2
   6B9C C0 03              2944 	push	ar3
   6B9E C0 04              2945 	push	ar4
   6BA0 C0 05              2946 	push	ar5
   6BA2 C0 06              2947 	push	ar6
   6BA4 C0 07              2948 	push	ar7
   6BA6 C0 25              2949 	push	bits
   6BA8 74 C4              2950 	mov	a,#00191$
   6BAA C0 E0              2951 	push	acc
   6BAC 74 6B              2952 	mov	a,#(00191$ >> 8)
   6BAE C0 E0              2953 	push	acc
   6BB0 E5 18              2954 	mov	a,_bp
   6BB2 24 F2              2955 	add	a,#0xf2
   6BB4 F8                 2956 	mov	r0,a
   6BB5 E6                 2957 	mov	a,@r0
   6BB6 C0 E0              2958 	push	acc
   6BB8 08                 2959 	inc	r0
   6BB9 E6                 2960 	mov	a,@r0
   6BBA C0 E0              2961 	push	acc
   6BBC E5 18              2962 	mov	a,_bp
   6BBE 24 03              2963 	add	a,#0x03
   6BC0 F8                 2964 	mov	r0,a
   6BC1 86 82              2965 	mov	dpl,@r0
   6BC3 22                 2966 	ret
   6BC4                    2967 00191$:
   6BC4 D0 25              2968 	pop	bits
                           2969 ;	../../shared/src/tx_train.c:339: compare_g1n1(X); // compare train data with saved optimal data
   6BC6 E5 18              2970 	mov	a,_bp
   6BC8 24 FD              2971 	add	a,#0xfd
   6BCA F8                 2972 	mov	r0,a
   6BCB 86 82              2973 	mov	dpl,@r0
   6BCD C0 25              2974 	push	bits
   6BCF 12 73 DC           2975 	lcall	_compare_g1n1
   6BD2 D0 25              2976 	pop	bits
   6BD4 D0 07              2977 	pop	ar7
   6BD6 D0 06              2978 	pop	ar6
   6BD8 D0 05              2979 	pop	ar5
   6BDA D0 04              2980 	pop	ar4
   6BDC D0 03              2981 	pop	ar3
   6BDE D0 02              2982 	pop	ar2
   6BE0 D0 04              2983 	pop	ar4
   6BE2 02 69 D8           2984 	ljmp	00131$
   6BE5                    2985 00133$:
                           2986 ;	../../shared/src/tx_train.c:350: if(X)
   6BE5 E5 18              2987 	mov	a,_bp
   6BE7 24 FD              2988 	add	a,#0xfd
   6BE9 F8                 2989 	mov	r0,a
   6BEA E6                 2990 	mov	a,@r0
   6BEB 60 29              2991 	jz	00135$
                           2992 ;	../../shared/src/tx_train.c:351: update_g(opt_g1_index - *IDX);
   6BED 8D 82              2993 	mov	dpl,r5
   6BEF 8E 83              2994 	mov	dph,r6
   6BF1 8F F0              2995 	mov	b,r7
   6BF3 12 7D C8           2996 	lcall	__gptrget
   6BF6 FA                 2997 	mov	r2,a
   6BF7 90 67 B5           2998 	mov	dptr,#_opt_g1_index
   6BFA E0                 2999 	movx	a,@dptr
   6BFB C3                 3000 	clr	c
   6BFC 9A                 3001 	subb	a,r2
   6BFD F5 82              3002 	mov	dpl,a
   6BFF 74 14              3003 	mov	a,#00193$
   6C01 C0 E0              3004 	push	acc
   6C03 74 6C              3005 	mov	a,#(00193$ >> 8)
   6C05 C0 E0              3006 	push	acc
   6C07 E5 18              3007 	mov	a,_bp
   6C09 24 F2              3008 	add	a,#0xf2
   6C0B F8                 3009 	mov	r0,a
   6C0C E6                 3010 	mov	a,@r0
   6C0D C0 E0              3011 	push	acc
   6C0F 08                 3012 	inc	r0
   6C10 E6                 3013 	mov	a,@r0
   6C11 C0 E0              3014 	push	acc
   6C13 22                 3015 	ret
   6C14                    3016 00193$:
   6C14 80 27              3017 	sjmp	00136$
   6C16                    3018 00135$:
                           3019 ;	../../shared/src/tx_train.c:353: update_g(opt_gn1_index - *IDX);
   6C16 8D 82              3020 	mov	dpl,r5
   6C18 8E 83              3021 	mov	dph,r6
   6C1A 8F F0              3022 	mov	b,r7
   6C1C 12 7D C8           3023 	lcall	__gptrget
   6C1F FD                 3024 	mov	r5,a
   6C20 90 67 B4           3025 	mov	dptr,#_opt_gn1_index
   6C23 E0                 3026 	movx	a,@dptr
   6C24 C3                 3027 	clr	c
   6C25 9D                 3028 	subb	a,r5
   6C26 F5 82              3029 	mov	dpl,a
   6C28 74 3D              3030 	mov	a,#00194$
   6C2A C0 E0              3031 	push	acc
   6C2C 74 6C              3032 	mov	a,#(00194$ >> 8)
   6C2E C0 E0              3033 	push	acc
   6C30 E5 18              3034 	mov	a,_bp
   6C32 24 F2              3035 	add	a,#0xf2
   6C34 F8                 3036 	mov	r0,a
   6C35 E6                 3037 	mov	a,@r0
   6C36 C0 E0              3038 	push	acc
   6C38 08                 3039 	inc	r0
   6C39 E6                 3040 	mov	a,@r0
   6C3A C0 E0              3041 	push	acc
   6C3C 22                 3042 	ret
   6C3D                    3043 00194$:
   6C3D                    3044 00136$:
                           3045 ;	../../shared/src/tx_train.c:355: update_opt_trx_ffe();
   6C3D 12 5D 77           3046 	lcall	_update_opt_trx_ffe
   6C40 85 18 81           3047 	mov	sp,_bp
   6C43 D0 18              3048 	pop	_bp
   6C45 22                 3049 	ret
                           3050 ;------------------------------------------------------------
                           3051 ;Allocation info for local variables in function 'g1n1_midpoint'
                           3052 ;------------------------------------------------------------
                           3053 ;X                         Allocated to stack - offset -3
                           3054 ;IDX                       Allocated to stack - offset -6
                           3055 ;IS_MIN                    Allocated to stack - offset -9
                           3056 ;IS_MAX                    Allocated to stack - offset -12
                           3057 ;update_g                  Allocated to stack - offset -14
                           3058 ;HOLD                      Allocated to stack - offset 1
                           3059 ;num_count                 Allocated to stack - offset 2
                           3060 ;dir                       Allocated to registers b0 
                           3061 ;idx_ini                   Allocated to stack - offset 3
                           3062 ;idx_lo                    Allocated to registers r7 
                           3063 ;idx_hi                    Allocated to stack - offset 10
                           3064 ;update                    Allocated to registers r2 
                           3065 ;OBTH                      Allocated to registers 
                           3066 ;TH                        Allocated to stack - offset 4
                           3067 ;OS                        Allocated to stack - offset 6
                           3068 ;STEP                      Allocated to stack - offset 7
                           3069 ;OB                        Allocated to stack - offset 8
                           3070 ;cnt                       Allocated to stack - offset 9
                           3071 ;sloc0                     Allocated to stack - offset 10
                           3072 ;sloc1                     Allocated to stack - offset 11
                           3073 ;sloc2                     Allocated to stack - offset 13
                           3074 ;sloc3                     Allocated to stack - offset 15
                           3075 ;sloc4                     Allocated to stack - offset 18
                           3076 ;------------------------------------------------------------
                           3077 ;	../../shared/src/tx_train.c:379: void g1n1_midpoint(bool HOLD, uint8_t X, 
                           3078 ;	-----------------------------------------
                           3079 ;	 function g1n1_midpoint
                           3080 ;	-----------------------------------------
   6C46                    3081 _g1n1_midpoint:
   6C46 C0 18              3082 	push	_bp
   6C48 85 81 18           3083 	mov	_bp,sp
   6C4B C0 82              3084 	push	dpl
   6C4D E5 81              3085 	mov	a,sp
   6C4F 24 14              3086 	add	a,#0x14
   6C51 F5 81              3087 	mov	sp,a
                           3088 ;	../../shared/src/tx_train.c:399: dir = HOLD ? 0 : 1;
   6C53 A8 18              3089 	mov	r0,_bp
   6C55 08                 3090 	inc	r0
   6C56 E6                 3091 	mov	a,@r0
   6C57 B4 01 00           3092 	cjne	a,#0x01,00200$
   6C5A                    3093 00200$:
   6C5A 92 28              3094 	mov	b0,c
                           3095 ;	../../shared/src/tx_train.c:400: idx_ini = *IDX;
   6C5C E5 18              3096 	mov	a,_bp
   6C5E 24 FA              3097 	add	a,#0xfa
   6C60 F8                 3098 	mov	r0,a
   6C61 86 03              3099 	mov	ar3,@r0
   6C63 08                 3100 	inc	r0
   6C64 86 04              3101 	mov	ar4,@r0
   6C66 08                 3102 	inc	r0
   6C67 86 05              3103 	mov	ar5,@r0
   6C69 8B 82              3104 	mov	dpl,r3
   6C6B 8C 83              3105 	mov	dph,r4
   6C6D 8D F0              3106 	mov	b,r5
   6C6F 12 7D C8           3107 	lcall	__gptrget
   6C72 FE                 3108 	mov	r6,a
   6C73 E5 18              3109 	mov	a,_bp
   6C75 24 03              3110 	add	a,#0x03
   6C77 F8                 3111 	mov	r0,a
   6C78 A6 06              3112 	mov	@r0,ar6
                           3113 ;	../../shared/src/tx_train.c:401: idx_lo  = idx_ini;
   6C7A E5 18              3114 	mov	a,_bp
   6C7C 24 03              3115 	add	a,#0x03
   6C7E F8                 3116 	mov	r0,a
   6C7F 86 07              3117 	mov	ar7,@r0
                           3118 ;	../../shared/src/tx_train.c:402: idx_hi  = idx_ini;
   6C81 E5 18              3119 	mov	a,_bp
   6C83 24 03              3120 	add	a,#0x03
   6C85 F8                 3121 	mov	r0,a
   6C86 E5 18              3122 	mov	a,_bp
   6C88 24 0A              3123 	add	a,#0x0a
   6C8A F9                 3124 	mov	r1,a
   6C8B E6                 3125 	mov	a,@r0
   6C8C F7                 3126 	mov	@r1,a
                           3127 ;	../../shared/src/tx_train.c:403: tx.become_worse = 0;
   6C8D 90 66 A7           3128 	mov	dptr,#(_tx + 0x0009)
   6C90 E4                 3129 	clr	a
   6C91 F0                 3130 	movx	@dptr,a
                           3131 ;	../../shared/src/tx_train.c:405: num_count = 0;
   6C92 A8 18              3132 	mov	r0,_bp
   6C94 08                 3133 	inc	r0
   6C95 08                 3134 	inc	r0
   6C96 76 00              3135 	mov	@r0,#0x00
                           3136 ;	../../shared/src/tx_train.c:407: if(X){          
   6C98 E5 18              3137 	mov	a,_bp
   6C9A 24 FD              3138 	add	a,#0xfd
   6C9C F8                 3139 	mov	r0,a
   6C9D E6                 3140 	mov	a,@r0
   6C9E 70 03              3141 	jnz	00201$
   6CA0 02 6D 94           3142 	ljmp	00102$
   6CA3                    3143 00201$:
                           3144 ;	../../shared/src/tx_train.c:408: TH   = ((opt.f0t*tag_TX_G1_MIDPOINT_THRES_K)>>tag_THRES_K_SHFT) + tag_TX_G1_MIDPOINT_THRES_C;
   6CA3 C0 07              3145 	push	ar7
   6CA5 90 66 8D           3146 	mov	dptr,#(_opt + 0x001e)
   6CA8 E0                 3147 	movx	a,@dptr
   6CA9 FF                 3148 	mov	r7,a
   6CAA 90 60 85           3149 	mov	dptr,#(_DFE_TEST_4 + 0x0001)
   6CAD E0                 3150 	movx	a,@dptr
   6CAE FE                 3151 	mov	r6,a
   6CAF E5 18              3152 	mov	a,_bp
   6CB1 24 0B              3153 	add	a,#0x0b
   6CB3 F8                 3154 	mov	r0,a
   6CB4 A6 07              3155 	mov	@r0,ar7
   6CB6 08                 3156 	inc	r0
   6CB7 76 00              3157 	mov	@r0,#0x00
   6CB9 7A 00              3158 	mov	r2,#0x00
   6CBB C0 03              3159 	push	ar3
   6CBD C0 04              3160 	push	ar4
   6CBF C0 05              3161 	push	ar5
   6CC1 C0 07              3162 	push	ar7
   6CC3 C0 25              3163 	push	bits
   6CC5 C0 06              3164 	push	ar6
   6CC7 C0 02              3165 	push	ar2
   6CC9 E5 18              3166 	mov	a,_bp
   6CCB 24 0B              3167 	add	a,#0x0b
   6CCD F8                 3168 	mov	r0,a
   6CCE 86 82              3169 	mov	dpl,@r0
   6CD0 08                 3170 	inc	r0
   6CD1 86 83              3171 	mov	dph,@r0
   6CD3 12 7C E3           3172 	lcall	__mulint
   6CD6 AA 82              3173 	mov	r2,dpl
   6CD8 AE 83              3174 	mov	r6,dph
   6CDA 15 81              3175 	dec	sp
   6CDC 15 81              3176 	dec	sp
   6CDE D0 25              3177 	pop	bits
   6CE0 D0 07              3178 	pop	ar7
   6CE2 D0 05              3179 	pop	ar5
   6CE4 D0 04              3180 	pop	ar4
   6CE6 D0 03              3181 	pop	ar3
   6CE8 E5 18              3182 	mov	a,_bp
   6CEA 24 0B              3183 	add	a,#0x0b
   6CEC F8                 3184 	mov	r0,a
   6CED A6 02              3185 	mov	@r0,ar2
   6CEF EE                 3186 	mov	a,r6
   6CF0 C4                 3187 	swap	a
   6CF1 C6                 3188 	xch	a,@r0
   6CF2 C4                 3189 	swap	a
   6CF3 54 0F              3190 	anl	a,#0x0f
   6CF5 66                 3191 	xrl	a,@r0
   6CF6 C6                 3192 	xch	a,@r0
   6CF7 54 0F              3193 	anl	a,#0x0f
   6CF9 C6                 3194 	xch	a,@r0
   6CFA 66                 3195 	xrl	a,@r0
   6CFB C6                 3196 	xch	a,@r0
   6CFC 30 E3 02           3197 	jnb	acc.3,00202$
   6CFF 44 F0              3198 	orl	a,#0xf0
   6D01                    3199 00202$:
   6D01 08                 3200 	inc	r0
   6D02 F6                 3201 	mov	@r0,a
   6D03 90 60 84           3202 	mov	dptr,#_DFE_TEST_4
   6D06 E0                 3203 	movx	a,@dptr
   6D07 FF                 3204 	mov	r7,a
   6D08 33                 3205 	rlc	a
   6D09 95 E0              3206 	subb	a,acc
   6D0B FA                 3207 	mov	r2,a
   6D0C E5 18              3208 	mov	a,_bp
   6D0E 24 0B              3209 	add	a,#0x0b
   6D10 F8                 3210 	mov	r0,a
   6D11 EF                 3211 	mov	a,r7
   6D12 26                 3212 	add	a,@r0
   6D13 FF                 3213 	mov	r7,a
   6D14 EA                 3214 	mov	a,r2
   6D15 08                 3215 	inc	r0
   6D16 36                 3216 	addc	a,@r0
   6D17 FA                 3217 	mov	r2,a
   6D18 E5 18              3218 	mov	a,_bp
   6D1A 24 04              3219 	add	a,#0x04
   6D1C F8                 3220 	mov	r0,a
   6D1D A6 07              3221 	mov	@r0,ar7
   6D1F 08                 3222 	inc	r0
   6D20 A6 02              3223 	mov	@r0,ar2
                           3224 ;	../../shared/src/tx_train.c:409: OS   = tag_TX_G1_MIDPOINT_INDEX_OS;
   6D22 E5 18              3225 	mov	a,_bp
   6D24 24 06              3226 	add	a,#0x06
   6D26 F8                 3227 	mov	r0,a
   6D27 76 00              3228 	mov	@r0,#0x00
                           3229 ;	../../shared/src/tx_train.c:411: STEP = tag_TX_G1_STEP_SIZE;
   6D29 90 60 A7           3230 	mov	dptr,#(_CDS_CTRL_REG1 + 0x0003)
   6D2C E0                 3231 	movx	a,@dptr
   6D2D 54 03              3232 	anl	a,#0x03
   6D2F FA                 3233 	mov	r2,a
   6D30 E5 18              3234 	mov	a,_bp
   6D32 24 07              3235 	add	a,#0x07
   6D34 F8                 3236 	mov	r0,a
   6D35 A6 02              3237 	mov	@r0,ar2
                           3238 ;	../../shared/src/tx_train.c:412: OB   = (train.f1 < 0 || (train.f2 < 0 && ((train.f1 + train.f2) < tag_TX_G1_OVERBOOST_THRES)))? 1:0;
   6D37 90 66 46           3239 	mov	dptr,#(_train + 0x0006)
   6D3A E0                 3240 	movx	a,@dptr
   6D3B FE                 3241 	mov	r6,a
   6D3C D0 07              3242 	pop	ar7
   6D3E 20 E7 41           3243 	jb	acc.7,00136$
   6D41 90 66 5B           3244 	mov	dptr,#(_train + 0x001b)
   6D44 E0                 3245 	movx	a,@dptr
   6D45 FA                 3246 	mov	r2,a
   6D46 30 E7 2D           3247 	jnb	acc.7,00138$
   6D49 C0 07              3248 	push	ar7
   6D4B E5 18              3249 	mov	a,_bp
   6D4D 24 0B              3250 	add	a,#0x0b
   6D4F F8                 3251 	mov	r0,a
   6D50 A6 06              3252 	mov	@r0,ar6
   6D52 EE                 3253 	mov	a,r6
   6D53 33                 3254 	rlc	a
   6D54 95 E0              3255 	subb	a,acc
   6D56 08                 3256 	inc	r0
   6D57 F6                 3257 	mov	@r0,a
   6D58 EA                 3258 	mov	a,r2
   6D59 33                 3259 	rlc	a
   6D5A 95 E0              3260 	subb	a,acc
   6D5C FE                 3261 	mov	r6,a
   6D5D E5 18              3262 	mov	a,_bp
   6D5F 24 0B              3263 	add	a,#0x0b
   6D61 F8                 3264 	mov	r0,a
   6D62 EA                 3265 	mov	a,r2
   6D63 26                 3266 	add	a,@r0
   6D64 FA                 3267 	mov	r2,a
   6D65 EE                 3268 	mov	a,r6
   6D66 08                 3269 	inc	r0
   6D67 36                 3270 	addc	a,@r0
   6D68 FE                 3271 	mov	r6,a
   6D69 C3                 3272 	clr	c
   6D6A EA                 3273 	mov	a,r2
   6D6B 94 03              3274 	subb	a,#0x03
   6D6D EE                 3275 	mov	a,r6
   6D6E 64 80              3276 	xrl	a,#0x80
   6D70 94 80              3277 	subb	a,#0x80
   6D72 D0 07              3278 	pop	ar7
   6D74 40 04              3279 	jc	00139$
   6D76                    3280 00138$:
   6D76 7A 00              3281 	mov	r2,#0x00
   6D78 80 02              3282 	sjmp	00140$
   6D7A                    3283 00139$:
   6D7A 7A 01              3284 	mov	r2,#0x01
   6D7C                    3285 00140$:
   6D7C EA                 3286 	mov	a,r2
   6D7D 70 03              3287 	jnz	00136$
   6D7F FA                 3288 	mov	r2,a
   6D80 80 02              3289 	sjmp	00137$
   6D82                    3290 00136$:
   6D82 7A 01              3291 	mov	r2,#0x01
   6D84                    3292 00137$:
   6D84 EA                 3293 	mov	a,r2
   6D85 60 02              3294 	jz	00133$
   6D87 74 01              3295 	mov	a,#0x01
   6D89                    3296 00133$:
   6D89 FA                 3297 	mov	r2,a
   6D8A E5 18              3298 	mov	a,_bp
   6D8C 24 08              3299 	add	a,#0x08
   6D8E F8                 3300 	mov	r0,a
   6D8F A6 02              3301 	mov	@r0,ar2
   6D91 02 6E 7E           3302 	ljmp	00197$
   6D94                    3303 00102$:
                           3304 ;	../../shared/src/tx_train.c:414: TH   = ((opt.f0t*tag_TX_GN1_MIDPOINT_THRES_K)>>tag_THRES_K_SHFT) + tag_TX_GN1_MIDPOINT_THRES_C;
   6D94 C0 07              3305 	push	ar7
   6D96 90 66 8D           3306 	mov	dptr,#(_opt + 0x001e)
   6D99 E0                 3307 	movx	a,@dptr
   6D9A FE                 3308 	mov	r6,a
   6D9B 90 60 51           3309 	mov	dptr,#(_TRAIN_CONTROL_0 + 0x0001)
   6D9E E0                 3310 	movx	a,@dptr
   6D9F FA                 3311 	mov	r2,a
   6DA0 E5 18              3312 	mov	a,_bp
   6DA2 24 0D              3313 	add	a,#0x0d
   6DA4 F8                 3314 	mov	r0,a
   6DA5 A6 06              3315 	mov	@r0,ar6
   6DA7 08                 3316 	inc	r0
   6DA8 76 00              3317 	mov	@r0,#0x00
   6DAA 8A 06              3318 	mov	ar6,r2
   6DAC 7F 00              3319 	mov	r7,#0x00
   6DAE C0 03              3320 	push	ar3
   6DB0 C0 04              3321 	push	ar4
   6DB2 C0 05              3322 	push	ar5
   6DB4 C0 25              3323 	push	bits
   6DB6 C0 06              3324 	push	ar6
   6DB8 C0 07              3325 	push	ar7
   6DBA E5 18              3326 	mov	a,_bp
   6DBC 24 0D              3327 	add	a,#0x0d
   6DBE F8                 3328 	mov	r0,a
   6DBF 86 82              3329 	mov	dpl,@r0
   6DC1 08                 3330 	inc	r0
   6DC2 86 83              3331 	mov	dph,@r0
   6DC4 12 7C E3           3332 	lcall	__mulint
   6DC7 AE 82              3333 	mov	r6,dpl
   6DC9 AF 83              3334 	mov	r7,dph
   6DCB 15 81              3335 	dec	sp
   6DCD 15 81              3336 	dec	sp
   6DCF D0 25              3337 	pop	bits
   6DD1 D0 05              3338 	pop	ar5
   6DD3 D0 04              3339 	pop	ar4
   6DD5 D0 03              3340 	pop	ar3
   6DD7 E5 18              3341 	mov	a,_bp
   6DD9 24 0D              3342 	add	a,#0x0d
   6DDB F8                 3343 	mov	r0,a
   6DDC A6 06              3344 	mov	@r0,ar6
   6DDE EF                 3345 	mov	a,r7
   6DDF C4                 3346 	swap	a
   6DE0 C6                 3347 	xch	a,@r0
   6DE1 C4                 3348 	swap	a
   6DE2 54 0F              3349 	anl	a,#0x0f
   6DE4 66                 3350 	xrl	a,@r0
   6DE5 C6                 3351 	xch	a,@r0
   6DE6 54 0F              3352 	anl	a,#0x0f
   6DE8 C6                 3353 	xch	a,@r0
   6DE9 66                 3354 	xrl	a,@r0
   6DEA C6                 3355 	xch	a,@r0
   6DEB 30 E3 02           3356 	jnb	acc.3,00208$
   6DEE 44 F0              3357 	orl	a,#0xf0
   6DF0                    3358 00208$:
   6DF0 08                 3359 	inc	r0
   6DF1 F6                 3360 	mov	@r0,a
   6DF2 90 60 50           3361 	mov	dptr,#_TRAIN_CONTROL_0
   6DF5 E0                 3362 	movx	a,@dptr
   6DF6 FE                 3363 	mov	r6,a
   6DF7 33                 3364 	rlc	a
   6DF8 95 E0              3365 	subb	a,acc
   6DFA FF                 3366 	mov	r7,a
   6DFB E5 18              3367 	mov	a,_bp
   6DFD 24 0D              3368 	add	a,#0x0d
   6DFF F8                 3369 	mov	r0,a
   6E00 EE                 3370 	mov	a,r6
   6E01 26                 3371 	add	a,@r0
   6E02 FE                 3372 	mov	r6,a
   6E03 EF                 3373 	mov	a,r7
   6E04 08                 3374 	inc	r0
   6E05 36                 3375 	addc	a,@r0
   6E06 FF                 3376 	mov	r7,a
   6E07 E5 18              3377 	mov	a,_bp
   6E09 24 04              3378 	add	a,#0x04
   6E0B F8                 3379 	mov	r0,a
   6E0C A6 06              3380 	mov	@r0,ar6
   6E0E 08                 3381 	inc	r0
   6E0F A6 07              3382 	mov	@r0,ar7
                           3383 ;	../../shared/src/tx_train.c:415: OS   = tag_TX_GN1_MIDPOINT_INDEX_OS;
   6E11 E5 18              3384 	mov	a,_bp
   6E13 24 06              3385 	add	a,#0x06
   6E15 F8                 3386 	mov	r0,a
   6E16 76 FC              3387 	mov	@r0,#0xFC
                           3388 ;	../../shared/src/tx_train.c:417: STEP = tag_TX_GN1_STEP_SIZE;
   6E18 90 60 A6           3389 	mov	dptr,#(_CDS_CTRL_REG1 + 0x0002)
   6E1B E0                 3390 	movx	a,@dptr
   6E1C C4                 3391 	swap	a
   6E1D 54 03              3392 	anl	a,#0x03
   6E1F FE                 3393 	mov	r6,a
   6E20 E5 18              3394 	mov	a,_bp
   6E22 24 07              3395 	add	a,#0x07
   6E24 F8                 3396 	mov	r0,a
   6E25 A6 06              3397 	mov	@r0,ar6
                           3398 ;	../../shared/src/tx_train.c:418: OB   =  ((train.f0 < 63 && train.fn1 < tag_TX_GN1_OVERBOOST_THRES) || (train.f0 >= 63 && train.f0a >= 63))? 1:0;
   6E27 90 66 5A           3399 	mov	dptr,#(_train + 0x001a)
   6E2A E0                 3400 	movx	a,@dptr
   6E2B FE                 3401 	mov	r6,a
   6E2C BE 3F 00           3402 	cjne	r6,#0x3F,00209$
   6E2F                    3403 00209$:
   6E2F E4                 3404 	clr	a
   6E30 33                 3405 	rlc	a
   6E31 FA                 3406 	mov	r2,a
   6E32 D0 07              3407 	pop	ar7
   6E34 EA                 3408 	mov	a,r2
   6E35 60 0C              3409 	jz	00146$
   6E37 90 66 5D           3410 	mov	dptr,#(_train + 0x001d)
   6E3A E0                 3411 	movx	a,@dptr
   6E3B FE                 3412 	mov	r6,a
   6E3C C3                 3413 	clr	c
   6E3D 64 80              3414 	xrl	a,#0x80
   6E3F 94 83              3415 	subb	a,#0x83
   6E41 40 04              3416 	jc	00147$
   6E43                    3417 00146$:
   6E43 7E 00              3418 	mov	r6,#0x00
   6E45 80 02              3419 	sjmp	00148$
   6E47                    3420 00147$:
   6E47 7E 01              3421 	mov	r6,#0x01
   6E49                    3422 00148$:
   6E49 EE                 3423 	mov	a,r6
   6E4A 70 23              3424 	jnz	00144$
   6E4C EA                 3425 	mov	a,r2
   6E4D B4 01 00           3426 	cjne	a,#0x01,00213$
   6E50                    3427 00213$:
   6E50 E4                 3428 	clr	a
   6E51 33                 3429 	rlc	a
   6E52 FE                 3430 	mov	r6,a
   6E53 60 0E              3431 	jz	00149$
   6E55 90 66 59           3432 	mov	dptr,#(_train + 0x0019)
   6E58 E0                 3433 	movx	a,@dptr
   6E59 FE                 3434 	mov	r6,a
   6E5A BE 3F 00           3435 	cjne	r6,#0x3F,00215$
   6E5D                    3436 00215$:
   6E5D B3                 3437 	cpl	c
   6E5E E4                 3438 	clr	a
   6E5F 33                 3439 	rlc	a
   6E60 FE                 3440 	mov	r6,a
   6E61 70 04              3441 	jnz	00150$
   6E63                    3442 00149$:
   6E63 7E 00              3443 	mov	r6,#0x00
   6E65 80 02              3444 	sjmp	00151$
   6E67                    3445 00150$:
   6E67 7E 01              3446 	mov	r6,#0x01
   6E69                    3447 00151$:
   6E69 EE                 3448 	mov	a,r6
   6E6A 70 03              3449 	jnz	00144$
   6E6C FE                 3450 	mov	r6,a
   6E6D 80 02              3451 	sjmp	00145$
   6E6F                    3452 00144$:
   6E6F 7E 01              3453 	mov	r6,#0x01
   6E71                    3454 00145$:
   6E71 EE                 3455 	mov	a,r6
   6E72 60 02              3456 	jz	00141$
   6E74 74 01              3457 	mov	a,#0x01
   6E76                    3458 00141$:
   6E76 FE                 3459 	mov	r6,a
   6E77 E5 18              3460 	mov	a,_bp
   6E79 24 08              3461 	add	a,#0x08
   6E7B F8                 3462 	mov	r0,a
   6E7C A6 06              3463 	mov	@r0,ar6
                           3464 ;	../../shared/src/tx_train.c:426: while(cnt-->0)
   6E7E                    3465 00197$:
   6E7E E5 18              3466 	mov	a,_bp
   6E80 24 F7              3467 	add	a,#0xf7
   6E82 F8                 3468 	mov	r0,a
   6E83 E5 18              3469 	mov	a,_bp
   6E85 24 0F              3470 	add	a,#0x0f
   6E87 F9                 3471 	mov	r1,a
   6E88 E6                 3472 	mov	a,@r0
   6E89 F7                 3473 	mov	@r1,a
   6E8A 08                 3474 	inc	r0
   6E8B 09                 3475 	inc	r1
   6E8C E6                 3476 	mov	a,@r0
   6E8D F7                 3477 	mov	@r1,a
   6E8E 08                 3478 	inc	r0
   6E8F 09                 3479 	inc	r1
   6E90 E6                 3480 	mov	a,@r0
   6E91 F7                 3481 	mov	@r1,a
   6E92 E5 18              3482 	mov	a,_bp
   6E94 24 F4              3483 	add	a,#0xf4
   6E96 F8                 3484 	mov	r0,a
   6E97 E5 18              3485 	mov	a,_bp
   6E99 24 12              3486 	add	a,#0x12
   6E9B F9                 3487 	mov	r1,a
   6E9C E6                 3488 	mov	a,@r0
   6E9D F7                 3489 	mov	@r1,a
   6E9E 08                 3490 	inc	r0
   6E9F 09                 3491 	inc	r1
   6EA0 E6                 3492 	mov	a,@r0
   6EA1 F7                 3493 	mov	@r1,a
   6EA2 08                 3494 	inc	r0
   6EA3 09                 3495 	inc	r1
   6EA4 E6                 3496 	mov	a,@r0
   6EA5 F7                 3497 	mov	@r1,a
   6EA6 E5 18              3498 	mov	a,_bp
   6EA8 24 07              3499 	add	a,#0x07
   6EAA F8                 3500 	mov	r0,a
   6EAB C3                 3501 	clr	c
   6EAC E4                 3502 	clr	a
   6EAD 96                 3503 	subb	a,@r0
   6EAE FE                 3504 	mov	r6,a
   6EAF E5 18              3505 	mov	a,_bp
   6EB1 24 09              3506 	add	a,#0x09
   6EB3 F8                 3507 	mov	r0,a
   6EB4 76 14              3508 	mov	@r0,#0x14
   6EB6                    3509 00128$:
   6EB6 C0 07              3510 	push	ar7
   6EB8 E5 18              3511 	mov	a,_bp
   6EBA 24 09              3512 	add	a,#0x09
   6EBC F8                 3513 	mov	r0,a
   6EBD 86 07              3514 	mov	ar7,@r0
   6EBF E5 18              3515 	mov	a,_bp
   6EC1 24 09              3516 	add	a,#0x09
   6EC3 F8                 3517 	mov	r0,a
   6EC4 16                 3518 	dec	@r0
   6EC5 C3                 3519 	clr	c
   6EC6 74 80              3520 	mov	a,#(0x00 ^ 0x80)
   6EC8 8F F0              3521 	mov	b,r7
   6ECA 63 F0 80           3522 	xrl	b,#0x80
   6ECD 95 F0              3523 	subb	a,b
   6ECF D0 07              3524 	pop	ar7
   6ED1 40 03              3525 	jc	00220$
   6ED3 02 71 83           3526 	ljmp	00130$
   6ED6                    3527 00220$:
                           3528 ;	../../shared/src/tx_train.c:433: if(HOLD)
   6ED6 A8 18              3529 	mov	r0,_bp
   6ED8 08                 3530 	inc	r0
   6ED9 E6                 3531 	mov	a,@r0
   6EDA 70 03              3532 	jnz	00221$
   6EDC 02 6F A8           3533 	ljmp	00121$
   6EDF                    3534 00221$:
                           3535 ;	../../shared/src/tx_train.c:435: if( (*IS_MIN || tx.become_worse) && dir==0) {
   6EDF E5 18              3536 	mov	a,_bp
   6EE1 24 0F              3537 	add	a,#0x0f
   6EE3 F8                 3538 	mov	r0,a
   6EE4 86 82              3539 	mov	dpl,@r0
   6EE6 08                 3540 	inc	r0
   6EE7 86 83              3541 	mov	dph,@r0
   6EE9 08                 3542 	inc	r0
   6EEA 86 F0              3543 	mov	b,@r0
   6EEC 12 7D C8           3544 	lcall	__gptrget
   6EEF 70 09              3545 	jnz	00107$
   6EF1 90 66 A7           3546 	mov	dptr,#(_tx + 0x0009)
   6EF4 E0                 3547 	movx	a,@dptr
   6EF5 70 03              3548 	jnz	00223$
   6EF7 02 6F 77           3549 	ljmp	00105$
   6EFA                    3550 00223$:
   6EFA                    3551 00107$:
   6EFA 20 28 7A           3552 	jb	b0,00105$
                           3553 ;	../../shared/src/tx_train.c:436: dir = 1;
   6EFD C0 07              3554 	push	ar7
   6EFF D2 28              3555 	setb	b0
                           3556 ;	../../shared/src/tx_train.c:437: tx.become_worse = 0;
   6F01 90 66 A7           3557 	mov	dptr,#(_tx + 0x0009)
   6F04 E4                 3558 	clr	a
   6F05 F0                 3559 	movx	@dptr,a
                           3560 ;	../../shared/src/tx_train.c:438: update = idx_ini - *IDX;
   6F06 8B 82              3561 	mov	dpl,r3
   6F08 8C 83              3562 	mov	dph,r4
   6F0A 8D F0              3563 	mov	b,r5
   6F0C 12 7D C8           3564 	lcall	__gptrget
   6F0F FF                 3565 	mov	r7,a
   6F10 E5 18              3566 	mov	a,_bp
   6F12 24 03              3567 	add	a,#0x03
   6F14 F8                 3568 	mov	r0,a
   6F15 E6                 3569 	mov	a,@r0
   6F16 C3                 3570 	clr	c
   6F17 9F                 3571 	subb	a,r7
   6F18 FF                 3572 	mov	r7,a
   6F19 FA                 3573 	mov	r2,a
                           3574 ;	../../shared/src/tx_train.c:439: update_g(update);				
   6F1A C0 02              3575 	push	ar2
   6F1C C0 03              3576 	push	ar3
   6F1E C0 04              3577 	push	ar4
   6F20 C0 05              3578 	push	ar5
   6F22 C0 06              3579 	push	ar6
   6F24 C0 07              3580 	push	ar7
   6F26 C0 25              3581 	push	bits
   6F28 74 3F              3582 	mov	a,#00225$
   6F2A C0 E0              3583 	push	acc
   6F2C 74 6F              3584 	mov	a,#(00225$ >> 8)
   6F2E C0 E0              3585 	push	acc
   6F30 E5 18              3586 	mov	a,_bp
   6F32 24 F2              3587 	add	a,#0xf2
   6F34 F8                 3588 	mov	r0,a
   6F35 E6                 3589 	mov	a,@r0
   6F36 C0 E0              3590 	push	acc
   6F38 08                 3591 	inc	r0
   6F39 E6                 3592 	mov	a,@r0
   6F3A C0 E0              3593 	push	acc
   6F3C 8A 82              3594 	mov	dpl,r2
   6F3E 22                 3595 	ret
   6F3F                    3596 00225$:
   6F3F D0 25              3597 	pop	bits
   6F41 D0 07              3598 	pop	ar7
   6F43 D0 06              3599 	pop	ar6
   6F45 D0 05              3600 	pop	ar5
   6F47 D0 04              3601 	pop	ar4
   6F49 D0 03              3602 	pop	ar3
   6F4B D0 02              3603 	pop	ar2
                           3604 ;	../../shared/src/tx_train.c:440: num_count += abs(update);
   6F4D 8A 82              3605 	mov	dpl,r2
   6F4F C0 03              3606 	push	ar3
   6F51 C0 04              3607 	push	ar4
   6F53 C0 05              3608 	push	ar5
   6F55 C0 06              3609 	push	ar6
   6F57 C0 25              3610 	push	bits
   6F59 78 41              3611 	mov	r0,#_abs
   6F5B 79 C1              3612 	mov	r1,#(_abs >> 8)
   6F5D 7A 02              3613 	mov	r2,#(_abs >> 16)
   6F5F 12 00 B3           3614 	lcall	__sdcc_banked_call
   6F62 AF 82              3615 	mov	r7,dpl
   6F64 D0 25              3616 	pop	bits
   6F66 D0 06              3617 	pop	ar6
   6F68 D0 05              3618 	pop	ar5
   6F6A D0 04              3619 	pop	ar4
   6F6C D0 03              3620 	pop	ar3
   6F6E A8 18              3621 	mov	r0,_bp
   6F70 08                 3622 	inc	r0
   6F71 08                 3623 	inc	r0
   6F72 EF                 3624 	mov	a,r7
   6F73 26                 3625 	add	a,@r0
   6F74 F6                 3626 	mov	@r0,a
                           3627 ;	../../shared/src/tx_train.c:500: update_opt_trx_ffe();
   6F75 D0 07              3628 	pop	ar7
                           3629 ;	../../shared/src/tx_train.c:440: num_count += abs(update);
   6F77                    3630 00105$:
                           3631 ;	../../shared/src/tx_train.c:447: if( (*IS_MAX || tx.become_worse) && dir==1 ) break;
   6F77 E5 18              3632 	mov	a,_bp
   6F79 24 12              3633 	add	a,#0x12
   6F7B F8                 3634 	mov	r0,a
   6F7C 86 82              3635 	mov	dpl,@r0
   6F7E 08                 3636 	inc	r0
   6F7F 86 83              3637 	mov	dph,@r0
   6F81 08                 3638 	inc	r0
   6F82 86 F0              3639 	mov	b,@r0
   6F84 12 7D C8           3640 	lcall	__gptrget
   6F87 70 09              3641 	jnz	00111$
   6F89 90 66 A7           3642 	mov	dptr,#(_tx + 0x0009)
   6F8C E0                 3643 	movx	a,@dptr
   6F8D 70 03              3644 	jnz	00227$
   6F8F 02 70 69           3645 	ljmp	00122$
   6F92                    3646 00227$:
   6F92                    3647 00111$:
   6F92 C0 07              3648 	push	ar7
   6F94 A2 28              3649 	mov	c,b0
   6F96 E4                 3650 	clr	a
   6F97 33                 3651 	rlc	a
   6F98 FF                 3652 	mov	r7,a
   6F99 BF 01 02           3653 	cjne	r7,#0x01,00228$
   6F9C 80 05              3654 	sjmp	00229$
   6F9E                    3655 00228$:
   6F9E D0 07              3656 	pop	ar7
   6FA0 02 70 69           3657 	ljmp	00122$
   6FA3                    3658 00229$:
   6FA3 D0 07              3659 	pop	ar7
   6FA5 02 71 83           3660 	ljmp	00130$
   6FA8                    3661 00121$:
                           3662 ;	../../shared/src/tx_train.c:451: if( (*IS_MAX || tx.become_worse) && dir==1) {
   6FA8 E5 18              3663 	mov	a,_bp
   6FAA 24 12              3664 	add	a,#0x12
   6FAC F8                 3665 	mov	r0,a
   6FAD 86 82              3666 	mov	dpl,@r0
   6FAF 08                 3667 	inc	r0
   6FB0 86 83              3668 	mov	dph,@r0
   6FB2 08                 3669 	inc	r0
   6FB3 86 F0              3670 	mov	b,@r0
   6FB5 12 7D C8           3671 	lcall	__gptrget
   6FB8 70 09              3672 	jnz	00115$
   6FBA 90 66 A7           3673 	mov	dptr,#(_tx + 0x0009)
   6FBD E0                 3674 	movx	a,@dptr
   6FBE 70 03              3675 	jnz	00231$
   6FC0 02 70 4B           3676 	ljmp	00113$
   6FC3                    3677 00231$:
   6FC3                    3678 00115$:
   6FC3 C0 07              3679 	push	ar7
   6FC5 A2 28              3680 	mov	c,b0
   6FC7 E4                 3681 	clr	a
   6FC8 33                 3682 	rlc	a
   6FC9 FF                 3683 	mov	r7,a
   6FCA BF 01 02           3684 	cjne	r7,#0x01,00232$
   6FCD 80 04              3685 	sjmp	00233$
   6FCF                    3686 00232$:
   6FCF D0 07              3687 	pop	ar7
   6FD1 80 78              3688 	sjmp	00113$
   6FD3                    3689 00233$:
                           3690 ;	../../shared/src/tx_train.c:452: dir = 0;
   6FD3 C2 28              3691 	clr	b0
                           3692 ;	../../shared/src/tx_train.c:453: tx.become_worse = 0;
   6FD5 90 66 A7           3693 	mov	dptr,#(_tx + 0x0009)
   6FD8 E4                 3694 	clr	a
   6FD9 F0                 3695 	movx	@dptr,a
                           3696 ;	../../shared/src/tx_train.c:454: update = idx_ini - *IDX;
   6FDA 8B 82              3697 	mov	dpl,r3
   6FDC 8C 83              3698 	mov	dph,r4
   6FDE 8D F0              3699 	mov	b,r5
   6FE0 12 7D C8           3700 	lcall	__gptrget
   6FE3 FF                 3701 	mov	r7,a
   6FE4 E5 18              3702 	mov	a,_bp
   6FE6 24 03              3703 	add	a,#0x03
   6FE8 F8                 3704 	mov	r0,a
   6FE9 E6                 3705 	mov	a,@r0
   6FEA C3                 3706 	clr	c
   6FEB 9F                 3707 	subb	a,r7
   6FEC FF                 3708 	mov	r7,a
   6FED FA                 3709 	mov	r2,a
                           3710 ;	../../shared/src/tx_train.c:455: update_g(update);				
   6FEE C0 02              3711 	push	ar2
   6FF0 C0 03              3712 	push	ar3
   6FF2 C0 04              3713 	push	ar4
   6FF4 C0 05              3714 	push	ar5
   6FF6 C0 06              3715 	push	ar6
   6FF8 C0 07              3716 	push	ar7
   6FFA C0 25              3717 	push	bits
   6FFC 74 13              3718 	mov	a,#00234$
   6FFE C0 E0              3719 	push	acc
   7000 74 70              3720 	mov	a,#(00234$ >> 8)
   7002 C0 E0              3721 	push	acc
   7004 E5 18              3722 	mov	a,_bp
   7006 24 F2              3723 	add	a,#0xf2
   7008 F8                 3724 	mov	r0,a
   7009 E6                 3725 	mov	a,@r0
   700A C0 E0              3726 	push	acc
   700C 08                 3727 	inc	r0
   700D E6                 3728 	mov	a,@r0
   700E C0 E0              3729 	push	acc
   7010 8A 82              3730 	mov	dpl,r2
   7012 22                 3731 	ret
   7013                    3732 00234$:
   7013 D0 25              3733 	pop	bits
   7015 D0 07              3734 	pop	ar7
   7017 D0 06              3735 	pop	ar6
   7019 D0 05              3736 	pop	ar5
   701B D0 04              3737 	pop	ar4
   701D D0 03              3738 	pop	ar3
   701F D0 02              3739 	pop	ar2
                           3740 ;	../../shared/src/tx_train.c:456: num_count += abs(update);
   7021 8A 82              3741 	mov	dpl,r2
   7023 C0 03              3742 	push	ar3
   7025 C0 04              3743 	push	ar4
   7027 C0 05              3744 	push	ar5
   7029 C0 06              3745 	push	ar6
   702B C0 25              3746 	push	bits
   702D 78 41              3747 	mov	r0,#_abs
   702F 79 C1              3748 	mov	r1,#(_abs >> 8)
   7031 7A 02              3749 	mov	r2,#(_abs >> 16)
   7033 12 00 B3           3750 	lcall	__sdcc_banked_call
   7036 AF 82              3751 	mov	r7,dpl
   7038 D0 25              3752 	pop	bits
   703A D0 06              3753 	pop	ar6
   703C D0 05              3754 	pop	ar5
   703E D0 04              3755 	pop	ar4
   7040 D0 03              3756 	pop	ar3
   7042 A8 18              3757 	mov	r0,_bp
   7044 08                 3758 	inc	r0
   7045 08                 3759 	inc	r0
   7046 EF                 3760 	mov	a,r7
   7047 26                 3761 	add	a,@r0
   7048 F6                 3762 	mov	@r0,a
                           3763 ;	../../shared/src/tx_train.c:500: update_opt_trx_ffe();
   7049 D0 07              3764 	pop	ar7
                           3765 ;	../../shared/src/tx_train.c:456: num_count += abs(update);
   704B                    3766 00113$:
                           3767 ;	../../shared/src/tx_train.c:461: if( (*IS_MIN || tx.become_worse) && dir==0 ) break;
   704B E5 18              3768 	mov	a,_bp
   704D 24 0F              3769 	add	a,#0x0f
   704F F8                 3770 	mov	r0,a
   7050 86 82              3771 	mov	dpl,@r0
   7052 08                 3772 	inc	r0
   7053 86 83              3773 	mov	dph,@r0
   7055 08                 3774 	inc	r0
   7056 86 F0              3775 	mov	b,@r0
   7058 12 7D C8           3776 	lcall	__gptrget
   705B 70 06              3777 	jnz	00119$
   705D 90 66 A7           3778 	mov	dptr,#(_tx + 0x0009)
   7060 E0                 3779 	movx	a,@dptr
   7061 60 06              3780 	jz	00122$
   7063                    3781 00119$:
   7063 20 28 03           3782 	jb	b0,00237$
   7066 02 71 83           3783 	ljmp	00130$
   7069                    3784 00237$:
   7069                    3785 00122$:
                           3786 ;	../../shared/src/tx_train.c:464: update = dir ? STEP : -STEP;
   7069 30 28 09           3787 	jnb	b0,00152$
   706C E5 18              3788 	mov	a,_bp
   706E 24 07              3789 	add	a,#0x07
   7070 F8                 3790 	mov	r0,a
   7071 86 02              3791 	mov	ar2,@r0
   7073 80 02              3792 	sjmp	00153$
   7075                    3793 00152$:
   7075 8E 02              3794 	mov	ar2,r6
   7077                    3795 00153$:
   7077 C0 07              3796 	push	ar7
   7079 8A 07              3797 	mov	ar7,r2
   707B 8F 02              3798 	mov	ar2,r7
                           3799 ;	../../shared/src/tx_train.c:465: num_count += abs(update);
   707D 8A 82              3800 	mov	dpl,r2
   707F C0 02              3801 	push	ar2
   7081 C0 03              3802 	push	ar3
   7083 C0 04              3803 	push	ar4
   7085 C0 05              3804 	push	ar5
   7087 C0 06              3805 	push	ar6
   7089 C0 25              3806 	push	bits
   708B 78 41              3807 	mov	r0,#_abs
   708D 79 C1              3808 	mov	r1,#(_abs >> 8)
   708F 7A 02              3809 	mov	r2,#(_abs >> 16)
   7091 12 00 B3           3810 	lcall	__sdcc_banked_call
   7094 AF 82              3811 	mov	r7,dpl
   7096 D0 25              3812 	pop	bits
   7098 D0 06              3813 	pop	ar6
   709A D0 05              3814 	pop	ar5
   709C D0 04              3815 	pop	ar4
   709E D0 03              3816 	pop	ar3
   70A0 D0 02              3817 	pop	ar2
   70A2 A8 18              3818 	mov	r0,_bp
   70A4 08                 3819 	inc	r0
   70A5 08                 3820 	inc	r0
   70A6 EF                 3821 	mov	a,r7
   70A7 26                 3822 	add	a,@r0
   70A8 F6                 3823 	mov	@r0,a
                           3824 ;	../../shared/src/tx_train.c:466: update_g(update);
   70A9 C0 03              3825 	push	ar3
   70AB C0 04              3826 	push	ar4
   70AD C0 05              3827 	push	ar5
   70AF C0 06              3828 	push	ar6
   70B1 C0 07              3829 	push	ar7
   70B3 C0 25              3830 	push	bits
   70B5 74 CC              3831 	mov	a,#00239$
   70B7 C0 E0              3832 	push	acc
   70B9 74 70              3833 	mov	a,#(00239$ >> 8)
   70BB C0 E0              3834 	push	acc
   70BD E5 18              3835 	mov	a,_bp
   70BF 24 F2              3836 	add	a,#0xf2
   70C1 F8                 3837 	mov	r0,a
   70C2 E6                 3838 	mov	a,@r0
   70C3 C0 E0              3839 	push	acc
   70C5 08                 3840 	inc	r0
   70C6 E6                 3841 	mov	a,@r0
   70C7 C0 E0              3842 	push	acc
   70C9 8A 82              3843 	mov	dpl,r2
   70CB 22                 3844 	ret
   70CC                    3845 00239$:
   70CC D0 25              3846 	pop	bits
   70CE D0 07              3847 	pop	ar7
   70D0 D0 06              3848 	pop	ar6
   70D2 D0 05              3849 	pop	ar5
   70D4 D0 04              3850 	pop	ar4
   70D6 D0 03              3851 	pop	ar3
                           3852 ;	../../shared/src/tx_train.c:468: tx.train_overboost = tag_TX_GN1_OVERBOOST_EN && OB;
                           3853 ;	../../shared/src/tx_train.c:500: update_opt_trx_ffe();
   70D8 D0 07              3854 	pop	ar7
                           3855 ;	../../shared/src/tx_train.c:468: tx.train_overboost = tag_TX_GN1_OVERBOOST_EN && OB;
   70DA E5 18              3856 	mov	a,_bp
   70DC 24 08              3857 	add	a,#0x08
   70DE F8                 3858 	mov	r0,a
   70DF E6                 3859 	mov	a,@r0
   70E0 70 03              3860 	jnz	00155$
   70E2 FA                 3861 	mov	r2,a
   70E3 80 02              3862 	sjmp	00156$
   70E5                    3863 00155$:
   70E5 7A 01              3864 	mov	r2,#0x01
   70E7                    3865 00156$:
   70E7 C0 07              3866 	push	ar7
   70E9 90 66 AA           3867 	mov	dptr,#(_tx + 0x000c)
   70EC EA                 3868 	mov	a,r2
   70ED F0                 3869 	movx	@dptr,a
                           3870 ;	../../shared/src/tx_train.c:470: tx.become_worse = ((train.f0t < TH) || (num_count >= tag_TX_MAX_MIDPOINT_CTRL_CNT)
   70EE 90 66 5E           3871 	mov	dptr,#(_train + 0x001e)
   70F1 E5 18              3872 	mov	a,_bp
   70F3 24 0D              3873 	add	a,#0x0d
   70F5 F8                 3874 	mov	r0,a
   70F6 E0                 3875 	movx	a,@dptr
   70F7 F6                 3876 	mov	@r0,a
   70F8 E5 18              3877 	mov	a,_bp
   70FA 24 0D              3878 	add	a,#0x0d
   70FC F8                 3879 	mov	r0,a
   70FD 86 07              3880 	mov	ar7,@r0
   70FF 7A 00              3881 	mov	r2,#0x00
   7101 E5 18              3882 	mov	a,_bp
   7103 24 04              3883 	add	a,#0x04
   7105 F8                 3884 	mov	r0,a
   7106 C3                 3885 	clr	c
   7107 EF                 3886 	mov	a,r7
   7108 96                 3887 	subb	a,@r0
   7109 EA                 3888 	mov	a,r2
   710A 08                 3889 	inc	r0
   710B 96                 3890 	subb	a,@r0
   710C D0 07              3891 	pop	ar7
   710E 40 10              3892 	jc	00164$
   7110 A8 18              3893 	mov	r0,_bp
   7112 08                 3894 	inc	r0
   7113 08                 3895 	inc	r0
   7114 B6 80 00           3896 	cjne	@r0,#0x80,00242$
   7117                    3897 00242$:
   7117 B3                 3898 	cpl	c
   7118 E4                 3899 	clr	a
   7119 33                 3900 	rlc	a
   711A FA                 3901 	mov	r2,a
   711B 70 03              3902 	jnz	00164$
   711D FA                 3903 	mov	r2,a
   711E 80 02              3904 	sjmp	00165$
   7120                    3905 00164$:
   7120 7A 01              3906 	mov	r2,#0x01
   7122                    3907 00165$:
   7122 EA                 3908 	mov	a,r2
   7123 70 19              3909 	jnz	00161$
                           3910 ;	../../shared/src/tx_train.c:471: || (tx.train_overboost && dir==0)
   7125 90 66 AA           3911 	mov	dptr,#(_tx + 0x000c)
   7128 E0                 3912 	movx	a,@dptr
   7129 60 07              3913 	jz	00166$
   712B A2 28              3914 	mov	c,b0
   712D E4                 3915 	clr	a
   712E 33                 3916 	rlc	a
   712F FA                 3917 	mov	r2,a
   7130 60 04              3918 	jz	00167$
   7132                    3919 00166$:
   7132 7A 00              3920 	mov	r2,#0x00
   7134 80 02              3921 	sjmp	00168$
   7136                    3922 00167$:
   7136 7A 01              3923 	mov	r2,#0x01
   7138                    3924 00168$:
   7138 EA                 3925 	mov	a,r2
   7139 70 03              3926 	jnz	00161$
   713B FA                 3927 	mov	r2,a
   713C 80 02              3928 	sjmp	00162$
   713E                    3929 00161$:
   713E 7A 01              3930 	mov	r2,#0x01
   7140                    3931 00162$:
   7140 EA                 3932 	mov	a,r2
   7141 70 0E              3933 	jnz	00158$
                           3934 ;	../../shared/src/tx_train.c:472: || train.f0t == 0);
   7143 E5 18              3935 	mov	a,_bp
   7145 24 0D              3936 	add	a,#0x0d
   7147 F8                 3937 	mov	r0,a
   7148 B6 00 02           3938 	cjne	@r0,#0x00,00250$
   714B 80 04              3939 	sjmp	00158$
   714D                    3940 00250$:
   714D 7A 00              3941 	mov	r2,#0x00
   714F 80 02              3942 	sjmp	00159$
   7151                    3943 00158$:
   7151 7A 01              3944 	mov	r2,#0x01
   7153                    3945 00159$:
                           3946 ;	../../shared/src/tx_train.c:474: if(tx.become_worse==0){ // keep record hi/lo until worsen, will be max/min if not worsen
   7153 90 66 A7           3947 	mov	dptr,#(_tx + 0x0009)
   7156 EA                 3948 	mov	a,r2
   7157 F0                 3949 	movx	@dptr,a
   7158 E0                 3950 	movx	a,@dptr
   7159 60 03              3951 	jz	00251$
   715B 02 6E B6           3952 	ljmp	00128$
   715E                    3953 00251$:
                           3954 ;	../../shared/src/tx_train.c:475: if(dir==0) idx_lo = *IDX;
   715E 20 28 0E           3955 	jb	b0,00124$
   7161 8B 82              3956 	mov	dpl,r3
   7163 8C 83              3957 	mov	dph,r4
   7165 8D F0              3958 	mov	b,r5
   7167 12 7D C8           3959 	lcall	__gptrget
   716A FA                 3960 	mov	r2,a
   716B FF                 3961 	mov	r7,a
   716C 02 6E B6           3962 	ljmp	00128$
   716F                    3963 00124$:
                           3964 ;	../../shared/src/tx_train.c:476: else       idx_hi = *IDX;
   716F 8B 82              3965 	mov	dpl,r3
   7171 8C 83              3966 	mov	dph,r4
   7173 8D F0              3967 	mov	b,r5
   7175 12 7D C8           3968 	lcall	__gptrget
   7178 FA                 3969 	mov	r2,a
   7179 E5 18              3970 	mov	a,_bp
   717B 24 0A              3971 	add	a,#0x0a
   717D F8                 3972 	mov	r0,a
   717E A6 02              3973 	mov	@r0,ar2
   7180 02 6E B6           3974 	ljmp	00128$
   7183                    3975 00130$:
                           3976 ;	../../shared/src/tx_train.c:487: update = ((idx_lo + idx_hi)>>1) + OS - *IDX;
   7183 E5 18              3977 	mov	a,_bp
   7185 24 12              3978 	add	a,#0x12
   7187 F8                 3979 	mov	r0,a
   7188 A6 07              3980 	mov	@r0,ar7
   718A 08                 3981 	inc	r0
   718B 76 00              3982 	mov	@r0,#0x00
   718D E5 18              3983 	mov	a,_bp
   718F 24 0A              3984 	add	a,#0x0a
   7191 F8                 3985 	mov	r0,a
   7192 86 06              3986 	mov	ar6,@r0
   7194 7A 00              3987 	mov	r2,#0x00
   7196 E5 18              3988 	mov	a,_bp
   7198 24 12              3989 	add	a,#0x12
   719A F8                 3990 	mov	r0,a
   719B EE                 3991 	mov	a,r6
   719C 26                 3992 	add	a,@r0
   719D FE                 3993 	mov	r6,a
   719E EA                 3994 	mov	a,r2
   719F 08                 3995 	inc	r0
   71A0 36                 3996 	addc	a,@r0
   71A1 A2 E7              3997 	mov	c,acc.7
   71A3 13                 3998 	rrc	a
   71A4 CE                 3999 	xch	a,r6
   71A5 13                 4000 	rrc	a
   71A6 CE                 4001 	xch	a,r6
   71A7 E5 18              4002 	mov	a,_bp
   71A9 24 06              4003 	add	a,#0x06
   71AB F8                 4004 	mov	r0,a
   71AC E6                 4005 	mov	a,@r0
   71AD 2E                 4006 	add	a,r6
   71AE FE                 4007 	mov	r6,a
   71AF 8B 82              4008 	mov	dpl,r3
   71B1 8C 83              4009 	mov	dph,r4
   71B3 8D F0              4010 	mov	b,r5
   71B5 12 7D C8           4011 	lcall	__gptrget
   71B8 FB                 4012 	mov	r3,a
   71B9 EE                 4013 	mov	a,r6
   71BA C3                 4014 	clr	c
   71BB 9B                 4015 	subb	a,r3
   71BC FA                 4016 	mov	r2,a
                           4017 ;	../../shared/src/tx_train.c:488: update_g(update);
   71BD 74 D4              4018 	mov	a,#00253$
   71BF C0 E0              4019 	push	acc
   71C1 74 71              4020 	mov	a,#(00253$ >> 8)
   71C3 C0 E0              4021 	push	acc
   71C5 E5 18              4022 	mov	a,_bp
   71C7 24 F2              4023 	add	a,#0xf2
   71C9 F8                 4024 	mov	r0,a
   71CA E6                 4025 	mov	a,@r0
   71CB C0 E0              4026 	push	acc
   71CD 08                 4027 	inc	r0
   71CE E6                 4028 	mov	a,@r0
   71CF C0 E0              4029 	push	acc
   71D1 8A 82              4030 	mov	dpl,r2
   71D3 22                 4031 	ret
   71D4                    4032 00253$:
                           4033 ;	../../shared/src/tx_train.c:500: update_opt_trx_ffe();
   71D4 12 5D 77           4034 	lcall	_update_opt_trx_ffe
   71D7 85 18 81           4035 	mov	sp,_bp
   71DA D0 18              4036 	pop	_bp
   71DC 22                 4037 	ret
                           4038 ;------------------------------------------------------------
                           4039 ;Allocation info for local variables in function 'compare_g0'
                           4040 ;------------------------------------------------------------
                           4041 ;ARG                       Allocated to registers r2 
                           4042 ;sloc0                     Allocated to stack - offset 2
                           4043 ;------------------------------------------------------------
                           4044 ;	../../shared/src/tx_train.c:523: void compare_g0(void)
                           4045 ;	-----------------------------------------
                           4046 ;	 function compare_g0
                           4047 ;	-----------------------------------------
   71DD                    4048 _compare_g0:
                           4049 ;	../../shared/src/tx_train.c:525: bool ARG = (train_g0_index < opt_g0_index);
   71DD 90 60 32           4050 	mov	dptr,#_train_g0_index
   71E0 E0                 4051 	movx	a,@dptr
   71E1 FA                 4052 	mov	r2,a
   71E2 90 67 B3           4053 	mov	dptr,#_opt_g0_index
   71E5 E0                 4054 	movx	a,@dptr
   71E6 FB                 4055 	mov	r3,a
   71E7 EA                 4056 	mov	a,r2
   71E8 B5 03 00           4057 	cjne	a,ar3,00194$
   71EB                    4058 00194$:
   71EB E4                 4059 	clr	a
   71EC 33                 4060 	rlc	a
   71ED FA                 4061 	mov	r2,a
                           4062 ;	../../shared/src/tx_train.c:527: if (opt.level < train.level)
   71EE 90 66 92           4063 	mov	dptr,#(_opt + 0x0023)
   71F1 E0                 4064 	movx	a,@dptr
   71F2 FC                 4065 	mov	r4,a
   71F3 90 66 63           4066 	mov	dptr,#(_train + 0x0023)
   71F6 E0                 4067 	movx	a,@dptr
   71F7 FD                 4068 	mov	r5,a
   71F8 EC                 4069 	mov	a,r4
   71F9 B5 05 00           4070 	cjne	a,ar5,00195$
   71FC                    4071 00195$:
   71FC 50 0E              4072 	jnc	00123$
                           4073 ;	../../shared/src/tx_train.c:529: tx.ffe_updated = 1;
   71FE 90 66 9F           4074 	mov	dptr,#(_tx + 0x0001)
   7201 74 01              4075 	mov	a,#0x01
   7203 F0                 4076 	movx	@dptr,a
                           4077 ;	../../shared/src/tx_train.c:530: tx.become_worse = 0;
   7204 90 66 A7           4078 	mov	dptr,#(_tx + 0x0009)
   7207 E4                 4079 	clr	a
   7208 F0                 4080 	movx	@dptr,a
   7209 02 73 D2           4081 	ljmp	00124$
   720C                    4082 00123$:
                           4083 ;	../../shared/src/tx_train.c:532: else if (opt.level == train.level) // intra-level compare
   720C EC                 4084 	mov	a,r4
   720D B5 05 02           4085 	cjne	a,ar5,00197$
   7210 80 03              4086 	sjmp	00198$
   7212                    4087 00197$:
   7212 02 73 B8           4088 	ljmp	00120$
   7215                    4089 00198$:
                           4090 ;	../../shared/src/tx_train.c:534: if (opt.f0a >= tag_TX_F0A_HIGH_THRES)
   7215 90 66 88           4091 	mov	dptr,#(_opt + 0x0019)
   7218 E0                 4092 	movx	a,@dptr
   7219 FC                 4093 	mov	r4,a
   721A BC 32 00           4094 	cjne	r4,#0x32,00199$
   721D                    4095 00199$:
   721D E4                 4096 	clr	a
   721E 33                 4097 	rlc	a
   721F FC                 4098 	mov	r4,a
   7220 70 0D              4099 	jnz	00117$
                           4100 ;	../../shared/src/tx_train.c:536: tx.ffe_updated = ARG;
   7222 90 66 9F           4101 	mov	dptr,#(_tx + 0x0001)
   7225 EA                 4102 	mov	a,r2
   7226 F0                 4103 	movx	@dptr,a
                           4104 ;	../../shared/src/tx_train.c:537: tx.become_worse = 0;
   7227 90 66 A7           4105 	mov	dptr,#(_tx + 0x0009)
   722A E4                 4106 	clr	a
   722B F0                 4107 	movx	@dptr,a
   722C 02 73 D2           4108 	ljmp	00124$
   722F                    4109 00117$:
                           4110 ;	../../shared/src/tx_train.c:539: else if (opt.f0a < tag_TX_F0A_HIGH_THRES && train.f0a >= tag_TX_F0A_HIGH_THRES)
   722F EC                 4111 	mov	a,r4
   7230 60 16              4112 	jz	00113$
   7232 90 66 59           4113 	mov	dptr,#(_train + 0x0019)
   7235 E0                 4114 	movx	a,@dptr
   7236 FC                 4115 	mov	r4,a
   7237 BC 32 00           4116 	cjne	r4,#0x32,00202$
   723A                    4117 00202$:
   723A 40 0C              4118 	jc	00113$
                           4119 ;	../../shared/src/tx_train.c:541: tx.ffe_updated = 0;
   723C 90 66 9F           4120 	mov	dptr,#(_tx + 0x0001)
                           4121 ;	../../shared/src/tx_train.c:542: tx.become_worse = 0;
   723F E4                 4122 	clr	a
   7240 F0                 4123 	movx	@dptr,a
   7241 90 66 A7           4124 	mov	dptr,#(_tx + 0x0009)
   7244 F0                 4125 	movx	@dptr,a
   7245 02 73 D2           4126 	ljmp	00124$
   7248                    4127 00113$:
                           4128 ;	../../shared/src/tx_train.c:545: else if (train.level == 1 || train.level == 2 || train.level == 4) // level 1/2/4
   7248 BD 01 02           4129 	cjne	r5,#0x01,00204$
   724B 80 0D              4130 	sjmp	00107$
   724D                    4131 00204$:
   724D BD 02 02           4132 	cjne	r5,#0x02,00205$
   7250 80 08              4133 	sjmp	00107$
   7252                    4134 00205$:
   7252 BD 04 02           4135 	cjne	r5,#0x04,00206$
   7255 80 03              4136 	sjmp	00207$
   7257                    4137 00206$:
   7257 02 72 F8           4138 	ljmp	00108$
   725A                    4139 00207$:
   725A                    4140 00107$:
                           4141 ;	../../shared/src/tx_train.c:547: tx.ffe_updated = ((ARG && train.f0t > (opt.f0t + tag_TX_F0T_G0UPDATE_THRES))
   725A EA                 4142 	mov	a,r2
   725B 60 28              4143 	jz	00132$
   725D C0 02              4144 	push	ar2
   725F 90 66 5E           4145 	mov	dptr,#(_train + 0x001e)
   7262 E0                 4146 	movx	a,@dptr
   7263 FC                 4147 	mov	r4,a
   7264 90 66 8D           4148 	mov	dptr,#(_opt + 0x001e)
   7267 E0                 4149 	movx	a,@dptr
   7268 FE                 4150 	mov	r6,a
   7269 7F 00              4151 	mov	r7,#0x00
   726B 74 0A              4152 	mov	a,#0x0A
   726D 2E                 4153 	add	a,r6
   726E FE                 4154 	mov	r6,a
   726F E4                 4155 	clr	a
   7270 3F                 4156 	addc	a,r7
   7271 FF                 4157 	mov	r7,a
   7272 7A 00              4158 	mov	r2,#0x00
   7274 C3                 4159 	clr	c
   7275 EE                 4160 	mov	a,r6
   7276 9C                 4161 	subb	a,r4
   7277 EF                 4162 	mov	a,r7
   7278 64 80              4163 	xrl	a,#0x80
   727A 8A F0              4164 	mov	b,r2
   727C 63 F0 80           4165 	xrl	b,#0x80
   727F 95 F0              4166 	subb	a,b
   7281 D0 02              4167 	pop	ar2
   7283 40 04              4168 	jc	00133$
   7285                    4169 00132$:
   7285 7C 00              4170 	mov	r4,#0x00
   7287 80 02              4171 	sjmp	00134$
   7289                    4172 00133$:
   7289 7C 01              4173 	mov	r4,#0x01
   728B                    4174 00134$:
   728B EC                 4175 	mov	a,r4
   728C 70 32              4176 	jnz	00130$
                           4177 ;	../../shared/src/tx_train.c:548: || (ARG==0 && train.f0t > (opt.f0t - tag_TX_F0T_G0UPDATE_THRES)) );
   728E BA 00 23           4178 	cjne	r2,#0x00,00135$
   7291 90 66 5E           4179 	mov	dptr,#(_train + 0x001e)
   7294 E0                 4180 	movx	a,@dptr
   7295 FC                 4181 	mov	r4,a
   7296 90 66 8D           4182 	mov	dptr,#(_opt + 0x001e)
   7299 E0                 4183 	movx	a,@dptr
   729A 7F 00              4184 	mov	r7,#0x00
   729C 24 F6              4185 	add	a,#0xf6
   729E FA                 4186 	mov	r2,a
   729F EF                 4187 	mov	a,r7
   72A0 34 FF              4188 	addc	a,#0xff
   72A2 FB                 4189 	mov	r3,a
   72A3 7E 00              4190 	mov	r6,#0x00
   72A5 C3                 4191 	clr	c
   72A6 EA                 4192 	mov	a,r2
   72A7 9C                 4193 	subb	a,r4
   72A8 EB                 4194 	mov	a,r3
   72A9 64 80              4195 	xrl	a,#0x80
   72AB 8E F0              4196 	mov	b,r6
   72AD 63 F0 80           4197 	xrl	b,#0x80
   72B0 95 F0              4198 	subb	a,b
   72B2 40 04              4199 	jc	00136$
   72B4                    4200 00135$:
   72B4 7C 00              4201 	mov	r4,#0x00
   72B6 80 02              4202 	sjmp	00137$
   72B8                    4203 00136$:
   72B8 7C 01              4204 	mov	r4,#0x01
   72BA                    4205 00137$:
   72BA EC                 4206 	mov	a,r4
   72BB 70 03              4207 	jnz	00130$
   72BD FC                 4208 	mov	r4,a
   72BE 80 02              4209 	sjmp	00131$
   72C0                    4210 00130$:
   72C0 7C 01              4211 	mov	r4,#0x01
   72C2                    4212 00131$:
   72C2 90 66 9F           4213 	mov	dptr,#(_tx + 0x0001)
   72C5 EC                 4214 	mov	a,r4
   72C6 F0                 4215 	movx	@dptr,a
                           4216 ;	../../shared/src/tx_train.c:549: tx.become_worse = (tag_TX_STOP_IF_WORSE && train.f0t < (opt.f0t - tag_TX_STOP_THRES));
   72C7 90 66 5E           4217 	mov	dptr,#(_train + 0x001e)
   72CA E0                 4218 	movx	a,@dptr
   72CB FC                 4219 	mov	r4,a
   72CC 90 66 8D           4220 	mov	dptr,#(_opt + 0x001e)
   72CF E0                 4221 	movx	a,@dptr
   72D0 7F 00              4222 	mov	r7,#0x00
   72D2 24 F6              4223 	add	a,#0xf6
   72D4 FA                 4224 	mov	r2,a
   72D5 EF                 4225 	mov	a,r7
   72D6 34 FF              4226 	addc	a,#0xff
   72D8 FB                 4227 	mov	r3,a
   72D9 7E 00              4228 	mov	r6,#0x00
   72DB C3                 4229 	clr	c
   72DC EC                 4230 	mov	a,r4
   72DD 9A                 4231 	subb	a,r2
   72DE EE                 4232 	mov	a,r6
   72DF 64 80              4233 	xrl	a,#0x80
   72E1 8B F0              4234 	mov	b,r3
   72E3 63 F0 80           4235 	xrl	b,#0x80
   72E6 95 F0              4236 	subb	a,b
   72E8 40 04              4237 	jc	00139$
   72EA 7C 00              4238 	mov	r4,#0x00
   72EC 80 02              4239 	sjmp	00140$
   72EE                    4240 00139$:
   72EE 7C 01              4241 	mov	r4,#0x01
   72F0                    4242 00140$:
   72F0 90 66 A7           4243 	mov	dptr,#(_tx + 0x0009)
   72F3 EC                 4244 	mov	a,r4
   72F4 F0                 4245 	movx	@dptr,a
   72F5 02 73 D2           4246 	ljmp	00124$
   72F8                    4247 00108$:
                           4248 ;	../../shared/src/tx_train.c:551: else if (train.level == 3) // level 3
   72F8 BD 03 02           4249 	cjne	r5,#0x03,00216$
   72FB 80 03              4250 	sjmp	00217$
   72FD                    4251 00216$:
   72FD 02 73 8E           4252 	ljmp	00105$
   7300                    4253 00217$:
                           4254 ;	../../shared/src/tx_train.c:553: tx.ffe_updated = (
                           4255 ;	../../shared/src/tx_train.c:554: (train.f0a_saturate==0 && opt.f0a_saturate && train.dfe_saturate == opt.dfe_saturate) 
   7300 90 66 66           4256 	mov	dptr,#(_train + 0x0026)
   7303 E0                 4257 	movx	a,@dptr
   7304 FC                 4258 	mov	r4,a
   7305 70 06              4259 	jnz	00150$
   7307 90 66 95           4260 	mov	dptr,#(_opt + 0x0026)
   730A E0                 4261 	movx	a,@dptr
   730B 70 04              4262 	jnz	00151$
   730D                    4263 00150$:
   730D 7E 00              4264 	mov	r6,#0x00
   730F 80 02              4265 	sjmp	00152$
   7311                    4266 00151$:
   7311 7E 01              4267 	mov	r6,#0x01
   7313                    4268 00152$:
   7313 EE                 4269 	mov	a,r6
   7314 60 10              4270 	jz	00147$
   7316 90 66 67           4271 	mov	dptr,#(_train + 0x0027)
   7319 E0                 4272 	movx	a,@dptr
   731A FE                 4273 	mov	r6,a
   731B 90 66 96           4274 	mov	dptr,#(_opt + 0x0027)
   731E E0                 4275 	movx	a,@dptr
   731F FF                 4276 	mov	r7,a
   7320 EE                 4277 	mov	a,r6
   7321 B5 07 02           4278 	cjne	a,ar7,00222$
   7324 80 04              4279 	sjmp	00148$
   7326                    4280 00222$:
   7326                    4281 00147$:
   7326 7E 00              4282 	mov	r6,#0x00
   7328 80 02              4283 	sjmp	00149$
   732A                    4284 00148$:
   732A 7E 01              4285 	mov	r6,#0x01
   732C                    4286 00149$:
   732C EE                 4287 	mov	a,r6
   732D 70 2B              4288 	jnz	00145$
                           4289 ;	../../shared/src/tx_train.c:555: || (train.f0a_saturate == opt.f0a_saturate && train.dfe_saturate==0 && opt.dfe_saturate)
   732F 90 66 95           4290 	mov	dptr,#(_opt + 0x0026)
   7332 E0                 4291 	movx	a,@dptr
   7333 FE                 4292 	mov	r6,a
   7334 EC                 4293 	mov	a,r4
   7335 B5 06 07           4294 	cjne	a,ar6,00156$
   7338 90 66 67           4295 	mov	dptr,#(_train + 0x0027)
   733B E0                 4296 	movx	a,@dptr
   733C FE                 4297 	mov	r6,a
   733D 60 04              4298 	jz	00157$
   733F                    4299 00156$:
   733F 7E 00              4300 	mov	r6,#0x00
   7341 80 02              4301 	sjmp	00158$
   7343                    4302 00157$:
   7343 7E 01              4303 	mov	r6,#0x01
   7345                    4304 00158$:
   7345 EE                 4305 	mov	a,r6
   7346 60 06              4306 	jz	00153$
   7348 90 66 96           4307 	mov	dptr,#(_opt + 0x0027)
   734B E0                 4308 	movx	a,@dptr
   734C 70 04              4309 	jnz	00154$
   734E                    4310 00153$:
   734E 7E 00              4311 	mov	r6,#0x00
   7350 80 02              4312 	sjmp	00155$
   7352                    4313 00154$:
   7352 7E 01              4314 	mov	r6,#0x01
   7354                    4315 00155$:
   7354 EE                 4316 	mov	a,r6
   7355 70 03              4317 	jnz	00145$
   7357 FE                 4318 	mov	r6,a
   7358 80 02              4319 	sjmp	00146$
   735A                    4320 00145$:
   735A 7E 01              4321 	mov	r6,#0x01
   735C                    4322 00146$:
   735C EE                 4323 	mov	a,r6
   735D 70 21              4324 	jnz	00142$
                           4325 ;	../../shared/src/tx_train.c:556: || (train.f0a_saturate && opt.f0a_saturate && ARG));
   735F EC                 4326 	mov	a,r4
   7360 60 06              4327 	jz	00162$
   7362 90 66 95           4328 	mov	dptr,#(_opt + 0x0026)
   7365 E0                 4329 	movx	a,@dptr
   7366 70 04              4330 	jnz	00163$
   7368                    4331 00162$:
   7368 7C 00              4332 	mov	r4,#0x00
   736A 80 02              4333 	sjmp	00164$
   736C                    4334 00163$:
   736C 7C 01              4335 	mov	r4,#0x01
   736E                    4336 00164$:
   736E EC                 4337 	mov	a,r4
   736F 60 03              4338 	jz	00159$
   7371 EA                 4339 	mov	a,r2
   7372 70 04              4340 	jnz	00160$
   7374                    4341 00159$:
   7374 7A 00              4342 	mov	r2,#0x00
   7376 80 02              4343 	sjmp	00161$
   7378                    4344 00160$:
   7378 7A 01              4345 	mov	r2,#0x01
   737A                    4346 00161$:
   737A EA                 4347 	mov	a,r2
   737B 70 03              4348 	jnz	00142$
   737D FA                 4349 	mov	r2,a
   737E 80 02              4350 	sjmp	00143$
   7380                    4351 00142$:
   7380 7A 01              4352 	mov	r2,#0x01
   7382                    4353 00143$:
   7382 90 66 9F           4354 	mov	dptr,#(_tx + 0x0001)
   7385 EA                 4355 	mov	a,r2
   7386 F0                 4356 	movx	@dptr,a
                           4357 ;	../../shared/src/tx_train.c:557: tx.become_worse = 0;
   7387 90 66 A7           4358 	mov	dptr,#(_tx + 0x0009)
   738A E4                 4359 	clr	a
   738B F0                 4360 	movx	@dptr,a
   738C 80 44              4361 	sjmp	00124$
   738E                    4362 00105$:
                           4363 ;	../../shared/src/tx_train.c:559: else if (train.level == 0) // for level 0
   738E ED                 4364 	mov	a,r5
   738F 70 1C              4365 	jnz	00102$
                           4366 ;	../../shared/src/tx_train.c:561: tx.ffe_updated = (train_g0_index < opt_g0_index)==0; //g0 only
   7391 90 60 32           4367 	mov	dptr,#_train_g0_index
   7394 E0                 4368 	movx	a,@dptr
   7395 FA                 4369 	mov	r2,a
   7396 B5 03 00           4370 	cjne	a,ar3,00237$
   7399                    4371 00237$:
   7399 E4                 4372 	clr	a
   739A 33                 4373 	rlc	a
   739B FB                 4374 	mov	r3,a
   739C E4                 4375 	clr	a
   739D BB 00 01           4376 	cjne	r3,#0x00,00238$
   73A0 04                 4377 	inc	a
   73A1                    4378 00238$:
   73A1 FB                 4379 	mov	r3,a
   73A2 90 66 9F           4380 	mov	dptr,#(_tx + 0x0001)
   73A5 F0                 4381 	movx	@dptr,a
                           4382 ;	../../shared/src/tx_train.c:562: tx.become_worse = 0;
   73A6 90 66 A7           4383 	mov	dptr,#(_tx + 0x0009)
   73A9 E4                 4384 	clr	a
   73AA F0                 4385 	movx	@dptr,a
   73AB 80 25              4386 	sjmp	00124$
   73AD                    4387 00102$:
                           4388 ;	../../shared/src/tx_train.c:566: tx.ffe_updated = 0;
   73AD 90 66 9F           4389 	mov	dptr,#(_tx + 0x0001)
                           4390 ;	../../shared/src/tx_train.c:567: tx.become_worse = 0; // g1/n1: tag_TX_STOP_IF_WORSE
   73B0 E4                 4391 	clr	a
   73B1 F0                 4392 	movx	@dptr,a
   73B2 90 66 A7           4393 	mov	dptr,#(_tx + 0x0009)
   73B5 F0                 4394 	movx	@dptr,a
   73B6 80 1A              4395 	sjmp	00124$
   73B8                    4396 00120$:
                           4397 ;	../../shared/src/tx_train.c:572: tx.ffe_updated = 0;
   73B8 90 66 9F           4398 	mov	dptr,#(_tx + 0x0001)
   73BB E4                 4399 	clr	a
   73BC F0                 4400 	movx	@dptr,a
                           4401 ;	../../shared/src/tx_train.c:573: tx.become_worse = (tag_TX_STOP_IF_WORSE && opt.f0a < tag_TX_F0A_HIGH_THRES);
   73BD 90 66 88           4402 	mov	dptr,#(_opt + 0x0019)
   73C0 E0                 4403 	movx	a,@dptr
   73C1 FA                 4404 	mov	r2,a
   73C2 BA 32 00           4405 	cjne	r2,#0x32,00240$
   73C5                    4406 00240$:
   73C5 40 04              4407 	jc	00166$
   73C7 7A 00              4408 	mov	r2,#0x00
   73C9 80 02              4409 	sjmp	00167$
   73CB                    4410 00166$:
   73CB 7A 01              4411 	mov	r2,#0x01
   73CD                    4412 00167$:
   73CD 90 66 A7           4413 	mov	dptr,#(_tx + 0x0009)
   73D0 EA                 4414 	mov	a,r2
   73D1 F0                 4415 	movx	@dptr,a
   73D2                    4416 00124$:
                           4417 ;	../../shared/src/tx_train.c:576: if (tx.ffe_updated)
   73D2 90 66 9F           4418 	mov	dptr,#(_tx + 0x0001)
   73D5 E0                 4419 	movx	a,@dptr
   73D6 60 03              4420 	jz	00127$
                           4421 ;	../../shared/src/tx_train.c:578: update_opt_trx_ffe(); // update the memory of Opt
   73D8 02 5D 77           4422 	ljmp	_update_opt_trx_ffe
   73DB                    4423 00127$:
   73DB 22                 4424 	ret
                           4425 ;------------------------------------------------------------
                           4426 ;Allocation info for local variables in function 'compare_g1n1'
                           4427 ;------------------------------------------------------------
                           4428 ;X                         Allocated to registers r2 
                           4429 ;UTH                       Allocated to stack - offset 1
                           4430 ;OBEN                      Allocated to stack - offset 2
                           4431 ;OBTH                      Allocated to stack - offset 3
                           4432 ;OBUTH                     Allocated to registers r5 
                           4433 ;Train_Index_is_big        Allocated to stack - offset 4
                           4434 ;sloc0                     Allocated to stack - offset 5
                           4435 ;------------------------------------------------------------
                           4436 ;	../../shared/src/tx_train.c:604: void compare_g1n1(uint8_t X)
                           4437 ;	-----------------------------------------
                           4438 ;	 function compare_g1n1
                           4439 ;	-----------------------------------------
   73DC                    4440 _compare_g1n1:
   73DC C0 18              4441 	push	_bp
   73DE E5 81              4442 	mov	a,sp
   73E0 F5 18              4443 	mov	_bp,a
   73E2 24 06              4444 	add	a,#0x06
   73E4 F5 81              4445 	mov	sp,a
                           4446 ;	../../shared/src/tx_train.c:611: if(X){ // G1
   73E6 E5 82              4447 	mov	a,dpl
   73E8 FA                 4448 	mov	r2,a
   73E9 60 32              4449 	jz	00102$
                           4450 ;	../../shared/src/tx_train.c:612: UTH = tag_TX_F0T_G1UPDATE_THRES;
   73EB A8 18              4451 	mov	r0,_bp
   73ED 08                 4452 	inc	r0
   73EE 76 00              4453 	mov	@r0,#0x00
                           4454 ;	../../shared/src/tx_train.c:613: OBEN = tag_TX_G1_OVERBOOST_EN;
   73F0 A8 18              4455 	mov	r0,_bp
   73F2 08                 4456 	inc	r0
   73F3 08                 4457 	inc	r0
   73F4 76 01              4458 	mov	@r0,#0x01
                           4459 ;	../../shared/src/tx_train.c:614: OBTH = tag_TX_G1_OVERBOOST_THRES;
   73F6 E5 18              4460 	mov	a,_bp
   73F8 24 03              4461 	add	a,#0x03
   73FA F8                 4462 	mov	r0,a
   73FB 76 03              4463 	mov	@r0,#0x03
                           4464 ;	../../shared/src/tx_train.c:615: OBUTH = tag_TX_G1_OVERBOOST_UPDATE_THRES;
   73FD 7D 04              4465 	mov	r5,#0x04
                           4466 ;	../../shared/src/tx_train.c:616: Train_Index_is_big = (train_g1_index > opt_g1_index) ? 1:0;
   73FF 90 60 31           4467 	mov	dptr,#_train_g1_index
   7402 E0                 4468 	movx	a,@dptr
   7403 FE                 4469 	mov	r6,a
   7404 90 67 B5           4470 	mov	dptr,#_opt_g1_index
   7407 E0                 4471 	movx	a,@dptr
   7408 FF                 4472 	mov	r7,a
   7409 B5 06 00           4473 	cjne	a,ar6,00251$
   740C                    4474 00251$:
   740C 50 04              4475 	jnc	00122$
   740E 7E 01              4476 	mov	r6,#0x01
   7410 80 02              4477 	sjmp	00123$
   7412                    4478 00122$:
   7412 7E 00              4479 	mov	r6,#0x00
   7414                    4480 00123$:
   7414 E5 18              4481 	mov	a,_bp
   7416 24 04              4482 	add	a,#0x04
   7418 F8                 4483 	mov	r0,a
   7419 A6 06              4484 	mov	@r0,ar6
   741B 80 30              4485 	sjmp	00103$
   741D                    4486 00102$:
                           4487 ;	../../shared/src/tx_train.c:618: UTH = tag_TX_F0T_GN1UPDATE_THRES;
   741D A8 18              4488 	mov	r0,_bp
   741F 08                 4489 	inc	r0
   7420 76 00              4490 	mov	@r0,#0x00
                           4491 ;	../../shared/src/tx_train.c:619: OBEN = tag_TX_GN1_OVERBOOST_EN;
   7422 A8 18              4492 	mov	r0,_bp
   7424 08                 4493 	inc	r0
   7425 08                 4494 	inc	r0
   7426 76 01              4495 	mov	@r0,#0x01
                           4496 ;	../../shared/src/tx_train.c:620: OBTH = tag_TX_GN1_OVERBOOST_THRES;
   7428 E5 18              4497 	mov	a,_bp
   742A 24 03              4498 	add	a,#0x03
   742C F8                 4499 	mov	r0,a
   742D 76 03              4500 	mov	@r0,#0x03
                           4501 ;	../../shared/src/tx_train.c:621: OBUTH = tag_TX_GN1_OVERBOOST_UPDATE_THRES;
   742F 7D 04              4502 	mov	r5,#0x04
                           4503 ;	../../shared/src/tx_train.c:622: Train_Index_is_big = (train_gn1_index > opt_gn1_index) ? 1:0;
   7431 90 60 30           4504 	mov	dptr,#_train_gn1_index
   7434 E0                 4505 	movx	a,@dptr
   7435 FF                 4506 	mov	r7,a
   7436 90 67 B4           4507 	mov	dptr,#_opt_gn1_index
   7439 E0                 4508 	movx	a,@dptr
   743A FA                 4509 	mov	r2,a
   743B B5 07 00           4510 	cjne	a,ar7,00253$
   743E                    4511 00253$:
   743E 50 04              4512 	jnc	00124$
   7440 7A 01              4513 	mov	r2,#0x01
   7442 80 02              4514 	sjmp	00125$
   7444                    4515 00124$:
   7444 7A 00              4516 	mov	r2,#0x00
   7446                    4517 00125$:
   7446 E5 18              4518 	mov	a,_bp
   7448 24 04              4519 	add	a,#0x04
   744A F8                 4520 	mov	r0,a
   744B A6 02              4521 	mov	@r0,ar2
   744D                    4522 00103$:
                           4523 ;	../../shared/src/tx_train.c:625: if (opt.level < train.level)
   744D 90 66 92           4524 	mov	dptr,#(_opt + 0x0023)
   7450 E0                 4525 	movx	a,@dptr
   7451 FA                 4526 	mov	r2,a
   7452 90 66 63           4527 	mov	dptr,#(_train + 0x0023)
   7455 E0                 4528 	movx	a,@dptr
   7456 FF                 4529 	mov	r7,a
   7457 EA                 4530 	mov	a,r2
   7458 B5 07 00           4531 	cjne	a,ar7,00255$
   745B                    4532 00255$:
   745B 50 0E              4533 	jnc	00116$
                           4534 ;	../../shared/src/tx_train.c:627: tx.ffe_updated = 1;
   745D 90 66 9F           4535 	mov	dptr,#(_tx + 0x0001)
   7460 74 01              4536 	mov	a,#0x01
   7462 F0                 4537 	movx	@dptr,a
                           4538 ;	../../shared/src/tx_train.c:628: tx.become_worse = 0;
   7463 90 66 A7           4539 	mov	dptr,#(_tx + 0x0009)
   7466 E4                 4540 	clr	a
   7467 F0                 4541 	movx	@dptr,a
   7468 02 77 76           4542 	ljmp	00117$
   746B                    4543 00116$:
                           4544 ;	../../shared/src/tx_train.c:630: else if (opt.level == train.level) // intra-level compare
   746B EA                 4545 	mov	a,r2
   746C B5 07 02           4546 	cjne	a,ar7,00257$
   746F 80 03              4547 	sjmp	00258$
   7471                    4548 00257$:
   7471 02 77 6B           4549 	ljmp	00113$
   7474                    4550 00258$:
                           4551 ;	../../shared/src/tx_train.c:632: tx.train_overboost = OBEN && ((train.f0 < 63 && train.fn1 < OBTH) || (train.f0 >= 63 && train.f0a >= 63));
   7474 A8 18              4552 	mov	r0,_bp
   7476 08                 4553 	inc	r0
   7477 08                 4554 	inc	r0
   7478 E6                 4555 	mov	a,@r0
   7479 60 63              4556 	jz	00126$
   747B 90 66 5A           4557 	mov	dptr,#(_train + 0x001a)
   747E E0                 4558 	movx	a,@dptr
   747F FA                 4559 	mov	r2,a
   7480 BA 3F 00           4560 	cjne	r2,#0x3F,00260$
   7483                    4561 00260$:
   7483 E4                 4562 	clr	a
   7484 33                 4563 	rlc	a
   7485 FA                 4564 	mov	r2,a
   7486 60 25              4565 	jz	00132$
   7488 C0 02              4566 	push	ar2
   748A 90 66 5D           4567 	mov	dptr,#(_train + 0x001d)
   748D E0                 4568 	movx	a,@dptr
   748E FA                 4569 	mov	r2,a
   748F 33                 4570 	rlc	a
   7490 95 E0              4571 	subb	a,acc
   7492 FE                 4572 	mov	r6,a
   7493 E5 18              4573 	mov	a,_bp
   7495 24 03              4574 	add	a,#0x03
   7497 F8                 4575 	mov	r0,a
   7498 86 04              4576 	mov	ar4,@r0
   749A 7B 00              4577 	mov	r3,#0x00
   749C C3                 4578 	clr	c
   749D EA                 4579 	mov	a,r2
   749E 9C                 4580 	subb	a,r4
   749F EE                 4581 	mov	a,r6
   74A0 64 80              4582 	xrl	a,#0x80
   74A2 8B F0              4583 	mov	b,r3
   74A4 63 F0 80           4584 	xrl	b,#0x80
   74A7 95 F0              4585 	subb	a,b
   74A9 D0 02              4586 	pop	ar2
   74AB 40 04              4587 	jc	00133$
   74AD                    4588 00132$:
   74AD 7B 00              4589 	mov	r3,#0x00
   74AF 80 02              4590 	sjmp	00134$
   74B1                    4591 00133$:
   74B1 7B 01              4592 	mov	r3,#0x01
   74B3                    4593 00134$:
   74B3 EB                 4594 	mov	a,r3
   74B4 70 23              4595 	jnz	00130$
   74B6 EA                 4596 	mov	a,r2
   74B7 B4 01 00           4597 	cjne	a,#0x01,00264$
   74BA                    4598 00264$:
   74BA E4                 4599 	clr	a
   74BB 33                 4600 	rlc	a
   74BC FA                 4601 	mov	r2,a
   74BD 60 0E              4602 	jz	00135$
   74BF 90 66 59           4603 	mov	dptr,#(_train + 0x0019)
   74C2 E0                 4604 	movx	a,@dptr
   74C3 FA                 4605 	mov	r2,a
   74C4 BA 3F 00           4606 	cjne	r2,#0x3F,00266$
   74C7                    4607 00266$:
   74C7 B3                 4608 	cpl	c
   74C8 E4                 4609 	clr	a
   74C9 33                 4610 	rlc	a
   74CA FA                 4611 	mov	r2,a
   74CB 70 04              4612 	jnz	00136$
   74CD                    4613 00135$:
   74CD 7A 00              4614 	mov	r2,#0x00
   74CF 80 02              4615 	sjmp	00137$
   74D1                    4616 00136$:
   74D1 7A 01              4617 	mov	r2,#0x01
   74D3                    4618 00137$:
   74D3 EA                 4619 	mov	a,r2
   74D4 70 03              4620 	jnz	00130$
   74D6 FA                 4621 	mov	r2,a
   74D7 80 02              4622 	sjmp	00131$
   74D9                    4623 00130$:
   74D9 7A 01              4624 	mov	r2,#0x01
   74DB                    4625 00131$:
   74DB EA                 4626 	mov	a,r2
   74DC 70 04              4627 	jnz	00127$
   74DE                    4628 00126$:
   74DE 7A 00              4629 	mov	r2,#0x00
   74E0 80 02              4630 	sjmp	00128$
   74E2                    4631 00127$:
   74E2 7A 01              4632 	mov	r2,#0x01
   74E4                    4633 00128$:
   74E4 90 66 AA           4634 	mov	dptr,#(_tx + 0x000c)
   74E7 EA                 4635 	mov	a,r2
   74E8 F0                 4636 	movx	@dptr,a
                           4637 ;	../../shared/src/tx_train.c:633: tx.opt_overboost = OBEN && ((opt.f0 < 63 && opt.fn1 < OBTH) || (opt.f0 >= 63 && opt.f0a >= 63));
   74E9 A8 18              4638 	mov	r0,_bp
   74EB 08                 4639 	inc	r0
   74EC 08                 4640 	inc	r0
   74ED E6                 4641 	mov	a,@r0
   74EE 60 63              4642 	jz	00138$
   74F0 90 66 89           4643 	mov	dptr,#(_opt + 0x001a)
   74F3 E0                 4644 	movx	a,@dptr
   74F4 FA                 4645 	mov	r2,a
   74F5 BA 3F 00           4646 	cjne	r2,#0x3F,00272$
   74F8                    4647 00272$:
   74F8 E4                 4648 	clr	a
   74F9 33                 4649 	rlc	a
   74FA FA                 4650 	mov	r2,a
   74FB 60 25              4651 	jz	00144$
   74FD C0 02              4652 	push	ar2
   74FF 90 66 8C           4653 	mov	dptr,#(_opt + 0x001d)
   7502 E0                 4654 	movx	a,@dptr
   7503 FB                 4655 	mov	r3,a
   7504 33                 4656 	rlc	a
   7505 95 E0              4657 	subb	a,acc
   7507 FC                 4658 	mov	r4,a
   7508 E5 18              4659 	mov	a,_bp
   750A 24 03              4660 	add	a,#0x03
   750C F8                 4661 	mov	r0,a
   750D 86 06              4662 	mov	ar6,@r0
   750F 7A 00              4663 	mov	r2,#0x00
   7511 C3                 4664 	clr	c
   7512 EB                 4665 	mov	a,r3
   7513 9E                 4666 	subb	a,r6
   7514 EC                 4667 	mov	a,r4
   7515 64 80              4668 	xrl	a,#0x80
   7517 8A F0              4669 	mov	b,r2
   7519 63 F0 80           4670 	xrl	b,#0x80
   751C 95 F0              4671 	subb	a,b
   751E D0 02              4672 	pop	ar2
   7520 40 04              4673 	jc	00145$
   7522                    4674 00144$:
   7522 7B 00              4675 	mov	r3,#0x00
   7524 80 02              4676 	sjmp	00146$
   7526                    4677 00145$:
   7526 7B 01              4678 	mov	r3,#0x01
   7528                    4679 00146$:
   7528 EB                 4680 	mov	a,r3
   7529 70 23              4681 	jnz	00142$
   752B EA                 4682 	mov	a,r2
   752C B4 01 00           4683 	cjne	a,#0x01,00276$
   752F                    4684 00276$:
   752F E4                 4685 	clr	a
   7530 33                 4686 	rlc	a
   7531 FA                 4687 	mov	r2,a
   7532 60 0E              4688 	jz	00147$
   7534 90 66 88           4689 	mov	dptr,#(_opt + 0x0019)
   7537 E0                 4690 	movx	a,@dptr
   7538 FA                 4691 	mov	r2,a
   7539 BA 3F 00           4692 	cjne	r2,#0x3F,00278$
   753C                    4693 00278$:
   753C B3                 4694 	cpl	c
   753D E4                 4695 	clr	a
   753E 33                 4696 	rlc	a
   753F FA                 4697 	mov	r2,a
   7540 70 04              4698 	jnz	00148$
   7542                    4699 00147$:
   7542 7A 00              4700 	mov	r2,#0x00
   7544 80 02              4701 	sjmp	00149$
   7546                    4702 00148$:
   7546 7A 01              4703 	mov	r2,#0x01
   7548                    4704 00149$:
   7548 EA                 4705 	mov	a,r2
   7549 70 03              4706 	jnz	00142$
   754B FA                 4707 	mov	r2,a
   754C 80 02              4708 	sjmp	00143$
   754E                    4709 00142$:
   754E 7A 01              4710 	mov	r2,#0x01
   7550                    4711 00143$:
   7550 EA                 4712 	mov	a,r2
   7551 70 04              4713 	jnz	00139$
   7553                    4714 00138$:
   7553 7A 00              4715 	mov	r2,#0x00
   7555 80 02              4716 	sjmp	00140$
   7557                    4717 00139$:
   7557 7A 01              4718 	mov	r2,#0x01
   7559                    4719 00140$:
   7559 90 66 AB           4720 	mov	dptr,#(_tx + 0x000d)
   755C EA                 4721 	mov	a,r2
   755D F0                 4722 	movx	@dptr,a
                           4723 ;	../../shared/src/tx_train.c:635: if (train.level == 1 || train.level == 2 || train.level == 4) // level 1/2/4
   755E BF 01 02           4724 	cjne	r7,#0x01,00283$
   7561 80 0D              4725 	sjmp	00107$
   7563                    4726 00283$:
   7563 BF 02 02           4727 	cjne	r7,#0x02,00284$
   7566 80 08              4728 	sjmp	00107$
   7568                    4729 00284$:
   7568 BF 04 02           4730 	cjne	r7,#0x04,00285$
   756B 80 03              4731 	sjmp	00286$
   756D                    4732 00285$:
   756D 02 76 94           4733 	ljmp	00108$
   7570                    4734 00286$:
   7570                    4735 00107$:
                           4736 ;	../../shared/src/tx_train.c:637: tx.ffe_updated = (train.f0t > (opt.f0t + UTH))
   7570 C0 05              4737 	push	ar5
   7572 90 66 5E           4738 	mov	dptr,#(_train + 0x001e)
   7575 E0                 4739 	movx	a,@dptr
   7576 FA                 4740 	mov	r2,a
   7577 90 66 8D           4741 	mov	dptr,#(_opt + 0x001e)
   757A E0                 4742 	movx	a,@dptr
   757B FB                 4743 	mov	r3,a
   757C 7C 00              4744 	mov	r4,#0x00
   757E A8 18              4745 	mov	r0,_bp
   7580 08                 4746 	inc	r0
   7581 86 06              4747 	mov	ar6,@r0
   7583 7D 00              4748 	mov	r5,#0x00
   7585 EE                 4749 	mov	a,r6
   7586 2B                 4750 	add	a,r3
   7587 FE                 4751 	mov	r6,a
   7588 ED                 4752 	mov	a,r5
   7589 3C                 4753 	addc	a,r4
   758A FD                 4754 	mov	r5,a
   758B E5 18              4755 	mov	a,_bp
   758D 24 05              4756 	add	a,#0x05
   758F F8                 4757 	mov	r0,a
   7590 A6 02              4758 	mov	@r0,ar2
   7592 08                 4759 	inc	r0
   7593 76 00              4760 	mov	@r0,#0x00
   7595 E5 18              4761 	mov	a,_bp
   7597 24 05              4762 	add	a,#0x05
   7599 F8                 4763 	mov	r0,a
   759A C3                 4764 	clr	c
   759B EE                 4765 	mov	a,r6
   759C 96                 4766 	subb	a,@r0
   759D ED                 4767 	mov	a,r5
   759E 64 80              4768 	xrl	a,#0x80
   75A0 08                 4769 	inc	r0
   75A1 86 F0              4770 	mov	b,@r0
   75A3 63 F0 80           4771 	xrl	b,#0x80
   75A6 95 F0              4772 	subb	a,b
   75A8 D0 05              4773 	pop	ar5
   75AA 40 42              4774 	jc	00154$
                           4775 ;	../../shared/src/tx_train.c:638: || (tx.train_overboost==0 && tx.opt_overboost && train.f0t > (opt.f0t - OBUTH))
   75AC 90 66 AA           4776 	mov	dptr,#(_tx + 0x000c)
   75AF E0                 4777 	movx	a,@dptr
   75B0 FA                 4778 	mov	r2,a
   75B1 70 06              4779 	jnz	00159$
   75B3 90 66 AB           4780 	mov	dptr,#(_tx + 0x000d)
   75B6 E0                 4781 	movx	a,@dptr
   75B7 70 04              4782 	jnz	00160$
   75B9                    4783 00159$:
   75B9 7A 00              4784 	mov	r2,#0x00
   75BB 80 02              4785 	sjmp	00161$
   75BD                    4786 00160$:
   75BD 7A 01              4787 	mov	r2,#0x01
   75BF                    4788 00161$:
   75BF EA                 4789 	mov	a,r2
   75C0 60 20              4790 	jz	00156$
   75C2 8D 02              4791 	mov	ar2,r5
   75C4 7E 00              4792 	mov	r6,#0x00
   75C6 EB                 4793 	mov	a,r3
   75C7 C3                 4794 	clr	c
   75C8 9A                 4795 	subb	a,r2
   75C9 FA                 4796 	mov	r2,a
   75CA EC                 4797 	mov	a,r4
   75CB 9E                 4798 	subb	a,r6
   75CC FE                 4799 	mov	r6,a
   75CD E5 18              4800 	mov	a,_bp
   75CF 24 05              4801 	add	a,#0x05
   75D1 F8                 4802 	mov	r0,a
   75D2 C3                 4803 	clr	c
   75D3 EA                 4804 	mov	a,r2
   75D4 96                 4805 	subb	a,@r0
   75D5 EE                 4806 	mov	a,r6
   75D6 64 80              4807 	xrl	a,#0x80
   75D8 08                 4808 	inc	r0
   75D9 86 F0              4809 	mov	b,@r0
   75DB 63 F0 80           4810 	xrl	b,#0x80
   75DE 95 F0              4811 	subb	a,b
   75E0 40 04              4812 	jc	00157$
   75E2                    4813 00156$:
   75E2 7A 00              4814 	mov	r2,#0x00
   75E4 80 02              4815 	sjmp	00158$
   75E6                    4816 00157$:
   75E6 7A 01              4817 	mov	r2,#0x01
   75E8                    4818 00158$:
   75E8 EA                 4819 	mov	a,r2
   75E9 70 03              4820 	jnz	00154$
   75EB FA                 4821 	mov	r2,a
   75EC 80 02              4822 	sjmp	00155$
   75EE                    4823 00154$:
   75EE 7A 01              4824 	mov	r2,#0x01
   75F0                    4825 00155$:
   75F0 EA                 4826 	mov	a,r2
   75F1 70 52              4827 	jnz	00151$
                           4828 ;	../../shared/src/tx_train.c:639: || (tx.train_overboost && tx.opt_overboost && Train_Index_is_big && train.f0t > (opt.f0t - OBUTH));
   75F3 90 66 AA           4829 	mov	dptr,#(_tx + 0x000c)
   75F6 E0                 4830 	movx	a,@dptr
   75F7 60 06              4831 	jz	00168$
   75F9 90 66 AB           4832 	mov	dptr,#(_tx + 0x000d)
   75FC E0                 4833 	movx	a,@dptr
   75FD 70 04              4834 	jnz	00169$
   75FF                    4835 00168$:
   75FF 7A 00              4836 	mov	r2,#0x00
   7601 80 02              4837 	sjmp	00170$
   7603                    4838 00169$:
   7603 7A 01              4839 	mov	r2,#0x01
   7605                    4840 00170$:
   7605 EA                 4841 	mov	a,r2
   7606 60 08              4842 	jz	00165$
   7608 E5 18              4843 	mov	a,_bp
   760A 24 04              4844 	add	a,#0x04
   760C F8                 4845 	mov	r0,a
   760D E6                 4846 	mov	a,@r0
   760E 70 04              4847 	jnz	00166$
   7610                    4848 00165$:
   7610 7A 00              4849 	mov	r2,#0x00
   7612 80 02              4850 	sjmp	00167$
   7614                    4851 00166$:
   7614 7A 01              4852 	mov	r2,#0x01
   7616                    4853 00167$:
   7616 EA                 4854 	mov	a,r2
   7617 60 20              4855 	jz	00162$
   7619 8D 02              4856 	mov	ar2,r5
   761B 7E 00              4857 	mov	r6,#0x00
   761D EB                 4858 	mov	a,r3
   761E C3                 4859 	clr	c
   761F 9A                 4860 	subb	a,r2
   7620 FA                 4861 	mov	r2,a
   7621 EC                 4862 	mov	a,r4
   7622 9E                 4863 	subb	a,r6
   7623 FE                 4864 	mov	r6,a
   7624 E5 18              4865 	mov	a,_bp
   7626 24 05              4866 	add	a,#0x05
   7628 F8                 4867 	mov	r0,a
   7629 C3                 4868 	clr	c
   762A EA                 4869 	mov	a,r2
   762B 96                 4870 	subb	a,@r0
   762C EE                 4871 	mov	a,r6
   762D 64 80              4872 	xrl	a,#0x80
   762F 08                 4873 	inc	r0
   7630 86 F0              4874 	mov	b,@r0
   7632 63 F0 80           4875 	xrl	b,#0x80
   7635 95 F0              4876 	subb	a,b
   7637 40 04              4877 	jc	00163$
   7639                    4878 00162$:
   7639 7A 00              4879 	mov	r2,#0x00
   763B 80 02              4880 	sjmp	00164$
   763D                    4881 00163$:
   763D 7A 01              4882 	mov	r2,#0x01
   763F                    4883 00164$:
   763F EA                 4884 	mov	a,r2
   7640 70 03              4885 	jnz	00151$
   7642 FA                 4886 	mov	r2,a
   7643 80 02              4887 	sjmp	00152$
   7645                    4888 00151$:
   7645 7A 01              4889 	mov	r2,#0x01
   7647                    4890 00152$:
   7647 90 66 9F           4891 	mov	dptr,#(_tx + 0x0001)
   764A EA                 4892 	mov	a,r2
   764B F0                 4893 	movx	@dptr,a
                           4894 ;	../../shared/src/tx_train.c:640: tx.become_worse = tag_TX_STOP_IF_WORSE && (train.f0t < (opt.f0t - tag_TX_STOP_THRES)
   764C EB                 4895 	mov	a,r3
   764D 24 F6              4896 	add	a,#0xf6
   764F FB                 4897 	mov	r3,a
   7650 EC                 4898 	mov	a,r4
   7651 34 FF              4899 	addc	a,#0xff
   7653 FC                 4900 	mov	r4,a
   7654 E5 18              4901 	mov	a,_bp
   7656 24 05              4902 	add	a,#0x05
   7658 F8                 4903 	mov	r0,a
   7659 C3                 4904 	clr	c
   765A E6                 4905 	mov	a,@r0
   765B 9B                 4906 	subb	a,r3
   765C 08                 4907 	inc	r0
   765D E6                 4908 	mov	a,@r0
   765E 64 80              4909 	xrl	a,#0x80
   7660 8C F0              4910 	mov	b,r4
   7662 63 F0 80           4911 	xrl	b,#0x80
   7665 95 F0              4912 	subb	a,b
   7667 40 19              4913 	jc	00175$
                           4914 ;	../../shared/src/tx_train.c:641: || (tx.train_overboost && tx.opt_overboost==0));
   7669 90 66 AA           4915 	mov	dptr,#(_tx + 0x000c)
   766C E0                 4916 	movx	a,@dptr
   766D 60 07              4917 	jz	00177$
   766F 90 66 AB           4918 	mov	dptr,#(_tx + 0x000d)
   7672 E0                 4919 	movx	a,@dptr
   7673 FA                 4920 	mov	r2,a
   7674 60 04              4921 	jz	00178$
   7676                    4922 00177$:
   7676 7A 00              4923 	mov	r2,#0x00
   7678 80 02              4924 	sjmp	00179$
   767A                    4925 00178$:
   767A 7A 01              4926 	mov	r2,#0x01
   767C                    4927 00179$:
   767C EA                 4928 	mov	a,r2
   767D 70 03              4929 	jnz	00175$
   767F FA                 4930 	mov	r2,a
   7680 80 02              4931 	sjmp	00176$
   7682                    4932 00175$:
   7682 7A 01              4933 	mov	r2,#0x01
   7684                    4934 00176$:
   7684 EA                 4935 	mov	a,r2
   7685 70 03              4936 	jnz	00172$
   7687 FA                 4937 	mov	r2,a
   7688 80 02              4938 	sjmp	00173$
   768A                    4939 00172$:
   768A 7A 01              4940 	mov	r2,#0x01
   768C                    4941 00173$:
   768C 90 66 A7           4942 	mov	dptr,#(_tx + 0x0009)
   768F EA                 4943 	mov	a,r2
   7690 F0                 4944 	movx	@dptr,a
   7691 02 77 76           4945 	ljmp	00117$
   7694                    4946 00108$:
                           4947 ;	../../shared/src/tx_train.c:643: else if (train.level == 3) // level 3
   7694 BF 03 02           4948 	cjne	r7,#0x03,00307$
   7697 80 03              4949 	sjmp	00308$
   7699                    4950 00307$:
   7699 02 77 60           4951 	ljmp	00105$
   769C                    4952 00308$:
                           4953 ;	../../shared/src/tx_train.c:645: tx.ffe_updated = (train.f0a_saturate==0 && opt.f0a_saturate && train.dfe_saturate == opt.dfe_saturate) 
   769C 90 66 66           4954 	mov	dptr,#(_train + 0x0026)
   769F E0                 4955 	movx	a,@dptr
   76A0 FA                 4956 	mov	r2,a
   76A1 70 06              4957 	jnz	00189$
   76A3 90 66 95           4958 	mov	dptr,#(_opt + 0x0026)
   76A6 E0                 4959 	movx	a,@dptr
   76A7 70 04              4960 	jnz	00190$
   76A9                    4961 00189$:
   76A9 7B 00              4962 	mov	r3,#0x00
   76AB 80 02              4963 	sjmp	00191$
   76AD                    4964 00190$:
   76AD 7B 01              4965 	mov	r3,#0x01
   76AF                    4966 00191$:
   76AF EB                 4967 	mov	a,r3
   76B0 60 10              4968 	jz	00186$
   76B2 90 66 67           4969 	mov	dptr,#(_train + 0x0027)
   76B5 E0                 4970 	movx	a,@dptr
   76B6 FB                 4971 	mov	r3,a
   76B7 90 66 96           4972 	mov	dptr,#(_opt + 0x0027)
   76BA E0                 4973 	movx	a,@dptr
   76BB FC                 4974 	mov	r4,a
   76BC EB                 4975 	mov	a,r3
   76BD B5 04 02           4976 	cjne	a,ar4,00313$
   76C0 80 04              4977 	sjmp	00187$
   76C2                    4978 00313$:
   76C2                    4979 00186$:
   76C2 7B 00              4980 	mov	r3,#0x00
   76C4 80 02              4981 	sjmp	00188$
   76C6                    4982 00187$:
   76C6 7B 01              4983 	mov	r3,#0x01
   76C8                    4984 00188$:
   76C8 EB                 4985 	mov	a,r3
   76C9 70 2B              4986 	jnz	00184$
                           4987 ;	../../shared/src/tx_train.c:646: || (train.f0a_saturate == opt.f0a_saturate && train.dfe_saturate==0 && opt.dfe_saturate)
   76CB 90 66 95           4988 	mov	dptr,#(_opt + 0x0026)
   76CE E0                 4989 	movx	a,@dptr
   76CF FB                 4990 	mov	r3,a
   76D0 EA                 4991 	mov	a,r2
   76D1 B5 03 07           4992 	cjne	a,ar3,00195$
   76D4 90 66 67           4993 	mov	dptr,#(_train + 0x0027)
   76D7 E0                 4994 	movx	a,@dptr
   76D8 FA                 4995 	mov	r2,a
   76D9 60 04              4996 	jz	00196$
   76DB                    4997 00195$:
   76DB 7A 00              4998 	mov	r2,#0x00
   76DD 80 02              4999 	sjmp	00197$
   76DF                    5000 00196$:
   76DF 7A 01              5001 	mov	r2,#0x01
   76E1                    5002 00197$:
   76E1 EA                 5003 	mov	a,r2
   76E2 60 06              5004 	jz	00192$
   76E4 90 66 96           5005 	mov	dptr,#(_opt + 0x0027)
   76E7 E0                 5006 	movx	a,@dptr
   76E8 70 04              5007 	jnz	00193$
   76EA                    5008 00192$:
   76EA 7A 00              5009 	mov	r2,#0x00
   76EC 80 02              5010 	sjmp	00194$
   76EE                    5011 00193$:
   76EE 7A 01              5012 	mov	r2,#0x01
   76F0                    5013 00194$:
   76F0 EA                 5014 	mov	a,r2
   76F1 70 03              5015 	jnz	00184$
   76F3 FA                 5016 	mov	r2,a
   76F4 80 02              5017 	sjmp	00185$
   76F6                    5018 00184$:
   76F6 7A 01              5019 	mov	r2,#0x01
   76F8                    5020 00185$:
   76F8 EA                 5021 	mov	a,r2
   76F9 70 57              5022 	jnz	00181$
                           5023 ;	../../shared/src/tx_train.c:647: || (tx.train_overboost && tx.opt_overboost && Train_Index_is_big && train.f0t > (opt.f0t - OBUTH));
   76FB 90 66 AA           5024 	mov	dptr,#(_tx + 0x000c)
   76FE E0                 5025 	movx	a,@dptr
   76FF 60 06              5026 	jz	00204$
   7701 90 66 AB           5027 	mov	dptr,#(_tx + 0x000d)
   7704 E0                 5028 	movx	a,@dptr
   7705 70 04              5029 	jnz	00205$
   7707                    5030 00204$:
   7707 7A 00              5031 	mov	r2,#0x00
   7709 80 02              5032 	sjmp	00206$
   770B                    5033 00205$:
   770B 7A 01              5034 	mov	r2,#0x01
   770D                    5035 00206$:
   770D EA                 5036 	mov	a,r2
   770E 60 08              5037 	jz	00201$
   7710 E5 18              5038 	mov	a,_bp
   7712 24 04              5039 	add	a,#0x04
   7714 F8                 5040 	mov	r0,a
   7715 E6                 5041 	mov	a,@r0
   7716 70 04              5042 	jnz	00202$
   7718                    5043 00201$:
   7718 7A 00              5044 	mov	r2,#0x00
   771A 80 02              5045 	sjmp	00203$
   771C                    5046 00202$:
   771C 7A 01              5047 	mov	r2,#0x01
   771E                    5048 00203$:
   771E EA                 5049 	mov	a,r2
   771F 60 25              5050 	jz	00198$
   7721 90 66 5E           5051 	mov	dptr,#(_train + 0x001e)
   7724 E0                 5052 	movx	a,@dptr
   7725 FA                 5053 	mov	r2,a
   7726 90 66 8D           5054 	mov	dptr,#(_opt + 0x001e)
   7729 E0                 5055 	movx	a,@dptr
   772A FB                 5056 	mov	r3,a
   772B E4                 5057 	clr	a
   772C FC                 5058 	mov	r4,a
   772D FE                 5059 	mov	r6,a
   772E EB                 5060 	mov	a,r3
   772F C3                 5061 	clr	c
   7730 9D                 5062 	subb	a,r5
   7731 FB                 5063 	mov	r3,a
   7732 EC                 5064 	mov	a,r4
   7733 9E                 5065 	subb	a,r6
   7734 FC                 5066 	mov	r4,a
   7735 7D 00              5067 	mov	r5,#0x00
   7737 C3                 5068 	clr	c
   7738 EB                 5069 	mov	a,r3
   7739 9A                 5070 	subb	a,r2
   773A EC                 5071 	mov	a,r4
   773B 64 80              5072 	xrl	a,#0x80
   773D 8D F0              5073 	mov	b,r5
   773F 63 F0 80           5074 	xrl	b,#0x80
   7742 95 F0              5075 	subb	a,b
   7744 40 04              5076 	jc	00199$
   7746                    5077 00198$:
   7746 7A 00              5078 	mov	r2,#0x00
   7748 80 02              5079 	sjmp	00200$
   774A                    5080 00199$:
   774A 7A 01              5081 	mov	r2,#0x01
   774C                    5082 00200$:
   774C EA                 5083 	mov	a,r2
   774D 70 03              5084 	jnz	00181$
   774F FA                 5085 	mov	r2,a
   7750 80 02              5086 	sjmp	00182$
   7752                    5087 00181$:
   7752 7A 01              5088 	mov	r2,#0x01
   7754                    5089 00182$:
   7754 90 66 9F           5090 	mov	dptr,#(_tx + 0x0001)
   7757 EA                 5091 	mov	a,r2
   7758 F0                 5092 	movx	@dptr,a
                           5093 ;	../../shared/src/tx_train.c:648: tx.become_worse = 0;
   7759 90 66 A7           5094 	mov	dptr,#(_tx + 0x0009)
   775C E4                 5095 	clr	a
   775D F0                 5096 	movx	@dptr,a
   775E 80 16              5097 	sjmp	00117$
   7760                    5098 00105$:
                           5099 ;	../../shared/src/tx_train.c:652: tx.ffe_updated = 0;
   7760 90 66 9F           5100 	mov	dptr,#(_tx + 0x0001)
                           5101 ;	../../shared/src/tx_train.c:653: tx.become_worse = 0;
   7763 E4                 5102 	clr	a
   7764 F0                 5103 	movx	@dptr,a
   7765 90 66 A7           5104 	mov	dptr,#(_tx + 0x0009)
   7768 F0                 5105 	movx	@dptr,a
   7769 80 0B              5106 	sjmp	00117$
   776B                    5107 00113$:
                           5108 ;	../../shared/src/tx_train.c:658: tx.ffe_updated = 0;
   776B 90 66 9F           5109 	mov	dptr,#(_tx + 0x0001)
   776E E4                 5110 	clr	a
   776F F0                 5111 	movx	@dptr,a
                           5112 ;	../../shared/src/tx_train.c:659: tx.become_worse = tag_TX_STOP_IF_WORSE;
   7770 90 66 A7           5113 	mov	dptr,#(_tx + 0x0009)
   7773 74 01              5114 	mov	a,#0x01
   7775 F0                 5115 	movx	@dptr,a
   7776                    5116 00117$:
                           5117 ;	../../shared/src/tx_train.c:662: if (tx.ffe_updated)
   7776 90 66 9F           5118 	mov	dptr,#(_tx + 0x0001)
   7779 E0                 5119 	movx	a,@dptr
   777A 60 03              5120 	jz	00120$
                           5121 ;	../../shared/src/tx_train.c:664: update_opt_trx_ffe(); // update the memory of Opt
   777C 12 5D 77           5122 	lcall	_update_opt_trx_ffe
   777F                    5123 00120$:
   777F 85 18 81           5124 	mov	sp,_bp
   7782 D0 18              5125 	pop	_bp
   7784 22                 5126 	ret
                           5127 ;------------------------------------------------------------
                           5128 ;Allocation info for local variables in function 'tx_train_dummy'
                           5129 ;------------------------------------------------------------
                           5130 ;------------------------------------------------------------
                           5131 ;	../../shared/src/tx_train.c:776: void tx_train_dummy(void) {
                           5132 ;	-----------------------------------------
                           5133 ;	 function tx_train_dummy
                           5134 ;	-----------------------------------------
   7785                    5135 _tx_train_dummy:
                           5136 ;	../../shared/src/tx_train.c:778: PHY_STATUS = ST_TXTRAIN;
   7785 90 22 30           5137 	mov	dptr,#_MCU_STATUS0_LANE
   7788 74 29              5138 	mov	a,#0x29
   778A F0                 5139 	movx	@dptr,a
                           5140 ;	../../shared/src/tx_train.c:779: reg_MCU_DEBUG0_LANE_7_0 = 0x80;
   778B 90 22 B4           5141 	mov	dptr,#_MCU_DEBUG0_LANE
   778E 74 80              5142 	mov	a,#0x80
   7790 F0                 5143 	movx	@dptr,a
                           5144 ;	../../shared/src/tx_train.c:790: update_g1(-1); //shorten by customer's request
   7791 75 82 FF           5145 	mov	dpl,#0xFF
   7794 12 79 8B           5146 	lcall	_update_g1
                           5147 ;	../../shared/src/tx_train.c:793: opt.eye_check_pass = 1;
   7797 90 66 84           5148 	mov	dptr,#(_opt + 0x0015)
   779A 74 01              5149 	mov	a,#0x01
   779C F0                 5150 	movx	@dptr,a
                           5151 ;	../../shared/src/tx_train.c:794: ctrl_trx_ffe_updated =1; 
   779D D2 25              5152 	setb	_ctrl_trx_ffe_updated
                           5153 ;	../../shared/src/tx_train.c:795: ctrl_tx_train_done = 1;	
   779F D2 22              5154 	setb	_ctrl_tx_train_done
   77A1 22                 5155 	ret
                           5156 ;------------------------------------------------------------
                           5157 ;Allocation info for local variables in function 'tx_reset'
                           5158 ;------------------------------------------------------------
                           5159 ;index                     Allocated to registers r2 
                           5160 ;------------------------------------------------------------
                           5161 ;	../../shared/src/tx_train.c:812: void tx_reset(uint8_t index) {
                           5162 ;	-----------------------------------------
                           5163 ;	 function tx_reset
                           5164 ;	-----------------------------------------
   77A2                    5165 _tx_reset:
   77A2 AA 82              5166 	mov	r2,dpl
                           5167 ;	../../shared/src/tx_train.c:818: if(phy_mode == 4) //ethernet
   77A4 90 A3 16           5168 	mov	dptr,#(_SYSTEM + 0x0002)
   77A7 E0                 5169 	movx	a,@dptr
   77A8 54 07              5170 	anl	a,#0x07
   77AA FB                 5171 	mov	r3,a
   77AB BB 04 14           5172 	cjne	r3,#0x04,00102$
                           5173 ;	../../shared/src/tx_train.c:819: Send_ctrl_to_tx((index&0x03)<<12);	
   77AE 74 03              5174 	mov	a,#0x03
   77B0 5A                 5175 	anl	a,r2
   77B1 C4                 5176 	swap	a
   77B2 54 F0              5177 	anl	a,#0xf0
   77B4 F5 83              5178 	mov	dph,a
   77B6 75 82 00           5179 	mov	dpl,#0x00
   77B9 78 CC              5180 	mov	r0,#_Send_ctrl_to_tx
   77BB 79 E9              5181 	mov	r1,#(_Send_ctrl_to_tx >> 8)
   77BD 7A 01              5182 	mov	r2,#(_Send_ctrl_to_tx >> 16)
   77BF 02 00 B3           5183 	ljmp	__sdcc_banked_call
   77C2                    5184 00102$:
                           5185 ;	../../shared/src/tx_train.c:821: Send_ctrl_to_tx((index&0x0f)<<10);
   77C2 53 02 0F           5186 	anl	ar2,#0x0F
   77C5 EA                 5187 	mov	a,r2
   77C6 2A                 5188 	add	a,r2
   77C7 25 E0              5189 	add	a,acc
   77C9 F5 83              5190 	mov	dph,a
   77CB 75 82 00           5191 	mov	dpl,#0x00
   77CE 78 CC              5192 	mov	r0,#_Send_ctrl_to_tx
   77D0 79 E9              5193 	mov	r1,#(_Send_ctrl_to_tx >> 8)
   77D2 7A 01              5194 	mov	r2,#(_Send_ctrl_to_tx >> 16)
   77D4 02 00 B3           5195 	ljmp	__sdcc_banked_call
                           5196 ;------------------------------------------------------------
                           5197 ;Allocation info for local variables in function 'update_g0'
                           5198 ;------------------------------------------------------------
                           5199 ;update                    Allocated to registers r2 
                           5200 ;------------------------------------------------------------
                           5201 ;	../../shared/src/tx_train.c:839: void update_g0(int8_t update) 
                           5202 ;	-----------------------------------------
                           5203 ;	 function update_g0
                           5204 ;	-----------------------------------------
   77D7                    5205 _update_g0:
   77D7 AA 82              5206 	mov	r2,dpl
                           5207 ;	../../shared/src/tx_train.c:842: cnt = 16;
   77D9 90 22 C1           5208 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0001)
   77DC 74 10              5209 	mov	a,#0x10
   77DE F0                 5210 	movx	@dptr,a
                           5211 ;	../../shared/src/tx_train.c:847: if (update > 0 && tx.g0_is_max==0)
   77DF C3                 5212 	clr	c
   77E0 74 80              5213 	mov	a,#(0x00 ^ 0x80)
   77E2 8A F0              5214 	mov	b,r2
   77E4 63 F0 80           5215 	xrl	b,#0x80
   77E7 95 F0              5216 	subb	a,b
   77E9 50 50              5217 	jnc	00125$
   77EB 90 66 A1           5218 	mov	dptr,#(_tx + 0x0003)
   77EE E0                 5219 	movx	a,@dptr
   77EF 70 4A              5220 	jnz	00125$
                           5221 ;	../../shared/src/tx_train.c:849: while(cnt-->0){			
   77F1 8A 03              5222 	mov	ar3,r2
   77F3                    5223 00108$:
   77F3 90 22 C1           5224 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0001)
   77F6 E0                 5225 	movx	a,@dptr
   77F7 FC                 5226 	mov	r4,a
   77F8 14                 5227 	dec	a
   77F9 FD                 5228 	mov	r5,a
   77FA 90 22 C1           5229 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0001)
   77FD ED                 5230 	mov	a,r5
   77FE F0                 5231 	movx	@dptr,a
   77FF EC                 5232 	mov	a,r4
   7800 70 01              5233 	jnz	00144$
   7802 22                 5234 	ret
   7803                    5235 00144$:
                           5236 ;	../../shared/src/tx_train.c:850: if(update > 0 &&  tx.g0_is_max==0){
   7803 C3                 5237 	clr	c
   7804 74 80              5238 	mov	a,#(0x00 ^ 0x80)
   7806 8B F0              5239 	mov	b,r3
   7808 63 F0 80           5240 	xrl	b,#0x80
   780B 95 F0              5241 	subb	a,b
   780D 50 29              5242 	jnc	00105$
   780F 90 66 A1           5243 	mov	dptr,#(_tx + 0x0003)
   7812 E0                 5244 	movx	a,@dptr
   7813 70 23              5245 	jnz	00105$
                           5246 ;	../../shared/src/tx_train.c:852: req_local_ctrl(CE_NORMAL, 0, 1, 0);
   7815 90 00 04           5247 	mov	dptr,#0x0004
   7818 C0 03              5248 	push	ar3
   781A 78 CC              5249 	mov	r0,#_Send_ctrl_to_tx
   781C 79 E9              5250 	mov	r1,#(_Send_ctrl_to_tx >> 8)
   781E 7A 01              5251 	mov	r2,#(_Send_ctrl_to_tx >> 16)
   7820 12 00 B3           5252 	lcall	__sdcc_banked_call
   7823 D0 03              5253 	pop	ar3
                           5254 ;	../../shared/src/tx_train.c:854: if(tx_pipe4_en==0 || tx.g0_is_max==0) {
   7825 30 26 06           5255 	jnb	_tx_pipe4_en,00101$
   7828 90 66 A1           5256 	mov	dptr,#(_tx + 0x0003)
   782B E0                 5257 	movx	a,@dptr
   782C 70 C5              5258 	jnz	00108$
   782E                    5259 00101$:
                           5260 ;	../../shared/src/tx_train.c:856: train_g0_index ++;
   782E 90 60 32           5261 	mov	dptr,#_train_g0_index
   7831 E0                 5262 	movx	a,@dptr
   7832 24 01              5263 	add	a,#0x01
   7834 F0                 5264 	movx	@dptr,a
                           5265 ;	../../shared/src/tx_train.c:857: update--;		               
   7835 1B                 5266 	dec	r3
   7836 80 BB              5267 	sjmp	00108$
   7838                    5268 00105$:
                           5269 ;	../../shared/src/tx_train.c:861: dfe_cdr_phase_opt();
                           5270 ;	../../shared/src/tx_train.c:862: break;			
   7838 02 5D C4           5271 	ljmp	_dfe_cdr_phase_opt
   783B                    5272 00125$:
                           5273 ;	../../shared/src/tx_train.c:866: else if(update < 0 && tx.g0_is_min==0){ 
   783B EA                 5274 	mov	a,r2
   783C 30 E7 47           5275 	jnb	acc.7,00128$
   783F 90 66 A2           5276 	mov	dptr,#(_tx + 0x0004)
   7842 E0                 5277 	movx	a,@dptr
   7843 70 41              5278 	jnz	00128$
                           5279 ;	../../shared/src/tx_train.c:868: while(cnt-->0) 
   7845                    5280 00118$:
   7845 90 22 C1           5281 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0001)
   7848 E0                 5282 	movx	a,@dptr
   7849 FB                 5283 	mov	r3,a
   784A 14                 5284 	dec	a
   784B FC                 5285 	mov	r4,a
   784C 90 22 C1           5286 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0001)
   784F EC                 5287 	mov	a,r4
   7850 F0                 5288 	movx	@dptr,a
   7851 EB                 5289 	mov	a,r3
   7852 60 32              5290 	jz	00128$
                           5291 ;	../../shared/src/tx_train.c:870: if(update < 0 && tx.g0_is_min==0){ 
   7854 EA                 5292 	mov	a,r2
   7855 30 E7 2B           5293 	jnb	acc.7,00115$
   7858 90 66 A2           5294 	mov	dptr,#(_tx + 0x0004)
   785B E0                 5295 	movx	a,@dptr
   785C 70 25              5296 	jnz	00115$
                           5297 ;	../../shared/src/tx_train.c:872: req_local_ctrl(CE_NORMAL, 0, 2, 0);										
   785E 90 00 08           5298 	mov	dptr,#0x0008
   7861 C0 02              5299 	push	ar2
   7863 78 CC              5300 	mov	r0,#_Send_ctrl_to_tx
   7865 79 E9              5301 	mov	r1,#(_Send_ctrl_to_tx >> 8)
   7867 7A 01              5302 	mov	r2,#(_Send_ctrl_to_tx >> 16)
   7869 12 00 B3           5303 	lcall	__sdcc_banked_call
   786C D0 02              5304 	pop	ar2
                           5305 ;	../../shared/src/tx_train.c:873: if(tx.g0_is_min==0 || tx_pipe4_en==0) {		   
   786E 90 66 A2           5306 	mov	dptr,#(_tx + 0x0004)
   7871 E0                 5307 	movx	a,@dptr
   7872 60 03              5308 	jz	00111$
   7874 20 26 CE           5309 	jb	_tx_pipe4_en,00118$
   7877                    5310 00111$:
                           5311 ;	../../shared/src/tx_train.c:874: update ++; ////DBG_Pritnf("-");
   7877 0A                 5312 	inc	r2
                           5313 ;	../../shared/src/tx_train.c:875: train_g0_index --;
   7878 90 60 32           5314 	mov	dptr,#_train_g0_index
   787B E0                 5315 	movx	a,@dptr
   787C 14                 5316 	dec	a
   787D 90 60 32           5317 	mov	dptr,#_train_g0_index
   7880 F0                 5318 	movx	@dptr,a
   7881 80 C2              5319 	sjmp	00118$
   7883                    5320 00115$:
                           5321 ;	../../shared/src/tx_train.c:881: dfe_cdr_phase_opt();				
                           5322 ;	../../shared/src/tx_train.c:882: break;
   7883 02 5D C4           5323 	ljmp	_dfe_cdr_phase_opt
   7886                    5324 00128$:
   7886 22                 5325 	ret
                           5326 ;------------------------------------------------------------
                           5327 ;Allocation info for local variables in function 'update_gn1'
                           5328 ;------------------------------------------------------------
                           5329 ;update                    Allocated to registers r2 
                           5330 ;------------------------------------------------------------
                           5331 ;	../../shared/src/tx_train.c:888: void update_gn1(int8_t update)
                           5332 ;	-----------------------------------------
                           5333 ;	 function update_gn1
                           5334 ;	-----------------------------------------
   7887                    5335 _update_gn1:
   7887 AA 82              5336 	mov	r2,dpl
                           5337 ;	../../shared/src/tx_train.c:891: cnt = 16;
   7889 90 22 C1           5338 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0001)
   788C 74 10              5339 	mov	a,#0x10
   788E F0                 5340 	movx	@dptr,a
                           5341 ;	../../shared/src/tx_train.c:896: if (update > 0 && tx.gn1_is_max==0)
   788F C3                 5342 	clr	c
   7890 74 80              5343 	mov	a,#(0x00 ^ 0x80)
   7892 8A F0              5344 	mov	b,r2
   7894 63 F0 80           5345 	xrl	b,#0x80
   7897 95 F0              5346 	subb	a,b
   7899 50 74              5347 	jnc	00125$
   789B 90 66 A5           5348 	mov	dptr,#(_tx + 0x0007)
   789E E0                 5349 	movx	a,@dptr
   789F 70 6E              5350 	jnz	00125$
                           5351 ;	../../shared/src/tx_train.c:898: while(cnt-->0){		
   78A1 8A 03              5352 	mov	ar3,r2
   78A3                    5353 00108$:
   78A3 90 22 C1           5354 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0001)
   78A6 E0                 5355 	movx	a,@dptr
   78A7 FC                 5356 	mov	r4,a
   78A8 14                 5357 	dec	a
   78A9 FD                 5358 	mov	r5,a
   78AA 90 22 C1           5359 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0001)
   78AD F0                 5360 	movx	@dptr,a
   78AE EC                 5361 	mov	a,r4
   78AF 70 01              5362 	jnz	00150$
   78B1 22                 5363 	ret
   78B2                    5364 00150$:
                           5365 ;	../../shared/src/tx_train.c:902: if(update >0 && tx.gn1_is_max==0){
   78B2 C3                 5366 	clr	c
   78B3 74 80              5367 	mov	a,#(0x00 ^ 0x80)
   78B5 8B F0              5368 	mov	b,r3
   78B7 63 F0 80           5369 	xrl	b,#0x80
   78BA 95 F0              5370 	subb	a,b
   78BC 50 4E              5371 	jnc	00105$
   78BE 90 66 A5           5372 	mov	dptr,#(_tx + 0x0007)
   78C1 E0                 5373 	movx	a,@dptr
   78C2 70 48              5374 	jnz	00105$
                           5375 ;	../../shared/src/tx_train.c:905: req_local_ctrl(CE_NORMAL, 0, tag_TX_TRAIN_P2P_HOLD, 1);		
   78C4 90 67 A0           5376 	mov	dptr,#_tx_train_p2p_hold
   78C7 E0                 5377 	movx	a,@dptr
   78C8 FC                 5378 	mov	r4,a
   78C9 E4                 5379 	clr	a
   78CA CC                 5380 	xch	a,r4
   78CB 25 E0              5381 	add	a,acc
   78CD CC                 5382 	xch	a,r4
   78CE 33                 5383 	rlc	a
   78CF CC                 5384 	xch	a,r4
   78D0 25 E0              5385 	add	a,acc
   78D2 CC                 5386 	xch	a,r4
   78D3 33                 5387 	rlc	a
   78D4 FD                 5388 	mov	r5,a
   78D5 74 01              5389 	mov	a,#0x01
   78D7 4C                 5390 	orl	a,r4
   78D8 F5 82              5391 	mov	dpl,a
   78DA 8D 83              5392 	mov	dph,r5
   78DC C0 03              5393 	push	ar3
   78DE 78 CC              5394 	mov	r0,#_Send_ctrl_to_tx
   78E0 79 E9              5395 	mov	r1,#(_Send_ctrl_to_tx >> 8)
   78E2 7A 01              5396 	mov	r2,#(_Send_ctrl_to_tx >> 16)
   78E4 12 00 B3           5397 	lcall	__sdcc_banked_call
   78E7 D0 03              5398 	pop	ar3
                           5399 ;	../../shared/src/tx_train.c:907: if(tx.gn1_is_max==0 || tx_pipe4_en==0) {
   78E9 90 66 A5           5400 	mov	dptr,#(_tx + 0x0007)
   78EC E0                 5401 	movx	a,@dptr
   78ED 60 03              5402 	jz	00101$
   78EF 20 26 B1           5403 	jb	_tx_pipe4_en,00108$
   78F2                    5404 00101$:
                           5405 ;	../../shared/src/tx_train.c:908: update --; //DBG_Pritnf("+");
   78F2 1B                 5406 	dec	r3
                           5407 ;	../../shared/src/tx_train.c:909: train_gn1_index ++;
   78F3 90 60 30           5408 	mov	dptr,#_train_gn1_index
   78F6 E0                 5409 	movx	a,@dptr
   78F7 24 01              5410 	add	a,#0x01
   78F9 F0                 5411 	movx	@dptr,a
                           5412 ;	../../shared/src/tx_train.c:910: train_g0_index += tag_TX_TRAIN_P2P_HOLD;
   78FA 90 67 A0           5413 	mov	dptr,#_tx_train_p2p_hold
   78FD E0                 5414 	movx	a,@dptr
   78FE FC                 5415 	mov	r4,a
   78FF 90 60 32           5416 	mov	dptr,#_train_g0_index
   7902 E0                 5417 	movx	a,@dptr
   7903 FD                 5418 	mov	r5,a
   7904 90 60 32           5419 	mov	dptr,#_train_g0_index
   7907 EC                 5420 	mov	a,r4
   7908 2D                 5421 	add	a,r5
   7909 F0                 5422 	movx	@dptr,a
   790A 80 97              5423 	sjmp	00108$
   790C                    5424 00105$:
                           5425 ;	../../shared/src/tx_train.c:915: dfe_cdr_phase_opt();
                           5426 ;	../../shared/src/tx_train.c:916: break;
   790C 02 5D C4           5427 	ljmp	_dfe_cdr_phase_opt
   790F                    5428 00125$:
                           5429 ;	../../shared/src/tx_train.c:920: }else if (update < 0 && tx.gn1_is_min==0){ 
   790F EA                 5430 	mov	a,r2
   7910 20 E7 01           5431 	jb	acc.7,00155$
   7913 22                 5432 	ret
   7914                    5433 00155$:
   7914 90 66 A6           5434 	mov	dptr,#(_tx + 0x0008)
   7917 E0                 5435 	movx	a,@dptr
   7918 60 01              5436 	jz	00156$
   791A 22                 5437 	ret
   791B                    5438 00156$:
                           5439 ;	../../shared/src/tx_train.c:921: while(cnt-->0) 
   791B                    5440 00118$:
   791B 90 22 C1           5441 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0001)
   791E E0                 5442 	movx	a,@dptr
   791F FB                 5443 	mov	r3,a
   7920 14                 5444 	dec	a
   7921 FC                 5445 	mov	r4,a
   7922 90 22 C1           5446 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0001)
   7925 F0                 5447 	movx	@dptr,a
   7926 EB                 5448 	mov	a,r3
   7927 60 61              5449 	jz	00128$
                           5450 ;	../../shared/src/tx_train.c:926: if(update <0 && tx.gn1_is_min==0)
   7929 EA                 5451 	mov	a,r2
   792A 30 E7 5A           5452 	jnb	acc.7,00115$
   792D 90 66 A6           5453 	mov	dptr,#(_tx + 0x0008)
   7930 E0                 5454 	movx	a,@dptr
   7931 70 54              5455 	jnz	00115$
                           5456 ;	../../shared/src/tx_train.c:930: req_local_ctrl(CE_NORMAL, 0, (tag_TX_TRAIN_P2P_HOLD ? 2 : 0), 2);		
   7933 90 67 A0           5457 	mov	dptr,#_tx_train_p2p_hold
   7936 E0                 5458 	movx	a,@dptr
   7937 FB                 5459 	mov	r3,a
   7938 60 02              5460 	jz	00130$
   793A 74 02              5461 	mov	a,#0x02
   793C                    5462 00130$:
   793C FB                 5463 	mov	r3,a
   793D E4                 5464 	clr	a
   793E CB                 5465 	xch	a,r3
   793F 25 E0              5466 	add	a,acc
   7941 CB                 5467 	xch	a,r3
   7942 33                 5468 	rlc	a
   7943 CB                 5469 	xch	a,r3
   7944 25 E0              5470 	add	a,acc
   7946 CB                 5471 	xch	a,r3
   7947 33                 5472 	rlc	a
   7948 FC                 5473 	mov	r4,a
   7949 74 02              5474 	mov	a,#0x02
   794B 4B                 5475 	orl	a,r3
   794C F5 82              5476 	mov	dpl,a
   794E 8C 83              5477 	mov	dph,r4
   7950 C0 02              5478 	push	ar2
   7952 78 CC              5479 	mov	r0,#_Send_ctrl_to_tx
   7954 79 E9              5480 	mov	r1,#(_Send_ctrl_to_tx >> 8)
   7956 7A 01              5481 	mov	r2,#(_Send_ctrl_to_tx >> 16)
   7958 12 00 B3           5482 	lcall	__sdcc_banked_call
   795B D0 02              5483 	pop	ar2
                           5484 ;	../../shared/src/tx_train.c:932: if(tx.gn1_is_min==0 || tx_pipe4_en==0) {
   795D 90 66 A6           5485 	mov	dptr,#(_tx + 0x0008)
   7960 E0                 5486 	movx	a,@dptr
   7961 60 03              5487 	jz	00111$
   7963 20 26 B5           5488 	jb	_tx_pipe4_en,00118$
   7966                    5489 00111$:
                           5490 ;	../../shared/src/tx_train.c:933: update ++; //DBG_Pritnf("-");
   7966 0A                 5491 	inc	r2
                           5492 ;	../../shared/src/tx_train.c:934: train_gn1_index --;
   7967 90 60 30           5493 	mov	dptr,#_train_gn1_index
   796A E0                 5494 	movx	a,@dptr
   796B 14                 5495 	dec	a
   796C 90 60 30           5496 	mov	dptr,#_train_gn1_index
   796F F0                 5497 	movx	@dptr,a
                           5498 ;	../../shared/src/tx_train.c:935: train_g0_index -= tag_TX_TRAIN_P2P_HOLD ? 1 : 0;
   7970 90 67 A0           5499 	mov	dptr,#_tx_train_p2p_hold
   7973 E0                 5500 	movx	a,@dptr
   7974 FB                 5501 	mov	r3,a
   7975 60 02              5502 	jz	00132$
   7977 74 01              5503 	mov	a,#0x01
   7979                    5504 00132$:
   7979 FB                 5505 	mov	r3,a
   797A 90 60 32           5506 	mov	dptr,#_train_g0_index
   797D E0                 5507 	movx	a,@dptr
   797E FC                 5508 	mov	r4,a
   797F 90 60 32           5509 	mov	dptr,#_train_g0_index
   7982 C3                 5510 	clr	c
   7983 9B                 5511 	subb	a,r3
   7984 F0                 5512 	movx	@dptr,a
   7985 80 94              5513 	sjmp	00118$
   7987                    5514 00115$:
                           5515 ;	../../shared/src/tx_train.c:941: dfe_cdr_phase_opt();
                           5516 ;	../../shared/src/tx_train.c:942: break;
   7987 02 5D C4           5517 	ljmp	_dfe_cdr_phase_opt
   798A                    5518 00128$:
   798A 22                 5519 	ret
                           5520 ;------------------------------------------------------------
                           5521 ;Allocation info for local variables in function 'update_g1'
                           5522 ;------------------------------------------------------------
                           5523 ;update                    Allocated to registers r2 
                           5524 ;------------------------------------------------------------
                           5525 ;	../../shared/src/tx_train.c:949: void update_g1(int8_t update)
                           5526 ;	-----------------------------------------
                           5527 ;	 function update_g1
                           5528 ;	-----------------------------------------
   798B                    5529 _update_g1:
   798B AA 82              5530 	mov	r2,dpl
                           5531 ;	../../shared/src/tx_train.c:952: cnt = 16;
   798D 90 22 C1           5532 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0001)
   7990 74 10              5533 	mov	a,#0x10
   7992 F0                 5534 	movx	@dptr,a
                           5535 ;	../../shared/src/tx_train.c:957: if (update > 0 && tx.g1_is_max==0)
   7993 C3                 5536 	clr	c
   7994 74 80              5537 	mov	a,#(0x00 ^ 0x80)
   7996 8A F0              5538 	mov	b,r2
   7998 63 F0 80           5539 	xrl	b,#0x80
   799B 95 F0              5540 	subb	a,b
   799D 50 74              5541 	jnc	00125$
   799F 90 66 A3           5542 	mov	dptr,#(_tx + 0x0005)
   79A2 E0                 5543 	movx	a,@dptr
   79A3 70 6E              5544 	jnz	00125$
                           5545 ;	../../shared/src/tx_train.c:959: while(cnt-->0){
   79A5 8A 03              5546 	mov	ar3,r2
   79A7                    5547 00108$:
   79A7 90 22 C1           5548 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0001)
   79AA E0                 5549 	movx	a,@dptr
   79AB FC                 5550 	mov	r4,a
   79AC 14                 5551 	dec	a
   79AD FD                 5552 	mov	r5,a
   79AE 90 22 C1           5553 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0001)
   79B1 F0                 5554 	movx	@dptr,a
   79B2 EC                 5555 	mov	a,r4
   79B3 70 01              5556 	jnz	00150$
   79B5 22                 5557 	ret
   79B6                    5558 00150$:
                           5559 ;	../../shared/src/tx_train.c:963: if(update >0 && tx.g1_is_max==0){
   79B6 C3                 5560 	clr	c
   79B7 74 80              5561 	mov	a,#(0x00 ^ 0x80)
   79B9 8B F0              5562 	mov	b,r3
   79BB 63 F0 80           5563 	xrl	b,#0x80
   79BE 95 F0              5564 	subb	a,b
   79C0 50 4E              5565 	jnc	00105$
   79C2 90 66 A3           5566 	mov	dptr,#(_tx + 0x0005)
   79C5 E0                 5567 	movx	a,@dptr
   79C6 70 48              5568 	jnz	00105$
                           5569 ;	../../shared/src/tx_train.c:966: req_local_ctrl(CE_NORMAL, 1, tag_TX_TRAIN_P2P_HOLD, 0);		
   79C8 90 67 A0           5570 	mov	dptr,#_tx_train_p2p_hold
   79CB E0                 5571 	movx	a,@dptr
   79CC FC                 5572 	mov	r4,a
   79CD E4                 5573 	clr	a
   79CE CC                 5574 	xch	a,r4
   79CF 25 E0              5575 	add	a,acc
   79D1 CC                 5576 	xch	a,r4
   79D2 33                 5577 	rlc	a
   79D3 CC                 5578 	xch	a,r4
   79D4 25 E0              5579 	add	a,acc
   79D6 CC                 5580 	xch	a,r4
   79D7 33                 5581 	rlc	a
   79D8 FD                 5582 	mov	r5,a
   79D9 74 10              5583 	mov	a,#0x10
   79DB 4C                 5584 	orl	a,r4
   79DC F5 82              5585 	mov	dpl,a
   79DE 8D 83              5586 	mov	dph,r5
   79E0 C0 03              5587 	push	ar3
   79E2 78 CC              5588 	mov	r0,#_Send_ctrl_to_tx
   79E4 79 E9              5589 	mov	r1,#(_Send_ctrl_to_tx >> 8)
   79E6 7A 01              5590 	mov	r2,#(_Send_ctrl_to_tx >> 16)
   79E8 12 00 B3           5591 	lcall	__sdcc_banked_call
   79EB D0 03              5592 	pop	ar3
                           5593 ;	../../shared/src/tx_train.c:968: if(tx.g1_is_max==0 || tx_pipe4_en==0) {
   79ED 90 66 A3           5594 	mov	dptr,#(_tx + 0x0005)
   79F0 E0                 5595 	movx	a,@dptr
   79F1 60 03              5596 	jz	00101$
   79F3 20 26 B1           5597 	jb	_tx_pipe4_en,00108$
   79F6                    5598 00101$:
                           5599 ;	../../shared/src/tx_train.c:969: update --; //DBG_Pritnf("+");
   79F6 1B                 5600 	dec	r3
                           5601 ;	../../shared/src/tx_train.c:970: train_g1_index ++;
   79F7 90 60 31           5602 	mov	dptr,#_train_g1_index
   79FA E0                 5603 	movx	a,@dptr
   79FB 24 01              5604 	add	a,#0x01
   79FD F0                 5605 	movx	@dptr,a
                           5606 ;	../../shared/src/tx_train.c:971: train_g0_index += tag_TX_TRAIN_P2P_HOLD;
   79FE 90 67 A0           5607 	mov	dptr,#_tx_train_p2p_hold
   7A01 E0                 5608 	movx	a,@dptr
   7A02 FC                 5609 	mov	r4,a
   7A03 90 60 32           5610 	mov	dptr,#_train_g0_index
   7A06 E0                 5611 	movx	a,@dptr
   7A07 FD                 5612 	mov	r5,a
   7A08 90 60 32           5613 	mov	dptr,#_train_g0_index
   7A0B EC                 5614 	mov	a,r4
   7A0C 2D                 5615 	add	a,r5
   7A0D F0                 5616 	movx	@dptr,a
   7A0E 80 97              5617 	sjmp	00108$
   7A10                    5618 00105$:
                           5619 ;	../../shared/src/tx_train.c:976: dfe_cdr_phase_opt();
                           5620 ;	../../shared/src/tx_train.c:977: break;
   7A10 02 5D C4           5621 	ljmp	_dfe_cdr_phase_opt
   7A13                    5622 00125$:
                           5623 ;	../../shared/src/tx_train.c:980: }else if (update < 0 && tx.g1_is_min==0){ 
   7A13 EA                 5624 	mov	a,r2
   7A14 20 E7 01           5625 	jb	acc.7,00155$
   7A17 22                 5626 	ret
   7A18                    5627 00155$:
   7A18 90 66 A4           5628 	mov	dptr,#(_tx + 0x0006)
   7A1B E0                 5629 	movx	a,@dptr
   7A1C 60 01              5630 	jz	00156$
   7A1E 22                 5631 	ret
   7A1F                    5632 00156$:
                           5633 ;	../../shared/src/tx_train.c:981: while(cnt-->0) {
   7A1F                    5634 00118$:
   7A1F 90 22 C1           5635 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0001)
   7A22 E0                 5636 	movx	a,@dptr
   7A23 FB                 5637 	mov	r3,a
   7A24 14                 5638 	dec	a
   7A25 FC                 5639 	mov	r4,a
   7A26 90 22 C1           5640 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0001)
   7A29 F0                 5641 	movx	@dptr,a
   7A2A EB                 5642 	mov	a,r3
   7A2B 60 61              5643 	jz	00128$
                           5644 ;	../../shared/src/tx_train.c:985: if(update < 0 && tx.g1_is_min==0){ 
   7A2D EA                 5645 	mov	a,r2
   7A2E 30 E7 5A           5646 	jnb	acc.7,00115$
   7A31 90 66 A4           5647 	mov	dptr,#(_tx + 0x0006)
   7A34 E0                 5648 	movx	a,@dptr
   7A35 70 54              5649 	jnz	00115$
                           5650 ;	../../shared/src/tx_train.c:989: req_local_ctrl(CE_NORMAL, 2, (tag_TX_TRAIN_P2P_HOLD ? 2 : 0), 0);		
   7A37 90 67 A0           5651 	mov	dptr,#_tx_train_p2p_hold
   7A3A E0                 5652 	movx	a,@dptr
   7A3B FB                 5653 	mov	r3,a
   7A3C 60 02              5654 	jz	00130$
   7A3E 74 02              5655 	mov	a,#0x02
   7A40                    5656 00130$:
   7A40 FB                 5657 	mov	r3,a
   7A41 E4                 5658 	clr	a
   7A42 CB                 5659 	xch	a,r3
   7A43 25 E0              5660 	add	a,acc
   7A45 CB                 5661 	xch	a,r3
   7A46 33                 5662 	rlc	a
   7A47 CB                 5663 	xch	a,r3
   7A48 25 E0              5664 	add	a,acc
   7A4A CB                 5665 	xch	a,r3
   7A4B 33                 5666 	rlc	a
   7A4C FC                 5667 	mov	r4,a
   7A4D 74 20              5668 	mov	a,#0x20
   7A4F 4B                 5669 	orl	a,r3
   7A50 F5 82              5670 	mov	dpl,a
   7A52 8C 83              5671 	mov	dph,r4
   7A54 C0 02              5672 	push	ar2
   7A56 78 CC              5673 	mov	r0,#_Send_ctrl_to_tx
   7A58 79 E9              5674 	mov	r1,#(_Send_ctrl_to_tx >> 8)
   7A5A 7A 01              5675 	mov	r2,#(_Send_ctrl_to_tx >> 16)
   7A5C 12 00 B3           5676 	lcall	__sdcc_banked_call
   7A5F D0 02              5677 	pop	ar2
                           5678 ;	../../shared/src/tx_train.c:991: if(tx.g1_is_min==0 || tx_pipe4_en==0) {
   7A61 90 66 A4           5679 	mov	dptr,#(_tx + 0x0006)
   7A64 E0                 5680 	movx	a,@dptr
   7A65 60 03              5681 	jz	00111$
   7A67 20 26 B5           5682 	jb	_tx_pipe4_en,00118$
   7A6A                    5683 00111$:
                           5684 ;	../../shared/src/tx_train.c:992: update ++; //DBG_Pritnf("-");
   7A6A 0A                 5685 	inc	r2
                           5686 ;	../../shared/src/tx_train.c:993: train_g1_index --;
   7A6B 90 60 31           5687 	mov	dptr,#_train_g1_index
   7A6E E0                 5688 	movx	a,@dptr
   7A6F 14                 5689 	dec	a
   7A70 90 60 31           5690 	mov	dptr,#_train_g1_index
   7A73 F0                 5691 	movx	@dptr,a
                           5692 ;	../../shared/src/tx_train.c:994: train_g0_index -= tag_TX_TRAIN_P2P_HOLD ? 1 : 0;
   7A74 90 67 A0           5693 	mov	dptr,#_tx_train_p2p_hold
   7A77 E0                 5694 	movx	a,@dptr
   7A78 FB                 5695 	mov	r3,a
   7A79 60 02              5696 	jz	00132$
   7A7B 74 01              5697 	mov	a,#0x01
   7A7D                    5698 00132$:
   7A7D FB                 5699 	mov	r3,a
   7A7E 90 60 32           5700 	mov	dptr,#_train_g0_index
   7A81 E0                 5701 	movx	a,@dptr
   7A82 FC                 5702 	mov	r4,a
   7A83 90 60 32           5703 	mov	dptr,#_train_g0_index
   7A86 C3                 5704 	clr	c
   7A87 9B                 5705 	subb	a,r3
   7A88 F0                 5706 	movx	@dptr,a
   7A89 80 94              5707 	sjmp	00118$
   7A8B                    5708 00115$:
                           5709 ;	../../shared/src/tx_train.c:999: dfe_cdr_phase_opt();
                           5710 ;	../../shared/src/tx_train.c:1000: break;
   7A8B 02 5D C4           5711 	ljmp	_dfe_cdr_phase_opt
   7A8E                    5712 00128$:
   7A8E 22                 5713 	ret
                           5714 	.area CSEG    (CODE)
                           5715 	.area CONST   (CODE)
                           5716 	.area CABS    (ABS,CODE)
