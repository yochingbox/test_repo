                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:40 2018
                              5 ;--------------------------------------------------------
                              6 	.module dll_cal_rom
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
                            979 	.globl _dll_comp_cal
                            980 	.globl _dll_gm_cal
                            981 	.globl _dll_vdda_cal_loop
                            982 	.globl _set_sellv_rxdll_ch
                            983 	.globl _get_sellv_rxdll_ch
                            984 	.globl _dll_eom_gm_cal
                            985 	.globl _set_sellv_rxeomdll_ch
                            986 	.globl _get_sellv_rxeomdll_ch
                            987 ;--------------------------------------------------------
                            988 ; special function registers
                            989 ;--------------------------------------------------------
                            990 	.area RSEG    (ABS,DATA)
   0000                     991 	.org 0x0000
                    0080    992 _P0	=	0x0080
                    0082    993 _DPL	=	0x0082
                    0083    994 _DPH	=	0x0083
                    0086    995 _WDTREL	=	0x0086
                    0087    996 _PCON	=	0x0087
                    0088    997 _TCON	=	0x0088
                    0089    998 _TMOD	=	0x0089
                    008A    999 _TL0	=	0x008a
                    008B   1000 _TL1	=	0x008b
                    008C   1001 _TH0	=	0x008c
                    008D   1002 _TH1	=	0x008d
                    008E   1003 _CKCON	=	0x008e
                    0090   1004 _P1	=	0x0090
                    0092   1005 _DPS	=	0x0092
                    0094   1006 _PSBANK	=	0x0094
                    0098   1007 _SCON	=	0x0098
                    0099   1008 _SBUF	=	0x0099
                    009A   1009 _IEN2	=	0x009a
                    00A0   1010 _P2	=	0x00a0
                    00A1   1011 _DMAS0	=	0x00a1
                    00A2   1012 _DMAS1	=	0x00a2
                    00A3   1013 _DMAS2	=	0x00a3
                    00A4   1014 _DMAT0	=	0x00a4
                    00A5   1015 _DMAT1	=	0x00a5
                    00A6   1016 _DMAT2	=	0x00a6
                    00A8   1017 _IEN0	=	0x00a8
                    00A9   1018 _IP0	=	0x00a9
                    00AA   1019 _S0RELL	=	0x00aa
                    00B0   1020 _P3	=	0x00b0
                    00B1   1021 _DMAC0	=	0x00b1
                    00B2   1022 _DMAC1	=	0x00b2
                    00B3   1023 _DMAC2	=	0x00b3
                    00B4   1024 _DMASEL	=	0x00b4
                    00B5   1025 _DMAM0	=	0x00b5
                    00B6   1026 _DMAM1	=	0x00b6
                    00B8   1027 _IEN1	=	0x00b8
                    00B9   1028 _IP1	=	0x00b9
                    00BA   1029 _S0RELH	=	0x00ba
                    00C0   1030 _IRCON	=	0x00c0
                    00C1   1031 _CCEN	=	0x00c1
                    00C8   1032 _T2CON	=	0x00c8
                    00CA   1033 _RCAP2L	=	0x00ca
                    00CB   1034 _RCAP2H	=	0x00cb
                    00CC   1035 _TL2	=	0x00cc
                    00CD   1036 _TH2	=	0x00cd
                    00D0   1037 _PSW	=	0x00d0
                    00D8   1038 _ADCON	=	0x00d8
                    00E0   1039 _ACC	=	0x00e0
                    00E8   1040 _EIE	=	0x00e8
                    00F0   1041 _B	=	0x00f0
                    00F7   1042 _SRST	=	0x00f7
                    8C8A   1043 _TMR0	=	0x8c8a
                    8D8B   1044 _TMR1	=	0x8d8b
                    CDCC   1045 _TMR2	=	0xcdcc
                    A2A1   1046 _DMASA	=	0xa2a1
                    A5A4   1047 _DMATA	=	0xa5a4
                    B2B1   1048 _DMAC	=	0xb2b1
                           1049 ;--------------------------------------------------------
                           1050 ; special function bits
                           1051 ;--------------------------------------------------------
                           1052 	.area RSEG    (ABS,DATA)
   0000                    1053 	.org 0x0000
                    0080   1054 _P0_0	=	0x0080
                    0081   1055 _P0_1	=	0x0081
                    0082   1056 _P0_2	=	0x0082
                    0083   1057 _P0_3	=	0x0083
                    0084   1058 _P0_4	=	0x0084
                    0085   1059 _P0_5	=	0x0085
                    0086   1060 _P0_6	=	0x0086
                    0087   1061 _P0_7	=	0x0087
                    0090   1062 _P1_0	=	0x0090
                    0091   1063 _P1_1	=	0x0091
                    0092   1064 _P1_2	=	0x0092
                    0093   1065 _P1_3	=	0x0093
                    0094   1066 _P1_4	=	0x0094
                    0095   1067 _P1_5	=	0x0095
                    0096   1068 _P1_6	=	0x0096
                    0097   1069 _P1_7	=	0x0097
                    00A0   1070 _P2_0	=	0x00a0
                    00A1   1071 _P2_1	=	0x00a1
                    00A2   1072 _P2_2	=	0x00a2
                    00A3   1073 _P2_3	=	0x00a3
                    00A4   1074 _P2_4	=	0x00a4
                    00A5   1075 _P2_5	=	0x00a5
                    00A6   1076 _P2_6	=	0x00a6
                    00A7   1077 _P2_7	=	0x00a7
                    00B0   1078 _P3_0	=	0x00b0
                    00B1   1079 _P3_1	=	0x00b1
                    00B2   1080 _P3_2	=	0x00b2
                    00B3   1081 _P3_3	=	0x00b3
                    00B4   1082 _P3_4	=	0x00b4
                    00B5   1083 _P3_5	=	0x00b5
                    00B6   1084 _P3_6	=	0x00b6
                    00B7   1085 _P3_7	=	0x00b7
                    0088   1086 _IT0	=	0x0088
                    0089   1087 _IE0	=	0x0089
                    008A   1088 _IT1	=	0x008a
                    008B   1089 _IE1	=	0x008b
                    008C   1090 _TR0	=	0x008c
                    008D   1091 _TF0	=	0x008d
                    008E   1092 _TR1	=	0x008e
                    008F   1093 _TF1	=	0x008f
                    00A8   1094 _EX0	=	0x00a8
                    00A9   1095 _ET0	=	0x00a9
                    00AA   1096 _EX1	=	0x00aa
                    00AB   1097 _ET1	=	0x00ab
                    00AC   1098 _ES	=	0x00ac
                    00AD   1099 _ET2	=	0x00ad
                    00AE   1100 _WDT	=	0x00ae
                    00AF   1101 _EA	=	0x00af
                    00B8   1102 _EX7	=	0x00b8
                    00B9   1103 _EX2	=	0x00b9
                    00BA   1104 _EX3	=	0x00ba
                    00BB   1105 _EX4	=	0x00bb
                    00BC   1106 _EX5	=	0x00bc
                    00BD   1107 _EX6	=	0x00bd
                    00BE   1108 _PS1	=	0x00be
                    009A   1109 _ES1	=	0x009a
                    009B   1110 _EX8	=	0x009b
                    009C   1111 _EX9	=	0x009c
                    009D   1112 _EX10	=	0x009d
                    009E   1113 _EX11	=	0x009e
                    009F   1114 _EX12	=	0x009f
                    0098   1115 _RI	=	0x0098
                    0099   1116 _TI	=	0x0099
                    00C6   1117 _TF2	=	0x00c6
                           1118 ;--------------------------------------------------------
                           1119 ; overlayable register banks
                           1120 ;--------------------------------------------------------
                           1121 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1122 	.ds 8
                           1123 ;--------------------------------------------------------
                           1124 ; internal ram data
                           1125 ;--------------------------------------------------------
                           1126 	.area DSEG    (DATA)
                           1127 ;--------------------------------------------------------
                           1128 ; overlayable items in internal ram 
                           1129 ;--------------------------------------------------------
                           1130 	.area OSEG    (OVR,DATA)
                           1131 ;--------------------------------------------------------
                           1132 ; indirectly addressable internal ram data
                           1133 ;--------------------------------------------------------
                           1134 	.area ISEG    (DATA)
                           1135 ;--------------------------------------------------------
                           1136 ; absolute internal ram data
                           1137 ;--------------------------------------------------------
                           1138 	.area IABS    (ABS,DATA)
                           1139 	.area IABS    (ABS,DATA)
                           1140 ;--------------------------------------------------------
                           1141 ; bit data
                           1142 ;--------------------------------------------------------
                           1143 	.area BSEG    (BIT)
                           1144 ;--------------------------------------------------------
                           1145 ; paged external ram data
                           1146 ;--------------------------------------------------------
                           1147 	.area PSEG    (PAG,XDATA)
                           1148 ;--------------------------------------------------------
                           1149 ; external ram data
                           1150 ;--------------------------------------------------------
                           1151 	.area XSEG    (XDATA)
                    1000   1152 _UPHY14_TRX_LANEPLL_ANAREG_TOP_128	=	0x1000
                    1004   1153 _UPHY14_TRX_LANEPLL_ANAREG_TOP_129	=	0x1004
                    1008   1154 _UPHY14_TRX_LANEPLL_ANAREG_TOP_130	=	0x1008
                    100C   1155 _UPHY14_TRX_LANEPLL_ANAREG_TOP_131	=	0x100c
                    1010   1156 _UPHY14_TRX_LANEPLL_ANAREG_TOP_132	=	0x1010
                    1014   1157 _UPHY14_TRX_LANEPLL_ANAREG_TOP_133	=	0x1014
                    1018   1158 _UPHY14_TRX_LANEPLL_ANAREG_TOP_134	=	0x1018
                    101C   1159 _UPHY14_TRX_LANEPLL_ANAREG_TOP_135	=	0x101c
                    1020   1160 _UPHY14_TRX_LANEPLL_ANAREG_TOP_136	=	0x1020
                    1024   1161 _UPHY14_TRX_LANEPLL_ANAREG_TOP_137	=	0x1024
                    1028   1162 _UPHY14_TRX_LANEPLL_ANAREG_TOP_138	=	0x1028
                    102C   1163 _UPHY14_TRX_LANEPLL_ANAREG_TOP_139	=	0x102c
                    1030   1164 _UPHY14_TRX_LANEPLL_ANAREG_TOP_140	=	0x1030
                    1034   1165 _UPHY14_TRX_LANEPLL_ANAREG_TOP_141	=	0x1034
                    1038   1166 _UPHY14_TRX_LANEPLL_ANAREG_TOP_142	=	0x1038
                    103C   1167 _UPHY14_TRX_LANEPLL_ANAREG_TOP_143	=	0x103c
                    0200   1168 _UPHY14_TRX_ANAREG_TOP_128	=	0x0200
                    0204   1169 _UPHY14_TRX_ANAREG_TOP_129	=	0x0204
                    0208   1170 _UPHY14_TRX_ANAREG_TOP_130	=	0x0208
                    020C   1171 _UPHY14_TRX_ANAREG_TOP_131	=	0x020c
                    0210   1172 _UPHY14_TRX_ANAREG_TOP_132	=	0x0210
                    0214   1173 _UPHY14_TRX_ANAREG_TOP_133	=	0x0214
                    0218   1174 _UPHY14_TRX_ANAREG_TOP_134	=	0x0218
                    021C   1175 _UPHY14_TRX_ANAREG_TOP_135	=	0x021c
                    0220   1176 _UPHY14_TRX_ANAREG_TOP_136	=	0x0220
                    0224   1177 _UPHY14_TRX_ANAREG_TOP_137	=	0x0224
                    0228   1178 _UPHY14_TRX_ANAREG_TOP_138	=	0x0228
                    022C   1179 _UPHY14_TRX_ANAREG_TOP_139	=	0x022c
                    0230   1180 _UPHY14_TRX_ANAREG_TOP_140	=	0x0230
                    0234   1181 _UPHY14_TRX_ANAREG_TOP_141	=	0x0234
                    0238   1182 _UPHY14_TRX_ANAREG_TOP_142	=	0x0238
                    023C   1183 _UPHY14_TRX_ANAREG_TOP_143	=	0x023c
                    0240   1184 _UPHY14_TRX_ANAREG_TOP_144	=	0x0240
                    0244   1185 _UPHY14_TRX_ANAREG_TOP_145	=	0x0244
                    0248   1186 _UPHY14_TRX_ANAREG_TOP_146	=	0x0248
                    024C   1187 _UPHY14_TRX_ANAREG_TOP_147	=	0x024c
                    0250   1188 _UPHY14_TRX_ANAREG_TOP_148	=	0x0250
                    0254   1189 _UPHY14_TRX_ANAREG_TOP_149	=	0x0254
                    0258   1190 _UPHY14_TRX_ANAREG_TOP_150	=	0x0258
                    025C   1191 _UPHY14_TRX_ANAREG_TOP_151	=	0x025c
                    0260   1192 _UPHY14_TRX_ANAREG_TOP_152	=	0x0260
                    0264   1193 _UPHY14_TRX_ANAREG_TOP_153	=	0x0264
                    0268   1194 _UPHY14_TRX_ANAREG_TOP_154	=	0x0268
                    026C   1195 _UPHY14_TRX_ANAREG_TOP_155	=	0x026c
                    0270   1196 _UPHY14_TRX_ANAREG_TOP_156	=	0x0270
                    0274   1197 _UPHY14_TRX_ANAREG_TOP_157	=	0x0274
                    0000   1198 _UPHY14_TRX_ANAREG_BOT_0	=	0x0000
                    0004   1199 _UPHY14_TRX_ANAREG_BOT_1	=	0x0004
                    0008   1200 _UPHY14_TRX_ANAREG_BOT_2	=	0x0008
                    000C   1201 _UPHY14_TRX_ANAREG_BOT_3	=	0x000c
                    0010   1202 _UPHY14_TRX_ANAREG_BOT_4	=	0x0010
                    0014   1203 _UPHY14_TRX_ANAREG_BOT_5	=	0x0014
                    0018   1204 _UPHY14_TRX_ANAREG_BOT_6	=	0x0018
                    001C   1205 _UPHY14_TRX_ANAREG_BOT_7	=	0x001c
                    0020   1206 _UPHY14_TRX_ANAREG_BOT_8	=	0x0020
                    0024   1207 _UPHY14_TRX_ANAREG_BOT_9	=	0x0024
                    0028   1208 _UPHY14_TRX_ANAREG_BOT_10	=	0x0028
                    002C   1209 _UPHY14_TRX_ANAREG_BOT_11	=	0x002c
                    0030   1210 _UPHY14_TRX_ANAREG_BOT_12	=	0x0030
                    0034   1211 _UPHY14_TRX_ANAREG_BOT_13	=	0x0034
                    0038   1212 _UPHY14_TRX_ANAREG_BOT_14	=	0x0038
                    003C   1213 _UPHY14_TRX_ANAREG_BOT_15	=	0x003c
                    0040   1214 _UPHY14_TRX_ANAREG_BOT_16	=	0x0040
                    0044   1215 _UPHY14_TRX_ANAREG_BOT_17	=	0x0044
                    0048   1216 _UPHY14_TRX_ANAREG_BOT_18	=	0x0048
                    004C   1217 _UPHY14_TRX_ANAREG_BOT_19	=	0x004c
                    0050   1218 _UPHY14_TRX_ANAREG_BOT_20	=	0x0050
                    0054   1219 _UPHY14_TRX_ANAREG_BOT_21	=	0x0054
                    0058   1220 _UPHY14_TRX_ANAREG_BOT_22	=	0x0058
                    005C   1221 _UPHY14_TRX_ANAREG_BOT_23	=	0x005c
                    0060   1222 _UPHY14_TRX_ANAREG_BOT_24	=	0x0060
                    0064   1223 _UPHY14_TRX_ANAREG_BOT_25	=	0x0064
                    0068   1224 _UPHY14_TRX_ANAREG_BOT_26	=	0x0068
                    006C   1225 _UPHY14_TRX_ANAREG_BOT_27	=	0x006c
                    0070   1226 _UPHY14_TRX_ANAREG_BOT_28	=	0x0070
                    0074   1227 _UPHY14_TRX_ANAREG_BOT_29	=	0x0074
                    0078   1228 _UPHY14_TRX_ANAREG_BOT_30	=	0x0078
                    007C   1229 _UPHY14_TRX_ANAREG_BOT_31	=	0x007c
                    0080   1230 _UPHY14_TRX_ANAREG_BOT_32	=	0x0080
                    0478   1231 _ANA_DFEE_REG_1E	=	0x0478
                    047C   1232 _ANA_DFEE_REG_1F	=	0x047c
                    0480   1233 _ANA_DFEE_REG_20	=	0x0480
                    0484   1234 _ANA_DFEE_REG_21	=	0x0484
                    0488   1235 _ANA_DFEE_REG_22	=	0x0488
                    048C   1236 _ANA_DFEE_REG_23	=	0x048c
                    0490   1237 _ANA_DFEE_REG_24	=	0x0490
                    0494   1238 _ANA_DFEE_REG_25	=	0x0494
                    0498   1239 _ANA_DFEE_REG_26	=	0x0498
                    049C   1240 _ANA_DFEE_REG_27	=	0x049c
                    0400   1241 _ANA_DFEE_REG_00	=	0x0400
                    0404   1242 _ANA_DFEE_REG_01	=	0x0404
                    0408   1243 _ANA_DFEE_REG_02	=	0x0408
                    040C   1244 _ANA_DFEE_REG_03	=	0x040c
                    0410   1245 _ANA_DFEE_REG_04	=	0x0410
                    0414   1246 _ANA_DFEE_REG_05	=	0x0414
                    0418   1247 _ANA_DFEE_REG_06	=	0x0418
                    041C   1248 _ANA_DFEE_REG_07	=	0x041c
                    0420   1249 _ANA_DFEE_REG_08	=	0x0420
                    0424   1250 _ANA_DFEE_REG_09	=	0x0424
                    0428   1251 _ANA_DFEE_REG_0A	=	0x0428
                    042C   1252 _ANA_DFEE_REG_0B	=	0x042c
                    0430   1253 _ANA_DFEE_REG_0C	=	0x0430
                    0434   1254 _ANA_DFEE_REG_0D	=	0x0434
                    0438   1255 _ANA_DFEE_REG_0E	=	0x0438
                    043C   1256 _ANA_DFEE_REG_0F	=	0x043c
                    0440   1257 _ANA_DFEE_REG_10	=	0x0440
                    0444   1258 _ANA_DFEE_REG_11	=	0x0444
                    0448   1259 _ANA_DFEE_REG_12	=	0x0448
                    044C   1260 _ANA_DFEE_REG_13	=	0x044c
                    0450   1261 _ANA_DFEE_REG_14	=	0x0450
                    0454   1262 _ANA_DFEE_REG_15	=	0x0454
                    0458   1263 _ANA_DFEE_REG_16	=	0x0458
                    045C   1264 _ANA_DFEE_REG_17	=	0x045c
                    0460   1265 _ANA_DFEE_REG_18	=	0x0460
                    0464   1266 _ANA_DFEE_REG_19	=	0x0464
                    0468   1267 _ANA_DFEE_REG_1A	=	0x0468
                    046C   1268 _ANA_DFEE_REG_1B	=	0x046c
                    0470   1269 _ANA_DFEE_REG_1C	=	0x0470
                    0474   1270 _ANA_DFEE_REG_1D	=	0x0474
                    0830   1271 _ANA_DFEO_REG_0C	=	0x0830
                    0834   1272 _ANA_DFEO_REG_0D	=	0x0834
                    0838   1273 _ANA_DFEO_REG_0E	=	0x0838
                    083C   1274 _ANA_DFEO_REG_0F	=	0x083c
                    0840   1275 _ANA_DFEO_REG_10	=	0x0840
                    0844   1276 _ANA_DFEO_REG_11	=	0x0844
                    0848   1277 _ANA_DFEO_REG_12	=	0x0848
                    084C   1278 _ANA_DFEO_REG_13	=	0x084c
                    0850   1279 _ANA_DFEO_REG_14	=	0x0850
                    0854   1280 _ANA_DFEO_REG_15	=	0x0854
                    0858   1281 _ANA_DFEO_REG_16	=	0x0858
                    085C   1282 _ANA_DFEO_REG_17	=	0x085c
                    0860   1283 _ANA_DFEO_REG_18	=	0x0860
                    0864   1284 _ANA_DFEO_REG_19	=	0x0864
                    0868   1285 _ANA_DFEO_REG_1A	=	0x0868
                    086C   1286 _ANA_DFEO_REG_1B	=	0x086c
                    0870   1287 _ANA_DFEO_REG_1C	=	0x0870
                    0874   1288 _ANA_DFEO_REG_1D	=	0x0874
                    0878   1289 _ANA_DFEO_REG_1E	=	0x0878
                    087C   1290 _ANA_DFEO_REG_1F	=	0x087c
                    0880   1291 _ANA_DFEO_REG_20	=	0x0880
                    0884   1292 _ANA_DFEO_REG_21	=	0x0884
                    0888   1293 _ANA_DFEO_REG_22	=	0x0888
                    088C   1294 _ANA_DFEO_REG_23	=	0x088c
                    0890   1295 _ANA_DFEO_REG_24	=	0x0890
                    0894   1296 _ANA_DFEO_REG_25	=	0x0894
                    0898   1297 _ANA_DFEO_REG_26	=	0x0898
                    089C   1298 _ANA_DFEO_REG_27	=	0x089c
                    0800   1299 _ANA_DFEO_REG_00	=	0x0800
                    0804   1300 _ANA_DFEO_REG_01	=	0x0804
                    0808   1301 _ANA_DFEO_REG_02	=	0x0808
                    080C   1302 _ANA_DFEO_REG_03	=	0x080c
                    0810   1303 _ANA_DFEO_REG_04	=	0x0810
                    0814   1304 _ANA_DFEO_REG_05	=	0x0814
                    0818   1305 _ANA_DFEO_REG_06	=	0x0818
                    081C   1306 _ANA_DFEO_REG_07	=	0x081c
                    0820   1307 _ANA_DFEO_REG_08	=	0x0820
                    0824   1308 _ANA_DFEO_REG_09	=	0x0824
                    0828   1309 _ANA_DFEO_REG_0A	=	0x0828
                    082C   1310 _ANA_DFEO_REG_0B	=	0x082c
                    8200   1311 _UPHY14_CMN_ANAREG_TOP_128	=	0x8200
                    8204   1312 _UPHY14_CMN_ANAREG_TOP_129	=	0x8204
                    8208   1313 _UPHY14_CMN_ANAREG_TOP_130	=	0x8208
                    820C   1314 _UPHY14_CMN_ANAREG_TOP_131	=	0x820c
                    8210   1315 _UPHY14_CMN_ANAREG_TOP_132	=	0x8210
                    8214   1316 _UPHY14_CMN_ANAREG_TOP_133	=	0x8214
                    8218   1317 _UPHY14_CMN_ANAREG_TOP_134	=	0x8218
                    821C   1318 _UPHY14_CMN_ANAREG_TOP_135	=	0x821c
                    8220   1319 _UPHY14_CMN_ANAREG_TOP_136	=	0x8220
                    8224   1320 _UPHY14_CMN_ANAREG_TOP_137	=	0x8224
                    8228   1321 _UPHY14_CMN_ANAREG_TOP_138	=	0x8228
                    822C   1322 _UPHY14_CMN_ANAREG_TOP_139	=	0x822c
                    8230   1323 _UPHY14_CMN_ANAREG_TOP_140	=	0x8230
                    8234   1324 _UPHY14_CMN_ANAREG_TOP_141	=	0x8234
                    8238   1325 _UPHY14_CMN_ANAREG_TOP_142	=	0x8238
                    823C   1326 _UPHY14_CMN_ANAREG_TOP_143	=	0x823c
                    8240   1327 _UPHY14_CMN_ANAREG_TOP_144	=	0x8240
                    8244   1328 _UPHY14_CMN_ANAREG_TOP_145	=	0x8244
                    8248   1329 _UPHY14_CMN_ANAREG_TOP_146	=	0x8248
                    824C   1330 _UPHY14_CMN_ANAREG_TOP_147	=	0x824c
                    8250   1331 _UPHY14_CMN_ANAREG_TOP_148	=	0x8250
                    8254   1332 _UPHY14_CMN_ANAREG_TOP_149	=	0x8254
                    8258   1333 _UPHY14_CMN_ANAREG_TOP_150	=	0x8258
                    825C   1334 _UPHY14_CMN_ANAREG_TOP_151	=	0x825c
                    8260   1335 _UPHY14_CMN_ANAREG_TOP_152	=	0x8260
                    8264   1336 _UPHY14_CMN_ANAREG_TOP_153	=	0x8264
                    8268   1337 _UPHY14_CMN_ANAREG_TOP_154	=	0x8268
                    826C   1338 _UPHY14_CMN_ANAREG_TOP_155	=	0x826c
                    8270   1339 _UPHY14_CMN_ANAREG_TOP_156	=	0x8270
                    8274   1340 _UPHY14_CMN_ANAREG_TOP_157	=	0x8274
                    8278   1341 _UPHY14_CMN_ANAREG_TOP_158	=	0x8278
                    827C   1342 _UPHY14_CMN_ANAREG_TOP_159	=	0x827c
                    8280   1343 _UPHY14_CMN_ANAREG_TOP_160	=	0x8280
                    8284   1344 _UPHY14_CMN_ANAREG_TOP_161	=	0x8284
                    8288   1345 _UPHY14_CMN_ANAREG_TOP_162	=	0x8288
                    828C   1346 _UPHY14_CMN_ANAREG_TOP_163	=	0x828c
                    8290   1347 _UPHY14_CMN_ANAREG_TOP_164	=	0x8290
                    8294   1348 _UPHY14_CMN_ANAREG_TOP_165	=	0x8294
                    8298   1349 _UPHY14_CMN_ANAREG_TOP_166	=	0x8298
                    829C   1350 _UPHY14_CMN_ANAREG_TOP_167	=	0x829c
                    82A0   1351 _UPHY14_CMN_ANAREG_TOP_168	=	0x82a0
                    82A4   1352 _UPHY14_CMN_ANAREG_TOP_169	=	0x82a4
                    82A8   1353 _UPHY14_CMN_ANAREG_TOP_170	=	0x82a8
                    82AC   1354 _UPHY14_CMN_ANAREG_TOP_171	=	0x82ac
                    82B0   1355 _UPHY14_CMN_ANAREG_TOP_172	=	0x82b0
                    82B4   1356 _UPHY14_CMN_ANAREG_TOP_173	=	0x82b4
                    82B8   1357 _UPHY14_CMN_ANAREG_TOP_174	=	0x82b8
                    82BC   1358 _UPHY14_CMN_ANAREG_TOP_175	=	0x82bc
                    82C0   1359 _UPHY14_CMN_ANAREG_TOP_176	=	0x82c0
                    82C4   1360 _UPHY14_CMN_ANAREG_TOP_177	=	0x82c4
                    82C8   1361 _UPHY14_CMN_ANAREG_TOP_178	=	0x82c8
                    82CC   1362 _UPHY14_CMN_ANAREG_TOP_179	=	0x82cc
                    82D0   1363 _UPHY14_CMN_ANAREG_TOP_180	=	0x82d0
                    82D4   1364 _UPHY14_CMN_ANAREG_TOP_181	=	0x82d4
                    82D8   1365 _UPHY14_CMN_ANAREG_TOP_182	=	0x82d8
                    82DC   1366 _UPHY14_CMN_ANAREG_TOP_183	=	0x82dc
                    82E0   1367 _UPHY14_CMN_ANAREG_TOP_184	=	0x82e0
                    82E4   1368 _UPHY14_CMN_ANAREG_TOP_185	=	0x82e4
                    82E8   1369 _UPHY14_CMN_ANAREG_TOP_186	=	0x82e8
                    82EC   1370 _UPHY14_CMN_ANAREG_TOP_187	=	0x82ec
                    82F0   1371 _UPHY14_CMN_ANAREG_TOP_188	=	0x82f0
                    82F4   1372 _UPHY14_CMN_ANAREG_TOP_189	=	0x82f4
                    82F8   1373 _UPHY14_CMN_ANAREG_TOP_190	=	0x82f8
                    82FC   1374 _UPHY14_CMN_ANAREG_TOP_191	=	0x82fc
                    8300   1375 _UPHY14_CMN_ANAREG_TOP_192	=	0x8300
                    8304   1376 _UPHY14_CMN_ANAREG_TOP_193	=	0x8304
                    8308   1377 _UPHY14_CMN_ANAREG_TOP_194	=	0x8308
                    830C   1378 _UPHY14_CMN_ANAREG_TOP_195	=	0x830c
                    8310   1379 _UPHY14_CMN_ANAREG_TOP_196	=	0x8310
                    8314   1380 _UPHY14_CMN_ANAREG_TOP_197	=	0x8314
                    8318   1381 _UPHY14_CMN_ANAREG_TOP_198	=	0x8318
                    831C   1382 _UPHY14_CMN_ANAREG_TOP_199	=	0x831c
                    8320   1383 _UPHY14_CMN_ANAREG_TOP_200	=	0x8320
                    8324   1384 _UPHY14_CMN_ANAREG_TOP_201	=	0x8324
                    8328   1385 _UPHY14_CMN_ANAREG_TOP_202	=	0x8328
                    832C   1386 _UPHY14_CMN_ANAREG_TOP_203	=	0x832c
                    8330   1387 _UPHY14_CMN_ANAREG_TOP_204	=	0x8330
                    8334   1388 _UPHY14_CMN_ANAREG_TOP_205	=	0x8334
                    8338   1389 _UPHY14_CMN_ANAREG_TOP_206	=	0x8338
                    833C   1390 _UPHY14_CMN_ANAREG_TOP_207	=	0x833c
                    8340   1391 _UPHY14_CMN_ANAREG_TOP_208	=	0x8340
                    8344   1392 _UPHY14_CMN_ANAREG_TOP_209	=	0x8344
                    8348   1393 _UPHY14_CMN_ANAREG_TOP_210	=	0x8348
                    834C   1394 _UPHY14_CMN_ANAREG_TOP_211	=	0x834c
                    8350   1395 _UPHY14_CMN_ANAREG_TOP_212	=	0x8350
                    8354   1396 _UPHY14_CMN_ANAREG_TOP_213	=	0x8354
                    8358   1397 _UPHY14_CMN_ANAREG_TOP_214	=	0x8358
                    2000   1398 _PM_CTRL_TX_LANE_REG1_LANE	=	0x2000
                    2004   1399 _PM_CTRL_TX_LANE_REG2_LANE	=	0x2004
                    2008   1400 _INPUT_TX_PIN_REG0_LANE	=	0x2008
                    200C   1401 _INPUT_TX_PIN_REG1_LANE	=	0x200c
                    2010   1402 _INPUT_TX_PIN_REG2_LANE	=	0x2010
                    2014   1403 _INPUT_TX_PIN_REG3_LANE	=	0x2014
                    2018   1404 _PM_CTRL_INTERRUPT_REG1_LANE	=	0x2018
                    201C   1405 _PM_CTRL_INTERRUPT_REG2	=	0x201c
                    2020   1406 _CLKGEN_TX_LANE_REG1_LANE	=	0x2020
                    2024   1407 _TX_SPEED_CONVERT_LANE	=	0x2024
                    2028   1408 _SPD_CTRL_INTERRUPT_REG1_LANE	=	0x2028
                    202C   1409 _SPD_CTRL_INTERRUPT_REG2	=	0x202c
                    2030   1410 _SPD_CTRL_TX_LANE_REG1_LANE	=	0x2030
                    2034   1411 _TX_SYSTEM_LANE	=	0x2034
                    203C   1412 _INPUT_TX_PIN_REG4_LANE	=	0x203c
                    2040   1413 _TX_CALIBRATION_LANE	=	0x2040
                    2044   1414 _DIG_TX_RSVD_REG0	=	0x2044
                    2048   1415 _INPUT_TX_PIN_REG5_LANE	=	0x2048
                    204C   1416 __FIELDNAME__LANE	=	0x204c
                    2050   1417 _PM_CTRL_INTERRUPT_ISR_REG1_LANE	=	0x2050
                    2054   1418 _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE	=	0x2054
                    2058   1419 _ANALOG_TX_REALTIME_REG_1	=	0x2058
                    205C   1420 _MON_TOP	=	0x205c
                    2100   1421 _PM_CTRL_RX_LANE_REG1_LANE	=	0x2100
                    2104   1422 _RX_SYSTEM_LANE	=	0x2104
                    2108   1423 _INPUT_RX_PIN_REG0_LANE	=	0x2108
                    210C   1424 _INPUT_RX_PIN_REG1_LANE	=	0x210c
                    2110   1425 _INPUT_RX_PIN_REG2_LANE	=	0x2110
                    2114   1426 _SPD_CTRL_RX_LANE_REG1_LANE	=	0x2114
                    2118   1427 _DIG_RX_RSVD_REG0	=	0x2118
                    211C   1428 _CLKGEN_RX_LANE_REG1_LANE	=	0x211c
                    2120   1429 _FRAME_SYNC_DET_REG0	=	0x2120
                    2124   1430 _FRAME_SYNC_DET_REG1	=	0x2124
                    2128   1431 _FRAME_SYNC_DET_REG2	=	0x2128
                    212C   1432 _FRAME_SYNC_DET_REG3	=	0x212c
                    2130   1433 _FRAME_SYNC_DET_REG4	=	0x2130
                    2134   1434 _FRAME_SYNC_DET_REG5	=	0x2134
                    2138   1435 _FRAME_SYNC_DET_REG6	=	0x2138
                    213C   1436 _CDR_LOCK_REG	=	0x213c
                    2140   1437 _RX_LANE_INTERRUPT	=	0x2140
                    2144   1438 _RX_LANE_INTERRUPT_MASK	=	0x2144
                    2148   1439 _RX_DATA_PATH_REG	=	0x2148
                    214C   1440 _INPUT_RX_PIN_REG3_LANE	=	0x214c
                    2150   1441 _RX_CALIBRATION_REG	=	0x2150
                    2158   1442 _RX_LANE_INTERRUPT_REG1	=	0x2158
                    2160   1443 _DTL_REG0	=	0x2160
                    2164   1444 _DTL_REG1	=	0x2164
                    2168   1445 _DTL_REG2	=	0x2168
                    216C   1446 _DTL_REG3	=	0x216c
                    2170   1447 _SQ_REG0	=	0x2170
                    4000   1448 _LANE_CFG0	=	0x4000
                    4004   1449 _LANE_STATUS0	=	0x4004
                    4008   1450 _LANE_CFG_STATUS2_LANE	=	0x4008
                    400C   1451 _LANE_CFG2_LANE	=	0x400c
                    4010   1452 _LANE_CFG4	=	0x4010
                    4014   1453 _LANE_CFG_STATUS3_LANE	=	0x4014
                    4018   1454 _LANE_DP_PIE8_CFG0_LANE	=	0x4018
                    401C   1455 _LANE_USB_DP_CFG1_LANE	=	0x401c
                    4020   1456 _LANE_USB_DP_CFG2_LANE	=	0x4020
                    4024   1457 _LANE_EQ_CFG0_LANE	=	0x4024
                    4028   1458 _LANE_EQ_CFG1_LANE	=	0x4028
                    402C   1459 _LANE_PRESET_CFG0_LANE	=	0x402c
                    4030   1460 _LANE_PRESET_CFG2_LANE	=	0x4030
                    4034   1461 _LANE_PRESET_CFG4_LANE	=	0x4034
                    4038   1462 _LANE_PRESET_CFG6_LANE	=	0x4038
                    403C   1463 _LANE_PRESET_CFG8_LANE	=	0x403c
                    4040   1464 _LANE_PRESET_CFG10_LANE	=	0x4040
                    4044   1465 _LANE_PRESET_CFG12_LANE	=	0x4044
                    4048   1466 _LANE_PRESET_CFG14_LANE	=	0x4048
                    404C   1467 _LANE_PRESET_CFG16_LANE	=	0x404c
                    4050   1468 _LANE_COEFF_MAX0_LANE	=	0x4050
                    4054   1469 _LANE_REMOTE_SET_LANE	=	0x4054
                    4058   1470 _LANE_EQ_16G_CFG0_LANE	=	0x4058
                    405C   1471 _LANE_16G_PRESET_CFG0_LANE	=	0x405c
                    4060   1472 _LANE_16G_PRESET_CFG2_LANE	=	0x4060
                    4064   1473 _LANE_16G_PRESET_CFG4_LANE	=	0x4064
                    4068   1474 _LANE_16G_PRESET_CFG6_LANE	=	0x4068
                    406C   1475 _LANE_16G_PRESET_CFG8_LANE	=	0x406c
                    4070   1476 _LANE_16G_PRESET_CFG10_LANE	=	0x4070
                    4074   1477 _LANE_16G_PRESET_CFG12_LANE	=	0x4074
                    4078   1478 _LANE_16G_PRESET_CFG14_LANE	=	0x4078
                    407C   1479 _LANE_16G_PRESET_CFG16_LANE	=	0x407c
                    4080   1480 _LANE_EQ_32G_CFG0_LANE	=	0x4080
                    4084   1481 _LANE_32G_PRESET_CFG0_LANE	=	0x4084
                    4088   1482 _LANE_32G_PRESET_CFG2_LANE	=	0x4088
                    408C   1483 _LANE_32G_PRESET_CFG4_LANE	=	0x408c
                    4090   1484 _LANE_32G_PRESET_CFG6_LANE	=	0x4090
                    4094   1485 _LANE_32G_PRESET_CFG8_LANE	=	0x4094
                    4098   1486 _LANE_32G_PRESET_CFG10_LANE	=	0x4098
                    409C   1487 _LANE_32G_PRESET_CFG12_LANE	=	0x409c
                    40A0   1488 _LANE_32G_PRESET_CFG14_LANE	=	0x40a0
                    40A4   1489 _LANE_32G_PRESET_CFG16_LANE	=	0x40a4
                    2200   1490 _MCU_CONTROL_LANE	=	0x2200
                    2204   1491 _MCU_GPIO	=	0x2204
                    2208   1492 _CACHE_DEBUG0	=	0x2208
                    220C   1493 _CACHE_DEBUG1	=	0x220c
                    2210   1494 _LANE_SYSTEM0	=	0x2210
                    2230   1495 _MCU_STATUS0_LANE	=	0x2230
                    2234   1496 _MCU_STATUS1_LANE	=	0x2234
                    2238   1497 _MCU_STATUS2_LANE	=	0x2238
                    223C   1498 _MCU_STATUS3_LANE	=	0x223c
                    2240   1499 _MCU_INT0_CONTROL	=	0x2240
                    2244   1500 _MCU_INT1_CONTROL	=	0x2244
                    2248   1501 _MCU_INT2_CONTROL	=	0x2248
                    224C   1502 _MCU_INT3_CONTROL	=	0x224c
                    2250   1503 _MCU_INT4_CONTROL	=	0x2250
                    2254   1504 _MCU_INT5_CONTROL	=	0x2254
                    2258   1505 _MCU_INT6_CONTROL	=	0x2258
                    225C   1506 _MCU_INT7_CONTROL	=	0x225c
                    2260   1507 _MCU_INT8_CONTROL	=	0x2260
                    2264   1508 _MCU_INT9_CONTROL	=	0x2264
                    2268   1509 _MCU_INT10_CONTROL	=	0x2268
                    226C   1510 _MCU_INT11_CONTROL	=	0x226c
                    2270   1511 _MCU_INT12_CONTROL	=	0x2270
                    2274   1512 _MCU_TIMER_CONTROL	=	0x2274
                    2278   1513 _MCU_TIMER0_CONTROL	=	0x2278
                    227C   1514 _MCU_TIMER1_CONTROL	=	0x227c
                    2280   1515 _MCU_TIMER2_CONTROL	=	0x2280
                    2284   1516 _MCU_TIMER3_CONTROL	=	0x2284
                    2288   1517 _MCU_IRQ_LANE	=	0x2288
                    228C   1518 _MCU_IRQ_MASK_LANE	=	0x228c
                    2290   1519 _MCU_MEM_REG1_LANE	=	0x2290
                    2294   1520 _MCU_MEM_REG2_LANE	=	0x2294
                    2298   1521 _MCU_TIMER_CTRL_1_LANE	=	0x2298
                    229C   1522 _MCU_TIMER_CTRL_2_LANE	=	0x229c
                    22A0   1523 _MCU_TIMER_CTRL_3_LANE	=	0x22a0
                    22A4   1524 _MCU_TIMER_CTRL_4_LANE	=	0x22a4
                    22A8   1525 _MCU_TIMER_CTRL_5_LANE	=	0x22a8
                    22AC   1526 _MCU_TIMER_CTRL_6_LANE	=	0x22ac
                    22B0   1527 _MCU_TIMER_CTRL_7_LANE	=	0x22b0
                    22B4   1528 _MCU_DEBUG0_LANE	=	0x22b4
                    22B8   1529 _MCU_DEBUG1_LANE	=	0x22b8
                    22BC   1530 _MCU_DEBUG2_LANE	=	0x22bc
                    22C0   1531 _MCU_DEBUG3_LANE	=	0x22c0
                    22C4   1532 _MCU_DEBUG_LANE	=	0x22c4
                    22C8   1533 _EXT_INT_CONTROL	=	0x22c8
                    22CC   1534 _ANA_IF_TRX_REG0	=	0x22cc
                    22D0   1535 _ANA_IF_DFEE_REG0	=	0x22d0
                    22D4   1536 _ANA_IF_DFEO_REG0	=	0x22d4
                    22D8   1537 _MCU_IRQ_ISR_LANE	=	0x22d8
                    22DC   1538 _MCU_WDT_LANE	=	0x22dc
                    22E0   1539 _MCU_INT_CONTROL_13	=	0x22e0
                    22E4   1540 _MCU_COMMAND0	=	0x22e4
                    22F4   1541 _MEM_ECC_ERR_ADDRESS0	=	0x22f4
                    22F8   1542 _XDATA_MEM_CHECKSUM_LANE0	=	0x22f8
                    22FC   1543 _XDATA_MEM_CHECKSUM_LANE1	=	0x22fc
                    2300   1544 _PT_CONTROL0	=	0x2300
                    2304   1545 _PT_CONTROL1	=	0x2304
                    2308   1546 _PT_USER_PATTERN0	=	0x2308
                    230C   1547 _PT_USER_PATTERN1	=	0x230c
                    2310   1548 _PT_USER_PATTERN2	=	0x2310
                    2314   1549 _PT_COUNTER0	=	0x2314
                    2318   1550 _PT_COUNTER1	=	0x2318
                    231C   1551 _PT_COUNTER2	=	0x231c
                    2400   1552 _DFE_CTRL_REG0	=	0x2400
                    2404   1553 _DFE_CTRL_REG1	=	0x2404
                    2408   1554 _DFE_CTRL_REG2	=	0x2408
                    240C   1555 _DFE_CTRL_REG3	=	0x240c
                    2410   1556 _RX_EQ_CLK_CTRL	=	0x2410
                    2414   1557 _DFE_CTRL_REG4	=	0x2414
                    2418   1558 _DFE_ANA_REG0	=	0x2418
                    241C   1559 _DFE_ANA_REG1	=	0x241c
                    2420   1560 _DFE_STEP_REG0	=	0x2420
                    2424   1561 _DFE_STEP_REG1	=	0x2424
                    2430   1562 _DFE_FEN_EVEN_REG	=	0x2430
                    2434   1563 _DFE_FEN_ODD_REG	=	0x2434
                    2438   1564 _DFE_DC_EVEN_REG8	=	0x2438
                    243C   1565 _DFE_DC_ODD_REG8	=	0x243c
                    2440   1566 _DFE_FEXT_EVEN_REG0	=	0x2440
                    2444   1567 _DFE_FEXT_EVEN_REG1	=	0x2444
                    2448   1568 _DFE_FEXT_EVEN_REG2	=	0x2448
                    244C   1569 _DFE_FEXT_EVEN_REG3	=	0x244c
                    2450   1570 _DFE_FEXT_EVEN_REG4	=	0x2450
                    2454   1571 _DFE_FEXT_EVEN_REG5	=	0x2454
                    2458   1572 _DFE_FEXT_EVEN_REG6	=	0x2458
                    245C   1573 _DFE_FEXT_EVEN_REG7	=	0x245c
                    2460   1574 _DFE_FEXT_ODD_REG0	=	0x2460
                    2464   1575 _DFE_FEXT_ODD_REG1	=	0x2464
                    2468   1576 _DFE_FEXT_ODD_REG2	=	0x2468
                    246C   1577 _DFE_FEXT_ODD_REG3	=	0x246c
                    2470   1578 _DFE_FEXT_ODD_REG4	=	0x2470
                    2474   1579 _DFE_FEXT_ODD_REG5	=	0x2474
                    2478   1580 _DFE_FEXT_ODD_REG6	=	0x2478
                    247C   1581 _DFE_FEXT_ODD_REG7	=	0x247c
                    2480   1582 _DFE_READ_EVEN_SM_REG0	=	0x2480
                    2484   1583 _DFE_READ_EVEN_SM_REG1	=	0x2484
                    2488   1584 _DFE_READ_EVEN_SM_REG2	=	0x2488
                    248C   1585 _DFE_READ_EVEN_SM_REG3	=	0x248c
                    2490   1586 _DFE_READ_EVEN_SM_REG4	=	0x2490
                    2494   1587 _DFE_READ_EVEN_SM_REG5	=	0x2494
                    2498   1588 _DFE_READ_EVEN_SM_REG6	=	0x2498
                    249C   1589 _DFE_READ_EVEN_SM_REG7	=	0x249c
                    24A0   1590 _DFE_READ_ODD_SM_REG0	=	0x24a0
                    24A4   1591 _DFE_READ_ODD_SM_REG1	=	0x24a4
                    24A8   1592 _DFE_READ_ODD_SM_REG2	=	0x24a8
                    24AC   1593 _DFE_READ_ODD_SM_REG3	=	0x24ac
                    24B0   1594 _DFE_READ_ODD_SM_REG4	=	0x24b0
                    24B4   1595 _DFE_READ_ODD_SM_REG5	=	0x24b4
                    24B8   1596 _DFE_READ_ODD_SM_REG6	=	0x24b8
                    24BC   1597 _DFE_READ_ODD_SM_REG7	=	0x24bc
                    24C0   1598 _DFE_READ_EVEN_SM_REG8	=	0x24c0
                    24C4   1599 _DFE_READ_ODD_SM_REG8	=	0x24c4
                    24D0   1600 _DFE_READ_EVEN_2C_REG0	=	0x24d0
                    24D4   1601 _DFE_READ_EVEN_2C_REG1	=	0x24d4
                    24D8   1602 _DFE_READ_EVEN_2C_REG2	=	0x24d8
                    24DC   1603 _DFE_READ_EVEN_2C_REG3	=	0x24dc
                    24E0   1604 _DFE_READ_EVEN_2C_REG4	=	0x24e0
                    24E4   1605 _DFE_READ_EVEN_2C_REG5	=	0x24e4
                    24E8   1606 _DFE_READ_EVEN_2C_REG6	=	0x24e8
                    24EC   1607 _DFE_READ_EVEN_2C_REG7	=	0x24ec
                    24F0   1608 _DFE_READ_ODD_2C_REG0	=	0x24f0
                    24F4   1609 _DFE_READ_ODD_2C_REG1	=	0x24f4
                    24F8   1610 _DFE_READ_ODD_2C_REG2	=	0x24f8
                    24FC   1611 _DFE_READ_ODD_2C_REG3	=	0x24fc
                    2500   1612 _DFE_READ_ODD_2C_REG4	=	0x2500
                    2504   1613 _DFE_READ_ODD_2C_REG5	=	0x2504
                    2508   1614 _DFE_READ_ODD_2C_REG6	=	0x2508
                    250C   1615 _DFE_READ_ODD_2C_REG7	=	0x250c
                    2510   1616 _DFE_READ_EVEN_2C_REG8	=	0x2510
                    2514   1617 _DFE_READ_ODD_2C_REG8	=	0x2514
                    2518   1618 _CAL_OFST_REG0	=	0x2518
                    251C   1619 _CAL_OFST_REG1	=	0x251c
                    2520   1620 _CAL_OFST_REG2	=	0x2520
                    2530   1621 _DFE_DCE_REG0	=	0x2530
                    2540   1622 _DFE_STATIC_LANE_REG0	=	0x2540
                    2544   1623 _DFE_STATIC_LANE_REG1	=	0x2544
                    2548   1624 _DFE_STATIC_LANE_REG3	=	0x2548
                    254C   1625 _DFE_STATIC_LANE_REG4	=	0x254c
                    2550   1626 _DFE_STATIC_LANE_REG5	=	0x2550
                    2554   1627 _DFE_STATIC_LANE_REG6	=	0x2554
                    2560   1628 _EOM_VLD_REG0	=	0x2560
                    2564   1629 _EOM_VLD_REG1	=	0x2564
                    2568   1630 _EOM_VLD_REG2	=	0x2568
                    256C   1631 _EOM_VLD_REG3	=	0x256c
                    2570   1632 _EOM_ERR_REG0	=	0x2570
                    2574   1633 _EOM_ERR_REG1	=	0x2574
                    2578   1634 _EOM_ERR_REG2	=	0x2578
                    257C   1635 _EOM_ERR_REG3	=	0x257c
                    2580   1636 _EOM_REG0	=	0x2580
                    25F0   1637 _EOM_VLD_REG4	=	0x25f0
                    25F4   1638 _LANE_MARGIN_REG0	=	0x25f4
                    6000   1639 _CAL_CTRL1_LANE	=	0x6000
                    6004   1640 _CAL_CTRL2_LANE	=	0x6004
                    6008   1641 _CAL_CTRL3_LANE	=	0x6008
                    600C   1642 _CAL_CTRL4_LANE	=	0x600c
                    6010   1643 _CAL_SAVE_DATA1_LANE	=	0x6010
                    6014   1644 _CAL_SAVE_DATA2_LANE	=	0x6014
                    6018   1645 _CAL_SAVE_DATA3_LANE	=	0x6018
                    601C   1646 _PHY_REMOTE_CTRL_COMMAND_LANE	=	0x601c
                    6020   1647 _PHY_REMOTE_CTRL_VALUE_LANE	=	0x6020
                    6024   1648 _PHY_LOCAL_VALUE_LANE	=	0x6024
                    6028   1649 _TRX_TRAIN_IF_TIMERS1_LANE	=	0x6028
                    602C   1650 _TRX_TRAIN_IF_TIMERS2_LANE	=	0x602c
                    6030   1651 _TRX_TRAIN_IF_TIMERS_ENABLE_LANE	=	0x6030
                    6034   1652 _DFE_CONTROL_0	=	0x6034
                    6038   1653 _DFE_CONTROL_1	=	0x6038
                    6040   1654 _DFE_CONTROL_2	=	0x6040
                    6044   1655 _DFE_CONTROL_3	=	0x6044
                    6048   1656 _DFE_CONTROL_4	=	0x6048
                    604C   1657 _DFE_CONTROL_5	=	0x604c
                    6050   1658 _TRAIN_CONTROL_0	=	0x6050
                    6054   1659 _TRAIN_CONTROL_1	=	0x6054
                    6058   1660 _TRAIN_CONTROL_2	=	0x6058
                    605C   1661 _RPTA_CONFIG_0	=	0x605c
                    6060   1662 _RPTA_CONFIG_1	=	0x6060
                    6064   1663 _DLL_CAL	=	0x6064
                    6068   1664 _TRAIN_PARA_0	=	0x6068
                    606C   1665 _TRAIN_PARA_1	=	0x606c
                    6070   1666 _TRAIN_PARA_2	=	0x6070
                    6074   1667 _TRAIN_PARA_3	=	0x6074
                    6078   1668 _DFE_CONTROL_6	=	0x6078
                    607C   1669 _DFE_TEST_0	=	0x607c
                    6080   1670 _DFE_TEST_1	=	0x6080
                    6084   1671 _DFE_TEST_4	=	0x6084
                    6088   1672 _DFE_TEST_5	=	0x6088
                    608C   1673 _DFE_CONTROL_7	=	0x608c
                    6090   1674 _DFE_CONTROL_8	=	0x6090
                    6094   1675 _DFE_CONTROL_9	=	0x6094
                    6098   1676 _DFE_CONTROL_10	=	0x6098
                    609C   1677 _DFE_CONTROL_11	=	0x609c
                    60A0   1678 _CDS_CTRL_REG0	=	0x60a0
                    60A4   1679 _CDS_CTRL_REG1	=	0x60a4
                    60A8   1680 _ESM_POP_P_CNT_LOW_LANE	=	0x60a8
                    60AC   1681 _ESM_ERR_P_CNT_LOW_LANE	=	0x60ac
                    60B0   1682 _ESM_ERR_POP_CNT_HIGH_LANE	=	0x60b0
                    60B4   1683 _TRAIN_CONTROL_3	=	0x60b4
                    60B8   1684 _TRAIN_CONTROL_4	=	0x60b8
                    60BC   1685 _TRAIN_CONTROL_5	=	0x60bc
                    60C0   1686 _TRAIN_CONTROL_6	=	0x60c0
                    60C4   1687 _TRAIN_CONTROL_7	=	0x60c4
                    60C8   1688 _TRAIN_CONTROL_8	=	0x60c8
                    60CC   1689 _TRAIN_CONTROL_9	=	0x60cc
                    60D0   1690 _TRAIN_CONTROL_10	=	0x60d0
                    60D4   1691 _TRAIN_CONTROL_11	=	0x60d4
                    60D8   1692 _TRAIN_CONTROL_12	=	0x60d8
                    60DC   1693 _ESM_POP_N_CNT_LOW_LANE	=	0x60dc
                    60E0   1694 _ESM_ERR_N_CNT_LOW_LANE	=	0x60e0
                    60E4   1695 _TRAIN_CONTROL_13	=	0x60e4
                    60E8   1696 _TRAIN_CONTROL_14	=	0x60e8
                    60EC   1697 _TRAIN_CONTROL_15	=	0x60ec
                    60F0   1698 _TRAIN_CONTROL_16	=	0x60f0
                    60F4   1699 _TRAIN_CONTROL_17	=	0x60f4
                    60F8   1700 _END_XDAT_LANE	=	0x60f8
                    A000   1701 _TX_CMN_REG	=	0xa000
                    A008   1702 _DTX_REG0	=	0xa008
                    A00C   1703 _DTX_REG1	=	0xa00c
                    A010   1704 _DTX_REG2	=	0xa010
                    A014   1705 _DTX_REG3	=	0xa014
                    A018   1706 _DTX_REG4	=	0xa018
                    A01C   1707 _DTX_PHY_ALIGN_REG0	=	0xa01c
                    A024   1708 _DTX_PHY_ALIGN_REG1	=	0xa024
                    A028   1709 _DTX_PHY_ALIGN_REG2	=	0xa028
                    A02C   1710 _SRIS_REG0	=	0xa02c
                    A030   1711 _SRIS_REG1	=	0xa030
                    A100   1712 _RX_CMN_0	=	0xa100
                    A110   1713 _DFE_STATIC_REG0	=	0xa110
                    A114   1714 _DFE_STATIC_REG1	=	0xa114
                    A118   1715 _DFE_STATIC_REG3	=	0xa118
                    A11C   1716 _DFE_STATIC_REG4	=	0xa11c
                    A120   1717 _DFE_STATIC_REG5	=	0xa120
                    A124   1718 _DFE_STATIC_REG6	=	0xa124
                    4200   1719 _GLOB_RST_CLK_CTRL	=	0x4200
                    4204   1720 _GLOB_CLK_SRC_LO	=	0x4204
                    4208   1721 _GLOB_CLK_SRC_HI	=	0x4208
                    420C   1722 _GLOB_MISC_CTRL	=	0x420c
                    4210   1723 _GLOB_DP_SAL_CFG	=	0x4210
                    4214   1724 _GLOB_DP_SAL_CFG1	=	0x4214
                    4218   1725 _GLOB_DP_SAL_CFG3	=	0x4218
                    421C   1726 _GLOB_DP_SAL_CFG5	=	0x421c
                    4220   1727 _GLOB_PM_CFG0	=	0x4220
                    4224   1728 _GLOB_COUNTER_CTRL	=	0x4224
                    4228   1729 _GLOB_COUNTER_HI	=	0x4228
                    422C   1730 _GLOB_PM_DP_CTRL	=	0x422c
                    4230   1731 _GLOB_DP_BAL_CFG0	=	0x4230
                    4234   1732 _GLOB_DP_BAL_CFG2	=	0x4234
                    4238   1733 _GLOB_DP_BAL_CFG4	=	0x4238
                    423C   1734 _GLOB_BIST_CTRL	=	0x423c
                    4240   1735 _GLOB_BIST_LANE_TYPE	=	0x4240
                    4244   1736 _GLOB_BIST_START	=	0x4244
                    4248   1737 _GLOB_BIST_MASK	=	0x4248
                    424C   1738 _GLOB_BIST_RESULT	=	0x424c
                    4250   1739 _GLOB_BIST_SEQR_CFG	=	0x4250
                    4254   1740 _GLOB_BIST_DATA_HI	=	0x4254
                    4258   1741 _GLOB_PIPE_REVISION	=	0x4258
                    425C   1742 _GLOB_L1_SUBSTATES_CFG	=	0x425c
                    A200   1743 _MCU_CONTROL_0	=	0xa200
                    A204   1744 _MCU_CONTROL_1	=	0xa204
                    A208   1745 _MCU_CONTROL_2	=	0xa208
                    A20C   1746 _MCU_CONTROL_3	=	0xa20c
                    A210   1747 _MCU_CONTROL_4	=	0xa210
                    A214   1748 _MCU_DEBUG0	=	0xa214
                    A218   1749 _MCU_DEBUG1	=	0xa218
                    A21C   1750 _MEMORY_CONTROL_0	=	0xa21c
                    A220   1751 _MEMORY_CONTROL_1	=	0xa220
                    A224   1752 _MEMORY_CONTROL_2	=	0xa224
                    A228   1753 _MEMORY_CONTROL_3	=	0xa228
                    A22C   1754 _MEMORY_CONTROL_4	=	0xa22c
                    A234   1755 _MCU_INFO_0	=	0xa234
                    A238   1756 _MCU_INFO_1	=	0xa238
                    A23C   1757 _MCU_INFO_2	=	0xa23c
                    A240   1758 _MCU_INFO_3	=	0xa240
                    A244   1759 _MEM_CMN_ECC_ERR_ADDRESS0	=	0xa244
                    A2E0   1760 _ANA_IF_CMN_REG1	=	0xa2e0
                    A2E4   1761 _MEM_IRQ	=	0xa2e4
                    A2E8   1762 _MEM_IRQ_MASK	=	0xa2e8
                    A2EC   1763 _ANA_IF_CMN_REG0	=	0xa2ec
                    A2F0   1764 _APB_CONTROL_REG	=	0xa2f0
                    A2F4   1765 _MEM_IRQ_CLEAR	=	0xa2f4
                    A2F8   1766 _MCU_SYNC1	=	0xa2f8
                    A2FC   1767 _MCU_SYNC2	=	0xa2fc
                    A300   1768 _TEST0	=	0xa300
                    A304   1769 _TEST1	=	0xa304
                    A308   1770 _TEST2	=	0xa308
                    A30C   1771 _TEST3	=	0xa30c
                    A310   1772 _TEST4	=	0xa310
                    A314   1773 _SYSTEM	=	0xa314
                    A318   1774 _PM_CMN_REG1	=	0xa318
                    A31C   1775 _INPUT_CMN_PIN_REG0	=	0xa31c
                    A320   1776 _INPUT_CMN_PIN_REG1	=	0xa320
                    A324   1777 _INPUT_CMN_PIN_REG2	=	0xa324
                    A328   1778 _ANA_TSEN_CONTROL	=	0xa328
                    A32C   1779 _PLLCAL_REG0	=	0xa32c
                    A330   1780 _PLLCAL_REG1	=	0xa330
                    A334   1781 _CLKGEN_CMN_REG1	=	0xa334
                    A338   1782 _SPD_CMN_REG1	=	0xa338
                    A33C   1783 _OUTPUT_CMN_PIN_REG0	=	0xa33c
                    A340   1784 _CMN_CALIBRATION	=	0xa340
                    A344   1785 __FIELDNAME_	=	0xa344
                    A348   1786 _INPUT_CMN_PIN_REG3	=	0xa348
                    A34C   1787 _PM_CMN_REG2	=	0xa34c
                    A354   1788 _TEST5	=	0xa354
                    A358   1789 _XDATA_MEM_CHECKSUM_CMN_0	=	0xa358
                    A35C   1790 _XDATA_MEM_CHECKSUM_CMN_1	=	0xa35c
                    A360   1791 _XDATA_MEM_CHECKSUM_CMN_2	=	0xa360
                    A364   1792 _MCU_SDT_CMN	=	0xa364
                    A368   1793 _CMN_CACHE_DEBUG0	=	0xa368
                    A36C   1794 _MCU_INT_ADDR	=	0xa36c
                    A370   1795 _CMN_ISR_2	=	0xa370
                    A374   1796 _CMN_ISR_MASK_2	=	0xa374
                    A378   1797 _CMN_ISR_CLEAR_2	=	0xa378
                    A37C   1798 _CMN_MCU_GPIO	=	0xa37c
                    A380   1799 _CMN_CACHE_DEBUG1	=	0xa380
                    A384   1800 _CMN_MCU_TIMER_CONTROL	=	0xa384
                    A388   1801 _CMN_MCU_TIMER_CTRL_2_LANE	=	0xa388
                    A38C   1802 _CMN_MCU_TIMER_CTRL_3_LANE	=	0xa38c
                    A390   1803 _CMN_MCU_TIMER_CTRL_4_LANE	=	0xa390
                    A394   1804 _CMN_MCU_TIMER_CTRL_5_LANE	=	0xa394
                    A398   1805 _CMN_MCU_TIMER0_CONTROL	=	0xa398
                    A39C   1806 _CMN_MCU_TIMER1_CONTROL	=	0xa39c
                    A3A0   1807 _CMN_MCU_TIMER2_CONTROL	=	0xa3a0
                    A3A4   1808 _CMN_MCU_TIMER3_CONTROL	=	0xa3a4
                    A3A8   1809 _CMN_ISR_1	=	0xa3a8
                    A3AC   1810 _CMN_ISR_MASK_1	=	0xa3ac
                    A3B0   1811 _SET_LANE_ISR	=	0xa3b0
                    A3F4   1812 _CMN_MCU_REG	=	0xa3f4
                    A3F8   1813 _CID_REG0	=	0xa3f8
                    A3FC   1814 _CID_REG1	=	0xa3fc
                    E600   1815 _FW_REV	=	0xe600
                    E604   1816 _CONTROL_CONFIG0	=	0xe604
                    E608   1817 _CONTROL_CONFIG1	=	0xe608
                    E60C   1818 _CONTROL_CONFIG2	=	0xe60c
                    E610   1819 _CONTROL_CONFIG3	=	0xe610
                    E614   1820 _CONTROL_CONFIG4	=	0xe614
                    E618   1821 _CONTROL_CONFIG5	=	0xe618
                    E61C   1822 _CONTROL_CONFIG6	=	0xe61c
                    E620   1823 _CONTROL_CONFIG7	=	0xe620
                    E624   1824 _CAL_DATA0	=	0xe624
                    E628   1825 _TRAIN_IF_CONFIG	=	0xe628
                    E62C   1826 _CONTROL_CONFIG8	=	0xe62c
                    E630   1827 _CONTROL_CONFIG9	=	0xe630
                    E634   1828 _CON_CAL_STEP_SIZE1	=	0xe634
                    E638   1829 _CON_CAL_STEP_SIZE2	=	0xe638
                    E63C   1830 _CON_CAL_STEP_SIZE3	=	0xe63c
                    E640   1831 _CON_CAL_STEP_SIZE4	=	0xe640
                    E644   1832 _CON_CAL_STEP_SIZE5	=	0xe644
                    E648   1833 _CAL_TIME_OUT_AND_DIS	=	0xe648
                    E64C   1834 _CAL_STATUS_READ	=	0xe64c
                    E650   1835 _MCU_CONFIG	=	0xe650
                    E654   1836 _CAL_DATA1	=	0xe654
                    E658   1837 _LOOP_CNTS	=	0xe658
                    E65C   1838 _MCU_CONFIG1	=	0xe65c
                    E660   1839 _TIMER_SEL1	=	0xe660
                    E664   1840 _TIMER_SEL2	=	0xe664
                    E668   1841 _TIMER_SEL3	=	0xe668
                    E66C   1842 _G_SELLV_TXCLK	=	0xe66c
                    E670   1843 _G_SELLV_TXDATA	=	0xe670
                    E674   1844 _G_SELLV_TXPRE	=	0xe674
                    E678   1845 _G_SELLV_RXEOMCLK	=	0xe678
                    E67C   1846 _G_SELLV_RXDATACLK	=	0xe67c
                    E680   1847 _G_SELLV_RXSAMPLER	=	0xe680
                    E684   1848 _SAS_PRESET0_TB	=	0xe684
                    E688   1849 _SAS_PRESET1_TB	=	0xe688
                    E68C   1850 _SAS_PRESET2_TB	=	0xe68c
                    E690   1851 _ETH_PRESET0_TB	=	0xe690
                    E694   1852 _ETH_PRESET1_TB	=	0xe694
                    E698   1853 _TX_SAVE_0	=	0xe698
                    E69C   1854 _TX_SAVE_1	=	0xe69c
                    E6A0   1855 _TX_SAVE_2	=	0xe6a0
                    E6A4   1856 _TX_SAVE_3	=	0xe6a4
                    E6A8   1857 _TX_SAVE_4	=	0xe6a8
                    E6AC   1858 _CDS_EYE_CLK_THR	=	0xe6ac
                    E6B0   1859 _SYNC_INFO	=	0xe6b0
                    E6B4   1860 _MCU_INFO_4	=	0xe6b4
                    E6B8   1861 _MCU_INFO_5	=	0xe6b8
                    E6BC   1862 _MCU_INFO_12	=	0xe6bc
                    E6C0   1863 _MCU_INFO_13	=	0xe6c0
                    E6C4   1864 _END_XDAT_CMN	=	0xe6c4
                    2600   1865 _DME_ENC_REG0	=	0x2600
                    2604   1866 _DME_ENC_REG1	=	0x2604
                    2608   1867 _DME_ENC_REG2	=	0x2608
                    260C   1868 _DME_DEC_REG0	=	0x260c
                    2610   1869 _DME_DEC_REG1	=	0x2610
                    2614   1870 _TX_TRAIN_IF_REG0	=	0x2614
                    2618   1871 _TX_TRAIN_IF_REG1	=	0x2618
                    261C   1872 _TX_TRAIN_IF_REG2	=	0x261c
                    2620   1873 _TX_TRAIN_IF_REG3	=	0x2620
                    2624   1874 _TX_TRAIN_PATTTERN_REG0	=	0x2624
                    2628   1875 _TX_TRAIN_DRIVER_REG0	=	0x2628
                    262C   1876 _TX_TRAIN_DRIVER_REG1	=	0x262c
                    2630   1877 _TX_TRAIN_DRIVER_REG2	=	0x2630
                    2634   1878 _TX_TRAIN_DEFAULT_REG0	=	0x2634
                    2638   1879 _TX_TRAIN_DEFAULT_REG1	=	0x2638
                    263C   1880 _TX_TRAIN_DEFAULT_REG2	=	0x263c
                    2640   1881 _TX_TRAIN_DEFAULT_REG3	=	0x2640
                    2644   1882 _TX_TRAIN_DEFAULT_REG4	=	0x2644
                    2648   1883 _TX_TRAIN_DEFAULT_REG5	=	0x2648
                    264C   1884 _TX_EMPH_CTRL_REG0	=	0x264c
                    2650   1885 _LINK_TRAIN_MODE0	=	0x2650
                    2654   1886 _TX_DRV_RD_OUT_REG0	=	0x2654
                    2658   1887 _TX_AMP_CTRL_REG0	=	0x2658
                    265C   1888 _TRX_TRAIN_IF_INTERRUPT_LANE	=	0x265c
                    2660   1889 _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE	=	0x2660
                    2664   1890 _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE	=	0x2664
                    2668   1891 _TX_TRAIN_IF_REG4	=	0x2668
                    266C   1892 _TX_TRAIN_IF_REG5	=	0x266c
                    2670   1893 _TX_TRAIN_IF_REG6	=	0x2670
                    2674   1894 _TX_TRAIN_IF_REG7	=	0x2674
                    2678   1895 _TX_TRAIN_CTRL_LANE	=	0x2678
                    267C   1896 _TX_TRAIN_IF_REG8	=	0x267c
                    6100   1897 _DFE_READ_EVEN_REG0	=	0x6100
                    6104   1898 _DFE_READ_EVEN_REG1	=	0x6104
                    6108   1899 _DFE_READ_EVEN_REG2	=	0x6108
                    610C   1900 _DFE_READ_EVEN_REG3	=	0x610c
                    6110   1901 _DFE_READ_EVEN_REG4	=	0x6110
                    6114   1902 _DFE_READ_EVEN_REG5	=	0x6114
                    6118   1903 _DFE_READ_EVEN_REG6	=	0x6118
                    611C   1904 _DFE_READ_EVEN_REG7	=	0x611c
                    6120   1905 _DFE_READ_ODD_REG0	=	0x6120
                    6124   1906 _DFE_READ_ODD_REG1	=	0x6124
                    6128   1907 _DFE_READ_ODD_REG2	=	0x6128
                    612C   1908 _DFE_READ_ODD_REG3	=	0x612c
                    6130   1909 _DFE_READ_ODD_REG4	=	0x6130
                    6134   1910 _DFE_READ_ODD_REG5	=	0x6134
                    6138   1911 _DFE_READ_ODD_REG6	=	0x6138
                    613C   1912 _DFE_READ_ODD_REG7	=	0x613c
                    6140   1913 _DFE_READ_EVEN_REG8	=	0x6140
                    6144   1914 _DFE_READ_ODD_REG8	=	0x6144
                    6148   1915 _DFE_READ_F0A_EVEN	=	0x6148
                    614C   1916 _DFE_READ_F0A_ODD	=	0x614c
                    6150   1917 _DFE_READ_F0B_EVEN	=	0x6150
                    6154   1918 _DFE_READ_F0B_ODD	=	0x6154
                    6158   1919 _DFE_READ_F0D_EVEN	=	0x6158
                    615C   1920 _DFE_READ_F0D_ODD	=	0x615c
                    6160   1921 _DFE_READ_F0D_LEFT_EVEN	=	0x6160
                    6164   1922 _DFE_READ_F0D_LEFT_ODD	=	0x6164
                    6168   1923 _DFE_READ_F0D_RIGHT_EVEN	=	0x6168
                    616C   1924 _DFE_READ_F0D_RIGHT_ODD	=	0x616c
                    6170   1925 _CDS_READ_MISC0	=	0x6170
                    6174   1926 _CDS_READ_MISC1	=	0x6174
                    6214   1927 _TXTRAIN_IF_REG0	=	0x6214
                    E000   1928 _lc_speedtable	=	0xe000
                    E1C0   1929 _ring_speedtable	=	0xe1c0
                    E5C0   1930 _phy_mode_cmn_table	=	0xe5c0
                    6300   1931 _max_gen	=	0x6300
                    6301   1932 _min_gen	=	0x6301
                    6304   1933 _speedtable	=	0x6304
                    65D4   1934 _phy_mode_lane_table	=	0x65d4
                    60B4   1935 _rc_save	=	0x60b4
                    60D0   1936 _txffe_save	=	0x60d0
                    60E4   1937 _phase_save	=	0x60e4
                    6030   1938 _train_gn1_index	=	0x6030
                    6031   1939 _train_g1_index	=	0x6031
                    6032   1940 _train_g0_index	=	0x6032
                    E6B0   1941 _local_tx_preset_tb	=	0xe6b0
                    E5C1   1942 _cmx_cal_lcvco_dac	=	0xe5c1
                    E5C1   1943 _cmx_cal_lcvco_dac_lsb	=	0xe5c1
                    E5C4   1944 _cmx_cal_lcvco_dac_msb	=	0xe5c4
                    E5CA   1945 _cmx_cal_lccap_msb	=	0xe5ca
                    E5C8   1946 _cmx_cal_lccap_lsb	=	0xe5c8
                    E5CC   1947 _cmx_cal_plldcc	=	0xe5cc
                    E5D0   1948 _cmx_cal_pll_speed_ring	=	0xe5d0
                    E5D4   1949 _cmx_cal_pll_sllp_dac_coarse_ring	=	0xe5d4
                    E5D8   1950 _cmx_cal_sllp_dac_fine_ring	=	0xe5d8
                    65D4   1951 _lnx_cal_txdcc_pdiv	=	0x65d4
                    65D8   1952 _lnx_cal_txdcc_pdiv_hg	=	0x65d8
                    65DA   1953 _lnx_cal_txdcc	=	0x65da
                    65DE   1954 _lnx_cal_txdcc_hg	=	0x65de
                    65E0   1955 _lnx_cal_rxdcc_dll	=	0x65e0
                    65E4   1956 _lnx_cal_rxdcc_dll_hg	=	0x65e4
                    65E6   1957 _lnx_cal_rxdcc_data	=	0x65e6
                    65F0   1958 _lnx_cal_rxdcc_data_hg	=	0x65f0
                    65F5   1959 _lnx_cal_rxdcc_eom	=	0x65f5
                    65FF   1960 _lnx_cal_rxdcc_eom_hg	=	0x65ff
                    6604   1961 _lnx_cal_dll_gmsel	=	0x6604
                    6606   1962 _lnx_cal_vdda_dll_sel	=	0x6606
                    660A   1963 _lnx_cal_dll_eom_gmsel	=	0x660a
                    660C   1964 _lnx_cal_vdda_dll_eom_sel	=	0x660c
                    6610   1965 _lnx_cal_eom_dpher	=	0x6610
                    6612   1966 _lnx_cal_align90_dummy_clk	=	0x6612
                    661A   1967 _lnx_cal_align90_dac	=	0x661a
                    6622   1968 _lnx_cal_align90_gm	=	0x6622
                    662A   1969 _lnx_cal_sellv_txdata	=	0x662a
                    6634   1970 _lnx_cal_sellv_txclk	=	0x6634
                    663E   1971 _lnx_cal_sellv_rxdataclk	=	0x663e
                    6648   1972 _lnx_cal_sellv_txpre	=	0x6648
                    6652   1973 _lnx_cal_sellv_rxsampler	=	0x6652
                    665C   1974 _lnx_cal_sellv_rxeomclk	=	0x665c
                    6666   1975 _lnx_spdoft_tx_preset_index_lane	=	0x6666
                    6490   1976 _lnx_calx_txdcc_pdiv	=	0x6490
                    6496   1977 _lnx_calx_txdcc_pdiv_hg	=	0x6496
                    6499   1978 _lnx_calx_txdcc	=	0x6499
                    649F   1979 _lnx_calx_txdcc_hg	=	0x649f
                    64A2   1980 _lnx_calx_rxdcc_dll	=	0x64a2
                    64A8   1981 _lnx_calx_rxdcc_dll_hg	=	0x64a8
                    64AB   1982 _lnx_calx_dll_gmsel	=	0x64ab
                    64AE   1983 _lnx_calx_vdda_dll_sel	=	0x64ae
                    64B4   1984 _lnx_calx_dll_eom_gmsel	=	0x64b4
                    64B7   1985 _lnx_calx_vdda_dll_eom_sel	=	0x64b7
                    64BD   1986 _lnx_calx_eom_dpher	=	0x64bd
                    64C0   1987 _lnx_calx_align90_dummy_clk	=	0x64c0
                    64CC   1988 _lnx_calx_align90_dac	=	0x64cc
                    64D8   1989 _lnx_calx_align90_gm	=	0x64d8
                    6100   1990 _cds28	=	0x6100
                    6178   1991 _dfe_sm	=	0x6178
                    61B8   1992 _dfe_sm_dc	=	0x61b8
                    61C0   1993 _dfe_sm_save	=	0x61c0
                    03FC   1994 _UPHY_ANAREG_REV_0	=	0x03fc
                    E684   1995 _tx_tb	=	0xe684
                    E698   1996 _train_save_tb	=	0xe698
                    607C   1997 _sq_thrs_ratio_tb	=	0x607c
                           1998 ;--------------------------------------------------------
                           1999 ; absolute external ram data
                           2000 ;--------------------------------------------------------
                           2001 	.area XABS    (ABS,XDATA)
                           2002 ;--------------------------------------------------------
                           2003 ; external initialized ram data
                           2004 ;--------------------------------------------------------
                           2005 	.area HOME    (CODE)
                           2006 	.area GSINIT0 (CODE)
                           2007 	.area GSINIT1 (CODE)
                           2008 	.area GSINIT2 (CODE)
                           2009 	.area GSINIT3 (CODE)
                           2010 	.area GSINIT4 (CODE)
                           2011 	.area GSINIT5 (CODE)
                           2012 	.area GSINIT  (CODE)
                           2013 	.area GSFINAL (CODE)
                           2014 	.area CSEG    (CODE)
                           2015 ;--------------------------------------------------------
                           2016 ; global & static initialisations
                           2017 ;--------------------------------------------------------
                           2018 	.area HOME    (CODE)
                           2019 	.area GSINIT  (CODE)
                           2020 	.area GSFINAL (CODE)
                           2021 	.area GSINIT  (CODE)
                           2022 ;--------------------------------------------------------
                           2023 ; Home
                           2024 ;--------------------------------------------------------
                           2025 	.area HOME    (CODE)
                           2026 	.area HOME    (CODE)
                           2027 ;--------------------------------------------------------
                           2028 ; code
                           2029 ;--------------------------------------------------------
                           2030 	.area BANK2   (CODE)
                           2031 ;------------------------------------------------------------
                           2032 ;Allocation info for local variables in function 'dll_comp_cal'
                           2033 ;------------------------------------------------------------
                           2034 ;dir                       Allocated to registers r2 
                           2035 ;cmpout                    Allocated to registers r3 
                           2036 ;------------------------------------------------------------
                           2037 ;	../../shared/src/dll_cal_rom.c:40: void dll_comp_cal( void ) BANKING_CTRL {
                           2038 ;	-----------------------------------------
                           2039 ;	 function dll_comp_cal
                           2040 ;	-----------------------------------------
   AA4D                    2041 _dll_comp_cal:
                    0002   2042 	ar2 = 0x02
                    0003   2043 	ar3 = 0x03
                    0004   2044 	ar4 = 0x04
                    0005   2045 	ar5 = 0x05
                    0006   2046 	ar6 = 0x06
                    0007   2047 	ar7 = 0x07
                    0000   2048 	ar0 = 0x00
                    0001   2049 	ar1 = 0x01
                           2050 ;	../../shared/src/dll_cal_rom.c:44: lnx_DLL_COMP_CAL_DONE_LANE = 0;
   AA4D 90 60 00           2051 	mov	dptr,#_CAL_CTRL1_LANE
   AA50 E0                 2052 	movx	a,@dptr
   AA51 54 FE              2053 	anl	a,#0xfe
   AA53 F0                 2054 	movx	@dptr,a
                           2055 ;	../../shared/src/dll_cal_rom.c:46: if( LOAD_CAL_ON || cmx_RXDLL_CAL_EXT_EN) {	
   AA54 90 60 08           2056 	mov	dptr,#_CAL_CTRL3_LANE
   AA57 E0                 2057 	movx	a,@dptr
   AA58 70 07              2058 	jnz	00101$
   AA5A 90 E6 09           2059 	mov	dptr,#(_CONTROL_CONFIG1 + 0x0001)
   AA5D E0                 2060 	movx	a,@dptr
   AA5E 30 E4 16           2061 	jnb	acc.4,00102$
   AA61                    2062 00101$:
                           2063 ;	../../shared/src/dll_cal_rom.c:47: DLL_CMP_OFFSET = lnx_CAL_DLL_CMP_OFFSET_LANE_7_0;	
   AA61 90 60 10           2064 	mov	dptr,#_CAL_SAVE_DATA1_LANE
   AA64 E0                 2065 	movx	a,@dptr
   AA65 FA                 2066 	mov	r2,a
   AA66 90 00 20           2067 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_8
   AA69 C4                 2068 	swap	a
   AA6A 54 F0              2069 	anl	a,#(0xf0&0xf0)
   AA6C F5 F0              2070 	mov	b,a
   AA6E E0                 2071 	movx	a,@dptr
   AA6F 54 0F              2072 	anl	a,#0x0f
   AA71 45 F0              2073 	orl	a,b
   AA73 F0                 2074 	movx	@dptr,a
                           2075 ;	../../shared/src/dll_cal_rom.c:48: goto skip_out;
   AA74 02 AB 2A           2076 	ljmp	00115$
   AA77                    2077 00102$:
                           2078 ;	../../shared/src/dll_cal_rom.c:51: PHY_STATUS = ST_DLL_COMP_CAL;
   AA77 90 22 30           2079 	mov	dptr,#_MCU_STATUS0_LANE
   AA7A 74 09              2080 	mov	a,#0x09
   AA7C F0                 2081 	movx	@dptr,a
                           2082 ;	../../shared/src/dll_cal_rom.c:53: lnx_DLL_COMP_CAL_PASS_LANE = 1;
   AA7D 90 60 04           2083 	mov	dptr,#_CAL_CTRL2_LANE
   AA80 E0                 2084 	movx	a,@dptr
   AA81 44 01              2085 	orl	a,#0x01
   AA83 F0                 2086 	movx	@dptr,a
                           2087 ;	../../shared/src/dll_cal_rom.c:55: DLL_CMP_CAL_EN = 1;
   AA84 90 00 2C           2088 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_11
   AA87 E0                 2089 	movx	a,@dptr
   AA88 44 80              2090 	orl	a,#0x80
   AA8A F0                 2091 	movx	@dptr,a
                           2092 ;	../../shared/src/dll_cal_rom.c:56: DLL_CMP_OFFSET = 0x08;
   AA8B 90 00 20           2093 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_8
   AA8E E0                 2094 	movx	a,@dptr
   AA8F 54 0F              2095 	anl	a,#0x0f
   AA91 44 80              2096 	orl	a,#0x80
   AA93 F0                 2097 	movx	@dptr,a
                           2098 ;	../../shared/src/dll_cal_rom.c:57: delay01(10);
   AA94 90 00 0A           2099 	mov	dptr,#0x000A
   AA97 78 16              2100 	mov	r0,#_delay01
   AA99 79 BC              2101 	mov	r1,#(_delay01 >> 8)
   AA9B 7A 02              2102 	mov	r2,#(_delay01 >> 16)
   AA9D 12 00 B3           2103 	lcall	__sdcc_banked_call
                           2104 ;	../../shared/src/dll_cal_rom.c:58: dir = DLL_CAL_CMP_OUT; cmpout = dir;
   AAA0 90 21 50           2105 	mov	dptr,#_RX_CALIBRATION_REG
   AAA3 E0                 2106 	movx	a,@dptr
   AAA4 03                 2107 	rr	a
   AAA5 54 01              2108 	anl	a,#0x01
   AAA7 FA                 2109 	mov	r2,a
   AAA8 FB                 2110 	mov	r3,a
                           2111 ;	../../shared/src/dll_cal_rom.c:60: do {
   AAA9                    2112 00112$:
                           2113 ;	../../shared/src/dll_cal_rom.c:62: if( cmpout == 0) DLL_CMP_OFFSET--; 
   AAA9 EB                 2114 	mov	a,r3
   AAAA 70 1A              2115 	jnz	00105$
   AAAC 90 00 20           2116 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_8
   AAAF E0                 2117 	movx	a,@dptr
   AAB0 C4                 2118 	swap	a
   AAB1 54 0F              2119 	anl	a,#0x0f
   AAB3 FC                 2120 	mov	r4,a
   AAB4 1C                 2121 	dec	r4
   AAB5 90 00 20           2122 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_8
   AAB8 EC                 2123 	mov	a,r4
   AAB9 C4                 2124 	swap	a
   AABA 54 F0              2125 	anl	a,#(0xf0&0xf0)
   AABC F5 F0              2126 	mov	b,a
   AABE E0                 2127 	movx	a,@dptr
   AABF 54 0F              2128 	anl	a,#0x0f
   AAC1 45 F0              2129 	orl	a,b
   AAC3 F0                 2130 	movx	@dptr,a
   AAC4 80 18              2131 	sjmp	00106$
   AAC6                    2132 00105$:
                           2133 ;	../../shared/src/dll_cal_rom.c:63: else DLL_CMP_OFFSET++; 				
   AAC6 90 00 20           2134 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_8
   AAC9 E0                 2135 	movx	a,@dptr
   AACA C4                 2136 	swap	a
   AACB 54 0F              2137 	anl	a,#0x0f
   AACD FC                 2138 	mov	r4,a
   AACE 0C                 2139 	inc	r4
   AACF 90 00 20           2140 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_8
   AAD2 EC                 2141 	mov	a,r4
   AAD3 C4                 2142 	swap	a
   AAD4 54 F0              2143 	anl	a,#(0xf0&0xf0)
   AAD6 F5 F0              2144 	mov	b,a
   AAD8 E0                 2145 	movx	a,@dptr
   AAD9 54 0F              2146 	anl	a,#0x0f
   AADB 45 F0              2147 	orl	a,b
   AADD F0                 2148 	movx	@dptr,a
   AADE                    2149 00106$:
                           2150 ;	../../shared/src/dll_cal_rom.c:64: delay01(10);
   AADE 90 00 0A           2151 	mov	dptr,#0x000A
   AAE1 C0 02              2152 	push	ar2
   AAE3 78 16              2153 	mov	r0,#_delay01
   AAE5 79 BC              2154 	mov	r1,#(_delay01 >> 8)
   AAE7 7A 02              2155 	mov	r2,#(_delay01 >> 16)
   AAE9 12 00 B3           2156 	lcall	__sdcc_banked_call
   AAEC D0 02              2157 	pop	ar2
                           2158 ;	../../shared/src/dll_cal_rom.c:66: cmpout = DLL_CAL_CMP_OUT;
   AAEE 90 21 50           2159 	mov	dptr,#_RX_CALIBRATION_REG
   AAF1 E0                 2160 	movx	a,@dptr
   AAF2 03                 2161 	rr	a
   AAF3 54 01              2162 	anl	a,#0x01
   AAF5 FC                 2163 	mov	r4,a
   AAF6 FB                 2164 	mov	r3,a
                           2165 ;	../../shared/src/dll_cal_rom.c:67: if(dir != cmpout) break;
   AAF7 EA                 2166 	mov	a,r2
   AAF8 B5 03 1C           2167 	cjne	a,ar3,00114$
                           2168 ;	../../shared/src/dll_cal_rom.c:69: if (DLL_CMP_OFFSET == 0x0f ||  DLL_CMP_OFFSET == 0 ) {
   AAFB 90 00 20           2169 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_8
   AAFE E0                 2170 	movx	a,@dptr
   AAFF C4                 2171 	swap	a
   AB00 54 0F              2172 	anl	a,#0x0f
   AB02 FC                 2173 	mov	r4,a
   AB03 BC 0F 02           2174 	cjne	r4,#0x0F,00128$
   AB06 80 08              2175 	sjmp	00109$
   AB08                    2176 00128$:
   AB08 90 00 20           2177 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_8
   AB0B E0                 2178 	movx	a,@dptr
   AB0C 54 F0              2179 	anl	a,#0xf0
   AB0E 70 99              2180 	jnz	00112$
   AB10                    2181 00109$:
                           2182 ;	../../shared/src/dll_cal_rom.c:70: lnx_DLL_COMP_CAL_PASS_LANE = 0;
   AB10 90 60 04           2183 	mov	dptr,#_CAL_CTRL2_LANE
   AB13 E0                 2184 	movx	a,@dptr
   AB14 54 FE              2185 	anl	a,#0xfe
   AB16 F0                 2186 	movx	@dptr,a
                           2187 ;	../../shared/src/dll_cal_rom.c:74: } while(1);
   AB17                    2188 00114$:
                           2189 ;	../../shared/src/dll_cal_rom.c:76: DLL_CMP_CAL_EN = 0;
   AB17 90 00 2C           2190 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_11
   AB1A E0                 2191 	movx	a,@dptr
   AB1B 54 7F              2192 	anl	a,#0x7f
   AB1D F0                 2193 	movx	@dptr,a
                           2194 ;	../../shared/src/dll_cal_rom.c:77: lnx_CAL_DLL_CMP_OFFSET_LANE_7_0 = DLL_CMP_OFFSET; 
   AB1E 90 00 20           2195 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_8
   AB21 E0                 2196 	movx	a,@dptr
   AB22 C4                 2197 	swap	a
   AB23 54 0F              2198 	anl	a,#0x0f
   AB25 FA                 2199 	mov	r2,a
   AB26 90 60 10           2200 	mov	dptr,#_CAL_SAVE_DATA1_LANE
   AB29 F0                 2201 	movx	@dptr,a
                           2202 ;	../../shared/src/dll_cal_rom.c:79: skip_out:
   AB2A                    2203 00115$:
                           2204 ;	../../shared/src/dll_cal_rom.c:80: lnx_DLL_COMP_CAL_DONE_LANE = 1;
   AB2A 90 60 00           2205 	mov	dptr,#_CAL_CTRL1_LANE
   AB2D E0                 2206 	movx	a,@dptr
   AB2E 44 01              2207 	orl	a,#0x01
   AB30 F0                 2208 	movx	@dptr,a
   AB31 02 00 C5           2209 	ljmp	__sdcc_banked_ret
                           2210 ;------------------------------------------------------------
                           2211 ;Allocation info for local variables in function 'dll_gm_cal'
                           2212 ;------------------------------------------------------------
                           2213 ;dir                       Allocated to registers r2 
                           2214 ;pre_dll_gmsel             Allocated to registers r5 
                           2215 ;loop_cnt                  Allocated to registers r4 
                           2216 ;cmpout                    Allocated to registers r3 
                           2217 ;------------------------------------------------------------
                           2218 ;	../../shared/src/dll_cal_rom.c:96: void dll_gm_cal( void ) BANKING_CTRL {
                           2219 ;	-----------------------------------------
                           2220 ;	 function dll_gm_cal
                           2221 ;	-----------------------------------------
   AB34                    2222 _dll_gm_cal:
                           2223 ;	../../shared/src/dll_cal_rom.c:99: PHY_STATUS = ST_DLL_GM_CAL;
   AB34 90 22 30           2224 	mov	dptr,#_MCU_STATUS0_LANE
   AB37 74 0A              2225 	mov	a,#0x0A
   AB39 F0                 2226 	movx	@dptr,a
                           2227 ;	../../shared/src/dll_cal_rom.c:101: lnx_DLL_GM_CAL_DONE_LANE = 0;
   AB3A 90 60 00           2228 	mov	dptr,#_CAL_CTRL1_LANE
   AB3D E0                 2229 	movx	a,@dptr
   AB3E 54 FD              2230 	anl	a,#0xfd
   AB40 F0                 2231 	movx	@dptr,a
                           2232 ;	../../shared/src/dll_cal_rom.c:103: if(cmx_RXDLL_CAL_EXT_EN || LOAD_CAL_ON) {	
   AB41 90 E6 09           2233 	mov	dptr,#(_CONTROL_CONFIG1 + 0x0001)
   AB44 E0                 2234 	movx	a,@dptr
   AB45 20 E4 06           2235 	jb	acc.4,00101$
   AB48 90 60 08           2236 	mov	dptr,#_CAL_CTRL3_LANE
   AB4B E0                 2237 	movx	a,@dptr
   AB4C 60 28              2238 	jz	00102$
   AB4E                    2239 00101$:
                           2240 ;	../../shared/src/dll_cal_rom.c:104: DLL_GMSEL = lnx_cal_dll_gmsel[rate];	
   AB4E A2 0E              2241 	mov	c,_rx_pll_rate
   AB50 E4                 2242 	clr	a
   AB51 33                 2243 	rlc	a
   AB52 24 04              2244 	add	a,#_lnx_cal_dll_gmsel
   AB54 F5 82              2245 	mov	dpl,a
   AB56 E4                 2246 	clr	a
   AB57 34 66              2247 	addc	a,#(_lnx_cal_dll_gmsel >> 8)
   AB59 F5 83              2248 	mov	dph,a
   AB5B E0                 2249 	movx	a,@dptr
   AB5C FA                 2250 	mov	r2,a
   AB5D 90 00 1C           2251 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_7
   AB60 C4                 2252 	swap	a
   AB61 03                 2253 	rr	a
   AB62 54 38              2254 	anl	a,#(0xf8&0x38)
   AB64 F5 F0              2255 	mov	b,a
   AB66 E0                 2256 	movx	a,@dptr
   AB67 54 C7              2257 	anl	a,#0xc7
   AB69 45 F0              2258 	orl	a,b
   AB6B F0                 2259 	movx	@dptr,a
                           2260 ;	../../shared/src/dll_cal_rom.c:105: lnx_DLL_GM_CAL_DONE_LANE = 1;
   AB6C 90 60 00           2261 	mov	dptr,#_CAL_CTRL1_LANE
   AB6F E0                 2262 	movx	a,@dptr
   AB70 44 02              2263 	orl	a,#0x02
   AB72 F0                 2264 	movx	@dptr,a
                           2265 ;	../../shared/src/dll_cal_rom.c:106: return;
   AB73 02 AC 92           2266 	ljmp	00119$
   AB76                    2267 00102$:
                           2268 ;	../../shared/src/dll_cal_rom.c:109: lnx_DLL_GM_CAL_PASS_LANE = 1;
   AB76 90 60 04           2269 	mov	dptr,#_CAL_CTRL2_LANE
   AB79 E0                 2270 	movx	a,@dptr
   AB7A 44 02              2271 	orl	a,#0x02
   AB7C F0                 2272 	movx	@dptr,a
                           2273 ;	../../shared/src/dll_cal_rom.c:111: DLL_PD_SEL = 0;
   AB7D 90 00 20           2274 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_8
   AB80 E0                 2275 	movx	a,@dptr
   AB81 54 F3              2276 	anl	a,#0xf3
   AB83 F0                 2277 	movx	@dptr,a
                           2278 ;	../../shared/src/dll_cal_rom.c:113: DLL_GMSEL = 0x07;
   AB84 90 00 1C           2279 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_7
   AB87 E0                 2280 	movx	a,@dptr
   AB88 44 38              2281 	orl	a,#0x38
   AB8A F0                 2282 	movx	@dptr,a
                           2283 ;	../../shared/src/dll_cal_rom.c:114: delay01(10);
   AB8B 90 00 0A           2284 	mov	dptr,#0x000A
   AB8E 78 16              2285 	mov	r0,#_delay01
   AB90 79 BC              2286 	mov	r1,#(_delay01 >> 8)
   AB92 7A 02              2287 	mov	r2,#(_delay01 >> 16)
   AB94 12 00 B3           2288 	lcall	__sdcc_banked_call
                           2289 ;	../../shared/src/dll_cal_rom.c:116: dir = DLL_CAL_CMP_OUT; cmpout = dir;
   AB97 90 21 50           2290 	mov	dptr,#_RX_CALIBRATION_REG
   AB9A E0                 2291 	movx	a,@dptr
   AB9B 03                 2292 	rr	a
   AB9C 54 01              2293 	anl	a,#0x01
   AB9E FA                 2294 	mov	r2,a
   AB9F FB                 2295 	mov	r3,a
                           2296 ;	../../shared/src/dll_cal_rom.c:119: do {
   ABA0 7C 08              2297 	mov	r4,#0x08
   ABA2                    2298 00116$:
                           2299 ;	../../shared/src/dll_cal_rom.c:120: pre_dll_gmsel = DLL_GMSEL;
   ABA2 90 00 1C           2300 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_7
   ABA5 E0                 2301 	movx	a,@dptr
   ABA6 C4                 2302 	swap	a
   ABA7 23                 2303 	rl	a
   ABA8 54 07              2304 	anl	a,#0x07
   ABAA FD                 2305 	mov	r5,a
                           2306 ;	../../shared/src/dll_cal_rom.c:122: if( cmpout == 0 )  {
   ABAB EB                 2307 	mov	a,r3
   ABAC 70 31              2308 	jnz	00109$
                           2309 ;	../../shared/src/dll_cal_rom.c:123: if(DLL_GMSEL>lnx_DLL_GMSEL_MIN_LANE_3_0) DLL_GMSEL--;
   ABAE 90 00 1C           2310 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_7
   ABB1 E0                 2311 	movx	a,@dptr
   ABB2 C4                 2312 	swap	a
   ABB3 23                 2313 	rl	a
   ABB4 54 07              2314 	anl	a,#0x07
   ABB6 FE                 2315 	mov	r6,a
   ABB7 90 60 65           2316 	mov	dptr,#(_DLL_CAL + 0x0001)
   ABBA E0                 2317 	movx	a,@dptr
   ABBB 54 0F              2318 	anl	a,#0x0f
   ABBD FF                 2319 	mov	r7,a
   ABBE B5 06 00           2320 	cjne	a,ar6,00131$
   ABC1                    2321 00131$:
   ABC1 50 46              2322 	jnc	00110$
   ABC3 90 00 1C           2323 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_7
   ABC6 E0                 2324 	movx	a,@dptr
   ABC7 C4                 2325 	swap	a
   ABC8 23                 2326 	rl	a
   ABC9 54 07              2327 	anl	a,#0x07
   ABCB FE                 2328 	mov	r6,a
   ABCC 1E                 2329 	dec	r6
   ABCD 90 00 1C           2330 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_7
   ABD0 EE                 2331 	mov	a,r6
   ABD1 C4                 2332 	swap	a
   ABD2 03                 2333 	rr	a
   ABD3 54 38              2334 	anl	a,#(0xf8&0x38)
   ABD5 F5 F0              2335 	mov	b,a
   ABD7 E0                 2336 	movx	a,@dptr
   ABD8 54 C7              2337 	anl	a,#0xc7
   ABDA 45 F0              2338 	orl	a,b
   ABDC F0                 2339 	movx	@dptr,a
   ABDD 80 2A              2340 	sjmp	00110$
   ABDF                    2341 00109$:
                           2342 ;	../../shared/src/dll_cal_rom.c:126: if(DLL_GMSEL<7) DLL_GMSEL++;
   ABDF 90 00 1C           2343 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_7
   ABE2 E0                 2344 	movx	a,@dptr
   ABE3 C4                 2345 	swap	a
   ABE4 23                 2346 	rl	a
   ABE5 54 07              2347 	anl	a,#0x07
   ABE7 FE                 2348 	mov	r6,a
   ABE8 C3                 2349 	clr	c
   ABE9 64 80              2350 	xrl	a,#0x80
   ABEB 94 87              2351 	subb	a,#0x87
   ABED 50 1A              2352 	jnc	00110$
   ABEF 90 00 1C           2353 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_7
   ABF2 E0                 2354 	movx	a,@dptr
   ABF3 C4                 2355 	swap	a
   ABF4 23                 2356 	rl	a
   ABF5 54 07              2357 	anl	a,#0x07
   ABF7 FE                 2358 	mov	r6,a
   ABF8 0E                 2359 	inc	r6
   ABF9 90 00 1C           2360 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_7
   ABFC EE                 2361 	mov	a,r6
   ABFD C4                 2362 	swap	a
   ABFE 03                 2363 	rr	a
   ABFF 54 38              2364 	anl	a,#(0xf8&0x38)
   AC01 F5 F0              2365 	mov	b,a
   AC03 E0                 2366 	movx	a,@dptr
   AC04 54 C7              2367 	anl	a,#0xc7
   AC06 45 F0              2368 	orl	a,b
   AC08 F0                 2369 	movx	@dptr,a
   AC09                    2370 00110$:
                           2371 ;	../../shared/src/dll_cal_rom.c:128: delay01(10);
   AC09 90 00 0A           2372 	mov	dptr,#0x000A
   AC0C C0 02              2373 	push	ar2
   AC0E C0 04              2374 	push	ar4
   AC10 C0 05              2375 	push	ar5
   AC12 78 16              2376 	mov	r0,#_delay01
   AC14 79 BC              2377 	mov	r1,#(_delay01 >> 8)
   AC16 7A 02              2378 	mov	r2,#(_delay01 >> 16)
   AC18 12 00 B3           2379 	lcall	__sdcc_banked_call
   AC1B D0 05              2380 	pop	ar5
   AC1D D0 04              2381 	pop	ar4
   AC1F D0 02              2382 	pop	ar2
                           2383 ;	../../shared/src/dll_cal_rom.c:130: cmpout = DLL_CAL_CMP_OUT;
   AC21 90 21 50           2384 	mov	dptr,#_RX_CALIBRATION_REG
   AC24 E0                 2385 	movx	a,@dptr
   AC25 03                 2386 	rr	a
   AC26 54 01              2387 	anl	a,#0x01
   AC28 FE                 2388 	mov	r6,a
   AC29 FB                 2389 	mov	r3,a
                           2390 ;	../../shared/src/dll_cal_rom.c:131: if(dir != cmpout) {
   AC2A EA                 2391 	mov	a,r2
   AC2B B5 03 02           2392 	cjne	a,ar3,00134$
   AC2E 80 12              2393 	sjmp	00112$
   AC30                    2394 00134$:
                           2395 ;	../../shared/src/dll_cal_rom.c:132: DLL_GMSEL = pre_dll_gmsel;
   AC30 90 00 1C           2396 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_7
   AC33 ED                 2397 	mov	a,r5
   AC34 C4                 2398 	swap	a
   AC35 03                 2399 	rr	a
   AC36 54 38              2400 	anl	a,#(0xf8&0x38)
   AC38 F5 F0              2401 	mov	b,a
   AC3A E0                 2402 	movx	a,@dptr
   AC3B 54 C7              2403 	anl	a,#0xc7
   AC3D 45 F0              2404 	orl	a,b
   AC3F F0                 2405 	movx	@dptr,a
                           2406 ;	../../shared/src/dll_cal_rom.c:133: break;
   AC40 80 2C              2407 	sjmp	00118$
   AC42                    2408 00112$:
                           2409 ;	../../shared/src/dll_cal_rom.c:136: if( DLL_GMSEL==0x07 || DLL_GMSEL==0x03 ) {
   AC42 90 00 1C           2410 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_7
   AC45 E0                 2411 	movx	a,@dptr
   AC46 C4                 2412 	swap	a
   AC47 23                 2413 	rl	a
   AC48 54 07              2414 	anl	a,#0x07
   AC4A FD                 2415 	mov	r5,a
   AC4B BD 07 02           2416 	cjne	r5,#0x07,00135$
   AC4E 80 0C              2417 	sjmp	00113$
   AC50                    2418 00135$:
   AC50 90 00 1C           2419 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_7
   AC53 E0                 2420 	movx	a,@dptr
   AC54 C4                 2421 	swap	a
   AC55 23                 2422 	rl	a
   AC56 54 07              2423 	anl	a,#0x07
   AC58 FD                 2424 	mov	r5,a
   AC59 BD 03 09           2425 	cjne	r5,#0x03,00117$
   AC5C                    2426 00113$:
                           2427 ;	../../shared/src/dll_cal_rom.c:137: lnx_DLL_GM_CAL_PASS_LANE = 0;
   AC5C 90 60 04           2428 	mov	dptr,#_CAL_CTRL2_LANE
   AC5F E0                 2429 	movx	a,@dptr
   AC60 54 FD              2430 	anl	a,#0xfd
   AC62 F0                 2431 	movx	@dptr,a
                           2432 ;	../../shared/src/dll_cal_rom.c:138: break;
   AC63 80 09              2433 	sjmp	00118$
   AC65                    2434 00117$:
                           2435 ;	../../shared/src/dll_cal_rom.c:140: } while (loop_cnt-->0);
   AC65 8C 05              2436 	mov	ar5,r4
   AC67 1C                 2437 	dec	r4
   AC68 ED                 2438 	mov	a,r5
   AC69 60 03              2439 	jz	00138$
   AC6B 02 AB A2           2440 	ljmp	00116$
   AC6E                    2441 00138$:
   AC6E                    2442 00118$:
                           2443 ;	../../shared/src/dll_cal_rom.c:142: lnx_DLL_GM_CAL_DONE_LANE = 1;
   AC6E 90 60 00           2444 	mov	dptr,#_CAL_CTRL1_LANE
   AC71 E0                 2445 	movx	a,@dptr
   AC72 44 02              2446 	orl	a,#0x02
   AC74 F0                 2447 	movx	@dptr,a
                           2448 ;	../../shared/src/dll_cal_rom.c:145: lnx_cal_dll_gmsel[rate] = (DLL_GMSEL & 0x7) | 0x00;;	
   AC75 A2 0E              2449 	mov	c,_rx_pll_rate
   AC77 E4                 2450 	clr	a
   AC78 33                 2451 	rlc	a
   AC79 24 04              2452 	add	a,#_lnx_cal_dll_gmsel
   AC7B FA                 2453 	mov	r2,a
   AC7C E4                 2454 	clr	a
   AC7D 34 66              2455 	addc	a,#(_lnx_cal_dll_gmsel >> 8)
   AC7F FB                 2456 	mov	r3,a
   AC80 90 00 1C           2457 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_7
   AC83 E0                 2458 	movx	a,@dptr
   AC84 C4                 2459 	swap	a
   AC85 23                 2460 	rl	a
   AC86 54 07              2461 	anl	a,#0x07
   AC88 FC                 2462 	mov	r4,a
   AC89 53 04 07           2463 	anl	ar4,#0x07
   AC8C 8A 82              2464 	mov	dpl,r2
   AC8E 8B 83              2465 	mov	dph,r3
   AC90 EC                 2466 	mov	a,r4
   AC91 F0                 2467 	movx	@dptr,a
   AC92                    2468 00119$:
   AC92 02 00 C5           2469 	ljmp	__sdcc_banked_ret
                           2470 ;------------------------------------------------------------
                           2471 ;Allocation info for local variables in function 'dll_vdda_cal_loop'
                           2472 ;------------------------------------------------------------
                           2473 ;mode                      Allocated to registers r2 
                           2474 ;loopcnt                   Allocated to registers r4 
                           2475 ;val                       Allocated to registers r6 
                           2476 ;dir                       Allocated to registers r7 
                           2477 ;cmpout                    Allocated to registers r3 
                           2478 ;cmp_out_dir               Allocated to stack - offset 1
                           2479 ;sloc0                     Allocated to stack - offset 8
                           2480 ;------------------------------------------------------------
                           2481 ;	../../shared/src/dll_cal_rom.c:160: void dll_vdda_cal_loop( uint8_t mode ) BANKING_CTRL {
                           2482 ;	-----------------------------------------
                           2483 ;	 function dll_vdda_cal_loop
                           2484 ;	-----------------------------------------
   AC95                    2485 _dll_vdda_cal_loop:
   AC95 C0 18              2486 	push	_bp
   AC97 85 81 18           2487 	mov	_bp,sp
   AC9A 05 81              2488 	inc	sp
   AC9C 05 81              2489 	inc	sp
   AC9E AA 82              2490 	mov	r2,dpl
                           2491 ;	../../shared/src/dll_cal_rom.c:165: delay01(10);
   ACA0 90 00 0A           2492 	mov	dptr,#0x000A
   ACA3 C0 02              2493 	push	ar2
   ACA5 78 16              2494 	mov	r0,#_delay01
   ACA7 79 BC              2495 	mov	r1,#(_delay01 >> 8)
   ACA9 7A 02              2496 	mov	r2,#(_delay01 >> 16)
   ACAB 12 00 B3           2497 	lcall	__sdcc_banked_call
   ACAE D0 02              2498 	pop	ar2
                           2499 ;	../../shared/src/dll_cal_rom.c:167: if(mode == DLL_VDDA_STEP) {
   ACB0 E4                 2500 	clr	a
   ACB1 BA 01 01           2501 	cjne	r2,#0x01,00147$
   ACB4 04                 2502 	inc	a
   ACB5                    2503 00147$:
   ACB5 FA                 2504 	mov	r2,a
   ACB6 60 0C              2505 	jz	00111$
                           2506 ;	../../shared/src/dll_cal_rom.c:168: loopcnt = 128;	
   ACB8 7C 80              2507 	mov	r4,#0x80
                           2508 ;	../../shared/src/dll_cal_rom.c:169: cmp_out_dir = 1;  //1:dec, 0:inc
   ACBA A8 18              2509 	mov	r0,_bp
   ACBC 08                 2510 	inc	r0
   ACBD 76 01              2511 	mov	@r0,#0x01
   ACBF 08                 2512 	inc	r0
   ACC0 76 00              2513 	mov	@r0,#0x00
   ACC2 80 36              2514 	sjmp	00112$
   ACC4                    2515 00111$:
                           2516 ;	../../shared/src/dll_cal_rom.c:172: if(lnx_DLL_SELLV_RXDLL_FINAL_STEP_NUM_SEL_LANE_1_0 == 0x0) loopcnt = 16;
   ACC4 90 60 64           2517 	mov	dptr,#_DLL_CAL
   ACC7 E0                 2518 	movx	a,@dptr
   ACC8 54 0C              2519 	anl	a,#0x0c
   ACCA 70 04              2520 	jnz	00108$
   ACCC 7C 10              2521 	mov	r4,#0x10
   ACCE 80 22              2522 	sjmp	00109$
   ACD0                    2523 00108$:
                           2524 ;	../../shared/src/dll_cal_rom.c:173: else if(lnx_DLL_SELLV_RXDLL_FINAL_STEP_NUM_SEL_LANE_1_0 == 0x1) loopcnt = 24;
   ACD0 90 60 64           2525 	mov	dptr,#_DLL_CAL
   ACD3 E0                 2526 	movx	a,@dptr
   ACD4 03                 2527 	rr	a
   ACD5 03                 2528 	rr	a
   ACD6 54 03              2529 	anl	a,#0x03
   ACD8 FE                 2530 	mov	r6,a
   ACD9 BE 01 04           2531 	cjne	r6,#0x01,00105$
   ACDC 7C 18              2532 	mov	r4,#0x18
   ACDE 80 12              2533 	sjmp	00109$
   ACE0                    2534 00105$:
                           2535 ;	../../shared/src/dll_cal_rom.c:174: else if(lnx_DLL_SELLV_RXDLL_FINAL_STEP_NUM_SEL_LANE_1_0 == 0x2) loopcnt = 32;
   ACE0 90 60 64           2536 	mov	dptr,#_DLL_CAL
   ACE3 E0                 2537 	movx	a,@dptr
   ACE4 03                 2538 	rr	a
   ACE5 03                 2539 	rr	a
   ACE6 54 03              2540 	anl	a,#0x03
   ACE8 FE                 2541 	mov	r6,a
   ACE9 BE 02 04           2542 	cjne	r6,#0x02,00102$
   ACEC 7C 20              2543 	mov	r4,#0x20
   ACEE 80 02              2544 	sjmp	00109$
   ACF0                    2545 00102$:
                           2546 ;	../../shared/src/dll_cal_rom.c:175: else loopcnt = 48;
   ACF0 7C 30              2547 	mov	r4,#0x30
   ACF2                    2548 00109$:
                           2549 ;	../../shared/src/dll_cal_rom.c:176: cmp_out_dir = 0;  //0:dec, 1:inc
   ACF2 A8 18              2550 	mov	r0,_bp
   ACF4 08                 2551 	inc	r0
   ACF5 76 00              2552 	mov	@r0,#0x00
   ACF7 08                 2553 	inc	r0
   ACF8 76 00              2554 	mov	@r0,#0x00
   ACFA                    2555 00112$:
                           2556 ;	../../shared/src/dll_cal_rom.c:179: val = get_sellv_rxdll_ch();
   ACFA C0 02              2557 	push	ar2
   ACFC C0 04              2558 	push	ar4
   ACFE 78 0F              2559 	mov	r0,#_get_sellv_rxdll_ch
   AD00 79 AE              2560 	mov	r1,#(_get_sellv_rxdll_ch >> 8)
   AD02 7A 02              2561 	mov	r2,#(_get_sellv_rxdll_ch >> 16)
   AD04 12 00 B3           2562 	lcall	__sdcc_banked_call
   AD07 AE 82              2563 	mov	r6,dpl
   AD09 D0 04              2564 	pop	ar4
   AD0B D0 02              2565 	pop	ar2
                           2566 ;	../../shared/src/dll_cal_rom.c:181: dir = DLL_CAL_CMP_OUT; cmpout = dir;
   AD0D 90 21 50           2567 	mov	dptr,#_RX_CALIBRATION_REG
   AD10 E0                 2568 	movx	a,@dptr
   AD11 03                 2569 	rr	a
   AD12 54 01              2570 	anl	a,#0x01
   AD14 FF                 2571 	mov	r7,a
   AD15 FB                 2572 	mov	r3,a
                           2573 ;	../../shared/src/dll_cal_rom.c:182: do {
   AD16 8C 05              2574 	mov	ar5,r4
   AD18                    2575 00128$:
                           2576 ;	../../shared/src/dll_cal_rom.c:184: if( cmpout == cmp_out_dir ) {
   AD18 C0 07              2577 	push	ar7
   AD1A 8B 07              2578 	mov	ar7,r3
   AD1C 7C 00              2579 	mov	r4,#0x00
   AD1E A8 18              2580 	mov	r0,_bp
   AD20 08                 2581 	inc	r0
   AD21 E6                 2582 	mov	a,@r0
   AD22 B5 07 07           2583 	cjne	a,ar7,00155$
   AD25 08                 2584 	inc	r0
   AD26 E6                 2585 	mov	a,@r0
   AD27 B5 04 02           2586 	cjne	a,ar4,00155$
   AD2A 80 04              2587 	sjmp	00156$
   AD2C                    2588 00155$:
   AD2C D0 07              2589 	pop	ar7
   AD2E 80 08              2590 	sjmp	00118$
   AD30                    2591 00156$:
   AD30 D0 07              2592 	pop	ar7
                           2593 ;	../../shared/src/dll_cal_rom.c:185: if( val>VDDA_MIN ) 	val--;
   AD32 EE                 2594 	mov	a,r6
   AD33 60 09              2595 	jz	00119$
   AD35 1E                 2596 	dec	r6
   AD36 80 06              2597 	sjmp	00119$
   AD38                    2598 00118$:
                           2599 ;	../../shared/src/dll_cal_rom.c:188: if( val<VDDA_MAX ) 	val++;
   AD38 BE 2B 00           2600 	cjne	r6,#0x2B,00158$
   AD3B                    2601 00158$:
   AD3B 50 01              2602 	jnc	00119$
   AD3D 0E                 2603 	inc	r6
   AD3E                    2604 00119$:
                           2605 ;	../../shared/src/dll_cal_rom.c:190: set_sellv_rxdll_ch(val);
   AD3E 8E 82              2606 	mov	dpl,r6
   AD40 C0 02              2607 	push	ar2
   AD42 C0 05              2608 	push	ar5
   AD44 C0 06              2609 	push	ar6
   AD46 C0 07              2610 	push	ar7
   AD48 78 DA              2611 	mov	r0,#_set_sellv_rxdll_ch
   AD4A 79 AD              2612 	mov	r1,#(_set_sellv_rxdll_ch >> 8)
   AD4C 7A 02              2613 	mov	r2,#(_set_sellv_rxdll_ch >> 16)
   AD4E 12 00 B3           2614 	lcall	__sdcc_banked_call
   AD51 D0 07              2615 	pop	ar7
   AD53 D0 06              2616 	pop	ar6
   AD55 D0 05              2617 	pop	ar5
   AD57 D0 02              2618 	pop	ar2
                           2619 ;	../../shared/src/dll_cal_rom.c:192: if( val==VDDA_MIN || val==VDDA_MAX )
   AD59 EE                 2620 	mov	a,r6
   AD5A 60 03              2621 	jz	00120$
   AD5C BE 2B 09           2622 	cjne	r6,#0x2B,00121$
   AD5F                    2623 00120$:
                           2624 ;	../../shared/src/dll_cal_rom.c:194: lnx_DLL_VDATA_CAL_PASS_LANE = 0;
   AD5F 90 60 04           2625 	mov	dptr,#_CAL_CTRL2_LANE
   AD62 E0                 2626 	movx	a,@dptr
   AD63 54 FB              2627 	anl	a,#0xfb
   AD65 F0                 2628 	movx	@dptr,a
                           2629 ;	../../shared/src/dll_cal_rom.c:195: break;
   AD66 80 43              2630 	sjmp	00130$
   AD68                    2631 00121$:
                           2632 ;	../../shared/src/dll_cal_rom.c:198: if( lnx_DLL_VDDA_TRACKING_ON_LANE == 1 ) break;
   AD68 90 60 0A           2633 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0002)
   AD6B E0                 2634 	movx	a,@dptr
   AD6C C4                 2635 	swap	a
   AD6D 03                 2636 	rr	a
   AD6E 54 01              2637 	anl	a,#0x01
   AD70 FC                 2638 	mov	r4,a
   AD71 BC 01 02           2639 	cjne	r4,#0x01,00163$
   AD74 80 35              2640 	sjmp	00130$
   AD76                    2641 00163$:
                           2642 ;	../../shared/src/dll_cal_rom.c:200: delay01(10);
   AD76 90 00 0A           2643 	mov	dptr,#0x000A
   AD79 C0 02              2644 	push	ar2
   AD7B C0 05              2645 	push	ar5
   AD7D C0 06              2646 	push	ar6
   AD7F C0 07              2647 	push	ar7
   AD81 78 16              2648 	mov	r0,#_delay01
   AD83 79 BC              2649 	mov	r1,#(_delay01 >> 8)
   AD85 7A 02              2650 	mov	r2,#(_delay01 >> 16)
   AD87 12 00 B3           2651 	lcall	__sdcc_banked_call
   AD8A D0 07              2652 	pop	ar7
   AD8C D0 06              2653 	pop	ar6
   AD8E D0 05              2654 	pop	ar5
   AD90 D0 02              2655 	pop	ar2
                           2656 ;	../../shared/src/dll_cal_rom.c:201: cmpout = DLL_CAL_CMP_OUT;
   AD92 90 21 50           2657 	mov	dptr,#_RX_CALIBRATION_REG
   AD95 E0                 2658 	movx	a,@dptr
   AD96 03                 2659 	rr	a
   AD97 54 01              2660 	anl	a,#0x01
   AD99 FC                 2661 	mov	r4,a
   AD9A FB                 2662 	mov	r3,a
                           2663 ;	../../shared/src/dll_cal_rom.c:202: if(mode == DLL_VDDA_STEP && dir != cmpout) break;
   AD9B EA                 2664 	mov	a,r2
   AD9C 60 04              2665 	jz	00129$
   AD9E EF                 2666 	mov	a,r7
   AD9F B5 03 09           2667 	cjne	a,ar3,00130$
   ADA2                    2668 00129$:
                           2669 ;	../../shared/src/dll_cal_rom.c:204: } while (loopcnt-->0);
   ADA2 8D 04              2670 	mov	ar4,r5
   ADA4 1D                 2671 	dec	r5
   ADA5 EC                 2672 	mov	a,r4
   ADA6 60 03              2673 	jz	00167$
   ADA8 02 AD 18           2674 	ljmp	00128$
   ADAB                    2675 00167$:
   ADAB                    2676 00130$:
                           2677 ;	../../shared/src/dll_cal_rom.c:206: if(lnx_DLL_VDDA_TRACKING_ON_LANE==0)
   ADAB 90 60 0A           2678 	mov	dptr,#(_CAL_CTRL3_LANE + 0x0002)
   ADAE E0                 2679 	movx	a,@dptr
   ADAF 20 E5 10           2680 	jb	acc.5,00132$
                           2681 ;	../../shared/src/dll_cal_rom.c:207: lnx_cal_vdda_dll_sel[PWR][rx_pll_rate] = val;
   ADB2 A2 0E              2682 	mov	c,_rx_pll_rate
   ADB4 E4                 2683 	clr	a
   ADB5 33                 2684 	rlc	a
   ADB6 FA                 2685 	mov	r2,a
   ADB7 24 06              2686 	add	a,#_lnx_cal_vdda_dll_sel
   ADB9 F5 82              2687 	mov	dpl,a
   ADBB E4                 2688 	clr	a
   ADBC 34 66              2689 	addc	a,#(_lnx_cal_vdda_dll_sel >> 8)
   ADBE F5 83              2690 	mov	dph,a
   ADC0 EE                 2691 	mov	a,r6
   ADC1 F0                 2692 	movx	@dptr,a
   ADC2                    2693 00132$:
                           2694 ;	../../shared/src/dll_cal_rom.c:208: lnx_cal_vdda_dll_sel[CONT][rx_pll_rate] = val;
   ADC2 A2 0E              2695 	mov	c,_rx_pll_rate
   ADC4 E4                 2696 	clr	a
   ADC5 33                 2697 	rlc	a
   ADC6 FA                 2698 	mov	r2,a
   ADC7 24 08              2699 	add	a,#(_lnx_cal_vdda_dll_sel + 0x0002)
   ADC9 F5 82              2700 	mov	dpl,a
   ADCB E4                 2701 	clr	a
   ADCC 34 66              2702 	addc	a,#((_lnx_cal_vdda_dll_sel + 0x0002) >> 8)
   ADCE F5 83              2703 	mov	dph,a
   ADD0 EE                 2704 	mov	a,r6
   ADD1 F0                 2705 	movx	@dptr,a
   ADD2 85 18 81           2706 	mov	sp,_bp
   ADD5 D0 18              2707 	pop	_bp
   ADD7 02 00 C5           2708 	ljmp	__sdcc_banked_ret
                           2709 ;------------------------------------------------------------
                           2710 ;Allocation info for local variables in function 'set_sellv_rxdll_ch'
                           2711 ;------------------------------------------------------------
                           2712 ;val                       Allocated to registers r2 
                           2713 ;------------------------------------------------------------
                           2714 ;	../../shared/src/dll_cal_rom.c:270: void set_sellv_rxdll_ch(uint8_t val) BANKING_CTRL {
                           2715 ;	-----------------------------------------
                           2716 ;	 function set_sellv_rxdll_ch
                           2717 ;	-----------------------------------------
   ADDA                    2718 _set_sellv_rxdll_ch:
   ADDA AA 82              2719 	mov	r2,dpl
                           2720 ;	../../shared/src/dll_cal_rom.c:271: switch(mcuid) {
   ADDC 90 22 00           2721 	mov	dptr,#_MCU_CONTROL_LANE
   ADDF E0                 2722 	movx	a,@dptr
   ADE0 FB                 2723 	mov	r3,a
   ADE1 60 05              2724 	jz	00101$
                           2725 ;	../../shared/src/dll_cal_rom.c:272: case MCU_LANE0:
   ADE3 BB 01 26           2726 	cjne	r3,#0x01,00104$
   ADE6 80 13              2727 	sjmp	00102$
   ADE8                    2728 00101$:
                           2729 ;	../../shared/src/dll_cal_rom.c:273: reg_SELLV_RXDLL_CH0_5_0 = val; break;
   ADE8 90 82 50           2730 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_148
   ADEB EA                 2731 	mov	a,r2
   ADEC 2A                 2732 	add	a,r2
   ADED 25 E0              2733 	add	a,acc
   ADEF 54 FC              2734 	anl	a,#0xfc
   ADF1 F5 F0              2735 	mov	b,a
   ADF3 E0                 2736 	movx	a,@dptr
   ADF4 54 03              2737 	anl	a,#0x03
   ADF6 45 F0              2738 	orl	a,b
   ADF8 F0                 2739 	movx	@dptr,a
                           2740 ;	../../shared/src/dll_cal_rom.c:274: case MCU_LANE1:
   ADF9 80 11              2741 	sjmp	00104$
   ADFB                    2742 00102$:
                           2743 ;	../../shared/src/dll_cal_rom.c:275: reg_SELLV_RXDLL_CH1_5_0 = val; break;
   ADFB 90 82 54           2744 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_149
   ADFE EA                 2745 	mov	a,r2
   ADFF 2A                 2746 	add	a,r2
   AE00 25 E0              2747 	add	a,acc
   AE02 54 FC              2748 	anl	a,#0xfc
   AE04 F5 F0              2749 	mov	b,a
   AE06 E0                 2750 	movx	a,@dptr
   AE07 54 03              2751 	anl	a,#0x03
   AE09 45 F0              2752 	orl	a,b
   AE0B F0                 2753 	movx	@dptr,a
                           2754 ;	../../shared/src/dll_cal_rom.c:276: }
   AE0C                    2755 00104$:
   AE0C 02 00 C5           2756 	ljmp	__sdcc_banked_ret
                           2757 ;------------------------------------------------------------
                           2758 ;Allocation info for local variables in function 'get_sellv_rxdll_ch'
                           2759 ;------------------------------------------------------------
                           2760 ;val                       Allocated to stack - offset 1
                           2761 ;------------------------------------------------------------
                           2762 ;	../../shared/src/dll_cal_rom.c:279: uint8_t get_sellv_rxdll_ch(void) BANKING_CTRL {
                           2763 ;	-----------------------------------------
                           2764 ;	 function get_sellv_rxdll_ch
                           2765 ;	-----------------------------------------
   AE0F                    2766 _get_sellv_rxdll_ch:
   AE0F C0 18              2767 	push	_bp
   AE11 85 81 18           2768 	mov	_bp,sp
   AE14 05 81              2769 	inc	sp
                           2770 ;	../../shared/src/dll_cal_rom.c:281: switch(mcuid) {
   AE16 90 22 00           2771 	mov	dptr,#_MCU_CONTROL_LANE
   AE19 E0                 2772 	movx	a,@dptr
   AE1A FA                 2773 	mov	r2,a
   AE1B 60 05              2774 	jz	00101$
                           2775 ;	../../shared/src/dll_cal_rom.c:282: case MCU_LANE0: 
   AE1D BA 01 17           2776 	cjne	r2,#0x01,00103$
   AE20 80 0B              2777 	sjmp	00102$
   AE22                    2778 00101$:
                           2779 ;	../../shared/src/dll_cal_rom.c:283: val = reg_SELLV_RXDLL_CH0_5_0; break;
   AE22 90 82 50           2780 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_148
   AE25 E0                 2781 	movx	a,@dptr
   AE26 03                 2782 	rr	a
   AE27 03                 2783 	rr	a
   AE28 54 3F              2784 	anl	a,#0x3f
   AE2A FA                 2785 	mov	r2,a
                           2786 ;	../../shared/src/dll_cal_rom.c:284: case MCU_LANE1:
   AE2B 80 0A              2787 	sjmp	00103$
   AE2D                    2788 00102$:
                           2789 ;	../../shared/src/dll_cal_rom.c:285: val = reg_SELLV_RXDLL_CH1_5_0; break;
   AE2D 90 82 54           2790 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_149
   AE30 E0                 2791 	movx	a,@dptr
   AE31 03                 2792 	rr	a
   AE32 03                 2793 	rr	a
   AE33 54 3F              2794 	anl	a,#0x3f
   AE35 FB                 2795 	mov	r3,a
   AE36 FA                 2796 	mov	r2,a
                           2797 ;	../../shared/src/dll_cal_rom.c:286: }
   AE37                    2798 00103$:
                           2799 ;	../../shared/src/dll_cal_rom.c:288: return val;
   AE37 8A 82              2800 	mov	dpl,r2
   AE39 85 18 81           2801 	mov	sp,_bp
   AE3C D0 18              2802 	pop	_bp
   AE3E 02 00 C5           2803 	ljmp	__sdcc_banked_ret
                           2804 ;------------------------------------------------------------
                           2805 ;Allocation info for local variables in function 'dll_eom_gm_cal'
                           2806 ;------------------------------------------------------------
                           2807 ;dir                       Allocated to registers r2 
                           2808 ;pre_dll_gmsel             Allocated to registers r5 
                           2809 ;loop_cnt                  Allocated to registers r4 
                           2810 ;cmpout                    Allocated to registers r3 
                           2811 ;------------------------------------------------------------
                           2812 ;	../../shared/src/dll_cal_rom.c:302: void dll_eom_gm_cal( void ) BANKING_CTRL {
                           2813 ;	-----------------------------------------
                           2814 ;	 function dll_eom_gm_cal
                           2815 ;	-----------------------------------------
   AE41                    2816 _dll_eom_gm_cal:
                           2817 ;	../../shared/src/dll_cal_rom.c:305: lnx_DLL_EOM_GM_CAL_DONE_LANE = 0;
   AE41 90 60 00           2818 	mov	dptr,#_CAL_CTRL1_LANE
   AE44 E0                 2819 	movx	a,@dptr
   AE45 54 F7              2820 	anl	a,#0xf7
   AE47 F0                 2821 	movx	@dptr,a
                           2822 ;	../../shared/src/dll_cal_rom.c:307: if(cmx_EOM_DLL_CAL_EXT_EN || LOAD_CAL_ON) {	
   AE48 90 E6 09           2823 	mov	dptr,#(_CONTROL_CONFIG1 + 0x0001)
   AE4B E0                 2824 	movx	a,@dptr
   AE4C 20 E5 06           2825 	jb	acc.5,00101$
   AE4F 90 60 08           2826 	mov	dptr,#_CAL_CTRL3_LANE
   AE52 E0                 2827 	movx	a,@dptr
   AE53 60 28              2828 	jz	00102$
   AE55                    2829 00101$:
                           2830 ;	../../shared/src/dll_cal_rom.c:308: EOM_DLL_GMSEL = lnx_cal_dll_eom_gmsel[rate];	
   AE55 A2 0E              2831 	mov	c,_rx_pll_rate
   AE57 E4                 2832 	clr	a
   AE58 33                 2833 	rlc	a
   AE59 24 0A              2834 	add	a,#_lnx_cal_dll_eom_gmsel
   AE5B F5 82              2835 	mov	dpl,a
   AE5D E4                 2836 	clr	a
   AE5E 34 66              2837 	addc	a,#(_lnx_cal_dll_eom_gmsel >> 8)
   AE60 F5 83              2838 	mov	dph,a
   AE62 E0                 2839 	movx	a,@dptr
   AE63 FA                 2840 	mov	r2,a
   AE64 90 00 24           2841 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_9
   AE67 C4                 2842 	swap	a
   AE68 23                 2843 	rl	a
   AE69 54 E0              2844 	anl	a,#(0xe0&0xe0)
   AE6B F5 F0              2845 	mov	b,a
   AE6D E0                 2846 	movx	a,@dptr
   AE6E 54 1F              2847 	anl	a,#0x1f
   AE70 45 F0              2848 	orl	a,b
   AE72 F0                 2849 	movx	@dptr,a
                           2850 ;	../../shared/src/dll_cal_rom.c:309: lnx_DLL_EOM_GM_CAL_DONE_LANE = 1;
   AE73 90 60 00           2851 	mov	dptr,#_CAL_CTRL1_LANE
   AE76 E0                 2852 	movx	a,@dptr
   AE77 44 08              2853 	orl	a,#0x08
   AE79 F0                 2854 	movx	@dptr,a
                           2855 ;	../../shared/src/dll_cal_rom.c:310: return;
   AE7A 02 AF A2           2856 	ljmp	00119$
   AE7D                    2857 00102$:
                           2858 ;	../../shared/src/dll_cal_rom.c:313: PHY_STATUS = ST_DLL_EOM_GM_CAL;
   AE7D 90 22 30           2859 	mov	dptr,#_MCU_STATUS0_LANE
   AE80 74 0C              2860 	mov	a,#0x0C
   AE82 F0                 2861 	movx	@dptr,a
                           2862 ;	../../shared/src/dll_cal_rom.c:315: lnx_DLL_EOM_GM_CAL_PASS_LANE = 1;
   AE83 90 60 04           2863 	mov	dptr,#_CAL_CTRL2_LANE
   AE86 E0                 2864 	movx	a,@dptr
   AE87 44 08              2865 	orl	a,#0x08
   AE89 F0                 2866 	movx	@dptr,a
                           2867 ;	../../shared/src/dll_cal_rom.c:317: DLL_PD_SEL = 1;
   AE8A 90 00 20           2868 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_8
   AE8D E0                 2869 	movx	a,@dptr
   AE8E 54 F3              2870 	anl	a,#0xf3
   AE90 44 04              2871 	orl	a,#0x04
   AE92 F0                 2872 	movx	@dptr,a
                           2873 ;	../../shared/src/dll_cal_rom.c:321: EOM_DLL_GMSEL = 0x07;
   AE93 90 00 24           2874 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_9
   AE96 E0                 2875 	movx	a,@dptr
   AE97 44 E0              2876 	orl	a,#0xe0
   AE99 F0                 2877 	movx	@dptr,a
                           2878 ;	../../shared/src/dll_cal_rom.c:322: delay01(10);
   AE9A 90 00 0A           2879 	mov	dptr,#0x000A
   AE9D 78 16              2880 	mov	r0,#_delay01
   AE9F 79 BC              2881 	mov	r1,#(_delay01 >> 8)
   AEA1 7A 02              2882 	mov	r2,#(_delay01 >> 16)
   AEA3 12 00 B3           2883 	lcall	__sdcc_banked_call
                           2884 ;	../../shared/src/dll_cal_rom.c:324: dir = DLL_CAL_CMP_OUT; cmpout = dir;
   AEA6 90 21 50           2885 	mov	dptr,#_RX_CALIBRATION_REG
   AEA9 E0                 2886 	movx	a,@dptr
   AEAA 03                 2887 	rr	a
   AEAB 54 01              2888 	anl	a,#0x01
   AEAD FA                 2889 	mov	r2,a
   AEAE FB                 2890 	mov	r3,a
                           2891 ;	../../shared/src/dll_cal_rom.c:326: do {
   AEAF 7C 08              2892 	mov	r4,#0x08
   AEB1                    2893 00116$:
                           2894 ;	../../shared/src/dll_cal_rom.c:327: pre_dll_gmsel = EOM_DLL_GMSEL;
   AEB1 90 00 24           2895 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_9
   AEB4 E0                 2896 	movx	a,@dptr
   AEB5 C4                 2897 	swap	a
   AEB6 03                 2898 	rr	a
   AEB7 54 07              2899 	anl	a,#0x07
   AEB9 FD                 2900 	mov	r5,a
                           2901 ;	../../shared/src/dll_cal_rom.c:329: if( cmpout == 0 )  {
   AEBA EB                 2902 	mov	a,r3
   AEBB 70 32              2903 	jnz	00109$
                           2904 ;	../../shared/src/dll_cal_rom.c:330: if(EOM_DLL_GMSEL>lnx_DLL_EOM_GMSEL_MIN_LANE_3_0) EOM_DLL_GMSEL--;
   AEBD 90 00 24           2905 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_9
   AEC0 E0                 2906 	movx	a,@dptr
   AEC1 C4                 2907 	swap	a
   AEC2 03                 2908 	rr	a
   AEC3 54 07              2909 	anl	a,#0x07
   AEC5 FE                 2910 	mov	r6,a
   AEC6 90 60 64           2911 	mov	dptr,#_DLL_CAL
   AEC9 E0                 2912 	movx	a,@dptr
   AECA C4                 2913 	swap	a
   AECB 54 0F              2914 	anl	a,#0x0f
   AECD FF                 2915 	mov	r7,a
   AECE B5 06 00           2916 	cjne	a,ar6,00131$
   AED1                    2917 00131$:
   AED1 50 46              2918 	jnc	00110$
   AED3 90 00 24           2919 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_9
   AED6 E0                 2920 	movx	a,@dptr
   AED7 C4                 2921 	swap	a
   AED8 03                 2922 	rr	a
   AED9 54 07              2923 	anl	a,#0x07
   AEDB FE                 2924 	mov	r6,a
   AEDC 1E                 2925 	dec	r6
   AEDD 90 00 24           2926 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_9
   AEE0 EE                 2927 	mov	a,r6
   AEE1 C4                 2928 	swap	a
   AEE2 23                 2929 	rl	a
   AEE3 54 E0              2930 	anl	a,#(0xe0&0xe0)
   AEE5 F5 F0              2931 	mov	b,a
   AEE7 E0                 2932 	movx	a,@dptr
   AEE8 54 1F              2933 	anl	a,#0x1f
   AEEA 45 F0              2934 	orl	a,b
   AEEC F0                 2935 	movx	@dptr,a
   AEED 80 2A              2936 	sjmp	00110$
   AEEF                    2937 00109$:
                           2938 ;	../../shared/src/dll_cal_rom.c:333: if(EOM_DLL_GMSEL<7) EOM_DLL_GMSEL++;
   AEEF 90 00 24           2939 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_9
   AEF2 E0                 2940 	movx	a,@dptr
   AEF3 C4                 2941 	swap	a
   AEF4 03                 2942 	rr	a
   AEF5 54 07              2943 	anl	a,#0x07
   AEF7 FE                 2944 	mov	r6,a
   AEF8 C3                 2945 	clr	c
   AEF9 64 80              2946 	xrl	a,#0x80
   AEFB 94 87              2947 	subb	a,#0x87
   AEFD 50 1A              2948 	jnc	00110$
   AEFF 90 00 24           2949 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_9
   AF02 E0                 2950 	movx	a,@dptr
   AF03 C4                 2951 	swap	a
   AF04 03                 2952 	rr	a
   AF05 54 07              2953 	anl	a,#0x07
   AF07 FE                 2954 	mov	r6,a
   AF08 0E                 2955 	inc	r6
   AF09 90 00 24           2956 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_9
   AF0C EE                 2957 	mov	a,r6
   AF0D C4                 2958 	swap	a
   AF0E 23                 2959 	rl	a
   AF0F 54 E0              2960 	anl	a,#(0xe0&0xe0)
   AF11 F5 F0              2961 	mov	b,a
   AF13 E0                 2962 	movx	a,@dptr
   AF14 54 1F              2963 	anl	a,#0x1f
   AF16 45 F0              2964 	orl	a,b
   AF18 F0                 2965 	movx	@dptr,a
   AF19                    2966 00110$:
                           2967 ;	../../shared/src/dll_cal_rom.c:336: delay01(10);
   AF19 90 00 0A           2968 	mov	dptr,#0x000A
   AF1C C0 02              2969 	push	ar2
   AF1E C0 04              2970 	push	ar4
   AF20 C0 05              2971 	push	ar5
   AF22 78 16              2972 	mov	r0,#_delay01
   AF24 79 BC              2973 	mov	r1,#(_delay01 >> 8)
   AF26 7A 02              2974 	mov	r2,#(_delay01 >> 16)
   AF28 12 00 B3           2975 	lcall	__sdcc_banked_call
   AF2B D0 05              2976 	pop	ar5
   AF2D D0 04              2977 	pop	ar4
   AF2F D0 02              2978 	pop	ar2
                           2979 ;	../../shared/src/dll_cal_rom.c:338: cmpout = DLL_CAL_CMP_OUT;
   AF31 90 21 50           2980 	mov	dptr,#_RX_CALIBRATION_REG
   AF34 E0                 2981 	movx	a,@dptr
   AF35 03                 2982 	rr	a
   AF36 54 01              2983 	anl	a,#0x01
   AF38 FE                 2984 	mov	r6,a
   AF39 FB                 2985 	mov	r3,a
                           2986 ;	../../shared/src/dll_cal_rom.c:339: if(dir != cmpout) {
   AF3A EA                 2987 	mov	a,r2
   AF3B B5 03 02           2988 	cjne	a,ar3,00134$
   AF3E 80 12              2989 	sjmp	00112$
   AF40                    2990 00134$:
                           2991 ;	../../shared/src/dll_cal_rom.c:340: EOM_DLL_GMSEL = pre_dll_gmsel;
   AF40 90 00 24           2992 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_9
   AF43 ED                 2993 	mov	a,r5
   AF44 C4                 2994 	swap	a
   AF45 23                 2995 	rl	a
   AF46 54 E0              2996 	anl	a,#(0xe0&0xe0)
   AF48 F5 F0              2997 	mov	b,a
   AF4A E0                 2998 	movx	a,@dptr
   AF4B 54 1F              2999 	anl	a,#0x1f
   AF4D 45 F0              3000 	orl	a,b
   AF4F F0                 3001 	movx	@dptr,a
                           3002 ;	../../shared/src/dll_cal_rom.c:341: break;
   AF50 80 2C              3003 	sjmp	00118$
   AF52                    3004 00112$:
                           3005 ;	../../shared/src/dll_cal_rom.c:343: if( EOM_DLL_GMSEL==0x07 || EOM_DLL_GMSEL==0x03 ) {
   AF52 90 00 24           3006 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_9
   AF55 E0                 3007 	movx	a,@dptr
   AF56 C4                 3008 	swap	a
   AF57 03                 3009 	rr	a
   AF58 54 07              3010 	anl	a,#0x07
   AF5A FD                 3011 	mov	r5,a
   AF5B BD 07 02           3012 	cjne	r5,#0x07,00135$
   AF5E 80 0C              3013 	sjmp	00113$
   AF60                    3014 00135$:
   AF60 90 00 24           3015 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_9
   AF63 E0                 3016 	movx	a,@dptr
   AF64 C4                 3017 	swap	a
   AF65 03                 3018 	rr	a
   AF66 54 07              3019 	anl	a,#0x07
   AF68 FD                 3020 	mov	r5,a
   AF69 BD 03 09           3021 	cjne	r5,#0x03,00117$
   AF6C                    3022 00113$:
                           3023 ;	../../shared/src/dll_cal_rom.c:344: lnx_DLL_COMP_CAL_PASS_LANE = 0;
   AF6C 90 60 04           3024 	mov	dptr,#_CAL_CTRL2_LANE
   AF6F E0                 3025 	movx	a,@dptr
   AF70 54 FE              3026 	anl	a,#0xfe
   AF72 F0                 3027 	movx	@dptr,a
                           3028 ;	../../shared/src/dll_cal_rom.c:345: break;
   AF73 80 09              3029 	sjmp	00118$
   AF75                    3030 00117$:
                           3031 ;	../../shared/src/dll_cal_rom.c:347: } while (loop_cnt-->0);
   AF75 8C 05              3032 	mov	ar5,r4
   AF77 1C                 3033 	dec	r4
   AF78 ED                 3034 	mov	a,r5
   AF79 60 03              3035 	jz	00138$
   AF7B 02 AE B1           3036 	ljmp	00116$
   AF7E                    3037 00138$:
   AF7E                    3038 00118$:
                           3039 ;	../../shared/src/dll_cal_rom.c:349: lnx_DLL_EOM_GM_CAL_DONE_LANE = 1;
   AF7E 90 60 00           3040 	mov	dptr,#_CAL_CTRL1_LANE
   AF81 E0                 3041 	movx	a,@dptr
   AF82 44 08              3042 	orl	a,#0x08
   AF84 F0                 3043 	movx	@dptr,a
                           3044 ;	../../shared/src/dll_cal_rom.c:352: lnx_cal_dll_eom_gmsel[rate] = (EOM_DLL_GMSEL & 0x7) | 0x00;	
   AF85 A2 0E              3045 	mov	c,_rx_pll_rate
   AF87 E4                 3046 	clr	a
   AF88 33                 3047 	rlc	a
   AF89 24 0A              3048 	add	a,#_lnx_cal_dll_eom_gmsel
   AF8B FA                 3049 	mov	r2,a
   AF8C E4                 3050 	clr	a
   AF8D 34 66              3051 	addc	a,#(_lnx_cal_dll_eom_gmsel >> 8)
   AF8F FB                 3052 	mov	r3,a
   AF90 90 00 24           3053 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_9
   AF93 E0                 3054 	movx	a,@dptr
   AF94 C4                 3055 	swap	a
   AF95 03                 3056 	rr	a
   AF96 54 07              3057 	anl	a,#0x07
   AF98 FC                 3058 	mov	r4,a
   AF99 53 04 07           3059 	anl	ar4,#0x07
   AF9C 8A 82              3060 	mov	dpl,r2
   AF9E 8B 83              3061 	mov	dph,r3
   AFA0 EC                 3062 	mov	a,r4
   AFA1 F0                 3063 	movx	@dptr,a
   AFA2                    3064 00119$:
   AFA2 02 00 C5           3065 	ljmp	__sdcc_banked_ret
                           3066 ;------------------------------------------------------------
                           3067 ;Allocation info for local variables in function 'set_sellv_rxeomdll_ch'
                           3068 ;------------------------------------------------------------
                           3069 ;val                       Allocated to registers r2 
                           3070 ;------------------------------------------------------------
                           3071 ;	../../shared/src/dll_cal_rom.c:384: void set_sellv_rxeomdll_ch(uint8_t val) BANKING_CTRL {
                           3072 ;	-----------------------------------------
                           3073 ;	 function set_sellv_rxeomdll_ch
                           3074 ;	-----------------------------------------
   AFA5                    3075 _set_sellv_rxeomdll_ch:
   AFA5 AA 82              3076 	mov	r2,dpl
                           3077 ;	../../shared/src/dll_cal_rom.c:385: switch(mcuid) {
   AFA7 90 22 00           3078 	mov	dptr,#_MCU_CONTROL_LANE
   AFAA E0                 3079 	movx	a,@dptr
   AFAB FB                 3080 	mov	r3,a
   AFAC 60 05              3081 	jz	00101$
                           3082 ;	../../shared/src/dll_cal_rom.c:386: case MCU_LANE0: 
   AFAE BB 01 26           3083 	cjne	r3,#0x01,00104$
   AFB1 80 13              3084 	sjmp	00102$
   AFB3                    3085 00101$:
                           3086 ;	../../shared/src/dll_cal_rom.c:387: reg_SELLV_RXEOMDLL_CH0_5_0 = val; break;
   AFB3 90 82 60           3087 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_152
   AFB6 EA                 3088 	mov	a,r2
   AFB7 2A                 3089 	add	a,r2
   AFB8 25 E0              3090 	add	a,acc
   AFBA 54 FC              3091 	anl	a,#0xfc
   AFBC F5 F0              3092 	mov	b,a
   AFBE E0                 3093 	movx	a,@dptr
   AFBF 54 03              3094 	anl	a,#0x03
   AFC1 45 F0              3095 	orl	a,b
   AFC3 F0                 3096 	movx	@dptr,a
                           3097 ;	../../shared/src/dll_cal_rom.c:388: case MCU_LANE1:	
   AFC4 80 11              3098 	sjmp	00104$
   AFC6                    3099 00102$:
                           3100 ;	../../shared/src/dll_cal_rom.c:389: reg_SELLV_RXEOMDLL_CH1_5_0 = val; break;
   AFC6 90 82 64           3101 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_153
   AFC9 EA                 3102 	mov	a,r2
   AFCA 2A                 3103 	add	a,r2
   AFCB 25 E0              3104 	add	a,acc
   AFCD 54 FC              3105 	anl	a,#0xfc
   AFCF F5 F0              3106 	mov	b,a
   AFD1 E0                 3107 	movx	a,@dptr
   AFD2 54 03              3108 	anl	a,#0x03
   AFD4 45 F0              3109 	orl	a,b
   AFD6 F0                 3110 	movx	@dptr,a
                           3111 ;	../../shared/src/dll_cal_rom.c:390: }
   AFD7                    3112 00104$:
   AFD7 02 00 C5           3113 	ljmp	__sdcc_banked_ret
                           3114 ;------------------------------------------------------------
                           3115 ;Allocation info for local variables in function 'get_sellv_rxeomdll_ch'
                           3116 ;------------------------------------------------------------
                           3117 ;val                       Allocated to stack - offset 1
                           3118 ;------------------------------------------------------------
                           3119 ;	../../shared/src/dll_cal_rom.c:393: uint8_t get_sellv_rxeomdll_ch(void) BANKING_CTRL {
                           3120 ;	-----------------------------------------
                           3121 ;	 function get_sellv_rxeomdll_ch
                           3122 ;	-----------------------------------------
   AFDA                    3123 _get_sellv_rxeomdll_ch:
   AFDA C0 18              3124 	push	_bp
   AFDC 85 81 18           3125 	mov	_bp,sp
   AFDF 05 81              3126 	inc	sp
                           3127 ;	../../shared/src/dll_cal_rom.c:395: switch(mcuid) {
   AFE1 90 22 00           3128 	mov	dptr,#_MCU_CONTROL_LANE
   AFE4 E0                 3129 	movx	a,@dptr
   AFE5 FA                 3130 	mov	r2,a
   AFE6 60 05              3131 	jz	00101$
                           3132 ;	../../shared/src/dll_cal_rom.c:396: case MCU_LANE0: 
   AFE8 BA 01 17           3133 	cjne	r2,#0x01,00103$
   AFEB 80 0B              3134 	sjmp	00102$
   AFED                    3135 00101$:
                           3136 ;	../../shared/src/dll_cal_rom.c:397: val = reg_SELLV_RXEOMDLL_CH0_5_0; break;
   AFED 90 82 60           3137 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_152
   AFF0 E0                 3138 	movx	a,@dptr
   AFF1 03                 3139 	rr	a
   AFF2 03                 3140 	rr	a
   AFF3 54 3F              3141 	anl	a,#0x3f
   AFF5 FA                 3142 	mov	r2,a
                           3143 ;	../../shared/src/dll_cal_rom.c:398: case MCU_LANE1:	
   AFF6 80 0A              3144 	sjmp	00103$
   AFF8                    3145 00102$:
                           3146 ;	../../shared/src/dll_cal_rom.c:399: val = reg_SELLV_RXEOMDLL_CH1_5_0; break;
   AFF8 90 82 64           3147 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_153
   AFFB E0                 3148 	movx	a,@dptr
   AFFC 03                 3149 	rr	a
   AFFD 03                 3150 	rr	a
   AFFE 54 3F              3151 	anl	a,#0x3f
   B000 FB                 3152 	mov	r3,a
   B001 FA                 3153 	mov	r2,a
                           3154 ;	../../shared/src/dll_cal_rom.c:400: }
   B002                    3155 00103$:
                           3156 ;	../../shared/src/dll_cal_rom.c:402: return val;
   B002 8A 82              3157 	mov	dpl,r2
   B004 85 18 81           3158 	mov	sp,_bp
   B007 D0 18              3159 	pop	_bp
   B009 02 00 C5           3160 	ljmp	__sdcc_banked_ret
                           3161 	.area CSEG    (CODE)
                           3162 	.area BANK2   (CODE)
                           3163 	.area CABS    (ABS,CODE)
