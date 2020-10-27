                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:28 2018
                              5 ;--------------------------------------------------------
                              6 	.module ph_ctrl
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _sel_sdge_dly_tb3
                             13 	.globl _sel_sdge_dly_tb2
                             14 	.globl _TF2
                             15 	.globl _TI
                             16 	.globl _RI
                             17 	.globl _EX12
                             18 	.globl _EX11
                             19 	.globl _EX10
                             20 	.globl _EX9
                             21 	.globl _EX8
                             22 	.globl _ES1
                             23 	.globl _PS1
                             24 	.globl _EX6
                             25 	.globl _EX5
                             26 	.globl _EX4
                             27 	.globl _EX3
                             28 	.globl _EX2
                             29 	.globl _EX7
                             30 	.globl _EA
                             31 	.globl _WDT
                             32 	.globl _ET2
                             33 	.globl _ES
                             34 	.globl _ET1
                             35 	.globl _EX1
                             36 	.globl _ET0
                             37 	.globl _EX0
                             38 	.globl _TF1
                             39 	.globl _TR1
                             40 	.globl _TF0
                             41 	.globl _TR0
                             42 	.globl _IE1
                             43 	.globl _IT1
                             44 	.globl _IE0
                             45 	.globl _IT0
                             46 	.globl _P3_7
                             47 	.globl _P3_6
                             48 	.globl _P3_5
                             49 	.globl _P3_4
                             50 	.globl _P3_3
                             51 	.globl _P3_2
                             52 	.globl _P3_1
                             53 	.globl _P3_0
                             54 	.globl _P2_7
                             55 	.globl _P2_6
                             56 	.globl _P2_5
                             57 	.globl _P2_4
                             58 	.globl _P2_3
                             59 	.globl _P2_2
                             60 	.globl _P2_1
                             61 	.globl _P2_0
                             62 	.globl _P1_7
                             63 	.globl _P1_6
                             64 	.globl _P1_5
                             65 	.globl _P1_4
                             66 	.globl _P1_3
                             67 	.globl _P1_2
                             68 	.globl _P1_1
                             69 	.globl _P1_0
                             70 	.globl _P0_7
                             71 	.globl _P0_6
                             72 	.globl _P0_5
                             73 	.globl _P0_4
                             74 	.globl _P0_3
                             75 	.globl _P0_2
                             76 	.globl _P0_1
                             77 	.globl _P0_0
                             78 	.globl _DMAC
                             79 	.globl _DMATA
                             80 	.globl _DMASA
                             81 	.globl _TMR2
                             82 	.globl _TMR1
                             83 	.globl _TMR0
                             84 	.globl _SRST
                             85 	.globl _B
                             86 	.globl _EIE
                             87 	.globl _ACC
                             88 	.globl _ADCON
                             89 	.globl _PSW
                             90 	.globl _TH2
                             91 	.globl _TL2
                             92 	.globl _RCAP2H
                             93 	.globl _RCAP2L
                             94 	.globl _T2CON
                             95 	.globl _CCEN
                             96 	.globl _IRCON
                             97 	.globl _S0RELH
                             98 	.globl _IP1
                             99 	.globl _IEN1
                            100 	.globl _DMAM1
                            101 	.globl _DMAM0
                            102 	.globl _DMASEL
                            103 	.globl _DMAC2
                            104 	.globl _DMAC1
                            105 	.globl _DMAC0
                            106 	.globl _P3
                            107 	.globl _S0RELL
                            108 	.globl _IP0
                            109 	.globl _IEN0
                            110 	.globl _DMAT2
                            111 	.globl _DMAT1
                            112 	.globl _DMAT0
                            113 	.globl _DMAS2
                            114 	.globl _DMAS1
                            115 	.globl _DMAS0
                            116 	.globl _P2
                            117 	.globl _IEN2
                            118 	.globl _SBUF
                            119 	.globl _SCON
                            120 	.globl _PSBANK
                            121 	.globl _DPS
                            122 	.globl _P1
                            123 	.globl _CKCON
                            124 	.globl _TH1
                            125 	.globl _TH0
                            126 	.globl _TL1
                            127 	.globl _TL0
                            128 	.globl _TMOD
                            129 	.globl _TCON
                            130 	.globl _PCON
                            131 	.globl _WDTREL
                            132 	.globl _DPH
                            133 	.globl _DPL
                            134 	.globl _P0
                            135 	.globl _sq_thrs_ratio_tb
                            136 	.globl _train_save_tb
                            137 	.globl _tx_tb
                            138 	.globl _UPHY_ANAREG_REV_0
                            139 	.globl _dfe_sm_save
                            140 	.globl _dfe_sm_dc
                            141 	.globl _dfe_sm
                            142 	.globl _cds28
                            143 	.globl _lnx_calx_align90_gm
                            144 	.globl _lnx_calx_align90_dac
                            145 	.globl _lnx_calx_align90_dummy_clk
                            146 	.globl _lnx_calx_eom_dpher
                            147 	.globl _lnx_calx_vdda_dll_eom_sel
                            148 	.globl _lnx_calx_dll_eom_gmsel
                            149 	.globl _lnx_calx_vdda_dll_sel
                            150 	.globl _lnx_calx_dll_gmsel
                            151 	.globl _lnx_calx_rxdcc_dll_hg
                            152 	.globl _lnx_calx_rxdcc_dll
                            153 	.globl _lnx_calx_txdcc_hg
                            154 	.globl _lnx_calx_txdcc
                            155 	.globl _lnx_calx_txdcc_pdiv_hg
                            156 	.globl _lnx_calx_txdcc_pdiv
                            157 	.globl _lnx_spdoft_tx_preset_index_lane
                            158 	.globl _lnx_cal_sellv_rxeomclk
                            159 	.globl _lnx_cal_sellv_rxsampler
                            160 	.globl _lnx_cal_sellv_txpre
                            161 	.globl _lnx_cal_sellv_rxdataclk
                            162 	.globl _lnx_cal_sellv_txclk
                            163 	.globl _lnx_cal_sellv_txdata
                            164 	.globl _lnx_cal_align90_gm
                            165 	.globl _lnx_cal_align90_dac
                            166 	.globl _lnx_cal_align90_dummy_clk
                            167 	.globl _lnx_cal_eom_dpher
                            168 	.globl _lnx_cal_vdda_dll_eom_sel
                            169 	.globl _lnx_cal_dll_eom_gmsel
                            170 	.globl _lnx_cal_vdda_dll_sel
                            171 	.globl _lnx_cal_dll_gmsel
                            172 	.globl _lnx_cal_rxdcc_eom_hg
                            173 	.globl _lnx_cal_rxdcc_eom
                            174 	.globl _lnx_cal_rxdcc_data_hg
                            175 	.globl _lnx_cal_rxdcc_data
                            176 	.globl _lnx_cal_rxdcc_dll_hg
                            177 	.globl _lnx_cal_rxdcc_dll
                            178 	.globl _lnx_cal_txdcc_hg
                            179 	.globl _lnx_cal_txdcc
                            180 	.globl _lnx_cal_txdcc_pdiv_hg
                            181 	.globl _lnx_cal_txdcc_pdiv
                            182 	.globl _cmx_cal_sllp_dac_fine_ring
                            183 	.globl _cmx_cal_pll_sllp_dac_coarse_ring
                            184 	.globl _cmx_cal_pll_speed_ring
                            185 	.globl _cmx_cal_plldcc
                            186 	.globl _cmx_cal_lccap_lsb
                            187 	.globl _cmx_cal_lccap_msb
                            188 	.globl _cmx_cal_lcvco_dac_msb
                            189 	.globl _cmx_cal_lcvco_dac_lsb
                            190 	.globl _cmx_cal_lcvco_dac
                            191 	.globl _local_tx_preset_tb
                            192 	.globl _train_g0_index
                            193 	.globl _train_g1_index
                            194 	.globl _train_gn1_index
                            195 	.globl _phase_save
                            196 	.globl _txffe_save
                            197 	.globl _rc_save
                            198 	.globl _phy_mode_lane_table
                            199 	.globl _speedtable
                            200 	.globl _min_gen
                            201 	.globl _max_gen
                            202 	.globl _phy_mode_cmn_table
                            203 	.globl _ring_speedtable
                            204 	.globl _lc_speedtable
                            205 	.globl _TXTRAIN_IF_REG0
                            206 	.globl _CDS_READ_MISC1
                            207 	.globl _CDS_READ_MISC0
                            208 	.globl _DFE_READ_F0D_RIGHT_ODD
                            209 	.globl _DFE_READ_F0D_RIGHT_EVEN
                            210 	.globl _DFE_READ_F0D_LEFT_ODD
                            211 	.globl _DFE_READ_F0D_LEFT_EVEN
                            212 	.globl _DFE_READ_F0D_ODD
                            213 	.globl _DFE_READ_F0D_EVEN
                            214 	.globl _DFE_READ_F0B_ODD
                            215 	.globl _DFE_READ_F0B_EVEN
                            216 	.globl _DFE_READ_F0A_ODD
                            217 	.globl _DFE_READ_F0A_EVEN
                            218 	.globl _DFE_READ_ODD_REG8
                            219 	.globl _DFE_READ_EVEN_REG8
                            220 	.globl _DFE_READ_ODD_REG7
                            221 	.globl _DFE_READ_ODD_REG6
                            222 	.globl _DFE_READ_ODD_REG5
                            223 	.globl _DFE_READ_ODD_REG4
                            224 	.globl _DFE_READ_ODD_REG3
                            225 	.globl _DFE_READ_ODD_REG2
                            226 	.globl _DFE_READ_ODD_REG1
                            227 	.globl _DFE_READ_ODD_REG0
                            228 	.globl _DFE_READ_EVEN_REG7
                            229 	.globl _DFE_READ_EVEN_REG6
                            230 	.globl _DFE_READ_EVEN_REG5
                            231 	.globl _DFE_READ_EVEN_REG4
                            232 	.globl _DFE_READ_EVEN_REG3
                            233 	.globl _DFE_READ_EVEN_REG2
                            234 	.globl _DFE_READ_EVEN_REG1
                            235 	.globl _DFE_READ_EVEN_REG0
                            236 	.globl _TX_TRAIN_IF_REG8
                            237 	.globl _TX_TRAIN_CTRL_LANE
                            238 	.globl _TX_TRAIN_IF_REG7
                            239 	.globl _TX_TRAIN_IF_REG6
                            240 	.globl _TX_TRAIN_IF_REG5
                            241 	.globl _TX_TRAIN_IF_REG4
                            242 	.globl _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE
                            243 	.globl _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE
                            244 	.globl _TRX_TRAIN_IF_INTERRUPT_LANE
                            245 	.globl _TX_AMP_CTRL_REG0
                            246 	.globl _TX_DRV_RD_OUT_REG0
                            247 	.globl _LINK_TRAIN_MODE0
                            248 	.globl _TX_EMPH_CTRL_REG0
                            249 	.globl _TX_TRAIN_DEFAULT_REG5
                            250 	.globl _TX_TRAIN_DEFAULT_REG4
                            251 	.globl _TX_TRAIN_DEFAULT_REG3
                            252 	.globl _TX_TRAIN_DEFAULT_REG2
                            253 	.globl _TX_TRAIN_DEFAULT_REG1
                            254 	.globl _TX_TRAIN_DEFAULT_REG0
                            255 	.globl _TX_TRAIN_DRIVER_REG2
                            256 	.globl _TX_TRAIN_DRIVER_REG1
                            257 	.globl _TX_TRAIN_DRIVER_REG0
                            258 	.globl _TX_TRAIN_PATTTERN_REG0
                            259 	.globl _TX_TRAIN_IF_REG3
                            260 	.globl _TX_TRAIN_IF_REG2
                            261 	.globl _TX_TRAIN_IF_REG1
                            262 	.globl _TX_TRAIN_IF_REG0
                            263 	.globl _DME_DEC_REG1
                            264 	.globl _DME_DEC_REG0
                            265 	.globl _DME_ENC_REG2
                            266 	.globl _DME_ENC_REG1
                            267 	.globl _DME_ENC_REG0
                            268 	.globl _END_XDAT_CMN
                            269 	.globl _MCU_INFO_13
                            270 	.globl _MCU_INFO_12
                            271 	.globl _MCU_INFO_5
                            272 	.globl _MCU_INFO_4
                            273 	.globl _SYNC_INFO
                            274 	.globl _CDS_EYE_CLK_THR
                            275 	.globl _TX_SAVE_4
                            276 	.globl _TX_SAVE_3
                            277 	.globl _TX_SAVE_2
                            278 	.globl _TX_SAVE_1
                            279 	.globl _TX_SAVE_0
                            280 	.globl _ETH_PRESET1_TB
                            281 	.globl _ETH_PRESET0_TB
                            282 	.globl _SAS_PRESET2_TB
                            283 	.globl _SAS_PRESET1_TB
                            284 	.globl _SAS_PRESET0_TB
                            285 	.globl _G_SELLV_RXSAMPLER
                            286 	.globl _G_SELLV_RXDATACLK
                            287 	.globl _G_SELLV_RXEOMCLK
                            288 	.globl _G_SELLV_TXPRE
                            289 	.globl _G_SELLV_TXDATA
                            290 	.globl _G_SELLV_TXCLK
                            291 	.globl _TIMER_SEL3
                            292 	.globl _TIMER_SEL2
                            293 	.globl _TIMER_SEL1
                            294 	.globl _MCU_CONFIG1
                            295 	.globl _LOOP_CNTS
                            296 	.globl _CAL_DATA1
                            297 	.globl _MCU_CONFIG
                            298 	.globl _CAL_STATUS_READ
                            299 	.globl _CAL_TIME_OUT_AND_DIS
                            300 	.globl _CON_CAL_STEP_SIZE5
                            301 	.globl _CON_CAL_STEP_SIZE4
                            302 	.globl _CON_CAL_STEP_SIZE3
                            303 	.globl _CON_CAL_STEP_SIZE2
                            304 	.globl _CON_CAL_STEP_SIZE1
                            305 	.globl _CONTROL_CONFIG9
                            306 	.globl _CONTROL_CONFIG8
                            307 	.globl _TRAIN_IF_CONFIG
                            308 	.globl _CAL_DATA0
                            309 	.globl _CONTROL_CONFIG7
                            310 	.globl _CONTROL_CONFIG6
                            311 	.globl _CONTROL_CONFIG5
                            312 	.globl _CONTROL_CONFIG4
                            313 	.globl _CONTROL_CONFIG3
                            314 	.globl _CONTROL_CONFIG2
                            315 	.globl _CONTROL_CONFIG1
                            316 	.globl _CONTROL_CONFIG0
                            317 	.globl _FW_REV
                            318 	.globl _CID_REG1
                            319 	.globl _CID_REG0
                            320 	.globl _CMN_MCU_REG
                            321 	.globl _SET_LANE_ISR
                            322 	.globl _CMN_ISR_MASK_1
                            323 	.globl _CMN_ISR_1
                            324 	.globl _CMN_MCU_TIMER3_CONTROL
                            325 	.globl _CMN_MCU_TIMER2_CONTROL
                            326 	.globl _CMN_MCU_TIMER1_CONTROL
                            327 	.globl _CMN_MCU_TIMER0_CONTROL
                            328 	.globl _CMN_MCU_TIMER_CTRL_5_LANE
                            329 	.globl _CMN_MCU_TIMER_CTRL_4_LANE
                            330 	.globl _CMN_MCU_TIMER_CTRL_3_LANE
                            331 	.globl _CMN_MCU_TIMER_CTRL_2_LANE
                            332 	.globl _CMN_MCU_TIMER_CONTROL
                            333 	.globl _CMN_CACHE_DEBUG1
                            334 	.globl _CMN_MCU_GPIO
                            335 	.globl _CMN_ISR_CLEAR_2
                            336 	.globl _CMN_ISR_MASK_2
                            337 	.globl _CMN_ISR_2
                            338 	.globl _MCU_INT_ADDR
                            339 	.globl _CMN_CACHE_DEBUG0
                            340 	.globl _MCU_SDT_CMN
                            341 	.globl _XDATA_MEM_CHECKSUM_CMN_2
                            342 	.globl _XDATA_MEM_CHECKSUM_CMN_1
                            343 	.globl _XDATA_MEM_CHECKSUM_CMN_0
                            344 	.globl _TEST5
                            345 	.globl _PM_CMN_REG2
                            346 	.globl _INPUT_CMN_PIN_REG3
                            347 	.globl __FIELDNAME_
                            348 	.globl _CMN_CALIBRATION
                            349 	.globl _OUTPUT_CMN_PIN_REG0
                            350 	.globl _SPD_CMN_REG1
                            351 	.globl _CLKGEN_CMN_REG1
                            352 	.globl _PLLCAL_REG1
                            353 	.globl _PLLCAL_REG0
                            354 	.globl _ANA_TSEN_CONTROL
                            355 	.globl _INPUT_CMN_PIN_REG2
                            356 	.globl _INPUT_CMN_PIN_REG1
                            357 	.globl _INPUT_CMN_PIN_REG0
                            358 	.globl _PM_CMN_REG1
                            359 	.globl _SYSTEM
                            360 	.globl _TEST4
                            361 	.globl _TEST3
                            362 	.globl _TEST2
                            363 	.globl _TEST1
                            364 	.globl _TEST0
                            365 	.globl _MCU_SYNC2
                            366 	.globl _MCU_SYNC1
                            367 	.globl _MEM_IRQ_CLEAR
                            368 	.globl _APB_CONTROL_REG
                            369 	.globl _ANA_IF_CMN_REG0
                            370 	.globl _MEM_IRQ_MASK
                            371 	.globl _MEM_IRQ
                            372 	.globl _ANA_IF_CMN_REG1
                            373 	.globl _MEM_CMN_ECC_ERR_ADDRESS0
                            374 	.globl _MCU_INFO_3
                            375 	.globl _MCU_INFO_2
                            376 	.globl _MCU_INFO_1
                            377 	.globl _MCU_INFO_0
                            378 	.globl _MEMORY_CONTROL_4
                            379 	.globl _MEMORY_CONTROL_3
                            380 	.globl _MEMORY_CONTROL_2
                            381 	.globl _MEMORY_CONTROL_1
                            382 	.globl _MEMORY_CONTROL_0
                            383 	.globl _MCU_DEBUG1
                            384 	.globl _MCU_DEBUG0
                            385 	.globl _MCU_CONTROL_4
                            386 	.globl _MCU_CONTROL_3
                            387 	.globl _MCU_CONTROL_2
                            388 	.globl _MCU_CONTROL_1
                            389 	.globl _MCU_CONTROL_0
                            390 	.globl _GLOB_L1_SUBSTATES_CFG
                            391 	.globl _GLOB_PIPE_REVISION
                            392 	.globl _GLOB_BIST_DATA_HI
                            393 	.globl _GLOB_BIST_SEQR_CFG
                            394 	.globl _GLOB_BIST_RESULT
                            395 	.globl _GLOB_BIST_MASK
                            396 	.globl _GLOB_BIST_START
                            397 	.globl _GLOB_BIST_LANE_TYPE
                            398 	.globl _GLOB_BIST_CTRL
                            399 	.globl _GLOB_DP_BAL_CFG4
                            400 	.globl _GLOB_DP_BAL_CFG2
                            401 	.globl _GLOB_DP_BAL_CFG0
                            402 	.globl _GLOB_PM_DP_CTRL
                            403 	.globl _GLOB_COUNTER_HI
                            404 	.globl _GLOB_COUNTER_CTRL
                            405 	.globl _GLOB_PM_CFG0
                            406 	.globl _GLOB_DP_SAL_CFG5
                            407 	.globl _GLOB_DP_SAL_CFG3
                            408 	.globl _GLOB_DP_SAL_CFG1
                            409 	.globl _GLOB_DP_SAL_CFG
                            410 	.globl _GLOB_MISC_CTRL
                            411 	.globl _GLOB_CLK_SRC_HI
                            412 	.globl _GLOB_CLK_SRC_LO
                            413 	.globl _GLOB_RST_CLK_CTRL
                            414 	.globl _DFE_STATIC_REG6
                            415 	.globl _DFE_STATIC_REG5
                            416 	.globl _DFE_STATIC_REG4
                            417 	.globl _DFE_STATIC_REG3
                            418 	.globl _DFE_STATIC_REG1
                            419 	.globl _DFE_STATIC_REG0
                            420 	.globl _RX_CMN_0
                            421 	.globl _SRIS_REG1
                            422 	.globl _SRIS_REG0
                            423 	.globl _DTX_PHY_ALIGN_REG2
                            424 	.globl _DTX_PHY_ALIGN_REG1
                            425 	.globl _DTX_PHY_ALIGN_REG0
                            426 	.globl _DTX_REG4
                            427 	.globl _DTX_REG3
                            428 	.globl _DTX_REG2
                            429 	.globl _DTX_REG1
                            430 	.globl _DTX_REG0
                            431 	.globl _TX_CMN_REG
                            432 	.globl _END_XDAT_LANE
                            433 	.globl _TRAIN_CONTROL_17
                            434 	.globl _TRAIN_CONTROL_16
                            435 	.globl _TRAIN_CONTROL_15
                            436 	.globl _TRAIN_CONTROL_14
                            437 	.globl _TRAIN_CONTROL_13
                            438 	.globl _ESM_ERR_N_CNT_LOW_LANE
                            439 	.globl _ESM_POP_N_CNT_LOW_LANE
                            440 	.globl _TRAIN_CONTROL_12
                            441 	.globl _TRAIN_CONTROL_11
                            442 	.globl _TRAIN_CONTROL_10
                            443 	.globl _TRAIN_CONTROL_9
                            444 	.globl _TRAIN_CONTROL_8
                            445 	.globl _TRAIN_CONTROL_7
                            446 	.globl _TRAIN_CONTROL_6
                            447 	.globl _TRAIN_CONTROL_5
                            448 	.globl _TRAIN_CONTROL_4
                            449 	.globl _TRAIN_CONTROL_3
                            450 	.globl _ESM_ERR_POP_CNT_HIGH_LANE
                            451 	.globl _ESM_ERR_P_CNT_LOW_LANE
                            452 	.globl _ESM_POP_P_CNT_LOW_LANE
                            453 	.globl _CDS_CTRL_REG1
                            454 	.globl _CDS_CTRL_REG0
                            455 	.globl _DFE_CONTROL_11
                            456 	.globl _DFE_CONTROL_10
                            457 	.globl _DFE_CONTROL_9
                            458 	.globl _DFE_CONTROL_8
                            459 	.globl _DFE_CONTROL_7
                            460 	.globl _DFE_TEST_5
                            461 	.globl _DFE_TEST_4
                            462 	.globl _DFE_TEST_1
                            463 	.globl _DFE_TEST_0
                            464 	.globl _DFE_CONTROL_6
                            465 	.globl _TRAIN_PARA_3
                            466 	.globl _TRAIN_PARA_2
                            467 	.globl _TRAIN_PARA_1
                            468 	.globl _TRAIN_PARA_0
                            469 	.globl _DLL_CAL
                            470 	.globl _RPTA_CONFIG_1
                            471 	.globl _RPTA_CONFIG_0
                            472 	.globl _TRAIN_CONTROL_2
                            473 	.globl _TRAIN_CONTROL_1
                            474 	.globl _TRAIN_CONTROL_0
                            475 	.globl _DFE_CONTROL_5
                            476 	.globl _DFE_CONTROL_4
                            477 	.globl _DFE_CONTROL_3
                            478 	.globl _DFE_CONTROL_2
                            479 	.globl _DFE_CONTROL_1
                            480 	.globl _DFE_CONTROL_0
                            481 	.globl _TRX_TRAIN_IF_TIMERS_ENABLE_LANE
                            482 	.globl _TRX_TRAIN_IF_TIMERS2_LANE
                            483 	.globl _TRX_TRAIN_IF_TIMERS1_LANE
                            484 	.globl _PHY_LOCAL_VALUE_LANE
                            485 	.globl _PHY_REMOTE_CTRL_VALUE_LANE
                            486 	.globl _PHY_REMOTE_CTRL_COMMAND_LANE
                            487 	.globl _CAL_SAVE_DATA3_LANE
                            488 	.globl _CAL_SAVE_DATA2_LANE
                            489 	.globl _CAL_SAVE_DATA1_LANE
                            490 	.globl _CAL_CTRL4_LANE
                            491 	.globl _CAL_CTRL3_LANE
                            492 	.globl _CAL_CTRL2_LANE
                            493 	.globl _CAL_CTRL1_LANE
                            494 	.globl _LANE_MARGIN_REG0
                            495 	.globl _EOM_VLD_REG4
                            496 	.globl _EOM_REG0
                            497 	.globl _EOM_ERR_REG3
                            498 	.globl _EOM_ERR_REG2
                            499 	.globl _EOM_ERR_REG1
                            500 	.globl _EOM_ERR_REG0
                            501 	.globl _EOM_VLD_REG3
                            502 	.globl _EOM_VLD_REG2
                            503 	.globl _EOM_VLD_REG1
                            504 	.globl _EOM_VLD_REG0
                            505 	.globl _DFE_STATIC_LANE_REG6
                            506 	.globl _DFE_STATIC_LANE_REG5
                            507 	.globl _DFE_STATIC_LANE_REG4
                            508 	.globl _DFE_STATIC_LANE_REG3
                            509 	.globl _DFE_STATIC_LANE_REG1
                            510 	.globl _DFE_STATIC_LANE_REG0
                            511 	.globl _DFE_DCE_REG0
                            512 	.globl _CAL_OFST_REG2
                            513 	.globl _CAL_OFST_REG1
                            514 	.globl _CAL_OFST_REG0
                            515 	.globl _DFE_READ_ODD_2C_REG8
                            516 	.globl _DFE_READ_EVEN_2C_REG8
                            517 	.globl _DFE_READ_ODD_2C_REG7
                            518 	.globl _DFE_READ_ODD_2C_REG6
                            519 	.globl _DFE_READ_ODD_2C_REG5
                            520 	.globl _DFE_READ_ODD_2C_REG4
                            521 	.globl _DFE_READ_ODD_2C_REG3
                            522 	.globl _DFE_READ_ODD_2C_REG2
                            523 	.globl _DFE_READ_ODD_2C_REG1
                            524 	.globl _DFE_READ_ODD_2C_REG0
                            525 	.globl _DFE_READ_EVEN_2C_REG7
                            526 	.globl _DFE_READ_EVEN_2C_REG6
                            527 	.globl _DFE_READ_EVEN_2C_REG5
                            528 	.globl _DFE_READ_EVEN_2C_REG4
                            529 	.globl _DFE_READ_EVEN_2C_REG3
                            530 	.globl _DFE_READ_EVEN_2C_REG2
                            531 	.globl _DFE_READ_EVEN_2C_REG1
                            532 	.globl _DFE_READ_EVEN_2C_REG0
                            533 	.globl _DFE_READ_ODD_SM_REG8
                            534 	.globl _DFE_READ_EVEN_SM_REG8
                            535 	.globl _DFE_READ_ODD_SM_REG7
                            536 	.globl _DFE_READ_ODD_SM_REG6
                            537 	.globl _DFE_READ_ODD_SM_REG5
                            538 	.globl _DFE_READ_ODD_SM_REG4
                            539 	.globl _DFE_READ_ODD_SM_REG3
                            540 	.globl _DFE_READ_ODD_SM_REG2
                            541 	.globl _DFE_READ_ODD_SM_REG1
                            542 	.globl _DFE_READ_ODD_SM_REG0
                            543 	.globl _DFE_READ_EVEN_SM_REG7
                            544 	.globl _DFE_READ_EVEN_SM_REG6
                            545 	.globl _DFE_READ_EVEN_SM_REG5
                            546 	.globl _DFE_READ_EVEN_SM_REG4
                            547 	.globl _DFE_READ_EVEN_SM_REG3
                            548 	.globl _DFE_READ_EVEN_SM_REG2
                            549 	.globl _DFE_READ_EVEN_SM_REG1
                            550 	.globl _DFE_READ_EVEN_SM_REG0
                            551 	.globl _DFE_FEXT_ODD_REG7
                            552 	.globl _DFE_FEXT_ODD_REG6
                            553 	.globl _DFE_FEXT_ODD_REG5
                            554 	.globl _DFE_FEXT_ODD_REG4
                            555 	.globl _DFE_FEXT_ODD_REG3
                            556 	.globl _DFE_FEXT_ODD_REG2
                            557 	.globl _DFE_FEXT_ODD_REG1
                            558 	.globl _DFE_FEXT_ODD_REG0
                            559 	.globl _DFE_FEXT_EVEN_REG7
                            560 	.globl _DFE_FEXT_EVEN_REG6
                            561 	.globl _DFE_FEXT_EVEN_REG5
                            562 	.globl _DFE_FEXT_EVEN_REG4
                            563 	.globl _DFE_FEXT_EVEN_REG3
                            564 	.globl _DFE_FEXT_EVEN_REG2
                            565 	.globl _DFE_FEXT_EVEN_REG1
                            566 	.globl _DFE_FEXT_EVEN_REG0
                            567 	.globl _DFE_DC_ODD_REG8
                            568 	.globl _DFE_DC_EVEN_REG8
                            569 	.globl _DFE_FEN_ODD_REG
                            570 	.globl _DFE_FEN_EVEN_REG
                            571 	.globl _DFE_STEP_REG1
                            572 	.globl _DFE_STEP_REG0
                            573 	.globl _DFE_ANA_REG1
                            574 	.globl _DFE_ANA_REG0
                            575 	.globl _DFE_CTRL_REG4
                            576 	.globl _RX_EQ_CLK_CTRL
                            577 	.globl _DFE_CTRL_REG3
                            578 	.globl _DFE_CTRL_REG2
                            579 	.globl _DFE_CTRL_REG1
                            580 	.globl _DFE_CTRL_REG0
                            581 	.globl _PT_COUNTER2
                            582 	.globl _PT_COUNTER1
                            583 	.globl _PT_COUNTER0
                            584 	.globl _PT_USER_PATTERN2
                            585 	.globl _PT_USER_PATTERN1
                            586 	.globl _PT_USER_PATTERN0
                            587 	.globl _PT_CONTROL1
                            588 	.globl _PT_CONTROL0
                            589 	.globl _XDATA_MEM_CHECKSUM_LANE1
                            590 	.globl _XDATA_MEM_CHECKSUM_LANE0
                            591 	.globl _MEM_ECC_ERR_ADDRESS0
                            592 	.globl _MCU_COMMAND0
                            593 	.globl _MCU_INT_CONTROL_13
                            594 	.globl _MCU_WDT_LANE
                            595 	.globl _MCU_IRQ_ISR_LANE
                            596 	.globl _ANA_IF_DFEO_REG0
                            597 	.globl _ANA_IF_DFEE_REG0
                            598 	.globl _ANA_IF_TRX_REG0
                            599 	.globl _EXT_INT_CONTROL
                            600 	.globl _MCU_DEBUG_LANE
                            601 	.globl _MCU_DEBUG3_LANE
                            602 	.globl _MCU_DEBUG2_LANE
                            603 	.globl _MCU_DEBUG1_LANE
                            604 	.globl _MCU_DEBUG0_LANE
                            605 	.globl _MCU_TIMER_CTRL_7_LANE
                            606 	.globl _MCU_TIMER_CTRL_6_LANE
                            607 	.globl _MCU_TIMER_CTRL_5_LANE
                            608 	.globl _MCU_TIMER_CTRL_4_LANE
                            609 	.globl _MCU_TIMER_CTRL_3_LANE
                            610 	.globl _MCU_TIMER_CTRL_2_LANE
                            611 	.globl _MCU_TIMER_CTRL_1_LANE
                            612 	.globl _MCU_MEM_REG2_LANE
                            613 	.globl _MCU_MEM_REG1_LANE
                            614 	.globl _MCU_IRQ_MASK_LANE
                            615 	.globl _MCU_IRQ_LANE
                            616 	.globl _MCU_TIMER3_CONTROL
                            617 	.globl _MCU_TIMER2_CONTROL
                            618 	.globl _MCU_TIMER1_CONTROL
                            619 	.globl _MCU_TIMER0_CONTROL
                            620 	.globl _MCU_TIMER_CONTROL
                            621 	.globl _MCU_INT12_CONTROL
                            622 	.globl _MCU_INT11_CONTROL
                            623 	.globl _MCU_INT10_CONTROL
                            624 	.globl _MCU_INT9_CONTROL
                            625 	.globl _MCU_INT8_CONTROL
                            626 	.globl _MCU_INT7_CONTROL
                            627 	.globl _MCU_INT6_CONTROL
                            628 	.globl _MCU_INT5_CONTROL
                            629 	.globl _MCU_INT4_CONTROL
                            630 	.globl _MCU_INT3_CONTROL
                            631 	.globl _MCU_INT2_CONTROL
                            632 	.globl _MCU_INT1_CONTROL
                            633 	.globl _MCU_INT0_CONTROL
                            634 	.globl _MCU_STATUS3_LANE
                            635 	.globl _MCU_STATUS2_LANE
                            636 	.globl _MCU_STATUS1_LANE
                            637 	.globl _MCU_STATUS0_LANE
                            638 	.globl _LANE_SYSTEM0
                            639 	.globl _CACHE_DEBUG1
                            640 	.globl _CACHE_DEBUG0
                            641 	.globl _MCU_GPIO
                            642 	.globl _MCU_CONTROL_LANE
                            643 	.globl _LANE_32G_PRESET_CFG16_LANE
                            644 	.globl _LANE_32G_PRESET_CFG14_LANE
                            645 	.globl _LANE_32G_PRESET_CFG12_LANE
                            646 	.globl _LANE_32G_PRESET_CFG10_LANE
                            647 	.globl _LANE_32G_PRESET_CFG8_LANE
                            648 	.globl _LANE_32G_PRESET_CFG6_LANE
                            649 	.globl _LANE_32G_PRESET_CFG4_LANE
                            650 	.globl _LANE_32G_PRESET_CFG2_LANE
                            651 	.globl _LANE_32G_PRESET_CFG0_LANE
                            652 	.globl _LANE_EQ_32G_CFG0_LANE
                            653 	.globl _LANE_16G_PRESET_CFG16_LANE
                            654 	.globl _LANE_16G_PRESET_CFG14_LANE
                            655 	.globl _LANE_16G_PRESET_CFG12_LANE
                            656 	.globl _LANE_16G_PRESET_CFG10_LANE
                            657 	.globl _LANE_16G_PRESET_CFG8_LANE
                            658 	.globl _LANE_16G_PRESET_CFG6_LANE
                            659 	.globl _LANE_16G_PRESET_CFG4_LANE
                            660 	.globl _LANE_16G_PRESET_CFG2_LANE
                            661 	.globl _LANE_16G_PRESET_CFG0_LANE
                            662 	.globl _LANE_EQ_16G_CFG0_LANE
                            663 	.globl _LANE_REMOTE_SET_LANE
                            664 	.globl _LANE_COEFF_MAX0_LANE
                            665 	.globl _LANE_PRESET_CFG16_LANE
                            666 	.globl _LANE_PRESET_CFG14_LANE
                            667 	.globl _LANE_PRESET_CFG12_LANE
                            668 	.globl _LANE_PRESET_CFG10_LANE
                            669 	.globl _LANE_PRESET_CFG8_LANE
                            670 	.globl _LANE_PRESET_CFG6_LANE
                            671 	.globl _LANE_PRESET_CFG4_LANE
                            672 	.globl _LANE_PRESET_CFG2_LANE
                            673 	.globl _LANE_PRESET_CFG0_LANE
                            674 	.globl _LANE_EQ_CFG1_LANE
                            675 	.globl _LANE_EQ_CFG0_LANE
                            676 	.globl _LANE_USB_DP_CFG2_LANE
                            677 	.globl _LANE_USB_DP_CFG1_LANE
                            678 	.globl _LANE_DP_PIE8_CFG0_LANE
                            679 	.globl _LANE_CFG_STATUS3_LANE
                            680 	.globl _LANE_CFG4
                            681 	.globl _LANE_CFG2_LANE
                            682 	.globl _LANE_CFG_STATUS2_LANE
                            683 	.globl _LANE_STATUS0
                            684 	.globl _LANE_CFG0
                            685 	.globl _SQ_REG0
                            686 	.globl _DTL_REG3
                            687 	.globl _DTL_REG2
                            688 	.globl _DTL_REG1
                            689 	.globl _DTL_REG0
                            690 	.globl _RX_LANE_INTERRUPT_REG1
                            691 	.globl _RX_CALIBRATION_REG
                            692 	.globl _INPUT_RX_PIN_REG3_LANE
                            693 	.globl _RX_DATA_PATH_REG
                            694 	.globl _RX_LANE_INTERRUPT_MASK
                            695 	.globl _RX_LANE_INTERRUPT
                            696 	.globl _CDR_LOCK_REG
                            697 	.globl _FRAME_SYNC_DET_REG6
                            698 	.globl _FRAME_SYNC_DET_REG5
                            699 	.globl _FRAME_SYNC_DET_REG4
                            700 	.globl _FRAME_SYNC_DET_REG3
                            701 	.globl _FRAME_SYNC_DET_REG2
                            702 	.globl _FRAME_SYNC_DET_REG1
                            703 	.globl _FRAME_SYNC_DET_REG0
                            704 	.globl _CLKGEN_RX_LANE_REG1_LANE
                            705 	.globl _DIG_RX_RSVD_REG0
                            706 	.globl _SPD_CTRL_RX_LANE_REG1_LANE
                            707 	.globl _INPUT_RX_PIN_REG2_LANE
                            708 	.globl _INPUT_RX_PIN_REG1_LANE
                            709 	.globl _INPUT_RX_PIN_REG0_LANE
                            710 	.globl _RX_SYSTEM_LANE
                            711 	.globl _PM_CTRL_RX_LANE_REG1_LANE
                            712 	.globl _MON_TOP
                            713 	.globl _ANALOG_TX_REALTIME_REG_1
                            714 	.globl _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE
                            715 	.globl _PM_CTRL_INTERRUPT_ISR_REG1_LANE
                            716 	.globl __FIELDNAME__LANE
                            717 	.globl _INPUT_TX_PIN_REG5_LANE
                            718 	.globl _DIG_TX_RSVD_REG0
                            719 	.globl _TX_CALIBRATION_LANE
                            720 	.globl _INPUT_TX_PIN_REG4_LANE
                            721 	.globl _TX_SYSTEM_LANE
                            722 	.globl _SPD_CTRL_TX_LANE_REG1_LANE
                            723 	.globl _SPD_CTRL_INTERRUPT_REG2
                            724 	.globl _SPD_CTRL_INTERRUPT_REG1_LANE
                            725 	.globl _TX_SPEED_CONVERT_LANE
                            726 	.globl _CLKGEN_TX_LANE_REG1_LANE
                            727 	.globl _PM_CTRL_INTERRUPT_REG2
                            728 	.globl _PM_CTRL_INTERRUPT_REG1_LANE
                            729 	.globl _INPUT_TX_PIN_REG3_LANE
                            730 	.globl _INPUT_TX_PIN_REG2_LANE
                            731 	.globl _INPUT_TX_PIN_REG1_LANE
                            732 	.globl _INPUT_TX_PIN_REG0_LANE
                            733 	.globl _PM_CTRL_TX_LANE_REG2_LANE
                            734 	.globl _PM_CTRL_TX_LANE_REG1_LANE
                            735 	.globl _UPHY14_CMN_ANAREG_TOP_214
                            736 	.globl _UPHY14_CMN_ANAREG_TOP_213
                            737 	.globl _UPHY14_CMN_ANAREG_TOP_212
                            738 	.globl _UPHY14_CMN_ANAREG_TOP_211
                            739 	.globl _UPHY14_CMN_ANAREG_TOP_210
                            740 	.globl _UPHY14_CMN_ANAREG_TOP_209
                            741 	.globl _UPHY14_CMN_ANAREG_TOP_208
                            742 	.globl _UPHY14_CMN_ANAREG_TOP_207
                            743 	.globl _UPHY14_CMN_ANAREG_TOP_206
                            744 	.globl _UPHY14_CMN_ANAREG_TOP_205
                            745 	.globl _UPHY14_CMN_ANAREG_TOP_204
                            746 	.globl _UPHY14_CMN_ANAREG_TOP_203
                            747 	.globl _UPHY14_CMN_ANAREG_TOP_202
                            748 	.globl _UPHY14_CMN_ANAREG_TOP_201
                            749 	.globl _UPHY14_CMN_ANAREG_TOP_200
                            750 	.globl _UPHY14_CMN_ANAREG_TOP_199
                            751 	.globl _UPHY14_CMN_ANAREG_TOP_198
                            752 	.globl _UPHY14_CMN_ANAREG_TOP_197
                            753 	.globl _UPHY14_CMN_ANAREG_TOP_196
                            754 	.globl _UPHY14_CMN_ANAREG_TOP_195
                            755 	.globl _UPHY14_CMN_ANAREG_TOP_194
                            756 	.globl _UPHY14_CMN_ANAREG_TOP_193
                            757 	.globl _UPHY14_CMN_ANAREG_TOP_192
                            758 	.globl _UPHY14_CMN_ANAREG_TOP_191
                            759 	.globl _UPHY14_CMN_ANAREG_TOP_190
                            760 	.globl _UPHY14_CMN_ANAREG_TOP_189
                            761 	.globl _UPHY14_CMN_ANAREG_TOP_188
                            762 	.globl _UPHY14_CMN_ANAREG_TOP_187
                            763 	.globl _UPHY14_CMN_ANAREG_TOP_186
                            764 	.globl _UPHY14_CMN_ANAREG_TOP_185
                            765 	.globl _UPHY14_CMN_ANAREG_TOP_184
                            766 	.globl _UPHY14_CMN_ANAREG_TOP_183
                            767 	.globl _UPHY14_CMN_ANAREG_TOP_182
                            768 	.globl _UPHY14_CMN_ANAREG_TOP_181
                            769 	.globl _UPHY14_CMN_ANAREG_TOP_180
                            770 	.globl _UPHY14_CMN_ANAREG_TOP_179
                            771 	.globl _UPHY14_CMN_ANAREG_TOP_178
                            772 	.globl _UPHY14_CMN_ANAREG_TOP_177
                            773 	.globl _UPHY14_CMN_ANAREG_TOP_176
                            774 	.globl _UPHY14_CMN_ANAREG_TOP_175
                            775 	.globl _UPHY14_CMN_ANAREG_TOP_174
                            776 	.globl _UPHY14_CMN_ANAREG_TOP_173
                            777 	.globl _UPHY14_CMN_ANAREG_TOP_172
                            778 	.globl _UPHY14_CMN_ANAREG_TOP_171
                            779 	.globl _UPHY14_CMN_ANAREG_TOP_170
                            780 	.globl _UPHY14_CMN_ANAREG_TOP_169
                            781 	.globl _UPHY14_CMN_ANAREG_TOP_168
                            782 	.globl _UPHY14_CMN_ANAREG_TOP_167
                            783 	.globl _UPHY14_CMN_ANAREG_TOP_166
                            784 	.globl _UPHY14_CMN_ANAREG_TOP_165
                            785 	.globl _UPHY14_CMN_ANAREG_TOP_164
                            786 	.globl _UPHY14_CMN_ANAREG_TOP_163
                            787 	.globl _UPHY14_CMN_ANAREG_TOP_162
                            788 	.globl _UPHY14_CMN_ANAREG_TOP_161
                            789 	.globl _UPHY14_CMN_ANAREG_TOP_160
                            790 	.globl _UPHY14_CMN_ANAREG_TOP_159
                            791 	.globl _UPHY14_CMN_ANAREG_TOP_158
                            792 	.globl _UPHY14_CMN_ANAREG_TOP_157
                            793 	.globl _UPHY14_CMN_ANAREG_TOP_156
                            794 	.globl _UPHY14_CMN_ANAREG_TOP_155
                            795 	.globl _UPHY14_CMN_ANAREG_TOP_154
                            796 	.globl _UPHY14_CMN_ANAREG_TOP_153
                            797 	.globl _UPHY14_CMN_ANAREG_TOP_152
                            798 	.globl _UPHY14_CMN_ANAREG_TOP_151
                            799 	.globl _UPHY14_CMN_ANAREG_TOP_150
                            800 	.globl _UPHY14_CMN_ANAREG_TOP_149
                            801 	.globl _UPHY14_CMN_ANAREG_TOP_148
                            802 	.globl _UPHY14_CMN_ANAREG_TOP_147
                            803 	.globl _UPHY14_CMN_ANAREG_TOP_146
                            804 	.globl _UPHY14_CMN_ANAREG_TOP_145
                            805 	.globl _UPHY14_CMN_ANAREG_TOP_144
                            806 	.globl _UPHY14_CMN_ANAREG_TOP_143
                            807 	.globl _UPHY14_CMN_ANAREG_TOP_142
                            808 	.globl _UPHY14_CMN_ANAREG_TOP_141
                            809 	.globl _UPHY14_CMN_ANAREG_TOP_140
                            810 	.globl _UPHY14_CMN_ANAREG_TOP_139
                            811 	.globl _UPHY14_CMN_ANAREG_TOP_138
                            812 	.globl _UPHY14_CMN_ANAREG_TOP_137
                            813 	.globl _UPHY14_CMN_ANAREG_TOP_136
                            814 	.globl _UPHY14_CMN_ANAREG_TOP_135
                            815 	.globl _UPHY14_CMN_ANAREG_TOP_134
                            816 	.globl _UPHY14_CMN_ANAREG_TOP_133
                            817 	.globl _UPHY14_CMN_ANAREG_TOP_132
                            818 	.globl _UPHY14_CMN_ANAREG_TOP_131
                            819 	.globl _UPHY14_CMN_ANAREG_TOP_130
                            820 	.globl _UPHY14_CMN_ANAREG_TOP_129
                            821 	.globl _UPHY14_CMN_ANAREG_TOP_128
                            822 	.globl _ANA_DFEO_REG_0B
                            823 	.globl _ANA_DFEO_REG_0A
                            824 	.globl _ANA_DFEO_REG_09
                            825 	.globl _ANA_DFEO_REG_08
                            826 	.globl _ANA_DFEO_REG_07
                            827 	.globl _ANA_DFEO_REG_06
                            828 	.globl _ANA_DFEO_REG_05
                            829 	.globl _ANA_DFEO_REG_04
                            830 	.globl _ANA_DFEO_REG_03
                            831 	.globl _ANA_DFEO_REG_02
                            832 	.globl _ANA_DFEO_REG_01
                            833 	.globl _ANA_DFEO_REG_00
                            834 	.globl _ANA_DFEO_REG_27
                            835 	.globl _ANA_DFEO_REG_26
                            836 	.globl _ANA_DFEO_REG_25
                            837 	.globl _ANA_DFEO_REG_24
                            838 	.globl _ANA_DFEO_REG_23
                            839 	.globl _ANA_DFEO_REG_22
                            840 	.globl _ANA_DFEO_REG_21
                            841 	.globl _ANA_DFEO_REG_20
                            842 	.globl _ANA_DFEO_REG_1F
                            843 	.globl _ANA_DFEO_REG_1E
                            844 	.globl _ANA_DFEO_REG_1D
                            845 	.globl _ANA_DFEO_REG_1C
                            846 	.globl _ANA_DFEO_REG_1B
                            847 	.globl _ANA_DFEO_REG_1A
                            848 	.globl _ANA_DFEO_REG_19
                            849 	.globl _ANA_DFEO_REG_18
                            850 	.globl _ANA_DFEO_REG_17
                            851 	.globl _ANA_DFEO_REG_16
                            852 	.globl _ANA_DFEO_REG_15
                            853 	.globl _ANA_DFEO_REG_14
                            854 	.globl _ANA_DFEO_REG_13
                            855 	.globl _ANA_DFEO_REG_12
                            856 	.globl _ANA_DFEO_REG_11
                            857 	.globl _ANA_DFEO_REG_10
                            858 	.globl _ANA_DFEO_REG_0F
                            859 	.globl _ANA_DFEO_REG_0E
                            860 	.globl _ANA_DFEO_REG_0D
                            861 	.globl _ANA_DFEO_REG_0C
                            862 	.globl _ANA_DFEE_REG_1D
                            863 	.globl _ANA_DFEE_REG_1C
                            864 	.globl _ANA_DFEE_REG_1B
                            865 	.globl _ANA_DFEE_REG_1A
                            866 	.globl _ANA_DFEE_REG_19
                            867 	.globl _ANA_DFEE_REG_18
                            868 	.globl _ANA_DFEE_REG_17
                            869 	.globl _ANA_DFEE_REG_16
                            870 	.globl _ANA_DFEE_REG_15
                            871 	.globl _ANA_DFEE_REG_14
                            872 	.globl _ANA_DFEE_REG_13
                            873 	.globl _ANA_DFEE_REG_12
                            874 	.globl _ANA_DFEE_REG_11
                            875 	.globl _ANA_DFEE_REG_10
                            876 	.globl _ANA_DFEE_REG_0F
                            877 	.globl _ANA_DFEE_REG_0E
                            878 	.globl _ANA_DFEE_REG_0D
                            879 	.globl _ANA_DFEE_REG_0C
                            880 	.globl _ANA_DFEE_REG_0B
                            881 	.globl _ANA_DFEE_REG_0A
                            882 	.globl _ANA_DFEE_REG_09
                            883 	.globl _ANA_DFEE_REG_08
                            884 	.globl _ANA_DFEE_REG_07
                            885 	.globl _ANA_DFEE_REG_06
                            886 	.globl _ANA_DFEE_REG_05
                            887 	.globl _ANA_DFEE_REG_04
                            888 	.globl _ANA_DFEE_REG_03
                            889 	.globl _ANA_DFEE_REG_02
                            890 	.globl _ANA_DFEE_REG_01
                            891 	.globl _ANA_DFEE_REG_00
                            892 	.globl _ANA_DFEE_REG_27
                            893 	.globl _ANA_DFEE_REG_26
                            894 	.globl _ANA_DFEE_REG_25
                            895 	.globl _ANA_DFEE_REG_24
                            896 	.globl _ANA_DFEE_REG_23
                            897 	.globl _ANA_DFEE_REG_22
                            898 	.globl _ANA_DFEE_REG_21
                            899 	.globl _ANA_DFEE_REG_20
                            900 	.globl _ANA_DFEE_REG_1F
                            901 	.globl _ANA_DFEE_REG_1E
                            902 	.globl _UPHY14_TRX_ANAREG_BOT_32
                            903 	.globl _UPHY14_TRX_ANAREG_BOT_31
                            904 	.globl _UPHY14_TRX_ANAREG_BOT_30
                            905 	.globl _UPHY14_TRX_ANAREG_BOT_29
                            906 	.globl _UPHY14_TRX_ANAREG_BOT_28
                            907 	.globl _UPHY14_TRX_ANAREG_BOT_27
                            908 	.globl _UPHY14_TRX_ANAREG_BOT_26
                            909 	.globl _UPHY14_TRX_ANAREG_BOT_25
                            910 	.globl _UPHY14_TRX_ANAREG_BOT_24
                            911 	.globl _UPHY14_TRX_ANAREG_BOT_23
                            912 	.globl _UPHY14_TRX_ANAREG_BOT_22
                            913 	.globl _UPHY14_TRX_ANAREG_BOT_21
                            914 	.globl _UPHY14_TRX_ANAREG_BOT_20
                            915 	.globl _UPHY14_TRX_ANAREG_BOT_19
                            916 	.globl _UPHY14_TRX_ANAREG_BOT_18
                            917 	.globl _UPHY14_TRX_ANAREG_BOT_17
                            918 	.globl _UPHY14_TRX_ANAREG_BOT_16
                            919 	.globl _UPHY14_TRX_ANAREG_BOT_15
                            920 	.globl _UPHY14_TRX_ANAREG_BOT_14
                            921 	.globl _UPHY14_TRX_ANAREG_BOT_13
                            922 	.globl _UPHY14_TRX_ANAREG_BOT_12
                            923 	.globl _UPHY14_TRX_ANAREG_BOT_11
                            924 	.globl _UPHY14_TRX_ANAREG_BOT_10
                            925 	.globl _UPHY14_TRX_ANAREG_BOT_9
                            926 	.globl _UPHY14_TRX_ANAREG_BOT_8
                            927 	.globl _UPHY14_TRX_ANAREG_BOT_7
                            928 	.globl _UPHY14_TRX_ANAREG_BOT_6
                            929 	.globl _UPHY14_TRX_ANAREG_BOT_5
                            930 	.globl _UPHY14_TRX_ANAREG_BOT_4
                            931 	.globl _UPHY14_TRX_ANAREG_BOT_3
                            932 	.globl _UPHY14_TRX_ANAREG_BOT_2
                            933 	.globl _UPHY14_TRX_ANAREG_BOT_1
                            934 	.globl _UPHY14_TRX_ANAREG_BOT_0
                            935 	.globl _UPHY14_TRX_ANAREG_TOP_157
                            936 	.globl _UPHY14_TRX_ANAREG_TOP_156
                            937 	.globl _UPHY14_TRX_ANAREG_TOP_155
                            938 	.globl _UPHY14_TRX_ANAREG_TOP_154
                            939 	.globl _UPHY14_TRX_ANAREG_TOP_153
                            940 	.globl _UPHY14_TRX_ANAREG_TOP_152
                            941 	.globl _UPHY14_TRX_ANAREG_TOP_151
                            942 	.globl _UPHY14_TRX_ANAREG_TOP_150
                            943 	.globl _UPHY14_TRX_ANAREG_TOP_149
                            944 	.globl _UPHY14_TRX_ANAREG_TOP_148
                            945 	.globl _UPHY14_TRX_ANAREG_TOP_147
                            946 	.globl _UPHY14_TRX_ANAREG_TOP_146
                            947 	.globl _UPHY14_TRX_ANAREG_TOP_145
                            948 	.globl _UPHY14_TRX_ANAREG_TOP_144
                            949 	.globl _UPHY14_TRX_ANAREG_TOP_143
                            950 	.globl _UPHY14_TRX_ANAREG_TOP_142
                            951 	.globl _UPHY14_TRX_ANAREG_TOP_141
                            952 	.globl _UPHY14_TRX_ANAREG_TOP_140
                            953 	.globl _UPHY14_TRX_ANAREG_TOP_139
                            954 	.globl _UPHY14_TRX_ANAREG_TOP_138
                            955 	.globl _UPHY14_TRX_ANAREG_TOP_137
                            956 	.globl _UPHY14_TRX_ANAREG_TOP_136
                            957 	.globl _UPHY14_TRX_ANAREG_TOP_135
                            958 	.globl _UPHY14_TRX_ANAREG_TOP_134
                            959 	.globl _UPHY14_TRX_ANAREG_TOP_133
                            960 	.globl _UPHY14_TRX_ANAREG_TOP_132
                            961 	.globl _UPHY14_TRX_ANAREG_TOP_131
                            962 	.globl _UPHY14_TRX_ANAREG_TOP_130
                            963 	.globl _UPHY14_TRX_ANAREG_TOP_129
                            964 	.globl _UPHY14_TRX_ANAREG_TOP_128
                            965 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_143
                            966 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_142
                            967 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_141
                            968 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_140
                            969 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_139
                            970 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_138
                            971 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_137
                            972 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_136
                            973 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_135
                            974 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_134
                            975 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_133
                            976 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_132
                            977 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_131
                            978 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_130
                            979 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_129
                            980 	.globl _UPHY14_TRX_LANEPLL_ANAREG_TOP_128
                            981 	.globl _phase_control_func
                            982 	.globl _phase_control_func_0
                            983 	.globl _set_edge_dly
                            984 	.globl _cdr_phase_update
                            985 	.globl _move_eom_phase
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
                           2029 	.area CSEG    (CODE)
                           2030 ;------------------------------------------------------------
                           2031 ;Allocation info for local variables in function 'phase_control_func'
                           2032 ;------------------------------------------------------------
                           2033 ;------------------------------------------------------------
                           2034 ;	../../shared/src/ph_ctrl.c:22: void phase_control_func(void) {
                           2035 ;	-----------------------------------------
                           2036 ;	 function phase_control_func
                           2037 ;	-----------------------------------------
   2C17                    2038 _phase_control_func:
                    0002   2039 	ar2 = 0x02
                    0003   2040 	ar3 = 0x03
                    0004   2041 	ar4 = 0x04
                    0005   2042 	ar5 = 0x05
                    0006   2043 	ar6 = 0x06
                    0007   2044 	ar7 = 0x07
                    0000   2045 	ar0 = 0x00
                    0001   2046 	ar1 = 0x01
                           2047 ;	../../shared/src/ph_ctrl.c:23: phase_control_func_0(train.phase_offset_data, train.phase_offset_esm);
   2C17 90 66 62           2048 	mov	dptr,#(_train + 0x0022)
   2C1A E0                 2049 	movx	a,@dptr
   2C1B FA                 2050 	mov	r2,a
   2C1C 90 66 61           2051 	mov	dptr,#(_train + 0x0021)
   2C1F E0                 2052 	movx	a,@dptr
   2C20 FB                 2053 	mov	r3,a
   2C21 C0 02              2054 	push	ar2
   2C23 8B 82              2055 	mov	dpl,r3
   2C25 12 2C 2B           2056 	lcall	_phase_control_func_0
   2C28 15 81              2057 	dec	sp
   2C2A 22                 2058 	ret
                           2059 ;------------------------------------------------------------
                           2060 ;Allocation info for local variables in function 'phase_control_func_0'
                           2061 ;------------------------------------------------------------
                           2062 ;ph_esm                    Allocated to stack - offset -3
                           2063 ;ph_dat                    Allocated to registers r2 
                           2064 ;dat                       Allocated to stack - offset 1
                           2065 ;esm                       Allocated to stack - offset 2
                           2066 ;------------------------------------------------------------
                           2067 ;	../../shared/src/ph_ctrl.c:26: void phase_control_func_0(int8_t ph_dat, int8_t ph_esm) {
                           2068 ;	-----------------------------------------
                           2069 ;	 function phase_control_func_0
                           2070 ;	-----------------------------------------
   2C2B                    2071 _phase_control_func_0:
   2C2B C0 18              2072 	push	_bp
   2C2D 85 81 18           2073 	mov	_bp,sp
   2C30 05 81              2074 	inc	sp
   2C32 05 81              2075 	inc	sp
   2C34 AA 82              2076 	mov	r2,dpl
                           2077 ;	../../shared/src/ph_ctrl.c:30: if(lnx_FAST_DFE_TIMER_EN_LANE) return;
   2C36 90 60 4F           2078 	mov	dptr,#(_DFE_CONTROL_5 + 0x0003)
   2C39 E0                 2079 	movx	a,@dptr
   2C3A 30 E7 03           2080 	jnb	acc.7,00102$
   2C3D 02 2D C6           2081 	ljmp	00125$
   2C40                    2082 00102$:
                           2083 ;	../../shared/src/ph_ctrl.c:32: cur_phase_offset_data = ph_dat;
   2C40 90 67 97           2084 	mov	dptr,#_cur_phase_offset_data
   2C43 EA                 2085 	mov	a,r2
   2C44 F0                 2086 	movx	@dptr,a
                           2087 ;	../../shared/src/ph_ctrl.c:33: cur_phase_offset_esm = ph_esm;
   2C45 E5 18              2088 	mov	a,_bp
   2C47 24 FD              2089 	add	a,#0xfd
   2C49 F8                 2090 	mov	r0,a
   2C4A 86 03              2091 	mov	ar3,@r0
   2C4C 90 67 98           2092 	mov	dptr,#_cur_phase_offset_esm
   2C4F EB                 2093 	mov	a,r3
   2C50 F0                 2094 	movx	@dptr,a
                           2095 ;	../../shared/src/ph_ctrl.c:39: lnx_DLL_VDDA_TRACKING_ON_LANE = 0; 
   2C51 90 60 0A           2096 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0002)
   2C54 E0                 2097 	movx	a,@dptr
   2C55 54 DF              2098 	anl	a,#0xdf
   2C57 F0                 2099 	movx	@dptr,a
                           2100 ;	../../shared/src/ph_ctrl.c:41: if(ph_control_mode==0 ) {			
   2C58 90 66 F8           2101 	mov	dptr,#_ph_control_mode
   2C5B E0                 2102 	movx	a,@dptr
   2C5C FC                 2103 	mov	r4,a
   2C5D 70 27              2104 	jnz	00116$
                           2105 ;	../../shared/src/ph_ctrl.c:43: dat = cal_phase - ph_dat - ph_esm;
   2C5F 90 60 46           2106 	mov	dptr,#(_DFE_CONTROL_3 + 0x0002)
   2C62 E0                 2107 	movx	a,@dptr
   2C63 C3                 2108 	clr	c
   2C64 9A                 2109 	subb	a,r2
   2C65 C3                 2110 	clr	c
   2C66 9B                 2111 	subb	a,r3
   2C67 FD                 2112 	mov	r5,a
   2C68 A8 18              2113 	mov	r0,_bp
   2C6A 08                 2114 	inc	r0
   2C6B A6 05              2115 	mov	@r0,ar5
                           2116 ;	../../shared/src/ph_ctrl.c:48: esm = (int16_t)cal_eom_dpher - (int16_t)reg_EOM_DPHER_LANE_6_0;		
   2C6D 90 60 45           2117 	mov	dptr,#(_DFE_CONTROL_3 + 0x0001)
   2C70 E0                 2118 	movx	a,@dptr
   2C71 FE                 2119 	mov	r6,a
   2C72 90 00 28           2120 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_10
   2C75 E0                 2121 	movx	a,@dptr
   2C76 03                 2122 	rr	a
   2C77 54 7F              2123 	anl	a,#0x7f
   2C79 FF                 2124 	mov	r7,a
   2C7A C0 03              2125 	push	ar3
   2C7C EE                 2126 	mov	a,r6
   2C7D C3                 2127 	clr	c
   2C7E 9F                 2128 	subb	a,r7
   2C7F FE                 2129 	mov	r6,a
   2C80 FD                 2130 	mov	r5,a
   2C81 D0 03              2131 	pop	ar3
   2C83 02 2D 61           2132 	ljmp	00117$
   2C86                    2133 00116$:
                           2134 ;	../../shared/src/ph_ctrl.c:50: else if( ph_control_mode==1 ) {
   2C86 BC 01 6B           2135 	cjne	r4,#0x01,00113$
                           2136 ;	../../shared/src/ph_ctrl.c:53: if ( ( 0 == ( g_fw_flags & 1 ) ) && ( EOM_EN_D!=EOM_EN_S ) && ( do_phase_adapt==0 ) )
   2C89 90 67 A5           2137 	mov	dptr,#_g_fw_flags
   2C8C E0                 2138 	movx	a,@dptr
   2C8D FE                 2139 	mov	r6,a
   2C8E 53 06 01           2140 	anl	ar6,#0x01
   2C91 BE 00 30           2141 	cjne	r6,#0x00,00104$
   2C94 90 00 58           2142 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_22
   2C97 E0                 2143 	movx	a,@dptr
   2C98 C4                 2144 	swap	a
   2C99 03                 2145 	rr	a
   2C9A 54 01              2146 	anl	a,#0x01
   2C9C FE                 2147 	mov	r6,a
   2C9D 90 00 58           2148 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_22
   2CA0 E0                 2149 	movx	a,@dptr
   2CA1 23                 2150 	rl	a
   2CA2 23                 2151 	rl	a
   2CA3 54 01              2152 	anl	a,#0x01
   2CA5 FF                 2153 	mov	r7,a
   2CA6 EE                 2154 	mov	a,r6
   2CA7 B5 07 02           2155 	cjne	a,ar7,00144$
   2CAA 80 18              2156 	sjmp	00104$
   2CAC                    2157 00144$:
   2CAC 90 67 15           2158 	mov	dptr,#_do_phase_adapt
   2CAF E0                 2159 	movx	a,@dptr
   2CB0 FE                 2160 	mov	r6,a
   2CB1 70 11              2161 	jnz	00104$
                           2162 ;	../../shared/src/ph_ctrl.c:54: eom_ui_align();
   2CB3 C0 02              2163 	push	ar2
   2CB5 C0 03              2164 	push	ar3
   2CB7 78 25              2165 	mov	r0,#_EOM_clock_analog_align
   2CB9 79 B3              2166 	mov	r1,#(_EOM_clock_analog_align >> 8)
   2CBB 7A 01              2167 	mov	r2,#(_EOM_clock_analog_align >> 16)
   2CBD 12 00 B3           2168 	lcall	__sdcc_banked_call
   2CC0 D0 03              2169 	pop	ar3
   2CC2 D0 02              2170 	pop	ar2
   2CC4                    2171 00104$:
                           2172 ;	../../shared/src/ph_ctrl.c:56: dat = cal_phase - ph_dat;
   2CC4 90 60 46           2173 	mov	dptr,#(_DFE_CONTROL_3 + 0x0002)
   2CC7 E0                 2174 	movx	a,@dptr
   2CC8 C3                 2175 	clr	c
   2CC9 9A                 2176 	subb	a,r2
   2CCA FE                 2177 	mov	r6,a
   2CCB A8 18              2178 	mov	r0,_bp
   2CCD 08                 2179 	inc	r0
   2CCE A6 06              2180 	mov	@r0,ar6
                           2181 ;	../../shared/src/ph_ctrl.c:66: esm = (int16_t)(cal_eom_dpher - ph_esm) - (int16_t)reg_EOM_DPHER_LANE_6_0;
   2CD0 90 60 45           2182 	mov	dptr,#(_DFE_CONTROL_3 + 0x0001)
   2CD3 E0                 2183 	movx	a,@dptr
   2CD4 FE                 2184 	mov	r6,a
   2CD5 C0 02              2185 	push	ar2
   2CD7 EB                 2186 	mov	a,r3
   2CD8 FF                 2187 	mov	r7,a
   2CD9 33                 2188 	rlc	a
   2CDA 95 E0              2189 	subb	a,acc
   2CDC EE                 2190 	mov	a,r6
   2CDD C3                 2191 	clr	c
   2CDE 9F                 2192 	subb	a,r7
   2CDF FE                 2193 	mov	r6,a
   2CE0 90 00 28           2194 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_10
   2CE3 E0                 2195 	movx	a,@dptr
   2CE4 03                 2196 	rr	a
   2CE5 54 7F              2197 	anl	a,#0x7f
   2CE7 FA                 2198 	mov	r2,a
   2CE8 7F 00              2199 	mov	r7,#0x00
   2CEA EE                 2200 	mov	a,r6
   2CEB C3                 2201 	clr	c
   2CEC 9A                 2202 	subb	a,r2
   2CED FE                 2203 	mov	r6,a
   2CEE FD                 2204 	mov	r5,a
   2CEF D0 02              2205 	pop	ar2
   2CF1 02 2D 61           2206 	ljmp	00117$
   2CF4                    2207 00113$:
                           2208 ;	../../shared/src/ph_ctrl.c:70: else if( ph_control_mode==2 ) {
   2CF4 BC 02 32           2209 	cjne	r4,#0x02,00110$
                           2210 ;	../../shared/src/ph_ctrl.c:77: dat = cal_phase;
   2CF7 90 60 46           2211 	mov	dptr,#(_DFE_CONTROL_3 + 0x0002)
   2CFA E0                 2212 	movx	a,@dptr
   2CFB FE                 2213 	mov	r6,a
   2CFC A8 18              2214 	mov	r0,_bp
   2CFE 08                 2215 	inc	r0
   2CFF A6 06              2216 	mov	@r0,ar6
                           2217 ;	../../shared/src/ph_ctrl.c:83: esm =  (int16_t)(cal_eom_dpher - ph_dat - ph_esm) - (int16_t)reg_EOM_DPHER_LANE_6_0;
   2D01 90 60 45           2218 	mov	dptr,#(_DFE_CONTROL_3 + 0x0001)
   2D04 E0                 2219 	movx	a,@dptr
   2D05 FE                 2220 	mov	r6,a
   2D06 EA                 2221 	mov	a,r2
   2D07 FF                 2222 	mov	r7,a
   2D08 33                 2223 	rlc	a
   2D09 95 E0              2224 	subb	a,acc
   2D0B EE                 2225 	mov	a,r6
   2D0C C3                 2226 	clr	c
   2D0D 9F                 2227 	subb	a,r7
   2D0E FE                 2228 	mov	r6,a
   2D0F EB                 2229 	mov	a,r3
   2D10 FD                 2230 	mov	r5,a
   2D11 33                 2231 	rlc	a
   2D12 95 E0              2232 	subb	a,acc
   2D14 EE                 2233 	mov	a,r6
   2D15 C3                 2234 	clr	c
   2D16 9D                 2235 	subb	a,r5
   2D17 FE                 2236 	mov	r6,a
   2D18 90 00 28           2237 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_10
   2D1B E0                 2238 	movx	a,@dptr
   2D1C 03                 2239 	rr	a
   2D1D 54 7F              2240 	anl	a,#0x7f
   2D1F FD                 2241 	mov	r5,a
   2D20 7F 00              2242 	mov	r7,#0x00
   2D22 EE                 2243 	mov	a,r6
   2D23 C3                 2244 	clr	c
   2D24 9D                 2245 	subb	a,r5
   2D25 FE                 2246 	mov	r6,a
   2D26 FD                 2247 	mov	r5,a
   2D27 80 38              2248 	sjmp	00117$
   2D29                    2249 00110$:
                           2250 ;	../../shared/src/ph_ctrl.c:86: else if( ph_control_mode==3 ){				
   2D29 BC 03 35           2251 	cjne	r4,#0x03,00117$
                           2252 ;	../../shared/src/ph_ctrl.c:88: dat = cal_phase;
   2D2C 90 60 46           2253 	mov	dptr,#(_DFE_CONTROL_3 + 0x0002)
   2D2F E0                 2254 	movx	a,@dptr
   2D30 FC                 2255 	mov	r4,a
   2D31 A8 18              2256 	mov	r0,_bp
   2D33 08                 2257 	inc	r0
   2D34 A6 04              2258 	mov	@r0,ar4
                           2259 ;	../../shared/src/ph_ctrl.c:94: esm = (int16_t)(cal_eom_dpher +(half_ui_code + ph_dat + ph_esm))- (int16_t)reg_EOM_DPHER_LANE_6_0;
   2D36 90 60 45           2260 	mov	dptr,#(_DFE_CONTROL_3 + 0x0001)
   2D39 E0                 2261 	movx	a,@dptr
   2D3A FC                 2262 	mov	r4,a
   2D3B 90 67 94           2263 	mov	dptr,#_half_ui_code
   2D3E E0                 2264 	movx	a,@dptr
   2D3F FD                 2265 	mov	r5,a
   2D40 EA                 2266 	mov	a,r2
   2D41 FE                 2267 	mov	r6,a
   2D42 33                 2268 	rlc	a
   2D43 95 E0              2269 	subb	a,acc
   2D45 EE                 2270 	mov	a,r6
   2D46 2D                 2271 	add	a,r5
   2D47 FD                 2272 	mov	r5,a
   2D48 EB                 2273 	mov	a,r3
   2D49 FE                 2274 	mov	r6,a
   2D4A 33                 2275 	rlc	a
   2D4B 95 E0              2276 	subb	a,acc
   2D4D FF                 2277 	mov	r7,a
   2D4E EE                 2278 	mov	a,r6
   2D4F 2D                 2279 	add	a,r5
   2D50 2C                 2280 	add	a,r4
   2D51 FC                 2281 	mov	r4,a
   2D52 90 00 28           2282 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_10
   2D55 E0                 2283 	movx	a,@dptr
   2D56 03                 2284 	rr	a
   2D57 54 7F              2285 	anl	a,#0x7f
   2D59 FD                 2286 	mov	r5,a
   2D5A 7E 00              2287 	mov	r6,#0x00
   2D5C EC                 2288 	mov	a,r4
   2D5D C3                 2289 	clr	c
   2D5E 9D                 2290 	subb	a,r5
   2D5F FC                 2291 	mov	r4,a
   2D60 FD                 2292 	mov	r5,a
   2D61                    2293 00117$:
                           2294 ;	../../shared/src/ph_ctrl.c:98: if(dat>=64) dat-=64;
   2D61 A8 18              2295 	mov	r0,_bp
   2D63 08                 2296 	inc	r0
   2D64 C3                 2297 	clr	c
   2D65 E6                 2298 	mov	a,@r0
   2D66 64 80              2299 	xrl	a,#0x80
   2D68 94 C0              2300 	subb	a,#0xc0
   2D6A 40 07              2301 	jc	00119$
   2D6C A8 18              2302 	mov	r0,_bp
   2D6E 08                 2303 	inc	r0
   2D6F E6                 2304 	mov	a,@r0
   2D70 24 C0              2305 	add	a,#0xc0
   2D72 F6                 2306 	mov	@r0,a
   2D73                    2307 00119$:
                           2308 ;	../../shared/src/ph_ctrl.c:99: cdr_phase_update(dat);
   2D73 A8 18              2309 	mov	r0,_bp
   2D75 08                 2310 	inc	r0
   2D76 86 82              2311 	mov	dpl,@r0
   2D78 C0 02              2312 	push	ar2
   2D7A C0 03              2313 	push	ar3
   2D7C C0 05              2314 	push	ar5
   2D7E 12 2E FE           2315 	lcall	_cdr_phase_update
   2D81 D0 05              2316 	pop	ar5
   2D83 D0 03              2317 	pop	ar3
   2D85 D0 02              2318 	pop	ar2
                           2319 ;	../../shared/src/ph_ctrl.c:100: if(esm>=70) esm -= 128;
   2D87 C3                 2320 	clr	c
   2D88 ED                 2321 	mov	a,r5
   2D89 64 80              2322 	xrl	a,#0x80
   2D8B 94 C6              2323 	subb	a,#0xc6
   2D8D 40 06              2324 	jc	00123$
   2D8F ED                 2325 	mov	a,r5
   2D90 24 80              2326 	add	a,#0x80
   2D92 FD                 2327 	mov	r5,a
   2D93 80 0C              2328 	sjmp	00124$
   2D95                    2329 00123$:
                           2330 ;	../../shared/src/ph_ctrl.c:101: else if(esm < -70) esm += 128;
   2D95 C3                 2331 	clr	c
   2D96 ED                 2332 	mov	a,r5
   2D97 64 80              2333 	xrl	a,#0x80
   2D99 94 3A              2334 	subb	a,#0x3a
   2D9B 50 04              2335 	jnc	00124$
   2D9D 74 80              2336 	mov	a,#0x80
   2D9F 2D                 2337 	add	a,r5
   2DA0 FD                 2338 	mov	r5,a
   2DA1                    2339 00124$:
                           2340 ;	../../shared/src/ph_ctrl.c:102: move_eom_phase(esm);
   2DA1 ED                 2341 	mov	a,r5
   2DA2 FC                 2342 	mov	r4,a
   2DA3 33                 2343 	rlc	a
   2DA4 95 E0              2344 	subb	a,acc
   2DA6 FD                 2345 	mov	r5,a
   2DA7 8C 82              2346 	mov	dpl,r4
   2DA9 8D 83              2347 	mov	dph,r5
   2DAB C0 02              2348 	push	ar2
   2DAD C0 03              2349 	push	ar3
   2DAF 12 2F BA           2350 	lcall	_move_eom_phase
   2DB2 D0 03              2351 	pop	ar3
   2DB4 D0 02              2352 	pop	ar2
                           2353 ;	../../shared/src/ph_ctrl.c:105: set_edge_dly(ph_dat, ph_esm);
   2DB6 C0 03              2354 	push	ar3
   2DB8 8A 82              2355 	mov	dpl,r2
   2DBA 12 2D CC           2356 	lcall	_set_edge_dly
   2DBD 15 81              2357 	dec	sp
                           2358 ;	../../shared/src/ph_ctrl.c:112: lnx_DLL_VDDA_TRACKING_ON_LANE = 1; 
   2DBF 90 60 0A           2359 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0002)
   2DC2 E0                 2360 	movx	a,@dptr
   2DC3 44 20              2361 	orl	a,#0x20
   2DC5 F0                 2362 	movx	@dptr,a
   2DC6                    2363 00125$:
   2DC6 85 18 81           2364 	mov	sp,_bp
   2DC9 D0 18              2365 	pop	_bp
   2DCB 22                 2366 	ret
                           2367 ;------------------------------------------------------------
                           2368 ;Allocation info for local variables in function 'set_edge_dly'
                           2369 ;------------------------------------------------------------
                           2370 ;ph_esm                    Allocated to stack - offset -3
                           2371 ;ph_dat                    Allocated to registers r2 
                           2372 ;eom_ph_os                 Allocated to registers r3 
                           2373 ;------------------------------------------------------------
                           2374 ;	../../shared/src/ph_ctrl.c:145: void set_edge_dly(int8_t ph_dat, int8_t ph_esm)  {
                           2375 ;	-----------------------------------------
                           2376 ;	 function set_edge_dly
                           2377 ;	-----------------------------------------
   2DCC                    2378 _set_edge_dly:
   2DCC C0 18              2379 	push	_bp
   2DCE 85 81 18           2380 	mov	_bp,sp
   2DD1 AA 82              2381 	mov	r2,dpl
                           2382 ;	../../shared/src/ph_ctrl.c:148: switch(ph_control_mode)
   2DD3 90 66 F8           2383 	mov	dptr,#_ph_control_mode
   2DD6 E0                 2384 	movx	a,@dptr
   2DD7 FB                 2385 	mov	r3,a
   2DD8 74 03              2386 	mov	a,#0x03
   2DDA B5 03 00           2387 	cjne	a,ar3,00137$
   2DDD                    2388 00137$:
   2DDD 50 03              2389 	jnc	00138$
   2DDF 02 2E FB           2390 	ljmp	00127$
   2DE2                    2391 00138$:
   2DE2 EB                 2392 	mov	a,r3
   2DE3 2B                 2393 	add	a,r3
   2DE4 2B                 2394 	add	a,r3
   2DE5 90 2D E9           2395 	mov	dptr,#00139$
   2DE8 73                 2396 	jmp	@a+dptr
   2DE9                    2397 00139$:
   2DE9 02 2D F5           2398 	ljmp	00101$
   2DEC 02 2D F5           2399 	ljmp	00102$
   2DEF 02 2E 20           2400 	ljmp	00106$
   2DF2 02 2E 8C           2401 	ljmp	00116$
                           2402 ;	../../shared/src/ph_ctrl.c:150: case 0: 
   2DF5                    2403 00101$:
                           2404 ;	../../shared/src/ph_ctrl.c:151: case 1: 
   2DF5                    2405 00102$:
                           2406 ;	../../shared/src/ph_ctrl.c:152: if( reg_ALIGN90_REF_LANE_5_0 > 34 )
   2DF5 90 00 38           2407 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_14
   2DF8 E0                 2408 	movx	a,@dptr
   2DF9 03                 2409 	rr	a
   2DFA 03                 2410 	rr	a
   2DFB 54 3F              2411 	anl	a,#0x3f
   2DFD FB                 2412 	mov	r3,a
   2DFE C3                 2413 	clr	c
   2DFF 74 A2              2414 	mov	a,#(0x22 ^ 0x80)
   2E01 8B F0              2415 	mov	b,r3
   2E03 63 F0 80           2416 	xrl	b,#0x80
   2E06 95 F0              2417 	subb	a,b
   2E08 50 0A              2418 	jnc	00104$
                           2419 ;	../../shared/src/ph_ctrl.c:153: reg_SEL_EDGE_DLY_LANE_1_0 = 0;
   2E0A 90 02 24           2420 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_137
   2E0D E0                 2421 	movx	a,@dptr
   2E0E 54 F3              2422 	anl	a,#0xf3
   2E10 F0                 2423 	movx	@dptr,a
   2E11 02 2E FB           2424 	ljmp	00127$
   2E14                    2425 00104$:
                           2426 ;	../../shared/src/ph_ctrl.c:155: reg_SEL_EDGE_DLY_LANE_1_0 = 1;  
   2E14 90 02 24           2427 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_137
   2E17 E0                 2428 	movx	a,@dptr
   2E18 54 F3              2429 	anl	a,#0xf3
   2E1A 44 04              2430 	orl	a,#0x04
   2E1C F0                 2431 	movx	@dptr,a
                           2432 ;	../../shared/src/ph_ctrl.c:156: break;
   2E1D 02 2E FB           2433 	ljmp	00127$
                           2434 ;	../../shared/src/ph_ctrl.c:157: case 2: 
   2E20                    2435 00106$:
                           2436 ;	../../shared/src/ph_ctrl.c:158: eom_ph_os = (int8_t)ph_dat + (int8_t)ph_esm;
   2E20 E5 18              2437 	mov	a,_bp
   2E22 24 FD              2438 	add	a,#0xfd
   2E24 F8                 2439 	mov	r0,a
   2E25 E6                 2440 	mov	a,@r0
   2E26 2A                 2441 	add	a,r2
   2E27 FB                 2442 	mov	r3,a
                           2443 ;	../../shared/src/ph_ctrl.c:159: if( eom_ph_os < sel_sdge_dly_tb2[0])  reg_SEL_EDGE_DLY_LANE_1_0 = 0;
   2E28 90 30 44           2444 	mov	dptr,#_sel_sdge_dly_tb2
   2E2B E4                 2445 	clr	a
   2E2C 93                 2446 	movc	a,@a+dptr
   2E2D FC                 2447 	mov	r4,a
   2E2E C3                 2448 	clr	c
   2E2F EB                 2449 	mov	a,r3
   2E30 64 80              2450 	xrl	a,#0x80
   2E32 8C F0              2451 	mov	b,r4
   2E34 63 F0 80           2452 	xrl	b,#0x80
   2E37 95 F0              2453 	subb	a,b
   2E39 50 0A              2454 	jnc	00114$
   2E3B 90 02 24           2455 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_137
   2E3E E0                 2456 	movx	a,@dptr
   2E3F 54 F3              2457 	anl	a,#0xf3
   2E41 F0                 2458 	movx	@dptr,a
   2E42 02 2E FB           2459 	ljmp	00127$
   2E45                    2460 00114$:
                           2461 ;	../../shared/src/ph_ctrl.c:160: else if(eom_ph_os < sel_sdge_dly_tb2[1])  reg_SEL_EDGE_DLY_LANE_1_0 = 1;
   2E45 90 30 45           2462 	mov	dptr,#(_sel_sdge_dly_tb2 + 0x0001)
   2E48 E4                 2463 	clr	a
   2E49 93                 2464 	movc	a,@a+dptr
   2E4A FC                 2465 	mov	r4,a
   2E4B C3                 2466 	clr	c
   2E4C EB                 2467 	mov	a,r3
   2E4D 64 80              2468 	xrl	a,#0x80
   2E4F 8C F0              2469 	mov	b,r4
   2E51 63 F0 80           2470 	xrl	b,#0x80
   2E54 95 F0              2471 	subb	a,b
   2E56 50 0C              2472 	jnc	00111$
   2E58 90 02 24           2473 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_137
   2E5B E0                 2474 	movx	a,@dptr
   2E5C 54 F3              2475 	anl	a,#0xf3
   2E5E 44 04              2476 	orl	a,#0x04
   2E60 F0                 2477 	movx	@dptr,a
   2E61 02 2E FB           2478 	ljmp	00127$
   2E64                    2479 00111$:
                           2480 ;	../../shared/src/ph_ctrl.c:161: else if(eom_ph_os < sel_sdge_dly_tb2[2])  reg_SEL_EDGE_DLY_LANE_1_0 = 2;
   2E64 90 30 46           2481 	mov	dptr,#(_sel_sdge_dly_tb2 + 0x0002)
   2E67 E4                 2482 	clr	a
   2E68 93                 2483 	movc	a,@a+dptr
   2E69 FC                 2484 	mov	r4,a
   2E6A C3                 2485 	clr	c
   2E6B EB                 2486 	mov	a,r3
   2E6C 64 80              2487 	xrl	a,#0x80
   2E6E 8C F0              2488 	mov	b,r4
   2E70 63 F0 80           2489 	xrl	b,#0x80
   2E73 95 F0              2490 	subb	a,b
   2E75 50 0C              2491 	jnc	00108$
   2E77 90 02 24           2492 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_137
   2E7A E0                 2493 	movx	a,@dptr
   2E7B 54 F3              2494 	anl	a,#0xf3
   2E7D 44 08              2495 	orl	a,#0x08
   2E7F F0                 2496 	movx	@dptr,a
   2E80 02 2E FB           2497 	ljmp	00127$
   2E83                    2498 00108$:
                           2499 ;	../../shared/src/ph_ctrl.c:162: else  reg_SEL_EDGE_DLY_LANE_1_0 = 3;
   2E83 90 02 24           2500 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_137
   2E86 E0                 2501 	movx	a,@dptr
   2E87 44 0C              2502 	orl	a,#0x0c
   2E89 F0                 2503 	movx	@dptr,a
                           2504 ;	../../shared/src/ph_ctrl.c:163: break;
                           2505 ;	../../shared/src/ph_ctrl.c:164: case 3: 
   2E8A 80 6F              2506 	sjmp	00127$
   2E8C                    2507 00116$:
                           2508 ;	../../shared/src/ph_ctrl.c:165: eom_ph_os = tag_CDR_HALF_UI_PI_CODE + (int8_t)ph_dat + (int8_t)ph_esm;
   2E8C 90 67 94           2509 	mov	dptr,#_half_ui_code
   2E8F E0                 2510 	movx	a,@dptr
   2E90 FC                 2511 	mov	r4,a
   2E91 EA                 2512 	mov	a,r2
   2E92 2C                 2513 	add	a,r4
   2E93 FA                 2514 	mov	r2,a
   2E94 E5 18              2515 	mov	a,_bp
   2E96 24 FD              2516 	add	a,#0xfd
   2E98 F8                 2517 	mov	r0,a
   2E99 E6                 2518 	mov	a,@r0
   2E9A 2A                 2519 	add	a,r2
   2E9B FB                 2520 	mov	r3,a
                           2521 ;	../../shared/src/ph_ctrl.c:166: if( eom_ph_os < sel_sdge_dly_tb3[0])  reg_SEL_EDGE_DLY_LANE_1_0 = 0;
   2E9C 90 30 47           2522 	mov	dptr,#_sel_sdge_dly_tb3
   2E9F E4                 2523 	clr	a
   2EA0 93                 2524 	movc	a,@a+dptr
   2EA1 FA                 2525 	mov	r2,a
   2EA2 C3                 2526 	clr	c
   2EA3 EB                 2527 	mov	a,r3
   2EA4 64 80              2528 	xrl	a,#0x80
   2EA6 8A F0              2529 	mov	b,r2
   2EA8 63 F0 80           2530 	xrl	b,#0x80
   2EAB 95 F0              2531 	subb	a,b
   2EAD 50 09              2532 	jnc	00124$
   2EAF 90 02 24           2533 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_137
   2EB2 E0                 2534 	movx	a,@dptr
   2EB3 54 F3              2535 	anl	a,#0xf3
   2EB5 F0                 2536 	movx	@dptr,a
   2EB6 80 43              2537 	sjmp	00127$
   2EB8                    2538 00124$:
                           2539 ;	../../shared/src/ph_ctrl.c:167: else if(eom_ph_os < sel_sdge_dly_tb3[1])  reg_SEL_EDGE_DLY_LANE_1_0 = 1;
   2EB8 90 30 48           2540 	mov	dptr,#(_sel_sdge_dly_tb3 + 0x0001)
   2EBB E4                 2541 	clr	a
   2EBC 93                 2542 	movc	a,@a+dptr
   2EBD FA                 2543 	mov	r2,a
   2EBE C3                 2544 	clr	c
   2EBF EB                 2545 	mov	a,r3
   2EC0 64 80              2546 	xrl	a,#0x80
   2EC2 8A F0              2547 	mov	b,r2
   2EC4 63 F0 80           2548 	xrl	b,#0x80
   2EC7 95 F0              2549 	subb	a,b
   2EC9 50 0B              2550 	jnc	00121$
   2ECB 90 02 24           2551 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_137
   2ECE E0                 2552 	movx	a,@dptr
   2ECF 54 F3              2553 	anl	a,#0xf3
   2ED1 44 04              2554 	orl	a,#0x04
   2ED3 F0                 2555 	movx	@dptr,a
   2ED4 80 25              2556 	sjmp	00127$
   2ED6                    2557 00121$:
                           2558 ;	../../shared/src/ph_ctrl.c:168: else if(eom_ph_os < sel_sdge_dly_tb3[2])  reg_SEL_EDGE_DLY_LANE_1_0 = 2;
   2ED6 90 30 49           2559 	mov	dptr,#(_sel_sdge_dly_tb3 + 0x0002)
   2ED9 E4                 2560 	clr	a
   2EDA 93                 2561 	movc	a,@a+dptr
   2EDB FA                 2562 	mov	r2,a
   2EDC C3                 2563 	clr	c
   2EDD EB                 2564 	mov	a,r3
   2EDE 64 80              2565 	xrl	a,#0x80
   2EE0 8A F0              2566 	mov	b,r2
   2EE2 63 F0 80           2567 	xrl	b,#0x80
   2EE5 95 F0              2568 	subb	a,b
   2EE7 50 0B              2569 	jnc	00118$
   2EE9 90 02 24           2570 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_137
   2EEC E0                 2571 	movx	a,@dptr
   2EED 54 F3              2572 	anl	a,#0xf3
   2EEF 44 08              2573 	orl	a,#0x08
   2EF1 F0                 2574 	movx	@dptr,a
   2EF2 80 07              2575 	sjmp	00127$
   2EF4                    2576 00118$:
                           2577 ;	../../shared/src/ph_ctrl.c:169: else  reg_SEL_EDGE_DLY_LANE_1_0 = 3;
   2EF4 90 02 24           2578 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_137
   2EF7 E0                 2579 	movx	a,@dptr
   2EF8 44 0C              2580 	orl	a,#0x0c
   2EFA F0                 2581 	movx	@dptr,a
                           2582 ;	../../shared/src/ph_ctrl.c:171: }
   2EFB                    2583 00127$:
   2EFB D0 18              2584 	pop	_bp
   2EFD 22                 2585 	ret
                           2586 ;------------------------------------------------------------
                           2587 ;Allocation info for local variables in function 'cdr_phase_update'
                           2588 ;------------------------------------------------------------
                           2589 ;new_phase_os              Allocated to registers r2 
                           2590 ;ph_os_tmp                 Allocated to registers r3 
                           2591 ;sloc0                     Allocated to stack - offset 1
                           2592 ;------------------------------------------------------------
                           2593 ;	../../shared/src/ph_ctrl.c:188: void cdr_phase_update(int8_t new_phase_os)  {
                           2594 ;	-----------------------------------------
                           2595 ;	 function cdr_phase_update
                           2596 ;	-----------------------------------------
   2EFE                    2597 _cdr_phase_update:
   2EFE C0 18              2598 	push	_bp
   2F00 85 81 18           2599 	mov	_bp,sp
   2F03 05 81              2600 	inc	sp
   2F05 05 81              2601 	inc	sp
   2F07 AA 82              2602 	mov	r2,dpl
                           2603 ;	../../shared/src/ph_ctrl.c:191: ph_os_tmp = (int8_t)reg_ALIGN90_REF_LANE_5_0;
   2F09 90 00 38           2604 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_14
   2F0C E0                 2605 	movx	a,@dptr
   2F0D 03                 2606 	rr	a
   2F0E 03                 2607 	rr	a
   2F0F 54 3F              2608 	anl	a,#0x3f
   2F11 FB                 2609 	mov	r3,a
                           2610 ;	../../shared/src/ph_ctrl.c:192: new_phase_os = clamp( new_phase_os, tag_CDR_PHASE_MAX, tag_CDR_PHASE_MIN);
   2F12 C0 03              2611 	push	ar3
   2F14 74 0C              2612 	mov	a,#0x0C
   2F16 C0 E0              2613 	push	acc
   2F18 74 3A              2614 	mov	a,#0x3A
   2F1A C0 E0              2615 	push	acc
   2F1C 8A 82              2616 	mov	dpl,r2
   2F1E 78 64              2617 	mov	r0,#_clamp
   2F20 79 C0              2618 	mov	r1,#(_clamp >> 8)
   2F22 7A 02              2619 	mov	r2,#(_clamp >> 16)
   2F24 12 00 B3           2620 	lcall	__sdcc_banked_call
   2F27 AA 82              2621 	mov	r2,dpl
   2F29 15 81              2622 	dec	sp
   2F2B 15 81              2623 	dec	sp
   2F2D D0 03              2624 	pop	ar3
                           2625 ;	../../shared/src/ph_ctrl.c:199: while( ph_os_tmp != new_phase_os ) 
   2F2F                    2626 00107$:
   2F2F EB                 2627 	mov	a,r3
   2F30 B5 02 03           2628 	cjne	a,ar2,00116$
   2F33 02 2F B4           2629 	ljmp	00110$
   2F36                    2630 00116$:
                           2631 ;	../../shared/src/ph_ctrl.c:201: if(ph_os_tmp < (new_phase_os - tag_CDR_OS_PH_JMP_STEP))
   2F36 EA                 2632 	mov	a,r2
   2F37 FC                 2633 	mov	r4,a
   2F38 33                 2634 	rlc	a
   2F39 95 E0              2635 	subb	a,acc
   2F3B FD                 2636 	mov	r5,a
   2F3C EC                 2637 	mov	a,r4
   2F3D 24 FE              2638 	add	a,#0xfe
   2F3F FE                 2639 	mov	r6,a
   2F40 ED                 2640 	mov	a,r5
   2F41 34 FF              2641 	addc	a,#0xff
   2F43 FF                 2642 	mov	r7,a
   2F44 A8 18              2643 	mov	r0,_bp
   2F46 08                 2644 	inc	r0
   2F47 A6 03              2645 	mov	@r0,ar3
   2F49 EB                 2646 	mov	a,r3
   2F4A 33                 2647 	rlc	a
   2F4B 95 E0              2648 	subb	a,acc
   2F4D 08                 2649 	inc	r0
   2F4E F6                 2650 	mov	@r0,a
   2F4F A8 18              2651 	mov	r0,_bp
   2F51 08                 2652 	inc	r0
   2F52 C3                 2653 	clr	c
   2F53 E6                 2654 	mov	a,@r0
   2F54 9E                 2655 	subb	a,r6
   2F55 08                 2656 	inc	r0
   2F56 E6                 2657 	mov	a,@r0
   2F57 64 80              2658 	xrl	a,#0x80
   2F59 8F F0              2659 	mov	b,r7
   2F5B 63 F0 80           2660 	xrl	b,#0x80
   2F5E 95 F0              2661 	subb	a,b
   2F60 50 04              2662 	jnc	00105$
                           2663 ;	../../shared/src/ph_ctrl.c:202: ph_os_tmp += tag_CDR_OS_PH_JMP_STEP;
   2F62 0B                 2664 	inc	r3
   2F63 0B                 2665 	inc	r3
   2F64 80 20              2666 	sjmp	00106$
   2F66                    2667 00105$:
                           2668 ;	../../shared/src/ph_ctrl.c:203: else if(ph_os_tmp > (new_phase_os + tag_CDR_OS_PH_JMP_STEP))
   2F66 74 02              2669 	mov	a,#0x02
   2F68 2C                 2670 	add	a,r4
   2F69 FC                 2671 	mov	r4,a
   2F6A E4                 2672 	clr	a
   2F6B 3D                 2673 	addc	a,r5
   2F6C FD                 2674 	mov	r5,a
   2F6D A8 18              2675 	mov	r0,_bp
   2F6F 08                 2676 	inc	r0
   2F70 C3                 2677 	clr	c
   2F71 EC                 2678 	mov	a,r4
   2F72 96                 2679 	subb	a,@r0
   2F73 ED                 2680 	mov	a,r5
   2F74 64 80              2681 	xrl	a,#0x80
   2F76 08                 2682 	inc	r0
   2F77 86 F0              2683 	mov	b,@r0
   2F79 63 F0 80           2684 	xrl	b,#0x80
   2F7C 95 F0              2685 	subb	a,b
   2F7E 50 04              2686 	jnc	00102$
                           2687 ;	../../shared/src/ph_ctrl.c:204: ph_os_tmp -= tag_CDR_OS_PH_JMP_STEP;
   2F80 1B                 2688 	dec	r3
   2F81 1B                 2689 	dec	r3
   2F82 80 02              2690 	sjmp	00106$
   2F84                    2691 00102$:
                           2692 ;	../../shared/src/ph_ctrl.c:206: ph_os_tmp = new_phase_os;
   2F84 8A 03              2693 	mov	ar3,r2
   2F86                    2694 00106$:
                           2695 ;	../../shared/src/ph_ctrl.c:208: reg_ALIGN90_REF_LANE_5_0 = (uint8_t)ph_os_tmp;		
   2F86 90 00 38           2696 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_14
   2F89 EB                 2697 	mov	a,r3
   2F8A 2B                 2698 	add	a,r3
   2F8B 25 E0              2699 	add	a,acc
   2F8D 54 FC              2700 	anl	a,#0xfc
   2F8F F5 F0              2701 	mov	b,a
   2F91 E0                 2702 	movx	a,@dptr
   2F92 54 03              2703 	anl	a,#0x03
   2F94 45 F0              2704 	orl	a,b
   2F96 F0                 2705 	movx	@dptr,a
                           2706 ;	../../shared/src/ph_ctrl.c:209: short_delay();//delay01(10);
   2F97 C0 02              2707 	push	ar2
   2F99 C0 03              2708 	push	ar3
   2F9B 78 05              2709 	mov	r0,#_short_delay
   2F9D 79 C0              2710 	mov	r1,#(_short_delay >> 8)
   2F9F 7A 02              2711 	mov	r2,#(_short_delay >> 16)
   2FA1 12 00 B3           2712 	lcall	__sdcc_banked_call
                           2713 ;	../../shared/src/ph_ctrl.c:216: find_align90_lock(); 
   2FA4 78 39              2714 	mov	r0,#_find_align90_lock
   2FA6 79 80              2715 	mov	r1,#(_find_align90_lock >> 8)
   2FA8 7A 01              2716 	mov	r2,#(_find_align90_lock >> 16)
   2FAA 12 00 B3           2717 	lcall	__sdcc_banked_call
   2FAD D0 03              2718 	pop	ar3
   2FAF D0 02              2719 	pop	ar2
   2FB1 02 2F 2F           2720 	ljmp	00107$
   2FB4                    2721 00110$:
   2FB4 85 18 81           2722 	mov	sp,_bp
   2FB7 D0 18              2723 	pop	_bp
   2FB9 22                 2724 	ret
                           2725 ;------------------------------------------------------------
                           2726 ;Allocation info for local variables in function 'move_eom_phase'
                           2727 ;------------------------------------------------------------
                           2728 ;update_ph                 Allocated to registers r2 r3 
                           2729 ;ph_os_tmp                 Allocated to registers r4 r5 
                           2730 ;------------------------------------------------------------
                           2731 ;	../../shared/src/ph_ctrl.c:231: void move_eom_phase(int16_t update_ph)  {
                           2732 ;	-----------------------------------------
                           2733 ;	 function move_eom_phase
                           2734 ;	-----------------------------------------
   2FBA                    2735 _move_eom_phase:
   2FBA AA 82              2736 	mov	r2,dpl
   2FBC AB 83              2737 	mov	r3,dph
                           2738 ;	../../shared/src/ph_ctrl.c:238: while( update_ph != 0 ) 
   2FBE                    2739 00107$:
   2FBE EA                 2740 	mov	a,r2
   2FBF 4B                 2741 	orl	a,r3
   2FC0 70 01              2742 	jnz	00116$
   2FC2 22                 2743 	ret
   2FC3                    2744 00116$:
                           2745 ;	../../shared/src/ph_ctrl.c:240: ph_os_tmp = (int16_t)reg_EOM_DPHER_LANE_6_0;
   2FC3 90 00 28           2746 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_10
   2FC6 E0                 2747 	movx	a,@dptr
   2FC7 03                 2748 	rr	a
   2FC8 54 7F              2749 	anl	a,#0x7f
   2FCA FC                 2750 	mov	r4,a
   2FCB 7D 00              2751 	mov	r5,#0x00
                           2752 ;	../../shared/src/ph_ctrl.c:242: if(update_ph >= tag_CDR_OS_PH_JMP_STEP) {
   2FCD C3                 2753 	clr	c
   2FCE EA                 2754 	mov	a,r2
   2FCF 94 02              2755 	subb	a,#0x02
   2FD1 EB                 2756 	mov	a,r3
   2FD2 64 80              2757 	xrl	a,#0x80
   2FD4 94 80              2758 	subb	a,#0x80
   2FD6 40 11              2759 	jc	00105$
                           2760 ;	../../shared/src/ph_ctrl.c:243: update_ph -= tag_CDR_OS_PH_JMP_STEP;
   2FD8 EA                 2761 	mov	a,r2
   2FD9 24 FE              2762 	add	a,#0xfe
   2FDB FA                 2763 	mov	r2,a
   2FDC EB                 2764 	mov	a,r3
   2FDD 34 FF              2765 	addc	a,#0xff
   2FDF FB                 2766 	mov	r3,a
                           2767 ;	../../shared/src/ph_ctrl.c:244: ph_os_tmp += tag_CDR_OS_PH_JMP_STEP;
   2FE0 74 02              2768 	mov	a,#0x02
   2FE2 2C                 2769 	add	a,r4
   2FE3 FC                 2770 	mov	r4,a
   2FE4 E4                 2771 	clr	a
   2FE5 3D                 2772 	addc	a,r5
   2FE6 FD                 2773 	mov	r5,a
   2FE7 80 2A              2774 	sjmp	00106$
   2FE9                    2775 00105$:
                           2776 ;	../../shared/src/ph_ctrl.c:246: else if(update_ph <= -tag_CDR_OS_PH_JMP_STEP) {
   2FE9 C3                 2777 	clr	c
   2FEA 74 FE              2778 	mov	a,#0xFE
   2FEC 9A                 2779 	subb	a,r2
   2FED 74 7F              2780 	mov	a,#(0xFF ^ 0x80)
   2FEF 8B F0              2781 	mov	b,r3
   2FF1 63 F0 80           2782 	xrl	b,#0x80
   2FF4 95 F0              2783 	subb	a,b
   2FF6 40 11              2784 	jc	00102$
                           2785 ;	../../shared/src/ph_ctrl.c:247: update_ph += tag_CDR_OS_PH_JMP_STEP;
   2FF8 74 02              2786 	mov	a,#0x02
   2FFA 2A                 2787 	add	a,r2
   2FFB FA                 2788 	mov	r2,a
   2FFC E4                 2789 	clr	a
   2FFD 3B                 2790 	addc	a,r3
   2FFE FB                 2791 	mov	r3,a
                           2792 ;	../../shared/src/ph_ctrl.c:248: ph_os_tmp -= tag_CDR_OS_PH_JMP_STEP;	
   2FFF EC                 2793 	mov	a,r4
   3000 24 FE              2794 	add	a,#0xfe
   3002 FC                 2795 	mov	r4,a
   3003 ED                 2796 	mov	a,r5
   3004 34 FF              2797 	addc	a,#0xff
   3006 FD                 2798 	mov	r5,a
   3007 80 0A              2799 	sjmp	00106$
   3009                    2800 00102$:
                           2801 ;	../../shared/src/ph_ctrl.c:251: ph_os_tmp += update_ph;	
   3009 EA                 2802 	mov	a,r2
   300A 2C                 2803 	add	a,r4
   300B FC                 2804 	mov	r4,a
   300C EB                 2805 	mov	a,r3
   300D 3D                 2806 	addc	a,r5
   300E FD                 2807 	mov	r5,a
                           2808 ;	../../shared/src/ph_ctrl.c:252: update_ph = 0;
   300F 7A 00              2809 	mov	r2,#0x00
   3011 7B 00              2810 	mov	r3,#0x00
   3013                    2811 00106$:
                           2812 ;	../../shared/src/ph_ctrl.c:255: reg_EOM_DPHER_LANE_6_0 = (uint8_t)ph_os_tmp & 0x7f;		
   3013 53 04 7F           2813 	anl	ar4,#0x7F
   3016 90 00 28           2814 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_10
   3019 EC                 2815 	mov	a,r4
   301A 2C                 2816 	add	a,r4
   301B 54 FE              2817 	anl	a,#0xfe
   301D F5 F0              2818 	mov	b,a
   301F E0                 2819 	movx	a,@dptr
   3020 54 01              2820 	anl	a,#0x01
   3022 45 F0              2821 	orl	a,b
   3024 F0                 2822 	movx	@dptr,a
                           2823 ;	../../shared/src/ph_ctrl.c:256: short_delay(); //delay01(10);
   3025 C0 02              2824 	push	ar2
   3027 C0 03              2825 	push	ar3
   3029 78 05              2826 	mov	r0,#_short_delay
   302B 79 C0              2827 	mov	r1,#(_short_delay >> 8)
   302D 7A 02              2828 	mov	r2,#(_short_delay >> 16)
   302F 12 00 B3           2829 	lcall	__sdcc_banked_call
   3032 D0 03              2830 	pop	ar3
   3034 D0 02              2831 	pop	ar2
                           2832 ;	../../shared/src/ph_ctrl.c:257: reg_EOM_DPHERCK_LANE = 1;
                           2833 ;	../../shared/src/ph_ctrl.c:258: reg_EOM_DPHERCK_LANE = 0;
   3036 90 00 28           2834 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_10
   3039 E0                 2835 	movx	a,@dptr
   303A 44 01              2836 	orl	a,#0x01
   303C F0                 2837 	movx	@dptr,a
   303D E0                 2838 	movx	a,@dptr
   303E 54 FE              2839 	anl	a,#0xfe
   3040 F0                 2840 	movx	@dptr,a
   3041 02 2F BE           2841 	ljmp	00107$
                           2842 	.area CSEG    (CODE)
                           2843 	.area CSEG    (CODE)
   3044                    2844 _sel_sdge_dly_tb2:
   3044 FD                 2845 	.db #0xFD	; -3
   3045 11                 2846 	.db #0x11	;  17
   3046 1E                 2847 	.db #0x1E	;  30
   3047                    2848 _sel_sdge_dly_tb3:
   3047 19                 2849 	.db #0x19	;  25
   3048 2D                 2850 	.db #0x2D	;  45
   3049 3A                 2851 	.db #0x3A	;  58
                           2852 	.area CABS    (ABS,CODE)
