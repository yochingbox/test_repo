                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:28 2018
                              5 ;--------------------------------------------------------
                              6 	.module phy_init
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _refclk_tb
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
                            980 	.globl _clear_xdata
                            981 	.globl _init_xdata
                            982 	.globl _init_irq
                            983 	.globl _init_reg
                            984 	.globl _reset_pwr_reg
                            985 	.globl _set_timer_cnt
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
                           1123 ; internal ram data
                           1124 ;--------------------------------------------------------
                           1125 	.area DSEG    (DATA)
                           1126 ;--------------------------------------------------------
                           1127 ; overlayable items in internal ram 
                           1128 ;--------------------------------------------------------
                           1129 	.area OSEG    (OVR,DATA)
                           1130 ;--------------------------------------------------------
                           1131 ; indirectly addressable internal ram data
                           1132 ;--------------------------------------------------------
                           1133 	.area ISEG    (DATA)
                           1134 ;--------------------------------------------------------
                           1135 ; absolute internal ram data
                           1136 ;--------------------------------------------------------
                           1137 	.area IABS    (ABS,DATA)
                           1138 	.area IABS    (ABS,DATA)
                           1139 ;--------------------------------------------------------
                           1140 ; bit data
                           1141 ;--------------------------------------------------------
                           1142 	.area BSEG    (BIT)
                           1143 ;--------------------------------------------------------
                           1144 ; paged external ram data
                           1145 ;--------------------------------------------------------
                           1146 	.area PSEG    (PAG,XDATA)
                           1147 ;--------------------------------------------------------
                           1148 ; external ram data
                           1149 ;--------------------------------------------------------
                           1150 	.area XSEG    (XDATA)
                    1000   1151 _UPHY14_TRX_LANEPLL_ANAREG_TOP_128	=	0x1000
                    1004   1152 _UPHY14_TRX_LANEPLL_ANAREG_TOP_129	=	0x1004
                    1008   1153 _UPHY14_TRX_LANEPLL_ANAREG_TOP_130	=	0x1008
                    100C   1154 _UPHY14_TRX_LANEPLL_ANAREG_TOP_131	=	0x100c
                    1010   1155 _UPHY14_TRX_LANEPLL_ANAREG_TOP_132	=	0x1010
                    1014   1156 _UPHY14_TRX_LANEPLL_ANAREG_TOP_133	=	0x1014
                    1018   1157 _UPHY14_TRX_LANEPLL_ANAREG_TOP_134	=	0x1018
                    101C   1158 _UPHY14_TRX_LANEPLL_ANAREG_TOP_135	=	0x101c
                    1020   1159 _UPHY14_TRX_LANEPLL_ANAREG_TOP_136	=	0x1020
                    1024   1160 _UPHY14_TRX_LANEPLL_ANAREG_TOP_137	=	0x1024
                    1028   1161 _UPHY14_TRX_LANEPLL_ANAREG_TOP_138	=	0x1028
                    102C   1162 _UPHY14_TRX_LANEPLL_ANAREG_TOP_139	=	0x102c
                    1030   1163 _UPHY14_TRX_LANEPLL_ANAREG_TOP_140	=	0x1030
                    1034   1164 _UPHY14_TRX_LANEPLL_ANAREG_TOP_141	=	0x1034
                    1038   1165 _UPHY14_TRX_LANEPLL_ANAREG_TOP_142	=	0x1038
                    103C   1166 _UPHY14_TRX_LANEPLL_ANAREG_TOP_143	=	0x103c
                    0200   1167 _UPHY14_TRX_ANAREG_TOP_128	=	0x0200
                    0204   1168 _UPHY14_TRX_ANAREG_TOP_129	=	0x0204
                    0208   1169 _UPHY14_TRX_ANAREG_TOP_130	=	0x0208
                    020C   1170 _UPHY14_TRX_ANAREG_TOP_131	=	0x020c
                    0210   1171 _UPHY14_TRX_ANAREG_TOP_132	=	0x0210
                    0214   1172 _UPHY14_TRX_ANAREG_TOP_133	=	0x0214
                    0218   1173 _UPHY14_TRX_ANAREG_TOP_134	=	0x0218
                    021C   1174 _UPHY14_TRX_ANAREG_TOP_135	=	0x021c
                    0220   1175 _UPHY14_TRX_ANAREG_TOP_136	=	0x0220
                    0224   1176 _UPHY14_TRX_ANAREG_TOP_137	=	0x0224
                    0228   1177 _UPHY14_TRX_ANAREG_TOP_138	=	0x0228
                    022C   1178 _UPHY14_TRX_ANAREG_TOP_139	=	0x022c
                    0230   1179 _UPHY14_TRX_ANAREG_TOP_140	=	0x0230
                    0234   1180 _UPHY14_TRX_ANAREG_TOP_141	=	0x0234
                    0238   1181 _UPHY14_TRX_ANAREG_TOP_142	=	0x0238
                    023C   1182 _UPHY14_TRX_ANAREG_TOP_143	=	0x023c
                    0240   1183 _UPHY14_TRX_ANAREG_TOP_144	=	0x0240
                    0244   1184 _UPHY14_TRX_ANAREG_TOP_145	=	0x0244
                    0248   1185 _UPHY14_TRX_ANAREG_TOP_146	=	0x0248
                    024C   1186 _UPHY14_TRX_ANAREG_TOP_147	=	0x024c
                    0250   1187 _UPHY14_TRX_ANAREG_TOP_148	=	0x0250
                    0254   1188 _UPHY14_TRX_ANAREG_TOP_149	=	0x0254
                    0258   1189 _UPHY14_TRX_ANAREG_TOP_150	=	0x0258
                    025C   1190 _UPHY14_TRX_ANAREG_TOP_151	=	0x025c
                    0260   1191 _UPHY14_TRX_ANAREG_TOP_152	=	0x0260
                    0264   1192 _UPHY14_TRX_ANAREG_TOP_153	=	0x0264
                    0268   1193 _UPHY14_TRX_ANAREG_TOP_154	=	0x0268
                    026C   1194 _UPHY14_TRX_ANAREG_TOP_155	=	0x026c
                    0270   1195 _UPHY14_TRX_ANAREG_TOP_156	=	0x0270
                    0274   1196 _UPHY14_TRX_ANAREG_TOP_157	=	0x0274
                    0000   1197 _UPHY14_TRX_ANAREG_BOT_0	=	0x0000
                    0004   1198 _UPHY14_TRX_ANAREG_BOT_1	=	0x0004
                    0008   1199 _UPHY14_TRX_ANAREG_BOT_2	=	0x0008
                    000C   1200 _UPHY14_TRX_ANAREG_BOT_3	=	0x000c
                    0010   1201 _UPHY14_TRX_ANAREG_BOT_4	=	0x0010
                    0014   1202 _UPHY14_TRX_ANAREG_BOT_5	=	0x0014
                    0018   1203 _UPHY14_TRX_ANAREG_BOT_6	=	0x0018
                    001C   1204 _UPHY14_TRX_ANAREG_BOT_7	=	0x001c
                    0020   1205 _UPHY14_TRX_ANAREG_BOT_8	=	0x0020
                    0024   1206 _UPHY14_TRX_ANAREG_BOT_9	=	0x0024
                    0028   1207 _UPHY14_TRX_ANAREG_BOT_10	=	0x0028
                    002C   1208 _UPHY14_TRX_ANAREG_BOT_11	=	0x002c
                    0030   1209 _UPHY14_TRX_ANAREG_BOT_12	=	0x0030
                    0034   1210 _UPHY14_TRX_ANAREG_BOT_13	=	0x0034
                    0038   1211 _UPHY14_TRX_ANAREG_BOT_14	=	0x0038
                    003C   1212 _UPHY14_TRX_ANAREG_BOT_15	=	0x003c
                    0040   1213 _UPHY14_TRX_ANAREG_BOT_16	=	0x0040
                    0044   1214 _UPHY14_TRX_ANAREG_BOT_17	=	0x0044
                    0048   1215 _UPHY14_TRX_ANAREG_BOT_18	=	0x0048
                    004C   1216 _UPHY14_TRX_ANAREG_BOT_19	=	0x004c
                    0050   1217 _UPHY14_TRX_ANAREG_BOT_20	=	0x0050
                    0054   1218 _UPHY14_TRX_ANAREG_BOT_21	=	0x0054
                    0058   1219 _UPHY14_TRX_ANAREG_BOT_22	=	0x0058
                    005C   1220 _UPHY14_TRX_ANAREG_BOT_23	=	0x005c
                    0060   1221 _UPHY14_TRX_ANAREG_BOT_24	=	0x0060
                    0064   1222 _UPHY14_TRX_ANAREG_BOT_25	=	0x0064
                    0068   1223 _UPHY14_TRX_ANAREG_BOT_26	=	0x0068
                    006C   1224 _UPHY14_TRX_ANAREG_BOT_27	=	0x006c
                    0070   1225 _UPHY14_TRX_ANAREG_BOT_28	=	0x0070
                    0074   1226 _UPHY14_TRX_ANAREG_BOT_29	=	0x0074
                    0078   1227 _UPHY14_TRX_ANAREG_BOT_30	=	0x0078
                    007C   1228 _UPHY14_TRX_ANAREG_BOT_31	=	0x007c
                    0080   1229 _UPHY14_TRX_ANAREG_BOT_32	=	0x0080
                    0478   1230 _ANA_DFEE_REG_1E	=	0x0478
                    047C   1231 _ANA_DFEE_REG_1F	=	0x047c
                    0480   1232 _ANA_DFEE_REG_20	=	0x0480
                    0484   1233 _ANA_DFEE_REG_21	=	0x0484
                    0488   1234 _ANA_DFEE_REG_22	=	0x0488
                    048C   1235 _ANA_DFEE_REG_23	=	0x048c
                    0490   1236 _ANA_DFEE_REG_24	=	0x0490
                    0494   1237 _ANA_DFEE_REG_25	=	0x0494
                    0498   1238 _ANA_DFEE_REG_26	=	0x0498
                    049C   1239 _ANA_DFEE_REG_27	=	0x049c
                    0400   1240 _ANA_DFEE_REG_00	=	0x0400
                    0404   1241 _ANA_DFEE_REG_01	=	0x0404
                    0408   1242 _ANA_DFEE_REG_02	=	0x0408
                    040C   1243 _ANA_DFEE_REG_03	=	0x040c
                    0410   1244 _ANA_DFEE_REG_04	=	0x0410
                    0414   1245 _ANA_DFEE_REG_05	=	0x0414
                    0418   1246 _ANA_DFEE_REG_06	=	0x0418
                    041C   1247 _ANA_DFEE_REG_07	=	0x041c
                    0420   1248 _ANA_DFEE_REG_08	=	0x0420
                    0424   1249 _ANA_DFEE_REG_09	=	0x0424
                    0428   1250 _ANA_DFEE_REG_0A	=	0x0428
                    042C   1251 _ANA_DFEE_REG_0B	=	0x042c
                    0430   1252 _ANA_DFEE_REG_0C	=	0x0430
                    0434   1253 _ANA_DFEE_REG_0D	=	0x0434
                    0438   1254 _ANA_DFEE_REG_0E	=	0x0438
                    043C   1255 _ANA_DFEE_REG_0F	=	0x043c
                    0440   1256 _ANA_DFEE_REG_10	=	0x0440
                    0444   1257 _ANA_DFEE_REG_11	=	0x0444
                    0448   1258 _ANA_DFEE_REG_12	=	0x0448
                    044C   1259 _ANA_DFEE_REG_13	=	0x044c
                    0450   1260 _ANA_DFEE_REG_14	=	0x0450
                    0454   1261 _ANA_DFEE_REG_15	=	0x0454
                    0458   1262 _ANA_DFEE_REG_16	=	0x0458
                    045C   1263 _ANA_DFEE_REG_17	=	0x045c
                    0460   1264 _ANA_DFEE_REG_18	=	0x0460
                    0464   1265 _ANA_DFEE_REG_19	=	0x0464
                    0468   1266 _ANA_DFEE_REG_1A	=	0x0468
                    046C   1267 _ANA_DFEE_REG_1B	=	0x046c
                    0470   1268 _ANA_DFEE_REG_1C	=	0x0470
                    0474   1269 _ANA_DFEE_REG_1D	=	0x0474
                    0830   1270 _ANA_DFEO_REG_0C	=	0x0830
                    0834   1271 _ANA_DFEO_REG_0D	=	0x0834
                    0838   1272 _ANA_DFEO_REG_0E	=	0x0838
                    083C   1273 _ANA_DFEO_REG_0F	=	0x083c
                    0840   1274 _ANA_DFEO_REG_10	=	0x0840
                    0844   1275 _ANA_DFEO_REG_11	=	0x0844
                    0848   1276 _ANA_DFEO_REG_12	=	0x0848
                    084C   1277 _ANA_DFEO_REG_13	=	0x084c
                    0850   1278 _ANA_DFEO_REG_14	=	0x0850
                    0854   1279 _ANA_DFEO_REG_15	=	0x0854
                    0858   1280 _ANA_DFEO_REG_16	=	0x0858
                    085C   1281 _ANA_DFEO_REG_17	=	0x085c
                    0860   1282 _ANA_DFEO_REG_18	=	0x0860
                    0864   1283 _ANA_DFEO_REG_19	=	0x0864
                    0868   1284 _ANA_DFEO_REG_1A	=	0x0868
                    086C   1285 _ANA_DFEO_REG_1B	=	0x086c
                    0870   1286 _ANA_DFEO_REG_1C	=	0x0870
                    0874   1287 _ANA_DFEO_REG_1D	=	0x0874
                    0878   1288 _ANA_DFEO_REG_1E	=	0x0878
                    087C   1289 _ANA_DFEO_REG_1F	=	0x087c
                    0880   1290 _ANA_DFEO_REG_20	=	0x0880
                    0884   1291 _ANA_DFEO_REG_21	=	0x0884
                    0888   1292 _ANA_DFEO_REG_22	=	0x0888
                    088C   1293 _ANA_DFEO_REG_23	=	0x088c
                    0890   1294 _ANA_DFEO_REG_24	=	0x0890
                    0894   1295 _ANA_DFEO_REG_25	=	0x0894
                    0898   1296 _ANA_DFEO_REG_26	=	0x0898
                    089C   1297 _ANA_DFEO_REG_27	=	0x089c
                    0800   1298 _ANA_DFEO_REG_00	=	0x0800
                    0804   1299 _ANA_DFEO_REG_01	=	0x0804
                    0808   1300 _ANA_DFEO_REG_02	=	0x0808
                    080C   1301 _ANA_DFEO_REG_03	=	0x080c
                    0810   1302 _ANA_DFEO_REG_04	=	0x0810
                    0814   1303 _ANA_DFEO_REG_05	=	0x0814
                    0818   1304 _ANA_DFEO_REG_06	=	0x0818
                    081C   1305 _ANA_DFEO_REG_07	=	0x081c
                    0820   1306 _ANA_DFEO_REG_08	=	0x0820
                    0824   1307 _ANA_DFEO_REG_09	=	0x0824
                    0828   1308 _ANA_DFEO_REG_0A	=	0x0828
                    082C   1309 _ANA_DFEO_REG_0B	=	0x082c
                    8200   1310 _UPHY14_CMN_ANAREG_TOP_128	=	0x8200
                    8204   1311 _UPHY14_CMN_ANAREG_TOP_129	=	0x8204
                    8208   1312 _UPHY14_CMN_ANAREG_TOP_130	=	0x8208
                    820C   1313 _UPHY14_CMN_ANAREG_TOP_131	=	0x820c
                    8210   1314 _UPHY14_CMN_ANAREG_TOP_132	=	0x8210
                    8214   1315 _UPHY14_CMN_ANAREG_TOP_133	=	0x8214
                    8218   1316 _UPHY14_CMN_ANAREG_TOP_134	=	0x8218
                    821C   1317 _UPHY14_CMN_ANAREG_TOP_135	=	0x821c
                    8220   1318 _UPHY14_CMN_ANAREG_TOP_136	=	0x8220
                    8224   1319 _UPHY14_CMN_ANAREG_TOP_137	=	0x8224
                    8228   1320 _UPHY14_CMN_ANAREG_TOP_138	=	0x8228
                    822C   1321 _UPHY14_CMN_ANAREG_TOP_139	=	0x822c
                    8230   1322 _UPHY14_CMN_ANAREG_TOP_140	=	0x8230
                    8234   1323 _UPHY14_CMN_ANAREG_TOP_141	=	0x8234
                    8238   1324 _UPHY14_CMN_ANAREG_TOP_142	=	0x8238
                    823C   1325 _UPHY14_CMN_ANAREG_TOP_143	=	0x823c
                    8240   1326 _UPHY14_CMN_ANAREG_TOP_144	=	0x8240
                    8244   1327 _UPHY14_CMN_ANAREG_TOP_145	=	0x8244
                    8248   1328 _UPHY14_CMN_ANAREG_TOP_146	=	0x8248
                    824C   1329 _UPHY14_CMN_ANAREG_TOP_147	=	0x824c
                    8250   1330 _UPHY14_CMN_ANAREG_TOP_148	=	0x8250
                    8254   1331 _UPHY14_CMN_ANAREG_TOP_149	=	0x8254
                    8258   1332 _UPHY14_CMN_ANAREG_TOP_150	=	0x8258
                    825C   1333 _UPHY14_CMN_ANAREG_TOP_151	=	0x825c
                    8260   1334 _UPHY14_CMN_ANAREG_TOP_152	=	0x8260
                    8264   1335 _UPHY14_CMN_ANAREG_TOP_153	=	0x8264
                    8268   1336 _UPHY14_CMN_ANAREG_TOP_154	=	0x8268
                    826C   1337 _UPHY14_CMN_ANAREG_TOP_155	=	0x826c
                    8270   1338 _UPHY14_CMN_ANAREG_TOP_156	=	0x8270
                    8274   1339 _UPHY14_CMN_ANAREG_TOP_157	=	0x8274
                    8278   1340 _UPHY14_CMN_ANAREG_TOP_158	=	0x8278
                    827C   1341 _UPHY14_CMN_ANAREG_TOP_159	=	0x827c
                    8280   1342 _UPHY14_CMN_ANAREG_TOP_160	=	0x8280
                    8284   1343 _UPHY14_CMN_ANAREG_TOP_161	=	0x8284
                    8288   1344 _UPHY14_CMN_ANAREG_TOP_162	=	0x8288
                    828C   1345 _UPHY14_CMN_ANAREG_TOP_163	=	0x828c
                    8290   1346 _UPHY14_CMN_ANAREG_TOP_164	=	0x8290
                    8294   1347 _UPHY14_CMN_ANAREG_TOP_165	=	0x8294
                    8298   1348 _UPHY14_CMN_ANAREG_TOP_166	=	0x8298
                    829C   1349 _UPHY14_CMN_ANAREG_TOP_167	=	0x829c
                    82A0   1350 _UPHY14_CMN_ANAREG_TOP_168	=	0x82a0
                    82A4   1351 _UPHY14_CMN_ANAREG_TOP_169	=	0x82a4
                    82A8   1352 _UPHY14_CMN_ANAREG_TOP_170	=	0x82a8
                    82AC   1353 _UPHY14_CMN_ANAREG_TOP_171	=	0x82ac
                    82B0   1354 _UPHY14_CMN_ANAREG_TOP_172	=	0x82b0
                    82B4   1355 _UPHY14_CMN_ANAREG_TOP_173	=	0x82b4
                    82B8   1356 _UPHY14_CMN_ANAREG_TOP_174	=	0x82b8
                    82BC   1357 _UPHY14_CMN_ANAREG_TOP_175	=	0x82bc
                    82C0   1358 _UPHY14_CMN_ANAREG_TOP_176	=	0x82c0
                    82C4   1359 _UPHY14_CMN_ANAREG_TOP_177	=	0x82c4
                    82C8   1360 _UPHY14_CMN_ANAREG_TOP_178	=	0x82c8
                    82CC   1361 _UPHY14_CMN_ANAREG_TOP_179	=	0x82cc
                    82D0   1362 _UPHY14_CMN_ANAREG_TOP_180	=	0x82d0
                    82D4   1363 _UPHY14_CMN_ANAREG_TOP_181	=	0x82d4
                    82D8   1364 _UPHY14_CMN_ANAREG_TOP_182	=	0x82d8
                    82DC   1365 _UPHY14_CMN_ANAREG_TOP_183	=	0x82dc
                    82E0   1366 _UPHY14_CMN_ANAREG_TOP_184	=	0x82e0
                    82E4   1367 _UPHY14_CMN_ANAREG_TOP_185	=	0x82e4
                    82E8   1368 _UPHY14_CMN_ANAREG_TOP_186	=	0x82e8
                    82EC   1369 _UPHY14_CMN_ANAREG_TOP_187	=	0x82ec
                    82F0   1370 _UPHY14_CMN_ANAREG_TOP_188	=	0x82f0
                    82F4   1371 _UPHY14_CMN_ANAREG_TOP_189	=	0x82f4
                    82F8   1372 _UPHY14_CMN_ANAREG_TOP_190	=	0x82f8
                    82FC   1373 _UPHY14_CMN_ANAREG_TOP_191	=	0x82fc
                    8300   1374 _UPHY14_CMN_ANAREG_TOP_192	=	0x8300
                    8304   1375 _UPHY14_CMN_ANAREG_TOP_193	=	0x8304
                    8308   1376 _UPHY14_CMN_ANAREG_TOP_194	=	0x8308
                    830C   1377 _UPHY14_CMN_ANAREG_TOP_195	=	0x830c
                    8310   1378 _UPHY14_CMN_ANAREG_TOP_196	=	0x8310
                    8314   1379 _UPHY14_CMN_ANAREG_TOP_197	=	0x8314
                    8318   1380 _UPHY14_CMN_ANAREG_TOP_198	=	0x8318
                    831C   1381 _UPHY14_CMN_ANAREG_TOP_199	=	0x831c
                    8320   1382 _UPHY14_CMN_ANAREG_TOP_200	=	0x8320
                    8324   1383 _UPHY14_CMN_ANAREG_TOP_201	=	0x8324
                    8328   1384 _UPHY14_CMN_ANAREG_TOP_202	=	0x8328
                    832C   1385 _UPHY14_CMN_ANAREG_TOP_203	=	0x832c
                    8330   1386 _UPHY14_CMN_ANAREG_TOP_204	=	0x8330
                    8334   1387 _UPHY14_CMN_ANAREG_TOP_205	=	0x8334
                    8338   1388 _UPHY14_CMN_ANAREG_TOP_206	=	0x8338
                    833C   1389 _UPHY14_CMN_ANAREG_TOP_207	=	0x833c
                    8340   1390 _UPHY14_CMN_ANAREG_TOP_208	=	0x8340
                    8344   1391 _UPHY14_CMN_ANAREG_TOP_209	=	0x8344
                    8348   1392 _UPHY14_CMN_ANAREG_TOP_210	=	0x8348
                    834C   1393 _UPHY14_CMN_ANAREG_TOP_211	=	0x834c
                    8350   1394 _UPHY14_CMN_ANAREG_TOP_212	=	0x8350
                    8354   1395 _UPHY14_CMN_ANAREG_TOP_213	=	0x8354
                    8358   1396 _UPHY14_CMN_ANAREG_TOP_214	=	0x8358
                    2000   1397 _PM_CTRL_TX_LANE_REG1_LANE	=	0x2000
                    2004   1398 _PM_CTRL_TX_LANE_REG2_LANE	=	0x2004
                    2008   1399 _INPUT_TX_PIN_REG0_LANE	=	0x2008
                    200C   1400 _INPUT_TX_PIN_REG1_LANE	=	0x200c
                    2010   1401 _INPUT_TX_PIN_REG2_LANE	=	0x2010
                    2014   1402 _INPUT_TX_PIN_REG3_LANE	=	0x2014
                    2018   1403 _PM_CTRL_INTERRUPT_REG1_LANE	=	0x2018
                    201C   1404 _PM_CTRL_INTERRUPT_REG2	=	0x201c
                    2020   1405 _CLKGEN_TX_LANE_REG1_LANE	=	0x2020
                    2024   1406 _TX_SPEED_CONVERT_LANE	=	0x2024
                    2028   1407 _SPD_CTRL_INTERRUPT_REG1_LANE	=	0x2028
                    202C   1408 _SPD_CTRL_INTERRUPT_REG2	=	0x202c
                    2030   1409 _SPD_CTRL_TX_LANE_REG1_LANE	=	0x2030
                    2034   1410 _TX_SYSTEM_LANE	=	0x2034
                    203C   1411 _INPUT_TX_PIN_REG4_LANE	=	0x203c
                    2040   1412 _TX_CALIBRATION_LANE	=	0x2040
                    2044   1413 _DIG_TX_RSVD_REG0	=	0x2044
                    2048   1414 _INPUT_TX_PIN_REG5_LANE	=	0x2048
                    204C   1415 __FIELDNAME__LANE	=	0x204c
                    2050   1416 _PM_CTRL_INTERRUPT_ISR_REG1_LANE	=	0x2050
                    2054   1417 _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE	=	0x2054
                    2058   1418 _ANALOG_TX_REALTIME_REG_1	=	0x2058
                    205C   1419 _MON_TOP	=	0x205c
                    2100   1420 _PM_CTRL_RX_LANE_REG1_LANE	=	0x2100
                    2104   1421 _RX_SYSTEM_LANE	=	0x2104
                    2108   1422 _INPUT_RX_PIN_REG0_LANE	=	0x2108
                    210C   1423 _INPUT_RX_PIN_REG1_LANE	=	0x210c
                    2110   1424 _INPUT_RX_PIN_REG2_LANE	=	0x2110
                    2114   1425 _SPD_CTRL_RX_LANE_REG1_LANE	=	0x2114
                    2118   1426 _DIG_RX_RSVD_REG0	=	0x2118
                    211C   1427 _CLKGEN_RX_LANE_REG1_LANE	=	0x211c
                    2120   1428 _FRAME_SYNC_DET_REG0	=	0x2120
                    2124   1429 _FRAME_SYNC_DET_REG1	=	0x2124
                    2128   1430 _FRAME_SYNC_DET_REG2	=	0x2128
                    212C   1431 _FRAME_SYNC_DET_REG3	=	0x212c
                    2130   1432 _FRAME_SYNC_DET_REG4	=	0x2130
                    2134   1433 _FRAME_SYNC_DET_REG5	=	0x2134
                    2138   1434 _FRAME_SYNC_DET_REG6	=	0x2138
                    213C   1435 _CDR_LOCK_REG	=	0x213c
                    2140   1436 _RX_LANE_INTERRUPT	=	0x2140
                    2144   1437 _RX_LANE_INTERRUPT_MASK	=	0x2144
                    2148   1438 _RX_DATA_PATH_REG	=	0x2148
                    214C   1439 _INPUT_RX_PIN_REG3_LANE	=	0x214c
                    2150   1440 _RX_CALIBRATION_REG	=	0x2150
                    2158   1441 _RX_LANE_INTERRUPT_REG1	=	0x2158
                    2160   1442 _DTL_REG0	=	0x2160
                    2164   1443 _DTL_REG1	=	0x2164
                    2168   1444 _DTL_REG2	=	0x2168
                    216C   1445 _DTL_REG3	=	0x216c
                    2170   1446 _SQ_REG0	=	0x2170
                    4000   1447 _LANE_CFG0	=	0x4000
                    4004   1448 _LANE_STATUS0	=	0x4004
                    4008   1449 _LANE_CFG_STATUS2_LANE	=	0x4008
                    400C   1450 _LANE_CFG2_LANE	=	0x400c
                    4010   1451 _LANE_CFG4	=	0x4010
                    4014   1452 _LANE_CFG_STATUS3_LANE	=	0x4014
                    4018   1453 _LANE_DP_PIE8_CFG0_LANE	=	0x4018
                    401C   1454 _LANE_USB_DP_CFG1_LANE	=	0x401c
                    4020   1455 _LANE_USB_DP_CFG2_LANE	=	0x4020
                    4024   1456 _LANE_EQ_CFG0_LANE	=	0x4024
                    4028   1457 _LANE_EQ_CFG1_LANE	=	0x4028
                    402C   1458 _LANE_PRESET_CFG0_LANE	=	0x402c
                    4030   1459 _LANE_PRESET_CFG2_LANE	=	0x4030
                    4034   1460 _LANE_PRESET_CFG4_LANE	=	0x4034
                    4038   1461 _LANE_PRESET_CFG6_LANE	=	0x4038
                    403C   1462 _LANE_PRESET_CFG8_LANE	=	0x403c
                    4040   1463 _LANE_PRESET_CFG10_LANE	=	0x4040
                    4044   1464 _LANE_PRESET_CFG12_LANE	=	0x4044
                    4048   1465 _LANE_PRESET_CFG14_LANE	=	0x4048
                    404C   1466 _LANE_PRESET_CFG16_LANE	=	0x404c
                    4050   1467 _LANE_COEFF_MAX0_LANE	=	0x4050
                    4054   1468 _LANE_REMOTE_SET_LANE	=	0x4054
                    4058   1469 _LANE_EQ_16G_CFG0_LANE	=	0x4058
                    405C   1470 _LANE_16G_PRESET_CFG0_LANE	=	0x405c
                    4060   1471 _LANE_16G_PRESET_CFG2_LANE	=	0x4060
                    4064   1472 _LANE_16G_PRESET_CFG4_LANE	=	0x4064
                    4068   1473 _LANE_16G_PRESET_CFG6_LANE	=	0x4068
                    406C   1474 _LANE_16G_PRESET_CFG8_LANE	=	0x406c
                    4070   1475 _LANE_16G_PRESET_CFG10_LANE	=	0x4070
                    4074   1476 _LANE_16G_PRESET_CFG12_LANE	=	0x4074
                    4078   1477 _LANE_16G_PRESET_CFG14_LANE	=	0x4078
                    407C   1478 _LANE_16G_PRESET_CFG16_LANE	=	0x407c
                    4080   1479 _LANE_EQ_32G_CFG0_LANE	=	0x4080
                    4084   1480 _LANE_32G_PRESET_CFG0_LANE	=	0x4084
                    4088   1481 _LANE_32G_PRESET_CFG2_LANE	=	0x4088
                    408C   1482 _LANE_32G_PRESET_CFG4_LANE	=	0x408c
                    4090   1483 _LANE_32G_PRESET_CFG6_LANE	=	0x4090
                    4094   1484 _LANE_32G_PRESET_CFG8_LANE	=	0x4094
                    4098   1485 _LANE_32G_PRESET_CFG10_LANE	=	0x4098
                    409C   1486 _LANE_32G_PRESET_CFG12_LANE	=	0x409c
                    40A0   1487 _LANE_32G_PRESET_CFG14_LANE	=	0x40a0
                    40A4   1488 _LANE_32G_PRESET_CFG16_LANE	=	0x40a4
                    2200   1489 _MCU_CONTROL_LANE	=	0x2200
                    2204   1490 _MCU_GPIO	=	0x2204
                    2208   1491 _CACHE_DEBUG0	=	0x2208
                    220C   1492 _CACHE_DEBUG1	=	0x220c
                    2210   1493 _LANE_SYSTEM0	=	0x2210
                    2230   1494 _MCU_STATUS0_LANE	=	0x2230
                    2234   1495 _MCU_STATUS1_LANE	=	0x2234
                    2238   1496 _MCU_STATUS2_LANE	=	0x2238
                    223C   1497 _MCU_STATUS3_LANE	=	0x223c
                    2240   1498 _MCU_INT0_CONTROL	=	0x2240
                    2244   1499 _MCU_INT1_CONTROL	=	0x2244
                    2248   1500 _MCU_INT2_CONTROL	=	0x2248
                    224C   1501 _MCU_INT3_CONTROL	=	0x224c
                    2250   1502 _MCU_INT4_CONTROL	=	0x2250
                    2254   1503 _MCU_INT5_CONTROL	=	0x2254
                    2258   1504 _MCU_INT6_CONTROL	=	0x2258
                    225C   1505 _MCU_INT7_CONTROL	=	0x225c
                    2260   1506 _MCU_INT8_CONTROL	=	0x2260
                    2264   1507 _MCU_INT9_CONTROL	=	0x2264
                    2268   1508 _MCU_INT10_CONTROL	=	0x2268
                    226C   1509 _MCU_INT11_CONTROL	=	0x226c
                    2270   1510 _MCU_INT12_CONTROL	=	0x2270
                    2274   1511 _MCU_TIMER_CONTROL	=	0x2274
                    2278   1512 _MCU_TIMER0_CONTROL	=	0x2278
                    227C   1513 _MCU_TIMER1_CONTROL	=	0x227c
                    2280   1514 _MCU_TIMER2_CONTROL	=	0x2280
                    2284   1515 _MCU_TIMER3_CONTROL	=	0x2284
                    2288   1516 _MCU_IRQ_LANE	=	0x2288
                    228C   1517 _MCU_IRQ_MASK_LANE	=	0x228c
                    2290   1518 _MCU_MEM_REG1_LANE	=	0x2290
                    2294   1519 _MCU_MEM_REG2_LANE	=	0x2294
                    2298   1520 _MCU_TIMER_CTRL_1_LANE	=	0x2298
                    229C   1521 _MCU_TIMER_CTRL_2_LANE	=	0x229c
                    22A0   1522 _MCU_TIMER_CTRL_3_LANE	=	0x22a0
                    22A4   1523 _MCU_TIMER_CTRL_4_LANE	=	0x22a4
                    22A8   1524 _MCU_TIMER_CTRL_5_LANE	=	0x22a8
                    22AC   1525 _MCU_TIMER_CTRL_6_LANE	=	0x22ac
                    22B0   1526 _MCU_TIMER_CTRL_7_LANE	=	0x22b0
                    22B4   1527 _MCU_DEBUG0_LANE	=	0x22b4
                    22B8   1528 _MCU_DEBUG1_LANE	=	0x22b8
                    22BC   1529 _MCU_DEBUG2_LANE	=	0x22bc
                    22C0   1530 _MCU_DEBUG3_LANE	=	0x22c0
                    22C4   1531 _MCU_DEBUG_LANE	=	0x22c4
                    22C8   1532 _EXT_INT_CONTROL	=	0x22c8
                    22CC   1533 _ANA_IF_TRX_REG0	=	0x22cc
                    22D0   1534 _ANA_IF_DFEE_REG0	=	0x22d0
                    22D4   1535 _ANA_IF_DFEO_REG0	=	0x22d4
                    22D8   1536 _MCU_IRQ_ISR_LANE	=	0x22d8
                    22DC   1537 _MCU_WDT_LANE	=	0x22dc
                    22E0   1538 _MCU_INT_CONTROL_13	=	0x22e0
                    22E4   1539 _MCU_COMMAND0	=	0x22e4
                    22F4   1540 _MEM_ECC_ERR_ADDRESS0	=	0x22f4
                    22F8   1541 _XDATA_MEM_CHECKSUM_LANE0	=	0x22f8
                    22FC   1542 _XDATA_MEM_CHECKSUM_LANE1	=	0x22fc
                    2300   1543 _PT_CONTROL0	=	0x2300
                    2304   1544 _PT_CONTROL1	=	0x2304
                    2308   1545 _PT_USER_PATTERN0	=	0x2308
                    230C   1546 _PT_USER_PATTERN1	=	0x230c
                    2310   1547 _PT_USER_PATTERN2	=	0x2310
                    2314   1548 _PT_COUNTER0	=	0x2314
                    2318   1549 _PT_COUNTER1	=	0x2318
                    231C   1550 _PT_COUNTER2	=	0x231c
                    2400   1551 _DFE_CTRL_REG0	=	0x2400
                    2404   1552 _DFE_CTRL_REG1	=	0x2404
                    2408   1553 _DFE_CTRL_REG2	=	0x2408
                    240C   1554 _DFE_CTRL_REG3	=	0x240c
                    2410   1555 _RX_EQ_CLK_CTRL	=	0x2410
                    2414   1556 _DFE_CTRL_REG4	=	0x2414
                    2418   1557 _DFE_ANA_REG0	=	0x2418
                    241C   1558 _DFE_ANA_REG1	=	0x241c
                    2420   1559 _DFE_STEP_REG0	=	0x2420
                    2424   1560 _DFE_STEP_REG1	=	0x2424
                    2430   1561 _DFE_FEN_EVEN_REG	=	0x2430
                    2434   1562 _DFE_FEN_ODD_REG	=	0x2434
                    2438   1563 _DFE_DC_EVEN_REG8	=	0x2438
                    243C   1564 _DFE_DC_ODD_REG8	=	0x243c
                    2440   1565 _DFE_FEXT_EVEN_REG0	=	0x2440
                    2444   1566 _DFE_FEXT_EVEN_REG1	=	0x2444
                    2448   1567 _DFE_FEXT_EVEN_REG2	=	0x2448
                    244C   1568 _DFE_FEXT_EVEN_REG3	=	0x244c
                    2450   1569 _DFE_FEXT_EVEN_REG4	=	0x2450
                    2454   1570 _DFE_FEXT_EVEN_REG5	=	0x2454
                    2458   1571 _DFE_FEXT_EVEN_REG6	=	0x2458
                    245C   1572 _DFE_FEXT_EVEN_REG7	=	0x245c
                    2460   1573 _DFE_FEXT_ODD_REG0	=	0x2460
                    2464   1574 _DFE_FEXT_ODD_REG1	=	0x2464
                    2468   1575 _DFE_FEXT_ODD_REG2	=	0x2468
                    246C   1576 _DFE_FEXT_ODD_REG3	=	0x246c
                    2470   1577 _DFE_FEXT_ODD_REG4	=	0x2470
                    2474   1578 _DFE_FEXT_ODD_REG5	=	0x2474
                    2478   1579 _DFE_FEXT_ODD_REG6	=	0x2478
                    247C   1580 _DFE_FEXT_ODD_REG7	=	0x247c
                    2480   1581 _DFE_READ_EVEN_SM_REG0	=	0x2480
                    2484   1582 _DFE_READ_EVEN_SM_REG1	=	0x2484
                    2488   1583 _DFE_READ_EVEN_SM_REG2	=	0x2488
                    248C   1584 _DFE_READ_EVEN_SM_REG3	=	0x248c
                    2490   1585 _DFE_READ_EVEN_SM_REG4	=	0x2490
                    2494   1586 _DFE_READ_EVEN_SM_REG5	=	0x2494
                    2498   1587 _DFE_READ_EVEN_SM_REG6	=	0x2498
                    249C   1588 _DFE_READ_EVEN_SM_REG7	=	0x249c
                    24A0   1589 _DFE_READ_ODD_SM_REG0	=	0x24a0
                    24A4   1590 _DFE_READ_ODD_SM_REG1	=	0x24a4
                    24A8   1591 _DFE_READ_ODD_SM_REG2	=	0x24a8
                    24AC   1592 _DFE_READ_ODD_SM_REG3	=	0x24ac
                    24B0   1593 _DFE_READ_ODD_SM_REG4	=	0x24b0
                    24B4   1594 _DFE_READ_ODD_SM_REG5	=	0x24b4
                    24B8   1595 _DFE_READ_ODD_SM_REG6	=	0x24b8
                    24BC   1596 _DFE_READ_ODD_SM_REG7	=	0x24bc
                    24C0   1597 _DFE_READ_EVEN_SM_REG8	=	0x24c0
                    24C4   1598 _DFE_READ_ODD_SM_REG8	=	0x24c4
                    24D0   1599 _DFE_READ_EVEN_2C_REG0	=	0x24d0
                    24D4   1600 _DFE_READ_EVEN_2C_REG1	=	0x24d4
                    24D8   1601 _DFE_READ_EVEN_2C_REG2	=	0x24d8
                    24DC   1602 _DFE_READ_EVEN_2C_REG3	=	0x24dc
                    24E0   1603 _DFE_READ_EVEN_2C_REG4	=	0x24e0
                    24E4   1604 _DFE_READ_EVEN_2C_REG5	=	0x24e4
                    24E8   1605 _DFE_READ_EVEN_2C_REG6	=	0x24e8
                    24EC   1606 _DFE_READ_EVEN_2C_REG7	=	0x24ec
                    24F0   1607 _DFE_READ_ODD_2C_REG0	=	0x24f0
                    24F4   1608 _DFE_READ_ODD_2C_REG1	=	0x24f4
                    24F8   1609 _DFE_READ_ODD_2C_REG2	=	0x24f8
                    24FC   1610 _DFE_READ_ODD_2C_REG3	=	0x24fc
                    2500   1611 _DFE_READ_ODD_2C_REG4	=	0x2500
                    2504   1612 _DFE_READ_ODD_2C_REG5	=	0x2504
                    2508   1613 _DFE_READ_ODD_2C_REG6	=	0x2508
                    250C   1614 _DFE_READ_ODD_2C_REG7	=	0x250c
                    2510   1615 _DFE_READ_EVEN_2C_REG8	=	0x2510
                    2514   1616 _DFE_READ_ODD_2C_REG8	=	0x2514
                    2518   1617 _CAL_OFST_REG0	=	0x2518
                    251C   1618 _CAL_OFST_REG1	=	0x251c
                    2520   1619 _CAL_OFST_REG2	=	0x2520
                    2530   1620 _DFE_DCE_REG0	=	0x2530
                    2540   1621 _DFE_STATIC_LANE_REG0	=	0x2540
                    2544   1622 _DFE_STATIC_LANE_REG1	=	0x2544
                    2548   1623 _DFE_STATIC_LANE_REG3	=	0x2548
                    254C   1624 _DFE_STATIC_LANE_REG4	=	0x254c
                    2550   1625 _DFE_STATIC_LANE_REG5	=	0x2550
                    2554   1626 _DFE_STATIC_LANE_REG6	=	0x2554
                    2560   1627 _EOM_VLD_REG0	=	0x2560
                    2564   1628 _EOM_VLD_REG1	=	0x2564
                    2568   1629 _EOM_VLD_REG2	=	0x2568
                    256C   1630 _EOM_VLD_REG3	=	0x256c
                    2570   1631 _EOM_ERR_REG0	=	0x2570
                    2574   1632 _EOM_ERR_REG1	=	0x2574
                    2578   1633 _EOM_ERR_REG2	=	0x2578
                    257C   1634 _EOM_ERR_REG3	=	0x257c
                    2580   1635 _EOM_REG0	=	0x2580
                    25F0   1636 _EOM_VLD_REG4	=	0x25f0
                    25F4   1637 _LANE_MARGIN_REG0	=	0x25f4
                    6000   1638 _CAL_CTRL1_LANE	=	0x6000
                    6004   1639 _CAL_CTRL2_LANE	=	0x6004
                    6008   1640 _CAL_CTRL3_LANE	=	0x6008
                    600C   1641 _CAL_CTRL4_LANE	=	0x600c
                    6010   1642 _CAL_SAVE_DATA1_LANE	=	0x6010
                    6014   1643 _CAL_SAVE_DATA2_LANE	=	0x6014
                    6018   1644 _CAL_SAVE_DATA3_LANE	=	0x6018
                    601C   1645 _PHY_REMOTE_CTRL_COMMAND_LANE	=	0x601c
                    6020   1646 _PHY_REMOTE_CTRL_VALUE_LANE	=	0x6020
                    6024   1647 _PHY_LOCAL_VALUE_LANE	=	0x6024
                    6028   1648 _TRX_TRAIN_IF_TIMERS1_LANE	=	0x6028
                    602C   1649 _TRX_TRAIN_IF_TIMERS2_LANE	=	0x602c
                    6030   1650 _TRX_TRAIN_IF_TIMERS_ENABLE_LANE	=	0x6030
                    6034   1651 _DFE_CONTROL_0	=	0x6034
                    6038   1652 _DFE_CONTROL_1	=	0x6038
                    6040   1653 _DFE_CONTROL_2	=	0x6040
                    6044   1654 _DFE_CONTROL_3	=	0x6044
                    6048   1655 _DFE_CONTROL_4	=	0x6048
                    604C   1656 _DFE_CONTROL_5	=	0x604c
                    6050   1657 _TRAIN_CONTROL_0	=	0x6050
                    6054   1658 _TRAIN_CONTROL_1	=	0x6054
                    6058   1659 _TRAIN_CONTROL_2	=	0x6058
                    605C   1660 _RPTA_CONFIG_0	=	0x605c
                    6060   1661 _RPTA_CONFIG_1	=	0x6060
                    6064   1662 _DLL_CAL	=	0x6064
                    6068   1663 _TRAIN_PARA_0	=	0x6068
                    606C   1664 _TRAIN_PARA_1	=	0x606c
                    6070   1665 _TRAIN_PARA_2	=	0x6070
                    6074   1666 _TRAIN_PARA_3	=	0x6074
                    6078   1667 _DFE_CONTROL_6	=	0x6078
                    607C   1668 _DFE_TEST_0	=	0x607c
                    6080   1669 _DFE_TEST_1	=	0x6080
                    6084   1670 _DFE_TEST_4	=	0x6084
                    6088   1671 _DFE_TEST_5	=	0x6088
                    608C   1672 _DFE_CONTROL_7	=	0x608c
                    6090   1673 _DFE_CONTROL_8	=	0x6090
                    6094   1674 _DFE_CONTROL_9	=	0x6094
                    6098   1675 _DFE_CONTROL_10	=	0x6098
                    609C   1676 _DFE_CONTROL_11	=	0x609c
                    60A0   1677 _CDS_CTRL_REG0	=	0x60a0
                    60A4   1678 _CDS_CTRL_REG1	=	0x60a4
                    60A8   1679 _ESM_POP_P_CNT_LOW_LANE	=	0x60a8
                    60AC   1680 _ESM_ERR_P_CNT_LOW_LANE	=	0x60ac
                    60B0   1681 _ESM_ERR_POP_CNT_HIGH_LANE	=	0x60b0
                    60B4   1682 _TRAIN_CONTROL_3	=	0x60b4
                    60B8   1683 _TRAIN_CONTROL_4	=	0x60b8
                    60BC   1684 _TRAIN_CONTROL_5	=	0x60bc
                    60C0   1685 _TRAIN_CONTROL_6	=	0x60c0
                    60C4   1686 _TRAIN_CONTROL_7	=	0x60c4
                    60C8   1687 _TRAIN_CONTROL_8	=	0x60c8
                    60CC   1688 _TRAIN_CONTROL_9	=	0x60cc
                    60D0   1689 _TRAIN_CONTROL_10	=	0x60d0
                    60D4   1690 _TRAIN_CONTROL_11	=	0x60d4
                    60D8   1691 _TRAIN_CONTROL_12	=	0x60d8
                    60DC   1692 _ESM_POP_N_CNT_LOW_LANE	=	0x60dc
                    60E0   1693 _ESM_ERR_N_CNT_LOW_LANE	=	0x60e0
                    60E4   1694 _TRAIN_CONTROL_13	=	0x60e4
                    60E8   1695 _TRAIN_CONTROL_14	=	0x60e8
                    60EC   1696 _TRAIN_CONTROL_15	=	0x60ec
                    60F0   1697 _TRAIN_CONTROL_16	=	0x60f0
                    60F4   1698 _TRAIN_CONTROL_17	=	0x60f4
                    60F8   1699 _END_XDAT_LANE	=	0x60f8
                    A000   1700 _TX_CMN_REG	=	0xa000
                    A008   1701 _DTX_REG0	=	0xa008
                    A00C   1702 _DTX_REG1	=	0xa00c
                    A010   1703 _DTX_REG2	=	0xa010
                    A014   1704 _DTX_REG3	=	0xa014
                    A018   1705 _DTX_REG4	=	0xa018
                    A01C   1706 _DTX_PHY_ALIGN_REG0	=	0xa01c
                    A024   1707 _DTX_PHY_ALIGN_REG1	=	0xa024
                    A028   1708 _DTX_PHY_ALIGN_REG2	=	0xa028
                    A02C   1709 _SRIS_REG0	=	0xa02c
                    A030   1710 _SRIS_REG1	=	0xa030
                    A100   1711 _RX_CMN_0	=	0xa100
                    A110   1712 _DFE_STATIC_REG0	=	0xa110
                    A114   1713 _DFE_STATIC_REG1	=	0xa114
                    A118   1714 _DFE_STATIC_REG3	=	0xa118
                    A11C   1715 _DFE_STATIC_REG4	=	0xa11c
                    A120   1716 _DFE_STATIC_REG5	=	0xa120
                    A124   1717 _DFE_STATIC_REG6	=	0xa124
                    4200   1718 _GLOB_RST_CLK_CTRL	=	0x4200
                    4204   1719 _GLOB_CLK_SRC_LO	=	0x4204
                    4208   1720 _GLOB_CLK_SRC_HI	=	0x4208
                    420C   1721 _GLOB_MISC_CTRL	=	0x420c
                    4210   1722 _GLOB_DP_SAL_CFG	=	0x4210
                    4214   1723 _GLOB_DP_SAL_CFG1	=	0x4214
                    4218   1724 _GLOB_DP_SAL_CFG3	=	0x4218
                    421C   1725 _GLOB_DP_SAL_CFG5	=	0x421c
                    4220   1726 _GLOB_PM_CFG0	=	0x4220
                    4224   1727 _GLOB_COUNTER_CTRL	=	0x4224
                    4228   1728 _GLOB_COUNTER_HI	=	0x4228
                    422C   1729 _GLOB_PM_DP_CTRL	=	0x422c
                    4230   1730 _GLOB_DP_BAL_CFG0	=	0x4230
                    4234   1731 _GLOB_DP_BAL_CFG2	=	0x4234
                    4238   1732 _GLOB_DP_BAL_CFG4	=	0x4238
                    423C   1733 _GLOB_BIST_CTRL	=	0x423c
                    4240   1734 _GLOB_BIST_LANE_TYPE	=	0x4240
                    4244   1735 _GLOB_BIST_START	=	0x4244
                    4248   1736 _GLOB_BIST_MASK	=	0x4248
                    424C   1737 _GLOB_BIST_RESULT	=	0x424c
                    4250   1738 _GLOB_BIST_SEQR_CFG	=	0x4250
                    4254   1739 _GLOB_BIST_DATA_HI	=	0x4254
                    4258   1740 _GLOB_PIPE_REVISION	=	0x4258
                    425C   1741 _GLOB_L1_SUBSTATES_CFG	=	0x425c
                    A200   1742 _MCU_CONTROL_0	=	0xa200
                    A204   1743 _MCU_CONTROL_1	=	0xa204
                    A208   1744 _MCU_CONTROL_2	=	0xa208
                    A20C   1745 _MCU_CONTROL_3	=	0xa20c
                    A210   1746 _MCU_CONTROL_4	=	0xa210
                    A214   1747 _MCU_DEBUG0	=	0xa214
                    A218   1748 _MCU_DEBUG1	=	0xa218
                    A21C   1749 _MEMORY_CONTROL_0	=	0xa21c
                    A220   1750 _MEMORY_CONTROL_1	=	0xa220
                    A224   1751 _MEMORY_CONTROL_2	=	0xa224
                    A228   1752 _MEMORY_CONTROL_3	=	0xa228
                    A22C   1753 _MEMORY_CONTROL_4	=	0xa22c
                    A234   1754 _MCU_INFO_0	=	0xa234
                    A238   1755 _MCU_INFO_1	=	0xa238
                    A23C   1756 _MCU_INFO_2	=	0xa23c
                    A240   1757 _MCU_INFO_3	=	0xa240
                    A244   1758 _MEM_CMN_ECC_ERR_ADDRESS0	=	0xa244
                    A2E0   1759 _ANA_IF_CMN_REG1	=	0xa2e0
                    A2E4   1760 _MEM_IRQ	=	0xa2e4
                    A2E8   1761 _MEM_IRQ_MASK	=	0xa2e8
                    A2EC   1762 _ANA_IF_CMN_REG0	=	0xa2ec
                    A2F0   1763 _APB_CONTROL_REG	=	0xa2f0
                    A2F4   1764 _MEM_IRQ_CLEAR	=	0xa2f4
                    A2F8   1765 _MCU_SYNC1	=	0xa2f8
                    A2FC   1766 _MCU_SYNC2	=	0xa2fc
                    A300   1767 _TEST0	=	0xa300
                    A304   1768 _TEST1	=	0xa304
                    A308   1769 _TEST2	=	0xa308
                    A30C   1770 _TEST3	=	0xa30c
                    A310   1771 _TEST4	=	0xa310
                    A314   1772 _SYSTEM	=	0xa314
                    A318   1773 _PM_CMN_REG1	=	0xa318
                    A31C   1774 _INPUT_CMN_PIN_REG0	=	0xa31c
                    A320   1775 _INPUT_CMN_PIN_REG1	=	0xa320
                    A324   1776 _INPUT_CMN_PIN_REG2	=	0xa324
                    A328   1777 _ANA_TSEN_CONTROL	=	0xa328
                    A32C   1778 _PLLCAL_REG0	=	0xa32c
                    A330   1779 _PLLCAL_REG1	=	0xa330
                    A334   1780 _CLKGEN_CMN_REG1	=	0xa334
                    A338   1781 _SPD_CMN_REG1	=	0xa338
                    A33C   1782 _OUTPUT_CMN_PIN_REG0	=	0xa33c
                    A340   1783 _CMN_CALIBRATION	=	0xa340
                    A344   1784 __FIELDNAME_	=	0xa344
                    A348   1785 _INPUT_CMN_PIN_REG3	=	0xa348
                    A34C   1786 _PM_CMN_REG2	=	0xa34c
                    A354   1787 _TEST5	=	0xa354
                    A358   1788 _XDATA_MEM_CHECKSUM_CMN_0	=	0xa358
                    A35C   1789 _XDATA_MEM_CHECKSUM_CMN_1	=	0xa35c
                    A360   1790 _XDATA_MEM_CHECKSUM_CMN_2	=	0xa360
                    A364   1791 _MCU_SDT_CMN	=	0xa364
                    A368   1792 _CMN_CACHE_DEBUG0	=	0xa368
                    A36C   1793 _MCU_INT_ADDR	=	0xa36c
                    A370   1794 _CMN_ISR_2	=	0xa370
                    A374   1795 _CMN_ISR_MASK_2	=	0xa374
                    A378   1796 _CMN_ISR_CLEAR_2	=	0xa378
                    A37C   1797 _CMN_MCU_GPIO	=	0xa37c
                    A380   1798 _CMN_CACHE_DEBUG1	=	0xa380
                    A384   1799 _CMN_MCU_TIMER_CONTROL	=	0xa384
                    A388   1800 _CMN_MCU_TIMER_CTRL_2_LANE	=	0xa388
                    A38C   1801 _CMN_MCU_TIMER_CTRL_3_LANE	=	0xa38c
                    A390   1802 _CMN_MCU_TIMER_CTRL_4_LANE	=	0xa390
                    A394   1803 _CMN_MCU_TIMER_CTRL_5_LANE	=	0xa394
                    A398   1804 _CMN_MCU_TIMER0_CONTROL	=	0xa398
                    A39C   1805 _CMN_MCU_TIMER1_CONTROL	=	0xa39c
                    A3A0   1806 _CMN_MCU_TIMER2_CONTROL	=	0xa3a0
                    A3A4   1807 _CMN_MCU_TIMER3_CONTROL	=	0xa3a4
                    A3A8   1808 _CMN_ISR_1	=	0xa3a8
                    A3AC   1809 _CMN_ISR_MASK_1	=	0xa3ac
                    A3B0   1810 _SET_LANE_ISR	=	0xa3b0
                    A3F4   1811 _CMN_MCU_REG	=	0xa3f4
                    A3F8   1812 _CID_REG0	=	0xa3f8
                    A3FC   1813 _CID_REG1	=	0xa3fc
                    E600   1814 _FW_REV	=	0xe600
                    E604   1815 _CONTROL_CONFIG0	=	0xe604
                    E608   1816 _CONTROL_CONFIG1	=	0xe608
                    E60C   1817 _CONTROL_CONFIG2	=	0xe60c
                    E610   1818 _CONTROL_CONFIG3	=	0xe610
                    E614   1819 _CONTROL_CONFIG4	=	0xe614
                    E618   1820 _CONTROL_CONFIG5	=	0xe618
                    E61C   1821 _CONTROL_CONFIG6	=	0xe61c
                    E620   1822 _CONTROL_CONFIG7	=	0xe620
                    E624   1823 _CAL_DATA0	=	0xe624
                    E628   1824 _TRAIN_IF_CONFIG	=	0xe628
                    E62C   1825 _CONTROL_CONFIG8	=	0xe62c
                    E630   1826 _CONTROL_CONFIG9	=	0xe630
                    E634   1827 _CON_CAL_STEP_SIZE1	=	0xe634
                    E638   1828 _CON_CAL_STEP_SIZE2	=	0xe638
                    E63C   1829 _CON_CAL_STEP_SIZE3	=	0xe63c
                    E640   1830 _CON_CAL_STEP_SIZE4	=	0xe640
                    E644   1831 _CON_CAL_STEP_SIZE5	=	0xe644
                    E648   1832 _CAL_TIME_OUT_AND_DIS	=	0xe648
                    E64C   1833 _CAL_STATUS_READ	=	0xe64c
                    E650   1834 _MCU_CONFIG	=	0xe650
                    E654   1835 _CAL_DATA1	=	0xe654
                    E658   1836 _LOOP_CNTS	=	0xe658
                    E65C   1837 _MCU_CONFIG1	=	0xe65c
                    E660   1838 _TIMER_SEL1	=	0xe660
                    E664   1839 _TIMER_SEL2	=	0xe664
                    E668   1840 _TIMER_SEL3	=	0xe668
                    E66C   1841 _G_SELLV_TXCLK	=	0xe66c
                    E670   1842 _G_SELLV_TXDATA	=	0xe670
                    E674   1843 _G_SELLV_TXPRE	=	0xe674
                    E678   1844 _G_SELLV_RXEOMCLK	=	0xe678
                    E67C   1845 _G_SELLV_RXDATACLK	=	0xe67c
                    E680   1846 _G_SELLV_RXSAMPLER	=	0xe680
                    E684   1847 _SAS_PRESET0_TB	=	0xe684
                    E688   1848 _SAS_PRESET1_TB	=	0xe688
                    E68C   1849 _SAS_PRESET2_TB	=	0xe68c
                    E690   1850 _ETH_PRESET0_TB	=	0xe690
                    E694   1851 _ETH_PRESET1_TB	=	0xe694
                    E698   1852 _TX_SAVE_0	=	0xe698
                    E69C   1853 _TX_SAVE_1	=	0xe69c
                    E6A0   1854 _TX_SAVE_2	=	0xe6a0
                    E6A4   1855 _TX_SAVE_3	=	0xe6a4
                    E6A8   1856 _TX_SAVE_4	=	0xe6a8
                    E6AC   1857 _CDS_EYE_CLK_THR	=	0xe6ac
                    E6B0   1858 _SYNC_INFO	=	0xe6b0
                    E6B4   1859 _MCU_INFO_4	=	0xe6b4
                    E6B8   1860 _MCU_INFO_5	=	0xe6b8
                    E6BC   1861 _MCU_INFO_12	=	0xe6bc
                    E6C0   1862 _MCU_INFO_13	=	0xe6c0
                    E6C4   1863 _END_XDAT_CMN	=	0xe6c4
                    2600   1864 _DME_ENC_REG0	=	0x2600
                    2604   1865 _DME_ENC_REG1	=	0x2604
                    2608   1866 _DME_ENC_REG2	=	0x2608
                    260C   1867 _DME_DEC_REG0	=	0x260c
                    2610   1868 _DME_DEC_REG1	=	0x2610
                    2614   1869 _TX_TRAIN_IF_REG0	=	0x2614
                    2618   1870 _TX_TRAIN_IF_REG1	=	0x2618
                    261C   1871 _TX_TRAIN_IF_REG2	=	0x261c
                    2620   1872 _TX_TRAIN_IF_REG3	=	0x2620
                    2624   1873 _TX_TRAIN_PATTTERN_REG0	=	0x2624
                    2628   1874 _TX_TRAIN_DRIVER_REG0	=	0x2628
                    262C   1875 _TX_TRAIN_DRIVER_REG1	=	0x262c
                    2630   1876 _TX_TRAIN_DRIVER_REG2	=	0x2630
                    2634   1877 _TX_TRAIN_DEFAULT_REG0	=	0x2634
                    2638   1878 _TX_TRAIN_DEFAULT_REG1	=	0x2638
                    263C   1879 _TX_TRAIN_DEFAULT_REG2	=	0x263c
                    2640   1880 _TX_TRAIN_DEFAULT_REG3	=	0x2640
                    2644   1881 _TX_TRAIN_DEFAULT_REG4	=	0x2644
                    2648   1882 _TX_TRAIN_DEFAULT_REG5	=	0x2648
                    264C   1883 _TX_EMPH_CTRL_REG0	=	0x264c
                    2650   1884 _LINK_TRAIN_MODE0	=	0x2650
                    2654   1885 _TX_DRV_RD_OUT_REG0	=	0x2654
                    2658   1886 _TX_AMP_CTRL_REG0	=	0x2658
                    265C   1887 _TRX_TRAIN_IF_INTERRUPT_LANE	=	0x265c
                    2660   1888 _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE	=	0x2660
                    2664   1889 _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE	=	0x2664
                    2668   1890 _TX_TRAIN_IF_REG4	=	0x2668
                    266C   1891 _TX_TRAIN_IF_REG5	=	0x266c
                    2670   1892 _TX_TRAIN_IF_REG6	=	0x2670
                    2674   1893 _TX_TRAIN_IF_REG7	=	0x2674
                    2678   1894 _TX_TRAIN_CTRL_LANE	=	0x2678
                    267C   1895 _TX_TRAIN_IF_REG8	=	0x267c
                    6100   1896 _DFE_READ_EVEN_REG0	=	0x6100
                    6104   1897 _DFE_READ_EVEN_REG1	=	0x6104
                    6108   1898 _DFE_READ_EVEN_REG2	=	0x6108
                    610C   1899 _DFE_READ_EVEN_REG3	=	0x610c
                    6110   1900 _DFE_READ_EVEN_REG4	=	0x6110
                    6114   1901 _DFE_READ_EVEN_REG5	=	0x6114
                    6118   1902 _DFE_READ_EVEN_REG6	=	0x6118
                    611C   1903 _DFE_READ_EVEN_REG7	=	0x611c
                    6120   1904 _DFE_READ_ODD_REG0	=	0x6120
                    6124   1905 _DFE_READ_ODD_REG1	=	0x6124
                    6128   1906 _DFE_READ_ODD_REG2	=	0x6128
                    612C   1907 _DFE_READ_ODD_REG3	=	0x612c
                    6130   1908 _DFE_READ_ODD_REG4	=	0x6130
                    6134   1909 _DFE_READ_ODD_REG5	=	0x6134
                    6138   1910 _DFE_READ_ODD_REG6	=	0x6138
                    613C   1911 _DFE_READ_ODD_REG7	=	0x613c
                    6140   1912 _DFE_READ_EVEN_REG8	=	0x6140
                    6144   1913 _DFE_READ_ODD_REG8	=	0x6144
                    6148   1914 _DFE_READ_F0A_EVEN	=	0x6148
                    614C   1915 _DFE_READ_F0A_ODD	=	0x614c
                    6150   1916 _DFE_READ_F0B_EVEN	=	0x6150
                    6154   1917 _DFE_READ_F0B_ODD	=	0x6154
                    6158   1918 _DFE_READ_F0D_EVEN	=	0x6158
                    615C   1919 _DFE_READ_F0D_ODD	=	0x615c
                    6160   1920 _DFE_READ_F0D_LEFT_EVEN	=	0x6160
                    6164   1921 _DFE_READ_F0D_LEFT_ODD	=	0x6164
                    6168   1922 _DFE_READ_F0D_RIGHT_EVEN	=	0x6168
                    616C   1923 _DFE_READ_F0D_RIGHT_ODD	=	0x616c
                    6170   1924 _CDS_READ_MISC0	=	0x6170
                    6174   1925 _CDS_READ_MISC1	=	0x6174
                    6214   1926 _TXTRAIN_IF_REG0	=	0x6214
                    E000   1927 _lc_speedtable	=	0xe000
                    E1C0   1928 _ring_speedtable	=	0xe1c0
                    E5C0   1929 _phy_mode_cmn_table	=	0xe5c0
                    6300   1930 _max_gen	=	0x6300
                    6301   1931 _min_gen	=	0x6301
                    6304   1932 _speedtable	=	0x6304
                    65D4   1933 _phy_mode_lane_table	=	0x65d4
                    60B4   1934 _rc_save	=	0x60b4
                    60D0   1935 _txffe_save	=	0x60d0
                    60E4   1936 _phase_save	=	0x60e4
                    6030   1937 _train_gn1_index	=	0x6030
                    6031   1938 _train_g1_index	=	0x6031
                    6032   1939 _train_g0_index	=	0x6032
                    E6B0   1940 _local_tx_preset_tb	=	0xe6b0
                    E5C1   1941 _cmx_cal_lcvco_dac	=	0xe5c1
                    E5C1   1942 _cmx_cal_lcvco_dac_lsb	=	0xe5c1
                    E5C4   1943 _cmx_cal_lcvco_dac_msb	=	0xe5c4
                    E5CA   1944 _cmx_cal_lccap_msb	=	0xe5ca
                    E5C8   1945 _cmx_cal_lccap_lsb	=	0xe5c8
                    E5CC   1946 _cmx_cal_plldcc	=	0xe5cc
                    E5D0   1947 _cmx_cal_pll_speed_ring	=	0xe5d0
                    E5D4   1948 _cmx_cal_pll_sllp_dac_coarse_ring	=	0xe5d4
                    E5D8   1949 _cmx_cal_sllp_dac_fine_ring	=	0xe5d8
                    65D4   1950 _lnx_cal_txdcc_pdiv	=	0x65d4
                    65D8   1951 _lnx_cal_txdcc_pdiv_hg	=	0x65d8
                    65DA   1952 _lnx_cal_txdcc	=	0x65da
                    65DE   1953 _lnx_cal_txdcc_hg	=	0x65de
                    65E0   1954 _lnx_cal_rxdcc_dll	=	0x65e0
                    65E4   1955 _lnx_cal_rxdcc_dll_hg	=	0x65e4
                    65E6   1956 _lnx_cal_rxdcc_data	=	0x65e6
                    65F0   1957 _lnx_cal_rxdcc_data_hg	=	0x65f0
                    65F5   1958 _lnx_cal_rxdcc_eom	=	0x65f5
                    65FF   1959 _lnx_cal_rxdcc_eom_hg	=	0x65ff
                    6604   1960 _lnx_cal_dll_gmsel	=	0x6604
                    6606   1961 _lnx_cal_vdda_dll_sel	=	0x6606
                    660A   1962 _lnx_cal_dll_eom_gmsel	=	0x660a
                    660C   1963 _lnx_cal_vdda_dll_eom_sel	=	0x660c
                    6610   1964 _lnx_cal_eom_dpher	=	0x6610
                    6612   1965 _lnx_cal_align90_dummy_clk	=	0x6612
                    661A   1966 _lnx_cal_align90_dac	=	0x661a
                    6622   1967 _lnx_cal_align90_gm	=	0x6622
                    662A   1968 _lnx_cal_sellv_txdata	=	0x662a
                    6634   1969 _lnx_cal_sellv_txclk	=	0x6634
                    663E   1970 _lnx_cal_sellv_rxdataclk	=	0x663e
                    6648   1971 _lnx_cal_sellv_txpre	=	0x6648
                    6652   1972 _lnx_cal_sellv_rxsampler	=	0x6652
                    665C   1973 _lnx_cal_sellv_rxeomclk	=	0x665c
                    6666   1974 _lnx_spdoft_tx_preset_index_lane	=	0x6666
                    6490   1975 _lnx_calx_txdcc_pdiv	=	0x6490
                    6496   1976 _lnx_calx_txdcc_pdiv_hg	=	0x6496
                    6499   1977 _lnx_calx_txdcc	=	0x6499
                    649F   1978 _lnx_calx_txdcc_hg	=	0x649f
                    64A2   1979 _lnx_calx_rxdcc_dll	=	0x64a2
                    64A8   1980 _lnx_calx_rxdcc_dll_hg	=	0x64a8
                    64AB   1981 _lnx_calx_dll_gmsel	=	0x64ab
                    64AE   1982 _lnx_calx_vdda_dll_sel	=	0x64ae
                    64B4   1983 _lnx_calx_dll_eom_gmsel	=	0x64b4
                    64B7   1984 _lnx_calx_vdda_dll_eom_sel	=	0x64b7
                    64BD   1985 _lnx_calx_eom_dpher	=	0x64bd
                    64C0   1986 _lnx_calx_align90_dummy_clk	=	0x64c0
                    64CC   1987 _lnx_calx_align90_dac	=	0x64cc
                    64D8   1988 _lnx_calx_align90_gm	=	0x64d8
                    6100   1989 _cds28	=	0x6100
                    6178   1990 _dfe_sm	=	0x6178
                    61B8   1991 _dfe_sm_dc	=	0x61b8
                    61C0   1992 _dfe_sm_save	=	0x61c0
                    03FC   1993 _UPHY_ANAREG_REV_0	=	0x03fc
                    E684   1994 _tx_tb	=	0xe684
                    E698   1995 _train_save_tb	=	0xe698
                    607C   1996 _sq_thrs_ratio_tb	=	0x607c
                           1997 ;--------------------------------------------------------
                           1998 ; absolute external ram data
                           1999 ;--------------------------------------------------------
                           2000 	.area XABS    (ABS,XDATA)
                           2001 ;--------------------------------------------------------
                           2002 ; external initialized ram data
                           2003 ;--------------------------------------------------------
                           2004 	.area HOME    (CODE)
                           2005 	.area GSINIT0 (CODE)
                           2006 	.area GSINIT1 (CODE)
                           2007 	.area GSINIT2 (CODE)
                           2008 	.area GSINIT3 (CODE)
                           2009 	.area GSINIT4 (CODE)
                           2010 	.area GSINIT5 (CODE)
                           2011 	.area GSINIT  (CODE)
                           2012 	.area GSFINAL (CODE)
                           2013 	.area CSEG    (CODE)
                           2014 ;--------------------------------------------------------
                           2015 ; global & static initialisations
                           2016 ;--------------------------------------------------------
                           2017 	.area HOME    (CODE)
                           2018 	.area GSINIT  (CODE)
                           2019 	.area GSFINAL (CODE)
                           2020 	.area GSINIT  (CODE)
                           2021 ;--------------------------------------------------------
                           2022 ; Home
                           2023 ;--------------------------------------------------------
                           2024 	.area HOME    (CODE)
                           2025 	.area HOME    (CODE)
                           2026 ;--------------------------------------------------------
                           2027 ; code
                           2028 ;--------------------------------------------------------
                           2029 	.area BANK1   (CODE)
                           2030 ;------------------------------------------------------------
                           2031 ;Allocation info for local variables in function 'clear_xdata'
                           2032 ;------------------------------------------------------------
                           2033 ;------------------------------------------------------------
                           2034 ;	../../shared/src/phy_init.c:28: void clear_xdata(void) BANKING_CTRL {
                           2035 ;	-----------------------------------------
                           2036 ;	 function clear_xdata
                           2037 ;	-----------------------------------------
   B6D1                    2038 _clear_xdata:
                    0002   2039 	ar2 = 0x02
                    0003   2040 	ar3 = 0x03
                    0004   2041 	ar4 = 0x04
                    0005   2042 	ar5 = 0x05
                    0006   2043 	ar6 = 0x06
                    0007   2044 	ar7 = 0x07
                    0000   2045 	ar0 = 0x00
                    0001   2046 	ar1 = 0x01
                           2047 ;	../../shared/src/phy_init.c:32: reg_MCU_DEBUG0_LANE_7_0 = lnx_END_XDAT_LANE_7_0;
   B6D1 90 60 F8           2048 	mov	dptr,#_END_XDAT_LANE
   B6D4 E0                 2049 	movx	a,@dptr
   B6D5 FA                 2050 	mov	r2,a
   B6D6 90 22 B4           2051 	mov	dptr,#_MCU_DEBUG0_LANE
   B6D9 EA                 2052 	mov	a,r2
   B6DA F0                 2053 	movx	@dptr,a
                           2054 ;	../../shared/src/phy_init.c:33: while(lnx_END_XDAT_LANE_7_0!=0xaa || cmx_END_XDAT_CMN_7_0!=0xaa);
   B6DB                    2055 00102$:
   B6DB 90 60 F8           2056 	mov	dptr,#_END_XDAT_LANE
   B6DE E0                 2057 	movx	a,@dptr
   B6DF FA                 2058 	mov	r2,a
   B6E0 BA AA F8           2059 	cjne	r2,#0xAA,00102$
   B6E3 90 E6 C4           2060 	mov	dptr,#_END_XDAT_CMN
   B6E6 E0                 2061 	movx	a,@dptr
   B6E7 FA                 2062 	mov	r2,a
   B6E8 BA AA F0           2063 	cjne	r2,#0xAA,00102$
                           2064 ;	../../shared/src/phy_init.c:34: reg_MCU_DEBUG0_LANE_7_0 = lnx_END_XDAT_LANE_7_0;
   B6EB 90 60 F8           2065 	mov	dptr,#_END_XDAT_LANE
   B6EE E0                 2066 	movx	a,@dptr
   B6EF FA                 2067 	mov	r2,a
   B6F0 90 22 B4           2068 	mov	dptr,#_MCU_DEBUG0_LANE
   B6F3 EA                 2069 	mov	a,r2
   B6F4 F0                 2070 	movx	@dptr,a
                           2071 ;	../../shared/src/phy_init.c:36: if(master_mcu > MAX_MCU_ID) master_mcu = MCU_LANE0;
   B6F5 90 E6 50           2072 	mov	dptr,#_MCU_CONFIG
   B6F8 E0                 2073 	movx	a,@dptr
   B6F9 FA                 2074 	mov	r2,a
   B6FA 74 01              2075 	mov	a,#0x01
   B6FC B5 02 00           2076 	cjne	a,ar2,00120$
   B6FF                    2077 00120$:
   B6FF 50 05              2078 	jnc	00106$
   B701 90 E6 50           2079 	mov	dptr,#_MCU_CONFIG
   B704 E4                 2080 	clr	a
   B705 F0                 2081 	movx	@dptr,a
   B706                    2082 00106$:
                           2083 ;	../../shared/src/phy_init.c:66: sync_status_lane(IDLE);
   B706 75 82 00           2084 	mov	dpl,#0x00
   B709 78 C2              2085 	mov	r0,#_sync_status_lane
   B70B 79 B1              2086 	mov	r1,#(_sync_status_lane >> 8)
   B70D 7A 01              2087 	mov	r2,#(_sync_status_lane >> 16)
   B70F 12 00 B3           2088 	lcall	__sdcc_banked_call
                           2089 ;	../../shared/src/phy_init.c:67: if(mcuid== master_mcu) {
   B712 90 22 00           2090 	mov	dptr,#_MCU_CONTROL_LANE
   B715 E0                 2091 	movx	a,@dptr
   B716 FA                 2092 	mov	r2,a
   B717 90 E6 50           2093 	mov	dptr,#_MCU_CONFIG
   B71A E0                 2094 	movx	a,@dptr
   B71B FB                 2095 	mov	r3,a
   B71C EA                 2096 	mov	a,r2
   B71D B5 03 07           2097 	cjne	a,ar3,00108$
                           2098 ;	../../shared/src/phy_init.c:72: cmx_MCU_INIT_DONE = 1;  // Used in simulation
   B720 90 E6 05           2099 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0001)
   B723 E0                 2100 	movx	a,@dptr
   B724 44 02              2101 	orl	a,#0x02
   B726 F0                 2102 	movx	@dptr,a
   B727                    2103 00108$:
                           2104 ;	../../shared/src/phy_init.c:76: sync_check = 0;
   B727 C2 02              2105 	clr	_sync_check
                           2106 ;	../../shared/src/phy_init.c:77: rx_pll_rate = 0;
   B729 C2 0E              2107 	clr	_rx_pll_rate
                           2108 ;	../../shared/src/phy_init.c:78: tx_pll_rate = 0;
   B72B C2 0F              2109 	clr	_tx_pll_rate
                           2110 ;	../../shared/src/phy_init.c:79: gen_pll_rate = 0;
   B72D 90 67 8C           2111 	mov	dptr,#_gen_pll_rate
   B730 E4                 2112 	clr	a
   B731 F0                 2113 	movx	@dptr,a
                           2114 ;	../../shared/src/phy_init.c:80: pre_gen_pll_rate = 0xff;
   B732 90 67 8D           2115 	mov	dptr,#_pre_gen_pll_rate
   B735 74 FF              2116 	mov	a,#0xFF
   B737 F0                 2117 	movx	@dptr,a
                           2118 ;	../../shared/src/phy_init.c:81: use_ring_pll = 0;
   B738 C2 10              2119 	clr	_use_ring_pll
                           2120 ;	../../shared/src/phy_init.c:82: ring_pll_enabled = 0;
   B73A C2 12              2121 	clr	_ring_pll_enabled
                           2122 ;	../../shared/src/phy_init.c:83: ring_use_250m = 0;
   B73C C2 13              2123 	clr	_ring_use_250m
                           2124 ;	../../shared/src/phy_init.c:84: force_exit_cal = 0;
   B73E C2 14              2125 	clr	_force_exit_cal
                           2126 ;	../../shared/src/phy_init.c:85: adapt_slicer_en = 0;
   B740 C2 0C              2127 	clr	_adapt_slicer_en
                           2128 ;	../../shared/src/phy_init.c:86: adapt_data_en = 0;
   B742 C2 0D              2129 	clr	_adapt_data_en
                           2130 ;	../../shared/src/phy_init.c:87: no_pllspdchg = 0;
   B744 C2 15              2131 	clr	_no_pllspdchg
                           2132 ;	../../shared/src/phy_init.c:88: lc_pll_used = 0;
   B746 C2 11              2133 	clr	_lc_pll_used
                           2134 ;	../../shared/src/phy_init.c:89: int_pu_rx = 0;
   B748 C2 00              2135 	clr	_int_pu_rx
                           2136 ;	../../shared/src/phy_init.c:90: int_pu_tx = 0;
   B74A C2 01              2137 	clr	_int_pu_tx
                           2138 ;	../../shared/src/phy_init.c:91: tx_status_pcie_mode = 0;
   B74C C2 27              2139 	clr	_tx_status_pcie_mode
                           2140 ;	../../shared/src/phy_init.c:92: tx_pipe4_en = 0;
   B74E C2 26              2141 	clr	_tx_pipe4_en
                           2142 ;	../../shared/src/phy_init.c:93: gain_train_with_c = 0;
   B750 C2 24              2143 	clr	_gain_train_with_c
                           2144 ;	../../shared/src/phy_init.c:94: tx_init_bit = 0;
   B752 90 67 10           2145 	mov	dptr,#_tx_init_bit
   B755 E4                 2146 	clr	a
   B756 F0                 2147 	movx	@dptr,a
                           2148 ;	../../shared/src/phy_init.c:96: PLL_RATE_SEL = 0xff;
   B757 90 E6 1E           2149 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0002)
   B75A 74 FF              2150 	mov	a,#0xFF
   B75C F0                 2151 	movx	@dptr,a
                           2152 ;	../../shared/src/phy_init.c:97: PLL_RATE_SEL_RING = 0xff;	// TODO - should this be defined in xdat_lane.h?
   B75D 90 E6 1F           2153 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0003)
   B760 74 FF              2154 	mov	a,#0xFF
   B762 F0                 2155 	movx	@dptr,a
                           2156 ;	../../shared/src/phy_init.c:98: invalidate_pll_rate = 0;
   B763 90 67 90           2157 	mov	dptr,#_invalidate_pll_rate
   B766 E4                 2158 	clr	a
   B767 F0                 2159 	movx	@dptr,a
   B768 02 00 C5           2160 	ljmp	__sdcc_banked_ret
                           2161 ;------------------------------------------------------------
                           2162 ;Allocation info for local variables in function 'init_xdata'
                           2163 ;------------------------------------------------------------
                           2164 ;------------------------------------------------------------
                           2165 ;	../../shared/src/phy_init.c:115: void init_xdata(void) BANKING_CTRL {
                           2166 ;	-----------------------------------------
                           2167 ;	 function init_xdata
                           2168 ;	-----------------------------------------
   B76B                    2169 _init_xdata:
                           2170 ;	../../shared/src/phy_init.c:117: if(master_mcu > MAX_MCU_ID) master_mcu = MCU_LANE0;
   B76B 90 E6 50           2171 	mov	dptr,#_MCU_CONFIG
   B76E E0                 2172 	movx	a,@dptr
   B76F FA                 2173 	mov	r2,a
   B770 74 01              2174 	mov	a,#0x01
   B772 B5 02 00           2175 	cjne	a,ar2,00126$
   B775                    2176 00126$:
   B775 50 05              2177 	jnc	00102$
   B777 90 E6 50           2178 	mov	dptr,#_MCU_CONFIG
   B77A E4                 2179 	clr	a
   B77B F0                 2180 	movx	@dptr,a
   B77C                    2181 00102$:
                           2182 ;	../../shared/src/phy_init.c:121: pcie_usb_mode =  ( ( phy_mode == PCIE ) || ( phy_mode == USB ) ) ? 1 : 0;
   B77C 90 A3 16           2183 	mov	dptr,#(_SYSTEM + 0x0002)
   B77F E0                 2184 	movx	a,@dptr
   B780 54 07              2185 	anl	a,#0x07
   B782 FA                 2186 	mov	r2,a
   B783 BA 03 02           2187 	cjne	r2,#0x03,00128$
   B786 80 10              2188 	sjmp	00116$
   B788                    2189 00128$:
   B788 90 A3 16           2190 	mov	dptr,#(_SYSTEM + 0x0002)
   B78B E0                 2191 	movx	a,@dptr
   B78C 54 07              2192 	anl	a,#0x07
   B78E FA                 2193 	mov	r2,a
   B78F BA 05 02           2194 	cjne	r2,#0x05,00129$
   B792 80 04              2195 	sjmp	00116$
   B794                    2196 00129$:
   B794 7A 00              2197 	mov	r2,#0x00
   B796 80 02              2198 	sjmp	00117$
   B798                    2199 00116$:
   B798 7A 01              2200 	mov	r2,#0x01
   B79A                    2201 00117$:
   B79A EA                 2202 	mov	a,r2
   B79B 60 04              2203 	jz	00113$
   B79D 7A 01              2204 	mov	r2,#0x01
   B79F 80 02              2205 	sjmp	00114$
   B7A1                    2206 00113$:
   B7A1 7A 00              2207 	mov	r2,#0x00
   B7A3                    2208 00114$:
   B7A3 90 67 14           2209 	mov	dptr,#_pcie_usb_mode
   B7A6 EA                 2210 	mov	a,r2
   B7A7 F0                 2211 	movx	@dptr,a
                           2212 ;	../../shared/src/phy_init.c:124: if(FAST_POWER_ON_EN) CONTROL_CONFIG0.BT.B2 |= 0x30; // bypass delay_time, bypass_poweron_delay 
   B7A8 90 E6 07           2213 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   B7AB E0                 2214 	movx	a,@dptr
   B7AC 30 E4 0D           2215 	jnb	acc.4,00104$
   B7AF 90 E6 06           2216 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0002)
   B7B2 E0                 2217 	movx	a,@dptr
   B7B3 FB                 2218 	mov	r3,a
   B7B4 43 03 30           2219 	orl	ar3,#0x30
   B7B7 90 E6 06           2220 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0002)
   B7BA EB                 2221 	mov	a,r3
   B7BB F0                 2222 	movx	@dptr,a
   B7BC                    2223 00104$:
                           2224 ;	../../shared/src/phy_init.c:125: reg_SET_MCU_COMMAND_LANE0_31_0_b0 |= CONTROL_CONFIG0.BT.B2;
   B7BC 90 A2 34           2225 	mov	dptr,#_MCU_INFO_0
   B7BF E0                 2226 	movx	a,@dptr
   B7C0 FB                 2227 	mov	r3,a
   B7C1 90 E6 06           2228 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0002)
   B7C4 E0                 2229 	movx	a,@dptr
   B7C5 42 03              2230 	orl	ar3,a
   B7C7 90 A2 34           2231 	mov	dptr,#_MCU_INFO_0
   B7CA EB                 2232 	mov	a,r3
   B7CB F0                 2233 	movx	@dptr,a
                           2234 ;	../../shared/src/phy_init.c:126: reg_SET_MCU_COMMAND_LANE1_31_0_b0 |= CONTROL_CONFIG0.BT.B2;
   B7CC 90 A2 38           2235 	mov	dptr,#_MCU_INFO_1
   B7CF E0                 2236 	movx	a,@dptr
   B7D0 FB                 2237 	mov	r3,a
   B7D1 90 E6 06           2238 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0002)
   B7D4 E0                 2239 	movx	a,@dptr
   B7D5 42 03              2240 	orl	ar3,a
   B7D7 90 A2 38           2241 	mov	dptr,#_MCU_INFO_1
   B7DA EB                 2242 	mov	a,r3
   B7DB F0                 2243 	movx	@dptr,a
                           2244 ;	../../shared/src/phy_init.c:132: force_exit_cal = FORCE_EXIT_CAL | cmx_EXT_FORCE_CAL_DONE;
   B7DC 90 E6 06           2245 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0002)
   B7DF E0                 2246 	movx	a,@dptr
   B7E0 03                 2247 	rr	a
   B7E1 54 01              2248 	anl	a,#0x01
   B7E3 FB                 2249 	mov	r3,a
   B7E4 90 E6 06           2250 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0002)
   B7E7 E0                 2251 	movx	a,@dptr
   B7E8 03                 2252 	rr	a
   B7E9 54 01              2253 	anl	a,#0x01
   B7EB 4B                 2254 	orl	a,r3
   B7EC 24 FF              2255 	add	a,#0xff
   B7EE 92 14              2256 	mov	_force_exit_cal,c
                           2257 ;	../../shared/src/phy_init.c:135: if(mcuid== master_mcu) {
   B7F0 90 22 00           2258 	mov	dptr,#_MCU_CONTROL_LANE
   B7F3 E0                 2259 	movx	a,@dptr
   B7F4 FB                 2260 	mov	r3,a
   B7F5 90 E6 50           2261 	mov	dptr,#_MCU_CONFIG
   B7F8 E0                 2262 	movx	a,@dptr
   B7F9 FC                 2263 	mov	r4,a
   B7FA EB                 2264 	mov	a,r3
   B7FB B5 04 4B           2265 	cjne	a,ar4,00108$
                           2266 ;	../../shared/src/phy_init.c:136: pllcal_first_time = 1;
   B7FE 90 66 25           2267 	mov	dptr,#_pllcal_first_time
   B801 74 01              2268 	mov	a,#0x01
   B803 F0                 2269 	movx	@dptr,a
                           2270 ;	../../shared/src/phy_init.c:158: cmx_FW_MAJOR_VER_7_0 = MAJOR_VER;
   B804 90 E6 03           2271 	mov	dptr,#(_FW_REV + 0x0003)
   B807 E4                 2272 	clr	a
   B808 F0                 2273 	movx	@dptr,a
                           2274 ;	../../shared/src/phy_init.c:159: cmx_FW_MINOR_VER_7_0 = MINOR_VER;
   B809 90 E6 02           2275 	mov	dptr,#(_FW_REV + 0x0002)
   B80C 74 0C              2276 	mov	a,#0x0C
   B80E F0                 2277 	movx	@dptr,a
                           2278 ;	../../shared/src/phy_init.c:160: cmx_FW_PATCH_VER_7_0 = PATCH_VER;
   B80F 90 E6 01           2279 	mov	dptr,#(_FW_REV + 0x0001)
   B812 74 08              2280 	mov	a,#0x08
   B814 F0                 2281 	movx	@dptr,a
                           2282 ;	../../shared/src/phy_init.c:161: cmx_FW_BUILD_VER_7_0 = BUILD_VER;
   B815 90 E6 00           2283 	mov	dptr,#_FW_REV
   B818 74 26              2284 	mov	a,#0x26
   B81A F0                 2285 	movx	@dptr,a
                           2286 ;	../../shared/src/phy_init.c:162: reg_MCU_DEBUG0_LANE_7_0 = 0x60;
   B81B 90 22 B4           2287 	mov	dptr,#_MCU_DEBUG0_LANE
   B81E 74 60              2288 	mov	a,#0x60
   B820 F0                 2289 	movx	@dptr,a
                           2290 ;	../../shared/src/phy_init.c:163: reg_MCU_DEBUG1_LANE_7_0 = MAJOR_VER;
   B821 90 22 B5           2291 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0001)
   B824 E4                 2292 	clr	a
   B825 F0                 2293 	movx	@dptr,a
                           2294 ;	../../shared/src/phy_init.c:164: reg_MCU_DEBUG2_LANE_7_0 = MINOR_VER;
   B826 90 22 B6           2295 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0002)
   B829 74 0C              2296 	mov	a,#0x0C
   B82B F0                 2297 	movx	@dptr,a
                           2298 ;	../../shared/src/phy_init.c:165: reg_MCU_DEBUG3_LANE_7_0 = PATCH_VER;
   B82C 90 22 B7           2299 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0003)
   B82F 74 08              2300 	mov	a,#0x08
   B831 F0                 2301 	movx	@dptr,a
                           2302 ;	../../shared/src/phy_init.c:166: reg_MCU_DEBUG4_LANE_7_0 = BUILD_VER;
   B832 90 22 B8           2303 	mov	dptr,#_MCU_DEBUG1_LANE
   B835 74 26              2304 	mov	a,#0x26
   B837 F0                 2305 	movx	@dptr,a
                           2306 ;	../../shared/src/phy_init.c:169: if(phy_mode == PCIE) PIPE4_EN = 1;	//set default for PCIe mode
   B838 90 A3 16           2307 	mov	dptr,#(_SYSTEM + 0x0002)
   B83B E0                 2308 	movx	a,@dptr
   B83C 54 07              2309 	anl	a,#0x07
   B83E FB                 2310 	mov	r3,a
   B83F BB 03 07           2311 	cjne	r3,#0x03,00108$
   B842 90 E6 28           2312 	mov	dptr,#_TRAIN_IF_CONFIG
   B845 E0                 2313 	movx	a,@dptr
   B846 44 01              2314 	orl	a,#0x01
   B848 F0                 2315 	movx	@dptr,a
   B849                    2316 00108$:
                           2317 ;	../../shared/src/phy_init.c:203: lnx_TX_TRAIN_FRAME_DET_TIMER_ENABLE_LANE = 1;
   B849 90 60 33           2318 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   B84C E0                 2319 	movx	a,@dptr
   B84D 44 10              2320 	orl	a,#0x10
   B84F F0                 2321 	movx	@dptr,a
                           2322 ;	../../shared/src/phy_init.c:204: lnx_TX_TRAIN_TIMER_ENABLE_LANE = 1;
   B850 90 60 33           2323 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   B853 E0                 2324 	movx	a,@dptr
   B854 44 20              2325 	orl	a,#0x20
   B856 F0                 2326 	movx	@dptr,a
                           2327 ;	../../shared/src/phy_init.c:205: lnx_RX_TRAIN_TIMER_ENABLE_LANE = 1;
   B857 90 60 33           2328 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   B85A E0                 2329 	movx	a,@dptr
   B85B 44 40              2330 	orl	a,#0x40
   B85D F0                 2331 	movx	@dptr,a
                           2332 ;	../../shared/src/phy_init.c:206: lnx_TX_TRAIN_STATUS_DET_TIMER_ENABLE_LANE = 1;
   B85E 90 60 33           2333 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   B861 E0                 2334 	movx	a,@dptr
   B862 44 80              2335 	orl	a,#0x80
   B864 F0                 2336 	movx	@dptr,a
                           2337 ;	../../shared/src/phy_init.c:229: cont_cal_on = 0;
   B865 C2 16              2338 	clr	_cont_cal_on
                           2339 ;	../../shared/src/phy_init.c:231: cal_start_on = 0;
   B867 90 67 AF           2340 	mov	dptr,#_cal_start_on
                           2341 ;	../../shared/src/phy_init.c:232: dfe_phase_save_en = 0;
   B86A E4                 2342 	clr	a
   B86B F0                 2343 	movx	@dptr,a
   B86C 90 67 AA           2344 	mov	dptr,#_dfe_phase_save_en
   B86F F0                 2345 	movx	@dptr,a
                           2346 ;	../../shared/src/phy_init.c:234: if(pcie_usb_mode)
   B870 EA                 2347 	mov	a,r2
   B871 60 1B              2348 	jz	00110$
                           2349 ;	../../shared/src/phy_init.c:237: tx_adapt_g0_en = 0;
                           2350 ;	../../shared/src/phy_init.c:238: tx_adapt_gn1_en = 1;
   B873 90 60 5A           2351 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0002)
   B876 E0                 2352 	movx	a,@dptr
   B877 54 7F              2353 	anl	a,#0x7f
   B879 F0                 2354 	movx	@dptr,a
   B87A E0                 2355 	movx	a,@dptr
   B87B 44 40              2356 	orl	a,#0x40
   B87D F0                 2357 	movx	@dptr,a
                           2358 ;	../../shared/src/phy_init.c:239: tx_adapt_g1_en = 1;
   B87E 90 60 5A           2359 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0002)
   B881 E0                 2360 	movx	a,@dptr
   B882 44 20              2361 	orl	a,#0x20
   B884 F0                 2362 	movx	@dptr,a
                           2363 ;	../../shared/src/phy_init.c:240: lnx_TRX_TRAIN_TIMER_LANE_15_0 = 23;
   B885 90 26 1A           2364 	mov	dptr,#(_TX_TRAIN_IF_REG1 + 0x0002)
   B888 74 17              2365 	mov	a,#0x17
   B88A F0                 2366 	movx	@dptr,a
   B88B A3                 2367 	inc	dptr
   B88C E4                 2368 	clr	a
   B88D F0                 2369 	movx	@dptr,a
   B88E                    2370 00110$:
                           2371 ;	../../shared/src/phy_init.c:250: tx_sweep_preset_en = 0;
   B88E 90 67 13           2372 	mov	dptr,#_tx_sweep_preset_en
   B891 E4                 2373 	clr	a
   B892 F0                 2374 	movx	@dptr,a
                           2375 ;	../../shared/src/phy_init.c:254: pre_sq_rd = 1;
   B893 90 67 1C           2376 	mov	dptr,#_pre_sq_rd
   B896 74 01              2377 	mov	a,#0x01
   B898 F0                 2378 	movx	@dptr,a
                           2379 ;	../../shared/src/phy_init.c:256: tx_train_p2p_hold = lnx_TX_TRAIN_P2P_HOLD_LANE;
   B899 90 60 44           2380 	mov	dptr,#_DFE_CONTROL_3
   B89C E0                 2381 	movx	a,@dptr
   B89D C4                 2382 	swap	a
   B89E 23                 2383 	rl	a
   B89F 54 01              2384 	anl	a,#0x01
   B8A1 FA                 2385 	mov	r2,a
   B8A2 90 67 A0           2386 	mov	dptr,#_tx_train_p2p_hold
   B8A5 F0                 2387 	movx	@dptr,a
                           2388 ;	../../shared/src/phy_init.c:260: cmx_PLL_CAL_DONE = 1;
   B8A6 90 E6 4E           2389 	mov	dptr,#(_CAL_STATUS_READ + 0x0002)
   B8A9 E0                 2390 	movx	a,@dptr
   B8AA 44 01              2391 	orl	a,#0x01
   B8AC F0                 2392 	movx	@dptr,a
                           2393 ;	../../shared/src/phy_init.c:264: cmx_PLL_CAL_RING_DONE = 1;
   B8AD 90 E6 4F           2394 	mov	dptr,#(_CAL_STATUS_READ + 0x0003)
   B8B0 E0                 2395 	movx	a,@dptr
   B8B1 44 01              2396 	orl	a,#0x01
   B8B3 F0                 2397 	movx	@dptr,a
                           2398 ;	../../shared/src/phy_init.c:267: lnx_RPTA_F0D_OFFSET_LANE_7_0 = 6;
   B8B4 90 60 77           2399 	mov	dptr,#(_TRAIN_PARA_3 + 0x0003)
   B8B7 74 06              2400 	mov	a,#0x06
   B8B9 F0                 2401 	movx	@dptr,a
   B8BA 02 00 C5           2402 	ljmp	__sdcc_banked_ret
                           2403 ;------------------------------------------------------------
                           2404 ;Allocation info for local variables in function 'init_irq'
                           2405 ;------------------------------------------------------------
                           2406 ;------------------------------------------------------------
                           2407 ;	../../shared/src/phy_init.c:275: void init_irq(void) BANKING_CTRL {
                           2408 ;	-----------------------------------------
                           2409 ;	 function init_irq
                           2410 ;	-----------------------------------------
   B8BD                    2411 _init_irq:
                           2412 ;	../../shared/src/phy_init.c:278: reg_PIN_TX_TRAIN_ENABLE_ISR_LANE = 0;
   B8BD 90 26 5C           2413 	mov	dptr,#_TRX_TRAIN_IF_INTERRUPT_LANE
   B8C0 E0                 2414 	movx	a,@dptr
   B8C1 54 FD              2415 	anl	a,#0xfd
   B8C3 F0                 2416 	movx	@dptr,a
                           2417 ;	../../shared/src/phy_init.c:279: reg_PIN_RX_TRAIN_ENABLE_ISR_LANE = 0;
   B8C4 90 26 5C           2418 	mov	dptr,#_TRX_TRAIN_IF_INTERRUPT_LANE
   B8C7 E0                 2419 	movx	a,@dptr
   B8C8 54 FE              2420 	anl	a,#0xfe
   B8CA F0                 2421 	movx	@dptr,a
                           2422 ;	../../shared/src/phy_init.c:280: reg_FRAME_LOCK_ISR_LANE = 0;
   B8CB 90 21 43           2423 	mov	dptr,#(_RX_LANE_INTERRUPT + 0x0003)
   B8CE E0                 2424 	movx	a,@dptr
   B8CF 54 BF              2425 	anl	a,#0xbf
   B8D1 F0                 2426 	movx	@dptr,a
                           2427 ;	../../shared/src/phy_init.c:281: reg_REMOTE_CTRL_VALID_ISR_LANE = 0;
   B8D2 90 26 5D           2428 	mov	dptr,#(_TRX_TRAIN_IF_INTERRUPT_LANE + 0x0001)
   B8D5 E0                 2429 	movx	a,@dptr
   B8D6 54 FD              2430 	anl	a,#0xfd
   B8D8 F0                 2431 	movx	@dptr,a
                           2432 ;	../../shared/src/phy_init.c:282: reg_INT_RX_INIT_RISE_ISR_LANE = 0;
   B8D9 90 20 1B           2433 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG1_LANE + 0x0003)
   B8DC E0                 2434 	movx	a,@dptr
   B8DD 54 F7              2435 	anl	a,#0xf7
   B8DF F0                 2436 	movx	@dptr,a
                           2437 ;	../../shared/src/phy_init.c:283: SPD_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0x0;
   B8E0 90 20 2B           2438 	mov	dptr,#(_SPD_CTRL_INTERRUPT_REG1_LANE + 0x0003)
                           2439 ;	../../shared/src/phy_init.c:284: PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0;
                           2440 ;	../../shared/src/phy_init.c:285: PM_CTRL_INTERRUPT_REG1_LANE.BT.B2 = 0;
                           2441 ;	../../shared/src/phy_init.c:286: MCU_IRQ_LANE.BT.B0 = 0;
   B8E3 E4                 2442 	clr	a
   B8E4 F0                 2443 	movx	@dptr,a
   B8E5 90 20 1B           2444 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG1_LANE + 0x0003)
   B8E8 F0                 2445 	movx	@dptr,a
   B8E9 90 20 1A           2446 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG1_LANE + 0x0002)
   B8EC F0                 2447 	movx	@dptr,a
   B8ED 90 22 88           2448 	mov	dptr,#_MCU_IRQ_LANE
   B8F0 F0                 2449 	movx	@dptr,a
                           2450 ;	../../shared/src/phy_init.c:287: MEM_IRQ.BT.B0 = 0;
   B8F1 90 A2 E4           2451 	mov	dptr,#_MEM_IRQ
   B8F4 E4                 2452 	clr	a
   B8F5 F0                 2453 	movx	@dptr,a
                           2454 ;	../../shared/src/phy_init.c:293: if((phy_mode == PCIE) || (phy_mode == USB)) 
   B8F6 90 A3 16           2455 	mov	dptr,#(_SYSTEM + 0x0002)
   B8F9 E0                 2456 	movx	a,@dptr
   B8FA 54 07              2457 	anl	a,#0x07
   B8FC FA                 2458 	mov	r2,a
   B8FD BA 03 02           2459 	cjne	r2,#0x03,00121$
   B900 80 0A              2460 	sjmp	00101$
   B902                    2461 00121$:
   B902 90 A3 16           2462 	mov	dptr,#(_SYSTEM + 0x0002)
   B905 E0                 2463 	movx	a,@dptr
   B906 54 07              2464 	anl	a,#0x07
   B908 FA                 2465 	mov	r2,a
   B909 BA 05 21           2466 	cjne	r2,#0x05,00102$
   B90C                    2467 00101$:
                           2468 ;	../../shared/src/phy_init.c:296: reg_DET_BYPASS_LANE = 1;
   B90C 90 21 4B           2469 	mov	dptr,#(_RX_DATA_PATH_REG + 0x0003)
   B90F E0                 2470 	movx	a,@dptr
   B910 44 40              2471 	orl	a,#0x40
   B912 F0                 2472 	movx	@dptr,a
                           2473 ;	../../shared/src/phy_init.c:299: PM_CTRL_INTERRUPT_REG2.BT.B2 = 0x3c; //txdetrx_en_chg|beacon_tx_en_chg
   B913 90 20 1E           2474 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG2 + 0x0002)
   B916 74 3C              2475 	mov	a,#0x3C
   B918 F0                 2476 	movx	@dptr,a
                           2477 ;	../../shared/src/phy_init.c:300: PM_CTRL_INTERRUPT_REG2.BT.B3 = 0xe5; //power_state_valid|rx_int|regclk_dis
   B919 90 20 1F           2478 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG2 + 0x0003)
   B91C 74 E5              2479 	mov	a,#0xE5
   B91E F0                 2480 	movx	@dptr,a
                           2481 ;	../../shared/src/phy_init.c:301: reg_INT_TXDETRX_EN_CHG_MASK_LANE =0;
   B91F 90 20 1E           2482 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG2 + 0x0002)
   B922 E0                 2483 	movx	a,@dptr
   B923 54 7F              2484 	anl	a,#0x7f
   B925 F0                 2485 	movx	@dptr,a
                           2486 ;	../../shared/src/phy_init.c:302: reg_INT_BEACON_TX_EN_CHG_MASK_LANE = 0;
   B926 90 20 1E           2487 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG2 + 0x0002)
   B929 E0                 2488 	movx	a,@dptr
   B92A 54 BF              2489 	anl	a,#0xbf
   B92C F0                 2490 	movx	@dptr,a
   B92D                    2491 00102$:
                           2492 ;	../../shared/src/phy_init.c:320: reg_INT3_INT_REFCLK_DIS_CHG_INT_EN_LANE = 1;
   B92D 90 22 4E           2493 	mov	dptr,#(_MCU_INT3_CONTROL + 0x0002)
   B930 E0                 2494 	movx	a,@dptr
   B931 44 08              2495 	orl	a,#0x08
   B933 F0                 2496 	movx	@dptr,a
                           2497 ;	../../shared/src/phy_init.c:321: reg_INT3_INT_PU_IVREF_CHG_INT_EN_LANE = 1;
   B934 90 22 4E           2498 	mov	dptr,#(_MCU_INT3_CONTROL + 0x0002)
   B937 E0                 2499 	movx	a,@dptr
   B938 44 04              2500 	orl	a,#0x04
   B93A F0                 2501 	movx	@dptr,a
                           2502 ;	../../shared/src/phy_init.c:323: if((phy_mode == PCIE) || (phy_mode == USB))
   B93B 90 A3 16           2503 	mov	dptr,#(_SYSTEM + 0x0002)
   B93E E0                 2504 	movx	a,@dptr
   B93F 54 07              2505 	anl	a,#0x07
   B941 FA                 2506 	mov	r2,a
   B942 BA 03 02           2507 	cjne	r2,#0x03,00124$
   B945 80 0A              2508 	sjmp	00104$
   B947                    2509 00124$:
   B947 90 A3 16           2510 	mov	dptr,#(_SYSTEM + 0x0002)
   B94A E0                 2511 	movx	a,@dptr
   B94B 54 07              2512 	anl	a,#0x07
   B94D FA                 2513 	mov	r2,a
   B94E BA 05 1C           2514 	cjne	r2,#0x05,00105$
   B951                    2515 00104$:
                           2516 ;	../../shared/src/phy_init.c:327: reg_INT9_PM_CHG_INT_EN_LANE = 0;
   B951 90 22 64           2517 	mov	dptr,#_MCU_INT9_CONTROL
   B954 E0                 2518 	movx	a,@dptr
   B955 54 FE              2519 	anl	a,#0xfe
   B957 F0                 2520 	movx	@dptr,a
                           2521 ;	../../shared/src/phy_init.c:328: reg_INT1_INT_POWER_STATE_VALID_RISE_INT_EN_LANE = 1;
   B958 90 22 46           2522 	mov	dptr,#(_MCU_INT1_CONTROL + 0x0002)
   B95B E0                 2523 	movx	a,@dptr
   B95C 44 02              2524 	orl	a,#0x02
   B95E F0                 2525 	movx	@dptr,a
                           2526 ;	../../shared/src/phy_init.c:329: reg_INT1_INT_PU_PLL_OR_CHG_INT_EN_LANE = 1;
   B95F 90 22 47           2527 	mov	dptr,#(_MCU_INT1_CONTROL + 0x0003)
   B962 E0                 2528 	movx	a,@dptr
   B963 44 01              2529 	orl	a,#0x01
   B965 F0                 2530 	movx	@dptr,a
                           2531 ;	../../shared/src/phy_init.c:331: reg_INT8_PM_PCIE_FUNC_CHG_INT_EN_LANE = 1;
   B966 90 22 61           2532 	mov	dptr,#(_MCU_INT8_CONTROL + 0x0001)
   B969 E0                 2533 	movx	a,@dptr
   B96A 44 40              2534 	orl	a,#0x40
   B96C F0                 2535 	movx	@dptr,a
   B96D                    2536 00105$:
                           2537 ;	../../shared/src/phy_init.c:362: reg_INT2_SPD_INT_GEN_EN_LANE = 1;
   B96D 90 22 48           2538 	mov	dptr,#_MCU_INT2_CONTROL
   B970 E0                 2539 	movx	a,@dptr
   B971 44 02              2540 	orl	a,#0x02
   B973 F0                 2541 	movx	@dptr,a
                           2542 ;	../../shared/src/phy_init.c:364: reg_INT11_PIN_RX_TRAIN_ENABLE_INT_EN_LANE = 1;
   B974 90 22 6D           2543 	mov	dptr,#(_MCU_INT11_CONTROL + 0x0001)
   B977 E0                 2544 	movx	a,@dptr
   B978 44 01              2545 	orl	a,#0x01
   B97A F0                 2546 	movx	@dptr,a
                           2547 ;	../../shared/src/phy_init.c:367: reg_INT5_PIN_TX_TRAIN_ENABLE_INT_EN_LANE = 1;
   B97B 90 22 55           2548 	mov	dptr,#(_MCU_INT5_CONTROL + 0x0001)
   B97E E0                 2549 	movx	a,@dptr
   B97F 44 02              2550 	orl	a,#0x02
   B981 F0                 2551 	movx	@dptr,a
                           2552 ;	../../shared/src/phy_init.c:370: reg_INT10_INT_RX_INIT_RISE_INT_EN_LANE = 1;
   B982 90 22 6A           2553 	mov	dptr,#(_MCU_INT10_CONTROL + 0x0002)
   B985 E0                 2554 	movx	a,@dptr
   B986 44 01              2555 	orl	a,#0x01
   B988 F0                 2556 	movx	@dptr,a
                           2557 ;	../../shared/src/phy_init.c:372: if(phy_mode != PCIE || reg_PHY_ISOLATE_MODE) {
   B989 90 A3 16           2558 	mov	dptr,#(_SYSTEM + 0x0002)
   B98C E0                 2559 	movx	a,@dptr
   B98D 54 07              2560 	anl	a,#0x07
   B98F FA                 2561 	mov	r2,a
   B990 BA 03 07           2562 	cjne	r2,#0x03,00107$
   B993 90 A3 16           2563 	mov	dptr,#(_SYSTEM + 0x0002)
   B996 E0                 2564 	movx	a,@dptr
   B997 30 E7 07           2565 	jnb	acc.7,00108$
   B99A                    2566 00107$:
                           2567 ;	../../shared/src/phy_init.c:374: reg_INT7_REMOTE_CTRL_VALID_INT_EN_LANE = 1;
   B99A 90 22 5D           2568 	mov	dptr,#(_MCU_INT7_CONTROL + 0x0001)
   B99D E0                 2569 	movx	a,@dptr
   B99E 44 08              2570 	orl	a,#0x08
   B9A0 F0                 2571 	movx	@dptr,a
   B9A1                    2572 00108$:
                           2573 ;	../../shared/src/phy_init.c:390: if(!reg_MASTER_PHY_EN)
   B9A1 90 A3 14           2574 	mov	dptr,#_SYSTEM
   B9A4 E0                 2575 	movx	a,@dptr
   B9A5 20 E3 07           2576 	jb	acc.3,00111$
                           2577 ;	../../shared/src/phy_init.c:391: reg_INT1_DPHY_ANA_LANE_DISABLE_INT_EN_LANE = 1;
   B9A8 90 22 47           2578 	mov	dptr,#(_MCU_INT1_CONTROL + 0x0003)
   B9AB E0                 2579 	movx	a,@dptr
   B9AC 44 08              2580 	orl	a,#0x08
   B9AE F0                 2581 	movx	@dptr,a
   B9AF                    2582 00111$:
                           2583 ;	../../shared/src/phy_init.c:396: if(mcuid== master_mcu) {
   B9AF 90 22 00           2584 	mov	dptr,#_MCU_CONTROL_LANE
   B9B2 E0                 2585 	movx	a,@dptr
   B9B3 FA                 2586 	mov	r2,a
   B9B4 90 E6 50           2587 	mov	dptr,#_MCU_CONFIG
   B9B7 E0                 2588 	movx	a,@dptr
   B9B8 FB                 2589 	mov	r3,a
   B9B9 EA                 2590 	mov	a,r2
   B9BA B5 03 07           2591 	cjne	a,ar3,00113$
                           2592 ;	../../shared/src/phy_init.c:397: reg_INT4_MCU_REMOTE_REQ_INT_EN_LANE = 1;
   B9BD 90 22 53           2593 	mov	dptr,#(_MCU_INT4_CONTROL + 0x0003)
   B9C0 E0                 2594 	movx	a,@dptr
   B9C1 44 10              2595 	orl	a,#0x10
   B9C3 F0                 2596 	movx	@dptr,a
   B9C4                    2597 00113$:
                           2598 ;	../../shared/src/phy_init.c:400: reg_INT4_PHY_MCU_REMOTE_REQ_INT_EN_LANE = 1;
   B9C4 90 22 53           2599 	mov	dptr,#(_MCU_INT4_CONTROL + 0x0003)
   B9C7 E0                 2600 	movx	a,@dptr
   B9C8 44 40              2601 	orl	a,#0x40
   B9CA F0                 2602 	movx	@dptr,a
   B9CB 02 00 C5           2603 	ljmp	__sdcc_banked_ret
                           2604 ;------------------------------------------------------------
                           2605 ;Allocation info for local variables in function 'init_reg'
                           2606 ;------------------------------------------------------------
                           2607 ;ana_pwr                   Allocated to registers r2 
                           2608 ;------------------------------------------------------------
                           2609 ;	../../shared/src/phy_init.c:406: void init_reg(void) BANKING_CTRL {
                           2610 ;	-----------------------------------------
                           2611 ;	 function init_reg
                           2612 ;	-----------------------------------------
   B9CE                    2613 _init_reg:
                           2614 ;	../../shared/src/phy_init.c:408: uint8_t ana_pwr = reg_ANA_ID_15_0_b0 & 0x03; // 2: 1.8V, 3: 1.2V
   B9CE 90 A3 FC           2615 	mov	dptr,#_CID_REG1
   B9D1 E0                 2616 	movx	a,@dptr
   B9D2 FA                 2617 	mov	r2,a
   B9D3 53 02 03           2618 	anl	ar2,#0x03
                           2619 ;	../../shared/src/phy_init.c:409: if(ana_pwr==0x02) reg_AVDDR12_SEL_MAST_REG = 1; //1.8V
   B9D6 E4                 2620 	clr	a
   B9D7 BA 02 01           2621 	cjne	r2,#0x02,00147$
   B9DA 04                 2622 	inc	a
   B9DB                    2623 00147$:
   B9DB FB                 2624 	mov	r3,a
   B9DC 60 09              2625 	jz	00104$
   B9DE 90 83 44           2626 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_209
   B9E1 E0                 2627 	movx	a,@dptr
   B9E2 44 40              2628 	orl	a,#0x40
   B9E4 F0                 2629 	movx	@dptr,a
   B9E5 80 0A              2630 	sjmp	00105$
   B9E7                    2631 00104$:
                           2632 ;	../../shared/src/phy_init.c:410: else if(ana_pwr==0x03) reg_AVDDR12_SEL_MAST_REG = 0; //1.2V
   B9E7 BA 03 07           2633 	cjne	r2,#0x03,00105$
   B9EA 90 83 44           2634 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_209
   B9ED E0                 2635 	movx	a,@dptr
   B9EE 54 BF              2636 	anl	a,#0xbf
   B9F0 F0                 2637 	movx	@dptr,a
   B9F1                    2638 00105$:
                           2639 ;	../../shared/src/phy_init.c:427: if(cmx_PHY_GEN_MAX_3_0 < max_gen) 
   B9F1 90 E6 2C           2640 	mov	dptr,#_CONTROL_CONFIG8
   B9F4 E0                 2641 	movx	a,@dptr
   B9F5 54 0F              2642 	anl	a,#0x0f
   B9F7 FA                 2643 	mov	r2,a
   B9F8 90 63 00           2644 	mov	dptr,#_max_gen
   B9FB E0                 2645 	movx	a,@dptr
   B9FC FC                 2646 	mov	r4,a
   B9FD C3                 2647 	clr	c
   B9FE EA                 2648 	mov	a,r2
   B9FF 64 80              2649 	xrl	a,#0x80
   BA01 8C F0              2650 	mov	b,r4
   BA03 63 F0 80           2651 	xrl	b,#0x80
   BA06 95 F0              2652 	subb	a,b
   BA08 50 0B              2653 	jnc	00107$
                           2654 ;	../../shared/src/phy_init.c:428: max_gen = cmx_PHY_GEN_MAX_3_0;
   BA0A 90 E6 2C           2655 	mov	dptr,#_CONTROL_CONFIG8
   BA0D E0                 2656 	movx	a,@dptr
   BA0E 54 0F              2657 	anl	a,#0x0f
   BA10 FA                 2658 	mov	r2,a
   BA11 90 63 00           2659 	mov	dptr,#_max_gen
   BA14 F0                 2660 	movx	@dptr,a
   BA15                    2661 00107$:
                           2662 ;	../../shared/src/phy_init.c:431: if(phy_mode==USB)
   BA15 90 A3 16           2663 	mov	dptr,#(_SYSTEM + 0x0002)
   BA18 E0                 2664 	movx	a,@dptr
   BA19 54 07              2665 	anl	a,#0x07
   BA1B FA                 2666 	mov	r2,a
   BA1C BA 05 02           2667 	cjne	r2,#0x05,00109$
                           2668 ;	../../shared/src/phy_init.c:432: no_pllspdchg = 1;
   BA1F D2 15              2669 	setb	_no_pllspdchg
   BA21                    2670 00109$:
                           2671 ;	../../shared/src/phy_init.c:434: if( phy_mode == PCIE) {
   BA21 90 A3 16           2672 	mov	dptr,#(_SYSTEM + 0x0002)
   BA24 E0                 2673 	movx	a,@dptr
   BA25 54 07              2674 	anl	a,#0x07
   BA27 FA                 2675 	mov	r2,a
   BA28 BA 03 39           2676 	cjne	r2,#0x03,00113$
                           2677 ;	../../shared/src/phy_init.c:435: tx_pipe4_en = 1; //should be always 1 //PIPE4_EN;
   BA2B D2 26              2678 	setb	_tx_pipe4_en
                           2679 ;	../../shared/src/phy_init.c:436: tx_status_pcie_mode = 1;
   BA2D D2 27              2680 	setb	_tx_status_pcie_mode
                           2681 ;	../../shared/src/phy_init.c:438: lnx_GAIN_TRAIN_INIT_EN_LANE = 1;
   BA2F 90 60 3A           2682 	mov	dptr,#(_DFE_CONTROL_1 + 0x0002)
   BA32 E0                 2683 	movx	a,@dptr
   BA33 44 04              2684 	orl	a,#0x04
   BA35 F0                 2685 	movx	@dptr,a
                           2686 ;	../../shared/src/phy_init.c:440: lnx_CDRPHASE_OPT_EN_LANE = 1; //0
   BA36 90 60 4D           2687 	mov	dptr,#(_DFE_CONTROL_5 + 0x0001)
   BA39 E0                 2688 	movx	a,@dptr
   BA3A 44 80              2689 	orl	a,#0x80
   BA3C F0                 2690 	movx	@dptr,a
                           2691 ;	../../shared/src/phy_init.c:444: if (cmx_TX_TRAIN_MODE == 1)
   BA3D 90 E6 28           2692 	mov	dptr,#_TRAIN_IF_CONFIG
   BA40 E0                 2693 	movx	a,@dptr
   BA41 03                 2694 	rr	a
   BA42 54 01              2695 	anl	a,#0x01
   BA44 FA                 2696 	mov	r2,a
   BA45 BA 01 07           2697 	cjne	r2,#0x01,00111$
                           2698 ;	../../shared/src/phy_init.c:445: reg_ANA_TX_EM_PO_EN_LANE = 1;
   BA48 90 26 52           2699 	mov	dptr,#(_LINK_TRAIN_MODE0 + 0x0002)
   BA4B E0                 2700 	movx	a,@dptr
   BA4C 44 20              2701 	orl	a,#0x20
   BA4E F0                 2702 	movx	@dptr,a
   BA4F                    2703 00111$:
                           2704 ;	../../shared/src/phy_init.c:449: reg_ANA_PU_TX_FORCE_LANE = 1;
   BA4F 90 20 03           2705 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0003)
   BA52 E0                 2706 	movx	a,@dptr
   BA53 44 80              2707 	orl	a,#0x80
   BA55 F0                 2708 	movx	@dptr,a
                           2709 ;	../../shared/src/phy_init.c:450: reg_ANA_PU_RX_FORCE_LANE = 1;
   BA56 90 21 03           2710 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0003)
   BA59 E0                 2711 	movx	a,@dptr
   BA5A 44 80              2712 	orl	a,#0x80
   BA5C F0                 2713 	movx	@dptr,a
                           2714 ;	../../shared/src/phy_init.c:452: reg_EBUF_THRESHOLD_WIDE_LANE = 1;
   BA5D 90 40 0F           2715 	mov	dptr,#(_LANE_CFG2_LANE + 0x0003)
   BA60 E0                 2716 	movx	a,@dptr
   BA61 44 80              2717 	orl	a,#0x80
   BA63 F0                 2718 	movx	@dptr,a
   BA64                    2719 00113$:
                           2720 ;	../../shared/src/phy_init.c:456: if( phy_mode == PCIE || phy_mode == SATA) {
   BA64 90 A3 16           2721 	mov	dptr,#(_SYSTEM + 0x0002)
   BA67 E0                 2722 	movx	a,@dptr
   BA68 54 07              2723 	anl	a,#0x07
   BA6A FA                 2724 	mov	r2,a
   BA6B BA 03 02           2725 	cjne	r2,#0x03,00159$
   BA6E 80 08              2726 	sjmp	00114$
   BA70                    2727 00159$:
   BA70 90 A3 16           2728 	mov	dptr,#(_SYSTEM + 0x0002)
   BA73 E0                 2729 	movx	a,@dptr
   BA74 54 07              2730 	anl	a,#0x07
   BA76 70 3E              2731 	jnz	00115$
   BA78                    2732 00114$:
                           2733 ;	../../shared/src/phy_init.c:457: lnx_GAIN_TRAIN_END_EN_LANE = 0;
   BA78 90 60 3A           2734 	mov	dptr,#(_DFE_CONTROL_1 + 0x0002)
   BA7B E0                 2735 	movx	a,@dptr
   BA7C 54 FD              2736 	anl	a,#0xfd
   BA7E F0                 2737 	movx	@dptr,a
                           2738 ;	../../shared/src/phy_init.c:458: lnx_ADJUST_FFE_R2_LANE = 0;
   BA7F 90 60 8E           2739 	mov	dptr,#(_DFE_CONTROL_7 + 0x0002)
   BA82 E0                 2740 	movx	a,@dptr
   BA83 54 EF              2741 	anl	a,#0xef
   BA85 F0                 2742 	movx	@dptr,a
                           2743 ;	../../shared/src/phy_init.c:459: lnx_RX_CAP_FINAL_ADJUST_EN_LANE = 0;
   BA86 90 60 8E           2744 	mov	dptr,#(_DFE_CONTROL_7 + 0x0002)
   BA89 E0                 2745 	movx	a,@dptr
   BA8A 54 DF              2746 	anl	a,#0xdf
   BA8C F0                 2747 	movx	@dptr,a
                           2748 ;	../../shared/src/phy_init.c:460: lnx_RX_RXFFE_C_INI_LANE_3_0 = 12;
   BA8D 90 60 8F           2749 	mov	dptr,#(_DFE_CONTROL_7 + 0x0003)
   BA90 E0                 2750 	movx	a,@dptr
   BA91 54 0F              2751 	anl	a,#0x0f
   BA93 44 C0              2752 	orl	a,#0xc0
   BA95 F0                 2753 	movx	@dptr,a
                           2754 ;	../../shared/src/phy_init.c:461: lnx_DFE_ISI_RES_ADAPT_EN_LANE = 0;
   BA96 90 60 8E           2755 	mov	dptr,#(_DFE_CONTROL_7 + 0x0002)
   BA99 E0                 2756 	movx	a,@dptr
   BA9A 54 F7              2757 	anl	a,#0xf7
   BA9C F0                 2758 	movx	@dptr,a
                           2759 ;	../../shared/src/phy_init.c:462: lnx_TRAIN_PH_CONTROL_MODE_LANE_1_0 = 0;
   BA9D 90 60 44           2760 	mov	dptr,#_DFE_CONTROL_3
   BAA0 E0                 2761 	movx	a,@dptr
   BAA1 54 CF              2762 	anl	a,#0xcf
   BAA3 F0                 2763 	movx	@dptr,a
                           2764 ;	../../shared/src/phy_init.c:463: lnx_TRAIN_USE_D_LANE = 0;
                           2765 ;	../../shared/src/phy_init.c:464: lnx_TRAIN_USE_S_LANE = 1;
   BAA4 90 60 44           2766 	mov	dptr,#_DFE_CONTROL_3
   BAA7 E0                 2767 	movx	a,@dptr
   BAA8 54 BF              2768 	anl	a,#0xbf
   BAAA F0                 2769 	movx	@dptr,a
   BAAB E0                 2770 	movx	a,@dptr
   BAAC 44 80              2771 	orl	a,#0x80
   BAAE F0                 2772 	movx	@dptr,a
                           2773 ;	../../shared/src/phy_init.c:465: lnx_SUMFTAP_EN_1_LANE = 1;
   BAAF 90 60 88           2774 	mov	dptr,#_DFE_TEST_5
   BAB2 E0                 2775 	movx	a,@dptr
   BAB3 44 02              2776 	orl	a,#0x02
   BAB5 F0                 2777 	movx	@dptr,a
   BAB6                    2778 00115$:
                           2779 ;	../../shared/src/phy_init.c:469: if(reg_RING_REF_DIV_SEL==1 && phy_mode<=SAS)
   BAB6 90 82 D4           2780 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_181
   BAB9 E0                 2781 	movx	a,@dptr
   BABA 23                 2782 	rl	a
   BABB 54 01              2783 	anl	a,#0x01
   BABD FA                 2784 	mov	r2,a
   BABE BA 01 1A           2785 	cjne	r2,#0x01,00118$
   BAC1 90 A3 16           2786 	mov	dptr,#(_SYSTEM + 0x0002)
   BAC4 E0                 2787 	movx	a,@dptr
   BAC5 54 07              2788 	anl	a,#0x07
   BAC7 FA                 2789 	mov	r2,a
   BAC8 C3                 2790 	clr	c
   BAC9 74 81              2791 	mov	a,#(0x01 ^ 0x80)
   BACB 8A F0              2792 	mov	b,r2
   BACD 63 F0 80           2793 	xrl	b,#0x80
   BAD0 95 F0              2794 	subb	a,b
   BAD2 40 07              2795 	jc	00118$
                           2796 ;	../../shared/src/phy_init.c:473: reg_ANA_FBCK_SEL_RING = 1;
   BAD4 90 A3 18           2797 	mov	dptr,#_PM_CMN_REG1
   BAD7 E0                 2798 	movx	a,@dptr
   BAD8 44 04              2799 	orl	a,#0x04
   BADA F0                 2800 	movx	@dptr,a
   BADB                    2801 00118$:
                           2802 ;	../../shared/src/phy_init.c:477: cal_phase = 0x1e;
   BADB 90 60 46           2803 	mov	dptr,#(_DFE_CONTROL_3 + 0x0002)
   BADE 74 1E              2804 	mov	a,#0x1E
   BAE0 F0                 2805 	movx	@dptr,a
                           2806 ;	../../shared/src/phy_init.c:480: reg_TEMPC_MUX_HOLD_SEL_3_0 = 7; //to cover large range
   BAE1 90 82 BC           2807 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_175
   BAE4 E0                 2808 	movx	a,@dptr
   BAE5 54 F0              2809 	anl	a,#0xf0
   BAE7 44 07              2810 	orl	a,#0x07
   BAE9 F0                 2811 	movx	@dptr,a
                           2812 ;	../../shared/src/phy_init.c:481: reg_TEMPC_MUX_SEL_3_0 = 6;
   BAEA 90 82 BC           2813 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_175
   BAED E0                 2814 	movx	a,@dptr
   BAEE 54 0F              2815 	anl	a,#0x0f
   BAF0 44 60              2816 	orl	a,#0x60
   BAF2 F0                 2817 	movx	@dptr,a
                           2818 ;	../../shared/src/phy_init.c:483: set_accap_sel(ACCAP_REFCLK);
   BAF3 90 02 64           2819 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_153
   BAF6 E0                 2820 	movx	a,@dptr
   BAF7 54 E7              2821 	anl	a,#0xe7
   BAF9 44 08              2822 	orl	a,#0x08
   BAFB F0                 2823 	movx	@dptr,a
                           2824 ;	../../shared/src/phy_init.c:486: dfe_f0_res_sel = 3;
   BAFC 90 00 50           2825 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   BAFF E0                 2826 	movx	a,@dptr
   BB00 44 18              2827 	orl	a,#0x18
   BB02 F0                 2828 	movx	@dptr,a
                           2829 ;	../../shared/src/phy_init.c:487: dfe_res_f1 = 3;
   BB03 90 00 50           2830 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   BB06 E0                 2831 	movx	a,@dptr
   BB07 44 06              2832 	orl	a,#0x06
   BB09 F0                 2833 	movx	@dptr,a
                           2834 ;	../../shared/src/phy_init.c:488: dfe_f234_res_sel = 1;
   BB0A 90 00 50           2835 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   BB0D E0                 2836 	movx	a,@dptr
   BB0E 44 01              2837 	orl	a,#0x01
   BB10 F0                 2838 	movx	@dptr,a
                           2839 ;	../../shared/src/phy_init.c:489: dfe_f567_res_sel = 1;
   BB11 90 00 54           2840 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   BB14 E0                 2841 	movx	a,@dptr
   BB15 44 80              2842 	orl	a,#0x80
   BB17 F0                 2843 	movx	@dptr,a
                           2844 ;	../../shared/src/phy_init.c:492: reg_DFE_STEP_COARSE_FFX_LANE_3_0 = 0x02; //4;
   BB18 90 24 21           2845 	mov	dptr,#(_DFE_STEP_REG0 + 0x0001)
   BB1B E0                 2846 	movx	a,@dptr
   BB1C 54 F0              2847 	anl	a,#0xf0
   BB1E 44 02              2848 	orl	a,#0x02
   BB20 F0                 2849 	movx	@dptr,a
                           2850 ;	../../shared/src/phy_init.c:493: reg_DFE_STEP_COARSE_FX_LANE_3_0  = 0x02; //4;
   BB21 90 24 21           2851 	mov	dptr,#(_DFE_STEP_REG0 + 0x0001)
   BB24 E0                 2852 	movx	a,@dptr
   BB25 54 0F              2853 	anl	a,#0x0f
   BB27 44 20              2854 	orl	a,#0x20
   BB29 F0                 2855 	movx	@dptr,a
                           2856 ;	../../shared/src/phy_init.c:494: reg_DFE_STEP_COARSE_F0_LANE_3_0  = 0x02; //4;
   BB2A 90 24 22           2857 	mov	dptr,#(_DFE_STEP_REG0 + 0x0002)
   BB2D E0                 2858 	movx	a,@dptr
   BB2E 54 F0              2859 	anl	a,#0xf0
   BB30 44 02              2860 	orl	a,#0x02
   BB32 F0                 2861 	movx	@dptr,a
                           2862 ;	../../shared/src/phy_init.c:495: reg_DFE_STEP_FINE_FFX_LANE_3_0 = 0x04; //5;
   BB33 90 24 26           2863 	mov	dptr,#(_DFE_STEP_REG1 + 0x0002)
   BB36 E0                 2864 	movx	a,@dptr
   BB37 54 0F              2865 	anl	a,#0x0f
   BB39 44 40              2866 	orl	a,#0x40
   BB3B F0                 2867 	movx	@dptr,a
                           2868 ;	../../shared/src/phy_init.c:496: reg_DFE_STEP_FINE_FX_LANE_3_0  = 0x04; //5;
   BB3C 90 24 27           2869 	mov	dptr,#(_DFE_STEP_REG1 + 0x0003)
   BB3F E0                 2870 	movx	a,@dptr
   BB40 54 F0              2871 	anl	a,#0xf0
   BB42 44 04              2872 	orl	a,#0x04
   BB44 F0                 2873 	movx	@dptr,a
                           2874 ;	../../shared/src/phy_init.c:497: reg_DFE_STEP_FINE_F0_LANE_3_0  = 0x04; //5;
   BB45 90 24 27           2875 	mov	dptr,#(_DFE_STEP_REG1 + 0x0003)
   BB48 E0                 2876 	movx	a,@dptr
   BB49 54 0F              2877 	anl	a,#0x0f
   BB4B 44 40              2878 	orl	a,#0x40
   BB4D F0                 2879 	movx	@dptr,a
                           2880 ;	../../shared/src/phy_init.c:498: reg_DFE_STEP_ACCU_FFX_LANE_3_0 = 0x06;
   BB4E 90 24 24           2881 	mov	dptr,#_DFE_STEP_REG1
   BB51 E0                 2882 	movx	a,@dptr
   BB52 54 F0              2883 	anl	a,#0xf0
   BB54 44 06              2884 	orl	a,#0x06
   BB56 F0                 2885 	movx	@dptr,a
                           2886 ;	../../shared/src/phy_init.c:499: reg_DFE_STEP_ACCU_FX_LANE_3_0  = 0xa; //??0x06
   BB57 90 24 24           2887 	mov	dptr,#_DFE_STEP_REG1
   BB5A E0                 2888 	movx	a,@dptr
   BB5B 54 0F              2889 	anl	a,#0x0f
   BB5D 44 A0              2890 	orl	a,#0xa0
   BB5F F0                 2891 	movx	@dptr,a
                           2892 ;	../../shared/src/phy_init.c:500: reg_DFE_STEP_ACCU_F0_LANE_3_0  = 0x06;
   BB60 90 24 25           2893 	mov	dptr,#(_DFE_STEP_REG1 + 0x0001)
   BB63 E0                 2894 	movx	a,@dptr
   BB64 54 F0              2895 	anl	a,#0xf0
   BB66 44 06              2896 	orl	a,#0x06
   BB68 F0                 2897 	movx	@dptr,a
                           2898 ;	../../shared/src/phy_init.c:501: reg_DFE_STEP_FINE_F0B_LANE_3_0 = 0x05;
   BB69 90 24 1F           2899 	mov	dptr,#(_DFE_ANA_REG1 + 0x0003)
   BB6C E0                 2900 	movx	a,@dptr
   BB6D 54 F0              2901 	anl	a,#0xf0
   BB6F 44 05              2902 	orl	a,#0x05
   BB71 F0                 2903 	movx	@dptr,a
                           2904 ;	../../shared/src/phy_init.c:502: reg_DFE_STEP_ACCU_F0B_LANE_3_0 = 0x06;
   BB72 90 24 1C           2905 	mov	dptr,#_DFE_ANA_REG1
   BB75 E0                 2906 	movx	a,@dptr
   BB76 54 F0              2907 	anl	a,#0xf0
   BB78 44 06              2908 	orl	a,#0x06
   BB7A F0                 2909 	movx	@dptr,a
                           2910 ;	../../shared/src/phy_init.c:503: reg_DFE_STEP_COARSE_EO_DN_LANE_3_0 = 0;//1;//2; //512=1/2
   BB7B 90 24 20           2911 	mov	dptr,#_DFE_STEP_REG0
   BB7E E0                 2912 	movx	a,@dptr
   BB7F 54 F0              2913 	anl	a,#0xf0
   BB81 F0                 2914 	movx	@dptr,a
                           2915 ;	../../shared/src/phy_init.c:504: reg_DFE_STEP_COARSE_EO_UP_LANE_3_0 = 7;//5;//5; //64=1/32
   BB82 90 24 20           2916 	mov	dptr,#_DFE_STEP_REG0
   BB85 E0                 2917 	movx	a,@dptr
   BB86 54 0F              2918 	anl	a,#0x0f
   BB88 44 70              2919 	orl	a,#0x70
   BB8A F0                 2920 	movx	@dptr,a
                           2921 ;	../../shared/src/phy_init.c:505: reg_DFE_STEP_FINE_EO_DN_LANE_3_0 = 3; //1/8 =256
   BB8B 90 24 25           2922 	mov	dptr,#(_DFE_STEP_REG1 + 0x0001)
   BB8E E0                 2923 	movx	a,@dptr
   BB8F 54 0F              2924 	anl	a,#0x0f
   BB91 44 30              2925 	orl	a,#0x30
   BB93 F0                 2926 	movx	@dptr,a
                           2927 ;	../../shared/src/phy_init.c:506: reg_DFE_STEP_FINE_EO_UP_LANE_3_0 = 5;//6; //1/32 =32
   BB94 90 24 26           2928 	mov	dptr,#(_DFE_STEP_REG1 + 0x0002)
   BB97 E0                 2929 	movx	a,@dptr
   BB98 54 F0              2930 	anl	a,#0xf0
   BB9A 44 05              2931 	orl	a,#0x05
   BB9C F0                 2932 	movx	@dptr,a
                           2933 ;	../../shared/src/phy_init.c:507: reg_DFE_EO_UP_THRE_COARSE_4_0 = 5; //10;//6;
   BB9D 90 A1 10           2934 	mov	dptr,#_DFE_STATIC_REG0
   BBA0 E0                 2935 	movx	a,@dptr
   BBA1 54 E0              2936 	anl	a,#0xe0
   BBA3 44 05              2937 	orl	a,#0x05
   BBA5 F0                 2938 	movx	@dptr,a
                           2939 ;	../../shared/src/phy_init.c:508: reg_DFE_EO_UP_THRE_FINE_4_0_b0 = 7;// 7 //8
   BBA6 90 A1 10           2940 	mov	dptr,#_DFE_STATIC_REG0
   BBA9 E0                 2941 	movx	a,@dptr
   BBAA 44 E0              2942 	orl	a,#0xe0
   BBAC F0                 2943 	movx	@dptr,a
                           2944 ;	../../shared/src/phy_init.c:509: reg_DFE_EO_UP_THRE_FINE_4_0_b1 = 0;
   BBAD 90 A1 11           2945 	mov	dptr,#(_DFE_STATIC_REG0 + 0x0001)
   BBB0 E0                 2946 	movx	a,@dptr
   BBB1 54 FC              2947 	anl	a,#0xfc
   BBB3 F0                 2948 	movx	@dptr,a
                           2949 ;	../../shared/src/phy_init.c:511: reg_DFE_DC_SIGN_XOR = 1; //to fix the rxdata wrong because DC adaptation diverged
   BBB4 90 A1 19           2950 	mov	dptr,#(_DFE_STATIC_REG3 + 0x0001)
   BBB7 E0                 2951 	movx	a,@dptr
   BBB8 44 10              2952 	orl	a,#0x10
   BBBA F0                 2953 	movx	@dptr,a
                           2954 ;	../../shared/src/phy_init.c:513: if(phy_mode==SATA) {
   BBBB 90 A3 16           2955 	mov	dptr,#(_SYSTEM + 0x0002)
   BBBE E0                 2956 	movx	a,@dptr
   BBBF 54 07              2957 	anl	a,#0x07
   BBC1 70 0E              2958 	jnz	00121$
                           2959 ;	../../shared/src/phy_init.c:514: reg_TXDATA_LATENCY_REDUCE_EN_LANE = 1;
   BBC3 90 20 26           2960 	mov	dptr,#(_TX_SPEED_CONVERT_LANE + 0x0002)
   BBC6 E0                 2961 	movx	a,@dptr
   BBC7 44 01              2962 	orl	a,#0x01
   BBC9 F0                 2963 	movx	@dptr,a
                           2964 ;	../../shared/src/phy_init.c:515: reg_RXDATA_LATENCY_REDUCE_EN_LANE = 1;
   BBCA 90 21 4B           2965 	mov	dptr,#(_RX_DATA_PATH_REG + 0x0003)
   BBCD E0                 2966 	movx	a,@dptr
   BBCE 44 10              2967 	orl	a,#0x10
   BBD0 F0                 2968 	movx	@dptr,a
   BBD1                    2969 00121$:
                           2970 ;	../../shared/src/phy_init.c:521: reg_SSC_DSPREAD_TX_RING = reg_SSC_DSPREAD_TX;
   BBD1 90 A0 0B           2971 	mov	dptr,#(_DTX_REG0 + 0x0003)
   BBD4 E0                 2972 	movx	a,@dptr
   BBD5 23                 2973 	rl	a
   BBD6 23                 2974 	rl	a
   BBD7 54 01              2975 	anl	a,#0x01
   BBD9 FA                 2976 	mov	r2,a
   BBDA 90 A0 13           2977 	mov	dptr,#(_DTX_REG2 + 0x0003)
   BBDD 13                 2978 	rrc	a
   BBDE E0                 2979 	movx	a,@dptr
   BBDF 92 E6              2980 	mov	acc.6,c
   BBE1 F0                 2981 	movx	@dptr,a
                           2982 ;	../../shared/src/phy_init.c:524: reg_CLK_DIRECTION_RINGPLL_LANE = 1; //ringpll direction control: ringpll->1->0, ringpll->2->3
   BBE2 90 02 58           2983 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_150
   BBE5 E0                 2984 	movx	a,@dptr
   BBE6 44 20              2985 	orl	a,#0x20
   BBE8 F0                 2986 	movx	@dptr,a
                           2987 ;	../../shared/src/phy_init.c:528: reg_PLL_PWEXP_DIS_RING = 0;
   BBE9 90 83 04           2988 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   BBEC E0                 2989 	movx	a,@dptr
   BBED 54 7F              2990 	anl	a,#0x7f
   BBEF F0                 2991 	movx	@dptr,a
                           2992 ;	../../shared/src/phy_init.c:531: reg_VREF_VDDACAL_SEL_2_0 = 6; //for vdd rxsampler cal
   BBF0 90 82 24           2993 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_137
   BBF3 E0                 2994 	movx	a,@dptr
   BBF4 54 E3              2995 	anl	a,#0xe3
   BBF6 44 18              2996 	orl	a,#0x18
   BBF8 F0                 2997 	movx	@dptr,a
                           2998 ;	../../shared/src/phy_init.c:534: if(cmx_VCON_FORCE_DISABLE==0) {
   BBF9 90 E6 13           2999 	mov	dptr,#(_CONTROL_CONFIG3 + 0x0003)
   BBFC E0                 3000 	movx	a,@dptr
   BBFD 20 E1 45           3001 	jb	acc.1,00126$
                           3002 ;	../../shared/src/phy_init.c:535: reg_VCON_REF_SEL_2_0 = 0;
   BC00 90 82 B0           3003 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_172
   BC03 E0                 3004 	movx	a,@dptr
   BC04 54 1F              3005 	anl	a,#0x1f
   BC06 F0                 3006 	movx	@dptr,a
                           3007 ;	../../shared/src/phy_init.c:536: reg_VARAC_BIAS_SEL_2_0 = 7;
   BC07 90 82 D0           3008 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_180
   BC0A E0                 3009 	movx	a,@dptr
   BC0B 44 E0              3010 	orl	a,#0xe0
   BC0D F0                 3011 	movx	@dptr,a
                           3012 ;	../../shared/src/phy_init.c:537: reg_VREF_0P6V_LCVCO_SEL_1_0 = 3;
   BC0E 90 82 1C           3013 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_135
   BC11 E0                 3014 	movx	a,@dptr
   BC12 44 18              3015 	orl	a,#0x18
   BC14 F0                 3016 	movx	@dptr,a
                           3017 ;	../../shared/src/phy_init.c:538: if ( ana_pwr==0x02 ) { //1.8V
   BC15 EB                 3018 	mov	a,r3
   BC16 60 14              3019 	jz	00123$
                           3020 ;	../../shared/src/phy_init.c:539: reg_VCON_MIN_SEL_2_0 = 4;
   BC18 90 82 CC           3021 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_179
   BC1B E0                 3022 	movx	a,@dptr
   BC1C 54 E3              3023 	anl	a,#0xe3
   BC1E 44 10              3024 	orl	a,#0x10
   BC20 F0                 3025 	movx	@dptr,a
                           3026 ;	../../shared/src/phy_init.c:540: reg_VCON_MAX_SEL_2_0 = 5;
   BC21 90 82 CC           3027 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_179
   BC24 E0                 3028 	movx	a,@dptr
   BC25 54 1F              3029 	anl	a,#0x1f
   BC27 44 A0              3030 	orl	a,#0xa0
   BC29 F0                 3031 	movx	@dptr,a
   BC2A 80 10              3032 	sjmp	00124$
   BC2C                    3033 00123$:
                           3034 ;	../../shared/src/phy_init.c:543: reg_VCON_MIN_SEL_2_0 = 0;
   BC2C 90 82 CC           3035 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_179
   BC2F E0                 3036 	movx	a,@dptr
   BC30 54 E3              3037 	anl	a,#0xe3
   BC32 F0                 3038 	movx	@dptr,a
                           3039 ;	../../shared/src/phy_init.c:544: reg_VCON_MAX_SEL_2_0 = 1;
   BC33 90 82 CC           3040 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_179
   BC36 E0                 3041 	movx	a,@dptr
   BC37 54 1F              3042 	anl	a,#0x1f
   BC39 44 20              3043 	orl	a,#0x20
   BC3B F0                 3044 	movx	@dptr,a
   BC3C                    3045 00124$:
                           3046 ;	../../shared/src/phy_init.c:546: cmx_TEMPC_STEP_CTRL_2_0 = 3;
   BC3C 90 E6 12           3047 	mov	dptr,#(_CONTROL_CONFIG3 + 0x0002)
   BC3F E0                 3048 	movx	a,@dptr
   BC40 54 E3              3049 	anl	a,#0xe3
   BC42 44 0C              3050 	orl	a,#0x0c
   BC44 F0                 3051 	movx	@dptr,a
   BC45                    3052 00126$:
                           3053 ;	../../shared/src/phy_init.c:549: if(phy_mode<=SAS)
   BC45 90 A3 16           3054 	mov	dptr,#(_SYSTEM + 0x0002)
   BC48 E0                 3055 	movx	a,@dptr
   BC49 54 07              3056 	anl	a,#0x07
   BC4B FA                 3057 	mov	r2,a
   BC4C C3                 3058 	clr	c
   BC4D 74 81              3059 	mov	a,#(0x01 ^ 0x80)
   BC4F 8A F0              3060 	mov	b,r2
   BC51 63 F0 80           3061 	xrl	b,#0x80
   BC54 95 F0              3062 	subb	a,b
   BC56 40 09              3063 	jc	00128$
                           3064 ;	../../shared/src/phy_init.c:550: reg_LOCAL_STATUS_FIELD_INIT_LANE_15_0 = 0x4000; //tx_init=1
   BC58 90 26 04           3065 	mov	dptr,#_DME_ENC_REG1
   BC5B E4                 3066 	clr	a
   BC5C F0                 3067 	movx	@dptr,a
   BC5D A3                 3068 	inc	dptr
   BC5E 74 40              3069 	mov	a,#0x40
   BC60 F0                 3070 	movx	@dptr,a
   BC61                    3071 00128$:
                           3072 ;	../../shared/src/phy_init.c:553: MCU_WDT_LANE.VAL = 0x0020f424L; //500msec : after pass the time = mcu_clk * reg_mcu_wdt_cnt_lo[15:0] * reg_mcu_wdt_cnt_hi[14:0], mcu trigger PIN_MCU_WDT0/1 to SOC
   BC61 90 22 DC           3073 	mov	dptr,#_MCU_WDT_LANE
   BC64 74 24              3074 	mov	a,#0x24
   BC66 F0                 3075 	movx	@dptr,a
   BC67 A3                 3076 	inc	dptr
   BC68 74 F4              3077 	mov	a,#0xF4
   BC6A F0                 3078 	movx	@dptr,a
   BC6B A3                 3079 	inc	dptr
   BC6C 74 20              3080 	mov	a,#0x20
   BC6E F0                 3081 	movx	@dptr,a
   BC6F A3                 3082 	inc	dptr
   BC70 E4                 3083 	clr	a
   BC71 F0                 3084 	movx	@dptr,a
                           3085 ;	../../shared/src/phy_init.c:554: reg_MCU_WDT_EN_LANE = 1;
   BC72 90 22 DF           3086 	mov	dptr,#(_MCU_WDT_LANE + 0x0003)
   BC75 E0                 3087 	movx	a,@dptr
   BC76 44 80              3088 	orl	a,#0x80
   BC78 F0                 3089 	movx	@dptr,a
                           3090 ;	../../shared/src/phy_init.c:559: reg_VTHVCOCAL_2_0 = 1;
   BC79 90 82 20           3091 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_136
   BC7C E0                 3092 	movx	a,@dptr
   BC7D 54 F1              3093 	anl	a,#0xf1
   BC7F 44 02              3094 	orl	a,#0x02
   BC81 F0                 3095 	movx	@dptr,a
                           3096 ;	../../shared/src/phy_init.c:560: reg_VTHVCOPTAT_2_0 = 6;
   BC82 90 82 24           3097 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_137
   BC85 E0                 3098 	movx	a,@dptr
   BC86 54 1F              3099 	anl	a,#0x1f
   BC88 44 C0              3100 	orl	a,#0xc0
   BC8A F0                 3101 	movx	@dptr,a
                           3102 ;	../../shared/src/phy_init.c:561: reg_CMN_IPP_SLLP_CUR_SEL_2_0 = 4;
   BC8B 90 83 48           3103 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_210
   BC8E E0                 3104 	movx	a,@dptr
   BC8F 54 E3              3105 	anl	a,#0xe3
   BC91 44 10              3106 	orl	a,#0x10
   BC93 F0                 3107 	movx	@dptr,a
                           3108 ;	../../shared/src/phy_init.c:562: reg_SEL_IPP_IPTAT_SLLP_RING_1_0 = 2;
   BC94 90 83 14           3109 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_197
   BC97 E0                 3110 	movx	a,@dptr
   BC98 54 CF              3111 	anl	a,#0xcf
   BC9A 44 20              3112 	orl	a,#0x20
   BC9C F0                 3113 	movx	@dptr,a
                           3114 ;	../../shared/src/phy_init.c:566: reg_PLL_SLLP_DAC_RANGE_SHIFT_RING_1_0 = 1;
   BC9D 90 83 04           3115 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   BCA0 E0                 3116 	movx	a,@dptr
   BCA1 54 CF              3117 	anl	a,#0xcf
   BCA3 44 10              3118 	orl	a,#0x10
   BCA5 F0                 3119 	movx	@dptr,a
                           3120 ;	../../shared/src/phy_init.c:568: reg_VCON_REF_SEL_RING_1_0 = 2;
   BCA6 90 82 24           3121 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_137
   BCA9 E0                 3122 	movx	a,@dptr
   BCAA 54 FC              3123 	anl	a,#0xfc
   BCAC 44 02              3124 	orl	a,#0x02
   BCAE F0                 3125 	movx	@dptr,a
                           3126 ;	../../shared/src/phy_init.c:569: cmx_RINGPLL_DAC_FINE_CODE_RATIO_7_0 = 4;
   BCAF 90 E6 1A           3127 	mov	dptr,#(_CONTROL_CONFIG5 + 0x0002)
   BCB2 74 04              3128 	mov	a,#0x04
   BCB4 F0                 3129 	movx	@dptr,a
                           3130 ;	../../shared/src/phy_init.c:570: cmx_RINGPLL_DAC_MAX_STEP_NUM_7_0 = 0x5;
   BCB5 90 E6 1B           3131 	mov	dptr,#(_CONTROL_CONFIG5 + 0x0003)
   BCB8 74 05              3132 	mov	a,#0x05
   BCBA F0                 3133 	movx	@dptr,a
                           3134 ;	../../shared/src/phy_init.c:571: cmx_RINGPLL_CAL_FINE_STEP_7_0 = 8;
   BCBB 90 E6 45           3135 	mov	dptr,#(_CON_CAL_STEP_SIZE5 + 0x0001)
   BCBE 74 08              3136 	mov	a,#0x08
   BCC0 F0                 3137 	movx	@dptr,a
                           3138 ;	../../shared/src/phy_init.c:572: cmx_RINGPLL_CAL_COUNTER_SIZE_7_0 = 0x20;
   BCC1 90 E6 46           3139 	mov	dptr,#(_CON_CAL_STEP_SIZE5 + 0x0002)
   BCC4 74 20              3140 	mov	a,#0x20
   BCC6 F0                 3141 	movx	@dptr,a
                           3142 ;	../../shared/src/phy_init.c:575: reg_VDDVCO_VTH_12NM_SEL = 1;
   BCC7 90 83 48           3143 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_210
   BCCA E0                 3144 	movx	a,@dptr
   BCCB 44 01              3145 	orl	a,#0x01
   BCCD F0                 3146 	movx	@dptr,a
                           3147 ;	../../shared/src/phy_init.c:579: if (cmx_TX_TRAIN_MODE == 1) {
   BCCE 90 E6 28           3148 	mov	dptr,#_TRAIN_IF_CONFIG
   BCD1 E0                 3149 	movx	a,@dptr
   BCD2 03                 3150 	rr	a
   BCD3 54 01              3151 	anl	a,#0x01
   BCD5 FA                 3152 	mov	r2,a
   BCD6 BA 01 4B           3153 	cjne	r2,#0x01,00131$
                           3154 ;	../../shared/src/phy_init.c:580: reg_TRX_TRAIN_TIMEOUT_EN_LANE = 0; //TRX train timer Enable
   BCD9 90 26 15           3155 	mov	dptr,#(_TX_TRAIN_IF_REG0 + 0x0001)
   BCDC E0                 3156 	movx	a,@dptr
   BCDD 54 FB              3157 	anl	a,#0xfb
   BCDF F0                 3158 	movx	@dptr,a
                           3159 ;	../../shared/src/phy_init.c:581: reg_PATTERN_LOCK_LOST_TIMEOUT_EN_LANE = 0; //disable FRAME detection timer
   BCE0 90 26 17           3160 	mov	dptr,#(_TX_TRAIN_IF_REG0 + 0x0003)
   BCE3 E0                 3161 	movx	a,@dptr
   BCE4 54 FE              3162 	anl	a,#0xfe
   BCE6 F0                 3163 	movx	@dptr,a
                           3164 ;	../../shared/src/phy_init.c:582: reg_REMOTE_RD_REQ_LANE = 1; //always on read out for remote control and status
   BCE7 90 26 0E           3165 	mov	dptr,#(_DME_DEC_REG0 + 0x0002)
   BCEA E0                 3166 	movx	a,@dptr
   BCEB 44 80              3167 	orl	a,#0x80
   BCED F0                 3168 	movx	@dptr,a
                           3169 ;	../../shared/src/phy_init.c:583: reg_LOCAL_CTRL_FM_REG_EN_LANE = 1; //force local control to pin
   BCEE 90 26 1D           3170 	mov	dptr,#(_TX_TRAIN_IF_REG2 + 0x0001)
   BCF1 E0                 3171 	movx	a,@dptr
   BCF2 44 40              3172 	orl	a,#0x40
   BCF4 F0                 3173 	movx	@dptr,a
                           3174 ;	../../shared/src/phy_init.c:584: reg_LOCAL_STATUS_FM_REG_EN_LANE = 1; //force local status to pin
   BCF5 90 26 1D           3175 	mov	dptr,#(_TX_TRAIN_IF_REG2 + 0x0001)
   BCF8 E0                 3176 	movx	a,@dptr
   BCF9 44 80              3177 	orl	a,#0x80
   BCFB F0                 3178 	movx	@dptr,a
                           3179 ;	../../shared/src/phy_init.c:585: reg_LOCAL_FIELD_FORCE_LANE = 1; //force local control and status to dme encoder
   BCFC 90 26 03           3180 	mov	dptr,#(_DME_ENC_REG0 + 0x0003)
   BCFF E0                 3181 	movx	a,@dptr
   BD00 44 04              3182 	orl	a,#0x04
   BD02 F0                 3183 	movx	@dptr,a
                           3184 ;	../../shared/src/phy_init.c:586: reg_LOCAL_BALANCE_CAL_EN_LANE = 1; //enable balance bit cal in force mode
                           3185 ;	../../shared/src/phy_init.c:587: reg_LOCAL_ERROR_EN_LANE = 0; //disable HW error handling
   BD03 90 26 00           3186 	mov	dptr,#_DME_ENC_REG0
   BD06 E0                 3187 	movx	a,@dptr
   BD07 44 80              3188 	orl	a,#0x80
   BD09 F0                 3189 	movx	@dptr,a
   BD0A E0                 3190 	movx	a,@dptr
   BD0B 54 BF              3191 	anl	a,#0xbf
   BD0D F0                 3192 	movx	@dptr,a
                           3193 ;	../../shared/src/phy_init.c:588: reg_TRAIN_PIN_FM_REG_EN_LANE = 0; //not force COMPLETE/FAILD/ERROR
                           3194 ;	../../shared/src/phy_init.c:589: reg_TRAIN_ERR_FM_REG_EN_LANE = 1; //force ERROR
                           3195 ;	../../shared/src/phy_init.c:590: reg_TRAIN_RDY_FM_REG_EN_LANE = 0; //not force READY
   BD0E 90 26 1C           3196 	mov	dptr,#_TX_TRAIN_IF_REG2
   BD11 E0                 3197 	movx	a,@dptr
   BD12 54 FE              3198 	anl	a,#0xfe
   BD14 F0                 3199 	movx	@dptr,a
   BD15 E0                 3200 	movx	a,@dptr
   BD16 44 02              3201 	orl	a,#0x02
   BD18 F0                 3202 	movx	@dptr,a
   BD19 E0                 3203 	movx	a,@dptr
   BD1A 54 FB              3204 	anl	a,#0xfb
   BD1C F0                 3205 	movx	@dptr,a
                           3206 ;	../../shared/src/phy_init.c:591: reg_REMOTE_INIT_FM_REG_EN_LANE = 1; //force remote tx init to aviod READY by HW
   BD1D 90 26 23           3207 	mov	dptr,#(_TX_TRAIN_IF_REG3 + 0x0003)
   BD20 E0                 3208 	movx	a,@dptr
   BD21 44 40              3209 	orl	a,#0x40
   BD23 F0                 3210 	movx	@dptr,a
   BD24                    3211 00131$:
   BD24 02 00 C5           3212 	ljmp	__sdcc_banked_ret
                           3213 ;------------------------------------------------------------
                           3214 ;Allocation info for local variables in function 'reset_pwr_reg'
                           3215 ;------------------------------------------------------------
                           3216 ;------------------------------------------------------------
                           3217 ;	../../shared/src/phy_init.c:607: void reset_pwr_reg(void) BANKING_CTRL {
                           3218 ;	-----------------------------------------
                           3219 ;	 function reset_pwr_reg
                           3220 ;	-----------------------------------------
   BD27                    3221 _reset_pwr_reg:
                           3222 ;	../../shared/src/phy_init.c:610: if((phy_mode == PCIE) || (phy_mode == USB))
   BD27 90 A3 16           3223 	mov	dptr,#(_SYSTEM + 0x0002)
   BD2A E0                 3224 	movx	a,@dptr
   BD2B 54 07              3225 	anl	a,#0x07
   BD2D FA                 3226 	mov	r2,a
   BD2E BA 03 02           3227 	cjne	r2,#0x03,00123$
   BD31 80 0A              3228 	sjmp	00101$
   BD33                    3229 00123$:
   BD33 90 A3 16           3230 	mov	dptr,#(_SYSTEM + 0x0002)
   BD36 E0                 3231 	movx	a,@dptr
   BD37 54 07              3232 	anl	a,#0x07
   BD39 FA                 3233 	mov	r2,a
   BD3A BA 05 09           3234 	cjne	r2,#0x05,00102$
   BD3D                    3235 00101$:
                           3236 ;	../../shared/src/phy_init.c:614: PM_CTRL_INTERRUPT_REG2.BT.B2 = 0; //txdetrx_en_chg|beacon_tx_en_chg
   BD3D 90 20 1E           3237 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG2 + 0x0002)
                           3238 ;	../../shared/src/phy_init.c:615: PM_CTRL_INTERRUPT_REG2.BT.B3 = 0; //power_state_valid|rx_int|regclk_dis
   BD40 E4                 3239 	clr	a
   BD41 F0                 3240 	movx	@dptr,a
   BD42 90 20 1F           3241 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG2 + 0x0003)
   BD45 F0                 3242 	movx	@dptr,a
   BD46                    3243 00102$:
                           3244 ;	../../shared/src/phy_init.c:630: reg_INT3_INT_REFCLK_DIS_CHG_INT_EN_LANE = 0;
   BD46 90 22 4E           3245 	mov	dptr,#(_MCU_INT3_CONTROL + 0x0002)
   BD49 E0                 3246 	movx	a,@dptr
   BD4A 54 F7              3247 	anl	a,#0xf7
   BD4C F0                 3248 	movx	@dptr,a
                           3249 ;	../../shared/src/phy_init.c:631: reg_INT3_INT_PU_IVREF_CHG_INT_EN_LANE = 0;
   BD4D 90 22 4E           3250 	mov	dptr,#(_MCU_INT3_CONTROL + 0x0002)
   BD50 E0                 3251 	movx	a,@dptr
   BD51 54 FB              3252 	anl	a,#0xfb
   BD53 F0                 3253 	movx	@dptr,a
                           3254 ;	../../shared/src/phy_init.c:633: if((phy_mode == PCIE) || (phy_mode == USB))
   BD54 90 A3 16           3255 	mov	dptr,#(_SYSTEM + 0x0002)
   BD57 E0                 3256 	movx	a,@dptr
   BD58 54 07              3257 	anl	a,#0x07
   BD5A FA                 3258 	mov	r2,a
   BD5B BA 03 02           3259 	cjne	r2,#0x03,00126$
   BD5E 80 0A              3260 	sjmp	00104$
   BD60                    3261 00126$:
   BD60 90 A3 16           3262 	mov	dptr,#(_SYSTEM + 0x0002)
   BD63 E0                 3263 	movx	a,@dptr
   BD64 54 07              3264 	anl	a,#0x07
   BD66 FA                 3265 	mov	r2,a
   BD67 BA 05 1C           3266 	cjne	r2,#0x05,00105$
   BD6A                    3267 00104$:
                           3268 ;	../../shared/src/phy_init.c:637: reg_INT9_PM_CHG_INT_EN_LANE = 0;
   BD6A 90 22 64           3269 	mov	dptr,#_MCU_INT9_CONTROL
   BD6D E0                 3270 	movx	a,@dptr
   BD6E 54 FE              3271 	anl	a,#0xfe
   BD70 F0                 3272 	movx	@dptr,a
                           3273 ;	../../shared/src/phy_init.c:638: reg_INT1_INT_POWER_STATE_VALID_RISE_INT_EN_LANE = 0;
   BD71 90 22 46           3274 	mov	dptr,#(_MCU_INT1_CONTROL + 0x0002)
   BD74 E0                 3275 	movx	a,@dptr
   BD75 54 FD              3276 	anl	a,#0xfd
   BD77 F0                 3277 	movx	@dptr,a
                           3278 ;	../../shared/src/phy_init.c:639: reg_INT1_INT_PU_PLL_OR_CHG_INT_EN_LANE = 0;
   BD78 90 22 47           3279 	mov	dptr,#(_MCU_INT1_CONTROL + 0x0003)
   BD7B E0                 3280 	movx	a,@dptr
   BD7C 54 FE              3281 	anl	a,#0xfe
   BD7E F0                 3282 	movx	@dptr,a
                           3283 ;	../../shared/src/phy_init.c:641: reg_INT8_PM_PCIE_FUNC_CHG_INT_EN_LANE = 0;
   BD7F 90 22 61           3284 	mov	dptr,#(_MCU_INT8_CONTROL + 0x0001)
   BD82 E0                 3285 	movx	a,@dptr
   BD83 54 BF              3286 	anl	a,#0xbf
   BD85 F0                 3287 	movx	@dptr,a
   BD86                    3288 00105$:
                           3289 ;	../../shared/src/phy_init.c:664: reg_INT2_SPD_INT_GEN_EN_LANE = 0;
   BD86 90 22 48           3290 	mov	dptr,#_MCU_INT2_CONTROL
   BD89 E0                 3291 	movx	a,@dptr
   BD8A 54 FD              3292 	anl	a,#0xfd
   BD8C F0                 3293 	movx	@dptr,a
                           3294 ;	../../shared/src/phy_init.c:667: reg_INT11_PIN_RX_TRAIN_ENABLE_INT_EN_LANE = 0;
   BD8D 90 22 6D           3295 	mov	dptr,#(_MCU_INT11_CONTROL + 0x0001)
   BD90 E0                 3296 	movx	a,@dptr
   BD91 54 FE              3297 	anl	a,#0xfe
   BD93 F0                 3298 	movx	@dptr,a
                           3299 ;	../../shared/src/phy_init.c:670: reg_INT5_PIN_TX_TRAIN_ENABLE_INT_EN_LANE = 0;
   BD94 90 22 55           3300 	mov	dptr,#(_MCU_INT5_CONTROL + 0x0001)
   BD97 E0                 3301 	movx	a,@dptr
   BD98 54 FD              3302 	anl	a,#0xfd
   BD9A F0                 3303 	movx	@dptr,a
                           3304 ;	../../shared/src/phy_init.c:673: reg_INT10_INT_RX_INIT_RISE_INT_EN_LANE = 0;
   BD9B 90 22 6A           3305 	mov	dptr,#(_MCU_INT10_CONTROL + 0x0002)
   BD9E E0                 3306 	movx	a,@dptr
   BD9F 54 FE              3307 	anl	a,#0xfe
   BDA1 F0                 3308 	movx	@dptr,a
                           3309 ;	../../shared/src/phy_init.c:675: if(phy_mode != PCIE) {
   BDA2 90 A3 16           3310 	mov	dptr,#(_SYSTEM + 0x0002)
   BDA5 E0                 3311 	movx	a,@dptr
   BDA6 54 07              3312 	anl	a,#0x07
   BDA8 FA                 3313 	mov	r2,a
   BDA9 BA 03 02           3314 	cjne	r2,#0x03,00129$
   BDAC 80 07              3315 	sjmp	00108$
   BDAE                    3316 00129$:
                           3317 ;	../../shared/src/phy_init.c:677: reg_INT7_REMOTE_CTRL_VALID_INT_EN_LANE = 0;
   BDAE 90 22 5D           3318 	mov	dptr,#(_MCU_INT7_CONTROL + 0x0001)
   BDB1 E0                 3319 	movx	a,@dptr
   BDB2 54 F7              3320 	anl	a,#0xf7
   BDB4 F0                 3321 	movx	@dptr,a
   BDB5                    3322 00108$:
                           3323 ;	../../shared/src/phy_init.c:693: if(!reg_MASTER_PHY_EN)
   BDB5 90 A3 14           3324 	mov	dptr,#_SYSTEM
   BDB8 E0                 3325 	movx	a,@dptr
   BDB9 20 E3 07           3326 	jb	acc.3,00110$
                           3327 ;	../../shared/src/phy_init.c:694: reg_INT1_DPHY_ANA_LANE_DISABLE_INT_EN_LANE = 0;
   BDBC 90 22 47           3328 	mov	dptr,#(_MCU_INT1_CONTROL + 0x0003)
   BDBF E0                 3329 	movx	a,@dptr
   BDC0 54 F7              3330 	anl	a,#0xf7
   BDC2 F0                 3331 	movx	@dptr,a
   BDC3                    3332 00110$:
                           3333 ;	../../shared/src/phy_init.c:699: if(mcuid== master_mcu) {
   BDC3 90 22 00           3334 	mov	dptr,#_MCU_CONTROL_LANE
   BDC6 E0                 3335 	movx	a,@dptr
   BDC7 FA                 3336 	mov	r2,a
   BDC8 90 E6 50           3337 	mov	dptr,#_MCU_CONFIG
   BDCB E0                 3338 	movx	a,@dptr
   BDCC FB                 3339 	mov	r3,a
   BDCD EA                 3340 	mov	a,r2
   BDCE B5 03 07           3341 	cjne	a,ar3,00112$
                           3342 ;	../../shared/src/phy_init.c:700: reg_INT4_MCU_REMOTE_REQ_INT_EN_LANE = 0;
   BDD1 90 22 53           3343 	mov	dptr,#(_MCU_INT4_CONTROL + 0x0003)
   BDD4 E0                 3344 	movx	a,@dptr
   BDD5 54 EF              3345 	anl	a,#0xef
   BDD7 F0                 3346 	movx	@dptr,a
   BDD8                    3347 00112$:
                           3348 ;	../../shared/src/phy_init.c:703: reg_INT4_PHY_MCU_REMOTE_REQ_INT_EN_LANE = 0;
   BDD8 90 22 53           3349 	mov	dptr,#(_MCU_INT4_CONTROL + 0x0003)
   BDDB E0                 3350 	movx	a,@dptr
   BDDC 54 BF              3351 	anl	a,#0xbf
   BDDE F0                 3352 	movx	@dptr,a
                           3353 ;	../../shared/src/phy_init.c:708: reg_RX_INIT_DONE_LANE = 0;
   BDDF 90 21 02           3354 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   BDE2 E0                 3355 	movx	a,@dptr
   BDE3 54 F7              3356 	anl	a,#0xf7
   BDE5 F0                 3357 	movx	@dptr,a
                           3358 ;	../../shared/src/phy_init.c:709: reg_PIN_PLL_READY_RX_LANE = 0;
   BDE6 90 21 02           3359 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   BDE9 E0                 3360 	movx	a,@dptr
   BDEA 54 BF              3361 	anl	a,#0xbf
   BDEC F0                 3362 	movx	@dptr,a
                           3363 ;	../../shared/src/phy_init.c:710: reg_PIN_PLL_READY_TX_LANE = 0;
   BDED 90 20 02           3364 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   BDF0 E0                 3365 	movx	a,@dptr
   BDF1 54 FB              3366 	anl	a,#0xfb
   BDF3 F0                 3367 	movx	@dptr,a
                           3368 ;	../../shared/src/phy_init.c:712: short_delay();
   BDF4 78 05              3369 	mov	r0,#_short_delay
   BDF6 79 C0              3370 	mov	r1,#(_short_delay >> 8)
   BDF8 7A 02              3371 	mov	r2,#(_short_delay >> 16)
   BDFA 12 00 B3           3372 	lcall	__sdcc_banked_call
                           3373 ;	../../shared/src/phy_init.c:713: short_delay();
   BDFD 78 05              3374 	mov	r0,#_short_delay
   BDFF 79 C0              3375 	mov	r1,#(_short_delay >> 8)
   BE01 7A 02              3376 	mov	r2,#(_short_delay >> 16)
   BE03 12 00 B3           3377 	lcall	__sdcc_banked_call
                           3378 ;	../../shared/src/phy_init.c:715: if(mcuid== master_mcu) {
   BE06 90 22 00           3379 	mov	dptr,#_MCU_CONTROL_LANE
   BE09 E0                 3380 	movx	a,@dptr
   BE0A FA                 3381 	mov	r2,a
   BE0B 90 E6 50           3382 	mov	dptr,#_MCU_CONFIG
   BE0E E0                 3383 	movx	a,@dptr
   BE0F FB                 3384 	mov	r3,a
   BE10 EA                 3385 	mov	a,r2
   BE11 B5 03 02           3386 	cjne	a,ar3,00133$
   BE14 80 02              3387 	sjmp	00134$
   BE16                    3388 00133$:
   BE16 80 79              3389 	sjmp	00114$
   BE18                    3390 00134$:
                           3391 ;	../../shared/src/phy_init.c:716: pll_clk_ready_all_0();
   BE18 78 0E              3392 	mov	r0,#_pll_clk_ready_all_0
   BE1A 79 D5              3393 	mov	r1,#(_pll_clk_ready_all_0 >> 8)
   BE1C 7A 02              3394 	mov	r2,#(_pll_clk_ready_all_0 >> 16)
   BE1E 12 00 B3           3395 	lcall	__sdcc_banked_call
                           3396 ;	../../shared/src/phy_init.c:717: reg_ANA_PU_IVREF = 1;
   BE21 90 A3 4E           3397 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   BE24 E0                 3398 	movx	a,@dptr
   BE25 44 08              3399 	orl	a,#0x08
   BE27 F0                 3400 	movx	@dptr,a
                           3401 ;	../../shared/src/phy_init.c:718: reg_ANA_PU_IVREF_DLY1 =	1;
   BE28 90 A3 4E           3402 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   BE2B E0                 3403 	movx	a,@dptr
   BE2C 44 04              3404 	orl	a,#0x04
   BE2E F0                 3405 	movx	@dptr,a
                           3406 ;	../../shared/src/phy_init.c:719: reg_ANA_PU_IVREF_DLY2 =	1;
   BE2F 90 A3 4E           3407 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   BE32 E0                 3408 	movx	a,@dptr
   BE33 44 02              3409 	orl	a,#0x02
   BE35 F0                 3410 	movx	@dptr,a
                           3411 ;	../../shared/src/phy_init.c:720: reg_ANA_PU_IVREF_DLY3 =	1;
   BE36 90 A3 4E           3412 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   BE39 E0                 3413 	movx	a,@dptr
   BE3A 44 01              3414 	orl	a,#0x01
   BE3C F0                 3415 	movx	@dptr,a
                           3416 ;	../../shared/src/phy_init.c:721: reg_ANA_PU_PLL = 0;
   BE3D 90 A3 1B           3417 	mov	dptr,#(_PM_CMN_REG1 + 0x0003)
   BE40 E0                 3418 	movx	a,@dptr
   BE41 54 FB              3419 	anl	a,#0xfb
   BE43 F0                 3420 	movx	@dptr,a
                           3421 ;	../../shared/src/phy_init.c:722: reg_ANA_PU_PLL_DLY	= 0;
   BE44 90 A3 1B           3422 	mov	dptr,#(_PM_CMN_REG1 + 0x0003)
   BE47 E0                 3423 	movx	a,@dptr
   BE48 54 FE              3424 	anl	a,#0xfe
   BE4A F0                 3425 	movx	@dptr,a
                           3426 ;	../../shared/src/phy_init.c:723: reg_RESET_ANA = 1;
   BE4B 90 A3 19           3427 	mov	dptr,#(_PM_CMN_REG1 + 0x0001)
   BE4E E0                 3428 	movx	a,@dptr
   BE4F 44 10              3429 	orl	a,#0x10
   BE51 F0                 3430 	movx	@dptr,a
                           3431 ;	../../shared/src/phy_init.c:724: reg_REFCLK_DIS_FM_PM = 0;
   BE52 90 A3 1B           3432 	mov	dptr,#(_PM_CMN_REG1 + 0x0003)
   BE55 E0                 3433 	movx	a,@dptr
   BE56 54 7F              3434 	anl	a,#0x7f
   BE58 F0                 3435 	movx	@dptr,a
                           3436 ;	../../shared/src/phy_init.c:726: reg_RESET_ANA_RING = 1;
   BE59 90 A3 33           3437 	mov	dptr,#(_PLLCAL_REG1 + 0x0003)
   BE5C E0                 3438 	movx	a,@dptr
   BE5D 44 08              3439 	orl	a,#0x08
   BE5F F0                 3440 	movx	@dptr,a
                           3441 ;	../../shared/src/phy_init.c:727: reg_ANA_PU_PLL_RING = 0;
   BE60 90 A3 24           3442 	mov	dptr,#_INPUT_CMN_PIN_REG2
   BE63 E0                 3443 	movx	a,@dptr
   BE64 54 DF              3444 	anl	a,#0xdf
   BE66 F0                 3445 	movx	@dptr,a
                           3446 ;	../../shared/src/phy_init.c:728: reg_ANA_PU_PLL_DLY_RING = 0;
   BE67 90 A3 4D           3447 	mov	dptr,#(_PM_CMN_REG2 + 0x0001)
   BE6A E0                 3448 	movx	a,@dptr
   BE6B 54 FB              3449 	anl	a,#0xfb
   BE6D F0                 3450 	movx	@dptr,a
                           3451 ;	../../shared/src/phy_init.c:729: reg_RESET_DTX_RING = 1;
   BE6E 90 A0 11           3452 	mov	dptr,#(_DTX_REG2 + 0x0001)
   BE71 E0                 3453 	movx	a,@dptr
   BE72 44 04              3454 	orl	a,#0x04
   BE74 F0                 3455 	movx	@dptr,a
                           3456 ;	../../shared/src/phy_init.c:730: reg_DTX_CLK_OFF_RING = 1;
   BE75 90 A3 18           3457 	mov	dptr,#_PM_CMN_REG1
   BE78 E0                 3458 	movx	a,@dptr
   BE79 44 01              3459 	orl	a,#0x01
   BE7B F0                 3460 	movx	@dptr,a
                           3461 ;	../../shared/src/phy_init.c:732: reg_DTX_CLK_OFF	= 1;
   BE7C 90 A3 19           3462 	mov	dptr,#(_PM_CMN_REG1 + 0x0001)
   BE7F E0                 3463 	movx	a,@dptr
   BE80 44 01              3464 	orl	a,#0x01
   BE82 F0                 3465 	movx	@dptr,a
                           3466 ;	../../shared/src/phy_init.c:733: reg_RESET_DTX = 1;
   BE83 90 A0 0A           3467 	mov	dptr,#(_DTX_REG0 + 0x0002)
   BE86 E0                 3468 	movx	a,@dptr
   BE87 44 80              3469 	orl	a,#0x80
   BE89 F0                 3470 	movx	@dptr,a
                           3471 ;	../../shared/src/phy_init.c:734: reg_TX_INTPRESET_EXT = 1;
   BE8A 90 82 EC           3472 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_187
   BE8D E0                 3473 	movx	a,@dptr
   BE8E 44 20              3474 	orl	a,#0x20
   BE90 F0                 3475 	movx	@dptr,a
   BE91                    3476 00114$:
                           3477 ;	../../shared/src/phy_init.c:744: reg_ANA_PU_RX_LANE	= 0;
   BE91 90 21 03           3478 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0003)
   BE94 E0                 3479 	movx	a,@dptr
   BE95 54 BF              3480 	anl	a,#0xbf
   BE97 F0                 3481 	movx	@dptr,a
                           3482 ;	../../shared/src/phy_init.c:745: reg_ANA_PU_RX_DLY_LANE	= 0;
   BE98 90 21 01           3483 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0001)
   BE9B E0                 3484 	movx	a,@dptr
   BE9C 54 7F              3485 	anl	a,#0x7f
   BE9E F0                 3486 	movx	@dptr,a
                           3487 ;	../../shared/src/phy_init.c:746: reg_ANA_PU_TX_LANE = 0;
   BE9F 90 20 03           3488 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0003)
   BEA2 E0                 3489 	movx	a,@dptr
   BEA3 54 BF              3490 	anl	a,#0xbf
   BEA5 F0                 3491 	movx	@dptr,a
                           3492 ;	../../shared/src/phy_init.c:747: reg_ANA_PU_SQ_LANE	= 0;
   BEA6 90 21 03           3493 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0003)
   BEA9 E0                 3494 	movx	a,@dptr
   BEAA 54 DF              3495 	anl	a,#0xdf
   BEAC F0                 3496 	movx	@dptr,a
                           3497 ;	../../shared/src/phy_init.c:748: reg_DTL_FLOOP_FREEZE_LANE =	1;
   BEAD 90 21 63           3498 	mov	dptr,#(_DTL_REG0 + 0x0003)
   BEB0 E0                 3499 	movx	a,@dptr
   BEB1 44 40              3500 	orl	a,#0x40
   BEB3 F0                 3501 	movx	@dptr,a
                           3502 ;	../../shared/src/phy_init.c:749: reg_REG_DTL_LOOP_FREEZE_LANE = 1;
   BEB4 90 02 34           3503 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_141
   BEB7 E0                 3504 	movx	a,@dptr
   BEB8 44 20              3505 	orl	a,#0x20
   BEBA F0                 3506 	movx	@dptr,a
                           3507 ;	../../shared/src/phy_init.c:750: reg_DFE_CLK_OFF_LANE = 1;
   BEBB 90 24 10           3508 	mov	dptr,#_RX_EQ_CLK_CTRL
   BEBE E0                 3509 	movx	a,@dptr
   BEBF 44 01              3510 	orl	a,#0x01
   BEC1 F0                 3511 	movx	@dptr,a
                           3512 ;	../../shared/src/phy_init.c:751: reg_RESET_DTL_LANE = 1;
   BEC2 90 21 02           3513 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   BEC5 E0                 3514 	movx	a,@dptr
   BEC6 44 20              3515 	orl	a,#0x20
   BEC8 F0                 3516 	movx	@dptr,a
                           3517 ;	../../shared/src/phy_init.c:752: reg_RESET_DFE_LANE = 1;
   BEC9 90 24 10           3518 	mov	dptr,#_RX_EQ_CLK_CTRL
   BECC E0                 3519 	movx	a,@dptr
   BECD 44 04              3520 	orl	a,#0x04
   BECF F0                 3521 	movx	@dptr,a
                           3522 ;	../../shared/src/phy_init.c:753: reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
   BED0 90 20 07           3523 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   BED3 E0                 3524 	movx	a,@dptr
   BED4 54 BF              3525 	anl	a,#0xbf
   BED6 F0                 3526 	movx	@dptr,a
                           3527 ;	../../shared/src/phy_init.c:754: reg_ANA_TX_IDLE_HIZ_EN_LANE = 0;
   BED7 90 20 07           3528 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   BEDA E0                 3529 	movx	a,@dptr
   BEDB 54 7F              3530 	anl	a,#0x7f
   BEDD F0                 3531 	movx	@dptr,a
                           3532 ;	../../shared/src/phy_init.c:755: reg_ANA_BEACON_EN_LANE = 0;
   BEDE 90 20 00           3533 	mov	dptr,#_PM_CTRL_TX_LANE_REG1_LANE
   BEE1 E0                 3534 	movx	a,@dptr
   BEE2 54 BF              3535 	anl	a,#0xbf
   BEE4 F0                 3536 	movx	@dptr,a
                           3537 ;	../../shared/src/phy_init.c:756: reg_ANA_TXDETRX_START_LANE = 0;
   BEE5 90 20 01           3538 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0001)
   BEE8 E0                 3539 	movx	a,@dptr
   BEE9 54 7F              3540 	anl	a,#0x7f
   BEEB F0                 3541 	movx	@dptr,a
                           3542 ;	../../shared/src/phy_init.c:757: reg_ANA_TXDETRX_EN_LANE = 0;
   BEEC 90 20 02           3543 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   BEEF E0                 3544 	movx	a,@dptr
   BEF0 54 FE              3545 	anl	a,#0xfe
   BEF2 F0                 3546 	movx	@dptr,a
                           3547 ;	../../shared/src/phy_init.c:758: reg_PIN_TXDETRX_VALID_LANE = 0;
   BEF3 90 20 01           3548 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0001)
   BEF6 E0                 3549 	movx	a,@dptr
   BEF7 54 BF              3550 	anl	a,#0xbf
   BEF9 F0                 3551 	movx	@dptr,a
                           3552 ;	../../shared/src/phy_init.c:759: reg_EOM_RESET_INTP_EXT_LANE = 1;
   BEFA 90 00 24           3553 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_9
   BEFD E0                 3554 	movx	a,@dptr
   BEFE 44 08              3555 	orl	a,#0x08
   BF00 F0                 3556 	movx	@dptr,a
                           3557 ;	../../shared/src/phy_init.c:760: reg_RESET_INTP_EXT_LANE = 1;
   BF01 90 02 18           3558 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_134
   BF04 E0                 3559 	movx	a,@dptr
   BF05 44 40              3560 	orl	a,#0x40
   BF07 F0                 3561 	movx	@dptr,a
                           3562 ;	../../shared/src/phy_init.c:762: reg_TRXDCC_CAL_CLK100KHZ_LANE = 0; 
   BF08 90 02 20           3563 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   BF0B E0                 3564 	movx	a,@dptr
   BF0C 54 FE              3565 	anl	a,#0xfe
   BF0E F0                 3566 	movx	@dptr,a
                           3567 ;	../../shared/src/phy_init.c:763: reg_RXDCC_DAC_SYNC_CLK_LANE = 0;
   BF0F 90 00 44           3568 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_17
   BF12 E0                 3569 	movx	a,@dptr
   BF13 54 EF              3570 	anl	a,#0xef
   BF15 F0                 3571 	movx	@dptr,a
                           3572 ;	../../shared/src/phy_init.c:764: reg_TXDCCCAL_EN_LANE = 0;
   BF16 90 02 4C           3573 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_147
   BF19 E0                 3574 	movx	a,@dptr
   BF1A 54 7F              3575 	anl	a,#0x7f
   BF1C F0                 3576 	movx	@dptr,a
                           3577 ;	../../shared/src/phy_init.c:765: reg_RXDCC_CAL_EN_LANE = 0;
   BF1D 90 00 40           3578 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_16
   BF20 E0                 3579 	movx	a,@dptr
   BF21 54 FE              3580 	anl	a,#0xfe
   BF23 F0                 3581 	movx	@dptr,a
                           3582 ;	../../shared/src/phy_init.c:766: reg_TEMPC_DAC_VALID = 0;
   BF24 90 82 C0           3583 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_176
   BF27 E0                 3584 	movx	a,@dptr
   BF28 54 7F              3585 	anl	a,#0x7f
   BF2A F0                 3586 	movx	@dptr,a
                           3587 ;	../../shared/src/phy_init.c:767: reg_EOM_ALIGN_EN_LANE = 0;
   BF2B 90 00 38           3588 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_14
   BF2E E0                 3589 	movx	a,@dptr
   BF2F 54 FE              3590 	anl	a,#0xfe
   BF31 F0                 3591 	movx	@dptr,a
                           3592 ;	../../shared/src/phy_init.c:768: reg_TX_TDCAL_EN_LANE = 0;
   BF32 90 00 60           3593 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_24
   BF35 E0                 3594 	movx	a,@dptr
   BF36 54 FD              3595 	anl	a,#0xfd
   BF38 F0                 3596 	movx	@dptr,a
   BF39 02 00 C5           3597 	ljmp	__sdcc_banked_ret
                           3598 ;------------------------------------------------------------
                           3599 ;Allocation info for local variables in function 'set_timer_cnt'
                           3600 ;------------------------------------------------------------
                           3601 ;temp                      Allocated to registers r2 r3 
                           3602 ;temp32                    Allocated to registers r2 r3 r4 r5 
                           3603 ;i                         Allocated to registers r2 
                           3604 ;------------------------------------------------------------
                           3605 ;	../../shared/src/phy_init.c:773: void set_timer_cnt() BANKING_CTRL {
                           3606 ;	-----------------------------------------
                           3607 ;	 function set_timer_cnt
                           3608 ;	-----------------------------------------
   BF3C                    3609 _set_timer_cnt:
                           3610 ;	../../shared/src/phy_init.c:778: if(cmx_MCU_FREQ_15_0==0) cmx_MCU_FREQ_15_0 = 400;
   BF3C 90 E6 5C           3611 	mov	dptr,#_MCU_CONFIG1
   BF3F E0                 3612 	movx	a,@dptr
   BF40 FA                 3613 	mov	r2,a
   BF41 A3                 3614 	inc	dptr
   BF42 E0                 3615 	movx	a,@dptr
   BF43 FB                 3616 	mov	r3,a
   BF44 4A                 3617 	orl	a,r2
   BF45 70 0A              3618 	jnz	00102$
   BF47 90 E6 5C           3619 	mov	dptr,#_MCU_CONFIG1
   BF4A 74 90              3620 	mov	a,#0x90
   BF4C F0                 3621 	movx	@dptr,a
   BF4D A3                 3622 	inc	dptr
   BF4E 74 01              3623 	mov	a,#0x01
   BF50 F0                 3624 	movx	@dptr,a
   BF51                    3625 00102$:
                           3626 ;	../../shared/src/phy_init.c:779: mcuclk_mc = (uint8_t)((cmx_MCU_FREQ_15_0+8)/15);
   BF51 90 E6 5C           3627 	mov	dptr,#_MCU_CONFIG1
   BF54 E0                 3628 	movx	a,@dptr
   BF55 FA                 3629 	mov	r2,a
   BF56 A3                 3630 	inc	dptr
   BF57 E0                 3631 	movx	a,@dptr
   BF58 FB                 3632 	mov	r3,a
   BF59 74 08              3633 	mov	a,#0x08
   BF5B 2A                 3634 	add	a,r2
   BF5C F5 82              3635 	mov	dpl,a
   BF5E E4                 3636 	clr	a
   BF5F 3B                 3637 	addc	a,r3
   BF60 F5 83              3638 	mov	dph,a
   BF62 74 0F              3639 	mov	a,#0x0F
   BF64 C0 E0              3640 	push	acc
   BF66 E4                 3641 	clr	a
   BF67 C0 E0              3642 	push	acc
   BF69 12 78 05           3643 	lcall	__divuint
   BF6C AA 82              3644 	mov	r2,dpl
   BF6E 15 81              3645 	dec	sp
   BF70 15 81              3646 	dec	sp
   BF72 90 66 19           3647 	mov	dptr,#_mcuclk_mc
   BF75 EA                 3648 	mov	a,r2
   BF76 F0                 3649 	movx	@dptr,a
                           3650 ;	../../shared/src/phy_init.c:780: reg_MCU_DEBUG0_LANE_7_0 = mcuclk_mc;
   BF77 90 22 B4           3651 	mov	dptr,#_MCU_DEBUG0_LANE
   BF7A EA                 3652 	mov	a,r2
   BF7B F0                 3653 	movx	@dptr,a
                           3654 ;	../../shared/src/phy_init.c:782: i = reg_PIN_REF_FREF_SEL_RD_4_0;
   BF7C 90 A3 2B           3655 	mov	dptr,#(_ANA_TSEN_CONTROL + 0x0003)
   BF7F E0                 3656 	movx	a,@dptr
   BF80 C4                 3657 	swap	a
   BF81 23                 3658 	rl	a
   BF82 54 1F              3659 	anl	a,#0x1f
                           3660 ;	../../shared/src/phy_init.c:783: cmx_REFCLK_FREQ_7_0 = refclk_tb[i];
   BF84 90 C0 59           3661 	mov	dptr,#_refclk_tb
   BF87 93                 3662 	movc	a,@a+dptr
   BF88 FA                 3663 	mov	r2,a
   BF89 90 E6 2F           3664 	mov	dptr,#(_CONTROL_CONFIG8 + 0x0003)
   BF8C EA                 3665 	mov	a,r2
   BF8D F0                 3666 	movx	@dptr,a
                           3667 ;	../../shared/src/phy_init.c:787: reg_TIMER_1_SEL_LANE_1_0 = 0x01;	//PWM1
   BF8E 90 22 98           3668 	mov	dptr,#_MCU_TIMER_CTRL_1_LANE
   BF91 E0                 3669 	movx	a,@dptr
   BF92 54 F3              3670 	anl	a,#0xf3
   BF94 44 04              3671 	orl	a,#0x04
   BF96 F0                 3672 	movx	@dptr,a
                           3673 ;	../../shared/src/phy_init.c:788: reg_TIMER_2_SEL_LANE_1_0 = 0x01;	//PWM1
   BF97 90 22 98           3674 	mov	dptr,#_MCU_TIMER_CTRL_1_LANE
   BF9A E0                 3675 	movx	a,@dptr
   BF9B 54 CF              3676 	anl	a,#0xcf
   BF9D 44 10              3677 	orl	a,#0x10
   BF9F F0                 3678 	movx	@dptr,a
                           3679 ;	../../shared/src/phy_init.c:789: reg_PWM1_CLK_SEL_LANE_1_0 = 0; //refclk 
   BFA0 90 22 AC           3680 	mov	dptr,#_MCU_TIMER_CTRL_6_LANE
   BFA3 E0                 3681 	movx	a,@dptr
   BFA4 54 F3              3682 	anl	a,#0xf3
   BFA6 F0                 3683 	movx	@dptr,a
                           3684 ;	../../shared/src/phy_init.c:790: reg_PWM1_EN_LANE = 1;
   BFA7 90 22 A3           3685 	mov	dptr,#(_MCU_TIMER_CTRL_3_LANE + 0x0003)
   BFAA E0                 3686 	movx	a,@dptr
   BFAB 44 80              3687 	orl	a,#0x80
   BFAD F0                 3688 	movx	@dptr,a
                           3689 ;	../../shared/src/phy_init.c:791: temp = cmx_REFCLK_FREQ_7_0>>1;
   BFAE 90 E6 2F           3690 	mov	dptr,#(_CONTROL_CONFIG8 + 0x0003)
   BFB1 E0                 3691 	movx	a,@dptr
   BFB2 C3                 3692 	clr	c
   BFB3 13                 3693 	rrc	a
   BFB4 FA                 3694 	mov	r2,a
   BFB5 7B 00              3695 	mov	r3,#0x00
                           3696 ;	../../shared/src/phy_init.c:792: reg_PWM1_COUNTER_LANE_30_0_b0 = (uint8_t)temp;
   BFB7 8A 04              3697 	mov	ar4,r2
   BFB9 90 22 A0           3698 	mov	dptr,#_MCU_TIMER_CTRL_3_LANE
   BFBC EC                 3699 	mov	a,r4
   BFBD F0                 3700 	movx	@dptr,a
                           3701 ;	../../shared/src/phy_init.c:793: reg_PWM1_COUNTER_LANE_30_0_b1 = (uint8_t)(temp >> 8);
   BFBE 8B 02              3702 	mov	ar2,r3
   BFC0 90 22 A1           3703 	mov	dptr,#(_MCU_TIMER_CTRL_3_LANE + 0x0001)
   BFC3 EA                 3704 	mov	a,r2
   BFC4 F0                 3705 	movx	@dptr,a
                           3706 ;	../../shared/src/phy_init.c:796: reg_PWM2_CLK_SEL_LANE_1_0 = 0; //refclk 
   BFC5 90 22 AC           3707 	mov	dptr,#_MCU_TIMER_CTRL_6_LANE
   BFC8 E0                 3708 	movx	a,@dptr
   BFC9 54 CF              3709 	anl	a,#0xcf
   BFCB F0                 3710 	movx	@dptr,a
                           3711 ;	../../shared/src/phy_init.c:797: temp32 = cmx_REFCLK_FREQ_7_0*500L;
   BFCC 90 E6 2F           3712 	mov	dptr,#(_CONTROL_CONFIG8 + 0x0003)
   BFCF E0                 3713 	movx	a,@dptr
   BFD0 FA                 3714 	mov	r2,a
   BFD1 7B 00              3715 	mov	r3,#0x00
   BFD3 7C 00              3716 	mov	r4,#0x00
   BFD5 7D 00              3717 	mov	r5,#0x00
   BFD7 C0 02              3718 	push	ar2
   BFD9 C0 03              3719 	push	ar3
   BFDB C0 04              3720 	push	ar4
   BFDD C0 05              3721 	push	ar5
   BFDF 90 01 F4           3722 	mov	dptr,#0x01F4
   BFE2 E4                 3723 	clr	a
   BFE3 F5 F0              3724 	mov	b,a
   BFE5 12 79 50           3725 	lcall	__mullong
   BFE8 AA 82              3726 	mov	r2,dpl
   BFEA AB 83              3727 	mov	r3,dph
   BFEC AC F0              3728 	mov	r4,b
   BFEE FD                 3729 	mov	r5,a
   BFEF E5 81              3730 	mov	a,sp
   BFF1 24 FC              3731 	add	a,#0xfc
   BFF3 F5 81              3732 	mov	sp,a
                           3733 ;	../../shared/src/phy_init.c:798: reg_PWM2_COUNTER_LANE_30_0_b0 = (uint8_t)temp32;
   BFF5 8A 06              3734 	mov	ar6,r2
   BFF7 90 22 A4           3735 	mov	dptr,#_MCU_TIMER_CTRL_4_LANE
   BFFA EE                 3736 	mov	a,r6
   BFFB F0                 3737 	movx	@dptr,a
                           3738 ;	../../shared/src/phy_init.c:799: reg_PWM2_COUNTER_LANE_30_0_b1 = (uint8_t)(temp32 >> 8);
   BFFC 8B 06              3739 	mov	ar6,r3
   BFFE 90 22 A5           3740 	mov	dptr,#(_MCU_TIMER_CTRL_4_LANE + 0x0001)
   C001 EE                 3741 	mov	a,r6
   C002 F0                 3742 	movx	@dptr,a
                           3743 ;	../../shared/src/phy_init.c:800: reg_PWM2_COUNTER_LANE_30_0_b2 = (uint8_t)(temp32 >> 16);
   C003 8C 02              3744 	mov	ar2,r4
   C005 90 22 A6           3745 	mov	dptr,#(_MCU_TIMER_CTRL_4_LANE + 0x0002)
   C008 EA                 3746 	mov	a,r2
   C009 F0                 3747 	movx	@dptr,a
                           3748 ;	../../shared/src/phy_init.c:803: reg_TIMER_3_EN_LANE = 0;
   C00A 90 22 74           3749 	mov	dptr,#_MCU_TIMER_CONTROL
   C00D E0                 3750 	movx	a,@dptr
   C00E 54 F7              3751 	anl	a,#0xf7
   C010 F0                 3752 	movx	@dptr,a
                           3753 ;	../../shared/src/phy_init.c:804: reg_TIMER3_CLK_SEL_LANE_1_0 = 0; //refclk
   C011 90 22 B0           3754 	mov	dptr,#_MCU_TIMER_CTRL_7_LANE
   C014 E0                 3755 	movx	a,@dptr
   C015 54 3F              3756 	anl	a,#0x3f
   C017 F0                 3757 	movx	@dptr,a
                           3758 ;	../../shared/src/phy_init.c:805: reg_TIMER3_HI_CNT_LANE_15_0 = 500;
   C018 90 22 84           3759 	mov	dptr,#_MCU_TIMER3_CONTROL
   C01B 74 F4              3760 	mov	a,#0xF4
   C01D F0                 3761 	movx	@dptr,a
   C01E A3                 3762 	inc	dptr
   C01F 74 01              3763 	mov	a,#0x01
   C021 F0                 3764 	movx	@dptr,a
                           3765 ;	../../shared/src/phy_init.c:806: reg_TIMER3_LO_CNT_LANE_15_0 = u16mul(cmx_REFCLK_FREQ_7_0, lnx_TX_TRAIN_FRAME_DET_TIMER_LANE_7_0+1);
   C022 90 60 2A           3766 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS1_LANE + 0x0002)
   C025 E0                 3767 	movx	a,@dptr
   C026 FA                 3768 	mov	r2,a
   C027 7B 00              3769 	mov	r3,#0x00
   C029 0A                 3770 	inc	r2
   C02A BA 00 01           3771 	cjne	r2,#0x00,00107$
   C02D 0B                 3772 	inc	r3
   C02E                    3773 00107$:
   C02E 90 E6 2F           3774 	mov	dptr,#(_CONTROL_CONFIG8 + 0x0003)
   C031 E0                 3775 	movx	a,@dptr
   C032 FC                 3776 	mov	r4,a
   C033 7D 00              3777 	mov	r5,#0x00
   C035 C0 02              3778 	push	ar2
   C037 C0 03              3779 	push	ar3
   C039 8C 82              3780 	mov	dpl,r4
   C03B 8D 83              3781 	mov	dph,r5
   C03D 78 8D              3782 	mov	r0,#_u16mul
   C03F 79 BF              3783 	mov	r1,#(_u16mul >> 8)
   C041 7A 02              3784 	mov	r2,#(_u16mul >> 16)
   C043 12 00 B3           3785 	lcall	__sdcc_banked_call
   C046 AA 82              3786 	mov	r2,dpl
   C048 AB 83              3787 	mov	r3,dph
   C04A 15 81              3788 	dec	sp
   C04C 15 81              3789 	dec	sp
   C04E 90 22 86           3790 	mov	dptr,#(_MCU_TIMER3_CONTROL + 0x0002)
   C051 EA                 3791 	mov	a,r2
   C052 F0                 3792 	movx	@dptr,a
   C053 A3                 3793 	inc	dptr
   C054 EB                 3794 	mov	a,r3
   C055 F0                 3795 	movx	@dptr,a
   C056 02 00 C5           3796 	ljmp	__sdcc_banked_ret
                           3797 	.area CSEG    (CODE)
                           3798 	.area BANK1   (CODE)
   C059                    3799 _refclk_tb:
   C059 19                 3800 	.db #0x19	; 25
   C05A 1E                 3801 	.db #0x1E	; 30
   C05B 28                 3802 	.db #0x28	; 40
   C05C 32                 3803 	.db #0x32	; 50
   C05D 3E                 3804 	.db #0x3E	; 62
   C05E 64                 3805 	.db #0x64	; 100	d
   C05F 7D                 3806 	.db #0x7D	; 125
   C060 9C                 3807 	.db #0x9C	; 156
                           3808 	.area CABS    (ABS,CODE)
