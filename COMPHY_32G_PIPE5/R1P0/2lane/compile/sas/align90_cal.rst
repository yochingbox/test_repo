                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:36 2018
                              5 ;--------------------------------------------------------
                              6 	.module align90_cal
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _gray2bi
                             13 	.globl _pattern_tb_mask
                             14 	.globl _pattern_tb
                             15 	.globl _TF2
                             16 	.globl _TI
                             17 	.globl _RI
                             18 	.globl _EX12
                             19 	.globl _EX11
                             20 	.globl _EX10
                             21 	.globl _EX9
                             22 	.globl _EX8
                             23 	.globl _ES1
                             24 	.globl _PS1
                             25 	.globl _EX6
                             26 	.globl _EX5
                             27 	.globl _EX4
                             28 	.globl _EX3
                             29 	.globl _EX2
                             30 	.globl _EX7
                             31 	.globl _EA
                             32 	.globl _WDT
                             33 	.globl _ET2
                             34 	.globl _ES
                             35 	.globl _ET1
                             36 	.globl _EX1
                             37 	.globl _ET0
                             38 	.globl _EX0
                             39 	.globl _TF1
                             40 	.globl _TR1
                             41 	.globl _TF0
                             42 	.globl _TR0
                             43 	.globl _IE1
                             44 	.globl _IT1
                             45 	.globl _IE0
                             46 	.globl _IT0
                             47 	.globl _P3_7
                             48 	.globl _P3_6
                             49 	.globl _P3_5
                             50 	.globl _P3_4
                             51 	.globl _P3_3
                             52 	.globl _P3_2
                             53 	.globl _P3_1
                             54 	.globl _P3_0
                             55 	.globl _P2_7
                             56 	.globl _P2_6
                             57 	.globl _P2_5
                             58 	.globl _P2_4
                             59 	.globl _P2_3
                             60 	.globl _P2_2
                             61 	.globl _P2_1
                             62 	.globl _P2_0
                             63 	.globl _P1_7
                             64 	.globl _P1_6
                             65 	.globl _P1_5
                             66 	.globl _P1_4
                             67 	.globl _P1_3
                             68 	.globl _P1_2
                             69 	.globl _P1_1
                             70 	.globl _P1_0
                             71 	.globl _P0_7
                             72 	.globl _P0_6
                             73 	.globl _P0_5
                             74 	.globl _P0_4
                             75 	.globl _P0_3
                             76 	.globl _P0_2
                             77 	.globl _P0_1
                             78 	.globl _P0_0
                             79 	.globl _DMAC
                             80 	.globl _DMATA
                             81 	.globl _DMASA
                             82 	.globl _TMR2
                             83 	.globl _TMR1
                             84 	.globl _TMR0
                             85 	.globl _SRST
                             86 	.globl _B
                             87 	.globl _EIE
                             88 	.globl _ACC
                             89 	.globl _ADCON
                             90 	.globl _PSW
                             91 	.globl _TH2
                             92 	.globl _TL2
                             93 	.globl _RCAP2H
                             94 	.globl _RCAP2L
                             95 	.globl _T2CON
                             96 	.globl _CCEN
                             97 	.globl _IRCON
                             98 	.globl _S0RELH
                             99 	.globl _IP1
                            100 	.globl _IEN1
                            101 	.globl _DMAM1
                            102 	.globl _DMAM0
                            103 	.globl _DMASEL
                            104 	.globl _DMAC2
                            105 	.globl _DMAC1
                            106 	.globl _DMAC0
                            107 	.globl _P3
                            108 	.globl _S0RELL
                            109 	.globl _IP0
                            110 	.globl _IEN0
                            111 	.globl _DMAT2
                            112 	.globl _DMAT1
                            113 	.globl _DMAT0
                            114 	.globl _DMAS2
                            115 	.globl _DMAS1
                            116 	.globl _DMAS0
                            117 	.globl _P2
                            118 	.globl _IEN2
                            119 	.globl _SBUF
                            120 	.globl _SCON
                            121 	.globl _PSBANK
                            122 	.globl _DPS
                            123 	.globl _P1
                            124 	.globl _CKCON
                            125 	.globl _TH1
                            126 	.globl _TH0
                            127 	.globl _TL1
                            128 	.globl _TL0
                            129 	.globl _TMOD
                            130 	.globl _TCON
                            131 	.globl _PCON
                            132 	.globl _WDTREL
                            133 	.globl _DPH
                            134 	.globl _DPL
                            135 	.globl _P0
                            136 	.globl _sq_thrs_ratio_tb
                            137 	.globl _train_save_tb
                            138 	.globl _tx_tb
                            139 	.globl _UPHY_ANAREG_REV_0
                            140 	.globl _dfe_sm_save
                            141 	.globl _dfe_sm_dc
                            142 	.globl _dfe_sm
                            143 	.globl _cds28
                            144 	.globl _lnx_calx_align90_gm
                            145 	.globl _lnx_calx_align90_dac
                            146 	.globl _lnx_calx_align90_dummy_clk
                            147 	.globl _lnx_calx_eom_dpher
                            148 	.globl _lnx_calx_vdda_dll_eom_sel
                            149 	.globl _lnx_calx_dll_eom_gmsel
                            150 	.globl _lnx_calx_vdda_dll_sel
                            151 	.globl _lnx_calx_dll_gmsel
                            152 	.globl _lnx_calx_rxdcc_dll_hg
                            153 	.globl _lnx_calx_rxdcc_dll
                            154 	.globl _lnx_calx_txdcc_hg
                            155 	.globl _lnx_calx_txdcc
                            156 	.globl _lnx_calx_txdcc_pdiv_hg
                            157 	.globl _lnx_calx_txdcc_pdiv
                            158 	.globl _lnx_spdoft_tx_preset_index_lane
                            159 	.globl _lnx_cal_sellv_rxeomclk
                            160 	.globl _lnx_cal_sellv_rxsampler
                            161 	.globl _lnx_cal_sellv_txpre
                            162 	.globl _lnx_cal_sellv_rxdataclk
                            163 	.globl _lnx_cal_sellv_txclk
                            164 	.globl _lnx_cal_sellv_txdata
                            165 	.globl _lnx_cal_align90_gm
                            166 	.globl _lnx_cal_align90_dac
                            167 	.globl _lnx_cal_align90_dummy_clk
                            168 	.globl _lnx_cal_eom_dpher
                            169 	.globl _lnx_cal_vdda_dll_eom_sel
                            170 	.globl _lnx_cal_dll_eom_gmsel
                            171 	.globl _lnx_cal_vdda_dll_sel
                            172 	.globl _lnx_cal_dll_gmsel
                            173 	.globl _lnx_cal_rxdcc_eom_hg
                            174 	.globl _lnx_cal_rxdcc_eom
                            175 	.globl _lnx_cal_rxdcc_data_hg
                            176 	.globl _lnx_cal_rxdcc_data
                            177 	.globl _lnx_cal_rxdcc_dll_hg
                            178 	.globl _lnx_cal_rxdcc_dll
                            179 	.globl _lnx_cal_txdcc_hg
                            180 	.globl _lnx_cal_txdcc
                            181 	.globl _lnx_cal_txdcc_pdiv_hg
                            182 	.globl _lnx_cal_txdcc_pdiv
                            183 	.globl _cmx_cal_sllp_dac_fine_ring
                            184 	.globl _cmx_cal_pll_sllp_dac_coarse_ring
                            185 	.globl _cmx_cal_pll_speed_ring
                            186 	.globl _cmx_cal_plldcc
                            187 	.globl _cmx_cal_lccap_lsb
                            188 	.globl _cmx_cal_lccap_msb
                            189 	.globl _cmx_cal_lcvco_dac_msb
                            190 	.globl _cmx_cal_lcvco_dac_lsb
                            191 	.globl _cmx_cal_lcvco_dac
                            192 	.globl _local_tx_preset_tb
                            193 	.globl _train_g0_index
                            194 	.globl _train_g1_index
                            195 	.globl _train_gn1_index
                            196 	.globl _phase_save
                            197 	.globl _txffe_save
                            198 	.globl _rc_save
                            199 	.globl _phy_mode_lane_table
                            200 	.globl _speedtable
                            201 	.globl _min_gen
                            202 	.globl _max_gen
                            203 	.globl _phy_mode_cmn_table
                            204 	.globl _ring_speedtable
                            205 	.globl _lc_speedtable
                            206 	.globl _TXTRAIN_IF_REG0
                            207 	.globl _CDS_READ_MISC1
                            208 	.globl _CDS_READ_MISC0
                            209 	.globl _DFE_READ_F0D_RIGHT_ODD
                            210 	.globl _DFE_READ_F0D_RIGHT_EVEN
                            211 	.globl _DFE_READ_F0D_LEFT_ODD
                            212 	.globl _DFE_READ_F0D_LEFT_EVEN
                            213 	.globl _DFE_READ_F0D_ODD
                            214 	.globl _DFE_READ_F0D_EVEN
                            215 	.globl _DFE_READ_F0B_ODD
                            216 	.globl _DFE_READ_F0B_EVEN
                            217 	.globl _DFE_READ_F0A_ODD
                            218 	.globl _DFE_READ_F0A_EVEN
                            219 	.globl _DFE_READ_ODD_REG8
                            220 	.globl _DFE_READ_EVEN_REG8
                            221 	.globl _DFE_READ_ODD_REG7
                            222 	.globl _DFE_READ_ODD_REG6
                            223 	.globl _DFE_READ_ODD_REG5
                            224 	.globl _DFE_READ_ODD_REG4
                            225 	.globl _DFE_READ_ODD_REG3
                            226 	.globl _DFE_READ_ODD_REG2
                            227 	.globl _DFE_READ_ODD_REG1
                            228 	.globl _DFE_READ_ODD_REG0
                            229 	.globl _DFE_READ_EVEN_REG7
                            230 	.globl _DFE_READ_EVEN_REG6
                            231 	.globl _DFE_READ_EVEN_REG5
                            232 	.globl _DFE_READ_EVEN_REG4
                            233 	.globl _DFE_READ_EVEN_REG3
                            234 	.globl _DFE_READ_EVEN_REG2
                            235 	.globl _DFE_READ_EVEN_REG1
                            236 	.globl _DFE_READ_EVEN_REG0
                            237 	.globl _TX_TRAIN_IF_REG8
                            238 	.globl _TX_TRAIN_CTRL_LANE
                            239 	.globl _TX_TRAIN_IF_REG7
                            240 	.globl _TX_TRAIN_IF_REG6
                            241 	.globl _TX_TRAIN_IF_REG5
                            242 	.globl _TX_TRAIN_IF_REG4
                            243 	.globl _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE
                            244 	.globl _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE
                            245 	.globl _TRX_TRAIN_IF_INTERRUPT_LANE
                            246 	.globl _TX_AMP_CTRL_REG0
                            247 	.globl _TX_DRV_RD_OUT_REG0
                            248 	.globl _LINK_TRAIN_MODE0
                            249 	.globl _TX_EMPH_CTRL_REG0
                            250 	.globl _TX_TRAIN_DEFAULT_REG5
                            251 	.globl _TX_TRAIN_DEFAULT_REG4
                            252 	.globl _TX_TRAIN_DEFAULT_REG3
                            253 	.globl _TX_TRAIN_DEFAULT_REG2
                            254 	.globl _TX_TRAIN_DEFAULT_REG1
                            255 	.globl _TX_TRAIN_DEFAULT_REG0
                            256 	.globl _TX_TRAIN_DRIVER_REG2
                            257 	.globl _TX_TRAIN_DRIVER_REG1
                            258 	.globl _TX_TRAIN_DRIVER_REG0
                            259 	.globl _TX_TRAIN_PATTTERN_REG0
                            260 	.globl _TX_TRAIN_IF_REG3
                            261 	.globl _TX_TRAIN_IF_REG2
                            262 	.globl _TX_TRAIN_IF_REG1
                            263 	.globl _TX_TRAIN_IF_REG0
                            264 	.globl _DME_DEC_REG1
                            265 	.globl _DME_DEC_REG0
                            266 	.globl _DME_ENC_REG2
                            267 	.globl _DME_ENC_REG1
                            268 	.globl _DME_ENC_REG0
                            269 	.globl _END_XDAT_CMN
                            270 	.globl _MCU_INFO_13
                            271 	.globl _MCU_INFO_12
                            272 	.globl _MCU_INFO_5
                            273 	.globl _MCU_INFO_4
                            274 	.globl _SYNC_INFO
                            275 	.globl _CDS_EYE_CLK_THR
                            276 	.globl _TX_SAVE_4
                            277 	.globl _TX_SAVE_3
                            278 	.globl _TX_SAVE_2
                            279 	.globl _TX_SAVE_1
                            280 	.globl _TX_SAVE_0
                            281 	.globl _ETH_PRESET1_TB
                            282 	.globl _ETH_PRESET0_TB
                            283 	.globl _SAS_PRESET2_TB
                            284 	.globl _SAS_PRESET1_TB
                            285 	.globl _SAS_PRESET0_TB
                            286 	.globl _G_SELLV_RXSAMPLER
                            287 	.globl _G_SELLV_RXDATACLK
                            288 	.globl _G_SELLV_RXEOMCLK
                            289 	.globl _G_SELLV_TXPRE
                            290 	.globl _G_SELLV_TXDATA
                            291 	.globl _G_SELLV_TXCLK
                            292 	.globl _TIMER_SEL3
                            293 	.globl _TIMER_SEL2
                            294 	.globl _TIMER_SEL1
                            295 	.globl _MCU_CONFIG1
                            296 	.globl _LOOP_CNTS
                            297 	.globl _CAL_DATA1
                            298 	.globl _MCU_CONFIG
                            299 	.globl _CAL_STATUS_READ
                            300 	.globl _CAL_TIME_OUT_AND_DIS
                            301 	.globl _CON_CAL_STEP_SIZE5
                            302 	.globl _CON_CAL_STEP_SIZE4
                            303 	.globl _CON_CAL_STEP_SIZE3
                            304 	.globl _CON_CAL_STEP_SIZE2
                            305 	.globl _CON_CAL_STEP_SIZE1
                            306 	.globl _CONTROL_CONFIG9
                            307 	.globl _CONTROL_CONFIG8
                            308 	.globl _TRAIN_IF_CONFIG
                            309 	.globl _CAL_DATA0
                            310 	.globl _CONTROL_CONFIG7
                            311 	.globl _CONTROL_CONFIG6
                            312 	.globl _CONTROL_CONFIG5
                            313 	.globl _CONTROL_CONFIG4
                            314 	.globl _CONTROL_CONFIG3
                            315 	.globl _CONTROL_CONFIG2
                            316 	.globl _CONTROL_CONFIG1
                            317 	.globl _CONTROL_CONFIG0
                            318 	.globl _FW_REV
                            319 	.globl _CID_REG1
                            320 	.globl _CID_REG0
                            321 	.globl _CMN_MCU_REG
                            322 	.globl _SET_LANE_ISR
                            323 	.globl _CMN_ISR_MASK_1
                            324 	.globl _CMN_ISR_1
                            325 	.globl _CMN_MCU_TIMER3_CONTROL
                            326 	.globl _CMN_MCU_TIMER2_CONTROL
                            327 	.globl _CMN_MCU_TIMER1_CONTROL
                            328 	.globl _CMN_MCU_TIMER0_CONTROL
                            329 	.globl _CMN_MCU_TIMER_CTRL_5_LANE
                            330 	.globl _CMN_MCU_TIMER_CTRL_4_LANE
                            331 	.globl _CMN_MCU_TIMER_CTRL_3_LANE
                            332 	.globl _CMN_MCU_TIMER_CTRL_2_LANE
                            333 	.globl _CMN_MCU_TIMER_CONTROL
                            334 	.globl _CMN_CACHE_DEBUG1
                            335 	.globl _CMN_MCU_GPIO
                            336 	.globl _CMN_ISR_CLEAR_2
                            337 	.globl _CMN_ISR_MASK_2
                            338 	.globl _CMN_ISR_2
                            339 	.globl _MCU_INT_ADDR
                            340 	.globl _CMN_CACHE_DEBUG0
                            341 	.globl _MCU_SDT_CMN
                            342 	.globl _XDATA_MEM_CHECKSUM_CMN_2
                            343 	.globl _XDATA_MEM_CHECKSUM_CMN_1
                            344 	.globl _XDATA_MEM_CHECKSUM_CMN_0
                            345 	.globl _TEST5
                            346 	.globl _PM_CMN_REG2
                            347 	.globl _INPUT_CMN_PIN_REG3
                            348 	.globl __FIELDNAME_
                            349 	.globl _CMN_CALIBRATION
                            350 	.globl _OUTPUT_CMN_PIN_REG0
                            351 	.globl _SPD_CMN_REG1
                            352 	.globl _CLKGEN_CMN_REG1
                            353 	.globl _PLLCAL_REG1
                            354 	.globl _PLLCAL_REG0
                            355 	.globl _ANA_TSEN_CONTROL
                            356 	.globl _INPUT_CMN_PIN_REG2
                            357 	.globl _INPUT_CMN_PIN_REG1
                            358 	.globl _INPUT_CMN_PIN_REG0
                            359 	.globl _PM_CMN_REG1
                            360 	.globl _SYSTEM
                            361 	.globl _TEST4
                            362 	.globl _TEST3
                            363 	.globl _TEST2
                            364 	.globl _TEST1
                            365 	.globl _TEST0
                            366 	.globl _MCU_SYNC2
                            367 	.globl _MCU_SYNC1
                            368 	.globl _MEM_IRQ_CLEAR
                            369 	.globl _APB_CONTROL_REG
                            370 	.globl _ANA_IF_CMN_REG0
                            371 	.globl _MEM_IRQ_MASK
                            372 	.globl _MEM_IRQ
                            373 	.globl _ANA_IF_CMN_REG1
                            374 	.globl _MEM_CMN_ECC_ERR_ADDRESS0
                            375 	.globl _MCU_INFO_3
                            376 	.globl _MCU_INFO_2
                            377 	.globl _MCU_INFO_1
                            378 	.globl _MCU_INFO_0
                            379 	.globl _MEMORY_CONTROL_4
                            380 	.globl _MEMORY_CONTROL_3
                            381 	.globl _MEMORY_CONTROL_2
                            382 	.globl _MEMORY_CONTROL_1
                            383 	.globl _MEMORY_CONTROL_0
                            384 	.globl _MCU_DEBUG1
                            385 	.globl _MCU_DEBUG0
                            386 	.globl _MCU_CONTROL_4
                            387 	.globl _MCU_CONTROL_3
                            388 	.globl _MCU_CONTROL_2
                            389 	.globl _MCU_CONTROL_1
                            390 	.globl _MCU_CONTROL_0
                            391 	.globl _GLOB_L1_SUBSTATES_CFG
                            392 	.globl _GLOB_PIPE_REVISION
                            393 	.globl _GLOB_BIST_DATA_HI
                            394 	.globl _GLOB_BIST_SEQR_CFG
                            395 	.globl _GLOB_BIST_RESULT
                            396 	.globl _GLOB_BIST_MASK
                            397 	.globl _GLOB_BIST_START
                            398 	.globl _GLOB_BIST_LANE_TYPE
                            399 	.globl _GLOB_BIST_CTRL
                            400 	.globl _GLOB_DP_BAL_CFG4
                            401 	.globl _GLOB_DP_BAL_CFG2
                            402 	.globl _GLOB_DP_BAL_CFG0
                            403 	.globl _GLOB_PM_DP_CTRL
                            404 	.globl _GLOB_COUNTER_HI
                            405 	.globl _GLOB_COUNTER_CTRL
                            406 	.globl _GLOB_PM_CFG0
                            407 	.globl _GLOB_DP_SAL_CFG5
                            408 	.globl _GLOB_DP_SAL_CFG3
                            409 	.globl _GLOB_DP_SAL_CFG1
                            410 	.globl _GLOB_DP_SAL_CFG
                            411 	.globl _GLOB_MISC_CTRL
                            412 	.globl _GLOB_CLK_SRC_HI
                            413 	.globl _GLOB_CLK_SRC_LO
                            414 	.globl _GLOB_RST_CLK_CTRL
                            415 	.globl _DFE_STATIC_REG6
                            416 	.globl _DFE_STATIC_REG5
                            417 	.globl _DFE_STATIC_REG4
                            418 	.globl _DFE_STATIC_REG3
                            419 	.globl _DFE_STATIC_REG1
                            420 	.globl _DFE_STATIC_REG0
                            421 	.globl _RX_CMN_0
                            422 	.globl _SRIS_REG1
                            423 	.globl _SRIS_REG0
                            424 	.globl _DTX_PHY_ALIGN_REG2
                            425 	.globl _DTX_PHY_ALIGN_REG1
                            426 	.globl _DTX_PHY_ALIGN_REG0
                            427 	.globl _DTX_REG4
                            428 	.globl _DTX_REG3
                            429 	.globl _DTX_REG2
                            430 	.globl _DTX_REG1
                            431 	.globl _DTX_REG0
                            432 	.globl _TX_CMN_REG
                            433 	.globl _END_XDAT_LANE
                            434 	.globl _TRAIN_CONTROL_17
                            435 	.globl _TRAIN_CONTROL_16
                            436 	.globl _TRAIN_CONTROL_15
                            437 	.globl _TRAIN_CONTROL_14
                            438 	.globl _TRAIN_CONTROL_13
                            439 	.globl _ESM_ERR_N_CNT_LOW_LANE
                            440 	.globl _ESM_POP_N_CNT_LOW_LANE
                            441 	.globl _TRAIN_CONTROL_12
                            442 	.globl _TRAIN_CONTROL_11
                            443 	.globl _TRAIN_CONTROL_10
                            444 	.globl _TRAIN_CONTROL_9
                            445 	.globl _TRAIN_CONTROL_8
                            446 	.globl _TRAIN_CONTROL_7
                            447 	.globl _TRAIN_CONTROL_6
                            448 	.globl _TRAIN_CONTROL_5
                            449 	.globl _TRAIN_CONTROL_4
                            450 	.globl _TRAIN_CONTROL_3
                            451 	.globl _ESM_ERR_POP_CNT_HIGH_LANE
                            452 	.globl _ESM_ERR_P_CNT_LOW_LANE
                            453 	.globl _ESM_POP_P_CNT_LOW_LANE
                            454 	.globl _CDS_CTRL_REG1
                            455 	.globl _CDS_CTRL_REG0
                            456 	.globl _DFE_CONTROL_11
                            457 	.globl _DFE_CONTROL_10
                            458 	.globl _DFE_CONTROL_9
                            459 	.globl _DFE_CONTROL_8
                            460 	.globl _DFE_CONTROL_7
                            461 	.globl _DFE_TEST_5
                            462 	.globl _DFE_TEST_4
                            463 	.globl _DFE_TEST_1
                            464 	.globl _DFE_TEST_0
                            465 	.globl _DFE_CONTROL_6
                            466 	.globl _TRAIN_PARA_3
                            467 	.globl _TRAIN_PARA_2
                            468 	.globl _TRAIN_PARA_1
                            469 	.globl _TRAIN_PARA_0
                            470 	.globl _DLL_CAL
                            471 	.globl _RPTA_CONFIG_1
                            472 	.globl _RPTA_CONFIG_0
                            473 	.globl _TRAIN_CONTROL_2
                            474 	.globl _TRAIN_CONTROL_1
                            475 	.globl _TRAIN_CONTROL_0
                            476 	.globl _DFE_CONTROL_5
                            477 	.globl _DFE_CONTROL_4
                            478 	.globl _DFE_CONTROL_3
                            479 	.globl _DFE_CONTROL_2
                            480 	.globl _DFE_CONTROL_1
                            481 	.globl _DFE_CONTROL_0
                            482 	.globl _TRX_TRAIN_IF_TIMERS_ENABLE_LANE
                            483 	.globl _TRX_TRAIN_IF_TIMERS2_LANE
                            484 	.globl _TRX_TRAIN_IF_TIMERS1_LANE
                            485 	.globl _PHY_LOCAL_VALUE_LANE
                            486 	.globl _PHY_REMOTE_CTRL_VALUE_LANE
                            487 	.globl _PHY_REMOTE_CTRL_COMMAND_LANE
                            488 	.globl _CAL_SAVE_DATA3_LANE
                            489 	.globl _CAL_SAVE_DATA2_LANE
                            490 	.globl _CAL_SAVE_DATA1_LANE
                            491 	.globl _CAL_CTRL4_LANE
                            492 	.globl _CAL_CTRL3_LANE
                            493 	.globl _CAL_CTRL2_LANE
                            494 	.globl _CAL_CTRL1_LANE
                            495 	.globl _LANE_MARGIN_REG0
                            496 	.globl _EOM_VLD_REG4
                            497 	.globl _EOM_REG0
                            498 	.globl _EOM_ERR_REG3
                            499 	.globl _EOM_ERR_REG2
                            500 	.globl _EOM_ERR_REG1
                            501 	.globl _EOM_ERR_REG0
                            502 	.globl _EOM_VLD_REG3
                            503 	.globl _EOM_VLD_REG2
                            504 	.globl _EOM_VLD_REG1
                            505 	.globl _EOM_VLD_REG0
                            506 	.globl _DFE_STATIC_LANE_REG6
                            507 	.globl _DFE_STATIC_LANE_REG5
                            508 	.globl _DFE_STATIC_LANE_REG4
                            509 	.globl _DFE_STATIC_LANE_REG3
                            510 	.globl _DFE_STATIC_LANE_REG1
                            511 	.globl _DFE_STATIC_LANE_REG0
                            512 	.globl _DFE_DCE_REG0
                            513 	.globl _CAL_OFST_REG2
                            514 	.globl _CAL_OFST_REG1
                            515 	.globl _CAL_OFST_REG0
                            516 	.globl _DFE_READ_ODD_2C_REG8
                            517 	.globl _DFE_READ_EVEN_2C_REG8
                            518 	.globl _DFE_READ_ODD_2C_REG7
                            519 	.globl _DFE_READ_ODD_2C_REG6
                            520 	.globl _DFE_READ_ODD_2C_REG5
                            521 	.globl _DFE_READ_ODD_2C_REG4
                            522 	.globl _DFE_READ_ODD_2C_REG3
                            523 	.globl _DFE_READ_ODD_2C_REG2
                            524 	.globl _DFE_READ_ODD_2C_REG1
                            525 	.globl _DFE_READ_ODD_2C_REG0
                            526 	.globl _DFE_READ_EVEN_2C_REG7
                            527 	.globl _DFE_READ_EVEN_2C_REG6
                            528 	.globl _DFE_READ_EVEN_2C_REG5
                            529 	.globl _DFE_READ_EVEN_2C_REG4
                            530 	.globl _DFE_READ_EVEN_2C_REG3
                            531 	.globl _DFE_READ_EVEN_2C_REG2
                            532 	.globl _DFE_READ_EVEN_2C_REG1
                            533 	.globl _DFE_READ_EVEN_2C_REG0
                            534 	.globl _DFE_READ_ODD_SM_REG8
                            535 	.globl _DFE_READ_EVEN_SM_REG8
                            536 	.globl _DFE_READ_ODD_SM_REG7
                            537 	.globl _DFE_READ_ODD_SM_REG6
                            538 	.globl _DFE_READ_ODD_SM_REG5
                            539 	.globl _DFE_READ_ODD_SM_REG4
                            540 	.globl _DFE_READ_ODD_SM_REG3
                            541 	.globl _DFE_READ_ODD_SM_REG2
                            542 	.globl _DFE_READ_ODD_SM_REG1
                            543 	.globl _DFE_READ_ODD_SM_REG0
                            544 	.globl _DFE_READ_EVEN_SM_REG7
                            545 	.globl _DFE_READ_EVEN_SM_REG6
                            546 	.globl _DFE_READ_EVEN_SM_REG5
                            547 	.globl _DFE_READ_EVEN_SM_REG4
                            548 	.globl _DFE_READ_EVEN_SM_REG3
                            549 	.globl _DFE_READ_EVEN_SM_REG2
                            550 	.globl _DFE_READ_EVEN_SM_REG1
                            551 	.globl _DFE_READ_EVEN_SM_REG0
                            552 	.globl _DFE_FEXT_ODD_REG7
                            553 	.globl _DFE_FEXT_ODD_REG6
                            554 	.globl _DFE_FEXT_ODD_REG5
                            555 	.globl _DFE_FEXT_ODD_REG4
                            556 	.globl _DFE_FEXT_ODD_REG3
                            557 	.globl _DFE_FEXT_ODD_REG2
                            558 	.globl _DFE_FEXT_ODD_REG1
                            559 	.globl _DFE_FEXT_ODD_REG0
                            560 	.globl _DFE_FEXT_EVEN_REG7
                            561 	.globl _DFE_FEXT_EVEN_REG6
                            562 	.globl _DFE_FEXT_EVEN_REG5
                            563 	.globl _DFE_FEXT_EVEN_REG4
                            564 	.globl _DFE_FEXT_EVEN_REG3
                            565 	.globl _DFE_FEXT_EVEN_REG2
                            566 	.globl _DFE_FEXT_EVEN_REG1
                            567 	.globl _DFE_FEXT_EVEN_REG0
                            568 	.globl _DFE_DC_ODD_REG8
                            569 	.globl _DFE_DC_EVEN_REG8
                            570 	.globl _DFE_FEN_ODD_REG
                            571 	.globl _DFE_FEN_EVEN_REG
                            572 	.globl _DFE_STEP_REG1
                            573 	.globl _DFE_STEP_REG0
                            574 	.globl _DFE_ANA_REG1
                            575 	.globl _DFE_ANA_REG0
                            576 	.globl _DFE_CTRL_REG4
                            577 	.globl _RX_EQ_CLK_CTRL
                            578 	.globl _DFE_CTRL_REG3
                            579 	.globl _DFE_CTRL_REG2
                            580 	.globl _DFE_CTRL_REG1
                            581 	.globl _DFE_CTRL_REG0
                            582 	.globl _PT_COUNTER2
                            583 	.globl _PT_COUNTER1
                            584 	.globl _PT_COUNTER0
                            585 	.globl _PT_USER_PATTERN2
                            586 	.globl _PT_USER_PATTERN1
                            587 	.globl _PT_USER_PATTERN0
                            588 	.globl _PT_CONTROL1
                            589 	.globl _PT_CONTROL0
                            590 	.globl _XDATA_MEM_CHECKSUM_LANE1
                            591 	.globl _XDATA_MEM_CHECKSUM_LANE0
                            592 	.globl _MEM_ECC_ERR_ADDRESS0
                            593 	.globl _MCU_COMMAND0
                            594 	.globl _MCU_INT_CONTROL_13
                            595 	.globl _MCU_WDT_LANE
                            596 	.globl _MCU_IRQ_ISR_LANE
                            597 	.globl _ANA_IF_DFEO_REG0
                            598 	.globl _ANA_IF_DFEE_REG0
                            599 	.globl _ANA_IF_TRX_REG0
                            600 	.globl _EXT_INT_CONTROL
                            601 	.globl _MCU_DEBUG_LANE
                            602 	.globl _MCU_DEBUG3_LANE
                            603 	.globl _MCU_DEBUG2_LANE
                            604 	.globl _MCU_DEBUG1_LANE
                            605 	.globl _MCU_DEBUG0_LANE
                            606 	.globl _MCU_TIMER_CTRL_7_LANE
                            607 	.globl _MCU_TIMER_CTRL_6_LANE
                            608 	.globl _MCU_TIMER_CTRL_5_LANE
                            609 	.globl _MCU_TIMER_CTRL_4_LANE
                            610 	.globl _MCU_TIMER_CTRL_3_LANE
                            611 	.globl _MCU_TIMER_CTRL_2_LANE
                            612 	.globl _MCU_TIMER_CTRL_1_LANE
                            613 	.globl _MCU_MEM_REG2_LANE
                            614 	.globl _MCU_MEM_REG1_LANE
                            615 	.globl _MCU_IRQ_MASK_LANE
                            616 	.globl _MCU_IRQ_LANE
                            617 	.globl _MCU_TIMER3_CONTROL
                            618 	.globl _MCU_TIMER2_CONTROL
                            619 	.globl _MCU_TIMER1_CONTROL
                            620 	.globl _MCU_TIMER0_CONTROL
                            621 	.globl _MCU_TIMER_CONTROL
                            622 	.globl _MCU_INT12_CONTROL
                            623 	.globl _MCU_INT11_CONTROL
                            624 	.globl _MCU_INT10_CONTROL
                            625 	.globl _MCU_INT9_CONTROL
                            626 	.globl _MCU_INT8_CONTROL
                            627 	.globl _MCU_INT7_CONTROL
                            628 	.globl _MCU_INT6_CONTROL
                            629 	.globl _MCU_INT5_CONTROL
                            630 	.globl _MCU_INT4_CONTROL
                            631 	.globl _MCU_INT3_CONTROL
                            632 	.globl _MCU_INT2_CONTROL
                            633 	.globl _MCU_INT1_CONTROL
                            634 	.globl _MCU_INT0_CONTROL
                            635 	.globl _MCU_STATUS3_LANE
                            636 	.globl _MCU_STATUS2_LANE
                            637 	.globl _MCU_STATUS1_LANE
                            638 	.globl _MCU_STATUS0_LANE
                            639 	.globl _LANE_SYSTEM0
                            640 	.globl _CACHE_DEBUG1
                            641 	.globl _CACHE_DEBUG0
                            642 	.globl _MCU_GPIO
                            643 	.globl _MCU_CONTROL_LANE
                            644 	.globl _LANE_32G_PRESET_CFG16_LANE
                            645 	.globl _LANE_32G_PRESET_CFG14_LANE
                            646 	.globl _LANE_32G_PRESET_CFG12_LANE
                            647 	.globl _LANE_32G_PRESET_CFG10_LANE
                            648 	.globl _LANE_32G_PRESET_CFG8_LANE
                            649 	.globl _LANE_32G_PRESET_CFG6_LANE
                            650 	.globl _LANE_32G_PRESET_CFG4_LANE
                            651 	.globl _LANE_32G_PRESET_CFG2_LANE
                            652 	.globl _LANE_32G_PRESET_CFG0_LANE
                            653 	.globl _LANE_EQ_32G_CFG0_LANE
                            654 	.globl _LANE_16G_PRESET_CFG16_LANE
                            655 	.globl _LANE_16G_PRESET_CFG14_LANE
                            656 	.globl _LANE_16G_PRESET_CFG12_LANE
                            657 	.globl _LANE_16G_PRESET_CFG10_LANE
                            658 	.globl _LANE_16G_PRESET_CFG8_LANE
                            659 	.globl _LANE_16G_PRESET_CFG6_LANE
                            660 	.globl _LANE_16G_PRESET_CFG4_LANE
                            661 	.globl _LANE_16G_PRESET_CFG2_LANE
                            662 	.globl _LANE_16G_PRESET_CFG0_LANE
                            663 	.globl _LANE_EQ_16G_CFG0_LANE
                            664 	.globl _LANE_REMOTE_SET_LANE
                            665 	.globl _LANE_COEFF_MAX0_LANE
                            666 	.globl _LANE_PRESET_CFG16_LANE
                            667 	.globl _LANE_PRESET_CFG14_LANE
                            668 	.globl _LANE_PRESET_CFG12_LANE
                            669 	.globl _LANE_PRESET_CFG10_LANE
                            670 	.globl _LANE_PRESET_CFG8_LANE
                            671 	.globl _LANE_PRESET_CFG6_LANE
                            672 	.globl _LANE_PRESET_CFG4_LANE
                            673 	.globl _LANE_PRESET_CFG2_LANE
                            674 	.globl _LANE_PRESET_CFG0_LANE
                            675 	.globl _LANE_EQ_CFG1_LANE
                            676 	.globl _LANE_EQ_CFG0_LANE
                            677 	.globl _LANE_USB_DP_CFG2_LANE
                            678 	.globl _LANE_USB_DP_CFG1_LANE
                            679 	.globl _LANE_DP_PIE8_CFG0_LANE
                            680 	.globl _LANE_CFG_STATUS3_LANE
                            681 	.globl _LANE_CFG4
                            682 	.globl _LANE_CFG2_LANE
                            683 	.globl _LANE_CFG_STATUS2_LANE
                            684 	.globl _LANE_STATUS0
                            685 	.globl _LANE_CFG0
                            686 	.globl _SQ_REG0
                            687 	.globl _DTL_REG3
                            688 	.globl _DTL_REG2
                            689 	.globl _DTL_REG1
                            690 	.globl _DTL_REG0
                            691 	.globl _RX_LANE_INTERRUPT_REG1
                            692 	.globl _RX_CALIBRATION_REG
                            693 	.globl _INPUT_RX_PIN_REG3_LANE
                            694 	.globl _RX_DATA_PATH_REG
                            695 	.globl _RX_LANE_INTERRUPT_MASK
                            696 	.globl _RX_LANE_INTERRUPT
                            697 	.globl _CDR_LOCK_REG
                            698 	.globl _FRAME_SYNC_DET_REG6
                            699 	.globl _FRAME_SYNC_DET_REG5
                            700 	.globl _FRAME_SYNC_DET_REG4
                            701 	.globl _FRAME_SYNC_DET_REG3
                            702 	.globl _FRAME_SYNC_DET_REG2
                            703 	.globl _FRAME_SYNC_DET_REG1
                            704 	.globl _FRAME_SYNC_DET_REG0
                            705 	.globl _CLKGEN_RX_LANE_REG1_LANE
                            706 	.globl _DIG_RX_RSVD_REG0
                            707 	.globl _SPD_CTRL_RX_LANE_REG1_LANE
                            708 	.globl _INPUT_RX_PIN_REG2_LANE
                            709 	.globl _INPUT_RX_PIN_REG1_LANE
                            710 	.globl _INPUT_RX_PIN_REG0_LANE
                            711 	.globl _RX_SYSTEM_LANE
                            712 	.globl _PM_CTRL_RX_LANE_REG1_LANE
                            713 	.globl _MON_TOP
                            714 	.globl _ANALOG_TX_REALTIME_REG_1
                            715 	.globl _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE
                            716 	.globl _PM_CTRL_INTERRUPT_ISR_REG1_LANE
                            717 	.globl __FIELDNAME__LANE
                            718 	.globl _INPUT_TX_PIN_REG5_LANE
                            719 	.globl _DIG_TX_RSVD_REG0
                            720 	.globl _TX_CALIBRATION_LANE
                            721 	.globl _INPUT_TX_PIN_REG4_LANE
                            722 	.globl _TX_SYSTEM_LANE
                            723 	.globl _SPD_CTRL_TX_LANE_REG1_LANE
                            724 	.globl _SPD_CTRL_INTERRUPT_REG2
                            725 	.globl _SPD_CTRL_INTERRUPT_REG1_LANE
                            726 	.globl _TX_SPEED_CONVERT_LANE
                            727 	.globl _CLKGEN_TX_LANE_REG1_LANE
                            728 	.globl _PM_CTRL_INTERRUPT_REG2
                            729 	.globl _PM_CTRL_INTERRUPT_REG1_LANE
                            730 	.globl _INPUT_TX_PIN_REG3_LANE
                            731 	.globl _INPUT_TX_PIN_REG2_LANE
                            732 	.globl _INPUT_TX_PIN_REG1_LANE
                            733 	.globl _INPUT_TX_PIN_REG0_LANE
                            734 	.globl _PM_CTRL_TX_LANE_REG2_LANE
                            735 	.globl _PM_CTRL_TX_LANE_REG1_LANE
                            736 	.globl _UPHY14_CMN_ANAREG_TOP_214
                            737 	.globl _UPHY14_CMN_ANAREG_TOP_213
                            738 	.globl _UPHY14_CMN_ANAREG_TOP_212
                            739 	.globl _UPHY14_CMN_ANAREG_TOP_211
                            740 	.globl _UPHY14_CMN_ANAREG_TOP_210
                            741 	.globl _UPHY14_CMN_ANAREG_TOP_209
                            742 	.globl _UPHY14_CMN_ANAREG_TOP_208
                            743 	.globl _UPHY14_CMN_ANAREG_TOP_207
                            744 	.globl _UPHY14_CMN_ANAREG_TOP_206
                            745 	.globl _UPHY14_CMN_ANAREG_TOP_205
                            746 	.globl _UPHY14_CMN_ANAREG_TOP_204
                            747 	.globl _UPHY14_CMN_ANAREG_TOP_203
                            748 	.globl _UPHY14_CMN_ANAREG_TOP_202
                            749 	.globl _UPHY14_CMN_ANAREG_TOP_201
                            750 	.globl _UPHY14_CMN_ANAREG_TOP_200
                            751 	.globl _UPHY14_CMN_ANAREG_TOP_199
                            752 	.globl _UPHY14_CMN_ANAREG_TOP_198
                            753 	.globl _UPHY14_CMN_ANAREG_TOP_197
                            754 	.globl _UPHY14_CMN_ANAREG_TOP_196
                            755 	.globl _UPHY14_CMN_ANAREG_TOP_195
                            756 	.globl _UPHY14_CMN_ANAREG_TOP_194
                            757 	.globl _UPHY14_CMN_ANAREG_TOP_193
                            758 	.globl _UPHY14_CMN_ANAREG_TOP_192
                            759 	.globl _UPHY14_CMN_ANAREG_TOP_191
                            760 	.globl _UPHY14_CMN_ANAREG_TOP_190
                            761 	.globl _UPHY14_CMN_ANAREG_TOP_189
                            762 	.globl _UPHY14_CMN_ANAREG_TOP_188
                            763 	.globl _UPHY14_CMN_ANAREG_TOP_187
                            764 	.globl _UPHY14_CMN_ANAREG_TOP_186
                            765 	.globl _UPHY14_CMN_ANAREG_TOP_185
                            766 	.globl _UPHY14_CMN_ANAREG_TOP_184
                            767 	.globl _UPHY14_CMN_ANAREG_TOP_183
                            768 	.globl _UPHY14_CMN_ANAREG_TOP_182
                            769 	.globl _UPHY14_CMN_ANAREG_TOP_181
                            770 	.globl _UPHY14_CMN_ANAREG_TOP_180
                            771 	.globl _UPHY14_CMN_ANAREG_TOP_179
                            772 	.globl _UPHY14_CMN_ANAREG_TOP_178
                            773 	.globl _UPHY14_CMN_ANAREG_TOP_177
                            774 	.globl _UPHY14_CMN_ANAREG_TOP_176
                            775 	.globl _UPHY14_CMN_ANAREG_TOP_175
                            776 	.globl _UPHY14_CMN_ANAREG_TOP_174
                            777 	.globl _UPHY14_CMN_ANAREG_TOP_173
                            778 	.globl _UPHY14_CMN_ANAREG_TOP_172
                            779 	.globl _UPHY14_CMN_ANAREG_TOP_171
                            780 	.globl _UPHY14_CMN_ANAREG_TOP_170
                            781 	.globl _UPHY14_CMN_ANAREG_TOP_169
                            782 	.globl _UPHY14_CMN_ANAREG_TOP_168
                            783 	.globl _UPHY14_CMN_ANAREG_TOP_167
                            784 	.globl _UPHY14_CMN_ANAREG_TOP_166
                            785 	.globl _UPHY14_CMN_ANAREG_TOP_165
                            786 	.globl _UPHY14_CMN_ANAREG_TOP_164
                            787 	.globl _UPHY14_CMN_ANAREG_TOP_163
                            788 	.globl _UPHY14_CMN_ANAREG_TOP_162
                            789 	.globl _UPHY14_CMN_ANAREG_TOP_161
                            790 	.globl _UPHY14_CMN_ANAREG_TOP_160
                            791 	.globl _UPHY14_CMN_ANAREG_TOP_159
                            792 	.globl _UPHY14_CMN_ANAREG_TOP_158
                            793 	.globl _UPHY14_CMN_ANAREG_TOP_157
                            794 	.globl _UPHY14_CMN_ANAREG_TOP_156
                            795 	.globl _UPHY14_CMN_ANAREG_TOP_155
                            796 	.globl _UPHY14_CMN_ANAREG_TOP_154
                            797 	.globl _UPHY14_CMN_ANAREG_TOP_153
                            798 	.globl _UPHY14_CMN_ANAREG_TOP_152
                            799 	.globl _UPHY14_CMN_ANAREG_TOP_151
                            800 	.globl _UPHY14_CMN_ANAREG_TOP_150
                            801 	.globl _UPHY14_CMN_ANAREG_TOP_149
                            802 	.globl _UPHY14_CMN_ANAREG_TOP_148
                            803 	.globl _UPHY14_CMN_ANAREG_TOP_147
                            804 	.globl _UPHY14_CMN_ANAREG_TOP_146
                            805 	.globl _UPHY14_CMN_ANAREG_TOP_145
                            806 	.globl _UPHY14_CMN_ANAREG_TOP_144
                            807 	.globl _UPHY14_CMN_ANAREG_TOP_143
                            808 	.globl _UPHY14_CMN_ANAREG_TOP_142
                            809 	.globl _UPHY14_CMN_ANAREG_TOP_141
                            810 	.globl _UPHY14_CMN_ANAREG_TOP_140
                            811 	.globl _UPHY14_CMN_ANAREG_TOP_139
                            812 	.globl _UPHY14_CMN_ANAREG_TOP_138
                            813 	.globl _UPHY14_CMN_ANAREG_TOP_137
                            814 	.globl _UPHY14_CMN_ANAREG_TOP_136
                            815 	.globl _UPHY14_CMN_ANAREG_TOP_135
                            816 	.globl _UPHY14_CMN_ANAREG_TOP_134
                            817 	.globl _UPHY14_CMN_ANAREG_TOP_133
                            818 	.globl _UPHY14_CMN_ANAREG_TOP_132
                            819 	.globl _UPHY14_CMN_ANAREG_TOP_131
                            820 	.globl _UPHY14_CMN_ANAREG_TOP_130
                            821 	.globl _UPHY14_CMN_ANAREG_TOP_129
                            822 	.globl _UPHY14_CMN_ANAREG_TOP_128
                            823 	.globl _ANA_DFEO_REG_0B
                            824 	.globl _ANA_DFEO_REG_0A
                            825 	.globl _ANA_DFEO_REG_09
                            826 	.globl _ANA_DFEO_REG_08
                            827 	.globl _ANA_DFEO_REG_07
                            828 	.globl _ANA_DFEO_REG_06
                            829 	.globl _ANA_DFEO_REG_05
                            830 	.globl _ANA_DFEO_REG_04
                            831 	.globl _ANA_DFEO_REG_03
                            832 	.globl _ANA_DFEO_REG_02
                            833 	.globl _ANA_DFEO_REG_01
                            834 	.globl _ANA_DFEO_REG_00
                            835 	.globl _ANA_DFEO_REG_27
                            836 	.globl _ANA_DFEO_REG_26
                            837 	.globl _ANA_DFEO_REG_25
                            838 	.globl _ANA_DFEO_REG_24
                            839 	.globl _ANA_DFEO_REG_23
                            840 	.globl _ANA_DFEO_REG_22
                            841 	.globl _ANA_DFEO_REG_21
                            842 	.globl _ANA_DFEO_REG_20
                            843 	.globl _ANA_DFEO_REG_1F
                            844 	.globl _ANA_DFEO_REG_1E
                            845 	.globl _ANA_DFEO_REG_1D
                            846 	.globl _ANA_DFEO_REG_1C
                            847 	.globl _ANA_DFEO_REG_1B
                            848 	.globl _ANA_DFEO_REG_1A
                            849 	.globl _ANA_DFEO_REG_19
                            850 	.globl _ANA_DFEO_REG_18
                            851 	.globl _ANA_DFEO_REG_17
                            852 	.globl _ANA_DFEO_REG_16
                            853 	.globl _ANA_DFEO_REG_15
                            854 	.globl _ANA_DFEO_REG_14
                            855 	.globl _ANA_DFEO_REG_13
                            856 	.globl _ANA_DFEO_REG_12
                            857 	.globl _ANA_DFEO_REG_11
                            858 	.globl _ANA_DFEO_REG_10
                            859 	.globl _ANA_DFEO_REG_0F
                            860 	.globl _ANA_DFEO_REG_0E
                            861 	.globl _ANA_DFEO_REG_0D
                            862 	.globl _ANA_DFEO_REG_0C
                            863 	.globl _ANA_DFEE_REG_1D
                            864 	.globl _ANA_DFEE_REG_1C
                            865 	.globl _ANA_DFEE_REG_1B
                            866 	.globl _ANA_DFEE_REG_1A
                            867 	.globl _ANA_DFEE_REG_19
                            868 	.globl _ANA_DFEE_REG_18
                            869 	.globl _ANA_DFEE_REG_17
                            870 	.globl _ANA_DFEE_REG_16
                            871 	.globl _ANA_DFEE_REG_15
                            872 	.globl _ANA_DFEE_REG_14
                            873 	.globl _ANA_DFEE_REG_13
                            874 	.globl _ANA_DFEE_REG_12
                            875 	.globl _ANA_DFEE_REG_11
                            876 	.globl _ANA_DFEE_REG_10
                            877 	.globl _ANA_DFEE_REG_0F
                            878 	.globl _ANA_DFEE_REG_0E
                            879 	.globl _ANA_DFEE_REG_0D
                            880 	.globl _ANA_DFEE_REG_0C
                            881 	.globl _ANA_DFEE_REG_0B
                            882 	.globl _ANA_DFEE_REG_0A
                            883 	.globl _ANA_DFEE_REG_09
                            884 	.globl _ANA_DFEE_REG_08
                            885 	.globl _ANA_DFEE_REG_07
                            886 	.globl _ANA_DFEE_REG_06
                            887 	.globl _ANA_DFEE_REG_05
                            888 	.globl _ANA_DFEE_REG_04
                            889 	.globl _ANA_DFEE_REG_03
                            890 	.globl _ANA_DFEE_REG_02
                            891 	.globl _ANA_DFEE_REG_01
                            892 	.globl _ANA_DFEE_REG_00
                            893 	.globl _ANA_DFEE_REG_27
                            894 	.globl _ANA_DFEE_REG_26
                            895 	.globl _ANA_DFEE_REG_25
                            896 	.globl _ANA_DFEE_REG_24
                            897 	.globl _ANA_DFEE_REG_23
                            898 	.globl _ANA_DFEE_REG_22
                            899 	.globl _ANA_DFEE_REG_21
                            900 	.globl _ANA_DFEE_REG_20
                            901 	.globl _ANA_DFEE_REG_1F
                            902 	.globl _ANA_DFEE_REG_1E
                            903 	.globl _UPHY14_TRX_ANAREG_BOT_32
                            904 	.globl _UPHY14_TRX_ANAREG_BOT_31
                            905 	.globl _UPHY14_TRX_ANAREG_BOT_30
                            906 	.globl _UPHY14_TRX_ANAREG_BOT_29
                            907 	.globl _UPHY14_TRX_ANAREG_BOT_28
                            908 	.globl _UPHY14_TRX_ANAREG_BOT_27
                            909 	.globl _UPHY14_TRX_ANAREG_BOT_26
                            910 	.globl _UPHY14_TRX_ANAREG_BOT_25
                            911 	.globl _UPHY14_TRX_ANAREG_BOT_24
                            912 	.globl _UPHY14_TRX_ANAREG_BOT_23
                            913 	.globl _UPHY14_TRX_ANAREG_BOT_22
                            914 	.globl _UPHY14_TRX_ANAREG_BOT_21
                            915 	.globl _UPHY14_TRX_ANAREG_BOT_20
                            916 	.globl _UPHY14_TRX_ANAREG_BOT_19
                            917 	.globl _UPHY14_TRX_ANAREG_BOT_18
                            918 	.globl _UPHY14_TRX_ANAREG_BOT_17
                            919 	.globl _UPHY14_TRX_ANAREG_BOT_16
                            920 	.globl _UPHY14_TRX_ANAREG_BOT_15
                            921 	.globl _UPHY14_TRX_ANAREG_BOT_14
                            922 	.globl _UPHY14_TRX_ANAREG_BOT_13
                            923 	.globl _UPHY14_TRX_ANAREG_BOT_12
                            924 	.globl _UPHY14_TRX_ANAREG_BOT_11
                            925 	.globl _UPHY14_TRX_ANAREG_BOT_10
                            926 	.globl _UPHY14_TRX_ANAREG_BOT_9
                            927 	.globl _UPHY14_TRX_ANAREG_BOT_8
                            928 	.globl _UPHY14_TRX_ANAREG_BOT_7
                            929 	.globl _UPHY14_TRX_ANAREG_BOT_6
                            930 	.globl _UPHY14_TRX_ANAREG_BOT_5
                            931 	.globl _UPHY14_TRX_ANAREG_BOT_4
                            932 	.globl _UPHY14_TRX_ANAREG_BOT_3
                            933 	.globl _UPHY14_TRX_ANAREG_BOT_2
                            934 	.globl _UPHY14_TRX_ANAREG_BOT_1
                            935 	.globl _UPHY14_TRX_ANAREG_BOT_0
                            936 	.globl _UPHY14_TRX_ANAREG_TOP_157
                            937 	.globl _UPHY14_TRX_ANAREG_TOP_156
                            938 	.globl _UPHY14_TRX_ANAREG_TOP_155
                            939 	.globl _UPHY14_TRX_ANAREG_TOP_154
                            940 	.globl _UPHY14_TRX_ANAREG_TOP_153
                            941 	.globl _UPHY14_TRX_ANAREG_TOP_152
                            942 	.globl _UPHY14_TRX_ANAREG_TOP_151
                            943 	.globl _UPHY14_TRX_ANAREG_TOP_150
                            944 	.globl _UPHY14_TRX_ANAREG_TOP_149
                            945 	.globl _UPHY14_TRX_ANAREG_TOP_148
                            946 	.globl _UPHY14_TRX_ANAREG_TOP_147
                            947 	.globl _UPHY14_TRX_ANAREG_TOP_146
                            948 	.globl _UPHY14_TRX_ANAREG_TOP_145
                            949 	.globl _UPHY14_TRX_ANAREG_TOP_144
                            950 	.globl _UPHY14_TRX_ANAREG_TOP_143
                            951 	.globl _UPHY14_TRX_ANAREG_TOP_142
                            952 	.globl _UPHY14_TRX_ANAREG_TOP_141
                            953 	.globl _UPHY14_TRX_ANAREG_TOP_140
                            954 	.globl _UPHY14_TRX_ANAREG_TOP_139
                            955 	.globl _UPHY14_TRX_ANAREG_TOP_138
                            956 	.globl _UPHY14_TRX_ANAREG_TOP_137
                            957 	.globl _UPHY14_TRX_ANAREG_TOP_136
                            958 	.globl _UPHY14_TRX_ANAREG_TOP_135
                            959 	.globl _UPHY14_TRX_ANAREG_TOP_134
                            960 	.globl _UPHY14_TRX_ANAREG_TOP_133
                            961 	.globl _UPHY14_TRX_ANAREG_TOP_132
                            962 	.globl _UPHY14_TRX_ANAREG_TOP_131
                            963 	.globl _UPHY14_TRX_ANAREG_TOP_130
                            964 	.globl _UPHY14_TRX_ANAREG_TOP_129
                            965 	.globl _UPHY14_TRX_ANAREG_TOP_128
                            966 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_143
                            967 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_142
                            968 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_141
                            969 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_140
                            970 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_139
                            971 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_138
                            972 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_137
                            973 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_136
                            974 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_135
                            975 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_134
                            976 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_133
                            977 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_132
                            978 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_131
                            979 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_130
                            980 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_129
                            981 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_128
                            982 	.globl _find_align90_lock
                            983 	.globl _rxalign90_cal
                            984 	.globl _align90_update
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
                           1122 ; internal ram data
                           1123 ;--------------------------------------------------------
                           1124 	.area DSEG    (DATA)
                           1125 ;--------------------------------------------------------
                           1126 ; overlayable items in internal ram 
                           1127 ;--------------------------------------------------------
                           1128 	.area OSEG    (OVR,DATA)
                           1129 ;--------------------------------------------------------
                           1130 ; indirectly addressable internal ram data
                           1131 ;--------------------------------------------------------
                           1132 	.area ISEG    (DATA)
                           1133 ;--------------------------------------------------------
                           1134 ; absolute internal ram data
                           1135 ;--------------------------------------------------------
                           1136 	.area IABS    (ABS,DATA)
                           1137 	.area IABS    (ABS,DATA)
                           1138 ;--------------------------------------------------------
                           1139 ; bit data
                           1140 ;--------------------------------------------------------
                           1141 	.area BSEG    (BIT)
                           1142 ;--------------------------------------------------------
                           1143 ; paged external ram data
                           1144 ;--------------------------------------------------------
                           1145 	.area PSEG    (PAG,XDATA)
                           1146 ;--------------------------------------------------------
                           1147 ; external ram data
                           1148 ;--------------------------------------------------------
                           1149 	.area XSEG    (XDATA)
                    1000   1150 _UPHY14_TRX_LANEPLL_ANAREG_TOP_128	=	0x1000
                    1004   1151 _UPHY14_TRX_LANEPLL_ANAREG_TOP_129	=	0x1004
                    1008   1152 _UPHY14_TRX_LANEPLL_ANAREG_TOP_130	=	0x1008
                    100C   1153 _UPHY14_TRX_LANEPLL_ANAREG_TOP_131	=	0x100c
                    1010   1154 _UPHY14_TRX_LANEPLL_ANAREG_TOP_132	=	0x1010
                    1014   1155 _UPHY14_TRX_LANEPLL_ANAREG_TOP_133	=	0x1014
                    1018   1156 _UPHY14_TRX_LANEPLL_ANAREG_TOP_134	=	0x1018
                    101C   1157 _UPHY14_TRX_LANEPLL_ANAREG_TOP_135	=	0x101c
                    1020   1158 _UPHY14_TRX_LANEPLL_ANAREG_TOP_136	=	0x1020
                    1024   1159 _UPHY14_TRX_LANEPLL_ANAREG_TOP_137	=	0x1024
                    1028   1160 _UPHY14_TRX_LANEPLL_ANAREG_TOP_138	=	0x1028
                    102C   1161 _UPHY14_TRX_LANEPLL_ANAREG_TOP_139	=	0x102c
                    1030   1162 _UPHY14_TRX_LANEPLL_ANAREG_TOP_140	=	0x1030
                    1034   1163 _UPHY14_TRX_LANEPLL_ANAREG_TOP_141	=	0x1034
                    1038   1164 _UPHY14_TRX_LANEPLL_ANAREG_TOP_142	=	0x1038
                    103C   1165 _UPHY14_TRX_LANEPLL_ANAREG_TOP_143	=	0x103c
                    0200   1166 _UPHY14_TRX_ANAREG_TOP_128	=	0x0200
                    0204   1167 _UPHY14_TRX_ANAREG_TOP_129	=	0x0204
                    0208   1168 _UPHY14_TRX_ANAREG_TOP_130	=	0x0208
                    020C   1169 _UPHY14_TRX_ANAREG_TOP_131	=	0x020c
                    0210   1170 _UPHY14_TRX_ANAREG_TOP_132	=	0x0210
                    0214   1171 _UPHY14_TRX_ANAREG_TOP_133	=	0x0214
                    0218   1172 _UPHY14_TRX_ANAREG_TOP_134	=	0x0218
                    021C   1173 _UPHY14_TRX_ANAREG_TOP_135	=	0x021c
                    0220   1174 _UPHY14_TRX_ANAREG_TOP_136	=	0x0220
                    0224   1175 _UPHY14_TRX_ANAREG_TOP_137	=	0x0224
                    0228   1176 _UPHY14_TRX_ANAREG_TOP_138	=	0x0228
                    022C   1177 _UPHY14_TRX_ANAREG_TOP_139	=	0x022c
                    0230   1178 _UPHY14_TRX_ANAREG_TOP_140	=	0x0230
                    0234   1179 _UPHY14_TRX_ANAREG_TOP_141	=	0x0234
                    0238   1180 _UPHY14_TRX_ANAREG_TOP_142	=	0x0238
                    023C   1181 _UPHY14_TRX_ANAREG_TOP_143	=	0x023c
                    0240   1182 _UPHY14_TRX_ANAREG_TOP_144	=	0x0240
                    0244   1183 _UPHY14_TRX_ANAREG_TOP_145	=	0x0244
                    0248   1184 _UPHY14_TRX_ANAREG_TOP_146	=	0x0248
                    024C   1185 _UPHY14_TRX_ANAREG_TOP_147	=	0x024c
                    0250   1186 _UPHY14_TRX_ANAREG_TOP_148	=	0x0250
                    0254   1187 _UPHY14_TRX_ANAREG_TOP_149	=	0x0254
                    0258   1188 _UPHY14_TRX_ANAREG_TOP_150	=	0x0258
                    025C   1189 _UPHY14_TRX_ANAREG_TOP_151	=	0x025c
                    0260   1190 _UPHY14_TRX_ANAREG_TOP_152	=	0x0260
                    0264   1191 _UPHY14_TRX_ANAREG_TOP_153	=	0x0264
                    0268   1192 _UPHY14_TRX_ANAREG_TOP_154	=	0x0268
                    026C   1193 _UPHY14_TRX_ANAREG_TOP_155	=	0x026c
                    0270   1194 _UPHY14_TRX_ANAREG_TOP_156	=	0x0270
                    0274   1195 _UPHY14_TRX_ANAREG_TOP_157	=	0x0274
                    0000   1196 _UPHY14_TRX_ANAREG_BOT_0	=	0x0000
                    0004   1197 _UPHY14_TRX_ANAREG_BOT_1	=	0x0004
                    0008   1198 _UPHY14_TRX_ANAREG_BOT_2	=	0x0008
                    000C   1199 _UPHY14_TRX_ANAREG_BOT_3	=	0x000c
                    0010   1200 _UPHY14_TRX_ANAREG_BOT_4	=	0x0010
                    0014   1201 _UPHY14_TRX_ANAREG_BOT_5	=	0x0014
                    0018   1202 _UPHY14_TRX_ANAREG_BOT_6	=	0x0018
                    001C   1203 _UPHY14_TRX_ANAREG_BOT_7	=	0x001c
                    0020   1204 _UPHY14_TRX_ANAREG_BOT_8	=	0x0020
                    0024   1205 _UPHY14_TRX_ANAREG_BOT_9	=	0x0024
                    0028   1206 _UPHY14_TRX_ANAREG_BOT_10	=	0x0028
                    002C   1207 _UPHY14_TRX_ANAREG_BOT_11	=	0x002c
                    0030   1208 _UPHY14_TRX_ANAREG_BOT_12	=	0x0030
                    0034   1209 _UPHY14_TRX_ANAREG_BOT_13	=	0x0034
                    0038   1210 _UPHY14_TRX_ANAREG_BOT_14	=	0x0038
                    003C   1211 _UPHY14_TRX_ANAREG_BOT_15	=	0x003c
                    0040   1212 _UPHY14_TRX_ANAREG_BOT_16	=	0x0040
                    0044   1213 _UPHY14_TRX_ANAREG_BOT_17	=	0x0044
                    0048   1214 _UPHY14_TRX_ANAREG_BOT_18	=	0x0048
                    004C   1215 _UPHY14_TRX_ANAREG_BOT_19	=	0x004c
                    0050   1216 _UPHY14_TRX_ANAREG_BOT_20	=	0x0050
                    0054   1217 _UPHY14_TRX_ANAREG_BOT_21	=	0x0054
                    0058   1218 _UPHY14_TRX_ANAREG_BOT_22	=	0x0058
                    005C   1219 _UPHY14_TRX_ANAREG_BOT_23	=	0x005c
                    0060   1220 _UPHY14_TRX_ANAREG_BOT_24	=	0x0060
                    0064   1221 _UPHY14_TRX_ANAREG_BOT_25	=	0x0064
                    0068   1222 _UPHY14_TRX_ANAREG_BOT_26	=	0x0068
                    006C   1223 _UPHY14_TRX_ANAREG_BOT_27	=	0x006c
                    0070   1224 _UPHY14_TRX_ANAREG_BOT_28	=	0x0070
                    0074   1225 _UPHY14_TRX_ANAREG_BOT_29	=	0x0074
                    0078   1226 _UPHY14_TRX_ANAREG_BOT_30	=	0x0078
                    007C   1227 _UPHY14_TRX_ANAREG_BOT_31	=	0x007c
                    0080   1228 _UPHY14_TRX_ANAREG_BOT_32	=	0x0080
                    0478   1229 _ANA_DFEE_REG_1E	=	0x0478
                    047C   1230 _ANA_DFEE_REG_1F	=	0x047c
                    0480   1231 _ANA_DFEE_REG_20	=	0x0480
                    0484   1232 _ANA_DFEE_REG_21	=	0x0484
                    0488   1233 _ANA_DFEE_REG_22	=	0x0488
                    048C   1234 _ANA_DFEE_REG_23	=	0x048c
                    0490   1235 _ANA_DFEE_REG_24	=	0x0490
                    0494   1236 _ANA_DFEE_REG_25	=	0x0494
                    0498   1237 _ANA_DFEE_REG_26	=	0x0498
                    049C   1238 _ANA_DFEE_REG_27	=	0x049c
                    0400   1239 _ANA_DFEE_REG_00	=	0x0400
                    0404   1240 _ANA_DFEE_REG_01	=	0x0404
                    0408   1241 _ANA_DFEE_REG_02	=	0x0408
                    040C   1242 _ANA_DFEE_REG_03	=	0x040c
                    0410   1243 _ANA_DFEE_REG_04	=	0x0410
                    0414   1244 _ANA_DFEE_REG_05	=	0x0414
                    0418   1245 _ANA_DFEE_REG_06	=	0x0418
                    041C   1246 _ANA_DFEE_REG_07	=	0x041c
                    0420   1247 _ANA_DFEE_REG_08	=	0x0420
                    0424   1248 _ANA_DFEE_REG_09	=	0x0424
                    0428   1249 _ANA_DFEE_REG_0A	=	0x0428
                    042C   1250 _ANA_DFEE_REG_0B	=	0x042c
                    0430   1251 _ANA_DFEE_REG_0C	=	0x0430
                    0434   1252 _ANA_DFEE_REG_0D	=	0x0434
                    0438   1253 _ANA_DFEE_REG_0E	=	0x0438
                    043C   1254 _ANA_DFEE_REG_0F	=	0x043c
                    0440   1255 _ANA_DFEE_REG_10	=	0x0440
                    0444   1256 _ANA_DFEE_REG_11	=	0x0444
                    0448   1257 _ANA_DFEE_REG_12	=	0x0448
                    044C   1258 _ANA_DFEE_REG_13	=	0x044c
                    0450   1259 _ANA_DFEE_REG_14	=	0x0450
                    0454   1260 _ANA_DFEE_REG_15	=	0x0454
                    0458   1261 _ANA_DFEE_REG_16	=	0x0458
                    045C   1262 _ANA_DFEE_REG_17	=	0x045c
                    0460   1263 _ANA_DFEE_REG_18	=	0x0460
                    0464   1264 _ANA_DFEE_REG_19	=	0x0464
                    0468   1265 _ANA_DFEE_REG_1A	=	0x0468
                    046C   1266 _ANA_DFEE_REG_1B	=	0x046c
                    0470   1267 _ANA_DFEE_REG_1C	=	0x0470
                    0474   1268 _ANA_DFEE_REG_1D	=	0x0474
                    0830   1269 _ANA_DFEO_REG_0C	=	0x0830
                    0834   1270 _ANA_DFEO_REG_0D	=	0x0834
                    0838   1271 _ANA_DFEO_REG_0E	=	0x0838
                    083C   1272 _ANA_DFEO_REG_0F	=	0x083c
                    0840   1273 _ANA_DFEO_REG_10	=	0x0840
                    0844   1274 _ANA_DFEO_REG_11	=	0x0844
                    0848   1275 _ANA_DFEO_REG_12	=	0x0848
                    084C   1276 _ANA_DFEO_REG_13	=	0x084c
                    0850   1277 _ANA_DFEO_REG_14	=	0x0850
                    0854   1278 _ANA_DFEO_REG_15	=	0x0854
                    0858   1279 _ANA_DFEO_REG_16	=	0x0858
                    085C   1280 _ANA_DFEO_REG_17	=	0x085c
                    0860   1281 _ANA_DFEO_REG_18	=	0x0860
                    0864   1282 _ANA_DFEO_REG_19	=	0x0864
                    0868   1283 _ANA_DFEO_REG_1A	=	0x0868
                    086C   1284 _ANA_DFEO_REG_1B	=	0x086c
                    0870   1285 _ANA_DFEO_REG_1C	=	0x0870
                    0874   1286 _ANA_DFEO_REG_1D	=	0x0874
                    0878   1287 _ANA_DFEO_REG_1E	=	0x0878
                    087C   1288 _ANA_DFEO_REG_1F	=	0x087c
                    0880   1289 _ANA_DFEO_REG_20	=	0x0880
                    0884   1290 _ANA_DFEO_REG_21	=	0x0884
                    0888   1291 _ANA_DFEO_REG_22	=	0x0888
                    088C   1292 _ANA_DFEO_REG_23	=	0x088c
                    0890   1293 _ANA_DFEO_REG_24	=	0x0890
                    0894   1294 _ANA_DFEO_REG_25	=	0x0894
                    0898   1295 _ANA_DFEO_REG_26	=	0x0898
                    089C   1296 _ANA_DFEO_REG_27	=	0x089c
                    0800   1297 _ANA_DFEO_REG_00	=	0x0800
                    0804   1298 _ANA_DFEO_REG_01	=	0x0804
                    0808   1299 _ANA_DFEO_REG_02	=	0x0808
                    080C   1300 _ANA_DFEO_REG_03	=	0x080c
                    0810   1301 _ANA_DFEO_REG_04	=	0x0810
                    0814   1302 _ANA_DFEO_REG_05	=	0x0814
                    0818   1303 _ANA_DFEO_REG_06	=	0x0818
                    081C   1304 _ANA_DFEO_REG_07	=	0x081c
                    0820   1305 _ANA_DFEO_REG_08	=	0x0820
                    0824   1306 _ANA_DFEO_REG_09	=	0x0824
                    0828   1307 _ANA_DFEO_REG_0A	=	0x0828
                    082C   1308 _ANA_DFEO_REG_0B	=	0x082c
                    8200   1309 _UPHY14_CMN_ANAREG_TOP_128	=	0x8200
                    8204   1310 _UPHY14_CMN_ANAREG_TOP_129	=	0x8204
                    8208   1311 _UPHY14_CMN_ANAREG_TOP_130	=	0x8208
                    820C   1312 _UPHY14_CMN_ANAREG_TOP_131	=	0x820c
                    8210   1313 _UPHY14_CMN_ANAREG_TOP_132	=	0x8210
                    8214   1314 _UPHY14_CMN_ANAREG_TOP_133	=	0x8214
                    8218   1315 _UPHY14_CMN_ANAREG_TOP_134	=	0x8218
                    821C   1316 _UPHY14_CMN_ANAREG_TOP_135	=	0x821c
                    8220   1317 _UPHY14_CMN_ANAREG_TOP_136	=	0x8220
                    8224   1318 _UPHY14_CMN_ANAREG_TOP_137	=	0x8224
                    8228   1319 _UPHY14_CMN_ANAREG_TOP_138	=	0x8228
                    822C   1320 _UPHY14_CMN_ANAREG_TOP_139	=	0x822c
                    8230   1321 _UPHY14_CMN_ANAREG_TOP_140	=	0x8230
                    8234   1322 _UPHY14_CMN_ANAREG_TOP_141	=	0x8234
                    8238   1323 _UPHY14_CMN_ANAREG_TOP_142	=	0x8238
                    823C   1324 _UPHY14_CMN_ANAREG_TOP_143	=	0x823c
                    8240   1325 _UPHY14_CMN_ANAREG_TOP_144	=	0x8240
                    8244   1326 _UPHY14_CMN_ANAREG_TOP_145	=	0x8244
                    8248   1327 _UPHY14_CMN_ANAREG_TOP_146	=	0x8248
                    824C   1328 _UPHY14_CMN_ANAREG_TOP_147	=	0x824c
                    8250   1329 _UPHY14_CMN_ANAREG_TOP_148	=	0x8250
                    8254   1330 _UPHY14_CMN_ANAREG_TOP_149	=	0x8254
                    8258   1331 _UPHY14_CMN_ANAREG_TOP_150	=	0x8258
                    825C   1332 _UPHY14_CMN_ANAREG_TOP_151	=	0x825c
                    8260   1333 _UPHY14_CMN_ANAREG_TOP_152	=	0x8260
                    8264   1334 _UPHY14_CMN_ANAREG_TOP_153	=	0x8264
                    8268   1335 _UPHY14_CMN_ANAREG_TOP_154	=	0x8268
                    826C   1336 _UPHY14_CMN_ANAREG_TOP_155	=	0x826c
                    8270   1337 _UPHY14_CMN_ANAREG_TOP_156	=	0x8270
                    8274   1338 _UPHY14_CMN_ANAREG_TOP_157	=	0x8274
                    8278   1339 _UPHY14_CMN_ANAREG_TOP_158	=	0x8278
                    827C   1340 _UPHY14_CMN_ANAREG_TOP_159	=	0x827c
                    8280   1341 _UPHY14_CMN_ANAREG_TOP_160	=	0x8280
                    8284   1342 _UPHY14_CMN_ANAREG_TOP_161	=	0x8284
                    8288   1343 _UPHY14_CMN_ANAREG_TOP_162	=	0x8288
                    828C   1344 _UPHY14_CMN_ANAREG_TOP_163	=	0x828c
                    8290   1345 _UPHY14_CMN_ANAREG_TOP_164	=	0x8290
                    8294   1346 _UPHY14_CMN_ANAREG_TOP_165	=	0x8294
                    8298   1347 _UPHY14_CMN_ANAREG_TOP_166	=	0x8298
                    829C   1348 _UPHY14_CMN_ANAREG_TOP_167	=	0x829c
                    82A0   1349 _UPHY14_CMN_ANAREG_TOP_168	=	0x82a0
                    82A4   1350 _UPHY14_CMN_ANAREG_TOP_169	=	0x82a4
                    82A8   1351 _UPHY14_CMN_ANAREG_TOP_170	=	0x82a8
                    82AC   1352 _UPHY14_CMN_ANAREG_TOP_171	=	0x82ac
                    82B0   1353 _UPHY14_CMN_ANAREG_TOP_172	=	0x82b0
                    82B4   1354 _UPHY14_CMN_ANAREG_TOP_173	=	0x82b4
                    82B8   1355 _UPHY14_CMN_ANAREG_TOP_174	=	0x82b8
                    82BC   1356 _UPHY14_CMN_ANAREG_TOP_175	=	0x82bc
                    82C0   1357 _UPHY14_CMN_ANAREG_TOP_176	=	0x82c0
                    82C4   1358 _UPHY14_CMN_ANAREG_TOP_177	=	0x82c4
                    82C8   1359 _UPHY14_CMN_ANAREG_TOP_178	=	0x82c8
                    82CC   1360 _UPHY14_CMN_ANAREG_TOP_179	=	0x82cc
                    82D0   1361 _UPHY14_CMN_ANAREG_TOP_180	=	0x82d0
                    82D4   1362 _UPHY14_CMN_ANAREG_TOP_181	=	0x82d4
                    82D8   1363 _UPHY14_CMN_ANAREG_TOP_182	=	0x82d8
                    82DC   1364 _UPHY14_CMN_ANAREG_TOP_183	=	0x82dc
                    82E0   1365 _UPHY14_CMN_ANAREG_TOP_184	=	0x82e0
                    82E4   1366 _UPHY14_CMN_ANAREG_TOP_185	=	0x82e4
                    82E8   1367 _UPHY14_CMN_ANAREG_TOP_186	=	0x82e8
                    82EC   1368 _UPHY14_CMN_ANAREG_TOP_187	=	0x82ec
                    82F0   1369 _UPHY14_CMN_ANAREG_TOP_188	=	0x82f0
                    82F4   1370 _UPHY14_CMN_ANAREG_TOP_189	=	0x82f4
                    82F8   1371 _UPHY14_CMN_ANAREG_TOP_190	=	0x82f8
                    82FC   1372 _UPHY14_CMN_ANAREG_TOP_191	=	0x82fc
                    8300   1373 _UPHY14_CMN_ANAREG_TOP_192	=	0x8300
                    8304   1374 _UPHY14_CMN_ANAREG_TOP_193	=	0x8304
                    8308   1375 _UPHY14_CMN_ANAREG_TOP_194	=	0x8308
                    830C   1376 _UPHY14_CMN_ANAREG_TOP_195	=	0x830c
                    8310   1377 _UPHY14_CMN_ANAREG_TOP_196	=	0x8310
                    8314   1378 _UPHY14_CMN_ANAREG_TOP_197	=	0x8314
                    8318   1379 _UPHY14_CMN_ANAREG_TOP_198	=	0x8318
                    831C   1380 _UPHY14_CMN_ANAREG_TOP_199	=	0x831c
                    8320   1381 _UPHY14_CMN_ANAREG_TOP_200	=	0x8320
                    8324   1382 _UPHY14_CMN_ANAREG_TOP_201	=	0x8324
                    8328   1383 _UPHY14_CMN_ANAREG_TOP_202	=	0x8328
                    832C   1384 _UPHY14_CMN_ANAREG_TOP_203	=	0x832c
                    8330   1385 _UPHY14_CMN_ANAREG_TOP_204	=	0x8330
                    8334   1386 _UPHY14_CMN_ANAREG_TOP_205	=	0x8334
                    8338   1387 _UPHY14_CMN_ANAREG_TOP_206	=	0x8338
                    833C   1388 _UPHY14_CMN_ANAREG_TOP_207	=	0x833c
                    8340   1389 _UPHY14_CMN_ANAREG_TOP_208	=	0x8340
                    8344   1390 _UPHY14_CMN_ANAREG_TOP_209	=	0x8344
                    8348   1391 _UPHY14_CMN_ANAREG_TOP_210	=	0x8348
                    834C   1392 _UPHY14_CMN_ANAREG_TOP_211	=	0x834c
                    8350   1393 _UPHY14_CMN_ANAREG_TOP_212	=	0x8350
                    8354   1394 _UPHY14_CMN_ANAREG_TOP_213	=	0x8354
                    8358   1395 _UPHY14_CMN_ANAREG_TOP_214	=	0x8358
                    2000   1396 _PM_CTRL_TX_LANE_REG1_LANE	=	0x2000
                    2004   1397 _PM_CTRL_TX_LANE_REG2_LANE	=	0x2004
                    2008   1398 _INPUT_TX_PIN_REG0_LANE	=	0x2008
                    200C   1399 _INPUT_TX_PIN_REG1_LANE	=	0x200c
                    2010   1400 _INPUT_TX_PIN_REG2_LANE	=	0x2010
                    2014   1401 _INPUT_TX_PIN_REG3_LANE	=	0x2014
                    2018   1402 _PM_CTRL_INTERRUPT_REG1_LANE	=	0x2018
                    201C   1403 _PM_CTRL_INTERRUPT_REG2	=	0x201c
                    2020   1404 _CLKGEN_TX_LANE_REG1_LANE	=	0x2020
                    2024   1405 _TX_SPEED_CONVERT_LANE	=	0x2024
                    2028   1406 _SPD_CTRL_INTERRUPT_REG1_LANE	=	0x2028
                    202C   1407 _SPD_CTRL_INTERRUPT_REG2	=	0x202c
                    2030   1408 _SPD_CTRL_TX_LANE_REG1_LANE	=	0x2030
                    2034   1409 _TX_SYSTEM_LANE	=	0x2034
                    203C   1410 _INPUT_TX_PIN_REG4_LANE	=	0x203c
                    2040   1411 _TX_CALIBRATION_LANE	=	0x2040
                    2044   1412 _DIG_TX_RSVD_REG0	=	0x2044
                    2048   1413 _INPUT_TX_PIN_REG5_LANE	=	0x2048
                    204C   1414 __FIELDNAME__LANE	=	0x204c
                    2050   1415 _PM_CTRL_INTERRUPT_ISR_REG1_LANE	=	0x2050
                    2054   1416 _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE	=	0x2054
                    2058   1417 _ANALOG_TX_REALTIME_REG_1	=	0x2058
                    205C   1418 _MON_TOP	=	0x205c
                    2100   1419 _PM_CTRL_RX_LANE_REG1_LANE	=	0x2100
                    2104   1420 _RX_SYSTEM_LANE	=	0x2104
                    2108   1421 _INPUT_RX_PIN_REG0_LANE	=	0x2108
                    210C   1422 _INPUT_RX_PIN_REG1_LANE	=	0x210c
                    2110   1423 _INPUT_RX_PIN_REG2_LANE	=	0x2110
                    2114   1424 _SPD_CTRL_RX_LANE_REG1_LANE	=	0x2114
                    2118   1425 _DIG_RX_RSVD_REG0	=	0x2118
                    211C   1426 _CLKGEN_RX_LANE_REG1_LANE	=	0x211c
                    2120   1427 _FRAME_SYNC_DET_REG0	=	0x2120
                    2124   1428 _FRAME_SYNC_DET_REG1	=	0x2124
                    2128   1429 _FRAME_SYNC_DET_REG2	=	0x2128
                    212C   1430 _FRAME_SYNC_DET_REG3	=	0x212c
                    2130   1431 _FRAME_SYNC_DET_REG4	=	0x2130
                    2134   1432 _FRAME_SYNC_DET_REG5	=	0x2134
                    2138   1433 _FRAME_SYNC_DET_REG6	=	0x2138
                    213C   1434 _CDR_LOCK_REG	=	0x213c
                    2140   1435 _RX_LANE_INTERRUPT	=	0x2140
                    2144   1436 _RX_LANE_INTERRUPT_MASK	=	0x2144
                    2148   1437 _RX_DATA_PATH_REG	=	0x2148
                    214C   1438 _INPUT_RX_PIN_REG3_LANE	=	0x214c
                    2150   1439 _RX_CALIBRATION_REG	=	0x2150
                    2158   1440 _RX_LANE_INTERRUPT_REG1	=	0x2158
                    2160   1441 _DTL_REG0	=	0x2160
                    2164   1442 _DTL_REG1	=	0x2164
                    2168   1443 _DTL_REG2	=	0x2168
                    216C   1444 _DTL_REG3	=	0x216c
                    2170   1445 _SQ_REG0	=	0x2170
                    4000   1446 _LANE_CFG0	=	0x4000
                    4004   1447 _LANE_STATUS0	=	0x4004
                    4008   1448 _LANE_CFG_STATUS2_LANE	=	0x4008
                    400C   1449 _LANE_CFG2_LANE	=	0x400c
                    4010   1450 _LANE_CFG4	=	0x4010
                    4014   1451 _LANE_CFG_STATUS3_LANE	=	0x4014
                    4018   1452 _LANE_DP_PIE8_CFG0_LANE	=	0x4018
                    401C   1453 _LANE_USB_DP_CFG1_LANE	=	0x401c
                    4020   1454 _LANE_USB_DP_CFG2_LANE	=	0x4020
                    4024   1455 _LANE_EQ_CFG0_LANE	=	0x4024
                    4028   1456 _LANE_EQ_CFG1_LANE	=	0x4028
                    402C   1457 _LANE_PRESET_CFG0_LANE	=	0x402c
                    4030   1458 _LANE_PRESET_CFG2_LANE	=	0x4030
                    4034   1459 _LANE_PRESET_CFG4_LANE	=	0x4034
                    4038   1460 _LANE_PRESET_CFG6_LANE	=	0x4038
                    403C   1461 _LANE_PRESET_CFG8_LANE	=	0x403c
                    4040   1462 _LANE_PRESET_CFG10_LANE	=	0x4040
                    4044   1463 _LANE_PRESET_CFG12_LANE	=	0x4044
                    4048   1464 _LANE_PRESET_CFG14_LANE	=	0x4048
                    404C   1465 _LANE_PRESET_CFG16_LANE	=	0x404c
                    4050   1466 _LANE_COEFF_MAX0_LANE	=	0x4050
                    4054   1467 _LANE_REMOTE_SET_LANE	=	0x4054
                    4058   1468 _LANE_EQ_16G_CFG0_LANE	=	0x4058
                    405C   1469 _LANE_16G_PRESET_CFG0_LANE	=	0x405c
                    4060   1470 _LANE_16G_PRESET_CFG2_LANE	=	0x4060
                    4064   1471 _LANE_16G_PRESET_CFG4_LANE	=	0x4064
                    4068   1472 _LANE_16G_PRESET_CFG6_LANE	=	0x4068
                    406C   1473 _LANE_16G_PRESET_CFG8_LANE	=	0x406c
                    4070   1474 _LANE_16G_PRESET_CFG10_LANE	=	0x4070
                    4074   1475 _LANE_16G_PRESET_CFG12_LANE	=	0x4074
                    4078   1476 _LANE_16G_PRESET_CFG14_LANE	=	0x4078
                    407C   1477 _LANE_16G_PRESET_CFG16_LANE	=	0x407c
                    4080   1478 _LANE_EQ_32G_CFG0_LANE	=	0x4080
                    4084   1479 _LANE_32G_PRESET_CFG0_LANE	=	0x4084
                    4088   1480 _LANE_32G_PRESET_CFG2_LANE	=	0x4088
                    408C   1481 _LANE_32G_PRESET_CFG4_LANE	=	0x408c
                    4090   1482 _LANE_32G_PRESET_CFG6_LANE	=	0x4090
                    4094   1483 _LANE_32G_PRESET_CFG8_LANE	=	0x4094
                    4098   1484 _LANE_32G_PRESET_CFG10_LANE	=	0x4098
                    409C   1485 _LANE_32G_PRESET_CFG12_LANE	=	0x409c
                    40A0   1486 _LANE_32G_PRESET_CFG14_LANE	=	0x40a0
                    40A4   1487 _LANE_32G_PRESET_CFG16_LANE	=	0x40a4
                    2200   1488 _MCU_CONTROL_LANE	=	0x2200
                    2204   1489 _MCU_GPIO	=	0x2204
                    2208   1490 _CACHE_DEBUG0	=	0x2208
                    220C   1491 _CACHE_DEBUG1	=	0x220c
                    2210   1492 _LANE_SYSTEM0	=	0x2210
                    2230   1493 _MCU_STATUS0_LANE	=	0x2230
                    2234   1494 _MCU_STATUS1_LANE	=	0x2234
                    2238   1495 _MCU_STATUS2_LANE	=	0x2238
                    223C   1496 _MCU_STATUS3_LANE	=	0x223c
                    2240   1497 _MCU_INT0_CONTROL	=	0x2240
                    2244   1498 _MCU_INT1_CONTROL	=	0x2244
                    2248   1499 _MCU_INT2_CONTROL	=	0x2248
                    224C   1500 _MCU_INT3_CONTROL	=	0x224c
                    2250   1501 _MCU_INT4_CONTROL	=	0x2250
                    2254   1502 _MCU_INT5_CONTROL	=	0x2254
                    2258   1503 _MCU_INT6_CONTROL	=	0x2258
                    225C   1504 _MCU_INT7_CONTROL	=	0x225c
                    2260   1505 _MCU_INT8_CONTROL	=	0x2260
                    2264   1506 _MCU_INT9_CONTROL	=	0x2264
                    2268   1507 _MCU_INT10_CONTROL	=	0x2268
                    226C   1508 _MCU_INT11_CONTROL	=	0x226c
                    2270   1509 _MCU_INT12_CONTROL	=	0x2270
                    2274   1510 _MCU_TIMER_CONTROL	=	0x2274
                    2278   1511 _MCU_TIMER0_CONTROL	=	0x2278
                    227C   1512 _MCU_TIMER1_CONTROL	=	0x227c
                    2280   1513 _MCU_TIMER2_CONTROL	=	0x2280
                    2284   1514 _MCU_TIMER3_CONTROL	=	0x2284
                    2288   1515 _MCU_IRQ_LANE	=	0x2288
                    228C   1516 _MCU_IRQ_MASK_LANE	=	0x228c
                    2290   1517 _MCU_MEM_REG1_LANE	=	0x2290
                    2294   1518 _MCU_MEM_REG2_LANE	=	0x2294
                    2298   1519 _MCU_TIMER_CTRL_1_LANE	=	0x2298
                    229C   1520 _MCU_TIMER_CTRL_2_LANE	=	0x229c
                    22A0   1521 _MCU_TIMER_CTRL_3_LANE	=	0x22a0
                    22A4   1522 _MCU_TIMER_CTRL_4_LANE	=	0x22a4
                    22A8   1523 _MCU_TIMER_CTRL_5_LANE	=	0x22a8
                    22AC   1524 _MCU_TIMER_CTRL_6_LANE	=	0x22ac
                    22B0   1525 _MCU_TIMER_CTRL_7_LANE	=	0x22b0
                    22B4   1526 _MCU_DEBUG0_LANE	=	0x22b4
                    22B8   1527 _MCU_DEBUG1_LANE	=	0x22b8
                    22BC   1528 _MCU_DEBUG2_LANE	=	0x22bc
                    22C0   1529 _MCU_DEBUG3_LANE	=	0x22c0
                    22C4   1530 _MCU_DEBUG_LANE	=	0x22c4
                    22C8   1531 _EXT_INT_CONTROL	=	0x22c8
                    22CC   1532 _ANA_IF_TRX_REG0	=	0x22cc
                    22D0   1533 _ANA_IF_DFEE_REG0	=	0x22d0
                    22D4   1534 _ANA_IF_DFEO_REG0	=	0x22d4
                    22D8   1535 _MCU_IRQ_ISR_LANE	=	0x22d8
                    22DC   1536 _MCU_WDT_LANE	=	0x22dc
                    22E0   1537 _MCU_INT_CONTROL_13	=	0x22e0
                    22E4   1538 _MCU_COMMAND0	=	0x22e4
                    22F4   1539 _MEM_ECC_ERR_ADDRESS0	=	0x22f4
                    22F8   1540 _XDATA_MEM_CHECKSUM_LANE0	=	0x22f8
                    22FC   1541 _XDATA_MEM_CHECKSUM_LANE1	=	0x22fc
                    2300   1542 _PT_CONTROL0	=	0x2300
                    2304   1543 _PT_CONTROL1	=	0x2304
                    2308   1544 _PT_USER_PATTERN0	=	0x2308
                    230C   1545 _PT_USER_PATTERN1	=	0x230c
                    2310   1546 _PT_USER_PATTERN2	=	0x2310
                    2314   1547 _PT_COUNTER0	=	0x2314
                    2318   1548 _PT_COUNTER1	=	0x2318
                    231C   1549 _PT_COUNTER2	=	0x231c
                    2400   1550 _DFE_CTRL_REG0	=	0x2400
                    2404   1551 _DFE_CTRL_REG1	=	0x2404
                    2408   1552 _DFE_CTRL_REG2	=	0x2408
                    240C   1553 _DFE_CTRL_REG3	=	0x240c
                    2410   1554 _RX_EQ_CLK_CTRL	=	0x2410
                    2414   1555 _DFE_CTRL_REG4	=	0x2414
                    2418   1556 _DFE_ANA_REG0	=	0x2418
                    241C   1557 _DFE_ANA_REG1	=	0x241c
                    2420   1558 _DFE_STEP_REG0	=	0x2420
                    2424   1559 _DFE_STEP_REG1	=	0x2424
                    2430   1560 _DFE_FEN_EVEN_REG	=	0x2430
                    2434   1561 _DFE_FEN_ODD_REG	=	0x2434
                    2438   1562 _DFE_DC_EVEN_REG8	=	0x2438
                    243C   1563 _DFE_DC_ODD_REG8	=	0x243c
                    2440   1564 _DFE_FEXT_EVEN_REG0	=	0x2440
                    2444   1565 _DFE_FEXT_EVEN_REG1	=	0x2444
                    2448   1566 _DFE_FEXT_EVEN_REG2	=	0x2448
                    244C   1567 _DFE_FEXT_EVEN_REG3	=	0x244c
                    2450   1568 _DFE_FEXT_EVEN_REG4	=	0x2450
                    2454   1569 _DFE_FEXT_EVEN_REG5	=	0x2454
                    2458   1570 _DFE_FEXT_EVEN_REG6	=	0x2458
                    245C   1571 _DFE_FEXT_EVEN_REG7	=	0x245c
                    2460   1572 _DFE_FEXT_ODD_REG0	=	0x2460
                    2464   1573 _DFE_FEXT_ODD_REG1	=	0x2464
                    2468   1574 _DFE_FEXT_ODD_REG2	=	0x2468
                    246C   1575 _DFE_FEXT_ODD_REG3	=	0x246c
                    2470   1576 _DFE_FEXT_ODD_REG4	=	0x2470
                    2474   1577 _DFE_FEXT_ODD_REG5	=	0x2474
                    2478   1578 _DFE_FEXT_ODD_REG6	=	0x2478
                    247C   1579 _DFE_FEXT_ODD_REG7	=	0x247c
                    2480   1580 _DFE_READ_EVEN_SM_REG0	=	0x2480
                    2484   1581 _DFE_READ_EVEN_SM_REG1	=	0x2484
                    2488   1582 _DFE_READ_EVEN_SM_REG2	=	0x2488
                    248C   1583 _DFE_READ_EVEN_SM_REG3	=	0x248c
                    2490   1584 _DFE_READ_EVEN_SM_REG4	=	0x2490
                    2494   1585 _DFE_READ_EVEN_SM_REG5	=	0x2494
                    2498   1586 _DFE_READ_EVEN_SM_REG6	=	0x2498
                    249C   1587 _DFE_READ_EVEN_SM_REG7	=	0x249c
                    24A0   1588 _DFE_READ_ODD_SM_REG0	=	0x24a0
                    24A4   1589 _DFE_READ_ODD_SM_REG1	=	0x24a4
                    24A8   1590 _DFE_READ_ODD_SM_REG2	=	0x24a8
                    24AC   1591 _DFE_READ_ODD_SM_REG3	=	0x24ac
                    24B0   1592 _DFE_READ_ODD_SM_REG4	=	0x24b0
                    24B4   1593 _DFE_READ_ODD_SM_REG5	=	0x24b4
                    24B8   1594 _DFE_READ_ODD_SM_REG6	=	0x24b8
                    24BC   1595 _DFE_READ_ODD_SM_REG7	=	0x24bc
                    24C0   1596 _DFE_READ_EVEN_SM_REG8	=	0x24c0
                    24C4   1597 _DFE_READ_ODD_SM_REG8	=	0x24c4
                    24D0   1598 _DFE_READ_EVEN_2C_REG0	=	0x24d0
                    24D4   1599 _DFE_READ_EVEN_2C_REG1	=	0x24d4
                    24D8   1600 _DFE_READ_EVEN_2C_REG2	=	0x24d8
                    24DC   1601 _DFE_READ_EVEN_2C_REG3	=	0x24dc
                    24E0   1602 _DFE_READ_EVEN_2C_REG4	=	0x24e0
                    24E4   1603 _DFE_READ_EVEN_2C_REG5	=	0x24e4
                    24E8   1604 _DFE_READ_EVEN_2C_REG6	=	0x24e8
                    24EC   1605 _DFE_READ_EVEN_2C_REG7	=	0x24ec
                    24F0   1606 _DFE_READ_ODD_2C_REG0	=	0x24f0
                    24F4   1607 _DFE_READ_ODD_2C_REG1	=	0x24f4
                    24F8   1608 _DFE_READ_ODD_2C_REG2	=	0x24f8
                    24FC   1609 _DFE_READ_ODD_2C_REG3	=	0x24fc
                    2500   1610 _DFE_READ_ODD_2C_REG4	=	0x2500
                    2504   1611 _DFE_READ_ODD_2C_REG5	=	0x2504
                    2508   1612 _DFE_READ_ODD_2C_REG6	=	0x2508
                    250C   1613 _DFE_READ_ODD_2C_REG7	=	0x250c
                    2510   1614 _DFE_READ_EVEN_2C_REG8	=	0x2510
                    2514   1615 _DFE_READ_ODD_2C_REG8	=	0x2514
                    2518   1616 _CAL_OFST_REG0	=	0x2518
                    251C   1617 _CAL_OFST_REG1	=	0x251c
                    2520   1618 _CAL_OFST_REG2	=	0x2520
                    2530   1619 _DFE_DCE_REG0	=	0x2530
                    2540   1620 _DFE_STATIC_LANE_REG0	=	0x2540
                    2544   1621 _DFE_STATIC_LANE_REG1	=	0x2544
                    2548   1622 _DFE_STATIC_LANE_REG3	=	0x2548
                    254C   1623 _DFE_STATIC_LANE_REG4	=	0x254c
                    2550   1624 _DFE_STATIC_LANE_REG5	=	0x2550
                    2554   1625 _DFE_STATIC_LANE_REG6	=	0x2554
                    2560   1626 _EOM_VLD_REG0	=	0x2560
                    2564   1627 _EOM_VLD_REG1	=	0x2564
                    2568   1628 _EOM_VLD_REG2	=	0x2568
                    256C   1629 _EOM_VLD_REG3	=	0x256c
                    2570   1630 _EOM_ERR_REG0	=	0x2570
                    2574   1631 _EOM_ERR_REG1	=	0x2574
                    2578   1632 _EOM_ERR_REG2	=	0x2578
                    257C   1633 _EOM_ERR_REG3	=	0x257c
                    2580   1634 _EOM_REG0	=	0x2580
                    25F0   1635 _EOM_VLD_REG4	=	0x25f0
                    25F4   1636 _LANE_MARGIN_REG0	=	0x25f4
                    6000   1637 _CAL_CTRL1_LANE	=	0x6000
                    6004   1638 _CAL_CTRL2_LANE	=	0x6004
                    6008   1639 _CAL_CTRL3_LANE	=	0x6008
                    600C   1640 _CAL_CTRL4_LANE	=	0x600c
                    6010   1641 _CAL_SAVE_DATA1_LANE	=	0x6010
                    6014   1642 _CAL_SAVE_DATA2_LANE	=	0x6014
                    6018   1643 _CAL_SAVE_DATA3_LANE	=	0x6018
                    601C   1644 _PHY_REMOTE_CTRL_COMMAND_LANE	=	0x601c
                    6020   1645 _PHY_REMOTE_CTRL_VALUE_LANE	=	0x6020
                    6024   1646 _PHY_LOCAL_VALUE_LANE	=	0x6024
                    6028   1647 _TRX_TRAIN_IF_TIMERS1_LANE	=	0x6028
                    602C   1648 _TRX_TRAIN_IF_TIMERS2_LANE	=	0x602c
                    6030   1649 _TRX_TRAIN_IF_TIMERS_ENABLE_LANE	=	0x6030
                    6034   1650 _DFE_CONTROL_0	=	0x6034
                    6038   1651 _DFE_CONTROL_1	=	0x6038
                    6040   1652 _DFE_CONTROL_2	=	0x6040
                    6044   1653 _DFE_CONTROL_3	=	0x6044
                    6048   1654 _DFE_CONTROL_4	=	0x6048
                    604C   1655 _DFE_CONTROL_5	=	0x604c
                    6050   1656 _TRAIN_CONTROL_0	=	0x6050
                    6054   1657 _TRAIN_CONTROL_1	=	0x6054
                    6058   1658 _TRAIN_CONTROL_2	=	0x6058
                    605C   1659 _RPTA_CONFIG_0	=	0x605c
                    6060   1660 _RPTA_CONFIG_1	=	0x6060
                    6064   1661 _DLL_CAL	=	0x6064
                    6068   1662 _TRAIN_PARA_0	=	0x6068
                    606C   1663 _TRAIN_PARA_1	=	0x606c
                    6070   1664 _TRAIN_PARA_2	=	0x6070
                    6074   1665 _TRAIN_PARA_3	=	0x6074
                    6078   1666 _DFE_CONTROL_6	=	0x6078
                    607C   1667 _DFE_TEST_0	=	0x607c
                    6080   1668 _DFE_TEST_1	=	0x6080
                    6084   1669 _DFE_TEST_4	=	0x6084
                    6088   1670 _DFE_TEST_5	=	0x6088
                    608C   1671 _DFE_CONTROL_7	=	0x608c
                    6090   1672 _DFE_CONTROL_8	=	0x6090
                    6094   1673 _DFE_CONTROL_9	=	0x6094
                    6098   1674 _DFE_CONTROL_10	=	0x6098
                    609C   1675 _DFE_CONTROL_11	=	0x609c
                    60A0   1676 _CDS_CTRL_REG0	=	0x60a0
                    60A4   1677 _CDS_CTRL_REG1	=	0x60a4
                    60A8   1678 _ESM_POP_P_CNT_LOW_LANE	=	0x60a8
                    60AC   1679 _ESM_ERR_P_CNT_LOW_LANE	=	0x60ac
                    60B0   1680 _ESM_ERR_POP_CNT_HIGH_LANE	=	0x60b0
                    60B4   1681 _TRAIN_CONTROL_3	=	0x60b4
                    60B8   1682 _TRAIN_CONTROL_4	=	0x60b8
                    60BC   1683 _TRAIN_CONTROL_5	=	0x60bc
                    60C0   1684 _TRAIN_CONTROL_6	=	0x60c0
                    60C4   1685 _TRAIN_CONTROL_7	=	0x60c4
                    60C8   1686 _TRAIN_CONTROL_8	=	0x60c8
                    60CC   1687 _TRAIN_CONTROL_9	=	0x60cc
                    60D0   1688 _TRAIN_CONTROL_10	=	0x60d0
                    60D4   1689 _TRAIN_CONTROL_11	=	0x60d4
                    60D8   1690 _TRAIN_CONTROL_12	=	0x60d8
                    60DC   1691 _ESM_POP_N_CNT_LOW_LANE	=	0x60dc
                    60E0   1692 _ESM_ERR_N_CNT_LOW_LANE	=	0x60e0
                    60E4   1693 _TRAIN_CONTROL_13	=	0x60e4
                    60E8   1694 _TRAIN_CONTROL_14	=	0x60e8
                    60EC   1695 _TRAIN_CONTROL_15	=	0x60ec
                    60F0   1696 _TRAIN_CONTROL_16	=	0x60f0
                    60F4   1697 _TRAIN_CONTROL_17	=	0x60f4
                    60F8   1698 _END_XDAT_LANE	=	0x60f8
                    A000   1699 _TX_CMN_REG	=	0xa000
                    A008   1700 _DTX_REG0	=	0xa008
                    A00C   1701 _DTX_REG1	=	0xa00c
                    A010   1702 _DTX_REG2	=	0xa010
                    A014   1703 _DTX_REG3	=	0xa014
                    A018   1704 _DTX_REG4	=	0xa018
                    A01C   1705 _DTX_PHY_ALIGN_REG0	=	0xa01c
                    A024   1706 _DTX_PHY_ALIGN_REG1	=	0xa024
                    A028   1707 _DTX_PHY_ALIGN_REG2	=	0xa028
                    A02C   1708 _SRIS_REG0	=	0xa02c
                    A030   1709 _SRIS_REG1	=	0xa030
                    A100   1710 _RX_CMN_0	=	0xa100
                    A110   1711 _DFE_STATIC_REG0	=	0xa110
                    A114   1712 _DFE_STATIC_REG1	=	0xa114
                    A118   1713 _DFE_STATIC_REG3	=	0xa118
                    A11C   1714 _DFE_STATIC_REG4	=	0xa11c
                    A120   1715 _DFE_STATIC_REG5	=	0xa120
                    A124   1716 _DFE_STATIC_REG6	=	0xa124
                    4200   1717 _GLOB_RST_CLK_CTRL	=	0x4200
                    4204   1718 _GLOB_CLK_SRC_LO	=	0x4204
                    4208   1719 _GLOB_CLK_SRC_HI	=	0x4208
                    420C   1720 _GLOB_MISC_CTRL	=	0x420c
                    4210   1721 _GLOB_DP_SAL_CFG	=	0x4210
                    4214   1722 _GLOB_DP_SAL_CFG1	=	0x4214
                    4218   1723 _GLOB_DP_SAL_CFG3	=	0x4218
                    421C   1724 _GLOB_DP_SAL_CFG5	=	0x421c
                    4220   1725 _GLOB_PM_CFG0	=	0x4220
                    4224   1726 _GLOB_COUNTER_CTRL	=	0x4224
                    4228   1727 _GLOB_COUNTER_HI	=	0x4228
                    422C   1728 _GLOB_PM_DP_CTRL	=	0x422c
                    4230   1729 _GLOB_DP_BAL_CFG0	=	0x4230
                    4234   1730 _GLOB_DP_BAL_CFG2	=	0x4234
                    4238   1731 _GLOB_DP_BAL_CFG4	=	0x4238
                    423C   1732 _GLOB_BIST_CTRL	=	0x423c
                    4240   1733 _GLOB_BIST_LANE_TYPE	=	0x4240
                    4244   1734 _GLOB_BIST_START	=	0x4244
                    4248   1735 _GLOB_BIST_MASK	=	0x4248
                    424C   1736 _GLOB_BIST_RESULT	=	0x424c
                    4250   1737 _GLOB_BIST_SEQR_CFG	=	0x4250
                    4254   1738 _GLOB_BIST_DATA_HI	=	0x4254
                    4258   1739 _GLOB_PIPE_REVISION	=	0x4258
                    425C   1740 _GLOB_L1_SUBSTATES_CFG	=	0x425c
                    A200   1741 _MCU_CONTROL_0	=	0xa200
                    A204   1742 _MCU_CONTROL_1	=	0xa204
                    A208   1743 _MCU_CONTROL_2	=	0xa208
                    A20C   1744 _MCU_CONTROL_3	=	0xa20c
                    A210   1745 _MCU_CONTROL_4	=	0xa210
                    A214   1746 _MCU_DEBUG0	=	0xa214
                    A218   1747 _MCU_DEBUG1	=	0xa218
                    A21C   1748 _MEMORY_CONTROL_0	=	0xa21c
                    A220   1749 _MEMORY_CONTROL_1	=	0xa220
                    A224   1750 _MEMORY_CONTROL_2	=	0xa224
                    A228   1751 _MEMORY_CONTROL_3	=	0xa228
                    A22C   1752 _MEMORY_CONTROL_4	=	0xa22c
                    A234   1753 _MCU_INFO_0	=	0xa234
                    A238   1754 _MCU_INFO_1	=	0xa238
                    A23C   1755 _MCU_INFO_2	=	0xa23c
                    A240   1756 _MCU_INFO_3	=	0xa240
                    A244   1757 _MEM_CMN_ECC_ERR_ADDRESS0	=	0xa244
                    A2E0   1758 _ANA_IF_CMN_REG1	=	0xa2e0
                    A2E4   1759 _MEM_IRQ	=	0xa2e4
                    A2E8   1760 _MEM_IRQ_MASK	=	0xa2e8
                    A2EC   1761 _ANA_IF_CMN_REG0	=	0xa2ec
                    A2F0   1762 _APB_CONTROL_REG	=	0xa2f0
                    A2F4   1763 _MEM_IRQ_CLEAR	=	0xa2f4
                    A2F8   1764 _MCU_SYNC1	=	0xa2f8
                    A2FC   1765 _MCU_SYNC2	=	0xa2fc
                    A300   1766 _TEST0	=	0xa300
                    A304   1767 _TEST1	=	0xa304
                    A308   1768 _TEST2	=	0xa308
                    A30C   1769 _TEST3	=	0xa30c
                    A310   1770 _TEST4	=	0xa310
                    A314   1771 _SYSTEM	=	0xa314
                    A318   1772 _PM_CMN_REG1	=	0xa318
                    A31C   1773 _INPUT_CMN_PIN_REG0	=	0xa31c
                    A320   1774 _INPUT_CMN_PIN_REG1	=	0xa320
                    A324   1775 _INPUT_CMN_PIN_REG2	=	0xa324
                    A328   1776 _ANA_TSEN_CONTROL	=	0xa328
                    A32C   1777 _PLLCAL_REG0	=	0xa32c
                    A330   1778 _PLLCAL_REG1	=	0xa330
                    A334   1779 _CLKGEN_CMN_REG1	=	0xa334
                    A338   1780 _SPD_CMN_REG1	=	0xa338
                    A33C   1781 _OUTPUT_CMN_PIN_REG0	=	0xa33c
                    A340   1782 _CMN_CALIBRATION	=	0xa340
                    A344   1783 __FIELDNAME_	=	0xa344
                    A348   1784 _INPUT_CMN_PIN_REG3	=	0xa348
                    A34C   1785 _PM_CMN_REG2	=	0xa34c
                    A354   1786 _TEST5	=	0xa354
                    A358   1787 _XDATA_MEM_CHECKSUM_CMN_0	=	0xa358
                    A35C   1788 _XDATA_MEM_CHECKSUM_CMN_1	=	0xa35c
                    A360   1789 _XDATA_MEM_CHECKSUM_CMN_2	=	0xa360
                    A364   1790 _MCU_SDT_CMN	=	0xa364
                    A368   1791 _CMN_CACHE_DEBUG0	=	0xa368
                    A36C   1792 _MCU_INT_ADDR	=	0xa36c
                    A370   1793 _CMN_ISR_2	=	0xa370
                    A374   1794 _CMN_ISR_MASK_2	=	0xa374
                    A378   1795 _CMN_ISR_CLEAR_2	=	0xa378
                    A37C   1796 _CMN_MCU_GPIO	=	0xa37c
                    A380   1797 _CMN_CACHE_DEBUG1	=	0xa380
                    A384   1798 _CMN_MCU_TIMER_CONTROL	=	0xa384
                    A388   1799 _CMN_MCU_TIMER_CTRL_2_LANE	=	0xa388
                    A38C   1800 _CMN_MCU_TIMER_CTRL_3_LANE	=	0xa38c
                    A390   1801 _CMN_MCU_TIMER_CTRL_4_LANE	=	0xa390
                    A394   1802 _CMN_MCU_TIMER_CTRL_5_LANE	=	0xa394
                    A398   1803 _CMN_MCU_TIMER0_CONTROL	=	0xa398
                    A39C   1804 _CMN_MCU_TIMER1_CONTROL	=	0xa39c
                    A3A0   1805 _CMN_MCU_TIMER2_CONTROL	=	0xa3a0
                    A3A4   1806 _CMN_MCU_TIMER3_CONTROL	=	0xa3a4
                    A3A8   1807 _CMN_ISR_1	=	0xa3a8
                    A3AC   1808 _CMN_ISR_MASK_1	=	0xa3ac
                    A3B0   1809 _SET_LANE_ISR	=	0xa3b0
                    A3F4   1810 _CMN_MCU_REG	=	0xa3f4
                    A3F8   1811 _CID_REG0	=	0xa3f8
                    A3FC   1812 _CID_REG1	=	0xa3fc
                    E600   1813 _FW_REV	=	0xe600
                    E604   1814 _CONTROL_CONFIG0	=	0xe604
                    E608   1815 _CONTROL_CONFIG1	=	0xe608
                    E60C   1816 _CONTROL_CONFIG2	=	0xe60c
                    E610   1817 _CONTROL_CONFIG3	=	0xe610
                    E614   1818 _CONTROL_CONFIG4	=	0xe614
                    E618   1819 _CONTROL_CONFIG5	=	0xe618
                    E61C   1820 _CONTROL_CONFIG6	=	0xe61c
                    E620   1821 _CONTROL_CONFIG7	=	0xe620
                    E624   1822 _CAL_DATA0	=	0xe624
                    E628   1823 _TRAIN_IF_CONFIG	=	0xe628
                    E62C   1824 _CONTROL_CONFIG8	=	0xe62c
                    E630   1825 _CONTROL_CONFIG9	=	0xe630
                    E634   1826 _CON_CAL_STEP_SIZE1	=	0xe634
                    E638   1827 _CON_CAL_STEP_SIZE2	=	0xe638
                    E63C   1828 _CON_CAL_STEP_SIZE3	=	0xe63c
                    E640   1829 _CON_CAL_STEP_SIZE4	=	0xe640
                    E644   1830 _CON_CAL_STEP_SIZE5	=	0xe644
                    E648   1831 _CAL_TIME_OUT_AND_DIS	=	0xe648
                    E64C   1832 _CAL_STATUS_READ	=	0xe64c
                    E650   1833 _MCU_CONFIG	=	0xe650
                    E654   1834 _CAL_DATA1	=	0xe654
                    E658   1835 _LOOP_CNTS	=	0xe658
                    E65C   1836 _MCU_CONFIG1	=	0xe65c
                    E660   1837 _TIMER_SEL1	=	0xe660
                    E664   1838 _TIMER_SEL2	=	0xe664
                    E668   1839 _TIMER_SEL3	=	0xe668
                    E66C   1840 _G_SELLV_TXCLK	=	0xe66c
                    E670   1841 _G_SELLV_TXDATA	=	0xe670
                    E674   1842 _G_SELLV_TXPRE	=	0xe674
                    E678   1843 _G_SELLV_RXEOMCLK	=	0xe678
                    E67C   1844 _G_SELLV_RXDATACLK	=	0xe67c
                    E680   1845 _G_SELLV_RXSAMPLER	=	0xe680
                    E684   1846 _SAS_PRESET0_TB	=	0xe684
                    E688   1847 _SAS_PRESET1_TB	=	0xe688
                    E68C   1848 _SAS_PRESET2_TB	=	0xe68c
                    E690   1849 _ETH_PRESET0_TB	=	0xe690
                    E694   1850 _ETH_PRESET1_TB	=	0xe694
                    E698   1851 _TX_SAVE_0	=	0xe698
                    E69C   1852 _TX_SAVE_1	=	0xe69c
                    E6A0   1853 _TX_SAVE_2	=	0xe6a0
                    E6A4   1854 _TX_SAVE_3	=	0xe6a4
                    E6A8   1855 _TX_SAVE_4	=	0xe6a8
                    E6AC   1856 _CDS_EYE_CLK_THR	=	0xe6ac
                    E6B0   1857 _SYNC_INFO	=	0xe6b0
                    E6B4   1858 _MCU_INFO_4	=	0xe6b4
                    E6B8   1859 _MCU_INFO_5	=	0xe6b8
                    E6BC   1860 _MCU_INFO_12	=	0xe6bc
                    E6C0   1861 _MCU_INFO_13	=	0xe6c0
                    E6C4   1862 _END_XDAT_CMN	=	0xe6c4
                    2600   1863 _DME_ENC_REG0	=	0x2600
                    2604   1864 _DME_ENC_REG1	=	0x2604
                    2608   1865 _DME_ENC_REG2	=	0x2608
                    260C   1866 _DME_DEC_REG0	=	0x260c
                    2610   1867 _DME_DEC_REG1	=	0x2610
                    2614   1868 _TX_TRAIN_IF_REG0	=	0x2614
                    2618   1869 _TX_TRAIN_IF_REG1	=	0x2618
                    261C   1870 _TX_TRAIN_IF_REG2	=	0x261c
                    2620   1871 _TX_TRAIN_IF_REG3	=	0x2620
                    2624   1872 _TX_TRAIN_PATTTERN_REG0	=	0x2624
                    2628   1873 _TX_TRAIN_DRIVER_REG0	=	0x2628
                    262C   1874 _TX_TRAIN_DRIVER_REG1	=	0x262c
                    2630   1875 _TX_TRAIN_DRIVER_REG2	=	0x2630
                    2634   1876 _TX_TRAIN_DEFAULT_REG0	=	0x2634
                    2638   1877 _TX_TRAIN_DEFAULT_REG1	=	0x2638
                    263C   1878 _TX_TRAIN_DEFAULT_REG2	=	0x263c
                    2640   1879 _TX_TRAIN_DEFAULT_REG3	=	0x2640
                    2644   1880 _TX_TRAIN_DEFAULT_REG4	=	0x2644
                    2648   1881 _TX_TRAIN_DEFAULT_REG5	=	0x2648
                    264C   1882 _TX_EMPH_CTRL_REG0	=	0x264c
                    2650   1883 _LINK_TRAIN_MODE0	=	0x2650
                    2654   1884 _TX_DRV_RD_OUT_REG0	=	0x2654
                    2658   1885 _TX_AMP_CTRL_REG0	=	0x2658
                    265C   1886 _TRX_TRAIN_IF_INTERRUPT_LANE	=	0x265c
                    2660   1887 _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE	=	0x2660
                    2664   1888 _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE	=	0x2664
                    2668   1889 _TX_TRAIN_IF_REG4	=	0x2668
                    266C   1890 _TX_TRAIN_IF_REG5	=	0x266c
                    2670   1891 _TX_TRAIN_IF_REG6	=	0x2670
                    2674   1892 _TX_TRAIN_IF_REG7	=	0x2674
                    2678   1893 _TX_TRAIN_CTRL_LANE	=	0x2678
                    267C   1894 _TX_TRAIN_IF_REG8	=	0x267c
                    6100   1895 _DFE_READ_EVEN_REG0	=	0x6100
                    6104   1896 _DFE_READ_EVEN_REG1	=	0x6104
                    6108   1897 _DFE_READ_EVEN_REG2	=	0x6108
                    610C   1898 _DFE_READ_EVEN_REG3	=	0x610c
                    6110   1899 _DFE_READ_EVEN_REG4	=	0x6110
                    6114   1900 _DFE_READ_EVEN_REG5	=	0x6114
                    6118   1901 _DFE_READ_EVEN_REG6	=	0x6118
                    611C   1902 _DFE_READ_EVEN_REG7	=	0x611c
                    6120   1903 _DFE_READ_ODD_REG0	=	0x6120
                    6124   1904 _DFE_READ_ODD_REG1	=	0x6124
                    6128   1905 _DFE_READ_ODD_REG2	=	0x6128
                    612C   1906 _DFE_READ_ODD_REG3	=	0x612c
                    6130   1907 _DFE_READ_ODD_REG4	=	0x6130
                    6134   1908 _DFE_READ_ODD_REG5	=	0x6134
                    6138   1909 _DFE_READ_ODD_REG6	=	0x6138
                    613C   1910 _DFE_READ_ODD_REG7	=	0x613c
                    6140   1911 _DFE_READ_EVEN_REG8	=	0x6140
                    6144   1912 _DFE_READ_ODD_REG8	=	0x6144
                    6148   1913 _DFE_READ_F0A_EVEN	=	0x6148
                    614C   1914 _DFE_READ_F0A_ODD	=	0x614c
                    6150   1915 _DFE_READ_F0B_EVEN	=	0x6150
                    6154   1916 _DFE_READ_F0B_ODD	=	0x6154
                    6158   1917 _DFE_READ_F0D_EVEN	=	0x6158
                    615C   1918 _DFE_READ_F0D_ODD	=	0x615c
                    6160   1919 _DFE_READ_F0D_LEFT_EVEN	=	0x6160
                    6164   1920 _DFE_READ_F0D_LEFT_ODD	=	0x6164
                    6168   1921 _DFE_READ_F0D_RIGHT_EVEN	=	0x6168
                    616C   1922 _DFE_READ_F0D_RIGHT_ODD	=	0x616c
                    6170   1923 _CDS_READ_MISC0	=	0x6170
                    6174   1924 _CDS_READ_MISC1	=	0x6174
                    6214   1925 _TXTRAIN_IF_REG0	=	0x6214
                    E000   1926 _lc_speedtable	=	0xe000
                    E1C0   1927 _ring_speedtable	=	0xe1c0
                    E5C0   1928 _phy_mode_cmn_table	=	0xe5c0
                    6300   1929 _max_gen	=	0x6300
                    6301   1930 _min_gen	=	0x6301
                    6304   1931 _speedtable	=	0x6304
                    65D4   1932 _phy_mode_lane_table	=	0x65d4
                    60B4   1933 _rc_save	=	0x60b4
                    60D0   1934 _txffe_save	=	0x60d0
                    60E4   1935 _phase_save	=	0x60e4
                    6030   1936 _train_gn1_index	=	0x6030
                    6031   1937 _train_g1_index	=	0x6031
                    6032   1938 _train_g0_index	=	0x6032
                    E6B0   1939 _local_tx_preset_tb	=	0xe6b0
                    E5C1   1940 _cmx_cal_lcvco_dac	=	0xe5c1
                    E5C1   1941 _cmx_cal_lcvco_dac_lsb	=	0xe5c1
                    E5C4   1942 _cmx_cal_lcvco_dac_msb	=	0xe5c4
                    E5CA   1943 _cmx_cal_lccap_msb	=	0xe5ca
                    E5C8   1944 _cmx_cal_lccap_lsb	=	0xe5c8
                    E5CC   1945 _cmx_cal_plldcc	=	0xe5cc
                    E5D0   1946 _cmx_cal_pll_speed_ring	=	0xe5d0
                    E5D4   1947 _cmx_cal_pll_sllp_dac_coarse_ring	=	0xe5d4
                    E5D8   1948 _cmx_cal_sllp_dac_fine_ring	=	0xe5d8
                    65D4   1949 _lnx_cal_txdcc_pdiv	=	0x65d4
                    65D8   1950 _lnx_cal_txdcc_pdiv_hg	=	0x65d8
                    65DA   1951 _lnx_cal_txdcc	=	0x65da
                    65DE   1952 _lnx_cal_txdcc_hg	=	0x65de
                    65E0   1953 _lnx_cal_rxdcc_dll	=	0x65e0
                    65E4   1954 _lnx_cal_rxdcc_dll_hg	=	0x65e4
                    65E6   1955 _lnx_cal_rxdcc_data	=	0x65e6
                    65F0   1956 _lnx_cal_rxdcc_data_hg	=	0x65f0
                    65F5   1957 _lnx_cal_rxdcc_eom	=	0x65f5
                    65FF   1958 _lnx_cal_rxdcc_eom_hg	=	0x65ff
                    6604   1959 _lnx_cal_dll_gmsel	=	0x6604
                    6606   1960 _lnx_cal_vdda_dll_sel	=	0x6606
                    660A   1961 _lnx_cal_dll_eom_gmsel	=	0x660a
                    660C   1962 _lnx_cal_vdda_dll_eom_sel	=	0x660c
                    6610   1963 _lnx_cal_eom_dpher	=	0x6610
                    6612   1964 _lnx_cal_align90_dummy_clk	=	0x6612
                    661A   1965 _lnx_cal_align90_dac	=	0x661a
                    6622   1966 _lnx_cal_align90_gm	=	0x6622
                    662A   1967 _lnx_cal_sellv_txdata	=	0x662a
                    6634   1968 _lnx_cal_sellv_txclk	=	0x6634
                    663E   1969 _lnx_cal_sellv_rxdataclk	=	0x663e
                    6648   1970 _lnx_cal_sellv_txpre	=	0x6648
                    6652   1971 _lnx_cal_sellv_rxsampler	=	0x6652
                    665C   1972 _lnx_cal_sellv_rxeomclk	=	0x665c
                    6666   1973 _lnx_spdoft_tx_preset_index_lane	=	0x6666
                    6490   1974 _lnx_calx_txdcc_pdiv	=	0x6490
                    6496   1975 _lnx_calx_txdcc_pdiv_hg	=	0x6496
                    6499   1976 _lnx_calx_txdcc	=	0x6499
                    649F   1977 _lnx_calx_txdcc_hg	=	0x649f
                    64A2   1978 _lnx_calx_rxdcc_dll	=	0x64a2
                    64A8   1979 _lnx_calx_rxdcc_dll_hg	=	0x64a8
                    64AB   1980 _lnx_calx_dll_gmsel	=	0x64ab
                    64AE   1981 _lnx_calx_vdda_dll_sel	=	0x64ae
                    64B4   1982 _lnx_calx_dll_eom_gmsel	=	0x64b4
                    64B7   1983 _lnx_calx_vdda_dll_eom_sel	=	0x64b7
                    64BD   1984 _lnx_calx_eom_dpher	=	0x64bd
                    64C0   1985 _lnx_calx_align90_dummy_clk	=	0x64c0
                    64CC   1986 _lnx_calx_align90_dac	=	0x64cc
                    64D8   1987 _lnx_calx_align90_gm	=	0x64d8
                    6100   1988 _cds28	=	0x6100
                    6178   1989 _dfe_sm	=	0x6178
                    61B8   1990 _dfe_sm_dc	=	0x61b8
                    61C0   1991 _dfe_sm_save	=	0x61c0
                    03FC   1992 _UPHY_ANAREG_REV_0	=	0x03fc
                    E684   1993 _tx_tb	=	0xe684
                    E698   1994 _train_save_tb	=	0xe698
                    607C   1995 _sq_thrs_ratio_tb	=	0x607c
                           1996 ;--------------------------------------------------------
                           1997 ; absolute external ram data
                           1998 ;--------------------------------------------------------
                           1999 	.area XABS    (ABS,XDATA)
                           2000 ;--------------------------------------------------------
                           2001 ; external initialized ram data
                           2002 ;--------------------------------------------------------
                           2003 	.area HOME    (CODE)
                           2004 	.area GSINIT0 (CODE)
                           2005 	.area GSINIT1 (CODE)
                           2006 	.area GSINIT2 (CODE)
                           2007 	.area GSINIT3 (CODE)
                           2008 	.area GSINIT4 (CODE)
                           2009 	.area GSINIT5 (CODE)
                           2010 	.area GSINIT  (CODE)
                           2011 	.area GSFINAL (CODE)
                           2012 	.area CSEG    (CODE)
                           2013 ;--------------------------------------------------------
                           2014 ; global & static initialisations
                           2015 ;--------------------------------------------------------
                           2016 	.area HOME    (CODE)
                           2017 	.area GSINIT  (CODE)
                           2018 	.area GSFINAL (CODE)
                           2019 	.area GSINIT  (CODE)
                           2020 ;--------------------------------------------------------
                           2021 ; Home
                           2022 ;--------------------------------------------------------
                           2023 	.area HOME    (CODE)
                           2024 	.area HOME    (CODE)
                           2025 ;--------------------------------------------------------
                           2026 ; code
                           2027 ;--------------------------------------------------------
                           2028 	.area BANK1   (CODE)
                           2029 ;------------------------------------------------------------
                           2030 ;Allocation info for local variables in function 'check_lock'
                           2031 ;------------------------------------------------------------
                           2032 ;val                       Allocated to registers r2 r3 
                           2033 ;i                         Allocated to registers r4 
                           2034 ;------------------------------------------------------------
                           2035 ;	../../shared/src/align90_cal.c:198: inline static bool check_lock(uint16_t val) {
                           2036 ;	-----------------------------------------
                           2037 ;	 function check_lock
                           2038 ;	-----------------------------------------
   8000                    2039 _check_lock:
                    0002   2040 	ar2 = 0x02
                    0003   2041 	ar3 = 0x03
                    0004   2042 	ar4 = 0x04
                    0005   2043 	ar5 = 0x05
                    0006   2044 	ar6 = 0x06
                    0007   2045 	ar7 = 0x07
                    0000   2046 	ar0 = 0x00
                    0001   2047 	ar1 = 0x01
   8000 AA 82              2048 	mov	r2,dpl
   8002 AB 83              2049 	mov	r3,dph
                           2050 ;	../../shared/src/align90_cal.c:200: for(i=0; i<8; i++) {
   8004 7C 00              2051 	mov	r4,#0x00
   8006                    2052 00103$:
   8006 BC 08 00           2053 	cjne	r4,#0x08,00112$
   8009                    2054 00112$:
   8009 50 2A              2055 	jnc	00106$
                           2056 ;	../../shared/src/align90_cal.c:201: if(pattern_tb[i] == (val&pattern_tb_mask[i])) return 1;
   800B EC                 2057 	mov	a,r4
   800C 2C                 2058 	add	a,r4
   800D FD                 2059 	mov	r5,a
   800E FE                 2060 	mov	r6,a
   800F 90 83 FD           2061 	mov	dptr,#_pattern_tb
   8012 93                 2062 	movc	a,@a+dptr
   8013 CE                 2063 	xch	a,r6
   8014 A3                 2064 	inc	dptr
   8015 93                 2065 	movc	a,@a+dptr
   8016 FF                 2066 	mov	r7,a
   8017 ED                 2067 	mov  a,r5
   8018 90 84 0D           2068 	mov	dptr,#_pattern_tb_mask
   801B 93                 2069 	movc	a,@a+dptr
   801C CD                 2070 	xch	a,r5
   801D A3                 2071 	inc	dptr
   801E 93                 2072 	movc	a,@a+dptr
   801F F8                 2073 	mov	r0,a
   8020 EA                 2074 	mov	a,r2
   8021 52 05              2075 	anl	ar5,a
   8023 EB                 2076 	mov	a,r3
   8024 52 00              2077 	anl	ar0,a
   8026 EE                 2078 	mov	a,r6
   8027 B5 05 08           2079 	cjne	a,ar5,00105$
   802A EF                 2080 	mov	a,r7
   802B B5 00 04           2081 	cjne	a,ar0,00105$
   802E 75 82 01           2082 	mov	dpl,#0x01
   8031 22                 2083 	ret
   8032                    2084 00105$:
                           2085 ;	../../shared/src/align90_cal.c:200: for(i=0; i<8; i++) {
   8032 0C                 2086 	inc	r4
   8033 80 D1              2087 	sjmp	00103$
   8035                    2088 00106$:
                           2089 ;	../../shared/src/align90_cal.c:203: return 0;
   8035 75 82 00           2090 	mov	dpl,#0x00
   8038 22                 2091 	ret
                           2092 ;------------------------------------------------------------
                           2093 ;Allocation info for local variables in function 'find_align90_lock'
                           2094 ;------------------------------------------------------------
                           2095 ;pd                        Allocated to registers r5 
                           2096 ;pre_pd                    Allocated to stack - offset 1
                           2097 ;step_size                 Allocated to registers r6 
                           2098 ;cnt                       Allocated to stack - offset 4
                           2099 ;loop_cnt                  Allocated to stack - offset 2
                           2100 ;dir                       Allocated to stack - offset 4
                           2101 ;locked                    Allocated to stack - offset 6
                           2102 ;hit_boundary              Allocated to registers r2 
                           2103 ;__00022402                Allocated to registers r2 
                           2104 ;__00032403                Allocated to registers 
                           2105 ;val                       Allocated to stack - offset 7
                           2106 ;i                         Allocated to registers r4 
                           2107 ;------------------------------------------------------------
                           2108 ;	../../shared/src/align90_cal.c:206: bool find_align90_lock(void) BANKING_CTRL {
                           2109 ;	-----------------------------------------
                           2110 ;	 function find_align90_lock
                           2111 ;	-----------------------------------------
   8039                    2112 _find_align90_lock:
   8039 C0 18              2113 	push	_bp
   803B E5 81              2114 	mov	a,sp
   803D F5 18              2115 	mov	_bp,a
   803F 24 08              2116 	add	a,#0x08
   8041 F5 81              2117 	mov	sp,a
                           2118 ;	../../shared/src/align90_cal.c:212: dir = 0; loop_cnt = 700; locked = 0;	
   8043 E5 18              2119 	mov	a,_bp
   8045 24 04              2120 	add	a,#0x04
   8047 F8                 2121 	mov	r0,a
   8048 76 00              2122 	mov	@r0,#0x00
   804A 08                 2123 	inc	r0
   804B 76 00              2124 	mov	@r0,#0x00
   804D E5 18              2125 	mov	a,_bp
   804F 24 06              2126 	add	a,#0x06
   8051 F8                 2127 	mov	r0,a
   8052 76 00              2128 	mov	@r0,#0x00
                           2129 ;	../../shared/src/align90_cal.c:213: gm_bin = gray2bi[reg_ALIGN90_GM_LANE_2_0];	
   8054 90 00 30           2130 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_12
   8057 E0                 2131 	movx	a,@dptr
   8058 03                 2132 	rr	a
   8059 54 07              2133 	anl	a,#0x07
   805B 90 84 1D           2134 	mov	dptr,#_gray2bi
   805E 93                 2135 	movc	a,@a+dptr
   805F 90 66 1D           2136 	mov	dptr,#_gm_bin
   8062 F0                 2137 	movx	@dptr,a
                           2138 ;	../../shared/src/align90_cal.c:214: dac = reg_ALIGN90_DAC_LANE_5_0;
   8063 90 00 34           2139 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_13
   8066 E0                 2140 	movx	a,@dptr
   8067 03                 2141 	rr	a
   8068 03                 2142 	rr	a
   8069 54 3F              2143 	anl	a,#0x3f
   806B 90 66 1E           2144 	mov	dptr,#_dac
   806E F0                 2145 	movx	@dptr,a
                           2146 ;	../../shared/src/align90_cal.c:215: dm = reg_ALIGN90_DUMMY_CLK_LANE;
   806F 90 00 34           2147 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_13
   8072 E0                 2148 	movx	a,@dptr
   8073 03                 2149 	rr	a
   8074 54 01              2150 	anl	a,#0x01
   8076 90 66 1F           2151 	mov	dptr,#_dm
   8079 F0                 2152 	movx	@dptr,a
                           2153 ;	../../shared/src/align90_cal.c:217: pd = align90_read_pd();
   807A 78 35              2154 	mov	r0,#_align90_read_pd
   807C 79 81              2155 	mov	r1,#(_align90_read_pd >> 8)
   807E 7A 02              2156 	mov	r2,#(_align90_read_pd >> 16)
   8080 12 00 B3           2157 	lcall	__sdcc_banked_call
   8083 AD 82              2158 	mov	r5,dpl
                           2159 ;	../../shared/src/align90_cal.c:218: reg_MCU_DEBUG2_LANE_7_0 = pd; //for testbench
   8085 90 22 B6           2160 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0002)
   8088 ED                 2161 	mov	a,r5
   8089 F0                 2162 	movx	@dptr,a
                           2163 ;	../../shared/src/align90_cal.c:220: if( LOAD_CAL_ON == 1) step_size = 8;
   808A 90 60 08           2164 	mov	dptr,#_CAL_CTRL3_LANE
   808D E0                 2165 	movx	a,@dptr
   808E FE                 2166 	mov	r6,a
   808F BE 01 04           2167 	cjne	r6,#0x01,00102$
   8092 7E 08              2168 	mov	r6,#0x08
   8094 80 02              2169 	sjmp	00161$
   8096                    2170 00102$:
                           2171 ;	../../shared/src/align90_cal.c:221: else step_size = 1;
   8096 7E 01              2172 	mov	r6,#0x01
                           2173 ;	../../shared/src/align90_cal.c:228: do {
   8098                    2174 00161$:
   8098 A8 18              2175 	mov	r0,_bp
   809A 08                 2176 	inc	r0
   809B 08                 2177 	inc	r0
   809C 76 BC              2178 	mov	@r0,#0xBC
   809E 08                 2179 	inc	r0
   809F 76 02              2180 	mov	@r0,#0x02
   80A1                    2181 00133$:
                           2182 ;	../../shared/src/align90_cal.c:229: align90_step = step_size;
   80A1 90 22 B5           2183 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0001)
   80A4 EE                 2184 	mov	a,r6
   80A5 F0                 2185 	movx	@dptr,a
                           2186 ;	../../shared/src/align90_cal.c:230: if(cont_cal_on) {
   80A6 30 16 5C           2187 	jnb	_cont_cal_on,00114$
                           2188 ;	../../shared/src/align90_cal.c:231: if(pd) align90_step_cnt++;
   80A9 ED                 2189 	mov	a,r5
   80AA 60 09              2190 	jz	00105$
   80AC 90 66 14           2191 	mov	dptr,#_align90_step_cnt
   80AF E0                 2192 	movx	a,@dptr
   80B0 24 01              2193 	add	a,#0x01
   80B2 F0                 2194 	movx	@dptr,a
   80B3 80 09              2195 	sjmp	00106$
   80B5                    2196 00105$:
                           2197 ;	../../shared/src/align90_cal.c:232: else align90_step_cnt--;	
   80B5 90 66 14           2198 	mov	dptr,#_align90_step_cnt
   80B8 E0                 2199 	movx	a,@dptr
   80B9 14                 2200 	dec	a
   80BA 90 66 14           2201 	mov	dptr,#_align90_step_cnt
   80BD F0                 2202 	movx	@dptr,a
   80BE                    2203 00106$:
                           2204 ;	../../shared/src/align90_cal.c:238: if( align90_step_cnt == 0) {
   80BE 90 66 14           2205 	mov	dptr,#_align90_step_cnt
   80C1 E0                 2206 	movx	a,@dptr
   80C2 FC                 2207 	mov	r4,a
                           2208 ;	../../shared/src/align90_cal.c:239: pd = 0;
   80C3 70 0C              2209 	jnz	00111$
   80C5 FD                 2210 	mov	r5,a
                           2211 ;	../../shared/src/align90_cal.c:240: align90_step_cnt = ALIGN90_CAL_STEP_SIZE;
   80C6 90 E6 43           2212 	mov	dptr,#(_CON_CAL_STEP_SIZE4 + 0x0003)
   80C9 E0                 2213 	movx	a,@dptr
   80CA FF                 2214 	mov	r7,a
   80CB 90 66 14           2215 	mov	dptr,#_align90_step_cnt
   80CE F0                 2216 	movx	@dptr,a
   80CF 80 34              2217 	sjmp	00114$
   80D1                    2218 00111$:
                           2219 ;	../../shared/src/align90_cal.c:241: } else if( align90_step_cnt	>= (ALIGN90_CAL_STEP_SIZE<<1)) {
   80D1 C0 06              2220 	push	ar6
   80D3 90 E6 43           2221 	mov	dptr,#(_CON_CAL_STEP_SIZE4 + 0x0003)
   80D6 E0                 2222 	movx	a,@dptr
   80D7 FF                 2223 	mov	r7,a
   80D8 E4                 2224 	clr	a
   80D9 CF                 2225 	xch	a,r7
   80DA 25 E0              2226 	add	a,acc
   80DC CF                 2227 	xch	a,r7
   80DD 33                 2228 	rlc	a
   80DE FE                 2229 	mov	r6,a
   80DF 7A 00              2230 	mov	r2,#0x00
   80E1 C3                 2231 	clr	c
   80E2 EC                 2232 	mov	a,r4
   80E3 9F                 2233 	subb	a,r7
   80E4 EA                 2234 	mov	a,r2
   80E5 64 80              2235 	xrl	a,#0x80
   80E7 8E F0              2236 	mov	b,r6
   80E9 63 F0 80           2237 	xrl	b,#0x80
   80EC 95 F0              2238 	subb	a,b
   80EE D0 06              2239 	pop	ar6
   80F0 40 0D              2240 	jc	00108$
                           2241 ;	../../shared/src/align90_cal.c:242: pd = 1;
   80F2 7D 01              2242 	mov	r5,#0x01
                           2243 ;	../../shared/src/align90_cal.c:243: align90_step_cnt = ALIGN90_CAL_STEP_SIZE;
   80F4 90 E6 43           2244 	mov	dptr,#(_CON_CAL_STEP_SIZE4 + 0x0003)
   80F7 E0                 2245 	movx	a,@dptr
   80F8 FA                 2246 	mov	r2,a
   80F9 90 66 14           2247 	mov	dptr,#_align90_step_cnt
   80FC F0                 2248 	movx	@dptr,a
   80FD 80 06              2249 	sjmp	00114$
   80FF                    2250 00108$:
                           2251 ;	../../shared/src/align90_cal.c:245: else return 1;		
   80FF 75 82 01           2252 	mov	dpl,#0x01
   8102 02 82 24           2253 	ljmp	00143$
   8105                    2254 00114$:
                           2255 ;	../../shared/src/align90_cal.c:249: if(pd == 1) { //inc DAC
   8105 BD 01 11           2256 	cjne	r5,#0x01,00116$
                           2257 ;	../../shared/src/align90_cal.c:250: hit_boundary = get_dac_inc(); 
   8108 C0 06              2258 	push	ar6
   810A 78 A6              2259 	mov	r0,#_get_dac_inc
   810C 79 81              2260 	mov	r1,#(_get_dac_inc >> 8)
   810E 7A 02              2261 	mov	r2,#(_get_dac_inc >> 16)
   8110 12 00 B3           2262 	lcall	__sdcc_banked_call
   8113 AA 82              2263 	mov	r2,dpl
   8115 D0 06              2264 	pop	ar6
   8117 80 11              2265 	sjmp	00117$
   8119                    2266 00116$:
                           2267 ;	../../shared/src/align90_cal.c:253: hit_boundary = get_dac_dec(); 
   8119 C0 06              2268 	push	ar6
   811B 78 4D              2269 	mov	r0,#_get_dac_dec
   811D 79 82              2270 	mov	r1,#(_get_dac_dec >> 8)
   811F 7A 02              2271 	mov	r2,#(_get_dac_dec >> 16)
   8121 12 00 B3           2272 	lcall	__sdcc_banked_call
   8124 AB 82              2273 	mov	r3,dpl
   8126 D0 06              2274 	pop	ar6
   8128 8B 02              2275 	mov	ar2,r3
   812A                    2276 00117$:
                           2277 ;	../../shared/src/align90_cal.c:256: if( hit_boundary ) break;
   812A EA                 2278 	mov	a,r2
   812B 60 03              2279 	jz	00170$
   812D 02 82 1D           2280 	ljmp	00135$
   8130                    2281 00170$:
                           2282 ;	../../shared/src/align90_cal.c:258: align90_update();
   8130 C0 06              2283 	push	ar6
   8132 78 A5              2284 	mov	r0,#_align90_update
   8134 79 83              2285 	mov	r1,#(_align90_update >> 8)
   8136 7A 01              2286 	mov	r2,#(_align90_update >> 16)
   8138 12 00 B3           2287 	lcall	__sdcc_banked_call
   813B D0 06              2288 	pop	ar6
                           2289 ;	../../shared/src/align90_cal.c:260: if( cont_cal_on ) {
   813D 30 16 0A           2290 	jnb	_cont_cal_on,00121$
                           2291 ;	../../shared/src/align90_cal.c:261: locked = 1;
   8140 E5 18              2292 	mov	a,_bp
   8142 24 06              2293 	add	a,#0x06
   8144 F8                 2294 	mov	r0,a
   8145 76 01              2295 	mov	@r0,#0x01
                           2296 ;	../../shared/src/align90_cal.c:262: break;
   8147 02 82 1D           2297 	ljmp	00135$
   814A                    2298 00121$:
                           2299 ;	../../shared/src/align90_cal.c:265: pd = align90_read_pd();
   814A C0 06              2300 	push	ar6
   814C 78 35              2301 	mov	r0,#_align90_read_pd
   814E 79 81              2302 	mov	r1,#(_align90_read_pd >> 8)
   8150 7A 02              2303 	mov	r2,#(_align90_read_pd >> 16)
   8152 12 00 B3           2304 	lcall	__sdcc_banked_call
   8155 AA 82              2305 	mov	r2,dpl
   8157 D0 06              2306 	pop	ar6
   8159 8A 05              2307 	mov	ar5,r2
                           2308 ;	../../shared/src/align90_cal.c:266: reg_MCU_DEBUG2_LANE_7_0 = pd; //for testbench
   815B 90 22 B6           2309 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0002)
   815E ED                 2310 	mov	a,r5
   815F F0                 2311 	movx	@dptr,a
                           2312 ;	../../shared/src/align90_cal.c:268: if( pd != pre_pd) {
   8160 A8 18              2313 	mov	r0,_bp
   8162 08                 2314 	inc	r0
   8163 E6                 2315 	mov	a,@r0
   8164 B5 05 02           2316 	cjne	a,ar5,00172$
   8167 80 11              2317 	sjmp	00128$
   8169                    2318 00172$:
                           2319 ;	../../shared/src/align90_cal.c:269: pre_pd = pd;
   8169 A8 18              2320 	mov	r0,_bp
   816B 08                 2321 	inc	r0
   816C A6 05              2322 	mov	@r0,ar5
                           2323 ;	../../shared/src/align90_cal.c:270: if(step_size == 8) step_size = 2; 
   816E BE 08 04           2324 	cjne	r6,#0x08,00125$
   8171 7E 02              2325 	mov	r6,#0x02
   8173 80 05              2326 	sjmp	00128$
   8175                    2327 00125$:
                           2328 ;	../../shared/src/align90_cal.c:271: else if(step_size == 2) step_size = 1;
   8175 BE 02 02           2329 	cjne	r6,#0x02,00128$
   8178 7E 01              2330 	mov	r6,#0x01
   817A                    2331 00128$:
                           2332 ;	../../shared/src/align90_cal.c:283: dir<<=1;
   817A E5 18              2333 	mov	a,_bp
   817C 24 04              2334 	add	a,#0x04
   817E F8                 2335 	mov	r0,a
   817F 08                 2336 	inc	r0
   8180 E6                 2337 	mov	a,@r0
   8181 18                 2338 	dec	r0
   8182 C6                 2339 	xch	a,@r0
   8183 25 E0              2340 	add	a,acc
   8185 C6                 2341 	xch	a,@r0
   8186 33                 2342 	rlc	a
   8187 08                 2343 	inc	r0
   8188 F6                 2344 	mov	@r0,a
                           2345 ;	../../shared/src/align90_cal.c:284: dir |= pd;
   8189 8D 02              2346 	mov	ar2,r5
   818B 7B 00              2347 	mov	r3,#0x00
   818D E5 18              2348 	mov	a,_bp
   818F 24 04              2349 	add	a,#0x04
   8191 F8                 2350 	mov	r0,a
   8192 EA                 2351 	mov	a,r2
   8193 46                 2352 	orl	a,@r0
   8194 F6                 2353 	mov	@r0,a
   8195 EB                 2354 	mov	a,r3
   8196 08                 2355 	inc	r0
   8197 46                 2356 	orl	a,@r0
   8198 F6                 2357 	mov	@r0,a
                           2358 ;	../../shared/src/align90_cal.c:291: if( check_lock(dir)) { 
   8199 E5 18              2359 	mov	a,_bp
   819B 24 04              2360 	add	a,#0x04
   819D F8                 2361 	mov	r0,a
   819E E5 18              2362 	mov	a,_bp
   81A0 24 07              2363 	add	a,#0x07
   81A2 F9                 2364 	mov	r1,a
   81A3 E6                 2365 	mov	a,@r0
   81A4 F7                 2366 	mov	@r1,a
   81A5 08                 2367 	inc	r0
   81A6 09                 2368 	inc	r1
   81A7 E6                 2369 	mov	a,@r0
   81A8 F7                 2370 	mov	@r1,a
                           2371 ;	../../shared/src/align90_cal.c:200: for(i=0; i<8; i++) {
   81A9 7C 00              2372 	mov	r4,#0x00
   81AB                    2373 00139$:
   81AB BC 08 00           2374 	cjne	r4,#0x08,00177$
   81AE                    2375 00177$:
   81AE 50 3B              2376 	jnc	00142$
                           2377 ;	../../shared/src/align90_cal.c:201: if(pattern_tb[i] == (val&pattern_tb_mask[i])) return 1;
   81B0 C0 06              2378 	push	ar6
   81B2 EC                 2379 	mov	a,r4
   81B3 2C                 2380 	add	a,r4
   81B4 FF                 2381 	mov	r7,a
   81B5 FE                 2382 	mov	r6,a
   81B6 90 83 FD           2383 	mov	dptr,#_pattern_tb
   81B9 93                 2384 	movc	a,@a+dptr
   81BA CE                 2385 	xch	a,r6
   81BB A3                 2386 	inc	dptr
   81BC 93                 2387 	movc	a,@a+dptr
   81BD FA                 2388 	mov	r2,a
   81BE EF                 2389 	mov	a,r7
   81BF FB                 2390 	mov	r3,a
   81C0 90 84 0D           2391 	mov	dptr,#_pattern_tb_mask
   81C3 93                 2392 	movc	a,@a+dptr
   81C4 CB                 2393 	xch	a,r3
   81C5 A3                 2394 	inc	dptr
   81C6 93                 2395 	movc	a,@a+dptr
   81C7 FF                 2396 	mov	r7,a
   81C8 E5 18              2397 	mov	a,_bp
   81CA 24 07              2398 	add	a,#0x07
   81CC F8                 2399 	mov	r0,a
   81CD E6                 2400 	mov	a,@r0
   81CE 52 03              2401 	anl	ar3,a
   81D0 08                 2402 	inc	r0
   81D1 E6                 2403 	mov	a,@r0
   81D2 52 07              2404 	anl	ar7,a
   81D4 EE                 2405 	mov	a,r6
   81D5 B5 03 06           2406 	cjne	a,ar3,00179$
   81D8 EA                 2407 	mov	a,r2
   81D9 B5 07 02           2408 	cjne	a,ar7,00179$
   81DC 80 04              2409 	sjmp	00180$
   81DE                    2410 00179$:
   81DE D0 06              2411 	pop	ar6
   81E0 80 06              2412 	sjmp	00141$
   81E2                    2413 00180$:
   81E2 D0 06              2414 	pop	ar6
   81E4 7A 01              2415 	mov	r2,#0x01
   81E6 80 05              2416 	sjmp	00138$
   81E8                    2417 00141$:
                           2418 ;	../../shared/src/align90_cal.c:200: for(i=0; i<8; i++) {
   81E8 0C                 2419 	inc	r4
   81E9 80 C0              2420 	sjmp	00139$
   81EB                    2421 00142$:
                           2422 ;	../../shared/src/align90_cal.c:203: return 0;
   81EB 7A 00              2423 	mov	r2,#0x00
                           2424 ;	../../shared/src/align90_cal.c:291: if( check_lock(dir)) { 
   81ED                    2425 00138$:
   81ED EA                 2426 	mov	a,r2
   81EE 60 10              2427 	jz	00130$
                           2428 ;	../../shared/src/align90_cal.c:292: locked = 1;
   81F0 E5 18              2429 	mov	a,_bp
   81F2 24 06              2430 	add	a,#0x06
   81F4 F8                 2431 	mov	r0,a
   81F5 76 01              2432 	mov	@r0,#0x01
                           2433 ;	../../shared/src/align90_cal.c:293: lnx_ALIGN90_TRACKING_PASS_LANE = 1;
   81F7 90 60 06           2434 	mov	dptr,#(_CAL_CTRL2_LANE + 0x0002)
   81FA E0                 2435 	movx	a,@dptr
   81FB 44 08              2436 	orl	a,#0x08
   81FD F0                 2437 	movx	@dptr,a
                           2438 ;	../../shared/src/align90_cal.c:294: break;
   81FE 80 1D              2439 	sjmp	00135$
   8200                    2440 00130$:
                           2441 ;	../../shared/src/align90_cal.c:297: if(cmx_ALIGN90_CAL_TIMEOUT_DIS == 0)
   8200 90 E6 49           2442 	mov	dptr,#(_CAL_TIME_OUT_AND_DIS + 0x0001)
   8203 E0                 2443 	movx	a,@dptr
   8204 20 E0 0A           2444 	jb	acc.0,00134$
                           2445 ;	../../shared/src/align90_cal.c:298: loop_cnt--;
   8207 A8 18              2446 	mov	r0,_bp
   8209 08                 2447 	inc	r0
   820A 08                 2448 	inc	r0
   820B 16                 2449 	dec	@r0
   820C B6 FF 02           2450 	cjne	@r0,#0xff,00183$
   820F 08                 2451 	inc	r0
   8210 16                 2452 	dec	@r0
   8211                    2453 00183$:
   8211                    2454 00134$:
                           2455 ;	../../shared/src/align90_cal.c:300: } while(loop_cnt > 0);
   8211 A8 18              2456 	mov	r0,_bp
   8213 08                 2457 	inc	r0
   8214 08                 2458 	inc	r0
   8215 E6                 2459 	mov	a,@r0
   8216 08                 2460 	inc	r0
   8217 46                 2461 	orl	a,@r0
   8218 60 03              2462 	jz	00184$
   821A 02 80 A1           2463 	ljmp	00133$
   821D                    2464 00184$:
   821D                    2465 00135$:
                           2466 ;	../../shared/src/align90_cal.c:307: return locked;
   821D E5 18              2467 	mov	a,_bp
   821F 24 06              2468 	add	a,#0x06
   8221 F8                 2469 	mov	r0,a
   8222 86 82              2470 	mov	dpl,@r0
   8224                    2471 00143$:
   8224 85 18 81           2472 	mov	sp,_bp
   8227 D0 18              2473 	pop	_bp
   8229 02 00 C5           2474 	ljmp	__sdcc_banked_ret
                           2475 ;------------------------------------------------------------
                           2476 ;Allocation info for local variables in function 'rxalign90_cal'
                           2477 ;------------------------------------------------------------
                           2478 ;div2                      Allocated to registers r3 
                           2479 ;rate                      Allocated to registers r2 
                           2480 ;i                         Allocated to registers r4 
                           2481 ;------------------------------------------------------------
                           2482 ;	../../shared/src/align90_cal.c:310: void rxalign90_cal(void) BANKING_CTRL {
                           2483 ;	-----------------------------------------
                           2484 ;	 function rxalign90_cal
                           2485 ;	-----------------------------------------
   822C                    2486 _rxalign90_cal:
                           2487 ;	../../shared/src/align90_cal.c:316: if(phy_mode==PCIE) rate = rx_pll_rate_x;
   822C 90 A3 16           2488 	mov	dptr,#(_SYSTEM + 0x0002)
   822F E0                 2489 	movx	a,@dptr
   8230 54 07              2490 	anl	a,#0x07
   8232 FA                 2491 	mov	r2,a
   8233 BA 03 07           2492 	cjne	r2,#0x03,00105$
   8236 90 67 AD           2493 	mov	dptr,#_rx_pll_rate_x
   8239 E0                 2494 	movx	a,@dptr
   823A FA                 2495 	mov	r2,a
   823B 80 12              2496 	sjmp	00106$
   823D                    2497 00105$:
                           2498 ;	../../shared/src/align90_cal.c:317: else if(rx_pll_rate_x>1) rate = 0;
   823D 90 67 AD           2499 	mov	dptr,#_rx_pll_rate_x
   8240 E0                 2500 	movx	a,@dptr
   8241 FB                 2501 	mov	r3,a
   8242 74 01              2502 	mov	a,#0x01
   8244 B5 03 00           2503 	cjne	a,ar3,00123$
   8247                    2504 00123$:
   8247 50 04              2505 	jnc	00102$
   8249 7A 00              2506 	mov	r2,#0x00
   824B 80 02              2507 	sjmp	00106$
   824D                    2508 00102$:
                           2509 ;	../../shared/src/align90_cal.c:318: else rate = rx_pll_rate_x;
   824D 8B 02              2510 	mov	ar2,r3
   824F                    2511 00106$:
                           2512 ;	../../shared/src/align90_cal.c:320: PHY_STATUS = ST_RXALIGN90_CAL;
   824F 90 22 30           2513 	mov	dptr,#_MCU_STATUS0_LANE
   8252 74 0F              2514 	mov	a,#0x0F
   8254 F0                 2515 	movx	@dptr,a
                           2516 ;	../../shared/src/align90_cal.c:322: div2 = (reg_RX_SPEED_DIV_LANE_2_0&0x04)==0;		
   8255 90 02 28           2517 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_138
   8258 E0                 2518 	movx	a,@dptr
   8259 03                 2519 	rr	a
   825A 03                 2520 	rr	a
   825B 54 07              2521 	anl	a,#0x07
   825D FB                 2522 	mov	r3,a
   825E 53 03 04           2523 	anl	ar3,#0x04
   8261 E4                 2524 	clr	a
   8262 BB 00 01           2525 	cjne	r3,#0x00,00125$
   8265 04                 2526 	inc	a
   8266                    2527 00125$:
   8266 FB                 2528 	mov	r3,a
                           2529 ;	../../shared/src/align90_cal.c:324: lnx_ALIGN90_TRACKING_PASS_LANE = 0;
   8267 90 60 06           2530 	mov	dptr,#(_CAL_CTRL2_LANE + 0x0002)
   826A E0                 2531 	movx	a,@dptr
   826B 54 F7              2532 	anl	a,#0xf7
   826D F0                 2533 	movx	@dptr,a
                           2534 ;	../../shared/src/align90_cal.c:325: lnx_RXALIGN90_CAL_DONE_LANE = 0;
   826E 90 60 01           2535 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0001)
   8271 E0                 2536 	movx	a,@dptr
   8272 54 FD              2537 	anl	a,#0xfd
   8274 F0                 2538 	movx	@dptr,a
                           2539 ;	../../shared/src/align90_cal.c:327: if( (cmx_RXALIGN90_CAL_EXT_EN==1) || (lnx_CAL_DONE_LANE==1)) {
   8275 90 E6 0A           2540 	mov	dptr,#(_CONTROL_CONFIG1 + 0x0002)
   8278 E0                 2541 	movx	a,@dptr
   8279 03                 2542 	rr	a
   827A 03                 2543 	rr	a
   827B 54 01              2544 	anl	a,#0x01
   827D FC                 2545 	mov	r4,a
   827E BC 01 02           2546 	cjne	r4,#0x01,00127$
   8281 80 0A              2547 	sjmp	00107$
   8283                    2548 00127$:
   8283 90 60 03           2549 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   8286 E0                 2550 	movx	a,@dptr
   8287 54 01              2551 	anl	a,#0x01
   8289 FC                 2552 	mov	r4,a
   828A BC 01 44           2553 	cjne	r4,#0x01,00108$
   828D                    2554 00107$:
                           2555 ;	../../shared/src/align90_cal.c:333: dac = lnx_calx_align90_dac[PWR][rate][div2];
   828D EA                 2556 	mov	a,r2
   828E 2A                 2557 	add	a,r2
   828F FC                 2558 	mov	r4,a
   8290 24 CC              2559 	add	a,#_lnx_calx_align90_dac
   8292 FD                 2560 	mov	r5,a
   8293 E4                 2561 	clr	a
   8294 34 64              2562 	addc	a,#(_lnx_calx_align90_dac >> 8)
   8296 FE                 2563 	mov	r6,a
   8297 EB                 2564 	mov	a,r3
   8298 2D                 2565 	add	a,r5
   8299 F5 82              2566 	mov	dpl,a
   829B E4                 2567 	clr	a
   829C 3E                 2568 	addc	a,r6
   829D F5 83              2569 	mov	dph,a
   829F E0                 2570 	movx	a,@dptr
   82A0 90 66 1E           2571 	mov	dptr,#_dac
   82A3 F0                 2572 	movx	@dptr,a
                           2573 ;	../../shared/src/align90_cal.c:334: gm = lnx_calx_align90_gm[PWR][rate][div2];
   82A4 EC                 2574 	mov	a,r4
   82A5 24 D8              2575 	add	a,#_lnx_calx_align90_gm
   82A7 FD                 2576 	mov	r5,a
   82A8 E4                 2577 	clr	a
   82A9 34 64              2578 	addc	a,#(_lnx_calx_align90_gm >> 8)
   82AB FE                 2579 	mov	r6,a
   82AC EB                 2580 	mov	a,r3
   82AD 2D                 2581 	add	a,r5
   82AE F5 82              2582 	mov	dpl,a
   82B0 E4                 2583 	clr	a
   82B1 3E                 2584 	addc	a,r6
   82B2 F5 83              2585 	mov	dph,a
   82B4 E0                 2586 	movx	a,@dptr
   82B5 90 66 20           2587 	mov	dptr,#_gm
   82B8 F0                 2588 	movx	@dptr,a
                           2589 ;	../../shared/src/align90_cal.c:335: dm = lnx_calx_align90_dummy_clk[PWR][rate][div2];
   82B9 EC                 2590 	mov	a,r4
   82BA 24 C0              2591 	add	a,#_lnx_calx_align90_dummy_clk
   82BC FC                 2592 	mov	r4,a
   82BD E4                 2593 	clr	a
   82BE 34 64              2594 	addc	a,#(_lnx_calx_align90_dummy_clk >> 8)
   82C0 FD                 2595 	mov	r5,a
   82C1 EB                 2596 	mov	a,r3
   82C2 2C                 2597 	add	a,r4
   82C3 F5 82              2598 	mov	dpl,a
   82C5 E4                 2599 	clr	a
   82C6 3D                 2600 	addc	a,r5
   82C7 F5 83              2601 	mov	dph,a
   82C9 E0                 2602 	movx	a,@dptr
   82CA FC                 2603 	mov	r4,a
   82CB 90 66 1F           2604 	mov	dptr,#_dm
   82CE F0                 2605 	movx	@dptr,a
   82CF 80 12              2606 	sjmp	00109$
   82D1                    2607 00108$:
                           2608 ;	../../shared/src/align90_cal.c:340: dac = 0x31; gm = 5; dm  = 1;	
   82D1 90 66 1E           2609 	mov	dptr,#_dac
   82D4 74 31              2610 	mov	a,#0x31
   82D6 F0                 2611 	movx	@dptr,a
   82D7 90 66 20           2612 	mov	dptr,#_gm
   82DA 74 05              2613 	mov	a,#0x05
   82DC F0                 2614 	movx	@dptr,a
   82DD 90 66 1F           2615 	mov	dptr,#_dm
   82E0 74 01              2616 	mov	a,#0x01
   82E2 F0                 2617 	movx	@dptr,a
   82E3                    2618 00109$:
                           2619 ;	../../shared/src/align90_cal.c:342: gm_bin = gray2bi[gm];	
   82E3 90 66 20           2620 	mov	dptr,#_gm
   82E6 E0                 2621 	movx	a,@dptr
   82E7 90 84 1D           2622 	mov	dptr,#_gray2bi
   82EA 93                 2623 	movc	a,@a+dptr
   82EB 90 66 1D           2624 	mov	dptr,#_gm_bin
   82EE F0                 2625 	movx	@dptr,a
                           2626 ;	../../shared/src/align90_cal.c:344: align90_update();
   82EF C0 02              2627 	push	ar2
   82F1 C0 03              2628 	push	ar3
   82F3 78 A5              2629 	mov	r0,#_align90_update
   82F5 79 83              2630 	mov	r1,#(_align90_update >> 8)
   82F7 7A 01              2631 	mov	r2,#(_align90_update >> 16)
   82F9 12 00 B3           2632 	lcall	__sdcc_banked_call
   82FC D0 03              2633 	pop	ar3
   82FE D0 02              2634 	pop	ar2
                           2635 ;	../../shared/src/align90_cal.c:346: if( LOAD_CAL_ON==0 && (cmx_RXALIGN90_CAL_EXT_EN==0) ) {
   8300 90 60 08           2636 	mov	dptr,#_CAL_CTRL3_LANE
   8303 E0                 2637 	movx	a,@dptr
   8304 60 03              2638 	jz	00130$
   8306 02 83 92           2639 	ljmp	00112$
   8309                    2640 00130$:
   8309 90 E6 0A           2641 	mov	dptr,#(_CONTROL_CONFIG1 + 0x0002)
   830C E0                 2642 	movx	a,@dptr
   830D 30 E2 03           2643 	jnb	acc.2,00131$
   8310 02 83 92           2644 	ljmp	00112$
   8313                    2645 00131$:
                           2646 ;	../../shared/src/align90_cal.c:347: lnx_RXALIGN90_CAL_PASS_LANE = find_align90_lock();
   8313 C0 02              2647 	push	ar2
   8315 C0 03              2648 	push	ar3
   8317 78 39              2649 	mov	r0,#_find_align90_lock
   8319 79 80              2650 	mov	r1,#(_find_align90_lock >> 8)
   831B 7A 01              2651 	mov	r2,#(_find_align90_lock >> 16)
   831D 12 00 B3           2652 	lcall	__sdcc_banked_call
   8320 AC 82              2653 	mov	r4,dpl
   8322 D0 03              2654 	pop	ar3
   8324 D0 02              2655 	pop	ar2
   8326 90 60 05           2656 	mov	dptr,#(_CAL_CTRL2_LANE + 0x0001)
   8329 EC                 2657 	mov	a,r4
   832A 13                 2658 	rrc	a
   832B E0                 2659 	movx	a,@dptr
   832C 92 E1              2660 	mov	acc.1,c
   832E F0                 2661 	movx	@dptr,a
                           2662 ;	../../shared/src/align90_cal.c:348: i = reg_ALIGN90_GM_LANE_2_0;
   832F 90 00 30           2663 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_12
   8332 E0                 2664 	movx	a,@dptr
   8333 03                 2665 	rr	a
   8334 54 07              2666 	anl	a,#0x07
   8336 FC                 2667 	mov	r4,a
                           2668 ;	../../shared/src/align90_cal.c:349: cal_align90_gm_bin[rate] = gray2bi[i];
   8337 EA                 2669 	mov	a,r2
   8338 24 33              2670 	add	a,#_cal_align90_gm_bin
   833A FD                 2671 	mov	r5,a
   833B E4                 2672 	clr	a
   833C 34 66              2673 	addc	a,#(_cal_align90_gm_bin >> 8)
   833E FE                 2674 	mov	r6,a
   833F EC                 2675 	mov	a,r4
   8340 90 84 1D           2676 	mov	dptr,#_gray2bi
   8343 93                 2677 	movc	a,@a+dptr
   8344 8D 82              2678 	mov	dpl,r5
   8346 8E 83              2679 	mov	dph,r6
   8348 F0                 2680 	movx	@dptr,a
                           2681 ;	../../shared/src/align90_cal.c:355: lnx_calx_align90_dac[PWR][rate][div2] = dac;
   8349 EA                 2682 	mov	a,r2
   834A 2A                 2683 	add	a,r2
   834B FA                 2684 	mov	r2,a
   834C 24 CC              2685 	add	a,#_lnx_calx_align90_dac
   834E FC                 2686 	mov	r4,a
   834F E4                 2687 	clr	a
   8350 34 64              2688 	addc	a,#(_lnx_calx_align90_dac >> 8)
   8352 FD                 2689 	mov	r5,a
   8353 EB                 2690 	mov	a,r3
   8354 2C                 2691 	add	a,r4
   8355 FC                 2692 	mov	r4,a
   8356 E4                 2693 	clr	a
   8357 3D                 2694 	addc	a,r5
   8358 FD                 2695 	mov	r5,a
   8359 90 66 1E           2696 	mov	dptr,#_dac
   835C E0                 2697 	movx	a,@dptr
   835D 8C 82              2698 	mov	dpl,r4
   835F 8D 83              2699 	mov	dph,r5
   8361 F0                 2700 	movx	@dptr,a
                           2701 ;	../../shared/src/align90_cal.c:356: lnx_calx_align90_gm[PWR][rate][div2] = gm;
   8362 EA                 2702 	mov	a,r2
   8363 24 D8              2703 	add	a,#_lnx_calx_align90_gm
   8365 FC                 2704 	mov	r4,a
   8366 E4                 2705 	clr	a
   8367 34 64              2706 	addc	a,#(_lnx_calx_align90_gm >> 8)
   8369 FD                 2707 	mov	r5,a
   836A EB                 2708 	mov	a,r3
   836B 2C                 2709 	add	a,r4
   836C FC                 2710 	mov	r4,a
   836D E4                 2711 	clr	a
   836E 3D                 2712 	addc	a,r5
   836F FD                 2713 	mov	r5,a
   8370 90 66 20           2714 	mov	dptr,#_gm
   8373 E0                 2715 	movx	a,@dptr
   8374 FE                 2716 	mov	r6,a
   8375 8C 82              2717 	mov	dpl,r4
   8377 8D 83              2718 	mov	dph,r5
   8379 F0                 2719 	movx	@dptr,a
                           2720 ;	../../shared/src/align90_cal.c:357: lnx_calx_align90_dummy_clk[PWR][rate][div2] = dm;
   837A EA                 2721 	mov	a,r2
   837B 24 C0              2722 	add	a,#_lnx_calx_align90_dummy_clk
   837D FA                 2723 	mov	r2,a
   837E E4                 2724 	clr	a
   837F 34 64              2725 	addc	a,#(_lnx_calx_align90_dummy_clk >> 8)
   8381 FC                 2726 	mov	r4,a
   8382 EB                 2727 	mov	a,r3
   8383 2A                 2728 	add	a,r2
   8384 FB                 2729 	mov	r3,a
   8385 E4                 2730 	clr	a
   8386 3C                 2731 	addc	a,r4
   8387 FD                 2732 	mov	r5,a
   8388 90 66 1F           2733 	mov	dptr,#_dm
   838B E0                 2734 	movx	a,@dptr
   838C FA                 2735 	mov	r2,a
   838D 8B 82              2736 	mov	dpl,r3
   838F 8D 83              2737 	mov	dph,r5
   8391 F0                 2738 	movx	@dptr,a
   8392                    2739 00112$:
                           2740 ;	../../shared/src/align90_cal.c:366: lnx_RXALIGN90_CAL_DONE_LANE = 1;
   8392 90 60 01           2741 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0001)
   8395 E0                 2742 	movx	a,@dptr
   8396 44 02              2743 	orl	a,#0x02
   8398 F0                 2744 	movx	@dptr,a
                           2745 ;	../../shared/src/align90_cal.c:368: align90_step_cnt = ALIGN90_CAL_STEP_SIZE;
   8399 90 E6 43           2746 	mov	dptr,#(_CON_CAL_STEP_SIZE4 + 0x0003)
   839C E0                 2747 	movx	a,@dptr
   839D FA                 2748 	mov	r2,a
   839E 90 66 14           2749 	mov	dptr,#_align90_step_cnt
   83A1 F0                 2750 	movx	@dptr,a
   83A2 02 00 C5           2751 	ljmp	__sdcc_banked_ret
                           2752 ;------------------------------------------------------------
                           2753 ;Allocation info for local variables in function 'align90_update'
                           2754 ;------------------------------------------------------------
                           2755 ;------------------------------------------------------------
                           2756 ;	../../shared/src/align90_cal.c:372: void align90_update(void) BANKING_CTRL {
                           2757 ;	-----------------------------------------
                           2758 ;	 function align90_update
                           2759 ;	-----------------------------------------
   83A5                    2760 _align90_update:
                           2761 ;	../../shared/src/align90_cal.c:373: reg_ALIGN90_DAC_LANE_5_0 = dac;
   83A5 90 66 1E           2762 	mov	dptr,#_dac
   83A8 E0                 2763 	movx	a,@dptr
   83A9 90 00 34           2764 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_13
   83AC 25 E0              2765 	add	a,acc
   83AE 25 E0              2766 	add	a,acc
   83B0 54 FC              2767 	anl	a,#0xfc
   83B2 F5 F0              2768 	mov	b,a
   83B4 E0                 2769 	movx	a,@dptr
   83B5 54 03              2770 	anl	a,#0x03
   83B7 45 F0              2771 	orl	a,b
   83B9 F0                 2772 	movx	@dptr,a
                           2773 ;	../../shared/src/align90_cal.c:374: reg_ALIGN90_DUMMY_CLK_LANE = dm;
   83BA 90 66 1F           2774 	mov	dptr,#_dm
   83BD E0                 2775 	movx	a,@dptr
   83BE 90 00 34           2776 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_13
   83C1 13                 2777 	rrc	a
   83C2 E0                 2778 	movx	a,@dptr
   83C3 92 E1              2779 	mov	acc.1,c
   83C5 F0                 2780 	movx	@dptr,a
                           2781 ;	../../shared/src/align90_cal.c:375: gm = gm_bin ^ (gm_bin>>1);
   83C6 90 66 1D           2782 	mov	dptr,#_gm_bin
   83C9 E0                 2783 	movx	a,@dptr
   83CA FA                 2784 	mov	r2,a
   83CB C3                 2785 	clr	c
   83CC 13                 2786 	rrc	a
   83CD 62 02              2787 	xrl	ar2,a
   83CF 90 66 20           2788 	mov	dptr,#_gm
   83D2 EA                 2789 	mov	a,r2
   83D3 F0                 2790 	movx	@dptr,a
                           2791 ;	../../shared/src/align90_cal.c:376: reg_ALIGN90_GM_LANE_2_0 = gm;
   83D4 90 00 30           2792 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_12
   83D7 EA                 2793 	mov	a,r2
   83D8 2A                 2794 	add	a,r2
   83D9 54 0E              2795 	anl	a,#0x0e
   83DB F5 F0              2796 	mov	b,a
   83DD E0                 2797 	movx	a,@dptr
   83DE 54 F1              2798 	anl	a,#0xf1
   83E0 45 F0              2799 	orl	a,b
   83E2 F0                 2800 	movx	@dptr,a
                           2801 ;	../../shared/src/align90_cal.c:377: ALIGN90_SYN_CLK	= 1;
   83E3 90 00 34           2802 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_13
   83E6 E0                 2803 	movx	a,@dptr
   83E7 44 01              2804 	orl	a,#0x01
   83E9 F0                 2805 	movx	@dptr,a
                           2806 ;	../../shared/src/align90_cal.c:378: short_delay();
   83EA 78 05              2807 	mov	r0,#_short_delay
   83EC 79 C0              2808 	mov	r1,#(_short_delay >> 8)
   83EE 7A 02              2809 	mov	r2,#(_short_delay >> 16)
   83F0 12 00 B3           2810 	lcall	__sdcc_banked_call
                           2811 ;	../../shared/src/align90_cal.c:379: ALIGN90_SYN_CLK	= 0;
   83F3 90 00 34           2812 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_13
   83F6 E0                 2813 	movx	a,@dptr
   83F7 54 FE              2814 	anl	a,#0xfe
   83F9 F0                 2815 	movx	@dptr,a
   83FA 02 00 C5           2816 	ljmp	__sdcc_banked_ret
                           2817 	.area CSEG    (CODE)
                           2818 	.area BANK1   (CODE)
   83FD                    2819 _pattern_tb:
   83FD 05 00              2820 	.byte #0x05,#0x00	; 5
   83FF 0A 00              2821 	.byte #0x0A,#0x00	; 10
   8401 33 00              2822 	.byte #0x33,#0x00	; 51
   8403 CC 00              2823 	.byte #0xCC,#0x00	; 204
   8405 C7 01              2824 	.byte #0xC7,#0x01	; 455
   8407 38 0E              2825 	.byte #0x38,#0x0E	; 3640
   8409 0F 0F              2826 	.byte #0x0F,#0x0F	; 3855
   840B F0 F0              2827 	.byte #0xF0,#0xF0	; 61680
   840D                    2828 _pattern_tb_mask:
   840D 0F 00              2829 	.byte #0x0F,#0x00	; 15
   840F 0F 00              2830 	.byte #0x0F,#0x00	; 15
   8411 FF 00              2831 	.byte #0xFF,#0x00	; 255
   8413 FF 00              2832 	.byte #0xFF,#0x00	; 255
   8415 FF 0F              2833 	.byte #0xFF,#0x0F	; 4095
   8417 FF 0F              2834 	.byte #0xFF,#0x0F	; 4095
   8419 FF FF              2835 	.byte #0xFF,#0xFF	; 65535
   841B FF FF              2836 	.byte #0xFF,#0xFF	; 65535
   841D                    2837 _gray2bi:
   841D 00                 2838 	.db #0x00	; 0
   841E 01                 2839 	.db #0x01	; 1
   841F 03                 2840 	.db #0x03	; 3
   8420 02                 2841 	.db #0x02	; 2
   8421 07                 2842 	.db #0x07	; 7
   8422 06                 2843 	.db #0x06	; 6
   8423 04                 2844 	.db #0x04	; 4
   8424 05                 2845 	.db #0x05	; 5
                           2846 	.area CABS    (ABS,CODE)
