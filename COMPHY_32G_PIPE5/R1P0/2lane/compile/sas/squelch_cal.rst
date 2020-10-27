                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:49 2018
                              5 ;--------------------------------------------------------
                              6 	.module squelch_cal
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
                            979 	.globl _squelch_cal
                            980 ;--------------------------------------------------------
                            981 ; special function registers
                            982 ;--------------------------------------------------------
                            983 	.area RSEG    (ABS,DATA)
   0000                     984 	.org 0x0000
                    0080    985 _P0	=	0x0080
                    0082    986 _DPL	=	0x0082
                    0083    987 _DPH	=	0x0083
                    0086    988 _WDTREL	=	0x0086
                    0087    989 _PCON	=	0x0087
                    0088    990 _TCON	=	0x0088
                    0089    991 _TMOD	=	0x0089
                    008A    992 _TL0	=	0x008a
                    008B    993 _TL1	=	0x008b
                    008C    994 _TH0	=	0x008c
                    008D    995 _TH1	=	0x008d
                    008E    996 _CKCON	=	0x008e
                    0090    997 _P1	=	0x0090
                    0092    998 _DPS	=	0x0092
                    0094    999 _PSBANK	=	0x0094
                    0098   1000 _SCON	=	0x0098
                    0099   1001 _SBUF	=	0x0099
                    009A   1002 _IEN2	=	0x009a
                    00A0   1003 _P2	=	0x00a0
                    00A1   1004 _DMAS0	=	0x00a1
                    00A2   1005 _DMAS1	=	0x00a2
                    00A3   1006 _DMAS2	=	0x00a3
                    00A4   1007 _DMAT0	=	0x00a4
                    00A5   1008 _DMAT1	=	0x00a5
                    00A6   1009 _DMAT2	=	0x00a6
                    00A8   1010 _IEN0	=	0x00a8
                    00A9   1011 _IP0	=	0x00a9
                    00AA   1012 _S0RELL	=	0x00aa
                    00B0   1013 _P3	=	0x00b0
                    00B1   1014 _DMAC0	=	0x00b1
                    00B2   1015 _DMAC1	=	0x00b2
                    00B3   1016 _DMAC2	=	0x00b3
                    00B4   1017 _DMASEL	=	0x00b4
                    00B5   1018 _DMAM0	=	0x00b5
                    00B6   1019 _DMAM1	=	0x00b6
                    00B8   1020 _IEN1	=	0x00b8
                    00B9   1021 _IP1	=	0x00b9
                    00BA   1022 _S0RELH	=	0x00ba
                    00C0   1023 _IRCON	=	0x00c0
                    00C1   1024 _CCEN	=	0x00c1
                    00C8   1025 _T2CON	=	0x00c8
                    00CA   1026 _RCAP2L	=	0x00ca
                    00CB   1027 _RCAP2H	=	0x00cb
                    00CC   1028 _TL2	=	0x00cc
                    00CD   1029 _TH2	=	0x00cd
                    00D0   1030 _PSW	=	0x00d0
                    00D8   1031 _ADCON	=	0x00d8
                    00E0   1032 _ACC	=	0x00e0
                    00E8   1033 _EIE	=	0x00e8
                    00F0   1034 _B	=	0x00f0
                    00F7   1035 _SRST	=	0x00f7
                    8C8A   1036 _TMR0	=	0x8c8a
                    8D8B   1037 _TMR1	=	0x8d8b
                    CDCC   1038 _TMR2	=	0xcdcc
                    A2A1   1039 _DMASA	=	0xa2a1
                    A5A4   1040 _DMATA	=	0xa5a4
                    B2B1   1041 _DMAC	=	0xb2b1
                           1042 ;--------------------------------------------------------
                           1043 ; special function bits
                           1044 ;--------------------------------------------------------
                           1045 	.area RSEG    (ABS,DATA)
   0000                    1046 	.org 0x0000
                    0080   1047 _P0_0	=	0x0080
                    0081   1048 _P0_1	=	0x0081
                    0082   1049 _P0_2	=	0x0082
                    0083   1050 _P0_3	=	0x0083
                    0084   1051 _P0_4	=	0x0084
                    0085   1052 _P0_5	=	0x0085
                    0086   1053 _P0_6	=	0x0086
                    0087   1054 _P0_7	=	0x0087
                    0090   1055 _P1_0	=	0x0090
                    0091   1056 _P1_1	=	0x0091
                    0092   1057 _P1_2	=	0x0092
                    0093   1058 _P1_3	=	0x0093
                    0094   1059 _P1_4	=	0x0094
                    0095   1060 _P1_5	=	0x0095
                    0096   1061 _P1_6	=	0x0096
                    0097   1062 _P1_7	=	0x0097
                    00A0   1063 _P2_0	=	0x00a0
                    00A1   1064 _P2_1	=	0x00a1
                    00A2   1065 _P2_2	=	0x00a2
                    00A3   1066 _P2_3	=	0x00a3
                    00A4   1067 _P2_4	=	0x00a4
                    00A5   1068 _P2_5	=	0x00a5
                    00A6   1069 _P2_6	=	0x00a6
                    00A7   1070 _P2_7	=	0x00a7
                    00B0   1071 _P3_0	=	0x00b0
                    00B1   1072 _P3_1	=	0x00b1
                    00B2   1073 _P3_2	=	0x00b2
                    00B3   1074 _P3_3	=	0x00b3
                    00B4   1075 _P3_4	=	0x00b4
                    00B5   1076 _P3_5	=	0x00b5
                    00B6   1077 _P3_6	=	0x00b6
                    00B7   1078 _P3_7	=	0x00b7
                    0088   1079 _IT0	=	0x0088
                    0089   1080 _IE0	=	0x0089
                    008A   1081 _IT1	=	0x008a
                    008B   1082 _IE1	=	0x008b
                    008C   1083 _TR0	=	0x008c
                    008D   1084 _TF0	=	0x008d
                    008E   1085 _TR1	=	0x008e
                    008F   1086 _TF1	=	0x008f
                    00A8   1087 _EX0	=	0x00a8
                    00A9   1088 _ET0	=	0x00a9
                    00AA   1089 _EX1	=	0x00aa
                    00AB   1090 _ET1	=	0x00ab
                    00AC   1091 _ES	=	0x00ac
                    00AD   1092 _ET2	=	0x00ad
                    00AE   1093 _WDT	=	0x00ae
                    00AF   1094 _EA	=	0x00af
                    00B8   1095 _EX7	=	0x00b8
                    00B9   1096 _EX2	=	0x00b9
                    00BA   1097 _EX3	=	0x00ba
                    00BB   1098 _EX4	=	0x00bb
                    00BC   1099 _EX5	=	0x00bc
                    00BD   1100 _EX6	=	0x00bd
                    00BE   1101 _PS1	=	0x00be
                    009A   1102 _ES1	=	0x009a
                    009B   1103 _EX8	=	0x009b
                    009C   1104 _EX9	=	0x009c
                    009D   1105 _EX10	=	0x009d
                    009E   1106 _EX11	=	0x009e
                    009F   1107 _EX12	=	0x009f
                    0098   1108 _RI	=	0x0098
                    0099   1109 _TI	=	0x0099
                    00C6   1110 _TF2	=	0x00c6
                           1111 ;--------------------------------------------------------
                           1112 ; overlayable register banks
                           1113 ;--------------------------------------------------------
                           1114 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1115 	.ds 8
                           1116 ;--------------------------------------------------------
                           1117 ; overlayable bit register bank
                           1118 ;--------------------------------------------------------
                           1119 	.area BIT_BANK	(REL,OVR,DATA)
   0025                    1120 bits:
   0025                    1121 	.ds 1
                    8000   1122 	b0 = bits[0]
                    8100   1123 	b1 = bits[1]
                    8200   1124 	b2 = bits[2]
                    8300   1125 	b3 = bits[3]
                    8400   1126 	b4 = bits[4]
                    8500   1127 	b5 = bits[5]
                    8600   1128 	b6 = bits[6]
                    8700   1129 	b7 = bits[7]
                           1130 ;--------------------------------------------------------
                           1131 ; internal ram data
                           1132 ;--------------------------------------------------------
                           1133 	.area DSEG    (DATA)
                           1134 ;--------------------------------------------------------
                           1135 ; overlayable items in internal ram 
                           1136 ;--------------------------------------------------------
                           1137 	.area OSEG    (OVR,DATA)
                           1138 ;--------------------------------------------------------
                           1139 ; indirectly addressable internal ram data
                           1140 ;--------------------------------------------------------
                           1141 	.area ISEG    (DATA)
                           1142 ;--------------------------------------------------------
                           1143 ; absolute internal ram data
                           1144 ;--------------------------------------------------------
                           1145 	.area IABS    (ABS,DATA)
                           1146 	.area IABS    (ABS,DATA)
                           1147 ;--------------------------------------------------------
                           1148 ; bit data
                           1149 ;--------------------------------------------------------
                           1150 	.area BSEG    (BIT)
                           1151 ;--------------------------------------------------------
                           1152 ; paged external ram data
                           1153 ;--------------------------------------------------------
                           1154 	.area PSEG    (PAG,XDATA)
                           1155 ;--------------------------------------------------------
                           1156 ; external ram data
                           1157 ;--------------------------------------------------------
                           1158 	.area XSEG    (XDATA)
                    1000   1159 _UPHY14_TRX_LANEPLL_ANAREG_TOP_128	=	0x1000
                    1004   1160 _UPHY14_TRX_LANEPLL_ANAREG_TOP_129	=	0x1004
                    1008   1161 _UPHY14_TRX_LANEPLL_ANAREG_TOP_130	=	0x1008
                    100C   1162 _UPHY14_TRX_LANEPLL_ANAREG_TOP_131	=	0x100c
                    1010   1163 _UPHY14_TRX_LANEPLL_ANAREG_TOP_132	=	0x1010
                    1014   1164 _UPHY14_TRX_LANEPLL_ANAREG_TOP_133	=	0x1014
                    1018   1165 _UPHY14_TRX_LANEPLL_ANAREG_TOP_134	=	0x1018
                    101C   1166 _UPHY14_TRX_LANEPLL_ANAREG_TOP_135	=	0x101c
                    1020   1167 _UPHY14_TRX_LANEPLL_ANAREG_TOP_136	=	0x1020
                    1024   1168 _UPHY14_TRX_LANEPLL_ANAREG_TOP_137	=	0x1024
                    1028   1169 _UPHY14_TRX_LANEPLL_ANAREG_TOP_138	=	0x1028
                    102C   1170 _UPHY14_TRX_LANEPLL_ANAREG_TOP_139	=	0x102c
                    1030   1171 _UPHY14_TRX_LANEPLL_ANAREG_TOP_140	=	0x1030
                    1034   1172 _UPHY14_TRX_LANEPLL_ANAREG_TOP_141	=	0x1034
                    1038   1173 _UPHY14_TRX_LANEPLL_ANAREG_TOP_142	=	0x1038
                    103C   1174 _UPHY14_TRX_LANEPLL_ANAREG_TOP_143	=	0x103c
                    0200   1175 _UPHY14_TRX_ANAREG_TOP_128	=	0x0200
                    0204   1176 _UPHY14_TRX_ANAREG_TOP_129	=	0x0204
                    0208   1177 _UPHY14_TRX_ANAREG_TOP_130	=	0x0208
                    020C   1178 _UPHY14_TRX_ANAREG_TOP_131	=	0x020c
                    0210   1179 _UPHY14_TRX_ANAREG_TOP_132	=	0x0210
                    0214   1180 _UPHY14_TRX_ANAREG_TOP_133	=	0x0214
                    0218   1181 _UPHY14_TRX_ANAREG_TOP_134	=	0x0218
                    021C   1182 _UPHY14_TRX_ANAREG_TOP_135	=	0x021c
                    0220   1183 _UPHY14_TRX_ANAREG_TOP_136	=	0x0220
                    0224   1184 _UPHY14_TRX_ANAREG_TOP_137	=	0x0224
                    0228   1185 _UPHY14_TRX_ANAREG_TOP_138	=	0x0228
                    022C   1186 _UPHY14_TRX_ANAREG_TOP_139	=	0x022c
                    0230   1187 _UPHY14_TRX_ANAREG_TOP_140	=	0x0230
                    0234   1188 _UPHY14_TRX_ANAREG_TOP_141	=	0x0234
                    0238   1189 _UPHY14_TRX_ANAREG_TOP_142	=	0x0238
                    023C   1190 _UPHY14_TRX_ANAREG_TOP_143	=	0x023c
                    0240   1191 _UPHY14_TRX_ANAREG_TOP_144	=	0x0240
                    0244   1192 _UPHY14_TRX_ANAREG_TOP_145	=	0x0244
                    0248   1193 _UPHY14_TRX_ANAREG_TOP_146	=	0x0248
                    024C   1194 _UPHY14_TRX_ANAREG_TOP_147	=	0x024c
                    0250   1195 _UPHY14_TRX_ANAREG_TOP_148	=	0x0250
                    0254   1196 _UPHY14_TRX_ANAREG_TOP_149	=	0x0254
                    0258   1197 _UPHY14_TRX_ANAREG_TOP_150	=	0x0258
                    025C   1198 _UPHY14_TRX_ANAREG_TOP_151	=	0x025c
                    0260   1199 _UPHY14_TRX_ANAREG_TOP_152	=	0x0260
                    0264   1200 _UPHY14_TRX_ANAREG_TOP_153	=	0x0264
                    0268   1201 _UPHY14_TRX_ANAREG_TOP_154	=	0x0268
                    026C   1202 _UPHY14_TRX_ANAREG_TOP_155	=	0x026c
                    0270   1203 _UPHY14_TRX_ANAREG_TOP_156	=	0x0270
                    0274   1204 _UPHY14_TRX_ANAREG_TOP_157	=	0x0274
                    0000   1205 _UPHY14_TRX_ANAREG_BOT_0	=	0x0000
                    0004   1206 _UPHY14_TRX_ANAREG_BOT_1	=	0x0004
                    0008   1207 _UPHY14_TRX_ANAREG_BOT_2	=	0x0008
                    000C   1208 _UPHY14_TRX_ANAREG_BOT_3	=	0x000c
                    0010   1209 _UPHY14_TRX_ANAREG_BOT_4	=	0x0010
                    0014   1210 _UPHY14_TRX_ANAREG_BOT_5	=	0x0014
                    0018   1211 _UPHY14_TRX_ANAREG_BOT_6	=	0x0018
                    001C   1212 _UPHY14_TRX_ANAREG_BOT_7	=	0x001c
                    0020   1213 _UPHY14_TRX_ANAREG_BOT_8	=	0x0020
                    0024   1214 _UPHY14_TRX_ANAREG_BOT_9	=	0x0024
                    0028   1215 _UPHY14_TRX_ANAREG_BOT_10	=	0x0028
                    002C   1216 _UPHY14_TRX_ANAREG_BOT_11	=	0x002c
                    0030   1217 _UPHY14_TRX_ANAREG_BOT_12	=	0x0030
                    0034   1218 _UPHY14_TRX_ANAREG_BOT_13	=	0x0034
                    0038   1219 _UPHY14_TRX_ANAREG_BOT_14	=	0x0038
                    003C   1220 _UPHY14_TRX_ANAREG_BOT_15	=	0x003c
                    0040   1221 _UPHY14_TRX_ANAREG_BOT_16	=	0x0040
                    0044   1222 _UPHY14_TRX_ANAREG_BOT_17	=	0x0044
                    0048   1223 _UPHY14_TRX_ANAREG_BOT_18	=	0x0048
                    004C   1224 _UPHY14_TRX_ANAREG_BOT_19	=	0x004c
                    0050   1225 _UPHY14_TRX_ANAREG_BOT_20	=	0x0050
                    0054   1226 _UPHY14_TRX_ANAREG_BOT_21	=	0x0054
                    0058   1227 _UPHY14_TRX_ANAREG_BOT_22	=	0x0058
                    005C   1228 _UPHY14_TRX_ANAREG_BOT_23	=	0x005c
                    0060   1229 _UPHY14_TRX_ANAREG_BOT_24	=	0x0060
                    0064   1230 _UPHY14_TRX_ANAREG_BOT_25	=	0x0064
                    0068   1231 _UPHY14_TRX_ANAREG_BOT_26	=	0x0068
                    006C   1232 _UPHY14_TRX_ANAREG_BOT_27	=	0x006c
                    0070   1233 _UPHY14_TRX_ANAREG_BOT_28	=	0x0070
                    0074   1234 _UPHY14_TRX_ANAREG_BOT_29	=	0x0074
                    0078   1235 _UPHY14_TRX_ANAREG_BOT_30	=	0x0078
                    007C   1236 _UPHY14_TRX_ANAREG_BOT_31	=	0x007c
                    0080   1237 _UPHY14_TRX_ANAREG_BOT_32	=	0x0080
                    0478   1238 _ANA_DFEE_REG_1E	=	0x0478
                    047C   1239 _ANA_DFEE_REG_1F	=	0x047c
                    0480   1240 _ANA_DFEE_REG_20	=	0x0480
                    0484   1241 _ANA_DFEE_REG_21	=	0x0484
                    0488   1242 _ANA_DFEE_REG_22	=	0x0488
                    048C   1243 _ANA_DFEE_REG_23	=	0x048c
                    0490   1244 _ANA_DFEE_REG_24	=	0x0490
                    0494   1245 _ANA_DFEE_REG_25	=	0x0494
                    0498   1246 _ANA_DFEE_REG_26	=	0x0498
                    049C   1247 _ANA_DFEE_REG_27	=	0x049c
                    0400   1248 _ANA_DFEE_REG_00	=	0x0400
                    0404   1249 _ANA_DFEE_REG_01	=	0x0404
                    0408   1250 _ANA_DFEE_REG_02	=	0x0408
                    040C   1251 _ANA_DFEE_REG_03	=	0x040c
                    0410   1252 _ANA_DFEE_REG_04	=	0x0410
                    0414   1253 _ANA_DFEE_REG_05	=	0x0414
                    0418   1254 _ANA_DFEE_REG_06	=	0x0418
                    041C   1255 _ANA_DFEE_REG_07	=	0x041c
                    0420   1256 _ANA_DFEE_REG_08	=	0x0420
                    0424   1257 _ANA_DFEE_REG_09	=	0x0424
                    0428   1258 _ANA_DFEE_REG_0A	=	0x0428
                    042C   1259 _ANA_DFEE_REG_0B	=	0x042c
                    0430   1260 _ANA_DFEE_REG_0C	=	0x0430
                    0434   1261 _ANA_DFEE_REG_0D	=	0x0434
                    0438   1262 _ANA_DFEE_REG_0E	=	0x0438
                    043C   1263 _ANA_DFEE_REG_0F	=	0x043c
                    0440   1264 _ANA_DFEE_REG_10	=	0x0440
                    0444   1265 _ANA_DFEE_REG_11	=	0x0444
                    0448   1266 _ANA_DFEE_REG_12	=	0x0448
                    044C   1267 _ANA_DFEE_REG_13	=	0x044c
                    0450   1268 _ANA_DFEE_REG_14	=	0x0450
                    0454   1269 _ANA_DFEE_REG_15	=	0x0454
                    0458   1270 _ANA_DFEE_REG_16	=	0x0458
                    045C   1271 _ANA_DFEE_REG_17	=	0x045c
                    0460   1272 _ANA_DFEE_REG_18	=	0x0460
                    0464   1273 _ANA_DFEE_REG_19	=	0x0464
                    0468   1274 _ANA_DFEE_REG_1A	=	0x0468
                    046C   1275 _ANA_DFEE_REG_1B	=	0x046c
                    0470   1276 _ANA_DFEE_REG_1C	=	0x0470
                    0474   1277 _ANA_DFEE_REG_1D	=	0x0474
                    0830   1278 _ANA_DFEO_REG_0C	=	0x0830
                    0834   1279 _ANA_DFEO_REG_0D	=	0x0834
                    0838   1280 _ANA_DFEO_REG_0E	=	0x0838
                    083C   1281 _ANA_DFEO_REG_0F	=	0x083c
                    0840   1282 _ANA_DFEO_REG_10	=	0x0840
                    0844   1283 _ANA_DFEO_REG_11	=	0x0844
                    0848   1284 _ANA_DFEO_REG_12	=	0x0848
                    084C   1285 _ANA_DFEO_REG_13	=	0x084c
                    0850   1286 _ANA_DFEO_REG_14	=	0x0850
                    0854   1287 _ANA_DFEO_REG_15	=	0x0854
                    0858   1288 _ANA_DFEO_REG_16	=	0x0858
                    085C   1289 _ANA_DFEO_REG_17	=	0x085c
                    0860   1290 _ANA_DFEO_REG_18	=	0x0860
                    0864   1291 _ANA_DFEO_REG_19	=	0x0864
                    0868   1292 _ANA_DFEO_REG_1A	=	0x0868
                    086C   1293 _ANA_DFEO_REG_1B	=	0x086c
                    0870   1294 _ANA_DFEO_REG_1C	=	0x0870
                    0874   1295 _ANA_DFEO_REG_1D	=	0x0874
                    0878   1296 _ANA_DFEO_REG_1E	=	0x0878
                    087C   1297 _ANA_DFEO_REG_1F	=	0x087c
                    0880   1298 _ANA_DFEO_REG_20	=	0x0880
                    0884   1299 _ANA_DFEO_REG_21	=	0x0884
                    0888   1300 _ANA_DFEO_REG_22	=	0x0888
                    088C   1301 _ANA_DFEO_REG_23	=	0x088c
                    0890   1302 _ANA_DFEO_REG_24	=	0x0890
                    0894   1303 _ANA_DFEO_REG_25	=	0x0894
                    0898   1304 _ANA_DFEO_REG_26	=	0x0898
                    089C   1305 _ANA_DFEO_REG_27	=	0x089c
                    0800   1306 _ANA_DFEO_REG_00	=	0x0800
                    0804   1307 _ANA_DFEO_REG_01	=	0x0804
                    0808   1308 _ANA_DFEO_REG_02	=	0x0808
                    080C   1309 _ANA_DFEO_REG_03	=	0x080c
                    0810   1310 _ANA_DFEO_REG_04	=	0x0810
                    0814   1311 _ANA_DFEO_REG_05	=	0x0814
                    0818   1312 _ANA_DFEO_REG_06	=	0x0818
                    081C   1313 _ANA_DFEO_REG_07	=	0x081c
                    0820   1314 _ANA_DFEO_REG_08	=	0x0820
                    0824   1315 _ANA_DFEO_REG_09	=	0x0824
                    0828   1316 _ANA_DFEO_REG_0A	=	0x0828
                    082C   1317 _ANA_DFEO_REG_0B	=	0x082c
                    8200   1318 _UPHY14_CMN_ANAREG_TOP_128	=	0x8200
                    8204   1319 _UPHY14_CMN_ANAREG_TOP_129	=	0x8204
                    8208   1320 _UPHY14_CMN_ANAREG_TOP_130	=	0x8208
                    820C   1321 _UPHY14_CMN_ANAREG_TOP_131	=	0x820c
                    8210   1322 _UPHY14_CMN_ANAREG_TOP_132	=	0x8210
                    8214   1323 _UPHY14_CMN_ANAREG_TOP_133	=	0x8214
                    8218   1324 _UPHY14_CMN_ANAREG_TOP_134	=	0x8218
                    821C   1325 _UPHY14_CMN_ANAREG_TOP_135	=	0x821c
                    8220   1326 _UPHY14_CMN_ANAREG_TOP_136	=	0x8220
                    8224   1327 _UPHY14_CMN_ANAREG_TOP_137	=	0x8224
                    8228   1328 _UPHY14_CMN_ANAREG_TOP_138	=	0x8228
                    822C   1329 _UPHY14_CMN_ANAREG_TOP_139	=	0x822c
                    8230   1330 _UPHY14_CMN_ANAREG_TOP_140	=	0x8230
                    8234   1331 _UPHY14_CMN_ANAREG_TOP_141	=	0x8234
                    8238   1332 _UPHY14_CMN_ANAREG_TOP_142	=	0x8238
                    823C   1333 _UPHY14_CMN_ANAREG_TOP_143	=	0x823c
                    8240   1334 _UPHY14_CMN_ANAREG_TOP_144	=	0x8240
                    8244   1335 _UPHY14_CMN_ANAREG_TOP_145	=	0x8244
                    8248   1336 _UPHY14_CMN_ANAREG_TOP_146	=	0x8248
                    824C   1337 _UPHY14_CMN_ANAREG_TOP_147	=	0x824c
                    8250   1338 _UPHY14_CMN_ANAREG_TOP_148	=	0x8250
                    8254   1339 _UPHY14_CMN_ANAREG_TOP_149	=	0x8254
                    8258   1340 _UPHY14_CMN_ANAREG_TOP_150	=	0x8258
                    825C   1341 _UPHY14_CMN_ANAREG_TOP_151	=	0x825c
                    8260   1342 _UPHY14_CMN_ANAREG_TOP_152	=	0x8260
                    8264   1343 _UPHY14_CMN_ANAREG_TOP_153	=	0x8264
                    8268   1344 _UPHY14_CMN_ANAREG_TOP_154	=	0x8268
                    826C   1345 _UPHY14_CMN_ANAREG_TOP_155	=	0x826c
                    8270   1346 _UPHY14_CMN_ANAREG_TOP_156	=	0x8270
                    8274   1347 _UPHY14_CMN_ANAREG_TOP_157	=	0x8274
                    8278   1348 _UPHY14_CMN_ANAREG_TOP_158	=	0x8278
                    827C   1349 _UPHY14_CMN_ANAREG_TOP_159	=	0x827c
                    8280   1350 _UPHY14_CMN_ANAREG_TOP_160	=	0x8280
                    8284   1351 _UPHY14_CMN_ANAREG_TOP_161	=	0x8284
                    8288   1352 _UPHY14_CMN_ANAREG_TOP_162	=	0x8288
                    828C   1353 _UPHY14_CMN_ANAREG_TOP_163	=	0x828c
                    8290   1354 _UPHY14_CMN_ANAREG_TOP_164	=	0x8290
                    8294   1355 _UPHY14_CMN_ANAREG_TOP_165	=	0x8294
                    8298   1356 _UPHY14_CMN_ANAREG_TOP_166	=	0x8298
                    829C   1357 _UPHY14_CMN_ANAREG_TOP_167	=	0x829c
                    82A0   1358 _UPHY14_CMN_ANAREG_TOP_168	=	0x82a0
                    82A4   1359 _UPHY14_CMN_ANAREG_TOP_169	=	0x82a4
                    82A8   1360 _UPHY14_CMN_ANAREG_TOP_170	=	0x82a8
                    82AC   1361 _UPHY14_CMN_ANAREG_TOP_171	=	0x82ac
                    82B0   1362 _UPHY14_CMN_ANAREG_TOP_172	=	0x82b0
                    82B4   1363 _UPHY14_CMN_ANAREG_TOP_173	=	0x82b4
                    82B8   1364 _UPHY14_CMN_ANAREG_TOP_174	=	0x82b8
                    82BC   1365 _UPHY14_CMN_ANAREG_TOP_175	=	0x82bc
                    82C0   1366 _UPHY14_CMN_ANAREG_TOP_176	=	0x82c0
                    82C4   1367 _UPHY14_CMN_ANAREG_TOP_177	=	0x82c4
                    82C8   1368 _UPHY14_CMN_ANAREG_TOP_178	=	0x82c8
                    82CC   1369 _UPHY14_CMN_ANAREG_TOP_179	=	0x82cc
                    82D0   1370 _UPHY14_CMN_ANAREG_TOP_180	=	0x82d0
                    82D4   1371 _UPHY14_CMN_ANAREG_TOP_181	=	0x82d4
                    82D8   1372 _UPHY14_CMN_ANAREG_TOP_182	=	0x82d8
                    82DC   1373 _UPHY14_CMN_ANAREG_TOP_183	=	0x82dc
                    82E0   1374 _UPHY14_CMN_ANAREG_TOP_184	=	0x82e0
                    82E4   1375 _UPHY14_CMN_ANAREG_TOP_185	=	0x82e4
                    82E8   1376 _UPHY14_CMN_ANAREG_TOP_186	=	0x82e8
                    82EC   1377 _UPHY14_CMN_ANAREG_TOP_187	=	0x82ec
                    82F0   1378 _UPHY14_CMN_ANAREG_TOP_188	=	0x82f0
                    82F4   1379 _UPHY14_CMN_ANAREG_TOP_189	=	0x82f4
                    82F8   1380 _UPHY14_CMN_ANAREG_TOP_190	=	0x82f8
                    82FC   1381 _UPHY14_CMN_ANAREG_TOP_191	=	0x82fc
                    8300   1382 _UPHY14_CMN_ANAREG_TOP_192	=	0x8300
                    8304   1383 _UPHY14_CMN_ANAREG_TOP_193	=	0x8304
                    8308   1384 _UPHY14_CMN_ANAREG_TOP_194	=	0x8308
                    830C   1385 _UPHY14_CMN_ANAREG_TOP_195	=	0x830c
                    8310   1386 _UPHY14_CMN_ANAREG_TOP_196	=	0x8310
                    8314   1387 _UPHY14_CMN_ANAREG_TOP_197	=	0x8314
                    8318   1388 _UPHY14_CMN_ANAREG_TOP_198	=	0x8318
                    831C   1389 _UPHY14_CMN_ANAREG_TOP_199	=	0x831c
                    8320   1390 _UPHY14_CMN_ANAREG_TOP_200	=	0x8320
                    8324   1391 _UPHY14_CMN_ANAREG_TOP_201	=	0x8324
                    8328   1392 _UPHY14_CMN_ANAREG_TOP_202	=	0x8328
                    832C   1393 _UPHY14_CMN_ANAREG_TOP_203	=	0x832c
                    8330   1394 _UPHY14_CMN_ANAREG_TOP_204	=	0x8330
                    8334   1395 _UPHY14_CMN_ANAREG_TOP_205	=	0x8334
                    8338   1396 _UPHY14_CMN_ANAREG_TOP_206	=	0x8338
                    833C   1397 _UPHY14_CMN_ANAREG_TOP_207	=	0x833c
                    8340   1398 _UPHY14_CMN_ANAREG_TOP_208	=	0x8340
                    8344   1399 _UPHY14_CMN_ANAREG_TOP_209	=	0x8344
                    8348   1400 _UPHY14_CMN_ANAREG_TOP_210	=	0x8348
                    834C   1401 _UPHY14_CMN_ANAREG_TOP_211	=	0x834c
                    8350   1402 _UPHY14_CMN_ANAREG_TOP_212	=	0x8350
                    8354   1403 _UPHY14_CMN_ANAREG_TOP_213	=	0x8354
                    8358   1404 _UPHY14_CMN_ANAREG_TOP_214	=	0x8358
                    2000   1405 _PM_CTRL_TX_LANE_REG1_LANE	=	0x2000
                    2004   1406 _PM_CTRL_TX_LANE_REG2_LANE	=	0x2004
                    2008   1407 _INPUT_TX_PIN_REG0_LANE	=	0x2008
                    200C   1408 _INPUT_TX_PIN_REG1_LANE	=	0x200c
                    2010   1409 _INPUT_TX_PIN_REG2_LANE	=	0x2010
                    2014   1410 _INPUT_TX_PIN_REG3_LANE	=	0x2014
                    2018   1411 _PM_CTRL_INTERRUPT_REG1_LANE	=	0x2018
                    201C   1412 _PM_CTRL_INTERRUPT_REG2	=	0x201c
                    2020   1413 _CLKGEN_TX_LANE_REG1_LANE	=	0x2020
                    2024   1414 _TX_SPEED_CONVERT_LANE	=	0x2024
                    2028   1415 _SPD_CTRL_INTERRUPT_REG1_LANE	=	0x2028
                    202C   1416 _SPD_CTRL_INTERRUPT_REG2	=	0x202c
                    2030   1417 _SPD_CTRL_TX_LANE_REG1_LANE	=	0x2030
                    2034   1418 _TX_SYSTEM_LANE	=	0x2034
                    203C   1419 _INPUT_TX_PIN_REG4_LANE	=	0x203c
                    2040   1420 _TX_CALIBRATION_LANE	=	0x2040
                    2044   1421 _DIG_TX_RSVD_REG0	=	0x2044
                    2048   1422 _INPUT_TX_PIN_REG5_LANE	=	0x2048
                    204C   1423 __FIELDNAME__LANE	=	0x204c
                    2050   1424 _PM_CTRL_INTERRUPT_ISR_REG1_LANE	=	0x2050
                    2054   1425 _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE	=	0x2054
                    2058   1426 _ANALOG_TX_REALTIME_REG_1	=	0x2058
                    205C   1427 _MON_TOP	=	0x205c
                    2100   1428 _PM_CTRL_RX_LANE_REG1_LANE	=	0x2100
                    2104   1429 _RX_SYSTEM_LANE	=	0x2104
                    2108   1430 _INPUT_RX_PIN_REG0_LANE	=	0x2108
                    210C   1431 _INPUT_RX_PIN_REG1_LANE	=	0x210c
                    2110   1432 _INPUT_RX_PIN_REG2_LANE	=	0x2110
                    2114   1433 _SPD_CTRL_RX_LANE_REG1_LANE	=	0x2114
                    2118   1434 _DIG_RX_RSVD_REG0	=	0x2118
                    211C   1435 _CLKGEN_RX_LANE_REG1_LANE	=	0x211c
                    2120   1436 _FRAME_SYNC_DET_REG0	=	0x2120
                    2124   1437 _FRAME_SYNC_DET_REG1	=	0x2124
                    2128   1438 _FRAME_SYNC_DET_REG2	=	0x2128
                    212C   1439 _FRAME_SYNC_DET_REG3	=	0x212c
                    2130   1440 _FRAME_SYNC_DET_REG4	=	0x2130
                    2134   1441 _FRAME_SYNC_DET_REG5	=	0x2134
                    2138   1442 _FRAME_SYNC_DET_REG6	=	0x2138
                    213C   1443 _CDR_LOCK_REG	=	0x213c
                    2140   1444 _RX_LANE_INTERRUPT	=	0x2140
                    2144   1445 _RX_LANE_INTERRUPT_MASK	=	0x2144
                    2148   1446 _RX_DATA_PATH_REG	=	0x2148
                    214C   1447 _INPUT_RX_PIN_REG3_LANE	=	0x214c
                    2150   1448 _RX_CALIBRATION_REG	=	0x2150
                    2158   1449 _RX_LANE_INTERRUPT_REG1	=	0x2158
                    2160   1450 _DTL_REG0	=	0x2160
                    2164   1451 _DTL_REG1	=	0x2164
                    2168   1452 _DTL_REG2	=	0x2168
                    216C   1453 _DTL_REG3	=	0x216c
                    2170   1454 _SQ_REG0	=	0x2170
                    4000   1455 _LANE_CFG0	=	0x4000
                    4004   1456 _LANE_STATUS0	=	0x4004
                    4008   1457 _LANE_CFG_STATUS2_LANE	=	0x4008
                    400C   1458 _LANE_CFG2_LANE	=	0x400c
                    4010   1459 _LANE_CFG4	=	0x4010
                    4014   1460 _LANE_CFG_STATUS3_LANE	=	0x4014
                    4018   1461 _LANE_DP_PIE8_CFG0_LANE	=	0x4018
                    401C   1462 _LANE_USB_DP_CFG1_LANE	=	0x401c
                    4020   1463 _LANE_USB_DP_CFG2_LANE	=	0x4020
                    4024   1464 _LANE_EQ_CFG0_LANE	=	0x4024
                    4028   1465 _LANE_EQ_CFG1_LANE	=	0x4028
                    402C   1466 _LANE_PRESET_CFG0_LANE	=	0x402c
                    4030   1467 _LANE_PRESET_CFG2_LANE	=	0x4030
                    4034   1468 _LANE_PRESET_CFG4_LANE	=	0x4034
                    4038   1469 _LANE_PRESET_CFG6_LANE	=	0x4038
                    403C   1470 _LANE_PRESET_CFG8_LANE	=	0x403c
                    4040   1471 _LANE_PRESET_CFG10_LANE	=	0x4040
                    4044   1472 _LANE_PRESET_CFG12_LANE	=	0x4044
                    4048   1473 _LANE_PRESET_CFG14_LANE	=	0x4048
                    404C   1474 _LANE_PRESET_CFG16_LANE	=	0x404c
                    4050   1475 _LANE_COEFF_MAX0_LANE	=	0x4050
                    4054   1476 _LANE_REMOTE_SET_LANE	=	0x4054
                    4058   1477 _LANE_EQ_16G_CFG0_LANE	=	0x4058
                    405C   1478 _LANE_16G_PRESET_CFG0_LANE	=	0x405c
                    4060   1479 _LANE_16G_PRESET_CFG2_LANE	=	0x4060
                    4064   1480 _LANE_16G_PRESET_CFG4_LANE	=	0x4064
                    4068   1481 _LANE_16G_PRESET_CFG6_LANE	=	0x4068
                    406C   1482 _LANE_16G_PRESET_CFG8_LANE	=	0x406c
                    4070   1483 _LANE_16G_PRESET_CFG10_LANE	=	0x4070
                    4074   1484 _LANE_16G_PRESET_CFG12_LANE	=	0x4074
                    4078   1485 _LANE_16G_PRESET_CFG14_LANE	=	0x4078
                    407C   1486 _LANE_16G_PRESET_CFG16_LANE	=	0x407c
                    4080   1487 _LANE_EQ_32G_CFG0_LANE	=	0x4080
                    4084   1488 _LANE_32G_PRESET_CFG0_LANE	=	0x4084
                    4088   1489 _LANE_32G_PRESET_CFG2_LANE	=	0x4088
                    408C   1490 _LANE_32G_PRESET_CFG4_LANE	=	0x408c
                    4090   1491 _LANE_32G_PRESET_CFG6_LANE	=	0x4090
                    4094   1492 _LANE_32G_PRESET_CFG8_LANE	=	0x4094
                    4098   1493 _LANE_32G_PRESET_CFG10_LANE	=	0x4098
                    409C   1494 _LANE_32G_PRESET_CFG12_LANE	=	0x409c
                    40A0   1495 _LANE_32G_PRESET_CFG14_LANE	=	0x40a0
                    40A4   1496 _LANE_32G_PRESET_CFG16_LANE	=	0x40a4
                    2200   1497 _MCU_CONTROL_LANE	=	0x2200
                    2204   1498 _MCU_GPIO	=	0x2204
                    2208   1499 _CACHE_DEBUG0	=	0x2208
                    220C   1500 _CACHE_DEBUG1	=	0x220c
                    2210   1501 _LANE_SYSTEM0	=	0x2210
                    2230   1502 _MCU_STATUS0_LANE	=	0x2230
                    2234   1503 _MCU_STATUS1_LANE	=	0x2234
                    2238   1504 _MCU_STATUS2_LANE	=	0x2238
                    223C   1505 _MCU_STATUS3_LANE	=	0x223c
                    2240   1506 _MCU_INT0_CONTROL	=	0x2240
                    2244   1507 _MCU_INT1_CONTROL	=	0x2244
                    2248   1508 _MCU_INT2_CONTROL	=	0x2248
                    224C   1509 _MCU_INT3_CONTROL	=	0x224c
                    2250   1510 _MCU_INT4_CONTROL	=	0x2250
                    2254   1511 _MCU_INT5_CONTROL	=	0x2254
                    2258   1512 _MCU_INT6_CONTROL	=	0x2258
                    225C   1513 _MCU_INT7_CONTROL	=	0x225c
                    2260   1514 _MCU_INT8_CONTROL	=	0x2260
                    2264   1515 _MCU_INT9_CONTROL	=	0x2264
                    2268   1516 _MCU_INT10_CONTROL	=	0x2268
                    226C   1517 _MCU_INT11_CONTROL	=	0x226c
                    2270   1518 _MCU_INT12_CONTROL	=	0x2270
                    2274   1519 _MCU_TIMER_CONTROL	=	0x2274
                    2278   1520 _MCU_TIMER0_CONTROL	=	0x2278
                    227C   1521 _MCU_TIMER1_CONTROL	=	0x227c
                    2280   1522 _MCU_TIMER2_CONTROL	=	0x2280
                    2284   1523 _MCU_TIMER3_CONTROL	=	0x2284
                    2288   1524 _MCU_IRQ_LANE	=	0x2288
                    228C   1525 _MCU_IRQ_MASK_LANE	=	0x228c
                    2290   1526 _MCU_MEM_REG1_LANE	=	0x2290
                    2294   1527 _MCU_MEM_REG2_LANE	=	0x2294
                    2298   1528 _MCU_TIMER_CTRL_1_LANE	=	0x2298
                    229C   1529 _MCU_TIMER_CTRL_2_LANE	=	0x229c
                    22A0   1530 _MCU_TIMER_CTRL_3_LANE	=	0x22a0
                    22A4   1531 _MCU_TIMER_CTRL_4_LANE	=	0x22a4
                    22A8   1532 _MCU_TIMER_CTRL_5_LANE	=	0x22a8
                    22AC   1533 _MCU_TIMER_CTRL_6_LANE	=	0x22ac
                    22B0   1534 _MCU_TIMER_CTRL_7_LANE	=	0x22b0
                    22B4   1535 _MCU_DEBUG0_LANE	=	0x22b4
                    22B8   1536 _MCU_DEBUG1_LANE	=	0x22b8
                    22BC   1537 _MCU_DEBUG2_LANE	=	0x22bc
                    22C0   1538 _MCU_DEBUG3_LANE	=	0x22c0
                    22C4   1539 _MCU_DEBUG_LANE	=	0x22c4
                    22C8   1540 _EXT_INT_CONTROL	=	0x22c8
                    22CC   1541 _ANA_IF_TRX_REG0	=	0x22cc
                    22D0   1542 _ANA_IF_DFEE_REG0	=	0x22d0
                    22D4   1543 _ANA_IF_DFEO_REG0	=	0x22d4
                    22D8   1544 _MCU_IRQ_ISR_LANE	=	0x22d8
                    22DC   1545 _MCU_WDT_LANE	=	0x22dc
                    22E0   1546 _MCU_INT_CONTROL_13	=	0x22e0
                    22E4   1547 _MCU_COMMAND0	=	0x22e4
                    22F4   1548 _MEM_ECC_ERR_ADDRESS0	=	0x22f4
                    22F8   1549 _XDATA_MEM_CHECKSUM_LANE0	=	0x22f8
                    22FC   1550 _XDATA_MEM_CHECKSUM_LANE1	=	0x22fc
                    2300   1551 _PT_CONTROL0	=	0x2300
                    2304   1552 _PT_CONTROL1	=	0x2304
                    2308   1553 _PT_USER_PATTERN0	=	0x2308
                    230C   1554 _PT_USER_PATTERN1	=	0x230c
                    2310   1555 _PT_USER_PATTERN2	=	0x2310
                    2314   1556 _PT_COUNTER0	=	0x2314
                    2318   1557 _PT_COUNTER1	=	0x2318
                    231C   1558 _PT_COUNTER2	=	0x231c
                    2400   1559 _DFE_CTRL_REG0	=	0x2400
                    2404   1560 _DFE_CTRL_REG1	=	0x2404
                    2408   1561 _DFE_CTRL_REG2	=	0x2408
                    240C   1562 _DFE_CTRL_REG3	=	0x240c
                    2410   1563 _RX_EQ_CLK_CTRL	=	0x2410
                    2414   1564 _DFE_CTRL_REG4	=	0x2414
                    2418   1565 _DFE_ANA_REG0	=	0x2418
                    241C   1566 _DFE_ANA_REG1	=	0x241c
                    2420   1567 _DFE_STEP_REG0	=	0x2420
                    2424   1568 _DFE_STEP_REG1	=	0x2424
                    2430   1569 _DFE_FEN_EVEN_REG	=	0x2430
                    2434   1570 _DFE_FEN_ODD_REG	=	0x2434
                    2438   1571 _DFE_DC_EVEN_REG8	=	0x2438
                    243C   1572 _DFE_DC_ODD_REG8	=	0x243c
                    2440   1573 _DFE_FEXT_EVEN_REG0	=	0x2440
                    2444   1574 _DFE_FEXT_EVEN_REG1	=	0x2444
                    2448   1575 _DFE_FEXT_EVEN_REG2	=	0x2448
                    244C   1576 _DFE_FEXT_EVEN_REG3	=	0x244c
                    2450   1577 _DFE_FEXT_EVEN_REG4	=	0x2450
                    2454   1578 _DFE_FEXT_EVEN_REG5	=	0x2454
                    2458   1579 _DFE_FEXT_EVEN_REG6	=	0x2458
                    245C   1580 _DFE_FEXT_EVEN_REG7	=	0x245c
                    2460   1581 _DFE_FEXT_ODD_REG0	=	0x2460
                    2464   1582 _DFE_FEXT_ODD_REG1	=	0x2464
                    2468   1583 _DFE_FEXT_ODD_REG2	=	0x2468
                    246C   1584 _DFE_FEXT_ODD_REG3	=	0x246c
                    2470   1585 _DFE_FEXT_ODD_REG4	=	0x2470
                    2474   1586 _DFE_FEXT_ODD_REG5	=	0x2474
                    2478   1587 _DFE_FEXT_ODD_REG6	=	0x2478
                    247C   1588 _DFE_FEXT_ODD_REG7	=	0x247c
                    2480   1589 _DFE_READ_EVEN_SM_REG0	=	0x2480
                    2484   1590 _DFE_READ_EVEN_SM_REG1	=	0x2484
                    2488   1591 _DFE_READ_EVEN_SM_REG2	=	0x2488
                    248C   1592 _DFE_READ_EVEN_SM_REG3	=	0x248c
                    2490   1593 _DFE_READ_EVEN_SM_REG4	=	0x2490
                    2494   1594 _DFE_READ_EVEN_SM_REG5	=	0x2494
                    2498   1595 _DFE_READ_EVEN_SM_REG6	=	0x2498
                    249C   1596 _DFE_READ_EVEN_SM_REG7	=	0x249c
                    24A0   1597 _DFE_READ_ODD_SM_REG0	=	0x24a0
                    24A4   1598 _DFE_READ_ODD_SM_REG1	=	0x24a4
                    24A8   1599 _DFE_READ_ODD_SM_REG2	=	0x24a8
                    24AC   1600 _DFE_READ_ODD_SM_REG3	=	0x24ac
                    24B0   1601 _DFE_READ_ODD_SM_REG4	=	0x24b0
                    24B4   1602 _DFE_READ_ODD_SM_REG5	=	0x24b4
                    24B8   1603 _DFE_READ_ODD_SM_REG6	=	0x24b8
                    24BC   1604 _DFE_READ_ODD_SM_REG7	=	0x24bc
                    24C0   1605 _DFE_READ_EVEN_SM_REG8	=	0x24c0
                    24C4   1606 _DFE_READ_ODD_SM_REG8	=	0x24c4
                    24D0   1607 _DFE_READ_EVEN_2C_REG0	=	0x24d0
                    24D4   1608 _DFE_READ_EVEN_2C_REG1	=	0x24d4
                    24D8   1609 _DFE_READ_EVEN_2C_REG2	=	0x24d8
                    24DC   1610 _DFE_READ_EVEN_2C_REG3	=	0x24dc
                    24E0   1611 _DFE_READ_EVEN_2C_REG4	=	0x24e0
                    24E4   1612 _DFE_READ_EVEN_2C_REG5	=	0x24e4
                    24E8   1613 _DFE_READ_EVEN_2C_REG6	=	0x24e8
                    24EC   1614 _DFE_READ_EVEN_2C_REG7	=	0x24ec
                    24F0   1615 _DFE_READ_ODD_2C_REG0	=	0x24f0
                    24F4   1616 _DFE_READ_ODD_2C_REG1	=	0x24f4
                    24F8   1617 _DFE_READ_ODD_2C_REG2	=	0x24f8
                    24FC   1618 _DFE_READ_ODD_2C_REG3	=	0x24fc
                    2500   1619 _DFE_READ_ODD_2C_REG4	=	0x2500
                    2504   1620 _DFE_READ_ODD_2C_REG5	=	0x2504
                    2508   1621 _DFE_READ_ODD_2C_REG6	=	0x2508
                    250C   1622 _DFE_READ_ODD_2C_REG7	=	0x250c
                    2510   1623 _DFE_READ_EVEN_2C_REG8	=	0x2510
                    2514   1624 _DFE_READ_ODD_2C_REG8	=	0x2514
                    2518   1625 _CAL_OFST_REG0	=	0x2518
                    251C   1626 _CAL_OFST_REG1	=	0x251c
                    2520   1627 _CAL_OFST_REG2	=	0x2520
                    2530   1628 _DFE_DCE_REG0	=	0x2530
                    2540   1629 _DFE_STATIC_LANE_REG0	=	0x2540
                    2544   1630 _DFE_STATIC_LANE_REG1	=	0x2544
                    2548   1631 _DFE_STATIC_LANE_REG3	=	0x2548
                    254C   1632 _DFE_STATIC_LANE_REG4	=	0x254c
                    2550   1633 _DFE_STATIC_LANE_REG5	=	0x2550
                    2554   1634 _DFE_STATIC_LANE_REG6	=	0x2554
                    2560   1635 _EOM_VLD_REG0	=	0x2560
                    2564   1636 _EOM_VLD_REG1	=	0x2564
                    2568   1637 _EOM_VLD_REG2	=	0x2568
                    256C   1638 _EOM_VLD_REG3	=	0x256c
                    2570   1639 _EOM_ERR_REG0	=	0x2570
                    2574   1640 _EOM_ERR_REG1	=	0x2574
                    2578   1641 _EOM_ERR_REG2	=	0x2578
                    257C   1642 _EOM_ERR_REG3	=	0x257c
                    2580   1643 _EOM_REG0	=	0x2580
                    25F0   1644 _EOM_VLD_REG4	=	0x25f0
                    25F4   1645 _LANE_MARGIN_REG0	=	0x25f4
                    6000   1646 _CAL_CTRL1_LANE	=	0x6000
                    6004   1647 _CAL_CTRL2_LANE	=	0x6004
                    6008   1648 _CAL_CTRL3_LANE	=	0x6008
                    600C   1649 _CAL_CTRL4_LANE	=	0x600c
                    6010   1650 _CAL_SAVE_DATA1_LANE	=	0x6010
                    6014   1651 _CAL_SAVE_DATA2_LANE	=	0x6014
                    6018   1652 _CAL_SAVE_DATA3_LANE	=	0x6018
                    601C   1653 _PHY_REMOTE_CTRL_COMMAND_LANE	=	0x601c
                    6020   1654 _PHY_REMOTE_CTRL_VALUE_LANE	=	0x6020
                    6024   1655 _PHY_LOCAL_VALUE_LANE	=	0x6024
                    6028   1656 _TRX_TRAIN_IF_TIMERS1_LANE	=	0x6028
                    602C   1657 _TRX_TRAIN_IF_TIMERS2_LANE	=	0x602c
                    6030   1658 _TRX_TRAIN_IF_TIMERS_ENABLE_LANE	=	0x6030
                    6034   1659 _DFE_CONTROL_0	=	0x6034
                    6038   1660 _DFE_CONTROL_1	=	0x6038
                    6040   1661 _DFE_CONTROL_2	=	0x6040
                    6044   1662 _DFE_CONTROL_3	=	0x6044
                    6048   1663 _DFE_CONTROL_4	=	0x6048
                    604C   1664 _DFE_CONTROL_5	=	0x604c
                    6050   1665 _TRAIN_CONTROL_0	=	0x6050
                    6054   1666 _TRAIN_CONTROL_1	=	0x6054
                    6058   1667 _TRAIN_CONTROL_2	=	0x6058
                    605C   1668 _RPTA_CONFIG_0	=	0x605c
                    6060   1669 _RPTA_CONFIG_1	=	0x6060
                    6064   1670 _DLL_CAL	=	0x6064
                    6068   1671 _TRAIN_PARA_0	=	0x6068
                    606C   1672 _TRAIN_PARA_1	=	0x606c
                    6070   1673 _TRAIN_PARA_2	=	0x6070
                    6074   1674 _TRAIN_PARA_3	=	0x6074
                    6078   1675 _DFE_CONTROL_6	=	0x6078
                    607C   1676 _DFE_TEST_0	=	0x607c
                    6080   1677 _DFE_TEST_1	=	0x6080
                    6084   1678 _DFE_TEST_4	=	0x6084
                    6088   1679 _DFE_TEST_5	=	0x6088
                    608C   1680 _DFE_CONTROL_7	=	0x608c
                    6090   1681 _DFE_CONTROL_8	=	0x6090
                    6094   1682 _DFE_CONTROL_9	=	0x6094
                    6098   1683 _DFE_CONTROL_10	=	0x6098
                    609C   1684 _DFE_CONTROL_11	=	0x609c
                    60A0   1685 _CDS_CTRL_REG0	=	0x60a0
                    60A4   1686 _CDS_CTRL_REG1	=	0x60a4
                    60A8   1687 _ESM_POP_P_CNT_LOW_LANE	=	0x60a8
                    60AC   1688 _ESM_ERR_P_CNT_LOW_LANE	=	0x60ac
                    60B0   1689 _ESM_ERR_POP_CNT_HIGH_LANE	=	0x60b0
                    60B4   1690 _TRAIN_CONTROL_3	=	0x60b4
                    60B8   1691 _TRAIN_CONTROL_4	=	0x60b8
                    60BC   1692 _TRAIN_CONTROL_5	=	0x60bc
                    60C0   1693 _TRAIN_CONTROL_6	=	0x60c0
                    60C4   1694 _TRAIN_CONTROL_7	=	0x60c4
                    60C8   1695 _TRAIN_CONTROL_8	=	0x60c8
                    60CC   1696 _TRAIN_CONTROL_9	=	0x60cc
                    60D0   1697 _TRAIN_CONTROL_10	=	0x60d0
                    60D4   1698 _TRAIN_CONTROL_11	=	0x60d4
                    60D8   1699 _TRAIN_CONTROL_12	=	0x60d8
                    60DC   1700 _ESM_POP_N_CNT_LOW_LANE	=	0x60dc
                    60E0   1701 _ESM_ERR_N_CNT_LOW_LANE	=	0x60e0
                    60E4   1702 _TRAIN_CONTROL_13	=	0x60e4
                    60E8   1703 _TRAIN_CONTROL_14	=	0x60e8
                    60EC   1704 _TRAIN_CONTROL_15	=	0x60ec
                    60F0   1705 _TRAIN_CONTROL_16	=	0x60f0
                    60F4   1706 _TRAIN_CONTROL_17	=	0x60f4
                    60F8   1707 _END_XDAT_LANE	=	0x60f8
                    A000   1708 _TX_CMN_REG	=	0xa000
                    A008   1709 _DTX_REG0	=	0xa008
                    A00C   1710 _DTX_REG1	=	0xa00c
                    A010   1711 _DTX_REG2	=	0xa010
                    A014   1712 _DTX_REG3	=	0xa014
                    A018   1713 _DTX_REG4	=	0xa018
                    A01C   1714 _DTX_PHY_ALIGN_REG0	=	0xa01c
                    A024   1715 _DTX_PHY_ALIGN_REG1	=	0xa024
                    A028   1716 _DTX_PHY_ALIGN_REG2	=	0xa028
                    A02C   1717 _SRIS_REG0	=	0xa02c
                    A030   1718 _SRIS_REG1	=	0xa030
                    A100   1719 _RX_CMN_0	=	0xa100
                    A110   1720 _DFE_STATIC_REG0	=	0xa110
                    A114   1721 _DFE_STATIC_REG1	=	0xa114
                    A118   1722 _DFE_STATIC_REG3	=	0xa118
                    A11C   1723 _DFE_STATIC_REG4	=	0xa11c
                    A120   1724 _DFE_STATIC_REG5	=	0xa120
                    A124   1725 _DFE_STATIC_REG6	=	0xa124
                    4200   1726 _GLOB_RST_CLK_CTRL	=	0x4200
                    4204   1727 _GLOB_CLK_SRC_LO	=	0x4204
                    4208   1728 _GLOB_CLK_SRC_HI	=	0x4208
                    420C   1729 _GLOB_MISC_CTRL	=	0x420c
                    4210   1730 _GLOB_DP_SAL_CFG	=	0x4210
                    4214   1731 _GLOB_DP_SAL_CFG1	=	0x4214
                    4218   1732 _GLOB_DP_SAL_CFG3	=	0x4218
                    421C   1733 _GLOB_DP_SAL_CFG5	=	0x421c
                    4220   1734 _GLOB_PM_CFG0	=	0x4220
                    4224   1735 _GLOB_COUNTER_CTRL	=	0x4224
                    4228   1736 _GLOB_COUNTER_HI	=	0x4228
                    422C   1737 _GLOB_PM_DP_CTRL	=	0x422c
                    4230   1738 _GLOB_DP_BAL_CFG0	=	0x4230
                    4234   1739 _GLOB_DP_BAL_CFG2	=	0x4234
                    4238   1740 _GLOB_DP_BAL_CFG4	=	0x4238
                    423C   1741 _GLOB_BIST_CTRL	=	0x423c
                    4240   1742 _GLOB_BIST_LANE_TYPE	=	0x4240
                    4244   1743 _GLOB_BIST_START	=	0x4244
                    4248   1744 _GLOB_BIST_MASK	=	0x4248
                    424C   1745 _GLOB_BIST_RESULT	=	0x424c
                    4250   1746 _GLOB_BIST_SEQR_CFG	=	0x4250
                    4254   1747 _GLOB_BIST_DATA_HI	=	0x4254
                    4258   1748 _GLOB_PIPE_REVISION	=	0x4258
                    425C   1749 _GLOB_L1_SUBSTATES_CFG	=	0x425c
                    A200   1750 _MCU_CONTROL_0	=	0xa200
                    A204   1751 _MCU_CONTROL_1	=	0xa204
                    A208   1752 _MCU_CONTROL_2	=	0xa208
                    A20C   1753 _MCU_CONTROL_3	=	0xa20c
                    A210   1754 _MCU_CONTROL_4	=	0xa210
                    A214   1755 _MCU_DEBUG0	=	0xa214
                    A218   1756 _MCU_DEBUG1	=	0xa218
                    A21C   1757 _MEMORY_CONTROL_0	=	0xa21c
                    A220   1758 _MEMORY_CONTROL_1	=	0xa220
                    A224   1759 _MEMORY_CONTROL_2	=	0xa224
                    A228   1760 _MEMORY_CONTROL_3	=	0xa228
                    A22C   1761 _MEMORY_CONTROL_4	=	0xa22c
                    A234   1762 _MCU_INFO_0	=	0xa234
                    A238   1763 _MCU_INFO_1	=	0xa238
                    A23C   1764 _MCU_INFO_2	=	0xa23c
                    A240   1765 _MCU_INFO_3	=	0xa240
                    A244   1766 _MEM_CMN_ECC_ERR_ADDRESS0	=	0xa244
                    A2E0   1767 _ANA_IF_CMN_REG1	=	0xa2e0
                    A2E4   1768 _MEM_IRQ	=	0xa2e4
                    A2E8   1769 _MEM_IRQ_MASK	=	0xa2e8
                    A2EC   1770 _ANA_IF_CMN_REG0	=	0xa2ec
                    A2F0   1771 _APB_CONTROL_REG	=	0xa2f0
                    A2F4   1772 _MEM_IRQ_CLEAR	=	0xa2f4
                    A2F8   1773 _MCU_SYNC1	=	0xa2f8
                    A2FC   1774 _MCU_SYNC2	=	0xa2fc
                    A300   1775 _TEST0	=	0xa300
                    A304   1776 _TEST1	=	0xa304
                    A308   1777 _TEST2	=	0xa308
                    A30C   1778 _TEST3	=	0xa30c
                    A310   1779 _TEST4	=	0xa310
                    A314   1780 _SYSTEM	=	0xa314
                    A318   1781 _PM_CMN_REG1	=	0xa318
                    A31C   1782 _INPUT_CMN_PIN_REG0	=	0xa31c
                    A320   1783 _INPUT_CMN_PIN_REG1	=	0xa320
                    A324   1784 _INPUT_CMN_PIN_REG2	=	0xa324
                    A328   1785 _ANA_TSEN_CONTROL	=	0xa328
                    A32C   1786 _PLLCAL_REG0	=	0xa32c
                    A330   1787 _PLLCAL_REG1	=	0xa330
                    A334   1788 _CLKGEN_CMN_REG1	=	0xa334
                    A338   1789 _SPD_CMN_REG1	=	0xa338
                    A33C   1790 _OUTPUT_CMN_PIN_REG0	=	0xa33c
                    A340   1791 _CMN_CALIBRATION	=	0xa340
                    A344   1792 __FIELDNAME_	=	0xa344
                    A348   1793 _INPUT_CMN_PIN_REG3	=	0xa348
                    A34C   1794 _PM_CMN_REG2	=	0xa34c
                    A354   1795 _TEST5	=	0xa354
                    A358   1796 _XDATA_MEM_CHECKSUM_CMN_0	=	0xa358
                    A35C   1797 _XDATA_MEM_CHECKSUM_CMN_1	=	0xa35c
                    A360   1798 _XDATA_MEM_CHECKSUM_CMN_2	=	0xa360
                    A364   1799 _MCU_SDT_CMN	=	0xa364
                    A368   1800 _CMN_CACHE_DEBUG0	=	0xa368
                    A36C   1801 _MCU_INT_ADDR	=	0xa36c
                    A370   1802 _CMN_ISR_2	=	0xa370
                    A374   1803 _CMN_ISR_MASK_2	=	0xa374
                    A378   1804 _CMN_ISR_CLEAR_2	=	0xa378
                    A37C   1805 _CMN_MCU_GPIO	=	0xa37c
                    A380   1806 _CMN_CACHE_DEBUG1	=	0xa380
                    A384   1807 _CMN_MCU_TIMER_CONTROL	=	0xa384
                    A388   1808 _CMN_MCU_TIMER_CTRL_2_LANE	=	0xa388
                    A38C   1809 _CMN_MCU_TIMER_CTRL_3_LANE	=	0xa38c
                    A390   1810 _CMN_MCU_TIMER_CTRL_4_LANE	=	0xa390
                    A394   1811 _CMN_MCU_TIMER_CTRL_5_LANE	=	0xa394
                    A398   1812 _CMN_MCU_TIMER0_CONTROL	=	0xa398
                    A39C   1813 _CMN_MCU_TIMER1_CONTROL	=	0xa39c
                    A3A0   1814 _CMN_MCU_TIMER2_CONTROL	=	0xa3a0
                    A3A4   1815 _CMN_MCU_TIMER3_CONTROL	=	0xa3a4
                    A3A8   1816 _CMN_ISR_1	=	0xa3a8
                    A3AC   1817 _CMN_ISR_MASK_1	=	0xa3ac
                    A3B0   1818 _SET_LANE_ISR	=	0xa3b0
                    A3F4   1819 _CMN_MCU_REG	=	0xa3f4
                    A3F8   1820 _CID_REG0	=	0xa3f8
                    A3FC   1821 _CID_REG1	=	0xa3fc
                    E600   1822 _FW_REV	=	0xe600
                    E604   1823 _CONTROL_CONFIG0	=	0xe604
                    E608   1824 _CONTROL_CONFIG1	=	0xe608
                    E60C   1825 _CONTROL_CONFIG2	=	0xe60c
                    E610   1826 _CONTROL_CONFIG3	=	0xe610
                    E614   1827 _CONTROL_CONFIG4	=	0xe614
                    E618   1828 _CONTROL_CONFIG5	=	0xe618
                    E61C   1829 _CONTROL_CONFIG6	=	0xe61c
                    E620   1830 _CONTROL_CONFIG7	=	0xe620
                    E624   1831 _CAL_DATA0	=	0xe624
                    E628   1832 _TRAIN_IF_CONFIG	=	0xe628
                    E62C   1833 _CONTROL_CONFIG8	=	0xe62c
                    E630   1834 _CONTROL_CONFIG9	=	0xe630
                    E634   1835 _CON_CAL_STEP_SIZE1	=	0xe634
                    E638   1836 _CON_CAL_STEP_SIZE2	=	0xe638
                    E63C   1837 _CON_CAL_STEP_SIZE3	=	0xe63c
                    E640   1838 _CON_CAL_STEP_SIZE4	=	0xe640
                    E644   1839 _CON_CAL_STEP_SIZE5	=	0xe644
                    E648   1840 _CAL_TIME_OUT_AND_DIS	=	0xe648
                    E64C   1841 _CAL_STATUS_READ	=	0xe64c
                    E650   1842 _MCU_CONFIG	=	0xe650
                    E654   1843 _CAL_DATA1	=	0xe654
                    E658   1844 _LOOP_CNTS	=	0xe658
                    E65C   1845 _MCU_CONFIG1	=	0xe65c
                    E660   1846 _TIMER_SEL1	=	0xe660
                    E664   1847 _TIMER_SEL2	=	0xe664
                    E668   1848 _TIMER_SEL3	=	0xe668
                    E66C   1849 _G_SELLV_TXCLK	=	0xe66c
                    E670   1850 _G_SELLV_TXDATA	=	0xe670
                    E674   1851 _G_SELLV_TXPRE	=	0xe674
                    E678   1852 _G_SELLV_RXEOMCLK	=	0xe678
                    E67C   1853 _G_SELLV_RXDATACLK	=	0xe67c
                    E680   1854 _G_SELLV_RXSAMPLER	=	0xe680
                    E684   1855 _SAS_PRESET0_TB	=	0xe684
                    E688   1856 _SAS_PRESET1_TB	=	0xe688
                    E68C   1857 _SAS_PRESET2_TB	=	0xe68c
                    E690   1858 _ETH_PRESET0_TB	=	0xe690
                    E694   1859 _ETH_PRESET1_TB	=	0xe694
                    E698   1860 _TX_SAVE_0	=	0xe698
                    E69C   1861 _TX_SAVE_1	=	0xe69c
                    E6A0   1862 _TX_SAVE_2	=	0xe6a0
                    E6A4   1863 _TX_SAVE_3	=	0xe6a4
                    E6A8   1864 _TX_SAVE_4	=	0xe6a8
                    E6AC   1865 _CDS_EYE_CLK_THR	=	0xe6ac
                    E6B0   1866 _SYNC_INFO	=	0xe6b0
                    E6B4   1867 _MCU_INFO_4	=	0xe6b4
                    E6B8   1868 _MCU_INFO_5	=	0xe6b8
                    E6BC   1869 _MCU_INFO_12	=	0xe6bc
                    E6C0   1870 _MCU_INFO_13	=	0xe6c0
                    E6C4   1871 _END_XDAT_CMN	=	0xe6c4
                    2600   1872 _DME_ENC_REG0	=	0x2600
                    2604   1873 _DME_ENC_REG1	=	0x2604
                    2608   1874 _DME_ENC_REG2	=	0x2608
                    260C   1875 _DME_DEC_REG0	=	0x260c
                    2610   1876 _DME_DEC_REG1	=	0x2610
                    2614   1877 _TX_TRAIN_IF_REG0	=	0x2614
                    2618   1878 _TX_TRAIN_IF_REG1	=	0x2618
                    261C   1879 _TX_TRAIN_IF_REG2	=	0x261c
                    2620   1880 _TX_TRAIN_IF_REG3	=	0x2620
                    2624   1881 _TX_TRAIN_PATTTERN_REG0	=	0x2624
                    2628   1882 _TX_TRAIN_DRIVER_REG0	=	0x2628
                    262C   1883 _TX_TRAIN_DRIVER_REG1	=	0x262c
                    2630   1884 _TX_TRAIN_DRIVER_REG2	=	0x2630
                    2634   1885 _TX_TRAIN_DEFAULT_REG0	=	0x2634
                    2638   1886 _TX_TRAIN_DEFAULT_REG1	=	0x2638
                    263C   1887 _TX_TRAIN_DEFAULT_REG2	=	0x263c
                    2640   1888 _TX_TRAIN_DEFAULT_REG3	=	0x2640
                    2644   1889 _TX_TRAIN_DEFAULT_REG4	=	0x2644
                    2648   1890 _TX_TRAIN_DEFAULT_REG5	=	0x2648
                    264C   1891 _TX_EMPH_CTRL_REG0	=	0x264c
                    2650   1892 _LINK_TRAIN_MODE0	=	0x2650
                    2654   1893 _TX_DRV_RD_OUT_REG0	=	0x2654
                    2658   1894 _TX_AMP_CTRL_REG0	=	0x2658
                    265C   1895 _TRX_TRAIN_IF_INTERRUPT_LANE	=	0x265c
                    2660   1896 _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE	=	0x2660
                    2664   1897 _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE	=	0x2664
                    2668   1898 _TX_TRAIN_IF_REG4	=	0x2668
                    266C   1899 _TX_TRAIN_IF_REG5	=	0x266c
                    2670   1900 _TX_TRAIN_IF_REG6	=	0x2670
                    2674   1901 _TX_TRAIN_IF_REG7	=	0x2674
                    2678   1902 _TX_TRAIN_CTRL_LANE	=	0x2678
                    267C   1903 _TX_TRAIN_IF_REG8	=	0x267c
                    6100   1904 _DFE_READ_EVEN_REG0	=	0x6100
                    6104   1905 _DFE_READ_EVEN_REG1	=	0x6104
                    6108   1906 _DFE_READ_EVEN_REG2	=	0x6108
                    610C   1907 _DFE_READ_EVEN_REG3	=	0x610c
                    6110   1908 _DFE_READ_EVEN_REG4	=	0x6110
                    6114   1909 _DFE_READ_EVEN_REG5	=	0x6114
                    6118   1910 _DFE_READ_EVEN_REG6	=	0x6118
                    611C   1911 _DFE_READ_EVEN_REG7	=	0x611c
                    6120   1912 _DFE_READ_ODD_REG0	=	0x6120
                    6124   1913 _DFE_READ_ODD_REG1	=	0x6124
                    6128   1914 _DFE_READ_ODD_REG2	=	0x6128
                    612C   1915 _DFE_READ_ODD_REG3	=	0x612c
                    6130   1916 _DFE_READ_ODD_REG4	=	0x6130
                    6134   1917 _DFE_READ_ODD_REG5	=	0x6134
                    6138   1918 _DFE_READ_ODD_REG6	=	0x6138
                    613C   1919 _DFE_READ_ODD_REG7	=	0x613c
                    6140   1920 _DFE_READ_EVEN_REG8	=	0x6140
                    6144   1921 _DFE_READ_ODD_REG8	=	0x6144
                    6148   1922 _DFE_READ_F0A_EVEN	=	0x6148
                    614C   1923 _DFE_READ_F0A_ODD	=	0x614c
                    6150   1924 _DFE_READ_F0B_EVEN	=	0x6150
                    6154   1925 _DFE_READ_F0B_ODD	=	0x6154
                    6158   1926 _DFE_READ_F0D_EVEN	=	0x6158
                    615C   1927 _DFE_READ_F0D_ODD	=	0x615c
                    6160   1928 _DFE_READ_F0D_LEFT_EVEN	=	0x6160
                    6164   1929 _DFE_READ_F0D_LEFT_ODD	=	0x6164
                    6168   1930 _DFE_READ_F0D_RIGHT_EVEN	=	0x6168
                    616C   1931 _DFE_READ_F0D_RIGHT_ODD	=	0x616c
                    6170   1932 _CDS_READ_MISC0	=	0x6170
                    6174   1933 _CDS_READ_MISC1	=	0x6174
                    6214   1934 _TXTRAIN_IF_REG0	=	0x6214
                    E000   1935 _lc_speedtable	=	0xe000
                    E1C0   1936 _ring_speedtable	=	0xe1c0
                    E5C0   1937 _phy_mode_cmn_table	=	0xe5c0
                    6300   1938 _max_gen	=	0x6300
                    6301   1939 _min_gen	=	0x6301
                    6304   1940 _speedtable	=	0x6304
                    65D4   1941 _phy_mode_lane_table	=	0x65d4
                    60B4   1942 _rc_save	=	0x60b4
                    60D0   1943 _txffe_save	=	0x60d0
                    60E4   1944 _phase_save	=	0x60e4
                    6030   1945 _train_gn1_index	=	0x6030
                    6031   1946 _train_g1_index	=	0x6031
                    6032   1947 _train_g0_index	=	0x6032
                    E6B0   1948 _local_tx_preset_tb	=	0xe6b0
                    E5C1   1949 _cmx_cal_lcvco_dac	=	0xe5c1
                    E5C1   1950 _cmx_cal_lcvco_dac_lsb	=	0xe5c1
                    E5C4   1951 _cmx_cal_lcvco_dac_msb	=	0xe5c4
                    E5CA   1952 _cmx_cal_lccap_msb	=	0xe5ca
                    E5C8   1953 _cmx_cal_lccap_lsb	=	0xe5c8
                    E5CC   1954 _cmx_cal_plldcc	=	0xe5cc
                    E5D0   1955 _cmx_cal_pll_speed_ring	=	0xe5d0
                    E5D4   1956 _cmx_cal_pll_sllp_dac_coarse_ring	=	0xe5d4
                    E5D8   1957 _cmx_cal_sllp_dac_fine_ring	=	0xe5d8
                    65D4   1958 _lnx_cal_txdcc_pdiv	=	0x65d4
                    65D8   1959 _lnx_cal_txdcc_pdiv_hg	=	0x65d8
                    65DA   1960 _lnx_cal_txdcc	=	0x65da
                    65DE   1961 _lnx_cal_txdcc_hg	=	0x65de
                    65E0   1962 _lnx_cal_rxdcc_dll	=	0x65e0
                    65E4   1963 _lnx_cal_rxdcc_dll_hg	=	0x65e4
                    65E6   1964 _lnx_cal_rxdcc_data	=	0x65e6
                    65F0   1965 _lnx_cal_rxdcc_data_hg	=	0x65f0
                    65F5   1966 _lnx_cal_rxdcc_eom	=	0x65f5
                    65FF   1967 _lnx_cal_rxdcc_eom_hg	=	0x65ff
                    6604   1968 _lnx_cal_dll_gmsel	=	0x6604
                    6606   1969 _lnx_cal_vdda_dll_sel	=	0x6606
                    660A   1970 _lnx_cal_dll_eom_gmsel	=	0x660a
                    660C   1971 _lnx_cal_vdda_dll_eom_sel	=	0x660c
                    6610   1972 _lnx_cal_eom_dpher	=	0x6610
                    6612   1973 _lnx_cal_align90_dummy_clk	=	0x6612
                    661A   1974 _lnx_cal_align90_dac	=	0x661a
                    6622   1975 _lnx_cal_align90_gm	=	0x6622
                    662A   1976 _lnx_cal_sellv_txdata	=	0x662a
                    6634   1977 _lnx_cal_sellv_txclk	=	0x6634
                    663E   1978 _lnx_cal_sellv_rxdataclk	=	0x663e
                    6648   1979 _lnx_cal_sellv_txpre	=	0x6648
                    6652   1980 _lnx_cal_sellv_rxsampler	=	0x6652
                    665C   1981 _lnx_cal_sellv_rxeomclk	=	0x665c
                    6666   1982 _lnx_spdoft_tx_preset_index_lane	=	0x6666
                    6490   1983 _lnx_calx_txdcc_pdiv	=	0x6490
                    6496   1984 _lnx_calx_txdcc_pdiv_hg	=	0x6496
                    6499   1985 _lnx_calx_txdcc	=	0x6499
                    649F   1986 _lnx_calx_txdcc_hg	=	0x649f
                    64A2   1987 _lnx_calx_rxdcc_dll	=	0x64a2
                    64A8   1988 _lnx_calx_rxdcc_dll_hg	=	0x64a8
                    64AB   1989 _lnx_calx_dll_gmsel	=	0x64ab
                    64AE   1990 _lnx_calx_vdda_dll_sel	=	0x64ae
                    64B4   1991 _lnx_calx_dll_eom_gmsel	=	0x64b4
                    64B7   1992 _lnx_calx_vdda_dll_eom_sel	=	0x64b7
                    64BD   1993 _lnx_calx_eom_dpher	=	0x64bd
                    64C0   1994 _lnx_calx_align90_dummy_clk	=	0x64c0
                    64CC   1995 _lnx_calx_align90_dac	=	0x64cc
                    64D8   1996 _lnx_calx_align90_gm	=	0x64d8
                    6100   1997 _cds28	=	0x6100
                    6178   1998 _dfe_sm	=	0x6178
                    61B8   1999 _dfe_sm_dc	=	0x61b8
                    61C0   2000 _dfe_sm_save	=	0x61c0
                    03FC   2001 _UPHY_ANAREG_REV_0	=	0x03fc
                    E684   2002 _tx_tb	=	0xe684
                    E698   2003 _train_save_tb	=	0xe698
                    607C   2004 _sq_thrs_ratio_tb	=	0x607c
                           2005 ;--------------------------------------------------------
                           2006 ; absolute external ram data
                           2007 ;--------------------------------------------------------
                           2008 	.area XABS    (ABS,XDATA)
                           2009 ;--------------------------------------------------------
                           2010 ; external initialized ram data
                           2011 ;--------------------------------------------------------
                           2012 	.area HOME    (CODE)
                           2013 	.area GSINIT0 (CODE)
                           2014 	.area GSINIT1 (CODE)
                           2015 	.area GSINIT2 (CODE)
                           2016 	.area GSINIT3 (CODE)
                           2017 	.area GSINIT4 (CODE)
                           2018 	.area GSINIT5 (CODE)
                           2019 	.area GSINIT  (CODE)
                           2020 	.area GSFINAL (CODE)
                           2021 	.area CSEG    (CODE)
                           2022 ;--------------------------------------------------------
                           2023 ; global & static initialisations
                           2024 ;--------------------------------------------------------
                           2025 	.area HOME    (CODE)
                           2026 	.area GSINIT  (CODE)
                           2027 	.area GSFINAL (CODE)
                           2028 	.area GSINIT  (CODE)
                           2029 ;--------------------------------------------------------
                           2030 ; Home
                           2031 ;--------------------------------------------------------
                           2032 	.area HOME    (CODE)
                           2033 	.area HOME    (CODE)
                           2034 ;--------------------------------------------------------
                           2035 ; code
                           2036 ;--------------------------------------------------------
                           2037 	.area BANK2   (CODE)
                           2038 ;------------------------------------------------------------
                           2039 ;Allocation info for local variables in function 'squelch_cal'
                           2040 ;------------------------------------------------------------
                           2041 ;dir                       Allocated to registers r5 
                           2042 ;sq_cnt                    Allocated to registers r6 
                           2043 ;thr_sel                   Allocated to registers r4 
                           2044 ;thr_cnt                   Allocated to stack - offset 1
                           2045 ;up                        Allocated to registers r2 
                           2046 ;loop_cnt                  Allocated to registers r3 
                           2047 ;thr1                      Allocated to stack - offset 2
                           2048 ;thr2                      Allocated to stack - offset 3
                           2049 ;final_offset              Allocated to stack - offset 4
                           2050 ;offset2                   Allocated to registers r3 
                           2051 ;over_loop_cnt             Allocated to registers b0 
                           2052 ;output_cnt                Allocated to stack - offset 5
                           2053 ;------------------------------------------------------------
                           2054 ;	../../shared/src/squelch_cal.c:43: void squelch_cal() BANKING_CTRL {
                           2055 ;	-----------------------------------------
                           2056 ;	 function squelch_cal
                           2057 ;	-----------------------------------------
   E0F4                    2058 _squelch_cal:
                    0002   2059 	ar2 = 0x02
                    0003   2060 	ar3 = 0x03
                    0004   2061 	ar4 = 0x04
                    0005   2062 	ar5 = 0x05
                    0006   2063 	ar6 = 0x06
                    0007   2064 	ar7 = 0x07
                    0000   2065 	ar0 = 0x00
                    0001   2066 	ar1 = 0x01
   E0F4 C0 18              2067 	push	_bp
   E0F6 E5 81              2068 	mov	a,sp
   E0F8 F5 18              2069 	mov	_bp,a
   E0FA 24 05              2070 	add	a,#0x05
   E0FC F5 81              2071 	mov	sp,a
                           2072 ;	../../shared/src/squelch_cal.c:52: BIT over_loop_cnt = 0;	// Indicating if the loop is exited when loop count is over the limit
   E0FE C2 28              2073 	clr	b0
                           2074 ;	../../shared/src/squelch_cal.c:55: lnx_SQ_CAL_DONE_LANE = 0;
   E100 90 60 02           2075 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0002)
   E103 E0                 2076 	movx	a,@dptr
   E104 54 FB              2077 	anl	a,#0xfb
   E106 F0                 2078 	movx	@dptr,a
                           2079 ;	../../shared/src/squelch_cal.c:57: if( cmx_SQ_CAL_EXT_EN ) {
   E107 90 E6 0B           2080 	mov	dptr,#(_CONTROL_CONFIG1 + 0x0003)
   E10A E0                 2081 	movx	a,@dptr
   E10B 30 E3 33           2082 	jnb	acc.3,00102$
                           2083 ;	../../shared/src/squelch_cal.c:58: SQ_OFFSET = lnx_CAL_SQ_OFFSET_LANE_7_0;
   E10E 90 60 12           2084 	mov	dptr,#(_CAL_SAVE_DATA1_LANE + 0x0002)
   E111 E0                 2085 	movx	a,@dptr
   E112 90 00 0C           2086 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_3
   E115 C4                 2087 	swap	a
   E116 03                 2088 	rr	a
   E117 54 F8              2089 	anl	a,#(0xf8&0xf8)
   E119 F5 F0              2090 	mov	b,a
   E11B E0                 2091 	movx	a,@dptr
   E11C 54 07              2092 	anl	a,#0x07
   E11E 45 F0              2093 	orl	a,b
   E120 F0                 2094 	movx	@dptr,a
                           2095 ;	../../shared/src/squelch_cal.c:59: SQ_THRESH = lnx_CAL_SQ_THRESH_LANE_7_0;
   E121 90 60 13           2096 	mov	dptr,#(_CAL_SAVE_DATA1_LANE + 0x0003)
   E124 E0                 2097 	movx	a,@dptr
   E125 FA                 2098 	mov	r2,a
   E126 90 00 10           2099 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_4
   E129 25 E0              2100 	add	a,acc
   E12B 25 E0              2101 	add	a,acc
   E12D 54 FC              2102 	anl	a,#0xfc
   E12F F5 F0              2103 	mov	b,a
   E131 E0                 2104 	movx	a,@dptr
   E132 54 03              2105 	anl	a,#0x03
   E134 45 F0              2106 	orl	a,b
   E136 F0                 2107 	movx	@dptr,a
                           2108 ;	../../shared/src/squelch_cal.c:60: lnx_SQ_CAL_DONE_LANE = 1;
   E137 90 60 02           2109 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0002)
   E13A E0                 2110 	movx	a,@dptr
   E13B 44 04              2111 	orl	a,#0x04
   E13D F0                 2112 	movx	@dptr,a
                           2113 ;	../../shared/src/squelch_cal.c:61: return;
   E13E 02 E5 8F           2114 	ljmp	00143$
   E141                    2115 00102$:
                           2116 ;	../../shared/src/squelch_cal.c:64: PHY_STATUS = ST_SQ_CAL;
   E141 90 22 30           2117 	mov	dptr,#_MCU_STATUS0_LANE
   E144 74 14              2118 	mov	a,#0x14
   E146 F0                 2119 	movx	@dptr,a
                           2120 ;	../../shared/src/squelch_cal.c:66: lnx_SQ_CAL_PASS_LANE = 0;
   E147 90 60 06           2121 	mov	dptr,#(_CAL_CTRL2_LANE + 0x0002)
   E14A E0                 2122 	movx	a,@dptr
   E14B 54 DF              2123 	anl	a,#0xdf
   E14D F0                 2124 	movx	@dptr,a
                           2125 ;	../../shared/src/squelch_cal.c:70: final_offset = 0;
   E14E E5 18              2126 	mov	a,_bp
   E150 24 04              2127 	add	a,#0x04
   E152 F8                 2128 	mov	r0,a
   E153 76 00              2129 	mov	@r0,#0x00
                           2130 ;	../../shared/src/squelch_cal.c:72: SQ_CAL_PU = 1;
   E155 90 21 03           2131 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0003)
   E158 E0                 2132 	movx	a,@dptr
   E159 44 20              2133 	orl	a,#0x20
   E15B F0                 2134 	movx	@dptr,a
                           2135 ;	../../shared/src/squelch_cal.c:73: delay01(10);
   E15C 90 00 0A           2136 	mov	dptr,#0x000A
   E15F C0 25              2137 	push	bits
   E161 78 16              2138 	mov	r0,#_delay01
   E163 79 BC              2139 	mov	r1,#(_delay01 >> 8)
   E165 7A 02              2140 	mov	r2,#(_delay01 >> 16)
   E167 12 00 B3           2141 	lcall	__sdcc_banked_call
   E16A D0 25              2142 	pop	bits
                           2143 ;	../../shared/src/squelch_cal.c:74: SQ_CAL_EN = 1;
   E16C 90 02 0C           2144 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_131
   E16F E0                 2145 	movx	a,@dptr
   E170 44 02              2146 	orl	a,#0x02
   E172 F0                 2147 	movx	@dptr,a
                           2148 ;	../../shared/src/squelch_cal.c:75: delay01(10);
   E173 90 00 0A           2149 	mov	dptr,#0x000A
   E176 C0 25              2150 	push	bits
   E178 78 16              2151 	mov	r0,#_delay01
   E17A 79 BC              2152 	mov	r1,#(_delay01 >> 8)
   E17C 7A 02              2153 	mov	r2,#(_delay01 >> 16)
   E17E 12 00 B3           2154 	lcall	__sdcc_banked_call
   E181 D0 25              2155 	pop	bits
                           2156 ;	../../shared/src/squelch_cal.c:76: SQ_OFFSET_CAL_EN = 1;
   E183 90 00 08           2157 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_2
   E186 E0                 2158 	movx	a,@dptr
   E187 44 02              2159 	orl	a,#0x02
   E189 F0                 2160 	movx	@dptr,a
                           2161 ;	../../shared/src/squelch_cal.c:78: SQ_THRESH = 0x20;
   E18A 90 00 10           2162 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_4
   E18D E0                 2163 	movx	a,@dptr
   E18E 54 03              2164 	anl	a,#0x03
   E190 44 80              2165 	orl	a,#0x80
   E192 F0                 2166 	movx	@dptr,a
                           2167 ;	../../shared/src/squelch_cal.c:79: SQ_OFFSET = 0x10;
   E193 90 00 0C           2168 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_3
   E196 E0                 2169 	movx	a,@dptr
   E197 54 07              2170 	anl	a,#0x07
   E199 44 80              2171 	orl	a,#0x80
   E19B F0                 2172 	movx	@dptr,a
                           2173 ;	../../shared/src/squelch_cal.c:81: OFFSETCAL_SEL = 0x3;
   E19C 90 00 10           2174 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_4
   E19F E0                 2175 	movx	a,@dptr
   E1A0 44 03              2176 	orl	a,#0x03
   E1A2 F0                 2177 	movx	@dptr,a
                           2178 ;	../../shared/src/squelch_cal.c:82: delay01(10);
   E1A3 90 00 0A           2179 	mov	dptr,#0x000A
   E1A6 C0 25              2180 	push	bits
   E1A8 78 16              2181 	mov	r0,#_delay01
   E1AA 79 BC              2182 	mov	r1,#(_delay01 >> 8)
   E1AC 7A 02              2183 	mov	r2,#(_delay01 >> 16)
   E1AE 12 00 B3           2184 	lcall	__sdcc_banked_call
   E1B1 D0 25              2185 	pop	bits
                           2186 ;	../../shared/src/squelch_cal.c:86: do {
   E1B3 A8 18              2187 	mov	r0,_bp
   E1B5 08                 2188 	inc	r0
   E1B6 76 00              2189 	mov	@r0,#0x00
                           2190 ;	../../shared/src/squelch_cal.c:88: do {
   E1B8                    2191 00179$:
   E1B8 7C 01              2192 	mov	r4,#0x01
   E1BA                    2193 00116$:
                           2194 ;	../../shared/src/squelch_cal.c:89: OFFSETCAL_SEL = thr_sel;
   E1BA 90 00 10           2195 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_4
   E1BD EC                 2196 	mov	a,r4
   E1BE 54 03              2197 	anl	a,#0x03
   E1C0 F5 F0              2198 	mov	b,a
   E1C2 E0                 2199 	movx	a,@dptr
   E1C3 54 FC              2200 	anl	a,#0xfc
   E1C5 45 F0              2201 	orl	a,b
   E1C7 F0                 2202 	movx	@dptr,a
                           2203 ;	../../shared/src/squelch_cal.c:91: dir    = 0;
   E1C8 7D 00              2204 	mov	r5,#0x00
                           2205 ;	../../shared/src/squelch_cal.c:92: sq_cnt = 0;        
   E1CA 7E 00              2206 	mov	r6,#0x00
                           2207 ;	../../shared/src/squelch_cal.c:95: while ( ( loop_cnt < 64 ) && ( sq_cnt != 32 ) && ( sq_cnt != -32 ) ) {
   E1CC 7F 00              2208 	mov	r7,#0x00
   E1CE 7B 00              2209 	mov	r3,#0x00
   E1D0                    2210 00108$:
   E1D0 C3                 2211 	clr	c
   E1D1 EB                 2212 	mov	a,r3
   E1D2 64 80              2213 	xrl	a,#0x80
   E1D4 94 C0              2214 	subb	a,#0xc0
   E1D6 40 03              2215 	jc	00210$
   E1D8 02 E2 7A           2216 	ljmp	00110$
   E1DB                    2217 00210$:
   E1DB BE 20 03           2218 	cjne	r6,#0x20,00211$
   E1DE 02 E2 7A           2219 	ljmp	00110$
   E1E1                    2220 00211$:
   E1E1 BE E0 03           2221 	cjne	r6,#0xE0,00212$
   E1E4 02 E2 7A           2222 	ljmp	00110$
   E1E7                    2223 00212$:
                           2224 ;	../../shared/src/squelch_cal.c:96: SQ_THRESH = ( sq_cnt < 0 ) ? -sq_cnt : ( sq_cnt + 0x20 );	// Bit[6] is sign bit, 1 = pos
   E1E7 EE                 2225 	mov	a,r6
   E1E8 30 E7 06           2226 	jnb	acc.7,00145$
   E1EB C3                 2227 	clr	c
   E1EC E4                 2228 	clr	a
   E1ED 9E                 2229 	subb	a,r6
   E1EE FA                 2230 	mov	r2,a
   E1EF 80 04              2231 	sjmp	00146$
   E1F1                    2232 00145$:
   E1F1 74 20              2233 	mov	a,#0x20
   E1F3 2E                 2234 	add	a,r6
   E1F4 FA                 2235 	mov	r2,a
   E1F5                    2236 00146$:
   E1F5 C0 04              2237 	push	ar4
   E1F7 90 00 10           2238 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_4
   E1FA EA                 2239 	mov	a,r2
   E1FB 2A                 2240 	add	a,r2
   E1FC 25 E0              2241 	add	a,acc
   E1FE 54 FC              2242 	anl	a,#0xfc
   E200 F5 F0              2243 	mov	b,a
   E202 E0                 2244 	movx	a,@dptr
   E203 54 03              2245 	anl	a,#0x03
   E205 45 F0              2246 	orl	a,b
   E207 F0                 2247 	movx	@dptr,a
                           2248 ;	../../shared/src/squelch_cal.c:97: delay01(5);
   E208 90 00 05           2249 	mov	dptr,#0x0005
   E20B C0 03              2250 	push	ar3
   E20D C0 04              2251 	push	ar4
   E20F C0 05              2252 	push	ar5
   E211 C0 06              2253 	push	ar6
   E213 C0 07              2254 	push	ar7
   E215 C0 25              2255 	push	bits
   E217 78 16              2256 	mov	r0,#_delay01
   E219 79 BC              2257 	mov	r1,#(_delay01 >> 8)
   E21B 7A 02              2258 	mov	r2,#(_delay01 >> 16)
   E21D 12 00 B3           2259 	lcall	__sdcc_banked_call
   E220 D0 25              2260 	pop	bits
   E222 D0 07              2261 	pop	ar7
   E224 D0 06              2262 	pop	ar6
   E226 D0 05              2263 	pop	ar5
   E228 D0 04              2264 	pop	ar4
   E22A D0 03              2265 	pop	ar3
                           2266 ;	../../shared/src/squelch_cal.c:98: up = SQ_OUT;
   E22C 90 21 50           2267 	mov	dptr,#_RX_CALIBRATION_REG
   E22F E0                 2268 	movx	a,@dptr
   E230 C4                 2269 	swap	a
   E231 54 01              2270 	anl	a,#0x01
   E233 FA                 2271 	mov	r2,a
                           2272 ;	../../shared/src/squelch_cal.c:99: dir = (dir << 1 ) | up;
   E234 ED                 2273 	mov	a,r5
   E235 2D                 2274 	add	a,r5
   E236 FC                 2275 	mov	r4,a
   E237 EA                 2276 	mov	a,r2
   E238 42 04              2277 	orl	ar4,a
   E23A 8C 05              2278 	mov	ar5,r4
                           2279 ;	../../shared/src/squelch_cal.c:100: ++output_cnt;
   E23C 0F                 2280 	inc	r7
                           2281 ;	../../shared/src/squelch_cal.c:101: if ( is_toggle_pat( dir, output_cnt ) )
   E23D C0 02              2282 	push	ar2
   E23F C0 03              2283 	push	ar3
   E241 C0 04              2284 	push	ar4
   E243 C0 05              2285 	push	ar5
   E245 C0 06              2286 	push	ar6
   E247 C0 07              2287 	push	ar7
   E249 C0 25              2288 	push	bits
   E24B C0 07              2289 	push	ar7
   E24D 8D 82              2290 	mov	dpl,r5
   E24F 78 CD              2291 	mov	r0,#_is_toggle_pat
   E251 79 BD              2292 	mov	r1,#(_is_toggle_pat >> 8)
   E253 7A 02              2293 	mov	r2,#(_is_toggle_pat >> 16)
   E255 12 00 B3           2294 	lcall	__sdcc_banked_call
   E258 15 81              2295 	dec	sp
   E25A D0 25              2296 	pop	bits
   E25C D0 07              2297 	pop	ar7
   E25E D0 06              2298 	pop	ar6
   E260 D0 05              2299 	pop	ar5
   E262 D0 04              2300 	pop	ar4
   E264 D0 03              2301 	pop	ar3
   E266 D0 02              2302 	pop	ar2
   E268 92 29              2303 	mov	b1,c
   E26A D0 04              2304 	pop	ar4
   E26C 20 29 0B           2305 	jb	b1,00110$
                           2306 ;	../../shared/src/squelch_cal.c:104: up ? --sq_cnt : ++sq_cnt;
   E26F EA                 2307 	mov	a,r2
   E270 60 03              2308 	jz	00147$
   E272 1E                 2309 	dec	r6
   E273 80 01              2310 	sjmp	00105$
   E275                    2311 00147$:
   E275 0E                 2312 	inc	r6
   E276                    2313 00105$:
                           2314 ;	../../shared/src/squelch_cal.c:105: loop_cnt ++;        
   E276 0B                 2315 	inc	r3
   E277 02 E1 D0           2316 	ljmp	00108$
   E27A                    2317 00110$:
                           2318 ;	../../shared/src/squelch_cal.c:107: if ( loop_cnt >= 64 )
   E27A C3                 2319 	clr	c
   E27B EB                 2320 	mov	a,r3
   E27C 64 80              2321 	xrl	a,#0x80
   E27E 94 C0              2322 	subb	a,#0xc0
   E280 40 02              2323 	jc	00112$
                           2324 ;	../../shared/src/squelch_cal.c:108: over_loop_cnt = 1;
   E282 D2 28              2325 	setb	b0
   E284                    2326 00112$:
                           2327 ;	../../shared/src/squelch_cal.c:109: if ( thr_sel == 0x1 )
   E284 BC 01 08           2328 	cjne	r4,#0x01,00114$
                           2329 ;	../../shared/src/squelch_cal.c:110: thr1 = sq_cnt;
   E287 A8 18              2330 	mov	r0,_bp
   E289 08                 2331 	inc	r0
   E28A 08                 2332 	inc	r0
   E28B A6 06              2333 	mov	@r0,ar6
   E28D 80 07              2334 	sjmp	00117$
   E28F                    2335 00114$:
                           2336 ;	../../shared/src/squelch_cal.c:112: thr2 = sq_cnt;
   E28F E5 18              2337 	mov	a,_bp
   E291 24 03              2338 	add	a,#0x03
   E293 F8                 2339 	mov	r0,a
   E294 A6 06              2340 	mov	@r0,ar6
   E296                    2341 00117$:
                           2342 ;	../../shared/src/squelch_cal.c:113: } while ( thr_sel++ < 2 );	
   E296 8C 03              2343 	mov	ar3,r4
   E298 0C                 2344 	inc	r4
   E299 BB 02 00           2345 	cjne	r3,#0x02,00219$
   E29C                    2346 00219$:
   E29C 50 03              2347 	jnc	00220$
   E29E 02 E1 BA           2348 	ljmp	00116$
   E2A1                    2349 00220$:
                           2350 ;	../../shared/src/squelch_cal.c:115: if ( thr_cnt == 0 ) {
   E2A1 A8 18              2351 	mov	r0,_bp
   E2A3 08                 2352 	inc	r0
   E2A4 E6                 2353 	mov	a,@r0
   E2A5 70 4C              2354 	jnz	00120$
                           2355 ;	../../shared/src/squelch_cal.c:120: final_offset = thr1 - thr2;	// This is offset1
   E2A7 A8 18              2356 	mov	r0,_bp
   E2A9 08                 2357 	inc	r0
   E2AA 08                 2358 	inc	r0
   E2AB E5 18              2359 	mov	a,_bp
   E2AD 24 03              2360 	add	a,#0x03
   E2AF F9                 2361 	mov	r1,a
   E2B0 E6                 2362 	mov	a,@r0
   E2B1 C3                 2363 	clr	c
   E2B2 97                 2364 	subb	a,@r1
   E2B3 FB                 2365 	mov	r3,a
   E2B4 E5 18              2366 	mov	a,_bp
   E2B6 24 04              2367 	add	a,#0x04
   E2B8 F8                 2368 	mov	r0,a
   E2B9 A6 03              2369 	mov	@r0,ar3
                           2370 ;	../../shared/src/squelch_cal.c:122: final_offset = final_offset > 15 ? 15 : ( final_offset < - 15 ? -15 : final_offset );
   E2BB E5 18              2371 	mov	a,_bp
   E2BD 24 04              2372 	add	a,#0x04
   E2BF F8                 2373 	mov	r0,a
   E2C0 C3                 2374 	clr	c
   E2C1 74 8F              2375 	mov	a,#(0x0F ^ 0x80)
   E2C3 86 F0              2376 	mov	b,@r0
   E2C5 63 F0 80           2377 	xrl	b,#0x80
   E2C8 95 F0              2378 	subb	a,b
   E2CA 50 04              2379 	jnc	00149$
   E2CC 7B 0F              2380 	mov	r3,#0x0F
   E2CE 80 1A              2381 	sjmp	00150$
   E2D0                    2382 00149$:
   E2D0 E5 18              2383 	mov	a,_bp
   E2D2 24 04              2384 	add	a,#0x04
   E2D4 F8                 2385 	mov	r0,a
   E2D5 C3                 2386 	clr	c
   E2D6 E6                 2387 	mov	a,@r0
   E2D7 64 80              2388 	xrl	a,#0x80
   E2D9 94 71              2389 	subb	a,#0x71
   E2DB 50 04              2390 	jnc	00151$
   E2DD 7C F1              2391 	mov	r4,#0xF1
   E2DF 80 07              2392 	sjmp	00152$
   E2E1                    2393 00151$:
   E2E1 E5 18              2394 	mov	a,_bp
   E2E3 24 04              2395 	add	a,#0x04
   E2E5 F8                 2396 	mov	r0,a
   E2E6 86 04              2397 	mov	ar4,@r0
   E2E8                    2398 00152$:
   E2E8 8C 03              2399 	mov	ar3,r4
   E2EA                    2400 00150$:
   E2EA E5 18              2401 	mov	a,_bp
   E2EC 24 04              2402 	add	a,#0x04
   E2EE F8                 2403 	mov	r0,a
   E2EF A6 03              2404 	mov	@r0,ar3
   E2F1 80 6C              2405 	sjmp	00121$
   E2F3                    2406 00120$:
                           2407 ;	../../shared/src/squelch_cal.c:126: offset2 = thr2 - thr1;
   E2F3 E5 18              2408 	mov	a,_bp
   E2F5 24 03              2409 	add	a,#0x03
   E2F7 F8                 2410 	mov	r0,a
   E2F8 A9 18              2411 	mov	r1,_bp
   E2FA 09                 2412 	inc	r1
   E2FB 09                 2413 	inc	r1
   E2FC E6                 2414 	mov	a,@r0
   E2FD C3                 2415 	clr	c
   E2FE 97                 2416 	subb	a,@r1
   E2FF FB                 2417 	mov	r3,a
                           2418 ;	../../shared/src/squelch_cal.c:128: offset2 = offset2 > 15 ? 15 : ( offset2 < - 15 ? -15 : offset2 );
   E300 C3                 2419 	clr	c
   E301 74 8F              2420 	mov	a,#(0x0F ^ 0x80)
   E303 8B F0              2421 	mov	b,r3
   E305 63 F0 80           2422 	xrl	b,#0x80
   E308 95 F0              2423 	subb	a,b
   E30A 50 04              2424 	jnc	00153$
   E30C 7C 0F              2425 	mov	r4,#0x0F
   E30E 80 10              2426 	sjmp	00154$
   E310                    2427 00153$:
   E310 C3                 2428 	clr	c
   E311 EB                 2429 	mov	a,r3
   E312 64 80              2430 	xrl	a,#0x80
   E314 94 71              2431 	subb	a,#0x71
   E316 50 04              2432 	jnc	00155$
   E318 7F F1              2433 	mov	r7,#0xF1
   E31A 80 02              2434 	sjmp	00156$
   E31C                    2435 00155$:
   E31C 8B 07              2436 	mov	ar7,r3
   E31E                    2437 00156$:
   E31E 8F 04              2438 	mov	ar4,r7
   E320                    2439 00154$:
                           2440 ;	../../shared/src/squelch_cal.c:133: final_offset = final_offset - offset2; // Final offset
   E320 E5 18              2441 	mov	a,_bp
   E322 24 04              2442 	add	a,#0x04
   E324 F8                 2443 	mov	r0,a
   E325 E6                 2444 	mov	a,@r0
   E326 C3                 2445 	clr	c
   E327 9C                 2446 	subb	a,r4
   E328 F6                 2447 	mov	@r0,a
                           2448 ;	../../shared/src/squelch_cal.c:135: final_offset = final_offset > 15 ? 15 : ( final_offset < - 15 ? -15 : final_offset );
   E329 E5 18              2449 	mov	a,_bp
   E32B 24 04              2450 	add	a,#0x04
   E32D F8                 2451 	mov	r0,a
   E32E C3                 2452 	clr	c
   E32F 74 8F              2453 	mov	a,#(0x0F ^ 0x80)
   E331 86 F0              2454 	mov	b,@r0
   E333 63 F0 80           2455 	xrl	b,#0x80
   E336 95 F0              2456 	subb	a,b
   E338 50 04              2457 	jnc	00157$
   E33A 7B 0F              2458 	mov	r3,#0x0F
   E33C 80 1A              2459 	sjmp	00158$
   E33E                    2460 00157$:
   E33E E5 18              2461 	mov	a,_bp
   E340 24 04              2462 	add	a,#0x04
   E342 F8                 2463 	mov	r0,a
   E343 C3                 2464 	clr	c
   E344 E6                 2465 	mov	a,@r0
   E345 64 80              2466 	xrl	a,#0x80
   E347 94 71              2467 	subb	a,#0x71
   E349 50 04              2468 	jnc	00159$
   E34B 7C F1              2469 	mov	r4,#0xF1
   E34D 80 07              2470 	sjmp	00160$
   E34F                    2471 00159$:
   E34F E5 18              2472 	mov	a,_bp
   E351 24 04              2473 	add	a,#0x04
   E353 F8                 2474 	mov	r0,a
   E354 86 04              2475 	mov	ar4,@r0
   E356                    2476 00160$:
   E356 8C 03              2477 	mov	ar3,r4
   E358                    2478 00158$:
   E358 E5 18              2479 	mov	a,_bp
   E35A 24 04              2480 	add	a,#0x04
   E35C F8                 2481 	mov	r0,a
   E35D A6 03              2482 	mov	@r0,ar3
   E35F                    2483 00121$:
                           2484 ;	../../shared/src/squelch_cal.c:138: if ( final_offset > 0 )
   E35F E5 18              2485 	mov	a,_bp
   E361 24 04              2486 	add	a,#0x04
   E363 F8                 2487 	mov	r0,a
   E364 C3                 2488 	clr	c
   E365 74 80              2489 	mov	a,#(0x00 ^ 0x80)
   E367 86 F0              2490 	mov	b,@r0
   E369 63 F0 80           2491 	xrl	b,#0x80
   E36C 95 F0              2492 	subb	a,b
   E36E 50 1C              2493 	jnc	00123$
                           2494 ;	../../shared/src/squelch_cal.c:139: SQ_OFFSET = ( final_offset & 0x0F ) | 0x10;
   E370 E5 18              2495 	mov	a,_bp
   E372 24 04              2496 	add	a,#0x04
   E374 F8                 2497 	mov	r0,a
   E375 74 0F              2498 	mov	a,#0x0F
   E377 56                 2499 	anl	a,@r0
   E378 44 10              2500 	orl	a,#0x10
   E37A FB                 2501 	mov	r3,a
   E37B 90 00 0C           2502 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_3
   E37E C4                 2503 	swap	a
   E37F 03                 2504 	rr	a
   E380 54 F8              2505 	anl	a,#(0xf8&0xf8)
   E382 F5 F0              2506 	mov	b,a
   E384 E0                 2507 	movx	a,@dptr
   E385 54 07              2508 	anl	a,#0x07
   E387 45 F0              2509 	orl	a,b
   E389 F0                 2510 	movx	@dptr,a
   E38A 80 1C              2511 	sjmp	00126$
   E38C                    2512 00123$:
                           2513 ;	../../shared/src/squelch_cal.c:141: SQ_OFFSET = ( -final_offset ) & 0x0F;
   E38C E5 18              2514 	mov	a,_bp
   E38E 24 04              2515 	add	a,#0x04
   E390 F8                 2516 	mov	r0,a
   E391 C3                 2517 	clr	c
   E392 E4                 2518 	clr	a
   E393 96                 2519 	subb	a,@r0
   E394 FB                 2520 	mov	r3,a
   E395 53 03 0F           2521 	anl	ar3,#0x0F
   E398 90 00 0C           2522 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_3
   E39B EB                 2523 	mov	a,r3
   E39C C4                 2524 	swap	a
   E39D 03                 2525 	rr	a
   E39E 54 F8              2526 	anl	a,#(0xf8&0xf8)
   E3A0 F5 F0              2527 	mov	b,a
   E3A2 E0                 2528 	movx	a,@dptr
   E3A3 54 07              2529 	anl	a,#0x07
   E3A5 45 F0              2530 	orl	a,b
   E3A7 F0                 2531 	movx	@dptr,a
   E3A8                    2532 00126$:
                           2533 ;	../../shared/src/squelch_cal.c:142: } while ( thr_cnt++ < 1 );
   E3A8 A8 18              2534 	mov	r0,_bp
   E3AA 08                 2535 	inc	r0
   E3AB 86 03              2536 	mov	ar3,@r0
   E3AD A8 18              2537 	mov	r0,_bp
   E3AF 08                 2538 	inc	r0
   E3B0 06                 2539 	inc	@r0
   E3B1 BB 01 00           2540 	cjne	r3,#0x01,00229$
   E3B4                    2541 00229$:
   E3B4 50 03              2542 	jnc	00230$
   E3B6 02 E1 B8           2543 	ljmp	00179$
   E3B9                    2544 00230$:
                           2545 ;	../../shared/src/squelch_cal.c:145: OFFSETCAL_SEL = 0x03;
   E3B9 90 00 10           2546 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_4
   E3BC E0                 2547 	movx	a,@dptr
   E3BD 44 03              2548 	orl	a,#0x03
   E3BF F0                 2549 	movx	@dptr,a
                           2550 ;	../../shared/src/squelch_cal.c:146: SQ_THRESH = 0x20;
   E3C0 90 00 10           2551 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_4
   E3C3 E0                 2552 	movx	a,@dptr
   E3C4 54 03              2553 	anl	a,#0x03
   E3C6 44 80              2554 	orl	a,#0x80
   E3C8 F0                 2555 	movx	@dptr,a
                           2556 ;	../../shared/src/squelch_cal.c:147: SQ_OFFSET_CAL_EN = 0;
   E3C9 90 00 08           2557 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_2
   E3CC E0                 2558 	movx	a,@dptr
   E3CD 54 FD              2559 	anl	a,#0xfd
   E3CF F0                 2560 	movx	@dptr,a
                           2561 ;	../../shared/src/squelch_cal.c:148: delay01(10);
   E3D0 90 00 0A           2562 	mov	dptr,#0x000A
   E3D3 C0 25              2563 	push	bits
   E3D5 78 16              2564 	mov	r0,#_delay01
   E3D7 79 BC              2565 	mov	r1,#(_delay01 >> 8)
   E3D9 7A 02              2566 	mov	r2,#(_delay01 >> 16)
   E3DB 12 00 B3           2567 	lcall	__sdcc_banked_call
   E3DE D0 25              2568 	pop	bits
                           2569 ;	../../shared/src/squelch_cal.c:149: SQ_THRESH_CAL_EN = 1;
   E3E0 90 02 14           2570 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_133
   E3E3 E0                 2571 	movx	a,@dptr
   E3E4 44 04              2572 	orl	a,#0x04
   E3E6 F0                 2573 	movx	@dptr,a
                           2574 ;	../../shared/src/squelch_cal.c:150: delay01(10);
   E3E7 90 00 0A           2575 	mov	dptr,#0x000A
   E3EA C0 25              2576 	push	bits
   E3EC 78 16              2577 	mov	r0,#_delay01
   E3EE 79 BC              2578 	mov	r1,#(_delay01 >> 8)
   E3F0 7A 02              2579 	mov	r2,#(_delay01 >> 16)
   E3F2 12 00 B3           2580 	lcall	__sdcc_banked_call
   E3F5 D0 25              2581 	pop	bits
                           2582 ;	../../shared/src/squelch_cal.c:153: do {
   E3F7 7B 00              2583 	mov	r3,#0x00
   E3F9                    2584 00140$:
                           2585 ;	../../shared/src/squelch_cal.c:154: sq_cnt = 0;
   E3F9 7E 00              2586 	mov	r6,#0x00
                           2587 ;	../../shared/src/squelch_cal.c:156: dir    = 0;
   E3FB 7D 00              2588 	mov	r5,#0x00
                           2589 ;	../../shared/src/squelch_cal.c:158: SQ_REFTHR = ( 0 == thr_cnt ) ? 0x07 : 0x17;	// SQ_REFTHR = 00111b and then 10111b
   E3FD BB 00 04           2590 	cjne	r3,#0x00,00161$
   E400 7C 07              2591 	mov	r4,#0x07
   E402 80 02              2592 	sjmp	00162$
   E404                    2593 00161$:
   E404 7C 17              2594 	mov	r4,#0x17
   E406                    2595 00162$:
   E406 90 02 14           2596 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_133
   E409 EC                 2597 	mov	a,r4
   E40A C4                 2598 	swap	a
   E40B 03                 2599 	rr	a
   E40C 54 F8              2600 	anl	a,#(0xf8&0xf8)
   E40E F5 F0              2601 	mov	b,a
   E410 E0                 2602 	movx	a,@dptr
   E411 54 07              2603 	anl	a,#0x07
   E413 45 F0              2604 	orl	a,b
   E415 F0                 2605 	movx	@dptr,a
                           2606 ;	../../shared/src/squelch_cal.c:159: while ( ( loop_cnt < 64 ) && ( sq_cnt != 32 ) && ( sq_cnt != -32 ) ) {
   E416 E5 18              2607 	mov	a,_bp
   E418 24 05              2608 	add	a,#0x05
   E41A F8                 2609 	mov	r0,a
   E41B 76 00              2610 	mov	@r0,#0x00
   E41D 7F 00              2611 	mov	r7,#0x00
   E41F                    2612 00132$:
   E41F C3                 2613 	clr	c
   E420 EF                 2614 	mov	a,r7
   E421 64 80              2615 	xrl	a,#0x80
   E423 94 C0              2616 	subb	a,#0xc0
   E425 40 03              2617 	jc	00233$
   E427 02 E4 C7           2618 	ljmp	00134$
   E42A                    2619 00233$:
   E42A BE 20 03           2620 	cjne	r6,#0x20,00234$
   E42D 02 E4 C7           2621 	ljmp	00134$
   E430                    2622 00234$:
   E430 BE E0 03           2623 	cjne	r6,#0xE0,00235$
   E433 02 E4 C7           2624 	ljmp	00134$
   E436                    2625 00235$:
                           2626 ;	../../shared/src/squelch_cal.c:160: SQ_THRESH = ( sq_cnt < 0 ) ? -sq_cnt : ( sq_cnt + 0x20 );	// Bit[6] is sign bit, 1 = pos
   E436 EE                 2627 	mov	a,r6
   E437 30 E7 06           2628 	jnb	acc.7,00163$
   E43A C3                 2629 	clr	c
   E43B E4                 2630 	clr	a
   E43C 9E                 2631 	subb	a,r6
   E43D FC                 2632 	mov	r4,a
   E43E 80 04              2633 	sjmp	00164$
   E440                    2634 00163$:
   E440 74 20              2635 	mov	a,#0x20
   E442 2E                 2636 	add	a,r6
   E443 FC                 2637 	mov	r4,a
   E444                    2638 00164$:
   E444 90 00 10           2639 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_4
   E447 EC                 2640 	mov	a,r4
   E448 2C                 2641 	add	a,r4
   E449 25 E0              2642 	add	a,acc
   E44B 54 FC              2643 	anl	a,#0xfc
   E44D F5 F0              2644 	mov	b,a
   E44F E0                 2645 	movx	a,@dptr
   E450 54 03              2646 	anl	a,#0x03
   E452 45 F0              2647 	orl	a,b
   E454 F0                 2648 	movx	@dptr,a
                           2649 ;	../../shared/src/squelch_cal.c:161: delay01(5);
   E455 90 00 05           2650 	mov	dptr,#0x0005
   E458 C0 03              2651 	push	ar3
   E45A C0 05              2652 	push	ar5
   E45C C0 06              2653 	push	ar6
   E45E C0 07              2654 	push	ar7
   E460 C0 25              2655 	push	bits
   E462 78 16              2656 	mov	r0,#_delay01
   E464 79 BC              2657 	mov	r1,#(_delay01 >> 8)
   E466 7A 02              2658 	mov	r2,#(_delay01 >> 16)
   E468 12 00 B3           2659 	lcall	__sdcc_banked_call
   E46B D0 25              2660 	pop	bits
   E46D D0 07              2661 	pop	ar7
   E46F D0 06              2662 	pop	ar6
   E471 D0 05              2663 	pop	ar5
   E473 D0 03              2664 	pop	ar3
                           2665 ;	../../shared/src/squelch_cal.c:162: up = SQ_OUT;
   E475 90 21 50           2666 	mov	dptr,#_RX_CALIBRATION_REG
   E478 E0                 2667 	movx	a,@dptr
   E479 C4                 2668 	swap	a
   E47A 54 01              2669 	anl	a,#0x01
   E47C FA                 2670 	mov	r2,a
                           2671 ;	../../shared/src/squelch_cal.c:163: dir = ( dir << 1 ) | up;
   E47D ED                 2672 	mov	a,r5
   E47E 2D                 2673 	add	a,r5
   E47F FC                 2674 	mov	r4,a
   E480 EA                 2675 	mov	a,r2
   E481 42 04              2676 	orl	ar4,a
   E483 8C 05              2677 	mov	ar5,r4
                           2678 ;	../../shared/src/squelch_cal.c:164: ++output_cnt;
   E485 E5 18              2679 	mov	a,_bp
   E487 24 05              2680 	add	a,#0x05
   E489 F8                 2681 	mov	r0,a
   E48A 06                 2682 	inc	@r0
                           2683 ;	../../shared/src/squelch_cal.c:165: if ( is_toggle_pat( dir, output_cnt ) )
   E48B C0 02              2684 	push	ar2
   E48D C0 03              2685 	push	ar3
   E48F C0 05              2686 	push	ar5
   E491 C0 06              2687 	push	ar6
   E493 C0 07              2688 	push	ar7
   E495 C0 25              2689 	push	bits
   E497 E5 18              2690 	mov	a,_bp
   E499 24 05              2691 	add	a,#0x05
   E49B F8                 2692 	mov	r0,a
   E49C E6                 2693 	mov	a,@r0
   E49D C0 E0              2694 	push	acc
   E49F 8D 82              2695 	mov	dpl,r5
   E4A1 78 CD              2696 	mov	r0,#_is_toggle_pat
   E4A3 79 BD              2697 	mov	r1,#(_is_toggle_pat >> 8)
   E4A5 7A 02              2698 	mov	r2,#(_is_toggle_pat >> 16)
   E4A7 12 00 B3           2699 	lcall	__sdcc_banked_call
   E4AA 15 81              2700 	dec	sp
   E4AC D0 25              2701 	pop	bits
   E4AE D0 07              2702 	pop	ar7
   E4B0 D0 06              2703 	pop	ar6
   E4B2 D0 05              2704 	pop	ar5
   E4B4 D0 03              2705 	pop	ar3
   E4B6 D0 02              2706 	pop	ar2
   E4B8 92 29              2707 	mov	b1,c
   E4BA 40 0B              2708 	jc	00134$
                           2709 ;	../../shared/src/squelch_cal.c:167: up ? --sq_cnt : ++sq_cnt;
   E4BC EA                 2710 	mov	a,r2
   E4BD 60 03              2711 	jz	00165$
   E4BF 1E                 2712 	dec	r6
   E4C0 80 01              2713 	sjmp	00166$
   E4C2                    2714 00165$:
   E4C2 0E                 2715 	inc	r6
   E4C3                    2716 00166$:
                           2717 ;	../../shared/src/squelch_cal.c:168: loop_cnt ++;
   E4C3 0F                 2718 	inc	r7
   E4C4 02 E4 1F           2719 	ljmp	00132$
   E4C7                    2720 00134$:
                           2721 ;	../../shared/src/squelch_cal.c:170: if ( loop_cnt >= 64 )
   E4C7 C3                 2722 	clr	c
   E4C8 EF                 2723 	mov	a,r7
   E4C9 64 80              2724 	xrl	a,#0x80
   E4CB 94 C0              2725 	subb	a,#0xc0
   E4CD 40 02              2726 	jc	00136$
                           2727 ;	../../shared/src/squelch_cal.c:171: over_loop_cnt = 1;
   E4CF D2 28              2728 	setb	b0
   E4D1                    2729 00136$:
                           2730 ;	../../shared/src/squelch_cal.c:172: if ( thr_cnt == 0 )
   E4D1 EB                 2731 	mov	a,r3
   E4D2 70 08              2732 	jnz	00138$
                           2733 ;	../../shared/src/squelch_cal.c:173: thr1 = sq_cnt;
   E4D4 A8 18              2734 	mov	r0,_bp
   E4D6 08                 2735 	inc	r0
   E4D7 08                 2736 	inc	r0
   E4D8 A6 06              2737 	mov	@r0,ar6
   E4DA 80 07              2738 	sjmp	00141$
   E4DC                    2739 00138$:
                           2740 ;	../../shared/src/squelch_cal.c:175: thr2 = sq_cnt;
   E4DC E5 18              2741 	mov	a,_bp
   E4DE 24 03              2742 	add	a,#0x03
   E4E0 F8                 2743 	mov	r0,a
   E4E1 A6 06              2744 	mov	@r0,ar6
   E4E3                    2745 00141$:
                           2746 ;	../../shared/src/squelch_cal.c:176: }  while( thr_cnt++ < 1 );
   E4E3 8B 02              2747 	mov	ar2,r3
   E4E5 0B                 2748 	inc	r3
   E4E6 BA 01 00           2749 	cjne	r2,#0x01,00241$
   E4E9                    2750 00241$:
   E4E9 50 03              2751 	jnc	00242$
   E4EB 02 E3 F9           2752 	ljmp	00140$
   E4EE                    2753 00242$:
                           2754 ;	../../shared/src/squelch_cal.c:177: sq_cnt = ( thr1 + thr2 ) >> 1;
   E4EE A8 18              2755 	mov	r0,_bp
   E4F0 08                 2756 	inc	r0
   E4F1 08                 2757 	inc	r0
   E4F2 86 02              2758 	mov	ar2,@r0
   E4F4 E6                 2759 	mov	a,@r0
   E4F5 33                 2760 	rlc	a
   E4F6 95 E0              2761 	subb	a,acc
   E4F8 FB                 2762 	mov	r3,a
   E4F9 E5 18              2763 	mov	a,_bp
   E4FB 24 03              2764 	add	a,#0x03
   E4FD F8                 2765 	mov	r0,a
   E4FE 86 04              2766 	mov	ar4,@r0
   E500 E6                 2767 	mov	a,@r0
   E501 33                 2768 	rlc	a
   E502 95 E0              2769 	subb	a,acc
   E504 FD                 2770 	mov	r5,a
   E505 EC                 2771 	mov	a,r4
   E506 2A                 2772 	add	a,r2
   E507 FA                 2773 	mov	r2,a
   E508 ED                 2774 	mov	a,r5
   E509 3B                 2775 	addc	a,r3
   E50A A2 E7              2776 	mov	c,acc.7
   E50C 13                 2777 	rrc	a
   E50D CA                 2778 	xch	a,r2
   E50E 13                 2779 	rrc	a
   E50F CA                 2780 	xch	a,r2
   E510 FB                 2781 	mov	r3,a
   E511 8A 06              2782 	mov	ar6,r2
                           2783 ;	../../shared/src/squelch_cal.c:178: SQ_THRESH = ( sq_cnt < 0 ) ? -sq_cnt : ( sq_cnt + 0x20 );
   E513 EE                 2784 	mov	a,r6
   E514 30 E7 06           2785 	jnb	acc.7,00167$
   E517 C3                 2786 	clr	c
   E518 E4                 2787 	clr	a
   E519 9E                 2788 	subb	a,r6
   E51A FA                 2789 	mov	r2,a
   E51B 80 04              2790 	sjmp	00168$
   E51D                    2791 00167$:
   E51D 74 20              2792 	mov	a,#0x20
   E51F 2E                 2793 	add	a,r6
   E520 FA                 2794 	mov	r2,a
   E521                    2795 00168$:
   E521 90 00 10           2796 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_4
   E524 EA                 2797 	mov	a,r2
   E525 2A                 2798 	add	a,r2
   E526 25 E0              2799 	add	a,acc
   E528 54 FC              2800 	anl	a,#0xfc
   E52A F5 F0              2801 	mov	b,a
   E52C E0                 2802 	movx	a,@dptr
   E52D 54 03              2803 	anl	a,#0x03
   E52F 45 F0              2804 	orl	a,b
   E531 F0                 2805 	movx	@dptr,a
                           2806 ;	../../shared/src/squelch_cal.c:180: SQ_THRESH_CAL_EN = 0;
   E532 90 02 14           2807 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_133
   E535 E0                 2808 	movx	a,@dptr
   E536 54 FB              2809 	anl	a,#0xfb
   E538 F0                 2810 	movx	@dptr,a
                           2811 ;	../../shared/src/squelch_cal.c:181: delay01(10);
   E539 90 00 0A           2812 	mov	dptr,#0x000A
   E53C C0 25              2813 	push	bits
   E53E 78 16              2814 	mov	r0,#_delay01
   E540 79 BC              2815 	mov	r1,#(_delay01 >> 8)
   E542 7A 02              2816 	mov	r2,#(_delay01 >> 16)
   E544 12 00 B3           2817 	lcall	__sdcc_banked_call
   E547 D0 25              2818 	pop	bits
                           2819 ;	../../shared/src/squelch_cal.c:182: SQ_CAL_EN = 0;
   E549 90 02 0C           2820 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_131
   E54C E0                 2821 	movx	a,@dptr
   E54D 54 FD              2822 	anl	a,#0xfd
   E54F F0                 2823 	movx	@dptr,a
                           2824 ;	../../shared/src/squelch_cal.c:183: OFFSETCAL_SEL  = 0x3;
   E550 90 00 10           2825 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_4
   E553 E0                 2826 	movx	a,@dptr
   E554 44 03              2827 	orl	a,#0x03
   E556 F0                 2828 	movx	@dptr,a
                           2829 ;	../../shared/src/squelch_cal.c:185: lnx_CAL_SQ_OFFSET_LANE_7_0 = SQ_OFFSET;
   E557 90 00 0C           2830 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_3
   E55A E0                 2831 	movx	a,@dptr
   E55B C4                 2832 	swap	a
   E55C 23                 2833 	rl	a
   E55D 54 1F              2834 	anl	a,#0x1f
   E55F 90 60 12           2835 	mov	dptr,#(_CAL_SAVE_DATA1_LANE + 0x0002)
   E562 F0                 2836 	movx	@dptr,a
                           2837 ;	../../shared/src/squelch_cal.c:186: lnx_CAL_SQ_THRESH_LANE_7_0 = SQ_THRESH;
   E563 90 00 10           2838 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_4
   E566 E0                 2839 	movx	a,@dptr
   E567 03                 2840 	rr	a
   E568 03                 2841 	rr	a
   E569 54 3F              2842 	anl	a,#0x3f
   E56B 90 60 13           2843 	mov	dptr,#(_CAL_SAVE_DATA1_LANE + 0x0003)
   E56E F0                 2844 	movx	@dptr,a
                           2845 ;	../../shared/src/squelch_cal.c:188: lnx_SQ_CAL_DONE_LANE = 1;
   E56F 90 60 02           2846 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0002)
   E572 E0                 2847 	movx	a,@dptr
   E573 44 04              2848 	orl	a,#0x04
   E575 F0                 2849 	movx	@dptr,a
                           2850 ;	../../shared/src/squelch_cal.c:189: lnx_SQ_CAL_PASS_LANE = ( 0 == over_loop_cnt );  // Pass = 1 indicates no timeout (toggled or reached boundaries)
   E576 A2 28              2851 	mov	c,b0
   E578 E4                 2852 	clr	a
   E579 33                 2853 	rlc	a
   E57A FA                 2854 	mov	r2,a
   E57B BA 00 03           2855 	cjne	r2,#0x00,00244$
   E57E D3                 2856 	setb	c
   E57F 80 01              2857 	sjmp	00245$
   E581                    2858 00244$:
   E581 C3                 2859 	clr	c
   E582                    2860 00245$:
   E582 92 28              2861 	mov  b0,c
   E584 E4                 2862 	clr	a
   E585 33                 2863 	rlc	a
   E586 FA                 2864 	mov	r2,a
   E587 90 60 06           2865 	mov	dptr,#(_CAL_CTRL2_LANE + 0x0002)
   E58A 13                 2866 	rrc	a
   E58B E0                 2867 	movx	a,@dptr
   E58C 92 E5              2868 	mov	acc.5,c
   E58E F0                 2869 	movx	@dptr,a
   E58F                    2870 00143$:
   E58F 85 18 81           2871 	mov	sp,_bp
   E592 D0 18              2872 	pop	_bp
   E594 02 00 C5           2873 	ljmp	__sdcc_banked_ret
                           2874 	.area CSEG    (CODE)
                           2875 	.area BANK2   (CODE)
                           2876 	.area CABS    (ABS,CODE)
