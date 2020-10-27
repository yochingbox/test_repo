                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:22:00 2018
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
   C2C8                    2038 _clear_xdata:
                    0002   2039 	ar2 = 0x02
                    0003   2040 	ar3 = 0x03
                    0004   2041 	ar4 = 0x04
                    0005   2042 	ar5 = 0x05
                    0006   2043 	ar6 = 0x06
                    0007   2044 	ar7 = 0x07
                    0000   2045 	ar0 = 0x00
                    0001   2046 	ar1 = 0x01
                           2047 ;	../../shared/src/phy_init.c:32: reg_MCU_DEBUG0_LANE_7_0 = lnx_END_XDAT_LANE_7_0;
   C2C8 90 60 F8           2048 	mov	dptr,#_END_XDAT_LANE
   C2CB E0                 2049 	movx	a,@dptr
   C2CC FA                 2050 	mov	r2,a
   C2CD 90 22 B4           2051 	mov	dptr,#_MCU_DEBUG0_LANE
   C2D0 EA                 2052 	mov	a,r2
   C2D1 F0                 2053 	movx	@dptr,a
                           2054 ;	../../shared/src/phy_init.c:33: while(lnx_END_XDAT_LANE_7_0!=0xaa || cmx_END_XDAT_CMN_7_0!=0xaa);
   C2D2                    2055 00102$:
   C2D2 90 60 F8           2056 	mov	dptr,#_END_XDAT_LANE
   C2D5 E0                 2057 	movx	a,@dptr
   C2D6 FA                 2058 	mov	r2,a
   C2D7 BA AA F8           2059 	cjne	r2,#0xAA,00102$
   C2DA 90 E6 C4           2060 	mov	dptr,#_END_XDAT_CMN
   C2DD E0                 2061 	movx	a,@dptr
   C2DE FA                 2062 	mov	r2,a
   C2DF BA AA F0           2063 	cjne	r2,#0xAA,00102$
                           2064 ;	../../shared/src/phy_init.c:34: reg_MCU_DEBUG0_LANE_7_0 = lnx_END_XDAT_LANE_7_0;
   C2E2 90 60 F8           2065 	mov	dptr,#_END_XDAT_LANE
   C2E5 E0                 2066 	movx	a,@dptr
   C2E6 FA                 2067 	mov	r2,a
   C2E7 90 22 B4           2068 	mov	dptr,#_MCU_DEBUG0_LANE
   C2EA EA                 2069 	mov	a,r2
   C2EB F0                 2070 	movx	@dptr,a
                           2071 ;	../../shared/src/phy_init.c:36: if(master_mcu > MAX_MCU_ID) master_mcu = MCU_LANE0;
   C2EC 90 E6 50           2072 	mov	dptr,#_MCU_CONFIG
   C2EF E0                 2073 	movx	a,@dptr
   C2F0 FA                 2074 	mov	r2,a
   C2F1 74 01              2075 	mov	a,#0x01
   C2F3 B5 02 00           2076 	cjne	a,ar2,00120$
   C2F6                    2077 00120$:
   C2F6 50 05              2078 	jnc	00106$
   C2F8 90 E6 50           2079 	mov	dptr,#_MCU_CONFIG
   C2FB E4                 2080 	clr	a
   C2FC F0                 2081 	movx	@dptr,a
   C2FD                    2082 00106$:
                           2083 ;	../../shared/src/phy_init.c:66: sync_status_lane(IDLE);
   C2FD 75 82 00           2084 	mov	dpl,#0x00
   C300 78 8A              2085 	mov	r0,#_sync_status_lane
   C302 79 B0              2086 	mov	r1,#(_sync_status_lane >> 8)
   C304 7A 01              2087 	mov	r2,#(_sync_status_lane >> 16)
   C306 12 00 B3           2088 	lcall	__sdcc_banked_call
                           2089 ;	../../shared/src/phy_init.c:67: if(mcuid== master_mcu) {
   C309 90 22 00           2090 	mov	dptr,#_MCU_CONTROL_LANE
   C30C E0                 2091 	movx	a,@dptr
   C30D FA                 2092 	mov	r2,a
   C30E 90 E6 50           2093 	mov	dptr,#_MCU_CONFIG
   C311 E0                 2094 	movx	a,@dptr
   C312 FB                 2095 	mov	r3,a
   C313 EA                 2096 	mov	a,r2
   C314 B5 03 07           2097 	cjne	a,ar3,00108$
                           2098 ;	../../shared/src/phy_init.c:72: cmx_MCU_INIT_DONE = 1;  // Used in simulation
   C317 90 E6 05           2099 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0001)
   C31A E0                 2100 	movx	a,@dptr
   C31B 44 02              2101 	orl	a,#0x02
   C31D F0                 2102 	movx	@dptr,a
   C31E                    2103 00108$:
                           2104 ;	../../shared/src/phy_init.c:76: sync_check = 0;
   C31E C2 02              2105 	clr	_sync_check
                           2106 ;	../../shared/src/phy_init.c:77: rx_pll_rate = 0;
   C320 C2 0E              2107 	clr	_rx_pll_rate
                           2108 ;	../../shared/src/phy_init.c:78: tx_pll_rate = 0;
   C322 C2 0F              2109 	clr	_tx_pll_rate
                           2110 ;	../../shared/src/phy_init.c:79: gen_pll_rate = 0;
   C324 90 67 8C           2111 	mov	dptr,#_gen_pll_rate
   C327 E4                 2112 	clr	a
   C328 F0                 2113 	movx	@dptr,a
                           2114 ;	../../shared/src/phy_init.c:80: pre_gen_pll_rate = 0xff;
   C329 90 67 8D           2115 	mov	dptr,#_pre_gen_pll_rate
   C32C 74 FF              2116 	mov	a,#0xFF
   C32E F0                 2117 	movx	@dptr,a
                           2118 ;	../../shared/src/phy_init.c:81: use_ring_pll = 0;
   C32F C2 10              2119 	clr	_use_ring_pll
                           2120 ;	../../shared/src/phy_init.c:82: ring_pll_enabled = 0;
   C331 C2 12              2121 	clr	_ring_pll_enabled
                           2122 ;	../../shared/src/phy_init.c:83: ring_use_250m = 0;
   C333 C2 13              2123 	clr	_ring_use_250m
                           2124 ;	../../shared/src/phy_init.c:84: force_exit_cal = 0;
   C335 C2 14              2125 	clr	_force_exit_cal
                           2126 ;	../../shared/src/phy_init.c:85: adapt_slicer_en = 0;
   C337 C2 0C              2127 	clr	_adapt_slicer_en
                           2128 ;	../../shared/src/phy_init.c:86: adapt_data_en = 0;
   C339 C2 0D              2129 	clr	_adapt_data_en
                           2130 ;	../../shared/src/phy_init.c:87: no_pllspdchg = 0;
   C33B C2 15              2131 	clr	_no_pllspdchg
                           2132 ;	../../shared/src/phy_init.c:88: lc_pll_used = 0;
   C33D C2 11              2133 	clr	_lc_pll_used
                           2134 ;	../../shared/src/phy_init.c:89: int_pu_rx = 0;
   C33F C2 00              2135 	clr	_int_pu_rx
                           2136 ;	../../shared/src/phy_init.c:90: int_pu_tx = 0;
   C341 C2 01              2137 	clr	_int_pu_tx
                           2138 ;	../../shared/src/phy_init.c:91: tx_status_pcie_mode = 0;
   C343 C2 27              2139 	clr	_tx_status_pcie_mode
                           2140 ;	../../shared/src/phy_init.c:92: tx_pipe4_en = 0;
   C345 C2 26              2141 	clr	_tx_pipe4_en
                           2142 ;	../../shared/src/phy_init.c:93: gain_train_with_c = 0;
   C347 C2 24              2143 	clr	_gain_train_with_c
                           2144 ;	../../shared/src/phy_init.c:94: tx_init_bit = 0;
   C349 90 67 10           2145 	mov	dptr,#_tx_init_bit
   C34C E4                 2146 	clr	a
   C34D F0                 2147 	movx	@dptr,a
                           2148 ;	../../shared/src/phy_init.c:96: PLL_RATE_SEL = 0xff;
   C34E 90 E6 1E           2149 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0002)
   C351 74 FF              2150 	mov	a,#0xFF
   C353 F0                 2151 	movx	@dptr,a
                           2152 ;	../../shared/src/phy_init.c:97: PLL_RATE_SEL_RING = 0xff;	// TODO - should this be defined in xdat_lane.h?
   C354 90 E6 1F           2153 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0003)
   C357 74 FF              2154 	mov	a,#0xFF
   C359 F0                 2155 	movx	@dptr,a
                           2156 ;	../../shared/src/phy_init.c:98: invalidate_pll_rate = 0;
   C35A 90 67 90           2157 	mov	dptr,#_invalidate_pll_rate
   C35D E4                 2158 	clr	a
   C35E F0                 2159 	movx	@dptr,a
   C35F 02 00 C5           2160 	ljmp	__sdcc_banked_ret
                           2161 ;------------------------------------------------------------
                           2162 ;Allocation info for local variables in function 'init_xdata'
                           2163 ;------------------------------------------------------------
                           2164 ;------------------------------------------------------------
                           2165 ;	../../shared/src/phy_init.c:115: void init_xdata(void) BANKING_CTRL {
                           2166 ;	-----------------------------------------
                           2167 ;	 function init_xdata
                           2168 ;	-----------------------------------------
   C362                    2169 _init_xdata:
                           2170 ;	../../shared/src/phy_init.c:117: if(master_mcu > MAX_MCU_ID) master_mcu = MCU_LANE0;
   C362 90 E6 50           2171 	mov	dptr,#_MCU_CONFIG
   C365 E0                 2172 	movx	a,@dptr
   C366 FA                 2173 	mov	r2,a
   C367 74 01              2174 	mov	a,#0x01
   C369 B5 02 00           2175 	cjne	a,ar2,00127$
   C36C                    2176 00127$:
   C36C 50 05              2177 	jnc	00102$
   C36E 90 E6 50           2178 	mov	dptr,#_MCU_CONFIG
   C371 E4                 2179 	clr	a
   C372 F0                 2180 	movx	@dptr,a
   C373                    2181 00102$:
                           2182 ;	../../shared/src/phy_init.c:121: pcie_usb_mode =  ( ( phy_mode == PCIE ) || ( phy_mode == USB ) ) ? 1 : 0;
   C373 90 A3 16           2183 	mov	dptr,#(_SYSTEM + 0x0002)
   C376 E0                 2184 	movx	a,@dptr
   C377 54 07              2185 	anl	a,#0x07
   C379 FA                 2186 	mov	r2,a
   C37A BA 03 02           2187 	cjne	r2,#0x03,00129$
   C37D 80 10              2188 	sjmp	00117$
   C37F                    2189 00129$:
   C37F 90 A3 16           2190 	mov	dptr,#(_SYSTEM + 0x0002)
   C382 E0                 2191 	movx	a,@dptr
   C383 54 07              2192 	anl	a,#0x07
   C385 FA                 2193 	mov	r2,a
   C386 BA 05 02           2194 	cjne	r2,#0x05,00130$
   C389 80 04              2195 	sjmp	00117$
   C38B                    2196 00130$:
   C38B 7A 00              2197 	mov	r2,#0x00
   C38D 80 02              2198 	sjmp	00118$
   C38F                    2199 00117$:
   C38F 7A 01              2200 	mov	r2,#0x01
   C391                    2201 00118$:
   C391 EA                 2202 	mov	a,r2
   C392 60 04              2203 	jz	00114$
   C394 7A 01              2204 	mov	r2,#0x01
   C396 80 02              2205 	sjmp	00115$
   C398                    2206 00114$:
   C398 7A 00              2207 	mov	r2,#0x00
   C39A                    2208 00115$:
   C39A 90 67 14           2209 	mov	dptr,#_pcie_usb_mode
   C39D EA                 2210 	mov	a,r2
   C39E F0                 2211 	movx	@dptr,a
                           2212 ;	../../shared/src/phy_init.c:124: if(FAST_POWER_ON_EN) CONTROL_CONFIG0.BT.B2 |= 0x30; // bypass delay_time, bypass_poweron_delay 
   C39F 90 E6 07           2213 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   C3A2 E0                 2214 	movx	a,@dptr
   C3A3 30 E4 0D           2215 	jnb	acc.4,00104$
   C3A6 90 E6 06           2216 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0002)
   C3A9 E0                 2217 	movx	a,@dptr
   C3AA FB                 2218 	mov	r3,a
   C3AB 43 03 30           2219 	orl	ar3,#0x30
   C3AE 90 E6 06           2220 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0002)
   C3B1 EB                 2221 	mov	a,r3
   C3B2 F0                 2222 	movx	@dptr,a
   C3B3                    2223 00104$:
                           2224 ;	../../shared/src/phy_init.c:125: reg_SET_MCU_COMMAND_LANE0_31_0_b0 |= CONTROL_CONFIG0.BT.B2;
   C3B3 90 A2 34           2225 	mov	dptr,#_MCU_INFO_0
   C3B6 E0                 2226 	movx	a,@dptr
   C3B7 FB                 2227 	mov	r3,a
   C3B8 90 E6 06           2228 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0002)
   C3BB E0                 2229 	movx	a,@dptr
   C3BC 42 03              2230 	orl	ar3,a
   C3BE 90 A2 34           2231 	mov	dptr,#_MCU_INFO_0
   C3C1 EB                 2232 	mov	a,r3
   C3C2 F0                 2233 	movx	@dptr,a
                           2234 ;	../../shared/src/phy_init.c:126: reg_SET_MCU_COMMAND_LANE1_31_0_b0 |= CONTROL_CONFIG0.BT.B2;
   C3C3 90 A2 38           2235 	mov	dptr,#_MCU_INFO_1
   C3C6 E0                 2236 	movx	a,@dptr
   C3C7 FB                 2237 	mov	r3,a
   C3C8 90 E6 06           2238 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0002)
   C3CB E0                 2239 	movx	a,@dptr
   C3CC 42 03              2240 	orl	ar3,a
   C3CE 90 A2 38           2241 	mov	dptr,#_MCU_INFO_1
   C3D1 EB                 2242 	mov	a,r3
   C3D2 F0                 2243 	movx	@dptr,a
                           2244 ;	../../shared/src/phy_init.c:132: force_exit_cal = FORCE_EXIT_CAL | cmx_EXT_FORCE_CAL_DONE;
   C3D3 90 E6 06           2245 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0002)
   C3D6 E0                 2246 	movx	a,@dptr
   C3D7 03                 2247 	rr	a
   C3D8 54 01              2248 	anl	a,#0x01
   C3DA FB                 2249 	mov	r3,a
   C3DB 90 E6 06           2250 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0002)
   C3DE E0                 2251 	movx	a,@dptr
   C3DF 03                 2252 	rr	a
   C3E0 54 01              2253 	anl	a,#0x01
   C3E2 4B                 2254 	orl	a,r3
   C3E3 24 FF              2255 	add	a,#0xff
   C3E5 92 14              2256 	mov	_force_exit_cal,c
                           2257 ;	../../shared/src/phy_init.c:135: if(mcuid== master_mcu) {
   C3E7 90 22 00           2258 	mov	dptr,#_MCU_CONTROL_LANE
   C3EA E0                 2259 	movx	a,@dptr
   C3EB FB                 2260 	mov	r3,a
   C3EC 90 E6 50           2261 	mov	dptr,#_MCU_CONFIG
   C3EF E0                 2262 	movx	a,@dptr
   C3F0 FC                 2263 	mov	r4,a
   C3F1 EB                 2264 	mov	a,r3
   C3F2 B5 04 4D           2265 	cjne	a,ar4,00108$
                           2266 ;	../../shared/src/phy_init.c:136: pllcal_first_time = 1;
   C3F5 90 66 25           2267 	mov	dptr,#_pllcal_first_time
   C3F8 74 01              2268 	mov	a,#0x01
   C3FA F0                 2269 	movx	@dptr,a
                           2270 ;	../../shared/src/phy_init.c:158: cmx_FW_MAJOR_VER_7_0 = MAJOR_VER;
   C3FB 90 E6 03           2271 	mov	dptr,#(_FW_REV + 0x0003)
   C3FE E4                 2272 	clr	a
   C3FF F0                 2273 	movx	@dptr,a
                           2274 ;	../../shared/src/phy_init.c:159: cmx_FW_MINOR_VER_7_0 = MINOR_VER;
   C400 90 E6 02           2275 	mov	dptr,#(_FW_REV + 0x0002)
   C403 74 0C              2276 	mov	a,#0x0C
   C405 F0                 2277 	movx	@dptr,a
                           2278 ;	../../shared/src/phy_init.c:160: cmx_FW_PATCH_VER_7_0 = PATCH_VER;
   C406 90 E6 01           2279 	mov	dptr,#(_FW_REV + 0x0001)
   C409 74 08              2280 	mov	a,#0x08
   C40B F0                 2281 	movx	@dptr,a
                           2282 ;	../../shared/src/phy_init.c:161: cmx_FW_BUILD_VER_7_0 = BUILD_VER;
   C40C 90 E6 00           2283 	mov	dptr,#_FW_REV
   C40F 74 26              2284 	mov	a,#0x26
   C411 F0                 2285 	movx	@dptr,a
                           2286 ;	../../shared/src/phy_init.c:162: reg_MCU_DEBUG0_LANE_7_0 = 0x60;
   C412 90 22 B4           2287 	mov	dptr,#_MCU_DEBUG0_LANE
   C415 74 60              2288 	mov	a,#0x60
   C417 F0                 2289 	movx	@dptr,a
                           2290 ;	../../shared/src/phy_init.c:163: reg_MCU_DEBUG1_LANE_7_0 = MAJOR_VER;
   C418 90 22 B5           2291 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0001)
   C41B E4                 2292 	clr	a
   C41C F0                 2293 	movx	@dptr,a
                           2294 ;	../../shared/src/phy_init.c:164: reg_MCU_DEBUG2_LANE_7_0 = MINOR_VER;
   C41D 90 22 B6           2295 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0002)
   C420 74 0C              2296 	mov	a,#0x0C
   C422 F0                 2297 	movx	@dptr,a
                           2298 ;	../../shared/src/phy_init.c:165: reg_MCU_DEBUG3_LANE_7_0 = PATCH_VER;
   C423 90 22 B7           2299 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0003)
   C426 74 08              2300 	mov	a,#0x08
   C428 F0                 2301 	movx	@dptr,a
                           2302 ;	../../shared/src/phy_init.c:166: reg_MCU_DEBUG4_LANE_7_0 = BUILD_VER;
   C429 90 22 B8           2303 	mov	dptr,#_MCU_DEBUG1_LANE
   C42C 74 26              2304 	mov	a,#0x26
   C42E F0                 2305 	movx	@dptr,a
                           2306 ;	../../shared/src/phy_init.c:173: if(phy_mode == SATA) {
   C42F 90 A3 16           2307 	mov	dptr,#(_SYSTEM + 0x0002)
   C432 E0                 2308 	movx	a,@dptr
   C433 54 07              2309 	anl	a,#0x07
   C435 70 0B              2310 	jnz	00108$
                           2311 ;	../../shared/src/phy_init.c:193: CONTROL_CONFIG2.BT.B2 = 0x32;
   C437 90 E6 0E           2312 	mov	dptr,#(_CONTROL_CONFIG2 + 0x0002)
   C43A 74 32              2313 	mov	a,#0x32
   C43C F0                 2314 	movx	@dptr,a
                           2315 ;	../../shared/src/phy_init.c:194: CONTROL_CONFIG2.BT.B3 = 0;
   C43D 90 E6 0F           2316 	mov	dptr,#(_CONTROL_CONFIG2 + 0x0003)
   C440 E4                 2317 	clr	a
   C441 F0                 2318 	movx	@dptr,a
   C442                    2319 00108$:
                           2320 ;	../../shared/src/phy_init.c:203: lnx_TX_TRAIN_FRAME_DET_TIMER_ENABLE_LANE = 1;
   C442 90 60 33           2321 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   C445 E0                 2322 	movx	a,@dptr
   C446 44 10              2323 	orl	a,#0x10
   C448 F0                 2324 	movx	@dptr,a
                           2325 ;	../../shared/src/phy_init.c:204: lnx_TX_TRAIN_TIMER_ENABLE_LANE = 1;
   C449 90 60 33           2326 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   C44C E0                 2327 	movx	a,@dptr
   C44D 44 20              2328 	orl	a,#0x20
   C44F F0                 2329 	movx	@dptr,a
                           2330 ;	../../shared/src/phy_init.c:205: lnx_RX_TRAIN_TIMER_ENABLE_LANE = 1;
   C450 90 60 33           2331 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   C453 E0                 2332 	movx	a,@dptr
   C454 44 40              2333 	orl	a,#0x40
   C456 F0                 2334 	movx	@dptr,a
                           2335 ;	../../shared/src/phy_init.c:206: lnx_TX_TRAIN_STATUS_DET_TIMER_ENABLE_LANE = 1;
   C457 90 60 33           2336 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS_ENABLE_LANE + 0x0003)
   C45A E0                 2337 	movx	a,@dptr
   C45B 44 80              2338 	orl	a,#0x80
   C45D F0                 2339 	movx	@dptr,a
                           2340 ;	../../shared/src/phy_init.c:229: cont_cal_on = 0;
   C45E C2 16              2341 	clr	_cont_cal_on
                           2342 ;	../../shared/src/phy_init.c:231: cal_start_on = 0;
   C460 90 67 AF           2343 	mov	dptr,#_cal_start_on
                           2344 ;	../../shared/src/phy_init.c:232: dfe_phase_save_en = 0;
   C463 E4                 2345 	clr	a
   C464 F0                 2346 	movx	@dptr,a
   C465 90 67 AA           2347 	mov	dptr,#_dfe_phase_save_en
   C468 F0                 2348 	movx	@dptr,a
                           2349 ;	../../shared/src/phy_init.c:234: if(pcie_usb_mode)
   C469 EA                 2350 	mov	a,r2
   C46A 70 12              2351 	jnz	00111$
                           2352 ;	../../shared/src/phy_init.c:245: tx_adapt_g0_en = 1;
   C46C 90 60 5A           2353 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0002)
   C46F E0                 2354 	movx	a,@dptr
   C470 44 80              2355 	orl	a,#0x80
   C472 F0                 2356 	movx	@dptr,a
                           2357 ;	../../shared/src/phy_init.c:246: tx_adapt_gn1_en = 1;
                           2358 ;	../../shared/src/phy_init.c:247: tx_adapt_g1_en = 0;
   C473 90 60 5A           2359 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0002)
   C476 E0                 2360 	movx	a,@dptr
   C477 44 40              2361 	orl	a,#0x40
   C479 F0                 2362 	movx	@dptr,a
   C47A E0                 2363 	movx	a,@dptr
   C47B 54 DF              2364 	anl	a,#0xdf
   C47D F0                 2365 	movx	@dptr,a
   C47E                    2366 00111$:
                           2367 ;	../../shared/src/phy_init.c:250: tx_sweep_preset_en = 0;
   C47E 90 67 13           2368 	mov	dptr,#_tx_sweep_preset_en
   C481 E4                 2369 	clr	a
   C482 F0                 2370 	movx	@dptr,a
                           2371 ;	../../shared/src/phy_init.c:254: pre_sq_rd = 1;
   C483 90 67 1C           2372 	mov	dptr,#_pre_sq_rd
   C486 74 01              2373 	mov	a,#0x01
   C488 F0                 2374 	movx	@dptr,a
                           2375 ;	../../shared/src/phy_init.c:256: tx_train_p2p_hold = lnx_TX_TRAIN_P2P_HOLD_LANE;
   C489 90 60 44           2376 	mov	dptr,#_DFE_CONTROL_3
   C48C E0                 2377 	movx	a,@dptr
   C48D C4                 2378 	swap	a
   C48E 23                 2379 	rl	a
   C48F 54 01              2380 	anl	a,#0x01
   C491 90 67 A0           2381 	mov	dptr,#_tx_train_p2p_hold
   C494 F0                 2382 	movx	@dptr,a
                           2383 ;	../../shared/src/phy_init.c:260: cmx_PLL_CAL_DONE = 1;
   C495 90 E6 4E           2384 	mov	dptr,#(_CAL_STATUS_READ + 0x0002)
   C498 E0                 2385 	movx	a,@dptr
   C499 44 01              2386 	orl	a,#0x01
   C49B F0                 2387 	movx	@dptr,a
                           2388 ;	../../shared/src/phy_init.c:264: cmx_PLL_CAL_RING_DONE = 1;
   C49C 90 E6 4F           2389 	mov	dptr,#(_CAL_STATUS_READ + 0x0003)
   C49F E0                 2390 	movx	a,@dptr
   C4A0 44 01              2391 	orl	a,#0x01
   C4A2 F0                 2392 	movx	@dptr,a
                           2393 ;	../../shared/src/phy_init.c:267: lnx_RPTA_F0D_OFFSET_LANE_7_0 = 6;
   C4A3 90 60 77           2394 	mov	dptr,#(_TRAIN_PARA_3 + 0x0003)
   C4A6 74 06              2395 	mov	a,#0x06
   C4A8 F0                 2396 	movx	@dptr,a
                           2397 ;	../../shared/src/phy_init.c:270: tx_sel_bit = reg_TX_SEL_BITS_LANE;
   C4A9 90 20 37           2398 	mov	dptr,#(_TX_SYSTEM_LANE + 0x0003)
   C4AC E0                 2399 	movx	a,@dptr
   C4AD 23                 2400 	rl	a
   C4AE 54 01              2401 	anl	a,#0x01
   C4B0 90 67 B0           2402 	mov	dptr,#_tx_sel_bit
   C4B3 F0                 2403 	movx	@dptr,a
                           2404 ;	../../shared/src/phy_init.c:271: rx_sel_bit = reg_RX_SEL_BITS_LANE;
   C4B4 90 21 07           2405 	mov	dptr,#(_RX_SYSTEM_LANE + 0x0003)
   C4B7 E0                 2406 	movx	a,@dptr
   C4B8 23                 2407 	rl	a
   C4B9 54 01              2408 	anl	a,#0x01
   C4BB FA                 2409 	mov	r2,a
   C4BC 90 67 B1           2410 	mov	dptr,#_rx_sel_bit
   C4BF F0                 2411 	movx	@dptr,a
   C4C0 02 00 C5           2412 	ljmp	__sdcc_banked_ret
                           2413 ;------------------------------------------------------------
                           2414 ;Allocation info for local variables in function 'init_irq'
                           2415 ;------------------------------------------------------------
                           2416 ;------------------------------------------------------------
                           2417 ;	../../shared/src/phy_init.c:275: void init_irq(void) BANKING_CTRL {
                           2418 ;	-----------------------------------------
                           2419 ;	 function init_irq
                           2420 ;	-----------------------------------------
   C4C3                    2421 _init_irq:
                           2422 ;	../../shared/src/phy_init.c:278: reg_PIN_TX_TRAIN_ENABLE_ISR_LANE = 0;
   C4C3 90 26 5C           2423 	mov	dptr,#_TRX_TRAIN_IF_INTERRUPT_LANE
   C4C6 E0                 2424 	movx	a,@dptr
   C4C7 54 FD              2425 	anl	a,#0xfd
   C4C9 F0                 2426 	movx	@dptr,a
                           2427 ;	../../shared/src/phy_init.c:279: reg_PIN_RX_TRAIN_ENABLE_ISR_LANE = 0;
   C4CA 90 26 5C           2428 	mov	dptr,#_TRX_TRAIN_IF_INTERRUPT_LANE
   C4CD E0                 2429 	movx	a,@dptr
   C4CE 54 FE              2430 	anl	a,#0xfe
   C4D0 F0                 2431 	movx	@dptr,a
                           2432 ;	../../shared/src/phy_init.c:280: reg_FRAME_LOCK_ISR_LANE = 0;
   C4D1 90 21 43           2433 	mov	dptr,#(_RX_LANE_INTERRUPT + 0x0003)
   C4D4 E0                 2434 	movx	a,@dptr
   C4D5 54 BF              2435 	anl	a,#0xbf
   C4D7 F0                 2436 	movx	@dptr,a
                           2437 ;	../../shared/src/phy_init.c:281: reg_REMOTE_CTRL_VALID_ISR_LANE = 0;
   C4D8 90 26 5D           2438 	mov	dptr,#(_TRX_TRAIN_IF_INTERRUPT_LANE + 0x0001)
   C4DB E0                 2439 	movx	a,@dptr
   C4DC 54 FD              2440 	anl	a,#0xfd
   C4DE F0                 2441 	movx	@dptr,a
                           2442 ;	../../shared/src/phy_init.c:282: reg_INT_RX_INIT_RISE_ISR_LANE = 0;
   C4DF 90 20 1B           2443 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG1_LANE + 0x0003)
   C4E2 E0                 2444 	movx	a,@dptr
   C4E3 54 F7              2445 	anl	a,#0xf7
   C4E5 F0                 2446 	movx	@dptr,a
                           2447 ;	../../shared/src/phy_init.c:283: SPD_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0x0;
   C4E6 90 20 2B           2448 	mov	dptr,#(_SPD_CTRL_INTERRUPT_REG1_LANE + 0x0003)
                           2449 ;	../../shared/src/phy_init.c:284: PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0;
                           2450 ;	../../shared/src/phy_init.c:285: PM_CTRL_INTERRUPT_REG1_LANE.BT.B2 = 0;
                           2451 ;	../../shared/src/phy_init.c:286: MCU_IRQ_LANE.BT.B0 = 0;
   C4E9 E4                 2452 	clr	a
   C4EA F0                 2453 	movx	@dptr,a
   C4EB 90 20 1B           2454 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG1_LANE + 0x0003)
   C4EE F0                 2455 	movx	@dptr,a
   C4EF 90 20 1A           2456 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG1_LANE + 0x0002)
   C4F2 F0                 2457 	movx	@dptr,a
   C4F3 90 22 88           2458 	mov	dptr,#_MCU_IRQ_LANE
   C4F6 F0                 2459 	movx	@dptr,a
                           2460 ;	../../shared/src/phy_init.c:287: MEM_IRQ.BT.B0 = 0;
   C4F7 90 A2 E4           2461 	mov	dptr,#_MEM_IRQ
   C4FA E4                 2462 	clr	a
   C4FB F0                 2463 	movx	@dptr,a
                           2464 ;	../../shared/src/phy_init.c:293: if((phy_mode == PCIE) || (phy_mode == USB)) 
   C4FC 90 A3 16           2465 	mov	dptr,#(_SYSTEM + 0x0002)
   C4FF E0                 2466 	movx	a,@dptr
   C500 54 07              2467 	anl	a,#0x07
   C502 FA                 2468 	mov	r2,a
   C503 BA 03 02           2469 	cjne	r2,#0x03,00140$
   C506 80 3B              2470 	sjmp	00105$
   C508                    2471 00140$:
   C508 90 A3 16           2472 	mov	dptr,#(_SYSTEM + 0x0002)
   C50B E0                 2473 	movx	a,@dptr
   C50C 54 07              2474 	anl	a,#0x07
   C50E FA                 2475 	mov	r2,a
   C50F BA 05 02           2476 	cjne	r2,#0x05,00141$
   C512 80 2F              2477 	sjmp	00105$
   C514                    2478 00141$:
                           2479 ;	../../shared/src/phy_init.c:308: PM_CTRL_INTERRUPT_REG2.BT.B2 = 0xfc;
   C514 90 20 1E           2480 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG2 + 0x0002)
   C517 74 FC              2481 	mov	a,#0xFC
   C519 F0                 2482 	movx	@dptr,a
                           2483 ;	../../shared/src/phy_init.c:309: PM_CTRL_INTERRUPT_REG2.BT.B3 = 0x11; // PU_RX|PU_TX|PU_PLL|rx_init|regclk_dis|PU_IVREF
   C51A 90 20 1F           2484 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG2 + 0x0003)
   C51D 74 11              2485 	mov	a,#0x11
   C51F F0                 2486 	movx	@dptr,a
                           2487 ;	../../shared/src/phy_init.c:310: if(mcuid== master_mcu) reg_INT_PU_PLL_OR_CHG_MASK_LANE = 0; //PU_PLL_OR
   C520 90 22 00           2488 	mov	dptr,#_MCU_CONTROL_LANE
   C523 E0                 2489 	movx	a,@dptr
   C524 FA                 2490 	mov	r2,a
   C525 90 E6 50           2491 	mov	dptr,#_MCU_CONFIG
   C528 E0                 2492 	movx	a,@dptr
   C529 FB                 2493 	mov	r3,a
   C52A EA                 2494 	mov	a,r2
   C52B B5 03 07           2495 	cjne	a,ar3,00102$
   C52E 90 20 1F           2496 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG2 + 0x0003)
   C531 E0                 2497 	movx	a,@dptr
   C532 54 FE              2498 	anl	a,#0xfe
   C534 F0                 2499 	movx	@dptr,a
   C535                    2500 00102$:
                           2501 ;	../../shared/src/phy_init.c:311: reg_INT_TXDETRX_EN_CHG_MASK_LANE =1;
   C535 90 20 1E           2502 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG2 + 0x0002)
   C538 E0                 2503 	movx	a,@dptr
   C539 44 80              2504 	orl	a,#0x80
   C53B F0                 2505 	movx	@dptr,a
                           2506 ;	../../shared/src/phy_init.c:312: reg_INT_BEACON_TX_EN_CHG_MASK_LANE = 1;
   C53C 90 20 1E           2507 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG2 + 0x0002)
   C53F E0                 2508 	movx	a,@dptr
   C540 44 40              2509 	orl	a,#0x40
   C542 F0                 2510 	movx	@dptr,a
   C543                    2511 00105$:
                           2512 ;	../../shared/src/phy_init.c:320: reg_INT3_INT_REFCLK_DIS_CHG_INT_EN_LANE = 1;
   C543 90 22 4E           2513 	mov	dptr,#(_MCU_INT3_CONTROL + 0x0002)
   C546 E0                 2514 	movx	a,@dptr
   C547 44 08              2515 	orl	a,#0x08
   C549 F0                 2516 	movx	@dptr,a
                           2517 ;	../../shared/src/phy_init.c:321: reg_INT3_INT_PU_IVREF_CHG_INT_EN_LANE = 1;
   C54A 90 22 4E           2518 	mov	dptr,#(_MCU_INT3_CONTROL + 0x0002)
   C54D E0                 2519 	movx	a,@dptr
   C54E 44 04              2520 	orl	a,#0x04
   C550 F0                 2521 	movx	@dptr,a
                           2522 ;	../../shared/src/phy_init.c:323: if((phy_mode == PCIE) || (phy_mode == USB))
   C551 90 A3 16           2523 	mov	dptr,#(_SYSTEM + 0x0002)
   C554 E0                 2524 	movx	a,@dptr
   C555 54 07              2525 	anl	a,#0x07
   C557 FA                 2526 	mov	r2,a
   C558 BA 03 02           2527 	cjne	r2,#0x03,00144$
   C55B 80 5B              2528 	sjmp	00117$
   C55D                    2529 00144$:
   C55D 90 A3 16           2530 	mov	dptr,#(_SYSTEM + 0x0002)
   C560 E0                 2531 	movx	a,@dptr
   C561 54 07              2532 	anl	a,#0x07
   C563 FA                 2533 	mov	r2,a
   C564 BA 05 02           2534 	cjne	r2,#0x05,00145$
   C567 80 4F              2535 	sjmp	00117$
   C569                    2536 00145$:
                           2537 ;	../../shared/src/phy_init.c:338: reg_INT9_PM_CHG_INT_EN_LANE = 1;
   C569 90 22 64           2538 	mov	dptr,#_MCU_INT9_CONTROL
   C56C E0                 2539 	movx	a,@dptr
   C56D 44 01              2540 	orl	a,#0x01
   C56F F0                 2541 	movx	@dptr,a
                           2542 ;	../../shared/src/phy_init.c:339: if(serdes_ring_lane_en) {
   C570 90 66 23           2543 	mov	dptr,#_serdes_ring_lane_en
   C573 E0                 2544 	movx	a,@dptr
   C574 FA                 2545 	mov	r2,a
   C575 60 1E              2546 	jz	00113$
                           2547 ;	../../shared/src/phy_init.c:343: if (tag_ringpll_ind_en==0 && mcuid==master_mcu)
   C577 90 E6 04           2548 	mov	dptr,#_CONTROL_CONFIG0
   C57A E0                 2549 	movx	a,@dptr
   C57B 20 E6 2C           2550 	jb	acc.6,00114$
   C57E 90 22 00           2551 	mov	dptr,#_MCU_CONTROL_LANE
   C581 E0                 2552 	movx	a,@dptr
   C582 FA                 2553 	mov	r2,a
   C583 90 E6 50           2554 	mov	dptr,#_MCU_CONFIG
   C586 E0                 2555 	movx	a,@dptr
   C587 FB                 2556 	mov	r3,a
   C588 EA                 2557 	mov	a,r2
   C589 B5 03 1E           2558 	cjne	a,ar3,00114$
                           2559 ;	../../shared/src/phy_init.c:345: reg_INT9_INT_PU_PLL_OR_CHG_INT_EN_LANE = 1;
   C58C 90 22 67           2560 	mov	dptr,#(_MCU_INT9_CONTROL + 0x0003)
   C58F E0                 2561 	movx	a,@dptr
   C590 44 01              2562 	orl	a,#0x01
   C592 F0                 2563 	movx	@dptr,a
   C593 80 15              2564 	sjmp	00114$
   C595                    2565 00113$:
                           2566 ;	../../shared/src/phy_init.c:350: else if (mcuid == master_mcu)
   C595 90 22 00           2567 	mov	dptr,#_MCU_CONTROL_LANE
   C598 E0                 2568 	movx	a,@dptr
   C599 FA                 2569 	mov	r2,a
   C59A 90 E6 50           2570 	mov	dptr,#_MCU_CONFIG
   C59D E0                 2571 	movx	a,@dptr
   C59E FB                 2572 	mov	r3,a
   C59F EA                 2573 	mov	a,r2
   C5A0 B5 03 07           2574 	cjne	a,ar3,00114$
                           2575 ;	../../shared/src/phy_init.c:352: reg_INT9_INT_PU_PLL_OR_CHG_INT_EN_LANE = 1;
   C5A3 90 22 67           2576 	mov	dptr,#(_MCU_INT9_CONTROL + 0x0003)
   C5A6 E0                 2577 	movx	a,@dptr
   C5A7 44 01              2578 	orl	a,#0x01
   C5A9 F0                 2579 	movx	@dptr,a
   C5AA                    2580 00114$:
                           2581 ;	../../shared/src/phy_init.c:353: reg_INT1_INT_POWER_STATE_VALID_RISE_INT_EN_LANE = 0;
   C5AA 90 22 46           2582 	mov	dptr,#(_MCU_INT1_CONTROL + 0x0002)
   C5AD E0                 2583 	movx	a,@dptr
   C5AE 54 FD              2584 	anl	a,#0xfd
   C5B0 F0                 2585 	movx	@dptr,a
                           2586 ;	../../shared/src/phy_init.c:355: reg_INT8_PM_PCIE_FUNC_CHG_INT_EN_LANE = 0;
   C5B1 90 22 61           2587 	mov	dptr,#(_MCU_INT8_CONTROL + 0x0001)
   C5B4 E0                 2588 	movx	a,@dptr
   C5B5 54 BF              2589 	anl	a,#0xbf
   C5B7 F0                 2590 	movx	@dptr,a
   C5B8                    2591 00117$:
                           2592 ;	../../shared/src/phy_init.c:362: reg_INT2_SPD_INT_GEN_EN_LANE = 1;
   C5B8 90 22 48           2593 	mov	dptr,#_MCU_INT2_CONTROL
   C5BB E0                 2594 	movx	a,@dptr
   C5BC 44 02              2595 	orl	a,#0x02
   C5BE F0                 2596 	movx	@dptr,a
                           2597 ;	../../shared/src/phy_init.c:364: reg_INT11_PIN_RX_TRAIN_ENABLE_INT_EN_LANE = 1;
   C5BF 90 22 6D           2598 	mov	dptr,#(_MCU_INT11_CONTROL + 0x0001)
   C5C2 E0                 2599 	movx	a,@dptr
   C5C3 44 01              2600 	orl	a,#0x01
   C5C5 F0                 2601 	movx	@dptr,a
                           2602 ;	../../shared/src/phy_init.c:367: reg_INT5_PIN_TX_TRAIN_ENABLE_INT_EN_LANE = 1;
   C5C6 90 22 55           2603 	mov	dptr,#(_MCU_INT5_CONTROL + 0x0001)
   C5C9 E0                 2604 	movx	a,@dptr
   C5CA 44 02              2605 	orl	a,#0x02
   C5CC F0                 2606 	movx	@dptr,a
                           2607 ;	../../shared/src/phy_init.c:370: reg_INT10_INT_RX_INIT_RISE_INT_EN_LANE = 1;
   C5CD 90 22 6A           2608 	mov	dptr,#(_MCU_INT10_CONTROL + 0x0002)
   C5D0 E0                 2609 	movx	a,@dptr
   C5D1 44 01              2610 	orl	a,#0x01
   C5D3 F0                 2611 	movx	@dptr,a
                           2612 ;	../../shared/src/phy_init.c:372: if(phy_mode != PCIE || reg_PHY_ISOLATE_MODE) {
   C5D4 90 A3 16           2613 	mov	dptr,#(_SYSTEM + 0x0002)
   C5D7 E0                 2614 	movx	a,@dptr
   C5D8 54 07              2615 	anl	a,#0x07
   C5DA FA                 2616 	mov	r2,a
   C5DB BA 03 07           2617 	cjne	r2,#0x03,00119$
   C5DE 90 A3 16           2618 	mov	dptr,#(_SYSTEM + 0x0002)
   C5E1 E0                 2619 	movx	a,@dptr
   C5E2 30 E7 15           2620 	jnb	acc.7,00120$
   C5E5                    2621 00119$:
                           2622 ;	../../shared/src/phy_init.c:374: reg_INT7_REMOTE_CTRL_VALID_INT_EN_LANE = 1;
   C5E5 90 22 5D           2623 	mov	dptr,#(_MCU_INT7_CONTROL + 0x0001)
   C5E8 E0                 2624 	movx	a,@dptr
   C5E9 44 08              2625 	orl	a,#0x08
   C5EB F0                 2626 	movx	@dptr,a
                           2627 ;	../../shared/src/phy_init.c:382: reg_INT6_PIN_PAPTA_TRAIN_ENABLE_INT_EN_LANE = 1;
   C5EC 90 22 5B           2628 	mov	dptr,#(_MCU_INT6_CONTROL + 0x0003)
   C5EF E0                 2629 	movx	a,@dptr
   C5F0 44 02              2630 	orl	a,#0x02
   C5F2 F0                 2631 	movx	@dptr,a
                           2632 ;	../../shared/src/phy_init.c:385: reg_INT12_PIN_PAPTA_TRAIN_DISABLE_INT_EN_LANE = 1;
   C5F3 90 22 E1           2633 	mov	dptr,#(_MCU_INT_CONTROL_13 + 0x0001)
   C5F6 E0                 2634 	movx	a,@dptr
   C5F7 44 10              2635 	orl	a,#0x10
   C5F9 F0                 2636 	movx	@dptr,a
   C5FA                    2637 00120$:
                           2638 ;	../../shared/src/phy_init.c:390: if(!reg_MASTER_PHY_EN)
   C5FA 90 A3 14           2639 	mov	dptr,#_SYSTEM
   C5FD E0                 2640 	movx	a,@dptr
   C5FE 20 E3 07           2641 	jb	acc.3,00123$
                           2642 ;	../../shared/src/phy_init.c:391: reg_INT1_DPHY_ANA_LANE_DISABLE_INT_EN_LANE = 1;
   C601 90 22 47           2643 	mov	dptr,#(_MCU_INT1_CONTROL + 0x0003)
   C604 E0                 2644 	movx	a,@dptr
   C605 44 08              2645 	orl	a,#0x08
   C607 F0                 2646 	movx	@dptr,a
   C608                    2647 00123$:
                           2648 ;	../../shared/src/phy_init.c:396: if(mcuid== master_mcu) {
   C608 90 22 00           2649 	mov	dptr,#_MCU_CONTROL_LANE
   C60B E0                 2650 	movx	a,@dptr
   C60C FA                 2651 	mov	r2,a
   C60D 90 E6 50           2652 	mov	dptr,#_MCU_CONFIG
   C610 E0                 2653 	movx	a,@dptr
   C611 FB                 2654 	mov	r3,a
   C612 EA                 2655 	mov	a,r2
   C613 B5 03 07           2656 	cjne	a,ar3,00125$
                           2657 ;	../../shared/src/phy_init.c:397: reg_INT4_MCU_REMOTE_REQ_INT_EN_LANE = 1;
   C616 90 22 53           2658 	mov	dptr,#(_MCU_INT4_CONTROL + 0x0003)
   C619 E0                 2659 	movx	a,@dptr
   C61A 44 10              2660 	orl	a,#0x10
   C61C F0                 2661 	movx	@dptr,a
   C61D                    2662 00125$:
                           2663 ;	../../shared/src/phy_init.c:400: reg_INT4_PHY_MCU_REMOTE_REQ_INT_EN_LANE = 1;
   C61D 90 22 53           2664 	mov	dptr,#(_MCU_INT4_CONTROL + 0x0003)
   C620 E0                 2665 	movx	a,@dptr
   C621 44 40              2666 	orl	a,#0x40
   C623 F0                 2667 	movx	@dptr,a
   C624 02 00 C5           2668 	ljmp	__sdcc_banked_ret
                           2669 ;------------------------------------------------------------
                           2670 ;Allocation info for local variables in function 'init_reg'
                           2671 ;------------------------------------------------------------
                           2672 ;ana_pwr                   Allocated to registers r2 
                           2673 ;------------------------------------------------------------
                           2674 ;	../../shared/src/phy_init.c:406: void init_reg(void) BANKING_CTRL {
                           2675 ;	-----------------------------------------
                           2676 ;	 function init_reg
                           2677 ;	-----------------------------------------
   C627                    2678 _init_reg:
                           2679 ;	../../shared/src/phy_init.c:408: uint8_t ana_pwr = reg_ANA_ID_15_0_b0 & 0x03; // 2: 1.8V, 3: 1.2V
   C627 90 A3 FC           2680 	mov	dptr,#_CID_REG1
   C62A E0                 2681 	movx	a,@dptr
   C62B FA                 2682 	mov	r2,a
   C62C 53 02 03           2683 	anl	ar2,#0x03
                           2684 ;	../../shared/src/phy_init.c:409: if(ana_pwr==0x02) reg_AVDDR12_SEL_MAST_REG = 1; //1.8V
   C62F E4                 2685 	clr	a
   C630 BA 02 01           2686 	cjne	r2,#0x02,00141$
   C633 04                 2687 	inc	a
   C634                    2688 00141$:
   C634 FB                 2689 	mov	r3,a
   C635 60 09              2690 	jz	00104$
   C637 90 83 44           2691 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_209
   C63A E0                 2692 	movx	a,@dptr
   C63B 44 40              2693 	orl	a,#0x40
   C63D F0                 2694 	movx	@dptr,a
   C63E 80 0A              2695 	sjmp	00105$
   C640                    2696 00104$:
                           2697 ;	../../shared/src/phy_init.c:410: else if(ana_pwr==0x03) reg_AVDDR12_SEL_MAST_REG = 0; //1.2V
   C640 BA 03 07           2698 	cjne	r2,#0x03,00105$
   C643 90 83 44           2699 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_209
   C646 E0                 2700 	movx	a,@dptr
   C647 54 BF              2701 	anl	a,#0xbf
   C649 F0                 2702 	movx	@dptr,a
   C64A                    2703 00105$:
                           2704 ;	../../shared/src/phy_init.c:413: if(phy_mode == SERDES ) {//Ethernet, 
   C64A 90 A3 16           2705 	mov	dptr,#(_SYSTEM + 0x0002)
   C64D E0                 2706 	movx	a,@dptr
   C64E 54 07              2707 	anl	a,#0x07
   C650 FA                 2708 	mov	r2,a
   C651 BA 04 12           2709 	cjne	r2,#0x04,00107$
                           2710 ;	../../shared/src/phy_init.c:416: reg_TX_TRAIN_PAT_TWO_ZERO_LANE = 1;
                           2711 ;	../../shared/src/phy_init.c:417: reg_TX_TRAIN_PAT_MODE_LANE = 0;
   C654 90 26 25           2712 	mov	dptr,#(_TX_TRAIN_PATTTERN_REG0 + 0x0001)
   C657 E0                 2713 	movx	a,@dptr
   C658 44 08              2714 	orl	a,#0x08
   C65A F0                 2715 	movx	@dptr,a
   C65B E0                 2716 	movx	a,@dptr
   C65C 54 FB              2717 	anl	a,#0xfb
   C65E F0                 2718 	movx	@dptr,a
                           2719 ;	../../shared/src/phy_init.c:420: reg_ETHERNET_MODE_LANE = 1;
   C65F 90 26 02           2720 	mov	dptr,#(_DME_ENC_REG0 + 0x0002)
   C662 E0                 2721 	movx	a,@dptr
   C663 44 01              2722 	orl	a,#0x01
   C665 F0                 2723 	movx	@dptr,a
   C666                    2724 00107$:
                           2725 ;	../../shared/src/phy_init.c:427: if(cmx_PHY_GEN_MAX_3_0 < max_gen) 
   C666 90 E6 2C           2726 	mov	dptr,#_CONTROL_CONFIG8
   C669 E0                 2727 	movx	a,@dptr
   C66A 54 0F              2728 	anl	a,#0x0f
   C66C FA                 2729 	mov	r2,a
   C66D 90 63 00           2730 	mov	dptr,#_max_gen
   C670 E0                 2731 	movx	a,@dptr
   C671 FC                 2732 	mov	r4,a
   C672 C3                 2733 	clr	c
   C673 EA                 2734 	mov	a,r2
   C674 64 80              2735 	xrl	a,#0x80
   C676 8C F0              2736 	mov	b,r4
   C678 63 F0 80           2737 	xrl	b,#0x80
   C67B 95 F0              2738 	subb	a,b
   C67D 50 0B              2739 	jnc	00109$
                           2740 ;	../../shared/src/phy_init.c:428: max_gen = cmx_PHY_GEN_MAX_3_0;
   C67F 90 E6 2C           2741 	mov	dptr,#_CONTROL_CONFIG8
   C682 E0                 2742 	movx	a,@dptr
   C683 54 0F              2743 	anl	a,#0x0f
   C685 FA                 2744 	mov	r2,a
   C686 90 63 00           2745 	mov	dptr,#_max_gen
   C689 F0                 2746 	movx	@dptr,a
   C68A                    2747 00109$:
                           2748 ;	../../shared/src/phy_init.c:456: if( phy_mode == PCIE || phy_mode == SATA) {
   C68A 90 A3 16           2749 	mov	dptr,#(_SYSTEM + 0x0002)
   C68D E0                 2750 	movx	a,@dptr
   C68E 54 07              2751 	anl	a,#0x07
   C690 FA                 2752 	mov	r2,a
   C691 BA 03 02           2753 	cjne	r2,#0x03,00149$
   C694 80 08              2754 	sjmp	00110$
   C696                    2755 00149$:
   C696 90 A3 16           2756 	mov	dptr,#(_SYSTEM + 0x0002)
   C699 E0                 2757 	movx	a,@dptr
   C69A 54 07              2758 	anl	a,#0x07
   C69C 70 3E              2759 	jnz	00111$
   C69E                    2760 00110$:
                           2761 ;	../../shared/src/phy_init.c:457: lnx_GAIN_TRAIN_END_EN_LANE = 0;
   C69E 90 60 3A           2762 	mov	dptr,#(_DFE_CONTROL_1 + 0x0002)
   C6A1 E0                 2763 	movx	a,@dptr
   C6A2 54 FD              2764 	anl	a,#0xfd
   C6A4 F0                 2765 	movx	@dptr,a
                           2766 ;	../../shared/src/phy_init.c:458: lnx_ADJUST_FFE_R2_LANE = 0;
   C6A5 90 60 8E           2767 	mov	dptr,#(_DFE_CONTROL_7 + 0x0002)
   C6A8 E0                 2768 	movx	a,@dptr
   C6A9 54 EF              2769 	anl	a,#0xef
   C6AB F0                 2770 	movx	@dptr,a
                           2771 ;	../../shared/src/phy_init.c:459: lnx_RX_CAP_FINAL_ADJUST_EN_LANE = 0;
   C6AC 90 60 8E           2772 	mov	dptr,#(_DFE_CONTROL_7 + 0x0002)
   C6AF E0                 2773 	movx	a,@dptr
   C6B0 54 DF              2774 	anl	a,#0xdf
   C6B2 F0                 2775 	movx	@dptr,a
                           2776 ;	../../shared/src/phy_init.c:460: lnx_RX_RXFFE_C_INI_LANE_3_0 = 12;
   C6B3 90 60 8F           2777 	mov	dptr,#(_DFE_CONTROL_7 + 0x0003)
   C6B6 E0                 2778 	movx	a,@dptr
   C6B7 54 0F              2779 	anl	a,#0x0f
   C6B9 44 C0              2780 	orl	a,#0xc0
   C6BB F0                 2781 	movx	@dptr,a
                           2782 ;	../../shared/src/phy_init.c:461: lnx_DFE_ISI_RES_ADAPT_EN_LANE = 0;
   C6BC 90 60 8E           2783 	mov	dptr,#(_DFE_CONTROL_7 + 0x0002)
   C6BF E0                 2784 	movx	a,@dptr
   C6C0 54 F7              2785 	anl	a,#0xf7
   C6C2 F0                 2786 	movx	@dptr,a
                           2787 ;	../../shared/src/phy_init.c:462: lnx_TRAIN_PH_CONTROL_MODE_LANE_1_0 = 0;
   C6C3 90 60 44           2788 	mov	dptr,#_DFE_CONTROL_3
   C6C6 E0                 2789 	movx	a,@dptr
   C6C7 54 CF              2790 	anl	a,#0xcf
   C6C9 F0                 2791 	movx	@dptr,a
                           2792 ;	../../shared/src/phy_init.c:463: lnx_TRAIN_USE_D_LANE = 0;
                           2793 ;	../../shared/src/phy_init.c:464: lnx_TRAIN_USE_S_LANE = 1;
   C6CA 90 60 44           2794 	mov	dptr,#_DFE_CONTROL_3
   C6CD E0                 2795 	movx	a,@dptr
   C6CE 54 BF              2796 	anl	a,#0xbf
   C6D0 F0                 2797 	movx	@dptr,a
   C6D1 E0                 2798 	movx	a,@dptr
   C6D2 44 80              2799 	orl	a,#0x80
   C6D4 F0                 2800 	movx	@dptr,a
                           2801 ;	../../shared/src/phy_init.c:465: lnx_SUMFTAP_EN_1_LANE = 1;
   C6D5 90 60 88           2802 	mov	dptr,#_DFE_TEST_5
   C6D8 E0                 2803 	movx	a,@dptr
   C6D9 44 02              2804 	orl	a,#0x02
   C6DB F0                 2805 	movx	@dptr,a
   C6DC                    2806 00111$:
                           2807 ;	../../shared/src/phy_init.c:469: if(reg_RING_REF_DIV_SEL==1 && phy_mode<=SAS)
   C6DC 90 82 D4           2808 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_181
   C6DF E0                 2809 	movx	a,@dptr
   C6E0 23                 2810 	rl	a
   C6E1 54 01              2811 	anl	a,#0x01
   C6E3 FA                 2812 	mov	r2,a
   C6E4 BA 01 1A           2813 	cjne	r2,#0x01,00114$
   C6E7 90 A3 16           2814 	mov	dptr,#(_SYSTEM + 0x0002)
   C6EA E0                 2815 	movx	a,@dptr
   C6EB 54 07              2816 	anl	a,#0x07
   C6ED FA                 2817 	mov	r2,a
   C6EE C3                 2818 	clr	c
   C6EF 74 81              2819 	mov	a,#(0x01 ^ 0x80)
   C6F1 8A F0              2820 	mov	b,r2
   C6F3 63 F0 80           2821 	xrl	b,#0x80
   C6F6 95 F0              2822 	subb	a,b
   C6F8 40 07              2823 	jc	00114$
                           2824 ;	../../shared/src/phy_init.c:473: reg_ANA_FBCK_SEL_RING = 1;
   C6FA 90 A3 18           2825 	mov	dptr,#_PM_CMN_REG1
   C6FD E0                 2826 	movx	a,@dptr
   C6FE 44 04              2827 	orl	a,#0x04
   C700 F0                 2828 	movx	@dptr,a
   C701                    2829 00114$:
                           2830 ;	../../shared/src/phy_init.c:477: cal_phase = 0x1e;
   C701 90 60 46           2831 	mov	dptr,#(_DFE_CONTROL_3 + 0x0002)
   C704 74 1E              2832 	mov	a,#0x1E
   C706 F0                 2833 	movx	@dptr,a
                           2834 ;	../../shared/src/phy_init.c:480: reg_TEMPC_MUX_HOLD_SEL_3_0 = 7; //to cover large range
   C707 90 82 BC           2835 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_175
   C70A E0                 2836 	movx	a,@dptr
   C70B 54 F0              2837 	anl	a,#0xf0
   C70D 44 07              2838 	orl	a,#0x07
   C70F F0                 2839 	movx	@dptr,a
                           2840 ;	../../shared/src/phy_init.c:481: reg_TEMPC_MUX_SEL_3_0 = 6;
   C710 90 82 BC           2841 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_175
   C713 E0                 2842 	movx	a,@dptr
   C714 54 0F              2843 	anl	a,#0x0f
   C716 44 60              2844 	orl	a,#0x60
   C718 F0                 2845 	movx	@dptr,a
                           2846 ;	../../shared/src/phy_init.c:483: set_accap_sel(ACCAP_REFCLK);
   C719 90 02 64           2847 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_153
   C71C E0                 2848 	movx	a,@dptr
   C71D 54 E7              2849 	anl	a,#0xe7
   C71F 44 08              2850 	orl	a,#0x08
   C721 F0                 2851 	movx	@dptr,a
                           2852 ;	../../shared/src/phy_init.c:486: dfe_f0_res_sel = 3;
   C722 90 00 50           2853 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   C725 E0                 2854 	movx	a,@dptr
   C726 44 18              2855 	orl	a,#0x18
   C728 F0                 2856 	movx	@dptr,a
                           2857 ;	../../shared/src/phy_init.c:487: dfe_res_f1 = 3;
   C729 90 00 50           2858 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   C72C E0                 2859 	movx	a,@dptr
   C72D 44 06              2860 	orl	a,#0x06
   C72F F0                 2861 	movx	@dptr,a
                           2862 ;	../../shared/src/phy_init.c:488: dfe_f234_res_sel = 1;
   C730 90 00 50           2863 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_20
   C733 E0                 2864 	movx	a,@dptr
   C734 44 01              2865 	orl	a,#0x01
   C736 F0                 2866 	movx	@dptr,a
                           2867 ;	../../shared/src/phy_init.c:489: dfe_f567_res_sel = 1;
   C737 90 00 54           2868 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_21
   C73A E0                 2869 	movx	a,@dptr
   C73B 44 80              2870 	orl	a,#0x80
   C73D F0                 2871 	movx	@dptr,a
                           2872 ;	../../shared/src/phy_init.c:492: reg_DFE_STEP_COARSE_FFX_LANE_3_0 = 0x02; //4;
   C73E 90 24 21           2873 	mov	dptr,#(_DFE_STEP_REG0 + 0x0001)
   C741 E0                 2874 	movx	a,@dptr
   C742 54 F0              2875 	anl	a,#0xf0
   C744 44 02              2876 	orl	a,#0x02
   C746 F0                 2877 	movx	@dptr,a
                           2878 ;	../../shared/src/phy_init.c:493: reg_DFE_STEP_COARSE_FX_LANE_3_0  = 0x02; //4;
   C747 90 24 21           2879 	mov	dptr,#(_DFE_STEP_REG0 + 0x0001)
   C74A E0                 2880 	movx	a,@dptr
   C74B 54 0F              2881 	anl	a,#0x0f
   C74D 44 20              2882 	orl	a,#0x20
   C74F F0                 2883 	movx	@dptr,a
                           2884 ;	../../shared/src/phy_init.c:494: reg_DFE_STEP_COARSE_F0_LANE_3_0  = 0x02; //4;
   C750 90 24 22           2885 	mov	dptr,#(_DFE_STEP_REG0 + 0x0002)
   C753 E0                 2886 	movx	a,@dptr
   C754 54 F0              2887 	anl	a,#0xf0
   C756 44 02              2888 	orl	a,#0x02
   C758 F0                 2889 	movx	@dptr,a
                           2890 ;	../../shared/src/phy_init.c:495: reg_DFE_STEP_FINE_FFX_LANE_3_0 = 0x04; //5;
   C759 90 24 26           2891 	mov	dptr,#(_DFE_STEP_REG1 + 0x0002)
   C75C E0                 2892 	movx	a,@dptr
   C75D 54 0F              2893 	anl	a,#0x0f
   C75F 44 40              2894 	orl	a,#0x40
   C761 F0                 2895 	movx	@dptr,a
                           2896 ;	../../shared/src/phy_init.c:496: reg_DFE_STEP_FINE_FX_LANE_3_0  = 0x04; //5;
   C762 90 24 27           2897 	mov	dptr,#(_DFE_STEP_REG1 + 0x0003)
   C765 E0                 2898 	movx	a,@dptr
   C766 54 F0              2899 	anl	a,#0xf0
   C768 44 04              2900 	orl	a,#0x04
   C76A F0                 2901 	movx	@dptr,a
                           2902 ;	../../shared/src/phy_init.c:497: reg_DFE_STEP_FINE_F0_LANE_3_0  = 0x04; //5;
   C76B 90 24 27           2903 	mov	dptr,#(_DFE_STEP_REG1 + 0x0003)
   C76E E0                 2904 	movx	a,@dptr
   C76F 54 0F              2905 	anl	a,#0x0f
   C771 44 40              2906 	orl	a,#0x40
   C773 F0                 2907 	movx	@dptr,a
                           2908 ;	../../shared/src/phy_init.c:498: reg_DFE_STEP_ACCU_FFX_LANE_3_0 = 0x06;
   C774 90 24 24           2909 	mov	dptr,#_DFE_STEP_REG1
   C777 E0                 2910 	movx	a,@dptr
   C778 54 F0              2911 	anl	a,#0xf0
   C77A 44 06              2912 	orl	a,#0x06
   C77C F0                 2913 	movx	@dptr,a
                           2914 ;	../../shared/src/phy_init.c:499: reg_DFE_STEP_ACCU_FX_LANE_3_0  = 0xa; //??0x06
   C77D 90 24 24           2915 	mov	dptr,#_DFE_STEP_REG1
   C780 E0                 2916 	movx	a,@dptr
   C781 54 0F              2917 	anl	a,#0x0f
   C783 44 A0              2918 	orl	a,#0xa0
   C785 F0                 2919 	movx	@dptr,a
                           2920 ;	../../shared/src/phy_init.c:500: reg_DFE_STEP_ACCU_F0_LANE_3_0  = 0x06;
   C786 90 24 25           2921 	mov	dptr,#(_DFE_STEP_REG1 + 0x0001)
   C789 E0                 2922 	movx	a,@dptr
   C78A 54 F0              2923 	anl	a,#0xf0
   C78C 44 06              2924 	orl	a,#0x06
   C78E F0                 2925 	movx	@dptr,a
                           2926 ;	../../shared/src/phy_init.c:501: reg_DFE_STEP_FINE_F0B_LANE_3_0 = 0x05;
   C78F 90 24 1F           2927 	mov	dptr,#(_DFE_ANA_REG1 + 0x0003)
   C792 E0                 2928 	movx	a,@dptr
   C793 54 F0              2929 	anl	a,#0xf0
   C795 44 05              2930 	orl	a,#0x05
   C797 F0                 2931 	movx	@dptr,a
                           2932 ;	../../shared/src/phy_init.c:502: reg_DFE_STEP_ACCU_F0B_LANE_3_0 = 0x06;
   C798 90 24 1C           2933 	mov	dptr,#_DFE_ANA_REG1
   C79B E0                 2934 	movx	a,@dptr
   C79C 54 F0              2935 	anl	a,#0xf0
   C79E 44 06              2936 	orl	a,#0x06
   C7A0 F0                 2937 	movx	@dptr,a
                           2938 ;	../../shared/src/phy_init.c:503: reg_DFE_STEP_COARSE_EO_DN_LANE_3_0 = 0;//1;//2; //512=1/2
   C7A1 90 24 20           2939 	mov	dptr,#_DFE_STEP_REG0
   C7A4 E0                 2940 	movx	a,@dptr
   C7A5 54 F0              2941 	anl	a,#0xf0
   C7A7 F0                 2942 	movx	@dptr,a
                           2943 ;	../../shared/src/phy_init.c:504: reg_DFE_STEP_COARSE_EO_UP_LANE_3_0 = 7;//5;//5; //64=1/32
   C7A8 90 24 20           2944 	mov	dptr,#_DFE_STEP_REG0
   C7AB E0                 2945 	movx	a,@dptr
   C7AC 54 0F              2946 	anl	a,#0x0f
   C7AE 44 70              2947 	orl	a,#0x70
   C7B0 F0                 2948 	movx	@dptr,a
                           2949 ;	../../shared/src/phy_init.c:505: reg_DFE_STEP_FINE_EO_DN_LANE_3_0 = 3; //1/8 =256
   C7B1 90 24 25           2950 	mov	dptr,#(_DFE_STEP_REG1 + 0x0001)
   C7B4 E0                 2951 	movx	a,@dptr
   C7B5 54 0F              2952 	anl	a,#0x0f
   C7B7 44 30              2953 	orl	a,#0x30
   C7B9 F0                 2954 	movx	@dptr,a
                           2955 ;	../../shared/src/phy_init.c:506: reg_DFE_STEP_FINE_EO_UP_LANE_3_0 = 5;//6; //1/32 =32
   C7BA 90 24 26           2956 	mov	dptr,#(_DFE_STEP_REG1 + 0x0002)
   C7BD E0                 2957 	movx	a,@dptr
   C7BE 54 F0              2958 	anl	a,#0xf0
   C7C0 44 05              2959 	orl	a,#0x05
   C7C2 F0                 2960 	movx	@dptr,a
                           2961 ;	../../shared/src/phy_init.c:507: reg_DFE_EO_UP_THRE_COARSE_4_0 = 5; //10;//6;
   C7C3 90 A1 10           2962 	mov	dptr,#_DFE_STATIC_REG0
   C7C6 E0                 2963 	movx	a,@dptr
   C7C7 54 E0              2964 	anl	a,#0xe0
   C7C9 44 05              2965 	orl	a,#0x05
   C7CB F0                 2966 	movx	@dptr,a
                           2967 ;	../../shared/src/phy_init.c:508: reg_DFE_EO_UP_THRE_FINE_4_0_b0 = 7;// 7 //8
   C7CC 90 A1 10           2968 	mov	dptr,#_DFE_STATIC_REG0
   C7CF E0                 2969 	movx	a,@dptr
   C7D0 44 E0              2970 	orl	a,#0xe0
   C7D2 F0                 2971 	movx	@dptr,a
                           2972 ;	../../shared/src/phy_init.c:509: reg_DFE_EO_UP_THRE_FINE_4_0_b1 = 0;
   C7D3 90 A1 11           2973 	mov	dptr,#(_DFE_STATIC_REG0 + 0x0001)
   C7D6 E0                 2974 	movx	a,@dptr
   C7D7 54 FC              2975 	anl	a,#0xfc
   C7D9 F0                 2976 	movx	@dptr,a
                           2977 ;	../../shared/src/phy_init.c:511: reg_DFE_DC_SIGN_XOR = 1; //to fix the rxdata wrong because DC adaptation diverged
   C7DA 90 A1 19           2978 	mov	dptr,#(_DFE_STATIC_REG3 + 0x0001)
   C7DD E0                 2979 	movx	a,@dptr
   C7DE 44 10              2980 	orl	a,#0x10
   C7E0 F0                 2981 	movx	@dptr,a
                           2982 ;	../../shared/src/phy_init.c:513: if(phy_mode==SATA) {
   C7E1 90 A3 16           2983 	mov	dptr,#(_SYSTEM + 0x0002)
   C7E4 E0                 2984 	movx	a,@dptr
   C7E5 54 07              2985 	anl	a,#0x07
   C7E7 70 0E              2986 	jnz	00117$
                           2987 ;	../../shared/src/phy_init.c:514: reg_TXDATA_LATENCY_REDUCE_EN_LANE = 1;
   C7E9 90 20 26           2988 	mov	dptr,#(_TX_SPEED_CONVERT_LANE + 0x0002)
   C7EC E0                 2989 	movx	a,@dptr
   C7ED 44 01              2990 	orl	a,#0x01
   C7EF F0                 2991 	movx	@dptr,a
                           2992 ;	../../shared/src/phy_init.c:515: reg_RXDATA_LATENCY_REDUCE_EN_LANE = 1;
   C7F0 90 21 4B           2993 	mov	dptr,#(_RX_DATA_PATH_REG + 0x0003)
   C7F3 E0                 2994 	movx	a,@dptr
   C7F4 44 10              2995 	orl	a,#0x10
   C7F6 F0                 2996 	movx	@dptr,a
   C7F7                    2997 00117$:
                           2998 ;	../../shared/src/phy_init.c:521: reg_SSC_DSPREAD_TX_RING = reg_SSC_DSPREAD_TX;
   C7F7 90 A0 0B           2999 	mov	dptr,#(_DTX_REG0 + 0x0003)
   C7FA E0                 3000 	movx	a,@dptr
   C7FB 23                 3001 	rl	a
   C7FC 23                 3002 	rl	a
   C7FD 54 01              3003 	anl	a,#0x01
   C7FF FA                 3004 	mov	r2,a
   C800 90 A0 13           3005 	mov	dptr,#(_DTX_REG2 + 0x0003)
   C803 13                 3006 	rrc	a
   C804 E0                 3007 	movx	a,@dptr
   C805 92 E6              3008 	mov	acc.6,c
   C807 F0                 3009 	movx	@dptr,a
                           3010 ;	../../shared/src/phy_init.c:524: reg_CLK_DIRECTION_RINGPLL_LANE = 1; //ringpll direction control: ringpll->1->0, ringpll->2->3
   C808 90 02 58           3011 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_150
   C80B E0                 3012 	movx	a,@dptr
   C80C 44 20              3013 	orl	a,#0x20
   C80E F0                 3014 	movx	@dptr,a
                           3015 ;	../../shared/src/phy_init.c:528: reg_PLL_PWEXP_DIS_RING = 0;
   C80F 90 83 04           3016 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   C812 E0                 3017 	movx	a,@dptr
   C813 54 7F              3018 	anl	a,#0x7f
   C815 F0                 3019 	movx	@dptr,a
                           3020 ;	../../shared/src/phy_init.c:531: reg_VREF_VDDACAL_SEL_2_0 = 6; //for vdd rxsampler cal
   C816 90 82 24           3021 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_137
   C819 E0                 3022 	movx	a,@dptr
   C81A 54 E3              3023 	anl	a,#0xe3
   C81C 44 18              3024 	orl	a,#0x18
   C81E F0                 3025 	movx	@dptr,a
                           3026 ;	../../shared/src/phy_init.c:534: if(cmx_VCON_FORCE_DISABLE==0) {
   C81F 90 E6 13           3027 	mov	dptr,#(_CONTROL_CONFIG3 + 0x0003)
   C822 E0                 3028 	movx	a,@dptr
   C823 20 E1 45           3029 	jb	acc.1,00122$
                           3030 ;	../../shared/src/phy_init.c:535: reg_VCON_REF_SEL_2_0 = 0;
   C826 90 82 B0           3031 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_172
   C829 E0                 3032 	movx	a,@dptr
   C82A 54 1F              3033 	anl	a,#0x1f
   C82C F0                 3034 	movx	@dptr,a
                           3035 ;	../../shared/src/phy_init.c:536: reg_VARAC_BIAS_SEL_2_0 = 7;
   C82D 90 82 D0           3036 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_180
   C830 E0                 3037 	movx	a,@dptr
   C831 44 E0              3038 	orl	a,#0xe0
   C833 F0                 3039 	movx	@dptr,a
                           3040 ;	../../shared/src/phy_init.c:537: reg_VREF_0P6V_LCVCO_SEL_1_0 = 3;
   C834 90 82 1C           3041 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_135
   C837 E0                 3042 	movx	a,@dptr
   C838 44 18              3043 	orl	a,#0x18
   C83A F0                 3044 	movx	@dptr,a
                           3045 ;	../../shared/src/phy_init.c:538: if ( ana_pwr==0x02 ) { //1.8V
   C83B EB                 3046 	mov	a,r3
   C83C 60 14              3047 	jz	00119$
                           3048 ;	../../shared/src/phy_init.c:539: reg_VCON_MIN_SEL_2_0 = 4;
   C83E 90 82 CC           3049 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_179
   C841 E0                 3050 	movx	a,@dptr
   C842 54 E3              3051 	anl	a,#0xe3
   C844 44 10              3052 	orl	a,#0x10
   C846 F0                 3053 	movx	@dptr,a
                           3054 ;	../../shared/src/phy_init.c:540: reg_VCON_MAX_SEL_2_0 = 5;
   C847 90 82 CC           3055 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_179
   C84A E0                 3056 	movx	a,@dptr
   C84B 54 1F              3057 	anl	a,#0x1f
   C84D 44 A0              3058 	orl	a,#0xa0
   C84F F0                 3059 	movx	@dptr,a
   C850 80 10              3060 	sjmp	00120$
   C852                    3061 00119$:
                           3062 ;	../../shared/src/phy_init.c:543: reg_VCON_MIN_SEL_2_0 = 0;
   C852 90 82 CC           3063 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_179
   C855 E0                 3064 	movx	a,@dptr
   C856 54 E3              3065 	anl	a,#0xe3
   C858 F0                 3066 	movx	@dptr,a
                           3067 ;	../../shared/src/phy_init.c:544: reg_VCON_MAX_SEL_2_0 = 1;
   C859 90 82 CC           3068 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_179
   C85C E0                 3069 	movx	a,@dptr
   C85D 54 1F              3070 	anl	a,#0x1f
   C85F 44 20              3071 	orl	a,#0x20
   C861 F0                 3072 	movx	@dptr,a
   C862                    3073 00120$:
                           3074 ;	../../shared/src/phy_init.c:546: cmx_TEMPC_STEP_CTRL_2_0 = 3;
   C862 90 E6 12           3075 	mov	dptr,#(_CONTROL_CONFIG3 + 0x0002)
   C865 E0                 3076 	movx	a,@dptr
   C866 54 E3              3077 	anl	a,#0xe3
   C868 44 0C              3078 	orl	a,#0x0c
   C86A F0                 3079 	movx	@dptr,a
   C86B                    3080 00122$:
                           3081 ;	../../shared/src/phy_init.c:549: if(phy_mode<=SAS)
   C86B 90 A3 16           3082 	mov	dptr,#(_SYSTEM + 0x0002)
   C86E E0                 3083 	movx	a,@dptr
   C86F 54 07              3084 	anl	a,#0x07
   C871 FA                 3085 	mov	r2,a
   C872 C3                 3086 	clr	c
   C873 74 81              3087 	mov	a,#(0x01 ^ 0x80)
   C875 8A F0              3088 	mov	b,r2
   C877 63 F0 80           3089 	xrl	b,#0x80
   C87A 95 F0              3090 	subb	a,b
   C87C 40 09              3091 	jc	00124$
                           3092 ;	../../shared/src/phy_init.c:550: reg_LOCAL_STATUS_FIELD_INIT_LANE_15_0 = 0x4000; //tx_init=1
   C87E 90 26 04           3093 	mov	dptr,#_DME_ENC_REG1
   C881 E4                 3094 	clr	a
   C882 F0                 3095 	movx	@dptr,a
   C883 A3                 3096 	inc	dptr
   C884 74 40              3097 	mov	a,#0x40
   C886 F0                 3098 	movx	@dptr,a
   C887                    3099 00124$:
                           3100 ;	../../shared/src/phy_init.c:553: MCU_WDT_LANE.VAL = 0x0020f424L; //500msec : after pass the time = mcu_clk * reg_mcu_wdt_cnt_lo[15:0] * reg_mcu_wdt_cnt_hi[14:0], mcu trigger PIN_MCU_WDT0/1 to SOC
   C887 90 22 DC           3101 	mov	dptr,#_MCU_WDT_LANE
   C88A 74 24              3102 	mov	a,#0x24
   C88C F0                 3103 	movx	@dptr,a
   C88D A3                 3104 	inc	dptr
   C88E 74 F4              3105 	mov	a,#0xF4
   C890 F0                 3106 	movx	@dptr,a
   C891 A3                 3107 	inc	dptr
   C892 74 20              3108 	mov	a,#0x20
   C894 F0                 3109 	movx	@dptr,a
   C895 A3                 3110 	inc	dptr
   C896 E4                 3111 	clr	a
   C897 F0                 3112 	movx	@dptr,a
                           3113 ;	../../shared/src/phy_init.c:554: reg_MCU_WDT_EN_LANE = 1;
   C898 90 22 DF           3114 	mov	dptr,#(_MCU_WDT_LANE + 0x0003)
   C89B E0                 3115 	movx	a,@dptr
   C89C 44 80              3116 	orl	a,#0x80
   C89E F0                 3117 	movx	@dptr,a
                           3118 ;	../../shared/src/phy_init.c:559: reg_VTHVCOCAL_2_0 = 1;
   C89F 90 82 20           3119 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_136
   C8A2 E0                 3120 	movx	a,@dptr
   C8A3 54 F1              3121 	anl	a,#0xf1
   C8A5 44 02              3122 	orl	a,#0x02
   C8A7 F0                 3123 	movx	@dptr,a
                           3124 ;	../../shared/src/phy_init.c:560: reg_VTHVCOPTAT_2_0 = 6;
   C8A8 90 82 24           3125 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_137
   C8AB E0                 3126 	movx	a,@dptr
   C8AC 54 1F              3127 	anl	a,#0x1f
   C8AE 44 C0              3128 	orl	a,#0xc0
   C8B0 F0                 3129 	movx	@dptr,a
                           3130 ;	../../shared/src/phy_init.c:561: reg_CMN_IPP_SLLP_CUR_SEL_2_0 = 4;
   C8B1 90 83 48           3131 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_210
   C8B4 E0                 3132 	movx	a,@dptr
   C8B5 54 E3              3133 	anl	a,#0xe3
   C8B7 44 10              3134 	orl	a,#0x10
   C8B9 F0                 3135 	movx	@dptr,a
                           3136 ;	../../shared/src/phy_init.c:562: reg_SEL_IPP_IPTAT_SLLP_RING_1_0 = 2;
   C8BA 90 83 14           3137 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_197
   C8BD E0                 3138 	movx	a,@dptr
   C8BE 54 CF              3139 	anl	a,#0xcf
   C8C0 44 20              3140 	orl	a,#0x20
   C8C2 F0                 3141 	movx	@dptr,a
                           3142 ;	../../shared/src/phy_init.c:566: reg_PLL_SLLP_DAC_RANGE_SHIFT_RING_1_0 = 1;
   C8C3 90 83 04           3143 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   C8C6 E0                 3144 	movx	a,@dptr
   C8C7 54 CF              3145 	anl	a,#0xcf
   C8C9 44 10              3146 	orl	a,#0x10
   C8CB F0                 3147 	movx	@dptr,a
                           3148 ;	../../shared/src/phy_init.c:568: reg_VCON_REF_SEL_RING_1_0 = 2;
   C8CC 90 82 24           3149 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_137
   C8CF E0                 3150 	movx	a,@dptr
   C8D0 54 FC              3151 	anl	a,#0xfc
   C8D2 44 02              3152 	orl	a,#0x02
   C8D4 F0                 3153 	movx	@dptr,a
                           3154 ;	../../shared/src/phy_init.c:569: cmx_RINGPLL_DAC_FINE_CODE_RATIO_7_0 = 4;
   C8D5 90 E6 1A           3155 	mov	dptr,#(_CONTROL_CONFIG5 + 0x0002)
   C8D8 74 04              3156 	mov	a,#0x04
   C8DA F0                 3157 	movx	@dptr,a
                           3158 ;	../../shared/src/phy_init.c:570: cmx_RINGPLL_DAC_MAX_STEP_NUM_7_0 = 0x5;
   C8DB 90 E6 1B           3159 	mov	dptr,#(_CONTROL_CONFIG5 + 0x0003)
   C8DE 74 05              3160 	mov	a,#0x05
   C8E0 F0                 3161 	movx	@dptr,a
                           3162 ;	../../shared/src/phy_init.c:571: cmx_RINGPLL_CAL_FINE_STEP_7_0 = 8;
   C8E1 90 E6 45           3163 	mov	dptr,#(_CON_CAL_STEP_SIZE5 + 0x0001)
   C8E4 74 08              3164 	mov	a,#0x08
   C8E6 F0                 3165 	movx	@dptr,a
                           3166 ;	../../shared/src/phy_init.c:572: cmx_RINGPLL_CAL_COUNTER_SIZE_7_0 = 0x20;
   C8E7 90 E6 46           3167 	mov	dptr,#(_CON_CAL_STEP_SIZE5 + 0x0002)
   C8EA 74 20              3168 	mov	a,#0x20
   C8EC F0                 3169 	movx	@dptr,a
                           3170 ;	../../shared/src/phy_init.c:575: reg_VDDVCO_VTH_12NM_SEL = 1;
   C8ED 90 83 48           3171 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_210
   C8F0 E0                 3172 	movx	a,@dptr
   C8F1 44 01              3173 	orl	a,#0x01
   C8F3 F0                 3174 	movx	@dptr,a
                           3175 ;	../../shared/src/phy_init.c:579: if (cmx_TX_TRAIN_MODE == 1) {
   C8F4 90 E6 28           3176 	mov	dptr,#_TRAIN_IF_CONFIG
   C8F7 E0                 3177 	movx	a,@dptr
   C8F8 03                 3178 	rr	a
   C8F9 54 01              3179 	anl	a,#0x01
   C8FB FA                 3180 	mov	r2,a
   C8FC BA 01 4B           3181 	cjne	r2,#0x01,00127$
                           3182 ;	../../shared/src/phy_init.c:580: reg_TRX_TRAIN_TIMEOUT_EN_LANE = 0; //TRX train timer Enable
   C8FF 90 26 15           3183 	mov	dptr,#(_TX_TRAIN_IF_REG0 + 0x0001)
   C902 E0                 3184 	movx	a,@dptr
   C903 54 FB              3185 	anl	a,#0xfb
   C905 F0                 3186 	movx	@dptr,a
                           3187 ;	../../shared/src/phy_init.c:581: reg_PATTERN_LOCK_LOST_TIMEOUT_EN_LANE = 0; //disable FRAME detection timer
   C906 90 26 17           3188 	mov	dptr,#(_TX_TRAIN_IF_REG0 + 0x0003)
   C909 E0                 3189 	movx	a,@dptr
   C90A 54 FE              3190 	anl	a,#0xfe
   C90C F0                 3191 	movx	@dptr,a
                           3192 ;	../../shared/src/phy_init.c:582: reg_REMOTE_RD_REQ_LANE = 1; //always on read out for remote control and status
   C90D 90 26 0E           3193 	mov	dptr,#(_DME_DEC_REG0 + 0x0002)
   C910 E0                 3194 	movx	a,@dptr
   C911 44 80              3195 	orl	a,#0x80
   C913 F0                 3196 	movx	@dptr,a
                           3197 ;	../../shared/src/phy_init.c:583: reg_LOCAL_CTRL_FM_REG_EN_LANE = 1; //force local control to pin
   C914 90 26 1D           3198 	mov	dptr,#(_TX_TRAIN_IF_REG2 + 0x0001)
   C917 E0                 3199 	movx	a,@dptr
   C918 44 40              3200 	orl	a,#0x40
   C91A F0                 3201 	movx	@dptr,a
                           3202 ;	../../shared/src/phy_init.c:584: reg_LOCAL_STATUS_FM_REG_EN_LANE = 1; //force local status to pin
   C91B 90 26 1D           3203 	mov	dptr,#(_TX_TRAIN_IF_REG2 + 0x0001)
   C91E E0                 3204 	movx	a,@dptr
   C91F 44 80              3205 	orl	a,#0x80
   C921 F0                 3206 	movx	@dptr,a
                           3207 ;	../../shared/src/phy_init.c:585: reg_LOCAL_FIELD_FORCE_LANE = 1; //force local control and status to dme encoder
   C922 90 26 03           3208 	mov	dptr,#(_DME_ENC_REG0 + 0x0003)
   C925 E0                 3209 	movx	a,@dptr
   C926 44 04              3210 	orl	a,#0x04
   C928 F0                 3211 	movx	@dptr,a
                           3212 ;	../../shared/src/phy_init.c:586: reg_LOCAL_BALANCE_CAL_EN_LANE = 1; //enable balance bit cal in force mode
                           3213 ;	../../shared/src/phy_init.c:587: reg_LOCAL_ERROR_EN_LANE = 0; //disable HW error handling
   C929 90 26 00           3214 	mov	dptr,#_DME_ENC_REG0
   C92C E0                 3215 	movx	a,@dptr
   C92D 44 80              3216 	orl	a,#0x80
   C92F F0                 3217 	movx	@dptr,a
   C930 E0                 3218 	movx	a,@dptr
   C931 54 BF              3219 	anl	a,#0xbf
   C933 F0                 3220 	movx	@dptr,a
                           3221 ;	../../shared/src/phy_init.c:588: reg_TRAIN_PIN_FM_REG_EN_LANE = 0; //not force COMPLETE/FAILD/ERROR
                           3222 ;	../../shared/src/phy_init.c:589: reg_TRAIN_ERR_FM_REG_EN_LANE = 1; //force ERROR
                           3223 ;	../../shared/src/phy_init.c:590: reg_TRAIN_RDY_FM_REG_EN_LANE = 0; //not force READY
   C934 90 26 1C           3224 	mov	dptr,#_TX_TRAIN_IF_REG2
   C937 E0                 3225 	movx	a,@dptr
   C938 54 FE              3226 	anl	a,#0xfe
   C93A F0                 3227 	movx	@dptr,a
   C93B E0                 3228 	movx	a,@dptr
   C93C 44 02              3229 	orl	a,#0x02
   C93E F0                 3230 	movx	@dptr,a
   C93F E0                 3231 	movx	a,@dptr
   C940 54 FB              3232 	anl	a,#0xfb
   C942 F0                 3233 	movx	@dptr,a
                           3234 ;	../../shared/src/phy_init.c:591: reg_REMOTE_INIT_FM_REG_EN_LANE = 1; //force remote tx init to aviod READY by HW
   C943 90 26 23           3235 	mov	dptr,#(_TX_TRAIN_IF_REG3 + 0x0003)
   C946 E0                 3236 	movx	a,@dptr
   C947 44 40              3237 	orl	a,#0x40
   C949 F0                 3238 	movx	@dptr,a
   C94A                    3239 00127$:
   C94A 02 00 C5           3240 	ljmp	__sdcc_banked_ret
                           3241 ;------------------------------------------------------------
                           3242 ;Allocation info for local variables in function 'reset_pwr_reg'
                           3243 ;------------------------------------------------------------
                           3244 ;------------------------------------------------------------
                           3245 ;	../../shared/src/phy_init.c:607: void reset_pwr_reg(void) BANKING_CTRL {
                           3246 ;	-----------------------------------------
                           3247 ;	 function reset_pwr_reg
                           3248 ;	-----------------------------------------
   C94D                    3249 _reset_pwr_reg:
                           3250 ;	../../shared/src/phy_init.c:610: if((phy_mode == PCIE) || (phy_mode == USB))
   C94D 90 A3 16           3251 	mov	dptr,#(_SYSTEM + 0x0002)
   C950 E0                 3252 	movx	a,@dptr
   C951 54 07              3253 	anl	a,#0x07
   C953 FA                 3254 	mov	r2,a
   C954 BA 03 02           3255 	cjne	r2,#0x03,00139$
   C957 80 15              3256 	sjmp	00103$
   C959                    3257 00139$:
   C959 90 A3 16           3258 	mov	dptr,#(_SYSTEM + 0x0002)
   C95C E0                 3259 	movx	a,@dptr
   C95D 54 07              3260 	anl	a,#0x07
   C95F FA                 3261 	mov	r2,a
   C960 BA 05 02           3262 	cjne	r2,#0x05,00140$
   C963 80 09              3263 	sjmp	00103$
   C965                    3264 00140$:
                           3265 ;	../../shared/src/phy_init.c:621: PM_CTRL_INTERRUPT_REG2.BT.B2 = 0;
   C965 90 20 1E           3266 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG2 + 0x0002)
                           3267 ;	../../shared/src/phy_init.c:622: PM_CTRL_INTERRUPT_REG2.BT.B3 = 0; // PU_RX|PU_TX|PU_PLL|rx_init|regclk_dis|PU_IVREF
   C968 E4                 3268 	clr	a
   C969 F0                 3269 	movx	@dptr,a
   C96A 90 20 1F           3270 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG2 + 0x0003)
   C96D F0                 3271 	movx	@dptr,a
   C96E                    3272 00103$:
                           3273 ;	../../shared/src/phy_init.c:630: reg_INT3_INT_REFCLK_DIS_CHG_INT_EN_LANE = 0;
   C96E 90 22 4E           3274 	mov	dptr,#(_MCU_INT3_CONTROL + 0x0002)
   C971 E0                 3275 	movx	a,@dptr
   C972 54 F7              3276 	anl	a,#0xf7
   C974 F0                 3277 	movx	@dptr,a
                           3278 ;	../../shared/src/phy_init.c:631: reg_INT3_INT_PU_IVREF_CHG_INT_EN_LANE = 0;
   C975 90 22 4E           3279 	mov	dptr,#(_MCU_INT3_CONTROL + 0x0002)
   C978 E0                 3280 	movx	a,@dptr
   C979 54 FB              3281 	anl	a,#0xfb
   C97B F0                 3282 	movx	@dptr,a
                           3283 ;	../../shared/src/phy_init.c:633: if((phy_mode == PCIE) || (phy_mode == USB))
   C97C 90 A3 16           3284 	mov	dptr,#(_SYSTEM + 0x0002)
   C97F E0                 3285 	movx	a,@dptr
   C980 54 07              3286 	anl	a,#0x07
   C982 FA                 3287 	mov	r2,a
   C983 BA 03 02           3288 	cjne	r2,#0x03,00141$
   C986 80 5B              3289 	sjmp	00115$
   C988                    3290 00141$:
   C988 90 A3 16           3291 	mov	dptr,#(_SYSTEM + 0x0002)
   C98B E0                 3292 	movx	a,@dptr
   C98C 54 07              3293 	anl	a,#0x07
   C98E FA                 3294 	mov	r2,a
   C98F BA 05 02           3295 	cjne	r2,#0x05,00142$
   C992 80 4F              3296 	sjmp	00115$
   C994                    3297 00142$:
                           3298 ;	../../shared/src/phy_init.c:648: reg_INT9_PM_CHG_INT_EN_LANE = 0;
   C994 90 22 64           3299 	mov	dptr,#_MCU_INT9_CONTROL
   C997 E0                 3300 	movx	a,@dptr
   C998 54 FE              3301 	anl	a,#0xfe
   C99A F0                 3302 	movx	@dptr,a
                           3303 ;	../../shared/src/phy_init.c:649: if(serdes_ring_lane_en) {
   C99B 90 66 23           3304 	mov	dptr,#_serdes_ring_lane_en
   C99E E0                 3305 	movx	a,@dptr
   C99F FA                 3306 	mov	r2,a
   C9A0 60 1E              3307 	jz	00111$
                           3308 ;	../../shared/src/phy_init.c:650: if(tag_ringpll_ind_en==0 && mcuid==master_mcu)
   C9A2 90 E6 04           3309 	mov	dptr,#_CONTROL_CONFIG0
   C9A5 E0                 3310 	movx	a,@dptr
   C9A6 20 E6 2C           3311 	jb	acc.6,00112$
   C9A9 90 22 00           3312 	mov	dptr,#_MCU_CONTROL_LANE
   C9AC E0                 3313 	movx	a,@dptr
   C9AD FA                 3314 	mov	r2,a
   C9AE 90 E6 50           3315 	mov	dptr,#_MCU_CONFIG
   C9B1 E0                 3316 	movx	a,@dptr
   C9B2 FB                 3317 	mov	r3,a
   C9B3 EA                 3318 	mov	a,r2
   C9B4 B5 03 1E           3319 	cjne	a,ar3,00112$
                           3320 ;	../../shared/src/phy_init.c:651: reg_INT9_INT_PU_PLL_OR_CHG_INT_EN_LANE = 0;
   C9B7 90 22 67           3321 	mov	dptr,#(_MCU_INT9_CONTROL + 0x0003)
   C9BA E0                 3322 	movx	a,@dptr
   C9BB 54 FE              3323 	anl	a,#0xfe
   C9BD F0                 3324 	movx	@dptr,a
   C9BE 80 15              3325 	sjmp	00112$
   C9C0                    3326 00111$:
                           3327 ;	../../shared/src/phy_init.c:653: else if(mcuid==master_mcu )
   C9C0 90 22 00           3328 	mov	dptr,#_MCU_CONTROL_LANE
   C9C3 E0                 3329 	movx	a,@dptr
   C9C4 FA                 3330 	mov	r2,a
   C9C5 90 E6 50           3331 	mov	dptr,#_MCU_CONFIG
   C9C8 E0                 3332 	movx	a,@dptr
   C9C9 FB                 3333 	mov	r3,a
   C9CA EA                 3334 	mov	a,r2
   C9CB B5 03 07           3335 	cjne	a,ar3,00112$
                           3336 ;	../../shared/src/phy_init.c:654: reg_INT9_INT_PU_PLL_OR_CHG_INT_EN_LANE = 0;
   C9CE 90 22 67           3337 	mov	dptr,#(_MCU_INT9_CONTROL + 0x0003)
   C9D1 E0                 3338 	movx	a,@dptr
   C9D2 54 FE              3339 	anl	a,#0xfe
   C9D4 F0                 3340 	movx	@dptr,a
   C9D5                    3341 00112$:
                           3342 ;	../../shared/src/phy_init.c:655: reg_INT1_INT_POWER_STATE_VALID_RISE_INT_EN_LANE = 0;
   C9D5 90 22 46           3343 	mov	dptr,#(_MCU_INT1_CONTROL + 0x0002)
   C9D8 E0                 3344 	movx	a,@dptr
   C9D9 54 FD              3345 	anl	a,#0xfd
   C9DB F0                 3346 	movx	@dptr,a
                           3347 ;	../../shared/src/phy_init.c:657: reg_INT8_PM_PCIE_FUNC_CHG_INT_EN_LANE = 0;
   C9DC 90 22 61           3348 	mov	dptr,#(_MCU_INT8_CONTROL + 0x0001)
   C9DF E0                 3349 	movx	a,@dptr
   C9E0 54 BF              3350 	anl	a,#0xbf
   C9E2 F0                 3351 	movx	@dptr,a
   C9E3                    3352 00115$:
                           3353 ;	../../shared/src/phy_init.c:664: reg_INT2_SPD_INT_GEN_EN_LANE = 0;
   C9E3 90 22 48           3354 	mov	dptr,#_MCU_INT2_CONTROL
   C9E6 E0                 3355 	movx	a,@dptr
   C9E7 54 FD              3356 	anl	a,#0xfd
   C9E9 F0                 3357 	movx	@dptr,a
                           3358 ;	../../shared/src/phy_init.c:667: reg_INT11_PIN_RX_TRAIN_ENABLE_INT_EN_LANE = 0;
   C9EA 90 22 6D           3359 	mov	dptr,#(_MCU_INT11_CONTROL + 0x0001)
   C9ED E0                 3360 	movx	a,@dptr
   C9EE 54 FE              3361 	anl	a,#0xfe
   C9F0 F0                 3362 	movx	@dptr,a
                           3363 ;	../../shared/src/phy_init.c:670: reg_INT5_PIN_TX_TRAIN_ENABLE_INT_EN_LANE = 0;
   C9F1 90 22 55           3364 	mov	dptr,#(_MCU_INT5_CONTROL + 0x0001)
   C9F4 E0                 3365 	movx	a,@dptr
   C9F5 54 FD              3366 	anl	a,#0xfd
   C9F7 F0                 3367 	movx	@dptr,a
                           3368 ;	../../shared/src/phy_init.c:673: reg_INT10_INT_RX_INIT_RISE_INT_EN_LANE = 0;
   C9F8 90 22 6A           3369 	mov	dptr,#(_MCU_INT10_CONTROL + 0x0002)
   C9FB E0                 3370 	movx	a,@dptr
   C9FC 54 FE              3371 	anl	a,#0xfe
   C9FE F0                 3372 	movx	@dptr,a
                           3373 ;	../../shared/src/phy_init.c:675: if(phy_mode != PCIE) {
   C9FF 90 A3 16           3374 	mov	dptr,#(_SYSTEM + 0x0002)
   CA02 E0                 3375 	movx	a,@dptr
   CA03 54 07              3376 	anl	a,#0x07
   CA05 FA                 3377 	mov	r2,a
   CA06 BA 03 02           3378 	cjne	r2,#0x03,00149$
   CA09 80 15              3379 	sjmp	00118$
   CA0B                    3380 00149$:
                           3381 ;	../../shared/src/phy_init.c:677: reg_INT7_REMOTE_CTRL_VALID_INT_EN_LANE = 0;
   CA0B 90 22 5D           3382 	mov	dptr,#(_MCU_INT7_CONTROL + 0x0001)
   CA0E E0                 3383 	movx	a,@dptr
   CA0F 54 F7              3384 	anl	a,#0xf7
   CA11 F0                 3385 	movx	@dptr,a
                           3386 ;	../../shared/src/phy_init.c:685: reg_INT6_PIN_PAPTA_TRAIN_ENABLE_INT_EN_LANE = 0;
   CA12 90 22 5B           3387 	mov	dptr,#(_MCU_INT6_CONTROL + 0x0003)
   CA15 E0                 3388 	movx	a,@dptr
   CA16 54 FD              3389 	anl	a,#0xfd
   CA18 F0                 3390 	movx	@dptr,a
                           3391 ;	../../shared/src/phy_init.c:688: reg_INT12_PIN_PAPTA_TRAIN_DISABLE_INT_EN_LANE = 0;
   CA19 90 22 E1           3392 	mov	dptr,#(_MCU_INT_CONTROL_13 + 0x0001)
   CA1C E0                 3393 	movx	a,@dptr
   CA1D 54 EF              3394 	anl	a,#0xef
   CA1F F0                 3395 	movx	@dptr,a
   CA20                    3396 00118$:
                           3397 ;	../../shared/src/phy_init.c:693: if(!reg_MASTER_PHY_EN)
   CA20 90 A3 14           3398 	mov	dptr,#_SYSTEM
   CA23 E0                 3399 	movx	a,@dptr
   CA24 20 E3 07           3400 	jb	acc.3,00120$
                           3401 ;	../../shared/src/phy_init.c:694: reg_INT1_DPHY_ANA_LANE_DISABLE_INT_EN_LANE = 0;
   CA27 90 22 47           3402 	mov	dptr,#(_MCU_INT1_CONTROL + 0x0003)
   CA2A E0                 3403 	movx	a,@dptr
   CA2B 54 F7              3404 	anl	a,#0xf7
   CA2D F0                 3405 	movx	@dptr,a
   CA2E                    3406 00120$:
                           3407 ;	../../shared/src/phy_init.c:699: if(mcuid== master_mcu) {
   CA2E 90 22 00           3408 	mov	dptr,#_MCU_CONTROL_LANE
   CA31 E0                 3409 	movx	a,@dptr
   CA32 FA                 3410 	mov	r2,a
   CA33 90 E6 50           3411 	mov	dptr,#_MCU_CONFIG
   CA36 E0                 3412 	movx	a,@dptr
   CA37 FB                 3413 	mov	r3,a
   CA38 EA                 3414 	mov	a,r2
   CA39 B5 03 07           3415 	cjne	a,ar3,00122$
                           3416 ;	../../shared/src/phy_init.c:700: reg_INT4_MCU_REMOTE_REQ_INT_EN_LANE = 0;
   CA3C 90 22 53           3417 	mov	dptr,#(_MCU_INT4_CONTROL + 0x0003)
   CA3F E0                 3418 	movx	a,@dptr
   CA40 54 EF              3419 	anl	a,#0xef
   CA42 F0                 3420 	movx	@dptr,a
   CA43                    3421 00122$:
                           3422 ;	../../shared/src/phy_init.c:703: reg_INT4_PHY_MCU_REMOTE_REQ_INT_EN_LANE = 0;
   CA43 90 22 53           3423 	mov	dptr,#(_MCU_INT4_CONTROL + 0x0003)
   CA46 E0                 3424 	movx	a,@dptr
   CA47 54 BF              3425 	anl	a,#0xbf
   CA49 F0                 3426 	movx	@dptr,a
                           3427 ;	../../shared/src/phy_init.c:708: reg_RX_INIT_DONE_LANE = 0;
   CA4A 90 21 02           3428 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   CA4D E0                 3429 	movx	a,@dptr
   CA4E 54 F7              3430 	anl	a,#0xf7
   CA50 F0                 3431 	movx	@dptr,a
                           3432 ;	../../shared/src/phy_init.c:709: reg_PIN_PLL_READY_RX_LANE = 0;
   CA51 90 21 02           3433 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   CA54 E0                 3434 	movx	a,@dptr
   CA55 54 BF              3435 	anl	a,#0xbf
   CA57 F0                 3436 	movx	@dptr,a
                           3437 ;	../../shared/src/phy_init.c:710: reg_PIN_PLL_READY_TX_LANE = 0;
   CA58 90 20 02           3438 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   CA5B E0                 3439 	movx	a,@dptr
   CA5C 54 FB              3440 	anl	a,#0xfb
   CA5E F0                 3441 	movx	@dptr,a
                           3442 ;	../../shared/src/phy_init.c:712: short_delay();
   CA5F 78 05              3443 	mov	r0,#_short_delay
   CA61 79 C0              3444 	mov	r1,#(_short_delay >> 8)
   CA63 7A 02              3445 	mov	r2,#(_short_delay >> 16)
   CA65 12 00 B3           3446 	lcall	__sdcc_banked_call
                           3447 ;	../../shared/src/phy_init.c:713: short_delay();
   CA68 78 05              3448 	mov	r0,#_short_delay
   CA6A 79 C0              3449 	mov	r1,#(_short_delay >> 8)
   CA6C 7A 02              3450 	mov	r2,#(_short_delay >> 16)
   CA6E 12 00 B3           3451 	lcall	__sdcc_banked_call
                           3452 ;	../../shared/src/phy_init.c:715: if(mcuid== master_mcu) {
   CA71 90 22 00           3453 	mov	dptr,#_MCU_CONTROL_LANE
   CA74 E0                 3454 	movx	a,@dptr
   CA75 FA                 3455 	mov	r2,a
   CA76 90 E6 50           3456 	mov	dptr,#_MCU_CONFIG
   CA79 E0                 3457 	movx	a,@dptr
   CA7A FB                 3458 	mov	r3,a
   CA7B EA                 3459 	mov	a,r2
   CA7C B5 03 02           3460 	cjne	a,ar3,00153$
   CA7F 80 02              3461 	sjmp	00154$
   CA81                    3462 00153$:
   CA81 80 79              3463 	sjmp	00124$
   CA83                    3464 00154$:
                           3465 ;	../../shared/src/phy_init.c:716: pll_clk_ready_all_0();
   CA83 78 0E              3466 	mov	r0,#_pll_clk_ready_all_0
   CA85 79 D5              3467 	mov	r1,#(_pll_clk_ready_all_0 >> 8)
   CA87 7A 02              3468 	mov	r2,#(_pll_clk_ready_all_0 >> 16)
   CA89 12 00 B3           3469 	lcall	__sdcc_banked_call
                           3470 ;	../../shared/src/phy_init.c:717: reg_ANA_PU_IVREF = 1;
   CA8C 90 A3 4E           3471 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   CA8F E0                 3472 	movx	a,@dptr
   CA90 44 08              3473 	orl	a,#0x08
   CA92 F0                 3474 	movx	@dptr,a
                           3475 ;	../../shared/src/phy_init.c:718: reg_ANA_PU_IVREF_DLY1 =	1;
   CA93 90 A3 4E           3476 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   CA96 E0                 3477 	movx	a,@dptr
   CA97 44 04              3478 	orl	a,#0x04
   CA99 F0                 3479 	movx	@dptr,a
                           3480 ;	../../shared/src/phy_init.c:719: reg_ANA_PU_IVREF_DLY2 =	1;
   CA9A 90 A3 4E           3481 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   CA9D E0                 3482 	movx	a,@dptr
   CA9E 44 02              3483 	orl	a,#0x02
   CAA0 F0                 3484 	movx	@dptr,a
                           3485 ;	../../shared/src/phy_init.c:720: reg_ANA_PU_IVREF_DLY3 =	1;
   CAA1 90 A3 4E           3486 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   CAA4 E0                 3487 	movx	a,@dptr
   CAA5 44 01              3488 	orl	a,#0x01
   CAA7 F0                 3489 	movx	@dptr,a
                           3490 ;	../../shared/src/phy_init.c:721: reg_ANA_PU_PLL = 0;
   CAA8 90 A3 1B           3491 	mov	dptr,#(_PM_CMN_REG1 + 0x0003)
   CAAB E0                 3492 	movx	a,@dptr
   CAAC 54 FB              3493 	anl	a,#0xfb
   CAAE F0                 3494 	movx	@dptr,a
                           3495 ;	../../shared/src/phy_init.c:722: reg_ANA_PU_PLL_DLY	= 0;
   CAAF 90 A3 1B           3496 	mov	dptr,#(_PM_CMN_REG1 + 0x0003)
   CAB2 E0                 3497 	movx	a,@dptr
   CAB3 54 FE              3498 	anl	a,#0xfe
   CAB5 F0                 3499 	movx	@dptr,a
                           3500 ;	../../shared/src/phy_init.c:723: reg_RESET_ANA = 1;
   CAB6 90 A3 19           3501 	mov	dptr,#(_PM_CMN_REG1 + 0x0001)
   CAB9 E0                 3502 	movx	a,@dptr
   CABA 44 10              3503 	orl	a,#0x10
   CABC F0                 3504 	movx	@dptr,a
                           3505 ;	../../shared/src/phy_init.c:724: reg_REFCLK_DIS_FM_PM = 0;
   CABD 90 A3 1B           3506 	mov	dptr,#(_PM_CMN_REG1 + 0x0003)
   CAC0 E0                 3507 	movx	a,@dptr
   CAC1 54 7F              3508 	anl	a,#0x7f
   CAC3 F0                 3509 	movx	@dptr,a
                           3510 ;	../../shared/src/phy_init.c:726: reg_RESET_ANA_RING = 1;
   CAC4 90 A3 33           3511 	mov	dptr,#(_PLLCAL_REG1 + 0x0003)
   CAC7 E0                 3512 	movx	a,@dptr
   CAC8 44 08              3513 	orl	a,#0x08
   CACA F0                 3514 	movx	@dptr,a
                           3515 ;	../../shared/src/phy_init.c:727: reg_ANA_PU_PLL_RING = 0;
   CACB 90 A3 24           3516 	mov	dptr,#_INPUT_CMN_PIN_REG2
   CACE E0                 3517 	movx	a,@dptr
   CACF 54 DF              3518 	anl	a,#0xdf
   CAD1 F0                 3519 	movx	@dptr,a
                           3520 ;	../../shared/src/phy_init.c:728: reg_ANA_PU_PLL_DLY_RING = 0;
   CAD2 90 A3 4D           3521 	mov	dptr,#(_PM_CMN_REG2 + 0x0001)
   CAD5 E0                 3522 	movx	a,@dptr
   CAD6 54 FB              3523 	anl	a,#0xfb
   CAD8 F0                 3524 	movx	@dptr,a
                           3525 ;	../../shared/src/phy_init.c:729: reg_RESET_DTX_RING = 1;
   CAD9 90 A0 11           3526 	mov	dptr,#(_DTX_REG2 + 0x0001)
   CADC E0                 3527 	movx	a,@dptr
   CADD 44 04              3528 	orl	a,#0x04
   CADF F0                 3529 	movx	@dptr,a
                           3530 ;	../../shared/src/phy_init.c:730: reg_DTX_CLK_OFF_RING = 1;
   CAE0 90 A3 18           3531 	mov	dptr,#_PM_CMN_REG1
   CAE3 E0                 3532 	movx	a,@dptr
   CAE4 44 01              3533 	orl	a,#0x01
   CAE6 F0                 3534 	movx	@dptr,a
                           3535 ;	../../shared/src/phy_init.c:732: reg_DTX_CLK_OFF	= 1;
   CAE7 90 A3 19           3536 	mov	dptr,#(_PM_CMN_REG1 + 0x0001)
   CAEA E0                 3537 	movx	a,@dptr
   CAEB 44 01              3538 	orl	a,#0x01
   CAED F0                 3539 	movx	@dptr,a
                           3540 ;	../../shared/src/phy_init.c:733: reg_RESET_DTX = 1;
   CAEE 90 A0 0A           3541 	mov	dptr,#(_DTX_REG0 + 0x0002)
   CAF1 E0                 3542 	movx	a,@dptr
   CAF2 44 80              3543 	orl	a,#0x80
   CAF4 F0                 3544 	movx	@dptr,a
                           3545 ;	../../shared/src/phy_init.c:734: reg_TX_INTPRESET_EXT = 1;
   CAF5 90 82 EC           3546 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_187
   CAF8 E0                 3547 	movx	a,@dptr
   CAF9 44 20              3548 	orl	a,#0x20
   CAFB F0                 3549 	movx	@dptr,a
   CAFC                    3550 00124$:
                           3551 ;	../../shared/src/phy_init.c:744: reg_ANA_PU_RX_LANE	= 0;
   CAFC 90 21 03           3552 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0003)
   CAFF E0                 3553 	movx	a,@dptr
   CB00 54 BF              3554 	anl	a,#0xbf
   CB02 F0                 3555 	movx	@dptr,a
                           3556 ;	../../shared/src/phy_init.c:745: reg_ANA_PU_RX_DLY_LANE	= 0;
   CB03 90 21 01           3557 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0001)
   CB06 E0                 3558 	movx	a,@dptr
   CB07 54 7F              3559 	anl	a,#0x7f
   CB09 F0                 3560 	movx	@dptr,a
                           3561 ;	../../shared/src/phy_init.c:746: reg_ANA_PU_TX_LANE = 0;
   CB0A 90 20 03           3562 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0003)
   CB0D E0                 3563 	movx	a,@dptr
   CB0E 54 BF              3564 	anl	a,#0xbf
   CB10 F0                 3565 	movx	@dptr,a
                           3566 ;	../../shared/src/phy_init.c:747: reg_ANA_PU_SQ_LANE	= 0;
   CB11 90 21 03           3567 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0003)
   CB14 E0                 3568 	movx	a,@dptr
   CB15 54 DF              3569 	anl	a,#0xdf
   CB17 F0                 3570 	movx	@dptr,a
                           3571 ;	../../shared/src/phy_init.c:748: reg_DTL_FLOOP_FREEZE_LANE =	1;
   CB18 90 21 63           3572 	mov	dptr,#(_DTL_REG0 + 0x0003)
   CB1B E0                 3573 	movx	a,@dptr
   CB1C 44 40              3574 	orl	a,#0x40
   CB1E F0                 3575 	movx	@dptr,a
                           3576 ;	../../shared/src/phy_init.c:749: reg_REG_DTL_LOOP_FREEZE_LANE = 1;
   CB1F 90 02 34           3577 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_141
   CB22 E0                 3578 	movx	a,@dptr
   CB23 44 20              3579 	orl	a,#0x20
   CB25 F0                 3580 	movx	@dptr,a
                           3581 ;	../../shared/src/phy_init.c:750: reg_DFE_CLK_OFF_LANE = 1;
   CB26 90 24 10           3582 	mov	dptr,#_RX_EQ_CLK_CTRL
   CB29 E0                 3583 	movx	a,@dptr
   CB2A 44 01              3584 	orl	a,#0x01
   CB2C F0                 3585 	movx	@dptr,a
                           3586 ;	../../shared/src/phy_init.c:751: reg_RESET_DTL_LANE = 1;
   CB2D 90 21 02           3587 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   CB30 E0                 3588 	movx	a,@dptr
   CB31 44 20              3589 	orl	a,#0x20
   CB33 F0                 3590 	movx	@dptr,a
                           3591 ;	../../shared/src/phy_init.c:752: reg_RESET_DFE_LANE = 1;
   CB34 90 24 10           3592 	mov	dptr,#_RX_EQ_CLK_CTRL
   CB37 E0                 3593 	movx	a,@dptr
   CB38 44 04              3594 	orl	a,#0x04
   CB3A F0                 3595 	movx	@dptr,a
                           3596 ;	../../shared/src/phy_init.c:753: reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
   CB3B 90 20 07           3597 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   CB3E E0                 3598 	movx	a,@dptr
   CB3F 54 BF              3599 	anl	a,#0xbf
   CB41 F0                 3600 	movx	@dptr,a
                           3601 ;	../../shared/src/phy_init.c:754: reg_ANA_TX_IDLE_HIZ_EN_LANE = 0;
   CB42 90 20 07           3602 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   CB45 E0                 3603 	movx	a,@dptr
   CB46 54 7F              3604 	anl	a,#0x7f
   CB48 F0                 3605 	movx	@dptr,a
                           3606 ;	../../shared/src/phy_init.c:755: reg_ANA_BEACON_EN_LANE = 0;
   CB49 90 20 00           3607 	mov	dptr,#_PM_CTRL_TX_LANE_REG1_LANE
   CB4C E0                 3608 	movx	a,@dptr
   CB4D 54 BF              3609 	anl	a,#0xbf
   CB4F F0                 3610 	movx	@dptr,a
                           3611 ;	../../shared/src/phy_init.c:756: reg_ANA_TXDETRX_START_LANE = 0;
   CB50 90 20 01           3612 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0001)
   CB53 E0                 3613 	movx	a,@dptr
   CB54 54 7F              3614 	anl	a,#0x7f
   CB56 F0                 3615 	movx	@dptr,a
                           3616 ;	../../shared/src/phy_init.c:757: reg_ANA_TXDETRX_EN_LANE = 0;
   CB57 90 20 02           3617 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   CB5A E0                 3618 	movx	a,@dptr
   CB5B 54 FE              3619 	anl	a,#0xfe
   CB5D F0                 3620 	movx	@dptr,a
                           3621 ;	../../shared/src/phy_init.c:758: reg_PIN_TXDETRX_VALID_LANE = 0;
   CB5E 90 20 01           3622 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0001)
   CB61 E0                 3623 	movx	a,@dptr
   CB62 54 BF              3624 	anl	a,#0xbf
   CB64 F0                 3625 	movx	@dptr,a
                           3626 ;	../../shared/src/phy_init.c:759: reg_EOM_RESET_INTP_EXT_LANE = 1;
   CB65 90 00 24           3627 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_9
   CB68 E0                 3628 	movx	a,@dptr
   CB69 44 08              3629 	orl	a,#0x08
   CB6B F0                 3630 	movx	@dptr,a
                           3631 ;	../../shared/src/phy_init.c:760: reg_RESET_INTP_EXT_LANE = 1;
   CB6C 90 02 18           3632 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_134
   CB6F E0                 3633 	movx	a,@dptr
   CB70 44 40              3634 	orl	a,#0x40
   CB72 F0                 3635 	movx	@dptr,a
                           3636 ;	../../shared/src/phy_init.c:762: reg_TRXDCC_CAL_CLK100KHZ_LANE = 0; 
   CB73 90 02 20           3637 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   CB76 E0                 3638 	movx	a,@dptr
   CB77 54 FE              3639 	anl	a,#0xfe
   CB79 F0                 3640 	movx	@dptr,a
                           3641 ;	../../shared/src/phy_init.c:763: reg_RXDCC_DAC_SYNC_CLK_LANE = 0;
   CB7A 90 00 44           3642 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_17
   CB7D E0                 3643 	movx	a,@dptr
   CB7E 54 EF              3644 	anl	a,#0xef
   CB80 F0                 3645 	movx	@dptr,a
                           3646 ;	../../shared/src/phy_init.c:764: reg_TXDCCCAL_EN_LANE = 0;
   CB81 90 02 4C           3647 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_147
   CB84 E0                 3648 	movx	a,@dptr
   CB85 54 7F              3649 	anl	a,#0x7f
   CB87 F0                 3650 	movx	@dptr,a
                           3651 ;	../../shared/src/phy_init.c:765: reg_RXDCC_CAL_EN_LANE = 0;
   CB88 90 00 40           3652 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_16
   CB8B E0                 3653 	movx	a,@dptr
   CB8C 54 FE              3654 	anl	a,#0xfe
   CB8E F0                 3655 	movx	@dptr,a
                           3656 ;	../../shared/src/phy_init.c:766: reg_TEMPC_DAC_VALID = 0;
   CB8F 90 82 C0           3657 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_176
   CB92 E0                 3658 	movx	a,@dptr
   CB93 54 7F              3659 	anl	a,#0x7f
   CB95 F0                 3660 	movx	@dptr,a
                           3661 ;	../../shared/src/phy_init.c:767: reg_EOM_ALIGN_EN_LANE = 0;
   CB96 90 00 38           3662 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_14
   CB99 E0                 3663 	movx	a,@dptr
   CB9A 54 FE              3664 	anl	a,#0xfe
   CB9C F0                 3665 	movx	@dptr,a
                           3666 ;	../../shared/src/phy_init.c:768: reg_TX_TDCAL_EN_LANE = 0;
   CB9D 90 00 60           3667 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_24
   CBA0 E0                 3668 	movx	a,@dptr
   CBA1 54 FD              3669 	anl	a,#0xfd
   CBA3 F0                 3670 	movx	@dptr,a
   CBA4 02 00 C5           3671 	ljmp	__sdcc_banked_ret
                           3672 ;------------------------------------------------------------
                           3673 ;Allocation info for local variables in function 'set_timer_cnt'
                           3674 ;------------------------------------------------------------
                           3675 ;temp                      Allocated to registers r2 r3 
                           3676 ;temp32                    Allocated to registers r2 r3 r4 r5 
                           3677 ;i                         Allocated to registers r2 
                           3678 ;------------------------------------------------------------
                           3679 ;	../../shared/src/phy_init.c:773: void set_timer_cnt() BANKING_CTRL {
                           3680 ;	-----------------------------------------
                           3681 ;	 function set_timer_cnt
                           3682 ;	-----------------------------------------
   CBA7                    3683 _set_timer_cnt:
                           3684 ;	../../shared/src/phy_init.c:778: if(cmx_MCU_FREQ_15_0==0) cmx_MCU_FREQ_15_0 = 400;
   CBA7 90 E6 5C           3685 	mov	dptr,#_MCU_CONFIG1
   CBAA E0                 3686 	movx	a,@dptr
   CBAB FA                 3687 	mov	r2,a
   CBAC A3                 3688 	inc	dptr
   CBAD E0                 3689 	movx	a,@dptr
   CBAE FB                 3690 	mov	r3,a
   CBAF 4A                 3691 	orl	a,r2
   CBB0 70 0A              3692 	jnz	00102$
   CBB2 90 E6 5C           3693 	mov	dptr,#_MCU_CONFIG1
   CBB5 74 90              3694 	mov	a,#0x90
   CBB7 F0                 3695 	movx	@dptr,a
   CBB8 A3                 3696 	inc	dptr
   CBB9 74 01              3697 	mov	a,#0x01
   CBBB F0                 3698 	movx	@dptr,a
   CBBC                    3699 00102$:
                           3700 ;	../../shared/src/phy_init.c:779: mcuclk_mc = (uint8_t)((cmx_MCU_FREQ_15_0+8)/15);
   CBBC 90 E6 5C           3701 	mov	dptr,#_MCU_CONFIG1
   CBBF E0                 3702 	movx	a,@dptr
   CBC0 FA                 3703 	mov	r2,a
   CBC1 A3                 3704 	inc	dptr
   CBC2 E0                 3705 	movx	a,@dptr
   CBC3 FB                 3706 	mov	r3,a
   CBC4 74 08              3707 	mov	a,#0x08
   CBC6 2A                 3708 	add	a,r2
   CBC7 F5 82              3709 	mov	dpl,a
   CBC9 E4                 3710 	clr	a
   CBCA 3B                 3711 	addc	a,r3
   CBCB F5 83              3712 	mov	dph,a
   CBCD 74 0F              3713 	mov	a,#0x0F
   CBCF C0 E0              3714 	push	acc
   CBD1 E4                 3715 	clr	a
   CBD2 C0 E0              3716 	push	acc
   CBD4 12 7C 99           3717 	lcall	__divuint
   CBD7 AA 82              3718 	mov	r2,dpl
   CBD9 15 81              3719 	dec	sp
   CBDB 15 81              3720 	dec	sp
   CBDD 90 66 19           3721 	mov	dptr,#_mcuclk_mc
   CBE0 EA                 3722 	mov	a,r2
   CBE1 F0                 3723 	movx	@dptr,a
                           3724 ;	../../shared/src/phy_init.c:780: reg_MCU_DEBUG0_LANE_7_0 = mcuclk_mc;
   CBE2 90 22 B4           3725 	mov	dptr,#_MCU_DEBUG0_LANE
   CBE5 EA                 3726 	mov	a,r2
   CBE6 F0                 3727 	movx	@dptr,a
                           3728 ;	../../shared/src/phy_init.c:782: i = reg_PIN_REF_FREF_SEL_RD_4_0;
   CBE7 90 A3 2B           3729 	mov	dptr,#(_ANA_TSEN_CONTROL + 0x0003)
   CBEA E0                 3730 	movx	a,@dptr
   CBEB C4                 3731 	swap	a
   CBEC 23                 3732 	rl	a
   CBED 54 1F              3733 	anl	a,#0x1f
                           3734 ;	../../shared/src/phy_init.c:783: cmx_REFCLK_FREQ_7_0 = refclk_tb[i];
   CBEF 90 CC C4           3735 	mov	dptr,#_refclk_tb
   CBF2 93                 3736 	movc	a,@a+dptr
   CBF3 FA                 3737 	mov	r2,a
   CBF4 90 E6 2F           3738 	mov	dptr,#(_CONTROL_CONFIG8 + 0x0003)
   CBF7 EA                 3739 	mov	a,r2
   CBF8 F0                 3740 	movx	@dptr,a
                           3741 ;	../../shared/src/phy_init.c:787: reg_TIMER_1_SEL_LANE_1_0 = 0x01;	//PWM1
   CBF9 90 22 98           3742 	mov	dptr,#_MCU_TIMER_CTRL_1_LANE
   CBFC E0                 3743 	movx	a,@dptr
   CBFD 54 F3              3744 	anl	a,#0xf3
   CBFF 44 04              3745 	orl	a,#0x04
   CC01 F0                 3746 	movx	@dptr,a
                           3747 ;	../../shared/src/phy_init.c:788: reg_TIMER_2_SEL_LANE_1_0 = 0x01;	//PWM1
   CC02 90 22 98           3748 	mov	dptr,#_MCU_TIMER_CTRL_1_LANE
   CC05 E0                 3749 	movx	a,@dptr
   CC06 54 CF              3750 	anl	a,#0xcf
   CC08 44 10              3751 	orl	a,#0x10
   CC0A F0                 3752 	movx	@dptr,a
                           3753 ;	../../shared/src/phy_init.c:789: reg_PWM1_CLK_SEL_LANE_1_0 = 0; //refclk 
   CC0B 90 22 AC           3754 	mov	dptr,#_MCU_TIMER_CTRL_6_LANE
   CC0E E0                 3755 	movx	a,@dptr
   CC0F 54 F3              3756 	anl	a,#0xf3
   CC11 F0                 3757 	movx	@dptr,a
                           3758 ;	../../shared/src/phy_init.c:790: reg_PWM1_EN_LANE = 1;
   CC12 90 22 A3           3759 	mov	dptr,#(_MCU_TIMER_CTRL_3_LANE + 0x0003)
   CC15 E0                 3760 	movx	a,@dptr
   CC16 44 80              3761 	orl	a,#0x80
   CC18 F0                 3762 	movx	@dptr,a
                           3763 ;	../../shared/src/phy_init.c:791: temp = cmx_REFCLK_FREQ_7_0>>1;
   CC19 90 E6 2F           3764 	mov	dptr,#(_CONTROL_CONFIG8 + 0x0003)
   CC1C E0                 3765 	movx	a,@dptr
   CC1D C3                 3766 	clr	c
   CC1E 13                 3767 	rrc	a
   CC1F FA                 3768 	mov	r2,a
   CC20 7B 00              3769 	mov	r3,#0x00
                           3770 ;	../../shared/src/phy_init.c:792: reg_PWM1_COUNTER_LANE_30_0_b0 = (uint8_t)temp;
   CC22 8A 04              3771 	mov	ar4,r2
   CC24 90 22 A0           3772 	mov	dptr,#_MCU_TIMER_CTRL_3_LANE
   CC27 EC                 3773 	mov	a,r4
   CC28 F0                 3774 	movx	@dptr,a
                           3775 ;	../../shared/src/phy_init.c:793: reg_PWM1_COUNTER_LANE_30_0_b1 = (uint8_t)(temp >> 8);
   CC29 8B 02              3776 	mov	ar2,r3
   CC2B 90 22 A1           3777 	mov	dptr,#(_MCU_TIMER_CTRL_3_LANE + 0x0001)
   CC2E EA                 3778 	mov	a,r2
   CC2F F0                 3779 	movx	@dptr,a
                           3780 ;	../../shared/src/phy_init.c:796: reg_PWM2_CLK_SEL_LANE_1_0 = 0; //refclk 
   CC30 90 22 AC           3781 	mov	dptr,#_MCU_TIMER_CTRL_6_LANE
   CC33 E0                 3782 	movx	a,@dptr
   CC34 54 CF              3783 	anl	a,#0xcf
   CC36 F0                 3784 	movx	@dptr,a
                           3785 ;	../../shared/src/phy_init.c:797: temp32 = cmx_REFCLK_FREQ_7_0*500L;
   CC37 90 E6 2F           3786 	mov	dptr,#(_CONTROL_CONFIG8 + 0x0003)
   CC3A E0                 3787 	movx	a,@dptr
   CC3B FA                 3788 	mov	r2,a
   CC3C 7B 00              3789 	mov	r3,#0x00
   CC3E 7C 00              3790 	mov	r4,#0x00
   CC40 7D 00              3791 	mov	r5,#0x00
   CC42 C0 02              3792 	push	ar2
   CC44 C0 03              3793 	push	ar3
   CC46 C0 04              3794 	push	ar4
   CC48 C0 05              3795 	push	ar5
   CC4A 90 01 F4           3796 	mov	dptr,#0x01F4
   CC4D E4                 3797 	clr	a
   CC4E F5 F0              3798 	mov	b,a
   CC50 12 7D E4           3799 	lcall	__mullong
   CC53 AA 82              3800 	mov	r2,dpl
   CC55 AB 83              3801 	mov	r3,dph
   CC57 AC F0              3802 	mov	r4,b
   CC59 FD                 3803 	mov	r5,a
   CC5A E5 81              3804 	mov	a,sp
   CC5C 24 FC              3805 	add	a,#0xfc
   CC5E F5 81              3806 	mov	sp,a
                           3807 ;	../../shared/src/phy_init.c:798: reg_PWM2_COUNTER_LANE_30_0_b0 = (uint8_t)temp32;
   CC60 8A 06              3808 	mov	ar6,r2
   CC62 90 22 A4           3809 	mov	dptr,#_MCU_TIMER_CTRL_4_LANE
   CC65 EE                 3810 	mov	a,r6
   CC66 F0                 3811 	movx	@dptr,a
                           3812 ;	../../shared/src/phy_init.c:799: reg_PWM2_COUNTER_LANE_30_0_b1 = (uint8_t)(temp32 >> 8);
   CC67 8B 06              3813 	mov	ar6,r3
   CC69 90 22 A5           3814 	mov	dptr,#(_MCU_TIMER_CTRL_4_LANE + 0x0001)
   CC6C EE                 3815 	mov	a,r6
   CC6D F0                 3816 	movx	@dptr,a
                           3817 ;	../../shared/src/phy_init.c:800: reg_PWM2_COUNTER_LANE_30_0_b2 = (uint8_t)(temp32 >> 16);
   CC6E 8C 02              3818 	mov	ar2,r4
   CC70 90 22 A6           3819 	mov	dptr,#(_MCU_TIMER_CTRL_4_LANE + 0x0002)
   CC73 EA                 3820 	mov	a,r2
   CC74 F0                 3821 	movx	@dptr,a
                           3822 ;	../../shared/src/phy_init.c:803: reg_TIMER_3_EN_LANE = 0;
   CC75 90 22 74           3823 	mov	dptr,#_MCU_TIMER_CONTROL
   CC78 E0                 3824 	movx	a,@dptr
   CC79 54 F7              3825 	anl	a,#0xf7
   CC7B F0                 3826 	movx	@dptr,a
                           3827 ;	../../shared/src/phy_init.c:804: reg_TIMER3_CLK_SEL_LANE_1_0 = 0; //refclk
   CC7C 90 22 B0           3828 	mov	dptr,#_MCU_TIMER_CTRL_7_LANE
   CC7F E0                 3829 	movx	a,@dptr
   CC80 54 3F              3830 	anl	a,#0x3f
   CC82 F0                 3831 	movx	@dptr,a
                           3832 ;	../../shared/src/phy_init.c:805: reg_TIMER3_HI_CNT_LANE_15_0 = 500;
   CC83 90 22 84           3833 	mov	dptr,#_MCU_TIMER3_CONTROL
   CC86 74 F4              3834 	mov	a,#0xF4
   CC88 F0                 3835 	movx	@dptr,a
   CC89 A3                 3836 	inc	dptr
   CC8A 74 01              3837 	mov	a,#0x01
   CC8C F0                 3838 	movx	@dptr,a
                           3839 ;	../../shared/src/phy_init.c:806: reg_TIMER3_LO_CNT_LANE_15_0 = u16mul(cmx_REFCLK_FREQ_7_0, lnx_TX_TRAIN_FRAME_DET_TIMER_LANE_7_0+1);
   CC8D 90 60 2A           3840 	mov	dptr,#(_TRX_TRAIN_IF_TIMERS1_LANE + 0x0002)
   CC90 E0                 3841 	movx	a,@dptr
   CC91 FA                 3842 	mov	r2,a
   CC92 7B 00              3843 	mov	r3,#0x00
   CC94 0A                 3844 	inc	r2
   CC95 BA 00 01           3845 	cjne	r2,#0x00,00107$
   CC98 0B                 3846 	inc	r3
   CC99                    3847 00107$:
   CC99 90 E6 2F           3848 	mov	dptr,#(_CONTROL_CONFIG8 + 0x0003)
   CC9C E0                 3849 	movx	a,@dptr
   CC9D FC                 3850 	mov	r4,a
   CC9E 7D 00              3851 	mov	r5,#0x00
   CCA0 C0 02              3852 	push	ar2
   CCA2 C0 03              3853 	push	ar3
   CCA4 8C 82              3854 	mov	dpl,r4
   CCA6 8D 83              3855 	mov	dph,r5
   CCA8 78 8D              3856 	mov	r0,#_u16mul
   CCAA 79 BF              3857 	mov	r1,#(_u16mul >> 8)
   CCAC 7A 02              3858 	mov	r2,#(_u16mul >> 16)
   CCAE 12 00 B3           3859 	lcall	__sdcc_banked_call
   CCB1 AA 82              3860 	mov	r2,dpl
   CCB3 AB 83              3861 	mov	r3,dph
   CCB5 15 81              3862 	dec	sp
   CCB7 15 81              3863 	dec	sp
   CCB9 90 22 86           3864 	mov	dptr,#(_MCU_TIMER3_CONTROL + 0x0002)
   CCBC EA                 3865 	mov	a,r2
   CCBD F0                 3866 	movx	@dptr,a
   CCBE A3                 3867 	inc	dptr
   CCBF EB                 3868 	mov	a,r3
   CCC0 F0                 3869 	movx	@dptr,a
   CCC1 02 00 C5           3870 	ljmp	__sdcc_banked_ret
                           3871 	.area CSEG    (CODE)
                           3872 	.area BANK1   (CODE)
   CCC4                    3873 _refclk_tb:
   CCC4 19                 3874 	.db #0x19	; 25
   CCC5 1E                 3875 	.db #0x1E	; 30
   CCC6 28                 3876 	.db #0x28	; 40
   CCC7 32                 3877 	.db #0x32	; 50
   CCC8 3E                 3878 	.db #0x3E	; 62
   CCC9 64                 3879 	.db #0x64	; 100	d
   CCCA 7D                 3880 	.db #0x7D	; 125
   CCCB 9C                 3881 	.db #0x9C	; 156
                           3882 	.area CABS    (ABS,CODE)
