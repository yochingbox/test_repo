                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:53 2018
                              5 ;--------------------------------------------------------
                              6 	.module cal_rom
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
                            979 	.globl _load_cal_data_all
                            980 	.globl _load_cal_data_dll
                            981 	.globl _ringpll_save
                            982 	.globl _ringpll_load
                            983 	.globl _ringpll_dac_fine_output
                            984 ;--------------------------------------------------------
                            985 ; special function registers
                            986 ;--------------------------------------------------------
                            987 	.area RSEG    (ABS,DATA)
   0000                     988 	.org 0x0000
                    0080    989 _P0	=	0x0080
                    0082    990 _DPL	=	0x0082
                    0083    991 _DPH	=	0x0083
                    0086    992 _WDTREL	=	0x0086
                    0087    993 _PCON	=	0x0087
                    0088    994 _TCON	=	0x0088
                    0089    995 _TMOD	=	0x0089
                    008A    996 _TL0	=	0x008a
                    008B    997 _TL1	=	0x008b
                    008C    998 _TH0	=	0x008c
                    008D    999 _TH1	=	0x008d
                    008E   1000 _CKCON	=	0x008e
                    0090   1001 _P1	=	0x0090
                    0092   1002 _DPS	=	0x0092
                    0094   1003 _PSBANK	=	0x0094
                    0098   1004 _SCON	=	0x0098
                    0099   1005 _SBUF	=	0x0099
                    009A   1006 _IEN2	=	0x009a
                    00A0   1007 _P2	=	0x00a0
                    00A1   1008 _DMAS0	=	0x00a1
                    00A2   1009 _DMAS1	=	0x00a2
                    00A3   1010 _DMAS2	=	0x00a3
                    00A4   1011 _DMAT0	=	0x00a4
                    00A5   1012 _DMAT1	=	0x00a5
                    00A6   1013 _DMAT2	=	0x00a6
                    00A8   1014 _IEN0	=	0x00a8
                    00A9   1015 _IP0	=	0x00a9
                    00AA   1016 _S0RELL	=	0x00aa
                    00B0   1017 _P3	=	0x00b0
                    00B1   1018 _DMAC0	=	0x00b1
                    00B2   1019 _DMAC1	=	0x00b2
                    00B3   1020 _DMAC2	=	0x00b3
                    00B4   1021 _DMASEL	=	0x00b4
                    00B5   1022 _DMAM0	=	0x00b5
                    00B6   1023 _DMAM1	=	0x00b6
                    00B8   1024 _IEN1	=	0x00b8
                    00B9   1025 _IP1	=	0x00b9
                    00BA   1026 _S0RELH	=	0x00ba
                    00C0   1027 _IRCON	=	0x00c0
                    00C1   1028 _CCEN	=	0x00c1
                    00C8   1029 _T2CON	=	0x00c8
                    00CA   1030 _RCAP2L	=	0x00ca
                    00CB   1031 _RCAP2H	=	0x00cb
                    00CC   1032 _TL2	=	0x00cc
                    00CD   1033 _TH2	=	0x00cd
                    00D0   1034 _PSW	=	0x00d0
                    00D8   1035 _ADCON	=	0x00d8
                    00E0   1036 _ACC	=	0x00e0
                    00E8   1037 _EIE	=	0x00e8
                    00F0   1038 _B	=	0x00f0
                    00F7   1039 _SRST	=	0x00f7
                    8C8A   1040 _TMR0	=	0x8c8a
                    8D8B   1041 _TMR1	=	0x8d8b
                    CDCC   1042 _TMR2	=	0xcdcc
                    A2A1   1043 _DMASA	=	0xa2a1
                    A5A4   1044 _DMATA	=	0xa5a4
                    B2B1   1045 _DMAC	=	0xb2b1
                           1046 ;--------------------------------------------------------
                           1047 ; special function bits
                           1048 ;--------------------------------------------------------
                           1049 	.area RSEG    (ABS,DATA)
   0000                    1050 	.org 0x0000
                    0080   1051 _P0_0	=	0x0080
                    0081   1052 _P0_1	=	0x0081
                    0082   1053 _P0_2	=	0x0082
                    0083   1054 _P0_3	=	0x0083
                    0084   1055 _P0_4	=	0x0084
                    0085   1056 _P0_5	=	0x0085
                    0086   1057 _P0_6	=	0x0086
                    0087   1058 _P0_7	=	0x0087
                    0090   1059 _P1_0	=	0x0090
                    0091   1060 _P1_1	=	0x0091
                    0092   1061 _P1_2	=	0x0092
                    0093   1062 _P1_3	=	0x0093
                    0094   1063 _P1_4	=	0x0094
                    0095   1064 _P1_5	=	0x0095
                    0096   1065 _P1_6	=	0x0096
                    0097   1066 _P1_7	=	0x0097
                    00A0   1067 _P2_0	=	0x00a0
                    00A1   1068 _P2_1	=	0x00a1
                    00A2   1069 _P2_2	=	0x00a2
                    00A3   1070 _P2_3	=	0x00a3
                    00A4   1071 _P2_4	=	0x00a4
                    00A5   1072 _P2_5	=	0x00a5
                    00A6   1073 _P2_6	=	0x00a6
                    00A7   1074 _P2_7	=	0x00a7
                    00B0   1075 _P3_0	=	0x00b0
                    00B1   1076 _P3_1	=	0x00b1
                    00B2   1077 _P3_2	=	0x00b2
                    00B3   1078 _P3_3	=	0x00b3
                    00B4   1079 _P3_4	=	0x00b4
                    00B5   1080 _P3_5	=	0x00b5
                    00B6   1081 _P3_6	=	0x00b6
                    00B7   1082 _P3_7	=	0x00b7
                    0088   1083 _IT0	=	0x0088
                    0089   1084 _IE0	=	0x0089
                    008A   1085 _IT1	=	0x008a
                    008B   1086 _IE1	=	0x008b
                    008C   1087 _TR0	=	0x008c
                    008D   1088 _TF0	=	0x008d
                    008E   1089 _TR1	=	0x008e
                    008F   1090 _TF1	=	0x008f
                    00A8   1091 _EX0	=	0x00a8
                    00A9   1092 _ET0	=	0x00a9
                    00AA   1093 _EX1	=	0x00aa
                    00AB   1094 _ET1	=	0x00ab
                    00AC   1095 _ES	=	0x00ac
                    00AD   1096 _ET2	=	0x00ad
                    00AE   1097 _WDT	=	0x00ae
                    00AF   1098 _EA	=	0x00af
                    00B8   1099 _EX7	=	0x00b8
                    00B9   1100 _EX2	=	0x00b9
                    00BA   1101 _EX3	=	0x00ba
                    00BB   1102 _EX4	=	0x00bb
                    00BC   1103 _EX5	=	0x00bc
                    00BD   1104 _EX6	=	0x00bd
                    00BE   1105 _PS1	=	0x00be
                    009A   1106 _ES1	=	0x009a
                    009B   1107 _EX8	=	0x009b
                    009C   1108 _EX9	=	0x009c
                    009D   1109 _EX10	=	0x009d
                    009E   1110 _EX11	=	0x009e
                    009F   1111 _EX12	=	0x009f
                    0098   1112 _RI	=	0x0098
                    0099   1113 _TI	=	0x0099
                    00C6   1114 _TF2	=	0x00c6
                           1115 ;--------------------------------------------------------
                           1116 ; overlayable register banks
                           1117 ;--------------------------------------------------------
                           1118 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1119 	.ds 8
                           1120 ;--------------------------------------------------------
                           1121 ; internal ram data
                           1122 ;--------------------------------------------------------
                           1123 	.area DSEG    (DATA)
                           1124 ;--------------------------------------------------------
                           1125 ; overlayable items in internal ram 
                           1126 ;--------------------------------------------------------
                           1127 	.area OSEG    (OVR,DATA)
                           1128 ;--------------------------------------------------------
                           1129 ; indirectly addressable internal ram data
                           1130 ;--------------------------------------------------------
                           1131 	.area ISEG    (DATA)
                           1132 ;--------------------------------------------------------
                           1133 ; absolute internal ram data
                           1134 ;--------------------------------------------------------
                           1135 	.area IABS    (ABS,DATA)
                           1136 	.area IABS    (ABS,DATA)
                           1137 ;--------------------------------------------------------
                           1138 ; bit data
                           1139 ;--------------------------------------------------------
                           1140 	.area BSEG    (BIT)
                           1141 ;--------------------------------------------------------
                           1142 ; paged external ram data
                           1143 ;--------------------------------------------------------
                           1144 	.area PSEG    (PAG,XDATA)
                           1145 ;--------------------------------------------------------
                           1146 ; external ram data
                           1147 ;--------------------------------------------------------
                           1148 	.area XSEG    (XDATA)
                    1000   1149 _UPHY14_TRX_LANEPLL_ANAREG_TOP_128	=	0x1000
                    1004   1150 _UPHY14_TRX_LANEPLL_ANAREG_TOP_129	=	0x1004
                    1008   1151 _UPHY14_TRX_LANEPLL_ANAREG_TOP_130	=	0x1008
                    100C   1152 _UPHY14_TRX_LANEPLL_ANAREG_TOP_131	=	0x100c
                    1010   1153 _UPHY14_TRX_LANEPLL_ANAREG_TOP_132	=	0x1010
                    1014   1154 _UPHY14_TRX_LANEPLL_ANAREG_TOP_133	=	0x1014
                    1018   1155 _UPHY14_TRX_LANEPLL_ANAREG_TOP_134	=	0x1018
                    101C   1156 _UPHY14_TRX_LANEPLL_ANAREG_TOP_135	=	0x101c
                    1020   1157 _UPHY14_TRX_LANEPLL_ANAREG_TOP_136	=	0x1020
                    1024   1158 _UPHY14_TRX_LANEPLL_ANAREG_TOP_137	=	0x1024
                    1028   1159 _UPHY14_TRX_LANEPLL_ANAREG_TOP_138	=	0x1028
                    102C   1160 _UPHY14_TRX_LANEPLL_ANAREG_TOP_139	=	0x102c
                    1030   1161 _UPHY14_TRX_LANEPLL_ANAREG_TOP_140	=	0x1030
                    1034   1162 _UPHY14_TRX_LANEPLL_ANAREG_TOP_141	=	0x1034
                    1038   1163 _UPHY14_TRX_LANEPLL_ANAREG_TOP_142	=	0x1038
                    103C   1164 _UPHY14_TRX_LANEPLL_ANAREG_TOP_143	=	0x103c
                    0200   1165 _UPHY14_TRX_ANAREG_TOP_128	=	0x0200
                    0204   1166 _UPHY14_TRX_ANAREG_TOP_129	=	0x0204
                    0208   1167 _UPHY14_TRX_ANAREG_TOP_130	=	0x0208
                    020C   1168 _UPHY14_TRX_ANAREG_TOP_131	=	0x020c
                    0210   1169 _UPHY14_TRX_ANAREG_TOP_132	=	0x0210
                    0214   1170 _UPHY14_TRX_ANAREG_TOP_133	=	0x0214
                    0218   1171 _UPHY14_TRX_ANAREG_TOP_134	=	0x0218
                    021C   1172 _UPHY14_TRX_ANAREG_TOP_135	=	0x021c
                    0220   1173 _UPHY14_TRX_ANAREG_TOP_136	=	0x0220
                    0224   1174 _UPHY14_TRX_ANAREG_TOP_137	=	0x0224
                    0228   1175 _UPHY14_TRX_ANAREG_TOP_138	=	0x0228
                    022C   1176 _UPHY14_TRX_ANAREG_TOP_139	=	0x022c
                    0230   1177 _UPHY14_TRX_ANAREG_TOP_140	=	0x0230
                    0234   1178 _UPHY14_TRX_ANAREG_TOP_141	=	0x0234
                    0238   1179 _UPHY14_TRX_ANAREG_TOP_142	=	0x0238
                    023C   1180 _UPHY14_TRX_ANAREG_TOP_143	=	0x023c
                    0240   1181 _UPHY14_TRX_ANAREG_TOP_144	=	0x0240
                    0244   1182 _UPHY14_TRX_ANAREG_TOP_145	=	0x0244
                    0248   1183 _UPHY14_TRX_ANAREG_TOP_146	=	0x0248
                    024C   1184 _UPHY14_TRX_ANAREG_TOP_147	=	0x024c
                    0250   1185 _UPHY14_TRX_ANAREG_TOP_148	=	0x0250
                    0254   1186 _UPHY14_TRX_ANAREG_TOP_149	=	0x0254
                    0258   1187 _UPHY14_TRX_ANAREG_TOP_150	=	0x0258
                    025C   1188 _UPHY14_TRX_ANAREG_TOP_151	=	0x025c
                    0260   1189 _UPHY14_TRX_ANAREG_TOP_152	=	0x0260
                    0264   1190 _UPHY14_TRX_ANAREG_TOP_153	=	0x0264
                    0268   1191 _UPHY14_TRX_ANAREG_TOP_154	=	0x0268
                    026C   1192 _UPHY14_TRX_ANAREG_TOP_155	=	0x026c
                    0270   1193 _UPHY14_TRX_ANAREG_TOP_156	=	0x0270
                    0274   1194 _UPHY14_TRX_ANAREG_TOP_157	=	0x0274
                    0000   1195 _UPHY14_TRX_ANAREG_BOT_0	=	0x0000
                    0004   1196 _UPHY14_TRX_ANAREG_BOT_1	=	0x0004
                    0008   1197 _UPHY14_TRX_ANAREG_BOT_2	=	0x0008
                    000C   1198 _UPHY14_TRX_ANAREG_BOT_3	=	0x000c
                    0010   1199 _UPHY14_TRX_ANAREG_BOT_4	=	0x0010
                    0014   1200 _UPHY14_TRX_ANAREG_BOT_5	=	0x0014
                    0018   1201 _UPHY14_TRX_ANAREG_BOT_6	=	0x0018
                    001C   1202 _UPHY14_TRX_ANAREG_BOT_7	=	0x001c
                    0020   1203 _UPHY14_TRX_ANAREG_BOT_8	=	0x0020
                    0024   1204 _UPHY14_TRX_ANAREG_BOT_9	=	0x0024
                    0028   1205 _UPHY14_TRX_ANAREG_BOT_10	=	0x0028
                    002C   1206 _UPHY14_TRX_ANAREG_BOT_11	=	0x002c
                    0030   1207 _UPHY14_TRX_ANAREG_BOT_12	=	0x0030
                    0034   1208 _UPHY14_TRX_ANAREG_BOT_13	=	0x0034
                    0038   1209 _UPHY14_TRX_ANAREG_BOT_14	=	0x0038
                    003C   1210 _UPHY14_TRX_ANAREG_BOT_15	=	0x003c
                    0040   1211 _UPHY14_TRX_ANAREG_BOT_16	=	0x0040
                    0044   1212 _UPHY14_TRX_ANAREG_BOT_17	=	0x0044
                    0048   1213 _UPHY14_TRX_ANAREG_BOT_18	=	0x0048
                    004C   1214 _UPHY14_TRX_ANAREG_BOT_19	=	0x004c
                    0050   1215 _UPHY14_TRX_ANAREG_BOT_20	=	0x0050
                    0054   1216 _UPHY14_TRX_ANAREG_BOT_21	=	0x0054
                    0058   1217 _UPHY14_TRX_ANAREG_BOT_22	=	0x0058
                    005C   1218 _UPHY14_TRX_ANAREG_BOT_23	=	0x005c
                    0060   1219 _UPHY14_TRX_ANAREG_BOT_24	=	0x0060
                    0064   1220 _UPHY14_TRX_ANAREG_BOT_25	=	0x0064
                    0068   1221 _UPHY14_TRX_ANAREG_BOT_26	=	0x0068
                    006C   1222 _UPHY14_TRX_ANAREG_BOT_27	=	0x006c
                    0070   1223 _UPHY14_TRX_ANAREG_BOT_28	=	0x0070
                    0074   1224 _UPHY14_TRX_ANAREG_BOT_29	=	0x0074
                    0078   1225 _UPHY14_TRX_ANAREG_BOT_30	=	0x0078
                    007C   1226 _UPHY14_TRX_ANAREG_BOT_31	=	0x007c
                    0080   1227 _UPHY14_TRX_ANAREG_BOT_32	=	0x0080
                    0478   1228 _ANA_DFEE_REG_1E	=	0x0478
                    047C   1229 _ANA_DFEE_REG_1F	=	0x047c
                    0480   1230 _ANA_DFEE_REG_20	=	0x0480
                    0484   1231 _ANA_DFEE_REG_21	=	0x0484
                    0488   1232 _ANA_DFEE_REG_22	=	0x0488
                    048C   1233 _ANA_DFEE_REG_23	=	0x048c
                    0490   1234 _ANA_DFEE_REG_24	=	0x0490
                    0494   1235 _ANA_DFEE_REG_25	=	0x0494
                    0498   1236 _ANA_DFEE_REG_26	=	0x0498
                    049C   1237 _ANA_DFEE_REG_27	=	0x049c
                    0400   1238 _ANA_DFEE_REG_00	=	0x0400
                    0404   1239 _ANA_DFEE_REG_01	=	0x0404
                    0408   1240 _ANA_DFEE_REG_02	=	0x0408
                    040C   1241 _ANA_DFEE_REG_03	=	0x040c
                    0410   1242 _ANA_DFEE_REG_04	=	0x0410
                    0414   1243 _ANA_DFEE_REG_05	=	0x0414
                    0418   1244 _ANA_DFEE_REG_06	=	0x0418
                    041C   1245 _ANA_DFEE_REG_07	=	0x041c
                    0420   1246 _ANA_DFEE_REG_08	=	0x0420
                    0424   1247 _ANA_DFEE_REG_09	=	0x0424
                    0428   1248 _ANA_DFEE_REG_0A	=	0x0428
                    042C   1249 _ANA_DFEE_REG_0B	=	0x042c
                    0430   1250 _ANA_DFEE_REG_0C	=	0x0430
                    0434   1251 _ANA_DFEE_REG_0D	=	0x0434
                    0438   1252 _ANA_DFEE_REG_0E	=	0x0438
                    043C   1253 _ANA_DFEE_REG_0F	=	0x043c
                    0440   1254 _ANA_DFEE_REG_10	=	0x0440
                    0444   1255 _ANA_DFEE_REG_11	=	0x0444
                    0448   1256 _ANA_DFEE_REG_12	=	0x0448
                    044C   1257 _ANA_DFEE_REG_13	=	0x044c
                    0450   1258 _ANA_DFEE_REG_14	=	0x0450
                    0454   1259 _ANA_DFEE_REG_15	=	0x0454
                    0458   1260 _ANA_DFEE_REG_16	=	0x0458
                    045C   1261 _ANA_DFEE_REG_17	=	0x045c
                    0460   1262 _ANA_DFEE_REG_18	=	0x0460
                    0464   1263 _ANA_DFEE_REG_19	=	0x0464
                    0468   1264 _ANA_DFEE_REG_1A	=	0x0468
                    046C   1265 _ANA_DFEE_REG_1B	=	0x046c
                    0470   1266 _ANA_DFEE_REG_1C	=	0x0470
                    0474   1267 _ANA_DFEE_REG_1D	=	0x0474
                    0830   1268 _ANA_DFEO_REG_0C	=	0x0830
                    0834   1269 _ANA_DFEO_REG_0D	=	0x0834
                    0838   1270 _ANA_DFEO_REG_0E	=	0x0838
                    083C   1271 _ANA_DFEO_REG_0F	=	0x083c
                    0840   1272 _ANA_DFEO_REG_10	=	0x0840
                    0844   1273 _ANA_DFEO_REG_11	=	0x0844
                    0848   1274 _ANA_DFEO_REG_12	=	0x0848
                    084C   1275 _ANA_DFEO_REG_13	=	0x084c
                    0850   1276 _ANA_DFEO_REG_14	=	0x0850
                    0854   1277 _ANA_DFEO_REG_15	=	0x0854
                    0858   1278 _ANA_DFEO_REG_16	=	0x0858
                    085C   1279 _ANA_DFEO_REG_17	=	0x085c
                    0860   1280 _ANA_DFEO_REG_18	=	0x0860
                    0864   1281 _ANA_DFEO_REG_19	=	0x0864
                    0868   1282 _ANA_DFEO_REG_1A	=	0x0868
                    086C   1283 _ANA_DFEO_REG_1B	=	0x086c
                    0870   1284 _ANA_DFEO_REG_1C	=	0x0870
                    0874   1285 _ANA_DFEO_REG_1D	=	0x0874
                    0878   1286 _ANA_DFEO_REG_1E	=	0x0878
                    087C   1287 _ANA_DFEO_REG_1F	=	0x087c
                    0880   1288 _ANA_DFEO_REG_20	=	0x0880
                    0884   1289 _ANA_DFEO_REG_21	=	0x0884
                    0888   1290 _ANA_DFEO_REG_22	=	0x0888
                    088C   1291 _ANA_DFEO_REG_23	=	0x088c
                    0890   1292 _ANA_DFEO_REG_24	=	0x0890
                    0894   1293 _ANA_DFEO_REG_25	=	0x0894
                    0898   1294 _ANA_DFEO_REG_26	=	0x0898
                    089C   1295 _ANA_DFEO_REG_27	=	0x089c
                    0800   1296 _ANA_DFEO_REG_00	=	0x0800
                    0804   1297 _ANA_DFEO_REG_01	=	0x0804
                    0808   1298 _ANA_DFEO_REG_02	=	0x0808
                    080C   1299 _ANA_DFEO_REG_03	=	0x080c
                    0810   1300 _ANA_DFEO_REG_04	=	0x0810
                    0814   1301 _ANA_DFEO_REG_05	=	0x0814
                    0818   1302 _ANA_DFEO_REG_06	=	0x0818
                    081C   1303 _ANA_DFEO_REG_07	=	0x081c
                    0820   1304 _ANA_DFEO_REG_08	=	0x0820
                    0824   1305 _ANA_DFEO_REG_09	=	0x0824
                    0828   1306 _ANA_DFEO_REG_0A	=	0x0828
                    082C   1307 _ANA_DFEO_REG_0B	=	0x082c
                    8200   1308 _UPHY14_CMN_ANAREG_TOP_128	=	0x8200
                    8204   1309 _UPHY14_CMN_ANAREG_TOP_129	=	0x8204
                    8208   1310 _UPHY14_CMN_ANAREG_TOP_130	=	0x8208
                    820C   1311 _UPHY14_CMN_ANAREG_TOP_131	=	0x820c
                    8210   1312 _UPHY14_CMN_ANAREG_TOP_132	=	0x8210
                    8214   1313 _UPHY14_CMN_ANAREG_TOP_133	=	0x8214
                    8218   1314 _UPHY14_CMN_ANAREG_TOP_134	=	0x8218
                    821C   1315 _UPHY14_CMN_ANAREG_TOP_135	=	0x821c
                    8220   1316 _UPHY14_CMN_ANAREG_TOP_136	=	0x8220
                    8224   1317 _UPHY14_CMN_ANAREG_TOP_137	=	0x8224
                    8228   1318 _UPHY14_CMN_ANAREG_TOP_138	=	0x8228
                    822C   1319 _UPHY14_CMN_ANAREG_TOP_139	=	0x822c
                    8230   1320 _UPHY14_CMN_ANAREG_TOP_140	=	0x8230
                    8234   1321 _UPHY14_CMN_ANAREG_TOP_141	=	0x8234
                    8238   1322 _UPHY14_CMN_ANAREG_TOP_142	=	0x8238
                    823C   1323 _UPHY14_CMN_ANAREG_TOP_143	=	0x823c
                    8240   1324 _UPHY14_CMN_ANAREG_TOP_144	=	0x8240
                    8244   1325 _UPHY14_CMN_ANAREG_TOP_145	=	0x8244
                    8248   1326 _UPHY14_CMN_ANAREG_TOP_146	=	0x8248
                    824C   1327 _UPHY14_CMN_ANAREG_TOP_147	=	0x824c
                    8250   1328 _UPHY14_CMN_ANAREG_TOP_148	=	0x8250
                    8254   1329 _UPHY14_CMN_ANAREG_TOP_149	=	0x8254
                    8258   1330 _UPHY14_CMN_ANAREG_TOP_150	=	0x8258
                    825C   1331 _UPHY14_CMN_ANAREG_TOP_151	=	0x825c
                    8260   1332 _UPHY14_CMN_ANAREG_TOP_152	=	0x8260
                    8264   1333 _UPHY14_CMN_ANAREG_TOP_153	=	0x8264
                    8268   1334 _UPHY14_CMN_ANAREG_TOP_154	=	0x8268
                    826C   1335 _UPHY14_CMN_ANAREG_TOP_155	=	0x826c
                    8270   1336 _UPHY14_CMN_ANAREG_TOP_156	=	0x8270
                    8274   1337 _UPHY14_CMN_ANAREG_TOP_157	=	0x8274
                    8278   1338 _UPHY14_CMN_ANAREG_TOP_158	=	0x8278
                    827C   1339 _UPHY14_CMN_ANAREG_TOP_159	=	0x827c
                    8280   1340 _UPHY14_CMN_ANAREG_TOP_160	=	0x8280
                    8284   1341 _UPHY14_CMN_ANAREG_TOP_161	=	0x8284
                    8288   1342 _UPHY14_CMN_ANAREG_TOP_162	=	0x8288
                    828C   1343 _UPHY14_CMN_ANAREG_TOP_163	=	0x828c
                    8290   1344 _UPHY14_CMN_ANAREG_TOP_164	=	0x8290
                    8294   1345 _UPHY14_CMN_ANAREG_TOP_165	=	0x8294
                    8298   1346 _UPHY14_CMN_ANAREG_TOP_166	=	0x8298
                    829C   1347 _UPHY14_CMN_ANAREG_TOP_167	=	0x829c
                    82A0   1348 _UPHY14_CMN_ANAREG_TOP_168	=	0x82a0
                    82A4   1349 _UPHY14_CMN_ANAREG_TOP_169	=	0x82a4
                    82A8   1350 _UPHY14_CMN_ANAREG_TOP_170	=	0x82a8
                    82AC   1351 _UPHY14_CMN_ANAREG_TOP_171	=	0x82ac
                    82B0   1352 _UPHY14_CMN_ANAREG_TOP_172	=	0x82b0
                    82B4   1353 _UPHY14_CMN_ANAREG_TOP_173	=	0x82b4
                    82B8   1354 _UPHY14_CMN_ANAREG_TOP_174	=	0x82b8
                    82BC   1355 _UPHY14_CMN_ANAREG_TOP_175	=	0x82bc
                    82C0   1356 _UPHY14_CMN_ANAREG_TOP_176	=	0x82c0
                    82C4   1357 _UPHY14_CMN_ANAREG_TOP_177	=	0x82c4
                    82C8   1358 _UPHY14_CMN_ANAREG_TOP_178	=	0x82c8
                    82CC   1359 _UPHY14_CMN_ANAREG_TOP_179	=	0x82cc
                    82D0   1360 _UPHY14_CMN_ANAREG_TOP_180	=	0x82d0
                    82D4   1361 _UPHY14_CMN_ANAREG_TOP_181	=	0x82d4
                    82D8   1362 _UPHY14_CMN_ANAREG_TOP_182	=	0x82d8
                    82DC   1363 _UPHY14_CMN_ANAREG_TOP_183	=	0x82dc
                    82E0   1364 _UPHY14_CMN_ANAREG_TOP_184	=	0x82e0
                    82E4   1365 _UPHY14_CMN_ANAREG_TOP_185	=	0x82e4
                    82E8   1366 _UPHY14_CMN_ANAREG_TOP_186	=	0x82e8
                    82EC   1367 _UPHY14_CMN_ANAREG_TOP_187	=	0x82ec
                    82F0   1368 _UPHY14_CMN_ANAREG_TOP_188	=	0x82f0
                    82F4   1369 _UPHY14_CMN_ANAREG_TOP_189	=	0x82f4
                    82F8   1370 _UPHY14_CMN_ANAREG_TOP_190	=	0x82f8
                    82FC   1371 _UPHY14_CMN_ANAREG_TOP_191	=	0x82fc
                    8300   1372 _UPHY14_CMN_ANAREG_TOP_192	=	0x8300
                    8304   1373 _UPHY14_CMN_ANAREG_TOP_193	=	0x8304
                    8308   1374 _UPHY14_CMN_ANAREG_TOP_194	=	0x8308
                    830C   1375 _UPHY14_CMN_ANAREG_TOP_195	=	0x830c
                    8310   1376 _UPHY14_CMN_ANAREG_TOP_196	=	0x8310
                    8314   1377 _UPHY14_CMN_ANAREG_TOP_197	=	0x8314
                    8318   1378 _UPHY14_CMN_ANAREG_TOP_198	=	0x8318
                    831C   1379 _UPHY14_CMN_ANAREG_TOP_199	=	0x831c
                    8320   1380 _UPHY14_CMN_ANAREG_TOP_200	=	0x8320
                    8324   1381 _UPHY14_CMN_ANAREG_TOP_201	=	0x8324
                    8328   1382 _UPHY14_CMN_ANAREG_TOP_202	=	0x8328
                    832C   1383 _UPHY14_CMN_ANAREG_TOP_203	=	0x832c
                    8330   1384 _UPHY14_CMN_ANAREG_TOP_204	=	0x8330
                    8334   1385 _UPHY14_CMN_ANAREG_TOP_205	=	0x8334
                    8338   1386 _UPHY14_CMN_ANAREG_TOP_206	=	0x8338
                    833C   1387 _UPHY14_CMN_ANAREG_TOP_207	=	0x833c
                    8340   1388 _UPHY14_CMN_ANAREG_TOP_208	=	0x8340
                    8344   1389 _UPHY14_CMN_ANAREG_TOP_209	=	0x8344
                    8348   1390 _UPHY14_CMN_ANAREG_TOP_210	=	0x8348
                    834C   1391 _UPHY14_CMN_ANAREG_TOP_211	=	0x834c
                    8350   1392 _UPHY14_CMN_ANAREG_TOP_212	=	0x8350
                    8354   1393 _UPHY14_CMN_ANAREG_TOP_213	=	0x8354
                    8358   1394 _UPHY14_CMN_ANAREG_TOP_214	=	0x8358
                    2000   1395 _PM_CTRL_TX_LANE_REG1_LANE	=	0x2000
                    2004   1396 _PM_CTRL_TX_LANE_REG2_LANE	=	0x2004
                    2008   1397 _INPUT_TX_PIN_REG0_LANE	=	0x2008
                    200C   1398 _INPUT_TX_PIN_REG1_LANE	=	0x200c
                    2010   1399 _INPUT_TX_PIN_REG2_LANE	=	0x2010
                    2014   1400 _INPUT_TX_PIN_REG3_LANE	=	0x2014
                    2018   1401 _PM_CTRL_INTERRUPT_REG1_LANE	=	0x2018
                    201C   1402 _PM_CTRL_INTERRUPT_REG2	=	0x201c
                    2020   1403 _CLKGEN_TX_LANE_REG1_LANE	=	0x2020
                    2024   1404 _TX_SPEED_CONVERT_LANE	=	0x2024
                    2028   1405 _SPD_CTRL_INTERRUPT_REG1_LANE	=	0x2028
                    202C   1406 _SPD_CTRL_INTERRUPT_REG2	=	0x202c
                    2030   1407 _SPD_CTRL_TX_LANE_REG1_LANE	=	0x2030
                    2034   1408 _TX_SYSTEM_LANE	=	0x2034
                    203C   1409 _INPUT_TX_PIN_REG4_LANE	=	0x203c
                    2040   1410 _TX_CALIBRATION_LANE	=	0x2040
                    2044   1411 _DIG_TX_RSVD_REG0	=	0x2044
                    2048   1412 _INPUT_TX_PIN_REG5_LANE	=	0x2048
                    204C   1413 __FIELDNAME__LANE	=	0x204c
                    2050   1414 _PM_CTRL_INTERRUPT_ISR_REG1_LANE	=	0x2050
                    2054   1415 _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE	=	0x2054
                    2058   1416 _ANALOG_TX_REALTIME_REG_1	=	0x2058
                    205C   1417 _MON_TOP	=	0x205c
                    2100   1418 _PM_CTRL_RX_LANE_REG1_LANE	=	0x2100
                    2104   1419 _RX_SYSTEM_LANE	=	0x2104
                    2108   1420 _INPUT_RX_PIN_REG0_LANE	=	0x2108
                    210C   1421 _INPUT_RX_PIN_REG1_LANE	=	0x210c
                    2110   1422 _INPUT_RX_PIN_REG2_LANE	=	0x2110
                    2114   1423 _SPD_CTRL_RX_LANE_REG1_LANE	=	0x2114
                    2118   1424 _DIG_RX_RSVD_REG0	=	0x2118
                    211C   1425 _CLKGEN_RX_LANE_REG1_LANE	=	0x211c
                    2120   1426 _FRAME_SYNC_DET_REG0	=	0x2120
                    2124   1427 _FRAME_SYNC_DET_REG1	=	0x2124
                    2128   1428 _FRAME_SYNC_DET_REG2	=	0x2128
                    212C   1429 _FRAME_SYNC_DET_REG3	=	0x212c
                    2130   1430 _FRAME_SYNC_DET_REG4	=	0x2130
                    2134   1431 _FRAME_SYNC_DET_REG5	=	0x2134
                    2138   1432 _FRAME_SYNC_DET_REG6	=	0x2138
                    213C   1433 _CDR_LOCK_REG	=	0x213c
                    2140   1434 _RX_LANE_INTERRUPT	=	0x2140
                    2144   1435 _RX_LANE_INTERRUPT_MASK	=	0x2144
                    2148   1436 _RX_DATA_PATH_REG	=	0x2148
                    214C   1437 _INPUT_RX_PIN_REG3_LANE	=	0x214c
                    2150   1438 _RX_CALIBRATION_REG	=	0x2150
                    2158   1439 _RX_LANE_INTERRUPT_REG1	=	0x2158
                    2160   1440 _DTL_REG0	=	0x2160
                    2164   1441 _DTL_REG1	=	0x2164
                    2168   1442 _DTL_REG2	=	0x2168
                    216C   1443 _DTL_REG3	=	0x216c
                    2170   1444 _SQ_REG0	=	0x2170
                    4000   1445 _LANE_CFG0	=	0x4000
                    4004   1446 _LANE_STATUS0	=	0x4004
                    4008   1447 _LANE_CFG_STATUS2_LANE	=	0x4008
                    400C   1448 _LANE_CFG2_LANE	=	0x400c
                    4010   1449 _LANE_CFG4	=	0x4010
                    4014   1450 _LANE_CFG_STATUS3_LANE	=	0x4014
                    4018   1451 _LANE_DP_PIE8_CFG0_LANE	=	0x4018
                    401C   1452 _LANE_USB_DP_CFG1_LANE	=	0x401c
                    4020   1453 _LANE_USB_DP_CFG2_LANE	=	0x4020
                    4024   1454 _LANE_EQ_CFG0_LANE	=	0x4024
                    4028   1455 _LANE_EQ_CFG1_LANE	=	0x4028
                    402C   1456 _LANE_PRESET_CFG0_LANE	=	0x402c
                    4030   1457 _LANE_PRESET_CFG2_LANE	=	0x4030
                    4034   1458 _LANE_PRESET_CFG4_LANE	=	0x4034
                    4038   1459 _LANE_PRESET_CFG6_LANE	=	0x4038
                    403C   1460 _LANE_PRESET_CFG8_LANE	=	0x403c
                    4040   1461 _LANE_PRESET_CFG10_LANE	=	0x4040
                    4044   1462 _LANE_PRESET_CFG12_LANE	=	0x4044
                    4048   1463 _LANE_PRESET_CFG14_LANE	=	0x4048
                    404C   1464 _LANE_PRESET_CFG16_LANE	=	0x404c
                    4050   1465 _LANE_COEFF_MAX0_LANE	=	0x4050
                    4054   1466 _LANE_REMOTE_SET_LANE	=	0x4054
                    4058   1467 _LANE_EQ_16G_CFG0_LANE	=	0x4058
                    405C   1468 _LANE_16G_PRESET_CFG0_LANE	=	0x405c
                    4060   1469 _LANE_16G_PRESET_CFG2_LANE	=	0x4060
                    4064   1470 _LANE_16G_PRESET_CFG4_LANE	=	0x4064
                    4068   1471 _LANE_16G_PRESET_CFG6_LANE	=	0x4068
                    406C   1472 _LANE_16G_PRESET_CFG8_LANE	=	0x406c
                    4070   1473 _LANE_16G_PRESET_CFG10_LANE	=	0x4070
                    4074   1474 _LANE_16G_PRESET_CFG12_LANE	=	0x4074
                    4078   1475 _LANE_16G_PRESET_CFG14_LANE	=	0x4078
                    407C   1476 _LANE_16G_PRESET_CFG16_LANE	=	0x407c
                    4080   1477 _LANE_EQ_32G_CFG0_LANE	=	0x4080
                    4084   1478 _LANE_32G_PRESET_CFG0_LANE	=	0x4084
                    4088   1479 _LANE_32G_PRESET_CFG2_LANE	=	0x4088
                    408C   1480 _LANE_32G_PRESET_CFG4_LANE	=	0x408c
                    4090   1481 _LANE_32G_PRESET_CFG6_LANE	=	0x4090
                    4094   1482 _LANE_32G_PRESET_CFG8_LANE	=	0x4094
                    4098   1483 _LANE_32G_PRESET_CFG10_LANE	=	0x4098
                    409C   1484 _LANE_32G_PRESET_CFG12_LANE	=	0x409c
                    40A0   1485 _LANE_32G_PRESET_CFG14_LANE	=	0x40a0
                    40A4   1486 _LANE_32G_PRESET_CFG16_LANE	=	0x40a4
                    2200   1487 _MCU_CONTROL_LANE	=	0x2200
                    2204   1488 _MCU_GPIO	=	0x2204
                    2208   1489 _CACHE_DEBUG0	=	0x2208
                    220C   1490 _CACHE_DEBUG1	=	0x220c
                    2210   1491 _LANE_SYSTEM0	=	0x2210
                    2230   1492 _MCU_STATUS0_LANE	=	0x2230
                    2234   1493 _MCU_STATUS1_LANE	=	0x2234
                    2238   1494 _MCU_STATUS2_LANE	=	0x2238
                    223C   1495 _MCU_STATUS3_LANE	=	0x223c
                    2240   1496 _MCU_INT0_CONTROL	=	0x2240
                    2244   1497 _MCU_INT1_CONTROL	=	0x2244
                    2248   1498 _MCU_INT2_CONTROL	=	0x2248
                    224C   1499 _MCU_INT3_CONTROL	=	0x224c
                    2250   1500 _MCU_INT4_CONTROL	=	0x2250
                    2254   1501 _MCU_INT5_CONTROL	=	0x2254
                    2258   1502 _MCU_INT6_CONTROL	=	0x2258
                    225C   1503 _MCU_INT7_CONTROL	=	0x225c
                    2260   1504 _MCU_INT8_CONTROL	=	0x2260
                    2264   1505 _MCU_INT9_CONTROL	=	0x2264
                    2268   1506 _MCU_INT10_CONTROL	=	0x2268
                    226C   1507 _MCU_INT11_CONTROL	=	0x226c
                    2270   1508 _MCU_INT12_CONTROL	=	0x2270
                    2274   1509 _MCU_TIMER_CONTROL	=	0x2274
                    2278   1510 _MCU_TIMER0_CONTROL	=	0x2278
                    227C   1511 _MCU_TIMER1_CONTROL	=	0x227c
                    2280   1512 _MCU_TIMER2_CONTROL	=	0x2280
                    2284   1513 _MCU_TIMER3_CONTROL	=	0x2284
                    2288   1514 _MCU_IRQ_LANE	=	0x2288
                    228C   1515 _MCU_IRQ_MASK_LANE	=	0x228c
                    2290   1516 _MCU_MEM_REG1_LANE	=	0x2290
                    2294   1517 _MCU_MEM_REG2_LANE	=	0x2294
                    2298   1518 _MCU_TIMER_CTRL_1_LANE	=	0x2298
                    229C   1519 _MCU_TIMER_CTRL_2_LANE	=	0x229c
                    22A0   1520 _MCU_TIMER_CTRL_3_LANE	=	0x22a0
                    22A4   1521 _MCU_TIMER_CTRL_4_LANE	=	0x22a4
                    22A8   1522 _MCU_TIMER_CTRL_5_LANE	=	0x22a8
                    22AC   1523 _MCU_TIMER_CTRL_6_LANE	=	0x22ac
                    22B0   1524 _MCU_TIMER_CTRL_7_LANE	=	0x22b0
                    22B4   1525 _MCU_DEBUG0_LANE	=	0x22b4
                    22B8   1526 _MCU_DEBUG1_LANE	=	0x22b8
                    22BC   1527 _MCU_DEBUG2_LANE	=	0x22bc
                    22C0   1528 _MCU_DEBUG3_LANE	=	0x22c0
                    22C4   1529 _MCU_DEBUG_LANE	=	0x22c4
                    22C8   1530 _EXT_INT_CONTROL	=	0x22c8
                    22CC   1531 _ANA_IF_TRX_REG0	=	0x22cc
                    22D0   1532 _ANA_IF_DFEE_REG0	=	0x22d0
                    22D4   1533 _ANA_IF_DFEO_REG0	=	0x22d4
                    22D8   1534 _MCU_IRQ_ISR_LANE	=	0x22d8
                    22DC   1535 _MCU_WDT_LANE	=	0x22dc
                    22E0   1536 _MCU_INT_CONTROL_13	=	0x22e0
                    22E4   1537 _MCU_COMMAND0	=	0x22e4
                    22F4   1538 _MEM_ECC_ERR_ADDRESS0	=	0x22f4
                    22F8   1539 _XDATA_MEM_CHECKSUM_LANE0	=	0x22f8
                    22FC   1540 _XDATA_MEM_CHECKSUM_LANE1	=	0x22fc
                    2300   1541 _PT_CONTROL0	=	0x2300
                    2304   1542 _PT_CONTROL1	=	0x2304
                    2308   1543 _PT_USER_PATTERN0	=	0x2308
                    230C   1544 _PT_USER_PATTERN1	=	0x230c
                    2310   1545 _PT_USER_PATTERN2	=	0x2310
                    2314   1546 _PT_COUNTER0	=	0x2314
                    2318   1547 _PT_COUNTER1	=	0x2318
                    231C   1548 _PT_COUNTER2	=	0x231c
                    2400   1549 _DFE_CTRL_REG0	=	0x2400
                    2404   1550 _DFE_CTRL_REG1	=	0x2404
                    2408   1551 _DFE_CTRL_REG2	=	0x2408
                    240C   1552 _DFE_CTRL_REG3	=	0x240c
                    2410   1553 _RX_EQ_CLK_CTRL	=	0x2410
                    2414   1554 _DFE_CTRL_REG4	=	0x2414
                    2418   1555 _DFE_ANA_REG0	=	0x2418
                    241C   1556 _DFE_ANA_REG1	=	0x241c
                    2420   1557 _DFE_STEP_REG0	=	0x2420
                    2424   1558 _DFE_STEP_REG1	=	0x2424
                    2430   1559 _DFE_FEN_EVEN_REG	=	0x2430
                    2434   1560 _DFE_FEN_ODD_REG	=	0x2434
                    2438   1561 _DFE_DC_EVEN_REG8	=	0x2438
                    243C   1562 _DFE_DC_ODD_REG8	=	0x243c
                    2440   1563 _DFE_FEXT_EVEN_REG0	=	0x2440
                    2444   1564 _DFE_FEXT_EVEN_REG1	=	0x2444
                    2448   1565 _DFE_FEXT_EVEN_REG2	=	0x2448
                    244C   1566 _DFE_FEXT_EVEN_REG3	=	0x244c
                    2450   1567 _DFE_FEXT_EVEN_REG4	=	0x2450
                    2454   1568 _DFE_FEXT_EVEN_REG5	=	0x2454
                    2458   1569 _DFE_FEXT_EVEN_REG6	=	0x2458
                    245C   1570 _DFE_FEXT_EVEN_REG7	=	0x245c
                    2460   1571 _DFE_FEXT_ODD_REG0	=	0x2460
                    2464   1572 _DFE_FEXT_ODD_REG1	=	0x2464
                    2468   1573 _DFE_FEXT_ODD_REG2	=	0x2468
                    246C   1574 _DFE_FEXT_ODD_REG3	=	0x246c
                    2470   1575 _DFE_FEXT_ODD_REG4	=	0x2470
                    2474   1576 _DFE_FEXT_ODD_REG5	=	0x2474
                    2478   1577 _DFE_FEXT_ODD_REG6	=	0x2478
                    247C   1578 _DFE_FEXT_ODD_REG7	=	0x247c
                    2480   1579 _DFE_READ_EVEN_SM_REG0	=	0x2480
                    2484   1580 _DFE_READ_EVEN_SM_REG1	=	0x2484
                    2488   1581 _DFE_READ_EVEN_SM_REG2	=	0x2488
                    248C   1582 _DFE_READ_EVEN_SM_REG3	=	0x248c
                    2490   1583 _DFE_READ_EVEN_SM_REG4	=	0x2490
                    2494   1584 _DFE_READ_EVEN_SM_REG5	=	0x2494
                    2498   1585 _DFE_READ_EVEN_SM_REG6	=	0x2498
                    249C   1586 _DFE_READ_EVEN_SM_REG7	=	0x249c
                    24A0   1587 _DFE_READ_ODD_SM_REG0	=	0x24a0
                    24A4   1588 _DFE_READ_ODD_SM_REG1	=	0x24a4
                    24A8   1589 _DFE_READ_ODD_SM_REG2	=	0x24a8
                    24AC   1590 _DFE_READ_ODD_SM_REG3	=	0x24ac
                    24B0   1591 _DFE_READ_ODD_SM_REG4	=	0x24b0
                    24B4   1592 _DFE_READ_ODD_SM_REG5	=	0x24b4
                    24B8   1593 _DFE_READ_ODD_SM_REG6	=	0x24b8
                    24BC   1594 _DFE_READ_ODD_SM_REG7	=	0x24bc
                    24C0   1595 _DFE_READ_EVEN_SM_REG8	=	0x24c0
                    24C4   1596 _DFE_READ_ODD_SM_REG8	=	0x24c4
                    24D0   1597 _DFE_READ_EVEN_2C_REG0	=	0x24d0
                    24D4   1598 _DFE_READ_EVEN_2C_REG1	=	0x24d4
                    24D8   1599 _DFE_READ_EVEN_2C_REG2	=	0x24d8
                    24DC   1600 _DFE_READ_EVEN_2C_REG3	=	0x24dc
                    24E0   1601 _DFE_READ_EVEN_2C_REG4	=	0x24e0
                    24E4   1602 _DFE_READ_EVEN_2C_REG5	=	0x24e4
                    24E8   1603 _DFE_READ_EVEN_2C_REG6	=	0x24e8
                    24EC   1604 _DFE_READ_EVEN_2C_REG7	=	0x24ec
                    24F0   1605 _DFE_READ_ODD_2C_REG0	=	0x24f0
                    24F4   1606 _DFE_READ_ODD_2C_REG1	=	0x24f4
                    24F8   1607 _DFE_READ_ODD_2C_REG2	=	0x24f8
                    24FC   1608 _DFE_READ_ODD_2C_REG3	=	0x24fc
                    2500   1609 _DFE_READ_ODD_2C_REG4	=	0x2500
                    2504   1610 _DFE_READ_ODD_2C_REG5	=	0x2504
                    2508   1611 _DFE_READ_ODD_2C_REG6	=	0x2508
                    250C   1612 _DFE_READ_ODD_2C_REG7	=	0x250c
                    2510   1613 _DFE_READ_EVEN_2C_REG8	=	0x2510
                    2514   1614 _DFE_READ_ODD_2C_REG8	=	0x2514
                    2518   1615 _CAL_OFST_REG0	=	0x2518
                    251C   1616 _CAL_OFST_REG1	=	0x251c
                    2520   1617 _CAL_OFST_REG2	=	0x2520
                    2530   1618 _DFE_DCE_REG0	=	0x2530
                    2540   1619 _DFE_STATIC_LANE_REG0	=	0x2540
                    2544   1620 _DFE_STATIC_LANE_REG1	=	0x2544
                    2548   1621 _DFE_STATIC_LANE_REG3	=	0x2548
                    254C   1622 _DFE_STATIC_LANE_REG4	=	0x254c
                    2550   1623 _DFE_STATIC_LANE_REG5	=	0x2550
                    2554   1624 _DFE_STATIC_LANE_REG6	=	0x2554
                    2560   1625 _EOM_VLD_REG0	=	0x2560
                    2564   1626 _EOM_VLD_REG1	=	0x2564
                    2568   1627 _EOM_VLD_REG2	=	0x2568
                    256C   1628 _EOM_VLD_REG3	=	0x256c
                    2570   1629 _EOM_ERR_REG0	=	0x2570
                    2574   1630 _EOM_ERR_REG1	=	0x2574
                    2578   1631 _EOM_ERR_REG2	=	0x2578
                    257C   1632 _EOM_ERR_REG3	=	0x257c
                    2580   1633 _EOM_REG0	=	0x2580
                    25F0   1634 _EOM_VLD_REG4	=	0x25f0
                    25F4   1635 _LANE_MARGIN_REG0	=	0x25f4
                    6000   1636 _CAL_CTRL1_LANE	=	0x6000
                    6004   1637 _CAL_CTRL2_LANE	=	0x6004
                    6008   1638 _CAL_CTRL3_LANE	=	0x6008
                    600C   1639 _CAL_CTRL4_LANE	=	0x600c
                    6010   1640 _CAL_SAVE_DATA1_LANE	=	0x6010
                    6014   1641 _CAL_SAVE_DATA2_LANE	=	0x6014
                    6018   1642 _CAL_SAVE_DATA3_LANE	=	0x6018
                    601C   1643 _PHY_REMOTE_CTRL_COMMAND_LANE	=	0x601c
                    6020   1644 _PHY_REMOTE_CTRL_VALUE_LANE	=	0x6020
                    6024   1645 _PHY_LOCAL_VALUE_LANE	=	0x6024
                    6028   1646 _TRX_TRAIN_IF_TIMERS1_LANE	=	0x6028
                    602C   1647 _TRX_TRAIN_IF_TIMERS2_LANE	=	0x602c
                    6030   1648 _TRX_TRAIN_IF_TIMERS_ENABLE_LANE	=	0x6030
                    6034   1649 _DFE_CONTROL_0	=	0x6034
                    6038   1650 _DFE_CONTROL_1	=	0x6038
                    6040   1651 _DFE_CONTROL_2	=	0x6040
                    6044   1652 _DFE_CONTROL_3	=	0x6044
                    6048   1653 _DFE_CONTROL_4	=	0x6048
                    604C   1654 _DFE_CONTROL_5	=	0x604c
                    6050   1655 _TRAIN_CONTROL_0	=	0x6050
                    6054   1656 _TRAIN_CONTROL_1	=	0x6054
                    6058   1657 _TRAIN_CONTROL_2	=	0x6058
                    605C   1658 _RPTA_CONFIG_0	=	0x605c
                    6060   1659 _RPTA_CONFIG_1	=	0x6060
                    6064   1660 _DLL_CAL	=	0x6064
                    6068   1661 _TRAIN_PARA_0	=	0x6068
                    606C   1662 _TRAIN_PARA_1	=	0x606c
                    6070   1663 _TRAIN_PARA_2	=	0x6070
                    6074   1664 _TRAIN_PARA_3	=	0x6074
                    6078   1665 _DFE_CONTROL_6	=	0x6078
                    607C   1666 _DFE_TEST_0	=	0x607c
                    6080   1667 _DFE_TEST_1	=	0x6080
                    6084   1668 _DFE_TEST_4	=	0x6084
                    6088   1669 _DFE_TEST_5	=	0x6088
                    608C   1670 _DFE_CONTROL_7	=	0x608c
                    6090   1671 _DFE_CONTROL_8	=	0x6090
                    6094   1672 _DFE_CONTROL_9	=	0x6094
                    6098   1673 _DFE_CONTROL_10	=	0x6098
                    609C   1674 _DFE_CONTROL_11	=	0x609c
                    60A0   1675 _CDS_CTRL_REG0	=	0x60a0
                    60A4   1676 _CDS_CTRL_REG1	=	0x60a4
                    60A8   1677 _ESM_POP_P_CNT_LOW_LANE	=	0x60a8
                    60AC   1678 _ESM_ERR_P_CNT_LOW_LANE	=	0x60ac
                    60B0   1679 _ESM_ERR_POP_CNT_HIGH_LANE	=	0x60b0
                    60B4   1680 _TRAIN_CONTROL_3	=	0x60b4
                    60B8   1681 _TRAIN_CONTROL_4	=	0x60b8
                    60BC   1682 _TRAIN_CONTROL_5	=	0x60bc
                    60C0   1683 _TRAIN_CONTROL_6	=	0x60c0
                    60C4   1684 _TRAIN_CONTROL_7	=	0x60c4
                    60C8   1685 _TRAIN_CONTROL_8	=	0x60c8
                    60CC   1686 _TRAIN_CONTROL_9	=	0x60cc
                    60D0   1687 _TRAIN_CONTROL_10	=	0x60d0
                    60D4   1688 _TRAIN_CONTROL_11	=	0x60d4
                    60D8   1689 _TRAIN_CONTROL_12	=	0x60d8
                    60DC   1690 _ESM_POP_N_CNT_LOW_LANE	=	0x60dc
                    60E0   1691 _ESM_ERR_N_CNT_LOW_LANE	=	0x60e0
                    60E4   1692 _TRAIN_CONTROL_13	=	0x60e4
                    60E8   1693 _TRAIN_CONTROL_14	=	0x60e8
                    60EC   1694 _TRAIN_CONTROL_15	=	0x60ec
                    60F0   1695 _TRAIN_CONTROL_16	=	0x60f0
                    60F4   1696 _TRAIN_CONTROL_17	=	0x60f4
                    60F8   1697 _END_XDAT_LANE	=	0x60f8
                    A000   1698 _TX_CMN_REG	=	0xa000
                    A008   1699 _DTX_REG0	=	0xa008
                    A00C   1700 _DTX_REG1	=	0xa00c
                    A010   1701 _DTX_REG2	=	0xa010
                    A014   1702 _DTX_REG3	=	0xa014
                    A018   1703 _DTX_REG4	=	0xa018
                    A01C   1704 _DTX_PHY_ALIGN_REG0	=	0xa01c
                    A024   1705 _DTX_PHY_ALIGN_REG1	=	0xa024
                    A028   1706 _DTX_PHY_ALIGN_REG2	=	0xa028
                    A02C   1707 _SRIS_REG0	=	0xa02c
                    A030   1708 _SRIS_REG1	=	0xa030
                    A100   1709 _RX_CMN_0	=	0xa100
                    A110   1710 _DFE_STATIC_REG0	=	0xa110
                    A114   1711 _DFE_STATIC_REG1	=	0xa114
                    A118   1712 _DFE_STATIC_REG3	=	0xa118
                    A11C   1713 _DFE_STATIC_REG4	=	0xa11c
                    A120   1714 _DFE_STATIC_REG5	=	0xa120
                    A124   1715 _DFE_STATIC_REG6	=	0xa124
                    4200   1716 _GLOB_RST_CLK_CTRL	=	0x4200
                    4204   1717 _GLOB_CLK_SRC_LO	=	0x4204
                    4208   1718 _GLOB_CLK_SRC_HI	=	0x4208
                    420C   1719 _GLOB_MISC_CTRL	=	0x420c
                    4210   1720 _GLOB_DP_SAL_CFG	=	0x4210
                    4214   1721 _GLOB_DP_SAL_CFG1	=	0x4214
                    4218   1722 _GLOB_DP_SAL_CFG3	=	0x4218
                    421C   1723 _GLOB_DP_SAL_CFG5	=	0x421c
                    4220   1724 _GLOB_PM_CFG0	=	0x4220
                    4224   1725 _GLOB_COUNTER_CTRL	=	0x4224
                    4228   1726 _GLOB_COUNTER_HI	=	0x4228
                    422C   1727 _GLOB_PM_DP_CTRL	=	0x422c
                    4230   1728 _GLOB_DP_BAL_CFG0	=	0x4230
                    4234   1729 _GLOB_DP_BAL_CFG2	=	0x4234
                    4238   1730 _GLOB_DP_BAL_CFG4	=	0x4238
                    423C   1731 _GLOB_BIST_CTRL	=	0x423c
                    4240   1732 _GLOB_BIST_LANE_TYPE	=	0x4240
                    4244   1733 _GLOB_BIST_START	=	0x4244
                    4248   1734 _GLOB_BIST_MASK	=	0x4248
                    424C   1735 _GLOB_BIST_RESULT	=	0x424c
                    4250   1736 _GLOB_BIST_SEQR_CFG	=	0x4250
                    4254   1737 _GLOB_BIST_DATA_HI	=	0x4254
                    4258   1738 _GLOB_PIPE_REVISION	=	0x4258
                    425C   1739 _GLOB_L1_SUBSTATES_CFG	=	0x425c
                    A200   1740 _MCU_CONTROL_0	=	0xa200
                    A204   1741 _MCU_CONTROL_1	=	0xa204
                    A208   1742 _MCU_CONTROL_2	=	0xa208
                    A20C   1743 _MCU_CONTROL_3	=	0xa20c
                    A210   1744 _MCU_CONTROL_4	=	0xa210
                    A214   1745 _MCU_DEBUG0	=	0xa214
                    A218   1746 _MCU_DEBUG1	=	0xa218
                    A21C   1747 _MEMORY_CONTROL_0	=	0xa21c
                    A220   1748 _MEMORY_CONTROL_1	=	0xa220
                    A224   1749 _MEMORY_CONTROL_2	=	0xa224
                    A228   1750 _MEMORY_CONTROL_3	=	0xa228
                    A22C   1751 _MEMORY_CONTROL_4	=	0xa22c
                    A234   1752 _MCU_INFO_0	=	0xa234
                    A238   1753 _MCU_INFO_1	=	0xa238
                    A23C   1754 _MCU_INFO_2	=	0xa23c
                    A240   1755 _MCU_INFO_3	=	0xa240
                    A244   1756 _MEM_CMN_ECC_ERR_ADDRESS0	=	0xa244
                    A2E0   1757 _ANA_IF_CMN_REG1	=	0xa2e0
                    A2E4   1758 _MEM_IRQ	=	0xa2e4
                    A2E8   1759 _MEM_IRQ_MASK	=	0xa2e8
                    A2EC   1760 _ANA_IF_CMN_REG0	=	0xa2ec
                    A2F0   1761 _APB_CONTROL_REG	=	0xa2f0
                    A2F4   1762 _MEM_IRQ_CLEAR	=	0xa2f4
                    A2F8   1763 _MCU_SYNC1	=	0xa2f8
                    A2FC   1764 _MCU_SYNC2	=	0xa2fc
                    A300   1765 _TEST0	=	0xa300
                    A304   1766 _TEST1	=	0xa304
                    A308   1767 _TEST2	=	0xa308
                    A30C   1768 _TEST3	=	0xa30c
                    A310   1769 _TEST4	=	0xa310
                    A314   1770 _SYSTEM	=	0xa314
                    A318   1771 _PM_CMN_REG1	=	0xa318
                    A31C   1772 _INPUT_CMN_PIN_REG0	=	0xa31c
                    A320   1773 _INPUT_CMN_PIN_REG1	=	0xa320
                    A324   1774 _INPUT_CMN_PIN_REG2	=	0xa324
                    A328   1775 _ANA_TSEN_CONTROL	=	0xa328
                    A32C   1776 _PLLCAL_REG0	=	0xa32c
                    A330   1777 _PLLCAL_REG1	=	0xa330
                    A334   1778 _CLKGEN_CMN_REG1	=	0xa334
                    A338   1779 _SPD_CMN_REG1	=	0xa338
                    A33C   1780 _OUTPUT_CMN_PIN_REG0	=	0xa33c
                    A340   1781 _CMN_CALIBRATION	=	0xa340
                    A344   1782 __FIELDNAME_	=	0xa344
                    A348   1783 _INPUT_CMN_PIN_REG3	=	0xa348
                    A34C   1784 _PM_CMN_REG2	=	0xa34c
                    A354   1785 _TEST5	=	0xa354
                    A358   1786 _XDATA_MEM_CHECKSUM_CMN_0	=	0xa358
                    A35C   1787 _XDATA_MEM_CHECKSUM_CMN_1	=	0xa35c
                    A360   1788 _XDATA_MEM_CHECKSUM_CMN_2	=	0xa360
                    A364   1789 _MCU_SDT_CMN	=	0xa364
                    A368   1790 _CMN_CACHE_DEBUG0	=	0xa368
                    A36C   1791 _MCU_INT_ADDR	=	0xa36c
                    A370   1792 _CMN_ISR_2	=	0xa370
                    A374   1793 _CMN_ISR_MASK_2	=	0xa374
                    A378   1794 _CMN_ISR_CLEAR_2	=	0xa378
                    A37C   1795 _CMN_MCU_GPIO	=	0xa37c
                    A380   1796 _CMN_CACHE_DEBUG1	=	0xa380
                    A384   1797 _CMN_MCU_TIMER_CONTROL	=	0xa384
                    A388   1798 _CMN_MCU_TIMER_CTRL_2_LANE	=	0xa388
                    A38C   1799 _CMN_MCU_TIMER_CTRL_3_LANE	=	0xa38c
                    A390   1800 _CMN_MCU_TIMER_CTRL_4_LANE	=	0xa390
                    A394   1801 _CMN_MCU_TIMER_CTRL_5_LANE	=	0xa394
                    A398   1802 _CMN_MCU_TIMER0_CONTROL	=	0xa398
                    A39C   1803 _CMN_MCU_TIMER1_CONTROL	=	0xa39c
                    A3A0   1804 _CMN_MCU_TIMER2_CONTROL	=	0xa3a0
                    A3A4   1805 _CMN_MCU_TIMER3_CONTROL	=	0xa3a4
                    A3A8   1806 _CMN_ISR_1	=	0xa3a8
                    A3AC   1807 _CMN_ISR_MASK_1	=	0xa3ac
                    A3B0   1808 _SET_LANE_ISR	=	0xa3b0
                    A3F4   1809 _CMN_MCU_REG	=	0xa3f4
                    A3F8   1810 _CID_REG0	=	0xa3f8
                    A3FC   1811 _CID_REG1	=	0xa3fc
                    E600   1812 _FW_REV	=	0xe600
                    E604   1813 _CONTROL_CONFIG0	=	0xe604
                    E608   1814 _CONTROL_CONFIG1	=	0xe608
                    E60C   1815 _CONTROL_CONFIG2	=	0xe60c
                    E610   1816 _CONTROL_CONFIG3	=	0xe610
                    E614   1817 _CONTROL_CONFIG4	=	0xe614
                    E618   1818 _CONTROL_CONFIG5	=	0xe618
                    E61C   1819 _CONTROL_CONFIG6	=	0xe61c
                    E620   1820 _CONTROL_CONFIG7	=	0xe620
                    E624   1821 _CAL_DATA0	=	0xe624
                    E628   1822 _TRAIN_IF_CONFIG	=	0xe628
                    E62C   1823 _CONTROL_CONFIG8	=	0xe62c
                    E630   1824 _CONTROL_CONFIG9	=	0xe630
                    E634   1825 _CON_CAL_STEP_SIZE1	=	0xe634
                    E638   1826 _CON_CAL_STEP_SIZE2	=	0xe638
                    E63C   1827 _CON_CAL_STEP_SIZE3	=	0xe63c
                    E640   1828 _CON_CAL_STEP_SIZE4	=	0xe640
                    E644   1829 _CON_CAL_STEP_SIZE5	=	0xe644
                    E648   1830 _CAL_TIME_OUT_AND_DIS	=	0xe648
                    E64C   1831 _CAL_STATUS_READ	=	0xe64c
                    E650   1832 _MCU_CONFIG	=	0xe650
                    E654   1833 _CAL_DATA1	=	0xe654
                    E658   1834 _LOOP_CNTS	=	0xe658
                    E65C   1835 _MCU_CONFIG1	=	0xe65c
                    E660   1836 _TIMER_SEL1	=	0xe660
                    E664   1837 _TIMER_SEL2	=	0xe664
                    E668   1838 _TIMER_SEL3	=	0xe668
                    E66C   1839 _G_SELLV_TXCLK	=	0xe66c
                    E670   1840 _G_SELLV_TXDATA	=	0xe670
                    E674   1841 _G_SELLV_TXPRE	=	0xe674
                    E678   1842 _G_SELLV_RXEOMCLK	=	0xe678
                    E67C   1843 _G_SELLV_RXDATACLK	=	0xe67c
                    E680   1844 _G_SELLV_RXSAMPLER	=	0xe680
                    E684   1845 _SAS_PRESET0_TB	=	0xe684
                    E688   1846 _SAS_PRESET1_TB	=	0xe688
                    E68C   1847 _SAS_PRESET2_TB	=	0xe68c
                    E690   1848 _ETH_PRESET0_TB	=	0xe690
                    E694   1849 _ETH_PRESET1_TB	=	0xe694
                    E698   1850 _TX_SAVE_0	=	0xe698
                    E69C   1851 _TX_SAVE_1	=	0xe69c
                    E6A0   1852 _TX_SAVE_2	=	0xe6a0
                    E6A4   1853 _TX_SAVE_3	=	0xe6a4
                    E6A8   1854 _TX_SAVE_4	=	0xe6a8
                    E6AC   1855 _CDS_EYE_CLK_THR	=	0xe6ac
                    E6B0   1856 _SYNC_INFO	=	0xe6b0
                    E6B4   1857 _MCU_INFO_4	=	0xe6b4
                    E6B8   1858 _MCU_INFO_5	=	0xe6b8
                    E6BC   1859 _MCU_INFO_12	=	0xe6bc
                    E6C0   1860 _MCU_INFO_13	=	0xe6c0
                    E6C4   1861 _END_XDAT_CMN	=	0xe6c4
                    2600   1862 _DME_ENC_REG0	=	0x2600
                    2604   1863 _DME_ENC_REG1	=	0x2604
                    2608   1864 _DME_ENC_REG2	=	0x2608
                    260C   1865 _DME_DEC_REG0	=	0x260c
                    2610   1866 _DME_DEC_REG1	=	0x2610
                    2614   1867 _TX_TRAIN_IF_REG0	=	0x2614
                    2618   1868 _TX_TRAIN_IF_REG1	=	0x2618
                    261C   1869 _TX_TRAIN_IF_REG2	=	0x261c
                    2620   1870 _TX_TRAIN_IF_REG3	=	0x2620
                    2624   1871 _TX_TRAIN_PATTTERN_REG0	=	0x2624
                    2628   1872 _TX_TRAIN_DRIVER_REG0	=	0x2628
                    262C   1873 _TX_TRAIN_DRIVER_REG1	=	0x262c
                    2630   1874 _TX_TRAIN_DRIVER_REG2	=	0x2630
                    2634   1875 _TX_TRAIN_DEFAULT_REG0	=	0x2634
                    2638   1876 _TX_TRAIN_DEFAULT_REG1	=	0x2638
                    263C   1877 _TX_TRAIN_DEFAULT_REG2	=	0x263c
                    2640   1878 _TX_TRAIN_DEFAULT_REG3	=	0x2640
                    2644   1879 _TX_TRAIN_DEFAULT_REG4	=	0x2644
                    2648   1880 _TX_TRAIN_DEFAULT_REG5	=	0x2648
                    264C   1881 _TX_EMPH_CTRL_REG0	=	0x264c
                    2650   1882 _LINK_TRAIN_MODE0	=	0x2650
                    2654   1883 _TX_DRV_RD_OUT_REG0	=	0x2654
                    2658   1884 _TX_AMP_CTRL_REG0	=	0x2658
                    265C   1885 _TRX_TRAIN_IF_INTERRUPT_LANE	=	0x265c
                    2660   1886 _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE	=	0x2660
                    2664   1887 _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE	=	0x2664
                    2668   1888 _TX_TRAIN_IF_REG4	=	0x2668
                    266C   1889 _TX_TRAIN_IF_REG5	=	0x266c
                    2670   1890 _TX_TRAIN_IF_REG6	=	0x2670
                    2674   1891 _TX_TRAIN_IF_REG7	=	0x2674
                    2678   1892 _TX_TRAIN_CTRL_LANE	=	0x2678
                    267C   1893 _TX_TRAIN_IF_REG8	=	0x267c
                    6100   1894 _DFE_READ_EVEN_REG0	=	0x6100
                    6104   1895 _DFE_READ_EVEN_REG1	=	0x6104
                    6108   1896 _DFE_READ_EVEN_REG2	=	0x6108
                    610C   1897 _DFE_READ_EVEN_REG3	=	0x610c
                    6110   1898 _DFE_READ_EVEN_REG4	=	0x6110
                    6114   1899 _DFE_READ_EVEN_REG5	=	0x6114
                    6118   1900 _DFE_READ_EVEN_REG6	=	0x6118
                    611C   1901 _DFE_READ_EVEN_REG7	=	0x611c
                    6120   1902 _DFE_READ_ODD_REG0	=	0x6120
                    6124   1903 _DFE_READ_ODD_REG1	=	0x6124
                    6128   1904 _DFE_READ_ODD_REG2	=	0x6128
                    612C   1905 _DFE_READ_ODD_REG3	=	0x612c
                    6130   1906 _DFE_READ_ODD_REG4	=	0x6130
                    6134   1907 _DFE_READ_ODD_REG5	=	0x6134
                    6138   1908 _DFE_READ_ODD_REG6	=	0x6138
                    613C   1909 _DFE_READ_ODD_REG7	=	0x613c
                    6140   1910 _DFE_READ_EVEN_REG8	=	0x6140
                    6144   1911 _DFE_READ_ODD_REG8	=	0x6144
                    6148   1912 _DFE_READ_F0A_EVEN	=	0x6148
                    614C   1913 _DFE_READ_F0A_ODD	=	0x614c
                    6150   1914 _DFE_READ_F0B_EVEN	=	0x6150
                    6154   1915 _DFE_READ_F0B_ODD	=	0x6154
                    6158   1916 _DFE_READ_F0D_EVEN	=	0x6158
                    615C   1917 _DFE_READ_F0D_ODD	=	0x615c
                    6160   1918 _DFE_READ_F0D_LEFT_EVEN	=	0x6160
                    6164   1919 _DFE_READ_F0D_LEFT_ODD	=	0x6164
                    6168   1920 _DFE_READ_F0D_RIGHT_EVEN	=	0x6168
                    616C   1921 _DFE_READ_F0D_RIGHT_ODD	=	0x616c
                    6170   1922 _CDS_READ_MISC0	=	0x6170
                    6174   1923 _CDS_READ_MISC1	=	0x6174
                    6214   1924 _TXTRAIN_IF_REG0	=	0x6214
                    E000   1925 _lc_speedtable	=	0xe000
                    E1C0   1926 _ring_speedtable	=	0xe1c0
                    E5C0   1927 _phy_mode_cmn_table	=	0xe5c0
                    6300   1928 _max_gen	=	0x6300
                    6301   1929 _min_gen	=	0x6301
                    6304   1930 _speedtable	=	0x6304
                    65D4   1931 _phy_mode_lane_table	=	0x65d4
                    60B4   1932 _rc_save	=	0x60b4
                    60D0   1933 _txffe_save	=	0x60d0
                    60E4   1934 _phase_save	=	0x60e4
                    6030   1935 _train_gn1_index	=	0x6030
                    6031   1936 _train_g1_index	=	0x6031
                    6032   1937 _train_g0_index	=	0x6032
                    E6B0   1938 _local_tx_preset_tb	=	0xe6b0
                    E5C1   1939 _cmx_cal_lcvco_dac	=	0xe5c1
                    E5C1   1940 _cmx_cal_lcvco_dac_lsb	=	0xe5c1
                    E5C4   1941 _cmx_cal_lcvco_dac_msb	=	0xe5c4
                    E5CA   1942 _cmx_cal_lccap_msb	=	0xe5ca
                    E5C8   1943 _cmx_cal_lccap_lsb	=	0xe5c8
                    E5CC   1944 _cmx_cal_plldcc	=	0xe5cc
                    E5D0   1945 _cmx_cal_pll_speed_ring	=	0xe5d0
                    E5D4   1946 _cmx_cal_pll_sllp_dac_coarse_ring	=	0xe5d4
                    E5D8   1947 _cmx_cal_sllp_dac_fine_ring	=	0xe5d8
                    65D4   1948 _lnx_cal_txdcc_pdiv	=	0x65d4
                    65D8   1949 _lnx_cal_txdcc_pdiv_hg	=	0x65d8
                    65DA   1950 _lnx_cal_txdcc	=	0x65da
                    65DE   1951 _lnx_cal_txdcc_hg	=	0x65de
                    65E0   1952 _lnx_cal_rxdcc_dll	=	0x65e0
                    65E4   1953 _lnx_cal_rxdcc_dll_hg	=	0x65e4
                    65E6   1954 _lnx_cal_rxdcc_data	=	0x65e6
                    65F0   1955 _lnx_cal_rxdcc_data_hg	=	0x65f0
                    65F5   1956 _lnx_cal_rxdcc_eom	=	0x65f5
                    65FF   1957 _lnx_cal_rxdcc_eom_hg	=	0x65ff
                    6604   1958 _lnx_cal_dll_gmsel	=	0x6604
                    6606   1959 _lnx_cal_vdda_dll_sel	=	0x6606
                    660A   1960 _lnx_cal_dll_eom_gmsel	=	0x660a
                    660C   1961 _lnx_cal_vdda_dll_eom_sel	=	0x660c
                    6610   1962 _lnx_cal_eom_dpher	=	0x6610
                    6612   1963 _lnx_cal_align90_dummy_clk	=	0x6612
                    661A   1964 _lnx_cal_align90_dac	=	0x661a
                    6622   1965 _lnx_cal_align90_gm	=	0x6622
                    662A   1966 _lnx_cal_sellv_txdata	=	0x662a
                    6634   1967 _lnx_cal_sellv_txclk	=	0x6634
                    663E   1968 _lnx_cal_sellv_rxdataclk	=	0x663e
                    6648   1969 _lnx_cal_sellv_txpre	=	0x6648
                    6652   1970 _lnx_cal_sellv_rxsampler	=	0x6652
                    665C   1971 _lnx_cal_sellv_rxeomclk	=	0x665c
                    6666   1972 _lnx_spdoft_tx_preset_index_lane	=	0x6666
                    6490   1973 _lnx_calx_txdcc_pdiv	=	0x6490
                    6496   1974 _lnx_calx_txdcc_pdiv_hg	=	0x6496
                    6499   1975 _lnx_calx_txdcc	=	0x6499
                    649F   1976 _lnx_calx_txdcc_hg	=	0x649f
                    64A2   1977 _lnx_calx_rxdcc_dll	=	0x64a2
                    64A8   1978 _lnx_calx_rxdcc_dll_hg	=	0x64a8
                    64AB   1979 _lnx_calx_dll_gmsel	=	0x64ab
                    64AE   1980 _lnx_calx_vdda_dll_sel	=	0x64ae
                    64B4   1981 _lnx_calx_dll_eom_gmsel	=	0x64b4
                    64B7   1982 _lnx_calx_vdda_dll_eom_sel	=	0x64b7
                    64BD   1983 _lnx_calx_eom_dpher	=	0x64bd
                    64C0   1984 _lnx_calx_align90_dummy_clk	=	0x64c0
                    64CC   1985 _lnx_calx_align90_dac	=	0x64cc
                    64D8   1986 _lnx_calx_align90_gm	=	0x64d8
                    6100   1987 _cds28	=	0x6100
                    6178   1988 _dfe_sm	=	0x6178
                    61B8   1989 _dfe_sm_dc	=	0x61b8
                    61C0   1990 _dfe_sm_save	=	0x61c0
                    03FC   1991 _UPHY_ANAREG_REV_0	=	0x03fc
                    E684   1992 _tx_tb	=	0xe684
                    E698   1993 _train_save_tb	=	0xe698
                    607C   1994 _sq_thrs_ratio_tb	=	0x607c
                           1995 ;--------------------------------------------------------
                           1996 ; absolute external ram data
                           1997 ;--------------------------------------------------------
                           1998 	.area XABS    (ABS,XDATA)
                           1999 ;--------------------------------------------------------
                           2000 ; external initialized ram data
                           2001 ;--------------------------------------------------------
                           2002 	.area HOME    (CODE)
                           2003 	.area GSINIT0 (CODE)
                           2004 	.area GSINIT1 (CODE)
                           2005 	.area GSINIT2 (CODE)
                           2006 	.area GSINIT3 (CODE)
                           2007 	.area GSINIT4 (CODE)
                           2008 	.area GSINIT5 (CODE)
                           2009 	.area GSINIT  (CODE)
                           2010 	.area GSFINAL (CODE)
                           2011 	.area CSEG    (CODE)
                           2012 ;--------------------------------------------------------
                           2013 ; global & static initialisations
                           2014 ;--------------------------------------------------------
                           2015 	.area HOME    (CODE)
                           2016 	.area GSINIT  (CODE)
                           2017 	.area GSFINAL (CODE)
                           2018 	.area GSINIT  (CODE)
                           2019 ;--------------------------------------------------------
                           2020 ; Home
                           2021 ;--------------------------------------------------------
                           2022 	.area HOME    (CODE)
                           2023 	.area HOME    (CODE)
                           2024 ;--------------------------------------------------------
                           2025 ; code
                           2026 ;--------------------------------------------------------
                           2027 	.area BANK2   (CODE)
                           2028 ;------------------------------------------------------------
                           2029 ;Allocation info for local variables in function 'load_cal_data_all'
                           2030 ;------------------------------------------------------------
                           2031 ;val                       Allocated to registers r2 
                           2032 ;gen                       Allocated to registers r2 
                           2033 ;div2                      Allocated to registers r2 
                           2034 ;------------------------------------------------------------
                           2035 ;	../../shared/src/cal_rom.c:16: void load_cal_data_all(void) BANKING_CTRL {
                           2036 ;	-----------------------------------------
                           2037 ;	 function load_cal_data_all
                           2038 ;	-----------------------------------------
   82D7                    2039 _load_cal_data_all:
                    0002   2040 	ar2 = 0x02
                    0003   2041 	ar3 = 0x03
                    0004   2042 	ar4 = 0x04
                    0005   2043 	ar5 = 0x05
                    0006   2044 	ar6 = 0x06
                    0007   2045 	ar7 = 0x07
                    0000   2046 	ar0 = 0x00
                    0001   2047 	ar1 = 0x01
                           2048 ;	../../shared/src/cal_rom.c:19: LOAD_CAL_ON = 1;
   82D7 90 60 08           2049 	mov	dptr,#_CAL_CTRL3_LANE
   82DA 74 01              2050 	mov	a,#0x01
   82DC F0                 2051 	movx	@dptr,a
                           2052 ;	../../shared/src/cal_rom.c:21: if(mcuid==master_mcu && slave_phy_on==0) {
   82DD 90 22 00           2053 	mov	dptr,#_MCU_CONTROL_LANE
   82E0 E0                 2054 	movx	a,@dptr
   82E1 FA                 2055 	mov	r2,a
   82E2 90 E6 50           2056 	mov	dptr,#_MCU_CONFIG
   82E5 E0                 2057 	movx	a,@dptr
   82E6 FB                 2058 	mov	r3,a
   82E7 EA                 2059 	mov	a,r2
   82E8 B5 03 6D           2060 	cjne	a,ar3,00105$
   82EB 90 66 1C           2061 	mov	dptr,#_slave_phy_on
   82EE E0                 2062 	movx	a,@dptr
   82EF FA                 2063 	mov	r2,a
   82F0 70 66              2064 	jnz	00105$
                           2065 ;	../../shared/src/cal_rom.c:24: if(reg_LCPLLCLK_DIV2_SEL==0) {
   82F2 90 83 3C           2066 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_207
   82F5 E0                 2067 	movx	a,@dptr
   82F6 20 E1 0B           2068 	jb	acc.1,00102$
                           2069 ;	../../shared/src/cal_rom.c:25: reg_LCPLL_DCC_5_0 = 0x20;
   82F9 90 82 D8           2070 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_182
   82FC E0                 2071 	movx	a,@dptr
   82FD 54 03              2072 	anl	a,#0x03
   82FF 44 80              2073 	orl	a,#0x80
   8301 F0                 2074 	movx	@dptr,a
   8302 80 38              2075 	sjmp	00103$
   8304                    2076 00102$:
                           2077 ;	../../shared/src/cal_rom.c:30: val = cmx_cal_plldcc[PWR + cmx_PLLDCC_CAL_CONT_CUR_LOAD_EN][PLL_RATE_SEL];
   8304 90 E6 32           2078 	mov	dptr,#(_CONTROL_CONFIG9 + 0x0002)
   8307 E0                 2079 	movx	a,@dptr
   8308 C4                 2080 	swap	a
   8309 54 01              2081 	anl	a,#0x01
   830B 25 E0              2082 	add	a,acc
   830D 24 CC              2083 	add	a,#_cmx_cal_plldcc
   830F FA                 2084 	mov	r2,a
   8310 E4                 2085 	clr	a
   8311 34 E5              2086 	addc	a,#(_cmx_cal_plldcc >> 8)
   8313 FB                 2087 	mov	r3,a
   8314 90 E6 1E           2088 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0002)
   8317 E0                 2089 	movx	a,@dptr
   8318 FC                 2090 	mov	r4,a
   8319 2A                 2091 	add	a,r2
   831A F5 82              2092 	mov	dpl,a
   831C E4                 2093 	clr	a
   831D 3B                 2094 	addc	a,r3
   831E F5 83              2095 	mov	dph,a
   8320 E0                 2096 	movx	a,@dptr
   8321 FA                 2097 	mov	r2,a
                           2098 ;	../../shared/src/cal_rom.c:31: plldcc_step_cnt = PLLDCC_CAL_STEP_SIZE;  //when speed change, restore the fracition code to middle
   8322 90 E6 3C           2099 	mov	dptr,#_CON_CAL_STEP_SIZE3
   8325 E0                 2100 	movx	a,@dptr
   8326 FB                 2101 	mov	r3,a
   8327 90 66 0D           2102 	mov	dptr,#_plldcc_step_cnt
   832A F0                 2103 	movx	@dptr,a
                           2104 ;	../../shared/src/cal_rom.c:32: reg_LCPLL_DCC_5_0 = val;
   832B 90 82 D8           2105 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_182
   832E EA                 2106 	mov	a,r2
   832F 2A                 2107 	add	a,r2
   8330 25 E0              2108 	add	a,acc
   8332 54 FC              2109 	anl	a,#0xfc
   8334 F5 F0              2110 	mov	b,a
   8336 E0                 2111 	movx	a,@dptr
   8337 54 03              2112 	anl	a,#0x03
   8339 45 F0              2113 	orl	a,b
   833B F0                 2114 	movx	@dptr,a
   833C                    2115 00103$:
                           2116 ;	../../shared/src/cal_rom.c:34: reg_LCPLL_DCC_CLK = 1;
   833C 90 82 D8           2117 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_182
   833F E0                 2118 	movx	a,@dptr
   8340 44 01              2119 	orl	a,#0x01
   8342 F0                 2120 	movx	@dptr,a
                           2121 ;	../../shared/src/cal_rom.c:35: reg_TRX_IMPCAL_CLK = 1;
   8343 90 82 2C           2122 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_139
   8346 E0                 2123 	movx	a,@dptr
   8347 44 80              2124 	orl	a,#0x80
   8349 F0                 2125 	movx	@dptr,a
                           2126 ;	../../shared/src/cal_rom.c:36: reg_LCPLL_DCC_CLK = 0;
   834A 90 82 D8           2127 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_182
   834D E0                 2128 	movx	a,@dptr
   834E 54 FE              2129 	anl	a,#0xfe
   8350 F0                 2130 	movx	@dptr,a
                           2131 ;	../../shared/src/cal_rom.c:37: reg_TRX_IMPCAL_CLK = 0;
   8351 90 82 2C           2132 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_139
   8354 E0                 2133 	movx	a,@dptr
   8355 54 7F              2134 	anl	a,#0x7f
   8357 F0                 2135 	movx	@dptr,a
   8358                    2136 00105$:
                           2137 ;	../../shared/src/cal_rom.c:41: reg_DLL_GMSEL_LANE_2_0 = lnx_cal_dll_gmsel[rx_pll_rate];	
   8358 A2 0E              2138 	mov	c,_rx_pll_rate
   835A E4                 2139 	clr	a
   835B 33                 2140 	rlc	a
   835C 24 04              2141 	add	a,#_lnx_cal_dll_gmsel
   835E F5 82              2142 	mov	dpl,a
   8360 E4                 2143 	clr	a
   8361 34 66              2144 	addc	a,#(_lnx_cal_dll_gmsel >> 8)
   8363 F5 83              2145 	mov	dph,a
   8365 E0                 2146 	movx	a,@dptr
   8366 90 00 1C           2147 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_7
   8369 C4                 2148 	swap	a
   836A 03                 2149 	rr	a
   836B 54 38              2150 	anl	a,#(0xf8&0x38)
   836D F5 F0              2151 	mov	b,a
   836F E0                 2152 	movx	a,@dptr
   8370 54 C7              2153 	anl	a,#0xc7
   8372 45 F0              2154 	orl	a,b
   8374 F0                 2155 	movx	@dptr,a
                           2156 ;	../../shared/src/cal_rom.c:44: val = lnx_cal_vdda_dll_sel[PWR + cmx_RXDLL_CAL_CONT_CUR_LOAD_EN][rx_pll_rate];		
   8375 90 E6 32           2157 	mov	dptr,#(_CONTROL_CONFIG9 + 0x0002)
   8378 E0                 2158 	movx	a,@dptr
   8379 03                 2159 	rr	a
   837A 54 01              2160 	anl	a,#0x01
   837C 25 E0              2161 	add	a,acc
   837E 24 06              2162 	add	a,#_lnx_cal_vdda_dll_sel
   8380 FB                 2163 	mov	r3,a
   8381 E4                 2164 	clr	a
   8382 34 66              2165 	addc	a,#(_lnx_cal_vdda_dll_sel >> 8)
   8384 FC                 2166 	mov	r4,a
   8385 A2 0E              2167 	mov	c,_rx_pll_rate
   8387 E4                 2168 	clr	a
   8388 33                 2169 	rlc	a
   8389 2B                 2170 	add	a,r3
   838A F5 82              2171 	mov	dpl,a
   838C E4                 2172 	clr	a
   838D 3C                 2173 	addc	a,r4
   838E F5 83              2174 	mov	dph,a
   8390 E0                 2175 	movx	a,@dptr
                           2176 ;	../../shared/src/cal_rom.c:45: set_sellv_rxdll_ch(val);		
   8391 F5 82              2177 	mov	dpl,a
   8393 78 DA              2178 	mov	r0,#_set_sellv_rxdll_ch
   8395 79 AD              2179 	mov	r1,#(_set_sellv_rxdll_ch >> 8)
   8397 7A 02              2180 	mov	r2,#(_set_sellv_rxdll_ch >> 16)
   8399 12 00 B3           2181 	lcall	__sdcc_banked_call
                           2182 ;	../../shared/src/cal_rom.c:48: reg_EOM_DLL_GMSEL_LANE_2_0 = lnx_cal_dll_eom_gmsel[rx_pll_rate];
   839C A2 0E              2183 	mov	c,_rx_pll_rate
   839E E4                 2184 	clr	a
   839F 33                 2185 	rlc	a
   83A0 24 0A              2186 	add	a,#_lnx_cal_dll_eom_gmsel
   83A2 F5 82              2187 	mov	dpl,a
   83A4 E4                 2188 	clr	a
   83A5 34 66              2189 	addc	a,#(_lnx_cal_dll_eom_gmsel >> 8)
   83A7 F5 83              2190 	mov	dph,a
   83A9 E0                 2191 	movx	a,@dptr
   83AA 90 00 24           2192 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_9
   83AD C4                 2193 	swap	a
   83AE 23                 2194 	rl	a
   83AF 54 E0              2195 	anl	a,#(0xe0&0xe0)
   83B1 F5 F0              2196 	mov	b,a
   83B3 E0                 2197 	movx	a,@dptr
   83B4 54 1F              2198 	anl	a,#0x1f
   83B6 45 F0              2199 	orl	a,b
   83B8 F0                 2200 	movx	@dptr,a
                           2201 ;	../../shared/src/cal_rom.c:51: val = lnx_cal_vdda_dll_eom_sel[PWR + cmx_EOM_DLL_CAL_CONT_CUR_LOAD_EN][rx_pll_rate];		
   83B9 90 E6 32           2202 	mov	dptr,#(_CONTROL_CONFIG9 + 0x0002)
   83BC E0                 2203 	movx	a,@dptr
   83BD 03                 2204 	rr	a
   83BE 03                 2205 	rr	a
   83BF 54 01              2206 	anl	a,#0x01
   83C1 25 E0              2207 	add	a,acc
   83C3 24 0C              2208 	add	a,#_lnx_cal_vdda_dll_eom_sel
   83C5 FB                 2209 	mov	r3,a
   83C6 E4                 2210 	clr	a
   83C7 34 66              2211 	addc	a,#(_lnx_cal_vdda_dll_eom_sel >> 8)
   83C9 FC                 2212 	mov	r4,a
   83CA A2 0E              2213 	mov	c,_rx_pll_rate
   83CC E4                 2214 	clr	a
   83CD 33                 2215 	rlc	a
   83CE 2B                 2216 	add	a,r3
   83CF F5 82              2217 	mov	dpl,a
   83D1 E4                 2218 	clr	a
   83D2 3C                 2219 	addc	a,r4
   83D3 F5 83              2220 	mov	dph,a
   83D5 E0                 2221 	movx	a,@dptr
                           2222 ;	../../shared/src/cal_rom.c:52: set_sellv_rxeomdll_ch(val);		
   83D6 F5 82              2223 	mov	dpl,a
   83D8 78 A5              2224 	mov	r0,#_set_sellv_rxeomdll_ch
   83DA 79 AF              2225 	mov	r1,#(_set_sellv_rxeomdll_ch >> 8)
   83DC 7A 02              2226 	mov	r2,#(_set_sellv_rxeomdll_ch >> 16)
   83DE 12 00 B3           2227 	lcall	__sdcc_banked_call
                           2228 ;	../../shared/src/cal_rom.c:55: reg_ALIGN90_REF_LANE_5_0 = 0x1e;
   83E1 90 00 38           2229 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_14
   83E4 E0                 2230 	movx	a,@dptr
   83E5 54 03              2231 	anl	a,#0x03
   83E7 44 78              2232 	orl	a,#0x78
   83E9 F0                 2233 	movx	@dptr,a
                           2234 ;	../../shared/src/cal_rom.c:56: div2 = (reg_RX_SPEED_DIV_LANE_2_0&0x04)==0;
   83EA 90 02 28           2235 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_138
   83ED E0                 2236 	movx	a,@dptr
   83EE 03                 2237 	rr	a
   83EF 03                 2238 	rr	a
   83F0 54 07              2239 	anl	a,#0x07
   83F2 FA                 2240 	mov	r2,a
   83F3 53 02 04           2241 	anl	ar2,#0x04
   83F6 E4                 2242 	clr	a
   83F7 BA 00 01           2243 	cjne	r2,#0x00,00122$
   83FA 04                 2244 	inc	a
   83FB                    2245 00122$:
   83FB FA                 2246 	mov	r2,a
                           2247 ;	../../shared/src/cal_rom.c:57: reg_ALIGN90_DAC_LANE_5_0 = lnx_cal_align90_dac[PWR][rx_pll_rate][div2];
   83FC A2 0E              2248 	mov	c,_rx_pll_rate
   83FE E4                 2249 	clr	a
   83FF 33                 2250 	rlc	a
   8400 25 E0              2251 	add	a,acc
   8402 24 1A              2252 	add	a,#_lnx_cal_align90_dac
   8404 FB                 2253 	mov	r3,a
   8405 E4                 2254 	clr	a
   8406 34 66              2255 	addc	a,#(_lnx_cal_align90_dac >> 8)
   8408 FC                 2256 	mov	r4,a
   8409 EA                 2257 	mov	a,r2
   840A 2B                 2258 	add	a,r3
   840B F5 82              2259 	mov	dpl,a
   840D E4                 2260 	clr	a
   840E 3C                 2261 	addc	a,r4
   840F F5 83              2262 	mov	dph,a
   8411 E0                 2263 	movx	a,@dptr
   8412 90 00 34           2264 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_13
   8415 25 E0              2265 	add	a,acc
   8417 25 E0              2266 	add	a,acc
   8419 54 FC              2267 	anl	a,#0xfc
   841B F5 F0              2268 	mov	b,a
   841D E0                 2269 	movx	a,@dptr
   841E 54 03              2270 	anl	a,#0x03
   8420 45 F0              2271 	orl	a,b
   8422 F0                 2272 	movx	@dptr,a
                           2273 ;	../../shared/src/cal_rom.c:58: reg_ALIGN90_GM_LANE_2_0 = lnx_cal_align90_gm[PWR][rx_pll_rate][div2];
   8423 A2 0E              2274 	mov	c,_rx_pll_rate
   8425 E4                 2275 	clr	a
   8426 33                 2276 	rlc	a
   8427 25 E0              2277 	add	a,acc
   8429 24 22              2278 	add	a,#_lnx_cal_align90_gm
   842B FB                 2279 	mov	r3,a
   842C E4                 2280 	clr	a
   842D 34 66              2281 	addc	a,#(_lnx_cal_align90_gm >> 8)
   842F FC                 2282 	mov	r4,a
   8430 EA                 2283 	mov	a,r2
   8431 2B                 2284 	add	a,r3
   8432 F5 82              2285 	mov	dpl,a
   8434 E4                 2286 	clr	a
   8435 3C                 2287 	addc	a,r4
   8436 F5 83              2288 	mov	dph,a
   8438 E0                 2289 	movx	a,@dptr
   8439 90 00 30           2290 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_12
   843C 25 E0              2291 	add	a,acc
   843E 54 0E              2292 	anl	a,#0x0e
   8440 F5 F0              2293 	mov	b,a
   8442 E0                 2294 	movx	a,@dptr
   8443 54 F1              2295 	anl	a,#0xf1
   8445 45 F0              2296 	orl	a,b
   8447 F0                 2297 	movx	@dptr,a
                           2298 ;	../../shared/src/cal_rom.c:59: reg_ALIGN90_DUMMY_CLK_LANE = lnx_cal_align90_dummy_clk[PWR][rx_pll_rate][div2];		
   8448 A2 0E              2299 	mov	c,_rx_pll_rate
   844A E4                 2300 	clr	a
   844B 33                 2301 	rlc	a
   844C 25 E0              2302 	add	a,acc
   844E 24 12              2303 	add	a,#_lnx_cal_align90_dummy_clk
   8450 FB                 2304 	mov	r3,a
   8451 E4                 2305 	clr	a
   8452 34 66              2306 	addc	a,#(_lnx_cal_align90_dummy_clk >> 8)
   8454 FC                 2307 	mov	r4,a
   8455 EA                 2308 	mov	a,r2
   8456 2B                 2309 	add	a,r3
   8457 F5 82              2310 	mov	dpl,a
   8459 E4                 2311 	clr	a
   845A 3C                 2312 	addc	a,r4
   845B F5 83              2313 	mov	dph,a
   845D E0                 2314 	movx	a,@dptr
   845E 90 00 34           2315 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_13
   8461 13                 2316 	rrc	a
   8462 E0                 2317 	movx	a,@dptr
   8463 92 E1              2318 	mov	acc.1,c
   8465 F0                 2319 	movx	@dptr,a
                           2320 ;	../../shared/src/cal_rom.c:60: reg_ALIGN90_SYN_CLK_LANE	= 1;
                           2321 ;	../../shared/src/cal_rom.c:61: reg_ALIGN90_SYN_CLK_LANE	= 0;
   8466 90 00 34           2322 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_13
   8469 E0                 2323 	movx	a,@dptr
   846A 44 01              2324 	orl	a,#0x01
   846C F0                 2325 	movx	@dptr,a
   846D E0                 2326 	movx	a,@dptr
   846E 54 FE              2327 	anl	a,#0xfe
   8470 F0                 2328 	movx	@dptr,a
                           2329 ;	../../shared/src/cal_rom.c:64: reg_RXDCC_DLLCLK_LANE_5_0 = lnx_cal_rxdcc_dll[PWR + cmx_RXDCC_DLL_CAL_CONT_CUR_LOAD_EN][rx_pll_rate];  
   8471 90 E6 31           2330 	mov	dptr,#(_CONTROL_CONFIG9 + 0x0001)
   8474 E0                 2331 	movx	a,@dptr
   8475 23                 2332 	rl	a
   8476 54 01              2333 	anl	a,#0x01
   8478 25 E0              2334 	add	a,acc
   847A 24 E0              2335 	add	a,#_lnx_cal_rxdcc_dll
   847C FA                 2336 	mov	r2,a
   847D E4                 2337 	clr	a
   847E 34 65              2338 	addc	a,#(_lnx_cal_rxdcc_dll >> 8)
   8480 FB                 2339 	mov	r3,a
   8481 A2 0E              2340 	mov	c,_rx_pll_rate
   8483 E4                 2341 	clr	a
   8484 33                 2342 	rlc	a
   8485 FC                 2343 	mov	r4,a
   8486 2A                 2344 	add	a,r2
   8487 F5 82              2345 	mov	dpl,a
   8489 E4                 2346 	clr	a
   848A 3B                 2347 	addc	a,r3
   848B F5 83              2348 	mov	dph,a
   848D E0                 2349 	movx	a,@dptr
   848E 90 02 1C           2350 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_135
   8491 25 E0              2351 	add	a,acc
   8493 25 E0              2352 	add	a,acc
   8495 54 FC              2353 	anl	a,#0xfc
   8497 F5 F0              2354 	mov	b,a
   8499 E0                 2355 	movx	a,@dptr
   849A 54 03              2356 	anl	a,#0x03
   849C 45 F0              2357 	orl	a,b
   849E F0                 2358 	movx	@dptr,a
                           2359 ;	../../shared/src/cal_rom.c:65: rxdcc_dll_step_cnt = RXDCC_DLL_CAL_STEP_SIZE;     //when speed change, restore the fracition code to middle
   849F 90 E6 47           2360 	mov	dptr,#(_CON_CAL_STEP_SIZE5 + 0x0003)
   84A2 E0                 2361 	movx	a,@dptr
   84A3 90 66 0A           2362 	mov	dptr,#_rxdcc_dll_step_cnt
   84A6 F0                 2363 	movx	@dptr,a
                           2364 ;	../../shared/src/cal_rom.c:66: reg_RXDCC_HG_DLLCLK_LANE = lnx_cal_rxdcc_dll_hg[rx_pll_rate];          //load the HG setting. 
   84A7 A2 0E              2365 	mov	c,_rx_pll_rate
   84A9 E4                 2366 	clr	a
   84AA 33                 2367 	rlc	a
   84AB 24 E4              2368 	add	a,#_lnx_cal_rxdcc_dll_hg
   84AD F5 82              2369 	mov	dpl,a
   84AF E4                 2370 	clr	a
   84B0 34 65              2371 	addc	a,#(_lnx_cal_rxdcc_dll_hg >> 8)
   84B2 F5 83              2372 	mov	dph,a
   84B4 E0                 2373 	movx	a,@dptr
   84B5 90 02 1C           2374 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_135
   84B8 13                 2375 	rrc	a
   84B9 E0                 2376 	movx	a,@dptr
   84BA 92 E1              2377 	mov	acc.1,c
   84BC F0                 2378 	movx	@dptr,a
                           2379 ;	../../shared/src/cal_rom.c:67: reg_RXDCC_DAC_SYNC_CLK_LANE = 1;
   84BD 90 00 44           2380 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_17
   84C0 E0                 2381 	movx	a,@dptr
   84C1 44 10              2382 	orl	a,#0x10
   84C3 F0                 2383 	movx	@dptr,a
                           2384 ;	../../shared/src/cal_rom.c:68: reg_TRXDCC_CAL_CLK100KHZ_LANE = 1;
   84C4 90 02 20           2385 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   84C7 E0                 2386 	movx	a,@dptr
   84C8 44 01              2387 	orl	a,#0x01
   84CA F0                 2388 	movx	@dptr,a
                           2389 ;	../../shared/src/cal_rom.c:69: reg_RXDCC_DAC_SYNC_CLK_LANE = 0;
   84CB 90 00 44           2390 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_17
   84CE E0                 2391 	movx	a,@dptr
   84CF 54 EF              2392 	anl	a,#0xef
   84D1 F0                 2393 	movx	@dptr,a
                           2394 ;	../../shared/src/cal_rom.c:70: reg_TRXDCC_CAL_CLK100KHZ_LANE = 0;
   84D2 90 02 20           2395 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   84D5 E0                 2396 	movx	a,@dptr
   84D6 54 FE              2397 	anl	a,#0xfe
   84D8 F0                 2398 	movx	@dptr,a
                           2399 ;	../../shared/src/cal_rom.c:72: gen = gen_rx;
   84D9 90 66 16           2400 	mov	dptr,#_gen_rx
   84DC E0                 2401 	movx	a,@dptr
   84DD FA                 2402 	mov	r2,a
                           2403 ;	../../shared/src/cal_rom.c:73: if(phy_mode == SERDES) gen = 0;
   84DE 90 A3 16           2404 	mov	dptr,#(_SYSTEM + 0x0002)
   84E1 E0                 2405 	movx	a,@dptr
   84E2 54 07              2406 	anl	a,#0x07
   84E4 FB                 2407 	mov	r3,a
   84E5 BB 04 02           2408 	cjne	r3,#0x04,00108$
   84E8 7A 00              2409 	mov	r2,#0x00
   84EA                    2410 00108$:
                           2411 ;	../../shared/src/cal_rom.c:76: reg_RXDCC_DATACLK_LANE_5_0 = lnx_cal_rxdcc_data[PWR + cmx_RXDCC_DATA_CAL_CONT_CUR_LOAD_EN][gen];
   84EA 90 E6 33           2412 	mov	dptr,#(_CONTROL_CONFIG9 + 0x0003)
   84ED E0                 2413 	movx	a,@dptr
   84EE 03                 2414 	rr	a
   84EF 54 01              2415 	anl	a,#0x01
   84F1 75 F0 05           2416 	mov	b,#0x05
   84F4 A4                 2417 	mul	ab
   84F5 24 E6              2418 	add	a,#_lnx_cal_rxdcc_data
   84F7 FB                 2419 	mov	r3,a
   84F8 E4                 2420 	clr	a
   84F9 34 65              2421 	addc	a,#(_lnx_cal_rxdcc_data >> 8)
   84FB FC                 2422 	mov	r4,a
   84FC EA                 2423 	mov	a,r2
   84FD 2B                 2424 	add	a,r3
   84FE F5 82              2425 	mov	dpl,a
   8500 E4                 2426 	clr	a
   8501 3C                 2427 	addc	a,r4
   8502 F5 83              2428 	mov	dph,a
   8504 E0                 2429 	movx	a,@dptr
   8505 90 02 20           2430 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   8508 25 E0              2431 	add	a,acc
   850A 25 E0              2432 	add	a,acc
   850C 54 FC              2433 	anl	a,#0xfc
   850E F5 F0              2434 	mov	b,a
   8510 E0                 2435 	movx	a,@dptr
   8511 54 03              2436 	anl	a,#0x03
   8513 45 F0              2437 	orl	a,b
   8515 F0                 2438 	movx	@dptr,a
                           2439 ;	../../shared/src/cal_rom.c:77: rxdcc_data_step_cnt = RXDCC_DATA_CAL_STEP_SIZE;     //when speed change, restore the fracition code to middle
   8516 90 E6 39           2440 	mov	dptr,#(_CON_CAL_STEP_SIZE2 + 0x0001)
   8519 E0                 2441 	movx	a,@dptr
   851A 90 66 09           2442 	mov	dptr,#_rxdcc_data_step_cnt
   851D F0                 2443 	movx	@dptr,a
                           2444 ;	../../shared/src/cal_rom.c:78: reg_RXDCC_HG_DATACLK_LANE = lnx_cal_rxdcc_data_hg[gen];          //load the HG setting.
   851E EA                 2445 	mov	a,r2
   851F 24 F0              2446 	add	a,#_lnx_cal_rxdcc_data_hg
   8521 F5 82              2447 	mov	dpl,a
   8523 E4                 2448 	clr	a
   8524 34 65              2449 	addc	a,#(_lnx_cal_rxdcc_data_hg >> 8)
   8526 F5 83              2450 	mov	dph,a
   8528 E0                 2451 	movx	a,@dptr
   8529 90 02 20           2452 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   852C 13                 2453 	rrc	a
   852D E0                 2454 	movx	a,@dptr
   852E 92 E1              2455 	mov	acc.1,c
   8530 F0                 2456 	movx	@dptr,a
                           2457 ;	../../shared/src/cal_rom.c:79: reg_RXDCC_DAC_SYNC_CLK_LANE = 1;
   8531 90 00 44           2458 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_17
   8534 E0                 2459 	movx	a,@dptr
   8535 44 10              2460 	orl	a,#0x10
   8537 F0                 2461 	movx	@dptr,a
                           2462 ;	../../shared/src/cal_rom.c:80: reg_TRXDCC_CAL_CLK100KHZ_LANE = 1;
   8538 90 02 20           2463 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   853B E0                 2464 	movx	a,@dptr
   853C 44 01              2465 	orl	a,#0x01
   853E F0                 2466 	movx	@dptr,a
                           2467 ;	../../shared/src/cal_rom.c:81: reg_RXDCC_DAC_SYNC_CLK_LANE = 0;
   853F 90 00 44           2468 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_17
   8542 E0                 2469 	movx	a,@dptr
   8543 54 EF              2470 	anl	a,#0xef
   8545 F0                 2471 	movx	@dptr,a
                           2472 ;	../../shared/src/cal_rom.c:82: reg_TRXDCC_CAL_CLK100KHZ_LANE = 0;
   8546 90 02 20           2473 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   8549 E0                 2474 	movx	a,@dptr
   854A 54 FE              2475 	anl	a,#0xfe
   854C F0                 2476 	movx	@dptr,a
                           2477 ;	../../shared/src/cal_rom.c:85: reg_RXDCC_EOMCLK_LANE_5_0 = lnx_cal_rxdcc_eom[PWR + cmx_RXDCC_EOM_CAL_CONT_CUR_LOAD_EN][gen];
   854D 90 E6 33           2478 	mov	dptr,#(_CONTROL_CONFIG9 + 0x0003)
   8550 E0                 2479 	movx	a,@dptr
   8551 54 01              2480 	anl	a,#0x01
   8553 75 F0 05           2481 	mov	b,#0x05
   8556 A4                 2482 	mul	ab
   8557 24 F5              2483 	add	a,#_lnx_cal_rxdcc_eom
   8559 FB                 2484 	mov	r3,a
   855A E4                 2485 	clr	a
   855B 34 65              2486 	addc	a,#(_lnx_cal_rxdcc_eom >> 8)
   855D FC                 2487 	mov	r4,a
   855E EA                 2488 	mov	a,r2
   855F 2B                 2489 	add	a,r3
   8560 F5 82              2490 	mov	dpl,a
   8562 E4                 2491 	clr	a
   8563 3C                 2492 	addc	a,r4
   8564 F5 83              2493 	mov	dph,a
   8566 E0                 2494 	movx	a,@dptr
   8567 90 00 40           2495 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_16
   856A 25 E0              2496 	add	a,acc
   856C 25 E0              2497 	add	a,acc
   856E 54 FC              2498 	anl	a,#0xfc
   8570 F5 F0              2499 	mov	b,a
   8572 E0                 2500 	movx	a,@dptr
   8573 54 03              2501 	anl	a,#0x03
   8575 45 F0              2502 	orl	a,b
   8577 F0                 2503 	movx	@dptr,a
                           2504 ;	../../shared/src/cal_rom.c:86: rxdcc_eom_step_cnt = RXDCC_EOM_CAL_STEP_SIZE;     //when speed change, restore the fracition code to middle
   8578 90 E6 38           2505 	mov	dptr,#_CON_CAL_STEP_SIZE2
   857B E0                 2506 	movx	a,@dptr
   857C 90 66 08           2507 	mov	dptr,#_rxdcc_eom_step_cnt
   857F F0                 2508 	movx	@dptr,a
                           2509 ;	../../shared/src/cal_rom.c:87: reg_RXDCC_HG_EOMCLK_LANE = lnx_cal_rxdcc_eom_hg[gen];          //load the HG setting.
   8580 EA                 2510 	mov	a,r2
   8581 24 FF              2511 	add	a,#_lnx_cal_rxdcc_eom_hg
   8583 F5 82              2512 	mov	dpl,a
   8585 E4                 2513 	clr	a
   8586 34 65              2514 	addc	a,#(_lnx_cal_rxdcc_eom_hg >> 8)
   8588 F5 83              2515 	mov	dph,a
   858A E0                 2516 	movx	a,@dptr
   858B 90 00 40           2517 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_16
   858E 13                 2518 	rrc	a
   858F E0                 2519 	movx	a,@dptr
   8590 92 E1              2520 	mov	acc.1,c
   8592 F0                 2521 	movx	@dptr,a
                           2522 ;	../../shared/src/cal_rom.c:88: reg_RXDCC_DAC_SYNC_CLK_LANE = 1;
   8593 90 00 44           2523 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_17
   8596 E0                 2524 	movx	a,@dptr
   8597 44 10              2525 	orl	a,#0x10
   8599 F0                 2526 	movx	@dptr,a
                           2527 ;	../../shared/src/cal_rom.c:89: reg_TRXDCC_CAL_CLK100KHZ_LANE = 1;
   859A 90 02 20           2528 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   859D E0                 2529 	movx	a,@dptr
   859E 44 01              2530 	orl	a,#0x01
   85A0 F0                 2531 	movx	@dptr,a
                           2532 ;	../../shared/src/cal_rom.c:90: reg_RXDCC_DAC_SYNC_CLK_LANE = 0;
   85A1 90 00 44           2533 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_17
   85A4 E0                 2534 	movx	a,@dptr
   85A5 54 EF              2535 	anl	a,#0xef
   85A7 F0                 2536 	movx	@dptr,a
                           2537 ;	../../shared/src/cal_rom.c:91: reg_TRXDCC_CAL_CLK100KHZ_LANE = 0;
   85A8 90 02 20           2538 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   85AB E0                 2539 	movx	a,@dptr
   85AC 54 FE              2540 	anl	a,#0xfe
   85AE F0                 2541 	movx	@dptr,a
                           2542 ;	../../shared/src/cal_rom.c:94: reg_TXDCC_CNT_LANE_5_0 = lnx_cal_txdcc[PWR + cmx_TXDCC_CAL_CONT_CUR_LOAD_EN][tx_pll_rate];  
   85AF 90 E6 32           2543 	mov	dptr,#(_CONTROL_CONFIG9 + 0x0002)
   85B2 E0                 2544 	movx	a,@dptr
   85B3 23                 2545 	rl	a
   85B4 54 01              2546 	anl	a,#0x01
   85B6 25 E0              2547 	add	a,acc
   85B8 24 DA              2548 	add	a,#_lnx_cal_txdcc
   85BA FA                 2549 	mov	r2,a
   85BB E4                 2550 	clr	a
   85BC 34 65              2551 	addc	a,#(_lnx_cal_txdcc >> 8)
   85BE FB                 2552 	mov	r3,a
   85BF A2 0F              2553 	mov	c,_tx_pll_rate
   85C1 E4                 2554 	clr	a
   85C2 33                 2555 	rlc	a
   85C3 FC                 2556 	mov	r4,a
   85C4 2A                 2557 	add	a,r2
   85C5 F5 82              2558 	mov	dpl,a
   85C7 E4                 2559 	clr	a
   85C8 3B                 2560 	addc	a,r3
   85C9 F5 83              2561 	mov	dph,a
   85CB E0                 2562 	movx	a,@dptr
   85CC 90 02 4C           2563 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_147
   85CF 25 E0              2564 	add	a,acc
   85D1 54 7E              2565 	anl	a,#0x7e
   85D3 F5 F0              2566 	mov	b,a
   85D5 E0                 2567 	movx	a,@dptr
   85D6 54 81              2568 	anl	a,#0x81
   85D8 45 F0              2569 	orl	a,b
   85DA F0                 2570 	movx	@dptr,a
                           2571 ;	../../shared/src/cal_rom.c:95: txdcc_step_cnt = TXDCC_CAL_STEP_SIZE;             //when speed change, restore the fracition code to middle
   85DB 90 E6 3F           2572 	mov	dptr,#(_CON_CAL_STEP_SIZE3 + 0x0003)
   85DE E0                 2573 	movx	a,@dptr
   85DF FA                 2574 	mov	r2,a
   85E0 90 66 10           2575 	mov	dptr,#_txdcc_step_cnt
   85E3 F0                 2576 	movx	@dptr,a
                           2577 ;	../../shared/src/cal_rom.c:96: reg_TRXDCC_CAL_CLK100KHZ_LANE = 1;
                           2578 ;	../../shared/src/cal_rom.c:97: reg_TRXDCC_CAL_CLK100KHZ_LANE = 0;
   85E4 90 02 20           2579 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   85E7 E0                 2580 	movx	a,@dptr
   85E8 44 01              2581 	orl	a,#0x01
   85EA F0                 2582 	movx	@dptr,a
   85EB E0                 2583 	movx	a,@dptr
   85EC 54 FE              2584 	anl	a,#0xfe
   85EE F0                 2585 	movx	@dptr,a
                           2586 ;	../../shared/src/cal_rom.c:100: if (reg_TX_SPEED_DIV_LANE_2_0 != 0) {
   85EF 90 02 58           2587 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_150
   85F2 E0                 2588 	movx	a,@dptr
   85F3 54 07              2589 	anl	a,#0x07
   85F5 60 43              2590 	jz	00110$
                           2591 ;	../../shared/src/cal_rom.c:101: reg_TXDCCCAL_PDIV_CNT_LANE_5_0 = lnx_cal_txdcc_pdiv[PWR + cmx_TXDCC_PDIV_CAL_CONT_CUR_LOAD_EN][tx_pll_rate];  
   85F7 90 E6 32           2592 	mov	dptr,#(_CONTROL_CONFIG9 + 0x0002)
   85FA E0                 2593 	movx	a,@dptr
   85FB 23                 2594 	rl	a
   85FC 23                 2595 	rl	a
   85FD 54 01              2596 	anl	a,#0x01
   85FF 25 E0              2597 	add	a,acc
   8601 24 D4              2598 	add	a,#_lnx_cal_txdcc_pdiv
   8603 FA                 2599 	mov	r2,a
   8604 E4                 2600 	clr	a
   8605 34 65              2601 	addc	a,#(_lnx_cal_txdcc_pdiv >> 8)
   8607 FB                 2602 	mov	r3,a
   8608 A2 0F              2603 	mov	c,_tx_pll_rate
   860A E4                 2604 	clr	a
   860B 33                 2605 	rlc	a
   860C FC                 2606 	mov	r4,a
   860D 2A                 2607 	add	a,r2
   860E F5 82              2608 	mov	dpl,a
   8610 E4                 2609 	clr	a
   8611 3B                 2610 	addc	a,r3
   8612 F5 83              2611 	mov	dph,a
   8614 E0                 2612 	movx	a,@dptr
   8615 90 02 5C           2613 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_151
   8618 25 E0              2614 	add	a,acc
   861A 25 E0              2615 	add	a,acc
   861C 54 FC              2616 	anl	a,#0xfc
   861E F5 F0              2617 	mov	b,a
   8620 E0                 2618 	movx	a,@dptr
   8621 54 03              2619 	anl	a,#0x03
   8623 45 F0              2620 	orl	a,b
   8625 F0                 2621 	movx	@dptr,a
                           2622 ;	../../shared/src/cal_rom.c:102: txdcc_pdiv_step_cnt = TXDCC_PDIV_CAL_STEP_SIZE;             //when speed change, restore the fracition code to middle	
   8626 90 E6 3E           2623 	mov	dptr,#(_CON_CAL_STEP_SIZE3 + 0x0002)
   8629 E0                 2624 	movx	a,@dptr
   862A FA                 2625 	mov	r2,a
   862B 90 66 0F           2626 	mov	dptr,#_txdcc_pdiv_step_cnt
   862E F0                 2627 	movx	@dptr,a
                           2628 ;	../../shared/src/cal_rom.c:103: reg_TRXDCC_CAL_CLK100KHZ_LANE = 1;
                           2629 ;	../../shared/src/cal_rom.c:104: reg_TRXDCC_CAL_CLK100KHZ_LANE = 0;
   862F 90 02 20           2630 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_136
   8632 E0                 2631 	movx	a,@dptr
   8633 44 01              2632 	orl	a,#0x01
   8635 F0                 2633 	movx	@dptr,a
   8636 E0                 2634 	movx	a,@dptr
   8637 54 FE              2635 	anl	a,#0xfe
   8639 F0                 2636 	movx	@dptr,a
   863A                    2637 00110$:
                           2638 ;	../../shared/src/cal_rom.c:107: LOAD_CAL_ON = 0;
   863A 90 60 08           2639 	mov	dptr,#_CAL_CTRL3_LANE
   863D E4                 2640 	clr	a
   863E F0                 2641 	movx	@dptr,a
   863F 02 00 C5           2642 	ljmp	__sdcc_banked_ret
                           2643 ;------------------------------------------------------------
                           2644 ;Allocation info for local variables in function 'load_cal_data_dll'
                           2645 ;------------------------------------------------------------
                           2646 ;val                       Allocated to registers r2 
                           2647 ;div2                      Allocated to registers r2 
                           2648 ;------------------------------------------------------------
                           2649 ;	../../shared/src/cal_rom.c:111: void load_cal_data_dll(void) BANKING_CTRL{
                           2650 ;	-----------------------------------------
                           2651 ;	 function load_cal_data_dll
                           2652 ;	-----------------------------------------
   8642                    2653 _load_cal_data_dll:
                           2654 ;	../../shared/src/cal_rom.c:115: LOAD_CAL_ON = 1;
   8642 90 60 08           2655 	mov	dptr,#_CAL_CTRL3_LANE
   8645 74 01              2656 	mov	a,#0x01
   8647 F0                 2657 	movx	@dptr,a
                           2658 ;	../../shared/src/cal_rom.c:117: reg_DLL_GMSEL_LANE_2_0 = lnx_cal_dll_gmsel[rx_pll_rate];	
   8648 A2 0E              2659 	mov	c,_rx_pll_rate
   864A E4                 2660 	clr	a
   864B 33                 2661 	rlc	a
   864C 24 04              2662 	add	a,#_lnx_cal_dll_gmsel
   864E F5 82              2663 	mov	dpl,a
   8650 E4                 2664 	clr	a
   8651 34 66              2665 	addc	a,#(_lnx_cal_dll_gmsel >> 8)
   8653 F5 83              2666 	mov	dph,a
   8655 E0                 2667 	movx	a,@dptr
   8656 90 00 1C           2668 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_7
   8659 C4                 2669 	swap	a
   865A 03                 2670 	rr	a
   865B 54 38              2671 	anl	a,#(0xf8&0x38)
   865D F5 F0              2672 	mov	b,a
   865F E0                 2673 	movx	a,@dptr
   8660 54 C7              2674 	anl	a,#0xc7
   8662 45 F0              2675 	orl	a,b
   8664 F0                 2676 	movx	@dptr,a
                           2677 ;	../../shared/src/cal_rom.c:120: val = lnx_cal_vdda_dll_sel[PWR + cmx_RXDLL_CAL_CONT_CUR_LOAD_EN][rx_pll_rate];		
   8665 90 E6 32           2678 	mov	dptr,#(_CONTROL_CONFIG9 + 0x0002)
   8668 E0                 2679 	movx	a,@dptr
   8669 03                 2680 	rr	a
   866A 54 01              2681 	anl	a,#0x01
   866C 25 E0              2682 	add	a,acc
   866E 24 06              2683 	add	a,#_lnx_cal_vdda_dll_sel
   8670 FA                 2684 	mov	r2,a
   8671 E4                 2685 	clr	a
   8672 34 66              2686 	addc	a,#(_lnx_cal_vdda_dll_sel >> 8)
   8674 FB                 2687 	mov	r3,a
   8675 A2 0E              2688 	mov	c,_rx_pll_rate
   8677 E4                 2689 	clr	a
   8678 33                 2690 	rlc	a
   8679 2A                 2691 	add	a,r2
   867A F5 82              2692 	mov	dpl,a
   867C E4                 2693 	clr	a
   867D 3B                 2694 	addc	a,r3
   867E F5 83              2695 	mov	dph,a
   8680 E0                 2696 	movx	a,@dptr
                           2697 ;	../../shared/src/cal_rom.c:121: set_sellv_rxdll_ch(val);		
   8681 F5 82              2698 	mov	dpl,a
   8683 78 DA              2699 	mov	r0,#_set_sellv_rxdll_ch
   8685 79 AD              2700 	mov	r1,#(_set_sellv_rxdll_ch >> 8)
   8687 7A 02              2701 	mov	r2,#(_set_sellv_rxdll_ch >> 16)
   8689 12 00 B3           2702 	lcall	__sdcc_banked_call
                           2703 ;	../../shared/src/cal_rom.c:124: reg_EOM_DLL_GMSEL_LANE_2_0 = lnx_cal_dll_eom_gmsel[rx_pll_rate];
   868C A2 0E              2704 	mov	c,_rx_pll_rate
   868E E4                 2705 	clr	a
   868F 33                 2706 	rlc	a
   8690 24 0A              2707 	add	a,#_lnx_cal_dll_eom_gmsel
   8692 F5 82              2708 	mov	dpl,a
   8694 E4                 2709 	clr	a
   8695 34 66              2710 	addc	a,#(_lnx_cal_dll_eom_gmsel >> 8)
   8697 F5 83              2711 	mov	dph,a
   8699 E0                 2712 	movx	a,@dptr
   869A 90 00 24           2713 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_9
   869D C4                 2714 	swap	a
   869E 23                 2715 	rl	a
   869F 54 E0              2716 	anl	a,#(0xe0&0xe0)
   86A1 F5 F0              2717 	mov	b,a
   86A3 E0                 2718 	movx	a,@dptr
   86A4 54 1F              2719 	anl	a,#0x1f
   86A6 45 F0              2720 	orl	a,b
   86A8 F0                 2721 	movx	@dptr,a
                           2722 ;	../../shared/src/cal_rom.c:127: val = lnx_cal_vdda_dll_eom_sel[PWR + cmx_EOM_DLL_CAL_CONT_CUR_LOAD_EN][rx_pll_rate];		
   86A9 90 E6 32           2723 	mov	dptr,#(_CONTROL_CONFIG9 + 0x0002)
   86AC E0                 2724 	movx	a,@dptr
   86AD 03                 2725 	rr	a
   86AE 03                 2726 	rr	a
   86AF 54 01              2727 	anl	a,#0x01
   86B1 25 E0              2728 	add	a,acc
   86B3 24 0C              2729 	add	a,#_lnx_cal_vdda_dll_eom_sel
   86B5 FB                 2730 	mov	r3,a
   86B6 E4                 2731 	clr	a
   86B7 34 66              2732 	addc	a,#(_lnx_cal_vdda_dll_eom_sel >> 8)
   86B9 FC                 2733 	mov	r4,a
   86BA A2 0E              2734 	mov	c,_rx_pll_rate
   86BC E4                 2735 	clr	a
   86BD 33                 2736 	rlc	a
   86BE 2B                 2737 	add	a,r3
   86BF F5 82              2738 	mov	dpl,a
   86C1 E4                 2739 	clr	a
   86C2 3C                 2740 	addc	a,r4
   86C3 F5 83              2741 	mov	dph,a
   86C5 E0                 2742 	movx	a,@dptr
                           2743 ;	../../shared/src/cal_rom.c:128: set_sellv_rxeomdll_ch(val);		
   86C6 F5 82              2744 	mov	dpl,a
   86C8 78 A5              2745 	mov	r0,#_set_sellv_rxeomdll_ch
   86CA 79 AF              2746 	mov	r1,#(_set_sellv_rxeomdll_ch >> 8)
   86CC 7A 02              2747 	mov	r2,#(_set_sellv_rxeomdll_ch >> 16)
   86CE 12 00 B3           2748 	lcall	__sdcc_banked_call
                           2749 ;	../../shared/src/cal_rom.c:131: div2 = (reg_RX_SPEED_DIV_LANE_2_0&0x04)==0;
   86D1 90 02 28           2750 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_138
   86D4 E0                 2751 	movx	a,@dptr
   86D5 03                 2752 	rr	a
   86D6 03                 2753 	rr	a
   86D7 54 07              2754 	anl	a,#0x07
   86D9 FA                 2755 	mov	r2,a
   86DA 53 02 04           2756 	anl	ar2,#0x04
   86DD E4                 2757 	clr	a
   86DE BA 00 01           2758 	cjne	r2,#0x00,00103$
   86E1 04                 2759 	inc	a
   86E2                    2760 00103$:
   86E2 FA                 2761 	mov	r2,a
                           2762 ;	../../shared/src/cal_rom.c:132: reg_ALIGN90_DAC_LANE_5_0 = lnx_cal_align90_dac[PWR][rx_pll_rate][div2];
   86E3 A2 0E              2763 	mov	c,_rx_pll_rate
   86E5 E4                 2764 	clr	a
   86E6 33                 2765 	rlc	a
   86E7 25 E0              2766 	add	a,acc
   86E9 24 1A              2767 	add	a,#_lnx_cal_align90_dac
   86EB FB                 2768 	mov	r3,a
   86EC E4                 2769 	clr	a
   86ED 34 66              2770 	addc	a,#(_lnx_cal_align90_dac >> 8)
   86EF FC                 2771 	mov	r4,a
   86F0 EA                 2772 	mov	a,r2
   86F1 2B                 2773 	add	a,r3
   86F2 F5 82              2774 	mov	dpl,a
   86F4 E4                 2775 	clr	a
   86F5 3C                 2776 	addc	a,r4
   86F6 F5 83              2777 	mov	dph,a
   86F8 E0                 2778 	movx	a,@dptr
   86F9 90 00 34           2779 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_13
   86FC 25 E0              2780 	add	a,acc
   86FE 25 E0              2781 	add	a,acc
   8700 54 FC              2782 	anl	a,#0xfc
   8702 F5 F0              2783 	mov	b,a
   8704 E0                 2784 	movx	a,@dptr
   8705 54 03              2785 	anl	a,#0x03
   8707 45 F0              2786 	orl	a,b
   8709 F0                 2787 	movx	@dptr,a
                           2788 ;	../../shared/src/cal_rom.c:133: reg_ALIGN90_GM_LANE_2_0 = lnx_cal_align90_gm[PWR][rx_pll_rate][div2];
   870A A2 0E              2789 	mov	c,_rx_pll_rate
   870C E4                 2790 	clr	a
   870D 33                 2791 	rlc	a
   870E 25 E0              2792 	add	a,acc
   8710 24 22              2793 	add	a,#_lnx_cal_align90_gm
   8712 FB                 2794 	mov	r3,a
   8713 E4                 2795 	clr	a
   8714 34 66              2796 	addc	a,#(_lnx_cal_align90_gm >> 8)
   8716 FC                 2797 	mov	r4,a
   8717 EA                 2798 	mov	a,r2
   8718 2B                 2799 	add	a,r3
   8719 F5 82              2800 	mov	dpl,a
   871B E4                 2801 	clr	a
   871C 3C                 2802 	addc	a,r4
   871D F5 83              2803 	mov	dph,a
   871F E0                 2804 	movx	a,@dptr
   8720 90 00 30           2805 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_12
   8723 25 E0              2806 	add	a,acc
   8725 54 0E              2807 	anl	a,#0x0e
   8727 F5 F0              2808 	mov	b,a
   8729 E0                 2809 	movx	a,@dptr
   872A 54 F1              2810 	anl	a,#0xf1
   872C 45 F0              2811 	orl	a,b
   872E F0                 2812 	movx	@dptr,a
                           2813 ;	../../shared/src/cal_rom.c:134: reg_ALIGN90_DUMMY_CLK_LANE = lnx_cal_align90_dummy_clk[PWR][rx_pll_rate][div2];		
   872F A2 0E              2814 	mov	c,_rx_pll_rate
   8731 E4                 2815 	clr	a
   8732 33                 2816 	rlc	a
   8733 25 E0              2817 	add	a,acc
   8735 24 12              2818 	add	a,#_lnx_cal_align90_dummy_clk
   8737 FB                 2819 	mov	r3,a
   8738 E4                 2820 	clr	a
   8739 34 66              2821 	addc	a,#(_lnx_cal_align90_dummy_clk >> 8)
   873B FC                 2822 	mov	r4,a
   873C EA                 2823 	mov	a,r2
   873D 2B                 2824 	add	a,r3
   873E F5 82              2825 	mov	dpl,a
   8740 E4                 2826 	clr	a
   8741 3C                 2827 	addc	a,r4
   8742 F5 83              2828 	mov	dph,a
   8744 E0                 2829 	movx	a,@dptr
   8745 FA                 2830 	mov	r2,a
   8746 90 00 34           2831 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_13
   8749 13                 2832 	rrc	a
   874A E0                 2833 	movx	a,@dptr
   874B 92 E1              2834 	mov	acc.1,c
   874D F0                 2835 	movx	@dptr,a
                           2836 ;	../../shared/src/cal_rom.c:135: reg_ALIGN90_SYN_CLK_LANE	= 1;
                           2837 ;	../../shared/src/cal_rom.c:136: reg_ALIGN90_SYN_CLK_LANE	= 0;
   874E 90 00 34           2838 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_13
   8751 E0                 2839 	movx	a,@dptr
   8752 44 01              2840 	orl	a,#0x01
   8754 F0                 2841 	movx	@dptr,a
   8755 E0                 2842 	movx	a,@dptr
   8756 54 FE              2843 	anl	a,#0xfe
   8758 F0                 2844 	movx	@dptr,a
                           2845 ;	../../shared/src/cal_rom.c:138: LOAD_CAL_ON = 0;
   8759 90 60 08           2846 	mov	dptr,#_CAL_CTRL3_LANE
   875C E4                 2847 	clr	a
   875D F0                 2848 	movx	@dptr,a
   875E 02 00 C5           2849 	ljmp	__sdcc_banked_ret
                           2850 ;------------------------------------------------------------
                           2851 ;Allocation info for local variables in function 'ringpll_save'
                           2852 ;------------------------------------------------------------
                           2853 ;no                        Allocated to registers r2 
                           2854 ;------------------------------------------------------------
                           2855 ;	../../shared/src/cal_rom.c:142: void ringpll_save(uint8_t no) BANKING_CTRL {
                           2856 ;	-----------------------------------------
                           2857 ;	 function ringpll_save
                           2858 ;	-----------------------------------------
   8761                    2859 _ringpll_save:
                           2860 ;	../../shared/src/cal_rom.c:147: cmx_cal_pll_speed_ring[no][PLL_RATE_SEL_RING] = (reg_PLL_SPEED_RING_4_0 & 0x1f) | 0x00;
   8761 E5 82              2861 	mov	a,dpl
   8763 FA                 2862 	mov	r2,a
   8764 25 E0              2863 	add	a,acc
   8766 FB                 2864 	mov	r3,a
   8767 24 D0              2865 	add	a,#_cmx_cal_pll_speed_ring
   8769 FC                 2866 	mov	r4,a
   876A E4                 2867 	clr	a
   876B 34 E5              2868 	addc	a,#(_cmx_cal_pll_speed_ring >> 8)
   876D FD                 2869 	mov	r5,a
   876E 90 E6 1F           2870 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0003)
   8771 E0                 2871 	movx	a,@dptr
   8772 2C                 2872 	add	a,r4
   8773 FC                 2873 	mov	r4,a
   8774 E4                 2874 	clr	a
   8775 3D                 2875 	addc	a,r5
   8776 FD                 2876 	mov	r5,a
   8777 90 83 00           2877 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_192
   877A E0                 2878 	movx	a,@dptr
   877B C4                 2879 	swap	a
   877C 23                 2880 	rl	a
   877D 54 1F              2881 	anl	a,#0x1f
   877F FE                 2882 	mov	r6,a
   8780 53 06 1F           2883 	anl	ar6,#0x1F
   8783 8C 82              2884 	mov	dpl,r4
   8785 8D 83              2885 	mov	dph,r5
   8787 EE                 2886 	mov	a,r6
   8788 F0                 2887 	movx	@dptr,a
                           2888 ;	../../shared/src/cal_rom.c:148: cmx_cal_pll_sllp_dac_coarse_ring[no][PLL_RATE_SEL_RING] = (reg_PLL_SLLP_DAC_COARSE_RING_3_0 & 0x0f) | 0x00;
   8789 EB                 2889 	mov	a,r3
   878A 24 D4              2890 	add	a,#_cmx_cal_pll_sllp_dac_coarse_ring
   878C FB                 2891 	mov	r3,a
   878D E4                 2892 	clr	a
   878E 34 E5              2893 	addc	a,#(_cmx_cal_pll_sllp_dac_coarse_ring >> 8)
   8790 FC                 2894 	mov	r4,a
   8791 90 E6 1F           2895 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0003)
   8794 E0                 2896 	movx	a,@dptr
   8795 2B                 2897 	add	a,r3
   8796 FB                 2898 	mov	r3,a
   8797 E4                 2899 	clr	a
   8798 3C                 2900 	addc	a,r4
   8799 FC                 2901 	mov	r4,a
   879A 90 83 04           2902 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   879D E0                 2903 	movx	a,@dptr
   879E 54 0F              2904 	anl	a,#0x0f
   87A0 FD                 2905 	mov	r5,a
   87A1 53 05 0F           2906 	anl	ar5,#0x0F
   87A4 8B 82              2907 	mov	dpl,r3
   87A6 8C 83              2908 	mov	dph,r4
   87A8 ED                 2909 	mov	a,r5
   87A9 F0                 2910 	movx	@dptr,a
                           2911 ;	../../shared/src/cal_rom.c:150: cmx_cal_sllp_dac_fine_ring[no][PLL_RATE_SEL_RING] = ringpll_dac_fine;
   87AA EA                 2912 	mov	a,r2
   87AB 2A                 2913 	add	a,r2
   87AC 25 E0              2914 	add	a,acc
   87AE 24 D8              2915 	add	a,#_cmx_cal_sllp_dac_fine_ring
   87B0 FA                 2916 	mov	r2,a
   87B1 E4                 2917 	clr	a
   87B2 34 E5              2918 	addc	a,#(_cmx_cal_sllp_dac_fine_ring >> 8)
   87B4 FB                 2919 	mov	r3,a
   87B5 90 E6 1F           2920 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0003)
   87B8 E0                 2921 	movx	a,@dptr
   87B9 25 E0              2922 	add	a,acc
   87BB 2A                 2923 	add	a,r2
   87BC FA                 2924 	mov	r2,a
   87BD E4                 2925 	clr	a
   87BE 3B                 2926 	addc	a,r3
   87BF FB                 2927 	mov	r3,a
   87C0 90 66 21           2928 	mov	dptr,#_ringpll_dac_fine
   87C3 E0                 2929 	movx	a,@dptr
   87C4 FC                 2930 	mov	r4,a
   87C5 A3                 2931 	inc	dptr
   87C6 E0                 2932 	movx	a,@dptr
   87C7 FD                 2933 	mov	r5,a
   87C8 8A 82              2934 	mov	dpl,r2
   87CA 8B 83              2935 	mov	dph,r3
   87CC EC                 2936 	mov	a,r4
   87CD F0                 2937 	movx	@dptr,a
   87CE A3                 2938 	inc	dptr
   87CF ED                 2939 	mov	a,r5
   87D0 F0                 2940 	movx	@dptr,a
   87D1 02 00 C5           2941 	ljmp	__sdcc_banked_ret
                           2942 ;------------------------------------------------------------
                           2943 ;Allocation info for local variables in function 'ringpll_load'
                           2944 ;------------------------------------------------------------
                           2945 ;no                        Allocated to registers r2 
                           2946 ;------------------------------------------------------------
                           2947 ;	../../shared/src/cal_rom.c:153: void ringpll_load(uint8_t no) BANKING_CTRL {
                           2948 ;	-----------------------------------------
                           2949 ;	 function ringpll_load
                           2950 ;	-----------------------------------------
   87D4                    2951 _ringpll_load:
                           2952 ;	../../shared/src/cal_rom.c:158: reg_PLL_SPEED_RING_4_0 = cmx_cal_pll_speed_ring[no][PLL_RATE_SEL_RING];
   87D4 E5 82              2953 	mov	a,dpl
   87D6 FA                 2954 	mov	r2,a
   87D7 25 E0              2955 	add	a,acc
   87D9 FB                 2956 	mov	r3,a
   87DA 24 D0              2957 	add	a,#_cmx_cal_pll_speed_ring
   87DC FC                 2958 	mov	r4,a
   87DD E4                 2959 	clr	a
   87DE 34 E5              2960 	addc	a,#(_cmx_cal_pll_speed_ring >> 8)
   87E0 FD                 2961 	mov	r5,a
   87E1 90 E6 1F           2962 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0003)
   87E4 E0                 2963 	movx	a,@dptr
   87E5 FE                 2964 	mov	r6,a
   87E6 2C                 2965 	add	a,r4
   87E7 F5 82              2966 	mov	dpl,a
   87E9 E4                 2967 	clr	a
   87EA 3D                 2968 	addc	a,r5
   87EB F5 83              2969 	mov	dph,a
   87ED E0                 2970 	movx	a,@dptr
   87EE 90 83 00           2971 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_192
   87F1 C4                 2972 	swap	a
   87F2 03                 2973 	rr	a
   87F3 54 F8              2974 	anl	a,#(0xf8&0xf8)
   87F5 F5 F0              2975 	mov	b,a
   87F7 E0                 2976 	movx	a,@dptr
   87F8 54 07              2977 	anl	a,#0x07
   87FA 45 F0              2978 	orl	a,b
   87FC F0                 2979 	movx	@dptr,a
                           2980 ;	../../shared/src/cal_rom.c:159: reg_PLL_SLLP_DAC_COARSE_RING_3_0 = cmx_cal_pll_sllp_dac_coarse_ring[no][PLL_RATE_SEL_RING];
   87FD EB                 2981 	mov	a,r3
   87FE 24 D4              2982 	add	a,#_cmx_cal_pll_sllp_dac_coarse_ring
   8800 FB                 2983 	mov	r3,a
   8801 E4                 2984 	clr	a
   8802 34 E5              2985 	addc	a,#(_cmx_cal_pll_sllp_dac_coarse_ring >> 8)
   8804 FC                 2986 	mov	r4,a
   8805 90 E6 1F           2987 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0003)
   8808 E0                 2988 	movx	a,@dptr
   8809 FD                 2989 	mov	r5,a
   880A 2B                 2990 	add	a,r3
   880B F5 82              2991 	mov	dpl,a
   880D E4                 2992 	clr	a
   880E 3C                 2993 	addc	a,r4
   880F F5 83              2994 	mov	dph,a
   8811 E0                 2995 	movx	a,@dptr
   8812 90 83 04           2996 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   8815 54 0F              2997 	anl	a,#0x0f
   8817 F5 F0              2998 	mov	b,a
   8819 E0                 2999 	movx	a,@dptr
   881A 54 F0              3000 	anl	a,#0xf0
   881C 45 F0              3001 	orl	a,b
   881E F0                 3002 	movx	@dptr,a
                           3003 ;	../../shared/src/cal_rom.c:162: ringpll_dac_fine = cmx_cal_sllp_dac_fine_ring[no][PLL_RATE_SEL_RING]; 
   881F EA                 3004 	mov	a,r2
   8820 2A                 3005 	add	a,r2
   8821 25 E0              3006 	add	a,acc
   8823 24 D8              3007 	add	a,#_cmx_cal_sllp_dac_fine_ring
   8825 FA                 3008 	mov	r2,a
   8826 E4                 3009 	clr	a
   8827 34 E5              3010 	addc	a,#(_cmx_cal_sllp_dac_fine_ring >> 8)
   8829 FB                 3011 	mov	r3,a
   882A 90 E6 1F           3012 	mov	dptr,#(_CONTROL_CONFIG6 + 0x0003)
   882D E0                 3013 	movx	a,@dptr
   882E 25 E0              3014 	add	a,acc
   8830 2A                 3015 	add	a,r2
   8831 F5 82              3016 	mov	dpl,a
   8833 E4                 3017 	clr	a
   8834 3B                 3018 	addc	a,r3
   8835 F5 83              3019 	mov	dph,a
   8837 E0                 3020 	movx	a,@dptr
   8838 FA                 3021 	mov	r2,a
   8839 A3                 3022 	inc	dptr
   883A E0                 3023 	movx	a,@dptr
   883B FB                 3024 	mov	r3,a
   883C 90 66 21           3025 	mov	dptr,#_ringpll_dac_fine
   883F EA                 3026 	mov	a,r2
   8840 F0                 3027 	movx	@dptr,a
   8841 A3                 3028 	inc	dptr
   8842 EB                 3029 	mov	a,r3
   8843 F0                 3030 	movx	@dptr,a
                           3031 ;	../../shared/src/cal_rom.c:167: reg_PLL_SLLP_DAC_FINE_RING_10_8 = (uint8_t)(ringpll_dac_fine>>8); 
   8844 8B 04              3032 	mov	ar4,r3
   8846 90 83 08           3033 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_194
   8849 EC                 3034 	mov	a,r4
   884A C4                 3035 	swap	a
   884B 23                 3036 	rl	a
   884C 54 E0              3037 	anl	a,#(0xe0&0xe0)
   884E F5 F0              3038 	mov	b,a
   8850 E0                 3039 	movx	a,@dptr
   8851 54 1F              3040 	anl	a,#0x1f
   8853 45 F0              3041 	orl	a,b
   8855 F0                 3042 	movx	@dptr,a
                           3043 ;	../../shared/src/cal_rom.c:168: reg_PLL_SLLP_DAC_FINE_RING_7_0 = (uint8_t)ringpll_dac_fine;  	
   8856 90 83 0C           3044 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_195
   8859 EA                 3045 	mov	a,r2
   885A F0                 3046 	movx	@dptr,a
   885B 02 00 C5           3047 	ljmp	__sdcc_banked_ret
                           3048 ;------------------------------------------------------------
                           3049 ;Allocation info for local variables in function 'ringpll_dac_fine_output'
                           3050 ;------------------------------------------------------------
                           3051 ;------------------------------------------------------------
                           3052 ;	../../shared/src/cal_rom.c:173: void ringpll_dac_fine_output(void) BANKING_CTRL {
                           3053 ;	-----------------------------------------
                           3054 ;	 function ringpll_dac_fine_output
                           3055 ;	-----------------------------------------
   885E                    3056 _ringpll_dac_fine_output:
                           3057 ;	../../shared/src/cal_rom.c:174: EA = 0;
   885E C2 AF              3058 	clr	_EA
                           3059 ;	../../shared/src/cal_rom.c:180: reg_PLL_SLLP_DAC_FINE_RING_10_8 = (uint8_t)(ringpll_dac_fine>>8); 
   8860 90 66 21           3060 	mov	dptr,#_ringpll_dac_fine
   8863 E0                 3061 	movx	a,@dptr
   8864 FA                 3062 	mov	r2,a
   8865 A3                 3063 	inc	dptr
   8866 E0                 3064 	movx	a,@dptr
   8867 FB                 3065 	mov	r3,a
   8868 FC                 3066 	mov	r4,a
   8869 90 83 08           3067 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_194
   886C EC                 3068 	mov	a,r4
   886D C4                 3069 	swap	a
   886E 23                 3070 	rl	a
   886F 54 E0              3071 	anl	a,#(0xe0&0xe0)
   8871 F5 F0              3072 	mov	b,a
   8873 E0                 3073 	movx	a,@dptr
   8874 54 1F              3074 	anl	a,#0x1f
   8876 45 F0              3075 	orl	a,b
   8878 F0                 3076 	movx	@dptr,a
                           3077 ;	../../shared/src/cal_rom.c:181: reg_PLL_SLLP_DAC_FINE_RING_7_0 = (uint8_t)ringpll_dac_fine;  	
   8879 90 83 0C           3078 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_195
   887C EA                 3079 	mov	a,r2
   887D F0                 3080 	movx	@dptr,a
                           3081 ;	../../shared/src/cal_rom.c:182: reg_PLL_SLLP_DAC_VALID_RING = 1;  reg_PLL_SLLP_DAC_VALID_RING = 0;	
   887E 90 83 04           3082 	mov	dptr,#_UPHY14_CMN_ANAREG_TOP_193
   8881 E0                 3083 	movx	a,@dptr
   8882 44 40              3084 	orl	a,#0x40
   8884 F0                 3085 	movx	@dptr,a
   8885 E0                 3086 	movx	a,@dptr
   8886 54 BF              3087 	anl	a,#0xbf
   8888 F0                 3088 	movx	@dptr,a
                           3089 ;	../../shared/src/cal_rom.c:184: EA = 1;
   8889 D2 AF              3090 	setb	_EA
   888B 02 00 C5           3091 	ljmp	__sdcc_banked_ret
                           3092 	.area CSEG    (CODE)
                           3093 	.area BANK2   (CODE)
                           3094 	.area CABS    (ABS,CODE)
