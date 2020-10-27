                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:22:02 2018
                              5 ;--------------------------------------------------------
                              6 	.module printf
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
                            979 ;--------------------------------------------------------
                            980 ; special function registers
                            981 ;--------------------------------------------------------
                            982 	.area RSEG    (ABS,DATA)
   0000                     983 	.org 0x0000
                    0080    984 _P0	=	0x0080
                    0082    985 _DPL	=	0x0082
                    0083    986 _DPH	=	0x0083
                    0086    987 _WDTREL	=	0x0086
                    0087    988 _PCON	=	0x0087
                    0088    989 _TCON	=	0x0088
                    0089    990 _TMOD	=	0x0089
                    008A    991 _TL0	=	0x008a
                    008B    992 _TL1	=	0x008b
                    008C    993 _TH0	=	0x008c
                    008D    994 _TH1	=	0x008d
                    008E    995 _CKCON	=	0x008e
                    0090    996 _P1	=	0x0090
                    0092    997 _DPS	=	0x0092
                    0094    998 _PSBANK	=	0x0094
                    0098    999 _SCON	=	0x0098
                    0099   1000 _SBUF	=	0x0099
                    009A   1001 _IEN2	=	0x009a
                    00A0   1002 _P2	=	0x00a0
                    00A1   1003 _DMAS0	=	0x00a1
                    00A2   1004 _DMAS1	=	0x00a2
                    00A3   1005 _DMAS2	=	0x00a3
                    00A4   1006 _DMAT0	=	0x00a4
                    00A5   1007 _DMAT1	=	0x00a5
                    00A6   1008 _DMAT2	=	0x00a6
                    00A8   1009 _IEN0	=	0x00a8
                    00A9   1010 _IP0	=	0x00a9
                    00AA   1011 _S0RELL	=	0x00aa
                    00B0   1012 _P3	=	0x00b0
                    00B1   1013 _DMAC0	=	0x00b1
                    00B2   1014 _DMAC1	=	0x00b2
                    00B3   1015 _DMAC2	=	0x00b3
                    00B4   1016 _DMASEL	=	0x00b4
                    00B5   1017 _DMAM0	=	0x00b5
                    00B6   1018 _DMAM1	=	0x00b6
                    00B8   1019 _IEN1	=	0x00b8
                    00B9   1020 _IP1	=	0x00b9
                    00BA   1021 _S0RELH	=	0x00ba
                    00C0   1022 _IRCON	=	0x00c0
                    00C1   1023 _CCEN	=	0x00c1
                    00C8   1024 _T2CON	=	0x00c8
                    00CA   1025 _RCAP2L	=	0x00ca
                    00CB   1026 _RCAP2H	=	0x00cb
                    00CC   1027 _TL2	=	0x00cc
                    00CD   1028 _TH2	=	0x00cd
                    00D0   1029 _PSW	=	0x00d0
                    00D8   1030 _ADCON	=	0x00d8
                    00E0   1031 _ACC	=	0x00e0
                    00E8   1032 _EIE	=	0x00e8
                    00F0   1033 _B	=	0x00f0
                    00F7   1034 _SRST	=	0x00f7
                    8C8A   1035 _TMR0	=	0x8c8a
                    8D8B   1036 _TMR1	=	0x8d8b
                    CDCC   1037 _TMR2	=	0xcdcc
                    A2A1   1038 _DMASA	=	0xa2a1
                    A5A4   1039 _DMATA	=	0xa5a4
                    B2B1   1040 _DMAC	=	0xb2b1
                           1041 ;--------------------------------------------------------
                           1042 ; special function bits
                           1043 ;--------------------------------------------------------
                           1044 	.area RSEG    (ABS,DATA)
   0000                    1045 	.org 0x0000
                    0080   1046 _P0_0	=	0x0080
                    0081   1047 _P0_1	=	0x0081
                    0082   1048 _P0_2	=	0x0082
                    0083   1049 _P0_3	=	0x0083
                    0084   1050 _P0_4	=	0x0084
                    0085   1051 _P0_5	=	0x0085
                    0086   1052 _P0_6	=	0x0086
                    0087   1053 _P0_7	=	0x0087
                    0090   1054 _P1_0	=	0x0090
                    0091   1055 _P1_1	=	0x0091
                    0092   1056 _P1_2	=	0x0092
                    0093   1057 _P1_3	=	0x0093
                    0094   1058 _P1_4	=	0x0094
                    0095   1059 _P1_5	=	0x0095
                    0096   1060 _P1_6	=	0x0096
                    0097   1061 _P1_7	=	0x0097
                    00A0   1062 _P2_0	=	0x00a0
                    00A1   1063 _P2_1	=	0x00a1
                    00A2   1064 _P2_2	=	0x00a2
                    00A3   1065 _P2_3	=	0x00a3
                    00A4   1066 _P2_4	=	0x00a4
                    00A5   1067 _P2_5	=	0x00a5
                    00A6   1068 _P2_6	=	0x00a6
                    00A7   1069 _P2_7	=	0x00a7
                    00B0   1070 _P3_0	=	0x00b0
                    00B1   1071 _P3_1	=	0x00b1
                    00B2   1072 _P3_2	=	0x00b2
                    00B3   1073 _P3_3	=	0x00b3
                    00B4   1074 _P3_4	=	0x00b4
                    00B5   1075 _P3_5	=	0x00b5
                    00B6   1076 _P3_6	=	0x00b6
                    00B7   1077 _P3_7	=	0x00b7
                    0088   1078 _IT0	=	0x0088
                    0089   1079 _IE0	=	0x0089
                    008A   1080 _IT1	=	0x008a
                    008B   1081 _IE1	=	0x008b
                    008C   1082 _TR0	=	0x008c
                    008D   1083 _TF0	=	0x008d
                    008E   1084 _TR1	=	0x008e
                    008F   1085 _TF1	=	0x008f
                    00A8   1086 _EX0	=	0x00a8
                    00A9   1087 _ET0	=	0x00a9
                    00AA   1088 _EX1	=	0x00aa
                    00AB   1089 _ET1	=	0x00ab
                    00AC   1090 _ES	=	0x00ac
                    00AD   1091 _ET2	=	0x00ad
                    00AE   1092 _WDT	=	0x00ae
                    00AF   1093 _EA	=	0x00af
                    00B8   1094 _EX7	=	0x00b8
                    00B9   1095 _EX2	=	0x00b9
                    00BA   1096 _EX3	=	0x00ba
                    00BB   1097 _EX4	=	0x00bb
                    00BC   1098 _EX5	=	0x00bc
                    00BD   1099 _EX6	=	0x00bd
                    00BE   1100 _PS1	=	0x00be
                    009A   1101 _ES1	=	0x009a
                    009B   1102 _EX8	=	0x009b
                    009C   1103 _EX9	=	0x009c
                    009D   1104 _EX10	=	0x009d
                    009E   1105 _EX11	=	0x009e
                    009F   1106 _EX12	=	0x009f
                    0098   1107 _RI	=	0x0098
                    0099   1108 _TI	=	0x0099
                    00C6   1109 _TF2	=	0x00c6
                           1110 ;--------------------------------------------------------
                           1111 ; overlayable register banks
                           1112 ;--------------------------------------------------------
                           1113 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1114 	.ds 8
                           1115 ;--------------------------------------------------------
                           1116 ; internal ram data
                           1117 ;--------------------------------------------------------
                           1118 	.area DSEG    (DATA)
                           1119 ;--------------------------------------------------------
                           1120 ; overlayable items in internal ram 
                           1121 ;--------------------------------------------------------
                           1122 	.area OSEG    (OVR,DATA)
                           1123 ;--------------------------------------------------------
                           1124 ; indirectly addressable internal ram data
                           1125 ;--------------------------------------------------------
                           1126 	.area ISEG    (DATA)
                           1127 ;--------------------------------------------------------
                           1128 ; absolute internal ram data
                           1129 ;--------------------------------------------------------
                           1130 	.area IABS    (ABS,DATA)
                           1131 	.area IABS    (ABS,DATA)
                           1132 ;--------------------------------------------------------
                           1133 ; bit data
                           1134 ;--------------------------------------------------------
                           1135 	.area BSEG    (BIT)
                           1136 ;--------------------------------------------------------
                           1137 ; paged external ram data
                           1138 ;--------------------------------------------------------
                           1139 	.area PSEG    (PAG,XDATA)
                           1140 ;--------------------------------------------------------
                           1141 ; external ram data
                           1142 ;--------------------------------------------------------
                           1143 	.area XSEG    (XDATA)
                    1000   1144 _UPHY14_TRX_LANEPLL_ANAREG_TOP_128	=	0x1000
                    1004   1145 _UPHY14_TRX_LANEPLL_ANAREG_TOP_129	=	0x1004
                    1008   1146 _UPHY14_TRX_LANEPLL_ANAREG_TOP_130	=	0x1008
                    100C   1147 _UPHY14_TRX_LANEPLL_ANAREG_TOP_131	=	0x100c
                    1010   1148 _UPHY14_TRX_LANEPLL_ANAREG_TOP_132	=	0x1010
                    1014   1149 _UPHY14_TRX_LANEPLL_ANAREG_TOP_133	=	0x1014
                    1018   1150 _UPHY14_TRX_LANEPLL_ANAREG_TOP_134	=	0x1018
                    101C   1151 _UPHY14_TRX_LANEPLL_ANAREG_TOP_135	=	0x101c
                    1020   1152 _UPHY14_TRX_LANEPLL_ANAREG_TOP_136	=	0x1020
                    1024   1153 _UPHY14_TRX_LANEPLL_ANAREG_TOP_137	=	0x1024
                    1028   1154 _UPHY14_TRX_LANEPLL_ANAREG_TOP_138	=	0x1028
                    102C   1155 _UPHY14_TRX_LANEPLL_ANAREG_TOP_139	=	0x102c
                    1030   1156 _UPHY14_TRX_LANEPLL_ANAREG_TOP_140	=	0x1030
                    1034   1157 _UPHY14_TRX_LANEPLL_ANAREG_TOP_141	=	0x1034
                    1038   1158 _UPHY14_TRX_LANEPLL_ANAREG_TOP_142	=	0x1038
                    103C   1159 _UPHY14_TRX_LANEPLL_ANAREG_TOP_143	=	0x103c
                    0200   1160 _UPHY14_TRX_ANAREG_TOP_128	=	0x0200
                    0204   1161 _UPHY14_TRX_ANAREG_TOP_129	=	0x0204
                    0208   1162 _UPHY14_TRX_ANAREG_TOP_130	=	0x0208
                    020C   1163 _UPHY14_TRX_ANAREG_TOP_131	=	0x020c
                    0210   1164 _UPHY14_TRX_ANAREG_TOP_132	=	0x0210
                    0214   1165 _UPHY14_TRX_ANAREG_TOP_133	=	0x0214
                    0218   1166 _UPHY14_TRX_ANAREG_TOP_134	=	0x0218
                    021C   1167 _UPHY14_TRX_ANAREG_TOP_135	=	0x021c
                    0220   1168 _UPHY14_TRX_ANAREG_TOP_136	=	0x0220
                    0224   1169 _UPHY14_TRX_ANAREG_TOP_137	=	0x0224
                    0228   1170 _UPHY14_TRX_ANAREG_TOP_138	=	0x0228
                    022C   1171 _UPHY14_TRX_ANAREG_TOP_139	=	0x022c
                    0230   1172 _UPHY14_TRX_ANAREG_TOP_140	=	0x0230
                    0234   1173 _UPHY14_TRX_ANAREG_TOP_141	=	0x0234
                    0238   1174 _UPHY14_TRX_ANAREG_TOP_142	=	0x0238
                    023C   1175 _UPHY14_TRX_ANAREG_TOP_143	=	0x023c
                    0240   1176 _UPHY14_TRX_ANAREG_TOP_144	=	0x0240
                    0244   1177 _UPHY14_TRX_ANAREG_TOP_145	=	0x0244
                    0248   1178 _UPHY14_TRX_ANAREG_TOP_146	=	0x0248
                    024C   1179 _UPHY14_TRX_ANAREG_TOP_147	=	0x024c
                    0250   1180 _UPHY14_TRX_ANAREG_TOP_148	=	0x0250
                    0254   1181 _UPHY14_TRX_ANAREG_TOP_149	=	0x0254
                    0258   1182 _UPHY14_TRX_ANAREG_TOP_150	=	0x0258
                    025C   1183 _UPHY14_TRX_ANAREG_TOP_151	=	0x025c
                    0260   1184 _UPHY14_TRX_ANAREG_TOP_152	=	0x0260
                    0264   1185 _UPHY14_TRX_ANAREG_TOP_153	=	0x0264
                    0268   1186 _UPHY14_TRX_ANAREG_TOP_154	=	0x0268
                    026C   1187 _UPHY14_TRX_ANAREG_TOP_155	=	0x026c
                    0270   1188 _UPHY14_TRX_ANAREG_TOP_156	=	0x0270
                    0274   1189 _UPHY14_TRX_ANAREG_TOP_157	=	0x0274
                    0000   1190 _UPHY14_TRX_ANAREG_BOT_0	=	0x0000
                    0004   1191 _UPHY14_TRX_ANAREG_BOT_1	=	0x0004
                    0008   1192 _UPHY14_TRX_ANAREG_BOT_2	=	0x0008
                    000C   1193 _UPHY14_TRX_ANAREG_BOT_3	=	0x000c
                    0010   1194 _UPHY14_TRX_ANAREG_BOT_4	=	0x0010
                    0014   1195 _UPHY14_TRX_ANAREG_BOT_5	=	0x0014
                    0018   1196 _UPHY14_TRX_ANAREG_BOT_6	=	0x0018
                    001C   1197 _UPHY14_TRX_ANAREG_BOT_7	=	0x001c
                    0020   1198 _UPHY14_TRX_ANAREG_BOT_8	=	0x0020
                    0024   1199 _UPHY14_TRX_ANAREG_BOT_9	=	0x0024
                    0028   1200 _UPHY14_TRX_ANAREG_BOT_10	=	0x0028
                    002C   1201 _UPHY14_TRX_ANAREG_BOT_11	=	0x002c
                    0030   1202 _UPHY14_TRX_ANAREG_BOT_12	=	0x0030
                    0034   1203 _UPHY14_TRX_ANAREG_BOT_13	=	0x0034
                    0038   1204 _UPHY14_TRX_ANAREG_BOT_14	=	0x0038
                    003C   1205 _UPHY14_TRX_ANAREG_BOT_15	=	0x003c
                    0040   1206 _UPHY14_TRX_ANAREG_BOT_16	=	0x0040
                    0044   1207 _UPHY14_TRX_ANAREG_BOT_17	=	0x0044
                    0048   1208 _UPHY14_TRX_ANAREG_BOT_18	=	0x0048
                    004C   1209 _UPHY14_TRX_ANAREG_BOT_19	=	0x004c
                    0050   1210 _UPHY14_TRX_ANAREG_BOT_20	=	0x0050
                    0054   1211 _UPHY14_TRX_ANAREG_BOT_21	=	0x0054
                    0058   1212 _UPHY14_TRX_ANAREG_BOT_22	=	0x0058
                    005C   1213 _UPHY14_TRX_ANAREG_BOT_23	=	0x005c
                    0060   1214 _UPHY14_TRX_ANAREG_BOT_24	=	0x0060
                    0064   1215 _UPHY14_TRX_ANAREG_BOT_25	=	0x0064
                    0068   1216 _UPHY14_TRX_ANAREG_BOT_26	=	0x0068
                    006C   1217 _UPHY14_TRX_ANAREG_BOT_27	=	0x006c
                    0070   1218 _UPHY14_TRX_ANAREG_BOT_28	=	0x0070
                    0074   1219 _UPHY14_TRX_ANAREG_BOT_29	=	0x0074
                    0078   1220 _UPHY14_TRX_ANAREG_BOT_30	=	0x0078
                    007C   1221 _UPHY14_TRX_ANAREG_BOT_31	=	0x007c
                    0080   1222 _UPHY14_TRX_ANAREG_BOT_32	=	0x0080
                    0478   1223 _ANA_DFEE_REG_1E	=	0x0478
                    047C   1224 _ANA_DFEE_REG_1F	=	0x047c
                    0480   1225 _ANA_DFEE_REG_20	=	0x0480
                    0484   1226 _ANA_DFEE_REG_21	=	0x0484
                    0488   1227 _ANA_DFEE_REG_22	=	0x0488
                    048C   1228 _ANA_DFEE_REG_23	=	0x048c
                    0490   1229 _ANA_DFEE_REG_24	=	0x0490
                    0494   1230 _ANA_DFEE_REG_25	=	0x0494
                    0498   1231 _ANA_DFEE_REG_26	=	0x0498
                    049C   1232 _ANA_DFEE_REG_27	=	0x049c
                    0400   1233 _ANA_DFEE_REG_00	=	0x0400
                    0404   1234 _ANA_DFEE_REG_01	=	0x0404
                    0408   1235 _ANA_DFEE_REG_02	=	0x0408
                    040C   1236 _ANA_DFEE_REG_03	=	0x040c
                    0410   1237 _ANA_DFEE_REG_04	=	0x0410
                    0414   1238 _ANA_DFEE_REG_05	=	0x0414
                    0418   1239 _ANA_DFEE_REG_06	=	0x0418
                    041C   1240 _ANA_DFEE_REG_07	=	0x041c
                    0420   1241 _ANA_DFEE_REG_08	=	0x0420
                    0424   1242 _ANA_DFEE_REG_09	=	0x0424
                    0428   1243 _ANA_DFEE_REG_0A	=	0x0428
                    042C   1244 _ANA_DFEE_REG_0B	=	0x042c
                    0430   1245 _ANA_DFEE_REG_0C	=	0x0430
                    0434   1246 _ANA_DFEE_REG_0D	=	0x0434
                    0438   1247 _ANA_DFEE_REG_0E	=	0x0438
                    043C   1248 _ANA_DFEE_REG_0F	=	0x043c
                    0440   1249 _ANA_DFEE_REG_10	=	0x0440
                    0444   1250 _ANA_DFEE_REG_11	=	0x0444
                    0448   1251 _ANA_DFEE_REG_12	=	0x0448
                    044C   1252 _ANA_DFEE_REG_13	=	0x044c
                    0450   1253 _ANA_DFEE_REG_14	=	0x0450
                    0454   1254 _ANA_DFEE_REG_15	=	0x0454
                    0458   1255 _ANA_DFEE_REG_16	=	0x0458
                    045C   1256 _ANA_DFEE_REG_17	=	0x045c
                    0460   1257 _ANA_DFEE_REG_18	=	0x0460
                    0464   1258 _ANA_DFEE_REG_19	=	0x0464
                    0468   1259 _ANA_DFEE_REG_1A	=	0x0468
                    046C   1260 _ANA_DFEE_REG_1B	=	0x046c
                    0470   1261 _ANA_DFEE_REG_1C	=	0x0470
                    0474   1262 _ANA_DFEE_REG_1D	=	0x0474
                    0830   1263 _ANA_DFEO_REG_0C	=	0x0830
                    0834   1264 _ANA_DFEO_REG_0D	=	0x0834
                    0838   1265 _ANA_DFEO_REG_0E	=	0x0838
                    083C   1266 _ANA_DFEO_REG_0F	=	0x083c
                    0840   1267 _ANA_DFEO_REG_10	=	0x0840
                    0844   1268 _ANA_DFEO_REG_11	=	0x0844
                    0848   1269 _ANA_DFEO_REG_12	=	0x0848
                    084C   1270 _ANA_DFEO_REG_13	=	0x084c
                    0850   1271 _ANA_DFEO_REG_14	=	0x0850
                    0854   1272 _ANA_DFEO_REG_15	=	0x0854
                    0858   1273 _ANA_DFEO_REG_16	=	0x0858
                    085C   1274 _ANA_DFEO_REG_17	=	0x085c
                    0860   1275 _ANA_DFEO_REG_18	=	0x0860
                    0864   1276 _ANA_DFEO_REG_19	=	0x0864
                    0868   1277 _ANA_DFEO_REG_1A	=	0x0868
                    086C   1278 _ANA_DFEO_REG_1B	=	0x086c
                    0870   1279 _ANA_DFEO_REG_1C	=	0x0870
                    0874   1280 _ANA_DFEO_REG_1D	=	0x0874
                    0878   1281 _ANA_DFEO_REG_1E	=	0x0878
                    087C   1282 _ANA_DFEO_REG_1F	=	0x087c
                    0880   1283 _ANA_DFEO_REG_20	=	0x0880
                    0884   1284 _ANA_DFEO_REG_21	=	0x0884
                    0888   1285 _ANA_DFEO_REG_22	=	0x0888
                    088C   1286 _ANA_DFEO_REG_23	=	0x088c
                    0890   1287 _ANA_DFEO_REG_24	=	0x0890
                    0894   1288 _ANA_DFEO_REG_25	=	0x0894
                    0898   1289 _ANA_DFEO_REG_26	=	0x0898
                    089C   1290 _ANA_DFEO_REG_27	=	0x089c
                    0800   1291 _ANA_DFEO_REG_00	=	0x0800
                    0804   1292 _ANA_DFEO_REG_01	=	0x0804
                    0808   1293 _ANA_DFEO_REG_02	=	0x0808
                    080C   1294 _ANA_DFEO_REG_03	=	0x080c
                    0810   1295 _ANA_DFEO_REG_04	=	0x0810
                    0814   1296 _ANA_DFEO_REG_05	=	0x0814
                    0818   1297 _ANA_DFEO_REG_06	=	0x0818
                    081C   1298 _ANA_DFEO_REG_07	=	0x081c
                    0820   1299 _ANA_DFEO_REG_08	=	0x0820
                    0824   1300 _ANA_DFEO_REG_09	=	0x0824
                    0828   1301 _ANA_DFEO_REG_0A	=	0x0828
                    082C   1302 _ANA_DFEO_REG_0B	=	0x082c
                    8200   1303 _UPHY14_CMN_ANAREG_TOP_128	=	0x8200
                    8204   1304 _UPHY14_CMN_ANAREG_TOP_129	=	0x8204
                    8208   1305 _UPHY14_CMN_ANAREG_TOP_130	=	0x8208
                    820C   1306 _UPHY14_CMN_ANAREG_TOP_131	=	0x820c
                    8210   1307 _UPHY14_CMN_ANAREG_TOP_132	=	0x8210
                    8214   1308 _UPHY14_CMN_ANAREG_TOP_133	=	0x8214
                    8218   1309 _UPHY14_CMN_ANAREG_TOP_134	=	0x8218
                    821C   1310 _UPHY14_CMN_ANAREG_TOP_135	=	0x821c
                    8220   1311 _UPHY14_CMN_ANAREG_TOP_136	=	0x8220
                    8224   1312 _UPHY14_CMN_ANAREG_TOP_137	=	0x8224
                    8228   1313 _UPHY14_CMN_ANAREG_TOP_138	=	0x8228
                    822C   1314 _UPHY14_CMN_ANAREG_TOP_139	=	0x822c
                    8230   1315 _UPHY14_CMN_ANAREG_TOP_140	=	0x8230
                    8234   1316 _UPHY14_CMN_ANAREG_TOP_141	=	0x8234
                    8238   1317 _UPHY14_CMN_ANAREG_TOP_142	=	0x8238
                    823C   1318 _UPHY14_CMN_ANAREG_TOP_143	=	0x823c
                    8240   1319 _UPHY14_CMN_ANAREG_TOP_144	=	0x8240
                    8244   1320 _UPHY14_CMN_ANAREG_TOP_145	=	0x8244
                    8248   1321 _UPHY14_CMN_ANAREG_TOP_146	=	0x8248
                    824C   1322 _UPHY14_CMN_ANAREG_TOP_147	=	0x824c
                    8250   1323 _UPHY14_CMN_ANAREG_TOP_148	=	0x8250
                    8254   1324 _UPHY14_CMN_ANAREG_TOP_149	=	0x8254
                    8258   1325 _UPHY14_CMN_ANAREG_TOP_150	=	0x8258
                    825C   1326 _UPHY14_CMN_ANAREG_TOP_151	=	0x825c
                    8260   1327 _UPHY14_CMN_ANAREG_TOP_152	=	0x8260
                    8264   1328 _UPHY14_CMN_ANAREG_TOP_153	=	0x8264
                    8268   1329 _UPHY14_CMN_ANAREG_TOP_154	=	0x8268
                    826C   1330 _UPHY14_CMN_ANAREG_TOP_155	=	0x826c
                    8270   1331 _UPHY14_CMN_ANAREG_TOP_156	=	0x8270
                    8274   1332 _UPHY14_CMN_ANAREG_TOP_157	=	0x8274
                    8278   1333 _UPHY14_CMN_ANAREG_TOP_158	=	0x8278
                    827C   1334 _UPHY14_CMN_ANAREG_TOP_159	=	0x827c
                    8280   1335 _UPHY14_CMN_ANAREG_TOP_160	=	0x8280
                    8284   1336 _UPHY14_CMN_ANAREG_TOP_161	=	0x8284
                    8288   1337 _UPHY14_CMN_ANAREG_TOP_162	=	0x8288
                    828C   1338 _UPHY14_CMN_ANAREG_TOP_163	=	0x828c
                    8290   1339 _UPHY14_CMN_ANAREG_TOP_164	=	0x8290
                    8294   1340 _UPHY14_CMN_ANAREG_TOP_165	=	0x8294
                    8298   1341 _UPHY14_CMN_ANAREG_TOP_166	=	0x8298
                    829C   1342 _UPHY14_CMN_ANAREG_TOP_167	=	0x829c
                    82A0   1343 _UPHY14_CMN_ANAREG_TOP_168	=	0x82a0
                    82A4   1344 _UPHY14_CMN_ANAREG_TOP_169	=	0x82a4
                    82A8   1345 _UPHY14_CMN_ANAREG_TOP_170	=	0x82a8
                    82AC   1346 _UPHY14_CMN_ANAREG_TOP_171	=	0x82ac
                    82B0   1347 _UPHY14_CMN_ANAREG_TOP_172	=	0x82b0
                    82B4   1348 _UPHY14_CMN_ANAREG_TOP_173	=	0x82b4
                    82B8   1349 _UPHY14_CMN_ANAREG_TOP_174	=	0x82b8
                    82BC   1350 _UPHY14_CMN_ANAREG_TOP_175	=	0x82bc
                    82C0   1351 _UPHY14_CMN_ANAREG_TOP_176	=	0x82c0
                    82C4   1352 _UPHY14_CMN_ANAREG_TOP_177	=	0x82c4
                    82C8   1353 _UPHY14_CMN_ANAREG_TOP_178	=	0x82c8
                    82CC   1354 _UPHY14_CMN_ANAREG_TOP_179	=	0x82cc
                    82D0   1355 _UPHY14_CMN_ANAREG_TOP_180	=	0x82d0
                    82D4   1356 _UPHY14_CMN_ANAREG_TOP_181	=	0x82d4
                    82D8   1357 _UPHY14_CMN_ANAREG_TOP_182	=	0x82d8
                    82DC   1358 _UPHY14_CMN_ANAREG_TOP_183	=	0x82dc
                    82E0   1359 _UPHY14_CMN_ANAREG_TOP_184	=	0x82e0
                    82E4   1360 _UPHY14_CMN_ANAREG_TOP_185	=	0x82e4
                    82E8   1361 _UPHY14_CMN_ANAREG_TOP_186	=	0x82e8
                    82EC   1362 _UPHY14_CMN_ANAREG_TOP_187	=	0x82ec
                    82F0   1363 _UPHY14_CMN_ANAREG_TOP_188	=	0x82f0
                    82F4   1364 _UPHY14_CMN_ANAREG_TOP_189	=	0x82f4
                    82F8   1365 _UPHY14_CMN_ANAREG_TOP_190	=	0x82f8
                    82FC   1366 _UPHY14_CMN_ANAREG_TOP_191	=	0x82fc
                    8300   1367 _UPHY14_CMN_ANAREG_TOP_192	=	0x8300
                    8304   1368 _UPHY14_CMN_ANAREG_TOP_193	=	0x8304
                    8308   1369 _UPHY14_CMN_ANAREG_TOP_194	=	0x8308
                    830C   1370 _UPHY14_CMN_ANAREG_TOP_195	=	0x830c
                    8310   1371 _UPHY14_CMN_ANAREG_TOP_196	=	0x8310
                    8314   1372 _UPHY14_CMN_ANAREG_TOP_197	=	0x8314
                    8318   1373 _UPHY14_CMN_ANAREG_TOP_198	=	0x8318
                    831C   1374 _UPHY14_CMN_ANAREG_TOP_199	=	0x831c
                    8320   1375 _UPHY14_CMN_ANAREG_TOP_200	=	0x8320
                    8324   1376 _UPHY14_CMN_ANAREG_TOP_201	=	0x8324
                    8328   1377 _UPHY14_CMN_ANAREG_TOP_202	=	0x8328
                    832C   1378 _UPHY14_CMN_ANAREG_TOP_203	=	0x832c
                    8330   1379 _UPHY14_CMN_ANAREG_TOP_204	=	0x8330
                    8334   1380 _UPHY14_CMN_ANAREG_TOP_205	=	0x8334
                    8338   1381 _UPHY14_CMN_ANAREG_TOP_206	=	0x8338
                    833C   1382 _UPHY14_CMN_ANAREG_TOP_207	=	0x833c
                    8340   1383 _UPHY14_CMN_ANAREG_TOP_208	=	0x8340
                    8344   1384 _UPHY14_CMN_ANAREG_TOP_209	=	0x8344
                    8348   1385 _UPHY14_CMN_ANAREG_TOP_210	=	0x8348
                    834C   1386 _UPHY14_CMN_ANAREG_TOP_211	=	0x834c
                    8350   1387 _UPHY14_CMN_ANAREG_TOP_212	=	0x8350
                    8354   1388 _UPHY14_CMN_ANAREG_TOP_213	=	0x8354
                    8358   1389 _UPHY14_CMN_ANAREG_TOP_214	=	0x8358
                    2000   1390 _PM_CTRL_TX_LANE_REG1_LANE	=	0x2000
                    2004   1391 _PM_CTRL_TX_LANE_REG2_LANE	=	0x2004
                    2008   1392 _INPUT_TX_PIN_REG0_LANE	=	0x2008
                    200C   1393 _INPUT_TX_PIN_REG1_LANE	=	0x200c
                    2010   1394 _INPUT_TX_PIN_REG2_LANE	=	0x2010
                    2014   1395 _INPUT_TX_PIN_REG3_LANE	=	0x2014
                    2018   1396 _PM_CTRL_INTERRUPT_REG1_LANE	=	0x2018
                    201C   1397 _PM_CTRL_INTERRUPT_REG2	=	0x201c
                    2020   1398 _CLKGEN_TX_LANE_REG1_LANE	=	0x2020
                    2024   1399 _TX_SPEED_CONVERT_LANE	=	0x2024
                    2028   1400 _SPD_CTRL_INTERRUPT_REG1_LANE	=	0x2028
                    202C   1401 _SPD_CTRL_INTERRUPT_REG2	=	0x202c
                    2030   1402 _SPD_CTRL_TX_LANE_REG1_LANE	=	0x2030
                    2034   1403 _TX_SYSTEM_LANE	=	0x2034
                    203C   1404 _INPUT_TX_PIN_REG4_LANE	=	0x203c
                    2040   1405 _TX_CALIBRATION_LANE	=	0x2040
                    2044   1406 _DIG_TX_RSVD_REG0	=	0x2044
                    2048   1407 _INPUT_TX_PIN_REG5_LANE	=	0x2048
                    204C   1408 __FIELDNAME__LANE	=	0x204c
                    2050   1409 _PM_CTRL_INTERRUPT_ISR_REG1_LANE	=	0x2050
                    2054   1410 _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE	=	0x2054
                    2058   1411 _ANALOG_TX_REALTIME_REG_1	=	0x2058
                    205C   1412 _MON_TOP	=	0x205c
                    2100   1413 _PM_CTRL_RX_LANE_REG1_LANE	=	0x2100
                    2104   1414 _RX_SYSTEM_LANE	=	0x2104
                    2108   1415 _INPUT_RX_PIN_REG0_LANE	=	0x2108
                    210C   1416 _INPUT_RX_PIN_REG1_LANE	=	0x210c
                    2110   1417 _INPUT_RX_PIN_REG2_LANE	=	0x2110
                    2114   1418 _SPD_CTRL_RX_LANE_REG1_LANE	=	0x2114
                    2118   1419 _DIG_RX_RSVD_REG0	=	0x2118
                    211C   1420 _CLKGEN_RX_LANE_REG1_LANE	=	0x211c
                    2120   1421 _FRAME_SYNC_DET_REG0	=	0x2120
                    2124   1422 _FRAME_SYNC_DET_REG1	=	0x2124
                    2128   1423 _FRAME_SYNC_DET_REG2	=	0x2128
                    212C   1424 _FRAME_SYNC_DET_REG3	=	0x212c
                    2130   1425 _FRAME_SYNC_DET_REG4	=	0x2130
                    2134   1426 _FRAME_SYNC_DET_REG5	=	0x2134
                    2138   1427 _FRAME_SYNC_DET_REG6	=	0x2138
                    213C   1428 _CDR_LOCK_REG	=	0x213c
                    2140   1429 _RX_LANE_INTERRUPT	=	0x2140
                    2144   1430 _RX_LANE_INTERRUPT_MASK	=	0x2144
                    2148   1431 _RX_DATA_PATH_REG	=	0x2148
                    214C   1432 _INPUT_RX_PIN_REG3_LANE	=	0x214c
                    2150   1433 _RX_CALIBRATION_REG	=	0x2150
                    2158   1434 _RX_LANE_INTERRUPT_REG1	=	0x2158
                    2160   1435 _DTL_REG0	=	0x2160
                    2164   1436 _DTL_REG1	=	0x2164
                    2168   1437 _DTL_REG2	=	0x2168
                    216C   1438 _DTL_REG3	=	0x216c
                    2170   1439 _SQ_REG0	=	0x2170
                    4000   1440 _LANE_CFG0	=	0x4000
                    4004   1441 _LANE_STATUS0	=	0x4004
                    4008   1442 _LANE_CFG_STATUS2_LANE	=	0x4008
                    400C   1443 _LANE_CFG2_LANE	=	0x400c
                    4010   1444 _LANE_CFG4	=	0x4010
                    4014   1445 _LANE_CFG_STATUS3_LANE	=	0x4014
                    4018   1446 _LANE_DP_PIE8_CFG0_LANE	=	0x4018
                    401C   1447 _LANE_USB_DP_CFG1_LANE	=	0x401c
                    4020   1448 _LANE_USB_DP_CFG2_LANE	=	0x4020
                    4024   1449 _LANE_EQ_CFG0_LANE	=	0x4024
                    4028   1450 _LANE_EQ_CFG1_LANE	=	0x4028
                    402C   1451 _LANE_PRESET_CFG0_LANE	=	0x402c
                    4030   1452 _LANE_PRESET_CFG2_LANE	=	0x4030
                    4034   1453 _LANE_PRESET_CFG4_LANE	=	0x4034
                    4038   1454 _LANE_PRESET_CFG6_LANE	=	0x4038
                    403C   1455 _LANE_PRESET_CFG8_LANE	=	0x403c
                    4040   1456 _LANE_PRESET_CFG10_LANE	=	0x4040
                    4044   1457 _LANE_PRESET_CFG12_LANE	=	0x4044
                    4048   1458 _LANE_PRESET_CFG14_LANE	=	0x4048
                    404C   1459 _LANE_PRESET_CFG16_LANE	=	0x404c
                    4050   1460 _LANE_COEFF_MAX0_LANE	=	0x4050
                    4054   1461 _LANE_REMOTE_SET_LANE	=	0x4054
                    4058   1462 _LANE_EQ_16G_CFG0_LANE	=	0x4058
                    405C   1463 _LANE_16G_PRESET_CFG0_LANE	=	0x405c
                    4060   1464 _LANE_16G_PRESET_CFG2_LANE	=	0x4060
                    4064   1465 _LANE_16G_PRESET_CFG4_LANE	=	0x4064
                    4068   1466 _LANE_16G_PRESET_CFG6_LANE	=	0x4068
                    406C   1467 _LANE_16G_PRESET_CFG8_LANE	=	0x406c
                    4070   1468 _LANE_16G_PRESET_CFG10_LANE	=	0x4070
                    4074   1469 _LANE_16G_PRESET_CFG12_LANE	=	0x4074
                    4078   1470 _LANE_16G_PRESET_CFG14_LANE	=	0x4078
                    407C   1471 _LANE_16G_PRESET_CFG16_LANE	=	0x407c
                    4080   1472 _LANE_EQ_32G_CFG0_LANE	=	0x4080
                    4084   1473 _LANE_32G_PRESET_CFG0_LANE	=	0x4084
                    4088   1474 _LANE_32G_PRESET_CFG2_LANE	=	0x4088
                    408C   1475 _LANE_32G_PRESET_CFG4_LANE	=	0x408c
                    4090   1476 _LANE_32G_PRESET_CFG6_LANE	=	0x4090
                    4094   1477 _LANE_32G_PRESET_CFG8_LANE	=	0x4094
                    4098   1478 _LANE_32G_PRESET_CFG10_LANE	=	0x4098
                    409C   1479 _LANE_32G_PRESET_CFG12_LANE	=	0x409c
                    40A0   1480 _LANE_32G_PRESET_CFG14_LANE	=	0x40a0
                    40A4   1481 _LANE_32G_PRESET_CFG16_LANE	=	0x40a4
                    2200   1482 _MCU_CONTROL_LANE	=	0x2200
                    2204   1483 _MCU_GPIO	=	0x2204
                    2208   1484 _CACHE_DEBUG0	=	0x2208
                    220C   1485 _CACHE_DEBUG1	=	0x220c
                    2210   1486 _LANE_SYSTEM0	=	0x2210
                    2230   1487 _MCU_STATUS0_LANE	=	0x2230
                    2234   1488 _MCU_STATUS1_LANE	=	0x2234
                    2238   1489 _MCU_STATUS2_LANE	=	0x2238
                    223C   1490 _MCU_STATUS3_LANE	=	0x223c
                    2240   1491 _MCU_INT0_CONTROL	=	0x2240
                    2244   1492 _MCU_INT1_CONTROL	=	0x2244
                    2248   1493 _MCU_INT2_CONTROL	=	0x2248
                    224C   1494 _MCU_INT3_CONTROL	=	0x224c
                    2250   1495 _MCU_INT4_CONTROL	=	0x2250
                    2254   1496 _MCU_INT5_CONTROL	=	0x2254
                    2258   1497 _MCU_INT6_CONTROL	=	0x2258
                    225C   1498 _MCU_INT7_CONTROL	=	0x225c
                    2260   1499 _MCU_INT8_CONTROL	=	0x2260
                    2264   1500 _MCU_INT9_CONTROL	=	0x2264
                    2268   1501 _MCU_INT10_CONTROL	=	0x2268
                    226C   1502 _MCU_INT11_CONTROL	=	0x226c
                    2270   1503 _MCU_INT12_CONTROL	=	0x2270
                    2274   1504 _MCU_TIMER_CONTROL	=	0x2274
                    2278   1505 _MCU_TIMER0_CONTROL	=	0x2278
                    227C   1506 _MCU_TIMER1_CONTROL	=	0x227c
                    2280   1507 _MCU_TIMER2_CONTROL	=	0x2280
                    2284   1508 _MCU_TIMER3_CONTROL	=	0x2284
                    2288   1509 _MCU_IRQ_LANE	=	0x2288
                    228C   1510 _MCU_IRQ_MASK_LANE	=	0x228c
                    2290   1511 _MCU_MEM_REG1_LANE	=	0x2290
                    2294   1512 _MCU_MEM_REG2_LANE	=	0x2294
                    2298   1513 _MCU_TIMER_CTRL_1_LANE	=	0x2298
                    229C   1514 _MCU_TIMER_CTRL_2_LANE	=	0x229c
                    22A0   1515 _MCU_TIMER_CTRL_3_LANE	=	0x22a0
                    22A4   1516 _MCU_TIMER_CTRL_4_LANE	=	0x22a4
                    22A8   1517 _MCU_TIMER_CTRL_5_LANE	=	0x22a8
                    22AC   1518 _MCU_TIMER_CTRL_6_LANE	=	0x22ac
                    22B0   1519 _MCU_TIMER_CTRL_7_LANE	=	0x22b0
                    22B4   1520 _MCU_DEBUG0_LANE	=	0x22b4
                    22B8   1521 _MCU_DEBUG1_LANE	=	0x22b8
                    22BC   1522 _MCU_DEBUG2_LANE	=	0x22bc
                    22C0   1523 _MCU_DEBUG3_LANE	=	0x22c0
                    22C4   1524 _MCU_DEBUG_LANE	=	0x22c4
                    22C8   1525 _EXT_INT_CONTROL	=	0x22c8
                    22CC   1526 _ANA_IF_TRX_REG0	=	0x22cc
                    22D0   1527 _ANA_IF_DFEE_REG0	=	0x22d0
                    22D4   1528 _ANA_IF_DFEO_REG0	=	0x22d4
                    22D8   1529 _MCU_IRQ_ISR_LANE	=	0x22d8
                    22DC   1530 _MCU_WDT_LANE	=	0x22dc
                    22E0   1531 _MCU_INT_CONTROL_13	=	0x22e0
                    22E4   1532 _MCU_COMMAND0	=	0x22e4
                    22F4   1533 _MEM_ECC_ERR_ADDRESS0	=	0x22f4
                    22F8   1534 _XDATA_MEM_CHECKSUM_LANE0	=	0x22f8
                    22FC   1535 _XDATA_MEM_CHECKSUM_LANE1	=	0x22fc
                    2300   1536 _PT_CONTROL0	=	0x2300
                    2304   1537 _PT_CONTROL1	=	0x2304
                    2308   1538 _PT_USER_PATTERN0	=	0x2308
                    230C   1539 _PT_USER_PATTERN1	=	0x230c
                    2310   1540 _PT_USER_PATTERN2	=	0x2310
                    2314   1541 _PT_COUNTER0	=	0x2314
                    2318   1542 _PT_COUNTER1	=	0x2318
                    231C   1543 _PT_COUNTER2	=	0x231c
                    2400   1544 _DFE_CTRL_REG0	=	0x2400
                    2404   1545 _DFE_CTRL_REG1	=	0x2404
                    2408   1546 _DFE_CTRL_REG2	=	0x2408
                    240C   1547 _DFE_CTRL_REG3	=	0x240c
                    2410   1548 _RX_EQ_CLK_CTRL	=	0x2410
                    2414   1549 _DFE_CTRL_REG4	=	0x2414
                    2418   1550 _DFE_ANA_REG0	=	0x2418
                    241C   1551 _DFE_ANA_REG1	=	0x241c
                    2420   1552 _DFE_STEP_REG0	=	0x2420
                    2424   1553 _DFE_STEP_REG1	=	0x2424
                    2430   1554 _DFE_FEN_EVEN_REG	=	0x2430
                    2434   1555 _DFE_FEN_ODD_REG	=	0x2434
                    2438   1556 _DFE_DC_EVEN_REG8	=	0x2438
                    243C   1557 _DFE_DC_ODD_REG8	=	0x243c
                    2440   1558 _DFE_FEXT_EVEN_REG0	=	0x2440
                    2444   1559 _DFE_FEXT_EVEN_REG1	=	0x2444
                    2448   1560 _DFE_FEXT_EVEN_REG2	=	0x2448
                    244C   1561 _DFE_FEXT_EVEN_REG3	=	0x244c
                    2450   1562 _DFE_FEXT_EVEN_REG4	=	0x2450
                    2454   1563 _DFE_FEXT_EVEN_REG5	=	0x2454
                    2458   1564 _DFE_FEXT_EVEN_REG6	=	0x2458
                    245C   1565 _DFE_FEXT_EVEN_REG7	=	0x245c
                    2460   1566 _DFE_FEXT_ODD_REG0	=	0x2460
                    2464   1567 _DFE_FEXT_ODD_REG1	=	0x2464
                    2468   1568 _DFE_FEXT_ODD_REG2	=	0x2468
                    246C   1569 _DFE_FEXT_ODD_REG3	=	0x246c
                    2470   1570 _DFE_FEXT_ODD_REG4	=	0x2470
                    2474   1571 _DFE_FEXT_ODD_REG5	=	0x2474
                    2478   1572 _DFE_FEXT_ODD_REG6	=	0x2478
                    247C   1573 _DFE_FEXT_ODD_REG7	=	0x247c
                    2480   1574 _DFE_READ_EVEN_SM_REG0	=	0x2480
                    2484   1575 _DFE_READ_EVEN_SM_REG1	=	0x2484
                    2488   1576 _DFE_READ_EVEN_SM_REG2	=	0x2488
                    248C   1577 _DFE_READ_EVEN_SM_REG3	=	0x248c
                    2490   1578 _DFE_READ_EVEN_SM_REG4	=	0x2490
                    2494   1579 _DFE_READ_EVEN_SM_REG5	=	0x2494
                    2498   1580 _DFE_READ_EVEN_SM_REG6	=	0x2498
                    249C   1581 _DFE_READ_EVEN_SM_REG7	=	0x249c
                    24A0   1582 _DFE_READ_ODD_SM_REG0	=	0x24a0
                    24A4   1583 _DFE_READ_ODD_SM_REG1	=	0x24a4
                    24A8   1584 _DFE_READ_ODD_SM_REG2	=	0x24a8
                    24AC   1585 _DFE_READ_ODD_SM_REG3	=	0x24ac
                    24B0   1586 _DFE_READ_ODD_SM_REG4	=	0x24b0
                    24B4   1587 _DFE_READ_ODD_SM_REG5	=	0x24b4
                    24B8   1588 _DFE_READ_ODD_SM_REG6	=	0x24b8
                    24BC   1589 _DFE_READ_ODD_SM_REG7	=	0x24bc
                    24C0   1590 _DFE_READ_EVEN_SM_REG8	=	0x24c0
                    24C4   1591 _DFE_READ_ODD_SM_REG8	=	0x24c4
                    24D0   1592 _DFE_READ_EVEN_2C_REG0	=	0x24d0
                    24D4   1593 _DFE_READ_EVEN_2C_REG1	=	0x24d4
                    24D8   1594 _DFE_READ_EVEN_2C_REG2	=	0x24d8
                    24DC   1595 _DFE_READ_EVEN_2C_REG3	=	0x24dc
                    24E0   1596 _DFE_READ_EVEN_2C_REG4	=	0x24e0
                    24E4   1597 _DFE_READ_EVEN_2C_REG5	=	0x24e4
                    24E8   1598 _DFE_READ_EVEN_2C_REG6	=	0x24e8
                    24EC   1599 _DFE_READ_EVEN_2C_REG7	=	0x24ec
                    24F0   1600 _DFE_READ_ODD_2C_REG0	=	0x24f0
                    24F4   1601 _DFE_READ_ODD_2C_REG1	=	0x24f4
                    24F8   1602 _DFE_READ_ODD_2C_REG2	=	0x24f8
                    24FC   1603 _DFE_READ_ODD_2C_REG3	=	0x24fc
                    2500   1604 _DFE_READ_ODD_2C_REG4	=	0x2500
                    2504   1605 _DFE_READ_ODD_2C_REG5	=	0x2504
                    2508   1606 _DFE_READ_ODD_2C_REG6	=	0x2508
                    250C   1607 _DFE_READ_ODD_2C_REG7	=	0x250c
                    2510   1608 _DFE_READ_EVEN_2C_REG8	=	0x2510
                    2514   1609 _DFE_READ_ODD_2C_REG8	=	0x2514
                    2518   1610 _CAL_OFST_REG0	=	0x2518
                    251C   1611 _CAL_OFST_REG1	=	0x251c
                    2520   1612 _CAL_OFST_REG2	=	0x2520
                    2530   1613 _DFE_DCE_REG0	=	0x2530
                    2540   1614 _DFE_STATIC_LANE_REG0	=	0x2540
                    2544   1615 _DFE_STATIC_LANE_REG1	=	0x2544
                    2548   1616 _DFE_STATIC_LANE_REG3	=	0x2548
                    254C   1617 _DFE_STATIC_LANE_REG4	=	0x254c
                    2550   1618 _DFE_STATIC_LANE_REG5	=	0x2550
                    2554   1619 _DFE_STATIC_LANE_REG6	=	0x2554
                    2560   1620 _EOM_VLD_REG0	=	0x2560
                    2564   1621 _EOM_VLD_REG1	=	0x2564
                    2568   1622 _EOM_VLD_REG2	=	0x2568
                    256C   1623 _EOM_VLD_REG3	=	0x256c
                    2570   1624 _EOM_ERR_REG0	=	0x2570
                    2574   1625 _EOM_ERR_REG1	=	0x2574
                    2578   1626 _EOM_ERR_REG2	=	0x2578
                    257C   1627 _EOM_ERR_REG3	=	0x257c
                    2580   1628 _EOM_REG0	=	0x2580
                    25F0   1629 _EOM_VLD_REG4	=	0x25f0
                    25F4   1630 _LANE_MARGIN_REG0	=	0x25f4
                    6000   1631 _CAL_CTRL1_LANE	=	0x6000
                    6004   1632 _CAL_CTRL2_LANE	=	0x6004
                    6008   1633 _CAL_CTRL3_LANE	=	0x6008
                    600C   1634 _CAL_CTRL4_LANE	=	0x600c
                    6010   1635 _CAL_SAVE_DATA1_LANE	=	0x6010
                    6014   1636 _CAL_SAVE_DATA2_LANE	=	0x6014
                    6018   1637 _CAL_SAVE_DATA3_LANE	=	0x6018
                    601C   1638 _PHY_REMOTE_CTRL_COMMAND_LANE	=	0x601c
                    6020   1639 _PHY_REMOTE_CTRL_VALUE_LANE	=	0x6020
                    6024   1640 _PHY_LOCAL_VALUE_LANE	=	0x6024
                    6028   1641 _TRX_TRAIN_IF_TIMERS1_LANE	=	0x6028
                    602C   1642 _TRX_TRAIN_IF_TIMERS2_LANE	=	0x602c
                    6030   1643 _TRX_TRAIN_IF_TIMERS_ENABLE_LANE	=	0x6030
                    6034   1644 _DFE_CONTROL_0	=	0x6034
                    6038   1645 _DFE_CONTROL_1	=	0x6038
                    6040   1646 _DFE_CONTROL_2	=	0x6040
                    6044   1647 _DFE_CONTROL_3	=	0x6044
                    6048   1648 _DFE_CONTROL_4	=	0x6048
                    604C   1649 _DFE_CONTROL_5	=	0x604c
                    6050   1650 _TRAIN_CONTROL_0	=	0x6050
                    6054   1651 _TRAIN_CONTROL_1	=	0x6054
                    6058   1652 _TRAIN_CONTROL_2	=	0x6058
                    605C   1653 _RPTA_CONFIG_0	=	0x605c
                    6060   1654 _RPTA_CONFIG_1	=	0x6060
                    6064   1655 _DLL_CAL	=	0x6064
                    6068   1656 _TRAIN_PARA_0	=	0x6068
                    606C   1657 _TRAIN_PARA_1	=	0x606c
                    6070   1658 _TRAIN_PARA_2	=	0x6070
                    6074   1659 _TRAIN_PARA_3	=	0x6074
                    6078   1660 _DFE_CONTROL_6	=	0x6078
                    607C   1661 _DFE_TEST_0	=	0x607c
                    6080   1662 _DFE_TEST_1	=	0x6080
                    6084   1663 _DFE_TEST_4	=	0x6084
                    6088   1664 _DFE_TEST_5	=	0x6088
                    608C   1665 _DFE_CONTROL_7	=	0x608c
                    6090   1666 _DFE_CONTROL_8	=	0x6090
                    6094   1667 _DFE_CONTROL_9	=	0x6094
                    6098   1668 _DFE_CONTROL_10	=	0x6098
                    609C   1669 _DFE_CONTROL_11	=	0x609c
                    60A0   1670 _CDS_CTRL_REG0	=	0x60a0
                    60A4   1671 _CDS_CTRL_REG1	=	0x60a4
                    60A8   1672 _ESM_POP_P_CNT_LOW_LANE	=	0x60a8
                    60AC   1673 _ESM_ERR_P_CNT_LOW_LANE	=	0x60ac
                    60B0   1674 _ESM_ERR_POP_CNT_HIGH_LANE	=	0x60b0
                    60B4   1675 _TRAIN_CONTROL_3	=	0x60b4
                    60B8   1676 _TRAIN_CONTROL_4	=	0x60b8
                    60BC   1677 _TRAIN_CONTROL_5	=	0x60bc
                    60C0   1678 _TRAIN_CONTROL_6	=	0x60c0
                    60C4   1679 _TRAIN_CONTROL_7	=	0x60c4
                    60C8   1680 _TRAIN_CONTROL_8	=	0x60c8
                    60CC   1681 _TRAIN_CONTROL_9	=	0x60cc
                    60D0   1682 _TRAIN_CONTROL_10	=	0x60d0
                    60D4   1683 _TRAIN_CONTROL_11	=	0x60d4
                    60D8   1684 _TRAIN_CONTROL_12	=	0x60d8
                    60DC   1685 _ESM_POP_N_CNT_LOW_LANE	=	0x60dc
                    60E0   1686 _ESM_ERR_N_CNT_LOW_LANE	=	0x60e0
                    60E4   1687 _TRAIN_CONTROL_13	=	0x60e4
                    60E8   1688 _TRAIN_CONTROL_14	=	0x60e8
                    60EC   1689 _TRAIN_CONTROL_15	=	0x60ec
                    60F0   1690 _TRAIN_CONTROL_16	=	0x60f0
                    60F4   1691 _TRAIN_CONTROL_17	=	0x60f4
                    60F8   1692 _END_XDAT_LANE	=	0x60f8
                    A000   1693 _TX_CMN_REG	=	0xa000
                    A008   1694 _DTX_REG0	=	0xa008
                    A00C   1695 _DTX_REG1	=	0xa00c
                    A010   1696 _DTX_REG2	=	0xa010
                    A014   1697 _DTX_REG3	=	0xa014
                    A018   1698 _DTX_REG4	=	0xa018
                    A01C   1699 _DTX_PHY_ALIGN_REG0	=	0xa01c
                    A024   1700 _DTX_PHY_ALIGN_REG1	=	0xa024
                    A028   1701 _DTX_PHY_ALIGN_REG2	=	0xa028
                    A02C   1702 _SRIS_REG0	=	0xa02c
                    A030   1703 _SRIS_REG1	=	0xa030
                    A100   1704 _RX_CMN_0	=	0xa100
                    A110   1705 _DFE_STATIC_REG0	=	0xa110
                    A114   1706 _DFE_STATIC_REG1	=	0xa114
                    A118   1707 _DFE_STATIC_REG3	=	0xa118
                    A11C   1708 _DFE_STATIC_REG4	=	0xa11c
                    A120   1709 _DFE_STATIC_REG5	=	0xa120
                    A124   1710 _DFE_STATIC_REG6	=	0xa124
                    4200   1711 _GLOB_RST_CLK_CTRL	=	0x4200
                    4204   1712 _GLOB_CLK_SRC_LO	=	0x4204
                    4208   1713 _GLOB_CLK_SRC_HI	=	0x4208
                    420C   1714 _GLOB_MISC_CTRL	=	0x420c
                    4210   1715 _GLOB_DP_SAL_CFG	=	0x4210
                    4214   1716 _GLOB_DP_SAL_CFG1	=	0x4214
                    4218   1717 _GLOB_DP_SAL_CFG3	=	0x4218
                    421C   1718 _GLOB_DP_SAL_CFG5	=	0x421c
                    4220   1719 _GLOB_PM_CFG0	=	0x4220
                    4224   1720 _GLOB_COUNTER_CTRL	=	0x4224
                    4228   1721 _GLOB_COUNTER_HI	=	0x4228
                    422C   1722 _GLOB_PM_DP_CTRL	=	0x422c
                    4230   1723 _GLOB_DP_BAL_CFG0	=	0x4230
                    4234   1724 _GLOB_DP_BAL_CFG2	=	0x4234
                    4238   1725 _GLOB_DP_BAL_CFG4	=	0x4238
                    423C   1726 _GLOB_BIST_CTRL	=	0x423c
                    4240   1727 _GLOB_BIST_LANE_TYPE	=	0x4240
                    4244   1728 _GLOB_BIST_START	=	0x4244
                    4248   1729 _GLOB_BIST_MASK	=	0x4248
                    424C   1730 _GLOB_BIST_RESULT	=	0x424c
                    4250   1731 _GLOB_BIST_SEQR_CFG	=	0x4250
                    4254   1732 _GLOB_BIST_DATA_HI	=	0x4254
                    4258   1733 _GLOB_PIPE_REVISION	=	0x4258
                    425C   1734 _GLOB_L1_SUBSTATES_CFG	=	0x425c
                    A200   1735 _MCU_CONTROL_0	=	0xa200
                    A204   1736 _MCU_CONTROL_1	=	0xa204
                    A208   1737 _MCU_CONTROL_2	=	0xa208
                    A20C   1738 _MCU_CONTROL_3	=	0xa20c
                    A210   1739 _MCU_CONTROL_4	=	0xa210
                    A214   1740 _MCU_DEBUG0	=	0xa214
                    A218   1741 _MCU_DEBUG1	=	0xa218
                    A21C   1742 _MEMORY_CONTROL_0	=	0xa21c
                    A220   1743 _MEMORY_CONTROL_1	=	0xa220
                    A224   1744 _MEMORY_CONTROL_2	=	0xa224
                    A228   1745 _MEMORY_CONTROL_3	=	0xa228
                    A22C   1746 _MEMORY_CONTROL_4	=	0xa22c
                    A234   1747 _MCU_INFO_0	=	0xa234
                    A238   1748 _MCU_INFO_1	=	0xa238
                    A23C   1749 _MCU_INFO_2	=	0xa23c
                    A240   1750 _MCU_INFO_3	=	0xa240
                    A244   1751 _MEM_CMN_ECC_ERR_ADDRESS0	=	0xa244
                    A2E0   1752 _ANA_IF_CMN_REG1	=	0xa2e0
                    A2E4   1753 _MEM_IRQ	=	0xa2e4
                    A2E8   1754 _MEM_IRQ_MASK	=	0xa2e8
                    A2EC   1755 _ANA_IF_CMN_REG0	=	0xa2ec
                    A2F0   1756 _APB_CONTROL_REG	=	0xa2f0
                    A2F4   1757 _MEM_IRQ_CLEAR	=	0xa2f4
                    A2F8   1758 _MCU_SYNC1	=	0xa2f8
                    A2FC   1759 _MCU_SYNC2	=	0xa2fc
                    A300   1760 _TEST0	=	0xa300
                    A304   1761 _TEST1	=	0xa304
                    A308   1762 _TEST2	=	0xa308
                    A30C   1763 _TEST3	=	0xa30c
                    A310   1764 _TEST4	=	0xa310
                    A314   1765 _SYSTEM	=	0xa314
                    A318   1766 _PM_CMN_REG1	=	0xa318
                    A31C   1767 _INPUT_CMN_PIN_REG0	=	0xa31c
                    A320   1768 _INPUT_CMN_PIN_REG1	=	0xa320
                    A324   1769 _INPUT_CMN_PIN_REG2	=	0xa324
                    A328   1770 _ANA_TSEN_CONTROL	=	0xa328
                    A32C   1771 _PLLCAL_REG0	=	0xa32c
                    A330   1772 _PLLCAL_REG1	=	0xa330
                    A334   1773 _CLKGEN_CMN_REG1	=	0xa334
                    A338   1774 _SPD_CMN_REG1	=	0xa338
                    A33C   1775 _OUTPUT_CMN_PIN_REG0	=	0xa33c
                    A340   1776 _CMN_CALIBRATION	=	0xa340
                    A344   1777 __FIELDNAME_	=	0xa344
                    A348   1778 _INPUT_CMN_PIN_REG3	=	0xa348
                    A34C   1779 _PM_CMN_REG2	=	0xa34c
                    A354   1780 _TEST5	=	0xa354
                    A358   1781 _XDATA_MEM_CHECKSUM_CMN_0	=	0xa358
                    A35C   1782 _XDATA_MEM_CHECKSUM_CMN_1	=	0xa35c
                    A360   1783 _XDATA_MEM_CHECKSUM_CMN_2	=	0xa360
                    A364   1784 _MCU_SDT_CMN	=	0xa364
                    A368   1785 _CMN_CACHE_DEBUG0	=	0xa368
                    A36C   1786 _MCU_INT_ADDR	=	0xa36c
                    A370   1787 _CMN_ISR_2	=	0xa370
                    A374   1788 _CMN_ISR_MASK_2	=	0xa374
                    A378   1789 _CMN_ISR_CLEAR_2	=	0xa378
                    A37C   1790 _CMN_MCU_GPIO	=	0xa37c
                    A380   1791 _CMN_CACHE_DEBUG1	=	0xa380
                    A384   1792 _CMN_MCU_TIMER_CONTROL	=	0xa384
                    A388   1793 _CMN_MCU_TIMER_CTRL_2_LANE	=	0xa388
                    A38C   1794 _CMN_MCU_TIMER_CTRL_3_LANE	=	0xa38c
                    A390   1795 _CMN_MCU_TIMER_CTRL_4_LANE	=	0xa390
                    A394   1796 _CMN_MCU_TIMER_CTRL_5_LANE	=	0xa394
                    A398   1797 _CMN_MCU_TIMER0_CONTROL	=	0xa398
                    A39C   1798 _CMN_MCU_TIMER1_CONTROL	=	0xa39c
                    A3A0   1799 _CMN_MCU_TIMER2_CONTROL	=	0xa3a0
                    A3A4   1800 _CMN_MCU_TIMER3_CONTROL	=	0xa3a4
                    A3A8   1801 _CMN_ISR_1	=	0xa3a8
                    A3AC   1802 _CMN_ISR_MASK_1	=	0xa3ac
                    A3B0   1803 _SET_LANE_ISR	=	0xa3b0
                    A3F4   1804 _CMN_MCU_REG	=	0xa3f4
                    A3F8   1805 _CID_REG0	=	0xa3f8
                    A3FC   1806 _CID_REG1	=	0xa3fc
                    E600   1807 _FW_REV	=	0xe600
                    E604   1808 _CONTROL_CONFIG0	=	0xe604
                    E608   1809 _CONTROL_CONFIG1	=	0xe608
                    E60C   1810 _CONTROL_CONFIG2	=	0xe60c
                    E610   1811 _CONTROL_CONFIG3	=	0xe610
                    E614   1812 _CONTROL_CONFIG4	=	0xe614
                    E618   1813 _CONTROL_CONFIG5	=	0xe618
                    E61C   1814 _CONTROL_CONFIG6	=	0xe61c
                    E620   1815 _CONTROL_CONFIG7	=	0xe620
                    E624   1816 _CAL_DATA0	=	0xe624
                    E628   1817 _TRAIN_IF_CONFIG	=	0xe628
                    E62C   1818 _CONTROL_CONFIG8	=	0xe62c
                    E630   1819 _CONTROL_CONFIG9	=	0xe630
                    E634   1820 _CON_CAL_STEP_SIZE1	=	0xe634
                    E638   1821 _CON_CAL_STEP_SIZE2	=	0xe638
                    E63C   1822 _CON_CAL_STEP_SIZE3	=	0xe63c
                    E640   1823 _CON_CAL_STEP_SIZE4	=	0xe640
                    E644   1824 _CON_CAL_STEP_SIZE5	=	0xe644
                    E648   1825 _CAL_TIME_OUT_AND_DIS	=	0xe648
                    E64C   1826 _CAL_STATUS_READ	=	0xe64c
                    E650   1827 _MCU_CONFIG	=	0xe650
                    E654   1828 _CAL_DATA1	=	0xe654
                    E658   1829 _LOOP_CNTS	=	0xe658
                    E65C   1830 _MCU_CONFIG1	=	0xe65c
                    E660   1831 _TIMER_SEL1	=	0xe660
                    E664   1832 _TIMER_SEL2	=	0xe664
                    E668   1833 _TIMER_SEL3	=	0xe668
                    E66C   1834 _G_SELLV_TXCLK	=	0xe66c
                    E670   1835 _G_SELLV_TXDATA	=	0xe670
                    E674   1836 _G_SELLV_TXPRE	=	0xe674
                    E678   1837 _G_SELLV_RXEOMCLK	=	0xe678
                    E67C   1838 _G_SELLV_RXDATACLK	=	0xe67c
                    E680   1839 _G_SELLV_RXSAMPLER	=	0xe680
                    E684   1840 _SAS_PRESET0_TB	=	0xe684
                    E688   1841 _SAS_PRESET1_TB	=	0xe688
                    E68C   1842 _SAS_PRESET2_TB	=	0xe68c
                    E690   1843 _ETH_PRESET0_TB	=	0xe690
                    E694   1844 _ETH_PRESET1_TB	=	0xe694
                    E698   1845 _TX_SAVE_0	=	0xe698
                    E69C   1846 _TX_SAVE_1	=	0xe69c
                    E6A0   1847 _TX_SAVE_2	=	0xe6a0
                    E6A4   1848 _TX_SAVE_3	=	0xe6a4
                    E6A8   1849 _TX_SAVE_4	=	0xe6a8
                    E6AC   1850 _CDS_EYE_CLK_THR	=	0xe6ac
                    E6B0   1851 _SYNC_INFO	=	0xe6b0
                    E6B4   1852 _MCU_INFO_4	=	0xe6b4
                    E6B8   1853 _MCU_INFO_5	=	0xe6b8
                    E6BC   1854 _MCU_INFO_12	=	0xe6bc
                    E6C0   1855 _MCU_INFO_13	=	0xe6c0
                    E6C4   1856 _END_XDAT_CMN	=	0xe6c4
                    2600   1857 _DME_ENC_REG0	=	0x2600
                    2604   1858 _DME_ENC_REG1	=	0x2604
                    2608   1859 _DME_ENC_REG2	=	0x2608
                    260C   1860 _DME_DEC_REG0	=	0x260c
                    2610   1861 _DME_DEC_REG1	=	0x2610
                    2614   1862 _TX_TRAIN_IF_REG0	=	0x2614
                    2618   1863 _TX_TRAIN_IF_REG1	=	0x2618
                    261C   1864 _TX_TRAIN_IF_REG2	=	0x261c
                    2620   1865 _TX_TRAIN_IF_REG3	=	0x2620
                    2624   1866 _TX_TRAIN_PATTTERN_REG0	=	0x2624
                    2628   1867 _TX_TRAIN_DRIVER_REG0	=	0x2628
                    262C   1868 _TX_TRAIN_DRIVER_REG1	=	0x262c
                    2630   1869 _TX_TRAIN_DRIVER_REG2	=	0x2630
                    2634   1870 _TX_TRAIN_DEFAULT_REG0	=	0x2634
                    2638   1871 _TX_TRAIN_DEFAULT_REG1	=	0x2638
                    263C   1872 _TX_TRAIN_DEFAULT_REG2	=	0x263c
                    2640   1873 _TX_TRAIN_DEFAULT_REG3	=	0x2640
                    2644   1874 _TX_TRAIN_DEFAULT_REG4	=	0x2644
                    2648   1875 _TX_TRAIN_DEFAULT_REG5	=	0x2648
                    264C   1876 _TX_EMPH_CTRL_REG0	=	0x264c
                    2650   1877 _LINK_TRAIN_MODE0	=	0x2650
                    2654   1878 _TX_DRV_RD_OUT_REG0	=	0x2654
                    2658   1879 _TX_AMP_CTRL_REG0	=	0x2658
                    265C   1880 _TRX_TRAIN_IF_INTERRUPT_LANE	=	0x265c
                    2660   1881 _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE	=	0x2660
                    2664   1882 _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE	=	0x2664
                    2668   1883 _TX_TRAIN_IF_REG4	=	0x2668
                    266C   1884 _TX_TRAIN_IF_REG5	=	0x266c
                    2670   1885 _TX_TRAIN_IF_REG6	=	0x2670
                    2674   1886 _TX_TRAIN_IF_REG7	=	0x2674
                    2678   1887 _TX_TRAIN_CTRL_LANE	=	0x2678
                    267C   1888 _TX_TRAIN_IF_REG8	=	0x267c
                    6100   1889 _DFE_READ_EVEN_REG0	=	0x6100
                    6104   1890 _DFE_READ_EVEN_REG1	=	0x6104
                    6108   1891 _DFE_READ_EVEN_REG2	=	0x6108
                    610C   1892 _DFE_READ_EVEN_REG3	=	0x610c
                    6110   1893 _DFE_READ_EVEN_REG4	=	0x6110
                    6114   1894 _DFE_READ_EVEN_REG5	=	0x6114
                    6118   1895 _DFE_READ_EVEN_REG6	=	0x6118
                    611C   1896 _DFE_READ_EVEN_REG7	=	0x611c
                    6120   1897 _DFE_READ_ODD_REG0	=	0x6120
                    6124   1898 _DFE_READ_ODD_REG1	=	0x6124
                    6128   1899 _DFE_READ_ODD_REG2	=	0x6128
                    612C   1900 _DFE_READ_ODD_REG3	=	0x612c
                    6130   1901 _DFE_READ_ODD_REG4	=	0x6130
                    6134   1902 _DFE_READ_ODD_REG5	=	0x6134
                    6138   1903 _DFE_READ_ODD_REG6	=	0x6138
                    613C   1904 _DFE_READ_ODD_REG7	=	0x613c
                    6140   1905 _DFE_READ_EVEN_REG8	=	0x6140
                    6144   1906 _DFE_READ_ODD_REG8	=	0x6144
                    6148   1907 _DFE_READ_F0A_EVEN	=	0x6148
                    614C   1908 _DFE_READ_F0A_ODD	=	0x614c
                    6150   1909 _DFE_READ_F0B_EVEN	=	0x6150
                    6154   1910 _DFE_READ_F0B_ODD	=	0x6154
                    6158   1911 _DFE_READ_F0D_EVEN	=	0x6158
                    615C   1912 _DFE_READ_F0D_ODD	=	0x615c
                    6160   1913 _DFE_READ_F0D_LEFT_EVEN	=	0x6160
                    6164   1914 _DFE_READ_F0D_LEFT_ODD	=	0x6164
                    6168   1915 _DFE_READ_F0D_RIGHT_EVEN	=	0x6168
                    616C   1916 _DFE_READ_F0D_RIGHT_ODD	=	0x616c
                    6170   1917 _CDS_READ_MISC0	=	0x6170
                    6174   1918 _CDS_READ_MISC1	=	0x6174
                    6214   1919 _TXTRAIN_IF_REG0	=	0x6214
                    E000   1920 _lc_speedtable	=	0xe000
                    E1C0   1921 _ring_speedtable	=	0xe1c0
                    E5C0   1922 _phy_mode_cmn_table	=	0xe5c0
                    6300   1923 _max_gen	=	0x6300
                    6301   1924 _min_gen	=	0x6301
                    6304   1925 _speedtable	=	0x6304
                    65D4   1926 _phy_mode_lane_table	=	0x65d4
                    60B4   1927 _rc_save	=	0x60b4
                    60D0   1928 _txffe_save	=	0x60d0
                    60E4   1929 _phase_save	=	0x60e4
                    6030   1930 _train_gn1_index	=	0x6030
                    6031   1931 _train_g1_index	=	0x6031
                    6032   1932 _train_g0_index	=	0x6032
                    E6B0   1933 _local_tx_preset_tb	=	0xe6b0
                    E5C1   1934 _cmx_cal_lcvco_dac	=	0xe5c1
                    E5C1   1935 _cmx_cal_lcvco_dac_lsb	=	0xe5c1
                    E5C4   1936 _cmx_cal_lcvco_dac_msb	=	0xe5c4
                    E5CA   1937 _cmx_cal_lccap_msb	=	0xe5ca
                    E5C8   1938 _cmx_cal_lccap_lsb	=	0xe5c8
                    E5CC   1939 _cmx_cal_plldcc	=	0xe5cc
                    E5D0   1940 _cmx_cal_pll_speed_ring	=	0xe5d0
                    E5D4   1941 _cmx_cal_pll_sllp_dac_coarse_ring	=	0xe5d4
                    E5D8   1942 _cmx_cal_sllp_dac_fine_ring	=	0xe5d8
                    65D4   1943 _lnx_cal_txdcc_pdiv	=	0x65d4
                    65D8   1944 _lnx_cal_txdcc_pdiv_hg	=	0x65d8
                    65DA   1945 _lnx_cal_txdcc	=	0x65da
                    65DE   1946 _lnx_cal_txdcc_hg	=	0x65de
                    65E0   1947 _lnx_cal_rxdcc_dll	=	0x65e0
                    65E4   1948 _lnx_cal_rxdcc_dll_hg	=	0x65e4
                    65E6   1949 _lnx_cal_rxdcc_data	=	0x65e6
                    65F0   1950 _lnx_cal_rxdcc_data_hg	=	0x65f0
                    65F5   1951 _lnx_cal_rxdcc_eom	=	0x65f5
                    65FF   1952 _lnx_cal_rxdcc_eom_hg	=	0x65ff
                    6604   1953 _lnx_cal_dll_gmsel	=	0x6604
                    6606   1954 _lnx_cal_vdda_dll_sel	=	0x6606
                    660A   1955 _lnx_cal_dll_eom_gmsel	=	0x660a
                    660C   1956 _lnx_cal_vdda_dll_eom_sel	=	0x660c
                    6610   1957 _lnx_cal_eom_dpher	=	0x6610
                    6612   1958 _lnx_cal_align90_dummy_clk	=	0x6612
                    661A   1959 _lnx_cal_align90_dac	=	0x661a
                    6622   1960 _lnx_cal_align90_gm	=	0x6622
                    662A   1961 _lnx_cal_sellv_txdata	=	0x662a
                    6634   1962 _lnx_cal_sellv_txclk	=	0x6634
                    663E   1963 _lnx_cal_sellv_rxdataclk	=	0x663e
                    6648   1964 _lnx_cal_sellv_txpre	=	0x6648
                    6652   1965 _lnx_cal_sellv_rxsampler	=	0x6652
                    665C   1966 _lnx_cal_sellv_rxeomclk	=	0x665c
                    6666   1967 _lnx_spdoft_tx_preset_index_lane	=	0x6666
                    6490   1968 _lnx_calx_txdcc_pdiv	=	0x6490
                    6496   1969 _lnx_calx_txdcc_pdiv_hg	=	0x6496
                    6499   1970 _lnx_calx_txdcc	=	0x6499
                    649F   1971 _lnx_calx_txdcc_hg	=	0x649f
                    64A2   1972 _lnx_calx_rxdcc_dll	=	0x64a2
                    64A8   1973 _lnx_calx_rxdcc_dll_hg	=	0x64a8
                    64AB   1974 _lnx_calx_dll_gmsel	=	0x64ab
                    64AE   1975 _lnx_calx_vdda_dll_sel	=	0x64ae
                    64B4   1976 _lnx_calx_dll_eom_gmsel	=	0x64b4
                    64B7   1977 _lnx_calx_vdda_dll_eom_sel	=	0x64b7
                    64BD   1978 _lnx_calx_eom_dpher	=	0x64bd
                    64C0   1979 _lnx_calx_align90_dummy_clk	=	0x64c0
                    64CC   1980 _lnx_calx_align90_dac	=	0x64cc
                    64D8   1981 _lnx_calx_align90_gm	=	0x64d8
                    6100   1982 _cds28	=	0x6100
                    6178   1983 _dfe_sm	=	0x6178
                    61B8   1984 _dfe_sm_dc	=	0x61b8
                    61C0   1985 _dfe_sm_save	=	0x61c0
                    03FC   1986 _UPHY_ANAREG_REV_0	=	0x03fc
                    E684   1987 _tx_tb	=	0xe684
                    E698   1988 _train_save_tb	=	0xe698
                    607C   1989 _sq_thrs_ratio_tb	=	0x607c
                           1990 ;--------------------------------------------------------
                           1991 ; absolute external ram data
                           1992 ;--------------------------------------------------------
                           1993 	.area XABS    (ABS,XDATA)
                           1994 ;--------------------------------------------------------
                           1995 ; external initialized ram data
                           1996 ;--------------------------------------------------------
                           1997 	.area HOME    (CODE)
                           1998 	.area GSINIT0 (CODE)
                           1999 	.area GSINIT1 (CODE)
                           2000 	.area GSINIT2 (CODE)
                           2001 	.area GSINIT3 (CODE)
                           2002 	.area GSINIT4 (CODE)
                           2003 	.area GSINIT5 (CODE)
                           2004 	.area GSINIT  (CODE)
                           2005 	.area GSFINAL (CODE)
                           2006 	.area CSEG    (CODE)
                           2007 ;--------------------------------------------------------
                           2008 ; global & static initialisations
                           2009 ;--------------------------------------------------------
                           2010 	.area HOME    (CODE)
                           2011 	.area GSINIT  (CODE)
                           2012 	.area GSFINAL (CODE)
                           2013 	.area GSINIT  (CODE)
                           2014 ;--------------------------------------------------------
                           2015 ; Home
                           2016 ;--------------------------------------------------------
                           2017 	.area HOME    (CODE)
                           2018 	.area HOME    (CODE)
                           2019 ;--------------------------------------------------------
                           2020 ; code
                           2021 ;--------------------------------------------------------
                           2022 	.area CSEG    (CODE)
                           2023 	.area CSEG    (CODE)
                           2024 	.area CONST   (CODE)
                           2025 	.area CABS    (ABS,CODE)
