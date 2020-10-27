                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:22:03 2018
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
   D82D                    2043 _ring_pll_cal:
                    0002   2044 	ar2 = 0x02
                    0003   2045 	ar3 = 0x03
                    0004   2046 	ar4 = 0x04
                    0005   2047 	ar5 = 0x05
                    0006   2048 	ar6 = 0x06
                    0007   2049 	ar7 = 0x07
                    0000   2050 	ar0 = 0x00
                    0001   2051 	ar1 = 0x01
   D82D C0 18              2052 	push	_bp
   D82F E5 81              2053 	mov	a,sp
   D831 F5 18              2054 	mov	_bp,a
   D833 24 07              2055 	add	a,#0x07
   D835 F5 81              2056 	mov	sp,a
                           2057 ;	../../shared/src/ring_pll_cal.c:107: PHY_STATUS =  ST_PLL_CAL_RING_CAL;
   D837 90 22 30           2058 	mov	dptr,#_MCU_STATUS0_LANE
   D83A 74 36              2059 	mov	a,#0x36
   D83C F0                 2060 	movx	@dptr,a
                           2061 ;	../../shared/src/ring_pll_cal.c:110: if(phy_mode == SERDES) {
   D83D 90 A3 16           2062 	mov	dptr,#(_SYSTEM + 0x0002)
   D840 E0                 2063 	movx	a,@dptr
   D841 54 07              2064 	anl	a,#0x07
   D843 FA                 2065 	mov	r2,a
   D844 BA 04 1B           2066 	cjne	r2,#0x04,00110$
                           2067 ;	../../shared/src/ring_pll_cal.c:111: while(1) {
   D847                    2068 00107$:
                           2069 ;	../../shared/src/ring_pll_cal.c:112: if(cmx_PLL_CAL_DONE==1) {
   D847 90 E6 4E           2070 	mov	dptr,#(_CAL_STATUS_READ + 0x0002)
   D84A E0                 2071 	movx	a,@dptr
   D84B 54 01              2072 	anl	a,#0x01
   D84D FA                 2073 	mov	r2,a
   D84E BA 01 F6           2074 	cjne	r2,#0x01,00107$
                           2075 ;	../../shared/src/ring_pll_cal.c:113: if(cmx_PLL_CAL_DONE==1 && reg_PLLCAL_EN==0) break; //wait for LCPLL calibration done
   D851 90 E6 4E           2076 	mov	dptr,#(_CAL_STATUS_READ + 0x0002)
   D854 E0                 2077 	movx	a,@dptr
   D855 54 01              2078 	anl	a,#0x01
   D857 FA                 2079 	mov	r2,a
   D858 BA 01 EC           2080 	cjne	r2,#0x01,00107$
   D85B 90 82 A0           2081 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_168
   D85E E0                 2082 	movx	a,@dptr
   D85F 20 E7 E5           2083 	jb	acc.7,00107$
   D862                    2084 00110$:
                           2085 ;	../../shared/src/ring_pll_cal.c:122: cmx_PLL_CAL_RING_DONE = 0;
   D862 90 E6 4F           2086 	mov	dptr,#(_CAL_STATUS_READ + 0x0003)
   D865 E0                 2087 	movx	a,@dptr
   D866 54 FE              2088 	anl	a,#0xfe
   D868 F0                 2089 	movx	@dptr,a
                           2090 ;	../../shared/src/ring_pll_cal.c:125: if( cmx_RING_PLL_CAL_EXT_EN /*|| (phy_mode==PCIE && cmx_PLL_CAL_RING_PASS)*/) { //PCIe Link enable/disable test patch
   D869 90 E6 09           2091 	mov	dptr,#(_CONTROL_CONFIG1 + 0x0001)
   D86C E0                 2092 	movx	a,@dptr
   D86D 30 E0 1A           2093 	jnb	acc.0,00112$
                           2094 ;	../../shared/src/ring_pll_cal.c:126: ringpll_load(PWR);
   D870 75 82 00           2095 	mov	dpl,#0x00
   D873 78 D4              2096 	mov	r0,#_ringpll_load
   D875 79 87              2097 	mov	r1,#(_ringpll_load >> 8)
   D877 7A 02              2098 	mov	r2,#(_ringpll_load >> 16)
   D879 12 00 B3           2099 	lcall	__sdcc_banked_call
                           2100 ;	../../shared/src/ring_pll_cal.c:127: SLLP_DAC_VALID = 1;	SLLP_DAC_VALID = 0;
   D87C 90 83 04           2101 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   D87F E0                 2102 	movx	a,@dptr
   D880 44 40              2103 	orl	a,#0x40
   D882 F0                 2104 	movx	@dptr,a
   D883 E0                 2105 	movx	a,@dptr
   D884 54 BF              2106 	anl	a,#0xbf
   D886 F0                 2107 	movx	@dptr,a
                           2108 ;	../../shared/src/ring_pll_cal.c:128: goto exit_out;
   D887 02 DF 4E           2109 	ljmp	00241$
   D88A                    2110 00112$:
                           2111 ;	../../shared/src/ring_pll_cal.c:134: cmx_PLL_CAL_RING_PASS = 1;
   D88A 90 E6 4D           2112 	mov	dptr,#(_CAL_STATUS_READ + 0x0001)
   D88D E0                 2113 	movx	a,@dptr
   D88E 44 08              2114 	orl	a,#0x08
   D890 F0                 2115 	movx	@dptr,a
                           2116 ;	../../shared/src/ring_pll_cal.c:137: timeout=0;
   D891 C2 03              2117 	clr	_timeout
                           2118 ;	../../shared/src/ring_pll_cal.c:138: if(cmx_RINGPLL_CAL_TIMEOUT_DIS==0) {
   D893 90 E6 49           2119 	mov	dptr,#(_CAL_TIME_OUT_AND_DIS + 0x0001)
   D896 E0                 2120 	movx	a,@dptr
   D897 20 E2 0A           2121 	jb	acc.2,00114$
                           2122 ;	../../shared/src/ring_pll_cal.c:139: timeout_start((uint16_t)RINGPLL_TIMEOUT_TIMER);
   D89A 75 8B F0           2123 	mov	_TMR1,#0xF0
   D89D 75 8D D8           2124 	mov	(_TMR1 >> 8),#0xD8
   D8A0 D2 8E              2125 	setb	_TR1
   D8A2 C2 03              2126 	clr	_timeout
   D8A4                    2127 00114$:
                           2128 ;	../../shared/src/ring_pll_cal.c:143: tmp = read_tsen();
   D8A4 78 B9              2129 	mov	r0,#_read_tsen
   D8A6 79 BE              2130 	mov	r1,#(_read_tsen >> 8)
   D8A8 7A 02              2131 	mov	r2,#(_read_tsen >> 16)
   D8AA 12 00 B3           2132 	lcall	__sdcc_banked_call
   D8AD AA 82              2133 	mov	r2,dpl
   D8AF AB 83              2134 	mov	r3,dph
                           2135 ;	../../shared/src/ring_pll_cal.c:144: if(tmp > TEMP_85 ) ringpll_dac_fine = 1280;
   D8B1 C3                 2136 	clr	c
   D8B2 74 86              2137 	mov	a,#0x86
   D8B4 9A                 2138 	subb	a,r2
   D8B5 74 7F              2139 	mov	a,#(0xFF ^ 0x80)
   D8B7 8B F0              2140 	mov	b,r3
   D8B9 63 F0 80           2141 	xrl	b,#0x80
   D8BC 95 F0              2142 	subb	a,b
   D8BE 50 0B              2143 	jnc	00120$
   D8C0 90 66 21           2144 	mov	dptr,#_ringpll_dac_fine
   D8C3 E4                 2145 	clr	a
   D8C4 F0                 2146 	movx	@dptr,a
   D8C5 A3                 2147 	inc	dptr
   D8C6 74 05              2148 	mov	a,#0x05
   D8C8 F0                 2149 	movx	@dptr,a
   D8C9 80 2E              2150 	sjmp	00121$
   D8CB                    2151 00120$:
                           2152 ;	../../shared/src/ring_pll_cal.c:145: else if(tmp < TEMP_85 && tmp > TEMP_5 ) ringpll_dac_fine = 1024;
   D8CB C3                 2153 	clr	c
   D8CC EA                 2154 	mov	a,r2
   D8CD 94 86              2155 	subb	a,#0x86
   D8CF EB                 2156 	mov	a,r3
   D8D0 64 80              2157 	xrl	a,#0x80
   D8D2 94 7F              2158 	subb	a,#0x7f
   D8D4 50 1A              2159 	jnc	00116$
   D8D6 C3                 2160 	clr	c
   D8D7 74 BF              2161 	mov	a,#0xBF
   D8D9 9A                 2162 	subb	a,r2
   D8DA 74 7E              2163 	mov	a,#(0xFE ^ 0x80)
   D8DC 8B F0              2164 	mov	b,r3
   D8DE 63 F0 80           2165 	xrl	b,#0x80
   D8E1 95 F0              2166 	subb	a,b
   D8E3 50 0B              2167 	jnc	00116$
   D8E5 90 66 21           2168 	mov	dptr,#_ringpll_dac_fine
   D8E8 E4                 2169 	clr	a
   D8E9 F0                 2170 	movx	@dptr,a
   D8EA A3                 2171 	inc	dptr
   D8EB 74 04              2172 	mov	a,#0x04
   D8ED F0                 2173 	movx	@dptr,a
   D8EE 80 09              2174 	sjmp	00121$
   D8F0                    2175 00116$:
                           2176 ;	../../shared/src/ring_pll_cal.c:146: else ringpll_dac_fine = 768; 
   D8F0 90 66 21           2177 	mov	dptr,#_ringpll_dac_fine
   D8F3 E4                 2178 	clr	a
   D8F4 F0                 2179 	movx	@dptr,a
   D8F5 A3                 2180 	inc	dptr
   D8F6 74 03              2181 	mov	a,#0x03
   D8F8 F0                 2182 	movx	@dptr,a
   D8F9                    2183 00121$:
                           2184 ;	../../shared/src/ring_pll_cal.c:147: dac_fine_min = ringpll_dac_fine-DAC_FINE_DELTA_RANGE;
   D8F9 90 66 21           2185 	mov	dptr,#_ringpll_dac_fine
   D8FC E0                 2186 	movx	a,@dptr
   D8FD FA                 2187 	mov	r2,a
   D8FE A3                 2188 	inc	dptr
   D8FF E0                 2189 	movx	a,@dptr
   D900 FB                 2190 	mov	r3,a
   D901 EA                 2191 	mov	a,r2
   D902 24 80              2192 	add	a,#0x80
   D904 FC                 2193 	mov	r4,a
   D905 EB                 2194 	mov	a,r3
   D906 34 FF              2195 	addc	a,#0xff
   D908 FD                 2196 	mov	r5,a
                           2197 ;	../../shared/src/ring_pll_cal.c:148: dac_fine_max = ringpll_dac_fine+DAC_FINE_DELTA_RANGE;
   D909 74 80              2198 	mov	a,#0x80
   D90B 2A                 2199 	add	a,r2
   D90C FA                 2200 	mov	r2,a
   D90D E4                 2201 	clr	a
   D90E 3B                 2202 	addc	a,r3
   D90F FB                 2203 	mov	r3,a
                           2204 ;	../../shared/src/ring_pll_cal.c:150: PLL_SPEED_RING = 0;
   D910 90 83 00           2205 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_192
   D913 E0                 2206 	movx	a,@dptr
   D914 54 07              2207 	anl	a,#0x07
   D916 F0                 2208 	movx	@dptr,a
                           2209 ;	../../shared/src/ring_pll_cal.c:151: SLLP_DAC_COARSE_RING = 0;
   D917 90 83 04           2210 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   D91A E0                 2211 	movx	a,@dptr
   D91B 54 F0              2212 	anl	a,#0xf0
   D91D F0                 2213 	movx	@dptr,a
                           2214 ;	../../shared/src/ring_pll_cal.c:152: ringpll_dac_fine_output();
   D91E C0 02              2215 	push	ar2
   D920 C0 03              2216 	push	ar3
   D922 C0 04              2217 	push	ar4
   D924 C0 05              2218 	push	ar5
   D926 78 5E              2219 	mov	r0,#_ringpll_dac_fine_output
   D928 79 88              2220 	mov	r1,#(_ringpll_dac_fine_output >> 8)
   D92A 7A 02              2221 	mov	r2,#(_ringpll_dac_fine_output >> 16)
   D92C 12 00 B3           2222 	lcall	__sdcc_banked_call
                           2223 ;	../../shared/src/ring_pll_cal.c:153: PLL_SHRTR_RING = 1;
   D92F 90 83 10           2224 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_196
   D932 E0                 2225 	movx	a,@dptr
   D933 44 40              2226 	orl	a,#0x40
   D935 F0                 2227 	movx	@dptr,a
                           2228 ;	../../shared/src/ring_pll_cal.c:159: delay01(100);
   D936 90 00 64           2229 	mov	dptr,#0x0064
   D939 78 16              2230 	mov	r0,#_delay01
   D93B 79 BC              2231 	mov	r1,#(_delay01 >> 8)
   D93D 7A 02              2232 	mov	r2,#(_delay01 >> 16)
   D93F 12 00 B3           2233 	lcall	__sdcc_banked_call
   D942 D0 05              2234 	pop	ar5
   D944 D0 04              2235 	pop	ar4
   D946 D0 03              2236 	pop	ar3
   D948 D0 02              2237 	pop	ar2
                           2238 ;	../../shared/src/ring_pll_cal.c:160: PLL_CAL_EN_RING = 1;
   D94A 90 83 10           2239 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_196
   D94D E0                 2240 	movx	a,@dptr
   D94E 44 80              2241 	orl	a,#0x80
   D950 F0                 2242 	movx	@dptr,a
                           2243 ;	../../shared/src/ring_pll_cal.c:161: temp = cmx_REFCLK_FREQ_7_0;
   D951 90 E6 2F           2244 	mov	dptr,#(_CONTROL_CONFIG8 + 0x0003)
   D954 E0                 2245 	movx	a,@dptr
   D955 FE                 2246 	mov	r6,a
   D956 E5 18              2247 	mov	a,_bp
   D958 24 06              2248 	add	a,#0x06
   D95A F8                 2249 	mov	r0,a
   D95B A6 06              2250 	mov	@r0,ar6
   D95D 08                 2251 	inc	r0
   D95E 76 00              2252 	mov	@r0,#0x00
                           2253 ;	../../shared/src/ring_pll_cal.c:162: temp--;
   D960 E5 18              2254 	mov	a,_bp
   D962 24 06              2255 	add	a,#0x06
   D964 F8                 2256 	mov	r0,a
   D965 16                 2257 	dec	@r0
   D966 B6 FF 02           2258 	cjne	@r0,#0xff,00314$
   D969 08                 2259 	inc	r0
   D96A 16                 2260 	dec	@r0
   D96B                    2261 00314$:
                           2262 ;	../../shared/src/ring_pll_cal.c:167: reg_FBC_CNT_TIMER_15_0_b0 = (uint8_t)temp;
   D96B E5 18              2263 	mov	a,_bp
   D96D 24 06              2264 	add	a,#0x06
   D96F F8                 2265 	mov	r0,a
   D970 86 06              2266 	mov	ar6,@r0
   D972 90 A3 2C           2267 	mov	dptr,#_PLLCAL_REG0
   D975 EE                 2268 	mov	a,r6
   D976 F0                 2269 	movx	@dptr,a
                           2270 ;	../../shared/src/ring_pll_cal.c:168: reg_FBC_CNT_TIMER_15_0_b1 = (uint8_t)(temp >> 8);
   D977 E5 18              2271 	mov	a,_bp
   D979 24 06              2272 	add	a,#0x06
   D97B F8                 2273 	mov	r0,a
   D97C 08                 2274 	inc	r0
   D97D 86 06              2275 	mov	ar6,@r0
   D97F 90 A3 2D           2276 	mov	dptr,#(_PLLCAL_REG0 + 0x0001)
   D982 EE                 2277 	mov	a,r6
   D983 F0                 2278 	movx	@dptr,a
                           2279 ;	../../shared/src/ring_pll_cal.c:170: reg_FBC_PLLCAL_RING_EN = 1;
   D984 90 A3 31           2280 	mov	dptr,#(_PLLCAL_REG1 + 0x0001)
   D987 E0                 2281 	movx	a,@dptr
   D988 44 02              2282 	orl	a,#0x02
   D98A F0                 2283 	movx	@dptr,a
                           2284 ;	../../shared/src/ring_pll_cal.c:177: save_FBDIV_h = reg_PLL_FBDIV_RING_9_8;
   D98B 90 82 F0           2285 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_188
   D98E E0                 2286 	movx	a,@dptr
   D98F 03                 2287 	rr	a
   D990 54 03              2288 	anl	a,#0x03
   D992 FE                 2289 	mov	r6,a
   D993 A8 18              2290 	mov	r0,_bp
   D995 08                 2291 	inc	r0
   D996 A6 06              2292 	mov	@r0,ar6
                           2293 ;	../../shared/src/ring_pll_cal.c:178: save_FBDIV_l = reg_PLL_FBDIV_RING_7_0;
   D998 90 82 F4           2294 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_189
   D99B E0                 2295 	movx	a,@dptr
   D99C FF                 2296 	mov	r7,a
   D99D A8 18              2297 	mov	r0,_bp
   D99F 08                 2298 	inc	r0
   D9A0 08                 2299 	inc	r0
   D9A1 A6 07              2300 	mov	@r0,ar7
                           2301 ;	../../shared/src/ring_pll_cal.c:179: save_FBCK_SEL = reg_ANA_FBCK_SEL_RING;
   D9A3 90 A3 18           2302 	mov	dptr,#_PM_CMN_REG1
   D9A6 E0                 2303 	movx	a,@dptr
   D9A7 03                 2304 	rr	a
   D9A8 03                 2305 	rr	a
   D9A9 54 01              2306 	anl	a,#0x01
   D9AB FF                 2307 	mov	r7,a
   D9AC E5 18              2308 	mov	a,_bp
   D9AE 24 03              2309 	add	a,#0x03
   D9B0 F8                 2310 	mov	r0,a
   D9B1 A6 07              2311 	mov	@r0,ar7
                           2312 ;	../../shared/src/ring_pll_cal.c:182: ringloadSpdtbl_4_fcnt();
   D9B3 C0 02              2313 	push	ar2
   D9B5 C0 03              2314 	push	ar3
   D9B7 C0 04              2315 	push	ar4
   D9B9 C0 05              2316 	push	ar5
   D9BB 12 50 7D           2317 	lcall	_ringloadSpdtbl_4_fcnt
                           2318 ;	../../shared/src/ring_pll_cal.c:185: delay01(40);
   D9BE 90 00 28           2319 	mov	dptr,#0x0028
   D9C1 78 16              2320 	mov	r0,#_delay01
   D9C3 79 BC              2321 	mov	r1,#(_delay01 >> 8)
   D9C5 7A 02              2322 	mov	r2,#(_delay01 >> 16)
   D9C7 12 00 B3           2323 	lcall	__sdcc_banked_call
   D9CA D0 05              2324 	pop	ar5
   D9CC D0 04              2325 	pop	ar4
   D9CE D0 03              2326 	pop	ar3
   D9D0 D0 02              2327 	pop	ar2
                           2328 ;	../../shared/src/ring_pll_cal.c:187: do {
   D9D2                    2329 00128$:
                           2330 ;	../../shared/src/ring_pll_cal.c:188: if((PLL_VDDVCO_OVERTH_RING==1&&cmx_PLL_VDDVCO_POLARITY_INV==0) ||
   D9D2 90 A3 31           2331 	mov	dptr,#(_PLLCAL_REG1 + 0x0001)
   D9D5 E0                 2332 	movx	a,@dptr
   D9D6 C4                 2333 	swap	a
   D9D7 23                 2334 	rl	a
   D9D8 54 01              2335 	anl	a,#0x01
   D9DA FF                 2336 	mov	r7,a
   D9DB BF 01 07           2337 	cjne	r7,#0x01,00127$
   D9DE 90 E6 44           2338 	mov	dptr,#_CON_CAL_STEP_SIZE5
   D9E1 E0                 2339 	movx	a,@dptr
   D9E2 30 E0 5E           2340 	jnb	acc.0,00164$
   D9E5                    2341 00127$:
                           2342 ;	../../shared/src/ring_pll_cal.c:189: (PLL_VDDVCO_OVERTH_RING==0&&cmx_PLL_VDDVCO_POLARITY_INV==1)) break;
   D9E5 90 A3 31           2343 	mov	dptr,#(_PLLCAL_REG1 + 0x0001)
   D9E8 E0                 2344 	movx	a,@dptr
   D9E9 20 E3 0C           2345 	jb	acc.3,00123$
   D9EC 90 E6 44           2346 	mov	dptr,#_CON_CAL_STEP_SIZE5
   D9EF E0                 2347 	movx	a,@dptr
   D9F0 54 01              2348 	anl	a,#0x01
   D9F2 FF                 2349 	mov	r7,a
   D9F3 BF 01 02           2350 	cjne	r7,#0x01,00319$
   D9F6 80 4B              2351 	sjmp	00164$
   D9F8                    2352 00319$:
   D9F8                    2353 00123$:
                           2354 ;	../../shared/src/ring_pll_cal.c:190: else SLLP_DAC_COARSE_RING++;
   D9F8 90 83 04           2355 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   D9FB E0                 2356 	movx	a,@dptr
   D9FC 54 0F              2357 	anl	a,#0x0f
   D9FE FF                 2358 	mov	r7,a
   D9FF 0F                 2359 	inc	r7
   DA00 90 83 04           2360 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DA03 EF                 2361 	mov	a,r7
   DA04 54 0F              2362 	anl	a,#0x0f
   DA06 F5 F0              2363 	mov	b,a
   DA08 E0                 2364 	movx	a,@dptr
   DA09 54 F0              2365 	anl	a,#0xf0
   DA0B 45 F0              2366 	orl	a,b
   DA0D F0                 2367 	movx	@dptr,a
                           2368 ;	../../shared/src/ring_pll_cal.c:191: SLLP_DAC_VALID = 1;	SLLP_DAC_VALID = 0;
   DA0E 90 83 04           2369 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DA11 E0                 2370 	movx	a,@dptr
   DA12 44 40              2371 	orl	a,#0x40
   DA14 F0                 2372 	movx	@dptr,a
   DA15 E0                 2373 	movx	a,@dptr
   DA16 54 BF              2374 	anl	a,#0xbf
   DA18 F0                 2375 	movx	@dptr,a
                           2376 ;	../../shared/src/ring_pll_cal.c:192: delay01(40);
   DA19 90 00 28           2377 	mov	dptr,#0x0028
   DA1C C0 02              2378 	push	ar2
   DA1E C0 03              2379 	push	ar3
   DA20 C0 04              2380 	push	ar4
   DA22 C0 05              2381 	push	ar5
   DA24 78 16              2382 	mov	r0,#_delay01
   DA26 79 BC              2383 	mov	r1,#(_delay01 >> 8)
   DA28 7A 02              2384 	mov	r2,#(_delay01 >> 16)
   DA2A 12 00 B3           2385 	lcall	__sdcc_banked_call
   DA2D D0 05              2386 	pop	ar5
   DA2F D0 04              2387 	pop	ar4
   DA31 D0 03              2388 	pop	ar3
   DA33 D0 02              2389 	pop	ar2
                           2390 ;	../../shared/src/ring_pll_cal.c:193: } while(SLLP_DAC_COARSE_RING < DAC_COARSE_MAX);
   DA35 90 83 04           2391 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DA38 E0                 2392 	movx	a,@dptr
   DA39 54 0F              2393 	anl	a,#0x0f
   DA3B FF                 2394 	mov	r7,a
   DA3C C3                 2395 	clr	c
   DA3D 64 80              2396 	xrl	a,#0x80
   DA3F 94 8F              2397 	subb	a,#0x8f
   DA41 40 8F              2398 	jc	00128$
                           2399 ;	../../shared/src/ring_pll_cal.c:197: do {
   DA43                    2400 00164$:
                           2401 ;	../../shared/src/ring_pll_cal.c:208: cnt_rdy = reg_FBC_PLLCAL_CNT_READY;
   DA43 90 A3 30           2402 	mov	dptr,#_PLLCAL_REG1
   DA46 E0                 2403 	movx	a,@dptr
   DA47 03                 2404 	rr	a
   DA48 54 01              2405 	anl	a,#0x01
   DA4A FF                 2406 	mov	r7,a
                           2407 ;	../../shared/src/ring_pll_cal.c:209: reg_FBC_CNT_START = 0;
                           2408 ;	../../shared/src/ring_pll_cal.c:210: reg_FBC_CNT_START = 1;
   DA4B 90 A3 30           2409 	mov	dptr,#_PLLCAL_REG1
   DA4E E0                 2410 	movx	a,@dptr
   DA4F 54 FE              2411 	anl	a,#0xfe
   DA51 F0                 2412 	movx	@dptr,a
   DA52 E0                 2413 	movx	a,@dptr
   DA53 44 01              2414 	orl	a,#0x01
   DA55 F0                 2415 	movx	@dptr,a
                           2416 ;	../../shared/src/ring_pll_cal.c:211: if( cnt_rdy ) while(reg_FBC_PLLCAL_CNT_READY && !timeout);
   DA56 EF                 2417 	mov	a,r7
   DA57 60 0A              2418 	jz	00138$
   DA59                    2419 00132$:
   DA59 90 A3 30           2420 	mov	dptr,#_PLLCAL_REG1
   DA5C E0                 2421 	movx	a,@dptr
   DA5D 30 E1 03           2422 	jnb	acc.1,00138$
   DA60 30 03 F6           2423 	jnb	_timeout,00132$
                           2424 ;	../../shared/src/ring_pll_cal.c:212: while(!reg_FBC_PLLCAL_CNT_READY && !timeout);
   DA63                    2425 00138$:
   DA63 90 A3 30           2426 	mov	dptr,#_PLLCAL_REG1
   DA66 E0                 2427 	movx	a,@dptr
   DA67 20 E1 03           2428 	jb	acc.1,00140$
   DA6A 30 03 F6           2429 	jnb	_timeout,00138$
   DA6D                    2430 00140$:
                           2431 ;	../../shared/src/ring_pll_cal.c:213: reg_FBC_CNT_START = 0;
   DA6D 90 A3 30           2432 	mov	dptr,#_PLLCAL_REG1
   DA70 E0                 2433 	movx	a,@dptr
   DA71 54 FE              2434 	anl	a,#0xfe
   DA73 F0                 2435 	movx	@dptr,a
                           2436 ;	../../shared/src/ring_pll_cal.c:214: if( timeout ) break;
   DA74 30 03 03           2437 	jnb	_timeout,00326$
   DA77 02 DC 31           2438 	ljmp	00195$
   DA7A                    2439 00326$:
                           2440 ;	../../shared/src/ring_pll_cal.c:215: Fmea = reg_FBC_PLLCAL_CNT_15_0_b0;
   DA7A 90 A3 2E           2441 	mov	dptr,#(_PLLCAL_REG0 + 0x0002)
   DA7D E0                 2442 	movx	a,@dptr
   DA7E FF                 2443 	mov	r7,a
   DA7F E5 18              2444 	mov	a,_bp
   DA81 24 04              2445 	add	a,#0x04
   DA83 F8                 2446 	mov	r0,a
   DA84 A6 07              2447 	mov	@r0,ar7
   DA86 08                 2448 	inc	r0
   DA87 76 00              2449 	mov	@r0,#0x00
                           2450 ;	../../shared/src/ring_pll_cal.c:218: if(Fmea >= Ftarget_ring ) break; 
   DA89 90 E6 18           2451 	mov	dptr,#_CONTROL_CONFIG5
   DA8C E0                 2452 	movx	a,@dptr
   DA8D FF                 2453 	mov	r7,a
   DA8E A3                 2454 	inc	dptr
   DA8F E0                 2455 	movx	a,@dptr
   DA90 FE                 2456 	mov	r6,a
   DA91 E5 18              2457 	mov	a,_bp
   DA93 24 04              2458 	add	a,#0x04
   DA95 F8                 2459 	mov	r0,a
   DA96 C3                 2460 	clr	c
   DA97 E6                 2461 	mov	a,@r0
   DA98 9F                 2462 	subb	a,r7
   DA99 08                 2463 	inc	r0
   DA9A E6                 2464 	mov	a,@r0
   DA9B 9E                 2465 	subb	a,r6
   DA9C 40 03              2466 	jc	00327$
   DA9E 02 DC 31           2467 	ljmp	00195$
   DAA1                    2468 00327$:
                           2469 ;	../../shared/src/ring_pll_cal.c:221: if(PLL_SPEED_RING == PLL_SPEED_RING_MAX) {
   DAA1 90 83 00           2470 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_192
   DAA4 E0                 2471 	movx	a,@dptr
   DAA5 C4                 2472 	swap	a
   DAA6 23                 2473 	rl	a
   DAA7 54 1F              2474 	anl	a,#0x1f
   DAA9 FE                 2475 	mov	r6,a
   DAAA BE 17 4C           2476 	cjne	r6,#0x17,00146$
                           2477 ;	../../shared/src/ring_pll_cal.c:222: if( SLLP_DAC_COARSE_RING!=DAC_COARSE_MAX) {
   DAAD 90 83 04           2478 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DAB0 E0                 2479 	movx	a,@dptr
   DAB1 54 0F              2480 	anl	a,#0x0f
   DAB3 FE                 2481 	mov	r6,a
   DAB4 BE 0F 02           2482 	cjne	r6,#0x0F,00330$
   DAB7 80 76              2483 	sjmp	00158$
   DAB9                    2484 00330$:
                           2485 ;	../../shared/src/ring_pll_cal.c:223: SLLP_DAC_COARSE_RING++;
   DAB9 90 83 04           2486 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DABC E0                 2487 	movx	a,@dptr
   DABD 54 0F              2488 	anl	a,#0x0f
   DABF FE                 2489 	mov	r6,a
   DAC0 0E                 2490 	inc	r6
   DAC1 90 83 04           2491 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DAC4 EE                 2492 	mov	a,r6
   DAC5 54 0F              2493 	anl	a,#0x0f
   DAC7 F5 F0              2494 	mov	b,a
   DAC9 E0                 2495 	movx	a,@dptr
   DACA 54 F0              2496 	anl	a,#0xf0
   DACC 45 F0              2497 	orl	a,b
   DACE F0                 2498 	movx	@dptr,a
                           2499 ;	../../shared/src/ring_pll_cal.c:224: SLLP_DAC_VALID = 1;	SLLP_DAC_VALID = 0;
   DACF 90 83 04           2500 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DAD2 E0                 2501 	movx	a,@dptr
   DAD3 44 40              2502 	orl	a,#0x40
   DAD5 F0                 2503 	movx	@dptr,a
   DAD6 E0                 2504 	movx	a,@dptr
   DAD7 54 BF              2505 	anl	a,#0xbf
   DAD9 F0                 2506 	movx	@dptr,a
                           2507 ;	../../shared/src/ring_pll_cal.c:225: delay01(40);
   DADA 90 00 28           2508 	mov	dptr,#0x0028
   DADD C0 02              2509 	push	ar2
   DADF C0 03              2510 	push	ar3
   DAE1 C0 04              2511 	push	ar4
   DAE3 C0 05              2512 	push	ar5
   DAE5 78 16              2513 	mov	r0,#_delay01
   DAE7 79 BC              2514 	mov	r1,#(_delay01 >> 8)
   DAE9 7A 02              2515 	mov	r2,#(_delay01 >> 16)
   DAEB 12 00 B3           2516 	lcall	__sdcc_banked_call
   DAEE D0 05              2517 	pop	ar5
   DAF0 D0 04              2518 	pop	ar4
   DAF2 D0 03              2519 	pop	ar3
   DAF4 D0 02              2520 	pop	ar2
                           2521 ;	../../shared/src/ring_pll_cal.c:226: continue;
   DAF6 02 DC 19           2522 	ljmp	00165$
   DAF9                    2523 00146$:
                           2524 ;	../../shared/src/ring_pll_cal.c:230: PLL_SPEED_RING++;
   DAF9 90 83 00           2525 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_192
   DAFC E0                 2526 	movx	a,@dptr
   DAFD C4                 2527 	swap	a
   DAFE 23                 2528 	rl	a
   DAFF 54 1F              2529 	anl	a,#0x1f
   DB01 FE                 2530 	mov	r6,a
   DB02 0E                 2531 	inc	r6
   DB03 90 83 00           2532 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_192
   DB06 EE                 2533 	mov	a,r6
   DB07 C4                 2534 	swap	a
   DB08 03                 2535 	rr	a
   DB09 54 F8              2536 	anl	a,#(0xf8&0xf8)
   DB0B F5 F0              2537 	mov	b,a
   DB0D E0                 2538 	movx	a,@dptr
   DB0E 54 07              2539 	anl	a,#0x07
   DB10 45 F0              2540 	orl	a,b
   DB12 F0                 2541 	movx	@dptr,a
                           2542 ;	../../shared/src/ring_pll_cal.c:231: delay01(20);
   DB13 90 00 14           2543 	mov	dptr,#0x0014
   DB16 C0 02              2544 	push	ar2
   DB18 C0 03              2545 	push	ar3
   DB1A C0 04              2546 	push	ar4
   DB1C C0 05              2547 	push	ar5
   DB1E 78 16              2548 	mov	r0,#_delay01
   DB20 79 BC              2549 	mov	r1,#(_delay01 >> 8)
   DB22 7A 02              2550 	mov	r2,#(_delay01 >> 16)
   DB24 12 00 B3           2551 	lcall	__sdcc_banked_call
   DB27 D0 05              2552 	pop	ar5
   DB29 D0 04              2553 	pop	ar4
   DB2B D0 03              2554 	pop	ar3
   DB2D D0 02              2555 	pop	ar2
                           2556 ;	../../shared/src/ring_pll_cal.c:234: while(((SLLP_DAC_COARSE_RING<DAC_COARSE_MAX) && \
   DB2F                    2557 00158$:
   DB2F 90 83 04           2558 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DB32 E0                 2559 	movx	a,@dptr
   DB33 54 0F              2560 	anl	a,#0x0f
   DB35 FE                 2561 	mov	r6,a
   DB36 C3                 2562 	clr	c
   DB37 64 80              2563 	xrl	a,#0x80
   DB39 94 8F              2564 	subb	a,#0x8f
   DB3B 50 1C              2565 	jnc	00157$
   DB3D 90 A3 31           2566 	mov	dptr,#(_PLLCAL_REG1 + 0x0001)
   DB40 E0                 2567 	movx	a,@dptr
   DB41 20 E3 07           2568 	jb	acc.3,00155$
   DB44 90 E6 44           2569 	mov	dptr,#_CON_CAL_STEP_SIZE5
   DB47 E0                 2570 	movx	a,@dptr
   DB48 30 E0 1F           2571 	jnb	acc.0,00159$
   DB4B                    2572 00155$:
                           2573 ;	../../shared/src/ring_pll_cal.c:236: (PLL_VDDVCO_OVERTH_RING && cmx_PLL_VDDVCO_POLARITY_INV)))||(PLL_SPEED_RING == PLL_SPEED_RING_MAX)) {
   DB4B 90 A3 31           2574 	mov	dptr,#(_PLLCAL_REG1 + 0x0001)
   DB4E E0                 2575 	movx	a,@dptr
   DB4F 30 E3 07           2576 	jnb	acc.3,00157$
   DB52 90 E6 44           2577 	mov	dptr,#_CON_CAL_STEP_SIZE5
   DB55 E0                 2578 	movx	a,@dptr
   DB56 20 E0 11           2579 	jb	acc.0,00159$
   DB59                    2580 00157$:
   DB59 90 83 00           2581 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_192
   DB5C E0                 2582 	movx	a,@dptr
   DB5D C4                 2583 	swap	a
   DB5E 23                 2584 	rl	a
   DB5F 54 1F              2585 	anl	a,#0x1f
   DB61 FE                 2586 	mov	r6,a
   DB62 BE 17 02           2587 	cjne	r6,#0x17,00336$
   DB65 80 03              2588 	sjmp	00337$
   DB67                    2589 00336$:
   DB67 02 DB FD           2590 	ljmp	00163$
   DB6A                    2591 00337$:
   DB6A                    2592 00159$:
                           2593 ;	../../shared/src/ring_pll_cal.c:238: SLLP_DAC_COARSE_RING++;
   DB6A 90 83 04           2594 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DB6D E0                 2595 	movx	a,@dptr
   DB6E 54 0F              2596 	anl	a,#0x0f
   DB70 FE                 2597 	mov	r6,a
   DB71 0E                 2598 	inc	r6
   DB72 90 83 04           2599 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DB75 EE                 2600 	mov	a,r6
   DB76 54 0F              2601 	anl	a,#0x0f
   DB78 F5 F0              2602 	mov	b,a
   DB7A E0                 2603 	movx	a,@dptr
   DB7B 54 F0              2604 	anl	a,#0xf0
   DB7D 45 F0              2605 	orl	a,b
   DB7F F0                 2606 	movx	@dptr,a
                           2607 ;	../../shared/src/ring_pll_cal.c:239: SLLP_DAC_VALID = 1;	SLLP_DAC_VALID = 0;
   DB80 90 83 04           2608 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DB83 E0                 2609 	movx	a,@dptr
   DB84 44 40              2610 	orl	a,#0x40
   DB86 F0                 2611 	movx	@dptr,a
   DB87 E0                 2612 	movx	a,@dptr
   DB88 54 BF              2613 	anl	a,#0xbf
   DB8A F0                 2614 	movx	@dptr,a
                           2615 ;	../../shared/src/ring_pll_cal.c:240: delay01(40);
   DB8B 90 00 28           2616 	mov	dptr,#0x0028
   DB8E C0 02              2617 	push	ar2
   DB90 C0 03              2618 	push	ar3
   DB92 C0 04              2619 	push	ar4
   DB94 C0 05              2620 	push	ar5
   DB96 78 16              2621 	mov	r0,#_delay01
   DB98 79 BC              2622 	mov	r1,#(_delay01 >> 8)
   DB9A 7A 02              2623 	mov	r2,#(_delay01 >> 16)
   DB9C 12 00 B3           2624 	lcall	__sdcc_banked_call
   DB9F D0 05              2625 	pop	ar5
   DBA1 D0 04              2626 	pop	ar4
   DBA3 D0 03              2627 	pop	ar3
   DBA5 D0 02              2628 	pop	ar2
                           2629 ;	../../shared/src/ring_pll_cal.c:242: if( SLLP_DAC_COARSE_RING>=DAC_COARSE_MAX ) {
   DBA7 90 83 04           2630 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DBAA E0                 2631 	movx	a,@dptr
   DBAB 54 0F              2632 	anl	a,#0x0f
   DBAD FE                 2633 	mov	r6,a
   DBAE C3                 2634 	clr	c
   DBAF 64 80              2635 	xrl	a,#0x80
   DBB1 94 8F              2636 	subb	a,#0x8f
   DBB3 50 03              2637 	jnc	00338$
   DBB5 02 DB 2F           2638 	ljmp	00158$
   DBB8                    2639 00338$:
                           2640 ;	../../shared/src/ring_pll_cal.c:243: if( ringpll_dac_fine<dac_fine_max ){
   DBB8 90 66 21           2641 	mov	dptr,#_ringpll_dac_fine
   DBBB E0                 2642 	movx	a,@dptr
   DBBC FE                 2643 	mov	r6,a
   DBBD A3                 2644 	inc	dptr
   DBBE E0                 2645 	movx	a,@dptr
   DBBF FF                 2646 	mov	r7,a
   DBC0 C3                 2647 	clr	c
   DBC1 EE                 2648 	mov	a,r6
   DBC2 9A                 2649 	subb	a,r2
   DBC3 EF                 2650 	mov	a,r7
   DBC4 9B                 2651 	subb	a,r3
   DBC5 40 03              2652 	jc	00339$
   DBC7 02 DD 6F           2653 	ljmp	00229$
   DBCA                    2654 00339$:
                           2655 ;	../../shared/src/ring_pll_cal.c:244: ringpll_dac_fine += PWR_FINE_STEP;
   DBCA 90 66 21           2656 	mov	dptr,#_ringpll_dac_fine
   DBCD 74 20              2657 	mov	a,#0x20
   DBCF 2E                 2658 	add	a,r6
   DBD0 F0                 2659 	movx	@dptr,a
   DBD1 E4                 2660 	clr	a
   DBD2 3F                 2661 	addc	a,r7
   DBD3 A3                 2662 	inc	dptr
   DBD4 F0                 2663 	movx	@dptr,a
                           2664 ;	../../shared/src/ring_pll_cal.c:245: ringpll_dac_fine_output();
   DBD5 C0 02              2665 	push	ar2
   DBD7 C0 03              2666 	push	ar3
   DBD9 C0 04              2667 	push	ar4
   DBDB C0 05              2668 	push	ar5
   DBDD 78 5E              2669 	mov	r0,#_ringpll_dac_fine_output
   DBDF 79 88              2670 	mov	r1,#(_ringpll_dac_fine_output >> 8)
   DBE1 7A 02              2671 	mov	r2,#(_ringpll_dac_fine_output >> 16)
   DBE3 12 00 B3           2672 	lcall	__sdcc_banked_call
                           2673 ;	../../shared/src/ring_pll_cal.c:247: delay01(40);
   DBE6 90 00 28           2674 	mov	dptr,#0x0028
   DBE9 78 16              2675 	mov	r0,#_delay01
   DBEB 79 BC              2676 	mov	r1,#(_delay01 >> 8)
   DBED 7A 02              2677 	mov	r2,#(_delay01 >> 16)
   DBEF 12 00 B3           2678 	lcall	__sdcc_banked_call
   DBF2 D0 05              2679 	pop	ar5
   DBF4 D0 04              2680 	pop	ar4
   DBF6 D0 03              2681 	pop	ar3
   DBF8 D0 02              2682 	pop	ar2
                           2683 ;	../../shared/src/ring_pll_cal.c:249: else goto adjust;
   DBFA 02 DB 2F           2684 	ljmp	00158$
   DBFD                    2685 00163$:
                           2686 ;	../../shared/src/ring_pll_cal.c:254: delay01(20);
   DBFD 90 00 14           2687 	mov	dptr,#0x0014
   DC00 C0 02              2688 	push	ar2
   DC02 C0 03              2689 	push	ar3
   DC04 C0 04              2690 	push	ar4
   DC06 C0 05              2691 	push	ar5
   DC08 78 16              2692 	mov	r0,#_delay01
   DC0A 79 BC              2693 	mov	r1,#(_delay01 >> 8)
   DC0C 7A 02              2694 	mov	r2,#(_delay01 >> 16)
   DC0E 12 00 B3           2695 	lcall	__sdcc_banked_call
   DC11 D0 05              2696 	pop	ar5
   DC13 D0 04              2697 	pop	ar4
   DC15 D0 03              2698 	pop	ar3
   DC17 D0 02              2699 	pop	ar2
   DC19                    2700 00165$:
                           2701 ;	../../shared/src/ring_pll_cal.c:256: } while(Fmea < Ftarget_ring);
   DC19 90 E6 18           2702 	mov	dptr,#_CONTROL_CONFIG5
   DC1C E0                 2703 	movx	a,@dptr
   DC1D FE                 2704 	mov	r6,a
   DC1E A3                 2705 	inc	dptr
   DC1F E0                 2706 	movx	a,@dptr
   DC20 FF                 2707 	mov	r7,a
   DC21 E5 18              2708 	mov	a,_bp
   DC23 24 04              2709 	add	a,#0x04
   DC25 F8                 2710 	mov	r0,a
   DC26 C3                 2711 	clr	c
   DC27 E6                 2712 	mov	a,@r0
   DC28 9E                 2713 	subb	a,r6
   DC29 08                 2714 	inc	r0
   DC2A E6                 2715 	mov	a,@r0
   DC2B 9F                 2716 	subb	a,r7
   DC2C 50 03              2717 	jnc	00340$
   DC2E 02 DA 43           2718 	ljmp	00164$
   DC31                    2719 00340$:
                           2720 ;	../../shared/src/ring_pll_cal.c:261: while ( ringpll_dac_fine != 0 ) {
   DC31                    2721 00195$:
   DC31 90 66 21           2722 	mov	dptr,#_ringpll_dac_fine
   DC34 E0                 2723 	movx	a,@dptr
   DC35 FE                 2724 	mov	r6,a
   DC36 A3                 2725 	inc	dptr
   DC37 E0                 2726 	movx	a,@dptr
   DC38 FF                 2727 	mov	r7,a
   DC39 4E                 2728 	orl	a,r6
   DC3A 70 03              2729 	jnz	00341$
   DC3C 02 DD 6F           2730 	ljmp	00229$
   DC3F                    2731 00341$:
                           2732 ;	../../shared/src/ring_pll_cal.c:262: if( timeout ) break;
   DC3F 30 03 03           2733 	jnb	_timeout,00342$
   DC42 02 DD 6F           2734 	ljmp	00229$
   DC45                    2735 00342$:
                           2736 ;	../../shared/src/ring_pll_cal.c:264: ringpll_dac_fine -= PWR_FINE_STEP;
   DC45 EE                 2737 	mov	a,r6
   DC46 24 E0              2738 	add	a,#0xe0
   DC48 FE                 2739 	mov	r6,a
   DC49 EF                 2740 	mov	a,r7
   DC4A 34 FF              2741 	addc	a,#0xff
   DC4C FF                 2742 	mov	r7,a
   DC4D 90 66 21           2743 	mov	dptr,#_ringpll_dac_fine
   DC50 EE                 2744 	mov	a,r6
   DC51 F0                 2745 	movx	@dptr,a
   DC52 A3                 2746 	inc	dptr
   DC53 EF                 2747 	mov	a,r7
   DC54 F0                 2748 	movx	@dptr,a
                           2749 ;	../../shared/src/ring_pll_cal.c:266: if( SLLP_DAC_COARSE_RING>0 && SLLP_DAC_COARSE_RING<DAC_COARSE_MAX) {
   DC55 90 83 04           2750 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DC58 E0                 2751 	movx	a,@dptr
   DC59 54 0F              2752 	anl	a,#0x0f
   DC5B 70 03              2753 	jnz	00343$
   DC5D 02 DC EF           2754 	ljmp	00179$
   DC60                    2755 00343$:
   DC60 90 83 04           2756 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DC63 E0                 2757 	movx	a,@dptr
   DC64 54 0F              2758 	anl	a,#0x0f
   DC66 FE                 2759 	mov	r6,a
   DC67 C3                 2760 	clr	c
   DC68 64 80              2761 	xrl	a,#0x80
   DC6A 94 8F              2762 	subb	a,#0x8f
   DC6C 40 03              2763 	jc	00344$
   DC6E 02 DC EF           2764 	ljmp	00179$
   DC71                    2765 00344$:
                           2766 ;	../../shared/src/ring_pll_cal.c:269: if(ringpll_dac_fine<dac_fine_min) { 
   DC71 90 66 21           2767 	mov	dptr,#_ringpll_dac_fine
   DC74 E0                 2768 	movx	a,@dptr
   DC75 FE                 2769 	mov	r6,a
   DC76 A3                 2770 	inc	dptr
   DC77 E0                 2771 	movx	a,@dptr
   DC78 FF                 2772 	mov	r7,a
   DC79 C3                 2773 	clr	c
   DC7A EE                 2774 	mov	a,r6
   DC7B 9C                 2775 	subb	a,r4
   DC7C EF                 2776 	mov	a,r7
   DC7D 9D                 2777 	subb	a,r5
   DC7E 50 34              2778 	jnc	00176$
                           2779 ;	../../shared/src/ring_pll_cal.c:270: ringpll_dac_fine += 300; 
   DC80 90 66 21           2780 	mov	dptr,#_ringpll_dac_fine
   DC83 74 2C              2781 	mov	a,#0x2C
   DC85 2E                 2782 	add	a,r6
   DC86 F0                 2783 	movx	@dptr,a
   DC87 74 01              2784 	mov	a,#0x01
   DC89 3F                 2785 	addc	a,r7
   DC8A A3                 2786 	inc	dptr
   DC8B F0                 2787 	movx	@dptr,a
                           2788 ;	../../shared/src/ring_pll_cal.c:271: if( SLLP_DAC_COARSE_RING > DAC_COARSE_MIN )
   DC8C 90 83 04           2789 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DC8F E0                 2790 	movx	a,@dptr
   DC90 54 0F              2791 	anl	a,#0x0f
   DC92 60 5B              2792 	jz	00179$
                           2793 ;	../../shared/src/ring_pll_cal.c:272: SLLP_DAC_COARSE_RING--;
   DC94 C0 04              2794 	push	ar4
   DC96 C0 05              2795 	push	ar5
   DC98 90 83 04           2796 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DC9B E0                 2797 	movx	a,@dptr
   DC9C 54 0F              2798 	anl	a,#0x0f
   DC9E FC                 2799 	mov	r4,a
   DC9F 1C                 2800 	dec	r4
   DCA0 90 83 04           2801 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DCA3 EC                 2802 	mov	a,r4
   DCA4 54 0F              2803 	anl	a,#0x0f
   DCA6 F5 F0              2804 	mov	b,a
   DCA8 E0                 2805 	movx	a,@dptr
   DCA9 54 F0              2806 	anl	a,#0xf0
   DCAB 45 F0              2807 	orl	a,b
   DCAD F0                 2808 	movx	@dptr,a
   DCAE D0 05              2809 	pop	ar5
   DCB0 D0 04              2810 	pop	ar4
   DCB2 80 3B              2811 	sjmp	00179$
   DCB4                    2812 00176$:
                           2813 ;	../../shared/src/ring_pll_cal.c:274: else if(ringpll_dac_fine>dac_fine_max) { 
   DCB4 C3                 2814 	clr	c
   DCB5 EA                 2815 	mov	a,r2
   DCB6 9E                 2816 	subb	a,r6
   DCB7 EB                 2817 	mov	a,r3
   DCB8 9F                 2818 	subb	a,r7
   DCB9 50 34              2819 	jnc	00179$
                           2820 ;	../../shared/src/ring_pll_cal.c:275: ringpll_dac_fine -= 300; 
   DCBB EE                 2821 	mov	a,r6
   DCBC 24 D4              2822 	add	a,#0xd4
   DCBE FE                 2823 	mov	r6,a
   DCBF EF                 2824 	mov	a,r7
   DCC0 34 FE              2825 	addc	a,#0xfe
   DCC2 FF                 2826 	mov	r7,a
   DCC3 90 66 21           2827 	mov	dptr,#_ringpll_dac_fine
   DCC6 EE                 2828 	mov	a,r6
   DCC7 F0                 2829 	movx	@dptr,a
   DCC8 A3                 2830 	inc	dptr
   DCC9 EF                 2831 	mov	a,r7
   DCCA F0                 2832 	movx	@dptr,a
                           2833 ;	../../shared/src/ring_pll_cal.c:276: if( SLLP_DAC_COARSE_RING < DAC_COARSE_MAX )
   DCCB 90 83 04           2834 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DCCE E0                 2835 	movx	a,@dptr
   DCCF 54 0F              2836 	anl	a,#0x0f
   DCD1 FE                 2837 	mov	r6,a
   DCD2 C3                 2838 	clr	c
   DCD3 64 80              2839 	xrl	a,#0x80
   DCD5 94 8F              2840 	subb	a,#0x8f
   DCD7 50 16              2841 	jnc	00179$
                           2842 ;	../../shared/src/ring_pll_cal.c:277: SLLP_DAC_COARSE_RING++;
   DCD9 90 83 04           2843 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DCDC E0                 2844 	movx	a,@dptr
   DCDD 54 0F              2845 	anl	a,#0x0f
   DCDF FE                 2846 	mov	r6,a
   DCE0 0E                 2847 	inc	r6
   DCE1 90 83 04           2848 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DCE4 EE                 2849 	mov	a,r6
   DCE5 54 0F              2850 	anl	a,#0x0f
   DCE7 F5 F0              2851 	mov	b,a
   DCE9 E0                 2852 	movx	a,@dptr
   DCEA 54 F0              2853 	anl	a,#0xf0
   DCEC 45 F0              2854 	orl	a,b
   DCEE F0                 2855 	movx	@dptr,a
   DCEF                    2856 00179$:
                           2857 ;	../../shared/src/ring_pll_cal.c:281: ringpll_dac_fine_output();
   DCEF C0 02              2858 	push	ar2
   DCF1 C0 03              2859 	push	ar3
   DCF3 C0 04              2860 	push	ar4
   DCF5 C0 05              2861 	push	ar5
   DCF7 78 5E              2862 	mov	r0,#_ringpll_dac_fine_output
   DCF9 79 88              2863 	mov	r1,#(_ringpll_dac_fine_output >> 8)
   DCFB 7A 02              2864 	mov	r2,#(_ringpll_dac_fine_output >> 16)
   DCFD 12 00 B3           2865 	lcall	__sdcc_banked_call
                           2866 ;	../../shared/src/ring_pll_cal.c:282: delay01(40);
   DD00 90 00 28           2867 	mov	dptr,#0x0028
   DD03 78 16              2868 	mov	r0,#_delay01
   DD05 79 BC              2869 	mov	r1,#(_delay01 >> 8)
   DD07 7A 02              2870 	mov	r2,#(_delay01 >> 16)
   DD09 12 00 B3           2871 	lcall	__sdcc_banked_call
   DD0C D0 05              2872 	pop	ar5
   DD0E D0 04              2873 	pop	ar4
   DD10 D0 03              2874 	pop	ar3
   DD12 D0 02              2875 	pop	ar2
                           2876 ;	../../shared/src/ring_pll_cal.c:293: cnt_rdy = reg_FBC_PLLCAL_CNT_READY;
   DD14 90 A3 30           2877 	mov	dptr,#_PLLCAL_REG1
   DD17 E0                 2878 	movx	a,@dptr
   DD18 03                 2879 	rr	a
   DD19 54 01              2880 	anl	a,#0x01
   DD1B FE                 2881 	mov	r6,a
   DD1C FF                 2882 	mov	r7,a
                           2883 ;	../../shared/src/ring_pll_cal.c:294: reg_FBC_CNT_START = 1;
   DD1D 90 A3 30           2884 	mov	dptr,#_PLLCAL_REG1
   DD20 E0                 2885 	movx	a,@dptr
   DD21 44 01              2886 	orl	a,#0x01
   DD23 F0                 2887 	movx	@dptr,a
                           2888 ;	../../shared/src/ring_pll_cal.c:295: if( cnt_rdy ) while(reg_FBC_PLLCAL_CNT_READY && !timeout);
   DD24 EF                 2889 	mov	a,r7
   DD25 60 0A              2890 	jz	00188$
   DD27                    2891 00182$:
   DD27 90 A3 30           2892 	mov	dptr,#_PLLCAL_REG1
   DD2A E0                 2893 	movx	a,@dptr
   DD2B 30 E1 03           2894 	jnb	acc.1,00188$
   DD2E 30 03 F6           2895 	jnb	_timeout,00182$
                           2896 ;	../../shared/src/ring_pll_cal.c:296: while(!reg_FBC_PLLCAL_CNT_READY && !timeout );
   DD31                    2897 00188$:
   DD31 90 A3 30           2898 	mov	dptr,#_PLLCAL_REG1
   DD34 E0                 2899 	movx	a,@dptr
   DD35 20 E1 03           2900 	jb	acc.1,00190$
   DD38 30 03 F6           2901 	jnb	_timeout,00188$
   DD3B                    2902 00190$:
                           2903 ;	../../shared/src/ring_pll_cal.c:297: reg_FBC_CNT_START = 0;
   DD3B 90 A3 30           2904 	mov	dptr,#_PLLCAL_REG1
   DD3E E0                 2905 	movx	a,@dptr
   DD3F 54 FE              2906 	anl	a,#0xfe
   DD41 F0                 2907 	movx	@dptr,a
                           2908 ;	../../shared/src/ring_pll_cal.c:298: if(timeout) break;
   DD42 20 03 2A           2909 	jb	_timeout,00229$
                           2910 ;	../../shared/src/ring_pll_cal.c:299: Fmea = reg_FBC_PLLCAL_CNT_15_0;
   DD45 90 A3 2E           2911 	mov	dptr,#(_PLLCAL_REG0 + 0x0002)
   DD48 E0                 2912 	movx	a,@dptr
   DD49 FE                 2913 	mov	r6,a
   DD4A A3                 2914 	inc	dptr
   DD4B E0                 2915 	movx	a,@dptr
   DD4C FF                 2916 	mov	r7,a
   DD4D E5 18              2917 	mov	a,_bp
   DD4F 24 04              2918 	add	a,#0x04
   DD51 F8                 2919 	mov	r0,a
   DD52 A6 06              2920 	mov	@r0,ar6
   DD54 08                 2921 	inc	r0
   DD55 A6 07              2922 	mov	@r0,ar7
                           2923 ;	../../shared/src/ring_pll_cal.c:302: if(Fmea <= Ftarget_ring ) break;
   DD57 90 E6 18           2924 	mov	dptr,#_CONTROL_CONFIG5
   DD5A E0                 2925 	movx	a,@dptr
   DD5B FE                 2926 	mov	r6,a
   DD5C A3                 2927 	inc	dptr
   DD5D E0                 2928 	movx	a,@dptr
   DD5E FF                 2929 	mov	r7,a
   DD5F E5 18              2930 	mov	a,_bp
   DD61 24 04              2931 	add	a,#0x04
   DD63 F8                 2932 	mov	r0,a
   DD64 C3                 2933 	clr	c
   DD65 EE                 2934 	mov	a,r6
   DD66 96                 2935 	subb	a,@r0
   DD67 EF                 2936 	mov	a,r7
   DD68 08                 2937 	inc	r0
   DD69 96                 2938 	subb	a,@r0
   DD6A 50 03              2939 	jnc	00355$
   DD6C 02 DC 31           2940 	ljmp	00195$
   DD6F                    2941 00355$:
                           2942 ;	../../shared/src/ring_pll_cal.c:306: do {
   DD6F                    2943 00229$:
                           2944 ;	../../shared/src/ring_pll_cal.c:307: if( timeout ) break;
   DD6F 30 03 03           2945 	jnb	_timeout,00356$
   DD72 02 DE CE           2946 	ljmp	00231$
   DD75                    2947 00356$:
                           2948 ;	../../shared/src/ring_pll_cal.c:318: cnt_rdy = reg_FBC_PLLCAL_CNT_READY;
   DD75 90 A3 30           2949 	mov	dptr,#_PLLCAL_REG1
   DD78 E0                 2950 	movx	a,@dptr
   DD79 03                 2951 	rr	a
   DD7A 54 01              2952 	anl	a,#0x01
   DD7C FE                 2953 	mov	r6,a
   DD7D FF                 2954 	mov	r7,a
                           2955 ;	../../shared/src/ring_pll_cal.c:319: reg_FBC_CNT_START = 1;
   DD7E 90 A3 30           2956 	mov	dptr,#_PLLCAL_REG1
   DD81 E0                 2957 	movx	a,@dptr
   DD82 44 01              2958 	orl	a,#0x01
   DD84 F0                 2959 	movx	@dptr,a
                           2960 ;	../../shared/src/ring_pll_cal.c:320: if( cnt_rdy ) while(reg_FBC_PLLCAL_CNT_READY && !timeout);
   DD85 EF                 2961 	mov	a,r7
   DD86 60 0A              2962 	jz	00208$
   DD88                    2963 00202$:
   DD88 90 A3 30           2964 	mov	dptr,#_PLLCAL_REG1
   DD8B E0                 2965 	movx	a,@dptr
   DD8C 30 E1 03           2966 	jnb	acc.1,00208$
   DD8F 30 03 F6           2967 	jnb	_timeout,00202$
                           2968 ;	../../shared/src/ring_pll_cal.c:321: while(!reg_FBC_PLLCAL_CNT_READY && !timeout);
   DD92                    2969 00208$:
   DD92 90 A3 30           2970 	mov	dptr,#_PLLCAL_REG1
   DD95 E0                 2971 	movx	a,@dptr
   DD96 20 E1 03           2972 	jb	acc.1,00210$
   DD99 30 03 F6           2973 	jnb	_timeout,00208$
   DD9C                    2974 00210$:
                           2975 ;	../../shared/src/ring_pll_cal.c:322: reg_FBC_CNT_START = 0;
   DD9C 90 A3 30           2976 	mov	dptr,#_PLLCAL_REG1
   DD9F E0                 2977 	movx	a,@dptr
   DDA0 54 FE              2978 	anl	a,#0xfe
   DDA2 F0                 2979 	movx	@dptr,a
                           2980 ;	../../shared/src/ring_pll_cal.c:323: if (timeout) break;
   DDA3 30 03 03           2981 	jnb	_timeout,00362$
   DDA6 02 DE CE           2982 	ljmp	00231$
   DDA9                    2983 00362$:
                           2984 ;	../../shared/src/ring_pll_cal.c:324: Fmea = reg_FBC_PLLCAL_CNT_15_0;
   DDA9 90 A3 2E           2985 	mov	dptr,#(_PLLCAL_REG0 + 0x0002)
   DDAC E0                 2986 	movx	a,@dptr
   DDAD FE                 2987 	mov	r6,a
   DDAE A3                 2988 	inc	dptr
   DDAF E0                 2989 	movx	a,@dptr
   DDB0 FF                 2990 	mov	r7,a
   DDB1 E5 18              2991 	mov	a,_bp
   DDB3 24 04              2992 	add	a,#0x04
   DDB5 F8                 2993 	mov	r0,a
   DDB6 A6 06              2994 	mov	@r0,ar6
   DDB8 08                 2995 	inc	r0
   DDB9 A6 07              2996 	mov	@r0,ar7
                           2997 ;	../../shared/src/ring_pll_cal.c:327: if (Fmea == Ftarget_ring) break;
   DDBB 90 E6 18           2998 	mov	dptr,#_CONTROL_CONFIG5
   DDBE E0                 2999 	movx	a,@dptr
   DDBF FE                 3000 	mov	r6,a
   DDC0 A3                 3001 	inc	dptr
   DDC1 E0                 3002 	movx	a,@dptr
   DDC2 FF                 3003 	mov	r7,a
   DDC3 E5 18              3004 	mov	a,_bp
   DDC5 24 04              3005 	add	a,#0x04
   DDC7 F8                 3006 	mov	r0,a
   DDC8 E6                 3007 	mov	a,@r0
   DDC9 B5 06 08           3008 	cjne	a,ar6,00363$
   DDCC 08                 3009 	inc	r0
   DDCD E6                 3010 	mov	a,@r0
   DDCE B5 07 03           3011 	cjne	a,ar7,00363$
   DDD1 02 DE CE           3012 	ljmp	00231$
   DDD4                    3013 00363$:
                           3014 ;	../../shared/src/ring_pll_cal.c:328: else if ( Fmea > Ftarget_ring ) {
   DDD4 90 E6 18           3015 	mov	dptr,#_CONTROL_CONFIG5
   DDD7 E0                 3016 	movx	a,@dptr
   DDD8 FE                 3017 	mov	r6,a
   DDD9 A3                 3018 	inc	dptr
   DDDA E0                 3019 	movx	a,@dptr
   DDDB FF                 3020 	mov	r7,a
   DDDC E5 18              3021 	mov	a,_bp
   DDDE 24 04              3022 	add	a,#0x04
   DDE0 F8                 3023 	mov	r0,a
   DDE1 C3                 3024 	clr	c
   DDE2 EE                 3025 	mov	a,r6
   DDE3 96                 3026 	subb	a,@r0
   DDE4 EF                 3027 	mov	a,r7
   DDE5 08                 3028 	inc	r0
   DDE6 96                 3029 	subb	a,@r0
   DDE7 50 1A              3030 	jnc	00214$
                           3031 ;	../../shared/src/ring_pll_cal.c:329: ringpll_dac_fine-=PWR_FINE_STEP;
   DDE9 90 66 21           3032 	mov	dptr,#_ringpll_dac_fine
   DDEC E0                 3033 	movx	a,@dptr
   DDED FE                 3034 	mov	r6,a
   DDEE A3                 3035 	inc	dptr
   DDEF E0                 3036 	movx	a,@dptr
   DDF0 FF                 3037 	mov	r7,a
   DDF1 EE                 3038 	mov	a,r6
   DDF2 24 E0              3039 	add	a,#0xe0
   DDF4 FE                 3040 	mov	r6,a
   DDF5 EF                 3041 	mov	a,r7
   DDF6 34 FF              3042 	addc	a,#0xff
   DDF8 FF                 3043 	mov	r7,a
   DDF9 90 66 21           3044 	mov	dptr,#_ringpll_dac_fine
   DDFC EE                 3045 	mov	a,r6
   DDFD F0                 3046 	movx	@dptr,a
   DDFE A3                 3047 	inc	dptr
   DDFF EF                 3048 	mov	a,r7
   DE00 F0                 3049 	movx	@dptr,a
   DE01 80 13              3050 	sjmp	00218$
   DE03                    3051 00214$:
                           3052 ;	../../shared/src/ring_pll_cal.c:332: ringpll_dac_fine+=PWR_FINE_STEP;
   DE03 90 66 21           3053 	mov	dptr,#_ringpll_dac_fine
   DE06 E0                 3054 	movx	a,@dptr
   DE07 FE                 3055 	mov	r6,a
   DE08 A3                 3056 	inc	dptr
   DE09 E0                 3057 	movx	a,@dptr
   DE0A FF                 3058 	mov	r7,a
   DE0B 90 66 21           3059 	mov	dptr,#_ringpll_dac_fine
   DE0E 74 20              3060 	mov	a,#0x20
   DE10 2E                 3061 	add	a,r6
   DE11 F0                 3062 	movx	@dptr,a
   DE12 E4                 3063 	clr	a
   DE13 3F                 3064 	addc	a,r7
   DE14 A3                 3065 	inc	dptr
   DE15 F0                 3066 	movx	@dptr,a
   DE16                    3067 00218$:
                           3068 ;	../../shared/src/ring_pll_cal.c:334: if(ringpll_dac_fine<dac_fine_min) { 
   DE16 90 66 21           3069 	mov	dptr,#_ringpll_dac_fine
   DE19 E0                 3070 	movx	a,@dptr
   DE1A FE                 3071 	mov	r6,a
   DE1B A3                 3072 	inc	dptr
   DE1C E0                 3073 	movx	a,@dptr
   DE1D FF                 3074 	mov	r7,a
   DE1E C3                 3075 	clr	c
   DE1F EE                 3076 	mov	a,r6
   DE20 9C                 3077 	subb	a,r4
   DE21 EF                 3078 	mov	a,r7
   DE22 9D                 3079 	subb	a,r5
   DE23 50 34              3080 	jnc	00226$
                           3081 ;	../../shared/src/ring_pll_cal.c:335: ringpll_dac_fine += 300; 
   DE25 90 66 21           3082 	mov	dptr,#_ringpll_dac_fine
   DE28 74 2C              3083 	mov	a,#0x2C
   DE2A 2E                 3084 	add	a,r6
   DE2B F0                 3085 	movx	@dptr,a
   DE2C 74 01              3086 	mov	a,#0x01
   DE2E 3F                 3087 	addc	a,r7
   DE2F A3                 3088 	inc	dptr
   DE30 F0                 3089 	movx	@dptr,a
                           3090 ;	../../shared/src/ring_pll_cal.c:336: if(SLLP_DAC_COARSE_RING>DAC_COARSE_MIN)	SLLP_DAC_COARSE_RING--;
   DE31 90 83 04           3091 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DE34 E0                 3092 	movx	a,@dptr
   DE35 54 0F              3093 	anl	a,#0x0f
   DE37 60 5B              3094 	jz	00227$
   DE39 C0 04              3095 	push	ar4
   DE3B C0 05              3096 	push	ar5
   DE3D 90 83 04           3097 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DE40 E0                 3098 	movx	a,@dptr
   DE41 54 0F              3099 	anl	a,#0x0f
   DE43 FC                 3100 	mov	r4,a
   DE44 1C                 3101 	dec	r4
   DE45 90 83 04           3102 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DE48 EC                 3103 	mov	a,r4
   DE49 54 0F              3104 	anl	a,#0x0f
   DE4B F5 F0              3105 	mov	b,a
   DE4D E0                 3106 	movx	a,@dptr
   DE4E 54 F0              3107 	anl	a,#0xf0
   DE50 45 F0              3108 	orl	a,b
   DE52 F0                 3109 	movx	@dptr,a
   DE53 D0 05              3110 	pop	ar5
   DE55 D0 04              3111 	pop	ar4
   DE57 80 3B              3112 	sjmp	00227$
   DE59                    3113 00226$:
                           3114 ;	../../shared/src/ring_pll_cal.c:338: else if(ringpll_dac_fine>dac_fine_max) { 
   DE59 C3                 3115 	clr	c
   DE5A EA                 3116 	mov	a,r2
   DE5B 9E                 3117 	subb	a,r6
   DE5C EB                 3118 	mov	a,r3
   DE5D 9F                 3119 	subb	a,r7
   DE5E 50 34              3120 	jnc	00227$
                           3121 ;	../../shared/src/ring_pll_cal.c:339: ringpll_dac_fine -= 300; 
   DE60 EE                 3122 	mov	a,r6
   DE61 24 D4              3123 	add	a,#0xd4
   DE63 FE                 3124 	mov	r6,a
   DE64 EF                 3125 	mov	a,r7
   DE65 34 FE              3126 	addc	a,#0xfe
   DE67 FF                 3127 	mov	r7,a
   DE68 90 66 21           3128 	mov	dptr,#_ringpll_dac_fine
   DE6B EE                 3129 	mov	a,r6
   DE6C F0                 3130 	movx	@dptr,a
   DE6D A3                 3131 	inc	dptr
   DE6E EF                 3132 	mov	a,r7
   DE6F F0                 3133 	movx	@dptr,a
                           3134 ;	../../shared/src/ring_pll_cal.c:340: if(SLLP_DAC_COARSE_RING<DAC_COARSE_MAX) SLLP_DAC_COARSE_RING++;
   DE70 90 83 04           3135 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DE73 E0                 3136 	movx	a,@dptr
   DE74 54 0F              3137 	anl	a,#0x0f
   DE76 FE                 3138 	mov	r6,a
   DE77 C3                 3139 	clr	c
   DE78 64 80              3140 	xrl	a,#0x80
   DE7A 94 8F              3141 	subb	a,#0x8f
   DE7C 50 16              3142 	jnc	00227$
   DE7E 90 83 04           3143 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DE81 E0                 3144 	movx	a,@dptr
   DE82 54 0F              3145 	anl	a,#0x0f
   DE84 FE                 3146 	mov	r6,a
   DE85 0E                 3147 	inc	r6
   DE86 90 83 04           3148 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   DE89 EE                 3149 	mov	a,r6
   DE8A 54 0F              3150 	anl	a,#0x0f
   DE8C F5 F0              3151 	mov	b,a
   DE8E E0                 3152 	movx	a,@dptr
   DE8F 54 F0              3153 	anl	a,#0xf0
   DE91 45 F0              3154 	orl	a,b
   DE93 F0                 3155 	movx	@dptr,a
   DE94                    3156 00227$:
                           3157 ;	../../shared/src/ring_pll_cal.c:343: ringpll_dac_fine_output();
   DE94 C0 02              3158 	push	ar2
   DE96 C0 03              3159 	push	ar3
   DE98 C0 04              3160 	push	ar4
   DE9A C0 05              3161 	push	ar5
   DE9C 78 5E              3162 	mov	r0,#_ringpll_dac_fine_output
   DE9E 79 88              3163 	mov	r1,#(_ringpll_dac_fine_output >> 8)
   DEA0 7A 02              3164 	mov	r2,#(_ringpll_dac_fine_output >> 16)
   DEA2 12 00 B3           3165 	lcall	__sdcc_banked_call
                           3166 ;	../../shared/src/ring_pll_cal.c:345: delay01(40);
   DEA5 90 00 28           3167 	mov	dptr,#0x0028
   DEA8 78 16              3168 	mov	r0,#_delay01
   DEAA 79 BC              3169 	mov	r1,#(_delay01 >> 8)
   DEAC 7A 02              3170 	mov	r2,#(_delay01 >> 16)
   DEAE 12 00 B3           3171 	lcall	__sdcc_banked_call
   DEB1 D0 05              3172 	pop	ar5
   DEB3 D0 04              3173 	pop	ar4
   DEB5 D0 03              3174 	pop	ar3
   DEB7 D0 02              3175 	pop	ar2
                           3176 ;	../../shared/src/ring_pll_cal.c:347: } while ((ringpll_dac_fine>0) && (ringpll_dac_fine<dac_fine_max));
   DEB9 90 66 21           3177 	mov	dptr,#_ringpll_dac_fine
   DEBC E0                 3178 	movx	a,@dptr
   DEBD FE                 3179 	mov	r6,a
   DEBE A3                 3180 	inc	dptr
   DEBF E0                 3181 	movx	a,@dptr
   DEC0 FF                 3182 	mov	r7,a
   DEC1 4E                 3183 	orl	a,r6
   DEC2 60 0A              3184 	jz	00231$
   DEC4 C3                 3185 	clr	c
   DEC5 EE                 3186 	mov	a,r6
   DEC6 9A                 3187 	subb	a,r2
   DEC7 EF                 3188 	mov	a,r7
   DEC8 9B                 3189 	subb	a,r3
   DEC9 50 03              3190 	jnc	00370$
   DECB 02 DD 6F           3191 	ljmp	00229$
   DECE                    3192 00370$:
   DECE                    3193 00231$:
                           3194 ;	../../shared/src/ring_pll_cal.c:354: reg_PLL_FBDIV_RING_9_8 = save_FBDIV_h;
   DECE 90 82 F0           3195 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_188
   DED1 A8 18              3196 	mov	r0,_bp
   DED3 08                 3197 	inc	r0
   DED4 E6                 3198 	mov	a,@r0
   DED5 25 E0              3199 	add	a,acc
   DED7 54 06              3200 	anl	a,#0x06
   DED9 F5 F0              3201 	mov	b,a
   DEDB E0                 3202 	movx	a,@dptr
   DEDC 54 F9              3203 	anl	a,#0xf9
   DEDE 45 F0              3204 	orl	a,b
   DEE0 F0                 3205 	movx	@dptr,a
                           3206 ;	../../shared/src/ring_pll_cal.c:355: reg_PLL_FBDIV_RING_7_0 = save_FBDIV_l;
   DEE1 90 82 F4           3207 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_189
   DEE4 A8 18              3208 	mov	r0,_bp
   DEE6 08                 3209 	inc	r0
   DEE7 08                 3210 	inc	r0
   DEE8 E6                 3211 	mov	a,@r0
   DEE9 F0                 3212 	movx	@dptr,a
                           3213 ;	../../shared/src/ring_pll_cal.c:356: reg_ANA_FBCK_SEL_RING = save_FBCK_SEL;
   DEEA 90 A3 18           3214 	mov	dptr,#_PM_CMN_REG1
   DEED E5 18              3215 	mov	a,_bp
   DEEF 24 03              3216 	add	a,#0x03
   DEF1 F8                 3217 	mov	r0,a
   DEF2 E6                 3218 	mov	a,@r0
   DEF3 13                 3219 	rrc	a
   DEF4 E0                 3220 	movx	a,@dptr
   DEF5 92 E2              3221 	mov	acc.2,c
   DEF7 F0                 3222 	movx	@dptr,a
                           3223 ;	../../shared/src/ring_pll_cal.c:359: reg_FBC_PLLCAL_RING_EN = 0;
   DEF8 90 A3 31           3224 	mov	dptr,#(_PLLCAL_REG1 + 0x0001)
   DEFB E0                 3225 	movx	a,@dptr
   DEFC 54 FD              3226 	anl	a,#0xfd
   DEFE F0                 3227 	movx	@dptr,a
                           3228 ;	../../shared/src/ring_pll_cal.c:360: PLL_SHRTR_RING = 0;
   DEFF 90 83 10           3229 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_196
   DF02 E0                 3230 	movx	a,@dptr
   DF03 54 BF              3231 	anl	a,#0xbf
   DF05 F0                 3232 	movx	@dptr,a
                           3233 ;	../../shared/src/ring_pll_cal.c:361: PLL_CAL_EN_RING = 0;
   DF06 90 83 10           3234 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_196
   DF09 E0                 3235 	movx	a,@dptr
   DF0A 54 7F              3236 	anl	a,#0x7f
   DF0C F0                 3237 	movx	@dptr,a
                           3238 ;	../../shared/src/ring_pll_cal.c:363: timeout=0;
   DF0D C2 03              3239 	clr	_timeout
                           3240 ;	../../shared/src/ring_pll_cal.c:364: if(cmx_RINGPLL_CAL_TIMEOUT_DIS==0) {
   DF0F 90 E6 49           3241 	mov	dptr,#(_CAL_TIME_OUT_AND_DIS + 0x0001)
   DF12 E0                 3242 	movx	a,@dptr
   DF13 20 E2 0A           3243 	jb	acc.2,00235$
                           3244 ;	../../shared/src/ring_pll_cal.c:365: timeout_start((uint16_t)RINGPLL_TIMEOUT_TIMER);
   DF16 75 8B F0           3245 	mov	_TMR1,#0xF0
   DF19 75 8D D8           3246 	mov	(_TMR1 >> 8),#0xD8
   DF1C D2 8E              3247 	setb	_TR1
   DF1E C2 03              3248 	clr	_timeout
                           3249 ;	../../shared/src/ring_pll_cal.c:370: while(!reg_ANA_PLL_LOCK_RING_RD && !timeout);
   DF20                    3250 00235$:
   DF20 90 A3 19           3251 	mov	dptr,#(_PM_CMN_REG1 + 0x0001)
   DF23 E0                 3252 	movx	a,@dptr
   DF24 20 E7 03           3253 	jb	acc.7,00237$
   DF27 30 03 F6           3254 	jnb	_timeout,00235$
   DF2A                    3255 00237$:
                           3256 ;	../../shared/src/ring_pll_cal.c:373: if(timeout) {
   DF2A 30 03 15           3257 	jnb	_timeout,00239$
                           3258 ;	../../shared/src/ring_pll_cal.c:377: cmx_PLL_CAL_RING_PASS = 0;
   DF2D 90 E6 4D           3259 	mov	dptr,#(_CAL_STATUS_READ + 0x0001)
   DF30 E0                 3260 	movx	a,@dptr
   DF31 54 F7              3261 	anl	a,#0xf7
   DF33 F0                 3262 	movx	@dptr,a
                           3263 ;	../../shared/src/ring_pll_cal.c:379: ringpll_load(PWR);
   DF34 75 82 00           3264 	mov	dpl,#0x00
   DF37 78 D4              3265 	mov	r0,#_ringpll_load
   DF39 79 87              3266 	mov	r1,#(_ringpll_load >> 8)
   DF3B 7A 02              3267 	mov	r2,#(_ringpll_load >> 16)
   DF3D 12 00 B3           3268 	lcall	__sdcc_banked_call
   DF40 80 0C              3269 	sjmp	00241$
   DF42                    3270 00239$:
                           3271 ;	../../shared/src/ring_pll_cal.c:382: ringpll_save(PWR);
   DF42 75 82 00           3272 	mov	dpl,#0x00
   DF45 78 61              3273 	mov	r0,#_ringpll_save
   DF47 79 87              3274 	mov	r1,#(_ringpll_save >> 8)
   DF49 7A 02              3275 	mov	r2,#(_ringpll_save >> 16)
   DF4B 12 00 B3           3276 	lcall	__sdcc_banked_call
                           3277 ;	../../shared/src/ring_pll_cal.c:385: exit_out:
   DF4E                    3278 00241$:
                           3279 ;	../../shared/src/ring_pll_cal.c:386: ringpll_save(CONT);
   DF4E 75 82 01           3280 	mov	dpl,#0x01
   DF51 78 61              3281 	mov	r0,#_ringpll_save
   DF53 79 87              3282 	mov	r1,#(_ringpll_save >> 8)
   DF55 7A 02              3283 	mov	r2,#(_ringpll_save >> 16)
   DF57 12 00 B3           3284 	lcall	__sdcc_banked_call
                           3285 ;	../../shared/src/ring_pll_cal.c:387: ring_size_counter_mid = (RINGPLL_CAL_COUNTER_SIZE >> 1);   //register give max value, use mid point as start
   DF5A 90 E6 46           3286 	mov	dptr,#(_CON_CAL_STEP_SIZE5 + 0x0002)
   DF5D E0                 3287 	movx	a,@dptr
   DF5E C3                 3288 	clr	c
   DF5F 13                 3289 	rrc	a
   DF60 FA                 3290 	mov	r2,a
   DF61 90 66 3F           3291 	mov	dptr,#_ring_size_counter_mid
   DF64 F0                 3292 	movx	@dptr,a
                           3293 ;	../../shared/src/ring_pll_cal.c:388: ring_size_counter = ring_size_counter_mid;
   DF65 90 66 3E           3294 	mov	dptr,#_ring_size_counter
   DF68 EA                 3295 	mov	a,r2
   DF69 F0                 3296 	movx	@dptr,a
                           3297 ;	../../shared/src/ring_pll_cal.c:392: cmx_PLL_CAL_RING_DONE = 1;
   DF6A 90 E6 4F           3298 	mov	dptr,#(_CAL_STATUS_READ + 0x0003)
   DF6D E0                 3299 	movx	a,@dptr
   DF6E 44 01              3300 	orl	a,#0x01
   DF70 F0                 3301 	movx	@dptr,a
   DF71 85 18 81           3302 	mov	sp,_bp
   DF74 D0 18              3303 	pop	_bp
   DF76 02 00 C5           3304 	ljmp	__sdcc_banked_ret
                           3305 ;------------------------------------------------------------
                           3306 ;Allocation info for local variables in function 'ring_pll_cont'
                           3307 ;------------------------------------------------------------
                           3308 ;------------------------------------------------------------
                           3309 ;	../../shared/src/ring_pll_cal.c:397: void ring_pll_cont(void) BANKING_CTRL {
                           3310 ;	-----------------------------------------
                           3311 ;	 function ring_pll_cont
                           3312 ;	-----------------------------------------
   DF79                    3313 _ring_pll_cont:
                           3314 ;	../../shared/src/ring_pll_cal.c:398: PHY_STATUS =  ST_RING_PLL_CONT;
   DF79 90 22 30           3315 	mov	dptr,#_MCU_STATUS0_LANE
   DF7C 74 3A              3316 	mov	a,#0x3A
   DF7E F0                 3317 	movx	@dptr,a
                           3318 ;	../../shared/src/ring_pll_cal.c:407: EA = 0;
   DF7F C2 AF              3319 	clr	_EA
                           3320 ;	../../shared/src/ring_pll_cal.c:408: ringpll_dac_fine = cmx_cal_sllp_dac_fine_ring[CONT][rate]; 
   DF81 90 E6 1F           3321 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0003)
   DF84 E0                 3322 	movx	a,@dptr
   DF85 25 E0              3323 	add	a,acc
   DF87 24 DC              3324 	add	a,#(_cmx_cal_sllp_dac_fine_ring + 0x0004)
   DF89 F5 82              3325 	mov	dpl,a
   DF8B E4                 3326 	clr	a
   DF8C 34 E5              3327 	addc	a,#((_cmx_cal_sllp_dac_fine_ring + 0x0004) >> 8)
   DF8E F5 83              3328 	mov	dph,a
   DF90 E0                 3329 	movx	a,@dptr
   DF91 FA                 3330 	mov	r2,a
   DF92 A3                 3331 	inc	dptr
   DF93 E0                 3332 	movx	a,@dptr
   DF94 FB                 3333 	mov	r3,a
   DF95 90 66 21           3334 	mov	dptr,#_ringpll_dac_fine
   DF98 EA                 3335 	mov	a,r2
   DF99 F0                 3336 	movx	@dptr,a
   DF9A A3                 3337 	inc	dptr
   DF9B EB                 3338 	mov	a,r3
   DF9C F0                 3339 	movx	@dptr,a
                           3340 ;	../../shared/src/ring_pll_cal.c:409: SLLP_DAC_FINE_RING_10_8 = (uint8_t)(ringpll_dac_fine>>8); 
   DF9D 8B 04              3341 	mov	ar4,r3
   DF9F 90 83 08           3342 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_194
   DFA2 EC                 3343 	mov	a,r4
   DFA3 C4                 3344 	swap	a
   DFA4 23                 3345 	rl	a
   DFA5 54 E0              3346 	anl	a,#(0xe0&0xe0)
   DFA7 F5 F0              3347 	mov	b,a
   DFA9 E0                 3348 	movx	a,@dptr
   DFAA 54 1F              3349 	anl	a,#0x1f
   DFAC 45 F0              3350 	orl	a,b
   DFAE F0                 3351 	movx	@dptr,a
                           3352 ;	../../shared/src/ring_pll_cal.c:410: SLLP_DAC_FINE_RING_7_0 = (uint8_t)ringpll_dac_fine;
   DFAF 8A 04              3353 	mov	ar4,r2
   DFB1 90 83 0C           3354 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_195
   DFB4 EC                 3355 	mov	a,r4
   DFB5 F0                 3356 	movx	@dptr,a
                           3357 ;	../../shared/src/ring_pll_cal.c:411: EA = 1;
   DFB6 D2 AF              3358 	setb	_EA
                           3359 ;	../../shared/src/ring_pll_cal.c:413: if ((PLL_VCON_OVERTH_RING==0&&cmx_PLL_VCON_POLARITY_INV==0) || (PLL_VCON_OVERTH_RING&&cmx_PLL_VCON_POLARITY_INV) )
   DFB8 90 A3 31           3360 	mov	dptr,#(_PLLCAL_REG1 + 0x0001)
   DFBB E0                 3361 	movx	a,@dptr
   DFBC 20 E2 07           3362 	jb	acc.2,00106$
   DFBF 90 E6 44           3363 	mov	dptr,#_CON_CAL_STEP_SIZE5
   DFC2 E0                 3364 	movx	a,@dptr
   DFC3 30 E1 0E           3365 	jnb	acc.1,00101$
   DFC6                    3366 00106$:
   DFC6 90 A3 31           3367 	mov	dptr,#(_PLLCAL_REG1 + 0x0001)
   DFC9 E0                 3368 	movx	a,@dptr
   DFCA 30 E2 10           3369 	jnb	acc.2,00102$
   DFCD 90 E6 44           3370 	mov	dptr,#_CON_CAL_STEP_SIZE5
   DFD0 E0                 3371 	movx	a,@dptr
   DFD1 30 E1 09           3372 	jnb	acc.1,00102$
   DFD4                    3373 00101$:
                           3374 ;	../../shared/src/ring_pll_cal.c:414: ring_size_counter ++;
   DFD4 90 66 3E           3375 	mov	dptr,#_ring_size_counter
   DFD7 E0                 3376 	movx	a,@dptr
   DFD8 24 01              3377 	add	a,#0x01
   DFDA F0                 3378 	movx	@dptr,a
   DFDB 80 09              3379 	sjmp	00103$
   DFDD                    3380 00102$:
                           3381 ;	../../shared/src/ring_pll_cal.c:416: ring_size_counter --;
   DFDD 90 66 3E           3382 	mov	dptr,#_ring_size_counter
   DFE0 E0                 3383 	movx	a,@dptr
   DFE1 14                 3384 	dec	a
   DFE2 90 66 3E           3385 	mov	dptr,#_ring_size_counter
   DFE5 F0                 3386 	movx	@dptr,a
   DFE6                    3387 00103$:
                           3388 ;	../../shared/src/ring_pll_cal.c:422: if (ring_size_counter >= RINGPLL_CAL_COUNTER_SIZE) {
   DFE6 90 E6 46           3389 	mov	dptr,#(_CON_CAL_STEP_SIZE5 + 0x0002)
   DFE9 E0                 3390 	movx	a,@dptr
   DFEA FC                 3391 	mov	r4,a
   DFEB 90 66 3E           3392 	mov	dptr,#_ring_size_counter
   DFEE E0                 3393 	movx	a,@dptr
   DFEF FD                 3394 	mov	r5,a
   DFF0 FE                 3395 	mov	r6,a
   DFF1 EE                 3396 	mov	a,r6
   DFF2 B5 04 00           3397 	cjne	a,ar4,00132$
   DFF5                    3398 00132$:
   DFF5 40 32              3399 	jc	00117$
                           3400 ;	../../shared/src/ring_pll_cal.c:423: ring_size_counter = ring_size_counter_mid;
   DFF7 90 66 3F           3401 	mov	dptr,#_ring_size_counter_mid
   DFFA E0                 3402 	movx	a,@dptr
   DFFB 90 66 3E           3403 	mov	dptr,#_ring_size_counter
   DFFE F0                 3404 	movx	@dptr,a
                           3405 ;	../../shared/src/ring_pll_cal.c:424: if ( ringpll_dac_fine < (dac_fine_max_value - RINGPLL_CAL_FINE_STEP))
   DFFF 90 E6 45           3406 	mov	dptr,#(_CON_CAL_STEP_SIZE5 + 0x0001)
   E002 E0                 3407 	movx	a,@dptr
   E003 FC                 3408 	mov	r4,a
   E004 7E 00              3409 	mov	r6,#0x00
   E006 74 FF              3410 	mov	a,#0xFF
   E008 C3                 3411 	clr	c
   E009 9C                 3412 	subb	a,r4
   E00A FC                 3413 	mov	r4,a
   E00B 74 07              3414 	mov	a,#0x07
   E00D 9E                 3415 	subb	a,r6
   E00E FE                 3416 	mov	r6,a
   E00F C3                 3417 	clr	c
   E010 EA                 3418 	mov	a,r2
   E011 9C                 3419 	subb	a,r4
   E012 EB                 3420 	mov	a,r3
   E013 9E                 3421 	subb	a,r6
   E014 50 53              3422 	jnc	00120$
                           3423 ;	../../shared/src/ring_pll_cal.c:425: ringpll_dac_fine += RINGPLL_CAL_FINE_STEP;
   E016 90 E6 45           3424 	mov	dptr,#(_CON_CAL_STEP_SIZE5 + 0x0001)
   E019 E0                 3425 	movx	a,@dptr
   E01A FC                 3426 	mov	r4,a
   E01B 7E 00              3427 	mov	r6,#0x00
   E01D 90 66 21           3428 	mov	dptr,#_ringpll_dac_fine
   E020 EC                 3429 	mov	a,r4
   E021 2A                 3430 	add	a,r2
   E022 F0                 3431 	movx	@dptr,a
   E023 EE                 3432 	mov	a,r6
   E024 3B                 3433 	addc	a,r3
   E025 A3                 3434 	inc	dptr
   E026 F0                 3435 	movx	@dptr,a
                           3436 ;	../../shared/src/ring_pll_cal.c:427: goto ringpll_cont_ext0;
   E027 80 2B              3437 	sjmp	00118$
   E029                    3438 00117$:
                           3439 ;	../../shared/src/ring_pll_cal.c:429: else if (ring_size_counter == 0) {
   E029 ED                 3440 	mov	a,r5
   E02A 70 3D              3441 	jnz	00120$
                           3442 ;	../../shared/src/ring_pll_cal.c:430: ring_size_counter = ring_size_counter_mid;
   E02C 90 66 3F           3443 	mov	dptr,#_ring_size_counter_mid
   E02F E0                 3444 	movx	a,@dptr
   E030 90 66 3E           3445 	mov	dptr,#_ring_size_counter
   E033 F0                 3446 	movx	@dptr,a
                           3447 ;	../../shared/src/ring_pll_cal.c:431: if ( ringpll_dac_fine > RINGPLL_CAL_FINE_STEP )
   E034 90 E6 45           3448 	mov	dptr,#(_CON_CAL_STEP_SIZE5 + 0x0001)
   E037 E0                 3449 	movx	a,@dptr
   E038 FC                 3450 	mov	r4,a
   E039 7D 00              3451 	mov	r5,#0x00
   E03B C3                 3452 	clr	c
   E03C EC                 3453 	mov	a,r4
   E03D 9A                 3454 	subb	a,r2
   E03E ED                 3455 	mov	a,r5
   E03F 9B                 3456 	subb	a,r3
   E040 50 27              3457 	jnc	00120$
                           3458 ;	../../shared/src/ring_pll_cal.c:432: ringpll_dac_fine -= RINGPLL_CAL_FINE_STEP;
   E042 90 E6 45           3459 	mov	dptr,#(_CON_CAL_STEP_SIZE5 + 0x0001)
   E045 E0                 3460 	movx	a,@dptr
   E046 FC                 3461 	mov	r4,a
   E047 7D 00              3462 	mov	r5,#0x00
   E049 90 66 21           3463 	mov	dptr,#_ringpll_dac_fine
   E04C EA                 3464 	mov	a,r2
   E04D C3                 3465 	clr	c
   E04E 9C                 3466 	subb	a,r4
   E04F F0                 3467 	movx	@dptr,a
   E050 EB                 3468 	mov	a,r3
   E051 9D                 3469 	subb	a,r5
   E052 A3                 3470 	inc	dptr
   E053 F0                 3471 	movx	@dptr,a
                           3472 ;	../../shared/src/ring_pll_cal.c:437: goto ringpll_cont_ext0;
   E054                    3473 00118$:
                           3474 ;	../../shared/src/ring_pll_cal.c:439: ringpll_dac_fine_output();
   E054 78 5E              3475 	mov	r0,#_ringpll_dac_fine_output
   E056 79 88              3476 	mov	r1,#(_ringpll_dac_fine_output >> 8)
   E058 7A 02              3477 	mov	r2,#(_ringpll_dac_fine_output >> 16)
   E05A 12 00 B3           3478 	lcall	__sdcc_banked_call
                           3479 ;	../../shared/src/ring_pll_cal.c:444: ringpll_save(CONT);
   E05D 75 82 01           3480 	mov	dpl,#0x01
   E060 78 61              3481 	mov	r0,#_ringpll_save
   E062 79 87              3482 	mov	r1,#(_ringpll_save >> 8)
   E064 7A 02              3483 	mov	r2,#(_ringpll_save >> 16)
   E066 12 00 B3           3484 	lcall	__sdcc_banked_call
                           3485 ;	../../shared/src/ring_pll_cal.c:446: ringpll_cont_ext0:
   E069                    3486 00120$:
   E069 02 00 C5           3487 	ljmp	__sdcc_banked_ret
                           3488 ;------------------------------------------------------------
                           3489 ;Allocation info for local variables in function 'ring_pll_fast_cal'
                           3490 ;------------------------------------------------------------
                           3491 ;i                         Allocated to stack - offset 1
                           3492 ;cnt_rdy                   Allocated to registers r6 
                           3493 ;save_FBDIV_h              Allocated to registers r6 
                           3494 ;save_FBDIV_l              Allocated to stack - offset 2
                           3495 ;save_FBCK_SEL             Allocated to stack - offset 3
                           3496 ;first_op_ring             Allocated to stack - offset 4
                           3497 ;Fmea                      Allocated to stack - offset 5
                           3498 ;Fmea_prev                 Allocated to stack - offset 7
                           3499 ;Fdiff                     Allocated to stack - offset 9
                           3500 ;delta_code                Allocated to stack - offset 11
                           3501 ;delta_code_first          Allocated to registers r4 r5 
                           3502 ;delta_code_nom            Allocated to registers r2 r3 
                           3503 ;sloc0                     Allocated to stack - offset 13
                           3504 ;------------------------------------------------------------
                           3505 ;	../../shared/src/ring_pll_cal.c:455: void ring_pll_fast_cal(void) BANKING_CTRL {
                           3506 ;	-----------------------------------------
                           3507 ;	 function ring_pll_fast_cal
                           3508 ;	-----------------------------------------
   E06C                    3509 _ring_pll_fast_cal:
   E06C C0 18              3510 	push	_bp
   E06E E5 81              3511 	mov	a,sp
   E070 F5 18              3512 	mov	_bp,a
   E072 24 0D              3513 	add	a,#0x0d
   E074 F5 81              3514 	mov	sp,a
                           3515 ;	../../shared/src/ring_pll_cal.c:461: Fmea_prev = 0;
   E076 E5 18              3516 	mov	a,_bp
   E078 24 07              3517 	add	a,#0x07
   E07A F8                 3518 	mov	r0,a
   E07B 76 00              3519 	mov	@r0,#0x00
   E07D 08                 3520 	inc	r0
   E07E 76 00              3521 	mov	@r0,#0x00
                           3522 ;	../../shared/src/ring_pll_cal.c:463: delta_code_first = 0;
   E080 7C 00              3523 	mov	r4,#0x00
   E082 7D 00              3524 	mov	r5,#0x00
                           3525 ;	../../shared/src/ring_pll_cal.c:471: timeout=0;
   E084 C2 03              3526 	clr	_timeout
                           3527 ;	../../shared/src/ring_pll_cal.c:472: if(cmx_RINGPLL_CAL_TIMEOUT_DIS==0) {
   E086 90 E6 49           3528 	mov	dptr,#(_CAL_TIME_OUT_AND_DIS + 0x0001)
   E089 E0                 3529 	movx	a,@dptr
   E08A 20 E2 0A           3530 	jb	acc.2,00102$
                           3531 ;	../../shared/src/ring_pll_cal.c:473: timeout_start((uint16_t)RINGPLL_TIMEOUT_TIMER);
   E08D 75 8B F0           3532 	mov	_TMR1,#0xF0
   E090 75 8D D8           3533 	mov	(_TMR1 >> 8),#0xD8
   E093 D2 8E              3534 	setb	_TR1
   E095 C2 03              3535 	clr	_timeout
   E097                    3536 00102$:
                           3537 ;	../../shared/src/ring_pll_cal.c:487: if(reg_ANA_PU_PLL_DLY_RING==0) {
   E097 90 A3 4D           3538 	mov	dptr,#(_PM_CMN_REG2 + 0x0001)
   E09A E0                 3539 	movx	a,@dptr
   E09B 20 E2 35           3540 	jb	acc.2,00104$
                           3541 ;	../../shared/src/ring_pll_cal.c:488: reg_ANA_PU_PLL_RING = 1;
   E09E 90 A3 24           3542 	mov	dptr,#_INPUT_CMN_PIN_REG2
   E0A1 E0                 3543 	movx	a,@dptr
   E0A2 44 20              3544 	orl	a,#0x20
   E0A4 F0                 3545 	movx	@dptr,a
                           3546 ;	../../shared/src/ring_pll_cal.c:489: delay01(5);
   E0A5 90 00 05           3547 	mov	dptr,#0x0005
   E0A8 C0 04              3548 	push	ar4
   E0AA C0 05              3549 	push	ar5
   E0AC 78 16              3550 	mov	r0,#_delay01
   E0AE 79 BC              3551 	mov	r1,#(_delay01 >> 8)
   E0B0 7A 02              3552 	mov	r2,#(_delay01 >> 16)
   E0B2 12 00 B3           3553 	lcall	__sdcc_banked_call
                           3554 ;	../../shared/src/ring_pll_cal.c:490: reg_ANA_PU_PLL_DLY_RING = 1;
   E0B5 90 A3 4D           3555 	mov	dptr,#(_PM_CMN_REG2 + 0x0001)
   E0B8 E0                 3556 	movx	a,@dptr
   E0B9 44 04              3557 	orl	a,#0x04
   E0BB F0                 3558 	movx	@dptr,a
                           3559 ;	../../shared/src/ring_pll_cal.c:491: delay01(5);
   E0BC 90 00 05           3560 	mov	dptr,#0x0005
   E0BF 78 16              3561 	mov	r0,#_delay01
   E0C1 79 BC              3562 	mov	r1,#(_delay01 >> 8)
   E0C3 7A 02              3563 	mov	r2,#(_delay01 >> 16)
   E0C5 12 00 B3           3564 	lcall	__sdcc_banked_call
   E0C8 D0 05              3565 	pop	ar5
   E0CA D0 04              3566 	pop	ar4
                           3567 ;	../../shared/src/ring_pll_cal.c:492: reg_RESET_ANA_RING = 0;
   E0CC 90 A3 33           3568 	mov	dptr,#(_PLLCAL_REG1 + 0x0003)
   E0CF E0                 3569 	movx	a,@dptr
   E0D0 54 F7              3570 	anl	a,#0xf7
   E0D2 F0                 3571 	movx	@dptr,a
   E0D3                    3572 00104$:
                           3573 ;	../../shared/src/ring_pll_cal.c:496: PLL_SHRTR_RING = 1;
   E0D3 C0 04              3574 	push	ar4
   E0D5 C0 05              3575 	push	ar5
   E0D7 90 83 10           3576 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_196
   E0DA E0                 3577 	movx	a,@dptr
   E0DB 44 40              3578 	orl	a,#0x40
   E0DD F0                 3579 	movx	@dptr,a
                           3580 ;	../../shared/src/ring_pll_cal.c:497: PLL_CAL_EN_RING = 1;
   E0DE 90 83 10           3581 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_196
   E0E1 E0                 3582 	movx	a,@dptr
   E0E2 44 80              3583 	orl	a,#0x80
   E0E4 F0                 3584 	movx	@dptr,a
                           3585 ;	../../shared/src/ring_pll_cal.c:498: reg_FBC_CNT_START = 0;
   E0E5 90 A3 30           3586 	mov	dptr,#_PLLCAL_REG1
   E0E8 E0                 3587 	movx	a,@dptr
   E0E9 54 FE              3588 	anl	a,#0xfe
   E0EB F0                 3589 	movx	@dptr,a
                           3590 ;	../../shared/src/ring_pll_cal.c:505: save_FBDIV_h = reg_PLL_FBDIV_RING_9_8;
   E0EC 90 82 F0           3591 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_188
   E0EF E0                 3592 	movx	a,@dptr
   E0F0 03                 3593 	rr	a
   E0F1 54 03              3594 	anl	a,#0x03
   E0F3 FE                 3595 	mov	r6,a
                           3596 ;	../../shared/src/ring_pll_cal.c:506: save_FBDIV_l = reg_PLL_FBDIV_RING_7_0;
   E0F4 90 82 F4           3597 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_189
   E0F7 E0                 3598 	movx	a,@dptr
   E0F8 FF                 3599 	mov	r7,a
   E0F9 A8 18              3600 	mov	r0,_bp
   E0FB 08                 3601 	inc	r0
   E0FC 08                 3602 	inc	r0
   E0FD A6 07              3603 	mov	@r0,ar7
                           3604 ;	../../shared/src/ring_pll_cal.c:507: save_FBCK_SEL = reg_ANA_FBCK_SEL_RING;
   E0FF 90 A3 18           3605 	mov	dptr,#_PM_CMN_REG1
   E102 E0                 3606 	movx	a,@dptr
   E103 03                 3607 	rr	a
   E104 03                 3608 	rr	a
   E105 54 01              3609 	anl	a,#0x01
   E107 FC                 3610 	mov	r4,a
   E108 E5 18              3611 	mov	a,_bp
   E10A 24 03              3612 	add	a,#0x03
   E10C F8                 3613 	mov	r0,a
   E10D A6 04              3614 	mov	@r0,ar4
                           3615 ;	../../shared/src/ring_pll_cal.c:509: ringloadSpdtbl_4_fcnt();
   E10F C0 04              3616 	push	ar4
   E111 C0 05              3617 	push	ar5
   E113 C0 06              3618 	push	ar6
   E115 12 50 7D           3619 	lcall	_ringloadSpdtbl_4_fcnt
                           3620 ;	../../shared/src/ring_pll_cal.c:511: ringpll_load(CONT);
   E118 75 82 01           3621 	mov	dpl,#0x01
   E11B 78 D4              3622 	mov	r0,#_ringpll_load
   E11D 79 87              3623 	mov	r1,#(_ringpll_load >> 8)
   E11F 7A 02              3624 	mov	r2,#(_ringpll_load >> 16)
   E121 12 00 B3           3625 	lcall	__sdcc_banked_call
                           3626 ;	../../shared/src/ring_pll_cal.c:512: SLLP_DAC_VALID = 1;  SLLP_DAC_VALID = 0;
   E124 90 83 04           3627 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   E127 E0                 3628 	movx	a,@dptr
   E128 44 40              3629 	orl	a,#0x40
   E12A F0                 3630 	movx	@dptr,a
   E12B E0                 3631 	movx	a,@dptr
   E12C 54 BF              3632 	anl	a,#0xbf
   E12E F0                 3633 	movx	@dptr,a
                           3634 ;	../../shared/src/ring_pll_cal.c:514: delay01(40); //first DAC_VALID need 8uS settling time from next new DAC value
   E12F 90 00 28           3635 	mov	dptr,#0x0028
   E132 78 16              3636 	mov	r0,#_delay01
   E134 79 BC              3637 	mov	r1,#(_delay01 >> 8)
   E136 7A 02              3638 	mov	r2,#(_delay01 >> 16)
   E138 12 00 B3           3639 	lcall	__sdcc_banked_call
   E13B D0 06              3640 	pop	ar6
   E13D D0 05              3641 	pop	ar5
   E13F D0 04              3642 	pop	ar4
                           3643 ;	../../shared/src/ring_pll_cal.c:516: reg_FBC_PLLCAL_RING_EN = 1;
   E141 90 A3 31           3644 	mov	dptr,#(_PLLCAL_REG1 + 0x0001)
   E144 E0                 3645 	movx	a,@dptr
   E145 44 02              3646 	orl	a,#0x02
   E147 F0                 3647 	movx	@dptr,a
                           3648 ;	../../shared/src/ring_pll_cal.c:518: i = 0;
   E148 E5 18              3649 	mov	a,_bp
   E14A 24 0D              3650 	add	a,#0x0d
   E14C F8                 3651 	mov	r0,a
   E14D 76 00              3652 	mov	@r0,#0x00
                           3653 ;	../../shared/src/ring_pll_cal.c:519: first_op_ring = 0;
   E14F E5 18              3654 	mov	a,_bp
   E151 24 04              3655 	add	a,#0x04
   E153 F8                 3656 	mov	r0,a
   E154 76 00              3657 	mov	@r0,#0x00
                           3658 ;	../../shared/src/ring_pll_cal.c:662: pll_clk_ready_ring_1();
   E156 D0 05              3659 	pop	ar5
   E158 D0 04              3660 	pop	ar4
                           3661 ;	../../shared/src/ring_pll_cal.c:521: do {
   E15A A8 18              3662 	mov	r0,_bp
   E15C 08                 3663 	inc	r0
   E15D 76 00              3664 	mov	@r0,#0x00
   E15F                    3665 00142$:
                           3666 ;	../../shared/src/ring_pll_cal.c:529: cnt_rdy = reg_FBC_PLLCAL_CNT_READY;
   E15F C0 06              3667 	push	ar6
   E161 90 A3 30           3668 	mov	dptr,#_PLLCAL_REG1
   E164 E0                 3669 	movx	a,@dptr
   E165 03                 3670 	rr	a
   E166 54 01              3671 	anl	a,#0x01
   E168 FE                 3672 	mov	r6,a
                           3673 ;	../../shared/src/ring_pll_cal.c:530: reg_FBC_CNT_START = 1;
   E169 90 A3 30           3674 	mov	dptr,#_PLLCAL_REG1
   E16C E0                 3675 	movx	a,@dptr
   E16D 44 01              3676 	orl	a,#0x01
   E16F F0                 3677 	movx	@dptr,a
                           3678 ;	../../shared/src/ring_pll_cal.c:531: if( cnt_rdy ) while(reg_FBC_PLLCAL_CNT_READY && !timeout);
   E170 EE                 3679 	mov	a,r6
   E171 D0 06              3680 	pop	ar6
   E173 60 0A              3681 	jz	00112$
   E175                    3682 00106$:
   E175 90 A3 30           3683 	mov	dptr,#_PLLCAL_REG1
   E178 E0                 3684 	movx	a,@dptr
   E179 30 E1 03           3685 	jnb	acc.1,00112$
   E17C 30 03 F6           3686 	jnb	_timeout,00106$
                           3687 ;	../../shared/src/ring_pll_cal.c:532: while(!reg_FBC_PLLCAL_CNT_READY && !timeout);
   E17F                    3688 00112$:
   E17F 90 A3 30           3689 	mov	dptr,#_PLLCAL_REG1
   E182 E0                 3690 	movx	a,@dptr
   E183 20 E1 03           3691 	jb	acc.1,00114$
   E186 30 03 F6           3692 	jnb	_timeout,00112$
   E189                    3693 00114$:
                           3694 ;	../../shared/src/ring_pll_cal.c:533: reg_FBC_CNT_START = 0;
   E189 90 A3 30           3695 	mov	dptr,#_PLLCAL_REG1
   E18C E0                 3696 	movx	a,@dptr
   E18D 54 FE              3697 	anl	a,#0xfe
   E18F F0                 3698 	movx	@dptr,a
                           3699 ;	../../shared/src/ring_pll_cal.c:535: if(timeout) {
   E190 30 03 03           3700 	jnb	_timeout,00184$
   E193 02 E3 CE           3701 	ljmp	00144$
   E196                    3702 00184$:
                           3703 ;	../../shared/src/ring_pll_cal.c:544: Fmea = reg_FBC_PLLCAL_CNT_15_0;
   E196 C0 06              3704 	push	ar6
   E198 90 A3 2E           3705 	mov	dptr,#(_PLLCAL_REG0 + 0x0002)
   E19B E0                 3706 	movx	a,@dptr
   E19C FE                 3707 	mov	r6,a
   E19D A3                 3708 	inc	dptr
   E19E E0                 3709 	movx	a,@dptr
   E19F FA                 3710 	mov	r2,a
   E1A0 E5 18              3711 	mov	a,_bp
   E1A2 24 05              3712 	add	a,#0x05
   E1A4 F8                 3713 	mov	r0,a
   E1A5 A6 06              3714 	mov	@r0,ar6
   E1A7 08                 3715 	inc	r0
   E1A8 A6 02              3716 	mov	@r0,ar2
                           3717 ;	../../shared/src/ring_pll_cal.c:556: if((Fmea >= (Ftarget_ring-TARGET_RANGE)) && (Fmea <= (Ftarget_ring+TARGET_RANGE))) {
   E1AA 90 E6 18           3718 	mov	dptr,#_CONTROL_CONFIG5
   E1AD E0                 3719 	movx	a,@dptr
   E1AE FA                 3720 	mov	r2,a
   E1AF A3                 3721 	inc	dptr
   E1B0 E0                 3722 	movx	a,@dptr
   E1B1 FB                 3723 	mov	r3,a
   E1B2 1A                 3724 	dec	r2
   E1B3 BA FF 01           3725 	cjne	r2,#0xff,00185$
   E1B6 1B                 3726 	dec	r3
   E1B7                    3727 00185$:
   E1B7 E5 18              3728 	mov	a,_bp
   E1B9 24 05              3729 	add	a,#0x05
   E1BB F8                 3730 	mov	r0,a
   E1BC C3                 3731 	clr	c
   E1BD E6                 3732 	mov	a,@r0
   E1BE 9A                 3733 	subb	a,r2
   E1BF 08                 3734 	inc	r0
   E1C0 E6                 3735 	mov	a,@r0
   E1C1 9B                 3736 	subb	a,r3
   E1C2 D0 06              3737 	pop	ar6
   E1C4 40 35              3738 	jc	00139$
   E1C6 90 E6 18           3739 	mov	dptr,#_CONTROL_CONFIG5
   E1C9 E0                 3740 	movx	a,@dptr
   E1CA FA                 3741 	mov	r2,a
   E1CB A3                 3742 	inc	dptr
   E1CC E0                 3743 	movx	a,@dptr
   E1CD FB                 3744 	mov	r3,a
   E1CE 0A                 3745 	inc	r2
   E1CF BA 00 01           3746 	cjne	r2,#0x00,00187$
   E1D2 0B                 3747 	inc	r3
   E1D3                    3748 00187$:
   E1D3 E5 18              3749 	mov	a,_bp
   E1D5 24 05              3750 	add	a,#0x05
   E1D7 F8                 3751 	mov	r0,a
   E1D8 C3                 3752 	clr	c
   E1D9 EA                 3753 	mov	a,r2
   E1DA 96                 3754 	subb	a,@r0
   E1DB EB                 3755 	mov	a,r3
   E1DC 08                 3756 	inc	r0
   E1DD 96                 3757 	subb	a,@r0
   E1DE 40 1B              3758 	jc	00139$
                           3759 ;	../../shared/src/ring_pll_cal.c:557: if (i == 0)	first_op_ring = 1;
   E1E0 A8 18              3760 	mov	r0,_bp
   E1E2 08                 3761 	inc	r0
   E1E3 E6                 3762 	mov	a,@r0
   E1E4 70 07              3763 	jnz	00118$
   E1E6 E5 18              3764 	mov	a,_bp
   E1E8 24 04              3765 	add	a,#0x04
   E1EA F8                 3766 	mov	r0,a
   E1EB 76 01              3767 	mov	@r0,#0x01
   E1ED                    3768 00118$:
                           3769 ;	../../shared/src/ring_pll_cal.c:558: if (i >= min_step_number) {
   E1ED A8 18              3770 	mov	r0,_bp
   E1EF 08                 3771 	inc	r0
   E1F0 B6 01 00           3772 	cjne	@r0,#0x01,00190$
   E1F3                    3773 00190$:
   E1F3 50 03              3774 	jnc	00191$
   E1F5 02 E3 AF           3775 	ljmp	00140$
   E1F8                    3776 00191$:
                           3777 ;	../../shared/src/ring_pll_cal.c:562: break;  //1
   E1F8 02 E3 CE           3778 	ljmp	00144$
   E1FB                    3779 00139$:
                           3780 ;	../../shared/src/ring_pll_cal.c:567: if((i == 0)||(first_op_ring == 1)) {
   E1FB A8 18              3781 	mov	r0,_bp
   E1FD 08                 3782 	inc	r0
   E1FE E6                 3783 	mov	a,@r0
   E1FF 60 08              3784 	jz	00124$
   E201 E5 18              3785 	mov	a,_bp
   E203 24 04              3786 	add	a,#0x04
   E205 F8                 3787 	mov	r0,a
   E206 B6 01 4B           3788 	cjne	@r0,#0x01,00125$
   E209                    3789 00124$:
                           3790 ;	../../shared/src/ring_pll_cal.c:568: first_op_ring = 0;
   E209 C0 06              3791 	push	ar6
   E20B E5 18              3792 	mov	a,_bp
   E20D 24 04              3793 	add	a,#0x04
   E20F F8                 3794 	mov	r0,a
   E210 76 00              3795 	mov	@r0,#0x00
                           3796 ;	../../shared/src/ring_pll_cal.c:569: delta_code = (Ftarget_ring - Fmea)<<code_ratio; //5; // * code_ratio;
   E212 90 E6 18           3797 	mov	dptr,#_CONTROL_CONFIG5
   E215 E0                 3798 	movx	a,@dptr
   E216 FA                 3799 	mov	r2,a
   E217 A3                 3800 	inc	dptr
   E218 E0                 3801 	movx	a,@dptr
   E219 FB                 3802 	mov	r3,a
   E21A E5 18              3803 	mov	a,_bp
   E21C 24 05              3804 	add	a,#0x05
   E21E F8                 3805 	mov	r0,a
   E21F EA                 3806 	mov	a,r2
   E220 C3                 3807 	clr	c
   E221 96                 3808 	subb	a,@r0
   E222 FA                 3809 	mov	r2,a
   E223 EB                 3810 	mov	a,r3
   E224 08                 3811 	inc	r0
   E225 96                 3812 	subb	a,@r0
   E226 FB                 3813 	mov	r3,a
   E227 90 E6 1A           3814 	mov	dptr,#(_CONTROL_CONFIG5 + 0x0002)
   E22A E0                 3815 	movx	a,@dptr
   E22B FE                 3816 	mov	r6,a
   E22C 8E F0              3817 	mov	b,r6
   E22E 05 F0              3818 	inc	b
   E230 80 06              3819 	sjmp	00196$
   E232                    3820 00195$:
   E232 EA                 3821 	mov	a,r2
   E233 2A                 3822 	add	a,r2
   E234 FA                 3823 	mov	r2,a
   E235 EB                 3824 	mov	a,r3
   E236 33                 3825 	rlc	a
   E237 FB                 3826 	mov	r3,a
   E238                    3827 00196$:
   E238 D5 F0 F7           3828 	djnz	b,00195$
   E23B E5 18              3829 	mov	a,_bp
   E23D 24 0B              3830 	add	a,#0x0b
   E23F F8                 3831 	mov	r0,a
   E240 A6 02              3832 	mov	@r0,ar2
   E242 08                 3833 	inc	r0
   E243 A6 03              3834 	mov	@r0,ar3
                           3835 ;	../../shared/src/ring_pll_cal.c:570: delta_code_first = delta_code;
   E245 E5 18              3836 	mov	a,_bp
   E247 24 0B              3837 	add	a,#0x0b
   E249 F8                 3838 	mov	r0,a
   E24A 86 04              3839 	mov	ar4,@r0
   E24C 08                 3840 	inc	r0
   E24D 86 05              3841 	mov	ar5,@r0
   E24F D0 06              3842 	pop	ar6
   E251 02 E3 19           3843 	ljmp	00126$
   E254                    3844 00125$:
                           3845 ;	../../shared/src/ring_pll_cal.c:573: Fdiff = Fmea - Fmea_prev;
   E254 C0 06              3846 	push	ar6
   E256 E5 18              3847 	mov	a,_bp
   E258 24 05              3848 	add	a,#0x05
   E25A F8                 3849 	mov	r0,a
   E25B E5 18              3850 	mov	a,_bp
   E25D 24 07              3851 	add	a,#0x07
   E25F F9                 3852 	mov	r1,a
   E260 E6                 3853 	mov	a,@r0
   E261 C3                 3854 	clr	c
   E262 97                 3855 	subb	a,@r1
   E263 FA                 3856 	mov	r2,a
   E264 08                 3857 	inc	r0
   E265 E6                 3858 	mov	a,@r0
   E266 09                 3859 	inc	r1
   E267 97                 3860 	subb	a,@r1
   E268 FB                 3861 	mov	r3,a
   E269 E5 18              3862 	mov	a,_bp
   E26B 24 09              3863 	add	a,#0x09
   E26D F8                 3864 	mov	r0,a
   E26E A6 02              3865 	mov	@r0,ar2
   E270 08                 3866 	inc	r0
   E271 A6 03              3867 	mov	@r0,ar3
                           3868 ;	../../shared/src/ring_pll_cal.c:574: delta_code_nom = (Ftarget_ring - Fmea) * delta_code_first;
   E273 90 E6 18           3869 	mov	dptr,#_CONTROL_CONFIG5
   E276 E0                 3870 	movx	a,@dptr
   E277 FE                 3871 	mov	r6,a
   E278 A3                 3872 	inc	dptr
   E279 E0                 3873 	movx	a,@dptr
   E27A FA                 3874 	mov	r2,a
   E27B E5 18              3875 	mov	a,_bp
   E27D 24 05              3876 	add	a,#0x05
   E27F F8                 3877 	mov	r0,a
   E280 EE                 3878 	mov	a,r6
   E281 C3                 3879 	clr	c
   E282 96                 3880 	subb	a,@r0
   E283 FE                 3881 	mov	r6,a
   E284 EA                 3882 	mov	a,r2
   E285 08                 3883 	inc	r0
   E286 96                 3884 	subb	a,@r0
   E287 FA                 3885 	mov	r2,a
   E288 8C 03              3886 	mov	ar3,r4
   E28A 8D 07              3887 	mov	ar7,r5
   E28C C0 06              3888 	push	ar6
   E28E C0 03              3889 	push	ar3
   E290 C0 07              3890 	push	ar7
   E292 8E 82              3891 	mov	dpl,r6
   E294 8A 83              3892 	mov	dph,r2
   E296 12 7C E3           3893 	lcall	__mulint
   E299 AA 82              3894 	mov	r2,dpl
   E29B AB 83              3895 	mov	r3,dph
   E29D 15 81              3896 	dec	sp
   E29F 15 81              3897 	dec	sp
   E2A1 D0 06              3898 	pop	ar6
                           3899 ;	../../shared/src/ring_pll_cal.c:575: if (Fdiff == 0)
   E2A3 D0 06              3900 	pop	ar6
   E2A5 E5 18              3901 	mov	a,_bp
   E2A7 24 09              3902 	add	a,#0x09
   E2A9 F8                 3903 	mov	r0,a
   E2AA E6                 3904 	mov	a,@r0
   E2AB 08                 3905 	inc	r0
   E2AC 46                 3906 	orl	a,@r0
   E2AD 70 37              3907 	jnz	00122$
                           3908 ;	../../shared/src/ring_pll_cal.c:576: delta_code = (Ftarget_ring - Fmea) * fdiff_0;
   E2AF 90 E6 18           3909 	mov	dptr,#_CONTROL_CONFIG5
   E2B2 E0                 3910 	movx	a,@dptr
   E2B3 FA                 3911 	mov	r2,a
   E2B4 A3                 3912 	inc	dptr
   E2B5 E0                 3913 	movx	a,@dptr
   E2B6 FB                 3914 	mov	r3,a
   E2B7 E5 18              3915 	mov	a,_bp
   E2B9 24 05              3916 	add	a,#0x05
   E2BB F8                 3917 	mov	r0,a
   E2BC EA                 3918 	mov	a,r2
   E2BD C3                 3919 	clr	c
   E2BE 96                 3920 	subb	a,@r0
   E2BF FA                 3921 	mov	r2,a
   E2C0 EB                 3922 	mov	a,r3
   E2C1 08                 3923 	inc	r0
   E2C2 96                 3924 	subb	a,@r0
   E2C3 FB                 3925 	mov	r3,a
   E2C4 C0 06              3926 	push	ar6
   E2C6 C0 02              3927 	push	ar2
   E2C8 C0 03              3928 	push	ar3
   E2CA 90 00 14           3929 	mov	dptr,#0x0014
   E2CD 12 7C E3           3930 	lcall	__mulint
   E2D0 AA 82              3931 	mov	r2,dpl
   E2D2 AB 83              3932 	mov	r3,dph
   E2D4 15 81              3933 	dec	sp
   E2D6 15 81              3934 	dec	sp
   E2D8 D0 06              3935 	pop	ar6
   E2DA E5 18              3936 	mov	a,_bp
   E2DC 24 0B              3937 	add	a,#0x0b
   E2DE F8                 3938 	mov	r0,a
   E2DF A6 02              3939 	mov	@r0,ar2
   E2E1 08                 3940 	inc	r0
   E2E2 A6 03              3941 	mov	@r0,ar3
   E2E4 80 29              3942 	sjmp	00123$
   E2E6                    3943 00122$:
                           3944 ;	../../shared/src/ring_pll_cal.c:578: delta_code = delta_code_nom / Fdiff;
   E2E6 C0 06              3945 	push	ar6
   E2E8 E5 18              3946 	mov	a,_bp
   E2EA 24 09              3947 	add	a,#0x09
   E2EC F8                 3948 	mov	r0,a
   E2ED E6                 3949 	mov	a,@r0
   E2EE C0 E0              3950 	push	acc
   E2F0 08                 3951 	inc	r0
   E2F1 E6                 3952 	mov	a,@r0
   E2F2 C0 E0              3953 	push	acc
   E2F4 8A 82              3954 	mov	dpl,r2
   E2F6 8B 83              3955 	mov	dph,r3
   E2F8 12 7E 54           3956 	lcall	__divsint
   E2FB AA 82              3957 	mov	r2,dpl
   E2FD AB 83              3958 	mov	r3,dph
   E2FF 15 81              3959 	dec	sp
   E301 15 81              3960 	dec	sp
   E303 D0 06              3961 	pop	ar6
   E305 E5 18              3962 	mov	a,_bp
   E307 24 0B              3963 	add	a,#0x0b
   E309 F8                 3964 	mov	r0,a
   E30A A6 02              3965 	mov	@r0,ar2
   E30C 08                 3966 	inc	r0
   E30D A6 03              3967 	mov	@r0,ar3
   E30F                    3968 00123$:
                           3969 ;	../../shared/src/ring_pll_cal.c:579: delta_code_first = delta_code;
   E30F E5 18              3970 	mov	a,_bp
   E311 24 0B              3971 	add	a,#0x0b
   E313 F8                 3972 	mov	r0,a
   E314 86 04              3973 	mov	ar4,@r0
   E316 08                 3974 	inc	r0
   E317 86 05              3975 	mov	ar5,@r0
   E319                    3976 00126$:
                           3977 ;	../../shared/src/ring_pll_cal.c:582: ringpll_dac_fine = ringpll_dac_fine + delta_code;
   E319 90 66 21           3978 	mov	dptr,#_ringpll_dac_fine
   E31C E0                 3979 	movx	a,@dptr
   E31D FA                 3980 	mov	r2,a
   E31E A3                 3981 	inc	dptr
   E31F E0                 3982 	movx	a,@dptr
   E320 FB                 3983 	mov	r3,a
   E321 E5 18              3984 	mov	a,_bp
   E323 24 0B              3985 	add	a,#0x0b
   E325 F8                 3986 	mov	r0,a
   E326 90 66 21           3987 	mov	dptr,#_ringpll_dac_fine
   E329 E6                 3988 	mov	a,@r0
   E32A 2A                 3989 	add	a,r2
   E32B F0                 3990 	movx	@dptr,a
   E32C 08                 3991 	inc	r0
   E32D E6                 3992 	mov	a,@r0
   E32E 3B                 3993 	addc	a,r3
   E32F A3                 3994 	inc	dptr
   E330 F0                 3995 	movx	@dptr,a
                           3996 ;	../../shared/src/ring_pll_cal.c:584: if (ringpll_dac_fine >= dac_fine_max_value) 
   E331 90 66 21           3997 	mov	dptr,#_ringpll_dac_fine
   E334 E0                 3998 	movx	a,@dptr
   E335 FA                 3999 	mov	r2,a
   E336 A3                 4000 	inc	dptr
   E337 E0                 4001 	movx	a,@dptr
   E338 FB                 4002 	mov	r3,a
   E339 C3                 4003 	clr	c
   E33A EA                 4004 	mov	a,r2
   E33B 94 FF              4005 	subb	a,#0xFF
   E33D EB                 4006 	mov	a,r3
   E33E 94 07              4007 	subb	a,#0x07
   E340 40 0C              4008 	jc	00131$
                           4009 ;	../../shared/src/ring_pll_cal.c:585: ringpll_dac_fine = dac_fine_max_value;
   E342 90 66 21           4010 	mov	dptr,#_ringpll_dac_fine
   E345 74 FF              4011 	mov	a,#0xFF
   E347 F0                 4012 	movx	@dptr,a
   E348 A3                 4013 	inc	dptr
   E349 74 07              4014 	mov	a,#0x07
   E34B F0                 4015 	movx	@dptr,a
   E34C 80 0B              4016 	sjmp	00132$
   E34E                    4017 00131$:
                           4018 ;	../../shared/src/ring_pll_cal.c:586: else if (ringpll_dac_fine <= 0)
   E34E EA                 4019 	mov	a,r2
   E34F 4B                 4020 	orl	a,r3
   E350 70 07              4021 	jnz	00132$
                           4022 ;	../../shared/src/ring_pll_cal.c:587: ringpll_dac_fine = 0;
   E352 90 66 21           4023 	mov	dptr,#_ringpll_dac_fine
   E355 E4                 4024 	clr	a
   E356 F0                 4025 	movx	@dptr,a
   E357 A3                 4026 	inc	dptr
   E358 F0                 4027 	movx	@dptr,a
   E359                    4028 00132$:
                           4029 ;	../../shared/src/ring_pll_cal.c:589: if ((ringpll_dac_fine == dac_fine_max_value) || (ringpll_dac_fine == 0)) {
   E359 90 66 21           4030 	mov	dptr,#_ringpll_dac_fine
   E35C E0                 4031 	movx	a,@dptr
   E35D FA                 4032 	mov	r2,a
   E35E A3                 4033 	inc	dptr
   E35F E0                 4034 	movx	a,@dptr
   E360 FB                 4035 	mov	r3,a
   E361 BA FF 05           4036 	cjne	r2,#0xFF,00200$
   E364 BB 07 02           4037 	cjne	r3,#0x07,00200$
   E367 80 04              4038 	sjmp	00135$
   E369                    4039 00200$:
   E369 EA                 4040 	mov	a,r2
   E36A 4B                 4041 	orl	a,r3
   E36B 70 11              4042 	jnz	00136$
   E36D                    4043 00135$:
                           4044 ;	../../shared/src/ring_pll_cal.c:590: if (i >= min_step_number) {
   E36D A8 18              4045 	mov	r0,_bp
   E36F 08                 4046 	inc	r0
   E370 B6 01 00           4047 	cjne	@r0,#0x01,00202$
   E373                    4048 00202$:
   E373 40 09              4049 	jc	00136$
                           4050 ;	../../shared/src/ring_pll_cal.c:594: cmx_PLL_CAL_RING_PASS = 0;
   E375 90 E6 4D           4051 	mov	dptr,#(_CAL_STATUS_READ + 0x0001)
   E378 E0                 4052 	movx	a,@dptr
   E379 54 F7              4053 	anl	a,#0xf7
   E37B F0                 4054 	movx	@dptr,a
                           4055 ;	../../shared/src/ring_pll_cal.c:599: break;
   E37C 80 50              4056 	sjmp	00144$
   E37E                    4057 00136$:
                           4058 ;	../../shared/src/ring_pll_cal.c:603: Fmea_prev = Fmea;
   E37E E5 18              4059 	mov	a,_bp
   E380 24 05              4060 	add	a,#0x05
   E382 F8                 4061 	mov	r0,a
   E383 E5 18              4062 	mov	a,_bp
   E385 24 07              4063 	add	a,#0x07
   E387 F9                 4064 	mov	r1,a
   E388 E6                 4065 	mov	a,@r0
   E389 F7                 4066 	mov	@r1,a
   E38A 08                 4067 	inc	r0
   E38B 09                 4068 	inc	r1
   E38C E6                 4069 	mov	a,@r0
   E38D F7                 4070 	mov	@r1,a
                           4071 ;	../../shared/src/ring_pll_cal.c:604: ringpll_dac_fine_output();
   E38E C0 04              4072 	push	ar4
   E390 C0 05              4073 	push	ar5
   E392 C0 06              4074 	push	ar6
   E394 78 5E              4075 	mov	r0,#_ringpll_dac_fine_output
   E396 79 88              4076 	mov	r1,#(_ringpll_dac_fine_output >> 8)
   E398 7A 02              4077 	mov	r2,#(_ringpll_dac_fine_output >> 16)
   E39A 12 00 B3           4078 	lcall	__sdcc_banked_call
                           4079 ;	../../shared/src/ring_pll_cal.c:616: delay01(30); //6uSec settling time required after from second DAC_VALID toggle to new DAC value or SHRTR=0 
   E39D 90 00 1E           4080 	mov	dptr,#0x001E
   E3A0 78 16              4081 	mov	r0,#_delay01
   E3A2 79 BC              4082 	mov	r1,#(_delay01 >> 8)
   E3A4 7A 02              4083 	mov	r2,#(_delay01 >> 16)
   E3A6 12 00 B3           4084 	lcall	__sdcc_banked_call
   E3A9 D0 06              4085 	pop	ar6
   E3AB D0 05              4086 	pop	ar5
   E3AD D0 04              4087 	pop	ar4
   E3AF                    4088 00140$:
                           4089 ;	../../shared/src/ring_pll_cal.c:618: i++;
   E3AF A8 18              4090 	mov	r0,_bp
   E3B1 08                 4091 	inc	r0
   E3B2 06                 4092 	inc	@r0
   E3B3 A8 18              4093 	mov	r0,_bp
   E3B5 08                 4094 	inc	r0
   E3B6 E5 18              4095 	mov	a,_bp
   E3B8 24 0D              4096 	add	a,#0x0d
   E3BA F9                 4097 	mov	r1,a
   E3BB E6                 4098 	mov	a,@r0
   E3BC F7                 4099 	mov	@r1,a
                           4100 ;	../../shared/src/ring_pll_cal.c:620: } while (i < max_step_number);
   E3BD 90 E6 1B           4101 	mov	dptr,#(_CONTROL_CONFIG5 + 0x0003)
   E3C0 E0                 4102 	movx	a,@dptr
   E3C1 FA                 4103 	mov	r2,a
   E3C2 A8 18              4104 	mov	r0,_bp
   E3C4 08                 4105 	inc	r0
   E3C5 E6                 4106 	mov	a,@r0
   E3C6 B5 02 00           4107 	cjne	a,ar2,00204$
   E3C9                    4108 00204$:
   E3C9 50 03              4109 	jnc	00205$
   E3CB 02 E1 5F           4110 	ljmp	00142$
   E3CE                    4111 00205$:
   E3CE                    4112 00144$:
                           4113 ;	../../shared/src/ring_pll_cal.c:621: reg_MCU_DEBUGF_LANE_7_0 = i; //test
   E3CE 90 22 C3           4114 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0003)
   E3D1 E5 18              4115 	mov	a,_bp
   E3D3 24 0D              4116 	add	a,#0x0d
   E3D5 F8                 4117 	mov	r0,a
   E3D6 E6                 4118 	mov	a,@r0
   E3D7 F0                 4119 	movx	@dptr,a
                           4120 ;	../../shared/src/ring_pll_cal.c:622: reg_FBC_PLLCAL_RING_EN = 0;
   E3D8 90 A3 31           4121 	mov	dptr,#(_PLLCAL_REG1 + 0x0001)
   E3DB E0                 4122 	movx	a,@dptr
   E3DC 54 FD              4123 	anl	a,#0xfd
   E3DE F0                 4124 	movx	@dptr,a
                           4125 ;	../../shared/src/ring_pll_cal.c:623: ringpll_save(CONT);
   E3DF 75 82 01           4126 	mov	dpl,#0x01
   E3E2 C0 06              4127 	push	ar6
   E3E4 78 61              4128 	mov	r0,#_ringpll_save
   E3E6 79 87              4129 	mov	r1,#(_ringpll_save >> 8)
   E3E8 7A 02              4130 	mov	r2,#(_ringpll_save >> 16)
   E3EA 12 00 B3           4131 	lcall	__sdcc_banked_call
   E3ED D0 06              4132 	pop	ar6
                           4133 ;	../../shared/src/ring_pll_cal.c:630: reg_PLL_FBDIV_RING_9_8 = save_FBDIV_h;
   E3EF 90 82 F0           4134 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_188
   E3F2 EE                 4135 	mov	a,r6
   E3F3 2E                 4136 	add	a,r6
   E3F4 54 06              4137 	anl	a,#0x06
   E3F6 F5 F0              4138 	mov	b,a
   E3F8 E0                 4139 	movx	a,@dptr
   E3F9 54 F9              4140 	anl	a,#0xf9
   E3FB 45 F0              4141 	orl	a,b
   E3FD F0                 4142 	movx	@dptr,a
                           4143 ;	../../shared/src/ring_pll_cal.c:631: reg_PLL_FBDIV_RING_7_0 = save_FBDIV_l;
   E3FE 90 82 F4           4144 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_189
   E401 A8 18              4145 	mov	r0,_bp
   E403 08                 4146 	inc	r0
   E404 08                 4147 	inc	r0
   E405 E6                 4148 	mov	a,@r0
   E406 F0                 4149 	movx	@dptr,a
                           4150 ;	../../shared/src/ring_pll_cal.c:632: reg_ANA_FBCK_SEL_RING = save_FBCK_SEL;
   E407 90 A3 18           4151 	mov	dptr,#_PM_CMN_REG1
   E40A E5 18              4152 	mov	a,_bp
   E40C 24 03              4153 	add	a,#0x03
   E40E F8                 4154 	mov	r0,a
   E40F E6                 4155 	mov	a,@r0
   E410 13                 4156 	rrc	a
   E411 E0                 4157 	movx	a,@dptr
   E412 92 E2              4158 	mov	acc.2,c
   E414 F0                 4159 	movx	@dptr,a
                           4160 ;	../../shared/src/ring_pll_cal.c:635: ring_size_counter = ring_size_counter_mid;
   E415 90 66 3F           4161 	mov	dptr,#_ring_size_counter_mid
   E418 E0                 4162 	movx	a,@dptr
   E419 FA                 4163 	mov	r2,a
   E41A 90 66 3E           4164 	mov	dptr,#_ring_size_counter
   E41D F0                 4165 	movx	@dptr,a
                           4166 ;	../../shared/src/ring_pll_cal.c:637: PLL_CAL_EN_RING = 0;
   E41E 90 83 10           4167 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_196
   E421 E0                 4168 	movx	a,@dptr
   E422 54 7F              4169 	anl	a,#0x7f
   E424 F0                 4170 	movx	@dptr,a
                           4171 ;	../../shared/src/ring_pll_cal.c:638: PLL_SHRTR_RING = 0;
   E425 90 83 10           4172 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_196
   E428 E0                 4173 	movx	a,@dptr
   E429 54 BF              4174 	anl	a,#0xbf
   E42B F0                 4175 	movx	@dptr,a
                           4176 ;	../../shared/src/ring_pll_cal.c:643: while(!reg_ANA_PLL_LOCK_RING_RD && !timeout);
   E42C                    4177 00146$:
   E42C 90 A3 19           4178 	mov	dptr,#(_PM_CMN_REG1 + 0x0001)
   E42F E0                 4179 	movx	a,@dptr
   E430 20 E7 03           4180 	jb	acc.7,00148$
   E433 30 03 F6           4181 	jnb	_timeout,00146$
   E436                    4182 00148$:
                           4183 ;	../../shared/src/ring_pll_cal.c:649: if(timeout) cmx_PLL_CAL_RING_PASS = 0;
   E436 30 03 07           4184 	jnb	_timeout,00150$
   E439 90 E6 4D           4185 	mov	dptr,#(_CAL_STATUS_READ + 0x0001)
   E43C E0                 4186 	movx	a,@dptr
   E43D 54 F7              4187 	anl	a,#0xf7
   E43F F0                 4188 	movx	@dptr,a
   E440                    4189 00150$:
                           4190 ;	../../shared/src/ring_pll_cal.c:658: if(PHY_STATUS != ST_SPDCHG) {
   E440 90 22 30           4191 	mov	dptr,#_MCU_STATUS0_LANE
   E443 E0                 4192 	movx	a,@dptr
   E444 FA                 4193 	mov	r2,a
   E445 BA 19 02           4194 	cjne	r2,#0x19,00209$
   E448 80 0C              4195 	sjmp	00152$
   E44A                    4196 00209$:
                           4197 ;	../../shared/src/ring_pll_cal.c:659: delay01(200);	//delay 20usec for glitch
   E44A 90 00 C8           4198 	mov	dptr,#0x00C8
   E44D 78 16              4199 	mov	r0,#_delay01
   E44F 79 BC              4200 	mov	r1,#(_delay01 >> 8)
   E451 7A 02              4201 	mov	r2,#(_delay01 >> 16)
   E453 12 00 B3           4202 	lcall	__sdcc_banked_call
   E456                    4203 00152$:
                           4204 ;	../../shared/src/ring_pll_cal.c:662: pll_clk_ready_ring_1();
   E456 78 A7              4205 	mov	r0,#_pll_clk_ready_ring_1
   E458 79 D4              4206 	mov	r1,#(_pll_clk_ready_ring_1 >> 8)
   E45A 7A 02              4207 	mov	r2,#(_pll_clk_ready_ring_1 >> 16)
   E45C 12 00 B3           4208 	lcall	__sdcc_banked_call
   E45F 85 18 81           4209 	mov	sp,_bp
   E462 D0 18              4210 	pop	_bp
   E464 02 00 C5           4211 	ljmp	__sdcc_banked_ret
                           4212 	.area CSEG    (CODE)
                           4213 	.area BANK1   (CODE)
                           4214 	.area CABS    (ABS,CODE)
