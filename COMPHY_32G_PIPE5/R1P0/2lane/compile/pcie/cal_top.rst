                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:22 2018
                              5 ;--------------------------------------------------------
                              6 	.module cal_top
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
                            979 	.globl _Calibration
                            980 	.globl _Cal_Cont
                            981 	.globl _phy_check_lane
                            982 	.globl _mcu_align_0
                            983 	.globl _all_cal_ext
                            984 	.globl _clear_normal_mode_cal_en
                            985 ;--------------------------------------------------------
                            986 ; special function registers
                            987 ;--------------------------------------------------------
                            988 	.area RSEG    (ABS,DATA)
   0000                     989 	.org 0x0000
                    0080    990 _P0	=	0x0080
                    0082    991 _DPL	=	0x0082
                    0083    992 _DPH	=	0x0083
                    0086    993 _WDTREL	=	0x0086
                    0087    994 _PCON	=	0x0087
                    0088    995 _TCON	=	0x0088
                    0089    996 _TMOD	=	0x0089
                    008A    997 _TL0	=	0x008a
                    008B    998 _TL1	=	0x008b
                    008C    999 _TH0	=	0x008c
                    008D   1000 _TH1	=	0x008d
                    008E   1001 _CKCON	=	0x008e
                    0090   1002 _P1	=	0x0090
                    0092   1003 _DPS	=	0x0092
                    0094   1004 _PSBANK	=	0x0094
                    0098   1005 _SCON	=	0x0098
                    0099   1006 _SBUF	=	0x0099
                    009A   1007 _IEN2	=	0x009a
                    00A0   1008 _P2	=	0x00a0
                    00A1   1009 _DMAS0	=	0x00a1
                    00A2   1010 _DMAS1	=	0x00a2
                    00A3   1011 _DMAS2	=	0x00a3
                    00A4   1012 _DMAT0	=	0x00a4
                    00A5   1013 _DMAT1	=	0x00a5
                    00A6   1014 _DMAT2	=	0x00a6
                    00A8   1015 _IEN0	=	0x00a8
                    00A9   1016 _IP0	=	0x00a9
                    00AA   1017 _S0RELL	=	0x00aa
                    00B0   1018 _P3	=	0x00b0
                    00B1   1019 _DMAC0	=	0x00b1
                    00B2   1020 _DMAC1	=	0x00b2
                    00B3   1021 _DMAC2	=	0x00b3
                    00B4   1022 _DMASEL	=	0x00b4
                    00B5   1023 _DMAM0	=	0x00b5
                    00B6   1024 _DMAM1	=	0x00b6
                    00B8   1025 _IEN1	=	0x00b8
                    00B9   1026 _IP1	=	0x00b9
                    00BA   1027 _S0RELH	=	0x00ba
                    00C0   1028 _IRCON	=	0x00c0
                    00C1   1029 _CCEN	=	0x00c1
                    00C8   1030 _T2CON	=	0x00c8
                    00CA   1031 _RCAP2L	=	0x00ca
                    00CB   1032 _RCAP2H	=	0x00cb
                    00CC   1033 _TL2	=	0x00cc
                    00CD   1034 _TH2	=	0x00cd
                    00D0   1035 _PSW	=	0x00d0
                    00D8   1036 _ADCON	=	0x00d8
                    00E0   1037 _ACC	=	0x00e0
                    00E8   1038 _EIE	=	0x00e8
                    00F0   1039 _B	=	0x00f0
                    00F7   1040 _SRST	=	0x00f7
                    8C8A   1041 _TMR0	=	0x8c8a
                    8D8B   1042 _TMR1	=	0x8d8b
                    CDCC   1043 _TMR2	=	0xcdcc
                    A2A1   1044 _DMASA	=	0xa2a1
                    A5A4   1045 _DMATA	=	0xa5a4
                    B2B1   1046 _DMAC	=	0xb2b1
                           1047 ;--------------------------------------------------------
                           1048 ; special function bits
                           1049 ;--------------------------------------------------------
                           1050 	.area RSEG    (ABS,DATA)
   0000                    1051 	.org 0x0000
                    0080   1052 _P0_0	=	0x0080
                    0081   1053 _P0_1	=	0x0081
                    0082   1054 _P0_2	=	0x0082
                    0083   1055 _P0_3	=	0x0083
                    0084   1056 _P0_4	=	0x0084
                    0085   1057 _P0_5	=	0x0085
                    0086   1058 _P0_6	=	0x0086
                    0087   1059 _P0_7	=	0x0087
                    0090   1060 _P1_0	=	0x0090
                    0091   1061 _P1_1	=	0x0091
                    0092   1062 _P1_2	=	0x0092
                    0093   1063 _P1_3	=	0x0093
                    0094   1064 _P1_4	=	0x0094
                    0095   1065 _P1_5	=	0x0095
                    0096   1066 _P1_6	=	0x0096
                    0097   1067 _P1_7	=	0x0097
                    00A0   1068 _P2_0	=	0x00a0
                    00A1   1069 _P2_1	=	0x00a1
                    00A2   1070 _P2_2	=	0x00a2
                    00A3   1071 _P2_3	=	0x00a3
                    00A4   1072 _P2_4	=	0x00a4
                    00A5   1073 _P2_5	=	0x00a5
                    00A6   1074 _P2_6	=	0x00a6
                    00A7   1075 _P2_7	=	0x00a7
                    00B0   1076 _P3_0	=	0x00b0
                    00B1   1077 _P3_1	=	0x00b1
                    00B2   1078 _P3_2	=	0x00b2
                    00B3   1079 _P3_3	=	0x00b3
                    00B4   1080 _P3_4	=	0x00b4
                    00B5   1081 _P3_5	=	0x00b5
                    00B6   1082 _P3_6	=	0x00b6
                    00B7   1083 _P3_7	=	0x00b7
                    0088   1084 _IT0	=	0x0088
                    0089   1085 _IE0	=	0x0089
                    008A   1086 _IT1	=	0x008a
                    008B   1087 _IE1	=	0x008b
                    008C   1088 _TR0	=	0x008c
                    008D   1089 _TF0	=	0x008d
                    008E   1090 _TR1	=	0x008e
                    008F   1091 _TF1	=	0x008f
                    00A8   1092 _EX0	=	0x00a8
                    00A9   1093 _ET0	=	0x00a9
                    00AA   1094 _EX1	=	0x00aa
                    00AB   1095 _ET1	=	0x00ab
                    00AC   1096 _ES	=	0x00ac
                    00AD   1097 _ET2	=	0x00ad
                    00AE   1098 _WDT	=	0x00ae
                    00AF   1099 _EA	=	0x00af
                    00B8   1100 _EX7	=	0x00b8
                    00B9   1101 _EX2	=	0x00b9
                    00BA   1102 _EX3	=	0x00ba
                    00BB   1103 _EX4	=	0x00bb
                    00BC   1104 _EX5	=	0x00bc
                    00BD   1105 _EX6	=	0x00bd
                    00BE   1106 _PS1	=	0x00be
                    009A   1107 _ES1	=	0x009a
                    009B   1108 _EX8	=	0x009b
                    009C   1109 _EX9	=	0x009c
                    009D   1110 _EX10	=	0x009d
                    009E   1111 _EX11	=	0x009e
                    009F   1112 _EX12	=	0x009f
                    0098   1113 _RI	=	0x0098
                    0099   1114 _TI	=	0x0099
                    00C6   1115 _TF2	=	0x00c6
                           1116 ;--------------------------------------------------------
                           1117 ; overlayable register banks
                           1118 ;--------------------------------------------------------
                           1119 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1120 	.ds 8
                           1121 ;--------------------------------------------------------
                           1122 ; overlayable bit register bank
                           1123 ;--------------------------------------------------------
                           1124 	.area BIT_BANK	(REL,OVR,DATA)
   0025                    1125 bits:
   0025                    1126 	.ds 1
                    8000   1127 	b0 = bits[0]
                    8100   1128 	b1 = bits[1]
                    8200   1129 	b2 = bits[2]
                    8300   1130 	b3 = bits[3]
                    8400   1131 	b4 = bits[4]
                    8500   1132 	b5 = bits[5]
                    8600   1133 	b6 = bits[6]
                    8700   1134 	b7 = bits[7]
                           1135 ;--------------------------------------------------------
                           1136 ; internal ram data
                           1137 ;--------------------------------------------------------
                           1138 	.area DSEG    (DATA)
                           1139 ;--------------------------------------------------------
                           1140 ; overlayable items in internal ram 
                           1141 ;--------------------------------------------------------
                           1142 	.area OSEG    (OVR,DATA)
                           1143 ;--------------------------------------------------------
                           1144 ; indirectly addressable internal ram data
                           1145 ;--------------------------------------------------------
                           1146 	.area ISEG    (DATA)
                           1147 ;--------------------------------------------------------
                           1148 ; absolute internal ram data
                           1149 ;--------------------------------------------------------
                           1150 	.area IABS    (ABS,DATA)
                           1151 	.area IABS    (ABS,DATA)
                           1152 ;--------------------------------------------------------
                           1153 ; bit data
                           1154 ;--------------------------------------------------------
                           1155 	.area BSEG    (BIT)
                           1156 ;--------------------------------------------------------
                           1157 ; paged external ram data
                           1158 ;--------------------------------------------------------
                           1159 	.area PSEG    (PAG,XDATA)
                           1160 ;--------------------------------------------------------
                           1161 ; external ram data
                           1162 ;--------------------------------------------------------
                           1163 	.area XSEG    (XDATA)
                    1000   1164 _UPHY14_TRX_LANEPLL_ANAREG_TOP_128	=	0x1000
                    1004   1165 _UPHY14_TRX_LANEPLL_ANAREG_TOP_129	=	0x1004
                    1008   1166 _UPHY14_TRX_LANEPLL_ANAREG_TOP_130	=	0x1008
                    100C   1167 _UPHY14_TRX_LANEPLL_ANAREG_TOP_131	=	0x100c
                    1010   1168 _UPHY14_TRX_LANEPLL_ANAREG_TOP_132	=	0x1010
                    1014   1169 _UPHY14_TRX_LANEPLL_ANAREG_TOP_133	=	0x1014
                    1018   1170 _UPHY14_TRX_LANEPLL_ANAREG_TOP_134	=	0x1018
                    101C   1171 _UPHY14_TRX_LANEPLL_ANAREG_TOP_135	=	0x101c
                    1020   1172 _UPHY14_TRX_LANEPLL_ANAREG_TOP_136	=	0x1020
                    1024   1173 _UPHY14_TRX_LANEPLL_ANAREG_TOP_137	=	0x1024
                    1028   1174 _UPHY14_TRX_LANEPLL_ANAREG_TOP_138	=	0x1028
                    102C   1175 _UPHY14_TRX_LANEPLL_ANAREG_TOP_139	=	0x102c
                    1030   1176 _UPHY14_TRX_LANEPLL_ANAREG_TOP_140	=	0x1030
                    1034   1177 _UPHY14_TRX_LANEPLL_ANAREG_TOP_141	=	0x1034
                    1038   1178 _UPHY14_TRX_LANEPLL_ANAREG_TOP_142	=	0x1038
                    103C   1179 _UPHY14_TRX_LANEPLL_ANAREG_TOP_143	=	0x103c
                    0200   1180 _UPHY14_TRX_ANAREG_TOP_128	=	0x0200
                    0204   1181 _UPHY14_TRX_ANAREG_TOP_129	=	0x0204
                    0208   1182 _UPHY14_TRX_ANAREG_TOP_130	=	0x0208
                    020C   1183 _UPHY14_TRX_ANAREG_TOP_131	=	0x020c
                    0210   1184 _UPHY14_TRX_ANAREG_TOP_132	=	0x0210
                    0214   1185 _UPHY14_TRX_ANAREG_TOP_133	=	0x0214
                    0218   1186 _UPHY14_TRX_ANAREG_TOP_134	=	0x0218
                    021C   1187 _UPHY14_TRX_ANAREG_TOP_135	=	0x021c
                    0220   1188 _UPHY14_TRX_ANAREG_TOP_136	=	0x0220
                    0224   1189 _UPHY14_TRX_ANAREG_TOP_137	=	0x0224
                    0228   1190 _UPHY14_TRX_ANAREG_TOP_138	=	0x0228
                    022C   1191 _UPHY14_TRX_ANAREG_TOP_139	=	0x022c
                    0230   1192 _UPHY14_TRX_ANAREG_TOP_140	=	0x0230
                    0234   1193 _UPHY14_TRX_ANAREG_TOP_141	=	0x0234
                    0238   1194 _UPHY14_TRX_ANAREG_TOP_142	=	0x0238
                    023C   1195 _UPHY14_TRX_ANAREG_TOP_143	=	0x023c
                    0240   1196 _UPHY14_TRX_ANAREG_TOP_144	=	0x0240
                    0244   1197 _UPHY14_TRX_ANAREG_TOP_145	=	0x0244
                    0248   1198 _UPHY14_TRX_ANAREG_TOP_146	=	0x0248
                    024C   1199 _UPHY14_TRX_ANAREG_TOP_147	=	0x024c
                    0250   1200 _UPHY14_TRX_ANAREG_TOP_148	=	0x0250
                    0254   1201 _UPHY14_TRX_ANAREG_TOP_149	=	0x0254
                    0258   1202 _UPHY14_TRX_ANAREG_TOP_150	=	0x0258
                    025C   1203 _UPHY14_TRX_ANAREG_TOP_151	=	0x025c
                    0260   1204 _UPHY14_TRX_ANAREG_TOP_152	=	0x0260
                    0264   1205 _UPHY14_TRX_ANAREG_TOP_153	=	0x0264
                    0268   1206 _UPHY14_TRX_ANAREG_TOP_154	=	0x0268
                    026C   1207 _UPHY14_TRX_ANAREG_TOP_155	=	0x026c
                    0270   1208 _UPHY14_TRX_ANAREG_TOP_156	=	0x0270
                    0274   1209 _UPHY14_TRX_ANAREG_TOP_157	=	0x0274
                    0000   1210 _UPHY14_TRX_ANAREG_BOT_0	=	0x0000
                    0004   1211 _UPHY14_TRX_ANAREG_BOT_1	=	0x0004
                    0008   1212 _UPHY14_TRX_ANAREG_BOT_2	=	0x0008
                    000C   1213 _UPHY14_TRX_ANAREG_BOT_3	=	0x000c
                    0010   1214 _UPHY14_TRX_ANAREG_BOT_4	=	0x0010
                    0014   1215 _UPHY14_TRX_ANAREG_BOT_5	=	0x0014
                    0018   1216 _UPHY14_TRX_ANAREG_BOT_6	=	0x0018
                    001C   1217 _UPHY14_TRX_ANAREG_BOT_7	=	0x001c
                    0020   1218 _UPHY14_TRX_ANAREG_BOT_8	=	0x0020
                    0024   1219 _UPHY14_TRX_ANAREG_BOT_9	=	0x0024
                    0028   1220 _UPHY14_TRX_ANAREG_BOT_10	=	0x0028
                    002C   1221 _UPHY14_TRX_ANAREG_BOT_11	=	0x002c
                    0030   1222 _UPHY14_TRX_ANAREG_BOT_12	=	0x0030
                    0034   1223 _UPHY14_TRX_ANAREG_BOT_13	=	0x0034
                    0038   1224 _UPHY14_TRX_ANAREG_BOT_14	=	0x0038
                    003C   1225 _UPHY14_TRX_ANAREG_BOT_15	=	0x003c
                    0040   1226 _UPHY14_TRX_ANAREG_BOT_16	=	0x0040
                    0044   1227 _UPHY14_TRX_ANAREG_BOT_17	=	0x0044
                    0048   1228 _UPHY14_TRX_ANAREG_BOT_18	=	0x0048
                    004C   1229 _UPHY14_TRX_ANAREG_BOT_19	=	0x004c
                    0050   1230 _UPHY14_TRX_ANAREG_BOT_20	=	0x0050
                    0054   1231 _UPHY14_TRX_ANAREG_BOT_21	=	0x0054
                    0058   1232 _UPHY14_TRX_ANAREG_BOT_22	=	0x0058
                    005C   1233 _UPHY14_TRX_ANAREG_BOT_23	=	0x005c
                    0060   1234 _UPHY14_TRX_ANAREG_BOT_24	=	0x0060
                    0064   1235 _UPHY14_TRX_ANAREG_BOT_25	=	0x0064
                    0068   1236 _UPHY14_TRX_ANAREG_BOT_26	=	0x0068
                    006C   1237 _UPHY14_TRX_ANAREG_BOT_27	=	0x006c
                    0070   1238 _UPHY14_TRX_ANAREG_BOT_28	=	0x0070
                    0074   1239 _UPHY14_TRX_ANAREG_BOT_29	=	0x0074
                    0078   1240 _UPHY14_TRX_ANAREG_BOT_30	=	0x0078
                    007C   1241 _UPHY14_TRX_ANAREG_BOT_31	=	0x007c
                    0080   1242 _UPHY14_TRX_ANAREG_BOT_32	=	0x0080
                    0478   1243 _ANA_DFEE_REG_1E	=	0x0478
                    047C   1244 _ANA_DFEE_REG_1F	=	0x047c
                    0480   1245 _ANA_DFEE_REG_20	=	0x0480
                    0484   1246 _ANA_DFEE_REG_21	=	0x0484
                    0488   1247 _ANA_DFEE_REG_22	=	0x0488
                    048C   1248 _ANA_DFEE_REG_23	=	0x048c
                    0490   1249 _ANA_DFEE_REG_24	=	0x0490
                    0494   1250 _ANA_DFEE_REG_25	=	0x0494
                    0498   1251 _ANA_DFEE_REG_26	=	0x0498
                    049C   1252 _ANA_DFEE_REG_27	=	0x049c
                    0400   1253 _ANA_DFEE_REG_00	=	0x0400
                    0404   1254 _ANA_DFEE_REG_01	=	0x0404
                    0408   1255 _ANA_DFEE_REG_02	=	0x0408
                    040C   1256 _ANA_DFEE_REG_03	=	0x040c
                    0410   1257 _ANA_DFEE_REG_04	=	0x0410
                    0414   1258 _ANA_DFEE_REG_05	=	0x0414
                    0418   1259 _ANA_DFEE_REG_06	=	0x0418
                    041C   1260 _ANA_DFEE_REG_07	=	0x041c
                    0420   1261 _ANA_DFEE_REG_08	=	0x0420
                    0424   1262 _ANA_DFEE_REG_09	=	0x0424
                    0428   1263 _ANA_DFEE_REG_0A	=	0x0428
                    042C   1264 _ANA_DFEE_REG_0B	=	0x042c
                    0430   1265 _ANA_DFEE_REG_0C	=	0x0430
                    0434   1266 _ANA_DFEE_REG_0D	=	0x0434
                    0438   1267 _ANA_DFEE_REG_0E	=	0x0438
                    043C   1268 _ANA_DFEE_REG_0F	=	0x043c
                    0440   1269 _ANA_DFEE_REG_10	=	0x0440
                    0444   1270 _ANA_DFEE_REG_11	=	0x0444
                    0448   1271 _ANA_DFEE_REG_12	=	0x0448
                    044C   1272 _ANA_DFEE_REG_13	=	0x044c
                    0450   1273 _ANA_DFEE_REG_14	=	0x0450
                    0454   1274 _ANA_DFEE_REG_15	=	0x0454
                    0458   1275 _ANA_DFEE_REG_16	=	0x0458
                    045C   1276 _ANA_DFEE_REG_17	=	0x045c
                    0460   1277 _ANA_DFEE_REG_18	=	0x0460
                    0464   1278 _ANA_DFEE_REG_19	=	0x0464
                    0468   1279 _ANA_DFEE_REG_1A	=	0x0468
                    046C   1280 _ANA_DFEE_REG_1B	=	0x046c
                    0470   1281 _ANA_DFEE_REG_1C	=	0x0470
                    0474   1282 _ANA_DFEE_REG_1D	=	0x0474
                    0830   1283 _ANA_DFEO_REG_0C	=	0x0830
                    0834   1284 _ANA_DFEO_REG_0D	=	0x0834
                    0838   1285 _ANA_DFEO_REG_0E	=	0x0838
                    083C   1286 _ANA_DFEO_REG_0F	=	0x083c
                    0840   1287 _ANA_DFEO_REG_10	=	0x0840
                    0844   1288 _ANA_DFEO_REG_11	=	0x0844
                    0848   1289 _ANA_DFEO_REG_12	=	0x0848
                    084C   1290 _ANA_DFEO_REG_13	=	0x084c
                    0850   1291 _ANA_DFEO_REG_14	=	0x0850
                    0854   1292 _ANA_DFEO_REG_15	=	0x0854
                    0858   1293 _ANA_DFEO_REG_16	=	0x0858
                    085C   1294 _ANA_DFEO_REG_17	=	0x085c
                    0860   1295 _ANA_DFEO_REG_18	=	0x0860
                    0864   1296 _ANA_DFEO_REG_19	=	0x0864
                    0868   1297 _ANA_DFEO_REG_1A	=	0x0868
                    086C   1298 _ANA_DFEO_REG_1B	=	0x086c
                    0870   1299 _ANA_DFEO_REG_1C	=	0x0870
                    0874   1300 _ANA_DFEO_REG_1D	=	0x0874
                    0878   1301 _ANA_DFEO_REG_1E	=	0x0878
                    087C   1302 _ANA_DFEO_REG_1F	=	0x087c
                    0880   1303 _ANA_DFEO_REG_20	=	0x0880
                    0884   1304 _ANA_DFEO_REG_21	=	0x0884
                    0888   1305 _ANA_DFEO_REG_22	=	0x0888
                    088C   1306 _ANA_DFEO_REG_23	=	0x088c
                    0890   1307 _ANA_DFEO_REG_24	=	0x0890
                    0894   1308 _ANA_DFEO_REG_25	=	0x0894
                    0898   1309 _ANA_DFEO_REG_26	=	0x0898
                    089C   1310 _ANA_DFEO_REG_27	=	0x089c
                    0800   1311 _ANA_DFEO_REG_00	=	0x0800
                    0804   1312 _ANA_DFEO_REG_01	=	0x0804
                    0808   1313 _ANA_DFEO_REG_02	=	0x0808
                    080C   1314 _ANA_DFEO_REG_03	=	0x080c
                    0810   1315 _ANA_DFEO_REG_04	=	0x0810
                    0814   1316 _ANA_DFEO_REG_05	=	0x0814
                    0818   1317 _ANA_DFEO_REG_06	=	0x0818
                    081C   1318 _ANA_DFEO_REG_07	=	0x081c
                    0820   1319 _ANA_DFEO_REG_08	=	0x0820
                    0824   1320 _ANA_DFEO_REG_09	=	0x0824
                    0828   1321 _ANA_DFEO_REG_0A	=	0x0828
                    082C   1322 _ANA_DFEO_REG_0B	=	0x082c
                    8200   1323 _UPHY14_CMN_ANAREG_TOP_128	=	0x8200
                    8204   1324 _UPHY14_CMN_ANAREG_TOP_129	=	0x8204
                    8208   1325 _UPHY14_CMN_ANAREG_TOP_130	=	0x8208
                    820C   1326 _UPHY14_CMN_ANAREG_TOP_131	=	0x820c
                    8210   1327 _UPHY14_CMN_ANAREG_TOP_132	=	0x8210
                    8214   1328 _UPHY14_CMN_ANAREG_TOP_133	=	0x8214
                    8218   1329 _UPHY14_CMN_ANAREG_TOP_134	=	0x8218
                    821C   1330 _UPHY14_CMN_ANAREG_TOP_135	=	0x821c
                    8220   1331 _UPHY14_CMN_ANAREG_TOP_136	=	0x8220
                    8224   1332 _UPHY14_CMN_ANAREG_TOP_137	=	0x8224
                    8228   1333 _UPHY14_CMN_ANAREG_TOP_138	=	0x8228
                    822C   1334 _UPHY14_CMN_ANAREG_TOP_139	=	0x822c
                    8230   1335 _UPHY14_CMN_ANAREG_TOP_140	=	0x8230
                    8234   1336 _UPHY14_CMN_ANAREG_TOP_141	=	0x8234
                    8238   1337 _UPHY14_CMN_ANAREG_TOP_142	=	0x8238
                    823C   1338 _UPHY14_CMN_ANAREG_TOP_143	=	0x823c
                    8240   1339 _UPHY14_CMN_ANAREG_TOP_144	=	0x8240
                    8244   1340 _UPHY14_CMN_ANAREG_TOP_145	=	0x8244
                    8248   1341 _UPHY14_CMN_ANAREG_TOP_146	=	0x8248
                    824C   1342 _UPHY14_CMN_ANAREG_TOP_147	=	0x824c
                    8250   1343 _UPHY14_CMN_ANAREG_TOP_148	=	0x8250
                    8254   1344 _UPHY14_CMN_ANAREG_TOP_149	=	0x8254
                    8258   1345 _UPHY14_CMN_ANAREG_TOP_150	=	0x8258
                    825C   1346 _UPHY14_CMN_ANAREG_TOP_151	=	0x825c
                    8260   1347 _UPHY14_CMN_ANAREG_TOP_152	=	0x8260
                    8264   1348 _UPHY14_CMN_ANAREG_TOP_153	=	0x8264
                    8268   1349 _UPHY14_CMN_ANAREG_TOP_154	=	0x8268
                    826C   1350 _UPHY14_CMN_ANAREG_TOP_155	=	0x826c
                    8270   1351 _UPHY14_CMN_ANAREG_TOP_156	=	0x8270
                    8274   1352 _UPHY14_CMN_ANAREG_TOP_157	=	0x8274
                    8278   1353 _UPHY14_CMN_ANAREG_TOP_158	=	0x8278
                    827C   1354 _UPHY14_CMN_ANAREG_TOP_159	=	0x827c
                    8280   1355 _UPHY14_CMN_ANAREG_TOP_160	=	0x8280
                    8284   1356 _UPHY14_CMN_ANAREG_TOP_161	=	0x8284
                    8288   1357 _UPHY14_CMN_ANAREG_TOP_162	=	0x8288
                    828C   1358 _UPHY14_CMN_ANAREG_TOP_163	=	0x828c
                    8290   1359 _UPHY14_CMN_ANAREG_TOP_164	=	0x8290
                    8294   1360 _UPHY14_CMN_ANAREG_TOP_165	=	0x8294
                    8298   1361 _UPHY14_CMN_ANAREG_TOP_166	=	0x8298
                    829C   1362 _UPHY14_CMN_ANAREG_TOP_167	=	0x829c
                    82A0   1363 _UPHY14_CMN_ANAREG_TOP_168	=	0x82a0
                    82A4   1364 _UPHY14_CMN_ANAREG_TOP_169	=	0x82a4
                    82A8   1365 _UPHY14_CMN_ANAREG_TOP_170	=	0x82a8
                    82AC   1366 _UPHY14_CMN_ANAREG_TOP_171	=	0x82ac
                    82B0   1367 _UPHY14_CMN_ANAREG_TOP_172	=	0x82b0
                    82B4   1368 _UPHY14_CMN_ANAREG_TOP_173	=	0x82b4
                    82B8   1369 _UPHY14_CMN_ANAREG_TOP_174	=	0x82b8
                    82BC   1370 _UPHY14_CMN_ANAREG_TOP_175	=	0x82bc
                    82C0   1371 _UPHY14_CMN_ANAREG_TOP_176	=	0x82c0
                    82C4   1372 _UPHY14_CMN_ANAREG_TOP_177	=	0x82c4
                    82C8   1373 _UPHY14_CMN_ANAREG_TOP_178	=	0x82c8
                    82CC   1374 _UPHY14_CMN_ANAREG_TOP_179	=	0x82cc
                    82D0   1375 _UPHY14_CMN_ANAREG_TOP_180	=	0x82d0
                    82D4   1376 _UPHY14_CMN_ANAREG_TOP_181	=	0x82d4
                    82D8   1377 _UPHY14_CMN_ANAREG_TOP_182	=	0x82d8
                    82DC   1378 _UPHY14_CMN_ANAREG_TOP_183	=	0x82dc
                    82E0   1379 _UPHY14_CMN_ANAREG_TOP_184	=	0x82e0
                    82E4   1380 _UPHY14_CMN_ANAREG_TOP_185	=	0x82e4
                    82E8   1381 _UPHY14_CMN_ANAREG_TOP_186	=	0x82e8
                    82EC   1382 _UPHY14_CMN_ANAREG_TOP_187	=	0x82ec
                    82F0   1383 _UPHY14_CMN_ANAREG_TOP_188	=	0x82f0
                    82F4   1384 _UPHY14_CMN_ANAREG_TOP_189	=	0x82f4
                    82F8   1385 _UPHY14_CMN_ANAREG_TOP_190	=	0x82f8
                    82FC   1386 _UPHY14_CMN_ANAREG_TOP_191	=	0x82fc
                    8300   1387 _UPHY14_CMN_ANAREG_TOP_192	=	0x8300
                    8304   1388 _UPHY14_CMN_ANAREG_TOP_193	=	0x8304
                    8308   1389 _UPHY14_CMN_ANAREG_TOP_194	=	0x8308
                    830C   1390 _UPHY14_CMN_ANAREG_TOP_195	=	0x830c
                    8310   1391 _UPHY14_CMN_ANAREG_TOP_196	=	0x8310
                    8314   1392 _UPHY14_CMN_ANAREG_TOP_197	=	0x8314
                    8318   1393 _UPHY14_CMN_ANAREG_TOP_198	=	0x8318
                    831C   1394 _UPHY14_CMN_ANAREG_TOP_199	=	0x831c
                    8320   1395 _UPHY14_CMN_ANAREG_TOP_200	=	0x8320
                    8324   1396 _UPHY14_CMN_ANAREG_TOP_201	=	0x8324
                    8328   1397 _UPHY14_CMN_ANAREG_TOP_202	=	0x8328
                    832C   1398 _UPHY14_CMN_ANAREG_TOP_203	=	0x832c
                    8330   1399 _UPHY14_CMN_ANAREG_TOP_204	=	0x8330
                    8334   1400 _UPHY14_CMN_ANAREG_TOP_205	=	0x8334
                    8338   1401 _UPHY14_CMN_ANAREG_TOP_206	=	0x8338
                    833C   1402 _UPHY14_CMN_ANAREG_TOP_207	=	0x833c
                    8340   1403 _UPHY14_CMN_ANAREG_TOP_208	=	0x8340
                    8344   1404 _UPHY14_CMN_ANAREG_TOP_209	=	0x8344
                    8348   1405 _UPHY14_CMN_ANAREG_TOP_210	=	0x8348
                    834C   1406 _UPHY14_CMN_ANAREG_TOP_211	=	0x834c
                    8350   1407 _UPHY14_CMN_ANAREG_TOP_212	=	0x8350
                    8354   1408 _UPHY14_CMN_ANAREG_TOP_213	=	0x8354
                    8358   1409 _UPHY14_CMN_ANAREG_TOP_214	=	0x8358
                    2000   1410 _PM_CTRL_TX_LANE_REG1_LANE	=	0x2000
                    2004   1411 _PM_CTRL_TX_LANE_REG2_LANE	=	0x2004
                    2008   1412 _INPUT_TX_PIN_REG0_LANE	=	0x2008
                    200C   1413 _INPUT_TX_PIN_REG1_LANE	=	0x200c
                    2010   1414 _INPUT_TX_PIN_REG2_LANE	=	0x2010
                    2014   1415 _INPUT_TX_PIN_REG3_LANE	=	0x2014
                    2018   1416 _PM_CTRL_INTERRUPT_REG1_LANE	=	0x2018
                    201C   1417 _PM_CTRL_INTERRUPT_REG2	=	0x201c
                    2020   1418 _CLKGEN_TX_LANE_REG1_LANE	=	0x2020
                    2024   1419 _TX_SPEED_CONVERT_LANE	=	0x2024
                    2028   1420 _SPD_CTRL_INTERRUPT_REG1_LANE	=	0x2028
                    202C   1421 _SPD_CTRL_INTERRUPT_REG2	=	0x202c
                    2030   1422 _SPD_CTRL_TX_LANE_REG1_LANE	=	0x2030
                    2034   1423 _TX_SYSTEM_LANE	=	0x2034
                    203C   1424 _INPUT_TX_PIN_REG4_LANE	=	0x203c
                    2040   1425 _TX_CALIBRATION_LANE	=	0x2040
                    2044   1426 _DIG_TX_RSVD_REG0	=	0x2044
                    2048   1427 _INPUT_TX_PIN_REG5_LANE	=	0x2048
                    204C   1428 __FIELDNAME__LANE	=	0x204c
                    2050   1429 _PM_CTRL_INTERRUPT_ISR_REG1_LANE	=	0x2050
                    2054   1430 _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE	=	0x2054
                    2058   1431 _ANALOG_TX_REALTIME_REG_1	=	0x2058
                    205C   1432 _MON_TOP	=	0x205c
                    2100   1433 _PM_CTRL_RX_LANE_REG1_LANE	=	0x2100
                    2104   1434 _RX_SYSTEM_LANE	=	0x2104
                    2108   1435 _INPUT_RX_PIN_REG0_LANE	=	0x2108
                    210C   1436 _INPUT_RX_PIN_REG1_LANE	=	0x210c
                    2110   1437 _INPUT_RX_PIN_REG2_LANE	=	0x2110
                    2114   1438 _SPD_CTRL_RX_LANE_REG1_LANE	=	0x2114
                    2118   1439 _DIG_RX_RSVD_REG0	=	0x2118
                    211C   1440 _CLKGEN_RX_LANE_REG1_LANE	=	0x211c
                    2120   1441 _FRAME_SYNC_DET_REG0	=	0x2120
                    2124   1442 _FRAME_SYNC_DET_REG1	=	0x2124
                    2128   1443 _FRAME_SYNC_DET_REG2	=	0x2128
                    212C   1444 _FRAME_SYNC_DET_REG3	=	0x212c
                    2130   1445 _FRAME_SYNC_DET_REG4	=	0x2130
                    2134   1446 _FRAME_SYNC_DET_REG5	=	0x2134
                    2138   1447 _FRAME_SYNC_DET_REG6	=	0x2138
                    213C   1448 _CDR_LOCK_REG	=	0x213c
                    2140   1449 _RX_LANE_INTERRUPT	=	0x2140
                    2144   1450 _RX_LANE_INTERRUPT_MASK	=	0x2144
                    2148   1451 _RX_DATA_PATH_REG	=	0x2148
                    214C   1452 _INPUT_RX_PIN_REG3_LANE	=	0x214c
                    2150   1453 _RX_CALIBRATION_REG	=	0x2150
                    2158   1454 _RX_LANE_INTERRUPT_REG1	=	0x2158
                    2160   1455 _DTL_REG0	=	0x2160
                    2164   1456 _DTL_REG1	=	0x2164
                    2168   1457 _DTL_REG2	=	0x2168
                    216C   1458 _DTL_REG3	=	0x216c
                    2170   1459 _SQ_REG0	=	0x2170
                    4000   1460 _LANE_CFG0	=	0x4000
                    4004   1461 _LANE_STATUS0	=	0x4004
                    4008   1462 _LANE_CFG_STATUS2_LANE	=	0x4008
                    400C   1463 _LANE_CFG2_LANE	=	0x400c
                    4010   1464 _LANE_CFG4	=	0x4010
                    4014   1465 _LANE_CFG_STATUS3_LANE	=	0x4014
                    4018   1466 _LANE_DP_PIE8_CFG0_LANE	=	0x4018
                    401C   1467 _LANE_USB_DP_CFG1_LANE	=	0x401c
                    4020   1468 _LANE_USB_DP_CFG2_LANE	=	0x4020
                    4024   1469 _LANE_EQ_CFG0_LANE	=	0x4024
                    4028   1470 _LANE_EQ_CFG1_LANE	=	0x4028
                    402C   1471 _LANE_PRESET_CFG0_LANE	=	0x402c
                    4030   1472 _LANE_PRESET_CFG2_LANE	=	0x4030
                    4034   1473 _LANE_PRESET_CFG4_LANE	=	0x4034
                    4038   1474 _LANE_PRESET_CFG6_LANE	=	0x4038
                    403C   1475 _LANE_PRESET_CFG8_LANE	=	0x403c
                    4040   1476 _LANE_PRESET_CFG10_LANE	=	0x4040
                    4044   1477 _LANE_PRESET_CFG12_LANE	=	0x4044
                    4048   1478 _LANE_PRESET_CFG14_LANE	=	0x4048
                    404C   1479 _LANE_PRESET_CFG16_LANE	=	0x404c
                    4050   1480 _LANE_COEFF_MAX0_LANE	=	0x4050
                    4054   1481 _LANE_REMOTE_SET_LANE	=	0x4054
                    4058   1482 _LANE_EQ_16G_CFG0_LANE	=	0x4058
                    405C   1483 _LANE_16G_PRESET_CFG0_LANE	=	0x405c
                    4060   1484 _LANE_16G_PRESET_CFG2_LANE	=	0x4060
                    4064   1485 _LANE_16G_PRESET_CFG4_LANE	=	0x4064
                    4068   1486 _LANE_16G_PRESET_CFG6_LANE	=	0x4068
                    406C   1487 _LANE_16G_PRESET_CFG8_LANE	=	0x406c
                    4070   1488 _LANE_16G_PRESET_CFG10_LANE	=	0x4070
                    4074   1489 _LANE_16G_PRESET_CFG12_LANE	=	0x4074
                    4078   1490 _LANE_16G_PRESET_CFG14_LANE	=	0x4078
                    407C   1491 _LANE_16G_PRESET_CFG16_LANE	=	0x407c
                    4080   1492 _LANE_EQ_32G_CFG0_LANE	=	0x4080
                    4084   1493 _LANE_32G_PRESET_CFG0_LANE	=	0x4084
                    4088   1494 _LANE_32G_PRESET_CFG2_LANE	=	0x4088
                    408C   1495 _LANE_32G_PRESET_CFG4_LANE	=	0x408c
                    4090   1496 _LANE_32G_PRESET_CFG6_LANE	=	0x4090
                    4094   1497 _LANE_32G_PRESET_CFG8_LANE	=	0x4094
                    4098   1498 _LANE_32G_PRESET_CFG10_LANE	=	0x4098
                    409C   1499 _LANE_32G_PRESET_CFG12_LANE	=	0x409c
                    40A0   1500 _LANE_32G_PRESET_CFG14_LANE	=	0x40a0
                    40A4   1501 _LANE_32G_PRESET_CFG16_LANE	=	0x40a4
                    2200   1502 _MCU_CONTROL_LANE	=	0x2200
                    2204   1503 _MCU_GPIO	=	0x2204
                    2208   1504 _CACHE_DEBUG0	=	0x2208
                    220C   1505 _CACHE_DEBUG1	=	0x220c
                    2210   1506 _LANE_SYSTEM0	=	0x2210
                    2230   1507 _MCU_STATUS0_LANE	=	0x2230
                    2234   1508 _MCU_STATUS1_LANE	=	0x2234
                    2238   1509 _MCU_STATUS2_LANE	=	0x2238
                    223C   1510 _MCU_STATUS3_LANE	=	0x223c
                    2240   1511 _MCU_INT0_CONTROL	=	0x2240
                    2244   1512 _MCU_INT1_CONTROL	=	0x2244
                    2248   1513 _MCU_INT2_CONTROL	=	0x2248
                    224C   1514 _MCU_INT3_CONTROL	=	0x224c
                    2250   1515 _MCU_INT4_CONTROL	=	0x2250
                    2254   1516 _MCU_INT5_CONTROL	=	0x2254
                    2258   1517 _MCU_INT6_CONTROL	=	0x2258
                    225C   1518 _MCU_INT7_CONTROL	=	0x225c
                    2260   1519 _MCU_INT8_CONTROL	=	0x2260
                    2264   1520 _MCU_INT9_CONTROL	=	0x2264
                    2268   1521 _MCU_INT10_CONTROL	=	0x2268
                    226C   1522 _MCU_INT11_CONTROL	=	0x226c
                    2270   1523 _MCU_INT12_CONTROL	=	0x2270
                    2274   1524 _MCU_TIMER_CONTROL	=	0x2274
                    2278   1525 _MCU_TIMER0_CONTROL	=	0x2278
                    227C   1526 _MCU_TIMER1_CONTROL	=	0x227c
                    2280   1527 _MCU_TIMER2_CONTROL	=	0x2280
                    2284   1528 _MCU_TIMER3_CONTROL	=	0x2284
                    2288   1529 _MCU_IRQ_LANE	=	0x2288
                    228C   1530 _MCU_IRQ_MASK_LANE	=	0x228c
                    2290   1531 _MCU_MEM_REG1_LANE	=	0x2290
                    2294   1532 _MCU_MEM_REG2_LANE	=	0x2294
                    2298   1533 _MCU_TIMER_CTRL_1_LANE	=	0x2298
                    229C   1534 _MCU_TIMER_CTRL_2_LANE	=	0x229c
                    22A0   1535 _MCU_TIMER_CTRL_3_LANE	=	0x22a0
                    22A4   1536 _MCU_TIMER_CTRL_4_LANE	=	0x22a4
                    22A8   1537 _MCU_TIMER_CTRL_5_LANE	=	0x22a8
                    22AC   1538 _MCU_TIMER_CTRL_6_LANE	=	0x22ac
                    22B0   1539 _MCU_TIMER_CTRL_7_LANE	=	0x22b0
                    22B4   1540 _MCU_DEBUG0_LANE	=	0x22b4
                    22B8   1541 _MCU_DEBUG1_LANE	=	0x22b8
                    22BC   1542 _MCU_DEBUG2_LANE	=	0x22bc
                    22C0   1543 _MCU_DEBUG3_LANE	=	0x22c0
                    22C4   1544 _MCU_DEBUG_LANE	=	0x22c4
                    22C8   1545 _EXT_INT_CONTROL	=	0x22c8
                    22CC   1546 _ANA_IF_TRX_REG0	=	0x22cc
                    22D0   1547 _ANA_IF_DFEE_REG0	=	0x22d0
                    22D4   1548 _ANA_IF_DFEO_REG0	=	0x22d4
                    22D8   1549 _MCU_IRQ_ISR_LANE	=	0x22d8
                    22DC   1550 _MCU_WDT_LANE	=	0x22dc
                    22E0   1551 _MCU_INT_CONTROL_13	=	0x22e0
                    22E4   1552 _MCU_COMMAND0	=	0x22e4
                    22F4   1553 _MEM_ECC_ERR_ADDRESS0	=	0x22f4
                    22F8   1554 _XDATA_MEM_CHECKSUM_LANE0	=	0x22f8
                    22FC   1555 _XDATA_MEM_CHECKSUM_LANE1	=	0x22fc
                    2300   1556 _PT_CONTROL0	=	0x2300
                    2304   1557 _PT_CONTROL1	=	0x2304
                    2308   1558 _PT_USER_PATTERN0	=	0x2308
                    230C   1559 _PT_USER_PATTERN1	=	0x230c
                    2310   1560 _PT_USER_PATTERN2	=	0x2310
                    2314   1561 _PT_COUNTER0	=	0x2314
                    2318   1562 _PT_COUNTER1	=	0x2318
                    231C   1563 _PT_COUNTER2	=	0x231c
                    2400   1564 _DFE_CTRL_REG0	=	0x2400
                    2404   1565 _DFE_CTRL_REG1	=	0x2404
                    2408   1566 _DFE_CTRL_REG2	=	0x2408
                    240C   1567 _DFE_CTRL_REG3	=	0x240c
                    2410   1568 _RX_EQ_CLK_CTRL	=	0x2410
                    2414   1569 _DFE_CTRL_REG4	=	0x2414
                    2418   1570 _DFE_ANA_REG0	=	0x2418
                    241C   1571 _DFE_ANA_REG1	=	0x241c
                    2420   1572 _DFE_STEP_REG0	=	0x2420
                    2424   1573 _DFE_STEP_REG1	=	0x2424
                    2430   1574 _DFE_FEN_EVEN_REG	=	0x2430
                    2434   1575 _DFE_FEN_ODD_REG	=	0x2434
                    2438   1576 _DFE_DC_EVEN_REG8	=	0x2438
                    243C   1577 _DFE_DC_ODD_REG8	=	0x243c
                    2440   1578 _DFE_FEXT_EVEN_REG0	=	0x2440
                    2444   1579 _DFE_FEXT_EVEN_REG1	=	0x2444
                    2448   1580 _DFE_FEXT_EVEN_REG2	=	0x2448
                    244C   1581 _DFE_FEXT_EVEN_REG3	=	0x244c
                    2450   1582 _DFE_FEXT_EVEN_REG4	=	0x2450
                    2454   1583 _DFE_FEXT_EVEN_REG5	=	0x2454
                    2458   1584 _DFE_FEXT_EVEN_REG6	=	0x2458
                    245C   1585 _DFE_FEXT_EVEN_REG7	=	0x245c
                    2460   1586 _DFE_FEXT_ODD_REG0	=	0x2460
                    2464   1587 _DFE_FEXT_ODD_REG1	=	0x2464
                    2468   1588 _DFE_FEXT_ODD_REG2	=	0x2468
                    246C   1589 _DFE_FEXT_ODD_REG3	=	0x246c
                    2470   1590 _DFE_FEXT_ODD_REG4	=	0x2470
                    2474   1591 _DFE_FEXT_ODD_REG5	=	0x2474
                    2478   1592 _DFE_FEXT_ODD_REG6	=	0x2478
                    247C   1593 _DFE_FEXT_ODD_REG7	=	0x247c
                    2480   1594 _DFE_READ_EVEN_SM_REG0	=	0x2480
                    2484   1595 _DFE_READ_EVEN_SM_REG1	=	0x2484
                    2488   1596 _DFE_READ_EVEN_SM_REG2	=	0x2488
                    248C   1597 _DFE_READ_EVEN_SM_REG3	=	0x248c
                    2490   1598 _DFE_READ_EVEN_SM_REG4	=	0x2490
                    2494   1599 _DFE_READ_EVEN_SM_REG5	=	0x2494
                    2498   1600 _DFE_READ_EVEN_SM_REG6	=	0x2498
                    249C   1601 _DFE_READ_EVEN_SM_REG7	=	0x249c
                    24A0   1602 _DFE_READ_ODD_SM_REG0	=	0x24a0
                    24A4   1603 _DFE_READ_ODD_SM_REG1	=	0x24a4
                    24A8   1604 _DFE_READ_ODD_SM_REG2	=	0x24a8
                    24AC   1605 _DFE_READ_ODD_SM_REG3	=	0x24ac
                    24B0   1606 _DFE_READ_ODD_SM_REG4	=	0x24b0
                    24B4   1607 _DFE_READ_ODD_SM_REG5	=	0x24b4
                    24B8   1608 _DFE_READ_ODD_SM_REG6	=	0x24b8
                    24BC   1609 _DFE_READ_ODD_SM_REG7	=	0x24bc
                    24C0   1610 _DFE_READ_EVEN_SM_REG8	=	0x24c0
                    24C4   1611 _DFE_READ_ODD_SM_REG8	=	0x24c4
                    24D0   1612 _DFE_READ_EVEN_2C_REG0	=	0x24d0
                    24D4   1613 _DFE_READ_EVEN_2C_REG1	=	0x24d4
                    24D8   1614 _DFE_READ_EVEN_2C_REG2	=	0x24d8
                    24DC   1615 _DFE_READ_EVEN_2C_REG3	=	0x24dc
                    24E0   1616 _DFE_READ_EVEN_2C_REG4	=	0x24e0
                    24E4   1617 _DFE_READ_EVEN_2C_REG5	=	0x24e4
                    24E8   1618 _DFE_READ_EVEN_2C_REG6	=	0x24e8
                    24EC   1619 _DFE_READ_EVEN_2C_REG7	=	0x24ec
                    24F0   1620 _DFE_READ_ODD_2C_REG0	=	0x24f0
                    24F4   1621 _DFE_READ_ODD_2C_REG1	=	0x24f4
                    24F8   1622 _DFE_READ_ODD_2C_REG2	=	0x24f8
                    24FC   1623 _DFE_READ_ODD_2C_REG3	=	0x24fc
                    2500   1624 _DFE_READ_ODD_2C_REG4	=	0x2500
                    2504   1625 _DFE_READ_ODD_2C_REG5	=	0x2504
                    2508   1626 _DFE_READ_ODD_2C_REG6	=	0x2508
                    250C   1627 _DFE_READ_ODD_2C_REG7	=	0x250c
                    2510   1628 _DFE_READ_EVEN_2C_REG8	=	0x2510
                    2514   1629 _DFE_READ_ODD_2C_REG8	=	0x2514
                    2518   1630 _CAL_OFST_REG0	=	0x2518
                    251C   1631 _CAL_OFST_REG1	=	0x251c
                    2520   1632 _CAL_OFST_REG2	=	0x2520
                    2530   1633 _DFE_DCE_REG0	=	0x2530
                    2540   1634 _DFE_STATIC_LANE_REG0	=	0x2540
                    2544   1635 _DFE_STATIC_LANE_REG1	=	0x2544
                    2548   1636 _DFE_STATIC_LANE_REG3	=	0x2548
                    254C   1637 _DFE_STATIC_LANE_REG4	=	0x254c
                    2550   1638 _DFE_STATIC_LANE_REG5	=	0x2550
                    2554   1639 _DFE_STATIC_LANE_REG6	=	0x2554
                    2560   1640 _EOM_VLD_REG0	=	0x2560
                    2564   1641 _EOM_VLD_REG1	=	0x2564
                    2568   1642 _EOM_VLD_REG2	=	0x2568
                    256C   1643 _EOM_VLD_REG3	=	0x256c
                    2570   1644 _EOM_ERR_REG0	=	0x2570
                    2574   1645 _EOM_ERR_REG1	=	0x2574
                    2578   1646 _EOM_ERR_REG2	=	0x2578
                    257C   1647 _EOM_ERR_REG3	=	0x257c
                    2580   1648 _EOM_REG0	=	0x2580
                    25F0   1649 _EOM_VLD_REG4	=	0x25f0
                    25F4   1650 _LANE_MARGIN_REG0	=	0x25f4
                    6000   1651 _CAL_CTRL1_LANE	=	0x6000
                    6004   1652 _CAL_CTRL2_LANE	=	0x6004
                    6008   1653 _CAL_CTRL3_LANE	=	0x6008
                    600C   1654 _CAL_CTRL4_LANE	=	0x600c
                    6010   1655 _CAL_SAVE_DATA1_LANE	=	0x6010
                    6014   1656 _CAL_SAVE_DATA2_LANE	=	0x6014
                    6018   1657 _CAL_SAVE_DATA3_LANE	=	0x6018
                    601C   1658 _PHY_REMOTE_CTRL_COMMAND_LANE	=	0x601c
                    6020   1659 _PHY_REMOTE_CTRL_VALUE_LANE	=	0x6020
                    6024   1660 _PHY_LOCAL_VALUE_LANE	=	0x6024
                    6028   1661 _TRX_TRAIN_IF_TIMERS1_LANE	=	0x6028
                    602C   1662 _TRX_TRAIN_IF_TIMERS2_LANE	=	0x602c
                    6030   1663 _TRX_TRAIN_IF_TIMERS_ENABLE_LANE	=	0x6030
                    6034   1664 _DFE_CONTROL_0	=	0x6034
                    6038   1665 _DFE_CONTROL_1	=	0x6038
                    6040   1666 _DFE_CONTROL_2	=	0x6040
                    6044   1667 _DFE_CONTROL_3	=	0x6044
                    6048   1668 _DFE_CONTROL_4	=	0x6048
                    604C   1669 _DFE_CONTROL_5	=	0x604c
                    6050   1670 _TRAIN_CONTROL_0	=	0x6050
                    6054   1671 _TRAIN_CONTROL_1	=	0x6054
                    6058   1672 _TRAIN_CONTROL_2	=	0x6058
                    605C   1673 _RPTA_CONFIG_0	=	0x605c
                    6060   1674 _RPTA_CONFIG_1	=	0x6060
                    6064   1675 _DLL_CAL	=	0x6064
                    6068   1676 _TRAIN_PARA_0	=	0x6068
                    606C   1677 _TRAIN_PARA_1	=	0x606c
                    6070   1678 _TRAIN_PARA_2	=	0x6070
                    6074   1679 _TRAIN_PARA_3	=	0x6074
                    6078   1680 _DFE_CONTROL_6	=	0x6078
                    607C   1681 _DFE_TEST_0	=	0x607c
                    6080   1682 _DFE_TEST_1	=	0x6080
                    6084   1683 _DFE_TEST_4	=	0x6084
                    6088   1684 _DFE_TEST_5	=	0x6088
                    608C   1685 _DFE_CONTROL_7	=	0x608c
                    6090   1686 _DFE_CONTROL_8	=	0x6090
                    6094   1687 _DFE_CONTROL_9	=	0x6094
                    6098   1688 _DFE_CONTROL_10	=	0x6098
                    609C   1689 _DFE_CONTROL_11	=	0x609c
                    60A0   1690 _CDS_CTRL_REG0	=	0x60a0
                    60A4   1691 _CDS_CTRL_REG1	=	0x60a4
                    60A8   1692 _ESM_POP_P_CNT_LOW_LANE	=	0x60a8
                    60AC   1693 _ESM_ERR_P_CNT_LOW_LANE	=	0x60ac
                    60B0   1694 _ESM_ERR_POP_CNT_HIGH_LANE	=	0x60b0
                    60B4   1695 _TRAIN_CONTROL_3	=	0x60b4
                    60B8   1696 _TRAIN_CONTROL_4	=	0x60b8
                    60BC   1697 _TRAIN_CONTROL_5	=	0x60bc
                    60C0   1698 _TRAIN_CONTROL_6	=	0x60c0
                    60C4   1699 _TRAIN_CONTROL_7	=	0x60c4
                    60C8   1700 _TRAIN_CONTROL_8	=	0x60c8
                    60CC   1701 _TRAIN_CONTROL_9	=	0x60cc
                    60D0   1702 _TRAIN_CONTROL_10	=	0x60d0
                    60D4   1703 _TRAIN_CONTROL_11	=	0x60d4
                    60D8   1704 _TRAIN_CONTROL_12	=	0x60d8
                    60DC   1705 _ESM_POP_N_CNT_LOW_LANE	=	0x60dc
                    60E0   1706 _ESM_ERR_N_CNT_LOW_LANE	=	0x60e0
                    60E4   1707 _TRAIN_CONTROL_13	=	0x60e4
                    60E8   1708 _TRAIN_CONTROL_14	=	0x60e8
                    60EC   1709 _TRAIN_CONTROL_15	=	0x60ec
                    60F0   1710 _TRAIN_CONTROL_16	=	0x60f0
                    60F4   1711 _TRAIN_CONTROL_17	=	0x60f4
                    60F8   1712 _END_XDAT_LANE	=	0x60f8
                    A000   1713 _TX_CMN_REG	=	0xa000
                    A008   1714 _DTX_REG0	=	0xa008
                    A00C   1715 _DTX_REG1	=	0xa00c
                    A010   1716 _DTX_REG2	=	0xa010
                    A014   1717 _DTX_REG3	=	0xa014
                    A018   1718 _DTX_REG4	=	0xa018
                    A01C   1719 _DTX_PHY_ALIGN_REG0	=	0xa01c
                    A024   1720 _DTX_PHY_ALIGN_REG1	=	0xa024
                    A028   1721 _DTX_PHY_ALIGN_REG2	=	0xa028
                    A02C   1722 _SRIS_REG0	=	0xa02c
                    A030   1723 _SRIS_REG1	=	0xa030
                    A100   1724 _RX_CMN_0	=	0xa100
                    A110   1725 _DFE_STATIC_REG0	=	0xa110
                    A114   1726 _DFE_STATIC_REG1	=	0xa114
                    A118   1727 _DFE_STATIC_REG3	=	0xa118
                    A11C   1728 _DFE_STATIC_REG4	=	0xa11c
                    A120   1729 _DFE_STATIC_REG5	=	0xa120
                    A124   1730 _DFE_STATIC_REG6	=	0xa124
                    4200   1731 _GLOB_RST_CLK_CTRL	=	0x4200
                    4204   1732 _GLOB_CLK_SRC_LO	=	0x4204
                    4208   1733 _GLOB_CLK_SRC_HI	=	0x4208
                    420C   1734 _GLOB_MISC_CTRL	=	0x420c
                    4210   1735 _GLOB_DP_SAL_CFG	=	0x4210
                    4214   1736 _GLOB_DP_SAL_CFG1	=	0x4214
                    4218   1737 _GLOB_DP_SAL_CFG3	=	0x4218
                    421C   1738 _GLOB_DP_SAL_CFG5	=	0x421c
                    4220   1739 _GLOB_PM_CFG0	=	0x4220
                    4224   1740 _GLOB_COUNTER_CTRL	=	0x4224
                    4228   1741 _GLOB_COUNTER_HI	=	0x4228
                    422C   1742 _GLOB_PM_DP_CTRL	=	0x422c
                    4230   1743 _GLOB_DP_BAL_CFG0	=	0x4230
                    4234   1744 _GLOB_DP_BAL_CFG2	=	0x4234
                    4238   1745 _GLOB_DP_BAL_CFG4	=	0x4238
                    423C   1746 _GLOB_BIST_CTRL	=	0x423c
                    4240   1747 _GLOB_BIST_LANE_TYPE	=	0x4240
                    4244   1748 _GLOB_BIST_START	=	0x4244
                    4248   1749 _GLOB_BIST_MASK	=	0x4248
                    424C   1750 _GLOB_BIST_RESULT	=	0x424c
                    4250   1751 _GLOB_BIST_SEQR_CFG	=	0x4250
                    4254   1752 _GLOB_BIST_DATA_HI	=	0x4254
                    4258   1753 _GLOB_PIPE_REVISION	=	0x4258
                    425C   1754 _GLOB_L1_SUBSTATES_CFG	=	0x425c
                    A200   1755 _MCU_CONTROL_0	=	0xa200
                    A204   1756 _MCU_CONTROL_1	=	0xa204
                    A208   1757 _MCU_CONTROL_2	=	0xa208
                    A20C   1758 _MCU_CONTROL_3	=	0xa20c
                    A210   1759 _MCU_CONTROL_4	=	0xa210
                    A214   1760 _MCU_DEBUG0	=	0xa214
                    A218   1761 _MCU_DEBUG1	=	0xa218
                    A21C   1762 _MEMORY_CONTROL_0	=	0xa21c
                    A220   1763 _MEMORY_CONTROL_1	=	0xa220
                    A224   1764 _MEMORY_CONTROL_2	=	0xa224
                    A228   1765 _MEMORY_CONTROL_3	=	0xa228
                    A22C   1766 _MEMORY_CONTROL_4	=	0xa22c
                    A234   1767 _MCU_INFO_0	=	0xa234
                    A238   1768 _MCU_INFO_1	=	0xa238
                    A23C   1769 _MCU_INFO_2	=	0xa23c
                    A240   1770 _MCU_INFO_3	=	0xa240
                    A244   1771 _MEM_CMN_ECC_ERR_ADDRESS0	=	0xa244
                    A2E0   1772 _ANA_IF_CMN_REG1	=	0xa2e0
                    A2E4   1773 _MEM_IRQ	=	0xa2e4
                    A2E8   1774 _MEM_IRQ_MASK	=	0xa2e8
                    A2EC   1775 _ANA_IF_CMN_REG0	=	0xa2ec
                    A2F0   1776 _APB_CONTROL_REG	=	0xa2f0
                    A2F4   1777 _MEM_IRQ_CLEAR	=	0xa2f4
                    A2F8   1778 _MCU_SYNC1	=	0xa2f8
                    A2FC   1779 _MCU_SYNC2	=	0xa2fc
                    A300   1780 _TEST0	=	0xa300
                    A304   1781 _TEST1	=	0xa304
                    A308   1782 _TEST2	=	0xa308
                    A30C   1783 _TEST3	=	0xa30c
                    A310   1784 _TEST4	=	0xa310
                    A314   1785 _SYSTEM	=	0xa314
                    A318   1786 _PM_CMN_REG1	=	0xa318
                    A31C   1787 _INPUT_CMN_PIN_REG0	=	0xa31c
                    A320   1788 _INPUT_CMN_PIN_REG1	=	0xa320
                    A324   1789 _INPUT_CMN_PIN_REG2	=	0xa324
                    A328   1790 _ANA_TSEN_CONTROL	=	0xa328
                    A32C   1791 _PLLCAL_REG0	=	0xa32c
                    A330   1792 _PLLCAL_REG1	=	0xa330
                    A334   1793 _CLKGEN_CMN_REG1	=	0xa334
                    A338   1794 _SPD_CMN_REG1	=	0xa338
                    A33C   1795 _OUTPUT_CMN_PIN_REG0	=	0xa33c
                    A340   1796 _CMN_CALIBRATION	=	0xa340
                    A344   1797 __FIELDNAME_	=	0xa344
                    A348   1798 _INPUT_CMN_PIN_REG3	=	0xa348
                    A34C   1799 _PM_CMN_REG2	=	0xa34c
                    A354   1800 _TEST5	=	0xa354
                    A358   1801 _XDATA_MEM_CHECKSUM_CMN_0	=	0xa358
                    A35C   1802 _XDATA_MEM_CHECKSUM_CMN_1	=	0xa35c
                    A360   1803 _XDATA_MEM_CHECKSUM_CMN_2	=	0xa360
                    A364   1804 _MCU_SDT_CMN	=	0xa364
                    A368   1805 _CMN_CACHE_DEBUG0	=	0xa368
                    A36C   1806 _MCU_INT_ADDR	=	0xa36c
                    A370   1807 _CMN_ISR_2	=	0xa370
                    A374   1808 _CMN_ISR_MASK_2	=	0xa374
                    A378   1809 _CMN_ISR_CLEAR_2	=	0xa378
                    A37C   1810 _CMN_MCU_GPIO	=	0xa37c
                    A380   1811 _CMN_CACHE_DEBUG1	=	0xa380
                    A384   1812 _CMN_MCU_TIMER_CONTROL	=	0xa384
                    A388   1813 _CMN_MCU_TIMER_CTRL_2_LANE	=	0xa388
                    A38C   1814 _CMN_MCU_TIMER_CTRL_3_LANE	=	0xa38c
                    A390   1815 _CMN_MCU_TIMER_CTRL_4_LANE	=	0xa390
                    A394   1816 _CMN_MCU_TIMER_CTRL_5_LANE	=	0xa394
                    A398   1817 _CMN_MCU_TIMER0_CONTROL	=	0xa398
                    A39C   1818 _CMN_MCU_TIMER1_CONTROL	=	0xa39c
                    A3A0   1819 _CMN_MCU_TIMER2_CONTROL	=	0xa3a0
                    A3A4   1820 _CMN_MCU_TIMER3_CONTROL	=	0xa3a4
                    A3A8   1821 _CMN_ISR_1	=	0xa3a8
                    A3AC   1822 _CMN_ISR_MASK_1	=	0xa3ac
                    A3B0   1823 _SET_LANE_ISR	=	0xa3b0
                    A3F4   1824 _CMN_MCU_REG	=	0xa3f4
                    A3F8   1825 _CID_REG0	=	0xa3f8
                    A3FC   1826 _CID_REG1	=	0xa3fc
                    E600   1827 _FW_REV	=	0xe600
                    E604   1828 _CONTROL_CONFIG0	=	0xe604
                    E608   1829 _CONTROL_CONFIG1	=	0xe608
                    E60C   1830 _CONTROL_CONFIG2	=	0xe60c
                    E610   1831 _CONTROL_CONFIG3	=	0xe610
                    E614   1832 _CONTROL_CONFIG4	=	0xe614
                    E618   1833 _CONTROL_CONFIG5	=	0xe618
                    E61C   1834 _CONTROL_CONFIG6	=	0xe61c
                    E620   1835 _CONTROL_CONFIG7	=	0xe620
                    E624   1836 _CAL_DATA0	=	0xe624
                    E628   1837 _TRAIN_IF_CONFIG	=	0xe628
                    E62C   1838 _CONTROL_CONFIG8	=	0xe62c
                    E630   1839 _CONTROL_CONFIG9	=	0xe630
                    E634   1840 _CON_CAL_STEP_SIZE1	=	0xe634
                    E638   1841 _CON_CAL_STEP_SIZE2	=	0xe638
                    E63C   1842 _CON_CAL_STEP_SIZE3	=	0xe63c
                    E640   1843 _CON_CAL_STEP_SIZE4	=	0xe640
                    E644   1844 _CON_CAL_STEP_SIZE5	=	0xe644
                    E648   1845 _CAL_TIME_OUT_AND_DIS	=	0xe648
                    E64C   1846 _CAL_STATUS_READ	=	0xe64c
                    E650   1847 _MCU_CONFIG	=	0xe650
                    E654   1848 _CAL_DATA1	=	0xe654
                    E658   1849 _LOOP_CNTS	=	0xe658
                    E65C   1850 _MCU_CONFIG1	=	0xe65c
                    E660   1851 _TIMER_SEL1	=	0xe660
                    E664   1852 _TIMER_SEL2	=	0xe664
                    E668   1853 _TIMER_SEL3	=	0xe668
                    E66C   1854 _G_SELLV_TXCLK	=	0xe66c
                    E670   1855 _G_SELLV_TXDATA	=	0xe670
                    E674   1856 _G_SELLV_TXPRE	=	0xe674
                    E678   1857 _G_SELLV_RXEOMCLK	=	0xe678
                    E67C   1858 _G_SELLV_RXDATACLK	=	0xe67c
                    E680   1859 _G_SELLV_RXSAMPLER	=	0xe680
                    E684   1860 _SAS_PRESET0_TB	=	0xe684
                    E688   1861 _SAS_PRESET1_TB	=	0xe688
                    E68C   1862 _SAS_PRESET2_TB	=	0xe68c
                    E690   1863 _ETH_PRESET0_TB	=	0xe690
                    E694   1864 _ETH_PRESET1_TB	=	0xe694
                    E698   1865 _TX_SAVE_0	=	0xe698
                    E69C   1866 _TX_SAVE_1	=	0xe69c
                    E6A0   1867 _TX_SAVE_2	=	0xe6a0
                    E6A4   1868 _TX_SAVE_3	=	0xe6a4
                    E6A8   1869 _TX_SAVE_4	=	0xe6a8
                    E6AC   1870 _CDS_EYE_CLK_THR	=	0xe6ac
                    E6B0   1871 _SYNC_INFO	=	0xe6b0
                    E6B4   1872 _MCU_INFO_4	=	0xe6b4
                    E6B8   1873 _MCU_INFO_5	=	0xe6b8
                    E6BC   1874 _MCU_INFO_12	=	0xe6bc
                    E6C0   1875 _MCU_INFO_13	=	0xe6c0
                    E6C4   1876 _END_XDAT_CMN	=	0xe6c4
                    2600   1877 _DME_ENC_REG0	=	0x2600
                    2604   1878 _DME_ENC_REG1	=	0x2604
                    2608   1879 _DME_ENC_REG2	=	0x2608
                    260C   1880 _DME_DEC_REG0	=	0x260c
                    2610   1881 _DME_DEC_REG1	=	0x2610
                    2614   1882 _TX_TRAIN_IF_REG0	=	0x2614
                    2618   1883 _TX_TRAIN_IF_REG1	=	0x2618
                    261C   1884 _TX_TRAIN_IF_REG2	=	0x261c
                    2620   1885 _TX_TRAIN_IF_REG3	=	0x2620
                    2624   1886 _TX_TRAIN_PATTTERN_REG0	=	0x2624
                    2628   1887 _TX_TRAIN_DRIVER_REG0	=	0x2628
                    262C   1888 _TX_TRAIN_DRIVER_REG1	=	0x262c
                    2630   1889 _TX_TRAIN_DRIVER_REG2	=	0x2630
                    2634   1890 _TX_TRAIN_DEFAULT_REG0	=	0x2634
                    2638   1891 _TX_TRAIN_DEFAULT_REG1	=	0x2638
                    263C   1892 _TX_TRAIN_DEFAULT_REG2	=	0x263c
                    2640   1893 _TX_TRAIN_DEFAULT_REG3	=	0x2640
                    2644   1894 _TX_TRAIN_DEFAULT_REG4	=	0x2644
                    2648   1895 _TX_TRAIN_DEFAULT_REG5	=	0x2648
                    264C   1896 _TX_EMPH_CTRL_REG0	=	0x264c
                    2650   1897 _LINK_TRAIN_MODE0	=	0x2650
                    2654   1898 _TX_DRV_RD_OUT_REG0	=	0x2654
                    2658   1899 _TX_AMP_CTRL_REG0	=	0x2658
                    265C   1900 _TRX_TRAIN_IF_INTERRUPT_LANE	=	0x265c
                    2660   1901 _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE	=	0x2660
                    2664   1902 _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE	=	0x2664
                    2668   1903 _TX_TRAIN_IF_REG4	=	0x2668
                    266C   1904 _TX_TRAIN_IF_REG5	=	0x266c
                    2670   1905 _TX_TRAIN_IF_REG6	=	0x2670
                    2674   1906 _TX_TRAIN_IF_REG7	=	0x2674
                    2678   1907 _TX_TRAIN_CTRL_LANE	=	0x2678
                    267C   1908 _TX_TRAIN_IF_REG8	=	0x267c
                    6100   1909 _DFE_READ_EVEN_REG0	=	0x6100
                    6104   1910 _DFE_READ_EVEN_REG1	=	0x6104
                    6108   1911 _DFE_READ_EVEN_REG2	=	0x6108
                    610C   1912 _DFE_READ_EVEN_REG3	=	0x610c
                    6110   1913 _DFE_READ_EVEN_REG4	=	0x6110
                    6114   1914 _DFE_READ_EVEN_REG5	=	0x6114
                    6118   1915 _DFE_READ_EVEN_REG6	=	0x6118
                    611C   1916 _DFE_READ_EVEN_REG7	=	0x611c
                    6120   1917 _DFE_READ_ODD_REG0	=	0x6120
                    6124   1918 _DFE_READ_ODD_REG1	=	0x6124
                    6128   1919 _DFE_READ_ODD_REG2	=	0x6128
                    612C   1920 _DFE_READ_ODD_REG3	=	0x612c
                    6130   1921 _DFE_READ_ODD_REG4	=	0x6130
                    6134   1922 _DFE_READ_ODD_REG5	=	0x6134
                    6138   1923 _DFE_READ_ODD_REG6	=	0x6138
                    613C   1924 _DFE_READ_ODD_REG7	=	0x613c
                    6140   1925 _DFE_READ_EVEN_REG8	=	0x6140
                    6144   1926 _DFE_READ_ODD_REG8	=	0x6144
                    6148   1927 _DFE_READ_F0A_EVEN	=	0x6148
                    614C   1928 _DFE_READ_F0A_ODD	=	0x614c
                    6150   1929 _DFE_READ_F0B_EVEN	=	0x6150
                    6154   1930 _DFE_READ_F0B_ODD	=	0x6154
                    6158   1931 _DFE_READ_F0D_EVEN	=	0x6158
                    615C   1932 _DFE_READ_F0D_ODD	=	0x615c
                    6160   1933 _DFE_READ_F0D_LEFT_EVEN	=	0x6160
                    6164   1934 _DFE_READ_F0D_LEFT_ODD	=	0x6164
                    6168   1935 _DFE_READ_F0D_RIGHT_EVEN	=	0x6168
                    616C   1936 _DFE_READ_F0D_RIGHT_ODD	=	0x616c
                    6170   1937 _CDS_READ_MISC0	=	0x6170
                    6174   1938 _CDS_READ_MISC1	=	0x6174
                    6214   1939 _TXTRAIN_IF_REG0	=	0x6214
                    E000   1940 _lc_speedtable	=	0xe000
                    E1C0   1941 _ring_speedtable	=	0xe1c0
                    E5C0   1942 _phy_mode_cmn_table	=	0xe5c0
                    6300   1943 _max_gen	=	0x6300
                    6301   1944 _min_gen	=	0x6301
                    6304   1945 _speedtable	=	0x6304
                    65D4   1946 _phy_mode_lane_table	=	0x65d4
                    60B4   1947 _rc_save	=	0x60b4
                    60D0   1948 _txffe_save	=	0x60d0
                    60E4   1949 _phase_save	=	0x60e4
                    6030   1950 _train_gn1_index	=	0x6030
                    6031   1951 _train_g1_index	=	0x6031
                    6032   1952 _train_g0_index	=	0x6032
                    E6B0   1953 _local_tx_preset_tb	=	0xe6b0
                    E5C1   1954 _cmx_cal_lcvco_dac	=	0xe5c1
                    E5C1   1955 _cmx_cal_lcvco_dac_lsb	=	0xe5c1
                    E5C4   1956 _cmx_cal_lcvco_dac_msb	=	0xe5c4
                    E5CA   1957 _cmx_cal_lccap_msb	=	0xe5ca
                    E5C8   1958 _cmx_cal_lccap_lsb	=	0xe5c8
                    E5CC   1959 _cmx_cal_plldcc	=	0xe5cc
                    E5D0   1960 _cmx_cal_pll_speed_ring	=	0xe5d0
                    E5D4   1961 _cmx_cal_pll_sllp_dac_coarse_ring	=	0xe5d4
                    E5D8   1962 _cmx_cal_sllp_dac_fine_ring	=	0xe5d8
                    65D4   1963 _lnx_cal_txdcc_pdiv	=	0x65d4
                    65D8   1964 _lnx_cal_txdcc_pdiv_hg	=	0x65d8
                    65DA   1965 _lnx_cal_txdcc	=	0x65da
                    65DE   1966 _lnx_cal_txdcc_hg	=	0x65de
                    65E0   1967 _lnx_cal_rxdcc_dll	=	0x65e0
                    65E4   1968 _lnx_cal_rxdcc_dll_hg	=	0x65e4
                    65E6   1969 _lnx_cal_rxdcc_data	=	0x65e6
                    65F0   1970 _lnx_cal_rxdcc_data_hg	=	0x65f0
                    65F5   1971 _lnx_cal_rxdcc_eom	=	0x65f5
                    65FF   1972 _lnx_cal_rxdcc_eom_hg	=	0x65ff
                    6604   1973 _lnx_cal_dll_gmsel	=	0x6604
                    6606   1974 _lnx_cal_vdda_dll_sel	=	0x6606
                    660A   1975 _lnx_cal_dll_eom_gmsel	=	0x660a
                    660C   1976 _lnx_cal_vdda_dll_eom_sel	=	0x660c
                    6610   1977 _lnx_cal_eom_dpher	=	0x6610
                    6612   1978 _lnx_cal_align90_dummy_clk	=	0x6612
                    661A   1979 _lnx_cal_align90_dac	=	0x661a
                    6622   1980 _lnx_cal_align90_gm	=	0x6622
                    662A   1981 _lnx_cal_sellv_txdata	=	0x662a
                    6634   1982 _lnx_cal_sellv_txclk	=	0x6634
                    663E   1983 _lnx_cal_sellv_rxdataclk	=	0x663e
                    6648   1984 _lnx_cal_sellv_txpre	=	0x6648
                    6652   1985 _lnx_cal_sellv_rxsampler	=	0x6652
                    665C   1986 _lnx_cal_sellv_rxeomclk	=	0x665c
                    6666   1987 _lnx_spdoft_tx_preset_index_lane	=	0x6666
                    6490   1988 _lnx_calx_txdcc_pdiv	=	0x6490
                    6496   1989 _lnx_calx_txdcc_pdiv_hg	=	0x6496
                    6499   1990 _lnx_calx_txdcc	=	0x6499
                    649F   1991 _lnx_calx_txdcc_hg	=	0x649f
                    64A2   1992 _lnx_calx_rxdcc_dll	=	0x64a2
                    64A8   1993 _lnx_calx_rxdcc_dll_hg	=	0x64a8
                    64AB   1994 _lnx_calx_dll_gmsel	=	0x64ab
                    64AE   1995 _lnx_calx_vdda_dll_sel	=	0x64ae
                    64B4   1996 _lnx_calx_dll_eom_gmsel	=	0x64b4
                    64B7   1997 _lnx_calx_vdda_dll_eom_sel	=	0x64b7
                    64BD   1998 _lnx_calx_eom_dpher	=	0x64bd
                    64C0   1999 _lnx_calx_align90_dummy_clk	=	0x64c0
                    64CC   2000 _lnx_calx_align90_dac	=	0x64cc
                    64D8   2001 _lnx_calx_align90_gm	=	0x64d8
                    6100   2002 _cds28	=	0x6100
                    6178   2003 _dfe_sm	=	0x6178
                    61B8   2004 _dfe_sm_dc	=	0x61b8
                    61C0   2005 _dfe_sm_save	=	0x61c0
                    03FC   2006 _UPHY_ANAREG_REV_0	=	0x03fc
                    E684   2007 _tx_tb	=	0xe684
                    E698   2008 _train_save_tb	=	0xe698
                    607C   2009 _sq_thrs_ratio_tb	=	0x607c
                           2010 ;--------------------------------------------------------
                           2011 ; absolute external ram data
                           2012 ;--------------------------------------------------------
                           2013 	.area XABS    (ABS,XDATA)
                           2014 ;--------------------------------------------------------
                           2015 ; external initialized ram data
                           2016 ;--------------------------------------------------------
                           2017 	.area HOME    (CODE)
                           2018 	.area GSINIT0 (CODE)
                           2019 	.area GSINIT1 (CODE)
                           2020 	.area GSINIT2 (CODE)
                           2021 	.area GSINIT3 (CODE)
                           2022 	.area GSINIT4 (CODE)
                           2023 	.area GSINIT5 (CODE)
                           2024 	.area GSINIT  (CODE)
                           2025 	.area GSFINAL (CODE)
                           2026 	.area CSEG    (CODE)
                           2027 ;--------------------------------------------------------
                           2028 ; global & static initialisations
                           2029 ;--------------------------------------------------------
                           2030 	.area HOME    (CODE)
                           2031 	.area GSINIT  (CODE)
                           2032 	.area GSFINAL (CODE)
                           2033 	.area GSINIT  (CODE)
                           2034 ;--------------------------------------------------------
                           2035 ; Home
                           2036 ;--------------------------------------------------------
                           2037 	.area HOME    (CODE)
                           2038 	.area HOME    (CODE)
                           2039 ;--------------------------------------------------------
                           2040 ; code
                           2041 ;--------------------------------------------------------
                           2042 	.area BANK1   (CODE)
                           2043 ;------------------------------------------------------------
                           2044 ;Allocation info for local variables in function 'Calibration'
                           2045 ;------------------------------------------------------------
                           2046 ;rate                      Allocated to registers r3 
                           2047 ;inx                       Allocated to registers r4 
                           2048 ;genno                     Allocated to registers r2 
                           2049 ;dtx_off                   Allocated to stack - offset 4
                           2050 ;------------------------------------------------------------
                           2051 ;	../../shared/src/cal_top.c:25: void Calibration(void) BANKING_CTRL {
                           2052 ;	-----------------------------------------
                           2053 ;	 function Calibration
                           2054 ;	-----------------------------------------
   8425                    2055 _Calibration:
                    0002   2056 	ar2 = 0x02
                    0003   2057 	ar3 = 0x03
                    0004   2058 	ar4 = 0x04
                    0005   2059 	ar5 = 0x05
                    0006   2060 	ar6 = 0x06
                    0007   2061 	ar7 = 0x07
                    0000   2062 	ar0 = 0x00
                    0001   2063 	ar1 = 0x01
                           2064 ;	../../shared/src/cal_top.c:30: lnx_CAL_DONE_LANE = 0;
   8425 90 60 03           2065 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   8428 E0                 2066 	movx	a,@dptr
   8429 54 FE              2067 	anl	a,#0xfe
   842B F0                 2068 	movx	@dptr,a
                           2069 ;	../../shared/src/cal_top.c:32: phy_check_lane(0);
   842C 75 82 00           2070 	mov	dpl,#0x00
   842F 78 DF              2071 	mov	r0,#_phy_check_lane
   8431 79 8E              2072 	mov	r1,#(_phy_check_lane >> 8)
   8433 7A 01              2073 	mov	r2,#(_phy_check_lane >> 16)
   8435 12 00 B3           2074 	lcall	__sdcc_banked_call
                           2075 ;	../../shared/src/cal_top.c:33: reg_DFE_ADAPT_CONT_LANE = 0;
   8438 90 24 01           2076 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0001)
   843B E0                 2077 	movx	a,@dptr
   843C 54 DF              2078 	anl	a,#0xdf
   843E F0                 2079 	movx	@dptr,a
                           2080 ;	../../shared/src/cal_top.c:34: reg_DFE_START_LANE = 0;
   843F 90 24 02           2081 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   8442 E0                 2082 	movx	a,@dptr
   8443 54 FE              2083 	anl	a,#0xfe
   8445 F0                 2084 	movx	@dptr,a
                           2085 ;	../../shared/src/cal_top.c:36: gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_3_0; gen_tx = min(gen_tx, cmx_PHY_GEN_MAX_3_0);
   8446 90 20 33           2086 	mov	dptr,#(_SPD_CTRL_TX_LANE_REG1_LANE + 0x0003)
   8449 E0                 2087 	movx	a,@dptr
   844A C4                 2088 	swap	a
   844B 54 0F              2089 	anl	a,#0x0f
   844D FA                 2090 	mov	r2,a
   844E 90 66 15           2091 	mov	dptr,#_gen_tx
   8451 F0                 2092 	movx	@dptr,a
   8452 90 E6 2C           2093 	mov	dptr,#_CONTROL_CONFIG8
   8455 E0                 2094 	movx	a,@dptr
   8456 54 0F              2095 	anl	a,#0x0f
   8458 FB                 2096 	mov	r3,a
   8459 C0 03              2097 	push	ar3
   845B 8A 82              2098 	mov	dpl,r2
   845D 78 3B              2099 	mov	r0,#_min
   845F 79 C0              2100 	mov	r1,#(_min >> 8)
   8461 7A 02              2101 	mov	r2,#(_min >> 16)
   8463 12 00 B3           2102 	lcall	__sdcc_banked_call
   8466 AA 82              2103 	mov	r2,dpl
   8468 15 81              2104 	dec	sp
   846A 90 66 15           2105 	mov	dptr,#_gen_tx
   846D EA                 2106 	mov	a,r2
   846E F0                 2107 	movx	@dptr,a
                           2108 ;	../../shared/src/cal_top.c:37: gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_3_0; gen_rx = min(gen_rx, cmx_PHY_GEN_MAX_3_0);
   846F 90 21 17           2109 	mov	dptr,#(_SPD_CTRL_RX_LANE_REG1_LANE + 0x0003)
   8472 E0                 2110 	movx	a,@dptr
   8473 C4                 2111 	swap	a
   8474 54 0F              2112 	anl	a,#0x0f
   8476 FA                 2113 	mov	r2,a
   8477 90 66 16           2114 	mov	dptr,#_gen_rx
   847A F0                 2115 	movx	@dptr,a
   847B 90 E6 2C           2116 	mov	dptr,#_CONTROL_CONFIG8
   847E E0                 2117 	movx	a,@dptr
   847F 54 0F              2118 	anl	a,#0x0f
   8481 FB                 2119 	mov	r3,a
   8482 C0 03              2120 	push	ar3
   8484 8A 82              2121 	mov	dpl,r2
   8486 78 3B              2122 	mov	r0,#_min
   8488 79 C0              2123 	mov	r1,#(_min >> 8)
   848A 7A 02              2124 	mov	r2,#(_min >> 16)
   848C 12 00 B3           2125 	lcall	__sdcc_banked_call
   848F AA 82              2126 	mov	r2,dpl
   8491 15 81              2127 	dec	sp
   8493 90 66 16           2128 	mov	dptr,#_gen_rx
   8496 EA                 2129 	mov	a,r2
   8497 F0                 2130 	movx	@dptr,a
                           2131 ;	../../shared/src/cal_top.c:39: for(genno=min_gen; genno<= max_gen; genno++) {  
   8498 90 63 01           2132 	mov	dptr,#_min_gen
   849B E0                 2133 	movx	a,@dptr
   849C FA                 2134 	mov	r2,a
   849D FB                 2135 	mov	r3,a
   849E                    2136 00281$:
   849E 90 63 00           2137 	mov	dptr,#_max_gen
   84A1 E0                 2138 	movx	a,@dptr
   84A2 FC                 2139 	mov	r4,a
   84A3 B5 03 00           2140 	cjne	a,ar3,00363$
   84A6                    2141 00363$:
   84A6 40 3A              2142 	jc	00284$
                           2143 ;	../../shared/src/cal_top.c:40: if(speedtable[genno][spdoft_tx_ck_sel_lane] == 1 || speedtable[genno][spdoft_rx_ck_sel_lane] == 1) ring_pll_enabled = 1;
   84A8 EB                 2144 	mov	a,r3
   84A9 75 F0 50           2145 	mov	b,#0x50
   84AC A4                 2146 	mul	ab
   84AD FC                 2147 	mov	r4,a
   84AE AD F0              2148 	mov	r5,b
   84B0 24 04              2149 	add	a,#_speedtable
   84B2 FE                 2150 	mov	r6,a
   84B3 ED                 2151 	mov	a,r5
   84B4 34 63              2152 	addc	a,#(_speedtable >> 8)
   84B6 FF                 2153 	mov	r7,a
   84B7 8E 82              2154 	mov	dpl,r6
   84B9 8F 83              2155 	mov	dph,r7
   84BB A3                 2156 	inc	dptr
   84BC E0                 2157 	movx	a,@dptr
   84BD FE                 2158 	mov	r6,a
   84BE BE 01 02           2159 	cjne	r6,#0x01,00365$
   84C1 80 16              2160 	sjmp	00101$
   84C3                    2161 00365$:
   84C3 EC                 2162 	mov	a,r4
   84C4 24 04              2163 	add	a,#_speedtable
   84C6 FC                 2164 	mov	r4,a
   84C7 ED                 2165 	mov	a,r5
   84C8 34 63              2166 	addc	a,#(_speedtable >> 8)
   84CA FD                 2167 	mov	r5,a
   84CB 74 16              2168 	mov	a,#0x16
   84CD 2C                 2169 	add	a,r4
   84CE F5 82              2170 	mov	dpl,a
   84D0 E4                 2171 	clr	a
   84D1 3D                 2172 	addc	a,r5
   84D2 F5 83              2173 	mov	dph,a
   84D4 E0                 2174 	movx	a,@dptr
   84D5 FC                 2175 	mov	r4,a
   84D6 BC 01 04           2176 	cjne	r4,#0x01,00102$
   84D9                    2177 00101$:
   84D9 D2 12              2178 	setb	_ring_pll_enabled
   84DB 80 02              2179 	sjmp	00283$
   84DD                    2180 00102$:
                           2181 ;	../../shared/src/cal_top.c:41: else 	lc_pll_used = 1;
   84DD D2 11              2182 	setb	_lc_pll_used
   84DF                    2183 00283$:
                           2184 ;	../../shared/src/cal_top.c:39: for(genno=min_gen; genno<= max_gen; genno++) {  
   84DF 0B                 2185 	inc	r3
   84E0 80 BC              2186 	sjmp	00281$
   84E2                    2187 00284$:
                           2188 ;	../../shared/src/cal_top.c:47: genno = gen_tx;
   84E2 90 66 15           2189 	mov	dptr,#_gen_tx
   84E5 E0                 2190 	movx	a,@dptr
                           2191 ;	../../shared/src/cal_top.c:55: gen_pll_rate = speedtable[genno][spdoft_pll_rate_sel_tx];
   84E6 FA                 2192 	mov	r2,a
   84E7 75 F0 50           2193 	mov	b,#0x50
   84EA A4                 2194 	mul	ab
   84EB FB                 2195 	mov	r3,a
   84EC AC F0              2196 	mov	r4,b
   84EE 24 04              2197 	add	a,#_speedtable
   84F0 F5 82              2198 	mov	dpl,a
   84F2 EC                 2199 	mov	a,r4
   84F3 34 63              2200 	addc	a,#(_speedtable >> 8)
   84F5 F5 83              2201 	mov	dph,a
   84F7 E0                 2202 	movx	a,@dptr
   84F8 FD                 2203 	mov	r5,a
   84F9 90 67 8C           2204 	mov	dptr,#_gen_pll_rate
   84FC F0                 2205 	movx	@dptr,a
                           2206 ;	../../shared/src/cal_top.c:56: if(gen_pll_rate>1 || phy_mode==SERDES) { tx_pll_rate = 0; tx_pll_rate_x = 0; }
   84FD 74 01              2207 	mov	a,#0x01
   84FF B5 05 00           2208 	cjne	a,ar5,00368$
   8502                    2209 00368$:
   8502 40 0A              2210 	jc	00105$
   8504 90 A3 16           2211 	mov	dptr,#(_SYSTEM + 0x0002)
   8507 E0                 2212 	movx	a,@dptr
   8508 54 07              2213 	anl	a,#0x07
   850A FE                 2214 	mov	r6,a
   850B BE 04 09           2215 	cjne	r6,#0x04,00106$
   850E                    2216 00105$:
   850E C2 0F              2217 	clr	_tx_pll_rate
   8510 90 67 AE           2218 	mov	dptr,#_tx_pll_rate_x
   8513 E4                 2219 	clr	a
   8514 F0                 2220 	movx	@dptr,a
   8515 80 0A              2221 	sjmp	00107$
   8517                    2222 00106$:
                           2223 ;	../../shared/src/cal_top.c:57: else { tx_pll_rate = gen_pll_rate; tx_pll_rate_x = gen_pll_rate; }
   8517 ED                 2224 	mov	a,r5
   8518 24 FF              2225 	add	a,#0xff
   851A 92 0F              2226 	mov	_tx_pll_rate,c
   851C 90 67 AE           2227 	mov	dptr,#_tx_pll_rate_x
   851F ED                 2228 	mov	a,r5
   8520 F0                 2229 	movx	@dptr,a
   8521                    2230 00107$:
                           2231 ;	../../shared/src/cal_top.c:58: use_ring_pll = speedtable[genno][spdoft_tx_ck_sel_lane];
   8521 EB                 2232 	mov	a,r3
   8522 24 04              2233 	add	a,#_speedtable
   8524 FB                 2234 	mov	r3,a
   8525 EC                 2235 	mov	a,r4
   8526 34 63              2236 	addc	a,#(_speedtable >> 8)
   8528 FC                 2237 	mov	r4,a
   8529 8B 82              2238 	mov	dpl,r3
   852B 8C 83              2239 	mov	dph,r4
   852D A3                 2240 	inc	dptr
   852E E0                 2241 	movx	a,@dptr
   852F 24 FF              2242 	add	a,#0xff
   8531 92 10              2243 	mov	_use_ring_pll,c
                           2244 ;	../../shared/src/cal_top.c:106: if( mcuid== master_mcu || (cmx_TX_LANE_ALIGN_OFF && reg_TSEN_ADC_RD_REQ==0)) {
   8533 90 22 00           2245 	mov	dptr,#_MCU_CONTROL_LANE
   8536 E0                 2246 	movx	a,@dptr
   8537 FB                 2247 	mov	r3,a
   8538 90 E6 50           2248 	mov	dptr,#_MCU_CONFIG
   853B E0                 2249 	movx	a,@dptr
   853C FC                 2250 	mov	r4,a
   853D EB                 2251 	mov	a,r3
   853E B5 04 02           2252 	cjne	a,ar4,00372$
   8541 80 0E              2253 	sjmp	00111$
   8543                    2254 00372$:
   8543 90 E6 04           2255 	mov	dptr,#_CONTROL_CONFIG0
   8546 E0                 2256 	movx	a,@dptr
   8547 30 E4 38           2257 	jnb	acc.4,00112$
   854A 90 A3 29           2258 	mov	dptr,#(_ANA_TSEN_CONTROL + 0x0001)
   854D E0                 2259 	movx	a,@dptr
   854E 20 E3 31           2260 	jb	acc.3,00112$
   8551                    2261 00111$:
                           2262 ;	../../shared/src/cal_top.c:107: reg_TSEN_ADC_CAL_1_0 = 0x2; //Automatic self-offset-cal enforced, TSENE_ADC in normal mode.
   8551 90 83 1C           2263 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_199
   8554 E0                 2264 	movx	a,@dptr
   8555 54 F9              2265 	anl	a,#0xf9
   8557 44 04              2266 	orl	a,#0x04
   8559 F0                 2267 	movx	@dptr,a
                           2268 ;	../../shared/src/cal_top.c:108: CMN_CALIBRATION.BT.B1 = 0x08; //reg_ANA_TSEN_ADC_RESET = 0;
                           2269 ;	../../shared/src/cal_top.c:109: CMN_CALIBRATION.BT.B1 = 0x09; //reg_ANA_TSEN_ADC_EN = 1;
                           2270 ;	../../shared/src/cal_top.c:110: CMN_CALIBRATION.BT.B1 = 0x0d; //reg_ANA_TSEN_ADC_START = 1;
   855A 90 A3 41           2271 	mov	dptr,#(_CMN_CALIBRATION + 0x0001)
   855D 74 08              2272 	mov	a,#0x08
   855F F0                 2273 	movx	@dptr,a
   8560 74 09              2274 	mov	a,#0x09
   8562 F0                 2275 	movx	@dptr,a
   8563 74 0D              2276 	mov	a,#0x0D
   8565 F0                 2277 	movx	@dptr,a
                           2278 ;	../../shared/src/cal_top.c:111: reg_TSEN_ADC_RD_REQ = 1;
   8566 90 A3 29           2279 	mov	dptr,#(_ANA_TSEN_CONTROL + 0x0001)
   8569 E0                 2280 	movx	a,@dptr
   856A 44 08              2281 	orl	a,#0x08
   856C F0                 2282 	movx	@dptr,a
                           2283 ;	../../shared/src/cal_top.c:114: if (FAST_POWER_ON_EN) {
   856D 90 E6 07           2284 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   8570 E0                 2285 	movx	a,@dptr
   8571 30 E4 0E           2286 	jnb	acc.4,00112$
                           2287 ;	../../shared/src/cal_top.c:115: reg_ANA_TSEN_ADC_RDY_FM_REG = 1;
   8574 90 A3 2B           2288 	mov	dptr,#(_ANA_TSEN_CONTROL + 0x0003)
   8577 E0                 2289 	movx	a,@dptr
   8578 44 02              2290 	orl	a,#0x02
   857A F0                 2291 	movx	@dptr,a
                           2292 ;	../../shared/src/cal_top.c:116: reg_ANA_TSEN_ADC_RDY = 1;
   857B 90 A3 2B           2293 	mov	dptr,#(_ANA_TSEN_CONTROL + 0x0003)
   857E E0                 2294 	movx	a,@dptr
   857F 44 04              2295 	orl	a,#0x04
   8581 F0                 2296 	movx	@dptr,a
   8582                    2297 00112$:
                           2298 ;	../../shared/src/cal_top.c:120: read_tsen();
   8582 78 B9              2299 	mov	r0,#_read_tsen
   8584 79 BE              2300 	mov	r1,#(_read_tsen >> 8)
   8586 7A 02              2301 	mov	r2,#(_read_tsen >> 16)
   8588 12 00 B3           2302 	lcall	__sdcc_banked_call
                           2303 ;	../../shared/src/cal_top.c:122: if( force_exit_cal ) {
   858B 30 14 1C           2304 	jnb	_force_exit_cal,00116$
                           2305 ;	../../shared/src/cal_top.c:124: CONTROL_CONFIG1.VAL = 0x0ffffffc;
   858E 90 E6 08           2306 	mov	dptr,#_CONTROL_CONFIG1
   8591 74 FC              2307 	mov	a,#0xFC
   8593 F0                 2308 	movx	@dptr,a
   8594 A3                 2309 	inc	dptr
   8595 74 FF              2310 	mov	a,#0xFF
   8597 F0                 2311 	movx	@dptr,a
   8598 A3                 2312 	inc	dptr
   8599 F0                 2313 	movx	@dptr,a
   859A A3                 2314 	inc	dptr
   859B 74 0F              2315 	mov	a,#0x0F
   859D F0                 2316 	movx	@dptr,a
                           2317 ;	../../shared/src/cal_top.c:125: all_cal_ext();
   859E 78 3A              2318 	mov	r0,#_all_cal_ext
   85A0 79 8F              2319 	mov	r1,#(_all_cal_ext >> 8)
   85A2 7A 01              2320 	mov	r2,#(_all_cal_ext >> 16)
   85A4 12 00 B3           2321 	lcall	__sdcc_banked_call
                           2322 ;	../../shared/src/cal_top.c:129: goto skip_out; //test
   85A7 02 8B 01           2323 	ljmp	00261$
   85AA                    2324 00116$:
                           2325 ;	../../shared/src/cal_top.c:132: reg_RX_INIT_DONE_LANE = 0; //??	
   85AA 90 21 02           2326 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   85AD E0                 2327 	movx	a,@dptr
   85AE 54 F7              2328 	anl	a,#0xf7
   85B0 F0                 2329 	movx	@dptr,a
                           2330 ;	../../shared/src/cal_top.c:134: reg_ANA_TX_IDLE_FORCE_LANE = 1;
   85B1 90 20 03           2331 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0003)
   85B4 E0                 2332 	movx	a,@dptr
   85B5 44 04              2333 	orl	a,#0x04
   85B7 F0                 2334 	movx	@dptr,a
                           2335 ;	../../shared/src/cal_top.c:135: reg_ANA_TX_IDLE_LANE = 1;
   85B8 90 20 03           2336 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0003)
   85BB E0                 2337 	movx	a,@dptr
   85BC 44 01              2338 	orl	a,#0x01
   85BE F0                 2339 	movx	@dptr,a
                           2340 ;	../../shared/src/cal_top.c:136: reg_EOM_CLK_EN_LANE = 1;
   85BF 90 02 18           2341 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_134
   85C2 E0                 2342 	movx	a,@dptr
   85C3 44 04              2343 	orl	a,#0x04
   85C5 F0                 2344 	movx	@dptr,a
                           2345 ;	../../shared/src/cal_top.c:137: reg_TX_TDTAP_SEL_LANE = 0;
   85C6 90 02 44           2346 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_145
   85C9 E0                 2347 	movx	a,@dptr
   85CA 54 7F              2348 	anl	a,#0x7f
   85CC F0                 2349 	movx	@dptr,a
                           2350 ;	../../shared/src/cal_top.c:138: lnx_DLL_VDDA_TRACKING_ON_LANE = 0;
   85CD 90 60 0A           2351 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0002)
   85D0 E0                 2352 	movx	a,@dptr
   85D1 54 DF              2353 	anl	a,#0xdf
   85D3 F0                 2354 	movx	@dptr,a
                           2355 ;	../../shared/src/cal_top.c:141: reg_MCU_DEBUG0_LANE_7_0 = 0x31;
   85D4 90 22 B4           2356 	mov	dptr,#_MCU_DEBUG0_LANE
   85D7 74 31              2357 	mov	a,#0x31
   85D9 F0                 2358 	movx	@dptr,a
                           2359 ;	../../shared/src/cal_top.c:142: reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
   85DA 90 67 8C           2360 	mov	dptr,#_gen_pll_rate
   85DD E0                 2361 	movx	a,@dptr
   85DE FB                 2362 	mov	r3,a
   85DF 90 22 B7           2363 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0003)
   85E2 F0                 2364 	movx	@dptr,a
                           2365 ;	../../shared/src/cal_top.c:143: reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
   85E3 A2 12              2366 	mov	c,_ring_pll_enabled
   85E5 E4                 2367 	clr	a
   85E6 33                 2368 	rlc	a
   85E7 90 22 B9           2369 	mov	dptr,#(_MCU_DEBUG1_LANE + 0x0001)
   85EA F0                 2370 	movx	@dptr,a
                           2371 ;	../../shared/src/cal_top.c:144: reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
   85EB A2 10              2372 	mov	c,_use_ring_pll
   85ED E4                 2373 	clr	a
   85EE 33                 2374 	rlc	a
   85EF 90 22 BA           2375 	mov	dptr,#(_MCU_DEBUG1_LANE + 0x0002)
   85F2 F0                 2376 	movx	@dptr,a
                           2377 ;	../../shared/src/cal_top.c:145: reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;
   85F3 90 66 24           2378 	mov	dptr,#_ring_lane_sel
   85F6 E0                 2379 	movx	a,@dptr
   85F7 90 22 BC           2380 	mov	dptr,#_MCU_DEBUG2_LANE
   85FA F0                 2381 	movx	@dptr,a
                           2382 ;	../../shared/src/cal_top.c:146: reg_MCU_DEBUG9_LANE_7_0 = slave_phy_on;
   85FB 90 66 1C           2383 	mov	dptr,#_slave_phy_on
   85FE E0                 2384 	movx	a,@dptr
   85FF 90 22 BD           2385 	mov	dptr,#(_MCU_DEBUG2_LANE + 0x0001)
   8602 F0                 2386 	movx	@dptr,a
                           2387 ;	../../shared/src/cal_top.c:152: if ((gen_pll_rate!=pre_gen_pll_rate && SPDCHG_ON_READ) || 
   8603 90 67 8D           2388 	mov	dptr,#_pre_gen_pll_rate
   8606 E0                 2389 	movx	a,@dptr
   8607 FC                 2390 	mov	r4,a
   8608 EB                 2391 	mov	a,r3
   8609 B5 04 02           2392 	cjne	a,ar4,00377$
   860C 80 0D              2393 	sjmp	00162$
   860E                    2394 00377$:
   860E 90 22 38           2395 	mov	dptr,#_MCU_STATUS2_LANE
   8611 E0                 2396 	movx	a,@dptr
   8612 FB                 2397 	mov	r3,a
   8613 53 03 01           2398 	anl	ar3,#0x01
   8616 BB 01 02           2399 	cjne	r3,#0x01,00378$
   8619 80 18              2400 	sjmp	00159$
   861B                    2401 00378$:
   861B                    2402 00162$:
                           2403 ;	../../shared/src/cal_top.c:154: (!SPDCHG_ON_READ) || phy_mode!=SERDES) {
   861B 90 22 38           2404 	mov	dptr,#_MCU_STATUS2_LANE
   861E E0                 2405 	movx	a,@dptr
   861F FB                 2406 	mov	r3,a
   8620 53 03 01           2407 	anl	ar3,#0x01
   8623 BB 01 0D           2408 	cjne	r3,#0x01,00159$
   8626 90 A3 16           2409 	mov	dptr,#(_SYSTEM + 0x0002)
   8629 E0                 2410 	movx	a,@dptr
   862A 54 07              2411 	anl	a,#0x07
   862C FB                 2412 	mov	r3,a
   862D BB 04 03           2413 	cjne	r3,#0x04,00381$
   8630 02 88 13           2414 	ljmp	00160$
   8633                    2415 00381$:
   8633                    2416 00159$:
                           2417 ;	../../shared/src/cal_top.c:156: if( mcuid== master_mcu ) {
   8633 90 22 00           2418 	mov	dptr,#_MCU_CONTROL_LANE
   8636 E0                 2419 	movx	a,@dptr
   8637 FB                 2420 	mov	r3,a
   8638 90 E6 50           2421 	mov	dptr,#_MCU_CONFIG
   863B E0                 2422 	movx	a,@dptr
   863C FC                 2423 	mov	r4,a
   863D EB                 2424 	mov	a,r3
   863E B5 04 2D           2425 	cjne	a,ar4,00120$
                           2426 ;	../../shared/src/cal_top.c:157: cmx_CAL_START=0;
   8641 90 E6 08           2427 	mov	dptr,#_CONTROL_CONFIG1
   8644 E0                 2428 	movx	a,@dptr
   8645 54 FE              2429 	anl	a,#0xfe
   8647 F0                 2430 	movx	@dptr,a
                           2431 ;	../../shared/src/cal_top.c:159: if(!SPDCHG_ON_READ)	proc_cal();
   8648 90 22 38           2432 	mov	dptr,#_MCU_STATUS2_LANE
   864B E0                 2433 	movx	a,@dptr
   864C FB                 2434 	mov	r3,a
   864D 53 03 01           2435 	anl	ar3,#0x01
   8650 BB 01 02           2436 	cjne	r3,#0x01,00384$
   8653 80 09              2437 	sjmp	00118$
   8655                    2438 00384$:
   8655 78 3B              2439 	mov	r0,#_proc_cal
   8657 79 D5              2440 	mov	r1,#(_proc_cal >> 8)
   8659 7A 02              2441 	mov	r2,#(_proc_cal >> 16)
   865B 12 00 B3           2442 	lcall	__sdcc_banked_call
   865E                    2443 00118$:
                           2444 ;	../../shared/src/cal_top.c:161: reg_RING_PLL_DISABLE = !ring_pll_enabled;
   865E A2 12              2445 	mov	c,_ring_pll_enabled
   8660 B3                 2446 	cpl	c
   8661 92 28              2447 	mov  b0,c
   8663 E4                 2448 	clr	a
   8664 33                 2449 	rlc	a
   8665 FB                 2450 	mov	r3,a
   8666 90 A3 24           2451 	mov	dptr,#_INPUT_CMN_PIN_REG2
   8669 13                 2452 	rrc	a
   866A E0                 2453 	movx	a,@dptr
   866B 92 E0              2454 	mov	acc.0,c
   866D F0                 2455 	movx	@dptr,a
   866E                    2456 00120$:
                           2457 ;	../../shared/src/cal_top.c:164: mcu_align_0(10);
   866E 75 82 0A           2458 	mov	dpl,#0x0A
   8671 78 FB              2459 	mov	r0,#_mcu_align_0
   8673 79 8E              2460 	mov	r1,#(_mcu_align_0 >> 8)
   8675 7A 01              2461 	mov	r2,#(_mcu_align_0 >> 16)
   8677 12 00 B3           2462 	lcall	__sdcc_banked_call
                           2463 ;	../../shared/src/cal_top.c:170: if (mcuid == master_mcu) {
   867A 90 22 00           2464 	mov	dptr,#_MCU_CONTROL_LANE
   867D E0                 2465 	movx	a,@dptr
   867E FB                 2466 	mov	r3,a
   867F 90 E6 50           2467 	mov	dptr,#_MCU_CONFIG
   8682 E0                 2468 	movx	a,@dptr
   8683 FC                 2469 	mov	r4,a
   8684 EB                 2470 	mov	a,r3
   8685 B5 04 02           2471 	cjne	a,ar4,00385$
   8688 80 03              2472 	sjmp	00386$
   868A                    2473 00385$:
   868A 02 87 8A           2474 	ljmp	00145$
   868D                    2475 00386$:
                           2476 ;	../../shared/src/cal_top.c:176: pll_clk_ready_0();
   868D 78 77              2477 	mov	r0,#_pll_clk_ready_0
   868F 79 D4              2478 	mov	r1,#(_pll_clk_ready_0 >> 8)
   8691 7A 02              2479 	mov	r2,#(_pll_clk_ready_0 >> 16)
   8693 12 00 B3           2480 	lcall	__sdcc_banked_call
                           2481 ;	../../shared/src/cal_top.c:178: if(phy_mode==PCIE || phy_mode<=SAS) rate = 1;
   8696 90 A3 16           2482 	mov	dptr,#(_SYSTEM + 0x0002)
   8699 E0                 2483 	movx	a,@dptr
   869A 54 07              2484 	anl	a,#0x07
   869C FB                 2485 	mov	r3,a
   869D BB 03 02           2486 	cjne	r3,#0x03,00387$
   86A0 80 13              2487 	sjmp	00121$
   86A2                    2488 00387$:
   86A2 90 A3 16           2489 	mov	dptr,#(_SYSTEM + 0x0002)
   86A5 E0                 2490 	movx	a,@dptr
   86A6 54 07              2491 	anl	a,#0x07
   86A8 FB                 2492 	mov	r3,a
   86A9 C3                 2493 	clr	c
   86AA 74 81              2494 	mov	a,#(0x01 ^ 0x80)
   86AC 8B F0              2495 	mov	b,r3
   86AE 63 F0 80           2496 	xrl	b,#0x80
   86B1 95 F0              2497 	subb	a,b
   86B3 40 04              2498 	jc	00122$
   86B5                    2499 00121$:
   86B5 7B 01              2500 	mov	r3,#0x01
   86B7 80 02              2501 	sjmp	00307$
   86B9                    2502 00122$:
                           2503 ;	../../shared/src/cal_top.c:179: else rate = 0;
   86B9 7B 00              2504 	mov	r3,#0x00
                           2505 ;	../../shared/src/cal_top.c:180: for(inx=0; inx<2; inx++) {
   86BB                    2506 00307$:
   86BB 7C 00              2507 	mov	r4,#0x00
   86BD                    2508 00138$:
   86BD BC 02 00           2509 	cjne	r4,#0x02,00389$
   86C0                    2510 00389$:
   86C0 40 03              2511 	jc	00390$
   86C2 02 87 76           2512 	ljmp	00141$
   86C5                    2513 00390$:
                           2514 ;	../../shared/src/cal_top.c:182: reg_MCU_DEBUG0_LANE_7_0 = 0x10;
   86C5 90 22 B4           2515 	mov	dptr,#_MCU_DEBUG0_LANE
   86C8 74 10              2516 	mov	a,#0x10
   86CA F0                 2517 	movx	@dptr,a
                           2518 ;	../../shared/src/cal_top.c:183: reg_MCU_DEBUG6_LANE_7_0 = rate + 0x70;
   86CB 74 70              2519 	mov	a,#0x70
   86CD 2B                 2520 	add	a,r3
   86CE 90 22 BA           2521 	mov	dptr,#(_MCU_DEBUG1_LANE + 0x0002)
   86D1 F0                 2522 	movx	@dptr,a
                           2523 ;	../../shared/src/cal_top.c:185: loadspeedtbl_pll(rate);
   86D2 8B 82              2524 	mov	dpl,r3
   86D4 C0 04              2525 	push	ar4
   86D6 12 37 D4           2526 	lcall	_loadspeedtbl_pll
                           2527 ;	../../shared/src/cal_top.c:186: load_init_temp_table();
   86D9 78 7B              2528 	mov	r0,#_load_init_temp_table
   86DB 79 D1              2529 	mov	r1,#(_load_init_temp_table >> 8)
   86DD 7A 02              2530 	mov	r2,#(_load_init_temp_table >> 16)
   86DF 12 00 B3           2531 	lcall	__sdcc_banked_call
   86E2 D0 04              2532 	pop	ar4
                           2533 ;	../../shared/src/cal_top.c:188: if(slave_phy_on==0) {
   86E4 90 66 1C           2534 	mov	dptr,#_slave_phy_on
   86E7 E0                 2535 	movx	a,@dptr
   86E8 FD                 2536 	mov	r5,a
   86E9 70 53              2537 	jnz	00129$
                           2538 ;	../../shared/src/cal_top.c:189: pll_clk_ready_0();
   86EB C0 04              2539 	push	ar4
   86ED 78 77              2540 	mov	r0,#_pll_clk_ready_0
   86EF 79 D4              2541 	mov	r1,#(_pll_clk_ready_0 >> 8)
   86F1 7A 02              2542 	mov	r2,#(_pll_clk_ready_0 >> 16)
   86F3 12 00 B3           2543 	lcall	__sdcc_banked_call
                           2544 ;	../../shared/src/cal_top.c:190: reg_RESET_ANA = 0;
   86F6 90 A3 19           2545 	mov	dptr,#(_PM_CMN_REG1 + 0x0001)
   86F9 E0                 2546 	movx	a,@dptr
   86FA 54 EF              2547 	anl	a,#0xef
   86FC F0                 2548 	movx	@dptr,a
                           2549 ;	../../shared/src/cal_top.c:191: pll_cal();
   86FD 78 61              2550 	mov	r0,#_pll_cal
   86FF 79 C0              2551 	mov	r1,#(_pll_cal >> 8)
   8701 7A 01              2552 	mov	r2,#(_pll_cal >> 16)
   8703 12 00 B3           2553 	lcall	__sdcc_banked_call
                           2554 ;	../../shared/src/cal_top.c:192: pll_clk_ready_1();
   8706 78 47              2555 	mov	r0,#_pll_clk_ready_1
   8708 79 D4              2556 	mov	r1,#(_pll_clk_ready_1 >> 8)
   870A 7A 02              2557 	mov	r2,#(_pll_clk_ready_1 >> 16)
   870C 12 00 B3           2558 	lcall	__sdcc_banked_call
   870F D0 04              2559 	pop	ar4
                           2560 ;	../../shared/src/cal_top.c:196: if (reg_LCPLLCLK_DIV2_SEL == 0) {
   8711 90 83 3C           2561 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_207
   8714 E0                 2562 	movx	a,@dptr
   8715 20 E1 19           2563 	jb	acc.1,00126$
                           2564 ;	../../shared/src/cal_top.c:197: reg_LCPLL_DCC_5_0 = 0x20; //if LCPLLCLK_DIV2_SEL=0, need to set default
   8718 90 82 D8           2565 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_182
   871B E0                 2566 	movx	a,@dptr
   871C 54 03              2567 	anl	a,#0x03
   871E 44 80              2568 	orl	a,#0x80
   8720 F0                 2569 	movx	@dptr,a
                           2570 ;	../../shared/src/cal_top.c:198: cmx_PLLDCC_CAL_DONE = 1; cmx_PLLDCC_CAL_PASS = 1;
   8721 90 E6 4C           2571 	mov	dptr,#_CAL_STATUS_READ
   8724 E0                 2572 	movx	a,@dptr
   8725 44 02              2573 	orl	a,#0x02
   8727 F0                 2574 	movx	@dptr,a
   8728 90 E6 4D           2575 	mov	dptr,#(_CAL_STATUS_READ + 0x0001)
   872B E0                 2576 	movx	a,@dptr
   872C 44 04              2577 	orl	a,#0x04
   872E F0                 2578 	movx	@dptr,a
   872F 80 0D              2579 	sjmp	00129$
   8731                    2580 00126$:
                           2581 ;	../../shared/src/cal_top.c:202: plldcc_cal();
   8731 C0 04              2582 	push	ar4
   8733 78 74              2583 	mov	r0,#_plldcc_cal
   8735 79 C9              2584 	mov	r1,#(_plldcc_cal >> 8)
   8737 7A 02              2585 	mov	r2,#(_plldcc_cal >> 16)
   8739 12 00 B3           2586 	lcall	__sdcc_banked_call
   873C D0 04              2587 	pop	ar4
   873E                    2588 00129$:
                           2589 ;	../../shared/src/cal_top.c:205: if( no_pllspdchg ) break; //SERDES always use LC PLL rate0
   873E 20 15 35           2590 	jb	_no_pllspdchg,00141$
                           2591 ;	../../shared/src/cal_top.c:206: if( phy_mode == SERDES ) break;
   8741 90 A3 16           2592 	mov	dptr,#(_SYSTEM + 0x0002)
   8744 E0                 2593 	movx	a,@dptr
   8745 54 07              2594 	anl	a,#0x07
   8747 FD                 2595 	mov	r5,a
   8748 BD 04 02           2596 	cjne	r5,#0x04,00394$
   874B 80 29              2597 	sjmp	00141$
   874D                    2598 00394$:
                           2599 ;	../../shared/src/cal_top.c:209: if(phy_mode==PCIE  || phy_mode<=SAS) rate = 0;
   874D 90 A3 16           2600 	mov	dptr,#(_SYSTEM + 0x0002)
   8750 E0                 2601 	movx	a,@dptr
   8751 54 07              2602 	anl	a,#0x07
   8753 FD                 2603 	mov	r5,a
   8754 BD 03 02           2604 	cjne	r5,#0x03,00395$
   8757 80 13              2605 	sjmp	00134$
   8759                    2606 00395$:
   8759 90 A3 16           2607 	mov	dptr,#(_SYSTEM + 0x0002)
   875C E0                 2608 	movx	a,@dptr
   875D 54 07              2609 	anl	a,#0x07
   875F FD                 2610 	mov	r5,a
   8760 C3                 2611 	clr	c
   8761 74 81              2612 	mov	a,#(0x01 ^ 0x80)
   8763 8D F0              2613 	mov	b,r5
   8765 63 F0 80           2614 	xrl	b,#0x80
   8768 95 F0              2615 	subb	a,b
   876A 40 04              2616 	jc	00135$
   876C                    2617 00134$:
   876C 7B 00              2618 	mov	r3,#0x00
   876E 80 02              2619 	sjmp	00140$
   8770                    2620 00135$:
                           2621 ;	../../shared/src/cal_top.c:210: else rate = 1;
   8770 7B 01              2622 	mov	r3,#0x01
   8772                    2623 00140$:
                           2624 ;	../../shared/src/cal_top.c:180: for(inx=0; inx<2; inx++) {
   8772 0C                 2625 	inc	r4
   8773 02 86 BD           2626 	ljmp	00138$
   8776                    2627 00141$:
                           2628 ;	../../shared/src/cal_top.c:216: if(slave_phy_on==0) PHY_STATUS_INT |= LCPLL_CAL_LOOP_DONE;
   8776 90 66 1C           2629 	mov	dptr,#_slave_phy_on
   8779 E0                 2630 	movx	a,@dptr
   877A FB                 2631 	mov	r3,a
   877B 70 0D              2632 	jnz	00145$
   877D 90 22 38           2633 	mov	dptr,#_MCU_STATUS2_LANE
   8780 E0                 2634 	movx	a,@dptr
   8781 FB                 2635 	mov	r3,a
   8782 43 03 02           2636 	orl	ar3,#0x02
   8785 90 22 38           2637 	mov	dptr,#_MCU_STATUS2_LANE
   8788 EB                 2638 	mov	a,r3
   8789 F0                 2639 	movx	@dptr,a
   878A                    2640 00145$:
                           2641 ;	../../shared/src/cal_top.c:221: mcu_align_0(11);
   878A 75 82 0B           2642 	mov	dpl,#0x0B
   878D 78 FB              2643 	mov	r0,#_mcu_align_0
   878F 79 8E              2644 	mov	r1,#(_mcu_align_0 >> 8)
   8791 7A 01              2645 	mov	r2,#(_mcu_align_0 >> 16)
   8793 12 00 B3           2646 	lcall	__sdcc_banked_call
                           2647 ;	../../shared/src/cal_top.c:224: if( ring_lane_sel ) {
   8796 90 66 24           2648 	mov	dptr,#_ring_lane_sel
   8799 E0                 2649 	movx	a,@dptr
   879A FB                 2650 	mov	r3,a
   879B 60 76              2651 	jz	00160$
                           2652 ;	../../shared/src/cal_top.c:227: if( ring_pll_enabled ) {
   879D 30 12 6C           2653 	jnb	_ring_pll_enabled,00155$
                           2654 ;	../../shared/src/cal_top.c:229: pll_clk_ready_ring_0();
   87A0 78 8F              2655 	mov	r0,#_pll_clk_ready_ring_0
   87A2 79 D4              2656 	mov	r1,#(_pll_clk_ready_ring_0 >> 8)
   87A4 7A 02              2657 	mov	r2,#(_pll_clk_ready_ring_0 >> 16)
   87A6 12 00 B3           2658 	lcall	__sdcc_banked_call
                           2659 ;	../../shared/src/cal_top.c:231: for(rate=0; rate<2; rate++) {
   87A9 7B 00              2660 	mov	r3,#0x00
   87AB                    2661 00150$:
   87AB BB 02 00           2662 	cjne	r3,#0x02,00400$
   87AE                    2663 00400$:
   87AE 50 51              2664 	jnc	00153$
                           2665 ;	../../shared/src/cal_top.c:236: loadspeedtbl_ringpll(rate);
   87B0 8B 82              2666 	mov	dpl,r3
   87B2 C0 03              2667 	push	ar3
   87B4 12 3B A7           2668 	lcall	_loadspeedtbl_ringpll
                           2669 ;	../../shared/src/cal_top.c:245: reg_ANA_PU_PLL_RING = 1;
   87B7 90 A3 24           2670 	mov	dptr,#_INPUT_CMN_PIN_REG2
   87BA E0                 2671 	movx	a,@dptr
   87BB 44 20              2672 	orl	a,#0x20
   87BD F0                 2673 	movx	@dptr,a
                           2674 ;	../../shared/src/cal_top.c:246: delay01(5);
   87BE 90 00 05           2675 	mov	dptr,#0x0005
   87C1 78 16              2676 	mov	r0,#_delay01
   87C3 79 BC              2677 	mov	r1,#(_delay01 >> 8)
   87C5 7A 02              2678 	mov	r2,#(_delay01 >> 16)
   87C7 12 00 B3           2679 	lcall	__sdcc_banked_call
                           2680 ;	../../shared/src/cal_top.c:247: reg_ANA_PU_PLL_DLY_RING = 1;
   87CA 90 A3 4D           2681 	mov	dptr,#(_PM_CMN_REG2 + 0x0001)
   87CD E0                 2682 	movx	a,@dptr
   87CE 44 04              2683 	orl	a,#0x04
   87D0 F0                 2684 	movx	@dptr,a
                           2685 ;	../../shared/src/cal_top.c:248: delay01(5);
   87D1 90 00 05           2686 	mov	dptr,#0x0005
   87D4 78 16              2687 	mov	r0,#_delay01
   87D6 79 BC              2688 	mov	r1,#(_delay01 >> 8)
   87D8 7A 02              2689 	mov	r2,#(_delay01 >> 16)
   87DA 12 00 B3           2690 	lcall	__sdcc_banked_call
                           2691 ;	../../shared/src/cal_top.c:249: reg_RESET_ANA_RING = 0;
   87DD 90 A3 33           2692 	mov	dptr,#(_PLLCAL_REG1 + 0x0003)
   87E0 E0                 2693 	movx	a,@dptr
   87E1 54 F7              2694 	anl	a,#0xf7
   87E3 F0                 2695 	movx	@dptr,a
                           2696 ;	../../shared/src/cal_top.c:253: ring_pll_cal();
   87E4 78 16              2697 	mov	r0,#_ring_pll_cal
   87E6 79 D4              2698 	mov	r1,#(_ring_pll_cal >> 8)
   87E8 7A 01              2699 	mov	r2,#(_ring_pll_cal >> 16)
   87EA 12 00 B3           2700 	lcall	__sdcc_banked_call
   87ED D0 03              2701 	pop	ar3
                           2702 ;	../../shared/src/cal_top.c:255: if( no_pllspdchg ) break;  
   87EF 20 15 0F           2703 	jb	_no_pllspdchg,00153$
                           2704 ;	../../shared/src/cal_top.c:256: if( phy_mode == SERDES ) break; //SERDAS always use rate0
   87F2 90 A3 16           2705 	mov	dptr,#(_SYSTEM + 0x0002)
   87F5 E0                 2706 	movx	a,@dptr
   87F6 54 07              2707 	anl	a,#0x07
   87F8 FC                 2708 	mov	r4,a
   87F9 BC 04 02           2709 	cjne	r4,#0x04,00403$
   87FC 80 03              2710 	sjmp	00153$
   87FE                    2711 00403$:
                           2712 ;	../../shared/src/cal_top.c:231: for(rate=0; rate<2; rate++) {
   87FE 0B                 2713 	inc	r3
   87FF 80 AA              2714 	sjmp	00150$
   8801                    2715 00153$:
                           2716 ;	../../shared/src/cal_top.c:262: pll_clk_ready_ring_1();
   8801 78 A7              2717 	mov	r0,#_pll_clk_ready_ring_1
   8803 79 D4              2718 	mov	r1,#(_pll_clk_ready_ring_1 >> 8)
   8805 7A 02              2719 	mov	r2,#(_pll_clk_ready_ring_1 >> 16)
   8807 12 00 B3           2720 	lcall	__sdcc_banked_call
   880A 80 07              2721 	sjmp	00160$
   880C                    2722 00155$:
                           2723 ;	../../shared/src/cal_top.c:265: else reg_RING_PLL_DISABLE = 1;
   880C 90 A3 24           2724 	mov	dptr,#_INPUT_CMN_PIN_REG2
   880F E0                 2725 	movx	a,@dptr
   8810 44 01              2726 	orl	a,#0x01
   8812 F0                 2727 	movx	@dptr,a
   8813                    2728 00160$:
                           2729 ;	../../shared/src/cal_top.c:271: mcu_align_0(12);
   8813 75 82 0C           2730 	mov	dpl,#0x0C
   8816 78 FB              2731 	mov	r0,#_mcu_align_0
   8818 79 8E              2732 	mov	r1,#(_mcu_align_0 >> 8)
   881A 7A 01              2733 	mov	r2,#(_mcu_align_0 >> 16)
   881C 12 00 B3           2734 	lcall	__sdcc_banked_call
                           2735 ;	../../shared/src/cal_top.c:274: for(genno = min_gen; genno<=max_gen; genno++)  
   881F 90 63 01           2736 	mov	dptr,#_min_gen
   8822 E0                 2737 	movx	a,@dptr
   8823 FB                 2738 	mov	r3,a
   8824 FA                 2739 	mov	r2,a
   8825                    2740 00205$:
   8825 90 63 00           2741 	mov	dptr,#_max_gen
   8828 E0                 2742 	movx	a,@dptr
   8829 FB                 2743 	mov	r3,a
   882A B5 02 00           2744 	cjne	a,ar2,00404$
   882D                    2745 00404$:
   882D 50 03              2746 	jnc	00405$
   882F 02 89 AC           2747 	ljmp	00208$
   8832                    2748 00405$:
                           2749 ;	../../shared/src/cal_top.c:276: gen_rx = genno;	gen_tx = genno;
   8832 90 66 16           2750 	mov	dptr,#_gen_rx
   8835 EA                 2751 	mov	a,r2
   8836 F0                 2752 	movx	@dptr,a
   8837 90 66 15           2753 	mov	dptr,#_gen_tx
   883A EA                 2754 	mov	a,r2
   883B F0                 2755 	movx	@dptr,a
                           2756 ;	../../shared/src/cal_top.c:278: if(phy_mode==SERDES) { //serdes need to calibrate on own speed
   883C 90 A3 16           2757 	mov	dptr,#(_SYSTEM + 0x0002)
   883F E0                 2758 	movx	a,@dptr
   8840 54 07              2759 	anl	a,#0x07
   8842 FB                 2760 	mov	r3,a
   8843 BB 04 09           2761 	cjne	r3,#0x04,00165$
                           2762 ;	../../shared/src/cal_top.c:279: loadspeedtbl_gen();
   8846 C0 02              2763 	push	ar2
   8848 12 40 7E           2764 	lcall	_loadspeedtbl_gen
   884B D0 02              2765 	pop	ar2
   884D 80 07              2766 	sjmp	00166$
   884F                    2767 00165$:
                           2768 ;	../../shared/src/cal_top.c:282: loadSpeedtbl();
   884F C0 02              2769 	push	ar2
   8851 12 4D 31           2770 	lcall	_loadSpeedtbl
   8854 D0 02              2771 	pop	ar2
   8856                    2772 00166$:
                           2773 ;	../../shared/src/cal_top.c:292: if(!SPDCHG_ON_READ)
   8856 90 22 38           2774 	mov	dptr,#_MCU_STATUS2_LANE
   8859 E0                 2775 	movx	a,@dptr
   885A FB                 2776 	mov	r3,a
   885B 53 03 01           2777 	anl	ar3,#0x01
   885E BB 01 02           2778 	cjne	r3,#0x01,00408$
   8861 80 70              2779 	sjmp	00184$
   8863                    2780 00408$:
                           2781 ;	../../shared/src/cal_top.c:294: mcu_align_0(20);
   8863 75 82 14           2782 	mov	dpl,#0x14
   8866 C0 02              2783 	push	ar2
   8868 78 FB              2784 	mov	r0,#_mcu_align_0
   886A 79 8E              2785 	mov	r1,#(_mcu_align_0 >> 8)
   886C 7A 01              2786 	mov	r2,#(_mcu_align_0 >> 16)
   886E 12 00 B3           2787 	lcall	__sdcc_banked_call
   8871 D0 02              2788 	pop	ar2
                           2789 ;	../../shared/src/cal_top.c:296: if( mcu_en0) {
   8873 90 E6 BE           2790 	mov	dptr,#(_MCU_INFO_12 + 0x0002)
   8876 E0                 2791 	movx	a,@dptr
   8877 60 29              2792 	jz	00174$
                           2793 ;	../../shared/src/cal_top.c:297: if( mcuid==MCU_LANE0)	{
   8879 90 22 00           2794 	mov	dptr,#_MCU_CONTROL_LANE
   887C E0                 2795 	movx	a,@dptr
   887D 70 1B              2796 	jnz	00167$
                           2797 ;	../../shared/src/cal_top.c:298: vdd_cal();
   887F C0 02              2798 	push	ar2
   8881 78 45              2799 	mov	r0,#_vdd_cal
   8883 79 E7              2800 	mov	r1,#(_vdd_cal >> 8)
   8885 7A 02              2801 	mov	r2,#(_vdd_cal >> 16)
   8887 12 00 B3           2802 	lcall	__sdcc_banked_call
                           2803 ;	../../shared/src/cal_top.c:300: phy_check_lane(1);
   888A 75 82 01           2804 	mov	dpl,#0x01
   888D 78 DF              2805 	mov	r0,#_phy_check_lane
   888F 79 8E              2806 	mov	r1,#(_phy_check_lane >> 8)
   8891 7A 01              2807 	mov	r2,#(_phy_check_lane >> 16)
   8893 12 00 B3           2808 	lcall	__sdcc_banked_call
   8896 D0 02              2809 	pop	ar2
                           2810 ;	../../shared/src/cal_top.c:302: else while(PHY_CHECK_LANE0_READ!=1);
   8898 80 08              2811 	sjmp	00174$
   889A                    2812 00167$:
   889A 90 E6 B6           2813 	mov	dptr,#(_MCU_INFO_4 + 0x0002)
   889D E0                 2814 	movx	a,@dptr
   889E FB                 2815 	mov	r3,a
   889F BB 01 F8           2816 	cjne	r3,#0x01,00167$
   88A2                    2817 00174$:
                           2818 ;	../../shared/src/cal_top.c:305: if( mcu_en1) {
   88A2 90 E6 C2           2819 	mov	dptr,#(_MCU_INFO_13 + 0x0002)
   88A5 E0                 2820 	movx	a,@dptr
   88A6 60 2B              2821 	jz	00184$
                           2822 ;	../../shared/src/cal_top.c:306: if( mcuid==MCU_LANE1)	{
   88A8 90 22 00           2823 	mov	dptr,#_MCU_CONTROL_LANE
   88AB E0                 2824 	movx	a,@dptr
   88AC FB                 2825 	mov	r3,a
   88AD BB 01 1B           2826 	cjne	r3,#0x01,00175$
                           2827 ;	../../shared/src/cal_top.c:307: vdd_cal();
   88B0 C0 02              2828 	push	ar2
   88B2 78 45              2829 	mov	r0,#_vdd_cal
   88B4 79 E7              2830 	mov	r1,#(_vdd_cal >> 8)
   88B6 7A 02              2831 	mov	r2,#(_vdd_cal >> 16)
   88B8 12 00 B3           2832 	lcall	__sdcc_banked_call
                           2833 ;	../../shared/src/cal_top.c:309: phy_check_lane(1);
   88BB 75 82 01           2834 	mov	dpl,#0x01
   88BE 78 DF              2835 	mov	r0,#_phy_check_lane
   88C0 79 8E              2836 	mov	r1,#(_phy_check_lane >> 8)
   88C2 7A 01              2837 	mov	r2,#(_phy_check_lane >> 16)
   88C4 12 00 B3           2838 	lcall	__sdcc_banked_call
   88C7 D0 02              2839 	pop	ar2
                           2840 ;	../../shared/src/cal_top.c:311: else while(PHY_CHECK_LANE1_READ!=1);
   88C9 80 08              2841 	sjmp	00184$
   88CB                    2842 00175$:
   88CB 90 E6 BA           2843 	mov	dptr,#(_MCU_INFO_5 + 0x0002)
   88CE E0                 2844 	movx	a,@dptr
   88CF FB                 2845 	mov	r3,a
   88D0 BB 01 F8           2846 	cjne	r3,#0x01,00175$
   88D3                    2847 00184$:
                           2848 ;	../../shared/src/cal_top.c:335: if(!SPDCHG_ON_READ)
   88D3 90 22 38           2849 	mov	dptr,#_MCU_STATUS2_LANE
   88D6 E0                 2850 	movx	a,@dptr
   88D7 FB                 2851 	mov	r3,a
   88D8 53 03 01           2852 	anl	ar3,#0x01
   88DB BB 01 02           2853 	cjne	r3,#0x01,00418$
   88DE 80 70              2854 	sjmp	00202$
   88E0                    2855 00418$:
                           2856 ;	../../shared/src/cal_top.c:337: mcu_align_0(21);
   88E0 75 82 15           2857 	mov	dpl,#0x15
   88E3 C0 02              2858 	push	ar2
   88E5 78 FB              2859 	mov	r0,#_mcu_align_0
   88E7 79 8E              2860 	mov	r1,#(_mcu_align_0 >> 8)
   88E9 7A 01              2861 	mov	r2,#(_mcu_align_0 >> 16)
   88EB 12 00 B3           2862 	lcall	__sdcc_banked_call
   88EE D0 02              2863 	pop	ar2
                           2864 ;	../../shared/src/cal_top.c:339: if( mcu_en0) {
   88F0 90 E6 BE           2865 	mov	dptr,#(_MCU_INFO_12 + 0x0002)
   88F3 E0                 2866 	movx	a,@dptr
   88F4 60 29              2867 	jz	00192$
                           2868 ;	../../shared/src/cal_top.c:340: if( mcuid==MCU_LANE0)	{
   88F6 90 22 00           2869 	mov	dptr,#_MCU_CONTROL_LANE
   88F9 E0                 2870 	movx	a,@dptr
   88FA 70 1B              2871 	jnz	00185$
                           2872 ;	../../shared/src/cal_top.c:341: txdetect_cal();
   88FC C0 02              2873 	push	ar2
   88FE 78 1C              2874 	mov	r0,#_txdetect_cal
   8900 79 E6              2875 	mov	r1,#(_txdetect_cal >> 8)
   8902 7A 02              2876 	mov	r2,#(_txdetect_cal >> 16)
   8904 12 00 B3           2877 	lcall	__sdcc_banked_call
                           2878 ;	../../shared/src/cal_top.c:343: phy_check_lane(2);
   8907 75 82 02           2879 	mov	dpl,#0x02
   890A 78 DF              2880 	mov	r0,#_phy_check_lane
   890C 79 8E              2881 	mov	r1,#(_phy_check_lane >> 8)
   890E 7A 01              2882 	mov	r2,#(_phy_check_lane >> 16)
   8910 12 00 B3           2883 	lcall	__sdcc_banked_call
   8913 D0 02              2884 	pop	ar2
                           2885 ;	../../shared/src/cal_top.c:345: else while(PHY_CHECK_LANE0_READ!=2);
   8915 80 08              2886 	sjmp	00192$
   8917                    2887 00185$:
   8917 90 E6 B6           2888 	mov	dptr,#(_MCU_INFO_4 + 0x0002)
   891A E0                 2889 	movx	a,@dptr
   891B FB                 2890 	mov	r3,a
   891C BB 02 F8           2891 	cjne	r3,#0x02,00185$
   891F                    2892 00192$:
                           2893 ;	../../shared/src/cal_top.c:348: if( mcu_en1) {
   891F 90 E6 C2           2894 	mov	dptr,#(_MCU_INFO_13 + 0x0002)
   8922 E0                 2895 	movx	a,@dptr
   8923 60 2B              2896 	jz	00202$
                           2897 ;	../../shared/src/cal_top.c:349: if( mcuid==MCU_LANE1)	{
   8925 90 22 00           2898 	mov	dptr,#_MCU_CONTROL_LANE
   8928 E0                 2899 	movx	a,@dptr
   8929 FB                 2900 	mov	r3,a
   892A BB 01 1B           2901 	cjne	r3,#0x01,00193$
                           2902 ;	../../shared/src/cal_top.c:350: txdetect_cal();
   892D C0 02              2903 	push	ar2
   892F 78 1C              2904 	mov	r0,#_txdetect_cal
   8931 79 E6              2905 	mov	r1,#(_txdetect_cal >> 8)
   8933 7A 02              2906 	mov	r2,#(_txdetect_cal >> 16)
   8935 12 00 B3           2907 	lcall	__sdcc_banked_call
                           2908 ;	../../shared/src/cal_top.c:352: phy_check_lane(2);
   8938 75 82 02           2909 	mov	dpl,#0x02
   893B 78 DF              2910 	mov	r0,#_phy_check_lane
   893D 79 8E              2911 	mov	r1,#(_phy_check_lane >> 8)
   893F 7A 01              2912 	mov	r2,#(_phy_check_lane >> 16)
   8941 12 00 B3           2913 	lcall	__sdcc_banked_call
   8944 D0 02              2914 	pop	ar2
                           2915 ;	../../shared/src/cal_top.c:354: else while(PHY_CHECK_LANE1_READ!=2);
   8946 80 08              2916 	sjmp	00202$
   8948                    2917 00193$:
   8948 90 E6 BA           2918 	mov	dptr,#(_MCU_INFO_5 + 0x0002)
   894B E0                 2919 	movx	a,@dptr
   894C FB                 2920 	mov	r3,a
   894D BB 02 F8           2921 	cjne	r3,#0x02,00193$
   8950                    2922 00202$:
                           2923 ;	../../shared/src/cal_top.c:379: rxdcc_dll_cal();
   8950 C0 02              2924 	push	ar2
   8952 78 09              2925 	mov	r0,#_rxdcc_dll_cal
   8954 79 9F              2926 	mov	r1,#(_rxdcc_dll_cal >> 8)
   8956 7A 02              2927 	mov	r2,#(_rxdcc_dll_cal >> 16)
   8958 12 00 B3           2928 	lcall	__sdcc_banked_call
                           2929 ;	../../shared/src/cal_top.c:380: dll_cal();
   895B 78 4D              2930 	mov	r0,#_dll_cal
   895D 79 A9              2931 	mov	r1,#(_dll_cal >> 8)
   895F 7A 01              2932 	mov	r2,#(_dll_cal >> 16)
   8961 12 00 B3           2933 	lcall	__sdcc_banked_call
                           2934 ;	../../shared/src/cal_top.c:381: rxdcc_data_cal();
   8964 78 5F              2935 	mov	r0,#_rxdcc_data_cal
   8966 79 A2              2936 	mov	r1,#(_rxdcc_data_cal >> 8)
   8968 7A 02              2937 	mov	r2,#(_rxdcc_data_cal >> 16)
   896A 12 00 B3           2938 	lcall	__sdcc_banked_call
                           2939 ;	../../shared/src/cal_top.c:382: rxdcc_eom_cal();
   896D 78 28              2940 	mov	r0,#_rxdcc_eom_cal
   896F 79 A6              2941 	mov	r1,#(_rxdcc_eom_cal >> 8)
   8971 7A 02              2942 	mov	r2,#(_rxdcc_eom_cal >> 16)
   8973 12 00 B3           2943 	lcall	__sdcc_banked_call
                           2944 ;	../../shared/src/cal_top.c:384: align90_comp_cal();
   8976 78 00              2945 	mov	r0,#_align90_comp_cal
   8978 79 80              2946 	mov	r1,#(_align90_comp_cal >> 8)
   897A 7A 02              2947 	mov	r2,#(_align90_comp_cal >> 16)
   897C 12 00 B3           2948 	lcall	__sdcc_banked_call
                           2949 ;	../../shared/src/cal_top.c:388: rxalign90_cal();
   897F 78 2C              2950 	mov	r0,#_rxalign90_cal
   8981 79 82              2951 	mov	r1,#(_rxalign90_cal >> 8)
   8983 7A 01              2952 	mov	r2,#(_rxalign90_cal >> 16)
   8985 12 00 B3           2953 	lcall	__sdcc_banked_call
                           2954 ;	../../shared/src/cal_top.c:389: txdcc_cal();
   8988 78 E5              2955 	mov	r0,#_txdcc_cal
   898A 79 97              2956 	mov	r1,#(_txdcc_cal >> 8)
   898C 7A 02              2957 	mov	r2,#(_txdcc_cal >> 16)
   898E 12 00 B3           2958 	lcall	__sdcc_banked_call
                           2959 ;	../../shared/src/cal_top.c:390: txdcc_pdiv_cal();
   8991 78 A5              2960 	mov	r0,#_txdcc_pdiv_cal
   8993 79 9B              2961 	mov	r1,#(_txdcc_pdiv_cal >> 8)
   8995 7A 02              2962 	mov	r2,#(_txdcc_pdiv_cal >> 16)
   8997 12 00 B3           2963 	lcall	__sdcc_banked_call
   899A D0 02              2964 	pop	ar2
                           2965 ;	../../shared/src/cal_top.c:392: if( phy_mode==SERDES ) break; //SERDAS always use one gen
   899C 90 A3 16           2966 	mov	dptr,#(_SYSTEM + 0x0002)
   899F E0                 2967 	movx	a,@dptr
   89A0 54 07              2968 	anl	a,#0x07
   89A2 FB                 2969 	mov	r3,a
   89A3 BB 04 02           2970 	cjne	r3,#0x04,00428$
   89A6 80 04              2971 	sjmp	00208$
   89A8                    2972 00428$:
                           2973 ;	../../shared/src/cal_top.c:274: for(genno = min_gen; genno<=max_gen; genno++)  
   89A8 0A                 2974 	inc	r2
   89A9 02 88 25           2975 	ljmp	00205$
   89AC                    2976 00208$:
                           2977 ;	../../shared/src/cal_top.c:395: if(SPDCHG_ON_READ) goto skip_out;
   89AC 90 22 38           2978 	mov	dptr,#_MCU_STATUS2_LANE
   89AF E0                 2979 	movx	a,@dptr
   89B0 FA                 2980 	mov	r2,a
   89B1 53 02 01           2981 	anl	ar2,#0x01
   89B4 BA 01 03           2982 	cjne	r2,#0x01,00429$
   89B7 02 8B 01           2983 	ljmp	00261$
   89BA                    2984 00429$:
                           2985 ;	../../shared/src/cal_top.c:397: sampler_cal();
   89BA 78 94              2986 	mov	r0,#_sampler_cal
   89BC 79 D9              2987 	mov	r1,#(_sampler_cal >> 8)
   89BE 7A 02              2988 	mov	r2,#(_sampler_cal >> 16)
   89C0 12 00 B3           2989 	lcall	__sdcc_banked_call
                           2990 ;	../../shared/src/cal_top.c:398: squelch_cal();
   89C3 78 F4              2991 	mov	r0,#_squelch_cal
   89C5 79 E0              2992 	mov	r1,#(_squelch_cal >> 8)
   89C7 7A 02              2993 	mov	r2,#(_squelch_cal >> 16)
   89C9 12 00 B3           2994 	lcall	__sdcc_banked_call
                           2995 ;	../../shared/src/cal_top.c:403: mcu_align_0(22);
   89CC 75 82 16           2996 	mov	dpl,#0x16
   89CF 78 FB              2997 	mov	r0,#_mcu_align_0
   89D1 79 8E              2998 	mov	r1,#(_mcu_align_0 >> 8)
   89D3 7A 01              2999 	mov	r2,#(_mcu_align_0 >> 16)
   89D5 12 00 B3           3000 	lcall	__sdcc_banked_call
                           3001 ;	../../shared/src/cal_top.c:405: if(mcuid == master_mcu) reg_RXIMPCAL_EN = 1;
   89D8 90 22 00           3002 	mov	dptr,#_MCU_CONTROL_LANE
   89DB E0                 3003 	movx	a,@dptr
   89DC FA                 3004 	mov	r2,a
   89DD 90 E6 50           3005 	mov	dptr,#_MCU_CONFIG
   89E0 E0                 3006 	movx	a,@dptr
   89E1 FB                 3007 	mov	r3,a
   89E2 EA                 3008 	mov	a,r2
   89E3 B5 03 09           3009 	cjne	a,ar3,00211$
   89E6 90 82 00           3010 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_128
   89E9 E0                 3011 	movx	a,@dptr
   89EA 44 04              3012 	orl	a,#0x04
   89EC F0                 3013 	movx	@dptr,a
                           3014 ;	../../shared/src/cal_top.c:406: else while(reg_RXIMPCAL_EN==0);
   89ED 80 07              3015 	sjmp	00216$
   89EF                    3016 00211$:
   89EF 90 82 00           3017 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_128
   89F2 E0                 3018 	movx	a,@dptr
   89F3 30 E2 F9           3019 	jnb	acc.2,00211$
   89F6                    3020 00216$:
                           3021 ;	../../shared/src/cal_top.c:409: if( mcu_en0) {
   89F6 90 E6 BE           3022 	mov	dptr,#(_MCU_INFO_12 + 0x0002)
   89F9 E0                 3023 	movx	a,@dptr
   89FA 60 25              3024 	jz	00224$
                           3025 ;	../../shared/src/cal_top.c:410: if(mcuid==MCU_LANE0) {
   89FC 90 22 00           3026 	mov	dptr,#_MCU_CONTROL_LANE
   89FF E0                 3027 	movx	a,@dptr
   8A00 70 17              3028 	jnz	00217$
                           3029 ;	../../shared/src/cal_top.c:411: rximp_cal();
   8A02 78 8E              3030 	mov	r0,#_rximp_cal
   8A04 79 BA              3031 	mov	r1,#(_rximp_cal >> 8)
   8A06 7A 02              3032 	mov	r2,#(_rximp_cal >> 16)
   8A08 12 00 B3           3033 	lcall	__sdcc_banked_call
                           3034 ;	../../shared/src/cal_top.c:413: phy_check_lane(3);
   8A0B 75 82 03           3035 	mov	dpl,#0x03
   8A0E 78 DF              3036 	mov	r0,#_phy_check_lane
   8A10 79 8E              3037 	mov	r1,#(_phy_check_lane >> 8)
   8A12 7A 01              3038 	mov	r2,#(_phy_check_lane >> 16)
   8A14 12 00 B3           3039 	lcall	__sdcc_banked_call
                           3040 ;	../../shared/src/cal_top.c:415: else while(PHY_CHECK_LANE0_READ!=3);
   8A17 80 08              3041 	sjmp	00224$
   8A19                    3042 00217$:
   8A19 90 E6 B6           3043 	mov	dptr,#(_MCU_INFO_4 + 0x0002)
   8A1C E0                 3044 	movx	a,@dptr
   8A1D FA                 3045 	mov	r2,a
   8A1E BA 03 F8           3046 	cjne	r2,#0x03,00217$
   8A21                    3047 00224$:
                           3048 ;	../../shared/src/cal_top.c:419: if(mcu_en1) {
   8A21 90 E6 C2           3049 	mov	dptr,#(_MCU_INFO_13 + 0x0002)
   8A24 E0                 3050 	movx	a,@dptr
   8A25 60 27              3051 	jz	00232$
                           3052 ;	../../shared/src/cal_top.c:420: if(mcuid==MCU_LANE1)	{
   8A27 90 22 00           3053 	mov	dptr,#_MCU_CONTROL_LANE
   8A2A E0                 3054 	movx	a,@dptr
   8A2B FA                 3055 	mov	r2,a
   8A2C BA 01 17           3056 	cjne	r2,#0x01,00225$
                           3057 ;	../../shared/src/cal_top.c:421: rximp_cal();
   8A2F 78 8E              3058 	mov	r0,#_rximp_cal
   8A31 79 BA              3059 	mov	r1,#(_rximp_cal >> 8)
   8A33 7A 02              3060 	mov	r2,#(_rximp_cal >> 16)
   8A35 12 00 B3           3061 	lcall	__sdcc_banked_call
                           3062 ;	../../shared/src/cal_top.c:423: phy_check_lane(3);
   8A38 75 82 03           3063 	mov	dpl,#0x03
   8A3B 78 DF              3064 	mov	r0,#_phy_check_lane
   8A3D 79 8E              3065 	mov	r1,#(_phy_check_lane >> 8)
   8A3F 7A 01              3066 	mov	r2,#(_phy_check_lane >> 16)
   8A41 12 00 B3           3067 	lcall	__sdcc_banked_call
                           3068 ;	../../shared/src/cal_top.c:425: else while(PHY_CHECK_LANE1_READ!=3);
   8A44 80 08              3069 	sjmp	00232$
   8A46                    3070 00225$:
   8A46 90 E6 BA           3071 	mov	dptr,#(_MCU_INFO_5 + 0x0002)
   8A49 E0                 3072 	movx	a,@dptr
   8A4A FA                 3073 	mov	r2,a
   8A4B BA 03 F8           3074 	cjne	r2,#0x03,00225$
   8A4E                    3075 00232$:
                           3076 ;	../../shared/src/cal_top.c:449: if(mcuid == master_mcu)
   8A4E 90 22 00           3077 	mov	dptr,#_MCU_CONTROL_LANE
   8A51 E0                 3078 	movx	a,@dptr
   8A52 FA                 3079 	mov	r2,a
   8A53 90 E6 50           3080 	mov	dptr,#_MCU_CONFIG
   8A56 E0                 3081 	movx	a,@dptr
   8A57 FB                 3082 	mov	r3,a
   8A58 EA                 3083 	mov	a,r2
   8A59 B5 03 09           3084 	cjne	a,ar3,00233$
                           3085 ;	../../shared/src/cal_top.c:450: reg_RXIMPCAL_EN = 0;
   8A5C 90 82 00           3086 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_128
   8A5F E0                 3087 	movx	a,@dptr
   8A60 54 FB              3088 	anl	a,#0xfb
   8A62 F0                 3089 	movx	@dptr,a
                           3090 ;	../../shared/src/cal_top.c:451: else while(reg_RXIMPCAL_EN);
   8A63 80 07              3091 	sjmp	00238$
   8A65                    3092 00233$:
   8A65 90 82 00           3093 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_128
   8A68 E0                 3094 	movx	a,@dptr
   8A69 20 E2 F9           3095 	jb	acc.2,00233$
   8A6C                    3096 00238$:
                           3097 ;	../../shared/src/cal_top.c:456: mcu_align_0(24);
   8A6C 75 82 18           3098 	mov	dpl,#0x18
   8A6F 78 FB              3099 	mov	r0,#_mcu_align_0
   8A71 79 8E              3100 	mov	r1,#(_mcu_align_0 >> 8)
   8A73 7A 01              3101 	mov	r2,#(_mcu_align_0 >> 16)
   8A75 12 00 B3           3102 	lcall	__sdcc_banked_call
                           3103 ;	../../shared/src/cal_top.c:458: if(mcuid == master_mcu) reg_TXIMPCAL_EN = 1;
   8A78 90 22 00           3104 	mov	dptr,#_MCU_CONTROL_LANE
   8A7B E0                 3105 	movx	a,@dptr
   8A7C FA                 3106 	mov	r2,a
   8A7D 90 E6 50           3107 	mov	dptr,#_MCU_CONFIG
   8A80 E0                 3108 	movx	a,@dptr
   8A81 FB                 3109 	mov	r3,a
   8A82 EA                 3110 	mov	a,r2
   8A83 B5 03 09           3111 	cjne	a,ar3,00239$
   8A86 90 82 00           3112 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_128
   8A89 E0                 3113 	movx	a,@dptr
   8A8A 44 08              3114 	orl	a,#0x08
   8A8C F0                 3115 	movx	@dptr,a
                           3116 ;	../../shared/src/cal_top.c:459: else while(reg_TXIMPCAL_EN==0);
   8A8D 80 07              3117 	sjmp	00244$
   8A8F                    3118 00239$:
   8A8F 90 82 00           3119 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_128
   8A92 E0                 3120 	movx	a,@dptr
   8A93 30 E3 F9           3121 	jnb	acc.3,00239$
   8A96                    3122 00244$:
                           3123 ;	../../shared/src/cal_top.c:462: if( mcu_en0) {
   8A96 90 E6 BE           3124 	mov	dptr,#(_MCU_INFO_12 + 0x0002)
   8A99 E0                 3125 	movx	a,@dptr
   8A9A 60 25              3126 	jz	00252$
                           3127 ;	../../shared/src/cal_top.c:463: if( mcuid==MCU_LANE0 )	{
   8A9C 90 22 00           3128 	mov	dptr,#_MCU_CONTROL_LANE
   8A9F E0                 3129 	movx	a,@dptr
   8AA0 70 17              3130 	jnz	00245$
                           3131 ;	../../shared/src/cal_top.c:464: tximp_cal();  phy_check_lane(5);  //PHY_CHECK_LANE = 5;
   8AA2 78 D7              3132 	mov	r0,#_tximp_cal
   8AA4 79 B3              3133 	mov	r1,#(_tximp_cal >> 8)
   8AA6 7A 02              3134 	mov	r2,#(_tximp_cal >> 16)
   8AA8 12 00 B3           3135 	lcall	__sdcc_banked_call
   8AAB 75 82 05           3136 	mov	dpl,#0x05
   8AAE 78 DF              3137 	mov	r0,#_phy_check_lane
   8AB0 79 8E              3138 	mov	r1,#(_phy_check_lane >> 8)
   8AB2 7A 01              3139 	mov	r2,#(_phy_check_lane >> 16)
   8AB4 12 00 B3           3140 	lcall	__sdcc_banked_call
                           3141 ;	../../shared/src/cal_top.c:466: else while(PHY_CHECK_LANE0_READ!=5);
   8AB7 80 08              3142 	sjmp	00252$
   8AB9                    3143 00245$:
   8AB9 90 E6 B6           3144 	mov	dptr,#(_MCU_INFO_4 + 0x0002)
   8ABC E0                 3145 	movx	a,@dptr
   8ABD FA                 3146 	mov	r2,a
   8ABE BA 05 F8           3147 	cjne	r2,#0x05,00245$
   8AC1                    3148 00252$:
                           3149 ;	../../shared/src/cal_top.c:470: if(mcu_en1) {
   8AC1 90 E6 C2           3150 	mov	dptr,#(_MCU_INFO_13 + 0x0002)
   8AC4 E0                 3151 	movx	a,@dptr
   8AC5 60 27              3152 	jz	00260$
                           3153 ;	../../shared/src/cal_top.c:471: if( mcuid==MCU_LANE1 )	{
   8AC7 90 22 00           3154 	mov	dptr,#_MCU_CONTROL_LANE
   8ACA E0                 3155 	movx	a,@dptr
   8ACB FA                 3156 	mov	r2,a
   8ACC BA 01 17           3157 	cjne	r2,#0x01,00253$
                           3158 ;	../../shared/src/cal_top.c:472: tximp_cal();  phy_check_lane(5);  //PHY_CHECK_LANE = 5;
   8ACF 78 D7              3159 	mov	r0,#_tximp_cal
   8AD1 79 B3              3160 	mov	r1,#(_tximp_cal >> 8)
   8AD3 7A 02              3161 	mov	r2,#(_tximp_cal >> 16)
   8AD5 12 00 B3           3162 	lcall	__sdcc_banked_call
   8AD8 75 82 05           3163 	mov	dpl,#0x05
   8ADB 78 DF              3164 	mov	r0,#_phy_check_lane
   8ADD 79 8E              3165 	mov	r1,#(_phy_check_lane >> 8)
   8ADF 7A 01              3166 	mov	r2,#(_phy_check_lane >> 16)
   8AE1 12 00 B3           3167 	lcall	__sdcc_banked_call
                           3168 ;	../../shared/src/cal_top.c:474: else while(PHY_CHECK_LANE1_READ!=5);
   8AE4 80 08              3169 	sjmp	00260$
   8AE6                    3170 00253$:
   8AE6 90 E6 BA           3171 	mov	dptr,#(_MCU_INFO_5 + 0x0002)
   8AE9 E0                 3172 	movx	a,@dptr
   8AEA FA                 3173 	mov	r2,a
   8AEB BA 05 F8           3174 	cjne	r2,#0x05,00253$
   8AEE                    3175 00260$:
                           3176 ;	../../shared/src/cal_top.c:494: reg_TXIMPCAL_EN = 0;
   8AEE 90 82 00           3177 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_128
   8AF1 E0                 3178 	movx	a,@dptr
   8AF2 54 F7              3179 	anl	a,#0xf7
   8AF4 F0                 3180 	movx	@dptr,a
                           3181 ;	../../shared/src/cal_top.c:498: mcu_align_0(0);
   8AF5 75 82 00           3182 	mov	dpl,#0x00
   8AF8 78 FB              3183 	mov	r0,#_mcu_align_0
   8AFA 79 8E              3184 	mov	r1,#(_mcu_align_0 >> 8)
   8AFC 7A 01              3185 	mov	r2,#(_mcu_align_0 >> 16)
   8AFE 12 00 B3           3186 	lcall	__sdcc_banked_call
                           3187 ;	../../shared/src/cal_top.c:500: skip_out:
   8B01                    3188 00261$:
                           3189 ;	../../shared/src/cal_top.c:502: reg_ANA_TX_IDLE_FORCE_LANE = 0;
   8B01 90 20 03           3190 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0003)
   8B04 E0                 3191 	movx	a,@dptr
   8B05 54 FB              3192 	anl	a,#0xfb
   8B07 F0                 3193 	movx	@dptr,a
                           3194 ;	../../shared/src/cal_top.c:503: reg_ANA_TX_IDLE_LANE = 0;
   8B08 90 20 03           3195 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0003)
   8B0B E0                 3196 	movx	a,@dptr
   8B0C 54 FE              3197 	anl	a,#0xfe
   8B0E F0                 3198 	movx	@dptr,a
                           3199 ;	../../shared/src/cal_top.c:506: reg_DTL_LOOP_FREEZE_LANE = 0;  //analog deleted
   8B0F 90 21 6A           3200 	mov	dptr,#(_DTL_REG2 + 0x0002)
   8B12 E0                 3201 	movx	a,@dptr
   8B13 54 FB              3202 	anl	a,#0xfb
   8B15 F0                 3203 	movx	@dptr,a
                           3204 ;	../../shared/src/cal_top.c:510: reg_DTL_FLOOP_FREEZE_LANE = 0;
   8B16 90 21 63           3205 	mov	dptr,#(_DTL_REG0 + 0x0003)
   8B19 E0                 3206 	movx	a,@dptr
   8B1A 54 BF              3207 	anl	a,#0xbf
   8B1C F0                 3208 	movx	@dptr,a
                           3209 ;	../../shared/src/cal_top.c:517: reg_TX_TDTAP_SEL_LANE = 1;
   8B1D 90 02 44           3210 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_145
   8B20 E0                 3211 	movx	a,@dptr
   8B21 44 80              3212 	orl	a,#0x80
   8B23 F0                 3213 	movx	@dptr,a
                           3214 ;	../../shared/src/cal_top.c:518: reg_TXDCCCAL_EN_LANE = 0;
   8B24 90 02 4C           3215 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_147
   8B27 E0                 3216 	movx	a,@dptr
   8B28 54 7F              3217 	anl	a,#0x7f
   8B2A F0                 3218 	movx	@dptr,a
                           3219 ;	../../shared/src/cal_top.c:519: lnx_DLL_VDDA_TRACKING_ON_LANE = 1;
   8B2B 90 60 0A           3220 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0002)
   8B2E E0                 3221 	movx	a,@dptr
   8B2F 44 20              3222 	orl	a,#0x20
   8B31 F0                 3223 	movx	@dptr,a
                           3224 ;	../../shared/src/cal_top.c:520: vdd_cnt = 0;
   8B32 90 66 38           3225 	mov	dptr,#_vdd_cnt
                           3226 ;	../../shared/src/cal_top.c:521: dcc_cont = 0;
   8B35 E4                 3227 	clr	a
   8B36 F0                 3228 	movx	@dptr,a
   8B37 90 66 39           3229 	mov	dptr,#_dcc_cont
   8B3A F0                 3230 	movx	@dptr,a
                           3231 ;	../../shared/src/cal_top.c:522: reg_SHRTR = 0; //recover
   8B3B 90 82 2C           3232 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_139
   8B3E E0                 3233 	movx	a,@dptr
   8B3F 54 EF              3234 	anl	a,#0xef
   8B41 F0                 3235 	movx	@dptr,a
                           3236 ;	../../shared/src/cal_top.c:524: SYNC_SATUS_PLL_OR_PLL_OFF = 0;
   8B42 90 E6 B1           3237 	mov	dptr,#(_SYNC_INFO + 0x0001)
   8B45 E4                 3238 	clr	a
   8B46 F0                 3239 	movx	@dptr,a
                           3240 ;	../../shared/src/cal_top.c:526: lnx_CAL_DONE_LANE = 1;
   8B47 90 60 03           3241 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   8B4A E0                 3242 	movx	a,@dptr
   8B4B 44 01              3243 	orl	a,#0x01
   8B4D F0                 3244 	movx	@dptr,a
                           3245 ;	../../shared/src/cal_top.c:529: if(reg_PWRON_SEQ) {
   8B4E 90 A3 18           3246 	mov	dptr,#_PM_CMN_REG1
   8B51 E0                 3247 	movx	a,@dptr
   8B52 30 E5 2C           3248 	jnb	acc.5,00272$
                           3249 ;	../../shared/src/cal_top.c:530: if((master_mcu==MCU_LANE0 && mcuid==MCU_LANE0) || (master_mcu==MCU_LANE1 && mcuid==MCU_LANE1)
   8B55 90 E6 50           3250 	mov	dptr,#_MCU_CONFIG
   8B58 E0                 3251 	movx	a,@dptr
   8B59 70 06              3252 	jnz	00270$
   8B5B 90 22 00           3253 	mov	dptr,#_MCU_CONTROL_LANE
   8B5E E0                 3254 	movx	a,@dptr
   8B5F 60 10              3255 	jz	00265$
   8B61                    3256 00270$:
   8B61 90 E6 50           3257 	mov	dptr,#_MCU_CONFIG
   8B64 E0                 3258 	movx	a,@dptr
   8B65 FA                 3259 	mov	r2,a
   8B66 BA 01 11           3260 	cjne	r2,#0x01,00262$
   8B69 90 22 00           3261 	mov	dptr,#_MCU_CONTROL_LANE
   8B6C E0                 3262 	movx	a,@dptr
   8B6D FA                 3263 	mov	r2,a
   8B6E BA 01 09           3264 	cjne	r2,#0x01,00262$
   8B71                    3265 00265$:
                           3266 ;	../../shared/src/cal_top.c:535: reg_PWRON_SEQ = 0;
   8B71 90 A3 18           3267 	mov	dptr,#_PM_CMN_REG1
   8B74 E0                 3268 	movx	a,@dptr
   8B75 54 DF              3269 	anl	a,#0xdf
   8B77 F0                 3270 	movx	@dptr,a
                           3271 ;	../../shared/src/cal_top.c:537: else while(reg_PWRON_SEQ);
   8B78 80 07              3272 	sjmp	00272$
   8B7A                    3273 00262$:
   8B7A 90 A3 18           3274 	mov	dptr,#_PM_CMN_REG1
   8B7D E0                 3275 	movx	a,@dptr
   8B7E 20 E5 F9           3276 	jb	acc.5,00262$
   8B81                    3277 00272$:
                           3278 ;	../../shared/src/cal_top.c:539: if( phy_mode == PCIE ) {
   8B81 90 A3 16           3279 	mov	dptr,#(_SYSTEM + 0x0002)
   8B84 E0                 3280 	movx	a,@dptr
   8B85 54 07              3281 	anl	a,#0x07
   8B87 FA                 3282 	mov	r2,a
   8B88 BA 03 11           3283 	cjne	r2,#0x03,00274$
                           3284 ;	../../shared/src/cal_top.c:540: pre_ringpll_rate = PLL_RATE_SEL_RING;
   8B8B 90 E6 1F           3285 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0003)
   8B8E E0                 3286 	movx	a,@dptr
   8B8F 90 67 8F           3287 	mov	dptr,#_pre_ringpll_rate
   8B92 F0                 3288 	movx	@dptr,a
                           3289 ;	../../shared/src/cal_top.c:541: pre_lcpll_rate = PLL_RATE_SEL;
   8B93 90 E6 1E           3290 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0002)
   8B96 E0                 3291 	movx	a,@dptr
   8B97 FA                 3292 	mov	r2,a
   8B98 90 67 8E           3293 	mov	dptr,#_pre_lcpll_rate
   8B9B F0                 3294 	movx	@dptr,a
   8B9C                    3295 00274$:
                           3296 ;	../../shared/src/cal_top.c:544: pwrsq_on = 0;
   8B9C 90 66 2B           3297 	mov	dptr,#_pwrsq_on
   8B9F E4                 3298 	clr	a
   8BA0 F0                 3299 	movx	@dptr,a
                           3300 ;	../../shared/src/cal_top.c:546: if(serdes_ring_lane_en==0)
   8BA1 90 66 23           3301 	mov	dptr,#_serdes_ring_lane_en
   8BA4 E0                 3302 	movx	a,@dptr
   8BA5 FA                 3303 	mov	r2,a
   8BA6 70 08              3304 	jnz	00279$
                           3305 ;	../../shared/src/cal_top.c:547: PHY_STATUS = ST_SPDCHG;
   8BA8 90 22 30           3306 	mov	dptr,#_MCU_STATUS0_LANE
   8BAB 74 19              3307 	mov	a,#0x19
   8BAD F0                 3308 	movx	@dptr,a
   8BAE 80 15              3309 	sjmp	00285$
   8BB0                    3310 00279$:
                           3311 ;	../../shared/src/cal_top.c:549: if(reg_PIN_PU_PLL_RD_LANE) PHY_STATUS = ST_SPDCHG;
   8BB0 90 20 07           3312 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   8BB3 E0                 3313 	movx	a,@dptr
   8BB4 30 E5 08           3314 	jnb	acc.5,00276$
   8BB7 90 22 30           3315 	mov	dptr,#_MCU_STATUS0_LANE
   8BBA 74 19              3316 	mov	a,#0x19
   8BBC F0                 3317 	movx	@dptr,a
   8BBD 80 06              3318 	sjmp	00285$
   8BBF                    3319 00276$:
                           3320 ;	../../shared/src/cal_top.c:550: else PHY_STATUS = ST_SLUMBER;
   8BBF 90 22 30           3321 	mov	dptr,#_MCU_STATUS0_LANE
   8BC2 74 1A              3322 	mov	a,#0x1A
   8BC4 F0                 3323 	movx	@dptr,a
   8BC5                    3324 00285$:
   8BC5 02 00 C5           3325 	ljmp	__sdcc_banked_ret
                           3326 ;------------------------------------------------------------
                           3327 ;Allocation info for local variables in function 'Cal_Cont'
                           3328 ;------------------------------------------------------------
                           3329 ;cont_cal_inx              Allocated to registers r2 
                           3330 ;------------------------------------------------------------
                           3331 ;	../../shared/src/cal_top.c:563: void Cal_Cont(void) BANKING_CTRL {
                           3332 ;	-----------------------------------------
                           3333 ;	 function Cal_Cont
                           3334 ;	-----------------------------------------
   8BC8                    3335 _Cal_Cont:
                           3336 ;	../../shared/src/cal_top.c:566: if(cmx_FORCE_CONT_CAL_SKIP) return;
   8BC8 90 E6 07           3337 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   8BCB E0                 3338 	movx	a,@dptr
   8BCC 30 E0 03           3339 	jnb	acc.0,00102$
   8BCF 02 8E DC           3340 	ljmp	00185$
   8BD2                    3341 00102$:
                           3342 ;	../../shared/src/cal_top.c:568: cont_cal_on = 1;
   8BD2 D2 16              3343 	setb	_cont_cal_on
                           3344 ;	../../shared/src/cal_top.c:569: do {
   8BD4 7A 00              3345 	mov	r2,#0x00
   8BD6                    3346 00182$:
                           3347 ;	../../shared/src/cal_top.c:570: switch(cont_cal_inx) {
   8BD6 74 07              3348 	mov	a,#0x07
   8BD8 B5 02 00           3349 	cjne	a,ar2,00228$
   8BDB                    3350 00228$:
   8BDB 50 03              3351 	jnc	00229$
   8BDD 02 8E C9           3352 	ljmp	00183$
   8BE0                    3353 00229$:
   8BE0 EA                 3354 	mov	a,r2
   8BE1 2A                 3355 	add	a,r2
   8BE2 2A                 3356 	add	a,r2
   8BE3 90 8B E7           3357 	mov	dptr,#00230$
   8BE6 73                 3358 	jmp	@a+dptr
   8BE7                    3359 00230$:
   8BE7 02 8B FF           3360 	ljmp	00103$
   8BEA 02 8C 47           3361 	ljmp	00108$
   8BED 02 8C CB           3362 	ljmp	00123$
   8BF0 02 8C E5           3363 	ljmp	00126$
   8BF3 02 8D 02           3364 	ljmp	00129$
   8BF6 02 8D 1F           3365 	ljmp	00132$
   8BF9 02 8D F9           3366 	ljmp	00152$
   8BFC 02 8E 94           3367 	ljmp	00173$
                           3368 ;	../../shared/src/cal_top.c:571: case 0:
   8BFF                    3369 00103$:
                           3370 ;	../../shared/src/cal_top.c:572: tsen_dat = read_tsen();
   8BFF C0 02              3371 	push	ar2
   8C01 78 B9              3372 	mov	r0,#_read_tsen
   8C03 79 BE              3373 	mov	r1,#(_read_tsen >> 8)
   8C05 7A 02              3374 	mov	r2,#(_read_tsen >> 16)
   8C07 12 00 B3           3375 	lcall	__sdcc_banked_call
   8C0A E5 82              3376 	mov	a,dpl
   8C0C 85 83 F0           3377 	mov	b,dph
   8C0F D0 02              3378 	pop	ar2
   8C11 90 66 17           3379 	mov	dptr,#_tsen_dat
   8C14 F0                 3380 	movx	@dptr,a
   8C15 A3                 3381 	inc	dptr
   8C16 E5 F0              3382 	mov	a,b
   8C18 F0                 3383 	movx	@dptr,a
                           3384 ;	../../shared/src/cal_top.c:577: if(ring_lane_sel && /*slave_phy_on==0 &&*/ reg_ANA_PLL_CLK_READY_RING && cmx_RINGPLL_CAL_CONT_EN)
   8C19 90 66 24           3385 	mov	dptr,#_ring_lane_sel
   8C1C E0                 3386 	movx	a,@dptr
   8C1D FB                 3387 	mov	r3,a
   8C1E 70 03              3388 	jnz	00231$
   8C20 02 8E C9           3389 	ljmp	00183$
   8C23                    3390 00231$:
   8C23 90 A3 4E           3391 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   8C26 E0                 3392 	movx	a,@dptr
   8C27 20 E5 03           3393 	jb	acc.5,00232$
   8C2A 02 8E C9           3394 	ljmp	00183$
   8C2D                    3395 00232$:
   8C2D 90 E6 0D           3396 	mov	dptr,#(_CONTROL_CONFIG2 + 0x0001)
   8C30 E0                 3397 	movx	a,@dptr
   8C31 20 E5 03           3398 	jb	acc.5,00233$
   8C34 02 8E C9           3399 	ljmp	00183$
   8C37                    3400 00233$:
                           3401 ;	../../shared/src/cal_top.c:578: ring_pll_cont();
   8C37 C0 02              3402 	push	ar2
   8C39 78 3D              3403 	mov	r0,#_ring_pll_cont
   8C3B 79 DB              3404 	mov	r1,#(_ring_pll_cont >> 8)
   8C3D 7A 01              3405 	mov	r2,#(_ring_pll_cont >> 16)
   8C3F 12 00 B3           3406 	lcall	__sdcc_banked_call
   8C42 D0 02              3407 	pop	ar2
                           3408 ;	../../shared/src/cal_top.c:580: break;
   8C44 02 8E C9           3409 	ljmp	00183$
                           3410 ;	../../shared/src/cal_top.c:581: case 1:
   8C47                    3411 00108$:
                           3412 ;	../../shared/src/cal_top.c:582: if( lnx_CAL_VDD_CONTINUOUS_MODE_EN_LANE ) {
   8C47 90 60 0A           3413 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0002)
   8C4A E0                 3414 	movx	a,@dptr
   8C4B 20 E3 03           3415 	jb	acc.3,00234$
   8C4E 02 8E C9           3416 	ljmp	00183$
   8C51                    3417 00234$:
                           3418 ;	../../shared/src/cal_top.c:587: if(vdd_cnt==SELLV_TXDATA && cmx_TXDETECT_CAL_CONT_EN && reg_PIN_PLL_READY_TX_LANE)
   8C51 90 66 38           3419 	mov	dptr,#_vdd_cnt
   8C54 E0                 3420 	movx	a,@dptr
   8C55 FB                 3421 	mov	r3,a
   8C56 BB 01 1D           3422 	cjne	r3,#0x01,00115$
   8C59 90 E6 0E           3423 	mov	dptr,#(_CONTROL_CONFIG2 + 0x0002)
   8C5C E0                 3424 	movx	a,@dptr
   8C5D 30 E0 16           3425 	jnb	acc.0,00115$
   8C60 90 20 02           3426 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   8C63 E0                 3427 	movx	a,@dptr
   8C64 30 E2 0F           3428 	jnb	acc.2,00115$
                           3429 ;	../../shared/src/cal_top.c:588: txdetect_cal();
   8C67 C0 02              3430 	push	ar2
   8C69 78 1C              3431 	mov	r0,#_txdetect_cal
   8C6B 79 E6              3432 	mov	r1,#(_txdetect_cal >> 8)
   8C6D 7A 02              3433 	mov	r2,#(_txdetect_cal >> 16)
   8C6F 12 00 B3           3434 	lcall	__sdcc_banked_call
   8C72 D0 02              3435 	pop	ar2
   8C74 80 37              3436 	sjmp	00116$
   8C76                    3437 00115$:
                           3438 ;	../../shared/src/cal_top.c:590: if((vdd_cnt<SELLV_RXEOMCLK && reg_PIN_PU_TX_RD_LANE) || (vdd_cnt>SELLV_TXPRE && reg_PIN_PLL_READY_RX_LANE))	//Skip t/rx cal when pu_px=0
   8C76 90 66 38           3439 	mov	dptr,#_vdd_cnt
   8C79 E0                 3440 	movx	a,@dptr
   8C7A FB                 3441 	mov	r3,a
   8C7B BB 03 00           3442 	cjne	r3,#0x03,00239$
   8C7E                    3443 00239$:
   8C7E 50 07              3444 	jnc	00113$
   8C80 90 20 07           3445 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   8C83 E0                 3446 	movx	a,@dptr
   8C84 20 E4 13           3447 	jb	acc.4,00109$
   8C87                    3448 00113$:
   8C87 90 66 38           3449 	mov	dptr,#_vdd_cnt
   8C8A E0                 3450 	movx	a,@dptr
   8C8B FB                 3451 	mov	r3,a
   8C8C 74 02              3452 	mov	a,#0x02
   8C8E B5 03 00           3453 	cjne	a,ar3,00242$
   8C91                    3454 00242$:
   8C91 50 1A              3455 	jnc	00116$
   8C93 90 21 02           3456 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   8C96 E0                 3457 	movx	a,@dptr
   8C97 30 E6 13           3458 	jnb	acc.6,00116$
   8C9A                    3459 00109$:
                           3460 ;	../../shared/src/cal_top.c:591: vdd_cal_sel(vdd_cnt);
   8C9A 90 66 38           3461 	mov	dptr,#_vdd_cnt
   8C9D E0                 3462 	movx	a,@dptr
   8C9E F5 82              3463 	mov	dpl,a
   8CA0 C0 02              3464 	push	ar2
   8CA2 78 84              3465 	mov	r0,#_vdd_cal_sel
   8CA4 79 EC              3466 	mov	r1,#(_vdd_cal_sel >> 8)
   8CA6 7A 02              3467 	mov	r2,#(_vdd_cal_sel >> 16)
   8CA8 12 00 B3           3468 	lcall	__sdcc_banked_call
   8CAB D0 02              3469 	pop	ar2
   8CAD                    3470 00116$:
                           3471 ;	../../shared/src/cal_top.c:593: vdd_cnt++;
   8CAD 90 66 38           3472 	mov	dptr,#_vdd_cnt
   8CB0 E0                 3473 	movx	a,@dptr
   8CB1 24 01              3474 	add	a,#0x01
   8CB3 F0                 3475 	movx	@dptr,a
                           3476 ;	../../shared/src/cal_top.c:594: if(vdd_cnt>5) vdd_cnt = 0;
   8CB4 90 66 38           3477 	mov	dptr,#_vdd_cnt
   8CB7 E0                 3478 	movx	a,@dptr
   8CB8 FB                 3479 	mov	r3,a
   8CB9 74 05              3480 	mov	a,#0x05
   8CBB B5 03 00           3481 	cjne	a,ar3,00245$
   8CBE                    3482 00245$:
   8CBE 40 03              3483 	jc	00246$
   8CC0 02 8E C9           3484 	ljmp	00183$
   8CC3                    3485 00246$:
   8CC3 90 66 38           3486 	mov	dptr,#_vdd_cnt
   8CC6 E4                 3487 	clr	a
   8CC7 F0                 3488 	movx	@dptr,a
                           3489 ;	../../shared/src/cal_top.c:599: break;
   8CC8 02 8E C9           3490 	ljmp	00183$
                           3491 ;	../../shared/src/cal_top.c:600: case 2: if(cmx_ALIGN90_CAL_CONT_EN)  find_align90_lock(); break; //phase_lookup_tracking(1); break;
   8CCB                    3492 00123$:
   8CCB 90 E6 0E           3493 	mov	dptr,#(_CONTROL_CONFIG2 + 0x0002)
   8CCE E0                 3494 	movx	a,@dptr
   8CCF 20 E3 03           3495 	jb	acc.3,00247$
   8CD2 02 8E C9           3496 	ljmp	00183$
   8CD5                    3497 00247$:
   8CD5 C0 02              3498 	push	ar2
   8CD7 78 39              3499 	mov	r0,#_find_align90_lock
   8CD9 79 80              3500 	mov	r1,#(_find_align90_lock >> 8)
   8CDB 7A 01              3501 	mov	r2,#(_find_align90_lock >> 16)
   8CDD 12 00 B3           3502 	lcall	__sdcc_banked_call
   8CE0 D0 02              3503 	pop	ar2
   8CE2 02 8E C9           3504 	ljmp	00183$
                           3505 ;	../../shared/src/cal_top.c:601: case 3: if( cmx_RXDLL_CAL_CONT_EN ) dll_vdda_cal(DLL_PHASE_STEP);	break;
   8CE5                    3506 00126$:
   8CE5 90 E6 0E           3507 	mov	dptr,#(_CONTROL_CONFIG2 + 0x0002)
   8CE8 E0                 3508 	movx	a,@dptr
   8CE9 20 E1 03           3509 	jb	acc.1,00248$
   8CEC 02 8E C9           3510 	ljmp	00183$
   8CEF                    3511 00248$:
   8CEF 75 82 00           3512 	mov	dpl,#0x00
   8CF2 C0 02              3513 	push	ar2
   8CF4 78 EE              3514 	mov	r0,#_dll_vdda_cal
   8CF6 79 AA              3515 	mov	r1,#(_dll_vdda_cal >> 8)
   8CF8 7A 01              3516 	mov	r2,#(_dll_vdda_cal >> 16)
   8CFA 12 00 B3           3517 	lcall	__sdcc_banked_call
   8CFD D0 02              3518 	pop	ar2
   8CFF 02 8E C9           3519 	ljmp	00183$
                           3520 ;	../../shared/src/cal_top.c:602: case 4:	if( cmx_EOM_DLL_CAL_CONT_EN ) dll_eom_vdda_cal(DLL_PHASE_STEP); break;
   8D02                    3521 00129$:
   8D02 90 E6 0E           3522 	mov	dptr,#(_CONTROL_CONFIG2 + 0x0002)
   8D05 E0                 3523 	movx	a,@dptr
   8D06 20 E2 03           3524 	jb	acc.2,00249$
   8D09 02 8E C9           3525 	ljmp	00183$
   8D0C                    3526 00249$:
   8D0C 75 82 00           3527 	mov	dpl,#0x00
   8D0F C0 02              3528 	push	ar2
   8D11 78 B3              3529 	mov	r0,#_dll_eom_vdda_cal
   8D13 79 AB              3530 	mov	r1,#(_dll_eom_vdda_cal >> 8)
   8D15 7A 01              3531 	mov	r2,#(_dll_eom_vdda_cal >> 16)
   8D17 12 00 B3           3532 	lcall	__sdcc_banked_call
   8D1A D0 02              3533 	pop	ar2
   8D1C 02 8E C9           3534 	ljmp	00183$
                           3535 ;	../../shared/src/cal_top.c:603: case 5:	
   8D1F                    3536 00132$:
                           3537 ;	../../shared/src/cal_top.c:604: switch(dcc_cont) {
   8D1F 90 66 39           3538 	mov	dptr,#_dcc_cont
   8D22 E0                 3539 	movx	a,@dptr
   8D23 FB                 3540 	mov	r3,a
   8D24 74 04              3541 	mov	a,#0x04
   8D26 B5 03 00           3542 	cjne	a,ar3,00250$
   8D29                    3543 00250$:
   8D29 50 03              3544 	jnc	00251$
   8D2B 02 8D DB           3545 	ljmp	00149$
   8D2E                    3546 00251$:
   8D2E EB                 3547 	mov	a,r3
   8D2F 2B                 3548 	add	a,r3
   8D30 2B                 3549 	add	a,r3
   8D31 90 8D 35           3550 	mov	dptr,#00252$
   8D34 73                 3551 	jmp	@a+dptr
   8D35                    3552 00252$:
   8D35 02 8D 44           3553 	ljmp	00133$
   8D38 02 8D 54           3554 	ljmp	00134$
   8D3B 02 8D 64           3555 	ljmp	00135$
   8D3E 02 8D 73           3556 	ljmp	00136$
   8D41 02 8D A0           3557 	ljmp	00142$
                           3558 ;	../../shared/src/cal_top.c:605: case 0: rxdcc_dll_cal(); break;
   8D44                    3559 00133$:
   8D44 C0 02              3560 	push	ar2
   8D46 78 09              3561 	mov	r0,#_rxdcc_dll_cal
   8D48 79 9F              3562 	mov	r1,#(_rxdcc_dll_cal >> 8)
   8D4A 7A 02              3563 	mov	r2,#(_rxdcc_dll_cal >> 16)
   8D4C 12 00 B3           3564 	lcall	__sdcc_banked_call
   8D4F D0 02              3565 	pop	ar2
   8D51 02 8D DB           3566 	ljmp	00149$
                           3567 ;	../../shared/src/cal_top.c:606: case 1: rxdcc_data_cal(); break;
   8D54                    3568 00134$:
   8D54 C0 02              3569 	push	ar2
   8D56 78 5F              3570 	mov	r0,#_rxdcc_data_cal
   8D58 79 A2              3571 	mov	r1,#(_rxdcc_data_cal >> 8)
   8D5A 7A 02              3572 	mov	r2,#(_rxdcc_data_cal >> 16)
   8D5C 12 00 B3           3573 	lcall	__sdcc_banked_call
   8D5F D0 02              3574 	pop	ar2
   8D61 02 8D DB           3575 	ljmp	00149$
                           3576 ;	../../shared/src/cal_top.c:607: case 2: rxdcc_eom_cal(); break;
   8D64                    3577 00135$:
   8D64 C0 02              3578 	push	ar2
   8D66 78 28              3579 	mov	r0,#_rxdcc_eom_cal
   8D68 79 A6              3580 	mov	r1,#(_rxdcc_eom_cal >> 8)
   8D6A 7A 02              3581 	mov	r2,#(_rxdcc_eom_cal >> 16)
   8D6C 12 00 B3           3582 	lcall	__sdcc_banked_call
   8D6F D0 02              3583 	pop	ar2
                           3584 ;	../../shared/src/cal_top.c:608: case 3: if(reg_PIN_PU_TX_RD_LANE) {
   8D71 80 68              3585 	sjmp	00149$
   8D73                    3586 00136$:
   8D73 90 20 07           3587 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   8D76 E0                 3588 	movx	a,@dptr
   8D77 30 E4 61           3589 	jnb	acc.4,00149$
                           3590 ;	../../shared/src/cal_top.c:609: if(reg_TX_SPEED_DIV_LANE_2_0==0) txdcc_cal();
   8D7A 90 02 58           3591 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_150
   8D7D E0                 3592 	movx	a,@dptr
   8D7E 54 07              3593 	anl	a,#0x07
   8D80 70 0F              3594 	jnz	00138$
   8D82 C0 02              3595 	push	ar2
   8D84 78 E5              3596 	mov	r0,#_txdcc_cal
   8D86 79 97              3597 	mov	r1,#(_txdcc_cal >> 8)
   8D88 7A 02              3598 	mov	r2,#(_txdcc_cal >> 16)
   8D8A 12 00 B3           3599 	lcall	__sdcc_banked_call
   8D8D D0 02              3600 	pop	ar2
   8D8F 80 4A              3601 	sjmp	00149$
   8D91                    3602 00138$:
                           3603 ;	../../shared/src/cal_top.c:610: else txdcc_pdiv_cal();
   8D91 C0 02              3604 	push	ar2
   8D93 78 A5              3605 	mov	r0,#_txdcc_pdiv_cal
   8D95 79 9B              3606 	mov	r1,#(_txdcc_pdiv_cal >> 8)
   8D97 7A 02              3607 	mov	r2,#(_txdcc_pdiv_cal >> 16)
   8D99 12 00 B3           3608 	lcall	__sdcc_banked_call
   8D9C D0 02              3609 	pop	ar2
                           3610 ;	../../shared/src/cal_top.c:612: break;
                           3611 ;	../../shared/src/cal_top.c:613: case 4: if(mcuid==master_mcu && slave_phy_on==0 && cmx_PLLDCC_CAL_CONT_EN && reg_ANA_PLL_CLK_READY
   8D9E 80 3B              3612 	sjmp	00149$
   8DA0                    3613 00142$:
   8DA0 90 22 00           3614 	mov	dptr,#_MCU_CONTROL_LANE
   8DA3 E0                 3615 	movx	a,@dptr
   8DA4 FB                 3616 	mov	r3,a
   8DA5 90 E6 50           3617 	mov	dptr,#_MCU_CONFIG
   8DA8 E0                 3618 	movx	a,@dptr
   8DA9 FC                 3619 	mov	r4,a
   8DAA EB                 3620 	mov	a,r3
   8DAB B5 04 2D           3621 	cjne	a,ar4,00149$
   8DAE 90 66 1C           3622 	mov	dptr,#_slave_phy_on
   8DB1 E0                 3623 	movx	a,@dptr
   8DB2 FB                 3624 	mov	r3,a
   8DB3 70 26              3625 	jnz	00149$
   8DB5 90 E6 0E           3626 	mov	dptr,#(_CONTROL_CONFIG2 + 0x0002)
   8DB8 E0                 3627 	movx	a,@dptr
   8DB9 30 E4 1F           3628 	jnb	acc.4,00149$
   8DBC 90 A3 4F           3629 	mov	dptr,#(_PM_CMN_REG2 + 0x0003)
   8DBF E0                 3630 	movx	a,@dptr
   8DC0 30 E0 18           3631 	jnb	acc.0,00149$
                           3632 ;	../../shared/src/cal_top.c:615: && reg_LCPLLCLK_DIV2_SEL==1
   8DC3 90 83 3C           3633 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_207
   8DC6 E0                 3634 	movx	a,@dptr
   8DC7 03                 3635 	rr	a
   8DC8 54 01              3636 	anl	a,#0x01
   8DCA FB                 3637 	mov	r3,a
   8DCB BB 01 0D           3638 	cjne	r3,#0x01,00149$
                           3639 ;	../../shared/src/cal_top.c:619: plldcc_cal();
   8DCE C0 02              3640 	push	ar2
   8DD0 78 74              3641 	mov	r0,#_plldcc_cal
   8DD2 79 C9              3642 	mov	r1,#(_plldcc_cal >> 8)
   8DD4 7A 02              3643 	mov	r2,#(_plldcc_cal >> 16)
   8DD6 12 00 B3           3644 	lcall	__sdcc_banked_call
   8DD9 D0 02              3645 	pop	ar2
                           3646 ;	../../shared/src/cal_top.c:622: }
   8DDB                    3647 00149$:
                           3648 ;	../../shared/src/cal_top.c:623: dcc_cont++;
   8DDB 90 66 39           3649 	mov	dptr,#_dcc_cont
   8DDE E0                 3650 	movx	a,@dptr
   8DDF 24 01              3651 	add	a,#0x01
   8DE1 F0                 3652 	movx	@dptr,a
                           3653 ;	../../shared/src/cal_top.c:624: if(dcc_cont>4) dcc_cont = 0;	
   8DE2 90 66 39           3654 	mov	dptr,#_dcc_cont
   8DE5 E0                 3655 	movx	a,@dptr
   8DE6 FB                 3656 	mov	r3,a
   8DE7 74 04              3657 	mov	a,#0x04
   8DE9 B5 03 00           3658 	cjne	a,ar3,00262$
   8DEC                    3659 00262$:
   8DEC 40 03              3660 	jc	00263$
   8DEE 02 8E C9           3661 	ljmp	00183$
   8DF1                    3662 00263$:
   8DF1 90 66 39           3663 	mov	dptr,#_dcc_cont
   8DF4 E4                 3664 	clr	a
   8DF5 F0                 3665 	movx	@dptr,a
                           3666 ;	../../shared/src/cal_top.c:625: break;
   8DF6 02 8E C9           3667 	ljmp	00183$
                           3668 ;	../../shared/src/cal_top.c:626: case 6:	
   8DF9                    3669 00152$:
                           3670 ;	../../shared/src/cal_top.c:627: reg_MCU_DEBUG0_LANE_7_0 = timeout;
   8DF9 A2 03              3671 	mov	c,_timeout
   8DFB E4                 3672 	clr	a
   8DFC 33                 3673 	rlc	a
   8DFD FB                 3674 	mov	r3,a
   8DFE 90 22 B4           3675 	mov	dptr,#_MCU_DEBUG0_LANE
   8E01 EB                 3676 	mov	a,r3
   8E02 F0                 3677 	movx	@dptr,a
                           3678 ;	../../shared/src/cal_top.c:628: if( mcuid==master_mcu && slave_phy_on==0 && reg_ANA_PLL_CLK_READY) {
   8E03 90 22 00           3679 	mov	dptr,#_MCU_CONTROL_LANE
   8E06 E0                 3680 	movx	a,@dptr
   8E07 FB                 3681 	mov	r3,a
   8E08 90 E6 50           3682 	mov	dptr,#_MCU_CONFIG
   8E0B E0                 3683 	movx	a,@dptr
   8E0C FC                 3684 	mov	r4,a
   8E0D EB                 3685 	mov	a,r3
   8E0E B5 04 02           3686 	cjne	a,ar4,00264$
   8E11 80 03              3687 	sjmp	00265$
   8E13                    3688 00264$:
   8E13 02 8E C9           3689 	ljmp	00183$
   8E16                    3690 00265$:
   8E16 90 66 1C           3691 	mov	dptr,#_slave_phy_on
   8E19 E0                 3692 	movx	a,@dptr
   8E1A FB                 3693 	mov	r3,a
   8E1B 60 03              3694 	jz	00266$
   8E1D 02 8E C9           3695 	ljmp	00183$
   8E20                    3696 00266$:
   8E20 90 A3 4F           3697 	mov	dptr,#(_PM_CMN_REG2 + 0x0003)
   8E23 E0                 3698 	movx	a,@dptr
   8E24 20 E0 03           3699 	jb	acc.0,00267$
   8E27 02 8E C9           3700 	ljmp	00183$
   8E2A                    3701 00267$:
                           3702 ;	../../shared/src/cal_top.c:629: if( timeout == 0 ) break;
   8E2A 20 03 03           3703 	jb	_timeout,00268$
   8E2D 02 8E C9           3704 	ljmp	00183$
   8E30                    3705 00268$:
                           3706 ;	../../shared/src/cal_top.c:630: if( cmx_PLL_TEMP_CAL_CONT_EN) {
   8E30 90 E6 0D           3707 	mov	dptr,#(_CONTROL_CONFIG2 + 0x0001)
   8E33 E0                 3708 	movx	a,@dptr
   8E34 20 E6 03           3709 	jb	acc.6,00269$
   8E37 02 8E C9           3710 	ljmp	00183$
   8E3A                    3711 00269$:
                           3712 ;	../../shared/src/cal_top.c:631: pll_temp_cal();
   8E3A C0 02              3713 	push	ar2
   8E3C 78 D6              3714 	mov	r0,#_pll_temp_cal
   8E3E 79 CD              3715 	mov	r1,#(_pll_temp_cal >> 8)
   8E40 7A 02              3716 	mov	r2,#(_pll_temp_cal >> 16)
   8E42 12 00 B3           3717 	lcall	__sdcc_banked_call
   8E45 D0 02              3718 	pop	ar2
                           3719 ;	../../shared/src/cal_top.c:632: if(BYPASS_DELAY==0) {
   8E47 90 E6 06           3720 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0002)
   8E4A E0                 3721 	movx	a,@dptr
   8E4B 54 1C              3722 	anl	a,#0x1c
   8E4D 70 41              3723 	jnz	00165$
                           3724 ;	../../shared/src/cal_top.c:633: if((tempc_step_state&0xf0) == 0x10) { timeout_start((uint16_t)5); }
   8E4F 90 66 26           3725 	mov	dptr,#_tempc_step_state
   8E52 E0                 3726 	movx	a,@dptr
   8E53 FB                 3727 	mov	r3,a
   8E54 74 F0              3728 	mov	a,#0xF0
   8E56 5B                 3729 	anl	a,r3
   8E57 FC                 3730 	mov	r4,a
   8E58 BC 10 0C           3731 	cjne	r4,#0x10,00162$
   8E5B 75 8B FB           3732 	mov	_TMR1,#0xFB
   8E5E 75 8D FF           3733 	mov	(_TMR1 >> 8),#0xFF
   8E61 D2 8E              3734 	setb	_TR1
   8E63 C2 03              3735 	clr	_timeout
   8E65 80 62              3736 	sjmp	00183$
   8E67                    3737 00162$:
                           3738 ;	../../shared/src/cal_top.c:634: else if((tempc_step_state&0xf0) == 0x20) {timeout_start((uint16_t)40); }
   8E67 74 F0              3739 	mov	a,#0xF0
   8E69 5B                 3740 	anl	a,r3
   8E6A FC                 3741 	mov	r4,a
   8E6B BC 20 0C           3742 	cjne	r4,#0x20,00159$
   8E6E 75 8B D8           3743 	mov	_TMR1,#0xD8
   8E71 75 8D FF           3744 	mov	(_TMR1 >> 8),#0xFF
   8E74 D2 8E              3745 	setb	_TR1
   8E76 C2 03              3746 	clr	_timeout
   8E78 80 4F              3747 	sjmp	00183$
   8E7A                    3748 00159$:
                           3749 ;	../../shared/src/cal_top.c:635: else if((tempc_step_state&0xf0) == 0x30) { timeout_start((uint16_t)100); }
   8E7A 53 03 F0           3750 	anl	ar3,#0xF0
   8E7D BB 30 0C           3751 	cjne	r3,#0x30,00156$
   8E80 75 8B 9C           3752 	mov	_TMR1,#0x9C
   8E83 75 8D FF           3753 	mov	(_TMR1 >> 8),#0xFF
   8E86 D2 8E              3754 	setb	_TR1
   8E88 C2 03              3755 	clr	_timeout
   8E8A 80 3D              3756 	sjmp	00183$
   8E8C                    3757 00156$:
                           3758 ;	../../shared/src/cal_top.c:636: else timeout = 1;
   8E8C D2 03              3759 	setb	_timeout
   8E8E 80 39              3760 	sjmp	00183$
   8E90                    3761 00165$:
                           3762 ;	../../shared/src/cal_top.c:639: timeout = 1;
   8E90 D2 03              3763 	setb	_timeout
                           3764 ;	../../shared/src/cal_top.c:643: break;
                           3765 ;	../../shared/src/cal_top.c:644: case 7:	
   8E92 80 35              3766 	sjmp	00183$
   8E94                    3767 00173$:
                           3768 ;	../../shared/src/cal_top.c:645: if(mcuid==master_mcu && slave_phy_on==0  && reg_ANA_PLL_LOCK_RD) {
   8E94 90 22 00           3769 	mov	dptr,#_MCU_CONTROL_LANE
   8E97 E0                 3770 	movx	a,@dptr
   8E98 FB                 3771 	mov	r3,a
   8E99 90 E6 50           3772 	mov	dptr,#_MCU_CONFIG
   8E9C E0                 3773 	movx	a,@dptr
   8E9D FC                 3774 	mov	r4,a
   8E9E EB                 3775 	mov	a,r3
   8E9F B5 04 27           3776 	cjne	a,ar4,00183$
   8EA2 90 66 1C           3777 	mov	dptr,#_slave_phy_on
   8EA5 E0                 3778 	movx	a,@dptr
   8EA6 FB                 3779 	mov	r3,a
   8EA7 70 20              3780 	jnz	00183$
   8EA9 90 A3 19           3781 	mov	dptr,#(_PM_CMN_REG1 + 0x0001)
   8EAC E0                 3782 	movx	a,@dptr
   8EAD 30 E6 19           3783 	jnb	acc.6,00183$
                           3784 ;	../../shared/src/cal_top.c:648: if(cmx_PLLAMP_CAL_CONT_EN==1) pll_amp_cal_cont();
   8EB0 90 E6 0E           3785 	mov	dptr,#(_CONTROL_CONFIG2 + 0x0002)
   8EB3 E0                 3786 	movx	a,@dptr
   8EB4 C4                 3787 	swap	a
   8EB5 03                 3788 	rr	a
   8EB6 54 01              3789 	anl	a,#0x01
   8EB8 FB                 3790 	mov	r3,a
   8EB9 BB 01 0D           3791 	cjne	r3,#0x01,00183$
   8EBC C0 02              3792 	push	ar2
   8EBE 78 CA              3793 	mov	r0,#_pll_amp_cal_cont
   8EC0 79 C6              3794 	mov	r1,#(_pll_amp_cal_cont >> 8)
   8EC2 7A 02              3795 	mov	r2,#(_pll_amp_cal_cont >> 16)
   8EC4 12 00 B3           3796 	lcall	__sdcc_banked_call
   8EC7 D0 02              3797 	pop	ar2
                           3798 ;	../../shared/src/cal_top.c:651: }
   8EC9                    3799 00183$:
                           3800 ;	../../shared/src/cal_top.c:652: } while( PHY_NS==ST_INIT &&  cont_cal_inx++<8);
   8EC9 90 22 31           3801 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   8ECC E0                 3802 	movx	a,@dptr
   8ECD 70 0B              3803 	jnz	00184$
   8ECF 8A 03              3804 	mov	ar3,r2
   8ED1 0A                 3805 	inc	r2
   8ED2 BB 08 00           3806 	cjne	r3,#0x08,00284$
   8ED5                    3807 00284$:
   8ED5 50 03              3808 	jnc	00285$
   8ED7 02 8B D6           3809 	ljmp	00182$
   8EDA                    3810 00285$:
   8EDA                    3811 00184$:
                           3812 ;	../../shared/src/cal_top.c:660: cont_cal_on = 0;
   8EDA C2 16              3813 	clr	_cont_cal_on
   8EDC                    3814 00185$:
   8EDC 02 00 C5           3815 	ljmp	__sdcc_banked_ret
                           3816 ;------------------------------------------------------------
                           3817 ;Allocation info for local variables in function 'phy_check_lane'
                           3818 ;------------------------------------------------------------
                           3819 ;val                       Allocated to registers r2 
                           3820 ;------------------------------------------------------------
                           3821 ;	../../shared/src/cal_top.c:708: void phy_check_lane(uint8_t val) BANKING_CTRL {
                           3822 ;	-----------------------------------------
                           3823 ;	 function phy_check_lane
                           3824 ;	-----------------------------------------
   8EDF                    3825 _phy_check_lane:
   8EDF AA 82              3826 	mov	r2,dpl
                           3827 ;	../../shared/src/cal_top.c:709: PHY_CHECK_LANE = val;
   8EE1 90 22 32           3828 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0002)
   8EE4 EA                 3829 	mov	a,r2
   8EE5 F0                 3830 	movx	@dptr,a
                           3831 ;	../../shared/src/cal_top.c:710: if (mcuid == MCU_LANE0)
   8EE6 90 22 00           3832 	mov	dptr,#_MCU_CONTROL_LANE
   8EE9 E0                 3833 	movx	a,@dptr
   8EEA 70 07              3834 	jnz	00102$
                           3835 ;	../../shared/src/cal_top.c:711: PHY_CHECK_LANE0 = val;
   8EEC 90 E6 B6           3836 	mov	dptr,#(_MCU_INFO_4 + 0x0002)
   8EEF EA                 3837 	mov	a,r2
   8EF0 F0                 3838 	movx	@dptr,a
   8EF1 80 05              3839 	sjmp	00104$
   8EF3                    3840 00102$:
                           3841 ;	../../shared/src/cal_top.c:713: PHY_CHECK_LANE1 = val;
   8EF3 90 E6 BA           3842 	mov	dptr,#(_MCU_INFO_5 + 0x0002)
   8EF6 EA                 3843 	mov	a,r2
   8EF7 F0                 3844 	movx	@dptr,a
   8EF8                    3845 00104$:
   8EF8 02 00 C5           3846 	ljmp	__sdcc_banked_ret
                           3847 ;------------------------------------------------------------
                           3848 ;Allocation info for local variables in function 'mcu_align_0'
                           3849 ;------------------------------------------------------------
                           3850 ;val                       Allocated to registers r2 
                           3851 ;------------------------------------------------------------
                           3852 ;	../../shared/src/cal_top.c:716: void mcu_align_0(uint8_t val) BANKING_CTRL {
                           3853 ;	-----------------------------------------
                           3854 ;	 function mcu_align_0
                           3855 ;	-----------------------------------------
   8EFB                    3856 _mcu_align_0:
                           3857 ;	../../shared/src/cal_top.c:722: phy_check_lane(val);
   8EFB AA 82              3858 	mov  r2,dpl
   8EFD C0 02              3859 	push	ar2
   8EFF 78 DF              3860 	mov	r0,#_phy_check_lane
   8F01 79 8E              3861 	mov	r1,#(_phy_check_lane >> 8)
   8F03 7A 01              3862 	mov	r2,#(_phy_check_lane >> 16)
   8F05 12 00 B3           3863 	lcall	__sdcc_banked_call
   8F08 D0 02              3864 	pop	ar2
                           3865 ;	../../shared/src/cal_top.c:723: while ((PHY_CHECK_LANE0_READ != val) || (PHY_CHECK_LANE1_READ != val)) {
   8F0A                    3866 00105$:
   8F0A 90 E6 B6           3867 	mov	dptr,#(_MCU_INFO_4 + 0x0002)
   8F0D E0                 3868 	movx	a,@dptr
   8F0E FB                 3869 	mov	r3,a
   8F0F B5 02 0A           3870 	cjne	a,ar2,00106$
   8F12 90 E6 BA           3871 	mov	dptr,#(_MCU_INFO_5 + 0x0002)
   8F15 E0                 3872 	movx	a,@dptr
   8F16 FB                 3873 	mov	r3,a
   8F17 B5 02 02           3874 	cjne	a,ar2,00116$
   8F1A 80 1B              3875 	sjmp	00108$
   8F1C                    3876 00116$:
   8F1C                    3877 00106$:
                           3878 ;	../../shared/src/cal_top.c:724: if(SYNC_STATUS_LANE0_EN_READ==0 || SYNC_STATUS_LANE1_EN_READ==0) break;
   8F1C 90 E6 BE           3879 	mov	dptr,#(_MCU_INFO_12 + 0x0002)
   8F1F E0                 3880 	movx	a,@dptr
   8F20 60 15              3881 	jz	00108$
   8F22 90 E6 C2           3882 	mov	dptr,#(_MCU_INFO_13 + 0x0002)
   8F25 E0                 3883 	movx	a,@dptr
   8F26 60 0F              3884 	jz	00108$
                           3885 ;	../../shared/src/cal_top.c:725: short_delay();
   8F28 C0 02              3886 	push	ar2
   8F2A 78 05              3887 	mov	r0,#_short_delay
   8F2C 79 C0              3888 	mov	r1,#(_short_delay >> 8)
   8F2E 7A 02              3889 	mov	r2,#(_short_delay >> 16)
   8F30 12 00 B3           3890 	lcall	__sdcc_banked_call
   8F33 D0 02              3891 	pop	ar2
   8F35 80 D3              3892 	sjmp	00105$
   8F37                    3893 00108$:
   8F37 02 00 C5           3894 	ljmp	__sdcc_banked_ret
                           3895 ;------------------------------------------------------------
                           3896 ;Allocation info for local variables in function 'all_cal_ext'
                           3897 ;------------------------------------------------------------
                           3898 ;lc_pll_rate               Allocated to registers b0 
                           3899 ;ring_pll_rate             Allocated to stack - offset 1
                           3900 ;------------------------------------------------------------
                           3901 ;	../../shared/src/cal_top.c:744: void all_cal_ext(void) BANKING_CTRL {
                           3902 ;	-----------------------------------------
                           3903 ;	 function all_cal_ext
                           3904 ;	-----------------------------------------
   8F3A                    3905 _all_cal_ext:
   8F3A C0 18              3906 	push	_bp
   8F3C 85 81 18           3907 	mov	_bp,sp
   8F3F 05 81              3908 	inc	sp
                           3909 ;	../../shared/src/cal_top.c:747: loadspeedtbl_gen();
   8F41 12 40 7E           3910 	lcall	_loadspeedtbl_gen
                           3911 ;	../../shared/src/cal_top.c:748: if(phy_mode==SERDES) {
   8F44 90 A3 16           3912 	mov	dptr,#(_SYSTEM + 0x0002)
   8F47 E0                 3913 	movx	a,@dptr
   8F48 54 07              3914 	anl	a,#0x07
   8F4A FA                 3915 	mov	r2,a
   8F4B BA 04 11           3916 	cjne	r2,#0x04,00104$
                           3917 ;	../../shared/src/cal_top.c:749: if(gen_pll_rate==pre_gen_pll_rate) return;
   8F4E 90 67 8C           3918 	mov	dptr,#_gen_pll_rate
   8F51 E0                 3919 	movx	a,@dptr
   8F52 FA                 3920 	mov	r2,a
   8F53 90 67 8D           3921 	mov	dptr,#_pre_gen_pll_rate
   8F56 E0                 3922 	movx	a,@dptr
   8F57 FB                 3923 	mov	r3,a
   8F58 EA                 3924 	mov	a,r2
   8F59 B5 03 03           3925 	cjne	a,ar3,00104$
   8F5C 02 90 E8           3926 	ljmp	00124$
   8F5F                    3927 00104$:
                           3928 ;	../../shared/src/cal_top.c:752: if( mcuid==master_mcu ) {
   8F5F 90 22 00           3929 	mov	dptr,#_MCU_CONTROL_LANE
   8F62 E0                 3930 	movx	a,@dptr
   8F63 FA                 3931 	mov	r2,a
   8F64 90 E6 50           3932 	mov	dptr,#_MCU_CONFIG
   8F67 E0                 3933 	movx	a,@dptr
   8F68 FB                 3934 	mov	r3,a
   8F69 EA                 3935 	mov	a,r2
   8F6A B5 03 02           3936 	cjne	a,ar3,00140$
   8F6D 80 03              3937 	sjmp	00141$
   8F6F                    3938 00140$:
   8F6F 02 8F F8           3939 	ljmp	00115$
   8F72                    3940 00141$:
                           3941 ;	../../shared/src/cal_top.c:754: pll_clk_ready_0();
   8F72 78 77              3942 	mov	r0,#_pll_clk_ready_0
   8F74 79 D4              3943 	mov	r1,#(_pll_clk_ready_0 >> 8)
   8F76 7A 02              3944 	mov	r2,#(_pll_clk_ready_0 >> 16)
   8F78 12 00 B3           3945 	lcall	__sdcc_banked_call
                           3946 ;	../../shared/src/cal_top.c:757: reg_LCVCO_DAC_LSB_4_0 = 0x10;
   8F7B 90 82 B4           3947 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_173
   8F7E E0                 3948 	movx	a,@dptr
   8F7F 54 07              3949 	anl	a,#0x07
   8F81 44 80              3950 	orl	a,#0x80
   8F83 F0                 3951 	movx	@dptr,a
                           3952 ;	../../shared/src/cal_top.c:758: reg_LCVCO_DAC_MSB_2_0 = 0x02;
   8F84 90 82 B4           3953 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_173
   8F87 E0                 3954 	movx	a,@dptr
   8F88 54 F8              3955 	anl	a,#0xf8
   8F8A 44 02              3956 	orl	a,#0x02
   8F8C F0                 3957 	movx	@dptr,a
                           3958 ;	../../shared/src/cal_top.c:760: reg_LCCAP_MSB_3_0 = 0;
   8F8D 90 82 C8           3959 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_178
   8F90 E0                 3960 	movx	a,@dptr
   8F91 54 0F              3961 	anl	a,#0x0f
   8F93 F0                 3962 	movx	@dptr,a
                           3963 ;	../../shared/src/cal_top.c:770: if( phy_mode==SERDES ) {
   8F94 90 A3 16           3964 	mov	dptr,#(_SYSTEM + 0x0002)
   8F97 E0                 3965 	movx	a,@dptr
   8F98 54 07              3966 	anl	a,#0x07
   8F9A FA                 3967 	mov	r2,a
   8F9B BA 04 06           3968 	cjne	r2,#0x04,00112$
                           3969 ;	../../shared/src/cal_top.c:771: lc_pll_rate = 0; ring_pll_rate = 0;
   8F9E C2 28              3970 	clr	b0
   8FA0 C2 29              3971 	clr	b1
   8FA2 80 2B              3972 	sjmp	00113$
   8FA4                    3973 00112$:
                           3974 ;	../../shared/src/cal_top.c:774: if( lc_pll_used ) {
   8FA4 30 11 1D           3975 	jnb	_lc_pll_used,00109$
                           3976 ;	../../shared/src/cal_top.c:775: if(use_ring_pll) { lc_pll_rate = !tx_pll_rate; ring_pll_rate = tx_pll_rate; }
   8FA7 30 10 0D           3977 	jnb	_use_ring_pll,00106$
   8FAA A2 0F              3978 	mov	c,_tx_pll_rate
   8FAC B3                 3979 	cpl	c
   8FAD 92 2A              3980 	mov  b2,c
   8FAF 92 28              3981 	mov	b0,c
   8FB1 A2 0F              3982 	mov	c,_tx_pll_rate
   8FB3 92 29              3983 	mov	b1,c
   8FB5 80 18              3984 	sjmp	00113$
   8FB7                    3985 00106$:
                           3986 ;	../../shared/src/cal_top.c:776: else {	lc_pll_rate = tx_pll_rate; ring_pll_rate = !tx_pll_rate; }
   8FB7 A2 0F              3987 	mov	c,_tx_pll_rate
   8FB9 92 28              3988 	mov	b0,c
   8FBB A2 0F              3989 	mov	c,_tx_pll_rate
   8FBD B3                 3990 	cpl	c
   8FBE 92 2A              3991 	mov  b2,c
   8FC0 92 29              3992 	mov	b1,c
   8FC2 80 0B              3993 	sjmp	00113$
   8FC4                    3994 00109$:
                           3995 ;	../../shared/src/cal_top.c:778: else {	lc_pll_rate = !tx_pll_rate; ring_pll_rate = tx_pll_rate; }
   8FC4 A2 0F              3996 	mov	c,_tx_pll_rate
   8FC6 B3                 3997 	cpl	c
   8FC7 92 2A              3998 	mov  b2,c
   8FC9 92 28              3999 	mov	b0,c
   8FCB A2 0F              4000 	mov	c,_tx_pll_rate
   8FCD 92 29              4001 	mov	b1,c
   8FCF                    4002 00113$:
                           4003 ;	../../shared/src/cal_top.c:781: PLL_RATE_SEL = tx_pll_rate;
   8FCF A2 0F              4004 	mov	c,_tx_pll_rate
   8FD1 E4                 4005 	clr	a
   8FD2 33                 4006 	rlc	a
   8FD3 90 E6 1E           4007 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0002)
   8FD6 F0                 4008 	movx	@dptr,a
                           4009 ;	../../shared/src/cal_top.c:782: loadspeedtbl_pll(lc_pll_rate);
   8FD7 A2 28              4010 	mov	c,b0
   8FD9 E4                 4011 	clr	a
   8FDA 33                 4012 	rlc	a
   8FDB F5 82              4013 	mov	dpl,a
   8FDD C0 25              4014 	push	bits
   8FDF 12 37 D4           4015 	lcall	_loadspeedtbl_pll
   8FE2 D0 25              4016 	pop	bits
                           4017 ;	../../shared/src/cal_top.c:784: reg_RESET_ANA = 0;
   8FE4 90 A3 19           4018 	mov	dptr,#(_PM_CMN_REG1 + 0x0001)
   8FE7 E0                 4019 	movx	a,@dptr
   8FE8 54 EF              4020 	anl	a,#0xef
   8FEA F0                 4021 	movx	@dptr,a
                           4022 ;	../../shared/src/cal_top.c:788: pll_clk_ready_1();
   8FEB C0 25              4023 	push	bits
   8FED 78 47              4024 	mov	r0,#_pll_clk_ready_1
   8FEF 79 D4              4025 	mov	r1,#(_pll_clk_ready_1 >> 8)
   8FF1 7A 02              4026 	mov	r2,#(_pll_clk_ready_1 >> 16)
   8FF3 12 00 B3           4027 	lcall	__sdcc_banked_call
   8FF6 D0 25              4028 	pop	bits
   8FF8                    4029 00115$:
                           4030 ;	../../shared/src/cal_top.c:806: reg_MCU_DEBUG0_LANE_7_0 = 0x32;
   8FF8 90 22 B4           4031 	mov	dptr,#_MCU_DEBUG0_LANE
   8FFB 74 32              4032 	mov	a,#0x32
   8FFD F0                 4033 	movx	@dptr,a
                           4034 ;	../../shared/src/cal_top.c:807: reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
   8FFE 90 66 15           4035 	mov	dptr,#_gen_tx
   9001 E0                 4036 	movx	a,@dptr
   9002 90 22 B5           4037 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0001)
   9005 F0                 4038 	movx	@dptr,a
                           4039 ;	../../shared/src/cal_top.c:808: reg_MCU_DEBUG2_LANE_7_0 = gen_rx;
   9006 90 66 16           4040 	mov	dptr,#_gen_rx
   9009 E0                 4041 	movx	a,@dptr
   900A 90 22 B6           4042 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0002)
   900D F0                 4043 	movx	@dptr,a
                           4044 ;	../../shared/src/cal_top.c:809: reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
   900E 90 67 8C           4045 	mov	dptr,#_gen_pll_rate
   9011 E0                 4046 	movx	a,@dptr
   9012 90 22 B7           4047 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0003)
   9015 F0                 4048 	movx	@dptr,a
                           4049 ;	../../shared/src/cal_top.c:810: reg_MCU_DEBUG4_LANE_7_0 = max_gen;
   9016 90 63 00           4050 	mov	dptr,#_max_gen
   9019 E0                 4051 	movx	a,@dptr
   901A 90 22 B8           4052 	mov	dptr,#_MCU_DEBUG1_LANE
   901D F0                 4053 	movx	@dptr,a
                           4054 ;	../../shared/src/cal_top.c:811: reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
   901E A2 12              4055 	mov	c,_ring_pll_enabled
   9020 E4                 4056 	clr	a
   9021 33                 4057 	rlc	a
   9022 90 22 B9           4058 	mov	dptr,#(_MCU_DEBUG1_LANE + 0x0001)
   9025 F0                 4059 	movx	@dptr,a
                           4060 ;	../../shared/src/cal_top.c:812: reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
   9026 A2 10              4061 	mov	c,_use_ring_pll
   9028 E4                 4062 	clr	a
   9029 33                 4063 	rlc	a
   902A 90 22 BA           4064 	mov	dptr,#(_MCU_DEBUG1_LANE + 0x0002)
   902D F0                 4065 	movx	@dptr,a
                           4066 ;	../../shared/src/cal_top.c:813: reg_MCU_DEBUG7_LANE_7_0 = tx_pll_rate;
   902E A2 0F              4067 	mov	c,_tx_pll_rate
   9030 E4                 4068 	clr	a
   9031 33                 4069 	rlc	a
   9032 90 22 BB           4070 	mov	dptr,#(_MCU_DEBUG1_LANE + 0x0003)
   9035 F0                 4071 	movx	@dptr,a
                           4072 ;	../../shared/src/cal_top.c:814: reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;
   9036 90 66 24           4073 	mov	dptr,#_ring_lane_sel
   9039 E0                 4074 	movx	a,@dptr
   903A FA                 4075 	mov	r2,a
   903B 90 22 BC           4076 	mov	dptr,#_MCU_DEBUG2_LANE
   903E F0                 4077 	movx	@dptr,a
                           4078 ;	../../shared/src/cal_top.c:816: reg_RING_PLL_DISABLE = !ring_pll_enabled;
   903F A2 12              4079 	mov	c,_ring_pll_enabled
   9041 B3                 4080 	cpl	c
   9042 92 28              4081 	mov  b0,c
   9044 E4                 4082 	clr	a
   9045 33                 4083 	rlc	a
   9046 FB                 4084 	mov	r3,a
   9047 90 A3 24           4085 	mov	dptr,#_INPUT_CMN_PIN_REG2
   904A 13                 4086 	rrc	a
   904B E0                 4087 	movx	a,@dptr
   904C 92 E0              4088 	mov	acc.0,c
   904E F0                 4089 	movx	@dptr,a
                           4090 ;	../../shared/src/cal_top.c:817: if( ring_lane_sel )
   904F EA                 4091 	mov	a,r2
   9050 70 03              4092 	jnz	00146$
   9052 02 90 D8           4093 	ljmp	00121$
   9055                    4094 00146$:
                           4095 ;	../../shared/src/cal_top.c:819: if( phy_mode==SERDES ) { ring_pll_rate = 0; }
   9055 90 A3 16           4096 	mov	dptr,#(_SYSTEM + 0x0002)
   9058 E0                 4097 	movx	a,@dptr
   9059 54 07              4098 	anl	a,#0x07
   905B FA                 4099 	mov	r2,a
   905C BA 04 02           4100 	cjne	r2,#0x04,00117$
   905F C2 29              4101 	clr	b1
   9061                    4102 00117$:
                           4103 ;	../../shared/src/cal_top.c:821: if(ring_pll_enabled) {
   9061 30 12 74           4104 	jnb	_ring_pll_enabled,00121$
                           4105 ;	../../shared/src/cal_top.c:822: pll_clk_ready_ring_0();
   9064 C0 25              4106 	push	bits
   9066 78 8F              4107 	mov	r0,#_pll_clk_ready_ring_0
   9068 79 D4              4108 	mov	r1,#(_pll_clk_ready_ring_0 >> 8)
   906A 7A 02              4109 	mov	r2,#(_pll_clk_ready_ring_0 >> 16)
   906C 12 00 B3           4110 	lcall	__sdcc_banked_call
   906F D0 25              4111 	pop	bits
                           4112 ;	../../shared/src/cal_top.c:823: loadspeedtbl_ringpll(ring_pll_rate);
   9071 A2 29              4113 	mov	c,b1
   9073 E4                 4114 	clr	a
   9074 33                 4115 	rlc	a
   9075 F5 82              4116 	mov	dpl,a
   9077 12 3B A7           4117 	lcall	_loadspeedtbl_ringpll
                           4118 ;	../../shared/src/cal_top.c:838: reg_PLL_SPEED_RING_4_0 = 0x10;
   907A 90 83 00           4119 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_192
   907D E0                 4120 	movx	a,@dptr
   907E 54 07              4121 	anl	a,#0x07
   9080 44 80              4122 	orl	a,#0x80
   9082 F0                 4123 	movx	@dptr,a
                           4124 ;	../../shared/src/cal_top.c:839: reg_PLL_SLLP_DAC_COARSE_RING_3_0 = 0x8;
   9083 90 83 04           4125 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   9086 E0                 4126 	movx	a,@dptr
   9087 54 F0              4127 	anl	a,#0xf0
   9089 44 08              4128 	orl	a,#0x08
   908B F0                 4129 	movx	@dptr,a
                           4130 ;	../../shared/src/cal_top.c:840: reg_PLL_SLLP_DAC_FINE_RING_10_8 = 0x3;
   908C 90 83 08           4131 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_194
   908F E0                 4132 	movx	a,@dptr
   9090 54 1F              4133 	anl	a,#0x1f
   9092 44 60              4134 	orl	a,#0x60
   9094 F0                 4135 	movx	@dptr,a
                           4136 ;	../../shared/src/cal_top.c:841: reg_PLL_SLLP_DAC_FINE_RING_7_0 = 0x84;
   9095 90 83 0C           4137 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_195
   9098 74 84              4138 	mov	a,#0x84
   909A F0                 4139 	movx	@dptr,a
                           4140 ;	../../shared/src/cal_top.c:842: reg_PLL_SLLP_DAC_RANGE_SHIFT_RING_1_0 = 0;
   909B 90 83 04           4141 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   909E E0                 4142 	movx	a,@dptr
   909F 54 CF              4143 	anl	a,#0xcf
   90A1 F0                 4144 	movx	@dptr,a
                           4145 ;	../../shared/src/cal_top.c:844: reg_ANA_PU_PLL_RING = 1;
   90A2 90 A3 24           4146 	mov	dptr,#_INPUT_CMN_PIN_REG2
   90A5 E0                 4147 	movx	a,@dptr
   90A6 44 20              4148 	orl	a,#0x20
   90A8 F0                 4149 	movx	@dptr,a
                           4150 ;	../../shared/src/cal_top.c:845: delay01(5);
   90A9 90 00 05           4151 	mov	dptr,#0x0005
   90AC 78 16              4152 	mov	r0,#_delay01
   90AE 79 BC              4153 	mov	r1,#(_delay01 >> 8)
   90B0 7A 02              4154 	mov	r2,#(_delay01 >> 16)
   90B2 12 00 B3           4155 	lcall	__sdcc_banked_call
                           4156 ;	../../shared/src/cal_top.c:846: reg_ANA_PU_PLL_DLY_RING = 1;
   90B5 90 A3 4D           4157 	mov	dptr,#(_PM_CMN_REG2 + 0x0001)
   90B8 E0                 4158 	movx	a,@dptr
   90B9 44 04              4159 	orl	a,#0x04
   90BB F0                 4160 	movx	@dptr,a
                           4161 ;	../../shared/src/cal_top.c:847: delay01(5);
   90BC 90 00 05           4162 	mov	dptr,#0x0005
   90BF 78 16              4163 	mov	r0,#_delay01
   90C1 79 BC              4164 	mov	r1,#(_delay01 >> 8)
   90C3 7A 02              4165 	mov	r2,#(_delay01 >> 16)
   90C5 12 00 B3           4166 	lcall	__sdcc_banked_call
                           4167 ;	../../shared/src/cal_top.c:848: reg_RESET_ANA_RING = 0;
   90C8 90 A3 33           4168 	mov	dptr,#(_PLLCAL_REG1 + 0x0003)
   90CB E0                 4169 	movx	a,@dptr
   90CC 54 F7              4170 	anl	a,#0xf7
   90CE F0                 4171 	movx	@dptr,a
                           4172 ;	../../shared/src/cal_top.c:853: pll_clk_ready_ring_1();
   90CF 78 A7              4173 	mov	r0,#_pll_clk_ready_ring_1
   90D1 79 D4              4174 	mov	r1,#(_pll_clk_ready_ring_1 >> 8)
   90D3 7A 02              4175 	mov	r2,#(_pll_clk_ready_ring_1 >> 16)
   90D5 12 00 B3           4176 	lcall	__sdcc_banked_call
   90D8                    4177 00121$:
                           4178 ;	../../shared/src/cal_top.c:858: if(serdes_ring_lane_en==0)
   90D8 90 66 23           4179 	mov	dptr,#_serdes_ring_lane_en
   90DB E0                 4180 	movx	a,@dptr
   90DC FA                 4181 	mov	r2,a
   90DD 70 09              4182 	jnz	00124$
                           4183 ;	../../shared/src/cal_top.c:859: check_pll_clk_ready();
   90DF 78 D7              4184 	mov	r0,#_check_pll_clk_ready
   90E1 79 D4              4185 	mov	r1,#(_check_pll_clk_ready >> 8)
   90E3 7A 02              4186 	mov	r2,#(_check_pll_clk_ready >> 16)
   90E5 12 00 B3           4187 	lcall	__sdcc_banked_call
   90E8                    4188 00124$:
   90E8 85 18 81           4189 	mov	sp,_bp
   90EB D0 18              4190 	pop	_bp
   90ED 02 00 C5           4191 	ljmp	__sdcc_banked_ret
                           4192 ;------------------------------------------------------------
                           4193 ;Allocation info for local variables in function 'clear_normal_mode_cal_en'
                           4194 ;------------------------------------------------------------
                           4195 ;------------------------------------------------------------
                           4196 ;	../../shared/src/cal_top.c:883: void clear_normal_mode_cal_en(void) BANKING_CTRL {
                           4197 ;	-----------------------------------------
                           4198 ;	 function clear_normal_mode_cal_en
                           4199 ;	-----------------------------------------
   90F0                    4200 _clear_normal_mode_cal_en:
                           4201 ;	../../shared/src/cal_top.c:894: TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.VAL = 0x00040303;
   90F0 90 26 64           4202 	mov	dptr,#_TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE
   90F3 74 03              4203 	mov	a,#0x03
   90F5 F0                 4204 	movx	@dptr,a
   90F6 A3                 4205 	inc	dptr
   90F7 F0                 4206 	movx	@dptr,a
   90F8 A3                 4207 	inc	dptr
   90F9 74 04              4208 	mov	a,#0x04
   90FB F0                 4209 	movx	@dptr,a
   90FC A3                 4210 	inc	dptr
                           4211 ;	../../shared/src/cal_top.c:895: TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.VAL = 0;
   90FD E4                 4212 	clr	a
   90FE F0                 4213 	movx	@dptr,a
   90FF 90 26 64           4214 	mov	dptr,#_TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE
   9102 F0                 4215 	movx	@dptr,a
   9103 A3                 4216 	inc	dptr
   9104 F0                 4217 	movx	@dptr,a
   9105 A3                 4218 	inc	dptr
   9106 F0                 4219 	movx	@dptr,a
   9107 A3                 4220 	inc	dptr
   9108 F0                 4221 	movx	@dptr,a
                           4222 ;	../../shared/src/cal_top.c:896: RX_LANE_INTERRUPT_REG1.BT.B3 = 0x60;
                           4223 ;	../../shared/src/cal_top.c:897: RX_LANE_INTERRUPT_REG1.BT.B3 = 0;
   9109 90 21 5B           4224 	mov	dptr,#(_RX_LANE_INTERRUPT_REG1 + 0x0003)
   910C 74 60              4225 	mov	a,#0x60
   910E F0                 4226 	movx	@dptr,a
   910F E4                 4227 	clr	a
   9110 F0                 4228 	movx	@dptr,a
                           4229 ;	../../shared/src/cal_top.c:899: if(reg_PIN_PLL_READY_RX_LANE==0 || reg_PIN_PLL_READY_TX_LANE==0) {
   9111 90 21 02           4230 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   9114 E0                 4231 	movx	a,@dptr
   9115 30 E6 07           4232 	jnb	acc.6,00101$
   9118 90 20 02           4233 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   911B E0                 4234 	movx	a,@dptr
   911C 20 E2 26           4235 	jb	acc.2,00102$
   911F                    4236 00101$:
                           4237 ;	../../shared/src/cal_top.c:908: TX_TRAIN_CTRL_LANE.VAL &= 0xa01f0002;
   911F 90 26 78           4238 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   9122 E0                 4239 	movx	a,@dptr
   9123 FA                 4240 	mov	r2,a
   9124 A3                 4241 	inc	dptr
   9125 E0                 4242 	movx	a,@dptr
   9126 A3                 4243 	inc	dptr
   9127 E0                 4244 	movx	a,@dptr
   9128 FC                 4245 	mov	r4,a
   9129 A3                 4246 	inc	dptr
   912A E0                 4247 	movx	a,@dptr
   912B FD                 4248 	mov	r5,a
   912C 53 02 02           4249 	anl	ar2,#0x02
   912F 7B 00              4250 	mov	r3,#0x00
   9131 53 04 1F           4251 	anl	ar4,#0x1F
   9134 53 05 A0           4252 	anl	ar5,#0xA0
   9137 90 26 78           4253 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   913A EA                 4254 	mov	a,r2
   913B F0                 4255 	movx	@dptr,a
   913C A3                 4256 	inc	dptr
   913D EB                 4257 	mov	a,r3
   913E F0                 4258 	movx	@dptr,a
   913F A3                 4259 	inc	dptr
   9140 EC                 4260 	mov	a,r4
   9141 F0                 4261 	movx	@dptr,a
   9142 A3                 4262 	inc	dptr
   9143 ED                 4263 	mov	a,r5
   9144 F0                 4264 	movx	@dptr,a
   9145                    4265 00102$:
                           4266 ;	../../shared/src/cal_top.c:927: if( reg_INT_POWER_STATE_VALID_RISE_ISR_LANE ) { //Need P0 to P2 time reduce for Lane Disable
   9145 90 20 1B           4267 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG1_LANE + 0x0003)
   9148 E0                 4268 	movx	a,@dptr
   9149 30 E4 40           4269 	jnb	acc.4,00111$
                           4270 ;	../../shared/src/cal_top.c:928: if( reg_PIN_PU_PLL_RD_LANE==0 || reg_PIN_PU_TX_RD_LANE==0 ) {
   914C 90 20 07           4271 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   914F E0                 4272 	movx	a,@dptr
   9150 30 E5 07           4273 	jnb	acc.5,00106$
   9153 90 20 07           4274 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   9156 E0                 4275 	movx	a,@dptr
   9157 20 E4 16           4276 	jb	acc.4,00107$
   915A                    4277 00106$:
                           4278 ;	../../shared/src/cal_top.c:929: reg_PIN_PLL_READY_TX_LANE = 0;
   915A 90 20 02           4279 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   915D E0                 4280 	movx	a,@dptr
   915E 54 FB              4281 	anl	a,#0xfb
   9160 F0                 4282 	movx	@dptr,a
                           4283 ;	../../shared/src/cal_top.c:930: reg_PIN_PLL_READY_RX_LANE = 0;
   9161 90 21 02           4284 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   9164 E0                 4285 	movx	a,@dptr
   9165 54 BF              4286 	anl	a,#0xbf
   9167 F0                 4287 	movx	@dptr,a
                           4288 ;	../../shared/src/cal_top.c:931: PHY_STATUS = ST_P2;
   9168 90 22 30           4289 	mov	dptr,#_MCU_STATUS0_LANE
   916B 74 21              4290 	mov	a,#0x21
   916D F0                 4291 	movx	@dptr,a
   916E 80 14              4292 	sjmp	00108$
   9170                    4293 00107$:
                           4294 ;	../../shared/src/cal_top.c:933: else if( reg_PIN_PU_RX_RD_LANE==0 ) {
   9170 90 21 02           4295 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   9173 E0                 4296 	movx	a,@dptr
   9174 20 E2 0D           4297 	jb	acc.2,00108$
                           4298 ;	../../shared/src/cal_top.c:934: reg_PIN_PLL_READY_RX_LANE = 0;
   9177 90 21 02           4299 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   917A E0                 4300 	movx	a,@dptr
   917B 54 BF              4301 	anl	a,#0xbf
   917D F0                 4302 	movx	@dptr,a
                           4303 ;	../../shared/src/cal_top.c:935: PHY_STATUS = ST_P1;
   917E 90 22 30           4304 	mov	dptr,#_MCU_STATUS0_LANE
   9181 74 22              4305 	mov	a,#0x22
   9183 F0                 4306 	movx	@dptr,a
   9184                    4307 00108$:
                           4308 ;	../../shared/src/cal_top.c:937: PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0x13; // reg_INT_REFCLK_DIS_CHG_ISR_LANE, reg_INT_POWER_STATE_VALID_RISE_ISR_LANE, reg_INT_PU_PLL_OR_CHG_ISR_LANE
                           4309 ;	../../shared/src/cal_top.c:938: PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0;
   9184 90 20 53           4310 	mov	dptr,#(_PM_CTRL_INTERRUPT_ISR_REG1_LANE + 0x0003)
   9187 74 13              4311 	mov	a,#0x13
   9189 F0                 4312 	movx	@dptr,a
   918A E4                 4313 	clr	a
   918B F0                 4314 	movx	@dptr,a
   918C                    4315 00111$:
                           4316 ;	../../shared/src/cal_top.c:941: if(reg_DPHY_ANA_LANE_DISABLE_ISR_LANE) {
   918C 90 20 1A           4317 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG1_LANE + 0x0002)
   918F E0                 4318 	movx	a,@dptr
   9190 30 E1 4F           4319 	jnb	acc.1,00119$
                           4320 ;	../../shared/src/cal_top.c:942: switch(mcuid) {
   9193 90 22 00           4321 	mov	dptr,#_MCU_CONTROL_LANE
   9196 E0                 4322 	movx	a,@dptr
   9197 FA                 4323 	mov	r2,a
   9198 60 05              4324 	jz	00112$
                           4325 ;	../../shared/src/cal_top.c:943: case MCU_LANE0:
   919A BA 01 1C           4326 	cjne	r2,#0x01,00114$
   919D 80 0E              4327 	sjmp	00113$
   919F                    4328 00112$:
                           4329 ;	../../shared/src/cal_top.c:944: cmx_LANE_DIS_LANE0_7_0 = reg_LANE_DISABLE_RD_LANE;
   919F 90 20 34           4330 	mov	dptr,#_TX_SYSTEM_LANE
   91A2 E0                 4331 	movx	a,@dptr
   91A3 54 01              4332 	anl	a,#0x01
   91A5 FA                 4333 	mov	r2,a
   91A6 90 E6 51           4334 	mov	dptr,#(_MCU_CONFIG + 0x0001)
   91A9 EA                 4335 	mov	a,r2
   91AA F0                 4336 	movx	@dptr,a
                           4337 ;	../../shared/src/cal_top.c:945: break;
                           4338 ;	../../shared/src/cal_top.c:946: case MCU_LANE1:
   91AB 80 0C              4339 	sjmp	00114$
   91AD                    4340 00113$:
                           4341 ;	../../shared/src/cal_top.c:947: cmx_LANE_DIS_LANE1_7_0 = reg_LANE_DISABLE_RD_LANE;
   91AD 90 20 34           4342 	mov	dptr,#_TX_SYSTEM_LANE
   91B0 E0                 4343 	movx	a,@dptr
   91B1 54 01              4344 	anl	a,#0x01
   91B3 FA                 4345 	mov	r2,a
   91B4 90 E6 52           4346 	mov	dptr,#(_MCU_CONFIG + 0x0002)
   91B7 EA                 4347 	mov	a,r2
   91B8 F0                 4348 	movx	@dptr,a
                           4349 ;	../../shared/src/cal_top.c:957: }
   91B9                    4350 00114$:
                           4351 ;	../../shared/src/cal_top.c:959: PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B2 = 0x02; //reg_DPHY_ANA_LANE_DISABLE_ISR_CLEAR_LANE
                           4352 ;	../../shared/src/cal_top.c:960: PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B2 = 0;
   91B9 90 20 52           4353 	mov	dptr,#(_PM_CTRL_INTERRUPT_ISR_REG1_LANE + 0x0002)
   91BC 74 02              4354 	mov	a,#0x02
   91BE F0                 4355 	movx	@dptr,a
   91BF E4                 4356 	clr	a
   91C0 F0                 4357 	movx	@dptr,a
                           4358 ;	../../shared/src/cal_top.c:962: if ( cmx_LANE_DIS_LANE0_7_0 && cmx_LANE_DIS_LANE1_7_0
   91C1 90 E6 51           4359 	mov	dptr,#(_MCU_CONFIG + 0x0001)
   91C4 E0                 4360 	movx	a,@dptr
   91C5 60 1B              4361 	jz	00119$
   91C7 90 E6 52           4362 	mov	dptr,#(_MCU_CONFIG + 0x0002)
   91CA E0                 4363 	movx	a,@dptr
   91CB 60 15              4364 	jz	00119$
                           4365 ;	../../shared/src/cal_top.c:967: reg_LANE_ALIGN_READY_OUT = 1; //control sequence to de-glitch
   91CD 90 A0 2F           4366 	mov	dptr,#(_SRIS_REG0 + 0x0003)
   91D0 E0                 4367 	movx	a,@dptr
   91D1 44 10              4368 	orl	a,#0x10
   91D3 F0                 4369 	movx	@dptr,a
                           4370 ;	../../shared/src/cal_top.c:968: reg_LANE_ALIGN_READY_OUT_FORCE = 1;
   91D4 90 A0 2F           4371 	mov	dptr,#(_SRIS_REG0 + 0x0003)
   91D7 E0                 4372 	movx	a,@dptr
   91D8 44 20              4373 	orl	a,#0x20
   91DA F0                 4374 	movx	@dptr,a
                           4375 ;	../../shared/src/cal_top.c:969: reg_TXCLK_SYNC_START_OUT = 1;
   91DB 90 A3 27           4376 	mov	dptr,#(_INPUT_CMN_PIN_REG2 + 0x0003)
   91DE E0                 4377 	movx	a,@dptr
   91DF 44 08              4378 	orl	a,#0x08
   91E1 F0                 4379 	movx	@dptr,a
   91E2                    4380 00119$:
                           4381 ;	../../shared/src/cal_top.c:1016: if(PHY_MCU_REMOTE_REQ_LANE) {
   91E2 90 22 E4           4382 	mov	dptr,#_MCU_COMMAND0
   91E5 E0                 4383 	movx	a,@dptr
   91E6 30 E0 0D           4384 	jnb	acc.0,00121$
                           4385 ;	../../shared/src/cal_top.c:1017: lnx_PHY_LOCAL_STATUS_LANE_7_0 = 0x2; //NOT_VAILD
   91E9 90 60 2E           4386 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS2_LANE + 0x0002)
   91EC 74 02              4387 	mov	a,#0x02
   91EE F0                 4388 	movx	@dptr,a
                           4389 ;	../../shared/src/cal_top.c:1018: lnx_PHY_MCU_LOCAL_ACK_LANE = 1;
   91EF 90 60 33           4390 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   91F2 E0                 4391 	movx	a,@dptr
   91F3 44 01              4392 	orl	a,#0x01
   91F5 F0                 4393 	movx	@dptr,a
   91F6                    4394 00121$:
                           4395 ;	../../shared/src/cal_top.c:1032: if( cont_cal_on==0) return;
   91F6 20 16 03           4396 	jb	_cont_cal_on,00123$
   91F9 02 92 93           4397 	ljmp	00126$
   91FC                    4398 00123$:
                           4399 ;	../../shared/src/cal_top.c:1033: cont_cal_on = 0;
   91FC C2 16              4400 	clr	_cont_cal_on
                           4401 ;	../../shared/src/cal_top.c:1036: if(mcuid== master_mcu) 
   91FE 90 22 00           4402 	mov	dptr,#_MCU_CONTROL_LANE
   9201 E0                 4403 	movx	a,@dptr
   9202 FA                 4404 	mov	r2,a
   9203 90 E6 50           4405 	mov	dptr,#_MCU_CONFIG
   9206 E0                 4406 	movx	a,@dptr
   9207 FB                 4407 	mov	r3,a
   9208 EA                 4408 	mov	a,r2
   9209 B5 03 09           4409 	cjne	a,ar3,00125$
                           4410 ;	../../shared/src/cal_top.c:1037: pll_temp_jump_idle();
   920C 78 88              4411 	mov	r0,#_pll_temp_jump_idle
   920E 79 CC              4412 	mov	r1,#(_pll_temp_jump_idle >> 8)
   9210 7A 02              4413 	mov	r2,#(_pll_temp_jump_idle >> 16)
   9212 12 00 B3           4414 	lcall	__sdcc_banked_call
   9215                    4415 00125$:
                           4416 ;	../../shared/src/cal_top.c:1038: reg_ALIGN90_SYN_CLK_LANE = 0;
   9215 90 00 34           4417 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_13
   9218 E0                 4418 	movx	a,@dptr
   9219 54 FE              4419 	anl	a,#0xfe
   921B F0                 4420 	movx	@dptr,a
                           4421 ;	../../shared/src/cal_top.c:1039: reg_RXDCC_DAC_SYNC_CLK_LANE = 0;
   921C 90 00 44           4422 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_17
   921F E0                 4423 	movx	a,@dptr
   9220 54 EF              4424 	anl	a,#0xef
   9222 F0                 4425 	movx	@dptr,a
                           4426 ;	../../shared/src/cal_top.c:1040: reg_TRXDCC_CAL_CLK100KHZ_LANE = 0;
   9223 90 02 20           4427 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   9226 E0                 4428 	movx	a,@dptr
   9227 54 FE              4429 	anl	a,#0xfe
   9229 F0                 4430 	movx	@dptr,a
                           4431 ;	../../shared/src/cal_top.c:1041: reg_RXDCC_EN_DLLCLK_LANE = 0;
   922A 90 02 18           4432 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_134
   922D E0                 4433 	movx	a,@dptr
   922E 54 FE              4434 	anl	a,#0xfe
   9230 F0                 4435 	movx	@dptr,a
                           4436 ;	../../shared/src/cal_top.c:1042: reg_RXDCC_EN_DATACLK_LANE = 0;
   9231 90 02 1C           4437 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_135
   9234 E0                 4438 	movx	a,@dptr
   9235 54 FE              4439 	anl	a,#0xfe
   9237 F0                 4440 	movx	@dptr,a
                           4441 ;	../../shared/src/cal_top.c:1043: reg_RXDCC_EN_EOMCLK_LANE = 0;
   9238 90 00 3C           4442 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_15
   923B E0                 4443 	movx	a,@dptr
   923C 54 FD              4444 	anl	a,#0xfd
   923E F0                 4445 	movx	@dptr,a
                           4446 ;	../../shared/src/cal_top.c:1044: reg_RXDCC_HG_DLLCLK_LANE = 0;
   923F 90 02 1C           4447 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_135
   9242 E0                 4448 	movx	a,@dptr
   9243 54 FD              4449 	anl	a,#0xfd
   9245 F0                 4450 	movx	@dptr,a
                           4451 ;	../../shared/src/cal_top.c:1045: reg_RXDCC_HG_DATACLK_LANE = 0;
   9246 90 02 20           4452 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   9249 E0                 4453 	movx	a,@dptr
   924A 54 FD              4454 	anl	a,#0xfd
   924C F0                 4455 	movx	@dptr,a
                           4456 ;	../../shared/src/cal_top.c:1046: reg_RXDCC_HG_EOMCLK_LANE = 0;
   924D 90 00 40           4457 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_16
   9250 E0                 4458 	movx	a,@dptr
   9251 54 FD              4459 	anl	a,#0xfd
   9253 F0                 4460 	movx	@dptr,a
                           4461 ;	../../shared/src/cal_top.c:1047: reg_TRX_IMPCAL_CLK = 0;
   9254 90 82 2C           4462 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_139
   9257 E0                 4463 	movx	a,@dptr
   9258 54 7F              4464 	anl	a,#0x7f
   925A F0                 4465 	movx	@dptr,a
                           4466 ;	../../shared/src/cal_top.c:1048: reg_LCPLL_DCC_CLK = 0;
   925B 90 82 D8           4467 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_182
   925E E0                 4468 	movx	a,@dptr
   925F 54 FE              4469 	anl	a,#0xfe
   9261 F0                 4470 	movx	@dptr,a
                           4471 ;	../../shared/src/cal_top.c:1049: reg_RXDCC_CAL_EN_LANE = 0;
   9262 90 00 40           4472 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_16
   9265 E0                 4473 	movx	a,@dptr
   9266 54 FE              4474 	anl	a,#0xfe
   9268 F0                 4475 	movx	@dptr,a
                           4476 ;	../../shared/src/cal_top.c:1050: reg_TXDCCCAL_EN_LANE = 0;
   9269 90 02 4C           4477 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_147
   926C E0                 4478 	movx	a,@dptr
   926D 54 7F              4479 	anl	a,#0x7f
   926F F0                 4480 	movx	@dptr,a
                           4481 ;	../../shared/src/cal_top.c:1051: reg_TXDCCCAL_PDIV_EN_LANE = 0;
   9270 90 02 5C           4482 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_151
   9273 E0                 4483 	movx	a,@dptr
   9274 54 FD              4484 	anl	a,#0xfd
   9276 F0                 4485 	movx	@dptr,a
                           4486 ;	../../shared/src/cal_top.c:1052: reg_TX_TDCAL_EN_LANE = 0;
   9277 90 00 60           4487 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_24
   927A E0                 4488 	movx	a,@dptr
   927B 54 FD              4489 	anl	a,#0xfd
   927D F0                 4490 	movx	@dptr,a
                           4491 ;	../../shared/src/cal_top.c:1053: reg_LCPLL_DCC_CAL_EN = 0;
   927E 90 82 DC           4492 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_183
   9281 E0                 4493 	movx	a,@dptr
   9282 54 7F              4494 	anl	a,#0x7f
   9284 F0                 4495 	movx	@dptr,a
                           4496 ;	../../shared/src/cal_top.c:1058: reg_PLL_SLLP_DAC_VALID_RING = 0;
   9285 90 83 04           4497 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   9288 E0                 4498 	movx	a,@dptr
   9289 54 BF              4499 	anl	a,#0xbf
   928B F0                 4500 	movx	@dptr,a
                           4501 ;	../../shared/src/cal_top.c:1059: reg_PLL_CAL_EN_RING = 0;
   928C 90 83 10           4502 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_196
   928F E0                 4503 	movx	a,@dptr
   9290 54 7F              4504 	anl	a,#0x7f
   9292 F0                 4505 	movx	@dptr,a
   9293                    4506 00126$:
   9293 02 00 C5           4507 	ljmp	__sdcc_banked_ret
                           4508 	.area CSEG    (CODE)
                           4509 	.area CSEG    (CODE)
                           4510 	.area CABS    (ABS,CODE)
