                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:59 2018
                              5 ;--------------------------------------------------------
                              6 	.module phase_adaptation
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _get_offset_number
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
                            134 	.globl _EOM_CLK_OFFSET
                            135 	.globl _Align90_CLK_OFFSET
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
                            982 	.globl _Phase_Adaptation
                            983 	.globl _Init_Phase_Adapt
                            984 	.globl _EOM_Clock_Alignment
                            985 	.globl _Data_EOM_Align90_Adapt_EyeWidthMode
                            986 	.globl _Data_Path_DFE_Adapt
                            987 	.globl _EOM_clock_DFE_Adapt
                            988 	.globl _F0d_measurement
                            989 	.globl _EOM_clock_analog_align
                            990 ;--------------------------------------------------------
                            991 ; special function registers
                            992 ;--------------------------------------------------------
                            993 	.area RSEG    (ABS,DATA)
   0000                     994 	.org 0x0000
                    0080    995 _P0	=	0x0080
                    0082    996 _DPL	=	0x0082
                    0083    997 _DPH	=	0x0083
                    0086    998 _WDTREL	=	0x0086
                    0087    999 _PCON	=	0x0087
                    0088   1000 _TCON	=	0x0088
                    0089   1001 _TMOD	=	0x0089
                    008A   1002 _TL0	=	0x008a
                    008B   1003 _TL1	=	0x008b
                    008C   1004 _TH0	=	0x008c
                    008D   1005 _TH1	=	0x008d
                    008E   1006 _CKCON	=	0x008e
                    0090   1007 _P1	=	0x0090
                    0092   1008 _DPS	=	0x0092
                    0094   1009 _PSBANK	=	0x0094
                    0098   1010 _SCON	=	0x0098
                    0099   1011 _SBUF	=	0x0099
                    009A   1012 _IEN2	=	0x009a
                    00A0   1013 _P2	=	0x00a0
                    00A1   1014 _DMAS0	=	0x00a1
                    00A2   1015 _DMAS1	=	0x00a2
                    00A3   1016 _DMAS2	=	0x00a3
                    00A4   1017 _DMAT0	=	0x00a4
                    00A5   1018 _DMAT1	=	0x00a5
                    00A6   1019 _DMAT2	=	0x00a6
                    00A8   1020 _IEN0	=	0x00a8
                    00A9   1021 _IP0	=	0x00a9
                    00AA   1022 _S0RELL	=	0x00aa
                    00B0   1023 _P3	=	0x00b0
                    00B1   1024 _DMAC0	=	0x00b1
                    00B2   1025 _DMAC1	=	0x00b2
                    00B3   1026 _DMAC2	=	0x00b3
                    00B4   1027 _DMASEL	=	0x00b4
                    00B5   1028 _DMAM0	=	0x00b5
                    00B6   1029 _DMAM1	=	0x00b6
                    00B8   1030 _IEN1	=	0x00b8
                    00B9   1031 _IP1	=	0x00b9
                    00BA   1032 _S0RELH	=	0x00ba
                    00C0   1033 _IRCON	=	0x00c0
                    00C1   1034 _CCEN	=	0x00c1
                    00C8   1035 _T2CON	=	0x00c8
                    00CA   1036 _RCAP2L	=	0x00ca
                    00CB   1037 _RCAP2H	=	0x00cb
                    00CC   1038 _TL2	=	0x00cc
                    00CD   1039 _TH2	=	0x00cd
                    00D0   1040 _PSW	=	0x00d0
                    00D8   1041 _ADCON	=	0x00d8
                    00E0   1042 _ACC	=	0x00e0
                    00E8   1043 _EIE	=	0x00e8
                    00F0   1044 _B	=	0x00f0
                    00F7   1045 _SRST	=	0x00f7
                    8C8A   1046 _TMR0	=	0x8c8a
                    8D8B   1047 _TMR1	=	0x8d8b
                    CDCC   1048 _TMR2	=	0xcdcc
                    A2A1   1049 _DMASA	=	0xa2a1
                    A5A4   1050 _DMATA	=	0xa5a4
                    B2B1   1051 _DMAC	=	0xb2b1
                           1052 ;--------------------------------------------------------
                           1053 ; special function bits
                           1054 ;--------------------------------------------------------
                           1055 	.area RSEG    (ABS,DATA)
   0000                    1056 	.org 0x0000
                    0080   1057 _P0_0	=	0x0080
                    0081   1058 _P0_1	=	0x0081
                    0082   1059 _P0_2	=	0x0082
                    0083   1060 _P0_3	=	0x0083
                    0084   1061 _P0_4	=	0x0084
                    0085   1062 _P0_5	=	0x0085
                    0086   1063 _P0_6	=	0x0086
                    0087   1064 _P0_7	=	0x0087
                    0090   1065 _P1_0	=	0x0090
                    0091   1066 _P1_1	=	0x0091
                    0092   1067 _P1_2	=	0x0092
                    0093   1068 _P1_3	=	0x0093
                    0094   1069 _P1_4	=	0x0094
                    0095   1070 _P1_5	=	0x0095
                    0096   1071 _P1_6	=	0x0096
                    0097   1072 _P1_7	=	0x0097
                    00A0   1073 _P2_0	=	0x00a0
                    00A1   1074 _P2_1	=	0x00a1
                    00A2   1075 _P2_2	=	0x00a2
                    00A3   1076 _P2_3	=	0x00a3
                    00A4   1077 _P2_4	=	0x00a4
                    00A5   1078 _P2_5	=	0x00a5
                    00A6   1079 _P2_6	=	0x00a6
                    00A7   1080 _P2_7	=	0x00a7
                    00B0   1081 _P3_0	=	0x00b0
                    00B1   1082 _P3_1	=	0x00b1
                    00B2   1083 _P3_2	=	0x00b2
                    00B3   1084 _P3_3	=	0x00b3
                    00B4   1085 _P3_4	=	0x00b4
                    00B5   1086 _P3_5	=	0x00b5
                    00B6   1087 _P3_6	=	0x00b6
                    00B7   1088 _P3_7	=	0x00b7
                    0088   1089 _IT0	=	0x0088
                    0089   1090 _IE0	=	0x0089
                    008A   1091 _IT1	=	0x008a
                    008B   1092 _IE1	=	0x008b
                    008C   1093 _TR0	=	0x008c
                    008D   1094 _TF0	=	0x008d
                    008E   1095 _TR1	=	0x008e
                    008F   1096 _TF1	=	0x008f
                    00A8   1097 _EX0	=	0x00a8
                    00A9   1098 _ET0	=	0x00a9
                    00AA   1099 _EX1	=	0x00aa
                    00AB   1100 _ET1	=	0x00ab
                    00AC   1101 _ES	=	0x00ac
                    00AD   1102 _ET2	=	0x00ad
                    00AE   1103 _WDT	=	0x00ae
                    00AF   1104 _EA	=	0x00af
                    00B8   1105 _EX7	=	0x00b8
                    00B9   1106 _EX2	=	0x00b9
                    00BA   1107 _EX3	=	0x00ba
                    00BB   1108 _EX4	=	0x00bb
                    00BC   1109 _EX5	=	0x00bc
                    00BD   1110 _EX6	=	0x00bd
                    00BE   1111 _PS1	=	0x00be
                    009A   1112 _ES1	=	0x009a
                    009B   1113 _EX8	=	0x009b
                    009C   1114 _EX9	=	0x009c
                    009D   1115 _EX10	=	0x009d
                    009E   1116 _EX11	=	0x009e
                    009F   1117 _EX12	=	0x009f
                    0098   1118 _RI	=	0x0098
                    0099   1119 _TI	=	0x0099
                    00C6   1120 _TF2	=	0x00c6
                           1121 ;--------------------------------------------------------
                           1122 ; overlayable register banks
                           1123 ;--------------------------------------------------------
                           1124 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1125 	.ds 8
                           1126 ;--------------------------------------------------------
                           1127 ; overlayable bit register bank
                           1128 ;--------------------------------------------------------
                           1129 	.area BIT_BANK	(REL,OVR,DATA)
   0025                    1130 bits:
   0025                    1131 	.ds 1
                    8000   1132 	b0 = bits[0]
                    8100   1133 	b1 = bits[1]
                    8200   1134 	b2 = bits[2]
                    8300   1135 	b3 = bits[3]
                    8400   1136 	b4 = bits[4]
                    8500   1137 	b5 = bits[5]
                    8600   1138 	b6 = bits[6]
                    8700   1139 	b7 = bits[7]
                           1140 ;--------------------------------------------------------
                           1141 ; internal ram data
                           1142 ;--------------------------------------------------------
                           1143 	.area DSEG    (DATA)
                           1144 ;--------------------------------------------------------
                           1145 ; overlayable items in internal ram 
                           1146 ;--------------------------------------------------------
                           1147 	.area OSEG    (OVR,DATA)
                           1148 ;--------------------------------------------------------
                           1149 ; indirectly addressable internal ram data
                           1150 ;--------------------------------------------------------
                           1151 	.area ISEG    (DATA)
                           1152 ;--------------------------------------------------------
                           1153 ; absolute internal ram data
                           1154 ;--------------------------------------------------------
                           1155 	.area IABS    (ABS,DATA)
                           1156 	.area IABS    (ABS,DATA)
                           1157 ;--------------------------------------------------------
                           1158 ; bit data
                           1159 ;--------------------------------------------------------
                           1160 	.area BSEG    (BIT)
                           1161 ;--------------------------------------------------------
                           1162 ; paged external ram data
                           1163 ;--------------------------------------------------------
                           1164 	.area PSEG    (PAG,XDATA)
                           1165 ;--------------------------------------------------------
                           1166 ; external ram data
                           1167 ;--------------------------------------------------------
                           1168 	.area XSEG    (XDATA)
                    1000   1169 _UPHY14_TRX_LANEPLL_ANAREG_TOP_128	=	0x1000
                    1004   1170 _UPHY14_TRX_LANEPLL_ANAREG_TOP_129	=	0x1004
                    1008   1171 _UPHY14_TRX_LANEPLL_ANAREG_TOP_130	=	0x1008
                    100C   1172 _UPHY14_TRX_LANEPLL_ANAREG_TOP_131	=	0x100c
                    1010   1173 _UPHY14_TRX_LANEPLL_ANAREG_TOP_132	=	0x1010
                    1014   1174 _UPHY14_TRX_LANEPLL_ANAREG_TOP_133	=	0x1014
                    1018   1175 _UPHY14_TRX_LANEPLL_ANAREG_TOP_134	=	0x1018
                    101C   1176 _UPHY14_TRX_LANEPLL_ANAREG_TOP_135	=	0x101c
                    1020   1177 _UPHY14_TRX_LANEPLL_ANAREG_TOP_136	=	0x1020
                    1024   1178 _UPHY14_TRX_LANEPLL_ANAREG_TOP_137	=	0x1024
                    1028   1179 _UPHY14_TRX_LANEPLL_ANAREG_TOP_138	=	0x1028
                    102C   1180 _UPHY14_TRX_LANEPLL_ANAREG_TOP_139	=	0x102c
                    1030   1181 _UPHY14_TRX_LANEPLL_ANAREG_TOP_140	=	0x1030
                    1034   1182 _UPHY14_TRX_LANEPLL_ANAREG_TOP_141	=	0x1034
                    1038   1183 _UPHY14_TRX_LANEPLL_ANAREG_TOP_142	=	0x1038
                    103C   1184 _UPHY14_TRX_LANEPLL_ANAREG_TOP_143	=	0x103c
                    0200   1185 _UPHY14_TRX_ANAREG_TOP_128	=	0x0200
                    0204   1186 _UPHY14_TRX_ANAREG_TOP_129	=	0x0204
                    0208   1187 _UPHY14_TRX_ANAREG_TOP_130	=	0x0208
                    020C   1188 _UPHY14_TRX_ANAREG_TOP_131	=	0x020c
                    0210   1189 _UPHY14_TRX_ANAREG_TOP_132	=	0x0210
                    0214   1190 _UPHY14_TRX_ANAREG_TOP_133	=	0x0214
                    0218   1191 _UPHY14_TRX_ANAREG_TOP_134	=	0x0218
                    021C   1192 _UPHY14_TRX_ANAREG_TOP_135	=	0x021c
                    0220   1193 _UPHY14_TRX_ANAREG_TOP_136	=	0x0220
                    0224   1194 _UPHY14_TRX_ANAREG_TOP_137	=	0x0224
                    0228   1195 _UPHY14_TRX_ANAREG_TOP_138	=	0x0228
                    022C   1196 _UPHY14_TRX_ANAREG_TOP_139	=	0x022c
                    0230   1197 _UPHY14_TRX_ANAREG_TOP_140	=	0x0230
                    0234   1198 _UPHY14_TRX_ANAREG_TOP_141	=	0x0234
                    0238   1199 _UPHY14_TRX_ANAREG_TOP_142	=	0x0238
                    023C   1200 _UPHY14_TRX_ANAREG_TOP_143	=	0x023c
                    0240   1201 _UPHY14_TRX_ANAREG_TOP_144	=	0x0240
                    0244   1202 _UPHY14_TRX_ANAREG_TOP_145	=	0x0244
                    0248   1203 _UPHY14_TRX_ANAREG_TOP_146	=	0x0248
                    024C   1204 _UPHY14_TRX_ANAREG_TOP_147	=	0x024c
                    0250   1205 _UPHY14_TRX_ANAREG_TOP_148	=	0x0250
                    0254   1206 _UPHY14_TRX_ANAREG_TOP_149	=	0x0254
                    0258   1207 _UPHY14_TRX_ANAREG_TOP_150	=	0x0258
                    025C   1208 _UPHY14_TRX_ANAREG_TOP_151	=	0x025c
                    0260   1209 _UPHY14_TRX_ANAREG_TOP_152	=	0x0260
                    0264   1210 _UPHY14_TRX_ANAREG_TOP_153	=	0x0264
                    0268   1211 _UPHY14_TRX_ANAREG_TOP_154	=	0x0268
                    026C   1212 _UPHY14_TRX_ANAREG_TOP_155	=	0x026c
                    0270   1213 _UPHY14_TRX_ANAREG_TOP_156	=	0x0270
                    0274   1214 _UPHY14_TRX_ANAREG_TOP_157	=	0x0274
                    0000   1215 _UPHY14_TRX_ANAREG_BOT_0	=	0x0000
                    0004   1216 _UPHY14_TRX_ANAREG_BOT_1	=	0x0004
                    0008   1217 _UPHY14_TRX_ANAREG_BOT_2	=	0x0008
                    000C   1218 _UPHY14_TRX_ANAREG_BOT_3	=	0x000c
                    0010   1219 _UPHY14_TRX_ANAREG_BOT_4	=	0x0010
                    0014   1220 _UPHY14_TRX_ANAREG_BOT_5	=	0x0014
                    0018   1221 _UPHY14_TRX_ANAREG_BOT_6	=	0x0018
                    001C   1222 _UPHY14_TRX_ANAREG_BOT_7	=	0x001c
                    0020   1223 _UPHY14_TRX_ANAREG_BOT_8	=	0x0020
                    0024   1224 _UPHY14_TRX_ANAREG_BOT_9	=	0x0024
                    0028   1225 _UPHY14_TRX_ANAREG_BOT_10	=	0x0028
                    002C   1226 _UPHY14_TRX_ANAREG_BOT_11	=	0x002c
                    0030   1227 _UPHY14_TRX_ANAREG_BOT_12	=	0x0030
                    0034   1228 _UPHY14_TRX_ANAREG_BOT_13	=	0x0034
                    0038   1229 _UPHY14_TRX_ANAREG_BOT_14	=	0x0038
                    003C   1230 _UPHY14_TRX_ANAREG_BOT_15	=	0x003c
                    0040   1231 _UPHY14_TRX_ANAREG_BOT_16	=	0x0040
                    0044   1232 _UPHY14_TRX_ANAREG_BOT_17	=	0x0044
                    0048   1233 _UPHY14_TRX_ANAREG_BOT_18	=	0x0048
                    004C   1234 _UPHY14_TRX_ANAREG_BOT_19	=	0x004c
                    0050   1235 _UPHY14_TRX_ANAREG_BOT_20	=	0x0050
                    0054   1236 _UPHY14_TRX_ANAREG_BOT_21	=	0x0054
                    0058   1237 _UPHY14_TRX_ANAREG_BOT_22	=	0x0058
                    005C   1238 _UPHY14_TRX_ANAREG_BOT_23	=	0x005c
                    0060   1239 _UPHY14_TRX_ANAREG_BOT_24	=	0x0060
                    0064   1240 _UPHY14_TRX_ANAREG_BOT_25	=	0x0064
                    0068   1241 _UPHY14_TRX_ANAREG_BOT_26	=	0x0068
                    006C   1242 _UPHY14_TRX_ANAREG_BOT_27	=	0x006c
                    0070   1243 _UPHY14_TRX_ANAREG_BOT_28	=	0x0070
                    0074   1244 _UPHY14_TRX_ANAREG_BOT_29	=	0x0074
                    0078   1245 _UPHY14_TRX_ANAREG_BOT_30	=	0x0078
                    007C   1246 _UPHY14_TRX_ANAREG_BOT_31	=	0x007c
                    0080   1247 _UPHY14_TRX_ANAREG_BOT_32	=	0x0080
                    0478   1248 _ANA_DFEE_REG_1E	=	0x0478
                    047C   1249 _ANA_DFEE_REG_1F	=	0x047c
                    0480   1250 _ANA_DFEE_REG_20	=	0x0480
                    0484   1251 _ANA_DFEE_REG_21	=	0x0484
                    0488   1252 _ANA_DFEE_REG_22	=	0x0488
                    048C   1253 _ANA_DFEE_REG_23	=	0x048c
                    0490   1254 _ANA_DFEE_REG_24	=	0x0490
                    0494   1255 _ANA_DFEE_REG_25	=	0x0494
                    0498   1256 _ANA_DFEE_REG_26	=	0x0498
                    049C   1257 _ANA_DFEE_REG_27	=	0x049c
                    0400   1258 _ANA_DFEE_REG_00	=	0x0400
                    0404   1259 _ANA_DFEE_REG_01	=	0x0404
                    0408   1260 _ANA_DFEE_REG_02	=	0x0408
                    040C   1261 _ANA_DFEE_REG_03	=	0x040c
                    0410   1262 _ANA_DFEE_REG_04	=	0x0410
                    0414   1263 _ANA_DFEE_REG_05	=	0x0414
                    0418   1264 _ANA_DFEE_REG_06	=	0x0418
                    041C   1265 _ANA_DFEE_REG_07	=	0x041c
                    0420   1266 _ANA_DFEE_REG_08	=	0x0420
                    0424   1267 _ANA_DFEE_REG_09	=	0x0424
                    0428   1268 _ANA_DFEE_REG_0A	=	0x0428
                    042C   1269 _ANA_DFEE_REG_0B	=	0x042c
                    0430   1270 _ANA_DFEE_REG_0C	=	0x0430
                    0434   1271 _ANA_DFEE_REG_0D	=	0x0434
                    0438   1272 _ANA_DFEE_REG_0E	=	0x0438
                    043C   1273 _ANA_DFEE_REG_0F	=	0x043c
                    0440   1274 _ANA_DFEE_REG_10	=	0x0440
                    0444   1275 _ANA_DFEE_REG_11	=	0x0444
                    0448   1276 _ANA_DFEE_REG_12	=	0x0448
                    044C   1277 _ANA_DFEE_REG_13	=	0x044c
                    0450   1278 _ANA_DFEE_REG_14	=	0x0450
                    0454   1279 _ANA_DFEE_REG_15	=	0x0454
                    0458   1280 _ANA_DFEE_REG_16	=	0x0458
                    045C   1281 _ANA_DFEE_REG_17	=	0x045c
                    0460   1282 _ANA_DFEE_REG_18	=	0x0460
                    0464   1283 _ANA_DFEE_REG_19	=	0x0464
                    0468   1284 _ANA_DFEE_REG_1A	=	0x0468
                    046C   1285 _ANA_DFEE_REG_1B	=	0x046c
                    0470   1286 _ANA_DFEE_REG_1C	=	0x0470
                    0474   1287 _ANA_DFEE_REG_1D	=	0x0474
                    0830   1288 _ANA_DFEO_REG_0C	=	0x0830
                    0834   1289 _ANA_DFEO_REG_0D	=	0x0834
                    0838   1290 _ANA_DFEO_REG_0E	=	0x0838
                    083C   1291 _ANA_DFEO_REG_0F	=	0x083c
                    0840   1292 _ANA_DFEO_REG_10	=	0x0840
                    0844   1293 _ANA_DFEO_REG_11	=	0x0844
                    0848   1294 _ANA_DFEO_REG_12	=	0x0848
                    084C   1295 _ANA_DFEO_REG_13	=	0x084c
                    0850   1296 _ANA_DFEO_REG_14	=	0x0850
                    0854   1297 _ANA_DFEO_REG_15	=	0x0854
                    0858   1298 _ANA_DFEO_REG_16	=	0x0858
                    085C   1299 _ANA_DFEO_REG_17	=	0x085c
                    0860   1300 _ANA_DFEO_REG_18	=	0x0860
                    0864   1301 _ANA_DFEO_REG_19	=	0x0864
                    0868   1302 _ANA_DFEO_REG_1A	=	0x0868
                    086C   1303 _ANA_DFEO_REG_1B	=	0x086c
                    0870   1304 _ANA_DFEO_REG_1C	=	0x0870
                    0874   1305 _ANA_DFEO_REG_1D	=	0x0874
                    0878   1306 _ANA_DFEO_REG_1E	=	0x0878
                    087C   1307 _ANA_DFEO_REG_1F	=	0x087c
                    0880   1308 _ANA_DFEO_REG_20	=	0x0880
                    0884   1309 _ANA_DFEO_REG_21	=	0x0884
                    0888   1310 _ANA_DFEO_REG_22	=	0x0888
                    088C   1311 _ANA_DFEO_REG_23	=	0x088c
                    0890   1312 _ANA_DFEO_REG_24	=	0x0890
                    0894   1313 _ANA_DFEO_REG_25	=	0x0894
                    0898   1314 _ANA_DFEO_REG_26	=	0x0898
                    089C   1315 _ANA_DFEO_REG_27	=	0x089c
                    0800   1316 _ANA_DFEO_REG_00	=	0x0800
                    0804   1317 _ANA_DFEO_REG_01	=	0x0804
                    0808   1318 _ANA_DFEO_REG_02	=	0x0808
                    080C   1319 _ANA_DFEO_REG_03	=	0x080c
                    0810   1320 _ANA_DFEO_REG_04	=	0x0810
                    0814   1321 _ANA_DFEO_REG_05	=	0x0814
                    0818   1322 _ANA_DFEO_REG_06	=	0x0818
                    081C   1323 _ANA_DFEO_REG_07	=	0x081c
                    0820   1324 _ANA_DFEO_REG_08	=	0x0820
                    0824   1325 _ANA_DFEO_REG_09	=	0x0824
                    0828   1326 _ANA_DFEO_REG_0A	=	0x0828
                    082C   1327 _ANA_DFEO_REG_0B	=	0x082c
                    8200   1328 _UPHY14_CMN_ANAREG_TOP_128	=	0x8200
                    8204   1329 _UPHY14_CMN_ANAREG_TOP_129	=	0x8204
                    8208   1330 _UPHY14_CMN_ANAREG_TOP_130	=	0x8208
                    820C   1331 _UPHY14_CMN_ANAREG_TOP_131	=	0x820c
                    8210   1332 _UPHY14_CMN_ANAREG_TOP_132	=	0x8210
                    8214   1333 _UPHY14_CMN_ANAREG_TOP_133	=	0x8214
                    8218   1334 _UPHY14_CMN_ANAREG_TOP_134	=	0x8218
                    821C   1335 _UPHY14_CMN_ANAREG_TOP_135	=	0x821c
                    8220   1336 _UPHY14_CMN_ANAREG_TOP_136	=	0x8220
                    8224   1337 _UPHY14_CMN_ANAREG_TOP_137	=	0x8224
                    8228   1338 _UPHY14_CMN_ANAREG_TOP_138	=	0x8228
                    822C   1339 _UPHY14_CMN_ANAREG_TOP_139	=	0x822c
                    8230   1340 _UPHY14_CMN_ANAREG_TOP_140	=	0x8230
                    8234   1341 _UPHY14_CMN_ANAREG_TOP_141	=	0x8234
                    8238   1342 _UPHY14_CMN_ANAREG_TOP_142	=	0x8238
                    823C   1343 _UPHY14_CMN_ANAREG_TOP_143	=	0x823c
                    8240   1344 _UPHY14_CMN_ANAREG_TOP_144	=	0x8240
                    8244   1345 _UPHY14_CMN_ANAREG_TOP_145	=	0x8244
                    8248   1346 _UPHY14_CMN_ANAREG_TOP_146	=	0x8248
                    824C   1347 _UPHY14_CMN_ANAREG_TOP_147	=	0x824c
                    8250   1348 _UPHY14_CMN_ANAREG_TOP_148	=	0x8250
                    8254   1349 _UPHY14_CMN_ANAREG_TOP_149	=	0x8254
                    8258   1350 _UPHY14_CMN_ANAREG_TOP_150	=	0x8258
                    825C   1351 _UPHY14_CMN_ANAREG_TOP_151	=	0x825c
                    8260   1352 _UPHY14_CMN_ANAREG_TOP_152	=	0x8260
                    8264   1353 _UPHY14_CMN_ANAREG_TOP_153	=	0x8264
                    8268   1354 _UPHY14_CMN_ANAREG_TOP_154	=	0x8268
                    826C   1355 _UPHY14_CMN_ANAREG_TOP_155	=	0x826c
                    8270   1356 _UPHY14_CMN_ANAREG_TOP_156	=	0x8270
                    8274   1357 _UPHY14_CMN_ANAREG_TOP_157	=	0x8274
                    8278   1358 _UPHY14_CMN_ANAREG_TOP_158	=	0x8278
                    827C   1359 _UPHY14_CMN_ANAREG_TOP_159	=	0x827c
                    8280   1360 _UPHY14_CMN_ANAREG_TOP_160	=	0x8280
                    8284   1361 _UPHY14_CMN_ANAREG_TOP_161	=	0x8284
                    8288   1362 _UPHY14_CMN_ANAREG_TOP_162	=	0x8288
                    828C   1363 _UPHY14_CMN_ANAREG_TOP_163	=	0x828c
                    8290   1364 _UPHY14_CMN_ANAREG_TOP_164	=	0x8290
                    8294   1365 _UPHY14_CMN_ANAREG_TOP_165	=	0x8294
                    8298   1366 _UPHY14_CMN_ANAREG_TOP_166	=	0x8298
                    829C   1367 _UPHY14_CMN_ANAREG_TOP_167	=	0x829c
                    82A0   1368 _UPHY14_CMN_ANAREG_TOP_168	=	0x82a0
                    82A4   1369 _UPHY14_CMN_ANAREG_TOP_169	=	0x82a4
                    82A8   1370 _UPHY14_CMN_ANAREG_TOP_170	=	0x82a8
                    82AC   1371 _UPHY14_CMN_ANAREG_TOP_171	=	0x82ac
                    82B0   1372 _UPHY14_CMN_ANAREG_TOP_172	=	0x82b0
                    82B4   1373 _UPHY14_CMN_ANAREG_TOP_173	=	0x82b4
                    82B8   1374 _UPHY14_CMN_ANAREG_TOP_174	=	0x82b8
                    82BC   1375 _UPHY14_CMN_ANAREG_TOP_175	=	0x82bc
                    82C0   1376 _UPHY14_CMN_ANAREG_TOP_176	=	0x82c0
                    82C4   1377 _UPHY14_CMN_ANAREG_TOP_177	=	0x82c4
                    82C8   1378 _UPHY14_CMN_ANAREG_TOP_178	=	0x82c8
                    82CC   1379 _UPHY14_CMN_ANAREG_TOP_179	=	0x82cc
                    82D0   1380 _UPHY14_CMN_ANAREG_TOP_180	=	0x82d0
                    82D4   1381 _UPHY14_CMN_ANAREG_TOP_181	=	0x82d4
                    82D8   1382 _UPHY14_CMN_ANAREG_TOP_182	=	0x82d8
                    82DC   1383 _UPHY14_CMN_ANAREG_TOP_183	=	0x82dc
                    82E0   1384 _UPHY14_CMN_ANAREG_TOP_184	=	0x82e0
                    82E4   1385 _UPHY14_CMN_ANAREG_TOP_185	=	0x82e4
                    82E8   1386 _UPHY14_CMN_ANAREG_TOP_186	=	0x82e8
                    82EC   1387 _UPHY14_CMN_ANAREG_TOP_187	=	0x82ec
                    82F0   1388 _UPHY14_CMN_ANAREG_TOP_188	=	0x82f0
                    82F4   1389 _UPHY14_CMN_ANAREG_TOP_189	=	0x82f4
                    82F8   1390 _UPHY14_CMN_ANAREG_TOP_190	=	0x82f8
                    82FC   1391 _UPHY14_CMN_ANAREG_TOP_191	=	0x82fc
                    8300   1392 _UPHY14_CMN_ANAREG_TOP_192	=	0x8300
                    8304   1393 _UPHY14_CMN_ANAREG_TOP_193	=	0x8304
                    8308   1394 _UPHY14_CMN_ANAREG_TOP_194	=	0x8308
                    830C   1395 _UPHY14_CMN_ANAREG_TOP_195	=	0x830c
                    8310   1396 _UPHY14_CMN_ANAREG_TOP_196	=	0x8310
                    8314   1397 _UPHY14_CMN_ANAREG_TOP_197	=	0x8314
                    8318   1398 _UPHY14_CMN_ANAREG_TOP_198	=	0x8318
                    831C   1399 _UPHY14_CMN_ANAREG_TOP_199	=	0x831c
                    8320   1400 _UPHY14_CMN_ANAREG_TOP_200	=	0x8320
                    8324   1401 _UPHY14_CMN_ANAREG_TOP_201	=	0x8324
                    8328   1402 _UPHY14_CMN_ANAREG_TOP_202	=	0x8328
                    832C   1403 _UPHY14_CMN_ANAREG_TOP_203	=	0x832c
                    8330   1404 _UPHY14_CMN_ANAREG_TOP_204	=	0x8330
                    8334   1405 _UPHY14_CMN_ANAREG_TOP_205	=	0x8334
                    8338   1406 _UPHY14_CMN_ANAREG_TOP_206	=	0x8338
                    833C   1407 _UPHY14_CMN_ANAREG_TOP_207	=	0x833c
                    8340   1408 _UPHY14_CMN_ANAREG_TOP_208	=	0x8340
                    8344   1409 _UPHY14_CMN_ANAREG_TOP_209	=	0x8344
                    8348   1410 _UPHY14_CMN_ANAREG_TOP_210	=	0x8348
                    834C   1411 _UPHY14_CMN_ANAREG_TOP_211	=	0x834c
                    8350   1412 _UPHY14_CMN_ANAREG_TOP_212	=	0x8350
                    8354   1413 _UPHY14_CMN_ANAREG_TOP_213	=	0x8354
                    8358   1414 _UPHY14_CMN_ANAREG_TOP_214	=	0x8358
                    2000   1415 _PM_CTRL_TX_LANE_REG1_LANE	=	0x2000
                    2004   1416 _PM_CTRL_TX_LANE_REG2_LANE	=	0x2004
                    2008   1417 _INPUT_TX_PIN_REG0_LANE	=	0x2008
                    200C   1418 _INPUT_TX_PIN_REG1_LANE	=	0x200c
                    2010   1419 _INPUT_TX_PIN_REG2_LANE	=	0x2010
                    2014   1420 _INPUT_TX_PIN_REG3_LANE	=	0x2014
                    2018   1421 _PM_CTRL_INTERRUPT_REG1_LANE	=	0x2018
                    201C   1422 _PM_CTRL_INTERRUPT_REG2	=	0x201c
                    2020   1423 _CLKGEN_TX_LANE_REG1_LANE	=	0x2020
                    2024   1424 _TX_SPEED_CONVERT_LANE	=	0x2024
                    2028   1425 _SPD_CTRL_INTERRUPT_REG1_LANE	=	0x2028
                    202C   1426 _SPD_CTRL_INTERRUPT_REG2	=	0x202c
                    2030   1427 _SPD_CTRL_TX_LANE_REG1_LANE	=	0x2030
                    2034   1428 _TX_SYSTEM_LANE	=	0x2034
                    203C   1429 _INPUT_TX_PIN_REG4_LANE	=	0x203c
                    2040   1430 _TX_CALIBRATION_LANE	=	0x2040
                    2044   1431 _DIG_TX_RSVD_REG0	=	0x2044
                    2048   1432 _INPUT_TX_PIN_REG5_LANE	=	0x2048
                    204C   1433 __FIELDNAME__LANE	=	0x204c
                    2050   1434 _PM_CTRL_INTERRUPT_ISR_REG1_LANE	=	0x2050
                    2054   1435 _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE	=	0x2054
                    2058   1436 _ANALOG_TX_REALTIME_REG_1	=	0x2058
                    205C   1437 _MON_TOP	=	0x205c
                    2100   1438 _PM_CTRL_RX_LANE_REG1_LANE	=	0x2100
                    2104   1439 _RX_SYSTEM_LANE	=	0x2104
                    2108   1440 _INPUT_RX_PIN_REG0_LANE	=	0x2108
                    210C   1441 _INPUT_RX_PIN_REG1_LANE	=	0x210c
                    2110   1442 _INPUT_RX_PIN_REG2_LANE	=	0x2110
                    2114   1443 _SPD_CTRL_RX_LANE_REG1_LANE	=	0x2114
                    2118   1444 _DIG_RX_RSVD_REG0	=	0x2118
                    211C   1445 _CLKGEN_RX_LANE_REG1_LANE	=	0x211c
                    2120   1446 _FRAME_SYNC_DET_REG0	=	0x2120
                    2124   1447 _FRAME_SYNC_DET_REG1	=	0x2124
                    2128   1448 _FRAME_SYNC_DET_REG2	=	0x2128
                    212C   1449 _FRAME_SYNC_DET_REG3	=	0x212c
                    2130   1450 _FRAME_SYNC_DET_REG4	=	0x2130
                    2134   1451 _FRAME_SYNC_DET_REG5	=	0x2134
                    2138   1452 _FRAME_SYNC_DET_REG6	=	0x2138
                    213C   1453 _CDR_LOCK_REG	=	0x213c
                    2140   1454 _RX_LANE_INTERRUPT	=	0x2140
                    2144   1455 _RX_LANE_INTERRUPT_MASK	=	0x2144
                    2148   1456 _RX_DATA_PATH_REG	=	0x2148
                    214C   1457 _INPUT_RX_PIN_REG3_LANE	=	0x214c
                    2150   1458 _RX_CALIBRATION_REG	=	0x2150
                    2158   1459 _RX_LANE_INTERRUPT_REG1	=	0x2158
                    2160   1460 _DTL_REG0	=	0x2160
                    2164   1461 _DTL_REG1	=	0x2164
                    2168   1462 _DTL_REG2	=	0x2168
                    216C   1463 _DTL_REG3	=	0x216c
                    2170   1464 _SQ_REG0	=	0x2170
                    4000   1465 _LANE_CFG0	=	0x4000
                    4004   1466 _LANE_STATUS0	=	0x4004
                    4008   1467 _LANE_CFG_STATUS2_LANE	=	0x4008
                    400C   1468 _LANE_CFG2_LANE	=	0x400c
                    4010   1469 _LANE_CFG4	=	0x4010
                    4014   1470 _LANE_CFG_STATUS3_LANE	=	0x4014
                    4018   1471 _LANE_DP_PIE8_CFG0_LANE	=	0x4018
                    401C   1472 _LANE_USB_DP_CFG1_LANE	=	0x401c
                    4020   1473 _LANE_USB_DP_CFG2_LANE	=	0x4020
                    4024   1474 _LANE_EQ_CFG0_LANE	=	0x4024
                    4028   1475 _LANE_EQ_CFG1_LANE	=	0x4028
                    402C   1476 _LANE_PRESET_CFG0_LANE	=	0x402c
                    4030   1477 _LANE_PRESET_CFG2_LANE	=	0x4030
                    4034   1478 _LANE_PRESET_CFG4_LANE	=	0x4034
                    4038   1479 _LANE_PRESET_CFG6_LANE	=	0x4038
                    403C   1480 _LANE_PRESET_CFG8_LANE	=	0x403c
                    4040   1481 _LANE_PRESET_CFG10_LANE	=	0x4040
                    4044   1482 _LANE_PRESET_CFG12_LANE	=	0x4044
                    4048   1483 _LANE_PRESET_CFG14_LANE	=	0x4048
                    404C   1484 _LANE_PRESET_CFG16_LANE	=	0x404c
                    4050   1485 _LANE_COEFF_MAX0_LANE	=	0x4050
                    4054   1486 _LANE_REMOTE_SET_LANE	=	0x4054
                    4058   1487 _LANE_EQ_16G_CFG0_LANE	=	0x4058
                    405C   1488 _LANE_16G_PRESET_CFG0_LANE	=	0x405c
                    4060   1489 _LANE_16G_PRESET_CFG2_LANE	=	0x4060
                    4064   1490 _LANE_16G_PRESET_CFG4_LANE	=	0x4064
                    4068   1491 _LANE_16G_PRESET_CFG6_LANE	=	0x4068
                    406C   1492 _LANE_16G_PRESET_CFG8_LANE	=	0x406c
                    4070   1493 _LANE_16G_PRESET_CFG10_LANE	=	0x4070
                    4074   1494 _LANE_16G_PRESET_CFG12_LANE	=	0x4074
                    4078   1495 _LANE_16G_PRESET_CFG14_LANE	=	0x4078
                    407C   1496 _LANE_16G_PRESET_CFG16_LANE	=	0x407c
                    4080   1497 _LANE_EQ_32G_CFG0_LANE	=	0x4080
                    4084   1498 _LANE_32G_PRESET_CFG0_LANE	=	0x4084
                    4088   1499 _LANE_32G_PRESET_CFG2_LANE	=	0x4088
                    408C   1500 _LANE_32G_PRESET_CFG4_LANE	=	0x408c
                    4090   1501 _LANE_32G_PRESET_CFG6_LANE	=	0x4090
                    4094   1502 _LANE_32G_PRESET_CFG8_LANE	=	0x4094
                    4098   1503 _LANE_32G_PRESET_CFG10_LANE	=	0x4098
                    409C   1504 _LANE_32G_PRESET_CFG12_LANE	=	0x409c
                    40A0   1505 _LANE_32G_PRESET_CFG14_LANE	=	0x40a0
                    40A4   1506 _LANE_32G_PRESET_CFG16_LANE	=	0x40a4
                    2200   1507 _MCU_CONTROL_LANE	=	0x2200
                    2204   1508 _MCU_GPIO	=	0x2204
                    2208   1509 _CACHE_DEBUG0	=	0x2208
                    220C   1510 _CACHE_DEBUG1	=	0x220c
                    2210   1511 _LANE_SYSTEM0	=	0x2210
                    2230   1512 _MCU_STATUS0_LANE	=	0x2230
                    2234   1513 _MCU_STATUS1_LANE	=	0x2234
                    2238   1514 _MCU_STATUS2_LANE	=	0x2238
                    223C   1515 _MCU_STATUS3_LANE	=	0x223c
                    2240   1516 _MCU_INT0_CONTROL	=	0x2240
                    2244   1517 _MCU_INT1_CONTROL	=	0x2244
                    2248   1518 _MCU_INT2_CONTROL	=	0x2248
                    224C   1519 _MCU_INT3_CONTROL	=	0x224c
                    2250   1520 _MCU_INT4_CONTROL	=	0x2250
                    2254   1521 _MCU_INT5_CONTROL	=	0x2254
                    2258   1522 _MCU_INT6_CONTROL	=	0x2258
                    225C   1523 _MCU_INT7_CONTROL	=	0x225c
                    2260   1524 _MCU_INT8_CONTROL	=	0x2260
                    2264   1525 _MCU_INT9_CONTROL	=	0x2264
                    2268   1526 _MCU_INT10_CONTROL	=	0x2268
                    226C   1527 _MCU_INT11_CONTROL	=	0x226c
                    2270   1528 _MCU_INT12_CONTROL	=	0x2270
                    2274   1529 _MCU_TIMER_CONTROL	=	0x2274
                    2278   1530 _MCU_TIMER0_CONTROL	=	0x2278
                    227C   1531 _MCU_TIMER1_CONTROL	=	0x227c
                    2280   1532 _MCU_TIMER2_CONTROL	=	0x2280
                    2284   1533 _MCU_TIMER3_CONTROL	=	0x2284
                    2288   1534 _MCU_IRQ_LANE	=	0x2288
                    228C   1535 _MCU_IRQ_MASK_LANE	=	0x228c
                    2290   1536 _MCU_MEM_REG1_LANE	=	0x2290
                    2294   1537 _MCU_MEM_REG2_LANE	=	0x2294
                    2298   1538 _MCU_TIMER_CTRL_1_LANE	=	0x2298
                    229C   1539 _MCU_TIMER_CTRL_2_LANE	=	0x229c
                    22A0   1540 _MCU_TIMER_CTRL_3_LANE	=	0x22a0
                    22A4   1541 _MCU_TIMER_CTRL_4_LANE	=	0x22a4
                    22A8   1542 _MCU_TIMER_CTRL_5_LANE	=	0x22a8
                    22AC   1543 _MCU_TIMER_CTRL_6_LANE	=	0x22ac
                    22B0   1544 _MCU_TIMER_CTRL_7_LANE	=	0x22b0
                    22B4   1545 _MCU_DEBUG0_LANE	=	0x22b4
                    22B8   1546 _MCU_DEBUG1_LANE	=	0x22b8
                    22BC   1547 _MCU_DEBUG2_LANE	=	0x22bc
                    22C0   1548 _MCU_DEBUG3_LANE	=	0x22c0
                    22C4   1549 _MCU_DEBUG_LANE	=	0x22c4
                    22C8   1550 _EXT_INT_CONTROL	=	0x22c8
                    22CC   1551 _ANA_IF_TRX_REG0	=	0x22cc
                    22D0   1552 _ANA_IF_DFEE_REG0	=	0x22d0
                    22D4   1553 _ANA_IF_DFEO_REG0	=	0x22d4
                    22D8   1554 _MCU_IRQ_ISR_LANE	=	0x22d8
                    22DC   1555 _MCU_WDT_LANE	=	0x22dc
                    22E0   1556 _MCU_INT_CONTROL_13	=	0x22e0
                    22E4   1557 _MCU_COMMAND0	=	0x22e4
                    22F4   1558 _MEM_ECC_ERR_ADDRESS0	=	0x22f4
                    22F8   1559 _XDATA_MEM_CHECKSUM_LANE0	=	0x22f8
                    22FC   1560 _XDATA_MEM_CHECKSUM_LANE1	=	0x22fc
                    2300   1561 _PT_CONTROL0	=	0x2300
                    2304   1562 _PT_CONTROL1	=	0x2304
                    2308   1563 _PT_USER_PATTERN0	=	0x2308
                    230C   1564 _PT_USER_PATTERN1	=	0x230c
                    2310   1565 _PT_USER_PATTERN2	=	0x2310
                    2314   1566 _PT_COUNTER0	=	0x2314
                    2318   1567 _PT_COUNTER1	=	0x2318
                    231C   1568 _PT_COUNTER2	=	0x231c
                    2400   1569 _DFE_CTRL_REG0	=	0x2400
                    2404   1570 _DFE_CTRL_REG1	=	0x2404
                    2408   1571 _DFE_CTRL_REG2	=	0x2408
                    240C   1572 _DFE_CTRL_REG3	=	0x240c
                    2410   1573 _RX_EQ_CLK_CTRL	=	0x2410
                    2414   1574 _DFE_CTRL_REG4	=	0x2414
                    2418   1575 _DFE_ANA_REG0	=	0x2418
                    241C   1576 _DFE_ANA_REG1	=	0x241c
                    2420   1577 _DFE_STEP_REG0	=	0x2420
                    2424   1578 _DFE_STEP_REG1	=	0x2424
                    2430   1579 _DFE_FEN_EVEN_REG	=	0x2430
                    2434   1580 _DFE_FEN_ODD_REG	=	0x2434
                    2438   1581 _DFE_DC_EVEN_REG8	=	0x2438
                    243C   1582 _DFE_DC_ODD_REG8	=	0x243c
                    2440   1583 _DFE_FEXT_EVEN_REG0	=	0x2440
                    2444   1584 _DFE_FEXT_EVEN_REG1	=	0x2444
                    2448   1585 _DFE_FEXT_EVEN_REG2	=	0x2448
                    244C   1586 _DFE_FEXT_EVEN_REG3	=	0x244c
                    2450   1587 _DFE_FEXT_EVEN_REG4	=	0x2450
                    2454   1588 _DFE_FEXT_EVEN_REG5	=	0x2454
                    2458   1589 _DFE_FEXT_EVEN_REG6	=	0x2458
                    245C   1590 _DFE_FEXT_EVEN_REG7	=	0x245c
                    2460   1591 _DFE_FEXT_ODD_REG0	=	0x2460
                    2464   1592 _DFE_FEXT_ODD_REG1	=	0x2464
                    2468   1593 _DFE_FEXT_ODD_REG2	=	0x2468
                    246C   1594 _DFE_FEXT_ODD_REG3	=	0x246c
                    2470   1595 _DFE_FEXT_ODD_REG4	=	0x2470
                    2474   1596 _DFE_FEXT_ODD_REG5	=	0x2474
                    2478   1597 _DFE_FEXT_ODD_REG6	=	0x2478
                    247C   1598 _DFE_FEXT_ODD_REG7	=	0x247c
                    2480   1599 _DFE_READ_EVEN_SM_REG0	=	0x2480
                    2484   1600 _DFE_READ_EVEN_SM_REG1	=	0x2484
                    2488   1601 _DFE_READ_EVEN_SM_REG2	=	0x2488
                    248C   1602 _DFE_READ_EVEN_SM_REG3	=	0x248c
                    2490   1603 _DFE_READ_EVEN_SM_REG4	=	0x2490
                    2494   1604 _DFE_READ_EVEN_SM_REG5	=	0x2494
                    2498   1605 _DFE_READ_EVEN_SM_REG6	=	0x2498
                    249C   1606 _DFE_READ_EVEN_SM_REG7	=	0x249c
                    24A0   1607 _DFE_READ_ODD_SM_REG0	=	0x24a0
                    24A4   1608 _DFE_READ_ODD_SM_REG1	=	0x24a4
                    24A8   1609 _DFE_READ_ODD_SM_REG2	=	0x24a8
                    24AC   1610 _DFE_READ_ODD_SM_REG3	=	0x24ac
                    24B0   1611 _DFE_READ_ODD_SM_REG4	=	0x24b0
                    24B4   1612 _DFE_READ_ODD_SM_REG5	=	0x24b4
                    24B8   1613 _DFE_READ_ODD_SM_REG6	=	0x24b8
                    24BC   1614 _DFE_READ_ODD_SM_REG7	=	0x24bc
                    24C0   1615 _DFE_READ_EVEN_SM_REG8	=	0x24c0
                    24C4   1616 _DFE_READ_ODD_SM_REG8	=	0x24c4
                    24D0   1617 _DFE_READ_EVEN_2C_REG0	=	0x24d0
                    24D4   1618 _DFE_READ_EVEN_2C_REG1	=	0x24d4
                    24D8   1619 _DFE_READ_EVEN_2C_REG2	=	0x24d8
                    24DC   1620 _DFE_READ_EVEN_2C_REG3	=	0x24dc
                    24E0   1621 _DFE_READ_EVEN_2C_REG4	=	0x24e0
                    24E4   1622 _DFE_READ_EVEN_2C_REG5	=	0x24e4
                    24E8   1623 _DFE_READ_EVEN_2C_REG6	=	0x24e8
                    24EC   1624 _DFE_READ_EVEN_2C_REG7	=	0x24ec
                    24F0   1625 _DFE_READ_ODD_2C_REG0	=	0x24f0
                    24F4   1626 _DFE_READ_ODD_2C_REG1	=	0x24f4
                    24F8   1627 _DFE_READ_ODD_2C_REG2	=	0x24f8
                    24FC   1628 _DFE_READ_ODD_2C_REG3	=	0x24fc
                    2500   1629 _DFE_READ_ODD_2C_REG4	=	0x2500
                    2504   1630 _DFE_READ_ODD_2C_REG5	=	0x2504
                    2508   1631 _DFE_READ_ODD_2C_REG6	=	0x2508
                    250C   1632 _DFE_READ_ODD_2C_REG7	=	0x250c
                    2510   1633 _DFE_READ_EVEN_2C_REG8	=	0x2510
                    2514   1634 _DFE_READ_ODD_2C_REG8	=	0x2514
                    2518   1635 _CAL_OFST_REG0	=	0x2518
                    251C   1636 _CAL_OFST_REG1	=	0x251c
                    2520   1637 _CAL_OFST_REG2	=	0x2520
                    2530   1638 _DFE_DCE_REG0	=	0x2530
                    2540   1639 _DFE_STATIC_LANE_REG0	=	0x2540
                    2544   1640 _DFE_STATIC_LANE_REG1	=	0x2544
                    2548   1641 _DFE_STATIC_LANE_REG3	=	0x2548
                    254C   1642 _DFE_STATIC_LANE_REG4	=	0x254c
                    2550   1643 _DFE_STATIC_LANE_REG5	=	0x2550
                    2554   1644 _DFE_STATIC_LANE_REG6	=	0x2554
                    2560   1645 _EOM_VLD_REG0	=	0x2560
                    2564   1646 _EOM_VLD_REG1	=	0x2564
                    2568   1647 _EOM_VLD_REG2	=	0x2568
                    256C   1648 _EOM_VLD_REG3	=	0x256c
                    2570   1649 _EOM_ERR_REG0	=	0x2570
                    2574   1650 _EOM_ERR_REG1	=	0x2574
                    2578   1651 _EOM_ERR_REG2	=	0x2578
                    257C   1652 _EOM_ERR_REG3	=	0x257c
                    2580   1653 _EOM_REG0	=	0x2580
                    25F0   1654 _EOM_VLD_REG4	=	0x25f0
                    25F4   1655 _LANE_MARGIN_REG0	=	0x25f4
                    6000   1656 _CAL_CTRL1_LANE	=	0x6000
                    6004   1657 _CAL_CTRL2_LANE	=	0x6004
                    6008   1658 _CAL_CTRL3_LANE	=	0x6008
                    600C   1659 _CAL_CTRL4_LANE	=	0x600c
                    6010   1660 _CAL_SAVE_DATA1_LANE	=	0x6010
                    6014   1661 _CAL_SAVE_DATA2_LANE	=	0x6014
                    6018   1662 _CAL_SAVE_DATA3_LANE	=	0x6018
                    601C   1663 _PHY_REMOTE_CTRL_COMMAND_LANE	=	0x601c
                    6020   1664 _PHY_REMOTE_CTRL_VALUE_LANE	=	0x6020
                    6024   1665 _PHY_LOCAL_VALUE_LANE	=	0x6024
                    6028   1666 _TRX_TRAIN_IF_TIMERS1_LANE	=	0x6028
                    602C   1667 _TRX_TRAIN_IF_TIMERS2_LANE	=	0x602c
                    6030   1668 _TRX_TRAIN_IF_TIMERS_ENABLE_LANE	=	0x6030
                    6034   1669 _DFE_CONTROL_0	=	0x6034
                    6038   1670 _DFE_CONTROL_1	=	0x6038
                    6040   1671 _DFE_CONTROL_2	=	0x6040
                    6044   1672 _DFE_CONTROL_3	=	0x6044
                    6048   1673 _DFE_CONTROL_4	=	0x6048
                    604C   1674 _DFE_CONTROL_5	=	0x604c
                    6050   1675 _TRAIN_CONTROL_0	=	0x6050
                    6054   1676 _TRAIN_CONTROL_1	=	0x6054
                    6058   1677 _TRAIN_CONTROL_2	=	0x6058
                    605C   1678 _RPTA_CONFIG_0	=	0x605c
                    6060   1679 _RPTA_CONFIG_1	=	0x6060
                    6064   1680 _DLL_CAL	=	0x6064
                    6068   1681 _TRAIN_PARA_0	=	0x6068
                    606C   1682 _TRAIN_PARA_1	=	0x606c
                    6070   1683 _TRAIN_PARA_2	=	0x6070
                    6074   1684 _TRAIN_PARA_3	=	0x6074
                    6078   1685 _DFE_CONTROL_6	=	0x6078
                    607C   1686 _DFE_TEST_0	=	0x607c
                    6080   1687 _DFE_TEST_1	=	0x6080
                    6084   1688 _DFE_TEST_4	=	0x6084
                    6088   1689 _DFE_TEST_5	=	0x6088
                    608C   1690 _DFE_CONTROL_7	=	0x608c
                    6090   1691 _DFE_CONTROL_8	=	0x6090
                    6094   1692 _DFE_CONTROL_9	=	0x6094
                    6098   1693 _DFE_CONTROL_10	=	0x6098
                    609C   1694 _DFE_CONTROL_11	=	0x609c
                    60A0   1695 _CDS_CTRL_REG0	=	0x60a0
                    60A4   1696 _CDS_CTRL_REG1	=	0x60a4
                    60A8   1697 _ESM_POP_P_CNT_LOW_LANE	=	0x60a8
                    60AC   1698 _ESM_ERR_P_CNT_LOW_LANE	=	0x60ac
                    60B0   1699 _ESM_ERR_POP_CNT_HIGH_LANE	=	0x60b0
                    60B4   1700 _TRAIN_CONTROL_3	=	0x60b4
                    60B8   1701 _TRAIN_CONTROL_4	=	0x60b8
                    60BC   1702 _TRAIN_CONTROL_5	=	0x60bc
                    60C0   1703 _TRAIN_CONTROL_6	=	0x60c0
                    60C4   1704 _TRAIN_CONTROL_7	=	0x60c4
                    60C8   1705 _TRAIN_CONTROL_8	=	0x60c8
                    60CC   1706 _TRAIN_CONTROL_9	=	0x60cc
                    60D0   1707 _TRAIN_CONTROL_10	=	0x60d0
                    60D4   1708 _TRAIN_CONTROL_11	=	0x60d4
                    60D8   1709 _TRAIN_CONTROL_12	=	0x60d8
                    60DC   1710 _ESM_POP_N_CNT_LOW_LANE	=	0x60dc
                    60E0   1711 _ESM_ERR_N_CNT_LOW_LANE	=	0x60e0
                    60E4   1712 _TRAIN_CONTROL_13	=	0x60e4
                    60E8   1713 _TRAIN_CONTROL_14	=	0x60e8
                    60EC   1714 _TRAIN_CONTROL_15	=	0x60ec
                    60F0   1715 _TRAIN_CONTROL_16	=	0x60f0
                    60F4   1716 _TRAIN_CONTROL_17	=	0x60f4
                    60F8   1717 _END_XDAT_LANE	=	0x60f8
                    A000   1718 _TX_CMN_REG	=	0xa000
                    A008   1719 _DTX_REG0	=	0xa008
                    A00C   1720 _DTX_REG1	=	0xa00c
                    A010   1721 _DTX_REG2	=	0xa010
                    A014   1722 _DTX_REG3	=	0xa014
                    A018   1723 _DTX_REG4	=	0xa018
                    A01C   1724 _DTX_PHY_ALIGN_REG0	=	0xa01c
                    A024   1725 _DTX_PHY_ALIGN_REG1	=	0xa024
                    A028   1726 _DTX_PHY_ALIGN_REG2	=	0xa028
                    A02C   1727 _SRIS_REG0	=	0xa02c
                    A030   1728 _SRIS_REG1	=	0xa030
                    A100   1729 _RX_CMN_0	=	0xa100
                    A110   1730 _DFE_STATIC_REG0	=	0xa110
                    A114   1731 _DFE_STATIC_REG1	=	0xa114
                    A118   1732 _DFE_STATIC_REG3	=	0xa118
                    A11C   1733 _DFE_STATIC_REG4	=	0xa11c
                    A120   1734 _DFE_STATIC_REG5	=	0xa120
                    A124   1735 _DFE_STATIC_REG6	=	0xa124
                    4200   1736 _GLOB_RST_CLK_CTRL	=	0x4200
                    4204   1737 _GLOB_CLK_SRC_LO	=	0x4204
                    4208   1738 _GLOB_CLK_SRC_HI	=	0x4208
                    420C   1739 _GLOB_MISC_CTRL	=	0x420c
                    4210   1740 _GLOB_DP_SAL_CFG	=	0x4210
                    4214   1741 _GLOB_DP_SAL_CFG1	=	0x4214
                    4218   1742 _GLOB_DP_SAL_CFG3	=	0x4218
                    421C   1743 _GLOB_DP_SAL_CFG5	=	0x421c
                    4220   1744 _GLOB_PM_CFG0	=	0x4220
                    4224   1745 _GLOB_COUNTER_CTRL	=	0x4224
                    4228   1746 _GLOB_COUNTER_HI	=	0x4228
                    422C   1747 _GLOB_PM_DP_CTRL	=	0x422c
                    4230   1748 _GLOB_DP_BAL_CFG0	=	0x4230
                    4234   1749 _GLOB_DP_BAL_CFG2	=	0x4234
                    4238   1750 _GLOB_DP_BAL_CFG4	=	0x4238
                    423C   1751 _GLOB_BIST_CTRL	=	0x423c
                    4240   1752 _GLOB_BIST_LANE_TYPE	=	0x4240
                    4244   1753 _GLOB_BIST_START	=	0x4244
                    4248   1754 _GLOB_BIST_MASK	=	0x4248
                    424C   1755 _GLOB_BIST_RESULT	=	0x424c
                    4250   1756 _GLOB_BIST_SEQR_CFG	=	0x4250
                    4254   1757 _GLOB_BIST_DATA_HI	=	0x4254
                    4258   1758 _GLOB_PIPE_REVISION	=	0x4258
                    425C   1759 _GLOB_L1_SUBSTATES_CFG	=	0x425c
                    A200   1760 _MCU_CONTROL_0	=	0xa200
                    A204   1761 _MCU_CONTROL_1	=	0xa204
                    A208   1762 _MCU_CONTROL_2	=	0xa208
                    A20C   1763 _MCU_CONTROL_3	=	0xa20c
                    A210   1764 _MCU_CONTROL_4	=	0xa210
                    A214   1765 _MCU_DEBUG0	=	0xa214
                    A218   1766 _MCU_DEBUG1	=	0xa218
                    A21C   1767 _MEMORY_CONTROL_0	=	0xa21c
                    A220   1768 _MEMORY_CONTROL_1	=	0xa220
                    A224   1769 _MEMORY_CONTROL_2	=	0xa224
                    A228   1770 _MEMORY_CONTROL_3	=	0xa228
                    A22C   1771 _MEMORY_CONTROL_4	=	0xa22c
                    A234   1772 _MCU_INFO_0	=	0xa234
                    A238   1773 _MCU_INFO_1	=	0xa238
                    A23C   1774 _MCU_INFO_2	=	0xa23c
                    A240   1775 _MCU_INFO_3	=	0xa240
                    A244   1776 _MEM_CMN_ECC_ERR_ADDRESS0	=	0xa244
                    A2E0   1777 _ANA_IF_CMN_REG1	=	0xa2e0
                    A2E4   1778 _MEM_IRQ	=	0xa2e4
                    A2E8   1779 _MEM_IRQ_MASK	=	0xa2e8
                    A2EC   1780 _ANA_IF_CMN_REG0	=	0xa2ec
                    A2F0   1781 _APB_CONTROL_REG	=	0xa2f0
                    A2F4   1782 _MEM_IRQ_CLEAR	=	0xa2f4
                    A2F8   1783 _MCU_SYNC1	=	0xa2f8
                    A2FC   1784 _MCU_SYNC2	=	0xa2fc
                    A300   1785 _TEST0	=	0xa300
                    A304   1786 _TEST1	=	0xa304
                    A308   1787 _TEST2	=	0xa308
                    A30C   1788 _TEST3	=	0xa30c
                    A310   1789 _TEST4	=	0xa310
                    A314   1790 _SYSTEM	=	0xa314
                    A318   1791 _PM_CMN_REG1	=	0xa318
                    A31C   1792 _INPUT_CMN_PIN_REG0	=	0xa31c
                    A320   1793 _INPUT_CMN_PIN_REG1	=	0xa320
                    A324   1794 _INPUT_CMN_PIN_REG2	=	0xa324
                    A328   1795 _ANA_TSEN_CONTROL	=	0xa328
                    A32C   1796 _PLLCAL_REG0	=	0xa32c
                    A330   1797 _PLLCAL_REG1	=	0xa330
                    A334   1798 _CLKGEN_CMN_REG1	=	0xa334
                    A338   1799 _SPD_CMN_REG1	=	0xa338
                    A33C   1800 _OUTPUT_CMN_PIN_REG0	=	0xa33c
                    A340   1801 _CMN_CALIBRATION	=	0xa340
                    A344   1802 __FIELDNAME_	=	0xa344
                    A348   1803 _INPUT_CMN_PIN_REG3	=	0xa348
                    A34C   1804 _PM_CMN_REG2	=	0xa34c
                    A354   1805 _TEST5	=	0xa354
                    A358   1806 _XDATA_MEM_CHECKSUM_CMN_0	=	0xa358
                    A35C   1807 _XDATA_MEM_CHECKSUM_CMN_1	=	0xa35c
                    A360   1808 _XDATA_MEM_CHECKSUM_CMN_2	=	0xa360
                    A364   1809 _MCU_SDT_CMN	=	0xa364
                    A368   1810 _CMN_CACHE_DEBUG0	=	0xa368
                    A36C   1811 _MCU_INT_ADDR	=	0xa36c
                    A370   1812 _CMN_ISR_2	=	0xa370
                    A374   1813 _CMN_ISR_MASK_2	=	0xa374
                    A378   1814 _CMN_ISR_CLEAR_2	=	0xa378
                    A37C   1815 _CMN_MCU_GPIO	=	0xa37c
                    A380   1816 _CMN_CACHE_DEBUG1	=	0xa380
                    A384   1817 _CMN_MCU_TIMER_CONTROL	=	0xa384
                    A388   1818 _CMN_MCU_TIMER_CTRL_2_LANE	=	0xa388
                    A38C   1819 _CMN_MCU_TIMER_CTRL_3_LANE	=	0xa38c
                    A390   1820 _CMN_MCU_TIMER_CTRL_4_LANE	=	0xa390
                    A394   1821 _CMN_MCU_TIMER_CTRL_5_LANE	=	0xa394
                    A398   1822 _CMN_MCU_TIMER0_CONTROL	=	0xa398
                    A39C   1823 _CMN_MCU_TIMER1_CONTROL	=	0xa39c
                    A3A0   1824 _CMN_MCU_TIMER2_CONTROL	=	0xa3a0
                    A3A4   1825 _CMN_MCU_TIMER3_CONTROL	=	0xa3a4
                    A3A8   1826 _CMN_ISR_1	=	0xa3a8
                    A3AC   1827 _CMN_ISR_MASK_1	=	0xa3ac
                    A3B0   1828 _SET_LANE_ISR	=	0xa3b0
                    A3F4   1829 _CMN_MCU_REG	=	0xa3f4
                    A3F8   1830 _CID_REG0	=	0xa3f8
                    A3FC   1831 _CID_REG1	=	0xa3fc
                    E600   1832 _FW_REV	=	0xe600
                    E604   1833 _CONTROL_CONFIG0	=	0xe604
                    E608   1834 _CONTROL_CONFIG1	=	0xe608
                    E60C   1835 _CONTROL_CONFIG2	=	0xe60c
                    E610   1836 _CONTROL_CONFIG3	=	0xe610
                    E614   1837 _CONTROL_CONFIG4	=	0xe614
                    E618   1838 _CONTROL_CONFIG5	=	0xe618
                    E61C   1839 _CONTROL_CONFIG6	=	0xe61c
                    E620   1840 _CONTROL_CONFIG7	=	0xe620
                    E624   1841 _CAL_DATA0	=	0xe624
                    E628   1842 _TRAIN_IF_CONFIG	=	0xe628
                    E62C   1843 _CONTROL_CONFIG8	=	0xe62c
                    E630   1844 _CONTROL_CONFIG9	=	0xe630
                    E634   1845 _CON_CAL_STEP_SIZE1	=	0xe634
                    E638   1846 _CON_CAL_STEP_SIZE2	=	0xe638
                    E63C   1847 _CON_CAL_STEP_SIZE3	=	0xe63c
                    E640   1848 _CON_CAL_STEP_SIZE4	=	0xe640
                    E644   1849 _CON_CAL_STEP_SIZE5	=	0xe644
                    E648   1850 _CAL_TIME_OUT_AND_DIS	=	0xe648
                    E64C   1851 _CAL_STATUS_READ	=	0xe64c
                    E650   1852 _MCU_CONFIG	=	0xe650
                    E654   1853 _CAL_DATA1	=	0xe654
                    E658   1854 _LOOP_CNTS	=	0xe658
                    E65C   1855 _MCU_CONFIG1	=	0xe65c
                    E660   1856 _TIMER_SEL1	=	0xe660
                    E664   1857 _TIMER_SEL2	=	0xe664
                    E668   1858 _TIMER_SEL3	=	0xe668
                    E66C   1859 _G_SELLV_TXCLK	=	0xe66c
                    E670   1860 _G_SELLV_TXDATA	=	0xe670
                    E674   1861 _G_SELLV_TXPRE	=	0xe674
                    E678   1862 _G_SELLV_RXEOMCLK	=	0xe678
                    E67C   1863 _G_SELLV_RXDATACLK	=	0xe67c
                    E680   1864 _G_SELLV_RXSAMPLER	=	0xe680
                    E684   1865 _SAS_PRESET0_TB	=	0xe684
                    E688   1866 _SAS_PRESET1_TB	=	0xe688
                    E68C   1867 _SAS_PRESET2_TB	=	0xe68c
                    E690   1868 _ETH_PRESET0_TB	=	0xe690
                    E694   1869 _ETH_PRESET1_TB	=	0xe694
                    E698   1870 _TX_SAVE_0	=	0xe698
                    E69C   1871 _TX_SAVE_1	=	0xe69c
                    E6A0   1872 _TX_SAVE_2	=	0xe6a0
                    E6A4   1873 _TX_SAVE_3	=	0xe6a4
                    E6A8   1874 _TX_SAVE_4	=	0xe6a8
                    E6AC   1875 _CDS_EYE_CLK_THR	=	0xe6ac
                    E6B0   1876 _SYNC_INFO	=	0xe6b0
                    E6B4   1877 _MCU_INFO_4	=	0xe6b4
                    E6B8   1878 _MCU_INFO_5	=	0xe6b8
                    E6BC   1879 _MCU_INFO_12	=	0xe6bc
                    E6C0   1880 _MCU_INFO_13	=	0xe6c0
                    E6C4   1881 _END_XDAT_CMN	=	0xe6c4
                    2600   1882 _DME_ENC_REG0	=	0x2600
                    2604   1883 _DME_ENC_REG1	=	0x2604
                    2608   1884 _DME_ENC_REG2	=	0x2608
                    260C   1885 _DME_DEC_REG0	=	0x260c
                    2610   1886 _DME_DEC_REG1	=	0x2610
                    2614   1887 _TX_TRAIN_IF_REG0	=	0x2614
                    2618   1888 _TX_TRAIN_IF_REG1	=	0x2618
                    261C   1889 _TX_TRAIN_IF_REG2	=	0x261c
                    2620   1890 _TX_TRAIN_IF_REG3	=	0x2620
                    2624   1891 _TX_TRAIN_PATTTERN_REG0	=	0x2624
                    2628   1892 _TX_TRAIN_DRIVER_REG0	=	0x2628
                    262C   1893 _TX_TRAIN_DRIVER_REG1	=	0x262c
                    2630   1894 _TX_TRAIN_DRIVER_REG2	=	0x2630
                    2634   1895 _TX_TRAIN_DEFAULT_REG0	=	0x2634
                    2638   1896 _TX_TRAIN_DEFAULT_REG1	=	0x2638
                    263C   1897 _TX_TRAIN_DEFAULT_REG2	=	0x263c
                    2640   1898 _TX_TRAIN_DEFAULT_REG3	=	0x2640
                    2644   1899 _TX_TRAIN_DEFAULT_REG4	=	0x2644
                    2648   1900 _TX_TRAIN_DEFAULT_REG5	=	0x2648
                    264C   1901 _TX_EMPH_CTRL_REG0	=	0x264c
                    2650   1902 _LINK_TRAIN_MODE0	=	0x2650
                    2654   1903 _TX_DRV_RD_OUT_REG0	=	0x2654
                    2658   1904 _TX_AMP_CTRL_REG0	=	0x2658
                    265C   1905 _TRX_TRAIN_IF_INTERRUPT_LANE	=	0x265c
                    2660   1906 _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE	=	0x2660
                    2664   1907 _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE	=	0x2664
                    2668   1908 _TX_TRAIN_IF_REG4	=	0x2668
                    266C   1909 _TX_TRAIN_IF_REG5	=	0x266c
                    2670   1910 _TX_TRAIN_IF_REG6	=	0x2670
                    2674   1911 _TX_TRAIN_IF_REG7	=	0x2674
                    2678   1912 _TX_TRAIN_CTRL_LANE	=	0x2678
                    267C   1913 _TX_TRAIN_IF_REG8	=	0x267c
                    6100   1914 _DFE_READ_EVEN_REG0	=	0x6100
                    6104   1915 _DFE_READ_EVEN_REG1	=	0x6104
                    6108   1916 _DFE_READ_EVEN_REG2	=	0x6108
                    610C   1917 _DFE_READ_EVEN_REG3	=	0x610c
                    6110   1918 _DFE_READ_EVEN_REG4	=	0x6110
                    6114   1919 _DFE_READ_EVEN_REG5	=	0x6114
                    6118   1920 _DFE_READ_EVEN_REG6	=	0x6118
                    611C   1921 _DFE_READ_EVEN_REG7	=	0x611c
                    6120   1922 _DFE_READ_ODD_REG0	=	0x6120
                    6124   1923 _DFE_READ_ODD_REG1	=	0x6124
                    6128   1924 _DFE_READ_ODD_REG2	=	0x6128
                    612C   1925 _DFE_READ_ODD_REG3	=	0x612c
                    6130   1926 _DFE_READ_ODD_REG4	=	0x6130
                    6134   1927 _DFE_READ_ODD_REG5	=	0x6134
                    6138   1928 _DFE_READ_ODD_REG6	=	0x6138
                    613C   1929 _DFE_READ_ODD_REG7	=	0x613c
                    6140   1930 _DFE_READ_EVEN_REG8	=	0x6140
                    6144   1931 _DFE_READ_ODD_REG8	=	0x6144
                    6148   1932 _DFE_READ_F0A_EVEN	=	0x6148
                    614C   1933 _DFE_READ_F0A_ODD	=	0x614c
                    6150   1934 _DFE_READ_F0B_EVEN	=	0x6150
                    6154   1935 _DFE_READ_F0B_ODD	=	0x6154
                    6158   1936 _DFE_READ_F0D_EVEN	=	0x6158
                    615C   1937 _DFE_READ_F0D_ODD	=	0x615c
                    6160   1938 _DFE_READ_F0D_LEFT_EVEN	=	0x6160
                    6164   1939 _DFE_READ_F0D_LEFT_ODD	=	0x6164
                    6168   1940 _DFE_READ_F0D_RIGHT_EVEN	=	0x6168
                    616C   1941 _DFE_READ_F0D_RIGHT_ODD	=	0x616c
                    6170   1942 _CDS_READ_MISC0	=	0x6170
                    6174   1943 _CDS_READ_MISC1	=	0x6174
                    6214   1944 _TXTRAIN_IF_REG0	=	0x6214
                    E000   1945 _lc_speedtable	=	0xe000
                    E1C0   1946 _ring_speedtable	=	0xe1c0
                    E5C0   1947 _phy_mode_cmn_table	=	0xe5c0
                    6300   1948 _max_gen	=	0x6300
                    6301   1949 _min_gen	=	0x6301
                    6304   1950 _speedtable	=	0x6304
                    65D4   1951 _phy_mode_lane_table	=	0x65d4
                    60B4   1952 _rc_save	=	0x60b4
                    60D0   1953 _txffe_save	=	0x60d0
                    60E4   1954 _phase_save	=	0x60e4
                    6030   1955 _train_gn1_index	=	0x6030
                    6031   1956 _train_g1_index	=	0x6031
                    6032   1957 _train_g0_index	=	0x6032
                    E6B0   1958 _local_tx_preset_tb	=	0xe6b0
                    E5C1   1959 _cmx_cal_lcvco_dac	=	0xe5c1
                    E5C1   1960 _cmx_cal_lcvco_dac_lsb	=	0xe5c1
                    E5C4   1961 _cmx_cal_lcvco_dac_msb	=	0xe5c4
                    E5CA   1962 _cmx_cal_lccap_msb	=	0xe5ca
                    E5C8   1963 _cmx_cal_lccap_lsb	=	0xe5c8
                    E5CC   1964 _cmx_cal_plldcc	=	0xe5cc
                    E5D0   1965 _cmx_cal_pll_speed_ring	=	0xe5d0
                    E5D4   1966 _cmx_cal_pll_sllp_dac_coarse_ring	=	0xe5d4
                    E5D8   1967 _cmx_cal_sllp_dac_fine_ring	=	0xe5d8
                    65D4   1968 _lnx_cal_txdcc_pdiv	=	0x65d4
                    65D8   1969 _lnx_cal_txdcc_pdiv_hg	=	0x65d8
                    65DA   1970 _lnx_cal_txdcc	=	0x65da
                    65DE   1971 _lnx_cal_txdcc_hg	=	0x65de
                    65E0   1972 _lnx_cal_rxdcc_dll	=	0x65e0
                    65E4   1973 _lnx_cal_rxdcc_dll_hg	=	0x65e4
                    65E6   1974 _lnx_cal_rxdcc_data	=	0x65e6
                    65F0   1975 _lnx_cal_rxdcc_data_hg	=	0x65f0
                    65F5   1976 _lnx_cal_rxdcc_eom	=	0x65f5
                    65FF   1977 _lnx_cal_rxdcc_eom_hg	=	0x65ff
                    6604   1978 _lnx_cal_dll_gmsel	=	0x6604
                    6606   1979 _lnx_cal_vdda_dll_sel	=	0x6606
                    660A   1980 _lnx_cal_dll_eom_gmsel	=	0x660a
                    660C   1981 _lnx_cal_vdda_dll_eom_sel	=	0x660c
                    6610   1982 _lnx_cal_eom_dpher	=	0x6610
                    6612   1983 _lnx_cal_align90_dummy_clk	=	0x6612
                    661A   1984 _lnx_cal_align90_dac	=	0x661a
                    6622   1985 _lnx_cal_align90_gm	=	0x6622
                    662A   1986 _lnx_cal_sellv_txdata	=	0x662a
                    6634   1987 _lnx_cal_sellv_txclk	=	0x6634
                    663E   1988 _lnx_cal_sellv_rxdataclk	=	0x663e
                    6648   1989 _lnx_cal_sellv_txpre	=	0x6648
                    6652   1990 _lnx_cal_sellv_rxsampler	=	0x6652
                    665C   1991 _lnx_cal_sellv_rxeomclk	=	0x665c
                    6666   1992 _lnx_spdoft_tx_preset_index_lane	=	0x6666
                    6490   1993 _lnx_calx_txdcc_pdiv	=	0x6490
                    6496   1994 _lnx_calx_txdcc_pdiv_hg	=	0x6496
                    6499   1995 _lnx_calx_txdcc	=	0x6499
                    649F   1996 _lnx_calx_txdcc_hg	=	0x649f
                    64A2   1997 _lnx_calx_rxdcc_dll	=	0x64a2
                    64A8   1998 _lnx_calx_rxdcc_dll_hg	=	0x64a8
                    64AB   1999 _lnx_calx_dll_gmsel	=	0x64ab
                    64AE   2000 _lnx_calx_vdda_dll_sel	=	0x64ae
                    64B4   2001 _lnx_calx_dll_eom_gmsel	=	0x64b4
                    64B7   2002 _lnx_calx_vdda_dll_eom_sel	=	0x64b7
                    64BD   2003 _lnx_calx_eom_dpher	=	0x64bd
                    64C0   2004 _lnx_calx_align90_dummy_clk	=	0x64c0
                    64CC   2005 _lnx_calx_align90_dac	=	0x64cc
                    64D8   2006 _lnx_calx_align90_gm	=	0x64d8
                    6100   2007 _cds28	=	0x6100
                    6178   2008 _dfe_sm	=	0x6178
                    61B8   2009 _dfe_sm_dc	=	0x61b8
                    61C0   2010 _dfe_sm_save	=	0x61c0
                    03FC   2011 _UPHY_ANAREG_REV_0	=	0x03fc
                    E684   2012 _tx_tb	=	0xe684
                    E698   2013 _train_save_tb	=	0xe698
                    607C   2014 _sq_thrs_ratio_tb	=	0x607c
   67B8                    2015 _Align90_CLK_OFFSET::
   67B8                    2016 	.ds 1
   67B9                    2017 _EOM_CLK_OFFSET::
   67B9                    2018 	.ds 1
                           2019 ;--------------------------------------------------------
                           2020 ; absolute external ram data
                           2021 ;--------------------------------------------------------
                           2022 	.area XABS    (ABS,XDATA)
                           2023 ;--------------------------------------------------------
                           2024 ; external initialized ram data
                           2025 ;--------------------------------------------------------
                           2026 	.area HOME    (CODE)
                           2027 	.area GSINIT0 (CODE)
                           2028 	.area GSINIT1 (CODE)
                           2029 	.area GSINIT2 (CODE)
                           2030 	.area GSINIT3 (CODE)
                           2031 	.area GSINIT4 (CODE)
                           2032 	.area GSINIT5 (CODE)
                           2033 	.area GSINIT  (CODE)
                           2034 	.area GSFINAL (CODE)
                           2035 	.area CSEG    (CODE)
                           2036 ;--------------------------------------------------------
                           2037 ; global & static initialisations
                           2038 ;--------------------------------------------------------
                           2039 	.area HOME    (CODE)
                           2040 	.area GSINIT  (CODE)
                           2041 	.area GSFINAL (CODE)
                           2042 	.area GSINIT  (CODE)
                           2043 ;--------------------------------------------------------
                           2044 ; Home
                           2045 ;--------------------------------------------------------
                           2046 	.area HOME    (CODE)
                           2047 	.area HOME    (CODE)
                           2048 ;--------------------------------------------------------
                           2049 ; code
                           2050 ;--------------------------------------------------------
                           2051 	.area BANK1   (CODE)
                           2052 ;------------------------------------------------------------
                           2053 ;Allocation info for local variables in function 'get_offset_number'
                           2054 ;------------------------------------------------------------
                           2055 ;------------------------------------------------------------
                           2056 ;	../../shared/src/phase_adaptation.c:44: void get_offset_number(void) 
                           2057 ;	-----------------------------------------
                           2058 ;	 function get_offset_number
                           2059 ;	-----------------------------------------
   B1ED                    2060 _get_offset_number:
                    0002   2061 	ar2 = 0x02
                    0003   2062 	ar3 = 0x03
                    0004   2063 	ar4 = 0x04
                    0005   2064 	ar5 = 0x05
                    0006   2065 	ar6 = 0x06
                    0007   2066 	ar7 = 0x07
                    0000   2067 	ar0 = 0x00
                    0001   2068 	ar1 = 0x01
                           2069 ;	../../shared/src/phase_adaptation.c:46: Align90_CLK_OFFSET  = (int8_t)lnx_DATA_CLK_OFFSET_2C_LANE_7_0;
   B1ED 90 60 60           2070 	mov	dptr,#_RPTA_CONFIG_1
   B1F0 E0                 2071 	movx	a,@dptr
   B1F1 90 67 B8           2072 	mov	dptr,#_Align90_CLK_OFFSET
   B1F4 F0                 2073 	movx	@dptr,a
                           2074 ;	../../shared/src/phase_adaptation.c:47: EOM_CLK_OFFSET = (int8_t)lnx_EOM_CLK_OFFSET_2C_LANE_7_0;
   B1F5 90 60 5F           2075 	mov	dptr,#(_RPTA_CONFIG_0 + 0x0003)
   B1F8 E0                 2076 	movx	a,@dptr
   B1F9 90 67 B9           2077 	mov	dptr,#_EOM_CLK_OFFSET
   B1FC F0                 2078 	movx	@dptr,a
   B1FD 22                 2079 	ret
                           2080 ;------------------------------------------------------------
                           2081 ;Allocation info for local variables in function 'Phase_Adaptation'
                           2082 ;------------------------------------------------------------
                           2083 ;------------------------------------------------------------
                           2084 ;	../../shared/src/phase_adaptation.c:54: void Phase_Adaptation(void) BANKING_CTRL {
                           2085 ;	-----------------------------------------
                           2086 ;	 function Phase_Adaptation
                           2087 ;	-----------------------------------------
   B1FE                    2088 _Phase_Adaptation:
                           2089 ;	../../shared/src/phase_adaptation.c:56: if(eom_ext_mode==1 || dfe_dis == 1) return;
   B1FE 90 67 25           2090 	mov	dptr,#_eom_ext_mode
   B201 E0                 2091 	movx	a,@dptr
   B202 FA                 2092 	mov	r2,a
   B203 BA 01 02           2093 	cjne	r2,#0x01,00124$
   B206 80 08              2094 	sjmp	00101$
   B208                    2095 00124$:
   B208 90 66 F7           2096 	mov	dptr,#_dfe_dis
   B20B E0                 2097 	movx	a,@dptr
   B20C FA                 2098 	mov	r2,a
   B20D BA 01 03           2099 	cjne	r2,#0x01,00102$
   B210                    2100 00101$:
   B210 02 B2 AC           2101 	ljmp	00116$
   B213                    2102 00102$:
                           2103 ;	../../shared/src/phase_adaptation.c:58: if( do_phase_adapt ){
   B213 90 67 15           2104 	mov	dptr,#_do_phase_adapt
   B216 E0                 2105 	movx	a,@dptr
   B217 FA                 2106 	mov	r2,a
   B218 60 4B              2107 	jz	00110$
                           2108 ;	../../shared/src/phase_adaptation.c:59: if( lnx_PHASE_ADAPT_ENABLE_LANE == 0 ) {	//requested stop
   B21A 90 60 4C           2109 	mov	dptr,#_DFE_CONTROL_5
   B21D E0                 2110 	movx	a,@dptr
   B21E 20 E5 5F           2111 	jb	acc.5,00111$
                           2112 ;	../../shared/src/phase_adaptation.c:60: lnx_RD_DFE_F0D_LANE_7_0 = train.eo_slicer;
   B221 90 66 50           2113 	mov	dptr,#(_train + 0x0010)
   B224 E0                 2114 	movx	a,@dptr
   B225 FA                 2115 	mov	r2,a
   B226 90 60 A1           2116 	mov	dptr,#(_CDS_CTRL_REG0 + 0x0001)
   B229 EA                 2117 	mov	a,r2
   B22A F0                 2118 	movx	@dptr,a
                           2119 ;	../../shared/src/phase_adaptation.c:61: Data_Path_DFE_Adapt();		
   B22B 78 66              2120 	mov	r0,#_Data_Path_DFE_Adapt
   B22D 79 B8              2121 	mov	r1,#(_Data_Path_DFE_Adapt >> 8)
   B22F 7A 01              2122 	mov	r2,#(_Data_Path_DFE_Adapt >> 16)
   B231 12 00 B3           2123 	lcall	__sdcc_banked_call
                           2124 ;	../../shared/src/phase_adaptation.c:62: do_phase_adapt = 0;  
   B234 90 67 15           2125 	mov	dptr,#_do_phase_adapt
                           2126 ;	../../shared/src/phase_adaptation.c:63: PH_CONV_CNT = 0;
                           2127 ;	../../shared/src/phase_adaptation.c:64: EOM_CONV_CNT = 0;
                           2128 ;	../../shared/src/phase_adaptation.c:65: ph_conv_dir= 0;
   B237 E4                 2129 	clr	a
   B238 F0                 2130 	movx	@dptr,a
   B239 90 66 FA           2131 	mov	dptr,#_PH_CONV_CNT
   B23C F0                 2132 	movx	@dptr,a
   B23D 90 66 FB           2133 	mov	dptr,#_EOM_CONV_CNT
   B240 F0                 2134 	movx	@dptr,a
   B241 90 66 FC           2135 	mov	dptr,#_ph_conv_dir
   B244 F0                 2136 	movx	@dptr,a
                           2137 ;	../../shared/src/phase_adaptation.c:66: eom_conv_dir = 0;
   B245 90 66 FD           2138 	mov	dptr,#_eom_conv_dir
   B248 E4                 2139 	clr	a
   B249 F0                 2140 	movx	@dptr,a
                           2141 ;	../../shared/src/phase_adaptation.c:67: f1_ofst_adjustment_en = 0;		
   B24A 90 24 02           2142 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   B24D E0                 2143 	movx	a,@dptr
   B24E 54 EF              2144 	anl	a,#0xef
   B250 F0                 2145 	movx	@dptr,a
                           2146 ;	../../shared/src/phase_adaptation.c:68: dfe_hardware_cont_run();
   B251 78 89              2147 	mov	r0,#_dfe_hardware_cont_run
   B253 79 91              2148 	mov	r1,#(_dfe_hardware_cont_run >> 8)
   B255 7A 02              2149 	mov	r2,#(_dfe_hardware_cont_run >> 16)
   B257 12 00 B3           2150 	lcall	__sdcc_banked_call
                           2151 ;	../../shared/src/phase_adaptation.c:69: cal_half_code();
   B25A 78 7F              2152 	mov	r0,#_cal_half_code
   B25C 79 92              2153 	mov	r1,#(_cal_half_code >> 8)
   B25E 7A 02              2154 	mov	r2,#(_cal_half_code >> 16)
   B260 12 00 B3           2155 	lcall	__sdcc_banked_call
                           2156 ;	../../shared/src/phase_adaptation.c:76: return;
   B263 80 47              2157 	sjmp	00116$
   B265                    2158 00110$:
                           2159 ;	../../shared/src/phase_adaptation.c:80: if( lnx_PHASE_ADAPT_ENABLE_LANE  == 1 ) {
   B265 90 60 4C           2160 	mov	dptr,#_DFE_CONTROL_5
   B268 E0                 2161 	movx	a,@dptr
   B269 C4                 2162 	swap	a
   B26A 03                 2163 	rr	a
   B26B 54 01              2164 	anl	a,#0x01
   B26D FA                 2165 	mov	r2,a
   B26E BA 01 0D           2166 	cjne	r2,#0x01,00107$
                           2167 ;	../../shared/src/phase_adaptation.c:81: do_phase_adapt = 1; Phase_Adapt_Inited = 0; //start
   B271 90 67 15           2168 	mov	dptr,#_do_phase_adapt
   B274 74 01              2169 	mov	a,#0x01
   B276 F0                 2170 	movx	@dptr,a
   B277 90 67 16           2171 	mov	dptr,#_Phase_Adapt_Inited
   B27A E4                 2172 	clr	a
   B27B F0                 2173 	movx	@dptr,a
   B27C 80 02              2174 	sjmp	00111$
   B27E                    2175 00107$:
                           2176 ;	../../shared/src/phase_adaptation.c:83: else return; //idle mode
   B27E 80 2C              2177 	sjmp	00116$
   B280                    2178 00111$:
                           2179 ;	../../shared/src/phase_adaptation.c:86: if(Phase_Adapt_Inited == 0)
   B280 90 67 16           2180 	mov	dptr,#_Phase_Adapt_Inited
   B283 E0                 2181 	movx	a,@dptr
   B284 FA                 2182 	mov	r2,a
   B285 70 09              2183 	jnz	00113$
                           2184 ;	../../shared/src/phase_adaptation.c:87: Init_Phase_Adapt();
   B287 78 AF              2185 	mov	r0,#_Init_Phase_Adapt
   B289 79 B2              2186 	mov	r1,#(_Init_Phase_Adapt >> 8)
   B28B 7A 01              2187 	mov	r2,#(_Init_Phase_Adapt >> 16)
   B28D 12 00 B3           2188 	lcall	__sdcc_banked_call
   B290                    2189 00113$:
                           2190 ;	../../shared/src/phase_adaptation.c:89: train.phase_offset_esm = adapt_eom_phase_save; 
   B290 90 67 0D           2191 	mov	dptr,#_adapt_eom_phase_save
   B293 E0                 2192 	movx	a,@dptr
   B294 FA                 2193 	mov	r2,a
   B295 90 66 62           2194 	mov	dptr,#(_train + 0x0022)
   B298 F0                 2195 	movx	@dptr,a
                           2196 ;	../../shared/src/phase_adaptation.c:91: if(lnx_F1_ALIGN_SKIP_LANE==0) { 
   B299 90 60 4C           2197 	mov	dptr,#_DFE_CONTROL_5
   B29C E0                 2198 	movx	a,@dptr
   B29D 20 E7 09           2199 	jb	acc.7,00115$
                           2200 ;	../../shared/src/phase_adaptation.c:92: EOM_Clock_Alignment();
   B2A0 78 82              2201 	mov	r0,#_EOM_Clock_Alignment
   B2A2 79 B3              2202 	mov	r1,#(_EOM_Clock_Alignment >> 8)
   B2A4 7A 01              2203 	mov	r2,#(_EOM_Clock_Alignment >> 16)
   B2A6 12 00 B3           2204 	lcall	__sdcc_banked_call
   B2A9                    2205 00115$:
                           2206 ;	../../shared/src/phase_adaptation.c:98: Data_EOM_Align90_Adapt_EyeWidthMode(); 
   B2A9 12 B5 5A           2207 	lcall	_Data_EOM_Align90_Adapt_EyeWidthMode
   B2AC                    2208 00116$:
   B2AC 02 00 C5           2209 	ljmp	__sdcc_banked_ret
                           2210 ;------------------------------------------------------------
                           2211 ;Allocation info for local variables in function 'Init_Phase_Adapt'
                           2212 ;------------------------------------------------------------
                           2213 ;------------------------------------------------------------
                           2214 ;	../../shared/src/phase_adaptation.c:122: void Init_Phase_Adapt(void) BANKING_CTRL {
                           2215 ;	-----------------------------------------
                           2216 ;	 function Init_Phase_Adapt
                           2217 ;	-----------------------------------------
   B2AF                    2218 _Init_Phase_Adapt:
                           2219 ;	../../shared/src/phase_adaptation.c:126: dfe_hardware_cont_stop();	
   B2AF 78 54              2220 	mov	r0,#_dfe_hardware_cont_stop
   B2B1 79 91              2221 	mov	r1,#(_dfe_hardware_cont_stop >> 8)
   B2B3 7A 02              2222 	mov	r2,#(_dfe_hardware_cont_stop >> 16)
   B2B5 12 00 B3           2223 	lcall	__sdcc_banked_call
                           2224 ;	../../shared/src/phase_adaptation.c:130: if(lnx_FORCE_INI_PHASE_OFFSET_EN_LANE) {
   B2B8 90 60 8E           2225 	mov	dptr,#(_DFE_CONTROL_7 + 0x0002)
   B2BB E0                 2226 	movx	a,@dptr
   B2BC 30 E1 09           2227 	jnb	acc.1,00102$
                           2228 ;	../../shared/src/phase_adaptation.c:131: train.phase_offset_data = (int8_t)lnx_INI_PHASE_ADAPT_OFFSET_2C_LANE_7_0;
   B2BF 90 60 91           2229 	mov	dptr,#(_DFE_CONTROL_8 + 0x0001)
   B2C2 E0                 2230 	movx	a,@dptr
   B2C3 FA                 2231 	mov	r2,a
   B2C4 90 66 61           2232 	mov	dptr,#(_train + 0x0021)
   B2C7 F0                 2233 	movx	@dptr,a
   B2C8                    2234 00102$:
                           2235 ;	../../shared/src/phase_adaptation.c:134: get_offset_number();
   B2C8 12 B1 ED           2236 	lcall	_get_offset_number
                           2237 ;	../../shared/src/phase_adaptation.c:135: train.phase_offset_data = train.phase_offset_data + Align90_CLK_OFFSET; // cal or train result
   B2CB 90 66 61           2238 	mov	dptr,#(_train + 0x0021)
   B2CE E0                 2239 	movx	a,@dptr
   B2CF FA                 2240 	mov	r2,a
   B2D0 90 67 B8           2241 	mov	dptr,#_Align90_CLK_OFFSET
   B2D3 E0                 2242 	movx	a,@dptr
   B2D4 2A                 2243 	add	a,r2
   B2D5 90 66 61           2244 	mov	dptr,#(_train + 0x0021)
   B2D8 F0                 2245 	movx	@dptr,a
                           2246 ;	../../shared/src/phase_adaptation.c:136: train.phase_offset_esm = train.phase_offset_esm + EOM_CLK_OFFSET;
   B2D9 90 66 62           2247 	mov	dptr,#(_train + 0x0022)
   B2DC E0                 2248 	movx	a,@dptr
   B2DD FA                 2249 	mov	r2,a
   B2DE 90 67 B9           2250 	mov	dptr,#_EOM_CLK_OFFSET
   B2E1 E0                 2251 	movx	a,@dptr
   B2E2 FB                 2252 	mov	r3,a
   B2E3 2A                 2253 	add	a,r2
   B2E4 FA                 2254 	mov	r2,a
   B2E5 90 66 62           2255 	mov	dptr,#(_train + 0x0022)
   B2E8 F0                 2256 	movx	@dptr,a
                           2257 ;	../../shared/src/phase_adaptation.c:139: if(tag_F1_VOFF_ADJUST_EN) {
   B2E9 90 60 98           2258 	mov	dptr,#_DFE_CONTROL_10
   B2EC E0                 2259 	movx	a,@dptr
   B2ED 30 E3 07           2260 	jnb	acc.3,00104$
                           2261 ;	../../shared/src/phase_adaptation.c:140: f1_ofst_adjustment_en = 1;
   B2F0 90 24 02           2262 	mov	dptr,#(_DFE_CTRL_REG0 + 0x0002)
   B2F3 E0                 2263 	movx	a,@dptr
   B2F4 44 10              2264 	orl	a,#0x10
   B2F6 F0                 2265 	movx	@dptr,a
   B2F7                    2266 00104$:
                           2267 ;	../../shared/src/phase_adaptation.c:142: Data_Path_DFE_Adapt();          	
   B2F7 78 66              2268 	mov	r0,#_Data_Path_DFE_Adapt
   B2F9 79 B8              2269 	mov	r1,#(_Data_Path_DFE_Adapt >> 8)
   B2FB 7A 01              2270 	mov	r2,#(_Data_Path_DFE_Adapt >> 16)
   B2FD 12 00 B3           2271 	lcall	__sdcc_banked_call
                           2272 ;	../../shared/src/phase_adaptation.c:144: adapt_data_en = 0;
   B300 C2 0D              2273 	clr	_adapt_data_en
                           2274 ;	../../shared/src/phase_adaptation.c:145: adapt_slicer_en = 1;
   B302 D2 0C              2275 	setb	_adapt_slicer_en
                           2276 ;	../../shared/src/phase_adaptation.c:146: ph_control_mode = 1;
   B304 90 66 F8           2277 	mov	dptr,#_ph_control_mode
   B307 74 01              2278 	mov	a,#0x01
   B309 F0                 2279 	movx	@dptr,a
                           2280 ;	../../shared/src/phase_adaptation.c:147: set_ph_mode();
   B30A 78 3B              2281 	mov	r0,#_set_ph_mode
   B30C 79 97              2282 	mov	r1,#(_set_ph_mode >> 8)
   B30E 7A 02              2283 	mov	r2,#(_set_ph_mode >> 16)
   B310 12 00 B3           2284 	lcall	__sdcc_banked_call
                           2285 ;	../../shared/src/phase_adaptation.c:148: phase_control_func();
   B313 12 2D F3           2286 	lcall	_phase_control_func
                           2287 ;	../../shared/src/phase_adaptation.c:150: phase_offset = 10;
   B316 90 67 0C           2288 	mov	dptr,#_phase_offset
   B319 74 0A              2289 	mov	a,#0x0A
   B31B F0                 2290 	movx	@dptr,a
                           2291 ;	../../shared/src/phase_adaptation.c:151: eom_vote_acc = 0;
   B31C 90 67 05           2292 	mov	dptr,#_eom_vote_acc
   B31F E4                 2293 	clr	a
   B320 F0                 2294 	movx	@dptr,a
   B321 A3                 2295 	inc	dptr
   B322 F0                 2296 	movx	@dptr,a
                           2297 ;	../../shared/src/phase_adaptation.c:152: phase_vote_acc = 0;
   B323 90 67 03           2298 	mov	dptr,#_phase_vote_acc
   B326 E4                 2299 	clr	a
   B327 F0                 2300 	movx	@dptr,a
   B328 A3                 2301 	inc	dptr
   B329 F0                 2302 	movx	@dptr,a
                           2303 ;	../../shared/src/phase_adaptation.c:154: f0d_c_pre = 0;
   B32A 90 67 07           2304 	mov	dptr,#_f0d_c_pre
                           2305 ;	../../shared/src/phase_adaptation.c:155: f0d_l_pre = 0;
                           2306 ;	../../shared/src/phase_adaptation.c:156: f0d_r_pre = 0;
                           2307 ;	../../shared/src/phase_adaptation.c:157: phase_l_offset = 0;
   B32D E4                 2308 	clr	a
   B32E F0                 2309 	movx	@dptr,a
   B32F 90 67 08           2310 	mov	dptr,#_f0d_l_pre
   B332 F0                 2311 	movx	@dptr,a
   B333 90 67 09           2312 	mov	dptr,#_f0d_r_pre
   B336 F0                 2313 	movx	@dptr,a
   B337 90 67 0A           2314 	mov	dptr,#_phase_l_offset
   B33A F0                 2315 	movx	@dptr,a
                           2316 ;	../../shared/src/phase_adaptation.c:158: phase_r_offset = 0;
   B33B 90 67 0B           2317 	mov	dptr,#_phase_r_offset
                           2318 ;	../../shared/src/phase_adaptation.c:159: norm_eom_ph_os_l = 0; norm_eom_ph_os_c = 0; norm_eom_ph_os_r = 0;
   B33E E4                 2319 	clr	a
   B33F F0                 2320 	movx	@dptr,a
   B340 90 67 00           2321 	mov	dptr,#_norm_eom_ph_os_l
   B343 F0                 2322 	movx	@dptr,a
   B344 90 67 01           2323 	mov	dptr,#_norm_eom_ph_os_c
   B347 F0                 2324 	movx	@dptr,a
   B348 90 67 02           2325 	mov	dptr,#_norm_eom_ph_os_r
   B34B F0                 2326 	movx	@dptr,a
                           2327 ;	../../shared/src/phase_adaptation.c:161: PH_CONV_CNT = 0;
   B34C 90 66 FA           2328 	mov	dptr,#_PH_CONV_CNT
                           2329 ;	../../shared/src/phase_adaptation.c:162: EOM_CONV_CNT = 0;
                           2330 ;	../../shared/src/phase_adaptation.c:163: ph_conv_dir= 0;
                           2331 ;	../../shared/src/phase_adaptation.c:164: eom_conv_dir = 0;
   B34F E4                 2332 	clr	a
   B350 F0                 2333 	movx	@dptr,a
   B351 90 66 FB           2334 	mov	dptr,#_EOM_CONV_CNT
   B354 F0                 2335 	movx	@dptr,a
   B355 90 66 FC           2336 	mov	dptr,#_ph_conv_dir
   B358 F0                 2337 	movx	@dptr,a
   B359 90 66 FD           2338 	mov	dptr,#_eom_conv_dir
   B35C F0                 2339 	movx	@dptr,a
                           2340 ;	../../shared/src/phase_adaptation.c:168: adapt_eom_phase_save = train.phase_offset_esm;
   B35D 90 66 62           2341 	mov	dptr,#(_train + 0x0022)
   B360 E0                 2342 	movx	a,@dptr
   B361 FA                 2343 	mov	r2,a
   B362 90 67 0D           2344 	mov	dptr,#_adapt_eom_phase_save
   B365 F0                 2345 	movx	@dptr,a
                           2346 ;	../../shared/src/phase_adaptation.c:175: lnx_F1_ALIGN_SKIP_LANE = 0;
   B366 90 60 4C           2347 	mov	dptr,#_DFE_CONTROL_5
   B369 E0                 2348 	movx	a,@dptr
   B36A 54 7F              2349 	anl	a,#0x7f
   B36C F0                 2350 	movx	@dptr,a
                           2351 ;	../../shared/src/phase_adaptation.c:176: lnx_PHASE_ADAPT_UI_ALIGN_SKIP_LANE = 0;
   B36D 90 60 4E           2352 	mov	dptr,#(_DFE_CONTROL_5 + 0x0002)
   B370 E0                 2353 	movx	a,@dptr
   B371 54 F7              2354 	anl	a,#0xf7
   B373 F0                 2355 	movx	@dptr,a
                           2356 ;	../../shared/src/phase_adaptation.c:178: detect_sat = 0;
   B374 90 67 17           2357 	mov	dptr,#_detect_sat
   B377 E4                 2358 	clr	a
   B378 F0                 2359 	movx	@dptr,a
                           2360 ;	../../shared/src/phase_adaptation.c:179: Phase_Adapt_Inited = 1;		
   B379 90 67 16           2361 	mov	dptr,#_Phase_Adapt_Inited
   B37C 74 01              2362 	mov	a,#0x01
   B37E F0                 2363 	movx	@dptr,a
   B37F 02 00 C5           2364 	ljmp	__sdcc_banked_ret
                           2365 ;------------------------------------------------------------
                           2366 ;Allocation info for local variables in function 'EOM_Clock_Alignment'
                           2367 ;------------------------------------------------------------
                           2368 ;------------------------------------------------------------
                           2369 ;	../../shared/src/phase_adaptation.c:183: void EOM_Clock_Alignment(void) BANKING_CTRL {
                           2370 ;	-----------------------------------------
                           2371 ;	 function EOM_Clock_Alignment
                           2372 ;	-----------------------------------------
   B382                    2373 _EOM_Clock_Alignment:
                           2374 ;	../../shared/src/phase_adaptation.c:187: rpta_loop_cnt = 0;
   B382 90 67 66           2375 	mov	dptr,#_rpta_loop_cnt
   B385 E4                 2376 	clr	a
   B386 F0                 2377 	movx	@dptr,a
   B387 A3                 2378 	inc	dptr
   B388 F0                 2379 	movx	@dptr,a
                           2380 ;	../../shared/src/phase_adaptation.c:188: rpta_vote = 0;
   B389 90 67 6A           2381 	mov	dptr,#_rpta_vote
   B38C E4                 2382 	clr	a
   B38D F0                 2383 	movx	@dptr,a
                           2384 ;	../../shared/src/phase_adaptation.c:194: do {	
   B38E                    2385 00128$:
                           2386 ;	../../shared/src/phase_adaptation.c:196: adapt_data_en = 0;
   B38E C2 0D              2387 	clr	_adapt_data_en
                           2388 ;	../../shared/src/phase_adaptation.c:197: adapt_slicer_en = 1;
   B390 D2 0C              2389 	setb	_adapt_slicer_en
                           2390 ;	../../shared/src/phase_adaptation.c:198: ph_control_mode = 1;
   B392 90 66 F8           2391 	mov	dptr,#_ph_control_mode
   B395 74 01              2392 	mov	a,#0x01
   B397 F0                 2393 	movx	@dptr,a
                           2394 ;	../../shared/src/phase_adaptation.c:199: set_ph_mode();
   B398 78 3B              2395 	mov	r0,#_set_ph_mode
   B39A 79 97              2396 	mov	r1,#(_set_ph_mode >> 8)
   B39C 7A 02              2397 	mov	r2,#(_set_ph_mode >> 16)
   B39E 12 00 B3           2398 	lcall	__sdcc_banked_call
                           2399 ;	../../shared/src/phase_adaptation.c:200: phase_control_func();
   B3A1 12 2D F3           2400 	lcall	_phase_control_func
                           2401 ;	../../shared/src/phase_adaptation.c:201: lnx_EOM_PHASE_UI_ALIGN_FAILED_LANE =	_EXIT_SUCCESS; 
   B3A4 90 60 4E           2402 	mov	dptr,#(_DFE_CONTROL_5 + 0x0002)
   B3A7 E0                 2403 	movx	a,@dptr
   B3A8 54 DF              2404 	anl	a,#0xdf
   B3AA F0                 2405 	movx	@dptr,a
                           2406 ;	../../shared/src/phase_adaptation.c:203: if(lnx_PHASE_ADAPT_UI_ALIGN_SKIP_LANE==0) 
   B3AB 90 60 4E           2407 	mov	dptr,#(_DFE_CONTROL_5 + 0x0002)
   B3AE E0                 2408 	movx	a,@dptr
   B3AF 20 E3 09           2409 	jb	acc.3,00102$
                           2410 ;	../../shared/src/phase_adaptation.c:204: EOM_clock_analog_align();		
   B3B2 78 46              2411 	mov	r0,#_EOM_clock_analog_align
   B3B4 79 B9              2412 	mov	r1,#(_EOM_clock_analog_align >> 8)
   B3B6 7A 01              2413 	mov	r2,#(_EOM_clock_analog_align >> 16)
   B3B8 12 00 B3           2414 	lcall	__sdcc_banked_call
   B3BB                    2415 00102$:
                           2416 ;	../../shared/src/phase_adaptation.c:205: if( lnx_EOM_PHASE_UI_ALIGN_FAILED_LANE == _EXIT_SUCCESS ) {
   B3BB 90 60 4E           2417 	mov	dptr,#(_DFE_CONTROL_5 + 0x0002)
   B3BE E0                 2418 	movx	a,@dptr
   B3BF 30 E5 03           2419 	jnb	acc.5,00147$
   B3C2 02 B4 E2           2420 	ljmp	00119$
   B3C5                    2421 00147$:
                           2422 ;	../../shared/src/phase_adaptation.c:206: EOM_clock_DFE_Adapt();
   B3C5 78 C7              2423 	mov	r0,#_EOM_clock_DFE_Adapt
   B3C7 79 B8              2424 	mov	r1,#(_EOM_clock_DFE_Adapt >> 8)
   B3C9 7A 01              2425 	mov	r2,#(_EOM_clock_DFE_Adapt >> 16)
   B3CB 12 00 B3           2426 	lcall	__sdcc_banked_call
                           2427 ;	../../shared/src/phase_adaptation.c:213: if( norm_ofst > train_ofst_save )
   B3CE 90 66 FF           2428 	mov	dptr,#_norm_ofst
   B3D1 E0                 2429 	movx	a,@dptr
   B3D2 FA                 2430 	mov	r2,a
   B3D3 90 67 9B           2431 	mov	dptr,#_train_ofst_save
   B3D6 E0                 2432 	movx	a,@dptr
   B3D7 FB                 2433 	mov	r3,a
   B3D8 C3                 2434 	clr	c
   B3D9 64 80              2435 	xrl	a,#0x80
   B3DB 8A F0              2436 	mov	b,r2
   B3DD 63 F0 80           2437 	xrl	b,#0x80
   B3E0 95 F0              2438 	subb	a,b
   B3E2 50 15              2439 	jnc	00106$
                           2440 ;	../../shared/src/phase_adaptation.c:214: eom_vote_acc += 1;
   B3E4 90 67 05           2441 	mov	dptr,#_eom_vote_acc
   B3E7 E0                 2442 	movx	a,@dptr
   B3E8 FC                 2443 	mov	r4,a
   B3E9 A3                 2444 	inc	dptr
   B3EA E0                 2445 	movx	a,@dptr
   B3EB FD                 2446 	mov	r5,a
   B3EC 90 67 05           2447 	mov	dptr,#_eom_vote_acc
   B3EF 74 01              2448 	mov	a,#0x01
   B3F1 2C                 2449 	add	a,r4
   B3F2 F0                 2450 	movx	@dptr,a
   B3F3 E4                 2451 	clr	a
   B3F4 3D                 2452 	addc	a,r5
   B3F5 A3                 2453 	inc	dptr
   B3F6 F0                 2454 	movx	@dptr,a
   B3F7 80 22              2455 	sjmp	00107$
   B3F9                    2456 00106$:
                           2457 ;	../../shared/src/phase_adaptation.c:215: else if ( norm_ofst < train_ofst_save )
   B3F9 C3                 2458 	clr	c
   B3FA EA                 2459 	mov	a,r2
   B3FB 64 80              2460 	xrl	a,#0x80
   B3FD 8B F0              2461 	mov	b,r3
   B3FF 63 F0 80           2462 	xrl	b,#0x80
   B402 95 F0              2463 	subb	a,b
   B404 50 15              2464 	jnc	00107$
                           2465 ;	../../shared/src/phase_adaptation.c:216: eom_vote_acc -= 1;
   B406 90 67 05           2466 	mov	dptr,#_eom_vote_acc
   B409 E0                 2467 	movx	a,@dptr
   B40A FA                 2468 	mov	r2,a
   B40B A3                 2469 	inc	dptr
   B40C E0                 2470 	movx	a,@dptr
   B40D FB                 2471 	mov	r3,a
   B40E 1A                 2472 	dec	r2
   B40F BA FF 01           2473 	cjne	r2,#0xff,00150$
   B412 1B                 2474 	dec	r3
   B413                    2475 00150$:
   B413 90 67 05           2476 	mov	dptr,#_eom_vote_acc
   B416 EA                 2477 	mov	a,r2
   B417 F0                 2478 	movx	@dptr,a
   B418 A3                 2479 	inc	dptr
   B419 EB                 2480 	mov	a,r3
   B41A F0                 2481 	movx	@dptr,a
   B41B                    2482 00107$:
                           2483 ;	../../shared/src/phase_adaptation.c:217: if(abs(norm_ofst-train_ofst_save)<=1)  eom_data_align_success=1;
   B41B 90 67 9B           2484 	mov	dptr,#_train_ofst_save
   B41E E0                 2485 	movx	a,@dptr
   B41F FA                 2486 	mov	r2,a
   B420 90 66 FF           2487 	mov	dptr,#_norm_ofst
   B423 E0                 2488 	movx	a,@dptr
   B424 C3                 2489 	clr	c
   B425 9A                 2490 	subb	a,r2
   B426 F5 82              2491 	mov	dpl,a
   B428 78 41              2492 	mov	r0,#_abs
   B42A 79 C1              2493 	mov	r1,#(_abs >> 8)
   B42C 7A 02              2494 	mov	r2,#(_abs >> 16)
   B42E 12 00 B3           2495 	lcall	__sdcc_banked_call
   B431 AA 82              2496 	mov	r2,dpl
   B433 C3                 2497 	clr	c
   B434 74 81              2498 	mov	a,#(0x01 ^ 0x80)
   B436 8A F0              2499 	mov	b,r2
   B438 63 F0 80           2500 	xrl	b,#0x80
   B43B 95 F0              2501 	subb	a,b
   B43D 40 08              2502 	jc	00109$
   B43F 90 67 95           2503 	mov	dptr,#_eom_data_align_success
   B442 74 01              2504 	mov	a,#0x01
   B444 F0                 2505 	movx	@dptr,a
   B445 80 05              2506 	sjmp	00110$
   B447                    2507 00109$:
                           2508 ;	../../shared/src/phase_adaptation.c:218: else eom_data_align_success=0;
   B447 90 67 95           2509 	mov	dptr,#_eom_data_align_success
   B44A E4                 2510 	clr	a
   B44B F0                 2511 	movx	@dptr,a
   B44C                    2512 00110$:
                           2513 ;	../../shared/src/phase_adaptation.c:229: if(eom_vote_acc>0)
   B44C 90 67 05           2514 	mov	dptr,#_eom_vote_acc
   B44F E0                 2515 	movx	a,@dptr
   B450 FA                 2516 	mov	r2,a
   B451 A3                 2517 	inc	dptr
   B452 E0                 2518 	movx	a,@dptr
   B453 FB                 2519 	mov	r3,a
   B454 C3                 2520 	clr	c
   B455 E4                 2521 	clr	a
   B456 9A                 2522 	subb	a,r2
   B457 74 80              2523 	mov	a,#(0x00 ^ 0x80)
   B459 8B F0              2524 	mov	b,r3
   B45B 63 F0 80           2525 	xrl	b,#0x80
   B45E 95 F0              2526 	subb	a,b
   B460 50 25              2527 	jnc	00114$
                           2528 ;	../../shared/src/phase_adaptation.c:230: rpta_vote = eom_vote_acc>>EOM_ADAPT_STEP_SIZE;
   B462 90 60 5E           2529 	mov	dptr,#(_RPTA_CONFIG_0 + 0x0002)
   B465 E0                 2530 	movx	a,@dptr
   B466 FC                 2531 	mov	r4,a
   B467 8C F0              2532 	mov	b,r4
   B469 05 F0              2533 	inc	b
   B46B AC 02              2534 	mov	r4,ar2
   B46D AD 03              2535 	mov	r5,ar3
   B46F EB                 2536 	mov	a,r3
   B470 33                 2537 	rlc	a
   B471 92 D2              2538 	mov	ov,c
   B473 80 08              2539 	sjmp	00154$
   B475                    2540 00153$:
   B475 A2 D2              2541 	mov	c,ov
   B477 ED                 2542 	mov	a,r5
   B478 13                 2543 	rrc	a
   B479 FD                 2544 	mov	r5,a
   B47A EC                 2545 	mov	a,r4
   B47B 13                 2546 	rrc	a
   B47C FC                 2547 	mov	r4,a
   B47D                    2548 00154$:
   B47D D5 F0 F5           2549 	djnz	b,00153$
   B480 90 67 6A           2550 	mov	dptr,#_rpta_vote
   B483 EC                 2551 	mov	a,r4
   B484 F0                 2552 	movx	@dptr,a
   B485 80 2B              2553 	sjmp	00115$
   B487                    2554 00114$:
                           2555 ;	../../shared/src/phase_adaptation.c:231: else if(eom_vote_acc<0)
   B487 EB                 2556 	mov	a,r3
   B488 30 E7 27           2557 	jnb	acc.7,00115$
                           2558 ;	../../shared/src/phase_adaptation.c:232: rpta_vote = -( (~eom_vote_acc)>>EOM_ADAPT_STEP_SIZE);
   B48B EA                 2559 	mov	a,r2
   B48C F4                 2560 	cpl	a
   B48D FA                 2561 	mov	r2,a
   B48E EB                 2562 	mov	a,r3
   B48F F4                 2563 	cpl	a
   B490 FB                 2564 	mov	r3,a
   B491 90 60 5E           2565 	mov	dptr,#(_RPTA_CONFIG_0 + 0x0002)
   B494 E0                 2566 	movx	a,@dptr
   B495 FC                 2567 	mov	r4,a
   B496 8C F0              2568 	mov	b,r4
   B498 05 F0              2569 	inc	b
   B49A EB                 2570 	mov	a,r3
   B49B 33                 2571 	rlc	a
   B49C 92 D2              2572 	mov	ov,c
   B49E 80 08              2573 	sjmp	00157$
   B4A0                    2574 00156$:
   B4A0 A2 D2              2575 	mov	c,ov
   B4A2 EB                 2576 	mov	a,r3
   B4A3 13                 2577 	rrc	a
   B4A4 FB                 2578 	mov	r3,a
   B4A5 EA                 2579 	mov	a,r2
   B4A6 13                 2580 	rrc	a
   B4A7 FA                 2581 	mov	r2,a
   B4A8                    2582 00157$:
   B4A8 D5 F0 F5           2583 	djnz	b,00156$
   B4AB 90 67 6A           2584 	mov	dptr,#_rpta_vote
   B4AE C3                 2585 	clr	c
   B4AF E4                 2586 	clr	a
   B4B0 9A                 2587 	subb	a,r2
   B4B1 F0                 2588 	movx	@dptr,a
   B4B2                    2589 00115$:
                           2590 ;	../../shared/src/phase_adaptation.c:238: if(rpta_vote!=0) {
   B4B2 90 67 6A           2591 	mov	dptr,#_rpta_vote
   B4B5 E0                 2592 	movx	a,@dptr
   B4B6 FA                 2593 	mov	r2,a
   B4B7 60 29              2594 	jz	00119$
                           2595 ;	../../shared/src/phase_adaptation.c:250: train.phase_offset_esm += rpta_vote;
   B4B9 90 66 62           2596 	mov	dptr,#(_train + 0x0022)
   B4BC E0                 2597 	movx	a,@dptr
   B4BD FB                 2598 	mov	r3,a
   B4BE EA                 2599 	mov	a,r2
   B4BF 2B                 2600 	add	a,r3
   B4C0 90 66 62           2601 	mov	dptr,#(_train + 0x0022)
   B4C3 F0                 2602 	movx	@dptr,a
                           2603 ;	../../shared/src/phase_adaptation.c:259: ph_control_mode = 1;
   B4C4 90 66 F8           2604 	mov	dptr,#_ph_control_mode
   B4C7 74 01              2605 	mov	a,#0x01
   B4C9 F0                 2606 	movx	@dptr,a
                           2607 ;	../../shared/src/phase_adaptation.c:260: set_ph_mode();
   B4CA 78 3B              2608 	mov	r0,#_set_ph_mode
   B4CC 79 97              2609 	mov	r1,#(_set_ph_mode >> 8)
   B4CE 7A 02              2610 	mov	r2,#(_set_ph_mode >> 16)
   B4D0 12 00 B3           2611 	lcall	__sdcc_banked_call
                           2612 ;	../../shared/src/phase_adaptation.c:261: phase_control_func();
   B4D3 12 2D F3           2613 	lcall	_phase_control_func
                           2614 ;	../../shared/src/phase_adaptation.c:262: eom_vote_acc = 0;
   B4D6 90 67 05           2615 	mov	dptr,#_eom_vote_acc
   B4D9 E4                 2616 	clr	a
   B4DA F0                 2617 	movx	@dptr,a
   B4DB A3                 2618 	inc	dptr
   B4DC F0                 2619 	movx	@dptr,a
                           2620 ;	../../shared/src/phase_adaptation.c:263: rpta_vote = 0;
   B4DD 90 67 6A           2621 	mov	dptr,#_rpta_vote
   B4E0 E4                 2622 	clr	a
   B4E1 F0                 2623 	movx	@dptr,a
   B4E2                    2624 00119$:
                           2625 ;	../../shared/src/phase_adaptation.c:277: if( (abs(train.f1) > tag_DFE_F1_SAT_THRES) || (train.f0a >= tag_DFE_F0_SAT_THRES) || ofst_sat ) {
   B4E2 90 66 46           2626 	mov	dptr,#(_train + 0x0006)
   B4E5 E0                 2627 	movx	a,@dptr
   B4E6 F5 82              2628 	mov	dpl,a
   B4E8 78 41              2629 	mov	r0,#_abs
   B4EA 79 C1              2630 	mov	r1,#(_abs >> 8)
   B4EC 7A 02              2631 	mov	r2,#(_abs >> 16)
   B4EE 12 00 B3           2632 	lcall	__sdcc_banked_call
   B4F1 AA 82              2633 	mov	r2,dpl
   B4F3 90 60 66           2634 	mov	dptr,#(_DLL_CAL + 0x0002)
   B4F6 E0                 2635 	movx	a,@dptr
   B4F7 FB                 2636 	mov	r3,a
   B4F8 B5 02 00           2637 	cjne	a,ar2,00159$
   B4FB                    2638 00159$:
   B4FB 40 17              2639 	jc	00122$
   B4FD 90 66 59           2640 	mov	dptr,#(_train + 0x0019)
   B500 E0                 2641 	movx	a,@dptr
   B501 FA                 2642 	mov	r2,a
   B502 90 60 67           2643 	mov	dptr,#(_DLL_CAL + 0x0003)
   B505 E0                 2644 	movx	a,@dptr
   B506 FB                 2645 	mov	r3,a
   B507 EA                 2646 	mov	a,r2
   B508 B5 03 00           2647 	cjne	a,ar3,00161$
   B50B                    2648 00161$:
   B50B 50 07              2649 	jnc	00122$
   B50D 90 67 96           2650 	mov	dptr,#_ofst_sat
   B510 E0                 2651 	movx	a,@dptr
   B511 FA                 2652 	mov	r2,a
   B512 60 10              2653 	jz	00123$
   B514                    2654 00122$:
                           2655 ;	../../shared/src/phase_adaptation.c:279: if(lnx_PHASE_ADAPT_SAT_DETECT_LANE==0) {
   B514 90 60 3A           2656 	mov	dptr,#(_DFE_CONTROL_1 + 0x0002)
   B517 E0                 2657 	movx	a,@dptr
   B518 20 E4 10           2658 	jb	acc.4,00129$
                           2659 ;	../../shared/src/phase_adaptation.c:280: lnx_PHASE_ADAPT_SAT_DETECT_LANE = 1;
   B51B 90 60 3A           2660 	mov	dptr,#(_DFE_CONTROL_1 + 0x0002)
   B51E E0                 2661 	movx	a,@dptr
   B51F 44 10              2662 	orl	a,#0x10
   B521 F0                 2663 	movx	@dptr,a
                           2664 ;	../../shared/src/phase_adaptation.c:284: break;	
   B522 80 33              2665 	sjmp	00131$
   B524                    2666 00123$:
                           2667 ;	../../shared/src/phase_adaptation.c:287: else lnx_PHASE_ADAPT_SAT_DETECT_LANE = 0;
   B524 90 60 3A           2668 	mov	dptr,#(_DFE_CONTROL_1 + 0x0002)
   B527 E0                 2669 	movx	a,@dptr
   B528 54 EF              2670 	anl	a,#0xef
   B52A F0                 2671 	movx	@dptr,a
   B52B                    2672 00129$:
                           2673 ;	../../shared/src/phase_adaptation.c:295: } while((rpta_loop_cnt++ < EOM_CONV_NUM) && lnx_PHASE_ADAPT_ENABLE_LANE);		
   B52B 90 67 66           2674 	mov	dptr,#_rpta_loop_cnt
   B52E E0                 2675 	movx	a,@dptr
   B52F FA                 2676 	mov	r2,a
   B530 A3                 2677 	inc	dptr
   B531 E0                 2678 	movx	a,@dptr
   B532 FB                 2679 	mov	r3,a
   B533 90 67 66           2680 	mov	dptr,#_rpta_loop_cnt
   B536 74 01              2681 	mov	a,#0x01
   B538 2A                 2682 	add	a,r2
   B539 F0                 2683 	movx	@dptr,a
   B53A E4                 2684 	clr	a
   B53B 3B                 2685 	addc	a,r3
   B53C A3                 2686 	inc	dptr
   B53D F0                 2687 	movx	@dptr,a
   B53E 90 60 5C           2688 	mov	dptr,#_RPTA_CONFIG_0
   B541 E0                 2689 	movx	a,@dptr
   B542 FC                 2690 	mov	r4,a
   B543 A3                 2691 	inc	dptr
   B544 E0                 2692 	movx	a,@dptr
   B545 FD                 2693 	mov	r5,a
   B546 C3                 2694 	clr	c
   B547 EA                 2695 	mov	a,r2
   B548 9C                 2696 	subb	a,r4
   B549 EB                 2697 	mov	a,r3
   B54A 9D                 2698 	subb	a,r5
   B54B 50 0A              2699 	jnc	00131$
   B54D 90 60 4C           2700 	mov	dptr,#_DFE_CONTROL_5
   B550 E0                 2701 	movx	a,@dptr
   B551 30 E5 03           2702 	jnb	acc.5,00166$
   B554 02 B3 8E           2703 	ljmp	00128$
   B557                    2704 00166$:
   B557                    2705 00131$:
   B557 02 00 C5           2706 	ljmp	__sdcc_banked_ret
                           2707 ;------------------------------------------------------------
                           2708 ;Allocation info for local variables in function 'Data_EOM_Align90_Adapt_EyeWidthMode'
                           2709 ;------------------------------------------------------------
                           2710 ;------------------------------------------------------------
                           2711 ;	../../shared/src/phase_adaptation.c:454: void Data_EOM_Align90_Adapt_EyeWidthMode(void) BANKING_CTRL {
                           2712 ;	-----------------------------------------
                           2713 ;	 function Data_EOM_Align90_Adapt_EyeWidthMode
                           2714 ;	-----------------------------------------
   B55A                    2715 _Data_EOM_Align90_Adapt_EyeWidthMode:
                           2716 ;	../../shared/src/phase_adaptation.c:455: rpta_loop_cnt = 0;
   B55A 90 67 66           2717 	mov	dptr,#_rpta_loop_cnt
   B55D E4                 2718 	clr	a
   B55E F0                 2719 	movx	@dptr,a
   B55F A3                 2720 	inc	dptr
   B560 F0                 2721 	movx	@dptr,a
                           2722 ;	../../shared/src/phase_adaptation.c:456: rpta_vote = 0;
   B561 90 67 6A           2723 	mov	dptr,#_rpta_vote
   B564 E4                 2724 	clr	a
   B565 F0                 2725 	movx	@dptr,a
                           2726 ;	../../shared/src/phase_adaptation.c:462: do 	{	
   B566                    2727 00138$:
                           2728 ;	../../shared/src/phase_adaptation.c:464: adapt_data_en = 0;
   B566 C2 0D              2729 	clr	_adapt_data_en
                           2730 ;	../../shared/src/phase_adaptation.c:465: adapt_slicer_en = 1;
   B568 D2 0C              2731 	setb	_adapt_slicer_en
                           2732 ;	../../shared/src/phase_adaptation.c:466: ph_control_mode = 1;
   B56A 90 66 F8           2733 	mov	dptr,#_ph_control_mode
   B56D 74 01              2734 	mov	a,#0x01
   B56F F0                 2735 	movx	@dptr,a
                           2736 ;	../../shared/src/phase_adaptation.c:467: phase_control_func();
   B570 12 2D F3           2737 	lcall	_phase_control_func
                           2738 ;	../../shared/src/phase_adaptation.c:468: lnx_EOM_PHASE_UI_ALIGN_FAILED_LANE = _EXIT_SUCCESS; 
   B573 90 60 4E           2739 	mov	dptr,#(_DFE_CONTROL_5 + 0x0002)
   B576 E0                 2740 	movx	a,@dptr
   B577 54 DF              2741 	anl	a,#0xdf
   B579 F0                 2742 	movx	@dptr,a
                           2743 ;	../../shared/src/phase_adaptation.c:470: if(lnx_PHASE_ADAPT_UI_ALIGN_SKIP_LANE==0) 
   B57A 90 60 4E           2744 	mov	dptr,#(_DFE_CONTROL_5 + 0x0002)
   B57D E0                 2745 	movx	a,@dptr
   B57E 20 E3 09           2746 	jb	acc.3,00102$
                           2747 ;	../../shared/src/phase_adaptation.c:471: EOM_clock_analog_align();		
   B581 78 46              2748 	mov	r0,#_EOM_clock_analog_align
   B583 79 B9              2749 	mov	r1,#(_EOM_clock_analog_align >> 8)
   B585 7A 01              2750 	mov	r2,#(_EOM_clock_analog_align >> 16)
   B587 12 00 B3           2751 	lcall	__sdcc_banked_call
   B58A                    2752 00102$:
                           2753 ;	../../shared/src/phase_adaptation.c:473: if( lnx_EOM_PHASE_UI_ALIGN_FAILED_LANE == _EXIT_SUCCESS ) 		
   B58A 90 60 4E           2754 	mov	dptr,#(_DFE_CONTROL_5 + 0x0002)
   B58D E0                 2755 	movx	a,@dptr
   B58E 30 E5 03           2756 	jnb	acc.5,00162$
   B591 02 B7 E6           2757 	ljmp	00129$
   B594                    2758 00162$:
                           2759 ;	../../shared/src/phase_adaptation.c:476: norm_eom_ph_os_c = train.phase_offset_esm;
   B594 90 66 62           2760 	mov	dptr,#(_train + 0x0022)
   B597 E0                 2761 	movx	a,@dptr
   B598 FA                 2762 	mov	r2,a
   B599 90 67 01           2763 	mov	dptr,#_norm_eom_ph_os_c
   B59C F0                 2764 	movx	@dptr,a
                           2765 ;	../../shared/src/phase_adaptation.c:477: norm_eom_ph_os_l = train.phase_offset_esm + phase_l_offset;
   B59D 90 67 0A           2766 	mov	dptr,#_phase_l_offset
   B5A0 E0                 2767 	movx	a,@dptr
   B5A1 90 67 00           2768 	mov	dptr,#_norm_eom_ph_os_l
   B5A4 2A                 2769 	add	a,r2
   B5A5 F0                 2770 	movx	@dptr,a
                           2771 ;	../../shared/src/phase_adaptation.c:478: norm_eom_ph_os_r = train.phase_offset_esm + phase_r_offset;
   B5A6 90 67 0B           2772 	mov	dptr,#_phase_r_offset
   B5A9 E0                 2773 	movx	a,@dptr
   B5AA 90 67 02           2774 	mov	dptr,#_norm_eom_ph_os_r
   B5AD 2A                 2775 	add	a,r2
   B5AE F0                 2776 	movx	@dptr,a
                           2777 ;	../../shared/src/phase_adaptation.c:480: F0d_measurement();
   B5AF 78 04              2778 	mov	r0,#_F0d_measurement
   B5B1 79 B9              2779 	mov	r1,#(_F0d_measurement >> 8)
   B5B3 7A 01              2780 	mov	r2,#(_F0d_measurement >> 16)
   B5B5 12 00 B3           2781 	lcall	__sdcc_banked_call
                           2782 ;	../../shared/src/phase_adaptation.c:492: if( train.f0d_slicer_left > MAX_F0D ) //2
   B5B8 90 66 52           2783 	mov	dptr,#(_train + 0x0012)
   B5BB E0                 2784 	movx	a,@dptr
   B5BC FA                 2785 	mov	r2,a
   B5BD 90 60 77           2786 	mov	dptr,#(_TRAIN_PARA_3 + 0x0003)
   B5C0 E0                 2787 	movx	a,@dptr
   B5C1 FB                 2788 	mov	r3,a
   B5C2 7C 00              2789 	mov	r4,#0x00
   B5C4 74 02              2790 	mov	a,#0x02
   B5C6 2B                 2791 	add	a,r3
   B5C7 FB                 2792 	mov	r3,a
   B5C8 E4                 2793 	clr	a
   B5C9 3C                 2794 	addc	a,r4
   B5CA FC                 2795 	mov	r4,a
   B5CB 7D 00              2796 	mov	r5,#0x00
   B5CD C3                 2797 	clr	c
   B5CE EB                 2798 	mov	a,r3
   B5CF 9A                 2799 	subb	a,r2
   B5D0 EC                 2800 	mov	a,r4
   B5D1 64 80              2801 	xrl	a,#0x80
   B5D3 8D F0              2802 	mov	b,r5
   B5D5 63 F0 80           2803 	xrl	b,#0x80
   B5D8 95 F0              2804 	subb	a,b
   B5DA 50 0C              2805 	jnc	00106$
                           2806 ;	../../shared/src/phase_adaptation.c:493: phase_l_offset -= STEP_SIZE; //1
   B5DC 90 67 0A           2807 	mov	dptr,#_phase_l_offset
   B5DF E0                 2808 	movx	a,@dptr
   B5E0 FB                 2809 	mov	r3,a
   B5E1 14                 2810 	dec	a
   B5E2 90 67 0A           2811 	mov	dptr,#_phase_l_offset
   B5E5 F0                 2812 	movx	@dptr,a
   B5E6 80 25              2813 	sjmp	00107$
   B5E8                    2814 00106$:
                           2815 ;	../../shared/src/phase_adaptation.c:494: else if(train.f0d_slicer_left < MIN_F0D ) //1
   B5E8 90 60 77           2816 	mov	dptr,#(_TRAIN_PARA_3 + 0x0003)
   B5EB E0                 2817 	movx	a,@dptr
   B5EC FB                 2818 	mov	r3,a
   B5ED 7C 00              2819 	mov	r4,#0x00
   B5EF 0B                 2820 	inc	r3
   B5F0 BB 00 01           2821 	cjne	r3,#0x00,00164$
   B5F3 0C                 2822 	inc	r4
   B5F4                    2823 00164$:
   B5F4 C3                 2824 	clr	c
   B5F5 EA                 2825 	mov	a,r2
   B5F6 9B                 2826 	subb	a,r3
   B5F7 ED                 2827 	mov	a,r5
   B5F8 64 80              2828 	xrl	a,#0x80
   B5FA 8C F0              2829 	mov	b,r4
   B5FC 63 F0 80           2830 	xrl	b,#0x80
   B5FF 95 F0              2831 	subb	a,b
   B601 50 0A              2832 	jnc	00107$
                           2833 ;	../../shared/src/phase_adaptation.c:495: phase_l_offset += STEP_SIZE;
   B603 90 67 0A           2834 	mov	dptr,#_phase_l_offset
   B606 E0                 2835 	movx	a,@dptr
   B607 FA                 2836 	mov	r2,a
   B608 90 67 0A           2837 	mov	dptr,#_phase_l_offset
   B60B 04                 2838 	inc	a
   B60C F0                 2839 	movx	@dptr,a
   B60D                    2840 00107$:
                           2841 ;	../../shared/src/phase_adaptation.c:496: phase_l_offset = clamp( phase_l_offset, +half_ui_code, -half_ui_code);	
   B60D 90 67 94           2842 	mov	dptr,#_half_ui_code
   B610 E0                 2843 	movx	a,@dptr
   B611 FA                 2844 	mov	r2,a
   B612 C3                 2845 	clr	c
   B613 E4                 2846 	clr	a
   B614 9A                 2847 	subb	a,r2
   B615 FB                 2848 	mov	r3,a
   B616 90 67 0A           2849 	mov	dptr,#_phase_l_offset
   B619 E0                 2850 	movx	a,@dptr
   B61A FC                 2851 	mov	r4,a
   B61B C0 03              2852 	push	ar3
   B61D C0 02              2853 	push	ar2
   B61F 8C 82              2854 	mov	dpl,r4
   B621 78 64              2855 	mov	r0,#_clamp
   B623 79 C0              2856 	mov	r1,#(_clamp >> 8)
   B625 7A 02              2857 	mov	r2,#(_clamp >> 16)
   B627 12 00 B3           2858 	lcall	__sdcc_banked_call
   B62A AA 82              2859 	mov	r2,dpl
   B62C 15 81              2860 	dec	sp
   B62E 15 81              2861 	dec	sp
   B630 90 67 0A           2862 	mov	dptr,#_phase_l_offset
   B633 EA                 2863 	mov	a,r2
   B634 F0                 2864 	movx	@dptr,a
                           2865 ;	../../shared/src/phase_adaptation.c:498: if( train.f0d_slicer_right > MAX_F0D )
   B635 90 66 54           2866 	mov	dptr,#(_train + 0x0014)
   B638 E0                 2867 	movx	a,@dptr
   B639 FA                 2868 	mov	r2,a
   B63A 90 60 77           2869 	mov	dptr,#(_TRAIN_PARA_3 + 0x0003)
   B63D E0                 2870 	movx	a,@dptr
   B63E FB                 2871 	mov	r3,a
   B63F 7C 00              2872 	mov	r4,#0x00
   B641 74 02              2873 	mov	a,#0x02
   B643 2B                 2874 	add	a,r3
   B644 FB                 2875 	mov	r3,a
   B645 E4                 2876 	clr	a
   B646 3C                 2877 	addc	a,r4
   B647 FC                 2878 	mov	r4,a
   B648 7D 00              2879 	mov	r5,#0x00
   B64A C3                 2880 	clr	c
   B64B EB                 2881 	mov	a,r3
   B64C 9A                 2882 	subb	a,r2
   B64D EC                 2883 	mov	a,r4
   B64E 64 80              2884 	xrl	a,#0x80
   B650 8D F0              2885 	mov	b,r5
   B652 63 F0 80           2886 	xrl	b,#0x80
   B655 95 F0              2887 	subb	a,b
   B657 50 0C              2888 	jnc	00111$
                           2889 ;	../../shared/src/phase_adaptation.c:499: phase_r_offset += STEP_SIZE;
   B659 90 67 0B           2890 	mov	dptr,#_phase_r_offset
   B65C E0                 2891 	movx	a,@dptr
   B65D FB                 2892 	mov	r3,a
   B65E 90 67 0B           2893 	mov	dptr,#_phase_r_offset
   B661 04                 2894 	inc	a
   B662 F0                 2895 	movx	@dptr,a
   B663 80 25              2896 	sjmp	00112$
   B665                    2897 00111$:
                           2898 ;	../../shared/src/phase_adaptation.c:500: else if( train.f0d_slicer_right < MIN_F0D ) 
   B665 90 60 77           2899 	mov	dptr,#(_TRAIN_PARA_3 + 0x0003)
   B668 E0                 2900 	movx	a,@dptr
   B669 FB                 2901 	mov	r3,a
   B66A 7C 00              2902 	mov	r4,#0x00
   B66C 0B                 2903 	inc	r3
   B66D BB 00 01           2904 	cjne	r3,#0x00,00167$
   B670 0C                 2905 	inc	r4
   B671                    2906 00167$:
   B671 C3                 2907 	clr	c
   B672 EA                 2908 	mov	a,r2
   B673 9B                 2909 	subb	a,r3
   B674 ED                 2910 	mov	a,r5
   B675 64 80              2911 	xrl	a,#0x80
   B677 8C F0              2912 	mov	b,r4
   B679 63 F0 80           2913 	xrl	b,#0x80
   B67C 95 F0              2914 	subb	a,b
   B67E 50 0A              2915 	jnc	00112$
                           2916 ;	../../shared/src/phase_adaptation.c:501: phase_r_offset -= STEP_SIZE;	
   B680 90 67 0B           2917 	mov	dptr,#_phase_r_offset
   B683 E0                 2918 	movx	a,@dptr
   B684 FA                 2919 	mov	r2,a
   B685 14                 2920 	dec	a
   B686 90 67 0B           2921 	mov	dptr,#_phase_r_offset
   B689 F0                 2922 	movx	@dptr,a
   B68A                    2923 00112$:
                           2924 ;	../../shared/src/phase_adaptation.c:502: phase_r_offset = clamp( phase_r_offset, +half_ui_code, -half_ui_code);				
   B68A 90 67 94           2925 	mov	dptr,#_half_ui_code
   B68D E0                 2926 	movx	a,@dptr
   B68E FA                 2927 	mov	r2,a
   B68F C3                 2928 	clr	c
   B690 E4                 2929 	clr	a
   B691 9A                 2930 	subb	a,r2
   B692 FB                 2931 	mov	r3,a
   B693 90 67 0B           2932 	mov	dptr,#_phase_r_offset
   B696 E0                 2933 	movx	a,@dptr
   B697 FC                 2934 	mov	r4,a
   B698 C0 03              2935 	push	ar3
   B69A C0 02              2936 	push	ar2
   B69C 8C 82              2937 	mov	dpl,r4
   B69E 78 64              2938 	mov	r0,#_clamp
   B6A0 79 C0              2939 	mov	r1,#(_clamp >> 8)
   B6A2 7A 02              2940 	mov	r2,#(_clamp >> 16)
   B6A4 12 00 B3           2941 	lcall	__sdcc_banked_call
   B6A7 AA 82              2942 	mov	r2,dpl
   B6A9 15 81              2943 	dec	sp
   B6AB 15 81              2944 	dec	sp
   B6AD 90 67 0B           2945 	mov	dptr,#_phase_r_offset
   B6B0 EA                 2946 	mov	a,r2
   B6B1 F0                 2947 	movx	@dptr,a
                           2948 ;	../../shared/src/phase_adaptation.c:505: if((phase_l_offset+phase_r_offset) < -MAX_OFF) //1
   B6B2 90 67 0A           2949 	mov	dptr,#_phase_l_offset
   B6B5 E0                 2950 	movx	a,@dptr
   B6B6 FB                 2951 	mov	r3,a
   B6B7 33                 2952 	rlc	a
   B6B8 95 E0              2953 	subb	a,acc
   B6BA FC                 2954 	mov	r4,a
   B6BB EA                 2955 	mov	a,r2
   B6BC 33                 2956 	rlc	a
   B6BD 95 E0              2957 	subb	a,acc
   B6BF FD                 2958 	mov	r5,a
   B6C0 EA                 2959 	mov	a,r2
   B6C1 2B                 2960 	add	a,r3
   B6C2 FE                 2961 	mov	r6,a
   B6C3 ED                 2962 	mov	a,r5
   B6C4 3C                 2963 	addc	a,r4
   B6C5 FF                 2964 	mov	r7,a
   B6C6 C3                 2965 	clr	c
   B6C7 EE                 2966 	mov	a,r6
   B6C8 94 FF              2967 	subb	a,#0xFF
   B6CA EF                 2968 	mov	a,r7
   B6CB 64 80              2969 	xrl	a,#0x80
   B6CD 94 7F              2970 	subb	a,#0x7f
   B6CF 50 14              2971 	jnc	00114$
                           2972 ;	../../shared/src/phase_adaptation.c:506: phase_vote_acc--;
   B6D1 90 67 03           2973 	mov	dptr,#_phase_vote_acc
   B6D4 E0                 2974 	movx	a,@dptr
   B6D5 24 FF              2975 	add	a,#0xff
   B6D7 FE                 2976 	mov	r6,a
   B6D8 A3                 2977 	inc	dptr
   B6D9 E0                 2978 	movx	a,@dptr
   B6DA 34 FF              2979 	addc	a,#0xff
   B6DC FF                 2980 	mov	r7,a
   B6DD 90 67 03           2981 	mov	dptr,#_phase_vote_acc
   B6E0 EE                 2982 	mov	a,r6
   B6E1 F0                 2983 	movx	@dptr,a
   B6E2 A3                 2984 	inc	dptr
   B6E3 EF                 2985 	mov	a,r7
   B6E4 F0                 2986 	movx	@dptr,a
   B6E5                    2987 00114$:
                           2988 ;	../../shared/src/phase_adaptation.c:507: if((phase_l_offset+phase_r_offset) > MAX_OFF)
   B6E5 EA                 2989 	mov	a,r2
   B6E6 2B                 2990 	add	a,r3
   B6E7 FB                 2991 	mov	r3,a
   B6E8 ED                 2992 	mov	a,r5
   B6E9 3C                 2993 	addc	a,r4
   B6EA FC                 2994 	mov	r4,a
   B6EB C3                 2995 	clr	c
   B6EC 74 01              2996 	mov	a,#0x01
   B6EE 9B                 2997 	subb	a,r3
   B6EF 74 80              2998 	mov	a,#(0x00 ^ 0x80)
   B6F1 8C F0              2999 	mov	b,r4
   B6F3 63 F0 80           3000 	xrl	b,#0x80
   B6F6 95 F0              3001 	subb	a,b
   B6F8 50 0C              3002 	jnc	00116$
                           3003 ;	../../shared/src/phase_adaptation.c:508: phase_vote_acc++;
   B6FA 90 67 03           3004 	mov	dptr,#_phase_vote_acc
   B6FD E0                 3005 	movx	a,@dptr
   B6FE 24 01              3006 	add	a,#0x01
   B700 F0                 3007 	movx	@dptr,a
   B701 A3                 3008 	inc	dptr
   B702 E0                 3009 	movx	a,@dptr
   B703 34 00              3010 	addc	a,#0x00
   B705 F0                 3011 	movx	@dptr,a
   B706                    3012 00116$:
                           3013 ;	../../shared/src/phase_adaptation.c:510: if(phase_vote_acc > 0)
   B706 90 67 03           3014 	mov	dptr,#_phase_vote_acc
   B709 E0                 3015 	movx	a,@dptr
   B70A FA                 3016 	mov	r2,a
   B70B A3                 3017 	inc	dptr
   B70C E0                 3018 	movx	a,@dptr
   B70D FB                 3019 	mov	r3,a
   B70E C3                 3020 	clr	c
   B70F E4                 3021 	clr	a
   B710 9A                 3022 	subb	a,r2
   B711 74 80              3023 	mov	a,#(0x00 ^ 0x80)
   B713 8B F0              3024 	mov	b,r3
   B715 63 F0 80           3025 	xrl	b,#0x80
   B718 95 F0              3026 	subb	a,b
   B71A 50 25              3027 	jnc	00120$
                           3028 ;	../../shared/src/phase_adaptation.c:511: rpta_vote = phase_vote_acc>>PH_ADAPT_STEP_SIZE;
   B71C 90 60 62           3029 	mov	dptr,#(_RPTA_CONFIG_1 + 0x0002)
   B71F E0                 3030 	movx	a,@dptr
   B720 FC                 3031 	mov	r4,a
   B721 8C F0              3032 	mov	b,r4
   B723 05 F0              3033 	inc	b
   B725 AC 02              3034 	mov	r4,ar2
   B727 AD 03              3035 	mov	r5,ar3
   B729 EB                 3036 	mov	a,r3
   B72A 33                 3037 	rlc	a
   B72B 92 D2              3038 	mov	ov,c
   B72D 80 08              3039 	sjmp	00173$
   B72F                    3040 00172$:
   B72F A2 D2              3041 	mov	c,ov
   B731 ED                 3042 	mov	a,r5
   B732 13                 3043 	rrc	a
   B733 FD                 3044 	mov	r5,a
   B734 EC                 3045 	mov	a,r4
   B735 13                 3046 	rrc	a
   B736 FC                 3047 	mov	r4,a
   B737                    3048 00173$:
   B737 D5 F0 F5           3049 	djnz	b,00172$
   B73A 90 67 6A           3050 	mov	dptr,#_rpta_vote
   B73D EC                 3051 	mov	a,r4
   B73E F0                 3052 	movx	@dptr,a
   B73F 80 2B              3053 	sjmp	00121$
   B741                    3054 00120$:
                           3055 ;	../../shared/src/phase_adaptation.c:512: else if(phase_vote_acc < 0) 
   B741 EB                 3056 	mov	a,r3
   B742 30 E7 27           3057 	jnb	acc.7,00121$
                           3058 ;	../../shared/src/phase_adaptation.c:513: rpta_vote = -((~phase_vote_acc)>>PH_ADAPT_STEP_SIZE);
   B745 EA                 3059 	mov	a,r2
   B746 F4                 3060 	cpl	a
   B747 FA                 3061 	mov	r2,a
   B748 EB                 3062 	mov	a,r3
   B749 F4                 3063 	cpl	a
   B74A FB                 3064 	mov	r3,a
   B74B 90 60 62           3065 	mov	dptr,#(_RPTA_CONFIG_1 + 0x0002)
   B74E E0                 3066 	movx	a,@dptr
   B74F FC                 3067 	mov	r4,a
   B750 8C F0              3068 	mov	b,r4
   B752 05 F0              3069 	inc	b
   B754 EB                 3070 	mov	a,r3
   B755 33                 3071 	rlc	a
   B756 92 D2              3072 	mov	ov,c
   B758 80 08              3073 	sjmp	00176$
   B75A                    3074 00175$:
   B75A A2 D2              3075 	mov	c,ov
   B75C EB                 3076 	mov	a,r3
   B75D 13                 3077 	rrc	a
   B75E FB                 3078 	mov	r3,a
   B75F EA                 3079 	mov	a,r2
   B760 13                 3080 	rrc	a
   B761 FA                 3081 	mov	r2,a
   B762                    3082 00176$:
   B762 D5 F0 F5           3083 	djnz	b,00175$
   B765 90 67 6A           3084 	mov	dptr,#_rpta_vote
   B768 C3                 3085 	clr	c
   B769 E4                 3086 	clr	a
   B76A 9A                 3087 	subb	a,r2
   B76B F0                 3088 	movx	@dptr,a
   B76C                    3089 00121$:
                           3090 ;	../../shared/src/phase_adaptation.c:520: if(rpta_vote!=0) 
   B76C 90 67 6A           3091 	mov	dptr,#_rpta_vote
   B76F E0                 3092 	movx	a,@dptr
   B770 FA                 3093 	mov	r2,a
   B771 60 73              3094 	jz	00129$
                           3095 ;	../../shared/src/phase_adaptation.c:529: if( ((cal_phase - train.phase_offset_data + rpta_vote) == tag_CDR_PHASE_MAX) || 
   B773 90 60 46           3096 	mov	dptr,#(_DFE_CONTROL_3 + 0x0002)
   B776 E0                 3097 	movx	a,@dptr
   B777 FB                 3098 	mov	r3,a
   B778 7C 00              3099 	mov	r4,#0x00
   B77A 90 66 61           3100 	mov	dptr,#(_train + 0x0021)
   B77D E0                 3101 	movx	a,@dptr
   B77E FD                 3102 	mov	r5,a
   B77F FE                 3103 	mov	r6,a
   B780 33                 3104 	rlc	a
   B781 95 E0              3105 	subb	a,acc
   B783 FF                 3106 	mov	r7,a
   B784 EB                 3107 	mov	a,r3
   B785 C3                 3108 	clr	c
   B786 9E                 3109 	subb	a,r6
   B787 FB                 3110 	mov	r3,a
   B788 EC                 3111 	mov	a,r4
   B789 9F                 3112 	subb	a,r7
   B78A FC                 3113 	mov	r4,a
   B78B EA                 3114 	mov	a,r2
   B78C F8                 3115 	mov	r0,a
   B78D 33                 3116 	rlc	a
   B78E 95 E0              3117 	subb	a,acc
   B790 F9                 3118 	mov	r1,a
   B791 E8                 3119 	mov	a,r0
   B792 2B                 3120 	add	a,r3
   B793 FB                 3121 	mov	r3,a
   B794 E9                 3122 	mov	a,r1
   B795 3C                 3123 	addc	a,r4
   B796 FC                 3124 	mov	r4,a
   B797 BB 3A 05           3125 	cjne	r3,#0x3A,00178$
   B79A BC 00 02           3126 	cjne	r4,#0x00,00178$
   B79D 80 22              3127 	sjmp	00124$
   B79F                    3128 00178$:
                           3129 ;	../../shared/src/phase_adaptation.c:530: ((cal_phase - train.phase_offset_data + rpta_vote) == tag_CDR_PHASE_MIN) ) {
   B79F 90 60 46           3130 	mov	dptr,#(_DFE_CONTROL_3 + 0x0002)
   B7A2 E0                 3131 	movx	a,@dptr
   B7A3 FB                 3132 	mov	r3,a
   B7A4 7C 00              3133 	mov	r4,#0x00
   B7A6 C3                 3134 	clr	c
   B7A7 9E                 3135 	subb	a,r6
   B7A8 FE                 3136 	mov	r6,a
   B7A9 EC                 3137 	mov	a,r4
   B7AA 9F                 3138 	subb	a,r7
   B7AB FF                 3139 	mov	r7,a
   B7AC E8                 3140 	mov	a,r0
   B7AD 2E                 3141 	add	a,r6
   B7AE F8                 3142 	mov	r0,a
   B7AF E9                 3143 	mov	a,r1
   B7B0 3F                 3144 	addc	a,r7
   B7B1 F9                 3145 	mov	r1,a
   B7B2 B8 0C 05           3146 	cjne	r0,#0x0C,00179$
   B7B5 B9 00 02           3147 	cjne	r1,#0x00,00179$
   B7B8 80 07              3148 	sjmp	00124$
   B7BA                    3149 00179$:
                           3150 ;	../../shared/src/phase_adaptation.c:548: train.phase_offset_data += rpta_vote;
   B7BA EA                 3151 	mov	a,r2
   B7BB 2D                 3152 	add	a,r5
   B7BC FA                 3153 	mov	r2,a
   B7BD 90 66 61           3154 	mov	dptr,#(_train + 0x0021)
   B7C0 F0                 3155 	movx	@dptr,a
   B7C1                    3156 00124$:
                           3157 ;	../../shared/src/phase_adaptation.c:552: lnx_EYE_LEFT_RTPA_2C_LANE_7_0 = norm_eom_ph_os_l;
   B7C1 90 67 00           3158 	mov	dptr,#_norm_eom_ph_os_l
   B7C4 E0                 3159 	movx	a,@dptr
   B7C5 90 60 97           3160 	mov	dptr,#(_DFE_CONTROL_9 + 0x0003)
   B7C8 F0                 3161 	movx	@dptr,a
                           3162 ;	../../shared/src/phase_adaptation.c:553: lnx_EYE_RIGHT_RTPA_2C_LANE_7_0 = norm_eom_ph_os_r;
   B7C9 90 67 02           3163 	mov	dptr,#_norm_eom_ph_os_r
   B7CC E0                 3164 	movx	a,@dptr
   B7CD 90 60 96           3165 	mov	dptr,#(_DFE_CONTROL_9 + 0x0002)
   B7D0 F0                 3166 	movx	@dptr,a
                           3167 ;	../../shared/src/phase_adaptation.c:554: lnx_EYE_MID_RTPA_2C_LANE_7_0 = train.phase_offset_esm; //norm_eom_ph_os_c;		
   B7D1 90 66 62           3168 	mov	dptr,#(_train + 0x0022)
   B7D4 E0                 3169 	movx	a,@dptr
   B7D5 FA                 3170 	mov	r2,a
   B7D6 90 60 95           3171 	mov	dptr,#(_DFE_CONTROL_9 + 0x0001)
   B7D9 F0                 3172 	movx	@dptr,a
                           3173 ;	../../shared/src/phase_adaptation.c:565: phase_vote_acc = 0;
   B7DA 90 67 03           3174 	mov	dptr,#_phase_vote_acc
   B7DD E4                 3175 	clr	a
   B7DE F0                 3176 	movx	@dptr,a
   B7DF A3                 3177 	inc	dptr
   B7E0 F0                 3178 	movx	@dptr,a
                           3179 ;	../../shared/src/phase_adaptation.c:566: rpta_vote = 0;
   B7E1 90 67 6A           3180 	mov	dptr,#_rpta_vote
   B7E4 E4                 3181 	clr	a
   B7E5 F0                 3182 	movx	@dptr,a
   B7E6                    3183 00129$:
                           3184 ;	../../shared/src/phase_adaptation.c:578: Data_Path_DFE_Adapt();		
   B7E6 78 66              3185 	mov	r0,#_Data_Path_DFE_Adapt
   B7E8 79 B8              3186 	mov	r1,#(_Data_Path_DFE_Adapt >> 8)
   B7EA 7A 01              3187 	mov	r2,#(_Data_Path_DFE_Adapt >> 16)
   B7EC 12 00 B3           3188 	lcall	__sdcc_banked_call
                           3189 ;	../../shared/src/phase_adaptation.c:580: if( (abs(train.f1) > tag_DFE_F1_SAT_THRES) || train.f0a >= tag_DFE_F0_SAT_THRES || ofst_sat ) {
   B7EF 90 66 46           3190 	mov	dptr,#(_train + 0x0006)
   B7F2 E0                 3191 	movx	a,@dptr
   B7F3 F5 82              3192 	mov	dpl,a
   B7F5 78 41              3193 	mov	r0,#_abs
   B7F7 79 C1              3194 	mov	r1,#(_abs >> 8)
   B7F9 7A 02              3195 	mov	r2,#(_abs >> 16)
   B7FB 12 00 B3           3196 	lcall	__sdcc_banked_call
   B7FE AA 82              3197 	mov	r2,dpl
   B800 90 60 66           3198 	mov	dptr,#(_DLL_CAL + 0x0002)
   B803 E0                 3199 	movx	a,@dptr
   B804 FB                 3200 	mov	r3,a
   B805 B5 02 00           3201 	cjne	a,ar2,00180$
   B808                    3202 00180$:
   B808 40 17              3203 	jc	00132$
   B80A 90 66 59           3204 	mov	dptr,#(_train + 0x0019)
   B80D E0                 3205 	movx	a,@dptr
   B80E FA                 3206 	mov	r2,a
   B80F 90 60 67           3207 	mov	dptr,#(_DLL_CAL + 0x0003)
   B812 E0                 3208 	movx	a,@dptr
   B813 FB                 3209 	mov	r3,a
   B814 EA                 3210 	mov	a,r2
   B815 B5 03 00           3211 	cjne	a,ar3,00182$
   B818                    3212 00182$:
   B818 50 07              3213 	jnc	00132$
   B81A 90 67 96           3214 	mov	dptr,#_ofst_sat
   B81D E0                 3215 	movx	a,@dptr
   B81E FA                 3216 	mov	r2,a
   B81F 60 10              3217 	jz	00133$
   B821                    3218 00132$:
                           3219 ;	../../shared/src/phase_adaptation.c:582: if(lnx_PHASE_ADAPT_SAT_DETECT_LANE==0) {
   B821 90 60 3A           3220 	mov	dptr,#(_DFE_CONTROL_1 + 0x0002)
   B824 E0                 3221 	movx	a,@dptr
   B825 20 E4 10           3222 	jb	acc.4,00139$
                           3223 ;	../../shared/src/phase_adaptation.c:583: lnx_PHASE_ADAPT_SAT_DETECT_LANE = 1;
   B828 90 60 3A           3224 	mov	dptr,#(_DFE_CONTROL_1 + 0x0002)
   B82B E0                 3225 	movx	a,@dptr
   B82C 44 10              3226 	orl	a,#0x10
   B82E F0                 3227 	movx	@dptr,a
                           3228 ;	../../shared/src/phase_adaptation.c:587: break;	
   B82F 80 32              3229 	sjmp	00141$
   B831                    3230 00133$:
                           3231 ;	../../shared/src/phase_adaptation.c:590: else lnx_PHASE_ADAPT_SAT_DETECT_LANE = 0;
   B831 90 60 3A           3232 	mov	dptr,#(_DFE_CONTROL_1 + 0x0002)
   B834 E0                 3233 	movx	a,@dptr
   B835 54 EF              3234 	anl	a,#0xef
   B837 F0                 3235 	movx	@dptr,a
   B838                    3236 00139$:
                           3237 ;	../../shared/src/phase_adaptation.c:593: } while( rpta_loop_cnt++ < PH_CONV_NUM && lnx_PHASE_ADAPT_ENABLE_LANE) ;
   B838 90 67 66           3238 	mov	dptr,#_rpta_loop_cnt
   B83B E0                 3239 	movx	a,@dptr
   B83C FA                 3240 	mov	r2,a
   B83D A3                 3241 	inc	dptr
   B83E E0                 3242 	movx	a,@dptr
   B83F FB                 3243 	mov	r3,a
   B840 90 67 66           3244 	mov	dptr,#_rpta_loop_cnt
   B843 74 01              3245 	mov	a,#0x01
   B845 2A                 3246 	add	a,r2
   B846 F0                 3247 	movx	@dptr,a
   B847 E4                 3248 	clr	a
   B848 3B                 3249 	addc	a,r3
   B849 A3                 3250 	inc	dptr
   B84A F0                 3251 	movx	@dptr,a
   B84B 90 60 63           3252 	mov	dptr,#(_RPTA_CONFIG_1 + 0x0003)
   B84E E0                 3253 	movx	a,@dptr
   B84F FC                 3254 	mov	r4,a
   B850 7D 00              3255 	mov	r5,#0x00
   B852 C3                 3256 	clr	c
   B853 EA                 3257 	mov	a,r2
   B854 9C                 3258 	subb	a,r4
   B855 EB                 3259 	mov	a,r3
   B856 9D                 3260 	subb	a,r5
   B857 50 0A              3261 	jnc	00141$
   B859 90 60 4C           3262 	mov	dptr,#_DFE_CONTROL_5
   B85C E0                 3263 	movx	a,@dptr
   B85D 30 E5 03           3264 	jnb	acc.5,00187$
   B860 02 B5 66           3265 	ljmp	00138$
   B863                    3266 00187$:
   B863                    3267 00141$:
   B863 02 00 C5           3268 	ljmp	__sdcc_banked_ret
                           3269 ;------------------------------------------------------------
                           3270 ;Allocation info for local variables in function 'Data_Path_DFE_Adapt'
                           3271 ;------------------------------------------------------------
                           3272 ;------------------------------------------------------------
                           3273 ;	../../shared/src/phase_adaptation.c:605: void Data_Path_DFE_Adapt(void) BANKING_CTRL {
                           3274 ;	-----------------------------------------
                           3275 ;	 function Data_Path_DFE_Adapt
                           3276 ;	-----------------------------------------
   B866                    3277 _Data_Path_DFE_Adapt:
                           3278 ;	../../shared/src/phase_adaptation.c:606: if(lnx_FORCE_PHASE_OFFSET_DATA_EN_LANE) return;
   B866 90 60 44           3279 	mov	dptr,#_DFE_CONTROL_3
   B869 E0                 3280 	movx	a,@dptr
   B86A 30 E1 02           3281 	jnb	acc.1,00102$
   B86D 80 55              3282 	sjmp	00103$
   B86F                    3283 00102$:
                           3284 ;	../../shared/src/phase_adaptation.c:612: adapt_eom_phase_save = train.phase_offset_esm;
   B86F 90 66 62           3285 	mov	dptr,#(_train + 0x0022)
   B872 E0                 3286 	movx	a,@dptr
   B873 90 67 0D           3287 	mov	dptr,#_adapt_eom_phase_save
   B876 F0                 3288 	movx	@dptr,a
                           3289 ;	../../shared/src/phase_adaptation.c:613: adapt_data_en = 1;
   B877 D2 0D              3290 	setb	_adapt_data_en
                           3291 ;	../../shared/src/phase_adaptation.c:614: adapt_slicer_en = 1;
   B879 D2 0C              3292 	setb	_adapt_slicer_en
                           3293 ;	../../shared/src/phase_adaptation.c:615: ph_control_mode = 0;
   B87B 90 66 F8           3294 	mov	dptr,#_ph_control_mode
   B87E E4                 3295 	clr	a
   B87F F0                 3296 	movx	@dptr,a
                           3297 ;	../../shared/src/phase_adaptation.c:616: set_ph_mode();
   B880 78 3B              3298 	mov	r0,#_set_ph_mode
   B882 79 97              3299 	mov	r1,#(_set_ph_mode >> 8)
   B884 7A 02              3300 	mov	r2,#(_set_ph_mode >> 16)
   B886 12 00 B3           3301 	lcall	__sdcc_banked_call
                           3302 ;	../../shared/src/phase_adaptation.c:617: phase_control_func_0(train.phase_offset_data, 0);
   B889 90 66 61           3303 	mov	dptr,#(_train + 0x0021)
   B88C E0                 3304 	movx	a,@dptr
   B88D FA                 3305 	mov	r2,a
   B88E E4                 3306 	clr	a
   B88F C0 E0              3307 	push	acc
   B891 8A 82              3308 	mov	dpl,r2
   B893 12 2E 07           3309 	lcall	_phase_control_func_0
   B896 15 81              3310 	dec	sp
                           3311 ;	../../shared/src/phase_adaptation.c:618: train.phase_offset_esm = adapt_eom_phase_save;
   B898 90 67 0D           3312 	mov	dptr,#_adapt_eom_phase_save
   B89B E0                 3313 	movx	a,@dptr
   B89C 90 66 62           3314 	mov	dptr,#(_train + 0x0022)
   B89F F0                 3315 	movx	@dptr,a
                           3316 ;	../../shared/src/phase_adaptation.c:620: cds_tb = cds_table[CDS_DFE_OFST];
   B8A0 90 00 E2           3317 	mov	dptr,#(_cds_table + 0x0004)
   B8A3 E4                 3318 	clr	a
   B8A4 93                 3319 	movc	a,@a+dptr
   B8A5 FA                 3320 	mov	r2,a
   B8A6 A3                 3321 	inc	dptr
   B8A7 E4                 3322 	clr	a
   B8A8 93                 3323 	movc	a,@a+dptr
   B8A9 FB                 3324 	mov	r3,a
   B8AA 90 61 74           3325 	mov	dptr,#_CDS_READ_MISC1
   B8AD EA                 3326 	mov	a,r2
   B8AE F0                 3327 	movx	@dptr,a
   B8AF A3                 3328 	inc	dptr
   B8B0 EB                 3329 	mov	a,r3
   B8B1 F0                 3330 	movx	@dptr,a
                           3331 ;	../../shared/src/phase_adaptation.c:621: dfe_adaptation(); 
   B8B2 78 AD              3332 	mov	r0,#_dfe_adaptation
   B8B4 79 9F              3333 	mov	r1,#(_dfe_adaptation >> 8)
   B8B6 7A 01              3334 	mov	r2,#(_dfe_adaptation >> 16)
   B8B8 12 00 B3           3335 	lcall	__sdcc_banked_call
                           3336 ;	../../shared/src/phase_adaptation.c:625: train_ofst_save = train.ofst_slicer;
   B8BB 90 66 57           3337 	mov	dptr,#(_train + 0x0017)
   B8BE E0                 3338 	movx	a,@dptr
   B8BF FA                 3339 	mov	r2,a
   B8C0 90 67 9B           3340 	mov	dptr,#_train_ofst_save
   B8C3 F0                 3341 	movx	@dptr,a
   B8C4                    3342 00103$:
   B8C4 02 00 C5           3343 	ljmp	__sdcc_banked_ret
                           3344 ;------------------------------------------------------------
                           3345 ;Allocation info for local variables in function 'EOM_clock_DFE_Adapt'
                           3346 ;------------------------------------------------------------
                           3347 ;------------------------------------------------------------
                           3348 ;	../../shared/src/phase_adaptation.c:632: void EOM_clock_DFE_Adapt(void) BANKING_CTRL {
                           3349 ;	-----------------------------------------
                           3350 ;	 function EOM_clock_DFE_Adapt
                           3351 ;	-----------------------------------------
   B8C7                    3352 _EOM_clock_DFE_Adapt:
                           3353 ;	../../shared/src/phase_adaptation.c:633: adapt_data_en = 0;
   B8C7 C2 0D              3354 	clr	_adapt_data_en
                           3355 ;	../../shared/src/phase_adaptation.c:634: adapt_slicer_en = 1;
   B8C9 D2 0C              3356 	setb	_adapt_slicer_en
                           3357 ;	../../shared/src/phase_adaptation.c:635: ph_control_mode = 1;
   B8CB 90 66 F8           3358 	mov	dptr,#_ph_control_mode
   B8CE 74 01              3359 	mov	a,#0x01
   B8D0 F0                 3360 	movx	@dptr,a
                           3361 ;	../../shared/src/phase_adaptation.c:636: set_ph_mode();
   B8D1 78 3B              3362 	mov	r0,#_set_ph_mode
   B8D3 79 97              3363 	mov	r1,#(_set_ph_mode >> 8)
   B8D5 7A 02              3364 	mov	r2,#(_set_ph_mode >> 16)
   B8D7 12 00 B3           3365 	lcall	__sdcc_banked_call
                           3366 ;	../../shared/src/phase_adaptation.c:637: phase_control_func();
   B8DA 12 2D F3           3367 	lcall	_phase_control_func
                           3368 ;	../../shared/src/phase_adaptation.c:639: cds_tb = cds_table[CDS_EOMADAPT];
   B8DD 90 00 EA           3369 	mov	dptr,#(_cds_table + 0x000c)
   B8E0 E4                 3370 	clr	a
   B8E1 93                 3371 	movc	a,@a+dptr
   B8E2 FA                 3372 	mov	r2,a
   B8E3 A3                 3373 	inc	dptr
   B8E4 E4                 3374 	clr	a
   B8E5 93                 3375 	movc	a,@a+dptr
   B8E6 FB                 3376 	mov	r3,a
   B8E7 90 61 74           3377 	mov	dptr,#_CDS_READ_MISC1
   B8EA EA                 3378 	mov	a,r2
   B8EB F0                 3379 	movx	@dptr,a
   B8EC A3                 3380 	inc	dptr
   B8ED EB                 3381 	mov	a,r3
   B8EE F0                 3382 	movx	@dptr,a
                           3383 ;	../../shared/src/phase_adaptation.c:640: dfe_adaptation(); 	
   B8EF 78 AD              3384 	mov	r0,#_dfe_adaptation
   B8F1 79 9F              3385 	mov	r1,#(_dfe_adaptation >> 8)
   B8F3 7A 01              3386 	mov	r2,#(_dfe_adaptation >> 16)
   B8F5 12 00 B3           3387 	lcall	__sdcc_banked_call
                           3388 ;	../../shared/src/phase_adaptation.c:641: norm_ofst = train.ofst_slicer;
   B8F8 90 66 57           3389 	mov	dptr,#(_train + 0x0017)
   B8FB E0                 3390 	movx	a,@dptr
   B8FC FA                 3391 	mov	r2,a
   B8FD 90 66 FF           3392 	mov	dptr,#_norm_ofst
   B900 F0                 3393 	movx	@dptr,a
   B901 02 00 C5           3394 	ljmp	__sdcc_banked_ret
                           3395 ;------------------------------------------------------------
                           3396 ;Allocation info for local variables in function 'F0d_measurement'
                           3397 ;------------------------------------------------------------
                           3398 ;------------------------------------------------------------
                           3399 ;	../../shared/src/phase_adaptation.c:655: void F0d_measurement(void) BANKING_CTRL {
                           3400 ;	-----------------------------------------
                           3401 ;	 function F0d_measurement
                           3402 ;	-----------------------------------------
   B904                    3403 _F0d_measurement:
                           3404 ;	../../shared/src/phase_adaptation.c:657: adapt_data_en = 0;
   B904 C2 0D              3405 	clr	_adapt_data_en
                           3406 ;	../../shared/src/phase_adaptation.c:658: adapt_slicer_en = 1;
   B906 D2 0C              3407 	setb	_adapt_slicer_en
                           3408 ;	../../shared/src/phase_adaptation.c:659: ph_control_mode = 1;
   B908 90 66 F8           3409 	mov	dptr,#_ph_control_mode
   B90B 74 01              3410 	mov	a,#0x01
   B90D F0                 3411 	movx	@dptr,a
                           3412 ;	../../shared/src/phase_adaptation.c:660: set_ph_mode();	
   B90E 78 3B              3413 	mov	r0,#_set_ph_mode
   B910 79 97              3414 	mov	r1,#(_set_ph_mode >> 8)
   B912 7A 02              3415 	mov	r2,#(_set_ph_mode >> 16)
   B914 12 00 B3           3416 	lcall	__sdcc_banked_call
                           3417 ;	../../shared/src/phase_adaptation.c:661: phase_control_func();
   B917 12 2D F3           3418 	lcall	_phase_control_func
                           3419 ;	../../shared/src/phase_adaptation.c:663: cds_tb = cds_table[CDS_F0D]; 
   B91A 90 00 EE           3420 	mov	dptr,#(_cds_table + 0x0010)
   B91D E4                 3421 	clr	a
   B91E 93                 3422 	movc	a,@a+dptr
   B91F FA                 3423 	mov	r2,a
   B920 A3                 3424 	inc	dptr
   B921 E4                 3425 	clr	a
   B922 93                 3426 	movc	a,@a+dptr
   B923 FB                 3427 	mov	r3,a
   B924 90 61 74           3428 	mov	dptr,#_CDS_READ_MISC1
   B927 EA                 3429 	mov	a,r2
   B928 F0                 3430 	movx	@dptr,a
   B929 A3                 3431 	inc	dptr
   B92A EB                 3432 	mov	a,r3
   B92B F0                 3433 	movx	@dptr,a
                           3434 ;	../../shared/src/phase_adaptation.c:664: lnx_VH_EO_MODE_LANE = 1;
   B92C 90 60 A0           3435 	mov	dptr,#_CDS_CTRL_REG0
   B92F E0                 3436 	movx	a,@dptr
   B930 44 08              3437 	orl	a,#0x08
   B932 F0                 3438 	movx	@dptr,a
                           3439 ;	../../shared/src/phase_adaptation.c:665: dfe_adaptation(); 
   B933 78 AD              3440 	mov	r0,#_dfe_adaptation
   B935 79 9F              3441 	mov	r1,#(_dfe_adaptation >> 8)
   B937 7A 01              3442 	mov	r2,#(_dfe_adaptation >> 16)
   B939 12 00 B3           3443 	lcall	__sdcc_banked_call
                           3444 ;	../../shared/src/phase_adaptation.c:666: lnx_VH_EO_MODE_LANE = 0;
   B93C 90 60 A0           3445 	mov	dptr,#_CDS_CTRL_REG0
   B93F E0                 3446 	movx	a,@dptr
   B940 54 F7              3447 	anl	a,#0xf7
   B942 F0                 3448 	movx	@dptr,a
   B943 02 00 C5           3449 	ljmp	__sdcc_banked_ret
                           3450 ;------------------------------------------------------------
                           3451 ;Allocation info for local variables in function 'EOM_clock_analog_align'
                           3452 ;------------------------------------------------------------
                           3453 ;dec_num                   Allocated to registers r2 
                           3454 ;i                         Allocated to registers r5 
                           3455 ;total_cnt                 Allocated to registers r3 r4 
                           3456 ;------------------------------------------------------------
                           3457 ;	../../shared/src/phase_adaptation.c:678: void EOM_clock_analog_align(void) BANKING_CTRL {
                           3458 ;	-----------------------------------------
                           3459 ;	 function EOM_clock_analog_align
                           3460 ;	-----------------------------------------
   B946                    3461 _EOM_clock_analog_align:
                           3462 ;	../../shared/src/phase_adaptation.c:687: set_slicer_data_sampler_adapt(SLICER_SMPL_ONLY);
   B946 75 82 01           3463 	mov	dpl,#0x01
   B949 78 44              3464 	mov	r0,#_set_slicer_data_sampler_adapt
   B94B 79 92              3465 	mov	r1,#(_set_slicer_data_sampler_adapt >> 8)
   B94D 7A 02              3466 	mov	r2,#(_set_slicer_data_sampler_adapt >> 16)
   B94F 12 00 B3           3467 	lcall	__sdcc_banked_call
                           3468 ;	../../shared/src/phase_adaptation.c:688: data_slic_fb_mode = 0; 
   B952 90 24 05           3469 	mov	dptr,#(_DFE_CTRL_REG1 + 0x0001)
   B955 E0                 3470 	movx	a,@dptr
   B956 54 FD              3471 	anl	a,#0xfd
   B958 F0                 3472 	movx	@dptr,a
                           3473 ;	../../shared/src/phase_adaptation.c:690: dec_num = cdr_ui_pi_code_num;
   B959 90 67 93           3474 	mov	dptr,#_cdr_ui_pi_code_num
   B95C E0                 3475 	movx	a,@dptr
   B95D FA                 3476 	mov	r2,a
                           3477 ;	../../shared/src/phase_adaptation.c:692: do {
   B95E 7B 1C              3478 	mov	r3,#0x1C
   B960 7C 02              3479 	mov	r4,#0x02
   B962                    3480 00103$:
                           3481 ;	../../shared/src/phase_adaptation.c:693: cds_tb = cds_table[CDS_EYECHECK];  
   B962 90 00 E8           3482 	mov	dptr,#(_cds_table + 0x000a)
   B965 E4                 3483 	clr	a
   B966 93                 3484 	movc	a,@a+dptr
   B967 FD                 3485 	mov	r5,a
   B968 A3                 3486 	inc	dptr
   B969 E4                 3487 	clr	a
   B96A 93                 3488 	movc	a,@a+dptr
   B96B FE                 3489 	mov	r6,a
   B96C 90 61 74           3490 	mov	dptr,#_CDS_READ_MISC1
   B96F ED                 3491 	mov	a,r5
   B970 F0                 3492 	movx	@dptr,a
   B971 A3                 3493 	inc	dptr
   B972 EE                 3494 	mov	a,r6
   B973 F0                 3495 	movx	@dptr,a
                           3496 ;	../../shared/src/phase_adaptation.c:694: cdr_dfe_scheme();
   B974 C0 02              3497 	push	ar2
   B976 C0 03              3498 	push	ar3
   B978 C0 04              3499 	push	ar4
   B97A 78 68              3500 	mov	r0,#_cdr_dfe_scheme
   B97C 79 95              3501 	mov	r1,#(_cdr_dfe_scheme >> 8)
   B97E 7A 01              3502 	mov	r2,#(_cdr_dfe_scheme >> 16)
   B980 12 00 B3           3503 	lcall	__sdcc_banked_call
   B983 D0 04              3504 	pop	ar4
   B985 D0 03              3505 	pop	ar3
   B987 D0 02              3506 	pop	ar2
                           3507 ;	../../shared/src/phase_adaptation.c:695: if(cds28.eye_check_pass) {
   B989 90 61 70           3508 	mov	dptr,#(_cds28 + 0x0070)
   B98C E0                 3509 	movx	a,@dptr
                           3510 ;	../../shared/src/phase_adaptation.c:701: for(i = 0; i < dec_num; ++ i) {		
   B98D 70 2D              3511 	jnz	00105$
   B98F FD                 3512 	mov	r5,a
   B990                    3513 00106$:
   B990 ED                 3514 	mov	a,r5
   B991 B5 02 00           3515 	cjne	a,ar2,00119$
   B994                    3516 00119$:
   B994 50 19              3517 	jnc	00104$
                           3518 ;	../../shared/src/phase_adaptation.c:703: move_eom_phase(64); //move 1UI; 90'
   B996 90 00 40           3519 	mov	dptr,#0x0040
   B999 C0 02              3520 	push	ar2
   B99B C0 03              3521 	push	ar3
   B99D C0 04              3522 	push	ar4
   B99F C0 05              3523 	push	ar5
   B9A1 12 31 96           3524 	lcall	_move_eom_phase
   B9A4 D0 05              3525 	pop	ar5
   B9A6 D0 04              3526 	pop	ar4
   B9A8 D0 03              3527 	pop	ar3
   B9AA D0 02              3528 	pop	ar2
                           3529 ;	../../shared/src/phase_adaptation.c:701: for(i = 0; i < dec_num; ++ i) {		
   B9AC 0D                 3530 	inc	r5
   B9AD 80 E1              3531 	sjmp	00106$
   B9AF                    3532 00104$:
                           3533 ;	../../shared/src/phase_adaptation.c:706: } while (total_cnt-->0);
   B9AF 8B 05              3534 	mov	ar5,r3
   B9B1 8C 06              3535 	mov	ar6,r4
   B9B3 1B                 3536 	dec	r3
   B9B4 BB FF 01           3537 	cjne	r3,#0xff,00121$
   B9B7 1C                 3538 	dec	r4
   B9B8                    3539 00121$:
   B9B8 ED                 3540 	mov	a,r5
   B9B9 4E                 3541 	orl	a,r6
   B9BA 70 A6              3542 	jnz	00103$
   B9BC                    3543 00105$:
                           3544 ;	../../shared/src/phase_adaptation.c:708: lnx_EOM_PHASE_UI_ALIGN_FAILED_LANE = cds28.eye_check_pass==1? _EXIT_SUCCESS:_EXIT_FAIL;	
   B9BC 90 61 70           3545 	mov	dptr,#(_cds28 + 0x0070)
   B9BF E0                 3546 	movx	a,@dptr
   B9C0 FA                 3547 	mov	r2,a
   B9C1 BA 01 03           3548 	cjne	r2,#0x01,00123$
   B9C4 D3                 3549 	setb	c
   B9C5 80 01              3550 	sjmp	00124$
   B9C7                    3551 00123$:
   B9C7 C3                 3552 	clr	c
   B9C8                    3553 00124$:
   B9C8 B3                 3554 	cpl	c
   B9C9 92 28              3555 	mov	b0,c
   B9CB E4                 3556 	clr	a
   B9CC 33                 3557 	rlc	a
   B9CD FA                 3558 	mov	r2,a
   B9CE 90 60 4E           3559 	mov	dptr,#(_DFE_CONTROL_5 + 0x0002)
   B9D1 13                 3560 	rrc	a
   B9D2 E0                 3561 	movx	a,@dptr
   B9D3 92 E5              3562 	mov	acc.5,c
   B9D5 F0                 3563 	movx	@dptr,a
   B9D6 02 00 C5           3564 	ljmp	__sdcc_banked_ret
                           3565 	.area CSEG    (CODE)
                           3566 	.area CSEG    (CODE)
                           3567 	.area CABS    (ABS,CODE)
