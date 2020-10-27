                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:24 2018
                              5 ;--------------------------------------------------------
                              6 	.module dcc_cal
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _rxdcc_clk_toggle
                             13 	.globl _txdcc_clk_toggle
                             14 	.globl _TF2
                             15 	.globl _TI
                             16 	.globl _RI
                             17 	.globl _EX12
                             18 	.globl _EX11
                             19 	.globl _EX10
                             20 	.globl _EX9
                             21 	.globl _EX8
                             22 	.globl _ES1
                             23 	.globl _PS1
                             24 	.globl _EX6
                             25 	.globl _EX5
                             26 	.globl _EX4
                             27 	.globl _EX3
                             28 	.globl _EX2
                             29 	.globl _EX7
                             30 	.globl _EA
                             31 	.globl _WDT
                             32 	.globl _ET2
                             33 	.globl _ES
                             34 	.globl _ET1
                             35 	.globl _EX1
                             36 	.globl _ET0
                             37 	.globl _EX0
                             38 	.globl _TF1
                             39 	.globl _TR1
                             40 	.globl _TF0
                             41 	.globl _TR0
                             42 	.globl _IE1
                             43 	.globl _IT1
                             44 	.globl _IE0
                             45 	.globl _IT0
                             46 	.globl _P3_7
                             47 	.globl _P3_6
                             48 	.globl _P3_5
                             49 	.globl _P3_4
                             50 	.globl _P3_3
                             51 	.globl _P3_2
                             52 	.globl _P3_1
                             53 	.globl _P3_0
                             54 	.globl _P2_7
                             55 	.globl _P2_6
                             56 	.globl _P2_5
                             57 	.globl _P2_4
                             58 	.globl _P2_3
                             59 	.globl _P2_2
                             60 	.globl _P2_1
                             61 	.globl _P2_0
                             62 	.globl _P1_7
                             63 	.globl _P1_6
                             64 	.globl _P1_5
                             65 	.globl _P1_4
                             66 	.globl _P1_3
                             67 	.globl _P1_2
                             68 	.globl _P1_1
                             69 	.globl _P1_0
                             70 	.globl _P0_7
                             71 	.globl _P0_6
                             72 	.globl _P0_5
                             73 	.globl _P0_4
                             74 	.globl _P0_3
                             75 	.globl _P0_2
                             76 	.globl _P0_1
                             77 	.globl _P0_0
                             78 	.globl _DMAC
                             79 	.globl _DMATA
                             80 	.globl _DMASA
                             81 	.globl _TMR2
                             82 	.globl _TMR1
                             83 	.globl _TMR0
                             84 	.globl _SRST
                             85 	.globl _B
                             86 	.globl _EIE
                             87 	.globl _ACC
                             88 	.globl _ADCON
                             89 	.globl _PSW
                             90 	.globl _TH2
                             91 	.globl _TL2
                             92 	.globl _RCAP2H
                             93 	.globl _RCAP2L
                             94 	.globl _T2CON
                             95 	.globl _CCEN
                             96 	.globl _IRCON
                             97 	.globl _S0RELH
                             98 	.globl _IP1
                             99 	.globl _IEN1
                            100 	.globl _DMAM1
                            101 	.globl _DMAM0
                            102 	.globl _DMASEL
                            103 	.globl _DMAC2
                            104 	.globl _DMAC1
                            105 	.globl _DMAC0
                            106 	.globl _P3
                            107 	.globl _S0RELL
                            108 	.globl _IP0
                            109 	.globl _IEN0
                            110 	.globl _DMAT2
                            111 	.globl _DMAT1
                            112 	.globl _DMAT0
                            113 	.globl _DMAS2
                            114 	.globl _DMAS1
                            115 	.globl _DMAS0
                            116 	.globl _P2
                            117 	.globl _IEN2
                            118 	.globl _SBUF
                            119 	.globl _SCON
                            120 	.globl _PSBANK
                            121 	.globl _DPS
                            122 	.globl _P1
                            123 	.globl _CKCON
                            124 	.globl _TH1
                            125 	.globl _TH0
                            126 	.globl _TL1
                            127 	.globl _TL0
                            128 	.globl _TMOD
                            129 	.globl _TCON
                            130 	.globl _PCON
                            131 	.globl _WDTREL
                            132 	.globl _DPH
                            133 	.globl _DPL
                            134 	.globl _P0
                            135 	.globl _sq_thrs_ratio_tb
                            136 	.globl _train_save_tb
                            137 	.globl _tx_tb
                            138 	.globl _UPHY_ANAREG_REV_0
                            139 	.globl _dfe_sm_save
                            140 	.globl _dfe_sm_dc
                            141 	.globl _dfe_sm
                            142 	.globl _cds28
                            143 	.globl _lnx_calx_align90_gm
                            144 	.globl _lnx_calx_align90_dac
                            145 	.globl _lnx_calx_align90_dummy_clk
                            146 	.globl _lnx_calx_eom_dpher
                            147 	.globl _lnx_calx_vdda_dll_eom_sel
                            148 	.globl _lnx_calx_dll_eom_gmsel
                            149 	.globl _lnx_calx_vdda_dll_sel
                            150 	.globl _lnx_calx_dll_gmsel
                            151 	.globl _lnx_calx_rxdcc_dll_hg
                            152 	.globl _lnx_calx_rxdcc_dll
                            153 	.globl _lnx_calx_txdcc_hg
                            154 	.globl _lnx_calx_txdcc
                            155 	.globl _lnx_calx_txdcc_pdiv_hg
                            156 	.globl _lnx_calx_txdcc_pdiv
                            157 	.globl _lnx_spdoft_tx_preset_index_lane
                            158 	.globl _lnx_cal_sellv_rxeomclk
                            159 	.globl _lnx_cal_sellv_rxsampler
                            160 	.globl _lnx_cal_sellv_txpre
                            161 	.globl _lnx_cal_sellv_rxdataclk
                            162 	.globl _lnx_cal_sellv_txclk
                            163 	.globl _lnx_cal_sellv_txdata
                            164 	.globl _lnx_cal_align90_gm
                            165 	.globl _lnx_cal_align90_dac
                            166 	.globl _lnx_cal_align90_dummy_clk
                            167 	.globl _lnx_cal_eom_dpher
                            168 	.globl _lnx_cal_vdda_dll_eom_sel
                            169 	.globl _lnx_cal_dll_eom_gmsel
                            170 	.globl _lnx_cal_vdda_dll_sel
                            171 	.globl _lnx_cal_dll_gmsel
                            172 	.globl _lnx_cal_rxdcc_eom_hg
                            173 	.globl _lnx_cal_rxdcc_eom
                            174 	.globl _lnx_cal_rxdcc_data_hg
                            175 	.globl _lnx_cal_rxdcc_data
                            176 	.globl _lnx_cal_rxdcc_dll_hg
                            177 	.globl _lnx_cal_rxdcc_dll
                            178 	.globl _lnx_cal_txdcc_hg
                            179 	.globl _lnx_cal_txdcc
                            180 	.globl _lnx_cal_txdcc_pdiv_hg
                            181 	.globl _lnx_cal_txdcc_pdiv
                            182 	.globl _cmx_cal_sllp_dac_fine_ring
                            183 	.globl _cmx_cal_pll_sllp_dac_coarse_ring
                            184 	.globl _cmx_cal_pll_speed_ring
                            185 	.globl _cmx_cal_plldcc
                            186 	.globl _cmx_cal_lccap_lsb
                            187 	.globl _cmx_cal_lccap_msb
                            188 	.globl _cmx_cal_lcvco_dac_msb
                            189 	.globl _cmx_cal_lcvco_dac_lsb
                            190 	.globl _cmx_cal_lcvco_dac
                            191 	.globl _local_tx_preset_tb
                            192 	.globl _train_g0_index
                            193 	.globl _train_g1_index
                            194 	.globl _train_gn1_index
                            195 	.globl _phase_save
                            196 	.globl _txffe_save
                            197 	.globl _rc_save
                            198 	.globl _phy_mode_lane_table
                            199 	.globl _speedtable
                            200 	.globl _min_gen
                            201 	.globl _max_gen
                            202 	.globl _phy_mode_cmn_table
                            203 	.globl _ring_speedtable
                            204 	.globl _lc_speedtable
                            205 	.globl _TXTRAIN_IF_REG0
                            206 	.globl _CDS_READ_MISC1
                            207 	.globl _CDS_READ_MISC0
                            208 	.globl _DFE_READ_F0D_RIGHT_ODD
                            209 	.globl _DFE_READ_F0D_RIGHT_EVEN
                            210 	.globl _DFE_READ_F0D_LEFT_ODD
                            211 	.globl _DFE_READ_F0D_LEFT_EVEN
                            212 	.globl _DFE_READ_F0D_ODD
                            213 	.globl _DFE_READ_F0D_EVEN
                            214 	.globl _DFE_READ_F0B_ODD
                            215 	.globl _DFE_READ_F0B_EVEN
                            216 	.globl _DFE_READ_F0A_ODD
                            217 	.globl _DFE_READ_F0A_EVEN
                            218 	.globl _DFE_READ_ODD_REG8
                            219 	.globl _DFE_READ_EVEN_REG8
                            220 	.globl _DFE_READ_ODD_REG7
                            221 	.globl _DFE_READ_ODD_REG6
                            222 	.globl _DFE_READ_ODD_REG5
                            223 	.globl _DFE_READ_ODD_REG4
                            224 	.globl _DFE_READ_ODD_REG3
                            225 	.globl _DFE_READ_ODD_REG2
                            226 	.globl _DFE_READ_ODD_REG1
                            227 	.globl _DFE_READ_ODD_REG0
                            228 	.globl _DFE_READ_EVEN_REG7
                            229 	.globl _DFE_READ_EVEN_REG6
                            230 	.globl _DFE_READ_EVEN_REG5
                            231 	.globl _DFE_READ_EVEN_REG4
                            232 	.globl _DFE_READ_EVEN_REG3
                            233 	.globl _DFE_READ_EVEN_REG2
                            234 	.globl _DFE_READ_EVEN_REG1
                            235 	.globl _DFE_READ_EVEN_REG0
                            236 	.globl _TX_TRAIN_IF_REG8
                            237 	.globl _TX_TRAIN_CTRL_LANE
                            238 	.globl _TX_TRAIN_IF_REG7
                            239 	.globl _TX_TRAIN_IF_REG6
                            240 	.globl _TX_TRAIN_IF_REG5
                            241 	.globl _TX_TRAIN_IF_REG4
                            242 	.globl _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE
                            243 	.globl _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE
                            244 	.globl _TRX_TRAIN_IF_INTERRUPT_LANE
                            245 	.globl _TX_AMP_CTRL_REG0
                            246 	.globl _TX_DRV_RD_OUT_REG0
                            247 	.globl _LINK_TRAIN_MODE0
                            248 	.globl _TX_EMPH_CTRL_REG0
                            249 	.globl _TX_TRAIN_DEFAULT_REG5
                            250 	.globl _TX_TRAIN_DEFAULT_REG4
                            251 	.globl _TX_TRAIN_DEFAULT_REG3
                            252 	.globl _TX_TRAIN_DEFAULT_REG2
                            253 	.globl _TX_TRAIN_DEFAULT_REG1
                            254 	.globl _TX_TRAIN_DEFAULT_REG0
                            255 	.globl _TX_TRAIN_DRIVER_REG2
                            256 	.globl _TX_TRAIN_DRIVER_REG1
                            257 	.globl _TX_TRAIN_DRIVER_REG0
                            258 	.globl _TX_TRAIN_PATTTERN_REG0
                            259 	.globl _TX_TRAIN_IF_REG3
                            260 	.globl _TX_TRAIN_IF_REG2
                            261 	.globl _TX_TRAIN_IF_REG1
                            262 	.globl _TX_TRAIN_IF_REG0
                            263 	.globl _DME_DEC_REG1
                            264 	.globl _DME_DEC_REG0
                            265 	.globl _DME_ENC_REG2
                            266 	.globl _DME_ENC_REG1
                            267 	.globl _DME_ENC_REG0
                            268 	.globl _END_XDAT_CMN
                            269 	.globl _MCU_INFO_13
                            270 	.globl _MCU_INFO_12
                            271 	.globl _MCU_INFO_5
                            272 	.globl _MCU_INFO_4
                            273 	.globl _SYNC_INFO
                            274 	.globl _CDS_EYE_CLK_THR
                            275 	.globl _TX_SAVE_4
                            276 	.globl _TX_SAVE_3
                            277 	.globl _TX_SAVE_2
                            278 	.globl _TX_SAVE_1
                            279 	.globl _TX_SAVE_0
                            280 	.globl _ETH_PRESET1_TB
                            281 	.globl _ETH_PRESET0_TB
                            282 	.globl _SAS_PRESET2_TB
                            283 	.globl _SAS_PRESET1_TB
                            284 	.globl _SAS_PRESET0_TB
                            285 	.globl _G_SELLV_RXSAMPLER
                            286 	.globl _G_SELLV_RXDATACLK
                            287 	.globl _G_SELLV_RXEOMCLK
                            288 	.globl _G_SELLV_TXPRE
                            289 	.globl _G_SELLV_TXDATA
                            290 	.globl _G_SELLV_TXCLK
                            291 	.globl _TIMER_SEL3
                            292 	.globl _TIMER_SEL2
                            293 	.globl _TIMER_SEL1
                            294 	.globl _MCU_CONFIG1
                            295 	.globl _LOOP_CNTS
                            296 	.globl _CAL_DATA1
                            297 	.globl _MCU_CONFIG
                            298 	.globl _CAL_STATUS_READ
                            299 	.globl _CAL_TIME_OUT_AND_DIS
                            300 	.globl _CON_CAL_STEP_SIZE5
                            301 	.globl _CON_CAL_STEP_SIZE4
                            302 	.globl _CON_CAL_STEP_SIZE3
                            303 	.globl _CON_CAL_STEP_SIZE2
                            304 	.globl _CON_CAL_STEP_SIZE1
                            305 	.globl _CONTROL_CONFIG9
                            306 	.globl _CONTROL_CONFIG8
                            307 	.globl _TRAIN_IF_CONFIG
                            308 	.globl _CAL_DATA0
                            309 	.globl _CONTROL_CONFIG7
                            310 	.globl _CONTROL_CONFIG6
                            311 	.globl _CONTROL_CONFIG5
                            312 	.globl _CONTROL_CONFIG4
                            313 	.globl _CONTROL_CONFIG3
                            314 	.globl _CONTROL_CONFIG2
                            315 	.globl _CONTROL_CONFIG1
                            316 	.globl _CONTROL_CONFIG0
                            317 	.globl _FW_REV
                            318 	.globl _CID_REG1
                            319 	.globl _CID_REG0
                            320 	.globl _CMN_MCU_REG
                            321 	.globl _SET_LANE_ISR
                            322 	.globl _CMN_ISR_MASK_1
                            323 	.globl _CMN_ISR_1
                            324 	.globl _CMN_MCU_TIMER3_CONTROL
                            325 	.globl _CMN_MCU_TIMER2_CONTROL
                            326 	.globl _CMN_MCU_TIMER1_CONTROL
                            327 	.globl _CMN_MCU_TIMER0_CONTROL
                            328 	.globl _CMN_MCU_TIMER_CTRL_5_LANE
                            329 	.globl _CMN_MCU_TIMER_CTRL_4_LANE
                            330 	.globl _CMN_MCU_TIMER_CTRL_3_LANE
                            331 	.globl _CMN_MCU_TIMER_CTRL_2_LANE
                            332 	.globl _CMN_MCU_TIMER_CONTROL
                            333 	.globl _CMN_CACHE_DEBUG1
                            334 	.globl _CMN_MCU_GPIO
                            335 	.globl _CMN_ISR_CLEAR_2
                            336 	.globl _CMN_ISR_MASK_2
                            337 	.globl _CMN_ISR_2
                            338 	.globl _MCU_INT_ADDR
                            339 	.globl _CMN_CACHE_DEBUG0
                            340 	.globl _MCU_SDT_CMN
                            341 	.globl _XDATA_MEM_CHECKSUM_CMN_2
                            342 	.globl _XDATA_MEM_CHECKSUM_CMN_1
                            343 	.globl _XDATA_MEM_CHECKSUM_CMN_0
                            344 	.globl _TEST5
                            345 	.globl _PM_CMN_REG2
                            346 	.globl _INPUT_CMN_PIN_REG3
                            347 	.globl __FIELDNAME_
                            348 	.globl _CMN_CALIBRATION
                            349 	.globl _OUTPUT_CMN_PIN_REG0
                            350 	.globl _SPD_CMN_REG1
                            351 	.globl _CLKGEN_CMN_REG1
                            352 	.globl _PLLCAL_REG1
                            353 	.globl _PLLCAL_REG0
                            354 	.globl _ANA_TSEN_CONTROL
                            355 	.globl _INPUT_CMN_PIN_REG2
                            356 	.globl _INPUT_CMN_PIN_REG1
                            357 	.globl _INPUT_CMN_PIN_REG0
                            358 	.globl _PM_CMN_REG1
                            359 	.globl _SYSTEM
                            360 	.globl _TEST4
                            361 	.globl _TEST3
                            362 	.globl _TEST2
                            363 	.globl _TEST1
                            364 	.globl _TEST0
                            365 	.globl _MCU_SYNC2
                            366 	.globl _MCU_SYNC1
                            367 	.globl _MEM_IRQ_CLEAR
                            368 	.globl _APB_CONTROL_REG
                            369 	.globl _ANA_IF_CMN_REG0
                            370 	.globl _MEM_IRQ_MASK
                            371 	.globl _MEM_IRQ
                            372 	.globl _ANA_IF_CMN_REG1
                            373 	.globl _MEM_CMN_ECC_ERR_ADDRESS0
                            374 	.globl _MCU_INFO_3
                            375 	.globl _MCU_INFO_2
                            376 	.globl _MCU_INFO_1
                            377 	.globl _MCU_INFO_0
                            378 	.globl _MEMORY_CONTROL_4
                            379 	.globl _MEMORY_CONTROL_3
                            380 	.globl _MEMORY_CONTROL_2
                            381 	.globl _MEMORY_CONTROL_1
                            382 	.globl _MEMORY_CONTROL_0
                            383 	.globl _MCU_DEBUG1
                            384 	.globl _MCU_DEBUG0
                            385 	.globl _MCU_CONTROL_4
                            386 	.globl _MCU_CONTROL_3
                            387 	.globl _MCU_CONTROL_2
                            388 	.globl _MCU_CONTROL_1
                            389 	.globl _MCU_CONTROL_0
                            390 	.globl _GLOB_L1_SUBSTATES_CFG
                            391 	.globl _GLOB_PIPE_REVISION
                            392 	.globl _GLOB_BIST_DATA_HI
                            393 	.globl _GLOB_BIST_SEQR_CFG
                            394 	.globl _GLOB_BIST_RESULT
                            395 	.globl _GLOB_BIST_MASK
                            396 	.globl _GLOB_BIST_START
                            397 	.globl _GLOB_BIST_LANE_TYPE
                            398 	.globl _GLOB_BIST_CTRL
                            399 	.globl _GLOB_DP_BAL_CFG4
                            400 	.globl _GLOB_DP_BAL_CFG2
                            401 	.globl _GLOB_DP_BAL_CFG0
                            402 	.globl _GLOB_PM_DP_CTRL
                            403 	.globl _GLOB_COUNTER_HI
                            404 	.globl _GLOB_COUNTER_CTRL
                            405 	.globl _GLOB_PM_CFG0
                            406 	.globl _GLOB_DP_SAL_CFG5
                            407 	.globl _GLOB_DP_SAL_CFG3
                            408 	.globl _GLOB_DP_SAL_CFG1
                            409 	.globl _GLOB_DP_SAL_CFG
                            410 	.globl _GLOB_MISC_CTRL
                            411 	.globl _GLOB_CLK_SRC_HI
                            412 	.globl _GLOB_CLK_SRC_LO
                            413 	.globl _GLOB_RST_CLK_CTRL
                            414 	.globl _DFE_STATIC_REG6
                            415 	.globl _DFE_STATIC_REG5
                            416 	.globl _DFE_STATIC_REG4
                            417 	.globl _DFE_STATIC_REG3
                            418 	.globl _DFE_STATIC_REG1
                            419 	.globl _DFE_STATIC_REG0
                            420 	.globl _RX_CMN_0
                            421 	.globl _SRIS_REG1
                            422 	.globl _SRIS_REG0
                            423 	.globl _DTX_PHY_ALIGN_REG2
                            424 	.globl _DTX_PHY_ALIGN_REG1
                            425 	.globl _DTX_PHY_ALIGN_REG0
                            426 	.globl _DTX_REG4
                            427 	.globl _DTX_REG3
                            428 	.globl _DTX_REG2
                            429 	.globl _DTX_REG1
                            430 	.globl _DTX_REG0
                            431 	.globl _TX_CMN_REG
                            432 	.globl _END_XDAT_LANE
                            433 	.globl _TRAIN_CONTROL_17
                            434 	.globl _TRAIN_CONTROL_16
                            435 	.globl _TRAIN_CONTROL_15
                            436 	.globl _TRAIN_CONTROL_14
                            437 	.globl _TRAIN_CONTROL_13
                            438 	.globl _ESM_ERR_N_CNT_LOW_LANE
                            439 	.globl _ESM_POP_N_CNT_LOW_LANE
                            440 	.globl _TRAIN_CONTROL_12
                            441 	.globl _TRAIN_CONTROL_11
                            442 	.globl _TRAIN_CONTROL_10
                            443 	.globl _TRAIN_CONTROL_9
                            444 	.globl _TRAIN_CONTROL_8
                            445 	.globl _TRAIN_CONTROL_7
                            446 	.globl _TRAIN_CONTROL_6
                            447 	.globl _TRAIN_CONTROL_5
                            448 	.globl _TRAIN_CONTROL_4
                            449 	.globl _TRAIN_CONTROL_3
                            450 	.globl _ESM_ERR_POP_CNT_HIGH_LANE
                            451 	.globl _ESM_ERR_P_CNT_LOW_LANE
                            452 	.globl _ESM_POP_P_CNT_LOW_LANE
                            453 	.globl _CDS_CTRL_REG1
                            454 	.globl _CDS_CTRL_REG0
                            455 	.globl _DFE_CONTROL_11
                            456 	.globl _DFE_CONTROL_10
                            457 	.globl _DFE_CONTROL_9
                            458 	.globl _DFE_CONTROL_8
                            459 	.globl _DFE_CONTROL_7
                            460 	.globl _DFE_TEST_5
                            461 	.globl _DFE_TEST_4
                            462 	.globl _DFE_TEST_1
                            463 	.globl _DFE_TEST_0
                            464 	.globl _DFE_CONTROL_6
                            465 	.globl _TRAIN_PARA_3
                            466 	.globl _TRAIN_PARA_2
                            467 	.globl _TRAIN_PARA_1
                            468 	.globl _TRAIN_PARA_0
                            469 	.globl _DLL_CAL
                            470 	.globl _RPTA_CONFIG_1
                            471 	.globl _RPTA_CONFIG_0
                            472 	.globl _TRAIN_CONTROL_2
                            473 	.globl _TRAIN_CONTROL_1
                            474 	.globl _TRAIN_CONTROL_0
                            475 	.globl _DFE_CONTROL_5
                            476 	.globl _DFE_CONTROL_4
                            477 	.globl _DFE_CONTROL_3
                            478 	.globl _DFE_CONTROL_2
                            479 	.globl _DFE_CONTROL_1
                            480 	.globl _DFE_CONTROL_0
                            481 	.globl _TRX_TRAIN_IF_TIMERS_ENABLE_LANE
                            482 	.globl _TRX_TRAIN_IF_TIMERS2_LANE
                            483 	.globl _TRX_TRAIN_IF_TIMERS1_LANE
                            484 	.globl _PHY_LOCAL_VALUE_LANE
                            485 	.globl _PHY_REMOTE_CTRL_VALUE_LANE
                            486 	.globl _PHY_REMOTE_CTRL_COMMAND_LANE
                            487 	.globl _CAL_SAVE_DATA3_LANE
                            488 	.globl _CAL_SAVE_DATA2_LANE
                            489 	.globl _CAL_SAVE_DATA1_LANE
                            490 	.globl _CAL_CTRL4_LANE
                            491 	.globl _CAL_CTRL3_LANE
                            492 	.globl _CAL_CTRL2_LANE
                            493 	.globl _CAL_CTRL1_LANE
                            494 	.globl _LANE_MARGIN_REG0
                            495 	.globl _EOM_VLD_REG4
                            496 	.globl _EOM_REG0
                            497 	.globl _EOM_ERR_REG3
                            498 	.globl _EOM_ERR_REG2
                            499 	.globl _EOM_ERR_REG1
                            500 	.globl _EOM_ERR_REG0
                            501 	.globl _EOM_VLD_REG3
                            502 	.globl _EOM_VLD_REG2
                            503 	.globl _EOM_VLD_REG1
                            504 	.globl _EOM_VLD_REG0
                            505 	.globl _DFE_STATIC_LANE_REG6
                            506 	.globl _DFE_STATIC_LANE_REG5
                            507 	.globl _DFE_STATIC_LANE_REG4
                            508 	.globl _DFE_STATIC_LANE_REG3
                            509 	.globl _DFE_STATIC_LANE_REG1
                            510 	.globl _DFE_STATIC_LANE_REG0
                            511 	.globl _DFE_DCE_REG0
                            512 	.globl _CAL_OFST_REG2
                            513 	.globl _CAL_OFST_REG1
                            514 	.globl _CAL_OFST_REG0
                            515 	.globl _DFE_READ_ODD_2C_REG8
                            516 	.globl _DFE_READ_EVEN_2C_REG8
                            517 	.globl _DFE_READ_ODD_2C_REG7
                            518 	.globl _DFE_READ_ODD_2C_REG6
                            519 	.globl _DFE_READ_ODD_2C_REG5
                            520 	.globl _DFE_READ_ODD_2C_REG4
                            521 	.globl _DFE_READ_ODD_2C_REG3
                            522 	.globl _DFE_READ_ODD_2C_REG2
                            523 	.globl _DFE_READ_ODD_2C_REG1
                            524 	.globl _DFE_READ_ODD_2C_REG0
                            525 	.globl _DFE_READ_EVEN_2C_REG7
                            526 	.globl _DFE_READ_EVEN_2C_REG6
                            527 	.globl _DFE_READ_EVEN_2C_REG5
                            528 	.globl _DFE_READ_EVEN_2C_REG4
                            529 	.globl _DFE_READ_EVEN_2C_REG3
                            530 	.globl _DFE_READ_EVEN_2C_REG2
                            531 	.globl _DFE_READ_EVEN_2C_REG1
                            532 	.globl _DFE_READ_EVEN_2C_REG0
                            533 	.globl _DFE_READ_ODD_SM_REG8
                            534 	.globl _DFE_READ_EVEN_SM_REG8
                            535 	.globl _DFE_READ_ODD_SM_REG7
                            536 	.globl _DFE_READ_ODD_SM_REG6
                            537 	.globl _DFE_READ_ODD_SM_REG5
                            538 	.globl _DFE_READ_ODD_SM_REG4
                            539 	.globl _DFE_READ_ODD_SM_REG3
                            540 	.globl _DFE_READ_ODD_SM_REG2
                            541 	.globl _DFE_READ_ODD_SM_REG1
                            542 	.globl _DFE_READ_ODD_SM_REG0
                            543 	.globl _DFE_READ_EVEN_SM_REG7
                            544 	.globl _DFE_READ_EVEN_SM_REG6
                            545 	.globl _DFE_READ_EVEN_SM_REG5
                            546 	.globl _DFE_READ_EVEN_SM_REG4
                            547 	.globl _DFE_READ_EVEN_SM_REG3
                            548 	.globl _DFE_READ_EVEN_SM_REG2
                            549 	.globl _DFE_READ_EVEN_SM_REG1
                            550 	.globl _DFE_READ_EVEN_SM_REG0
                            551 	.globl _DFE_FEXT_ODD_REG7
                            552 	.globl _DFE_FEXT_ODD_REG6
                            553 	.globl _DFE_FEXT_ODD_REG5
                            554 	.globl _DFE_FEXT_ODD_REG4
                            555 	.globl _DFE_FEXT_ODD_REG3
                            556 	.globl _DFE_FEXT_ODD_REG2
                            557 	.globl _DFE_FEXT_ODD_REG1
                            558 	.globl _DFE_FEXT_ODD_REG0
                            559 	.globl _DFE_FEXT_EVEN_REG7
                            560 	.globl _DFE_FEXT_EVEN_REG6
                            561 	.globl _DFE_FEXT_EVEN_REG5
                            562 	.globl _DFE_FEXT_EVEN_REG4
                            563 	.globl _DFE_FEXT_EVEN_REG3
                            564 	.globl _DFE_FEXT_EVEN_REG2
                            565 	.globl _DFE_FEXT_EVEN_REG1
                            566 	.globl _DFE_FEXT_EVEN_REG0
                            567 	.globl _DFE_DC_ODD_REG8
                            568 	.globl _DFE_DC_EVEN_REG8
                            569 	.globl _DFE_FEN_ODD_REG
                            570 	.globl _DFE_FEN_EVEN_REG
                            571 	.globl _DFE_STEP_REG1
                            572 	.globl _DFE_STEP_REG0
                            573 	.globl _DFE_ANA_REG1
                            574 	.globl _DFE_ANA_REG0
                            575 	.globl _DFE_CTRL_REG4
                            576 	.globl _RX_EQ_CLK_CTRL
                            577 	.globl _DFE_CTRL_REG3
                            578 	.globl _DFE_CTRL_REG2
                            579 	.globl _DFE_CTRL_REG1
                            580 	.globl _DFE_CTRL_REG0
                            581 	.globl _PT_COUNTER2
                            582 	.globl _PT_COUNTER1
                            583 	.globl _PT_COUNTER0
                            584 	.globl _PT_USER_PATTERN2
                            585 	.globl _PT_USER_PATTERN1
                            586 	.globl _PT_USER_PATTERN0
                            587 	.globl _PT_CONTROL1
                            588 	.globl _PT_CONTROL0
                            589 	.globl _XDATA_MEM_CHECKSUM_LANE1
                            590 	.globl _XDATA_MEM_CHECKSUM_LANE0
                            591 	.globl _MEM_ECC_ERR_ADDRESS0
                            592 	.globl _MCU_COMMAND0
                            593 	.globl _MCU_INT_CONTROL_13
                            594 	.globl _MCU_WDT_LANE
                            595 	.globl _MCU_IRQ_ISR_LANE
                            596 	.globl _ANA_IF_DFEO_REG0
                            597 	.globl _ANA_IF_DFEE_REG0
                            598 	.globl _ANA_IF_TRX_REG0
                            599 	.globl _EXT_INT_CONTROL
                            600 	.globl _MCU_DEBUG_LANE
                            601 	.globl _MCU_DEBUG3_LANE
                            602 	.globl _MCU_DEBUG2_LANE
                            603 	.globl _MCU_DEBUG1_LANE
                            604 	.globl _MCU_DEBUG0_LANE
                            605 	.globl _MCU_TIMER_CTRL_7_LANE
                            606 	.globl _MCU_TIMER_CTRL_6_LANE
                            607 	.globl _MCU_TIMER_CTRL_5_LANE
                            608 	.globl _MCU_TIMER_CTRL_4_LANE
                            609 	.globl _MCU_TIMER_CTRL_3_LANE
                            610 	.globl _MCU_TIMER_CTRL_2_LANE
                            611 	.globl _MCU_TIMER_CTRL_1_LANE
                            612 	.globl _MCU_MEM_REG2_LANE
                            613 	.globl _MCU_MEM_REG1_LANE
                            614 	.globl _MCU_IRQ_MASK_LANE
                            615 	.globl _MCU_IRQ_LANE
                            616 	.globl _MCU_TIMER3_CONTROL
                            617 	.globl _MCU_TIMER2_CONTROL
                            618 	.globl _MCU_TIMER1_CONTROL
                            619 	.globl _MCU_TIMER0_CONTROL
                            620 	.globl _MCU_TIMER_CONTROL
                            621 	.globl _MCU_INT12_CONTROL
                            622 	.globl _MCU_INT11_CONTROL
                            623 	.globl _MCU_INT10_CONTROL
                            624 	.globl _MCU_INT9_CONTROL
                            625 	.globl _MCU_INT8_CONTROL
                            626 	.globl _MCU_INT7_CONTROL
                            627 	.globl _MCU_INT6_CONTROL
                            628 	.globl _MCU_INT5_CONTROL
                            629 	.globl _MCU_INT4_CONTROL
                            630 	.globl _MCU_INT3_CONTROL
                            631 	.globl _MCU_INT2_CONTROL
                            632 	.globl _MCU_INT1_CONTROL
                            633 	.globl _MCU_INT0_CONTROL
                            634 	.globl _MCU_STATUS3_LANE
                            635 	.globl _MCU_STATUS2_LANE
                            636 	.globl _MCU_STATUS1_LANE
                            637 	.globl _MCU_STATUS0_LANE
                            638 	.globl _LANE_SYSTEM0
                            639 	.globl _CACHE_DEBUG1
                            640 	.globl _CACHE_DEBUG0
                            641 	.globl _MCU_GPIO
                            642 	.globl _MCU_CONTROL_LANE
                            643 	.globl _LANE_32G_PRESET_CFG16_LANE
                            644 	.globl _LANE_32G_PRESET_CFG14_LANE
                            645 	.globl _LANE_32G_PRESET_CFG12_LANE
                            646 	.globl _LANE_32G_PRESET_CFG10_LANE
                            647 	.globl _LANE_32G_PRESET_CFG8_LANE
                            648 	.globl _LANE_32G_PRESET_CFG6_LANE
                            649 	.globl _LANE_32G_PRESET_CFG4_LANE
                            650 	.globl _LANE_32G_PRESET_CFG2_LANE
                            651 	.globl _LANE_32G_PRESET_CFG0_LANE
                            652 	.globl _LANE_EQ_32G_CFG0_LANE
                            653 	.globl _LANE_16G_PRESET_CFG16_LANE
                            654 	.globl _LANE_16G_PRESET_CFG14_LANE
                            655 	.globl _LANE_16G_PRESET_CFG12_LANE
                            656 	.globl _LANE_16G_PRESET_CFG10_LANE
                            657 	.globl _LANE_16G_PRESET_CFG8_LANE
                            658 	.globl _LANE_16G_PRESET_CFG6_LANE
                            659 	.globl _LANE_16G_PRESET_CFG4_LANE
                            660 	.globl _LANE_16G_PRESET_CFG2_LANE
                            661 	.globl _LANE_16G_PRESET_CFG0_LANE
                            662 	.globl _LANE_EQ_16G_CFG0_LANE
                            663 	.globl _LANE_REMOTE_SET_LANE
                            664 	.globl _LANE_COEFF_MAX0_LANE
                            665 	.globl _LANE_PRESET_CFG16_LANE
                            666 	.globl _LANE_PRESET_CFG14_LANE
                            667 	.globl _LANE_PRESET_CFG12_LANE
                            668 	.globl _LANE_PRESET_CFG10_LANE
                            669 	.globl _LANE_PRESET_CFG8_LANE
                            670 	.globl _LANE_PRESET_CFG6_LANE
                            671 	.globl _LANE_PRESET_CFG4_LANE
                            672 	.globl _LANE_PRESET_CFG2_LANE
                            673 	.globl _LANE_PRESET_CFG0_LANE
                            674 	.globl _LANE_EQ_CFG1_LANE
                            675 	.globl _LANE_EQ_CFG0_LANE
                            676 	.globl _LANE_USB_DP_CFG2_LANE
                            677 	.globl _LANE_USB_DP_CFG1_LANE
                            678 	.globl _LANE_DP_PIE8_CFG0_LANE
                            679 	.globl _LANE_CFG_STATUS3_LANE
                            680 	.globl _LANE_CFG4
                            681 	.globl _LANE_CFG2_LANE
                            682 	.globl _LANE_CFG_STATUS2_LANE
                            683 	.globl _LANE_STATUS0
                            684 	.globl _LANE_CFG0
                            685 	.globl _SQ_REG0
                            686 	.globl _DTL_REG3
                            687 	.globl _DTL_REG2
                            688 	.globl _DTL_REG1
                            689 	.globl _DTL_REG0
                            690 	.globl _RX_LANE_INTERRUPT_REG1
                            691 	.globl _RX_CALIBRATION_REG
                            692 	.globl _INPUT_RX_PIN_REG3_LANE
                            693 	.globl _RX_DATA_PATH_REG
                            694 	.globl _RX_LANE_INTERRUPT_MASK
                            695 	.globl _RX_LANE_INTERRUPT
                            696 	.globl _CDR_LOCK_REG
                            697 	.globl _FRAME_SYNC_DET_REG6
                            698 	.globl _FRAME_SYNC_DET_REG5
                            699 	.globl _FRAME_SYNC_DET_REG4
                            700 	.globl _FRAME_SYNC_DET_REG3
                            701 	.globl _FRAME_SYNC_DET_REG2
                            702 	.globl _FRAME_SYNC_DET_REG1
                            703 	.globl _FRAME_SYNC_DET_REG0
                            704 	.globl _CLKGEN_RX_LANE_REG1_LANE
                            705 	.globl _DIG_RX_RSVD_REG0
                            706 	.globl _SPD_CTRL_RX_LANE_REG1_LANE
                            707 	.globl _INPUT_RX_PIN_REG2_LANE
                            708 	.globl _INPUT_RX_PIN_REG1_LANE
                            709 	.globl _INPUT_RX_PIN_REG0_LANE
                            710 	.globl _RX_SYSTEM_LANE
                            711 	.globl _PM_CTRL_RX_LANE_REG1_LANE
                            712 	.globl _MON_TOP
                            713 	.globl _ANALOG_TX_REALTIME_REG_1
                            714 	.globl _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE
                            715 	.globl _PM_CTRL_INTERRUPT_ISR_REG1_LANE
                            716 	.globl __FIELDNAME__LANE
                            717 	.globl _INPUT_TX_PIN_REG5_LANE
                            718 	.globl _DIG_TX_RSVD_REG0
                            719 	.globl _TX_CALIBRATION_LANE
                            720 	.globl _INPUT_TX_PIN_REG4_LANE
                            721 	.globl _TX_SYSTEM_LANE
                            722 	.globl _SPD_CTRL_TX_LANE_REG1_LANE
                            723 	.globl _SPD_CTRL_INTERRUPT_REG2
                            724 	.globl _SPD_CTRL_INTERRUPT_REG1_LANE
                            725 	.globl _TX_SPEED_CONVERT_LANE
                            726 	.globl _CLKGEN_TX_LANE_REG1_LANE
                            727 	.globl _PM_CTRL_INTERRUPT_REG2
                            728 	.globl _PM_CTRL_INTERRUPT_REG1_LANE
                            729 	.globl _INPUT_TX_PIN_REG3_LANE
                            730 	.globl _INPUT_TX_PIN_REG2_LANE
                            731 	.globl _INPUT_TX_PIN_REG1_LANE
                            732 	.globl _INPUT_TX_PIN_REG0_LANE
                            733 	.globl _PM_CTRL_TX_LANE_REG2_LANE
                            734 	.globl _PM_CTRL_TX_LANE_REG1_LANE
                            735 	.globl _UPHY14_CMN_ANAREG_TOP_214
                            736 	.globl _UPHY14_CMN_ANAREG_TOP_213
                            737 	.globl _UPHY14_CMN_ANAREG_TOP_212
                            738 	.globl _UPHY14_CMN_ANAREG_TOP_211
                            739 	.globl _UPHY14_CMN_ANAREG_TOP_210
                            740 	.globl _UPHY14_CMN_ANAREG_TOP_209
                            741 	.globl _UPHY14_CMN_ANAREG_TOP_208
                            742 	.globl _UPHY14_CMN_ANAREG_TOP_207
                            743 	.globl _UPHY14_CMN_ANAREG_TOP_206
                            744 	.globl _UPHY14_CMN_ANAREG_TOP_205
                            745 	.globl _UPHY14_CMN_ANAREG_TOP_204
                            746 	.globl _UPHY14_CMN_ANAREG_TOP_203
                            747 	.globl _UPHY14_CMN_ANAREG_TOP_202
                            748 	.globl _UPHY14_CMN_ANAREG_TOP_201
                            749 	.globl _UPHY14_CMN_ANAREG_TOP_200
                            750 	.globl _UPHY14_CMN_ANAREG_TOP_199
                            751 	.globl _UPHY14_CMN_ANAREG_TOP_198
                            752 	.globl _UPHY14_CMN_ANAREG_TOP_197
                            753 	.globl _UPHY14_CMN_ANAREG_TOP_196
                            754 	.globl _UPHY14_CMN_ANAREG_TOP_195
                            755 	.globl _UPHY14_CMN_ANAREG_TOP_194
                            756 	.globl _UPHY14_CMN_ANAREG_TOP_193
                            757 	.globl _UPHY14_CMN_ANAREG_TOP_192
                            758 	.globl _UPHY14_CMN_ANAREG_TOP_191
                            759 	.globl _UPHY14_CMN_ANAREG_TOP_190
                            760 	.globl _UPHY14_CMN_ANAREG_TOP_189
                            761 	.globl _UPHY14_CMN_ANAREG_TOP_188
                            762 	.globl _UPHY14_CMN_ANAREG_TOP_187
                            763 	.globl _UPHY14_CMN_ANAREG_TOP_186
                            764 	.globl _UPHY14_CMN_ANAREG_TOP_185
                            765 	.globl _UPHY14_CMN_ANAREG_TOP_184
                            766 	.globl _UPHY14_CMN_ANAREG_TOP_183
                            767 	.globl _UPHY14_CMN_ANAREG_TOP_182
                            768 	.globl _UPHY14_CMN_ANAREG_TOP_181
                            769 	.globl _UPHY14_CMN_ANAREG_TOP_180
                            770 	.globl _UPHY14_CMN_ANAREG_TOP_179
                            771 	.globl _UPHY14_CMN_ANAREG_TOP_178
                            772 	.globl _UPHY14_CMN_ANAREG_TOP_177
                            773 	.globl _UPHY14_CMN_ANAREG_TOP_176
                            774 	.globl _UPHY14_CMN_ANAREG_TOP_175
                            775 	.globl _UPHY14_CMN_ANAREG_TOP_174
                            776 	.globl _UPHY14_CMN_ANAREG_TOP_173
                            777 	.globl _UPHY14_CMN_ANAREG_TOP_172
                            778 	.globl _UPHY14_CMN_ANAREG_TOP_171
                            779 	.globl _UPHY14_CMN_ANAREG_TOP_170
                            780 	.globl _UPHY14_CMN_ANAREG_TOP_169
                            781 	.globl _UPHY14_CMN_ANAREG_TOP_168
                            782 	.globl _UPHY14_CMN_ANAREG_TOP_167
                            783 	.globl _UPHY14_CMN_ANAREG_TOP_166
                            784 	.globl _UPHY14_CMN_ANAREG_TOP_165
                            785 	.globl _UPHY14_CMN_ANAREG_TOP_164
                            786 	.globl _UPHY14_CMN_ANAREG_TOP_163
                            787 	.globl _UPHY14_CMN_ANAREG_TOP_162
                            788 	.globl _UPHY14_CMN_ANAREG_TOP_161
                            789 	.globl _UPHY14_CMN_ANAREG_TOP_160
                            790 	.globl _UPHY14_CMN_ANAREG_TOP_159
                            791 	.globl _UPHY14_CMN_ANAREG_TOP_158
                            792 	.globl _UPHY14_CMN_ANAREG_TOP_157
                            793 	.globl _UPHY14_CMN_ANAREG_TOP_156
                            794 	.globl _UPHY14_CMN_ANAREG_TOP_155
                            795 	.globl _UPHY14_CMN_ANAREG_TOP_154
                            796 	.globl _UPHY14_CMN_ANAREG_TOP_153
                            797 	.globl _UPHY14_CMN_ANAREG_TOP_152
                            798 	.globl _UPHY14_CMN_ANAREG_TOP_151
                            799 	.globl _UPHY14_CMN_ANAREG_TOP_150
                            800 	.globl _UPHY14_CMN_ANAREG_TOP_149
                            801 	.globl _UPHY14_CMN_ANAREG_TOP_148
                            802 	.globl _UPHY14_CMN_ANAREG_TOP_147
                            803 	.globl _UPHY14_CMN_ANAREG_TOP_146
                            804 	.globl _UPHY14_CMN_ANAREG_TOP_145
                            805 	.globl _UPHY14_CMN_ANAREG_TOP_144
                            806 	.globl _UPHY14_CMN_ANAREG_TOP_143
                            807 	.globl _UPHY14_CMN_ANAREG_TOP_142
                            808 	.globl _UPHY14_CMN_ANAREG_TOP_141
                            809 	.globl _UPHY14_CMN_ANAREG_TOP_140
                            810 	.globl _UPHY14_CMN_ANAREG_TOP_139
                            811 	.globl _UPHY14_CMN_ANAREG_TOP_138
                            812 	.globl _UPHY14_CMN_ANAREG_TOP_137
                            813 	.globl _UPHY14_CMN_ANAREG_TOP_136
                            814 	.globl _UPHY14_CMN_ANAREG_TOP_135
                            815 	.globl _UPHY14_CMN_ANAREG_TOP_134
                            816 	.globl _UPHY14_CMN_ANAREG_TOP_133
                            817 	.globl _UPHY14_CMN_ANAREG_TOP_132
                            818 	.globl _UPHY14_CMN_ANAREG_TOP_131
                            819 	.globl _UPHY14_CMN_ANAREG_TOP_130
                            820 	.globl _UPHY14_CMN_ANAREG_TOP_129
                            821 	.globl _UPHY14_CMN_ANAREG_TOP_128
                            822 	.globl _ANA_DFEO_REG_0B
                            823 	.globl _ANA_DFEO_REG_0A
                            824 	.globl _ANA_DFEO_REG_09
                            825 	.globl _ANA_DFEO_REG_08
                            826 	.globl _ANA_DFEO_REG_07
                            827 	.globl _ANA_DFEO_REG_06
                            828 	.globl _ANA_DFEO_REG_05
                            829 	.globl _ANA_DFEO_REG_04
                            830 	.globl _ANA_DFEO_REG_03
                            831 	.globl _ANA_DFEO_REG_02
                            832 	.globl _ANA_DFEO_REG_01
                            833 	.globl _ANA_DFEO_REG_00
                            834 	.globl _ANA_DFEO_REG_27
                            835 	.globl _ANA_DFEO_REG_26
                            836 	.globl _ANA_DFEO_REG_25
                            837 	.globl _ANA_DFEO_REG_24
                            838 	.globl _ANA_DFEO_REG_23
                            839 	.globl _ANA_DFEO_REG_22
                            840 	.globl _ANA_DFEO_REG_21
                            841 	.globl _ANA_DFEO_REG_20
                            842 	.globl _ANA_DFEO_REG_1F
                            843 	.globl _ANA_DFEO_REG_1E
                            844 	.globl _ANA_DFEO_REG_1D
                            845 	.globl _ANA_DFEO_REG_1C
                            846 	.globl _ANA_DFEO_REG_1B
                            847 	.globl _ANA_DFEO_REG_1A
                            848 	.globl _ANA_DFEO_REG_19
                            849 	.globl _ANA_DFEO_REG_18
                            850 	.globl _ANA_DFEO_REG_17
                            851 	.globl _ANA_DFEO_REG_16
                            852 	.globl _ANA_DFEO_REG_15
                            853 	.globl _ANA_DFEO_REG_14
                            854 	.globl _ANA_DFEO_REG_13
                            855 	.globl _ANA_DFEO_REG_12
                            856 	.globl _ANA_DFEO_REG_11
                            857 	.globl _ANA_DFEO_REG_10
                            858 	.globl _ANA_DFEO_REG_0F
                            859 	.globl _ANA_DFEO_REG_0E
                            860 	.globl _ANA_DFEO_REG_0D
                            861 	.globl _ANA_DFEO_REG_0C
                            862 	.globl _ANA_DFEE_REG_1D
                            863 	.globl _ANA_DFEE_REG_1C
                            864 	.globl _ANA_DFEE_REG_1B
                            865 	.globl _ANA_DFEE_REG_1A
                            866 	.globl _ANA_DFEE_REG_19
                            867 	.globl _ANA_DFEE_REG_18
                            868 	.globl _ANA_DFEE_REG_17
                            869 	.globl _ANA_DFEE_REG_16
                            870 	.globl _ANA_DFEE_REG_15
                            871 	.globl _ANA_DFEE_REG_14
                            872 	.globl _ANA_DFEE_REG_13
                            873 	.globl _ANA_DFEE_REG_12
                            874 	.globl _ANA_DFEE_REG_11
                            875 	.globl _ANA_DFEE_REG_10
                            876 	.globl _ANA_DFEE_REG_0F
                            877 	.globl _ANA_DFEE_REG_0E
                            878 	.globl _ANA_DFEE_REG_0D
                            879 	.globl _ANA_DFEE_REG_0C
                            880 	.globl _ANA_DFEE_REG_0B
                            881 	.globl _ANA_DFEE_REG_0A
                            882 	.globl _ANA_DFEE_REG_09
                            883 	.globl _ANA_DFEE_REG_08
                            884 	.globl _ANA_DFEE_REG_07
                            885 	.globl _ANA_DFEE_REG_06
                            886 	.globl _ANA_DFEE_REG_05
                            887 	.globl _ANA_DFEE_REG_04
                            888 	.globl _ANA_DFEE_REG_03
                            889 	.globl _ANA_DFEE_REG_02
                            890 	.globl _ANA_DFEE_REG_01
                            891 	.globl _ANA_DFEE_REG_00
                            892 	.globl _ANA_DFEE_REG_27
                            893 	.globl _ANA_DFEE_REG_26
                            894 	.globl _ANA_DFEE_REG_25
                            895 	.globl _ANA_DFEE_REG_24
                            896 	.globl _ANA_DFEE_REG_23
                            897 	.globl _ANA_DFEE_REG_22
                            898 	.globl _ANA_DFEE_REG_21
                            899 	.globl _ANA_DFEE_REG_20
                            900 	.globl _ANA_DFEE_REG_1F
                            901 	.globl _ANA_DFEE_REG_1E
                            902 	.globl _UPHY14_TRX_ANAREG_BOT_32
                            903 	.globl _UPHY14_TRX_ANAREG_BOT_31
                            904 	.globl _UPHY14_TRX_ANAREG_BOT_30
                            905 	.globl _UPHY14_TRX_ANAREG_BOT_29
                            906 	.globl _UPHY14_TRX_ANAREG_BOT_28
                            907 	.globl _UPHY14_TRX_ANAREG_BOT_27
                            908 	.globl _UPHY14_TRX_ANAREG_BOT_26
                            909 	.globl _UPHY14_TRX_ANAREG_BOT_25
                            910 	.globl _UPHY14_TRX_ANAREG_BOT_24
                            911 	.globl _UPHY14_TRX_ANAREG_BOT_23
                            912 	.globl _UPHY14_TRX_ANAREG_BOT_22
                            913 	.globl _UPHY14_TRX_ANAREG_BOT_21
                            914 	.globl _UPHY14_TRX_ANAREG_BOT_20
                            915 	.globl _UPHY14_TRX_ANAREG_BOT_19
                            916 	.globl _UPHY14_TRX_ANAREG_BOT_18
                            917 	.globl _UPHY14_TRX_ANAREG_BOT_17
                            918 	.globl _UPHY14_TRX_ANAREG_BOT_16
                            919 	.globl _UPHY14_TRX_ANAREG_BOT_15
                            920 	.globl _UPHY14_TRX_ANAREG_BOT_14
                            921 	.globl _UPHY14_TRX_ANAREG_BOT_13
                            922 	.globl _UPHY14_TRX_ANAREG_BOT_12
                            923 	.globl _UPHY14_TRX_ANAREG_BOT_11
                            924 	.globl _UPHY14_TRX_ANAREG_BOT_10
                            925 	.globl _UPHY14_TRX_ANAREG_BOT_9
                            926 	.globl _UPHY14_TRX_ANAREG_BOT_8
                            927 	.globl _UPHY14_TRX_ANAREG_BOT_7
                            928 	.globl _UPHY14_TRX_ANAREG_BOT_6
                            929 	.globl _UPHY14_TRX_ANAREG_BOT_5
                            930 	.globl _UPHY14_TRX_ANAREG_BOT_4
                            931 	.globl _UPHY14_TRX_ANAREG_BOT_3
                            932 	.globl _UPHY14_TRX_ANAREG_BOT_2
                            933 	.globl _UPHY14_TRX_ANAREG_BOT_1
                            934 	.globl _UPHY14_TRX_ANAREG_BOT_0
                            935 	.globl _UPHY14_TRX_ANAREG_TOP_157
                            936 	.globl _UPHY14_TRX_ANAREG_TOP_156
                            937 	.globl _UPHY14_TRX_ANAREG_TOP_155
                            938 	.globl _UPHY14_TRX_ANAREG_TOP_154
                            939 	.globl _UPHY14_TRX_ANAREG_TOP_153
                            940 	.globl _UPHY14_TRX_ANAREG_TOP_152
                            941 	.globl _UPHY14_TRX_ANAREG_TOP_151
                            942 	.globl _UPHY14_TRX_ANAREG_TOP_150
                            943 	.globl _UPHY14_TRX_ANAREG_TOP_149
                            944 	.globl _UPHY14_TRX_ANAREG_TOP_148
                            945 	.globl _UPHY14_TRX_ANAREG_TOP_147
                            946 	.globl _UPHY14_TRX_ANAREG_TOP_146
                            947 	.globl _UPHY14_TRX_ANAREG_TOP_145
                            948 	.globl _UPHY14_TRX_ANAREG_TOP_144
                            949 	.globl _UPHY14_TRX_ANAREG_TOP_143
                            950 	.globl _UPHY14_TRX_ANAREG_TOP_142
                            951 	.globl _UPHY14_TRX_ANAREG_TOP_141
                            952 	.globl _UPHY14_TRX_ANAREG_TOP_140
                            953 	.globl _UPHY14_TRX_ANAREG_TOP_139
                            954 	.globl _UPHY14_TRX_ANAREG_TOP_138
                            955 	.globl _UPHY14_TRX_ANAREG_TOP_137
                            956 	.globl _UPHY14_TRX_ANAREG_TOP_136
                            957 	.globl _UPHY14_TRX_ANAREG_TOP_135
                            958 	.globl _UPHY14_TRX_ANAREG_TOP_134
                            959 	.globl _UPHY14_TRX_ANAREG_TOP_133
                            960 	.globl _UPHY14_TRX_ANAREG_TOP_132
                            961 	.globl _UPHY14_TRX_ANAREG_TOP_131
                            962 	.globl _UPHY14_TRX_ANAREG_TOP_130
                            963 	.globl _UPHY14_TRX_ANAREG_TOP_129
                            964 	.globl _UPHY14_TRX_ANAREG_TOP_128
                            965 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_143
                            966 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_142
                            967 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_141
                            968 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_140
                            969 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_139
                            970 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_138
                            971 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_137
                            972 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_136
                            973 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_135
                            974 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_134
                            975 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_133
                            976 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_132
                            977 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_131
                            978 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_130
                            979 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_129
                            980 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_128
                            981 	.globl _txdcc_cal
                            982 	.globl _txdcc_pdiv_cal
                            983 	.globl _rxdcc_dll_cal
                            984 	.globl _rxdcc_data_cal
                            985 	.globl _rxdcc_eom_cal
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
                           1123 ; overlayable bit register bank
                           1124 ;--------------------------------------------------------
                           1125 	.area BIT_BANK	(REL,OVR,DATA)
   0025                    1126 bits:
   0025                    1127 	.ds 1
                    8000   1128 	b0 = bits[0]
                    8100   1129 	b1 = bits[1]
                    8200   1130 	b2 = bits[2]
                    8300   1131 	b3 = bits[3]
                    8400   1132 	b4 = bits[4]
                    8500   1133 	b5 = bits[5]
                    8600   1134 	b6 = bits[6]
                    8700   1135 	b7 = bits[7]
                           1136 ;--------------------------------------------------------
                           1137 ; internal ram data
                           1138 ;--------------------------------------------------------
                           1139 	.area DSEG    (DATA)
                           1140 ;--------------------------------------------------------
                           1141 ; overlayable items in internal ram 
                           1142 ;--------------------------------------------------------
                           1143 	.area OSEG    (OVR,DATA)
                           1144 ;--------------------------------------------------------
                           1145 ; indirectly addressable internal ram data
                           1146 ;--------------------------------------------------------
                           1147 	.area ISEG    (DATA)
                           1148 ;--------------------------------------------------------
                           1149 ; absolute internal ram data
                           1150 ;--------------------------------------------------------
                           1151 	.area IABS    (ABS,DATA)
                           1152 	.area IABS    (ABS,DATA)
                           1153 ;--------------------------------------------------------
                           1154 ; bit data
                           1155 ;--------------------------------------------------------
                           1156 	.area BSEG    (BIT)
                           1157 ;--------------------------------------------------------
                           1158 ; paged external ram data
                           1159 ;--------------------------------------------------------
                           1160 	.area PSEG    (PAG,XDATA)
                           1161 ;--------------------------------------------------------
                           1162 ; external ram data
                           1163 ;--------------------------------------------------------
                           1164 	.area XSEG    (XDATA)
                    1000   1165 _UPHY14_TRX_LANEPLL_ANAREG_TOP_128	=	0x1000
                    1004   1166 _UPHY14_TRX_LANEPLL_ANAREG_TOP_129	=	0x1004
                    1008   1167 _UPHY14_TRX_LANEPLL_ANAREG_TOP_130	=	0x1008
                    100C   1168 _UPHY14_TRX_LANEPLL_ANAREG_TOP_131	=	0x100c
                    1010   1169 _UPHY14_TRX_LANEPLL_ANAREG_TOP_132	=	0x1010
                    1014   1170 _UPHY14_TRX_LANEPLL_ANAREG_TOP_133	=	0x1014
                    1018   1171 _UPHY14_TRX_LANEPLL_ANAREG_TOP_134	=	0x1018
                    101C   1172 _UPHY14_TRX_LANEPLL_ANAREG_TOP_135	=	0x101c
                    1020   1173 _UPHY14_TRX_LANEPLL_ANAREG_TOP_136	=	0x1020
                    1024   1174 _UPHY14_TRX_LANEPLL_ANAREG_TOP_137	=	0x1024
                    1028   1175 _UPHY14_TRX_LANEPLL_ANAREG_TOP_138	=	0x1028
                    102C   1176 _UPHY14_TRX_LANEPLL_ANAREG_TOP_139	=	0x102c
                    1030   1177 _UPHY14_TRX_LANEPLL_ANAREG_TOP_140	=	0x1030
                    1034   1178 _UPHY14_TRX_LANEPLL_ANAREG_TOP_141	=	0x1034
                    1038   1179 _UPHY14_TRX_LANEPLL_ANAREG_TOP_142	=	0x1038
                    103C   1180 _UPHY14_TRX_LANEPLL_ANAREG_TOP_143	=	0x103c
                    0200   1181 _UPHY14_TRX_ANAREG_TOP_128	=	0x0200
                    0204   1182 _UPHY14_TRX_ANAREG_TOP_129	=	0x0204
                    0208   1183 _UPHY14_TRX_ANAREG_TOP_130	=	0x0208
                    020C   1184 _UPHY14_TRX_ANAREG_TOP_131	=	0x020c
                    0210   1185 _UPHY14_TRX_ANAREG_TOP_132	=	0x0210
                    0214   1186 _UPHY14_TRX_ANAREG_TOP_133	=	0x0214
                    0218   1187 _UPHY14_TRX_ANAREG_TOP_134	=	0x0218
                    021C   1188 _UPHY14_TRX_ANAREG_TOP_135	=	0x021c
                    0220   1189 _UPHY14_TRX_ANAREG_TOP_136	=	0x0220
                    0224   1190 _UPHY14_TRX_ANAREG_TOP_137	=	0x0224
                    0228   1191 _UPHY14_TRX_ANAREG_TOP_138	=	0x0228
                    022C   1192 _UPHY14_TRX_ANAREG_TOP_139	=	0x022c
                    0230   1193 _UPHY14_TRX_ANAREG_TOP_140	=	0x0230
                    0234   1194 _UPHY14_TRX_ANAREG_TOP_141	=	0x0234
                    0238   1195 _UPHY14_TRX_ANAREG_TOP_142	=	0x0238
                    023C   1196 _UPHY14_TRX_ANAREG_TOP_143	=	0x023c
                    0240   1197 _UPHY14_TRX_ANAREG_TOP_144	=	0x0240
                    0244   1198 _UPHY14_TRX_ANAREG_TOP_145	=	0x0244
                    0248   1199 _UPHY14_TRX_ANAREG_TOP_146	=	0x0248
                    024C   1200 _UPHY14_TRX_ANAREG_TOP_147	=	0x024c
                    0250   1201 _UPHY14_TRX_ANAREG_TOP_148	=	0x0250
                    0254   1202 _UPHY14_TRX_ANAREG_TOP_149	=	0x0254
                    0258   1203 _UPHY14_TRX_ANAREG_TOP_150	=	0x0258
                    025C   1204 _UPHY14_TRX_ANAREG_TOP_151	=	0x025c
                    0260   1205 _UPHY14_TRX_ANAREG_TOP_152	=	0x0260
                    0264   1206 _UPHY14_TRX_ANAREG_TOP_153	=	0x0264
                    0268   1207 _UPHY14_TRX_ANAREG_TOP_154	=	0x0268
                    026C   1208 _UPHY14_TRX_ANAREG_TOP_155	=	0x026c
                    0270   1209 _UPHY14_TRX_ANAREG_TOP_156	=	0x0270
                    0274   1210 _UPHY14_TRX_ANAREG_TOP_157	=	0x0274
                    0000   1211 _UPHY14_TRX_ANAREG_BOT_0	=	0x0000
                    0004   1212 _UPHY14_TRX_ANAREG_BOT_1	=	0x0004
                    0008   1213 _UPHY14_TRX_ANAREG_BOT_2	=	0x0008
                    000C   1214 _UPHY14_TRX_ANAREG_BOT_3	=	0x000c
                    0010   1215 _UPHY14_TRX_ANAREG_BOT_4	=	0x0010
                    0014   1216 _UPHY14_TRX_ANAREG_BOT_5	=	0x0014
                    0018   1217 _UPHY14_TRX_ANAREG_BOT_6	=	0x0018
                    001C   1218 _UPHY14_TRX_ANAREG_BOT_7	=	0x001c
                    0020   1219 _UPHY14_TRX_ANAREG_BOT_8	=	0x0020
                    0024   1220 _UPHY14_TRX_ANAREG_BOT_9	=	0x0024
                    0028   1221 _UPHY14_TRX_ANAREG_BOT_10	=	0x0028
                    002C   1222 _UPHY14_TRX_ANAREG_BOT_11	=	0x002c
                    0030   1223 _UPHY14_TRX_ANAREG_BOT_12	=	0x0030
                    0034   1224 _UPHY14_TRX_ANAREG_BOT_13	=	0x0034
                    0038   1225 _UPHY14_TRX_ANAREG_BOT_14	=	0x0038
                    003C   1226 _UPHY14_TRX_ANAREG_BOT_15	=	0x003c
                    0040   1227 _UPHY14_TRX_ANAREG_BOT_16	=	0x0040
                    0044   1228 _UPHY14_TRX_ANAREG_BOT_17	=	0x0044
                    0048   1229 _UPHY14_TRX_ANAREG_BOT_18	=	0x0048
                    004C   1230 _UPHY14_TRX_ANAREG_BOT_19	=	0x004c
                    0050   1231 _UPHY14_TRX_ANAREG_BOT_20	=	0x0050
                    0054   1232 _UPHY14_TRX_ANAREG_BOT_21	=	0x0054
                    0058   1233 _UPHY14_TRX_ANAREG_BOT_22	=	0x0058
                    005C   1234 _UPHY14_TRX_ANAREG_BOT_23	=	0x005c
                    0060   1235 _UPHY14_TRX_ANAREG_BOT_24	=	0x0060
                    0064   1236 _UPHY14_TRX_ANAREG_BOT_25	=	0x0064
                    0068   1237 _UPHY14_TRX_ANAREG_BOT_26	=	0x0068
                    006C   1238 _UPHY14_TRX_ANAREG_BOT_27	=	0x006c
                    0070   1239 _UPHY14_TRX_ANAREG_BOT_28	=	0x0070
                    0074   1240 _UPHY14_TRX_ANAREG_BOT_29	=	0x0074
                    0078   1241 _UPHY14_TRX_ANAREG_BOT_30	=	0x0078
                    007C   1242 _UPHY14_TRX_ANAREG_BOT_31	=	0x007c
                    0080   1243 _UPHY14_TRX_ANAREG_BOT_32	=	0x0080
                    0478   1244 _ANA_DFEE_REG_1E	=	0x0478
                    047C   1245 _ANA_DFEE_REG_1F	=	0x047c
                    0480   1246 _ANA_DFEE_REG_20	=	0x0480
                    0484   1247 _ANA_DFEE_REG_21	=	0x0484
                    0488   1248 _ANA_DFEE_REG_22	=	0x0488
                    048C   1249 _ANA_DFEE_REG_23	=	0x048c
                    0490   1250 _ANA_DFEE_REG_24	=	0x0490
                    0494   1251 _ANA_DFEE_REG_25	=	0x0494
                    0498   1252 _ANA_DFEE_REG_26	=	0x0498
                    049C   1253 _ANA_DFEE_REG_27	=	0x049c
                    0400   1254 _ANA_DFEE_REG_00	=	0x0400
                    0404   1255 _ANA_DFEE_REG_01	=	0x0404
                    0408   1256 _ANA_DFEE_REG_02	=	0x0408
                    040C   1257 _ANA_DFEE_REG_03	=	0x040c
                    0410   1258 _ANA_DFEE_REG_04	=	0x0410
                    0414   1259 _ANA_DFEE_REG_05	=	0x0414
                    0418   1260 _ANA_DFEE_REG_06	=	0x0418
                    041C   1261 _ANA_DFEE_REG_07	=	0x041c
                    0420   1262 _ANA_DFEE_REG_08	=	0x0420
                    0424   1263 _ANA_DFEE_REG_09	=	0x0424
                    0428   1264 _ANA_DFEE_REG_0A	=	0x0428
                    042C   1265 _ANA_DFEE_REG_0B	=	0x042c
                    0430   1266 _ANA_DFEE_REG_0C	=	0x0430
                    0434   1267 _ANA_DFEE_REG_0D	=	0x0434
                    0438   1268 _ANA_DFEE_REG_0E	=	0x0438
                    043C   1269 _ANA_DFEE_REG_0F	=	0x043c
                    0440   1270 _ANA_DFEE_REG_10	=	0x0440
                    0444   1271 _ANA_DFEE_REG_11	=	0x0444
                    0448   1272 _ANA_DFEE_REG_12	=	0x0448
                    044C   1273 _ANA_DFEE_REG_13	=	0x044c
                    0450   1274 _ANA_DFEE_REG_14	=	0x0450
                    0454   1275 _ANA_DFEE_REG_15	=	0x0454
                    0458   1276 _ANA_DFEE_REG_16	=	0x0458
                    045C   1277 _ANA_DFEE_REG_17	=	0x045c
                    0460   1278 _ANA_DFEE_REG_18	=	0x0460
                    0464   1279 _ANA_DFEE_REG_19	=	0x0464
                    0468   1280 _ANA_DFEE_REG_1A	=	0x0468
                    046C   1281 _ANA_DFEE_REG_1B	=	0x046c
                    0470   1282 _ANA_DFEE_REG_1C	=	0x0470
                    0474   1283 _ANA_DFEE_REG_1D	=	0x0474
                    0830   1284 _ANA_DFEO_REG_0C	=	0x0830
                    0834   1285 _ANA_DFEO_REG_0D	=	0x0834
                    0838   1286 _ANA_DFEO_REG_0E	=	0x0838
                    083C   1287 _ANA_DFEO_REG_0F	=	0x083c
                    0840   1288 _ANA_DFEO_REG_10	=	0x0840
                    0844   1289 _ANA_DFEO_REG_11	=	0x0844
                    0848   1290 _ANA_DFEO_REG_12	=	0x0848
                    084C   1291 _ANA_DFEO_REG_13	=	0x084c
                    0850   1292 _ANA_DFEO_REG_14	=	0x0850
                    0854   1293 _ANA_DFEO_REG_15	=	0x0854
                    0858   1294 _ANA_DFEO_REG_16	=	0x0858
                    085C   1295 _ANA_DFEO_REG_17	=	0x085c
                    0860   1296 _ANA_DFEO_REG_18	=	0x0860
                    0864   1297 _ANA_DFEO_REG_19	=	0x0864
                    0868   1298 _ANA_DFEO_REG_1A	=	0x0868
                    086C   1299 _ANA_DFEO_REG_1B	=	0x086c
                    0870   1300 _ANA_DFEO_REG_1C	=	0x0870
                    0874   1301 _ANA_DFEO_REG_1D	=	0x0874
                    0878   1302 _ANA_DFEO_REG_1E	=	0x0878
                    087C   1303 _ANA_DFEO_REG_1F	=	0x087c
                    0880   1304 _ANA_DFEO_REG_20	=	0x0880
                    0884   1305 _ANA_DFEO_REG_21	=	0x0884
                    0888   1306 _ANA_DFEO_REG_22	=	0x0888
                    088C   1307 _ANA_DFEO_REG_23	=	0x088c
                    0890   1308 _ANA_DFEO_REG_24	=	0x0890
                    0894   1309 _ANA_DFEO_REG_25	=	0x0894
                    0898   1310 _ANA_DFEO_REG_26	=	0x0898
                    089C   1311 _ANA_DFEO_REG_27	=	0x089c
                    0800   1312 _ANA_DFEO_REG_00	=	0x0800
                    0804   1313 _ANA_DFEO_REG_01	=	0x0804
                    0808   1314 _ANA_DFEO_REG_02	=	0x0808
                    080C   1315 _ANA_DFEO_REG_03	=	0x080c
                    0810   1316 _ANA_DFEO_REG_04	=	0x0810
                    0814   1317 _ANA_DFEO_REG_05	=	0x0814
                    0818   1318 _ANA_DFEO_REG_06	=	0x0818
                    081C   1319 _ANA_DFEO_REG_07	=	0x081c
                    0820   1320 _ANA_DFEO_REG_08	=	0x0820
                    0824   1321 _ANA_DFEO_REG_09	=	0x0824
                    0828   1322 _ANA_DFEO_REG_0A	=	0x0828
                    082C   1323 _ANA_DFEO_REG_0B	=	0x082c
                    8200   1324 _UPHY14_CMN_ANAREG_TOP_128	=	0x8200
                    8204   1325 _UPHY14_CMN_ANAREG_TOP_129	=	0x8204
                    8208   1326 _UPHY14_CMN_ANAREG_TOP_130	=	0x8208
                    820C   1327 _UPHY14_CMN_ANAREG_TOP_131	=	0x820c
                    8210   1328 _UPHY14_CMN_ANAREG_TOP_132	=	0x8210
                    8214   1329 _UPHY14_CMN_ANAREG_TOP_133	=	0x8214
                    8218   1330 _UPHY14_CMN_ANAREG_TOP_134	=	0x8218
                    821C   1331 _UPHY14_CMN_ANAREG_TOP_135	=	0x821c
                    8220   1332 _UPHY14_CMN_ANAREG_TOP_136	=	0x8220
                    8224   1333 _UPHY14_CMN_ANAREG_TOP_137	=	0x8224
                    8228   1334 _UPHY14_CMN_ANAREG_TOP_138	=	0x8228
                    822C   1335 _UPHY14_CMN_ANAREG_TOP_139	=	0x822c
                    8230   1336 _UPHY14_CMN_ANAREG_TOP_140	=	0x8230
                    8234   1337 _UPHY14_CMN_ANAREG_TOP_141	=	0x8234
                    8238   1338 _UPHY14_CMN_ANAREG_TOP_142	=	0x8238
                    823C   1339 _UPHY14_CMN_ANAREG_TOP_143	=	0x823c
                    8240   1340 _UPHY14_CMN_ANAREG_TOP_144	=	0x8240
                    8244   1341 _UPHY14_CMN_ANAREG_TOP_145	=	0x8244
                    8248   1342 _UPHY14_CMN_ANAREG_TOP_146	=	0x8248
                    824C   1343 _UPHY14_CMN_ANAREG_TOP_147	=	0x824c
                    8250   1344 _UPHY14_CMN_ANAREG_TOP_148	=	0x8250
                    8254   1345 _UPHY14_CMN_ANAREG_TOP_149	=	0x8254
                    8258   1346 _UPHY14_CMN_ANAREG_TOP_150	=	0x8258
                    825C   1347 _UPHY14_CMN_ANAREG_TOP_151	=	0x825c
                    8260   1348 _UPHY14_CMN_ANAREG_TOP_152	=	0x8260
                    8264   1349 _UPHY14_CMN_ANAREG_TOP_153	=	0x8264
                    8268   1350 _UPHY14_CMN_ANAREG_TOP_154	=	0x8268
                    826C   1351 _UPHY14_CMN_ANAREG_TOP_155	=	0x826c
                    8270   1352 _UPHY14_CMN_ANAREG_TOP_156	=	0x8270
                    8274   1353 _UPHY14_CMN_ANAREG_TOP_157	=	0x8274
                    8278   1354 _UPHY14_CMN_ANAREG_TOP_158	=	0x8278
                    827C   1355 _UPHY14_CMN_ANAREG_TOP_159	=	0x827c
                    8280   1356 _UPHY14_CMN_ANAREG_TOP_160	=	0x8280
                    8284   1357 _UPHY14_CMN_ANAREG_TOP_161	=	0x8284
                    8288   1358 _UPHY14_CMN_ANAREG_TOP_162	=	0x8288
                    828C   1359 _UPHY14_CMN_ANAREG_TOP_163	=	0x828c
                    8290   1360 _UPHY14_CMN_ANAREG_TOP_164	=	0x8290
                    8294   1361 _UPHY14_CMN_ANAREG_TOP_165	=	0x8294
                    8298   1362 _UPHY14_CMN_ANAREG_TOP_166	=	0x8298
                    829C   1363 _UPHY14_CMN_ANAREG_TOP_167	=	0x829c
                    82A0   1364 _UPHY14_CMN_ANAREG_TOP_168	=	0x82a0
                    82A4   1365 _UPHY14_CMN_ANAREG_TOP_169	=	0x82a4
                    82A8   1366 _UPHY14_CMN_ANAREG_TOP_170	=	0x82a8
                    82AC   1367 _UPHY14_CMN_ANAREG_TOP_171	=	0x82ac
                    82B0   1368 _UPHY14_CMN_ANAREG_TOP_172	=	0x82b0
                    82B4   1369 _UPHY14_CMN_ANAREG_TOP_173	=	0x82b4
                    82B8   1370 _UPHY14_CMN_ANAREG_TOP_174	=	0x82b8
                    82BC   1371 _UPHY14_CMN_ANAREG_TOP_175	=	0x82bc
                    82C0   1372 _UPHY14_CMN_ANAREG_TOP_176	=	0x82c0
                    82C4   1373 _UPHY14_CMN_ANAREG_TOP_177	=	0x82c4
                    82C8   1374 _UPHY14_CMN_ANAREG_TOP_178	=	0x82c8
                    82CC   1375 _UPHY14_CMN_ANAREG_TOP_179	=	0x82cc
                    82D0   1376 _UPHY14_CMN_ANAREG_TOP_180	=	0x82d0
                    82D4   1377 _UPHY14_CMN_ANAREG_TOP_181	=	0x82d4
                    82D8   1378 _UPHY14_CMN_ANAREG_TOP_182	=	0x82d8
                    82DC   1379 _UPHY14_CMN_ANAREG_TOP_183	=	0x82dc
                    82E0   1380 _UPHY14_CMN_ANAREG_TOP_184	=	0x82e0
                    82E4   1381 _UPHY14_CMN_ANAREG_TOP_185	=	0x82e4
                    82E8   1382 _UPHY14_CMN_ANAREG_TOP_186	=	0x82e8
                    82EC   1383 _UPHY14_CMN_ANAREG_TOP_187	=	0x82ec
                    82F0   1384 _UPHY14_CMN_ANAREG_TOP_188	=	0x82f0
                    82F4   1385 _UPHY14_CMN_ANAREG_TOP_189	=	0x82f4
                    82F8   1386 _UPHY14_CMN_ANAREG_TOP_190	=	0x82f8
                    82FC   1387 _UPHY14_CMN_ANAREG_TOP_191	=	0x82fc
                    8300   1388 _UPHY14_CMN_ANAREG_TOP_192	=	0x8300
                    8304   1389 _UPHY14_CMN_ANAREG_TOP_193	=	0x8304
                    8308   1390 _UPHY14_CMN_ANAREG_TOP_194	=	0x8308
                    830C   1391 _UPHY14_CMN_ANAREG_TOP_195	=	0x830c
                    8310   1392 _UPHY14_CMN_ANAREG_TOP_196	=	0x8310
                    8314   1393 _UPHY14_CMN_ANAREG_TOP_197	=	0x8314
                    8318   1394 _UPHY14_CMN_ANAREG_TOP_198	=	0x8318
                    831C   1395 _UPHY14_CMN_ANAREG_TOP_199	=	0x831c
                    8320   1396 _UPHY14_CMN_ANAREG_TOP_200	=	0x8320
                    8324   1397 _UPHY14_CMN_ANAREG_TOP_201	=	0x8324
                    8328   1398 _UPHY14_CMN_ANAREG_TOP_202	=	0x8328
                    832C   1399 _UPHY14_CMN_ANAREG_TOP_203	=	0x832c
                    8330   1400 _UPHY14_CMN_ANAREG_TOP_204	=	0x8330
                    8334   1401 _UPHY14_CMN_ANAREG_TOP_205	=	0x8334
                    8338   1402 _UPHY14_CMN_ANAREG_TOP_206	=	0x8338
                    833C   1403 _UPHY14_CMN_ANAREG_TOP_207	=	0x833c
                    8340   1404 _UPHY14_CMN_ANAREG_TOP_208	=	0x8340
                    8344   1405 _UPHY14_CMN_ANAREG_TOP_209	=	0x8344
                    8348   1406 _UPHY14_CMN_ANAREG_TOP_210	=	0x8348
                    834C   1407 _UPHY14_CMN_ANAREG_TOP_211	=	0x834c
                    8350   1408 _UPHY14_CMN_ANAREG_TOP_212	=	0x8350
                    8354   1409 _UPHY14_CMN_ANAREG_TOP_213	=	0x8354
                    8358   1410 _UPHY14_CMN_ANAREG_TOP_214	=	0x8358
                    2000   1411 _PM_CTRL_TX_LANE_REG1_LANE	=	0x2000
                    2004   1412 _PM_CTRL_TX_LANE_REG2_LANE	=	0x2004
                    2008   1413 _INPUT_TX_PIN_REG0_LANE	=	0x2008
                    200C   1414 _INPUT_TX_PIN_REG1_LANE	=	0x200c
                    2010   1415 _INPUT_TX_PIN_REG2_LANE	=	0x2010
                    2014   1416 _INPUT_TX_PIN_REG3_LANE	=	0x2014
                    2018   1417 _PM_CTRL_INTERRUPT_REG1_LANE	=	0x2018
                    201C   1418 _PM_CTRL_INTERRUPT_REG2	=	0x201c
                    2020   1419 _CLKGEN_TX_LANE_REG1_LANE	=	0x2020
                    2024   1420 _TX_SPEED_CONVERT_LANE	=	0x2024
                    2028   1421 _SPD_CTRL_INTERRUPT_REG1_LANE	=	0x2028
                    202C   1422 _SPD_CTRL_INTERRUPT_REG2	=	0x202c
                    2030   1423 _SPD_CTRL_TX_LANE_REG1_LANE	=	0x2030
                    2034   1424 _TX_SYSTEM_LANE	=	0x2034
                    203C   1425 _INPUT_TX_PIN_REG4_LANE	=	0x203c
                    2040   1426 _TX_CALIBRATION_LANE	=	0x2040
                    2044   1427 _DIG_TX_RSVD_REG0	=	0x2044
                    2048   1428 _INPUT_TX_PIN_REG5_LANE	=	0x2048
                    204C   1429 __FIELDNAME__LANE	=	0x204c
                    2050   1430 _PM_CTRL_INTERRUPT_ISR_REG1_LANE	=	0x2050
                    2054   1431 _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE	=	0x2054
                    2058   1432 _ANALOG_TX_REALTIME_REG_1	=	0x2058
                    205C   1433 _MON_TOP	=	0x205c
                    2100   1434 _PM_CTRL_RX_LANE_REG1_LANE	=	0x2100
                    2104   1435 _RX_SYSTEM_LANE	=	0x2104
                    2108   1436 _INPUT_RX_PIN_REG0_LANE	=	0x2108
                    210C   1437 _INPUT_RX_PIN_REG1_LANE	=	0x210c
                    2110   1438 _INPUT_RX_PIN_REG2_LANE	=	0x2110
                    2114   1439 _SPD_CTRL_RX_LANE_REG1_LANE	=	0x2114
                    2118   1440 _DIG_RX_RSVD_REG0	=	0x2118
                    211C   1441 _CLKGEN_RX_LANE_REG1_LANE	=	0x211c
                    2120   1442 _FRAME_SYNC_DET_REG0	=	0x2120
                    2124   1443 _FRAME_SYNC_DET_REG1	=	0x2124
                    2128   1444 _FRAME_SYNC_DET_REG2	=	0x2128
                    212C   1445 _FRAME_SYNC_DET_REG3	=	0x212c
                    2130   1446 _FRAME_SYNC_DET_REG4	=	0x2130
                    2134   1447 _FRAME_SYNC_DET_REG5	=	0x2134
                    2138   1448 _FRAME_SYNC_DET_REG6	=	0x2138
                    213C   1449 _CDR_LOCK_REG	=	0x213c
                    2140   1450 _RX_LANE_INTERRUPT	=	0x2140
                    2144   1451 _RX_LANE_INTERRUPT_MASK	=	0x2144
                    2148   1452 _RX_DATA_PATH_REG	=	0x2148
                    214C   1453 _INPUT_RX_PIN_REG3_LANE	=	0x214c
                    2150   1454 _RX_CALIBRATION_REG	=	0x2150
                    2158   1455 _RX_LANE_INTERRUPT_REG1	=	0x2158
                    2160   1456 _DTL_REG0	=	0x2160
                    2164   1457 _DTL_REG1	=	0x2164
                    2168   1458 _DTL_REG2	=	0x2168
                    216C   1459 _DTL_REG3	=	0x216c
                    2170   1460 _SQ_REG0	=	0x2170
                    4000   1461 _LANE_CFG0	=	0x4000
                    4004   1462 _LANE_STATUS0	=	0x4004
                    4008   1463 _LANE_CFG_STATUS2_LANE	=	0x4008
                    400C   1464 _LANE_CFG2_LANE	=	0x400c
                    4010   1465 _LANE_CFG4	=	0x4010
                    4014   1466 _LANE_CFG_STATUS3_LANE	=	0x4014
                    4018   1467 _LANE_DP_PIE8_CFG0_LANE	=	0x4018
                    401C   1468 _LANE_USB_DP_CFG1_LANE	=	0x401c
                    4020   1469 _LANE_USB_DP_CFG2_LANE	=	0x4020
                    4024   1470 _LANE_EQ_CFG0_LANE	=	0x4024
                    4028   1471 _LANE_EQ_CFG1_LANE	=	0x4028
                    402C   1472 _LANE_PRESET_CFG0_LANE	=	0x402c
                    4030   1473 _LANE_PRESET_CFG2_LANE	=	0x4030
                    4034   1474 _LANE_PRESET_CFG4_LANE	=	0x4034
                    4038   1475 _LANE_PRESET_CFG6_LANE	=	0x4038
                    403C   1476 _LANE_PRESET_CFG8_LANE	=	0x403c
                    4040   1477 _LANE_PRESET_CFG10_LANE	=	0x4040
                    4044   1478 _LANE_PRESET_CFG12_LANE	=	0x4044
                    4048   1479 _LANE_PRESET_CFG14_LANE	=	0x4048
                    404C   1480 _LANE_PRESET_CFG16_LANE	=	0x404c
                    4050   1481 _LANE_COEFF_MAX0_LANE	=	0x4050
                    4054   1482 _LANE_REMOTE_SET_LANE	=	0x4054
                    4058   1483 _LANE_EQ_16G_CFG0_LANE	=	0x4058
                    405C   1484 _LANE_16G_PRESET_CFG0_LANE	=	0x405c
                    4060   1485 _LANE_16G_PRESET_CFG2_LANE	=	0x4060
                    4064   1486 _LANE_16G_PRESET_CFG4_LANE	=	0x4064
                    4068   1487 _LANE_16G_PRESET_CFG6_LANE	=	0x4068
                    406C   1488 _LANE_16G_PRESET_CFG8_LANE	=	0x406c
                    4070   1489 _LANE_16G_PRESET_CFG10_LANE	=	0x4070
                    4074   1490 _LANE_16G_PRESET_CFG12_LANE	=	0x4074
                    4078   1491 _LANE_16G_PRESET_CFG14_LANE	=	0x4078
                    407C   1492 _LANE_16G_PRESET_CFG16_LANE	=	0x407c
                    4080   1493 _LANE_EQ_32G_CFG0_LANE	=	0x4080
                    4084   1494 _LANE_32G_PRESET_CFG0_LANE	=	0x4084
                    4088   1495 _LANE_32G_PRESET_CFG2_LANE	=	0x4088
                    408C   1496 _LANE_32G_PRESET_CFG4_LANE	=	0x408c
                    4090   1497 _LANE_32G_PRESET_CFG6_LANE	=	0x4090
                    4094   1498 _LANE_32G_PRESET_CFG8_LANE	=	0x4094
                    4098   1499 _LANE_32G_PRESET_CFG10_LANE	=	0x4098
                    409C   1500 _LANE_32G_PRESET_CFG12_LANE	=	0x409c
                    40A0   1501 _LANE_32G_PRESET_CFG14_LANE	=	0x40a0
                    40A4   1502 _LANE_32G_PRESET_CFG16_LANE	=	0x40a4
                    2200   1503 _MCU_CONTROL_LANE	=	0x2200
                    2204   1504 _MCU_GPIO	=	0x2204
                    2208   1505 _CACHE_DEBUG0	=	0x2208
                    220C   1506 _CACHE_DEBUG1	=	0x220c
                    2210   1507 _LANE_SYSTEM0	=	0x2210
                    2230   1508 _MCU_STATUS0_LANE	=	0x2230
                    2234   1509 _MCU_STATUS1_LANE	=	0x2234
                    2238   1510 _MCU_STATUS2_LANE	=	0x2238
                    223C   1511 _MCU_STATUS3_LANE	=	0x223c
                    2240   1512 _MCU_INT0_CONTROL	=	0x2240
                    2244   1513 _MCU_INT1_CONTROL	=	0x2244
                    2248   1514 _MCU_INT2_CONTROL	=	0x2248
                    224C   1515 _MCU_INT3_CONTROL	=	0x224c
                    2250   1516 _MCU_INT4_CONTROL	=	0x2250
                    2254   1517 _MCU_INT5_CONTROL	=	0x2254
                    2258   1518 _MCU_INT6_CONTROL	=	0x2258
                    225C   1519 _MCU_INT7_CONTROL	=	0x225c
                    2260   1520 _MCU_INT8_CONTROL	=	0x2260
                    2264   1521 _MCU_INT9_CONTROL	=	0x2264
                    2268   1522 _MCU_INT10_CONTROL	=	0x2268
                    226C   1523 _MCU_INT11_CONTROL	=	0x226c
                    2270   1524 _MCU_INT12_CONTROL	=	0x2270
                    2274   1525 _MCU_TIMER_CONTROL	=	0x2274
                    2278   1526 _MCU_TIMER0_CONTROL	=	0x2278
                    227C   1527 _MCU_TIMER1_CONTROL	=	0x227c
                    2280   1528 _MCU_TIMER2_CONTROL	=	0x2280
                    2284   1529 _MCU_TIMER3_CONTROL	=	0x2284
                    2288   1530 _MCU_IRQ_LANE	=	0x2288
                    228C   1531 _MCU_IRQ_MASK_LANE	=	0x228c
                    2290   1532 _MCU_MEM_REG1_LANE	=	0x2290
                    2294   1533 _MCU_MEM_REG2_LANE	=	0x2294
                    2298   1534 _MCU_TIMER_CTRL_1_LANE	=	0x2298
                    229C   1535 _MCU_TIMER_CTRL_2_LANE	=	0x229c
                    22A0   1536 _MCU_TIMER_CTRL_3_LANE	=	0x22a0
                    22A4   1537 _MCU_TIMER_CTRL_4_LANE	=	0x22a4
                    22A8   1538 _MCU_TIMER_CTRL_5_LANE	=	0x22a8
                    22AC   1539 _MCU_TIMER_CTRL_6_LANE	=	0x22ac
                    22B0   1540 _MCU_TIMER_CTRL_7_LANE	=	0x22b0
                    22B4   1541 _MCU_DEBUG0_LANE	=	0x22b4
                    22B8   1542 _MCU_DEBUG1_LANE	=	0x22b8
                    22BC   1543 _MCU_DEBUG2_LANE	=	0x22bc
                    22C0   1544 _MCU_DEBUG3_LANE	=	0x22c0
                    22C4   1545 _MCU_DEBUG_LANE	=	0x22c4
                    22C8   1546 _EXT_INT_CONTROL	=	0x22c8
                    22CC   1547 _ANA_IF_TRX_REG0	=	0x22cc
                    22D0   1548 _ANA_IF_DFEE_REG0	=	0x22d0
                    22D4   1549 _ANA_IF_DFEO_REG0	=	0x22d4
                    22D8   1550 _MCU_IRQ_ISR_LANE	=	0x22d8
                    22DC   1551 _MCU_WDT_LANE	=	0x22dc
                    22E0   1552 _MCU_INT_CONTROL_13	=	0x22e0
                    22E4   1553 _MCU_COMMAND0	=	0x22e4
                    22F4   1554 _MEM_ECC_ERR_ADDRESS0	=	0x22f4
                    22F8   1555 _XDATA_MEM_CHECKSUM_LANE0	=	0x22f8
                    22FC   1556 _XDATA_MEM_CHECKSUM_LANE1	=	0x22fc
                    2300   1557 _PT_CONTROL0	=	0x2300
                    2304   1558 _PT_CONTROL1	=	0x2304
                    2308   1559 _PT_USER_PATTERN0	=	0x2308
                    230C   1560 _PT_USER_PATTERN1	=	0x230c
                    2310   1561 _PT_USER_PATTERN2	=	0x2310
                    2314   1562 _PT_COUNTER0	=	0x2314
                    2318   1563 _PT_COUNTER1	=	0x2318
                    231C   1564 _PT_COUNTER2	=	0x231c
                    2400   1565 _DFE_CTRL_REG0	=	0x2400
                    2404   1566 _DFE_CTRL_REG1	=	0x2404
                    2408   1567 _DFE_CTRL_REG2	=	0x2408
                    240C   1568 _DFE_CTRL_REG3	=	0x240c
                    2410   1569 _RX_EQ_CLK_CTRL	=	0x2410
                    2414   1570 _DFE_CTRL_REG4	=	0x2414
                    2418   1571 _DFE_ANA_REG0	=	0x2418
                    241C   1572 _DFE_ANA_REG1	=	0x241c
                    2420   1573 _DFE_STEP_REG0	=	0x2420
                    2424   1574 _DFE_STEP_REG1	=	0x2424
                    2430   1575 _DFE_FEN_EVEN_REG	=	0x2430
                    2434   1576 _DFE_FEN_ODD_REG	=	0x2434
                    2438   1577 _DFE_DC_EVEN_REG8	=	0x2438
                    243C   1578 _DFE_DC_ODD_REG8	=	0x243c
                    2440   1579 _DFE_FEXT_EVEN_REG0	=	0x2440
                    2444   1580 _DFE_FEXT_EVEN_REG1	=	0x2444
                    2448   1581 _DFE_FEXT_EVEN_REG2	=	0x2448
                    244C   1582 _DFE_FEXT_EVEN_REG3	=	0x244c
                    2450   1583 _DFE_FEXT_EVEN_REG4	=	0x2450
                    2454   1584 _DFE_FEXT_EVEN_REG5	=	0x2454
                    2458   1585 _DFE_FEXT_EVEN_REG6	=	0x2458
                    245C   1586 _DFE_FEXT_EVEN_REG7	=	0x245c
                    2460   1587 _DFE_FEXT_ODD_REG0	=	0x2460
                    2464   1588 _DFE_FEXT_ODD_REG1	=	0x2464
                    2468   1589 _DFE_FEXT_ODD_REG2	=	0x2468
                    246C   1590 _DFE_FEXT_ODD_REG3	=	0x246c
                    2470   1591 _DFE_FEXT_ODD_REG4	=	0x2470
                    2474   1592 _DFE_FEXT_ODD_REG5	=	0x2474
                    2478   1593 _DFE_FEXT_ODD_REG6	=	0x2478
                    247C   1594 _DFE_FEXT_ODD_REG7	=	0x247c
                    2480   1595 _DFE_READ_EVEN_SM_REG0	=	0x2480
                    2484   1596 _DFE_READ_EVEN_SM_REG1	=	0x2484
                    2488   1597 _DFE_READ_EVEN_SM_REG2	=	0x2488
                    248C   1598 _DFE_READ_EVEN_SM_REG3	=	0x248c
                    2490   1599 _DFE_READ_EVEN_SM_REG4	=	0x2490
                    2494   1600 _DFE_READ_EVEN_SM_REG5	=	0x2494
                    2498   1601 _DFE_READ_EVEN_SM_REG6	=	0x2498
                    249C   1602 _DFE_READ_EVEN_SM_REG7	=	0x249c
                    24A0   1603 _DFE_READ_ODD_SM_REG0	=	0x24a0
                    24A4   1604 _DFE_READ_ODD_SM_REG1	=	0x24a4
                    24A8   1605 _DFE_READ_ODD_SM_REG2	=	0x24a8
                    24AC   1606 _DFE_READ_ODD_SM_REG3	=	0x24ac
                    24B0   1607 _DFE_READ_ODD_SM_REG4	=	0x24b0
                    24B4   1608 _DFE_READ_ODD_SM_REG5	=	0x24b4
                    24B8   1609 _DFE_READ_ODD_SM_REG6	=	0x24b8
                    24BC   1610 _DFE_READ_ODD_SM_REG7	=	0x24bc
                    24C0   1611 _DFE_READ_EVEN_SM_REG8	=	0x24c0
                    24C4   1612 _DFE_READ_ODD_SM_REG8	=	0x24c4
                    24D0   1613 _DFE_READ_EVEN_2C_REG0	=	0x24d0
                    24D4   1614 _DFE_READ_EVEN_2C_REG1	=	0x24d4
                    24D8   1615 _DFE_READ_EVEN_2C_REG2	=	0x24d8
                    24DC   1616 _DFE_READ_EVEN_2C_REG3	=	0x24dc
                    24E0   1617 _DFE_READ_EVEN_2C_REG4	=	0x24e0
                    24E4   1618 _DFE_READ_EVEN_2C_REG5	=	0x24e4
                    24E8   1619 _DFE_READ_EVEN_2C_REG6	=	0x24e8
                    24EC   1620 _DFE_READ_EVEN_2C_REG7	=	0x24ec
                    24F0   1621 _DFE_READ_ODD_2C_REG0	=	0x24f0
                    24F4   1622 _DFE_READ_ODD_2C_REG1	=	0x24f4
                    24F8   1623 _DFE_READ_ODD_2C_REG2	=	0x24f8
                    24FC   1624 _DFE_READ_ODD_2C_REG3	=	0x24fc
                    2500   1625 _DFE_READ_ODD_2C_REG4	=	0x2500
                    2504   1626 _DFE_READ_ODD_2C_REG5	=	0x2504
                    2508   1627 _DFE_READ_ODD_2C_REG6	=	0x2508
                    250C   1628 _DFE_READ_ODD_2C_REG7	=	0x250c
                    2510   1629 _DFE_READ_EVEN_2C_REG8	=	0x2510
                    2514   1630 _DFE_READ_ODD_2C_REG8	=	0x2514
                    2518   1631 _CAL_OFST_REG0	=	0x2518
                    251C   1632 _CAL_OFST_REG1	=	0x251c
                    2520   1633 _CAL_OFST_REG2	=	0x2520
                    2530   1634 _DFE_DCE_REG0	=	0x2530
                    2540   1635 _DFE_STATIC_LANE_REG0	=	0x2540
                    2544   1636 _DFE_STATIC_LANE_REG1	=	0x2544
                    2548   1637 _DFE_STATIC_LANE_REG3	=	0x2548
                    254C   1638 _DFE_STATIC_LANE_REG4	=	0x254c
                    2550   1639 _DFE_STATIC_LANE_REG5	=	0x2550
                    2554   1640 _DFE_STATIC_LANE_REG6	=	0x2554
                    2560   1641 _EOM_VLD_REG0	=	0x2560
                    2564   1642 _EOM_VLD_REG1	=	0x2564
                    2568   1643 _EOM_VLD_REG2	=	0x2568
                    256C   1644 _EOM_VLD_REG3	=	0x256c
                    2570   1645 _EOM_ERR_REG0	=	0x2570
                    2574   1646 _EOM_ERR_REG1	=	0x2574
                    2578   1647 _EOM_ERR_REG2	=	0x2578
                    257C   1648 _EOM_ERR_REG3	=	0x257c
                    2580   1649 _EOM_REG0	=	0x2580
                    25F0   1650 _EOM_VLD_REG4	=	0x25f0
                    25F4   1651 _LANE_MARGIN_REG0	=	0x25f4
                    6000   1652 _CAL_CTRL1_LANE	=	0x6000
                    6004   1653 _CAL_CTRL2_LANE	=	0x6004
                    6008   1654 _CAL_CTRL3_LANE	=	0x6008
                    600C   1655 _CAL_CTRL4_LANE	=	0x600c
                    6010   1656 _CAL_SAVE_DATA1_LANE	=	0x6010
                    6014   1657 _CAL_SAVE_DATA2_LANE	=	0x6014
                    6018   1658 _CAL_SAVE_DATA3_LANE	=	0x6018
                    601C   1659 _PHY_REMOTE_CTRL_COMMAND_LANE	=	0x601c
                    6020   1660 _PHY_REMOTE_CTRL_VALUE_LANE	=	0x6020
                    6024   1661 _PHY_LOCAL_VALUE_LANE	=	0x6024
                    6028   1662 _TRX_TRAIN_IF_TIMERS1_LANE	=	0x6028
                    602C   1663 _TRX_TRAIN_IF_TIMERS2_LANE	=	0x602c
                    6030   1664 _TRX_TRAIN_IF_TIMERS_ENABLE_LANE	=	0x6030
                    6034   1665 _DFE_CONTROL_0	=	0x6034
                    6038   1666 _DFE_CONTROL_1	=	0x6038
                    6040   1667 _DFE_CONTROL_2	=	0x6040
                    6044   1668 _DFE_CONTROL_3	=	0x6044
                    6048   1669 _DFE_CONTROL_4	=	0x6048
                    604C   1670 _DFE_CONTROL_5	=	0x604c
                    6050   1671 _TRAIN_CONTROL_0	=	0x6050
                    6054   1672 _TRAIN_CONTROL_1	=	0x6054
                    6058   1673 _TRAIN_CONTROL_2	=	0x6058
                    605C   1674 _RPTA_CONFIG_0	=	0x605c
                    6060   1675 _RPTA_CONFIG_1	=	0x6060
                    6064   1676 _DLL_CAL	=	0x6064
                    6068   1677 _TRAIN_PARA_0	=	0x6068
                    606C   1678 _TRAIN_PARA_1	=	0x606c
                    6070   1679 _TRAIN_PARA_2	=	0x6070
                    6074   1680 _TRAIN_PARA_3	=	0x6074
                    6078   1681 _DFE_CONTROL_6	=	0x6078
                    607C   1682 _DFE_TEST_0	=	0x607c
                    6080   1683 _DFE_TEST_1	=	0x6080
                    6084   1684 _DFE_TEST_4	=	0x6084
                    6088   1685 _DFE_TEST_5	=	0x6088
                    608C   1686 _DFE_CONTROL_7	=	0x608c
                    6090   1687 _DFE_CONTROL_8	=	0x6090
                    6094   1688 _DFE_CONTROL_9	=	0x6094
                    6098   1689 _DFE_CONTROL_10	=	0x6098
                    609C   1690 _DFE_CONTROL_11	=	0x609c
                    60A0   1691 _CDS_CTRL_REG0	=	0x60a0
                    60A4   1692 _CDS_CTRL_REG1	=	0x60a4
                    60A8   1693 _ESM_POP_P_CNT_LOW_LANE	=	0x60a8
                    60AC   1694 _ESM_ERR_P_CNT_LOW_LANE	=	0x60ac
                    60B0   1695 _ESM_ERR_POP_CNT_HIGH_LANE	=	0x60b0
                    60B4   1696 _TRAIN_CONTROL_3	=	0x60b4
                    60B8   1697 _TRAIN_CONTROL_4	=	0x60b8
                    60BC   1698 _TRAIN_CONTROL_5	=	0x60bc
                    60C0   1699 _TRAIN_CONTROL_6	=	0x60c0
                    60C4   1700 _TRAIN_CONTROL_7	=	0x60c4
                    60C8   1701 _TRAIN_CONTROL_8	=	0x60c8
                    60CC   1702 _TRAIN_CONTROL_9	=	0x60cc
                    60D0   1703 _TRAIN_CONTROL_10	=	0x60d0
                    60D4   1704 _TRAIN_CONTROL_11	=	0x60d4
                    60D8   1705 _TRAIN_CONTROL_12	=	0x60d8
                    60DC   1706 _ESM_POP_N_CNT_LOW_LANE	=	0x60dc
                    60E0   1707 _ESM_ERR_N_CNT_LOW_LANE	=	0x60e0
                    60E4   1708 _TRAIN_CONTROL_13	=	0x60e4
                    60E8   1709 _TRAIN_CONTROL_14	=	0x60e8
                    60EC   1710 _TRAIN_CONTROL_15	=	0x60ec
                    60F0   1711 _TRAIN_CONTROL_16	=	0x60f0
                    60F4   1712 _TRAIN_CONTROL_17	=	0x60f4
                    60F8   1713 _END_XDAT_LANE	=	0x60f8
                    A000   1714 _TX_CMN_REG	=	0xa000
                    A008   1715 _DTX_REG0	=	0xa008
                    A00C   1716 _DTX_REG1	=	0xa00c
                    A010   1717 _DTX_REG2	=	0xa010
                    A014   1718 _DTX_REG3	=	0xa014
                    A018   1719 _DTX_REG4	=	0xa018
                    A01C   1720 _DTX_PHY_ALIGN_REG0	=	0xa01c
                    A024   1721 _DTX_PHY_ALIGN_REG1	=	0xa024
                    A028   1722 _DTX_PHY_ALIGN_REG2	=	0xa028
                    A02C   1723 _SRIS_REG0	=	0xa02c
                    A030   1724 _SRIS_REG1	=	0xa030
                    A100   1725 _RX_CMN_0	=	0xa100
                    A110   1726 _DFE_STATIC_REG0	=	0xa110
                    A114   1727 _DFE_STATIC_REG1	=	0xa114
                    A118   1728 _DFE_STATIC_REG3	=	0xa118
                    A11C   1729 _DFE_STATIC_REG4	=	0xa11c
                    A120   1730 _DFE_STATIC_REG5	=	0xa120
                    A124   1731 _DFE_STATIC_REG6	=	0xa124
                    4200   1732 _GLOB_RST_CLK_CTRL	=	0x4200
                    4204   1733 _GLOB_CLK_SRC_LO	=	0x4204
                    4208   1734 _GLOB_CLK_SRC_HI	=	0x4208
                    420C   1735 _GLOB_MISC_CTRL	=	0x420c
                    4210   1736 _GLOB_DP_SAL_CFG	=	0x4210
                    4214   1737 _GLOB_DP_SAL_CFG1	=	0x4214
                    4218   1738 _GLOB_DP_SAL_CFG3	=	0x4218
                    421C   1739 _GLOB_DP_SAL_CFG5	=	0x421c
                    4220   1740 _GLOB_PM_CFG0	=	0x4220
                    4224   1741 _GLOB_COUNTER_CTRL	=	0x4224
                    4228   1742 _GLOB_COUNTER_HI	=	0x4228
                    422C   1743 _GLOB_PM_DP_CTRL	=	0x422c
                    4230   1744 _GLOB_DP_BAL_CFG0	=	0x4230
                    4234   1745 _GLOB_DP_BAL_CFG2	=	0x4234
                    4238   1746 _GLOB_DP_BAL_CFG4	=	0x4238
                    423C   1747 _GLOB_BIST_CTRL	=	0x423c
                    4240   1748 _GLOB_BIST_LANE_TYPE	=	0x4240
                    4244   1749 _GLOB_BIST_START	=	0x4244
                    4248   1750 _GLOB_BIST_MASK	=	0x4248
                    424C   1751 _GLOB_BIST_RESULT	=	0x424c
                    4250   1752 _GLOB_BIST_SEQR_CFG	=	0x4250
                    4254   1753 _GLOB_BIST_DATA_HI	=	0x4254
                    4258   1754 _GLOB_PIPE_REVISION	=	0x4258
                    425C   1755 _GLOB_L1_SUBSTATES_CFG	=	0x425c
                    A200   1756 _MCU_CONTROL_0	=	0xa200
                    A204   1757 _MCU_CONTROL_1	=	0xa204
                    A208   1758 _MCU_CONTROL_2	=	0xa208
                    A20C   1759 _MCU_CONTROL_3	=	0xa20c
                    A210   1760 _MCU_CONTROL_4	=	0xa210
                    A214   1761 _MCU_DEBUG0	=	0xa214
                    A218   1762 _MCU_DEBUG1	=	0xa218
                    A21C   1763 _MEMORY_CONTROL_0	=	0xa21c
                    A220   1764 _MEMORY_CONTROL_1	=	0xa220
                    A224   1765 _MEMORY_CONTROL_2	=	0xa224
                    A228   1766 _MEMORY_CONTROL_3	=	0xa228
                    A22C   1767 _MEMORY_CONTROL_4	=	0xa22c
                    A234   1768 _MCU_INFO_0	=	0xa234
                    A238   1769 _MCU_INFO_1	=	0xa238
                    A23C   1770 _MCU_INFO_2	=	0xa23c
                    A240   1771 _MCU_INFO_3	=	0xa240
                    A244   1772 _MEM_CMN_ECC_ERR_ADDRESS0	=	0xa244
                    A2E0   1773 _ANA_IF_CMN_REG1	=	0xa2e0
                    A2E4   1774 _MEM_IRQ	=	0xa2e4
                    A2E8   1775 _MEM_IRQ_MASK	=	0xa2e8
                    A2EC   1776 _ANA_IF_CMN_REG0	=	0xa2ec
                    A2F0   1777 _APB_CONTROL_REG	=	0xa2f0
                    A2F4   1778 _MEM_IRQ_CLEAR	=	0xa2f4
                    A2F8   1779 _MCU_SYNC1	=	0xa2f8
                    A2FC   1780 _MCU_SYNC2	=	0xa2fc
                    A300   1781 _TEST0	=	0xa300
                    A304   1782 _TEST1	=	0xa304
                    A308   1783 _TEST2	=	0xa308
                    A30C   1784 _TEST3	=	0xa30c
                    A310   1785 _TEST4	=	0xa310
                    A314   1786 _SYSTEM	=	0xa314
                    A318   1787 _PM_CMN_REG1	=	0xa318
                    A31C   1788 _INPUT_CMN_PIN_REG0	=	0xa31c
                    A320   1789 _INPUT_CMN_PIN_REG1	=	0xa320
                    A324   1790 _INPUT_CMN_PIN_REG2	=	0xa324
                    A328   1791 _ANA_TSEN_CONTROL	=	0xa328
                    A32C   1792 _PLLCAL_REG0	=	0xa32c
                    A330   1793 _PLLCAL_REG1	=	0xa330
                    A334   1794 _CLKGEN_CMN_REG1	=	0xa334
                    A338   1795 _SPD_CMN_REG1	=	0xa338
                    A33C   1796 _OUTPUT_CMN_PIN_REG0	=	0xa33c
                    A340   1797 _CMN_CALIBRATION	=	0xa340
                    A344   1798 __FIELDNAME_	=	0xa344
                    A348   1799 _INPUT_CMN_PIN_REG3	=	0xa348
                    A34C   1800 _PM_CMN_REG2	=	0xa34c
                    A354   1801 _TEST5	=	0xa354
                    A358   1802 _XDATA_MEM_CHECKSUM_CMN_0	=	0xa358
                    A35C   1803 _XDATA_MEM_CHECKSUM_CMN_1	=	0xa35c
                    A360   1804 _XDATA_MEM_CHECKSUM_CMN_2	=	0xa360
                    A364   1805 _MCU_SDT_CMN	=	0xa364
                    A368   1806 _CMN_CACHE_DEBUG0	=	0xa368
                    A36C   1807 _MCU_INT_ADDR	=	0xa36c
                    A370   1808 _CMN_ISR_2	=	0xa370
                    A374   1809 _CMN_ISR_MASK_2	=	0xa374
                    A378   1810 _CMN_ISR_CLEAR_2	=	0xa378
                    A37C   1811 _CMN_MCU_GPIO	=	0xa37c
                    A380   1812 _CMN_CACHE_DEBUG1	=	0xa380
                    A384   1813 _CMN_MCU_TIMER_CONTROL	=	0xa384
                    A388   1814 _CMN_MCU_TIMER_CTRL_2_LANE	=	0xa388
                    A38C   1815 _CMN_MCU_TIMER_CTRL_3_LANE	=	0xa38c
                    A390   1816 _CMN_MCU_TIMER_CTRL_4_LANE	=	0xa390
                    A394   1817 _CMN_MCU_TIMER_CTRL_5_LANE	=	0xa394
                    A398   1818 _CMN_MCU_TIMER0_CONTROL	=	0xa398
                    A39C   1819 _CMN_MCU_TIMER1_CONTROL	=	0xa39c
                    A3A0   1820 _CMN_MCU_TIMER2_CONTROL	=	0xa3a0
                    A3A4   1821 _CMN_MCU_TIMER3_CONTROL	=	0xa3a4
                    A3A8   1822 _CMN_ISR_1	=	0xa3a8
                    A3AC   1823 _CMN_ISR_MASK_1	=	0xa3ac
                    A3B0   1824 _SET_LANE_ISR	=	0xa3b0
                    A3F4   1825 _CMN_MCU_REG	=	0xa3f4
                    A3F8   1826 _CID_REG0	=	0xa3f8
                    A3FC   1827 _CID_REG1	=	0xa3fc
                    E600   1828 _FW_REV	=	0xe600
                    E604   1829 _CONTROL_CONFIG0	=	0xe604
                    E608   1830 _CONTROL_CONFIG1	=	0xe608
                    E60C   1831 _CONTROL_CONFIG2	=	0xe60c
                    E610   1832 _CONTROL_CONFIG3	=	0xe610
                    E614   1833 _CONTROL_CONFIG4	=	0xe614
                    E618   1834 _CONTROL_CONFIG5	=	0xe618
                    E61C   1835 _CONTROL_CONFIG6	=	0xe61c
                    E620   1836 _CONTROL_CONFIG7	=	0xe620
                    E624   1837 _CAL_DATA0	=	0xe624
                    E628   1838 _TRAIN_IF_CONFIG	=	0xe628
                    E62C   1839 _CONTROL_CONFIG8	=	0xe62c
                    E630   1840 _CONTROL_CONFIG9	=	0xe630
                    E634   1841 _CON_CAL_STEP_SIZE1	=	0xe634
                    E638   1842 _CON_CAL_STEP_SIZE2	=	0xe638
                    E63C   1843 _CON_CAL_STEP_SIZE3	=	0xe63c
                    E640   1844 _CON_CAL_STEP_SIZE4	=	0xe640
                    E644   1845 _CON_CAL_STEP_SIZE5	=	0xe644
                    E648   1846 _CAL_TIME_OUT_AND_DIS	=	0xe648
                    E64C   1847 _CAL_STATUS_READ	=	0xe64c
                    E650   1848 _MCU_CONFIG	=	0xe650
                    E654   1849 _CAL_DATA1	=	0xe654
                    E658   1850 _LOOP_CNTS	=	0xe658
                    E65C   1851 _MCU_CONFIG1	=	0xe65c
                    E660   1852 _TIMER_SEL1	=	0xe660
                    E664   1853 _TIMER_SEL2	=	0xe664
                    E668   1854 _TIMER_SEL3	=	0xe668
                    E66C   1855 _G_SELLV_TXCLK	=	0xe66c
                    E670   1856 _G_SELLV_TXDATA	=	0xe670
                    E674   1857 _G_SELLV_TXPRE	=	0xe674
                    E678   1858 _G_SELLV_RXEOMCLK	=	0xe678
                    E67C   1859 _G_SELLV_RXDATACLK	=	0xe67c
                    E680   1860 _G_SELLV_RXSAMPLER	=	0xe680
                    E684   1861 _SAS_PRESET0_TB	=	0xe684
                    E688   1862 _SAS_PRESET1_TB	=	0xe688
                    E68C   1863 _SAS_PRESET2_TB	=	0xe68c
                    E690   1864 _ETH_PRESET0_TB	=	0xe690
                    E694   1865 _ETH_PRESET1_TB	=	0xe694
                    E698   1866 _TX_SAVE_0	=	0xe698
                    E69C   1867 _TX_SAVE_1	=	0xe69c
                    E6A0   1868 _TX_SAVE_2	=	0xe6a0
                    E6A4   1869 _TX_SAVE_3	=	0xe6a4
                    E6A8   1870 _TX_SAVE_4	=	0xe6a8
                    E6AC   1871 _CDS_EYE_CLK_THR	=	0xe6ac
                    E6B0   1872 _SYNC_INFO	=	0xe6b0
                    E6B4   1873 _MCU_INFO_4	=	0xe6b4
                    E6B8   1874 _MCU_INFO_5	=	0xe6b8
                    E6BC   1875 _MCU_INFO_12	=	0xe6bc
                    E6C0   1876 _MCU_INFO_13	=	0xe6c0
                    E6C4   1877 _END_XDAT_CMN	=	0xe6c4
                    2600   1878 _DME_ENC_REG0	=	0x2600
                    2604   1879 _DME_ENC_REG1	=	0x2604
                    2608   1880 _DME_ENC_REG2	=	0x2608
                    260C   1881 _DME_DEC_REG0	=	0x260c
                    2610   1882 _DME_DEC_REG1	=	0x2610
                    2614   1883 _TX_TRAIN_IF_REG0	=	0x2614
                    2618   1884 _TX_TRAIN_IF_REG1	=	0x2618
                    261C   1885 _TX_TRAIN_IF_REG2	=	0x261c
                    2620   1886 _TX_TRAIN_IF_REG3	=	0x2620
                    2624   1887 _TX_TRAIN_PATTTERN_REG0	=	0x2624
                    2628   1888 _TX_TRAIN_DRIVER_REG0	=	0x2628
                    262C   1889 _TX_TRAIN_DRIVER_REG1	=	0x262c
                    2630   1890 _TX_TRAIN_DRIVER_REG2	=	0x2630
                    2634   1891 _TX_TRAIN_DEFAULT_REG0	=	0x2634
                    2638   1892 _TX_TRAIN_DEFAULT_REG1	=	0x2638
                    263C   1893 _TX_TRAIN_DEFAULT_REG2	=	0x263c
                    2640   1894 _TX_TRAIN_DEFAULT_REG3	=	0x2640
                    2644   1895 _TX_TRAIN_DEFAULT_REG4	=	0x2644
                    2648   1896 _TX_TRAIN_DEFAULT_REG5	=	0x2648
                    264C   1897 _TX_EMPH_CTRL_REG0	=	0x264c
                    2650   1898 _LINK_TRAIN_MODE0	=	0x2650
                    2654   1899 _TX_DRV_RD_OUT_REG0	=	0x2654
                    2658   1900 _TX_AMP_CTRL_REG0	=	0x2658
                    265C   1901 _TRX_TRAIN_IF_INTERRUPT_LANE	=	0x265c
                    2660   1902 _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE	=	0x2660
                    2664   1903 _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE	=	0x2664
                    2668   1904 _TX_TRAIN_IF_REG4	=	0x2668
                    266C   1905 _TX_TRAIN_IF_REG5	=	0x266c
                    2670   1906 _TX_TRAIN_IF_REG6	=	0x2670
                    2674   1907 _TX_TRAIN_IF_REG7	=	0x2674
                    2678   1908 _TX_TRAIN_CTRL_LANE	=	0x2678
                    267C   1909 _TX_TRAIN_IF_REG8	=	0x267c
                    6100   1910 _DFE_READ_EVEN_REG0	=	0x6100
                    6104   1911 _DFE_READ_EVEN_REG1	=	0x6104
                    6108   1912 _DFE_READ_EVEN_REG2	=	0x6108
                    610C   1913 _DFE_READ_EVEN_REG3	=	0x610c
                    6110   1914 _DFE_READ_EVEN_REG4	=	0x6110
                    6114   1915 _DFE_READ_EVEN_REG5	=	0x6114
                    6118   1916 _DFE_READ_EVEN_REG6	=	0x6118
                    611C   1917 _DFE_READ_EVEN_REG7	=	0x611c
                    6120   1918 _DFE_READ_ODD_REG0	=	0x6120
                    6124   1919 _DFE_READ_ODD_REG1	=	0x6124
                    6128   1920 _DFE_READ_ODD_REG2	=	0x6128
                    612C   1921 _DFE_READ_ODD_REG3	=	0x612c
                    6130   1922 _DFE_READ_ODD_REG4	=	0x6130
                    6134   1923 _DFE_READ_ODD_REG5	=	0x6134
                    6138   1924 _DFE_READ_ODD_REG6	=	0x6138
                    613C   1925 _DFE_READ_ODD_REG7	=	0x613c
                    6140   1926 _DFE_READ_EVEN_REG8	=	0x6140
                    6144   1927 _DFE_READ_ODD_REG8	=	0x6144
                    6148   1928 _DFE_READ_F0A_EVEN	=	0x6148
                    614C   1929 _DFE_READ_F0A_ODD	=	0x614c
                    6150   1930 _DFE_READ_F0B_EVEN	=	0x6150
                    6154   1931 _DFE_READ_F0B_ODD	=	0x6154
                    6158   1932 _DFE_READ_F0D_EVEN	=	0x6158
                    615C   1933 _DFE_READ_F0D_ODD	=	0x615c
                    6160   1934 _DFE_READ_F0D_LEFT_EVEN	=	0x6160
                    6164   1935 _DFE_READ_F0D_LEFT_ODD	=	0x6164
                    6168   1936 _DFE_READ_F0D_RIGHT_EVEN	=	0x6168
                    616C   1937 _DFE_READ_F0D_RIGHT_ODD	=	0x616c
                    6170   1938 _CDS_READ_MISC0	=	0x6170
                    6174   1939 _CDS_READ_MISC1	=	0x6174
                    6214   1940 _TXTRAIN_IF_REG0	=	0x6214
                    E000   1941 _lc_speedtable	=	0xe000
                    E1C0   1942 _ring_speedtable	=	0xe1c0
                    E5C0   1943 _phy_mode_cmn_table	=	0xe5c0
                    6300   1944 _max_gen	=	0x6300
                    6301   1945 _min_gen	=	0x6301
                    6304   1946 _speedtable	=	0x6304
                    65D4   1947 _phy_mode_lane_table	=	0x65d4
                    60B4   1948 _rc_save	=	0x60b4
                    60D0   1949 _txffe_save	=	0x60d0
                    60E4   1950 _phase_save	=	0x60e4
                    6030   1951 _train_gn1_index	=	0x6030
                    6031   1952 _train_g1_index	=	0x6031
                    6032   1953 _train_g0_index	=	0x6032
                    E6B0   1954 _local_tx_preset_tb	=	0xe6b0
                    E5C1   1955 _cmx_cal_lcvco_dac	=	0xe5c1
                    E5C1   1956 _cmx_cal_lcvco_dac_lsb	=	0xe5c1
                    E5C4   1957 _cmx_cal_lcvco_dac_msb	=	0xe5c4
                    E5CA   1958 _cmx_cal_lccap_msb	=	0xe5ca
                    E5C8   1959 _cmx_cal_lccap_lsb	=	0xe5c8
                    E5CC   1960 _cmx_cal_plldcc	=	0xe5cc
                    E5D0   1961 _cmx_cal_pll_speed_ring	=	0xe5d0
                    E5D4   1962 _cmx_cal_pll_sllp_dac_coarse_ring	=	0xe5d4
                    E5D8   1963 _cmx_cal_sllp_dac_fine_ring	=	0xe5d8
                    65D4   1964 _lnx_cal_txdcc_pdiv	=	0x65d4
                    65D8   1965 _lnx_cal_txdcc_pdiv_hg	=	0x65d8
                    65DA   1966 _lnx_cal_txdcc	=	0x65da
                    65DE   1967 _lnx_cal_txdcc_hg	=	0x65de
                    65E0   1968 _lnx_cal_rxdcc_dll	=	0x65e0
                    65E4   1969 _lnx_cal_rxdcc_dll_hg	=	0x65e4
                    65E6   1970 _lnx_cal_rxdcc_data	=	0x65e6
                    65F0   1971 _lnx_cal_rxdcc_data_hg	=	0x65f0
                    65F5   1972 _lnx_cal_rxdcc_eom	=	0x65f5
                    65FF   1973 _lnx_cal_rxdcc_eom_hg	=	0x65ff
                    6604   1974 _lnx_cal_dll_gmsel	=	0x6604
                    6606   1975 _lnx_cal_vdda_dll_sel	=	0x6606
                    660A   1976 _lnx_cal_dll_eom_gmsel	=	0x660a
                    660C   1977 _lnx_cal_vdda_dll_eom_sel	=	0x660c
                    6610   1978 _lnx_cal_eom_dpher	=	0x6610
                    6612   1979 _lnx_cal_align90_dummy_clk	=	0x6612
                    661A   1980 _lnx_cal_align90_dac	=	0x661a
                    6622   1981 _lnx_cal_align90_gm	=	0x6622
                    662A   1982 _lnx_cal_sellv_txdata	=	0x662a
                    6634   1983 _lnx_cal_sellv_txclk	=	0x6634
                    663E   1984 _lnx_cal_sellv_rxdataclk	=	0x663e
                    6648   1985 _lnx_cal_sellv_txpre	=	0x6648
                    6652   1986 _lnx_cal_sellv_rxsampler	=	0x6652
                    665C   1987 _lnx_cal_sellv_rxeomclk	=	0x665c
                    6666   1988 _lnx_spdoft_tx_preset_index_lane	=	0x6666
                    6490   1989 _lnx_calx_txdcc_pdiv	=	0x6490
                    6496   1990 _lnx_calx_txdcc_pdiv_hg	=	0x6496
                    6499   1991 _lnx_calx_txdcc	=	0x6499
                    649F   1992 _lnx_calx_txdcc_hg	=	0x649f
                    64A2   1993 _lnx_calx_rxdcc_dll	=	0x64a2
                    64A8   1994 _lnx_calx_rxdcc_dll_hg	=	0x64a8
                    64AB   1995 _lnx_calx_dll_gmsel	=	0x64ab
                    64AE   1996 _lnx_calx_vdda_dll_sel	=	0x64ae
                    64B4   1997 _lnx_calx_dll_eom_gmsel	=	0x64b4
                    64B7   1998 _lnx_calx_vdda_dll_eom_sel	=	0x64b7
                    64BD   1999 _lnx_calx_eom_dpher	=	0x64bd
                    64C0   2000 _lnx_calx_align90_dummy_clk	=	0x64c0
                    64CC   2001 _lnx_calx_align90_dac	=	0x64cc
                    64D8   2002 _lnx_calx_align90_gm	=	0x64d8
                    6100   2003 _cds28	=	0x6100
                    6178   2004 _dfe_sm	=	0x6178
                    61B8   2005 _dfe_sm_dc	=	0x61b8
                    61C0   2006 _dfe_sm_save	=	0x61c0
                    03FC   2007 _UPHY_ANAREG_REV_0	=	0x03fc
                    E684   2008 _tx_tb	=	0xe684
                    E698   2009 _train_save_tb	=	0xe698
                    607C   2010 _sq_thrs_ratio_tb	=	0x607c
                           2011 ;--------------------------------------------------------
                           2012 ; absolute external ram data
                           2013 ;--------------------------------------------------------
                           2014 	.area XABS    (ABS,XDATA)
                           2015 ;--------------------------------------------------------
                           2016 ; external initialized ram data
                           2017 ;--------------------------------------------------------
                           2018 	.area HOME    (CODE)
                           2019 	.area GSINIT0 (CODE)
                           2020 	.area GSINIT1 (CODE)
                           2021 	.area GSINIT2 (CODE)
                           2022 	.area GSINIT3 (CODE)
                           2023 	.area GSINIT4 (CODE)
                           2024 	.area GSINIT5 (CODE)
                           2025 	.area GSINIT  (CODE)
                           2026 	.area GSFINAL (CODE)
                           2027 	.area CSEG    (CODE)
                           2028 ;--------------------------------------------------------
                           2029 ; global & static initialisations
                           2030 ;--------------------------------------------------------
                           2031 	.area HOME    (CODE)
                           2032 	.area GSINIT  (CODE)
                           2033 	.area GSFINAL (CODE)
                           2034 	.area GSINIT  (CODE)
                           2035 ;--------------------------------------------------------
                           2036 ; Home
                           2037 ;--------------------------------------------------------
                           2038 	.area HOME    (CODE)
                           2039 	.area HOME    (CODE)
                           2040 ;--------------------------------------------------------
                           2041 ; code
                           2042 ;--------------------------------------------------------
                           2043 	.area BANK2   (CODE)
                           2044 ;------------------------------------------------------------
                           2045 ;Allocation info for local variables in function 'txdcc_clk_toggle'
                           2046 ;------------------------------------------------------------
                           2047 ;------------------------------------------------------------
                           2048 ;	../../shared/src/dcc_cal.c:41: void txdcc_clk_toggle( void ) BANKING_CTRL {
                           2049 ;	-----------------------------------------
                           2050 ;	 function txdcc_clk_toggle
                           2051 ;	-----------------------------------------
   97BC                    2052 _txdcc_clk_toggle:
                    0002   2053 	ar2 = 0x02
                    0003   2054 	ar3 = 0x03
                    0004   2055 	ar4 = 0x04
                    0005   2056 	ar5 = 0x05
                    0006   2057 	ar6 = 0x06
                    0007   2058 	ar7 = 0x07
                    0000   2059 	ar0 = 0x00
                    0001   2060 	ar1 = 0x01
                           2061 ;	../../shared/src/dcc_cal.c:43: TXDCC_CLK = 1;
   97BC 90 02 20           2062 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   97BF E0                 2063 	movx	a,@dptr
   97C0 44 01              2064 	orl	a,#0x01
   97C2 F0                 2065 	movx	@dptr,a
                           2066 ;	../../shared/src/dcc_cal.c:44: delay01(30);
   97C3 90 00 1E           2067 	mov	dptr,#0x001E
   97C6 78 16              2068 	mov	r0,#_delay01
   97C8 79 BC              2069 	mov	r1,#(_delay01 >> 8)
   97CA 7A 02              2070 	mov	r2,#(_delay01 >> 16)
   97CC 12 00 B3           2071 	lcall	__sdcc_banked_call
                           2072 ;	../../shared/src/dcc_cal.c:45: TXDCC_CLK = 0;
   97CF 90 02 20           2073 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   97D2 E0                 2074 	movx	a,@dptr
   97D3 54 FE              2075 	anl	a,#0xfe
   97D5 F0                 2076 	movx	@dptr,a
                           2077 ;	../../shared/src/dcc_cal.c:46: delay01(30);
   97D6 90 00 1E           2078 	mov	dptr,#0x001E
   97D9 78 16              2079 	mov	r0,#_delay01
   97DB 79 BC              2080 	mov	r1,#(_delay01 >> 8)
   97DD 7A 02              2081 	mov	r2,#(_delay01 >> 16)
   97DF 12 00 B3           2082 	lcall	__sdcc_banked_call
   97E2 02 00 C5           2083 	ljmp	__sdcc_banked_ret
                           2084 ;------------------------------------------------------------
                           2085 ;Allocation info for local variables in function 'txdcc_cal'
                           2086 ;------------------------------------------------------------
                           2087 ;dcc_cnt                   Allocated to stack - offset 1
                           2088 ;latched_TXDCC_DN          Allocated to registers r2 
                           2089 ;int_dn                    Allocated to stack - offset 2
                           2090 ;int_up                    Allocated to stack - offset 3
                           2091 ;dir                       Allocated to stack - offset 4
                           2092 ;time_out_cnt              Allocated to registers r5 
                           2093 ;in_cont_mode              Allocated to stack - offset 5
                           2094 ;in_power_on               Allocated to stack - offset 6
                           2095 ;ext_en                    Allocated to registers r4 
                           2096 ;saved_speed_div           Allocated to registers r4 
                           2097 ;hg_set                    Allocated to stack - offset 7
                           2098 ;sloc0                     Allocated to stack - offset 12
                           2099 ;------------------------------------------------------------
                           2100 ;	../../shared/src/dcc_cal.c:52: void txdcc_cal(void) BANKING_CTRL {
                           2101 ;	-----------------------------------------
                           2102 ;	 function txdcc_cal
                           2103 ;	-----------------------------------------
   97E5                    2104 _txdcc_cal:
   97E5 C0 18              2105 	push	_bp
   97E7 E5 81              2106 	mov	a,sp
   97E9 F5 18              2107 	mov	_bp,a
   97EB 24 07              2108 	add	a,#0x07
   97ED F5 81              2109 	mov	sp,a
                           2110 ;	../../shared/src/dcc_cal.c:65: PHY_STATUS = ST_TXDCC_CAL;    
   97EF 90 22 30           2111 	mov	dptr,#_MCU_STATUS0_LANE
   97F2 74 15              2112 	mov	a,#0x15
   97F4 F0                 2113 	movx	@dptr,a
                           2114 ;	../../shared/src/dcc_cal.c:67: lnx_TXDCC_CAL_DONE_LANE = 0; 
   97F5 90 60 02           2115 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0002)
   97F8 E0                 2116 	movx	a,@dptr
   97F9 54 FE              2117 	anl	a,#0xfe
   97FB F0                 2118 	movx	@dptr,a
                           2119 ;	../../shared/src/dcc_cal.c:69: in_cont_mode = 0;
   97FC E5 18              2120 	mov	a,_bp
   97FE 24 05              2121 	add	a,#0x05
   9800 F8                 2122 	mov	r0,a
   9801 76 00              2123 	mov	@r0,#0x00
                           2124 ;	../../shared/src/dcc_cal.c:70: in_power_on = 0;
   9803 E5 18              2125 	mov	a,_bp
   9805 24 06              2126 	add	a,#0x06
   9807 F8                 2127 	mov	r0,a
                           2128 ;	../../shared/src/dcc_cal.c:71: saved_speed_div = 0;
                           2129 ;	../../shared/src/dcc_cal.c:72: time_out_cnt = 0;
                           2130 ;	../../shared/src/dcc_cal.c:73: dir = 0;  
   9808 E4                 2131 	clr	a
   9809 F6                 2132 	mov	@r0,a
   980A FC                 2133 	mov	r4,a
   980B FD                 2134 	mov	r5,a
   980C E5 18              2135 	mov	a,_bp
   980E 24 04              2136 	add	a,#0x04
   9810 F8                 2137 	mov	r0,a
   9811 76 00              2138 	mov	@r0,#0x00
                           2139 ;	../../shared/src/dcc_cal.c:74: hg_set = 0;
   9813 E5 18              2140 	mov	a,_bp
   9815 24 07              2141 	add	a,#0x07
   9817 F8                 2142 	mov	r0,a
   9818 76 00              2143 	mov	@r0,#0x00
                           2144 ;	../../shared/src/dcc_cal.c:77: if (lnx_CAL_DONE_LANE == 0) {                        //power-on calibration
   981A 90 60 03           2145 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   981D E0                 2146 	movx	a,@dptr
   981E 30 E0 03           2147 	jnb	acc.0,00187$
   9821 02 98 C0           2148 	ljmp	00112$
   9824                    2149 00187$:
                           2150 ;	../../shared/src/dcc_cal.c:78: ext_en = cmx_EXT_FORCE_CAL_DONE || cmx_TXDCC_CAL_EXT_EN;
   9824 90 E6 06           2151 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0002)
   9827 E0                 2152 	movx	a,@dptr
   9828 20 E1 0B           2153 	jb	acc.1,00159$
   982B 90 E6 0B           2154 	mov	dptr,#(_CONTROL_CONFIG1 + 0x0003)
   982E E0                 2155 	movx	a,@dptr
   982F 20 E1 04           2156 	jb	acc.1,00159$
   9832 7A 00              2157 	mov	r2,#0x00
   9834 80 02              2158 	sjmp	00160$
   9836                    2159 00159$:
   9836 7A 01              2160 	mov	r2,#0x01
   9838                    2161 00160$:
   9838 C0 04              2162 	push	ar4
   983A 8A 04              2163 	mov	ar4,r2
                           2164 ;	../../shared/src/dcc_cal.c:79: if (ext_en){                                     //use ext value for power-on, bypass calibration
   983C EC                 2165 	mov	a,r4
   983D D0 04              2166 	pop	ar4
   983F 60 30              2167 	jz	00102$
                           2168 ;	../../shared/src/dcc_cal.c:80: dcc_cnt = lnx_cal_txdcc[PWR][tx_pll_rate];
   9841 C0 04              2169 	push	ar4
   9843 A2 0F              2170 	mov	c,_tx_pll_rate
   9845 E4                 2171 	clr	a
   9846 33                 2172 	rlc	a
   9847 24 DA              2173 	add	a,#_lnx_cal_txdcc
   9849 F5 82              2174 	mov	dpl,a
   984B E4                 2175 	clr	a
   984C 34 65              2176 	addc	a,#(_lnx_cal_txdcc >> 8)
   984E F5 83              2177 	mov	dph,a
   9850 E0                 2178 	movx	a,@dptr
   9851 FC                 2179 	mov	r4,a
   9852 A8 18              2180 	mov	r0,_bp
   9854 08                 2181 	inc	r0
   9855 A6 04              2182 	mov	@r0,ar4
                           2183 ;	../../shared/src/dcc_cal.c:81: TXDCC_HG = lnx_cal_txdcc_hg[tx_pll_rate];      //load the HG setting. 
   9857 A2 0F              2184 	mov	c,_tx_pll_rate
   9859 E4                 2185 	clr	a
   985A 33                 2186 	rlc	a
   985B 24 DE              2187 	add	a,#_lnx_cal_txdcc_hg
   985D F5 82              2188 	mov	dpl,a
   985F E4                 2189 	clr	a
   9860 34 65              2190 	addc	a,#(_lnx_cal_txdcc_hg >> 8)
   9862 F5 83              2191 	mov	dph,a
   9864 E0                 2192 	movx	a,@dptr
   9865 90 02 50           2193 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_148
   9868 13                 2194 	rrc	a
   9869 E0                 2195 	movx	a,@dptr
   986A 92 E7              2196 	mov	acc.7,c
   986C F0                 2197 	movx	@dptr,a
   986D D0 04              2198 	pop	ar4
   986F 80 39              2199 	sjmp	00103$
   9871                    2200 00102$:
                           2201 ;	../../shared/src/dcc_cal.c:84: lnx_TXDCC_CAL_PASS_LANE = 0; 
   9871 90 60 06           2202 	mov	dptr,#(_CAL_CTRL2_LANE + 0x0002)
   9874 E0                 2203 	movx	a,@dptr
   9875 54 EF              2204 	anl	a,#0xef
   9877 F0                 2205 	movx	@dptr,a
                           2206 ;	../../shared/src/dcc_cal.c:85: TXDCCCAL_EN = 1;
   9878 90 02 4C           2207 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_147
   987B E0                 2208 	movx	a,@dptr
   987C 44 80              2209 	orl	a,#0x80
   987E F0                 2210 	movx	@dptr,a
                           2211 ;	../../shared/src/dcc_cal.c:86: TRXDCCIN_SEL = 4;
   987F 90 00 44           2212 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_17
   9882 E0                 2213 	movx	a,@dptr
   9883 54 1F              2214 	anl	a,#0x1f
   9885 44 80              2215 	orl	a,#0x80
   9887 F0                 2216 	movx	@dptr,a
                           2217 ;	../../shared/src/dcc_cal.c:87: TXDCC_HG = 0; 
   9888 90 02 50           2218 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_148
   988B E0                 2219 	movx	a,@dptr
   988C 54 7F              2220 	anl	a,#0x7f
   988E F0                 2221 	movx	@dptr,a
                           2222 ;	../../shared/src/dcc_cal.c:88: saved_speed_div = TX_SPEED_DIV;               //E2C clock DCC cal need to force SPEED_DIV to 0
   988F 90 02 58           2223 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_150
   9892 E0                 2224 	movx	a,@dptr
   9893 54 07              2225 	anl	a,#0x07
   9895 FA                 2226 	mov	r2,a
   9896 FC                 2227 	mov	r4,a
                           2228 ;	../../shared/src/dcc_cal.c:89: in_power_on = 1;                              //flag the power-on calibration, so restore speed_div at the end
   9897 E5 18              2229 	mov	a,_bp
   9899 24 06              2230 	add	a,#0x06
   989B F8                 2231 	mov	r0,a
   989C 76 01              2232 	mov	@r0,#0x01
                           2233 ;	../../shared/src/dcc_cal.c:90: TX_SPEED_DIV = 0;                             //Before force SPEED_DIV to 0, save the original one 
   989E 90 02 58           2234 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_150
   98A1 E0                 2235 	movx	a,@dptr
   98A2 54 F8              2236 	anl	a,#0xf8
   98A4 F0                 2237 	movx	@dptr,a
                           2238 ;	../../shared/src/dcc_cal.c:91: dcc_cnt = 0x20;
   98A5 A8 18              2239 	mov	r0,_bp
   98A7 08                 2240 	inc	r0
   98A8 76 20              2241 	mov	@r0,#0x20
   98AA                    2242 00103$:
                           2243 ;	../../shared/src/dcc_cal.c:93: TXDCC_EN = 1;                                  //enable TXDCC_EN during power-on, never deassert
   98AA C0 04              2244 	push	ar4
   98AC 90 02 48           2245 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_146
   98AF E0                 2246 	movx	a,@dptr
   98B0 44 01              2247 	orl	a,#0x01
   98B2 F0                 2248 	movx	@dptr,a
                           2249 ;	../../shared/src/dcc_cal.c:94: txdcc_step_cnt = TXDCC_CAL_STEP_SIZE;              //for power-on (inc. EXT_EN), reset fraction code to middle
   98B3 90 E6 3F           2250 	mov	dptr,#(_CON_CAL_STEP_SIZE3 + 0x0003)
   98B6 E0                 2251 	movx	a,@dptr
   98B7 90 66 10           2252 	mov	dptr,#_txdcc_step_cnt
   98BA F0                 2253 	movx	@dptr,a
   98BB D0 04              2254 	pop	ar4
   98BD 02 99 53           2255 	ljmp	00149$
   98C0                    2256 00112$:
                           2257 ;	../../shared/src/dcc_cal.c:96: else if (LOAD_CAL_ON) {                         //not power-on. Speed-change, load result for current rate
   98C0 90 60 08           2258 	mov	dptr,#_CAL_CTRL3_LANE
   98C3 E0                 2259 	movx	a,@dptr
   98C4 60 47              2260 	jz	00109$
                           2261 ;	../../shared/src/dcc_cal.c:98: dcc_cnt = lnx_cal_txdcc[PWR + cmx_TXDCC_CAL_CONT_CUR_LOAD_EN][tx_pll_rate];  
   98C6 C0 04              2262 	push	ar4
   98C8 90 E6 32           2263 	mov	dptr,#(_CONTROL_CONFIG9 + 0x0002)
   98CB E0                 2264 	movx	a,@dptr
   98CC 23                 2265 	rl	a
   98CD 54 01              2266 	anl	a,#0x01
   98CF 25 E0              2267 	add	a,acc
   98D1 24 DA              2268 	add	a,#_lnx_cal_txdcc
   98D3 FC                 2269 	mov	r4,a
   98D4 E4                 2270 	clr	a
   98D5 34 65              2271 	addc	a,#(_lnx_cal_txdcc >> 8)
   98D7 FF                 2272 	mov	r7,a
   98D8 A2 0F              2273 	mov	c,_tx_pll_rate
   98DA E4                 2274 	clr	a
   98DB 33                 2275 	rlc	a
   98DC 2C                 2276 	add	a,r4
   98DD F5 82              2277 	mov	dpl,a
   98DF E4                 2278 	clr	a
   98E0 3F                 2279 	addc	a,r7
   98E1 F5 83              2280 	mov	dph,a
   98E3 E0                 2281 	movx	a,@dptr
   98E4 FA                 2282 	mov	r2,a
   98E5 A8 18              2283 	mov	r0,_bp
   98E7 08                 2284 	inc	r0
   98E8 A6 02              2285 	mov	@r0,ar2
                           2286 ;	../../shared/src/dcc_cal.c:99: txdcc_step_cnt = TXDCC_CAL_STEP_SIZE;             //when speed change, restore the fracition code to middle
   98EA 90 E6 3F           2287 	mov	dptr,#(_CON_CAL_STEP_SIZE3 + 0x0003)
   98ED E0                 2288 	movx	a,@dptr
   98EE 90 66 10           2289 	mov	dptr,#_txdcc_step_cnt
   98F1 F0                 2290 	movx	@dptr,a
                           2291 ;	../../shared/src/dcc_cal.c:100: TXDCC_HG = lnx_cal_txdcc_hg[tx_pll_rate];      //load the HG setting. 
   98F2 A2 0F              2292 	mov	c,_tx_pll_rate
   98F4 E4                 2293 	clr	a
   98F5 33                 2294 	rlc	a
   98F6 24 DE              2295 	add	a,#_lnx_cal_txdcc_hg
   98F8 F5 82              2296 	mov	dpl,a
   98FA E4                 2297 	clr	a
   98FB 34 65              2298 	addc	a,#(_lnx_cal_txdcc_hg >> 8)
   98FD F5 83              2299 	mov	dph,a
   98FF E0                 2300 	movx	a,@dptr
   9900 FA                 2301 	mov	r2,a
   9901 90 02 50           2302 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_148
   9904 13                 2303 	rrc	a
   9905 E0                 2304 	movx	a,@dptr
   9906 92 E7              2305 	mov	acc.7,c
   9908 F0                 2306 	movx	@dptr,a
   9909 D0 04              2307 	pop	ar4
   990B 80 46              2308 	sjmp	00149$
   990D                    2309 00109$:
                           2310 ;	../../shared/src/dcc_cal.c:102: else if (cmx_TXDCC_CAL_CONT_EN && TX_SPEED_DIV == 0) {  //not power-on. Continious mode, only performed when SPEED_DIV = 0
   990D 90 E6 0E           2311 	mov	dptr,#(_CONTROL_CONFIG2 + 0x0002)
   9910 E0                 2312 	movx	a,@dptr
   9911 30 E7 35           2313 	jnb	acc.7,00105$
   9914 90 02 58           2314 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_150
   9917 E0                 2315 	movx	a,@dptr
   9918 54 07              2316 	anl	a,#0x07
   991A 70 2D              2317 	jnz	00105$
                           2318 ;	../../shared/src/dcc_cal.c:103: TXDCCCAL_EN = 1;
   991C 90 02 4C           2319 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_147
   991F E0                 2320 	movx	a,@dptr
   9920 44 80              2321 	orl	a,#0x80
   9922 F0                 2322 	movx	@dptr,a
                           2323 ;	../../shared/src/dcc_cal.c:104: TRXDCCIN_SEL = 4;
   9923 90 00 44           2324 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_17
   9926 E0                 2325 	movx	a,@dptr
   9927 54 1F              2326 	anl	a,#0x1f
   9929 44 80              2327 	orl	a,#0x80
   992B F0                 2328 	movx	@dptr,a
                           2329 ;	../../shared/src/dcc_cal.c:105: dcc_cnt = lnx_cal_txdcc[CONT][tx_pll_rate];    //always load cont result
   992C A2 0F              2330 	mov	c,_tx_pll_rate
   992E E4                 2331 	clr	a
   992F 33                 2332 	rlc	a
   9930 24 DC              2333 	add	a,#(_lnx_cal_txdcc + 0x0002)
   9932 F5 82              2334 	mov	dpl,a
   9934 E4                 2335 	clr	a
   9935 34 65              2336 	addc	a,#((_lnx_cal_txdcc + 0x0002) >> 8)
   9937 F5 83              2337 	mov	dph,a
   9939 E0                 2338 	movx	a,@dptr
   993A FA                 2339 	mov	r2,a
   993B A8 18              2340 	mov	r0,_bp
   993D 08                 2341 	inc	r0
   993E A6 02              2342 	mov	@r0,ar2
                           2343 ;	../../shared/src/dcc_cal.c:106: in_cont_mode = 1;                              //when continious mode, use fraction code
   9940 E5 18              2344 	mov	a,_bp
   9942 24 05              2345 	add	a,#0x05
   9944 F8                 2346 	mov	r0,a
   9945 76 01              2347 	mov	@r0,#0x01
   9947 80 0A              2348 	sjmp	00149$
   9949                    2349 00105$:
                           2350 ;	../../shared/src/dcc_cal.c:109: lnx_TXDCC_CAL_DONE_LANE = 1;
   9949 90 60 02           2351 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0002)
   994C E0                 2352 	movx	a,@dptr
   994D 44 01              2353 	orl	a,#0x01
   994F F0                 2354 	movx	@dptr,a
                           2355 ;	../../shared/src/dcc_cal.c:110: return;
   9950 02 9B 9D           2356 	ljmp	00156$
                           2357 ;	../../shared/src/dcc_cal.c:114: do {
   9953                    2358 00149$:
                           2359 ;	../../shared/src/dcc_cal.c:115: TXDCC_CNT = dcc_cnt;
   9953 A8 18              2360 	mov	r0,_bp
   9955 08                 2361 	inc	r0
   9956 86 02              2362 	mov	ar2,@r0
   9958 90 02 4C           2363 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_147
   995B EA                 2364 	mov	a,r2
   995C 2A                 2365 	add	a,r2
   995D 54 7E              2366 	anl	a,#0x7e
   995F F5 F0              2367 	mov	b,a
   9961 E0                 2368 	movx	a,@dptr
   9962 54 81              2369 	anl	a,#0x81
   9964 45 F0              2370 	orl	a,b
   9966 F0                 2371 	movx	@dptr,a
                           2372 ;	../../shared/src/dcc_cal.c:116: txdcc_clk_toggle();
   9967 C0 04              2373 	push	ar4
   9969 C0 05              2374 	push	ar5
   996B 78 BC              2375 	mov	r0,#_txdcc_clk_toggle
   996D 79 97              2376 	mov	r1,#(_txdcc_clk_toggle >> 8)
   996F 7A 02              2377 	mov	r2,#(_txdcc_clk_toggle >> 16)
   9971 12 00 B3           2378 	lcall	__sdcc_banked_call
   9974 D0 05              2379 	pop	ar5
   9976 D0 04              2380 	pop	ar4
                           2381 ;	../../shared/src/dcc_cal.c:118: time_out_cnt ++;
   9978 0D                 2382 	inc	r5
                           2383 ;	../../shared/src/dcc_cal.c:119: if( TXDCCCAL_EN == 0 ) break;                                       //either LOAD, or EXT_EN in power-on
   9979 90 02 4C           2384 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_147
   997C E0                 2385 	movx	a,@dptr
   997D 20 E7 03           2386 	jb	acc.7,00194$
   9980 02 9B 31           2387 	ljmp	00151$
   9983                    2388 00194$:
                           2389 ;	../../shared/src/dcc_cal.c:120: if( lnx_CAL_DONE_LANE == 1 && time_out_cnt > 1) break;                   //continious mode, has ran 1 round
   9983 90 60 03           2390 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   9986 E0                 2391 	movx	a,@dptr
   9987 54 01              2392 	anl	a,#0x01
   9989 FA                 2393 	mov	r2,a
   998A BA 01 0A           2394 	cjne	r2,#0x01,00117$
   998D 74 01              2395 	mov	a,#0x01
   998F B5 05 00           2396 	cjne	a,ar5,00197$
   9992                    2397 00197$:
   9992 50 03              2398 	jnc	00198$
   9994 02 9B 31           2399 	ljmp	00151$
   9997                    2400 00198$:
   9997                    2401 00117$:
                           2402 ;	../../shared/src/dcc_cal.c:121: if( lnx_CAL_DONE_LANE == 0 && is_toggle_pat( dir, time_out_cnt - 1 ))  { lnx_TXDCC_CAL_PASS_LANE = 1;  break; }     //power-on, toggled
   9997 90 60 03           2403 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   999A E0                 2404 	movx	a,@dptr
   999B 20 E0 2D           2405 	jb	acc.0,00120$
   999E ED                 2406 	mov	a,r5
   999F 14                 2407 	dec	a
   99A0 FA                 2408 	mov	r2,a
   99A1 C0 04              2409 	push	ar4
   99A3 C0 05              2410 	push	ar5
   99A5 C0 02              2411 	push	ar2
   99A7 E5 18              2412 	mov	a,_bp
   99A9 24 04              2413 	add	a,#0x04
   99AB F8                 2414 	mov	r0,a
   99AC 86 82              2415 	mov	dpl,@r0
   99AE 78 CD              2416 	mov	r0,#_is_toggle_pat
   99B0 79 BD              2417 	mov	r1,#(_is_toggle_pat >> 8)
   99B2 7A 02              2418 	mov	r2,#(_is_toggle_pat >> 16)
   99B4 12 00 B3           2419 	lcall	__sdcc_banked_call
   99B7 15 81              2420 	dec	sp
   99B9 D0 05              2421 	pop	ar5
   99BB D0 04              2422 	pop	ar4
   99BD 92 28              2423 	mov	b0,c
   99BF 50 0A              2424 	jnc	00120$
   99C1 90 60 06           2425 	mov	dptr,#(_CAL_CTRL2_LANE + 0x0002)
   99C4 E0                 2426 	movx	a,@dptr
   99C5 44 10              2427 	orl	a,#0x10
   99C7 F0                 2428 	movx	@dptr,a
   99C8 02 9B 31           2429 	ljmp	00151$
   99CB                    2430 00120$:
                           2431 ;	../../shared/src/dcc_cal.c:122: if( lnx_CAL_DONE_LANE == 0 && time_out_cnt >= TXDCC_LOOP_MAX && cmx_TXDCC_CAL_TIMEOUT_DIS == 0) break;     //power-on, reached maximum rounds
   99CB 90 60 03           2432 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   99CE E0                 2433 	movx	a,@dptr
   99CF 20 E0 0F           2434 	jb	acc.0,00123$
   99D2 BD 40 00           2435 	cjne	r5,#0x40,00202$
   99D5                    2436 00202$:
   99D5 40 0A              2437 	jc	00123$
   99D7 90 E6 48           2438 	mov	dptr,#_CAL_TIME_OUT_AND_DIS
   99DA E0                 2439 	movx	a,@dptr
   99DB 20 E4 03           2440 	jb	acc.4,00204$
   99DE 02 9B 31           2441 	ljmp	00151$
   99E1                    2442 00204$:
   99E1                    2443 00123$:
                           2444 ;	../../shared/src/dcc_cal.c:124: latched_TXDCC_DN = TXDCC_DN;
   99E1 90 20 40           2445 	mov	dptr,#_TX_CALIBRATION_LANE
   99E4 E0                 2446 	movx	a,@dptr
   99E5 54 01              2447 	anl	a,#0x01
   99E7 FA                 2448 	mov	r2,a
                           2449 ;	../../shared/src/dcc_cal.c:125: int_up = 0;
   99E8 E5 18              2450 	mov	a,_bp
   99EA 24 03              2451 	add	a,#0x03
   99EC F8                 2452 	mov	r0,a
   99ED 76 00              2453 	mov	@r0,#0x00
                           2454 ;	../../shared/src/dcc_cal.c:126: int_dn = 0; 
   99EF A8 18              2455 	mov	r0,_bp
   99F1 08                 2456 	inc	r0
   99F2 08                 2457 	inc	r0
   99F3 76 00              2458 	mov	@r0,#0x00
                           2459 ;	../../shared/src/dcc_cal.c:128: if (in_cont_mode) { //continious calibration
   99F5 E5 18              2460 	mov	a,_bp
   99F7 24 05              2461 	add	a,#0x05
   99F9 F8                 2462 	mov	r0,a
   99FA E6                 2463 	mov	a,@r0
   99FB 60 72              2464 	jz	00138$
                           2465 ;	../../shared/src/dcc_cal.c:129: if (latched_TXDCC_DN) {txdcc_step_cnt--;}
   99FD EA                 2466 	mov	a,r2
   99FE 60 0B              2467 	jz	00127$
   9A00 90 66 10           2468 	mov	dptr,#_txdcc_step_cnt
   9A03 E0                 2469 	movx	a,@dptr
   9A04 14                 2470 	dec	a
   9A05 90 66 10           2471 	mov	dptr,#_txdcc_step_cnt
   9A08 F0                 2472 	movx	@dptr,a
   9A09 80 07              2473 	sjmp	00128$
   9A0B                    2474 00127$:
                           2475 ;	../../shared/src/dcc_cal.c:130: else                  {txdcc_step_cnt++;}
   9A0B 90 66 10           2476 	mov	dptr,#_txdcc_step_cnt
   9A0E E0                 2477 	movx	a,@dptr
   9A0F 24 01              2478 	add	a,#0x01
   9A11 F0                 2479 	movx	@dptr,a
   9A12                    2480 00128$:
                           2481 ;	../../shared/src/dcc_cal.c:132: if( txdcc_step_cnt == 0) {
   9A12 90 66 10           2482 	mov	dptr,#_txdcc_step_cnt
   9A15 E0                 2483 	movx	a,@dptr
   9A16 FA                 2484 	mov	r2,a
   9A17 70 1B              2485 	jnz	00132$
                           2486 ;	../../shared/src/dcc_cal.c:133: int_up = 0;
   9A19 C0 04              2487 	push	ar4
   9A1B E5 18              2488 	mov	a,_bp
   9A1D 24 03              2489 	add	a,#0x03
   9A1F F8                 2490 	mov	r0,a
   9A20 76 00              2491 	mov	@r0,#0x00
                           2492 ;	../../shared/src/dcc_cal.c:134: int_dn = 1; 
   9A22 A8 18              2493 	mov	r0,_bp
   9A24 08                 2494 	inc	r0
   9A25 08                 2495 	inc	r0
   9A26 76 01              2496 	mov	@r0,#0x01
                           2497 ;	../../shared/src/dcc_cal.c:135: txdcc_step_cnt = TXDCC_CAL_STEP_SIZE;  //after up/dn triggered, reset fraction code to middle
   9A28 90 E6 3F           2498 	mov	dptr,#(_CON_CAL_STEP_SIZE3 + 0x0003)
   9A2B E0                 2499 	movx	a,@dptr
   9A2C 90 66 10           2500 	mov	dptr,#_txdcc_step_cnt
   9A2F F0                 2501 	movx	@dptr,a
   9A30 D0 04              2502 	pop	ar4
   9A32 80 5A              2503 	sjmp	00139$
   9A34                    2504 00132$:
                           2505 ;	../../shared/src/dcc_cal.c:137: else if(txdcc_step_cnt>=(TXDCC_CAL_STEP_SIZE<<1)) {
   9A34 C0 04              2506 	push	ar4
   9A36 90 E6 3F           2507 	mov	dptr,#(_CON_CAL_STEP_SIZE3 + 0x0003)
   9A39 E0                 2508 	movx	a,@dptr
   9A3A FC                 2509 	mov	r4,a
   9A3B E4                 2510 	clr	a
   9A3C CC                 2511 	xch	a,r4
   9A3D 25 E0              2512 	add	a,acc
   9A3F CC                 2513 	xch	a,r4
   9A40 33                 2514 	rlc	a
   9A41 FF                 2515 	mov	r7,a
   9A42 8A 03              2516 	mov	ar3,r2
   9A44 7E 00              2517 	mov	r6,#0x00
   9A46 C3                 2518 	clr	c
   9A47 EB                 2519 	mov	a,r3
   9A48 9C                 2520 	subb	a,r4
   9A49 EE                 2521 	mov	a,r6
   9A4A 64 80              2522 	xrl	a,#0x80
   9A4C 8F F0              2523 	mov	b,r7
   9A4E 63 F0 80           2524 	xrl	b,#0x80
   9A51 95 F0              2525 	subb	a,b
   9A53 D0 04              2526 	pop	ar4
   9A55 40 37              2527 	jc	00139$
                           2528 ;	../../shared/src/dcc_cal.c:138: int_up = 1;
   9A57 E5 18              2529 	mov	a,_bp
   9A59 24 03              2530 	add	a,#0x03
   9A5B F8                 2531 	mov	r0,a
   9A5C 76 01              2532 	mov	@r0,#0x01
                           2533 ;	../../shared/src/dcc_cal.c:139: int_dn = 0; 
   9A5E A8 18              2534 	mov	r0,_bp
   9A60 08                 2535 	inc	r0
   9A61 08                 2536 	inc	r0
   9A62 76 00              2537 	mov	@r0,#0x00
                           2538 ;	../../shared/src/dcc_cal.c:140: txdcc_step_cnt = TXDCC_CAL_STEP_SIZE;  //after up/dn triggered, reset fraction code to middle
   9A64 90 E6 3F           2539 	mov	dptr,#(_CON_CAL_STEP_SIZE3 + 0x0003)
   9A67 E0                 2540 	movx	a,@dptr
   9A68 FB                 2541 	mov	r3,a
   9A69 90 66 10           2542 	mov	dptr,#_txdcc_step_cnt
   9A6C F0                 2543 	movx	@dptr,a
   9A6D 80 1F              2544 	sjmp	00139$
   9A6F                    2545 00138$:
                           2546 ;	../../shared/src/dcc_cal.c:144: if (latched_TXDCC_DN) {int_up = 0; int_dn = 1;}
   9A6F EA                 2547 	mov	a,r2
   9A70 60 0F              2548 	jz	00135$
   9A72 E5 18              2549 	mov	a,_bp
   9A74 24 03              2550 	add	a,#0x03
   9A76 F8                 2551 	mov	r0,a
   9A77 76 00              2552 	mov	@r0,#0x00
   9A79 A8 18              2553 	mov	r0,_bp
   9A7B 08                 2554 	inc	r0
   9A7C 08                 2555 	inc	r0
   9A7D 76 01              2556 	mov	@r0,#0x01
   9A7F 80 0D              2557 	sjmp	00139$
   9A81                    2558 00135$:
                           2559 ;	../../shared/src/dcc_cal.c:145: else                  {int_up = 1; int_dn = 0;}
   9A81 E5 18              2560 	mov	a,_bp
   9A83 24 03              2561 	add	a,#0x03
   9A85 F8                 2562 	mov	r0,a
   9A86 76 01              2563 	mov	@r0,#0x01
   9A88 A8 18              2564 	mov	r0,_bp
   9A8A 08                 2565 	inc	r0
   9A8B 08                 2566 	inc	r0
   9A8C 76 00              2567 	mov	@r0,#0x00
   9A8E                    2568 00139$:
                           2569 ;	../../shared/src/dcc_cal.c:148: if (int_dn == 1) {
   9A8E A8 18              2570 	mov	r0,_bp
   9A90 08                 2571 	inc	r0
   9A91 08                 2572 	inc	r0
   9A92 B6 01 1F           2573 	cjne	@r0,#0x01,00143$
                           2574 ;	../../shared/src/dcc_cal.c:149: dcc_cnt = sign_abs_dn(dcc_cnt);
   9A95 A8 18              2575 	mov	r0,_bp
   9A97 08                 2576 	inc	r0
   9A98 86 82              2577 	mov	dpl,@r0
   9A9A C0 04              2578 	push	ar4
   9A9C C0 05              2579 	push	ar5
   9A9E 78 55              2580 	mov	r0,#_sign_abs_dn
   9AA0 79 BD              2581 	mov	r1,#(_sign_abs_dn >> 8)
   9AA2 7A 02              2582 	mov	r2,#(_sign_abs_dn >> 16)
   9AA4 12 00 B3           2583 	lcall	__sdcc_banked_call
   9AA7 AA 82              2584 	mov	r2,dpl
   9AA9 D0 05              2585 	pop	ar5
   9AAB D0 04              2586 	pop	ar4
   9AAD A8 18              2587 	mov	r0,_bp
   9AAF 08                 2588 	inc	r0
   9AB0 A6 02              2589 	mov	@r0,ar2
   9AB2 80 2E              2590 	sjmp	00144$
   9AB4                    2591 00143$:
                           2592 ;	../../shared/src/dcc_cal.c:151: else if (int_up == 1) {
   9AB4 E5 18              2593 	mov	a,_bp
   9AB6 24 03              2594 	add	a,#0x03
   9AB8 F8                 2595 	mov	r0,a
   9AB9 B6 01 26           2596 	cjne	@r0,#0x01,00144$
                           2597 ;	../../shared/src/dcc_cal.c:152: dir |= 1;
   9ABC E5 18              2598 	mov	a,_bp
   9ABE 24 04              2599 	add	a,#0x04
   9AC0 F8                 2600 	mov	r0,a
   9AC1 E6                 2601 	mov	a,@r0
   9AC2 44 01              2602 	orl	a,#0x01
   9AC4 F6                 2603 	mov	@r0,a
                           2604 ;	../../shared/src/dcc_cal.c:153: dcc_cnt = sign_abs_up(dcc_cnt);      
   9AC5 A8 18              2605 	mov	r0,_bp
   9AC7 08                 2606 	inc	r0
   9AC8 86 82              2607 	mov	dpl,@r0
   9ACA C0 04              2608 	push	ar4
   9ACC C0 05              2609 	push	ar5
   9ACE 78 33              2610 	mov	r0,#_sign_abs_up
   9AD0 79 BD              2611 	mov	r1,#(_sign_abs_up >> 8)
   9AD2 7A 02              2612 	mov	r2,#(_sign_abs_up >> 16)
   9AD4 12 00 B3           2613 	lcall	__sdcc_banked_call
   9AD7 AA 82              2614 	mov	r2,dpl
   9AD9 D0 05              2615 	pop	ar5
   9ADB D0 04              2616 	pop	ar4
   9ADD A8 18              2617 	mov	r0,_bp
   9ADF 08                 2618 	inc	r0
   9AE0 A6 02              2619 	mov	@r0,ar2
   9AE2                    2620 00144$:
                           2621 ;	../../shared/src/dcc_cal.c:155: dir<<=1;
   9AE2 E5 18              2622 	mov	a,_bp
   9AE4 24 04              2623 	add	a,#0x04
   9AE6 F8                 2624 	mov	r0,a
   9AE7 E6                 2625 	mov	a,@r0
   9AE8 25 E0              2626 	add	a,acc
   9AEA F6                 2627 	mov	@r0,a
                           2628 ;	../../shared/src/dcc_cal.c:156: dir = dir & 0x3f;
   9AEB E5 18              2629 	mov	a,_bp
   9AED 24 04              2630 	add	a,#0x04
   9AEF F8                 2631 	mov	r0,a
   9AF0 E6                 2632 	mov	a,@r0
   9AF1 54 3F              2633 	anl	a,#0x3F
   9AF3 F6                 2634 	mov	@r0,a
                           2635 ;	../../shared/src/dcc_cal.c:160: if (in_power_on && ((dcc_cnt & 0x1f) == 24) && (hg_set == 0)){
   9AF4 E5 18              2636 	mov	a,_bp
   9AF6 24 06              2637 	add	a,#0x06
   9AF8 F8                 2638 	mov	r0,a
   9AF9 E6                 2639 	mov	a,@r0
   9AFA 70 03              2640 	jnz	00214$
   9AFC 02 99 53           2641 	ljmp	00149$
   9AFF                    2642 00214$:
   9AFF A8 18              2643 	mov	r0,_bp
   9B01 08                 2644 	inc	r0
   9B02 74 1F              2645 	mov	a,#0x1F
   9B04 56                 2646 	anl	a,@r0
   9B05 FA                 2647 	mov	r2,a
   9B06 BA 18 02           2648 	cjne	r2,#0x18,00215$
   9B09 80 03              2649 	sjmp	00216$
   9B0B                    2650 00215$:
   9B0B 02 99 53           2651 	ljmp	00149$
   9B0E                    2652 00216$:
   9B0E E5 18              2653 	mov	a,_bp
   9B10 24 07              2654 	add	a,#0x07
   9B12 F8                 2655 	mov	r0,a
   9B13 E6                 2656 	mov	a,@r0
   9B14 60 03              2657 	jz	00217$
   9B16 02 99 53           2658 	ljmp	00149$
   9B19                    2659 00217$:
                           2660 ;	../../shared/src/dcc_cal.c:161: reg_TXDCC_HG_LANE = 1;
   9B19 90 02 50           2661 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_148
   9B1C E0                 2662 	movx	a,@dptr
   9B1D 44 80              2663 	orl	a,#0x80
   9B1F F0                 2664 	movx	@dptr,a
                           2665 ;	../../shared/src/dcc_cal.c:162: hg_set = 1;
   9B20 E5 18              2666 	mov	a,_bp
   9B22 24 07              2667 	add	a,#0x07
   9B24 F8                 2668 	mov	r0,a
   9B25 76 01              2669 	mov	@r0,#0x01
                           2670 ;	../../shared/src/dcc_cal.c:163: dcc_cnt = 0x20;
   9B27 A8 18              2671 	mov	r0,_bp
   9B29 08                 2672 	inc	r0
   9B2A 76 20              2673 	mov	@r0,#0x20
                           2674 ;	../../shared/src/dcc_cal.c:164: time_out_cnt = 0;
   9B2C 7D 00              2675 	mov	r5,#0x00
                           2676 ;	../../shared/src/dcc_cal.c:167: } while (1); 
   9B2E 02 99 53           2677 	ljmp	00149$
   9B31                    2678 00151$:
                           2679 ;	../../shared/src/dcc_cal.c:170: if (in_power_on == 1)
   9B31 E5 18              2680 	mov	a,_bp
   9B33 24 06              2681 	add	a,#0x06
   9B35 F8                 2682 	mov	r0,a
   9B36 B6 01 0E           2683 	cjne	@r0,#0x01,00153$
                           2684 ;	../../shared/src/dcc_cal.c:171: TX_SPEED_DIV = saved_speed_div;
   9B39 90 02 58           2685 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_150
   9B3C EC                 2686 	mov	a,r4
   9B3D 54 07              2687 	anl	a,#0x07
   9B3F F5 F0              2688 	mov	b,a
   9B41 E0                 2689 	movx	a,@dptr
   9B42 54 F8              2690 	anl	a,#0xf8
   9B44 45 F0              2691 	orl	a,b
   9B46 F0                 2692 	movx	@dptr,a
   9B47                    2693 00153$:
                           2694 ;	../../shared/src/dcc_cal.c:175: if (lnx_CAL_DONE_LANE == 0) {                        //if power-on calibration (including ext_en)
   9B47 90 60 03           2695 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   9B4A E0                 2696 	movx	a,@dptr
   9B4B 20 E0 2E           2697 	jb	acc.0,00155$
                           2698 ;	../../shared/src/dcc_cal.c:176: lnx_cal_txdcc[PWR][tx_pll_rate] = dcc_cnt;      //save to power-on result
   9B4E A2 0F              2699 	mov	c,_tx_pll_rate
   9B50 E4                 2700 	clr	a
   9B51 33                 2701 	rlc	a
   9B52 24 DA              2702 	add	a,#_lnx_cal_txdcc
   9B54 F5 82              2703 	mov	dpl,a
   9B56 E4                 2704 	clr	a
   9B57 34 65              2705 	addc	a,#(_lnx_cal_txdcc >> 8)
   9B59 F5 83              2706 	mov	dph,a
   9B5B A8 18              2707 	mov	r0,_bp
   9B5D 08                 2708 	inc	r0
   9B5E E6                 2709 	mov	a,@r0
   9B5F F0                 2710 	movx	@dptr,a
                           2711 ;	../../shared/src/dcc_cal.c:177: lnx_cal_txdcc_hg[tx_pll_rate] = (reg_TXDCC_HG_LANE & 0x01) | 0x00;       //save the HG setting for current rate, will be loaded by continious mode
   9B60 A2 0F              2712 	mov	c,_tx_pll_rate
   9B62 E4                 2713 	clr	a
   9B63 33                 2714 	rlc	a
   9B64 24 DE              2715 	add	a,#_lnx_cal_txdcc_hg
   9B66 FA                 2716 	mov	r2,a
   9B67 E4                 2717 	clr	a
   9B68 34 65              2718 	addc	a,#(_lnx_cal_txdcc_hg >> 8)
   9B6A FB                 2719 	mov	r3,a
   9B6B 90 02 50           2720 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_148
   9B6E E0                 2721 	movx	a,@dptr
   9B6F 23                 2722 	rl	a
   9B70 54 01              2723 	anl	a,#0x01
   9B72 FC                 2724 	mov	r4,a
   9B73 53 04 01           2725 	anl	ar4,#0x01
   9B76 8A 82              2726 	mov	dpl,r2
   9B78 8B 83              2727 	mov	dph,r3
   9B7A EC                 2728 	mov	a,r4
   9B7B F0                 2729 	movx	@dptr,a
   9B7C                    2730 00155$:
                           2731 ;	../../shared/src/dcc_cal.c:179: lnx_cal_txdcc[CONT][tx_pll_rate] = dcc_cnt;     //no matter power-on or LOAD or continious, need to save to [CONT]
   9B7C A2 0F              2732 	mov	c,_tx_pll_rate
   9B7E E4                 2733 	clr	a
   9B7F 33                 2734 	rlc	a
   9B80 FA                 2735 	mov	r2,a
   9B81 24 DC              2736 	add	a,#(_lnx_cal_txdcc + 0x0002)
   9B83 F5 82              2737 	mov	dpl,a
   9B85 E4                 2738 	clr	a
   9B86 34 65              2739 	addc	a,#((_lnx_cal_txdcc + 0x0002) >> 8)
   9B88 F5 83              2740 	mov	dph,a
   9B8A A8 18              2741 	mov	r0,_bp
   9B8C 08                 2742 	inc	r0
   9B8D E6                 2743 	mov	a,@r0
   9B8E F0                 2744 	movx	@dptr,a
                           2745 ;	../../shared/src/dcc_cal.c:181: TXDCCCAL_EN = 0;
   9B8F 90 02 4C           2746 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_147
   9B92 E0                 2747 	movx	a,@dptr
   9B93 54 7F              2748 	anl	a,#0x7f
   9B95 F0                 2749 	movx	@dptr,a
                           2750 ;	../../shared/src/dcc_cal.c:182: lnx_TXDCC_CAL_DONE_LANE = 1;
   9B96 90 60 02           2751 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0002)
   9B99 E0                 2752 	movx	a,@dptr
   9B9A 44 01              2753 	orl	a,#0x01
   9B9C F0                 2754 	movx	@dptr,a
   9B9D                    2755 00156$:
   9B9D 85 18 81           2756 	mov	sp,_bp
   9BA0 D0 18              2757 	pop	_bp
   9BA2 02 00 C5           2758 	ljmp	__sdcc_banked_ret
                           2759 ;------------------------------------------------------------
                           2760 ;Allocation info for local variables in function 'txdcc_pdiv_cal'
                           2761 ;------------------------------------------------------------
                           2762 ;dcc_cnt                   Allocated to registers r6 
                           2763 ;latched_TXDCC_DN          Allocated to registers r7 
                           2764 ;int_dn                    Allocated to stack - offset 1
                           2765 ;int_up                    Allocated to stack - offset 2
                           2766 ;dir                       Allocated to stack - offset 3
                           2767 ;time_out_cnt              Allocated to stack - offset 4
                           2768 ;in_cont_mode              Allocated to stack - offset 5
                           2769 ;in_power_on               Allocated to stack - offset 6
                           2770 ;ext_en                    Allocated to registers r6 
                           2771 ;saved_speed_div           Allocated to registers r4 
                           2772 ;sloc0                     Allocated to stack - offset 11
                           2773 ;------------------------------------------------------------
                           2774 ;	../../shared/src/dcc_cal.c:189: void txdcc_pdiv_cal(void) BANKING_CTRL {
                           2775 ;	-----------------------------------------
                           2776 ;	 function txdcc_pdiv_cal
                           2777 ;	-----------------------------------------
   9BA5                    2778 _txdcc_pdiv_cal:
   9BA5 C0 18              2779 	push	_bp
   9BA7 E5 81              2780 	mov	a,sp
   9BA9 F5 18              2781 	mov	_bp,a
   9BAB 24 06              2782 	add	a,#0x06
   9BAD F5 81              2783 	mov	sp,a
                           2784 ;	../../shared/src/dcc_cal.c:201: PHY_STATUS = ST_TXDCC_PDIV_CAL;    //xbi
   9BAF 90 22 30           2785 	mov	dptr,#_MCU_STATUS0_LANE
   9BB2 74 39              2786 	mov	a,#0x39
   9BB4 F0                 2787 	movx	@dptr,a
                           2788 ;	../../shared/src/dcc_cal.c:203: lnx_TXDCC_PDIV_CAL_DONE_LANE = 0; 
   9BB5 90 60 02           2789 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0002)
   9BB8 E0                 2790 	movx	a,@dptr
   9BB9 54 FD              2791 	anl	a,#0xfd
   9BBB F0                 2792 	movx	@dptr,a
                           2793 ;	../../shared/src/dcc_cal.c:206: if (TX_SPEED_DIV == 0) {
   9BBC 90 02 58           2794 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_150
   9BBF E0                 2795 	movx	a,@dptr
   9BC0 54 07              2796 	anl	a,#0x07
   9BC2 70 0A              2797 	jnz	00102$
                           2798 ;	../../shared/src/dcc_cal.c:207: lnx_TXDCC_PDIV_CAL_DONE_LANE = 1;
   9BC4 90 60 02           2799 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0002)
   9BC7 E0                 2800 	movx	a,@dptr
   9BC8 44 02              2801 	orl	a,#0x02
   9BCA F0                 2802 	movx	@dptr,a
                           2803 ;	../../shared/src/dcc_cal.c:208: return;
   9BCB 02 9E A6           2804 	ljmp	00159$
   9BCE                    2805 00102$:
                           2806 ;	../../shared/src/dcc_cal.c:211: in_cont_mode = 0;
   9BCE E5 18              2807 	mov	a,_bp
   9BD0 24 05              2808 	add	a,#0x05
   9BD2 F8                 2809 	mov	r0,a
   9BD3 76 00              2810 	mov	@r0,#0x00
                           2811 ;	../../shared/src/dcc_cal.c:212: in_power_on = 0;
   9BD5 E5 18              2812 	mov	a,_bp
   9BD7 24 06              2813 	add	a,#0x06
   9BD9 F8                 2814 	mov	r0,a
                           2815 ;	../../shared/src/dcc_cal.c:213: saved_speed_div = 0;
                           2816 ;	../../shared/src/dcc_cal.c:215: dir = 0;  
   9BDA E4                 2817 	clr	a
   9BDB F6                 2818 	mov	@r0,a
   9BDC FC                 2819 	mov	r4,a
   9BDD E5 18              2820 	mov	a,_bp
   9BDF 24 03              2821 	add	a,#0x03
   9BE1 F8                 2822 	mov	r0,a
   9BE2 76 00              2823 	mov	@r0,#0x00
                           2824 ;	../../shared/src/dcc_cal.c:218: if (lnx_CAL_DONE_LANE == 0) {     //power-on calibration, only performed when speed_div != 0
   9BE4 90 60 03           2825 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   9BE7 E0                 2826 	movx	a,@dptr
   9BE8 20 E0 72           2827 	jb	acc.0,00113$
                           2828 ;	../../shared/src/dcc_cal.c:219: ext_en = cmx_EXT_FORCE_CAL_DONE || cmx_TXDCC_PDIV_CAL_EXT_EN;
   9BEB 90 E6 06           2829 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0002)
   9BEE E0                 2830 	movx	a,@dptr
   9BEF 20 E1 0B           2831 	jb	acc.1,00162$
   9BF2 90 E6 0B           2832 	mov	dptr,#(_CONTROL_CONFIG1 + 0x0003)
   9BF5 E0                 2833 	movx	a,@dptr
   9BF6 20 E0 04           2834 	jb	acc.0,00162$
   9BF9 7E 00              2835 	mov	r6,#0x00
   9BFB 80 02              2836 	sjmp	00163$
   9BFD                    2837 00162$:
   9BFD 7E 01              2838 	mov	r6,#0x01
   9BFF                    2839 00163$:
                           2840 ;	../../shared/src/dcc_cal.c:220: if (ext_en)                                     //use ext value for power-on (stored into PWR), bypass calibration
   9BFF EE                 2841 	mov	a,r6
   9C00 60 11              2842 	jz	00104$
                           2843 ;	../../shared/src/dcc_cal.c:221: dcc_cnt = lnx_cal_txdcc_pdiv[PWR][tx_pll_rate];
   9C02 A2 0F              2844 	mov	c,_tx_pll_rate
   9C04 E4                 2845 	clr	a
   9C05 33                 2846 	rlc	a
   9C06 24 D4              2847 	add	a,#_lnx_cal_txdcc_pdiv
   9C08 F5 82              2848 	mov	dpl,a
   9C0A E4                 2849 	clr	a
   9C0B 34 65              2850 	addc	a,#(_lnx_cal_txdcc_pdiv >> 8)
   9C0D F5 83              2851 	mov	dph,a
   9C0F E0                 2852 	movx	a,@dptr
   9C10 FE                 2853 	mov	r6,a
   9C11 80 38              2854 	sjmp	00105$
   9C13                    2855 00104$:
                           2856 ;	../../shared/src/dcc_cal.c:223: lnx_TXDCC_PDIV_CAL_PASS_LANE = 0; 
   9C13 90 60 07           2857 	mov	dptr,#(_CAL_CTRL2_LANE + 0x0003)
   9C16 E0                 2858 	movx	a,@dptr
   9C17 54 DF              2859 	anl	a,#0xdf
   9C19 F0                 2860 	movx	@dptr,a
                           2861 ;	../../shared/src/dcc_cal.c:224: TXDCCCAL_PDIV_EN = 1;
   9C1A 90 02 5C           2862 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_151
   9C1D E0                 2863 	movx	a,@dptr
   9C1E 44 02              2864 	orl	a,#0x02
   9C20 F0                 2865 	movx	@dptr,a
                           2866 ;	../../shared/src/dcc_cal.c:225: TXDCCCAL_EN = 1;
   9C21 90 02 4C           2867 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_147
   9C24 E0                 2868 	movx	a,@dptr
   9C25 44 80              2869 	orl	a,#0x80
   9C27 F0                 2870 	movx	@dptr,a
                           2871 ;	../../shared/src/dcc_cal.c:226: TRXDCCIN_SEL = 4;
   9C28 90 00 44           2872 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_17
   9C2B E0                 2873 	movx	a,@dptr
   9C2C 54 1F              2874 	anl	a,#0x1f
   9C2E 44 80              2875 	orl	a,#0x80
   9C30 F0                 2876 	movx	@dptr,a
                           2877 ;	../../shared/src/dcc_cal.c:227: saved_speed_div = TX_SPEED_DIV;               //PDIV clock DCC cal need to force SPEED_DIV to 1
   9C31 90 02 58           2878 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_150
   9C34 E0                 2879 	movx	a,@dptr
   9C35 54 07              2880 	anl	a,#0x07
   9C37 FF                 2881 	mov	r7,a
   9C38 FC                 2882 	mov	r4,a
                           2883 ;	../../shared/src/dcc_cal.c:228: in_power_on = 1;
   9C39 E5 18              2884 	mov	a,_bp
   9C3B 24 06              2885 	add	a,#0x06
   9C3D F8                 2886 	mov	r0,a
   9C3E 76 01              2887 	mov	@r0,#0x01
                           2888 ;	../../shared/src/dcc_cal.c:229: TX_SPEED_DIV = 1;                             //Before force SPEED_DIV to 1, save the original one 
   9C40 90 02 58           2889 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_150
   9C43 E0                 2890 	movx	a,@dptr
   9C44 54 F8              2891 	anl	a,#0xf8
   9C46 44 01              2892 	orl	a,#0x01
   9C48 F0                 2893 	movx	@dptr,a
                           2894 ;	../../shared/src/dcc_cal.c:230: dcc_cnt = 32;
   9C49 7E 20              2895 	mov	r6,#0x20
   9C4B                    2896 00105$:
                           2897 ;	../../shared/src/dcc_cal.c:232: TXDCC_EN = 1;                                  //enable TXDCC_EN during power-on, never deassert
   9C4B 90 02 48           2898 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_146
   9C4E E0                 2899 	movx	a,@dptr
   9C4F 44 01              2900 	orl	a,#0x01
   9C51 F0                 2901 	movx	@dptr,a
                           2902 ;	../../shared/src/dcc_cal.c:233: txdcc_pdiv_step_cnt = TXDCC_PDIV_CAL_STEP_SIZE;         //during power-on (inc. EXT_EN), reset fraction code to middle
   9C52 90 E6 3E           2903 	mov	dptr,#(_CON_CAL_STEP_SIZE3 + 0x0002)
   9C55 E0                 2904 	movx	a,@dptr
   9C56 FF                 2905 	mov	r7,a
   9C57 90 66 0F           2906 	mov	dptr,#_txdcc_pdiv_step_cnt
   9C5A F0                 2907 	movx	@dptr,a
   9C5B 80 74              2908 	sjmp	00186$
   9C5D                    2909 00113$:
                           2910 ;	../../shared/src/dcc_cal.c:235: else if (LOAD_CAL_ON) {                         //not power-on. Speed-change, load result for current rate
   9C5D 90 60 08           2911 	mov	dptr,#_CAL_CTRL3_LANE
   9C60 E0                 2912 	movx	a,@dptr
   9C61 60 2D              2913 	jz	00110$
                           2914 ;	../../shared/src/dcc_cal.c:237: dcc_cnt = lnx_cal_txdcc_pdiv[PWR + cmx_TXDCC_PDIV_CAL_CONT_CUR_LOAD_EN][tx_pll_rate];  
   9C63 C0 04              2915 	push	ar4
   9C65 90 E6 32           2916 	mov	dptr,#(_CONTROL_CONFIG9 + 0x0002)
   9C68 E0                 2917 	movx	a,@dptr
   9C69 23                 2918 	rl	a
   9C6A 23                 2919 	rl	a
   9C6B 54 01              2920 	anl	a,#0x01
   9C6D 25 E0              2921 	add	a,acc
   9C6F 24 D4              2922 	add	a,#_lnx_cal_txdcc_pdiv
   9C71 FF                 2923 	mov	r7,a
   9C72 E4                 2924 	clr	a
   9C73 34 65              2925 	addc	a,#(_lnx_cal_txdcc_pdiv >> 8)
   9C75 FC                 2926 	mov	r4,a
   9C76 A2 0F              2927 	mov	c,_tx_pll_rate
   9C78 E4                 2928 	clr	a
   9C79 33                 2929 	rlc	a
   9C7A 2F                 2930 	add	a,r7
   9C7B F5 82              2931 	mov	dpl,a
   9C7D E4                 2932 	clr	a
   9C7E 3C                 2933 	addc	a,r4
   9C7F F5 83              2934 	mov	dph,a
   9C81 E0                 2935 	movx	a,@dptr
   9C82 FE                 2936 	mov	r6,a
                           2937 ;	../../shared/src/dcc_cal.c:238: txdcc_pdiv_step_cnt = TXDCC_PDIV_CAL_STEP_SIZE;             //when speed change, restore the fracition code to middle
   9C83 90 E6 3E           2938 	mov	dptr,#(_CON_CAL_STEP_SIZE3 + 0x0002)
   9C86 E0                 2939 	movx	a,@dptr
   9C87 FB                 2940 	mov	r3,a
   9C88 90 66 0F           2941 	mov	dptr,#_txdcc_pdiv_step_cnt
   9C8B F0                 2942 	movx	@dptr,a
   9C8C D0 04              2943 	pop	ar4
   9C8E 80 41              2944 	sjmp	00186$
   9C90                    2945 00110$:
                           2946 ;	../../shared/src/dcc_cal.c:240: else if (cmx_TXDCC_PDIV_CAL_CONT_EN) {               //not power-on. Continious mode.
   9C90 90 E6 0E           2947 	mov	dptr,#(_CONTROL_CONFIG2 + 0x0002)
   9C93 E0                 2948 	movx	a,@dptr
   9C94 30 E6 30           2949 	jnb	acc.6,00107$
                           2950 ;	../../shared/src/dcc_cal.c:241: TXDCCCAL_PDIV_EN = 1;
   9C97 90 02 5C           2951 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_151
   9C9A E0                 2952 	movx	a,@dptr
   9C9B 44 02              2953 	orl	a,#0x02
   9C9D F0                 2954 	movx	@dptr,a
                           2955 ;	../../shared/src/dcc_cal.c:242: TXDCCCAL_EN = 1;
   9C9E 90 02 4C           2956 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_147
   9CA1 E0                 2957 	movx	a,@dptr
   9CA2 44 80              2958 	orl	a,#0x80
   9CA4 F0                 2959 	movx	@dptr,a
                           2960 ;	../../shared/src/dcc_cal.c:243: TRXDCCIN_SEL = 4;
   9CA5 90 00 44           2961 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_17
   9CA8 E0                 2962 	movx	a,@dptr
   9CA9 54 1F              2963 	anl	a,#0x1f
   9CAB 44 80              2964 	orl	a,#0x80
   9CAD F0                 2965 	movx	@dptr,a
                           2966 ;	../../shared/src/dcc_cal.c:244: dcc_cnt = lnx_cal_txdcc_pdiv[CONT][tx_pll_rate];    //always load cont result
   9CAE A2 0F              2967 	mov	c,_tx_pll_rate
   9CB0 E4                 2968 	clr	a
   9CB1 33                 2969 	rlc	a
   9CB2 24 D6              2970 	add	a,#(_lnx_cal_txdcc_pdiv + 0x0002)
   9CB4 F5 82              2971 	mov	dpl,a
   9CB6 E4                 2972 	clr	a
   9CB7 34 65              2973 	addc	a,#((_lnx_cal_txdcc_pdiv + 0x0002) >> 8)
   9CB9 F5 83              2974 	mov	dph,a
   9CBB E0                 2975 	movx	a,@dptr
   9CBC FB                 2976 	mov	r3,a
   9CBD FE                 2977 	mov	r6,a
                           2978 ;	../../shared/src/dcc_cal.c:245: in_cont_mode = 1;                              //when continious mode, use fraction code
   9CBE E5 18              2979 	mov	a,_bp
   9CC0 24 05              2980 	add	a,#0x05
   9CC2 F8                 2981 	mov	r0,a
   9CC3 76 01              2982 	mov	@r0,#0x01
   9CC5 80 0A              2983 	sjmp	00186$
   9CC7                    2984 00107$:
                           2985 ;	../../shared/src/dcc_cal.c:248: lnx_TXDCC_PDIV_CAL_DONE_LANE = 1;
   9CC7 90 60 02           2986 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0002)
   9CCA E0                 2987 	movx	a,@dptr
   9CCB 44 02              2988 	orl	a,#0x02
   9CCD F0                 2989 	movx	@dptr,a
                           2990 ;	../../shared/src/dcc_cal.c:249: return;
   9CCE 02 9E A6           2991 	ljmp	00159$
                           2992 ;	../../shared/src/dcc_cal.c:253: do {
   9CD1                    2993 00186$:
   9CD1 E5 18              2994 	mov	a,_bp
   9CD3 24 04              2995 	add	a,#0x04
   9CD5 F8                 2996 	mov	r0,a
   9CD6 76 00              2997 	mov	@r0,#0x00
   9CD8                    2998 00152$:
                           2999 ;	../../shared/src/dcc_cal.c:254: TXDCC_PDIV_CNT = dcc_cnt;
   9CD8 8E 07              3000 	mov	ar7,r6
   9CDA 90 02 5C           3001 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_151
   9CDD EF                 3002 	mov	a,r7
   9CDE 2F                 3003 	add	a,r7
   9CDF 25 E0              3004 	add	a,acc
   9CE1 54 FC              3005 	anl	a,#0xfc
   9CE3 F5 F0              3006 	mov	b,a
   9CE5 E0                 3007 	movx	a,@dptr
   9CE6 54 03              3008 	anl	a,#0x03
   9CE8 45 F0              3009 	orl	a,b
   9CEA F0                 3010 	movx	@dptr,a
                           3011 ;	../../shared/src/dcc_cal.c:255: txdcc_clk_toggle();
   9CEB C0 04              3012 	push	ar4
   9CED C0 06              3013 	push	ar6
   9CEF 78 BC              3014 	mov	r0,#_txdcc_clk_toggle
   9CF1 79 97              3015 	mov	r1,#(_txdcc_clk_toggle >> 8)
   9CF3 7A 02              3016 	mov	r2,#(_txdcc_clk_toggle >> 16)
   9CF5 12 00 B3           3017 	lcall	__sdcc_banked_call
   9CF8 D0 06              3018 	pop	ar6
   9CFA D0 04              3019 	pop	ar4
                           3020 ;	../../shared/src/dcc_cal.c:257: time_out_cnt ++;
   9CFC E5 18              3021 	mov	a,_bp
   9CFE 24 04              3022 	add	a,#0x04
   9D00 F8                 3023 	mov	r0,a
   9D01 06                 3024 	inc	@r0
                           3025 ;	../../shared/src/dcc_cal.c:258: if( TXDCCCAL_PDIV_EN == 0 ) break;                                       //either LOAD, or EXT_EN in power-on
   9D02 90 02 5C           3026 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_151
   9D05 E0                 3027 	movx	a,@dptr
   9D06 20 E1 03           3028 	jb	acc.1,00196$
   9D09 02 9E 54           3029 	ljmp	00154$
   9D0C                    3030 00196$:
                           3031 ;	../../shared/src/dcc_cal.c:259: if( lnx_CAL_DONE_LANE == 1 && time_out_cnt > 1) break;                   //continious mode, has ran 1 round
   9D0C 90 60 03           3032 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   9D0F E0                 3033 	movx	a,@dptr
   9D10 54 01              3034 	anl	a,#0x01
   9D12 FF                 3035 	mov	r7,a
   9D13 BF 01 0D           3036 	cjne	r7,#0x01,00118$
   9D16 E5 18              3037 	mov	a,_bp
   9D18 24 04              3038 	add	a,#0x04
   9D1A F8                 3039 	mov	r0,a
   9D1B E6                 3040 	mov	a,@r0
   9D1C 24 FE              3041 	add	a,#0xff - 0x01
   9D1E 50 03              3042 	jnc	00199$
   9D20 02 9E 54           3043 	ljmp	00154$
   9D23                    3044 00199$:
   9D23                    3045 00118$:
                           3046 ;	../../shared/src/dcc_cal.c:260: if( lnx_CAL_DONE_LANE == 0 && is_toggle_pat( dir, time_out_cnt - 1 ))  { lnx_TXDCC_PDIV_CAL_PASS_LANE = 1;  break; }     //power-on, toggled
   9D23 90 60 03           3047 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   9D26 E0                 3048 	movx	a,@dptr
   9D27 20 E0 32           3049 	jb	acc.0,00121$
   9D2A E5 18              3050 	mov	a,_bp
   9D2C 24 04              3051 	add	a,#0x04
   9D2E F8                 3052 	mov	r0,a
   9D2F E6                 3053 	mov	a,@r0
   9D30 14                 3054 	dec	a
   9D31 FF                 3055 	mov	r7,a
   9D32 C0 04              3056 	push	ar4
   9D34 C0 06              3057 	push	ar6
   9D36 C0 07              3058 	push	ar7
   9D38 E5 18              3059 	mov	a,_bp
   9D3A 24 03              3060 	add	a,#0x03
   9D3C F8                 3061 	mov	r0,a
   9D3D 86 82              3062 	mov	dpl,@r0
   9D3F 78 CD              3063 	mov	r0,#_is_toggle_pat
   9D41 79 BD              3064 	mov	r1,#(_is_toggle_pat >> 8)
   9D43 7A 02              3065 	mov	r2,#(_is_toggle_pat >> 16)
   9D45 12 00 B3           3066 	lcall	__sdcc_banked_call
   9D48 15 81              3067 	dec	sp
   9D4A D0 06              3068 	pop	ar6
   9D4C D0 04              3069 	pop	ar4
   9D4E 92 28              3070 	mov	b0,c
   9D50 50 0A              3071 	jnc	00121$
   9D52 90 60 07           3072 	mov	dptr,#(_CAL_CTRL2_LANE + 0x0003)
   9D55 E0                 3073 	movx	a,@dptr
   9D56 44 20              3074 	orl	a,#0x20
   9D58 F0                 3075 	movx	@dptr,a
   9D59 02 9E 54           3076 	ljmp	00154$
   9D5C                    3077 00121$:
                           3078 ;	../../shared/src/dcc_cal.c:261: if( lnx_CAL_DONE_LANE == 0 && time_out_cnt >= TXDCC_PDIV_LOOP_MAX && cmx_TXDCC_PDIV_CAL_TIMEOUT_DIS == 0) break;     //power-on, reached maximum rounds
   9D5C 90 60 03           3079 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   9D5F E0                 3080 	movx	a,@dptr
   9D60 20 E0 14           3081 	jb	acc.0,00124$
   9D63 E5 18              3082 	mov	a,_bp
   9D65 24 04              3083 	add	a,#0x04
   9D67 F8                 3084 	mov	r0,a
   9D68 B6 40 00           3085 	cjne	@r0,#0x40,00203$
   9D6B                    3086 00203$:
   9D6B 40 0A              3087 	jc	00124$
   9D6D 90 E6 48           3088 	mov	dptr,#_CAL_TIME_OUT_AND_DIS
   9D70 E0                 3089 	movx	a,@dptr
   9D71 20 E3 03           3090 	jb	acc.3,00205$
   9D74 02 9E 54           3091 	ljmp	00154$
   9D77                    3092 00205$:
   9D77                    3093 00124$:
                           3094 ;	../../shared/src/dcc_cal.c:263: latched_TXDCC_DN = TXDCC_DN;
   9D77 90 20 40           3095 	mov	dptr,#_TX_CALIBRATION_LANE
   9D7A E0                 3096 	movx	a,@dptr
   9D7B 54 01              3097 	anl	a,#0x01
   9D7D FF                 3098 	mov	r7,a
                           3099 ;	../../shared/src/dcc_cal.c:264: int_up = 0;
   9D7E A8 18              3100 	mov	r0,_bp
   9D80 08                 3101 	inc	r0
   9D81 08                 3102 	inc	r0
   9D82 76 00              3103 	mov	@r0,#0x00
                           3104 ;	../../shared/src/dcc_cal.c:265: int_dn = 0; 
   9D84 A8 18              3105 	mov	r0,_bp
   9D86 08                 3106 	inc	r0
   9D87 76 00              3107 	mov	@r0,#0x00
                           3108 ;	../../shared/src/dcc_cal.c:267: if (in_cont_mode) { //continious calibration
   9D89 E5 18              3109 	mov	a,_bp
   9D8B 24 05              3110 	add	a,#0x05
   9D8D F8                 3111 	mov	r0,a
   9D8E E6                 3112 	mov	a,@r0
   9D8F 60 6C              3113 	jz	00139$
                           3114 ;	../../shared/src/dcc_cal.c:268: if (latched_TXDCC_DN) {txdcc_pdiv_step_cnt--;}
   9D91 EF                 3115 	mov	a,r7
   9D92 60 0B              3116 	jz	00128$
   9D94 90 66 0F           3117 	mov	dptr,#_txdcc_pdiv_step_cnt
   9D97 E0                 3118 	movx	a,@dptr
   9D98 14                 3119 	dec	a
   9D99 90 66 0F           3120 	mov	dptr,#_txdcc_pdiv_step_cnt
   9D9C F0                 3121 	movx	@dptr,a
   9D9D 80 07              3122 	sjmp	00129$
   9D9F                    3123 00128$:
                           3124 ;	../../shared/src/dcc_cal.c:269: else                  {txdcc_pdiv_step_cnt++;}
   9D9F 90 66 0F           3125 	mov	dptr,#_txdcc_pdiv_step_cnt
   9DA2 E0                 3126 	movx	a,@dptr
   9DA3 24 01              3127 	add	a,#0x01
   9DA5 F0                 3128 	movx	@dptr,a
   9DA6                    3129 00129$:
                           3130 ;	../../shared/src/dcc_cal.c:271: if( txdcc_pdiv_step_cnt == 0) {
   9DA6 90 66 0F           3131 	mov	dptr,#_txdcc_pdiv_step_cnt
   9DA9 E0                 3132 	movx	a,@dptr
   9DAA FB                 3133 	mov	r3,a
   9DAB 70 19              3134 	jnz	00133$
                           3135 ;	../../shared/src/dcc_cal.c:272: int_up = 0;
   9DAD C0 04              3136 	push	ar4
   9DAF A8 18              3137 	mov	r0,_bp
   9DB1 08                 3138 	inc	r0
   9DB2 08                 3139 	inc	r0
   9DB3 76 00              3140 	mov	@r0,#0x00
                           3141 ;	../../shared/src/dcc_cal.c:273: int_dn = 1; 
   9DB5 A8 18              3142 	mov	r0,_bp
   9DB7 08                 3143 	inc	r0
   9DB8 76 01              3144 	mov	@r0,#0x01
                           3145 ;	../../shared/src/dcc_cal.c:274: txdcc_pdiv_step_cnt = TXDCC_CAL_STEP_SIZE;  //after up/dn triggered, reset fraction code to middle
   9DBA 90 E6 3F           3146 	mov	dptr,#(_CON_CAL_STEP_SIZE3 + 0x0003)
   9DBD E0                 3147 	movx	a,@dptr
   9DBE 90 66 0F           3148 	mov	dptr,#_txdcc_pdiv_step_cnt
   9DC1 F0                 3149 	movx	@dptr,a
   9DC2 D0 04              3150 	pop	ar4
   9DC4 80 52              3151 	sjmp	00140$
   9DC6                    3152 00133$:
                           3153 ;	../../shared/src/dcc_cal.c:276: else if(txdcc_pdiv_step_cnt>=(TXDCC_CAL_STEP_SIZE<<1)) {
   9DC6 C0 04              3154 	push	ar4
   9DC8 90 E6 3F           3155 	mov	dptr,#(_CON_CAL_STEP_SIZE3 + 0x0003)
   9DCB E0                 3156 	movx	a,@dptr
   9DCC FC                 3157 	mov	r4,a
   9DCD E4                 3158 	clr	a
   9DCE CC                 3159 	xch	a,r4
   9DCF 25 E0              3160 	add	a,acc
   9DD1 CC                 3161 	xch	a,r4
   9DD2 33                 3162 	rlc	a
   9DD3 FA                 3163 	mov	r2,a
   9DD4 7D 00              3164 	mov	r5,#0x00
   9DD6 C3                 3165 	clr	c
   9DD7 EB                 3166 	mov	a,r3
   9DD8 9C                 3167 	subb	a,r4
   9DD9 ED                 3168 	mov	a,r5
   9DDA 64 80              3169 	xrl	a,#0x80
   9DDC 8A F0              3170 	mov	b,r2
   9DDE 63 F0 80           3171 	xrl	b,#0x80
   9DE1 95 F0              3172 	subb	a,b
   9DE3 D0 04              3173 	pop	ar4
   9DE5 40 31              3174 	jc	00140$
                           3175 ;	../../shared/src/dcc_cal.c:277: int_up = 1;
   9DE7 A8 18              3176 	mov	r0,_bp
   9DE9 08                 3177 	inc	r0
   9DEA 08                 3178 	inc	r0
   9DEB 76 01              3179 	mov	@r0,#0x01
                           3180 ;	../../shared/src/dcc_cal.c:278: int_dn = 0; 
   9DED A8 18              3181 	mov	r0,_bp
   9DEF 08                 3182 	inc	r0
   9DF0 76 00              3183 	mov	@r0,#0x00
                           3184 ;	../../shared/src/dcc_cal.c:279: txdcc_pdiv_step_cnt = TXDCC_CAL_STEP_SIZE;  //after up/dn triggered, reset fraction code to middle
   9DF2 90 E6 3F           3185 	mov	dptr,#(_CON_CAL_STEP_SIZE3 + 0x0003)
   9DF5 E0                 3186 	movx	a,@dptr
   9DF6 FA                 3187 	mov	r2,a
   9DF7 90 66 0F           3188 	mov	dptr,#_txdcc_pdiv_step_cnt
   9DFA F0                 3189 	movx	@dptr,a
   9DFB 80 1B              3190 	sjmp	00140$
   9DFD                    3191 00139$:
                           3192 ;	../../shared/src/dcc_cal.c:283: if (latched_TXDCC_DN) {int_up = 0; int_dn = 1;}
   9DFD EF                 3193 	mov	a,r7
   9DFE 60 0D              3194 	jz	00136$
   9E00 A8 18              3195 	mov	r0,_bp
   9E02 08                 3196 	inc	r0
   9E03 08                 3197 	inc	r0
   9E04 76 00              3198 	mov	@r0,#0x00
   9E06 A8 18              3199 	mov	r0,_bp
   9E08 08                 3200 	inc	r0
   9E09 76 01              3201 	mov	@r0,#0x01
   9E0B 80 0B              3202 	sjmp	00140$
   9E0D                    3203 00136$:
                           3204 ;	../../shared/src/dcc_cal.c:284: else                  {int_up = 1; int_dn = 0;}
   9E0D A8 18              3205 	mov	r0,_bp
   9E0F 08                 3206 	inc	r0
   9E10 08                 3207 	inc	r0
   9E11 76 01              3208 	mov	@r0,#0x01
   9E13 A8 18              3209 	mov	r0,_bp
   9E15 08                 3210 	inc	r0
   9E16 76 00              3211 	mov	@r0,#0x00
   9E18                    3212 00140$:
                           3213 ;	../../shared/src/dcc_cal.c:287: if (int_dn == 1) {
   9E18 A8 18              3214 	mov	r0,_bp
   9E1A 08                 3215 	inc	r0
   9E1B B6 01 09           3216 	cjne	@r0,#0x01,00150$
                           3217 ;	../../shared/src/dcc_cal.c:288: if (dcc_cnt == 0) {dcc_cnt = 0;}
   9E1E EE                 3218 	mov	a,r6
   9E1F 70 03              3219 	jnz	00142$
   9E21 FE                 3220 	mov	r6,a
   9E22 80 1B              3221 	sjmp	00151$
   9E24                    3222 00142$:
                           3223 ;	../../shared/src/dcc_cal.c:289: else              {dcc_cnt--;}
   9E24 1E                 3224 	dec	r6
   9E25 80 18              3225 	sjmp	00151$
   9E27                    3226 00150$:
                           3227 ;	../../shared/src/dcc_cal.c:291: else if (int_up == 1) {
   9E27 A8 18              3228 	mov	r0,_bp
   9E29 08                 3229 	inc	r0
   9E2A 08                 3230 	inc	r0
   9E2B B6 01 11           3231 	cjne	@r0,#0x01,00151$
                           3232 ;	../../shared/src/dcc_cal.c:292: dir |= 1;
   9E2E E5 18              3233 	mov	a,_bp
   9E30 24 03              3234 	add	a,#0x03
   9E32 F8                 3235 	mov	r0,a
   9E33 E6                 3236 	mov	a,@r0
   9E34 44 01              3237 	orl	a,#0x01
   9E36 F6                 3238 	mov	@r0,a
                           3239 ;	../../shared/src/dcc_cal.c:293: if (dcc_cnt == 63) {dcc_cnt = 63;}
   9E37 BE 3F 04           3240 	cjne	r6,#0x3F,00145$
   9E3A 7E 3F              3241 	mov	r6,#0x3F
   9E3C 80 01              3242 	sjmp	00151$
   9E3E                    3243 00145$:
                           3244 ;	../../shared/src/dcc_cal.c:294: else               {dcc_cnt++;}
   9E3E 0E                 3245 	inc	r6
   9E3F                    3246 00151$:
                           3247 ;	../../shared/src/dcc_cal.c:296: dir<<=1;
   9E3F E5 18              3248 	mov	a,_bp
   9E41 24 03              3249 	add	a,#0x03
   9E43 F8                 3250 	mov	r0,a
   9E44 E6                 3251 	mov	a,@r0
   9E45 25 E0              3252 	add	a,acc
   9E47 F6                 3253 	mov	@r0,a
                           3254 ;	../../shared/src/dcc_cal.c:297: dir = dir & 0x3f;
   9E48 E5 18              3255 	mov	a,_bp
   9E4A 24 03              3256 	add	a,#0x03
   9E4C F8                 3257 	mov	r0,a
   9E4D E6                 3258 	mov	a,@r0
   9E4E 54 3F              3259 	anl	a,#0x3F
   9E50 F6                 3260 	mov	@r0,a
                           3261 ;	../../shared/src/dcc_cal.c:299: } while (1); 
   9E51 02 9C D8           3262 	ljmp	00152$
   9E54                    3263 00154$:
                           3264 ;	../../shared/src/dcc_cal.c:302: if (in_power_on)
   9E54 E5 18              3265 	mov	a,_bp
   9E56 24 06              3266 	add	a,#0x06
   9E58 F8                 3267 	mov	r0,a
   9E59 E6                 3268 	mov	a,@r0
   9E5A 60 0E              3269 	jz	00156$
                           3270 ;	../../shared/src/dcc_cal.c:303: TX_SPEED_DIV = saved_speed_div;
   9E5C 90 02 58           3271 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_150
   9E5F EC                 3272 	mov	a,r4
   9E60 54 07              3273 	anl	a,#0x07
   9E62 F5 F0              3274 	mov	b,a
   9E64 E0                 3275 	movx	a,@dptr
   9E65 54 F8              3276 	anl	a,#0xf8
   9E67 45 F0              3277 	orl	a,b
   9E69 F0                 3278 	movx	@dptr,a
   9E6A                    3279 00156$:
                           3280 ;	../../shared/src/dcc_cal.c:306: if (lnx_CAL_DONE_LANE == 0) {                        //if power-on calibration
   9E6A 90 60 03           3281 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   9E6D E0                 3282 	movx	a,@dptr
   9E6E 20 E0 10           3283 	jb	acc.0,00158$
                           3284 ;	../../shared/src/dcc_cal.c:307: lnx_cal_txdcc_pdiv[PWR][tx_pll_rate] = dcc_cnt;      //save to power-on result
   9E71 A2 0F              3285 	mov	c,_tx_pll_rate
   9E73 E4                 3286 	clr	a
   9E74 33                 3287 	rlc	a
   9E75 FA                 3288 	mov	r2,a
   9E76 24 D4              3289 	add	a,#_lnx_cal_txdcc_pdiv
   9E78 F5 82              3290 	mov	dpl,a
   9E7A E4                 3291 	clr	a
   9E7B 34 65              3292 	addc	a,#(_lnx_cal_txdcc_pdiv >> 8)
   9E7D F5 83              3293 	mov	dph,a
   9E7F EE                 3294 	mov	a,r6
   9E80 F0                 3295 	movx	@dptr,a
   9E81                    3296 00158$:
                           3297 ;	../../shared/src/dcc_cal.c:309: lnx_cal_txdcc_pdiv[CONT][tx_pll_rate] = dcc_cnt;     //no matter power-on or LOAD or continious, need to save to [CONT]
   9E81 A2 0F              3298 	mov	c,_tx_pll_rate
   9E83 E4                 3299 	clr	a
   9E84 33                 3300 	rlc	a
   9E85 FA                 3301 	mov	r2,a
   9E86 24 D6              3302 	add	a,#(_lnx_cal_txdcc_pdiv + 0x0002)
   9E88 F5 82              3303 	mov	dpl,a
   9E8A E4                 3304 	clr	a
   9E8B 34 65              3305 	addc	a,#((_lnx_cal_txdcc_pdiv + 0x0002) >> 8)
   9E8D F5 83              3306 	mov	dph,a
   9E8F EE                 3307 	mov	a,r6
   9E90 F0                 3308 	movx	@dptr,a
                           3309 ;	../../shared/src/dcc_cal.c:311: TXDCCCAL_PDIV_EN = 0;
   9E91 90 02 5C           3310 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_151
   9E94 E0                 3311 	movx	a,@dptr
   9E95 54 FD              3312 	anl	a,#0xfd
   9E97 F0                 3313 	movx	@dptr,a
                           3314 ;	../../shared/src/dcc_cal.c:312: TXDCCCAL_EN = 0;
   9E98 90 02 4C           3315 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_147
   9E9B E0                 3316 	movx	a,@dptr
   9E9C 54 7F              3317 	anl	a,#0x7f
   9E9E F0                 3318 	movx	@dptr,a
                           3319 ;	../../shared/src/dcc_cal.c:313: lnx_TXDCC_PDIV_CAL_DONE_LANE = 1;
   9E9F 90 60 02           3320 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0002)
   9EA2 E0                 3321 	movx	a,@dptr
   9EA3 44 02              3322 	orl	a,#0x02
   9EA5 F0                 3323 	movx	@dptr,a
   9EA6                    3324 00159$:
   9EA6 85 18 81           3325 	mov	sp,_bp
   9EA9 D0 18              3326 	pop	_bp
   9EAB 02 00 C5           3327 	ljmp	__sdcc_banked_ret
                           3328 ;------------------------------------------------------------
                           3329 ;Allocation info for local variables in function 'rxdcc_clk_toggle'
                           3330 ;------------------------------------------------------------
                           3331 ;------------------------------------------------------------
                           3332 ;	../../shared/src/dcc_cal.c:319: void rxdcc_clk_toggle(void) BANKING_CTRL {
                           3333 ;	-----------------------------------------
                           3334 ;	 function rxdcc_clk_toggle
                           3335 ;	-----------------------------------------
   9EAE                    3336 _rxdcc_clk_toggle:
                           3337 ;	../../shared/src/dcc_cal.c:320: delay01(5);
   9EAE 90 00 05           3338 	mov	dptr,#0x0005
   9EB1 78 16              3339 	mov	r0,#_delay01
   9EB3 79 BC              3340 	mov	r1,#(_delay01 >> 8)
   9EB5 7A 02              3341 	mov	r2,#(_delay01 >> 16)
   9EB7 12 00 B3           3342 	lcall	__sdcc_banked_call
                           3343 ;	../../shared/src/dcc_cal.c:321: RXDCC_DAC_SYNC_CLK = 1;
   9EBA 90 00 44           3344 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_17
   9EBD E0                 3345 	movx	a,@dptr
   9EBE 44 10              3346 	orl	a,#0x10
   9EC0 F0                 3347 	movx	@dptr,a
                           3348 ;	../../shared/src/dcc_cal.c:322: delay01(5);
   9EC1 90 00 05           3349 	mov	dptr,#0x0005
   9EC4 78 16              3350 	mov	r0,#_delay01
   9EC6 79 BC              3351 	mov	r1,#(_delay01 >> 8)
   9EC8 7A 02              3352 	mov	r2,#(_delay01 >> 16)
   9ECA 12 00 B3           3353 	lcall	__sdcc_banked_call
                           3354 ;	../../shared/src/dcc_cal.c:323: RXDCC_DCLKMP_CLK = 1;
   9ECD 90 02 20           3355 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   9ED0 E0                 3356 	movx	a,@dptr
   9ED1 44 01              3357 	orl	a,#0x01
   9ED3 F0                 3358 	movx	@dptr,a
                           3359 ;	../../shared/src/dcc_cal.c:324: delay01(25);
   9ED4 90 00 19           3360 	mov	dptr,#0x0019
   9ED7 78 16              3361 	mov	r0,#_delay01
   9ED9 79 BC              3362 	mov	r1,#(_delay01 >> 8)
   9EDB 7A 02              3363 	mov	r2,#(_delay01 >> 16)
   9EDD 12 00 B3           3364 	lcall	__sdcc_banked_call
                           3365 ;	../../shared/src/dcc_cal.c:325: RXDCC_DAC_SYNC_CLK = 0;
   9EE0 90 00 44           3366 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_17
   9EE3 E0                 3367 	movx	a,@dptr
   9EE4 54 EF              3368 	anl	a,#0xef
   9EE6 F0                 3369 	movx	@dptr,a
                           3370 ;	../../shared/src/dcc_cal.c:326: delay01(5);
   9EE7 90 00 05           3371 	mov	dptr,#0x0005
   9EEA 78 16              3372 	mov	r0,#_delay01
   9EEC 79 BC              3373 	mov	r1,#(_delay01 >> 8)
   9EEE 7A 02              3374 	mov	r2,#(_delay01 >> 16)
   9EF0 12 00 B3           3375 	lcall	__sdcc_banked_call
                           3376 ;	../../shared/src/dcc_cal.c:327: RXDCC_DCLKMP_CLK = 0;
   9EF3 90 02 20           3377 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   9EF6 E0                 3378 	movx	a,@dptr
   9EF7 54 FE              3379 	anl	a,#0xfe
   9EF9 F0                 3380 	movx	@dptr,a
                           3381 ;	../../shared/src/dcc_cal.c:328: delay01(25);
   9EFA 90 00 19           3382 	mov	dptr,#0x0019
   9EFD 78 16              3383 	mov	r0,#_delay01
   9EFF 79 BC              3384 	mov	r1,#(_delay01 >> 8)
   9F01 7A 02              3385 	mov	r2,#(_delay01 >> 16)
   9F03 12 00 B3           3386 	lcall	__sdcc_banked_call
   9F06 02 00 C5           3387 	ljmp	__sdcc_banked_ret
                           3388 ;------------------------------------------------------------
                           3389 ;Allocation info for local variables in function 'rxdcc_dll_cal'
                           3390 ;------------------------------------------------------------
                           3391 ;dcc_cnt                   Allocated to registers r7 
                           3392 ;latched_RXDCC_DN          Allocated to registers r2 
                           3393 ;int_dn                    Allocated to stack - offset 1
                           3394 ;int_up                    Allocated to stack - offset 2
                           3395 ;dir                       Allocated to stack - offset 3
                           3396 ;time_out_cnt              Allocated to stack - offset 4
                           3397 ;in_cont_mode              Allocated to stack - offset 5
                           3398 ;in_power_on               Allocated to stack - offset 6
                           3399 ;ext_en                    Allocated to registers r7 
                           3400 ;hg_set                    Allocated to registers r6 
                           3401 ;------------------------------------------------------------
                           3402 ;	../../shared/src/dcc_cal.c:331: void rxdcc_dll_cal(void) BANKING_CTRL {
                           3403 ;	-----------------------------------------
                           3404 ;	 function rxdcc_dll_cal
                           3405 ;	-----------------------------------------
   9F09                    3406 _rxdcc_dll_cal:
   9F09 C0 18              3407 	push	_bp
   9F0B E5 81              3408 	mov	a,sp
   9F0D F5 18              3409 	mov	_bp,a
   9F0F 24 06              3410 	add	a,#0x06
   9F11 F5 81              3411 	mov	sp,a
                           3412 ;	../../shared/src/dcc_cal.c:343: PHY_STATUS = ST_RXDCC_DLL_CAL;    
   9F13 90 22 30           3413 	mov	dptr,#_MCU_STATUS0_LANE
   9F16 74 08              3414 	mov	a,#0x08
   9F18 F0                 3415 	movx	@dptr,a
                           3416 ;	../../shared/src/dcc_cal.c:345: lnx_RXDCC_DLL_CAL_DONE_LANE = 0; 
   9F19 90 60 00           3417 	mov	dptr,#_CAL_CTRL1_LANE
   9F1C E0                 3418 	movx	a,@dptr
   9F1D 54 BF              3419 	anl	a,#0xbf
   9F1F F0                 3420 	movx	@dptr,a
                           3421 ;	../../shared/src/dcc_cal.c:347: in_cont_mode = 0;
   9F20 E5 18              3422 	mov	a,_bp
   9F22 24 05              3423 	add	a,#0x05
   9F24 F8                 3424 	mov	r0,a
   9F25 76 00              3425 	mov	@r0,#0x00
                           3426 ;	../../shared/src/dcc_cal.c:348: in_power_on = 0;
   9F27 E5 18              3427 	mov	a,_bp
   9F29 24 06              3428 	add	a,#0x06
   9F2B F8                 3429 	mov	r0,a
   9F2C 76 00              3430 	mov	@r0,#0x00
                           3431 ;	../../shared/src/dcc_cal.c:349: time_out_cnt = 0;
   9F2E E5 18              3432 	mov	a,_bp
   9F30 24 04              3433 	add	a,#0x04
   9F32 F8                 3434 	mov	r0,a
   9F33 76 00              3435 	mov	@r0,#0x00
                           3436 ;	../../shared/src/dcc_cal.c:350: dir = 0;  
   9F35 E5 18              3437 	mov	a,_bp
   9F37 24 03              3438 	add	a,#0x03
   9F39 F8                 3439 	mov	r0,a
   9F3A 76 00              3440 	mov	@r0,#0x00
                           3441 ;	../../shared/src/dcc_cal.c:351: hg_set = 0;
   9F3C 7E 00              3442 	mov	r6,#0x00
                           3443 ;	../../shared/src/dcc_cal.c:354: if (lnx_CAL_DONE_LANE == 0) {                        //power-on calibration
   9F3E 90 60 03           3444 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   9F41 E0                 3445 	movx	a,@dptr
   9F42 30 E0 03           3446 	jnb	acc.0,00182$
   9F45 02 9F C5           3447 	ljmp	00111$
   9F48                    3448 00182$:
                           3449 ;	../../shared/src/dcc_cal.c:355: ext_en = cmx_EXT_FORCE_CAL_DONE || cmx_RXDCC_DLL_CAL_EXT_EN;
   9F48 90 E6 06           3450 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0002)
   9F4B E0                 3451 	movx	a,@dptr
   9F4C 20 E1 0B           3452 	jb	acc.1,00156$
   9F4F 90 E6 09           3453 	mov	dptr,#(_CONTROL_CONFIG1 + 0x0001)
   9F52 E0                 3454 	movx	a,@dptr
   9F53 20 E7 04           3455 	jb	acc.7,00156$
   9F56 7F 00              3456 	mov	r7,#0x00
   9F58 80 02              3457 	sjmp	00157$
   9F5A                    3458 00156$:
   9F5A 7F 01              3459 	mov	r7,#0x01
   9F5C                    3460 00157$:
                           3461 ;	../../shared/src/dcc_cal.c:356: if (ext_en) {                                     //use ext value for power-on, bypass calibration
   9F5C EF                 3462 	mov	a,r7
   9F5D 60 2B              3463 	jz	00102$
                           3464 ;	../../shared/src/dcc_cal.c:357: dcc_cnt = lnx_cal_rxdcc_dll[PWR][rx_pll_rate];
   9F5F C0 06              3465 	push	ar6
   9F61 A2 0E              3466 	mov	c,_rx_pll_rate
   9F63 E4                 3467 	clr	a
   9F64 33                 3468 	rlc	a
   9F65 24 E0              3469 	add	a,#_lnx_cal_rxdcc_dll
   9F67 F5 82              3470 	mov	dpl,a
   9F69 E4                 3471 	clr	a
   9F6A 34 65              3472 	addc	a,#(_lnx_cal_rxdcc_dll >> 8)
   9F6C F5 83              3473 	mov	dph,a
   9F6E E0                 3474 	movx	a,@dptr
   9F6F FF                 3475 	mov	r7,a
                           3476 ;	../../shared/src/dcc_cal.c:358: RXDCC_HG_DLLCLK = lnx_cal_rxdcc_dll_hg[rx_pll_rate];          //load the HG setting. 
   9F70 A2 0E              3477 	mov	c,_rx_pll_rate
   9F72 E4                 3478 	clr	a
   9F73 33                 3479 	rlc	a
   9F74 24 E4              3480 	add	a,#_lnx_cal_rxdcc_dll_hg
   9F76 F5 82              3481 	mov	dpl,a
   9F78 E4                 3482 	clr	a
   9F79 34 65              3483 	addc	a,#(_lnx_cal_rxdcc_dll_hg >> 8)
   9F7B F5 83              3484 	mov	dph,a
   9F7D E0                 3485 	movx	a,@dptr
   9F7E 90 02 1C           3486 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_135
   9F81 13                 3487 	rrc	a
   9F82 E0                 3488 	movx	a,@dptr
   9F83 92 E1              3489 	mov	acc.1,c
   9F85 F0                 3490 	movx	@dptr,a
   9F86 D0 06              3491 	pop	ar6
   9F88 80 25              3492 	sjmp	00103$
   9F8A                    3493 00102$:
                           3494 ;	../../shared/src/dcc_cal.c:361: lnx_RXDCC_DLL_CAL_PASS_LANE = 0; 
   9F8A 90 60 04           3495 	mov	dptr,#_CAL_CTRL2_LANE
   9F8D E0                 3496 	movx	a,@dptr
   9F8E 54 BF              3497 	anl	a,#0xbf
   9F90 F0                 3498 	movx	@dptr,a
                           3499 ;	../../shared/src/dcc_cal.c:362: RXDCC_CAL_EN = 1;
   9F91 90 00 40           3500 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_16
   9F94 E0                 3501 	movx	a,@dptr
   9F95 44 01              3502 	orl	a,#0x01
   9F97 F0                 3503 	movx	@dptr,a
                           3504 ;	../../shared/src/dcc_cal.c:363: TRXDCCIN_SEL = 0;
   9F98 90 00 44           3505 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_17
   9F9B E0                 3506 	movx	a,@dptr
   9F9C 54 1F              3507 	anl	a,#0x1f
   9F9E F0                 3508 	movx	@dptr,a
                           3509 ;	../../shared/src/dcc_cal.c:364: RXDCC_HG_DLLCLK = 0;
   9F9F 90 02 1C           3510 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_135
   9FA2 E0                 3511 	movx	a,@dptr
   9FA3 54 FD              3512 	anl	a,#0xfd
   9FA5 F0                 3513 	movx	@dptr,a
                           3514 ;	../../shared/src/dcc_cal.c:365: dcc_cnt = 0x20;
   9FA6 7F 20              3515 	mov	r7,#0x20
                           3516 ;	../../shared/src/dcc_cal.c:366: in_power_on = 1;
   9FA8 E5 18              3517 	mov	a,_bp
   9FAA 24 06              3518 	add	a,#0x06
   9FAC F8                 3519 	mov	r0,a
   9FAD 76 01              3520 	mov	@r0,#0x01
   9FAF                    3521 00103$:
                           3522 ;	../../shared/src/dcc_cal.c:368: RXDCC_EN_DLLCLK = 1;                           //enable RXDCC_EN during power-on, never deassert
   9FAF C0 06              3523 	push	ar6
   9FB1 90 02 18           3524 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_134
   9FB4 E0                 3525 	movx	a,@dptr
   9FB5 44 01              3526 	orl	a,#0x01
   9FB7 F0                 3527 	movx	@dptr,a
                           3528 ;	../../shared/src/dcc_cal.c:369: rxdcc_dll_step_cnt = RXDCC_DLL_CAL_STEP_SIZE;      //for power-on (inc. EXT_EN), reset fraction code to middle
   9FB8 90 E6 47           3529 	mov	dptr,#(_CON_CAL_STEP_SIZE5 + 0x0003)
   9FBB E0                 3530 	movx	a,@dptr
   9FBC 90 66 0A           3531 	mov	dptr,#_rxdcc_dll_step_cnt
   9FBF F0                 3532 	movx	@dptr,a
   9FC0 D0 06              3533 	pop	ar6
   9FC2 02 A0 45           3534 	ljmp	00148$
   9FC5                    3535 00111$:
                           3536 ;	../../shared/src/dcc_cal.c:371: else if (LOAD_CAL_ON) {                         //not power-on. Speed-change, load result for current rate
   9FC5 90 60 08           3537 	mov	dptr,#_CAL_CTRL3_LANE
   9FC8 E0                 3538 	movx	a,@dptr
   9FC9 60 42              3539 	jz	00108$
                           3540 ;	../../shared/src/dcc_cal.c:373: dcc_cnt = lnx_cal_rxdcc_dll[PWR + cmx_RXDCC_DLL_CAL_CONT_CUR_LOAD_EN][rx_pll_rate];  
   9FCB C0 06              3541 	push	ar6
   9FCD 90 E6 31           3542 	mov	dptr,#(_CONTROL_CONFIG9 + 0x0001)
   9FD0 E0                 3543 	movx	a,@dptr
   9FD1 23                 3544 	rl	a
   9FD2 54 01              3545 	anl	a,#0x01
   9FD4 25 E0              3546 	add	a,acc
   9FD6 24 E0              3547 	add	a,#_lnx_cal_rxdcc_dll
   9FD8 FE                 3548 	mov	r6,a
   9FD9 E4                 3549 	clr	a
   9FDA 34 65              3550 	addc	a,#(_lnx_cal_rxdcc_dll >> 8)
   9FDC FB                 3551 	mov	r3,a
   9FDD A2 0E              3552 	mov	c,_rx_pll_rate
   9FDF E4                 3553 	clr	a
   9FE0 33                 3554 	rlc	a
   9FE1 2E                 3555 	add	a,r6
   9FE2 F5 82              3556 	mov	dpl,a
   9FE4 E4                 3557 	clr	a
   9FE5 3B                 3558 	addc	a,r3
   9FE6 F5 83              3559 	mov	dph,a
   9FE8 E0                 3560 	movx	a,@dptr
   9FE9 FF                 3561 	mov	r7,a
                           3562 ;	../../shared/src/dcc_cal.c:374: rxdcc_dll_step_cnt = RXDCC_DLL_CAL_STEP_SIZE;     //when speed change, restore the fracition code to middle
   9FEA 90 E6 47           3563 	mov	dptr,#(_CON_CAL_STEP_SIZE5 + 0x0003)
   9FED E0                 3564 	movx	a,@dptr
   9FEE 90 66 0A           3565 	mov	dptr,#_rxdcc_dll_step_cnt
   9FF1 F0                 3566 	movx	@dptr,a
                           3567 ;	../../shared/src/dcc_cal.c:375: RXDCC_HG_DLLCLK = lnx_cal_rxdcc_dll_hg[rx_pll_rate];          //load the HG setting. 
   9FF2 A2 0E              3568 	mov	c,_rx_pll_rate
   9FF4 E4                 3569 	clr	a
   9FF5 33                 3570 	rlc	a
   9FF6 24 E4              3571 	add	a,#_lnx_cal_rxdcc_dll_hg
   9FF8 F5 82              3572 	mov	dpl,a
   9FFA E4                 3573 	clr	a
   9FFB 34 65              3574 	addc	a,#(_lnx_cal_rxdcc_dll_hg >> 8)
   9FFD F5 83              3575 	mov	dph,a
   9FFF E0                 3576 	movx	a,@dptr
   A000 FA                 3577 	mov	r2,a
   A001 90 02 1C           3578 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_135
   A004 13                 3579 	rrc	a
   A005 E0                 3580 	movx	a,@dptr
   A006 92 E1              3581 	mov	acc.1,c
   A008 F0                 3582 	movx	@dptr,a
   A009 D0 06              3583 	pop	ar6
   A00B 80 38              3584 	sjmp	00148$
   A00D                    3585 00108$:
                           3586 ;	../../shared/src/dcc_cal.c:377: else if (cmx_RXDCC_DLL_CAL_CONT_EN) {  //not power-on. Continious mode, only performed when SPEED_DIV = 0
   A00D 90 E6 0D           3587 	mov	dptr,#(_CONTROL_CONFIG2 + 0x0001)
   A010 E0                 3588 	movx	a,@dptr
   A011 30 E7 27           3589 	jnb	acc.7,00105$
                           3590 ;	../../shared/src/dcc_cal.c:378: RXDCC_CAL_EN = 1;
   A014 90 00 40           3591 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_16
   A017 E0                 3592 	movx	a,@dptr
   A018 44 01              3593 	orl	a,#0x01
   A01A F0                 3594 	movx	@dptr,a
                           3595 ;	../../shared/src/dcc_cal.c:379: TRXDCCIN_SEL = 0;
   A01B 90 00 44           3596 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_17
   A01E E0                 3597 	movx	a,@dptr
   A01F 54 1F              3598 	anl	a,#0x1f
   A021 F0                 3599 	movx	@dptr,a
                           3600 ;	../../shared/src/dcc_cal.c:380: dcc_cnt = lnx_cal_rxdcc_dll[CONT][rx_pll_rate];    //always load cont result
   A022 A2 0E              3601 	mov	c,_rx_pll_rate
   A024 E4                 3602 	clr	a
   A025 33                 3603 	rlc	a
   A026 24 E2              3604 	add	a,#(_lnx_cal_rxdcc_dll + 0x0002)
   A028 F5 82              3605 	mov	dpl,a
   A02A E4                 3606 	clr	a
   A02B 34 65              3607 	addc	a,#((_lnx_cal_rxdcc_dll + 0x0002) >> 8)
   A02D F5 83              3608 	mov	dph,a
   A02F E0                 3609 	movx	a,@dptr
   A030 FA                 3610 	mov	r2,a
   A031 FF                 3611 	mov	r7,a
                           3612 ;	../../shared/src/dcc_cal.c:381: in_cont_mode = 1;                                  //when continious mode, use fraction code
   A032 E5 18              3613 	mov	a,_bp
   A034 24 05              3614 	add	a,#0x05
   A036 F8                 3615 	mov	r0,a
   A037 76 01              3616 	mov	@r0,#0x01
   A039 80 0A              3617 	sjmp	00148$
   A03B                    3618 00105$:
                           3619 ;	../../shared/src/dcc_cal.c:384: lnx_RXDCC_DLL_CAL_DONE_LANE = 1;
   A03B 90 60 00           3620 	mov	dptr,#_CAL_CTRL1_LANE
   A03E E0                 3621 	movx	a,@dptr
   A03F 44 40              3622 	orl	a,#0x40
   A041 F0                 3623 	movx	@dptr,a
                           3624 ;	../../shared/src/dcc_cal.c:385: return;
   A042 02 A2 57           3625 	ljmp	00153$
                           3626 ;	../../shared/src/dcc_cal.c:389: do {
   A045                    3627 00148$:
                           3628 ;	../../shared/src/dcc_cal.c:390: RXDCC_DLLCLK = dcc_cnt;
   A045 8F 02              3629 	mov	ar2,r7
   A047 90 02 1C           3630 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_135
   A04A EA                 3631 	mov	a,r2
   A04B 2A                 3632 	add	a,r2
   A04C 25 E0              3633 	add	a,acc
   A04E 54 FC              3634 	anl	a,#0xfc
   A050 F5 F0              3635 	mov	b,a
   A052 E0                 3636 	movx	a,@dptr
   A053 54 03              3637 	anl	a,#0x03
   A055 45 F0              3638 	orl	a,b
   A057 F0                 3639 	movx	@dptr,a
                           3640 ;	../../shared/src/dcc_cal.c:391: rxdcc_clk_toggle();
   A058 C0 06              3641 	push	ar6
   A05A C0 07              3642 	push	ar7
   A05C 78 AE              3643 	mov	r0,#_rxdcc_clk_toggle
   A05E 79 9E              3644 	mov	r1,#(_rxdcc_clk_toggle >> 8)
   A060 7A 02              3645 	mov	r2,#(_rxdcc_clk_toggle >> 16)
   A062 12 00 B3           3646 	lcall	__sdcc_banked_call
   A065 D0 07              3647 	pop	ar7
   A067 D0 06              3648 	pop	ar6
                           3649 ;	../../shared/src/dcc_cal.c:393: time_out_cnt ++;
   A069 E5 18              3650 	mov	a,_bp
   A06B 24 04              3651 	add	a,#0x04
   A06D F8                 3652 	mov	r0,a
   A06E 06                 3653 	inc	@r0
                           3654 ;	../../shared/src/dcc_cal.c:394: if( RXDCC_CAL_EN == 0 ) break;                                      //either LOAD, or EXT_EN in power-on
   A06F 90 00 40           3655 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_16
   A072 E0                 3656 	movx	a,@dptr
   A073 20 E0 03           3657 	jb	acc.0,00188$
   A076 02 A2 07           3658 	ljmp	00150$
   A079                    3659 00188$:
                           3660 ;	../../shared/src/dcc_cal.c:395: if( lnx_CAL_DONE_LANE == 1 && time_out_cnt > 1) break;                   //continious mode, has ran 1 round
   A079 90 60 03           3661 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   A07C E0                 3662 	movx	a,@dptr
   A07D 54 01              3663 	anl	a,#0x01
   A07F FA                 3664 	mov	r2,a
   A080 BA 01 0D           3665 	cjne	r2,#0x01,00116$
   A083 E5 18              3666 	mov	a,_bp
   A085 24 04              3667 	add	a,#0x04
   A087 F8                 3668 	mov	r0,a
   A088 E6                 3669 	mov	a,@r0
   A089 24 FE              3670 	add	a,#0xff - 0x01
   A08B 50 03              3671 	jnc	00191$
   A08D 02 A2 07           3672 	ljmp	00150$
   A090                    3673 00191$:
   A090                    3674 00116$:
                           3675 ;	../../shared/src/dcc_cal.c:396: if( lnx_CAL_DONE_LANE == 0 && is_toggle_pat( dir, time_out_cnt - 1 ))  { lnx_RXDCC_DLL_CAL_PASS_LANE = 1;  break; }     //power-on, toggled
   A090 90 60 03           3676 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   A093 E0                 3677 	movx	a,@dptr
   A094 20 E0 32           3678 	jb	acc.0,00119$
   A097 E5 18              3679 	mov	a,_bp
   A099 24 04              3680 	add	a,#0x04
   A09B F8                 3681 	mov	r0,a
   A09C E6                 3682 	mov	a,@r0
   A09D 14                 3683 	dec	a
   A09E FA                 3684 	mov	r2,a
   A09F C0 06              3685 	push	ar6
   A0A1 C0 07              3686 	push	ar7
   A0A3 C0 02              3687 	push	ar2
   A0A5 E5 18              3688 	mov	a,_bp
   A0A7 24 03              3689 	add	a,#0x03
   A0A9 F8                 3690 	mov	r0,a
   A0AA 86 82              3691 	mov	dpl,@r0
   A0AC 78 CD              3692 	mov	r0,#_is_toggle_pat
   A0AE 79 BD              3693 	mov	r1,#(_is_toggle_pat >> 8)
   A0B0 7A 02              3694 	mov	r2,#(_is_toggle_pat >> 16)
   A0B2 12 00 B3           3695 	lcall	__sdcc_banked_call
   A0B5 15 81              3696 	dec	sp
   A0B7 D0 07              3697 	pop	ar7
   A0B9 D0 06              3698 	pop	ar6
   A0BB 92 28              3699 	mov	b0,c
   A0BD 50 0A              3700 	jnc	00119$
   A0BF 90 60 04           3701 	mov	dptr,#_CAL_CTRL2_LANE
   A0C2 E0                 3702 	movx	a,@dptr
   A0C3 44 40              3703 	orl	a,#0x40
   A0C5 F0                 3704 	movx	@dptr,a
   A0C6 02 A2 07           3705 	ljmp	00150$
   A0C9                    3706 00119$:
                           3707 ;	../../shared/src/dcc_cal.c:397: if( lnx_CAL_DONE_LANE == 0 && time_out_cnt >= RXDCC_DLL_LOOP_MAX && cmx_RXDCC_DLL_CAL_TIMEOUT_DIS == 0) break; //power-on, reached maximum rounds
   A0C9 90 60 03           3708 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   A0CC E0                 3709 	movx	a,@dptr
   A0CD 20 E0 14           3710 	jb	acc.0,00122$
   A0D0 E5 18              3711 	mov	a,_bp
   A0D2 24 04              3712 	add	a,#0x04
   A0D4 F8                 3713 	mov	r0,a
   A0D5 B6 40 00           3714 	cjne	@r0,#0x40,00195$
   A0D8                    3715 00195$:
   A0D8 40 0A              3716 	jc	00122$
   A0DA 90 E6 48           3717 	mov	dptr,#_CAL_TIME_OUT_AND_DIS
   A0DD E0                 3718 	movx	a,@dptr
   A0DE 20 E2 03           3719 	jb	acc.2,00197$
   A0E1 02 A2 07           3720 	ljmp	00150$
   A0E4                    3721 00197$:
   A0E4                    3722 00122$:
                           3723 ;	../../shared/src/dcc_cal.c:399: latched_RXDCC_DN = TXDCC_DN;   //RXDCC shares TXDCC up/dn
   A0E4 90 20 40           3724 	mov	dptr,#_TX_CALIBRATION_LANE
   A0E7 E0                 3725 	movx	a,@dptr
   A0E8 54 01              3726 	anl	a,#0x01
   A0EA FA                 3727 	mov	r2,a
                           3728 ;	../../shared/src/dcc_cal.c:400: int_up = 0;
   A0EB A8 18              3729 	mov	r0,_bp
   A0ED 08                 3730 	inc	r0
   A0EE 08                 3731 	inc	r0
   A0EF 76 00              3732 	mov	@r0,#0x00
                           3733 ;	../../shared/src/dcc_cal.c:401: int_dn = 0; 
   A0F1 A8 18              3734 	mov	r0,_bp
   A0F3 08                 3735 	inc	r0
   A0F4 76 00              3736 	mov	@r0,#0x00
                           3737 ;	../../shared/src/dcc_cal.c:403: if (in_cont_mode) { //continious calibration
   A0F6 E5 18              3738 	mov	a,_bp
   A0F8 24 05              3739 	add	a,#0x05
   A0FA F8                 3740 	mov	r0,a
   A0FB E6                 3741 	mov	a,@r0
   A0FC 60 6C              3742 	jz	00137$
                           3743 ;	../../shared/src/dcc_cal.c:404: if (latched_RXDCC_DN) {rxdcc_dll_step_cnt--;}
   A0FE EA                 3744 	mov	a,r2
   A0FF 60 0B              3745 	jz	00126$
   A101 90 66 0A           3746 	mov	dptr,#_rxdcc_dll_step_cnt
   A104 E0                 3747 	movx	a,@dptr
   A105 14                 3748 	dec	a
   A106 90 66 0A           3749 	mov	dptr,#_rxdcc_dll_step_cnt
   A109 F0                 3750 	movx	@dptr,a
   A10A 80 07              3751 	sjmp	00127$
   A10C                    3752 00126$:
                           3753 ;	../../shared/src/dcc_cal.c:405: else                  {rxdcc_dll_step_cnt++;}
   A10C 90 66 0A           3754 	mov	dptr,#_rxdcc_dll_step_cnt
   A10F E0                 3755 	movx	a,@dptr
   A110 24 01              3756 	add	a,#0x01
   A112 F0                 3757 	movx	@dptr,a
   A113                    3758 00127$:
                           3759 ;	../../shared/src/dcc_cal.c:407: if( rxdcc_dll_step_cnt == 0) {
   A113 90 66 0A           3760 	mov	dptr,#_rxdcc_dll_step_cnt
   A116 E0                 3761 	movx	a,@dptr
   A117 FB                 3762 	mov	r3,a
   A118 70 19              3763 	jnz	00131$
                           3764 ;	../../shared/src/dcc_cal.c:408: int_up = 0;
   A11A C0 06              3765 	push	ar6
   A11C A8 18              3766 	mov	r0,_bp
   A11E 08                 3767 	inc	r0
   A11F 08                 3768 	inc	r0
   A120 76 00              3769 	mov	@r0,#0x00
                           3770 ;	../../shared/src/dcc_cal.c:409: int_dn = 1; 
   A122 A8 18              3771 	mov	r0,_bp
   A124 08                 3772 	inc	r0
   A125 76 01              3773 	mov	@r0,#0x01
                           3774 ;	../../shared/src/dcc_cal.c:410: rxdcc_dll_step_cnt = RXDCC_DLL_CAL_STEP_SIZE;  //after up/dn triggered, reset fraction code to middle
   A127 90 E6 47           3775 	mov	dptr,#(_CON_CAL_STEP_SIZE5 + 0x0003)
   A12A E0                 3776 	movx	a,@dptr
   A12B 90 66 0A           3777 	mov	dptr,#_rxdcc_dll_step_cnt
   A12E F0                 3778 	movx	@dptr,a
   A12F D0 06              3779 	pop	ar6
   A131 80 52              3780 	sjmp	00138$
   A133                    3781 00131$:
                           3782 ;	../../shared/src/dcc_cal.c:412: else if(rxdcc_dll_step_cnt>=(RXDCC_DLL_CAL_STEP_SIZE<<1)) {
   A133 C0 06              3783 	push	ar6
   A135 90 E6 47           3784 	mov	dptr,#(_CON_CAL_STEP_SIZE5 + 0x0003)
   A138 E0                 3785 	movx	a,@dptr
   A139 FE                 3786 	mov	r6,a
   A13A E4                 3787 	clr	a
   A13B CE                 3788 	xch	a,r6
   A13C 25 E0              3789 	add	a,acc
   A13E CE                 3790 	xch	a,r6
   A13F 33                 3791 	rlc	a
   A140 FD                 3792 	mov	r5,a
   A141 7C 00              3793 	mov	r4,#0x00
   A143 C3                 3794 	clr	c
   A144 EB                 3795 	mov	a,r3
   A145 9E                 3796 	subb	a,r6
   A146 EC                 3797 	mov	a,r4
   A147 64 80              3798 	xrl	a,#0x80
   A149 8D F0              3799 	mov	b,r5
   A14B 63 F0 80           3800 	xrl	b,#0x80
   A14E 95 F0              3801 	subb	a,b
   A150 D0 06              3802 	pop	ar6
   A152 40 31              3803 	jc	00138$
                           3804 ;	../../shared/src/dcc_cal.c:413: int_up = 1;
   A154 A8 18              3805 	mov	r0,_bp
   A156 08                 3806 	inc	r0
   A157 08                 3807 	inc	r0
   A158 76 01              3808 	mov	@r0,#0x01
                           3809 ;	../../shared/src/dcc_cal.c:414: int_dn = 0; 
   A15A A8 18              3810 	mov	r0,_bp
   A15C 08                 3811 	inc	r0
   A15D 76 00              3812 	mov	@r0,#0x00
                           3813 ;	../../shared/src/dcc_cal.c:415: rxdcc_dll_step_cnt = RXDCC_DLL_CAL_STEP_SIZE;  //after up/dn triggered, reset fraction code to middle
   A15F 90 E6 47           3814 	mov	dptr,#(_CON_CAL_STEP_SIZE5 + 0x0003)
   A162 E0                 3815 	movx	a,@dptr
   A163 FB                 3816 	mov	r3,a
   A164 90 66 0A           3817 	mov	dptr,#_rxdcc_dll_step_cnt
   A167 F0                 3818 	movx	@dptr,a
   A168 80 1B              3819 	sjmp	00138$
   A16A                    3820 00137$:
                           3821 ;	../../shared/src/dcc_cal.c:419: if (latched_RXDCC_DN) {int_up = 0; int_dn = 1;}
   A16A EA                 3822 	mov	a,r2
   A16B 60 0D              3823 	jz	00134$
   A16D A8 18              3824 	mov	r0,_bp
   A16F 08                 3825 	inc	r0
   A170 08                 3826 	inc	r0
   A171 76 00              3827 	mov	@r0,#0x00
   A173 A8 18              3828 	mov	r0,_bp
   A175 08                 3829 	inc	r0
   A176 76 01              3830 	mov	@r0,#0x01
   A178 80 0B              3831 	sjmp	00138$
   A17A                    3832 00134$:
                           3833 ;	../../shared/src/dcc_cal.c:420: else                  {int_up = 1; int_dn = 0;}
   A17A A8 18              3834 	mov	r0,_bp
   A17C 08                 3835 	inc	r0
   A17D 08                 3836 	inc	r0
   A17E 76 01              3837 	mov	@r0,#0x01
   A180 A8 18              3838 	mov	r0,_bp
   A182 08                 3839 	inc	r0
   A183 76 00              3840 	mov	@r0,#0x00
   A185                    3841 00138$:
                           3842 ;	../../shared/src/dcc_cal.c:423: if (int_dn == 1) {
   A185 A8 18              3843 	mov	r0,_bp
   A187 08                 3844 	inc	r0
   A188 B6 01 15           3845 	cjne	@r0,#0x01,00142$
                           3846 ;	../../shared/src/dcc_cal.c:424: dcc_cnt = sign_abs_dn(dcc_cnt);
   A18B 8F 82              3847 	mov	dpl,r7
   A18D C0 06              3848 	push	ar6
   A18F 78 55              3849 	mov	r0,#_sign_abs_dn
   A191 79 BD              3850 	mov	r1,#(_sign_abs_dn >> 8)
   A193 7A 02              3851 	mov	r2,#(_sign_abs_dn >> 16)
   A195 12 00 B3           3852 	lcall	__sdcc_banked_call
   A198 AA 82              3853 	mov	r2,dpl
   A19A D0 06              3854 	pop	ar6
   A19C 8A 07              3855 	mov	ar7,r2
   A19E 80 23              3856 	sjmp	00143$
   A1A0                    3857 00142$:
                           3858 ;	../../shared/src/dcc_cal.c:426: else if (int_up == 1) {
   A1A0 A8 18              3859 	mov	r0,_bp
   A1A2 08                 3860 	inc	r0
   A1A3 08                 3861 	inc	r0
   A1A4 B6 01 1C           3862 	cjne	@r0,#0x01,00143$
                           3863 ;	../../shared/src/dcc_cal.c:427: dir |= 1;
   A1A7 E5 18              3864 	mov	a,_bp
   A1A9 24 03              3865 	add	a,#0x03
   A1AB F8                 3866 	mov	r0,a
   A1AC E6                 3867 	mov	a,@r0
   A1AD 44 01              3868 	orl	a,#0x01
   A1AF F6                 3869 	mov	@r0,a
                           3870 ;	../../shared/src/dcc_cal.c:428: dcc_cnt = sign_abs_up(dcc_cnt);      
   A1B0 8F 82              3871 	mov	dpl,r7
   A1B2 C0 06              3872 	push	ar6
   A1B4 78 33              3873 	mov	r0,#_sign_abs_up
   A1B6 79 BD              3874 	mov	r1,#(_sign_abs_up >> 8)
   A1B8 7A 02              3875 	mov	r2,#(_sign_abs_up >> 16)
   A1BA 12 00 B3           3876 	lcall	__sdcc_banked_call
   A1BD AA 82              3877 	mov	r2,dpl
   A1BF D0 06              3878 	pop	ar6
   A1C1 8A 07              3879 	mov	ar7,r2
   A1C3                    3880 00143$:
                           3881 ;	../../shared/src/dcc_cal.c:430: dir<<=1;
   A1C3 E5 18              3882 	mov	a,_bp
   A1C5 24 03              3883 	add	a,#0x03
   A1C7 F8                 3884 	mov	r0,a
   A1C8 E6                 3885 	mov	a,@r0
   A1C9 25 E0              3886 	add	a,acc
   A1CB F6                 3887 	mov	@r0,a
                           3888 ;	../../shared/src/dcc_cal.c:431: dir = dir & 0x3f;
   A1CC E5 18              3889 	mov	a,_bp
   A1CE 24 03              3890 	add	a,#0x03
   A1D0 F8                 3891 	mov	r0,a
   A1D1 E6                 3892 	mov	a,@r0
   A1D2 54 3F              3893 	anl	a,#0x3F
   A1D4 F6                 3894 	mov	@r0,a
                           3895 ;	../../shared/src/dcc_cal.c:436: if (in_power_on && ((dcc_cnt & 0x1f) == 24) && (hg_set == 0)){
   A1D5 E5 18              3896 	mov	a,_bp
   A1D7 24 06              3897 	add	a,#0x06
   A1D9 F8                 3898 	mov	r0,a
   A1DA E6                 3899 	mov	a,@r0
   A1DB 70 03              3900 	jnz	00207$
   A1DD 02 A0 45           3901 	ljmp	00148$
   A1E0                    3902 00207$:
   A1E0 74 1F              3903 	mov	a,#0x1F
   A1E2 5F                 3904 	anl	a,r7
   A1E3 FA                 3905 	mov	r2,a
   A1E4 BA 18 02           3906 	cjne	r2,#0x18,00208$
   A1E7 80 03              3907 	sjmp	00209$
   A1E9                    3908 00208$:
   A1E9 02 A0 45           3909 	ljmp	00148$
   A1EC                    3910 00209$:
   A1EC EE                 3911 	mov	a,r6
   A1ED 60 03              3912 	jz	00210$
   A1EF 02 A0 45           3913 	ljmp	00148$
   A1F2                    3914 00210$:
                           3915 ;	../../shared/src/dcc_cal.c:437: reg_RXDCC_HG_DLLCLK_LANE = 1;
   A1F2 90 02 1C           3916 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_135
   A1F5 E0                 3917 	movx	a,@dptr
   A1F6 44 02              3918 	orl	a,#0x02
   A1F8 F0                 3919 	movx	@dptr,a
                           3920 ;	../../shared/src/dcc_cal.c:438: hg_set = 1;
   A1F9 7E 01              3921 	mov	r6,#0x01
                           3922 ;	../../shared/src/dcc_cal.c:439: dcc_cnt = 0x20;
   A1FB 7F 20              3923 	mov	r7,#0x20
                           3924 ;	../../shared/src/dcc_cal.c:440: time_out_cnt = 0;
   A1FD E5 18              3925 	mov	a,_bp
   A1FF 24 04              3926 	add	a,#0x04
   A201 F8                 3927 	mov	r0,a
   A202 76 00              3928 	mov	@r0,#0x00
                           3929 ;	../../shared/src/dcc_cal.c:443: } while (1); 
   A204 02 A0 45           3930 	ljmp	00148$
   A207                    3931 00150$:
                           3932 ;	../../shared/src/dcc_cal.c:446: if (lnx_CAL_DONE_LANE == 0) {                            //if power-on calibration
   A207 90 60 03           3933 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   A20A E0                 3934 	movx	a,@dptr
   A20B 20 E0 2B           3935 	jb	acc.0,00152$
                           3936 ;	../../shared/src/dcc_cal.c:447: lnx_cal_rxdcc_dll[PWR][rx_pll_rate] = dcc_cnt;       //save to power-on result
   A20E A2 0E              3937 	mov	c,_rx_pll_rate
   A210 E4                 3938 	clr	a
   A211 33                 3939 	rlc	a
   A212 24 E0              3940 	add	a,#_lnx_cal_rxdcc_dll
   A214 F5 82              3941 	mov	dpl,a
   A216 E4                 3942 	clr	a
   A217 34 65              3943 	addc	a,#(_lnx_cal_rxdcc_dll >> 8)
   A219 F5 83              3944 	mov	dph,a
   A21B EF                 3945 	mov	a,r7
   A21C F0                 3946 	movx	@dptr,a
                           3947 ;	../../shared/src/dcc_cal.c:448: lnx_cal_rxdcc_dll_hg[rx_pll_rate] = (reg_RXDCC_HG_DLLCLK_LANE & 0x01) | 0x00; //save the HG setting for current rate, will be loaded by continious mode
   A21D A2 0E              3948 	mov	c,_rx_pll_rate
   A21F E4                 3949 	clr	a
   A220 33                 3950 	rlc	a
   A221 24 E4              3951 	add	a,#_lnx_cal_rxdcc_dll_hg
   A223 FA                 3952 	mov	r2,a
   A224 E4                 3953 	clr	a
   A225 34 65              3954 	addc	a,#(_lnx_cal_rxdcc_dll_hg >> 8)
   A227 FB                 3955 	mov	r3,a
   A228 90 02 1C           3956 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_135
   A22B E0                 3957 	movx	a,@dptr
   A22C 03                 3958 	rr	a
   A22D 54 01              3959 	anl	a,#0x01
   A22F FC                 3960 	mov	r4,a
   A230 53 04 01           3961 	anl	ar4,#0x01
   A233 8A 82              3962 	mov	dpl,r2
   A235 8B 83              3963 	mov	dph,r3
   A237 EC                 3964 	mov	a,r4
   A238 F0                 3965 	movx	@dptr,a
   A239                    3966 00152$:
                           3967 ;	../../shared/src/dcc_cal.c:450: lnx_cal_rxdcc_dll[CONT][rx_pll_rate] = dcc_cnt;     //no matter power-on or LOAD or continious, need to save to [CONT]
   A239 A2 0E              3968 	mov	c,_rx_pll_rate
   A23B E4                 3969 	clr	a
   A23C 33                 3970 	rlc	a
   A23D FA                 3971 	mov	r2,a
   A23E 24 E2              3972 	add	a,#(_lnx_cal_rxdcc_dll + 0x0002)
   A240 F5 82              3973 	mov	dpl,a
   A242 E4                 3974 	clr	a
   A243 34 65              3975 	addc	a,#((_lnx_cal_rxdcc_dll + 0x0002) >> 8)
   A245 F5 83              3976 	mov	dph,a
   A247 EF                 3977 	mov	a,r7
   A248 F0                 3978 	movx	@dptr,a
                           3979 ;	../../shared/src/dcc_cal.c:452: RXDCC_CAL_EN = 0;
   A249 90 00 40           3980 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_16
   A24C E0                 3981 	movx	a,@dptr
   A24D 54 FE              3982 	anl	a,#0xfe
   A24F F0                 3983 	movx	@dptr,a
                           3984 ;	../../shared/src/dcc_cal.c:453: lnx_RXDCC_DLL_CAL_DONE_LANE = 1;
   A250 90 60 00           3985 	mov	dptr,#_CAL_CTRL1_LANE
   A253 E0                 3986 	movx	a,@dptr
   A254 44 40              3987 	orl	a,#0x40
   A256 F0                 3988 	movx	@dptr,a
   A257                    3989 00153$:
   A257 85 18 81           3990 	mov	sp,_bp
   A25A D0 18              3991 	pop	_bp
   A25C 02 00 C5           3992 	ljmp	__sdcc_banked_ret
                           3993 ;------------------------------------------------------------
                           3994 ;Allocation info for local variables in function 'rxdcc_data_cal'
                           3995 ;------------------------------------------------------------
                           3996 ;dcc_cnt                   Allocated to registers r7 
                           3997 ;latched_RXDCC_DN          Allocated to registers r2 
                           3998 ;int_dn                    Allocated to stack - offset 1
                           3999 ;int_up                    Allocated to stack - offset 2
                           4000 ;dir                       Allocated to stack - offset 3
                           4001 ;gen                       Allocated to stack - offset 4
                           4002 ;time_out_cnt              Allocated to registers r4 
                           4003 ;in_power_on               Allocated to registers r3 
                           4004 ;in_cont_mode              Allocated to stack - offset 5
                           4005 ;ext_en                    Allocated to registers r7 
                           4006 ;hg_set                    Allocated to stack - offset 6
                           4007 ;------------------------------------------------------------
                           4008 ;	../../shared/src/dcc_cal.c:459: void rxdcc_data_cal(void) BANKING_CTRL {
                           4009 ;	-----------------------------------------
                           4010 ;	 function rxdcc_data_cal
                           4011 ;	-----------------------------------------
   A25F                    4012 _rxdcc_data_cal:
   A25F C0 18              4013 	push	_bp
   A261 E5 81              4014 	mov	a,sp
   A263 F5 18              4015 	mov	_bp,a
   A265 24 06              4016 	add	a,#0x06
   A267 F5 81              4017 	mov	sp,a
                           4018 ;	../../shared/src/dcc_cal.c:471: PHY_STATUS = ST_RXDCC_DATA_CAL;
   A269 90 22 30           4019 	mov	dptr,#_MCU_STATUS0_LANE
   A26C 74 0E              4020 	mov	a,#0x0E
   A26E F0                 4021 	movx	@dptr,a
                           4022 ;	../../shared/src/dcc_cal.c:473: lnx_RXDCC_DATA_CAL_DONE_LANE = 0;
   A26F 90 60 00           4023 	mov	dptr,#_CAL_CTRL1_LANE
   A272 E0                 4024 	movx	a,@dptr
   A273 54 7F              4025 	anl	a,#0x7f
   A275 F0                 4026 	movx	@dptr,a
                           4027 ;	../../shared/src/dcc_cal.c:475: in_cont_mode = 0;
   A276 E5 18              4028 	mov	a,_bp
   A278 24 05              4029 	add	a,#0x05
   A27A F8                 4030 	mov	r0,a
                           4031 ;	../../shared/src/dcc_cal.c:476: in_power_on = 0;
                           4032 ;	../../shared/src/dcc_cal.c:477: time_out_cnt = 0;
                           4033 ;	../../shared/src/dcc_cal.c:478: dir = 0;
   A27B E4                 4034 	clr	a
   A27C F6                 4035 	mov	@r0,a
   A27D FB                 4036 	mov	r3,a
   A27E FC                 4037 	mov	r4,a
   A27F E5 18              4038 	mov	a,_bp
   A281 24 03              4039 	add	a,#0x03
   A283 F8                 4040 	mov	r0,a
   A284 76 00              4041 	mov	@r0,#0x00
                           4042 ;	../../shared/src/dcc_cal.c:479: gen = gen_rx;
   A286 90 66 16           4043 	mov	dptr,#_gen_rx
   A289 E0                 4044 	movx	a,@dptr
   A28A FE                 4045 	mov	r6,a
   A28B E5 18              4046 	mov	a,_bp
   A28D 24 04              4047 	add	a,#0x04
   A28F F8                 4048 	mov	r0,a
   A290 A6 06              4049 	mov	@r0,ar6
                           4050 ;	../../shared/src/dcc_cal.c:480: if(phy_mode == SERDES) gen = 0;
   A292 90 A3 16           4051 	mov	dptr,#(_SYSTEM + 0x0002)
   A295 E0                 4052 	movx	a,@dptr
   A296 54 07              4053 	anl	a,#0x07
   A298 FF                 4054 	mov	r7,a
   A299 BF 04 07           4055 	cjne	r7,#0x04,00102$
   A29C E5 18              4056 	mov	a,_bp
   A29E 24 04              4057 	add	a,#0x04
   A2A0 F8                 4058 	mov	r0,a
   A2A1 76 00              4059 	mov	@r0,#0x00
   A2A3                    4060 00102$:
                           4061 ;	../../shared/src/dcc_cal.c:483: if (lnx_CAL_DONE_LANE == 0) {                        //power-on calibration
   A2A3 90 60 03           4062 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   A2A6 E0                 4063 	movx	a,@dptr
   A2A7 30 E0 03           4064 	jnb	acc.0,00193$
   A2AA 02 A3 2B           4065 	ljmp	00114$
   A2AD                    4066 00193$:
                           4067 ;	../../shared/src/dcc_cal.c:484: ext_en = cmx_EXT_FORCE_CAL_DONE || cmx_RXDCC_DATA_CAL_EXT_EN;
   A2AD 90 E6 06           4068 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0002)
   A2B0 E0                 4069 	movx	a,@dptr
   A2B1 20 E1 0B           4070 	jb	acc.1,00162$
   A2B4 90 E6 0A           4071 	mov	dptr,#(_CONTROL_CONFIG1 + 0x0002)
   A2B7 E0                 4072 	movx	a,@dptr
   A2B8 20 E0 04           4073 	jb	acc.0,00162$
   A2BB 7F 00              4074 	mov	r7,#0x00
   A2BD 80 02              4075 	sjmp	00163$
   A2BF                    4076 00162$:
   A2BF 7F 01              4077 	mov	r7,#0x01
   A2C1                    4078 00163$:
                           4079 ;	../../shared/src/dcc_cal.c:485: if (ext_en) {                                     //use ext value for power-on, bypass calibration
   A2C1 EF                 4080 	mov	a,r7
   A2C2 60 2F              4081 	jz	00104$
                           4082 ;	../../shared/src/dcc_cal.c:486: dcc_cnt = lnx_cal_rxdcc_data[PWR][gen];
   A2C4 C0 03              4083 	push	ar3
   A2C6 E5 18              4084 	mov	a,_bp
   A2C8 24 04              4085 	add	a,#0x04
   A2CA F8                 4086 	mov	r0,a
   A2CB E6                 4087 	mov	a,@r0
   A2CC 24 E6              4088 	add	a,#_lnx_cal_rxdcc_data
   A2CE F5 82              4089 	mov	dpl,a
   A2D0 E4                 4090 	clr	a
   A2D1 34 65              4091 	addc	a,#(_lnx_cal_rxdcc_data >> 8)
   A2D3 F5 83              4092 	mov	dph,a
   A2D5 E0                 4093 	movx	a,@dptr
   A2D6 FF                 4094 	mov	r7,a
                           4095 ;	../../shared/src/dcc_cal.c:487: RXDCC_HG_DATACLK = lnx_cal_rxdcc_data_hg[gen];          //load the HG setting.
   A2D7 E5 18              4096 	mov	a,_bp
   A2D9 24 04              4097 	add	a,#0x04
   A2DB F8                 4098 	mov	r0,a
   A2DC E6                 4099 	mov	a,@r0
   A2DD 24 F0              4100 	add	a,#_lnx_cal_rxdcc_data_hg
   A2DF F5 82              4101 	mov	dpl,a
   A2E1 E4                 4102 	clr	a
   A2E2 34 65              4103 	addc	a,#(_lnx_cal_rxdcc_data_hg >> 8)
   A2E4 F5 83              4104 	mov	dph,a
   A2E6 E0                 4105 	movx	a,@dptr
   A2E7 90 02 20           4106 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   A2EA 13                 4107 	rrc	a
   A2EB E0                 4108 	movx	a,@dptr
   A2EC 92 E1              4109 	mov	acc.1,c
   A2EE F0                 4110 	movx	@dptr,a
   A2EF D0 03              4111 	pop	ar3
   A2F1 80 22              4112 	sjmp	00105$
   A2F3                    4113 00104$:
                           4114 ;	../../shared/src/dcc_cal.c:490: lnx_RXDCC_DATA_CAL_PASS_LANE = 0;
   A2F3 90 60 04           4115 	mov	dptr,#_CAL_CTRL2_LANE
   A2F6 E0                 4116 	movx	a,@dptr
   A2F7 54 7F              4117 	anl	a,#0x7f
   A2F9 F0                 4118 	movx	@dptr,a
                           4119 ;	../../shared/src/dcc_cal.c:491: RXDCC_CAL_EN = 1;
   A2FA 90 00 40           4120 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_16
   A2FD E0                 4121 	movx	a,@dptr
   A2FE 44 01              4122 	orl	a,#0x01
   A300 F0                 4123 	movx	@dptr,a
                           4124 ;	../../shared/src/dcc_cal.c:492: TRXDCCIN_SEL = 1;
   A301 90 00 44           4125 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_17
   A304 E0                 4126 	movx	a,@dptr
   A305 54 1F              4127 	anl	a,#0x1f
   A307 44 20              4128 	orl	a,#0x20
   A309 F0                 4129 	movx	@dptr,a
                           4130 ;	../../shared/src/dcc_cal.c:493: RXDCC_HG_DATACLK = 0;
   A30A 90 02 20           4131 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   A30D E0                 4132 	movx	a,@dptr
   A30E 54 FD              4133 	anl	a,#0xfd
   A310 F0                 4134 	movx	@dptr,a
                           4135 ;	../../shared/src/dcc_cal.c:494: dcc_cnt = 0x20;
   A311 7F 20              4136 	mov	r7,#0x20
                           4137 ;	../../shared/src/dcc_cal.c:495: in_power_on = 1;
   A313 7B 01              4138 	mov	r3,#0x01
   A315                    4139 00105$:
                           4140 ;	../../shared/src/dcc_cal.c:497: RXDCC_EN_DATACLK = 1;                           //enable RXDCC_EN during power-on, never deassert
   A315 C0 03              4141 	push	ar3
   A317 90 02 1C           4142 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_135
   A31A E0                 4143 	movx	a,@dptr
   A31B 44 01              4144 	orl	a,#0x01
   A31D F0                 4145 	movx	@dptr,a
                           4146 ;	../../shared/src/dcc_cal.c:498: rxdcc_data_step_cnt = RXDCC_DATA_CAL_STEP_SIZE;      //for power-on (inc. EXT_EN), reset fraction code to middle
   A31E 90 E6 39           4147 	mov	dptr,#(_CON_CAL_STEP_SIZE2 + 0x0001)
   A321 E0                 4148 	movx	a,@dptr
   A322 90 66 09           4149 	mov	dptr,#_rxdcc_data_step_cnt
   A325 F0                 4150 	movx	@dptr,a
   A326 D0 03              4151 	pop	ar3
   A328 02 A3 DD           4152 	ljmp	00115$
   A32B                    4153 00114$:
                           4154 ;	../../shared/src/dcc_cal.c:500: else if (LOAD_CAL_ON) {                         //not power-on. Speed-change, load result for current rate
   A32B 90 60 08           4155 	mov	dptr,#_CAL_CTRL3_LANE
   A32E E0                 4156 	movx	a,@dptr
   A32F 60 48              4157 	jz	00111$
                           4158 ;	../../shared/src/dcc_cal.c:502: dcc_cnt = lnx_cal_rxdcc_data[PWR + cmx_RXDCC_DATA_CAL_CONT_CUR_LOAD_EN][gen];
   A331 C0 03              4159 	push	ar3
   A333 90 E6 33           4160 	mov	dptr,#(_CONTROL_CONFIG9 + 0x0003)
   A336 E0                 4161 	movx	a,@dptr
   A337 03                 4162 	rr	a
   A338 54 01              4163 	anl	a,#0x01
   A33A 75 F0 05           4164 	mov	b,#0x05
   A33D A4                 4165 	mul	ab
   A33E 24 E6              4166 	add	a,#_lnx_cal_rxdcc_data
   A340 FB                 4167 	mov	r3,a
   A341 E4                 4168 	clr	a
   A342 34 65              4169 	addc	a,#(_lnx_cal_rxdcc_data >> 8)
   A344 FA                 4170 	mov	r2,a
   A345 E5 18              4171 	mov	a,_bp
   A347 24 04              4172 	add	a,#0x04
   A349 F8                 4173 	mov	r0,a
   A34A E6                 4174 	mov	a,@r0
   A34B 2B                 4175 	add	a,r3
   A34C F5 82              4176 	mov	dpl,a
   A34E E4                 4177 	clr	a
   A34F 3A                 4178 	addc	a,r2
   A350 F5 83              4179 	mov	dph,a
   A352 E0                 4180 	movx	a,@dptr
   A353 FF                 4181 	mov	r7,a
                           4182 ;	../../shared/src/dcc_cal.c:503: rxdcc_data_step_cnt = RXDCC_DATA_CAL_STEP_SIZE;     //when speed change, restore the fracition code to middle
   A354 90 E6 39           4183 	mov	dptr,#(_CON_CAL_STEP_SIZE2 + 0x0001)
   A357 E0                 4184 	movx	a,@dptr
   A358 90 66 09           4185 	mov	dptr,#_rxdcc_data_step_cnt
   A35B F0                 4186 	movx	@dptr,a
                           4187 ;	../../shared/src/dcc_cal.c:504: RXDCC_HG_DATACLK = lnx_cal_rxdcc_data_hg[gen];          //load the HG setting.
   A35C E5 18              4188 	mov	a,_bp
   A35E 24 04              4189 	add	a,#0x04
   A360 F8                 4190 	mov	r0,a
   A361 E6                 4191 	mov	a,@r0
   A362 24 F0              4192 	add	a,#_lnx_cal_rxdcc_data_hg
   A364 F5 82              4193 	mov	dpl,a
   A366 E4                 4194 	clr	a
   A367 34 65              4195 	addc	a,#(_lnx_cal_rxdcc_data_hg >> 8)
   A369 F5 83              4196 	mov	dph,a
   A36B E0                 4197 	movx	a,@dptr
   A36C FA                 4198 	mov	r2,a
   A36D 90 02 20           4199 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   A370 13                 4200 	rrc	a
   A371 E0                 4201 	movx	a,@dptr
   A372 92 E1              4202 	mov	acc.1,c
   A374 F0                 4203 	movx	@dptr,a
   A375 D0 03              4204 	pop	ar3
   A377 80 64              4205 	sjmp	00115$
   A379                    4206 00111$:
                           4207 ;	../../shared/src/dcc_cal.c:506: else if (cmx_RXDCC_DATA_CAL_CONT_EN && RX_SPEED_DIV < 4 ) {  //not power-on. Continious mode, only performed when SPEED_DIV = 0
   A379 90 E6 0F           4208 	mov	dptr,#(_CONTROL_CONFIG2 + 0x0003)
   A37C E0                 4209 	movx	a,@dptr
   A37D 30 E1 53           4210 	jnb	acc.1,00107$
   A380 90 02 28           4211 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_138
   A383 E0                 4212 	movx	a,@dptr
   A384 03                 4213 	rr	a
   A385 03                 4214 	rr	a
   A386 54 07              4215 	anl	a,#0x07
   A388 FA                 4216 	mov	r2,a
   A389 C3                 4217 	clr	c
   A38A 64 80              4218 	xrl	a,#0x80
   A38C 94 84              4219 	subb	a,#0x84
   A38E 50 43              4220 	jnc	00107$
                           4221 ;	../../shared/src/dcc_cal.c:507: RXDCC_CAL_EN = 1;
   A390 90 00 40           4222 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_16
   A393 E0                 4223 	movx	a,@dptr
   A394 44 01              4224 	orl	a,#0x01
   A396 F0                 4225 	movx	@dptr,a
                           4226 ;	../../shared/src/dcc_cal.c:508: TRXDCCIN_SEL = 1;
   A397 90 00 44           4227 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_17
   A39A E0                 4228 	movx	a,@dptr
   A39B 54 1F              4229 	anl	a,#0x1f
   A39D 44 20              4230 	orl	a,#0x20
   A39F F0                 4231 	movx	@dptr,a
                           4232 ;	../../shared/src/dcc_cal.c:509: dcc_cnt = lnx_cal_rxdcc_data[CONT][gen];    //always load cont result
   A3A0 E5 18              4233 	mov	a,_bp
   A3A2 24 04              4234 	add	a,#0x04
   A3A4 F8                 4235 	mov	r0,a
   A3A5 E6                 4236 	mov	a,@r0
   A3A6 24 EB              4237 	add	a,#(_lnx_cal_rxdcc_data + 0x0005)
   A3A8 F5 82              4238 	mov	dpl,a
   A3AA E4                 4239 	clr	a
   A3AB 34 65              4240 	addc	a,#((_lnx_cal_rxdcc_data + 0x0005) >> 8)
   A3AD F5 83              4241 	mov	dph,a
   A3AF E0                 4242 	movx	a,@dptr
   A3B0 FF                 4243 	mov	r7,a
                           4244 ;	../../shared/src/dcc_cal.c:510: RXDCC_HG_DATACLK = lnx_cal_rxdcc_data_hg[gen];          //load the HG setting.
   A3B1 E5 18              4245 	mov	a,_bp
   A3B3 24 04              4246 	add	a,#0x04
   A3B5 F8                 4247 	mov	r0,a
   A3B6 E6                 4248 	mov	a,@r0
   A3B7 24 F0              4249 	add	a,#_lnx_cal_rxdcc_data_hg
   A3B9 F5 82              4250 	mov	dpl,a
   A3BB E4                 4251 	clr	a
   A3BC 34 65              4252 	addc	a,#(_lnx_cal_rxdcc_data_hg >> 8)
   A3BE F5 83              4253 	mov	dph,a
   A3C0 E0                 4254 	movx	a,@dptr
   A3C1 FA                 4255 	mov	r2,a
   A3C2 90 02 20           4256 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   A3C5 13                 4257 	rrc	a
   A3C6 E0                 4258 	movx	a,@dptr
   A3C7 92 E1              4259 	mov	acc.1,c
   A3C9 F0                 4260 	movx	@dptr,a
                           4261 ;	../../shared/src/dcc_cal.c:511: in_cont_mode = 1;                                  //when continious mode, use fraction code
   A3CA E5 18              4262 	mov	a,_bp
   A3CC 24 05              4263 	add	a,#0x05
   A3CE F8                 4264 	mov	r0,a
   A3CF 76 01              4265 	mov	@r0,#0x01
   A3D1 80 0A              4266 	sjmp	00115$
   A3D3                    4267 00107$:
                           4268 ;	../../shared/src/dcc_cal.c:514: lnx_RXDCC_DATA_CAL_DONE_LANE = 1;
   A3D3 90 60 00           4269 	mov	dptr,#_CAL_CTRL1_LANE
   A3D6 E0                 4270 	movx	a,@dptr
   A3D7 44 80              4271 	orl	a,#0x80
   A3D9 F0                 4272 	movx	@dptr,a
                           4273 ;	../../shared/src/dcc_cal.c:515: return;
   A3DA 02 A6 20           4274 	ljmp	00159$
   A3DD                    4275 00115$:
                           4276 ;	../../shared/src/dcc_cal.c:518: hg_set = RXDCC_HG_DATACLK;
   A3DD 90 02 20           4277 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   A3E0 E0                 4278 	movx	a,@dptr
   A3E1 03                 4279 	rr	a
   A3E2 54 01              4280 	anl	a,#0x01
   A3E4 FA                 4281 	mov	r2,a
   A3E5 E5 18              4282 	mov	a,_bp
   A3E7 24 06              4283 	add	a,#0x06
   A3E9 F8                 4284 	mov	r0,a
   A3EA A6 02              4285 	mov	@r0,ar2
                           4286 ;	../../shared/src/dcc_cal.c:520: do {
   A3EC                    4287 00154$:
                           4288 ;	../../shared/src/dcc_cal.c:521: RXDCC_DATACLK = dcc_cnt;
   A3EC 8F 02              4289 	mov	ar2,r7
   A3EE 90 02 20           4290 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   A3F1 EA                 4291 	mov	a,r2
   A3F2 2A                 4292 	add	a,r2
   A3F3 25 E0              4293 	add	a,acc
   A3F5 54 FC              4294 	anl	a,#0xfc
   A3F7 F5 F0              4295 	mov	b,a
   A3F9 E0                 4296 	movx	a,@dptr
   A3FA 54 03              4297 	anl	a,#0x03
   A3FC 45 F0              4298 	orl	a,b
   A3FE F0                 4299 	movx	@dptr,a
                           4300 ;	../../shared/src/dcc_cal.c:522: rxdcc_clk_toggle();
   A3FF C0 03              4301 	push	ar3
   A401 C0 04              4302 	push	ar4
   A403 C0 07              4303 	push	ar7
   A405 78 AE              4304 	mov	r0,#_rxdcc_clk_toggle
   A407 79 9E              4305 	mov	r1,#(_rxdcc_clk_toggle >> 8)
   A409 7A 02              4306 	mov	r2,#(_rxdcc_clk_toggle >> 16)
   A40B 12 00 B3           4307 	lcall	__sdcc_banked_call
   A40E D0 07              4308 	pop	ar7
   A410 D0 04              4309 	pop	ar4
   A412 D0 03              4310 	pop	ar3
                           4311 ;	../../shared/src/dcc_cal.c:524: time_out_cnt ++;
   A414 0C                 4312 	inc	r4
                           4313 ;	../../shared/src/dcc_cal.c:525: if( RXDCC_CAL_EN == 0 ) break;                                      //either LOAD, or EXT_EN in power-on
   A415 90 00 40           4314 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_16
   A418 E0                 4315 	movx	a,@dptr
   A419 20 E0 03           4316 	jb	acc.0,00200$
   A41C 02 A5 CB           4317 	ljmp	00156$
   A41F                    4318 00200$:
                           4319 ;	../../shared/src/dcc_cal.c:526: if( lnx_CAL_DONE_LANE == 0 && RX_SPEED_DIV > 3 ) break;                  //power-on, but SPEED_DIV = 1xx, skip and keep using init code (0x20)
   A41F 90 60 03           4320 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   A422 E0                 4321 	movx	a,@dptr
   A423 20 E0 18           4322 	jb	acc.0,00119$
   A426 90 02 28           4323 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_138
   A429 E0                 4324 	movx	a,@dptr
   A42A 03                 4325 	rr	a
   A42B 03                 4326 	rr	a
   A42C 54 07              4327 	anl	a,#0x07
   A42E FA                 4328 	mov	r2,a
   A42F C3                 4329 	clr	c
   A430 74 83              4330 	mov	a,#(0x03 ^ 0x80)
   A432 8A F0              4331 	mov	b,r2
   A434 63 F0 80           4332 	xrl	b,#0x80
   A437 95 F0              4333 	subb	a,b
   A439 50 03              4334 	jnc	00202$
   A43B 02 A5 CB           4335 	ljmp	00156$
   A43E                    4336 00202$:
   A43E                    4337 00119$:
                           4338 ;	../../shared/src/dcc_cal.c:527: if( lnx_CAL_DONE_LANE == 1 && time_out_cnt > 1) break;                   //continious mode, has ran 1 round
   A43E 90 60 03           4339 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   A441 E0                 4340 	movx	a,@dptr
   A442 54 01              4341 	anl	a,#0x01
   A444 FA                 4342 	mov	r2,a
   A445 BA 01 0A           4343 	cjne	r2,#0x01,00122$
   A448 74 01              4344 	mov	a,#0x01
   A44A B5 04 00           4345 	cjne	a,ar4,00205$
   A44D                    4346 00205$:
   A44D 50 03              4347 	jnc	00206$
   A44F 02 A5 CB           4348 	ljmp	00156$
   A452                    4349 00206$:
   A452                    4350 00122$:
                           4351 ;	../../shared/src/dcc_cal.c:528: if( lnx_CAL_DONE_LANE == 0 && is_toggle_pat( dir, time_out_cnt - 1 ))  { lnx_RXDCC_DATA_CAL_PASS_LANE = 1;  break; }     //power-on, toggled
   A452 90 60 03           4352 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   A455 E0                 4353 	movx	a,@dptr
   A456 20 E0 31           4354 	jb	acc.0,00125$
   A459 EC                 4355 	mov	a,r4
   A45A 14                 4356 	dec	a
   A45B FA                 4357 	mov	r2,a
   A45C C0 03              4358 	push	ar3
   A45E C0 04              4359 	push	ar4
   A460 C0 07              4360 	push	ar7
   A462 C0 02              4361 	push	ar2
   A464 E5 18              4362 	mov	a,_bp
   A466 24 03              4363 	add	a,#0x03
   A468 F8                 4364 	mov	r0,a
   A469 86 82              4365 	mov	dpl,@r0
   A46B 78 CD              4366 	mov	r0,#_is_toggle_pat
   A46D 79 BD              4367 	mov	r1,#(_is_toggle_pat >> 8)
   A46F 7A 02              4368 	mov	r2,#(_is_toggle_pat >> 16)
   A471 12 00 B3           4369 	lcall	__sdcc_banked_call
   A474 15 81              4370 	dec	sp
   A476 D0 07              4371 	pop	ar7
   A478 D0 04              4372 	pop	ar4
   A47A D0 03              4373 	pop	ar3
   A47C 92 28              4374 	mov	b0,c
   A47E 50 0A              4375 	jnc	00125$
   A480 90 60 04           4376 	mov	dptr,#_CAL_CTRL2_LANE
   A483 E0                 4377 	movx	a,@dptr
   A484 44 80              4378 	orl	a,#0x80
   A486 F0                 4379 	movx	@dptr,a
   A487 02 A5 CB           4380 	ljmp	00156$
   A48A                    4381 00125$:
                           4382 ;	../../shared/src/dcc_cal.c:529: if( lnx_CAL_DONE_LANE == 0 && time_out_cnt >= RXDCC_DATA_LOOP_MAX && cmx_RXDCC_DATA_CAL_TIMEOUT_DIS == 0) break; //power-on, reached maximum rounds
   A48A 90 60 03           4383 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   A48D E0                 4384 	movx	a,@dptr
   A48E 20 E0 0F           4385 	jb	acc.0,00128$
   A491 BC 40 00           4386 	cjne	r4,#0x40,00210$
   A494                    4387 00210$:
   A494 40 0A              4388 	jc	00128$
   A496 90 E6 48           4389 	mov	dptr,#_CAL_TIME_OUT_AND_DIS
   A499 E0                 4390 	movx	a,@dptr
   A49A 20 E1 03           4391 	jb	acc.1,00212$
   A49D 02 A5 CB           4392 	ljmp	00156$
   A4A0                    4393 00212$:
   A4A0                    4394 00128$:
                           4395 ;	../../shared/src/dcc_cal.c:531: latched_RXDCC_DN = TXDCC_DN;   //RXDCC shares TXDCC up/dn
   A4A0 90 20 40           4396 	mov	dptr,#_TX_CALIBRATION_LANE
   A4A3 E0                 4397 	movx	a,@dptr
   A4A4 54 01              4398 	anl	a,#0x01
   A4A6 FA                 4399 	mov	r2,a
                           4400 ;	../../shared/src/dcc_cal.c:532: int_up = 0;
   A4A7 A8 18              4401 	mov	r0,_bp
   A4A9 08                 4402 	inc	r0
   A4AA 08                 4403 	inc	r0
   A4AB 76 00              4404 	mov	@r0,#0x00
                           4405 ;	../../shared/src/dcc_cal.c:533: int_dn = 0;
   A4AD A8 18              4406 	mov	r0,_bp
   A4AF 08                 4407 	inc	r0
   A4B0 76 00              4408 	mov	@r0,#0x00
                           4409 ;	../../shared/src/dcc_cal.c:535: if (in_cont_mode) { //continious calibration
   A4B2 E5 18              4410 	mov	a,_bp
   A4B4 24 05              4411 	add	a,#0x05
   A4B6 F8                 4412 	mov	r0,a
   A4B7 E6                 4413 	mov	a,@r0
   A4B8 60 6C              4414 	jz	00143$
                           4415 ;	../../shared/src/dcc_cal.c:536: if (latched_RXDCC_DN) {rxdcc_data_step_cnt--;}
   A4BA EA                 4416 	mov	a,r2
   A4BB 60 0B              4417 	jz	00132$
   A4BD 90 66 09           4418 	mov	dptr,#_rxdcc_data_step_cnt
   A4C0 E0                 4419 	movx	a,@dptr
   A4C1 14                 4420 	dec	a
   A4C2 90 66 09           4421 	mov	dptr,#_rxdcc_data_step_cnt
   A4C5 F0                 4422 	movx	@dptr,a
   A4C6 80 07              4423 	sjmp	00133$
   A4C8                    4424 00132$:
                           4425 ;	../../shared/src/dcc_cal.c:537: else                  {rxdcc_data_step_cnt++;}
   A4C8 90 66 09           4426 	mov	dptr,#_rxdcc_data_step_cnt
   A4CB E0                 4427 	movx	a,@dptr
   A4CC 24 01              4428 	add	a,#0x01
   A4CE F0                 4429 	movx	@dptr,a
   A4CF                    4430 00133$:
                           4431 ;	../../shared/src/dcc_cal.c:539: if( rxdcc_data_step_cnt == 0) {
   A4CF 90 66 09           4432 	mov	dptr,#_rxdcc_data_step_cnt
   A4D2 E0                 4433 	movx	a,@dptr
   A4D3 FA                 4434 	mov	r2,a
   A4D4 70 19              4435 	jnz	00137$
                           4436 ;	../../shared/src/dcc_cal.c:540: int_up = 0;
   A4D6 C0 03              4437 	push	ar3
   A4D8 A8 18              4438 	mov	r0,_bp
   A4DA 08                 4439 	inc	r0
   A4DB 08                 4440 	inc	r0
   A4DC 76 00              4441 	mov	@r0,#0x00
                           4442 ;	../../shared/src/dcc_cal.c:541: int_dn = 1;
   A4DE A8 18              4443 	mov	r0,_bp
   A4E0 08                 4444 	inc	r0
   A4E1 76 01              4445 	mov	@r0,#0x01
                           4446 ;	../../shared/src/dcc_cal.c:542: rxdcc_data_step_cnt = RXDCC_DATA_CAL_STEP_SIZE;  //after up/dn triggered, reset fraction code to middle
   A4E3 90 E6 39           4447 	mov	dptr,#(_CON_CAL_STEP_SIZE2 + 0x0001)
   A4E6 E0                 4448 	movx	a,@dptr
   A4E7 90 66 09           4449 	mov	dptr,#_rxdcc_data_step_cnt
   A4EA F0                 4450 	movx	@dptr,a
   A4EB D0 03              4451 	pop	ar3
   A4ED 80 52              4452 	sjmp	00144$
   A4EF                    4453 00137$:
                           4454 ;	../../shared/src/dcc_cal.c:544: else if(rxdcc_data_step_cnt>=(RXDCC_DATA_CAL_STEP_SIZE<<1)) {
   A4EF C0 03              4455 	push	ar3
   A4F1 90 E6 39           4456 	mov	dptr,#(_CON_CAL_STEP_SIZE2 + 0x0001)
   A4F4 E0                 4457 	movx	a,@dptr
   A4F5 FB                 4458 	mov	r3,a
   A4F6 E4                 4459 	clr	a
   A4F7 CB                 4460 	xch	a,r3
   A4F8 25 E0              4461 	add	a,acc
   A4FA CB                 4462 	xch	a,r3
   A4FB 33                 4463 	rlc	a
   A4FC FE                 4464 	mov	r6,a
   A4FD 7D 00              4465 	mov	r5,#0x00
   A4FF C3                 4466 	clr	c
   A500 EA                 4467 	mov	a,r2
   A501 9B                 4468 	subb	a,r3
   A502 ED                 4469 	mov	a,r5
   A503 64 80              4470 	xrl	a,#0x80
   A505 8E F0              4471 	mov	b,r6
   A507 63 F0 80           4472 	xrl	b,#0x80
   A50A 95 F0              4473 	subb	a,b
   A50C D0 03              4474 	pop	ar3
   A50E 40 31              4475 	jc	00144$
                           4476 ;	../../shared/src/dcc_cal.c:545: int_up = 1;
   A510 A8 18              4477 	mov	r0,_bp
   A512 08                 4478 	inc	r0
   A513 08                 4479 	inc	r0
   A514 76 01              4480 	mov	@r0,#0x01
                           4481 ;	../../shared/src/dcc_cal.c:546: int_dn = 0;
   A516 A8 18              4482 	mov	r0,_bp
   A518 08                 4483 	inc	r0
   A519 76 00              4484 	mov	@r0,#0x00
                           4485 ;	../../shared/src/dcc_cal.c:547: rxdcc_data_step_cnt = RXDCC_DATA_CAL_STEP_SIZE;  //after up/dn triggered, reset fraction code to middle
   A51B 90 E6 39           4486 	mov	dptr,#(_CON_CAL_STEP_SIZE2 + 0x0001)
   A51E E0                 4487 	movx	a,@dptr
   A51F FA                 4488 	mov	r2,a
   A520 90 66 09           4489 	mov	dptr,#_rxdcc_data_step_cnt
   A523 F0                 4490 	movx	@dptr,a
   A524 80 1B              4491 	sjmp	00144$
   A526                    4492 00143$:
                           4493 ;	../../shared/src/dcc_cal.c:551: if (latched_RXDCC_DN) {int_up = 0; int_dn = 1;}
   A526 EA                 4494 	mov	a,r2
   A527 60 0D              4495 	jz	00140$
   A529 A8 18              4496 	mov	r0,_bp
   A52B 08                 4497 	inc	r0
   A52C 08                 4498 	inc	r0
   A52D 76 00              4499 	mov	@r0,#0x00
   A52F A8 18              4500 	mov	r0,_bp
   A531 08                 4501 	inc	r0
   A532 76 01              4502 	mov	@r0,#0x01
   A534 80 0B              4503 	sjmp	00144$
   A536                    4504 00140$:
                           4505 ;	../../shared/src/dcc_cal.c:552: else                  {int_up = 1; int_dn = 0;}
   A536 A8 18              4506 	mov	r0,_bp
   A538 08                 4507 	inc	r0
   A539 08                 4508 	inc	r0
   A53A 76 01              4509 	mov	@r0,#0x01
   A53C A8 18              4510 	mov	r0,_bp
   A53E 08                 4511 	inc	r0
   A53F 76 00              4512 	mov	@r0,#0x00
   A541                    4513 00144$:
                           4514 ;	../../shared/src/dcc_cal.c:555: if (int_dn == 1) {
   A541 A8 18              4515 	mov	r0,_bp
   A543 08                 4516 	inc	r0
   A544 B6 01 19           4517 	cjne	@r0,#0x01,00148$
                           4518 ;	../../shared/src/dcc_cal.c:556: dcc_cnt = sign_abs_dn(dcc_cnt);
   A547 8F 82              4519 	mov	dpl,r7
   A549 C0 03              4520 	push	ar3
   A54B C0 04              4521 	push	ar4
   A54D 78 55              4522 	mov	r0,#_sign_abs_dn
   A54F 79 BD              4523 	mov	r1,#(_sign_abs_dn >> 8)
   A551 7A 02              4524 	mov	r2,#(_sign_abs_dn >> 16)
   A553 12 00 B3           4525 	lcall	__sdcc_banked_call
   A556 AA 82              4526 	mov	r2,dpl
   A558 D0 04              4527 	pop	ar4
   A55A D0 03              4528 	pop	ar3
   A55C 8A 07              4529 	mov	ar7,r2
   A55E 80 27              4530 	sjmp	00149$
   A560                    4531 00148$:
                           4532 ;	../../shared/src/dcc_cal.c:558: else if (int_up == 1) {
   A560 A8 18              4533 	mov	r0,_bp
   A562 08                 4534 	inc	r0
   A563 08                 4535 	inc	r0
   A564 B6 01 20           4536 	cjne	@r0,#0x01,00149$
                           4537 ;	../../shared/src/dcc_cal.c:559: dir |= 1;
   A567 E5 18              4538 	mov	a,_bp
   A569 24 03              4539 	add	a,#0x03
   A56B F8                 4540 	mov	r0,a
   A56C E6                 4541 	mov	a,@r0
   A56D 44 01              4542 	orl	a,#0x01
   A56F F6                 4543 	mov	@r0,a
                           4544 ;	../../shared/src/dcc_cal.c:560: dcc_cnt = sign_abs_up(dcc_cnt);
   A570 8F 82              4545 	mov	dpl,r7
   A572 C0 03              4546 	push	ar3
   A574 C0 04              4547 	push	ar4
   A576 78 33              4548 	mov	r0,#_sign_abs_up
   A578 79 BD              4549 	mov	r1,#(_sign_abs_up >> 8)
   A57A 7A 02              4550 	mov	r2,#(_sign_abs_up >> 16)
   A57C 12 00 B3           4551 	lcall	__sdcc_banked_call
   A57F AA 82              4552 	mov	r2,dpl
   A581 D0 04              4553 	pop	ar4
   A583 D0 03              4554 	pop	ar3
   A585 8A 07              4555 	mov	ar7,r2
   A587                    4556 00149$:
                           4557 ;	../../shared/src/dcc_cal.c:562: dir<<=1;
   A587 E5 18              4558 	mov	a,_bp
   A589 24 03              4559 	add	a,#0x03
   A58B F8                 4560 	mov	r0,a
   A58C E6                 4561 	mov	a,@r0
   A58D 25 E0              4562 	add	a,acc
   A58F F6                 4563 	mov	@r0,a
                           4564 ;	../../shared/src/dcc_cal.c:563: dir = dir & 0x3f;
   A590 E5 18              4565 	mov	a,_bp
   A592 24 03              4566 	add	a,#0x03
   A594 F8                 4567 	mov	r0,a
   A595 E6                 4568 	mov	a,@r0
   A596 54 3F              4569 	anl	a,#0x3F
   A598 F6                 4570 	mov	@r0,a
                           4571 ;	../../shared/src/dcc_cal.c:568: if (in_power_on && ( ( dcc_cnt & 0x1f ) == 24) && (hg_set == 0)){
   A599 EB                 4572 	mov	a,r3
   A59A 70 03              4573 	jnz	00222$
   A59C 02 A3 EC           4574 	ljmp	00154$
   A59F                    4575 00222$:
   A59F 74 1F              4576 	mov	a,#0x1F
   A5A1 5F                 4577 	anl	a,r7
   A5A2 FA                 4578 	mov	r2,a
   A5A3 BA 18 02           4579 	cjne	r2,#0x18,00223$
   A5A6 80 03              4580 	sjmp	00224$
   A5A8                    4581 00223$:
   A5A8 02 A3 EC           4582 	ljmp	00154$
   A5AB                    4583 00224$:
   A5AB E5 18              4584 	mov	a,_bp
   A5AD 24 06              4585 	add	a,#0x06
   A5AF F8                 4586 	mov	r0,a
   A5B0 E6                 4587 	mov	a,@r0
   A5B1 60 03              4588 	jz	00225$
   A5B3 02 A3 EC           4589 	ljmp	00154$
   A5B6                    4590 00225$:
                           4591 ;	../../shared/src/dcc_cal.c:569: RXDCC_HG_DATACLK = 1;
   A5B6 90 02 20           4592 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   A5B9 E0                 4593 	movx	a,@dptr
   A5BA 44 02              4594 	orl	a,#0x02
   A5BC F0                 4595 	movx	@dptr,a
                           4596 ;	../../shared/src/dcc_cal.c:570: hg_set = 1;
   A5BD E5 18              4597 	mov	a,_bp
   A5BF 24 06              4598 	add	a,#0x06
   A5C1 F8                 4599 	mov	r0,a
   A5C2 76 01              4600 	mov	@r0,#0x01
                           4601 ;	../../shared/src/dcc_cal.c:571: dcc_cnt = 0x20;
   A5C4 7F 20              4602 	mov	r7,#0x20
                           4603 ;	../../shared/src/dcc_cal.c:572: time_out_cnt = 0;
   A5C6 7C 00              4604 	mov	r4,#0x00
                           4605 ;	../../shared/src/dcc_cal.c:574: } while (1);
   A5C8 02 A3 EC           4606 	ljmp	00154$
   A5CB                    4607 00156$:
                           4608 ;	../../shared/src/dcc_cal.c:577: if (lnx_CAL_DONE_LANE == 0) {                            //if power-on calibration
   A5CB 90 60 03           4609 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   A5CE E0                 4610 	movx	a,@dptr
   A5CF 20 E0 2F           4611 	jb	acc.0,00158$
                           4612 ;	../../shared/src/dcc_cal.c:578: lnx_cal_rxdcc_data[PWR][gen] = dcc_cnt;       //save to power-on result
   A5D2 E5 18              4613 	mov	a,_bp
   A5D4 24 04              4614 	add	a,#0x04
   A5D6 F8                 4615 	mov	r0,a
   A5D7 E6                 4616 	mov	a,@r0
   A5D8 24 E6              4617 	add	a,#_lnx_cal_rxdcc_data
   A5DA F5 82              4618 	mov	dpl,a
   A5DC E4                 4619 	clr	a
   A5DD 34 65              4620 	addc	a,#(_lnx_cal_rxdcc_data >> 8)
   A5DF F5 83              4621 	mov	dph,a
   A5E1 EF                 4622 	mov	a,r7
   A5E2 F0                 4623 	movx	@dptr,a
                           4624 ;	../../shared/src/dcc_cal.c:579: lnx_cal_rxdcc_data_hg[gen] = (RXDCC_HG_DATACLK & 0x01) | 0x0; //save the HG setting for current rate, will be loaded by continious mode
   A5E3 E5 18              4625 	mov	a,_bp
   A5E5 24 04              4626 	add	a,#0x04
   A5E7 F8                 4627 	mov	r0,a
   A5E8 E6                 4628 	mov	a,@r0
   A5E9 24 F0              4629 	add	a,#_lnx_cal_rxdcc_data_hg
   A5EB FA                 4630 	mov	r2,a
   A5EC E4                 4631 	clr	a
   A5ED 34 65              4632 	addc	a,#(_lnx_cal_rxdcc_data_hg >> 8)
   A5EF FB                 4633 	mov	r3,a
   A5F0 90 02 20           4634 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   A5F3 E0                 4635 	movx	a,@dptr
   A5F4 03                 4636 	rr	a
   A5F5 54 01              4637 	anl	a,#0x01
   A5F7 FC                 4638 	mov	r4,a
   A5F8 53 04 01           4639 	anl	ar4,#0x01
   A5FB 8A 82              4640 	mov	dpl,r2
   A5FD 8B 83              4641 	mov	dph,r3
   A5FF EC                 4642 	mov	a,r4
   A600 F0                 4643 	movx	@dptr,a
   A601                    4644 00158$:
                           4645 ;	../../shared/src/dcc_cal.c:582: lnx_cal_rxdcc_data[CONT][gen] = dcc_cnt;     //no matter power-on or LOAD or continious, need to save to [CONT]
   A601 E5 18              4646 	mov	a,_bp
   A603 24 04              4647 	add	a,#0x04
   A605 F8                 4648 	mov	r0,a
   A606 E6                 4649 	mov	a,@r0
   A607 24 EB              4650 	add	a,#(_lnx_cal_rxdcc_data + 0x0005)
   A609 F5 82              4651 	mov	dpl,a
   A60B E4                 4652 	clr	a
   A60C 34 65              4653 	addc	a,#((_lnx_cal_rxdcc_data + 0x0005) >> 8)
   A60E F5 83              4654 	mov	dph,a
   A610 EF                 4655 	mov	a,r7
   A611 F0                 4656 	movx	@dptr,a
                           4657 ;	../../shared/src/dcc_cal.c:584: RXDCC_CAL_EN = 0;
   A612 90 00 40           4658 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_16
   A615 E0                 4659 	movx	a,@dptr
   A616 54 FE              4660 	anl	a,#0xfe
   A618 F0                 4661 	movx	@dptr,a
                           4662 ;	../../shared/src/dcc_cal.c:585: lnx_RXDCC_DATA_CAL_DONE_LANE = 1;
   A619 90 60 00           4663 	mov	dptr,#_CAL_CTRL1_LANE
   A61C E0                 4664 	movx	a,@dptr
   A61D 44 80              4665 	orl	a,#0x80
   A61F F0                 4666 	movx	@dptr,a
   A620                    4667 00159$:
   A620 85 18 81           4668 	mov	sp,_bp
   A623 D0 18              4669 	pop	_bp
   A625 02 00 C5           4670 	ljmp	__sdcc_banked_ret
                           4671 ;------------------------------------------------------------
                           4672 ;Allocation info for local variables in function 'rxdcc_eom_cal'
                           4673 ;------------------------------------------------------------
                           4674 ;dcc_cnt                   Allocated to registers r3 
                           4675 ;latched_RXDCC_DN          Allocated to registers r2 
                           4676 ;int_dn                    Allocated to stack - offset 1
                           4677 ;int_up                    Allocated to stack - offset 2
                           4678 ;dir                       Allocated to stack - offset 3
                           4679 ;gen                       Allocated to stack - offset 4
                           4680 ;time_out_cnt              Allocated to registers r4 
                           4681 ;in_power_on               Allocated to stack - offset 5
                           4682 ;in_cont_mode              Allocated to stack - offset 6
                           4683 ;ext_en                    Allocated to registers r3 
                           4684 ;saved_eom_clk_en          Allocated to registers r5 
                           4685 ;hg_set                    Allocated to stack - offset 7
                           4686 ;sloc0                     Allocated to stack - offset 13
                           4687 ;------------------------------------------------------------
                           4688 ;	../../shared/src/dcc_cal.c:590: void rxdcc_eom_cal(void) BANKING_CTRL {
                           4689 ;	-----------------------------------------
                           4690 ;	 function rxdcc_eom_cal
                           4691 ;	-----------------------------------------
   A628                    4692 _rxdcc_eom_cal:
   A628 C0 18              4693 	push	_bp
   A62A E5 81              4694 	mov	a,sp
   A62C F5 18              4695 	mov	_bp,a
   A62E 24 07              4696 	add	a,#0x07
   A630 F5 81              4697 	mov	sp,a
                           4698 ;	../../shared/src/dcc_cal.c:603: PHY_STATUS = ST_RXDCC_EOM_CAL;
   A632 90 22 30           4699 	mov	dptr,#_MCU_STATUS0_LANE
   A635 74 11              4700 	mov	a,#0x11
   A637 F0                 4701 	movx	@dptr,a
                           4702 ;	../../shared/src/dcc_cal.c:605: lnx_RXDCC_EOM_CAL_DONE_LANE = 0;
   A638 90 60 01           4703 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0001)
   A63B E0                 4704 	movx	a,@dptr
   A63C 54 FE              4705 	anl	a,#0xfe
   A63E F0                 4706 	movx	@dptr,a
                           4707 ;	../../shared/src/dcc_cal.c:608: in_cont_mode = 0;
   A63F E5 18              4708 	mov	a,_bp
   A641 24 06              4709 	add	a,#0x06
   A643 F8                 4710 	mov	r0,a
   A644 76 00              4711 	mov	@r0,#0x00
                           4712 ;	../../shared/src/dcc_cal.c:609: in_power_on = 0;
   A646 E5 18              4713 	mov	a,_bp
   A648 24 05              4714 	add	a,#0x05
   A64A F8                 4715 	mov	r0,a
   A64B 76 00              4716 	mov	@r0,#0x00
                           4717 ;	../../shared/src/dcc_cal.c:610: time_out_cnt = 0;
   A64D 7C 00              4718 	mov	r4,#0x00
                           4719 ;	../../shared/src/dcc_cal.c:611: saved_eom_clk_en = 1;
   A64F 7D 01              4720 	mov	r5,#0x01
                           4721 ;	../../shared/src/dcc_cal.c:612: dir = 0;
   A651 E5 18              4722 	mov	a,_bp
   A653 24 03              4723 	add	a,#0x03
   A655 F8                 4724 	mov	r0,a
   A656 76 00              4725 	mov	@r0,#0x00
                           4726 ;	../../shared/src/dcc_cal.c:614: gen = gen_rx;
   A658 90 66 16           4727 	mov	dptr,#_gen_rx
   A65B E0                 4728 	movx	a,@dptr
   A65C FF                 4729 	mov	r7,a
   A65D E5 18              4730 	mov	a,_bp
   A65F 24 04              4731 	add	a,#0x04
   A661 F8                 4732 	mov	r0,a
   A662 A6 07              4733 	mov	@r0,ar7
                           4734 ;	../../shared/src/dcc_cal.c:615: if(phy_mode == SERDES) gen = 0;
   A664 90 A3 16           4735 	mov	dptr,#(_SYSTEM + 0x0002)
   A667 E0                 4736 	movx	a,@dptr
   A668 54 07              4737 	anl	a,#0x07
   A66A FB                 4738 	mov	r3,a
   A66B BB 04 07           4739 	cjne	r3,#0x04,00102$
   A66E E5 18              4740 	mov	a,_bp
   A670 24 04              4741 	add	a,#0x04
   A672 F8                 4742 	mov	r0,a
   A673 76 00              4743 	mov	@r0,#0x00
   A675                    4744 00102$:
                           4745 ;	../../shared/src/dcc_cal.c:618: if (lnx_CAL_DONE_LANE == 0) {                        //power-on calibration
   A675 90 60 03           4746 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   A678 E0                 4747 	movx	a,@dptr
   A679 30 E0 03           4748 	jnb	acc.0,00198$
   A67C 02 A7 13           4749 	ljmp	00115$
   A67F                    4750 00198$:
                           4751 ;	../../shared/src/dcc_cal.c:619: ext_en = cmx_EXT_FORCE_CAL_DONE || cmx_RXDCC_EOM_CAL_EXT_EN;
   A67F 90 E6 06           4752 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0002)
   A682 E0                 4753 	movx	a,@dptr
   A683 20 E1 0B           4754 	jb	acc.1,00165$
   A686 90 E6 0A           4755 	mov	dptr,#(_CONTROL_CONFIG1 + 0x0002)
   A689 E0                 4756 	movx	a,@dptr
   A68A 20 E1 04           4757 	jb	acc.1,00165$
   A68D 7B 00              4758 	mov	r3,#0x00
   A68F 80 02              4759 	sjmp	00166$
   A691                    4760 00165$:
   A691 7B 01              4761 	mov	r3,#0x01
   A693                    4762 00166$:
                           4763 ;	../../shared/src/dcc_cal.c:620: if (ext_en){                                     //use ext value for power-on, bypass calibration
   A693 EB                 4764 	mov	a,r3
   A694 60 2F              4765 	jz	00104$
                           4766 ;	../../shared/src/dcc_cal.c:621: dcc_cnt = lnx_cal_rxdcc_eom[PWR][gen];
   A696 C0 05              4767 	push	ar5
   A698 E5 18              4768 	mov	a,_bp
   A69A 24 04              4769 	add	a,#0x04
   A69C F8                 4770 	mov	r0,a
   A69D E6                 4771 	mov	a,@r0
   A69E 24 F5              4772 	add	a,#_lnx_cal_rxdcc_eom
   A6A0 F5 82              4773 	mov	dpl,a
   A6A2 E4                 4774 	clr	a
   A6A3 34 65              4775 	addc	a,#(_lnx_cal_rxdcc_eom >> 8)
   A6A5 F5 83              4776 	mov	dph,a
   A6A7 E0                 4777 	movx	a,@dptr
   A6A8 FB                 4778 	mov	r3,a
                           4779 ;	../../shared/src/dcc_cal.c:622: RXDCC_HG_EOMCLK = lnx_cal_rxdcc_eom_hg[gen];          //load the HG setting.
   A6A9 E5 18              4780 	mov	a,_bp
   A6AB 24 04              4781 	add	a,#0x04
   A6AD F8                 4782 	mov	r0,a
   A6AE E6                 4783 	mov	a,@r0
   A6AF 24 FF              4784 	add	a,#_lnx_cal_rxdcc_eom_hg
   A6B1 F5 82              4785 	mov	dpl,a
   A6B3 E4                 4786 	clr	a
   A6B4 34 65              4787 	addc	a,#(_lnx_cal_rxdcc_eom_hg >> 8)
   A6B6 F5 83              4788 	mov	dph,a
   A6B8 E0                 4789 	movx	a,@dptr
   A6B9 90 00 40           4790 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_16
   A6BC 13                 4791 	rrc	a
   A6BD E0                 4792 	movx	a,@dptr
   A6BE 92 E1              4793 	mov	acc.1,c
   A6C0 F0                 4794 	movx	@dptr,a
   A6C1 D0 05              4795 	pop	ar5
   A6C3 80 38              4796 	sjmp	00105$
   A6C5                    4797 00104$:
                           4798 ;	../../shared/src/dcc_cal.c:625: lnx_RXDCC_EOM_CAL_PASS_LANE = 0; // clear pass flag for normal power-on cal
   A6C5 90 60 05           4799 	mov	dptr,#(_CAL_CTRL2_LANE + 0x0001)
   A6C8 E0                 4800 	movx	a,@dptr
   A6C9 54 FE              4801 	anl	a,#0xfe
   A6CB F0                 4802 	movx	@dptr,a
                           4803 ;	../../shared/src/dcc_cal.c:626: saved_eom_clk_en = EOM_CLK_EN;
   A6CC 90 02 18           4804 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_134
   A6CF E0                 4805 	movx	a,@dptr
   A6D0 03                 4806 	rr	a
   A6D1 03                 4807 	rr	a
   A6D2 54 01              4808 	anl	a,#0x01
   A6D4 FA                 4809 	mov	r2,a
   A6D5 FD                 4810 	mov	r5,a
                           4811 ;	../../shared/src/dcc_cal.c:627: EOM_CLK_EN = 1;
   A6D6 90 02 18           4812 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_134
   A6D9 E0                 4813 	movx	a,@dptr
   A6DA 44 04              4814 	orl	a,#0x04
   A6DC F0                 4815 	movx	@dptr,a
                           4816 ;	../../shared/src/dcc_cal.c:628: RXDCC_CAL_EN = 1;
   A6DD 90 00 40           4817 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_16
   A6E0 E0                 4818 	movx	a,@dptr
   A6E1 44 01              4819 	orl	a,#0x01
   A6E3 F0                 4820 	movx	@dptr,a
                           4821 ;	../../shared/src/dcc_cal.c:629: TRXDCCIN_SEL = 2;
   A6E4 90 00 44           4822 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_17
   A6E7 E0                 4823 	movx	a,@dptr
   A6E8 54 1F              4824 	anl	a,#0x1f
   A6EA 44 40              4825 	orl	a,#0x40
   A6EC F0                 4826 	movx	@dptr,a
                           4827 ;	../../shared/src/dcc_cal.c:630: RXDCC_HG_EOMCLK = 0;
   A6ED 90 00 40           4828 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_16
   A6F0 E0                 4829 	movx	a,@dptr
   A6F1 54 FD              4830 	anl	a,#0xfd
   A6F3 F0                 4831 	movx	@dptr,a
                           4832 ;	../../shared/src/dcc_cal.c:631: dcc_cnt = 0x20;
   A6F4 7B 20              4833 	mov	r3,#0x20
                           4834 ;	../../shared/src/dcc_cal.c:632: in_power_on = 1;
   A6F6 E5 18              4835 	mov	a,_bp
   A6F8 24 05              4836 	add	a,#0x05
   A6FA F8                 4837 	mov	r0,a
   A6FB 76 01              4838 	mov	@r0,#0x01
   A6FD                    4839 00105$:
                           4840 ;	../../shared/src/dcc_cal.c:634: RXDCC_EN_EOMCLK = 1;                           //enable RXDCC_EN during power-on, never deassert
   A6FD C0 05              4841 	push	ar5
   A6FF 90 00 3C           4842 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_15
   A702 E0                 4843 	movx	a,@dptr
   A703 44 02              4844 	orl	a,#0x02
   A705 F0                 4845 	movx	@dptr,a
                           4846 ;	../../shared/src/dcc_cal.c:635: rxdcc_eom_step_cnt = RXDCC_EOM_CAL_STEP_SIZE;      //for power-on (inc. EXT_EN), reset fraction code to middle
   A706 90 E6 38           4847 	mov	dptr,#_CON_CAL_STEP_SIZE2
   A709 E0                 4848 	movx	a,@dptr
   A70A 90 66 08           4849 	mov	dptr,#_rxdcc_eom_step_cnt
   A70D F0                 4850 	movx	@dptr,a
   A70E D0 05              4851 	pop	ar5
   A710 02 A7 D0           4852 	ljmp	00116$
   A713                    4853 00115$:
                           4854 ;	../../shared/src/dcc_cal.c:637: else if (LOAD_CAL_ON) {                         //not power-on. Speed-change, load result for current rate
   A713 90 60 08           4855 	mov	dptr,#_CAL_CTRL3_LANE
   A716 E0                 4856 	movx	a,@dptr
   A717 60 47              4857 	jz	00112$
                           4858 ;	../../shared/src/dcc_cal.c:639: dcc_cnt = lnx_cal_rxdcc_eom[PWR + cmx_RXDCC_EOM_CAL_CONT_CUR_LOAD_EN][gen];
   A719 C0 05              4859 	push	ar5
   A71B 90 E6 33           4860 	mov	dptr,#(_CONTROL_CONFIG9 + 0x0003)
   A71E E0                 4861 	movx	a,@dptr
   A71F 54 01              4862 	anl	a,#0x01
   A721 75 F0 05           4863 	mov	b,#0x05
   A724 A4                 4864 	mul	ab
   A725 24 F5              4865 	add	a,#_lnx_cal_rxdcc_eom
   A727 FD                 4866 	mov	r5,a
   A728 E4                 4867 	clr	a
   A729 34 65              4868 	addc	a,#(_lnx_cal_rxdcc_eom >> 8)
   A72B FA                 4869 	mov	r2,a
   A72C E5 18              4870 	mov	a,_bp
   A72E 24 04              4871 	add	a,#0x04
   A730 F8                 4872 	mov	r0,a
   A731 E6                 4873 	mov	a,@r0
   A732 2D                 4874 	add	a,r5
   A733 F5 82              4875 	mov	dpl,a
   A735 E4                 4876 	clr	a
   A736 3A                 4877 	addc	a,r2
   A737 F5 83              4878 	mov	dph,a
   A739 E0                 4879 	movx	a,@dptr
   A73A FB                 4880 	mov	r3,a
                           4881 ;	../../shared/src/dcc_cal.c:640: rxdcc_eom_step_cnt = RXDCC_EOM_CAL_STEP_SIZE;     //when speed change, restore the fracition code to middle
   A73B 90 E6 38           4882 	mov	dptr,#_CON_CAL_STEP_SIZE2
   A73E E0                 4883 	movx	a,@dptr
   A73F 90 66 08           4884 	mov	dptr,#_rxdcc_eom_step_cnt
   A742 F0                 4885 	movx	@dptr,a
                           4886 ;	../../shared/src/dcc_cal.c:641: RXDCC_HG_EOMCLK = lnx_cal_rxdcc_eom_hg[gen];          //load the HG setting.
   A743 E5 18              4887 	mov	a,_bp
   A745 24 04              4888 	add	a,#0x04
   A747 F8                 4889 	mov	r0,a
   A748 E6                 4890 	mov	a,@r0
   A749 24 FF              4891 	add	a,#_lnx_cal_rxdcc_eom_hg
   A74B F5 82              4892 	mov	dpl,a
   A74D E4                 4893 	clr	a
   A74E 34 65              4894 	addc	a,#(_lnx_cal_rxdcc_eom_hg >> 8)
   A750 F5 83              4895 	mov	dph,a
   A752 E0                 4896 	movx	a,@dptr
   A753 FA                 4897 	mov	r2,a
   A754 90 00 40           4898 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_16
   A757 13                 4899 	rrc	a
   A758 E0                 4900 	movx	a,@dptr
   A759 92 E1              4901 	mov	acc.1,c
   A75B F0                 4902 	movx	@dptr,a
   A75C D0 05              4903 	pop	ar5
   A75E 80 70              4904 	sjmp	00116$
   A760                    4905 00112$:
                           4906 ;	../../shared/src/dcc_cal.c:643: else if (cmx_RXDCC_EOM_CAL_CONT_EN && EOM_CLK_EN == 1 && RX_SPEED_DIV < 4 ) {  //not power-on. Continious mode, only performed when EOM_CLK_EN == 1 and RX_SPEED_DIV[2]==0
   A760 90 E6 0F           4907 	mov	dptr,#(_CONTROL_CONFIG2 + 0x0003)
   A763 E0                 4908 	movx	a,@dptr
   A764 30 E0 5F           4909 	jnb	acc.0,00107$
   A767 90 02 18           4910 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_134
   A76A E0                 4911 	movx	a,@dptr
   A76B 03                 4912 	rr	a
   A76C 03                 4913 	rr	a
   A76D 54 01              4914 	anl	a,#0x01
   A76F FA                 4915 	mov	r2,a
   A770 BA 01 53           4916 	cjne	r2,#0x01,00107$
   A773 90 02 28           4917 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_138
   A776 E0                 4918 	movx	a,@dptr
   A777 03                 4919 	rr	a
   A778 03                 4920 	rr	a
   A779 54 07              4921 	anl	a,#0x07
   A77B FA                 4922 	mov	r2,a
   A77C C3                 4923 	clr	c
   A77D 64 80              4924 	xrl	a,#0x80
   A77F 94 84              4925 	subb	a,#0x84
   A781 50 43              4926 	jnc	00107$
                           4927 ;	../../shared/src/dcc_cal.c:644: RXDCC_CAL_EN = 1;
   A783 90 00 40           4928 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_16
   A786 E0                 4929 	movx	a,@dptr
   A787 44 01              4930 	orl	a,#0x01
   A789 F0                 4931 	movx	@dptr,a
                           4932 ;	../../shared/src/dcc_cal.c:645: TRXDCCIN_SEL = 2; // Fixed from 0 in ROM code function
   A78A 90 00 44           4933 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_17
   A78D E0                 4934 	movx	a,@dptr
   A78E 54 1F              4935 	anl	a,#0x1f
   A790 44 40              4936 	orl	a,#0x40
   A792 F0                 4937 	movx	@dptr,a
                           4938 ;	../../shared/src/dcc_cal.c:646: dcc_cnt = lnx_cal_rxdcc_eom[CONT][gen];    //always load cont result
   A793 E5 18              4939 	mov	a,_bp
   A795 24 04              4940 	add	a,#0x04
   A797 F8                 4941 	mov	r0,a
   A798 E6                 4942 	mov	a,@r0
   A799 24 FA              4943 	add	a,#(_lnx_cal_rxdcc_eom + 0x0005)
   A79B F5 82              4944 	mov	dpl,a
   A79D E4                 4945 	clr	a
   A79E 34 65              4946 	addc	a,#((_lnx_cal_rxdcc_eom + 0x0005) >> 8)
   A7A0 F5 83              4947 	mov	dph,a
   A7A2 E0                 4948 	movx	a,@dptr
   A7A3 FB                 4949 	mov	r3,a
                           4950 ;	../../shared/src/dcc_cal.c:647: RXDCC_HG_EOMCLK = lnx_cal_rxdcc_eom_hg[gen];    //load the HG setting.
   A7A4 E5 18              4951 	mov	a,_bp
   A7A6 24 04              4952 	add	a,#0x04
   A7A8 F8                 4953 	mov	r0,a
   A7A9 E6                 4954 	mov	a,@r0
   A7AA 24 FF              4955 	add	a,#_lnx_cal_rxdcc_eom_hg
   A7AC F5 82              4956 	mov	dpl,a
   A7AE E4                 4957 	clr	a
   A7AF 34 65              4958 	addc	a,#(_lnx_cal_rxdcc_eom_hg >> 8)
   A7B1 F5 83              4959 	mov	dph,a
   A7B3 E0                 4960 	movx	a,@dptr
   A7B4 FA                 4961 	mov	r2,a
   A7B5 90 00 40           4962 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_16
   A7B8 13                 4963 	rrc	a
   A7B9 E0                 4964 	movx	a,@dptr
   A7BA 92 E1              4965 	mov	acc.1,c
   A7BC F0                 4966 	movx	@dptr,a
                           4967 ;	../../shared/src/dcc_cal.c:648: in_cont_mode = 1;                                  //when continious mode, use fraction code
   A7BD E5 18              4968 	mov	a,_bp
   A7BF 24 06              4969 	add	a,#0x06
   A7C1 F8                 4970 	mov	r0,a
   A7C2 76 01              4971 	mov	@r0,#0x01
   A7C4 80 0A              4972 	sjmp	00116$
   A7C6                    4973 00107$:
                           4974 ;	../../shared/src/dcc_cal.c:651: lnx_RXDCC_EOM_CAL_DONE_LANE = 1;
   A7C6 90 60 01           4975 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0001)
   A7C9 E0                 4976 	movx	a,@dptr
   A7CA 44 01              4977 	orl	a,#0x01
   A7CC F0                 4978 	movx	@dptr,a
                           4979 ;	../../shared/src/dcc_cal.c:652: return;
   A7CD 02 AA 45           4980 	ljmp	00162$
   A7D0                    4981 00116$:
                           4982 ;	../../shared/src/dcc_cal.c:655: hg_set = RXDCC_HG_EOMCLK;
   A7D0 90 00 40           4983 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_16
   A7D3 E0                 4984 	movx	a,@dptr
   A7D4 03                 4985 	rr	a
   A7D5 54 01              4986 	anl	a,#0x01
   A7D7 FA                 4987 	mov	r2,a
   A7D8 E5 18              4988 	mov	a,_bp
   A7DA 24 07              4989 	add	a,#0x07
   A7DC F8                 4990 	mov	r0,a
   A7DD A6 02              4991 	mov	@r0,ar2
                           4992 ;	../../shared/src/dcc_cal.c:657: do {
   A7DF                    4993 00155$:
                           4994 ;	../../shared/src/dcc_cal.c:658: RXDCC_EOMCLK = dcc_cnt;
   A7DF C0 05              4995 	push	ar5
   A7E1 8B 05              4996 	mov	ar5,r3
   A7E3 90 00 40           4997 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_16
   A7E6 ED                 4998 	mov	a,r5
   A7E7 2D                 4999 	add	a,r5
   A7E8 25 E0              5000 	add	a,acc
   A7EA 54 FC              5001 	anl	a,#0xfc
   A7EC F5 F0              5002 	mov	b,a
   A7EE E0                 5003 	movx	a,@dptr
   A7EF 54 03              5004 	anl	a,#0x03
   A7F1 45 F0              5005 	orl	a,b
   A7F3 F0                 5006 	movx	@dptr,a
                           5007 ;	../../shared/src/dcc_cal.c:659: rxdcc_clk_toggle();
   A7F4 C0 03              5008 	push	ar3
   A7F6 C0 04              5009 	push	ar4
   A7F8 C0 05              5010 	push	ar5
   A7FA 78 AE              5011 	mov	r0,#_rxdcc_clk_toggle
   A7FC 79 9E              5012 	mov	r1,#(_rxdcc_clk_toggle >> 8)
   A7FE 7A 02              5013 	mov	r2,#(_rxdcc_clk_toggle >> 16)
   A800 12 00 B3           5014 	lcall	__sdcc_banked_call
   A803 D0 05              5015 	pop	ar5
   A805 D0 04              5016 	pop	ar4
   A807 D0 03              5017 	pop	ar3
                           5018 ;	../../shared/src/dcc_cal.c:661: time_out_cnt ++;
   A809 0C                 5019 	inc	r4
                           5020 ;	../../shared/src/dcc_cal.c:662: if( RXDCC_CAL_EN == 0 ) break;                                      //either LOAD, or EXT_EN in power-on
   A80A 90 00 40           5021 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_16
   A80D E0                 5022 	movx	a,@dptr
   A80E D0 05              5023 	pop	ar5
   A810 20 E0 03           5024 	jb	acc.0,00207$
   A813 02 A9 E6           5025 	ljmp	00157$
   A816                    5026 00207$:
                           5027 ;	../../shared/src/dcc_cal.c:663: if( lnx_CAL_DONE_LANE == 0 && RX_SPEED_DIV > 3 ) break;                  //power-on, but SPEED_DIV = 1xx, skip and keep using init code (0x20)
   A816 90 60 03           5028 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   A819 E0                 5029 	movx	a,@dptr
   A81A 20 E0 1C           5030 	jb	acc.0,00120$
   A81D C0 05              5031 	push	ar5
   A81F 90 02 28           5032 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_138
   A822 E0                 5033 	movx	a,@dptr
   A823 03                 5034 	rr	a
   A824 03                 5035 	rr	a
   A825 54 07              5036 	anl	a,#0x07
   A827 FD                 5037 	mov	r5,a
   A828 C3                 5038 	clr	c
   A829 74 83              5039 	mov	a,#(0x03 ^ 0x80)
   A82B 8D F0              5040 	mov	b,r5
   A82D 63 F0 80           5041 	xrl	b,#0x80
   A830 95 F0              5042 	subb	a,b
   A832 D0 05              5043 	pop	ar5
   A834 50 03              5044 	jnc	00209$
   A836 02 A9 E6           5045 	ljmp	00157$
   A839                    5046 00209$:
   A839                    5047 00120$:
                           5048 ;	../../shared/src/dcc_cal.c:664: if( lnx_CAL_DONE_LANE == 1 && time_out_cnt > 1) break;                   //continious mode, has ran 1 round
   A839 C0 05              5049 	push	ar5
   A83B 90 60 03           5050 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   A83E E0                 5051 	movx	a,@dptr
   A83F 54 01              5052 	anl	a,#0x01
   A841 FD                 5053 	mov	r5,a
   A842 BD 01 02           5054 	cjne	r5,#0x01,00210$
   A845 80 04              5055 	sjmp	00211$
   A847                    5056 00210$:
   A847 D0 05              5057 	pop	ar5
   A849 80 0C              5058 	sjmp	00123$
   A84B                    5059 00211$:
   A84B D0 05              5060 	pop	ar5
   A84D 74 01              5061 	mov	a,#0x01
   A84F B5 04 00           5062 	cjne	a,ar4,00212$
   A852                    5063 00212$:
   A852 50 03              5064 	jnc	00213$
   A854 02 A9 E6           5065 	ljmp	00157$
   A857                    5066 00213$:
   A857                    5067 00123$:
                           5068 ;	../../shared/src/dcc_cal.c:665: if( lnx_CAL_DONE_LANE == 0 && is_num_toggle_pat( dir, time_out_cnt - 1, 2 ))  { lnx_RXDCC_EOM_CAL_PASS_LANE = 1;  break; }     //power-on, toggled
   A857 90 60 03           5069 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   A85A E0                 5070 	movx	a,@dptr
   A85B 20 E0 3C           5071 	jb	acc.0,00126$
   A85E C0 05              5072 	push	ar5
   A860 EC                 5073 	mov	a,r4
   A861 14                 5074 	dec	a
   A862 FD                 5075 	mov	r5,a
   A863 C0 03              5076 	push	ar3
   A865 C0 04              5077 	push	ar4
   A867 C0 05              5078 	push	ar5
   A869 74 02              5079 	mov	a,#0x02
   A86B C0 E0              5080 	push	acc
   A86D C0 05              5081 	push	ar5
   A86F E5 18              5082 	mov	a,_bp
   A871 24 03              5083 	add	a,#0x03
   A873 F8                 5084 	mov	r0,a
   A874 86 82              5085 	mov	dpl,@r0
   A876 78 79              5086 	mov	r0,#_is_num_toggle_pat
   A878 79 BD              5087 	mov	r1,#(_is_num_toggle_pat >> 8)
   A87A 7A 02              5088 	mov	r2,#(_is_num_toggle_pat >> 16)
   A87C 12 00 B3           5089 	lcall	__sdcc_banked_call
   A87F 15 81              5090 	dec	sp
   A881 15 81              5091 	dec	sp
   A883 D0 05              5092 	pop	ar5
   A885 D0 04              5093 	pop	ar4
   A887 D0 03              5094 	pop	ar3
   A889 92 28              5095 	mov	b0,c
   A88B D0 05              5096 	pop	ar5
   A88D 30 28 0A           5097 	jnb	b0,00126$
   A890 90 60 05           5098 	mov	dptr,#(_CAL_CTRL2_LANE + 0x0001)
   A893 E0                 5099 	movx	a,@dptr
   A894 44 01              5100 	orl	a,#0x01
   A896 F0                 5101 	movx	@dptr,a
   A897 02 A9 E6           5102 	ljmp	00157$
   A89A                    5103 00126$:
                           5104 ;	../../shared/src/dcc_cal.c:666: if( lnx_CAL_DONE_LANE == 0 && time_out_cnt >= RXDCC_EOM_LOOP_MAX && cmx_RXDCC_EOM_CAL_TIMEOUT_DIS == 0) break; //power-on, reached maximum rounds
   A89A 90 60 03           5105 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   A89D E0                 5106 	movx	a,@dptr
   A89E 20 E0 0F           5107 	jb	acc.0,00129$
   A8A1 BC 40 00           5108 	cjne	r4,#0x40,00217$
   A8A4                    5109 00217$:
   A8A4 40 0A              5110 	jc	00129$
   A8A6 90 E6 48           5111 	mov	dptr,#_CAL_TIME_OUT_AND_DIS
   A8A9 E0                 5112 	movx	a,@dptr
   A8AA 20 E0 03           5113 	jb	acc.0,00219$
   A8AD 02 A9 E6           5114 	ljmp	00157$
   A8B0                    5115 00219$:
   A8B0                    5116 00129$:
                           5117 ;	../../shared/src/dcc_cal.c:668: latched_RXDCC_DN = TXDCC_DN;   //RXDCC shares TXDCC up/dn
   A8B0 C0 05              5118 	push	ar5
   A8B2 90 20 40           5119 	mov	dptr,#_TX_CALIBRATION_LANE
   A8B5 E0                 5120 	movx	a,@dptr
   A8B6 54 01              5121 	anl	a,#0x01
   A8B8 FA                 5122 	mov	r2,a
                           5123 ;	../../shared/src/dcc_cal.c:669: int_up = 0;
   A8B9 A8 18              5124 	mov	r0,_bp
   A8BB 08                 5125 	inc	r0
   A8BC 08                 5126 	inc	r0
   A8BD 76 00              5127 	mov	@r0,#0x00
                           5128 ;	../../shared/src/dcc_cal.c:670: int_dn = 0;
   A8BF A8 18              5129 	mov	r0,_bp
   A8C1 08                 5130 	inc	r0
   A8C2 76 00              5131 	mov	@r0,#0x00
                           5132 ;	../../shared/src/dcc_cal.c:672: if (in_cont_mode) { //continious calibration
   A8C4 D0 05              5133 	pop	ar5
   A8C6 E5 18              5134 	mov	a,_bp
   A8C8 24 06              5135 	add	a,#0x06
   A8CA F8                 5136 	mov	r0,a
   A8CB E6                 5137 	mov	a,@r0
   A8CC 60 6E              5138 	jz	00144$
                           5139 ;	../../shared/src/dcc_cal.c:673: if (latched_RXDCC_DN) {rxdcc_eom_step_cnt--;}
   A8CE EA                 5140 	mov	a,r2
   A8CF 60 0B              5141 	jz	00133$
   A8D1 90 66 08           5142 	mov	dptr,#_rxdcc_eom_step_cnt
   A8D4 E0                 5143 	movx	a,@dptr
   A8D5 14                 5144 	dec	a
   A8D6 90 66 08           5145 	mov	dptr,#_rxdcc_eom_step_cnt
   A8D9 F0                 5146 	movx	@dptr,a
   A8DA 80 07              5147 	sjmp	00134$
   A8DC                    5148 00133$:
                           5149 ;	../../shared/src/dcc_cal.c:674: else                  {rxdcc_eom_step_cnt++;}
   A8DC 90 66 08           5150 	mov	dptr,#_rxdcc_eom_step_cnt
   A8DF E0                 5151 	movx	a,@dptr
   A8E0 24 01              5152 	add	a,#0x01
   A8E2 F0                 5153 	movx	@dptr,a
   A8E3                    5154 00134$:
                           5155 ;	../../shared/src/dcc_cal.c:676: if( rxdcc_eom_step_cnt == 0) {
   A8E3 90 66 08           5156 	mov	dptr,#_rxdcc_eom_step_cnt
   A8E6 E0                 5157 	movx	a,@dptr
   A8E7 FE                 5158 	mov	r6,a
   A8E8 70 19              5159 	jnz	00138$
                           5160 ;	../../shared/src/dcc_cal.c:677: int_up = 0;
   A8EA C0 05              5161 	push	ar5
   A8EC A8 18              5162 	mov	r0,_bp
   A8EE 08                 5163 	inc	r0
   A8EF 08                 5164 	inc	r0
   A8F0 76 00              5165 	mov	@r0,#0x00
                           5166 ;	../../shared/src/dcc_cal.c:678: int_dn = 1;
   A8F2 A8 18              5167 	mov	r0,_bp
   A8F4 08                 5168 	inc	r0
   A8F5 76 01              5169 	mov	@r0,#0x01
                           5170 ;	../../shared/src/dcc_cal.c:679: rxdcc_eom_step_cnt = RXDCC_EOM_CAL_STEP_SIZE;  //after up/dn triggered, reset fraction code to middle
   A8F7 90 E6 38           5171 	mov	dptr,#_CON_CAL_STEP_SIZE2
   A8FA E0                 5172 	movx	a,@dptr
   A8FB 90 66 08           5173 	mov	dptr,#_rxdcc_eom_step_cnt
   A8FE F0                 5174 	movx	@dptr,a
   A8FF D0 05              5175 	pop	ar5
   A901 80 54              5176 	sjmp	00145$
   A903                    5177 00138$:
                           5178 ;	../../shared/src/dcc_cal.c:681: else if(rxdcc_eom_step_cnt>=(RXDCC_EOM_CAL_STEP_SIZE<<1)) {
   A903 C0 05              5179 	push	ar5
   A905 90 E6 38           5180 	mov	dptr,#_CON_CAL_STEP_SIZE2
   A908 E0                 5181 	movx	a,@dptr
   A909 FD                 5182 	mov	r5,a
   A90A E4                 5183 	clr	a
   A90B CD                 5184 	xch	a,r5
   A90C 25 E0              5185 	add	a,acc
   A90E CD                 5186 	xch	a,r5
   A90F 33                 5187 	rlc	a
   A910 FA                 5188 	mov	r2,a
   A911 8E 07              5189 	mov	ar7,r6
   A913 7E 00              5190 	mov	r6,#0x00
   A915 C3                 5191 	clr	c
   A916 EF                 5192 	mov	a,r7
   A917 9D                 5193 	subb	a,r5
   A918 EE                 5194 	mov	a,r6
   A919 64 80              5195 	xrl	a,#0x80
   A91B 8A F0              5196 	mov	b,r2
   A91D 63 F0 80           5197 	xrl	b,#0x80
   A920 95 F0              5198 	subb	a,b
   A922 D0 05              5199 	pop	ar5
   A924 40 31              5200 	jc	00145$
                           5201 ;	../../shared/src/dcc_cal.c:682: int_up = 1;
   A926 A8 18              5202 	mov	r0,_bp
   A928 08                 5203 	inc	r0
   A929 08                 5204 	inc	r0
   A92A 76 01              5205 	mov	@r0,#0x01
                           5206 ;	../../shared/src/dcc_cal.c:683: int_dn = 0;
   A92C A8 18              5207 	mov	r0,_bp
   A92E 08                 5208 	inc	r0
   A92F 76 00              5209 	mov	@r0,#0x00
                           5210 ;	../../shared/src/dcc_cal.c:684: rxdcc_eom_step_cnt = RXDCC_EOM_CAL_STEP_SIZE;  //after up/dn triggered, reset fraction code to middle
   A931 90 E6 38           5211 	mov	dptr,#_CON_CAL_STEP_SIZE2
   A934 E0                 5212 	movx	a,@dptr
   A935 FA                 5213 	mov	r2,a
   A936 90 66 08           5214 	mov	dptr,#_rxdcc_eom_step_cnt
   A939 F0                 5215 	movx	@dptr,a
   A93A 80 1B              5216 	sjmp	00145$
   A93C                    5217 00144$:
                           5218 ;	../../shared/src/dcc_cal.c:688: if (latched_RXDCC_DN) {int_up = 0; int_dn = 1;}
   A93C EA                 5219 	mov	a,r2
   A93D 60 0D              5220 	jz	00141$
   A93F A8 18              5221 	mov	r0,_bp
   A941 08                 5222 	inc	r0
   A942 08                 5223 	inc	r0
   A943 76 00              5224 	mov	@r0,#0x00
   A945 A8 18              5225 	mov	r0,_bp
   A947 08                 5226 	inc	r0
   A948 76 01              5227 	mov	@r0,#0x01
   A94A 80 0B              5228 	sjmp	00145$
   A94C                    5229 00141$:
                           5230 ;	../../shared/src/dcc_cal.c:689: else                  {int_up = 1; int_dn = 0;}
   A94C A8 18              5231 	mov	r0,_bp
   A94E 08                 5232 	inc	r0
   A94F 08                 5233 	inc	r0
   A950 76 01              5234 	mov	@r0,#0x01
   A952 A8 18              5235 	mov	r0,_bp
   A954 08                 5236 	inc	r0
   A955 76 00              5237 	mov	@r0,#0x00
   A957                    5238 00145$:
                           5239 ;	../../shared/src/dcc_cal.c:692: if (int_dn == 1) {
   A957 A8 18              5240 	mov	r0,_bp
   A959 08                 5241 	inc	r0
   A95A B6 01 19           5242 	cjne	@r0,#0x01,00149$
                           5243 ;	../../shared/src/dcc_cal.c:693: dcc_cnt = sign_abs_dn(dcc_cnt);
   A95D 8B 82              5244 	mov	dpl,r3
   A95F C0 04              5245 	push	ar4
   A961 C0 05              5246 	push	ar5
   A963 78 55              5247 	mov	r0,#_sign_abs_dn
   A965 79 BD              5248 	mov	r1,#(_sign_abs_dn >> 8)
   A967 7A 02              5249 	mov	r2,#(_sign_abs_dn >> 16)
   A969 12 00 B3           5250 	lcall	__sdcc_banked_call
   A96C AA 82              5251 	mov	r2,dpl
   A96E D0 05              5252 	pop	ar5
   A970 D0 04              5253 	pop	ar4
   A972 8A 03              5254 	mov	ar3,r2
   A974 80 27              5255 	sjmp	00150$
   A976                    5256 00149$:
                           5257 ;	../../shared/src/dcc_cal.c:695: else if (int_up == 1) {
   A976 A8 18              5258 	mov	r0,_bp
   A978 08                 5259 	inc	r0
   A979 08                 5260 	inc	r0
   A97A B6 01 20           5261 	cjne	@r0,#0x01,00150$
                           5262 ;	../../shared/src/dcc_cal.c:696: dir |= 1;
   A97D E5 18              5263 	mov	a,_bp
   A97F 24 03              5264 	add	a,#0x03
   A981 F8                 5265 	mov	r0,a
   A982 E6                 5266 	mov	a,@r0
   A983 44 01              5267 	orl	a,#0x01
   A985 F6                 5268 	mov	@r0,a
                           5269 ;	../../shared/src/dcc_cal.c:697: dcc_cnt = sign_abs_up(dcc_cnt);
   A986 8B 82              5270 	mov	dpl,r3
   A988 C0 04              5271 	push	ar4
   A98A C0 05              5272 	push	ar5
   A98C 78 33              5273 	mov	r0,#_sign_abs_up
   A98E 79 BD              5274 	mov	r1,#(_sign_abs_up >> 8)
   A990 7A 02              5275 	mov	r2,#(_sign_abs_up >> 16)
   A992 12 00 B3           5276 	lcall	__sdcc_banked_call
   A995 AA 82              5277 	mov	r2,dpl
   A997 D0 05              5278 	pop	ar5
   A999 D0 04              5279 	pop	ar4
   A99B 8A 03              5280 	mov	ar3,r2
   A99D                    5281 00150$:
                           5282 ;	../../shared/src/dcc_cal.c:699: dir<<=1;
   A99D E5 18              5283 	mov	a,_bp
   A99F 24 03              5284 	add	a,#0x03
   A9A1 F8                 5285 	mov	r0,a
   A9A2 E6                 5286 	mov	a,@r0
   A9A3 25 E0              5287 	add	a,acc
   A9A5 F6                 5288 	mov	@r0,a
                           5289 ;	../../shared/src/dcc_cal.c:700: dir = dir & 0x3f;
   A9A6 E5 18              5290 	mov	a,_bp
   A9A8 24 03              5291 	add	a,#0x03
   A9AA F8                 5292 	mov	r0,a
   A9AB E6                 5293 	mov	a,@r0
   A9AC 54 3F              5294 	anl	a,#0x3F
   A9AE F6                 5295 	mov	@r0,a
                           5296 ;	../../shared/src/dcc_cal.c:704: if (in_power_on && ( ( dcc_cnt & 0x1f ) == 24) && (hg_set == 0)){
   A9AF E5 18              5297 	mov	a,_bp
   A9B1 24 05              5298 	add	a,#0x05
   A9B3 F8                 5299 	mov	r0,a
   A9B4 E6                 5300 	mov	a,@r0
   A9B5 70 03              5301 	jnz	00229$
   A9B7 02 A7 DF           5302 	ljmp	00155$
   A9BA                    5303 00229$:
   A9BA 74 1F              5304 	mov	a,#0x1F
   A9BC 5B                 5305 	anl	a,r3
   A9BD FA                 5306 	mov	r2,a
   A9BE BA 18 02           5307 	cjne	r2,#0x18,00230$
   A9C1 80 03              5308 	sjmp	00231$
   A9C3                    5309 00230$:
   A9C3 02 A7 DF           5310 	ljmp	00155$
   A9C6                    5311 00231$:
   A9C6 E5 18              5312 	mov	a,_bp
   A9C8 24 07              5313 	add	a,#0x07
   A9CA F8                 5314 	mov	r0,a
   A9CB E6                 5315 	mov	a,@r0
   A9CC 60 03              5316 	jz	00232$
   A9CE 02 A7 DF           5317 	ljmp	00155$
   A9D1                    5318 00232$:
                           5319 ;	../../shared/src/dcc_cal.c:706: RXDCC_HG_EOMCLK = 1;
   A9D1 90 00 40           5320 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_16
   A9D4 E0                 5321 	movx	a,@dptr
   A9D5 44 02              5322 	orl	a,#0x02
   A9D7 F0                 5323 	movx	@dptr,a
                           5324 ;	../../shared/src/dcc_cal.c:707: hg_set = 1;
   A9D8 E5 18              5325 	mov	a,_bp
   A9DA 24 07              5326 	add	a,#0x07
   A9DC F8                 5327 	mov	r0,a
   A9DD 76 01              5328 	mov	@r0,#0x01
                           5329 ;	../../shared/src/dcc_cal.c:708: dcc_cnt = 0x20;
   A9DF 7B 20              5330 	mov	r3,#0x20
                           5331 ;	../../shared/src/dcc_cal.c:709: time_out_cnt = 0;
   A9E1 7C 00              5332 	mov	r4,#0x00
                           5333 ;	../../shared/src/dcc_cal.c:712: } while (1);
   A9E3 02 A7 DF           5334 	ljmp	00155$
   A9E6                    5335 00157$:
                           5336 ;	../../shared/src/dcc_cal.c:715: if (lnx_CAL_DONE_LANE == 0) {                            //if power-on calibration
   A9E6 90 60 03           5337 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   A9E9 E0                 5338 	movx	a,@dptr
   A9EA 20 E0 2F           5339 	jb	acc.0,00159$
                           5340 ;	../../shared/src/dcc_cal.c:716: lnx_cal_rxdcc_eom[PWR][gen] = dcc_cnt;       //save to power-on result
   A9ED E5 18              5341 	mov	a,_bp
   A9EF 24 04              5342 	add	a,#0x04
   A9F1 F8                 5343 	mov	r0,a
   A9F2 E6                 5344 	mov	a,@r0
   A9F3 24 F5              5345 	add	a,#_lnx_cal_rxdcc_eom
   A9F5 F5 82              5346 	mov	dpl,a
   A9F7 E4                 5347 	clr	a
   A9F8 34 65              5348 	addc	a,#(_lnx_cal_rxdcc_eom >> 8)
   A9FA F5 83              5349 	mov	dph,a
   A9FC EB                 5350 	mov	a,r3
   A9FD F0                 5351 	movx	@dptr,a
                           5352 ;	../../shared/src/dcc_cal.c:717: lnx_cal_rxdcc_eom_hg[gen] = (RXDCC_HG_EOMCLK & 0x01) | 0x0; //save the HG setting for current rate, will be loaded by continious mode
   A9FE E5 18              5353 	mov	a,_bp
   AA00 24 04              5354 	add	a,#0x04
   AA02 F8                 5355 	mov	r0,a
   AA03 E6                 5356 	mov	a,@r0
   AA04 24 FF              5357 	add	a,#_lnx_cal_rxdcc_eom_hg
   AA06 FA                 5358 	mov	r2,a
   AA07 E4                 5359 	clr	a
   AA08 34 65              5360 	addc	a,#(_lnx_cal_rxdcc_eom_hg >> 8)
   AA0A FC                 5361 	mov	r4,a
   AA0B 90 00 40           5362 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_16
   AA0E E0                 5363 	movx	a,@dptr
   AA0F 03                 5364 	rr	a
   AA10 54 01              5365 	anl	a,#0x01
   AA12 FE                 5366 	mov	r6,a
   AA13 53 06 01           5367 	anl	ar6,#0x01
   AA16 8A 82              5368 	mov	dpl,r2
   AA18 8C 83              5369 	mov	dph,r4
   AA1A EE                 5370 	mov	a,r6
   AA1B F0                 5371 	movx	@dptr,a
   AA1C                    5372 00159$:
                           5373 ;	../../shared/src/dcc_cal.c:719: lnx_cal_rxdcc_eom[CONT][gen] = dcc_cnt;     //no matter power-on or LOAD or continuous, need to save to [CONT]
   AA1C E5 18              5374 	mov	a,_bp
   AA1E 24 04              5375 	add	a,#0x04
   AA20 F8                 5376 	mov	r0,a
   AA21 E6                 5377 	mov	a,@r0
   AA22 24 FA              5378 	add	a,#(_lnx_cal_rxdcc_eom + 0x0005)
   AA24 F5 82              5379 	mov	dpl,a
   AA26 E4                 5380 	clr	a
   AA27 34 65              5381 	addc	a,#((_lnx_cal_rxdcc_eom + 0x0005) >> 8)
   AA29 F5 83              5382 	mov	dph,a
   AA2B EB                 5383 	mov	a,r3
   AA2C F0                 5384 	movx	@dptr,a
                           5385 ;	../../shared/src/dcc_cal.c:722: if (saved_eom_clk_en == 0) {   //set EOM_CLK_EN back to 0 if it was 0 before power-on calibration
   AA2D ED                 5386 	mov	a,r5
   AA2E 70 07              5387 	jnz	00161$
                           5388 ;	../../shared/src/dcc_cal.c:723: EOM_CLK_EN = 0;
   AA30 90 02 18           5389 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_134
   AA33 E0                 5390 	movx	a,@dptr
   AA34 54 FB              5391 	anl	a,#0xfb
   AA36 F0                 5392 	movx	@dptr,a
   AA37                    5393 00161$:
                           5394 ;	../../shared/src/dcc_cal.c:725: RXDCC_CAL_EN = 0;
   AA37 90 00 40           5395 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_16
   AA3A E0                 5396 	movx	a,@dptr
   AA3B 54 FE              5397 	anl	a,#0xfe
   AA3D F0                 5398 	movx	@dptr,a
                           5399 ;	../../shared/src/dcc_cal.c:726: lnx_RXDCC_EOM_CAL_DONE_LANE = 1;
   AA3E 90 60 01           5400 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0001)
   AA41 E0                 5401 	movx	a,@dptr
   AA42 44 01              5402 	orl	a,#0x01
   AA44 F0                 5403 	movx	@dptr,a
   AA45                    5404 00162$:
   AA45 85 18 81           5405 	mov	sp,_bp
   AA48 D0 18              5406 	pop	_bp
   AA4A 02 00 C5           5407 	ljmp	__sdcc_banked_ret
                           5408 	.area CSEG    (CODE)
                           5409 	.area BANK2   (CODE)
                           5410 	.area CABS    (ABS,CODE)
