                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:45 2018
                              5 ;--------------------------------------------------------
                              6 	.module power
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _DTL_DFE_clkoff_reset_1
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
                            980 	.globl _PowerUp_Seq
                            981 	.globl _pu_pll_on
                            982 	.globl _pu_pll_off
                            983 	.globl _DTL_DTX_DFE_clkoff_reset_0
                            984 	.globl _DTL_DTX_DFE_clkoff_reset_1
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
                           2044 ;Allocation info for local variables in function 'PowerUp_Seq'
                           2045 ;------------------------------------------------------------
                           2046 ;------------------------------------------------------------
                           2047 ;	../../shared/src/power.c:116: void PowerUp_Seq(void) BANKING_CTRL {
                           2048 ;	-----------------------------------------
                           2049 ;	 function PowerUp_Seq
                           2050 ;	-----------------------------------------
   CEE0                    2051 _PowerUp_Seq:
                    0002   2052 	ar2 = 0x02
                    0003   2053 	ar3 = 0x03
                    0004   2054 	ar4 = 0x04
                    0005   2055 	ar5 = 0x05
                    0006   2056 	ar6 = 0x06
                    0007   2057 	ar7 = 0x07
                    0000   2058 	ar0 = 0x00
                    0001   2059 	ar1 = 0x01
                           2060 ;	../../shared/src/power.c:118: reg_ANA_REG_SU_DLY_SEL_1_0 = 3;
   CEE0 90 A2 EC           2061 	mov	dptr,#_ANA_IF_CMN_REG0
   CEE3 E0                 2062 	movx	a,@dptr
   CEE4 44 03              2063 	orl	a,#0x03
   CEE6 F0                 2064 	movx	@dptr,a
                           2065 ;	../../shared/src/power.c:119: reg_ANA_REG_HD_DLY_SEL_1_0 = 3;
   CEE7 90 A2 EC           2066 	mov	dptr,#_ANA_IF_CMN_REG0
   CEEA E0                 2067 	movx	a,@dptr
   CEEB 44 0C              2068 	orl	a,#0x0c
   CEED F0                 2069 	movx	@dptr,a
                           2070 ;	../../shared/src/power.c:120: SYNC_SATUS_PLL_OR_PLL_OFF = 1;
   CEEE 90 E6 B1           2071 	mov	dptr,#(_SYNC_INFO + 0x0001)
   CEF1 74 01              2072 	mov	a,#0x01
   CEF3 F0                 2073 	movx	@dptr,a
                           2074 ;	../../shared/src/power.c:121: set_timer_cnt();
   CEF4 78 A7              2075 	mov	r0,#_set_timer_cnt
   CEF6 79 CB              2076 	mov	r1,#(_set_timer_cnt >> 8)
   CEF8 7A 01              2077 	mov	r2,#(_set_timer_cnt >> 16)
   CEFA 12 00 B3           2078 	lcall	__sdcc_banked_call
                           2079 ;	../../shared/src/power.c:122: PHY_STATUS_INT = IDLE;
   CEFD 90 22 38           2080 	mov	dptr,#_MCU_STATUS2_LANE
                           2081 ;	../../shared/src/power.c:124: slave_phy_on = 0;
   CF00 E4                 2082 	clr	a
   CF01 F0                 2083 	movx	@dptr,a
   CF02 90 66 1C           2084 	mov	dptr,#_slave_phy_on
   CF05 F0                 2085 	movx	@dptr,a
                           2086 ;	../../shared/src/power.c:144: reg_ANA_REFCLK_SEL = reg_PIN_REFCLK_SEL_RD; 
   CF06 90 A3 18           2087 	mov	dptr,#_PM_CMN_REG1
   CF09 E0                 2088 	movx	a,@dptr
   CF0A 23                 2089 	rl	a
   CF0B 54 01              2090 	anl	a,#0x01
   CF0D 90 A3 18           2091 	mov	dptr,#_PM_CMN_REG1
   CF10 13                 2092 	rrc	a
   CF11 E0                 2093 	movx	a,@dptr
   CF12 92 E6              2094 	mov	acc.6,c
   CF14 F0                 2095 	movx	@dptr,a
                           2096 ;	../../shared/src/power.c:145: sync_status_lane_en(1);
   CF15 75 82 01           2097 	mov	dpl,#0x01
   CF18 78 6E              2098 	mov	r0,#_sync_status_lane_en
   CF1A 79 B0              2099 	mov	r1,#(_sync_status_lane_en >> 8)
   CF1C 7A 01              2100 	mov	r2,#(_sync_status_lane_en >> 16)
   CF1E 12 00 B3           2101 	lcall	__sdcc_banked_call
                           2102 ;	../../shared/src/power.c:146: ring_use_250m = USE_RING_REFCLK_250M;
   CF21 90 E5 C0           2103 	mov	dptr,#_phy_mode_cmn_table
   CF24 E0                 2104 	movx	a,@dptr
   CF25 24 FF              2105 	add	a,#0xff
                           2106 ;	../../shared/src/power.c:147: reg_CLK1G_REFCLK_SEL = ring_use_250m==0;
   CF27 92 13              2107 	mov  _ring_use_250m,c
   CF29 B3                 2108 	cpl	c
   CF2A 92 28              2109 	mov  b0,c
   CF2C E4                 2110 	clr	a
   CF2D 33                 2111 	rlc	a
   CF2E 90 82 D4           2112 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_181
   CF31 13                 2113 	rrc	a
   CF32 E0                 2114 	movx	a,@dptr
   CF33 92 E6              2115 	mov	acc.6,c
   CF35 F0                 2116 	movx	@dptr,a
                           2117 ;	../../shared/src/power.c:149: reg_REF_CLK_RING_SEL = ring_use_250m==0;
   CF36 A2 28              2118 	mov	c,b0
   CF38 E4                 2119 	clr	a
   CF39 33                 2120 	rlc	a
   CF3A 90 83 34           2121 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_205
   CF3D 13                 2122 	rrc	a
   CF3E E0                 2123 	movx	a,@dptr
   CF3F 92 E7              2124 	mov	acc.7,c
   CF41 F0                 2125 	movx	@dptr,a
                           2126 ;	../../shared/src/power.c:172: if(cmx_ETHERNET_CFG_1_0 > 0x01) {
   CF42 90 E6 04           2127 	mov	dptr,#_CONTROL_CONFIG0
   CF45 E0                 2128 	movx	a,@dptr
   CF46 54 03              2129 	anl	a,#0x03
   CF48 FA                 2130 	mov	r2,a
   CF49 C3                 2131 	clr	c
   CF4A 74 81              2132 	mov	a,#(0x01 ^ 0x80)
   CF4C 8A F0              2133 	mov	b,r2
   CF4E 63 F0 80           2134 	xrl	b,#0x80
   CF51 95 F0              2135 	subb	a,b
   CF53 50 3E              2136 	jnc	00108$
                           2137 ;	../../shared/src/power.c:173: serdes_ring_lane_en = 1;
   CF55 90 66 23           2138 	mov	dptr,#_serdes_ring_lane_en
   CF58 74 01              2139 	mov	a,#0x01
   CF5A F0                 2140 	movx	@dptr,a
                           2141 ;	../../shared/src/power.c:174: ring_pll_enabled = 1;
   CF5B D2 12              2142 	setb	_ring_pll_enabled
                           2143 ;	../../shared/src/power.c:175: ring_lane_sel = 0;
   CF5D 90 66 24           2144 	mov	dptr,#_ring_lane_sel
   CF60 E4                 2145 	clr	a
   CF61 F0                 2146 	movx	@dptr,a
                           2147 ;	../../shared/src/power.c:176: master_mcu = cmx_LCPLL_LANE_SEL;
   CF62 90 E6 04           2148 	mov	dptr,#_CONTROL_CONFIG0
   CF65 E0                 2149 	movx	a,@dptr
   CF66 03                 2150 	rr	a
   CF67 03                 2151 	rr	a
   CF68 54 01              2152 	anl	a,#0x01
   CF6A 90 E6 50           2153 	mov	dptr,#_MCU_CONFIG
   CF6D F0                 2154 	movx	@dptr,a
                           2155 ;	../../shared/src/power.c:177: if(mcuid == (~master_mcu & 0x01)) {
   CF6E 90 22 00           2156 	mov	dptr,#_MCU_CONTROL_LANE
   CF71 E0                 2157 	movx	a,@dptr
   CF72 FA                 2158 	mov	r2,a
   CF73 90 E6 50           2159 	mov	dptr,#_MCU_CONFIG
   CF76 E0                 2160 	movx	a,@dptr
   CF77 7C 00              2161 	mov	r4,#0x00
   CF79 F4                 2162 	cpl	a
   CF7A FB                 2163 	mov	r3,a
   CF7B EC                 2164 	mov	a,r4
   CF7C F4                 2165 	cpl	a
   CF7D 53 03 01           2166 	anl	ar3,#0x01
   CF80 E4                 2167 	clr	a
   CF81 FC                 2168 	mov	r4,a
   CF82 FD                 2169 	mov	r5,a
   CF83 EA                 2170 	mov	a,r2
   CF84 B5 03 35           2171 	cjne	a,ar3,00109$
   CF87 ED                 2172 	mov	a,r5
   CF88 B5 04 31           2173 	cjne	a,ar4,00109$
                           2174 ;	../../shared/src/power.c:178: ring_lane_sel = 1;
   CF8B 90 66 24           2175 	mov	dptr,#_ring_lane_sel
   CF8E 74 01              2176 	mov	a,#0x01
   CF90 F0                 2177 	movx	@dptr,a
   CF91 80 29              2178 	sjmp	00109$
   CF93                    2179 00108$:
                           2180 ;	../../shared/src/power.c:184: if(phy_mode == SERDES) no_pllspdchg = 1;
   CF93 90 A3 16           2181 	mov	dptr,#(_SYSTEM + 0x0002)
   CF96 E0                 2182 	movx	a,@dptr
   CF97 54 07              2183 	anl	a,#0x07
   CF99 FA                 2184 	mov	r2,a
   CF9A BA 04 02           2185 	cjne	r2,#0x04,00104$
   CF9D D2 15              2186 	setb	_no_pllspdchg
   CF9F                    2187 00104$:
                           2188 ;	../../shared/src/power.c:185: serdes_ring_lane_en = 0;
   CF9F 90 66 23           2189 	mov	dptr,#_serdes_ring_lane_en
                           2190 ;	../../shared/src/power.c:189: ring_lane_sel = 0;
   CFA2 E4                 2191 	clr	a
   CFA3 F0                 2192 	movx	@dptr,a
   CFA4 90 66 24           2193 	mov	dptr,#_ring_lane_sel
   CFA7 F0                 2194 	movx	@dptr,a
                           2195 ;	../../shared/src/power.c:190: if(mcuid == master_mcu) ring_lane_sel = 1;
   CFA8 90 22 00           2196 	mov	dptr,#_MCU_CONTROL_LANE
   CFAB E0                 2197 	movx	a,@dptr
   CFAC FA                 2198 	mov	r2,a
   CFAD 90 E6 50           2199 	mov	dptr,#_MCU_CONFIG
   CFB0 E0                 2200 	movx	a,@dptr
   CFB1 FB                 2201 	mov	r3,a
   CFB2 EA                 2202 	mov	a,r2
   CFB3 B5 03 06           2203 	cjne	a,ar3,00109$
   CFB6 90 66 24           2204 	mov	dptr,#_ring_lane_sel
   CFB9 74 01              2205 	mov	a,#0x01
   CFBB F0                 2206 	movx	@dptr,a
   CFBC                    2207 00109$:
                           2208 ;	../../shared/src/power.c:196: PHY_STATUS = ST_POSEQ;
   CFBC 90 22 30           2209 	mov	dptr,#_MCU_STATUS0_LANE
   CFBF 74 02              2210 	mov	a,#0x02
   CFC1 F0                 2211 	movx	@dptr,a
                           2212 ;	../../shared/src/power.c:199: init_xdata();
   CFC2 78 62              2213 	mov	r0,#_init_xdata
   CFC4 79 C3              2214 	mov	r1,#(_init_xdata >> 8)
   CFC6 7A 01              2215 	mov	r2,#(_init_xdata >> 16)
   CFC8 12 00 B3           2216 	lcall	__sdcc_banked_call
                           2217 ;	../../shared/src/power.c:200: init_reg();
   CFCB 78 27              2218 	mov	r0,#_init_reg
   CFCD 79 C6              2219 	mov	r1,#(_init_reg >> 8)
   CFCF 7A 01              2220 	mov	r2,#(_init_reg >> 16)
   CFD1 12 00 B3           2221 	lcall	__sdcc_banked_call
                           2222 ;	../../shared/src/power.c:205: reg_DTL_LOOP_FREEZE_LANE = 1;  //analog deleted
   CFD4 90 21 6A           2223 	mov	dptr,#(_DTL_REG2 + 0x0002)
   CFD7 E0                 2224 	movx	a,@dptr
   CFD8 44 04              2225 	orl	a,#0x04
   CFDA F0                 2226 	movx	@dptr,a
                           2227 ;	../../shared/src/power.c:209: reg_DTL_FLOOP_FREEZE_LANE = 1;
   CFDB 90 21 63           2228 	mov	dptr,#(_DTL_REG0 + 0x0003)
   CFDE E0                 2229 	movx	a,@dptr
   CFDF 44 40              2230 	orl	a,#0x40
   CFE1 F0                 2231 	movx	@dptr,a
                           2232 ;	../../shared/src/power.c:210: reg_FFE_PULSE_EN_LANE = 0;
   CFE2 90 02 0C           2233 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_131
   CFE5 E0                 2234 	movx	a,@dptr
   CFE6 54 7F              2235 	anl	a,#0x7f
   CFE8 F0                 2236 	movx	@dptr,a
                           2237 ;	../../shared/src/power.c:215: reg_RESET_ANA = 1;
   CFE9 90 A3 19           2238 	mov	dptr,#(_PM_CMN_REG1 + 0x0001)
   CFEC E0                 2239 	movx	a,@dptr
   CFED 44 10              2240 	orl	a,#0x10
   CFEF F0                 2241 	movx	@dptr,a
                           2242 ;	../../shared/src/power.c:219: reg_RESET_ANA_RING = 1;
   CFF0 90 A3 33           2243 	mov	dptr,#(_PLLCAL_REG1 + 0x0003)
   CFF3 E0                 2244 	movx	a,@dptr
   CFF4 44 08              2245 	orl	a,#0x08
   CFF6 F0                 2246 	movx	@dptr,a
                           2247 ;	../../shared/src/power.c:222: reg_EOM_RESET_INTP_EXT_LANE = 1;
   CFF7 90 00 24           2248 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_9
   CFFA E0                 2249 	movx	a,@dptr
   CFFB 44 08              2250 	orl	a,#0x08
   CFFD F0                 2251 	movx	@dptr,a
                           2252 ;	../../shared/src/power.c:223: reg_TX_INTPRESET_EXT = 1;
   CFFE 90 82 EC           2253 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_187
   D001 E0                 2254 	movx	a,@dptr
   D002 44 20              2255 	orl	a,#0x20
   D004 F0                 2256 	movx	@dptr,a
                           2257 ;	../../shared/src/power.c:224: reg_RESET_INTP_EXT_LANE = 1;
   D005 90 02 18           2258 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_134
   D008 E0                 2259 	movx	a,@dptr
   D009 44 40              2260 	orl	a,#0x40
   D00B F0                 2261 	movx	@dptr,a
                           2262 ;	../../shared/src/power.c:225: reg_ANA_RX_PU_DLY2_LANE = 0;
   D00C 90 21 4C           2263 	mov	dptr,#_INPUT_RX_PIN_REG3_LANE
   D00F E0                 2264 	movx	a,@dptr
   D010 54 FE              2265 	anl	a,#0xfe
   D012 F0                 2266 	movx	@dptr,a
                           2267 ;	../../shared/src/power.c:228: pwrsq_on = 1;
   D013 90 66 2B           2268 	mov	dptr,#_pwrsq_on
   D016 74 01              2269 	mov	a,#0x01
   D018 F0                 2270 	movx	@dptr,a
                           2271 ;	../../shared/src/power.c:229: lnx_CAL_DONE_LANE = 1;
   D019 90 60 03           2272 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0003)
   D01C E0                 2273 	movx	a,@dptr
   D01D 44 01              2274 	orl	a,#0x01
   D01F F0                 2275 	movx	@dptr,a
                           2276 ;	../../shared/src/power.c:231: while( !reg_PIN_PU_IVREF_RD ){
   D020                    2277 00112$:
   D020 90 A3 1B           2278 	mov	dptr,#(_PM_CMN_REG1 + 0x0003)
   D023 E0                 2279 	movx	a,@dptr
   D024 20 E5 0C           2280 	jb	acc.5,00114$
                           2281 ;	../../shared/src/power.c:233: if(reg_PHY_MCU_REMOTE_REQ_ISR_LANE)
   D027 90 22 88           2282 	mov	dptr,#_MCU_IRQ_LANE
   D02A E0                 2283 	movx	a,@dptr
   D02B 30 E5 F2           2284 	jnb	acc.5,00112$
                           2285 ;	../../shared/src/power.c:234: cmd_if();
   D02E 12 02 22           2286 	lcall	_cmd_if
   D031 80 ED              2287 	sjmp	00112$
   D033                    2288 00114$:
                           2289 ;	../../shared/src/power.c:238: if(mcuid==master_mcu) {
   D033 90 22 00           2290 	mov	dptr,#_MCU_CONTROL_LANE
   D036 E0                 2291 	movx	a,@dptr
   D037 FA                 2292 	mov	r2,a
   D038 90 E6 50           2293 	mov	dptr,#_MCU_CONFIG
   D03B E0                 2294 	movx	a,@dptr
   D03C FB                 2295 	mov	r3,a
   D03D EA                 2296 	mov	a,r2
   D03E B5 03 58           2297 	cjne	a,ar3,00116$
                           2298 ;	../../shared/src/power.c:239: reg_PWRON_SEQ = 1;
   D041 90 A3 18           2299 	mov	dptr,#_PM_CMN_REG1
   D044 E0                 2300 	movx	a,@dptr
   D045 44 20              2301 	orl	a,#0x20
   D047 F0                 2302 	movx	@dptr,a
                           2303 ;	../../shared/src/power.c:240: cmx_CAL_DONE = 1;
   D048 90 E6 05           2304 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0001)
   D04B E0                 2305 	movx	a,@dptr
   D04C 44 01              2306 	orl	a,#0x01
   D04E F0                 2307 	movx	@dptr,a
                           2308 ;	../../shared/src/power.c:241: delay01(200);
   D04F 90 00 C8           2309 	mov	dptr,#0x00C8
   D052 78 16              2310 	mov	r0,#_delay01
   D054 79 BC              2311 	mov	r1,#(_delay01 >> 8)
   D056 7A 02              2312 	mov	r2,#(_delay01 >> 16)
   D058 12 00 B3           2313 	lcall	__sdcc_banked_call
                           2314 ;	../../shared/src/power.c:244: PM_CMN_REG2.BT.B2 = 0x08;
   D05B 90 A3 4E           2315 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   D05E 74 08              2316 	mov	a,#0x08
   D060 F0                 2317 	movx	@dptr,a
                           2318 ;	../../shared/src/power.c:245: delay01(10); //1us
   D061 90 00 0A           2319 	mov	dptr,#0x000A
   D064 78 16              2320 	mov	r0,#_delay01
   D066 79 BC              2321 	mov	r1,#(_delay01 >> 8)
   D068 7A 02              2322 	mov	r2,#(_delay01 >> 16)
   D06A 12 00 B3           2323 	lcall	__sdcc_banked_call
                           2324 ;	../../shared/src/power.c:246: PM_CMN_REG2.BT.B2 = 0x0c;
   D06D 90 A3 4E           2325 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   D070 74 0C              2326 	mov	a,#0x0C
   D072 F0                 2327 	movx	@dptr,a
                           2328 ;	../../shared/src/power.c:247: delay01(10); //1us
   D073 90 00 0A           2329 	mov	dptr,#0x000A
   D076 78 16              2330 	mov	r0,#_delay01
   D078 79 BC              2331 	mov	r1,#(_delay01 >> 8)
   D07A 7A 02              2332 	mov	r2,#(_delay01 >> 16)
   D07C 12 00 B3           2333 	lcall	__sdcc_banked_call
                           2334 ;	../../shared/src/power.c:248: PM_CMN_REG2.BT.B2 = 0x0e;
   D07F 90 A3 4E           2335 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   D082 74 0E              2336 	mov	a,#0x0E
   D084 F0                 2337 	movx	@dptr,a
                           2338 ;	../../shared/src/power.c:249: delay01(10); //1us
   D085 90 00 0A           2339 	mov	dptr,#0x000A
   D088 78 16              2340 	mov	r0,#_delay01
   D08A 79 BC              2341 	mov	r1,#(_delay01 >> 8)
   D08C 7A 02              2342 	mov	r2,#(_delay01 >> 16)
   D08E 12 00 B3           2343 	lcall	__sdcc_banked_call
                           2344 ;	../../shared/src/power.c:250: PM_CMN_REG2.BT.B2 = 0x0f;
   D091 90 A3 4E           2345 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   D094 74 0F              2346 	mov	a,#0x0F
   D096 F0                 2347 	movx	@dptr,a
   D097 80 09              2348 	sjmp	00117$
   D099                    2349 00116$:
                           2350 ;	../../shared/src/power.c:252: check_pu_ivref();
   D099 78 DD              2351 	mov	r0,#_check_pu_ivref
   D09B 79 D2              2352 	mov	r1,#(_check_pu_ivref >> 8)
   D09D 7A 02              2353 	mov	r2,#(_check_pu_ivref >> 16)
   D09F 12 00 B3           2354 	lcall	__sdcc_banked_call
   D0A2                    2355 00117$:
                           2356 ;	../../shared/src/power.c:265: delay01(50); //5us delay after PU_IVREF=1
   D0A2 90 00 32           2357 	mov	dptr,#0x0032
   D0A5 78 16              2358 	mov	r0,#_delay01
   D0A7 79 BC              2359 	mov	r1,#(_delay01 >> 8)
   D0A9 7A 02              2360 	mov	r2,#(_delay01 >> 16)
   D0AB 12 00 B3           2361 	lcall	__sdcc_banked_call
                           2362 ;	../../shared/src/power.c:267: reg_ANA_PU_SQ_LANE = 1; 
   D0AE 90 21 03           2363 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0003)
   D0B1 E0                 2364 	movx	a,@dptr
   D0B2 44 20              2365 	orl	a,#0x20
   D0B4 F0                 2366 	movx	@dptr,a
                           2367 ;	../../shared/src/power.c:268: delay01(150); // 20uS delay from PU_IVREF=1
   D0B5 90 00 96           2368 	mov	dptr,#0x0096
   D0B8 78 16              2369 	mov	r0,#_delay01
   D0BA 79 BC              2370 	mov	r1,#(_delay01 >> 8)
   D0BC 7A 02              2371 	mov	r2,#(_delay01 >> 16)
   D0BE 12 00 B3           2372 	lcall	__sdcc_banked_call
                           2373 ;	../../shared/src/power.c:270: if(serdes_ring_lane_en==0)
   D0C1 90 66 23           2374 	mov	dptr,#_serdes_ring_lane_en
   D0C4 E0                 2375 	movx	a,@dptr
   D0C5 FA                 2376 	mov	r2,a
   D0C6 70 21              2377 	jnz	00127$
                           2378 ;	../../shared/src/power.c:271: while(! (reg_PIN_PU_PLL_RD_LANE && reg_PIN_PU_TX_RD_LANE && reg_PIN_PU_RX_RD_LANE)) {
   D0C8                    2379 00122$:
   D0C8 90 20 07           2380 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   D0CB E0                 2381 	movx	a,@dptr
   D0CC 30 E5 0E           2382 	jnb	acc.5,00123$
   D0CF 90 20 07           2383 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   D0D2 E0                 2384 	movx	a,@dptr
   D0D3 30 E4 07           2385 	jnb	acc.4,00123$
   D0D6 90 21 02           2386 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   D0D9 E0                 2387 	movx	a,@dptr
   D0DA 20 E2 1F           2388 	jb	acc.2,00132$
   D0DD                    2389 00123$:
                           2390 ;	../../shared/src/power.c:273: if(reg_PHY_MCU_REMOTE_REQ_ISR_LANE)
   D0DD 90 22 88           2391 	mov	dptr,#_MCU_IRQ_LANE
   D0E0 E0                 2392 	movx	a,@dptr
   D0E1 30 E5 E4           2393 	jnb	acc.5,00122$
                           2394 ;	../../shared/src/power.c:274: cmd_if();
   D0E4 12 02 22           2395 	lcall	_cmd_if
                           2396 ;	../../shared/src/power.c:278: while(reg_PU_PLL_OR==0) {
   D0E7 80 DF              2397 	sjmp	00122$
   D0E9                    2398 00127$:
   D0E9 90 A3 1A           2399 	mov	dptr,#(_PM_CMN_REG1 + 0x0002)
   D0EC E0                 2400 	movx	a,@dptr
   D0ED 20 E4 0C           2401 	jb	acc.4,00132$
                           2402 ;	../../shared/src/power.c:280: if(reg_PHY_MCU_REMOTE_REQ_ISR_LANE)
   D0F0 90 22 88           2403 	mov	dptr,#_MCU_IRQ_LANE
   D0F3 E0                 2404 	movx	a,@dptr
   D0F4 30 E5 F2           2405 	jnb	acc.5,00127$
                           2406 ;	../../shared/src/power.c:281: cmd_if();
   D0F7 12 02 22           2407 	lcall	_cmd_if
   D0FA 80 ED              2408 	sjmp	00127$
   D0FC                    2409 00132$:
                           2410 ;	../../shared/src/power.c:285: if(mcuid== master_mcu) {
   D0FC 90 22 00           2411 	mov	dptr,#_MCU_CONTROL_LANE
   D0FF E0                 2412 	movx	a,@dptr
   D100 FA                 2413 	mov	r2,a
   D101 90 E6 50           2414 	mov	dptr,#_MCU_CONFIG
   D104 E0                 2415 	movx	a,@dptr
   D105 FB                 2416 	mov	r3,a
   D106 EA                 2417 	mov	a,r2
   D107 B5 03 1A           2418 	cjne	a,ar3,00134$
                           2419 ;	../../shared/src/power.c:286: reg_ANA_PU_PLL = 1;
   D10A 90 A3 1B           2420 	mov	dptr,#(_PM_CMN_REG1 + 0x0003)
   D10D E0                 2421 	movx	a,@dptr
   D10E 44 04              2422 	orl	a,#0x04
   D110 F0                 2423 	movx	@dptr,a
                           2424 ;	../../shared/src/power.c:287: delay01(5); //0.5us 
   D111 90 00 05           2425 	mov	dptr,#0x0005
   D114 78 16              2426 	mov	r0,#_delay01
   D116 79 BC              2427 	mov	r1,#(_delay01 >> 8)
   D118 7A 02              2428 	mov	r2,#(_delay01 >> 16)
   D11A 12 00 B3           2429 	lcall	__sdcc_banked_call
                           2430 ;	../../shared/src/power.c:288: reg_ANA_PU_PLL_DLY = 1;
   D11D 90 A3 1B           2431 	mov	dptr,#(_PM_CMN_REG1 + 0x0003)
   D120 E0                 2432 	movx	a,@dptr
   D121 44 01              2433 	orl	a,#0x01
   D123 F0                 2434 	movx	@dptr,a
   D124                    2435 00134$:
                           2436 ;	../../shared/src/power.c:292: if( serdes_ring_lane_en & ring_lane_sel ) {
   D124 90 66 23           2437 	mov	dptr,#_serdes_ring_lane_en
   D127 E0                 2438 	movx	a,@dptr
   D128 FA                 2439 	mov	r2,a
   D129 90 66 24           2440 	mov	dptr,#_ring_lane_sel
   D12C E0                 2441 	movx	a,@dptr
   D12D FB                 2442 	mov	r3,a
   D12E 5A                 2443 	anl	a,r2
   D12F 60 1A              2444 	jz	00136$
                           2445 ;	../../shared/src/power.c:298: reg_ANA_PU_PLL_RING = 1;
   D131 90 A3 24           2446 	mov	dptr,#_INPUT_CMN_PIN_REG2
   D134 E0                 2447 	movx	a,@dptr
   D135 44 20              2448 	orl	a,#0x20
   D137 F0                 2449 	movx	@dptr,a
                           2450 ;	../../shared/src/power.c:299: delay01(5);
   D138 90 00 05           2451 	mov	dptr,#0x0005
   D13B 78 16              2452 	mov	r0,#_delay01
   D13D 79 BC              2453 	mov	r1,#(_delay01 >> 8)
   D13F 7A 02              2454 	mov	r2,#(_delay01 >> 16)
   D141 12 00 B3           2455 	lcall	__sdcc_banked_call
                           2456 ;	../../shared/src/power.c:300: reg_ANA_PU_PLL_DLY_RING = 1;
   D144 90 A3 4D           2457 	mov	dptr,#(_PM_CMN_REG2 + 0x0001)
   D147 E0                 2458 	movx	a,@dptr
   D148 44 04              2459 	orl	a,#0x04
   D14A F0                 2460 	movx	@dptr,a
   D14B                    2461 00136$:
                           2462 ;	../../shared/src/power.c:305: if(serdes_ring_lane_en==0)
   D14B 90 66 23           2463 	mov	dptr,#_serdes_ring_lane_en
   D14E E0                 2464 	movx	a,@dptr
   D14F FA                 2465 	mov	r2,a
   D150 70 0E              2466 	jnz	00142$
                           2467 ;	../../shared/src/power.c:306: while(reg_ANA_PU_PLL_DLY==0 || reg_ANA_PU_PLL==0);
   D152                    2468 00138$:
   D152 90 A3 1B           2469 	mov	dptr,#(_PM_CMN_REG1 + 0x0003)
   D155 E0                 2470 	movx	a,@dptr
   D156 30 E0 F9           2471 	jnb	acc.0,00138$
   D159 90 A3 1B           2472 	mov	dptr,#(_PM_CMN_REG1 + 0x0003)
   D15C E0                 2473 	movx	a,@dptr
   D15D 30 E2 F2           2474 	jnb	acc.2,00138$
   D160                    2475 00142$:
                           2476 ;	../../shared/src/power.c:309: reg_ANA_PU_RX_LANE = 1;
   D160 90 21 03           2477 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0003)
   D163 E0                 2478 	movx	a,@dptr
   D164 44 40              2479 	orl	a,#0x40
   D166 F0                 2480 	movx	@dptr,a
                           2481 ;	../../shared/src/power.c:310: delay01(5);
   D167 90 00 05           2482 	mov	dptr,#0x0005
   D16A 78 16              2483 	mov	r0,#_delay01
   D16C 79 BC              2484 	mov	r1,#(_delay01 >> 8)
   D16E 7A 02              2485 	mov	r2,#(_delay01 >> 16)
   D170 12 00 B3           2486 	lcall	__sdcc_banked_call
                           2487 ;	../../shared/src/power.c:311: reg_ANA_PU_RX_DLY_LANE = 1;
   D173 90 21 01           2488 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0001)
   D176 E0                 2489 	movx	a,@dptr
   D177 44 80              2490 	orl	a,#0x80
   D179 F0                 2491 	movx	@dptr,a
                           2492 ;	../../shared/src/power.c:312: delay01(4);
   D17A 90 00 04           2493 	mov	dptr,#0x0004
   D17D 78 16              2494 	mov	r0,#_delay01
   D17F 79 BC              2495 	mov	r1,#(_delay01 >> 8)
   D181 7A 02              2496 	mov	r2,#(_delay01 >> 16)
   D183 12 00 B3           2497 	lcall	__sdcc_banked_call
                           2498 ;	../../shared/src/power.c:313: reg_FFE_PULSE_EN_LANE = 1;
   D186 90 02 0C           2499 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_131
   D189 E0                 2500 	movx	a,@dptr
   D18A 44 80              2501 	orl	a,#0x80
   D18C F0                 2502 	movx	@dptr,a
                           2503 ;	../../shared/src/power.c:314: reg_ANA_RX_PU_DLY2_LANE = 1;
   D18D 90 21 4C           2504 	mov	dptr,#_INPUT_RX_PIN_REG3_LANE
   D190 E0                 2505 	movx	a,@dptr
   D191 44 01              2506 	orl	a,#0x01
   D193 F0                 2507 	movx	@dptr,a
                           2508 ;	../../shared/src/power.c:316: delay01(400);
   D194 90 01 90           2509 	mov	dptr,#0x0190
   D197 78 16              2510 	mov	r0,#_delay01
   D199 79 BC              2511 	mov	r1,#(_delay01 >> 8)
   D19B 7A 02              2512 	mov	r2,#(_delay01 >> 16)
   D19D 12 00 B3           2513 	lcall	__sdcc_banked_call
                           2514 ;	../../shared/src/power.c:317: reg_EOM_RESET_INTP_EXT_LANE = 0;
   D1A0 90 00 24           2515 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_9
   D1A3 E0                 2516 	movx	a,@dptr
   D1A4 54 F7              2517 	anl	a,#0xf7
   D1A6 F0                 2518 	movx	@dptr,a
                           2519 ;	../../shared/src/power.c:318: reg_TX_INTPRESET_EXT = 0;
   D1A7 90 82 EC           2520 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_187
   D1AA E0                 2521 	movx	a,@dptr
   D1AB 54 DF              2522 	anl	a,#0xdf
   D1AD F0                 2523 	movx	@dptr,a
                           2524 ;	../../shared/src/power.c:319: reg_RESET_INTP_EXT_LANE = 0;
   D1AE 90 02 18           2525 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_134
   D1B1 E0                 2526 	movx	a,@dptr
   D1B2 54 BF              2527 	anl	a,#0xbf
   D1B4 F0                 2528 	movx	@dptr,a
                           2529 ;	../../shared/src/power.c:321: if(serdes_ring_lane_en==0)
   D1B5 90 66 23           2530 	mov	dptr,#_serdes_ring_lane_en
   D1B8 E0                 2531 	movx	a,@dptr
   D1B9 FA                 2532 	mov	r2,a
   D1BA 70 0E              2533 	jnz	00148$
                           2534 ;	../../shared/src/power.c:322: while(! (reg_PIN_PU_PLL_RD_LANE && reg_PIN_PU_TX_RD_LANE));
   D1BC                    2535 00144$:
   D1BC 90 20 07           2536 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   D1BF E0                 2537 	movx	a,@dptr
   D1C0 30 E5 F9           2538 	jnb	acc.5,00144$
   D1C3 90 20 07           2539 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   D1C6 E0                 2540 	movx	a,@dptr
   D1C7 30 E4 F2           2541 	jnb	acc.4,00144$
   D1CA                    2542 00148$:
                           2543 ;	../../shared/src/power.c:324: reg_ANA_PU_TX_LANE = 1;
   D1CA 90 20 03           2544 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0003)
   D1CD E0                 2545 	movx	a,@dptr
   D1CE 44 40              2546 	orl	a,#0x40
   D1D0 F0                 2547 	movx	@dptr,a
                           2548 ;	../../shared/src/power.c:326: init_irq();
   D1D1 78 C3              2549 	mov	r0,#_init_irq
   D1D3 79 C4              2550 	mov	r1,#(_init_irq >> 8)
   D1D5 7A 01              2551 	mov	r2,#(_init_irq >> 16)
   D1D7 12 00 B3           2552 	lcall	__sdcc_banked_call
                           2553 ;	../../shared/src/power.c:328: EA = 1;
   D1DA D2 AF              2554 	setb	_EA
                           2555 ;	../../shared/src/power.c:331: PHY_STATUS = ST_CAL;
   D1DC 90 22 30           2556 	mov	dptr,#_MCU_STATUS0_LANE
   D1DF 74 03              2557 	mov	a,#0x03
   D1E1 F0                 2558 	movx	@dptr,a
   D1E2 02 00 C5           2559 	ljmp	__sdcc_banked_ret
                           2560 ;------------------------------------------------------------
                           2561 ;Allocation info for local variables in function 'pu_pll_on'
                           2562 ;------------------------------------------------------------
                           2563 ;------------------------------------------------------------
                           2564 ;	../../shared/src/power.c:334: void pu_pll_on(void) BANKING_CTRL { // on - *pll_fast_cal, dtx_clk_off*, reset_dtx*
                           2565 ;	-----------------------------------------
                           2566 ;	 function pu_pll_on
                           2567 ;	-----------------------------------------
   D1E5                    2568 _pu_pll_on:
                           2569 ;	../../shared/src/power.c:337: if(serdes_ring_lane_en && tag_ringpll_ind_en) {
   D1E5 90 66 23           2570 	mov	dptr,#_serdes_ring_lane_en
   D1E8 E0                 2571 	movx	a,@dptr
   D1E9 FA                 2572 	mov	r2,a
   D1EA 60 5A              2573 	jz	00119$
   D1EC 90 E6 04           2574 	mov	dptr,#_CONTROL_CONFIG0
   D1EF E0                 2575 	movx	a,@dptr
   D1F0 30 E6 53           2576 	jnb	acc.6,00119$
                           2577 ;	../../shared/src/power.c:338: if(ring_lane_sel) {
   D1F3 90 66 24           2578 	mov	dptr,#_ring_lane_sel
   D1F6 E0                 2579 	movx	a,@dptr
   D1F7 FA                 2580 	mov	r2,a
   D1F8 60 26              2581 	jz	00102$
                           2582 ;	../../shared/src/power.c:339: ring_pll_fast_cal();
   D1FA 78 6C              2583 	mov	r0,#_ring_pll_fast_cal
   D1FC 79 E0              2584 	mov	r1,#(_ring_pll_fast_cal >> 8)
   D1FE 7A 01              2585 	mov	r2,#(_ring_pll_fast_cal >> 16)
   D200 12 00 B3           2586 	lcall	__sdcc_banked_call
                           2587 ;	../../shared/src/power.c:345: reg_DTX_CLK_OFF_RING = 0;
   D203 90 A3 18           2588 	mov	dptr,#_PM_CMN_REG1
   D206 E0                 2589 	movx	a,@dptr
   D207 54 FE              2590 	anl	a,#0xfe
   D209 F0                 2591 	movx	@dptr,a
                           2592 ;	../../shared/src/power.c:346: delay01(10);
   D20A 90 00 0A           2593 	mov	dptr,#0x000A
   D20D 78 16              2594 	mov	r0,#_delay01
   D20F 79 BC              2595 	mov	r1,#(_delay01 >> 8)
   D211 7A 02              2596 	mov	r2,#(_delay01 >> 16)
   D213 12 00 B3           2597 	lcall	__sdcc_banked_call
                           2598 ;	../../shared/src/power.c:347: reg_RESET_DTX_RING = 0;
   D216 90 A0 11           2599 	mov	dptr,#(_DTX_REG2 + 0x0001)
   D219 E0                 2600 	movx	a,@dptr
   D21A 54 FB              2601 	anl	a,#0xfb
   D21C F0                 2602 	movx	@dptr,a
   D21D 02 D2 D0           2603 	ljmp	00122$
   D220                    2604 00102$:
                           2605 ;	../../shared/src/power.c:351: pll_fast_cal();	
   D220 78 DF              2606 	mov	r0,#_pll_fast_cal
   D222 79 CD              2607 	mov	r1,#(_pll_fast_cal >> 8)
   D224 7A 01              2608 	mov	r2,#(_pll_fast_cal >> 16)
   D226 12 00 B3           2609 	lcall	__sdcc_banked_call
                           2610 ;	../../shared/src/power.c:352: reg_DTX_CLK_OFF = 0;
   D229 90 A3 19           2611 	mov	dptr,#(_PM_CMN_REG1 + 0x0001)
   D22C E0                 2612 	movx	a,@dptr
   D22D 54 FE              2613 	anl	a,#0xfe
   D22F F0                 2614 	movx	@dptr,a
                           2615 ;	../../shared/src/power.c:353: delay01(10);
   D230 90 00 0A           2616 	mov	dptr,#0x000A
   D233 78 16              2617 	mov	r0,#_delay01
   D235 79 BC              2618 	mov	r1,#(_delay01 >> 8)
   D237 7A 02              2619 	mov	r2,#(_delay01 >> 16)
   D239 12 00 B3           2620 	lcall	__sdcc_banked_call
                           2621 ;	../../shared/src/power.c:354: reg_RESET_DTX	= 0;
   D23C 90 A0 0A           2622 	mov	dptr,#(_DTX_REG0 + 0x0002)
   D23F E0                 2623 	movx	a,@dptr
   D240 54 7F              2624 	anl	a,#0x7f
   D242 F0                 2625 	movx	@dptr,a
   D243 02 D2 D0           2626 	ljmp	00122$
   D246                    2627 00119$:
                           2628 ;	../../shared/src/power.c:361: if(mcuid== master_mcu) {
   D246 90 22 00           2629 	mov	dptr,#_MCU_CONTROL_LANE
   D249 E0                 2630 	movx	a,@dptr
   D24A FA                 2631 	mov	r2,a
   D24B 90 E6 50           2632 	mov	dptr,#_MCU_CONFIG
   D24E E0                 2633 	movx	a,@dptr
   D24F FB                 2634 	mov	r3,a
   D250 EA                 2635 	mov	a,r2
   D251 B5 03 15           2636 	cjne	a,ar3,00107$
                           2637 ;	../../shared/src/power.c:362: pll_fast_cal();
   D254 78 DF              2638 	mov	r0,#_pll_fast_cal
   D256 79 CD              2639 	mov	r1,#(_pll_fast_cal >> 8)
   D258 7A 01              2640 	mov	r2,#(_pll_fast_cal >> 16)
   D25A 12 00 B3           2641 	lcall	__sdcc_banked_call
                           2642 ;	../../shared/src/power.c:368: if(ring_pll_enabled) {
   D25D 30 12 09           2643 	jnb	_ring_pll_enabled,00107$
                           2644 ;	../../shared/src/power.c:369: ring_pll_fast_cal();
   D260 78 6C              2645 	mov	r0,#_ring_pll_fast_cal
   D262 79 E0              2646 	mov	r1,#(_ring_pll_fast_cal >> 8)
   D264 7A 01              2647 	mov	r2,#(_ring_pll_fast_cal >> 16)
   D266 12 00 B3           2648 	lcall	__sdcc_banked_call
   D269                    2649 00107$:
                           2650 ;	../../shared/src/power.c:374: if(mcuid== master_mcu) {
   D269 90 22 00           2651 	mov	dptr,#_MCU_CONTROL_LANE
   D26C E0                 2652 	movx	a,@dptr
   D26D FA                 2653 	mov	r2,a
   D26E 90 E6 50           2654 	mov	dptr,#_MCU_CONFIG
   D271 E0                 2655 	movx	a,@dptr
   D272 FB                 2656 	mov	r3,a
   D273 EA                 2657 	mov	a,r2
   D274 B5 03 2F           2658 	cjne	a,ar3,00111$
                           2659 ;	../../shared/src/power.c:380: reg_DTX_CLK_OFF = 0;	reg_DTX_CLK_OFF_RING = 0;
   D277 90 A3 19           2660 	mov	dptr,#(_PM_CMN_REG1 + 0x0001)
   D27A E0                 2661 	movx	a,@dptr
   D27B 54 FE              2662 	anl	a,#0xfe
   D27D F0                 2663 	movx	@dptr,a
   D27E 90 A3 18           2664 	mov	dptr,#_PM_CMN_REG1
   D281 E0                 2665 	movx	a,@dptr
   D282 54 FE              2666 	anl	a,#0xfe
   D284 F0                 2667 	movx	@dptr,a
                           2668 ;	../../shared/src/power.c:381: delay01(10);
   D285 90 00 0A           2669 	mov	dptr,#0x000A
   D288 78 16              2670 	mov	r0,#_delay01
   D28A 79 BC              2671 	mov	r1,#(_delay01 >> 8)
   D28C 7A 02              2672 	mov	r2,#(_delay01 >> 16)
   D28E 12 00 B3           2673 	lcall	__sdcc_banked_call
                           2674 ;	../../shared/src/power.c:382: reg_RESET_DTX	= 0;	reg_RESET_DTX_RING = 0;
   D291 90 A0 0A           2675 	mov	dptr,#(_DTX_REG0 + 0x0002)
   D294 E0                 2676 	movx	a,@dptr
   D295 54 7F              2677 	anl	a,#0x7f
   D297 F0                 2678 	movx	@dptr,a
   D298 90 A0 11           2679 	mov	dptr,#(_DTX_REG2 + 0x0001)
   D29B E0                 2680 	movx	a,@dptr
   D29C 54 FB              2681 	anl	a,#0xfb
   D29E F0                 2682 	movx	@dptr,a
                           2683 ;	../../shared/src/power.c:385: SYNC_SATUS_PLL_OR_PLL_OFF = 0;
   D29F 90 E6 B1           2684 	mov	dptr,#(_SYNC_INFO + 0x0001)
   D2A2 E4                 2685 	clr	a
   D2A3 F0                 2686 	movx	@dptr,a
   D2A4 80 1D              2687 	sjmp	00115$
   D2A6                    2688 00111$:
                           2689 ;	../../shared/src/power.c:388: if(ring_pll_enabled) {
   D2A6 30 12 1A           2690 	jnb	_ring_pll_enabled,00115$
                           2691 ;	../../shared/src/power.c:394: reg_DTX_CLK_OFF_RING = 0;
   D2A9 90 A3 18           2692 	mov	dptr,#_PM_CMN_REG1
   D2AC E0                 2693 	movx	a,@dptr
   D2AD 54 FE              2694 	anl	a,#0xfe
   D2AF F0                 2695 	movx	@dptr,a
                           2696 ;	../../shared/src/power.c:395: delay01(10);
   D2B0 90 00 0A           2697 	mov	dptr,#0x000A
   D2B3 78 16              2698 	mov	r0,#_delay01
   D2B5 79 BC              2699 	mov	r1,#(_delay01 >> 8)
   D2B7 7A 02              2700 	mov	r2,#(_delay01 >> 16)
   D2B9 12 00 B3           2701 	lcall	__sdcc_banked_call
                           2702 ;	../../shared/src/power.c:396: reg_RESET_DTX_RING = 0;
   D2BC 90 A0 11           2703 	mov	dptr,#(_DTX_REG2 + 0x0001)
   D2BF E0                 2704 	movx	a,@dptr
   D2C0 54 FB              2705 	anl	a,#0xfb
   D2C2 F0                 2706 	movx	@dptr,a
                           2707 ;	../../shared/src/power.c:401: while( SYNC_SATUS_PLL_OR_PLL_OFF ) {
   D2C3                    2708 00115$:
   D2C3 90 E6 B1           2709 	mov	dptr,#(_SYNC_INFO + 0x0001)
   D2C6 E0                 2710 	movx	a,@dptr
   D2C7 60 07              2711 	jz	00122$
                           2712 ;	../../shared/src/power.c:402: if(reg_PU_PLL_OR==0) break;
   D2C9 90 A3 1A           2713 	mov	dptr,#(_PM_CMN_REG1 + 0x0002)
   D2CC E0                 2714 	movx	a,@dptr
   D2CD 20 E4 F3           2715 	jb	acc.4,00115$
   D2D0                    2716 00122$:
   D2D0 02 00 C5           2717 	ljmp	__sdcc_banked_ret
                           2718 ;------------------------------------------------------------
                           2719 ;Allocation info for local variables in function 'pu_pll_off'
                           2720 ;------------------------------------------------------------
                           2721 ;------------------------------------------------------------
                           2722 ;	../../shared/src/power.c:408: void pu_pll_off(void) BANKING_CTRL { //off - reset_ana*, ana_pu_pll_*,  pll_clk_ready_*, dtx_clk_off*, reset_dtx*
                           2723 ;	-----------------------------------------
                           2724 ;	 function pu_pll_off
                           2725 ;	-----------------------------------------
   D2D3                    2726 _pu_pll_off:
                           2727 ;	../../shared/src/power.c:411: if(serdes_ring_lane_en && tag_ringpll_ind_en) {
   D2D3 90 66 23           2728 	mov	dptr,#_serdes_ring_lane_en
   D2D6 E0                 2729 	movx	a,@dptr
   D2D7 FA                 2730 	mov	r2,a
   D2D8 60 26              2731 	jz	00112$
   D2DA 90 E6 04           2732 	mov	dptr,#_CONTROL_CONFIG0
   D2DD E0                 2733 	movx	a,@dptr
   D2DE 30 E6 1F           2734 	jnb	acc.6,00112$
                           2735 ;	../../shared/src/power.c:412: if(ring_lane_sel) {
   D2E1 90 66 24           2736 	mov	dptr,#_ring_lane_sel
   D2E4 E0                 2737 	movx	a,@dptr
   D2E5 FA                 2738 	mov	r2,a
   D2E6 60 0C              2739 	jz	00102$
                           2740 ;	../../shared/src/power.c:413: pu_ringpll_off();
   D2E8 78 73              2741 	mov	r0,#_pu_ringpll_off
   D2EA 79 D3              2742 	mov	r1,#(_pu_ringpll_off >> 8)
   D2EC 7A 02              2743 	mov	r2,#(_pu_ringpll_off >> 16)
   D2EE 12 00 B3           2744 	lcall	__sdcc_banked_call
   D2F1 02 D3 7C           2745 	ljmp	00115$
   D2F4                    2746 00102$:
                           2747 ;	../../shared/src/power.c:416: pu_lcgpll_off();
   D2F4 78 AE              2748 	mov	r0,#_pu_lcgpll_off
   D2F6 79 D3              2749 	mov	r1,#(_pu_lcgpll_off >> 8)
   D2F8 7A 02              2750 	mov	r2,#(_pu_lcgpll_off >> 16)
   D2FA 12 00 B3           2751 	lcall	__sdcc_banked_call
   D2FD 02 D3 7C           2752 	ljmp	00115$
   D300                    2753 00112$:
                           2754 ;	../../shared/src/power.c:422: if(mcuid== master_mcu) {
   D300 90 22 00           2755 	mov	dptr,#_MCU_CONTROL_LANE
   D303 E0                 2756 	movx	a,@dptr
   D304 FA                 2757 	mov	r2,a
   D305 90 E6 50           2758 	mov	dptr,#_MCU_CONFIG
   D308 E0                 2759 	movx	a,@dptr
   D309 FB                 2760 	mov	r3,a
   D30A EA                 2761 	mov	a,r2
   D30B B5 03 61           2762 	cjne	a,ar3,00108$
                           2763 ;	../../shared/src/power.c:424: pll_clk_ready_all_0();
   D30E 78 0E              2764 	mov	r0,#_pll_clk_ready_all_0
   D310 79 D5              2765 	mov	r1,#(_pll_clk_ready_all_0 >> 8)
   D312 7A 02              2766 	mov	r2,#(_pll_clk_ready_all_0 >> 16)
   D314 12 00 B3           2767 	lcall	__sdcc_banked_call
                           2768 ;	../../shared/src/power.c:433: reg_DTX_CLK_OFF = 1;    reg_DTX_CLK_OFF_RING = 1;
   D317 90 A3 19           2769 	mov	dptr,#(_PM_CMN_REG1 + 0x0001)
   D31A E0                 2770 	movx	a,@dptr
   D31B 44 01              2771 	orl	a,#0x01
   D31D F0                 2772 	movx	@dptr,a
   D31E 90 A3 18           2773 	mov	dptr,#_PM_CMN_REG1
   D321 E0                 2774 	movx	a,@dptr
   D322 44 01              2775 	orl	a,#0x01
   D324 F0                 2776 	movx	@dptr,a
                           2777 ;	../../shared/src/power.c:434: reg_RESET_DTX   = 1;    reg_RESET_DTX_RING = 1;
   D325 90 A0 0A           2778 	mov	dptr,#(_DTX_REG0 + 0x0002)
   D328 E0                 2779 	movx	a,@dptr
   D329 44 80              2780 	orl	a,#0x80
   D32B F0                 2781 	movx	@dptr,a
   D32C 90 A0 11           2782 	mov	dptr,#(_DTX_REG2 + 0x0001)
   D32F E0                 2783 	movx	a,@dptr
   D330 44 04              2784 	orl	a,#0x04
   D332 F0                 2785 	movx	@dptr,a
                           2786 ;	../../shared/src/power.c:435: delay01(5); 
   D333 90 00 05           2787 	mov	dptr,#0x0005
   D336 78 16              2788 	mov	r0,#_delay01
   D338 79 BC              2789 	mov	r1,#(_delay01 >> 8)
   D33A 7A 02              2790 	mov	r2,#(_delay01 >> 16)
   D33C 12 00 B3           2791 	lcall	__sdcc_banked_call
                           2792 ;	../../shared/src/power.c:436: reg_RESET_ANA = 1;      reg_RESET_ANA_RING = 1;
   D33F 90 A3 19           2793 	mov	dptr,#(_PM_CMN_REG1 + 0x0001)
   D342 E0                 2794 	movx	a,@dptr
   D343 44 10              2795 	orl	a,#0x10
   D345 F0                 2796 	movx	@dptr,a
   D346 90 A3 33           2797 	mov	dptr,#(_PLLCAL_REG1 + 0x0003)
   D349 E0                 2798 	movx	a,@dptr
   D34A 44 08              2799 	orl	a,#0x08
   D34C F0                 2800 	movx	@dptr,a
                           2801 ;	../../shared/src/power.c:437: reg_ANA_PU_PLL_DLY = 0; reg_ANA_PU_PLL_DLY_RING = 0;
   D34D 90 A3 1B           2802 	mov	dptr,#(_PM_CMN_REG1 + 0x0003)
   D350 E0                 2803 	movx	a,@dptr
   D351 54 FE              2804 	anl	a,#0xfe
   D353 F0                 2805 	movx	@dptr,a
   D354 90 A3 4D           2806 	mov	dptr,#(_PM_CMN_REG2 + 0x0001)
   D357 E0                 2807 	movx	a,@dptr
   D358 54 FB              2808 	anl	a,#0xfb
   D35A F0                 2809 	movx	@dptr,a
                           2810 ;	../../shared/src/power.c:438: reg_ANA_PU_PLL = 0;     reg_ANA_PU_PLL_RING = 0;
   D35B 90 A3 1B           2811 	mov	dptr,#(_PM_CMN_REG1 + 0x0003)
   D35E E0                 2812 	movx	a,@dptr
   D35F 54 FB              2813 	anl	a,#0xfb
   D361 F0                 2814 	movx	@dptr,a
   D362 90 A3 24           2815 	mov	dptr,#_INPUT_CMN_PIN_REG2
   D365 E0                 2816 	movx	a,@dptr
   D366 54 DF              2817 	anl	a,#0xdf
   D368 F0                 2818 	movx	@dptr,a
                           2819 ;	../../shared/src/power.c:441: SYNC_SATUS_PLL_OR_PLL_OFF = 1;
   D369 90 E6 B1           2820 	mov	dptr,#(_SYNC_INFO + 0x0001)
   D36C 74 01              2821 	mov	a,#0x01
   D36E F0                 2822 	movx	@dptr,a
                           2823 ;	../../shared/src/power.c:456: while( SYNC_SATUS_PLL_OR_PLL_OFF==0 ) {
   D36F                    2824 00108$:
   D36F 90 E6 B1           2825 	mov	dptr,#(_SYNC_INFO + 0x0001)
   D372 E0                 2826 	movx	a,@dptr
   D373 70 07              2827 	jnz	00115$
                           2828 ;	../../shared/src/power.c:457: if(reg_PU_PLL_OR) break;
   D375 90 A3 1A           2829 	mov	dptr,#(_PM_CMN_REG1 + 0x0002)
   D378 E0                 2830 	movx	a,@dptr
   D379 30 E4 F3           2831 	jnb	acc.4,00108$
   D37C                    2832 00115$:
   D37C 02 00 C5           2833 	ljmp	__sdcc_banked_ret
                           2834 ;------------------------------------------------------------
                           2835 ;Allocation info for local variables in function 'DTL_DTX_DFE_clkoff_reset_0'
                           2836 ;------------------------------------------------------------
                           2837 ;------------------------------------------------------------
                           2838 ;	../../shared/src/power.c:463: void DTL_DTX_DFE_clkoff_reset_0(void) BANKING_CTRL {
                           2839 ;	-----------------------------------------
                           2840 ;	 function DTL_DTX_DFE_clkoff_reset_0
                           2841 ;	-----------------------------------------
   D37F                    2842 _DTL_DTX_DFE_clkoff_reset_0:
                           2843 ;	../../shared/src/power.c:465: reg_DTL_CLK_OFF_LANE= 0; 
   D37F 90 21 02           2844 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   D382 E0                 2845 	movx	a,@dptr
   D383 54 EF              2846 	anl	a,#0xef
   D385 F0                 2847 	movx	@dptr,a
                           2848 ;	../../shared/src/power.c:466: if(serdes_ring_lane_en) {
   D386 90 66 23           2849 	mov	dptr,#_serdes_ring_lane_en
   D389 E0                 2850 	movx	a,@dptr
   D38A FA                 2851 	mov	r2,a
   D38B 60 19              2852 	jz	00109$
                           2853 ;	../../shared/src/power.c:470: if(ring_lane_sel) reg_DTX_CLK_OFF_RING = 0;
   D38D 90 66 24           2854 	mov	dptr,#_ring_lane_sel
   D390 E0                 2855 	movx	a,@dptr
   D391 FA                 2856 	mov	r2,a
   D392 60 09              2857 	jz	00102$
   D394 90 A3 18           2858 	mov	dptr,#_PM_CMN_REG1
   D397 E0                 2859 	movx	a,@dptr
   D398 54 FE              2860 	anl	a,#0xfe
   D39A F0                 2861 	movx	@dptr,a
   D39B 80 28              2862 	sjmp	00110$
   D39D                    2863 00102$:
                           2864 ;	../../shared/src/power.c:472: else reg_DTX_CLK_OFF = 0;
   D39D 90 A3 19           2865 	mov	dptr,#(_PM_CMN_REG1 + 0x0001)
   D3A0 E0                 2866 	movx	a,@dptr
   D3A1 54 FE              2867 	anl	a,#0xfe
   D3A3 F0                 2868 	movx	@dptr,a
   D3A4 80 1F              2869 	sjmp	00110$
   D3A6                    2870 00109$:
                           2871 ;	../../shared/src/power.c:475: if (mcuid == master_mcu) {
   D3A6 90 22 00           2872 	mov	dptr,#_MCU_CONTROL_LANE
   D3A9 E0                 2873 	movx	a,@dptr
   D3AA FA                 2874 	mov	r2,a
   D3AB 90 E6 50           2875 	mov	dptr,#_MCU_CONFIG
   D3AE E0                 2876 	movx	a,@dptr
   D3AF FB                 2877 	mov	r3,a
   D3B0 EA                 2878 	mov	a,r2
   D3B1 B5 03 11           2879 	cjne	a,ar3,00110$
                           2880 ;	../../shared/src/power.c:476: reg_DTX_CLK_OFF = 0;
   D3B4 90 A3 19           2881 	mov	dptr,#(_PM_CMN_REG1 + 0x0001)
   D3B7 E0                 2882 	movx	a,@dptr
   D3B8 54 FE              2883 	anl	a,#0xfe
   D3BA F0                 2884 	movx	@dptr,a
                           2885 ;	../../shared/src/power.c:478: if (ring_pll_enabled)
   D3BB 30 12 07           2886 	jnb	_ring_pll_enabled,00110$
                           2887 ;	../../shared/src/power.c:479: reg_DTX_CLK_OFF_RING = 0;
   D3BE 90 A3 18           2888 	mov	dptr,#_PM_CMN_REG1
   D3C1 E0                 2889 	movx	a,@dptr
   D3C2 54 FE              2890 	anl	a,#0xfe
   D3C4 F0                 2891 	movx	@dptr,a
   D3C5                    2892 00110$:
                           2893 ;	../../shared/src/power.c:487: reg_DFE_CLK_OFF_LANE = 0; 
   D3C5 90 24 10           2894 	mov	dptr,#_RX_EQ_CLK_CTRL
   D3C8 E0                 2895 	movx	a,@dptr
   D3C9 54 FE              2896 	anl	a,#0xfe
   D3CB F0                 2897 	movx	@dptr,a
                           2898 ;	../../shared/src/power.c:489: delay01(10);	// spec required 1-2usec delay
   D3CC 90 00 0A           2899 	mov	dptr,#0x000A
   D3CF 78 16              2900 	mov	r0,#_delay01
   D3D1 79 BC              2901 	mov	r1,#(_delay01 >> 8)
   D3D3 7A 02              2902 	mov	r2,#(_delay01 >> 16)
   D3D5 12 00 B3           2903 	lcall	__sdcc_banked_call
                           2904 ;	../../shared/src/power.c:491: reg_RESET_DTL_LANE = 0;
   D3D8 90 21 02           2905 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   D3DB E0                 2906 	movx	a,@dptr
   D3DC 54 DF              2907 	anl	a,#0xdf
   D3DE F0                 2908 	movx	@dptr,a
                           2909 ;	../../shared/src/power.c:492: if(serdes_ring_lane_en) {
   D3DF 90 66 23           2910 	mov	dptr,#_serdes_ring_lane_en
   D3E2 E0                 2911 	movx	a,@dptr
   D3E3 FA                 2912 	mov	r2,a
   D3E4 60 19              2913 	jz	00119$
                           2914 ;	../../shared/src/power.c:496: if(ring_lane_sel) reg_RESET_DTX_RING = 0;
   D3E6 90 66 24           2915 	mov	dptr,#_ring_lane_sel
   D3E9 E0                 2916 	movx	a,@dptr
   D3EA FA                 2917 	mov	r2,a
   D3EB 60 09              2918 	jz	00112$
   D3ED 90 A0 11           2919 	mov	dptr,#(_DTX_REG2 + 0x0001)
   D3F0 E0                 2920 	movx	a,@dptr
   D3F1 54 FB              2921 	anl	a,#0xfb
   D3F3 F0                 2922 	movx	@dptr,a
   D3F4 80 28              2923 	sjmp	00120$
   D3F6                    2924 00112$:
                           2925 ;	../../shared/src/power.c:498: else reg_RESET_DTX = 0;
   D3F6 90 A0 0A           2926 	mov	dptr,#(_DTX_REG0 + 0x0002)
   D3F9 E0                 2927 	movx	a,@dptr
   D3FA 54 7F              2928 	anl	a,#0x7f
   D3FC F0                 2929 	movx	@dptr,a
   D3FD 80 1F              2930 	sjmp	00120$
   D3FF                    2931 00119$:
                           2932 ;	../../shared/src/power.c:501: if (mcuid == master_mcu) {
   D3FF 90 22 00           2933 	mov	dptr,#_MCU_CONTROL_LANE
   D402 E0                 2934 	movx	a,@dptr
   D403 FA                 2935 	mov	r2,a
   D404 90 E6 50           2936 	mov	dptr,#_MCU_CONFIG
   D407 E0                 2937 	movx	a,@dptr
   D408 FB                 2938 	mov	r3,a
   D409 EA                 2939 	mov	a,r2
   D40A B5 03 11           2940 	cjne	a,ar3,00120$
                           2941 ;	../../shared/src/power.c:502: reg_RESET_DTX = 0;
   D40D 90 A0 0A           2942 	mov	dptr,#(_DTX_REG0 + 0x0002)
   D410 E0                 2943 	movx	a,@dptr
   D411 54 7F              2944 	anl	a,#0x7f
   D413 F0                 2945 	movx	@dptr,a
                           2946 ;	../../shared/src/power.c:504: if (ring_pll_enabled)
   D414 30 12 07           2947 	jnb	_ring_pll_enabled,00120$
                           2948 ;	../../shared/src/power.c:505: reg_RESET_DTX_RING = 0;
   D417 90 A0 11           2949 	mov	dptr,#(_DTX_REG2 + 0x0001)
   D41A E0                 2950 	movx	a,@dptr
   D41B 54 FB              2951 	anl	a,#0xfb
   D41D F0                 2952 	movx	@dptr,a
   D41E                    2953 00120$:
                           2954 ;	../../shared/src/power.c:513: reg_RESET_DFE_LANE = 0;
   D41E 90 24 10           2955 	mov	dptr,#_RX_EQ_CLK_CTRL
   D421 E0                 2956 	movx	a,@dptr
   D422 54 FB              2957 	anl	a,#0xfb
   D424 F0                 2958 	movx	@dptr,a
   D425 02 00 C5           2959 	ljmp	__sdcc_banked_ret
                           2960 ;------------------------------------------------------------
                           2961 ;Allocation info for local variables in function 'DTL_DTX_DFE_clkoff_reset_1'
                           2962 ;------------------------------------------------------------
                           2963 ;dtx_off                   Allocated to registers r2 
                           2964 ;------------------------------------------------------------
                           2965 ;	../../shared/src/power.c:519: void DTL_DTX_DFE_clkoff_reset_1(bool dtx_off) BANKING_CTRL {
                           2966 ;	-----------------------------------------
                           2967 ;	 function DTL_DTX_DFE_clkoff_reset_1
                           2968 ;	-----------------------------------------
   D428                    2969 _DTL_DTX_DFE_clkoff_reset_1:
   D428 AA 82              2970 	mov	r2,dpl
                           2971 ;	../../shared/src/power.c:521: dtx_off |= (reg_PHY_ALIGN_OFF==0);
   D42A 90 A3 14           2972 	mov	dptr,#_SYSTEM
   D42D E0                 2973 	movx	a,@dptr
   D42E 03                 2974 	rr	a
   D42F 03                 2975 	rr	a
   D430 54 01              2976 	anl	a,#0x01
   D432 FB                 2977 	mov	r3,a
   D433 E4                 2978 	clr	a
   D434 BB 00 01           2979 	cjne	r3,#0x00,00114$
   D437 04                 2980 	inc	a
   D438                    2981 00114$:
   D438 42 02              2982 	orl	ar2,a
                           2983 ;	../../shared/src/power.c:522: reg_DTL_CLK_OFF_LANE= 1; 
   D43A 90 21 02           2984 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   D43D E0                 2985 	movx	a,@dptr
   D43E 44 10              2986 	orl	a,#0x10
   D440 F0                 2987 	movx	@dptr,a
                           2988 ;	../../shared/src/power.c:523: if(serdes_ring_lane_en) {
   D441 90 66 23           2989 	mov	dptr,#_serdes_ring_lane_en
   D444 E0                 2990 	movx	a,@dptr
   D445 FB                 2991 	mov	r3,a
   D446 60 27              2992 	jz	00107$
                           2993 ;	../../shared/src/power.c:527: if(ring_lane_sel) { reg_DTX_CLK_OFF_RING = 1; reg_RESET_DTX_RING = 1; }
   D448 90 66 24           2994 	mov	dptr,#_ring_lane_sel
   D44B E0                 2995 	movx	a,@dptr
   D44C FB                 2996 	mov	r3,a
   D44D 60 10              2997 	jz	00102$
   D44F 90 A3 18           2998 	mov	dptr,#_PM_CMN_REG1
   D452 E0                 2999 	movx	a,@dptr
   D453 44 01              3000 	orl	a,#0x01
   D455 F0                 3001 	movx	@dptr,a
   D456 90 A0 11           3002 	mov	dptr,#(_DTX_REG2 + 0x0001)
   D459 E0                 3003 	movx	a,@dptr
   D45A 44 04              3004 	orl	a,#0x04
   D45C F0                 3005 	movx	@dptr,a
   D45D 80 2F              3006 	sjmp	00108$
   D45F                    3007 00102$:
                           3008 ;	../../shared/src/power.c:529: else { reg_DTX_CLK_OFF = 1; reg_RESET_DTX = 1; }
   D45F 90 A3 19           3009 	mov	dptr,#(_PM_CMN_REG1 + 0x0001)
   D462 E0                 3010 	movx	a,@dptr
   D463 44 01              3011 	orl	a,#0x01
   D465 F0                 3012 	movx	@dptr,a
   D466 90 A0 0A           3013 	mov	dptr,#(_DTX_REG0 + 0x0002)
   D469 E0                 3014 	movx	a,@dptr
   D46A 44 80              3015 	orl	a,#0x80
   D46C F0                 3016 	movx	@dptr,a
   D46D 80 1F              3017 	sjmp	00108$
   D46F                    3018 00107$:
                           3019 ;	../../shared/src/power.c:531: else if(dtx_off) { 
   D46F EA                 3020 	mov	a,r2
   D470 60 1C              3021 	jz	00108$
                           3022 ;	../../shared/src/power.c:536: reg_DTX_CLK_OFF = 1; reg_DTX_CLK_OFF_RING = 1;
   D472 90 A3 19           3023 	mov	dptr,#(_PM_CMN_REG1 + 0x0001)
   D475 E0                 3024 	movx	a,@dptr
   D476 44 01              3025 	orl	a,#0x01
   D478 F0                 3026 	movx	@dptr,a
   D479 90 A3 18           3027 	mov	dptr,#_PM_CMN_REG1
   D47C E0                 3028 	movx	a,@dptr
   D47D 44 01              3029 	orl	a,#0x01
   D47F F0                 3030 	movx	@dptr,a
                           3031 ;	../../shared/src/power.c:537: reg_RESET_DTX = 1; reg_RESET_DTX_RING = 1;
   D480 90 A0 0A           3032 	mov	dptr,#(_DTX_REG0 + 0x0002)
   D483 E0                 3033 	movx	a,@dptr
   D484 44 80              3034 	orl	a,#0x80
   D486 F0                 3035 	movx	@dptr,a
   D487 90 A0 11           3036 	mov	dptr,#(_DTX_REG2 + 0x0001)
   D48A E0                 3037 	movx	a,@dptr
   D48B 44 04              3038 	orl	a,#0x04
   D48D F0                 3039 	movx	@dptr,a
   D48E                    3040 00108$:
                           3041 ;	../../shared/src/power.c:540: reg_DFE_CLK_OFF_LANE = 1; 
   D48E 90 24 10           3042 	mov	dptr,#_RX_EQ_CLK_CTRL
   D491 E0                 3043 	movx	a,@dptr
   D492 44 01              3044 	orl	a,#0x01
   D494 F0                 3045 	movx	@dptr,a
                           3046 ;	../../shared/src/power.c:541: reg_RESET_DTL_LANE = 1;
   D495 90 21 02           3047 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   D498 E0                 3048 	movx	a,@dptr
   D499 44 20              3049 	orl	a,#0x20
   D49B F0                 3050 	movx	@dptr,a
                           3051 ;	../../shared/src/power.c:542: CKCON = 0x07 ;  //MCU WAIT time the slowest
   D49C 75 8E 07           3052 	mov	_CKCON,#0x07
                           3053 ;	../../shared/src/power.c:543: reg_RESET_DFE_LANE = 1;
   D49F 90 24 10           3054 	mov	dptr,#_RX_EQ_CLK_CTRL
   D4A2 E0                 3055 	movx	a,@dptr
   D4A3 44 04              3056 	orl	a,#0x04
   D4A5 F0                 3057 	movx	@dptr,a
                           3058 ;	../../shared/src/power.c:544: CKCON = 0x00 ; //MCU WAIT time setting back to normal.
   D4A6 75 8E 00           3059 	mov	_CKCON,#0x00
   D4A9 02 00 C5           3060 	ljmp	__sdcc_banked_ret
                           3061 ;------------------------------------------------------------
                           3062 ;Allocation info for local variables in function 'DTL_DFE_clkoff_reset_1'
                           3063 ;------------------------------------------------------------
                           3064 ;dtx_off                   Allocated to registers 
                           3065 ;------------------------------------------------------------
                           3066 ;	../../shared/src/power.c:547: void DTL_DFE_clkoff_reset_1(bool dtx_off) BANKING_CTRL {
                           3067 ;	-----------------------------------------
                           3068 ;	 function DTL_DFE_clkoff_reset_1
                           3069 ;	-----------------------------------------
   D4AC                    3070 _DTL_DFE_clkoff_reset_1:
                           3071 ;	../../shared/src/power.c:549: dtx_off |= (reg_PHY_ALIGN_OFF==0);
   D4AC 90 A3 14           3072 	mov	dptr,#_SYSTEM
   D4AF E0                 3073 	movx	a,@dptr
   D4B0 03                 3074 	rr	a
   D4B1 03                 3075 	rr	a
   D4B2 54 01              3076 	anl	a,#0x01
                           3077 ;	../../shared/src/power.c:550: reg_DTL_CLK_OFF_LANE= 1; 
   D4B4 90 21 02           3078 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   D4B7 E0                 3079 	movx	a,@dptr
   D4B8 44 10              3080 	orl	a,#0x10
   D4BA F0                 3081 	movx	@dptr,a
                           3082 ;	../../shared/src/power.c:551: reg_DFE_CLK_OFF_LANE = 1; 
   D4BB 90 24 10           3083 	mov	dptr,#_RX_EQ_CLK_CTRL
   D4BE E0                 3084 	movx	a,@dptr
   D4BF 44 01              3085 	orl	a,#0x01
   D4C1 F0                 3086 	movx	@dptr,a
                           3087 ;	../../shared/src/power.c:552: reg_RESET_DTL_LANE = 1;
   D4C2 90 21 02           3088 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   D4C5 E0                 3089 	movx	a,@dptr
   D4C6 44 20              3090 	orl	a,#0x20
   D4C8 F0                 3091 	movx	@dptr,a
                           3092 ;	../../shared/src/power.c:553: CKCON = 0x07 ;  //MCU WAIT time the slowest
   D4C9 75 8E 07           3093 	mov	_CKCON,#0x07
                           3094 ;	../../shared/src/power.c:554: reg_RESET_DFE_LANE = 1;
   D4CC 90 24 10           3095 	mov	dptr,#_RX_EQ_CLK_CTRL
   D4CF E0                 3096 	movx	a,@dptr
   D4D0 44 04              3097 	orl	a,#0x04
   D4D2 F0                 3098 	movx	@dptr,a
                           3099 ;	../../shared/src/power.c:555: CKCON = 0x00 ; //MCU WAIT time setting back to normal.
   D4D3 75 8E 00           3100 	mov	_CKCON,#0x00
   D4D6 02 00 C5           3101 	ljmp	__sdcc_banked_ret
                           3102 	.area CSEG    (CODE)
                           3103 	.area CONST   (CODE)
                           3104 	.area CABS    (ABS,CODE)
