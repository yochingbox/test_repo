                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:27 2018
                              5 ;--------------------------------------------------------
                              6 	.module lane_margin
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
                            979 	.globl _lane_margin_start
                            980 	.globl _lane_margin_dfe_run
                            981 	.globl _cfg_dfe_fm_lane_en
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
                           2027 ;Allocation info for local variables in function 'lane_margin_start'
                           2028 ;------------------------------------------------------------
                           2029 ;save_dfe_cont_mode        Allocated to registers r2 
                           2030 ;save_eom_en               Allocated to registers r3 
                           2031 ;save_fast_dfe_timer_en    Allocated to registers r4 
                           2032 ;save_eom_clk_en           Allocated to registers r5 
                           2033 ;save_eye_check_bypass     Allocated to registers r6 
                           2034 ;save_f0_sp_o              Allocated to stack - offset 1
                           2035 ;save_f0_sp_e              Allocated to stack - offset 2
                           2036 ;save_f0_sn_o              Allocated to stack - offset 3
                           2037 ;save_f0_sn_e              Allocated to registers r7 
                           2038 ;------------------------------------------------------------
                           2039 ;	../../shared/src/lane_margin.c:26: void lane_margin_start(void) BANKING_CTRL {
                           2040 ;	-----------------------------------------
                           2041 ;	 function lane_margin_start
                           2042 ;	-----------------------------------------
   ADAF                    2043 _lane_margin_start:
                    0002   2044 	ar2 = 0x02
                    0003   2045 	ar3 = 0x03
                    0004   2046 	ar4 = 0x04
                    0005   2047 	ar5 = 0x05
                    0006   2048 	ar6 = 0x06
                    0007   2049 	ar7 = 0x07
                    0000   2050 	ar0 = 0x00
                    0001   2051 	ar1 = 0x01
   ADAF C0 18              2052 	push	_bp
   ADB1 85 81 18           2053 	mov	_bp,sp
   ADB4 05 81              2054 	inc	sp
   ADB6 05 81              2055 	inc	sp
   ADB8 05 81              2056 	inc	sp
                           2057 ;	../../shared/src/lane_margin.c:38: save_dfe_cont_mode = reg_DFE_ADAPT_CONT_LANE;
   ADBA 90 24 01           2058 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0001)
   ADBD E0                 2059 	movx	a,@dptr
   ADBE C4                 2060 	swap	a
   ADBF 03                 2061 	rr	a
   ADC0 54 01              2062 	anl	a,#0x01
   ADC2 FA                 2063 	mov	r2,a
                           2064 ;	../../shared/src/lane_margin.c:39: save_dfe_adapt_splr = reg_DFE_ADAPT_SPLR_EN_LANE_3_0; 
   ADC3 90 24 00           2065 	mov	dptr,#_DFE_CTRL_REG0
   ADC6 E0                 2066 	movx	a,@dptr
   ADC7 C4                 2067 	swap	a
   ADC8 54 0F              2068 	anl	a,#0x0f
   ADCA 90 67 1F           2069 	mov	dptr,#_save_dfe_adapt_splr
   ADCD F0                 2070 	movx	@dptr,a
                           2071 ;	../../shared/src/lane_margin.c:40: save_dfe_adapt_e_en = reg_DFE_ADAPT_EVEN_EN_LANE;
   ADCE 90 24 02           2072 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   ADD1 E0                 2073 	movx	a,@dptr
   ADD2 23                 2074 	rl	a
   ADD3 54 01              2075 	anl	a,#0x01
   ADD5 90 67 20           2076 	mov	dptr,#_save_dfe_adapt_e_en
   ADD8 F0                 2077 	movx	@dptr,a
                           2078 ;	../../shared/src/lane_margin.c:41: save_dfe_adapt_o_en = reg_DFE_ADAPT_ODD_EN_LANE;
   ADD9 90 24 02           2079 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   ADDC E0                 2080 	movx	a,@dptr
   ADDD 23                 2081 	rl	a
   ADDE 23                 2082 	rl	a
   ADDF 54 01              2083 	anl	a,#0x01
   ADE1 90 67 21           2084 	mov	dptr,#_save_dfe_adapt_o_en
   ADE4 F0                 2085 	movx	@dptr,a
                           2086 ;	../../shared/src/lane_margin.c:42: save_eom_en_s = reg_EOM_EN_S_LANE;
   ADE5 90 00 58           2087 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_22
   ADE8 E0                 2088 	movx	a,@dptr
   ADE9 23                 2089 	rl	a
   ADEA 23                 2090 	rl	a
   ADEB 54 01              2091 	anl	a,#0x01
   ADED 90 67 22           2092 	mov	dptr,#_save_eom_en_s
   ADF0 F0                 2093 	movx	@dptr,a
                           2094 ;	../../shared/src/lane_margin.c:43: save_eom_en_d = reg_EOM_EN_D_LANE;
   ADF1 90 00 58           2095 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_22
   ADF4 E0                 2096 	movx	a,@dptr
   ADF5 C4                 2097 	swap	a
   ADF6 03                 2098 	rr	a
   ADF7 54 01              2099 	anl	a,#0x01
   ADF9 90 67 23           2100 	mov	dptr,#_save_eom_en_d
   ADFC F0                 2101 	movx	@dptr,a
                           2102 ;	../../shared/src/lane_margin.c:44: save_dfe_en = reg_DFE_EN_LANE;
   ADFD 90 24 10           2103 	mov	dptr,#_RX_EQ_CLK_CTRL
   AE00 E0                 2104 	movx	a,@dptr
   AE01 C4                 2105 	swap	a
   AE02 54 01              2106 	anl	a,#0x01
   AE04 90 67 24           2107 	mov	dptr,#_save_dfe_en
   AE07 F0                 2108 	movx	@dptr,a
                           2109 ;	../../shared/src/lane_margin.c:45: save_eom_en = reg_EOM_EN_LANE;
   AE08 90 25 80           2110 	mov	dptr,#_EOM_REG0
   AE0B E0                 2111 	movx	a,@dptr
   AE0C 54 01              2112 	anl	a,#0x01
   AE0E FB                 2113 	mov	r3,a
                           2114 ;	../../shared/src/lane_margin.c:46: save_fast_dfe_timer_en = lnx_FAST_DFE_TIMER_EN_LANE;
   AE0F 90 60 4F           2115 	mov	dptr,#(_DFE_CONTROL_5 + 0x0003)
   AE12 E0                 2116 	movx	a,@dptr
   AE13 23                 2117 	rl	a
   AE14 54 01              2118 	anl	a,#0x01
   AE16 FC                 2119 	mov	r4,a
                           2120 ;	../../shared/src/lane_margin.c:47: save_eom_clk_en = reg_EOM_CLK_EN_LANE;
   AE17 90 02 18           2121 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_134
   AE1A E0                 2122 	movx	a,@dptr
   AE1B 03                 2123 	rr	a
   AE1C 03                 2124 	rr	a
   AE1D 54 01              2125 	anl	a,#0x01
   AE1F FD                 2126 	mov	r5,a
                           2127 ;	../../shared/src/lane_margin.c:48: save_eye_check_bypass = lnx_EYE_CHECK_BYPASS_LANE;
   AE20 90 60 4F           2128 	mov	dptr,#(_DFE_CONTROL_5 + 0x0003)
   AE23 E0                 2129 	movx	a,@dptr
   AE24 23                 2130 	rl	a
   AE25 23                 2131 	rl	a
   AE26 54 01              2132 	anl	a,#0x01
   AE28 FE                 2133 	mov	r6,a
                           2134 ;	../../shared/src/lane_margin.c:49: save_f0_sp_o = reg_DFE_F0_S_P_O_SM_LANE_5_0;
   AE29 90 24 A2           2135 	mov	dptr,#(_DFE_READ_ODD_SM_REG0 + 0x0002)
   AE2C E0                 2136 	movx	a,@dptr
   AE2D 54 3F              2137 	anl	a,#0x3f
   AE2F FF                 2138 	mov	r7,a
   AE30 A8 18              2139 	mov	r0,_bp
   AE32 08                 2140 	inc	r0
   AE33 A6 07              2141 	mov	@r0,ar7
                           2142 ;	../../shared/src/lane_margin.c:50: save_f0_sp_e = reg_DFE_F0_S_P_E_SM_LANE_5_0;
   AE35 90 24 82           2143 	mov	dptr,#(_DFE_READ_EVEN_SM_REG0 + 0x0002)
   AE38 E0                 2144 	movx	a,@dptr
   AE39 54 3F              2145 	anl	a,#0x3f
   AE3B FF                 2146 	mov	r7,a
   AE3C A8 18              2147 	mov	r0,_bp
   AE3E 08                 2148 	inc	r0
   AE3F 08                 2149 	inc	r0
   AE40 A6 07              2150 	mov	@r0,ar7
                           2151 ;	../../shared/src/lane_margin.c:51: save_f0_sn_o = reg_DFE_F0_S_N_O_SM_LANE_5_0;
   AE42 90 24 A3           2152 	mov	dptr,#(_DFE_READ_ODD_SM_REG0 + 0x0003)
   AE45 E0                 2153 	movx	a,@dptr
   AE46 54 3F              2154 	anl	a,#0x3f
   AE48 FF                 2155 	mov	r7,a
   AE49 E5 18              2156 	mov	a,_bp
   AE4B 24 03              2157 	add	a,#0x03
   AE4D F8                 2158 	mov	r0,a
   AE4E A6 07              2159 	mov	@r0,ar7
                           2160 ;	../../shared/src/lane_margin.c:52: save_f0_sn_e = reg_DFE_F0_S_N_E_SM_LANE_5_0;
   AE50 90 24 83           2161 	mov	dptr,#(_DFE_READ_EVEN_SM_REG0 + 0x0003)
   AE53 E0                 2162 	movx	a,@dptr
   AE54 54 3F              2163 	anl	a,#0x3f
   AE56 FF                 2164 	mov	r7,a
                           2165 ;	../../shared/src/lane_margin.c:57: if (save_dfe_cont_mode) {
   AE57 EA                 2166 	mov	a,r2
   AE58 60 19              2167 	jz	00105$
                           2168 ;	../../shared/src/lane_margin.c:58: reg_DFE_ADAPT_ABORT_LANE = 1;
                           2169 ;	../../shared/src/lane_margin.c:59: reg_DFE_ADAPT_CONT_LANE = 0;
   AE5A 90 24 01           2170 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0001)
   AE5D E0                 2171 	movx	a,@dptr
   AE5E 44 40              2172 	orl	a,#0x40
   AE60 F0                 2173 	movx	@dptr,a
   AE61 E0                 2174 	movx	a,@dptr
   AE62 54 DF              2175 	anl	a,#0xdf
   AE64 F0                 2176 	movx	@dptr,a
                           2177 ;	../../shared/src/lane_margin.c:60: while(!reg_DFE_DONE_LANE);
   AE65                    2178 00101$:
   AE65 90 24 02           2179 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   AE68 E0                 2180 	movx	a,@dptr
   AE69 30 E1 F9           2181 	jnb	acc.1,00101$
                           2182 ;	../../shared/src/lane_margin.c:61: reg_DFE_START_LANE = 0;
   AE6C 90 24 02           2183 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   AE6F E0                 2184 	movx	a,@dptr
   AE70 54 FE              2185 	anl	a,#0xfe
   AE72 F0                 2186 	movx	@dptr,a
   AE73                    2187 00105$:
                           2188 ;	../../shared/src/lane_margin.c:65: reg_EOM_CNT_AUTO_CLR_LANE = 0;
   AE73 C0 07              2189 	push	ar7
   AE75 90 25 80           2190 	mov	dptr,#_EOM_REG0
   AE78 E0                 2191 	movx	a,@dptr
   AE79 54 F7              2192 	anl	a,#0xf7
   AE7B F0                 2193 	movx	@dptr,a
                           2194 ;	../../shared/src/lane_margin.c:66: dfe_adapt_lpnum_3_0 = 0;//(uint8_t)(loop_num&0x0f); //0x16
   AE7C 90 24 05           2195 	mov	dptr,#(_DFE_CTRL_REG1 + 0x0001)
   AE7F E0                 2196 	movx	a,@dptr
   AE80 54 0F              2197 	anl	a,#0x0f
   AE82 F0                 2198 	movx	@dptr,a
                           2199 ;	../../shared/src/lane_margin.c:67: dfe_adapt_lpnum_9_4 = 0;//((uint8_t)(loop_num>>4)&0x3f);			
   AE83 90 24 06           2200 	mov	dptr,#(_DFE_CTRL_REG1 + 0x0002)
   AE86 E0                 2201 	movx	a,@dptr
   AE87 54 C0              2202 	anl	a,#0xc0
   AE89 F0                 2203 	movx	@dptr,a
                           2204 ;	../../shared/src/lane_margin.c:68: reg_EOM_CLK_EN_LANE = 1;
   AE8A 90 02 18           2205 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_134
   AE8D E0                 2206 	movx	a,@dptr
   AE8E 44 04              2207 	orl	a,#0x04
   AE90 F0                 2208 	movx	@dptr,a
                           2209 ;	../../shared/src/lane_margin.c:69: lnx_EYE_CHECK_BYPASS_LANE = 0;
   AE91 90 60 4F           2210 	mov	dptr,#(_DFE_CONTROL_5 + 0x0003)
   AE94 E0                 2211 	movx	a,@dptr
   AE95 54 BF              2212 	anl	a,#0xbf
   AE97 F0                 2213 	movx	@dptr,a
                           2214 ;	../../shared/src/lane_margin.c:70: cmx_EOM_ALIGN_CAL_EXT_EN = 0; // This is for simulation. In real case, this register is already 0.
   AE98 90 E6 0A           2215 	mov	dptr,#(_CONTROL_CONFIG1 + 0x0002)
   AE9B E0                 2216 	movx	a,@dptr
   AE9C 54 F7              2217 	anl	a,#0xf7
   AE9E F0                 2218 	movx	@dptr,a
                           2219 ;	../../shared/src/lane_margin.c:72: eom_align_cal(); 
   AE9F C0 02              2220 	push	ar2
   AEA1 C0 03              2221 	push	ar3
   AEA3 C0 04              2222 	push	ar4
   AEA5 C0 05              2223 	push	ar5
   AEA7 C0 06              2224 	push	ar6
   AEA9 C0 07              2225 	push	ar7
   AEAB 78 0C              2226 	mov	r0,#_eom_align_cal
   AEAD 79 B0              2227 	mov	r1,#(_eom_align_cal >> 8)
   AEAF 7A 02              2228 	mov	r2,#(_eom_align_cal >> 16)
   AEB1 12 00 B3           2229 	lcall	__sdcc_banked_call
                           2230 ;	../../shared/src/lane_margin.c:76: EOM_EN_D = 0; 
                           2231 ;	../../shared/src/lane_margin.c:77: EOM_EN_S = 1; 
                           2232 ;	../../shared/src/lane_margin.c:78: EOM_EN_E = 0;
   AEB4 90 00 58           2233 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_22
   AEB7 E0                 2234 	movx	a,@dptr
   AEB8 54 DF              2235 	anl	a,#0xdf
   AEBA F0                 2236 	movx	@dptr,a
   AEBB E0                 2237 	movx	a,@dptr
   AEBC 44 40              2238 	orl	a,#0x40
   AEBE F0                 2239 	movx	@dptr,a
   AEBF E0                 2240 	movx	a,@dptr
   AEC0 54 EF              2241 	anl	a,#0xef
   AEC2 F0                 2242 	movx	@dptr,a
                           2243 ;	../../shared/src/lane_margin.c:79: EOM_clock_analog_align();
   AEC3 78 25              2244 	mov	r0,#_EOM_clock_analog_align
   AEC5 79 B3              2245 	mov	r1,#(_EOM_clock_analog_align >> 8)
   AEC7 7A 01              2246 	mov	r2,#(_EOM_clock_analog_align >> 16)
   AEC9 12 00 B3           2247 	lcall	__sdcc_banked_call
   AECC D0 07              2248 	pop	ar7
                           2249 ;	../../shared/src/lane_margin.c:80: g_fw_flags |= 0x01; // SW flag [0], set to 1 to bypass the eom_ui_align call in phase_control_func_0
   AECE 90 67 A5           2250 	mov	dptr,#_g_fw_flags
   AED1 E0                 2251 	movx	a,@dptr
   AED2 FF                 2252 	mov	r7,a
   AED3 44 01              2253 	orl	a,#0x01
   AED5 F0                 2254 	movx	@dptr,a
                           2255 ;	../../shared/src/lane_margin.c:81: PHY_STATUS = ST_LANE_MARGIN_EN;
   AED6 90 22 30           2256 	mov	dptr,#_MCU_STATUS0_LANE
   AED9 74 3B              2257 	mov	a,#0x3B
   AEDB F0                 2258 	movx	@dptr,a
                           2259 ;	../../shared/src/lane_margin.c:82: reg_EOM_CNT_AUTO_CLR_LANE = 1;
   AEDC 90 25 80           2260 	mov	dptr,#_EOM_REG0
   AEDF E0                 2261 	movx	a,@dptr
   AEE0 44 08              2262 	orl	a,#0x08
   AEE2 F0                 2263 	movx	@dptr,a
                           2264 ;	../../shared/src/lane_margin.c:85: lane_margin_dfe_run();
   AEE3 C0 07              2265 	push	ar7
   AEE5 78 86              2266 	mov	r0,#_lane_margin_dfe_run
   AEE7 79 B0              2267 	mov	r1,#(_lane_margin_dfe_run >> 8)
   AEE9 7A 01              2268 	mov	r2,#(_lane_margin_dfe_run >> 16)
   AEEB 12 00 B3           2269 	lcall	__sdcc_banked_call
   AEEE D0 07              2270 	pop	ar7
   AEF0 D0 06              2271 	pop	ar6
   AEF2 D0 05              2272 	pop	ar5
   AEF4 D0 04              2273 	pop	ar4
   AEF6 D0 03              2274 	pop	ar3
   AEF8 D0 02              2275 	pop	ar2
                           2276 ;	../../shared/src/lane_margin.c:144: PHY_STATUS = ST_NORMAL;
   AEFA D0 07              2277 	pop	ar7
                           2278 ;	../../shared/src/lane_margin.c:87: while (reg_DFE_MARGIN_EN_LANE) {
   AEFC                    2279 00111$:
   AEFC 90 25 F5           2280 	mov	dptr,#(_LANE_MARGIN_REG0 + 0x0001)
   AEFF E0                 2281 	movx	a,@dptr
   AF00 30 E0 43           2282 	jnb	acc.0,00113$
                           2283 ;	../../shared/src/lane_margin.c:88: if (reg_DFE_MARGIN_CHG_LANE) {
   AF03 90 25 F5           2284 	mov	dptr,#(_LANE_MARGIN_REG0 + 0x0001)
   AF06 E0                 2285 	movx	a,@dptr
   AF07 30 E4 F2           2286 	jnb	acc.4,00111$
                           2287 ;	../../shared/src/lane_margin.c:90: reg_DFE_ADAPT_ABORT_LANE = 1;
                           2288 ;	../../shared/src/lane_margin.c:91: reg_DFE_ADAPT_CONT_LANE = 0;
   AF0A 90 24 01           2289 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0001)
   AF0D E0                 2290 	movx	a,@dptr
   AF0E 44 40              2291 	orl	a,#0x40
   AF10 F0                 2292 	movx	@dptr,a
   AF11 E0                 2293 	movx	a,@dptr
   AF12 54 DF              2294 	anl	a,#0xdf
   AF14 F0                 2295 	movx	@dptr,a
                           2296 ;	../../shared/src/lane_margin.c:92: while(!reg_DFE_DONE_LANE);
   AF15                    2297 00106$:
   AF15 90 24 02           2298 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   AF18 E0                 2299 	movx	a,@dptr
   AF19 30 E1 F9           2300 	jnb	acc.1,00106$
                           2301 ;	../../shared/src/lane_margin.c:93: reg_DFE_START_LANE = 0;
   AF1C 90 24 02           2302 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   AF1F E0                 2303 	movx	a,@dptr
   AF20 54 FE              2304 	anl	a,#0xfe
   AF22 F0                 2305 	movx	@dptr,a
                           2306 ;	../../shared/src/lane_margin.c:94: lane_margin_dfe_run();
   AF23 C0 02              2307 	push	ar2
   AF25 C0 03              2308 	push	ar3
   AF27 C0 04              2309 	push	ar4
   AF29 C0 05              2310 	push	ar5
   AF2B C0 06              2311 	push	ar6
   AF2D C0 07              2312 	push	ar7
   AF2F 78 86              2313 	mov	r0,#_lane_margin_dfe_run
   AF31 79 B0              2314 	mov	r1,#(_lane_margin_dfe_run >> 8)
   AF33 7A 01              2315 	mov	r2,#(_lane_margin_dfe_run >> 16)
   AF35 12 00 B3           2316 	lcall	__sdcc_banked_call
   AF38 D0 07              2317 	pop	ar7
   AF3A D0 06              2318 	pop	ar6
   AF3C D0 05              2319 	pop	ar5
   AF3E D0 04              2320 	pop	ar4
   AF40 D0 03              2321 	pop	ar3
   AF42 D0 02              2322 	pop	ar2
   AF44 80 B6              2323 	sjmp	00111$
   AF46                    2324 00113$:
                           2325 ;	../../shared/src/lane_margin.c:98: if ( reg_DFE_MARGIN_TYPE_LANE ) {
   AF46 90 25 F4           2326 	mov	dptr,#_LANE_MARGIN_REG0
   AF49 E0                 2327 	movx	a,@dptr
   AF4A 30 E7 0B           2328 	jnb	acc.7,00115$
                           2329 ;	../../shared/src/lane_margin.c:99: train.phase_offset_esm = 0;
   AF4D 90 66 62           2330 	mov	dptr,#(_train + 0x0022)
   AF50 E4                 2331 	clr	a
   AF51 F0                 2332 	movx	@dptr,a
                           2333 ;	../../shared/src/lane_margin.c:100: ph_control_mode = 1;
   AF52 90 66 F8           2334 	mov	dptr,#_ph_control_mode
   AF55 74 01              2335 	mov	a,#0x01
   AF57 F0                 2336 	movx	@dptr,a
   AF58                    2337 00115$:
                           2338 ;	../../shared/src/lane_margin.c:102: DFE_FEN_EVEN_REG.BT.B0 = 0x0c;
   AF58 90 24 30           2339 	mov	dptr,#_DFE_FEN_EVEN_REG
   AF5B 74 0C              2340 	mov	a,#0x0C
   AF5D F0                 2341 	movx	@dptr,a
                           2342 ;	../../shared/src/lane_margin.c:103: DFE_FEN_ODD_REG.BT.B0 = 0x0c;
   AF5E 90 24 34           2343 	mov	dptr,#_DFE_FEN_ODD_REG
   AF61 74 0C              2344 	mov	a,#0x0C
   AF63 F0                 2345 	movx	@dptr,a
                           2346 ;	../../shared/src/lane_margin.c:104: reg_DFE_FEN0_S_N_E_LANE = save_f0_sn_e;
   AF64 90 24 30           2347 	mov	dptr,#_DFE_FEN_EVEN_REG
   AF67 EF                 2348 	mov	a,r7
   AF68 13                 2349 	rrc	a
   AF69 E0                 2350 	movx	a,@dptr
   AF6A 92 E3              2351 	mov	acc.3,c
   AF6C F0                 2352 	movx	@dptr,a
                           2353 ;	../../shared/src/lane_margin.c:105: reg_DFE_FEN0_S_P_E_LANE = save_f0_sp_e;
   AF6D 90 24 30           2354 	mov	dptr,#_DFE_FEN_EVEN_REG
   AF70 A8 18              2355 	mov	r0,_bp
   AF72 08                 2356 	inc	r0
   AF73 08                 2357 	inc	r0
   AF74 E6                 2358 	mov	a,@r0
   AF75 13                 2359 	rrc	a
   AF76 E0                 2360 	movx	a,@dptr
   AF77 92 E2              2361 	mov	acc.2,c
   AF79 F0                 2362 	movx	@dptr,a
                           2363 ;	../../shared/src/lane_margin.c:106: reg_DFE_FEN0_S_N_O_LANE = save_f0_sn_o;
   AF7A 90 24 34           2364 	mov	dptr,#_DFE_FEN_ODD_REG
   AF7D E5 18              2365 	mov	a,_bp
   AF7F 24 03              2366 	add	a,#0x03
   AF81 F8                 2367 	mov	r0,a
   AF82 E6                 2368 	mov	a,@r0
   AF83 13                 2369 	rrc	a
   AF84 E0                 2370 	movx	a,@dptr
   AF85 92 E3              2371 	mov	acc.3,c
   AF87 F0                 2372 	movx	@dptr,a
                           2373 ;	../../shared/src/lane_margin.c:107: reg_DFE_FEN0_S_P_O_LANE = save_f0_sp_o;
   AF88 90 24 34           2374 	mov	dptr,#_DFE_FEN_ODD_REG
   AF8B A8 18              2375 	mov	r0,_bp
   AF8D 08                 2376 	inc	r0
   AF8E E6                 2377 	mov	a,@r0
   AF8F 13                 2378 	rrc	a
   AF90 E0                 2379 	movx	a,@dptr
   AF91 92 E2              2380 	mov	acc.2,c
   AF93 F0                 2381 	movx	@dptr,a
                           2382 ;	../../shared/src/lane_margin.c:108: DFE_FEN_EVEN_REG.BT.B0 = 0x00;
   AF94 90 24 30           2383 	mov	dptr,#_DFE_FEN_EVEN_REG
                           2384 ;	../../shared/src/lane_margin.c:109: DFE_FEN_ODD_REG.BT.B0 = 0x00;
   AF97 E4                 2385 	clr	a
   AF98 F0                 2386 	movx	@dptr,a
   AF99 90 24 34           2387 	mov	dptr,#_DFE_FEN_ODD_REG
   AF9C F0                 2388 	movx	@dptr,a
                           2389 ;	../../shared/src/lane_margin.c:111: reg_DFE_ADAPT_CONT_LANE = 0;
   AF9D 90 24 01           2390 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0001)
   AFA0 E0                 2391 	movx	a,@dptr
   AFA1 54 DF              2392 	anl	a,#0xdf
   AFA3 F0                 2393 	movx	@dptr,a
                           2394 ;	../../shared/src/lane_margin.c:112: while(!reg_DFE_DONE_LANE);
   AFA4                    2395 00116$:
   AFA4 90 24 02           2396 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   AFA7 E0                 2397 	movx	a,@dptr
   AFA8 30 E1 F9           2398 	jnb	acc.1,00116$
                           2399 ;	../../shared/src/lane_margin.c:113: reg_DFE_START_LANE = 0;
   AFAB 90 24 02           2400 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   AFAE E0                 2401 	movx	a,@dptr
   AFAF 54 FE              2402 	anl	a,#0xfe
   AFB1 F0                 2403 	movx	@dptr,a
                           2404 ;	../../shared/src/lane_margin.c:116: reg_DFE_ADAPT_CONT_LANE = save_dfe_cont_mode;
   AFB2 90 24 01           2405 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0001)
   AFB5 EA                 2406 	mov	a,r2
   AFB6 13                 2407 	rrc	a
   AFB7 E0                 2408 	movx	a,@dptr
   AFB8 92 E5              2409 	mov	acc.5,c
   AFBA F0                 2410 	movx	@dptr,a
                           2411 ;	../../shared/src/lane_margin.c:117: reg_EOM_EN_S_LANE = save_eom_en_s;
   AFBB 90 67 22           2412 	mov	dptr,#_save_eom_en_s
   AFBE E0                 2413 	movx	a,@dptr
   AFBF 90 00 58           2414 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_22
   AFC2 13                 2415 	rrc	a
   AFC3 E0                 2416 	movx	a,@dptr
   AFC4 92 E6              2417 	mov	acc.6,c
   AFC6 F0                 2418 	movx	@dptr,a
                           2419 ;	../../shared/src/lane_margin.c:118: reg_EOM_EN_D_LANE = save_eom_en_d;
   AFC7 90 67 23           2420 	mov	dptr,#_save_eom_en_d
   AFCA E0                 2421 	movx	a,@dptr
   AFCB 90 00 58           2422 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_22
   AFCE 13                 2423 	rrc	a
   AFCF E0                 2424 	movx	a,@dptr
   AFD0 92 E5              2425 	mov	acc.5,c
   AFD2 F0                 2426 	movx	@dptr,a
                           2427 ;	../../shared/src/lane_margin.c:119: reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = save_dfe_adapt_splr; 
   AFD3 90 67 1F           2428 	mov	dptr,#_save_dfe_adapt_splr
   AFD6 E0                 2429 	movx	a,@dptr
   AFD7 90 24 00           2430 	mov	dptr,#_DFE_CTRL_REG0
   AFDA C4                 2431 	swap	a
   AFDB 54 F0              2432 	anl	a,#(0xf0&0xf0)
   AFDD F5 F0              2433 	mov	b,a
   AFDF E0                 2434 	movx	a,@dptr
   AFE0 54 0F              2435 	anl	a,#0x0f
   AFE2 45 F0              2436 	orl	a,b
   AFE4 F0                 2437 	movx	@dptr,a
                           2438 ;	../../shared/src/lane_margin.c:120: reg_DFE_ADAPT_EVEN_EN_LANE = save_dfe_adapt_e_en; 
   AFE5 90 67 20           2439 	mov	dptr,#_save_dfe_adapt_e_en
   AFE8 E0                 2440 	movx	a,@dptr
   AFE9 90 24 02           2441 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   AFEC 13                 2442 	rrc	a
   AFED E0                 2443 	movx	a,@dptr
   AFEE 92 E7              2444 	mov	acc.7,c
   AFF0 F0                 2445 	movx	@dptr,a
                           2446 ;	../../shared/src/lane_margin.c:121: reg_DFE_ADAPT_ODD_EN_LANE = save_dfe_adapt_o_en; 
   AFF1 90 67 21           2447 	mov	dptr,#_save_dfe_adapt_o_en
   AFF4 E0                 2448 	movx	a,@dptr
   AFF5 90 24 02           2449 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   AFF8 13                 2450 	rrc	a
   AFF9 E0                 2451 	movx	a,@dptr
   AFFA 92 E6              2452 	mov	acc.6,c
   AFFC F0                 2453 	movx	@dptr,a
                           2454 ;	../../shared/src/lane_margin.c:122: reg_DFE_EN_LANE = save_dfe_en;
   AFFD 90 67 24           2455 	mov	dptr,#_save_dfe_en
   B000 E0                 2456 	movx	a,@dptr
   B001 90 24 10           2457 	mov	dptr,#_RX_EQ_CLK_CTRL
   B004 13                 2458 	rrc	a
   B005 E0                 2459 	movx	a,@dptr
   B006 92 E4              2460 	mov	acc.4,c
   B008 F0                 2461 	movx	@dptr,a
                           2462 ;	../../shared/src/lane_margin.c:123: reg_EOM_EN_LANE = save_eom_en;
   B009 90 25 80           2463 	mov	dptr,#_EOM_REG0
   B00C EB                 2464 	mov	a,r3
   B00D 13                 2465 	rrc	a
   B00E E0                 2466 	movx	a,@dptr
   B00F 92 E0              2467 	mov	acc.0,c
   B011 F0                 2468 	movx	@dptr,a
                           2469 ;	../../shared/src/lane_margin.c:124: lnx_FAST_DFE_TIMER_EN_LANE = save_fast_dfe_timer_en;
   B012 90 60 4F           2470 	mov	dptr,#(_DFE_CONTROL_5 + 0x0003)
   B015 EC                 2471 	mov	a,r4
   B016 13                 2472 	rrc	a
   B017 E0                 2473 	movx	a,@dptr
   B018 92 E7              2474 	mov	acc.7,c
   B01A F0                 2475 	movx	@dptr,a
                           2476 ;	../../shared/src/lane_margin.c:125: reg_EOM_CLK_EN_LANE = save_eom_clk_en;
   B01B 90 02 18           2477 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_134
   B01E ED                 2478 	mov	a,r5
   B01F 13                 2479 	rrc	a
   B020 E0                 2480 	movx	a,@dptr
   B021 92 E2              2481 	mov	acc.2,c
   B023 F0                 2482 	movx	@dptr,a
                           2483 ;	../../shared/src/lane_margin.c:126: lnx_EYE_CHECK_BYPASS_LANE = save_eye_check_bypass;
   B024 90 60 4F           2484 	mov	dptr,#(_DFE_CONTROL_5 + 0x0003)
   B027 EE                 2485 	mov	a,r6
   B028 13                 2486 	rrc	a
   B029 E0                 2487 	movx	a,@dptr
   B02A 92 E6              2488 	mov	acc.6,c
   B02C F0                 2489 	movx	@dptr,a
                           2490 ;	../../shared/src/lane_margin.c:128: train.phase_offset_esm = 0;
                           2491 ;	../../shared/src/lane_margin.c:129: phase_control_func_0(train.phase_offset_data, train.phase_offset_esm); //set_ph_esm(0);
   B02D 90 66 62           2492 	mov	dptr,#(_train + 0x0022)
   B030 E4                 2493 	clr	a
   B031 F0                 2494 	movx	@dptr,a
   B032 E0                 2495 	movx	a,@dptr
   B033 FB                 2496 	mov	r3,a
   B034 90 66 61           2497 	mov	dptr,#(_train + 0x0021)
   B037 E0                 2498 	movx	a,@dptr
   B038 FC                 2499 	mov	r4,a
   B039 C0 02              2500 	push	ar2
   B03B C0 03              2501 	push	ar3
   B03D 8C 82              2502 	mov	dpl,r4
   B03F 12 2C 2B           2503 	lcall	_phase_control_func_0
   B042 15 81              2504 	dec	sp
   B044 D0 02              2505 	pop	ar2
                           2506 ;	../../shared/src/lane_margin.c:132: reg_DFE_MARGIN_READY_LANE = 1;
   B046 90 25 F5           2507 	mov	dptr,#(_LANE_MARGIN_REG0 + 0x0001)
   B049 E0                 2508 	movx	a,@dptr
   B04A 44 08              2509 	orl	a,#0x08
   B04C F0                 2510 	movx	@dptr,a
                           2511 ;	../../shared/src/lane_margin.c:133: while(!reg_DFE_MARGIN_ACK_LANE);
   B04D                    2512 00119$:
   B04D 90 25 F5           2513 	mov	dptr,#(_LANE_MARGIN_REG0 + 0x0001)
   B050 E0                 2514 	movx	a,@dptr
   B051 30 E2 F9           2515 	jnb	acc.2,00119$
                           2516 ;	../../shared/src/lane_margin.c:134: reg_DFE_MARGIN_READY_LANE = 0;
   B054 90 25 F5           2517 	mov	dptr,#(_LANE_MARGIN_REG0 + 0x0001)
   B057 E0                 2518 	movx	a,@dptr
   B058 54 F7              2519 	anl	a,#0xf7
   B05A F0                 2520 	movx	@dptr,a
                           2521 ;	../../shared/src/lane_margin.c:137: if (save_dfe_cont_mode) {
   B05B EA                 2522 	mov	a,r2
   B05C 60 12              2523 	jz	00123$
                           2524 ;	../../shared/src/lane_margin.c:138: reg_DFE_ADAPT_CONT_LANE = 1;
   B05E 90 24 01           2525 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0001)
   B061 E0                 2526 	movx	a,@dptr
   B062 44 20              2527 	orl	a,#0x20
   B064 F0                 2528 	movx	@dptr,a
                           2529 ;	../../shared/src/lane_margin.c:139: reg_DFE_START_LANE = 0;
                           2530 ;	../../shared/src/lane_margin.c:140: reg_DFE_START_LANE = 1;
   B065 90 24 02           2531 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   B068 E0                 2532 	movx	a,@dptr
   B069 54 FE              2533 	anl	a,#0xfe
   B06B F0                 2534 	movx	@dptr,a
   B06C E0                 2535 	movx	a,@dptr
   B06D 44 01              2536 	orl	a,#0x01
   B06F F0                 2537 	movx	@dptr,a
   B070                    2538 00123$:
                           2539 ;	../../shared/src/lane_margin.c:143: g_fw_flags &= 0xFE; // clear the SW flag [0]
   B070 90 67 A5           2540 	mov	dptr,#_g_fw_flags
   B073 E0                 2541 	movx	a,@dptr
   B074 FA                 2542 	mov	r2,a
   B075 54 FE              2543 	anl	a,#0xFE
   B077 F0                 2544 	movx	@dptr,a
                           2545 ;	../../shared/src/lane_margin.c:144: PHY_STATUS = ST_NORMAL;
   B078 90 22 30           2546 	mov	dptr,#_MCU_STATUS0_LANE
   B07B 74 2B              2547 	mov	a,#0x2B
   B07D F0                 2548 	movx	@dptr,a
   B07E 85 18 81           2549 	mov	sp,_bp
   B081 D0 18              2550 	pop	_bp
   B083 02 00 C5           2551 	ljmp	__sdcc_banked_ret
                           2552 ;------------------------------------------------------------
                           2553 ;Allocation info for local variables in function 'lane_margin_dfe_run'
                           2554 ;------------------------------------------------------------
                           2555 ;------------------------------------------------------------
                           2556 ;	../../shared/src/lane_margin.c:147: void lane_margin_dfe_run(void) BANKING_CTRL {
                           2557 ;	-----------------------------------------
                           2558 ;	 function lane_margin_dfe_run
                           2559 ;	-----------------------------------------
   B086                    2560 _lane_margin_dfe_run:
                           2561 ;	../../shared/src/lane_margin.c:151: cfg_dfe_fm_lane_en();
   B086 78 BD              2562 	mov	r0,#_cfg_dfe_fm_lane_en
   B088 79 B0              2563 	mov	r1,#(_cfg_dfe_fm_lane_en >> 8)
   B08A 7A 01              2564 	mov	r2,#(_cfg_dfe_fm_lane_en >> 16)
   B08C 12 00 B3           2565 	lcall	__sdcc_banked_call
                           2566 ;	../../shared/src/lane_margin.c:154: reg_DFE_ADAPT_ABORT_LANE = 0;
                           2567 ;	../../shared/src/lane_margin.c:155: reg_DFE_ADAPT_CONT_LANE = 1;
   B08F 90 24 01           2568 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0001)
   B092 E0                 2569 	movx	a,@dptr
   B093 54 BF              2570 	anl	a,#0xbf
   B095 F0                 2571 	movx	@dptr,a
   B096 E0                 2572 	movx	a,@dptr
   B097 44 20              2573 	orl	a,#0x20
   B099 F0                 2574 	movx	@dptr,a
                           2575 ;	../../shared/src/lane_margin.c:156: reg_DFE_START_LANE = 0;
                           2576 ;	../../shared/src/lane_margin.c:157: reg_DFE_START_LANE = 1;
   B09A 90 24 02           2577 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   B09D E0                 2578 	movx	a,@dptr
   B09E 54 FE              2579 	anl	a,#0xfe
   B0A0 F0                 2580 	movx	@dptr,a
   B0A1 E0                 2581 	movx	a,@dptr
   B0A2 44 01              2582 	orl	a,#0x01
   B0A4 F0                 2583 	movx	@dptr,a
                           2584 ;	../../shared/src/lane_margin.c:158: reg_DFE_MARGIN_READY_LANE = 1;
   B0A5 90 25 F5           2585 	mov	dptr,#(_LANE_MARGIN_REG0 + 0x0001)
   B0A8 E0                 2586 	movx	a,@dptr
   B0A9 44 08              2587 	orl	a,#0x08
   B0AB F0                 2588 	movx	@dptr,a
                           2589 ;	../../shared/src/lane_margin.c:161: while(!reg_DFE_MARGIN_ACK_LANE);
   B0AC                    2590 00101$:
   B0AC 90 25 F5           2591 	mov	dptr,#(_LANE_MARGIN_REG0 + 0x0001)
   B0AF E0                 2592 	movx	a,@dptr
   B0B0 30 E2 F9           2593 	jnb	acc.2,00101$
                           2594 ;	../../shared/src/lane_margin.c:162: reg_DFE_MARGIN_READY_LANE = 0;
   B0B3 90 25 F5           2595 	mov	dptr,#(_LANE_MARGIN_REG0 + 0x0001)
   B0B6 E0                 2596 	movx	a,@dptr
   B0B7 54 F7              2597 	anl	a,#0xf7
   B0B9 F0                 2598 	movx	@dptr,a
   B0BA 02 00 C5           2599 	ljmp	__sdcc_banked_ret
                           2600 ;------------------------------------------------------------
                           2601 ;Allocation info for local variables in function 'cfg_dfe_fm_lane_en'
                           2602 ;------------------------------------------------------------
                           2603 ;quad_margin_offset        Allocated to registers r2 
                           2604 ;------------------------------------------------------------
                           2605 ;	../../shared/src/lane_margin.c:166: void cfg_dfe_fm_lane_en(void) BANKING_CTRL {
                           2606 ;	-----------------------------------------
                           2607 ;	 function cfg_dfe_fm_lane_en
                           2608 ;	-----------------------------------------
   B0BD                    2609 _cfg_dfe_fm_lane_en:
                           2610 ;	../../shared/src/lane_margin.c:169: adapt_data_en = 0;
   B0BD C2 0D              2611 	clr	_adapt_data_en
                           2612 ;	../../shared/src/lane_margin.c:170: adapt_slicer_en = 1;
   B0BF D2 0C              2613 	setb	_adapt_slicer_en
                           2614 ;	../../shared/src/lane_margin.c:172: if ( reg_DFE_MARGIN_TYPE_LANE ) {
   B0C1 90 25 F4           2615 	mov	dptr,#_LANE_MARGIN_REG0
   B0C4 E0                 2616 	movx	a,@dptr
   B0C5 30 E7 5F           2617 	jnb	acc.7,00105$
                           2618 ;	../../shared/src/lane_margin.c:173: DFE_FEN_EVEN_REG.BT.B0 = 0x0c;
   B0C8 90 24 30           2619 	mov	dptr,#_DFE_FEN_EVEN_REG
   B0CB 74 0C              2620 	mov	a,#0x0C
   B0CD F0                 2621 	movx	@dptr,a
                           2622 ;	../../shared/src/lane_margin.c:174: DFE_FEN_ODD_REG.BT.B0 = 0x0c;
   B0CE 90 24 34           2623 	mov	dptr,#_DFE_FEN_ODD_REG
   B0D1 74 0C              2624 	mov	a,#0x0C
   B0D3 F0                 2625 	movx	@dptr,a
                           2626 ;	../../shared/src/lane_margin.c:177: reg_DFE_FEXT0_S_N_E_LANE_5_0 = 0;
   B0D4 90 24 43           2627 	mov	dptr,#(_DFE_FEXT_EVEN_REG0 + 0x0003)
   B0D7 E0                 2628 	movx	a,@dptr
   B0D8 54 C0              2629 	anl	a,#0xc0
   B0DA F0                 2630 	movx	@dptr,a
                           2631 ;	../../shared/src/lane_margin.c:178: reg_DFE_FEXT0_S_P_E_LANE_5_0 = 0;
   B0DB 90 24 42           2632 	mov	dptr,#(_DFE_FEXT_EVEN_REG0 + 0x0002)
   B0DE E0                 2633 	movx	a,@dptr
   B0DF 54 C0              2634 	anl	a,#0xc0
   B0E1 F0                 2635 	movx	@dptr,a
                           2636 ;	../../shared/src/lane_margin.c:179: reg_DFE_FEXT0_S_N_O_LANE_5_0 = 0;
   B0E2 90 24 63           2637 	mov	dptr,#(_DFE_FEXT_ODD_REG0 + 0x0003)
   B0E5 E0                 2638 	movx	a,@dptr
   B0E6 54 C0              2639 	anl	a,#0xc0
   B0E8 F0                 2640 	movx	@dptr,a
                           2641 ;	../../shared/src/lane_margin.c:180: reg_DFE_FEXT0_S_P_O_LANE_5_0 = 0;
   B0E9 90 24 62           2642 	mov	dptr,#(_DFE_FEXT_ODD_REG0 + 0x0002)
   B0EC E0                 2643 	movx	a,@dptr
   B0ED 54 C0              2644 	anl	a,#0xc0
   B0EF F0                 2645 	movx	@dptr,a
                           2646 ;	../../shared/src/lane_margin.c:181: DFE_FEN_EVEN_REG.BT.B0 = 0x00;
   B0F0 90 24 30           2647 	mov	dptr,#_DFE_FEN_EVEN_REG
                           2648 ;	../../shared/src/lane_margin.c:182: DFE_FEN_ODD_REG.BT.B0 = 0x00;
   B0F3 E4                 2649 	clr	a
   B0F4 F0                 2650 	movx	@dptr,a
   B0F5 90 24 34           2651 	mov	dptr,#_DFE_FEN_ODD_REG
   B0F8 F0                 2652 	movx	@dptr,a
                           2653 ;	../../shared/src/lane_margin.c:183: ph_control_mode = 1;
   B0F9 90 66 F8           2654 	mov	dptr,#_ph_control_mode
   B0FC 74 01              2655 	mov	a,#0x01
   B0FE F0                 2656 	movx	@dptr,a
                           2657 ;	../../shared/src/lane_margin.c:185: if ( reg_DFE_MARGIN_DIR_LANE ) {
   B0FF 90 25 F5           2658 	mov	dptr,#(_LANE_MARGIN_REG0 + 0x0001)
   B102 E0                 2659 	movx	a,@dptr
   B103 30 E1 0D           2660 	jnb	acc.1,00102$
                           2661 ;	../../shared/src/lane_margin.c:187: train.phase_offset_esm = reg_DFE_MARGIN_OFFSET_LANE_6_0;
   B106 90 25 F4           2662 	mov	dptr,#_LANE_MARGIN_REG0
   B109 E0                 2663 	movx	a,@dptr
   B10A 54 7F              2664 	anl	a,#0x7f
   B10C FA                 2665 	mov	r2,a
   B10D 90 66 62           2666 	mov	dptr,#(_train + 0x0022)
   B110 F0                 2667 	movx	@dptr,a
   B111 80 0F              2668 	sjmp	00103$
   B113                    2669 00102$:
                           2670 ;	../../shared/src/lane_margin.c:189: train.phase_offset_esm = -reg_DFE_MARGIN_OFFSET_LANE_6_0;
   B113 90 25 F4           2671 	mov	dptr,#_LANE_MARGIN_REG0
   B116 E0                 2672 	movx	a,@dptr
   B117 54 7F              2673 	anl	a,#0x7f
   B119 FA                 2674 	mov	r2,a
   B11A C3                 2675 	clr	c
   B11B E4                 2676 	clr	a
   B11C 9A                 2677 	subb	a,r2
   B11D FA                 2678 	mov	r2,a
   B11E 90 66 62           2679 	mov	dptr,#(_train + 0x0022)
   B121 F0                 2680 	movx	@dptr,a
   B122                    2681 00103$:
                           2682 ;	../../shared/src/lane_margin.c:191: phase_control_func();
   B122 12 2C 17           2683 	lcall	_phase_control_func
   B125 80 57              2684 	sjmp	00106$
   B127                    2685 00105$:
                           2686 ;	../../shared/src/lane_margin.c:197: DFE_FEN_EVEN_REG.BT.B0 = 0x0c;
   B127 90 24 30           2687 	mov	dptr,#_DFE_FEN_EVEN_REG
   B12A 74 0C              2688 	mov	a,#0x0C
   B12C F0                 2689 	movx	@dptr,a
                           2690 ;	../../shared/src/lane_margin.c:198: DFE_FEN_ODD_REG.BT.B0 = 0x0c;
   B12D 90 24 34           2691 	mov	dptr,#_DFE_FEN_ODD_REG
   B130 74 0C              2692 	mov	a,#0x0C
   B132 F0                 2693 	movx	@dptr,a
                           2694 ;	../../shared/src/lane_margin.c:200: quad_margin_offset = (int8_t)(reg_DFE_MARGIN_OFFSET_LANE_6_0>>2);
   B133 90 25 F4           2695 	mov	dptr,#_LANE_MARGIN_REG0
   B136 E0                 2696 	movx	a,@dptr
   B137 54 7F              2697 	anl	a,#0x7f
   B139 03                 2698 	rr	a
   B13A 03                 2699 	rr	a
   B13B 54 3F              2700 	anl	a,#0x3f
                           2701 ;	../../shared/src/lane_margin.c:202: reg_DFE_FEXT0_S_N_E_LANE_5_0 = quad_margin_offset;
   B13D FA                 2702 	mov	r2,a
   B13E 90 24 43           2703 	mov	dptr,#(_DFE_FEXT_EVEN_REG0 + 0x0003)
   B141 54 3F              2704 	anl	a,#0x3f
   B143 F5 F0              2705 	mov	b,a
   B145 E0                 2706 	movx	a,@dptr
   B146 54 C0              2707 	anl	a,#0xc0
   B148 45 F0              2708 	orl	a,b
   B14A F0                 2709 	movx	@dptr,a
                           2710 ;	../../shared/src/lane_margin.c:203: reg_DFE_FEXT0_S_P_E_LANE_5_0 = quad_margin_offset;
   B14B 90 24 42           2711 	mov	dptr,#(_DFE_FEXT_EVEN_REG0 + 0x0002)
   B14E EA                 2712 	mov	a,r2
   B14F 54 3F              2713 	anl	a,#0x3f
   B151 F5 F0              2714 	mov	b,a
   B153 E0                 2715 	movx	a,@dptr
   B154 54 C0              2716 	anl	a,#0xc0
   B156 45 F0              2717 	orl	a,b
   B158 F0                 2718 	movx	@dptr,a
                           2719 ;	../../shared/src/lane_margin.c:204: reg_DFE_FEXT0_S_N_O_LANE_5_0 = quad_margin_offset;
   B159 90 24 63           2720 	mov	dptr,#(_DFE_FEXT_ODD_REG0 + 0x0003)
   B15C EA                 2721 	mov	a,r2
   B15D 54 3F              2722 	anl	a,#0x3f
   B15F F5 F0              2723 	mov	b,a
   B161 E0                 2724 	movx	a,@dptr
   B162 54 C0              2725 	anl	a,#0xc0
   B164 45 F0              2726 	orl	a,b
   B166 F0                 2727 	movx	@dptr,a
                           2728 ;	../../shared/src/lane_margin.c:205: reg_DFE_FEXT0_S_P_O_LANE_5_0 = quad_margin_offset;
   B167 90 24 62           2729 	mov	dptr,#(_DFE_FEXT_ODD_REG0 + 0x0002)
   B16A EA                 2730 	mov	a,r2
   B16B 54 3F              2731 	anl	a,#0x3f
   B16D F5 F0              2732 	mov	b,a
   B16F E0                 2733 	movx	a,@dptr
   B170 54 C0              2734 	anl	a,#0xc0
   B172 45 F0              2735 	orl	a,b
   B174 F0                 2736 	movx	@dptr,a
                           2737 ;	../../shared/src/lane_margin.c:206: DFE_FEN_EVEN_REG.BT.B0 = 0x00;
   B175 90 24 30           2738 	mov	dptr,#_DFE_FEN_EVEN_REG
                           2739 ;	../../shared/src/lane_margin.c:207: DFE_FEN_ODD_REG.BT.B0 = 0x00;
   B178 E4                 2740 	clr	a
   B179 F0                 2741 	movx	@dptr,a
   B17A 90 24 34           2742 	mov	dptr,#_DFE_FEN_ODD_REG
   B17D F0                 2743 	movx	@dptr,a
   B17E                    2744 00106$:
                           2745 ;	../../shared/src/lane_margin.c:210: reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0xc; 
   B17E 90 24 00           2746 	mov	dptr,#_DFE_CTRL_REG0
   B181 E0                 2747 	movx	a,@dptr
   B182 54 0F              2748 	anl	a,#0x0f
   B184 44 C0              2749 	orl	a,#0xc0
   B186 F0                 2750 	movx	@dptr,a
                           2751 ;	../../shared/src/lane_margin.c:212: reg_DFE_UPDATE_EN_LANE_15_0 = 0;
   B187 90 24 08           2752 	mov	dptr,#_DFE_CTRL_REG2
   B18A E4                 2753 	clr	a
   B18B F0                 2754 	movx	@dptr,a
   B18C A3                 2755 	inc	dptr
   B18D F0                 2756 	movx	@dptr,a
                           2757 ;	../../shared/src/lane_margin.c:213: reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;
   B18E 90 24 0A           2758 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0002)
   B191 E0                 2759 	movx	a,@dptr
   B192 54 C0              2760 	anl	a,#0xc0
   B194 F0                 2761 	movx	@dptr,a
                           2762 ;	../../shared/src/lane_margin.c:214: reg_DFE_UPDATE_DC_EN_LANE = 0;
   B195 90 24 0A           2763 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0002)
   B198 E0                 2764 	movx	a,@dptr
   B199 54 BF              2765 	anl	a,#0xbf
   B19B F0                 2766 	movx	@dptr,a
                           2767 ;	../../shared/src/lane_margin.c:215: reg_EOM_EN_LANE = 1;
   B19C 90 25 80           2768 	mov	dptr,#_EOM_REG0
   B19F E0                 2769 	movx	a,@dptr
   B1A0 44 01              2770 	orl	a,#0x01
   B1A2 F0                 2771 	movx	@dptr,a
   B1A3 02 00 C5           2772 	ljmp	__sdcc_banked_ret
                           2773 	.area CSEG    (CODE)
                           2774 	.area BANK1   (CODE)
                           2775 	.area CABS    (ABS,CODE)
