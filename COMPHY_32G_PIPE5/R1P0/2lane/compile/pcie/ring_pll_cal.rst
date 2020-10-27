                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:31 2018
                              5 ;--------------------------------------------------------
                              6 	.module ring_pll_cal
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
                            979 	.globl _ring_pll_cal
                            980 	.globl _ring_pll_cont
                            981 	.globl _ring_pll_fast_cal
                            982 ;--------------------------------------------------------
                            983 ; special function registers
                            984 ;--------------------------------------------------------
                            985 	.area RSEG    (ABS,DATA)
   0000                     986 	.org 0x0000
                    0080    987 _P0	=	0x0080
                    0082    988 _DPL	=	0x0082
                    0083    989 _DPH	=	0x0083
                    0086    990 _WDTREL	=	0x0086
                    0087    991 _PCON	=	0x0087
                    0088    992 _TCON	=	0x0088
                    0089    993 _TMOD	=	0x0089
                    008A    994 _TL0	=	0x008a
                    008B    995 _TL1	=	0x008b
                    008C    996 _TH0	=	0x008c
                    008D    997 _TH1	=	0x008d
                    008E    998 _CKCON	=	0x008e
                    0090    999 _P1	=	0x0090
                    0092   1000 _DPS	=	0x0092
                    0094   1001 _PSBANK	=	0x0094
                    0098   1002 _SCON	=	0x0098
                    0099   1003 _SBUF	=	0x0099
                    009A   1004 _IEN2	=	0x009a
                    00A0   1005 _P2	=	0x00a0
                    00A1   1006 _DMAS0	=	0x00a1
                    00A2   1007 _DMAS1	=	0x00a2
                    00A3   1008 _DMAS2	=	0x00a3
                    00A4   1009 _DMAT0	=	0x00a4
                    00A5   1010 _DMAT1	=	0x00a5
                    00A6   1011 _DMAT2	=	0x00a6
                    00A8   1012 _IEN0	=	0x00a8
                    00A9   1013 _IP0	=	0x00a9
                    00AA   1014 _S0RELL	=	0x00aa
                    00B0   1015 _P3	=	0x00b0
                    00B1   1016 _DMAC0	=	0x00b1
                    00B2   1017 _DMAC1	=	0x00b2
                    00B3   1018 _DMAC2	=	0x00b3
                    00B4   1019 _DMASEL	=	0x00b4
                    00B5   1020 _DMAM0	=	0x00b5
                    00B6   1021 _DMAM1	=	0x00b6
                    00B8   1022 _IEN1	=	0x00b8
                    00B9   1023 _IP1	=	0x00b9
                    00BA   1024 _S0RELH	=	0x00ba
                    00C0   1025 _IRCON	=	0x00c0
                    00C1   1026 _CCEN	=	0x00c1
                    00C8   1027 _T2CON	=	0x00c8
                    00CA   1028 _RCAP2L	=	0x00ca
                    00CB   1029 _RCAP2H	=	0x00cb
                    00CC   1030 _TL2	=	0x00cc
                    00CD   1031 _TH2	=	0x00cd
                    00D0   1032 _PSW	=	0x00d0
                    00D8   1033 _ADCON	=	0x00d8
                    00E0   1034 _ACC	=	0x00e0
                    00E8   1035 _EIE	=	0x00e8
                    00F0   1036 _B	=	0x00f0
                    00F7   1037 _SRST	=	0x00f7
                    8C8A   1038 _TMR0	=	0x8c8a
                    8D8B   1039 _TMR1	=	0x8d8b
                    CDCC   1040 _TMR2	=	0xcdcc
                    A2A1   1041 _DMASA	=	0xa2a1
                    A5A4   1042 _DMATA	=	0xa5a4
                    B2B1   1043 _DMAC	=	0xb2b1
                           1044 ;--------------------------------------------------------
                           1045 ; special function bits
                           1046 ;--------------------------------------------------------
                           1047 	.area RSEG    (ABS,DATA)
   0000                    1048 	.org 0x0000
                    0080   1049 _P0_0	=	0x0080
                    0081   1050 _P0_1	=	0x0081
                    0082   1051 _P0_2	=	0x0082
                    0083   1052 _P0_3	=	0x0083
                    0084   1053 _P0_4	=	0x0084
                    0085   1054 _P0_5	=	0x0085
                    0086   1055 _P0_6	=	0x0086
                    0087   1056 _P0_7	=	0x0087
                    0090   1057 _P1_0	=	0x0090
                    0091   1058 _P1_1	=	0x0091
                    0092   1059 _P1_2	=	0x0092
                    0093   1060 _P1_3	=	0x0093
                    0094   1061 _P1_4	=	0x0094
                    0095   1062 _P1_5	=	0x0095
                    0096   1063 _P1_6	=	0x0096
                    0097   1064 _P1_7	=	0x0097
                    00A0   1065 _P2_0	=	0x00a0
                    00A1   1066 _P2_1	=	0x00a1
                    00A2   1067 _P2_2	=	0x00a2
                    00A3   1068 _P2_3	=	0x00a3
                    00A4   1069 _P2_4	=	0x00a4
                    00A5   1070 _P2_5	=	0x00a5
                    00A6   1071 _P2_6	=	0x00a6
                    00A7   1072 _P2_7	=	0x00a7
                    00B0   1073 _P3_0	=	0x00b0
                    00B1   1074 _P3_1	=	0x00b1
                    00B2   1075 _P3_2	=	0x00b2
                    00B3   1076 _P3_3	=	0x00b3
                    00B4   1077 _P3_4	=	0x00b4
                    00B5   1078 _P3_5	=	0x00b5
                    00B6   1079 _P3_6	=	0x00b6
                    00B7   1080 _P3_7	=	0x00b7
                    0088   1081 _IT0	=	0x0088
                    0089   1082 _IE0	=	0x0089
                    008A   1083 _IT1	=	0x008a
                    008B   1084 _IE1	=	0x008b
                    008C   1085 _TR0	=	0x008c
                    008D   1086 _TF0	=	0x008d
                    008E   1087 _TR1	=	0x008e
                    008F   1088 _TF1	=	0x008f
                    00A8   1089 _EX0	=	0x00a8
                    00A9   1090 _ET0	=	0x00a9
                    00AA   1091 _EX1	=	0x00aa
                    00AB   1092 _ET1	=	0x00ab
                    00AC   1093 _ES	=	0x00ac
                    00AD   1094 _ET2	=	0x00ad
                    00AE   1095 _WDT	=	0x00ae
                    00AF   1096 _EA	=	0x00af
                    00B8   1097 _EX7	=	0x00b8
                    00B9   1098 _EX2	=	0x00b9
                    00BA   1099 _EX3	=	0x00ba
                    00BB   1100 _EX4	=	0x00bb
                    00BC   1101 _EX5	=	0x00bc
                    00BD   1102 _EX6	=	0x00bd
                    00BE   1103 _PS1	=	0x00be
                    009A   1104 _ES1	=	0x009a
                    009B   1105 _EX8	=	0x009b
                    009C   1106 _EX9	=	0x009c
                    009D   1107 _EX10	=	0x009d
                    009E   1108 _EX11	=	0x009e
                    009F   1109 _EX12	=	0x009f
                    0098   1110 _RI	=	0x0098
                    0099   1111 _TI	=	0x0099
                    00C6   1112 _TF2	=	0x00c6
                           1113 ;--------------------------------------------------------
                           1114 ; overlayable register banks
                           1115 ;--------------------------------------------------------
                           1116 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1117 	.ds 8
                           1118 ;--------------------------------------------------------
                           1119 ; internal ram data
                           1120 ;--------------------------------------------------------
                           1121 	.area DSEG    (DATA)
                           1122 ;--------------------------------------------------------
                           1123 ; overlayable items in internal ram 
                           1124 ;--------------------------------------------------------
                           1125 	.area OSEG    (OVR,DATA)
                           1126 ;--------------------------------------------------------
                           1127 ; indirectly addressable internal ram data
                           1128 ;--------------------------------------------------------
                           1129 	.area ISEG    (DATA)
                           1130 ;--------------------------------------------------------
                           1131 ; absolute internal ram data
                           1132 ;--------------------------------------------------------
                           1133 	.area IABS    (ABS,DATA)
                           1134 	.area IABS    (ABS,DATA)
                           1135 ;--------------------------------------------------------
                           1136 ; bit data
                           1137 ;--------------------------------------------------------
                           1138 	.area BSEG    (BIT)
                           1139 ;--------------------------------------------------------
                           1140 ; paged external ram data
                           1141 ;--------------------------------------------------------
                           1142 	.area PSEG    (PAG,XDATA)
                           1143 ;--------------------------------------------------------
                           1144 ; external ram data
                           1145 ;--------------------------------------------------------
                           1146 	.area XSEG    (XDATA)
                    1000   1147 _UPHY14_TRX_LANEPLL_ANAREG_TOP_128	=	0x1000
                    1004   1148 _UPHY14_TRX_LANEPLL_ANAREG_TOP_129	=	0x1004
                    1008   1149 _UPHY14_TRX_LANEPLL_ANAREG_TOP_130	=	0x1008
                    100C   1150 _UPHY14_TRX_LANEPLL_ANAREG_TOP_131	=	0x100c
                    1010   1151 _UPHY14_TRX_LANEPLL_ANAREG_TOP_132	=	0x1010
                    1014   1152 _UPHY14_TRX_LANEPLL_ANAREG_TOP_133	=	0x1014
                    1018   1153 _UPHY14_TRX_LANEPLL_ANAREG_TOP_134	=	0x1018
                    101C   1154 _UPHY14_TRX_LANEPLL_ANAREG_TOP_135	=	0x101c
                    1020   1155 _UPHY14_TRX_LANEPLL_ANAREG_TOP_136	=	0x1020
                    1024   1156 _UPHY14_TRX_LANEPLL_ANAREG_TOP_137	=	0x1024
                    1028   1157 _UPHY14_TRX_LANEPLL_ANAREG_TOP_138	=	0x1028
                    102C   1158 _UPHY14_TRX_LANEPLL_ANAREG_TOP_139	=	0x102c
                    1030   1159 _UPHY14_TRX_LANEPLL_ANAREG_TOP_140	=	0x1030
                    1034   1160 _UPHY14_TRX_LANEPLL_ANAREG_TOP_141	=	0x1034
                    1038   1161 _UPHY14_TRX_LANEPLL_ANAREG_TOP_142	=	0x1038
                    103C   1162 _UPHY14_TRX_LANEPLL_ANAREG_TOP_143	=	0x103c
                    0200   1163 _UPHY14_TRX_ANAREG_TOP_128	=	0x0200
                    0204   1164 _UPHY14_TRX_ANAREG_TOP_129	=	0x0204
                    0208   1165 _UPHY14_TRX_ANAREG_TOP_130	=	0x0208
                    020C   1166 _UPHY14_TRX_ANAREG_TOP_131	=	0x020c
                    0210   1167 _UPHY14_TRX_ANAREG_TOP_132	=	0x0210
                    0214   1168 _UPHY14_TRX_ANAREG_TOP_133	=	0x0214
                    0218   1169 _UPHY14_TRX_ANAREG_TOP_134	=	0x0218
                    021C   1170 _UPHY14_TRX_ANAREG_TOP_135	=	0x021c
                    0220   1171 _UPHY14_TRX_ANAREG_TOP_136	=	0x0220
                    0224   1172 _UPHY14_TRX_ANAREG_TOP_137	=	0x0224
                    0228   1173 _UPHY14_TRX_ANAREG_TOP_138	=	0x0228
                    022C   1174 _UPHY14_TRX_ANAREG_TOP_139	=	0x022c
                    0230   1175 _UPHY14_TRX_ANAREG_TOP_140	=	0x0230
                    0234   1176 _UPHY14_TRX_ANAREG_TOP_141	=	0x0234
                    0238   1177 _UPHY14_TRX_ANAREG_TOP_142	=	0x0238
                    023C   1178 _UPHY14_TRX_ANAREG_TOP_143	=	0x023c
                    0240   1179 _UPHY14_TRX_ANAREG_TOP_144	=	0x0240
                    0244   1180 _UPHY14_TRX_ANAREG_TOP_145	=	0x0244
                    0248   1181 _UPHY14_TRX_ANAREG_TOP_146	=	0x0248
                    024C   1182 _UPHY14_TRX_ANAREG_TOP_147	=	0x024c
                    0250   1183 _UPHY14_TRX_ANAREG_TOP_148	=	0x0250
                    0254   1184 _UPHY14_TRX_ANAREG_TOP_149	=	0x0254
                    0258   1185 _UPHY14_TRX_ANAREG_TOP_150	=	0x0258
                    025C   1186 _UPHY14_TRX_ANAREG_TOP_151	=	0x025c
                    0260   1187 _UPHY14_TRX_ANAREG_TOP_152	=	0x0260
                    0264   1188 _UPHY14_TRX_ANAREG_TOP_153	=	0x0264
                    0268   1189 _UPHY14_TRX_ANAREG_TOP_154	=	0x0268
                    026C   1190 _UPHY14_TRX_ANAREG_TOP_155	=	0x026c
                    0270   1191 _UPHY14_TRX_ANAREG_TOP_156	=	0x0270
                    0274   1192 _UPHY14_TRX_ANAREG_TOP_157	=	0x0274
                    0000   1193 _UPHY14_TRX_ANAREG_BOT_0	=	0x0000
                    0004   1194 _UPHY14_TRX_ANAREG_BOT_1	=	0x0004
                    0008   1195 _UPHY14_TRX_ANAREG_BOT_2	=	0x0008
                    000C   1196 _UPHY14_TRX_ANAREG_BOT_3	=	0x000c
                    0010   1197 _UPHY14_TRX_ANAREG_BOT_4	=	0x0010
                    0014   1198 _UPHY14_TRX_ANAREG_BOT_5	=	0x0014
                    0018   1199 _UPHY14_TRX_ANAREG_BOT_6	=	0x0018
                    001C   1200 _UPHY14_TRX_ANAREG_BOT_7	=	0x001c
                    0020   1201 _UPHY14_TRX_ANAREG_BOT_8	=	0x0020
                    0024   1202 _UPHY14_TRX_ANAREG_BOT_9	=	0x0024
                    0028   1203 _UPHY14_TRX_ANAREG_BOT_10	=	0x0028
                    002C   1204 _UPHY14_TRX_ANAREG_BOT_11	=	0x002c
                    0030   1205 _UPHY14_TRX_ANAREG_BOT_12	=	0x0030
                    0034   1206 _UPHY14_TRX_ANAREG_BOT_13	=	0x0034
                    0038   1207 _UPHY14_TRX_ANAREG_BOT_14	=	0x0038
                    003C   1208 _UPHY14_TRX_ANAREG_BOT_15	=	0x003c
                    0040   1209 _UPHY14_TRX_ANAREG_BOT_16	=	0x0040
                    0044   1210 _UPHY14_TRX_ANAREG_BOT_17	=	0x0044
                    0048   1211 _UPHY14_TRX_ANAREG_BOT_18	=	0x0048
                    004C   1212 _UPHY14_TRX_ANAREG_BOT_19	=	0x004c
                    0050   1213 _UPHY14_TRX_ANAREG_BOT_20	=	0x0050
                    0054   1214 _UPHY14_TRX_ANAREG_BOT_21	=	0x0054
                    0058   1215 _UPHY14_TRX_ANAREG_BOT_22	=	0x0058
                    005C   1216 _UPHY14_TRX_ANAREG_BOT_23	=	0x005c
                    0060   1217 _UPHY14_TRX_ANAREG_BOT_24	=	0x0060
                    0064   1218 _UPHY14_TRX_ANAREG_BOT_25	=	0x0064
                    0068   1219 _UPHY14_TRX_ANAREG_BOT_26	=	0x0068
                    006C   1220 _UPHY14_TRX_ANAREG_BOT_27	=	0x006c
                    0070   1221 _UPHY14_TRX_ANAREG_BOT_28	=	0x0070
                    0074   1222 _UPHY14_TRX_ANAREG_BOT_29	=	0x0074
                    0078   1223 _UPHY14_TRX_ANAREG_BOT_30	=	0x0078
                    007C   1224 _UPHY14_TRX_ANAREG_BOT_31	=	0x007c
                    0080   1225 _UPHY14_TRX_ANAREG_BOT_32	=	0x0080
                    0478   1226 _ANA_DFEE_REG_1E	=	0x0478
                    047C   1227 _ANA_DFEE_REG_1F	=	0x047c
                    0480   1228 _ANA_DFEE_REG_20	=	0x0480
                    0484   1229 _ANA_DFEE_REG_21	=	0x0484
                    0488   1230 _ANA_DFEE_REG_22	=	0x0488
                    048C   1231 _ANA_DFEE_REG_23	=	0x048c
                    0490   1232 _ANA_DFEE_REG_24	=	0x0490
                    0494   1233 _ANA_DFEE_REG_25	=	0x0494
                    0498   1234 _ANA_DFEE_REG_26	=	0x0498
                    049C   1235 _ANA_DFEE_REG_27	=	0x049c
                    0400   1236 _ANA_DFEE_REG_00	=	0x0400
                    0404   1237 _ANA_DFEE_REG_01	=	0x0404
                    0408   1238 _ANA_DFEE_REG_02	=	0x0408
                    040C   1239 _ANA_DFEE_REG_03	=	0x040c
                    0410   1240 _ANA_DFEE_REG_04	=	0x0410
                    0414   1241 _ANA_DFEE_REG_05	=	0x0414
                    0418   1242 _ANA_DFEE_REG_06	=	0x0418
                    041C   1243 _ANA_DFEE_REG_07	=	0x041c
                    0420   1244 _ANA_DFEE_REG_08	=	0x0420
                    0424   1245 _ANA_DFEE_REG_09	=	0x0424
                    0428   1246 _ANA_DFEE_REG_0A	=	0x0428
                    042C   1247 _ANA_DFEE_REG_0B	=	0x042c
                    0430   1248 _ANA_DFEE_REG_0C	=	0x0430
                    0434   1249 _ANA_DFEE_REG_0D	=	0x0434
                    0438   1250 _ANA_DFEE_REG_0E	=	0x0438
                    043C   1251 _ANA_DFEE_REG_0F	=	0x043c
                    0440   1252 _ANA_DFEE_REG_10	=	0x0440
                    0444   1253 _ANA_DFEE_REG_11	=	0x0444
                    0448   1254 _ANA_DFEE_REG_12	=	0x0448
                    044C   1255 _ANA_DFEE_REG_13	=	0x044c
                    0450   1256 _ANA_DFEE_REG_14	=	0x0450
                    0454   1257 _ANA_DFEE_REG_15	=	0x0454
                    0458   1258 _ANA_DFEE_REG_16	=	0x0458
                    045C   1259 _ANA_DFEE_REG_17	=	0x045c
                    0460   1260 _ANA_DFEE_REG_18	=	0x0460
                    0464   1261 _ANA_DFEE_REG_19	=	0x0464
                    0468   1262 _ANA_DFEE_REG_1A	=	0x0468
                    046C   1263 _ANA_DFEE_REG_1B	=	0x046c
                    0470   1264 _ANA_DFEE_REG_1C	=	0x0470
                    0474   1265 _ANA_DFEE_REG_1D	=	0x0474
                    0830   1266 _ANA_DFEO_REG_0C	=	0x0830
                    0834   1267 _ANA_DFEO_REG_0D	=	0x0834
                    0838   1268 _ANA_DFEO_REG_0E	=	0x0838
                    083C   1269 _ANA_DFEO_REG_0F	=	0x083c
                    0840   1270 _ANA_DFEO_REG_10	=	0x0840
                    0844   1271 _ANA_DFEO_REG_11	=	0x0844
                    0848   1272 _ANA_DFEO_REG_12	=	0x0848
                    084C   1273 _ANA_DFEO_REG_13	=	0x084c
                    0850   1274 _ANA_DFEO_REG_14	=	0x0850
                    0854   1275 _ANA_DFEO_REG_15	=	0x0854
                    0858   1276 _ANA_DFEO_REG_16	=	0x0858
                    085C   1277 _ANA_DFEO_REG_17	=	0x085c
                    0860   1278 _ANA_DFEO_REG_18	=	0x0860
                    0864   1279 _ANA_DFEO_REG_19	=	0x0864
                    0868   1280 _ANA_DFEO_REG_1A	=	0x0868
                    086C   1281 _ANA_DFEO_REG_1B	=	0x086c
                    0870   1282 _ANA_DFEO_REG_1C	=	0x0870
                    0874   1283 _ANA_DFEO_REG_1D	=	0x0874
                    0878   1284 _ANA_DFEO_REG_1E	=	0x0878
                    087C   1285 _ANA_DFEO_REG_1F	=	0x087c
                    0880   1286 _ANA_DFEO_REG_20	=	0x0880
                    0884   1287 _ANA_DFEO_REG_21	=	0x0884
                    0888   1288 _ANA_DFEO_REG_22	=	0x0888
                    088C   1289 _ANA_DFEO_REG_23	=	0x088c
                    0890   1290 _ANA_DFEO_REG_24	=	0x0890
                    0894   1291 _ANA_DFEO_REG_25	=	0x0894
                    0898   1292 _ANA_DFEO_REG_26	=	0x0898
                    089C   1293 _ANA_DFEO_REG_27	=	0x089c
                    0800   1294 _ANA_DFEO_REG_00	=	0x0800
                    0804   1295 _ANA_DFEO_REG_01	=	0x0804
                    0808   1296 _ANA_DFEO_REG_02	=	0x0808
                    080C   1297 _ANA_DFEO_REG_03	=	0x080c
                    0810   1298 _ANA_DFEO_REG_04	=	0x0810
                    0814   1299 _ANA_DFEO_REG_05	=	0x0814
                    0818   1300 _ANA_DFEO_REG_06	=	0x0818
                    081C   1301 _ANA_DFEO_REG_07	=	0x081c
                    0820   1302 _ANA_DFEO_REG_08	=	0x0820
                    0824   1303 _ANA_DFEO_REG_09	=	0x0824
                    0828   1304 _ANA_DFEO_REG_0A	=	0x0828
                    082C   1305 _ANA_DFEO_REG_0B	=	0x082c
                    8200   1306 _UPHY14_CMN_ANAREG_TOP_128	=	0x8200
                    8204   1307 _UPHY14_CMN_ANAREG_TOP_129	=	0x8204
                    8208   1308 _UPHY14_CMN_ANAREG_TOP_130	=	0x8208
                    820C   1309 _UPHY14_CMN_ANAREG_TOP_131	=	0x820c
                    8210   1310 _UPHY14_CMN_ANAREG_TOP_132	=	0x8210
                    8214   1311 _UPHY14_CMN_ANAREG_TOP_133	=	0x8214
                    8218   1312 _UPHY14_CMN_ANAREG_TOP_134	=	0x8218
                    821C   1313 _UPHY14_CMN_ANAREG_TOP_135	=	0x821c
                    8220   1314 _UPHY14_CMN_ANAREG_TOP_136	=	0x8220
                    8224   1315 _UPHY14_CMN_ANAREG_TOP_137	=	0x8224
                    8228   1316 _UPHY14_CMN_ANAREG_TOP_138	=	0x8228
                    822C   1317 _UPHY14_CMN_ANAREG_TOP_139	=	0x822c
                    8230   1318 _UPHY14_CMN_ANAREG_TOP_140	=	0x8230
                    8234   1319 _UPHY14_CMN_ANAREG_TOP_141	=	0x8234
                    8238   1320 _UPHY14_CMN_ANAREG_TOP_142	=	0x8238
                    823C   1321 _UPHY14_CMN_ANAREG_TOP_143	=	0x823c
                    8240   1322 _UPHY14_CMN_ANAREG_TOP_144	=	0x8240
                    8244   1323 _UPHY14_CMN_ANAREG_TOP_145	=	0x8244
                    8248   1324 _UPHY14_CMN_ANAREG_TOP_146	=	0x8248
                    824C   1325 _UPHY14_CMN_ANAREG_TOP_147	=	0x824c
                    8250   1326 _UPHY14_CMN_ANAREG_TOP_148	=	0x8250
                    8254   1327 _UPHY14_CMN_ANAREG_TOP_149	=	0x8254
                    8258   1328 _UPHY14_CMN_ANAREG_TOP_150	=	0x8258
                    825C   1329 _UPHY14_CMN_ANAREG_TOP_151	=	0x825c
                    8260   1330 _UPHY14_CMN_ANAREG_TOP_152	=	0x8260
                    8264   1331 _UPHY14_CMN_ANAREG_TOP_153	=	0x8264
                    8268   1332 _UPHY14_CMN_ANAREG_TOP_154	=	0x8268
                    826C   1333 _UPHY14_CMN_ANAREG_TOP_155	=	0x826c
                    8270   1334 _UPHY14_CMN_ANAREG_TOP_156	=	0x8270
                    8274   1335 _UPHY14_CMN_ANAREG_TOP_157	=	0x8274
                    8278   1336 _UPHY14_CMN_ANAREG_TOP_158	=	0x8278
                    827C   1337 _UPHY14_CMN_ANAREG_TOP_159	=	0x827c
                    8280   1338 _UPHY14_CMN_ANAREG_TOP_160	=	0x8280
                    8284   1339 _UPHY14_CMN_ANAREG_TOP_161	=	0x8284
                    8288   1340 _UPHY14_CMN_ANAREG_TOP_162	=	0x8288
                    828C   1341 _UPHY14_CMN_ANAREG_TOP_163	=	0x828c
                    8290   1342 _UPHY14_CMN_ANAREG_TOP_164	=	0x8290
                    8294   1343 _UPHY14_CMN_ANAREG_TOP_165	=	0x8294
                    8298   1344 _UPHY14_CMN_ANAREG_TOP_166	=	0x8298
                    829C   1345 _UPHY14_CMN_ANAREG_TOP_167	=	0x829c
                    82A0   1346 _UPHY14_CMN_ANAREG_TOP_168	=	0x82a0
                    82A4   1347 _UPHY14_CMN_ANAREG_TOP_169	=	0x82a4
                    82A8   1348 _UPHY14_CMN_ANAREG_TOP_170	=	0x82a8
                    82AC   1349 _UPHY14_CMN_ANAREG_TOP_171	=	0x82ac
                    82B0   1350 _UPHY14_CMN_ANAREG_TOP_172	=	0x82b0
                    82B4   1351 _UPHY14_CMN_ANAREG_TOP_173	=	0x82b4
                    82B8   1352 _UPHY14_CMN_ANAREG_TOP_174	=	0x82b8
                    82BC   1353 _UPHY14_CMN_ANAREG_TOP_175	=	0x82bc
                    82C0   1354 _UPHY14_CMN_ANAREG_TOP_176	=	0x82c0
                    82C4   1355 _UPHY14_CMN_ANAREG_TOP_177	=	0x82c4
                    82C8   1356 _UPHY14_CMN_ANAREG_TOP_178	=	0x82c8
                    82CC   1357 _UPHY14_CMN_ANAREG_TOP_179	=	0x82cc
                    82D0   1358 _UPHY14_CMN_ANAREG_TOP_180	=	0x82d0
                    82D4   1359 _UPHY14_CMN_ANAREG_TOP_181	=	0x82d4
                    82D8   1360 _UPHY14_CMN_ANAREG_TOP_182	=	0x82d8
                    82DC   1361 _UPHY14_CMN_ANAREG_TOP_183	=	0x82dc
                    82E0   1362 _UPHY14_CMN_ANAREG_TOP_184	=	0x82e0
                    82E4   1363 _UPHY14_CMN_ANAREG_TOP_185	=	0x82e4
                    82E8   1364 _UPHY14_CMN_ANAREG_TOP_186	=	0x82e8
                    82EC   1365 _UPHY14_CMN_ANAREG_TOP_187	=	0x82ec
                    82F0   1366 _UPHY14_CMN_ANAREG_TOP_188	=	0x82f0
                    82F4   1367 _UPHY14_CMN_ANAREG_TOP_189	=	0x82f4
                    82F8   1368 _UPHY14_CMN_ANAREG_TOP_190	=	0x82f8
                    82FC   1369 _UPHY14_CMN_ANAREG_TOP_191	=	0x82fc
                    8300   1370 _UPHY14_CMN_ANAREG_TOP_192	=	0x8300
                    8304   1371 _UPHY14_CMN_ANAREG_TOP_193	=	0x8304
                    8308   1372 _UPHY14_CMN_ANAREG_TOP_194	=	0x8308
                    830C   1373 _UPHY14_CMN_ANAREG_TOP_195	=	0x830c
                    8310   1374 _UPHY14_CMN_ANAREG_TOP_196	=	0x8310
                    8314   1375 _UPHY14_CMN_ANAREG_TOP_197	=	0x8314
                    8318   1376 _UPHY14_CMN_ANAREG_TOP_198	=	0x8318
                    831C   1377 _UPHY14_CMN_ANAREG_TOP_199	=	0x831c
                    8320   1378 _UPHY14_CMN_ANAREG_TOP_200	=	0x8320
                    8324   1379 _UPHY14_CMN_ANAREG_TOP_201	=	0x8324
                    8328   1380 _UPHY14_CMN_ANAREG_TOP_202	=	0x8328
                    832C   1381 _UPHY14_CMN_ANAREG_TOP_203	=	0x832c
                    8330   1382 _UPHY14_CMN_ANAREG_TOP_204	=	0x8330
                    8334   1383 _UPHY14_CMN_ANAREG_TOP_205	=	0x8334
                    8338   1384 _UPHY14_CMN_ANAREG_TOP_206	=	0x8338
                    833C   1385 _UPHY14_CMN_ANAREG_TOP_207	=	0x833c
                    8340   1386 _UPHY14_CMN_ANAREG_TOP_208	=	0x8340
                    8344   1387 _UPHY14_CMN_ANAREG_TOP_209	=	0x8344
                    8348   1388 _UPHY14_CMN_ANAREG_TOP_210	=	0x8348
                    834C   1389 _UPHY14_CMN_ANAREG_TOP_211	=	0x834c
                    8350   1390 _UPHY14_CMN_ANAREG_TOP_212	=	0x8350
                    8354   1391 _UPHY14_CMN_ANAREG_TOP_213	=	0x8354
                    8358   1392 _UPHY14_CMN_ANAREG_TOP_214	=	0x8358
                    2000   1393 _PM_CTRL_TX_LANE_REG1_LANE	=	0x2000
                    2004   1394 _PM_CTRL_TX_LANE_REG2_LANE	=	0x2004
                    2008   1395 _INPUT_TX_PIN_REG0_LANE	=	0x2008
                    200C   1396 _INPUT_TX_PIN_REG1_LANE	=	0x200c
                    2010   1397 _INPUT_TX_PIN_REG2_LANE	=	0x2010
                    2014   1398 _INPUT_TX_PIN_REG3_LANE	=	0x2014
                    2018   1399 _PM_CTRL_INTERRUPT_REG1_LANE	=	0x2018
                    201C   1400 _PM_CTRL_INTERRUPT_REG2	=	0x201c
                    2020   1401 _CLKGEN_TX_LANE_REG1_LANE	=	0x2020
                    2024   1402 _TX_SPEED_CONVERT_LANE	=	0x2024
                    2028   1403 _SPD_CTRL_INTERRUPT_REG1_LANE	=	0x2028
                    202C   1404 _SPD_CTRL_INTERRUPT_REG2	=	0x202c
                    2030   1405 _SPD_CTRL_TX_LANE_REG1_LANE	=	0x2030
                    2034   1406 _TX_SYSTEM_LANE	=	0x2034
                    203C   1407 _INPUT_TX_PIN_REG4_LANE	=	0x203c
                    2040   1408 _TX_CALIBRATION_LANE	=	0x2040
                    2044   1409 _DIG_TX_RSVD_REG0	=	0x2044
                    2048   1410 _INPUT_TX_PIN_REG5_LANE	=	0x2048
                    204C   1411 __FIELDNAME__LANE	=	0x204c
                    2050   1412 _PM_CTRL_INTERRUPT_ISR_REG1_LANE	=	0x2050
                    2054   1413 _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE	=	0x2054
                    2058   1414 _ANALOG_TX_REALTIME_REG_1	=	0x2058
                    205C   1415 _MON_TOP	=	0x205c
                    2100   1416 _PM_CTRL_RX_LANE_REG1_LANE	=	0x2100
                    2104   1417 _RX_SYSTEM_LANE	=	0x2104
                    2108   1418 _INPUT_RX_PIN_REG0_LANE	=	0x2108
                    210C   1419 _INPUT_RX_PIN_REG1_LANE	=	0x210c
                    2110   1420 _INPUT_RX_PIN_REG2_LANE	=	0x2110
                    2114   1421 _SPD_CTRL_RX_LANE_REG1_LANE	=	0x2114
                    2118   1422 _DIG_RX_RSVD_REG0	=	0x2118
                    211C   1423 _CLKGEN_RX_LANE_REG1_LANE	=	0x211c
                    2120   1424 _FRAME_SYNC_DET_REG0	=	0x2120
                    2124   1425 _FRAME_SYNC_DET_REG1	=	0x2124
                    2128   1426 _FRAME_SYNC_DET_REG2	=	0x2128
                    212C   1427 _FRAME_SYNC_DET_REG3	=	0x212c
                    2130   1428 _FRAME_SYNC_DET_REG4	=	0x2130
                    2134   1429 _FRAME_SYNC_DET_REG5	=	0x2134
                    2138   1430 _FRAME_SYNC_DET_REG6	=	0x2138
                    213C   1431 _CDR_LOCK_REG	=	0x213c
                    2140   1432 _RX_LANE_INTERRUPT	=	0x2140
                    2144   1433 _RX_LANE_INTERRUPT_MASK	=	0x2144
                    2148   1434 _RX_DATA_PATH_REG	=	0x2148
                    214C   1435 _INPUT_RX_PIN_REG3_LANE	=	0x214c
                    2150   1436 _RX_CALIBRATION_REG	=	0x2150
                    2158   1437 _RX_LANE_INTERRUPT_REG1	=	0x2158
                    2160   1438 _DTL_REG0	=	0x2160
                    2164   1439 _DTL_REG1	=	0x2164
                    2168   1440 _DTL_REG2	=	0x2168
                    216C   1441 _DTL_REG3	=	0x216c
                    2170   1442 _SQ_REG0	=	0x2170
                    4000   1443 _LANE_CFG0	=	0x4000
                    4004   1444 _LANE_STATUS0	=	0x4004
                    4008   1445 _LANE_CFG_STATUS2_LANE	=	0x4008
                    400C   1446 _LANE_CFG2_LANE	=	0x400c
                    4010   1447 _LANE_CFG4	=	0x4010
                    4014   1448 _LANE_CFG_STATUS3_LANE	=	0x4014
                    4018   1449 _LANE_DP_PIE8_CFG0_LANE	=	0x4018
                    401C   1450 _LANE_USB_DP_CFG1_LANE	=	0x401c
                    4020   1451 _LANE_USB_DP_CFG2_LANE	=	0x4020
                    4024   1452 _LANE_EQ_CFG0_LANE	=	0x4024
                    4028   1453 _LANE_EQ_CFG1_LANE	=	0x4028
                    402C   1454 _LANE_PRESET_CFG0_LANE	=	0x402c
                    4030   1455 _LANE_PRESET_CFG2_LANE	=	0x4030
                    4034   1456 _LANE_PRESET_CFG4_LANE	=	0x4034
                    4038   1457 _LANE_PRESET_CFG6_LANE	=	0x4038
                    403C   1458 _LANE_PRESET_CFG8_LANE	=	0x403c
                    4040   1459 _LANE_PRESET_CFG10_LANE	=	0x4040
                    4044   1460 _LANE_PRESET_CFG12_LANE	=	0x4044
                    4048   1461 _LANE_PRESET_CFG14_LANE	=	0x4048
                    404C   1462 _LANE_PRESET_CFG16_LANE	=	0x404c
                    4050   1463 _LANE_COEFF_MAX0_LANE	=	0x4050
                    4054   1464 _LANE_REMOTE_SET_LANE	=	0x4054
                    4058   1465 _LANE_EQ_16G_CFG0_LANE	=	0x4058
                    405C   1466 _LANE_16G_PRESET_CFG0_LANE	=	0x405c
                    4060   1467 _LANE_16G_PRESET_CFG2_LANE	=	0x4060
                    4064   1468 _LANE_16G_PRESET_CFG4_LANE	=	0x4064
                    4068   1469 _LANE_16G_PRESET_CFG6_LANE	=	0x4068
                    406C   1470 _LANE_16G_PRESET_CFG8_LANE	=	0x406c
                    4070   1471 _LANE_16G_PRESET_CFG10_LANE	=	0x4070
                    4074   1472 _LANE_16G_PRESET_CFG12_LANE	=	0x4074
                    4078   1473 _LANE_16G_PRESET_CFG14_LANE	=	0x4078
                    407C   1474 _LANE_16G_PRESET_CFG16_LANE	=	0x407c
                    4080   1475 _LANE_EQ_32G_CFG0_LANE	=	0x4080
                    4084   1476 _LANE_32G_PRESET_CFG0_LANE	=	0x4084
                    4088   1477 _LANE_32G_PRESET_CFG2_LANE	=	0x4088
                    408C   1478 _LANE_32G_PRESET_CFG4_LANE	=	0x408c
                    4090   1479 _LANE_32G_PRESET_CFG6_LANE	=	0x4090
                    4094   1480 _LANE_32G_PRESET_CFG8_LANE	=	0x4094
                    4098   1481 _LANE_32G_PRESET_CFG10_LANE	=	0x4098
                    409C   1482 _LANE_32G_PRESET_CFG12_LANE	=	0x409c
                    40A0   1483 _LANE_32G_PRESET_CFG14_LANE	=	0x40a0
                    40A4   1484 _LANE_32G_PRESET_CFG16_LANE	=	0x40a4
                    2200   1485 _MCU_CONTROL_LANE	=	0x2200
                    2204   1486 _MCU_GPIO	=	0x2204
                    2208   1487 _CACHE_DEBUG0	=	0x2208
                    220C   1488 _CACHE_DEBUG1	=	0x220c
                    2210   1489 _LANE_SYSTEM0	=	0x2210
                    2230   1490 _MCU_STATUS0_LANE	=	0x2230
                    2234   1491 _MCU_STATUS1_LANE	=	0x2234
                    2238   1492 _MCU_STATUS2_LANE	=	0x2238
                    223C   1493 _MCU_STATUS3_LANE	=	0x223c
                    2240   1494 _MCU_INT0_CONTROL	=	0x2240
                    2244   1495 _MCU_INT1_CONTROL	=	0x2244
                    2248   1496 _MCU_INT2_CONTROL	=	0x2248
                    224C   1497 _MCU_INT3_CONTROL	=	0x224c
                    2250   1498 _MCU_INT4_CONTROL	=	0x2250
                    2254   1499 _MCU_INT5_CONTROL	=	0x2254
                    2258   1500 _MCU_INT6_CONTROL	=	0x2258
                    225C   1501 _MCU_INT7_CONTROL	=	0x225c
                    2260   1502 _MCU_INT8_CONTROL	=	0x2260
                    2264   1503 _MCU_INT9_CONTROL	=	0x2264
                    2268   1504 _MCU_INT10_CONTROL	=	0x2268
                    226C   1505 _MCU_INT11_CONTROL	=	0x226c
                    2270   1506 _MCU_INT12_CONTROL	=	0x2270
                    2274   1507 _MCU_TIMER_CONTROL	=	0x2274
                    2278   1508 _MCU_TIMER0_CONTROL	=	0x2278
                    227C   1509 _MCU_TIMER1_CONTROL	=	0x227c
                    2280   1510 _MCU_TIMER2_CONTROL	=	0x2280
                    2284   1511 _MCU_TIMER3_CONTROL	=	0x2284
                    2288   1512 _MCU_IRQ_LANE	=	0x2288
                    228C   1513 _MCU_IRQ_MASK_LANE	=	0x228c
                    2290   1514 _MCU_MEM_REG1_LANE	=	0x2290
                    2294   1515 _MCU_MEM_REG2_LANE	=	0x2294
                    2298   1516 _MCU_TIMER_CTRL_1_LANE	=	0x2298
                    229C   1517 _MCU_TIMER_CTRL_2_LANE	=	0x229c
                    22A0   1518 _MCU_TIMER_CTRL_3_LANE	=	0x22a0
                    22A4   1519 _MCU_TIMER_CTRL_4_LANE	=	0x22a4
                    22A8   1520 _MCU_TIMER_CTRL_5_LANE	=	0x22a8
                    22AC   1521 _MCU_TIMER_CTRL_6_LANE	=	0x22ac
                    22B0   1522 _MCU_TIMER_CTRL_7_LANE	=	0x22b0
                    22B4   1523 _MCU_DEBUG0_LANE	=	0x22b4
                    22B8   1524 _MCU_DEBUG1_LANE	=	0x22b8
                    22BC   1525 _MCU_DEBUG2_LANE	=	0x22bc
                    22C0   1526 _MCU_DEBUG3_LANE	=	0x22c0
                    22C4   1527 _MCU_DEBUG_LANE	=	0x22c4
                    22C8   1528 _EXT_INT_CONTROL	=	0x22c8
                    22CC   1529 _ANA_IF_TRX_REG0	=	0x22cc
                    22D0   1530 _ANA_IF_DFEE_REG0	=	0x22d0
                    22D4   1531 _ANA_IF_DFEO_REG0	=	0x22d4
                    22D8   1532 _MCU_IRQ_ISR_LANE	=	0x22d8
                    22DC   1533 _MCU_WDT_LANE	=	0x22dc
                    22E0   1534 _MCU_INT_CONTROL_13	=	0x22e0
                    22E4   1535 _MCU_COMMAND0	=	0x22e4
                    22F4   1536 _MEM_ECC_ERR_ADDRESS0	=	0x22f4
                    22F8   1537 _XDATA_MEM_CHECKSUM_LANE0	=	0x22f8
                    22FC   1538 _XDATA_MEM_CHECKSUM_LANE1	=	0x22fc
                    2300   1539 _PT_CONTROL0	=	0x2300
                    2304   1540 _PT_CONTROL1	=	0x2304
                    2308   1541 _PT_USER_PATTERN0	=	0x2308
                    230C   1542 _PT_USER_PATTERN1	=	0x230c
                    2310   1543 _PT_USER_PATTERN2	=	0x2310
                    2314   1544 _PT_COUNTER0	=	0x2314
                    2318   1545 _PT_COUNTER1	=	0x2318
                    231C   1546 _PT_COUNTER2	=	0x231c
                    2400   1547 _DFE_CTRL_REG0	=	0x2400
                    2404   1548 _DFE_CTRL_REG1	=	0x2404
                    2408   1549 _DFE_CTRL_REG2	=	0x2408
                    240C   1550 _DFE_CTRL_REG3	=	0x240c
                    2410   1551 _RX_EQ_CLK_CTRL	=	0x2410
                    2414   1552 _DFE_CTRL_REG4	=	0x2414
                    2418   1553 _DFE_ANA_REG0	=	0x2418
                    241C   1554 _DFE_ANA_REG1	=	0x241c
                    2420   1555 _DFE_STEP_REG0	=	0x2420
                    2424   1556 _DFE_STEP_REG1	=	0x2424
                    2430   1557 _DFE_FEN_EVEN_REG	=	0x2430
                    2434   1558 _DFE_FEN_ODD_REG	=	0x2434
                    2438   1559 _DFE_DC_EVEN_REG8	=	0x2438
                    243C   1560 _DFE_DC_ODD_REG8	=	0x243c
                    2440   1561 _DFE_FEXT_EVEN_REG0	=	0x2440
                    2444   1562 _DFE_FEXT_EVEN_REG1	=	0x2444
                    2448   1563 _DFE_FEXT_EVEN_REG2	=	0x2448
                    244C   1564 _DFE_FEXT_EVEN_REG3	=	0x244c
                    2450   1565 _DFE_FEXT_EVEN_REG4	=	0x2450
                    2454   1566 _DFE_FEXT_EVEN_REG5	=	0x2454
                    2458   1567 _DFE_FEXT_EVEN_REG6	=	0x2458
                    245C   1568 _DFE_FEXT_EVEN_REG7	=	0x245c
                    2460   1569 _DFE_FEXT_ODD_REG0	=	0x2460
                    2464   1570 _DFE_FEXT_ODD_REG1	=	0x2464
                    2468   1571 _DFE_FEXT_ODD_REG2	=	0x2468
                    246C   1572 _DFE_FEXT_ODD_REG3	=	0x246c
                    2470   1573 _DFE_FEXT_ODD_REG4	=	0x2470
                    2474   1574 _DFE_FEXT_ODD_REG5	=	0x2474
                    2478   1575 _DFE_FEXT_ODD_REG6	=	0x2478
                    247C   1576 _DFE_FEXT_ODD_REG7	=	0x247c
                    2480   1577 _DFE_READ_EVEN_SM_REG0	=	0x2480
                    2484   1578 _DFE_READ_EVEN_SM_REG1	=	0x2484
                    2488   1579 _DFE_READ_EVEN_SM_REG2	=	0x2488
                    248C   1580 _DFE_READ_EVEN_SM_REG3	=	0x248c
                    2490   1581 _DFE_READ_EVEN_SM_REG4	=	0x2490
                    2494   1582 _DFE_READ_EVEN_SM_REG5	=	0x2494
                    2498   1583 _DFE_READ_EVEN_SM_REG6	=	0x2498
                    249C   1584 _DFE_READ_EVEN_SM_REG7	=	0x249c
                    24A0   1585 _DFE_READ_ODD_SM_REG0	=	0x24a0
                    24A4   1586 _DFE_READ_ODD_SM_REG1	=	0x24a4
                    24A8   1587 _DFE_READ_ODD_SM_REG2	=	0x24a8
                    24AC   1588 _DFE_READ_ODD_SM_REG3	=	0x24ac
                    24B0   1589 _DFE_READ_ODD_SM_REG4	=	0x24b0
                    24B4   1590 _DFE_READ_ODD_SM_REG5	=	0x24b4
                    24B8   1591 _DFE_READ_ODD_SM_REG6	=	0x24b8
                    24BC   1592 _DFE_READ_ODD_SM_REG7	=	0x24bc
                    24C0   1593 _DFE_READ_EVEN_SM_REG8	=	0x24c0
                    24C4   1594 _DFE_READ_ODD_SM_REG8	=	0x24c4
                    24D0   1595 _DFE_READ_EVEN_2C_REG0	=	0x24d0
                    24D4   1596 _DFE_READ_EVEN_2C_REG1	=	0x24d4
                    24D8   1597 _DFE_READ_EVEN_2C_REG2	=	0x24d8
                    24DC   1598 _DFE_READ_EVEN_2C_REG3	=	0x24dc
                    24E0   1599 _DFE_READ_EVEN_2C_REG4	=	0x24e0
                    24E4   1600 _DFE_READ_EVEN_2C_REG5	=	0x24e4
                    24E8   1601 _DFE_READ_EVEN_2C_REG6	=	0x24e8
                    24EC   1602 _DFE_READ_EVEN_2C_REG7	=	0x24ec
                    24F0   1603 _DFE_READ_ODD_2C_REG0	=	0x24f0
                    24F4   1604 _DFE_READ_ODD_2C_REG1	=	0x24f4
                    24F8   1605 _DFE_READ_ODD_2C_REG2	=	0x24f8
                    24FC   1606 _DFE_READ_ODD_2C_REG3	=	0x24fc
                    2500   1607 _DFE_READ_ODD_2C_REG4	=	0x2500
                    2504   1608 _DFE_READ_ODD_2C_REG5	=	0x2504
                    2508   1609 _DFE_READ_ODD_2C_REG6	=	0x2508
                    250C   1610 _DFE_READ_ODD_2C_REG7	=	0x250c
                    2510   1611 _DFE_READ_EVEN_2C_REG8	=	0x2510
                    2514   1612 _DFE_READ_ODD_2C_REG8	=	0x2514
                    2518   1613 _CAL_OFST_REG0	=	0x2518
                    251C   1614 _CAL_OFST_REG1	=	0x251c
                    2520   1615 _CAL_OFST_REG2	=	0x2520
                    2530   1616 _DFE_DCE_REG0	=	0x2530
                    2540   1617 _DFE_STATIC_LANE_REG0	=	0x2540
                    2544   1618 _DFE_STATIC_LANE_REG1	=	0x2544
                    2548   1619 _DFE_STATIC_LANE_REG3	=	0x2548
                    254C   1620 _DFE_STATIC_LANE_REG4	=	0x254c
                    2550   1621 _DFE_STATIC_LANE_REG5	=	0x2550
                    2554   1622 _DFE_STATIC_LANE_REG6	=	0x2554
                    2560   1623 _EOM_VLD_REG0	=	0x2560
                    2564   1624 _EOM_VLD_REG1	=	0x2564
                    2568   1625 _EOM_VLD_REG2	=	0x2568
                    256C   1626 _EOM_VLD_REG3	=	0x256c
                    2570   1627 _EOM_ERR_REG0	=	0x2570
                    2574   1628 _EOM_ERR_REG1	=	0x2574
                    2578   1629 _EOM_ERR_REG2	=	0x2578
                    257C   1630 _EOM_ERR_REG3	=	0x257c
                    2580   1631 _EOM_REG0	=	0x2580
                    25F0   1632 _EOM_VLD_REG4	=	0x25f0
                    25F4   1633 _LANE_MARGIN_REG0	=	0x25f4
                    6000   1634 _CAL_CTRL1_LANE	=	0x6000
                    6004   1635 _CAL_CTRL2_LANE	=	0x6004
                    6008   1636 _CAL_CTRL3_LANE	=	0x6008
                    600C   1637 _CAL_CTRL4_LANE	=	0x600c
                    6010   1638 _CAL_SAVE_DATA1_LANE	=	0x6010
                    6014   1639 _CAL_SAVE_DATA2_LANE	=	0x6014
                    6018   1640 _CAL_SAVE_DATA3_LANE	=	0x6018
                    601C   1641 _PHY_REMOTE_CTRL_COMMAND_LANE	=	0x601c
                    6020   1642 _PHY_REMOTE_CTRL_VALUE_LANE	=	0x6020
                    6024   1643 _PHY_LOCAL_VALUE_LANE	=	0x6024
                    6028   1644 _TRX_TRAIN_IF_TIMERS1_LANE	=	0x6028
                    602C   1645 _TRX_TRAIN_IF_TIMERS2_LANE	=	0x602c
                    6030   1646 _TRX_TRAIN_IF_TIMERS_ENABLE_LANE	=	0x6030
                    6034   1647 _DFE_CONTROL_0	=	0x6034
                    6038   1648 _DFE_CONTROL_1	=	0x6038
                    6040   1649 _DFE_CONTROL_2	=	0x6040
                    6044   1650 _DFE_CONTROL_3	=	0x6044
                    6048   1651 _DFE_CONTROL_4	=	0x6048
                    604C   1652 _DFE_CONTROL_5	=	0x604c
                    6050   1653 _TRAIN_CONTROL_0	=	0x6050
                    6054   1654 _TRAIN_CONTROL_1	=	0x6054
                    6058   1655 _TRAIN_CONTROL_2	=	0x6058
                    605C   1656 _RPTA_CONFIG_0	=	0x605c
                    6060   1657 _RPTA_CONFIG_1	=	0x6060
                    6064   1658 _DLL_CAL	=	0x6064
                    6068   1659 _TRAIN_PARA_0	=	0x6068
                    606C   1660 _TRAIN_PARA_1	=	0x606c
                    6070   1661 _TRAIN_PARA_2	=	0x6070
                    6074   1662 _TRAIN_PARA_3	=	0x6074
                    6078   1663 _DFE_CONTROL_6	=	0x6078
                    607C   1664 _DFE_TEST_0	=	0x607c
                    6080   1665 _DFE_TEST_1	=	0x6080
                    6084   1666 _DFE_TEST_4	=	0x6084
                    6088   1667 _DFE_TEST_5	=	0x6088
                    608C   1668 _DFE_CONTROL_7	=	0x608c
                    6090   1669 _DFE_CONTROL_8	=	0x6090
                    6094   1670 _DFE_CONTROL_9	=	0x6094
                    6098   1671 _DFE_CONTROL_10	=	0x6098
                    609C   1672 _DFE_CONTROL_11	=	0x609c
                    60A0   1673 _CDS_CTRL_REG0	=	0x60a0
                    60A4   1674 _CDS_CTRL_REG1	=	0x60a4
                    60A8   1675 _ESM_POP_P_CNT_LOW_LANE	=	0x60a8
                    60AC   1676 _ESM_ERR_P_CNT_LOW_LANE	=	0x60ac
                    60B0   1677 _ESM_ERR_POP_CNT_HIGH_LANE	=	0x60b0
                    60B4   1678 _TRAIN_CONTROL_3	=	0x60b4
                    60B8   1679 _TRAIN_CONTROL_4	=	0x60b8
                    60BC   1680 _TRAIN_CONTROL_5	=	0x60bc
                    60C0   1681 _TRAIN_CONTROL_6	=	0x60c0
                    60C4   1682 _TRAIN_CONTROL_7	=	0x60c4
                    60C8   1683 _TRAIN_CONTROL_8	=	0x60c8
                    60CC   1684 _TRAIN_CONTROL_9	=	0x60cc
                    60D0   1685 _TRAIN_CONTROL_10	=	0x60d0
                    60D4   1686 _TRAIN_CONTROL_11	=	0x60d4
                    60D8   1687 _TRAIN_CONTROL_12	=	0x60d8
                    60DC   1688 _ESM_POP_N_CNT_LOW_LANE	=	0x60dc
                    60E0   1689 _ESM_ERR_N_CNT_LOW_LANE	=	0x60e0
                    60E4   1690 _TRAIN_CONTROL_13	=	0x60e4
                    60E8   1691 _TRAIN_CONTROL_14	=	0x60e8
                    60EC   1692 _TRAIN_CONTROL_15	=	0x60ec
                    60F0   1693 _TRAIN_CONTROL_16	=	0x60f0
                    60F4   1694 _TRAIN_CONTROL_17	=	0x60f4
                    60F8   1695 _END_XDAT_LANE	=	0x60f8
                    A000   1696 _TX_CMN_REG	=	0xa000
                    A008   1697 _DTX_REG0	=	0xa008
                    A00C   1698 _DTX_REG1	=	0xa00c
                    A010   1699 _DTX_REG2	=	0xa010
                    A014   1700 _DTX_REG3	=	0xa014
                    A018   1701 _DTX_REG4	=	0xa018
                    A01C   1702 _DTX_PHY_ALIGN_REG0	=	0xa01c
                    A024   1703 _DTX_PHY_ALIGN_REG1	=	0xa024
                    A028   1704 _DTX_PHY_ALIGN_REG2	=	0xa028
                    A02C   1705 _SRIS_REG0	=	0xa02c
                    A030   1706 _SRIS_REG1	=	0xa030
                    A100   1707 _RX_CMN_0	=	0xa100
                    A110   1708 _DFE_STATIC_REG0	=	0xa110
                    A114   1709 _DFE_STATIC_REG1	=	0xa114
                    A118   1710 _DFE_STATIC_REG3	=	0xa118
                    A11C   1711 _DFE_STATIC_REG4	=	0xa11c
                    A120   1712 _DFE_STATIC_REG5	=	0xa120
                    A124   1713 _DFE_STATIC_REG6	=	0xa124
                    4200   1714 _GLOB_RST_CLK_CTRL	=	0x4200
                    4204   1715 _GLOB_CLK_SRC_LO	=	0x4204
                    4208   1716 _GLOB_CLK_SRC_HI	=	0x4208
                    420C   1717 _GLOB_MISC_CTRL	=	0x420c
                    4210   1718 _GLOB_DP_SAL_CFG	=	0x4210
                    4214   1719 _GLOB_DP_SAL_CFG1	=	0x4214
                    4218   1720 _GLOB_DP_SAL_CFG3	=	0x4218
                    421C   1721 _GLOB_DP_SAL_CFG5	=	0x421c
                    4220   1722 _GLOB_PM_CFG0	=	0x4220
                    4224   1723 _GLOB_COUNTER_CTRL	=	0x4224
                    4228   1724 _GLOB_COUNTER_HI	=	0x4228
                    422C   1725 _GLOB_PM_DP_CTRL	=	0x422c
                    4230   1726 _GLOB_DP_BAL_CFG0	=	0x4230
                    4234   1727 _GLOB_DP_BAL_CFG2	=	0x4234
                    4238   1728 _GLOB_DP_BAL_CFG4	=	0x4238
                    423C   1729 _GLOB_BIST_CTRL	=	0x423c
                    4240   1730 _GLOB_BIST_LANE_TYPE	=	0x4240
                    4244   1731 _GLOB_BIST_START	=	0x4244
                    4248   1732 _GLOB_BIST_MASK	=	0x4248
                    424C   1733 _GLOB_BIST_RESULT	=	0x424c
                    4250   1734 _GLOB_BIST_SEQR_CFG	=	0x4250
                    4254   1735 _GLOB_BIST_DATA_HI	=	0x4254
                    4258   1736 _GLOB_PIPE_REVISION	=	0x4258
                    425C   1737 _GLOB_L1_SUBSTATES_CFG	=	0x425c
                    A200   1738 _MCU_CONTROL_0	=	0xa200
                    A204   1739 _MCU_CONTROL_1	=	0xa204
                    A208   1740 _MCU_CONTROL_2	=	0xa208
                    A20C   1741 _MCU_CONTROL_3	=	0xa20c
                    A210   1742 _MCU_CONTROL_4	=	0xa210
                    A214   1743 _MCU_DEBUG0	=	0xa214
                    A218   1744 _MCU_DEBUG1	=	0xa218
                    A21C   1745 _MEMORY_CONTROL_0	=	0xa21c
                    A220   1746 _MEMORY_CONTROL_1	=	0xa220
                    A224   1747 _MEMORY_CONTROL_2	=	0xa224
                    A228   1748 _MEMORY_CONTROL_3	=	0xa228
                    A22C   1749 _MEMORY_CONTROL_4	=	0xa22c
                    A234   1750 _MCU_INFO_0	=	0xa234
                    A238   1751 _MCU_INFO_1	=	0xa238
                    A23C   1752 _MCU_INFO_2	=	0xa23c
                    A240   1753 _MCU_INFO_3	=	0xa240
                    A244   1754 _MEM_CMN_ECC_ERR_ADDRESS0	=	0xa244
                    A2E0   1755 _ANA_IF_CMN_REG1	=	0xa2e0
                    A2E4   1756 _MEM_IRQ	=	0xa2e4
                    A2E8   1757 _MEM_IRQ_MASK	=	0xa2e8
                    A2EC   1758 _ANA_IF_CMN_REG0	=	0xa2ec
                    A2F0   1759 _APB_CONTROL_REG	=	0xa2f0
                    A2F4   1760 _MEM_IRQ_CLEAR	=	0xa2f4
                    A2F8   1761 _MCU_SYNC1	=	0xa2f8
                    A2FC   1762 _MCU_SYNC2	=	0xa2fc
                    A300   1763 _TEST0	=	0xa300
                    A304   1764 _TEST1	=	0xa304
                    A308   1765 _TEST2	=	0xa308
                    A30C   1766 _TEST3	=	0xa30c
                    A310   1767 _TEST4	=	0xa310
                    A314   1768 _SYSTEM	=	0xa314
                    A318   1769 _PM_CMN_REG1	=	0xa318
                    A31C   1770 _INPUT_CMN_PIN_REG0	=	0xa31c
                    A320   1771 _INPUT_CMN_PIN_REG1	=	0xa320
                    A324   1772 _INPUT_CMN_PIN_REG2	=	0xa324
                    A328   1773 _ANA_TSEN_CONTROL	=	0xa328
                    A32C   1774 _PLLCAL_REG0	=	0xa32c
                    A330   1775 _PLLCAL_REG1	=	0xa330
                    A334   1776 _CLKGEN_CMN_REG1	=	0xa334
                    A338   1777 _SPD_CMN_REG1	=	0xa338
                    A33C   1778 _OUTPUT_CMN_PIN_REG0	=	0xa33c
                    A340   1779 _CMN_CALIBRATION	=	0xa340
                    A344   1780 __FIELDNAME_	=	0xa344
                    A348   1781 _INPUT_CMN_PIN_REG3	=	0xa348
                    A34C   1782 _PM_CMN_REG2	=	0xa34c
                    A354   1783 _TEST5	=	0xa354
                    A358   1784 _XDATA_MEM_CHECKSUM_CMN_0	=	0xa358
                    A35C   1785 _XDATA_MEM_CHECKSUM_CMN_1	=	0xa35c
                    A360   1786 _XDATA_MEM_CHECKSUM_CMN_2	=	0xa360
                    A364   1787 _MCU_SDT_CMN	=	0xa364
                    A368   1788 _CMN_CACHE_DEBUG0	=	0xa368
                    A36C   1789 _MCU_INT_ADDR	=	0xa36c
                    A370   1790 _CMN_ISR_2	=	0xa370
                    A374   1791 _CMN_ISR_MASK_2	=	0xa374
                    A378   1792 _CMN_ISR_CLEAR_2	=	0xa378
                    A37C   1793 _CMN_MCU_GPIO	=	0xa37c
                    A380   1794 _CMN_CACHE_DEBUG1	=	0xa380
                    A384   1795 _CMN_MCU_TIMER_CONTROL	=	0xa384
                    A388   1796 _CMN_MCU_TIMER_CTRL_2_LANE	=	0xa388
                    A38C   1797 _CMN_MCU_TIMER_CTRL_3_LANE	=	0xa38c
                    A390   1798 _CMN_MCU_TIMER_CTRL_4_LANE	=	0xa390
                    A394   1799 _CMN_MCU_TIMER_CTRL_5_LANE	=	0xa394
                    A398   1800 _CMN_MCU_TIMER0_CONTROL	=	0xa398
                    A39C   1801 _CMN_MCU_TIMER1_CONTROL	=	0xa39c
                    A3A0   1802 _CMN_MCU_TIMER2_CONTROL	=	0xa3a0
                    A3A4   1803 _CMN_MCU_TIMER3_CONTROL	=	0xa3a4
                    A3A8   1804 _CMN_ISR_1	=	0xa3a8
                    A3AC   1805 _CMN_ISR_MASK_1	=	0xa3ac
                    A3B0   1806 _SET_LANE_ISR	=	0xa3b0
                    A3F4   1807 _CMN_MCU_REG	=	0xa3f4
                    A3F8   1808 _CID_REG0	=	0xa3f8
                    A3FC   1809 _CID_REG1	=	0xa3fc
                    E600   1810 _FW_REV	=	0xe600
                    E604   1811 _CONTROL_CONFIG0	=	0xe604
                    E608   1812 _CONTROL_CONFIG1	=	0xe608
                    E60C   1813 _CONTROL_CONFIG2	=	0xe60c
                    E610   1814 _CONTROL_CONFIG3	=	0xe610
                    E614   1815 _CONTROL_CONFIG4	=	0xe614
                    E618   1816 _CONTROL_CONFIG5	=	0xe618
                    E61C   1817 _CONTROL_CONFIG6	=	0xe61c
                    E620   1818 _CONTROL_CONFIG7	=	0xe620
                    E624   1819 _CAL_DATA0	=	0xe624
                    E628   1820 _TRAIN_IF_CONFIG	=	0xe628
                    E62C   1821 _CONTROL_CONFIG8	=	0xe62c
                    E630   1822 _CONTROL_CONFIG9	=	0xe630
                    E634   1823 _CON_CAL_STEP_SIZE1	=	0xe634
                    E638   1824 _CON_CAL_STEP_SIZE2	=	0xe638
                    E63C   1825 _CON_CAL_STEP_SIZE3	=	0xe63c
                    E640   1826 _CON_CAL_STEP_SIZE4	=	0xe640
                    E644   1827 _CON_CAL_STEP_SIZE5	=	0xe644
                    E648   1828 _CAL_TIME_OUT_AND_DIS	=	0xe648
                    E64C   1829 _CAL_STATUS_READ	=	0xe64c
                    E650   1830 _MCU_CONFIG	=	0xe650
                    E654   1831 _CAL_DATA1	=	0xe654
                    E658   1832 _LOOP_CNTS	=	0xe658
                    E65C   1833 _MCU_CONFIG1	=	0xe65c
                    E660   1834 _TIMER_SEL1	=	0xe660
                    E664   1835 _TIMER_SEL2	=	0xe664
                    E668   1836 _TIMER_SEL3	=	0xe668
                    E66C   1837 _G_SELLV_TXCLK	=	0xe66c
                    E670   1838 _G_SELLV_TXDATA	=	0xe670
                    E674   1839 _G_SELLV_TXPRE	=	0xe674
                    E678   1840 _G_SELLV_RXEOMCLK	=	0xe678
                    E67C   1841 _G_SELLV_RXDATACLK	=	0xe67c
                    E680   1842 _G_SELLV_RXSAMPLER	=	0xe680
                    E684   1843 _SAS_PRESET0_TB	=	0xe684
                    E688   1844 _SAS_PRESET1_TB	=	0xe688
                    E68C   1845 _SAS_PRESET2_TB	=	0xe68c
                    E690   1846 _ETH_PRESET0_TB	=	0xe690
                    E694   1847 _ETH_PRESET1_TB	=	0xe694
                    E698   1848 _TX_SAVE_0	=	0xe698
                    E69C   1849 _TX_SAVE_1	=	0xe69c
                    E6A0   1850 _TX_SAVE_2	=	0xe6a0
                    E6A4   1851 _TX_SAVE_3	=	0xe6a4
                    E6A8   1852 _TX_SAVE_4	=	0xe6a8
                    E6AC   1853 _CDS_EYE_CLK_THR	=	0xe6ac
                    E6B0   1854 _SYNC_INFO	=	0xe6b0
                    E6B4   1855 _MCU_INFO_4	=	0xe6b4
                    E6B8   1856 _MCU_INFO_5	=	0xe6b8
                    E6BC   1857 _MCU_INFO_12	=	0xe6bc
                    E6C0   1858 _MCU_INFO_13	=	0xe6c0
                    E6C4   1859 _END_XDAT_CMN	=	0xe6c4
                    2600   1860 _DME_ENC_REG0	=	0x2600
                    2604   1861 _DME_ENC_REG1	=	0x2604
                    2608   1862 _DME_ENC_REG2	=	0x2608
                    260C   1863 _DME_DEC_REG0	=	0x260c
                    2610   1864 _DME_DEC_REG1	=	0x2610
                    2614   1865 _TX_TRAIN_IF_REG0	=	0x2614
                    2618   1866 _TX_TRAIN_IF_REG1	=	0x2618
                    261C   1867 _TX_TRAIN_IF_REG2	=	0x261c
                    2620   1868 _TX_TRAIN_IF_REG3	=	0x2620
                    2624   1869 _TX_TRAIN_PATTTERN_REG0	=	0x2624
                    2628   1870 _TX_TRAIN_DRIVER_REG0	=	0x2628
                    262C   1871 _TX_TRAIN_DRIVER_REG1	=	0x262c
                    2630   1872 _TX_TRAIN_DRIVER_REG2	=	0x2630
                    2634   1873 _TX_TRAIN_DEFAULT_REG0	=	0x2634
                    2638   1874 _TX_TRAIN_DEFAULT_REG1	=	0x2638
                    263C   1875 _TX_TRAIN_DEFAULT_REG2	=	0x263c
                    2640   1876 _TX_TRAIN_DEFAULT_REG3	=	0x2640
                    2644   1877 _TX_TRAIN_DEFAULT_REG4	=	0x2644
                    2648   1878 _TX_TRAIN_DEFAULT_REG5	=	0x2648
                    264C   1879 _TX_EMPH_CTRL_REG0	=	0x264c
                    2650   1880 _LINK_TRAIN_MODE0	=	0x2650
                    2654   1881 _TX_DRV_RD_OUT_REG0	=	0x2654
                    2658   1882 _TX_AMP_CTRL_REG0	=	0x2658
                    265C   1883 _TRX_TRAIN_IF_INTERRUPT_LANE	=	0x265c
                    2660   1884 _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE	=	0x2660
                    2664   1885 _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE	=	0x2664
                    2668   1886 _TX_TRAIN_IF_REG4	=	0x2668
                    266C   1887 _TX_TRAIN_IF_REG5	=	0x266c
                    2670   1888 _TX_TRAIN_IF_REG6	=	0x2670
                    2674   1889 _TX_TRAIN_IF_REG7	=	0x2674
                    2678   1890 _TX_TRAIN_CTRL_LANE	=	0x2678
                    267C   1891 _TX_TRAIN_IF_REG8	=	0x267c
                    6100   1892 _DFE_READ_EVEN_REG0	=	0x6100
                    6104   1893 _DFE_READ_EVEN_REG1	=	0x6104
                    6108   1894 _DFE_READ_EVEN_REG2	=	0x6108
                    610C   1895 _DFE_READ_EVEN_REG3	=	0x610c
                    6110   1896 _DFE_READ_EVEN_REG4	=	0x6110
                    6114   1897 _DFE_READ_EVEN_REG5	=	0x6114
                    6118   1898 _DFE_READ_EVEN_REG6	=	0x6118
                    611C   1899 _DFE_READ_EVEN_REG7	=	0x611c
                    6120   1900 _DFE_READ_ODD_REG0	=	0x6120
                    6124   1901 _DFE_READ_ODD_REG1	=	0x6124
                    6128   1902 _DFE_READ_ODD_REG2	=	0x6128
                    612C   1903 _DFE_READ_ODD_REG3	=	0x612c
                    6130   1904 _DFE_READ_ODD_REG4	=	0x6130
                    6134   1905 _DFE_READ_ODD_REG5	=	0x6134
                    6138   1906 _DFE_READ_ODD_REG6	=	0x6138
                    613C   1907 _DFE_READ_ODD_REG7	=	0x613c
                    6140   1908 _DFE_READ_EVEN_REG8	=	0x6140
                    6144   1909 _DFE_READ_ODD_REG8	=	0x6144
                    6148   1910 _DFE_READ_F0A_EVEN	=	0x6148
                    614C   1911 _DFE_READ_F0A_ODD	=	0x614c
                    6150   1912 _DFE_READ_F0B_EVEN	=	0x6150
                    6154   1913 _DFE_READ_F0B_ODD	=	0x6154
                    6158   1914 _DFE_READ_F0D_EVEN	=	0x6158
                    615C   1915 _DFE_READ_F0D_ODD	=	0x615c
                    6160   1916 _DFE_READ_F0D_LEFT_EVEN	=	0x6160
                    6164   1917 _DFE_READ_F0D_LEFT_ODD	=	0x6164
                    6168   1918 _DFE_READ_F0D_RIGHT_EVEN	=	0x6168
                    616C   1919 _DFE_READ_F0D_RIGHT_ODD	=	0x616c
                    6170   1920 _CDS_READ_MISC0	=	0x6170
                    6174   1921 _CDS_READ_MISC1	=	0x6174
                    6214   1922 _TXTRAIN_IF_REG0	=	0x6214
                    E000   1923 _lc_speedtable	=	0xe000
                    E1C0   1924 _ring_speedtable	=	0xe1c0
                    E5C0   1925 _phy_mode_cmn_table	=	0xe5c0
                    6300   1926 _max_gen	=	0x6300
                    6301   1927 _min_gen	=	0x6301
                    6304   1928 _speedtable	=	0x6304
                    65D4   1929 _phy_mode_lane_table	=	0x65d4
                    60B4   1930 _rc_save	=	0x60b4
                    60D0   1931 _txffe_save	=	0x60d0
                    60E4   1932 _phase_save	=	0x60e4
                    6030   1933 _train_gn1_index	=	0x6030
                    6031   1934 _train_g1_index	=	0x6031
                    6032   1935 _train_g0_index	=	0x6032
                    E6B0   1936 _local_tx_preset_tb	=	0xe6b0
                    E5C1   1937 _cmx_cal_lcvco_dac	=	0xe5c1
                    E5C1   1938 _cmx_cal_lcvco_dac_lsb	=	0xe5c1
                    E5C4   1939 _cmx_cal_lcvco_dac_msb	=	0xe5c4
                    E5CA   1940 _cmx_cal_lccap_msb	=	0xe5ca
                    E5C8   1941 _cmx_cal_lccap_lsb	=	0xe5c8
                    E5CC   1942 _cmx_cal_plldcc	=	0xe5cc
                    E5D0   1943 _cmx_cal_pll_speed_ring	=	0xe5d0
                    E5D4   1944 _cmx_cal_pll_sllp_dac_coarse_ring	=	0xe5d4
                    E5D8   1945 _cmx_cal_sllp_dac_fine_ring	=	0xe5d8
                    65D4   1946 _lnx_cal_txdcc_pdiv	=	0x65d4
                    65D8   1947 _lnx_cal_txdcc_pdiv_hg	=	0x65d8
                    65DA   1948 _lnx_cal_txdcc	=	0x65da
                    65DE   1949 _lnx_cal_txdcc_hg	=	0x65de
                    65E0   1950 _lnx_cal_rxdcc_dll	=	0x65e0
                    65E4   1951 _lnx_cal_rxdcc_dll_hg	=	0x65e4
                    65E6   1952 _lnx_cal_rxdcc_data	=	0x65e6
                    65F0   1953 _lnx_cal_rxdcc_data_hg	=	0x65f0
                    65F5   1954 _lnx_cal_rxdcc_eom	=	0x65f5
                    65FF   1955 _lnx_cal_rxdcc_eom_hg	=	0x65ff
                    6604   1956 _lnx_cal_dll_gmsel	=	0x6604
                    6606   1957 _lnx_cal_vdda_dll_sel	=	0x6606
                    660A   1958 _lnx_cal_dll_eom_gmsel	=	0x660a
                    660C   1959 _lnx_cal_vdda_dll_eom_sel	=	0x660c
                    6610   1960 _lnx_cal_eom_dpher	=	0x6610
                    6612   1961 _lnx_cal_align90_dummy_clk	=	0x6612
                    661A   1962 _lnx_cal_align90_dac	=	0x661a
                    6622   1963 _lnx_cal_align90_gm	=	0x6622
                    662A   1964 _lnx_cal_sellv_txdata	=	0x662a
                    6634   1965 _lnx_cal_sellv_txclk	=	0x6634
                    663E   1966 _lnx_cal_sellv_rxdataclk	=	0x663e
                    6648   1967 _lnx_cal_sellv_txpre	=	0x6648
                    6652   1968 _lnx_cal_sellv_rxsampler	=	0x6652
                    665C   1969 _lnx_cal_sellv_rxeomclk	=	0x665c
                    6666   1970 _lnx_spdoft_tx_preset_index_lane	=	0x6666
                    6490   1971 _lnx_calx_txdcc_pdiv	=	0x6490
                    6496   1972 _lnx_calx_txdcc_pdiv_hg	=	0x6496
                    6499   1973 _lnx_calx_txdcc	=	0x6499
                    649F   1974 _lnx_calx_txdcc_hg	=	0x649f
                    64A2   1975 _lnx_calx_rxdcc_dll	=	0x64a2
                    64A8   1976 _lnx_calx_rxdcc_dll_hg	=	0x64a8
                    64AB   1977 _lnx_calx_dll_gmsel	=	0x64ab
                    64AE   1978 _lnx_calx_vdda_dll_sel	=	0x64ae
                    64B4   1979 _lnx_calx_dll_eom_gmsel	=	0x64b4
                    64B7   1980 _lnx_calx_vdda_dll_eom_sel	=	0x64b7
                    64BD   1981 _lnx_calx_eom_dpher	=	0x64bd
                    64C0   1982 _lnx_calx_align90_dummy_clk	=	0x64c0
                    64CC   1983 _lnx_calx_align90_dac	=	0x64cc
                    64D8   1984 _lnx_calx_align90_gm	=	0x64d8
                    6100   1985 _cds28	=	0x6100
                    6178   1986 _dfe_sm	=	0x6178
                    61B8   1987 _dfe_sm_dc	=	0x61b8
                    61C0   1988 _dfe_sm_save	=	0x61c0
                    03FC   1989 _UPHY_ANAREG_REV_0	=	0x03fc
                    E684   1990 _tx_tb	=	0xe684
                    E698   1991 _train_save_tb	=	0xe698
                    607C   1992 _sq_thrs_ratio_tb	=	0x607c
                           1993 ;--------------------------------------------------------
                           1994 ; absolute external ram data
                           1995 ;--------------------------------------------------------
                           1996 	.area XABS    (ABS,XDATA)
                           1997 ;--------------------------------------------------------
                           1998 ; external initialized ram data
                           1999 ;--------------------------------------------------------
                           2000 	.area HOME    (CODE)
                           2001 	.area GSINIT0 (CODE)
                           2002 	.area GSINIT1 (CODE)
                           2003 	.area GSINIT2 (CODE)
                           2004 	.area GSINIT3 (CODE)
                           2005 	.area GSINIT4 (CODE)
                           2006 	.area GSINIT5 (CODE)
                           2007 	.area GSINIT  (CODE)
                           2008 	.area GSFINAL (CODE)
                           2009 	.area CSEG    (CODE)
                           2010 ;--------------------------------------------------------
                           2011 ; global & static initialisations
                           2012 ;--------------------------------------------------------
                           2013 	.area HOME    (CODE)
                           2014 	.area GSINIT  (CODE)
                           2015 	.area GSFINAL (CODE)
                           2016 	.area GSINIT  (CODE)
                           2017 ;--------------------------------------------------------
                           2018 ; Home
                           2019 ;--------------------------------------------------------
                           2020 	.area HOME    (CODE)
                           2021 	.area HOME    (CODE)
                           2022 ;--------------------------------------------------------
                           2023 ; code
                           2024 ;--------------------------------------------------------
                           2025 	.area BANK1   (CODE)
                           2026 ;------------------------------------------------------------
                           2027 ;Allocation info for local variables in function 'ring_pll_cal'
                           2028 ;------------------------------------------------------------
                           2029 ;cnt_rdy                   Allocated to registers r7 
                           2030 ;save_FBDIV_h              Allocated to stack - offset 1
                           2031 ;save_FBDIV_l              Allocated to stack - offset 2
                           2032 ;save_FBCK_SEL             Allocated to stack - offset 3
                           2033 ;Fmea                      Allocated to stack - offset 4
                           2034 ;temp                      Allocated to stack - offset 6
                           2035 ;dac_fine_max              Allocated to registers r2 r3 
                           2036 ;dac_fine_min              Allocated to registers r4 r5 
                           2037 ;tmp                       Allocated to registers r2 r3 
                           2038 ;------------------------------------------------------------
                           2039 ;	../../shared/src/ring_pll_cal.c:101: void ring_pll_cal( void ) BANKING_CTRL {
                           2040 ;	-----------------------------------------
                           2041 ;	 function ring_pll_cal
                           2042 ;	-----------------------------------------
   D416                    2043 _ring_pll_cal:
                    0002   2044 	ar2 = 0x02
                    0003   2045 	ar3 = 0x03
                    0004   2046 	ar4 = 0x04
                    0005   2047 	ar5 = 0x05
                    0006   2048 	ar6 = 0x06
                    0007   2049 	ar7 = 0x07
                    0000   2050 	ar0 = 0x00
                    0001   2051 	ar1 = 0x01
   D416 C0 18              2052 	push	_bp
   D418 E5 81              2053 	mov	a,sp
   D41A F5 18              2054 	mov	_bp,a
   D41C 24 07              2055 	add	a,#0x07
   D41E F5 81              2056 	mov	sp,a
                           2057 ;	../../shared/src/ring_pll_cal.c:107: PHY_STATUS =  ST_PLL_CAL_RING_CAL;
   D420 90 22 30           2058 	mov	dptr,#_MCU_STATUS0_LANE
   D423 74 36              2059 	mov	a,#0x36
   D425 F0                 2060 	movx	@dptr,a
                           2061 ;	../../shared/src/ring_pll_cal.c:122: cmx_PLL_CAL_RING_DONE = 0;
   D426 90 E6 4F           2062 	mov	dptr,#(_CAL_STATUS_READ + 0x0003)
   D429 E0                 2063 	movx	a,@dptr
   D42A 54 FE              2064 	anl	a,#0xfe
   D42C F0                 2065 	movx	@dptr,a
                           2066 ;	../../shared/src/ring_pll_cal.c:125: if( cmx_RING_PLL_CAL_EXT_EN /*|| (phy_mode==PCIE && cmx_PLL_CAL_RING_PASS)*/) { //PCIe Link enable/disable test patch
   D42D 90 E6 09           2067 	mov	dptr,#(_CONTROL_CONFIG1 + 0x0001)
   D430 E0                 2068 	movx	a,@dptr
   D431 30 E0 1A           2069 	jnb	acc.0,00102$
                           2070 ;	../../shared/src/ring_pll_cal.c:126: ringpll_load(PWR);
   D434 75 82 00           2071 	mov	dpl,#0x00
   D437 78 D4              2072 	mov	r0,#_ringpll_load
   D439 79 87              2073 	mov	r1,#(_ringpll_load >> 8)
   D43B 7A 02              2074 	mov	r2,#(_ringpll_load >> 16)
   D43D 12 00 B3           2075 	lcall	__sdcc_banked_call
                           2076 ;	../../shared/src/ring_pll_cal.c:127: SLLP_DAC_VALID = 1;	SLLP_DAC_VALID = 0;
   D440 90 83 04           2077 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   D443 E0                 2078 	movx	a,@dptr
   D444 44 40              2079 	orl	a,#0x40
   D446 F0                 2080 	movx	@dptr,a
   D447 E0                 2081 	movx	a,@dptr
   D448 54 BF              2082 	anl	a,#0xbf
   D44A F0                 2083 	movx	@dptr,a
                           2084 ;	../../shared/src/ring_pll_cal.c:128: goto exit_out;
   D44B 02 DB 12           2085 	ljmp	00231$
   D44E                    2086 00102$:
                           2087 ;	../../shared/src/ring_pll_cal.c:134: cmx_PLL_CAL_RING_PASS = 1;
   D44E 90 E6 4D           2088 	mov	dptr,#(_CAL_STATUS_READ + 0x0001)
   D451 E0                 2089 	movx	a,@dptr
   D452 44 08              2090 	orl	a,#0x08
   D454 F0                 2091 	movx	@dptr,a
                           2092 ;	../../shared/src/ring_pll_cal.c:137: timeout=0;
   D455 C2 03              2093 	clr	_timeout
                           2094 ;	../../shared/src/ring_pll_cal.c:138: if(cmx_RINGPLL_CAL_TIMEOUT_DIS==0) {
   D457 90 E6 49           2095 	mov	dptr,#(_CAL_TIME_OUT_AND_DIS + 0x0001)
   D45A E0                 2096 	movx	a,@dptr
   D45B 20 E2 0A           2097 	jb	acc.2,00104$
                           2098 ;	../../shared/src/ring_pll_cal.c:139: timeout_start((uint16_t)RINGPLL_TIMEOUT_TIMER);
   D45E 75 8B F0           2099 	mov	_TMR1,#0xF0
   D461 75 8D D8           2100 	mov	(_TMR1 >> 8),#0xD8
   D464 D2 8E              2101 	setb	_TR1
   D466 C2 03              2102 	clr	_timeout
   D468                    2103 00104$:
                           2104 ;	../../shared/src/ring_pll_cal.c:143: tmp = read_tsen();
   D468 78 B9              2105 	mov	r0,#_read_tsen
   D46A 79 BE              2106 	mov	r1,#(_read_tsen >> 8)
   D46C 7A 02              2107 	mov	r2,#(_read_tsen >> 16)
   D46E 12 00 B3           2108 	lcall	__sdcc_banked_call
   D471 AA 82              2109 	mov	r2,dpl
   D473 AB 83              2110 	mov	r3,dph
                           2111 ;	../../shared/src/ring_pll_cal.c:144: if(tmp > TEMP_85 ) ringpll_dac_fine = 1280;
   D475 C3                 2112 	clr	c
   D476 74 86              2113 	mov	a,#0x86
   D478 9A                 2114 	subb	a,r2
   D479 74 7F              2115 	mov	a,#(0xFF ^ 0x80)
   D47B 8B F0              2116 	mov	b,r3
   D47D 63 F0 80           2117 	xrl	b,#0x80
   D480 95 F0              2118 	subb	a,b
   D482 50 0B              2119 	jnc	00110$
   D484 90 66 21           2120 	mov	dptr,#_ringpll_dac_fine
   D487 E4                 2121 	clr	a
   D488 F0                 2122 	movx	@dptr,a
   D489 A3                 2123 	inc	dptr
   D48A 74 05              2124 	mov	a,#0x05
   D48C F0                 2125 	movx	@dptr,a
   D48D 80 2E              2126 	sjmp	00111$
   D48F                    2127 00110$:
                           2128 ;	../../shared/src/ring_pll_cal.c:145: else if(tmp < TEMP_85 && tmp > TEMP_5 ) ringpll_dac_fine = 1024;
   D48F C3                 2129 	clr	c
   D490 EA                 2130 	mov	a,r2
   D491 94 86              2131 	subb	a,#0x86
   D493 EB                 2132 	mov	a,r3
   D494 64 80              2133 	xrl	a,#0x80
   D496 94 7F              2134 	subb	a,#0x7f
   D498 50 1A              2135 	jnc	00106$
   D49A C3                 2136 	clr	c
   D49B 74 BF              2137 	mov	a,#0xBF
   D49D 9A                 2138 	subb	a,r2
   D49E 74 7E              2139 	mov	a,#(0xFE ^ 0x80)
   D4A0 8B F0              2140 	mov	b,r3
   D4A2 63 F0 80           2141 	xrl	b,#0x80
   D4A5 95 F0              2142 	subb	a,b
   D4A7 50 0B              2143 	jnc	00106$
   D4A9 90 66 21           2144 	mov	dptr,#_ringpll_dac_fine
   D4AC E4                 2145 	clr	a
   D4AD F0                 2146 	movx	@dptr,a
   D4AE A3                 2147 	inc	dptr
   D4AF 74 04              2148 	mov	a,#0x04
   D4B1 F0                 2149 	movx	@dptr,a
   D4B2 80 09              2150 	sjmp	00111$
   D4B4                    2151 00106$:
                           2152 ;	../../shared/src/ring_pll_cal.c:146: else ringpll_dac_fine = 768; 
   D4B4 90 66 21           2153 	mov	dptr,#_ringpll_dac_fine
   D4B7 E4                 2154 	clr	a
   D4B8 F0                 2155 	movx	@dptr,a
   D4B9 A3                 2156 	inc	dptr
   D4BA 74 03              2157 	mov	a,#0x03
   D4BC F0                 2158 	movx	@dptr,a
   D4BD                    2159 00111$:
                           2160 ;	../../shared/src/ring_pll_cal.c:147: dac_fine_min = ringpll_dac_fine-DAC_FINE_DELTA_RANGE;
   D4BD 90 66 21           2161 	mov	dptr,#_ringpll_dac_fine
   D4C0 E0                 2162 	movx	a,@dptr
   D4C1 FA                 2163 	mov	r2,a
   D4C2 A3                 2164 	inc	dptr
   D4C3 E0                 2165 	movx	a,@dptr
   D4C4 FB                 2166 	mov	r3,a
   D4C5 EA                 2167 	mov	a,r2
   D4C6 24 80              2168 	add	a,#0x80
   D4C8 FC                 2169 	mov	r4,a
   D4C9 EB                 2170 	mov	a,r3
   D4CA 34 FF              2171 	addc	a,#0xff
   D4CC FD                 2172 	mov	r5,a
                           2173 ;	../../shared/src/ring_pll_cal.c:148: dac_fine_max = ringpll_dac_fine+DAC_FINE_DELTA_RANGE;
   D4CD 74 80              2174 	mov	a,#0x80
   D4CF 2A                 2175 	add	a,r2
   D4D0 FA                 2176 	mov	r2,a
   D4D1 E4                 2177 	clr	a
   D4D2 3B                 2178 	addc	a,r3
   D4D3 FB                 2179 	mov	r3,a
                           2180 ;	../../shared/src/ring_pll_cal.c:150: PLL_SPEED_RING = 0;
   D4D4 90 83 00           2181 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_192
   D4D7 E0                 2182 	movx	a,@dptr
   D4D8 54 07              2183 	anl	a,#0x07
   D4DA F0                 2184 	movx	@dptr,a
                           2185 ;	../../shared/src/ring_pll_cal.c:151: SLLP_DAC_COARSE_RING = 0;
   D4DB 90 83 04           2186 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   D4DE E0                 2187 	movx	a,@dptr
   D4DF 54 F0              2188 	anl	a,#0xf0
   D4E1 F0                 2189 	movx	@dptr,a
                           2190 ;	../../shared/src/ring_pll_cal.c:152: ringpll_dac_fine_output();
   D4E2 C0 02              2191 	push	ar2
   D4E4 C0 03              2192 	push	ar3
   D4E6 C0 04              2193 	push	ar4
   D4E8 C0 05              2194 	push	ar5
   D4EA 78 5E              2195 	mov	r0,#_ringpll_dac_fine_output
   D4EC 79 88              2196 	mov	r1,#(_ringpll_dac_fine_output >> 8)
   D4EE 7A 02              2197 	mov	r2,#(_ringpll_dac_fine_output >> 16)
   D4F0 12 00 B3           2198 	lcall	__sdcc_banked_call
                           2199 ;	../../shared/src/ring_pll_cal.c:153: PLL_SHRTR_RING = 1;
   D4F3 90 83 10           2200 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_196
   D4F6 E0                 2201 	movx	a,@dptr
   D4F7 44 40              2202 	orl	a,#0x40
   D4F9 F0                 2203 	movx	@dptr,a
                           2204 ;	../../shared/src/ring_pll_cal.c:159: delay01(100);
   D4FA 90 00 64           2205 	mov	dptr,#0x0064
   D4FD 78 16              2206 	mov	r0,#_delay01
   D4FF 79 BC              2207 	mov	r1,#(_delay01 >> 8)
   D501 7A 02              2208 	mov	r2,#(_delay01 >> 16)
   D503 12 00 B3           2209 	lcall	__sdcc_banked_call
   D506 D0 05              2210 	pop	ar5
   D508 D0 04              2211 	pop	ar4
   D50A D0 03              2212 	pop	ar3
   D50C D0 02              2213 	pop	ar2
                           2214 ;	../../shared/src/ring_pll_cal.c:160: PLL_CAL_EN_RING = 1;
   D50E 90 83 10           2215 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_196
   D511 E0                 2216 	movx	a,@dptr
   D512 44 80              2217 	orl	a,#0x80
   D514 F0                 2218 	movx	@dptr,a
                           2219 ;	../../shared/src/ring_pll_cal.c:161: temp = cmx_REFCLK_FREQ_7_0;
   D515 90 E6 2F           2220 	mov	dptr,#(_CONTROL_CONFIG8 + 0x0003)
   D518 E0                 2221 	movx	a,@dptr
   D519 FE                 2222 	mov	r6,a
   D51A E5 18              2223 	mov	a,_bp
   D51C 24 06              2224 	add	a,#0x06
   D51E F8                 2225 	mov	r0,a
   D51F A6 06              2226 	mov	@r0,ar6
   D521 08                 2227 	inc	r0
   D522 76 00              2228 	mov	@r0,#0x00
                           2229 ;	../../shared/src/ring_pll_cal.c:162: temp--;
   D524 E5 18              2230 	mov	a,_bp
   D526 24 06              2231 	add	a,#0x06
   D528 F8                 2232 	mov	r0,a
   D529 16                 2233 	dec	@r0
   D52A B6 FF 02           2234 	cjne	@r0,#0xff,00294$
   D52D 08                 2235 	inc	r0
   D52E 16                 2236 	dec	@r0
   D52F                    2237 00294$:
                           2238 ;	../../shared/src/ring_pll_cal.c:167: reg_FBC_CNT_TIMER_15_0_b0 = (uint8_t)temp;
   D52F E5 18              2239 	mov	a,_bp
   D531 24 06              2240 	add	a,#0x06
   D533 F8                 2241 	mov	r0,a
   D534 86 06              2242 	mov	ar6,@r0
   D536 90 A3 2C           2243 	mov	dptr,#_PLLCAL_REG0
   D539 EE                 2244 	mov	a,r6
   D53A F0                 2245 	movx	@dptr,a
                           2246 ;	../../shared/src/ring_pll_cal.c:168: reg_FBC_CNT_TIMER_15_0_b1 = (uint8_t)(temp >> 8);
   D53B E5 18              2247 	mov	a,_bp
   D53D 24 06              2248 	add	a,#0x06
   D53F F8                 2249 	mov	r0,a
   D540 08                 2250 	inc	r0
   D541 86 06              2251 	mov	ar6,@r0
   D543 90 A3 2D           2252 	mov	dptr,#(_PLLCAL_REG0 + 0x0001)
   D546 EE                 2253 	mov	a,r6
   D547 F0                 2254 	movx	@dptr,a
                           2255 ;	../../shared/src/ring_pll_cal.c:170: reg_FBC_PLLCAL_RING_EN = 1;
   D548 90 A3 31           2256 	mov	dptr,#(_PLLCAL_REG1 + 0x0001)
   D54B E0                 2257 	movx	a,@dptr
   D54C 44 02              2258 	orl	a,#0x02
   D54E F0                 2259 	movx	@dptr,a
                           2260 ;	../../shared/src/ring_pll_cal.c:177: save_FBDIV_h = reg_PLL_FBDIV_RING_9_8;
   D54F 90 82 F0           2261 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_188
   D552 E0                 2262 	movx	a,@dptr
   D553 03                 2263 	rr	a
   D554 54 03              2264 	anl	a,#0x03
   D556 FE                 2265 	mov	r6,a
   D557 A8 18              2266 	mov	r0,_bp
   D559 08                 2267 	inc	r0
   D55A A6 06              2268 	mov	@r0,ar6
                           2269 ;	../../shared/src/ring_pll_cal.c:178: save_FBDIV_l = reg_PLL_FBDIV_RING_7_0;
   D55C 90 82 F4           2270 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_189
   D55F E0                 2271 	movx	a,@dptr
   D560 FF                 2272 	mov	r7,a
   D561 A8 18              2273 	mov	r0,_bp
   D563 08                 2274 	inc	r0
   D564 08                 2275 	inc	r0
   D565 A6 07              2276 	mov	@r0,ar7
                           2277 ;	../../shared/src/ring_pll_cal.c:179: save_FBCK_SEL = reg_ANA_FBCK_SEL_RING;
   D567 90 A3 18           2278 	mov	dptr,#_PM_CMN_REG1
   D56A E0                 2279 	movx	a,@dptr
   D56B 03                 2280 	rr	a
   D56C 03                 2281 	rr	a
   D56D 54 01              2282 	anl	a,#0x01
   D56F FF                 2283 	mov	r7,a
   D570 E5 18              2284 	mov	a,_bp
   D572 24 03              2285 	add	a,#0x03
   D574 F8                 2286 	mov	r0,a
   D575 A6 07              2287 	mov	@r0,ar7
                           2288 ;	../../shared/src/ring_pll_cal.c:182: ringloadSpdtbl_4_fcnt();
   D577 C0 02              2289 	push	ar2
   D579 C0 03              2290 	push	ar3
   D57B C0 04              2291 	push	ar4
   D57D C0 05              2292 	push	ar5
   D57F 12 4D C8           2293 	lcall	_ringloadSpdtbl_4_fcnt
                           2294 ;	../../shared/src/ring_pll_cal.c:185: delay01(40);
   D582 90 00 28           2295 	mov	dptr,#0x0028
   D585 78 16              2296 	mov	r0,#_delay01
   D587 79 BC              2297 	mov	r1,#(_delay01 >> 8)
   D589 7A 02              2298 	mov	r2,#(_delay01 >> 16)
   D58B 12 00 B3           2299 	lcall	__sdcc_banked_call
   D58E D0 05              2300 	pop	ar5
   D590 D0 04              2301 	pop	ar4
   D592 D0 03              2302 	pop	ar3
   D594 D0 02              2303 	pop	ar2
                           2304 ;	../../shared/src/ring_pll_cal.c:187: do {
   D596                    2305 00118$:
                           2306 ;	../../shared/src/ring_pll_cal.c:188: if((PLL_VDDVCO_OVERTH_RING==1&&cmx_PLL_VDDVCO_POLARITY_INV==0) ||
   D596 90 A3 31           2307 	mov	dptr,#(_PLLCAL_REG1 + 0x0001)
   D599 E0                 2308 	movx	a,@dptr
   D59A C4                 2309 	swap	a
   D59B 23                 2310 	rl	a
   D59C 54 01              2311 	anl	a,#0x01
   D59E FF                 2312 	mov	r7,a
   D59F BF 01 07           2313 	cjne	r7,#0x01,00117$
   D5A2 90 E6 44           2314 	mov	dptr,#_CON_CAL_STEP_SIZE5
   D5A5 E0                 2315 	movx	a,@dptr
   D5A6 30 E0 5E           2316 	jnb	acc.0,00154$
   D5A9                    2317 00117$:
                           2318 ;	../../shared/src/ring_pll_cal.c:189: (PLL_VDDVCO_OVERTH_RING==0&&cmx_PLL_VDDVCO_POLARITY_INV==1)) break;
   D5A9 90 A3 31           2319 	mov	dptr,#(_PLLCAL_REG1 + 0x0001)
   D5AC E0                 2320 	movx	a,@dptr
   D5AD 20 E3 0C           2321 	jb	acc.3,00113$
   D5B0 90 E6 44           2322 	mov	dptr,#_CON_CAL_STEP_SIZE5
   D5B3 E0                 2323 	movx	a,@dptr
   D5B4 54 01              2324 	anl	a,#0x01
   D5B6 FF                 2325 	mov	r7,a
   D5B7 BF 01 02           2326 	cjne	r7,#0x01,00299$
   D5BA 80 4B              2327 	sjmp	00154$
   D5BC                    2328 00299$:
   D5BC                    2329 00113$:
                           2330 ;	../../shared/src/ring_pll_cal.c:190: else SLLP_DAC_COARSE_RING++;
   D5BC 90 83 04           2331 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   D5BF E0                 2332 	movx	a,@dptr
   D5C0 54 0F              2333 	anl	a,#0x0f
   D5C2 FF                 2334 	mov	r7,a
   D5C3 0F                 2335 	inc	r7
   D5C4 90 83 04           2336 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   D5C7 EF                 2337 	mov	a,r7
   D5C8 54 0F              2338 	anl	a,#0x0f
   D5CA F5 F0              2339 	mov	b,a
   D5CC E0                 2340 	movx	a,@dptr
   D5CD 54 F0              2341 	anl	a,#0xf0
   D5CF 45 F0              2342 	orl	a,b
   D5D1 F0                 2343 	movx	@dptr,a
                           2344 ;	../../shared/src/ring_pll_cal.c:191: SLLP_DAC_VALID = 1;	SLLP_DAC_VALID = 0;
   D5D2 90 83 04           2345 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   D5D5 E0                 2346 	movx	a,@dptr
   D5D6 44 40              2347 	orl	a,#0x40
   D5D8 F0                 2348 	movx	@dptr,a
   D5D9 E0                 2349 	movx	a,@dptr
   D5DA 54 BF              2350 	anl	a,#0xbf
   D5DC F0                 2351 	movx	@dptr,a
                           2352 ;	../../shared/src/ring_pll_cal.c:192: delay01(40);
   D5DD 90 00 28           2353 	mov	dptr,#0x0028
   D5E0 C0 02              2354 	push	ar2
   D5E2 C0 03              2355 	push	ar3
   D5E4 C0 04              2356 	push	ar4
   D5E6 C0 05              2357 	push	ar5
   D5E8 78 16              2358 	mov	r0,#_delay01
   D5EA 79 BC              2359 	mov	r1,#(_delay01 >> 8)
   D5EC 7A 02              2360 	mov	r2,#(_delay01 >> 16)
   D5EE 12 00 B3           2361 	lcall	__sdcc_banked_call
   D5F1 D0 05              2362 	pop	ar5
   D5F3 D0 04              2363 	pop	ar4
   D5F5 D0 03              2364 	pop	ar3
   D5F7 D0 02              2365 	pop	ar2
                           2366 ;	../../shared/src/ring_pll_cal.c:193: } while(SLLP_DAC_COARSE_RING < DAC_COARSE_MAX);
   D5F9 90 83 04           2367 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   D5FC E0                 2368 	movx	a,@dptr
   D5FD 54 0F              2369 	anl	a,#0x0f
   D5FF FF                 2370 	mov	r7,a
   D600 C3                 2371 	clr	c
   D601 64 80              2372 	xrl	a,#0x80
   D603 94 8F              2373 	subb	a,#0x8f
   D605 40 8F              2374 	jc	00118$
                           2375 ;	../../shared/src/ring_pll_cal.c:197: do {
   D607                    2376 00154$:
                           2377 ;	../../shared/src/ring_pll_cal.c:208: cnt_rdy = reg_FBC_PLLCAL_CNT_READY;
   D607 90 A3 30           2378 	mov	dptr,#_PLLCAL_REG1
   D60A E0                 2379 	movx	a,@dptr
   D60B 03                 2380 	rr	a
   D60C 54 01              2381 	anl	a,#0x01
   D60E FF                 2382 	mov	r7,a
                           2383 ;	../../shared/src/ring_pll_cal.c:209: reg_FBC_CNT_START = 0;
                           2384 ;	../../shared/src/ring_pll_cal.c:210: reg_FBC_CNT_START = 1;
   D60F 90 A3 30           2385 	mov	dptr,#_PLLCAL_REG1
   D612 E0                 2386 	movx	a,@dptr
   D613 54 FE              2387 	anl	a,#0xfe
   D615 F0                 2388 	movx	@dptr,a
   D616 E0                 2389 	movx	a,@dptr
   D617 44 01              2390 	orl	a,#0x01
   D619 F0                 2391 	movx	@dptr,a
                           2392 ;	../../shared/src/ring_pll_cal.c:211: if( cnt_rdy ) while(reg_FBC_PLLCAL_CNT_READY && !timeout);
   D61A EF                 2393 	mov	a,r7
   D61B 60 0A              2394 	jz	00128$
   D61D                    2395 00122$:
   D61D 90 A3 30           2396 	mov	dptr,#_PLLCAL_REG1
   D620 E0                 2397 	movx	a,@dptr
   D621 30 E1 03           2398 	jnb	acc.1,00128$
   D624 30 03 F6           2399 	jnb	_timeout,00122$
                           2400 ;	../../shared/src/ring_pll_cal.c:212: while(!reg_FBC_PLLCAL_CNT_READY && !timeout);
   D627                    2401 00128$:
   D627 90 A3 30           2402 	mov	dptr,#_PLLCAL_REG1
   D62A E0                 2403 	movx	a,@dptr
   D62B 20 E1 03           2404 	jb	acc.1,00130$
   D62E 30 03 F6           2405 	jnb	_timeout,00128$
   D631                    2406 00130$:
                           2407 ;	../../shared/src/ring_pll_cal.c:213: reg_FBC_CNT_START = 0;
   D631 90 A3 30           2408 	mov	dptr,#_PLLCAL_REG1
   D634 E0                 2409 	movx	a,@dptr
   D635 54 FE              2410 	anl	a,#0xfe
   D637 F0                 2411 	movx	@dptr,a
                           2412 ;	../../shared/src/ring_pll_cal.c:214: if( timeout ) break;
   D638 30 03 03           2413 	jnb	_timeout,00306$
   D63B 02 D7 F5           2414 	ljmp	00185$
   D63E                    2415 00306$:
                           2416 ;	../../shared/src/ring_pll_cal.c:215: Fmea = reg_FBC_PLLCAL_CNT_15_0_b0;
   D63E 90 A3 2E           2417 	mov	dptr,#(_PLLCAL_REG0 + 0x0002)
   D641 E0                 2418 	movx	a,@dptr
   D642 FF                 2419 	mov	r7,a
   D643 E5 18              2420 	mov	a,_bp
   D645 24 04              2421 	add	a,#0x04
   D647 F8                 2422 	mov	r0,a
   D648 A6 07              2423 	mov	@r0,ar7
   D64A 08                 2424 	inc	r0
   D64B 76 00              2425 	mov	@r0,#0x00
                           2426 ;	../../shared/src/ring_pll_cal.c:218: if(Fmea >= Ftarget_ring ) break; 
   D64D 90 E6 18           2427 	mov	dptr,#_CONTROL_CONFIG5
   D650 E0                 2428 	movx	a,@dptr
   D651 FF                 2429 	mov	r7,a
   D652 A3                 2430 	inc	dptr
   D653 E0                 2431 	movx	a,@dptr
   D654 FE                 2432 	mov	r6,a
   D655 E5 18              2433 	mov	a,_bp
   D657 24 04              2434 	add	a,#0x04
   D659 F8                 2435 	mov	r0,a
   D65A C3                 2436 	clr	c
   D65B E6                 2437 	mov	a,@r0
   D65C 9F                 2438 	subb	a,r7
   D65D 08                 2439 	inc	r0
   D65E E6                 2440 	mov	a,@r0
   D65F 9E                 2441 	subb	a,r6
   D660 40 03              2442 	jc	00307$
   D662 02 D7 F5           2443 	ljmp	00185$
   D665                    2444 00307$:
                           2445 ;	../../shared/src/ring_pll_cal.c:221: if(PLL_SPEED_RING == PLL_SPEED_RING_MAX) {
   D665 90 83 00           2446 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_192
   D668 E0                 2447 	movx	a,@dptr
   D669 C4                 2448 	swap	a
   D66A 23                 2449 	rl	a
   D66B 54 1F              2450 	anl	a,#0x1f
   D66D FE                 2451 	mov	r6,a
   D66E BE 17 4C           2452 	cjne	r6,#0x17,00136$
                           2453 ;	../../shared/src/ring_pll_cal.c:222: if( SLLP_DAC_COARSE_RING!=DAC_COARSE_MAX) {
   D671 90 83 04           2454 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   D674 E0                 2455 	movx	a,@dptr
   D675 54 0F              2456 	anl	a,#0x0f
   D677 FE                 2457 	mov	r6,a
   D678 BE 0F 02           2458 	cjne	r6,#0x0F,00310$
   D67B 80 76              2459 	sjmp	00148$
   D67D                    2460 00310$:
                           2461 ;	../../shared/src/ring_pll_cal.c:223: SLLP_DAC_COARSE_RING++;
   D67D 90 83 04           2462 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   D680 E0                 2463 	movx	a,@dptr
   D681 54 0F              2464 	anl	a,#0x0f
   D683 FE                 2465 	mov	r6,a
   D684 0E                 2466 	inc	r6
   D685 90 83 04           2467 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   D688 EE                 2468 	mov	a,r6
   D689 54 0F              2469 	anl	a,#0x0f
   D68B F5 F0              2470 	mov	b,a
   D68D E0                 2471 	movx	a,@dptr
   D68E 54 F0              2472 	anl	a,#0xf0
   D690 45 F0              2473 	orl	a,b
   D692 F0                 2474 	movx	@dptr,a
                           2475 ;	../../shared/src/ring_pll_cal.c:224: SLLP_DAC_VALID = 1;	SLLP_DAC_VALID = 0;
   D693 90 83 04           2476 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   D696 E0                 2477 	movx	a,@dptr
   D697 44 40              2478 	orl	a,#0x40
   D699 F0                 2479 	movx	@dptr,a
   D69A E0                 2480 	movx	a,@dptr
   D69B 54 BF              2481 	anl	a,#0xbf
   D69D F0                 2482 	movx	@dptr,a
                           2483 ;	../../shared/src/ring_pll_cal.c:225: delay01(40);
   D69E 90 00 28           2484 	mov	dptr,#0x0028
   D6A1 C0 02              2485 	push	ar2
   D6A3 C0 03              2486 	push	ar3
   D6A5 C0 04              2487 	push	ar4
   D6A7 C0 05              2488 	push	ar5
   D6A9 78 16              2489 	mov	r0,#_delay01
   D6AB 79 BC              2490 	mov	r1,#(_delay01 >> 8)
   D6AD 7A 02              2491 	mov	r2,#(_delay01 >> 16)
   D6AF 12 00 B3           2492 	lcall	__sdcc_banked_call
   D6B2 D0 05              2493 	pop	ar5
   D6B4 D0 04              2494 	pop	ar4
   D6B6 D0 03              2495 	pop	ar3
   D6B8 D0 02              2496 	pop	ar2
                           2497 ;	../../shared/src/ring_pll_cal.c:226: continue;
   D6BA 02 D7 DD           2498 	ljmp	00155$
   D6BD                    2499 00136$:
                           2500 ;	../../shared/src/ring_pll_cal.c:230: PLL_SPEED_RING++;
   D6BD 90 83 00           2501 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_192
   D6C0 E0                 2502 	movx	a,@dptr
   D6C1 C4                 2503 	swap	a
   D6C2 23                 2504 	rl	a
   D6C3 54 1F              2505 	anl	a,#0x1f
   D6C5 FE                 2506 	mov	r6,a
   D6C6 0E                 2507 	inc	r6
   D6C7 90 83 00           2508 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_192
   D6CA EE                 2509 	mov	a,r6
   D6CB C4                 2510 	swap	a
   D6CC 03                 2511 	rr	a
   D6CD 54 F8              2512 	anl	a,#(0xf8&0xf8)
   D6CF F5 F0              2513 	mov	b,a
   D6D1 E0                 2514 	movx	a,@dptr
   D6D2 54 07              2515 	anl	a,#0x07
   D6D4 45 F0              2516 	orl	a,b
   D6D6 F0                 2517 	movx	@dptr,a
                           2518 ;	../../shared/src/ring_pll_cal.c:231: delay01(20);
   D6D7 90 00 14           2519 	mov	dptr,#0x0014
   D6DA C0 02              2520 	push	ar2
   D6DC C0 03              2521 	push	ar3
   D6DE C0 04              2522 	push	ar4
   D6E0 C0 05              2523 	push	ar5
   D6E2 78 16              2524 	mov	r0,#_delay01
   D6E4 79 BC              2525 	mov	r1,#(_delay01 >> 8)
   D6E6 7A 02              2526 	mov	r2,#(_delay01 >> 16)
   D6E8 12 00 B3           2527 	lcall	__sdcc_banked_call
   D6EB D0 05              2528 	pop	ar5
   D6ED D0 04              2529 	pop	ar4
   D6EF D0 03              2530 	pop	ar3
   D6F1 D0 02              2531 	pop	ar2
                           2532 ;	../../shared/src/ring_pll_cal.c:234: while(((SLLP_DAC_COARSE_RING<DAC_COARSE_MAX) && \
   D6F3                    2533 00148$:
   D6F3 90 83 04           2534 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   D6F6 E0                 2535 	movx	a,@dptr
   D6F7 54 0F              2536 	anl	a,#0x0f
   D6F9 FE                 2537 	mov	r6,a
   D6FA C3                 2538 	clr	c
   D6FB 64 80              2539 	xrl	a,#0x80
   D6FD 94 8F              2540 	subb	a,#0x8f
   D6FF 50 1C              2541 	jnc	00147$
   D701 90 A3 31           2542 	mov	dptr,#(_PLLCAL_REG1 + 0x0001)
   D704 E0                 2543 	movx	a,@dptr
   D705 20 E3 07           2544 	jb	acc.3,00145$
   D708 90 E6 44           2545 	mov	dptr,#_CON_CAL_STEP_SIZE5
   D70B E0                 2546 	movx	a,@dptr
   D70C 30 E0 1F           2547 	jnb	acc.0,00149$
   D70F                    2548 00145$:
                           2549 ;	../../shared/src/ring_pll_cal.c:236: (PLL_VDDVCO_OVERTH_RING && cmx_PLL_VDDVCO_POLARITY_INV)))||(PLL_SPEED_RING == PLL_SPEED_RING_MAX)) {
   D70F 90 A3 31           2550 	mov	dptr,#(_PLLCAL_REG1 + 0x0001)
   D712 E0                 2551 	movx	a,@dptr
   D713 30 E3 07           2552 	jnb	acc.3,00147$
   D716 90 E6 44           2553 	mov	dptr,#_CON_CAL_STEP_SIZE5
   D719 E0                 2554 	movx	a,@dptr
   D71A 20 E0 11           2555 	jb	acc.0,00149$
   D71D                    2556 00147$:
   D71D 90 83 00           2557 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_192
   D720 E0                 2558 	movx	a,@dptr
   D721 C4                 2559 	swap	a
   D722 23                 2560 	rl	a
   D723 54 1F              2561 	anl	a,#0x1f
   D725 FE                 2562 	mov	r6,a
   D726 BE 17 02           2563 	cjne	r6,#0x17,00316$
   D729 80 03              2564 	sjmp	00317$
   D72B                    2565 00316$:
   D72B 02 D7 C1           2566 	ljmp	00153$
   D72E                    2567 00317$:
   D72E                    2568 00149$:
                           2569 ;	../../shared/src/ring_pll_cal.c:238: SLLP_DAC_COARSE_RING++;
   D72E 90 83 04           2570 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   D731 E0                 2571 	movx	a,@dptr
   D732 54 0F              2572 	anl	a,#0x0f
   D734 FE                 2573 	mov	r6,a
   D735 0E                 2574 	inc	r6
   D736 90 83 04           2575 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   D739 EE                 2576 	mov	a,r6
   D73A 54 0F              2577 	anl	a,#0x0f
   D73C F5 F0              2578 	mov	b,a
   D73E E0                 2579 	movx	a,@dptr
   D73F 54 F0              2580 	anl	a,#0xf0
   D741 45 F0              2581 	orl	a,b
   D743 F0                 2582 	movx	@dptr,a
                           2583 ;	../../shared/src/ring_pll_cal.c:239: SLLP_DAC_VALID = 1;	SLLP_DAC_VALID = 0;
   D744 90 83 04           2584 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   D747 E0                 2585 	movx	a,@dptr
   D748 44 40              2586 	orl	a,#0x40
   D74A F0                 2587 	movx	@dptr,a
   D74B E0                 2588 	movx	a,@dptr
   D74C 54 BF              2589 	anl	a,#0xbf
   D74E F0                 2590 	movx	@dptr,a
                           2591 ;	../../shared/src/ring_pll_cal.c:240: delay01(40);
   D74F 90 00 28           2592 	mov	dptr,#0x0028
   D752 C0 02              2593 	push	ar2
   D754 C0 03              2594 	push	ar3
   D756 C0 04              2595 	push	ar4
   D758 C0 05              2596 	push	ar5
   D75A 78 16              2597 	mov	r0,#_delay01
   D75C 79 BC              2598 	mov	r1,#(_delay01 >> 8)
   D75E 7A 02              2599 	mov	r2,#(_delay01 >> 16)
   D760 12 00 B3           2600 	lcall	__sdcc_banked_call
   D763 D0 05              2601 	pop	ar5
   D765 D0 04              2602 	pop	ar4
   D767 D0 03              2603 	pop	ar3
   D769 D0 02              2604 	pop	ar2
                           2605 ;	../../shared/src/ring_pll_cal.c:242: if( SLLP_DAC_COARSE_RING>=DAC_COARSE_MAX ) {
   D76B 90 83 04           2606 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   D76E E0                 2607 	movx	a,@dptr
   D76F 54 0F              2608 	anl	a,#0x0f
   D771 FE                 2609 	mov	r6,a
   D772 C3                 2610 	clr	c
   D773 64 80              2611 	xrl	a,#0x80
   D775 94 8F              2612 	subb	a,#0x8f
   D777 50 03              2613 	jnc	00318$
   D779 02 D6 F3           2614 	ljmp	00148$
   D77C                    2615 00318$:
                           2616 ;	../../shared/src/ring_pll_cal.c:243: if( ringpll_dac_fine<dac_fine_max ){
   D77C 90 66 21           2617 	mov	dptr,#_ringpll_dac_fine
   D77F E0                 2618 	movx	a,@dptr
   D780 FE                 2619 	mov	r6,a
   D781 A3                 2620 	inc	dptr
   D782 E0                 2621 	movx	a,@dptr
   D783 FF                 2622 	mov	r7,a
   D784 C3                 2623 	clr	c
   D785 EE                 2624 	mov	a,r6
   D786 9A                 2625 	subb	a,r2
   D787 EF                 2626 	mov	a,r7
   D788 9B                 2627 	subb	a,r3
   D789 40 03              2628 	jc	00319$
   D78B 02 D9 33           2629 	ljmp	00219$
   D78E                    2630 00319$:
                           2631 ;	../../shared/src/ring_pll_cal.c:244: ringpll_dac_fine += PWR_FINE_STEP;
   D78E 90 66 21           2632 	mov	dptr,#_ringpll_dac_fine
   D791 74 20              2633 	mov	a,#0x20
   D793 2E                 2634 	add	a,r6
   D794 F0                 2635 	movx	@dptr,a
   D795 E4                 2636 	clr	a
   D796 3F                 2637 	addc	a,r7
   D797 A3                 2638 	inc	dptr
   D798 F0                 2639 	movx	@dptr,a
                           2640 ;	../../shared/src/ring_pll_cal.c:245: ringpll_dac_fine_output();
   D799 C0 02              2641 	push	ar2
   D79B C0 03              2642 	push	ar3
   D79D C0 04              2643 	push	ar4
   D79F C0 05              2644 	push	ar5
   D7A1 78 5E              2645 	mov	r0,#_ringpll_dac_fine_output
   D7A3 79 88              2646 	mov	r1,#(_ringpll_dac_fine_output >> 8)
   D7A5 7A 02              2647 	mov	r2,#(_ringpll_dac_fine_output >> 16)
   D7A7 12 00 B3           2648 	lcall	__sdcc_banked_call
                           2649 ;	../../shared/src/ring_pll_cal.c:247: delay01(40);
   D7AA 90 00 28           2650 	mov	dptr,#0x0028
   D7AD 78 16              2651 	mov	r0,#_delay01
   D7AF 79 BC              2652 	mov	r1,#(_delay01 >> 8)
   D7B1 7A 02              2653 	mov	r2,#(_delay01 >> 16)
   D7B3 12 00 B3           2654 	lcall	__sdcc_banked_call
   D7B6 D0 05              2655 	pop	ar5
   D7B8 D0 04              2656 	pop	ar4
   D7BA D0 03              2657 	pop	ar3
   D7BC D0 02              2658 	pop	ar2
                           2659 ;	../../shared/src/ring_pll_cal.c:249: else goto adjust;
   D7BE 02 D6 F3           2660 	ljmp	00148$
   D7C1                    2661 00153$:
                           2662 ;	../../shared/src/ring_pll_cal.c:254: delay01(20);
   D7C1 90 00 14           2663 	mov	dptr,#0x0014
   D7C4 C0 02              2664 	push	ar2
   D7C6 C0 03              2665 	push	ar3
   D7C8 C0 04              2666 	push	ar4
   D7CA C0 05              2667 	push	ar5
   D7CC 78 16              2668 	mov	r0,#_delay01
   D7CE 79 BC              2669 	mov	r1,#(_delay01 >> 8)
   D7D0 7A 02              2670 	mov	r2,#(_delay01 >> 16)
   D7D2 12 00 B3           2671 	lcall	__sdcc_banked_call
   D7D5 D0 05              2672 	pop	ar5
   D7D7 D0 04              2673 	pop	ar4
   D7D9 D0 03              2674 	pop	ar3
   D7DB D0 02              2675 	pop	ar2
   D7DD                    2676 00155$:
                           2677 ;	../../shared/src/ring_pll_cal.c:256: } while(Fmea < Ftarget_ring);
   D7DD 90 E6 18           2678 	mov	dptr,#_CONTROL_CONFIG5
   D7E0 E0                 2679 	movx	a,@dptr
   D7E1 FE                 2680 	mov	r6,a
   D7E2 A3                 2681 	inc	dptr
   D7E3 E0                 2682 	movx	a,@dptr
   D7E4 FF                 2683 	mov	r7,a
   D7E5 E5 18              2684 	mov	a,_bp
   D7E7 24 04              2685 	add	a,#0x04
   D7E9 F8                 2686 	mov	r0,a
   D7EA C3                 2687 	clr	c
   D7EB E6                 2688 	mov	a,@r0
   D7EC 9E                 2689 	subb	a,r6
   D7ED 08                 2690 	inc	r0
   D7EE E6                 2691 	mov	a,@r0
   D7EF 9F                 2692 	subb	a,r7
   D7F0 50 03              2693 	jnc	00320$
   D7F2 02 D6 07           2694 	ljmp	00154$
   D7F5                    2695 00320$:
                           2696 ;	../../shared/src/ring_pll_cal.c:261: while ( ringpll_dac_fine != 0 ) {
   D7F5                    2697 00185$:
   D7F5 90 66 21           2698 	mov	dptr,#_ringpll_dac_fine
   D7F8 E0                 2699 	movx	a,@dptr
   D7F9 FE                 2700 	mov	r6,a
   D7FA A3                 2701 	inc	dptr
   D7FB E0                 2702 	movx	a,@dptr
   D7FC FF                 2703 	mov	r7,a
   D7FD 4E                 2704 	orl	a,r6
   D7FE 70 03              2705 	jnz	00321$
   D800 02 D9 33           2706 	ljmp	00219$
   D803                    2707 00321$:
                           2708 ;	../../shared/src/ring_pll_cal.c:262: if( timeout ) break;
   D803 30 03 03           2709 	jnb	_timeout,00322$
   D806 02 D9 33           2710 	ljmp	00219$
   D809                    2711 00322$:
                           2712 ;	../../shared/src/ring_pll_cal.c:264: ringpll_dac_fine -= PWR_FINE_STEP;
   D809 EE                 2713 	mov	a,r6
   D80A 24 E0              2714 	add	a,#0xe0
   D80C FE                 2715 	mov	r6,a
   D80D EF                 2716 	mov	a,r7
   D80E 34 FF              2717 	addc	a,#0xff
   D810 FF                 2718 	mov	r7,a
   D811 90 66 21           2719 	mov	dptr,#_ringpll_dac_fine
   D814 EE                 2720 	mov	a,r6
   D815 F0                 2721 	movx	@dptr,a
   D816 A3                 2722 	inc	dptr
   D817 EF                 2723 	mov	a,r7
   D818 F0                 2724 	movx	@dptr,a
                           2725 ;	../../shared/src/ring_pll_cal.c:266: if( SLLP_DAC_COARSE_RING>0 && SLLP_DAC_COARSE_RING<DAC_COARSE_MAX) {
   D819 90 83 04           2726 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   D81C E0                 2727 	movx	a,@dptr
   D81D 54 0F              2728 	anl	a,#0x0f
   D81F 70 03              2729 	jnz	00323$
   D821 02 D8 B3           2730 	ljmp	00169$
   D824                    2731 00323$:
   D824 90 83 04           2732 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   D827 E0                 2733 	movx	a,@dptr
   D828 54 0F              2734 	anl	a,#0x0f
   D82A FE                 2735 	mov	r6,a
   D82B C3                 2736 	clr	c
   D82C 64 80              2737 	xrl	a,#0x80
   D82E 94 8F              2738 	subb	a,#0x8f
   D830 40 03              2739 	jc	00324$
   D832 02 D8 B3           2740 	ljmp	00169$
   D835                    2741 00324$:
                           2742 ;	../../shared/src/ring_pll_cal.c:269: if(ringpll_dac_fine<dac_fine_min) { 
   D835 90 66 21           2743 	mov	dptr,#_ringpll_dac_fine
   D838 E0                 2744 	movx	a,@dptr
   D839 FE                 2745 	mov	r6,a
   D83A A3                 2746 	inc	dptr
   D83B E0                 2747 	movx	a,@dptr
   D83C FF                 2748 	mov	r7,a
   D83D C3                 2749 	clr	c
   D83E EE                 2750 	mov	a,r6
   D83F 9C                 2751 	subb	a,r4
   D840 EF                 2752 	mov	a,r7
   D841 9D                 2753 	subb	a,r5
   D842 50 34              2754 	jnc	00166$
                           2755 ;	../../shared/src/ring_pll_cal.c:270: ringpll_dac_fine += 300; 
   D844 90 66 21           2756 	mov	dptr,#_ringpll_dac_fine
   D847 74 2C              2757 	mov	a,#0x2C
   D849 2E                 2758 	add	a,r6
   D84A F0                 2759 	movx	@dptr,a
   D84B 74 01              2760 	mov	a,#0x01
   D84D 3F                 2761 	addc	a,r7
   D84E A3                 2762 	inc	dptr
   D84F F0                 2763 	movx	@dptr,a
                           2764 ;	../../shared/src/ring_pll_cal.c:271: if( SLLP_DAC_COARSE_RING > DAC_COARSE_MIN )
   D850 90 83 04           2765 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   D853 E0                 2766 	movx	a,@dptr
   D854 54 0F              2767 	anl	a,#0x0f
   D856 60 5B              2768 	jz	00169$
                           2769 ;	../../shared/src/ring_pll_cal.c:272: SLLP_DAC_COARSE_RING--;
   D858 C0 04              2770 	push	ar4
   D85A C0 05              2771 	push	ar5
   D85C 90 83 04           2772 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   D85F E0                 2773 	movx	a,@dptr
   D860 54 0F              2774 	anl	a,#0x0f
   D862 FC                 2775 	mov	r4,a
   D863 1C                 2776 	dec	r4
   D864 90 83 04           2777 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   D867 EC                 2778 	mov	a,r4
   D868 54 0F              2779 	anl	a,#0x0f
   D86A F5 F0              2780 	mov	b,a
   D86C E0                 2781 	movx	a,@dptr
   D86D 54 F0              2782 	anl	a,#0xf0
   D86F 45 F0              2783 	orl	a,b
   D871 F0                 2784 	movx	@dptr,a
   D872 D0 05              2785 	pop	ar5
   D874 D0 04              2786 	pop	ar4
   D876 80 3B              2787 	sjmp	00169$
   D878                    2788 00166$:
                           2789 ;	../../shared/src/ring_pll_cal.c:274: else if(ringpll_dac_fine>dac_fine_max) { 
   D878 C3                 2790 	clr	c
   D879 EA                 2791 	mov	a,r2
   D87A 9E                 2792 	subb	a,r6
   D87B EB                 2793 	mov	a,r3
   D87C 9F                 2794 	subb	a,r7
   D87D 50 34              2795 	jnc	00169$
                           2796 ;	../../shared/src/ring_pll_cal.c:275: ringpll_dac_fine -= 300; 
   D87F EE                 2797 	mov	a,r6
   D880 24 D4              2798 	add	a,#0xd4
   D882 FE                 2799 	mov	r6,a
   D883 EF                 2800 	mov	a,r7
   D884 34 FE              2801 	addc	a,#0xfe
   D886 FF                 2802 	mov	r7,a
   D887 90 66 21           2803 	mov	dptr,#_ringpll_dac_fine
   D88A EE                 2804 	mov	a,r6
   D88B F0                 2805 	movx	@dptr,a
   D88C A3                 2806 	inc	dptr
   D88D EF                 2807 	mov	a,r7
   D88E F0                 2808 	movx	@dptr,a
                           2809 ;	../../shared/src/ring_pll_cal.c:276: if( SLLP_DAC_COARSE_RING < DAC_COARSE_MAX )
   D88F 90 83 04           2810 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   D892 E0                 2811 	movx	a,@dptr
   D893 54 0F              2812 	anl	a,#0x0f
   D895 FE                 2813 	mov	r6,a
   D896 C3                 2814 	clr	c
   D897 64 80              2815 	xrl	a,#0x80
   D899 94 8F              2816 	subb	a,#0x8f
   D89B 50 16              2817 	jnc	00169$
                           2818 ;	../../shared/src/ring_pll_cal.c:277: SLLP_DAC_COARSE_RING++;
   D89D 90 83 04           2819 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   D8A0 E0                 2820 	movx	a,@dptr
   D8A1 54 0F              2821 	anl	a,#0x0f
   D8A3 FE                 2822 	mov	r6,a
   D8A4 0E                 2823 	inc	r6
   D8A5 90 83 04           2824 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   D8A8 EE                 2825 	mov	a,r6
   D8A9 54 0F              2826 	anl	a,#0x0f
   D8AB F5 F0              2827 	mov	b,a
   D8AD E0                 2828 	movx	a,@dptr
   D8AE 54 F0              2829 	anl	a,#0xf0
   D8B0 45 F0              2830 	orl	a,b
   D8B2 F0                 2831 	movx	@dptr,a
   D8B3                    2832 00169$:
                           2833 ;	../../shared/src/ring_pll_cal.c:281: ringpll_dac_fine_output();
   D8B3 C0 02              2834 	push	ar2
   D8B5 C0 03              2835 	push	ar3
   D8B7 C0 04              2836 	push	ar4
   D8B9 C0 05              2837 	push	ar5
   D8BB 78 5E              2838 	mov	r0,#_ringpll_dac_fine_output
   D8BD 79 88              2839 	mov	r1,#(_ringpll_dac_fine_output >> 8)
   D8BF 7A 02              2840 	mov	r2,#(_ringpll_dac_fine_output >> 16)
   D8C1 12 00 B3           2841 	lcall	__sdcc_banked_call
                           2842 ;	../../shared/src/ring_pll_cal.c:282: delay01(40);
   D8C4 90 00 28           2843 	mov	dptr,#0x0028
   D8C7 78 16              2844 	mov	r0,#_delay01
   D8C9 79 BC              2845 	mov	r1,#(_delay01 >> 8)
   D8CB 7A 02              2846 	mov	r2,#(_delay01 >> 16)
   D8CD 12 00 B3           2847 	lcall	__sdcc_banked_call
   D8D0 D0 05              2848 	pop	ar5
   D8D2 D0 04              2849 	pop	ar4
   D8D4 D0 03              2850 	pop	ar3
   D8D6 D0 02              2851 	pop	ar2
                           2852 ;	../../shared/src/ring_pll_cal.c:293: cnt_rdy = reg_FBC_PLLCAL_CNT_READY;
   D8D8 90 A3 30           2853 	mov	dptr,#_PLLCAL_REG1
   D8DB E0                 2854 	movx	a,@dptr
   D8DC 03                 2855 	rr	a
   D8DD 54 01              2856 	anl	a,#0x01
   D8DF FE                 2857 	mov	r6,a
   D8E0 FF                 2858 	mov	r7,a
                           2859 ;	../../shared/src/ring_pll_cal.c:294: reg_FBC_CNT_START = 1;
   D8E1 90 A3 30           2860 	mov	dptr,#_PLLCAL_REG1
   D8E4 E0                 2861 	movx	a,@dptr
   D8E5 44 01              2862 	orl	a,#0x01
   D8E7 F0                 2863 	movx	@dptr,a
                           2864 ;	../../shared/src/ring_pll_cal.c:295: if( cnt_rdy ) while(reg_FBC_PLLCAL_CNT_READY && !timeout);
   D8E8 EF                 2865 	mov	a,r7
   D8E9 60 0A              2866 	jz	00178$
   D8EB                    2867 00172$:
   D8EB 90 A3 30           2868 	mov	dptr,#_PLLCAL_REG1
   D8EE E0                 2869 	movx	a,@dptr
   D8EF 30 E1 03           2870 	jnb	acc.1,00178$
   D8F2 30 03 F6           2871 	jnb	_timeout,00172$
                           2872 ;	../../shared/src/ring_pll_cal.c:296: while(!reg_FBC_PLLCAL_CNT_READY && !timeout );
   D8F5                    2873 00178$:
   D8F5 90 A3 30           2874 	mov	dptr,#_PLLCAL_REG1
   D8F8 E0                 2875 	movx	a,@dptr
   D8F9 20 E1 03           2876 	jb	acc.1,00180$
   D8FC 30 03 F6           2877 	jnb	_timeout,00178$
   D8FF                    2878 00180$:
                           2879 ;	../../shared/src/ring_pll_cal.c:297: reg_FBC_CNT_START = 0;
   D8FF 90 A3 30           2880 	mov	dptr,#_PLLCAL_REG1
   D902 E0                 2881 	movx	a,@dptr
   D903 54 FE              2882 	anl	a,#0xfe
   D905 F0                 2883 	movx	@dptr,a
                           2884 ;	../../shared/src/ring_pll_cal.c:298: if(timeout) break;
   D906 20 03 2A           2885 	jb	_timeout,00219$
                           2886 ;	../../shared/src/ring_pll_cal.c:299: Fmea = reg_FBC_PLLCAL_CNT_15_0;
   D909 90 A3 2E           2887 	mov	dptr,#(_PLLCAL_REG0 + 0x0002)
   D90C E0                 2888 	movx	a,@dptr
   D90D FE                 2889 	mov	r6,a
   D90E A3                 2890 	inc	dptr
   D90F E0                 2891 	movx	a,@dptr
   D910 FF                 2892 	mov	r7,a
   D911 E5 18              2893 	mov	a,_bp
   D913 24 04              2894 	add	a,#0x04
   D915 F8                 2895 	mov	r0,a
   D916 A6 06              2896 	mov	@r0,ar6
   D918 08                 2897 	inc	r0
   D919 A6 07              2898 	mov	@r0,ar7
                           2899 ;	../../shared/src/ring_pll_cal.c:302: if(Fmea <= Ftarget_ring ) break;
   D91B 90 E6 18           2900 	mov	dptr,#_CONTROL_CONFIG5
   D91E E0                 2901 	movx	a,@dptr
   D91F FE                 2902 	mov	r6,a
   D920 A3                 2903 	inc	dptr
   D921 E0                 2904 	movx	a,@dptr
   D922 FF                 2905 	mov	r7,a
   D923 E5 18              2906 	mov	a,_bp
   D925 24 04              2907 	add	a,#0x04
   D927 F8                 2908 	mov	r0,a
   D928 C3                 2909 	clr	c
   D929 EE                 2910 	mov	a,r6
   D92A 96                 2911 	subb	a,@r0
   D92B EF                 2912 	mov	a,r7
   D92C 08                 2913 	inc	r0
   D92D 96                 2914 	subb	a,@r0
   D92E 50 03              2915 	jnc	00335$
   D930 02 D7 F5           2916 	ljmp	00185$
   D933                    2917 00335$:
                           2918 ;	../../shared/src/ring_pll_cal.c:306: do {
   D933                    2919 00219$:
                           2920 ;	../../shared/src/ring_pll_cal.c:307: if( timeout ) break;
   D933 30 03 03           2921 	jnb	_timeout,00336$
   D936 02 DA 92           2922 	ljmp	00221$
   D939                    2923 00336$:
                           2924 ;	../../shared/src/ring_pll_cal.c:318: cnt_rdy = reg_FBC_PLLCAL_CNT_READY;
   D939 90 A3 30           2925 	mov	dptr,#_PLLCAL_REG1
   D93C E0                 2926 	movx	a,@dptr
   D93D 03                 2927 	rr	a
   D93E 54 01              2928 	anl	a,#0x01
   D940 FE                 2929 	mov	r6,a
   D941 FF                 2930 	mov	r7,a
                           2931 ;	../../shared/src/ring_pll_cal.c:319: reg_FBC_CNT_START = 1;
   D942 90 A3 30           2932 	mov	dptr,#_PLLCAL_REG1
   D945 E0                 2933 	movx	a,@dptr
   D946 44 01              2934 	orl	a,#0x01
   D948 F0                 2935 	movx	@dptr,a
                           2936 ;	../../shared/src/ring_pll_cal.c:320: if( cnt_rdy ) while(reg_FBC_PLLCAL_CNT_READY && !timeout);
   D949 EF                 2937 	mov	a,r7
   D94A 60 0A              2938 	jz	00198$
   D94C                    2939 00192$:
   D94C 90 A3 30           2940 	mov	dptr,#_PLLCAL_REG1
   D94F E0                 2941 	movx	a,@dptr
   D950 30 E1 03           2942 	jnb	acc.1,00198$
   D953 30 03 F6           2943 	jnb	_timeout,00192$
                           2944 ;	../../shared/src/ring_pll_cal.c:321: while(!reg_FBC_PLLCAL_CNT_READY && !timeout);
   D956                    2945 00198$:
   D956 90 A3 30           2946 	mov	dptr,#_PLLCAL_REG1
   D959 E0                 2947 	movx	a,@dptr
   D95A 20 E1 03           2948 	jb	acc.1,00200$
   D95D 30 03 F6           2949 	jnb	_timeout,00198$
   D960                    2950 00200$:
                           2951 ;	../../shared/src/ring_pll_cal.c:322: reg_FBC_CNT_START = 0;
   D960 90 A3 30           2952 	mov	dptr,#_PLLCAL_REG1
   D963 E0                 2953 	movx	a,@dptr
   D964 54 FE              2954 	anl	a,#0xfe
   D966 F0                 2955 	movx	@dptr,a
                           2956 ;	../../shared/src/ring_pll_cal.c:323: if (timeout) break;
   D967 30 03 03           2957 	jnb	_timeout,00342$
   D96A 02 DA 92           2958 	ljmp	00221$
   D96D                    2959 00342$:
                           2960 ;	../../shared/src/ring_pll_cal.c:324: Fmea = reg_FBC_PLLCAL_CNT_15_0;
   D96D 90 A3 2E           2961 	mov	dptr,#(_PLLCAL_REG0 + 0x0002)
   D970 E0                 2962 	movx	a,@dptr
   D971 FE                 2963 	mov	r6,a
   D972 A3                 2964 	inc	dptr
   D973 E0                 2965 	movx	a,@dptr
   D974 FF                 2966 	mov	r7,a
   D975 E5 18              2967 	mov	a,_bp
   D977 24 04              2968 	add	a,#0x04
   D979 F8                 2969 	mov	r0,a
   D97A A6 06              2970 	mov	@r0,ar6
   D97C 08                 2971 	inc	r0
   D97D A6 07              2972 	mov	@r0,ar7
                           2973 ;	../../shared/src/ring_pll_cal.c:327: if (Fmea == Ftarget_ring) break;
   D97F 90 E6 18           2974 	mov	dptr,#_CONTROL_CONFIG5
   D982 E0                 2975 	movx	a,@dptr
   D983 FE                 2976 	mov	r6,a
   D984 A3                 2977 	inc	dptr
   D985 E0                 2978 	movx	a,@dptr
   D986 FF                 2979 	mov	r7,a
   D987 E5 18              2980 	mov	a,_bp
   D989 24 04              2981 	add	a,#0x04
   D98B F8                 2982 	mov	r0,a
   D98C E6                 2983 	mov	a,@r0
   D98D B5 06 08           2984 	cjne	a,ar6,00343$
   D990 08                 2985 	inc	r0
   D991 E6                 2986 	mov	a,@r0
   D992 B5 07 03           2987 	cjne	a,ar7,00343$
   D995 02 DA 92           2988 	ljmp	00221$
   D998                    2989 00343$:
                           2990 ;	../../shared/src/ring_pll_cal.c:328: else if ( Fmea > Ftarget_ring ) {
   D998 90 E6 18           2991 	mov	dptr,#_CONTROL_CONFIG5
   D99B E0                 2992 	movx	a,@dptr
   D99C FE                 2993 	mov	r6,a
   D99D A3                 2994 	inc	dptr
   D99E E0                 2995 	movx	a,@dptr
   D99F FF                 2996 	mov	r7,a
   D9A0 E5 18              2997 	mov	a,_bp
   D9A2 24 04              2998 	add	a,#0x04
   D9A4 F8                 2999 	mov	r0,a
   D9A5 C3                 3000 	clr	c
   D9A6 EE                 3001 	mov	a,r6
   D9A7 96                 3002 	subb	a,@r0
   D9A8 EF                 3003 	mov	a,r7
   D9A9 08                 3004 	inc	r0
   D9AA 96                 3005 	subb	a,@r0
   D9AB 50 1A              3006 	jnc	00204$
                           3007 ;	../../shared/src/ring_pll_cal.c:329: ringpll_dac_fine-=PWR_FINE_STEP;
   D9AD 90 66 21           3008 	mov	dptr,#_ringpll_dac_fine
   D9B0 E0                 3009 	movx	a,@dptr
   D9B1 FE                 3010 	mov	r6,a
   D9B2 A3                 3011 	inc	dptr
   D9B3 E0                 3012 	movx	a,@dptr
   D9B4 FF                 3013 	mov	r7,a
   D9B5 EE                 3014 	mov	a,r6
   D9B6 24 E0              3015 	add	a,#0xe0
   D9B8 FE                 3016 	mov	r6,a
   D9B9 EF                 3017 	mov	a,r7
   D9BA 34 FF              3018 	addc	a,#0xff
   D9BC FF                 3019 	mov	r7,a
   D9BD 90 66 21           3020 	mov	dptr,#_ringpll_dac_fine
   D9C0 EE                 3021 	mov	a,r6
   D9C1 F0                 3022 	movx	@dptr,a
   D9C2 A3                 3023 	inc	dptr
   D9C3 EF                 3024 	mov	a,r7
   D9C4 F0                 3025 	movx	@dptr,a
   D9C5 80 13              3026 	sjmp	00208$
   D9C7                    3027 00204$:
                           3028 ;	../../shared/src/ring_pll_cal.c:332: ringpll_dac_fine+=PWR_FINE_STEP;
   D9C7 90 66 21           3029 	mov	dptr,#_ringpll_dac_fine
   D9CA E0                 3030 	movx	a,@dptr
   D9CB FE                 3031 	mov	r6,a
   D9CC A3                 3032 	inc	dptr
   D9CD E0                 3033 	movx	a,@dptr
   D9CE FF                 3034 	mov	r7,a
   D9CF 90 66 21           3035 	mov	dptr,#_ringpll_dac_fine
   D9D2 74 20              3036 	mov	a,#0x20
   D9D4 2E                 3037 	add	a,r6
   D9D5 F0                 3038 	movx	@dptr,a
   D9D6 E4                 3039 	clr	a
   D9D7 3F                 3040 	addc	a,r7
   D9D8 A3                 3041 	inc	dptr
   D9D9 F0                 3042 	movx	@dptr,a
   D9DA                    3043 00208$:
                           3044 ;	../../shared/src/ring_pll_cal.c:334: if(ringpll_dac_fine<dac_fine_min) { 
   D9DA 90 66 21           3045 	mov	dptr,#_ringpll_dac_fine
   D9DD E0                 3046 	movx	a,@dptr
   D9DE FE                 3047 	mov	r6,a
   D9DF A3                 3048 	inc	dptr
   D9E0 E0                 3049 	movx	a,@dptr
   D9E1 FF                 3050 	mov	r7,a
   D9E2 C3                 3051 	clr	c
   D9E3 EE                 3052 	mov	a,r6
   D9E4 9C                 3053 	subb	a,r4
   D9E5 EF                 3054 	mov	a,r7
   D9E6 9D                 3055 	subb	a,r5
   D9E7 50 34              3056 	jnc	00216$
                           3057 ;	../../shared/src/ring_pll_cal.c:335: ringpll_dac_fine += 300; 
   D9E9 90 66 21           3058 	mov	dptr,#_ringpll_dac_fine
   D9EC 74 2C              3059 	mov	a,#0x2C
   D9EE 2E                 3060 	add	a,r6
   D9EF F0                 3061 	movx	@dptr,a
   D9F0 74 01              3062 	mov	a,#0x01
   D9F2 3F                 3063 	addc	a,r7
   D9F3 A3                 3064 	inc	dptr
   D9F4 F0                 3065 	movx	@dptr,a
                           3066 ;	../../shared/src/ring_pll_cal.c:336: if(SLLP_DAC_COARSE_RING>DAC_COARSE_MIN)	SLLP_DAC_COARSE_RING--;
   D9F5 90 83 04           3067 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   D9F8 E0                 3068 	movx	a,@dptr
   D9F9 54 0F              3069 	anl	a,#0x0f
   D9FB 60 5B              3070 	jz	00217$
   D9FD C0 04              3071 	push	ar4
   D9FF C0 05              3072 	push	ar5
   DA01 90 83 04           3073 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DA04 E0                 3074 	movx	a,@dptr
   DA05 54 0F              3075 	anl	a,#0x0f
   DA07 FC                 3076 	mov	r4,a
   DA08 1C                 3077 	dec	r4
   DA09 90 83 04           3078 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DA0C EC                 3079 	mov	a,r4
   DA0D 54 0F              3080 	anl	a,#0x0f
   DA0F F5 F0              3081 	mov	b,a
   DA11 E0                 3082 	movx	a,@dptr
   DA12 54 F0              3083 	anl	a,#0xf0
   DA14 45 F0              3084 	orl	a,b
   DA16 F0                 3085 	movx	@dptr,a
   DA17 D0 05              3086 	pop	ar5
   DA19 D0 04              3087 	pop	ar4
   DA1B 80 3B              3088 	sjmp	00217$
   DA1D                    3089 00216$:
                           3090 ;	../../shared/src/ring_pll_cal.c:338: else if(ringpll_dac_fine>dac_fine_max) { 
   DA1D C3                 3091 	clr	c
   DA1E EA                 3092 	mov	a,r2
   DA1F 9E                 3093 	subb	a,r6
   DA20 EB                 3094 	mov	a,r3
   DA21 9F                 3095 	subb	a,r7
   DA22 50 34              3096 	jnc	00217$
                           3097 ;	../../shared/src/ring_pll_cal.c:339: ringpll_dac_fine -= 300; 
   DA24 EE                 3098 	mov	a,r6
   DA25 24 D4              3099 	add	a,#0xd4
   DA27 FE                 3100 	mov	r6,a
   DA28 EF                 3101 	mov	a,r7
   DA29 34 FE              3102 	addc	a,#0xfe
   DA2B FF                 3103 	mov	r7,a
   DA2C 90 66 21           3104 	mov	dptr,#_ringpll_dac_fine
   DA2F EE                 3105 	mov	a,r6
   DA30 F0                 3106 	movx	@dptr,a
   DA31 A3                 3107 	inc	dptr
   DA32 EF                 3108 	mov	a,r7
   DA33 F0                 3109 	movx	@dptr,a
                           3110 ;	../../shared/src/ring_pll_cal.c:340: if(SLLP_DAC_COARSE_RING<DAC_COARSE_MAX) SLLP_DAC_COARSE_RING++;
   DA34 90 83 04           3111 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DA37 E0                 3112 	movx	a,@dptr
   DA38 54 0F              3113 	anl	a,#0x0f
   DA3A FE                 3114 	mov	r6,a
   DA3B C3                 3115 	clr	c
   DA3C 64 80              3116 	xrl	a,#0x80
   DA3E 94 8F              3117 	subb	a,#0x8f
   DA40 50 16              3118 	jnc	00217$
   DA42 90 83 04           3119 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DA45 E0                 3120 	movx	a,@dptr
   DA46 54 0F              3121 	anl	a,#0x0f
   DA48 FE                 3122 	mov	r6,a
   DA49 0E                 3123 	inc	r6
   DA4A 90 83 04           3124 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DA4D EE                 3125 	mov	a,r6
   DA4E 54 0F              3126 	anl	a,#0x0f
   DA50 F5 F0              3127 	mov	b,a
   DA52 E0                 3128 	movx	a,@dptr
   DA53 54 F0              3129 	anl	a,#0xf0
   DA55 45 F0              3130 	orl	a,b
   DA57 F0                 3131 	movx	@dptr,a
   DA58                    3132 00217$:
                           3133 ;	../../shared/src/ring_pll_cal.c:343: ringpll_dac_fine_output();
   DA58 C0 02              3134 	push	ar2
   DA5A C0 03              3135 	push	ar3
   DA5C C0 04              3136 	push	ar4
   DA5E C0 05              3137 	push	ar5
   DA60 78 5E              3138 	mov	r0,#_ringpll_dac_fine_output
   DA62 79 88              3139 	mov	r1,#(_ringpll_dac_fine_output >> 8)
   DA64 7A 02              3140 	mov	r2,#(_ringpll_dac_fine_output >> 16)
   DA66 12 00 B3           3141 	lcall	__sdcc_banked_call
                           3142 ;	../../shared/src/ring_pll_cal.c:345: delay01(40);
   DA69 90 00 28           3143 	mov	dptr,#0x0028
   DA6C 78 16              3144 	mov	r0,#_delay01
   DA6E 79 BC              3145 	mov	r1,#(_delay01 >> 8)
   DA70 7A 02              3146 	mov	r2,#(_delay01 >> 16)
   DA72 12 00 B3           3147 	lcall	__sdcc_banked_call
   DA75 D0 05              3148 	pop	ar5
   DA77 D0 04              3149 	pop	ar4
   DA79 D0 03              3150 	pop	ar3
   DA7B D0 02              3151 	pop	ar2
                           3152 ;	../../shared/src/ring_pll_cal.c:347: } while ((ringpll_dac_fine>0) && (ringpll_dac_fine<dac_fine_max));
   DA7D 90 66 21           3153 	mov	dptr,#_ringpll_dac_fine
   DA80 E0                 3154 	movx	a,@dptr
   DA81 FE                 3155 	mov	r6,a
   DA82 A3                 3156 	inc	dptr
   DA83 E0                 3157 	movx	a,@dptr
   DA84 FF                 3158 	mov	r7,a
   DA85 4E                 3159 	orl	a,r6
   DA86 60 0A              3160 	jz	00221$
   DA88 C3                 3161 	clr	c
   DA89 EE                 3162 	mov	a,r6
   DA8A 9A                 3163 	subb	a,r2
   DA8B EF                 3164 	mov	a,r7
   DA8C 9B                 3165 	subb	a,r3
   DA8D 50 03              3166 	jnc	00350$
   DA8F 02 D9 33           3167 	ljmp	00219$
   DA92                    3168 00350$:
   DA92                    3169 00221$:
                           3170 ;	../../shared/src/ring_pll_cal.c:354: reg_PLL_FBDIV_RING_9_8 = save_FBDIV_h;
   DA92 90 82 F0           3171 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_188
   DA95 A8 18              3172 	mov	r0,_bp
   DA97 08                 3173 	inc	r0
   DA98 E6                 3174 	mov	a,@r0
   DA99 25 E0              3175 	add	a,acc
   DA9B 54 06              3176 	anl	a,#0x06
   DA9D F5 F0              3177 	mov	b,a
   DA9F E0                 3178 	movx	a,@dptr
   DAA0 54 F9              3179 	anl	a,#0xf9
   DAA2 45 F0              3180 	orl	a,b
   DAA4 F0                 3181 	movx	@dptr,a
                           3182 ;	../../shared/src/ring_pll_cal.c:355: reg_PLL_FBDIV_RING_7_0 = save_FBDIV_l;
   DAA5 90 82 F4           3183 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_189
   DAA8 A8 18              3184 	mov	r0,_bp
   DAAA 08                 3185 	inc	r0
   DAAB 08                 3186 	inc	r0
   DAAC E6                 3187 	mov	a,@r0
   DAAD F0                 3188 	movx	@dptr,a
                           3189 ;	../../shared/src/ring_pll_cal.c:356: reg_ANA_FBCK_SEL_RING = save_FBCK_SEL;
   DAAE 90 A3 18           3190 	mov	dptr,#_PM_CMN_REG1
   DAB1 E5 18              3191 	mov	a,_bp
   DAB3 24 03              3192 	add	a,#0x03
   DAB5 F8                 3193 	mov	r0,a
   DAB6 E6                 3194 	mov	a,@r0
   DAB7 13                 3195 	rrc	a
   DAB8 E0                 3196 	movx	a,@dptr
   DAB9 92 E2              3197 	mov	acc.2,c
   DABB F0                 3198 	movx	@dptr,a
                           3199 ;	../../shared/src/ring_pll_cal.c:359: reg_FBC_PLLCAL_RING_EN = 0;
   DABC 90 A3 31           3200 	mov	dptr,#(_PLLCAL_REG1 + 0x0001)
   DABF E0                 3201 	movx	a,@dptr
   DAC0 54 FD              3202 	anl	a,#0xfd
   DAC2 F0                 3203 	movx	@dptr,a
                           3204 ;	../../shared/src/ring_pll_cal.c:360: PLL_SHRTR_RING = 0;
   DAC3 90 83 10           3205 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_196
   DAC6 E0                 3206 	movx	a,@dptr
   DAC7 54 BF              3207 	anl	a,#0xbf
   DAC9 F0                 3208 	movx	@dptr,a
                           3209 ;	../../shared/src/ring_pll_cal.c:361: PLL_CAL_EN_RING = 0;
   DACA 90 83 10           3210 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_196
   DACD E0                 3211 	movx	a,@dptr
   DACE 54 7F              3212 	anl	a,#0x7f
   DAD0 F0                 3213 	movx	@dptr,a
                           3214 ;	../../shared/src/ring_pll_cal.c:363: timeout=0;
   DAD1 C2 03              3215 	clr	_timeout
                           3216 ;	../../shared/src/ring_pll_cal.c:364: if(cmx_RINGPLL_CAL_TIMEOUT_DIS==0) {
   DAD3 90 E6 49           3217 	mov	dptr,#(_CAL_TIME_OUT_AND_DIS + 0x0001)
   DAD6 E0                 3218 	movx	a,@dptr
   DAD7 20 E2 0A           3219 	jb	acc.2,00225$
                           3220 ;	../../shared/src/ring_pll_cal.c:365: timeout_start((uint16_t)RINGPLL_TIMEOUT_TIMER);
   DADA 75 8B F0           3221 	mov	_TMR1,#0xF0
   DADD 75 8D D8           3222 	mov	(_TMR1 >> 8),#0xD8
   DAE0 D2 8E              3223 	setb	_TR1
   DAE2 C2 03              3224 	clr	_timeout
                           3225 ;	../../shared/src/ring_pll_cal.c:370: while(!reg_ANA_PLL_LOCK_RING_RD && !timeout);
   DAE4                    3226 00225$:
   DAE4 90 A3 19           3227 	mov	dptr,#(_PM_CMN_REG1 + 0x0001)
   DAE7 E0                 3228 	movx	a,@dptr
   DAE8 20 E7 03           3229 	jb	acc.7,00227$
   DAEB 30 03 F6           3230 	jnb	_timeout,00225$
   DAEE                    3231 00227$:
                           3232 ;	../../shared/src/ring_pll_cal.c:373: if(timeout) {
   DAEE 30 03 15           3233 	jnb	_timeout,00229$
                           3234 ;	../../shared/src/ring_pll_cal.c:377: cmx_PLL_CAL_RING_PASS = 0;
   DAF1 90 E6 4D           3235 	mov	dptr,#(_CAL_STATUS_READ + 0x0001)
   DAF4 E0                 3236 	movx	a,@dptr
   DAF5 54 F7              3237 	anl	a,#0xf7
   DAF7 F0                 3238 	movx	@dptr,a
                           3239 ;	../../shared/src/ring_pll_cal.c:379: ringpll_load(PWR);
   DAF8 75 82 00           3240 	mov	dpl,#0x00
   DAFB 78 D4              3241 	mov	r0,#_ringpll_load
   DAFD 79 87              3242 	mov	r1,#(_ringpll_load >> 8)
   DAFF 7A 02              3243 	mov	r2,#(_ringpll_load >> 16)
   DB01 12 00 B3           3244 	lcall	__sdcc_banked_call
   DB04 80 0C              3245 	sjmp	00231$
   DB06                    3246 00229$:
                           3247 ;	../../shared/src/ring_pll_cal.c:382: ringpll_save(PWR);
   DB06 75 82 00           3248 	mov	dpl,#0x00
   DB09 78 61              3249 	mov	r0,#_ringpll_save
   DB0B 79 87              3250 	mov	r1,#(_ringpll_save >> 8)
   DB0D 7A 02              3251 	mov	r2,#(_ringpll_save >> 16)
   DB0F 12 00 B3           3252 	lcall	__sdcc_banked_call
                           3253 ;	../../shared/src/ring_pll_cal.c:385: exit_out:
   DB12                    3254 00231$:
                           3255 ;	../../shared/src/ring_pll_cal.c:386: ringpll_save(CONT);
   DB12 75 82 01           3256 	mov	dpl,#0x01
   DB15 78 61              3257 	mov	r0,#_ringpll_save
   DB17 79 87              3258 	mov	r1,#(_ringpll_save >> 8)
   DB19 7A 02              3259 	mov	r2,#(_ringpll_save >> 16)
   DB1B 12 00 B3           3260 	lcall	__sdcc_banked_call
                           3261 ;	../../shared/src/ring_pll_cal.c:387: ring_size_counter_mid = (RINGPLL_CAL_COUNTER_SIZE >> 1);   //register give max value, use mid point as start
   DB1E 90 E6 46           3262 	mov	dptr,#(_CON_CAL_STEP_SIZE5 + 0x0002)
   DB21 E0                 3263 	movx	a,@dptr
   DB22 C3                 3264 	clr	c
   DB23 13                 3265 	rrc	a
   DB24 FA                 3266 	mov	r2,a
   DB25 90 66 3F           3267 	mov	dptr,#_ring_size_counter_mid
   DB28 F0                 3268 	movx	@dptr,a
                           3269 ;	../../shared/src/ring_pll_cal.c:388: ring_size_counter = ring_size_counter_mid;
   DB29 90 66 3E           3270 	mov	dptr,#_ring_size_counter
   DB2C EA                 3271 	mov	a,r2
   DB2D F0                 3272 	movx	@dptr,a
                           3273 ;	../../shared/src/ring_pll_cal.c:392: cmx_PLL_CAL_RING_DONE = 1;
   DB2E 90 E6 4F           3274 	mov	dptr,#(_CAL_STATUS_READ + 0x0003)
   DB31 E0                 3275 	movx	a,@dptr
   DB32 44 01              3276 	orl	a,#0x01
   DB34 F0                 3277 	movx	@dptr,a
   DB35 85 18 81           3278 	mov	sp,_bp
   DB38 D0 18              3279 	pop	_bp
   DB3A 02 00 C5           3280 	ljmp	__sdcc_banked_ret
                           3281 ;------------------------------------------------------------
                           3282 ;Allocation info for local variables in function 'ring_pll_cont'
                           3283 ;------------------------------------------------------------
                           3284 ;------------------------------------------------------------
                           3285 ;	../../shared/src/ring_pll_cal.c:397: void ring_pll_cont(void) BANKING_CTRL {
                           3286 ;	-----------------------------------------
                           3287 ;	 function ring_pll_cont
                           3288 ;	-----------------------------------------
   DB3D                    3289 _ring_pll_cont:
                           3290 ;	../../shared/src/ring_pll_cal.c:398: PHY_STATUS =  ST_RING_PLL_CONT;
   DB3D 90 22 30           3291 	mov	dptr,#_MCU_STATUS0_LANE
   DB40 74 3A              3292 	mov	a,#0x3A
   DB42 F0                 3293 	movx	@dptr,a
                           3294 ;	../../shared/src/ring_pll_cal.c:407: EA = 0;
   DB43 C2 AF              3295 	clr	_EA
                           3296 ;	../../shared/src/ring_pll_cal.c:408: ringpll_dac_fine = cmx_cal_sllp_dac_fine_ring[CONT][rate]; 
   DB45 90 E6 1F           3297 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0003)
   DB48 E0                 3298 	movx	a,@dptr
   DB49 25 E0              3299 	add	a,acc
   DB4B 24 DC              3300 	add	a,#(_cmx_cal_sllp_dac_fine_ring + 0x0004)
   DB4D F5 82              3301 	mov	dpl,a
   DB4F E4                 3302 	clr	a
   DB50 34 E5              3303 	addc	a,#((_cmx_cal_sllp_dac_fine_ring + 0x0004) >> 8)
   DB52 F5 83              3304 	mov	dph,a
   DB54 E0                 3305 	movx	a,@dptr
   DB55 FA                 3306 	mov	r2,a
   DB56 A3                 3307 	inc	dptr
   DB57 E0                 3308 	movx	a,@dptr
   DB58 FB                 3309 	mov	r3,a
   DB59 90 66 21           3310 	mov	dptr,#_ringpll_dac_fine
   DB5C EA                 3311 	mov	a,r2
   DB5D F0                 3312 	movx	@dptr,a
   DB5E A3                 3313 	inc	dptr
   DB5F EB                 3314 	mov	a,r3
   DB60 F0                 3315 	movx	@dptr,a
                           3316 ;	../../shared/src/ring_pll_cal.c:409: SLLP_DAC_FINE_RING_10_8 = (uint8_t)(ringpll_dac_fine>>8); 
   DB61 8B 04              3317 	mov	ar4,r3
   DB63 90 83 08           3318 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_194
   DB66 EC                 3319 	mov	a,r4
   DB67 C4                 3320 	swap	a
   DB68 23                 3321 	rl	a
   DB69 54 E0              3322 	anl	a,#(0xe0&0xe0)
   DB6B F5 F0              3323 	mov	b,a
   DB6D E0                 3324 	movx	a,@dptr
   DB6E 54 1F              3325 	anl	a,#0x1f
   DB70 45 F0              3326 	orl	a,b
   DB72 F0                 3327 	movx	@dptr,a
                           3328 ;	../../shared/src/ring_pll_cal.c:410: SLLP_DAC_FINE_RING_7_0 = (uint8_t)ringpll_dac_fine;
   DB73 8A 04              3329 	mov	ar4,r2
   DB75 90 83 0C           3330 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_195
   DB78 EC                 3331 	mov	a,r4
   DB79 F0                 3332 	movx	@dptr,a
                           3333 ;	../../shared/src/ring_pll_cal.c:411: EA = 1;
   DB7A D2 AF              3334 	setb	_EA
                           3335 ;	../../shared/src/ring_pll_cal.c:413: if ((PLL_VCON_OVERTH_RING==0&&cmx_PLL_VCON_POLARITY_INV==0) || (PLL_VCON_OVERTH_RING&&cmx_PLL_VCON_POLARITY_INV) )
   DB7C 90 A3 31           3336 	mov	dptr,#(_PLLCAL_REG1 + 0x0001)
   DB7F E0                 3337 	movx	a,@dptr
   DB80 20 E2 07           3338 	jb	acc.2,00106$
   DB83 90 E6 44           3339 	mov	dptr,#_CON_CAL_STEP_SIZE5
   DB86 E0                 3340 	movx	a,@dptr
   DB87 30 E1 0E           3341 	jnb	acc.1,00101$
   DB8A                    3342 00106$:
   DB8A 90 A3 31           3343 	mov	dptr,#(_PLLCAL_REG1 + 0x0001)
   DB8D E0                 3344 	movx	a,@dptr
   DB8E 30 E2 10           3345 	jnb	acc.2,00102$
   DB91 90 E6 44           3346 	mov	dptr,#_CON_CAL_STEP_SIZE5
   DB94 E0                 3347 	movx	a,@dptr
   DB95 30 E1 09           3348 	jnb	acc.1,00102$
   DB98                    3349 00101$:
                           3350 ;	../../shared/src/ring_pll_cal.c:414: ring_size_counter ++;
   DB98 90 66 3E           3351 	mov	dptr,#_ring_size_counter
   DB9B E0                 3352 	movx	a,@dptr
   DB9C 24 01              3353 	add	a,#0x01
   DB9E F0                 3354 	movx	@dptr,a
   DB9F 80 09              3355 	sjmp	00103$
   DBA1                    3356 00102$:
                           3357 ;	../../shared/src/ring_pll_cal.c:416: ring_size_counter --;
   DBA1 90 66 3E           3358 	mov	dptr,#_ring_size_counter
   DBA4 E0                 3359 	movx	a,@dptr
   DBA5 14                 3360 	dec	a
   DBA6 90 66 3E           3361 	mov	dptr,#_ring_size_counter
   DBA9 F0                 3362 	movx	@dptr,a
   DBAA                    3363 00103$:
                           3364 ;	../../shared/src/ring_pll_cal.c:422: if (ring_size_counter >= RINGPLL_CAL_COUNTER_SIZE) {
   DBAA 90 E6 46           3365 	mov	dptr,#(_CON_CAL_STEP_SIZE5 + 0x0002)
   DBAD E0                 3366 	movx	a,@dptr
   DBAE FC                 3367 	mov	r4,a
   DBAF 90 66 3E           3368 	mov	dptr,#_ring_size_counter
   DBB2 E0                 3369 	movx	a,@dptr
   DBB3 FD                 3370 	mov	r5,a
   DBB4 FE                 3371 	mov	r6,a
   DBB5 EE                 3372 	mov	a,r6
   DBB6 B5 04 00           3373 	cjne	a,ar4,00132$
   DBB9                    3374 00132$:
   DBB9 40 32              3375 	jc	00117$
                           3376 ;	../../shared/src/ring_pll_cal.c:423: ring_size_counter = ring_size_counter_mid;
   DBBB 90 66 3F           3377 	mov	dptr,#_ring_size_counter_mid
   DBBE E0                 3378 	movx	a,@dptr
   DBBF 90 66 3E           3379 	mov	dptr,#_ring_size_counter
   DBC2 F0                 3380 	movx	@dptr,a
                           3381 ;	../../shared/src/ring_pll_cal.c:424: if ( ringpll_dac_fine < (dac_fine_max_value - RINGPLL_CAL_FINE_STEP))
   DBC3 90 E6 45           3382 	mov	dptr,#(_CON_CAL_STEP_SIZE5 + 0x0001)
   DBC6 E0                 3383 	movx	a,@dptr
   DBC7 FC                 3384 	mov	r4,a
   DBC8 7E 00              3385 	mov	r6,#0x00
   DBCA 74 FF              3386 	mov	a,#0xFF
   DBCC C3                 3387 	clr	c
   DBCD 9C                 3388 	subb	a,r4
   DBCE FC                 3389 	mov	r4,a
   DBCF 74 07              3390 	mov	a,#0x07
   DBD1 9E                 3391 	subb	a,r6
   DBD2 FE                 3392 	mov	r6,a
   DBD3 C3                 3393 	clr	c
   DBD4 EA                 3394 	mov	a,r2
   DBD5 9C                 3395 	subb	a,r4
   DBD6 EB                 3396 	mov	a,r3
   DBD7 9E                 3397 	subb	a,r6
   DBD8 50 53              3398 	jnc	00120$
                           3399 ;	../../shared/src/ring_pll_cal.c:425: ringpll_dac_fine += RINGPLL_CAL_FINE_STEP;
   DBDA 90 E6 45           3400 	mov	dptr,#(_CON_CAL_STEP_SIZE5 + 0x0001)
   DBDD E0                 3401 	movx	a,@dptr
   DBDE FC                 3402 	mov	r4,a
   DBDF 7E 00              3403 	mov	r6,#0x00
   DBE1 90 66 21           3404 	mov	dptr,#_ringpll_dac_fine
   DBE4 EC                 3405 	mov	a,r4
   DBE5 2A                 3406 	add	a,r2
   DBE6 F0                 3407 	movx	@dptr,a
   DBE7 EE                 3408 	mov	a,r6
   DBE8 3B                 3409 	addc	a,r3
   DBE9 A3                 3410 	inc	dptr
   DBEA F0                 3411 	movx	@dptr,a
                           3412 ;	../../shared/src/ring_pll_cal.c:427: goto ringpll_cont_ext0;
   DBEB 80 2B              3413 	sjmp	00118$
   DBED                    3414 00117$:
                           3415 ;	../../shared/src/ring_pll_cal.c:429: else if (ring_size_counter == 0) {
   DBED ED                 3416 	mov	a,r5
   DBEE 70 3D              3417 	jnz	00120$
                           3418 ;	../../shared/src/ring_pll_cal.c:430: ring_size_counter = ring_size_counter_mid;
   DBF0 90 66 3F           3419 	mov	dptr,#_ring_size_counter_mid
   DBF3 E0                 3420 	movx	a,@dptr
   DBF4 90 66 3E           3421 	mov	dptr,#_ring_size_counter
   DBF7 F0                 3422 	movx	@dptr,a
                           3423 ;	../../shared/src/ring_pll_cal.c:431: if ( ringpll_dac_fine > RINGPLL_CAL_FINE_STEP )
   DBF8 90 E6 45           3424 	mov	dptr,#(_CON_CAL_STEP_SIZE5 + 0x0001)
   DBFB E0                 3425 	movx	a,@dptr
   DBFC FC                 3426 	mov	r4,a
   DBFD 7D 00              3427 	mov	r5,#0x00
   DBFF C3                 3428 	clr	c
   DC00 EC                 3429 	mov	a,r4
   DC01 9A                 3430 	subb	a,r2
   DC02 ED                 3431 	mov	a,r5
   DC03 9B                 3432 	subb	a,r3
   DC04 50 27              3433 	jnc	00120$
                           3434 ;	../../shared/src/ring_pll_cal.c:432: ringpll_dac_fine -= RINGPLL_CAL_FINE_STEP;
   DC06 90 E6 45           3435 	mov	dptr,#(_CON_CAL_STEP_SIZE5 + 0x0001)
   DC09 E0                 3436 	movx	a,@dptr
   DC0A FC                 3437 	mov	r4,a
   DC0B 7D 00              3438 	mov	r5,#0x00
   DC0D 90 66 21           3439 	mov	dptr,#_ringpll_dac_fine
   DC10 EA                 3440 	mov	a,r2
   DC11 C3                 3441 	clr	c
   DC12 9C                 3442 	subb	a,r4
   DC13 F0                 3443 	movx	@dptr,a
   DC14 EB                 3444 	mov	a,r3
   DC15 9D                 3445 	subb	a,r5
   DC16 A3                 3446 	inc	dptr
   DC17 F0                 3447 	movx	@dptr,a
                           3448 ;	../../shared/src/ring_pll_cal.c:437: goto ringpll_cont_ext0;
   DC18                    3449 00118$:
                           3450 ;	../../shared/src/ring_pll_cal.c:439: ringpll_dac_fine_output();
   DC18 78 5E              3451 	mov	r0,#_ringpll_dac_fine_output
   DC1A 79 88              3452 	mov	r1,#(_ringpll_dac_fine_output >> 8)
   DC1C 7A 02              3453 	mov	r2,#(_ringpll_dac_fine_output >> 16)
   DC1E 12 00 B3           3454 	lcall	__sdcc_banked_call
                           3455 ;	../../shared/src/ring_pll_cal.c:444: ringpll_save(CONT);
   DC21 75 82 01           3456 	mov	dpl,#0x01
   DC24 78 61              3457 	mov	r0,#_ringpll_save
   DC26 79 87              3458 	mov	r1,#(_ringpll_save >> 8)
   DC28 7A 02              3459 	mov	r2,#(_ringpll_save >> 16)
   DC2A 12 00 B3           3460 	lcall	__sdcc_banked_call
                           3461 ;	../../shared/src/ring_pll_cal.c:446: ringpll_cont_ext0:
   DC2D                    3462 00120$:
   DC2D 02 00 C5           3463 	ljmp	__sdcc_banked_ret
                           3464 ;------------------------------------------------------------
                           3465 ;Allocation info for local variables in function 'ring_pll_fast_cal'
                           3466 ;------------------------------------------------------------
                           3467 ;i                         Allocated to stack - offset 1
                           3468 ;cnt_rdy                   Allocated to registers r6 
                           3469 ;save_FBDIV_h              Allocated to registers r6 
                           3470 ;save_FBDIV_l              Allocated to stack - offset 2
                           3471 ;save_FBCK_SEL             Allocated to stack - offset 3
                           3472 ;first_op_ring             Allocated to stack - offset 4
                           3473 ;Fmea                      Allocated to stack - offset 5
                           3474 ;Fmea_prev                 Allocated to stack - offset 7
                           3475 ;Fdiff                     Allocated to stack - offset 9
                           3476 ;delta_code                Allocated to stack - offset 11
                           3477 ;delta_code_first          Allocated to registers r4 r5 
                           3478 ;delta_code_nom            Allocated to registers r2 r3 
                           3479 ;sloc0                     Allocated to stack - offset 13
                           3480 ;------------------------------------------------------------
                           3481 ;	../../shared/src/ring_pll_cal.c:455: void ring_pll_fast_cal(void) BANKING_CTRL {
                           3482 ;	-----------------------------------------
                           3483 ;	 function ring_pll_fast_cal
                           3484 ;	-----------------------------------------
   DC30                    3485 _ring_pll_fast_cal:
   DC30 C0 18              3486 	push	_bp
   DC32 E5 81              3487 	mov	a,sp
   DC34 F5 18              3488 	mov	_bp,a
   DC36 24 0D              3489 	add	a,#0x0d
   DC38 F5 81              3490 	mov	sp,a
                           3491 ;	../../shared/src/ring_pll_cal.c:461: Fmea_prev = 0;
   DC3A E5 18              3492 	mov	a,_bp
   DC3C 24 07              3493 	add	a,#0x07
   DC3E F8                 3494 	mov	r0,a
   DC3F 76 00              3495 	mov	@r0,#0x00
   DC41 08                 3496 	inc	r0
   DC42 76 00              3497 	mov	@r0,#0x00
                           3498 ;	../../shared/src/ring_pll_cal.c:463: delta_code_first = 0;
   DC44 7C 00              3499 	mov	r4,#0x00
   DC46 7D 00              3500 	mov	r5,#0x00
                           3501 ;	../../shared/src/ring_pll_cal.c:471: timeout=0;
   DC48 C2 03              3502 	clr	_timeout
                           3503 ;	../../shared/src/ring_pll_cal.c:472: if(cmx_RINGPLL_CAL_TIMEOUT_DIS==0) {
   DC4A 90 E6 49           3504 	mov	dptr,#(_CAL_TIME_OUT_AND_DIS + 0x0001)
   DC4D E0                 3505 	movx	a,@dptr
   DC4E 20 E2 0A           3506 	jb	acc.2,00102$
                           3507 ;	../../shared/src/ring_pll_cal.c:473: timeout_start((uint16_t)RINGPLL_TIMEOUT_TIMER);
   DC51 75 8B F0           3508 	mov	_TMR1,#0xF0
   DC54 75 8D D8           3509 	mov	(_TMR1 >> 8),#0xD8
   DC57 D2 8E              3510 	setb	_TR1
   DC59 C2 03              3511 	clr	_timeout
   DC5B                    3512 00102$:
                           3513 ;	../../shared/src/ring_pll_cal.c:487: if(reg_ANA_PU_PLL_DLY_RING==0) {
   DC5B 90 A3 4D           3514 	mov	dptr,#(_PM_CMN_REG2 + 0x0001)
   DC5E E0                 3515 	movx	a,@dptr
   DC5F 20 E2 35           3516 	jb	acc.2,00104$
                           3517 ;	../../shared/src/ring_pll_cal.c:488: reg_ANA_PU_PLL_RING = 1;
   DC62 90 A3 24           3518 	mov	dptr,#_INPUT_CMN_PIN_REG2
   DC65 E0                 3519 	movx	a,@dptr
   DC66 44 20              3520 	orl	a,#0x20
   DC68 F0                 3521 	movx	@dptr,a
                           3522 ;	../../shared/src/ring_pll_cal.c:489: delay01(5);
   DC69 90 00 05           3523 	mov	dptr,#0x0005
   DC6C C0 04              3524 	push	ar4
   DC6E C0 05              3525 	push	ar5
   DC70 78 16              3526 	mov	r0,#_delay01
   DC72 79 BC              3527 	mov	r1,#(_delay01 >> 8)
   DC74 7A 02              3528 	mov	r2,#(_delay01 >> 16)
   DC76 12 00 B3           3529 	lcall	__sdcc_banked_call
                           3530 ;	../../shared/src/ring_pll_cal.c:490: reg_ANA_PU_PLL_DLY_RING = 1;
   DC79 90 A3 4D           3531 	mov	dptr,#(_PM_CMN_REG2 + 0x0001)
   DC7C E0                 3532 	movx	a,@dptr
   DC7D 44 04              3533 	orl	a,#0x04
   DC7F F0                 3534 	movx	@dptr,a
                           3535 ;	../../shared/src/ring_pll_cal.c:491: delay01(5);
   DC80 90 00 05           3536 	mov	dptr,#0x0005
   DC83 78 16              3537 	mov	r0,#_delay01
   DC85 79 BC              3538 	mov	r1,#(_delay01 >> 8)
   DC87 7A 02              3539 	mov	r2,#(_delay01 >> 16)
   DC89 12 00 B3           3540 	lcall	__sdcc_banked_call
   DC8C D0 05              3541 	pop	ar5
   DC8E D0 04              3542 	pop	ar4
                           3543 ;	../../shared/src/ring_pll_cal.c:492: reg_RESET_ANA_RING = 0;
   DC90 90 A3 33           3544 	mov	dptr,#(_PLLCAL_REG1 + 0x0003)
   DC93 E0                 3545 	movx	a,@dptr
   DC94 54 F7              3546 	anl	a,#0xf7
   DC96 F0                 3547 	movx	@dptr,a
   DC97                    3548 00104$:
                           3549 ;	../../shared/src/ring_pll_cal.c:496: PLL_SHRTR_RING = 1;
   DC97 C0 04              3550 	push	ar4
   DC99 C0 05              3551 	push	ar5
   DC9B 90 83 10           3552 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_196
   DC9E E0                 3553 	movx	a,@dptr
   DC9F 44 40              3554 	orl	a,#0x40
   DCA1 F0                 3555 	movx	@dptr,a
                           3556 ;	../../shared/src/ring_pll_cal.c:497: PLL_CAL_EN_RING = 1;
   DCA2 90 83 10           3557 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_196
   DCA5 E0                 3558 	movx	a,@dptr
   DCA6 44 80              3559 	orl	a,#0x80
   DCA8 F0                 3560 	movx	@dptr,a
                           3561 ;	../../shared/src/ring_pll_cal.c:498: reg_FBC_CNT_START = 0;
   DCA9 90 A3 30           3562 	mov	dptr,#_PLLCAL_REG1
   DCAC E0                 3563 	movx	a,@dptr
   DCAD 54 FE              3564 	anl	a,#0xfe
   DCAF F0                 3565 	movx	@dptr,a
                           3566 ;	../../shared/src/ring_pll_cal.c:505: save_FBDIV_h = reg_PLL_FBDIV_RING_9_8;
   DCB0 90 82 F0           3567 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_188
   DCB3 E0                 3568 	movx	a,@dptr
   DCB4 03                 3569 	rr	a
   DCB5 54 03              3570 	anl	a,#0x03
   DCB7 FE                 3571 	mov	r6,a
                           3572 ;	../../shared/src/ring_pll_cal.c:506: save_FBDIV_l = reg_PLL_FBDIV_RING_7_0;
   DCB8 90 82 F4           3573 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_189
   DCBB E0                 3574 	movx	a,@dptr
   DCBC FF                 3575 	mov	r7,a
   DCBD A8 18              3576 	mov	r0,_bp
   DCBF 08                 3577 	inc	r0
   DCC0 08                 3578 	inc	r0
   DCC1 A6 07              3579 	mov	@r0,ar7
                           3580 ;	../../shared/src/ring_pll_cal.c:507: save_FBCK_SEL = reg_ANA_FBCK_SEL_RING;
   DCC3 90 A3 18           3581 	mov	dptr,#_PM_CMN_REG1
   DCC6 E0                 3582 	movx	a,@dptr
   DCC7 03                 3583 	rr	a
   DCC8 03                 3584 	rr	a
   DCC9 54 01              3585 	anl	a,#0x01
   DCCB FC                 3586 	mov	r4,a
   DCCC E5 18              3587 	mov	a,_bp
   DCCE 24 03              3588 	add	a,#0x03
   DCD0 F8                 3589 	mov	r0,a
   DCD1 A6 04              3590 	mov	@r0,ar4
                           3591 ;	../../shared/src/ring_pll_cal.c:509: ringloadSpdtbl_4_fcnt();
   DCD3 C0 04              3592 	push	ar4
   DCD5 C0 05              3593 	push	ar5
   DCD7 C0 06              3594 	push	ar6
   DCD9 12 4D C8           3595 	lcall	_ringloadSpdtbl_4_fcnt
                           3596 ;	../../shared/src/ring_pll_cal.c:511: ringpll_load(CONT);
   DCDC 75 82 01           3597 	mov	dpl,#0x01
   DCDF 78 D4              3598 	mov	r0,#_ringpll_load
   DCE1 79 87              3599 	mov	r1,#(_ringpll_load >> 8)
   DCE3 7A 02              3600 	mov	r2,#(_ringpll_load >> 16)
   DCE5 12 00 B3           3601 	lcall	__sdcc_banked_call
                           3602 ;	../../shared/src/ring_pll_cal.c:512: SLLP_DAC_VALID = 1;  SLLP_DAC_VALID = 0;
   DCE8 90 83 04           3603 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DCEB E0                 3604 	movx	a,@dptr
   DCEC 44 40              3605 	orl	a,#0x40
   DCEE F0                 3606 	movx	@dptr,a
   DCEF E0                 3607 	movx	a,@dptr
   DCF0 54 BF              3608 	anl	a,#0xbf
   DCF2 F0                 3609 	movx	@dptr,a
                           3610 ;	../../shared/src/ring_pll_cal.c:514: delay01(40); //first DAC_VALID need 8uS settling time from next new DAC value
   DCF3 90 00 28           3611 	mov	dptr,#0x0028
   DCF6 78 16              3612 	mov	r0,#_delay01
   DCF8 79 BC              3613 	mov	r1,#(_delay01 >> 8)
   DCFA 7A 02              3614 	mov	r2,#(_delay01 >> 16)
   DCFC 12 00 B3           3615 	lcall	__sdcc_banked_call
   DCFF D0 06              3616 	pop	ar6
   DD01 D0 05              3617 	pop	ar5
   DD03 D0 04              3618 	pop	ar4
                           3619 ;	../../shared/src/ring_pll_cal.c:516: reg_FBC_PLLCAL_RING_EN = 1;
   DD05 90 A3 31           3620 	mov	dptr,#(_PLLCAL_REG1 + 0x0001)
   DD08 E0                 3621 	movx	a,@dptr
   DD09 44 02              3622 	orl	a,#0x02
   DD0B F0                 3623 	movx	@dptr,a
                           3624 ;	../../shared/src/ring_pll_cal.c:518: i = 0;
   DD0C E5 18              3625 	mov	a,_bp
   DD0E 24 0D              3626 	add	a,#0x0d
   DD10 F8                 3627 	mov	r0,a
   DD11 76 00              3628 	mov	@r0,#0x00
                           3629 ;	../../shared/src/ring_pll_cal.c:519: first_op_ring = 0;
   DD13 E5 18              3630 	mov	a,_bp
   DD15 24 04              3631 	add	a,#0x04
   DD17 F8                 3632 	mov	r0,a
   DD18 76 00              3633 	mov	@r0,#0x00
                           3634 ;	../../shared/src/ring_pll_cal.c:662: pll_clk_ready_ring_1();
   DD1A D0 05              3635 	pop	ar5
   DD1C D0 04              3636 	pop	ar4
                           3637 ;	../../shared/src/ring_pll_cal.c:521: do {
   DD1E A8 18              3638 	mov	r0,_bp
   DD20 08                 3639 	inc	r0
   DD21 76 00              3640 	mov	@r0,#0x00
   DD23                    3641 00142$:
                           3642 ;	../../shared/src/ring_pll_cal.c:529: cnt_rdy = reg_FBC_PLLCAL_CNT_READY;
   DD23 C0 06              3643 	push	ar6
   DD25 90 A3 30           3644 	mov	dptr,#_PLLCAL_REG1
   DD28 E0                 3645 	movx	a,@dptr
   DD29 03                 3646 	rr	a
   DD2A 54 01              3647 	anl	a,#0x01
   DD2C FE                 3648 	mov	r6,a
                           3649 ;	../../shared/src/ring_pll_cal.c:530: reg_FBC_CNT_START = 1;
   DD2D 90 A3 30           3650 	mov	dptr,#_PLLCAL_REG1
   DD30 E0                 3651 	movx	a,@dptr
   DD31 44 01              3652 	orl	a,#0x01
   DD33 F0                 3653 	movx	@dptr,a
                           3654 ;	../../shared/src/ring_pll_cal.c:531: if( cnt_rdy ) while(reg_FBC_PLLCAL_CNT_READY && !timeout);
   DD34 EE                 3655 	mov	a,r6
   DD35 D0 06              3656 	pop	ar6
   DD37 60 0A              3657 	jz	00112$
   DD39                    3658 00106$:
   DD39 90 A3 30           3659 	mov	dptr,#_PLLCAL_REG1
   DD3C E0                 3660 	movx	a,@dptr
   DD3D 30 E1 03           3661 	jnb	acc.1,00112$
   DD40 30 03 F6           3662 	jnb	_timeout,00106$
                           3663 ;	../../shared/src/ring_pll_cal.c:532: while(!reg_FBC_PLLCAL_CNT_READY && !timeout);
   DD43                    3664 00112$:
   DD43 90 A3 30           3665 	mov	dptr,#_PLLCAL_REG1
   DD46 E0                 3666 	movx	a,@dptr
   DD47 20 E1 03           3667 	jb	acc.1,00114$
   DD4A 30 03 F6           3668 	jnb	_timeout,00112$
   DD4D                    3669 00114$:
                           3670 ;	../../shared/src/ring_pll_cal.c:533: reg_FBC_CNT_START = 0;
   DD4D 90 A3 30           3671 	mov	dptr,#_PLLCAL_REG1
   DD50 E0                 3672 	movx	a,@dptr
   DD51 54 FE              3673 	anl	a,#0xfe
   DD53 F0                 3674 	movx	@dptr,a
                           3675 ;	../../shared/src/ring_pll_cal.c:535: if(timeout) {
   DD54 30 03 03           3676 	jnb	_timeout,00184$
   DD57 02 DF 92           3677 	ljmp	00144$
   DD5A                    3678 00184$:
                           3679 ;	../../shared/src/ring_pll_cal.c:544: Fmea = reg_FBC_PLLCAL_CNT_15_0;
   DD5A C0 06              3680 	push	ar6
   DD5C 90 A3 2E           3681 	mov	dptr,#(_PLLCAL_REG0 + 0x0002)
   DD5F E0                 3682 	movx	a,@dptr
   DD60 FE                 3683 	mov	r6,a
   DD61 A3                 3684 	inc	dptr
   DD62 E0                 3685 	movx	a,@dptr
   DD63 FA                 3686 	mov	r2,a
   DD64 E5 18              3687 	mov	a,_bp
   DD66 24 05              3688 	add	a,#0x05
   DD68 F8                 3689 	mov	r0,a
   DD69 A6 06              3690 	mov	@r0,ar6
   DD6B 08                 3691 	inc	r0
   DD6C A6 02              3692 	mov	@r0,ar2
                           3693 ;	../../shared/src/ring_pll_cal.c:556: if((Fmea >= (Ftarget_ring-TARGET_RANGE)) && (Fmea <= (Ftarget_ring+TARGET_RANGE))) {
   DD6E 90 E6 18           3694 	mov	dptr,#_CONTROL_CONFIG5
   DD71 E0                 3695 	movx	a,@dptr
   DD72 FA                 3696 	mov	r2,a
   DD73 A3                 3697 	inc	dptr
   DD74 E0                 3698 	movx	a,@dptr
   DD75 FB                 3699 	mov	r3,a
   DD76 1A                 3700 	dec	r2
   DD77 BA FF 01           3701 	cjne	r2,#0xff,00185$
   DD7A 1B                 3702 	dec	r3
   DD7B                    3703 00185$:
   DD7B E5 18              3704 	mov	a,_bp
   DD7D 24 05              3705 	add	a,#0x05
   DD7F F8                 3706 	mov	r0,a
   DD80 C3                 3707 	clr	c
   DD81 E6                 3708 	mov	a,@r0
   DD82 9A                 3709 	subb	a,r2
   DD83 08                 3710 	inc	r0
   DD84 E6                 3711 	mov	a,@r0
   DD85 9B                 3712 	subb	a,r3
   DD86 D0 06              3713 	pop	ar6
   DD88 40 35              3714 	jc	00139$
   DD8A 90 E6 18           3715 	mov	dptr,#_CONTROL_CONFIG5
   DD8D E0                 3716 	movx	a,@dptr
   DD8E FA                 3717 	mov	r2,a
   DD8F A3                 3718 	inc	dptr
   DD90 E0                 3719 	movx	a,@dptr
   DD91 FB                 3720 	mov	r3,a
   DD92 0A                 3721 	inc	r2
   DD93 BA 00 01           3722 	cjne	r2,#0x00,00187$
   DD96 0B                 3723 	inc	r3
   DD97                    3724 00187$:
   DD97 E5 18              3725 	mov	a,_bp
   DD99 24 05              3726 	add	a,#0x05
   DD9B F8                 3727 	mov	r0,a
   DD9C C3                 3728 	clr	c
   DD9D EA                 3729 	mov	a,r2
   DD9E 96                 3730 	subb	a,@r0
   DD9F EB                 3731 	mov	a,r3
   DDA0 08                 3732 	inc	r0
   DDA1 96                 3733 	subb	a,@r0
   DDA2 40 1B              3734 	jc	00139$
                           3735 ;	../../shared/src/ring_pll_cal.c:557: if (i == 0)	first_op_ring = 1;
   DDA4 A8 18              3736 	mov	r0,_bp
   DDA6 08                 3737 	inc	r0
   DDA7 E6                 3738 	mov	a,@r0
   DDA8 70 07              3739 	jnz	00118$
   DDAA E5 18              3740 	mov	a,_bp
   DDAC 24 04              3741 	add	a,#0x04
   DDAE F8                 3742 	mov	r0,a
   DDAF 76 01              3743 	mov	@r0,#0x01
   DDB1                    3744 00118$:
                           3745 ;	../../shared/src/ring_pll_cal.c:558: if (i >= min_step_number) {
   DDB1 A8 18              3746 	mov	r0,_bp
   DDB3 08                 3747 	inc	r0
   DDB4 B6 01 00           3748 	cjne	@r0,#0x01,00190$
   DDB7                    3749 00190$:
   DDB7 50 03              3750 	jnc	00191$
   DDB9 02 DF 73           3751 	ljmp	00140$
   DDBC                    3752 00191$:
                           3753 ;	../../shared/src/ring_pll_cal.c:562: break;  //1
   DDBC 02 DF 92           3754 	ljmp	00144$
   DDBF                    3755 00139$:
                           3756 ;	../../shared/src/ring_pll_cal.c:567: if((i == 0)||(first_op_ring == 1)) {
   DDBF A8 18              3757 	mov	r0,_bp
   DDC1 08                 3758 	inc	r0
   DDC2 E6                 3759 	mov	a,@r0
   DDC3 60 08              3760 	jz	00124$
   DDC5 E5 18              3761 	mov	a,_bp
   DDC7 24 04              3762 	add	a,#0x04
   DDC9 F8                 3763 	mov	r0,a
   DDCA B6 01 4B           3764 	cjne	@r0,#0x01,00125$
   DDCD                    3765 00124$:
                           3766 ;	../../shared/src/ring_pll_cal.c:568: first_op_ring = 0;
   DDCD C0 06              3767 	push	ar6
   DDCF E5 18              3768 	mov	a,_bp
   DDD1 24 04              3769 	add	a,#0x04
   DDD3 F8                 3770 	mov	r0,a
   DDD4 76 00              3771 	mov	@r0,#0x00
                           3772 ;	../../shared/src/ring_pll_cal.c:569: delta_code = (Ftarget_ring - Fmea)<<code_ratio; //5; // * code_ratio;
   DDD6 90 E6 18           3773 	mov	dptr,#_CONTROL_CONFIG5
   DDD9 E0                 3774 	movx	a,@dptr
   DDDA FA                 3775 	mov	r2,a
   DDDB A3                 3776 	inc	dptr
   DDDC E0                 3777 	movx	a,@dptr
   DDDD FB                 3778 	mov	r3,a
   DDDE E5 18              3779 	mov	a,_bp
   DDE0 24 05              3780 	add	a,#0x05
   DDE2 F8                 3781 	mov	r0,a
   DDE3 EA                 3782 	mov	a,r2
   DDE4 C3                 3783 	clr	c
   DDE5 96                 3784 	subb	a,@r0
   DDE6 FA                 3785 	mov	r2,a
   DDE7 EB                 3786 	mov	a,r3
   DDE8 08                 3787 	inc	r0
   DDE9 96                 3788 	subb	a,@r0
   DDEA FB                 3789 	mov	r3,a
   DDEB 90 E6 1A           3790 	mov	dptr,#(_CONTROL_CONFIG5 + 0x0002)
   DDEE E0                 3791 	movx	a,@dptr
   DDEF FE                 3792 	mov	r6,a
   DDF0 8E F0              3793 	mov	b,r6
   DDF2 05 F0              3794 	inc	b
   DDF4 80 06              3795 	sjmp	00196$
   DDF6                    3796 00195$:
   DDF6 EA                 3797 	mov	a,r2
   DDF7 2A                 3798 	add	a,r2
   DDF8 FA                 3799 	mov	r2,a
   DDF9 EB                 3800 	mov	a,r3
   DDFA 33                 3801 	rlc	a
   DDFB FB                 3802 	mov	r3,a
   DDFC                    3803 00196$:
   DDFC D5 F0 F7           3804 	djnz	b,00195$
   DDFF E5 18              3805 	mov	a,_bp
   DE01 24 0B              3806 	add	a,#0x0b
   DE03 F8                 3807 	mov	r0,a
   DE04 A6 02              3808 	mov	@r0,ar2
   DE06 08                 3809 	inc	r0
   DE07 A6 03              3810 	mov	@r0,ar3
                           3811 ;	../../shared/src/ring_pll_cal.c:570: delta_code_first = delta_code;
   DE09 E5 18              3812 	mov	a,_bp
   DE0B 24 0B              3813 	add	a,#0x0b
   DE0D F8                 3814 	mov	r0,a
   DE0E 86 04              3815 	mov	ar4,@r0
   DE10 08                 3816 	inc	r0
   DE11 86 05              3817 	mov	ar5,@r0
   DE13 D0 06              3818 	pop	ar6
   DE15 02 DE DD           3819 	ljmp	00126$
   DE18                    3820 00125$:
                           3821 ;	../../shared/src/ring_pll_cal.c:573: Fdiff = Fmea - Fmea_prev;
   DE18 C0 06              3822 	push	ar6
   DE1A E5 18              3823 	mov	a,_bp
   DE1C 24 05              3824 	add	a,#0x05
   DE1E F8                 3825 	mov	r0,a
   DE1F E5 18              3826 	mov	a,_bp
   DE21 24 07              3827 	add	a,#0x07
   DE23 F9                 3828 	mov	r1,a
   DE24 E6                 3829 	mov	a,@r0
   DE25 C3                 3830 	clr	c
   DE26 97                 3831 	subb	a,@r1
   DE27 FA                 3832 	mov	r2,a
   DE28 08                 3833 	inc	r0
   DE29 E6                 3834 	mov	a,@r0
   DE2A 09                 3835 	inc	r1
   DE2B 97                 3836 	subb	a,@r1
   DE2C FB                 3837 	mov	r3,a
   DE2D E5 18              3838 	mov	a,_bp
   DE2F 24 09              3839 	add	a,#0x09
   DE31 F8                 3840 	mov	r0,a
   DE32 A6 02              3841 	mov	@r0,ar2
   DE34 08                 3842 	inc	r0
   DE35 A6 03              3843 	mov	@r0,ar3
                           3844 ;	../../shared/src/ring_pll_cal.c:574: delta_code_nom = (Ftarget_ring - Fmea) * delta_code_first;
   DE37 90 E6 18           3845 	mov	dptr,#_CONTROL_CONFIG5
   DE3A E0                 3846 	movx	a,@dptr
   DE3B FE                 3847 	mov	r6,a
   DE3C A3                 3848 	inc	dptr
   DE3D E0                 3849 	movx	a,@dptr
   DE3E FA                 3850 	mov	r2,a
   DE3F E5 18              3851 	mov	a,_bp
   DE41 24 05              3852 	add	a,#0x05
   DE43 F8                 3853 	mov	r0,a
   DE44 EE                 3854 	mov	a,r6
   DE45 C3                 3855 	clr	c
   DE46 96                 3856 	subb	a,@r0
   DE47 FE                 3857 	mov	r6,a
   DE48 EA                 3858 	mov	a,r2
   DE49 08                 3859 	inc	r0
   DE4A 96                 3860 	subb	a,@r0
   DE4B FA                 3861 	mov	r2,a
   DE4C 8C 03              3862 	mov	ar3,r4
   DE4E 8D 07              3863 	mov	ar7,r5
   DE50 C0 06              3864 	push	ar6
   DE52 C0 03              3865 	push	ar3
   DE54 C0 07              3866 	push	ar7
   DE56 8E 82              3867 	mov	dpl,r6
   DE58 8A 83              3868 	mov	dph,r2
   DE5A 12 78 4F           3869 	lcall	__mulint
   DE5D AA 82              3870 	mov	r2,dpl
   DE5F AB 83              3871 	mov	r3,dph
   DE61 15 81              3872 	dec	sp
   DE63 15 81              3873 	dec	sp
   DE65 D0 06              3874 	pop	ar6
                           3875 ;	../../shared/src/ring_pll_cal.c:575: if (Fdiff == 0)
   DE67 D0 06              3876 	pop	ar6
   DE69 E5 18              3877 	mov	a,_bp
   DE6B 24 09              3878 	add	a,#0x09
   DE6D F8                 3879 	mov	r0,a
   DE6E E6                 3880 	mov	a,@r0
   DE6F 08                 3881 	inc	r0
   DE70 46                 3882 	orl	a,@r0
   DE71 70 37              3883 	jnz	00122$
                           3884 ;	../../shared/src/ring_pll_cal.c:576: delta_code = (Ftarget_ring - Fmea) * fdiff_0;
   DE73 90 E6 18           3885 	mov	dptr,#_CONTROL_CONFIG5
   DE76 E0                 3886 	movx	a,@dptr
   DE77 FA                 3887 	mov	r2,a
   DE78 A3                 3888 	inc	dptr
   DE79 E0                 3889 	movx	a,@dptr
   DE7A FB                 3890 	mov	r3,a
   DE7B E5 18              3891 	mov	a,_bp
   DE7D 24 05              3892 	add	a,#0x05
   DE7F F8                 3893 	mov	r0,a
   DE80 EA                 3894 	mov	a,r2
   DE81 C3                 3895 	clr	c
   DE82 96                 3896 	subb	a,@r0
   DE83 FA                 3897 	mov	r2,a
   DE84 EB                 3898 	mov	a,r3
   DE85 08                 3899 	inc	r0
   DE86 96                 3900 	subb	a,@r0
   DE87 FB                 3901 	mov	r3,a
   DE88 C0 06              3902 	push	ar6
   DE8A C0 02              3903 	push	ar2
   DE8C C0 03              3904 	push	ar3
   DE8E 90 00 14           3905 	mov	dptr,#0x0014
   DE91 12 78 4F           3906 	lcall	__mulint
   DE94 AA 82              3907 	mov	r2,dpl
   DE96 AB 83              3908 	mov	r3,dph
   DE98 15 81              3909 	dec	sp
   DE9A 15 81              3910 	dec	sp
   DE9C D0 06              3911 	pop	ar6
   DE9E E5 18              3912 	mov	a,_bp
   DEA0 24 0B              3913 	add	a,#0x0b
   DEA2 F8                 3914 	mov	r0,a
   DEA3 A6 02              3915 	mov	@r0,ar2
   DEA5 08                 3916 	inc	r0
   DEA6 A6 03              3917 	mov	@r0,ar3
   DEA8 80 29              3918 	sjmp	00123$
   DEAA                    3919 00122$:
                           3920 ;	../../shared/src/ring_pll_cal.c:578: delta_code = delta_code_nom / Fdiff;
   DEAA C0 06              3921 	push	ar6
   DEAC E5 18              3922 	mov	a,_bp
   DEAE 24 09              3923 	add	a,#0x09
   DEB0 F8                 3924 	mov	r0,a
   DEB1 E6                 3925 	mov	a,@r0
   DEB2 C0 E0              3926 	push	acc
   DEB4 08                 3927 	inc	r0
   DEB5 E6                 3928 	mov	a,@r0
   DEB6 C0 E0              3929 	push	acc
   DEB8 8A 82              3930 	mov	dpl,r2
   DEBA 8B 83              3931 	mov	dph,r3
   DEBC 12 79 C0           3932 	lcall	__divsint
   DEBF AA 82              3933 	mov	r2,dpl
   DEC1 AB 83              3934 	mov	r3,dph
   DEC3 15 81              3935 	dec	sp
   DEC5 15 81              3936 	dec	sp
   DEC7 D0 06              3937 	pop	ar6
   DEC9 E5 18              3938 	mov	a,_bp
   DECB 24 0B              3939 	add	a,#0x0b
   DECD F8                 3940 	mov	r0,a
   DECE A6 02              3941 	mov	@r0,ar2
   DED0 08                 3942 	inc	r0
   DED1 A6 03              3943 	mov	@r0,ar3
   DED3                    3944 00123$:
                           3945 ;	../../shared/src/ring_pll_cal.c:579: delta_code_first = delta_code;
   DED3 E5 18              3946 	mov	a,_bp
   DED5 24 0B              3947 	add	a,#0x0b
   DED7 F8                 3948 	mov	r0,a
   DED8 86 04              3949 	mov	ar4,@r0
   DEDA 08                 3950 	inc	r0
   DEDB 86 05              3951 	mov	ar5,@r0
   DEDD                    3952 00126$:
                           3953 ;	../../shared/src/ring_pll_cal.c:582: ringpll_dac_fine = ringpll_dac_fine + delta_code;
   DEDD 90 66 21           3954 	mov	dptr,#_ringpll_dac_fine
   DEE0 E0                 3955 	movx	a,@dptr
   DEE1 FA                 3956 	mov	r2,a
   DEE2 A3                 3957 	inc	dptr
   DEE3 E0                 3958 	movx	a,@dptr
   DEE4 FB                 3959 	mov	r3,a
   DEE5 E5 18              3960 	mov	a,_bp
   DEE7 24 0B              3961 	add	a,#0x0b
   DEE9 F8                 3962 	mov	r0,a
   DEEA 90 66 21           3963 	mov	dptr,#_ringpll_dac_fine
   DEED E6                 3964 	mov	a,@r0
   DEEE 2A                 3965 	add	a,r2
   DEEF F0                 3966 	movx	@dptr,a
   DEF0 08                 3967 	inc	r0
   DEF1 E6                 3968 	mov	a,@r0
   DEF2 3B                 3969 	addc	a,r3
   DEF3 A3                 3970 	inc	dptr
   DEF4 F0                 3971 	movx	@dptr,a
                           3972 ;	../../shared/src/ring_pll_cal.c:584: if (ringpll_dac_fine >= dac_fine_max_value) 
   DEF5 90 66 21           3973 	mov	dptr,#_ringpll_dac_fine
   DEF8 E0                 3974 	movx	a,@dptr
   DEF9 FA                 3975 	mov	r2,a
   DEFA A3                 3976 	inc	dptr
   DEFB E0                 3977 	movx	a,@dptr
   DEFC FB                 3978 	mov	r3,a
   DEFD C3                 3979 	clr	c
   DEFE EA                 3980 	mov	a,r2
   DEFF 94 FF              3981 	subb	a,#0xFF
   DF01 EB                 3982 	mov	a,r3
   DF02 94 07              3983 	subb	a,#0x07
   DF04 40 0C              3984 	jc	00131$
                           3985 ;	../../shared/src/ring_pll_cal.c:585: ringpll_dac_fine = dac_fine_max_value;
   DF06 90 66 21           3986 	mov	dptr,#_ringpll_dac_fine
   DF09 74 FF              3987 	mov	a,#0xFF
   DF0B F0                 3988 	movx	@dptr,a
   DF0C A3                 3989 	inc	dptr
   DF0D 74 07              3990 	mov	a,#0x07
   DF0F F0                 3991 	movx	@dptr,a
   DF10 80 0B              3992 	sjmp	00132$
   DF12                    3993 00131$:
                           3994 ;	../../shared/src/ring_pll_cal.c:586: else if (ringpll_dac_fine <= 0)
   DF12 EA                 3995 	mov	a,r2
   DF13 4B                 3996 	orl	a,r3
   DF14 70 07              3997 	jnz	00132$
                           3998 ;	../../shared/src/ring_pll_cal.c:587: ringpll_dac_fine = 0;
   DF16 90 66 21           3999 	mov	dptr,#_ringpll_dac_fine
   DF19 E4                 4000 	clr	a
   DF1A F0                 4001 	movx	@dptr,a
   DF1B A3                 4002 	inc	dptr
   DF1C F0                 4003 	movx	@dptr,a
   DF1D                    4004 00132$:
                           4005 ;	../../shared/src/ring_pll_cal.c:589: if ((ringpll_dac_fine == dac_fine_max_value) || (ringpll_dac_fine == 0)) {
   DF1D 90 66 21           4006 	mov	dptr,#_ringpll_dac_fine
   DF20 E0                 4007 	movx	a,@dptr
   DF21 FA                 4008 	mov	r2,a
   DF22 A3                 4009 	inc	dptr
   DF23 E0                 4010 	movx	a,@dptr
   DF24 FB                 4011 	mov	r3,a
   DF25 BA FF 05           4012 	cjne	r2,#0xFF,00200$
   DF28 BB 07 02           4013 	cjne	r3,#0x07,00200$
   DF2B 80 04              4014 	sjmp	00135$
   DF2D                    4015 00200$:
   DF2D EA                 4016 	mov	a,r2
   DF2E 4B                 4017 	orl	a,r3
   DF2F 70 11              4018 	jnz	00136$
   DF31                    4019 00135$:
                           4020 ;	../../shared/src/ring_pll_cal.c:590: if (i >= min_step_number) {
   DF31 A8 18              4021 	mov	r0,_bp
   DF33 08                 4022 	inc	r0
   DF34 B6 01 00           4023 	cjne	@r0,#0x01,00202$
   DF37                    4024 00202$:
   DF37 40 09              4025 	jc	00136$
                           4026 ;	../../shared/src/ring_pll_cal.c:594: cmx_PLL_CAL_RING_PASS = 0;
   DF39 90 E6 4D           4027 	mov	dptr,#(_CAL_STATUS_READ + 0x0001)
   DF3C E0                 4028 	movx	a,@dptr
   DF3D 54 F7              4029 	anl	a,#0xf7
   DF3F F0                 4030 	movx	@dptr,a
                           4031 ;	../../shared/src/ring_pll_cal.c:599: break;
   DF40 80 50              4032 	sjmp	00144$
   DF42                    4033 00136$:
                           4034 ;	../../shared/src/ring_pll_cal.c:603: Fmea_prev = Fmea;
   DF42 E5 18              4035 	mov	a,_bp
   DF44 24 05              4036 	add	a,#0x05
   DF46 F8                 4037 	mov	r0,a
   DF47 E5 18              4038 	mov	a,_bp
   DF49 24 07              4039 	add	a,#0x07
   DF4B F9                 4040 	mov	r1,a
   DF4C E6                 4041 	mov	a,@r0
   DF4D F7                 4042 	mov	@r1,a
   DF4E 08                 4043 	inc	r0
   DF4F 09                 4044 	inc	r1
   DF50 E6                 4045 	mov	a,@r0
   DF51 F7                 4046 	mov	@r1,a
                           4047 ;	../../shared/src/ring_pll_cal.c:604: ringpll_dac_fine_output();
   DF52 C0 04              4048 	push	ar4
   DF54 C0 05              4049 	push	ar5
   DF56 C0 06              4050 	push	ar6
   DF58 78 5E              4051 	mov	r0,#_ringpll_dac_fine_output
   DF5A 79 88              4052 	mov	r1,#(_ringpll_dac_fine_output >> 8)
   DF5C 7A 02              4053 	mov	r2,#(_ringpll_dac_fine_output >> 16)
   DF5E 12 00 B3           4054 	lcall	__sdcc_banked_call
                           4055 ;	../../shared/src/ring_pll_cal.c:616: delay01(30); //6uSec settling time required after from second DAC_VALID toggle to new DAC value or SHRTR=0 
   DF61 90 00 1E           4056 	mov	dptr,#0x001E
   DF64 78 16              4057 	mov	r0,#_delay01
   DF66 79 BC              4058 	mov	r1,#(_delay01 >> 8)
   DF68 7A 02              4059 	mov	r2,#(_delay01 >> 16)
   DF6A 12 00 B3           4060 	lcall	__sdcc_banked_call
   DF6D D0 06              4061 	pop	ar6
   DF6F D0 05              4062 	pop	ar5
   DF71 D0 04              4063 	pop	ar4
   DF73                    4064 00140$:
                           4065 ;	../../shared/src/ring_pll_cal.c:618: i++;
   DF73 A8 18              4066 	mov	r0,_bp
   DF75 08                 4067 	inc	r0
   DF76 06                 4068 	inc	@r0
   DF77 A8 18              4069 	mov	r0,_bp
   DF79 08                 4070 	inc	r0
   DF7A E5 18              4071 	mov	a,_bp
   DF7C 24 0D              4072 	add	a,#0x0d
   DF7E F9                 4073 	mov	r1,a
   DF7F E6                 4074 	mov	a,@r0
   DF80 F7                 4075 	mov	@r1,a
                           4076 ;	../../shared/src/ring_pll_cal.c:620: } while (i < max_step_number);
   DF81 90 E6 1B           4077 	mov	dptr,#(_CONTROL_CONFIG5 + 0x0003)
   DF84 E0                 4078 	movx	a,@dptr
   DF85 FA                 4079 	mov	r2,a
   DF86 A8 18              4080 	mov	r0,_bp
   DF88 08                 4081 	inc	r0
   DF89 E6                 4082 	mov	a,@r0
   DF8A B5 02 00           4083 	cjne	a,ar2,00204$
   DF8D                    4084 00204$:
   DF8D 50 03              4085 	jnc	00205$
   DF8F 02 DD 23           4086 	ljmp	00142$
   DF92                    4087 00205$:
   DF92                    4088 00144$:
                           4089 ;	../../shared/src/ring_pll_cal.c:621: reg_MCU_DEBUGF_LANE_7_0 = i; //test
   DF92 90 22 C3           4090 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0003)
   DF95 E5 18              4091 	mov	a,_bp
   DF97 24 0D              4092 	add	a,#0x0d
   DF99 F8                 4093 	mov	r0,a
   DF9A E6                 4094 	mov	a,@r0
   DF9B F0                 4095 	movx	@dptr,a
                           4096 ;	../../shared/src/ring_pll_cal.c:622: reg_FBC_PLLCAL_RING_EN = 0;
   DF9C 90 A3 31           4097 	mov	dptr,#(_PLLCAL_REG1 + 0x0001)
   DF9F E0                 4098 	movx	a,@dptr
   DFA0 54 FD              4099 	anl	a,#0xfd
   DFA2 F0                 4100 	movx	@dptr,a
                           4101 ;	../../shared/src/ring_pll_cal.c:623: ringpll_save(CONT);
   DFA3 75 82 01           4102 	mov	dpl,#0x01
   DFA6 C0 06              4103 	push	ar6
   DFA8 78 61              4104 	mov	r0,#_ringpll_save
   DFAA 79 87              4105 	mov	r1,#(_ringpll_save >> 8)
   DFAC 7A 02              4106 	mov	r2,#(_ringpll_save >> 16)
   DFAE 12 00 B3           4107 	lcall	__sdcc_banked_call
   DFB1 D0 06              4108 	pop	ar6
                           4109 ;	../../shared/src/ring_pll_cal.c:630: reg_PLL_FBDIV_RING_9_8 = save_FBDIV_h;
   DFB3 90 82 F0           4110 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_188
   DFB6 EE                 4111 	mov	a,r6
   DFB7 2E                 4112 	add	a,r6
   DFB8 54 06              4113 	anl	a,#0x06
   DFBA F5 F0              4114 	mov	b,a
   DFBC E0                 4115 	movx	a,@dptr
   DFBD 54 F9              4116 	anl	a,#0xf9
   DFBF 45 F0              4117 	orl	a,b
   DFC1 F0                 4118 	movx	@dptr,a
                           4119 ;	../../shared/src/ring_pll_cal.c:631: reg_PLL_FBDIV_RING_7_0 = save_FBDIV_l;
   DFC2 90 82 F4           4120 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_189
   DFC5 A8 18              4121 	mov	r0,_bp
   DFC7 08                 4122 	inc	r0
   DFC8 08                 4123 	inc	r0
   DFC9 E6                 4124 	mov	a,@r0
   DFCA F0                 4125 	movx	@dptr,a
                           4126 ;	../../shared/src/ring_pll_cal.c:632: reg_ANA_FBCK_SEL_RING = save_FBCK_SEL;
   DFCB 90 A3 18           4127 	mov	dptr,#_PM_CMN_REG1
   DFCE E5 18              4128 	mov	a,_bp
   DFD0 24 03              4129 	add	a,#0x03
   DFD2 F8                 4130 	mov	r0,a
   DFD3 E6                 4131 	mov	a,@r0
   DFD4 13                 4132 	rrc	a
   DFD5 E0                 4133 	movx	a,@dptr
   DFD6 92 E2              4134 	mov	acc.2,c
   DFD8 F0                 4135 	movx	@dptr,a
                           4136 ;	../../shared/src/ring_pll_cal.c:635: ring_size_counter = ring_size_counter_mid;
   DFD9 90 66 3F           4137 	mov	dptr,#_ring_size_counter_mid
   DFDC E0                 4138 	movx	a,@dptr
   DFDD FA                 4139 	mov	r2,a
   DFDE 90 66 3E           4140 	mov	dptr,#_ring_size_counter
   DFE1 F0                 4141 	movx	@dptr,a
                           4142 ;	../../shared/src/ring_pll_cal.c:637: PLL_CAL_EN_RING = 0;
   DFE2 90 83 10           4143 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_196
   DFE5 E0                 4144 	movx	a,@dptr
   DFE6 54 7F              4145 	anl	a,#0x7f
   DFE8 F0                 4146 	movx	@dptr,a
                           4147 ;	../../shared/src/ring_pll_cal.c:638: PLL_SHRTR_RING = 0;
   DFE9 90 83 10           4148 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_196
   DFEC E0                 4149 	movx	a,@dptr
   DFED 54 BF              4150 	anl	a,#0xbf
   DFEF F0                 4151 	movx	@dptr,a
                           4152 ;	../../shared/src/ring_pll_cal.c:643: while(!reg_ANA_PLL_LOCK_RING_RD && !timeout);
   DFF0                    4153 00146$:
   DFF0 90 A3 19           4154 	mov	dptr,#(_PM_CMN_REG1 + 0x0001)
   DFF3 E0                 4155 	movx	a,@dptr
   DFF4 20 E7 03           4156 	jb	acc.7,00148$
   DFF7 30 03 F6           4157 	jnb	_timeout,00146$
   DFFA                    4158 00148$:
                           4159 ;	../../shared/src/ring_pll_cal.c:649: if(timeout) cmx_PLL_CAL_RING_PASS = 0;
   DFFA 30 03 07           4160 	jnb	_timeout,00150$
   DFFD 90 E6 4D           4161 	mov	dptr,#(_CAL_STATUS_READ + 0x0001)
   E000 E0                 4162 	movx	a,@dptr
   E001 54 F7              4163 	anl	a,#0xf7
   E003 F0                 4164 	movx	@dptr,a
   E004                    4165 00150$:
                           4166 ;	../../shared/src/ring_pll_cal.c:658: if(PHY_STATUS != ST_SPDCHG) {
   E004 90 22 30           4167 	mov	dptr,#_MCU_STATUS0_LANE
   E007 E0                 4168 	movx	a,@dptr
   E008 FA                 4169 	mov	r2,a
   E009 BA 19 02           4170 	cjne	r2,#0x19,00209$
   E00C 80 0C              4171 	sjmp	00152$
   E00E                    4172 00209$:
                           4173 ;	../../shared/src/ring_pll_cal.c:659: delay01(200);	//delay 20usec for glitch
   E00E 90 00 C8           4174 	mov	dptr,#0x00C8
   E011 78 16              4175 	mov	r0,#_delay01
   E013 79 BC              4176 	mov	r1,#(_delay01 >> 8)
   E015 7A 02              4177 	mov	r2,#(_delay01 >> 16)
   E017 12 00 B3           4178 	lcall	__sdcc_banked_call
   E01A                    4179 00152$:
                           4180 ;	../../shared/src/ring_pll_cal.c:662: pll_clk_ready_ring_1();
   E01A 78 A7              4181 	mov	r0,#_pll_clk_ready_ring_1
   E01C 79 D4              4182 	mov	r1,#(_pll_clk_ready_ring_1 >> 8)
   E01E 7A 02              4183 	mov	r2,#(_pll_clk_ready_ring_1 >> 16)
   E020 12 00 B3           4184 	lcall	__sdcc_banked_call
   E023 85 18 81           4185 	mov	sp,_bp
   E026 D0 18              4186 	pop	_bp
   E028 02 00 C5           4187 	ljmp	__sdcc_banked_ret
                           4188 	.area CSEG    (CODE)
                           4189 	.area BANK1   (CODE)
                           4190 	.area CABS    (ABS,CODE)
