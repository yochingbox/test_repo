                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:53 2018
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
                           2049 ;dtx_off                   Allocated to registers r3 
                           2050 ;------------------------------------------------------------
                           2051 ;	../../shared/src/cal_top.c:25: void Calibration(void) BANKING_CTRL {
                           2052 ;	-----------------------------------------
                           2053 ;	 function Calibration
                           2054 ;	-----------------------------------------
   86A7                    2055 _Calibration:
                    0002   2056 	ar2 = 0x02
                    0003   2057 	ar3 = 0x03
                    0004   2058 	ar4 = 0x04
                    0005   2059 	ar5 = 0x05
                    0006   2060 	ar6 = 0x06
                    0007   2061 	ar7 = 0x07
                    0000   2062 	ar0 = 0x00
                    0001   2063 	ar1 = 0x01
                           2064 ;	../../shared/src/cal_top.c:30: lnx_CAL_DONE_LANE = 0;
   86A7 90 60 03           2065 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   86AA E0                 2066 	movx	a,@dptr
   86AB 54 FE              2067 	anl	a,#0xfe
   86AD F0                 2068 	movx	@dptr,a
                           2069 ;	../../shared/src/cal_top.c:32: phy_check_lane(0);
   86AE 75 82 00           2070 	mov	dpl,#0x00
   86B1 78 2D              2071 	mov	r0,#_phy_check_lane
   86B3 79 92              2072 	mov	r1,#(_phy_check_lane >> 8)
   86B5 7A 01              2073 	mov	r2,#(_phy_check_lane >> 16)
   86B7 12 00 B3           2074 	lcall	__sdcc_banked_call
                           2075 ;	../../shared/src/cal_top.c:33: reg_DFE_ADAPT_CONT_LANE = 0;
   86BA 90 24 01           2076 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0001)
   86BD E0                 2077 	movx	a,@dptr
   86BE 54 DF              2078 	anl	a,#0xdf
   86C0 F0                 2079 	movx	@dptr,a
                           2080 ;	../../shared/src/cal_top.c:34: reg_DFE_START_LANE = 0;
   86C1 90 24 02           2081 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   86C4 E0                 2082 	movx	a,@dptr
   86C5 54 FE              2083 	anl	a,#0xfe
   86C7 F0                 2084 	movx	@dptr,a
                           2085 ;	../../shared/src/cal_top.c:36: gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_3_0; gen_tx = min(gen_tx, cmx_PHY_GEN_MAX_3_0);
   86C8 90 20 33           2086 	mov	dptr,#(_SPD_CTRL_TX_LANE_REG1_LANE + 0x0003)
   86CB E0                 2087 	movx	a,@dptr
   86CC C4                 2088 	swap	a
   86CD 54 0F              2089 	anl	a,#0x0f
   86CF FA                 2090 	mov	r2,a
   86D0 90 66 15           2091 	mov	dptr,#_gen_tx
   86D3 F0                 2092 	movx	@dptr,a
   86D4 90 E6 2C           2093 	mov	dptr,#_CONTROL_CONFIG8
   86D7 E0                 2094 	movx	a,@dptr
   86D8 54 0F              2095 	anl	a,#0x0f
   86DA FB                 2096 	mov	r3,a
   86DB C0 03              2097 	push	ar3
   86DD 8A 82              2098 	mov	dpl,r2
   86DF 78 3B              2099 	mov	r0,#_min
   86E1 79 C0              2100 	mov	r1,#(_min >> 8)
   86E3 7A 02              2101 	mov	r2,#(_min >> 16)
   86E5 12 00 B3           2102 	lcall	__sdcc_banked_call
   86E8 AA 82              2103 	mov	r2,dpl
   86EA 15 81              2104 	dec	sp
   86EC 90 66 15           2105 	mov	dptr,#_gen_tx
   86EF EA                 2106 	mov	a,r2
   86F0 F0                 2107 	movx	@dptr,a
                           2108 ;	../../shared/src/cal_top.c:37: gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_3_0; gen_rx = min(gen_rx, cmx_PHY_GEN_MAX_3_0);
   86F1 90 21 17           2109 	mov	dptr,#(_SPD_CTRL_RX_LANE_REG1_LANE + 0x0003)
   86F4 E0                 2110 	movx	a,@dptr
   86F5 C4                 2111 	swap	a
   86F6 54 0F              2112 	anl	a,#0x0f
   86F8 FA                 2113 	mov	r2,a
   86F9 90 66 16           2114 	mov	dptr,#_gen_rx
   86FC F0                 2115 	movx	@dptr,a
   86FD 90 E6 2C           2116 	mov	dptr,#_CONTROL_CONFIG8
   8700 E0                 2117 	movx	a,@dptr
   8701 54 0F              2118 	anl	a,#0x0f
   8703 FB                 2119 	mov	r3,a
   8704 C0 03              2120 	push	ar3
   8706 8A 82              2121 	mov	dpl,r2
   8708 78 3B              2122 	mov	r0,#_min
   870A 79 C0              2123 	mov	r1,#(_min >> 8)
   870C 7A 02              2124 	mov	r2,#(_min >> 16)
   870E 12 00 B3           2125 	lcall	__sdcc_banked_call
   8711 AA 82              2126 	mov	r2,dpl
   8713 15 81              2127 	dec	sp
   8715 90 66 16           2128 	mov	dptr,#_gen_rx
   8718 EA                 2129 	mov	a,r2
   8719 F0                 2130 	movx	@dptr,a
                           2131 ;	../../shared/src/cal_top.c:39: for(genno=min_gen; genno<= max_gen; genno++) {  
   871A 90 63 01           2132 	mov	dptr,#_min_gen
   871D E0                 2133 	movx	a,@dptr
   871E FA                 2134 	mov	r2,a
   871F FB                 2135 	mov	r3,a
   8720                    2136 00298$:
   8720 90 63 00           2137 	mov	dptr,#_max_gen
   8723 E0                 2138 	movx	a,@dptr
   8724 FC                 2139 	mov	r4,a
   8725 B5 03 00           2140 	cjne	a,ar3,00388$
   8728                    2141 00388$:
   8728 40 3A              2142 	jc	00301$
                           2143 ;	../../shared/src/cal_top.c:40: if(speedtable[genno][spdoft_tx_ck_sel_lane] == 1 || speedtable[genno][spdoft_rx_ck_sel_lane] == 1) ring_pll_enabled = 1;
   872A EB                 2144 	mov	a,r3
   872B 75 F0 50           2145 	mov	b,#0x50
   872E A4                 2146 	mul	ab
   872F FC                 2147 	mov	r4,a
   8730 AD F0              2148 	mov	r5,b
   8732 24 04              2149 	add	a,#_speedtable
   8734 FE                 2150 	mov	r6,a
   8735 ED                 2151 	mov	a,r5
   8736 34 63              2152 	addc	a,#(_speedtable >> 8)
   8738 FF                 2153 	mov	r7,a
   8739 8E 82              2154 	mov	dpl,r6
   873B 8F 83              2155 	mov	dph,r7
   873D A3                 2156 	inc	dptr
   873E E0                 2157 	movx	a,@dptr
   873F FE                 2158 	mov	r6,a
   8740 BE 01 02           2159 	cjne	r6,#0x01,00390$
   8743 80 16              2160 	sjmp	00101$
   8745                    2161 00390$:
   8745 EC                 2162 	mov	a,r4
   8746 24 04              2163 	add	a,#_speedtable
   8748 FC                 2164 	mov	r4,a
   8749 ED                 2165 	mov	a,r5
   874A 34 63              2166 	addc	a,#(_speedtable >> 8)
   874C FD                 2167 	mov	r5,a
   874D 74 16              2168 	mov	a,#0x16
   874F 2C                 2169 	add	a,r4
   8750 F5 82              2170 	mov	dpl,a
   8752 E4                 2171 	clr	a
   8753 3D                 2172 	addc	a,r5
   8754 F5 83              2173 	mov	dph,a
   8756 E0                 2174 	movx	a,@dptr
   8757 FC                 2175 	mov	r4,a
   8758 BC 01 04           2176 	cjne	r4,#0x01,00102$
   875B                    2177 00101$:
   875B D2 12              2178 	setb	_ring_pll_enabled
   875D 80 02              2179 	sjmp	00300$
   875F                    2180 00102$:
                           2181 ;	../../shared/src/cal_top.c:41: else 	lc_pll_used = 1;
   875F D2 11              2182 	setb	_lc_pll_used
   8761                    2183 00300$:
                           2184 ;	../../shared/src/cal_top.c:39: for(genno=min_gen; genno<= max_gen; genno++) {  
   8761 0B                 2185 	inc	r3
   8762 80 BC              2186 	sjmp	00298$
   8764                    2187 00301$:
                           2188 ;	../../shared/src/cal_top.c:47: genno = gen_tx;
   8764 90 66 15           2189 	mov	dptr,#_gen_tx
   8767 E0                 2190 	movx	a,@dptr
   8768 FA                 2191 	mov	r2,a
                           2192 ;	../../shared/src/cal_top.c:49: if(phy_mode==SERDES) { 
   8769 90 A3 16           2193 	mov	dptr,#(_SYSTEM + 0x0002)
   876C E0                 2194 	movx	a,@dptr
   876D 54 07              2195 	anl	a,#0x07
   876F FB                 2196 	mov	r3,a
   8770 BB 04 2A           2197 	cjne	r3,#0x04,00106$
                           2198 ;	../../shared/src/cal_top.c:50: genno = min(reg_PIN_PHY_GEN_TX_RD_LANE_3_0, cmx_PHY_GEN_MAX_3_0);
   8773 90 E6 2C           2199 	mov	dptr,#_CONTROL_CONFIG8
   8776 E0                 2200 	movx	a,@dptr
   8777 54 0F              2201 	anl	a,#0x0f
   8779 FB                 2202 	mov	r3,a
   877A 90 20 33           2203 	mov	dptr,#(_SPD_CTRL_TX_LANE_REG1_LANE + 0x0003)
   877D E0                 2204 	movx	a,@dptr
   877E C4                 2205 	swap	a
   877F 54 0F              2206 	anl	a,#0x0f
   8781 F5 82              2207 	mov	dpl,a
   8783 C0 03              2208 	push	ar3
   8785 78 3B              2209 	mov	r0,#_min
   8787 79 C0              2210 	mov	r1,#(_min >> 8)
   8789 7A 02              2211 	mov	r2,#(_min >> 16)
   878B 12 00 B3           2212 	lcall	__sdcc_banked_call
   878E AB 82              2213 	mov	r3,dpl
   8790 15 81              2214 	dec	sp
   8792 8B 02              2215 	mov	ar2,r3
                           2216 ;	../../shared/src/cal_top.c:51: genno = get_gen_memory_index(genno);
   8794 8A 82              2217 	mov	dpl,r2
   8796 12 42 30           2218 	lcall	_get_gen_memory_index
   8799 AB 82              2219 	mov	r3,dpl
   879B 8B 02              2220 	mov	ar2,r3
   879D                    2221 00106$:
                           2222 ;	../../shared/src/cal_top.c:55: gen_pll_rate = speedtable[genno][spdoft_pll_rate_sel_tx];
   879D EA                 2223 	mov	a,r2
   879E 75 F0 50           2224 	mov	b,#0x50
   87A1 A4                 2225 	mul	ab
   87A2 FB                 2226 	mov	r3,a
   87A3 AC F0              2227 	mov	r4,b
   87A5 24 04              2228 	add	a,#_speedtable
   87A7 F5 82              2229 	mov	dpl,a
   87A9 EC                 2230 	mov	a,r4
   87AA 34 63              2231 	addc	a,#(_speedtable >> 8)
   87AC F5 83              2232 	mov	dph,a
   87AE E0                 2233 	movx	a,@dptr
   87AF FD                 2234 	mov	r5,a
   87B0 90 67 8C           2235 	mov	dptr,#_gen_pll_rate
   87B3 F0                 2236 	movx	@dptr,a
                           2237 ;	../../shared/src/cal_top.c:56: if(gen_pll_rate>1 || phy_mode==SERDES) { tx_pll_rate = 0; tx_pll_rate_x = 0; }
   87B4 74 01              2238 	mov	a,#0x01
   87B6 B5 05 00           2239 	cjne	a,ar5,00395$
   87B9                    2240 00395$:
   87B9 40 0A              2241 	jc	00107$
   87BB 90 A3 16           2242 	mov	dptr,#(_SYSTEM + 0x0002)
   87BE E0                 2243 	movx	a,@dptr
   87BF 54 07              2244 	anl	a,#0x07
   87C1 FE                 2245 	mov	r6,a
   87C2 BE 04 09           2246 	cjne	r6,#0x04,00108$
   87C5                    2247 00107$:
   87C5 C2 0F              2248 	clr	_tx_pll_rate
   87C7 90 67 AE           2249 	mov	dptr,#_tx_pll_rate_x
   87CA E4                 2250 	clr	a
   87CB F0                 2251 	movx	@dptr,a
   87CC 80 0A              2252 	sjmp	00109$
   87CE                    2253 00108$:
                           2254 ;	../../shared/src/cal_top.c:57: else { tx_pll_rate = gen_pll_rate; tx_pll_rate_x = gen_pll_rate; }
   87CE ED                 2255 	mov	a,r5
   87CF 24 FF              2256 	add	a,#0xff
   87D1 92 0F              2257 	mov	_tx_pll_rate,c
   87D3 90 67 AE           2258 	mov	dptr,#_tx_pll_rate_x
   87D6 ED                 2259 	mov	a,r5
   87D7 F0                 2260 	movx	@dptr,a
   87D8                    2261 00109$:
                           2262 ;	../../shared/src/cal_top.c:58: use_ring_pll = speedtable[genno][spdoft_tx_ck_sel_lane];
   87D8 EB                 2263 	mov	a,r3
   87D9 24 04              2264 	add	a,#_speedtable
   87DB FB                 2265 	mov	r3,a
   87DC EC                 2266 	mov	a,r4
   87DD 34 63              2267 	addc	a,#(_speedtable >> 8)
   87DF FC                 2268 	mov	r4,a
   87E0 8B 82              2269 	mov	dpl,r3
   87E2 8C 83              2270 	mov	dph,r4
   87E4 A3                 2271 	inc	dptr
   87E5 E0                 2272 	movx	a,@dptr
   87E6 24 FF              2273 	add	a,#0xff
   87E8 92 10              2274 	mov	_use_ring_pll,c
                           2275 ;	../../shared/src/cal_top.c:79: if(phy_mode==SERDES && SPDCHG_ON_READ) {
   87EA 90 A3 16           2276 	mov	dptr,#(_SYSTEM + 0x0002)
   87ED E0                 2277 	movx	a,@dptr
   87EE 54 07              2278 	anl	a,#0x07
   87F0 FB                 2279 	mov	r3,a
   87F1 BB 04 02           2280 	cjne	r3,#0x04,00399$
   87F4 80 03              2281 	sjmp	00400$
   87F6                    2282 00399$:
   87F6 02 88 81           2283 	ljmp	00124$
   87F9                    2284 00400$:
   87F9 90 22 38           2285 	mov	dptr,#_MCU_STATUS2_LANE
   87FC E0                 2286 	movx	a,@dptr
   87FD FB                 2287 	mov	r3,a
   87FE 53 03 01           2288 	anl	ar3,#0x01
   8801 BB 01 02           2289 	cjne	r3,#0x01,00401$
   8804 80 02              2290 	sjmp	00402$
   8806                    2291 00401$:
   8806 80 79              2292 	sjmp	00124$
   8808                    2293 00402$:
                           2294 ;	../../shared/src/cal_top.c:80: dtx_off = pre_gen_pll_rate != gen_pll_rate;
   8808 90 67 8D           2295 	mov	dptr,#_pre_gen_pll_rate
   880B E0                 2296 	movx	a,@dptr
   880C FB                 2297 	mov	r3,a
   880D B5 05 04           2298 	cjne	a,ar5,00403$
   8810 74 01              2299 	mov	a,#0x01
   8812 80 01              2300 	sjmp	00404$
   8814                    2301 00403$:
   8814 E4                 2302 	clr	a
   8815                    2303 00404$:
   8815 FD                 2304 	mov	r5,a
   8816 B4 01 00           2305 	cjne	a,#0x01,00405$
   8819                    2306 00405$:
   8819 E4                 2307 	clr	a
   881A 33                 2308 	rlc	a
   881B FD                 2309 	mov	r5,a
                           2310 ;	../../shared/src/cal_top.c:81: if(dtx_off) {
   881C FB                 2311 	mov	r3,a
   881D 60 57              2312 	jz	00122$
                           2313 ;	../../shared/src/cal_top.c:82: if(serdes_ring_lane_en) {
   881F 90 66 23           2314 	mov	dptr,#_serdes_ring_lane_en
   8822 E0                 2315 	movx	a,@dptr
   8823 FC                 2316 	mov	r4,a
   8824 60 25              2317 	jz	00119$
                           2318 ;	../../shared/src/cal_top.c:83: if(ring_lane_sel) pll_clk_ready_ring_0();
   8826 90 66 24           2319 	mov	dptr,#_ring_lane_sel
   8829 E0                 2320 	movx	a,@dptr
   882A FC                 2321 	mov	r4,a
   882B 60 0F              2322 	jz	00112$
   882D C0 03              2323 	push	ar3
   882F 78 8F              2324 	mov	r0,#_pll_clk_ready_ring_0
   8831 79 D4              2325 	mov	r1,#(_pll_clk_ready_ring_0 >> 8)
   8833 7A 02              2326 	mov	r2,#(_pll_clk_ready_ring_0 >> 16)
   8835 12 00 B3           2327 	lcall	__sdcc_banked_call
   8838 D0 03              2328 	pop	ar3
   883A 80 3A              2329 	sjmp	00122$
   883C                    2330 00112$:
                           2331 ;	../../shared/src/cal_top.c:86: else pll_clk_ready_0();
   883C C0 03              2332 	push	ar3
   883E 78 77              2333 	mov	r0,#_pll_clk_ready_0
   8840 79 D4              2334 	mov	r1,#(_pll_clk_ready_0 >> 8)
   8842 7A 02              2335 	mov	r2,#(_pll_clk_ready_0 >> 16)
   8844 12 00 B3           2336 	lcall	__sdcc_banked_call
   8847 D0 03              2337 	pop	ar3
   8849 80 2B              2338 	sjmp	00122$
   884B                    2339 00119$:
                           2340 ;	../../shared/src/cal_top.c:89: else if(mcuid == master_mcu) {
   884B 90 22 00           2341 	mov	dptr,#_MCU_CONTROL_LANE
   884E E0                 2342 	movx	a,@dptr
   884F FC                 2343 	mov	r4,a
   8850 90 E6 50           2344 	mov	dptr,#_MCU_CONFIG
   8853 E0                 2345 	movx	a,@dptr
   8854 FD                 2346 	mov	r5,a
   8855 EC                 2347 	mov	a,r4
   8856 B5 05 1D           2348 	cjne	a,ar5,00122$
                           2349 ;	../../shared/src/cal_top.c:90: pll_clk_ready_0();
   8859 C0 03              2350 	push	ar3
   885B 78 77              2351 	mov	r0,#_pll_clk_ready_0
   885D 79 D4              2352 	mov	r1,#(_pll_clk_ready_0 >> 8)
   885F 7A 02              2353 	mov	r2,#(_pll_clk_ready_0 >> 16)
   8861 12 00 B3           2354 	lcall	__sdcc_banked_call
   8864 D0 03              2355 	pop	ar3
                           2356 ;	../../shared/src/cal_top.c:91: if(ring_pll_enabled) pll_clk_ready_ring_0();
   8866 30 12 0D           2357 	jnb	_ring_pll_enabled,00122$
   8869 C0 03              2358 	push	ar3
   886B 78 8F              2359 	mov	r0,#_pll_clk_ready_ring_0
   886D 79 D4              2360 	mov	r1,#(_pll_clk_ready_ring_0 >> 8)
   886F 7A 02              2361 	mov	r2,#(_pll_clk_ready_ring_0 >> 16)
   8871 12 00 B3           2362 	lcall	__sdcc_banked_call
   8874 D0 03              2363 	pop	ar3
   8876                    2364 00122$:
                           2365 ;	../../shared/src/cal_top.c:99: DTL_DTX_DFE_clkoff_reset_1(dtx_off); //(mcuid == master_mcu) && (pre_gen_pll_rate != gen_pll_rate));
   8876 8B 82              2366 	mov	dpl,r3
   8878 78 28              2367 	mov	r0,#_DTL_DTX_DFE_clkoff_reset_1
   887A 79 D4              2368 	mov	r1,#(_DTL_DTX_DFE_clkoff_reset_1 >> 8)
   887C 7A 01              2369 	mov	r2,#(_DTL_DTX_DFE_clkoff_reset_1 >> 16)
   887E 12 00 B3           2370 	lcall	__sdcc_banked_call
   8881                    2371 00124$:
                           2372 ;	../../shared/src/cal_top.c:106: if( mcuid== master_mcu || (cmx_TX_LANE_ALIGN_OFF && reg_TSEN_ADC_RD_REQ==0)) {
   8881 90 22 00           2373 	mov	dptr,#_MCU_CONTROL_LANE
   8884 E0                 2374 	movx	a,@dptr
   8885 FB                 2375 	mov	r3,a
   8886 90 E6 50           2376 	mov	dptr,#_MCU_CONFIG
   8889 E0                 2377 	movx	a,@dptr
   888A FC                 2378 	mov	r4,a
   888B EB                 2379 	mov	a,r3
   888C B5 04 02           2380 	cjne	a,ar4,00412$
   888F 80 0E              2381 	sjmp	00128$
   8891                    2382 00412$:
   8891 90 E6 04           2383 	mov	dptr,#_CONTROL_CONFIG0
   8894 E0                 2384 	movx	a,@dptr
   8895 30 E4 38           2385 	jnb	acc.4,00129$
   8898 90 A3 29           2386 	mov	dptr,#(_ANA_TSEN_CONTROL + 0x0001)
   889B E0                 2387 	movx	a,@dptr
   889C 20 E3 31           2388 	jb	acc.3,00129$
   889F                    2389 00128$:
                           2390 ;	../../shared/src/cal_top.c:107: reg_TSEN_ADC_CAL_1_0 = 0x2; //Automatic self-offset-cal enforced, TSENE_ADC in normal mode.
   889F 90 83 1C           2391 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_199
   88A2 E0                 2392 	movx	a,@dptr
   88A3 54 F9              2393 	anl	a,#0xf9
   88A5 44 04              2394 	orl	a,#0x04
   88A7 F0                 2395 	movx	@dptr,a
                           2396 ;	../../shared/src/cal_top.c:108: CMN_CALIBRATION.BT.B1 = 0x08; //reg_ANA_TSEN_ADC_RESET = 0;
                           2397 ;	../../shared/src/cal_top.c:109: CMN_CALIBRATION.BT.B1 = 0x09; //reg_ANA_TSEN_ADC_EN = 1;
                           2398 ;	../../shared/src/cal_top.c:110: CMN_CALIBRATION.BT.B1 = 0x0d; //reg_ANA_TSEN_ADC_START = 1;
   88A8 90 A3 41           2399 	mov	dptr,#(_CMN_CALIBRATION + 0x0001)
   88AB 74 08              2400 	mov	a,#0x08
   88AD F0                 2401 	movx	@dptr,a
   88AE 74 09              2402 	mov	a,#0x09
   88B0 F0                 2403 	movx	@dptr,a
   88B1 74 0D              2404 	mov	a,#0x0D
   88B3 F0                 2405 	movx	@dptr,a
                           2406 ;	../../shared/src/cal_top.c:111: reg_TSEN_ADC_RD_REQ = 1;
   88B4 90 A3 29           2407 	mov	dptr,#(_ANA_TSEN_CONTROL + 0x0001)
   88B7 E0                 2408 	movx	a,@dptr
   88B8 44 08              2409 	orl	a,#0x08
   88BA F0                 2410 	movx	@dptr,a
                           2411 ;	../../shared/src/cal_top.c:114: if (FAST_POWER_ON_EN) {
   88BB 90 E6 07           2412 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   88BE E0                 2413 	movx	a,@dptr
   88BF 30 E4 0E           2414 	jnb	acc.4,00129$
                           2415 ;	../../shared/src/cal_top.c:115: reg_ANA_TSEN_ADC_RDY_FM_REG = 1;
   88C2 90 A3 2B           2416 	mov	dptr,#(_ANA_TSEN_CONTROL + 0x0003)
   88C5 E0                 2417 	movx	a,@dptr
   88C6 44 02              2418 	orl	a,#0x02
   88C8 F0                 2419 	movx	@dptr,a
                           2420 ;	../../shared/src/cal_top.c:116: reg_ANA_TSEN_ADC_RDY = 1;
   88C9 90 A3 2B           2421 	mov	dptr,#(_ANA_TSEN_CONTROL + 0x0003)
   88CC E0                 2422 	movx	a,@dptr
   88CD 44 04              2423 	orl	a,#0x04
   88CF F0                 2424 	movx	@dptr,a
   88D0                    2425 00129$:
                           2426 ;	../../shared/src/cal_top.c:120: read_tsen();
   88D0 78 B9              2427 	mov	r0,#_read_tsen
   88D2 79 BE              2428 	mov	r1,#(_read_tsen >> 8)
   88D4 7A 02              2429 	mov	r2,#(_read_tsen >> 16)
   88D6 12 00 B3           2430 	lcall	__sdcc_banked_call
                           2431 ;	../../shared/src/cal_top.c:122: if( force_exit_cal ) {
   88D9 30 14 1C           2432 	jnb	_force_exit_cal,00133$
                           2433 ;	../../shared/src/cal_top.c:124: CONTROL_CONFIG1.VAL = 0x0ffffffc;
   88DC 90 E6 08           2434 	mov	dptr,#_CONTROL_CONFIG1
   88DF 74 FC              2435 	mov	a,#0xFC
   88E1 F0                 2436 	movx	@dptr,a
   88E2 A3                 2437 	inc	dptr
   88E3 74 FF              2438 	mov	a,#0xFF
   88E5 F0                 2439 	movx	@dptr,a
   88E6 A3                 2440 	inc	dptr
   88E7 F0                 2441 	movx	@dptr,a
   88E8 A3                 2442 	inc	dptr
   88E9 74 0F              2443 	mov	a,#0x0F
   88EB F0                 2444 	movx	@dptr,a
                           2445 ;	../../shared/src/cal_top.c:125: all_cal_ext();
   88EC 78 A1              2446 	mov	r0,#_all_cal_ext
   88EE 79 92              2447 	mov	r1,#(_all_cal_ext >> 8)
   88F0 7A 01              2448 	mov	r2,#(_all_cal_ext >> 16)
   88F2 12 00 B3           2449 	lcall	__sdcc_banked_call
                           2450 ;	../../shared/src/cal_top.c:129: goto skip_out; //test
   88F5 02 8E 4F           2451 	ljmp	00278$
   88F8                    2452 00133$:
                           2453 ;	../../shared/src/cal_top.c:132: reg_RX_INIT_DONE_LANE = 0; //??	
   88F8 90 21 02           2454 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   88FB E0                 2455 	movx	a,@dptr
   88FC 54 F7              2456 	anl	a,#0xf7
   88FE F0                 2457 	movx	@dptr,a
                           2458 ;	../../shared/src/cal_top.c:134: reg_ANA_TX_IDLE_FORCE_LANE = 1;
   88FF 90 20 03           2459 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0003)
   8902 E0                 2460 	movx	a,@dptr
   8903 44 04              2461 	orl	a,#0x04
   8905 F0                 2462 	movx	@dptr,a
                           2463 ;	../../shared/src/cal_top.c:135: reg_ANA_TX_IDLE_LANE = 1;
   8906 90 20 03           2464 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0003)
   8909 E0                 2465 	movx	a,@dptr
   890A 44 01              2466 	orl	a,#0x01
   890C F0                 2467 	movx	@dptr,a
                           2468 ;	../../shared/src/cal_top.c:136: reg_EOM_CLK_EN_LANE = 1;
   890D 90 02 18           2469 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_134
   8910 E0                 2470 	movx	a,@dptr
   8911 44 04              2471 	orl	a,#0x04
   8913 F0                 2472 	movx	@dptr,a
                           2473 ;	../../shared/src/cal_top.c:137: reg_TX_TDTAP_SEL_LANE = 0;
   8914 90 02 44           2474 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_145
   8917 E0                 2475 	movx	a,@dptr
   8918 54 7F              2476 	anl	a,#0x7f
   891A F0                 2477 	movx	@dptr,a
                           2478 ;	../../shared/src/cal_top.c:138: lnx_DLL_VDDA_TRACKING_ON_LANE = 0;
   891B 90 60 0A           2479 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0002)
   891E E0                 2480 	movx	a,@dptr
   891F 54 DF              2481 	anl	a,#0xdf
   8921 F0                 2482 	movx	@dptr,a
                           2483 ;	../../shared/src/cal_top.c:141: reg_MCU_DEBUG0_LANE_7_0 = 0x31;
   8922 90 22 B4           2484 	mov	dptr,#_MCU_DEBUG0_LANE
   8925 74 31              2485 	mov	a,#0x31
   8927 F0                 2486 	movx	@dptr,a
                           2487 ;	../../shared/src/cal_top.c:142: reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
   8928 90 67 8C           2488 	mov	dptr,#_gen_pll_rate
   892B E0                 2489 	movx	a,@dptr
   892C FB                 2490 	mov	r3,a
   892D 90 22 B7           2491 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0003)
   8930 F0                 2492 	movx	@dptr,a
                           2493 ;	../../shared/src/cal_top.c:143: reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
   8931 A2 12              2494 	mov	c,_ring_pll_enabled
   8933 E4                 2495 	clr	a
   8934 33                 2496 	rlc	a
   8935 90 22 B9           2497 	mov	dptr,#(_MCU_DEBUG1_LANE + 0x0001)
   8938 F0                 2498 	movx	@dptr,a
                           2499 ;	../../shared/src/cal_top.c:144: reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
   8939 A2 10              2500 	mov	c,_use_ring_pll
   893B E4                 2501 	clr	a
   893C 33                 2502 	rlc	a
   893D 90 22 BA           2503 	mov	dptr,#(_MCU_DEBUG1_LANE + 0x0002)
   8940 F0                 2504 	movx	@dptr,a
                           2505 ;	../../shared/src/cal_top.c:145: reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;
   8941 90 66 24           2506 	mov	dptr,#_ring_lane_sel
   8944 E0                 2507 	movx	a,@dptr
   8945 90 22 BC           2508 	mov	dptr,#_MCU_DEBUG2_LANE
   8948 F0                 2509 	movx	@dptr,a
                           2510 ;	../../shared/src/cal_top.c:146: reg_MCU_DEBUG9_LANE_7_0 = slave_phy_on;
   8949 90 66 1C           2511 	mov	dptr,#_slave_phy_on
   894C E0                 2512 	movx	a,@dptr
   894D 90 22 BD           2513 	mov	dptr,#(_MCU_DEBUG2_LANE + 0x0001)
   8950 F0                 2514 	movx	@dptr,a
                           2515 ;	../../shared/src/cal_top.c:152: if ((gen_pll_rate!=pre_gen_pll_rate && SPDCHG_ON_READ) || 
   8951 90 67 8D           2516 	mov	dptr,#_pre_gen_pll_rate
   8954 E0                 2517 	movx	a,@dptr
   8955 FC                 2518 	mov	r4,a
   8956 EB                 2519 	mov	a,r3
   8957 B5 04 02           2520 	cjne	a,ar4,00417$
   895A 80 0D              2521 	sjmp	00179$
   895C                    2522 00417$:
   895C 90 22 38           2523 	mov	dptr,#_MCU_STATUS2_LANE
   895F E0                 2524 	movx	a,@dptr
   8960 FB                 2525 	mov	r3,a
   8961 53 03 01           2526 	anl	ar3,#0x01
   8964 BB 01 02           2527 	cjne	r3,#0x01,00418$
   8967 80 18              2528 	sjmp	00176$
   8969                    2529 00418$:
   8969                    2530 00179$:
                           2531 ;	../../shared/src/cal_top.c:154: (!SPDCHG_ON_READ) || phy_mode!=SERDES) {
   8969 90 22 38           2532 	mov	dptr,#_MCU_STATUS2_LANE
   896C E0                 2533 	movx	a,@dptr
   896D FB                 2534 	mov	r3,a
   896E 53 03 01           2535 	anl	ar3,#0x01
   8971 BB 01 0D           2536 	cjne	r3,#0x01,00176$
   8974 90 A3 16           2537 	mov	dptr,#(_SYSTEM + 0x0002)
   8977 E0                 2538 	movx	a,@dptr
   8978 54 07              2539 	anl	a,#0x07
   897A FB                 2540 	mov	r3,a
   897B BB 04 03           2541 	cjne	r3,#0x04,00421$
   897E 02 8B 61           2542 	ljmp	00177$
   8981                    2543 00421$:
   8981                    2544 00176$:
                           2545 ;	../../shared/src/cal_top.c:156: if( mcuid== master_mcu ) {
   8981 90 22 00           2546 	mov	dptr,#_MCU_CONTROL_LANE
   8984 E0                 2547 	movx	a,@dptr
   8985 FB                 2548 	mov	r3,a
   8986 90 E6 50           2549 	mov	dptr,#_MCU_CONFIG
   8989 E0                 2550 	movx	a,@dptr
   898A FC                 2551 	mov	r4,a
   898B EB                 2552 	mov	a,r3
   898C B5 04 2D           2553 	cjne	a,ar4,00137$
                           2554 ;	../../shared/src/cal_top.c:157: cmx_CAL_START=0;
   898F 90 E6 08           2555 	mov	dptr,#_CONTROL_CONFIG1
   8992 E0                 2556 	movx	a,@dptr
   8993 54 FE              2557 	anl	a,#0xfe
   8995 F0                 2558 	movx	@dptr,a
                           2559 ;	../../shared/src/cal_top.c:159: if(!SPDCHG_ON_READ)	proc_cal();
   8996 90 22 38           2560 	mov	dptr,#_MCU_STATUS2_LANE
   8999 E0                 2561 	movx	a,@dptr
   899A FB                 2562 	mov	r3,a
   899B 53 03 01           2563 	anl	ar3,#0x01
   899E BB 01 02           2564 	cjne	r3,#0x01,00424$
   89A1 80 09              2565 	sjmp	00135$
   89A3                    2566 00424$:
   89A3 78 3B              2567 	mov	r0,#_proc_cal
   89A5 79 D5              2568 	mov	r1,#(_proc_cal >> 8)
   89A7 7A 02              2569 	mov	r2,#(_proc_cal >> 16)
   89A9 12 00 B3           2570 	lcall	__sdcc_banked_call
   89AC                    2571 00135$:
                           2572 ;	../../shared/src/cal_top.c:161: reg_RING_PLL_DISABLE = !ring_pll_enabled;
   89AC A2 12              2573 	mov	c,_ring_pll_enabled
   89AE B3                 2574 	cpl	c
   89AF 92 28              2575 	mov  b0,c
   89B1 E4                 2576 	clr	a
   89B2 33                 2577 	rlc	a
   89B3 FB                 2578 	mov	r3,a
   89B4 90 A3 24           2579 	mov	dptr,#_INPUT_CMN_PIN_REG2
   89B7 13                 2580 	rrc	a
   89B8 E0                 2581 	movx	a,@dptr
   89B9 92 E0              2582 	mov	acc.0,c
   89BB F0                 2583 	movx	@dptr,a
   89BC                    2584 00137$:
                           2585 ;	../../shared/src/cal_top.c:164: mcu_align_0(10);
   89BC 75 82 0A           2586 	mov	dpl,#0x0A
   89BF 78 49              2587 	mov	r0,#_mcu_align_0
   89C1 79 92              2588 	mov	r1,#(_mcu_align_0 >> 8)
   89C3 7A 01              2589 	mov	r2,#(_mcu_align_0 >> 16)
   89C5 12 00 B3           2590 	lcall	__sdcc_banked_call
                           2591 ;	../../shared/src/cal_top.c:170: if (mcuid == master_mcu) {
   89C8 90 22 00           2592 	mov	dptr,#_MCU_CONTROL_LANE
   89CB E0                 2593 	movx	a,@dptr
   89CC FB                 2594 	mov	r3,a
   89CD 90 E6 50           2595 	mov	dptr,#_MCU_CONFIG
   89D0 E0                 2596 	movx	a,@dptr
   89D1 FC                 2597 	mov	r4,a
   89D2 EB                 2598 	mov	a,r3
   89D3 B5 04 02           2599 	cjne	a,ar4,00425$
   89D6 80 03              2600 	sjmp	00426$
   89D8                    2601 00425$:
   89D8 02 8A D8           2602 	ljmp	00162$
   89DB                    2603 00426$:
                           2604 ;	../../shared/src/cal_top.c:176: pll_clk_ready_0();
   89DB 78 77              2605 	mov	r0,#_pll_clk_ready_0
   89DD 79 D4              2606 	mov	r1,#(_pll_clk_ready_0 >> 8)
   89DF 7A 02              2607 	mov	r2,#(_pll_clk_ready_0 >> 16)
   89E1 12 00 B3           2608 	lcall	__sdcc_banked_call
                           2609 ;	../../shared/src/cal_top.c:178: if(phy_mode==PCIE || phy_mode<=SAS) rate = 1;
   89E4 90 A3 16           2610 	mov	dptr,#(_SYSTEM + 0x0002)
   89E7 E0                 2611 	movx	a,@dptr
   89E8 54 07              2612 	anl	a,#0x07
   89EA FB                 2613 	mov	r3,a
   89EB BB 03 02           2614 	cjne	r3,#0x03,00427$
   89EE 80 13              2615 	sjmp	00138$
   89F0                    2616 00427$:
   89F0 90 A3 16           2617 	mov	dptr,#(_SYSTEM + 0x0002)
   89F3 E0                 2618 	movx	a,@dptr
   89F4 54 07              2619 	anl	a,#0x07
   89F6 FB                 2620 	mov	r3,a
   89F7 C3                 2621 	clr	c
   89F8 74 81              2622 	mov	a,#(0x01 ^ 0x80)
   89FA 8B F0              2623 	mov	b,r3
   89FC 63 F0 80           2624 	xrl	b,#0x80
   89FF 95 F0              2625 	subb	a,b
   8A01 40 04              2626 	jc	00139$
   8A03                    2627 00138$:
   8A03 7B 01              2628 	mov	r3,#0x01
   8A05 80 02              2629 	sjmp	00332$
   8A07                    2630 00139$:
                           2631 ;	../../shared/src/cal_top.c:179: else rate = 0;
   8A07 7B 00              2632 	mov	r3,#0x00
                           2633 ;	../../shared/src/cal_top.c:180: for(inx=0; inx<2; inx++) {
   8A09                    2634 00332$:
   8A09 7C 00              2635 	mov	r4,#0x00
   8A0B                    2636 00155$:
   8A0B BC 02 00           2637 	cjne	r4,#0x02,00429$
   8A0E                    2638 00429$:
   8A0E 40 03              2639 	jc	00430$
   8A10 02 8A C4           2640 	ljmp	00158$
   8A13                    2641 00430$:
                           2642 ;	../../shared/src/cal_top.c:182: reg_MCU_DEBUG0_LANE_7_0 = 0x10;
   8A13 90 22 B4           2643 	mov	dptr,#_MCU_DEBUG0_LANE
   8A16 74 10              2644 	mov	a,#0x10
   8A18 F0                 2645 	movx	@dptr,a
                           2646 ;	../../shared/src/cal_top.c:183: reg_MCU_DEBUG6_LANE_7_0 = rate + 0x70;
   8A19 74 70              2647 	mov	a,#0x70
   8A1B 2B                 2648 	add	a,r3
   8A1C 90 22 BA           2649 	mov	dptr,#(_MCU_DEBUG1_LANE + 0x0002)
   8A1F F0                 2650 	movx	@dptr,a
                           2651 ;	../../shared/src/cal_top.c:185: loadspeedtbl_pll(rate);
   8A20 8B 82              2652 	mov	dpl,r3
   8A22 C0 04              2653 	push	ar4
   8A24 12 39 86           2654 	lcall	_loadspeedtbl_pll
                           2655 ;	../../shared/src/cal_top.c:186: load_init_temp_table();
   8A27 78 7B              2656 	mov	r0,#_load_init_temp_table
   8A29 79 D1              2657 	mov	r1,#(_load_init_temp_table >> 8)
   8A2B 7A 02              2658 	mov	r2,#(_load_init_temp_table >> 16)
   8A2D 12 00 B3           2659 	lcall	__sdcc_banked_call
   8A30 D0 04              2660 	pop	ar4
                           2661 ;	../../shared/src/cal_top.c:188: if(slave_phy_on==0) {
   8A32 90 66 1C           2662 	mov	dptr,#_slave_phy_on
   8A35 E0                 2663 	movx	a,@dptr
   8A36 FD                 2664 	mov	r5,a
   8A37 70 53              2665 	jnz	00146$
                           2666 ;	../../shared/src/cal_top.c:189: pll_clk_ready_0();
   8A39 C0 04              2667 	push	ar4
   8A3B 78 77              2668 	mov	r0,#_pll_clk_ready_0
   8A3D 79 D4              2669 	mov	r1,#(_pll_clk_ready_0 >> 8)
   8A3F 7A 02              2670 	mov	r2,#(_pll_clk_ready_0 >> 16)
   8A41 12 00 B3           2671 	lcall	__sdcc_banked_call
                           2672 ;	../../shared/src/cal_top.c:190: reg_RESET_ANA = 0;
   8A44 90 A3 19           2673 	mov	dptr,#(_PM_CMN_REG1 + 0x0001)
   8A47 E0                 2674 	movx	a,@dptr
   8A48 54 EF              2675 	anl	a,#0xef
   8A4A F0                 2676 	movx	@dptr,a
                           2677 ;	../../shared/src/cal_top.c:191: pll_cal();
   8A4B 78 CC              2678 	mov	r0,#_pll_cal
   8A4D 79 CC              2679 	mov	r1,#(_pll_cal >> 8)
   8A4F 7A 01              2680 	mov	r2,#(_pll_cal >> 16)
   8A51 12 00 B3           2681 	lcall	__sdcc_banked_call
                           2682 ;	../../shared/src/cal_top.c:192: pll_clk_ready_1();
   8A54 78 47              2683 	mov	r0,#_pll_clk_ready_1
   8A56 79 D4              2684 	mov	r1,#(_pll_clk_ready_1 >> 8)
   8A58 7A 02              2685 	mov	r2,#(_pll_clk_ready_1 >> 16)
   8A5A 12 00 B3           2686 	lcall	__sdcc_banked_call
   8A5D D0 04              2687 	pop	ar4
                           2688 ;	../../shared/src/cal_top.c:196: if (reg_LCPLLCLK_DIV2_SEL == 0) {
   8A5F 90 83 3C           2689 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_207
   8A62 E0                 2690 	movx	a,@dptr
   8A63 20 E1 19           2691 	jb	acc.1,00143$
                           2692 ;	../../shared/src/cal_top.c:197: reg_LCPLL_DCC_5_0 = 0x20; //if LCPLLCLK_DIV2_SEL=0, need to set default
   8A66 90 82 D8           2693 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_182
   8A69 E0                 2694 	movx	a,@dptr
   8A6A 54 03              2695 	anl	a,#0x03
   8A6C 44 80              2696 	orl	a,#0x80
   8A6E F0                 2697 	movx	@dptr,a
                           2698 ;	../../shared/src/cal_top.c:198: cmx_PLLDCC_CAL_DONE = 1; cmx_PLLDCC_CAL_PASS = 1;
   8A6F 90 E6 4C           2699 	mov	dptr,#_CAL_STATUS_READ
   8A72 E0                 2700 	movx	a,@dptr
   8A73 44 02              2701 	orl	a,#0x02
   8A75 F0                 2702 	movx	@dptr,a
   8A76 90 E6 4D           2703 	mov	dptr,#(_CAL_STATUS_READ + 0x0001)
   8A79 E0                 2704 	movx	a,@dptr
   8A7A 44 04              2705 	orl	a,#0x04
   8A7C F0                 2706 	movx	@dptr,a
   8A7D 80 0D              2707 	sjmp	00146$
   8A7F                    2708 00143$:
                           2709 ;	../../shared/src/cal_top.c:202: plldcc_cal();
   8A7F C0 04              2710 	push	ar4
   8A81 78 74              2711 	mov	r0,#_plldcc_cal
   8A83 79 C9              2712 	mov	r1,#(_plldcc_cal >> 8)
   8A85 7A 02              2713 	mov	r2,#(_plldcc_cal >> 16)
   8A87 12 00 B3           2714 	lcall	__sdcc_banked_call
   8A8A D0 04              2715 	pop	ar4
   8A8C                    2716 00146$:
                           2717 ;	../../shared/src/cal_top.c:205: if( no_pllspdchg ) break; //SERDES always use LC PLL rate0
   8A8C 20 15 35           2718 	jb	_no_pllspdchg,00158$
                           2719 ;	../../shared/src/cal_top.c:206: if( phy_mode == SERDES ) break;
   8A8F 90 A3 16           2720 	mov	dptr,#(_SYSTEM + 0x0002)
   8A92 E0                 2721 	movx	a,@dptr
   8A93 54 07              2722 	anl	a,#0x07
   8A95 FD                 2723 	mov	r5,a
   8A96 BD 04 02           2724 	cjne	r5,#0x04,00434$
   8A99 80 29              2725 	sjmp	00158$
   8A9B                    2726 00434$:
                           2727 ;	../../shared/src/cal_top.c:209: if(phy_mode==PCIE  || phy_mode<=SAS) rate = 0;
   8A9B 90 A3 16           2728 	mov	dptr,#(_SYSTEM + 0x0002)
   8A9E E0                 2729 	movx	a,@dptr
   8A9F 54 07              2730 	anl	a,#0x07
   8AA1 FD                 2731 	mov	r5,a
   8AA2 BD 03 02           2732 	cjne	r5,#0x03,00435$
   8AA5 80 13              2733 	sjmp	00151$
   8AA7                    2734 00435$:
   8AA7 90 A3 16           2735 	mov	dptr,#(_SYSTEM + 0x0002)
   8AAA E0                 2736 	movx	a,@dptr
   8AAB 54 07              2737 	anl	a,#0x07
   8AAD FD                 2738 	mov	r5,a
   8AAE C3                 2739 	clr	c
   8AAF 74 81              2740 	mov	a,#(0x01 ^ 0x80)
   8AB1 8D F0              2741 	mov	b,r5
   8AB3 63 F0 80           2742 	xrl	b,#0x80
   8AB6 95 F0              2743 	subb	a,b
   8AB8 40 04              2744 	jc	00152$
   8ABA                    2745 00151$:
   8ABA 7B 00              2746 	mov	r3,#0x00
   8ABC 80 02              2747 	sjmp	00157$
   8ABE                    2748 00152$:
                           2749 ;	../../shared/src/cal_top.c:210: else rate = 1;
   8ABE 7B 01              2750 	mov	r3,#0x01
   8AC0                    2751 00157$:
                           2752 ;	../../shared/src/cal_top.c:180: for(inx=0; inx<2; inx++) {
   8AC0 0C                 2753 	inc	r4
   8AC1 02 8A 0B           2754 	ljmp	00155$
   8AC4                    2755 00158$:
                           2756 ;	../../shared/src/cal_top.c:216: if(slave_phy_on==0) PHY_STATUS_INT |= LCPLL_CAL_LOOP_DONE;
   8AC4 90 66 1C           2757 	mov	dptr,#_slave_phy_on
   8AC7 E0                 2758 	movx	a,@dptr
   8AC8 FB                 2759 	mov	r3,a
   8AC9 70 0D              2760 	jnz	00162$
   8ACB 90 22 38           2761 	mov	dptr,#_MCU_STATUS2_LANE
   8ACE E0                 2762 	movx	a,@dptr
   8ACF FB                 2763 	mov	r3,a
   8AD0 43 03 02           2764 	orl	ar3,#0x02
   8AD3 90 22 38           2765 	mov	dptr,#_MCU_STATUS2_LANE
   8AD6 EB                 2766 	mov	a,r3
   8AD7 F0                 2767 	movx	@dptr,a
   8AD8                    2768 00162$:
                           2769 ;	../../shared/src/cal_top.c:221: mcu_align_0(11);
   8AD8 75 82 0B           2770 	mov	dpl,#0x0B
   8ADB 78 49              2771 	mov	r0,#_mcu_align_0
   8ADD 79 92              2772 	mov	r1,#(_mcu_align_0 >> 8)
   8ADF 7A 01              2773 	mov	r2,#(_mcu_align_0 >> 16)
   8AE1 12 00 B3           2774 	lcall	__sdcc_banked_call
                           2775 ;	../../shared/src/cal_top.c:224: if( ring_lane_sel ) {
   8AE4 90 66 24           2776 	mov	dptr,#_ring_lane_sel
   8AE7 E0                 2777 	movx	a,@dptr
   8AE8 FB                 2778 	mov	r3,a
   8AE9 60 76              2779 	jz	00177$
                           2780 ;	../../shared/src/cal_top.c:227: if( ring_pll_enabled ) {
   8AEB 30 12 6C           2781 	jnb	_ring_pll_enabled,00172$
                           2782 ;	../../shared/src/cal_top.c:229: pll_clk_ready_ring_0();
   8AEE 78 8F              2783 	mov	r0,#_pll_clk_ready_ring_0
   8AF0 79 D4              2784 	mov	r1,#(_pll_clk_ready_ring_0 >> 8)
   8AF2 7A 02              2785 	mov	r2,#(_pll_clk_ready_ring_0 >> 16)
   8AF4 12 00 B3           2786 	lcall	__sdcc_banked_call
                           2787 ;	../../shared/src/cal_top.c:231: for(rate=0; rate<2; rate++) {
   8AF7 7B 00              2788 	mov	r3,#0x00
   8AF9                    2789 00167$:
   8AF9 BB 02 00           2790 	cjne	r3,#0x02,00440$
   8AFC                    2791 00440$:
   8AFC 50 51              2792 	jnc	00170$
                           2793 ;	../../shared/src/cal_top.c:236: loadspeedtbl_ringpll(rate);
   8AFE 8B 82              2794 	mov	dpl,r3
   8B00 C0 03              2795 	push	ar3
   8B02 12 3D 59           2796 	lcall	_loadspeedtbl_ringpll
                           2797 ;	../../shared/src/cal_top.c:245: reg_ANA_PU_PLL_RING = 1;
   8B05 90 A3 24           2798 	mov	dptr,#_INPUT_CMN_PIN_REG2
   8B08 E0                 2799 	movx	a,@dptr
   8B09 44 20              2800 	orl	a,#0x20
   8B0B F0                 2801 	movx	@dptr,a
                           2802 ;	../../shared/src/cal_top.c:246: delay01(5);
   8B0C 90 00 05           2803 	mov	dptr,#0x0005
   8B0F 78 16              2804 	mov	r0,#_delay01
   8B11 79 BC              2805 	mov	r1,#(_delay01 >> 8)
   8B13 7A 02              2806 	mov	r2,#(_delay01 >> 16)
   8B15 12 00 B3           2807 	lcall	__sdcc_banked_call
                           2808 ;	../../shared/src/cal_top.c:247: reg_ANA_PU_PLL_DLY_RING = 1;
   8B18 90 A3 4D           2809 	mov	dptr,#(_PM_CMN_REG2 + 0x0001)
   8B1B E0                 2810 	movx	a,@dptr
   8B1C 44 04              2811 	orl	a,#0x04
   8B1E F0                 2812 	movx	@dptr,a
                           2813 ;	../../shared/src/cal_top.c:248: delay01(5);
   8B1F 90 00 05           2814 	mov	dptr,#0x0005
   8B22 78 16              2815 	mov	r0,#_delay01
   8B24 79 BC              2816 	mov	r1,#(_delay01 >> 8)
   8B26 7A 02              2817 	mov	r2,#(_delay01 >> 16)
   8B28 12 00 B3           2818 	lcall	__sdcc_banked_call
                           2819 ;	../../shared/src/cal_top.c:249: reg_RESET_ANA_RING = 0;
   8B2B 90 A3 33           2820 	mov	dptr,#(_PLLCAL_REG1 + 0x0003)
   8B2E E0                 2821 	movx	a,@dptr
   8B2F 54 F7              2822 	anl	a,#0xf7
   8B31 F0                 2823 	movx	@dptr,a
                           2824 ;	../../shared/src/cal_top.c:253: ring_pll_cal();
   8B32 78 2D              2825 	mov	r0,#_ring_pll_cal
   8B34 79 D8              2826 	mov	r1,#(_ring_pll_cal >> 8)
   8B36 7A 01              2827 	mov	r2,#(_ring_pll_cal >> 16)
   8B38 12 00 B3           2828 	lcall	__sdcc_banked_call
   8B3B D0 03              2829 	pop	ar3
                           2830 ;	../../shared/src/cal_top.c:255: if( no_pllspdchg ) break;  
   8B3D 20 15 0F           2831 	jb	_no_pllspdchg,00170$
                           2832 ;	../../shared/src/cal_top.c:256: if( phy_mode == SERDES ) break; //SERDAS always use rate0
   8B40 90 A3 16           2833 	mov	dptr,#(_SYSTEM + 0x0002)
   8B43 E0                 2834 	movx	a,@dptr
   8B44 54 07              2835 	anl	a,#0x07
   8B46 FC                 2836 	mov	r4,a
   8B47 BC 04 02           2837 	cjne	r4,#0x04,00443$
   8B4A 80 03              2838 	sjmp	00170$
   8B4C                    2839 00443$:
                           2840 ;	../../shared/src/cal_top.c:231: for(rate=0; rate<2; rate++) {
   8B4C 0B                 2841 	inc	r3
   8B4D 80 AA              2842 	sjmp	00167$
   8B4F                    2843 00170$:
                           2844 ;	../../shared/src/cal_top.c:262: pll_clk_ready_ring_1();
   8B4F 78 A7              2845 	mov	r0,#_pll_clk_ready_ring_1
   8B51 79 D4              2846 	mov	r1,#(_pll_clk_ready_ring_1 >> 8)
   8B53 7A 02              2847 	mov	r2,#(_pll_clk_ready_ring_1 >> 16)
   8B55 12 00 B3           2848 	lcall	__sdcc_banked_call
   8B58 80 07              2849 	sjmp	00177$
   8B5A                    2850 00172$:
                           2851 ;	../../shared/src/cal_top.c:265: else reg_RING_PLL_DISABLE = 1;
   8B5A 90 A3 24           2852 	mov	dptr,#_INPUT_CMN_PIN_REG2
   8B5D E0                 2853 	movx	a,@dptr
   8B5E 44 01              2854 	orl	a,#0x01
   8B60 F0                 2855 	movx	@dptr,a
   8B61                    2856 00177$:
                           2857 ;	../../shared/src/cal_top.c:271: mcu_align_0(12);
   8B61 75 82 0C           2858 	mov	dpl,#0x0C
   8B64 78 49              2859 	mov	r0,#_mcu_align_0
   8B66 79 92              2860 	mov	r1,#(_mcu_align_0 >> 8)
   8B68 7A 01              2861 	mov	r2,#(_mcu_align_0 >> 16)
   8B6A 12 00 B3           2862 	lcall	__sdcc_banked_call
                           2863 ;	../../shared/src/cal_top.c:274: for(genno = min_gen; genno<=max_gen; genno++)  
   8B6D 90 63 01           2864 	mov	dptr,#_min_gen
   8B70 E0                 2865 	movx	a,@dptr
   8B71 FB                 2866 	mov	r3,a
   8B72 FA                 2867 	mov	r2,a
   8B73                    2868 00222$:
   8B73 90 63 00           2869 	mov	dptr,#_max_gen
   8B76 E0                 2870 	movx	a,@dptr
   8B77 FB                 2871 	mov	r3,a
   8B78 B5 02 00           2872 	cjne	a,ar2,00444$
   8B7B                    2873 00444$:
   8B7B 50 03              2874 	jnc	00445$
   8B7D 02 8C FA           2875 	ljmp	00225$
   8B80                    2876 00445$:
                           2877 ;	../../shared/src/cal_top.c:276: gen_rx = genno;	gen_tx = genno;
   8B80 90 66 16           2878 	mov	dptr,#_gen_rx
   8B83 EA                 2879 	mov	a,r2
   8B84 F0                 2880 	movx	@dptr,a
   8B85 90 66 15           2881 	mov	dptr,#_gen_tx
   8B88 EA                 2882 	mov	a,r2
   8B89 F0                 2883 	movx	@dptr,a
                           2884 ;	../../shared/src/cal_top.c:278: if(phy_mode==SERDES) { //serdes need to calibrate on own speed
   8B8A 90 A3 16           2885 	mov	dptr,#(_SYSTEM + 0x0002)
   8B8D E0                 2886 	movx	a,@dptr
   8B8E 54 07              2887 	anl	a,#0x07
   8B90 FB                 2888 	mov	r3,a
   8B91 BB 04 09           2889 	cjne	r3,#0x04,00182$
                           2890 ;	../../shared/src/cal_top.c:279: loadspeedtbl_gen();
   8B94 C0 02              2891 	push	ar2
   8B96 12 43 41           2892 	lcall	_loadspeedtbl_gen
   8B99 D0 02              2893 	pop	ar2
   8B9B 80 07              2894 	sjmp	00183$
   8B9D                    2895 00182$:
                           2896 ;	../../shared/src/cal_top.c:282: loadSpeedtbl();
   8B9D C0 02              2897 	push	ar2
   8B9F 12 4F E6           2898 	lcall	_loadSpeedtbl
   8BA2 D0 02              2899 	pop	ar2
   8BA4                    2900 00183$:
                           2901 ;	../../shared/src/cal_top.c:292: if(!SPDCHG_ON_READ)
   8BA4 90 22 38           2902 	mov	dptr,#_MCU_STATUS2_LANE
   8BA7 E0                 2903 	movx	a,@dptr
   8BA8 FB                 2904 	mov	r3,a
   8BA9 53 03 01           2905 	anl	ar3,#0x01
   8BAC BB 01 02           2906 	cjne	r3,#0x01,00448$
   8BAF 80 70              2907 	sjmp	00201$
   8BB1                    2908 00448$:
                           2909 ;	../../shared/src/cal_top.c:294: mcu_align_0(20);
   8BB1 75 82 14           2910 	mov	dpl,#0x14
   8BB4 C0 02              2911 	push	ar2
   8BB6 78 49              2912 	mov	r0,#_mcu_align_0
   8BB8 79 92              2913 	mov	r1,#(_mcu_align_0 >> 8)
   8BBA 7A 01              2914 	mov	r2,#(_mcu_align_0 >> 16)
   8BBC 12 00 B3           2915 	lcall	__sdcc_banked_call
   8BBF D0 02              2916 	pop	ar2
                           2917 ;	../../shared/src/cal_top.c:296: if( mcu_en0) {
   8BC1 90 E6 BE           2918 	mov	dptr,#(_MCU_INFO_12 + 0x0002)
   8BC4 E0                 2919 	movx	a,@dptr
   8BC5 60 29              2920 	jz	00191$
                           2921 ;	../../shared/src/cal_top.c:297: if( mcuid==MCU_LANE0)	{
   8BC7 90 22 00           2922 	mov	dptr,#_MCU_CONTROL_LANE
   8BCA E0                 2923 	movx	a,@dptr
   8BCB 70 1B              2924 	jnz	00184$
                           2925 ;	../../shared/src/cal_top.c:298: vdd_cal();
   8BCD C0 02              2926 	push	ar2
   8BCF 78 45              2927 	mov	r0,#_vdd_cal
   8BD1 79 E7              2928 	mov	r1,#(_vdd_cal >> 8)
   8BD3 7A 02              2929 	mov	r2,#(_vdd_cal >> 16)
   8BD5 12 00 B3           2930 	lcall	__sdcc_banked_call
                           2931 ;	../../shared/src/cal_top.c:300: phy_check_lane(1);
   8BD8 75 82 01           2932 	mov	dpl,#0x01
   8BDB 78 2D              2933 	mov	r0,#_phy_check_lane
   8BDD 79 92              2934 	mov	r1,#(_phy_check_lane >> 8)
   8BDF 7A 01              2935 	mov	r2,#(_phy_check_lane >> 16)
   8BE1 12 00 B3           2936 	lcall	__sdcc_banked_call
   8BE4 D0 02              2937 	pop	ar2
                           2938 ;	../../shared/src/cal_top.c:302: else while(PHY_CHECK_LANE0_READ!=1);
   8BE6 80 08              2939 	sjmp	00191$
   8BE8                    2940 00184$:
   8BE8 90 E6 B6           2941 	mov	dptr,#(_MCU_INFO_4 + 0x0002)
   8BEB E0                 2942 	movx	a,@dptr
   8BEC FB                 2943 	mov	r3,a
   8BED BB 01 F8           2944 	cjne	r3,#0x01,00184$
   8BF0                    2945 00191$:
                           2946 ;	../../shared/src/cal_top.c:305: if( mcu_en1) {
   8BF0 90 E6 C2           2947 	mov	dptr,#(_MCU_INFO_13 + 0x0002)
   8BF3 E0                 2948 	movx	a,@dptr
   8BF4 60 2B              2949 	jz	00201$
                           2950 ;	../../shared/src/cal_top.c:306: if( mcuid==MCU_LANE1)	{
   8BF6 90 22 00           2951 	mov	dptr,#_MCU_CONTROL_LANE
   8BF9 E0                 2952 	movx	a,@dptr
   8BFA FB                 2953 	mov	r3,a
   8BFB BB 01 1B           2954 	cjne	r3,#0x01,00192$
                           2955 ;	../../shared/src/cal_top.c:307: vdd_cal();
   8BFE C0 02              2956 	push	ar2
   8C00 78 45              2957 	mov	r0,#_vdd_cal
   8C02 79 E7              2958 	mov	r1,#(_vdd_cal >> 8)
   8C04 7A 02              2959 	mov	r2,#(_vdd_cal >> 16)
   8C06 12 00 B3           2960 	lcall	__sdcc_banked_call
                           2961 ;	../../shared/src/cal_top.c:309: phy_check_lane(1);
   8C09 75 82 01           2962 	mov	dpl,#0x01
   8C0C 78 2D              2963 	mov	r0,#_phy_check_lane
   8C0E 79 92              2964 	mov	r1,#(_phy_check_lane >> 8)
   8C10 7A 01              2965 	mov	r2,#(_phy_check_lane >> 16)
   8C12 12 00 B3           2966 	lcall	__sdcc_banked_call
   8C15 D0 02              2967 	pop	ar2
                           2968 ;	../../shared/src/cal_top.c:311: else while(PHY_CHECK_LANE1_READ!=1);
   8C17 80 08              2969 	sjmp	00201$
   8C19                    2970 00192$:
   8C19 90 E6 BA           2971 	mov	dptr,#(_MCU_INFO_5 + 0x0002)
   8C1C E0                 2972 	movx	a,@dptr
   8C1D FB                 2973 	mov	r3,a
   8C1E BB 01 F8           2974 	cjne	r3,#0x01,00192$
   8C21                    2975 00201$:
                           2976 ;	../../shared/src/cal_top.c:335: if(!SPDCHG_ON_READ)
   8C21 90 22 38           2977 	mov	dptr,#_MCU_STATUS2_LANE
   8C24 E0                 2978 	movx	a,@dptr
   8C25 FB                 2979 	mov	r3,a
   8C26 53 03 01           2980 	anl	ar3,#0x01
   8C29 BB 01 02           2981 	cjne	r3,#0x01,00458$
   8C2C 80 70              2982 	sjmp	00219$
   8C2E                    2983 00458$:
                           2984 ;	../../shared/src/cal_top.c:337: mcu_align_0(21);
   8C2E 75 82 15           2985 	mov	dpl,#0x15
   8C31 C0 02              2986 	push	ar2
   8C33 78 49              2987 	mov	r0,#_mcu_align_0
   8C35 79 92              2988 	mov	r1,#(_mcu_align_0 >> 8)
   8C37 7A 01              2989 	mov	r2,#(_mcu_align_0 >> 16)
   8C39 12 00 B3           2990 	lcall	__sdcc_banked_call
   8C3C D0 02              2991 	pop	ar2
                           2992 ;	../../shared/src/cal_top.c:339: if( mcu_en0) {
   8C3E 90 E6 BE           2993 	mov	dptr,#(_MCU_INFO_12 + 0x0002)
   8C41 E0                 2994 	movx	a,@dptr
   8C42 60 29              2995 	jz	00209$
                           2996 ;	../../shared/src/cal_top.c:340: if( mcuid==MCU_LANE0)	{
   8C44 90 22 00           2997 	mov	dptr,#_MCU_CONTROL_LANE
   8C47 E0                 2998 	movx	a,@dptr
   8C48 70 1B              2999 	jnz	00202$
                           3000 ;	../../shared/src/cal_top.c:341: txdetect_cal();
   8C4A C0 02              3001 	push	ar2
   8C4C 78 1C              3002 	mov	r0,#_txdetect_cal
   8C4E 79 E6              3003 	mov	r1,#(_txdetect_cal >> 8)
   8C50 7A 02              3004 	mov	r2,#(_txdetect_cal >> 16)
   8C52 12 00 B3           3005 	lcall	__sdcc_banked_call
                           3006 ;	../../shared/src/cal_top.c:343: phy_check_lane(2);
   8C55 75 82 02           3007 	mov	dpl,#0x02
   8C58 78 2D              3008 	mov	r0,#_phy_check_lane
   8C5A 79 92              3009 	mov	r1,#(_phy_check_lane >> 8)
   8C5C 7A 01              3010 	mov	r2,#(_phy_check_lane >> 16)
   8C5E 12 00 B3           3011 	lcall	__sdcc_banked_call
   8C61 D0 02              3012 	pop	ar2
                           3013 ;	../../shared/src/cal_top.c:345: else while(PHY_CHECK_LANE0_READ!=2);
   8C63 80 08              3014 	sjmp	00209$
   8C65                    3015 00202$:
   8C65 90 E6 B6           3016 	mov	dptr,#(_MCU_INFO_4 + 0x0002)
   8C68 E0                 3017 	movx	a,@dptr
   8C69 FB                 3018 	mov	r3,a
   8C6A BB 02 F8           3019 	cjne	r3,#0x02,00202$
   8C6D                    3020 00209$:
                           3021 ;	../../shared/src/cal_top.c:348: if( mcu_en1) {
   8C6D 90 E6 C2           3022 	mov	dptr,#(_MCU_INFO_13 + 0x0002)
   8C70 E0                 3023 	movx	a,@dptr
   8C71 60 2B              3024 	jz	00219$
                           3025 ;	../../shared/src/cal_top.c:349: if( mcuid==MCU_LANE1)	{
   8C73 90 22 00           3026 	mov	dptr,#_MCU_CONTROL_LANE
   8C76 E0                 3027 	movx	a,@dptr
   8C77 FB                 3028 	mov	r3,a
   8C78 BB 01 1B           3029 	cjne	r3,#0x01,00210$
                           3030 ;	../../shared/src/cal_top.c:350: txdetect_cal();
   8C7B C0 02              3031 	push	ar2
   8C7D 78 1C              3032 	mov	r0,#_txdetect_cal
   8C7F 79 E6              3033 	mov	r1,#(_txdetect_cal >> 8)
   8C81 7A 02              3034 	mov	r2,#(_txdetect_cal >> 16)
   8C83 12 00 B3           3035 	lcall	__sdcc_banked_call
                           3036 ;	../../shared/src/cal_top.c:352: phy_check_lane(2);
   8C86 75 82 02           3037 	mov	dpl,#0x02
   8C89 78 2D              3038 	mov	r0,#_phy_check_lane
   8C8B 79 92              3039 	mov	r1,#(_phy_check_lane >> 8)
   8C8D 7A 01              3040 	mov	r2,#(_phy_check_lane >> 16)
   8C8F 12 00 B3           3041 	lcall	__sdcc_banked_call
   8C92 D0 02              3042 	pop	ar2
                           3043 ;	../../shared/src/cal_top.c:354: else while(PHY_CHECK_LANE1_READ!=2);
   8C94 80 08              3044 	sjmp	00219$
   8C96                    3045 00210$:
   8C96 90 E6 BA           3046 	mov	dptr,#(_MCU_INFO_5 + 0x0002)
   8C99 E0                 3047 	movx	a,@dptr
   8C9A FB                 3048 	mov	r3,a
   8C9B BB 02 F8           3049 	cjne	r3,#0x02,00210$
   8C9E                    3050 00219$:
                           3051 ;	../../shared/src/cal_top.c:379: rxdcc_dll_cal();
   8C9E C0 02              3052 	push	ar2
   8CA0 78 09              3053 	mov	r0,#_rxdcc_dll_cal
   8CA2 79 9F              3054 	mov	r1,#(_rxdcc_dll_cal >> 8)
   8CA4 7A 02              3055 	mov	r2,#(_rxdcc_dll_cal >> 16)
   8CA6 12 00 B3           3056 	lcall	__sdcc_banked_call
                           3057 ;	../../shared/src/cal_top.c:380: dll_cal();
   8CA9 78 0C              3058 	mov	r0,#_dll_cal
   8CAB 79 AC              3059 	mov	r1,#(_dll_cal >> 8)
   8CAD 7A 01              3060 	mov	r2,#(_dll_cal >> 16)
   8CAF 12 00 B3           3061 	lcall	__sdcc_banked_call
                           3062 ;	../../shared/src/cal_top.c:381: rxdcc_data_cal();
   8CB2 78 5F              3063 	mov	r0,#_rxdcc_data_cal
   8CB4 79 A2              3064 	mov	r1,#(_rxdcc_data_cal >> 8)
   8CB6 7A 02              3065 	mov	r2,#(_rxdcc_data_cal >> 16)
   8CB8 12 00 B3           3066 	lcall	__sdcc_banked_call
                           3067 ;	../../shared/src/cal_top.c:382: rxdcc_eom_cal();
   8CBB 78 28              3068 	mov	r0,#_rxdcc_eom_cal
   8CBD 79 A6              3069 	mov	r1,#(_rxdcc_eom_cal >> 8)
   8CBF 7A 02              3070 	mov	r2,#(_rxdcc_eom_cal >> 16)
   8CC1 12 00 B3           3071 	lcall	__sdcc_banked_call
                           3072 ;	../../shared/src/cal_top.c:384: align90_comp_cal();
   8CC4 78 00              3073 	mov	r0,#_align90_comp_cal
   8CC6 79 80              3074 	mov	r1,#(_align90_comp_cal >> 8)
   8CC8 7A 02              3075 	mov	r2,#(_align90_comp_cal >> 16)
   8CCA 12 00 B3           3076 	lcall	__sdcc_banked_call
                           3077 ;	../../shared/src/cal_top.c:388: rxalign90_cal();
   8CCD 78 2C              3078 	mov	r0,#_rxalign90_cal
   8CCF 79 82              3079 	mov	r1,#(_rxalign90_cal >> 8)
   8CD1 7A 01              3080 	mov	r2,#(_rxalign90_cal >> 16)
   8CD3 12 00 B3           3081 	lcall	__sdcc_banked_call
                           3082 ;	../../shared/src/cal_top.c:389: txdcc_cal();
   8CD6 78 E5              3083 	mov	r0,#_txdcc_cal
   8CD8 79 97              3084 	mov	r1,#(_txdcc_cal >> 8)
   8CDA 7A 02              3085 	mov	r2,#(_txdcc_cal >> 16)
   8CDC 12 00 B3           3086 	lcall	__sdcc_banked_call
                           3087 ;	../../shared/src/cal_top.c:390: txdcc_pdiv_cal();
   8CDF 78 A5              3088 	mov	r0,#_txdcc_pdiv_cal
   8CE1 79 9B              3089 	mov	r1,#(_txdcc_pdiv_cal >> 8)
   8CE3 7A 02              3090 	mov	r2,#(_txdcc_pdiv_cal >> 16)
   8CE5 12 00 B3           3091 	lcall	__sdcc_banked_call
   8CE8 D0 02              3092 	pop	ar2
                           3093 ;	../../shared/src/cal_top.c:392: if( phy_mode==SERDES ) break; //SERDAS always use one gen
   8CEA 90 A3 16           3094 	mov	dptr,#(_SYSTEM + 0x0002)
   8CED E0                 3095 	movx	a,@dptr
   8CEE 54 07              3096 	anl	a,#0x07
   8CF0 FB                 3097 	mov	r3,a
   8CF1 BB 04 02           3098 	cjne	r3,#0x04,00468$
   8CF4 80 04              3099 	sjmp	00225$
   8CF6                    3100 00468$:
                           3101 ;	../../shared/src/cal_top.c:274: for(genno = min_gen; genno<=max_gen; genno++)  
   8CF6 0A                 3102 	inc	r2
   8CF7 02 8B 73           3103 	ljmp	00222$
   8CFA                    3104 00225$:
                           3105 ;	../../shared/src/cal_top.c:395: if(SPDCHG_ON_READ) goto skip_out;
   8CFA 90 22 38           3106 	mov	dptr,#_MCU_STATUS2_LANE
   8CFD E0                 3107 	movx	a,@dptr
   8CFE FA                 3108 	mov	r2,a
   8CFF 53 02 01           3109 	anl	ar2,#0x01
   8D02 BA 01 03           3110 	cjne	r2,#0x01,00469$
   8D05 02 8E 4F           3111 	ljmp	00278$
   8D08                    3112 00469$:
                           3113 ;	../../shared/src/cal_top.c:397: sampler_cal();
   8D08 78 94              3114 	mov	r0,#_sampler_cal
   8D0A 79 D9              3115 	mov	r1,#(_sampler_cal >> 8)
   8D0C 7A 02              3116 	mov	r2,#(_sampler_cal >> 16)
   8D0E 12 00 B3           3117 	lcall	__sdcc_banked_call
                           3118 ;	../../shared/src/cal_top.c:398: squelch_cal();
   8D11 78 F4              3119 	mov	r0,#_squelch_cal
   8D13 79 E0              3120 	mov	r1,#(_squelch_cal >> 8)
   8D15 7A 02              3121 	mov	r2,#(_squelch_cal >> 16)
   8D17 12 00 B3           3122 	lcall	__sdcc_banked_call
                           3123 ;	../../shared/src/cal_top.c:403: mcu_align_0(22);
   8D1A 75 82 16           3124 	mov	dpl,#0x16
   8D1D 78 49              3125 	mov	r0,#_mcu_align_0
   8D1F 79 92              3126 	mov	r1,#(_mcu_align_0 >> 8)
   8D21 7A 01              3127 	mov	r2,#(_mcu_align_0 >> 16)
   8D23 12 00 B3           3128 	lcall	__sdcc_banked_call
                           3129 ;	../../shared/src/cal_top.c:405: if(mcuid == master_mcu) reg_RXIMPCAL_EN = 1;
   8D26 90 22 00           3130 	mov	dptr,#_MCU_CONTROL_LANE
   8D29 E0                 3131 	movx	a,@dptr
   8D2A FA                 3132 	mov	r2,a
   8D2B 90 E6 50           3133 	mov	dptr,#_MCU_CONFIG
   8D2E E0                 3134 	movx	a,@dptr
   8D2F FB                 3135 	mov	r3,a
   8D30 EA                 3136 	mov	a,r2
   8D31 B5 03 09           3137 	cjne	a,ar3,00228$
   8D34 90 82 00           3138 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_128
   8D37 E0                 3139 	movx	a,@dptr
   8D38 44 04              3140 	orl	a,#0x04
   8D3A F0                 3141 	movx	@dptr,a
                           3142 ;	../../shared/src/cal_top.c:406: else while(reg_RXIMPCAL_EN==0);
   8D3B 80 07              3143 	sjmp	00233$
   8D3D                    3144 00228$:
   8D3D 90 82 00           3145 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_128
   8D40 E0                 3146 	movx	a,@dptr
   8D41 30 E2 F9           3147 	jnb	acc.2,00228$
   8D44                    3148 00233$:
                           3149 ;	../../shared/src/cal_top.c:409: if( mcu_en0) {
   8D44 90 E6 BE           3150 	mov	dptr,#(_MCU_INFO_12 + 0x0002)
   8D47 E0                 3151 	movx	a,@dptr
   8D48 60 25              3152 	jz	00241$
                           3153 ;	../../shared/src/cal_top.c:410: if(mcuid==MCU_LANE0) {
   8D4A 90 22 00           3154 	mov	dptr,#_MCU_CONTROL_LANE
   8D4D E0                 3155 	movx	a,@dptr
   8D4E 70 17              3156 	jnz	00234$
                           3157 ;	../../shared/src/cal_top.c:411: rximp_cal();
   8D50 78 8E              3158 	mov	r0,#_rximp_cal
   8D52 79 BA              3159 	mov	r1,#(_rximp_cal >> 8)
   8D54 7A 02              3160 	mov	r2,#(_rximp_cal >> 16)
   8D56 12 00 B3           3161 	lcall	__sdcc_banked_call
                           3162 ;	../../shared/src/cal_top.c:413: phy_check_lane(3);
   8D59 75 82 03           3163 	mov	dpl,#0x03
   8D5C 78 2D              3164 	mov	r0,#_phy_check_lane
   8D5E 79 92              3165 	mov	r1,#(_phy_check_lane >> 8)
   8D60 7A 01              3166 	mov	r2,#(_phy_check_lane >> 16)
   8D62 12 00 B3           3167 	lcall	__sdcc_banked_call
                           3168 ;	../../shared/src/cal_top.c:415: else while(PHY_CHECK_LANE0_READ!=3);
   8D65 80 08              3169 	sjmp	00241$
   8D67                    3170 00234$:
   8D67 90 E6 B6           3171 	mov	dptr,#(_MCU_INFO_4 + 0x0002)
   8D6A E0                 3172 	movx	a,@dptr
   8D6B FA                 3173 	mov	r2,a
   8D6C BA 03 F8           3174 	cjne	r2,#0x03,00234$
   8D6F                    3175 00241$:
                           3176 ;	../../shared/src/cal_top.c:419: if(mcu_en1) {
   8D6F 90 E6 C2           3177 	mov	dptr,#(_MCU_INFO_13 + 0x0002)
   8D72 E0                 3178 	movx	a,@dptr
   8D73 60 27              3179 	jz	00249$
                           3180 ;	../../shared/src/cal_top.c:420: if(mcuid==MCU_LANE1)	{
   8D75 90 22 00           3181 	mov	dptr,#_MCU_CONTROL_LANE
   8D78 E0                 3182 	movx	a,@dptr
   8D79 FA                 3183 	mov	r2,a
   8D7A BA 01 17           3184 	cjne	r2,#0x01,00242$
                           3185 ;	../../shared/src/cal_top.c:421: rximp_cal();
   8D7D 78 8E              3186 	mov	r0,#_rximp_cal
   8D7F 79 BA              3187 	mov	r1,#(_rximp_cal >> 8)
   8D81 7A 02              3188 	mov	r2,#(_rximp_cal >> 16)
   8D83 12 00 B3           3189 	lcall	__sdcc_banked_call
                           3190 ;	../../shared/src/cal_top.c:423: phy_check_lane(3);
   8D86 75 82 03           3191 	mov	dpl,#0x03
   8D89 78 2D              3192 	mov	r0,#_phy_check_lane
   8D8B 79 92              3193 	mov	r1,#(_phy_check_lane >> 8)
   8D8D 7A 01              3194 	mov	r2,#(_phy_check_lane >> 16)
   8D8F 12 00 B3           3195 	lcall	__sdcc_banked_call
                           3196 ;	../../shared/src/cal_top.c:425: else while(PHY_CHECK_LANE1_READ!=3);
   8D92 80 08              3197 	sjmp	00249$
   8D94                    3198 00242$:
   8D94 90 E6 BA           3199 	mov	dptr,#(_MCU_INFO_5 + 0x0002)
   8D97 E0                 3200 	movx	a,@dptr
   8D98 FA                 3201 	mov	r2,a
   8D99 BA 03 F8           3202 	cjne	r2,#0x03,00242$
   8D9C                    3203 00249$:
                           3204 ;	../../shared/src/cal_top.c:449: if(mcuid == master_mcu)
   8D9C 90 22 00           3205 	mov	dptr,#_MCU_CONTROL_LANE
   8D9F E0                 3206 	movx	a,@dptr
   8DA0 FA                 3207 	mov	r2,a
   8DA1 90 E6 50           3208 	mov	dptr,#_MCU_CONFIG
   8DA4 E0                 3209 	movx	a,@dptr
   8DA5 FB                 3210 	mov	r3,a
   8DA6 EA                 3211 	mov	a,r2
   8DA7 B5 03 09           3212 	cjne	a,ar3,00250$
                           3213 ;	../../shared/src/cal_top.c:450: reg_RXIMPCAL_EN = 0;
   8DAA 90 82 00           3214 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_128
   8DAD E0                 3215 	movx	a,@dptr
   8DAE 54 FB              3216 	anl	a,#0xfb
   8DB0 F0                 3217 	movx	@dptr,a
                           3218 ;	../../shared/src/cal_top.c:451: else while(reg_RXIMPCAL_EN);
   8DB1 80 07              3219 	sjmp	00255$
   8DB3                    3220 00250$:
   8DB3 90 82 00           3221 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_128
   8DB6 E0                 3222 	movx	a,@dptr
   8DB7 20 E2 F9           3223 	jb	acc.2,00250$
   8DBA                    3224 00255$:
                           3225 ;	../../shared/src/cal_top.c:456: mcu_align_0(24);
   8DBA 75 82 18           3226 	mov	dpl,#0x18
   8DBD 78 49              3227 	mov	r0,#_mcu_align_0
   8DBF 79 92              3228 	mov	r1,#(_mcu_align_0 >> 8)
   8DC1 7A 01              3229 	mov	r2,#(_mcu_align_0 >> 16)
   8DC3 12 00 B3           3230 	lcall	__sdcc_banked_call
                           3231 ;	../../shared/src/cal_top.c:458: if(mcuid == master_mcu) reg_TXIMPCAL_EN = 1;
   8DC6 90 22 00           3232 	mov	dptr,#_MCU_CONTROL_LANE
   8DC9 E0                 3233 	movx	a,@dptr
   8DCA FA                 3234 	mov	r2,a
   8DCB 90 E6 50           3235 	mov	dptr,#_MCU_CONFIG
   8DCE E0                 3236 	movx	a,@dptr
   8DCF FB                 3237 	mov	r3,a
   8DD0 EA                 3238 	mov	a,r2
   8DD1 B5 03 09           3239 	cjne	a,ar3,00256$
   8DD4 90 82 00           3240 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_128
   8DD7 E0                 3241 	movx	a,@dptr
   8DD8 44 08              3242 	orl	a,#0x08
   8DDA F0                 3243 	movx	@dptr,a
                           3244 ;	../../shared/src/cal_top.c:459: else while(reg_TXIMPCAL_EN==0);
   8DDB 80 07              3245 	sjmp	00261$
   8DDD                    3246 00256$:
   8DDD 90 82 00           3247 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_128
   8DE0 E0                 3248 	movx	a,@dptr
   8DE1 30 E3 F9           3249 	jnb	acc.3,00256$
   8DE4                    3250 00261$:
                           3251 ;	../../shared/src/cal_top.c:462: if( mcu_en0) {
   8DE4 90 E6 BE           3252 	mov	dptr,#(_MCU_INFO_12 + 0x0002)
   8DE7 E0                 3253 	movx	a,@dptr
   8DE8 60 25              3254 	jz	00269$
                           3255 ;	../../shared/src/cal_top.c:463: if( mcuid==MCU_LANE0 )	{
   8DEA 90 22 00           3256 	mov	dptr,#_MCU_CONTROL_LANE
   8DED E0                 3257 	movx	a,@dptr
   8DEE 70 17              3258 	jnz	00262$
                           3259 ;	../../shared/src/cal_top.c:464: tximp_cal();  phy_check_lane(5);  //PHY_CHECK_LANE = 5;
   8DF0 78 D7              3260 	mov	r0,#_tximp_cal
   8DF2 79 B3              3261 	mov	r1,#(_tximp_cal >> 8)
   8DF4 7A 02              3262 	mov	r2,#(_tximp_cal >> 16)
   8DF6 12 00 B3           3263 	lcall	__sdcc_banked_call
   8DF9 75 82 05           3264 	mov	dpl,#0x05
   8DFC 78 2D              3265 	mov	r0,#_phy_check_lane
   8DFE 79 92              3266 	mov	r1,#(_phy_check_lane >> 8)
   8E00 7A 01              3267 	mov	r2,#(_phy_check_lane >> 16)
   8E02 12 00 B3           3268 	lcall	__sdcc_banked_call
                           3269 ;	../../shared/src/cal_top.c:466: else while(PHY_CHECK_LANE0_READ!=5);
   8E05 80 08              3270 	sjmp	00269$
   8E07                    3271 00262$:
   8E07 90 E6 B6           3272 	mov	dptr,#(_MCU_INFO_4 + 0x0002)
   8E0A E0                 3273 	movx	a,@dptr
   8E0B FA                 3274 	mov	r2,a
   8E0C BA 05 F8           3275 	cjne	r2,#0x05,00262$
   8E0F                    3276 00269$:
                           3277 ;	../../shared/src/cal_top.c:470: if(mcu_en1) {
   8E0F 90 E6 C2           3278 	mov	dptr,#(_MCU_INFO_13 + 0x0002)
   8E12 E0                 3279 	movx	a,@dptr
   8E13 60 27              3280 	jz	00277$
                           3281 ;	../../shared/src/cal_top.c:471: if( mcuid==MCU_LANE1 )	{
   8E15 90 22 00           3282 	mov	dptr,#_MCU_CONTROL_LANE
   8E18 E0                 3283 	movx	a,@dptr
   8E19 FA                 3284 	mov	r2,a
   8E1A BA 01 17           3285 	cjne	r2,#0x01,00270$
                           3286 ;	../../shared/src/cal_top.c:472: tximp_cal();  phy_check_lane(5);  //PHY_CHECK_LANE = 5;
   8E1D 78 D7              3287 	mov	r0,#_tximp_cal
   8E1F 79 B3              3288 	mov	r1,#(_tximp_cal >> 8)
   8E21 7A 02              3289 	mov	r2,#(_tximp_cal >> 16)
   8E23 12 00 B3           3290 	lcall	__sdcc_banked_call
   8E26 75 82 05           3291 	mov	dpl,#0x05
   8E29 78 2D              3292 	mov	r0,#_phy_check_lane
   8E2B 79 92              3293 	mov	r1,#(_phy_check_lane >> 8)
   8E2D 7A 01              3294 	mov	r2,#(_phy_check_lane >> 16)
   8E2F 12 00 B3           3295 	lcall	__sdcc_banked_call
                           3296 ;	../../shared/src/cal_top.c:474: else while(PHY_CHECK_LANE1_READ!=5);
   8E32 80 08              3297 	sjmp	00277$
   8E34                    3298 00270$:
   8E34 90 E6 BA           3299 	mov	dptr,#(_MCU_INFO_5 + 0x0002)
   8E37 E0                 3300 	movx	a,@dptr
   8E38 FA                 3301 	mov	r2,a
   8E39 BA 05 F8           3302 	cjne	r2,#0x05,00270$
   8E3C                    3303 00277$:
                           3304 ;	../../shared/src/cal_top.c:494: reg_TXIMPCAL_EN = 0;
   8E3C 90 82 00           3305 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_128
   8E3F E0                 3306 	movx	a,@dptr
   8E40 54 F7              3307 	anl	a,#0xf7
   8E42 F0                 3308 	movx	@dptr,a
                           3309 ;	../../shared/src/cal_top.c:498: mcu_align_0(0);
   8E43 75 82 00           3310 	mov	dpl,#0x00
   8E46 78 49              3311 	mov	r0,#_mcu_align_0
   8E48 79 92              3312 	mov	r1,#(_mcu_align_0 >> 8)
   8E4A 7A 01              3313 	mov	r2,#(_mcu_align_0 >> 16)
   8E4C 12 00 B3           3314 	lcall	__sdcc_banked_call
                           3315 ;	../../shared/src/cal_top.c:500: skip_out:
   8E4F                    3316 00278$:
                           3317 ;	../../shared/src/cal_top.c:502: reg_ANA_TX_IDLE_FORCE_LANE = 0;
   8E4F 90 20 03           3318 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0003)
   8E52 E0                 3319 	movx	a,@dptr
   8E53 54 FB              3320 	anl	a,#0xfb
   8E55 F0                 3321 	movx	@dptr,a
                           3322 ;	../../shared/src/cal_top.c:503: reg_ANA_TX_IDLE_LANE = 0;
   8E56 90 20 03           3323 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0003)
   8E59 E0                 3324 	movx	a,@dptr
   8E5A 54 FE              3325 	anl	a,#0xfe
   8E5C F0                 3326 	movx	@dptr,a
                           3327 ;	../../shared/src/cal_top.c:506: reg_DTL_LOOP_FREEZE_LANE = 0;  //analog deleted
   8E5D 90 21 6A           3328 	mov	dptr,#(_DTL_REG2 + 0x0002)
   8E60 E0                 3329 	movx	a,@dptr
   8E61 54 FB              3330 	anl	a,#0xfb
   8E63 F0                 3331 	movx	@dptr,a
                           3332 ;	../../shared/src/cal_top.c:510: reg_DTL_FLOOP_FREEZE_LANE = 0;
   8E64 90 21 63           3333 	mov	dptr,#(_DTL_REG0 + 0x0003)
   8E67 E0                 3334 	movx	a,@dptr
   8E68 54 BF              3335 	anl	a,#0xbf
   8E6A F0                 3336 	movx	@dptr,a
                           3337 ;	../../shared/src/cal_top.c:517: reg_TX_TDTAP_SEL_LANE = 1;
   8E6B 90 02 44           3338 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_145
   8E6E E0                 3339 	movx	a,@dptr
   8E6F 44 80              3340 	orl	a,#0x80
   8E71 F0                 3341 	movx	@dptr,a
                           3342 ;	../../shared/src/cal_top.c:518: reg_TXDCCCAL_EN_LANE = 0;
   8E72 90 02 4C           3343 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_147
   8E75 E0                 3344 	movx	a,@dptr
   8E76 54 7F              3345 	anl	a,#0x7f
   8E78 F0                 3346 	movx	@dptr,a
                           3347 ;	../../shared/src/cal_top.c:519: lnx_DLL_VDDA_TRACKING_ON_LANE = 1;
   8E79 90 60 0A           3348 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0002)
   8E7C E0                 3349 	movx	a,@dptr
   8E7D 44 20              3350 	orl	a,#0x20
   8E7F F0                 3351 	movx	@dptr,a
                           3352 ;	../../shared/src/cal_top.c:520: vdd_cnt = 0;
   8E80 90 66 38           3353 	mov	dptr,#_vdd_cnt
                           3354 ;	../../shared/src/cal_top.c:521: dcc_cont = 0;
   8E83 E4                 3355 	clr	a
   8E84 F0                 3356 	movx	@dptr,a
   8E85 90 66 39           3357 	mov	dptr,#_dcc_cont
   8E88 F0                 3358 	movx	@dptr,a
                           3359 ;	../../shared/src/cal_top.c:522: reg_SHRTR = 0; //recover
   8E89 90 82 2C           3360 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_139
   8E8C E0                 3361 	movx	a,@dptr
   8E8D 54 EF              3362 	anl	a,#0xef
   8E8F F0                 3363 	movx	@dptr,a
                           3364 ;	../../shared/src/cal_top.c:524: SYNC_SATUS_PLL_OR_PLL_OFF = 0;
   8E90 90 E6 B1           3365 	mov	dptr,#(_SYNC_INFO + 0x0001)
   8E93 E4                 3366 	clr	a
   8E94 F0                 3367 	movx	@dptr,a
                           3368 ;	../../shared/src/cal_top.c:526: lnx_CAL_DONE_LANE = 1;
   8E95 90 60 03           3369 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   8E98 E0                 3370 	movx	a,@dptr
   8E99 44 01              3371 	orl	a,#0x01
   8E9B F0                 3372 	movx	@dptr,a
                           3373 ;	../../shared/src/cal_top.c:529: if(reg_PWRON_SEQ) {
   8E9C 90 A3 18           3374 	mov	dptr,#_PM_CMN_REG1
   8E9F E0                 3375 	movx	a,@dptr
   8EA0 30 E5 2C           3376 	jnb	acc.5,00289$
                           3377 ;	../../shared/src/cal_top.c:530: if((master_mcu==MCU_LANE0 && mcuid==MCU_LANE0) || (master_mcu==MCU_LANE1 && mcuid==MCU_LANE1)
   8EA3 90 E6 50           3378 	mov	dptr,#_MCU_CONFIG
   8EA6 E0                 3379 	movx	a,@dptr
   8EA7 70 06              3380 	jnz	00287$
   8EA9 90 22 00           3381 	mov	dptr,#_MCU_CONTROL_LANE
   8EAC E0                 3382 	movx	a,@dptr
   8EAD 60 10              3383 	jz	00282$
   8EAF                    3384 00287$:
   8EAF 90 E6 50           3385 	mov	dptr,#_MCU_CONFIG
   8EB2 E0                 3386 	movx	a,@dptr
   8EB3 FA                 3387 	mov	r2,a
   8EB4 BA 01 11           3388 	cjne	r2,#0x01,00279$
   8EB7 90 22 00           3389 	mov	dptr,#_MCU_CONTROL_LANE
   8EBA E0                 3390 	movx	a,@dptr
   8EBB FA                 3391 	mov	r2,a
   8EBC BA 01 09           3392 	cjne	r2,#0x01,00279$
   8EBF                    3393 00282$:
                           3394 ;	../../shared/src/cal_top.c:535: reg_PWRON_SEQ = 0;
   8EBF 90 A3 18           3395 	mov	dptr,#_PM_CMN_REG1
   8EC2 E0                 3396 	movx	a,@dptr
   8EC3 54 DF              3397 	anl	a,#0xdf
   8EC5 F0                 3398 	movx	@dptr,a
                           3399 ;	../../shared/src/cal_top.c:537: else while(reg_PWRON_SEQ);
   8EC6 80 07              3400 	sjmp	00289$
   8EC8                    3401 00279$:
   8EC8 90 A3 18           3402 	mov	dptr,#_PM_CMN_REG1
   8ECB E0                 3403 	movx	a,@dptr
   8ECC 20 E5 F9           3404 	jb	acc.5,00279$
   8ECF                    3405 00289$:
                           3406 ;	../../shared/src/cal_top.c:539: if( phy_mode == PCIE ) {
   8ECF 90 A3 16           3407 	mov	dptr,#(_SYSTEM + 0x0002)
   8ED2 E0                 3408 	movx	a,@dptr
   8ED3 54 07              3409 	anl	a,#0x07
   8ED5 FA                 3410 	mov	r2,a
   8ED6 BA 03 11           3411 	cjne	r2,#0x03,00291$
                           3412 ;	../../shared/src/cal_top.c:540: pre_ringpll_rate = PLL_RATE_SEL_RING;
   8ED9 90 E6 1F           3413 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0003)
   8EDC E0                 3414 	movx	a,@dptr
   8EDD 90 67 8F           3415 	mov	dptr,#_pre_ringpll_rate
   8EE0 F0                 3416 	movx	@dptr,a
                           3417 ;	../../shared/src/cal_top.c:541: pre_lcpll_rate = PLL_RATE_SEL;
   8EE1 90 E6 1E           3418 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0002)
   8EE4 E0                 3419 	movx	a,@dptr
   8EE5 FA                 3420 	mov	r2,a
   8EE6 90 67 8E           3421 	mov	dptr,#_pre_lcpll_rate
   8EE9 F0                 3422 	movx	@dptr,a
   8EEA                    3423 00291$:
                           3424 ;	../../shared/src/cal_top.c:544: pwrsq_on = 0;
   8EEA 90 66 2B           3425 	mov	dptr,#_pwrsq_on
   8EED E4                 3426 	clr	a
   8EEE F0                 3427 	movx	@dptr,a
                           3428 ;	../../shared/src/cal_top.c:546: if(serdes_ring_lane_en==0)
   8EEF 90 66 23           3429 	mov	dptr,#_serdes_ring_lane_en
   8EF2 E0                 3430 	movx	a,@dptr
   8EF3 FA                 3431 	mov	r2,a
   8EF4 70 08              3432 	jnz	00296$
                           3433 ;	../../shared/src/cal_top.c:547: PHY_STATUS = ST_SPDCHG;
   8EF6 90 22 30           3434 	mov	dptr,#_MCU_STATUS0_LANE
   8EF9 74 19              3435 	mov	a,#0x19
   8EFB F0                 3436 	movx	@dptr,a
   8EFC 80 15              3437 	sjmp	00302$
   8EFE                    3438 00296$:
                           3439 ;	../../shared/src/cal_top.c:549: if(reg_PIN_PU_PLL_RD_LANE) PHY_STATUS = ST_SPDCHG;
   8EFE 90 20 07           3440 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   8F01 E0                 3441 	movx	a,@dptr
   8F02 30 E5 08           3442 	jnb	acc.5,00293$
   8F05 90 22 30           3443 	mov	dptr,#_MCU_STATUS0_LANE
   8F08 74 19              3444 	mov	a,#0x19
   8F0A F0                 3445 	movx	@dptr,a
   8F0B 80 06              3446 	sjmp	00302$
   8F0D                    3447 00293$:
                           3448 ;	../../shared/src/cal_top.c:550: else PHY_STATUS = ST_SLUMBER;
   8F0D 90 22 30           3449 	mov	dptr,#_MCU_STATUS0_LANE
   8F10 74 1A              3450 	mov	a,#0x1A
   8F12 F0                 3451 	movx	@dptr,a
   8F13                    3452 00302$:
   8F13 02 00 C5           3453 	ljmp	__sdcc_banked_ret
                           3454 ;------------------------------------------------------------
                           3455 ;Allocation info for local variables in function 'Cal_Cont'
                           3456 ;------------------------------------------------------------
                           3457 ;cont_cal_inx              Allocated to registers r2 
                           3458 ;------------------------------------------------------------
                           3459 ;	../../shared/src/cal_top.c:563: void Cal_Cont(void) BANKING_CTRL {
                           3460 ;	-----------------------------------------
                           3461 ;	 function Cal_Cont
                           3462 ;	-----------------------------------------
   8F16                    3463 _Cal_Cont:
                           3464 ;	../../shared/src/cal_top.c:566: if(cmx_FORCE_CONT_CAL_SKIP) return;
   8F16 90 E6 07           3465 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   8F19 E0                 3466 	movx	a,@dptr
   8F1A 30 E0 03           3467 	jnb	acc.0,00102$
   8F1D 02 92 2A           3468 	ljmp	00185$
   8F20                    3469 00102$:
                           3470 ;	../../shared/src/cal_top.c:568: cont_cal_on = 1;
   8F20 D2 16              3471 	setb	_cont_cal_on
                           3472 ;	../../shared/src/cal_top.c:569: do {
   8F22 7A 00              3473 	mov	r2,#0x00
   8F24                    3474 00182$:
                           3475 ;	../../shared/src/cal_top.c:570: switch(cont_cal_inx) {
   8F24 74 07              3476 	mov	a,#0x07
   8F26 B5 02 00           3477 	cjne	a,ar2,00228$
   8F29                    3478 00228$:
   8F29 50 03              3479 	jnc	00229$
   8F2B 02 92 17           3480 	ljmp	00183$
   8F2E                    3481 00229$:
   8F2E EA                 3482 	mov	a,r2
   8F2F 2A                 3483 	add	a,r2
   8F30 2A                 3484 	add	a,r2
   8F31 90 8F 35           3485 	mov	dptr,#00230$
   8F34 73                 3486 	jmp	@a+dptr
   8F35                    3487 00230$:
   8F35 02 8F 4D           3488 	ljmp	00103$
   8F38 02 8F 95           3489 	ljmp	00108$
   8F3B 02 90 19           3490 	ljmp	00123$
   8F3E 02 90 33           3491 	ljmp	00126$
   8F41 02 90 50           3492 	ljmp	00129$
   8F44 02 90 6D           3493 	ljmp	00132$
   8F47 02 91 47           3494 	ljmp	00152$
   8F4A 02 91 E2           3495 	ljmp	00173$
                           3496 ;	../../shared/src/cal_top.c:571: case 0:
   8F4D                    3497 00103$:
                           3498 ;	../../shared/src/cal_top.c:572: tsen_dat = read_tsen();
   8F4D C0 02              3499 	push	ar2
   8F4F 78 B9              3500 	mov	r0,#_read_tsen
   8F51 79 BE              3501 	mov	r1,#(_read_tsen >> 8)
   8F53 7A 02              3502 	mov	r2,#(_read_tsen >> 16)
   8F55 12 00 B3           3503 	lcall	__sdcc_banked_call
   8F58 E5 82              3504 	mov	a,dpl
   8F5A 85 83 F0           3505 	mov	b,dph
   8F5D D0 02              3506 	pop	ar2
   8F5F 90 66 17           3507 	mov	dptr,#_tsen_dat
   8F62 F0                 3508 	movx	@dptr,a
   8F63 A3                 3509 	inc	dptr
   8F64 E5 F0              3510 	mov	a,b
   8F66 F0                 3511 	movx	@dptr,a
                           3512 ;	../../shared/src/cal_top.c:577: if(ring_lane_sel && /*slave_phy_on==0 &&*/ reg_ANA_PLL_CLK_READY_RING && cmx_RINGPLL_CAL_CONT_EN)
   8F67 90 66 24           3513 	mov	dptr,#_ring_lane_sel
   8F6A E0                 3514 	movx	a,@dptr
   8F6B FB                 3515 	mov	r3,a
   8F6C 70 03              3516 	jnz	00231$
   8F6E 02 92 17           3517 	ljmp	00183$
   8F71                    3518 00231$:
   8F71 90 A3 4E           3519 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   8F74 E0                 3520 	movx	a,@dptr
   8F75 20 E5 03           3521 	jb	acc.5,00232$
   8F78 02 92 17           3522 	ljmp	00183$
   8F7B                    3523 00232$:
   8F7B 90 E6 0D           3524 	mov	dptr,#(_CONTROL_CONFIG2 + 0x0001)
   8F7E E0                 3525 	movx	a,@dptr
   8F7F 20 E5 03           3526 	jb	acc.5,00233$
   8F82 02 92 17           3527 	ljmp	00183$
   8F85                    3528 00233$:
                           3529 ;	../../shared/src/cal_top.c:578: ring_pll_cont();
   8F85 C0 02              3530 	push	ar2
   8F87 78 79              3531 	mov	r0,#_ring_pll_cont
   8F89 79 DF              3532 	mov	r1,#(_ring_pll_cont >> 8)
   8F8B 7A 01              3533 	mov	r2,#(_ring_pll_cont >> 16)
   8F8D 12 00 B3           3534 	lcall	__sdcc_banked_call
   8F90 D0 02              3535 	pop	ar2
                           3536 ;	../../shared/src/cal_top.c:580: break;
   8F92 02 92 17           3537 	ljmp	00183$
                           3538 ;	../../shared/src/cal_top.c:581: case 1:
   8F95                    3539 00108$:
                           3540 ;	../../shared/src/cal_top.c:582: if( lnx_CAL_VDD_CONTINUOUS_MODE_EN_LANE ) {
   8F95 90 60 0A           3541 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0002)
   8F98 E0                 3542 	movx	a,@dptr
   8F99 20 E3 03           3543 	jb	acc.3,00234$
   8F9C 02 92 17           3544 	ljmp	00183$
   8F9F                    3545 00234$:
                           3546 ;	../../shared/src/cal_top.c:587: if(vdd_cnt==SELLV_TXDATA && cmx_TXDETECT_CAL_CONT_EN && reg_PIN_PLL_READY_TX_LANE)
   8F9F 90 66 38           3547 	mov	dptr,#_vdd_cnt
   8FA2 E0                 3548 	movx	a,@dptr
   8FA3 FB                 3549 	mov	r3,a
   8FA4 BB 01 1D           3550 	cjne	r3,#0x01,00115$
   8FA7 90 E6 0E           3551 	mov	dptr,#(_CONTROL_CONFIG2 + 0x0002)
   8FAA E0                 3552 	movx	a,@dptr
   8FAB 30 E0 16           3553 	jnb	acc.0,00115$
   8FAE 90 20 02           3554 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   8FB1 E0                 3555 	movx	a,@dptr
   8FB2 30 E2 0F           3556 	jnb	acc.2,00115$
                           3557 ;	../../shared/src/cal_top.c:588: txdetect_cal();
   8FB5 C0 02              3558 	push	ar2
   8FB7 78 1C              3559 	mov	r0,#_txdetect_cal
   8FB9 79 E6              3560 	mov	r1,#(_txdetect_cal >> 8)
   8FBB 7A 02              3561 	mov	r2,#(_txdetect_cal >> 16)
   8FBD 12 00 B3           3562 	lcall	__sdcc_banked_call
   8FC0 D0 02              3563 	pop	ar2
   8FC2 80 37              3564 	sjmp	00116$
   8FC4                    3565 00115$:
                           3566 ;	../../shared/src/cal_top.c:590: if((vdd_cnt<SELLV_RXEOMCLK && reg_PIN_PU_TX_RD_LANE) || (vdd_cnt>SELLV_TXPRE && reg_PIN_PLL_READY_RX_LANE))	//Skip t/rx cal when pu_px=0
   8FC4 90 66 38           3567 	mov	dptr,#_vdd_cnt
   8FC7 E0                 3568 	movx	a,@dptr
   8FC8 FB                 3569 	mov	r3,a
   8FC9 BB 03 00           3570 	cjne	r3,#0x03,00239$
   8FCC                    3571 00239$:
   8FCC 50 07              3572 	jnc	00113$
   8FCE 90 20 07           3573 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   8FD1 E0                 3574 	movx	a,@dptr
   8FD2 20 E4 13           3575 	jb	acc.4,00109$
   8FD5                    3576 00113$:
   8FD5 90 66 38           3577 	mov	dptr,#_vdd_cnt
   8FD8 E0                 3578 	movx	a,@dptr
   8FD9 FB                 3579 	mov	r3,a
   8FDA 74 02              3580 	mov	a,#0x02
   8FDC B5 03 00           3581 	cjne	a,ar3,00242$
   8FDF                    3582 00242$:
   8FDF 50 1A              3583 	jnc	00116$
   8FE1 90 21 02           3584 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   8FE4 E0                 3585 	movx	a,@dptr
   8FE5 30 E6 13           3586 	jnb	acc.6,00116$
   8FE8                    3587 00109$:
                           3588 ;	../../shared/src/cal_top.c:591: vdd_cal_sel(vdd_cnt);
   8FE8 90 66 38           3589 	mov	dptr,#_vdd_cnt
   8FEB E0                 3590 	movx	a,@dptr
   8FEC F5 82              3591 	mov	dpl,a
   8FEE C0 02              3592 	push	ar2
   8FF0 78 84              3593 	mov	r0,#_vdd_cal_sel
   8FF2 79 EC              3594 	mov	r1,#(_vdd_cal_sel >> 8)
   8FF4 7A 02              3595 	mov	r2,#(_vdd_cal_sel >> 16)
   8FF6 12 00 B3           3596 	lcall	__sdcc_banked_call
   8FF9 D0 02              3597 	pop	ar2
   8FFB                    3598 00116$:
                           3599 ;	../../shared/src/cal_top.c:593: vdd_cnt++;
   8FFB 90 66 38           3600 	mov	dptr,#_vdd_cnt
   8FFE E0                 3601 	movx	a,@dptr
   8FFF 24 01              3602 	add	a,#0x01
   9001 F0                 3603 	movx	@dptr,a
                           3604 ;	../../shared/src/cal_top.c:594: if(vdd_cnt>5) vdd_cnt = 0;
   9002 90 66 38           3605 	mov	dptr,#_vdd_cnt
   9005 E0                 3606 	movx	a,@dptr
   9006 FB                 3607 	mov	r3,a
   9007 74 05              3608 	mov	a,#0x05
   9009 B5 03 00           3609 	cjne	a,ar3,00245$
   900C                    3610 00245$:
   900C 40 03              3611 	jc	00246$
   900E 02 92 17           3612 	ljmp	00183$
   9011                    3613 00246$:
   9011 90 66 38           3614 	mov	dptr,#_vdd_cnt
   9014 E4                 3615 	clr	a
   9015 F0                 3616 	movx	@dptr,a
                           3617 ;	../../shared/src/cal_top.c:599: break;
   9016 02 92 17           3618 	ljmp	00183$
                           3619 ;	../../shared/src/cal_top.c:600: case 2: if(cmx_ALIGN90_CAL_CONT_EN)  find_align90_lock(); break; //phase_lookup_tracking(1); break;
   9019                    3620 00123$:
   9019 90 E6 0E           3621 	mov	dptr,#(_CONTROL_CONFIG2 + 0x0002)
   901C E0                 3622 	movx	a,@dptr
   901D 20 E3 03           3623 	jb	acc.3,00247$
   9020 02 92 17           3624 	ljmp	00183$
   9023                    3625 00247$:
   9023 C0 02              3626 	push	ar2
   9025 78 39              3627 	mov	r0,#_find_align90_lock
   9027 79 80              3628 	mov	r1,#(_find_align90_lock >> 8)
   9029 7A 01              3629 	mov	r2,#(_find_align90_lock >> 16)
   902B 12 00 B3           3630 	lcall	__sdcc_banked_call
   902E D0 02              3631 	pop	ar2
   9030 02 92 17           3632 	ljmp	00183$
                           3633 ;	../../shared/src/cal_top.c:601: case 3: if( cmx_RXDLL_CAL_CONT_EN ) dll_vdda_cal(DLL_PHASE_STEP);	break;
   9033                    3634 00126$:
   9033 90 E6 0E           3635 	mov	dptr,#(_CONTROL_CONFIG2 + 0x0002)
   9036 E0                 3636 	movx	a,@dptr
   9037 20 E1 03           3637 	jb	acc.1,00248$
   903A 02 92 17           3638 	ljmp	00183$
   903D                    3639 00248$:
   903D 75 82 00           3640 	mov	dpl,#0x00
   9040 C0 02              3641 	push	ar2
   9042 78 AD              3642 	mov	r0,#_dll_vdda_cal
   9044 79 AD              3643 	mov	r1,#(_dll_vdda_cal >> 8)
   9046 7A 01              3644 	mov	r2,#(_dll_vdda_cal >> 16)
   9048 12 00 B3           3645 	lcall	__sdcc_banked_call
   904B D0 02              3646 	pop	ar2
   904D 02 92 17           3647 	ljmp	00183$
                           3648 ;	../../shared/src/cal_top.c:602: case 4:	if( cmx_EOM_DLL_CAL_CONT_EN ) dll_eom_vdda_cal(DLL_PHASE_STEP); break;
   9050                    3649 00129$:
   9050 90 E6 0E           3650 	mov	dptr,#(_CONTROL_CONFIG2 + 0x0002)
   9053 E0                 3651 	movx	a,@dptr
   9054 20 E2 03           3652 	jb	acc.2,00249$
   9057 02 92 17           3653 	ljmp	00183$
   905A                    3654 00249$:
   905A 75 82 00           3655 	mov	dpl,#0x00
   905D C0 02              3656 	push	ar2
   905F 78 72              3657 	mov	r0,#_dll_eom_vdda_cal
   9061 79 AE              3658 	mov	r1,#(_dll_eom_vdda_cal >> 8)
   9063 7A 01              3659 	mov	r2,#(_dll_eom_vdda_cal >> 16)
   9065 12 00 B3           3660 	lcall	__sdcc_banked_call
   9068 D0 02              3661 	pop	ar2
   906A 02 92 17           3662 	ljmp	00183$
                           3663 ;	../../shared/src/cal_top.c:603: case 5:	
   906D                    3664 00132$:
                           3665 ;	../../shared/src/cal_top.c:604: switch(dcc_cont) {
   906D 90 66 39           3666 	mov	dptr,#_dcc_cont
   9070 E0                 3667 	movx	a,@dptr
   9071 FB                 3668 	mov	r3,a
   9072 74 04              3669 	mov	a,#0x04
   9074 B5 03 00           3670 	cjne	a,ar3,00250$
   9077                    3671 00250$:
   9077 50 03              3672 	jnc	00251$
   9079 02 91 29           3673 	ljmp	00149$
   907C                    3674 00251$:
   907C EB                 3675 	mov	a,r3
   907D 2B                 3676 	add	a,r3
   907E 2B                 3677 	add	a,r3
   907F 90 90 83           3678 	mov	dptr,#00252$
   9082 73                 3679 	jmp	@a+dptr
   9083                    3680 00252$:
   9083 02 90 92           3681 	ljmp	00133$
   9086 02 90 A2           3682 	ljmp	00134$
   9089 02 90 B2           3683 	ljmp	00135$
   908C 02 90 C1           3684 	ljmp	00136$
   908F 02 90 EE           3685 	ljmp	00142$
                           3686 ;	../../shared/src/cal_top.c:605: case 0: rxdcc_dll_cal(); break;
   9092                    3687 00133$:
   9092 C0 02              3688 	push	ar2
   9094 78 09              3689 	mov	r0,#_rxdcc_dll_cal
   9096 79 9F              3690 	mov	r1,#(_rxdcc_dll_cal >> 8)
   9098 7A 02              3691 	mov	r2,#(_rxdcc_dll_cal >> 16)
   909A 12 00 B3           3692 	lcall	__sdcc_banked_call
   909D D0 02              3693 	pop	ar2
   909F 02 91 29           3694 	ljmp	00149$
                           3695 ;	../../shared/src/cal_top.c:606: case 1: rxdcc_data_cal(); break;
   90A2                    3696 00134$:
   90A2 C0 02              3697 	push	ar2
   90A4 78 5F              3698 	mov	r0,#_rxdcc_data_cal
   90A6 79 A2              3699 	mov	r1,#(_rxdcc_data_cal >> 8)
   90A8 7A 02              3700 	mov	r2,#(_rxdcc_data_cal >> 16)
   90AA 12 00 B3           3701 	lcall	__sdcc_banked_call
   90AD D0 02              3702 	pop	ar2
   90AF 02 91 29           3703 	ljmp	00149$
                           3704 ;	../../shared/src/cal_top.c:607: case 2: rxdcc_eom_cal(); break;
   90B2                    3705 00135$:
   90B2 C0 02              3706 	push	ar2
   90B4 78 28              3707 	mov	r0,#_rxdcc_eom_cal
   90B6 79 A6              3708 	mov	r1,#(_rxdcc_eom_cal >> 8)
   90B8 7A 02              3709 	mov	r2,#(_rxdcc_eom_cal >> 16)
   90BA 12 00 B3           3710 	lcall	__sdcc_banked_call
   90BD D0 02              3711 	pop	ar2
                           3712 ;	../../shared/src/cal_top.c:608: case 3: if(reg_PIN_PU_TX_RD_LANE) {
   90BF 80 68              3713 	sjmp	00149$
   90C1                    3714 00136$:
   90C1 90 20 07           3715 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   90C4 E0                 3716 	movx	a,@dptr
   90C5 30 E4 61           3717 	jnb	acc.4,00149$
                           3718 ;	../../shared/src/cal_top.c:609: if(reg_TX_SPEED_DIV_LANE_2_0==0) txdcc_cal();
   90C8 90 02 58           3719 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_150
   90CB E0                 3720 	movx	a,@dptr
   90CC 54 07              3721 	anl	a,#0x07
   90CE 70 0F              3722 	jnz	00138$
   90D0 C0 02              3723 	push	ar2
   90D2 78 E5              3724 	mov	r0,#_txdcc_cal
   90D4 79 97              3725 	mov	r1,#(_txdcc_cal >> 8)
   90D6 7A 02              3726 	mov	r2,#(_txdcc_cal >> 16)
   90D8 12 00 B3           3727 	lcall	__sdcc_banked_call
   90DB D0 02              3728 	pop	ar2
   90DD 80 4A              3729 	sjmp	00149$
   90DF                    3730 00138$:
                           3731 ;	../../shared/src/cal_top.c:610: else txdcc_pdiv_cal();
   90DF C0 02              3732 	push	ar2
   90E1 78 A5              3733 	mov	r0,#_txdcc_pdiv_cal
   90E3 79 9B              3734 	mov	r1,#(_txdcc_pdiv_cal >> 8)
   90E5 7A 02              3735 	mov	r2,#(_txdcc_pdiv_cal >> 16)
   90E7 12 00 B3           3736 	lcall	__sdcc_banked_call
   90EA D0 02              3737 	pop	ar2
                           3738 ;	../../shared/src/cal_top.c:612: break;
                           3739 ;	../../shared/src/cal_top.c:613: case 4: if(mcuid==master_mcu && slave_phy_on==0 && cmx_PLLDCC_CAL_CONT_EN && reg_ANA_PLL_CLK_READY
   90EC 80 3B              3740 	sjmp	00149$
   90EE                    3741 00142$:
   90EE 90 22 00           3742 	mov	dptr,#_MCU_CONTROL_LANE
   90F1 E0                 3743 	movx	a,@dptr
   90F2 FB                 3744 	mov	r3,a
   90F3 90 E6 50           3745 	mov	dptr,#_MCU_CONFIG
   90F6 E0                 3746 	movx	a,@dptr
   90F7 FC                 3747 	mov	r4,a
   90F8 EB                 3748 	mov	a,r3
   90F9 B5 04 2D           3749 	cjne	a,ar4,00149$
   90FC 90 66 1C           3750 	mov	dptr,#_slave_phy_on
   90FF E0                 3751 	movx	a,@dptr
   9100 FB                 3752 	mov	r3,a
   9101 70 26              3753 	jnz	00149$
   9103 90 E6 0E           3754 	mov	dptr,#(_CONTROL_CONFIG2 + 0x0002)
   9106 E0                 3755 	movx	a,@dptr
   9107 30 E4 1F           3756 	jnb	acc.4,00149$
   910A 90 A3 4F           3757 	mov	dptr,#(_PM_CMN_REG2 + 0x0003)
   910D E0                 3758 	movx	a,@dptr
   910E 30 E0 18           3759 	jnb	acc.0,00149$
                           3760 ;	../../shared/src/cal_top.c:615: && reg_LCPLLCLK_DIV2_SEL==1
   9111 90 83 3C           3761 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_207
   9114 E0                 3762 	movx	a,@dptr
   9115 03                 3763 	rr	a
   9116 54 01              3764 	anl	a,#0x01
   9118 FB                 3765 	mov	r3,a
   9119 BB 01 0D           3766 	cjne	r3,#0x01,00149$
                           3767 ;	../../shared/src/cal_top.c:619: plldcc_cal();
   911C C0 02              3768 	push	ar2
   911E 78 74              3769 	mov	r0,#_plldcc_cal
   9120 79 C9              3770 	mov	r1,#(_plldcc_cal >> 8)
   9122 7A 02              3771 	mov	r2,#(_plldcc_cal >> 16)
   9124 12 00 B3           3772 	lcall	__sdcc_banked_call
   9127 D0 02              3773 	pop	ar2
                           3774 ;	../../shared/src/cal_top.c:622: }
   9129                    3775 00149$:
                           3776 ;	../../shared/src/cal_top.c:623: dcc_cont++;
   9129 90 66 39           3777 	mov	dptr,#_dcc_cont
   912C E0                 3778 	movx	a,@dptr
   912D 24 01              3779 	add	a,#0x01
   912F F0                 3780 	movx	@dptr,a
                           3781 ;	../../shared/src/cal_top.c:624: if(dcc_cont>4) dcc_cont = 0;	
   9130 90 66 39           3782 	mov	dptr,#_dcc_cont
   9133 E0                 3783 	movx	a,@dptr
   9134 FB                 3784 	mov	r3,a
   9135 74 04              3785 	mov	a,#0x04
   9137 B5 03 00           3786 	cjne	a,ar3,00262$
   913A                    3787 00262$:
   913A 40 03              3788 	jc	00263$
   913C 02 92 17           3789 	ljmp	00183$
   913F                    3790 00263$:
   913F 90 66 39           3791 	mov	dptr,#_dcc_cont
   9142 E4                 3792 	clr	a
   9143 F0                 3793 	movx	@dptr,a
                           3794 ;	../../shared/src/cal_top.c:625: break;
   9144 02 92 17           3795 	ljmp	00183$
                           3796 ;	../../shared/src/cal_top.c:626: case 6:	
   9147                    3797 00152$:
                           3798 ;	../../shared/src/cal_top.c:627: reg_MCU_DEBUG0_LANE_7_0 = timeout;
   9147 A2 03              3799 	mov	c,_timeout
   9149 E4                 3800 	clr	a
   914A 33                 3801 	rlc	a
   914B FB                 3802 	mov	r3,a
   914C 90 22 B4           3803 	mov	dptr,#_MCU_DEBUG0_LANE
   914F EB                 3804 	mov	a,r3
   9150 F0                 3805 	movx	@dptr,a
                           3806 ;	../../shared/src/cal_top.c:628: if( mcuid==master_mcu && slave_phy_on==0 && reg_ANA_PLL_CLK_READY) {
   9151 90 22 00           3807 	mov	dptr,#_MCU_CONTROL_LANE
   9154 E0                 3808 	movx	a,@dptr
   9155 FB                 3809 	mov	r3,a
   9156 90 E6 50           3810 	mov	dptr,#_MCU_CONFIG
   9159 E0                 3811 	movx	a,@dptr
   915A FC                 3812 	mov	r4,a
   915B EB                 3813 	mov	a,r3
   915C B5 04 02           3814 	cjne	a,ar4,00264$
   915F 80 03              3815 	sjmp	00265$
   9161                    3816 00264$:
   9161 02 92 17           3817 	ljmp	00183$
   9164                    3818 00265$:
   9164 90 66 1C           3819 	mov	dptr,#_slave_phy_on
   9167 E0                 3820 	movx	a,@dptr
   9168 FB                 3821 	mov	r3,a
   9169 60 03              3822 	jz	00266$
   916B 02 92 17           3823 	ljmp	00183$
   916E                    3824 00266$:
   916E 90 A3 4F           3825 	mov	dptr,#(_PM_CMN_REG2 + 0x0003)
   9171 E0                 3826 	movx	a,@dptr
   9172 20 E0 03           3827 	jb	acc.0,00267$
   9175 02 92 17           3828 	ljmp	00183$
   9178                    3829 00267$:
                           3830 ;	../../shared/src/cal_top.c:629: if( timeout == 0 ) break;
   9178 20 03 03           3831 	jb	_timeout,00268$
   917B 02 92 17           3832 	ljmp	00183$
   917E                    3833 00268$:
                           3834 ;	../../shared/src/cal_top.c:630: if( cmx_PLL_TEMP_CAL_CONT_EN) {
   917E 90 E6 0D           3835 	mov	dptr,#(_CONTROL_CONFIG2 + 0x0001)
   9181 E0                 3836 	movx	a,@dptr
   9182 20 E6 03           3837 	jb	acc.6,00269$
   9185 02 92 17           3838 	ljmp	00183$
   9188                    3839 00269$:
                           3840 ;	../../shared/src/cal_top.c:631: pll_temp_cal();
   9188 C0 02              3841 	push	ar2
   918A 78 D6              3842 	mov	r0,#_pll_temp_cal
   918C 79 CD              3843 	mov	r1,#(_pll_temp_cal >> 8)
   918E 7A 02              3844 	mov	r2,#(_pll_temp_cal >> 16)
   9190 12 00 B3           3845 	lcall	__sdcc_banked_call
   9193 D0 02              3846 	pop	ar2
                           3847 ;	../../shared/src/cal_top.c:632: if(BYPASS_DELAY==0) {
   9195 90 E6 06           3848 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0002)
   9198 E0                 3849 	movx	a,@dptr
   9199 54 1C              3850 	anl	a,#0x1c
   919B 70 41              3851 	jnz	00165$
                           3852 ;	../../shared/src/cal_top.c:633: if((tempc_step_state&0xf0) == 0x10) { timeout_start((uint16_t)5); }
   919D 90 66 26           3853 	mov	dptr,#_tempc_step_state
   91A0 E0                 3854 	movx	a,@dptr
   91A1 FB                 3855 	mov	r3,a
   91A2 74 F0              3856 	mov	a,#0xF0
   91A4 5B                 3857 	anl	a,r3
   91A5 FC                 3858 	mov	r4,a
   91A6 BC 10 0C           3859 	cjne	r4,#0x10,00162$
   91A9 75 8B FB           3860 	mov	_TMR1,#0xFB
   91AC 75 8D FF           3861 	mov	(_TMR1 >> 8),#0xFF
   91AF D2 8E              3862 	setb	_TR1
   91B1 C2 03              3863 	clr	_timeout
   91B3 80 62              3864 	sjmp	00183$
   91B5                    3865 00162$:
                           3866 ;	../../shared/src/cal_top.c:634: else if((tempc_step_state&0xf0) == 0x20) {timeout_start((uint16_t)40); }
   91B5 74 F0              3867 	mov	a,#0xF0
   91B7 5B                 3868 	anl	a,r3
   91B8 FC                 3869 	mov	r4,a
   91B9 BC 20 0C           3870 	cjne	r4,#0x20,00159$
   91BC 75 8B D8           3871 	mov	_TMR1,#0xD8
   91BF 75 8D FF           3872 	mov	(_TMR1 >> 8),#0xFF
   91C2 D2 8E              3873 	setb	_TR1
   91C4 C2 03              3874 	clr	_timeout
   91C6 80 4F              3875 	sjmp	00183$
   91C8                    3876 00159$:
                           3877 ;	../../shared/src/cal_top.c:635: else if((tempc_step_state&0xf0) == 0x30) { timeout_start((uint16_t)100); }
   91C8 53 03 F0           3878 	anl	ar3,#0xF0
   91CB BB 30 0C           3879 	cjne	r3,#0x30,00156$
   91CE 75 8B 9C           3880 	mov	_TMR1,#0x9C
   91D1 75 8D FF           3881 	mov	(_TMR1 >> 8),#0xFF
   91D4 D2 8E              3882 	setb	_TR1
   91D6 C2 03              3883 	clr	_timeout
   91D8 80 3D              3884 	sjmp	00183$
   91DA                    3885 00156$:
                           3886 ;	../../shared/src/cal_top.c:636: else timeout = 1;
   91DA D2 03              3887 	setb	_timeout
   91DC 80 39              3888 	sjmp	00183$
   91DE                    3889 00165$:
                           3890 ;	../../shared/src/cal_top.c:639: timeout = 1;
   91DE D2 03              3891 	setb	_timeout
                           3892 ;	../../shared/src/cal_top.c:643: break;
                           3893 ;	../../shared/src/cal_top.c:644: case 7:	
   91E0 80 35              3894 	sjmp	00183$
   91E2                    3895 00173$:
                           3896 ;	../../shared/src/cal_top.c:645: if(mcuid==master_mcu && slave_phy_on==0  && reg_ANA_PLL_LOCK_RD) {
   91E2 90 22 00           3897 	mov	dptr,#_MCU_CONTROL_LANE
   91E5 E0                 3898 	movx	a,@dptr
   91E6 FB                 3899 	mov	r3,a
   91E7 90 E6 50           3900 	mov	dptr,#_MCU_CONFIG
   91EA E0                 3901 	movx	a,@dptr
   91EB FC                 3902 	mov	r4,a
   91EC EB                 3903 	mov	a,r3
   91ED B5 04 27           3904 	cjne	a,ar4,00183$
   91F0 90 66 1C           3905 	mov	dptr,#_slave_phy_on
   91F3 E0                 3906 	movx	a,@dptr
   91F4 FB                 3907 	mov	r3,a
   91F5 70 20              3908 	jnz	00183$
   91F7 90 A3 19           3909 	mov	dptr,#(_PM_CMN_REG1 + 0x0001)
   91FA E0                 3910 	movx	a,@dptr
   91FB 30 E6 19           3911 	jnb	acc.6,00183$
                           3912 ;	../../shared/src/cal_top.c:648: if(cmx_PLLAMP_CAL_CONT_EN==1) pll_amp_cal_cont();
   91FE 90 E6 0E           3913 	mov	dptr,#(_CONTROL_CONFIG2 + 0x0002)
   9201 E0                 3914 	movx	a,@dptr
   9202 C4                 3915 	swap	a
   9203 03                 3916 	rr	a
   9204 54 01              3917 	anl	a,#0x01
   9206 FB                 3918 	mov	r3,a
   9207 BB 01 0D           3919 	cjne	r3,#0x01,00183$
   920A C0 02              3920 	push	ar2
   920C 78 CA              3921 	mov	r0,#_pll_amp_cal_cont
   920E 79 C6              3922 	mov	r1,#(_pll_amp_cal_cont >> 8)
   9210 7A 02              3923 	mov	r2,#(_pll_amp_cal_cont >> 16)
   9212 12 00 B3           3924 	lcall	__sdcc_banked_call
   9215 D0 02              3925 	pop	ar2
                           3926 ;	../../shared/src/cal_top.c:651: }
   9217                    3927 00183$:
                           3928 ;	../../shared/src/cal_top.c:652: } while( PHY_NS==ST_INIT &&  cont_cal_inx++<8);
   9217 90 22 31           3929 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0001)
   921A E0                 3930 	movx	a,@dptr
   921B 70 0B              3931 	jnz	00184$
   921D 8A 03              3932 	mov	ar3,r2
   921F 0A                 3933 	inc	r2
   9220 BB 08 00           3934 	cjne	r3,#0x08,00284$
   9223                    3935 00284$:
   9223 50 03              3936 	jnc	00285$
   9225 02 8F 24           3937 	ljmp	00182$
   9228                    3938 00285$:
   9228                    3939 00184$:
                           3940 ;	../../shared/src/cal_top.c:660: cont_cal_on = 0;
   9228 C2 16              3941 	clr	_cont_cal_on
   922A                    3942 00185$:
   922A 02 00 C5           3943 	ljmp	__sdcc_banked_ret
                           3944 ;------------------------------------------------------------
                           3945 ;Allocation info for local variables in function 'phy_check_lane'
                           3946 ;------------------------------------------------------------
                           3947 ;val                       Allocated to registers r2 
                           3948 ;------------------------------------------------------------
                           3949 ;	../../shared/src/cal_top.c:708: void phy_check_lane(uint8_t val) BANKING_CTRL {
                           3950 ;	-----------------------------------------
                           3951 ;	 function phy_check_lane
                           3952 ;	-----------------------------------------
   922D                    3953 _phy_check_lane:
   922D AA 82              3954 	mov	r2,dpl
                           3955 ;	../../shared/src/cal_top.c:709: PHY_CHECK_LANE = val;
   922F 90 22 32           3956 	mov	dptr,#(_MCU_STATUS0_LANE + 0x0002)
   9232 EA                 3957 	mov	a,r2
   9233 F0                 3958 	movx	@dptr,a
                           3959 ;	../../shared/src/cal_top.c:710: if (mcuid == MCU_LANE0)
   9234 90 22 00           3960 	mov	dptr,#_MCU_CONTROL_LANE
   9237 E0                 3961 	movx	a,@dptr
   9238 70 07              3962 	jnz	00102$
                           3963 ;	../../shared/src/cal_top.c:711: PHY_CHECK_LANE0 = val;
   923A 90 E6 B6           3964 	mov	dptr,#(_MCU_INFO_4 + 0x0002)
   923D EA                 3965 	mov	a,r2
   923E F0                 3966 	movx	@dptr,a
   923F 80 05              3967 	sjmp	00104$
   9241                    3968 00102$:
                           3969 ;	../../shared/src/cal_top.c:713: PHY_CHECK_LANE1 = val;
   9241 90 E6 BA           3970 	mov	dptr,#(_MCU_INFO_5 + 0x0002)
   9244 EA                 3971 	mov	a,r2
   9245 F0                 3972 	movx	@dptr,a
   9246                    3973 00104$:
   9246 02 00 C5           3974 	ljmp	__sdcc_banked_ret
                           3975 ;------------------------------------------------------------
                           3976 ;Allocation info for local variables in function 'mcu_align_0'
                           3977 ;------------------------------------------------------------
                           3978 ;val                       Allocated to registers r2 
                           3979 ;------------------------------------------------------------
                           3980 ;	../../shared/src/cal_top.c:716: void mcu_align_0(uint8_t val) BANKING_CTRL {
                           3981 ;	-----------------------------------------
                           3982 ;	 function mcu_align_0
                           3983 ;	-----------------------------------------
   9249                    3984 _mcu_align_0:
   9249 AA 82              3985 	mov	r2,dpl
                           3986 ;	../../shared/src/cal_top.c:718: if(phy_mode==SERDES && SPDCHG_ON_READ) return;
   924B 90 A3 16           3987 	mov	dptr,#(_SYSTEM + 0x0002)
   924E E0                 3988 	movx	a,@dptr
   924F 54 07              3989 	anl	a,#0x07
   9251 FB                 3990 	mov	r3,a
   9252 BB 04 0D           3991 	cjne	r3,#0x04,00102$
   9255 90 22 38           3992 	mov	dptr,#_MCU_STATUS2_LANE
   9258 E0                 3993 	movx	a,@dptr
   9259 FB                 3994 	mov	r3,a
   925A 53 03 01           3995 	anl	ar3,#0x01
   925D BB 01 02           3996 	cjne	r3,#0x01,00102$
   9260 80 3C              3997 	sjmp	00111$
   9262                    3998 00102$:
                           3999 ;	../../shared/src/cal_top.c:722: phy_check_lane(val);
   9262 8A 82              4000 	mov	dpl,r2
   9264 C0 02              4001 	push	ar2
   9266 78 2D              4002 	mov	r0,#_phy_check_lane
   9268 79 92              4003 	mov	r1,#(_phy_check_lane >> 8)
   926A 7A 01              4004 	mov	r2,#(_phy_check_lane >> 16)
   926C 12 00 B3           4005 	lcall	__sdcc_banked_call
   926F D0 02              4006 	pop	ar2
                           4007 ;	../../shared/src/cal_top.c:723: while ((PHY_CHECK_LANE0_READ != val) || (PHY_CHECK_LANE1_READ != val)) {
   9271                    4008 00108$:
   9271 90 E6 B6           4009 	mov	dptr,#(_MCU_INFO_4 + 0x0002)
   9274 E0                 4010 	movx	a,@dptr
   9275 FB                 4011 	mov	r3,a
   9276 B5 02 0A           4012 	cjne	a,ar2,00109$
   9279 90 E6 BA           4013 	mov	dptr,#(_MCU_INFO_5 + 0x0002)
   927C E0                 4014 	movx	a,@dptr
   927D FB                 4015 	mov	r3,a
   927E B5 02 02           4016 	cjne	a,ar2,00125$
   9281 80 1B              4017 	sjmp	00111$
   9283                    4018 00125$:
   9283                    4019 00109$:
                           4020 ;	../../shared/src/cal_top.c:724: if(SYNC_STATUS_LANE0_EN_READ==0 || SYNC_STATUS_LANE1_EN_READ==0) break;
   9283 90 E6 BE           4021 	mov	dptr,#(_MCU_INFO_12 + 0x0002)
   9286 E0                 4022 	movx	a,@dptr
   9287 60 15              4023 	jz	00111$
   9289 90 E6 C2           4024 	mov	dptr,#(_MCU_INFO_13 + 0x0002)
   928C E0                 4025 	movx	a,@dptr
   928D 60 0F              4026 	jz	00111$
                           4027 ;	../../shared/src/cal_top.c:725: short_delay();
   928F C0 02              4028 	push	ar2
   9291 78 05              4029 	mov	r0,#_short_delay
   9293 79 C0              4030 	mov	r1,#(_short_delay >> 8)
   9295 7A 02              4031 	mov	r2,#(_short_delay >> 16)
   9297 12 00 B3           4032 	lcall	__sdcc_banked_call
   929A D0 02              4033 	pop	ar2
   929C 80 D3              4034 	sjmp	00108$
   929E                    4035 00111$:
   929E 02 00 C5           4036 	ljmp	__sdcc_banked_ret
                           4037 ;------------------------------------------------------------
                           4038 ;Allocation info for local variables in function 'all_cal_ext'
                           4039 ;------------------------------------------------------------
                           4040 ;lc_pll_rate               Allocated to registers b0 
                           4041 ;ring_pll_rate             Allocated to stack - offset 1
                           4042 ;------------------------------------------------------------
                           4043 ;	../../shared/src/cal_top.c:744: void all_cal_ext(void) BANKING_CTRL {
                           4044 ;	-----------------------------------------
                           4045 ;	 function all_cal_ext
                           4046 ;	-----------------------------------------
   92A1                    4047 _all_cal_ext:
   92A1 C0 18              4048 	push	_bp
   92A3 85 81 18           4049 	mov	_bp,sp
   92A6 05 81              4050 	inc	sp
                           4051 ;	../../shared/src/cal_top.c:747: loadspeedtbl_gen();
   92A8 12 43 41           4052 	lcall	_loadspeedtbl_gen
                           4053 ;	../../shared/src/cal_top.c:748: if(phy_mode==SERDES) {
   92AB 90 A3 16           4054 	mov	dptr,#(_SYSTEM + 0x0002)
   92AE E0                 4055 	movx	a,@dptr
   92AF 54 07              4056 	anl	a,#0x07
   92B1 FA                 4057 	mov	r2,a
   92B2 BA 04 11           4058 	cjne	r2,#0x04,00104$
                           4059 ;	../../shared/src/cal_top.c:749: if(gen_pll_rate==pre_gen_pll_rate) return;
   92B5 90 67 8C           4060 	mov	dptr,#_gen_pll_rate
   92B8 E0                 4061 	movx	a,@dptr
   92B9 FA                 4062 	mov	r2,a
   92BA 90 67 8D           4063 	mov	dptr,#_pre_gen_pll_rate
   92BD E0                 4064 	movx	a,@dptr
   92BE FB                 4065 	mov	r3,a
   92BF EA                 4066 	mov	a,r2
   92C0 B5 03 03           4067 	cjne	a,ar3,00104$
   92C3 02 94 4F           4068 	ljmp	00124$
   92C6                    4069 00104$:
                           4070 ;	../../shared/src/cal_top.c:752: if( mcuid==master_mcu ) {
   92C6 90 22 00           4071 	mov	dptr,#_MCU_CONTROL_LANE
   92C9 E0                 4072 	movx	a,@dptr
   92CA FA                 4073 	mov	r2,a
   92CB 90 E6 50           4074 	mov	dptr,#_MCU_CONFIG
   92CE E0                 4075 	movx	a,@dptr
   92CF FB                 4076 	mov	r3,a
   92D0 EA                 4077 	mov	a,r2
   92D1 B5 03 02           4078 	cjne	a,ar3,00140$
   92D4 80 03              4079 	sjmp	00141$
   92D6                    4080 00140$:
   92D6 02 93 5F           4081 	ljmp	00115$
   92D9                    4082 00141$:
                           4083 ;	../../shared/src/cal_top.c:754: pll_clk_ready_0();
   92D9 78 77              4084 	mov	r0,#_pll_clk_ready_0
   92DB 79 D4              4085 	mov	r1,#(_pll_clk_ready_0 >> 8)
   92DD 7A 02              4086 	mov	r2,#(_pll_clk_ready_0 >> 16)
   92DF 12 00 B3           4087 	lcall	__sdcc_banked_call
                           4088 ;	../../shared/src/cal_top.c:757: reg_LCVCO_DAC_LSB_4_0 = 0x10;
   92E2 90 82 B4           4089 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_173
   92E5 E0                 4090 	movx	a,@dptr
   92E6 54 07              4091 	anl	a,#0x07
   92E8 44 80              4092 	orl	a,#0x80
   92EA F0                 4093 	movx	@dptr,a
                           4094 ;	../../shared/src/cal_top.c:758: reg_LCVCO_DAC_MSB_2_0 = 0x02;
   92EB 90 82 B4           4095 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_173
   92EE E0                 4096 	movx	a,@dptr
   92EF 54 F8              4097 	anl	a,#0xf8
   92F1 44 02              4098 	orl	a,#0x02
   92F3 F0                 4099 	movx	@dptr,a
                           4100 ;	../../shared/src/cal_top.c:760: reg_LCCAP_MSB_3_0 = 0;
   92F4 90 82 C8           4101 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_178
   92F7 E0                 4102 	movx	a,@dptr
   92F8 54 0F              4103 	anl	a,#0x0f
   92FA F0                 4104 	movx	@dptr,a
                           4105 ;	../../shared/src/cal_top.c:770: if( phy_mode==SERDES ) {
   92FB 90 A3 16           4106 	mov	dptr,#(_SYSTEM + 0x0002)
   92FE E0                 4107 	movx	a,@dptr
   92FF 54 07              4108 	anl	a,#0x07
   9301 FA                 4109 	mov	r2,a
   9302 BA 04 06           4110 	cjne	r2,#0x04,00112$
                           4111 ;	../../shared/src/cal_top.c:771: lc_pll_rate = 0; ring_pll_rate = 0;
   9305 C2 28              4112 	clr	b0
   9307 C2 29              4113 	clr	b1
   9309 80 2B              4114 	sjmp	00113$
   930B                    4115 00112$:
                           4116 ;	../../shared/src/cal_top.c:774: if( lc_pll_used ) {
   930B 30 11 1D           4117 	jnb	_lc_pll_used,00109$
                           4118 ;	../../shared/src/cal_top.c:775: if(use_ring_pll) { lc_pll_rate = !tx_pll_rate; ring_pll_rate = tx_pll_rate; }
   930E 30 10 0D           4119 	jnb	_use_ring_pll,00106$
   9311 A2 0F              4120 	mov	c,_tx_pll_rate
   9313 B3                 4121 	cpl	c
   9314 92 2A              4122 	mov  b2,c
   9316 92 28              4123 	mov	b0,c
   9318 A2 0F              4124 	mov	c,_tx_pll_rate
   931A 92 29              4125 	mov	b1,c
   931C 80 18              4126 	sjmp	00113$
   931E                    4127 00106$:
                           4128 ;	../../shared/src/cal_top.c:776: else {	lc_pll_rate = tx_pll_rate; ring_pll_rate = !tx_pll_rate; }
   931E A2 0F              4129 	mov	c,_tx_pll_rate
   9320 92 28              4130 	mov	b0,c
   9322 A2 0F              4131 	mov	c,_tx_pll_rate
   9324 B3                 4132 	cpl	c
   9325 92 2A              4133 	mov  b2,c
   9327 92 29              4134 	mov	b1,c
   9329 80 0B              4135 	sjmp	00113$
   932B                    4136 00109$:
                           4137 ;	../../shared/src/cal_top.c:778: else {	lc_pll_rate = !tx_pll_rate; ring_pll_rate = tx_pll_rate; }
   932B A2 0F              4138 	mov	c,_tx_pll_rate
   932D B3                 4139 	cpl	c
   932E 92 2A              4140 	mov  b2,c
   9330 92 28              4141 	mov	b0,c
   9332 A2 0F              4142 	mov	c,_tx_pll_rate
   9334 92 29              4143 	mov	b1,c
   9336                    4144 00113$:
                           4145 ;	../../shared/src/cal_top.c:781: PLL_RATE_SEL = tx_pll_rate;
   9336 A2 0F              4146 	mov	c,_tx_pll_rate
   9338 E4                 4147 	clr	a
   9339 33                 4148 	rlc	a
   933A 90 E6 1E           4149 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0002)
   933D F0                 4150 	movx	@dptr,a
                           4151 ;	../../shared/src/cal_top.c:782: loadspeedtbl_pll(lc_pll_rate);
   933E A2 28              4152 	mov	c,b0
   9340 E4                 4153 	clr	a
   9341 33                 4154 	rlc	a
   9342 F5 82              4155 	mov	dpl,a
   9344 C0 25              4156 	push	bits
   9346 12 39 86           4157 	lcall	_loadspeedtbl_pll
   9349 D0 25              4158 	pop	bits
                           4159 ;	../../shared/src/cal_top.c:784: reg_RESET_ANA = 0;
   934B 90 A3 19           4160 	mov	dptr,#(_PM_CMN_REG1 + 0x0001)
   934E E0                 4161 	movx	a,@dptr
   934F 54 EF              4162 	anl	a,#0xef
   9351 F0                 4163 	movx	@dptr,a
                           4164 ;	../../shared/src/cal_top.c:788: pll_clk_ready_1();
   9352 C0 25              4165 	push	bits
   9354 78 47              4166 	mov	r0,#_pll_clk_ready_1
   9356 79 D4              4167 	mov	r1,#(_pll_clk_ready_1 >> 8)
   9358 7A 02              4168 	mov	r2,#(_pll_clk_ready_1 >> 16)
   935A 12 00 B3           4169 	lcall	__sdcc_banked_call
   935D D0 25              4170 	pop	bits
   935F                    4171 00115$:
                           4172 ;	../../shared/src/cal_top.c:806: reg_MCU_DEBUG0_LANE_7_0 = 0x32;
   935F 90 22 B4           4173 	mov	dptr,#_MCU_DEBUG0_LANE
   9362 74 32              4174 	mov	a,#0x32
   9364 F0                 4175 	movx	@dptr,a
                           4176 ;	../../shared/src/cal_top.c:807: reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
   9365 90 66 15           4177 	mov	dptr,#_gen_tx
   9368 E0                 4178 	movx	a,@dptr
   9369 90 22 B5           4179 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0001)
   936C F0                 4180 	movx	@dptr,a
                           4181 ;	../../shared/src/cal_top.c:808: reg_MCU_DEBUG2_LANE_7_0 = gen_rx;
   936D 90 66 16           4182 	mov	dptr,#_gen_rx
   9370 E0                 4183 	movx	a,@dptr
   9371 90 22 B6           4184 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0002)
   9374 F0                 4185 	movx	@dptr,a
                           4186 ;	../../shared/src/cal_top.c:809: reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
   9375 90 67 8C           4187 	mov	dptr,#_gen_pll_rate
   9378 E0                 4188 	movx	a,@dptr
   9379 90 22 B7           4189 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0003)
   937C F0                 4190 	movx	@dptr,a
                           4191 ;	../../shared/src/cal_top.c:810: reg_MCU_DEBUG4_LANE_7_0 = max_gen;
   937D 90 63 00           4192 	mov	dptr,#_max_gen
   9380 E0                 4193 	movx	a,@dptr
   9381 90 22 B8           4194 	mov	dptr,#_MCU_DEBUG1_LANE
   9384 F0                 4195 	movx	@dptr,a
                           4196 ;	../../shared/src/cal_top.c:811: reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
   9385 A2 12              4197 	mov	c,_ring_pll_enabled
   9387 E4                 4198 	clr	a
   9388 33                 4199 	rlc	a
   9389 90 22 B9           4200 	mov	dptr,#(_MCU_DEBUG1_LANE + 0x0001)
   938C F0                 4201 	movx	@dptr,a
                           4202 ;	../../shared/src/cal_top.c:812: reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
   938D A2 10              4203 	mov	c,_use_ring_pll
   938F E4                 4204 	clr	a
   9390 33                 4205 	rlc	a
   9391 90 22 BA           4206 	mov	dptr,#(_MCU_DEBUG1_LANE + 0x0002)
   9394 F0                 4207 	movx	@dptr,a
                           4208 ;	../../shared/src/cal_top.c:813: reg_MCU_DEBUG7_LANE_7_0 = tx_pll_rate;
   9395 A2 0F              4209 	mov	c,_tx_pll_rate
   9397 E4                 4210 	clr	a
   9398 33                 4211 	rlc	a
   9399 90 22 BB           4212 	mov	dptr,#(_MCU_DEBUG1_LANE + 0x0003)
   939C F0                 4213 	movx	@dptr,a
                           4214 ;	../../shared/src/cal_top.c:814: reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;
   939D 90 66 24           4215 	mov	dptr,#_ring_lane_sel
   93A0 E0                 4216 	movx	a,@dptr
   93A1 FA                 4217 	mov	r2,a
   93A2 90 22 BC           4218 	mov	dptr,#_MCU_DEBUG2_LANE
   93A5 F0                 4219 	movx	@dptr,a
                           4220 ;	../../shared/src/cal_top.c:816: reg_RING_PLL_DISABLE = !ring_pll_enabled;
   93A6 A2 12              4221 	mov	c,_ring_pll_enabled
   93A8 B3                 4222 	cpl	c
   93A9 92 28              4223 	mov  b0,c
   93AB E4                 4224 	clr	a
   93AC 33                 4225 	rlc	a
   93AD FB                 4226 	mov	r3,a
   93AE 90 A3 24           4227 	mov	dptr,#_INPUT_CMN_PIN_REG2
   93B1 13                 4228 	rrc	a
   93B2 E0                 4229 	movx	a,@dptr
   93B3 92 E0              4230 	mov	acc.0,c
   93B5 F0                 4231 	movx	@dptr,a
                           4232 ;	../../shared/src/cal_top.c:817: if( ring_lane_sel )
   93B6 EA                 4233 	mov	a,r2
   93B7 70 03              4234 	jnz	00146$
   93B9 02 94 3F           4235 	ljmp	00121$
   93BC                    4236 00146$:
                           4237 ;	../../shared/src/cal_top.c:819: if( phy_mode==SERDES ) { ring_pll_rate = 0; }
   93BC 90 A3 16           4238 	mov	dptr,#(_SYSTEM + 0x0002)
   93BF E0                 4239 	movx	a,@dptr
   93C0 54 07              4240 	anl	a,#0x07
   93C2 FA                 4241 	mov	r2,a
   93C3 BA 04 02           4242 	cjne	r2,#0x04,00117$
   93C6 C2 29              4243 	clr	b1
   93C8                    4244 00117$:
                           4245 ;	../../shared/src/cal_top.c:821: if(ring_pll_enabled) {
   93C8 30 12 74           4246 	jnb	_ring_pll_enabled,00121$
                           4247 ;	../../shared/src/cal_top.c:822: pll_clk_ready_ring_0();
   93CB C0 25              4248 	push	bits
   93CD 78 8F              4249 	mov	r0,#_pll_clk_ready_ring_0
   93CF 79 D4              4250 	mov	r1,#(_pll_clk_ready_ring_0 >> 8)
   93D1 7A 02              4251 	mov	r2,#(_pll_clk_ready_ring_0 >> 16)
   93D3 12 00 B3           4252 	lcall	__sdcc_banked_call
   93D6 D0 25              4253 	pop	bits
                           4254 ;	../../shared/src/cal_top.c:823: loadspeedtbl_ringpll(ring_pll_rate);
   93D8 A2 29              4255 	mov	c,b1
   93DA E4                 4256 	clr	a
   93DB 33                 4257 	rlc	a
   93DC F5 82              4258 	mov	dpl,a
   93DE 12 3D 59           4259 	lcall	_loadspeedtbl_ringpll
                           4260 ;	../../shared/src/cal_top.c:838: reg_PLL_SPEED_RING_4_0 = 0x10;
   93E1 90 83 00           4261 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_192
   93E4 E0                 4262 	movx	a,@dptr
   93E5 54 07              4263 	anl	a,#0x07
   93E7 44 80              4264 	orl	a,#0x80
   93E9 F0                 4265 	movx	@dptr,a
                           4266 ;	../../shared/src/cal_top.c:839: reg_PLL_SLLP_DAC_COARSE_RING_3_0 = 0x8;
   93EA 90 83 04           4267 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   93ED E0                 4268 	movx	a,@dptr
   93EE 54 F0              4269 	anl	a,#0xf0
   93F0 44 08              4270 	orl	a,#0x08
   93F2 F0                 4271 	movx	@dptr,a
                           4272 ;	../../shared/src/cal_top.c:840: reg_PLL_SLLP_DAC_FINE_RING_10_8 = 0x3;
   93F3 90 83 08           4273 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_194
   93F6 E0                 4274 	movx	a,@dptr
   93F7 54 1F              4275 	anl	a,#0x1f
   93F9 44 60              4276 	orl	a,#0x60
   93FB F0                 4277 	movx	@dptr,a
                           4278 ;	../../shared/src/cal_top.c:841: reg_PLL_SLLP_DAC_FINE_RING_7_0 = 0x84;
   93FC 90 83 0C           4279 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_195
   93FF 74 84              4280 	mov	a,#0x84
   9401 F0                 4281 	movx	@dptr,a
                           4282 ;	../../shared/src/cal_top.c:842: reg_PLL_SLLP_DAC_RANGE_SHIFT_RING_1_0 = 0;
   9402 90 83 04           4283 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   9405 E0                 4284 	movx	a,@dptr
   9406 54 CF              4285 	anl	a,#0xcf
   9408 F0                 4286 	movx	@dptr,a
                           4287 ;	../../shared/src/cal_top.c:844: reg_ANA_PU_PLL_RING = 1;
   9409 90 A3 24           4288 	mov	dptr,#_INPUT_CMN_PIN_REG2
   940C E0                 4289 	movx	a,@dptr
   940D 44 20              4290 	orl	a,#0x20
   940F F0                 4291 	movx	@dptr,a
                           4292 ;	../../shared/src/cal_top.c:845: delay01(5);
   9410 90 00 05           4293 	mov	dptr,#0x0005
   9413 78 16              4294 	mov	r0,#_delay01
   9415 79 BC              4295 	mov	r1,#(_delay01 >> 8)
   9417 7A 02              4296 	mov	r2,#(_delay01 >> 16)
   9419 12 00 B3           4297 	lcall	__sdcc_banked_call
                           4298 ;	../../shared/src/cal_top.c:846: reg_ANA_PU_PLL_DLY_RING = 1;
   941C 90 A3 4D           4299 	mov	dptr,#(_PM_CMN_REG2 + 0x0001)
   941F E0                 4300 	movx	a,@dptr
   9420 44 04              4301 	orl	a,#0x04
   9422 F0                 4302 	movx	@dptr,a
                           4303 ;	../../shared/src/cal_top.c:847: delay01(5);
   9423 90 00 05           4304 	mov	dptr,#0x0005
   9426 78 16              4305 	mov	r0,#_delay01
   9428 79 BC              4306 	mov	r1,#(_delay01 >> 8)
   942A 7A 02              4307 	mov	r2,#(_delay01 >> 16)
   942C 12 00 B3           4308 	lcall	__sdcc_banked_call
                           4309 ;	../../shared/src/cal_top.c:848: reg_RESET_ANA_RING = 0;
   942F 90 A3 33           4310 	mov	dptr,#(_PLLCAL_REG1 + 0x0003)
   9432 E0                 4311 	movx	a,@dptr
   9433 54 F7              4312 	anl	a,#0xf7
   9435 F0                 4313 	movx	@dptr,a
                           4314 ;	../../shared/src/cal_top.c:853: pll_clk_ready_ring_1();
   9436 78 A7              4315 	mov	r0,#_pll_clk_ready_ring_1
   9438 79 D4              4316 	mov	r1,#(_pll_clk_ready_ring_1 >> 8)
   943A 7A 02              4317 	mov	r2,#(_pll_clk_ready_ring_1 >> 16)
   943C 12 00 B3           4318 	lcall	__sdcc_banked_call
   943F                    4319 00121$:
                           4320 ;	../../shared/src/cal_top.c:858: if(serdes_ring_lane_en==0)
   943F 90 66 23           4321 	mov	dptr,#_serdes_ring_lane_en
   9442 E0                 4322 	movx	a,@dptr
   9443 FA                 4323 	mov	r2,a
   9444 70 09              4324 	jnz	00124$
                           4325 ;	../../shared/src/cal_top.c:859: check_pll_clk_ready();
   9446 78 D7              4326 	mov	r0,#_check_pll_clk_ready
   9448 79 D4              4327 	mov	r1,#(_check_pll_clk_ready >> 8)
   944A 7A 02              4328 	mov	r2,#(_check_pll_clk_ready >> 16)
   944C 12 00 B3           4329 	lcall	__sdcc_banked_call
   944F                    4330 00124$:
   944F 85 18 81           4331 	mov	sp,_bp
   9452 D0 18              4332 	pop	_bp
   9454 02 00 C5           4333 	ljmp	__sdcc_banked_ret
                           4334 ;------------------------------------------------------------
                           4335 ;Allocation info for local variables in function 'clear_normal_mode_cal_en'
                           4336 ;------------------------------------------------------------
                           4337 ;------------------------------------------------------------
                           4338 ;	../../shared/src/cal_top.c:883: void clear_normal_mode_cal_en(void) BANKING_CTRL {
                           4339 ;	-----------------------------------------
                           4340 ;	 function clear_normal_mode_cal_en
                           4341 ;	-----------------------------------------
   9457                    4342 _clear_normal_mode_cal_en:
                           4343 ;	../../shared/src/cal_top.c:894: TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.VAL = 0x00040303;
   9457 90 26 64           4344 	mov	dptr,#_TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE
   945A 74 03              4345 	mov	a,#0x03
   945C F0                 4346 	movx	@dptr,a
   945D A3                 4347 	inc	dptr
   945E F0                 4348 	movx	@dptr,a
   945F A3                 4349 	inc	dptr
   9460 74 04              4350 	mov	a,#0x04
   9462 F0                 4351 	movx	@dptr,a
   9463 A3                 4352 	inc	dptr
                           4353 ;	../../shared/src/cal_top.c:895: TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.VAL = 0;
   9464 E4                 4354 	clr	a
   9465 F0                 4355 	movx	@dptr,a
   9466 90 26 64           4356 	mov	dptr,#_TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE
   9469 F0                 4357 	movx	@dptr,a
   946A A3                 4358 	inc	dptr
   946B F0                 4359 	movx	@dptr,a
   946C A3                 4360 	inc	dptr
   946D F0                 4361 	movx	@dptr,a
   946E A3                 4362 	inc	dptr
   946F F0                 4363 	movx	@dptr,a
                           4364 ;	../../shared/src/cal_top.c:896: RX_LANE_INTERRUPT_REG1.BT.B3 = 0x60;
                           4365 ;	../../shared/src/cal_top.c:897: RX_LANE_INTERRUPT_REG1.BT.B3 = 0;
   9470 90 21 5B           4366 	mov	dptr,#(_RX_LANE_INTERRUPT_REG1 + 0x0003)
   9473 74 60              4367 	mov	a,#0x60
   9475 F0                 4368 	movx	@dptr,a
   9476 E4                 4369 	clr	a
   9477 F0                 4370 	movx	@dptr,a
                           4371 ;	../../shared/src/cal_top.c:899: if(reg_PIN_PLL_READY_RX_LANE==0 || reg_PIN_PLL_READY_TX_LANE==0) {
   9478 90 21 02           4372 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   947B E0                 4373 	movx	a,@dptr
   947C 30 E6 07           4374 	jnb	acc.6,00101$
   947F 90 20 02           4375 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   9482 E0                 4376 	movx	a,@dptr
   9483 20 E2 2E           4377 	jb	acc.2,00102$
   9486                    4378 00101$:
                           4379 ;	../../shared/src/cal_top.c:901: TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B0 = 0x08; //APTA
                           4380 ;	../../shared/src/cal_top.c:902: TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B0 = 0;
   9486 90 26 64           4381 	mov	dptr,#_TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE
   9489 74 08              4382 	mov	a,#0x08
   948B F0                 4383 	movx	@dptr,a
   948C E4                 4384 	clr	a
   948D F0                 4385 	movx	@dptr,a
                           4386 ;	../../shared/src/cal_top.c:908: TX_TRAIN_CTRL_LANE.VAL &= 0xa01f0002;
   948E 90 26 78           4387 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   9491 E0                 4388 	movx	a,@dptr
   9492 FA                 4389 	mov	r2,a
   9493 A3                 4390 	inc	dptr
   9494 E0                 4391 	movx	a,@dptr
   9495 A3                 4392 	inc	dptr
   9496 E0                 4393 	movx	a,@dptr
   9497 FC                 4394 	mov	r4,a
   9498 A3                 4395 	inc	dptr
   9499 E0                 4396 	movx	a,@dptr
   949A FD                 4397 	mov	r5,a
   949B 53 02 02           4398 	anl	ar2,#0x02
   949E 7B 00              4399 	mov	r3,#0x00
   94A0 53 04 1F           4400 	anl	ar4,#0x1F
   94A3 53 05 A0           4401 	anl	ar5,#0xA0
   94A6 90 26 78           4402 	mov	dptr,#_TX_TRAIN_CTRL_LANE
   94A9 EA                 4403 	mov	a,r2
   94AA F0                 4404 	movx	@dptr,a
   94AB A3                 4405 	inc	dptr
   94AC EB                 4406 	mov	a,r3
   94AD F0                 4407 	movx	@dptr,a
   94AE A3                 4408 	inc	dptr
   94AF EC                 4409 	mov	a,r4
   94B0 F0                 4410 	movx	@dptr,a
   94B1 A3                 4411 	inc	dptr
   94B2 ED                 4412 	mov	a,r5
   94B3 F0                 4413 	movx	@dptr,a
   94B4                    4414 00102$:
                           4415 ;	../../shared/src/cal_top.c:1016: if(PHY_MCU_REMOTE_REQ_LANE) {
   94B4 90 22 E4           4416 	mov	dptr,#_MCU_COMMAND0
   94B7 E0                 4417 	movx	a,@dptr
   94B8 30 E0 0D           4418 	jnb	acc.0,00105$
                           4419 ;	../../shared/src/cal_top.c:1017: lnx_PHY_LOCAL_STATUS_LANE_7_0 = 0x2; //NOT_VAILD
   94BB 90 60 2E           4420 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS2_LANE + 0x0002)
   94BE 74 02              4421 	mov	a,#0x02
   94C0 F0                 4422 	movx	@dptr,a
                           4423 ;	../../shared/src/cal_top.c:1018: lnx_PHY_MCU_LOCAL_ACK_LANE = 1;
   94C1 90 60 33           4424 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   94C4 E0                 4425 	movx	a,@dptr
   94C5 44 01              4426 	orl	a,#0x01
   94C7 F0                 4427 	movx	@dptr,a
   94C8                    4428 00105$:
                           4429 ;	../../shared/src/cal_top.c:1032: if( cont_cal_on==0) return;
   94C8 20 16 03           4430 	jb	_cont_cal_on,00107$
   94CB 02 95 65           4431 	ljmp	00110$
   94CE                    4432 00107$:
                           4433 ;	../../shared/src/cal_top.c:1033: cont_cal_on = 0;
   94CE C2 16              4434 	clr	_cont_cal_on
                           4435 ;	../../shared/src/cal_top.c:1036: if(mcuid== master_mcu) 
   94D0 90 22 00           4436 	mov	dptr,#_MCU_CONTROL_LANE
   94D3 E0                 4437 	movx	a,@dptr
   94D4 FA                 4438 	mov	r2,a
   94D5 90 E6 50           4439 	mov	dptr,#_MCU_CONFIG
   94D8 E0                 4440 	movx	a,@dptr
   94D9 FB                 4441 	mov	r3,a
   94DA EA                 4442 	mov	a,r2
   94DB B5 03 09           4443 	cjne	a,ar3,00109$
                           4444 ;	../../shared/src/cal_top.c:1037: pll_temp_jump_idle();
   94DE 78 88              4445 	mov	r0,#_pll_temp_jump_idle
   94E0 79 CC              4446 	mov	r1,#(_pll_temp_jump_idle >> 8)
   94E2 7A 02              4447 	mov	r2,#(_pll_temp_jump_idle >> 16)
   94E4 12 00 B3           4448 	lcall	__sdcc_banked_call
   94E7                    4449 00109$:
                           4450 ;	../../shared/src/cal_top.c:1038: reg_ALIGN90_SYN_CLK_LANE = 0;
   94E7 90 00 34           4451 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_13
   94EA E0                 4452 	movx	a,@dptr
   94EB 54 FE              4453 	anl	a,#0xfe
   94ED F0                 4454 	movx	@dptr,a
                           4455 ;	../../shared/src/cal_top.c:1039: reg_RXDCC_DAC_SYNC_CLK_LANE = 0;
   94EE 90 00 44           4456 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_17
   94F1 E0                 4457 	movx	a,@dptr
   94F2 54 EF              4458 	anl	a,#0xef
   94F4 F0                 4459 	movx	@dptr,a
                           4460 ;	../../shared/src/cal_top.c:1040: reg_TRXDCC_CAL_CLK100KHZ_LANE = 0;
   94F5 90 02 20           4461 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   94F8 E0                 4462 	movx	a,@dptr
   94F9 54 FE              4463 	anl	a,#0xfe
   94FB F0                 4464 	movx	@dptr,a
                           4465 ;	../../shared/src/cal_top.c:1041: reg_RXDCC_EN_DLLCLK_LANE = 0;
   94FC 90 02 18           4466 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_134
   94FF E0                 4467 	movx	a,@dptr
   9500 54 FE              4468 	anl	a,#0xfe
   9502 F0                 4469 	movx	@dptr,a
                           4470 ;	../../shared/src/cal_top.c:1042: reg_RXDCC_EN_DATACLK_LANE = 0;
   9503 90 02 1C           4471 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_135
   9506 E0                 4472 	movx	a,@dptr
   9507 54 FE              4473 	anl	a,#0xfe
   9509 F0                 4474 	movx	@dptr,a
                           4475 ;	../../shared/src/cal_top.c:1043: reg_RXDCC_EN_EOMCLK_LANE = 0;
   950A 90 00 3C           4476 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_15
   950D E0                 4477 	movx	a,@dptr
   950E 54 FD              4478 	anl	a,#0xfd
   9510 F0                 4479 	movx	@dptr,a
                           4480 ;	../../shared/src/cal_top.c:1044: reg_RXDCC_HG_DLLCLK_LANE = 0;
   9511 90 02 1C           4481 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_135
   9514 E0                 4482 	movx	a,@dptr
   9515 54 FD              4483 	anl	a,#0xfd
   9517 F0                 4484 	movx	@dptr,a
                           4485 ;	../../shared/src/cal_top.c:1045: reg_RXDCC_HG_DATACLK_LANE = 0;
   9518 90 02 20           4486 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   951B E0                 4487 	movx	a,@dptr
   951C 54 FD              4488 	anl	a,#0xfd
   951E F0                 4489 	movx	@dptr,a
                           4490 ;	../../shared/src/cal_top.c:1046: reg_RXDCC_HG_EOMCLK_LANE = 0;
   951F 90 00 40           4491 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_16
   9522 E0                 4492 	movx	a,@dptr
   9523 54 FD              4493 	anl	a,#0xfd
   9525 F0                 4494 	movx	@dptr,a
                           4495 ;	../../shared/src/cal_top.c:1047: reg_TRX_IMPCAL_CLK = 0;
   9526 90 82 2C           4496 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_139
   9529 E0                 4497 	movx	a,@dptr
   952A 54 7F              4498 	anl	a,#0x7f
   952C F0                 4499 	movx	@dptr,a
                           4500 ;	../../shared/src/cal_top.c:1048: reg_LCPLL_DCC_CLK = 0;
   952D 90 82 D8           4501 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_182
   9530 E0                 4502 	movx	a,@dptr
   9531 54 FE              4503 	anl	a,#0xfe
   9533 F0                 4504 	movx	@dptr,a
                           4505 ;	../../shared/src/cal_top.c:1049: reg_RXDCC_CAL_EN_LANE = 0;
   9534 90 00 40           4506 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_16
   9537 E0                 4507 	movx	a,@dptr
   9538 54 FE              4508 	anl	a,#0xfe
   953A F0                 4509 	movx	@dptr,a
                           4510 ;	../../shared/src/cal_top.c:1050: reg_TXDCCCAL_EN_LANE = 0;
   953B 90 02 4C           4511 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_147
   953E E0                 4512 	movx	a,@dptr
   953F 54 7F              4513 	anl	a,#0x7f
   9541 F0                 4514 	movx	@dptr,a
                           4515 ;	../../shared/src/cal_top.c:1051: reg_TXDCCCAL_PDIV_EN_LANE = 0;
   9542 90 02 5C           4516 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_151
   9545 E0                 4517 	movx	a,@dptr
   9546 54 FD              4518 	anl	a,#0xfd
   9548 F0                 4519 	movx	@dptr,a
                           4520 ;	../../shared/src/cal_top.c:1052: reg_TX_TDCAL_EN_LANE = 0;
   9549 90 00 60           4521 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_24
   954C E0                 4522 	movx	a,@dptr
   954D 54 FD              4523 	anl	a,#0xfd
   954F F0                 4524 	movx	@dptr,a
                           4525 ;	../../shared/src/cal_top.c:1053: reg_LCPLL_DCC_CAL_EN = 0;
   9550 90 82 DC           4526 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_183
   9553 E0                 4527 	movx	a,@dptr
   9554 54 7F              4528 	anl	a,#0x7f
   9556 F0                 4529 	movx	@dptr,a
                           4530 ;	../../shared/src/cal_top.c:1058: reg_PLL_SLLP_DAC_VALID_RING = 0;
   9557 90 83 04           4531 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   955A E0                 4532 	movx	a,@dptr
   955B 54 BF              4533 	anl	a,#0xbf
   955D F0                 4534 	movx	@dptr,a
                           4535 ;	../../shared/src/cal_top.c:1059: reg_PLL_CAL_EN_RING = 0;
   955E 90 83 10           4536 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_196
   9561 E0                 4537 	movx	a,@dptr
   9562 54 7F              4538 	anl	a,#0x7f
   9564 F0                 4539 	movx	@dptr,a
   9565                    4540 00110$:
   9565 02 00 C5           4541 	ljmp	__sdcc_banked_ret
                           4542 	.area CSEG    (CODE)
                           4543 	.area CSEG    (CODE)
                           4544 	.area CABS    (ABS,CODE)
