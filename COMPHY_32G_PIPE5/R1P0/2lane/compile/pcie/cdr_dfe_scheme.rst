                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:22 2018
                              5 ;--------------------------------------------------------
                              6 	.module cdr_dfe_scheme
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _cds_table
                             13 	.globl _TF2
                             14 	.globl _TI
                             15 	.globl _RI
                             16 	.globl _EX12
                             17 	.globl _EX11
                             18 	.globl _EX10
                             19 	.globl _EX9
                             20 	.globl _EX8
                             21 	.globl _ES1
                             22 	.globl _PS1
                             23 	.globl _EX6
                             24 	.globl _EX5
                             25 	.globl _EX4
                             26 	.globl _EX3
                             27 	.globl _EX2
                             28 	.globl _EX7
                             29 	.globl _EA
                             30 	.globl _WDT
                             31 	.globl _ET2
                             32 	.globl _ES
                             33 	.globl _ET1
                             34 	.globl _EX1
                             35 	.globl _ET0
                             36 	.globl _EX0
                             37 	.globl _TF1
                             38 	.globl _TR1
                             39 	.globl _TF0
                             40 	.globl _TR0
                             41 	.globl _IE1
                             42 	.globl _IT1
                             43 	.globl _IE0
                             44 	.globl _IT0
                             45 	.globl _P3_7
                             46 	.globl _P3_6
                             47 	.globl _P3_5
                             48 	.globl _P3_4
                             49 	.globl _P3_3
                             50 	.globl _P3_2
                             51 	.globl _P3_1
                             52 	.globl _P3_0
                             53 	.globl _P2_7
                             54 	.globl _P2_6
                             55 	.globl _P2_5
                             56 	.globl _P2_4
                             57 	.globl _P2_3
                             58 	.globl _P2_2
                             59 	.globl _P2_1
                             60 	.globl _P2_0
                             61 	.globl _P1_7
                             62 	.globl _P1_6
                             63 	.globl _P1_5
                             64 	.globl _P1_4
                             65 	.globl _P1_3
                             66 	.globl _P1_2
                             67 	.globl _P1_1
                             68 	.globl _P1_0
                             69 	.globl _P0_7
                             70 	.globl _P0_6
                             71 	.globl _P0_5
                             72 	.globl _P0_4
                             73 	.globl _P0_3
                             74 	.globl _P0_2
                             75 	.globl _P0_1
                             76 	.globl _P0_0
                             77 	.globl _DMAC
                             78 	.globl _DMATA
                             79 	.globl _DMASA
                             80 	.globl _TMR2
                             81 	.globl _TMR1
                             82 	.globl _TMR0
                             83 	.globl _SRST
                             84 	.globl _B
                             85 	.globl _EIE
                             86 	.globl _ACC
                             87 	.globl _ADCON
                             88 	.globl _PSW
                             89 	.globl _TH2
                             90 	.globl _TL2
                             91 	.globl _RCAP2H
                             92 	.globl _RCAP2L
                             93 	.globl _T2CON
                             94 	.globl _CCEN
                             95 	.globl _IRCON
                             96 	.globl _S0RELH
                             97 	.globl _IP1
                             98 	.globl _IEN1
                             99 	.globl _DMAM1
                            100 	.globl _DMAM0
                            101 	.globl _DMASEL
                            102 	.globl _DMAC2
                            103 	.globl _DMAC1
                            104 	.globl _DMAC0
                            105 	.globl _P3
                            106 	.globl _S0RELL
                            107 	.globl _IP0
                            108 	.globl _IEN0
                            109 	.globl _DMAT2
                            110 	.globl _DMAT1
                            111 	.globl _DMAT0
                            112 	.globl _DMAS2
                            113 	.globl _DMAS1
                            114 	.globl _DMAS0
                            115 	.globl _P2
                            116 	.globl _IEN2
                            117 	.globl _SBUF
                            118 	.globl _SCON
                            119 	.globl _PSBANK
                            120 	.globl _DPS
                            121 	.globl _P1
                            122 	.globl _CKCON
                            123 	.globl _TH1
                            124 	.globl _TH0
                            125 	.globl _TL1
                            126 	.globl _TL0
                            127 	.globl _TMOD
                            128 	.globl _TCON
                            129 	.globl _PCON
                            130 	.globl _WDTREL
                            131 	.globl _DPH
                            132 	.globl _DPL
                            133 	.globl _P0
                            134 	.globl _sq_thrs_ratio_tb
                            135 	.globl _train_save_tb
                            136 	.globl _tx_tb
                            137 	.globl _UPHY_ANAREG_REV_0
                            138 	.globl _dfe_sm_save
                            139 	.globl _dfe_sm_dc
                            140 	.globl _dfe_sm
                            141 	.globl _cds28
                            142 	.globl _lnx_calx_align90_gm
                            143 	.globl _lnx_calx_align90_dac
                            144 	.globl _lnx_calx_align90_dummy_clk
                            145 	.globl _lnx_calx_eom_dpher
                            146 	.globl _lnx_calx_vdda_dll_eom_sel
                            147 	.globl _lnx_calx_dll_eom_gmsel
                            148 	.globl _lnx_calx_vdda_dll_sel
                            149 	.globl _lnx_calx_dll_gmsel
                            150 	.globl _lnx_calx_rxdcc_dll_hg
                            151 	.globl _lnx_calx_rxdcc_dll
                            152 	.globl _lnx_calx_txdcc_hg
                            153 	.globl _lnx_calx_txdcc
                            154 	.globl _lnx_calx_txdcc_pdiv_hg
                            155 	.globl _lnx_calx_txdcc_pdiv
                            156 	.globl _lnx_spdoft_tx_preset_index_lane
                            157 	.globl _lnx_cal_sellv_rxeomclk
                            158 	.globl _lnx_cal_sellv_rxsampler
                            159 	.globl _lnx_cal_sellv_txpre
                            160 	.globl _lnx_cal_sellv_rxdataclk
                            161 	.globl _lnx_cal_sellv_txclk
                            162 	.globl _lnx_cal_sellv_txdata
                            163 	.globl _lnx_cal_align90_gm
                            164 	.globl _lnx_cal_align90_dac
                            165 	.globl _lnx_cal_align90_dummy_clk
                            166 	.globl _lnx_cal_eom_dpher
                            167 	.globl _lnx_cal_vdda_dll_eom_sel
                            168 	.globl _lnx_cal_dll_eom_gmsel
                            169 	.globl _lnx_cal_vdda_dll_sel
                            170 	.globl _lnx_cal_dll_gmsel
                            171 	.globl _lnx_cal_rxdcc_eom_hg
                            172 	.globl _lnx_cal_rxdcc_eom
                            173 	.globl _lnx_cal_rxdcc_data_hg
                            174 	.globl _lnx_cal_rxdcc_data
                            175 	.globl _lnx_cal_rxdcc_dll_hg
                            176 	.globl _lnx_cal_rxdcc_dll
                            177 	.globl _lnx_cal_txdcc_hg
                            178 	.globl _lnx_cal_txdcc
                            179 	.globl _lnx_cal_txdcc_pdiv_hg
                            180 	.globl _lnx_cal_txdcc_pdiv
                            181 	.globl _cmx_cal_sllp_dac_fine_ring
                            182 	.globl _cmx_cal_pll_sllp_dac_coarse_ring
                            183 	.globl _cmx_cal_pll_speed_ring
                            184 	.globl _cmx_cal_plldcc
                            185 	.globl _cmx_cal_lccap_lsb
                            186 	.globl _cmx_cal_lccap_msb
                            187 	.globl _cmx_cal_lcvco_dac_msb
                            188 	.globl _cmx_cal_lcvco_dac_lsb
                            189 	.globl _cmx_cal_lcvco_dac
                            190 	.globl _local_tx_preset_tb
                            191 	.globl _train_g0_index
                            192 	.globl _train_g1_index
                            193 	.globl _train_gn1_index
                            194 	.globl _phase_save
                            195 	.globl _txffe_save
                            196 	.globl _rc_save
                            197 	.globl _phy_mode_lane_table
                            198 	.globl _speedtable
                            199 	.globl _min_gen
                            200 	.globl _max_gen
                            201 	.globl _phy_mode_cmn_table
                            202 	.globl _ring_speedtable
                            203 	.globl _lc_speedtable
                            204 	.globl _TXTRAIN_IF_REG0
                            205 	.globl _CDS_READ_MISC1
                            206 	.globl _CDS_READ_MISC0
                            207 	.globl _DFE_READ_F0D_RIGHT_ODD
                            208 	.globl _DFE_READ_F0D_RIGHT_EVEN
                            209 	.globl _DFE_READ_F0D_LEFT_ODD
                            210 	.globl _DFE_READ_F0D_LEFT_EVEN
                            211 	.globl _DFE_READ_F0D_ODD
                            212 	.globl _DFE_READ_F0D_EVEN
                            213 	.globl _DFE_READ_F0B_ODD
                            214 	.globl _DFE_READ_F0B_EVEN
                            215 	.globl _DFE_READ_F0A_ODD
                            216 	.globl _DFE_READ_F0A_EVEN
                            217 	.globl _DFE_READ_ODD_REG8
                            218 	.globl _DFE_READ_EVEN_REG8
                            219 	.globl _DFE_READ_ODD_REG7
                            220 	.globl _DFE_READ_ODD_REG6
                            221 	.globl _DFE_READ_ODD_REG5
                            222 	.globl _DFE_READ_ODD_REG4
                            223 	.globl _DFE_READ_ODD_REG3
                            224 	.globl _DFE_READ_ODD_REG2
                            225 	.globl _DFE_READ_ODD_REG1
                            226 	.globl _DFE_READ_ODD_REG0
                            227 	.globl _DFE_READ_EVEN_REG7
                            228 	.globl _DFE_READ_EVEN_REG6
                            229 	.globl _DFE_READ_EVEN_REG5
                            230 	.globl _DFE_READ_EVEN_REG4
                            231 	.globl _DFE_READ_EVEN_REG3
                            232 	.globl _DFE_READ_EVEN_REG2
                            233 	.globl _DFE_READ_EVEN_REG1
                            234 	.globl _DFE_READ_EVEN_REG0
                            235 	.globl _TX_TRAIN_IF_REG8
                            236 	.globl _TX_TRAIN_CTRL_LANE
                            237 	.globl _TX_TRAIN_IF_REG7
                            238 	.globl _TX_TRAIN_IF_REG6
                            239 	.globl _TX_TRAIN_IF_REG5
                            240 	.globl _TX_TRAIN_IF_REG4
                            241 	.globl _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE
                            242 	.globl _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE
                            243 	.globl _TRX_TRAIN_IF_INTERRUPT_LANE
                            244 	.globl _TX_AMP_CTRL_REG0
                            245 	.globl _TX_DRV_RD_OUT_REG0
                            246 	.globl _LINK_TRAIN_MODE0
                            247 	.globl _TX_EMPH_CTRL_REG0
                            248 	.globl _TX_TRAIN_DEFAULT_REG5
                            249 	.globl _TX_TRAIN_DEFAULT_REG4
                            250 	.globl _TX_TRAIN_DEFAULT_REG3
                            251 	.globl _TX_TRAIN_DEFAULT_REG2
                            252 	.globl _TX_TRAIN_DEFAULT_REG1
                            253 	.globl _TX_TRAIN_DEFAULT_REG0
                            254 	.globl _TX_TRAIN_DRIVER_REG2
                            255 	.globl _TX_TRAIN_DRIVER_REG1
                            256 	.globl _TX_TRAIN_DRIVER_REG0
                            257 	.globl _TX_TRAIN_PATTTERN_REG0
                            258 	.globl _TX_TRAIN_IF_REG3
                            259 	.globl _TX_TRAIN_IF_REG2
                            260 	.globl _TX_TRAIN_IF_REG1
                            261 	.globl _TX_TRAIN_IF_REG0
                            262 	.globl _DME_DEC_REG1
                            263 	.globl _DME_DEC_REG0
                            264 	.globl _DME_ENC_REG2
                            265 	.globl _DME_ENC_REG1
                            266 	.globl _DME_ENC_REG0
                            267 	.globl _END_XDAT_CMN
                            268 	.globl _MCU_INFO_13
                            269 	.globl _MCU_INFO_12
                            270 	.globl _MCU_INFO_5
                            271 	.globl _MCU_INFO_4
                            272 	.globl _SYNC_INFO
                            273 	.globl _CDS_EYE_CLK_THR
                            274 	.globl _TX_SAVE_4
                            275 	.globl _TX_SAVE_3
                            276 	.globl _TX_SAVE_2
                            277 	.globl _TX_SAVE_1
                            278 	.globl _TX_SAVE_0
                            279 	.globl _ETH_PRESET1_TB
                            280 	.globl _ETH_PRESET0_TB
                            281 	.globl _SAS_PRESET2_TB
                            282 	.globl _SAS_PRESET1_TB
                            283 	.globl _SAS_PRESET0_TB
                            284 	.globl _G_SELLV_RXSAMPLER
                            285 	.globl _G_SELLV_RXDATACLK
                            286 	.globl _G_SELLV_RXEOMCLK
                            287 	.globl _G_SELLV_TXPRE
                            288 	.globl _G_SELLV_TXDATA
                            289 	.globl _G_SELLV_TXCLK
                            290 	.globl _TIMER_SEL3
                            291 	.globl _TIMER_SEL2
                            292 	.globl _TIMER_SEL1
                            293 	.globl _MCU_CONFIG1
                            294 	.globl _LOOP_CNTS
                            295 	.globl _CAL_DATA1
                            296 	.globl _MCU_CONFIG
                            297 	.globl _CAL_STATUS_READ
                            298 	.globl _CAL_TIME_OUT_AND_DIS
                            299 	.globl _CON_CAL_STEP_SIZE5
                            300 	.globl _CON_CAL_STEP_SIZE4
                            301 	.globl _CON_CAL_STEP_SIZE3
                            302 	.globl _CON_CAL_STEP_SIZE2
                            303 	.globl _CON_CAL_STEP_SIZE1
                            304 	.globl _CONTROL_CONFIG9
                            305 	.globl _CONTROL_CONFIG8
                            306 	.globl _TRAIN_IF_CONFIG
                            307 	.globl _CAL_DATA0
                            308 	.globl _CONTROL_CONFIG7
                            309 	.globl _CONTROL_CONFIG6
                            310 	.globl _CONTROL_CONFIG5
                            311 	.globl _CONTROL_CONFIG4
                            312 	.globl _CONTROL_CONFIG3
                            313 	.globl _CONTROL_CONFIG2
                            314 	.globl _CONTROL_CONFIG1
                            315 	.globl _CONTROL_CONFIG0
                            316 	.globl _FW_REV
                            317 	.globl _CID_REG1
                            318 	.globl _CID_REG0
                            319 	.globl _CMN_MCU_REG
                            320 	.globl _SET_LANE_ISR
                            321 	.globl _CMN_ISR_MASK_1
                            322 	.globl _CMN_ISR_1
                            323 	.globl _CMN_MCU_TIMER3_CONTROL
                            324 	.globl _CMN_MCU_TIMER2_CONTROL
                            325 	.globl _CMN_MCU_TIMER1_CONTROL
                            326 	.globl _CMN_MCU_TIMER0_CONTROL
                            327 	.globl _CMN_MCU_TIMER_CTRL_5_LANE
                            328 	.globl _CMN_MCU_TIMER_CTRL_4_LANE
                            329 	.globl _CMN_MCU_TIMER_CTRL_3_LANE
                            330 	.globl _CMN_MCU_TIMER_CTRL_2_LANE
                            331 	.globl _CMN_MCU_TIMER_CONTROL
                            332 	.globl _CMN_CACHE_DEBUG1
                            333 	.globl _CMN_MCU_GPIO
                            334 	.globl _CMN_ISR_CLEAR_2
                            335 	.globl _CMN_ISR_MASK_2
                            336 	.globl _CMN_ISR_2
                            337 	.globl _MCU_INT_ADDR
                            338 	.globl _CMN_CACHE_DEBUG0
                            339 	.globl _MCU_SDT_CMN
                            340 	.globl _XDATA_MEM_CHECKSUM_CMN_2
                            341 	.globl _XDATA_MEM_CHECKSUM_CMN_1
                            342 	.globl _XDATA_MEM_CHECKSUM_CMN_0
                            343 	.globl _TEST5
                            344 	.globl _PM_CMN_REG2
                            345 	.globl _INPUT_CMN_PIN_REG3
                            346 	.globl __FIELDNAME_
                            347 	.globl _CMN_CALIBRATION
                            348 	.globl _OUTPUT_CMN_PIN_REG0
                            349 	.globl _SPD_CMN_REG1
                            350 	.globl _CLKGEN_CMN_REG1
                            351 	.globl _PLLCAL_REG1
                            352 	.globl _PLLCAL_REG0
                            353 	.globl _ANA_TSEN_CONTROL
                            354 	.globl _INPUT_CMN_PIN_REG2
                            355 	.globl _INPUT_CMN_PIN_REG1
                            356 	.globl _INPUT_CMN_PIN_REG0
                            357 	.globl _PM_CMN_REG1
                            358 	.globl _SYSTEM
                            359 	.globl _TEST4
                            360 	.globl _TEST3
                            361 	.globl _TEST2
                            362 	.globl _TEST1
                            363 	.globl _TEST0
                            364 	.globl _MCU_SYNC2
                            365 	.globl _MCU_SYNC1
                            366 	.globl _MEM_IRQ_CLEAR
                            367 	.globl _APB_CONTROL_REG
                            368 	.globl _ANA_IF_CMN_REG0
                            369 	.globl _MEM_IRQ_MASK
                            370 	.globl _MEM_IRQ
                            371 	.globl _ANA_IF_CMN_REG1
                            372 	.globl _MEM_CMN_ECC_ERR_ADDRESS0
                            373 	.globl _MCU_INFO_3
                            374 	.globl _MCU_INFO_2
                            375 	.globl _MCU_INFO_1
                            376 	.globl _MCU_INFO_0
                            377 	.globl _MEMORY_CONTROL_4
                            378 	.globl _MEMORY_CONTROL_3
                            379 	.globl _MEMORY_CONTROL_2
                            380 	.globl _MEMORY_CONTROL_1
                            381 	.globl _MEMORY_CONTROL_0
                            382 	.globl _MCU_DEBUG1
                            383 	.globl _MCU_DEBUG0
                            384 	.globl _MCU_CONTROL_4
                            385 	.globl _MCU_CONTROL_3
                            386 	.globl _MCU_CONTROL_2
                            387 	.globl _MCU_CONTROL_1
                            388 	.globl _MCU_CONTROL_0
                            389 	.globl _GLOB_L1_SUBSTATES_CFG
                            390 	.globl _GLOB_PIPE_REVISION
                            391 	.globl _GLOB_BIST_DATA_HI
                            392 	.globl _GLOB_BIST_SEQR_CFG
                            393 	.globl _GLOB_BIST_RESULT
                            394 	.globl _GLOB_BIST_MASK
                            395 	.globl _GLOB_BIST_START
                            396 	.globl _GLOB_BIST_LANE_TYPE
                            397 	.globl _GLOB_BIST_CTRL
                            398 	.globl _GLOB_DP_BAL_CFG4
                            399 	.globl _GLOB_DP_BAL_CFG2
                            400 	.globl _GLOB_DP_BAL_CFG0
                            401 	.globl _GLOB_PM_DP_CTRL
                            402 	.globl _GLOB_COUNTER_HI
                            403 	.globl _GLOB_COUNTER_CTRL
                            404 	.globl _GLOB_PM_CFG0
                            405 	.globl _GLOB_DP_SAL_CFG5
                            406 	.globl _GLOB_DP_SAL_CFG3
                            407 	.globl _GLOB_DP_SAL_CFG1
                            408 	.globl _GLOB_DP_SAL_CFG
                            409 	.globl _GLOB_MISC_CTRL
                            410 	.globl _GLOB_CLK_SRC_HI
                            411 	.globl _GLOB_CLK_SRC_LO
                            412 	.globl _GLOB_RST_CLK_CTRL
                            413 	.globl _DFE_STATIC_REG6
                            414 	.globl _DFE_STATIC_REG5
                            415 	.globl _DFE_STATIC_REG4
                            416 	.globl _DFE_STATIC_REG3
                            417 	.globl _DFE_STATIC_REG1
                            418 	.globl _DFE_STATIC_REG0
                            419 	.globl _RX_CMN_0
                            420 	.globl _SRIS_REG1
                            421 	.globl _SRIS_REG0
                            422 	.globl _DTX_PHY_ALIGN_REG2
                            423 	.globl _DTX_PHY_ALIGN_REG1
                            424 	.globl _DTX_PHY_ALIGN_REG0
                            425 	.globl _DTX_REG4
                            426 	.globl _DTX_REG3
                            427 	.globl _DTX_REG2
                            428 	.globl _DTX_REG1
                            429 	.globl _DTX_REG0
                            430 	.globl _TX_CMN_REG
                            431 	.globl _END_XDAT_LANE
                            432 	.globl _TRAIN_CONTROL_17
                            433 	.globl _TRAIN_CONTROL_16
                            434 	.globl _TRAIN_CONTROL_15
                            435 	.globl _TRAIN_CONTROL_14
                            436 	.globl _TRAIN_CONTROL_13
                            437 	.globl _ESM_ERR_N_CNT_LOW_LANE
                            438 	.globl _ESM_POP_N_CNT_LOW_LANE
                            439 	.globl _TRAIN_CONTROL_12
                            440 	.globl _TRAIN_CONTROL_11
                            441 	.globl _TRAIN_CONTROL_10
                            442 	.globl _TRAIN_CONTROL_9
                            443 	.globl _TRAIN_CONTROL_8
                            444 	.globl _TRAIN_CONTROL_7
                            445 	.globl _TRAIN_CONTROL_6
                            446 	.globl _TRAIN_CONTROL_5
                            447 	.globl _TRAIN_CONTROL_4
                            448 	.globl _TRAIN_CONTROL_3
                            449 	.globl _ESM_ERR_POP_CNT_HIGH_LANE
                            450 	.globl _ESM_ERR_P_CNT_LOW_LANE
                            451 	.globl _ESM_POP_P_CNT_LOW_LANE
                            452 	.globl _CDS_CTRL_REG1
                            453 	.globl _CDS_CTRL_REG0
                            454 	.globl _DFE_CONTROL_11
                            455 	.globl _DFE_CONTROL_10
                            456 	.globl _DFE_CONTROL_9
                            457 	.globl _DFE_CONTROL_8
                            458 	.globl _DFE_CONTROL_7
                            459 	.globl _DFE_TEST_5
                            460 	.globl _DFE_TEST_4
                            461 	.globl _DFE_TEST_1
                            462 	.globl _DFE_TEST_0
                            463 	.globl _DFE_CONTROL_6
                            464 	.globl _TRAIN_PARA_3
                            465 	.globl _TRAIN_PARA_2
                            466 	.globl _TRAIN_PARA_1
                            467 	.globl _TRAIN_PARA_0
                            468 	.globl _DLL_CAL
                            469 	.globl _RPTA_CONFIG_1
                            470 	.globl _RPTA_CONFIG_0
                            471 	.globl _TRAIN_CONTROL_2
                            472 	.globl _TRAIN_CONTROL_1
                            473 	.globl _TRAIN_CONTROL_0
                            474 	.globl _DFE_CONTROL_5
                            475 	.globl _DFE_CONTROL_4
                            476 	.globl _DFE_CONTROL_3
                            477 	.globl _DFE_CONTROL_2
                            478 	.globl _DFE_CONTROL_1
                            479 	.globl _DFE_CONTROL_0
                            480 	.globl _TRX_TRAIN_IF_TIMERS_ENABLE_LANE
                            481 	.globl _TRX_TRAIN_IF_TIMERS2_LANE
                            482 	.globl _TRX_TRAIN_IF_TIMERS1_LANE
                            483 	.globl _PHY_LOCAL_VALUE_LANE
                            484 	.globl _PHY_REMOTE_CTRL_VALUE_LANE
                            485 	.globl _PHY_REMOTE_CTRL_COMMAND_LANE
                            486 	.globl _CAL_SAVE_DATA3_LANE
                            487 	.globl _CAL_SAVE_DATA2_LANE
                            488 	.globl _CAL_SAVE_DATA1_LANE
                            489 	.globl _CAL_CTRL4_LANE
                            490 	.globl _CAL_CTRL3_LANE
                            491 	.globl _CAL_CTRL2_LANE
                            492 	.globl _CAL_CTRL1_LANE
                            493 	.globl _LANE_MARGIN_REG0
                            494 	.globl _EOM_VLD_REG4
                            495 	.globl _EOM_REG0
                            496 	.globl _EOM_ERR_REG3
                            497 	.globl _EOM_ERR_REG2
                            498 	.globl _EOM_ERR_REG1
                            499 	.globl _EOM_ERR_REG0
                            500 	.globl _EOM_VLD_REG3
                            501 	.globl _EOM_VLD_REG2
                            502 	.globl _EOM_VLD_REG1
                            503 	.globl _EOM_VLD_REG0
                            504 	.globl _DFE_STATIC_LANE_REG6
                            505 	.globl _DFE_STATIC_LANE_REG5
                            506 	.globl _DFE_STATIC_LANE_REG4
                            507 	.globl _DFE_STATIC_LANE_REG3
                            508 	.globl _DFE_STATIC_LANE_REG1
                            509 	.globl _DFE_STATIC_LANE_REG0
                            510 	.globl _DFE_DCE_REG0
                            511 	.globl _CAL_OFST_REG2
                            512 	.globl _CAL_OFST_REG1
                            513 	.globl _CAL_OFST_REG0
                            514 	.globl _DFE_READ_ODD_2C_REG8
                            515 	.globl _DFE_READ_EVEN_2C_REG8
                            516 	.globl _DFE_READ_ODD_2C_REG7
                            517 	.globl _DFE_READ_ODD_2C_REG6
                            518 	.globl _DFE_READ_ODD_2C_REG5
                            519 	.globl _DFE_READ_ODD_2C_REG4
                            520 	.globl _DFE_READ_ODD_2C_REG3
                            521 	.globl _DFE_READ_ODD_2C_REG2
                            522 	.globl _DFE_READ_ODD_2C_REG1
                            523 	.globl _DFE_READ_ODD_2C_REG0
                            524 	.globl _DFE_READ_EVEN_2C_REG7
                            525 	.globl _DFE_READ_EVEN_2C_REG6
                            526 	.globl _DFE_READ_EVEN_2C_REG5
                            527 	.globl _DFE_READ_EVEN_2C_REG4
                            528 	.globl _DFE_READ_EVEN_2C_REG3
                            529 	.globl _DFE_READ_EVEN_2C_REG2
                            530 	.globl _DFE_READ_EVEN_2C_REG1
                            531 	.globl _DFE_READ_EVEN_2C_REG0
                            532 	.globl _DFE_READ_ODD_SM_REG8
                            533 	.globl _DFE_READ_EVEN_SM_REG8
                            534 	.globl _DFE_READ_ODD_SM_REG7
                            535 	.globl _DFE_READ_ODD_SM_REG6
                            536 	.globl _DFE_READ_ODD_SM_REG5
                            537 	.globl _DFE_READ_ODD_SM_REG4
                            538 	.globl _DFE_READ_ODD_SM_REG3
                            539 	.globl _DFE_READ_ODD_SM_REG2
                            540 	.globl _DFE_READ_ODD_SM_REG1
                            541 	.globl _DFE_READ_ODD_SM_REG0
                            542 	.globl _DFE_READ_EVEN_SM_REG7
                            543 	.globl _DFE_READ_EVEN_SM_REG6
                            544 	.globl _DFE_READ_EVEN_SM_REG5
                            545 	.globl _DFE_READ_EVEN_SM_REG4
                            546 	.globl _DFE_READ_EVEN_SM_REG3
                            547 	.globl _DFE_READ_EVEN_SM_REG2
                            548 	.globl _DFE_READ_EVEN_SM_REG1
                            549 	.globl _DFE_READ_EVEN_SM_REG0
                            550 	.globl _DFE_FEXT_ODD_REG7
                            551 	.globl _DFE_FEXT_ODD_REG6
                            552 	.globl _DFE_FEXT_ODD_REG5
                            553 	.globl _DFE_FEXT_ODD_REG4
                            554 	.globl _DFE_FEXT_ODD_REG3
                            555 	.globl _DFE_FEXT_ODD_REG2
                            556 	.globl _DFE_FEXT_ODD_REG1
                            557 	.globl _DFE_FEXT_ODD_REG0
                            558 	.globl _DFE_FEXT_EVEN_REG7
                            559 	.globl _DFE_FEXT_EVEN_REG6
                            560 	.globl _DFE_FEXT_EVEN_REG5
                            561 	.globl _DFE_FEXT_EVEN_REG4
                            562 	.globl _DFE_FEXT_EVEN_REG3
                            563 	.globl _DFE_FEXT_EVEN_REG2
                            564 	.globl _DFE_FEXT_EVEN_REG1
                            565 	.globl _DFE_FEXT_EVEN_REG0
                            566 	.globl _DFE_DC_ODD_REG8
                            567 	.globl _DFE_DC_EVEN_REG8
                            568 	.globl _DFE_FEN_ODD_REG
                            569 	.globl _DFE_FEN_EVEN_REG
                            570 	.globl _DFE_STEP_REG1
                            571 	.globl _DFE_STEP_REG0
                            572 	.globl _DFE_ANA_REG1
                            573 	.globl _DFE_ANA_REG0
                            574 	.globl _DFE_CTRL_REG4
                            575 	.globl _RX_EQ_CLK_CTRL
                            576 	.globl _DFE_CTRL_REG3
                            577 	.globl _DFE_CTRL_REG2
                            578 	.globl _DFE_CTRL_REG1
                            579 	.globl _DFE_CTRL_REG0
                            580 	.globl _PT_COUNTER2
                            581 	.globl _PT_COUNTER1
                            582 	.globl _PT_COUNTER0
                            583 	.globl _PT_USER_PATTERN2
                            584 	.globl _PT_USER_PATTERN1
                            585 	.globl _PT_USER_PATTERN0
                            586 	.globl _PT_CONTROL1
                            587 	.globl _PT_CONTROL0
                            588 	.globl _XDATA_MEM_CHECKSUM_LANE1
                            589 	.globl _XDATA_MEM_CHECKSUM_LANE0
                            590 	.globl _MEM_ECC_ERR_ADDRESS0
                            591 	.globl _MCU_COMMAND0
                            592 	.globl _MCU_INT_CONTROL_13
                            593 	.globl _MCU_WDT_LANE
                            594 	.globl _MCU_IRQ_ISR_LANE
                            595 	.globl _ANA_IF_DFEO_REG0
                            596 	.globl _ANA_IF_DFEE_REG0
                            597 	.globl _ANA_IF_TRX_REG0
                            598 	.globl _EXT_INT_CONTROL
                            599 	.globl _MCU_DEBUG_LANE
                            600 	.globl _MCU_DEBUG3_LANE
                            601 	.globl _MCU_DEBUG2_LANE
                            602 	.globl _MCU_DEBUG1_LANE
                            603 	.globl _MCU_DEBUG0_LANE
                            604 	.globl _MCU_TIMER_CTRL_7_LANE
                            605 	.globl _MCU_TIMER_CTRL_6_LANE
                            606 	.globl _MCU_TIMER_CTRL_5_LANE
                            607 	.globl _MCU_TIMER_CTRL_4_LANE
                            608 	.globl _MCU_TIMER_CTRL_3_LANE
                            609 	.globl _MCU_TIMER_CTRL_2_LANE
                            610 	.globl _MCU_TIMER_CTRL_1_LANE
                            611 	.globl _MCU_MEM_REG2_LANE
                            612 	.globl _MCU_MEM_REG1_LANE
                            613 	.globl _MCU_IRQ_MASK_LANE
                            614 	.globl _MCU_IRQ_LANE
                            615 	.globl _MCU_TIMER3_CONTROL
                            616 	.globl _MCU_TIMER2_CONTROL
                            617 	.globl _MCU_TIMER1_CONTROL
                            618 	.globl _MCU_TIMER0_CONTROL
                            619 	.globl _MCU_TIMER_CONTROL
                            620 	.globl _MCU_INT12_CONTROL
                            621 	.globl _MCU_INT11_CONTROL
                            622 	.globl _MCU_INT10_CONTROL
                            623 	.globl _MCU_INT9_CONTROL
                            624 	.globl _MCU_INT8_CONTROL
                            625 	.globl _MCU_INT7_CONTROL
                            626 	.globl _MCU_INT6_CONTROL
                            627 	.globl _MCU_INT5_CONTROL
                            628 	.globl _MCU_INT4_CONTROL
                            629 	.globl _MCU_INT3_CONTROL
                            630 	.globl _MCU_INT2_CONTROL
                            631 	.globl _MCU_INT1_CONTROL
                            632 	.globl _MCU_INT0_CONTROL
                            633 	.globl _MCU_STATUS3_LANE
                            634 	.globl _MCU_STATUS2_LANE
                            635 	.globl _MCU_STATUS1_LANE
                            636 	.globl _MCU_STATUS0_LANE
                            637 	.globl _LANE_SYSTEM0
                            638 	.globl _CACHE_DEBUG1
                            639 	.globl _CACHE_DEBUG0
                            640 	.globl _MCU_GPIO
                            641 	.globl _MCU_CONTROL_LANE
                            642 	.globl _LANE_32G_PRESET_CFG16_LANE
                            643 	.globl _LANE_32G_PRESET_CFG14_LANE
                            644 	.globl _LANE_32G_PRESET_CFG12_LANE
                            645 	.globl _LANE_32G_PRESET_CFG10_LANE
                            646 	.globl _LANE_32G_PRESET_CFG8_LANE
                            647 	.globl _LANE_32G_PRESET_CFG6_LANE
                            648 	.globl _LANE_32G_PRESET_CFG4_LANE
                            649 	.globl _LANE_32G_PRESET_CFG2_LANE
                            650 	.globl _LANE_32G_PRESET_CFG0_LANE
                            651 	.globl _LANE_EQ_32G_CFG0_LANE
                            652 	.globl _LANE_16G_PRESET_CFG16_LANE
                            653 	.globl _LANE_16G_PRESET_CFG14_LANE
                            654 	.globl _LANE_16G_PRESET_CFG12_LANE
                            655 	.globl _LANE_16G_PRESET_CFG10_LANE
                            656 	.globl _LANE_16G_PRESET_CFG8_LANE
                            657 	.globl _LANE_16G_PRESET_CFG6_LANE
                            658 	.globl _LANE_16G_PRESET_CFG4_LANE
                            659 	.globl _LANE_16G_PRESET_CFG2_LANE
                            660 	.globl _LANE_16G_PRESET_CFG0_LANE
                            661 	.globl _LANE_EQ_16G_CFG0_LANE
                            662 	.globl _LANE_REMOTE_SET_LANE
                            663 	.globl _LANE_COEFF_MAX0_LANE
                            664 	.globl _LANE_PRESET_CFG16_LANE
                            665 	.globl _LANE_PRESET_CFG14_LANE
                            666 	.globl _LANE_PRESET_CFG12_LANE
                            667 	.globl _LANE_PRESET_CFG10_LANE
                            668 	.globl _LANE_PRESET_CFG8_LANE
                            669 	.globl _LANE_PRESET_CFG6_LANE
                            670 	.globl _LANE_PRESET_CFG4_LANE
                            671 	.globl _LANE_PRESET_CFG2_LANE
                            672 	.globl _LANE_PRESET_CFG0_LANE
                            673 	.globl _LANE_EQ_CFG1_LANE
                            674 	.globl _LANE_EQ_CFG0_LANE
                            675 	.globl _LANE_USB_DP_CFG2_LANE
                            676 	.globl _LANE_USB_DP_CFG1_LANE
                            677 	.globl _LANE_DP_PIE8_CFG0_LANE
                            678 	.globl _LANE_CFG_STATUS3_LANE
                            679 	.globl _LANE_CFG4
                            680 	.globl _LANE_CFG2_LANE
                            681 	.globl _LANE_CFG_STATUS2_LANE
                            682 	.globl _LANE_STATUS0
                            683 	.globl _LANE_CFG0
                            684 	.globl _SQ_REG0
                            685 	.globl _DTL_REG3
                            686 	.globl _DTL_REG2
                            687 	.globl _DTL_REG1
                            688 	.globl _DTL_REG0
                            689 	.globl _RX_LANE_INTERRUPT_REG1
                            690 	.globl _RX_CALIBRATION_REG
                            691 	.globl _INPUT_RX_PIN_REG3_LANE
                            692 	.globl _RX_DATA_PATH_REG
                            693 	.globl _RX_LANE_INTERRUPT_MASK
                            694 	.globl _RX_LANE_INTERRUPT
                            695 	.globl _CDR_LOCK_REG
                            696 	.globl _FRAME_SYNC_DET_REG6
                            697 	.globl _FRAME_SYNC_DET_REG5
                            698 	.globl _FRAME_SYNC_DET_REG4
                            699 	.globl _FRAME_SYNC_DET_REG3
                            700 	.globl _FRAME_SYNC_DET_REG2
                            701 	.globl _FRAME_SYNC_DET_REG1
                            702 	.globl _FRAME_SYNC_DET_REG0
                            703 	.globl _CLKGEN_RX_LANE_REG1_LANE
                            704 	.globl _DIG_RX_RSVD_REG0
                            705 	.globl _SPD_CTRL_RX_LANE_REG1_LANE
                            706 	.globl _INPUT_RX_PIN_REG2_LANE
                            707 	.globl _INPUT_RX_PIN_REG1_LANE
                            708 	.globl _INPUT_RX_PIN_REG0_LANE
                            709 	.globl _RX_SYSTEM_LANE
                            710 	.globl _PM_CTRL_RX_LANE_REG1_LANE
                            711 	.globl _MON_TOP
                            712 	.globl _ANALOG_TX_REALTIME_REG_1
                            713 	.globl _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE
                            714 	.globl _PM_CTRL_INTERRUPT_ISR_REG1_LANE
                            715 	.globl __FIELDNAME__LANE
                            716 	.globl _INPUT_TX_PIN_REG5_LANE
                            717 	.globl _DIG_TX_RSVD_REG0
                            718 	.globl _TX_CALIBRATION_LANE
                            719 	.globl _INPUT_TX_PIN_REG4_LANE
                            720 	.globl _TX_SYSTEM_LANE
                            721 	.globl _SPD_CTRL_TX_LANE_REG1_LANE
                            722 	.globl _SPD_CTRL_INTERRUPT_REG2
                            723 	.globl _SPD_CTRL_INTERRUPT_REG1_LANE
                            724 	.globl _TX_SPEED_CONVERT_LANE
                            725 	.globl _CLKGEN_TX_LANE_REG1_LANE
                            726 	.globl _PM_CTRL_INTERRUPT_REG2
                            727 	.globl _PM_CTRL_INTERRUPT_REG1_LANE
                            728 	.globl _INPUT_TX_PIN_REG3_LANE
                            729 	.globl _INPUT_TX_PIN_REG2_LANE
                            730 	.globl _INPUT_TX_PIN_REG1_LANE
                            731 	.globl _INPUT_TX_PIN_REG0_LANE
                            732 	.globl _PM_CTRL_TX_LANE_REG2_LANE
                            733 	.globl _PM_CTRL_TX_LANE_REG1_LANE
                            734 	.globl _UPHY14_CMN_ANAREG_TOP_214
                            735 	.globl _UPHY14_CMN_ANAREG_TOP_213
                            736 	.globl _UPHY14_CMN_ANAREG_TOP_212
                            737 	.globl _UPHY14_CMN_ANAREG_TOP_211
                            738 	.globl _UPHY14_CMN_ANAREG_TOP_210
                            739 	.globl _UPHY14_CMN_ANAREG_TOP_209
                            740 	.globl _UPHY14_CMN_ANAREG_TOP_208
                            741 	.globl _UPHY14_CMN_ANAREG_TOP_207
                            742 	.globl _UPHY14_CMN_ANAREG_TOP_206
                            743 	.globl _UPHY14_CMN_ANAREG_TOP_205
                            744 	.globl _UPHY14_CMN_ANAREG_TOP_204
                            745 	.globl _UPHY14_CMN_ANAREG_TOP_203
                            746 	.globl _UPHY14_CMN_ANAREG_TOP_202
                            747 	.globl _UPHY14_CMN_ANAREG_TOP_201
                            748 	.globl _UPHY14_CMN_ANAREG_TOP_200
                            749 	.globl _UPHY14_CMN_ANAREG_TOP_199
                            750 	.globl _UPHY14_CMN_ANAREG_TOP_198
                            751 	.globl _UPHY14_CMN_ANAREG_TOP_197
                            752 	.globl _UPHY14_CMN_ANAREG_TOP_196
                            753 	.globl _UPHY14_CMN_ANAREG_TOP_195
                            754 	.globl _UPHY14_CMN_ANAREG_TOP_194
                            755 	.globl _UPHY14_CMN_ANAREG_TOP_193
                            756 	.globl _UPHY14_CMN_ANAREG_TOP_192
                            757 	.globl _UPHY14_CMN_ANAREG_TOP_191
                            758 	.globl _UPHY14_CMN_ANAREG_TOP_190
                            759 	.globl _UPHY14_CMN_ANAREG_TOP_189
                            760 	.globl _UPHY14_CMN_ANAREG_TOP_188
                            761 	.globl _UPHY14_CMN_ANAREG_TOP_187
                            762 	.globl _UPHY14_CMN_ANAREG_TOP_186
                            763 	.globl _UPHY14_CMN_ANAREG_TOP_185
                            764 	.globl _UPHY14_CMN_ANAREG_TOP_184
                            765 	.globl _UPHY14_CMN_ANAREG_TOP_183
                            766 	.globl _UPHY14_CMN_ANAREG_TOP_182
                            767 	.globl _UPHY14_CMN_ANAREG_TOP_181
                            768 	.globl _UPHY14_CMN_ANAREG_TOP_180
                            769 	.globl _UPHY14_CMN_ANAREG_TOP_179
                            770 	.globl _UPHY14_CMN_ANAREG_TOP_178
                            771 	.globl _UPHY14_CMN_ANAREG_TOP_177
                            772 	.globl _UPHY14_CMN_ANAREG_TOP_176
                            773 	.globl _UPHY14_CMN_ANAREG_TOP_175
                            774 	.globl _UPHY14_CMN_ANAREG_TOP_174
                            775 	.globl _UPHY14_CMN_ANAREG_TOP_173
                            776 	.globl _UPHY14_CMN_ANAREG_TOP_172
                            777 	.globl _UPHY14_CMN_ANAREG_TOP_171
                            778 	.globl _UPHY14_CMN_ANAREG_TOP_170
                            779 	.globl _UPHY14_CMN_ANAREG_TOP_169
                            780 	.globl _UPHY14_CMN_ANAREG_TOP_168
                            781 	.globl _UPHY14_CMN_ANAREG_TOP_167
                            782 	.globl _UPHY14_CMN_ANAREG_TOP_166
                            783 	.globl _UPHY14_CMN_ANAREG_TOP_165
                            784 	.globl _UPHY14_CMN_ANAREG_TOP_164
                            785 	.globl _UPHY14_CMN_ANAREG_TOP_163
                            786 	.globl _UPHY14_CMN_ANAREG_TOP_162
                            787 	.globl _UPHY14_CMN_ANAREG_TOP_161
                            788 	.globl _UPHY14_CMN_ANAREG_TOP_160
                            789 	.globl _UPHY14_CMN_ANAREG_TOP_159
                            790 	.globl _UPHY14_CMN_ANAREG_TOP_158
                            791 	.globl _UPHY14_CMN_ANAREG_TOP_157
                            792 	.globl _UPHY14_CMN_ANAREG_TOP_156
                            793 	.globl _UPHY14_CMN_ANAREG_TOP_155
                            794 	.globl _UPHY14_CMN_ANAREG_TOP_154
                            795 	.globl _UPHY14_CMN_ANAREG_TOP_153
                            796 	.globl _UPHY14_CMN_ANAREG_TOP_152
                            797 	.globl _UPHY14_CMN_ANAREG_TOP_151
                            798 	.globl _UPHY14_CMN_ANAREG_TOP_150
                            799 	.globl _UPHY14_CMN_ANAREG_TOP_149
                            800 	.globl _UPHY14_CMN_ANAREG_TOP_148
                            801 	.globl _UPHY14_CMN_ANAREG_TOP_147
                            802 	.globl _UPHY14_CMN_ANAREG_TOP_146
                            803 	.globl _UPHY14_CMN_ANAREG_TOP_145
                            804 	.globl _UPHY14_CMN_ANAREG_TOP_144
                            805 	.globl _UPHY14_CMN_ANAREG_TOP_143
                            806 	.globl _UPHY14_CMN_ANAREG_TOP_142
                            807 	.globl _UPHY14_CMN_ANAREG_TOP_141
                            808 	.globl _UPHY14_CMN_ANAREG_TOP_140
                            809 	.globl _UPHY14_CMN_ANAREG_TOP_139
                            810 	.globl _UPHY14_CMN_ANAREG_TOP_138
                            811 	.globl _UPHY14_CMN_ANAREG_TOP_137
                            812 	.globl _UPHY14_CMN_ANAREG_TOP_136
                            813 	.globl _UPHY14_CMN_ANAREG_TOP_135
                            814 	.globl _UPHY14_CMN_ANAREG_TOP_134
                            815 	.globl _UPHY14_CMN_ANAREG_TOP_133
                            816 	.globl _UPHY14_CMN_ANAREG_TOP_132
                            817 	.globl _UPHY14_CMN_ANAREG_TOP_131
                            818 	.globl _UPHY14_CMN_ANAREG_TOP_130
                            819 	.globl _UPHY14_CMN_ANAREG_TOP_129
                            820 	.globl _UPHY14_CMN_ANAREG_TOP_128
                            821 	.globl _ANA_DFEO_REG_0B
                            822 	.globl _ANA_DFEO_REG_0A
                            823 	.globl _ANA_DFEO_REG_09
                            824 	.globl _ANA_DFEO_REG_08
                            825 	.globl _ANA_DFEO_REG_07
                            826 	.globl _ANA_DFEO_REG_06
                            827 	.globl _ANA_DFEO_REG_05
                            828 	.globl _ANA_DFEO_REG_04
                            829 	.globl _ANA_DFEO_REG_03
                            830 	.globl _ANA_DFEO_REG_02
                            831 	.globl _ANA_DFEO_REG_01
                            832 	.globl _ANA_DFEO_REG_00
                            833 	.globl _ANA_DFEO_REG_27
                            834 	.globl _ANA_DFEO_REG_26
                            835 	.globl _ANA_DFEO_REG_25
                            836 	.globl _ANA_DFEO_REG_24
                            837 	.globl _ANA_DFEO_REG_23
                            838 	.globl _ANA_DFEO_REG_22
                            839 	.globl _ANA_DFEO_REG_21
                            840 	.globl _ANA_DFEO_REG_20
                            841 	.globl _ANA_DFEO_REG_1F
                            842 	.globl _ANA_DFEO_REG_1E
                            843 	.globl _ANA_DFEO_REG_1D
                            844 	.globl _ANA_DFEO_REG_1C
                            845 	.globl _ANA_DFEO_REG_1B
                            846 	.globl _ANA_DFEO_REG_1A
                            847 	.globl _ANA_DFEO_REG_19
                            848 	.globl _ANA_DFEO_REG_18
                            849 	.globl _ANA_DFEO_REG_17
                            850 	.globl _ANA_DFEO_REG_16
                            851 	.globl _ANA_DFEO_REG_15
                            852 	.globl _ANA_DFEO_REG_14
                            853 	.globl _ANA_DFEO_REG_13
                            854 	.globl _ANA_DFEO_REG_12
                            855 	.globl _ANA_DFEO_REG_11
                            856 	.globl _ANA_DFEO_REG_10
                            857 	.globl _ANA_DFEO_REG_0F
                            858 	.globl _ANA_DFEO_REG_0E
                            859 	.globl _ANA_DFEO_REG_0D
                            860 	.globl _ANA_DFEO_REG_0C
                            861 	.globl _ANA_DFEE_REG_1D
                            862 	.globl _ANA_DFEE_REG_1C
                            863 	.globl _ANA_DFEE_REG_1B
                            864 	.globl _ANA_DFEE_REG_1A
                            865 	.globl _ANA_DFEE_REG_19
                            866 	.globl _ANA_DFEE_REG_18
                            867 	.globl _ANA_DFEE_REG_17
                            868 	.globl _ANA_DFEE_REG_16
                            869 	.globl _ANA_DFEE_REG_15
                            870 	.globl _ANA_DFEE_REG_14
                            871 	.globl _ANA_DFEE_REG_13
                            872 	.globl _ANA_DFEE_REG_12
                            873 	.globl _ANA_DFEE_REG_11
                            874 	.globl _ANA_DFEE_REG_10
                            875 	.globl _ANA_DFEE_REG_0F
                            876 	.globl _ANA_DFEE_REG_0E
                            877 	.globl _ANA_DFEE_REG_0D
                            878 	.globl _ANA_DFEE_REG_0C
                            879 	.globl _ANA_DFEE_REG_0B
                            880 	.globl _ANA_DFEE_REG_0A
                            881 	.globl _ANA_DFEE_REG_09
                            882 	.globl _ANA_DFEE_REG_08
                            883 	.globl _ANA_DFEE_REG_07
                            884 	.globl _ANA_DFEE_REG_06
                            885 	.globl _ANA_DFEE_REG_05
                            886 	.globl _ANA_DFEE_REG_04
                            887 	.globl _ANA_DFEE_REG_03
                            888 	.globl _ANA_DFEE_REG_02
                            889 	.globl _ANA_DFEE_REG_01
                            890 	.globl _ANA_DFEE_REG_00
                            891 	.globl _ANA_DFEE_REG_27
                            892 	.globl _ANA_DFEE_REG_26
                            893 	.globl _ANA_DFEE_REG_25
                            894 	.globl _ANA_DFEE_REG_24
                            895 	.globl _ANA_DFEE_REG_23
                            896 	.globl _ANA_DFEE_REG_22
                            897 	.globl _ANA_DFEE_REG_21
                            898 	.globl _ANA_DFEE_REG_20
                            899 	.globl _ANA_DFEE_REG_1F
                            900 	.globl _ANA_DFEE_REG_1E
                            901 	.globl _UPHY14_TRX_ANAREG_BOT_32
                            902 	.globl _UPHY14_TRX_ANAREG_BOT_31
                            903 	.globl _UPHY14_TRX_ANAREG_BOT_30
                            904 	.globl _UPHY14_TRX_ANAREG_BOT_29
                            905 	.globl _UPHY14_TRX_ANAREG_BOT_28
                            906 	.globl _UPHY14_TRX_ANAREG_BOT_27
                            907 	.globl _UPHY14_TRX_ANAREG_BOT_26
                            908 	.globl _UPHY14_TRX_ANAREG_BOT_25
                            909 	.globl _UPHY14_TRX_ANAREG_BOT_24
                            910 	.globl _UPHY14_TRX_ANAREG_BOT_23
                            911 	.globl _UPHY14_TRX_ANAREG_BOT_22
                            912 	.globl _UPHY14_TRX_ANAREG_BOT_21
                            913 	.globl _UPHY14_TRX_ANAREG_BOT_20
                            914 	.globl _UPHY14_TRX_ANAREG_BOT_19
                            915 	.globl _UPHY14_TRX_ANAREG_BOT_18
                            916 	.globl _UPHY14_TRX_ANAREG_BOT_17
                            917 	.globl _UPHY14_TRX_ANAREG_BOT_16
                            918 	.globl _UPHY14_TRX_ANAREG_BOT_15
                            919 	.globl _UPHY14_TRX_ANAREG_BOT_14
                            920 	.globl _UPHY14_TRX_ANAREG_BOT_13
                            921 	.globl _UPHY14_TRX_ANAREG_BOT_12
                            922 	.globl _UPHY14_TRX_ANAREG_BOT_11
                            923 	.globl _UPHY14_TRX_ANAREG_BOT_10
                            924 	.globl _UPHY14_TRX_ANAREG_BOT_9
                            925 	.globl _UPHY14_TRX_ANAREG_BOT_8
                            926 	.globl _UPHY14_TRX_ANAREG_BOT_7
                            927 	.globl _UPHY14_TRX_ANAREG_BOT_6
                            928 	.globl _UPHY14_TRX_ANAREG_BOT_5
                            929 	.globl _UPHY14_TRX_ANAREG_BOT_4
                            930 	.globl _UPHY14_TRX_ANAREG_BOT_3
                            931 	.globl _UPHY14_TRX_ANAREG_BOT_2
                            932 	.globl _UPHY14_TRX_ANAREG_BOT_1
                            933 	.globl _UPHY14_TRX_ANAREG_BOT_0
                            934 	.globl _UPHY14_TRX_ANAREG_TOP_157
                            935 	.globl _UPHY14_TRX_ANAREG_TOP_156
                            936 	.globl _UPHY14_TRX_ANAREG_TOP_155
                            937 	.globl _UPHY14_TRX_ANAREG_TOP_154
                            938 	.globl _UPHY14_TRX_ANAREG_TOP_153
                            939 	.globl _UPHY14_TRX_ANAREG_TOP_152
                            940 	.globl _UPHY14_TRX_ANAREG_TOP_151
                            941 	.globl _UPHY14_TRX_ANAREG_TOP_150
                            942 	.globl _UPHY14_TRX_ANAREG_TOP_149
                            943 	.globl _UPHY14_TRX_ANAREG_TOP_148
                            944 	.globl _UPHY14_TRX_ANAREG_TOP_147
                            945 	.globl _UPHY14_TRX_ANAREG_TOP_146
                            946 	.globl _UPHY14_TRX_ANAREG_TOP_145
                            947 	.globl _UPHY14_TRX_ANAREG_TOP_144
                            948 	.globl _UPHY14_TRX_ANAREG_TOP_143
                            949 	.globl _UPHY14_TRX_ANAREG_TOP_142
                            950 	.globl _UPHY14_TRX_ANAREG_TOP_141
                            951 	.globl _UPHY14_TRX_ANAREG_TOP_140
                            952 	.globl _UPHY14_TRX_ANAREG_TOP_139
                            953 	.globl _UPHY14_TRX_ANAREG_TOP_138
                            954 	.globl _UPHY14_TRX_ANAREG_TOP_137
                            955 	.globl _UPHY14_TRX_ANAREG_TOP_136
                            956 	.globl _UPHY14_TRX_ANAREG_TOP_135
                            957 	.globl _UPHY14_TRX_ANAREG_TOP_134
                            958 	.globl _UPHY14_TRX_ANAREG_TOP_133
                            959 	.globl _UPHY14_TRX_ANAREG_TOP_132
                            960 	.globl _UPHY14_TRX_ANAREG_TOP_131
                            961 	.globl _UPHY14_TRX_ANAREG_TOP_130
                            962 	.globl _UPHY14_TRX_ANAREG_TOP_129
                            963 	.globl _UPHY14_TRX_ANAREG_TOP_128
                            964 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_143
                            965 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_142
                            966 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_141
                            967 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_140
                            968 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_139
                            969 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_138
                            970 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_137
                            971 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_136
                            972 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_135
                            973 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_134
                            974 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_133
                            975 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_132
                            976 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_131
                            977 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_130
                            978 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_129
                            979 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_128
                            980 	.globl _cdr_dfe_scheme
                            981 	.globl _dfe_load_all
                            982 	.globl _get_ec_voltage
                            983 ;--------------------------------------------------------
                            984 ; special function registers
                            985 ;--------------------------------------------------------
                            986 	.area RSEG    (ABS,DATA)
   0000                     987 	.org 0x0000
                    0080    988 _P0	=	0x0080
                    0082    989 _DPL	=	0x0082
                    0083    990 _DPH	=	0x0083
                    0086    991 _WDTREL	=	0x0086
                    0087    992 _PCON	=	0x0087
                    0088    993 _TCON	=	0x0088
                    0089    994 _TMOD	=	0x0089
                    008A    995 _TL0	=	0x008a
                    008B    996 _TL1	=	0x008b
                    008C    997 _TH0	=	0x008c
                    008D    998 _TH1	=	0x008d
                    008E    999 _CKCON	=	0x008e
                    0090   1000 _P1	=	0x0090
                    0092   1001 _DPS	=	0x0092
                    0094   1002 _PSBANK	=	0x0094
                    0098   1003 _SCON	=	0x0098
                    0099   1004 _SBUF	=	0x0099
                    009A   1005 _IEN2	=	0x009a
                    00A0   1006 _P2	=	0x00a0
                    00A1   1007 _DMAS0	=	0x00a1
                    00A2   1008 _DMAS1	=	0x00a2
                    00A3   1009 _DMAS2	=	0x00a3
                    00A4   1010 _DMAT0	=	0x00a4
                    00A5   1011 _DMAT1	=	0x00a5
                    00A6   1012 _DMAT2	=	0x00a6
                    00A8   1013 _IEN0	=	0x00a8
                    00A9   1014 _IP0	=	0x00a9
                    00AA   1015 _S0RELL	=	0x00aa
                    00B0   1016 _P3	=	0x00b0
                    00B1   1017 _DMAC0	=	0x00b1
                    00B2   1018 _DMAC1	=	0x00b2
                    00B3   1019 _DMAC2	=	0x00b3
                    00B4   1020 _DMASEL	=	0x00b4
                    00B5   1021 _DMAM0	=	0x00b5
                    00B6   1022 _DMAM1	=	0x00b6
                    00B8   1023 _IEN1	=	0x00b8
                    00B9   1024 _IP1	=	0x00b9
                    00BA   1025 _S0RELH	=	0x00ba
                    00C0   1026 _IRCON	=	0x00c0
                    00C1   1027 _CCEN	=	0x00c1
                    00C8   1028 _T2CON	=	0x00c8
                    00CA   1029 _RCAP2L	=	0x00ca
                    00CB   1030 _RCAP2H	=	0x00cb
                    00CC   1031 _TL2	=	0x00cc
                    00CD   1032 _TH2	=	0x00cd
                    00D0   1033 _PSW	=	0x00d0
                    00D8   1034 _ADCON	=	0x00d8
                    00E0   1035 _ACC	=	0x00e0
                    00E8   1036 _EIE	=	0x00e8
                    00F0   1037 _B	=	0x00f0
                    00F7   1038 _SRST	=	0x00f7
                    8C8A   1039 _TMR0	=	0x8c8a
                    8D8B   1040 _TMR1	=	0x8d8b
                    CDCC   1041 _TMR2	=	0xcdcc
                    A2A1   1042 _DMASA	=	0xa2a1
                    A5A4   1043 _DMATA	=	0xa5a4
                    B2B1   1044 _DMAC	=	0xb2b1
                           1045 ;--------------------------------------------------------
                           1046 ; special function bits
                           1047 ;--------------------------------------------------------
                           1048 	.area RSEG    (ABS,DATA)
   0000                    1049 	.org 0x0000
                    0080   1050 _P0_0	=	0x0080
                    0081   1051 _P0_1	=	0x0081
                    0082   1052 _P0_2	=	0x0082
                    0083   1053 _P0_3	=	0x0083
                    0084   1054 _P0_4	=	0x0084
                    0085   1055 _P0_5	=	0x0085
                    0086   1056 _P0_6	=	0x0086
                    0087   1057 _P0_7	=	0x0087
                    0090   1058 _P1_0	=	0x0090
                    0091   1059 _P1_1	=	0x0091
                    0092   1060 _P1_2	=	0x0092
                    0093   1061 _P1_3	=	0x0093
                    0094   1062 _P1_4	=	0x0094
                    0095   1063 _P1_5	=	0x0095
                    0096   1064 _P1_6	=	0x0096
                    0097   1065 _P1_7	=	0x0097
                    00A0   1066 _P2_0	=	0x00a0
                    00A1   1067 _P2_1	=	0x00a1
                    00A2   1068 _P2_2	=	0x00a2
                    00A3   1069 _P2_3	=	0x00a3
                    00A4   1070 _P2_4	=	0x00a4
                    00A5   1071 _P2_5	=	0x00a5
                    00A6   1072 _P2_6	=	0x00a6
                    00A7   1073 _P2_7	=	0x00a7
                    00B0   1074 _P3_0	=	0x00b0
                    00B1   1075 _P3_1	=	0x00b1
                    00B2   1076 _P3_2	=	0x00b2
                    00B3   1077 _P3_3	=	0x00b3
                    00B4   1078 _P3_4	=	0x00b4
                    00B5   1079 _P3_5	=	0x00b5
                    00B6   1080 _P3_6	=	0x00b6
                    00B7   1081 _P3_7	=	0x00b7
                    0088   1082 _IT0	=	0x0088
                    0089   1083 _IE0	=	0x0089
                    008A   1084 _IT1	=	0x008a
                    008B   1085 _IE1	=	0x008b
                    008C   1086 _TR0	=	0x008c
                    008D   1087 _TF0	=	0x008d
                    008E   1088 _TR1	=	0x008e
                    008F   1089 _TF1	=	0x008f
                    00A8   1090 _EX0	=	0x00a8
                    00A9   1091 _ET0	=	0x00a9
                    00AA   1092 _EX1	=	0x00aa
                    00AB   1093 _ET1	=	0x00ab
                    00AC   1094 _ES	=	0x00ac
                    00AD   1095 _ET2	=	0x00ad
                    00AE   1096 _WDT	=	0x00ae
                    00AF   1097 _EA	=	0x00af
                    00B8   1098 _EX7	=	0x00b8
                    00B9   1099 _EX2	=	0x00b9
                    00BA   1100 _EX3	=	0x00ba
                    00BB   1101 _EX4	=	0x00bb
                    00BC   1102 _EX5	=	0x00bc
                    00BD   1103 _EX6	=	0x00bd
                    00BE   1104 _PS1	=	0x00be
                    009A   1105 _ES1	=	0x009a
                    009B   1106 _EX8	=	0x009b
                    009C   1107 _EX9	=	0x009c
                    009D   1108 _EX10	=	0x009d
                    009E   1109 _EX11	=	0x009e
                    009F   1110 _EX12	=	0x009f
                    0098   1111 _RI	=	0x0098
                    0099   1112 _TI	=	0x0099
                    00C6   1113 _TF2	=	0x00c6
                           1114 ;--------------------------------------------------------
                           1115 ; overlayable register banks
                           1116 ;--------------------------------------------------------
                           1117 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1118 	.ds 8
                           1119 ;--------------------------------------------------------
                           1120 ; internal ram data
                           1121 ;--------------------------------------------------------
                           1122 	.area DSEG    (DATA)
                           1123 ;--------------------------------------------------------
                           1124 ; overlayable items in internal ram 
                           1125 ;--------------------------------------------------------
                           1126 	.area OSEG    (OVR,DATA)
                           1127 ;--------------------------------------------------------
                           1128 ; indirectly addressable internal ram data
                           1129 ;--------------------------------------------------------
                           1130 	.area ISEG    (DATA)
                           1131 ;--------------------------------------------------------
                           1132 ; absolute internal ram data
                           1133 ;--------------------------------------------------------
                           1134 	.area IABS    (ABS,DATA)
                           1135 	.area IABS    (ABS,DATA)
                           1136 ;--------------------------------------------------------
                           1137 ; bit data
                           1138 ;--------------------------------------------------------
                           1139 	.area BSEG    (BIT)
                           1140 ;--------------------------------------------------------
                           1141 ; paged external ram data
                           1142 ;--------------------------------------------------------
                           1143 	.area PSEG    (PAG,XDATA)
                           1144 ;--------------------------------------------------------
                           1145 ; external ram data
                           1146 ;--------------------------------------------------------
                           1147 	.area XSEG    (XDATA)
                    1000   1148 _UPHY14_TRX_LANEPLL_ANAREG_TOP_128	=	0x1000
                    1004   1149 _UPHY14_TRX_LANEPLL_ANAREG_TOP_129	=	0x1004
                    1008   1150 _UPHY14_TRX_LANEPLL_ANAREG_TOP_130	=	0x1008
                    100C   1151 _UPHY14_TRX_LANEPLL_ANAREG_TOP_131	=	0x100c
                    1010   1152 _UPHY14_TRX_LANEPLL_ANAREG_TOP_132	=	0x1010
                    1014   1153 _UPHY14_TRX_LANEPLL_ANAREG_TOP_133	=	0x1014
                    1018   1154 _UPHY14_TRX_LANEPLL_ANAREG_TOP_134	=	0x1018
                    101C   1155 _UPHY14_TRX_LANEPLL_ANAREG_TOP_135	=	0x101c
                    1020   1156 _UPHY14_TRX_LANEPLL_ANAREG_TOP_136	=	0x1020
                    1024   1157 _UPHY14_TRX_LANEPLL_ANAREG_TOP_137	=	0x1024
                    1028   1158 _UPHY14_TRX_LANEPLL_ANAREG_TOP_138	=	0x1028
                    102C   1159 _UPHY14_TRX_LANEPLL_ANAREG_TOP_139	=	0x102c
                    1030   1160 _UPHY14_TRX_LANEPLL_ANAREG_TOP_140	=	0x1030
                    1034   1161 _UPHY14_TRX_LANEPLL_ANAREG_TOP_141	=	0x1034
                    1038   1162 _UPHY14_TRX_LANEPLL_ANAREG_TOP_142	=	0x1038
                    103C   1163 _UPHY14_TRX_LANEPLL_ANAREG_TOP_143	=	0x103c
                    0200   1164 _UPHY14_TRX_ANAREG_TOP_128	=	0x0200
                    0204   1165 _UPHY14_TRX_ANAREG_TOP_129	=	0x0204
                    0208   1166 _UPHY14_TRX_ANAREG_TOP_130	=	0x0208
                    020C   1167 _UPHY14_TRX_ANAREG_TOP_131	=	0x020c
                    0210   1168 _UPHY14_TRX_ANAREG_TOP_132	=	0x0210
                    0214   1169 _UPHY14_TRX_ANAREG_TOP_133	=	0x0214
                    0218   1170 _UPHY14_TRX_ANAREG_TOP_134	=	0x0218
                    021C   1171 _UPHY14_TRX_ANAREG_TOP_135	=	0x021c
                    0220   1172 _UPHY14_TRX_ANAREG_TOP_136	=	0x0220
                    0224   1173 _UPHY14_TRX_ANAREG_TOP_137	=	0x0224
                    0228   1174 _UPHY14_TRX_ANAREG_TOP_138	=	0x0228
                    022C   1175 _UPHY14_TRX_ANAREG_TOP_139	=	0x022c
                    0230   1176 _UPHY14_TRX_ANAREG_TOP_140	=	0x0230
                    0234   1177 _UPHY14_TRX_ANAREG_TOP_141	=	0x0234
                    0238   1178 _UPHY14_TRX_ANAREG_TOP_142	=	0x0238
                    023C   1179 _UPHY14_TRX_ANAREG_TOP_143	=	0x023c
                    0240   1180 _UPHY14_TRX_ANAREG_TOP_144	=	0x0240
                    0244   1181 _UPHY14_TRX_ANAREG_TOP_145	=	0x0244
                    0248   1182 _UPHY14_TRX_ANAREG_TOP_146	=	0x0248
                    024C   1183 _UPHY14_TRX_ANAREG_TOP_147	=	0x024c
                    0250   1184 _UPHY14_TRX_ANAREG_TOP_148	=	0x0250
                    0254   1185 _UPHY14_TRX_ANAREG_TOP_149	=	0x0254
                    0258   1186 _UPHY14_TRX_ANAREG_TOP_150	=	0x0258
                    025C   1187 _UPHY14_TRX_ANAREG_TOP_151	=	0x025c
                    0260   1188 _UPHY14_TRX_ANAREG_TOP_152	=	0x0260
                    0264   1189 _UPHY14_TRX_ANAREG_TOP_153	=	0x0264
                    0268   1190 _UPHY14_TRX_ANAREG_TOP_154	=	0x0268
                    026C   1191 _UPHY14_TRX_ANAREG_TOP_155	=	0x026c
                    0270   1192 _UPHY14_TRX_ANAREG_TOP_156	=	0x0270
                    0274   1193 _UPHY14_TRX_ANAREG_TOP_157	=	0x0274
                    0000   1194 _UPHY14_TRX_ANAREG_BOT_0	=	0x0000
                    0004   1195 _UPHY14_TRX_ANAREG_BOT_1	=	0x0004
                    0008   1196 _UPHY14_TRX_ANAREG_BOT_2	=	0x0008
                    000C   1197 _UPHY14_TRX_ANAREG_BOT_3	=	0x000c
                    0010   1198 _UPHY14_TRX_ANAREG_BOT_4	=	0x0010
                    0014   1199 _UPHY14_TRX_ANAREG_BOT_5	=	0x0014
                    0018   1200 _UPHY14_TRX_ANAREG_BOT_6	=	0x0018
                    001C   1201 _UPHY14_TRX_ANAREG_BOT_7	=	0x001c
                    0020   1202 _UPHY14_TRX_ANAREG_BOT_8	=	0x0020
                    0024   1203 _UPHY14_TRX_ANAREG_BOT_9	=	0x0024
                    0028   1204 _UPHY14_TRX_ANAREG_BOT_10	=	0x0028
                    002C   1205 _UPHY14_TRX_ANAREG_BOT_11	=	0x002c
                    0030   1206 _UPHY14_TRX_ANAREG_BOT_12	=	0x0030
                    0034   1207 _UPHY14_TRX_ANAREG_BOT_13	=	0x0034
                    0038   1208 _UPHY14_TRX_ANAREG_BOT_14	=	0x0038
                    003C   1209 _UPHY14_TRX_ANAREG_BOT_15	=	0x003c
                    0040   1210 _UPHY14_TRX_ANAREG_BOT_16	=	0x0040
                    0044   1211 _UPHY14_TRX_ANAREG_BOT_17	=	0x0044
                    0048   1212 _UPHY14_TRX_ANAREG_BOT_18	=	0x0048
                    004C   1213 _UPHY14_TRX_ANAREG_BOT_19	=	0x004c
                    0050   1214 _UPHY14_TRX_ANAREG_BOT_20	=	0x0050
                    0054   1215 _UPHY14_TRX_ANAREG_BOT_21	=	0x0054
                    0058   1216 _UPHY14_TRX_ANAREG_BOT_22	=	0x0058
                    005C   1217 _UPHY14_TRX_ANAREG_BOT_23	=	0x005c
                    0060   1218 _UPHY14_TRX_ANAREG_BOT_24	=	0x0060
                    0064   1219 _UPHY14_TRX_ANAREG_BOT_25	=	0x0064
                    0068   1220 _UPHY14_TRX_ANAREG_BOT_26	=	0x0068
                    006C   1221 _UPHY14_TRX_ANAREG_BOT_27	=	0x006c
                    0070   1222 _UPHY14_TRX_ANAREG_BOT_28	=	0x0070
                    0074   1223 _UPHY14_TRX_ANAREG_BOT_29	=	0x0074
                    0078   1224 _UPHY14_TRX_ANAREG_BOT_30	=	0x0078
                    007C   1225 _UPHY14_TRX_ANAREG_BOT_31	=	0x007c
                    0080   1226 _UPHY14_TRX_ANAREG_BOT_32	=	0x0080
                    0478   1227 _ANA_DFEE_REG_1E	=	0x0478
                    047C   1228 _ANA_DFEE_REG_1F	=	0x047c
                    0480   1229 _ANA_DFEE_REG_20	=	0x0480
                    0484   1230 _ANA_DFEE_REG_21	=	0x0484
                    0488   1231 _ANA_DFEE_REG_22	=	0x0488
                    048C   1232 _ANA_DFEE_REG_23	=	0x048c
                    0490   1233 _ANA_DFEE_REG_24	=	0x0490
                    0494   1234 _ANA_DFEE_REG_25	=	0x0494
                    0498   1235 _ANA_DFEE_REG_26	=	0x0498
                    049C   1236 _ANA_DFEE_REG_27	=	0x049c
                    0400   1237 _ANA_DFEE_REG_00	=	0x0400
                    0404   1238 _ANA_DFEE_REG_01	=	0x0404
                    0408   1239 _ANA_DFEE_REG_02	=	0x0408
                    040C   1240 _ANA_DFEE_REG_03	=	0x040c
                    0410   1241 _ANA_DFEE_REG_04	=	0x0410
                    0414   1242 _ANA_DFEE_REG_05	=	0x0414
                    0418   1243 _ANA_DFEE_REG_06	=	0x0418
                    041C   1244 _ANA_DFEE_REG_07	=	0x041c
                    0420   1245 _ANA_DFEE_REG_08	=	0x0420
                    0424   1246 _ANA_DFEE_REG_09	=	0x0424
                    0428   1247 _ANA_DFEE_REG_0A	=	0x0428
                    042C   1248 _ANA_DFEE_REG_0B	=	0x042c
                    0430   1249 _ANA_DFEE_REG_0C	=	0x0430
                    0434   1250 _ANA_DFEE_REG_0D	=	0x0434
                    0438   1251 _ANA_DFEE_REG_0E	=	0x0438
                    043C   1252 _ANA_DFEE_REG_0F	=	0x043c
                    0440   1253 _ANA_DFEE_REG_10	=	0x0440
                    0444   1254 _ANA_DFEE_REG_11	=	0x0444
                    0448   1255 _ANA_DFEE_REG_12	=	0x0448
                    044C   1256 _ANA_DFEE_REG_13	=	0x044c
                    0450   1257 _ANA_DFEE_REG_14	=	0x0450
                    0454   1258 _ANA_DFEE_REG_15	=	0x0454
                    0458   1259 _ANA_DFEE_REG_16	=	0x0458
                    045C   1260 _ANA_DFEE_REG_17	=	0x045c
                    0460   1261 _ANA_DFEE_REG_18	=	0x0460
                    0464   1262 _ANA_DFEE_REG_19	=	0x0464
                    0468   1263 _ANA_DFEE_REG_1A	=	0x0468
                    046C   1264 _ANA_DFEE_REG_1B	=	0x046c
                    0470   1265 _ANA_DFEE_REG_1C	=	0x0470
                    0474   1266 _ANA_DFEE_REG_1D	=	0x0474
                    0830   1267 _ANA_DFEO_REG_0C	=	0x0830
                    0834   1268 _ANA_DFEO_REG_0D	=	0x0834
                    0838   1269 _ANA_DFEO_REG_0E	=	0x0838
                    083C   1270 _ANA_DFEO_REG_0F	=	0x083c
                    0840   1271 _ANA_DFEO_REG_10	=	0x0840
                    0844   1272 _ANA_DFEO_REG_11	=	0x0844
                    0848   1273 _ANA_DFEO_REG_12	=	0x0848
                    084C   1274 _ANA_DFEO_REG_13	=	0x084c
                    0850   1275 _ANA_DFEO_REG_14	=	0x0850
                    0854   1276 _ANA_DFEO_REG_15	=	0x0854
                    0858   1277 _ANA_DFEO_REG_16	=	0x0858
                    085C   1278 _ANA_DFEO_REG_17	=	0x085c
                    0860   1279 _ANA_DFEO_REG_18	=	0x0860
                    0864   1280 _ANA_DFEO_REG_19	=	0x0864
                    0868   1281 _ANA_DFEO_REG_1A	=	0x0868
                    086C   1282 _ANA_DFEO_REG_1B	=	0x086c
                    0870   1283 _ANA_DFEO_REG_1C	=	0x0870
                    0874   1284 _ANA_DFEO_REG_1D	=	0x0874
                    0878   1285 _ANA_DFEO_REG_1E	=	0x0878
                    087C   1286 _ANA_DFEO_REG_1F	=	0x087c
                    0880   1287 _ANA_DFEO_REG_20	=	0x0880
                    0884   1288 _ANA_DFEO_REG_21	=	0x0884
                    0888   1289 _ANA_DFEO_REG_22	=	0x0888
                    088C   1290 _ANA_DFEO_REG_23	=	0x088c
                    0890   1291 _ANA_DFEO_REG_24	=	0x0890
                    0894   1292 _ANA_DFEO_REG_25	=	0x0894
                    0898   1293 _ANA_DFEO_REG_26	=	0x0898
                    089C   1294 _ANA_DFEO_REG_27	=	0x089c
                    0800   1295 _ANA_DFEO_REG_00	=	0x0800
                    0804   1296 _ANA_DFEO_REG_01	=	0x0804
                    0808   1297 _ANA_DFEO_REG_02	=	0x0808
                    080C   1298 _ANA_DFEO_REG_03	=	0x080c
                    0810   1299 _ANA_DFEO_REG_04	=	0x0810
                    0814   1300 _ANA_DFEO_REG_05	=	0x0814
                    0818   1301 _ANA_DFEO_REG_06	=	0x0818
                    081C   1302 _ANA_DFEO_REG_07	=	0x081c
                    0820   1303 _ANA_DFEO_REG_08	=	0x0820
                    0824   1304 _ANA_DFEO_REG_09	=	0x0824
                    0828   1305 _ANA_DFEO_REG_0A	=	0x0828
                    082C   1306 _ANA_DFEO_REG_0B	=	0x082c
                    8200   1307 _UPHY14_CMN_ANAREG_TOP_128	=	0x8200
                    8204   1308 _UPHY14_CMN_ANAREG_TOP_129	=	0x8204
                    8208   1309 _UPHY14_CMN_ANAREG_TOP_130	=	0x8208
                    820C   1310 _UPHY14_CMN_ANAREG_TOP_131	=	0x820c
                    8210   1311 _UPHY14_CMN_ANAREG_TOP_132	=	0x8210
                    8214   1312 _UPHY14_CMN_ANAREG_TOP_133	=	0x8214
                    8218   1313 _UPHY14_CMN_ANAREG_TOP_134	=	0x8218
                    821C   1314 _UPHY14_CMN_ANAREG_TOP_135	=	0x821c
                    8220   1315 _UPHY14_CMN_ANAREG_TOP_136	=	0x8220
                    8224   1316 _UPHY14_CMN_ANAREG_TOP_137	=	0x8224
                    8228   1317 _UPHY14_CMN_ANAREG_TOP_138	=	0x8228
                    822C   1318 _UPHY14_CMN_ANAREG_TOP_139	=	0x822c
                    8230   1319 _UPHY14_CMN_ANAREG_TOP_140	=	0x8230
                    8234   1320 _UPHY14_CMN_ANAREG_TOP_141	=	0x8234
                    8238   1321 _UPHY14_CMN_ANAREG_TOP_142	=	0x8238
                    823C   1322 _UPHY14_CMN_ANAREG_TOP_143	=	0x823c
                    8240   1323 _UPHY14_CMN_ANAREG_TOP_144	=	0x8240
                    8244   1324 _UPHY14_CMN_ANAREG_TOP_145	=	0x8244
                    8248   1325 _UPHY14_CMN_ANAREG_TOP_146	=	0x8248
                    824C   1326 _UPHY14_CMN_ANAREG_TOP_147	=	0x824c
                    8250   1327 _UPHY14_CMN_ANAREG_TOP_148	=	0x8250
                    8254   1328 _UPHY14_CMN_ANAREG_TOP_149	=	0x8254
                    8258   1329 _UPHY14_CMN_ANAREG_TOP_150	=	0x8258
                    825C   1330 _UPHY14_CMN_ANAREG_TOP_151	=	0x825c
                    8260   1331 _UPHY14_CMN_ANAREG_TOP_152	=	0x8260
                    8264   1332 _UPHY14_CMN_ANAREG_TOP_153	=	0x8264
                    8268   1333 _UPHY14_CMN_ANAREG_TOP_154	=	0x8268
                    826C   1334 _UPHY14_CMN_ANAREG_TOP_155	=	0x826c
                    8270   1335 _UPHY14_CMN_ANAREG_TOP_156	=	0x8270
                    8274   1336 _UPHY14_CMN_ANAREG_TOP_157	=	0x8274
                    8278   1337 _UPHY14_CMN_ANAREG_TOP_158	=	0x8278
                    827C   1338 _UPHY14_CMN_ANAREG_TOP_159	=	0x827c
                    8280   1339 _UPHY14_CMN_ANAREG_TOP_160	=	0x8280
                    8284   1340 _UPHY14_CMN_ANAREG_TOP_161	=	0x8284
                    8288   1341 _UPHY14_CMN_ANAREG_TOP_162	=	0x8288
                    828C   1342 _UPHY14_CMN_ANAREG_TOP_163	=	0x828c
                    8290   1343 _UPHY14_CMN_ANAREG_TOP_164	=	0x8290
                    8294   1344 _UPHY14_CMN_ANAREG_TOP_165	=	0x8294
                    8298   1345 _UPHY14_CMN_ANAREG_TOP_166	=	0x8298
                    829C   1346 _UPHY14_CMN_ANAREG_TOP_167	=	0x829c
                    82A0   1347 _UPHY14_CMN_ANAREG_TOP_168	=	0x82a0
                    82A4   1348 _UPHY14_CMN_ANAREG_TOP_169	=	0x82a4
                    82A8   1349 _UPHY14_CMN_ANAREG_TOP_170	=	0x82a8
                    82AC   1350 _UPHY14_CMN_ANAREG_TOP_171	=	0x82ac
                    82B0   1351 _UPHY14_CMN_ANAREG_TOP_172	=	0x82b0
                    82B4   1352 _UPHY14_CMN_ANAREG_TOP_173	=	0x82b4
                    82B8   1353 _UPHY14_CMN_ANAREG_TOP_174	=	0x82b8
                    82BC   1354 _UPHY14_CMN_ANAREG_TOP_175	=	0x82bc
                    82C0   1355 _UPHY14_CMN_ANAREG_TOP_176	=	0x82c0
                    82C4   1356 _UPHY14_CMN_ANAREG_TOP_177	=	0x82c4
                    82C8   1357 _UPHY14_CMN_ANAREG_TOP_178	=	0x82c8
                    82CC   1358 _UPHY14_CMN_ANAREG_TOP_179	=	0x82cc
                    82D0   1359 _UPHY14_CMN_ANAREG_TOP_180	=	0x82d0
                    82D4   1360 _UPHY14_CMN_ANAREG_TOP_181	=	0x82d4
                    82D8   1361 _UPHY14_CMN_ANAREG_TOP_182	=	0x82d8
                    82DC   1362 _UPHY14_CMN_ANAREG_TOP_183	=	0x82dc
                    82E0   1363 _UPHY14_CMN_ANAREG_TOP_184	=	0x82e0
                    82E4   1364 _UPHY14_CMN_ANAREG_TOP_185	=	0x82e4
                    82E8   1365 _UPHY14_CMN_ANAREG_TOP_186	=	0x82e8
                    82EC   1366 _UPHY14_CMN_ANAREG_TOP_187	=	0x82ec
                    82F0   1367 _UPHY14_CMN_ANAREG_TOP_188	=	0x82f0
                    82F4   1368 _UPHY14_CMN_ANAREG_TOP_189	=	0x82f4
                    82F8   1369 _UPHY14_CMN_ANAREG_TOP_190	=	0x82f8
                    82FC   1370 _UPHY14_CMN_ANAREG_TOP_191	=	0x82fc
                    8300   1371 _UPHY14_CMN_ANAREG_TOP_192	=	0x8300
                    8304   1372 _UPHY14_CMN_ANAREG_TOP_193	=	0x8304
                    8308   1373 _UPHY14_CMN_ANAREG_TOP_194	=	0x8308
                    830C   1374 _UPHY14_CMN_ANAREG_TOP_195	=	0x830c
                    8310   1375 _UPHY14_CMN_ANAREG_TOP_196	=	0x8310
                    8314   1376 _UPHY14_CMN_ANAREG_TOP_197	=	0x8314
                    8318   1377 _UPHY14_CMN_ANAREG_TOP_198	=	0x8318
                    831C   1378 _UPHY14_CMN_ANAREG_TOP_199	=	0x831c
                    8320   1379 _UPHY14_CMN_ANAREG_TOP_200	=	0x8320
                    8324   1380 _UPHY14_CMN_ANAREG_TOP_201	=	0x8324
                    8328   1381 _UPHY14_CMN_ANAREG_TOP_202	=	0x8328
                    832C   1382 _UPHY14_CMN_ANAREG_TOP_203	=	0x832c
                    8330   1383 _UPHY14_CMN_ANAREG_TOP_204	=	0x8330
                    8334   1384 _UPHY14_CMN_ANAREG_TOP_205	=	0x8334
                    8338   1385 _UPHY14_CMN_ANAREG_TOP_206	=	0x8338
                    833C   1386 _UPHY14_CMN_ANAREG_TOP_207	=	0x833c
                    8340   1387 _UPHY14_CMN_ANAREG_TOP_208	=	0x8340
                    8344   1388 _UPHY14_CMN_ANAREG_TOP_209	=	0x8344
                    8348   1389 _UPHY14_CMN_ANAREG_TOP_210	=	0x8348
                    834C   1390 _UPHY14_CMN_ANAREG_TOP_211	=	0x834c
                    8350   1391 _UPHY14_CMN_ANAREG_TOP_212	=	0x8350
                    8354   1392 _UPHY14_CMN_ANAREG_TOP_213	=	0x8354
                    8358   1393 _UPHY14_CMN_ANAREG_TOP_214	=	0x8358
                    2000   1394 _PM_CTRL_TX_LANE_REG1_LANE	=	0x2000
                    2004   1395 _PM_CTRL_TX_LANE_REG2_LANE	=	0x2004
                    2008   1396 _INPUT_TX_PIN_REG0_LANE	=	0x2008
                    200C   1397 _INPUT_TX_PIN_REG1_LANE	=	0x200c
                    2010   1398 _INPUT_TX_PIN_REG2_LANE	=	0x2010
                    2014   1399 _INPUT_TX_PIN_REG3_LANE	=	0x2014
                    2018   1400 _PM_CTRL_INTERRUPT_REG1_LANE	=	0x2018
                    201C   1401 _PM_CTRL_INTERRUPT_REG2	=	0x201c
                    2020   1402 _CLKGEN_TX_LANE_REG1_LANE	=	0x2020
                    2024   1403 _TX_SPEED_CONVERT_LANE	=	0x2024
                    2028   1404 _SPD_CTRL_INTERRUPT_REG1_LANE	=	0x2028
                    202C   1405 _SPD_CTRL_INTERRUPT_REG2	=	0x202c
                    2030   1406 _SPD_CTRL_TX_LANE_REG1_LANE	=	0x2030
                    2034   1407 _TX_SYSTEM_LANE	=	0x2034
                    203C   1408 _INPUT_TX_PIN_REG4_LANE	=	0x203c
                    2040   1409 _TX_CALIBRATION_LANE	=	0x2040
                    2044   1410 _DIG_TX_RSVD_REG0	=	0x2044
                    2048   1411 _INPUT_TX_PIN_REG5_LANE	=	0x2048
                    204C   1412 __FIELDNAME__LANE	=	0x204c
                    2050   1413 _PM_CTRL_INTERRUPT_ISR_REG1_LANE	=	0x2050
                    2054   1414 _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE	=	0x2054
                    2058   1415 _ANALOG_TX_REALTIME_REG_1	=	0x2058
                    205C   1416 _MON_TOP	=	0x205c
                    2100   1417 _PM_CTRL_RX_LANE_REG1_LANE	=	0x2100
                    2104   1418 _RX_SYSTEM_LANE	=	0x2104
                    2108   1419 _INPUT_RX_PIN_REG0_LANE	=	0x2108
                    210C   1420 _INPUT_RX_PIN_REG1_LANE	=	0x210c
                    2110   1421 _INPUT_RX_PIN_REG2_LANE	=	0x2110
                    2114   1422 _SPD_CTRL_RX_LANE_REG1_LANE	=	0x2114
                    2118   1423 _DIG_RX_RSVD_REG0	=	0x2118
                    211C   1424 _CLKGEN_RX_LANE_REG1_LANE	=	0x211c
                    2120   1425 _FRAME_SYNC_DET_REG0	=	0x2120
                    2124   1426 _FRAME_SYNC_DET_REG1	=	0x2124
                    2128   1427 _FRAME_SYNC_DET_REG2	=	0x2128
                    212C   1428 _FRAME_SYNC_DET_REG3	=	0x212c
                    2130   1429 _FRAME_SYNC_DET_REG4	=	0x2130
                    2134   1430 _FRAME_SYNC_DET_REG5	=	0x2134
                    2138   1431 _FRAME_SYNC_DET_REG6	=	0x2138
                    213C   1432 _CDR_LOCK_REG	=	0x213c
                    2140   1433 _RX_LANE_INTERRUPT	=	0x2140
                    2144   1434 _RX_LANE_INTERRUPT_MASK	=	0x2144
                    2148   1435 _RX_DATA_PATH_REG	=	0x2148
                    214C   1436 _INPUT_RX_PIN_REG3_LANE	=	0x214c
                    2150   1437 _RX_CALIBRATION_REG	=	0x2150
                    2158   1438 _RX_LANE_INTERRUPT_REG1	=	0x2158
                    2160   1439 _DTL_REG0	=	0x2160
                    2164   1440 _DTL_REG1	=	0x2164
                    2168   1441 _DTL_REG2	=	0x2168
                    216C   1442 _DTL_REG3	=	0x216c
                    2170   1443 _SQ_REG0	=	0x2170
                    4000   1444 _LANE_CFG0	=	0x4000
                    4004   1445 _LANE_STATUS0	=	0x4004
                    4008   1446 _LANE_CFG_STATUS2_LANE	=	0x4008
                    400C   1447 _LANE_CFG2_LANE	=	0x400c
                    4010   1448 _LANE_CFG4	=	0x4010
                    4014   1449 _LANE_CFG_STATUS3_LANE	=	0x4014
                    4018   1450 _LANE_DP_PIE8_CFG0_LANE	=	0x4018
                    401C   1451 _LANE_USB_DP_CFG1_LANE	=	0x401c
                    4020   1452 _LANE_USB_DP_CFG2_LANE	=	0x4020
                    4024   1453 _LANE_EQ_CFG0_LANE	=	0x4024
                    4028   1454 _LANE_EQ_CFG1_LANE	=	0x4028
                    402C   1455 _LANE_PRESET_CFG0_LANE	=	0x402c
                    4030   1456 _LANE_PRESET_CFG2_LANE	=	0x4030
                    4034   1457 _LANE_PRESET_CFG4_LANE	=	0x4034
                    4038   1458 _LANE_PRESET_CFG6_LANE	=	0x4038
                    403C   1459 _LANE_PRESET_CFG8_LANE	=	0x403c
                    4040   1460 _LANE_PRESET_CFG10_LANE	=	0x4040
                    4044   1461 _LANE_PRESET_CFG12_LANE	=	0x4044
                    4048   1462 _LANE_PRESET_CFG14_LANE	=	0x4048
                    404C   1463 _LANE_PRESET_CFG16_LANE	=	0x404c
                    4050   1464 _LANE_COEFF_MAX0_LANE	=	0x4050
                    4054   1465 _LANE_REMOTE_SET_LANE	=	0x4054
                    4058   1466 _LANE_EQ_16G_CFG0_LANE	=	0x4058
                    405C   1467 _LANE_16G_PRESET_CFG0_LANE	=	0x405c
                    4060   1468 _LANE_16G_PRESET_CFG2_LANE	=	0x4060
                    4064   1469 _LANE_16G_PRESET_CFG4_LANE	=	0x4064
                    4068   1470 _LANE_16G_PRESET_CFG6_LANE	=	0x4068
                    406C   1471 _LANE_16G_PRESET_CFG8_LANE	=	0x406c
                    4070   1472 _LANE_16G_PRESET_CFG10_LANE	=	0x4070
                    4074   1473 _LANE_16G_PRESET_CFG12_LANE	=	0x4074
                    4078   1474 _LANE_16G_PRESET_CFG14_LANE	=	0x4078
                    407C   1475 _LANE_16G_PRESET_CFG16_LANE	=	0x407c
                    4080   1476 _LANE_EQ_32G_CFG0_LANE	=	0x4080
                    4084   1477 _LANE_32G_PRESET_CFG0_LANE	=	0x4084
                    4088   1478 _LANE_32G_PRESET_CFG2_LANE	=	0x4088
                    408C   1479 _LANE_32G_PRESET_CFG4_LANE	=	0x408c
                    4090   1480 _LANE_32G_PRESET_CFG6_LANE	=	0x4090
                    4094   1481 _LANE_32G_PRESET_CFG8_LANE	=	0x4094
                    4098   1482 _LANE_32G_PRESET_CFG10_LANE	=	0x4098
                    409C   1483 _LANE_32G_PRESET_CFG12_LANE	=	0x409c
                    40A0   1484 _LANE_32G_PRESET_CFG14_LANE	=	0x40a0
                    40A4   1485 _LANE_32G_PRESET_CFG16_LANE	=	0x40a4
                    2200   1486 _MCU_CONTROL_LANE	=	0x2200
                    2204   1487 _MCU_GPIO	=	0x2204
                    2208   1488 _CACHE_DEBUG0	=	0x2208
                    220C   1489 _CACHE_DEBUG1	=	0x220c
                    2210   1490 _LANE_SYSTEM0	=	0x2210
                    2230   1491 _MCU_STATUS0_LANE	=	0x2230
                    2234   1492 _MCU_STATUS1_LANE	=	0x2234
                    2238   1493 _MCU_STATUS2_LANE	=	0x2238
                    223C   1494 _MCU_STATUS3_LANE	=	0x223c
                    2240   1495 _MCU_INT0_CONTROL	=	0x2240
                    2244   1496 _MCU_INT1_CONTROL	=	0x2244
                    2248   1497 _MCU_INT2_CONTROL	=	0x2248
                    224C   1498 _MCU_INT3_CONTROL	=	0x224c
                    2250   1499 _MCU_INT4_CONTROL	=	0x2250
                    2254   1500 _MCU_INT5_CONTROL	=	0x2254
                    2258   1501 _MCU_INT6_CONTROL	=	0x2258
                    225C   1502 _MCU_INT7_CONTROL	=	0x225c
                    2260   1503 _MCU_INT8_CONTROL	=	0x2260
                    2264   1504 _MCU_INT9_CONTROL	=	0x2264
                    2268   1505 _MCU_INT10_CONTROL	=	0x2268
                    226C   1506 _MCU_INT11_CONTROL	=	0x226c
                    2270   1507 _MCU_INT12_CONTROL	=	0x2270
                    2274   1508 _MCU_TIMER_CONTROL	=	0x2274
                    2278   1509 _MCU_TIMER0_CONTROL	=	0x2278
                    227C   1510 _MCU_TIMER1_CONTROL	=	0x227c
                    2280   1511 _MCU_TIMER2_CONTROL	=	0x2280
                    2284   1512 _MCU_TIMER3_CONTROL	=	0x2284
                    2288   1513 _MCU_IRQ_LANE	=	0x2288
                    228C   1514 _MCU_IRQ_MASK_LANE	=	0x228c
                    2290   1515 _MCU_MEM_REG1_LANE	=	0x2290
                    2294   1516 _MCU_MEM_REG2_LANE	=	0x2294
                    2298   1517 _MCU_TIMER_CTRL_1_LANE	=	0x2298
                    229C   1518 _MCU_TIMER_CTRL_2_LANE	=	0x229c
                    22A0   1519 _MCU_TIMER_CTRL_3_LANE	=	0x22a0
                    22A4   1520 _MCU_TIMER_CTRL_4_LANE	=	0x22a4
                    22A8   1521 _MCU_TIMER_CTRL_5_LANE	=	0x22a8
                    22AC   1522 _MCU_TIMER_CTRL_6_LANE	=	0x22ac
                    22B0   1523 _MCU_TIMER_CTRL_7_LANE	=	0x22b0
                    22B4   1524 _MCU_DEBUG0_LANE	=	0x22b4
                    22B8   1525 _MCU_DEBUG1_LANE	=	0x22b8
                    22BC   1526 _MCU_DEBUG2_LANE	=	0x22bc
                    22C0   1527 _MCU_DEBUG3_LANE	=	0x22c0
                    22C4   1528 _MCU_DEBUG_LANE	=	0x22c4
                    22C8   1529 _EXT_INT_CONTROL	=	0x22c8
                    22CC   1530 _ANA_IF_TRX_REG0	=	0x22cc
                    22D0   1531 _ANA_IF_DFEE_REG0	=	0x22d0
                    22D4   1532 _ANA_IF_DFEO_REG0	=	0x22d4
                    22D8   1533 _MCU_IRQ_ISR_LANE	=	0x22d8
                    22DC   1534 _MCU_WDT_LANE	=	0x22dc
                    22E0   1535 _MCU_INT_CONTROL_13	=	0x22e0
                    22E4   1536 _MCU_COMMAND0	=	0x22e4
                    22F4   1537 _MEM_ECC_ERR_ADDRESS0	=	0x22f4
                    22F8   1538 _XDATA_MEM_CHECKSUM_LANE0	=	0x22f8
                    22FC   1539 _XDATA_MEM_CHECKSUM_LANE1	=	0x22fc
                    2300   1540 _PT_CONTROL0	=	0x2300
                    2304   1541 _PT_CONTROL1	=	0x2304
                    2308   1542 _PT_USER_PATTERN0	=	0x2308
                    230C   1543 _PT_USER_PATTERN1	=	0x230c
                    2310   1544 _PT_USER_PATTERN2	=	0x2310
                    2314   1545 _PT_COUNTER0	=	0x2314
                    2318   1546 _PT_COUNTER1	=	0x2318
                    231C   1547 _PT_COUNTER2	=	0x231c
                    2400   1548 _DFE_CTRL_REG0	=	0x2400
                    2404   1549 _DFE_CTRL_REG1	=	0x2404
                    2408   1550 _DFE_CTRL_REG2	=	0x2408
                    240C   1551 _DFE_CTRL_REG3	=	0x240c
                    2410   1552 _RX_EQ_CLK_CTRL	=	0x2410
                    2414   1553 _DFE_CTRL_REG4	=	0x2414
                    2418   1554 _DFE_ANA_REG0	=	0x2418
                    241C   1555 _DFE_ANA_REG1	=	0x241c
                    2420   1556 _DFE_STEP_REG0	=	0x2420
                    2424   1557 _DFE_STEP_REG1	=	0x2424
                    2430   1558 _DFE_FEN_EVEN_REG	=	0x2430
                    2434   1559 _DFE_FEN_ODD_REG	=	0x2434
                    2438   1560 _DFE_DC_EVEN_REG8	=	0x2438
                    243C   1561 _DFE_DC_ODD_REG8	=	0x243c
                    2440   1562 _DFE_FEXT_EVEN_REG0	=	0x2440
                    2444   1563 _DFE_FEXT_EVEN_REG1	=	0x2444
                    2448   1564 _DFE_FEXT_EVEN_REG2	=	0x2448
                    244C   1565 _DFE_FEXT_EVEN_REG3	=	0x244c
                    2450   1566 _DFE_FEXT_EVEN_REG4	=	0x2450
                    2454   1567 _DFE_FEXT_EVEN_REG5	=	0x2454
                    2458   1568 _DFE_FEXT_EVEN_REG6	=	0x2458
                    245C   1569 _DFE_FEXT_EVEN_REG7	=	0x245c
                    2460   1570 _DFE_FEXT_ODD_REG0	=	0x2460
                    2464   1571 _DFE_FEXT_ODD_REG1	=	0x2464
                    2468   1572 _DFE_FEXT_ODD_REG2	=	0x2468
                    246C   1573 _DFE_FEXT_ODD_REG3	=	0x246c
                    2470   1574 _DFE_FEXT_ODD_REG4	=	0x2470
                    2474   1575 _DFE_FEXT_ODD_REG5	=	0x2474
                    2478   1576 _DFE_FEXT_ODD_REG6	=	0x2478
                    247C   1577 _DFE_FEXT_ODD_REG7	=	0x247c
                    2480   1578 _DFE_READ_EVEN_SM_REG0	=	0x2480
                    2484   1579 _DFE_READ_EVEN_SM_REG1	=	0x2484
                    2488   1580 _DFE_READ_EVEN_SM_REG2	=	0x2488
                    248C   1581 _DFE_READ_EVEN_SM_REG3	=	0x248c
                    2490   1582 _DFE_READ_EVEN_SM_REG4	=	0x2490
                    2494   1583 _DFE_READ_EVEN_SM_REG5	=	0x2494
                    2498   1584 _DFE_READ_EVEN_SM_REG6	=	0x2498
                    249C   1585 _DFE_READ_EVEN_SM_REG7	=	0x249c
                    24A0   1586 _DFE_READ_ODD_SM_REG0	=	0x24a0
                    24A4   1587 _DFE_READ_ODD_SM_REG1	=	0x24a4
                    24A8   1588 _DFE_READ_ODD_SM_REG2	=	0x24a8
                    24AC   1589 _DFE_READ_ODD_SM_REG3	=	0x24ac
                    24B0   1590 _DFE_READ_ODD_SM_REG4	=	0x24b0
                    24B4   1591 _DFE_READ_ODD_SM_REG5	=	0x24b4
                    24B8   1592 _DFE_READ_ODD_SM_REG6	=	0x24b8
                    24BC   1593 _DFE_READ_ODD_SM_REG7	=	0x24bc
                    24C0   1594 _DFE_READ_EVEN_SM_REG8	=	0x24c0
                    24C4   1595 _DFE_READ_ODD_SM_REG8	=	0x24c4
                    24D0   1596 _DFE_READ_EVEN_2C_REG0	=	0x24d0
                    24D4   1597 _DFE_READ_EVEN_2C_REG1	=	0x24d4
                    24D8   1598 _DFE_READ_EVEN_2C_REG2	=	0x24d8
                    24DC   1599 _DFE_READ_EVEN_2C_REG3	=	0x24dc
                    24E0   1600 _DFE_READ_EVEN_2C_REG4	=	0x24e0
                    24E4   1601 _DFE_READ_EVEN_2C_REG5	=	0x24e4
                    24E8   1602 _DFE_READ_EVEN_2C_REG6	=	0x24e8
                    24EC   1603 _DFE_READ_EVEN_2C_REG7	=	0x24ec
                    24F0   1604 _DFE_READ_ODD_2C_REG0	=	0x24f0
                    24F4   1605 _DFE_READ_ODD_2C_REG1	=	0x24f4
                    24F8   1606 _DFE_READ_ODD_2C_REG2	=	0x24f8
                    24FC   1607 _DFE_READ_ODD_2C_REG3	=	0x24fc
                    2500   1608 _DFE_READ_ODD_2C_REG4	=	0x2500
                    2504   1609 _DFE_READ_ODD_2C_REG5	=	0x2504
                    2508   1610 _DFE_READ_ODD_2C_REG6	=	0x2508
                    250C   1611 _DFE_READ_ODD_2C_REG7	=	0x250c
                    2510   1612 _DFE_READ_EVEN_2C_REG8	=	0x2510
                    2514   1613 _DFE_READ_ODD_2C_REG8	=	0x2514
                    2518   1614 _CAL_OFST_REG0	=	0x2518
                    251C   1615 _CAL_OFST_REG1	=	0x251c
                    2520   1616 _CAL_OFST_REG2	=	0x2520
                    2530   1617 _DFE_DCE_REG0	=	0x2530
                    2540   1618 _DFE_STATIC_LANE_REG0	=	0x2540
                    2544   1619 _DFE_STATIC_LANE_REG1	=	0x2544
                    2548   1620 _DFE_STATIC_LANE_REG3	=	0x2548
                    254C   1621 _DFE_STATIC_LANE_REG4	=	0x254c
                    2550   1622 _DFE_STATIC_LANE_REG5	=	0x2550
                    2554   1623 _DFE_STATIC_LANE_REG6	=	0x2554
                    2560   1624 _EOM_VLD_REG0	=	0x2560
                    2564   1625 _EOM_VLD_REG1	=	0x2564
                    2568   1626 _EOM_VLD_REG2	=	0x2568
                    256C   1627 _EOM_VLD_REG3	=	0x256c
                    2570   1628 _EOM_ERR_REG0	=	0x2570
                    2574   1629 _EOM_ERR_REG1	=	0x2574
                    2578   1630 _EOM_ERR_REG2	=	0x2578
                    257C   1631 _EOM_ERR_REG3	=	0x257c
                    2580   1632 _EOM_REG0	=	0x2580
                    25F0   1633 _EOM_VLD_REG4	=	0x25f0
                    25F4   1634 _LANE_MARGIN_REG0	=	0x25f4
                    6000   1635 _CAL_CTRL1_LANE	=	0x6000
                    6004   1636 _CAL_CTRL2_LANE	=	0x6004
                    6008   1637 _CAL_CTRL3_LANE	=	0x6008
                    600C   1638 _CAL_CTRL4_LANE	=	0x600c
                    6010   1639 _CAL_SAVE_DATA1_LANE	=	0x6010
                    6014   1640 _CAL_SAVE_DATA2_LANE	=	0x6014
                    6018   1641 _CAL_SAVE_DATA3_LANE	=	0x6018
                    601C   1642 _PHY_REMOTE_CTRL_COMMAND_LANE	=	0x601c
                    6020   1643 _PHY_REMOTE_CTRL_VALUE_LANE	=	0x6020
                    6024   1644 _PHY_LOCAL_VALUE_LANE	=	0x6024
                    6028   1645 _TRX_TRAIN_IF_TIMERS1_LANE	=	0x6028
                    602C   1646 _TRX_TRAIN_IF_TIMERS2_LANE	=	0x602c
                    6030   1647 _TRX_TRAIN_IF_TIMERS_ENABLE_LANE	=	0x6030
                    6034   1648 _DFE_CONTROL_0	=	0x6034
                    6038   1649 _DFE_CONTROL_1	=	0x6038
                    6040   1650 _DFE_CONTROL_2	=	0x6040
                    6044   1651 _DFE_CONTROL_3	=	0x6044
                    6048   1652 _DFE_CONTROL_4	=	0x6048
                    604C   1653 _DFE_CONTROL_5	=	0x604c
                    6050   1654 _TRAIN_CONTROL_0	=	0x6050
                    6054   1655 _TRAIN_CONTROL_1	=	0x6054
                    6058   1656 _TRAIN_CONTROL_2	=	0x6058
                    605C   1657 _RPTA_CONFIG_0	=	0x605c
                    6060   1658 _RPTA_CONFIG_1	=	0x6060
                    6064   1659 _DLL_CAL	=	0x6064
                    6068   1660 _TRAIN_PARA_0	=	0x6068
                    606C   1661 _TRAIN_PARA_1	=	0x606c
                    6070   1662 _TRAIN_PARA_2	=	0x6070
                    6074   1663 _TRAIN_PARA_3	=	0x6074
                    6078   1664 _DFE_CONTROL_6	=	0x6078
                    607C   1665 _DFE_TEST_0	=	0x607c
                    6080   1666 _DFE_TEST_1	=	0x6080
                    6084   1667 _DFE_TEST_4	=	0x6084
                    6088   1668 _DFE_TEST_5	=	0x6088
                    608C   1669 _DFE_CONTROL_7	=	0x608c
                    6090   1670 _DFE_CONTROL_8	=	0x6090
                    6094   1671 _DFE_CONTROL_9	=	0x6094
                    6098   1672 _DFE_CONTROL_10	=	0x6098
                    609C   1673 _DFE_CONTROL_11	=	0x609c
                    60A0   1674 _CDS_CTRL_REG0	=	0x60a0
                    60A4   1675 _CDS_CTRL_REG1	=	0x60a4
                    60A8   1676 _ESM_POP_P_CNT_LOW_LANE	=	0x60a8
                    60AC   1677 _ESM_ERR_P_CNT_LOW_LANE	=	0x60ac
                    60B0   1678 _ESM_ERR_POP_CNT_HIGH_LANE	=	0x60b0
                    60B4   1679 _TRAIN_CONTROL_3	=	0x60b4
                    60B8   1680 _TRAIN_CONTROL_4	=	0x60b8
                    60BC   1681 _TRAIN_CONTROL_5	=	0x60bc
                    60C0   1682 _TRAIN_CONTROL_6	=	0x60c0
                    60C4   1683 _TRAIN_CONTROL_7	=	0x60c4
                    60C8   1684 _TRAIN_CONTROL_8	=	0x60c8
                    60CC   1685 _TRAIN_CONTROL_9	=	0x60cc
                    60D0   1686 _TRAIN_CONTROL_10	=	0x60d0
                    60D4   1687 _TRAIN_CONTROL_11	=	0x60d4
                    60D8   1688 _TRAIN_CONTROL_12	=	0x60d8
                    60DC   1689 _ESM_POP_N_CNT_LOW_LANE	=	0x60dc
                    60E0   1690 _ESM_ERR_N_CNT_LOW_LANE	=	0x60e0
                    60E4   1691 _TRAIN_CONTROL_13	=	0x60e4
                    60E8   1692 _TRAIN_CONTROL_14	=	0x60e8
                    60EC   1693 _TRAIN_CONTROL_15	=	0x60ec
                    60F0   1694 _TRAIN_CONTROL_16	=	0x60f0
                    60F4   1695 _TRAIN_CONTROL_17	=	0x60f4
                    60F8   1696 _END_XDAT_LANE	=	0x60f8
                    A000   1697 _TX_CMN_REG	=	0xa000
                    A008   1698 _DTX_REG0	=	0xa008
                    A00C   1699 _DTX_REG1	=	0xa00c
                    A010   1700 _DTX_REG2	=	0xa010
                    A014   1701 _DTX_REG3	=	0xa014
                    A018   1702 _DTX_REG4	=	0xa018
                    A01C   1703 _DTX_PHY_ALIGN_REG0	=	0xa01c
                    A024   1704 _DTX_PHY_ALIGN_REG1	=	0xa024
                    A028   1705 _DTX_PHY_ALIGN_REG2	=	0xa028
                    A02C   1706 _SRIS_REG0	=	0xa02c
                    A030   1707 _SRIS_REG1	=	0xa030
                    A100   1708 _RX_CMN_0	=	0xa100
                    A110   1709 _DFE_STATIC_REG0	=	0xa110
                    A114   1710 _DFE_STATIC_REG1	=	0xa114
                    A118   1711 _DFE_STATIC_REG3	=	0xa118
                    A11C   1712 _DFE_STATIC_REG4	=	0xa11c
                    A120   1713 _DFE_STATIC_REG5	=	0xa120
                    A124   1714 _DFE_STATIC_REG6	=	0xa124
                    4200   1715 _GLOB_RST_CLK_CTRL	=	0x4200
                    4204   1716 _GLOB_CLK_SRC_LO	=	0x4204
                    4208   1717 _GLOB_CLK_SRC_HI	=	0x4208
                    420C   1718 _GLOB_MISC_CTRL	=	0x420c
                    4210   1719 _GLOB_DP_SAL_CFG	=	0x4210
                    4214   1720 _GLOB_DP_SAL_CFG1	=	0x4214
                    4218   1721 _GLOB_DP_SAL_CFG3	=	0x4218
                    421C   1722 _GLOB_DP_SAL_CFG5	=	0x421c
                    4220   1723 _GLOB_PM_CFG0	=	0x4220
                    4224   1724 _GLOB_COUNTER_CTRL	=	0x4224
                    4228   1725 _GLOB_COUNTER_HI	=	0x4228
                    422C   1726 _GLOB_PM_DP_CTRL	=	0x422c
                    4230   1727 _GLOB_DP_BAL_CFG0	=	0x4230
                    4234   1728 _GLOB_DP_BAL_CFG2	=	0x4234
                    4238   1729 _GLOB_DP_BAL_CFG4	=	0x4238
                    423C   1730 _GLOB_BIST_CTRL	=	0x423c
                    4240   1731 _GLOB_BIST_LANE_TYPE	=	0x4240
                    4244   1732 _GLOB_BIST_START	=	0x4244
                    4248   1733 _GLOB_BIST_MASK	=	0x4248
                    424C   1734 _GLOB_BIST_RESULT	=	0x424c
                    4250   1735 _GLOB_BIST_SEQR_CFG	=	0x4250
                    4254   1736 _GLOB_BIST_DATA_HI	=	0x4254
                    4258   1737 _GLOB_PIPE_REVISION	=	0x4258
                    425C   1738 _GLOB_L1_SUBSTATES_CFG	=	0x425c
                    A200   1739 _MCU_CONTROL_0	=	0xa200
                    A204   1740 _MCU_CONTROL_1	=	0xa204
                    A208   1741 _MCU_CONTROL_2	=	0xa208
                    A20C   1742 _MCU_CONTROL_3	=	0xa20c
                    A210   1743 _MCU_CONTROL_4	=	0xa210
                    A214   1744 _MCU_DEBUG0	=	0xa214
                    A218   1745 _MCU_DEBUG1	=	0xa218
                    A21C   1746 _MEMORY_CONTROL_0	=	0xa21c
                    A220   1747 _MEMORY_CONTROL_1	=	0xa220
                    A224   1748 _MEMORY_CONTROL_2	=	0xa224
                    A228   1749 _MEMORY_CONTROL_3	=	0xa228
                    A22C   1750 _MEMORY_CONTROL_4	=	0xa22c
                    A234   1751 _MCU_INFO_0	=	0xa234
                    A238   1752 _MCU_INFO_1	=	0xa238
                    A23C   1753 _MCU_INFO_2	=	0xa23c
                    A240   1754 _MCU_INFO_3	=	0xa240
                    A244   1755 _MEM_CMN_ECC_ERR_ADDRESS0	=	0xa244
                    A2E0   1756 _ANA_IF_CMN_REG1	=	0xa2e0
                    A2E4   1757 _MEM_IRQ	=	0xa2e4
                    A2E8   1758 _MEM_IRQ_MASK	=	0xa2e8
                    A2EC   1759 _ANA_IF_CMN_REG0	=	0xa2ec
                    A2F0   1760 _APB_CONTROL_REG	=	0xa2f0
                    A2F4   1761 _MEM_IRQ_CLEAR	=	0xa2f4
                    A2F8   1762 _MCU_SYNC1	=	0xa2f8
                    A2FC   1763 _MCU_SYNC2	=	0xa2fc
                    A300   1764 _TEST0	=	0xa300
                    A304   1765 _TEST1	=	0xa304
                    A308   1766 _TEST2	=	0xa308
                    A30C   1767 _TEST3	=	0xa30c
                    A310   1768 _TEST4	=	0xa310
                    A314   1769 _SYSTEM	=	0xa314
                    A318   1770 _PM_CMN_REG1	=	0xa318
                    A31C   1771 _INPUT_CMN_PIN_REG0	=	0xa31c
                    A320   1772 _INPUT_CMN_PIN_REG1	=	0xa320
                    A324   1773 _INPUT_CMN_PIN_REG2	=	0xa324
                    A328   1774 _ANA_TSEN_CONTROL	=	0xa328
                    A32C   1775 _PLLCAL_REG0	=	0xa32c
                    A330   1776 _PLLCAL_REG1	=	0xa330
                    A334   1777 _CLKGEN_CMN_REG1	=	0xa334
                    A338   1778 _SPD_CMN_REG1	=	0xa338
                    A33C   1779 _OUTPUT_CMN_PIN_REG0	=	0xa33c
                    A340   1780 _CMN_CALIBRATION	=	0xa340
                    A344   1781 __FIELDNAME_	=	0xa344
                    A348   1782 _INPUT_CMN_PIN_REG3	=	0xa348
                    A34C   1783 _PM_CMN_REG2	=	0xa34c
                    A354   1784 _TEST5	=	0xa354
                    A358   1785 _XDATA_MEM_CHECKSUM_CMN_0	=	0xa358
                    A35C   1786 _XDATA_MEM_CHECKSUM_CMN_1	=	0xa35c
                    A360   1787 _XDATA_MEM_CHECKSUM_CMN_2	=	0xa360
                    A364   1788 _MCU_SDT_CMN	=	0xa364
                    A368   1789 _CMN_CACHE_DEBUG0	=	0xa368
                    A36C   1790 _MCU_INT_ADDR	=	0xa36c
                    A370   1791 _CMN_ISR_2	=	0xa370
                    A374   1792 _CMN_ISR_MASK_2	=	0xa374
                    A378   1793 _CMN_ISR_CLEAR_2	=	0xa378
                    A37C   1794 _CMN_MCU_GPIO	=	0xa37c
                    A380   1795 _CMN_CACHE_DEBUG1	=	0xa380
                    A384   1796 _CMN_MCU_TIMER_CONTROL	=	0xa384
                    A388   1797 _CMN_MCU_TIMER_CTRL_2_LANE	=	0xa388
                    A38C   1798 _CMN_MCU_TIMER_CTRL_3_LANE	=	0xa38c
                    A390   1799 _CMN_MCU_TIMER_CTRL_4_LANE	=	0xa390
                    A394   1800 _CMN_MCU_TIMER_CTRL_5_LANE	=	0xa394
                    A398   1801 _CMN_MCU_TIMER0_CONTROL	=	0xa398
                    A39C   1802 _CMN_MCU_TIMER1_CONTROL	=	0xa39c
                    A3A0   1803 _CMN_MCU_TIMER2_CONTROL	=	0xa3a0
                    A3A4   1804 _CMN_MCU_TIMER3_CONTROL	=	0xa3a4
                    A3A8   1805 _CMN_ISR_1	=	0xa3a8
                    A3AC   1806 _CMN_ISR_MASK_1	=	0xa3ac
                    A3B0   1807 _SET_LANE_ISR	=	0xa3b0
                    A3F4   1808 _CMN_MCU_REG	=	0xa3f4
                    A3F8   1809 _CID_REG0	=	0xa3f8
                    A3FC   1810 _CID_REG1	=	0xa3fc
                    E600   1811 _FW_REV	=	0xe600
                    E604   1812 _CONTROL_CONFIG0	=	0xe604
                    E608   1813 _CONTROL_CONFIG1	=	0xe608
                    E60C   1814 _CONTROL_CONFIG2	=	0xe60c
                    E610   1815 _CONTROL_CONFIG3	=	0xe610
                    E614   1816 _CONTROL_CONFIG4	=	0xe614
                    E618   1817 _CONTROL_CONFIG5	=	0xe618
                    E61C   1818 _CONTROL_CONFIG6	=	0xe61c
                    E620   1819 _CONTROL_CONFIG7	=	0xe620
                    E624   1820 _CAL_DATA0	=	0xe624
                    E628   1821 _TRAIN_IF_CONFIG	=	0xe628
                    E62C   1822 _CONTROL_CONFIG8	=	0xe62c
                    E630   1823 _CONTROL_CONFIG9	=	0xe630
                    E634   1824 _CON_CAL_STEP_SIZE1	=	0xe634
                    E638   1825 _CON_CAL_STEP_SIZE2	=	0xe638
                    E63C   1826 _CON_CAL_STEP_SIZE3	=	0xe63c
                    E640   1827 _CON_CAL_STEP_SIZE4	=	0xe640
                    E644   1828 _CON_CAL_STEP_SIZE5	=	0xe644
                    E648   1829 _CAL_TIME_OUT_AND_DIS	=	0xe648
                    E64C   1830 _CAL_STATUS_READ	=	0xe64c
                    E650   1831 _MCU_CONFIG	=	0xe650
                    E654   1832 _CAL_DATA1	=	0xe654
                    E658   1833 _LOOP_CNTS	=	0xe658
                    E65C   1834 _MCU_CONFIG1	=	0xe65c
                    E660   1835 _TIMER_SEL1	=	0xe660
                    E664   1836 _TIMER_SEL2	=	0xe664
                    E668   1837 _TIMER_SEL3	=	0xe668
                    E66C   1838 _G_SELLV_TXCLK	=	0xe66c
                    E670   1839 _G_SELLV_TXDATA	=	0xe670
                    E674   1840 _G_SELLV_TXPRE	=	0xe674
                    E678   1841 _G_SELLV_RXEOMCLK	=	0xe678
                    E67C   1842 _G_SELLV_RXDATACLK	=	0xe67c
                    E680   1843 _G_SELLV_RXSAMPLER	=	0xe680
                    E684   1844 _SAS_PRESET0_TB	=	0xe684
                    E688   1845 _SAS_PRESET1_TB	=	0xe688
                    E68C   1846 _SAS_PRESET2_TB	=	0xe68c
                    E690   1847 _ETH_PRESET0_TB	=	0xe690
                    E694   1848 _ETH_PRESET1_TB	=	0xe694
                    E698   1849 _TX_SAVE_0	=	0xe698
                    E69C   1850 _TX_SAVE_1	=	0xe69c
                    E6A0   1851 _TX_SAVE_2	=	0xe6a0
                    E6A4   1852 _TX_SAVE_3	=	0xe6a4
                    E6A8   1853 _TX_SAVE_4	=	0xe6a8
                    E6AC   1854 _CDS_EYE_CLK_THR	=	0xe6ac
                    E6B0   1855 _SYNC_INFO	=	0xe6b0
                    E6B4   1856 _MCU_INFO_4	=	0xe6b4
                    E6B8   1857 _MCU_INFO_5	=	0xe6b8
                    E6BC   1858 _MCU_INFO_12	=	0xe6bc
                    E6C0   1859 _MCU_INFO_13	=	0xe6c0
                    E6C4   1860 _END_XDAT_CMN	=	0xe6c4
                    2600   1861 _DME_ENC_REG0	=	0x2600
                    2604   1862 _DME_ENC_REG1	=	0x2604
                    2608   1863 _DME_ENC_REG2	=	0x2608
                    260C   1864 _DME_DEC_REG0	=	0x260c
                    2610   1865 _DME_DEC_REG1	=	0x2610
                    2614   1866 _TX_TRAIN_IF_REG0	=	0x2614
                    2618   1867 _TX_TRAIN_IF_REG1	=	0x2618
                    261C   1868 _TX_TRAIN_IF_REG2	=	0x261c
                    2620   1869 _TX_TRAIN_IF_REG3	=	0x2620
                    2624   1870 _TX_TRAIN_PATTTERN_REG0	=	0x2624
                    2628   1871 _TX_TRAIN_DRIVER_REG0	=	0x2628
                    262C   1872 _TX_TRAIN_DRIVER_REG1	=	0x262c
                    2630   1873 _TX_TRAIN_DRIVER_REG2	=	0x2630
                    2634   1874 _TX_TRAIN_DEFAULT_REG0	=	0x2634
                    2638   1875 _TX_TRAIN_DEFAULT_REG1	=	0x2638
                    263C   1876 _TX_TRAIN_DEFAULT_REG2	=	0x263c
                    2640   1877 _TX_TRAIN_DEFAULT_REG3	=	0x2640
                    2644   1878 _TX_TRAIN_DEFAULT_REG4	=	0x2644
                    2648   1879 _TX_TRAIN_DEFAULT_REG5	=	0x2648
                    264C   1880 _TX_EMPH_CTRL_REG0	=	0x264c
                    2650   1881 _LINK_TRAIN_MODE0	=	0x2650
                    2654   1882 _TX_DRV_RD_OUT_REG0	=	0x2654
                    2658   1883 _TX_AMP_CTRL_REG0	=	0x2658
                    265C   1884 _TRX_TRAIN_IF_INTERRUPT_LANE	=	0x265c
                    2660   1885 _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE	=	0x2660
                    2664   1886 _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE	=	0x2664
                    2668   1887 _TX_TRAIN_IF_REG4	=	0x2668
                    266C   1888 _TX_TRAIN_IF_REG5	=	0x266c
                    2670   1889 _TX_TRAIN_IF_REG6	=	0x2670
                    2674   1890 _TX_TRAIN_IF_REG7	=	0x2674
                    2678   1891 _TX_TRAIN_CTRL_LANE	=	0x2678
                    267C   1892 _TX_TRAIN_IF_REG8	=	0x267c
                    6100   1893 _DFE_READ_EVEN_REG0	=	0x6100
                    6104   1894 _DFE_READ_EVEN_REG1	=	0x6104
                    6108   1895 _DFE_READ_EVEN_REG2	=	0x6108
                    610C   1896 _DFE_READ_EVEN_REG3	=	0x610c
                    6110   1897 _DFE_READ_EVEN_REG4	=	0x6110
                    6114   1898 _DFE_READ_EVEN_REG5	=	0x6114
                    6118   1899 _DFE_READ_EVEN_REG6	=	0x6118
                    611C   1900 _DFE_READ_EVEN_REG7	=	0x611c
                    6120   1901 _DFE_READ_ODD_REG0	=	0x6120
                    6124   1902 _DFE_READ_ODD_REG1	=	0x6124
                    6128   1903 _DFE_READ_ODD_REG2	=	0x6128
                    612C   1904 _DFE_READ_ODD_REG3	=	0x612c
                    6130   1905 _DFE_READ_ODD_REG4	=	0x6130
                    6134   1906 _DFE_READ_ODD_REG5	=	0x6134
                    6138   1907 _DFE_READ_ODD_REG6	=	0x6138
                    613C   1908 _DFE_READ_ODD_REG7	=	0x613c
                    6140   1909 _DFE_READ_EVEN_REG8	=	0x6140
                    6144   1910 _DFE_READ_ODD_REG8	=	0x6144
                    6148   1911 _DFE_READ_F0A_EVEN	=	0x6148
                    614C   1912 _DFE_READ_F0A_ODD	=	0x614c
                    6150   1913 _DFE_READ_F0B_EVEN	=	0x6150
                    6154   1914 _DFE_READ_F0B_ODD	=	0x6154
                    6158   1915 _DFE_READ_F0D_EVEN	=	0x6158
                    615C   1916 _DFE_READ_F0D_ODD	=	0x615c
                    6160   1917 _DFE_READ_F0D_LEFT_EVEN	=	0x6160
                    6164   1918 _DFE_READ_F0D_LEFT_ODD	=	0x6164
                    6168   1919 _DFE_READ_F0D_RIGHT_EVEN	=	0x6168
                    616C   1920 _DFE_READ_F0D_RIGHT_ODD	=	0x616c
                    6170   1921 _CDS_READ_MISC0	=	0x6170
                    6174   1922 _CDS_READ_MISC1	=	0x6174
                    6214   1923 _TXTRAIN_IF_REG0	=	0x6214
                    E000   1924 _lc_speedtable	=	0xe000
                    E1C0   1925 _ring_speedtable	=	0xe1c0
                    E5C0   1926 _phy_mode_cmn_table	=	0xe5c0
                    6300   1927 _max_gen	=	0x6300
                    6301   1928 _min_gen	=	0x6301
                    6304   1929 _speedtable	=	0x6304
                    65D4   1930 _phy_mode_lane_table	=	0x65d4
                    60B4   1931 _rc_save	=	0x60b4
                    60D0   1932 _txffe_save	=	0x60d0
                    60E4   1933 _phase_save	=	0x60e4
                    6030   1934 _train_gn1_index	=	0x6030
                    6031   1935 _train_g1_index	=	0x6031
                    6032   1936 _train_g0_index	=	0x6032
                    E6B0   1937 _local_tx_preset_tb	=	0xe6b0
                    E5C1   1938 _cmx_cal_lcvco_dac	=	0xe5c1
                    E5C1   1939 _cmx_cal_lcvco_dac_lsb	=	0xe5c1
                    E5C4   1940 _cmx_cal_lcvco_dac_msb	=	0xe5c4
                    E5CA   1941 _cmx_cal_lccap_msb	=	0xe5ca
                    E5C8   1942 _cmx_cal_lccap_lsb	=	0xe5c8
                    E5CC   1943 _cmx_cal_plldcc	=	0xe5cc
                    E5D0   1944 _cmx_cal_pll_speed_ring	=	0xe5d0
                    E5D4   1945 _cmx_cal_pll_sllp_dac_coarse_ring	=	0xe5d4
                    E5D8   1946 _cmx_cal_sllp_dac_fine_ring	=	0xe5d8
                    65D4   1947 _lnx_cal_txdcc_pdiv	=	0x65d4
                    65D8   1948 _lnx_cal_txdcc_pdiv_hg	=	0x65d8
                    65DA   1949 _lnx_cal_txdcc	=	0x65da
                    65DE   1950 _lnx_cal_txdcc_hg	=	0x65de
                    65E0   1951 _lnx_cal_rxdcc_dll	=	0x65e0
                    65E4   1952 _lnx_cal_rxdcc_dll_hg	=	0x65e4
                    65E6   1953 _lnx_cal_rxdcc_data	=	0x65e6
                    65F0   1954 _lnx_cal_rxdcc_data_hg	=	0x65f0
                    65F5   1955 _lnx_cal_rxdcc_eom	=	0x65f5
                    65FF   1956 _lnx_cal_rxdcc_eom_hg	=	0x65ff
                    6604   1957 _lnx_cal_dll_gmsel	=	0x6604
                    6606   1958 _lnx_cal_vdda_dll_sel	=	0x6606
                    660A   1959 _lnx_cal_dll_eom_gmsel	=	0x660a
                    660C   1960 _lnx_cal_vdda_dll_eom_sel	=	0x660c
                    6610   1961 _lnx_cal_eom_dpher	=	0x6610
                    6612   1962 _lnx_cal_align90_dummy_clk	=	0x6612
                    661A   1963 _lnx_cal_align90_dac	=	0x661a
                    6622   1964 _lnx_cal_align90_gm	=	0x6622
                    662A   1965 _lnx_cal_sellv_txdata	=	0x662a
                    6634   1966 _lnx_cal_sellv_txclk	=	0x6634
                    663E   1967 _lnx_cal_sellv_rxdataclk	=	0x663e
                    6648   1968 _lnx_cal_sellv_txpre	=	0x6648
                    6652   1969 _lnx_cal_sellv_rxsampler	=	0x6652
                    665C   1970 _lnx_cal_sellv_rxeomclk	=	0x665c
                    6666   1971 _lnx_spdoft_tx_preset_index_lane	=	0x6666
                    6490   1972 _lnx_calx_txdcc_pdiv	=	0x6490
                    6496   1973 _lnx_calx_txdcc_pdiv_hg	=	0x6496
                    6499   1974 _lnx_calx_txdcc	=	0x6499
                    649F   1975 _lnx_calx_txdcc_hg	=	0x649f
                    64A2   1976 _lnx_calx_rxdcc_dll	=	0x64a2
                    64A8   1977 _lnx_calx_rxdcc_dll_hg	=	0x64a8
                    64AB   1978 _lnx_calx_dll_gmsel	=	0x64ab
                    64AE   1979 _lnx_calx_vdda_dll_sel	=	0x64ae
                    64B4   1980 _lnx_calx_dll_eom_gmsel	=	0x64b4
                    64B7   1981 _lnx_calx_vdda_dll_eom_sel	=	0x64b7
                    64BD   1982 _lnx_calx_eom_dpher	=	0x64bd
                    64C0   1983 _lnx_calx_align90_dummy_clk	=	0x64c0
                    64CC   1984 _lnx_calx_align90_dac	=	0x64cc
                    64D8   1985 _lnx_calx_align90_gm	=	0x64d8
                    6100   1986 _cds28	=	0x6100
                    6178   1987 _dfe_sm	=	0x6178
                    61B8   1988 _dfe_sm_dc	=	0x61b8
                    61C0   1989 _dfe_sm_save	=	0x61c0
                    03FC   1990 _UPHY_ANAREG_REV_0	=	0x03fc
                    E684   1991 _tx_tb	=	0xe684
                    E698   1992 _train_save_tb	=	0xe698
                    607C   1993 _sq_thrs_ratio_tb	=	0x607c
                           1994 ;--------------------------------------------------------
                           1995 ; absolute external ram data
                           1996 ;--------------------------------------------------------
                           1997 	.area XABS    (ABS,XDATA)
                           1998 ;--------------------------------------------------------
                           1999 ; external initialized ram data
                           2000 ;--------------------------------------------------------
                           2001 	.area HOME    (CODE)
                           2002 	.area GSINIT0 (CODE)
                           2003 	.area GSINIT1 (CODE)
                           2004 	.area GSINIT2 (CODE)
                           2005 	.area GSINIT3 (CODE)
                           2006 	.area GSINIT4 (CODE)
                           2007 	.area GSINIT5 (CODE)
                           2008 	.area GSINIT  (CODE)
                           2009 	.area GSFINAL (CODE)
                           2010 	.area CSEG    (CODE)
                           2011 ;--------------------------------------------------------
                           2012 ; global & static initialisations
                           2013 ;--------------------------------------------------------
                           2014 	.area HOME    (CODE)
                           2015 	.area GSINIT  (CODE)
                           2016 	.area GSFINAL (CODE)
                           2017 	.area GSINIT  (CODE)
                           2018 ;--------------------------------------------------------
                           2019 ; Home
                           2020 ;--------------------------------------------------------
                           2021 	.area HOME    (CODE)
                           2022 	.area HOME    (CODE)
                           2023 ;--------------------------------------------------------
                           2024 ; code
                           2025 ;--------------------------------------------------------
                           2026 	.area BANK1   (CODE)
                           2027 ;------------------------------------------------------------
                           2028 ;Allocation info for local variables in function 'cdr_dfe_scheme'
                           2029 ;------------------------------------------------------------
                           2030 ;f0d_dir                   Allocated to registers r2 
                           2031 ;f0d_updated               Allocated to registers r3 
                           2032 ;phase_offset_data         Allocated to registers r2 
                           2033 ;sloc0                     Allocated to stack - offset 1
                           2034 ;------------------------------------------------------------
                           2035 ;	../../shared/src/cdr_dfe_scheme.c:152: void cdr_dfe_scheme(void) BANKING_CTRL{
                           2036 ;	-----------------------------------------
                           2037 ;	 function cdr_dfe_scheme
                           2038 ;	-----------------------------------------
   9296                    2039 _cdr_dfe_scheme:
                    0002   2040 	ar2 = 0x02
                    0003   2041 	ar3 = 0x03
                    0004   2042 	ar4 = 0x04
                    0005   2043 	ar5 = 0x05
                    0006   2044 	ar6 = 0x06
                    0007   2045 	ar7 = 0x07
                    0000   2046 	ar0 = 0x00
                    0001   2047 	ar1 = 0x01
   9296 C0 18              2048 	push	_bp
   9298 85 81 18           2049 	mov	_bp,sp
   929B 05 81              2050 	inc	sp
   929D 05 81              2051 	inc	sp
                           2052 ;	../../shared/src/cdr_dfe_scheme.c:159: cds28.eye_check_pass = 1;
   929F 90 61 70           2053 	mov	dptr,#(_cds28 + 0x0070)
   92A2 74 01              2054 	mov	a,#0x01
   92A4 F0                 2055 	movx	@dptr,a
                           2056 ;	../../shared/src/cdr_dfe_scheme.c:161: if((dfe_dis == 1 || cmx_SKIP_CDR_DFE_SCHEME==1 ) && !do_rxinit) {
   92A5 90 66 F7           2057 	mov	dptr,#_dfe_dis
   92A8 E0                 2058 	movx	a,@dptr
   92A9 FA                 2059 	mov	r2,a
   92AA BA 01 02           2060 	cjne	r2,#0x01,00236$
   92AD 80 0B              2061 	sjmp	00104$
   92AF                    2062 00236$:
   92AF 90 E6 07           2063 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   92B2 E0                 2064 	movx	a,@dptr
   92B3 03                 2065 	rr	a
   92B4 54 01              2066 	anl	a,#0x01
   92B6 FA                 2067 	mov	r2,a
   92B7 BA 01 06           2068 	cjne	r2,#0x01,00102$
   92BA                    2069 00104$:
   92BA 20 08 03           2070 	jb	_do_rxinit,00102$
                           2071 ;	../../shared/src/cdr_dfe_scheme.c:162: return;
   92BD 02 9A 43           2072 	ljmp	00194$
   92C0                    2073 00102$:
                           2074 ;	../../shared/src/cdr_dfe_scheme.c:165: CDS_ST_JUMP(INIT);
   92C0 90 60 A2           2075 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0002)
                           2076 ;	../../shared/src/cdr_dfe_scheme.c:166: lnx_CDS_ERR_CODE_LANE_7_0 = 0;
   92C3 E4                 2077 	clr	a
   92C4 F0                 2078 	movx	@dptr,a
   92C5 90 60 A3           2079 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0003)
   92C8 F0                 2080 	movx	@dptr,a
                           2081 ;	../../shared/src/cdr_dfe_scheme.c:167: phase_offset_data = cur_phase_offset_data;
   92C9 90 67 97           2082 	mov	dptr,#_cur_phase_offset_data
   92CC E0                 2083 	movx	a,@dptr
   92CD FA                 2084 	mov	r2,a
                           2085 ;	../../shared/src/cdr_dfe_scheme.c:169: if(cds_tb & reset_en)
   92CE 90 61 74           2086 	mov	dptr,#_CDS_READ_MISC1
   92D1 E0                 2087 	movx	a,@dptr
   92D2 FB                 2088 	mov	r3,a
   92D3 A3                 2089 	inc	dptr
   92D4 E0                 2090 	movx	a,@dptr
   92D5 FC                 2091 	mov	r4,a
   92D6 EB                 2092 	mov	a,r3
   92D7 20 E0 03           2093 	jb	acc.0,00240$
   92DA 02 93 84           2094 	ljmp	00108$
   92DD                    2095 00240$:
                           2096 ;	../../shared/src/cdr_dfe_scheme.c:171: CDS_ST_JUMP(RESET);
   92DD 90 60 A2           2097 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0002)
   92E0 74 01              2098 	mov	a,#0x01
   92E2 F0                 2099 	movx	@dptr,a
                           2100 ;	../../shared/src/cdr_dfe_scheme.c:174: reg_SEL_MU_F_LANE = 0; 
   92E3 90 21 63           2101 	mov	dptr,#(_DTL_REG0 + 0x0003)
   92E6 E0                 2102 	movx	a,@dptr
   92E7 54 7F              2103 	anl	a,#0x7f
   92E9 F0                 2104 	movx	@dptr,a
                           2105 ;	../../shared/src/cdr_dfe_scheme.c:175: reg_ANA_RX_SEL_MU_F_LANE = 0; 
   92EA 90 24 0C           2106 	mov	dptr,#_DFE_CTRL_REG3
   92ED E0                 2107 	movx	a,@dptr
   92EE 54 7F              2108 	anl	a,#0x7f
   92F0 F0                 2109 	movx	@dptr,a
                           2110 ;	../../shared/src/cdr_dfe_scheme.c:184: reg_RESET_DTL_SYNC_LANE = 1; 
                           2111 ;	../../shared/src/cdr_dfe_scheme.c:185: reg_RESET_DTL_SYNC_LANE = 0; 
   92F1 90 21 02           2112 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   92F4 E0                 2113 	movx	a,@dptr
   92F5 44 80              2114 	orl	a,#0x80
   92F7 F0                 2115 	movx	@dptr,a
   92F8 E0                 2116 	movx	a,@dptr
   92F9 54 7F              2117 	anl	a,#0x7f
   92FB F0                 2118 	movx	@dptr,a
                           2119 ;	../../shared/src/cdr_dfe_scheme.c:186: short_delay();
   92FC C0 02              2120 	push	ar2
   92FE 78 05              2121 	mov	r0,#_short_delay
   9300 79 C0              2122 	mov	r1,#(_short_delay >> 8)
   9302 7A 02              2123 	mov	r2,#(_short_delay >> 16)
   9304 12 00 B3           2124 	lcall	__sdcc_banked_call
                           2125 ;	../../shared/src/cdr_dfe_scheme.c:190: reg_DFE_INIT_SEL_LANE = 0; //default/cal
   9307 90 24 03           2126 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0003)
   930A E0                 2127 	movx	a,@dptr
   930B 54 BF              2128 	anl	a,#0xbf
   930D F0                 2129 	movx	@dptr,a
                           2130 ;	../../shared/src/cdr_dfe_scheme.c:192: CKCON = 0x07 ; //MCU WAIT time the slowest
   930E 75 8E 07           2131 	mov	_CKCON,#0x07
                           2132 ;	../../shared/src/cdr_dfe_scheme.c:193: reg_RESET_DFE_LANE = 1;
                           2133 ;	../../shared/src/cdr_dfe_scheme.c:194: reg_RESET_DFE_LANE = 0;
   9311 90 24 10           2134 	mov	dptr,#_RX_EQ_CLK_CTRL
   9314 E0                 2135 	movx	a,@dptr
   9315 44 04              2136 	orl	a,#0x04
   9317 F0                 2137 	movx	@dptr,a
   9318 E0                 2138 	movx	a,@dptr
   9319 54 FB              2139 	anl	a,#0xfb
   931B F0                 2140 	movx	@dptr,a
                           2141 ;	../../shared/src/cdr_dfe_scheme.c:195: CKCON = 0x00 ; //MCU WAIT time setting back to normal.
   931C 75 8E 00           2142 	mov	_CKCON,#0x00
                           2143 ;	../../shared/src/cdr_dfe_scheme.c:196: reg_ANA_REG_DFEE_RST_LANE = 1;
   931F 90 22 D0           2144 	mov	dptr,#_ANA_IF_DFEE_REG0
   9322 E0                 2145 	movx	a,@dptr
   9323 44 80              2146 	orl	a,#0x80
   9325 F0                 2147 	movx	@dptr,a
                           2148 ;	../../shared/src/cdr_dfe_scheme.c:197: reg_ANA_REG_DFEO_RST_LANE = 1;
   9326 90 22 D4           2149 	mov	dptr,#_ANA_IF_DFEO_REG0
   9329 E0                 2150 	movx	a,@dptr
   932A 44 80              2151 	orl	a,#0x80
   932C F0                 2152 	movx	@dptr,a
                           2153 ;	../../shared/src/cdr_dfe_scheme.c:198: reg_ANA_REG_DFEE_RST_LANE = 0;
   932D 90 22 D0           2154 	mov	dptr,#_ANA_IF_DFEE_REG0
   9330 E0                 2155 	movx	a,@dptr
   9331 54 7F              2156 	anl	a,#0x7f
   9333 F0                 2157 	movx	@dptr,a
                           2158 ;	../../shared/src/cdr_dfe_scheme.c:199: reg_ANA_REG_DFEO_RST_LANE = 0;
   9334 90 22 D4           2159 	mov	dptr,#_ANA_IF_DFEO_REG0
   9337 E0                 2160 	movx	a,@dptr
   9338 54 7F              2161 	anl	a,#0x7f
   933A F0                 2162 	movx	@dptr,a
                           2163 ;	../../shared/src/cdr_dfe_scheme.c:202: dfe_load_all();
   933B 78 4B              2164 	mov	r0,#_dfe_load_all
   933D 79 9A              2165 	mov	r1,#(_dfe_load_all >> 8)
   933F 7A 01              2166 	mov	r2,#(_dfe_load_all >> 16)
   9341 12 00 B3           2167 	lcall	__sdcc_banked_call
   9344 D0 02              2168 	pop	ar2
                           2169 ;	../../shared/src/cdr_dfe_scheme.c:218: CDS_ST_JUMP(SAVE_RESET);
   9346 90 60 A2           2170 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0002)
   9349 74 02              2171 	mov	a,#0x02
   934B F0                 2172 	movx	@dptr,a
                           2173 ;	../../shared/src/cdr_dfe_scheme.c:219: if(lnx_DFE_SAVE_EN_LANE) {
   934C 90 60 A0           2174 	mov	dptr,#_CDS_CTRL_REG0
   934F E0                 2175 	movx	a,@dptr
   9350 30 E1 31           2176 	jnb	acc.1,00108$
                           2177 ;	../../shared/src/cdr_dfe_scheme.c:220: dfe_save();
   9353 C0 02              2178 	push	ar2
   9355 78 A5              2179 	mov	r0,#_dfe_save
   9357 79 8C              2180 	mov	r1,#(_dfe_save >> 8)
   9359 7A 02              2181 	mov	r2,#(_dfe_save >> 16)
   935B 12 00 B3           2182 	lcall	__sdcc_banked_call
                           2183 ;	../../shared/src/cdr_dfe_scheme.c:221: cds_save(Savf0a);
   935E 75 82 00           2184 	mov	dpl,#0x00
   9361 78 CF              2185 	mov	r0,#_cds_save
   9363 79 8C              2186 	mov	r1,#(_cds_save >> 8)
   9365 7A 02              2187 	mov	r2,#(_cds_save >> 16)
   9367 12 00 B3           2188 	lcall	__sdcc_banked_call
                           2189 ;	../../shared/src/cdr_dfe_scheme.c:222: cds_save(Savdfe);
   936A 75 82 10           2190 	mov	dpl,#0x10
   936D 78 CF              2191 	mov	r0,#_cds_save
   936F 79 8C              2192 	mov	r1,#(_cds_save >> 8)
   9371 7A 02              2193 	mov	r2,#(_cds_save >> 16)
   9373 12 00 B3           2194 	lcall	__sdcc_banked_call
                           2195 ;	../../shared/src/cdr_dfe_scheme.c:223: cds_save(Savdc);
   9376 75 82 12           2196 	mov	dpl,#0x12
   9379 78 CF              2197 	mov	r0,#_cds_save
   937B 79 8C              2198 	mov	r1,#(_cds_save >> 8)
   937D 7A 02              2199 	mov	r2,#(_cds_save >> 16)
   937F 12 00 B3           2200 	lcall	__sdcc_banked_call
   9382 D0 02              2201 	pop	ar2
   9384                    2202 00108$:
                           2203 ;	../../shared/src/cdr_dfe_scheme.c:226: if(cds_tb & coarse_dtl_en)  
   9384 90 61 74           2204 	mov	dptr,#_CDS_READ_MISC1
   9387 E0                 2205 	movx	a,@dptr
   9388 FB                 2206 	mov	r3,a
   9389 A3                 2207 	inc	dptr
   938A E0                 2208 	movx	a,@dptr
   938B FC                 2209 	mov	r4,a
   938C EB                 2210 	mov	a,r3
   938D 30 E1 2A           2211 	jnb	acc.1,00110$
                           2212 ;	../../shared/src/cdr_dfe_scheme.c:228: CDS_ST_JUMP(TIMEACQ);
   9390 90 60 A2           2213 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0002)
   9393 74 03              2214 	mov	a,#0x03
   9395 F0                 2215 	movx	@dptr,a
                           2216 ;	../../shared/src/cdr_dfe_scheme.c:231: dfe_fsm(Tacq,Updateoff);
   9396 C0 02              2217 	push	ar2
   9398 74 FF              2218 	mov	a,#0xFF
   939A C0 E0              2219 	push	acc
   939C 90 00 00           2220 	mov	dptr,#0x0000
   939F 78 54              2221 	mov	r0,#_dfe_fsm
   93A1 79 93              2222 	mov	r1,#(_dfe_fsm >> 8)
   93A3 7A 02              2223 	mov	r2,#(_dfe_fsm >> 16)
   93A5 12 00 B3           2224 	lcall	__sdcc_banked_call
   93A8 15 81              2225 	dec	sp
   93AA D0 02              2226 	pop	ar2
                           2227 ;	../../shared/src/cdr_dfe_scheme.c:232: reg_SEL_MU_F_LANE = 1;
   93AC 90 21 63           2228 	mov	dptr,#(_DTL_REG0 + 0x0003)
   93AF E0                 2229 	movx	a,@dptr
   93B0 44 80              2230 	orl	a,#0x80
   93B2 F0                 2231 	movx	@dptr,a
                           2232 ;	../../shared/src/cdr_dfe_scheme.c:233: reg_ANA_RX_SEL_MU_F_LANE = 1;
   93B3 90 24 0C           2233 	mov	dptr,#_DFE_CTRL_REG3
   93B6 E0                 2234 	movx	a,@dptr
   93B7 44 80              2235 	orl	a,#0x80
   93B9 F0                 2236 	movx	@dptr,a
   93BA                    2237 00110$:
                           2238 ;	../../shared/src/cdr_dfe_scheme.c:235: if(cds_tb & phase_move_with_dfe_en)
   93BA 90 61 74           2239 	mov	dptr,#_CDS_READ_MISC1
   93BD E0                 2240 	movx	a,@dptr
   93BE FB                 2241 	mov	r3,a
   93BF A3                 2242 	inc	dptr
   93C0 E0                 2243 	movx	a,@dptr
   93C1 FC                 2244 	mov	r4,a
   93C2 EB                 2245 	mov	a,r3
   93C3 20 E2 03           2246 	jb	acc.2,00243$
   93C6 02 94 DE           2247 	ljmp	00127$
   93C9                    2248 00243$:
                           2249 ;	../../shared/src/cdr_dfe_scheme.c:237: CDS_ST_JUMP(DFE_PM0);
   93C9 90 60 A2           2250 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0002)
   93CC 74 04              2251 	mov	a,#0x04
   93CE F0                 2252 	movx	@dptr,a
                           2253 ;	../../shared/src/cdr_dfe_scheme.c:239: set_slicer_data_sampler_adapt(SLICER_SMPL_ONLY);
   93CF 75 82 01           2254 	mov	dpl,#0x01
   93D2 C0 02              2255 	push	ar2
   93D4 78 44              2256 	mov	r0,#_set_slicer_data_sampler_adapt
   93D6 79 92              2257 	mov	r1,#(_set_slicer_data_sampler_adapt >> 8)
   93D8 7A 02              2258 	mov	r2,#(_set_slicer_data_sampler_adapt >> 16)
   93DA 12 00 B3           2259 	lcall	__sdcc_banked_call
                           2260 ;	../../shared/src/cdr_dfe_scheme.c:240: set_dfe_fbmd(FBall);
   93DD 75 82 00           2261 	mov	dpl,#0x00
   93E0 78 D8              2262 	mov	r0,#_set_dfe_fbmd
   93E2 79 96              2263 	mov	r1,#(_set_dfe_fbmd >> 8)
   93E4 7A 02              2264 	mov	r2,#(_set_dfe_fbmd >> 16)
   93E6 12 00 B3           2265 	lcall	__sdcc_banked_call
   93E9 D0 02              2266 	pop	ar2
                           2267 ;	../../shared/src/cdr_dfe_scheme.c:242: if(cds_tb & f0a_coarse_en) {
   93EB 90 61 74           2268 	mov	dptr,#_CDS_READ_MISC1
   93EE E0                 2269 	movx	a,@dptr
   93EF FB                 2270 	mov	r3,a
   93F0 A3                 2271 	inc	dptr
   93F1 E0                 2272 	movx	a,@dptr
   93F2 FC                 2273 	mov	r4,a
   93F3 EB                 2274 	mov	a,r3
   93F4 30 E5 1B           2275 	jnb	acc.5,00112$
                           2276 ;	../../shared/src/cdr_dfe_scheme.c:243: CDS_ST_JUMP(DFE_PM1);
   93F7 90 60 A2           2277 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0002)
   93FA 74 05              2278 	mov	a,#0x05
   93FC F0                 2279 	movx	@dptr,a
                           2280 ;	../../shared/src/cdr_dfe_scheme.c:244: dfe_fsm(Tf0_coarse_pm,Update0);
   93FD C0 02              2281 	push	ar2
   93FF E4                 2282 	clr	a
   9400 C0 E0              2283 	push	acc
   9402 90 0A 01           2284 	mov	dptr,#0x0A01
   9405 78 54              2285 	mov	r0,#_dfe_fsm
   9407 79 93              2286 	mov	r1,#(_dfe_fsm >> 8)
   9409 7A 02              2287 	mov	r2,#(_dfe_fsm >> 16)
   940B 12 00 B3           2288 	lcall	__sdcc_banked_call
   940E 15 81              2289 	dec	sp
   9410 D0 02              2290 	pop	ar2
   9412                    2291 00112$:
                           2292 ;	../../shared/src/cdr_dfe_scheme.c:251: timeout_start((uint16_t)1000);
   9412 75 8B 18           2293 	mov	_TMR1,#0x18
   9415 75 8D FC           2294 	mov	(_TMR1 >> 8),#0xFC
   9418 D2 8E              2295 	setb	_TR1
   941A C2 03              2296 	clr	_timeout
                           2297 ;	../../shared/src/cdr_dfe_scheme.c:252: do {
   941C                    2298 00121$:
                           2299 ;	../../shared/src/cdr_dfe_scheme.c:253: CDS_ST_JUMP(DFE_PM2); 
   941C 90 60 A2           2300 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0002)
   941F 74 06              2301 	mov	a,#0x06
   9421 F0                 2302 	movx	@dptr,a
                           2303 ;	../../shared/src/cdr_dfe_scheme.c:254: dfe_fsm(Tdfe_coarse,Updatefixed);
   9422 C0 02              2304 	push	ar2
   9424 74 01              2305 	mov	a,#0x01
   9426 C0 E0              2306 	push	acc
   9428 90 0A 01           2307 	mov	dptr,#0x0A01
   942B 78 54              2308 	mov	r0,#_dfe_fsm
   942D 79 93              2309 	mov	r1,#(_dfe_fsm >> 8)
   942F 7A 02              2310 	mov	r2,#(_dfe_fsm >> 16)
   9431 12 00 B3           2311 	lcall	__sdcc_banked_call
   9434 15 81              2312 	dec	sp
   9436 D0 02              2313 	pop	ar2
                           2314 ;	../../shared/src/cdr_dfe_scheme.c:255: if(train.phase_offset_data == phase_offset_data) break;
   9438 90 66 61           2315 	mov	dptr,#(_train + 0x0021)
   943B E0                 2316 	movx	a,@dptr
   943C FB                 2317 	mov	r3,a
   943D B5 02 02           2318 	cjne	a,ar2,00245$
   9440 80 6E              2319 	sjmp	00123$
   9442                    2320 00245$:
                           2321 ;	../../shared/src/cdr_dfe_scheme.c:256: CDS_ST_JUMP(DFE_PM3); 
   9442 90 60 A2           2322 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0002)
   9445 74 08              2323 	mov	a,#0x08
   9447 F0                 2324 	movx	@dptr,a
                           2325 ;	../../shared/src/cdr_dfe_scheme.c:257: if(phase_offset_data < (train.phase_offset_data - tag_PM_PH_ADJ_THRESH))
   9448 EB                 2326 	mov	a,r3
   9449 FC                 2327 	mov	r4,a
   944A 33                 2328 	rlc	a
   944B 95 E0              2329 	subb	a,acc
   944D FD                 2330 	mov	r5,a
   944E EC                 2331 	mov	a,r4
   944F 24 FE              2332 	add	a,#0xfe
   9451 FE                 2333 	mov	r6,a
   9452 ED                 2334 	mov	a,r5
   9453 34 FF              2335 	addc	a,#0xff
   9455 FF                 2336 	mov	r7,a
   9456 A8 18              2337 	mov	r0,_bp
   9458 08                 2338 	inc	r0
   9459 A6 02              2339 	mov	@r0,ar2
   945B EA                 2340 	mov	a,r2
   945C 33                 2341 	rlc	a
   945D 95 E0              2342 	subb	a,acc
   945F 08                 2343 	inc	r0
   9460 F6                 2344 	mov	@r0,a
   9461 A8 18              2345 	mov	r0,_bp
   9463 08                 2346 	inc	r0
   9464 C3                 2347 	clr	c
   9465 E6                 2348 	mov	a,@r0
   9466 9E                 2349 	subb	a,r6
   9467 08                 2350 	inc	r0
   9468 E6                 2351 	mov	a,@r0
   9469 64 80              2352 	xrl	a,#0x80
   946B 8F F0              2353 	mov	b,r7
   946D 63 F0 80           2354 	xrl	b,#0x80
   9470 95 F0              2355 	subb	a,b
   9472 50 04              2356 	jnc	00119$
                           2357 ;	../../shared/src/cdr_dfe_scheme.c:258: phase_offset_data += tag_PM_PH_ADJ_THRESH;
   9474 0A                 2358 	inc	r2
   9475 0A                 2359 	inc	r2
   9476 80 20              2360 	sjmp	00120$
   9478                    2361 00119$:
                           2362 ;	../../shared/src/cdr_dfe_scheme.c:259: else if(phase_offset_data > (train.phase_offset_data + tag_PM_PH_ADJ_THRESH))
   9478 74 02              2363 	mov	a,#0x02
   947A 2C                 2364 	add	a,r4
   947B FC                 2365 	mov	r4,a
   947C E4                 2366 	clr	a
   947D 3D                 2367 	addc	a,r5
   947E FD                 2368 	mov	r5,a
   947F A8 18              2369 	mov	r0,_bp
   9481 08                 2370 	inc	r0
   9482 C3                 2371 	clr	c
   9483 EC                 2372 	mov	a,r4
   9484 96                 2373 	subb	a,@r0
   9485 ED                 2374 	mov	a,r5
   9486 64 80              2375 	xrl	a,#0x80
   9488 08                 2376 	inc	r0
   9489 86 F0              2377 	mov	b,@r0
   948B 63 F0 80           2378 	xrl	b,#0x80
   948E 95 F0              2379 	subb	a,b
   9490 50 04              2380 	jnc	00116$
                           2381 ;	../../shared/src/cdr_dfe_scheme.c:260: phase_offset_data -= tag_PM_PH_ADJ_THRESH;
   9492 1A                 2382 	dec	r2
   9493 1A                 2383 	dec	r2
   9494 80 02              2384 	sjmp	00120$
   9496                    2385 00116$:
                           2386 ;	../../shared/src/cdr_dfe_scheme.c:262: phase_offset_data = train.phase_offset_data;
   9496 8B 02              2387 	mov	ar2,r3
   9498                    2388 00120$:
                           2389 ;	../../shared/src/cdr_dfe_scheme.c:264: phase_control_func_0(phase_offset_data, train.phase_offset_esm); //set_ph_dat(phase_offset_data);
   9498 90 66 62           2390 	mov	dptr,#(_train + 0x0022)
   949B E0                 2391 	movx	a,@dptr
   949C FB                 2392 	mov	r3,a
   949D C0 02              2393 	push	ar2
   949F C0 03              2394 	push	ar3
   94A1 8A 82              2395 	mov	dpl,r2
   94A3 12 2C 2B           2396 	lcall	_phase_control_func_0
   94A6 15 81              2397 	dec	sp
   94A8 D0 02              2398 	pop	ar2
                           2399 ;	../../shared/src/cdr_dfe_scheme.c:270: } while (!timeout);
   94AA 20 03 03           2400 	jb	_timeout,00248$
   94AD 02 94 1C           2401 	ljmp	00121$
   94B0                    2402 00248$:
   94B0                    2403 00123$:
                           2404 ;	../../shared/src/cdr_dfe_scheme.c:271: if(timeout) {
   94B0 30 03 0F           2405 	jnb	_timeout,00125$
                           2406 ;	../../shared/src/cdr_dfe_scheme.c:272: lnx_CDS_ERR_CODE_LANE_7_0 |= 0x2;
   94B3 90 60 A3           2407 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0003)
   94B6 E0                 2408 	movx	a,@dptr
   94B7 FA                 2409 	mov	r2,a
   94B8 43 02 02           2410 	orl	ar2,#0x02
   94BB 90 60 A3           2411 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0003)
   94BE EA                 2412 	mov	a,r2
   94BF F0                 2413 	movx	@dptr,a
                           2414 ;	../../shared/src/cdr_dfe_scheme.c:273: timeout = 0;
   94C0 C2 03              2415 	clr	_timeout
   94C2                    2416 00125$:
                           2417 ;	../../shared/src/cdr_dfe_scheme.c:274: } timeout_stop;
   94C2 C2 8E              2418 	clr	_TR1
   94C4 C2 8F              2419 	clr	_TF1
                           2420 ;	../../shared/src/cdr_dfe_scheme.c:275: cds_save(Savf0a);
   94C6 75 82 00           2421 	mov	dpl,#0x00
   94C9 78 CF              2422 	mov	r0,#_cds_save
   94CB 79 8C              2423 	mov	r1,#(_cds_save >> 8)
   94CD 7A 02              2424 	mov	r2,#(_cds_save >> 16)
   94CF 12 00 B3           2425 	lcall	__sdcc_banked_call
                           2426 ;	../../shared/src/cdr_dfe_scheme.c:276: cds_save(Savdfe);
   94D2 75 82 10           2427 	mov	dpl,#0x10
   94D5 78 CF              2428 	mov	r0,#_cds_save
   94D7 79 8C              2429 	mov	r1,#(_cds_save >> 8)
   94D9 7A 02              2430 	mov	r2,#(_cds_save >> 16)
   94DB 12 00 B3           2431 	lcall	__sdcc_banked_call
   94DE                    2432 00127$:
                           2433 ;	../../shared/src/cdr_dfe_scheme.c:291: if(cds_tb & dfe_adapt_en)
   94DE 90 61 74           2434 	mov	dptr,#_CDS_READ_MISC1
   94E1 E0                 2435 	movx	a,@dptr
   94E2 FA                 2436 	mov	r2,a
   94E3 A3                 2437 	inc	dptr
   94E4 E0                 2438 	movx	a,@dptr
   94E5 FB                 2439 	mov	r3,a
   94E6 EA                 2440 	mov	a,r2
   94E7 20 E4 03           2441 	jb	acc.4,00250$
   94EA 02 96 A1           2442 	ljmp	00149$
   94ED                    2443 00250$:
                           2444 ;	../../shared/src/cdr_dfe_scheme.c:293: CDS_ST_JUMP(DFE_CONV0);
   94ED 90 60 A2           2445 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0002)
   94F0 74 0A              2446 	mov	a,#0x0A
   94F2 F0                 2447 	movx	@dptr,a
                           2448 ;	../../shared/src/cdr_dfe_scheme.c:295: reg_DFE_F0B_MODE_LANE = 0;
   94F3 90 24 01           2449 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0001)
   94F6 E0                 2450 	movx	a,@dptr
   94F7 54 FD              2451 	anl	a,#0xfd
   94F9 F0                 2452 	movx	@dptr,a
                           2453 ;	../../shared/src/cdr_dfe_scheme.c:296: reg_DFE_F0D_MODE_LANE = 0;
   94FA 90 24 01           2454 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0001)
   94FD E0                 2455 	movx	a,@dptr
   94FE 54 FE              2456 	anl	a,#0xfe
   9500 F0                 2457 	movx	@dptr,a
                           2458 ;	../../shared/src/cdr_dfe_scheme.c:297: if(cds_tb & f0a_coarse_en) 
   9501 90 61 74           2459 	mov	dptr,#_CDS_READ_MISC1
   9504 E0                 2460 	movx	a,@dptr
   9505 FA                 2461 	mov	r2,a
   9506 A3                 2462 	inc	dptr
   9507 E0                 2463 	movx	a,@dptr
   9508 FB                 2464 	mov	r3,a
   9509 EA                 2465 	mov	a,r2
   950A 30 E5 3A           2466 	jnb	acc.5,00129$
                           2467 ;	../../shared/src/cdr_dfe_scheme.c:299: CDS_ST_JUMP(DFE_F0A1);
   950D 90 60 A2           2468 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0002)
   9510 74 0B              2469 	mov	a,#0x0B
   9512 F0                 2470 	movx	@dptr,a
                           2471 ;	../../shared/src/cdr_dfe_scheme.c:300: set_slicer_data_sampler_adapt(SLICER_SMPL_ONLY);
   9513 75 82 01           2472 	mov	dpl,#0x01
   9516 78 44              2473 	mov	r0,#_set_slicer_data_sampler_adapt
   9518 79 92              2474 	mov	r1,#(_set_slicer_data_sampler_adapt >> 8)
   951A 7A 02              2475 	mov	r2,#(_set_slicer_data_sampler_adapt >> 16)
   951C 12 00 B3           2476 	lcall	__sdcc_banked_call
                           2477 ;	../../shared/src/cdr_dfe_scheme.c:301: set_dfe_fbmd(FBall);
   951F 75 82 00           2478 	mov	dpl,#0x00
   9522 78 D8              2479 	mov	r0,#_set_dfe_fbmd
   9524 79 96              2480 	mov	r1,#(_set_dfe_fbmd >> 8)
   9526 7A 02              2481 	mov	r2,#(_set_dfe_fbmd >> 16)
   9528 12 00 B3           2482 	lcall	__sdcc_banked_call
                           2483 ;	../../shared/src/cdr_dfe_scheme.c:302: reg_DFE_F0_COARSE_STEP_EN_LANE = 1;
                           2484 ;	../../shared/src/cdr_dfe_scheme.c:303: reg_DFE_F0_FINE_STEP_EN_LANE = 0;
   952B 90 24 0B           2485 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0003)
   952E E0                 2486 	movx	a,@dptr
   952F 44 80              2487 	orl	a,#0x80
   9531 F0                 2488 	movx	@dptr,a
   9532 E0                 2489 	movx	a,@dptr
   9533 54 BF              2490 	anl	a,#0xbf
   9535 F0                 2491 	movx	@dptr,a
                           2492 ;	../../shared/src/cdr_dfe_scheme.c:304: dfe_fsm(Tf0_coarse,Update0);
   9536 E4                 2493 	clr	a
   9537 C0 E0              2494 	push	acc
   9539 90 0A 01           2495 	mov	dptr,#0x0A01
   953C 78 54              2496 	mov	r0,#_dfe_fsm
   953E 79 93              2497 	mov	r1,#(_dfe_fsm >> 8)
   9540 7A 02              2498 	mov	r2,#(_dfe_fsm >> 16)
   9542 12 00 B3           2499 	lcall	__sdcc_banked_call
   9545 15 81              2500 	dec	sp
   9547                    2501 00129$:
                           2502 ;	../../shared/src/cdr_dfe_scheme.c:306: if(cds_tb & dfe_coarse_en)
   9547 90 61 74           2503 	mov	dptr,#_CDS_READ_MISC1
   954A E0                 2504 	movx	a,@dptr
   954B FA                 2505 	mov	r2,a
   954C A3                 2506 	inc	dptr
   954D E0                 2507 	movx	a,@dptr
   954E FB                 2508 	mov	r3,a
   954F EA                 2509 	mov	a,r2
   9550 30 E6 49           2510 	jnb	acc.6,00133$
                           2511 ;	../../shared/src/cdr_dfe_scheme.c:308: CDS_ST_JUMP(DFE_CONV1);
   9553 90 60 A2           2512 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0002)
   9556 74 0C              2513 	mov	a,#0x0C
   9558 F0                 2514 	movx	@dptr,a
                           2515 ;	../../shared/src/cdr_dfe_scheme.c:309: if(!tx_status_pcie_mode) {
   9559 20 27 18           2516 	jb	_tx_status_pcie_mode,00131$
                           2517 ;	../../shared/src/cdr_dfe_scheme.c:310: set_slicer_data_sampler_adapt(SLICER_SMPL_ONLY);
   955C 75 82 01           2518 	mov	dpl,#0x01
   955F 78 44              2519 	mov	r0,#_set_slicer_data_sampler_adapt
   9561 79 92              2520 	mov	r1,#(_set_slicer_data_sampler_adapt >> 8)
   9563 7A 02              2521 	mov	r2,#(_set_slicer_data_sampler_adapt >> 16)
   9565 12 00 B3           2522 	lcall	__sdcc_banked_call
                           2523 ;	../../shared/src/cdr_dfe_scheme.c:311: set_dfe_fbmd(FBall);
   9568 75 82 00           2524 	mov	dpl,#0x00
   956B 78 D8              2525 	mov	r0,#_set_dfe_fbmd
   956D 79 96              2526 	mov	r1,#(_set_dfe_fbmd >> 8)
   956F 7A 02              2527 	mov	r2,#(_set_dfe_fbmd >> 16)
   9571 12 00 B3           2528 	lcall	__sdcc_banked_call
   9574                    2529 00131$:
                           2530 ;	../../shared/src/cdr_dfe_scheme.c:313: reg_DFE_F0_COARSE_STEP_EN_LANE = 1;
                           2531 ;	../../shared/src/cdr_dfe_scheme.c:314: reg_DFE_F0_FINE_STEP_EN_LANE = 0;
   9574 90 24 0B           2532 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0003)
   9577 E0                 2533 	movx	a,@dptr
   9578 44 80              2534 	orl	a,#0x80
   957A F0                 2535 	movx	@dptr,a
   957B E0                 2536 	movx	a,@dptr
   957C 54 BF              2537 	anl	a,#0xbf
   957E F0                 2538 	movx	@dptr,a
                           2539 ;	../../shared/src/cdr_dfe_scheme.c:315: reg_DFE_COARSE_STEP_EN_LANE = 1;
                           2540 ;	../../shared/src/cdr_dfe_scheme.c:316: reg_DFE_FINE_STEP_EN_LANE = 0;
   957F 90 24 02           2541 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   9582 E0                 2542 	movx	a,@dptr
   9583 44 08              2543 	orl	a,#0x08
   9585 F0                 2544 	movx	@dptr,a
   9586 E0                 2545 	movx	a,@dptr
   9587 54 FB              2546 	anl	a,#0xfb
   9589 F0                 2547 	movx	@dptr,a
                           2548 ;	../../shared/src/cdr_dfe_scheme.c:317: dfe_fsm(Tdfe_coarse,Updatedfe);
   958A 74 02              2549 	mov	a,#0x02
   958C C0 E0              2550 	push	acc
   958E 90 0A 01           2551 	mov	dptr,#0x0A01
   9591 78 54              2552 	mov	r0,#_dfe_fsm
   9593 79 93              2553 	mov	r1,#(_dfe_fsm >> 8)
   9595 7A 02              2554 	mov	r2,#(_dfe_fsm >> 16)
   9597 12 00 B3           2555 	lcall	__sdcc_banked_call
   959A 15 81              2556 	dec	sp
   959C                    2557 00133$:
                           2558 ;	../../shared/src/cdr_dfe_scheme.c:354: if(cds_tb & dfe_fine_en)
   959C 90 61 74           2559 	mov	dptr,#_CDS_READ_MISC1
   959F E0                 2560 	movx	a,@dptr
   95A0 FA                 2561 	mov	r2,a
   95A1 A3                 2562 	inc	dptr
   95A2 E0                 2563 	movx	a,@dptr
   95A3 FB                 2564 	mov	r3,a
   95A4 EA                 2565 	mov	a,r2
   95A5 30 E7 60           2566 	jnb	acc.7,00140$
                           2567 ;	../../shared/src/cdr_dfe_scheme.c:356: CDS_ST_JUMP(DFE_CONV2);
   95A8 90 60 A2           2568 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0002)
   95AB 74 0D              2569 	mov	a,#0x0D
   95AD F0                 2570 	movx	@dptr,a
                           2571 ;	../../shared/src/cdr_dfe_scheme.c:357: if(!tx_status_pcie_mode) {
   95AE 20 27 18           2572 	jb	_tx_status_pcie_mode,00135$
                           2573 ;	../../shared/src/cdr_dfe_scheme.c:358: set_slicer_data_sampler_adapt(BOTH_SMPL);
   95B1 75 82 00           2574 	mov	dpl,#0x00
   95B4 78 44              2575 	mov	r0,#_set_slicer_data_sampler_adapt
   95B6 79 92              2576 	mov	r1,#(_set_slicer_data_sampler_adapt >> 8)
   95B8 7A 02              2577 	mov	r2,#(_set_slicer_data_sampler_adapt >> 16)
   95BA 12 00 B3           2578 	lcall	__sdcc_banked_call
                           2579 ;	../../shared/src/cdr_dfe_scheme.c:359: set_dfe_fbmd(FBself);
   95BD 75 82 02           2580 	mov	dpl,#0x02
   95C0 78 D8              2581 	mov	r0,#_set_dfe_fbmd
   95C2 79 96              2582 	mov	r1,#(_set_dfe_fbmd >> 8)
   95C4 7A 02              2583 	mov	r2,#(_set_dfe_fbmd >> 16)
   95C6 12 00 B3           2584 	lcall	__sdcc_banked_call
   95C9                    2585 00135$:
                           2586 ;	../../shared/src/cdr_dfe_scheme.c:361: reg_DFE_F0_COARSE_STEP_EN_LANE = 1;
                           2587 ;	../../shared/src/cdr_dfe_scheme.c:362: reg_DFE_F0_FINE_STEP_EN_LANE = 0;
   95C9 90 24 0B           2588 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0003)
   95CC E0                 2589 	movx	a,@dptr
   95CD 44 80              2590 	orl	a,#0x80
   95CF F0                 2591 	movx	@dptr,a
   95D0 E0                 2592 	movx	a,@dptr
   95D1 54 BF              2593 	anl	a,#0xbf
   95D3 F0                 2594 	movx	@dptr,a
                           2595 ;	../../shared/src/cdr_dfe_scheme.c:363: reg_DFE_COARSE_STEP_EN_LANE = 1;
                           2596 ;	../../shared/src/cdr_dfe_scheme.c:364: reg_DFE_FINE_STEP_EN_LANE = 0;
   95D4 90 24 02           2597 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   95D7 E0                 2598 	movx	a,@dptr
   95D8 44 08              2599 	orl	a,#0x08
   95DA F0                 2600 	movx	@dptr,a
   95DB E0                 2601 	movx	a,@dptr
   95DC 54 FB              2602 	anl	a,#0xfb
   95DE F0                 2603 	movx	@dptr,a
                           2604 ;	../../shared/src/cdr_dfe_scheme.c:365: if(do_rxinit)
   95DF 30 08 14           2605 	jnb	_do_rxinit,00137$
                           2606 ;	../../shared/src/cdr_dfe_scheme.c:366: dfe_fsm(Tacq,Updatedfe);
   95E2 74 02              2607 	mov	a,#0x02
   95E4 C0 E0              2608 	push	acc
   95E6 90 00 00           2609 	mov	dptr,#0x0000
   95E9 78 54              2610 	mov	r0,#_dfe_fsm
   95EB 79 93              2611 	mov	r1,#(_dfe_fsm >> 8)
   95ED 7A 02              2612 	mov	r2,#(_dfe_fsm >> 16)
   95EF 12 00 B3           2613 	lcall	__sdcc_banked_call
   95F2 15 81              2614 	dec	sp
   95F4 80 12              2615 	sjmp	00140$
   95F6                    2616 00137$:
                           2617 ;	../../shared/src/cdr_dfe_scheme.c:368: dfe_fsm(Tdfe_fine,Updatedfe);
   95F6 74 02              2618 	mov	a,#0x02
   95F8 C0 E0              2619 	push	acc
   95FA 90 03 02           2620 	mov	dptr,#0x0302
   95FD 78 54              2621 	mov	r0,#_dfe_fsm
   95FF 79 93              2622 	mov	r1,#(_dfe_fsm >> 8)
   9601 7A 02              2623 	mov	r2,#(_dfe_fsm >> 16)
   9603 12 00 B3           2624 	lcall	__sdcc_banked_call
   9606 15 81              2625 	dec	sp
   9608                    2626 00140$:
                           2627 ;	../../shared/src/cdr_dfe_scheme.c:373: if(cds_tb & dfe_accu_en)
   9608 90 61 74           2628 	mov	dptr,#_CDS_READ_MISC1
   960B E0                 2629 	movx	a,@dptr
   960C FA                 2630 	mov	r2,a
   960D A3                 2631 	inc	dptr
   960E E0                 2632 	movx	a,@dptr
   960F FB                 2633 	mov	r3,a
   9610 20 E0 03           2634 	jb	acc.0,00257$
   9613 02 96 A1           2635 	ljmp	00149$
   9616                    2636 00257$:
                           2637 ;	../../shared/src/cdr_dfe_scheme.c:375: CDS_ST_JUMP(DFE_CONV3); 
   9616 90 60 A2           2638 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0002)
   9619 74 0E              2639 	mov	a,#0x0E
   961B F0                 2640 	movx	@dptr,a
                           2641 ;	../../shared/src/cdr_dfe_scheme.c:376: if(!tx_status_pcie_mode) {
   961C 20 27 18           2642 	jb	_tx_status_pcie_mode,00142$
                           2643 ;	../../shared/src/cdr_dfe_scheme.c:377: set_slicer_data_sampler_adapt(BOTH_SMPL);
   961F 75 82 00           2644 	mov	dpl,#0x00
   9622 78 44              2645 	mov	r0,#_set_slicer_data_sampler_adapt
   9624 79 92              2646 	mov	r1,#(_set_slicer_data_sampler_adapt >> 8)
   9626 7A 02              2647 	mov	r2,#(_set_slicer_data_sampler_adapt >> 16)
   9628 12 00 B3           2648 	lcall	__sdcc_banked_call
                           2649 ;	../../shared/src/cdr_dfe_scheme.c:378: set_dfe_fbmd(FBself);
   962B 75 82 02           2650 	mov	dpl,#0x02
   962E 78 D8              2651 	mov	r0,#_set_dfe_fbmd
   9630 79 96              2652 	mov	r1,#(_set_dfe_fbmd >> 8)
   9632 7A 02              2653 	mov	r2,#(_set_dfe_fbmd >> 16)
   9634 12 00 B3           2654 	lcall	__sdcc_banked_call
   9637                    2655 00142$:
                           2656 ;	../../shared/src/cdr_dfe_scheme.c:380: reg_DFE_F0_COARSE_STEP_EN_LANE = 0;
   9637 90 24 0B           2657 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0003)
   963A E0                 2658 	movx	a,@dptr
   963B 54 7F              2659 	anl	a,#0x7f
   963D F0                 2660 	movx	@dptr,a
                           2661 ;	../../shared/src/cdr_dfe_scheme.c:381: reg_DFE_F0_FINE_STEP_EN_LANE = 0;
   963E 90 24 0B           2662 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0003)
   9641 E0                 2663 	movx	a,@dptr
   9642 54 BF              2664 	anl	a,#0xbf
   9644 F0                 2665 	movx	@dptr,a
                           2666 ;	../../shared/src/cdr_dfe_scheme.c:382: reg_DFE_COARSE_STEP_EN_LANE = 0;
   9645 90 24 02           2667 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   9648 E0                 2668 	movx	a,@dptr
   9649 54 F7              2669 	anl	a,#0xf7
   964B F0                 2670 	movx	@dptr,a
                           2671 ;	../../shared/src/cdr_dfe_scheme.c:383: reg_DFE_FINE_STEP_EN_LANE = 0;
   964C 90 24 02           2672 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   964F E0                 2673 	movx	a,@dptr
   9650 54 FB              2674 	anl	a,#0xfb
   9652 F0                 2675 	movx	@dptr,a
                           2676 ;	../../shared/src/cdr_dfe_scheme.c:384: if(do_phase_adapt)
   9653 90 67 15           2677 	mov	dptr,#_do_phase_adapt
   9656 E0                 2678 	movx	a,@dptr
   9657 FA                 2679 	mov	r2,a
   9658 60 14              2680 	jz	00144$
                           2681 ;	../../shared/src/cdr_dfe_scheme.c:385: dfe_fsm(Tdfe_accu,Updatedfe_wof1);
   965A 74 04              2682 	mov	a,#0x04
   965C C0 E0              2683 	push	acc
   965E 90 02 04           2684 	mov	dptr,#0x0204
   9661 78 54              2685 	mov	r0,#_dfe_fsm
   9663 79 93              2686 	mov	r1,#(_dfe_fsm >> 8)
   9665 7A 02              2687 	mov	r2,#(_dfe_fsm >> 16)
   9667 12 00 B3           2688 	lcall	__sdcc_banked_call
   966A 15 81              2689 	dec	sp
   966C 80 12              2690 	sjmp	00145$
   966E                    2691 00144$:
                           2692 ;	../../shared/src/cdr_dfe_scheme.c:387: dfe_fsm(Tdfe_accu,Updatedfe);
   966E 74 02              2693 	mov	a,#0x02
   9670 C0 E0              2694 	push	acc
   9672 90 02 04           2695 	mov	dptr,#0x0204
   9675 78 54              2696 	mov	r0,#_dfe_fsm
   9677 79 93              2697 	mov	r1,#(_dfe_fsm >> 8)
   9679 7A 02              2698 	mov	r2,#(_dfe_fsm >> 16)
   967B 12 00 B3           2699 	lcall	__sdcc_banked_call
   967E 15 81              2700 	dec	sp
   9680                    2701 00145$:
                           2702 ;	../../shared/src/cdr_dfe_scheme.c:389: dfe_save();
   9680 78 A5              2703 	mov	r0,#_dfe_save
   9682 79 8C              2704 	mov	r1,#(_dfe_save >> 8)
   9684 7A 02              2705 	mov	r2,#(_dfe_save >> 16)
   9686 12 00 B3           2706 	lcall	__sdcc_banked_call
                           2707 ;	../../shared/src/cdr_dfe_scheme.c:390: cds_save(Savdfe);
   9689 75 82 10           2708 	mov	dpl,#0x10
   968C 78 CF              2709 	mov	r0,#_cds_save
   968E 79 8C              2710 	mov	r1,#(_cds_save >> 8)
   9690 7A 02              2711 	mov	r2,#(_cds_save >> 16)
   9692 12 00 B3           2712 	lcall	__sdcc_banked_call
                           2713 ;	../../shared/src/cdr_dfe_scheme.c:391: cds_save(Savf0a);
   9695 75 82 00           2714 	mov	dpl,#0x00
   9698 78 CF              2715 	mov	r0,#_cds_save
   969A 79 8C              2716 	mov	r1,#(_cds_save >> 8)
   969C 7A 02              2717 	mov	r2,#(_cds_save >> 16)
   969E 12 00 B3           2718 	lcall	__sdcc_banked_call
   96A1                    2719 00149$:
                           2720 ;	../../shared/src/cdr_dfe_scheme.c:398: if(cds_tb & dc_adapt_en)
   96A1 90 61 74           2721 	mov	dptr,#_CDS_READ_MISC1
   96A4 E0                 2722 	movx	a,@dptr
   96A5 FA                 2723 	mov	r2,a
   96A6 A3                 2724 	inc	dptr
   96A7 E0                 2725 	movx	a,@dptr
   96A8 FB                 2726 	mov	r3,a
   96A9 20 E1 03           2727 	jb	acc.1,00260$
   96AC 02 97 37           2728 	ljmp	00151$
   96AF                    2729 00260$:
                           2730 ;	../../shared/src/cdr_dfe_scheme.c:400: CDS_ST_JUMP(DFE_DC0);
   96AF 90 60 A2           2731 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0002)
   96B2 74 10              2732 	mov	a,#0x10
   96B4 F0                 2733 	movx	@dptr,a
                           2734 ;	../../shared/src/cdr_dfe_scheme.c:402: reg_DFE_F0B_MODE_LANE = 0;
   96B5 90 24 01           2735 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0001)
   96B8 E0                 2736 	movx	a,@dptr
   96B9 54 FD              2737 	anl	a,#0xfd
   96BB F0                 2738 	movx	@dptr,a
                           2739 ;	../../shared/src/cdr_dfe_scheme.c:403: reg_DFE_F0D_MODE_LANE = 0;
   96BC 90 24 01           2740 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0001)
   96BF E0                 2741 	movx	a,@dptr
   96C0 54 FE              2742 	anl	a,#0xfe
   96C2 F0                 2743 	movx	@dptr,a
                           2744 ;	../../shared/src/cdr_dfe_scheme.c:404: CDS_ST_JUMP(DFE_DC2);
   96C3 90 60 A2           2745 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0002)
   96C6 74 11              2746 	mov	a,#0x11
   96C8 F0                 2747 	movx	@dptr,a
                           2748 ;	../../shared/src/cdr_dfe_scheme.c:405: reg_DFE_F0_COARSE_STEP_EN_LANE = 0;
                           2749 ;	../../shared/src/cdr_dfe_scheme.c:406: reg_DFE_F0_FINE_STEP_EN_LANE = 1;
   96C9 90 24 0B           2750 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0003)
   96CC E0                 2751 	movx	a,@dptr
   96CD 54 7F              2752 	anl	a,#0x7f
   96CF F0                 2753 	movx	@dptr,a
   96D0 E0                 2754 	movx	a,@dptr
   96D1 44 40              2755 	orl	a,#0x40
   96D3 F0                 2756 	movx	@dptr,a
                           2757 ;	../../shared/src/cdr_dfe_scheme.c:407: reg_DFE_COARSE_STEP_EN_LANE = 0;
                           2758 ;	../../shared/src/cdr_dfe_scheme.c:408: reg_DFE_FINE_STEP_EN_LANE = 1;
   96D4 90 24 02           2759 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   96D7 E0                 2760 	movx	a,@dptr
   96D8 54 F7              2761 	anl	a,#0xf7
   96DA F0                 2762 	movx	@dptr,a
   96DB E0                 2763 	movx	a,@dptr
   96DC 44 04              2764 	orl	a,#0x04
   96DE F0                 2765 	movx	@dptr,a
                           2766 ;	../../shared/src/cdr_dfe_scheme.c:409: dfe_fsm(Tdc_fine,Updatedc);
   96DF 74 03              2767 	mov	a,#0x03
   96E1 C0 E0              2768 	push	acc
   96E3 90 0A 01           2769 	mov	dptr,#0x0A01
   96E6 78 54              2770 	mov	r0,#_dfe_fsm
   96E8 79 93              2771 	mov	r1,#(_dfe_fsm >> 8)
   96EA 7A 02              2772 	mov	r2,#(_dfe_fsm >> 16)
   96EC 12 00 B3           2773 	lcall	__sdcc_banked_call
   96EF 15 81              2774 	dec	sp
                           2775 ;	../../shared/src/cdr_dfe_scheme.c:410: CDS_ST_JUMP(DFE_DC3);
   96F1 90 60 A2           2776 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0002)
   96F4 74 12              2777 	mov	a,#0x12
   96F6 F0                 2778 	movx	@dptr,a
                           2779 ;	../../shared/src/cdr_dfe_scheme.c:411: reg_DFE_F0_COARSE_STEP_EN_LANE = 0;
   96F7 90 24 0B           2780 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0003)
   96FA E0                 2781 	movx	a,@dptr
   96FB 54 7F              2782 	anl	a,#0x7f
   96FD F0                 2783 	movx	@dptr,a
                           2784 ;	../../shared/src/cdr_dfe_scheme.c:412: reg_DFE_F0_FINE_STEP_EN_LANE = 0;
   96FE 90 24 0B           2785 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0003)
   9701 E0                 2786 	movx	a,@dptr
   9702 54 BF              2787 	anl	a,#0xbf
   9704 F0                 2788 	movx	@dptr,a
                           2789 ;	../../shared/src/cdr_dfe_scheme.c:413: reg_DFE_COARSE_STEP_EN_LANE = 0;
   9705 90 24 02           2790 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   9708 E0                 2791 	movx	a,@dptr
   9709 54 F7              2792 	anl	a,#0xf7
   970B F0                 2793 	movx	@dptr,a
                           2794 ;	../../shared/src/cdr_dfe_scheme.c:414: reg_DFE_FINE_STEP_EN_LANE = 0;
   970C 90 24 02           2795 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   970F E0                 2796 	movx	a,@dptr
   9710 54 FB              2797 	anl	a,#0xfb
   9712 F0                 2798 	movx	@dptr,a
                           2799 ;	../../shared/src/cdr_dfe_scheme.c:415: dfe_fsm(Tdc_accu,Updatedc);
   9713 74 03              2800 	mov	a,#0x03
   9715 C0 E0              2801 	push	acc
   9717 90 03 02           2802 	mov	dptr,#0x0302
   971A 78 54              2803 	mov	r0,#_dfe_fsm
   971C 79 93              2804 	mov	r1,#(_dfe_fsm >> 8)
   971E 7A 02              2805 	mov	r2,#(_dfe_fsm >> 16)
   9720 12 00 B3           2806 	lcall	__sdcc_banked_call
   9723 15 81              2807 	dec	sp
                           2808 ;	../../shared/src/cdr_dfe_scheme.c:416: CDS_ST_JUMP(SAVE_DC);
   9725 90 60 A2           2809 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0002)
   9728 74 13              2810 	mov	a,#0x13
   972A F0                 2811 	movx	@dptr,a
                           2812 ;	../../shared/src/cdr_dfe_scheme.c:420: cds_save(Savdc);
   972B 75 82 12           2813 	mov	dpl,#0x12
   972E 78 CF              2814 	mov	r0,#_cds_save
   9730 79 8C              2815 	mov	r1,#(_cds_save >> 8)
   9732 7A 02              2816 	mov	r2,#(_cds_save >> 16)
   9734 12 00 B3           2817 	lcall	__sdcc_banked_call
   9737                    2818 00151$:
                           2819 ;	../../shared/src/cdr_dfe_scheme.c:422: if(cds_tb & f0b_adapt_en)
   9737 90 61 74           2820 	mov	dptr,#_CDS_READ_MISC1
   973A E0                 2821 	movx	a,@dptr
   973B FA                 2822 	mov	r2,a
   973C A3                 2823 	inc	dptr
   973D E0                 2824 	movx	a,@dptr
   973E FB                 2825 	mov	r3,a
   973F 20 E2 03           2826 	jb	acc.2,00261$
   9742 02 97 C4           2827 	ljmp	00153$
   9745                    2828 00261$:
                           2829 ;	../../shared/src/cdr_dfe_scheme.c:424: CDS_ST_JUMP(DFE_F0B0);
   9745 90 60 A2           2830 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0002)
   9748 74 14              2831 	mov	a,#0x14
   974A F0                 2832 	movx	@dptr,a
                           2833 ;	../../shared/src/cdr_dfe_scheme.c:425: set_slicer_data_sampler_adapt(BOTH_SMPL);
   974B 75 82 00           2834 	mov	dpl,#0x00
   974E 78 44              2835 	mov	r0,#_set_slicer_data_sampler_adapt
   9750 79 92              2836 	mov	r1,#(_set_slicer_data_sampler_adapt >> 8)
   9752 7A 02              2837 	mov	r2,#(_set_slicer_data_sampler_adapt >> 16)
   9754 12 00 B3           2838 	lcall	__sdcc_banked_call
                           2839 ;	../../shared/src/cdr_dfe_scheme.c:426: set_dfe_fbmd(FBself);
   9757 75 82 02           2840 	mov	dpl,#0x02
   975A 78 D8              2841 	mov	r0,#_set_dfe_fbmd
   975C 79 96              2842 	mov	r1,#(_set_dfe_fbmd >> 8)
   975E 7A 02              2843 	mov	r2,#(_set_dfe_fbmd >> 16)
   9760 12 00 B3           2844 	lcall	__sdcc_banked_call
                           2845 ;	../../shared/src/cdr_dfe_scheme.c:427: CDS_ST_JUMP(DFE_F0B2);
   9763 90 60 A2           2846 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0002)
   9766 74 15              2847 	mov	a,#0x15
   9768 F0                 2848 	movx	@dptr,a
                           2849 ;	../../shared/src/cdr_dfe_scheme.c:428: reg_DFE_F0B_MODE_LANE = 1;
   9769 90 24 01           2850 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0001)
   976C E0                 2851 	movx	a,@dptr
   976D 44 02              2852 	orl	a,#0x02
   976F F0                 2853 	movx	@dptr,a
                           2854 ;	../../shared/src/cdr_dfe_scheme.c:429: reg_DFE_F0_COARSE_STEP_EN_LANE = 1;
                           2855 ;	../../shared/src/cdr_dfe_scheme.c:430: reg_DFE_F0_FINE_STEP_EN_LANE = 0;
   9770 90 24 0B           2856 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0003)
   9773 E0                 2857 	movx	a,@dptr
   9774 44 80              2858 	orl	a,#0x80
   9776 F0                 2859 	movx	@dptr,a
   9777 E0                 2860 	movx	a,@dptr
   9778 54 BF              2861 	anl	a,#0xbf
   977A F0                 2862 	movx	@dptr,a
                           2863 ;	../../shared/src/cdr_dfe_scheme.c:431: dfe_fsm(Tf0b_fine,Update0);
   977B E4                 2864 	clr	a
   977C C0 E0              2865 	push	acc
   977E 90 08 02           2866 	mov	dptr,#0x0802
   9781 78 54              2867 	mov	r0,#_dfe_fsm
   9783 79 93              2868 	mov	r1,#(_dfe_fsm >> 8)
   9785 7A 02              2869 	mov	r2,#(_dfe_fsm >> 16)
   9787 12 00 B3           2870 	lcall	__sdcc_banked_call
   978A 15 81              2871 	dec	sp
                           2872 ;	../../shared/src/cdr_dfe_scheme.c:433: CDS_ST_JUMP(DFE_F0B3);
   978C 90 60 A2           2873 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0002)
   978F 74 16              2874 	mov	a,#0x16
   9791 F0                 2875 	movx	@dptr,a
                           2876 ;	../../shared/src/cdr_dfe_scheme.c:434: reg_DFE_F0_COARSE_STEP_EN_LANE = 0;
   9792 90 24 0B           2877 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0003)
   9795 E0                 2878 	movx	a,@dptr
   9796 54 7F              2879 	anl	a,#0x7f
   9798 F0                 2880 	movx	@dptr,a
                           2881 ;	../../shared/src/cdr_dfe_scheme.c:435: reg_DFE_F0_FINE_STEP_EN_LANE = 0;
   9799 90 24 0B           2882 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0003)
   979C E0                 2883 	movx	a,@dptr
   979D 54 BF              2884 	anl	a,#0xbf
   979F F0                 2885 	movx	@dptr,a
                           2886 ;	../../shared/src/cdr_dfe_scheme.c:436: dfe_fsm(Tf0b_accu,Update0);
   97A0 E4                 2887 	clr	a
   97A1 C0 E0              2888 	push	acc
   97A3 90 04 04           2889 	mov	dptr,#0x0404
   97A6 78 54              2890 	mov	r0,#_dfe_fsm
   97A8 79 93              2891 	mov	r1,#(_dfe_fsm >> 8)
   97AA 7A 02              2892 	mov	r2,#(_dfe_fsm >> 16)
   97AC 12 00 B3           2893 	lcall	__sdcc_banked_call
   97AF 15 81              2894 	dec	sp
                           2895 ;	../../shared/src/cdr_dfe_scheme.c:438: cds_save(Savf0b);
   97B1 75 82 01           2896 	mov	dpl,#0x01
   97B4 78 CF              2897 	mov	r0,#_cds_save
   97B6 79 8C              2898 	mov	r1,#(_cds_save >> 8)
   97B8 7A 02              2899 	mov	r2,#(_cds_save >> 16)
   97BA 12 00 B3           2900 	lcall	__sdcc_banked_call
                           2901 ;	../../shared/src/cdr_dfe_scheme.c:439: reg_DFE_F0B_MODE_LANE = 0;
   97BD 90 24 01           2902 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0001)
   97C0 E0                 2903 	movx	a,@dptr
   97C1 54 FD              2904 	anl	a,#0xfd
   97C3 F0                 2905 	movx	@dptr,a
   97C4                    2906 00153$:
                           2907 ;	../../shared/src/cdr_dfe_scheme.c:441: if(cds_tb & f0d_adapt_en)
   97C4 90 61 74           2908 	mov	dptr,#_CDS_READ_MISC1
   97C7 E0                 2909 	movx	a,@dptr
   97C8 FA                 2910 	mov	r2,a
   97C9 A3                 2911 	inc	dptr
   97CA E0                 2912 	movx	a,@dptr
   97CB FB                 2913 	mov	r3,a
   97CC 20 E4 03           2914 	jb	acc.4,00262$
   97CF 02 99 6B           2915 	ljmp	00181$
   97D2                    2916 00262$:
                           2917 ;	../../shared/src/cdr_dfe_scheme.c:443: CDS_ST_JUMP(DFE_F0D0);
   97D2 90 60 A2           2918 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0002)
   97D5 74 18              2919 	mov	a,#0x18
   97D7 F0                 2920 	movx	@dptr,a
                           2921 ;	../../shared/src/cdr_dfe_scheme.c:444: if(!tx_status_pcie_mode) {
   97D8 20 27 18           2922 	jb	_tx_status_pcie_mode,00155$
                           2923 ;	../../shared/src/cdr_dfe_scheme.c:445: set_slicer_data_sampler_adapt(BOTH_SMPL);
   97DB 75 82 00           2924 	mov	dpl,#0x00
   97DE 78 44              2925 	mov	r0,#_set_slicer_data_sampler_adapt
   97E0 79 92              2926 	mov	r1,#(_set_slicer_data_sampler_adapt >> 8)
   97E2 7A 02              2927 	mov	r2,#(_set_slicer_data_sampler_adapt >> 16)
   97E4 12 00 B3           2928 	lcall	__sdcc_banked_call
                           2929 ;	../../shared/src/cdr_dfe_scheme.c:446: set_dfe_fbmd(FBself);
   97E7 75 82 02           2930 	mov	dpl,#0x02
   97EA 78 D8              2931 	mov	r0,#_set_dfe_fbmd
   97EC 79 96              2932 	mov	r1,#(_set_dfe_fbmd >> 8)
   97EE 7A 02              2933 	mov	r2,#(_set_dfe_fbmd >> 16)
   97F0 12 00 B3           2934 	lcall	__sdcc_banked_call
   97F3                    2935 00155$:
                           2936 ;	../../shared/src/cdr_dfe_scheme.c:448: reg_DFE_CLR_FRAC_EN_LANE = 0;
   97F3 90 24 04           2937 	mov	dptr,#_DFE_CTRL_REG1
   97F6 E0                 2938 	movx	a,@dptr
   97F7 54 BF              2939 	anl	a,#0xbf
   97F9 F0                 2940 	movx	@dptr,a
                           2941 ;	../../shared/src/cdr_dfe_scheme.c:449: reg_DFE_F0D_MODE_LANE = 1;
   97FA 90 24 01           2942 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0001)
   97FD E0                 2943 	movx	a,@dptr
   97FE 44 01              2944 	orl	a,#0x01
   9800 F0                 2945 	movx	@dptr,a
                           2946 ;	../../shared/src/cdr_dfe_scheme.c:450: f0d_dir = 0;
   9801 7A 00              2947 	mov	r2,#0x00
                           2948 ;	../../shared/src/cdr_dfe_scheme.c:451: f0d_updated = 0;
   9803 7B 00              2949 	mov	r3,#0x00
                           2950 ;	../../shared/src/cdr_dfe_scheme.c:453: do {
   9805                    2951 00177$:
                           2952 ;	../../shared/src/cdr_dfe_scheme.c:454: dfe_load_type(2);
   9805 75 82 02           2953 	mov	dpl,#0x02
   9808 C0 02              2954 	push	ar2
   980A C0 03              2955 	push	ar3
   980C 78 97              2956 	mov	r0,#_dfe_load_type
   980E 79 8B              2957 	mov	r1,#(_dfe_load_type >> 8)
   9810 7A 02              2958 	mov	r2,#(_dfe_load_type >> 16)
   9812 12 00 B3           2959 	lcall	__sdcc_banked_call
   9815 D0 03              2960 	pop	ar3
   9817 D0 02              2961 	pop	ar2
                           2962 ;	../../shared/src/cdr_dfe_scheme.c:455: CDS_ST_JUMP(DFE_F0D1);
   9819 90 60 A2           2963 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0002)
   981C 74 19              2964 	mov	a,#0x19
   981E F0                 2965 	movx	@dptr,a
                           2966 ;	../../shared/src/cdr_dfe_scheme.c:456: reg_DFE_F0_COARSE_STEP_EN_LANE = 1;
                           2967 ;	../../shared/src/cdr_dfe_scheme.c:457: reg_DFE_F0_FINE_STEP_EN_LANE = 0;
   981F 90 24 0B           2968 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0003)
   9822 E0                 2969 	movx	a,@dptr
   9823 44 80              2970 	orl	a,#0x80
   9825 F0                 2971 	movx	@dptr,a
   9826 E0                 2972 	movx	a,@dptr
   9827 54 BF              2973 	anl	a,#0xbf
   9829 F0                 2974 	movx	@dptr,a
                           2975 ;	../../shared/src/cdr_dfe_scheme.c:458: if(!tx_status_pcie_mode)
   982A 20 27 1B           2976 	jb	_tx_status_pcie_mode,00157$
                           2977 ;	../../shared/src/cdr_dfe_scheme.c:459: dfe_fsm(Tf0d_coarse,Update0);
   982D C0 02              2978 	push	ar2
   982F C0 03              2979 	push	ar3
   9831 E4                 2980 	clr	a
   9832 C0 E0              2981 	push	acc
   9834 90 0A 02           2982 	mov	dptr,#0x0A02
   9837 78 54              2983 	mov	r0,#_dfe_fsm
   9839 79 93              2984 	mov	r1,#(_dfe_fsm >> 8)
   983B 7A 02              2985 	mov	r2,#(_dfe_fsm >> 16)
   983D 12 00 B3           2986 	lcall	__sdcc_banked_call
   9840 15 81              2987 	dec	sp
   9842 D0 03              2988 	pop	ar3
   9844 D0 02              2989 	pop	ar2
   9846 80 19              2990 	sjmp	00158$
   9848                    2991 00157$:
                           2992 ;	../../shared/src/cdr_dfe_scheme.c:461: dfe_fsm(Tf0d_coarse_pcie,Update0);
   9848 C0 02              2993 	push	ar2
   984A C0 03              2994 	push	ar3
   984C E4                 2995 	clr	a
   984D C0 E0              2996 	push	acc
   984F 90 08 02           2997 	mov	dptr,#0x0802
   9852 78 54              2998 	mov	r0,#_dfe_fsm
   9854 79 93              2999 	mov	r1,#(_dfe_fsm >> 8)
   9856 7A 02              3000 	mov	r2,#(_dfe_fsm >> 16)
   9858 12 00 B3           3001 	lcall	__sdcc_banked_call
   985B 15 81              3002 	dec	sp
   985D D0 03              3003 	pop	ar3
   985F D0 02              3004 	pop	ar2
   9861                    3005 00158$:
                           3006 ;	../../shared/src/cdr_dfe_scheme.c:463: CDS_ST_JUMP(DFE_F0D2);
   9861 90 60 A2           3007 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0002)
   9864 74 1A              3008 	mov	a,#0x1A
   9866 F0                 3009 	movx	@dptr,a
                           3010 ;	../../shared/src/cdr_dfe_scheme.c:464: reg_DFE_F0_COARSE_STEP_EN_LANE = 0;
                           3011 ;	../../shared/src/cdr_dfe_scheme.c:465: reg_DFE_F0_FINE_STEP_EN_LANE = 1;
   9867 90 24 0B           3012 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0003)
   986A E0                 3013 	movx	a,@dptr
   986B 54 7F              3014 	anl	a,#0x7f
   986D F0                 3015 	movx	@dptr,a
   986E E0                 3016 	movx	a,@dptr
   986F 44 40              3017 	orl	a,#0x40
   9871 F0                 3018 	movx	@dptr,a
                           3019 ;	../../shared/src/cdr_dfe_scheme.c:466: if(!tx_status_pcie_mode)
   9872 20 27 1B           3020 	jb	_tx_status_pcie_mode,00160$
                           3021 ;	../../shared/src/cdr_dfe_scheme.c:467: dfe_fsm(Tf0d_fine,Update0);
   9875 C0 02              3022 	push	ar2
   9877 C0 03              3023 	push	ar3
   9879 E4                 3024 	clr	a
   987A C0 E0              3025 	push	acc
   987C 90 08 04           3026 	mov	dptr,#0x0804
   987F 78 54              3027 	mov	r0,#_dfe_fsm
   9881 79 93              3028 	mov	r1,#(_dfe_fsm >> 8)
   9883 7A 02              3029 	mov	r2,#(_dfe_fsm >> 16)
   9885 12 00 B3           3030 	lcall	__sdcc_banked_call
   9888 15 81              3031 	dec	sp
   988A D0 03              3032 	pop	ar3
   988C D0 02              3033 	pop	ar2
   988E 80 19              3034 	sjmp	00161$
   9890                    3035 00160$:
                           3036 ;	../../shared/src/cdr_dfe_scheme.c:469: dfe_fsm(Tf0d_fine_pcie,Update0);
   9890 C0 02              3037 	push	ar2
   9892 C0 03              3038 	push	ar3
   9894 E4                 3039 	clr	a
   9895 C0 E0              3040 	push	acc
   9897 90 06 04           3041 	mov	dptr,#0x0604
   989A 78 54              3042 	mov	r0,#_dfe_fsm
   989C 79 93              3043 	mov	r1,#(_dfe_fsm >> 8)
   989E 7A 02              3044 	mov	r2,#(_dfe_fsm >> 16)
   98A0 12 00 B3           3045 	lcall	__sdcc_banked_call
   98A3 15 81              3046 	dec	sp
   98A5 D0 03              3047 	pop	ar3
   98A7 D0 02              3048 	pop	ar2
   98A9                    3049 00161$:
                           3050 ;	../../shared/src/cdr_dfe_scheme.c:471: CDS_ST_JUMP(SAVE_F0D);
   98A9 90 60 A2           3051 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0002)
   98AC 74 1C              3052 	mov	a,#0x1C
   98AE F0                 3053 	movx	@dptr,a
                           3054 ;	../../shared/src/cdr_dfe_scheme.c:473: if( !f0d_updated )
   98AF EB                 3055 	mov	a,r3
   98B0 70 16              3056 	jnz	00166$
                           3057 ;	../../shared/src/cdr_dfe_scheme.c:474: cds_save(Savf0d);
   98B2 75 82 02           3058 	mov	dpl,#0x02
   98B5 C0 02              3059 	push	ar2
   98B7 C0 03              3060 	push	ar3
   98B9 78 CF              3061 	mov	r0,#_cds_save
   98BB 79 8C              3062 	mov	r1,#(_cds_save >> 8)
   98BD 7A 02              3063 	mov	r2,#(_cds_save >> 16)
   98BF 12 00 B3           3064 	lcall	__sdcc_banked_call
   98C2 D0 03              3065 	pop	ar3
   98C4 D0 02              3066 	pop	ar2
   98C6 80 2D              3067 	sjmp	00167$
   98C8                    3068 00166$:
                           3069 ;	../../shared/src/cdr_dfe_scheme.c:475: else if( f0d_dir == 0 )
   98C8 EA                 3070 	mov	a,r2
   98C9 70 16              3071 	jnz	00163$
                           3072 ;	../../shared/src/cdr_dfe_scheme.c:476: cds_save(Savf0d_l);
   98CB 75 82 03           3073 	mov	dpl,#0x03
   98CE C0 02              3074 	push	ar2
   98D0 C0 03              3075 	push	ar3
   98D2 78 CF              3076 	mov	r0,#_cds_save
   98D4 79 8C              3077 	mov	r1,#(_cds_save >> 8)
   98D6 7A 02              3078 	mov	r2,#(_cds_save >> 16)
   98D8 12 00 B3           3079 	lcall	__sdcc_banked_call
   98DB D0 03              3080 	pop	ar3
   98DD D0 02              3081 	pop	ar2
   98DF 80 14              3082 	sjmp	00167$
   98E1                    3083 00163$:
                           3084 ;	../../shared/src/cdr_dfe_scheme.c:478: cds_save(Savf0d_r);
   98E1 75 82 04           3085 	mov	dpl,#0x04
   98E4 C0 02              3086 	push	ar2
   98E6 C0 03              3087 	push	ar3
   98E8 78 CF              3088 	mov	r0,#_cds_save
   98EA 79 8C              3089 	mov	r1,#(_cds_save >> 8)
   98EC 7A 02              3090 	mov	r2,#(_cds_save >> 16)
   98EE 12 00 B3           3091 	lcall	__sdcc_banked_call
   98F1 D0 03              3092 	pop	ar3
   98F3 D0 02              3093 	pop	ar2
   98F5                    3094 00167$:
                           3095 ;	../../shared/src/cdr_dfe_scheme.c:480: CDS_ST_JUMP(DFE_F0D_PM);
   98F5 90 60 A2           3096 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0002)
   98F8 74 1B              3097 	mov	a,#0x1B
   98FA F0                 3098 	movx	@dptr,a
                           3099 ;	../../shared/src/cdr_dfe_scheme.c:481: if(tag_VH_EO_MODE)
   98FB 90 60 A0           3100 	mov	dptr,#_CDS_CTRL_REG0
   98FE E0                 3101 	movx	a,@dptr
   98FF 30 E3 5B           3102 	jnb	acc.3,00179$
                           3103 ;	../../shared/src/cdr_dfe_scheme.c:483: if(!f0d_updated){
   9902 EB                 3104 	mov	a,r3
   9903 70 1F              3105 	jnz	00172$
                           3106 ;	../../shared/src/cdr_dfe_scheme.c:484: f0d_updated = 1;
   9905 7B 01              3107 	mov	r3,#0x01
                           3108 ;	../../shared/src/cdr_dfe_scheme.c:486: phase_control_func_0(train.phase_offset_data, norm_eom_ph_os_l);
   9907 90 66 61           3109 	mov	dptr,#(_train + 0x0021)
   990A E0                 3110 	movx	a,@dptr
   990B FC                 3111 	mov	r4,a
   990C C0 02              3112 	push	ar2
   990E C0 03              3113 	push	ar3
   9910 90 67 00           3114 	mov	dptr,#_norm_eom_ph_os_l
   9913 E0                 3115 	movx	a,@dptr
   9914 C0 E0              3116 	push	acc
   9916 8C 82              3117 	mov	dpl,r4
   9918 12 2C 2B           3118 	lcall	_phase_control_func_0
   991B 15 81              3119 	dec	sp
   991D D0 03              3120 	pop	ar3
   991F D0 02              3121 	pop	ar2
   9921 02 98 05           3122 	ljmp	00177$
   9924                    3123 00172$:
                           3124 ;	../../shared/src/cdr_dfe_scheme.c:487: }else if(f0d_dir == 0)
   9924 EA                 3125 	mov	a,r2
   9925 70 1F              3126 	jnz	00169$
                           3127 ;	../../shared/src/cdr_dfe_scheme.c:489: f0d_dir = 1;
   9927 7A 01              3128 	mov	r2,#0x01
                           3129 ;	../../shared/src/cdr_dfe_scheme.c:491: phase_control_func_0(train.phase_offset_data, norm_eom_ph_os_r);
   9929 90 66 61           3130 	mov	dptr,#(_train + 0x0021)
   992C E0                 3131 	movx	a,@dptr
   992D FC                 3132 	mov	r4,a
   992E C0 02              3133 	push	ar2
   9930 C0 03              3134 	push	ar3
   9932 90 67 02           3135 	mov	dptr,#_norm_eom_ph_os_r
   9935 E0                 3136 	movx	a,@dptr
   9936 C0 E0              3137 	push	acc
   9938 8C 82              3138 	mov	dpl,r4
   993A 12 2C 2B           3139 	lcall	_phase_control_func_0
   993D 15 81              3140 	dec	sp
   993F D0 03              3141 	pop	ar3
   9941 D0 02              3142 	pop	ar2
   9943 02 98 05           3143 	ljmp	00177$
   9946                    3144 00169$:
                           3145 ;	../../shared/src/cdr_dfe_scheme.c:496: train.phase_offset_esm = norm_eom_ph_os_c; 
   9946 90 67 01           3146 	mov	dptr,#_norm_eom_ph_os_c
   9949 E0                 3147 	movx	a,@dptr
   994A FA                 3148 	mov	r2,a
   994B 90 66 62           3149 	mov	dptr,#(_train + 0x0022)
   994E F0                 3150 	movx	@dptr,a
                           3151 ;	../../shared/src/cdr_dfe_scheme.c:497: phase_control_func_0(train.phase_offset_data, norm_eom_ph_os_c);
   994F 90 66 61           3152 	mov	dptr,#(_train + 0x0021)
   9952 E0                 3153 	movx	a,@dptr
   9953 FB                 3154 	mov	r3,a
   9954 C0 02              3155 	push	ar2
   9956 8B 82              3156 	mov	dpl,r3
   9958 12 2C 2B           3157 	lcall	_phase_control_func_0
   995B 15 81              3158 	dec	sp
                           3159 ;	../../shared/src/cdr_dfe_scheme.c:501: } while(1);
   995D                    3160 00179$:
                           3161 ;	../../shared/src/cdr_dfe_scheme.c:503: reg_DFE_F0D_MODE_LANE = 0;
   995D 90 24 01           3162 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0001)
   9960 E0                 3163 	movx	a,@dptr
   9961 54 FE              3164 	anl	a,#0xfe
   9963 F0                 3165 	movx	@dptr,a
                           3166 ;	../../shared/src/cdr_dfe_scheme.c:504: reg_DFE_CLR_FRAC_EN_LANE = 1;
   9964 90 24 04           3167 	mov	dptr,#_DFE_CTRL_REG1
   9967 E0                 3168 	movx	a,@dptr
   9968 44 40              3169 	orl	a,#0x40
   996A F0                 3170 	movx	@dptr,a
   996B                    3171 00181$:
                           3172 ;	../../shared/src/cdr_dfe_scheme.c:540: if((cds_tb & eye_chk_en) && (lnx_EYE_CHECK_BYPASS_LANE==0))
   996B 90 61 74           3173 	mov	dptr,#_CDS_READ_MISC1
   996E E0                 3174 	movx	a,@dptr
   996F FA                 3175 	mov	r2,a
   9970 A3                 3176 	inc	dptr
   9971 E0                 3177 	movx	a,@dptr
   9972 FB                 3178 	mov	r3,a
   9973 20 E6 03           3179 	jb	acc.6,00271$
   9976 02 9A 1A           3180 	ljmp	00189$
   9979                    3181 00271$:
   9979 90 60 4F           3182 	mov	dptr,#(_DFE_CONTROL_5 + 0x0003)
   997C E0                 3183 	movx	a,@dptr
   997D 30 E6 03           3184 	jnb	acc.6,00272$
   9980 02 9A 1A           3185 	ljmp	00189$
   9983                    3186 00272$:
                           3187 ;	../../shared/src/cdr_dfe_scheme.c:542: CDS_ST_JUMP(EYECHK0);
   9983 90 60 A2           3188 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0002)
   9986 74 21              3189 	mov	a,#0x21
   9988 F0                 3190 	movx	@dptr,a
                           3191 ;	../../shared/src/cdr_dfe_scheme.c:543: reg_EOM_EN_LANE = 1;
   9989 90 25 80           3192 	mov	dptr,#_EOM_REG0
   998C E0                 3193 	movx	a,@dptr
   998D 44 01              3194 	orl	a,#0x01
   998F F0                 3195 	movx	@dptr,a
                           3196 ;	../../shared/src/cdr_dfe_scheme.c:544: if(lnx_ESM_EN_LANE==0) {
   9990 90 60 5A           3197 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0002)
   9993 E0                 3198 	movx	a,@dptr
   9994 20 E2 20           3199 	jb	acc.2,00183$
                           3200 ;	../../shared/src/cdr_dfe_scheme.c:545: dfe_load_type(1);
   9997 75 82 01           3201 	mov	dpl,#0x01
   999A 78 97              3202 	mov	r0,#_dfe_load_type
   999C 79 8B              3203 	mov	r1,#(_dfe_load_type >> 8)
   999E 7A 02              3204 	mov	r2,#(_dfe_load_type >> 16)
   99A0 12 00 B3           3205 	lcall	__sdcc_banked_call
                           3206 ;	../../shared/src/cdr_dfe_scheme.c:546: set_esm_voltage(get_ec_voltage());
   99A3 78 90              3207 	mov	r0,#_get_ec_voltage
   99A5 79 9A              3208 	mov	r1,#(_get_ec_voltage >> 8)
   99A7 7A 01              3209 	mov	r2,#(_get_ec_voltage >> 16)
   99A9 12 00 B3           3210 	lcall	__sdcc_banked_call
   99AC 78 12              3211 	mov	r0,#_set_esm_voltage
   99AE 79 8B              3212 	mov	r1,#(_set_esm_voltage >> 8)
   99B0 7A 02              3213 	mov	r2,#(_set_esm_voltage >> 16)
   99B2 12 00 B3           3214 	lcall	__sdcc_banked_call
   99B5 80 0F              3215 	sjmp	00184$
   99B7                    3216 00183$:
                           3217 ;	../../shared/src/cdr_dfe_scheme.c:549: set_esm_voltage(lnx_ESM_VOLTAGE_LANE_7_0);
   99B7 90 60 39           3218 	mov	dptr,#(_DFE_CONTROL_1 + 0x0001)
   99BA E0                 3219 	movx	a,@dptr
   99BB F5 82              3220 	mov	dpl,a
   99BD 78 12              3221 	mov	r0,#_set_esm_voltage
   99BF 79 8B              3222 	mov	r1,#(_set_esm_voltage >> 8)
   99C1 7A 02              3223 	mov	r2,#(_set_esm_voltage >> 16)
   99C3 12 00 B3           3224 	lcall	__sdcc_banked_call
   99C6                    3225 00184$:
                           3226 ;	../../shared/src/cdr_dfe_scheme.c:550: CDS_ST_JUMP(EYECHK);
   99C6 90 60 A2           3227 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0002)
   99C9 74 22              3228 	mov	a,#0x22
   99CB F0                 3229 	movx	@dptr,a
                           3230 ;	../../shared/src/cdr_dfe_scheme.c:551: reg_EOM_CNT_CLR_LANE = 1;
                           3231 ;	../../shared/src/cdr_dfe_scheme.c:552: reg_EOM_CNT_CLR_LANE = 0;
   99CC 90 25 80           3232 	mov	dptr,#_EOM_REG0
   99CF E0                 3233 	movx	a,@dptr
   99D0 44 04              3234 	orl	a,#0x04
   99D2 F0                 3235 	movx	@dptr,a
   99D3 E0                 3236 	movx	a,@dptr
   99D4 54 FB              3237 	anl	a,#0xfb
   99D6 F0                 3238 	movx	@dptr,a
                           3239 ;	../../shared/src/cdr_dfe_scheme.c:553: if(lnx_ESM_EN_LANE)
   99D7 90 60 5A           3240 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0002)
   99DA E0                 3241 	movx	a,@dptr
   99DB 30 E2 14           3242 	jnb	acc.2,00186$
                           3243 ;	../../shared/src/cdr_dfe_scheme.c:554: dfe_fsm(Tesm,Updateoff);
   99DE 74 FF              3244 	mov	a,#0xFF
   99E0 C0 E0              3245 	push	acc
   99E2 90 20 08           3246 	mov	dptr,#0x2008
   99E5 78 54              3247 	mov	r0,#_dfe_fsm
   99E7 79 93              3248 	mov	r1,#(_dfe_fsm >> 8)
   99E9 7A 02              3249 	mov	r2,#(_dfe_fsm >> 16)
   99EB 12 00 B3           3250 	lcall	__sdcc_banked_call
   99EE 15 81              3251 	dec	sp
   99F0 80 12              3252 	sjmp	00187$
   99F2                    3253 00186$:
                           3254 ;	../../shared/src/cdr_dfe_scheme.c:556: dfe_fsm(Teyechk,Updateoff);
   99F2 74 FF              3255 	mov	a,#0xFF
   99F4 C0 E0              3256 	push	acc
   99F6 90 0A 05           3257 	mov	dptr,#0x0A05
   99F9 78 54              3258 	mov	r0,#_dfe_fsm
   99FB 79 93              3259 	mov	r1,#(_dfe_fsm >> 8)
   99FD 7A 02              3260 	mov	r2,#(_dfe_fsm >> 16)
   99FF 12 00 B3           3261 	lcall	__sdcc_banked_call
   9A02 15 81              3262 	dec	sp
   9A04                    3263 00187$:
                           3264 ;	../../shared/src/cdr_dfe_scheme.c:557: CDS_ST_JUMP(SAVE_EYECHK);
   9A04 90 60 A2           3265 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0002)
   9A07 74 23              3266 	mov	a,#0x23
   9A09 F0                 3267 	movx	@dptr,a
                           3268 ;	../../shared/src/cdr_dfe_scheme.c:559: cds28.eye_check_pass = check_eye();
   9A0A 78 CA              3269 	mov	r0,#_check_eye
   9A0C 79 88              3270 	mov	r1,#(_check_eye >> 8)
   9A0E 7A 02              3271 	mov	r2,#(_check_eye >> 16)
   9A10 12 00 B3           3272 	lcall	__sdcc_banked_call
   9A13 AA 82              3273 	mov	r2,dpl
   9A15 90 61 70           3274 	mov	dptr,#(_cds28 + 0x0070)
   9A18 EA                 3275 	mov	a,r2
   9A19 F0                 3276 	movx	@dptr,a
   9A1A                    3277 00189$:
                           3278 ;	../../shared/src/cdr_dfe_scheme.c:562: if(lnx_ESM_EN_LANE==0 && !do_rxinit) {
   9A1A 90 60 5A           3279 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0002)
   9A1D E0                 3280 	movx	a,@dptr
   9A1E 20 E2 1C           3281 	jb	acc.2,00192$
   9A21 20 08 19           3282 	jb	_do_rxinit,00192$
                           3283 ;	../../shared/src/cdr_dfe_scheme.c:563: CDS_ST_JUMP(SAVE_LAST);
   9A24 90 60 A2           3284 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0002)
   9A27 74 24              3285 	mov	a,#0x24
   9A29 F0                 3286 	movx	@dptr,a
                           3287 ;	../../shared/src/cdr_dfe_scheme.c:564: dfe_load_type(1);
   9A2A 75 82 01           3288 	mov	dpl,#0x01
   9A2D 78 97              3289 	mov	r0,#_dfe_load_type
   9A2F 79 8B              3290 	mov	r1,#(_dfe_load_type >> 8)
   9A31 7A 02              3291 	mov	r2,#(_dfe_load_type >> 16)
   9A33 12 00 B3           3292 	lcall	__sdcc_banked_call
                           3293 ;	../../shared/src/cdr_dfe_scheme.c:565: reg_EOM_EN_LANE = 0;
   9A36 90 25 80           3294 	mov	dptr,#_EOM_REG0
   9A39 E0                 3295 	movx	a,@dptr
   9A3A 54 FE              3296 	anl	a,#0xfe
   9A3C F0                 3297 	movx	@dptr,a
   9A3D                    3298 00192$:
                           3299 ;	../../shared/src/cdr_dfe_scheme.c:567: CDS_ST_JUMP(DONE);
   9A3D 90 60 A2           3300 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0002)
   9A40 74 25              3301 	mov	a,#0x25
   9A42 F0                 3302 	movx	@dptr,a
   9A43                    3303 00194$:
   9A43 85 18 81           3304 	mov	sp,_bp
   9A46 D0 18              3305 	pop	_bp
   9A48 02 00 C5           3306 	ljmp	__sdcc_banked_ret
                           3307 ;------------------------------------------------------------
                           3308 ;Allocation info for local variables in function 'dfe_load_all'
                           3309 ;------------------------------------------------------------
                           3310 ;------------------------------------------------------------
                           3311 ;	../../shared/src/cdr_dfe_scheme.c:641: void dfe_load_all(void) BANKING_CTRL {
                           3312 ;	-----------------------------------------
                           3313 ;	 function dfe_load_all
                           3314 ;	-----------------------------------------
   9A4B                    3315 _dfe_load_all:
                           3316 ;	../../shared/src/cdr_dfe_scheme.c:642: reg_DFE_DC_LOAD_LANE = 1; 
                           3317 ;	../../shared/src/cdr_dfe_scheme.c:643: reg_DFE_DC_LOAD_LANE = 0;
                           3318 ;	../../shared/src/cdr_dfe_scheme.c:644: reg_DFE_TAP_REFRESH_E_LANE = 1;
   9A4B 90 24 03           3319 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0003)
   9A4E E0                 3320 	movx	a,@dptr
   9A4F 44 20              3321 	orl	a,#0x20
   9A51 F0                 3322 	movx	@dptr,a
   9A52 E0                 3323 	movx	a,@dptr
   9A53 54 DF              3324 	anl	a,#0xdf
   9A55 F0                 3325 	movx	@dptr,a
   9A56 E0                 3326 	movx	a,@dptr
   9A57 44 02              3327 	orl	a,#0x02
   9A59 F0                 3328 	movx	@dptr,a
                           3329 ;	../../shared/src/cdr_dfe_scheme.c:645: reg_DFE_TAP_REFRESH_E_LANE = 0;
                           3330 ;	../../shared/src/cdr_dfe_scheme.c:646: reg_DFE_TAP_REFRESH_O_LANE = 1;
                           3331 ;	../../shared/src/cdr_dfe_scheme.c:647: reg_DFE_TAP_REFRESH_O_LANE = 0;
   9A5A 90 24 03           3332 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0003)
   9A5D E0                 3333 	movx	a,@dptr
   9A5E 54 FD              3334 	anl	a,#0xfd
   9A60 F0                 3335 	movx	@dptr,a
   9A61 E0                 3336 	movx	a,@dptr
   9A62 44 01              3337 	orl	a,#0x01
   9A64 F0                 3338 	movx	@dptr,a
   9A65 E0                 3339 	movx	a,@dptr
   9A66 54 FE              3340 	anl	a,#0xfe
   9A68 F0                 3341 	movx	@dptr,a
                           3342 ;	../../shared/src/cdr_dfe_scheme.c:649: timeout_start(100);
   9A69 75 8B 9C           3343 	mov	_TMR1,#0x9C
   9A6C 75 8D FF           3344 	mov	(_TMR1 >> 8),#0xFF
   9A6F D2 8E              3345 	setb	_TR1
   9A71 C2 03              3346 	clr	_timeout
                           3347 ;	../../shared/src/cdr_dfe_scheme.c:650: while(1) {
   9A73                    3348 00108$:
                           3349 ;	../../shared/src/cdr_dfe_scheme.c:651: if(timeout) break;
   9A73 20 03 17           3350 	jb	_timeout,00110$
                           3351 ;	../../shared/src/cdr_dfe_scheme.c:652: if(reg_DFE_UPDATED_LANE) {
   9A76 90 24 0B           3352 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0003)
   9A79 E0                 3353 	movx	a,@dptr
   9A7A 30 E5 F6           3354 	jnb	acc.5,00108$
                           3355 ;	../../shared/src/cdr_dfe_scheme.c:653: short_delay();
   9A7D 78 05              3356 	mov	r0,#_short_delay
   9A7F 79 C0              3357 	mov	r1,#(_short_delay >> 8)
   9A81 7A 02              3358 	mov	r2,#(_short_delay >> 16)
   9A83 12 00 B3           3359 	lcall	__sdcc_banked_call
                           3360 ;	../../shared/src/cdr_dfe_scheme.c:654: if(reg_DFE_UPDATED_LANE ) break;
   9A86 90 24 0B           3361 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0003)
   9A89 E0                 3362 	movx	a,@dptr
   9A8A 30 E5 E6           3363 	jnb	acc.5,00108$
   9A8D                    3364 00110$:
   9A8D 02 00 C5           3365 	ljmp	__sdcc_banked_ret
                           3366 ;------------------------------------------------------------
                           3367 ;Allocation info for local variables in function 'get_ec_voltage'
                           3368 ;------------------------------------------------------------
                           3369 ;f0                        Allocated to registers 
                           3370 ;f0_min                    Allocated to registers r2 
                           3371 ;------------------------------------------------------------
                           3372 ;	../../shared/src/cdr_dfe_scheme.c:673: uint8_t get_ec_voltage() BANKING_CTRL {
                           3373 ;	-----------------------------------------
                           3374 ;	 function get_ec_voltage
                           3375 ;	-----------------------------------------
   9A90                    3376 _get_ec_voltage:
                           3377 ;	../../shared/src/cdr_dfe_scheme.c:678: f0_min =            cds28.f0d.d_p_e;
   9A90 90 61 58           3378 	mov	dptr,#(_cds28 + 0x0058)
   9A93 E0                 3379 	movx	a,@dptr
   9A94 FA                 3380 	mov	r2,a
                           3381 ;	../../shared/src/cdr_dfe_scheme.c:679: f0_min = min(f0_min,cds28.f0d.d_n_e);
   9A95 90 61 59           3382 	mov	dptr,#(_cds28 + 0x0059)
   9A98 E0                 3383 	movx	a,@dptr
   9A99 FB                 3384 	mov	r3,a
   9A9A C0 03              3385 	push	ar3
   9A9C 8A 82              3386 	mov	dpl,r2
   9A9E 78 3B              3387 	mov	r0,#_min
   9AA0 79 C0              3388 	mov	r1,#(_min >> 8)
   9AA2 7A 02              3389 	mov	r2,#(_min >> 16)
   9AA4 12 00 B3           3390 	lcall	__sdcc_banked_call
   9AA7 AB 82              3391 	mov	r3,dpl
   9AA9 15 81              3392 	dec	sp
   9AAB 8B 02              3393 	mov	ar2,r3
                           3394 ;	../../shared/src/cdr_dfe_scheme.c:680: f0_min = min(f0_min,cds28.f0d.s_p_e);
   9AAD 90 61 5A           3395 	mov	dptr,#(_cds28 + 0x005a)
   9AB0 E0                 3396 	movx	a,@dptr
   9AB1 FB                 3397 	mov	r3,a
   9AB2 C0 03              3398 	push	ar3
   9AB4 8A 82              3399 	mov	dpl,r2
   9AB6 78 3B              3400 	mov	r0,#_min
   9AB8 79 C0              3401 	mov	r1,#(_min >> 8)
   9ABA 7A 02              3402 	mov	r2,#(_min >> 16)
   9ABC 12 00 B3           3403 	lcall	__sdcc_banked_call
   9ABF AB 82              3404 	mov	r3,dpl
   9AC1 15 81              3405 	dec	sp
   9AC3 8B 02              3406 	mov	ar2,r3
                           3407 ;	../../shared/src/cdr_dfe_scheme.c:681: f0_min = min(f0_min,cds28.f0d.s_n_e);
   9AC5 90 61 5B           3408 	mov	dptr,#(_cds28 + 0x005b)
   9AC8 E0                 3409 	movx	a,@dptr
   9AC9 FB                 3410 	mov	r3,a
   9ACA C0 03              3411 	push	ar3
   9ACC 8A 82              3412 	mov	dpl,r2
   9ACE 78 3B              3413 	mov	r0,#_min
   9AD0 79 C0              3414 	mov	r1,#(_min >> 8)
   9AD2 7A 02              3415 	mov	r2,#(_min >> 16)
   9AD4 12 00 B3           3416 	lcall	__sdcc_banked_call
   9AD7 AB 82              3417 	mov	r3,dpl
   9AD9 15 81              3418 	dec	sp
   9ADB 8B 02              3419 	mov	ar2,r3
                           3420 ;	../../shared/src/cdr_dfe_scheme.c:682: f0_min = min(f0_min,cds28.f0d.d_p_o);
   9ADD 90 61 5C           3421 	mov	dptr,#(_cds28 + 0x005c)
   9AE0 E0                 3422 	movx	a,@dptr
   9AE1 FB                 3423 	mov	r3,a
   9AE2 C0 03              3424 	push	ar3
   9AE4 8A 82              3425 	mov	dpl,r2
   9AE6 78 3B              3426 	mov	r0,#_min
   9AE8 79 C0              3427 	mov	r1,#(_min >> 8)
   9AEA 7A 02              3428 	mov	r2,#(_min >> 16)
   9AEC 12 00 B3           3429 	lcall	__sdcc_banked_call
   9AEF AB 82              3430 	mov	r3,dpl
   9AF1 15 81              3431 	dec	sp
   9AF3 8B 02              3432 	mov	ar2,r3
                           3433 ;	../../shared/src/cdr_dfe_scheme.c:683: f0_min = min(f0_min,cds28.f0d.d_n_o);
   9AF5 90 61 5D           3434 	mov	dptr,#(_cds28 + 0x005d)
   9AF8 E0                 3435 	movx	a,@dptr
   9AF9 FB                 3436 	mov	r3,a
   9AFA C0 03              3437 	push	ar3
   9AFC 8A 82              3438 	mov	dpl,r2
   9AFE 78 3B              3439 	mov	r0,#_min
   9B00 79 C0              3440 	mov	r1,#(_min >> 8)
   9B02 7A 02              3441 	mov	r2,#(_min >> 16)
   9B04 12 00 B3           3442 	lcall	__sdcc_banked_call
   9B07 AB 82              3443 	mov	r3,dpl
   9B09 15 81              3444 	dec	sp
   9B0B 8B 02              3445 	mov	ar2,r3
                           3446 ;	../../shared/src/cdr_dfe_scheme.c:684: f0_min = min(f0_min,cds28.f0d.s_p_o);
   9B0D 90 61 5E           3447 	mov	dptr,#(_cds28 + 0x005e)
   9B10 E0                 3448 	movx	a,@dptr
   9B11 FB                 3449 	mov	r3,a
   9B12 C0 03              3450 	push	ar3
   9B14 8A 82              3451 	mov	dpl,r2
   9B16 78 3B              3452 	mov	r0,#_min
   9B18 79 C0              3453 	mov	r1,#(_min >> 8)
   9B1A 7A 02              3454 	mov	r2,#(_min >> 16)
   9B1C 12 00 B3           3455 	lcall	__sdcc_banked_call
   9B1F AB 82              3456 	mov	r3,dpl
   9B21 15 81              3457 	dec	sp
   9B23 8B 02              3458 	mov	ar2,r3
                           3459 ;	../../shared/src/cdr_dfe_scheme.c:685: f0_min = min(f0_min,cds28.f0d.s_n_o);
   9B25 90 61 5F           3460 	mov	dptr,#(_cds28 + 0x005f)
   9B28 E0                 3461 	movx	a,@dptr
   9B29 FB                 3462 	mov	r3,a
   9B2A C0 03              3463 	push	ar3
   9B2C 8A 82              3464 	mov	dpl,r2
   9B2E 78 3B              3465 	mov	r0,#_min
   9B30 79 C0              3466 	mov	r1,#(_min >> 8)
   9B32 7A 02              3467 	mov	r2,#(_min >> 16)
   9B34 12 00 B3           3468 	lcall	__sdcc_banked_call
   9B37 AB 82              3469 	mov	r3,dpl
   9B39 15 81              3470 	dec	sp
   9B3B 8B 02              3471 	mov	ar2,r3
                           3472 ;	../../shared/src/cdr_dfe_scheme.c:698: f0 = (f0_min >> tag_EYE_CHK_THRESH_K) + tag_EYE_CHK_THRESH_C;
   9B3D 90 E6 AF           3473 	mov	dptr,#(_CDS_EYE_CLK_THR + 0x0003)
   9B40 E0                 3474 	movx	a,@dptr
   9B41 C4                 3475 	swap	a
   9B42 54 0F              3476 	anl	a,#0x0f
   9B44 FB                 3477 	mov	r3,a
   9B45 8B F0              3478 	mov	b,r3
   9B47 05 F0              3479 	inc	b
   9B49 EA                 3480 	mov	a,r2
   9B4A 80 02              3481 	sjmp	00104$
   9B4C                    3482 00103$:
   9B4C C3                 3483 	clr	c
   9B4D 13                 3484 	rrc	a
   9B4E                    3485 00104$:
   9B4E D5 F0 FB           3486 	djnz	b,00103$
   9B51 FA                 3487 	mov	r2,a
   9B52 90 E6 AF           3488 	mov	dptr,#(_CDS_EYE_CLK_THR + 0x0003)
   9B55 E0                 3489 	movx	a,@dptr
   9B56 54 0F              3490 	anl	a,#0x0f
   9B58 FB                 3491 	mov	r3,a
   9B59 2A                 3492 	add	a,r2
   9B5A FA                 3493 	mov	r2,a
   9B5B F5 82              3494 	mov	dpl,a
                           3495 ;	../../shared/src/cdr_dfe_scheme.c:699: return f0;
   9B5D 02 00 C5           3496 	ljmp	__sdcc_banked_ret
                           3497 	.area CSEG    (CODE)
                           3498 	.area CSEG    (CODE)
   00DE                    3499 _cds_table:
   00DE D3 15              3500 	.byte #0xD3,#0x15	; 5587
   00E0 D3 11              3501 	.byte #0xD3,#0x11	; 4563
   00E2 10 03              3502 	.byte #0x10,#0x03	; 784
   00E4 D7 75              3503 	.byte #0xD7,#0x75	; 30167
   00E6 90 55              3504 	.byte #0x90,#0x55	; 21904
   00E8 00 40              3505 	.byte #0x00,#0x40	; 16384
   00EA 00 02              3506 	.byte #0x00,#0x02	; 512
   00EC 80 01              3507 	.byte #0x80,#0x01	; 384
   00EE 00 10              3508 	.byte #0x00,#0x10	; 4096
   00F0 D3 01              3509 	.byte #0xD3,#0x01	; 467
   00F2 93 00              3510 	.byte #0x93,#0x00	; 147
   00F4 D7 55              3511 	.byte #0xD7,#0x55	; 21975
   00F6 D3 05              3512 	.byte #0xD3,#0x05	; 1491
                           3513 	.area CABS    (ABS,CODE)
