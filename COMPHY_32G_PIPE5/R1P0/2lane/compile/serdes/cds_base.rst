                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:54 2018
                              5 ;--------------------------------------------------------
                              6 	.module cds_base
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
                            979 	.globl _maxu32
                            980 	.globl _check_eye
                            981 	.globl _set_esm_voltage
                            982 	.globl _dfe_load_type
                            983 	.globl _dfe_save
                            984 	.globl _cds_save
                            985 	.globl _cds_load_f0
                            986 	.globl _set_ctle_accap
                            987 	.globl _enable_all_tap_adapt
                            988 	.globl _dfe_hardware_cont_stop
                            989 	.globl _dfe_hardware_cont_run
                            990 	.globl _set_slicer_data_sampler_adapt
                            991 	.globl _cal_half_code
                            992 	.globl _dfe_fsm
                            993 	.globl _dc_load
                            994 	.globl _set_dfe_fbmd
                            995 	.globl _set_ph_mode
                            996 ;--------------------------------------------------------
                            997 ; special function registers
                            998 ;--------------------------------------------------------
                            999 	.area RSEG    (ABS,DATA)
   0000                    1000 	.org 0x0000
                    0080   1001 _P0	=	0x0080
                    0082   1002 _DPL	=	0x0082
                    0083   1003 _DPH	=	0x0083
                    0086   1004 _WDTREL	=	0x0086
                    0087   1005 _PCON	=	0x0087
                    0088   1006 _TCON	=	0x0088
                    0089   1007 _TMOD	=	0x0089
                    008A   1008 _TL0	=	0x008a
                    008B   1009 _TL1	=	0x008b
                    008C   1010 _TH0	=	0x008c
                    008D   1011 _TH1	=	0x008d
                    008E   1012 _CKCON	=	0x008e
                    0090   1013 _P1	=	0x0090
                    0092   1014 _DPS	=	0x0092
                    0094   1015 _PSBANK	=	0x0094
                    0098   1016 _SCON	=	0x0098
                    0099   1017 _SBUF	=	0x0099
                    009A   1018 _IEN2	=	0x009a
                    00A0   1019 _P2	=	0x00a0
                    00A1   1020 _DMAS0	=	0x00a1
                    00A2   1021 _DMAS1	=	0x00a2
                    00A3   1022 _DMAS2	=	0x00a3
                    00A4   1023 _DMAT0	=	0x00a4
                    00A5   1024 _DMAT1	=	0x00a5
                    00A6   1025 _DMAT2	=	0x00a6
                    00A8   1026 _IEN0	=	0x00a8
                    00A9   1027 _IP0	=	0x00a9
                    00AA   1028 _S0RELL	=	0x00aa
                    00B0   1029 _P3	=	0x00b0
                    00B1   1030 _DMAC0	=	0x00b1
                    00B2   1031 _DMAC1	=	0x00b2
                    00B3   1032 _DMAC2	=	0x00b3
                    00B4   1033 _DMASEL	=	0x00b4
                    00B5   1034 _DMAM0	=	0x00b5
                    00B6   1035 _DMAM1	=	0x00b6
                    00B8   1036 _IEN1	=	0x00b8
                    00B9   1037 _IP1	=	0x00b9
                    00BA   1038 _S0RELH	=	0x00ba
                    00C0   1039 _IRCON	=	0x00c0
                    00C1   1040 _CCEN	=	0x00c1
                    00C8   1041 _T2CON	=	0x00c8
                    00CA   1042 _RCAP2L	=	0x00ca
                    00CB   1043 _RCAP2H	=	0x00cb
                    00CC   1044 _TL2	=	0x00cc
                    00CD   1045 _TH2	=	0x00cd
                    00D0   1046 _PSW	=	0x00d0
                    00D8   1047 _ADCON	=	0x00d8
                    00E0   1048 _ACC	=	0x00e0
                    00E8   1049 _EIE	=	0x00e8
                    00F0   1050 _B	=	0x00f0
                    00F7   1051 _SRST	=	0x00f7
                    8C8A   1052 _TMR0	=	0x8c8a
                    8D8B   1053 _TMR1	=	0x8d8b
                    CDCC   1054 _TMR2	=	0xcdcc
                    A2A1   1055 _DMASA	=	0xa2a1
                    A5A4   1056 _DMATA	=	0xa5a4
                    B2B1   1057 _DMAC	=	0xb2b1
                           1058 ;--------------------------------------------------------
                           1059 ; special function bits
                           1060 ;--------------------------------------------------------
                           1061 	.area RSEG    (ABS,DATA)
   0000                    1062 	.org 0x0000
                    0080   1063 _P0_0	=	0x0080
                    0081   1064 _P0_1	=	0x0081
                    0082   1065 _P0_2	=	0x0082
                    0083   1066 _P0_3	=	0x0083
                    0084   1067 _P0_4	=	0x0084
                    0085   1068 _P0_5	=	0x0085
                    0086   1069 _P0_6	=	0x0086
                    0087   1070 _P0_7	=	0x0087
                    0090   1071 _P1_0	=	0x0090
                    0091   1072 _P1_1	=	0x0091
                    0092   1073 _P1_2	=	0x0092
                    0093   1074 _P1_3	=	0x0093
                    0094   1075 _P1_4	=	0x0094
                    0095   1076 _P1_5	=	0x0095
                    0096   1077 _P1_6	=	0x0096
                    0097   1078 _P1_7	=	0x0097
                    00A0   1079 _P2_0	=	0x00a0
                    00A1   1080 _P2_1	=	0x00a1
                    00A2   1081 _P2_2	=	0x00a2
                    00A3   1082 _P2_3	=	0x00a3
                    00A4   1083 _P2_4	=	0x00a4
                    00A5   1084 _P2_5	=	0x00a5
                    00A6   1085 _P2_6	=	0x00a6
                    00A7   1086 _P2_7	=	0x00a7
                    00B0   1087 _P3_0	=	0x00b0
                    00B1   1088 _P3_1	=	0x00b1
                    00B2   1089 _P3_2	=	0x00b2
                    00B3   1090 _P3_3	=	0x00b3
                    00B4   1091 _P3_4	=	0x00b4
                    00B5   1092 _P3_5	=	0x00b5
                    00B6   1093 _P3_6	=	0x00b6
                    00B7   1094 _P3_7	=	0x00b7
                    0088   1095 _IT0	=	0x0088
                    0089   1096 _IE0	=	0x0089
                    008A   1097 _IT1	=	0x008a
                    008B   1098 _IE1	=	0x008b
                    008C   1099 _TR0	=	0x008c
                    008D   1100 _TF0	=	0x008d
                    008E   1101 _TR1	=	0x008e
                    008F   1102 _TF1	=	0x008f
                    00A8   1103 _EX0	=	0x00a8
                    00A9   1104 _ET0	=	0x00a9
                    00AA   1105 _EX1	=	0x00aa
                    00AB   1106 _ET1	=	0x00ab
                    00AC   1107 _ES	=	0x00ac
                    00AD   1108 _ET2	=	0x00ad
                    00AE   1109 _WDT	=	0x00ae
                    00AF   1110 _EA	=	0x00af
                    00B8   1111 _EX7	=	0x00b8
                    00B9   1112 _EX2	=	0x00b9
                    00BA   1113 _EX3	=	0x00ba
                    00BB   1114 _EX4	=	0x00bb
                    00BC   1115 _EX5	=	0x00bc
                    00BD   1116 _EX6	=	0x00bd
                    00BE   1117 _PS1	=	0x00be
                    009A   1118 _ES1	=	0x009a
                    009B   1119 _EX8	=	0x009b
                    009C   1120 _EX9	=	0x009c
                    009D   1121 _EX10	=	0x009d
                    009E   1122 _EX11	=	0x009e
                    009F   1123 _EX12	=	0x009f
                    0098   1124 _RI	=	0x0098
                    0099   1125 _TI	=	0x0099
                    00C6   1126 _TF2	=	0x00c6
                           1127 ;--------------------------------------------------------
                           1128 ; overlayable register banks
                           1129 ;--------------------------------------------------------
                           1130 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1131 	.ds 8
                           1132 ;--------------------------------------------------------
                           1133 ; internal ram data
                           1134 ;--------------------------------------------------------
                           1135 	.area DSEG    (DATA)
                           1136 ;--------------------------------------------------------
                           1137 ; overlayable items in internal ram 
                           1138 ;--------------------------------------------------------
                           1139 	.area OSEG    (OVR,DATA)
                           1140 ;--------------------------------------------------------
                           1141 ; indirectly addressable internal ram data
                           1142 ;--------------------------------------------------------
                           1143 	.area ISEG    (DATA)
                           1144 ;--------------------------------------------------------
                           1145 ; absolute internal ram data
                           1146 ;--------------------------------------------------------
                           1147 	.area IABS    (ABS,DATA)
                           1148 	.area IABS    (ABS,DATA)
                           1149 ;--------------------------------------------------------
                           1150 ; bit data
                           1151 ;--------------------------------------------------------
                           1152 	.area BSEG    (BIT)
                           1153 ;--------------------------------------------------------
                           1154 ; paged external ram data
                           1155 ;--------------------------------------------------------
                           1156 	.area PSEG    (PAG,XDATA)
                           1157 ;--------------------------------------------------------
                           1158 ; external ram data
                           1159 ;--------------------------------------------------------
                           1160 	.area XSEG    (XDATA)
                    1000   1161 _UPHY14_TRX_LANEPLL_ANAREG_TOP_128	=	0x1000
                    1004   1162 _UPHY14_TRX_LANEPLL_ANAREG_TOP_129	=	0x1004
                    1008   1163 _UPHY14_TRX_LANEPLL_ANAREG_TOP_130	=	0x1008
                    100C   1164 _UPHY14_TRX_LANEPLL_ANAREG_TOP_131	=	0x100c
                    1010   1165 _UPHY14_TRX_LANEPLL_ANAREG_TOP_132	=	0x1010
                    1014   1166 _UPHY14_TRX_LANEPLL_ANAREG_TOP_133	=	0x1014
                    1018   1167 _UPHY14_TRX_LANEPLL_ANAREG_TOP_134	=	0x1018
                    101C   1168 _UPHY14_TRX_LANEPLL_ANAREG_TOP_135	=	0x101c
                    1020   1169 _UPHY14_TRX_LANEPLL_ANAREG_TOP_136	=	0x1020
                    1024   1170 _UPHY14_TRX_LANEPLL_ANAREG_TOP_137	=	0x1024
                    1028   1171 _UPHY14_TRX_LANEPLL_ANAREG_TOP_138	=	0x1028
                    102C   1172 _UPHY14_TRX_LANEPLL_ANAREG_TOP_139	=	0x102c
                    1030   1173 _UPHY14_TRX_LANEPLL_ANAREG_TOP_140	=	0x1030
                    1034   1174 _UPHY14_TRX_LANEPLL_ANAREG_TOP_141	=	0x1034
                    1038   1175 _UPHY14_TRX_LANEPLL_ANAREG_TOP_142	=	0x1038
                    103C   1176 _UPHY14_TRX_LANEPLL_ANAREG_TOP_143	=	0x103c
                    0200   1177 _UPHY14_TRX_ANAREG_TOP_128	=	0x0200
                    0204   1178 _UPHY14_TRX_ANAREG_TOP_129	=	0x0204
                    0208   1179 _UPHY14_TRX_ANAREG_TOP_130	=	0x0208
                    020C   1180 _UPHY14_TRX_ANAREG_TOP_131	=	0x020c
                    0210   1181 _UPHY14_TRX_ANAREG_TOP_132	=	0x0210
                    0214   1182 _UPHY14_TRX_ANAREG_TOP_133	=	0x0214
                    0218   1183 _UPHY14_TRX_ANAREG_TOP_134	=	0x0218
                    021C   1184 _UPHY14_TRX_ANAREG_TOP_135	=	0x021c
                    0220   1185 _UPHY14_TRX_ANAREG_TOP_136	=	0x0220
                    0224   1186 _UPHY14_TRX_ANAREG_TOP_137	=	0x0224
                    0228   1187 _UPHY14_TRX_ANAREG_TOP_138	=	0x0228
                    022C   1188 _UPHY14_TRX_ANAREG_TOP_139	=	0x022c
                    0230   1189 _UPHY14_TRX_ANAREG_TOP_140	=	0x0230
                    0234   1190 _UPHY14_TRX_ANAREG_TOP_141	=	0x0234
                    0238   1191 _UPHY14_TRX_ANAREG_TOP_142	=	0x0238
                    023C   1192 _UPHY14_TRX_ANAREG_TOP_143	=	0x023c
                    0240   1193 _UPHY14_TRX_ANAREG_TOP_144	=	0x0240
                    0244   1194 _UPHY14_TRX_ANAREG_TOP_145	=	0x0244
                    0248   1195 _UPHY14_TRX_ANAREG_TOP_146	=	0x0248
                    024C   1196 _UPHY14_TRX_ANAREG_TOP_147	=	0x024c
                    0250   1197 _UPHY14_TRX_ANAREG_TOP_148	=	0x0250
                    0254   1198 _UPHY14_TRX_ANAREG_TOP_149	=	0x0254
                    0258   1199 _UPHY14_TRX_ANAREG_TOP_150	=	0x0258
                    025C   1200 _UPHY14_TRX_ANAREG_TOP_151	=	0x025c
                    0260   1201 _UPHY14_TRX_ANAREG_TOP_152	=	0x0260
                    0264   1202 _UPHY14_TRX_ANAREG_TOP_153	=	0x0264
                    0268   1203 _UPHY14_TRX_ANAREG_TOP_154	=	0x0268
                    026C   1204 _UPHY14_TRX_ANAREG_TOP_155	=	0x026c
                    0270   1205 _UPHY14_TRX_ANAREG_TOP_156	=	0x0270
                    0274   1206 _UPHY14_TRX_ANAREG_TOP_157	=	0x0274
                    0000   1207 _UPHY14_TRX_ANAREG_BOT_0	=	0x0000
                    0004   1208 _UPHY14_TRX_ANAREG_BOT_1	=	0x0004
                    0008   1209 _UPHY14_TRX_ANAREG_BOT_2	=	0x0008
                    000C   1210 _UPHY14_TRX_ANAREG_BOT_3	=	0x000c
                    0010   1211 _UPHY14_TRX_ANAREG_BOT_4	=	0x0010
                    0014   1212 _UPHY14_TRX_ANAREG_BOT_5	=	0x0014
                    0018   1213 _UPHY14_TRX_ANAREG_BOT_6	=	0x0018
                    001C   1214 _UPHY14_TRX_ANAREG_BOT_7	=	0x001c
                    0020   1215 _UPHY14_TRX_ANAREG_BOT_8	=	0x0020
                    0024   1216 _UPHY14_TRX_ANAREG_BOT_9	=	0x0024
                    0028   1217 _UPHY14_TRX_ANAREG_BOT_10	=	0x0028
                    002C   1218 _UPHY14_TRX_ANAREG_BOT_11	=	0x002c
                    0030   1219 _UPHY14_TRX_ANAREG_BOT_12	=	0x0030
                    0034   1220 _UPHY14_TRX_ANAREG_BOT_13	=	0x0034
                    0038   1221 _UPHY14_TRX_ANAREG_BOT_14	=	0x0038
                    003C   1222 _UPHY14_TRX_ANAREG_BOT_15	=	0x003c
                    0040   1223 _UPHY14_TRX_ANAREG_BOT_16	=	0x0040
                    0044   1224 _UPHY14_TRX_ANAREG_BOT_17	=	0x0044
                    0048   1225 _UPHY14_TRX_ANAREG_BOT_18	=	0x0048
                    004C   1226 _UPHY14_TRX_ANAREG_BOT_19	=	0x004c
                    0050   1227 _UPHY14_TRX_ANAREG_BOT_20	=	0x0050
                    0054   1228 _UPHY14_TRX_ANAREG_BOT_21	=	0x0054
                    0058   1229 _UPHY14_TRX_ANAREG_BOT_22	=	0x0058
                    005C   1230 _UPHY14_TRX_ANAREG_BOT_23	=	0x005c
                    0060   1231 _UPHY14_TRX_ANAREG_BOT_24	=	0x0060
                    0064   1232 _UPHY14_TRX_ANAREG_BOT_25	=	0x0064
                    0068   1233 _UPHY14_TRX_ANAREG_BOT_26	=	0x0068
                    006C   1234 _UPHY14_TRX_ANAREG_BOT_27	=	0x006c
                    0070   1235 _UPHY14_TRX_ANAREG_BOT_28	=	0x0070
                    0074   1236 _UPHY14_TRX_ANAREG_BOT_29	=	0x0074
                    0078   1237 _UPHY14_TRX_ANAREG_BOT_30	=	0x0078
                    007C   1238 _UPHY14_TRX_ANAREG_BOT_31	=	0x007c
                    0080   1239 _UPHY14_TRX_ANAREG_BOT_32	=	0x0080
                    0478   1240 _ANA_DFEE_REG_1E	=	0x0478
                    047C   1241 _ANA_DFEE_REG_1F	=	0x047c
                    0480   1242 _ANA_DFEE_REG_20	=	0x0480
                    0484   1243 _ANA_DFEE_REG_21	=	0x0484
                    0488   1244 _ANA_DFEE_REG_22	=	0x0488
                    048C   1245 _ANA_DFEE_REG_23	=	0x048c
                    0490   1246 _ANA_DFEE_REG_24	=	0x0490
                    0494   1247 _ANA_DFEE_REG_25	=	0x0494
                    0498   1248 _ANA_DFEE_REG_26	=	0x0498
                    049C   1249 _ANA_DFEE_REG_27	=	0x049c
                    0400   1250 _ANA_DFEE_REG_00	=	0x0400
                    0404   1251 _ANA_DFEE_REG_01	=	0x0404
                    0408   1252 _ANA_DFEE_REG_02	=	0x0408
                    040C   1253 _ANA_DFEE_REG_03	=	0x040c
                    0410   1254 _ANA_DFEE_REG_04	=	0x0410
                    0414   1255 _ANA_DFEE_REG_05	=	0x0414
                    0418   1256 _ANA_DFEE_REG_06	=	0x0418
                    041C   1257 _ANA_DFEE_REG_07	=	0x041c
                    0420   1258 _ANA_DFEE_REG_08	=	0x0420
                    0424   1259 _ANA_DFEE_REG_09	=	0x0424
                    0428   1260 _ANA_DFEE_REG_0A	=	0x0428
                    042C   1261 _ANA_DFEE_REG_0B	=	0x042c
                    0430   1262 _ANA_DFEE_REG_0C	=	0x0430
                    0434   1263 _ANA_DFEE_REG_0D	=	0x0434
                    0438   1264 _ANA_DFEE_REG_0E	=	0x0438
                    043C   1265 _ANA_DFEE_REG_0F	=	0x043c
                    0440   1266 _ANA_DFEE_REG_10	=	0x0440
                    0444   1267 _ANA_DFEE_REG_11	=	0x0444
                    0448   1268 _ANA_DFEE_REG_12	=	0x0448
                    044C   1269 _ANA_DFEE_REG_13	=	0x044c
                    0450   1270 _ANA_DFEE_REG_14	=	0x0450
                    0454   1271 _ANA_DFEE_REG_15	=	0x0454
                    0458   1272 _ANA_DFEE_REG_16	=	0x0458
                    045C   1273 _ANA_DFEE_REG_17	=	0x045c
                    0460   1274 _ANA_DFEE_REG_18	=	0x0460
                    0464   1275 _ANA_DFEE_REG_19	=	0x0464
                    0468   1276 _ANA_DFEE_REG_1A	=	0x0468
                    046C   1277 _ANA_DFEE_REG_1B	=	0x046c
                    0470   1278 _ANA_DFEE_REG_1C	=	0x0470
                    0474   1279 _ANA_DFEE_REG_1D	=	0x0474
                    0830   1280 _ANA_DFEO_REG_0C	=	0x0830
                    0834   1281 _ANA_DFEO_REG_0D	=	0x0834
                    0838   1282 _ANA_DFEO_REG_0E	=	0x0838
                    083C   1283 _ANA_DFEO_REG_0F	=	0x083c
                    0840   1284 _ANA_DFEO_REG_10	=	0x0840
                    0844   1285 _ANA_DFEO_REG_11	=	0x0844
                    0848   1286 _ANA_DFEO_REG_12	=	0x0848
                    084C   1287 _ANA_DFEO_REG_13	=	0x084c
                    0850   1288 _ANA_DFEO_REG_14	=	0x0850
                    0854   1289 _ANA_DFEO_REG_15	=	0x0854
                    0858   1290 _ANA_DFEO_REG_16	=	0x0858
                    085C   1291 _ANA_DFEO_REG_17	=	0x085c
                    0860   1292 _ANA_DFEO_REG_18	=	0x0860
                    0864   1293 _ANA_DFEO_REG_19	=	0x0864
                    0868   1294 _ANA_DFEO_REG_1A	=	0x0868
                    086C   1295 _ANA_DFEO_REG_1B	=	0x086c
                    0870   1296 _ANA_DFEO_REG_1C	=	0x0870
                    0874   1297 _ANA_DFEO_REG_1D	=	0x0874
                    0878   1298 _ANA_DFEO_REG_1E	=	0x0878
                    087C   1299 _ANA_DFEO_REG_1F	=	0x087c
                    0880   1300 _ANA_DFEO_REG_20	=	0x0880
                    0884   1301 _ANA_DFEO_REG_21	=	0x0884
                    0888   1302 _ANA_DFEO_REG_22	=	0x0888
                    088C   1303 _ANA_DFEO_REG_23	=	0x088c
                    0890   1304 _ANA_DFEO_REG_24	=	0x0890
                    0894   1305 _ANA_DFEO_REG_25	=	0x0894
                    0898   1306 _ANA_DFEO_REG_26	=	0x0898
                    089C   1307 _ANA_DFEO_REG_27	=	0x089c
                    0800   1308 _ANA_DFEO_REG_00	=	0x0800
                    0804   1309 _ANA_DFEO_REG_01	=	0x0804
                    0808   1310 _ANA_DFEO_REG_02	=	0x0808
                    080C   1311 _ANA_DFEO_REG_03	=	0x080c
                    0810   1312 _ANA_DFEO_REG_04	=	0x0810
                    0814   1313 _ANA_DFEO_REG_05	=	0x0814
                    0818   1314 _ANA_DFEO_REG_06	=	0x0818
                    081C   1315 _ANA_DFEO_REG_07	=	0x081c
                    0820   1316 _ANA_DFEO_REG_08	=	0x0820
                    0824   1317 _ANA_DFEO_REG_09	=	0x0824
                    0828   1318 _ANA_DFEO_REG_0A	=	0x0828
                    082C   1319 _ANA_DFEO_REG_0B	=	0x082c
                    8200   1320 _UPHY14_CMN_ANAREG_TOP_128	=	0x8200
                    8204   1321 _UPHY14_CMN_ANAREG_TOP_129	=	0x8204
                    8208   1322 _UPHY14_CMN_ANAREG_TOP_130	=	0x8208
                    820C   1323 _UPHY14_CMN_ANAREG_TOP_131	=	0x820c
                    8210   1324 _UPHY14_CMN_ANAREG_TOP_132	=	0x8210
                    8214   1325 _UPHY14_CMN_ANAREG_TOP_133	=	0x8214
                    8218   1326 _UPHY14_CMN_ANAREG_TOP_134	=	0x8218
                    821C   1327 _UPHY14_CMN_ANAREG_TOP_135	=	0x821c
                    8220   1328 _UPHY14_CMN_ANAREG_TOP_136	=	0x8220
                    8224   1329 _UPHY14_CMN_ANAREG_TOP_137	=	0x8224
                    8228   1330 _UPHY14_CMN_ANAREG_TOP_138	=	0x8228
                    822C   1331 _UPHY14_CMN_ANAREG_TOP_139	=	0x822c
                    8230   1332 _UPHY14_CMN_ANAREG_TOP_140	=	0x8230
                    8234   1333 _UPHY14_CMN_ANAREG_TOP_141	=	0x8234
                    8238   1334 _UPHY14_CMN_ANAREG_TOP_142	=	0x8238
                    823C   1335 _UPHY14_CMN_ANAREG_TOP_143	=	0x823c
                    8240   1336 _UPHY14_CMN_ANAREG_TOP_144	=	0x8240
                    8244   1337 _UPHY14_CMN_ANAREG_TOP_145	=	0x8244
                    8248   1338 _UPHY14_CMN_ANAREG_TOP_146	=	0x8248
                    824C   1339 _UPHY14_CMN_ANAREG_TOP_147	=	0x824c
                    8250   1340 _UPHY14_CMN_ANAREG_TOP_148	=	0x8250
                    8254   1341 _UPHY14_CMN_ANAREG_TOP_149	=	0x8254
                    8258   1342 _UPHY14_CMN_ANAREG_TOP_150	=	0x8258
                    825C   1343 _UPHY14_CMN_ANAREG_TOP_151	=	0x825c
                    8260   1344 _UPHY14_CMN_ANAREG_TOP_152	=	0x8260
                    8264   1345 _UPHY14_CMN_ANAREG_TOP_153	=	0x8264
                    8268   1346 _UPHY14_CMN_ANAREG_TOP_154	=	0x8268
                    826C   1347 _UPHY14_CMN_ANAREG_TOP_155	=	0x826c
                    8270   1348 _UPHY14_CMN_ANAREG_TOP_156	=	0x8270
                    8274   1349 _UPHY14_CMN_ANAREG_TOP_157	=	0x8274
                    8278   1350 _UPHY14_CMN_ANAREG_TOP_158	=	0x8278
                    827C   1351 _UPHY14_CMN_ANAREG_TOP_159	=	0x827c
                    8280   1352 _UPHY14_CMN_ANAREG_TOP_160	=	0x8280
                    8284   1353 _UPHY14_CMN_ANAREG_TOP_161	=	0x8284
                    8288   1354 _UPHY14_CMN_ANAREG_TOP_162	=	0x8288
                    828C   1355 _UPHY14_CMN_ANAREG_TOP_163	=	0x828c
                    8290   1356 _UPHY14_CMN_ANAREG_TOP_164	=	0x8290
                    8294   1357 _UPHY14_CMN_ANAREG_TOP_165	=	0x8294
                    8298   1358 _UPHY14_CMN_ANAREG_TOP_166	=	0x8298
                    829C   1359 _UPHY14_CMN_ANAREG_TOP_167	=	0x829c
                    82A0   1360 _UPHY14_CMN_ANAREG_TOP_168	=	0x82a0
                    82A4   1361 _UPHY14_CMN_ANAREG_TOP_169	=	0x82a4
                    82A8   1362 _UPHY14_CMN_ANAREG_TOP_170	=	0x82a8
                    82AC   1363 _UPHY14_CMN_ANAREG_TOP_171	=	0x82ac
                    82B0   1364 _UPHY14_CMN_ANAREG_TOP_172	=	0x82b0
                    82B4   1365 _UPHY14_CMN_ANAREG_TOP_173	=	0x82b4
                    82B8   1366 _UPHY14_CMN_ANAREG_TOP_174	=	0x82b8
                    82BC   1367 _UPHY14_CMN_ANAREG_TOP_175	=	0x82bc
                    82C0   1368 _UPHY14_CMN_ANAREG_TOP_176	=	0x82c0
                    82C4   1369 _UPHY14_CMN_ANAREG_TOP_177	=	0x82c4
                    82C8   1370 _UPHY14_CMN_ANAREG_TOP_178	=	0x82c8
                    82CC   1371 _UPHY14_CMN_ANAREG_TOP_179	=	0x82cc
                    82D0   1372 _UPHY14_CMN_ANAREG_TOP_180	=	0x82d0
                    82D4   1373 _UPHY14_CMN_ANAREG_TOP_181	=	0x82d4
                    82D8   1374 _UPHY14_CMN_ANAREG_TOP_182	=	0x82d8
                    82DC   1375 _UPHY14_CMN_ANAREG_TOP_183	=	0x82dc
                    82E0   1376 _UPHY14_CMN_ANAREG_TOP_184	=	0x82e0
                    82E4   1377 _UPHY14_CMN_ANAREG_TOP_185	=	0x82e4
                    82E8   1378 _UPHY14_CMN_ANAREG_TOP_186	=	0x82e8
                    82EC   1379 _UPHY14_CMN_ANAREG_TOP_187	=	0x82ec
                    82F0   1380 _UPHY14_CMN_ANAREG_TOP_188	=	0x82f0
                    82F4   1381 _UPHY14_CMN_ANAREG_TOP_189	=	0x82f4
                    82F8   1382 _UPHY14_CMN_ANAREG_TOP_190	=	0x82f8
                    82FC   1383 _UPHY14_CMN_ANAREG_TOP_191	=	0x82fc
                    8300   1384 _UPHY14_CMN_ANAREG_TOP_192	=	0x8300
                    8304   1385 _UPHY14_CMN_ANAREG_TOP_193	=	0x8304
                    8308   1386 _UPHY14_CMN_ANAREG_TOP_194	=	0x8308
                    830C   1387 _UPHY14_CMN_ANAREG_TOP_195	=	0x830c
                    8310   1388 _UPHY14_CMN_ANAREG_TOP_196	=	0x8310
                    8314   1389 _UPHY14_CMN_ANAREG_TOP_197	=	0x8314
                    8318   1390 _UPHY14_CMN_ANAREG_TOP_198	=	0x8318
                    831C   1391 _UPHY14_CMN_ANAREG_TOP_199	=	0x831c
                    8320   1392 _UPHY14_CMN_ANAREG_TOP_200	=	0x8320
                    8324   1393 _UPHY14_CMN_ANAREG_TOP_201	=	0x8324
                    8328   1394 _UPHY14_CMN_ANAREG_TOP_202	=	0x8328
                    832C   1395 _UPHY14_CMN_ANAREG_TOP_203	=	0x832c
                    8330   1396 _UPHY14_CMN_ANAREG_TOP_204	=	0x8330
                    8334   1397 _UPHY14_CMN_ANAREG_TOP_205	=	0x8334
                    8338   1398 _UPHY14_CMN_ANAREG_TOP_206	=	0x8338
                    833C   1399 _UPHY14_CMN_ANAREG_TOP_207	=	0x833c
                    8340   1400 _UPHY14_CMN_ANAREG_TOP_208	=	0x8340
                    8344   1401 _UPHY14_CMN_ANAREG_TOP_209	=	0x8344
                    8348   1402 _UPHY14_CMN_ANAREG_TOP_210	=	0x8348
                    834C   1403 _UPHY14_CMN_ANAREG_TOP_211	=	0x834c
                    8350   1404 _UPHY14_CMN_ANAREG_TOP_212	=	0x8350
                    8354   1405 _UPHY14_CMN_ANAREG_TOP_213	=	0x8354
                    8358   1406 _UPHY14_CMN_ANAREG_TOP_214	=	0x8358
                    2000   1407 _PM_CTRL_TX_LANE_REG1_LANE	=	0x2000
                    2004   1408 _PM_CTRL_TX_LANE_REG2_LANE	=	0x2004
                    2008   1409 _INPUT_TX_PIN_REG0_LANE	=	0x2008
                    200C   1410 _INPUT_TX_PIN_REG1_LANE	=	0x200c
                    2010   1411 _INPUT_TX_PIN_REG2_LANE	=	0x2010
                    2014   1412 _INPUT_TX_PIN_REG3_LANE	=	0x2014
                    2018   1413 _PM_CTRL_INTERRUPT_REG1_LANE	=	0x2018
                    201C   1414 _PM_CTRL_INTERRUPT_REG2	=	0x201c
                    2020   1415 _CLKGEN_TX_LANE_REG1_LANE	=	0x2020
                    2024   1416 _TX_SPEED_CONVERT_LANE	=	0x2024
                    2028   1417 _SPD_CTRL_INTERRUPT_REG1_LANE	=	0x2028
                    202C   1418 _SPD_CTRL_INTERRUPT_REG2	=	0x202c
                    2030   1419 _SPD_CTRL_TX_LANE_REG1_LANE	=	0x2030
                    2034   1420 _TX_SYSTEM_LANE	=	0x2034
                    203C   1421 _INPUT_TX_PIN_REG4_LANE	=	0x203c
                    2040   1422 _TX_CALIBRATION_LANE	=	0x2040
                    2044   1423 _DIG_TX_RSVD_REG0	=	0x2044
                    2048   1424 _INPUT_TX_PIN_REG5_LANE	=	0x2048
                    204C   1425 __FIELDNAME__LANE	=	0x204c
                    2050   1426 _PM_CTRL_INTERRUPT_ISR_REG1_LANE	=	0x2050
                    2054   1427 _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE	=	0x2054
                    2058   1428 _ANALOG_TX_REALTIME_REG_1	=	0x2058
                    205C   1429 _MON_TOP	=	0x205c
                    2100   1430 _PM_CTRL_RX_LANE_REG1_LANE	=	0x2100
                    2104   1431 _RX_SYSTEM_LANE	=	0x2104
                    2108   1432 _INPUT_RX_PIN_REG0_LANE	=	0x2108
                    210C   1433 _INPUT_RX_PIN_REG1_LANE	=	0x210c
                    2110   1434 _INPUT_RX_PIN_REG2_LANE	=	0x2110
                    2114   1435 _SPD_CTRL_RX_LANE_REG1_LANE	=	0x2114
                    2118   1436 _DIG_RX_RSVD_REG0	=	0x2118
                    211C   1437 _CLKGEN_RX_LANE_REG1_LANE	=	0x211c
                    2120   1438 _FRAME_SYNC_DET_REG0	=	0x2120
                    2124   1439 _FRAME_SYNC_DET_REG1	=	0x2124
                    2128   1440 _FRAME_SYNC_DET_REG2	=	0x2128
                    212C   1441 _FRAME_SYNC_DET_REG3	=	0x212c
                    2130   1442 _FRAME_SYNC_DET_REG4	=	0x2130
                    2134   1443 _FRAME_SYNC_DET_REG5	=	0x2134
                    2138   1444 _FRAME_SYNC_DET_REG6	=	0x2138
                    213C   1445 _CDR_LOCK_REG	=	0x213c
                    2140   1446 _RX_LANE_INTERRUPT	=	0x2140
                    2144   1447 _RX_LANE_INTERRUPT_MASK	=	0x2144
                    2148   1448 _RX_DATA_PATH_REG	=	0x2148
                    214C   1449 _INPUT_RX_PIN_REG3_LANE	=	0x214c
                    2150   1450 _RX_CALIBRATION_REG	=	0x2150
                    2158   1451 _RX_LANE_INTERRUPT_REG1	=	0x2158
                    2160   1452 _DTL_REG0	=	0x2160
                    2164   1453 _DTL_REG1	=	0x2164
                    2168   1454 _DTL_REG2	=	0x2168
                    216C   1455 _DTL_REG3	=	0x216c
                    2170   1456 _SQ_REG0	=	0x2170
                    4000   1457 _LANE_CFG0	=	0x4000
                    4004   1458 _LANE_STATUS0	=	0x4004
                    4008   1459 _LANE_CFG_STATUS2_LANE	=	0x4008
                    400C   1460 _LANE_CFG2_LANE	=	0x400c
                    4010   1461 _LANE_CFG4	=	0x4010
                    4014   1462 _LANE_CFG_STATUS3_LANE	=	0x4014
                    4018   1463 _LANE_DP_PIE8_CFG0_LANE	=	0x4018
                    401C   1464 _LANE_USB_DP_CFG1_LANE	=	0x401c
                    4020   1465 _LANE_USB_DP_CFG2_LANE	=	0x4020
                    4024   1466 _LANE_EQ_CFG0_LANE	=	0x4024
                    4028   1467 _LANE_EQ_CFG1_LANE	=	0x4028
                    402C   1468 _LANE_PRESET_CFG0_LANE	=	0x402c
                    4030   1469 _LANE_PRESET_CFG2_LANE	=	0x4030
                    4034   1470 _LANE_PRESET_CFG4_LANE	=	0x4034
                    4038   1471 _LANE_PRESET_CFG6_LANE	=	0x4038
                    403C   1472 _LANE_PRESET_CFG8_LANE	=	0x403c
                    4040   1473 _LANE_PRESET_CFG10_LANE	=	0x4040
                    4044   1474 _LANE_PRESET_CFG12_LANE	=	0x4044
                    4048   1475 _LANE_PRESET_CFG14_LANE	=	0x4048
                    404C   1476 _LANE_PRESET_CFG16_LANE	=	0x404c
                    4050   1477 _LANE_COEFF_MAX0_LANE	=	0x4050
                    4054   1478 _LANE_REMOTE_SET_LANE	=	0x4054
                    4058   1479 _LANE_EQ_16G_CFG0_LANE	=	0x4058
                    405C   1480 _LANE_16G_PRESET_CFG0_LANE	=	0x405c
                    4060   1481 _LANE_16G_PRESET_CFG2_LANE	=	0x4060
                    4064   1482 _LANE_16G_PRESET_CFG4_LANE	=	0x4064
                    4068   1483 _LANE_16G_PRESET_CFG6_LANE	=	0x4068
                    406C   1484 _LANE_16G_PRESET_CFG8_LANE	=	0x406c
                    4070   1485 _LANE_16G_PRESET_CFG10_LANE	=	0x4070
                    4074   1486 _LANE_16G_PRESET_CFG12_LANE	=	0x4074
                    4078   1487 _LANE_16G_PRESET_CFG14_LANE	=	0x4078
                    407C   1488 _LANE_16G_PRESET_CFG16_LANE	=	0x407c
                    4080   1489 _LANE_EQ_32G_CFG0_LANE	=	0x4080
                    4084   1490 _LANE_32G_PRESET_CFG0_LANE	=	0x4084
                    4088   1491 _LANE_32G_PRESET_CFG2_LANE	=	0x4088
                    408C   1492 _LANE_32G_PRESET_CFG4_LANE	=	0x408c
                    4090   1493 _LANE_32G_PRESET_CFG6_LANE	=	0x4090
                    4094   1494 _LANE_32G_PRESET_CFG8_LANE	=	0x4094
                    4098   1495 _LANE_32G_PRESET_CFG10_LANE	=	0x4098
                    409C   1496 _LANE_32G_PRESET_CFG12_LANE	=	0x409c
                    40A0   1497 _LANE_32G_PRESET_CFG14_LANE	=	0x40a0
                    40A4   1498 _LANE_32G_PRESET_CFG16_LANE	=	0x40a4
                    2200   1499 _MCU_CONTROL_LANE	=	0x2200
                    2204   1500 _MCU_GPIO	=	0x2204
                    2208   1501 _CACHE_DEBUG0	=	0x2208
                    220C   1502 _CACHE_DEBUG1	=	0x220c
                    2210   1503 _LANE_SYSTEM0	=	0x2210
                    2230   1504 _MCU_STATUS0_LANE	=	0x2230
                    2234   1505 _MCU_STATUS1_LANE	=	0x2234
                    2238   1506 _MCU_STATUS2_LANE	=	0x2238
                    223C   1507 _MCU_STATUS3_LANE	=	0x223c
                    2240   1508 _MCU_INT0_CONTROL	=	0x2240
                    2244   1509 _MCU_INT1_CONTROL	=	0x2244
                    2248   1510 _MCU_INT2_CONTROL	=	0x2248
                    224C   1511 _MCU_INT3_CONTROL	=	0x224c
                    2250   1512 _MCU_INT4_CONTROL	=	0x2250
                    2254   1513 _MCU_INT5_CONTROL	=	0x2254
                    2258   1514 _MCU_INT6_CONTROL	=	0x2258
                    225C   1515 _MCU_INT7_CONTROL	=	0x225c
                    2260   1516 _MCU_INT8_CONTROL	=	0x2260
                    2264   1517 _MCU_INT9_CONTROL	=	0x2264
                    2268   1518 _MCU_INT10_CONTROL	=	0x2268
                    226C   1519 _MCU_INT11_CONTROL	=	0x226c
                    2270   1520 _MCU_INT12_CONTROL	=	0x2270
                    2274   1521 _MCU_TIMER_CONTROL	=	0x2274
                    2278   1522 _MCU_TIMER0_CONTROL	=	0x2278
                    227C   1523 _MCU_TIMER1_CONTROL	=	0x227c
                    2280   1524 _MCU_TIMER2_CONTROL	=	0x2280
                    2284   1525 _MCU_TIMER3_CONTROL	=	0x2284
                    2288   1526 _MCU_IRQ_LANE	=	0x2288
                    228C   1527 _MCU_IRQ_MASK_LANE	=	0x228c
                    2290   1528 _MCU_MEM_REG1_LANE	=	0x2290
                    2294   1529 _MCU_MEM_REG2_LANE	=	0x2294
                    2298   1530 _MCU_TIMER_CTRL_1_LANE	=	0x2298
                    229C   1531 _MCU_TIMER_CTRL_2_LANE	=	0x229c
                    22A0   1532 _MCU_TIMER_CTRL_3_LANE	=	0x22a0
                    22A4   1533 _MCU_TIMER_CTRL_4_LANE	=	0x22a4
                    22A8   1534 _MCU_TIMER_CTRL_5_LANE	=	0x22a8
                    22AC   1535 _MCU_TIMER_CTRL_6_LANE	=	0x22ac
                    22B0   1536 _MCU_TIMER_CTRL_7_LANE	=	0x22b0
                    22B4   1537 _MCU_DEBUG0_LANE	=	0x22b4
                    22B8   1538 _MCU_DEBUG1_LANE	=	0x22b8
                    22BC   1539 _MCU_DEBUG2_LANE	=	0x22bc
                    22C0   1540 _MCU_DEBUG3_LANE	=	0x22c0
                    22C4   1541 _MCU_DEBUG_LANE	=	0x22c4
                    22C8   1542 _EXT_INT_CONTROL	=	0x22c8
                    22CC   1543 _ANA_IF_TRX_REG0	=	0x22cc
                    22D0   1544 _ANA_IF_DFEE_REG0	=	0x22d0
                    22D4   1545 _ANA_IF_DFEO_REG0	=	0x22d4
                    22D8   1546 _MCU_IRQ_ISR_LANE	=	0x22d8
                    22DC   1547 _MCU_WDT_LANE	=	0x22dc
                    22E0   1548 _MCU_INT_CONTROL_13	=	0x22e0
                    22E4   1549 _MCU_COMMAND0	=	0x22e4
                    22F4   1550 _MEM_ECC_ERR_ADDRESS0	=	0x22f4
                    22F8   1551 _XDATA_MEM_CHECKSUM_LANE0	=	0x22f8
                    22FC   1552 _XDATA_MEM_CHECKSUM_LANE1	=	0x22fc
                    2300   1553 _PT_CONTROL0	=	0x2300
                    2304   1554 _PT_CONTROL1	=	0x2304
                    2308   1555 _PT_USER_PATTERN0	=	0x2308
                    230C   1556 _PT_USER_PATTERN1	=	0x230c
                    2310   1557 _PT_USER_PATTERN2	=	0x2310
                    2314   1558 _PT_COUNTER0	=	0x2314
                    2318   1559 _PT_COUNTER1	=	0x2318
                    231C   1560 _PT_COUNTER2	=	0x231c
                    2400   1561 _DFE_CTRL_REG0	=	0x2400
                    2404   1562 _DFE_CTRL_REG1	=	0x2404
                    2408   1563 _DFE_CTRL_REG2	=	0x2408
                    240C   1564 _DFE_CTRL_REG3	=	0x240c
                    2410   1565 _RX_EQ_CLK_CTRL	=	0x2410
                    2414   1566 _DFE_CTRL_REG4	=	0x2414
                    2418   1567 _DFE_ANA_REG0	=	0x2418
                    241C   1568 _DFE_ANA_REG1	=	0x241c
                    2420   1569 _DFE_STEP_REG0	=	0x2420
                    2424   1570 _DFE_STEP_REG1	=	0x2424
                    2430   1571 _DFE_FEN_EVEN_REG	=	0x2430
                    2434   1572 _DFE_FEN_ODD_REG	=	0x2434
                    2438   1573 _DFE_DC_EVEN_REG8	=	0x2438
                    243C   1574 _DFE_DC_ODD_REG8	=	0x243c
                    2440   1575 _DFE_FEXT_EVEN_REG0	=	0x2440
                    2444   1576 _DFE_FEXT_EVEN_REG1	=	0x2444
                    2448   1577 _DFE_FEXT_EVEN_REG2	=	0x2448
                    244C   1578 _DFE_FEXT_EVEN_REG3	=	0x244c
                    2450   1579 _DFE_FEXT_EVEN_REG4	=	0x2450
                    2454   1580 _DFE_FEXT_EVEN_REG5	=	0x2454
                    2458   1581 _DFE_FEXT_EVEN_REG6	=	0x2458
                    245C   1582 _DFE_FEXT_EVEN_REG7	=	0x245c
                    2460   1583 _DFE_FEXT_ODD_REG0	=	0x2460
                    2464   1584 _DFE_FEXT_ODD_REG1	=	0x2464
                    2468   1585 _DFE_FEXT_ODD_REG2	=	0x2468
                    246C   1586 _DFE_FEXT_ODD_REG3	=	0x246c
                    2470   1587 _DFE_FEXT_ODD_REG4	=	0x2470
                    2474   1588 _DFE_FEXT_ODD_REG5	=	0x2474
                    2478   1589 _DFE_FEXT_ODD_REG6	=	0x2478
                    247C   1590 _DFE_FEXT_ODD_REG7	=	0x247c
                    2480   1591 _DFE_READ_EVEN_SM_REG0	=	0x2480
                    2484   1592 _DFE_READ_EVEN_SM_REG1	=	0x2484
                    2488   1593 _DFE_READ_EVEN_SM_REG2	=	0x2488
                    248C   1594 _DFE_READ_EVEN_SM_REG3	=	0x248c
                    2490   1595 _DFE_READ_EVEN_SM_REG4	=	0x2490
                    2494   1596 _DFE_READ_EVEN_SM_REG5	=	0x2494
                    2498   1597 _DFE_READ_EVEN_SM_REG6	=	0x2498
                    249C   1598 _DFE_READ_EVEN_SM_REG7	=	0x249c
                    24A0   1599 _DFE_READ_ODD_SM_REG0	=	0x24a0
                    24A4   1600 _DFE_READ_ODD_SM_REG1	=	0x24a4
                    24A8   1601 _DFE_READ_ODD_SM_REG2	=	0x24a8
                    24AC   1602 _DFE_READ_ODD_SM_REG3	=	0x24ac
                    24B0   1603 _DFE_READ_ODD_SM_REG4	=	0x24b0
                    24B4   1604 _DFE_READ_ODD_SM_REG5	=	0x24b4
                    24B8   1605 _DFE_READ_ODD_SM_REG6	=	0x24b8
                    24BC   1606 _DFE_READ_ODD_SM_REG7	=	0x24bc
                    24C0   1607 _DFE_READ_EVEN_SM_REG8	=	0x24c0
                    24C4   1608 _DFE_READ_ODD_SM_REG8	=	0x24c4
                    24D0   1609 _DFE_READ_EVEN_2C_REG0	=	0x24d0
                    24D4   1610 _DFE_READ_EVEN_2C_REG1	=	0x24d4
                    24D8   1611 _DFE_READ_EVEN_2C_REG2	=	0x24d8
                    24DC   1612 _DFE_READ_EVEN_2C_REG3	=	0x24dc
                    24E0   1613 _DFE_READ_EVEN_2C_REG4	=	0x24e0
                    24E4   1614 _DFE_READ_EVEN_2C_REG5	=	0x24e4
                    24E8   1615 _DFE_READ_EVEN_2C_REG6	=	0x24e8
                    24EC   1616 _DFE_READ_EVEN_2C_REG7	=	0x24ec
                    24F0   1617 _DFE_READ_ODD_2C_REG0	=	0x24f0
                    24F4   1618 _DFE_READ_ODD_2C_REG1	=	0x24f4
                    24F8   1619 _DFE_READ_ODD_2C_REG2	=	0x24f8
                    24FC   1620 _DFE_READ_ODD_2C_REG3	=	0x24fc
                    2500   1621 _DFE_READ_ODD_2C_REG4	=	0x2500
                    2504   1622 _DFE_READ_ODD_2C_REG5	=	0x2504
                    2508   1623 _DFE_READ_ODD_2C_REG6	=	0x2508
                    250C   1624 _DFE_READ_ODD_2C_REG7	=	0x250c
                    2510   1625 _DFE_READ_EVEN_2C_REG8	=	0x2510
                    2514   1626 _DFE_READ_ODD_2C_REG8	=	0x2514
                    2518   1627 _CAL_OFST_REG0	=	0x2518
                    251C   1628 _CAL_OFST_REG1	=	0x251c
                    2520   1629 _CAL_OFST_REG2	=	0x2520
                    2530   1630 _DFE_DCE_REG0	=	0x2530
                    2540   1631 _DFE_STATIC_LANE_REG0	=	0x2540
                    2544   1632 _DFE_STATIC_LANE_REG1	=	0x2544
                    2548   1633 _DFE_STATIC_LANE_REG3	=	0x2548
                    254C   1634 _DFE_STATIC_LANE_REG4	=	0x254c
                    2550   1635 _DFE_STATIC_LANE_REG5	=	0x2550
                    2554   1636 _DFE_STATIC_LANE_REG6	=	0x2554
                    2560   1637 _EOM_VLD_REG0	=	0x2560
                    2564   1638 _EOM_VLD_REG1	=	0x2564
                    2568   1639 _EOM_VLD_REG2	=	0x2568
                    256C   1640 _EOM_VLD_REG3	=	0x256c
                    2570   1641 _EOM_ERR_REG0	=	0x2570
                    2574   1642 _EOM_ERR_REG1	=	0x2574
                    2578   1643 _EOM_ERR_REG2	=	0x2578
                    257C   1644 _EOM_ERR_REG3	=	0x257c
                    2580   1645 _EOM_REG0	=	0x2580
                    25F0   1646 _EOM_VLD_REG4	=	0x25f0
                    25F4   1647 _LANE_MARGIN_REG0	=	0x25f4
                    6000   1648 _CAL_CTRL1_LANE	=	0x6000
                    6004   1649 _CAL_CTRL2_LANE	=	0x6004
                    6008   1650 _CAL_CTRL3_LANE	=	0x6008
                    600C   1651 _CAL_CTRL4_LANE	=	0x600c
                    6010   1652 _CAL_SAVE_DATA1_LANE	=	0x6010
                    6014   1653 _CAL_SAVE_DATA2_LANE	=	0x6014
                    6018   1654 _CAL_SAVE_DATA3_LANE	=	0x6018
                    601C   1655 _PHY_REMOTE_CTRL_COMMAND_LANE	=	0x601c
                    6020   1656 _PHY_REMOTE_CTRL_VALUE_LANE	=	0x6020
                    6024   1657 _PHY_LOCAL_VALUE_LANE	=	0x6024
                    6028   1658 _TRX_TRAIN_IF_TIMERS1_LANE	=	0x6028
                    602C   1659 _TRX_TRAIN_IF_TIMERS2_LANE	=	0x602c
                    6030   1660 _TRX_TRAIN_IF_TIMERS_ENABLE_LANE	=	0x6030
                    6034   1661 _DFE_CONTROL_0	=	0x6034
                    6038   1662 _DFE_CONTROL_1	=	0x6038
                    6040   1663 _DFE_CONTROL_2	=	0x6040
                    6044   1664 _DFE_CONTROL_3	=	0x6044
                    6048   1665 _DFE_CONTROL_4	=	0x6048
                    604C   1666 _DFE_CONTROL_5	=	0x604c
                    6050   1667 _TRAIN_CONTROL_0	=	0x6050
                    6054   1668 _TRAIN_CONTROL_1	=	0x6054
                    6058   1669 _TRAIN_CONTROL_2	=	0x6058
                    605C   1670 _RPTA_CONFIG_0	=	0x605c
                    6060   1671 _RPTA_CONFIG_1	=	0x6060
                    6064   1672 _DLL_CAL	=	0x6064
                    6068   1673 _TRAIN_PARA_0	=	0x6068
                    606C   1674 _TRAIN_PARA_1	=	0x606c
                    6070   1675 _TRAIN_PARA_2	=	0x6070
                    6074   1676 _TRAIN_PARA_3	=	0x6074
                    6078   1677 _DFE_CONTROL_6	=	0x6078
                    607C   1678 _DFE_TEST_0	=	0x607c
                    6080   1679 _DFE_TEST_1	=	0x6080
                    6084   1680 _DFE_TEST_4	=	0x6084
                    6088   1681 _DFE_TEST_5	=	0x6088
                    608C   1682 _DFE_CONTROL_7	=	0x608c
                    6090   1683 _DFE_CONTROL_8	=	0x6090
                    6094   1684 _DFE_CONTROL_9	=	0x6094
                    6098   1685 _DFE_CONTROL_10	=	0x6098
                    609C   1686 _DFE_CONTROL_11	=	0x609c
                    60A0   1687 _CDS_CTRL_REG0	=	0x60a0
                    60A4   1688 _CDS_CTRL_REG1	=	0x60a4
                    60A8   1689 _ESM_POP_P_CNT_LOW_LANE	=	0x60a8
                    60AC   1690 _ESM_ERR_P_CNT_LOW_LANE	=	0x60ac
                    60B0   1691 _ESM_ERR_POP_CNT_HIGH_LANE	=	0x60b0
                    60B4   1692 _TRAIN_CONTROL_3	=	0x60b4
                    60B8   1693 _TRAIN_CONTROL_4	=	0x60b8
                    60BC   1694 _TRAIN_CONTROL_5	=	0x60bc
                    60C0   1695 _TRAIN_CONTROL_6	=	0x60c0
                    60C4   1696 _TRAIN_CONTROL_7	=	0x60c4
                    60C8   1697 _TRAIN_CONTROL_8	=	0x60c8
                    60CC   1698 _TRAIN_CONTROL_9	=	0x60cc
                    60D0   1699 _TRAIN_CONTROL_10	=	0x60d0
                    60D4   1700 _TRAIN_CONTROL_11	=	0x60d4
                    60D8   1701 _TRAIN_CONTROL_12	=	0x60d8
                    60DC   1702 _ESM_POP_N_CNT_LOW_LANE	=	0x60dc
                    60E0   1703 _ESM_ERR_N_CNT_LOW_LANE	=	0x60e0
                    60E4   1704 _TRAIN_CONTROL_13	=	0x60e4
                    60E8   1705 _TRAIN_CONTROL_14	=	0x60e8
                    60EC   1706 _TRAIN_CONTROL_15	=	0x60ec
                    60F0   1707 _TRAIN_CONTROL_16	=	0x60f0
                    60F4   1708 _TRAIN_CONTROL_17	=	0x60f4
                    60F8   1709 _END_XDAT_LANE	=	0x60f8
                    A000   1710 _TX_CMN_REG	=	0xa000
                    A008   1711 _DTX_REG0	=	0xa008
                    A00C   1712 _DTX_REG1	=	0xa00c
                    A010   1713 _DTX_REG2	=	0xa010
                    A014   1714 _DTX_REG3	=	0xa014
                    A018   1715 _DTX_REG4	=	0xa018
                    A01C   1716 _DTX_PHY_ALIGN_REG0	=	0xa01c
                    A024   1717 _DTX_PHY_ALIGN_REG1	=	0xa024
                    A028   1718 _DTX_PHY_ALIGN_REG2	=	0xa028
                    A02C   1719 _SRIS_REG0	=	0xa02c
                    A030   1720 _SRIS_REG1	=	0xa030
                    A100   1721 _RX_CMN_0	=	0xa100
                    A110   1722 _DFE_STATIC_REG0	=	0xa110
                    A114   1723 _DFE_STATIC_REG1	=	0xa114
                    A118   1724 _DFE_STATIC_REG3	=	0xa118
                    A11C   1725 _DFE_STATIC_REG4	=	0xa11c
                    A120   1726 _DFE_STATIC_REG5	=	0xa120
                    A124   1727 _DFE_STATIC_REG6	=	0xa124
                    4200   1728 _GLOB_RST_CLK_CTRL	=	0x4200
                    4204   1729 _GLOB_CLK_SRC_LO	=	0x4204
                    4208   1730 _GLOB_CLK_SRC_HI	=	0x4208
                    420C   1731 _GLOB_MISC_CTRL	=	0x420c
                    4210   1732 _GLOB_DP_SAL_CFG	=	0x4210
                    4214   1733 _GLOB_DP_SAL_CFG1	=	0x4214
                    4218   1734 _GLOB_DP_SAL_CFG3	=	0x4218
                    421C   1735 _GLOB_DP_SAL_CFG5	=	0x421c
                    4220   1736 _GLOB_PM_CFG0	=	0x4220
                    4224   1737 _GLOB_COUNTER_CTRL	=	0x4224
                    4228   1738 _GLOB_COUNTER_HI	=	0x4228
                    422C   1739 _GLOB_PM_DP_CTRL	=	0x422c
                    4230   1740 _GLOB_DP_BAL_CFG0	=	0x4230
                    4234   1741 _GLOB_DP_BAL_CFG2	=	0x4234
                    4238   1742 _GLOB_DP_BAL_CFG4	=	0x4238
                    423C   1743 _GLOB_BIST_CTRL	=	0x423c
                    4240   1744 _GLOB_BIST_LANE_TYPE	=	0x4240
                    4244   1745 _GLOB_BIST_START	=	0x4244
                    4248   1746 _GLOB_BIST_MASK	=	0x4248
                    424C   1747 _GLOB_BIST_RESULT	=	0x424c
                    4250   1748 _GLOB_BIST_SEQR_CFG	=	0x4250
                    4254   1749 _GLOB_BIST_DATA_HI	=	0x4254
                    4258   1750 _GLOB_PIPE_REVISION	=	0x4258
                    425C   1751 _GLOB_L1_SUBSTATES_CFG	=	0x425c
                    A200   1752 _MCU_CONTROL_0	=	0xa200
                    A204   1753 _MCU_CONTROL_1	=	0xa204
                    A208   1754 _MCU_CONTROL_2	=	0xa208
                    A20C   1755 _MCU_CONTROL_3	=	0xa20c
                    A210   1756 _MCU_CONTROL_4	=	0xa210
                    A214   1757 _MCU_DEBUG0	=	0xa214
                    A218   1758 _MCU_DEBUG1	=	0xa218
                    A21C   1759 _MEMORY_CONTROL_0	=	0xa21c
                    A220   1760 _MEMORY_CONTROL_1	=	0xa220
                    A224   1761 _MEMORY_CONTROL_2	=	0xa224
                    A228   1762 _MEMORY_CONTROL_3	=	0xa228
                    A22C   1763 _MEMORY_CONTROL_4	=	0xa22c
                    A234   1764 _MCU_INFO_0	=	0xa234
                    A238   1765 _MCU_INFO_1	=	0xa238
                    A23C   1766 _MCU_INFO_2	=	0xa23c
                    A240   1767 _MCU_INFO_3	=	0xa240
                    A244   1768 _MEM_CMN_ECC_ERR_ADDRESS0	=	0xa244
                    A2E0   1769 _ANA_IF_CMN_REG1	=	0xa2e0
                    A2E4   1770 _MEM_IRQ	=	0xa2e4
                    A2E8   1771 _MEM_IRQ_MASK	=	0xa2e8
                    A2EC   1772 _ANA_IF_CMN_REG0	=	0xa2ec
                    A2F0   1773 _APB_CONTROL_REG	=	0xa2f0
                    A2F4   1774 _MEM_IRQ_CLEAR	=	0xa2f4
                    A2F8   1775 _MCU_SYNC1	=	0xa2f8
                    A2FC   1776 _MCU_SYNC2	=	0xa2fc
                    A300   1777 _TEST0	=	0xa300
                    A304   1778 _TEST1	=	0xa304
                    A308   1779 _TEST2	=	0xa308
                    A30C   1780 _TEST3	=	0xa30c
                    A310   1781 _TEST4	=	0xa310
                    A314   1782 _SYSTEM	=	0xa314
                    A318   1783 _PM_CMN_REG1	=	0xa318
                    A31C   1784 _INPUT_CMN_PIN_REG0	=	0xa31c
                    A320   1785 _INPUT_CMN_PIN_REG1	=	0xa320
                    A324   1786 _INPUT_CMN_PIN_REG2	=	0xa324
                    A328   1787 _ANA_TSEN_CONTROL	=	0xa328
                    A32C   1788 _PLLCAL_REG0	=	0xa32c
                    A330   1789 _PLLCAL_REG1	=	0xa330
                    A334   1790 _CLKGEN_CMN_REG1	=	0xa334
                    A338   1791 _SPD_CMN_REG1	=	0xa338
                    A33C   1792 _OUTPUT_CMN_PIN_REG0	=	0xa33c
                    A340   1793 _CMN_CALIBRATION	=	0xa340
                    A344   1794 __FIELDNAME_	=	0xa344
                    A348   1795 _INPUT_CMN_PIN_REG3	=	0xa348
                    A34C   1796 _PM_CMN_REG2	=	0xa34c
                    A354   1797 _TEST5	=	0xa354
                    A358   1798 _XDATA_MEM_CHECKSUM_CMN_0	=	0xa358
                    A35C   1799 _XDATA_MEM_CHECKSUM_CMN_1	=	0xa35c
                    A360   1800 _XDATA_MEM_CHECKSUM_CMN_2	=	0xa360
                    A364   1801 _MCU_SDT_CMN	=	0xa364
                    A368   1802 _CMN_CACHE_DEBUG0	=	0xa368
                    A36C   1803 _MCU_INT_ADDR	=	0xa36c
                    A370   1804 _CMN_ISR_2	=	0xa370
                    A374   1805 _CMN_ISR_MASK_2	=	0xa374
                    A378   1806 _CMN_ISR_CLEAR_2	=	0xa378
                    A37C   1807 _CMN_MCU_GPIO	=	0xa37c
                    A380   1808 _CMN_CACHE_DEBUG1	=	0xa380
                    A384   1809 _CMN_MCU_TIMER_CONTROL	=	0xa384
                    A388   1810 _CMN_MCU_TIMER_CTRL_2_LANE	=	0xa388
                    A38C   1811 _CMN_MCU_TIMER_CTRL_3_LANE	=	0xa38c
                    A390   1812 _CMN_MCU_TIMER_CTRL_4_LANE	=	0xa390
                    A394   1813 _CMN_MCU_TIMER_CTRL_5_LANE	=	0xa394
                    A398   1814 _CMN_MCU_TIMER0_CONTROL	=	0xa398
                    A39C   1815 _CMN_MCU_TIMER1_CONTROL	=	0xa39c
                    A3A0   1816 _CMN_MCU_TIMER2_CONTROL	=	0xa3a0
                    A3A4   1817 _CMN_MCU_TIMER3_CONTROL	=	0xa3a4
                    A3A8   1818 _CMN_ISR_1	=	0xa3a8
                    A3AC   1819 _CMN_ISR_MASK_1	=	0xa3ac
                    A3B0   1820 _SET_LANE_ISR	=	0xa3b0
                    A3F4   1821 _CMN_MCU_REG	=	0xa3f4
                    A3F8   1822 _CID_REG0	=	0xa3f8
                    A3FC   1823 _CID_REG1	=	0xa3fc
                    E600   1824 _FW_REV	=	0xe600
                    E604   1825 _CONTROL_CONFIG0	=	0xe604
                    E608   1826 _CONTROL_CONFIG1	=	0xe608
                    E60C   1827 _CONTROL_CONFIG2	=	0xe60c
                    E610   1828 _CONTROL_CONFIG3	=	0xe610
                    E614   1829 _CONTROL_CONFIG4	=	0xe614
                    E618   1830 _CONTROL_CONFIG5	=	0xe618
                    E61C   1831 _CONTROL_CONFIG6	=	0xe61c
                    E620   1832 _CONTROL_CONFIG7	=	0xe620
                    E624   1833 _CAL_DATA0	=	0xe624
                    E628   1834 _TRAIN_IF_CONFIG	=	0xe628
                    E62C   1835 _CONTROL_CONFIG8	=	0xe62c
                    E630   1836 _CONTROL_CONFIG9	=	0xe630
                    E634   1837 _CON_CAL_STEP_SIZE1	=	0xe634
                    E638   1838 _CON_CAL_STEP_SIZE2	=	0xe638
                    E63C   1839 _CON_CAL_STEP_SIZE3	=	0xe63c
                    E640   1840 _CON_CAL_STEP_SIZE4	=	0xe640
                    E644   1841 _CON_CAL_STEP_SIZE5	=	0xe644
                    E648   1842 _CAL_TIME_OUT_AND_DIS	=	0xe648
                    E64C   1843 _CAL_STATUS_READ	=	0xe64c
                    E650   1844 _MCU_CONFIG	=	0xe650
                    E654   1845 _CAL_DATA1	=	0xe654
                    E658   1846 _LOOP_CNTS	=	0xe658
                    E65C   1847 _MCU_CONFIG1	=	0xe65c
                    E660   1848 _TIMER_SEL1	=	0xe660
                    E664   1849 _TIMER_SEL2	=	0xe664
                    E668   1850 _TIMER_SEL3	=	0xe668
                    E66C   1851 _G_SELLV_TXCLK	=	0xe66c
                    E670   1852 _G_SELLV_TXDATA	=	0xe670
                    E674   1853 _G_SELLV_TXPRE	=	0xe674
                    E678   1854 _G_SELLV_RXEOMCLK	=	0xe678
                    E67C   1855 _G_SELLV_RXDATACLK	=	0xe67c
                    E680   1856 _G_SELLV_RXSAMPLER	=	0xe680
                    E684   1857 _SAS_PRESET0_TB	=	0xe684
                    E688   1858 _SAS_PRESET1_TB	=	0xe688
                    E68C   1859 _SAS_PRESET2_TB	=	0xe68c
                    E690   1860 _ETH_PRESET0_TB	=	0xe690
                    E694   1861 _ETH_PRESET1_TB	=	0xe694
                    E698   1862 _TX_SAVE_0	=	0xe698
                    E69C   1863 _TX_SAVE_1	=	0xe69c
                    E6A0   1864 _TX_SAVE_2	=	0xe6a0
                    E6A4   1865 _TX_SAVE_3	=	0xe6a4
                    E6A8   1866 _TX_SAVE_4	=	0xe6a8
                    E6AC   1867 _CDS_EYE_CLK_THR	=	0xe6ac
                    E6B0   1868 _SYNC_INFO	=	0xe6b0
                    E6B4   1869 _MCU_INFO_4	=	0xe6b4
                    E6B8   1870 _MCU_INFO_5	=	0xe6b8
                    E6BC   1871 _MCU_INFO_12	=	0xe6bc
                    E6C0   1872 _MCU_INFO_13	=	0xe6c0
                    E6C4   1873 _END_XDAT_CMN	=	0xe6c4
                    2600   1874 _DME_ENC_REG0	=	0x2600
                    2604   1875 _DME_ENC_REG1	=	0x2604
                    2608   1876 _DME_ENC_REG2	=	0x2608
                    260C   1877 _DME_DEC_REG0	=	0x260c
                    2610   1878 _DME_DEC_REG1	=	0x2610
                    2614   1879 _TX_TRAIN_IF_REG0	=	0x2614
                    2618   1880 _TX_TRAIN_IF_REG1	=	0x2618
                    261C   1881 _TX_TRAIN_IF_REG2	=	0x261c
                    2620   1882 _TX_TRAIN_IF_REG3	=	0x2620
                    2624   1883 _TX_TRAIN_PATTTERN_REG0	=	0x2624
                    2628   1884 _TX_TRAIN_DRIVER_REG0	=	0x2628
                    262C   1885 _TX_TRAIN_DRIVER_REG1	=	0x262c
                    2630   1886 _TX_TRAIN_DRIVER_REG2	=	0x2630
                    2634   1887 _TX_TRAIN_DEFAULT_REG0	=	0x2634
                    2638   1888 _TX_TRAIN_DEFAULT_REG1	=	0x2638
                    263C   1889 _TX_TRAIN_DEFAULT_REG2	=	0x263c
                    2640   1890 _TX_TRAIN_DEFAULT_REG3	=	0x2640
                    2644   1891 _TX_TRAIN_DEFAULT_REG4	=	0x2644
                    2648   1892 _TX_TRAIN_DEFAULT_REG5	=	0x2648
                    264C   1893 _TX_EMPH_CTRL_REG0	=	0x264c
                    2650   1894 _LINK_TRAIN_MODE0	=	0x2650
                    2654   1895 _TX_DRV_RD_OUT_REG0	=	0x2654
                    2658   1896 _TX_AMP_CTRL_REG0	=	0x2658
                    265C   1897 _TRX_TRAIN_IF_INTERRUPT_LANE	=	0x265c
                    2660   1898 _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE	=	0x2660
                    2664   1899 _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE	=	0x2664
                    2668   1900 _TX_TRAIN_IF_REG4	=	0x2668
                    266C   1901 _TX_TRAIN_IF_REG5	=	0x266c
                    2670   1902 _TX_TRAIN_IF_REG6	=	0x2670
                    2674   1903 _TX_TRAIN_IF_REG7	=	0x2674
                    2678   1904 _TX_TRAIN_CTRL_LANE	=	0x2678
                    267C   1905 _TX_TRAIN_IF_REG8	=	0x267c
                    6100   1906 _DFE_READ_EVEN_REG0	=	0x6100
                    6104   1907 _DFE_READ_EVEN_REG1	=	0x6104
                    6108   1908 _DFE_READ_EVEN_REG2	=	0x6108
                    610C   1909 _DFE_READ_EVEN_REG3	=	0x610c
                    6110   1910 _DFE_READ_EVEN_REG4	=	0x6110
                    6114   1911 _DFE_READ_EVEN_REG5	=	0x6114
                    6118   1912 _DFE_READ_EVEN_REG6	=	0x6118
                    611C   1913 _DFE_READ_EVEN_REG7	=	0x611c
                    6120   1914 _DFE_READ_ODD_REG0	=	0x6120
                    6124   1915 _DFE_READ_ODD_REG1	=	0x6124
                    6128   1916 _DFE_READ_ODD_REG2	=	0x6128
                    612C   1917 _DFE_READ_ODD_REG3	=	0x612c
                    6130   1918 _DFE_READ_ODD_REG4	=	0x6130
                    6134   1919 _DFE_READ_ODD_REG5	=	0x6134
                    6138   1920 _DFE_READ_ODD_REG6	=	0x6138
                    613C   1921 _DFE_READ_ODD_REG7	=	0x613c
                    6140   1922 _DFE_READ_EVEN_REG8	=	0x6140
                    6144   1923 _DFE_READ_ODD_REG8	=	0x6144
                    6148   1924 _DFE_READ_F0A_EVEN	=	0x6148
                    614C   1925 _DFE_READ_F0A_ODD	=	0x614c
                    6150   1926 _DFE_READ_F0B_EVEN	=	0x6150
                    6154   1927 _DFE_READ_F0B_ODD	=	0x6154
                    6158   1928 _DFE_READ_F0D_EVEN	=	0x6158
                    615C   1929 _DFE_READ_F0D_ODD	=	0x615c
                    6160   1930 _DFE_READ_F0D_LEFT_EVEN	=	0x6160
                    6164   1931 _DFE_READ_F0D_LEFT_ODD	=	0x6164
                    6168   1932 _DFE_READ_F0D_RIGHT_EVEN	=	0x6168
                    616C   1933 _DFE_READ_F0D_RIGHT_ODD	=	0x616c
                    6170   1934 _CDS_READ_MISC0	=	0x6170
                    6174   1935 _CDS_READ_MISC1	=	0x6174
                    6214   1936 _TXTRAIN_IF_REG0	=	0x6214
                    E000   1937 _lc_speedtable	=	0xe000
                    E1C0   1938 _ring_speedtable	=	0xe1c0
                    E5C0   1939 _phy_mode_cmn_table	=	0xe5c0
                    6300   1940 _max_gen	=	0x6300
                    6301   1941 _min_gen	=	0x6301
                    6304   1942 _speedtable	=	0x6304
                    65D4   1943 _phy_mode_lane_table	=	0x65d4
                    60B4   1944 _rc_save	=	0x60b4
                    60D0   1945 _txffe_save	=	0x60d0
                    60E4   1946 _phase_save	=	0x60e4
                    6030   1947 _train_gn1_index	=	0x6030
                    6031   1948 _train_g1_index	=	0x6031
                    6032   1949 _train_g0_index	=	0x6032
                    E6B0   1950 _local_tx_preset_tb	=	0xe6b0
                    E5C1   1951 _cmx_cal_lcvco_dac	=	0xe5c1
                    E5C1   1952 _cmx_cal_lcvco_dac_lsb	=	0xe5c1
                    E5C4   1953 _cmx_cal_lcvco_dac_msb	=	0xe5c4
                    E5CA   1954 _cmx_cal_lccap_msb	=	0xe5ca
                    E5C8   1955 _cmx_cal_lccap_lsb	=	0xe5c8
                    E5CC   1956 _cmx_cal_plldcc	=	0xe5cc
                    E5D0   1957 _cmx_cal_pll_speed_ring	=	0xe5d0
                    E5D4   1958 _cmx_cal_pll_sllp_dac_coarse_ring	=	0xe5d4
                    E5D8   1959 _cmx_cal_sllp_dac_fine_ring	=	0xe5d8
                    65D4   1960 _lnx_cal_txdcc_pdiv	=	0x65d4
                    65D8   1961 _lnx_cal_txdcc_pdiv_hg	=	0x65d8
                    65DA   1962 _lnx_cal_txdcc	=	0x65da
                    65DE   1963 _lnx_cal_txdcc_hg	=	0x65de
                    65E0   1964 _lnx_cal_rxdcc_dll	=	0x65e0
                    65E4   1965 _lnx_cal_rxdcc_dll_hg	=	0x65e4
                    65E6   1966 _lnx_cal_rxdcc_data	=	0x65e6
                    65F0   1967 _lnx_cal_rxdcc_data_hg	=	0x65f0
                    65F5   1968 _lnx_cal_rxdcc_eom	=	0x65f5
                    65FF   1969 _lnx_cal_rxdcc_eom_hg	=	0x65ff
                    6604   1970 _lnx_cal_dll_gmsel	=	0x6604
                    6606   1971 _lnx_cal_vdda_dll_sel	=	0x6606
                    660A   1972 _lnx_cal_dll_eom_gmsel	=	0x660a
                    660C   1973 _lnx_cal_vdda_dll_eom_sel	=	0x660c
                    6610   1974 _lnx_cal_eom_dpher	=	0x6610
                    6612   1975 _lnx_cal_align90_dummy_clk	=	0x6612
                    661A   1976 _lnx_cal_align90_dac	=	0x661a
                    6622   1977 _lnx_cal_align90_gm	=	0x6622
                    662A   1978 _lnx_cal_sellv_txdata	=	0x662a
                    6634   1979 _lnx_cal_sellv_txclk	=	0x6634
                    663E   1980 _lnx_cal_sellv_rxdataclk	=	0x663e
                    6648   1981 _lnx_cal_sellv_txpre	=	0x6648
                    6652   1982 _lnx_cal_sellv_rxsampler	=	0x6652
                    665C   1983 _lnx_cal_sellv_rxeomclk	=	0x665c
                    6666   1984 _lnx_spdoft_tx_preset_index_lane	=	0x6666
                    6490   1985 _lnx_calx_txdcc_pdiv	=	0x6490
                    6496   1986 _lnx_calx_txdcc_pdiv_hg	=	0x6496
                    6499   1987 _lnx_calx_txdcc	=	0x6499
                    649F   1988 _lnx_calx_txdcc_hg	=	0x649f
                    64A2   1989 _lnx_calx_rxdcc_dll	=	0x64a2
                    64A8   1990 _lnx_calx_rxdcc_dll_hg	=	0x64a8
                    64AB   1991 _lnx_calx_dll_gmsel	=	0x64ab
                    64AE   1992 _lnx_calx_vdda_dll_sel	=	0x64ae
                    64B4   1993 _lnx_calx_dll_eom_gmsel	=	0x64b4
                    64B7   1994 _lnx_calx_vdda_dll_eom_sel	=	0x64b7
                    64BD   1995 _lnx_calx_eom_dpher	=	0x64bd
                    64C0   1996 _lnx_calx_align90_dummy_clk	=	0x64c0
                    64CC   1997 _lnx_calx_align90_dac	=	0x64cc
                    64D8   1998 _lnx_calx_align90_gm	=	0x64d8
                    6100   1999 _cds28	=	0x6100
                    6178   2000 _dfe_sm	=	0x6178
                    61B8   2001 _dfe_sm_dc	=	0x61b8
                    61C0   2002 _dfe_sm_save	=	0x61c0
                    03FC   2003 _UPHY_ANAREG_REV_0	=	0x03fc
                    E684   2004 _tx_tb	=	0xe684
                    E698   2005 _train_save_tb	=	0xe698
                    607C   2006 _sq_thrs_ratio_tb	=	0x607c
                           2007 ;--------------------------------------------------------
                           2008 ; absolute external ram data
                           2009 ;--------------------------------------------------------
                           2010 	.area XABS    (ABS,XDATA)
                           2011 ;--------------------------------------------------------
                           2012 ; external initialized ram data
                           2013 ;--------------------------------------------------------
                           2014 	.area HOME    (CODE)
                           2015 	.area GSINIT0 (CODE)
                           2016 	.area GSINIT1 (CODE)
                           2017 	.area GSINIT2 (CODE)
                           2018 	.area GSINIT3 (CODE)
                           2019 	.area GSINIT4 (CODE)
                           2020 	.area GSINIT5 (CODE)
                           2021 	.area GSINIT  (CODE)
                           2022 	.area GSFINAL (CODE)
                           2023 	.area CSEG    (CODE)
                           2024 ;--------------------------------------------------------
                           2025 ; global & static initialisations
                           2026 ;--------------------------------------------------------
                           2027 	.area HOME    (CODE)
                           2028 	.area GSINIT  (CODE)
                           2029 	.area GSFINAL (CODE)
                           2030 	.area GSINIT  (CODE)
                           2031 ;--------------------------------------------------------
                           2032 ; Home
                           2033 ;--------------------------------------------------------
                           2034 	.area HOME    (CODE)
                           2035 	.area HOME    (CODE)
                           2036 ;--------------------------------------------------------
                           2037 ; code
                           2038 ;--------------------------------------------------------
                           2039 	.area BANK2   (CODE)
                           2040 ;------------------------------------------------------------
                           2041 ;Allocation info for local variables in function 'maxu32'
                           2042 ;------------------------------------------------------------
                           2043 ;b                         Allocated to stack - offset -7
                           2044 ;a                         Allocated to registers r2 r3 r4 r5 
                           2045 ;------------------------------------------------------------
                           2046 ;	../../shared/src/cds_base.c:35: uint32_t maxu32(uint32_t a, uint32_t b) BANKING_CTRL {
                           2047 ;	-----------------------------------------
                           2048 ;	 function maxu32
                           2049 ;	-----------------------------------------
   888E                    2050 _maxu32:
                    0002   2051 	ar2 = 0x02
                    0003   2052 	ar3 = 0x03
                    0004   2053 	ar4 = 0x04
                    0005   2054 	ar5 = 0x05
                    0006   2055 	ar6 = 0x06
                    0007   2056 	ar7 = 0x07
                    0000   2057 	ar0 = 0x00
                    0001   2058 	ar1 = 0x01
   888E C0 18              2059 	push	_bp
   8890 85 81 18           2060 	mov	_bp,sp
   8893 AA 82              2061 	mov	r2,dpl
   8895 AB 83              2062 	mov	r3,dph
   8897 AC F0              2063 	mov	r4,b
   8899 FD                 2064 	mov	r5,a
                           2065 ;	../../shared/src/cds_base.c:36: if(a>b) return a;
   889A E5 18              2066 	mov	a,_bp
   889C 24 F9              2067 	add	a,#0xf9
   889E F8                 2068 	mov	r0,a
   889F C3                 2069 	clr	c
   88A0 E6                 2070 	mov	a,@r0
   88A1 9A                 2071 	subb	a,r2
   88A2 08                 2072 	inc	r0
   88A3 E6                 2073 	mov	a,@r0
   88A4 9B                 2074 	subb	a,r3
   88A5 08                 2075 	inc	r0
   88A6 E6                 2076 	mov	a,@r0
   88A7 9C                 2077 	subb	a,r4
   88A8 08                 2078 	inc	r0
   88A9 E6                 2079 	mov	a,@r0
   88AA 9D                 2080 	subb	a,r5
   88AB 50 09              2081 	jnc	00102$
   88AD 8A 82              2082 	mov	dpl,r2
   88AF 8B 83              2083 	mov	dph,r3
   88B1 8C F0              2084 	mov	b,r4
   88B3 ED                 2085 	mov	a,r5
   88B4 80 0F              2086 	sjmp	00104$
   88B6                    2087 00102$:
                           2088 ;	../../shared/src/cds_base.c:37: else return b;
   88B6 E5 18              2089 	mov	a,_bp
   88B8 24 F9              2090 	add	a,#0xf9
   88BA F8                 2091 	mov	r0,a
   88BB 86 82              2092 	mov	dpl,@r0
   88BD 08                 2093 	inc	r0
   88BE 86 83              2094 	mov	dph,@r0
   88C0 08                 2095 	inc	r0
   88C1 86 F0              2096 	mov	b,@r0
   88C3 08                 2097 	inc	r0
   88C4 E6                 2098 	mov	a,@r0
   88C5                    2099 00104$:
   88C5 D0 18              2100 	pop	_bp
   88C7 02 00 C5           2101 	ljmp	__sdcc_banked_ret
                           2102 ;------------------------------------------------------------
                           2103 ;Allocation info for local variables in function 'check_eye'
                           2104 ;------------------------------------------------------------
                           2105 ;err_cnt                   Allocated to stack - offset 1
                           2106 ;pop_cnt                   Allocated to stack - offset 5
                           2107 ;------------------------------------------------------------
                           2108 ;	../../shared/src/cds_base.c:39: bool check_eye(void) BANKING_CTRL
                           2109 ;	-----------------------------------------
                           2110 ;	 function check_eye
                           2111 ;	-----------------------------------------
   88CA                    2112 _check_eye:
   88CA C0 18              2113 	push	_bp
   88CC E5 81              2114 	mov	a,sp
   88CE F5 18              2115 	mov	_bp,a
   88D0 24 08              2116 	add	a,#0x08
   88D2 F5 81              2117 	mov	sp,a
                           2118 ;	../../shared/src/cds_base.c:44: pop_cnt = EOM_VLD_REG0.VAL;
   88D4 90 25 60           2119 	mov	dptr,#_EOM_VLD_REG0
   88D7 E0                 2120 	movx	a,@dptr
   88D8 FA                 2121 	mov	r2,a
   88D9 A3                 2122 	inc	dptr
   88DA E0                 2123 	movx	a,@dptr
   88DB FB                 2124 	mov	r3,a
   88DC A3                 2125 	inc	dptr
   88DD E0                 2126 	movx	a,@dptr
   88DE FC                 2127 	mov	r4,a
   88DF A3                 2128 	inc	dptr
   88E0 E0                 2129 	movx	a,@dptr
   88E1 FD                 2130 	mov	r5,a
   88E2 E5 18              2131 	mov	a,_bp
   88E4 24 05              2132 	add	a,#0x05
   88E6 F8                 2133 	mov	r0,a
   88E7 A6 02              2134 	mov	@r0,ar2
   88E9 08                 2135 	inc	r0
   88EA A6 03              2136 	mov	@r0,ar3
   88EC 08                 2137 	inc	r0
   88ED A6 04              2138 	mov	@r0,ar4
   88EF 08                 2139 	inc	r0
   88F0 A6 05              2140 	mov	@r0,ar5
                           2141 ;	../../shared/src/cds_base.c:45: pop_cnt = maxu32(pop_cnt,EOM_VLD_REG1.VAL);
   88F2 90 25 64           2142 	mov	dptr,#_EOM_VLD_REG1
   88F5 E0                 2143 	movx	a,@dptr
   88F6 FE                 2144 	mov	r6,a
   88F7 A3                 2145 	inc	dptr
   88F8 E0                 2146 	movx	a,@dptr
   88F9 FF                 2147 	mov	r7,a
   88FA A3                 2148 	inc	dptr
   88FB E0                 2149 	movx	a,@dptr
   88FC FA                 2150 	mov	r2,a
   88FD A3                 2151 	inc	dptr
   88FE E0                 2152 	movx	a,@dptr
   88FF FB                 2153 	mov	r3,a
   8900 C0 06              2154 	push	ar6
   8902 C0 07              2155 	push	ar7
   8904 C0 02              2156 	push	ar2
   8906 C0 03              2157 	push	ar3
   8908 E5 18              2158 	mov	a,_bp
   890A 24 05              2159 	add	a,#0x05
   890C F8                 2160 	mov	r0,a
   890D 86 82              2161 	mov	dpl,@r0
   890F 08                 2162 	inc	r0
   8910 86 83              2163 	mov	dph,@r0
   8912 08                 2164 	inc	r0
   8913 86 F0              2165 	mov	b,@r0
   8915 08                 2166 	inc	r0
   8916 E6                 2167 	mov	a,@r0
   8917 78 8E              2168 	mov	r0,#_maxu32
   8919 79 88              2169 	mov	r1,#(_maxu32 >> 8)
   891B 7A 02              2170 	mov	r2,#(_maxu32 >> 16)
   891D 12 00 B3           2171 	lcall	__sdcc_banked_call
   8920 AA 82              2172 	mov	r2,dpl
   8922 AB 83              2173 	mov	r3,dph
   8924 AC F0              2174 	mov	r4,b
   8926 FD                 2175 	mov	r5,a
   8927 E5 81              2176 	mov	a,sp
   8929 24 FC              2177 	add	a,#0xfc
   892B F5 81              2178 	mov	sp,a
   892D E5 18              2179 	mov	a,_bp
   892F 24 05              2180 	add	a,#0x05
   8931 F8                 2181 	mov	r0,a
   8932 A6 02              2182 	mov	@r0,ar2
   8934 08                 2183 	inc	r0
   8935 A6 03              2184 	mov	@r0,ar3
   8937 08                 2185 	inc	r0
   8938 A6 04              2186 	mov	@r0,ar4
   893A 08                 2187 	inc	r0
   893B A6 05              2188 	mov	@r0,ar5
                           2189 ;	../../shared/src/cds_base.c:46: pop_cnt = maxu32(pop_cnt,EOM_VLD_REG2.VAL);
   893D 90 25 68           2190 	mov	dptr,#_EOM_VLD_REG2
   8940 E0                 2191 	movx	a,@dptr
   8941 FA                 2192 	mov	r2,a
   8942 A3                 2193 	inc	dptr
   8943 E0                 2194 	movx	a,@dptr
   8944 FB                 2195 	mov	r3,a
   8945 A3                 2196 	inc	dptr
   8946 E0                 2197 	movx	a,@dptr
   8947 FC                 2198 	mov	r4,a
   8948 A3                 2199 	inc	dptr
   8949 E0                 2200 	movx	a,@dptr
   894A FD                 2201 	mov	r5,a
   894B C0 02              2202 	push	ar2
   894D C0 03              2203 	push	ar3
   894F C0 04              2204 	push	ar4
   8951 C0 05              2205 	push	ar5
   8953 E5 18              2206 	mov	a,_bp
   8955 24 05              2207 	add	a,#0x05
   8957 F8                 2208 	mov	r0,a
   8958 86 82              2209 	mov	dpl,@r0
   895A 08                 2210 	inc	r0
   895B 86 83              2211 	mov	dph,@r0
   895D 08                 2212 	inc	r0
   895E 86 F0              2213 	mov	b,@r0
   8960 08                 2214 	inc	r0
   8961 E6                 2215 	mov	a,@r0
   8962 78 8E              2216 	mov	r0,#_maxu32
   8964 79 88              2217 	mov	r1,#(_maxu32 >> 8)
   8966 7A 02              2218 	mov	r2,#(_maxu32 >> 16)
   8968 12 00 B3           2219 	lcall	__sdcc_banked_call
   896B AA 82              2220 	mov	r2,dpl
   896D AB 83              2221 	mov	r3,dph
   896F AC F0              2222 	mov	r4,b
   8971 FD                 2223 	mov	r5,a
   8972 E5 81              2224 	mov	a,sp
   8974 24 FC              2225 	add	a,#0xfc
   8976 F5 81              2226 	mov	sp,a
   8978 E5 18              2227 	mov	a,_bp
   897A 24 05              2228 	add	a,#0x05
   897C F8                 2229 	mov	r0,a
   897D A6 02              2230 	mov	@r0,ar2
   897F 08                 2231 	inc	r0
   8980 A6 03              2232 	mov	@r0,ar3
   8982 08                 2233 	inc	r0
   8983 A6 04              2234 	mov	@r0,ar4
   8985 08                 2235 	inc	r0
   8986 A6 05              2236 	mov	@r0,ar5
                           2237 ;	../../shared/src/cds_base.c:47: pop_cnt = maxu32(pop_cnt,EOM_VLD_REG3.VAL);
   8988 90 25 6C           2238 	mov	dptr,#_EOM_VLD_REG3
   898B E0                 2239 	movx	a,@dptr
   898C FA                 2240 	mov	r2,a
   898D A3                 2241 	inc	dptr
   898E E0                 2242 	movx	a,@dptr
   898F FB                 2243 	mov	r3,a
   8990 A3                 2244 	inc	dptr
   8991 E0                 2245 	movx	a,@dptr
   8992 FC                 2246 	mov	r4,a
   8993 A3                 2247 	inc	dptr
   8994 E0                 2248 	movx	a,@dptr
   8995 FD                 2249 	mov	r5,a
   8996 C0 02              2250 	push	ar2
   8998 C0 03              2251 	push	ar3
   899A C0 04              2252 	push	ar4
   899C C0 05              2253 	push	ar5
   899E E5 18              2254 	mov	a,_bp
   89A0 24 05              2255 	add	a,#0x05
   89A2 F8                 2256 	mov	r0,a
   89A3 86 82              2257 	mov	dpl,@r0
   89A5 08                 2258 	inc	r0
   89A6 86 83              2259 	mov	dph,@r0
   89A8 08                 2260 	inc	r0
   89A9 86 F0              2261 	mov	b,@r0
   89AB 08                 2262 	inc	r0
   89AC E6                 2263 	mov	a,@r0
   89AD 78 8E              2264 	mov	r0,#_maxu32
   89AF 79 88              2265 	mov	r1,#(_maxu32 >> 8)
   89B1 7A 02              2266 	mov	r2,#(_maxu32 >> 16)
   89B3 12 00 B3           2267 	lcall	__sdcc_banked_call
   89B6 AA 82              2268 	mov	r2,dpl
   89B8 AB 83              2269 	mov	r3,dph
   89BA AC F0              2270 	mov	r4,b
   89BC FD                 2271 	mov	r5,a
   89BD E5 81              2272 	mov	a,sp
   89BF 24 FC              2273 	add	a,#0xfc
   89C1 F5 81              2274 	mov	sp,a
   89C3 E5 18              2275 	mov	a,_bp
   89C5 24 05              2276 	add	a,#0x05
   89C7 F8                 2277 	mov	r0,a
   89C8 A6 02              2278 	mov	@r0,ar2
   89CA 08                 2279 	inc	r0
   89CB A6 03              2280 	mov	@r0,ar3
   89CD 08                 2281 	inc	r0
   89CE A6 04              2282 	mov	@r0,ar4
   89D0 08                 2283 	inc	r0
   89D1 A6 05              2284 	mov	@r0,ar5
                           2285 ;	../../shared/src/cds_base.c:48: err_cnt = EOM_ERR_REG0.VAL;
   89D3 90 25 70           2286 	mov	dptr,#_EOM_ERR_REG0
   89D6 E0                 2287 	movx	a,@dptr
   89D7 FA                 2288 	mov	r2,a
   89D8 A3                 2289 	inc	dptr
   89D9 E0                 2290 	movx	a,@dptr
   89DA FB                 2291 	mov	r3,a
   89DB A3                 2292 	inc	dptr
   89DC E0                 2293 	movx	a,@dptr
   89DD FC                 2294 	mov	r4,a
   89DE A3                 2295 	inc	dptr
   89DF E0                 2296 	movx	a,@dptr
   89E0 FD                 2297 	mov	r5,a
   89E1 A8 18              2298 	mov	r0,_bp
   89E3 08                 2299 	inc	r0
   89E4 A6 02              2300 	mov	@r0,ar2
   89E6 08                 2301 	inc	r0
   89E7 A6 03              2302 	mov	@r0,ar3
   89E9 08                 2303 	inc	r0
   89EA A6 04              2304 	mov	@r0,ar4
   89EC 08                 2305 	inc	r0
   89ED A6 05              2306 	mov	@r0,ar5
                           2307 ;	../../shared/src/cds_base.c:49: err_cnt = maxu32(err_cnt,EOM_ERR_REG1.VAL);
   89EF 90 25 74           2308 	mov	dptr,#_EOM_ERR_REG1
   89F2 E0                 2309 	movx	a,@dptr
   89F3 FE                 2310 	mov	r6,a
   89F4 A3                 2311 	inc	dptr
   89F5 E0                 2312 	movx	a,@dptr
   89F6 FF                 2313 	mov	r7,a
   89F7 A3                 2314 	inc	dptr
   89F8 E0                 2315 	movx	a,@dptr
   89F9 FA                 2316 	mov	r2,a
   89FA A3                 2317 	inc	dptr
   89FB E0                 2318 	movx	a,@dptr
   89FC FB                 2319 	mov	r3,a
   89FD C0 06              2320 	push	ar6
   89FF C0 07              2321 	push	ar7
   8A01 C0 02              2322 	push	ar2
   8A03 C0 03              2323 	push	ar3
   8A05 A8 18              2324 	mov	r0,_bp
   8A07 08                 2325 	inc	r0
   8A08 86 82              2326 	mov	dpl,@r0
   8A0A 08                 2327 	inc	r0
   8A0B 86 83              2328 	mov	dph,@r0
   8A0D 08                 2329 	inc	r0
   8A0E 86 F0              2330 	mov	b,@r0
   8A10 08                 2331 	inc	r0
   8A11 E6                 2332 	mov	a,@r0
   8A12 78 8E              2333 	mov	r0,#_maxu32
   8A14 79 88              2334 	mov	r1,#(_maxu32 >> 8)
   8A16 7A 02              2335 	mov	r2,#(_maxu32 >> 16)
   8A18 12 00 B3           2336 	lcall	__sdcc_banked_call
   8A1B AA 82              2337 	mov	r2,dpl
   8A1D AB 83              2338 	mov	r3,dph
   8A1F AC F0              2339 	mov	r4,b
   8A21 FD                 2340 	mov	r5,a
   8A22 E5 81              2341 	mov	a,sp
   8A24 24 FC              2342 	add	a,#0xfc
   8A26 F5 81              2343 	mov	sp,a
   8A28 A8 18              2344 	mov	r0,_bp
   8A2A 08                 2345 	inc	r0
   8A2B A6 02              2346 	mov	@r0,ar2
   8A2D 08                 2347 	inc	r0
   8A2E A6 03              2348 	mov	@r0,ar3
   8A30 08                 2349 	inc	r0
   8A31 A6 04              2350 	mov	@r0,ar4
   8A33 08                 2351 	inc	r0
   8A34 A6 05              2352 	mov	@r0,ar5
                           2353 ;	../../shared/src/cds_base.c:50: err_cnt = maxu32(err_cnt,EOM_ERR_REG2.VAL);
   8A36 90 25 78           2354 	mov	dptr,#_EOM_ERR_REG2
   8A39 E0                 2355 	movx	a,@dptr
   8A3A FA                 2356 	mov	r2,a
   8A3B A3                 2357 	inc	dptr
   8A3C E0                 2358 	movx	a,@dptr
   8A3D FB                 2359 	mov	r3,a
   8A3E A3                 2360 	inc	dptr
   8A3F E0                 2361 	movx	a,@dptr
   8A40 FC                 2362 	mov	r4,a
   8A41 A3                 2363 	inc	dptr
   8A42 E0                 2364 	movx	a,@dptr
   8A43 FD                 2365 	mov	r5,a
   8A44 C0 02              2366 	push	ar2
   8A46 C0 03              2367 	push	ar3
   8A48 C0 04              2368 	push	ar4
   8A4A C0 05              2369 	push	ar5
   8A4C A8 18              2370 	mov	r0,_bp
   8A4E 08                 2371 	inc	r0
   8A4F 86 82              2372 	mov	dpl,@r0
   8A51 08                 2373 	inc	r0
   8A52 86 83              2374 	mov	dph,@r0
   8A54 08                 2375 	inc	r0
   8A55 86 F0              2376 	mov	b,@r0
   8A57 08                 2377 	inc	r0
   8A58 E6                 2378 	mov	a,@r0
   8A59 78 8E              2379 	mov	r0,#_maxu32
   8A5B 79 88              2380 	mov	r1,#(_maxu32 >> 8)
   8A5D 7A 02              2381 	mov	r2,#(_maxu32 >> 16)
   8A5F 12 00 B3           2382 	lcall	__sdcc_banked_call
   8A62 AA 82              2383 	mov	r2,dpl
   8A64 AB 83              2384 	mov	r3,dph
   8A66 AC F0              2385 	mov	r4,b
   8A68 FD                 2386 	mov	r5,a
   8A69 E5 81              2387 	mov	a,sp
   8A6B 24 FC              2388 	add	a,#0xfc
   8A6D F5 81              2389 	mov	sp,a
   8A6F A8 18              2390 	mov	r0,_bp
   8A71 08                 2391 	inc	r0
   8A72 A6 02              2392 	mov	@r0,ar2
   8A74 08                 2393 	inc	r0
   8A75 A6 03              2394 	mov	@r0,ar3
   8A77 08                 2395 	inc	r0
   8A78 A6 04              2396 	mov	@r0,ar4
   8A7A 08                 2397 	inc	r0
   8A7B A6 05              2398 	mov	@r0,ar5
                           2399 ;	../../shared/src/cds_base.c:51: err_cnt = maxu32(err_cnt,EOM_ERR_REG3.VAL);
   8A7D 90 25 7C           2400 	mov	dptr,#_EOM_ERR_REG3
   8A80 E0                 2401 	movx	a,@dptr
   8A81 FA                 2402 	mov	r2,a
   8A82 A3                 2403 	inc	dptr
   8A83 E0                 2404 	movx	a,@dptr
   8A84 FB                 2405 	mov	r3,a
   8A85 A3                 2406 	inc	dptr
   8A86 E0                 2407 	movx	a,@dptr
   8A87 FC                 2408 	mov	r4,a
   8A88 A3                 2409 	inc	dptr
   8A89 E0                 2410 	movx	a,@dptr
   8A8A FD                 2411 	mov	r5,a
   8A8B C0 02              2412 	push	ar2
   8A8D C0 03              2413 	push	ar3
   8A8F C0 04              2414 	push	ar4
   8A91 C0 05              2415 	push	ar5
   8A93 A8 18              2416 	mov	r0,_bp
   8A95 08                 2417 	inc	r0
   8A96 86 82              2418 	mov	dpl,@r0
   8A98 08                 2419 	inc	r0
   8A99 86 83              2420 	mov	dph,@r0
   8A9B 08                 2421 	inc	r0
   8A9C 86 F0              2422 	mov	b,@r0
   8A9E 08                 2423 	inc	r0
   8A9F E6                 2424 	mov	a,@r0
   8AA0 78 8E              2425 	mov	r0,#_maxu32
   8AA2 79 88              2426 	mov	r1,#(_maxu32 >> 8)
   8AA4 7A 02              2427 	mov	r2,#(_maxu32 >> 16)
   8AA6 12 00 B3           2428 	lcall	__sdcc_banked_call
   8AA9 AA 82              2429 	mov	r2,dpl
   8AAB AB 83              2430 	mov	r3,dph
   8AAD AC F0              2431 	mov	r4,b
   8AAF FD                 2432 	mov	r5,a
   8AB0 E5 81              2433 	mov	a,sp
   8AB2 24 FC              2434 	add	a,#0xfc
   8AB4 F5 81              2435 	mov	sp,a
   8AB6 A8 18              2436 	mov	r0,_bp
   8AB8 08                 2437 	inc	r0
   8AB9 A6 02              2438 	mov	@r0,ar2
   8ABB 08                 2439 	inc	r0
   8ABC A6 03              2440 	mov	@r0,ar3
   8ABE 08                 2441 	inc	r0
   8ABF A6 04              2442 	mov	@r0,ar4
   8AC1 08                 2443 	inc	r0
   8AC2 A6 05              2444 	mov	@r0,ar5
                           2445 ;	../../shared/src/cds_base.c:53: if(pop_cnt < (uint32_t)cmx_EYE_CHK_THRESH_VLD_7_0) return 0;
   8AC4 90 E6 AE           2446 	mov	dptr,#(_CDS_EYE_CLK_THR + 0x0002)
   8AC7 E0                 2447 	movx	a,@dptr
   8AC8 FA                 2448 	mov	r2,a
   8AC9 E4                 2449 	clr	a
   8ACA FB                 2450 	mov	r3,a
   8ACB FC                 2451 	mov	r4,a
   8ACC FD                 2452 	mov	r5,a
   8ACD E5 18              2453 	mov	a,_bp
   8ACF 24 05              2454 	add	a,#0x05
   8AD1 F8                 2455 	mov	r0,a
   8AD2 C3                 2456 	clr	c
   8AD3 E6                 2457 	mov	a,@r0
   8AD4 9A                 2458 	subb	a,r2
   8AD5 08                 2459 	inc	r0
   8AD6 E6                 2460 	mov	a,@r0
   8AD7 9B                 2461 	subb	a,r3
   8AD8 08                 2462 	inc	r0
   8AD9 E6                 2463 	mov	a,@r0
   8ADA 9C                 2464 	subb	a,r4
   8ADB 08                 2465 	inc	r0
   8ADC E6                 2466 	mov	a,@r0
   8ADD 9D                 2467 	subb	a,r5
   8ADE 50 05              2468 	jnc	00102$
   8AE0 75 82 00           2469 	mov	dpl,#0x00
   8AE3 80 25              2470 	sjmp	00105$
   8AE5                    2471 00102$:
                           2472 ;	../../shared/src/cds_base.c:54: if(err_cnt > (uint32_t)cmx_EYE_CHK_THRESH_ERR_15_0) return 0;
   8AE5 90 E6 AC           2473 	mov	dptr,#_CDS_EYE_CLK_THR
   8AE8 E0                 2474 	movx	a,@dptr
   8AE9 FA                 2475 	mov	r2,a
   8AEA A3                 2476 	inc	dptr
   8AEB E0                 2477 	movx	a,@dptr
   8AEC FB                 2478 	mov	r3,a
   8AED 7C 00              2479 	mov	r4,#0x00
   8AEF 7D 00              2480 	mov	r5,#0x00
   8AF1 A8 18              2481 	mov	r0,_bp
   8AF3 08                 2482 	inc	r0
   8AF4 C3                 2483 	clr	c
   8AF5 EA                 2484 	mov	a,r2
   8AF6 96                 2485 	subb	a,@r0
   8AF7 EB                 2486 	mov	a,r3
   8AF8 08                 2487 	inc	r0
   8AF9 96                 2488 	subb	a,@r0
   8AFA EC                 2489 	mov	a,r4
   8AFB 08                 2490 	inc	r0
   8AFC 96                 2491 	subb	a,@r0
   8AFD ED                 2492 	mov	a,r5
   8AFE 08                 2493 	inc	r0
   8AFF 96                 2494 	subb	a,@r0
   8B00 50 05              2495 	jnc	00104$
   8B02 75 82 00           2496 	mov	dpl,#0x00
   8B05 80 03              2497 	sjmp	00105$
   8B07                    2498 00104$:
                           2499 ;	../../shared/src/cds_base.c:55: return 1;
   8B07 75 82 01           2500 	mov	dpl,#0x01
   8B0A                    2501 00105$:
   8B0A 85 18 81           2502 	mov	sp,_bp
   8B0D D0 18              2503 	pop	_bp
   8B0F 02 00 C5           2504 	ljmp	__sdcc_banked_ret
                           2505 ;------------------------------------------------------------
                           2506 ;Allocation info for local variables in function 'set_esm_voltage'
                           2507 ;------------------------------------------------------------
                           2508 ;f0                        Allocated to registers r2 
                           2509 ;------------------------------------------------------------
                           2510 ;	../../shared/src/cds_base.c:58: void set_esm_voltage(uint8_t f0) BANKING_CTRL {
                           2511 ;	-----------------------------------------
                           2512 ;	 function set_esm_voltage
                           2513 ;	-----------------------------------------
   8B12                    2514 _set_esm_voltage:
   8B12 AA 82              2515 	mov	r2,dpl
                           2516 ;	../../shared/src/cds_base.c:59: reg_DFE_FEXT0_D_P_E_LANE_5_0      = f0; 
   8B14 90 24 40           2517 	mov	dptr,#_DFE_FEXT_EVEN_REG0
   8B17 EA                 2518 	mov	a,r2
   8B18 54 3F              2519 	anl	a,#0x3f
   8B1A F5 F0              2520 	mov	b,a
   8B1C E0                 2521 	movx	a,@dptr
   8B1D 54 C0              2522 	anl	a,#0xc0
   8B1F 45 F0              2523 	orl	a,b
   8B21 F0                 2524 	movx	@dptr,a
                           2525 ;	../../shared/src/cds_base.c:60: reg_DFE_FEXT0_D_N_E_LANE_5_0      = f0; 
   8B22 90 24 41           2526 	mov	dptr,#(_DFE_FEXT_EVEN_REG0 + 0x0001)
   8B25 EA                 2527 	mov	a,r2
   8B26 54 3F              2528 	anl	a,#0x3f
   8B28 F5 F0              2529 	mov	b,a
   8B2A E0                 2530 	movx	a,@dptr
   8B2B 54 C0              2531 	anl	a,#0xc0
   8B2D 45 F0              2532 	orl	a,b
   8B2F F0                 2533 	movx	@dptr,a
                           2534 ;	../../shared/src/cds_base.c:61: reg_DFE_FEXT0_S_P_E_LANE_5_0      = f0; 
   8B30 90 24 42           2535 	mov	dptr,#(_DFE_FEXT_EVEN_REG0 + 0x0002)
   8B33 EA                 2536 	mov	a,r2
   8B34 54 3F              2537 	anl	a,#0x3f
   8B36 F5 F0              2538 	mov	b,a
   8B38 E0                 2539 	movx	a,@dptr
   8B39 54 C0              2540 	anl	a,#0xc0
   8B3B 45 F0              2541 	orl	a,b
   8B3D F0                 2542 	movx	@dptr,a
                           2543 ;	../../shared/src/cds_base.c:62: reg_DFE_FEXT0_S_N_E_LANE_5_0      = f0; 
   8B3E 90 24 43           2544 	mov	dptr,#(_DFE_FEXT_EVEN_REG0 + 0x0003)
   8B41 EA                 2545 	mov	a,r2
   8B42 54 3F              2546 	anl	a,#0x3f
   8B44 F5 F0              2547 	mov	b,a
   8B46 E0                 2548 	movx	a,@dptr
   8B47 54 C0              2549 	anl	a,#0xc0
   8B49 45 F0              2550 	orl	a,b
   8B4B F0                 2551 	movx	@dptr,a
                           2552 ;	../../shared/src/cds_base.c:63: reg_DFE_FEXT0_D_P_O_LANE_5_0      = f0; 
   8B4C 90 24 60           2553 	mov	dptr,#_DFE_FEXT_ODD_REG0
   8B4F EA                 2554 	mov	a,r2
   8B50 54 3F              2555 	anl	a,#0x3f
   8B52 F5 F0              2556 	mov	b,a
   8B54 E0                 2557 	movx	a,@dptr
   8B55 54 C0              2558 	anl	a,#0xc0
   8B57 45 F0              2559 	orl	a,b
   8B59 F0                 2560 	movx	@dptr,a
                           2561 ;	../../shared/src/cds_base.c:64: reg_DFE_FEXT0_D_N_O_LANE_5_0      = f0; 
   8B5A 90 24 61           2562 	mov	dptr,#(_DFE_FEXT_ODD_REG0 + 0x0001)
   8B5D EA                 2563 	mov	a,r2
   8B5E 54 3F              2564 	anl	a,#0x3f
   8B60 F5 F0              2565 	mov	b,a
   8B62 E0                 2566 	movx	a,@dptr
   8B63 54 C0              2567 	anl	a,#0xc0
   8B65 45 F0              2568 	orl	a,b
   8B67 F0                 2569 	movx	@dptr,a
                           2570 ;	../../shared/src/cds_base.c:65: reg_DFE_FEXT0_S_P_O_LANE_5_0      = f0; 
   8B68 90 24 62           2571 	mov	dptr,#(_DFE_FEXT_ODD_REG0 + 0x0002)
   8B6B EA                 2572 	mov	a,r2
   8B6C 54 3F              2573 	anl	a,#0x3f
   8B6E F5 F0              2574 	mov	b,a
   8B70 E0                 2575 	movx	a,@dptr
   8B71 54 C0              2576 	anl	a,#0xc0
   8B73 45 F0              2577 	orl	a,b
   8B75 F0                 2578 	movx	@dptr,a
                           2579 ;	../../shared/src/cds_base.c:66: reg_DFE_FEXT0_S_N_O_LANE_5_0      = f0; 
   8B76 90 24 63           2580 	mov	dptr,#(_DFE_FEXT_ODD_REG0 + 0x0003)
   8B79 EA                 2581 	mov	a,r2
   8B7A 54 3F              2582 	anl	a,#0x3f
   8B7C F5 F0              2583 	mov	b,a
   8B7E E0                 2584 	movx	a,@dptr
   8B7F 54 C0              2585 	anl	a,#0xc0
   8B81 45 F0              2586 	orl	a,b
   8B83 F0                 2587 	movx	@dptr,a
                           2588 ;	../../shared/src/cds_base.c:67: DFE_FEN_EVEN_REG.BT.B0    = 0x0f;
                           2589 ;	../../shared/src/cds_base.c:68: DFE_FEN_EVEN_REG.BT.B0    = 0;
   8B84 90 24 30           2590 	mov	dptr,#_DFE_FEN_EVEN_REG
   8B87 74 0F              2591 	mov	a,#0x0F
   8B89 F0                 2592 	movx	@dptr,a
   8B8A E4                 2593 	clr	a
   8B8B F0                 2594 	movx	@dptr,a
                           2595 ;	../../shared/src/cds_base.c:69: DFE_FEN_ODD_REG.BT.B0     = 0x0f;
                           2596 ;	../../shared/src/cds_base.c:70: DFE_FEN_ODD_REG.BT.B0     = 0;
   8B8C 90 24 34           2597 	mov	dptr,#_DFE_FEN_ODD_REG
   8B8F 74 0F              2598 	mov	a,#0x0F
   8B91 F0                 2599 	movx	@dptr,a
   8B92 E4                 2600 	clr	a
   8B93 F0                 2601 	movx	@dptr,a
   8B94 02 00 C5           2602 	ljmp	__sdcc_banked_ret
                           2603 ;------------------------------------------------------------
                           2604 ;Allocation info for local variables in function 'dfe_load_type'
                           2605 ;------------------------------------------------------------
                           2606 ;type                      Allocated to registers r2 
                           2607 ;------------------------------------------------------------
                           2608 ;	../../shared/src/cds_base.c:90: void dfe_load_type(uint8_t type) BANKING_CTRL {
                           2609 ;	-----------------------------------------
                           2610 ;	 function dfe_load_type
                           2611 ;	-----------------------------------------
   8B97                    2612 _dfe_load_type:
   8B97 AA 82              2613 	mov	r2,dpl
                           2614 ;	../../shared/src/cds_base.c:91: switch(type)
   8B99 BA 01 02           2615 	cjne	r2,#0x01,00113$
   8B9C 80 08              2616 	sjmp	00101$
   8B9E                    2617 00113$:
   8B9E BA 02 02           2618 	cjne	r2,#0x02,00114$
   8BA1 80 5F              2619 	sjmp	00102$
   8BA3                    2620 00114$:
   8BA3 02 8C 9B           2621 	ljmp	00105$
                           2622 ;	../../shared/src/cds_base.c:103: case 1: // load from SAV
   8BA6                    2623 00101$:
                           2624 ;	../../shared/src/cds_base.c:112: memcpy((uint8_t *)&DFE_FEXT_EVEN_REG0, (uint8_t *)&dfe_sm, sizeof(Status_dfe_sm_t));
   8BA6 74 40              2625 	mov	a,#0x40
   8BA8 C0 E0              2626 	push	acc
   8BAA E4                 2627 	clr	a
   8BAB C0 E0              2628 	push	acc
   8BAD 74 78              2629 	mov	a,#_dfe_sm
   8BAF C0 E0              2630 	push	acc
   8BB1 74 61              2631 	mov	a,#(_dfe_sm >> 8)
   8BB3 C0 E0              2632 	push	acc
   8BB5 E4                 2633 	clr	a
   8BB6 C0 E0              2634 	push	acc
   8BB8 90 24 40           2635 	mov	dptr,#_DFE_FEXT_EVEN_REG0
   8BBB 75 F0 00           2636 	mov	b,#0x00
   8BBE 78 78              2637 	mov	r0,#_memcpy
   8BC0 79 C1              2638 	mov	r1,#(_memcpy >> 8)
   8BC2 7A 02              2639 	mov	r2,#(_memcpy >> 16)
   8BC4 12 00 B3           2640 	lcall	__sdcc_banked_call
   8BC7 E5 81              2641 	mov	a,sp
   8BC9 24 FB              2642 	add	a,#0xfb
   8BCB F5 81              2643 	mov	sp,a
                           2644 ;	../../shared/src/cds_base.c:183: DFE_FEN_EVEN_REG.VAL    = 0x7fffffffL;
   8BCD 90 24 30           2645 	mov	dptr,#_DFE_FEN_EVEN_REG
   8BD0 74 FF              2646 	mov	a,#0xFF
   8BD2 F0                 2647 	movx	@dptr,a
   8BD3 A3                 2648 	inc	dptr
   8BD4 F0                 2649 	movx	@dptr,a
   8BD5 A3                 2650 	inc	dptr
   8BD6 F0                 2651 	movx	@dptr,a
   8BD7 A3                 2652 	inc	dptr
   8BD8 74 7F              2653 	mov	a,#0x7F
   8BDA F0                 2654 	movx	@dptr,a
                           2655 ;	../../shared/src/cds_base.c:184: DFE_FEN_EVEN_REG.VAL    = 0;
   8BDB 90 24 30           2656 	mov	dptr,#_DFE_FEN_EVEN_REG
   8BDE E4                 2657 	clr	a
   8BDF F0                 2658 	movx	@dptr,a
   8BE0 A3                 2659 	inc	dptr
   8BE1 F0                 2660 	movx	@dptr,a
   8BE2 A3                 2661 	inc	dptr
   8BE3 F0                 2662 	movx	@dptr,a
   8BE4 A3                 2663 	inc	dptr
   8BE5 F0                 2664 	movx	@dptr,a
                           2665 ;	../../shared/src/cds_base.c:185: DFE_FEN_ODD_REG.VAL     = 0x7fffffffL;
   8BE6 90 24 34           2666 	mov	dptr,#_DFE_FEN_ODD_REG
   8BE9 74 FF              2667 	mov	a,#0xFF
   8BEB F0                 2668 	movx	@dptr,a
   8BEC A3                 2669 	inc	dptr
   8BED F0                 2670 	movx	@dptr,a
   8BEE A3                 2671 	inc	dptr
   8BEF F0                 2672 	movx	@dptr,a
   8BF0 A3                 2673 	inc	dptr
   8BF1 74 7F              2674 	mov	a,#0x7F
   8BF3 F0                 2675 	movx	@dptr,a
                           2676 ;	../../shared/src/cds_base.c:186: DFE_FEN_ODD_REG.VAL     = 0;
   8BF4 90 24 34           2677 	mov	dptr,#_DFE_FEN_ODD_REG
   8BF7 E4                 2678 	clr	a
   8BF8 F0                 2679 	movx	@dptr,a
   8BF9 A3                 2680 	inc	dptr
   8BFA F0                 2681 	movx	@dptr,a
   8BFB A3                 2682 	inc	dptr
   8BFC F0                 2683 	movx	@dptr,a
   8BFD A3                 2684 	inc	dptr
   8BFE F0                 2685 	movx	@dptr,a
                           2686 ;	../../shared/src/cds_base.c:187: break;
   8BFF 02 8C 9B           2687 	ljmp	00105$
                           2688 ;	../../shared/src/cds_base.c:188: case 2:
   8C02                    2689 00102$:
                           2690 ;	../../shared/src/cds_base.c:190: reg_DFE_FEXT0_D_P_E_LANE_5_0      = dfe_sm.f0_d_p_e; 
   8C02 90 61 78           2691 	mov	dptr,#_dfe_sm
   8C05 E0                 2692 	movx	a,@dptr
   8C06 90 24 40           2693 	mov	dptr,#_DFE_FEXT_EVEN_REG0
   8C09 54 3F              2694 	anl	a,#0x3f
   8C0B F5 F0              2695 	mov	b,a
   8C0D E0                 2696 	movx	a,@dptr
   8C0E 54 C0              2697 	anl	a,#0xc0
   8C10 45 F0              2698 	orl	a,b
   8C12 F0                 2699 	movx	@dptr,a
                           2700 ;	../../shared/src/cds_base.c:191: reg_DFE_FEXT0_D_N_E_LANE_5_0      = dfe_sm.f0_d_n_e; 
   8C13 90 61 79           2701 	mov	dptr,#(_dfe_sm + 0x0001)
   8C16 E0                 2702 	movx	a,@dptr
   8C17 90 24 41           2703 	mov	dptr,#(_DFE_FEXT_EVEN_REG0 + 0x0001)
   8C1A 54 3F              2704 	anl	a,#0x3f
   8C1C F5 F0              2705 	mov	b,a
   8C1E E0                 2706 	movx	a,@dptr
   8C1F 54 C0              2707 	anl	a,#0xc0
   8C21 45 F0              2708 	orl	a,b
   8C23 F0                 2709 	movx	@dptr,a
                           2710 ;	../../shared/src/cds_base.c:192: reg_DFE_FEXT0_S_P_E_LANE_5_0      = dfe_sm.f0_s_p_e; 
   8C24 90 61 7A           2711 	mov	dptr,#(_dfe_sm + 0x0002)
   8C27 E0                 2712 	movx	a,@dptr
   8C28 90 24 42           2713 	mov	dptr,#(_DFE_FEXT_EVEN_REG0 + 0x0002)
   8C2B 54 3F              2714 	anl	a,#0x3f
   8C2D F5 F0              2715 	mov	b,a
   8C2F E0                 2716 	movx	a,@dptr
   8C30 54 C0              2717 	anl	a,#0xc0
   8C32 45 F0              2718 	orl	a,b
   8C34 F0                 2719 	movx	@dptr,a
                           2720 ;	../../shared/src/cds_base.c:193: reg_DFE_FEXT0_S_N_E_LANE_5_0      = dfe_sm.f0_s_n_e; 
   8C35 90 61 7B           2721 	mov	dptr,#(_dfe_sm + 0x0003)
   8C38 E0                 2722 	movx	a,@dptr
   8C39 90 24 43           2723 	mov	dptr,#(_DFE_FEXT_EVEN_REG0 + 0x0003)
   8C3C 54 3F              2724 	anl	a,#0x3f
   8C3E F5 F0              2725 	mov	b,a
   8C40 E0                 2726 	movx	a,@dptr
   8C41 54 C0              2727 	anl	a,#0xc0
   8C43 45 F0              2728 	orl	a,b
   8C45 F0                 2729 	movx	@dptr,a
                           2730 ;	../../shared/src/cds_base.c:194: reg_DFE_FEXT0_D_P_O_LANE_5_0      = dfe_sm.f0_d_p_o; 
   8C46 90 61 98           2731 	mov	dptr,#(_dfe_sm + 0x0020)
   8C49 E0                 2732 	movx	a,@dptr
   8C4A 90 24 60           2733 	mov	dptr,#_DFE_FEXT_ODD_REG0
   8C4D 54 3F              2734 	anl	a,#0x3f
   8C4F F5 F0              2735 	mov	b,a
   8C51 E0                 2736 	movx	a,@dptr
   8C52 54 C0              2737 	anl	a,#0xc0
   8C54 45 F0              2738 	orl	a,b
   8C56 F0                 2739 	movx	@dptr,a
                           2740 ;	../../shared/src/cds_base.c:195: reg_DFE_FEXT0_D_N_O_LANE_5_0      = dfe_sm.f0_d_n_o; 
   8C57 90 61 99           2741 	mov	dptr,#(_dfe_sm + 0x0021)
   8C5A E0                 2742 	movx	a,@dptr
   8C5B 90 24 61           2743 	mov	dptr,#(_DFE_FEXT_ODD_REG0 + 0x0001)
   8C5E 54 3F              2744 	anl	a,#0x3f
   8C60 F5 F0              2745 	mov	b,a
   8C62 E0                 2746 	movx	a,@dptr
   8C63 54 C0              2747 	anl	a,#0xc0
   8C65 45 F0              2748 	orl	a,b
   8C67 F0                 2749 	movx	@dptr,a
                           2750 ;	../../shared/src/cds_base.c:196: reg_DFE_FEXT0_S_P_O_LANE_5_0      = dfe_sm.f0_s_p_o; 
   8C68 90 61 9A           2751 	mov	dptr,#(_dfe_sm + 0x0022)
   8C6B E0                 2752 	movx	a,@dptr
   8C6C 90 24 62           2753 	mov	dptr,#(_DFE_FEXT_ODD_REG0 + 0x0002)
   8C6F 54 3F              2754 	anl	a,#0x3f
   8C71 F5 F0              2755 	mov	b,a
   8C73 E0                 2756 	movx	a,@dptr
   8C74 54 C0              2757 	anl	a,#0xc0
   8C76 45 F0              2758 	orl	a,b
   8C78 F0                 2759 	movx	@dptr,a
                           2760 ;	../../shared/src/cds_base.c:197: reg_DFE_FEXT0_S_N_O_LANE_5_0      = dfe_sm.f0_s_n_o; 
   8C79 90 61 9B           2761 	mov	dptr,#(_dfe_sm + 0x0023)
   8C7C E0                 2762 	movx	a,@dptr
   8C7D FA                 2763 	mov	r2,a
   8C7E 90 24 63           2764 	mov	dptr,#(_DFE_FEXT_ODD_REG0 + 0x0003)
   8C81 54 3F              2765 	anl	a,#0x3f
   8C83 F5 F0              2766 	mov	b,a
   8C85 E0                 2767 	movx	a,@dptr
   8C86 54 C0              2768 	anl	a,#0xc0
   8C88 45 F0              2769 	orl	a,b
   8C8A F0                 2770 	movx	@dptr,a
                           2771 ;	../../shared/src/cds_base.c:198: DFE_FEN_EVEN_REG.BT.B0    = 0x0f;
                           2772 ;	../../shared/src/cds_base.c:199: DFE_FEN_EVEN_REG.BT.B0    = 0;
   8C8B 90 24 30           2773 	mov	dptr,#_DFE_FEN_EVEN_REG
   8C8E 74 0F              2774 	mov	a,#0x0F
   8C90 F0                 2775 	movx	@dptr,a
   8C91 E4                 2776 	clr	a
   8C92 F0                 2777 	movx	@dptr,a
                           2778 ;	../../shared/src/cds_base.c:200: DFE_FEN_ODD_REG.BT.B0     = 0x0f;
                           2779 ;	../../shared/src/cds_base.c:201: DFE_FEN_ODD_REG.BT.B0     = 0;
   8C93 90 24 34           2780 	mov	dptr,#_DFE_FEN_ODD_REG
   8C96 74 0F              2781 	mov	a,#0x0F
   8C98 F0                 2782 	movx	@dptr,a
   8C99 E4                 2783 	clr	a
   8C9A F0                 2784 	movx	@dptr,a
                           2785 ;	../../shared/src/cds_base.c:205: while(!reg_DFE_UPDATED_LANE);
   8C9B                    2786 00105$:
   8C9B 90 24 0B           2787 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0003)
   8C9E E0                 2788 	movx	a,@dptr
   8C9F 30 E5 F9           2789 	jnb	acc.5,00105$
   8CA2 02 00 C5           2790 	ljmp	__sdcc_banked_ret
                           2791 ;------------------------------------------------------------
                           2792 ;Allocation info for local variables in function 'dfe_save'
                           2793 ;------------------------------------------------------------
                           2794 ;------------------------------------------------------------
                           2795 ;	../../shared/src/cds_base.c:215: void dfe_save() BANKING_CTRL {
                           2796 ;	-----------------------------------------
                           2797 ;	 function dfe_save
                           2798 ;	-----------------------------------------
   8CA5                    2799 _dfe_save:
                           2800 ;	../../shared/src/cds_base.c:216: memcpy((uint8_t *)&dfe_sm, (uint8_t *)&DFE_READ_EVEN_SM_REG0, sizeof(Status_dfe_sm_t));
   8CA5 74 40              2801 	mov	a,#0x40
   8CA7 C0 E0              2802 	push	acc
   8CA9 E4                 2803 	clr	a
   8CAA C0 E0              2804 	push	acc
   8CAC 74 80              2805 	mov	a,#_DFE_READ_EVEN_SM_REG0
   8CAE C0 E0              2806 	push	acc
   8CB0 74 24              2807 	mov	a,#(_DFE_READ_EVEN_SM_REG0 >> 8)
   8CB2 C0 E0              2808 	push	acc
   8CB4 E4                 2809 	clr	a
   8CB5 C0 E0              2810 	push	acc
   8CB7 90 61 78           2811 	mov	dptr,#_dfe_sm
   8CBA 75 F0 00           2812 	mov	b,#0x00
   8CBD 78 78              2813 	mov	r0,#_memcpy
   8CBF 79 C1              2814 	mov	r1,#(_memcpy >> 8)
   8CC1 7A 02              2815 	mov	r2,#(_memcpy >> 16)
   8CC3 12 00 B3           2816 	lcall	__sdcc_banked_call
   8CC6 E5 81              2817 	mov	a,sp
   8CC8 24 FB              2818 	add	a,#0xfb
   8CCA F5 81              2819 	mov	sp,a
   8CCC 02 00 C5           2820 	ljmp	__sdcc_banked_ret
                           2821 ;------------------------------------------------------------
                           2822 ;Allocation info for local variables in function 'cds_save'
                           2823 ;------------------------------------------------------------
                           2824 ;type                      Allocated to registers r2 
                           2825 ;------------------------------------------------------------
                           2826 ;	../../shared/src/cds_base.c:232: void cds_save(uint8_t type) BANKING_CTRL {
                           2827 ;	-----------------------------------------
                           2828 ;	 function cds_save
                           2829 ;	-----------------------------------------
   8CCF                    2830 _cds_save:
   8CCF AA 82              2831 	mov	r2,dpl
                           2832 ;	../../shared/src/cds_base.c:233: switch(type)
   8CD1 BA 00 02           2833 	cjne	r2,#0x00,00122$
   8CD4 80 27              2834 	sjmp	00101$
   8CD6                    2835 00122$:
   8CD6 BA 01 03           2836 	cjne	r2,#0x01,00123$
   8CD9 02 8D 53           2837 	ljmp	00102$
   8CDC                    2838 00123$:
   8CDC BA 02 03           2839 	cjne	r2,#0x02,00124$
   8CDF 02 8D 97           2840 	ljmp	00103$
   8CE2                    2841 00124$:
   8CE2 BA 03 03           2842 	cjne	r2,#0x03,00125$
   8CE5 02 8D DB           2843 	ljmp	00104$
   8CE8                    2844 00125$:
   8CE8 BA 04 03           2845 	cjne	r2,#0x04,00126$
   8CEB 02 8E 1F           2846 	ljmp	00105$
   8CEE                    2847 00126$:
   8CEE BA 10 03           2848 	cjne	r2,#0x10,00127$
   8CF1 02 8E 63           2849 	ljmp	00106$
   8CF4                    2850 00127$:
   8CF4 BA 12 03           2851 	cjne	r2,#0x12,00128$
   8CF7 02 8E 8D           2852 	ljmp	00107$
   8CFA                    2853 00128$:
   8CFA 02 8F 66           2854 	ljmp	00110$
                           2855 ;	../../shared/src/cds_base.c:235: case Savf0a:
   8CFD                    2856 00101$:
                           2857 ;	../../shared/src/cds_base.c:236: cds28.f0a.d_p_e = reg_DFE_F0_D_P_E_2C_LANE_7_0;
   8CFD 90 24 D0           2858 	mov	dptr,#_DFE_READ_EVEN_2C_REG0
   8D00 E0                 2859 	movx	a,@dptr
   8D01 90 61 48           2860 	mov	dptr,#(_cds28 + 0x0048)
   8D04 F0                 2861 	movx	@dptr,a
                           2862 ;	../../shared/src/cds_base.c:237: cds28.f0a.d_n_e = reg_DFE_F0_D_N_E_2C_LANE_7_0;
   8D05 90 24 D1           2863 	mov	dptr,#(_DFE_READ_EVEN_2C_REG0 + 0x0001)
   8D08 E0                 2864 	movx	a,@dptr
   8D09 90 61 49           2865 	mov	dptr,#(_cds28 + 0x0049)
   8D0C F0                 2866 	movx	@dptr,a
                           2867 ;	../../shared/src/cds_base.c:238: cds28.f0a.s_p_e = reg_DFE_F0_S_P_E_2C_LANE_7_0;
   8D0D 90 24 D2           2868 	mov	dptr,#(_DFE_READ_EVEN_2C_REG0 + 0x0002)
   8D10 E0                 2869 	movx	a,@dptr
   8D11 90 61 4A           2870 	mov	dptr,#(_cds28 + 0x004a)
   8D14 F0                 2871 	movx	@dptr,a
                           2872 ;	../../shared/src/cds_base.c:239: cds28.f0a.s_n_e = reg_DFE_F0_S_N_E_2C_LANE_7_0;
   8D15 90 24 D3           2873 	mov	dptr,#(_DFE_READ_EVEN_2C_REG0 + 0x0003)
   8D18 E0                 2874 	movx	a,@dptr
   8D19 90 61 4B           2875 	mov	dptr,#(_cds28 + 0x004b)
   8D1C F0                 2876 	movx	@dptr,a
                           2877 ;	../../shared/src/cds_base.c:240: cds28.f0a.d_p_o = reg_DFE_F0_D_P_O_2C_LANE_7_0;
   8D1D 90 24 F0           2878 	mov	dptr,#_DFE_READ_ODD_2C_REG0
   8D20 E0                 2879 	movx	a,@dptr
   8D21 90 61 4C           2880 	mov	dptr,#(_cds28 + 0x004c)
   8D24 F0                 2881 	movx	@dptr,a
                           2882 ;	../../shared/src/cds_base.c:241: cds28.f0a.d_n_o = reg_DFE_F0_D_N_O_2C_LANE_7_0;
   8D25 90 24 F1           2883 	mov	dptr,#(_DFE_READ_ODD_2C_REG0 + 0x0001)
   8D28 E0                 2884 	movx	a,@dptr
   8D29 90 61 4D           2885 	mov	dptr,#(_cds28 + 0x004d)
   8D2C F0                 2886 	movx	@dptr,a
                           2887 ;	../../shared/src/cds_base.c:242: cds28.f0a.s_p_o = reg_DFE_F0_S_P_O_2C_LANE_7_0;
   8D2D 90 24 F2           2888 	mov	dptr,#(_DFE_READ_ODD_2C_REG0 + 0x0002)
   8D30 E0                 2889 	movx	a,@dptr
   8D31 90 61 4E           2890 	mov	dptr,#(_cds28 + 0x004e)
   8D34 F0                 2891 	movx	@dptr,a
                           2892 ;	../../shared/src/cds_base.c:243: cds28.f0a.s_n_o = reg_DFE_F0_S_N_O_2C_LANE_7_0;
   8D35 90 24 F3           2893 	mov	dptr,#(_DFE_READ_ODD_2C_REG0 + 0x0003)
   8D38 E0                 2894 	movx	a,@dptr
   8D39 FA                 2895 	mov	r2,a
   8D3A 90 61 4F           2896 	mov	dptr,#(_cds28 + 0x004f)
   8D3D F0                 2897 	movx	@dptr,a
                           2898 ;	../../shared/src/cds_base.c:244: cds28.f0a_saturate =  reg_DFE_SATUR_STATUS_LANE ? 1 : 0;
   8D3E 90 24 0B           2899 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0003)
   8D41 E0                 2900 	movx	a,@dptr
   8D42 30 E2 04           2901 	jnb	acc.2,00112$
   8D45 7A 01              2902 	mov	r2,#0x01
   8D47 80 02              2903 	sjmp	00113$
   8D49                    2904 00112$:
   8D49 7A 00              2905 	mov	r2,#0x00
   8D4B                    2906 00113$:
   8D4B 90 61 71           2907 	mov	dptr,#(_cds28 + 0x0071)
   8D4E EA                 2908 	mov	a,r2
   8D4F F0                 2909 	movx	@dptr,a
                           2910 ;	../../shared/src/cds_base.c:245: break;    
   8D50 02 8F 66           2911 	ljmp	00110$
                           2912 ;	../../shared/src/cds_base.c:246: case Savf0b:
   8D53                    2913 00102$:
                           2914 ;	../../shared/src/cds_base.c:247: cds28.f0b.d_p_e = reg_DFE_F0_D_P_E_2C_LANE_7_0;
   8D53 90 24 D0           2915 	mov	dptr,#_DFE_READ_EVEN_2C_REG0
   8D56 E0                 2916 	movx	a,@dptr
   8D57 90 61 50           2917 	mov	dptr,#(_cds28 + 0x0050)
   8D5A F0                 2918 	movx	@dptr,a
                           2919 ;	../../shared/src/cds_base.c:248: cds28.f0b.d_n_e = reg_DFE_F0_D_N_E_2C_LANE_7_0;
   8D5B 90 24 D1           2920 	mov	dptr,#(_DFE_READ_EVEN_2C_REG0 + 0x0001)
   8D5E E0                 2921 	movx	a,@dptr
   8D5F 90 61 51           2922 	mov	dptr,#(_cds28 + 0x0051)
   8D62 F0                 2923 	movx	@dptr,a
                           2924 ;	../../shared/src/cds_base.c:249: cds28.f0b.s_p_e = reg_DFE_F0_S_P_E_2C_LANE_7_0;
   8D63 90 24 D2           2925 	mov	dptr,#(_DFE_READ_EVEN_2C_REG0 + 0x0002)
   8D66 E0                 2926 	movx	a,@dptr
   8D67 90 61 52           2927 	mov	dptr,#(_cds28 + 0x0052)
   8D6A F0                 2928 	movx	@dptr,a
                           2929 ;	../../shared/src/cds_base.c:250: cds28.f0b.s_n_e = reg_DFE_F0_S_N_E_2C_LANE_7_0;
   8D6B 90 24 D3           2930 	mov	dptr,#(_DFE_READ_EVEN_2C_REG0 + 0x0003)
   8D6E E0                 2931 	movx	a,@dptr
   8D6F 90 61 53           2932 	mov	dptr,#(_cds28 + 0x0053)
   8D72 F0                 2933 	movx	@dptr,a
                           2934 ;	../../shared/src/cds_base.c:251: cds28.f0b.d_p_o = reg_DFE_F0_D_P_O_2C_LANE_7_0;
   8D73 90 24 F0           2935 	mov	dptr,#_DFE_READ_ODD_2C_REG0
   8D76 E0                 2936 	movx	a,@dptr
   8D77 90 61 54           2937 	mov	dptr,#(_cds28 + 0x0054)
   8D7A F0                 2938 	movx	@dptr,a
                           2939 ;	../../shared/src/cds_base.c:252: cds28.f0b.d_n_o = reg_DFE_F0_D_N_O_2C_LANE_7_0;
   8D7B 90 24 F1           2940 	mov	dptr,#(_DFE_READ_ODD_2C_REG0 + 0x0001)
   8D7E E0                 2941 	movx	a,@dptr
   8D7F 90 61 55           2942 	mov	dptr,#(_cds28 + 0x0055)
   8D82 F0                 2943 	movx	@dptr,a
                           2944 ;	../../shared/src/cds_base.c:253: cds28.f0b.s_p_o = reg_DFE_F0_S_P_O_2C_LANE_7_0;
   8D83 90 24 F2           2945 	mov	dptr,#(_DFE_READ_ODD_2C_REG0 + 0x0002)
   8D86 E0                 2946 	movx	a,@dptr
   8D87 90 61 56           2947 	mov	dptr,#(_cds28 + 0x0056)
   8D8A F0                 2948 	movx	@dptr,a
                           2949 ;	../../shared/src/cds_base.c:254: cds28.f0b.s_n_o = reg_DFE_F0_S_N_O_2C_LANE_7_0;
   8D8B 90 24 F3           2950 	mov	dptr,#(_DFE_READ_ODD_2C_REG0 + 0x0003)
   8D8E E0                 2951 	movx	a,@dptr
   8D8F FA                 2952 	mov	r2,a
   8D90 90 61 57           2953 	mov	dptr,#(_cds28 + 0x0057)
   8D93 F0                 2954 	movx	@dptr,a
                           2955 ;	../../shared/src/cds_base.c:255: break;
   8D94 02 8F 66           2956 	ljmp	00110$
                           2957 ;	../../shared/src/cds_base.c:256: case Savf0d:
   8D97                    2958 00103$:
                           2959 ;	../../shared/src/cds_base.c:257: cds28.f0d.d_p_e = reg_DFE_F0_D_P_E_2C_LANE_7_0;
   8D97 90 24 D0           2960 	mov	dptr,#_DFE_READ_EVEN_2C_REG0
   8D9A E0                 2961 	movx	a,@dptr
   8D9B 90 61 58           2962 	mov	dptr,#(_cds28 + 0x0058)
   8D9E F0                 2963 	movx	@dptr,a
                           2964 ;	../../shared/src/cds_base.c:258: cds28.f0d.d_n_e = reg_DFE_F0_D_N_E_2C_LANE_7_0;
   8D9F 90 24 D1           2965 	mov	dptr,#(_DFE_READ_EVEN_2C_REG0 + 0x0001)
   8DA2 E0                 2966 	movx	a,@dptr
   8DA3 90 61 59           2967 	mov	dptr,#(_cds28 + 0x0059)
   8DA6 F0                 2968 	movx	@dptr,a
                           2969 ;	../../shared/src/cds_base.c:259: cds28.f0d.s_p_e = reg_DFE_F0_S_P_E_2C_LANE_7_0;
   8DA7 90 24 D2           2970 	mov	dptr,#(_DFE_READ_EVEN_2C_REG0 + 0x0002)
   8DAA E0                 2971 	movx	a,@dptr
   8DAB 90 61 5A           2972 	mov	dptr,#(_cds28 + 0x005a)
   8DAE F0                 2973 	movx	@dptr,a
                           2974 ;	../../shared/src/cds_base.c:260: cds28.f0d.s_n_e = reg_DFE_F0_S_N_E_2C_LANE_7_0;
   8DAF 90 24 D3           2975 	mov	dptr,#(_DFE_READ_EVEN_2C_REG0 + 0x0003)
   8DB2 E0                 2976 	movx	a,@dptr
   8DB3 90 61 5B           2977 	mov	dptr,#(_cds28 + 0x005b)
   8DB6 F0                 2978 	movx	@dptr,a
                           2979 ;	../../shared/src/cds_base.c:261: cds28.f0d.d_p_o = reg_DFE_F0_D_P_O_2C_LANE_7_0;
   8DB7 90 24 F0           2980 	mov	dptr,#_DFE_READ_ODD_2C_REG0
   8DBA E0                 2981 	movx	a,@dptr
   8DBB 90 61 5C           2982 	mov	dptr,#(_cds28 + 0x005c)
   8DBE F0                 2983 	movx	@dptr,a
                           2984 ;	../../shared/src/cds_base.c:262: cds28.f0d.d_n_o = reg_DFE_F0_D_N_O_2C_LANE_7_0;
   8DBF 90 24 F1           2985 	mov	dptr,#(_DFE_READ_ODD_2C_REG0 + 0x0001)
   8DC2 E0                 2986 	movx	a,@dptr
   8DC3 90 61 5D           2987 	mov	dptr,#(_cds28 + 0x005d)
   8DC6 F0                 2988 	movx	@dptr,a
                           2989 ;	../../shared/src/cds_base.c:263: cds28.f0d.s_p_o = reg_DFE_F0_S_P_O_2C_LANE_7_0;
   8DC7 90 24 F2           2990 	mov	dptr,#(_DFE_READ_ODD_2C_REG0 + 0x0002)
   8DCA E0                 2991 	movx	a,@dptr
   8DCB 90 61 5E           2992 	mov	dptr,#(_cds28 + 0x005e)
   8DCE F0                 2993 	movx	@dptr,a
                           2994 ;	../../shared/src/cds_base.c:264: cds28.f0d.s_n_o = reg_DFE_F0_S_N_O_2C_LANE_7_0;
   8DCF 90 24 F3           2995 	mov	dptr,#(_DFE_READ_ODD_2C_REG0 + 0x0003)
   8DD2 E0                 2996 	movx	a,@dptr
   8DD3 FA                 2997 	mov	r2,a
   8DD4 90 61 5F           2998 	mov	dptr,#(_cds28 + 0x005f)
   8DD7 F0                 2999 	movx	@dptr,a
                           3000 ;	../../shared/src/cds_base.c:268: break;
   8DD8 02 8F 66           3001 	ljmp	00110$
                           3002 ;	../../shared/src/cds_base.c:269: case Savf0d_l:
   8DDB                    3003 00104$:
                           3004 ;	../../shared/src/cds_base.c:270: cds28.f0d_left.d_p_e = reg_DFE_F0_D_P_E_2C_LANE_7_0;
   8DDB 90 24 D0           3005 	mov	dptr,#_DFE_READ_EVEN_2C_REG0
   8DDE E0                 3006 	movx	a,@dptr
   8DDF 90 61 60           3007 	mov	dptr,#(_cds28 + 0x0060)
   8DE2 F0                 3008 	movx	@dptr,a
                           3009 ;	../../shared/src/cds_base.c:271: cds28.f0d_left.d_n_e = reg_DFE_F0_D_N_E_2C_LANE_7_0;
   8DE3 90 24 D1           3010 	mov	dptr,#(_DFE_READ_EVEN_2C_REG0 + 0x0001)
   8DE6 E0                 3011 	movx	a,@dptr
   8DE7 90 61 61           3012 	mov	dptr,#(_cds28 + 0x0061)
   8DEA F0                 3013 	movx	@dptr,a
                           3014 ;	../../shared/src/cds_base.c:272: cds28.f0d_left.s_p_e = reg_DFE_F0_S_P_E_2C_LANE_7_0;
   8DEB 90 24 D2           3015 	mov	dptr,#(_DFE_READ_EVEN_2C_REG0 + 0x0002)
   8DEE E0                 3016 	movx	a,@dptr
   8DEF 90 61 62           3017 	mov	dptr,#(_cds28 + 0x0062)
   8DF2 F0                 3018 	movx	@dptr,a
                           3019 ;	../../shared/src/cds_base.c:273: cds28.f0d_left.s_n_e = reg_DFE_F0_S_N_E_2C_LANE_7_0;
   8DF3 90 24 D3           3020 	mov	dptr,#(_DFE_READ_EVEN_2C_REG0 + 0x0003)
   8DF6 E0                 3021 	movx	a,@dptr
   8DF7 90 61 63           3022 	mov	dptr,#(_cds28 + 0x0063)
   8DFA F0                 3023 	movx	@dptr,a
                           3024 ;	../../shared/src/cds_base.c:274: cds28.f0d_left.d_p_o = reg_DFE_F0_D_P_O_2C_LANE_7_0;
   8DFB 90 24 F0           3025 	mov	dptr,#_DFE_READ_ODD_2C_REG0
   8DFE E0                 3026 	movx	a,@dptr
   8DFF 90 61 64           3027 	mov	dptr,#(_cds28 + 0x0064)
   8E02 F0                 3028 	movx	@dptr,a
                           3029 ;	../../shared/src/cds_base.c:275: cds28.f0d_left.d_n_o = reg_DFE_F0_D_N_O_2C_LANE_7_0;
   8E03 90 24 F1           3030 	mov	dptr,#(_DFE_READ_ODD_2C_REG0 + 0x0001)
   8E06 E0                 3031 	movx	a,@dptr
   8E07 90 61 65           3032 	mov	dptr,#(_cds28 + 0x0065)
   8E0A F0                 3033 	movx	@dptr,a
                           3034 ;	../../shared/src/cds_base.c:276: cds28.f0d_left.s_p_o = reg_DFE_F0_S_P_O_2C_LANE_7_0;
   8E0B 90 24 F2           3035 	mov	dptr,#(_DFE_READ_ODD_2C_REG0 + 0x0002)
   8E0E E0                 3036 	movx	a,@dptr
   8E0F 90 61 66           3037 	mov	dptr,#(_cds28 + 0x0066)
   8E12 F0                 3038 	movx	@dptr,a
                           3039 ;	../../shared/src/cds_base.c:277: cds28.f0d_left.s_n_o = reg_DFE_F0_S_N_O_2C_LANE_7_0;
   8E13 90 24 F3           3040 	mov	dptr,#(_DFE_READ_ODD_2C_REG0 + 0x0003)
   8E16 E0                 3041 	movx	a,@dptr
   8E17 FA                 3042 	mov	r2,a
   8E18 90 61 67           3043 	mov	dptr,#(_cds28 + 0x0067)
   8E1B F0                 3044 	movx	@dptr,a
                           3045 ;	../../shared/src/cds_base.c:281: break;
   8E1C 02 8F 66           3046 	ljmp	00110$
                           3047 ;	../../shared/src/cds_base.c:282: case Savf0d_r:
   8E1F                    3048 00105$:
                           3049 ;	../../shared/src/cds_base.c:283: cds28.f0d_right.d_p_e = reg_DFE_F0_D_P_E_2C_LANE_7_0;
   8E1F 90 24 D0           3050 	mov	dptr,#_DFE_READ_EVEN_2C_REG0
   8E22 E0                 3051 	movx	a,@dptr
   8E23 90 61 68           3052 	mov	dptr,#(_cds28 + 0x0068)
   8E26 F0                 3053 	movx	@dptr,a
                           3054 ;	../../shared/src/cds_base.c:284: cds28.f0d_right.d_n_e = reg_DFE_F0_D_N_E_2C_LANE_7_0;
   8E27 90 24 D1           3055 	mov	dptr,#(_DFE_READ_EVEN_2C_REG0 + 0x0001)
   8E2A E0                 3056 	movx	a,@dptr
   8E2B 90 61 69           3057 	mov	dptr,#(_cds28 + 0x0069)
   8E2E F0                 3058 	movx	@dptr,a
                           3059 ;	../../shared/src/cds_base.c:285: cds28.f0d_right.s_p_e = reg_DFE_F0_S_P_E_2C_LANE_7_0;
   8E2F 90 24 D2           3060 	mov	dptr,#(_DFE_READ_EVEN_2C_REG0 + 0x0002)
   8E32 E0                 3061 	movx	a,@dptr
   8E33 90 61 6A           3062 	mov	dptr,#(_cds28 + 0x006a)
   8E36 F0                 3063 	movx	@dptr,a
                           3064 ;	../../shared/src/cds_base.c:286: cds28.f0d_right.s_n_e = reg_DFE_F0_S_N_E_2C_LANE_7_0;
   8E37 90 24 D3           3065 	mov	dptr,#(_DFE_READ_EVEN_2C_REG0 + 0x0003)
   8E3A E0                 3066 	movx	a,@dptr
   8E3B 90 61 6B           3067 	mov	dptr,#(_cds28 + 0x006b)
   8E3E F0                 3068 	movx	@dptr,a
                           3069 ;	../../shared/src/cds_base.c:287: cds28.f0d_right.d_p_o = reg_DFE_F0_D_P_O_2C_LANE_7_0;
   8E3F 90 24 F0           3070 	mov	dptr,#_DFE_READ_ODD_2C_REG0
   8E42 E0                 3071 	movx	a,@dptr
   8E43 90 61 6C           3072 	mov	dptr,#(_cds28 + 0x006c)
   8E46 F0                 3073 	movx	@dptr,a
                           3074 ;	../../shared/src/cds_base.c:288: cds28.f0d_right.d_n_o = reg_DFE_F0_D_N_O_2C_LANE_7_0;
   8E47 90 24 F1           3075 	mov	dptr,#(_DFE_READ_ODD_2C_REG0 + 0x0001)
   8E4A E0                 3076 	movx	a,@dptr
   8E4B 90 61 6D           3077 	mov	dptr,#(_cds28 + 0x006d)
   8E4E F0                 3078 	movx	@dptr,a
                           3079 ;	../../shared/src/cds_base.c:289: cds28.f0d_right.s_p_o = reg_DFE_F0_S_P_O_2C_LANE_7_0;
   8E4F 90 24 F2           3080 	mov	dptr,#(_DFE_READ_ODD_2C_REG0 + 0x0002)
   8E52 E0                 3081 	movx	a,@dptr
   8E53 90 61 6E           3082 	mov	dptr,#(_cds28 + 0x006e)
   8E56 F0                 3083 	movx	@dptr,a
                           3084 ;	../../shared/src/cds_base.c:290: cds28.f0d_right.s_n_o = reg_DFE_F0_S_N_O_2C_LANE_7_0;
   8E57 90 24 F3           3085 	mov	dptr,#(_DFE_READ_ODD_2C_REG0 + 0x0003)
   8E5A E0                 3086 	movx	a,@dptr
   8E5B FA                 3087 	mov	r2,a
   8E5C 90 61 6F           3088 	mov	dptr,#(_cds28 + 0x006f)
   8E5F F0                 3089 	movx	@dptr,a
                           3090 ;	../../shared/src/cds_base.c:294: break;
   8E60 02 8F 66           3091 	ljmp	00110$
                           3092 ;	../../shared/src/cds_base.c:295: case Savdfe:
   8E63                    3093 00106$:
                           3094 ;	../../shared/src/cds_base.c:305: memcpy((uint8_t *)&(cds28.dfe_2c), (uint8_t *)&DFE_READ_EVEN_2C_REG0, sizeof(Status_dfe_2c_t));
   8E63 74 40              3095 	mov	a,#0x40
   8E65 C0 E0              3096 	push	acc
   8E67 E4                 3097 	clr	a
   8E68 C0 E0              3098 	push	acc
   8E6A 74 D0              3099 	mov	a,#_DFE_READ_EVEN_2C_REG0
   8E6C C0 E0              3100 	push	acc
   8E6E 74 24              3101 	mov	a,#(_DFE_READ_EVEN_2C_REG0 >> 8)
   8E70 C0 E0              3102 	push	acc
   8E72 E4                 3103 	clr	a
   8E73 C0 E0              3104 	push	acc
   8E75 90 61 00           3105 	mov	dptr,#_cds28
   8E78 75 F0 00           3106 	mov	b,#0x00
   8E7B 78 78              3107 	mov	r0,#_memcpy
   8E7D 79 C1              3108 	mov	r1,#(_memcpy >> 8)
   8E7F 7A 02              3109 	mov	r2,#(_memcpy >> 16)
   8E81 12 00 B3           3110 	lcall	__sdcc_banked_call
   8E84 E5 81              3111 	mov	a,sp
   8E86 24 FB              3112 	add	a,#0xfb
   8E88 F5 81              3113 	mov	sp,a
                           3114 ;	../../shared/src/cds_base.c:364: break;
   8E8A 02 8F 66           3115 	ljmp	00110$
                           3116 ;	../../shared/src/cds_base.c:365: case Savdc:
   8E8D                    3117 00107$:
                           3118 ;	../../shared/src/cds_base.c:366: dfe_sm_dc.dc_d_p_e = reg_DFE_DC_D_P_E_SM_LANE_6_0;
   8E8D 90 24 C0           3119 	mov	dptr,#_DFE_READ_EVEN_SM_REG8
   8E90 E0                 3120 	movx	a,@dptr
   8E91 54 7F              3121 	anl	a,#0x7f
   8E93 90 61 B8           3122 	mov	dptr,#_dfe_sm_dc
   8E96 54 7F              3123 	anl	a,#0x7f
   8E98 F5 F0              3124 	mov	b,a
   8E9A E0                 3125 	movx	a,@dptr
   8E9B 54 80              3126 	anl	a,#0x80
   8E9D 45 F0              3127 	orl	a,b
   8E9F F0                 3128 	movx	@dptr,a
                           3129 ;	../../shared/src/cds_base.c:367: dfe_sm_dc.dc_d_n_e = reg_DFE_DC_D_N_E_SM_LANE_6_0;
   8EA0 90 24 C1           3130 	mov	dptr,#(_DFE_READ_EVEN_SM_REG8 + 0x0001)
   8EA3 E0                 3131 	movx	a,@dptr
   8EA4 54 7F              3132 	anl	a,#0x7f
   8EA6 90 61 B9           3133 	mov	dptr,#(_dfe_sm_dc + 0x0001)
   8EA9 54 7F              3134 	anl	a,#0x7f
   8EAB F5 F0              3135 	mov	b,a
   8EAD E0                 3136 	movx	a,@dptr
   8EAE 54 80              3137 	anl	a,#0x80
   8EB0 45 F0              3138 	orl	a,b
   8EB2 F0                 3139 	movx	@dptr,a
                           3140 ;	../../shared/src/cds_base.c:368: dfe_sm_dc.dc_s_p_e = reg_DFE_DC_S_P_E_SM_LANE_6_0;
   8EB3 90 24 C2           3141 	mov	dptr,#(_DFE_READ_EVEN_SM_REG8 + 0x0002)
   8EB6 E0                 3142 	movx	a,@dptr
   8EB7 54 7F              3143 	anl	a,#0x7f
   8EB9 90 61 BA           3144 	mov	dptr,#(_dfe_sm_dc + 0x0002)
   8EBC 54 7F              3145 	anl	a,#0x7f
   8EBE F5 F0              3146 	mov	b,a
   8EC0 E0                 3147 	movx	a,@dptr
   8EC1 54 80              3148 	anl	a,#0x80
   8EC3 45 F0              3149 	orl	a,b
   8EC5 F0                 3150 	movx	@dptr,a
                           3151 ;	../../shared/src/cds_base.c:369: dfe_sm_dc.dc_s_n_e = reg_DFE_DC_S_N_E_SM_LANE_6_0;
   8EC6 90 24 C3           3152 	mov	dptr,#(_DFE_READ_EVEN_SM_REG8 + 0x0003)
   8EC9 E0                 3153 	movx	a,@dptr
   8ECA 54 7F              3154 	anl	a,#0x7f
   8ECC 90 61 BB           3155 	mov	dptr,#(_dfe_sm_dc + 0x0003)
   8ECF 54 7F              3156 	anl	a,#0x7f
   8ED1 F5 F0              3157 	mov	b,a
   8ED3 E0                 3158 	movx	a,@dptr
   8ED4 54 80              3159 	anl	a,#0x80
   8ED6 45 F0              3160 	orl	a,b
   8ED8 F0                 3161 	movx	@dptr,a
                           3162 ;	../../shared/src/cds_base.c:370: dfe_sm_dc.dc_d_p_o = reg_DFE_DC_D_P_O_SM_LANE_6_0;
   8ED9 90 24 C4           3163 	mov	dptr,#_DFE_READ_ODD_SM_REG8
   8EDC E0                 3164 	movx	a,@dptr
   8EDD 54 7F              3165 	anl	a,#0x7f
   8EDF 90 61 BC           3166 	mov	dptr,#(_dfe_sm_dc + 0x0004)
   8EE2 54 7F              3167 	anl	a,#0x7f
   8EE4 F5 F0              3168 	mov	b,a
   8EE6 E0                 3169 	movx	a,@dptr
   8EE7 54 80              3170 	anl	a,#0x80
   8EE9 45 F0              3171 	orl	a,b
   8EEB F0                 3172 	movx	@dptr,a
                           3173 ;	../../shared/src/cds_base.c:371: dfe_sm_dc.dc_d_n_o = reg_DFE_DC_D_N_O_SM_LANE_6_0;
   8EEC 90 24 C5           3174 	mov	dptr,#(_DFE_READ_ODD_SM_REG8 + 0x0001)
   8EEF E0                 3175 	movx	a,@dptr
   8EF0 54 7F              3176 	anl	a,#0x7f
   8EF2 90 61 BD           3177 	mov	dptr,#(_dfe_sm_dc + 0x0005)
   8EF5 54 7F              3178 	anl	a,#0x7f
   8EF7 F5 F0              3179 	mov	b,a
   8EF9 E0                 3180 	movx	a,@dptr
   8EFA 54 80              3181 	anl	a,#0x80
   8EFC 45 F0              3182 	orl	a,b
   8EFE F0                 3183 	movx	@dptr,a
                           3184 ;	../../shared/src/cds_base.c:372: dfe_sm_dc.dc_s_p_o = reg_DFE_DC_S_P_O_SM_LANE_6_0;
   8EFF 90 24 C6           3185 	mov	dptr,#(_DFE_READ_ODD_SM_REG8 + 0x0002)
   8F02 E0                 3186 	movx	a,@dptr
   8F03 54 7F              3187 	anl	a,#0x7f
   8F05 90 61 BE           3188 	mov	dptr,#(_dfe_sm_dc + 0x0006)
   8F08 54 7F              3189 	anl	a,#0x7f
   8F0A F5 F0              3190 	mov	b,a
   8F0C E0                 3191 	movx	a,@dptr
   8F0D 54 80              3192 	anl	a,#0x80
   8F0F 45 F0              3193 	orl	a,b
   8F11 F0                 3194 	movx	@dptr,a
                           3195 ;	../../shared/src/cds_base.c:373: dfe_sm_dc.dc_s_n_o = reg_DFE_DC_S_N_O_SM_LANE_6_0;
   8F12 90 24 C7           3196 	mov	dptr,#(_DFE_READ_ODD_SM_REG8 + 0x0003)
   8F15 E0                 3197 	movx	a,@dptr
   8F16 54 7F              3198 	anl	a,#0x7f
   8F18 90 61 BF           3199 	mov	dptr,#(_dfe_sm_dc + 0x0007)
   8F1B 54 7F              3200 	anl	a,#0x7f
   8F1D F5 F0              3201 	mov	b,a
   8F1F E0                 3202 	movx	a,@dptr
   8F20 54 80              3203 	anl	a,#0x80
   8F22 45 F0              3204 	orl	a,b
   8F24 F0                 3205 	movx	@dptr,a
                           3206 ;	../../shared/src/cds_base.c:375: cds28.dfe_2c_dc.dc_d_p_e = reg_DFE_DC_D_P_E_2C_LANE_7_0;
   8F25 90 25 10           3207 	mov	dptr,#_DFE_READ_EVEN_2C_REG8
   8F28 E0                 3208 	movx	a,@dptr
   8F29 90 61 40           3209 	mov	dptr,#(_cds28 + 0x0040)
   8F2C F0                 3210 	movx	@dptr,a
                           3211 ;	../../shared/src/cds_base.c:376: cds28.dfe_2c_dc.dc_d_n_e = reg_DFE_DC_D_N_E_2C_LANE_7_0;
   8F2D 90 25 11           3212 	mov	dptr,#(_DFE_READ_EVEN_2C_REG8 + 0x0001)
   8F30 E0                 3213 	movx	a,@dptr
   8F31 90 61 41           3214 	mov	dptr,#(_cds28 + 0x0041)
   8F34 F0                 3215 	movx	@dptr,a
                           3216 ;	../../shared/src/cds_base.c:377: cds28.dfe_2c_dc.dc_s_p_e = reg_DFE_DC_S_P_E_2C_LANE_7_0;
   8F35 90 25 12           3217 	mov	dptr,#(_DFE_READ_EVEN_2C_REG8 + 0x0002)
   8F38 E0                 3218 	movx	a,@dptr
   8F39 90 61 42           3219 	mov	dptr,#(_cds28 + 0x0042)
   8F3C F0                 3220 	movx	@dptr,a
                           3221 ;	../../shared/src/cds_base.c:378: cds28.dfe_2c_dc.dc_s_n_e = reg_DFE_DC_S_N_E_2C_LANE_7_0;
   8F3D 90 25 13           3222 	mov	dptr,#(_DFE_READ_EVEN_2C_REG8 + 0x0003)
   8F40 E0                 3223 	movx	a,@dptr
   8F41 90 61 43           3224 	mov	dptr,#(_cds28 + 0x0043)
   8F44 F0                 3225 	movx	@dptr,a
                           3226 ;	../../shared/src/cds_base.c:379: cds28.dfe_2c_dc.dc_d_p_o = reg_DFE_DC_D_P_O_2C_LANE_7_0;
   8F45 90 25 14           3227 	mov	dptr,#_DFE_READ_ODD_2C_REG8
   8F48 E0                 3228 	movx	a,@dptr
   8F49 90 61 44           3229 	mov	dptr,#(_cds28 + 0x0044)
   8F4C F0                 3230 	movx	@dptr,a
                           3231 ;	../../shared/src/cds_base.c:380: cds28.dfe_2c_dc.dc_d_n_o = reg_DFE_DC_D_N_O_2C_LANE_7_0;
   8F4D 90 25 15           3232 	mov	dptr,#(_DFE_READ_ODD_2C_REG8 + 0x0001)
   8F50 E0                 3233 	movx	a,@dptr
   8F51 90 61 45           3234 	mov	dptr,#(_cds28 + 0x0045)
   8F54 F0                 3235 	movx	@dptr,a
                           3236 ;	../../shared/src/cds_base.c:381: cds28.dfe_2c_dc.dc_s_p_o = reg_DFE_DC_S_P_O_2C_LANE_7_0;
   8F55 90 25 16           3237 	mov	dptr,#(_DFE_READ_ODD_2C_REG8 + 0x0002)
   8F58 E0                 3238 	movx	a,@dptr
   8F59 90 61 46           3239 	mov	dptr,#(_cds28 + 0x0046)
   8F5C F0                 3240 	movx	@dptr,a
                           3241 ;	../../shared/src/cds_base.c:382: cds28.dfe_2c_dc.dc_s_n_o = reg_DFE_DC_S_N_O_2C_LANE_7_0;
   8F5D 90 25 17           3242 	mov	dptr,#(_DFE_READ_ODD_2C_REG8 + 0x0003)
   8F60 E0                 3243 	movx	a,@dptr
   8F61 FA                 3244 	mov	r2,a
   8F62 90 61 47           3245 	mov	dptr,#(_cds28 + 0x0047)
   8F65 F0                 3246 	movx	@dptr,a
                           3247 ;	../../shared/src/cds_base.c:387: }
   8F66                    3248 00110$:
   8F66 02 00 C5           3249 	ljmp	__sdcc_banked_ret
                           3250 ;------------------------------------------------------------
                           3251 ;Allocation info for local variables in function 'cds_load_f0'
                           3252 ;------------------------------------------------------------
                           3253 ;type                      Allocated to registers r2 
                           3254 ;------------------------------------------------------------
                           3255 ;	../../shared/src/cds_base.c:400: void cds_load_f0(uint8_t type) BANKING_CTRL {
                           3256 ;	-----------------------------------------
                           3257 ;	 function cds_load_f0
                           3258 ;	-----------------------------------------
   8F69                    3259 _cds_load_f0:
   8F69 AA 82              3260 	mov	r2,dpl
                           3261 ;	../../shared/src/cds_base.c:401: switch(type)
   8F6B BA 00 02           3262 	cjne	r2,#0x00,00112$
   8F6E 80 09              3263 	sjmp	00101$
   8F70                    3264 00112$:
   8F70 BA 02 03           3265 	cjne	r2,#0x02,00113$
   8F73 02 90 05           3266 	ljmp	00102$
   8F76                    3267 00113$:
   8F76 02 90 8E           3268 	ljmp	00103$
                           3269 ;	../../shared/src/cds_base.c:403: case 0:
   8F79                    3270 00101$:
                           3271 ;	../../shared/src/cds_base.c:404: reg_DFE_FEXT0_D_P_E_LANE_5_0      = cds28.f0a.d_p_e; 
   8F79 90 61 48           3272 	mov	dptr,#(_cds28 + 0x0048)
   8F7C E0                 3273 	movx	a,@dptr
   8F7D 90 24 40           3274 	mov	dptr,#_DFE_FEXT_EVEN_REG0
   8F80 54 3F              3275 	anl	a,#0x3f
   8F82 F5 F0              3276 	mov	b,a
   8F84 E0                 3277 	movx	a,@dptr
   8F85 54 C0              3278 	anl	a,#0xc0
   8F87 45 F0              3279 	orl	a,b
   8F89 F0                 3280 	movx	@dptr,a
                           3281 ;	../../shared/src/cds_base.c:405: reg_DFE_FEXT0_D_N_E_LANE_5_0      = cds28.f0a.d_n_e; 
   8F8A 90 61 49           3282 	mov	dptr,#(_cds28 + 0x0049)
   8F8D E0                 3283 	movx	a,@dptr
   8F8E 90 24 41           3284 	mov	dptr,#(_DFE_FEXT_EVEN_REG0 + 0x0001)
   8F91 54 3F              3285 	anl	a,#0x3f
   8F93 F5 F0              3286 	mov	b,a
   8F95 E0                 3287 	movx	a,@dptr
   8F96 54 C0              3288 	anl	a,#0xc0
   8F98 45 F0              3289 	orl	a,b
   8F9A F0                 3290 	movx	@dptr,a
                           3291 ;	../../shared/src/cds_base.c:406: reg_DFE_FEXT0_S_P_E_LANE_5_0      = cds28.f0a.s_p_e; 
   8F9B 90 61 4A           3292 	mov	dptr,#(_cds28 + 0x004a)
   8F9E E0                 3293 	movx	a,@dptr
   8F9F 90 24 42           3294 	mov	dptr,#(_DFE_FEXT_EVEN_REG0 + 0x0002)
   8FA2 54 3F              3295 	anl	a,#0x3f
   8FA4 F5 F0              3296 	mov	b,a
   8FA6 E0                 3297 	movx	a,@dptr
   8FA7 54 C0              3298 	anl	a,#0xc0
   8FA9 45 F0              3299 	orl	a,b
   8FAB F0                 3300 	movx	@dptr,a
                           3301 ;	../../shared/src/cds_base.c:407: reg_DFE_FEXT0_S_N_E_LANE_5_0      = cds28.f0a.s_n_e; 
   8FAC 90 61 4B           3302 	mov	dptr,#(_cds28 + 0x004b)
   8FAF E0                 3303 	movx	a,@dptr
   8FB0 90 24 43           3304 	mov	dptr,#(_DFE_FEXT_EVEN_REG0 + 0x0003)
   8FB3 54 3F              3305 	anl	a,#0x3f
   8FB5 F5 F0              3306 	mov	b,a
   8FB7 E0                 3307 	movx	a,@dptr
   8FB8 54 C0              3308 	anl	a,#0xc0
   8FBA 45 F0              3309 	orl	a,b
   8FBC F0                 3310 	movx	@dptr,a
                           3311 ;	../../shared/src/cds_base.c:408: reg_DFE_FEXT0_D_P_O_LANE_5_0      = cds28.f0a.d_p_o; 
   8FBD 90 61 4C           3312 	mov	dptr,#(_cds28 + 0x004c)
   8FC0 E0                 3313 	movx	a,@dptr
   8FC1 90 24 60           3314 	mov	dptr,#_DFE_FEXT_ODD_REG0
   8FC4 54 3F              3315 	anl	a,#0x3f
   8FC6 F5 F0              3316 	mov	b,a
   8FC8 E0                 3317 	movx	a,@dptr
   8FC9 54 C0              3318 	anl	a,#0xc0
   8FCB 45 F0              3319 	orl	a,b
   8FCD F0                 3320 	movx	@dptr,a
                           3321 ;	../../shared/src/cds_base.c:409: reg_DFE_FEXT0_D_N_O_LANE_5_0      = cds28.f0a.d_n_o; 
   8FCE 90 61 4D           3322 	mov	dptr,#(_cds28 + 0x004d)
   8FD1 E0                 3323 	movx	a,@dptr
   8FD2 90 24 61           3324 	mov	dptr,#(_DFE_FEXT_ODD_REG0 + 0x0001)
   8FD5 54 3F              3325 	anl	a,#0x3f
   8FD7 F5 F0              3326 	mov	b,a
   8FD9 E0                 3327 	movx	a,@dptr
   8FDA 54 C0              3328 	anl	a,#0xc0
   8FDC 45 F0              3329 	orl	a,b
   8FDE F0                 3330 	movx	@dptr,a
                           3331 ;	../../shared/src/cds_base.c:410: reg_DFE_FEXT0_S_P_O_LANE_5_0      = cds28.f0a.s_p_o; 
   8FDF 90 61 4E           3332 	mov	dptr,#(_cds28 + 0x004e)
   8FE2 E0                 3333 	movx	a,@dptr
   8FE3 90 24 62           3334 	mov	dptr,#(_DFE_FEXT_ODD_REG0 + 0x0002)
   8FE6 54 3F              3335 	anl	a,#0x3f
   8FE8 F5 F0              3336 	mov	b,a
   8FEA E0                 3337 	movx	a,@dptr
   8FEB 54 C0              3338 	anl	a,#0xc0
   8FED 45 F0              3339 	orl	a,b
   8FEF F0                 3340 	movx	@dptr,a
                           3341 ;	../../shared/src/cds_base.c:411: reg_DFE_FEXT0_S_N_O_LANE_5_0      = cds28.f0a.s_n_o; 
   8FF0 90 61 4F           3342 	mov	dptr,#(_cds28 + 0x004f)
   8FF3 E0                 3343 	movx	a,@dptr
   8FF4 FA                 3344 	mov	r2,a
   8FF5 90 24 63           3345 	mov	dptr,#(_DFE_FEXT_ODD_REG0 + 0x0003)
   8FF8 54 3F              3346 	anl	a,#0x3f
   8FFA F5 F0              3347 	mov	b,a
   8FFC E0                 3348 	movx	a,@dptr
   8FFD 54 C0              3349 	anl	a,#0xc0
   8FFF 45 F0              3350 	orl	a,b
   9001 F0                 3351 	movx	@dptr,a
                           3352 ;	../../shared/src/cds_base.c:412: break;
   9002 02 90 8E           3353 	ljmp	00103$
                           3354 ;	../../shared/src/cds_base.c:413: case 2:
   9005                    3355 00102$:
                           3356 ;	../../shared/src/cds_base.c:414: reg_DFE_FEXT0_D_P_E_LANE_5_0      = cds28.f0d.d_p_e; 
   9005 90 61 58           3357 	mov	dptr,#(_cds28 + 0x0058)
   9008 E0                 3358 	movx	a,@dptr
   9009 90 24 40           3359 	mov	dptr,#_DFE_FEXT_EVEN_REG0
   900C 54 3F              3360 	anl	a,#0x3f
   900E F5 F0              3361 	mov	b,a
   9010 E0                 3362 	movx	a,@dptr
   9011 54 C0              3363 	anl	a,#0xc0
   9013 45 F0              3364 	orl	a,b
   9015 F0                 3365 	movx	@dptr,a
                           3366 ;	../../shared/src/cds_base.c:415: reg_DFE_FEXT0_D_N_E_LANE_5_0      = cds28.f0d.d_n_e; 
   9016 90 61 59           3367 	mov	dptr,#(_cds28 + 0x0059)
   9019 E0                 3368 	movx	a,@dptr
   901A 90 24 41           3369 	mov	dptr,#(_DFE_FEXT_EVEN_REG0 + 0x0001)
   901D 54 3F              3370 	anl	a,#0x3f
   901F F5 F0              3371 	mov	b,a
   9021 E0                 3372 	movx	a,@dptr
   9022 54 C0              3373 	anl	a,#0xc0
   9024 45 F0              3374 	orl	a,b
   9026 F0                 3375 	movx	@dptr,a
                           3376 ;	../../shared/src/cds_base.c:416: reg_DFE_FEXT0_S_P_E_LANE_5_0      = cds28.f0d.s_p_e; 
   9027 90 61 5A           3377 	mov	dptr,#(_cds28 + 0x005a)
   902A E0                 3378 	movx	a,@dptr
   902B 90 24 42           3379 	mov	dptr,#(_DFE_FEXT_EVEN_REG0 + 0x0002)
   902E 54 3F              3380 	anl	a,#0x3f
   9030 F5 F0              3381 	mov	b,a
   9032 E0                 3382 	movx	a,@dptr
   9033 54 C0              3383 	anl	a,#0xc0
   9035 45 F0              3384 	orl	a,b
   9037 F0                 3385 	movx	@dptr,a
                           3386 ;	../../shared/src/cds_base.c:417: reg_DFE_FEXT0_S_N_E_LANE_5_0      = cds28.f0d.s_n_e; 
   9038 90 61 5B           3387 	mov	dptr,#(_cds28 + 0x005b)
   903B E0                 3388 	movx	a,@dptr
   903C 90 24 43           3389 	mov	dptr,#(_DFE_FEXT_EVEN_REG0 + 0x0003)
   903F 54 3F              3390 	anl	a,#0x3f
   9041 F5 F0              3391 	mov	b,a
   9043 E0                 3392 	movx	a,@dptr
   9044 54 C0              3393 	anl	a,#0xc0
   9046 45 F0              3394 	orl	a,b
   9048 F0                 3395 	movx	@dptr,a
                           3396 ;	../../shared/src/cds_base.c:418: reg_DFE_FEXT0_D_P_O_LANE_5_0      = cds28.f0d.d_p_o; 
   9049 90 61 5C           3397 	mov	dptr,#(_cds28 + 0x005c)
   904C E0                 3398 	movx	a,@dptr
   904D 90 24 60           3399 	mov	dptr,#_DFE_FEXT_ODD_REG0
   9050 54 3F              3400 	anl	a,#0x3f
   9052 F5 F0              3401 	mov	b,a
   9054 E0                 3402 	movx	a,@dptr
   9055 54 C0              3403 	anl	a,#0xc0
   9057 45 F0              3404 	orl	a,b
   9059 F0                 3405 	movx	@dptr,a
                           3406 ;	../../shared/src/cds_base.c:419: reg_DFE_FEXT0_D_N_O_LANE_5_0      = cds28.f0d.d_n_o; 
   905A 90 61 5D           3407 	mov	dptr,#(_cds28 + 0x005d)
   905D E0                 3408 	movx	a,@dptr
   905E 90 24 61           3409 	mov	dptr,#(_DFE_FEXT_ODD_REG0 + 0x0001)
   9061 54 3F              3410 	anl	a,#0x3f
   9063 F5 F0              3411 	mov	b,a
   9065 E0                 3412 	movx	a,@dptr
   9066 54 C0              3413 	anl	a,#0xc0
   9068 45 F0              3414 	orl	a,b
   906A F0                 3415 	movx	@dptr,a
                           3416 ;	../../shared/src/cds_base.c:420: reg_DFE_FEXT0_S_P_O_LANE_5_0      = cds28.f0d.s_p_o; 
   906B 90 61 5E           3417 	mov	dptr,#(_cds28 + 0x005e)
   906E E0                 3418 	movx	a,@dptr
   906F 90 24 62           3419 	mov	dptr,#(_DFE_FEXT_ODD_REG0 + 0x0002)
   9072 54 3F              3420 	anl	a,#0x3f
   9074 F5 F0              3421 	mov	b,a
   9076 E0                 3422 	movx	a,@dptr
   9077 54 C0              3423 	anl	a,#0xc0
   9079 45 F0              3424 	orl	a,b
   907B F0                 3425 	movx	@dptr,a
                           3426 ;	../../shared/src/cds_base.c:421: reg_DFE_FEXT0_S_N_O_LANE_5_0      = cds28.f0d.s_n_o; 
   907C 90 61 5F           3427 	mov	dptr,#(_cds28 + 0x005f)
   907F E0                 3428 	movx	a,@dptr
   9080 FA                 3429 	mov	r2,a
   9081 90 24 63           3430 	mov	dptr,#(_DFE_FEXT_ODD_REG0 + 0x0003)
   9084 54 3F              3431 	anl	a,#0x3f
   9086 F5 F0              3432 	mov	b,a
   9088 E0                 3433 	movx	a,@dptr
   9089 54 C0              3434 	anl	a,#0xc0
   908B 45 F0              3435 	orl	a,b
   908D F0                 3436 	movx	@dptr,a
                           3437 ;	../../shared/src/cds_base.c:423: }
   908E                    3438 00103$:
                           3439 ;	../../shared/src/cds_base.c:424: DFE_FEN_EVEN_REG.BT.B0    = 0x0f;
                           3440 ;	../../shared/src/cds_base.c:425: DFE_FEN_EVEN_REG.BT.B0    = 0;
   908E 90 24 30           3441 	mov	dptr,#_DFE_FEN_EVEN_REG
   9091 74 0F              3442 	mov	a,#0x0F
   9093 F0                 3443 	movx	@dptr,a
   9094 E4                 3444 	clr	a
   9095 F0                 3445 	movx	@dptr,a
                           3446 ;	../../shared/src/cds_base.c:426: DFE_FEN_ODD_REG.BT.B0     = 0x0f;
                           3447 ;	../../shared/src/cds_base.c:427: DFE_FEN_ODD_REG.BT.B0     = 0;
   9096 90 24 34           3448 	mov	dptr,#_DFE_FEN_ODD_REG
   9099 74 0F              3449 	mov	a,#0x0F
   909B F0                 3450 	movx	@dptr,a
   909C E4                 3451 	clr	a
   909D F0                 3452 	movx	@dptr,a
                           3453 ;	../../shared/src/cds_base.c:428: while(!reg_DFE_UPDATED_LANE);
   909E                    3454 00104$:
   909E 90 24 0B           3455 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0003)
   90A1 E0                 3456 	movx	a,@dptr
   90A2 30 E5 F9           3457 	jnb	acc.5,00104$
   90A5 02 00 C5           3458 	ljmp	__sdcc_banked_ret
                           3459 ;------------------------------------------------------------
                           3460 ;Allocation info for local variables in function 'set_ctle_accap'
                           3461 ;------------------------------------------------------------
                           3462 ;mode                      Allocated to registers r2 
                           3463 ;------------------------------------------------------------
                           3464 ;	../../shared/src/cds_base.c:441: void set_ctle_accap(uint8_t mode) BANKING_CTRL {
                           3465 ;	-----------------------------------------
                           3466 ;	 function set_ctle_accap
                           3467 ;	-----------------------------------------
   90A8                    3468 _set_ctle_accap:
                           3469 ;	../../shared/src/cds_base.c:442: if(mode)
   90A8 E5 82              3470 	mov	a,dpl
   90AA FA                 3471 	mov	r2,a
   90AB 60 2B              3472 	jz	00105$
                           3473 ;	../../shared/src/cds_base.c:444: if(lnx_CKFW_EN_LANE) {
   90AD 90 60 4C           3474 	mov	dptr,#_DFE_CONTROL_5
   90B0 E0                 3475 	movx	a,@dptr
   90B1 30 E0 10           3476 	jnb	acc.0,00102$
                           3477 ;	../../shared/src/cds_base.c:445: reg_CLK_RXACCAP_SEL_LANE_1_0 = 0; //use ckfw
   90B4 90 02 64           3478 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_153
   90B7 E0                 3479 	movx	a,@dptr
   90B8 54 E7              3480 	anl	a,#0xe7
   90BA F0                 3481 	movx	@dptr,a
                           3482 ;	../../shared/src/cds_base.c:446: reg_FFE_PULSE_DIV_LANE_2_0 = 0;		
   90BB 90 02 0C           3483 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_131
   90BE E0                 3484 	movx	a,@dptr
   90BF 54 8F              3485 	anl	a,#0x8f
   90C1 F0                 3486 	movx	@dptr,a
   90C2 80 26              3487 	sjmp	00106$
   90C4                    3488 00102$:
                           3489 ;	../../shared/src/cds_base.c:449: reg_CLK_RXACCAP_SEL_LANE_1_0 = 1; //use REFCLK
   90C4 90 02 64           3490 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_153
   90C7 E0                 3491 	movx	a,@dptr
   90C8 54 E7              3492 	anl	a,#0xe7
   90CA 44 08              3493 	orl	a,#0x08
   90CC F0                 3494 	movx	@dptr,a
                           3495 ;	../../shared/src/cds_base.c:450: reg_FFE_PULSE_DIV_LANE_2_0 = 3; //5;
   90CD 90 02 0C           3496 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_131
   90D0 E0                 3497 	movx	a,@dptr
   90D1 54 8F              3498 	anl	a,#0x8f
   90D3 44 30              3499 	orl	a,#0x30
   90D5 F0                 3500 	movx	@dptr,a
   90D6 80 12              3501 	sjmp	00106$
   90D8                    3502 00105$:
                           3503 ;	../../shared/src/cds_base.c:455: reg_CLK_RXACCAP_SEL_LANE_1_0 = 2; //use DEMUX
   90D8 90 02 64           3504 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_153
   90DB E0                 3505 	movx	a,@dptr
   90DC 54 E7              3506 	anl	a,#0xe7
   90DE 44 10              3507 	orl	a,#0x10
   90E0 F0                 3508 	movx	@dptr,a
                           3509 ;	../../shared/src/cds_base.c:456: reg_FFE_PULSE_DIV_LANE_2_0 = 2;
   90E1 90 02 0C           3510 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_131
   90E4 E0                 3511 	movx	a,@dptr
   90E5 54 8F              3512 	anl	a,#0x8f
   90E7 44 20              3513 	orl	a,#0x20
   90E9 F0                 3514 	movx	@dptr,a
   90EA                    3515 00106$:
                           3516 ;	../../shared/src/cds_base.c:458: delay01(10);
   90EA 90 00 0A           3517 	mov	dptr,#0x000A
   90ED 78 16              3518 	mov	r0,#_delay01
   90EF 79 BC              3519 	mov	r1,#(_delay01 >> 8)
   90F1 7A 02              3520 	mov	r2,#(_delay01 >> 16)
   90F3 12 00 B3           3521 	lcall	__sdcc_banked_call
   90F6 02 00 C5           3522 	ljmp	__sdcc_banked_ret
                           3523 ;------------------------------------------------------------
                           3524 ;Allocation info for local variables in function 'enable_all_tap_adapt'
                           3525 ;------------------------------------------------------------
                           3526 ;------------------------------------------------------------
                           3527 ;	../../shared/src/cds_base.c:461: void enable_all_tap_adapt(void) BANKING_CTRL {
                           3528 ;	-----------------------------------------
                           3529 ;	 function enable_all_tap_adapt
                           3530 ;	-----------------------------------------
   90F9                    3531 _enable_all_tap_adapt:
                           3532 ;	../../shared/src/cds_base.c:463: if( lnx_CDS_UPDATE_ODD_DIS_LANE) {
   90F9 90 60 A4           3533 	mov	dptr,#_CDS_CTRL_REG1
   90FC E0                 3534 	movx	a,@dptr
   90FD 30 E4 11           3535 	jnb	acc.4,00102$
                           3536 ;	../../shared/src/cds_base.c:464: reg_DFE_UPDATE_EN_LANE_15_0 = 0x5555;
   9100 90 24 08           3537 	mov	dptr,#_DFE_CTRL_REG2
   9103 74 55              3538 	mov	a,#0x55
   9105 F0                 3539 	movx	@dptr,a
   9106 A3                 3540 	inc	dptr
   9107 F0                 3541 	movx	@dptr,a
                           3542 ;	../../shared/src/cds_base.c:465: reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;	
   9108 90 24 0A           3543 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0002)
   910B E0                 3544 	movx	a,@dptr
   910C 54 C0              3545 	anl	a,#0xc0
   910E F0                 3546 	movx	@dptr,a
   910F 80 0F              3547 	sjmp	00103$
   9111                    3548 00102$:
                           3549 ;	../../shared/src/cds_base.c:467: reg_DFE_UPDATE_EN_LANE_15_0 = 0xffff;
   9111 90 24 08           3550 	mov	dptr,#_DFE_CTRL_REG2
   9114 74 FF              3551 	mov	a,#0xFF
   9116 F0                 3552 	movx	@dptr,a
   9117 A3                 3553 	inc	dptr
   9118 F0                 3554 	movx	@dptr,a
                           3555 ;	../../shared/src/cds_base.c:468: reg_DFE_UPDATE_F_EN_LANE_5_0 = 0x3f;
   9119 90 24 0A           3556 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0002)
   911C E0                 3557 	movx	a,@dptr
   911D 44 3F              3558 	orl	a,#0x3f
   911F F0                 3559 	movx	@dptr,a
   9120                    3560 00103$:
                           3561 ;	../../shared/src/cds_base.c:470: f0b_en = 0;		
   9120 90 24 01           3562 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0001)
   9123 E0                 3563 	movx	a,@dptr
   9124 54 FD              3564 	anl	a,#0xfd
   9126 F0                 3565 	movx	@dptr,a
                           3566 ;	../../shared/src/cds_base.c:471: f0d_en = 0;
   9127 90 24 01           3567 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0001)
   912A E0                 3568 	movx	a,@dptr
   912B 54 FE              3569 	anl	a,#0xfe
   912D F0                 3570 	movx	@dptr,a
                           3571 ;	../../shared/src/cds_base.c:472: ofst_en = 0; 
   912E 90 24 0A           3572 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0002)
   9131 E0                 3573 	movx	a,@dptr
   9132 54 BF              3574 	anl	a,#0xbf
   9134 F0                 3575 	movx	@dptr,a
                           3576 ;	../../shared/src/cds_base.c:473: reg_DFE_COARSE_STEP_EN_LANE = 0; 
   9135 90 24 02           3577 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   9138 E0                 3578 	movx	a,@dptr
   9139 54 F7              3579 	anl	a,#0xf7
   913B F0                 3580 	movx	@dptr,a
                           3581 ;	../../shared/src/cds_base.c:474: reg_DFE_FINE_STEP_EN_LANE = 0;
   913C 90 24 02           3582 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   913F E0                 3583 	movx	a,@dptr
   9140 54 FB              3584 	anl	a,#0xfb
   9142 F0                 3585 	movx	@dptr,a
                           3586 ;	../../shared/src/cds_base.c:475: reg_DFE_F0_COARSE_STEP_EN_LANE = 0; 
   9143 90 24 0B           3587 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0003)
   9146 E0                 3588 	movx	a,@dptr
   9147 54 7F              3589 	anl	a,#0x7f
   9149 F0                 3590 	movx	@dptr,a
                           3591 ;	../../shared/src/cds_base.c:476: reg_DFE_F0_FINE_STEP_EN_LANE = 0;
   914A 90 24 0B           3592 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0003)
   914D E0                 3593 	movx	a,@dptr
   914E 54 BF              3594 	anl	a,#0xbf
   9150 F0                 3595 	movx	@dptr,a
   9151 02 00 C5           3596 	ljmp	__sdcc_banked_ret
                           3597 ;------------------------------------------------------------
                           3598 ;Allocation info for local variables in function 'dfe_hardware_cont_stop'
                           3599 ;------------------------------------------------------------
                           3600 ;------------------------------------------------------------
                           3601 ;	../../shared/src/cds_base.c:480: void dfe_hardware_cont_stop(void) BANKING_CTRL {
                           3602 ;	-----------------------------------------
                           3603 ;	 function dfe_hardware_cont_stop
                           3604 ;	-----------------------------------------
   9154                    3605 _dfe_hardware_cont_stop:
                           3606 ;	../../shared/src/cds_base.c:481: if(reg_DFE_ADAPT_CONT_LANE == 1)
   9154 90 24 01           3607 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0001)
   9157 E0                 3608 	movx	a,@dptr
   9158 C4                 3609 	swap	a
   9159 03                 3610 	rr	a
   915A 54 01              3611 	anl	a,#0x01
   915C FA                 3612 	mov	r2,a
   915D BA 01 26           3613 	cjne	r2,#0x01,00107$
                           3614 ;	../../shared/src/cds_base.c:483: timeout_start((uint16_t)1000);
   9160 75 8B 18           3615 	mov	_TMR1,#0x18
   9163 75 8D FC           3616 	mov	(_TMR1 >> 8),#0xFC
   9166 D2 8E              3617 	setb	_TR1
   9168 C2 03              3618 	clr	_timeout
                           3619 ;	../../shared/src/cds_base.c:484: reg_DFE_ADAPT_CONT_LANE = 0;
   916A 90 24 01           3620 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0001)
   916D E0                 3621 	movx	a,@dptr
   916E 54 DF              3622 	anl	a,#0xdf
   9170 F0                 3623 	movx	@dptr,a
                           3624 ;	../../shared/src/cds_base.c:486: while(!reg_DFE_DONE_LANE && !timeout);
   9171                    3625 00102$:
   9171 90 24 02           3626 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   9174 E0                 3627 	movx	a,@dptr
   9175 20 E1 03           3628 	jb	acc.1,00104$
   9178 30 03 F6           3629 	jnb	_timeout,00102$
   917B                    3630 00104$:
                           3631 ;	../../shared/src/cds_base.c:487: reg_DFE_START_LANE = 0;
   917B 90 24 02           3632 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   917E E0                 3633 	movx	a,@dptr
   917F 54 FE              3634 	anl	a,#0xfe
   9181 F0                 3635 	movx	@dptr,a
                           3636 ;	../../shared/src/cds_base.c:489: timeout_stop;
   9182 C2 8E              3637 	clr	_TR1
   9184 C2 8F              3638 	clr	_TF1
   9186                    3639 00107$:
   9186 02 00 C5           3640 	ljmp	__sdcc_banked_ret
                           3641 ;------------------------------------------------------------
                           3642 ;Allocation info for local variables in function 'dfe_hardware_cont_run'
                           3643 ;------------------------------------------------------------
                           3644 ;------------------------------------------------------------
                           3645 ;	../../shared/src/cds_base.c:493: void dfe_hardware_cont_run(void) BANKING_CTRL {//// hardware cont run
                           3646 ;	-----------------------------------------
                           3647 ;	 function dfe_hardware_cont_run
                           3648 ;	-----------------------------------------
   9189                    3649 _dfe_hardware_cont_run:
                           3650 ;	../../shared/src/cds_base.c:495: if(TRAIN_SIM_EN) return;
   9189 90 E6 07           3651 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   918C E0                 3652 	movx	a,@dptr
   918D 30 E2 03           3653 	jnb	acc.2,00102$
   9190 02 92 41           3654 	ljmp	00112$
   9193                    3655 00102$:
                           3656 ;	../../shared/src/cds_base.c:496: if(reg_DFE_ADAPT_CONT_LANE) return;
   9193 90 24 01           3657 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0001)
   9196 E0                 3658 	movx	a,@dptr
   9197 30 E5 03           3659 	jnb	acc.5,00104$
   919A 02 92 41           3660 	ljmp	00112$
   919D                    3661 00104$:
                           3662 ;	../../shared/src/cds_base.c:497: if( dfe_dis == 1 ) return;
   919D 90 66 F7           3663 	mov	dptr,#_dfe_dis
   91A0 E0                 3664 	movx	a,@dptr
   91A1 FA                 3665 	mov	r2,a
   91A2 BA 01 03           3666 	cjne	r2,#0x01,00106$
   91A5 02 92 41           3667 	ljmp	00112$
   91A8                    3668 00106$:
                           3669 ;	../../shared/src/cds_base.c:498: if(tag_DFE_ADAPT_NORMAL_SOFT_CONT_EN || lnx_DFE_ADAPT_NORMAL_FORCE_SKIP_LANE ) return;
   91A8 90 60 4C           3670 	mov	dptr,#_DFE_CONTROL_5
   91AB E0                 3671 	movx	a,@dptr
   91AC 20 E4 07           3672 	jb	acc.4,00107$
   91AF 90 60 4C           3673 	mov	dptr,#_DFE_CONTROL_5
   91B2 E0                 3674 	movx	a,@dptr
   91B3 30 E3 03           3675 	jnb	acc.3,00108$
   91B6                    3676 00107$:
   91B6 02 92 41           3677 	ljmp	00112$
   91B9                    3678 00108$:
                           3679 ;	../../shared/src/cds_base.c:500: dfe_load_type(1);
   91B9 75 82 01           3680 	mov	dpl,#0x01
   91BC 78 97              3681 	mov	r0,#_dfe_load_type
   91BE 79 8B              3682 	mov	r1,#(_dfe_load_type >> 8)
   91C0 7A 02              3683 	mov	r2,#(_dfe_load_type >> 16)
   91C2 12 00 B3           3684 	lcall	__sdcc_banked_call
                           3685 ;	../../shared/src/cds_base.c:501: pol_table_loop_num_1_0 = 2; pol_table_loop_num_9_2 = 5; //1  -> 0x16 
   91C5 90 24 06           3686 	mov	dptr,#(_DFE_CTRL_REG1 + 0x0002)
   91C8 E0                 3687 	movx	a,@dptr
   91C9 54 3F              3688 	anl	a,#0x3f
   91CB 44 80              3689 	orl	a,#0x80
   91CD F0                 3690 	movx	@dptr,a
   91CE 90 24 07           3691 	mov	dptr,#(_DFE_CTRL_REG1 + 0x0003)
   91D1 74 05              3692 	mov	a,#0x05
   91D3 F0                 3693 	movx	@dptr,a
                           3694 ;	../../shared/src/cds_base.c:502: enable_all_tap_adapt();
   91D4 78 F9              3695 	mov	r0,#_enable_all_tap_adapt
   91D6 79 90              3696 	mov	r1,#(_enable_all_tap_adapt >> 8)
   91D8 7A 02              3697 	mov	r2,#(_enable_all_tap_adapt >> 16)
   91DA 12 00 B3           3698 	lcall	__sdcc_banked_call
                           3699 ;	../../shared/src/cds_base.c:503: reg_DFE_UPDATE_EN_LANE_15_0_b0 &= 0xfd;
   91DD 90 24 08           3700 	mov	dptr,#_DFE_CTRL_REG2
   91E0 E0                 3701 	movx	a,@dptr
   91E1 FA                 3702 	mov	r2,a
   91E2 53 02 FD           3703 	anl	ar2,#0xFD
   91E5 90 24 08           3704 	mov	dptr,#_DFE_CTRL_REG2
   91E8 EA                 3705 	mov	a,r2
   91E9 F0                 3706 	movx	@dptr,a
                           3707 ;	../../shared/src/cds_base.c:504: ofst_en = 1;
   91EA 90 24 0A           3708 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0002)
   91ED E0                 3709 	movx	a,@dptr
   91EE 44 40              3710 	orl	a,#0x40
   91F0 F0                 3711 	movx	@dptr,a
                           3712 ;	../../shared/src/cds_base.c:506: data_slic_fb_mode = 0;
   91F1 90 24 05           3713 	mov	dptr,#(_DFE_CTRL_REG1 + 0x0001)
   91F4 E0                 3714 	movx	a,@dptr
   91F5 54 FD              3715 	anl	a,#0xfd
   91F7 F0                 3716 	movx	@dptr,a
                           3717 ;	../../shared/src/cds_base.c:507: f1p_f1n_fb_mode = 0;
   91F8 90 24 05           3718 	mov	dptr,#(_DFE_CTRL_REG1 + 0x0001)
   91FB E0                 3719 	movx	a,@dptr
   91FC 54 FE              3720 	anl	a,#0xfe
   91FE F0                 3721 	movx	@dptr,a
                           3722 ;	../../shared/src/cds_base.c:508: f0_fb_mode = 0;
   91FF 90 24 05           3723 	mov	dptr,#(_DFE_CTRL_REG1 + 0x0001)
   9202 E0                 3724 	movx	a,@dptr
   9203 54 F7              3725 	anl	a,#0xf7
   9205 F0                 3726 	movx	@dptr,a
                           3727 ;	../../shared/src/cds_base.c:510: adapt_data_en = 1;
   9206 D2 0D              3728 	setb	_adapt_data_en
                           3729 ;	../../shared/src/cds_base.c:511: adapt_slicer_en = 1;
   9208 D2 0C              3730 	setb	_adapt_slicer_en
                           3731 ;	../../shared/src/cds_base.c:512: set_slicer_data_sampler_adapt(BOTH_SMPL);
   920A 75 82 00           3732 	mov	dpl,#0x00
   920D 78 44              3733 	mov	r0,#_set_slicer_data_sampler_adapt
   920F 79 92              3734 	mov	r1,#(_set_slicer_data_sampler_adapt >> 8)
   9211 7A 02              3735 	mov	r2,#(_set_slicer_data_sampler_adapt >> 16)
   9213 12 00 B3           3736 	lcall	__sdcc_banked_call
                           3737 ;	../../shared/src/cds_base.c:514: reg_DFE_ADAPT_CONT_LANE = 1;
   9216 90 24 01           3738 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0001)
   9219 E0                 3739 	movx	a,@dptr
   921A 44 20              3740 	orl	a,#0x20
   921C F0                 3741 	movx	@dptr,a
                           3742 ;	../../shared/src/cds_base.c:516: reg_DFE_START_LANE = 0;
                           3743 ;	../../shared/src/cds_base.c:517: reg_DFE_START_LANE = 1;
   921D 90 24 02           3744 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   9220 E0                 3745 	movx	a,@dptr
   9221 54 FE              3746 	anl	a,#0xfe
   9223 F0                 3747 	movx	@dptr,a
   9224 E0                 3748 	movx	a,@dptr
   9225 44 01              3749 	orl	a,#0x01
   9227 F0                 3750 	movx	@dptr,a
                           3751 ;	../../shared/src/cds_base.c:519: if(lnx_MAXEO_ADAPT_NORMAL_MODE_EN_LANE) {
   9228 90 60 4E           3752 	mov	dptr,#(_DFE_CONTROL_5 + 0x0002)
   922B E0                 3753 	movx	a,@dptr
   922C 30 E7 12           3754 	jnb	acc.7,00112$
                           3755 ;	../../shared/src/cds_base.c:520: reg_DFE_MMSE_MODE_LANE = MAXEO_ADAPT_MODE;
                           3756 ;	../../shared/src/cds_base.c:521: reg_DFE_MAXEO_LOW_MODE_LANE = 1;
   922F 90 24 01           3757 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0001)
   9232 E0                 3758 	movx	a,@dptr
   9233 54 FB              3759 	anl	a,#0xfb
   9235 F0                 3760 	movx	@dptr,a
   9236 E0                 3761 	movx	a,@dptr
   9237 44 10              3762 	orl	a,#0x10
   9239 F0                 3763 	movx	@dptr,a
                           3764 ;	../../shared/src/cds_base.c:523: f0d_en = 1;
   923A 90 24 01           3765 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0001)
   923D E0                 3766 	movx	a,@dptr
   923E 44 01              3767 	orl	a,#0x01
   9240 F0                 3768 	movx	@dptr,a
   9241                    3769 00112$:
   9241 02 00 C5           3770 	ljmp	__sdcc_banked_ret
                           3771 ;------------------------------------------------------------
                           3772 ;Allocation info for local variables in function 'set_slicer_data_sampler_adapt'
                           3773 ;------------------------------------------------------------
                           3774 ;flag                      Allocated to registers r2 
                           3775 ;dfe_adapt_splr_en         Allocated to registers r3 
                           3776 ;------------------------------------------------------------
                           3777 ;	../../shared/src/cds_base.c:534: void set_slicer_data_sampler_adapt(bool flag) BANKING_CTRL {
                           3778 ;	-----------------------------------------
                           3779 ;	 function set_slicer_data_sampler_adapt
                           3780 ;	-----------------------------------------
   9244                    3781 _set_slicer_data_sampler_adapt:
   9244 AA 82              3782 	mov	r2,dpl
                           3783 ;	../../shared/src/cds_base.c:537: if (adapt_slicer_en==1 && adapt_data_en==0) {
   9246 30 0C 07           3784 	jnb	_adapt_slicer_en,00109$
   9249 20 0D 04           3785 	jb	_adapt_data_en,00109$
                           3786 ;	../../shared/src/cds_base.c:538: dfe_adapt_splr_en = 0x0c;
   924C 7B 0C              3787 	mov	r3,#0x0C
   924E 80 13              3788 	sjmp	00110$
   9250                    3789 00109$:
                           3790 ;	../../shared/src/cds_base.c:540: else if (adapt_slicer_en==0 && adapt_data_en==1) {
   9250 20 0C 07           3791 	jb	_adapt_slicer_en,00105$
   9253 30 0D 04           3792 	jnb	_adapt_data_en,00105$
                           3793 ;	../../shared/src/cds_base.c:541: dfe_adapt_splr_en = 0x03;
   9256 7B 03              3794 	mov	r3,#0x03
   9258 80 09              3795 	sjmp	00110$
   925A                    3796 00105$:
                           3797 ;	../../shared/src/cds_base.c:544: if(flag == SLICER_SMPL_ONLY)
   925A BA 01 04           3798 	cjne	r2,#0x01,00102$
                           3799 ;	../../shared/src/cds_base.c:545: dfe_adapt_splr_en = 0x0c;
   925D 7B 0C              3800 	mov	r3,#0x0C
   925F 80 02              3801 	sjmp	00110$
   9261                    3802 00102$:
                           3803 ;	../../shared/src/cds_base.c:547: dfe_adapt_splr_en = 0x0f;
   9261 7B 0F              3804 	mov	r3,#0x0F
   9263                    3805 00110$:
                           3806 ;	../../shared/src/cds_base.c:550: reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = dfe_adapt_splr_en & ~lnx_CDS_ADAPT_SPLR_DIS_LANE_3_0;
   9263 90 60 A4           3807 	mov	dptr,#_CDS_CTRL_REG1
   9266 E0                 3808 	movx	a,@dptr
   9267 54 0F              3809 	anl	a,#0x0f
   9269 F4                 3810 	cpl	a
   926A FA                 3811 	mov	r2,a
   926B 52 03              3812 	anl	ar3,a
   926D 90 24 00           3813 	mov	dptr,#_DFE_CTRL_REG0
   9270 EB                 3814 	mov	a,r3
   9271 C4                 3815 	swap	a
   9272 54 F0              3816 	anl	a,#(0xf0&0xf0)
   9274 F5 F0              3817 	mov	b,a
   9276 E0                 3818 	movx	a,@dptr
   9277 54 0F              3819 	anl	a,#0x0f
   9279 45 F0              3820 	orl	a,b
   927B F0                 3821 	movx	@dptr,a
   927C 02 00 C5           3822 	ljmp	__sdcc_banked_ret
                           3823 ;------------------------------------------------------------
                           3824 ;Allocation info for local variables in function 'cal_half_code'
                           3825 ;------------------------------------------------------------
                           3826 ;dec_ratio                 Allocated to registers r2 
                           3827 ;------------------------------------------------------------
                           3828 ;	../../shared/src/cds_base.c:553: void cal_half_code(void) BANKING_CTRL {
                           3829 ;	-----------------------------------------
                           3830 ;	 function cal_half_code
                           3831 ;	-----------------------------------------
   927F                    3832 _cal_half_code:
                           3833 ;	../../shared/src/cds_base.c:556: dec_ratio = reg_RX_SPEED_DIV_LANE_2_0&0x03;
   927F 90 02 28           3834 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_138
   9282 E0                 3835 	movx	a,@dptr
   9283 03                 3836 	rr	a
   9284 03                 3837 	rr	a
   9285 54 07              3838 	anl	a,#0x07
   9287 FA                 3839 	mov	r2,a
   9288 53 02 03           3840 	anl	ar2,#0x03
                           3841 ;	../../shared/src/cds_base.c:557: lnx_CDS_UPDATE_ODD_DIS_LANE = 0;
   928B 90 60 A4           3842 	mov	dptr,#_CDS_CTRL_REG1
   928E E0                 3843 	movx	a,@dptr
   928F 54 EF              3844 	anl	a,#0xef
   9291 F0                 3845 	movx	@dptr,a
                           3846 ;	../../shared/src/cds_base.c:558: half_ui_code = 32;
   9292 90 67 94           3847 	mov	dptr,#_half_ui_code
   9295 74 20              3848 	mov	a,#0x20
   9297 F0                 3849 	movx	@dptr,a
                           3850 ;	../../shared/src/cds_base.c:559: lnx_CDS_UPDATE_F_DIS_LANE = 0;
   9298 90 60 A4           3851 	mov	dptr,#_CDS_CTRL_REG1
   929B E0                 3852 	movx	a,@dptr
   929C 54 DF              3853 	anl	a,#0xdf
   929E F0                 3854 	movx	@dptr,a
                           3855 ;	../../shared/src/cds_base.c:560: if( dec_ratio == 0x3) {
   929F BA 03 13           3856 	cjne	r2,#0x03,00108$
                           3857 ;	../../shared/src/cds_base.c:561: reg_DFE_ADAPT_EVEN_EN_LANE = 0;
                           3858 ;	../../shared/src/cds_base.c:562: reg_DFE_ADAPT_ODD_EN_LANE  = 1;
   92A2 90 24 02           3859 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   92A5 E0                 3860 	movx	a,@dptr
   92A6 54 7F              3861 	anl	a,#0x7f
   92A8 F0                 3862 	movx	@dptr,a
   92A9 E0                 3863 	movx	a,@dptr
   92AA 44 40              3864 	orl	a,#0x40
   92AC F0                 3865 	movx	@dptr,a
                           3866 ;	../../shared/src/cds_base.c:563: cdr_ui_pi_code_num = 8;
   92AD 90 67 93           3867 	mov	dptr,#_cdr_ui_pi_code_num
   92B0 74 08              3868 	mov	a,#0x08
   92B2 F0                 3869 	movx	@dptr,a
   92B3 80 4E              3870 	sjmp	00109$
   92B5                    3871 00108$:
                           3872 ;	../../shared/src/cds_base.c:565: else if( dec_ratio == 0x2) {
   92B5 BA 02 13           3873 	cjne	r2,#0x02,00105$
                           3874 ;	../../shared/src/cds_base.c:566: reg_DFE_ADAPT_EVEN_EN_LANE = 1;
                           3875 ;	../../shared/src/cds_base.c:567: reg_DFE_ADAPT_ODD_EN_LANE  = 0;
   92B8 90 24 02           3876 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   92BB E0                 3877 	movx	a,@dptr
   92BC 44 80              3878 	orl	a,#0x80
   92BE F0                 3879 	movx	@dptr,a
   92BF E0                 3880 	movx	a,@dptr
   92C0 54 BF              3881 	anl	a,#0xbf
   92C2 F0                 3882 	movx	@dptr,a
                           3883 ;	../../shared/src/cds_base.c:568: cdr_ui_pi_code_num = 4;
   92C3 90 67 93           3884 	mov	dptr,#_cdr_ui_pi_code_num
   92C6 74 04              3885 	mov	a,#0x04
   92C8 F0                 3886 	movx	@dptr,a
   92C9 80 38              3887 	sjmp	00109$
   92CB                    3888 00105$:
                           3889 ;	../../shared/src/cds_base.c:570: else if( dec_ratio == 0x1) {
   92CB BA 01 21           3890 	cjne	r2,#0x01,00102$
                           3891 ;	../../shared/src/cds_base.c:571: reg_DFE_ADAPT_EVEN_EN_LANE = 0;
                           3892 ;	../../shared/src/cds_base.c:572: reg_DFE_ADAPT_ODD_EN_LANE  = 1;
   92CE 90 24 02           3893 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   92D1 E0                 3894 	movx	a,@dptr
   92D2 54 7F              3895 	anl	a,#0x7f
   92D4 F0                 3896 	movx	@dptr,a
   92D5 E0                 3897 	movx	a,@dptr
   92D6 44 40              3898 	orl	a,#0x40
   92D8 F0                 3899 	movx	@dptr,a
                           3900 ;	../../shared/src/cds_base.c:573: cdr_ui_pi_code_num = 2;
   92D9 90 67 93           3901 	mov	dptr,#_cdr_ui_pi_code_num
   92DC 74 02              3902 	mov	a,#0x02
   92DE F0                 3903 	movx	@dptr,a
                           3904 ;	../../shared/src/cds_base.c:574: lnx_CDS_UPDATE_ODD_DIS_LANE = 1;
   92DF 90 60 A4           3905 	mov	dptr,#_CDS_CTRL_REG1
   92E2 E0                 3906 	movx	a,@dptr
   92E3 44 10              3907 	orl	a,#0x10
   92E5 F0                 3908 	movx	@dptr,a
                           3909 ;	../../shared/src/cds_base.c:575: lnx_CDS_UPDATE_F_DIS_LANE = 1;
   92E6 90 60 A4           3910 	mov	dptr,#_CDS_CTRL_REG1
   92E9 E0                 3911 	movx	a,@dptr
   92EA 44 20              3912 	orl	a,#0x20
   92EC F0                 3913 	movx	@dptr,a
   92ED 80 14              3914 	sjmp	00109$
   92EF                    3915 00102$:
                           3916 ;	../../shared/src/cds_base.c:578: reg_DFE_ADAPT_EVEN_EN_LANE = 1;
   92EF 90 24 02           3917 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   92F2 E0                 3918 	movx	a,@dptr
   92F3 44 80              3919 	orl	a,#0x80
   92F5 F0                 3920 	movx	@dptr,a
                           3921 ;	../../shared/src/cds_base.c:579: reg_DFE_ADAPT_ODD_EN_LANE  = 1;
   92F6 90 24 02           3922 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   92F9 E0                 3923 	movx	a,@dptr
   92FA 44 40              3924 	orl	a,#0x40
   92FC F0                 3925 	movx	@dptr,a
                           3926 ;	../../shared/src/cds_base.c:580: cdr_ui_pi_code_num = 1;
   92FD 90 67 93           3927 	mov	dptr,#_cdr_ui_pi_code_num
   9300 74 01              3928 	mov	a,#0x01
   9302 F0                 3929 	movx	@dptr,a
   9303                    3930 00109$:
                           3931 ;	../../shared/src/cds_base.c:583: if(reg_RX_SPEED_DIV_LANE_2_0&0x4) cdr_ui_pi_code_num <<= 1;
   9303 90 02 28           3932 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_138
   9306 E0                 3933 	movx	a,@dptr
   9307 03                 3934 	rr	a
   9308 03                 3935 	rr	a
   9309 54 07              3936 	anl	a,#0x07
   930B FB                 3937 	mov	r3,a
   930C 30 E2 0B           3938 	jnb	acc.2,00111$
   930F 90 67 93           3939 	mov	dptr,#_cdr_ui_pi_code_num
   9312 E0                 3940 	movx	a,@dptr
   9313 25 E0              3941 	add	a,acc
   9315 FB                 3942 	mov	r3,a
   9316 90 67 93           3943 	mov	dptr,#_cdr_ui_pi_code_num
   9319 F0                 3944 	movx	@dptr,a
   931A                    3945 00111$:
                           3946 ;	../../shared/src/cds_base.c:584: if(dfe_dis==0) half_ui_code = cdr_ui_pi_code_num<<5;
   931A 90 66 F7           3947 	mov	dptr,#_dfe_dis
   931D E0                 3948 	movx	a,@dptr
   931E FB                 3949 	mov	r3,a
   931F 70 0D              3950 	jnz	00113$
   9321 90 67 93           3951 	mov	dptr,#_cdr_ui_pi_code_num
   9324 E0                 3952 	movx	a,@dptr
   9325 C4                 3953 	swap	a
   9326 23                 3954 	rl	a
   9327 54 E0              3955 	anl	a,#0xe0
   9329 FB                 3956 	mov	r3,a
   932A 90 67 94           3957 	mov	dptr,#_half_ui_code
   932D F0                 3958 	movx	@dptr,a
   932E                    3959 00113$:
                           3960 ;	../../shared/src/cds_base.c:586: if(dec_ratio==0) {
   932E EA                 3961 	mov	a,r2
   932F 70 10              3962 	jnz	00115$
                           3963 ;	../../shared/src/cds_base.c:587: reg_DFE_EVEN_ODD_SIM_ADAPT_LANE = 1;
   9331 90 24 02           3964 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   9334 E0                 3965 	movx	a,@dptr
   9335 44 20              3966 	orl	a,#0x20
   9337 F0                 3967 	movx	@dptr,a
                           3968 ;	../../shared/src/cds_base.c:588: lnx_CDS_ADAPT_SPLR_DIS_LANE_3_0 = 0;
   9338 90 60 A4           3969 	mov	dptr,#_CDS_CTRL_REG1
   933B E0                 3970 	movx	a,@dptr
   933C 54 F0              3971 	anl	a,#0xf0
   933E F0                 3972 	movx	@dptr,a
   933F 80 10              3973 	sjmp	00117$
   9341                    3974 00115$:
                           3975 ;	../../shared/src/cds_base.c:591: reg_DFE_EVEN_ODD_SIM_ADAPT_LANE = 0;
   9341 90 24 02           3976 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   9344 E0                 3977 	movx	a,@dptr
   9345 54 DF              3978 	anl	a,#0xdf
   9347 F0                 3979 	movx	@dptr,a
                           3980 ;	../../shared/src/cds_base.c:592: lnx_CDS_ADAPT_SPLR_DIS_LANE_3_0 = 5;
   9348 90 60 A4           3981 	mov	dptr,#_CDS_CTRL_REG1
   934B E0                 3982 	movx	a,@dptr
   934C 54 F0              3983 	anl	a,#0xf0
   934E 44 05              3984 	orl	a,#0x05
   9350 F0                 3985 	movx	@dptr,a
   9351                    3986 00117$:
   9351 02 00 C5           3987 	ljmp	__sdcc_banked_ret
                           3988 ;------------------------------------------------------------
                           3989 ;Allocation info for local variables in function 'dfe_fsm'
                           3990 ;------------------------------------------------------------
                           3991 ;tap_en                    Allocated to stack - offset -4
                           3992 ;lpnum                     Allocated to registers r2 r3 
                           3993 ;adapt_lpnum               Allocated to registers r4 
                           3994 ;pol_lpnum                 Allocated to registers r2 
                           3995 ;------------------------------------------------------------
                           3996 ;	../../shared/src/cds_base.c:614: void dfe_fsm(uint16_t lpnum, uint8_t tap_en) BANKING_CTRL {
                           3997 ;	-----------------------------------------
                           3998 ;	 function dfe_fsm
                           3999 ;	-----------------------------------------
   9354                    4000 _dfe_fsm:
   9354 C0 18              4001 	push	_bp
   9356 85 81 18           4002 	mov	_bp,sp
   9359 AA 82              4003 	mov	r2,dpl
   935B AB 83              4004 	mov	r3,dph
                           4005 ;	../../shared/src/cds_base.c:618: if( lnx_DFE_CORE_BYPASS_LANE==1 || dfe_dis == 1 || pin_dfe_en==0) return;
   935D 90 60 38           4006 	mov	dptr,#_DFE_CONTROL_1
   9360 E0                 4007 	movx	a,@dptr
   9361 23                 4008 	rl	a
   9362 23                 4009 	rl	a
   9363 54 01              4010 	anl	a,#0x01
   9365 FC                 4011 	mov	r4,a
   9366 BC 01 02           4012 	cjne	r4,#0x01,00162$
   9369 80 11              4013 	sjmp	00101$
   936B                    4014 00162$:
   936B 90 66 F7           4015 	mov	dptr,#_dfe_dis
   936E E0                 4016 	movx	a,@dptr
   936F FC                 4017 	mov	r4,a
   9370 BC 01 02           4018 	cjne	r4,#0x01,00163$
   9373 80 07              4019 	sjmp	00101$
   9375                    4020 00163$:
   9375 90 24 11           4021 	mov	dptr,#(_RX_EQ_CLK_CTRL + 0x0001)
   9378 E0                 4022 	movx	a,@dptr
   9379 20 E1 03           4023 	jb	acc.1,00102$
   937C                    4024 00101$:
   937C 02 95 EC           4025 	ljmp	00144$
   937F                    4026 00102$:
                           4027 ;	../../shared/src/cds_base.c:621: if(lnx_FAST_DFE_TIMER_EN_LANE)
   937F 90 60 4F           4028 	mov	dptr,#(_DFE_CONTROL_5 + 0x0003)
   9382 E0                 4029 	movx	a,@dptr
   9383 30 E7 1C           4030 	jnb	acc.7,00106$
                           4031 ;	../../shared/src/cds_base.c:623: reg_DFE_ADAPT_LPNUM_LANE_9_0_b0 = 0;
   9386 90 24 05           4032 	mov	dptr,#(_DFE_CTRL_REG1 + 0x0001)
   9389 E0                 4033 	movx	a,@dptr
   938A 54 0F              4034 	anl	a,#0x0f
   938C F0                 4035 	movx	@dptr,a
                           4036 ;	../../shared/src/cds_base.c:624: reg_DFE_ADAPT_LPNUM_LANE_9_0_b1 = 0;
   938D 90 24 06           4037 	mov	dptr,#(_DFE_CTRL_REG1 + 0x0002)
   9390 E0                 4038 	movx	a,@dptr
   9391 54 C0              4039 	anl	a,#0xc0
   9393 F0                 4040 	movx	@dptr,a
                           4041 ;	../../shared/src/cds_base.c:625: reg_DFE_POL_LPNUM_LANE_9_0_b0 = 0;
   9394 90 24 06           4042 	mov	dptr,#(_DFE_CTRL_REG1 + 0x0002)
   9397 E0                 4043 	movx	a,@dptr
   9398 54 3F              4044 	anl	a,#0x3f
   939A F0                 4045 	movx	@dptr,a
                           4046 ;	../../shared/src/cds_base.c:626: reg_DFE_POL_LPNUM_LANE_9_0_b1 = 0;
   939B 90 24 07           4047 	mov	dptr,#(_DFE_CTRL_REG1 + 0x0003)
   939E E4                 4048 	clr	a
   939F F0                 4049 	movx	@dptr,a
   93A0 80 4A              4050 	sjmp	00107$
   93A2                    4051 00106$:
                           4052 ;	../../shared/src/cds_base.c:629: adapt_lpnum = (uint8_t)(lpnum >> 8);
   93A2 8B 04              4053 	mov	ar4,r3
                           4054 ;	../../shared/src/cds_base.c:630: pol_lpnum = (uint8_t)lpnum;
                           4055 ;	../../shared/src/cds_base.c:632: reg_DFE_ADAPT_LPNUM_LANE_9_0_b0 = (uint8_t)(adapt_lpnum&0x0f);
   93A4 74 0F              4056 	mov	a,#0x0F
   93A6 5C                 4057 	anl	a,r4
   93A7 90 24 05           4058 	mov	dptr,#(_DFE_CTRL_REG1 + 0x0001)
   93AA C4                 4059 	swap	a
   93AB 54 F0              4060 	anl	a,#(0xf0&0xf0)
   93AD F5 F0              4061 	mov	b,a
   93AF E0                 4062 	movx	a,@dptr
   93B0 54 0F              4063 	anl	a,#0x0f
   93B2 45 F0              4064 	orl	a,b
   93B4 F0                 4065 	movx	@dptr,a
                           4066 ;	../../shared/src/cds_base.c:633: reg_DFE_ADAPT_LPNUM_LANE_9_0_b1 = ((uint8_t)(adapt_lpnum>>4)&0x3f);
   93B5 EC                 4067 	mov	a,r4
   93B6 C4                 4068 	swap	a
   93B7 54 0F              4069 	anl	a,#0x0f
   93B9 FC                 4070 	mov	r4,a
   93BA 53 04 3F           4071 	anl	ar4,#0x3F
   93BD 90 24 06           4072 	mov	dptr,#(_DFE_CTRL_REG1 + 0x0002)
   93C0 EC                 4073 	mov	a,r4
   93C1 54 3F              4074 	anl	a,#0x3f
   93C3 F5 F0              4075 	mov	b,a
   93C5 E0                 4076 	movx	a,@dptr
   93C6 54 C0              4077 	anl	a,#0xc0
   93C8 45 F0              4078 	orl	a,b
   93CA F0                 4079 	movx	@dptr,a
                           4080 ;	../../shared/src/cds_base.c:634: reg_DFE_POL_LPNUM_LANE_9_0_b0 = (uint8_t)(pol_lpnum&0x03);;
   93CB 74 03              4081 	mov	a,#0x03
   93CD 5A                 4082 	anl	a,r2
   93CE FB                 4083 	mov	r3,a
   93CF 90 24 06           4084 	mov	dptr,#(_DFE_CTRL_REG1 + 0x0002)
   93D2 03                 4085 	rr	a
   93D3 03                 4086 	rr	a
   93D4 54 C0              4087 	anl	a,#(0xc0&0xc0)
   93D6 F5 F0              4088 	mov	b,a
   93D8 E0                 4089 	movx	a,@dptr
   93D9 54 3F              4090 	anl	a,#0x3f
   93DB 45 F0              4091 	orl	a,b
   93DD F0                 4092 	movx	@dptr,a
                           4093 ;	../../shared/src/cds_base.c:635: reg_DFE_POL_LPNUM_LANE_9_0_b1 = (uint8_t)((pol_lpnum>>2)&0x3f);
   93DE EA                 4094 	mov	a,r2
   93DF 03                 4095 	rr	a
   93E0 03                 4096 	rr	a
   93E1 54 3F              4097 	anl	a,#0x3f
   93E3 FA                 4098 	mov	r2,a
   93E4 53 02 3F           4099 	anl	ar2,#0x3F
   93E7 90 24 07           4100 	mov	dptr,#(_DFE_CTRL_REG1 + 0x0003)
   93EA EA                 4101 	mov	a,r2
   93EB F0                 4102 	movx	@dptr,a
   93EC                    4103 00107$:
                           4104 ;	../../shared/src/cds_base.c:638: switch(tap_en)
   93EC E5 18              4105 	mov	a,_bp
   93EE 24 FC              4106 	add	a,#0xfc
   93F0 F8                 4107 	mov	r0,a
   93F1 E6                 4108 	mov	a,@r0
   93F2 24 F9              4109 	add	a,#0xff - 0x06
   93F4 50 03              4110 	jnc	00166$
   93F6 02 94 D0           4111 	ljmp	00115$
   93F9                    4112 00166$:
   93F9 E5 18              4113 	mov	a,_bp
   93FB 24 FC              4114 	add	a,#0xfc
   93FD F8                 4115 	mov	r0,a
   93FE E6                 4116 	mov	a,@r0
   93FF 25 E0              4117 	add	a,acc
   9401 26                 4118 	add	a,@r0
   9402 90 94 06           4119 	mov	dptr,#00167$
   9405 73                 4120 	jmp	@a+dptr
   9406                    4121 00167$:
   9406 02 94 1B           4122 	ljmp	00108$
   9409 02 94 37           4123 	ljmp	00109$
   940C 02 94 54           4124 	ljmp	00110$
   940F 02 94 6D           4125 	ljmp	00111$
   9412 02 94 83           4126 	ljmp	00112$
   9415 02 94 9C           4127 	ljmp	00113$
   9418 02 94 B5           4128 	ljmp	00114$
                           4129 ;	../../shared/src/cds_base.c:640: case 0: // F0
   941B                    4130 00108$:
                           4131 ;	../../shared/src/cds_base.c:641: reg_DFE_UPDATE_EN_LANE_15_0_b0 = 1;
   941B 90 24 08           4132 	mov	dptr,#_DFE_CTRL_REG2
   941E 74 01              4133 	mov	a,#0x01
   9420 F0                 4134 	movx	@dptr,a
                           4135 ;	../../shared/src/cds_base.c:642: reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0;
   9421 90 24 09           4136 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0001)
   9424 E4                 4137 	clr	a
   9425 F0                 4138 	movx	@dptr,a
                           4139 ;	../../shared/src/cds_base.c:643: reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;
   9426 90 24 0A           4140 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0002)
   9429 E0                 4141 	movx	a,@dptr
   942A 54 C0              4142 	anl	a,#0xc0
   942C F0                 4143 	movx	@dptr,a
                           4144 ;	../../shared/src/cds_base.c:644: reg_DFE_UPDATE_DC_EN_LANE = 0;
   942D 90 24 0A           4145 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0002)
   9430 E0                 4146 	movx	a,@dptr
   9431 54 BF              4147 	anl	a,#0xbf
   9433 F0                 4148 	movx	@dptr,a
                           4149 ;	../../shared/src/cds_base.c:645: break;
   9434 02 94 E7           4150 	ljmp	00116$
                           4151 ;	../../shared/src/cds_base.c:646: case 1: // Fixed
   9437                    4152 00109$:
                           4153 ;	../../shared/src/cds_base.c:647: reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0xff;
   9437 90 24 08           4154 	mov	dptr,#_DFE_CTRL_REG2
   943A 74 FF              4155 	mov	a,#0xFF
   943C F0                 4156 	movx	@dptr,a
                           4157 ;	../../shared/src/cds_base.c:648: reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0xff;
   943D 90 24 09           4158 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0001)
   9440 74 FF              4159 	mov	a,#0xFF
   9442 F0                 4160 	movx	@dptr,a
                           4161 ;	../../shared/src/cds_base.c:649: reg_DFE_UPDATE_F_EN_LANE_5_0 = 0x00;
   9443 90 24 0A           4162 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0002)
   9446 E0                 4163 	movx	a,@dptr
   9447 54 C0              4164 	anl	a,#0xc0
   9449 F0                 4165 	movx	@dptr,a
                           4166 ;	../../shared/src/cds_base.c:650: reg_DFE_UPDATE_DC_EN_LANE = 0;
   944A 90 24 0A           4167 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0002)
   944D E0                 4168 	movx	a,@dptr
   944E 54 BF              4169 	anl	a,#0xbf
   9450 F0                 4170 	movx	@dptr,a
                           4171 ;	../../shared/src/cds_base.c:651: break;
   9451 02 94 E7           4172 	ljmp	00116$
                           4173 ;	../../shared/src/cds_base.c:652: case 2: // All
   9454                    4174 00110$:
                           4175 ;	../../shared/src/cds_base.c:653: reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0xff;
   9454 90 24 08           4176 	mov	dptr,#_DFE_CTRL_REG2
   9457 74 FF              4177 	mov	a,#0xFF
   9459 F0                 4178 	movx	@dptr,a
                           4179 ;	../../shared/src/cds_base.c:654: reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0xff;
   945A 90 24 09           4180 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0001)
   945D 74 FF              4181 	mov	a,#0xFF
   945F F0                 4182 	movx	@dptr,a
                           4183 ;	../../shared/src/cds_base.c:655: reg_DFE_UPDATE_F_EN_LANE_5_0 = 0x3f;
                           4184 ;	../../shared/src/cds_base.c:656: reg_DFE_UPDATE_DC_EN_LANE = 0;
   9460 90 24 0A           4185 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0002)
   9463 E0                 4186 	movx	a,@dptr
   9464 44 3F              4187 	orl	a,#0x3f
   9466 F0                 4188 	movx	@dptr,a
   9467 E0                 4189 	movx	a,@dptr
   9468 54 BF              4190 	anl	a,#0xbf
   946A F0                 4191 	movx	@dptr,a
                           4192 ;	../../shared/src/cds_base.c:657: break;
                           4193 ;	../../shared/src/cds_base.c:658: case 3: // DC only
   946B 80 7A              4194 	sjmp	00116$
   946D                    4195 00111$:
                           4196 ;	../../shared/src/cds_base.c:659: reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0; //0xfd;
   946D 90 24 08           4197 	mov	dptr,#_DFE_CTRL_REG2
                           4198 ;	../../shared/src/cds_base.c:660: reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0; //0xff;
   9470 E4                 4199 	clr	a
   9471 F0                 4200 	movx	@dptr,a
   9472 90 24 09           4201 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0001)
   9475 F0                 4202 	movx	@dptr,a
                           4203 ;	../../shared/src/cds_base.c:661: reg_DFE_UPDATE_F_EN_LANE_5_0 = 0; //0x3f;
                           4204 ;	../../shared/src/cds_base.c:662: reg_DFE_UPDATE_DC_EN_LANE = 1;
   9476 90 24 0A           4205 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0002)
   9479 E0                 4206 	movx	a,@dptr
   947A 54 C0              4207 	anl	a,#0xc0
   947C F0                 4208 	movx	@dptr,a
   947D E0                 4209 	movx	a,@dptr
   947E 44 40              4210 	orl	a,#0x40
   9480 F0                 4211 	movx	@dptr,a
                           4212 ;	../../shared/src/cds_base.c:663: break;
                           4213 ;	../../shared/src/cds_base.c:664: case 4: // All wo f1
   9481 80 64              4214 	sjmp	00116$
   9483                    4215 00112$:
                           4216 ;	../../shared/src/cds_base.c:665: reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0xfd;
   9483 90 24 08           4217 	mov	dptr,#_DFE_CTRL_REG2
   9486 74 FD              4218 	mov	a,#0xFD
   9488 F0                 4219 	movx	@dptr,a
                           4220 ;	../../shared/src/cds_base.c:666: reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0xff;
   9489 90 24 09           4221 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0001)
   948C 74 FF              4222 	mov	a,#0xFF
   948E F0                 4223 	movx	@dptr,a
                           4224 ;	../../shared/src/cds_base.c:667: reg_DFE_UPDATE_F_EN_LANE_5_0 = 0x3f;
                           4225 ;	../../shared/src/cds_base.c:668: reg_DFE_UPDATE_DC_EN_LANE = 0;
   948F 90 24 0A           4226 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0002)
   9492 E0                 4227 	movx	a,@dptr
   9493 44 3F              4228 	orl	a,#0x3f
   9495 F0                 4229 	movx	@dptr,a
   9496 E0                 4230 	movx	a,@dptr
   9497 54 BF              4231 	anl	a,#0xbf
   9499 F0                 4232 	movx	@dptr,a
                           4233 ;	../../shared/src/cds_base.c:669: break;
                           4234 ;	../../shared/src/cds_base.c:670: case 5: // f4-f15
   949A 80 4B              4235 	sjmp	00116$
   949C                    4236 00113$:
                           4237 ;	../../shared/src/cds_base.c:671: reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0xf0;
   949C 90 24 08           4238 	mov	dptr,#_DFE_CTRL_REG2
   949F 74 F0              4239 	mov	a,#0xF0
   94A1 F0                 4240 	movx	@dptr,a
                           4241 ;	../../shared/src/cds_base.c:672: reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0xff;
   94A2 90 24 09           4242 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0001)
   94A5 74 FF              4243 	mov	a,#0xFF
   94A7 F0                 4244 	movx	@dptr,a
                           4245 ;	../../shared/src/cds_base.c:673: reg_DFE_UPDATE_F_EN_LANE_5_0 = 0x3f;
                           4246 ;	../../shared/src/cds_base.c:674: reg_DFE_UPDATE_DC_EN_LANE = 0;
   94A8 90 24 0A           4247 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0002)
   94AB E0                 4248 	movx	a,@dptr
   94AC 44 3F              4249 	orl	a,#0x3f
   94AE F0                 4250 	movx	@dptr,a
   94AF E0                 4251 	movx	a,@dptr
   94B0 54 BF              4252 	anl	a,#0xbf
   94B2 F0                 4253 	movx	@dptr,a
                           4254 ;	../../shared/src/cds_base.c:675: break;
                           4255 ;	../../shared/src/cds_base.c:676: case 6: // f0/f2/f3/ofst
   94B3 80 32              4256 	sjmp	00116$
   94B5                    4257 00114$:
                           4258 ;	../../shared/src/cds_base.c:677: reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0x0d;
   94B5 90 24 08           4259 	mov	dptr,#_DFE_CTRL_REG2
   94B8 74 0D              4260 	mov	a,#0x0D
   94BA F0                 4261 	movx	@dptr,a
                           4262 ;	../../shared/src/cds_base.c:678: reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0x00;
   94BB 90 24 09           4263 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0001)
   94BE E4                 4264 	clr	a
   94BF F0                 4265 	movx	@dptr,a
                           4266 ;	../../shared/src/cds_base.c:679: reg_DFE_UPDATE_F_EN_LANE_5_0 = 0x3f;
   94C0 90 24 0A           4267 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0002)
   94C3 E0                 4268 	movx	a,@dptr
   94C4 44 3F              4269 	orl	a,#0x3f
   94C6 F0                 4270 	movx	@dptr,a
                           4271 ;	../../shared/src/cds_base.c:680: reg_DFE_UPDATE_DC_EN_LANE = 1;
   94C7 90 24 0A           4272 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0002)
   94CA E0                 4273 	movx	a,@dptr
   94CB 44 40              4274 	orl	a,#0x40
   94CD F0                 4275 	movx	@dptr,a
                           4276 ;	../../shared/src/cds_base.c:681: break;
                           4277 ;	../../shared/src/cds_base.c:682: default:
   94CE 80 17              4278 	sjmp	00116$
   94D0                    4279 00115$:
                           4280 ;	../../shared/src/cds_base.c:683: reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0;
   94D0 90 24 08           4281 	mov	dptr,#_DFE_CTRL_REG2
                           4282 ;	../../shared/src/cds_base.c:684: reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0;
   94D3 E4                 4283 	clr	a
   94D4 F0                 4284 	movx	@dptr,a
   94D5 90 24 09           4285 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0001)
   94D8 F0                 4286 	movx	@dptr,a
                           4287 ;	../../shared/src/cds_base.c:685: reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;
   94D9 90 24 0A           4288 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0002)
   94DC E0                 4289 	movx	a,@dptr
   94DD 54 C0              4290 	anl	a,#0xc0
   94DF F0                 4291 	movx	@dptr,a
                           4292 ;	../../shared/src/cds_base.c:686: reg_DFE_UPDATE_DC_EN_LANE = 0;
   94E0 90 24 0A           4293 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0002)
   94E3 E0                 4294 	movx	a,@dptr
   94E4 54 BF              4295 	anl	a,#0xbf
   94E6 F0                 4296 	movx	@dptr,a
                           4297 ;	../../shared/src/cds_base.c:687: }
   94E7                    4298 00116$:
                           4299 ;	../../shared/src/cds_base.c:689: if(tap_en != Updateoff) {
   94E7 E5 18              4300 	mov	a,_bp
   94E9 24 FC              4301 	add	a,#0xfc
   94EB F8                 4302 	mov	r0,a
   94EC B6 FF 02           4303 	cjne	@r0,#0xFF,00168$
   94EF 80 4D              4304 	sjmp	00125$
   94F1                    4305 00168$:
                           4306 ;	../../shared/src/cds_base.c:690: if(lnx_LOCK_DFE_ON_LANE)
   94F1 90 60 A0           4307 	mov	dptr,#_CDS_CTRL_REG0
   94F4 E0                 4308 	movx	a,@dptr
   94F5 30 E2 1B           4309 	jnb	acc.2,00122$
                           4310 ;	../../shared/src/cds_base.c:692: reg_DFE_UPDATE_EN_LANE_15_0_b0 &= 0x1;
   94F8 90 24 08           4311 	mov	dptr,#_DFE_CTRL_REG2
   94FB E0                 4312 	movx	a,@dptr
   94FC FA                 4313 	mov	r2,a
   94FD 53 02 01           4314 	anl	ar2,#0x01
   9500 90 24 08           4315 	mov	dptr,#_DFE_CTRL_REG2
   9503 EA                 4316 	mov	a,r2
   9504 F0                 4317 	movx	@dptr,a
                           4318 ;	../../shared/src/cds_base.c:693: reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0;
   9505 90 24 09           4319 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0001)
   9508 E4                 4320 	clr	a
   9509 F0                 4321 	movx	@dptr,a
                           4322 ;	../../shared/src/cds_base.c:694: reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;
   950A 90 24 0A           4323 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0002)
   950D E0                 4324 	movx	a,@dptr
   950E 54 C0              4325 	anl	a,#0xc0
   9510 F0                 4326 	movx	@dptr,a
   9511 80 2B              4327 	sjmp	00125$
   9513                    4328 00122$:
                           4329 ;	../../shared/src/cds_base.c:698: if(lnx_CDS_UPDATE_F_DIS_LANE)
   9513 90 60 A4           4330 	mov	dptr,#_CDS_CTRL_REG1
   9516 E0                 4331 	movx	a,@dptr
   9517 30 E5 07           4332 	jnb	acc.5,00118$
                           4333 ;	../../shared/src/cds_base.c:699: reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;
   951A 90 24 0A           4334 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0002)
   951D E0                 4335 	movx	a,@dptr
   951E 54 C0              4336 	anl	a,#0xc0
   9520 F0                 4337 	movx	@dptr,a
   9521                    4338 00118$:
                           4339 ;	../../shared/src/cds_base.c:700: if(lnx_CDS_UPDATE_ODD_DIS_LANE)
   9521 90 60 A4           4340 	mov	dptr,#_CDS_CTRL_REG1
   9524 E0                 4341 	movx	a,@dptr
   9525 30 E4 16           4342 	jnb	acc.4,00125$
                           4343 ;	../../shared/src/cds_base.c:701: reg_DFE_UPDATE_EN_LANE_15_0 &= 0x5555;
   9528 90 24 08           4344 	mov	dptr,#_DFE_CTRL_REG2
   952B E0                 4345 	movx	a,@dptr
   952C FA                 4346 	mov	r2,a
   952D A3                 4347 	inc	dptr
   952E E0                 4348 	movx	a,@dptr
   952F FB                 4349 	mov	r3,a
   9530 53 02 55           4350 	anl	ar2,#0x55
   9533 53 03 55           4351 	anl	ar3,#0x55
   9536 90 24 08           4352 	mov	dptr,#_DFE_CTRL_REG2
   9539 EA                 4353 	mov	a,r2
   953A F0                 4354 	movx	@dptr,a
   953B A3                 4355 	inc	dptr
   953C EB                 4356 	mov	a,r3
   953D F0                 4357 	movx	@dptr,a
   953E                    4358 00125$:
                           4359 ;	../../shared/src/cds_base.c:707: if(reg_CLK_RXACCAP_SEL_LANE_1_0!=2) //slow settling
   953E 90 02 64           4360 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_153
   9541 E0                 4361 	movx	a,@dptr
   9542 C4                 4362 	swap	a
   9543 23                 4363 	rl	a
   9544 54 03              4364 	anl	a,#0x03
   9546 FA                 4365 	mov	r2,a
   9547 BA 02 02           4366 	cjne	r2,#0x02,00172$
   954A 80 0D              4367 	sjmp	00127$
   954C                    4368 00172$:
                           4369 ;	../../shared/src/cds_base.c:708: reg_DFE_UPDATE_EN_LANE_15_0_b0 &= 0xfd;
   954C 90 24 08           4370 	mov	dptr,#_DFE_CTRL_REG2
   954F E0                 4371 	movx	a,@dptr
   9550 FA                 4372 	mov	r2,a
   9551 53 02 FD           4373 	anl	ar2,#0xFD
   9554 90 24 08           4374 	mov	dptr,#_DFE_CTRL_REG2
   9557 EA                 4375 	mov	a,r2
   9558 F0                 4376 	movx	@dptr,a
   9559                    4377 00127$:
                           4378 ;	../../shared/src/cds_base.c:710: reg_DFE_START_LANE = 0;
                           4379 ;	../../shared/src/cds_base.c:711: reg_DFE_START_LANE = 1;
   9559 90 24 02           4380 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   955C E0                 4381 	movx	a,@dptr
   955D 54 FE              4382 	anl	a,#0xfe
   955F F0                 4383 	movx	@dptr,a
   9560 E0                 4384 	movx	a,@dptr
   9561 44 01              4385 	orl	a,#0x01
   9563 F0                 4386 	movx	@dptr,a
                           4387 ;	../../shared/src/cds_base.c:712: short_delay();
   9564 78 05              4388 	mov	r0,#_short_delay
   9566 79 C0              4389 	mov	r1,#(_short_delay >> 8)
   9568 7A 02              4390 	mov	r2,#(_short_delay >> 16)
   956A 12 00 B3           4391 	lcall	__sdcc_banked_call
                           4392 ;	../../shared/src/cds_base.c:713: if(lnx_BYPASS_DFE_HANG_CHECK_LANE==0) {
   956D 90 60 98           4393 	mov	dptr,#_DFE_CONTROL_10
   9570 E0                 4394 	movx	a,@dptr
   9571 20 E4 53           4395 	jb	acc.4,00138$
                           4396 ;	../../shared/src/cds_base.c:714: if(do_rxinit){ timeout_start(8); }
   9574 30 08 0C           4397 	jnb	_do_rxinit,00129$
   9577 75 8B F8           4398 	mov	_TMR1,#0xF8
   957A 75 8D FF           4399 	mov	(_TMR1 >> 8),#0xFF
   957D D2 8E              4400 	setb	_TR1
   957F C2 03              4401 	clr	_timeout
   9581 80 0A              4402 	sjmp	00133$
   9583                    4403 00129$:
                           4404 ;	../../shared/src/cds_base.c:715: else { timeout_start(1000);     }
   9583 75 8B 18           4405 	mov	_TMR1,#0x18
   9586 75 8D FC           4406 	mov	(_TMR1 >> 8),#0xFC
   9589 D2 8E              4407 	setb	_TR1
   958B C2 03              4408 	clr	_timeout
                           4409 ;	../../shared/src/cds_base.c:716: while(!reg_DFE_DONE_LANE) {
   958D                    4410 00133$:
   958D 90 24 02           4411 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   9590 E0                 4412 	movx	a,@dptr
   9591 20 E1 03           4413 	jb	acc.1,00135$
                           4414 ;	../../shared/src/cds_base.c:717: if(timeout) break;
   9594 30 03 F6           4415 	jnb	_timeout,00133$
   9597                    4416 00135$:
                           4417 ;	../../shared/src/cds_base.c:719: reg_DFE_START_LANE = 0;
   9597 90 24 02           4418 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   959A E0                 4419 	movx	a,@dptr
   959B 54 FE              4420 	anl	a,#0xfe
   959D F0                 4421 	movx	@dptr,a
                           4422 ;	../../shared/src/cds_base.c:720: if(timeout) {
   959E 30 03 20           4423 	jnb	_timeout,00137$
                           4424 ;	../../shared/src/cds_base.c:721: reg_MCU_DEBUGE_LANE_7_0++;
   95A1 90 22 C2           4425 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0002)
   95A4 E0                 4426 	movx	a,@dptr
   95A5 FA                 4427 	mov	r2,a
   95A6 0A                 4428 	inc	r2
   95A7 90 22 C2           4429 	mov	dptr,#(_MCU_DEBUG3_LANE + 0x0002)
   95AA EA                 4430 	mov	a,r2
   95AB F0                 4431 	movx	@dptr,a
                           4432 ;	../../shared/src/cds_base.c:736: lnx_CDS_ERR_CODE_LANE_7_0 |= 0x1;
   95AC 90 60 A3           4433 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0003)
   95AF E0                 4434 	movx	a,@dptr
   95B0 FA                 4435 	mov	r2,a
   95B1 43 02 01           4436 	orl	ar2,#0x01
   95B4 90 60 A3           4437 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0003)
   95B7 EA                 4438 	mov	a,r2
   95B8 F0                 4439 	movx	@dptr,a
                           4440 ;	../../shared/src/cds_base.c:737: timeout = 0;
   95B9 C2 03              4441 	clr	_timeout
                           4442 ;	../../shared/src/cds_base.c:738: dfe_err_found = 1;
   95BB 90 67 99           4443 	mov	dptr,#_dfe_err_found
   95BE 74 01              4444 	mov	a,#0x01
   95C0 F0                 4445 	movx	@dptr,a
   95C1                    4446 00137$:
                           4447 ;	../../shared/src/cds_base.c:740: timeout_stop;
   95C1 C2 8E              4448 	clr	_TR1
   95C3 C2 8F              4449 	clr	_TF1
                           4450 ;	../../shared/src/cds_base.c:743: while(!reg_DFE_DONE_LANE);
   95C5 80 0E              4451 	sjmp	00143$
   95C7                    4452 00138$:
   95C7 90 24 02           4453 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   95CA E0                 4454 	movx	a,@dptr
   95CB 30 E1 F9           4455 	jnb	acc.1,00138$
                           4456 ;	../../shared/src/cds_base.c:744: reg_DFE_START_LANE = 0;
   95CE 90 24 02           4457 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   95D1 E0                 4458 	movx	a,@dptr
   95D2 54 FE              4459 	anl	a,#0xfe
   95D4 F0                 4460 	movx	@dptr,a
   95D5                    4461 00143$:
                           4462 ;	../../shared/src/cds_base.c:752: reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0;
   95D5 90 24 08           4463 	mov	dptr,#_DFE_CTRL_REG2
                           4464 ;	../../shared/src/cds_base.c:753: reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0;
   95D8 E4                 4465 	clr	a
   95D9 F0                 4466 	movx	@dptr,a
   95DA 90 24 09           4467 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0001)
   95DD F0                 4468 	movx	@dptr,a
                           4469 ;	../../shared/src/cds_base.c:754: reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;
   95DE 90 24 0A           4470 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0002)
   95E1 E0                 4471 	movx	a,@dptr
   95E2 54 C0              4472 	anl	a,#0xc0
   95E4 F0                 4473 	movx	@dptr,a
                           4474 ;	../../shared/src/cds_base.c:755: reg_DFE_UPDATE_DC_EN_LANE = 0;
   95E5 90 24 0A           4475 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0002)
   95E8 E0                 4476 	movx	a,@dptr
   95E9 54 BF              4477 	anl	a,#0xbf
   95EB F0                 4478 	movx	@dptr,a
                           4479 ;	../../shared/src/cds_base.c:756: return;
   95EC                    4480 00144$:
   95EC D0 18              4481 	pop	_bp
   95EE 02 00 C5           4482 	ljmp	__sdcc_banked_ret
                           4483 ;------------------------------------------------------------
                           4484 ;Allocation info for local variables in function 'dc_load'
                           4485 ;------------------------------------------------------------
                           4486 ;type                      Allocated to registers r2 
                           4487 ;------------------------------------------------------------
                           4488 ;	../../shared/src/cds_base.c:774: void dc_load(uint8_t type) BANKING_CTRL
                           4489 ;	-----------------------------------------
                           4490 ;	 function dc_load
                           4491 ;	-----------------------------------------
   95F1                    4492 _dc_load:
   95F1 AA 82              4493 	mov	r2,dpl
                           4494 ;	../../shared/src/cds_base.c:776: reg_OFST_RES_LANE_1_0 = lnx_CAL_SAMPLER_RES_LANE_7_0;
   95F3 90 60 16           4495 	mov	dptr,#(_CAL_SAVE_DATA2_LANE + 0x0002)
   95F6 E0                 4496 	movx	a,@dptr
   95F7 FB                 4497 	mov	r3,a
   95F8 90 02 24           4498 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_137
   95FB C4                 4499 	swap	a
   95FC 23                 4500 	rl	a
   95FD 54 60              4501 	anl	a,#(0xe0&0x60)
   95FF F5 F0              4502 	mov	b,a
   9601 E0                 4503 	movx	a,@dptr
   9602 54 9F              4504 	anl	a,#0x9f
   9604 45 F0              4505 	orl	a,b
   9606 F0                 4506 	movx	@dptr,a
                           4507 ;	../../shared/src/cds_base.c:778: if(type==1)
   9607 BA 01 02           4508 	cjne	r2,#0x01,00116$
   960A 80 03              4509 	sjmp	00117$
   960C                    4510 00116$:
   960C 02 96 A1           4511 	ljmp	00102$
   960F                    4512 00117$:
                           4513 ;	../../shared/src/cds_base.c:780: reg_DFE_INIT_SEL_LANE = 1; //load from fext
   960F 90 24 03           4514 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0003)
   9612 E0                 4515 	movx	a,@dptr
   9613 44 40              4516 	orl	a,#0x40
   9615 F0                 4517 	movx	@dptr,a
                           4518 ;	../../shared/src/cds_base.c:783: reg_DFE_FEXTDC_D_P_E_LANE_6_0 = dfe_sm_dc.dc_d_p_e;
   9616 90 61 B8           4519 	mov	dptr,#_dfe_sm_dc
   9619 E0                 4520 	movx	a,@dptr
   961A 90 24 38           4521 	mov	dptr,#_DFE_DC_EVEN_REG8
   961D 54 7F              4522 	anl	a,#0x7f
   961F F5 F0              4523 	mov	b,a
   9621 E0                 4524 	movx	a,@dptr
   9622 54 80              4525 	anl	a,#0x80
   9624 45 F0              4526 	orl	a,b
   9626 F0                 4527 	movx	@dptr,a
                           4528 ;	../../shared/src/cds_base.c:784: reg_DFE_FEXTDC_D_N_E_LANE_6_0 = dfe_sm_dc.dc_d_n_e;
   9627 90 61 B9           4529 	mov	dptr,#(_dfe_sm_dc + 0x0001)
   962A E0                 4530 	movx	a,@dptr
   962B 90 24 39           4531 	mov	dptr,#(_DFE_DC_EVEN_REG8 + 0x0001)
   962E 54 7F              4532 	anl	a,#0x7f
   9630 F5 F0              4533 	mov	b,a
   9632 E0                 4534 	movx	a,@dptr
   9633 54 80              4535 	anl	a,#0x80
   9635 45 F0              4536 	orl	a,b
   9637 F0                 4537 	movx	@dptr,a
                           4538 ;	../../shared/src/cds_base.c:785: reg_DFE_FEXTDC_S_P_E_LANE_6_0 = dfe_sm_dc.dc_s_p_e;
   9638 90 61 BA           4539 	mov	dptr,#(_dfe_sm_dc + 0x0002)
   963B E0                 4540 	movx	a,@dptr
   963C 90 24 3A           4541 	mov	dptr,#(_DFE_DC_EVEN_REG8 + 0x0002)
   963F 54 7F              4542 	anl	a,#0x7f
   9641 F5 F0              4543 	mov	b,a
   9643 E0                 4544 	movx	a,@dptr
   9644 54 80              4545 	anl	a,#0x80
   9646 45 F0              4546 	orl	a,b
   9648 F0                 4547 	movx	@dptr,a
                           4548 ;	../../shared/src/cds_base.c:786: reg_DFE_FEXTDC_S_N_E_LANE_6_0 = dfe_sm_dc.dc_s_n_e;
   9649 90 61 BB           4549 	mov	dptr,#(_dfe_sm_dc + 0x0003)
   964C E0                 4550 	movx	a,@dptr
   964D 90 24 3B           4551 	mov	dptr,#(_DFE_DC_EVEN_REG8 + 0x0003)
   9650 54 7F              4552 	anl	a,#0x7f
   9652 F5 F0              4553 	mov	b,a
   9654 E0                 4554 	movx	a,@dptr
   9655 54 80              4555 	anl	a,#0x80
   9657 45 F0              4556 	orl	a,b
   9659 F0                 4557 	movx	@dptr,a
                           4558 ;	../../shared/src/cds_base.c:787: reg_DFE_FEXTDC_D_P_O_LANE_6_0 = dfe_sm_dc.dc_d_p_o;
   965A 90 61 BC           4559 	mov	dptr,#(_dfe_sm_dc + 0x0004)
   965D E0                 4560 	movx	a,@dptr
   965E 90 24 3C           4561 	mov	dptr,#_DFE_DC_ODD_REG8
   9661 54 7F              4562 	anl	a,#0x7f
   9663 F5 F0              4563 	mov	b,a
   9665 E0                 4564 	movx	a,@dptr
   9666 54 80              4565 	anl	a,#0x80
   9668 45 F0              4566 	orl	a,b
   966A F0                 4567 	movx	@dptr,a
                           4568 ;	../../shared/src/cds_base.c:788: reg_DFE_FEXTDC_D_N_O_LANE_6_0 = dfe_sm_dc.dc_d_n_o;
   966B 90 61 BD           4569 	mov	dptr,#(_dfe_sm_dc + 0x0005)
   966E E0                 4570 	movx	a,@dptr
   966F 90 24 3D           4571 	mov	dptr,#(_DFE_DC_ODD_REG8 + 0x0001)
   9672 54 7F              4572 	anl	a,#0x7f
   9674 F5 F0              4573 	mov	b,a
   9676 E0                 4574 	movx	a,@dptr
   9677 54 80              4575 	anl	a,#0x80
   9679 45 F0              4576 	orl	a,b
   967B F0                 4577 	movx	@dptr,a
                           4578 ;	../../shared/src/cds_base.c:789: reg_DFE_FEXTDC_S_P_O_LANE_6_0 = dfe_sm_dc.dc_s_p_o;
   967C 90 61 BE           4579 	mov	dptr,#(_dfe_sm_dc + 0x0006)
   967F E0                 4580 	movx	a,@dptr
   9680 90 24 3E           4581 	mov	dptr,#(_DFE_DC_ODD_REG8 + 0x0002)
   9683 54 7F              4582 	anl	a,#0x7f
   9685 F5 F0              4583 	mov	b,a
   9687 E0                 4584 	movx	a,@dptr
   9688 54 80              4585 	anl	a,#0x80
   968A 45 F0              4586 	orl	a,b
   968C F0                 4587 	movx	@dptr,a
                           4588 ;	../../shared/src/cds_base.c:790: reg_DFE_FEXTDC_S_N_O_LANE_6_0 = dfe_sm_dc.dc_s_n_o;
   968D 90 61 BF           4589 	mov	dptr,#(_dfe_sm_dc + 0x0007)
   9690 E0                 4590 	movx	a,@dptr
   9691 FA                 4591 	mov	r2,a
   9692 90 24 3F           4592 	mov	dptr,#(_DFE_DC_ODD_REG8 + 0x0003)
   9695 54 7F              4593 	anl	a,#0x7f
   9697 F5 F0              4594 	mov	b,a
   9699 E0                 4595 	movx	a,@dptr
   969A 54 80              4596 	anl	a,#0x80
   969C 45 F0              4597 	orl	a,b
   969E F0                 4598 	movx	@dptr,a
   969F 80 07              4599 	sjmp	00103$
   96A1                    4600 00102$:
                           4601 ;	../../shared/src/cds_base.c:793: reg_DFE_INIT_SEL_LANE = 0; //load from cal
   96A1 90 24 03           4602 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0003)
   96A4 E0                 4603 	movx	a,@dptr
   96A5 54 BF              4604 	anl	a,#0xbf
   96A7 F0                 4605 	movx	@dptr,a
   96A8                    4606 00103$:
                           4607 ;	../../shared/src/cds_base.c:796: reg_DFE_DC_LOAD_LANE = 1;
                           4608 ;	../../shared/src/cds_base.c:797: reg_DFE_DC_LOAD_LANE = 0;
   96A8 90 24 03           4609 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0003)
   96AB E0                 4610 	movx	a,@dptr
   96AC 44 20              4611 	orl	a,#0x20
   96AE F0                 4612 	movx	@dptr,a
   96AF E0                 4613 	movx	a,@dptr
   96B0 54 DF              4614 	anl	a,#0xdf
   96B2 F0                 4615 	movx	@dptr,a
                           4616 ;	../../shared/src/cds_base.c:803: timeout_start(100);
   96B3 75 8B 9C           4617 	mov	_TMR1,#0x9C
   96B6 75 8D FF           4618 	mov	(_TMR1 >> 8),#0xFF
   96B9 D2 8E              4619 	setb	_TR1
   96BB C2 03              4620 	clr	_timeout
                           4621 ;	../../shared/src/cds_base.c:804: while(1) {
   96BD                    4622 00109$:
                           4623 ;	../../shared/src/cds_base.c:805: if(timeout) break;
   96BD 20 03 15           4624 	jb	_timeout,00111$
                           4625 ;	../../shared/src/cds_base.c:806: if(reg_DFE_UPDATED_LANE & reg_DFE_UPDATED_LANE ) break;
   96C0 90 24 0B           4626 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0003)
   96C3 E0                 4627 	movx	a,@dptr
   96C4 C4                 4628 	swap	a
   96C5 03                 4629 	rr	a
   96C6 54 01              4630 	anl	a,#0x01
   96C8 FA                 4631 	mov	r2,a
   96C9 90 24 0B           4632 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0003)
   96CC E0                 4633 	movx	a,@dptr
   96CD C4                 4634 	swap	a
   96CE 03                 4635 	rr	a
   96CF 54 01              4636 	anl	a,#0x01
   96D1 FB                 4637 	mov	r3,a
   96D2 5A                 4638 	anl	a,r2
   96D3 60 E8              4639 	jz	00109$
   96D5                    4640 00111$:
   96D5 02 00 C5           4641 	ljmp	__sdcc_banked_ret
                           4642 ;------------------------------------------------------------
                           4643 ;Allocation info for local variables in function 'set_dfe_fbmd'
                           4644 ;------------------------------------------------------------
                           4645 ;type                      Allocated to registers r2 
                           4646 ;------------------------------------------------------------
                           4647 ;	../../shared/src/cds_base.c:970: void set_dfe_fbmd(uint8_t type) BANKING_CTRL {
                           4648 ;	-----------------------------------------
                           4649 ;	 function set_dfe_fbmd
                           4650 ;	-----------------------------------------
   96D8                    4651 _set_dfe_fbmd:
   96D8 AA 82              4652 	mov	r2,dpl
                           4653 ;	../../shared/src/cds_base.c:971: switch(type)
   96DA BA 00 02           4654 	cjne	r2,#0x00,00113$
   96DD 80 05              4655 	sjmp	00101$
   96DF                    4656 00113$:
                           4657 ;	../../shared/src/cds_base.c:973: case 0:
   96DF BA 01 2D           4658 	cjne	r2,#0x01,00103$
   96E2 80 17              4659 	sjmp	00102$
   96E4                    4660 00101$:
                           4661 ;	../../shared/src/cds_base.c:974: reg_DFE_FBMD_F0_LANE = 1;
   96E4 90 24 05           4662 	mov	dptr,#(_DFE_CTRL_REG1 + 0x0001)
   96E7 E0                 4663 	movx	a,@dptr
   96E8 44 08              4664 	orl	a,#0x08
   96EA F0                 4665 	movx	@dptr,a
                           4666 ;	../../shared/src/cds_base.c:975: reg_DFE_FBMD_F1PN_LANE = 1;
   96EB 90 24 05           4667 	mov	dptr,#(_DFE_CTRL_REG1 + 0x0001)
   96EE E0                 4668 	movx	a,@dptr
   96EF 44 01              4669 	orl	a,#0x01
   96F1 F0                 4670 	movx	@dptr,a
                           4671 ;	../../shared/src/cds_base.c:976: reg_DFE_FBMD_DATASLICER_LANE = 1;
   96F2 90 24 05           4672 	mov	dptr,#(_DFE_CTRL_REG1 + 0x0001)
   96F5 E0                 4673 	movx	a,@dptr
   96F6 44 02              4674 	orl	a,#0x02
   96F8 F0                 4675 	movx	@dptr,a
                           4676 ;	../../shared/src/cds_base.c:977: break;
                           4677 ;	../../shared/src/cds_base.c:978: case 1:
   96F9 80 3D              4678 	sjmp	00108$
   96FB                    4679 00102$:
                           4680 ;	../../shared/src/cds_base.c:979: reg_DFE_FBMD_F0_LANE = 1;
                           4681 ;	../../shared/src/cds_base.c:980: reg_DFE_FBMD_F1PN_LANE = 0;
   96FB 90 24 05           4682 	mov	dptr,#(_DFE_CTRL_REG1 + 0x0001)
   96FE E0                 4683 	movx	a,@dptr
   96FF 44 08              4684 	orl	a,#0x08
   9701 F0                 4685 	movx	@dptr,a
   9702 E0                 4686 	movx	a,@dptr
   9703 54 FE              4687 	anl	a,#0xfe
   9705 F0                 4688 	movx	@dptr,a
                           4689 ;	../../shared/src/cds_base.c:981: reg_DFE_FBMD_DATASLICER_LANE = 0;
   9706 90 24 05           4690 	mov	dptr,#(_DFE_CTRL_REG1 + 0x0001)
   9709 E0                 4691 	movx	a,@dptr
   970A 54 FD              4692 	anl	a,#0xfd
   970C F0                 4693 	movx	@dptr,a
                           4694 ;	../../shared/src/cds_base.c:982: break;
                           4695 ;	../../shared/src/cds_base.c:983: default:
   970D 80 29              4696 	sjmp	00108$
   970F                    4697 00103$:
                           4698 ;	../../shared/src/cds_base.c:988: reg_DFE_FBMD_F0_LANE = 0;
   970F 90 24 05           4699 	mov	dptr,#(_DFE_CTRL_REG1 + 0x0001)
   9712 E0                 4700 	movx	a,@dptr
   9713 54 F7              4701 	anl	a,#0xf7
   9715 F0                 4702 	movx	@dptr,a
                           4703 ;	../../shared/src/cds_base.c:990: if(reg_DFE_ADAPT_SPLR_EN_LANE_3_0 == 0xf)
   9716 90 24 00           4704 	mov	dptr,#_DFE_CTRL_REG0
   9719 E0                 4705 	movx	a,@dptr
   971A C4                 4706 	swap	a
   971B 54 0F              4707 	anl	a,#0x0f
   971D FA                 4708 	mov	r2,a
   971E BA 0F 09           4709 	cjne	r2,#0x0F,00105$
                           4710 ;	../../shared/src/cds_base.c:992: reg_DFE_FBMD_DATASLICER_LANE = 0;
   9721 90 24 05           4711 	mov	dptr,#(_DFE_CTRL_REG1 + 0x0001)
   9724 E0                 4712 	movx	a,@dptr
   9725 54 FD              4713 	anl	a,#0xfd
   9727 F0                 4714 	movx	@dptr,a
   9728 80 07              4715 	sjmp	00106$
   972A                    4716 00105$:
                           4717 ;	../../shared/src/cds_base.c:994: reg_DFE_FBMD_DATASLICER_LANE = 1;
   972A 90 24 05           4718 	mov	dptr,#(_DFE_CTRL_REG1 + 0x0001)
   972D E0                 4719 	movx	a,@dptr
   972E 44 02              4720 	orl	a,#0x02
   9730 F0                 4721 	movx	@dptr,a
   9731                    4722 00106$:
                           4723 ;	../../shared/src/cds_base.c:996: reg_DFE_FBMD_F1PN_LANE = 0;
   9731 90 24 05           4724 	mov	dptr,#(_DFE_CTRL_REG1 + 0x0001)
   9734 E0                 4725 	movx	a,@dptr
   9735 54 FE              4726 	anl	a,#0xfe
   9737 F0                 4727 	movx	@dptr,a
                           4728 ;	../../shared/src/cds_base.c:998: }
   9738                    4729 00108$:
   9738 02 00 C5           4730 	ljmp	__sdcc_banked_ret
                           4731 ;------------------------------------------------------------
                           4732 ;Allocation info for local variables in function 'set_ph_mode'
                           4733 ;------------------------------------------------------------
                           4734 ;------------------------------------------------------------
                           4735 ;	../../shared/src/cds_base.c:1017: void set_ph_mode(void)  BANKING_CTRL{
                           4736 ;	-----------------------------------------
                           4737 ;	 function set_ph_mode
                           4738 ;	-----------------------------------------
   973B                    4739 _set_ph_mode:
                           4740 ;	../../shared/src/cds_base.c:1019: switch (ph_control_mode)
   973B 90 66 F8           4741 	mov	dptr,#_ph_control_mode
   973E E0                 4742 	movx	a,@dptr
   973F FA                 4743 	mov	r2,a
   9740 74 03              4744 	mov	a,#0x03
   9742 B5 02 00           4745 	cjne	a,ar2,00110$
   9745                    4746 00110$:
   9745 40 72              4747 	jc	00107$
   9747 EA                 4748 	mov	a,r2
   9748 2A                 4749 	add	a,r2
   9749 2A                 4750 	add	a,r2
   974A 90 97 4E           4751 	mov	dptr,#00112$
   974D 73                 4752 	jmp	@a+dptr
   974E                    4753 00112$:
   974E 02 97 5A           4754 	ljmp	00101$
   9751 02 97 71           4755 	ljmp	00102$
   9754 02 97 93           4756 	ljmp	00103$
   9757 02 97 A7           4757 	ljmp	00104$
                           4758 ;	../../shared/src/cds_base.c:1021: case 0:
   975A                    4759 00101$:
                           4760 ;	../../shared/src/cds_base.c:1022: reg_EOM_EN_D_LANE = 0;
   975A 90 00 58           4761 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_22
   975D E0                 4762 	movx	a,@dptr
   975E 54 DF              4763 	anl	a,#0xdf
   9760 F0                 4764 	movx	@dptr,a
                           4765 ;	../../shared/src/cds_base.c:1023: reg_EOM_EN_S_LANE = 0;
   9761 90 00 58           4766 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_22
   9764 E0                 4767 	movx	a,@dptr
   9765 54 BF              4768 	anl	a,#0xbf
   9767 F0                 4769 	movx	@dptr,a
                           4770 ;	../../shared/src/cds_base.c:1024: reg_EOM_EN_E_LANE = 0;
   9768 90 00 58           4771 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_22
   976B E0                 4772 	movx	a,@dptr
   976C 54 EF              4773 	anl	a,#0xef
   976E F0                 4774 	movx	@dptr,a
                           4775 ;	../../shared/src/cds_base.c:1025: break;
                           4776 ;	../../shared/src/cds_base.c:1026: case 1:
   976F 80 48              4777 	sjmp	00107$
   9771                    4778 00102$:
                           4779 ;	../../shared/src/cds_base.c:1027: reg_EOM_EN_D_LANE = tag_ADAPT_DATA_EN ? 1: tag_EOM_DRIVE_DATA_EN_MODE1;
   9771 A2 0D              4780 	mov	c,_adapt_data_en
   9773 E4                 4781 	clr	a
   9774 33                 4782 	rlc	a
   9775 90 00 58           4783 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_22
   9778 13                 4784 	rrc	a
   9779 E0                 4785 	movx	a,@dptr
   977A 92 E5              4786 	mov	acc.5,c
   977C F0                 4787 	movx	@dptr,a
                           4788 ;	../../shared/src/cds_base.c:1028: reg_EOM_EN_S_LANE = tag_ADAPT_SLICER_EN ? 1: tag_EOM_DRIVE_DATA_EN_MODE1;
   977D A2 0C              4789 	mov	c,_adapt_slicer_en
   977F E4                 4790 	clr	a
   9780 33                 4791 	rlc	a
   9781 FA                 4792 	mov	r2,a
   9782 90 00 58           4793 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_22
   9785 13                 4794 	rrc	a
   9786 E0                 4795 	movx	a,@dptr
   9787 92 E6              4796 	mov	acc.6,c
   9789 F0                 4797 	movx	@dptr,a
                           4798 ;	../../shared/src/cds_base.c:1029: reg_EOM_EN_E_LANE = 0;
   978A 90 00 58           4799 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_22
   978D E0                 4800 	movx	a,@dptr
   978E 54 EF              4801 	anl	a,#0xef
   9790 F0                 4802 	movx	@dptr,a
                           4803 ;	../../shared/src/cds_base.c:1030: break;
                           4804 ;	../../shared/src/cds_base.c:1031: case 2:
   9791 80 26              4805 	sjmp	00107$
   9793                    4806 00103$:
                           4807 ;	../../shared/src/cds_base.c:1032: reg_EOM_EN_D_LANE = tag_ADAPT_DATA_EN ? 1: tag_EOM_DRIVE_DATA_EN_MODE2;
   9793 90 00 58           4808 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_22
   9796 E0                 4809 	movx	a,@dptr
   9797 44 20              4810 	orl	a,#0x20
   9799 F0                 4811 	movx	@dptr,a
                           4812 ;	../../shared/src/cds_base.c:1033: reg_EOM_EN_S_LANE = tag_ADAPT_SLICER_EN ? 1: tag_EOM_DRIVE_DATA_EN_MODE2;
                           4813 ;	../../shared/src/cds_base.c:1034: reg_EOM_EN_E_LANE = 0;
   979A 90 00 58           4814 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_22
   979D E0                 4815 	movx	a,@dptr
   979E 44 40              4816 	orl	a,#0x40
   97A0 F0                 4817 	movx	@dptr,a
   97A1 E0                 4818 	movx	a,@dptr
   97A2 54 EF              4819 	anl	a,#0xef
   97A4 F0                 4820 	movx	@dptr,a
                           4821 ;	../../shared/src/cds_base.c:1035: break;
                           4822 ;	../../shared/src/cds_base.c:1036: case 3:
   97A5 80 12              4823 	sjmp	00107$
   97A7                    4824 00104$:
                           4825 ;	../../shared/src/cds_base.c:1037: reg_EOM_EN_D_LANE = 0;
   97A7 90 00 58           4826 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_22
   97AA E0                 4827 	movx	a,@dptr
   97AB 54 DF              4828 	anl	a,#0xdf
   97AD F0                 4829 	movx	@dptr,a
                           4830 ;	../../shared/src/cds_base.c:1038: reg_EOM_EN_S_LANE = 0;
                           4831 ;	../../shared/src/cds_base.c:1039: reg_EOM_EN_E_LANE = 1;
   97AE 90 00 58           4832 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_22
   97B1 E0                 4833 	movx	a,@dptr
   97B2 54 BF              4834 	anl	a,#0xbf
   97B4 F0                 4835 	movx	@dptr,a
   97B5 E0                 4836 	movx	a,@dptr
   97B6 44 10              4837 	orl	a,#0x10
   97B8 F0                 4838 	movx	@dptr,a
                           4839 ;	../../shared/src/cds_base.c:1042: }
   97B9                    4840 00107$:
   97B9 02 00 C5           4841 	ljmp	__sdcc_banked_ret
                           4842 	.area CSEG    (CODE)
                           4843 	.area CONST   (CODE)
                           4844 	.area CABS    (ABS,CODE)
