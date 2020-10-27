                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:30 2018
                              5 ;--------------------------------------------------------
                              6 	.module power_pcie
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
                            979 	.globl _Power_P0s_P1
                            980 	.globl _Power_P1_P2
                            981 	.globl _Power_P2_P1
                            982 	.globl _Power_P1_P0
                            983 	.globl _Power_P2_P0
                            984 	.globl _Power_P1CLKREQ_P1
                            985 	.globl _P0Off_TXDETRX
                            986 	.globl _Power_P0_TXDETRX
                            987 	.globl _Power_P1_TXDETRX
                            988 	.globl _Power_P2_TXDETRX
                            989 	.globl _Power_P2_BEACON
                            990 	.globl _txloz2hiz
                            991 	.globl _txhiz2loz
                            992 	.globl _txloz2hiz_quick
                            993 	.globl _txdetrx
                            994 ;--------------------------------------------------------
                            995 ; special function registers
                            996 ;--------------------------------------------------------
                            997 	.area RSEG    (ABS,DATA)
   0000                     998 	.org 0x0000
                    0080    999 _P0	=	0x0080
                    0082   1000 _DPL	=	0x0082
                    0083   1001 _DPH	=	0x0083
                    0086   1002 _WDTREL	=	0x0086
                    0087   1003 _PCON	=	0x0087
                    0088   1004 _TCON	=	0x0088
                    0089   1005 _TMOD	=	0x0089
                    008A   1006 _TL0	=	0x008a
                    008B   1007 _TL1	=	0x008b
                    008C   1008 _TH0	=	0x008c
                    008D   1009 _TH1	=	0x008d
                    008E   1010 _CKCON	=	0x008e
                    0090   1011 _P1	=	0x0090
                    0092   1012 _DPS	=	0x0092
                    0094   1013 _PSBANK	=	0x0094
                    0098   1014 _SCON	=	0x0098
                    0099   1015 _SBUF	=	0x0099
                    009A   1016 _IEN2	=	0x009a
                    00A0   1017 _P2	=	0x00a0
                    00A1   1018 _DMAS0	=	0x00a1
                    00A2   1019 _DMAS1	=	0x00a2
                    00A3   1020 _DMAS2	=	0x00a3
                    00A4   1021 _DMAT0	=	0x00a4
                    00A5   1022 _DMAT1	=	0x00a5
                    00A6   1023 _DMAT2	=	0x00a6
                    00A8   1024 _IEN0	=	0x00a8
                    00A9   1025 _IP0	=	0x00a9
                    00AA   1026 _S0RELL	=	0x00aa
                    00B0   1027 _P3	=	0x00b0
                    00B1   1028 _DMAC0	=	0x00b1
                    00B2   1029 _DMAC1	=	0x00b2
                    00B3   1030 _DMAC2	=	0x00b3
                    00B4   1031 _DMASEL	=	0x00b4
                    00B5   1032 _DMAM0	=	0x00b5
                    00B6   1033 _DMAM1	=	0x00b6
                    00B8   1034 _IEN1	=	0x00b8
                    00B9   1035 _IP1	=	0x00b9
                    00BA   1036 _S0RELH	=	0x00ba
                    00C0   1037 _IRCON	=	0x00c0
                    00C1   1038 _CCEN	=	0x00c1
                    00C8   1039 _T2CON	=	0x00c8
                    00CA   1040 _RCAP2L	=	0x00ca
                    00CB   1041 _RCAP2H	=	0x00cb
                    00CC   1042 _TL2	=	0x00cc
                    00CD   1043 _TH2	=	0x00cd
                    00D0   1044 _PSW	=	0x00d0
                    00D8   1045 _ADCON	=	0x00d8
                    00E0   1046 _ACC	=	0x00e0
                    00E8   1047 _EIE	=	0x00e8
                    00F0   1048 _B	=	0x00f0
                    00F7   1049 _SRST	=	0x00f7
                    8C8A   1050 _TMR0	=	0x8c8a
                    8D8B   1051 _TMR1	=	0x8d8b
                    CDCC   1052 _TMR2	=	0xcdcc
                    A2A1   1053 _DMASA	=	0xa2a1
                    A5A4   1054 _DMATA	=	0xa5a4
                    B2B1   1055 _DMAC	=	0xb2b1
                           1056 ;--------------------------------------------------------
                           1057 ; special function bits
                           1058 ;--------------------------------------------------------
                           1059 	.area RSEG    (ABS,DATA)
   0000                    1060 	.org 0x0000
                    0080   1061 _P0_0	=	0x0080
                    0081   1062 _P0_1	=	0x0081
                    0082   1063 _P0_2	=	0x0082
                    0083   1064 _P0_3	=	0x0083
                    0084   1065 _P0_4	=	0x0084
                    0085   1066 _P0_5	=	0x0085
                    0086   1067 _P0_6	=	0x0086
                    0087   1068 _P0_7	=	0x0087
                    0090   1069 _P1_0	=	0x0090
                    0091   1070 _P1_1	=	0x0091
                    0092   1071 _P1_2	=	0x0092
                    0093   1072 _P1_3	=	0x0093
                    0094   1073 _P1_4	=	0x0094
                    0095   1074 _P1_5	=	0x0095
                    0096   1075 _P1_6	=	0x0096
                    0097   1076 _P1_7	=	0x0097
                    00A0   1077 _P2_0	=	0x00a0
                    00A1   1078 _P2_1	=	0x00a1
                    00A2   1079 _P2_2	=	0x00a2
                    00A3   1080 _P2_3	=	0x00a3
                    00A4   1081 _P2_4	=	0x00a4
                    00A5   1082 _P2_5	=	0x00a5
                    00A6   1083 _P2_6	=	0x00a6
                    00A7   1084 _P2_7	=	0x00a7
                    00B0   1085 _P3_0	=	0x00b0
                    00B1   1086 _P3_1	=	0x00b1
                    00B2   1087 _P3_2	=	0x00b2
                    00B3   1088 _P3_3	=	0x00b3
                    00B4   1089 _P3_4	=	0x00b4
                    00B5   1090 _P3_5	=	0x00b5
                    00B6   1091 _P3_6	=	0x00b6
                    00B7   1092 _P3_7	=	0x00b7
                    0088   1093 _IT0	=	0x0088
                    0089   1094 _IE0	=	0x0089
                    008A   1095 _IT1	=	0x008a
                    008B   1096 _IE1	=	0x008b
                    008C   1097 _TR0	=	0x008c
                    008D   1098 _TF0	=	0x008d
                    008E   1099 _TR1	=	0x008e
                    008F   1100 _TF1	=	0x008f
                    00A8   1101 _EX0	=	0x00a8
                    00A9   1102 _ET0	=	0x00a9
                    00AA   1103 _EX1	=	0x00aa
                    00AB   1104 _ET1	=	0x00ab
                    00AC   1105 _ES	=	0x00ac
                    00AD   1106 _ET2	=	0x00ad
                    00AE   1107 _WDT	=	0x00ae
                    00AF   1108 _EA	=	0x00af
                    00B8   1109 _EX7	=	0x00b8
                    00B9   1110 _EX2	=	0x00b9
                    00BA   1111 _EX3	=	0x00ba
                    00BB   1112 _EX4	=	0x00bb
                    00BC   1113 _EX5	=	0x00bc
                    00BD   1114 _EX6	=	0x00bd
                    00BE   1115 _PS1	=	0x00be
                    009A   1116 _ES1	=	0x009a
                    009B   1117 _EX8	=	0x009b
                    009C   1118 _EX9	=	0x009c
                    009D   1119 _EX10	=	0x009d
                    009E   1120 _EX11	=	0x009e
                    009F   1121 _EX12	=	0x009f
                    0098   1122 _RI	=	0x0098
                    0099   1123 _TI	=	0x0099
                    00C6   1124 _TF2	=	0x00c6
                           1125 ;--------------------------------------------------------
                           1126 ; overlayable register banks
                           1127 ;--------------------------------------------------------
                           1128 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1129 	.ds 8
                           1130 ;--------------------------------------------------------
                           1131 ; internal ram data
                           1132 ;--------------------------------------------------------
                           1133 	.area DSEG    (DATA)
                           1134 ;--------------------------------------------------------
                           1135 ; overlayable items in internal ram 
                           1136 ;--------------------------------------------------------
                           1137 	.area OSEG    (OVR,DATA)
                           1138 ;--------------------------------------------------------
                           1139 ; indirectly addressable internal ram data
                           1140 ;--------------------------------------------------------
                           1141 	.area ISEG    (DATA)
                           1142 ;--------------------------------------------------------
                           1143 ; absolute internal ram data
                           1144 ;--------------------------------------------------------
                           1145 	.area IABS    (ABS,DATA)
                           1146 	.area IABS    (ABS,DATA)
                           1147 ;--------------------------------------------------------
                           1148 ; bit data
                           1149 ;--------------------------------------------------------
                           1150 	.area BSEG    (BIT)
                           1151 ;--------------------------------------------------------
                           1152 ; paged external ram data
                           1153 ;--------------------------------------------------------
                           1154 	.area PSEG    (PAG,XDATA)
                           1155 ;--------------------------------------------------------
                           1156 ; external ram data
                           1157 ;--------------------------------------------------------
                           1158 	.area XSEG    (XDATA)
                    1000   1159 _UPHY14_TRX_LANEPLL_ANAREG_TOP_128	=	0x1000
                    1004   1160 _UPHY14_TRX_LANEPLL_ANAREG_TOP_129	=	0x1004
                    1008   1161 _UPHY14_TRX_LANEPLL_ANAREG_TOP_130	=	0x1008
                    100C   1162 _UPHY14_TRX_LANEPLL_ANAREG_TOP_131	=	0x100c
                    1010   1163 _UPHY14_TRX_LANEPLL_ANAREG_TOP_132	=	0x1010
                    1014   1164 _UPHY14_TRX_LANEPLL_ANAREG_TOP_133	=	0x1014
                    1018   1165 _UPHY14_TRX_LANEPLL_ANAREG_TOP_134	=	0x1018
                    101C   1166 _UPHY14_TRX_LANEPLL_ANAREG_TOP_135	=	0x101c
                    1020   1167 _UPHY14_TRX_LANEPLL_ANAREG_TOP_136	=	0x1020
                    1024   1168 _UPHY14_TRX_LANEPLL_ANAREG_TOP_137	=	0x1024
                    1028   1169 _UPHY14_TRX_LANEPLL_ANAREG_TOP_138	=	0x1028
                    102C   1170 _UPHY14_TRX_LANEPLL_ANAREG_TOP_139	=	0x102c
                    1030   1171 _UPHY14_TRX_LANEPLL_ANAREG_TOP_140	=	0x1030
                    1034   1172 _UPHY14_TRX_LANEPLL_ANAREG_TOP_141	=	0x1034
                    1038   1173 _UPHY14_TRX_LANEPLL_ANAREG_TOP_142	=	0x1038
                    103C   1174 _UPHY14_TRX_LANEPLL_ANAREG_TOP_143	=	0x103c
                    0200   1175 _UPHY14_TRX_ANAREG_TOP_128	=	0x0200
                    0204   1176 _UPHY14_TRX_ANAREG_TOP_129	=	0x0204
                    0208   1177 _UPHY14_TRX_ANAREG_TOP_130	=	0x0208
                    020C   1178 _UPHY14_TRX_ANAREG_TOP_131	=	0x020c
                    0210   1179 _UPHY14_TRX_ANAREG_TOP_132	=	0x0210
                    0214   1180 _UPHY14_TRX_ANAREG_TOP_133	=	0x0214
                    0218   1181 _UPHY14_TRX_ANAREG_TOP_134	=	0x0218
                    021C   1182 _UPHY14_TRX_ANAREG_TOP_135	=	0x021c
                    0220   1183 _UPHY14_TRX_ANAREG_TOP_136	=	0x0220
                    0224   1184 _UPHY14_TRX_ANAREG_TOP_137	=	0x0224
                    0228   1185 _UPHY14_TRX_ANAREG_TOP_138	=	0x0228
                    022C   1186 _UPHY14_TRX_ANAREG_TOP_139	=	0x022c
                    0230   1187 _UPHY14_TRX_ANAREG_TOP_140	=	0x0230
                    0234   1188 _UPHY14_TRX_ANAREG_TOP_141	=	0x0234
                    0238   1189 _UPHY14_TRX_ANAREG_TOP_142	=	0x0238
                    023C   1190 _UPHY14_TRX_ANAREG_TOP_143	=	0x023c
                    0240   1191 _UPHY14_TRX_ANAREG_TOP_144	=	0x0240
                    0244   1192 _UPHY14_TRX_ANAREG_TOP_145	=	0x0244
                    0248   1193 _UPHY14_TRX_ANAREG_TOP_146	=	0x0248
                    024C   1194 _UPHY14_TRX_ANAREG_TOP_147	=	0x024c
                    0250   1195 _UPHY14_TRX_ANAREG_TOP_148	=	0x0250
                    0254   1196 _UPHY14_TRX_ANAREG_TOP_149	=	0x0254
                    0258   1197 _UPHY14_TRX_ANAREG_TOP_150	=	0x0258
                    025C   1198 _UPHY14_TRX_ANAREG_TOP_151	=	0x025c
                    0260   1199 _UPHY14_TRX_ANAREG_TOP_152	=	0x0260
                    0264   1200 _UPHY14_TRX_ANAREG_TOP_153	=	0x0264
                    0268   1201 _UPHY14_TRX_ANAREG_TOP_154	=	0x0268
                    026C   1202 _UPHY14_TRX_ANAREG_TOP_155	=	0x026c
                    0270   1203 _UPHY14_TRX_ANAREG_TOP_156	=	0x0270
                    0274   1204 _UPHY14_TRX_ANAREG_TOP_157	=	0x0274
                    0000   1205 _UPHY14_TRX_ANAREG_BOT_0	=	0x0000
                    0004   1206 _UPHY14_TRX_ANAREG_BOT_1	=	0x0004
                    0008   1207 _UPHY14_TRX_ANAREG_BOT_2	=	0x0008
                    000C   1208 _UPHY14_TRX_ANAREG_BOT_3	=	0x000c
                    0010   1209 _UPHY14_TRX_ANAREG_BOT_4	=	0x0010
                    0014   1210 _UPHY14_TRX_ANAREG_BOT_5	=	0x0014
                    0018   1211 _UPHY14_TRX_ANAREG_BOT_6	=	0x0018
                    001C   1212 _UPHY14_TRX_ANAREG_BOT_7	=	0x001c
                    0020   1213 _UPHY14_TRX_ANAREG_BOT_8	=	0x0020
                    0024   1214 _UPHY14_TRX_ANAREG_BOT_9	=	0x0024
                    0028   1215 _UPHY14_TRX_ANAREG_BOT_10	=	0x0028
                    002C   1216 _UPHY14_TRX_ANAREG_BOT_11	=	0x002c
                    0030   1217 _UPHY14_TRX_ANAREG_BOT_12	=	0x0030
                    0034   1218 _UPHY14_TRX_ANAREG_BOT_13	=	0x0034
                    0038   1219 _UPHY14_TRX_ANAREG_BOT_14	=	0x0038
                    003C   1220 _UPHY14_TRX_ANAREG_BOT_15	=	0x003c
                    0040   1221 _UPHY14_TRX_ANAREG_BOT_16	=	0x0040
                    0044   1222 _UPHY14_TRX_ANAREG_BOT_17	=	0x0044
                    0048   1223 _UPHY14_TRX_ANAREG_BOT_18	=	0x0048
                    004C   1224 _UPHY14_TRX_ANAREG_BOT_19	=	0x004c
                    0050   1225 _UPHY14_TRX_ANAREG_BOT_20	=	0x0050
                    0054   1226 _UPHY14_TRX_ANAREG_BOT_21	=	0x0054
                    0058   1227 _UPHY14_TRX_ANAREG_BOT_22	=	0x0058
                    005C   1228 _UPHY14_TRX_ANAREG_BOT_23	=	0x005c
                    0060   1229 _UPHY14_TRX_ANAREG_BOT_24	=	0x0060
                    0064   1230 _UPHY14_TRX_ANAREG_BOT_25	=	0x0064
                    0068   1231 _UPHY14_TRX_ANAREG_BOT_26	=	0x0068
                    006C   1232 _UPHY14_TRX_ANAREG_BOT_27	=	0x006c
                    0070   1233 _UPHY14_TRX_ANAREG_BOT_28	=	0x0070
                    0074   1234 _UPHY14_TRX_ANAREG_BOT_29	=	0x0074
                    0078   1235 _UPHY14_TRX_ANAREG_BOT_30	=	0x0078
                    007C   1236 _UPHY14_TRX_ANAREG_BOT_31	=	0x007c
                    0080   1237 _UPHY14_TRX_ANAREG_BOT_32	=	0x0080
                    0478   1238 _ANA_DFEE_REG_1E	=	0x0478
                    047C   1239 _ANA_DFEE_REG_1F	=	0x047c
                    0480   1240 _ANA_DFEE_REG_20	=	0x0480
                    0484   1241 _ANA_DFEE_REG_21	=	0x0484
                    0488   1242 _ANA_DFEE_REG_22	=	0x0488
                    048C   1243 _ANA_DFEE_REG_23	=	0x048c
                    0490   1244 _ANA_DFEE_REG_24	=	0x0490
                    0494   1245 _ANA_DFEE_REG_25	=	0x0494
                    0498   1246 _ANA_DFEE_REG_26	=	0x0498
                    049C   1247 _ANA_DFEE_REG_27	=	0x049c
                    0400   1248 _ANA_DFEE_REG_00	=	0x0400
                    0404   1249 _ANA_DFEE_REG_01	=	0x0404
                    0408   1250 _ANA_DFEE_REG_02	=	0x0408
                    040C   1251 _ANA_DFEE_REG_03	=	0x040c
                    0410   1252 _ANA_DFEE_REG_04	=	0x0410
                    0414   1253 _ANA_DFEE_REG_05	=	0x0414
                    0418   1254 _ANA_DFEE_REG_06	=	0x0418
                    041C   1255 _ANA_DFEE_REG_07	=	0x041c
                    0420   1256 _ANA_DFEE_REG_08	=	0x0420
                    0424   1257 _ANA_DFEE_REG_09	=	0x0424
                    0428   1258 _ANA_DFEE_REG_0A	=	0x0428
                    042C   1259 _ANA_DFEE_REG_0B	=	0x042c
                    0430   1260 _ANA_DFEE_REG_0C	=	0x0430
                    0434   1261 _ANA_DFEE_REG_0D	=	0x0434
                    0438   1262 _ANA_DFEE_REG_0E	=	0x0438
                    043C   1263 _ANA_DFEE_REG_0F	=	0x043c
                    0440   1264 _ANA_DFEE_REG_10	=	0x0440
                    0444   1265 _ANA_DFEE_REG_11	=	0x0444
                    0448   1266 _ANA_DFEE_REG_12	=	0x0448
                    044C   1267 _ANA_DFEE_REG_13	=	0x044c
                    0450   1268 _ANA_DFEE_REG_14	=	0x0450
                    0454   1269 _ANA_DFEE_REG_15	=	0x0454
                    0458   1270 _ANA_DFEE_REG_16	=	0x0458
                    045C   1271 _ANA_DFEE_REG_17	=	0x045c
                    0460   1272 _ANA_DFEE_REG_18	=	0x0460
                    0464   1273 _ANA_DFEE_REG_19	=	0x0464
                    0468   1274 _ANA_DFEE_REG_1A	=	0x0468
                    046C   1275 _ANA_DFEE_REG_1B	=	0x046c
                    0470   1276 _ANA_DFEE_REG_1C	=	0x0470
                    0474   1277 _ANA_DFEE_REG_1D	=	0x0474
                    0830   1278 _ANA_DFEO_REG_0C	=	0x0830
                    0834   1279 _ANA_DFEO_REG_0D	=	0x0834
                    0838   1280 _ANA_DFEO_REG_0E	=	0x0838
                    083C   1281 _ANA_DFEO_REG_0F	=	0x083c
                    0840   1282 _ANA_DFEO_REG_10	=	0x0840
                    0844   1283 _ANA_DFEO_REG_11	=	0x0844
                    0848   1284 _ANA_DFEO_REG_12	=	0x0848
                    084C   1285 _ANA_DFEO_REG_13	=	0x084c
                    0850   1286 _ANA_DFEO_REG_14	=	0x0850
                    0854   1287 _ANA_DFEO_REG_15	=	0x0854
                    0858   1288 _ANA_DFEO_REG_16	=	0x0858
                    085C   1289 _ANA_DFEO_REG_17	=	0x085c
                    0860   1290 _ANA_DFEO_REG_18	=	0x0860
                    0864   1291 _ANA_DFEO_REG_19	=	0x0864
                    0868   1292 _ANA_DFEO_REG_1A	=	0x0868
                    086C   1293 _ANA_DFEO_REG_1B	=	0x086c
                    0870   1294 _ANA_DFEO_REG_1C	=	0x0870
                    0874   1295 _ANA_DFEO_REG_1D	=	0x0874
                    0878   1296 _ANA_DFEO_REG_1E	=	0x0878
                    087C   1297 _ANA_DFEO_REG_1F	=	0x087c
                    0880   1298 _ANA_DFEO_REG_20	=	0x0880
                    0884   1299 _ANA_DFEO_REG_21	=	0x0884
                    0888   1300 _ANA_DFEO_REG_22	=	0x0888
                    088C   1301 _ANA_DFEO_REG_23	=	0x088c
                    0890   1302 _ANA_DFEO_REG_24	=	0x0890
                    0894   1303 _ANA_DFEO_REG_25	=	0x0894
                    0898   1304 _ANA_DFEO_REG_26	=	0x0898
                    089C   1305 _ANA_DFEO_REG_27	=	0x089c
                    0800   1306 _ANA_DFEO_REG_00	=	0x0800
                    0804   1307 _ANA_DFEO_REG_01	=	0x0804
                    0808   1308 _ANA_DFEO_REG_02	=	0x0808
                    080C   1309 _ANA_DFEO_REG_03	=	0x080c
                    0810   1310 _ANA_DFEO_REG_04	=	0x0810
                    0814   1311 _ANA_DFEO_REG_05	=	0x0814
                    0818   1312 _ANA_DFEO_REG_06	=	0x0818
                    081C   1313 _ANA_DFEO_REG_07	=	0x081c
                    0820   1314 _ANA_DFEO_REG_08	=	0x0820
                    0824   1315 _ANA_DFEO_REG_09	=	0x0824
                    0828   1316 _ANA_DFEO_REG_0A	=	0x0828
                    082C   1317 _ANA_DFEO_REG_0B	=	0x082c
                    8200   1318 _UPHY14_CMN_ANAREG_TOP_128	=	0x8200
                    8204   1319 _UPHY14_CMN_ANAREG_TOP_129	=	0x8204
                    8208   1320 _UPHY14_CMN_ANAREG_TOP_130	=	0x8208
                    820C   1321 _UPHY14_CMN_ANAREG_TOP_131	=	0x820c
                    8210   1322 _UPHY14_CMN_ANAREG_TOP_132	=	0x8210
                    8214   1323 _UPHY14_CMN_ANAREG_TOP_133	=	0x8214
                    8218   1324 _UPHY14_CMN_ANAREG_TOP_134	=	0x8218
                    821C   1325 _UPHY14_CMN_ANAREG_TOP_135	=	0x821c
                    8220   1326 _UPHY14_CMN_ANAREG_TOP_136	=	0x8220
                    8224   1327 _UPHY14_CMN_ANAREG_TOP_137	=	0x8224
                    8228   1328 _UPHY14_CMN_ANAREG_TOP_138	=	0x8228
                    822C   1329 _UPHY14_CMN_ANAREG_TOP_139	=	0x822c
                    8230   1330 _UPHY14_CMN_ANAREG_TOP_140	=	0x8230
                    8234   1331 _UPHY14_CMN_ANAREG_TOP_141	=	0x8234
                    8238   1332 _UPHY14_CMN_ANAREG_TOP_142	=	0x8238
                    823C   1333 _UPHY14_CMN_ANAREG_TOP_143	=	0x823c
                    8240   1334 _UPHY14_CMN_ANAREG_TOP_144	=	0x8240
                    8244   1335 _UPHY14_CMN_ANAREG_TOP_145	=	0x8244
                    8248   1336 _UPHY14_CMN_ANAREG_TOP_146	=	0x8248
                    824C   1337 _UPHY14_CMN_ANAREG_TOP_147	=	0x824c
                    8250   1338 _UPHY14_CMN_ANAREG_TOP_148	=	0x8250
                    8254   1339 _UPHY14_CMN_ANAREG_TOP_149	=	0x8254
                    8258   1340 _UPHY14_CMN_ANAREG_TOP_150	=	0x8258
                    825C   1341 _UPHY14_CMN_ANAREG_TOP_151	=	0x825c
                    8260   1342 _UPHY14_CMN_ANAREG_TOP_152	=	0x8260
                    8264   1343 _UPHY14_CMN_ANAREG_TOP_153	=	0x8264
                    8268   1344 _UPHY14_CMN_ANAREG_TOP_154	=	0x8268
                    826C   1345 _UPHY14_CMN_ANAREG_TOP_155	=	0x826c
                    8270   1346 _UPHY14_CMN_ANAREG_TOP_156	=	0x8270
                    8274   1347 _UPHY14_CMN_ANAREG_TOP_157	=	0x8274
                    8278   1348 _UPHY14_CMN_ANAREG_TOP_158	=	0x8278
                    827C   1349 _UPHY14_CMN_ANAREG_TOP_159	=	0x827c
                    8280   1350 _UPHY14_CMN_ANAREG_TOP_160	=	0x8280
                    8284   1351 _UPHY14_CMN_ANAREG_TOP_161	=	0x8284
                    8288   1352 _UPHY14_CMN_ANAREG_TOP_162	=	0x8288
                    828C   1353 _UPHY14_CMN_ANAREG_TOP_163	=	0x828c
                    8290   1354 _UPHY14_CMN_ANAREG_TOP_164	=	0x8290
                    8294   1355 _UPHY14_CMN_ANAREG_TOP_165	=	0x8294
                    8298   1356 _UPHY14_CMN_ANAREG_TOP_166	=	0x8298
                    829C   1357 _UPHY14_CMN_ANAREG_TOP_167	=	0x829c
                    82A0   1358 _UPHY14_CMN_ANAREG_TOP_168	=	0x82a0
                    82A4   1359 _UPHY14_CMN_ANAREG_TOP_169	=	0x82a4
                    82A8   1360 _UPHY14_CMN_ANAREG_TOP_170	=	0x82a8
                    82AC   1361 _UPHY14_CMN_ANAREG_TOP_171	=	0x82ac
                    82B0   1362 _UPHY14_CMN_ANAREG_TOP_172	=	0x82b0
                    82B4   1363 _UPHY14_CMN_ANAREG_TOP_173	=	0x82b4
                    82B8   1364 _UPHY14_CMN_ANAREG_TOP_174	=	0x82b8
                    82BC   1365 _UPHY14_CMN_ANAREG_TOP_175	=	0x82bc
                    82C0   1366 _UPHY14_CMN_ANAREG_TOP_176	=	0x82c0
                    82C4   1367 _UPHY14_CMN_ANAREG_TOP_177	=	0x82c4
                    82C8   1368 _UPHY14_CMN_ANAREG_TOP_178	=	0x82c8
                    82CC   1369 _UPHY14_CMN_ANAREG_TOP_179	=	0x82cc
                    82D0   1370 _UPHY14_CMN_ANAREG_TOP_180	=	0x82d0
                    82D4   1371 _UPHY14_CMN_ANAREG_TOP_181	=	0x82d4
                    82D8   1372 _UPHY14_CMN_ANAREG_TOP_182	=	0x82d8
                    82DC   1373 _UPHY14_CMN_ANAREG_TOP_183	=	0x82dc
                    82E0   1374 _UPHY14_CMN_ANAREG_TOP_184	=	0x82e0
                    82E4   1375 _UPHY14_CMN_ANAREG_TOP_185	=	0x82e4
                    82E8   1376 _UPHY14_CMN_ANAREG_TOP_186	=	0x82e8
                    82EC   1377 _UPHY14_CMN_ANAREG_TOP_187	=	0x82ec
                    82F0   1378 _UPHY14_CMN_ANAREG_TOP_188	=	0x82f0
                    82F4   1379 _UPHY14_CMN_ANAREG_TOP_189	=	0x82f4
                    82F8   1380 _UPHY14_CMN_ANAREG_TOP_190	=	0x82f8
                    82FC   1381 _UPHY14_CMN_ANAREG_TOP_191	=	0x82fc
                    8300   1382 _UPHY14_CMN_ANAREG_TOP_192	=	0x8300
                    8304   1383 _UPHY14_CMN_ANAREG_TOP_193	=	0x8304
                    8308   1384 _UPHY14_CMN_ANAREG_TOP_194	=	0x8308
                    830C   1385 _UPHY14_CMN_ANAREG_TOP_195	=	0x830c
                    8310   1386 _UPHY14_CMN_ANAREG_TOP_196	=	0x8310
                    8314   1387 _UPHY14_CMN_ANAREG_TOP_197	=	0x8314
                    8318   1388 _UPHY14_CMN_ANAREG_TOP_198	=	0x8318
                    831C   1389 _UPHY14_CMN_ANAREG_TOP_199	=	0x831c
                    8320   1390 _UPHY14_CMN_ANAREG_TOP_200	=	0x8320
                    8324   1391 _UPHY14_CMN_ANAREG_TOP_201	=	0x8324
                    8328   1392 _UPHY14_CMN_ANAREG_TOP_202	=	0x8328
                    832C   1393 _UPHY14_CMN_ANAREG_TOP_203	=	0x832c
                    8330   1394 _UPHY14_CMN_ANAREG_TOP_204	=	0x8330
                    8334   1395 _UPHY14_CMN_ANAREG_TOP_205	=	0x8334
                    8338   1396 _UPHY14_CMN_ANAREG_TOP_206	=	0x8338
                    833C   1397 _UPHY14_CMN_ANAREG_TOP_207	=	0x833c
                    8340   1398 _UPHY14_CMN_ANAREG_TOP_208	=	0x8340
                    8344   1399 _UPHY14_CMN_ANAREG_TOP_209	=	0x8344
                    8348   1400 _UPHY14_CMN_ANAREG_TOP_210	=	0x8348
                    834C   1401 _UPHY14_CMN_ANAREG_TOP_211	=	0x834c
                    8350   1402 _UPHY14_CMN_ANAREG_TOP_212	=	0x8350
                    8354   1403 _UPHY14_CMN_ANAREG_TOP_213	=	0x8354
                    8358   1404 _UPHY14_CMN_ANAREG_TOP_214	=	0x8358
                    2000   1405 _PM_CTRL_TX_LANE_REG1_LANE	=	0x2000
                    2004   1406 _PM_CTRL_TX_LANE_REG2_LANE	=	0x2004
                    2008   1407 _INPUT_TX_PIN_REG0_LANE	=	0x2008
                    200C   1408 _INPUT_TX_PIN_REG1_LANE	=	0x200c
                    2010   1409 _INPUT_TX_PIN_REG2_LANE	=	0x2010
                    2014   1410 _INPUT_TX_PIN_REG3_LANE	=	0x2014
                    2018   1411 _PM_CTRL_INTERRUPT_REG1_LANE	=	0x2018
                    201C   1412 _PM_CTRL_INTERRUPT_REG2	=	0x201c
                    2020   1413 _CLKGEN_TX_LANE_REG1_LANE	=	0x2020
                    2024   1414 _TX_SPEED_CONVERT_LANE	=	0x2024
                    2028   1415 _SPD_CTRL_INTERRUPT_REG1_LANE	=	0x2028
                    202C   1416 _SPD_CTRL_INTERRUPT_REG2	=	0x202c
                    2030   1417 _SPD_CTRL_TX_LANE_REG1_LANE	=	0x2030
                    2034   1418 _TX_SYSTEM_LANE	=	0x2034
                    203C   1419 _INPUT_TX_PIN_REG4_LANE	=	0x203c
                    2040   1420 _TX_CALIBRATION_LANE	=	0x2040
                    2044   1421 _DIG_TX_RSVD_REG0	=	0x2044
                    2048   1422 _INPUT_TX_PIN_REG5_LANE	=	0x2048
                    204C   1423 __FIELDNAME__LANE	=	0x204c
                    2050   1424 _PM_CTRL_INTERRUPT_ISR_REG1_LANE	=	0x2050
                    2054   1425 _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE	=	0x2054
                    2058   1426 _ANALOG_TX_REALTIME_REG_1	=	0x2058
                    205C   1427 _MON_TOP	=	0x205c
                    2100   1428 _PM_CTRL_RX_LANE_REG1_LANE	=	0x2100
                    2104   1429 _RX_SYSTEM_LANE	=	0x2104
                    2108   1430 _INPUT_RX_PIN_REG0_LANE	=	0x2108
                    210C   1431 _INPUT_RX_PIN_REG1_LANE	=	0x210c
                    2110   1432 _INPUT_RX_PIN_REG2_LANE	=	0x2110
                    2114   1433 _SPD_CTRL_RX_LANE_REG1_LANE	=	0x2114
                    2118   1434 _DIG_RX_RSVD_REG0	=	0x2118
                    211C   1435 _CLKGEN_RX_LANE_REG1_LANE	=	0x211c
                    2120   1436 _FRAME_SYNC_DET_REG0	=	0x2120
                    2124   1437 _FRAME_SYNC_DET_REG1	=	0x2124
                    2128   1438 _FRAME_SYNC_DET_REG2	=	0x2128
                    212C   1439 _FRAME_SYNC_DET_REG3	=	0x212c
                    2130   1440 _FRAME_SYNC_DET_REG4	=	0x2130
                    2134   1441 _FRAME_SYNC_DET_REG5	=	0x2134
                    2138   1442 _FRAME_SYNC_DET_REG6	=	0x2138
                    213C   1443 _CDR_LOCK_REG	=	0x213c
                    2140   1444 _RX_LANE_INTERRUPT	=	0x2140
                    2144   1445 _RX_LANE_INTERRUPT_MASK	=	0x2144
                    2148   1446 _RX_DATA_PATH_REG	=	0x2148
                    214C   1447 _INPUT_RX_PIN_REG3_LANE	=	0x214c
                    2150   1448 _RX_CALIBRATION_REG	=	0x2150
                    2158   1449 _RX_LANE_INTERRUPT_REG1	=	0x2158
                    2160   1450 _DTL_REG0	=	0x2160
                    2164   1451 _DTL_REG1	=	0x2164
                    2168   1452 _DTL_REG2	=	0x2168
                    216C   1453 _DTL_REG3	=	0x216c
                    2170   1454 _SQ_REG0	=	0x2170
                    4000   1455 _LANE_CFG0	=	0x4000
                    4004   1456 _LANE_STATUS0	=	0x4004
                    4008   1457 _LANE_CFG_STATUS2_LANE	=	0x4008
                    400C   1458 _LANE_CFG2_LANE	=	0x400c
                    4010   1459 _LANE_CFG4	=	0x4010
                    4014   1460 _LANE_CFG_STATUS3_LANE	=	0x4014
                    4018   1461 _LANE_DP_PIE8_CFG0_LANE	=	0x4018
                    401C   1462 _LANE_USB_DP_CFG1_LANE	=	0x401c
                    4020   1463 _LANE_USB_DP_CFG2_LANE	=	0x4020
                    4024   1464 _LANE_EQ_CFG0_LANE	=	0x4024
                    4028   1465 _LANE_EQ_CFG1_LANE	=	0x4028
                    402C   1466 _LANE_PRESET_CFG0_LANE	=	0x402c
                    4030   1467 _LANE_PRESET_CFG2_LANE	=	0x4030
                    4034   1468 _LANE_PRESET_CFG4_LANE	=	0x4034
                    4038   1469 _LANE_PRESET_CFG6_LANE	=	0x4038
                    403C   1470 _LANE_PRESET_CFG8_LANE	=	0x403c
                    4040   1471 _LANE_PRESET_CFG10_LANE	=	0x4040
                    4044   1472 _LANE_PRESET_CFG12_LANE	=	0x4044
                    4048   1473 _LANE_PRESET_CFG14_LANE	=	0x4048
                    404C   1474 _LANE_PRESET_CFG16_LANE	=	0x404c
                    4050   1475 _LANE_COEFF_MAX0_LANE	=	0x4050
                    4054   1476 _LANE_REMOTE_SET_LANE	=	0x4054
                    4058   1477 _LANE_EQ_16G_CFG0_LANE	=	0x4058
                    405C   1478 _LANE_16G_PRESET_CFG0_LANE	=	0x405c
                    4060   1479 _LANE_16G_PRESET_CFG2_LANE	=	0x4060
                    4064   1480 _LANE_16G_PRESET_CFG4_LANE	=	0x4064
                    4068   1481 _LANE_16G_PRESET_CFG6_LANE	=	0x4068
                    406C   1482 _LANE_16G_PRESET_CFG8_LANE	=	0x406c
                    4070   1483 _LANE_16G_PRESET_CFG10_LANE	=	0x4070
                    4074   1484 _LANE_16G_PRESET_CFG12_LANE	=	0x4074
                    4078   1485 _LANE_16G_PRESET_CFG14_LANE	=	0x4078
                    407C   1486 _LANE_16G_PRESET_CFG16_LANE	=	0x407c
                    4080   1487 _LANE_EQ_32G_CFG0_LANE	=	0x4080
                    4084   1488 _LANE_32G_PRESET_CFG0_LANE	=	0x4084
                    4088   1489 _LANE_32G_PRESET_CFG2_LANE	=	0x4088
                    408C   1490 _LANE_32G_PRESET_CFG4_LANE	=	0x408c
                    4090   1491 _LANE_32G_PRESET_CFG6_LANE	=	0x4090
                    4094   1492 _LANE_32G_PRESET_CFG8_LANE	=	0x4094
                    4098   1493 _LANE_32G_PRESET_CFG10_LANE	=	0x4098
                    409C   1494 _LANE_32G_PRESET_CFG12_LANE	=	0x409c
                    40A0   1495 _LANE_32G_PRESET_CFG14_LANE	=	0x40a0
                    40A4   1496 _LANE_32G_PRESET_CFG16_LANE	=	0x40a4
                    2200   1497 _MCU_CONTROL_LANE	=	0x2200
                    2204   1498 _MCU_GPIO	=	0x2204
                    2208   1499 _CACHE_DEBUG0	=	0x2208
                    220C   1500 _CACHE_DEBUG1	=	0x220c
                    2210   1501 _LANE_SYSTEM0	=	0x2210
                    2230   1502 _MCU_STATUS0_LANE	=	0x2230
                    2234   1503 _MCU_STATUS1_LANE	=	0x2234
                    2238   1504 _MCU_STATUS2_LANE	=	0x2238
                    223C   1505 _MCU_STATUS3_LANE	=	0x223c
                    2240   1506 _MCU_INT0_CONTROL	=	0x2240
                    2244   1507 _MCU_INT1_CONTROL	=	0x2244
                    2248   1508 _MCU_INT2_CONTROL	=	0x2248
                    224C   1509 _MCU_INT3_CONTROL	=	0x224c
                    2250   1510 _MCU_INT4_CONTROL	=	0x2250
                    2254   1511 _MCU_INT5_CONTROL	=	0x2254
                    2258   1512 _MCU_INT6_CONTROL	=	0x2258
                    225C   1513 _MCU_INT7_CONTROL	=	0x225c
                    2260   1514 _MCU_INT8_CONTROL	=	0x2260
                    2264   1515 _MCU_INT9_CONTROL	=	0x2264
                    2268   1516 _MCU_INT10_CONTROL	=	0x2268
                    226C   1517 _MCU_INT11_CONTROL	=	0x226c
                    2270   1518 _MCU_INT12_CONTROL	=	0x2270
                    2274   1519 _MCU_TIMER_CONTROL	=	0x2274
                    2278   1520 _MCU_TIMER0_CONTROL	=	0x2278
                    227C   1521 _MCU_TIMER1_CONTROL	=	0x227c
                    2280   1522 _MCU_TIMER2_CONTROL	=	0x2280
                    2284   1523 _MCU_TIMER3_CONTROL	=	0x2284
                    2288   1524 _MCU_IRQ_LANE	=	0x2288
                    228C   1525 _MCU_IRQ_MASK_LANE	=	0x228c
                    2290   1526 _MCU_MEM_REG1_LANE	=	0x2290
                    2294   1527 _MCU_MEM_REG2_LANE	=	0x2294
                    2298   1528 _MCU_TIMER_CTRL_1_LANE	=	0x2298
                    229C   1529 _MCU_TIMER_CTRL_2_LANE	=	0x229c
                    22A0   1530 _MCU_TIMER_CTRL_3_LANE	=	0x22a0
                    22A4   1531 _MCU_TIMER_CTRL_4_LANE	=	0x22a4
                    22A8   1532 _MCU_TIMER_CTRL_5_LANE	=	0x22a8
                    22AC   1533 _MCU_TIMER_CTRL_6_LANE	=	0x22ac
                    22B0   1534 _MCU_TIMER_CTRL_7_LANE	=	0x22b0
                    22B4   1535 _MCU_DEBUG0_LANE	=	0x22b4
                    22B8   1536 _MCU_DEBUG1_LANE	=	0x22b8
                    22BC   1537 _MCU_DEBUG2_LANE	=	0x22bc
                    22C0   1538 _MCU_DEBUG3_LANE	=	0x22c0
                    22C4   1539 _MCU_DEBUG_LANE	=	0x22c4
                    22C8   1540 _EXT_INT_CONTROL	=	0x22c8
                    22CC   1541 _ANA_IF_TRX_REG0	=	0x22cc
                    22D0   1542 _ANA_IF_DFEE_REG0	=	0x22d0
                    22D4   1543 _ANA_IF_DFEO_REG0	=	0x22d4
                    22D8   1544 _MCU_IRQ_ISR_LANE	=	0x22d8
                    22DC   1545 _MCU_WDT_LANE	=	0x22dc
                    22E0   1546 _MCU_INT_CONTROL_13	=	0x22e0
                    22E4   1547 _MCU_COMMAND0	=	0x22e4
                    22F4   1548 _MEM_ECC_ERR_ADDRESS0	=	0x22f4
                    22F8   1549 _XDATA_MEM_CHECKSUM_LANE0	=	0x22f8
                    22FC   1550 _XDATA_MEM_CHECKSUM_LANE1	=	0x22fc
                    2300   1551 _PT_CONTROL0	=	0x2300
                    2304   1552 _PT_CONTROL1	=	0x2304
                    2308   1553 _PT_USER_PATTERN0	=	0x2308
                    230C   1554 _PT_USER_PATTERN1	=	0x230c
                    2310   1555 _PT_USER_PATTERN2	=	0x2310
                    2314   1556 _PT_COUNTER0	=	0x2314
                    2318   1557 _PT_COUNTER1	=	0x2318
                    231C   1558 _PT_COUNTER2	=	0x231c
                    2400   1559 _DFE_CTRL_REG0	=	0x2400
                    2404   1560 _DFE_CTRL_REG1	=	0x2404
                    2408   1561 _DFE_CTRL_REG2	=	0x2408
                    240C   1562 _DFE_CTRL_REG3	=	0x240c
                    2410   1563 _RX_EQ_CLK_CTRL	=	0x2410
                    2414   1564 _DFE_CTRL_REG4	=	0x2414
                    2418   1565 _DFE_ANA_REG0	=	0x2418
                    241C   1566 _DFE_ANA_REG1	=	0x241c
                    2420   1567 _DFE_STEP_REG0	=	0x2420
                    2424   1568 _DFE_STEP_REG1	=	0x2424
                    2430   1569 _DFE_FEN_EVEN_REG	=	0x2430
                    2434   1570 _DFE_FEN_ODD_REG	=	0x2434
                    2438   1571 _DFE_DC_EVEN_REG8	=	0x2438
                    243C   1572 _DFE_DC_ODD_REG8	=	0x243c
                    2440   1573 _DFE_FEXT_EVEN_REG0	=	0x2440
                    2444   1574 _DFE_FEXT_EVEN_REG1	=	0x2444
                    2448   1575 _DFE_FEXT_EVEN_REG2	=	0x2448
                    244C   1576 _DFE_FEXT_EVEN_REG3	=	0x244c
                    2450   1577 _DFE_FEXT_EVEN_REG4	=	0x2450
                    2454   1578 _DFE_FEXT_EVEN_REG5	=	0x2454
                    2458   1579 _DFE_FEXT_EVEN_REG6	=	0x2458
                    245C   1580 _DFE_FEXT_EVEN_REG7	=	0x245c
                    2460   1581 _DFE_FEXT_ODD_REG0	=	0x2460
                    2464   1582 _DFE_FEXT_ODD_REG1	=	0x2464
                    2468   1583 _DFE_FEXT_ODD_REG2	=	0x2468
                    246C   1584 _DFE_FEXT_ODD_REG3	=	0x246c
                    2470   1585 _DFE_FEXT_ODD_REG4	=	0x2470
                    2474   1586 _DFE_FEXT_ODD_REG5	=	0x2474
                    2478   1587 _DFE_FEXT_ODD_REG6	=	0x2478
                    247C   1588 _DFE_FEXT_ODD_REG7	=	0x247c
                    2480   1589 _DFE_READ_EVEN_SM_REG0	=	0x2480
                    2484   1590 _DFE_READ_EVEN_SM_REG1	=	0x2484
                    2488   1591 _DFE_READ_EVEN_SM_REG2	=	0x2488
                    248C   1592 _DFE_READ_EVEN_SM_REG3	=	0x248c
                    2490   1593 _DFE_READ_EVEN_SM_REG4	=	0x2490
                    2494   1594 _DFE_READ_EVEN_SM_REG5	=	0x2494
                    2498   1595 _DFE_READ_EVEN_SM_REG6	=	0x2498
                    249C   1596 _DFE_READ_EVEN_SM_REG7	=	0x249c
                    24A0   1597 _DFE_READ_ODD_SM_REG0	=	0x24a0
                    24A4   1598 _DFE_READ_ODD_SM_REG1	=	0x24a4
                    24A8   1599 _DFE_READ_ODD_SM_REG2	=	0x24a8
                    24AC   1600 _DFE_READ_ODD_SM_REG3	=	0x24ac
                    24B0   1601 _DFE_READ_ODD_SM_REG4	=	0x24b0
                    24B4   1602 _DFE_READ_ODD_SM_REG5	=	0x24b4
                    24B8   1603 _DFE_READ_ODD_SM_REG6	=	0x24b8
                    24BC   1604 _DFE_READ_ODD_SM_REG7	=	0x24bc
                    24C0   1605 _DFE_READ_EVEN_SM_REG8	=	0x24c0
                    24C4   1606 _DFE_READ_ODD_SM_REG8	=	0x24c4
                    24D0   1607 _DFE_READ_EVEN_2C_REG0	=	0x24d0
                    24D4   1608 _DFE_READ_EVEN_2C_REG1	=	0x24d4
                    24D8   1609 _DFE_READ_EVEN_2C_REG2	=	0x24d8
                    24DC   1610 _DFE_READ_EVEN_2C_REG3	=	0x24dc
                    24E0   1611 _DFE_READ_EVEN_2C_REG4	=	0x24e0
                    24E4   1612 _DFE_READ_EVEN_2C_REG5	=	0x24e4
                    24E8   1613 _DFE_READ_EVEN_2C_REG6	=	0x24e8
                    24EC   1614 _DFE_READ_EVEN_2C_REG7	=	0x24ec
                    24F0   1615 _DFE_READ_ODD_2C_REG0	=	0x24f0
                    24F4   1616 _DFE_READ_ODD_2C_REG1	=	0x24f4
                    24F8   1617 _DFE_READ_ODD_2C_REG2	=	0x24f8
                    24FC   1618 _DFE_READ_ODD_2C_REG3	=	0x24fc
                    2500   1619 _DFE_READ_ODD_2C_REG4	=	0x2500
                    2504   1620 _DFE_READ_ODD_2C_REG5	=	0x2504
                    2508   1621 _DFE_READ_ODD_2C_REG6	=	0x2508
                    250C   1622 _DFE_READ_ODD_2C_REG7	=	0x250c
                    2510   1623 _DFE_READ_EVEN_2C_REG8	=	0x2510
                    2514   1624 _DFE_READ_ODD_2C_REG8	=	0x2514
                    2518   1625 _CAL_OFST_REG0	=	0x2518
                    251C   1626 _CAL_OFST_REG1	=	0x251c
                    2520   1627 _CAL_OFST_REG2	=	0x2520
                    2530   1628 _DFE_DCE_REG0	=	0x2530
                    2540   1629 _DFE_STATIC_LANE_REG0	=	0x2540
                    2544   1630 _DFE_STATIC_LANE_REG1	=	0x2544
                    2548   1631 _DFE_STATIC_LANE_REG3	=	0x2548
                    254C   1632 _DFE_STATIC_LANE_REG4	=	0x254c
                    2550   1633 _DFE_STATIC_LANE_REG5	=	0x2550
                    2554   1634 _DFE_STATIC_LANE_REG6	=	0x2554
                    2560   1635 _EOM_VLD_REG0	=	0x2560
                    2564   1636 _EOM_VLD_REG1	=	0x2564
                    2568   1637 _EOM_VLD_REG2	=	0x2568
                    256C   1638 _EOM_VLD_REG3	=	0x256c
                    2570   1639 _EOM_ERR_REG0	=	0x2570
                    2574   1640 _EOM_ERR_REG1	=	0x2574
                    2578   1641 _EOM_ERR_REG2	=	0x2578
                    257C   1642 _EOM_ERR_REG3	=	0x257c
                    2580   1643 _EOM_REG0	=	0x2580
                    25F0   1644 _EOM_VLD_REG4	=	0x25f0
                    25F4   1645 _LANE_MARGIN_REG0	=	0x25f4
                    6000   1646 _CAL_CTRL1_LANE	=	0x6000
                    6004   1647 _CAL_CTRL2_LANE	=	0x6004
                    6008   1648 _CAL_CTRL3_LANE	=	0x6008
                    600C   1649 _CAL_CTRL4_LANE	=	0x600c
                    6010   1650 _CAL_SAVE_DATA1_LANE	=	0x6010
                    6014   1651 _CAL_SAVE_DATA2_LANE	=	0x6014
                    6018   1652 _CAL_SAVE_DATA3_LANE	=	0x6018
                    601C   1653 _PHY_REMOTE_CTRL_COMMAND_LANE	=	0x601c
                    6020   1654 _PHY_REMOTE_CTRL_VALUE_LANE	=	0x6020
                    6024   1655 _PHY_LOCAL_VALUE_LANE	=	0x6024
                    6028   1656 _TRX_TRAIN_IF_TIMERS1_LANE	=	0x6028
                    602C   1657 _TRX_TRAIN_IF_TIMERS2_LANE	=	0x602c
                    6030   1658 _TRX_TRAIN_IF_TIMERS_ENABLE_LANE	=	0x6030
                    6034   1659 _DFE_CONTROL_0	=	0x6034
                    6038   1660 _DFE_CONTROL_1	=	0x6038
                    6040   1661 _DFE_CONTROL_2	=	0x6040
                    6044   1662 _DFE_CONTROL_3	=	0x6044
                    6048   1663 _DFE_CONTROL_4	=	0x6048
                    604C   1664 _DFE_CONTROL_5	=	0x604c
                    6050   1665 _TRAIN_CONTROL_0	=	0x6050
                    6054   1666 _TRAIN_CONTROL_1	=	0x6054
                    6058   1667 _TRAIN_CONTROL_2	=	0x6058
                    605C   1668 _RPTA_CONFIG_0	=	0x605c
                    6060   1669 _RPTA_CONFIG_1	=	0x6060
                    6064   1670 _DLL_CAL	=	0x6064
                    6068   1671 _TRAIN_PARA_0	=	0x6068
                    606C   1672 _TRAIN_PARA_1	=	0x606c
                    6070   1673 _TRAIN_PARA_2	=	0x6070
                    6074   1674 _TRAIN_PARA_3	=	0x6074
                    6078   1675 _DFE_CONTROL_6	=	0x6078
                    607C   1676 _DFE_TEST_0	=	0x607c
                    6080   1677 _DFE_TEST_1	=	0x6080
                    6084   1678 _DFE_TEST_4	=	0x6084
                    6088   1679 _DFE_TEST_5	=	0x6088
                    608C   1680 _DFE_CONTROL_7	=	0x608c
                    6090   1681 _DFE_CONTROL_8	=	0x6090
                    6094   1682 _DFE_CONTROL_9	=	0x6094
                    6098   1683 _DFE_CONTROL_10	=	0x6098
                    609C   1684 _DFE_CONTROL_11	=	0x609c
                    60A0   1685 _CDS_CTRL_REG0	=	0x60a0
                    60A4   1686 _CDS_CTRL_REG1	=	0x60a4
                    60A8   1687 _ESM_POP_P_CNT_LOW_LANE	=	0x60a8
                    60AC   1688 _ESM_ERR_P_CNT_LOW_LANE	=	0x60ac
                    60B0   1689 _ESM_ERR_POP_CNT_HIGH_LANE	=	0x60b0
                    60B4   1690 _TRAIN_CONTROL_3	=	0x60b4
                    60B8   1691 _TRAIN_CONTROL_4	=	0x60b8
                    60BC   1692 _TRAIN_CONTROL_5	=	0x60bc
                    60C0   1693 _TRAIN_CONTROL_6	=	0x60c0
                    60C4   1694 _TRAIN_CONTROL_7	=	0x60c4
                    60C8   1695 _TRAIN_CONTROL_8	=	0x60c8
                    60CC   1696 _TRAIN_CONTROL_9	=	0x60cc
                    60D0   1697 _TRAIN_CONTROL_10	=	0x60d0
                    60D4   1698 _TRAIN_CONTROL_11	=	0x60d4
                    60D8   1699 _TRAIN_CONTROL_12	=	0x60d8
                    60DC   1700 _ESM_POP_N_CNT_LOW_LANE	=	0x60dc
                    60E0   1701 _ESM_ERR_N_CNT_LOW_LANE	=	0x60e0
                    60E4   1702 _TRAIN_CONTROL_13	=	0x60e4
                    60E8   1703 _TRAIN_CONTROL_14	=	0x60e8
                    60EC   1704 _TRAIN_CONTROL_15	=	0x60ec
                    60F0   1705 _TRAIN_CONTROL_16	=	0x60f0
                    60F4   1706 _TRAIN_CONTROL_17	=	0x60f4
                    60F8   1707 _END_XDAT_LANE	=	0x60f8
                    A000   1708 _TX_CMN_REG	=	0xa000
                    A008   1709 _DTX_REG0	=	0xa008
                    A00C   1710 _DTX_REG1	=	0xa00c
                    A010   1711 _DTX_REG2	=	0xa010
                    A014   1712 _DTX_REG3	=	0xa014
                    A018   1713 _DTX_REG4	=	0xa018
                    A01C   1714 _DTX_PHY_ALIGN_REG0	=	0xa01c
                    A024   1715 _DTX_PHY_ALIGN_REG1	=	0xa024
                    A028   1716 _DTX_PHY_ALIGN_REG2	=	0xa028
                    A02C   1717 _SRIS_REG0	=	0xa02c
                    A030   1718 _SRIS_REG1	=	0xa030
                    A100   1719 _RX_CMN_0	=	0xa100
                    A110   1720 _DFE_STATIC_REG0	=	0xa110
                    A114   1721 _DFE_STATIC_REG1	=	0xa114
                    A118   1722 _DFE_STATIC_REG3	=	0xa118
                    A11C   1723 _DFE_STATIC_REG4	=	0xa11c
                    A120   1724 _DFE_STATIC_REG5	=	0xa120
                    A124   1725 _DFE_STATIC_REG6	=	0xa124
                    4200   1726 _GLOB_RST_CLK_CTRL	=	0x4200
                    4204   1727 _GLOB_CLK_SRC_LO	=	0x4204
                    4208   1728 _GLOB_CLK_SRC_HI	=	0x4208
                    420C   1729 _GLOB_MISC_CTRL	=	0x420c
                    4210   1730 _GLOB_DP_SAL_CFG	=	0x4210
                    4214   1731 _GLOB_DP_SAL_CFG1	=	0x4214
                    4218   1732 _GLOB_DP_SAL_CFG3	=	0x4218
                    421C   1733 _GLOB_DP_SAL_CFG5	=	0x421c
                    4220   1734 _GLOB_PM_CFG0	=	0x4220
                    4224   1735 _GLOB_COUNTER_CTRL	=	0x4224
                    4228   1736 _GLOB_COUNTER_HI	=	0x4228
                    422C   1737 _GLOB_PM_DP_CTRL	=	0x422c
                    4230   1738 _GLOB_DP_BAL_CFG0	=	0x4230
                    4234   1739 _GLOB_DP_BAL_CFG2	=	0x4234
                    4238   1740 _GLOB_DP_BAL_CFG4	=	0x4238
                    423C   1741 _GLOB_BIST_CTRL	=	0x423c
                    4240   1742 _GLOB_BIST_LANE_TYPE	=	0x4240
                    4244   1743 _GLOB_BIST_START	=	0x4244
                    4248   1744 _GLOB_BIST_MASK	=	0x4248
                    424C   1745 _GLOB_BIST_RESULT	=	0x424c
                    4250   1746 _GLOB_BIST_SEQR_CFG	=	0x4250
                    4254   1747 _GLOB_BIST_DATA_HI	=	0x4254
                    4258   1748 _GLOB_PIPE_REVISION	=	0x4258
                    425C   1749 _GLOB_L1_SUBSTATES_CFG	=	0x425c
                    A200   1750 _MCU_CONTROL_0	=	0xa200
                    A204   1751 _MCU_CONTROL_1	=	0xa204
                    A208   1752 _MCU_CONTROL_2	=	0xa208
                    A20C   1753 _MCU_CONTROL_3	=	0xa20c
                    A210   1754 _MCU_CONTROL_4	=	0xa210
                    A214   1755 _MCU_DEBUG0	=	0xa214
                    A218   1756 _MCU_DEBUG1	=	0xa218
                    A21C   1757 _MEMORY_CONTROL_0	=	0xa21c
                    A220   1758 _MEMORY_CONTROL_1	=	0xa220
                    A224   1759 _MEMORY_CONTROL_2	=	0xa224
                    A228   1760 _MEMORY_CONTROL_3	=	0xa228
                    A22C   1761 _MEMORY_CONTROL_4	=	0xa22c
                    A234   1762 _MCU_INFO_0	=	0xa234
                    A238   1763 _MCU_INFO_1	=	0xa238
                    A23C   1764 _MCU_INFO_2	=	0xa23c
                    A240   1765 _MCU_INFO_3	=	0xa240
                    A244   1766 _MEM_CMN_ECC_ERR_ADDRESS0	=	0xa244
                    A2E0   1767 _ANA_IF_CMN_REG1	=	0xa2e0
                    A2E4   1768 _MEM_IRQ	=	0xa2e4
                    A2E8   1769 _MEM_IRQ_MASK	=	0xa2e8
                    A2EC   1770 _ANA_IF_CMN_REG0	=	0xa2ec
                    A2F0   1771 _APB_CONTROL_REG	=	0xa2f0
                    A2F4   1772 _MEM_IRQ_CLEAR	=	0xa2f4
                    A2F8   1773 _MCU_SYNC1	=	0xa2f8
                    A2FC   1774 _MCU_SYNC2	=	0xa2fc
                    A300   1775 _TEST0	=	0xa300
                    A304   1776 _TEST1	=	0xa304
                    A308   1777 _TEST2	=	0xa308
                    A30C   1778 _TEST3	=	0xa30c
                    A310   1779 _TEST4	=	0xa310
                    A314   1780 _SYSTEM	=	0xa314
                    A318   1781 _PM_CMN_REG1	=	0xa318
                    A31C   1782 _INPUT_CMN_PIN_REG0	=	0xa31c
                    A320   1783 _INPUT_CMN_PIN_REG1	=	0xa320
                    A324   1784 _INPUT_CMN_PIN_REG2	=	0xa324
                    A328   1785 _ANA_TSEN_CONTROL	=	0xa328
                    A32C   1786 _PLLCAL_REG0	=	0xa32c
                    A330   1787 _PLLCAL_REG1	=	0xa330
                    A334   1788 _CLKGEN_CMN_REG1	=	0xa334
                    A338   1789 _SPD_CMN_REG1	=	0xa338
                    A33C   1790 _OUTPUT_CMN_PIN_REG0	=	0xa33c
                    A340   1791 _CMN_CALIBRATION	=	0xa340
                    A344   1792 __FIELDNAME_	=	0xa344
                    A348   1793 _INPUT_CMN_PIN_REG3	=	0xa348
                    A34C   1794 _PM_CMN_REG2	=	0xa34c
                    A354   1795 _TEST5	=	0xa354
                    A358   1796 _XDATA_MEM_CHECKSUM_CMN_0	=	0xa358
                    A35C   1797 _XDATA_MEM_CHECKSUM_CMN_1	=	0xa35c
                    A360   1798 _XDATA_MEM_CHECKSUM_CMN_2	=	0xa360
                    A364   1799 _MCU_SDT_CMN	=	0xa364
                    A368   1800 _CMN_CACHE_DEBUG0	=	0xa368
                    A36C   1801 _MCU_INT_ADDR	=	0xa36c
                    A370   1802 _CMN_ISR_2	=	0xa370
                    A374   1803 _CMN_ISR_MASK_2	=	0xa374
                    A378   1804 _CMN_ISR_CLEAR_2	=	0xa378
                    A37C   1805 _CMN_MCU_GPIO	=	0xa37c
                    A380   1806 _CMN_CACHE_DEBUG1	=	0xa380
                    A384   1807 _CMN_MCU_TIMER_CONTROL	=	0xa384
                    A388   1808 _CMN_MCU_TIMER_CTRL_2_LANE	=	0xa388
                    A38C   1809 _CMN_MCU_TIMER_CTRL_3_LANE	=	0xa38c
                    A390   1810 _CMN_MCU_TIMER_CTRL_4_LANE	=	0xa390
                    A394   1811 _CMN_MCU_TIMER_CTRL_5_LANE	=	0xa394
                    A398   1812 _CMN_MCU_TIMER0_CONTROL	=	0xa398
                    A39C   1813 _CMN_MCU_TIMER1_CONTROL	=	0xa39c
                    A3A0   1814 _CMN_MCU_TIMER2_CONTROL	=	0xa3a0
                    A3A4   1815 _CMN_MCU_TIMER3_CONTROL	=	0xa3a4
                    A3A8   1816 _CMN_ISR_1	=	0xa3a8
                    A3AC   1817 _CMN_ISR_MASK_1	=	0xa3ac
                    A3B0   1818 _SET_LANE_ISR	=	0xa3b0
                    A3F4   1819 _CMN_MCU_REG	=	0xa3f4
                    A3F8   1820 _CID_REG0	=	0xa3f8
                    A3FC   1821 _CID_REG1	=	0xa3fc
                    E600   1822 _FW_REV	=	0xe600
                    E604   1823 _CONTROL_CONFIG0	=	0xe604
                    E608   1824 _CONTROL_CONFIG1	=	0xe608
                    E60C   1825 _CONTROL_CONFIG2	=	0xe60c
                    E610   1826 _CONTROL_CONFIG3	=	0xe610
                    E614   1827 _CONTROL_CONFIG4	=	0xe614
                    E618   1828 _CONTROL_CONFIG5	=	0xe618
                    E61C   1829 _CONTROL_CONFIG6	=	0xe61c
                    E620   1830 _CONTROL_CONFIG7	=	0xe620
                    E624   1831 _CAL_DATA0	=	0xe624
                    E628   1832 _TRAIN_IF_CONFIG	=	0xe628
                    E62C   1833 _CONTROL_CONFIG8	=	0xe62c
                    E630   1834 _CONTROL_CONFIG9	=	0xe630
                    E634   1835 _CON_CAL_STEP_SIZE1	=	0xe634
                    E638   1836 _CON_CAL_STEP_SIZE2	=	0xe638
                    E63C   1837 _CON_CAL_STEP_SIZE3	=	0xe63c
                    E640   1838 _CON_CAL_STEP_SIZE4	=	0xe640
                    E644   1839 _CON_CAL_STEP_SIZE5	=	0xe644
                    E648   1840 _CAL_TIME_OUT_AND_DIS	=	0xe648
                    E64C   1841 _CAL_STATUS_READ	=	0xe64c
                    E650   1842 _MCU_CONFIG	=	0xe650
                    E654   1843 _CAL_DATA1	=	0xe654
                    E658   1844 _LOOP_CNTS	=	0xe658
                    E65C   1845 _MCU_CONFIG1	=	0xe65c
                    E660   1846 _TIMER_SEL1	=	0xe660
                    E664   1847 _TIMER_SEL2	=	0xe664
                    E668   1848 _TIMER_SEL3	=	0xe668
                    E66C   1849 _G_SELLV_TXCLK	=	0xe66c
                    E670   1850 _G_SELLV_TXDATA	=	0xe670
                    E674   1851 _G_SELLV_TXPRE	=	0xe674
                    E678   1852 _G_SELLV_RXEOMCLK	=	0xe678
                    E67C   1853 _G_SELLV_RXDATACLK	=	0xe67c
                    E680   1854 _G_SELLV_RXSAMPLER	=	0xe680
                    E684   1855 _SAS_PRESET0_TB	=	0xe684
                    E688   1856 _SAS_PRESET1_TB	=	0xe688
                    E68C   1857 _SAS_PRESET2_TB	=	0xe68c
                    E690   1858 _ETH_PRESET0_TB	=	0xe690
                    E694   1859 _ETH_PRESET1_TB	=	0xe694
                    E698   1860 _TX_SAVE_0	=	0xe698
                    E69C   1861 _TX_SAVE_1	=	0xe69c
                    E6A0   1862 _TX_SAVE_2	=	0xe6a0
                    E6A4   1863 _TX_SAVE_3	=	0xe6a4
                    E6A8   1864 _TX_SAVE_4	=	0xe6a8
                    E6AC   1865 _CDS_EYE_CLK_THR	=	0xe6ac
                    E6B0   1866 _SYNC_INFO	=	0xe6b0
                    E6B4   1867 _MCU_INFO_4	=	0xe6b4
                    E6B8   1868 _MCU_INFO_5	=	0xe6b8
                    E6BC   1869 _MCU_INFO_12	=	0xe6bc
                    E6C0   1870 _MCU_INFO_13	=	0xe6c0
                    E6C4   1871 _END_XDAT_CMN	=	0xe6c4
                    2600   1872 _DME_ENC_REG0	=	0x2600
                    2604   1873 _DME_ENC_REG1	=	0x2604
                    2608   1874 _DME_ENC_REG2	=	0x2608
                    260C   1875 _DME_DEC_REG0	=	0x260c
                    2610   1876 _DME_DEC_REG1	=	0x2610
                    2614   1877 _TX_TRAIN_IF_REG0	=	0x2614
                    2618   1878 _TX_TRAIN_IF_REG1	=	0x2618
                    261C   1879 _TX_TRAIN_IF_REG2	=	0x261c
                    2620   1880 _TX_TRAIN_IF_REG3	=	0x2620
                    2624   1881 _TX_TRAIN_PATTTERN_REG0	=	0x2624
                    2628   1882 _TX_TRAIN_DRIVER_REG0	=	0x2628
                    262C   1883 _TX_TRAIN_DRIVER_REG1	=	0x262c
                    2630   1884 _TX_TRAIN_DRIVER_REG2	=	0x2630
                    2634   1885 _TX_TRAIN_DEFAULT_REG0	=	0x2634
                    2638   1886 _TX_TRAIN_DEFAULT_REG1	=	0x2638
                    263C   1887 _TX_TRAIN_DEFAULT_REG2	=	0x263c
                    2640   1888 _TX_TRAIN_DEFAULT_REG3	=	0x2640
                    2644   1889 _TX_TRAIN_DEFAULT_REG4	=	0x2644
                    2648   1890 _TX_TRAIN_DEFAULT_REG5	=	0x2648
                    264C   1891 _TX_EMPH_CTRL_REG0	=	0x264c
                    2650   1892 _LINK_TRAIN_MODE0	=	0x2650
                    2654   1893 _TX_DRV_RD_OUT_REG0	=	0x2654
                    2658   1894 _TX_AMP_CTRL_REG0	=	0x2658
                    265C   1895 _TRX_TRAIN_IF_INTERRUPT_LANE	=	0x265c
                    2660   1896 _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE	=	0x2660
                    2664   1897 _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE	=	0x2664
                    2668   1898 _TX_TRAIN_IF_REG4	=	0x2668
                    266C   1899 _TX_TRAIN_IF_REG5	=	0x266c
                    2670   1900 _TX_TRAIN_IF_REG6	=	0x2670
                    2674   1901 _TX_TRAIN_IF_REG7	=	0x2674
                    2678   1902 _TX_TRAIN_CTRL_LANE	=	0x2678
                    267C   1903 _TX_TRAIN_IF_REG8	=	0x267c
                    6100   1904 _DFE_READ_EVEN_REG0	=	0x6100
                    6104   1905 _DFE_READ_EVEN_REG1	=	0x6104
                    6108   1906 _DFE_READ_EVEN_REG2	=	0x6108
                    610C   1907 _DFE_READ_EVEN_REG3	=	0x610c
                    6110   1908 _DFE_READ_EVEN_REG4	=	0x6110
                    6114   1909 _DFE_READ_EVEN_REG5	=	0x6114
                    6118   1910 _DFE_READ_EVEN_REG6	=	0x6118
                    611C   1911 _DFE_READ_EVEN_REG7	=	0x611c
                    6120   1912 _DFE_READ_ODD_REG0	=	0x6120
                    6124   1913 _DFE_READ_ODD_REG1	=	0x6124
                    6128   1914 _DFE_READ_ODD_REG2	=	0x6128
                    612C   1915 _DFE_READ_ODD_REG3	=	0x612c
                    6130   1916 _DFE_READ_ODD_REG4	=	0x6130
                    6134   1917 _DFE_READ_ODD_REG5	=	0x6134
                    6138   1918 _DFE_READ_ODD_REG6	=	0x6138
                    613C   1919 _DFE_READ_ODD_REG7	=	0x613c
                    6140   1920 _DFE_READ_EVEN_REG8	=	0x6140
                    6144   1921 _DFE_READ_ODD_REG8	=	0x6144
                    6148   1922 _DFE_READ_F0A_EVEN	=	0x6148
                    614C   1923 _DFE_READ_F0A_ODD	=	0x614c
                    6150   1924 _DFE_READ_F0B_EVEN	=	0x6150
                    6154   1925 _DFE_READ_F0B_ODD	=	0x6154
                    6158   1926 _DFE_READ_F0D_EVEN	=	0x6158
                    615C   1927 _DFE_READ_F0D_ODD	=	0x615c
                    6160   1928 _DFE_READ_F0D_LEFT_EVEN	=	0x6160
                    6164   1929 _DFE_READ_F0D_LEFT_ODD	=	0x6164
                    6168   1930 _DFE_READ_F0D_RIGHT_EVEN	=	0x6168
                    616C   1931 _DFE_READ_F0D_RIGHT_ODD	=	0x616c
                    6170   1932 _CDS_READ_MISC0	=	0x6170
                    6174   1933 _CDS_READ_MISC1	=	0x6174
                    6214   1934 _TXTRAIN_IF_REG0	=	0x6214
                    E000   1935 _lc_speedtable	=	0xe000
                    E1C0   1936 _ring_speedtable	=	0xe1c0
                    E5C0   1937 _phy_mode_cmn_table	=	0xe5c0
                    6300   1938 _max_gen	=	0x6300
                    6301   1939 _min_gen	=	0x6301
                    6304   1940 _speedtable	=	0x6304
                    65D4   1941 _phy_mode_lane_table	=	0x65d4
                    60B4   1942 _rc_save	=	0x60b4
                    60D0   1943 _txffe_save	=	0x60d0
                    60E4   1944 _phase_save	=	0x60e4
                    6030   1945 _train_gn1_index	=	0x6030
                    6031   1946 _train_g1_index	=	0x6031
                    6032   1947 _train_g0_index	=	0x6032
                    E6B0   1948 _local_tx_preset_tb	=	0xe6b0
                    E5C1   1949 _cmx_cal_lcvco_dac	=	0xe5c1
                    E5C1   1950 _cmx_cal_lcvco_dac_lsb	=	0xe5c1
                    E5C4   1951 _cmx_cal_lcvco_dac_msb	=	0xe5c4
                    E5CA   1952 _cmx_cal_lccap_msb	=	0xe5ca
                    E5C8   1953 _cmx_cal_lccap_lsb	=	0xe5c8
                    E5CC   1954 _cmx_cal_plldcc	=	0xe5cc
                    E5D0   1955 _cmx_cal_pll_speed_ring	=	0xe5d0
                    E5D4   1956 _cmx_cal_pll_sllp_dac_coarse_ring	=	0xe5d4
                    E5D8   1957 _cmx_cal_sllp_dac_fine_ring	=	0xe5d8
                    65D4   1958 _lnx_cal_txdcc_pdiv	=	0x65d4
                    65D8   1959 _lnx_cal_txdcc_pdiv_hg	=	0x65d8
                    65DA   1960 _lnx_cal_txdcc	=	0x65da
                    65DE   1961 _lnx_cal_txdcc_hg	=	0x65de
                    65E0   1962 _lnx_cal_rxdcc_dll	=	0x65e0
                    65E4   1963 _lnx_cal_rxdcc_dll_hg	=	0x65e4
                    65E6   1964 _lnx_cal_rxdcc_data	=	0x65e6
                    65F0   1965 _lnx_cal_rxdcc_data_hg	=	0x65f0
                    65F5   1966 _lnx_cal_rxdcc_eom	=	0x65f5
                    65FF   1967 _lnx_cal_rxdcc_eom_hg	=	0x65ff
                    6604   1968 _lnx_cal_dll_gmsel	=	0x6604
                    6606   1969 _lnx_cal_vdda_dll_sel	=	0x6606
                    660A   1970 _lnx_cal_dll_eom_gmsel	=	0x660a
                    660C   1971 _lnx_cal_vdda_dll_eom_sel	=	0x660c
                    6610   1972 _lnx_cal_eom_dpher	=	0x6610
                    6612   1973 _lnx_cal_align90_dummy_clk	=	0x6612
                    661A   1974 _lnx_cal_align90_dac	=	0x661a
                    6622   1975 _lnx_cal_align90_gm	=	0x6622
                    662A   1976 _lnx_cal_sellv_txdata	=	0x662a
                    6634   1977 _lnx_cal_sellv_txclk	=	0x6634
                    663E   1978 _lnx_cal_sellv_rxdataclk	=	0x663e
                    6648   1979 _lnx_cal_sellv_txpre	=	0x6648
                    6652   1980 _lnx_cal_sellv_rxsampler	=	0x6652
                    665C   1981 _lnx_cal_sellv_rxeomclk	=	0x665c
                    6666   1982 _lnx_spdoft_tx_preset_index_lane	=	0x6666
                    6490   1983 _lnx_calx_txdcc_pdiv	=	0x6490
                    6496   1984 _lnx_calx_txdcc_pdiv_hg	=	0x6496
                    6499   1985 _lnx_calx_txdcc	=	0x6499
                    649F   1986 _lnx_calx_txdcc_hg	=	0x649f
                    64A2   1987 _lnx_calx_rxdcc_dll	=	0x64a2
                    64A8   1988 _lnx_calx_rxdcc_dll_hg	=	0x64a8
                    64AB   1989 _lnx_calx_dll_gmsel	=	0x64ab
                    64AE   1990 _lnx_calx_vdda_dll_sel	=	0x64ae
                    64B4   1991 _lnx_calx_dll_eom_gmsel	=	0x64b4
                    64B7   1992 _lnx_calx_vdda_dll_eom_sel	=	0x64b7
                    64BD   1993 _lnx_calx_eom_dpher	=	0x64bd
                    64C0   1994 _lnx_calx_align90_dummy_clk	=	0x64c0
                    64CC   1995 _lnx_calx_align90_dac	=	0x64cc
                    64D8   1996 _lnx_calx_align90_gm	=	0x64d8
                    6100   1997 _cds28	=	0x6100
                    6178   1998 _dfe_sm	=	0x6178
                    61B8   1999 _dfe_sm_dc	=	0x61b8
                    61C0   2000 _dfe_sm_save	=	0x61c0
                    03FC   2001 _UPHY_ANAREG_REV_0	=	0x03fc
                    E684   2002 _tx_tb	=	0xe684
                    E698   2003 _train_save_tb	=	0xe698
                    607C   2004 _sq_thrs_ratio_tb	=	0x607c
                           2005 ;--------------------------------------------------------
                           2006 ; absolute external ram data
                           2007 ;--------------------------------------------------------
                           2008 	.area XABS    (ABS,XDATA)
                           2009 ;--------------------------------------------------------
                           2010 ; external initialized ram data
                           2011 ;--------------------------------------------------------
                           2012 	.area HOME    (CODE)
                           2013 	.area GSINIT0 (CODE)
                           2014 	.area GSINIT1 (CODE)
                           2015 	.area GSINIT2 (CODE)
                           2016 	.area GSINIT3 (CODE)
                           2017 	.area GSINIT4 (CODE)
                           2018 	.area GSINIT5 (CODE)
                           2019 	.area GSINIT  (CODE)
                           2020 	.area GSFINAL (CODE)
                           2021 	.area CSEG    (CODE)
                           2022 ;--------------------------------------------------------
                           2023 ; global & static initialisations
                           2024 ;--------------------------------------------------------
                           2025 	.area HOME    (CODE)
                           2026 	.area GSINIT  (CODE)
                           2027 	.area GSFINAL (CODE)
                           2028 	.area GSINIT  (CODE)
                           2029 ;--------------------------------------------------------
                           2030 ; Home
                           2031 ;--------------------------------------------------------
                           2032 	.area HOME    (CODE)
                           2033 	.area HOME    (CODE)
                           2034 ;--------------------------------------------------------
                           2035 ; code
                           2036 ;--------------------------------------------------------
                           2037 	.area BANK1   (CODE)
                           2038 ;------------------------------------------------------------
                           2039 ;Allocation info for local variables in function 'Power_P0s_P1'
                           2040 ;------------------------------------------------------------
                           2041 ;------------------------------------------------------------
                           2042 ;	../../shared/src/power_pcie.c:29: void Power_P0s_P1( void ) BANKING_CTRL {
                           2043 ;	-----------------------------------------
                           2044 ;	 function Power_P0s_P1
                           2045 ;	-----------------------------------------
   C798                    2046 _Power_P0s_P1:
                    0002   2047 	ar2 = 0x02
                    0003   2048 	ar3 = 0x03
                    0004   2049 	ar4 = 0x04
                    0005   2050 	ar5 = 0x05
                    0006   2051 	ar6 = 0x06
                    0007   2052 	ar7 = 0x07
                    0000   2053 	ar0 = 0x00
                    0001   2054 	ar1 = 0x01
                           2055 ;	../../shared/src/power_pcie.c:39: reg_PIN_PLL_READY_RX_LANE = 0;
                           2056 ;	../../shared/src/power_pcie.c:41: reg_DTL_CLK_OFF_LANE = 1;
   C798 90 21 02           2057 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   C79B E0                 2058 	movx	a,@dptr
   C79C 54 BF              2059 	anl	a,#0xbf
   C79E F0                 2060 	movx	@dptr,a
   C79F E0                 2061 	movx	a,@dptr
   C7A0 44 10              2062 	orl	a,#0x10
   C7A2 F0                 2063 	movx	@dptr,a
                           2064 ;	../../shared/src/power_pcie.c:42: reg_DFE_CLK_OFF_LANE = 1;
   C7A3 90 24 10           2065 	mov	dptr,#_RX_EQ_CLK_CTRL
   C7A6 E0                 2066 	movx	a,@dptr
   C7A7 44 01              2067 	orl	a,#0x01
   C7A9 F0                 2068 	movx	@dptr,a
                           2069 ;	../../shared/src/power_pcie.c:43: reg_RESET_DTL_LANE = 1;
   C7AA 90 21 02           2070 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   C7AD E0                 2071 	movx	a,@dptr
   C7AE 44 20              2072 	orl	a,#0x20
   C7B0 F0                 2073 	movx	@dptr,a
                           2074 ;	../../shared/src/power_pcie.c:44: CKCON = 0x07 ;  //MCU WAIT time the slowest
   C7B1 75 8E 07           2075 	mov	_CKCON,#0x07
                           2076 ;	../../shared/src/power_pcie.c:45: reg_RESET_DFE_LANE = 1;
   C7B4 90 24 10           2077 	mov	dptr,#_RX_EQ_CLK_CTRL
   C7B7 E0                 2078 	movx	a,@dptr
   C7B8 44 04              2079 	orl	a,#0x04
   C7BA F0                 2080 	movx	@dptr,a
                           2081 ;	../../shared/src/power_pcie.c:46: CKCON = 0x00 ; //MCU WAIT time setting back to normal.
   C7BB 75 8E 00           2082 	mov	_CKCON,#0x00
                           2083 ;	../../shared/src/power_pcie.c:49: if(reg_PIN_TX_IDLE_HIZ_RD_LANE) {
   C7BE 90 20 07           2084 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   C7C1 E0                 2085 	movx	a,@dptr
   C7C2 30 E3 17           2086 	jnb	acc.3,00102$
                           2087 ;	../../shared/src/power_pcie.c:50: reg_ANA_TX_LESS_CUR_IDLE_LANE = 1;
   C7C5 90 20 07           2088 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   C7C8 E0                 2089 	movx	a,@dptr
   C7C9 44 40              2090 	orl	a,#0x40
   C7CB F0                 2091 	movx	@dptr,a
                           2092 ;	../../shared/src/power_pcie.c:51: short_delay(); //delay01(1);
   C7CC 78 05              2093 	mov	r0,#_short_delay
   C7CE 79 C0              2094 	mov	r1,#(_short_delay >> 8)
   C7D0 7A 02              2095 	mov	r2,#(_short_delay >> 16)
   C7D2 12 00 B3           2096 	lcall	__sdcc_banked_call
                           2097 ;	../../shared/src/power_pcie.c:52: reg_ANA_TX_IDLE_HIZ_EN_LANE = 1;
   C7D5 90 20 07           2098 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   C7D8 E0                 2099 	movx	a,@dptr
   C7D9 44 80              2100 	orl	a,#0x80
   C7DB F0                 2101 	movx	@dptr,a
   C7DC                    2102 00102$:
                           2103 ;	../../shared/src/power_pcie.c:56: reg_FFE_PULSE_EN_LANE = 0;
   C7DC 90 02 0C           2104 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_131
   C7DF E0                 2105 	movx	a,@dptr
   C7E0 54 7F              2106 	anl	a,#0x7f
   C7E2 F0                 2107 	movx	@dptr,a
                           2108 ;	../../shared/src/power_pcie.c:57: reg_ANA_PU_RX_LANE = 0;
   C7E3 90 21 03           2109 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0003)
   C7E6 E0                 2110 	movx	a,@dptr
   C7E7 54 BF              2111 	anl	a,#0xbf
   C7E9 F0                 2112 	movx	@dptr,a
                           2113 ;	../../shared/src/power_pcie.c:58: reg_ANA_PU_RX_DLY_LANE = 0;
   C7EA 90 21 01           2114 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0001)
   C7ED E0                 2115 	movx	a,@dptr
   C7EE 54 7F              2116 	anl	a,#0x7f
   C7F0 F0                 2117 	movx	@dptr,a
                           2118 ;	../../shared/src/power_pcie.c:59: reg_ANA_RX_PU_DLY2_LANE = 0;
   C7F1 90 21 4C           2119 	mov	dptr,#_INPUT_RX_PIN_REG3_LANE
   C7F4 E0                 2120 	movx	a,@dptr
   C7F5 54 FE              2121 	anl	a,#0xfe
   C7F7 F0                 2122 	movx	@dptr,a
                           2123 ;	../../shared/src/power_pcie.c:61: if( reg_PIN_PU_PLL_RD_LANE == 0) {
   C7F8 90 20 07           2124 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   C7FB E0                 2125 	movx	a,@dptr
   C7FC 20 E5 1B           2126 	jb	acc.5,00109$
                           2127 ;	../../shared/src/power_pcie.c:62: PHY_STATUS = ST_P2;
   C7FF 90 22 30           2128 	mov	dptr,#_MCU_STATUS0_LANE
   C802 74 21              2129 	mov	a,#0x21
   C804 F0                 2130 	movx	@dptr,a
                           2131 ;	../../shared/src/power_pcie.c:63: sync_status_lane_en(0);
   C805 75 82 00           2132 	mov	dpl,#0x00
   C808 78 A6              2133 	mov	r0,#_sync_status_lane_en
   C80A 79 B1              2134 	mov	r1,#(_sync_status_lane_en >> 8)
   C80C 7A 01              2135 	mov	r2,#(_sync_status_lane_en >> 16)
   C80E 12 00 B3           2136 	lcall	__sdcc_banked_call
                           2137 ;	../../shared/src/power_pcie.c:64: reg_PIN_PLL_READY_TX_LANE = 0;
   C811 90 20 02           2138 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   C814 E0                 2139 	movx	a,@dptr
   C815 54 FB              2140 	anl	a,#0xfb
   C817 F0                 2141 	movx	@dptr,a
   C818 80 3D              2142 	sjmp	00111$
   C81A                    2143 00109$:
                           2144 ;	../../shared/src/power_pcie.c:67: PHY_STATUS = ST_P1_WK;
   C81A 90 22 30           2145 	mov	dptr,#_MCU_STATUS0_LANE
   C81D 74 23              2146 	mov	a,#0x23
   C81F F0                 2147 	movx	@dptr,a
                           2148 ;	../../shared/src/power_pcie.c:68: sync_status_lane_en(1);
   C820 75 82 01           2149 	mov	dpl,#0x01
   C823 78 A6              2150 	mov	r0,#_sync_status_lane_en
   C825 79 B1              2151 	mov	r1,#(_sync_status_lane_en >> 8)
   C827 7A 01              2152 	mov	r2,#(_sync_status_lane_en >> 16)
   C829 12 00 B3           2153 	lcall	__sdcc_banked_call
                           2154 ;	../../shared/src/power_pcie.c:70: if(reg_PIN_PU_RX_RD_LANE==1) { //corner case
   C82C 90 21 02           2155 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   C82F E0                 2156 	movx	a,@dptr
   C830 03                 2157 	rr	a
   C831 03                 2158 	rr	a
   C832 54 01              2159 	anl	a,#0x01
   C834 FA                 2160 	mov	r2,a
   C835 BA 01 04           2161 	cjne	r2,#0x01,00106$
                           2162 ;	../../shared/src/power_pcie.c:71: do_wake = 1;
   C838 D2 05              2163 	setb	_do_wake
   C83A 80 14              2164 	sjmp	00107$
   C83C                    2165 00106$:
                           2166 ;	../../shared/src/power_pcie.c:73: else if( SYNC_SATUS_P2_2_P1_ON ) {
   C83C 90 E6 B2           2167 	mov	dptr,#(_SYNC_INFO + 0x0002)
   C83F E0                 2168 	movx	a,@dptr
   C840 60 0E              2169 	jz	00107$
                           2170 ;	../../shared/src/power_pcie.c:74: txlane_align();
   C842 78 25              2171 	mov	r0,#_txlane_align
   C844 79 E7              2172 	mov	r1,#(_txlane_align >> 8)
   C846 7A 01              2173 	mov	r2,#(_txlane_align >> 16)
   C848 12 00 B3           2174 	lcall	__sdcc_banked_call
                           2175 ;	../../shared/src/power_pcie.c:75: SYNC_SATUS_P2_2_P1_ON = 0;
   C84B 90 E6 B2           2176 	mov	dptr,#(_SYNC_INFO + 0x0002)
   C84E E4                 2177 	clr	a
   C84F F0                 2178 	movx	@dptr,a
   C850                    2179 00107$:
                           2180 ;	../../shared/src/power_pcie.c:77: reg_PIN_PLL_READY_TX_LANE = 1;
   C850 90 20 02           2181 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   C853 E0                 2182 	movx	a,@dptr
   C854 44 04              2183 	orl	a,#0x04
   C856 F0                 2184 	movx	@dptr,a
   C857                    2185 00111$:
   C857 02 00 C5           2186 	ljmp	__sdcc_banked_ret
                           2187 ;------------------------------------------------------------
                           2188 ;Allocation info for local variables in function 'Power_P1_P2'
                           2189 ;------------------------------------------------------------
                           2190 ;------------------------------------------------------------
                           2191 ;	../../shared/src/power_pcie.c:92: void Power_P1_P2( void ) BANKING_CTRL {
                           2192 ;	-----------------------------------------
                           2193 ;	 function Power_P1_P2
                           2194 ;	-----------------------------------------
   C85A                    2195 _Power_P1_P2:
                           2196 ;	../../shared/src/power_pcie.c:94: if(reg_ANA_RX_PU_DLY2_LANE) {
   C85A 90 21 4C           2197 	mov	dptr,#_INPUT_RX_PIN_REG3_LANE
   C85D E0                 2198 	movx	a,@dptr
   C85E 30 E0 49           2199 	jnb	acc.0,00104$
                           2200 ;	../../shared/src/power_pcie.c:96: if(reg_PIN_TX_IDLE_HIZ_RD_LANE) {
   C861 90 20 07           2201 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   C864 E0                 2202 	movx	a,@dptr
   C865 30 E3 17           2203 	jnb	acc.3,00102$
                           2204 ;	../../shared/src/power_pcie.c:97: reg_ANA_TX_LESS_CUR_IDLE_LANE = 1;
   C868 90 20 07           2205 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   C86B E0                 2206 	movx	a,@dptr
   C86C 44 40              2207 	orl	a,#0x40
   C86E F0                 2208 	movx	@dptr,a
                           2209 ;	../../shared/src/power_pcie.c:98: short_delay();  //delay01(1);
   C86F 78 05              2210 	mov	r0,#_short_delay
   C871 79 C0              2211 	mov	r1,#(_short_delay >> 8)
   C873 7A 02              2212 	mov	r2,#(_short_delay >> 16)
   C875 12 00 B3           2213 	lcall	__sdcc_banked_call
                           2214 ;	../../shared/src/power_pcie.c:99: reg_ANA_TX_IDLE_HIZ_EN_LANE = 1;
   C878 90 20 07           2215 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   C87B E0                 2216 	movx	a,@dptr
   C87C 44 80              2217 	orl	a,#0x80
   C87E F0                 2218 	movx	@dptr,a
   C87F                    2219 00102$:
                           2220 ;	../../shared/src/power_pcie.c:101: reg_DTL_CLK_OFF_LANE = 1;
   C87F 90 21 02           2221 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   C882 E0                 2222 	movx	a,@dptr
   C883 44 10              2223 	orl	a,#0x10
   C885 F0                 2224 	movx	@dptr,a
                           2225 ;	../../shared/src/power_pcie.c:102: reg_DFE_CLK_OFF_LANE = 1;
   C886 90 24 10           2226 	mov	dptr,#_RX_EQ_CLK_CTRL
   C889 E0                 2227 	movx	a,@dptr
   C88A 44 01              2228 	orl	a,#0x01
   C88C F0                 2229 	movx	@dptr,a
                           2230 ;	../../shared/src/power_pcie.c:103: reg_RESET_DTL_LANE = 1;
   C88D 90 21 02           2231 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   C890 E0                 2232 	movx	a,@dptr
   C891 44 20              2233 	orl	a,#0x20
   C893 F0                 2234 	movx	@dptr,a
                           2235 ;	../../shared/src/power_pcie.c:104: CKCON = 0x07 ;  //MCU WAIT time the slowest
   C894 75 8E 07           2236 	mov	_CKCON,#0x07
                           2237 ;	../../shared/src/power_pcie.c:105: reg_RESET_DFE_LANE = 1;
   C897 90 24 10           2238 	mov	dptr,#_RX_EQ_CLK_CTRL
   C89A E0                 2239 	movx	a,@dptr
   C89B 44 04              2240 	orl	a,#0x04
   C89D F0                 2241 	movx	@dptr,a
                           2242 ;	../../shared/src/power_pcie.c:106: CKCON = 0x00 ; //MCU WAIT time setting back to normal.
   C89E 75 8E 00           2243 	mov	_CKCON,#0x00
                           2244 ;	../../shared/src/power_pcie.c:107: pu_rx_off();
   C8A1 78 50              2245 	mov	r0,#_pu_rx_off
   C8A3 79 D3              2246 	mov	r1,#(_pu_rx_off >> 8)
   C8A5 7A 02              2247 	mov	r2,#(_pu_rx_off >> 16)
   C8A7 12 00 B3           2248 	lcall	__sdcc_banked_call
   C8AA                    2249 00104$:
                           2250 ;	../../shared/src/power_pcie.c:110: reg_ANA_TXDETRX_START_LANE = 0;
   C8AA 90 20 01           2251 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0001)
   C8AD E0                 2252 	movx	a,@dptr
   C8AE 54 7F              2253 	anl	a,#0x7f
   C8B0 F0                 2254 	movx	@dptr,a
                           2255 ;	../../shared/src/power_pcie.c:111: reg_ANA_TXDETRX_EN_LANE = 0;
   C8B1 90 20 02           2256 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   C8B4 E0                 2257 	movx	a,@dptr
   C8B5 54 FE              2258 	anl	a,#0xfe
   C8B7 F0                 2259 	movx	@dptr,a
                           2260 ;	../../shared/src/power_pcie.c:112: reg_PIN_TXDETRX_VALID_LANE = 0;
   C8B8 90 20 01           2261 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0001)
   C8BB E0                 2262 	movx	a,@dptr
   C8BC 54 BF              2263 	anl	a,#0xbf
   C8BE F0                 2264 	movx	@dptr,a
                           2265 ;	../../shared/src/power_pcie.c:114: short_delay(); // need for tc t_pcie_lane_reduce_p1_g3 to pass
   C8BF 78 05              2266 	mov	r0,#_short_delay
   C8C1 79 C0              2267 	mov	r1,#(_short_delay >> 8)
   C8C3 7A 02              2268 	mov	r2,#(_short_delay >> 16)
   C8C5 12 00 B3           2269 	lcall	__sdcc_banked_call
                           2270 ;	../../shared/src/power_pcie.c:116: if( reg_PU_PLL_OR==0 ) {
   C8C8 90 A3 1A           2271 	mov	dptr,#(_PM_CMN_REG1 + 0x0002)
   C8CB E0                 2272 	movx	a,@dptr
   C8CC 20 E4 0B           2273 	jb	acc.4,00109$
                           2274 ;	../../shared/src/power_pcie.c:117: pu_pll_off();
   C8CF 78 BF              2275 	mov	r0,#_pu_pll_off
   C8D1 79 C5              2276 	mov	r1,#(_pu_pll_off >> 8)
   C8D3 7A 01              2277 	mov	r2,#(_pu_pll_off >> 16)
   C8D5 12 00 B3           2278 	lcall	__sdcc_banked_call
   C8D8 80 1A              2279 	sjmp	00110$
   C8DA                    2280 00109$:
                           2281 ;	../../shared/src/power_pcie.c:119: else if( reg_PU_PLL_OR==1 && SYNC_SATUS_PLL_OR_PLL_OFF_READ ) {
   C8DA 90 A3 1A           2282 	mov	dptr,#(_PM_CMN_REG1 + 0x0002)
   C8DD E0                 2283 	movx	a,@dptr
   C8DE C4                 2284 	swap	a
   C8DF 54 01              2285 	anl	a,#0x01
   C8E1 FA                 2286 	mov	r2,a
   C8E2 BA 01 0F           2287 	cjne	r2,#0x01,00110$
   C8E5 90 E6 B1           2288 	mov	dptr,#(_SYNC_INFO + 0x0001)
   C8E8 E0                 2289 	movx	a,@dptr
   C8E9 60 09              2290 	jz	00110$
                           2291 ;	../../shared/src/power_pcie.c:120: pu_pll_on();
   C8EB 78 32              2292 	mov	r0,#_pu_pll_on
   C8ED 79 C5              2293 	mov	r1,#(_pu_pll_on >> 8)
   C8EF 7A 01              2294 	mov	r2,#(_pu_pll_on >> 16)
   C8F1 12 00 B3           2295 	lcall	__sdcc_banked_call
   C8F4                    2296 00110$:
                           2297 ;	../../shared/src/power_pcie.c:123: PHY_STATUS = ST_P2_WK;
   C8F4 90 22 30           2298 	mov	dptr,#_MCU_STATUS0_LANE
   C8F7 74 1B              2299 	mov	a,#0x1B
   C8F9 F0                 2300 	movx	@dptr,a
                           2301 ;	../../shared/src/power_pcie.c:125: if(reg_PIN_REFCLK_DIS_RD && reg_PU_PLL_OR==0) {
   C8FA 90 A3 1A           2302 	mov	dptr,#(_PM_CMN_REG1 + 0x0002)
   C8FD E0                 2303 	movx	a,@dptr
   C8FE 30 E0 23           2304 	jnb	acc.0,00117$
   C901 90 A3 1A           2305 	mov	dptr,#(_PM_CMN_REG1 + 0x0002)
   C904 E0                 2306 	movx	a,@dptr
   C905 20 E4 1C           2307 	jb	acc.4,00117$
                           2308 ;	../../shared/src/power_pcie.c:126: if(reg_P2_STATE_LANE == 1) {
   C908 90 20 01           2309 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0001)
   C90B E0                 2310 	movx	a,@dptr
   C90C 03                 2311 	rr	a
   C90D 54 01              2312 	anl	a,#0x01
   C90F FA                 2313 	mov	r2,a
   C910 BA 01 09           2314 	cjne	r2,#0x01,00112$
                           2315 ;	../../shared/src/power_pcie.c:127: reg_REFCLK_DIS_FM_PM = 1;
   C913 90 A3 1B           2316 	mov	dptr,#(_PM_CMN_REG1 + 0x0003)
   C916 E0                 2317 	movx	a,@dptr
   C917 44 80              2318 	orl	a,#0x80
   C919 F0                 2319 	movx	@dptr,a
   C91A 80 15              2320 	sjmp	00118$
   C91C                    2321 00112$:
                           2322 ;	../../shared/src/power_pcie.c:130: PHY_STATUS = ST_P1CLKREQ_WK;
   C91C 90 22 30           2323 	mov	dptr,#_MCU_STATUS0_LANE
   C91F 74 26              2324 	mov	a,#0x26
   C921 F0                 2325 	movx	@dptr,a
   C922 80 0D              2326 	sjmp	00118$
   C924                    2327 00117$:
                           2328 ;	../../shared/src/power_pcie.c:134: else if(reg_INT_TXDETRX_EN_CHG_ISR_LANE ) {
   C924 90 20 1A           2329 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG1_LANE + 0x0002)
   C927 E0                 2330 	movx	a,@dptr
   C928 30 E7 06           2331 	jnb	acc.7,00118$
                           2332 ;	../../shared/src/power_pcie.c:135: PHY_STATUS = ST_P2_TXDETRX;
   C92B 90 22 30           2333 	mov	dptr,#_MCU_STATUS0_LANE
   C92E 74 20              2334 	mov	a,#0x20
   C930 F0                 2335 	movx	@dptr,a
   C931                    2336 00118$:
                           2337 ;	../../shared/src/power_pcie.c:138: reg_ANA_PU_TX_LANE = 0;	
   C931 90 20 03           2338 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0003)
   C934 E0                 2339 	movx	a,@dptr
   C935 54 BF              2340 	anl	a,#0xbf
   C937 F0                 2341 	movx	@dptr,a
   C938 02 00 C5           2342 	ljmp	__sdcc_banked_ret
                           2343 ;------------------------------------------------------------
                           2344 ;Allocation info for local variables in function 'Power_P2_P1'
                           2345 ;------------------------------------------------------------
                           2346 ;pll_already_on            Allocated to registers r2 
                           2347 ;------------------------------------------------------------
                           2348 ;	../../shared/src/power_pcie.c:157: void Power_P2_P1(void) BANKING_CTRL {
                           2349 ;	-----------------------------------------
                           2350 ;	 function Power_P2_P1
                           2351 ;	-----------------------------------------
   C93B                    2352 _Power_P2_P1:
                           2353 ;	../../shared/src/power_pcie.c:159: bool pll_already_on = 0;
   C93B 7A 00              2354 	mov	r2,#0x00
                           2355 ;	../../shared/src/power_pcie.c:161: do {
   C93D                    2356 00113$:
                           2357 ;	../../shared/src/power_pcie.c:162: if(reg_PIN_REFCLK_DIS_RD  && reg_PU_PLL_OR==0) {
   C93D 90 A3 1A           2358 	mov	dptr,#(_PM_CMN_REG1 + 0x0002)
   C940 E0                 2359 	movx	a,@dptr
   C941 30 E0 24           2360 	jnb	acc.0,00105$
   C944 90 A3 1A           2361 	mov	dptr,#(_PM_CMN_REG1 + 0x0002)
   C947 E0                 2362 	movx	a,@dptr
   C948 20 E4 1D           2363 	jb	acc.4,00105$
                           2364 ;	../../shared/src/power_pcie.c:163: if(reg_P2_STATE_LANE == 1) {
   C94B 90 20 01           2365 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0001)
   C94E E0                 2366 	movx	a,@dptr
   C94F 03                 2367 	rr	a
   C950 54 01              2368 	anl	a,#0x01
   C952 FB                 2369 	mov	r3,a
   C953 BB 01 09           2370 	cjne	r3,#0x01,00102$
                           2371 ;	../../shared/src/power_pcie.c:164: reg_REFCLK_DIS_FM_PM = 1;
   C956 90 A3 1B           2372 	mov	dptr,#(_PM_CMN_REG1 + 0x0003)
   C959 E0                 2373 	movx	a,@dptr
   C95A 44 80              2374 	orl	a,#0x80
   C95C F0                 2375 	movx	@dptr,a
   C95D 80 09              2376 	sjmp	00105$
   C95F                    2377 00102$:
                           2378 ;	../../shared/src/power_pcie.c:167: PHY_STATUS = ST_P1CLKREQ_WK;
   C95F 90 22 30           2379 	mov	dptr,#_MCU_STATUS0_LANE
   C962 74 26              2380 	mov	a,#0x26
   C964 F0                 2381 	movx	@dptr,a
                           2382 ;	../../shared/src/power_pcie.c:169: return;
   C965 02 CA 58           2383 	ljmp	00131$
   C968                    2384 00105$:
                           2385 ;	../../shared/src/power_pcie.c:172: if(reg_INT_TXDETRX_EN_CHG_ISR_LANE ) {
   C968 90 20 1A           2386 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG1_LANE + 0x0002)
   C96B E0                 2387 	movx	a,@dptr
   C96C 30 E7 09           2388 	jnb	acc.7,00108$
                           2389 ;	../../shared/src/power_pcie.c:173: PHY_STATUS = ST_P2_TXDETRX;
   C96F 90 22 30           2390 	mov	dptr,#_MCU_STATUS0_LANE
   C972 74 20              2391 	mov	a,#0x20
   C974 F0                 2392 	movx	@dptr,a
                           2393 ;	../../shared/src/power_pcie.c:174: return;
   C975 02 CA 58           2394 	ljmp	00131$
   C978                    2395 00108$:
                           2396 ;	../../shared/src/power_pcie.c:176: if( reg_PIN_TX_ACJTAG_EN_RD_LANE==1 ) {
   C978 90 20 06           2397 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0002)
   C97B E0                 2398 	movx	a,@dptr
   C97C 23                 2399 	rl	a
   C97D 54 01              2400 	anl	a,#0x01
   C97F FB                 2401 	mov	r3,a
   C980 BB 01 09           2402 	cjne	r3,#0x01,00110$
                           2403 ;	../../shared/src/power_pcie.c:177: PHY_STATUS = ST_P2_BEACON;
   C983 90 22 30           2404 	mov	dptr,#_MCU_STATUS0_LANE
   C986 74 1E              2405 	mov	a,#0x1E
   C988 F0                 2406 	movx	@dptr,a
                           2407 ;	../../shared/src/power_pcie.c:178: return;
   C989 02 CA 58           2408 	ljmp	00131$
   C98C                    2409 00110$:
                           2410 ;	../../shared/src/power_pcie.c:180: if ( 1 == reg_PIN_PU_PLL_RD_LANE )
   C98C 90 20 07           2411 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   C98F E0                 2412 	movx	a,@dptr
   C990 C4                 2413 	swap	a
   C991 03                 2414 	rr	a
   C992 54 01              2415 	anl	a,#0x01
   C994 FB                 2416 	mov	r3,a
   C995 BB 01 02           2417 	cjne	r3,#0x01,00114$
                           2418 ;	../../shared/src/power_pcie.c:181: do_wake = 1; // handles the case that PIN_PU_PLL went high, but the interrupt is cleared by mcu_reset call
   C998 D2 05              2419 	setb	_do_wake
   C99A                    2420 00114$:
                           2421 ;	../../shared/src/power_pcie.c:182: } while(!do_wake);
   C99A 30 05 A0           2422 	jnb	_do_wake,00113$
                           2423 ;	../../shared/src/power_pcie.c:184: sync_status_lane_en(1);
   C99D 75 82 01           2424 	mov	dpl,#0x01
   C9A0 C0 02              2425 	push	ar2
   C9A2 78 A6              2426 	mov	r0,#_sync_status_lane_en
   C9A4 79 B1              2427 	mov	r1,#(_sync_status_lane_en >> 8)
   C9A6 7A 01              2428 	mov	r2,#(_sync_status_lane_en >> 16)
   C9A8 12 00 B3           2429 	lcall	__sdcc_banked_call
   C9AB D0 02              2430 	pop	ar2
                           2431 ;	../../shared/src/power_pcie.c:186: if(reg_PIN_PU_TX_RD_LANE==1 && reg_PIN_PU_RX_RD_LANE == 1) {
   C9AD 90 20 07           2432 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   C9B0 E0                 2433 	movx	a,@dptr
   C9B1 C4                 2434 	swap	a
   C9B2 54 01              2435 	anl	a,#0x01
   C9B4 FB                 2436 	mov	r3,a
   C9B5 BB 01 15           2437 	cjne	r3,#0x01,00117$
   C9B8 90 21 02           2438 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   C9BB E0                 2439 	movx	a,@dptr
   C9BC 03                 2440 	rr	a
   C9BD 03                 2441 	rr	a
   C9BE 54 01              2442 	anl	a,#0x01
   C9C0 FB                 2443 	mov	r3,a
   C9C1 BB 01 09           2444 	cjne	r3,#0x01,00117$
                           2445 ;	../../shared/src/power_pcie.c:187: PHY_STATUS = ST_P2_P0;
   C9C4 90 22 30           2446 	mov	dptr,#_MCU_STATUS0_LANE
   C9C7 74 32              2447 	mov	a,#0x32
   C9C9 F0                 2448 	movx	@dptr,a
                           2449 ;	../../shared/src/power_pcie.c:188: return;
   C9CA 02 CA 58           2450 	ljmp	00131$
   C9CD                    2451 00117$:
                           2452 ;	../../shared/src/power_pcie.c:191: reg_REFCLK_DIS_FM_PM = 0;
   C9CD 90 A3 1B           2453 	mov	dptr,#(_PM_CMN_REG1 + 0x0003)
   C9D0 E0                 2454 	movx	a,@dptr
   C9D1 54 7F              2455 	anl	a,#0x7f
   C9D3 F0                 2456 	movx	@dptr,a
                           2457 ;	../../shared/src/power_pcie.c:193: reg_ANA_PU_TX_LANE = 1;
   C9D4 90 20 03           2458 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0003)
   C9D7 E0                 2459 	movx	a,@dptr
   C9D8 44 40              2460 	orl	a,#0x40
   C9DA F0                 2461 	movx	@dptr,a
                           2462 ;	../../shared/src/power_pcie.c:195: if(reg_PU_PLL_OR && SYNC_SATUS_PLL_OR_PLL_OFF_READ) {
   C9DB 90 A3 1A           2463 	mov	dptr,#(_PM_CMN_REG1 + 0x0002)
   C9DE E0                 2464 	movx	a,@dptr
   C9DF 30 E4 21           2465 	jnb	acc.4,00120$
   C9E2 90 E6 B1           2466 	mov	dptr,#(_SYNC_INFO + 0x0001)
   C9E5 E0                 2467 	movx	a,@dptr
   C9E6 60 1B              2468 	jz	00120$
                           2469 ;	../../shared/src/power_pcie.c:196: pu_pll_on();
   C9E8 C0 02              2470 	push	ar2
   C9EA 78 32              2471 	mov	r0,#_pu_pll_on
   C9EC 79 C5              2472 	mov	r1,#(_pu_pll_on >> 8)
   C9EE 7A 01              2473 	mov	r2,#(_pu_pll_on >> 16)
   C9F0 12 00 B3           2474 	lcall	__sdcc_banked_call
                           2475 ;	../../shared/src/power_pcie.c:197: delay01(50);
   C9F3 90 00 32           2476 	mov	dptr,#0x0032
   C9F6 78 16              2477 	mov	r0,#_delay01
   C9F8 79 BC              2478 	mov	r1,#(_delay01 >> 8)
   C9FA 7A 02              2479 	mov	r2,#(_delay01 >> 16)
   C9FC 12 00 B3           2480 	lcall	__sdcc_banked_call
   C9FF D0 02              2481 	pop	ar2
   CA01 80 02              2482 	sjmp	00121$
   CA03                    2483 00120$:
                           2484 ;	../../shared/src/power_pcie.c:199: else pll_already_on = 1;
   CA03 7A 01              2485 	mov	r2,#0x01
   CA05                    2486 00121$:
                           2487 ;	../../shared/src/power_pcie.c:201: txlane_align();
   CA05 C0 02              2488 	push	ar2
   CA07 78 25              2489 	mov	r0,#_txlane_align
   CA09 79 E7              2490 	mov	r1,#(_txlane_align >> 8)
   CA0B 7A 01              2491 	mov	r2,#(_txlane_align >> 16)
   CA0D 12 00 B3           2492 	lcall	__sdcc_banked_call
   CA10 D0 02              2493 	pop	ar2
                           2494 ;	../../shared/src/power_pcie.c:202: SYNC_SATUS_P2_2_P1_ON = 0;
   CA12 90 E6 B2           2495 	mov	dptr,#(_SYNC_INFO + 0x0002)
   CA15 E4                 2496 	clr	a
   CA16 F0                 2497 	movx	@dptr,a
                           2498 ;	../../shared/src/power_pcie.c:210: if (pll_already_on==0 &&
   CA17 EA                 2499 	mov	a,r2
   CA18 70 28              2500 	jnz	00124$
                           2501 ;	../../shared/src/power_pcie.c:211: (reg_INIT_TXFOFFS_9_0_b0 || reg_INIT_TXFOFFS_9_0_b1 ||
   CA1A 90 A0 08           2502 	mov	dptr,#_DTX_REG0
   CA1D E0                 2503 	movx	a,@dptr
   CA1E 70 16              2504 	jnz	00123$
   CA20 90 A0 09           2505 	mov	dptr,#(_DTX_REG0 + 0x0001)
   CA23 E0                 2506 	movx	a,@dptr
   CA24 54 03              2507 	anl	a,#0x03
   CA26 70 0E              2508 	jnz	00123$
                           2509 ;	../../shared/src/power_pcie.c:212: reg_INIT_TXFOFFS_RING_9_0_b0 || reg_INIT_TXFOFFS_RING_9_0_b1)) {
   CA28 90 A0 10           2510 	mov	dptr,#_DTX_REG2
   CA2B E0                 2511 	movx	a,@dptr
   CA2C 70 08              2512 	jnz	00123$
   CA2E 90 A0 11           2513 	mov	dptr,#(_DTX_REG2 + 0x0001)
   CA31 E0                 2514 	movx	a,@dptr
   CA32 54 03              2515 	anl	a,#0x03
   CA34 60 0C              2516 	jz	00124$
   CA36                    2517 00123$:
                           2518 ;	../../shared/src/power_pcie.c:214: delay01(50);
   CA36 90 00 32           2519 	mov	dptr,#0x0032
   CA39 78 16              2520 	mov	r0,#_delay01
   CA3B 79 BC              2521 	mov	r1,#(_delay01 >> 8)
   CA3D 7A 02              2522 	mov	r2,#(_delay01 >> 16)
   CA3F 12 00 B3           2523 	lcall	__sdcc_banked_call
   CA42                    2524 00124$:
                           2525 ;	../../shared/src/power_pcie.c:218: if( reg_PIN_PU_RX_RD_LANE == 0 )
   CA42 90 21 02           2526 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   CA45 E0                 2527 	movx	a,@dptr
   CA46 20 E2 02           2528 	jb	acc.2,00130$
                           2529 ;	../../shared/src/power_pcie.c:219: do_wake = 0;
   CA49 C2 05              2530 	clr	_do_wake
   CA4B                    2531 00130$:
                           2532 ;	../../shared/src/power_pcie.c:220: PHY_STATUS = ST_P1_WK;
   CA4B 90 22 30           2533 	mov	dptr,#_MCU_STATUS0_LANE
   CA4E 74 23              2534 	mov	a,#0x23
   CA50 F0                 2535 	movx	@dptr,a
                           2536 ;	../../shared/src/power_pcie.c:222: reg_PIN_PLL_READY_TX_LANE = 1;
   CA51 90 20 02           2537 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   CA54 E0                 2538 	movx	a,@dptr
   CA55 44 04              2539 	orl	a,#0x04
   CA57 F0                 2540 	movx	@dptr,a
   CA58                    2541 00131$:
   CA58 02 00 C5           2542 	ljmp	__sdcc_banked_ret
                           2543 ;------------------------------------------------------------
                           2544 ;Allocation info for local variables in function 'Power_P1_P0'
                           2545 ;------------------------------------------------------------
                           2546 ;------------------------------------------------------------
                           2547 ;	../../shared/src/power_pcie.c:236: void Power_P1_P0(void) BANKING_CTRL {
                           2548 ;	-----------------------------------------
                           2549 ;	 function Power_P1_P0
                           2550 ;	-----------------------------------------
   CA5B                    2551 _Power_P1_P0:
                           2552 ;	../../shared/src/power_pcie.c:237: if(reg_INT_TXDETRX_EN_CHG_ISR_LANE ) {
   CA5B 90 20 1A           2553 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG1_LANE + 0x0002)
   CA5E E0                 2554 	movx	a,@dptr
   CA5F 30 E7 08           2555 	jnb	acc.7,00101$
                           2556 ;	../../shared/src/power_pcie.c:238: PHY_STATUS = ST_P1_TXDETRX;
   CA62 90 22 30           2557 	mov	dptr,#_MCU_STATUS0_LANE
   CA65 74 33              2558 	mov	a,#0x33
   CA67 F0                 2559 	movx	@dptr,a
                           2560 ;	../../shared/src/power_pcie.c:239: return;	
                           2561 ;	../../shared/src/power_pcie.c:241: else while(!do_wake); 
   CA68 80 4F              2562 	sjmp	00110$
   CA6A                    2563 00101$:
   CA6A 30 05 FD           2564 	jnb	_do_wake,00101$
                           2565 ;	../../shared/src/power_pcie.c:243: pu_rx_on();
   CA6D 78 E7              2566 	mov	r0,#_pu_rx_on
   CA6F 79 D2              2567 	mov	r1,#(_pu_rx_on >> 8)
   CA71 7A 02              2568 	mov	r2,#(_pu_rx_on >> 16)
   CA73 12 00 B3           2569 	lcall	__sdcc_banked_call
                           2570 ;	../../shared/src/power_pcie.c:245: txhiz2loz();
   CA76 78 0E              2571 	mov	r0,#_txhiz2loz
   CA78 79 D0              2572 	mov	r1,#(_txhiz2loz >> 8)
   CA7A 7A 01              2573 	mov	r2,#(_txhiz2loz >> 16)
   CA7C 12 00 B3           2574 	lcall	__sdcc_banked_call
                           2575 ;	../../shared/src/power_pcie.c:247: load_cal_data_dll();
   CA7F 78 42              2576 	mov	r0,#_load_cal_data_dll
   CA81 79 86              2577 	mov	r1,#(_load_cal_data_dll >> 8)
   CA83 7A 02              2578 	mov	r2,#(_load_cal_data_dll >> 16)
   CA85 12 00 B3           2579 	lcall	__sdcc_banked_call
                           2580 ;	../../shared/src/power_pcie.c:249: delay01(20); // 2us-5us 
   CA88 90 00 14           2581 	mov	dptr,#0x0014
   CA8B 78 16              2582 	mov	r0,#_delay01
   CA8D 79 BC              2583 	mov	r1,#(_delay01 >> 8)
   CA8F 7A 02              2584 	mov	r2,#(_delay01 >> 16)
   CA91 12 00 B3           2585 	lcall	__sdcc_banked_call
                           2586 ;	../../shared/src/power_pcie.c:251: DTL_DTX_DFE_clkoff_reset_0();
   CA94 78 3E              2587 	mov	r0,#_DTL_DTX_DFE_clkoff_reset_0
   CA96 79 C6              2588 	mov	r1,#(_DTL_DTX_DFE_clkoff_reset_0 >> 8)
   CA98 7A 01              2589 	mov	r2,#(_DTL_DTX_DFE_clkoff_reset_0 >> 16)
   CA9A 12 00 B3           2590 	lcall	__sdcc_banked_call
                           2591 ;	../../shared/src/power_pcie.c:260: if(cmx_AUTO_RX_INIT_EN == 0)
   CA9D 90 E6 2E           2592 	mov	dptr,#(_CONTROL_CONFIG8 + 0x0002)
   CAA0 E0                 2593 	movx	a,@dptr
   CAA1 20 E0 08           2594 	jb	acc.0,00108$
                           2595 ;	../../shared/src/power_pcie.c:261: PHY_STATUS = ST_PLLREADY; 
   CAA4 90 22 30           2596 	mov	dptr,#_MCU_STATUS0_LANE
   CAA7 74 27              2597 	mov	a,#0x27
   CAA9 F0                 2598 	movx	@dptr,a
   CAAA 80 06              2599 	sjmp	00109$
   CAAC                    2600 00108$:
                           2601 ;	../../shared/src/power_pcie.c:263: PHY_STATUS = ST_DTL;
   CAAC 90 22 30           2602 	mov	dptr,#_MCU_STATUS0_LANE
   CAAF 74 2C              2603 	mov	a,#0x2C
   CAB1 F0                 2604 	movx	@dptr,a
   CAB2                    2605 00109$:
                           2606 ;	../../shared/src/power_pcie.c:265: reg_PIN_PLL_READY_RX_LANE = 1;
   CAB2 90 21 02           2607 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   CAB5 E0                 2608 	movx	a,@dptr
   CAB6 44 40              2609 	orl	a,#0x40
   CAB8 F0                 2610 	movx	@dptr,a
   CAB9                    2611 00110$:
   CAB9 02 00 C5           2612 	ljmp	__sdcc_banked_ret
                           2613 ;------------------------------------------------------------
                           2614 ;Allocation info for local variables in function 'Power_P2_P0'
                           2615 ;------------------------------------------------------------
                           2616 ;pll_already_on            Allocated to registers 
                           2617 ;------------------------------------------------------------
                           2618 ;	../../shared/src/power_pcie.c:268: void Power_P2_P0(void) BANKING_CTRL {
                           2619 ;	-----------------------------------------
                           2620 ;	 function Power_P2_P0
                           2621 ;	-----------------------------------------
   CABC                    2622 _Power_P2_P0:
                           2623 ;	../../shared/src/power_pcie.c:270: reg_REFCLK_DIS_FM_PM = 0; 	
   CABC 90 A3 1B           2624 	mov	dptr,#(_PM_CMN_REG1 + 0x0003)
   CABF E0                 2625 	movx	a,@dptr
   CAC0 54 7F              2626 	anl	a,#0x7f
   CAC2 F0                 2627 	movx	@dptr,a
                           2628 ;	../../shared/src/power_pcie.c:272: reg_ANA_PU_TX_LANE = 1;	
   CAC3 90 20 03           2629 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0003)
   CAC6 E0                 2630 	movx	a,@dptr
   CAC7 44 40              2631 	orl	a,#0x40
   CAC9 F0                 2632 	movx	@dptr,a
                           2633 ;	../../shared/src/power_pcie.c:273: pu_rx_on();
   CACA 78 E7              2634 	mov	r0,#_pu_rx_on
   CACC 79 D2              2635 	mov	r1,#(_pu_rx_on >> 8)
   CACE 7A 02              2636 	mov	r2,#(_pu_rx_on >> 16)
   CAD0 12 00 B3           2637 	lcall	__sdcc_banked_call
                           2638 ;	../../shared/src/power_pcie.c:275: if( SYNC_SATUS_PLL_OR_PLL_OFF==1 ) {
   CAD3 90 E6 B1           2639 	mov	dptr,#(_SYNC_INFO + 0x0001)
   CAD6 E0                 2640 	movx	a,@dptr
   CAD7 FA                 2641 	mov	r2,a
   CAD8 BA 01 72           2642 	cjne	r2,#0x01,00115$
                           2643 ;	../../shared/src/power_pcie.c:276: if (slave_phy_on==0 && mcuid== master_mcu) {
   CADB 90 66 1C           2644 	mov	dptr,#_slave_phy_on
   CADE E0                 2645 	movx	a,@dptr
   CADF FA                 2646 	mov	r2,a
   CAE0 70 2E              2647 	jnz	00107$
   CAE2 90 22 00           2648 	mov	dptr,#_MCU_CONTROL_LANE
   CAE5 E0                 2649 	movx	a,@dptr
   CAE6 FA                 2650 	mov	r2,a
   CAE7 90 E6 50           2651 	mov	dptr,#_MCU_CONFIG
   CAEA E0                 2652 	movx	a,@dptr
   CAEB FB                 2653 	mov	r3,a
   CAEC EA                 2654 	mov	a,r2
   CAED B5 03 20           2655 	cjne	a,ar3,00107$
                           2656 ;	../../shared/src/power_pcie.c:279: if(lc_pll_used || ring_use_250m) //LCPLL always on
   CAF0 20 11 03           2657 	jb	_lc_pll_used,00101$
   CAF3 30 13 09           2658 	jnb	_ring_use_250m,00102$
   CAF6                    2659 00101$:
                           2660 ;	../../shared/src/power_pcie.c:281: pll_fast_cal(); 
   CAF6 78 43              2661 	mov	r0,#_pll_fast_cal
   CAF8 79 C1              2662 	mov	r1,#(_pll_fast_cal >> 8)
   CAFA 7A 01              2663 	mov	r2,#(_pll_fast_cal >> 16)
   CAFC 12 00 B3           2664 	lcall	__sdcc_banked_call
   CAFF                    2665 00102$:
                           2666 ;	../../shared/src/power_pcie.c:282: if(ring_pll_enabled) {
   CAFF 30 12 09           2667 	jnb	_ring_pll_enabled,00105$
                           2668 ;	../../shared/src/power_pcie.c:283: ring_pll_fast_cal();
   CB02 78 30              2669 	mov	r0,#_ring_pll_fast_cal
   CB04 79 DC              2670 	mov	r1,#(_ring_pll_fast_cal >> 8)
   CB06 7A 01              2671 	mov	r2,#(_ring_pll_fast_cal >> 16)
   CB08 12 00 B3           2672 	lcall	__sdcc_banked_call
   CB0B                    2673 00105$:
                           2674 ;	../../shared/src/power_pcie.c:286: SYNC_SATUS_PLL_OR_PLL_OFF = 0;
   CB0B 90 E6 B1           2675 	mov	dptr,#(_SYNC_INFO + 0x0001)
   CB0E E4                 2676 	clr	a
   CB0F F0                 2677 	movx	@dptr,a
   CB10                    2678 00107$:
                           2679 ;	../../shared/src/power_pcie.c:296: if(slave_phy_on) {
   CB10 90 66 1C           2680 	mov	dptr,#_slave_phy_on
   CB13 E0                 2681 	movx	a,@dptr
   CB14 FA                 2682 	mov	r2,a
   CB15 60 2D              2683 	jz	00112$
                           2684 ;	../../shared/src/power_pcie.c:297: check_master_phy_status(CHECK_MP_PLL_CLK_READY_ON);
   CB17 75 82 03           2685 	mov	dpl,#0x03
   CB1A 78 83              2686 	mov	r0,#_check_master_phy_status
   CB1C 79 B2              2687 	mov	r1,#(_check_master_phy_status >> 8)
   CB1E 7A 01              2688 	mov	r2,#(_check_master_phy_status >> 16)
   CB20 12 00 B3           2689 	lcall	__sdcc_banked_call
                           2690 ;	../../shared/src/power_pcie.c:298: pll_clk_ready_1();
   CB23 78 47              2691 	mov	r0,#_pll_clk_ready_1
   CB25 79 D4              2692 	mov	r1,#(_pll_clk_ready_1 >> 8)
   CB27 7A 02              2693 	mov	r2,#(_pll_clk_ready_1 >> 16)
   CB29 12 00 B3           2694 	lcall	__sdcc_banked_call
                           2695 ;	../../shared/src/power_pcie.c:299: if(ring_pll_enabled) {
   CB2C 30 12 15           2696 	jnb	_ring_pll_enabled,00112$
                           2697 ;	../../shared/src/power_pcie.c:300: check_master_phy_status(CHECK_MP_PLL_CLK_READY_RING_ON);
   CB2F 75 82 05           2698 	mov	dpl,#0x05
   CB32 78 83              2699 	mov	r0,#_check_master_phy_status
   CB34 79 B2              2700 	mov	r1,#(_check_master_phy_status >> 8)
   CB36 7A 01              2701 	mov	r2,#(_check_master_phy_status >> 16)
   CB38 12 00 B3           2702 	lcall	__sdcc_banked_call
                           2703 ;	../../shared/src/power_pcie.c:301: pll_clk_ready_ring_1();
   CB3B 78 A7              2704 	mov	r0,#_pll_clk_ready_ring_1
   CB3D 79 D4              2705 	mov	r1,#(_pll_clk_ready_ring_1 >> 8)
   CB3F 7A 02              2706 	mov	r2,#(_pll_clk_ready_ring_1 >> 16)
   CB41 12 00 B3           2707 	lcall	__sdcc_banked_call
   CB44                    2708 00112$:
                           2709 ;	../../shared/src/power_pcie.c:305: check_pll_clk_ready_pcie();
   CB44 78 F4              2710 	mov	r0,#_check_pll_clk_ready_pcie
   CB46 79 D4              2711 	mov	r1,#(_check_pll_clk_ready_pcie >> 8)
   CB48 7A 02              2712 	mov	r2,#(_check_pll_clk_ready_pcie >> 16)
   CB4A 12 00 B3           2713 	lcall	__sdcc_banked_call
                           2714 ;	../../shared/src/power_pcie.c:308: pll_already_on = 1;
   CB4D                    2715 00115$:
                           2716 ;	../../shared/src/power_pcie.c:311: txhiz2loz();
   CB4D 78 0E              2717 	mov	r0,#_txhiz2loz
   CB4F 79 D0              2718 	mov	r1,#(_txhiz2loz >> 8)
   CB51 7A 01              2719 	mov	r2,#(_txhiz2loz >> 16)
   CB53 12 00 B3           2720 	lcall	__sdcc_banked_call
                           2721 ;	../../shared/src/power_pcie.c:313: load_cal_data_dll();
   CB56 78 42              2722 	mov	r0,#_load_cal_data_dll
   CB58 79 86              2723 	mov	r1,#(_load_cal_data_dll >> 8)
   CB5A 7A 02              2724 	mov	r2,#(_load_cal_data_dll >> 16)
   CB5C 12 00 B3           2725 	lcall	__sdcc_banked_call
                           2726 ;	../../shared/src/power_pcie.c:315: txlane_align();
   CB5F 78 25              2727 	mov	r0,#_txlane_align
   CB61 79 E7              2728 	mov	r1,#(_txlane_align >> 8)
   CB63 7A 01              2729 	mov	r2,#(_txlane_align >> 16)
   CB65 12 00 B3           2730 	lcall	__sdcc_banked_call
                           2731 ;	../../shared/src/power_pcie.c:316: SYNC_SATUS_P2_2_P1_ON = 0;
   CB68 90 E6 B2           2732 	mov	dptr,#(_SYNC_INFO + 0x0002)
   CB6B E4                 2733 	clr	a
   CB6C F0                 2734 	movx	@dptr,a
                           2735 ;	../../shared/src/power_pcie.c:318: DTL_DTX_DFE_clkoff_reset_0();
   CB6D 78 3E              2736 	mov	r0,#_DTL_DTX_DFE_clkoff_reset_0
   CB6F 79 C6              2737 	mov	r1,#(_DTL_DTX_DFE_clkoff_reset_0 >> 8)
   CB71 7A 01              2738 	mov	r2,#(_DTL_DTX_DFE_clkoff_reset_0 >> 16)
   CB73 12 00 B3           2739 	lcall	__sdcc_banked_call
                           2740 ;	../../shared/src/power_pcie.c:319: delay01(100);
   CB76 90 00 64           2741 	mov	dptr,#0x0064
   CB79 78 16              2742 	mov	r0,#_delay01
   CB7B 79 BC              2743 	mov	r1,#(_delay01 >> 8)
   CB7D 7A 02              2744 	mov	r2,#(_delay01 >> 16)
   CB7F 12 00 B3           2745 	lcall	__sdcc_banked_call
                           2746 ;	../../shared/src/power_pcie.c:321: if(cmx_AUTO_RX_INIT_EN == 0)
   CB82 90 E6 2E           2747 	mov	dptr,#(_CONTROL_CONFIG8 + 0x0002)
   CB85 E0                 2748 	movx	a,@dptr
   CB86 20 E0 08           2749 	jb	acc.0,00117$
                           2750 ;	../../shared/src/power_pcie.c:322: PHY_STATUS = ST_PLLREADY; 
   CB89 90 22 30           2751 	mov	dptr,#_MCU_STATUS0_LANE
   CB8C 74 27              2752 	mov	a,#0x27
   CB8E F0                 2753 	movx	@dptr,a
   CB8F 80 06              2754 	sjmp	00118$
   CB91                    2755 00117$:
                           2756 ;	../../shared/src/power_pcie.c:324: PHY_STATUS = ST_DTL;
   CB91 90 22 30           2757 	mov	dptr,#_MCU_STATUS0_LANE
   CB94 74 2C              2758 	mov	a,#0x2C
   CB96 F0                 2759 	movx	@dptr,a
   CB97                    2760 00118$:
                           2761 ;	../../shared/src/power_pcie.c:326: reg_PIN_PLL_READY_TX_LANE = 1;
   CB97 90 20 02           2762 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   CB9A E0                 2763 	movx	a,@dptr
   CB9B 44 04              2764 	orl	a,#0x04
   CB9D F0                 2765 	movx	@dptr,a
                           2766 ;	../../shared/src/power_pcie.c:327: reg_PIN_PLL_READY_RX_LANE = 1;
   CB9E 90 21 02           2767 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   CBA1 E0                 2768 	movx	a,@dptr
   CBA2 44 40              2769 	orl	a,#0x40
   CBA4 F0                 2770 	movx	@dptr,a
   CBA5 02 00 C5           2771 	ljmp	__sdcc_banked_ret
                           2772 ;------------------------------------------------------------
                           2773 ;Allocation info for local variables in function 'Power_P1CLKREQ_P1'
                           2774 ;------------------------------------------------------------
                           2775 ;------------------------------------------------------------
                           2776 ;	../../shared/src/power_pcie.c:342: void Power_P1CLKREQ_P1(void) BANKING_CTRL {
                           2777 ;	-----------------------------------------
                           2778 ;	 function Power_P1CLKREQ_P1
                           2779 ;	-----------------------------------------
   CBA8                    2780 _Power_P1CLKREQ_P1:
                           2781 ;	../../shared/src/power_pcie.c:344: TCON  = 0x04; //EX0=LVL 
   CBA8 75 88 04           2782 	mov	_TCON,#0x04
                           2783 ;	../../shared/src/power_pcie.c:345: reg_INT_REFCLK_DIS_CHG_ISR_LANE = 0;
   CBAB 90 20 1B           2784 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG1_LANE + 0x0003)
   CBAE E0                 2785 	movx	a,@dptr
   CBAF 54 FD              2786 	anl	a,#0xfd
   CBB1 F0                 2787 	movx	@dptr,a
                           2788 ;	../../shared/src/power_pcie.c:346: reg_INT0_REFCLK_DIS_EN_INT_EN_LANE = 1;
   CBB2 90 22 42           2789 	mov	dptr,#(_MCU_INT0_CONTROL + 0x0002)
   CBB5 E0                 2790 	movx	a,@dptr
   CBB6 44 20              2791 	orl	a,#0x20
   CBB8 F0                 2792 	movx	@dptr,a
                           2793 ;	../../shared/src/power_pcie.c:347: PCON = 0x8a; //mcu stop 
   CBB9 75 87 8A           2794 	mov	_PCON,#0x8A
                           2795 ;	../../shared/src/power_pcie.c:350: TCON  = 0x05; //EX0=FALL
   CBBC 75 88 05           2796 	mov	_TCON,#0x05
                           2797 ;	../../shared/src/power_pcie.c:351: reg_INT0_REFCLK_DIS_EN_INT_EN_LANE = 0;
   CBBF 90 22 42           2798 	mov	dptr,#(_MCU_INT0_CONTROL + 0x0002)
   CBC2 E0                 2799 	movx	a,@dptr
   CBC3 54 DF              2800 	anl	a,#0xdf
   CBC5 F0                 2801 	movx	@dptr,a
                           2802 ;	../../shared/src/power_pcie.c:352: reg_REFCLK_DIS_FM_PM = 0; 
   CBC6 90 A3 1B           2803 	mov	dptr,#(_PM_CMN_REG1 + 0x0003)
   CBC9 E0                 2804 	movx	a,@dptr
   CBCA 54 7F              2805 	anl	a,#0x7f
   CBCC F0                 2806 	movx	@dptr,a
                           2807 ;	../../shared/src/power_pcie.c:353: reg_INT_REFCLK_DIS_CHG_ISR_LANE = 0;
   CBCD 90 20 1B           2808 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG1_LANE + 0x0003)
   CBD0 E0                 2809 	movx	a,@dptr
   CBD1 54 FD              2810 	anl	a,#0xfd
   CBD3 F0                 2811 	movx	@dptr,a
                           2812 ;	../../shared/src/power_pcie.c:355: txloz2hiz();
   CBD4 78 ED              2813 	mov	r0,#_txloz2hiz
   CBD6 79 CF              2814 	mov	r1,#(_txloz2hiz >> 8)
   CBD8 7A 01              2815 	mov	r2,#(_txloz2hiz >> 16)
   CBDA 12 00 B3           2816 	lcall	__sdcc_banked_call
                           2817 ;	../../shared/src/power_pcie.c:357: if( reg_PU_IVREF_FELL == 1 ) {
   CBDD 90 A3 18           2818 	mov	dptr,#_PM_CMN_REG1
   CBE0 E0                 2819 	movx	a,@dptr
   CBE1 03                 2820 	rr	a
   CBE2 54 01              2821 	anl	a,#0x01
   CBE4 FA                 2822 	mov	r2,a
   CBE5 BA 01 02           2823 	cjne	r2,#0x01,00140$
   CBE8 80 03              2824 	sjmp	00141$
   CBEA                    2825 00140$:
   CBEA 02 CC 59           2826 	ljmp	00114$
   CBED                    2827 00141$:
                           2828 ;	../../shared/src/power_pcie.c:358: if( reg_PU_BG_FELL == 1)
   CBED 90 A3 18           2829 	mov	dptr,#_PM_CMN_REG1
   CBF0 E0                 2830 	movx	a,@dptr
   CBF1 C4                 2831 	swap	a
   CBF2 23                 2832 	rl	a
   CBF3 54 01              2833 	anl	a,#0x01
   CBF5 FA                 2834 	mov	r2,a
   CBF6 BA 01 08           2835 	cjne	r2,#0x01,00102$
                           2836 ;	../../shared/src/power_pcie.c:359: PHY_STATUS = ST_P1OFF_WK;
   CBF9 90 22 30           2837 	mov	dptr,#_MCU_STATUS0_LANE
   CBFC 74 24              2838 	mov	a,#0x24
   CBFE F0                 2839 	movx	@dptr,a
   CBFF 80 06              2840 	sjmp	00103$
   CC01                    2841 00102$:
                           2842 ;	../../shared/src/power_pcie.c:360: else PHY_STATUS = ST_P1SNOOZE_WK;
   CC01 90 22 30           2843 	mov	dptr,#_MCU_STATUS0_LANE
   CC04 74 25              2844 	mov	a,#0x25
   CC06 F0                 2845 	movx	@dptr,a
   CC07                    2846 00103$:
                           2847 ;	../../shared/src/power_pcie.c:362: reg_ANA_PU_SQ_LANE = 0;
   CC07 90 21 03           2848 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0003)
   CC0A E0                 2849 	movx	a,@dptr
   CC0B 54 DF              2850 	anl	a,#0xdf
   CC0D F0                 2851 	movx	@dptr,a
                           2852 ;	../../shared/src/power_pcie.c:363: PM_CMN_REG2.BT.B2 = 0;
   CC0E 90 A3 4E           2853 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   CC11 E4                 2854 	clr	a
   CC12 F0                 2855 	movx	@dptr,a
                           2856 ;	../../shared/src/power_pcie.c:365: if(mcuid== master_mcu) {
   CC13 90 22 00           2857 	mov	dptr,#_MCU_CONTROL_LANE
   CC16 E0                 2858 	movx	a,@dptr
   CC17 FA                 2859 	mov	r2,a
   CC18 90 E6 50           2860 	mov	dptr,#_MCU_CONFIG
   CC1B E0                 2861 	movx	a,@dptr
   CC1C FB                 2862 	mov	r3,a
   CC1D EA                 2863 	mov	a,r2
   CC1E B5 03 23           2864 	cjne	a,ar3,00107$
                           2865 ;	../../shared/src/power_pcie.c:368: if( reg_PU_BG_FELL == 1) //will be cleared by hardware when ANA_PU_IVREF=1
   CC21 90 A3 18           2866 	mov	dptr,#_PM_CMN_REG1
   CC24 E0                 2867 	movx	a,@dptr
   CC25 C4                 2868 	swap	a
   CC26 23                 2869 	rl	a
   CC27 54 01              2870 	anl	a,#0x01
   CC29 FA                 2871 	mov	r2,a
   CC2A BA 01 0C           2872 	cjne	r2,#0x01,00105$
                           2873 ;	../../shared/src/power_pcie.c:369: delay01(200);
   CC2D 90 00 C8           2874 	mov	dptr,#0x00C8
   CC30 78 16              2875 	mov	r0,#_delay01
   CC32 79 BC              2876 	mov	r1,#(_delay01 >> 8)
   CC34 7A 02              2877 	mov	r2,#(_delay01 >> 16)
   CC36 12 00 B3           2878 	lcall	__sdcc_banked_call
   CC39                    2879 00105$:
                           2880 ;	../../shared/src/power_pcie.c:371: pu_ivref_on();
   CC39 78 96              2881 	mov	r0,#_pu_ivref_on
   CC3B 79 D2              2882 	mov	r1,#(_pu_ivref_on >> 8)
   CC3D 7A 02              2883 	mov	r2,#(_pu_ivref_on >> 16)
   CC3F 12 00 B3           2884 	lcall	__sdcc_banked_call
   CC42 80 09              2885 	sjmp	00108$
   CC44                    2886 00107$:
                           2887 ;	../../shared/src/power_pcie.c:376: check_pu_ivref();
   CC44 78 DD              2888 	mov	r0,#_check_pu_ivref
   CC46 79 D2              2889 	mov	r1,#(_check_pu_ivref >> 8)
   CC48 7A 02              2890 	mov	r2,#(_check_pu_ivref >> 16)
   CC4A 12 00 B3           2891 	lcall	__sdcc_banked_call
   CC4D                    2892 00108$:
                           2893 ;	../../shared/src/power_pcie.c:378: delay01(20);
   CC4D 90 00 14           2894 	mov	dptr,#0x0014
   CC50 78 16              2895 	mov	r0,#_delay01
   CC52 79 BC              2896 	mov	r1,#(_delay01 >> 8)
   CC54 7A 02              2897 	mov	r2,#(_delay01 >> 16)
   CC56 12 00 B3           2898 	lcall	__sdcc_banked_call
                           2899 ;	../../shared/src/power_pcie.c:381: while(reg_PIN_PU_PLL_RD_LANE==0 || reg_PIN_PU_TX_RD_LANE==0){
   CC59                    2900 00114$:
   CC59 90 20 07           2901 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   CC5C E0                 2902 	movx	a,@dptr
   CC5D 30 E5 07           2903 	jnb	acc.5,00115$
   CC60 90 20 07           2904 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   CC63 E0                 2905 	movx	a,@dptr
   CC64 20 E4 17           2906 	jb	acc.4,00116$
   CC67                    2907 00115$:
                           2908 ;	../../shared/src/power_pcie.c:382: if(reg_PIN_REFCLK_DIS_RD) {
   CC67 90 A3 1A           2909 	mov	dptr,#(_PM_CMN_REG1 + 0x0002)
   CC6A E0                 2910 	movx	a,@dptr
   CC6B 30 E0 EB           2911 	jnb	acc.0,00114$
                           2912 ;	../../shared/src/power_pcie.c:383: PHY_STATUS = ST_P1CLKREQ_WK;
   CC6E 90 22 30           2913 	mov	dptr,#_MCU_STATUS0_LANE
   CC71 74 26              2914 	mov	a,#0x26
   CC73 F0                 2915 	movx	@dptr,a
                           2916 ;	../../shared/src/power_pcie.c:384: reg_ANA_PU_SQ_LANE = 1;
   CC74 90 21 03           2917 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0003)
   CC77 E0                 2918 	movx	a,@dptr
   CC78 44 20              2919 	orl	a,#0x20
   CC7A F0                 2920 	movx	@dptr,a
                           2921 ;	../../shared/src/power_pcie.c:385: return;
   CC7B 02 CD 26           2922 	ljmp	00126$
   CC7E                    2923 00116$:
                           2924 ;	../../shared/src/power_pcie.c:389: reg_ANA_PU_TX_LANE = 1;
   CC7E 90 20 03           2925 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0003)
   CC81 E0                 2926 	movx	a,@dptr
   CC82 44 40              2927 	orl	a,#0x40
   CC84 F0                 2928 	movx	@dptr,a
                           2929 ;	../../shared/src/power_pcie.c:390: pu_pll_on();
   CC85 78 32              2930 	mov	r0,#_pu_pll_on
   CC87 79 C5              2931 	mov	r1,#(_pu_pll_on >> 8)
   CC89 7A 01              2932 	mov	r2,#(_pu_pll_on >> 16)
   CC8B 12 00 B3           2933 	lcall	__sdcc_banked_call
                           2934 ;	../../shared/src/power_pcie.c:391: reg_ANA_PU_SQ_LANE = 1;
   CC8E 90 21 03           2935 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0003)
   CC91 E0                 2936 	movx	a,@dptr
   CC92 44 20              2937 	orl	a,#0x20
   CC94 F0                 2938 	movx	@dptr,a
                           2939 ;	../../shared/src/power_pcie.c:393: delay01(50);
   CC95 90 00 32           2940 	mov	dptr,#0x0032
   CC98 78 16              2941 	mov	r0,#_delay01
   CC9A 79 BC              2942 	mov	r1,#(_delay01 >> 8)
   CC9C 7A 02              2943 	mov	r2,#(_delay01 >> 16)
   CC9E 12 00 B3           2944 	lcall	__sdcc_banked_call
                           2945 ;	../../shared/src/power_pcie.c:394: txlane_align();
   CCA1 78 25              2946 	mov	r0,#_txlane_align
   CCA3 79 E7              2947 	mov	r1,#(_txlane_align >> 8)
   CCA5 7A 01              2948 	mov	r2,#(_txlane_align >> 16)
   CCA7 12 00 B3           2949 	lcall	__sdcc_banked_call
                           2950 ;	../../shared/src/power_pcie.c:396: if( PHY_STATUS == ST_P1OFF_WK ) { 
   CCAA 90 22 30           2951 	mov	dptr,#_MCU_STATUS0_LANE
   CCAD E0                 2952 	movx	a,@dptr
   CCAE FA                 2953 	mov	r2,a
   CCAF BA 24 36           2954 	cjne	r2,#0x24,00118$
                           2955 ;	../../shared/src/power_pcie.c:397: reg_ANA_TX_IDLE_HIZ_EN_LANE = 0; //LOZ idle time
   CCB2 90 20 07           2956 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   CCB5 E0                 2957 	movx	a,@dptr
   CCB6 54 7F              2958 	anl	a,#0x7f
   CCB8 F0                 2959 	movx	@dptr,a
                           2960 ;	../../shared/src/power_pcie.c:398: reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
   CCB9 90 20 07           2961 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   CCBC E0                 2962 	movx	a,@dptr
   CCBD 54 BF              2963 	anl	a,#0xbf
   CCBF F0                 2964 	movx	@dptr,a
                           2965 ;	../../shared/src/power_pcie.c:399: reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
   CCC0 90 20 07           2966 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   CCC3 E0                 2967 	movx	a,@dptr
   CCC4 54 BF              2968 	anl	a,#0xbf
   CCC6 F0                 2969 	movx	@dptr,a
                           2970 ;	../../shared/src/power_pcie.c:400: reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
   CCC7 90 20 07           2971 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   CCCA E0                 2972 	movx	a,@dptr
   CCCB 54 BF              2973 	anl	a,#0xbf
   CCCD F0                 2974 	movx	@dptr,a
                           2975 ;	../../shared/src/power_pcie.c:401: delay01(400);
   CCCE 90 01 90           2976 	mov	dptr,#0x0190
   CCD1 78 16              2977 	mov	r0,#_delay01
   CCD3 79 BC              2978 	mov	r1,#(_delay01 >> 8)
   CCD5 7A 02              2979 	mov	r2,#(_delay01 >> 16)
   CCD7 12 00 B3           2980 	lcall	__sdcc_banked_call
                           2981 ;	../../shared/src/power_pcie.c:402: reg_ANA_TX_LESS_CUR_IDLE_LANE = 1;
   CCDA 90 20 07           2982 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   CCDD E0                 2983 	movx	a,@dptr
   CCDE 44 40              2984 	orl	a,#0x40
   CCE0 F0                 2985 	movx	@dptr,a
                           2986 ;	../../shared/src/power_pcie.c:403: reg_ANA_TX_IDLE_HIZ_EN_LANE = 1;
   CCE1 90 20 07           2987 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   CCE4 E0                 2988 	movx	a,@dptr
   CCE5 44 80              2989 	orl	a,#0x80
   CCE7 F0                 2990 	movx	@dptr,a
   CCE8                    2991 00118$:
                           2992 ;	../../shared/src/power_pcie.c:411: if (reg_INIT_TXFOFFS_9_0_b0 || reg_INIT_TXFOFFS_9_0_b1 ||
   CCE8 90 A0 08           2993 	mov	dptr,#_DTX_REG0
   CCEB E0                 2994 	movx	a,@dptr
   CCEC 70 16              2995 	jnz	00119$
   CCEE 90 A0 09           2996 	mov	dptr,#(_DTX_REG0 + 0x0001)
   CCF1 E0                 2997 	movx	a,@dptr
   CCF2 54 03              2998 	anl	a,#0x03
   CCF4 70 0E              2999 	jnz	00119$
                           3000 ;	../../shared/src/power_pcie.c:412: reg_INIT_TXFOFFS_RING_9_0_b0 || reg_INIT_TXFOFFS_RING_9_0_b1) {
   CCF6 90 A0 10           3001 	mov	dptr,#_DTX_REG2
   CCF9 E0                 3002 	movx	a,@dptr
   CCFA 70 08              3003 	jnz	00119$
   CCFC 90 A0 11           3004 	mov	dptr,#(_DTX_REG2 + 0x0001)
   CCFF E0                 3005 	movx	a,@dptr
   CD00 54 03              3006 	anl	a,#0x03
   CD02 60 0C              3007 	jz	00120$
   CD04                    3008 00119$:
                           3009 ;	../../shared/src/power_pcie.c:414: delay01(50);
   CD04 90 00 32           3010 	mov	dptr,#0x0032
   CD07 78 16              3011 	mov	r0,#_delay01
   CD09 79 BC              3012 	mov	r1,#(_delay01 >> 8)
   CD0B 7A 02              3013 	mov	r2,#(_delay01 >> 16)
   CD0D 12 00 B3           3014 	lcall	__sdcc_banked_call
   CD10                    3015 00120$:
                           3016 ;	../../shared/src/power_pcie.c:417: if( reg_PIN_PU_RX_RD_LANE == 0 )
   CD10 90 21 02           3017 	mov	dptr,#(_PM_CTRL_RX_LANE_REG1_LANE + 0x0002)
   CD13 E0                 3018 	movx	a,@dptr
   CD14 20 E2 02           3019 	jb	acc.2,00125$
                           3020 ;	../../shared/src/power_pcie.c:418: do_wake = 0;
   CD17 C2 05              3021 	clr	_do_wake
   CD19                    3022 00125$:
                           3023 ;	../../shared/src/power_pcie.c:420: PHY_STATUS = ST_P1_WK;
   CD19 90 22 30           3024 	mov	dptr,#_MCU_STATUS0_LANE
   CD1C 74 23              3025 	mov	a,#0x23
   CD1E F0                 3026 	movx	@dptr,a
                           3027 ;	../../shared/src/power_pcie.c:423: reg_PIN_PLL_READY_TX_LANE = 1;
   CD1F 90 20 02           3028 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   CD22 E0                 3029 	movx	a,@dptr
   CD23 44 04              3030 	orl	a,#0x04
   CD25 F0                 3031 	movx	@dptr,a
   CD26                    3032 00126$:
   CD26 02 00 C5           3033 	ljmp	__sdcc_banked_ret
                           3034 ;------------------------------------------------------------
                           3035 ;Allocation info for local variables in function 'P0Off_TXDETRX'
                           3036 ;------------------------------------------------------------
                           3037 ;------------------------------------------------------------
                           3038 ;	../../shared/src/power_pcie.c:437: void P0Off_TXDETRX(void) BANKING_CTRL {
                           3039 ;	-----------------------------------------
                           3040 ;	 function P0Off_TXDETRX
                           3041 ;	-----------------------------------------
   CD29                    3042 _P0Off_TXDETRX:
                           3043 ;	../../shared/src/power_pcie.c:438: PHY_STATUS = ST_POFF_TXDETRX;
   CD29 90 22 30           3044 	mov	dptr,#_MCU_STATUS0_LANE
   CD2C 74 2E              3045 	mov	a,#0x2E
   CD2E F0                 3046 	movx	@dptr,a
                           3047 ;	../../shared/src/power_pcie.c:440: delay01(200);
   CD2F 90 00 C8           3048 	mov	dptr,#0x00C8
   CD32 78 16              3049 	mov	r0,#_delay01
   CD34 79 BC              3050 	mov	r1,#(_delay01 >> 8)
   CD36 7A 02              3051 	mov	r2,#(_delay01 >> 16)
   CD38 12 00 B3           3052 	lcall	__sdcc_banked_call
                           3053 ;	../../shared/src/power_pcie.c:442: if( cmx_TX_LANE_ALIGN_OFF==0 ) {
   CD3B 90 E6 04           3054 	mov	dptr,#_CONTROL_CONFIG0
   CD3E E0                 3055 	movx	a,@dptr
   CD3F 20 E4 24           3056 	jb	acc.4,00107$
                           3057 ;	../../shared/src/power_pcie.c:443: if(mcuid== master_mcu) {	
   CD42 90 22 00           3058 	mov	dptr,#_MCU_CONTROL_LANE
   CD45 E0                 3059 	movx	a,@dptr
   CD46 FA                 3060 	mov	r2,a
   CD47 90 E6 50           3061 	mov	dptr,#_MCU_CONFIG
   CD4A E0                 3062 	movx	a,@dptr
   CD4B FB                 3063 	mov	r3,a
   CD4C EA                 3064 	mov	a,r2
   CD4D B5 03 0B           3065 	cjne	a,ar3,00102$
                           3066 ;	../../shared/src/power_pcie.c:445: pu_ivref_on();	
   CD50 78 96              3067 	mov	r0,#_pu_ivref_on
   CD52 79 D2              3068 	mov	r1,#(_pu_ivref_on >> 8)
   CD54 7A 02              3069 	mov	r2,#(_pu_ivref_on >> 16)
   CD56 12 00 B3           3070 	lcall	__sdcc_banked_call
   CD59 80 6A              3071 	sjmp	00108$
   CD5B                    3072 00102$:
                           3073 ;	../../shared/src/power_pcie.c:449: check_pu_ivref();
   CD5B 78 DD              3074 	mov	r0,#_check_pu_ivref
   CD5D 79 D2              3075 	mov	r1,#(_check_pu_ivref >> 8)
   CD5F 7A 02              3076 	mov	r2,#(_check_pu_ivref >> 16)
   CD61 12 00 B3           3077 	lcall	__sdcc_banked_call
   CD64 80 5F              3078 	sjmp	00108$
   CD66                    3079 00107$:
                           3080 ;	../../shared/src/power_pcie.c:453: if(reg_ANA_PU_IVREF_DLY3==0) {
   CD66 90 A3 4E           3081 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   CD69 E0                 3082 	movx	a,@dptr
   CD6A 20 E0 58           3083 	jb	acc.0,00108$
                           3084 ;	../../shared/src/power_pcie.c:455: PM_CMN_REG2.BT.B2 = PM_CMN_REG2.BT.B2 | 0x08;
   CD6D 90 A3 4E           3085 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   CD70 E0                 3086 	movx	a,@dptr
   CD71 FA                 3087 	mov	r2,a
   CD72 43 02 08           3088 	orl	ar2,#0x08
   CD75 90 A3 4E           3089 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   CD78 EA                 3090 	mov	a,r2
   CD79 F0                 3091 	movx	@dptr,a
                           3092 ;	../../shared/src/power_pcie.c:456: delay01(10); //1us
   CD7A 90 00 0A           3093 	mov	dptr,#0x000A
   CD7D 78 16              3094 	mov	r0,#_delay01
   CD7F 79 BC              3095 	mov	r1,#(_delay01 >> 8)
   CD81 7A 02              3096 	mov	r2,#(_delay01 >> 16)
   CD83 12 00 B3           3097 	lcall	__sdcc_banked_call
                           3098 ;	../../shared/src/power_pcie.c:457: PM_CMN_REG2.BT.B2 = PM_CMN_REG2.BT.B2 | 0x0c;
   CD86 90 A3 4E           3099 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   CD89 E0                 3100 	movx	a,@dptr
   CD8A FA                 3101 	mov	r2,a
   CD8B 43 02 0C           3102 	orl	ar2,#0x0C
   CD8E 90 A3 4E           3103 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   CD91 EA                 3104 	mov	a,r2
   CD92 F0                 3105 	movx	@dptr,a
                           3106 ;	../../shared/src/power_pcie.c:458: delay01(10); //1us
   CD93 90 00 0A           3107 	mov	dptr,#0x000A
   CD96 78 16              3108 	mov	r0,#_delay01
   CD98 79 BC              3109 	mov	r1,#(_delay01 >> 8)
   CD9A 7A 02              3110 	mov	r2,#(_delay01 >> 16)
   CD9C 12 00 B3           3111 	lcall	__sdcc_banked_call
                           3112 ;	../../shared/src/power_pcie.c:459: PM_CMN_REG2.BT.B2 = PM_CMN_REG2.BT.B2 | 0x0e;
   CD9F 90 A3 4E           3113 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   CDA2 E0                 3114 	movx	a,@dptr
   CDA3 FA                 3115 	mov	r2,a
   CDA4 43 02 0E           3116 	orl	ar2,#0x0E
   CDA7 90 A3 4E           3117 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   CDAA EA                 3118 	mov	a,r2
   CDAB F0                 3119 	movx	@dptr,a
                           3120 ;	../../shared/src/power_pcie.c:460: delay01(10); //1us
   CDAC 90 00 0A           3121 	mov	dptr,#0x000A
   CDAF 78 16              3122 	mov	r0,#_delay01
   CDB1 79 BC              3123 	mov	r1,#(_delay01 >> 8)
   CDB3 7A 02              3124 	mov	r2,#(_delay01 >> 16)
   CDB5 12 00 B3           3125 	lcall	__sdcc_banked_call
                           3126 ;	../../shared/src/power_pcie.c:461: PM_CMN_REG2.BT.B2 = PM_CMN_REG2.BT.B2 | 0x0f;
   CDB8 90 A3 4E           3127 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   CDBB E0                 3128 	movx	a,@dptr
   CDBC FA                 3129 	mov	r2,a
   CDBD 43 02 0F           3130 	orl	ar2,#0x0F
   CDC0 90 A3 4E           3131 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   CDC3 EA                 3132 	mov	a,r2
   CDC4 F0                 3133 	movx	@dptr,a
   CDC5                    3134 00108$:
                           3135 ;	../../shared/src/power_pcie.c:465: delay01(200);
   CDC5 90 00 C8           3136 	mov	dptr,#0x00C8
   CDC8 78 16              3137 	mov	r0,#_delay01
   CDCA 79 BC              3138 	mov	r1,#(_delay01 >> 8)
   CDCC 7A 02              3139 	mov	r2,#(_delay01 >> 16)
   CDCE 12 00 B3           3140 	lcall	__sdcc_banked_call
                           3141 ;	../../shared/src/power_pcie.c:466: reg_ANA_PU_TX_LANE = 1;
   CDD1 90 20 03           3142 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0003)
   CDD4 E0                 3143 	movx	a,@dptr
   CDD5 44 40              3144 	orl	a,#0x40
   CDD7 F0                 3145 	movx	@dptr,a
                           3146 ;	../../shared/src/power_pcie.c:467: short_delay();
   CDD8 78 05              3147 	mov	r0,#_short_delay
   CDDA 79 C0              3148 	mov	r1,#(_short_delay >> 8)
   CDDC 7A 02              3149 	mov	r2,#(_short_delay >> 16)
   CDDE 12 00 B3           3150 	lcall	__sdcc_banked_call
                           3151 ;	../../shared/src/power_pcie.c:468: reg_ANA_TXDETRX_EN_LANE = 1;
   CDE1 90 20 02           3152 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   CDE4 E0                 3153 	movx	a,@dptr
   CDE5 44 01              3154 	orl	a,#0x01
   CDE7 F0                 3155 	movx	@dptr,a
                           3156 ;	../../shared/src/power_pcie.c:469: delay01(200);
   CDE8 90 00 C8           3157 	mov	dptr,#0x00C8
   CDEB 78 16              3158 	mov	r0,#_delay01
   CDED 79 BC              3159 	mov	r1,#(_delay01 >> 8)
   CDEF 7A 02              3160 	mov	r2,#(_delay01 >> 16)
   CDF1 12 00 B3           3161 	lcall	__sdcc_banked_call
                           3162 ;	../../shared/src/power_pcie.c:471: txdetrx();
   CDF4 78 5A              3163 	mov	r0,#_txdetrx
   CDF6 79 D0              3164 	mov	r1,#(_txdetrx >> 8)
   CDF8 7A 01              3165 	mov	r2,#(_txdetrx >> 16)
   CDFA 12 00 B3           3166 	lcall	__sdcc_banked_call
                           3167 ;	../../shared/src/power_pcie.c:489: reg_PIN_TXDETRX_VALID_LANE = 1;
   CDFD 90 20 01           3168 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0001)
   CE00 E0                 3169 	movx	a,@dptr
   CE01 44 40              3170 	orl	a,#0x40
   CE03 F0                 3171 	movx	@dptr,a
                           3172 ;	../../shared/src/power_pcie.c:491: reg_ANA_PU_TX_LANE = 0;
   CE04 90 20 03           3173 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0003)
   CE07 E0                 3174 	movx	a,@dptr
   CE08 54 BF              3175 	anl	a,#0xbf
   CE0A F0                 3176 	movx	@dptr,a
                           3177 ;	../../shared/src/power_pcie.c:493: if(reg_PIN_PU_IVREF_RD==0) {
   CE0B 90 A3 1B           3178 	mov	dptr,#(_PM_CMN_REG1 + 0x0003)
   CE0E E0                 3179 	movx	a,@dptr
   CE0F 20 E5 05           3180 	jb	acc.5,00111$
                           3181 ;	../../shared/src/power_pcie.c:496: PM_CMN_REG2.BT.B2 = 0; //pu_ivref**=0
   CE12 90 A3 4E           3182 	mov	dptr,#(_PM_CMN_REG2 + 0x0002)
   CE15 E4                 3183 	clr	a
   CE16 F0                 3184 	movx	@dptr,a
                           3185 ;	../../shared/src/power_pcie.c:501: while(reg_PIN_TXDETRX_EN_RD_LANE);
   CE17                    3186 00111$:
   CE17 90 20 07           3187 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   CE1A E0                 3188 	movx	a,@dptr
   CE1B 20 E0 F9           3189 	jb	acc.0,00111$
                           3190 ;	../../shared/src/power_pcie.c:503: reg_PIN_TXDETRX_VALID_LANE = 0;
   CE1E 90 20 01           3191 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0001)
   CE21 E0                 3192 	movx	a,@dptr
   CE22 54 BF              3193 	anl	a,#0xbf
   CE24 F0                 3194 	movx	@dptr,a
   CE25 02 00 C5           3195 	ljmp	__sdcc_banked_ret
                           3196 ;------------------------------------------------------------
                           3197 ;Allocation info for local variables in function 'Power_P0_TXDETRX'
                           3198 ;------------------------------------------------------------
                           3199 ;------------------------------------------------------------
                           3200 ;	../../shared/src/power_pcie.c:517: void Power_P0_TXDETRX(void) BANKING_CTRL {
                           3201 ;	-----------------------------------------
                           3202 ;	 function Power_P0_TXDETRX
                           3203 ;	-----------------------------------------
   CE28                    3204 _Power_P0_TXDETRX:
                           3205 ;	../../shared/src/power_pcie.c:519: reg_ANA_TXDETRX_EN_LANE = 1;
   CE28 90 20 02           3206 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   CE2B E0                 3207 	movx	a,@dptr
   CE2C 44 01              3208 	orl	a,#0x01
   CE2E F0                 3209 	movx	@dptr,a
                           3210 ;	../../shared/src/power_pcie.c:521: txdetrx();
   CE2F 78 5A              3211 	mov	r0,#_txdetrx
   CE31 79 D0              3212 	mov	r1,#(_txdetrx >> 8)
   CE33 7A 01              3213 	mov	r2,#(_txdetrx >> 16)
   CE35 12 00 B3           3214 	lcall	__sdcc_banked_call
                           3215 ;	../../shared/src/power_pcie.c:539: delay01(200);
   CE38 90 00 C8           3216 	mov	dptr,#0x00C8
   CE3B 78 16              3217 	mov	r0,#_delay01
   CE3D 79 BC              3218 	mov	r1,#(_delay01 >> 8)
   CE3F 7A 02              3219 	mov	r2,#(_delay01 >> 16)
   CE41 12 00 B3           3220 	lcall	__sdcc_banked_call
                           3221 ;	../../shared/src/power_pcie.c:540: reg_PIN_TXDETRX_VALID_LANE = 1;	
   CE44 90 20 01           3222 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0001)
   CE47 E0                 3223 	movx	a,@dptr
   CE48 44 40              3224 	orl	a,#0x40
   CE4A F0                 3225 	movx	@dptr,a
                           3226 ;	../../shared/src/power_pcie.c:542: while(reg_PIN_TXDETRX_EN_RD_LANE);
   CE4B                    3227 00101$:
   CE4B 90 20 07           3228 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   CE4E E0                 3229 	movx	a,@dptr
   CE4F 20 E0 F9           3230 	jb	acc.0,00101$
                           3231 ;	../../shared/src/power_pcie.c:544: reg_PIN_TXDETRX_VALID_LANE = 0;
   CE52 90 20 01           3232 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0001)
   CE55 E0                 3233 	movx	a,@dptr
   CE56 54 BF              3234 	anl	a,#0xbf
   CE58 F0                 3235 	movx	@dptr,a
                           3236 ;	../../shared/src/power_pcie.c:546: if(cmx_AUTO_RX_INIT_EN == 0)
   CE59 90 E6 2E           3237 	mov	dptr,#(_CONTROL_CONFIG8 + 0x0002)
   CE5C E0                 3238 	movx	a,@dptr
   CE5D 20 E0 08           3239 	jb	acc.0,00105$
                           3240 ;	../../shared/src/power_pcie.c:547: PHY_STATUS = ST_PLLREADY; 
   CE60 90 22 30           3241 	mov	dptr,#_MCU_STATUS0_LANE
   CE63 74 27              3242 	mov	a,#0x27
   CE65 F0                 3243 	movx	@dptr,a
   CE66 80 06              3244 	sjmp	00107$
   CE68                    3245 00105$:
                           3246 ;	../../shared/src/power_pcie.c:549: PHY_STATUS = ST_DTL;
   CE68 90 22 30           3247 	mov	dptr,#_MCU_STATUS0_LANE
   CE6B 74 2C              3248 	mov	a,#0x2C
   CE6D F0                 3249 	movx	@dptr,a
   CE6E                    3250 00107$:
   CE6E 02 00 C5           3251 	ljmp	__sdcc_banked_ret
                           3252 ;------------------------------------------------------------
                           3253 ;Allocation info for local variables in function 'Power_P1_TXDETRX'
                           3254 ;------------------------------------------------------------
                           3255 ;------------------------------------------------------------
                           3256 ;	../../shared/src/power_pcie.c:563: void Power_P1_TXDETRX(void) BANKING_CTRL {
                           3257 ;	-----------------------------------------
                           3258 ;	 function Power_P1_TXDETRX
                           3259 ;	-----------------------------------------
   CE71                    3260 _Power_P1_TXDETRX:
                           3261 ;	../../shared/src/power_pcie.c:565: reg_INT_TXDETRX_EN_CHG_ISR_LANE = 0;
   CE71 90 20 1A           3262 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG1_LANE + 0x0002)
   CE74 E0                 3263 	movx	a,@dptr
   CE75 54 7F              3264 	anl	a,#0x7f
   CE77 F0                 3265 	movx	@dptr,a
                           3266 ;	../../shared/src/power_pcie.c:568: if(cmx_VIRTUAL_TDR_SIM_EN) {
   CE78 90 E6 07           3267 	mov	dptr,#(_CONTROL_CONFIG0 + 0x0003)
   CE7B E0                 3268 	movx	a,@dptr
   CE7C 30 E7 17           3269 	jnb	acc.7,00105$
                           3270 ;	../../shared/src/power_pcie.c:569: if(reg_ANA_DPHY_SQ_DETECTED_LANE)  //lane reduce test by sq_detect
   CE7F 90 40 08           3271 	mov	dptr,#_LANE_CFG_STATUS2_LANE
   CE82 E0                 3272 	movx	a,@dptr
   CE83 30 E1 09           3273 	jnb	acc.1,00102$
                           3274 ;	../../shared/src/power_pcie.c:570: reg_TRX_VIRTUAL_CTRL_LANE = 1; //3fc[0]
   CE86 90 03 FC           3275 	mov	dptr,#_UPHY_ANAREG_REV_0
   CE89 E0                 3276 	movx	a,@dptr
   CE8A 44 01              3277 	orl	a,#0x01
   CE8C F0                 3278 	movx	@dptr,a
   CE8D 80 07              3279 	sjmp	00105$
   CE8F                    3280 00102$:
                           3281 ;	../../shared/src/power_pcie.c:572: reg_TRX_VIRTUAL_CTRL_LANE = 0;
   CE8F 90 03 FC           3282 	mov	dptr,#_UPHY_ANAREG_REV_0
   CE92 E0                 3283 	movx	a,@dptr
   CE93 54 FE              3284 	anl	a,#0xfe
   CE95 F0                 3285 	movx	@dptr,a
   CE96                    3286 00105$:
                           3287 ;	../../shared/src/power_pcie.c:575: short_delay();
   CE96 78 05              3288 	mov	r0,#_short_delay
   CE98 79 C0              3289 	mov	r1,#(_short_delay >> 8)
   CE9A 7A 02              3290 	mov	r2,#(_short_delay >> 16)
   CE9C 12 00 B3           3291 	lcall	__sdcc_banked_call
                           3292 ;	../../shared/src/power_pcie.c:576: txloz2hiz_quick();
   CE9F 78 2F              3293 	mov	r0,#_txloz2hiz_quick
   CEA1 79 D0              3294 	mov	r1,#(_txloz2hiz_quick >> 8)
   CEA3 7A 01              3295 	mov	r2,#(_txloz2hiz_quick >> 16)
   CEA5 12 00 B3           3296 	lcall	__sdcc_banked_call
                           3297 ;	../../shared/src/power_pcie.c:578: reg_ANA_TXDETRX_EN_LANE = 1;
   CEA8 90 20 02           3298 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   CEAB E0                 3299 	movx	a,@dptr
   CEAC 44 01              3300 	orl	a,#0x01
   CEAE F0                 3301 	movx	@dptr,a
                           3302 ;	../../shared/src/power_pcie.c:580: reg_ANA_TXDETRX_START_LANE = 1;
   CEAF 90 20 01           3303 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0001)
   CEB2 E0                 3304 	movx	a,@dptr
   CEB3 44 80              3305 	orl	a,#0x80
   CEB5 F0                 3306 	movx	@dptr,a
                           3307 ;	../../shared/src/power_pcie.c:582: while(!reg_TXDETRX_SAMPLE_DONE_LANE);
   CEB6                    3308 00106$:
   CEB6 90 20 00           3309 	mov	dptr,#_PM_CTRL_TX_LANE_REG1_LANE
   CEB9 E0                 3310 	movx	a,@dptr
   CEBA 30 E1 F9           3311 	jnb	acc.1,00106$
                           3312 ;	../../shared/src/power_pcie.c:584: short_delay();
   CEBD 78 05              3313 	mov	r0,#_short_delay
   CEBF 79 C0              3314 	mov	r1,#(_short_delay >> 8)
   CEC1 7A 02              3315 	mov	r2,#(_short_delay >> 16)
   CEC3 12 00 B3           3316 	lcall	__sdcc_banked_call
                           3317 ;	../../shared/src/power_pcie.c:585: reg_ANA_TXDETRX_START_LANE = 0;
   CEC6 90 20 01           3318 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0001)
   CEC9 E0                 3319 	movx	a,@dptr
   CECA 54 7F              3320 	anl	a,#0x7f
   CECC F0                 3321 	movx	@dptr,a
                           3322 ;	../../shared/src/power_pcie.c:586: short_delay();
   CECD 78 05              3323 	mov	r0,#_short_delay
   CECF 79 C0              3324 	mov	r1,#(_short_delay >> 8)
   CED1 7A 02              3325 	mov	r2,#(_short_delay >> 16)
   CED3 12 00 B3           3326 	lcall	__sdcc_banked_call
                           3327 ;	../../shared/src/power_pcie.c:587: reg_ANA_TXDETRX_EN_LANE = 0;
   CED6 90 20 02           3328 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   CED9 E0                 3329 	movx	a,@dptr
   CEDA 54 FE              3330 	anl	a,#0xfe
   CEDC F0                 3331 	movx	@dptr,a
                           3332 ;	../../shared/src/power_pcie.c:589: txloz2hiz_quick();
   CEDD 78 2F              3333 	mov	r0,#_txloz2hiz_quick
   CEDF 79 D0              3334 	mov	r1,#(_txloz2hiz_quick >> 8)
   CEE1 7A 01              3335 	mov	r2,#(_txloz2hiz_quick >> 16)
   CEE3 12 00 B3           3336 	lcall	__sdcc_banked_call
                           3337 ;	../../shared/src/power_pcie.c:591: reg_PIN_TXDETRX_VALID_LANE = 1;
   CEE6 90 20 01           3338 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0001)
   CEE9 E0                 3339 	movx	a,@dptr
   CEEA 44 40              3340 	orl	a,#0x40
   CEEC F0                 3341 	movx	@dptr,a
                           3342 ;	../../shared/src/power_pcie.c:593: while(reg_PIN_TXDETRX_EN_RD_LANE);
   CEED                    3343 00109$:
   CEED 90 20 07           3344 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   CEF0 E0                 3345 	movx	a,@dptr
   CEF1 20 E0 F9           3346 	jb	acc.0,00109$
                           3347 ;	../../shared/src/power_pcie.c:595: reg_PIN_TXDETRX_VALID_LANE = 0;
   CEF4 90 20 01           3348 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0001)
   CEF7 E0                 3349 	movx	a,@dptr
   CEF8 54 BF              3350 	anl	a,#0xbf
   CEFA F0                 3351 	movx	@dptr,a
                           3352 ;	../../shared/src/power_pcie.c:598: PHY_STATUS = ST_P1_WK ; 
   CEFB 90 22 30           3353 	mov	dptr,#_MCU_STATUS0_LANE
   CEFE 74 23              3354 	mov	a,#0x23
   CF00 F0                 3355 	movx	@dptr,a
   CF01 02 00 C5           3356 	ljmp	__sdcc_banked_ret
                           3357 ;------------------------------------------------------------
                           3358 ;Allocation info for local variables in function 'Power_P2_TXDETRX'
                           3359 ;------------------------------------------------------------
                           3360 ;------------------------------------------------------------
                           3361 ;	../../shared/src/power_pcie.c:612: void Power_P2_TXDETRX(void) BANKING_CTRL {
                           3362 ;	-----------------------------------------
                           3363 ;	 function Power_P2_TXDETRX
                           3364 ;	-----------------------------------------
   CF04                    3365 _Power_P2_TXDETRX:
                           3366 ;	../../shared/src/power_pcie.c:613: reg_INT_TXDETRX_EN_CHG_ISR_LANE = 0;
   CF04 90 20 1A           3367 	mov	dptr,#(_PM_CTRL_INTERRUPT_REG1_LANE + 0x0002)
   CF07 E0                 3368 	movx	a,@dptr
   CF08 54 7F              3369 	anl	a,#0x7f
   CF0A F0                 3370 	movx	@dptr,a
                           3371 ;	../../shared/src/power_pcie.c:614: reg_ANA_PU_TX_LANE = 1;
   CF0B 90 20 03           3372 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0003)
   CF0E E0                 3373 	movx	a,@dptr
   CF0F 44 40              3374 	orl	a,#0x40
   CF11 F0                 3375 	movx	@dptr,a
                           3376 ;	../../shared/src/power_pcie.c:616: short_delay();
   CF12 78 05              3377 	mov	r0,#_short_delay
   CF14 79 C0              3378 	mov	r1,#(_short_delay >> 8)
   CF16 7A 02              3379 	mov	r2,#(_short_delay >> 16)
   CF18 12 00 B3           3380 	lcall	__sdcc_banked_call
                           3381 ;	../../shared/src/power_pcie.c:617: txloz2hiz_quick();
   CF1B 78 2F              3382 	mov	r0,#_txloz2hiz_quick
   CF1D 79 D0              3383 	mov	r1,#(_txloz2hiz_quick >> 8)
   CF1F 7A 01              3384 	mov	r2,#(_txloz2hiz_quick >> 16)
   CF21 12 00 B3           3385 	lcall	__sdcc_banked_call
                           3386 ;	../../shared/src/power_pcie.c:619: reg_ANA_TXDETRX_EN_LANE = 1;
   CF24 90 20 02           3387 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   CF27 E0                 3388 	movx	a,@dptr
   CF28 44 01              3389 	orl	a,#0x01
   CF2A F0                 3390 	movx	@dptr,a
                           3391 ;	../../shared/src/power_pcie.c:620: short_delay();
   CF2B 78 05              3392 	mov	r0,#_short_delay
   CF2D 79 C0              3393 	mov	r1,#(_short_delay >> 8)
   CF2F 7A 02              3394 	mov	r2,#(_short_delay >> 16)
   CF31 12 00 B3           3395 	lcall	__sdcc_banked_call
                           3396 ;	../../shared/src/power_pcie.c:621: reg_ANA_TXDETRX_START_LANE = 1;
   CF34 90 20 01           3397 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0001)
   CF37 E0                 3398 	movx	a,@dptr
   CF38 44 80              3399 	orl	a,#0x80
   CF3A F0                 3400 	movx	@dptr,a
                           3401 ;	../../shared/src/power_pcie.c:623: while(!reg_TXDETRX_SAMPLE_DONE_LANE);
   CF3B                    3402 00101$:
   CF3B 90 20 00           3403 	mov	dptr,#_PM_CTRL_TX_LANE_REG1_LANE
   CF3E E0                 3404 	movx	a,@dptr
   CF3F 30 E1 F9           3405 	jnb	acc.1,00101$
                           3406 ;	../../shared/src/power_pcie.c:625: short_delay();
   CF42 78 05              3407 	mov	r0,#_short_delay
   CF44 79 C0              3408 	mov	r1,#(_short_delay >> 8)
   CF46 7A 02              3409 	mov	r2,#(_short_delay >> 16)
   CF48 12 00 B3           3410 	lcall	__sdcc_banked_call
                           3411 ;	../../shared/src/power_pcie.c:626: reg_ANA_TXDETRX_START_LANE = 0;
   CF4B 90 20 01           3412 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0001)
   CF4E E0                 3413 	movx	a,@dptr
   CF4F 54 7F              3414 	anl	a,#0x7f
   CF51 F0                 3415 	movx	@dptr,a
                           3416 ;	../../shared/src/power_pcie.c:627: reg_ANA_TXDETRX_EN_LANE = 0;
   CF52 90 20 02           3417 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   CF55 E0                 3418 	movx	a,@dptr
   CF56 54 FE              3419 	anl	a,#0xfe
   CF58 F0                 3420 	movx	@dptr,a
                           3421 ;	../../shared/src/power_pcie.c:629: txloz2hiz_quick();
   CF59 78 2F              3422 	mov	r0,#_txloz2hiz_quick
   CF5B 79 D0              3423 	mov	r1,#(_txloz2hiz_quick >> 8)
   CF5D 7A 01              3424 	mov	r2,#(_txloz2hiz_quick >> 16)
   CF5F 12 00 B3           3425 	lcall	__sdcc_banked_call
                           3426 ;	../../shared/src/power_pcie.c:631: reg_ANA_PU_TX_LANE = 0;
   CF62 90 20 03           3427 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0003)
   CF65 E0                 3428 	movx	a,@dptr
   CF66 54 BF              3429 	anl	a,#0xbf
   CF68 F0                 3430 	movx	@dptr,a
                           3431 ;	../../shared/src/power_pcie.c:633: reg_PIN_TXDETRX_VALID_LANE = 1;
   CF69 90 20 01           3432 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0001)
   CF6C E0                 3433 	movx	a,@dptr
   CF6D 44 40              3434 	orl	a,#0x40
   CF6F F0                 3435 	movx	@dptr,a
                           3436 ;	../../shared/src/power_pcie.c:635: while(reg_PIN_TXDETRX_EN_RD_LANE);
   CF70                    3437 00104$:
   CF70 90 20 07           3438 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   CF73 E0                 3439 	movx	a,@dptr
   CF74 20 E0 F9           3440 	jb	acc.0,00104$
                           3441 ;	../../shared/src/power_pcie.c:637: reg_PIN_TXDETRX_VALID_LANE = 0;
   CF77 90 20 01           3442 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0001)
   CF7A E0                 3443 	movx	a,@dptr
   CF7B 54 BF              3444 	anl	a,#0xbf
   CF7D F0                 3445 	movx	@dptr,a
                           3446 ;	../../shared/src/power_pcie.c:640: PHY_STATUS = ST_P2_WK ; 
   CF7E 90 22 30           3447 	mov	dptr,#_MCU_STATUS0_LANE
   CF81 74 1B              3448 	mov	a,#0x1B
   CF83 F0                 3449 	movx	@dptr,a
   CF84 02 00 C5           3450 	ljmp	__sdcc_banked_ret
                           3451 ;------------------------------------------------------------
                           3452 ;Allocation info for local variables in function 'Power_P2_BEACON'
                           3453 ;------------------------------------------------------------
                           3454 ;------------------------------------------------------------
                           3455 ;	../../shared/src/power_pcie.c:654: void Power_P2_BEACON(void) BANKING_CTRL {
                           3456 ;	-----------------------------------------
                           3457 ;	 function Power_P2_BEACON
                           3458 ;	-----------------------------------------
   CF87                    3459 _Power_P2_BEACON:
                           3460 ;	../../shared/src/power_pcie.c:680: reg_ANA_PU_TX_LANE = 1;
   CF87 90 20 03           3461 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0003)
   CF8A E0                 3462 	movx	a,@dptr
   CF8B 44 40              3463 	orl	a,#0x40
   CF8D F0                 3464 	movx	@dptr,a
                           3465 ;	../../shared/src/power_pcie.c:681: short_delay();  //delay01(4);
   CF8E 78 05              3466 	mov	r0,#_short_delay
   CF90 79 C0              3467 	mov	r1,#(_short_delay >> 8)
   CF92 7A 02              3468 	mov	r2,#(_short_delay >> 16)
   CF94 12 00 B3           3469 	lcall	__sdcc_banked_call
                           3470 ;	../../shared/src/power_pcie.c:682: reg_ANA_TX_IDLE_HIZ_EN_LANE = 0;
   CF97 90 20 07           3471 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   CF9A E0                 3472 	movx	a,@dptr
   CF9B 54 7F              3473 	anl	a,#0x7f
   CF9D F0                 3474 	movx	@dptr,a
                           3475 ;	../../shared/src/power_pcie.c:683: delay01(5);
   CF9E 90 00 05           3476 	mov	dptr,#0x0005
   CFA1 78 16              3477 	mov	r0,#_delay01
   CFA3 79 BC              3478 	mov	r1,#(_delay01 >> 8)
   CFA5 7A 02              3479 	mov	r2,#(_delay01 >> 16)
   CFA7 12 00 B3           3480 	lcall	__sdcc_banked_call
                           3481 ;	../../shared/src/power_pcie.c:684: reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
   CFAA 90 20 07           3482 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   CFAD E0                 3483 	movx	a,@dptr
   CFAE 54 BF              3484 	anl	a,#0xbf
   CFB0 F0                 3485 	movx	@dptr,a
                           3486 ;	../../shared/src/power_pcie.c:686: reg_ANA_BEACON_EN_LANE = 1;
   CFB1 90 20 00           3487 	mov	dptr,#_PM_CTRL_TX_LANE_REG1_LANE
   CFB4 E0                 3488 	movx	a,@dptr
   CFB5 44 40              3489 	orl	a,#0x40
   CFB7 F0                 3490 	movx	@dptr,a
                           3491 ;	../../shared/src/power_pcie.c:688: while(!do_wake);
   CFB8                    3492 00101$:
   CFB8 30 05 FD           3493 	jnb	_do_wake,00101$
                           3494 ;	../../shared/src/power_pcie.c:690: reg_ANA_TX_LESS_CUR_IDLE_LANE = 1;
   CFBB 90 20 07           3495 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   CFBE E0                 3496 	movx	a,@dptr
   CFBF 44 40              3497 	orl	a,#0x40
   CFC1 F0                 3498 	movx	@dptr,a
                           3499 ;	../../shared/src/power_pcie.c:691: short_delay();
   CFC2 78 05              3500 	mov	r0,#_short_delay
   CFC4 79 C0              3501 	mov	r1,#(_short_delay >> 8)
   CFC6 7A 02              3502 	mov	r2,#(_short_delay >> 16)
   CFC8 12 00 B3           3503 	lcall	__sdcc_banked_call
                           3504 ;	../../shared/src/power_pcie.c:692: reg_ANA_TX_IDLE_HIZ_EN_LANE = 1;
   CFCB 90 20 07           3505 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   CFCE E0                 3506 	movx	a,@dptr
   CFCF 44 80              3507 	orl	a,#0x80
   CFD1 F0                 3508 	movx	@dptr,a
                           3509 ;	../../shared/src/power_pcie.c:693: short_delay();
   CFD2 78 05              3510 	mov	r0,#_short_delay
   CFD4 79 C0              3511 	mov	r1,#(_short_delay >> 8)
   CFD6 7A 02              3512 	mov	r2,#(_short_delay >> 16)
   CFD8 12 00 B3           3513 	lcall	__sdcc_banked_call
                           3514 ;	../../shared/src/power_pcie.c:694: reg_ANA_PU_TX_LANE = 0;
   CFDB 90 20 03           3515 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0003)
   CFDE E0                 3516 	movx	a,@dptr
   CFDF 54 BF              3517 	anl	a,#0xbf
   CFE1 F0                 3518 	movx	@dptr,a
                           3519 ;	../../shared/src/power_pcie.c:696: PHY_STATUS = ST_P2_WK; 
   CFE2 90 22 30           3520 	mov	dptr,#_MCU_STATUS0_LANE
   CFE5 74 1B              3521 	mov	a,#0x1B
   CFE7 F0                 3522 	movx	@dptr,a
                           3523 ;	../../shared/src/power_pcie.c:698: do_wake = 0;
   CFE8 C2 05              3524 	clr	_do_wake
   CFEA 02 00 C5           3525 	ljmp	__sdcc_banked_ret
                           3526 ;------------------------------------------------------------
                           3527 ;Allocation info for local variables in function 'txloz2hiz'
                           3528 ;------------------------------------------------------------
                           3529 ;------------------------------------------------------------
                           3530 ;	../../shared/src/power_pcie.c:702: void txloz2hiz(void) BANKING_CTRL {
                           3531 ;	-----------------------------------------
                           3532 ;	 function txloz2hiz
                           3533 ;	-----------------------------------------
   CFED                    3534 _txloz2hiz:
                           3535 ;	../../shared/src/power_pcie.c:703: if(reg_PIN_TX_IDLE_HIZ_RD_LANE) {
   CFED 90 20 07           3536 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   CFF0 E0                 3537 	movx	a,@dptr
   CFF1 30 E3 17           3538 	jnb	acc.3,00103$
                           3539 ;	../../shared/src/power_pcie.c:704: reg_ANA_TX_LESS_CUR_IDLE_LANE = 1;
   CFF4 90 20 07           3540 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   CFF7 E0                 3541 	movx	a,@dptr
   CFF8 44 40              3542 	orl	a,#0x40
   CFFA F0                 3543 	movx	@dptr,a
                           3544 ;	../../shared/src/power_pcie.c:705: short_delay();  //delay01(1);
   CFFB 78 05              3545 	mov	r0,#_short_delay
   CFFD 79 C0              3546 	mov	r1,#(_short_delay >> 8)
   CFFF 7A 02              3547 	mov	r2,#(_short_delay >> 16)
   D001 12 00 B3           3548 	lcall	__sdcc_banked_call
                           3549 ;	../../shared/src/power_pcie.c:706: reg_ANA_TX_IDLE_HIZ_EN_LANE = 1;
   D004 90 20 07           3550 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   D007 E0                 3551 	movx	a,@dptr
   D008 44 80              3552 	orl	a,#0x80
   D00A F0                 3553 	movx	@dptr,a
   D00B                    3554 00103$:
   D00B 02 00 C5           3555 	ljmp	__sdcc_banked_ret
                           3556 ;------------------------------------------------------------
                           3557 ;Allocation info for local variables in function 'txhiz2loz'
                           3558 ;------------------------------------------------------------
                           3559 ;------------------------------------------------------------
                           3560 ;	../../shared/src/power_pcie.c:710: void txhiz2loz(void) BANKING_CTRL {
                           3561 ;	-----------------------------------------
                           3562 ;	 function txhiz2loz
                           3563 ;	-----------------------------------------
   D00E                    3564 _txhiz2loz:
                           3565 ;	../../shared/src/power_pcie.c:711: if(!reg_PIN_TX_IDLE_HIZ_RD_LANE) {
   D00E 90 20 07           3566 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   D011 E0                 3567 	movx	a,@dptr
   D012 20 E3 17           3568 	jb	acc.3,00103$
                           3569 ;	../../shared/src/power_pcie.c:712: reg_ANA_TX_IDLE_HIZ_EN_LANE = 0;
   D015 90 20 07           3570 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   D018 E0                 3571 	movx	a,@dptr
   D019 54 7F              3572 	anl	a,#0x7f
   D01B F0                 3573 	movx	@dptr,a
                           3574 ;	../../shared/src/power_pcie.c:713: short_delay();  //delay01(1);
   D01C 78 05              3575 	mov	r0,#_short_delay
   D01E 79 C0              3576 	mov	r1,#(_short_delay >> 8)
   D020 7A 02              3577 	mov	r2,#(_short_delay >> 16)
   D022 12 00 B3           3578 	lcall	__sdcc_banked_call
                           3579 ;	../../shared/src/power_pcie.c:714: reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
   D025 90 20 07           3580 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   D028 E0                 3581 	movx	a,@dptr
   D029 54 BF              3582 	anl	a,#0xbf
   D02B F0                 3583 	movx	@dptr,a
   D02C                    3584 00103$:
   D02C 02 00 C5           3585 	ljmp	__sdcc_banked_ret
                           3586 ;------------------------------------------------------------
                           3587 ;Allocation info for local variables in function 'txloz2hiz_quick'
                           3588 ;------------------------------------------------------------
                           3589 ;------------------------------------------------------------
                           3590 ;	../../shared/src/power_pcie.c:718: void txloz2hiz_quick(void) BANKING_CTRL {
                           3591 ;	-----------------------------------------
                           3592 ;	 function txloz2hiz_quick
                           3593 ;	-----------------------------------------
   D02F                    3594 _txloz2hiz_quick:
                           3595 ;	../../shared/src/power_pcie.c:719: reg_ANA_TX_IDLE_HIZ_EN_LANE = 0;
   D02F 90 20 07           3596 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   D032 E0                 3597 	movx	a,@dptr
   D033 54 7F              3598 	anl	a,#0x7f
   D035 F0                 3599 	movx	@dptr,a
                           3600 ;	../../shared/src/power_pcie.c:720: reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
   D036 90 20 07           3601 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   D039 E0                 3602 	movx	a,@dptr
   D03A 54 BF              3603 	anl	a,#0xbf
   D03C F0                 3604 	movx	@dptr,a
                           3605 ;	../../shared/src/power_pcie.c:721: delay01(200);
   D03D 90 00 C8           3606 	mov	dptr,#0x00C8
   D040 78 16              3607 	mov	r0,#_delay01
   D042 79 BC              3608 	mov	r1,#(_delay01 >> 8)
   D044 7A 02              3609 	mov	r2,#(_delay01 >> 16)
   D046 12 00 B3           3610 	lcall	__sdcc_banked_call
                           3611 ;	../../shared/src/power_pcie.c:722: reg_ANA_TX_LESS_CUR_IDLE_LANE = 1;
   D049 90 20 07           3612 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   D04C E0                 3613 	movx	a,@dptr
   D04D 44 40              3614 	orl	a,#0x40
   D04F F0                 3615 	movx	@dptr,a
                           3616 ;	../../shared/src/power_pcie.c:723: reg_ANA_TX_IDLE_HIZ_EN_LANE = 1;
   D050 90 20 07           3617 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   D053 E0                 3618 	movx	a,@dptr
   D054 44 80              3619 	orl	a,#0x80
   D056 F0                 3620 	movx	@dptr,a
   D057 02 00 C5           3621 	ljmp	__sdcc_banked_ret
                           3622 ;------------------------------------------------------------
                           3623 ;Allocation info for local variables in function 'txdetrx'
                           3624 ;------------------------------------------------------------
                           3625 ;------------------------------------------------------------
                           3626 ;	../../shared/src/power_pcie.c:726: void txdetrx(void) BANKING_CTRL {
                           3627 ;	-----------------------------------------
                           3628 ;	 function txdetrx
                           3629 ;	-----------------------------------------
   D05A                    3630 _txdetrx:
                           3631 ;	../../shared/src/power_pcie.c:727: short_delay();  //delay01(1);
   D05A 78 05              3632 	mov	r0,#_short_delay
   D05C 79 C0              3633 	mov	r1,#(_short_delay >> 8)
   D05E 7A 02              3634 	mov	r2,#(_short_delay >> 16)
   D060 12 00 B3           3635 	lcall	__sdcc_banked_call
                           3636 ;	../../shared/src/power_pcie.c:728: reg_ANA_TX_LESS_CUR_IDLE_LANE = 1;
   D063 90 20 07           3637 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   D066 E0                 3638 	movx	a,@dptr
   D067 44 40              3639 	orl	a,#0x40
   D069 F0                 3640 	movx	@dptr,a
                           3641 ;	../../shared/src/power_pcie.c:729: short_delay();  //delay01(1);
   D06A 78 05              3642 	mov	r0,#_short_delay
   D06C 79 C0              3643 	mov	r1,#(_short_delay >> 8)
   D06E 7A 02              3644 	mov	r2,#(_short_delay >> 16)
   D070 12 00 B3           3645 	lcall	__sdcc_banked_call
                           3646 ;	../../shared/src/power_pcie.c:730: reg_ANA_TX_IDLE_HIZ_EN_LANE = 1;
   D073 90 20 07           3647 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   D076 E0                 3648 	movx	a,@dptr
   D077 44 80              3649 	orl	a,#0x80
   D079 F0                 3650 	movx	@dptr,a
                           3651 ;	../../shared/src/power_pcie.c:731: reg_ANA_TXDETRX_START_LANE = 1;
   D07A 90 20 01           3652 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0001)
   D07D E0                 3653 	movx	a,@dptr
   D07E 44 80              3654 	orl	a,#0x80
   D080 F0                 3655 	movx	@dptr,a
                           3656 ;	../../shared/src/power_pcie.c:733: while(!reg_TXDETRX_SAMPLE_DONE_LANE);
   D081                    3657 00101$:
   D081 90 20 00           3658 	mov	dptr,#_PM_CTRL_TX_LANE_REG1_LANE
   D084 E0                 3659 	movx	a,@dptr
   D085 30 E1 F9           3660 	jnb	acc.1,00101$
                           3661 ;	../../shared/src/power_pcie.c:734: short_delay();  //delay01(1);
   D088 78 05              3662 	mov	r0,#_short_delay
   D08A 79 C0              3663 	mov	r1,#(_short_delay >> 8)
   D08C 7A 02              3664 	mov	r2,#(_short_delay >> 16)
   D08E 12 00 B3           3665 	lcall	__sdcc_banked_call
                           3666 ;	../../shared/src/power_pcie.c:736: reg_ANA_TXDETRX_START_LANE = 0;
   D091 90 20 01           3667 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0001)
   D094 E0                 3668 	movx	a,@dptr
   D095 54 7F              3669 	anl	a,#0x7f
   D097 F0                 3670 	movx	@dptr,a
                           3671 ;	../../shared/src/power_pcie.c:737: short_delay();  //delay01(1);
   D098 78 05              3672 	mov	r0,#_short_delay
   D09A 79 C0              3673 	mov	r1,#(_short_delay >> 8)
   D09C 7A 02              3674 	mov	r2,#(_short_delay >> 16)
   D09E 12 00 B3           3675 	lcall	__sdcc_banked_call
                           3676 ;	../../shared/src/power_pcie.c:738: reg_ANA_TX_IDLE_HIZ_EN_LANE = 0;
   D0A1 90 20 07           3677 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   D0A4 E0                 3678 	movx	a,@dptr
   D0A5 54 7F              3679 	anl	a,#0x7f
   D0A7 F0                 3680 	movx	@dptr,a
                           3681 ;	../../shared/src/power_pcie.c:739: short_delay();  //delay01(1);
   D0A8 78 05              3682 	mov	r0,#_short_delay
   D0AA 79 C0              3683 	mov	r1,#(_short_delay >> 8)
   D0AC 7A 02              3684 	mov	r2,#(_short_delay >> 16)
   D0AE 12 00 B3           3685 	lcall	__sdcc_banked_call
                           3686 ;	../../shared/src/power_pcie.c:740: reg_ANA_TX_LESS_CUR_IDLE_LANE = 0;
   D0B1 90 20 07           3687 	mov	dptr,#(_PM_CTRL_TX_LANE_REG2_LANE + 0x0003)
   D0B4 E0                 3688 	movx	a,@dptr
   D0B5 54 BF              3689 	anl	a,#0xbf
   D0B7 F0                 3690 	movx	@dptr,a
                           3691 ;	../../shared/src/power_pcie.c:741: reg_ANA_TXDETRX_EN_LANE = 0;
   D0B8 90 20 02           3692 	mov	dptr,#(_PM_CTRL_TX_LANE_REG1_LANE + 0x0002)
   D0BB E0                 3693 	movx	a,@dptr
   D0BC 54 FE              3694 	anl	a,#0xfe
   D0BE F0                 3695 	movx	@dptr,a
   D0BF 02 00 C5           3696 	ljmp	__sdcc_banked_ret
                           3697 	.area CSEG    (CODE)
                           3698 	.area CONST   (CODE)
                           3699 	.area CABS    (ABS,CODE)
