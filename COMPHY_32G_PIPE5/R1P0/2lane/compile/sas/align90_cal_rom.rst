                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:37 2018
                              5 ;--------------------------------------------------------
                              6 	.module align90_cal_rom
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
                            979 	.globl _align90_comp_cal
                            980 	.globl _align90_read_pd
                            981 	.globl _align90_cal_update
                            982 	.globl _get_dac_inc
                            983 	.globl _get_dac_dec
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
                           1121 ; overlayable bit register bank
                           1122 ;--------------------------------------------------------
                           1123 	.area BIT_BANK	(REL,OVR,DATA)
   0025                    1124 bits:
   0025                    1125 	.ds 1
                    8000   1126 	b0 = bits[0]
                    8100   1127 	b1 = bits[1]
                    8200   1128 	b2 = bits[2]
                    8300   1129 	b3 = bits[3]
                    8400   1130 	b4 = bits[4]
                    8500   1131 	b5 = bits[5]
                    8600   1132 	b6 = bits[6]
                    8700   1133 	b7 = bits[7]
                           1134 ;--------------------------------------------------------
                           1135 ; internal ram data
                           1136 ;--------------------------------------------------------
                           1137 	.area DSEG    (DATA)
                           1138 ;--------------------------------------------------------
                           1139 ; overlayable items in internal ram 
                           1140 ;--------------------------------------------------------
                           1141 	.area OSEG    (OVR,DATA)
                           1142 ;--------------------------------------------------------
                           1143 ; indirectly addressable internal ram data
                           1144 ;--------------------------------------------------------
                           1145 	.area ISEG    (DATA)
                           1146 ;--------------------------------------------------------
                           1147 ; absolute internal ram data
                           1148 ;--------------------------------------------------------
                           1149 	.area IABS    (ABS,DATA)
                           1150 	.area IABS    (ABS,DATA)
                           1151 ;--------------------------------------------------------
                           1152 ; bit data
                           1153 ;--------------------------------------------------------
                           1154 	.area BSEG    (BIT)
                           1155 ;--------------------------------------------------------
                           1156 ; paged external ram data
                           1157 ;--------------------------------------------------------
                           1158 	.area PSEG    (PAG,XDATA)
                           1159 ;--------------------------------------------------------
                           1160 ; external ram data
                           1161 ;--------------------------------------------------------
                           1162 	.area XSEG    (XDATA)
                    1000   1163 _UPHY14_TRX_LANEPLL_ANAREG_TOP_128	=	0x1000
                    1004   1164 _UPHY14_TRX_LANEPLL_ANAREG_TOP_129	=	0x1004
                    1008   1165 _UPHY14_TRX_LANEPLL_ANAREG_TOP_130	=	0x1008
                    100C   1166 _UPHY14_TRX_LANEPLL_ANAREG_TOP_131	=	0x100c
                    1010   1167 _UPHY14_TRX_LANEPLL_ANAREG_TOP_132	=	0x1010
                    1014   1168 _UPHY14_TRX_LANEPLL_ANAREG_TOP_133	=	0x1014
                    1018   1169 _UPHY14_TRX_LANEPLL_ANAREG_TOP_134	=	0x1018
                    101C   1170 _UPHY14_TRX_LANEPLL_ANAREG_TOP_135	=	0x101c
                    1020   1171 _UPHY14_TRX_LANEPLL_ANAREG_TOP_136	=	0x1020
                    1024   1172 _UPHY14_TRX_LANEPLL_ANAREG_TOP_137	=	0x1024
                    1028   1173 _UPHY14_TRX_LANEPLL_ANAREG_TOP_138	=	0x1028
                    102C   1174 _UPHY14_TRX_LANEPLL_ANAREG_TOP_139	=	0x102c
                    1030   1175 _UPHY14_TRX_LANEPLL_ANAREG_TOP_140	=	0x1030
                    1034   1176 _UPHY14_TRX_LANEPLL_ANAREG_TOP_141	=	0x1034
                    1038   1177 _UPHY14_TRX_LANEPLL_ANAREG_TOP_142	=	0x1038
                    103C   1178 _UPHY14_TRX_LANEPLL_ANAREG_TOP_143	=	0x103c
                    0200   1179 _UPHY14_TRX_ANAREG_TOP_128	=	0x0200
                    0204   1180 _UPHY14_TRX_ANAREG_TOP_129	=	0x0204
                    0208   1181 _UPHY14_TRX_ANAREG_TOP_130	=	0x0208
                    020C   1182 _UPHY14_TRX_ANAREG_TOP_131	=	0x020c
                    0210   1183 _UPHY14_TRX_ANAREG_TOP_132	=	0x0210
                    0214   1184 _UPHY14_TRX_ANAREG_TOP_133	=	0x0214
                    0218   1185 _UPHY14_TRX_ANAREG_TOP_134	=	0x0218
                    021C   1186 _UPHY14_TRX_ANAREG_TOP_135	=	0x021c
                    0220   1187 _UPHY14_TRX_ANAREG_TOP_136	=	0x0220
                    0224   1188 _UPHY14_TRX_ANAREG_TOP_137	=	0x0224
                    0228   1189 _UPHY14_TRX_ANAREG_TOP_138	=	0x0228
                    022C   1190 _UPHY14_TRX_ANAREG_TOP_139	=	0x022c
                    0230   1191 _UPHY14_TRX_ANAREG_TOP_140	=	0x0230
                    0234   1192 _UPHY14_TRX_ANAREG_TOP_141	=	0x0234
                    0238   1193 _UPHY14_TRX_ANAREG_TOP_142	=	0x0238
                    023C   1194 _UPHY14_TRX_ANAREG_TOP_143	=	0x023c
                    0240   1195 _UPHY14_TRX_ANAREG_TOP_144	=	0x0240
                    0244   1196 _UPHY14_TRX_ANAREG_TOP_145	=	0x0244
                    0248   1197 _UPHY14_TRX_ANAREG_TOP_146	=	0x0248
                    024C   1198 _UPHY14_TRX_ANAREG_TOP_147	=	0x024c
                    0250   1199 _UPHY14_TRX_ANAREG_TOP_148	=	0x0250
                    0254   1200 _UPHY14_TRX_ANAREG_TOP_149	=	0x0254
                    0258   1201 _UPHY14_TRX_ANAREG_TOP_150	=	0x0258
                    025C   1202 _UPHY14_TRX_ANAREG_TOP_151	=	0x025c
                    0260   1203 _UPHY14_TRX_ANAREG_TOP_152	=	0x0260
                    0264   1204 _UPHY14_TRX_ANAREG_TOP_153	=	0x0264
                    0268   1205 _UPHY14_TRX_ANAREG_TOP_154	=	0x0268
                    026C   1206 _UPHY14_TRX_ANAREG_TOP_155	=	0x026c
                    0270   1207 _UPHY14_TRX_ANAREG_TOP_156	=	0x0270
                    0274   1208 _UPHY14_TRX_ANAREG_TOP_157	=	0x0274
                    0000   1209 _UPHY14_TRX_ANAREG_BOT_0	=	0x0000
                    0004   1210 _UPHY14_TRX_ANAREG_BOT_1	=	0x0004
                    0008   1211 _UPHY14_TRX_ANAREG_BOT_2	=	0x0008
                    000C   1212 _UPHY14_TRX_ANAREG_BOT_3	=	0x000c
                    0010   1213 _UPHY14_TRX_ANAREG_BOT_4	=	0x0010
                    0014   1214 _UPHY14_TRX_ANAREG_BOT_5	=	0x0014
                    0018   1215 _UPHY14_TRX_ANAREG_BOT_6	=	0x0018
                    001C   1216 _UPHY14_TRX_ANAREG_BOT_7	=	0x001c
                    0020   1217 _UPHY14_TRX_ANAREG_BOT_8	=	0x0020
                    0024   1218 _UPHY14_TRX_ANAREG_BOT_9	=	0x0024
                    0028   1219 _UPHY14_TRX_ANAREG_BOT_10	=	0x0028
                    002C   1220 _UPHY14_TRX_ANAREG_BOT_11	=	0x002c
                    0030   1221 _UPHY14_TRX_ANAREG_BOT_12	=	0x0030
                    0034   1222 _UPHY14_TRX_ANAREG_BOT_13	=	0x0034
                    0038   1223 _UPHY14_TRX_ANAREG_BOT_14	=	0x0038
                    003C   1224 _UPHY14_TRX_ANAREG_BOT_15	=	0x003c
                    0040   1225 _UPHY14_TRX_ANAREG_BOT_16	=	0x0040
                    0044   1226 _UPHY14_TRX_ANAREG_BOT_17	=	0x0044
                    0048   1227 _UPHY14_TRX_ANAREG_BOT_18	=	0x0048
                    004C   1228 _UPHY14_TRX_ANAREG_BOT_19	=	0x004c
                    0050   1229 _UPHY14_TRX_ANAREG_BOT_20	=	0x0050
                    0054   1230 _UPHY14_TRX_ANAREG_BOT_21	=	0x0054
                    0058   1231 _UPHY14_TRX_ANAREG_BOT_22	=	0x0058
                    005C   1232 _UPHY14_TRX_ANAREG_BOT_23	=	0x005c
                    0060   1233 _UPHY14_TRX_ANAREG_BOT_24	=	0x0060
                    0064   1234 _UPHY14_TRX_ANAREG_BOT_25	=	0x0064
                    0068   1235 _UPHY14_TRX_ANAREG_BOT_26	=	0x0068
                    006C   1236 _UPHY14_TRX_ANAREG_BOT_27	=	0x006c
                    0070   1237 _UPHY14_TRX_ANAREG_BOT_28	=	0x0070
                    0074   1238 _UPHY14_TRX_ANAREG_BOT_29	=	0x0074
                    0078   1239 _UPHY14_TRX_ANAREG_BOT_30	=	0x0078
                    007C   1240 _UPHY14_TRX_ANAREG_BOT_31	=	0x007c
                    0080   1241 _UPHY14_TRX_ANAREG_BOT_32	=	0x0080
                    0478   1242 _ANA_DFEE_REG_1E	=	0x0478
                    047C   1243 _ANA_DFEE_REG_1F	=	0x047c
                    0480   1244 _ANA_DFEE_REG_20	=	0x0480
                    0484   1245 _ANA_DFEE_REG_21	=	0x0484
                    0488   1246 _ANA_DFEE_REG_22	=	0x0488
                    048C   1247 _ANA_DFEE_REG_23	=	0x048c
                    0490   1248 _ANA_DFEE_REG_24	=	0x0490
                    0494   1249 _ANA_DFEE_REG_25	=	0x0494
                    0498   1250 _ANA_DFEE_REG_26	=	0x0498
                    049C   1251 _ANA_DFEE_REG_27	=	0x049c
                    0400   1252 _ANA_DFEE_REG_00	=	0x0400
                    0404   1253 _ANA_DFEE_REG_01	=	0x0404
                    0408   1254 _ANA_DFEE_REG_02	=	0x0408
                    040C   1255 _ANA_DFEE_REG_03	=	0x040c
                    0410   1256 _ANA_DFEE_REG_04	=	0x0410
                    0414   1257 _ANA_DFEE_REG_05	=	0x0414
                    0418   1258 _ANA_DFEE_REG_06	=	0x0418
                    041C   1259 _ANA_DFEE_REG_07	=	0x041c
                    0420   1260 _ANA_DFEE_REG_08	=	0x0420
                    0424   1261 _ANA_DFEE_REG_09	=	0x0424
                    0428   1262 _ANA_DFEE_REG_0A	=	0x0428
                    042C   1263 _ANA_DFEE_REG_0B	=	0x042c
                    0430   1264 _ANA_DFEE_REG_0C	=	0x0430
                    0434   1265 _ANA_DFEE_REG_0D	=	0x0434
                    0438   1266 _ANA_DFEE_REG_0E	=	0x0438
                    043C   1267 _ANA_DFEE_REG_0F	=	0x043c
                    0440   1268 _ANA_DFEE_REG_10	=	0x0440
                    0444   1269 _ANA_DFEE_REG_11	=	0x0444
                    0448   1270 _ANA_DFEE_REG_12	=	0x0448
                    044C   1271 _ANA_DFEE_REG_13	=	0x044c
                    0450   1272 _ANA_DFEE_REG_14	=	0x0450
                    0454   1273 _ANA_DFEE_REG_15	=	0x0454
                    0458   1274 _ANA_DFEE_REG_16	=	0x0458
                    045C   1275 _ANA_DFEE_REG_17	=	0x045c
                    0460   1276 _ANA_DFEE_REG_18	=	0x0460
                    0464   1277 _ANA_DFEE_REG_19	=	0x0464
                    0468   1278 _ANA_DFEE_REG_1A	=	0x0468
                    046C   1279 _ANA_DFEE_REG_1B	=	0x046c
                    0470   1280 _ANA_DFEE_REG_1C	=	0x0470
                    0474   1281 _ANA_DFEE_REG_1D	=	0x0474
                    0830   1282 _ANA_DFEO_REG_0C	=	0x0830
                    0834   1283 _ANA_DFEO_REG_0D	=	0x0834
                    0838   1284 _ANA_DFEO_REG_0E	=	0x0838
                    083C   1285 _ANA_DFEO_REG_0F	=	0x083c
                    0840   1286 _ANA_DFEO_REG_10	=	0x0840
                    0844   1287 _ANA_DFEO_REG_11	=	0x0844
                    0848   1288 _ANA_DFEO_REG_12	=	0x0848
                    084C   1289 _ANA_DFEO_REG_13	=	0x084c
                    0850   1290 _ANA_DFEO_REG_14	=	0x0850
                    0854   1291 _ANA_DFEO_REG_15	=	0x0854
                    0858   1292 _ANA_DFEO_REG_16	=	0x0858
                    085C   1293 _ANA_DFEO_REG_17	=	0x085c
                    0860   1294 _ANA_DFEO_REG_18	=	0x0860
                    0864   1295 _ANA_DFEO_REG_19	=	0x0864
                    0868   1296 _ANA_DFEO_REG_1A	=	0x0868
                    086C   1297 _ANA_DFEO_REG_1B	=	0x086c
                    0870   1298 _ANA_DFEO_REG_1C	=	0x0870
                    0874   1299 _ANA_DFEO_REG_1D	=	0x0874
                    0878   1300 _ANA_DFEO_REG_1E	=	0x0878
                    087C   1301 _ANA_DFEO_REG_1F	=	0x087c
                    0880   1302 _ANA_DFEO_REG_20	=	0x0880
                    0884   1303 _ANA_DFEO_REG_21	=	0x0884
                    0888   1304 _ANA_DFEO_REG_22	=	0x0888
                    088C   1305 _ANA_DFEO_REG_23	=	0x088c
                    0890   1306 _ANA_DFEO_REG_24	=	0x0890
                    0894   1307 _ANA_DFEO_REG_25	=	0x0894
                    0898   1308 _ANA_DFEO_REG_26	=	0x0898
                    089C   1309 _ANA_DFEO_REG_27	=	0x089c
                    0800   1310 _ANA_DFEO_REG_00	=	0x0800
                    0804   1311 _ANA_DFEO_REG_01	=	0x0804
                    0808   1312 _ANA_DFEO_REG_02	=	0x0808
                    080C   1313 _ANA_DFEO_REG_03	=	0x080c
                    0810   1314 _ANA_DFEO_REG_04	=	0x0810
                    0814   1315 _ANA_DFEO_REG_05	=	0x0814
                    0818   1316 _ANA_DFEO_REG_06	=	0x0818
                    081C   1317 _ANA_DFEO_REG_07	=	0x081c
                    0820   1318 _ANA_DFEO_REG_08	=	0x0820
                    0824   1319 _ANA_DFEO_REG_09	=	0x0824
                    0828   1320 _ANA_DFEO_REG_0A	=	0x0828
                    082C   1321 _ANA_DFEO_REG_0B	=	0x082c
                    8200   1322 _UPHY14_CMN_ANAREG_TOP_128	=	0x8200
                    8204   1323 _UPHY14_CMN_ANAREG_TOP_129	=	0x8204
                    8208   1324 _UPHY14_CMN_ANAREG_TOP_130	=	0x8208
                    820C   1325 _UPHY14_CMN_ANAREG_TOP_131	=	0x820c
                    8210   1326 _UPHY14_CMN_ANAREG_TOP_132	=	0x8210
                    8214   1327 _UPHY14_CMN_ANAREG_TOP_133	=	0x8214
                    8218   1328 _UPHY14_CMN_ANAREG_TOP_134	=	0x8218
                    821C   1329 _UPHY14_CMN_ANAREG_TOP_135	=	0x821c
                    8220   1330 _UPHY14_CMN_ANAREG_TOP_136	=	0x8220
                    8224   1331 _UPHY14_CMN_ANAREG_TOP_137	=	0x8224
                    8228   1332 _UPHY14_CMN_ANAREG_TOP_138	=	0x8228
                    822C   1333 _UPHY14_CMN_ANAREG_TOP_139	=	0x822c
                    8230   1334 _UPHY14_CMN_ANAREG_TOP_140	=	0x8230
                    8234   1335 _UPHY14_CMN_ANAREG_TOP_141	=	0x8234
                    8238   1336 _UPHY14_CMN_ANAREG_TOP_142	=	0x8238
                    823C   1337 _UPHY14_CMN_ANAREG_TOP_143	=	0x823c
                    8240   1338 _UPHY14_CMN_ANAREG_TOP_144	=	0x8240
                    8244   1339 _UPHY14_CMN_ANAREG_TOP_145	=	0x8244
                    8248   1340 _UPHY14_CMN_ANAREG_TOP_146	=	0x8248
                    824C   1341 _UPHY14_CMN_ANAREG_TOP_147	=	0x824c
                    8250   1342 _UPHY14_CMN_ANAREG_TOP_148	=	0x8250
                    8254   1343 _UPHY14_CMN_ANAREG_TOP_149	=	0x8254
                    8258   1344 _UPHY14_CMN_ANAREG_TOP_150	=	0x8258
                    825C   1345 _UPHY14_CMN_ANAREG_TOP_151	=	0x825c
                    8260   1346 _UPHY14_CMN_ANAREG_TOP_152	=	0x8260
                    8264   1347 _UPHY14_CMN_ANAREG_TOP_153	=	0x8264
                    8268   1348 _UPHY14_CMN_ANAREG_TOP_154	=	0x8268
                    826C   1349 _UPHY14_CMN_ANAREG_TOP_155	=	0x826c
                    8270   1350 _UPHY14_CMN_ANAREG_TOP_156	=	0x8270
                    8274   1351 _UPHY14_CMN_ANAREG_TOP_157	=	0x8274
                    8278   1352 _UPHY14_CMN_ANAREG_TOP_158	=	0x8278
                    827C   1353 _UPHY14_CMN_ANAREG_TOP_159	=	0x827c
                    8280   1354 _UPHY14_CMN_ANAREG_TOP_160	=	0x8280
                    8284   1355 _UPHY14_CMN_ANAREG_TOP_161	=	0x8284
                    8288   1356 _UPHY14_CMN_ANAREG_TOP_162	=	0x8288
                    828C   1357 _UPHY14_CMN_ANAREG_TOP_163	=	0x828c
                    8290   1358 _UPHY14_CMN_ANAREG_TOP_164	=	0x8290
                    8294   1359 _UPHY14_CMN_ANAREG_TOP_165	=	0x8294
                    8298   1360 _UPHY14_CMN_ANAREG_TOP_166	=	0x8298
                    829C   1361 _UPHY14_CMN_ANAREG_TOP_167	=	0x829c
                    82A0   1362 _UPHY14_CMN_ANAREG_TOP_168	=	0x82a0
                    82A4   1363 _UPHY14_CMN_ANAREG_TOP_169	=	0x82a4
                    82A8   1364 _UPHY14_CMN_ANAREG_TOP_170	=	0x82a8
                    82AC   1365 _UPHY14_CMN_ANAREG_TOP_171	=	0x82ac
                    82B0   1366 _UPHY14_CMN_ANAREG_TOP_172	=	0x82b0
                    82B4   1367 _UPHY14_CMN_ANAREG_TOP_173	=	0x82b4
                    82B8   1368 _UPHY14_CMN_ANAREG_TOP_174	=	0x82b8
                    82BC   1369 _UPHY14_CMN_ANAREG_TOP_175	=	0x82bc
                    82C0   1370 _UPHY14_CMN_ANAREG_TOP_176	=	0x82c0
                    82C4   1371 _UPHY14_CMN_ANAREG_TOP_177	=	0x82c4
                    82C8   1372 _UPHY14_CMN_ANAREG_TOP_178	=	0x82c8
                    82CC   1373 _UPHY14_CMN_ANAREG_TOP_179	=	0x82cc
                    82D0   1374 _UPHY14_CMN_ANAREG_TOP_180	=	0x82d0
                    82D4   1375 _UPHY14_CMN_ANAREG_TOP_181	=	0x82d4
                    82D8   1376 _UPHY14_CMN_ANAREG_TOP_182	=	0x82d8
                    82DC   1377 _UPHY14_CMN_ANAREG_TOP_183	=	0x82dc
                    82E0   1378 _UPHY14_CMN_ANAREG_TOP_184	=	0x82e0
                    82E4   1379 _UPHY14_CMN_ANAREG_TOP_185	=	0x82e4
                    82E8   1380 _UPHY14_CMN_ANAREG_TOP_186	=	0x82e8
                    82EC   1381 _UPHY14_CMN_ANAREG_TOP_187	=	0x82ec
                    82F0   1382 _UPHY14_CMN_ANAREG_TOP_188	=	0x82f0
                    82F4   1383 _UPHY14_CMN_ANAREG_TOP_189	=	0x82f4
                    82F8   1384 _UPHY14_CMN_ANAREG_TOP_190	=	0x82f8
                    82FC   1385 _UPHY14_CMN_ANAREG_TOP_191	=	0x82fc
                    8300   1386 _UPHY14_CMN_ANAREG_TOP_192	=	0x8300
                    8304   1387 _UPHY14_CMN_ANAREG_TOP_193	=	0x8304
                    8308   1388 _UPHY14_CMN_ANAREG_TOP_194	=	0x8308
                    830C   1389 _UPHY14_CMN_ANAREG_TOP_195	=	0x830c
                    8310   1390 _UPHY14_CMN_ANAREG_TOP_196	=	0x8310
                    8314   1391 _UPHY14_CMN_ANAREG_TOP_197	=	0x8314
                    8318   1392 _UPHY14_CMN_ANAREG_TOP_198	=	0x8318
                    831C   1393 _UPHY14_CMN_ANAREG_TOP_199	=	0x831c
                    8320   1394 _UPHY14_CMN_ANAREG_TOP_200	=	0x8320
                    8324   1395 _UPHY14_CMN_ANAREG_TOP_201	=	0x8324
                    8328   1396 _UPHY14_CMN_ANAREG_TOP_202	=	0x8328
                    832C   1397 _UPHY14_CMN_ANAREG_TOP_203	=	0x832c
                    8330   1398 _UPHY14_CMN_ANAREG_TOP_204	=	0x8330
                    8334   1399 _UPHY14_CMN_ANAREG_TOP_205	=	0x8334
                    8338   1400 _UPHY14_CMN_ANAREG_TOP_206	=	0x8338
                    833C   1401 _UPHY14_CMN_ANAREG_TOP_207	=	0x833c
                    8340   1402 _UPHY14_CMN_ANAREG_TOP_208	=	0x8340
                    8344   1403 _UPHY14_CMN_ANAREG_TOP_209	=	0x8344
                    8348   1404 _UPHY14_CMN_ANAREG_TOP_210	=	0x8348
                    834C   1405 _UPHY14_CMN_ANAREG_TOP_211	=	0x834c
                    8350   1406 _UPHY14_CMN_ANAREG_TOP_212	=	0x8350
                    8354   1407 _UPHY14_CMN_ANAREG_TOP_213	=	0x8354
                    8358   1408 _UPHY14_CMN_ANAREG_TOP_214	=	0x8358
                    2000   1409 _PM_CTRL_TX_LANE_REG1_LANE	=	0x2000
                    2004   1410 _PM_CTRL_TX_LANE_REG2_LANE	=	0x2004
                    2008   1411 _INPUT_TX_PIN_REG0_LANE	=	0x2008
                    200C   1412 _INPUT_TX_PIN_REG1_LANE	=	0x200c
                    2010   1413 _INPUT_TX_PIN_REG2_LANE	=	0x2010
                    2014   1414 _INPUT_TX_PIN_REG3_LANE	=	0x2014
                    2018   1415 _PM_CTRL_INTERRUPT_REG1_LANE	=	0x2018
                    201C   1416 _PM_CTRL_INTERRUPT_REG2	=	0x201c
                    2020   1417 _CLKGEN_TX_LANE_REG1_LANE	=	0x2020
                    2024   1418 _TX_SPEED_CONVERT_LANE	=	0x2024
                    2028   1419 _SPD_CTRL_INTERRUPT_REG1_LANE	=	0x2028
                    202C   1420 _SPD_CTRL_INTERRUPT_REG2	=	0x202c
                    2030   1421 _SPD_CTRL_TX_LANE_REG1_LANE	=	0x2030
                    2034   1422 _TX_SYSTEM_LANE	=	0x2034
                    203C   1423 _INPUT_TX_PIN_REG4_LANE	=	0x203c
                    2040   1424 _TX_CALIBRATION_LANE	=	0x2040
                    2044   1425 _DIG_TX_RSVD_REG0	=	0x2044
                    2048   1426 _INPUT_TX_PIN_REG5_LANE	=	0x2048
                    204C   1427 __FIELDNAME__LANE	=	0x204c
                    2050   1428 _PM_CTRL_INTERRUPT_ISR_REG1_LANE	=	0x2050
                    2054   1429 _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE	=	0x2054
                    2058   1430 _ANALOG_TX_REALTIME_REG_1	=	0x2058
                    205C   1431 _MON_TOP	=	0x205c
                    2100   1432 _PM_CTRL_RX_LANE_REG1_LANE	=	0x2100
                    2104   1433 _RX_SYSTEM_LANE	=	0x2104
                    2108   1434 _INPUT_RX_PIN_REG0_LANE	=	0x2108
                    210C   1435 _INPUT_RX_PIN_REG1_LANE	=	0x210c
                    2110   1436 _INPUT_RX_PIN_REG2_LANE	=	0x2110
                    2114   1437 _SPD_CTRL_RX_LANE_REG1_LANE	=	0x2114
                    2118   1438 _DIG_RX_RSVD_REG0	=	0x2118
                    211C   1439 _CLKGEN_RX_LANE_REG1_LANE	=	0x211c
                    2120   1440 _FRAME_SYNC_DET_REG0	=	0x2120
                    2124   1441 _FRAME_SYNC_DET_REG1	=	0x2124
                    2128   1442 _FRAME_SYNC_DET_REG2	=	0x2128
                    212C   1443 _FRAME_SYNC_DET_REG3	=	0x212c
                    2130   1444 _FRAME_SYNC_DET_REG4	=	0x2130
                    2134   1445 _FRAME_SYNC_DET_REG5	=	0x2134
                    2138   1446 _FRAME_SYNC_DET_REG6	=	0x2138
                    213C   1447 _CDR_LOCK_REG	=	0x213c
                    2140   1448 _RX_LANE_INTERRUPT	=	0x2140
                    2144   1449 _RX_LANE_INTERRUPT_MASK	=	0x2144
                    2148   1450 _RX_DATA_PATH_REG	=	0x2148
                    214C   1451 _INPUT_RX_PIN_REG3_LANE	=	0x214c
                    2150   1452 _RX_CALIBRATION_REG	=	0x2150
                    2158   1453 _RX_LANE_INTERRUPT_REG1	=	0x2158
                    2160   1454 _DTL_REG0	=	0x2160
                    2164   1455 _DTL_REG1	=	0x2164
                    2168   1456 _DTL_REG2	=	0x2168
                    216C   1457 _DTL_REG3	=	0x216c
                    2170   1458 _SQ_REG0	=	0x2170
                    4000   1459 _LANE_CFG0	=	0x4000
                    4004   1460 _LANE_STATUS0	=	0x4004
                    4008   1461 _LANE_CFG_STATUS2_LANE	=	0x4008
                    400C   1462 _LANE_CFG2_LANE	=	0x400c
                    4010   1463 _LANE_CFG4	=	0x4010
                    4014   1464 _LANE_CFG_STATUS3_LANE	=	0x4014
                    4018   1465 _LANE_DP_PIE8_CFG0_LANE	=	0x4018
                    401C   1466 _LANE_USB_DP_CFG1_LANE	=	0x401c
                    4020   1467 _LANE_USB_DP_CFG2_LANE	=	0x4020
                    4024   1468 _LANE_EQ_CFG0_LANE	=	0x4024
                    4028   1469 _LANE_EQ_CFG1_LANE	=	0x4028
                    402C   1470 _LANE_PRESET_CFG0_LANE	=	0x402c
                    4030   1471 _LANE_PRESET_CFG2_LANE	=	0x4030
                    4034   1472 _LANE_PRESET_CFG4_LANE	=	0x4034
                    4038   1473 _LANE_PRESET_CFG6_LANE	=	0x4038
                    403C   1474 _LANE_PRESET_CFG8_LANE	=	0x403c
                    4040   1475 _LANE_PRESET_CFG10_LANE	=	0x4040
                    4044   1476 _LANE_PRESET_CFG12_LANE	=	0x4044
                    4048   1477 _LANE_PRESET_CFG14_LANE	=	0x4048
                    404C   1478 _LANE_PRESET_CFG16_LANE	=	0x404c
                    4050   1479 _LANE_COEFF_MAX0_LANE	=	0x4050
                    4054   1480 _LANE_REMOTE_SET_LANE	=	0x4054
                    4058   1481 _LANE_EQ_16G_CFG0_LANE	=	0x4058
                    405C   1482 _LANE_16G_PRESET_CFG0_LANE	=	0x405c
                    4060   1483 _LANE_16G_PRESET_CFG2_LANE	=	0x4060
                    4064   1484 _LANE_16G_PRESET_CFG4_LANE	=	0x4064
                    4068   1485 _LANE_16G_PRESET_CFG6_LANE	=	0x4068
                    406C   1486 _LANE_16G_PRESET_CFG8_LANE	=	0x406c
                    4070   1487 _LANE_16G_PRESET_CFG10_LANE	=	0x4070
                    4074   1488 _LANE_16G_PRESET_CFG12_LANE	=	0x4074
                    4078   1489 _LANE_16G_PRESET_CFG14_LANE	=	0x4078
                    407C   1490 _LANE_16G_PRESET_CFG16_LANE	=	0x407c
                    4080   1491 _LANE_EQ_32G_CFG0_LANE	=	0x4080
                    4084   1492 _LANE_32G_PRESET_CFG0_LANE	=	0x4084
                    4088   1493 _LANE_32G_PRESET_CFG2_LANE	=	0x4088
                    408C   1494 _LANE_32G_PRESET_CFG4_LANE	=	0x408c
                    4090   1495 _LANE_32G_PRESET_CFG6_LANE	=	0x4090
                    4094   1496 _LANE_32G_PRESET_CFG8_LANE	=	0x4094
                    4098   1497 _LANE_32G_PRESET_CFG10_LANE	=	0x4098
                    409C   1498 _LANE_32G_PRESET_CFG12_LANE	=	0x409c
                    40A0   1499 _LANE_32G_PRESET_CFG14_LANE	=	0x40a0
                    40A4   1500 _LANE_32G_PRESET_CFG16_LANE	=	0x40a4
                    2200   1501 _MCU_CONTROL_LANE	=	0x2200
                    2204   1502 _MCU_GPIO	=	0x2204
                    2208   1503 _CACHE_DEBUG0	=	0x2208
                    220C   1504 _CACHE_DEBUG1	=	0x220c
                    2210   1505 _LANE_SYSTEM0	=	0x2210
                    2230   1506 _MCU_STATUS0_LANE	=	0x2230
                    2234   1507 _MCU_STATUS1_LANE	=	0x2234
                    2238   1508 _MCU_STATUS2_LANE	=	0x2238
                    223C   1509 _MCU_STATUS3_LANE	=	0x223c
                    2240   1510 _MCU_INT0_CONTROL	=	0x2240
                    2244   1511 _MCU_INT1_CONTROL	=	0x2244
                    2248   1512 _MCU_INT2_CONTROL	=	0x2248
                    224C   1513 _MCU_INT3_CONTROL	=	0x224c
                    2250   1514 _MCU_INT4_CONTROL	=	0x2250
                    2254   1515 _MCU_INT5_CONTROL	=	0x2254
                    2258   1516 _MCU_INT6_CONTROL	=	0x2258
                    225C   1517 _MCU_INT7_CONTROL	=	0x225c
                    2260   1518 _MCU_INT8_CONTROL	=	0x2260
                    2264   1519 _MCU_INT9_CONTROL	=	0x2264
                    2268   1520 _MCU_INT10_CONTROL	=	0x2268
                    226C   1521 _MCU_INT11_CONTROL	=	0x226c
                    2270   1522 _MCU_INT12_CONTROL	=	0x2270
                    2274   1523 _MCU_TIMER_CONTROL	=	0x2274
                    2278   1524 _MCU_TIMER0_CONTROL	=	0x2278
                    227C   1525 _MCU_TIMER1_CONTROL	=	0x227c
                    2280   1526 _MCU_TIMER2_CONTROL	=	0x2280
                    2284   1527 _MCU_TIMER3_CONTROL	=	0x2284
                    2288   1528 _MCU_IRQ_LANE	=	0x2288
                    228C   1529 _MCU_IRQ_MASK_LANE	=	0x228c
                    2290   1530 _MCU_MEM_REG1_LANE	=	0x2290
                    2294   1531 _MCU_MEM_REG2_LANE	=	0x2294
                    2298   1532 _MCU_TIMER_CTRL_1_LANE	=	0x2298
                    229C   1533 _MCU_TIMER_CTRL_2_LANE	=	0x229c
                    22A0   1534 _MCU_TIMER_CTRL_3_LANE	=	0x22a0
                    22A4   1535 _MCU_TIMER_CTRL_4_LANE	=	0x22a4
                    22A8   1536 _MCU_TIMER_CTRL_5_LANE	=	0x22a8
                    22AC   1537 _MCU_TIMER_CTRL_6_LANE	=	0x22ac
                    22B0   1538 _MCU_TIMER_CTRL_7_LANE	=	0x22b0
                    22B4   1539 _MCU_DEBUG0_LANE	=	0x22b4
                    22B8   1540 _MCU_DEBUG1_LANE	=	0x22b8
                    22BC   1541 _MCU_DEBUG2_LANE	=	0x22bc
                    22C0   1542 _MCU_DEBUG3_LANE	=	0x22c0
                    22C4   1543 _MCU_DEBUG_LANE	=	0x22c4
                    22C8   1544 _EXT_INT_CONTROL	=	0x22c8
                    22CC   1545 _ANA_IF_TRX_REG0	=	0x22cc
                    22D0   1546 _ANA_IF_DFEE_REG0	=	0x22d0
                    22D4   1547 _ANA_IF_DFEO_REG0	=	0x22d4
                    22D8   1548 _MCU_IRQ_ISR_LANE	=	0x22d8
                    22DC   1549 _MCU_WDT_LANE	=	0x22dc
                    22E0   1550 _MCU_INT_CONTROL_13	=	0x22e0
                    22E4   1551 _MCU_COMMAND0	=	0x22e4
                    22F4   1552 _MEM_ECC_ERR_ADDRESS0	=	0x22f4
                    22F8   1553 _XDATA_MEM_CHECKSUM_LANE0	=	0x22f8
                    22FC   1554 _XDATA_MEM_CHECKSUM_LANE1	=	0x22fc
                    2300   1555 _PT_CONTROL0	=	0x2300
                    2304   1556 _PT_CONTROL1	=	0x2304
                    2308   1557 _PT_USER_PATTERN0	=	0x2308
                    230C   1558 _PT_USER_PATTERN1	=	0x230c
                    2310   1559 _PT_USER_PATTERN2	=	0x2310
                    2314   1560 _PT_COUNTER0	=	0x2314
                    2318   1561 _PT_COUNTER1	=	0x2318
                    231C   1562 _PT_COUNTER2	=	0x231c
                    2400   1563 _DFE_CTRL_REG0	=	0x2400
                    2404   1564 _DFE_CTRL_REG1	=	0x2404
                    2408   1565 _DFE_CTRL_REG2	=	0x2408
                    240C   1566 _DFE_CTRL_REG3	=	0x240c
                    2410   1567 _RX_EQ_CLK_CTRL	=	0x2410
                    2414   1568 _DFE_CTRL_REG4	=	0x2414
                    2418   1569 _DFE_ANA_REG0	=	0x2418
                    241C   1570 _DFE_ANA_REG1	=	0x241c
                    2420   1571 _DFE_STEP_REG0	=	0x2420
                    2424   1572 _DFE_STEP_REG1	=	0x2424
                    2430   1573 _DFE_FEN_EVEN_REG	=	0x2430
                    2434   1574 _DFE_FEN_ODD_REG	=	0x2434
                    2438   1575 _DFE_DC_EVEN_REG8	=	0x2438
                    243C   1576 _DFE_DC_ODD_REG8	=	0x243c
                    2440   1577 _DFE_FEXT_EVEN_REG0	=	0x2440
                    2444   1578 _DFE_FEXT_EVEN_REG1	=	0x2444
                    2448   1579 _DFE_FEXT_EVEN_REG2	=	0x2448
                    244C   1580 _DFE_FEXT_EVEN_REG3	=	0x244c
                    2450   1581 _DFE_FEXT_EVEN_REG4	=	0x2450
                    2454   1582 _DFE_FEXT_EVEN_REG5	=	0x2454
                    2458   1583 _DFE_FEXT_EVEN_REG6	=	0x2458
                    245C   1584 _DFE_FEXT_EVEN_REG7	=	0x245c
                    2460   1585 _DFE_FEXT_ODD_REG0	=	0x2460
                    2464   1586 _DFE_FEXT_ODD_REG1	=	0x2464
                    2468   1587 _DFE_FEXT_ODD_REG2	=	0x2468
                    246C   1588 _DFE_FEXT_ODD_REG3	=	0x246c
                    2470   1589 _DFE_FEXT_ODD_REG4	=	0x2470
                    2474   1590 _DFE_FEXT_ODD_REG5	=	0x2474
                    2478   1591 _DFE_FEXT_ODD_REG6	=	0x2478
                    247C   1592 _DFE_FEXT_ODD_REG7	=	0x247c
                    2480   1593 _DFE_READ_EVEN_SM_REG0	=	0x2480
                    2484   1594 _DFE_READ_EVEN_SM_REG1	=	0x2484
                    2488   1595 _DFE_READ_EVEN_SM_REG2	=	0x2488
                    248C   1596 _DFE_READ_EVEN_SM_REG3	=	0x248c
                    2490   1597 _DFE_READ_EVEN_SM_REG4	=	0x2490
                    2494   1598 _DFE_READ_EVEN_SM_REG5	=	0x2494
                    2498   1599 _DFE_READ_EVEN_SM_REG6	=	0x2498
                    249C   1600 _DFE_READ_EVEN_SM_REG7	=	0x249c
                    24A0   1601 _DFE_READ_ODD_SM_REG0	=	0x24a0
                    24A4   1602 _DFE_READ_ODD_SM_REG1	=	0x24a4
                    24A8   1603 _DFE_READ_ODD_SM_REG2	=	0x24a8
                    24AC   1604 _DFE_READ_ODD_SM_REG3	=	0x24ac
                    24B0   1605 _DFE_READ_ODD_SM_REG4	=	0x24b0
                    24B4   1606 _DFE_READ_ODD_SM_REG5	=	0x24b4
                    24B8   1607 _DFE_READ_ODD_SM_REG6	=	0x24b8
                    24BC   1608 _DFE_READ_ODD_SM_REG7	=	0x24bc
                    24C0   1609 _DFE_READ_EVEN_SM_REG8	=	0x24c0
                    24C4   1610 _DFE_READ_ODD_SM_REG8	=	0x24c4
                    24D0   1611 _DFE_READ_EVEN_2C_REG0	=	0x24d0
                    24D4   1612 _DFE_READ_EVEN_2C_REG1	=	0x24d4
                    24D8   1613 _DFE_READ_EVEN_2C_REG2	=	0x24d8
                    24DC   1614 _DFE_READ_EVEN_2C_REG3	=	0x24dc
                    24E0   1615 _DFE_READ_EVEN_2C_REG4	=	0x24e0
                    24E4   1616 _DFE_READ_EVEN_2C_REG5	=	0x24e4
                    24E8   1617 _DFE_READ_EVEN_2C_REG6	=	0x24e8
                    24EC   1618 _DFE_READ_EVEN_2C_REG7	=	0x24ec
                    24F0   1619 _DFE_READ_ODD_2C_REG0	=	0x24f0
                    24F4   1620 _DFE_READ_ODD_2C_REG1	=	0x24f4
                    24F8   1621 _DFE_READ_ODD_2C_REG2	=	0x24f8
                    24FC   1622 _DFE_READ_ODD_2C_REG3	=	0x24fc
                    2500   1623 _DFE_READ_ODD_2C_REG4	=	0x2500
                    2504   1624 _DFE_READ_ODD_2C_REG5	=	0x2504
                    2508   1625 _DFE_READ_ODD_2C_REG6	=	0x2508
                    250C   1626 _DFE_READ_ODD_2C_REG7	=	0x250c
                    2510   1627 _DFE_READ_EVEN_2C_REG8	=	0x2510
                    2514   1628 _DFE_READ_ODD_2C_REG8	=	0x2514
                    2518   1629 _CAL_OFST_REG0	=	0x2518
                    251C   1630 _CAL_OFST_REG1	=	0x251c
                    2520   1631 _CAL_OFST_REG2	=	0x2520
                    2530   1632 _DFE_DCE_REG0	=	0x2530
                    2540   1633 _DFE_STATIC_LANE_REG0	=	0x2540
                    2544   1634 _DFE_STATIC_LANE_REG1	=	0x2544
                    2548   1635 _DFE_STATIC_LANE_REG3	=	0x2548
                    254C   1636 _DFE_STATIC_LANE_REG4	=	0x254c
                    2550   1637 _DFE_STATIC_LANE_REG5	=	0x2550
                    2554   1638 _DFE_STATIC_LANE_REG6	=	0x2554
                    2560   1639 _EOM_VLD_REG0	=	0x2560
                    2564   1640 _EOM_VLD_REG1	=	0x2564
                    2568   1641 _EOM_VLD_REG2	=	0x2568
                    256C   1642 _EOM_VLD_REG3	=	0x256c
                    2570   1643 _EOM_ERR_REG0	=	0x2570
                    2574   1644 _EOM_ERR_REG1	=	0x2574
                    2578   1645 _EOM_ERR_REG2	=	0x2578
                    257C   1646 _EOM_ERR_REG3	=	0x257c
                    2580   1647 _EOM_REG0	=	0x2580
                    25F0   1648 _EOM_VLD_REG4	=	0x25f0
                    25F4   1649 _LANE_MARGIN_REG0	=	0x25f4
                    6000   1650 _CAL_CTRL1_LANE	=	0x6000
                    6004   1651 _CAL_CTRL2_LANE	=	0x6004
                    6008   1652 _CAL_CTRL3_LANE	=	0x6008
                    600C   1653 _CAL_CTRL4_LANE	=	0x600c
                    6010   1654 _CAL_SAVE_DATA1_LANE	=	0x6010
                    6014   1655 _CAL_SAVE_DATA2_LANE	=	0x6014
                    6018   1656 _CAL_SAVE_DATA3_LANE	=	0x6018
                    601C   1657 _PHY_REMOTE_CTRL_COMMAND_LANE	=	0x601c
                    6020   1658 _PHY_REMOTE_CTRL_VALUE_LANE	=	0x6020
                    6024   1659 _PHY_LOCAL_VALUE_LANE	=	0x6024
                    6028   1660 _TRX_TRAIN_IF_TIMERS1_LANE	=	0x6028
                    602C   1661 _TRX_TRAIN_IF_TIMERS2_LANE	=	0x602c
                    6030   1662 _TRX_TRAIN_IF_TIMERS_ENABLE_LANE	=	0x6030
                    6034   1663 _DFE_CONTROL_0	=	0x6034
                    6038   1664 _DFE_CONTROL_1	=	0x6038
                    6040   1665 _DFE_CONTROL_2	=	0x6040
                    6044   1666 _DFE_CONTROL_3	=	0x6044
                    6048   1667 _DFE_CONTROL_4	=	0x6048
                    604C   1668 _DFE_CONTROL_5	=	0x604c
                    6050   1669 _TRAIN_CONTROL_0	=	0x6050
                    6054   1670 _TRAIN_CONTROL_1	=	0x6054
                    6058   1671 _TRAIN_CONTROL_2	=	0x6058
                    605C   1672 _RPTA_CONFIG_0	=	0x605c
                    6060   1673 _RPTA_CONFIG_1	=	0x6060
                    6064   1674 _DLL_CAL	=	0x6064
                    6068   1675 _TRAIN_PARA_0	=	0x6068
                    606C   1676 _TRAIN_PARA_1	=	0x606c
                    6070   1677 _TRAIN_PARA_2	=	0x6070
                    6074   1678 _TRAIN_PARA_3	=	0x6074
                    6078   1679 _DFE_CONTROL_6	=	0x6078
                    607C   1680 _DFE_TEST_0	=	0x607c
                    6080   1681 _DFE_TEST_1	=	0x6080
                    6084   1682 _DFE_TEST_4	=	0x6084
                    6088   1683 _DFE_TEST_5	=	0x6088
                    608C   1684 _DFE_CONTROL_7	=	0x608c
                    6090   1685 _DFE_CONTROL_8	=	0x6090
                    6094   1686 _DFE_CONTROL_9	=	0x6094
                    6098   1687 _DFE_CONTROL_10	=	0x6098
                    609C   1688 _DFE_CONTROL_11	=	0x609c
                    60A0   1689 _CDS_CTRL_REG0	=	0x60a0
                    60A4   1690 _CDS_CTRL_REG1	=	0x60a4
                    60A8   1691 _ESM_POP_P_CNT_LOW_LANE	=	0x60a8
                    60AC   1692 _ESM_ERR_P_CNT_LOW_LANE	=	0x60ac
                    60B0   1693 _ESM_ERR_POP_CNT_HIGH_LANE	=	0x60b0
                    60B4   1694 _TRAIN_CONTROL_3	=	0x60b4
                    60B8   1695 _TRAIN_CONTROL_4	=	0x60b8
                    60BC   1696 _TRAIN_CONTROL_5	=	0x60bc
                    60C0   1697 _TRAIN_CONTROL_6	=	0x60c0
                    60C4   1698 _TRAIN_CONTROL_7	=	0x60c4
                    60C8   1699 _TRAIN_CONTROL_8	=	0x60c8
                    60CC   1700 _TRAIN_CONTROL_9	=	0x60cc
                    60D0   1701 _TRAIN_CONTROL_10	=	0x60d0
                    60D4   1702 _TRAIN_CONTROL_11	=	0x60d4
                    60D8   1703 _TRAIN_CONTROL_12	=	0x60d8
                    60DC   1704 _ESM_POP_N_CNT_LOW_LANE	=	0x60dc
                    60E0   1705 _ESM_ERR_N_CNT_LOW_LANE	=	0x60e0
                    60E4   1706 _TRAIN_CONTROL_13	=	0x60e4
                    60E8   1707 _TRAIN_CONTROL_14	=	0x60e8
                    60EC   1708 _TRAIN_CONTROL_15	=	0x60ec
                    60F0   1709 _TRAIN_CONTROL_16	=	0x60f0
                    60F4   1710 _TRAIN_CONTROL_17	=	0x60f4
                    60F8   1711 _END_XDAT_LANE	=	0x60f8
                    A000   1712 _TX_CMN_REG	=	0xa000
                    A008   1713 _DTX_REG0	=	0xa008
                    A00C   1714 _DTX_REG1	=	0xa00c
                    A010   1715 _DTX_REG2	=	0xa010
                    A014   1716 _DTX_REG3	=	0xa014
                    A018   1717 _DTX_REG4	=	0xa018
                    A01C   1718 _DTX_PHY_ALIGN_REG0	=	0xa01c
                    A024   1719 _DTX_PHY_ALIGN_REG1	=	0xa024
                    A028   1720 _DTX_PHY_ALIGN_REG2	=	0xa028
                    A02C   1721 _SRIS_REG0	=	0xa02c
                    A030   1722 _SRIS_REG1	=	0xa030
                    A100   1723 _RX_CMN_0	=	0xa100
                    A110   1724 _DFE_STATIC_REG0	=	0xa110
                    A114   1725 _DFE_STATIC_REG1	=	0xa114
                    A118   1726 _DFE_STATIC_REG3	=	0xa118
                    A11C   1727 _DFE_STATIC_REG4	=	0xa11c
                    A120   1728 _DFE_STATIC_REG5	=	0xa120
                    A124   1729 _DFE_STATIC_REG6	=	0xa124
                    4200   1730 _GLOB_RST_CLK_CTRL	=	0x4200
                    4204   1731 _GLOB_CLK_SRC_LO	=	0x4204
                    4208   1732 _GLOB_CLK_SRC_HI	=	0x4208
                    420C   1733 _GLOB_MISC_CTRL	=	0x420c
                    4210   1734 _GLOB_DP_SAL_CFG	=	0x4210
                    4214   1735 _GLOB_DP_SAL_CFG1	=	0x4214
                    4218   1736 _GLOB_DP_SAL_CFG3	=	0x4218
                    421C   1737 _GLOB_DP_SAL_CFG5	=	0x421c
                    4220   1738 _GLOB_PM_CFG0	=	0x4220
                    4224   1739 _GLOB_COUNTER_CTRL	=	0x4224
                    4228   1740 _GLOB_COUNTER_HI	=	0x4228
                    422C   1741 _GLOB_PM_DP_CTRL	=	0x422c
                    4230   1742 _GLOB_DP_BAL_CFG0	=	0x4230
                    4234   1743 _GLOB_DP_BAL_CFG2	=	0x4234
                    4238   1744 _GLOB_DP_BAL_CFG4	=	0x4238
                    423C   1745 _GLOB_BIST_CTRL	=	0x423c
                    4240   1746 _GLOB_BIST_LANE_TYPE	=	0x4240
                    4244   1747 _GLOB_BIST_START	=	0x4244
                    4248   1748 _GLOB_BIST_MASK	=	0x4248
                    424C   1749 _GLOB_BIST_RESULT	=	0x424c
                    4250   1750 _GLOB_BIST_SEQR_CFG	=	0x4250
                    4254   1751 _GLOB_BIST_DATA_HI	=	0x4254
                    4258   1752 _GLOB_PIPE_REVISION	=	0x4258
                    425C   1753 _GLOB_L1_SUBSTATES_CFG	=	0x425c
                    A200   1754 _MCU_CONTROL_0	=	0xa200
                    A204   1755 _MCU_CONTROL_1	=	0xa204
                    A208   1756 _MCU_CONTROL_2	=	0xa208
                    A20C   1757 _MCU_CONTROL_3	=	0xa20c
                    A210   1758 _MCU_CONTROL_4	=	0xa210
                    A214   1759 _MCU_DEBUG0	=	0xa214
                    A218   1760 _MCU_DEBUG1	=	0xa218
                    A21C   1761 _MEMORY_CONTROL_0	=	0xa21c
                    A220   1762 _MEMORY_CONTROL_1	=	0xa220
                    A224   1763 _MEMORY_CONTROL_2	=	0xa224
                    A228   1764 _MEMORY_CONTROL_3	=	0xa228
                    A22C   1765 _MEMORY_CONTROL_4	=	0xa22c
                    A234   1766 _MCU_INFO_0	=	0xa234
                    A238   1767 _MCU_INFO_1	=	0xa238
                    A23C   1768 _MCU_INFO_2	=	0xa23c
                    A240   1769 _MCU_INFO_3	=	0xa240
                    A244   1770 _MEM_CMN_ECC_ERR_ADDRESS0	=	0xa244
                    A2E0   1771 _ANA_IF_CMN_REG1	=	0xa2e0
                    A2E4   1772 _MEM_IRQ	=	0xa2e4
                    A2E8   1773 _MEM_IRQ_MASK	=	0xa2e8
                    A2EC   1774 _ANA_IF_CMN_REG0	=	0xa2ec
                    A2F0   1775 _APB_CONTROL_REG	=	0xa2f0
                    A2F4   1776 _MEM_IRQ_CLEAR	=	0xa2f4
                    A2F8   1777 _MCU_SYNC1	=	0xa2f8
                    A2FC   1778 _MCU_SYNC2	=	0xa2fc
                    A300   1779 _TEST0	=	0xa300
                    A304   1780 _TEST1	=	0xa304
                    A308   1781 _TEST2	=	0xa308
                    A30C   1782 _TEST3	=	0xa30c
                    A310   1783 _TEST4	=	0xa310
                    A314   1784 _SYSTEM	=	0xa314
                    A318   1785 _PM_CMN_REG1	=	0xa318
                    A31C   1786 _INPUT_CMN_PIN_REG0	=	0xa31c
                    A320   1787 _INPUT_CMN_PIN_REG1	=	0xa320
                    A324   1788 _INPUT_CMN_PIN_REG2	=	0xa324
                    A328   1789 _ANA_TSEN_CONTROL	=	0xa328
                    A32C   1790 _PLLCAL_REG0	=	0xa32c
                    A330   1791 _PLLCAL_REG1	=	0xa330
                    A334   1792 _CLKGEN_CMN_REG1	=	0xa334
                    A338   1793 _SPD_CMN_REG1	=	0xa338
                    A33C   1794 _OUTPUT_CMN_PIN_REG0	=	0xa33c
                    A340   1795 _CMN_CALIBRATION	=	0xa340
                    A344   1796 __FIELDNAME_	=	0xa344
                    A348   1797 _INPUT_CMN_PIN_REG3	=	0xa348
                    A34C   1798 _PM_CMN_REG2	=	0xa34c
                    A354   1799 _TEST5	=	0xa354
                    A358   1800 _XDATA_MEM_CHECKSUM_CMN_0	=	0xa358
                    A35C   1801 _XDATA_MEM_CHECKSUM_CMN_1	=	0xa35c
                    A360   1802 _XDATA_MEM_CHECKSUM_CMN_2	=	0xa360
                    A364   1803 _MCU_SDT_CMN	=	0xa364
                    A368   1804 _CMN_CACHE_DEBUG0	=	0xa368
                    A36C   1805 _MCU_INT_ADDR	=	0xa36c
                    A370   1806 _CMN_ISR_2	=	0xa370
                    A374   1807 _CMN_ISR_MASK_2	=	0xa374
                    A378   1808 _CMN_ISR_CLEAR_2	=	0xa378
                    A37C   1809 _CMN_MCU_GPIO	=	0xa37c
                    A380   1810 _CMN_CACHE_DEBUG1	=	0xa380
                    A384   1811 _CMN_MCU_TIMER_CONTROL	=	0xa384
                    A388   1812 _CMN_MCU_TIMER_CTRL_2_LANE	=	0xa388
                    A38C   1813 _CMN_MCU_TIMER_CTRL_3_LANE	=	0xa38c
                    A390   1814 _CMN_MCU_TIMER_CTRL_4_LANE	=	0xa390
                    A394   1815 _CMN_MCU_TIMER_CTRL_5_LANE	=	0xa394
                    A398   1816 _CMN_MCU_TIMER0_CONTROL	=	0xa398
                    A39C   1817 _CMN_MCU_TIMER1_CONTROL	=	0xa39c
                    A3A0   1818 _CMN_MCU_TIMER2_CONTROL	=	0xa3a0
                    A3A4   1819 _CMN_MCU_TIMER3_CONTROL	=	0xa3a4
                    A3A8   1820 _CMN_ISR_1	=	0xa3a8
                    A3AC   1821 _CMN_ISR_MASK_1	=	0xa3ac
                    A3B0   1822 _SET_LANE_ISR	=	0xa3b0
                    A3F4   1823 _CMN_MCU_REG	=	0xa3f4
                    A3F8   1824 _CID_REG0	=	0xa3f8
                    A3FC   1825 _CID_REG1	=	0xa3fc
                    E600   1826 _FW_REV	=	0xe600
                    E604   1827 _CONTROL_CONFIG0	=	0xe604
                    E608   1828 _CONTROL_CONFIG1	=	0xe608
                    E60C   1829 _CONTROL_CONFIG2	=	0xe60c
                    E610   1830 _CONTROL_CONFIG3	=	0xe610
                    E614   1831 _CONTROL_CONFIG4	=	0xe614
                    E618   1832 _CONTROL_CONFIG5	=	0xe618
                    E61C   1833 _CONTROL_CONFIG6	=	0xe61c
                    E620   1834 _CONTROL_CONFIG7	=	0xe620
                    E624   1835 _CAL_DATA0	=	0xe624
                    E628   1836 _TRAIN_IF_CONFIG	=	0xe628
                    E62C   1837 _CONTROL_CONFIG8	=	0xe62c
                    E630   1838 _CONTROL_CONFIG9	=	0xe630
                    E634   1839 _CON_CAL_STEP_SIZE1	=	0xe634
                    E638   1840 _CON_CAL_STEP_SIZE2	=	0xe638
                    E63C   1841 _CON_CAL_STEP_SIZE3	=	0xe63c
                    E640   1842 _CON_CAL_STEP_SIZE4	=	0xe640
                    E644   1843 _CON_CAL_STEP_SIZE5	=	0xe644
                    E648   1844 _CAL_TIME_OUT_AND_DIS	=	0xe648
                    E64C   1845 _CAL_STATUS_READ	=	0xe64c
                    E650   1846 _MCU_CONFIG	=	0xe650
                    E654   1847 _CAL_DATA1	=	0xe654
                    E658   1848 _LOOP_CNTS	=	0xe658
                    E65C   1849 _MCU_CONFIG1	=	0xe65c
                    E660   1850 _TIMER_SEL1	=	0xe660
                    E664   1851 _TIMER_SEL2	=	0xe664
                    E668   1852 _TIMER_SEL3	=	0xe668
                    E66C   1853 _G_SELLV_TXCLK	=	0xe66c
                    E670   1854 _G_SELLV_TXDATA	=	0xe670
                    E674   1855 _G_SELLV_TXPRE	=	0xe674
                    E678   1856 _G_SELLV_RXEOMCLK	=	0xe678
                    E67C   1857 _G_SELLV_RXDATACLK	=	0xe67c
                    E680   1858 _G_SELLV_RXSAMPLER	=	0xe680
                    E684   1859 _SAS_PRESET0_TB	=	0xe684
                    E688   1860 _SAS_PRESET1_TB	=	0xe688
                    E68C   1861 _SAS_PRESET2_TB	=	0xe68c
                    E690   1862 _ETH_PRESET0_TB	=	0xe690
                    E694   1863 _ETH_PRESET1_TB	=	0xe694
                    E698   1864 _TX_SAVE_0	=	0xe698
                    E69C   1865 _TX_SAVE_1	=	0xe69c
                    E6A0   1866 _TX_SAVE_2	=	0xe6a0
                    E6A4   1867 _TX_SAVE_3	=	0xe6a4
                    E6A8   1868 _TX_SAVE_4	=	0xe6a8
                    E6AC   1869 _CDS_EYE_CLK_THR	=	0xe6ac
                    E6B0   1870 _SYNC_INFO	=	0xe6b0
                    E6B4   1871 _MCU_INFO_4	=	0xe6b4
                    E6B8   1872 _MCU_INFO_5	=	0xe6b8
                    E6BC   1873 _MCU_INFO_12	=	0xe6bc
                    E6C0   1874 _MCU_INFO_13	=	0xe6c0
                    E6C4   1875 _END_XDAT_CMN	=	0xe6c4
                    2600   1876 _DME_ENC_REG0	=	0x2600
                    2604   1877 _DME_ENC_REG1	=	0x2604
                    2608   1878 _DME_ENC_REG2	=	0x2608
                    260C   1879 _DME_DEC_REG0	=	0x260c
                    2610   1880 _DME_DEC_REG1	=	0x2610
                    2614   1881 _TX_TRAIN_IF_REG0	=	0x2614
                    2618   1882 _TX_TRAIN_IF_REG1	=	0x2618
                    261C   1883 _TX_TRAIN_IF_REG2	=	0x261c
                    2620   1884 _TX_TRAIN_IF_REG3	=	0x2620
                    2624   1885 _TX_TRAIN_PATTTERN_REG0	=	0x2624
                    2628   1886 _TX_TRAIN_DRIVER_REG0	=	0x2628
                    262C   1887 _TX_TRAIN_DRIVER_REG1	=	0x262c
                    2630   1888 _TX_TRAIN_DRIVER_REG2	=	0x2630
                    2634   1889 _TX_TRAIN_DEFAULT_REG0	=	0x2634
                    2638   1890 _TX_TRAIN_DEFAULT_REG1	=	0x2638
                    263C   1891 _TX_TRAIN_DEFAULT_REG2	=	0x263c
                    2640   1892 _TX_TRAIN_DEFAULT_REG3	=	0x2640
                    2644   1893 _TX_TRAIN_DEFAULT_REG4	=	0x2644
                    2648   1894 _TX_TRAIN_DEFAULT_REG5	=	0x2648
                    264C   1895 _TX_EMPH_CTRL_REG0	=	0x264c
                    2650   1896 _LINK_TRAIN_MODE0	=	0x2650
                    2654   1897 _TX_DRV_RD_OUT_REG0	=	0x2654
                    2658   1898 _TX_AMP_CTRL_REG0	=	0x2658
                    265C   1899 _TRX_TRAIN_IF_INTERRUPT_LANE	=	0x265c
                    2660   1900 _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE	=	0x2660
                    2664   1901 _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE	=	0x2664
                    2668   1902 _TX_TRAIN_IF_REG4	=	0x2668
                    266C   1903 _TX_TRAIN_IF_REG5	=	0x266c
                    2670   1904 _TX_TRAIN_IF_REG6	=	0x2670
                    2674   1905 _TX_TRAIN_IF_REG7	=	0x2674
                    2678   1906 _TX_TRAIN_CTRL_LANE	=	0x2678
                    267C   1907 _TX_TRAIN_IF_REG8	=	0x267c
                    6100   1908 _DFE_READ_EVEN_REG0	=	0x6100
                    6104   1909 _DFE_READ_EVEN_REG1	=	0x6104
                    6108   1910 _DFE_READ_EVEN_REG2	=	0x6108
                    610C   1911 _DFE_READ_EVEN_REG3	=	0x610c
                    6110   1912 _DFE_READ_EVEN_REG4	=	0x6110
                    6114   1913 _DFE_READ_EVEN_REG5	=	0x6114
                    6118   1914 _DFE_READ_EVEN_REG6	=	0x6118
                    611C   1915 _DFE_READ_EVEN_REG7	=	0x611c
                    6120   1916 _DFE_READ_ODD_REG0	=	0x6120
                    6124   1917 _DFE_READ_ODD_REG1	=	0x6124
                    6128   1918 _DFE_READ_ODD_REG2	=	0x6128
                    612C   1919 _DFE_READ_ODD_REG3	=	0x612c
                    6130   1920 _DFE_READ_ODD_REG4	=	0x6130
                    6134   1921 _DFE_READ_ODD_REG5	=	0x6134
                    6138   1922 _DFE_READ_ODD_REG6	=	0x6138
                    613C   1923 _DFE_READ_ODD_REG7	=	0x613c
                    6140   1924 _DFE_READ_EVEN_REG8	=	0x6140
                    6144   1925 _DFE_READ_ODD_REG8	=	0x6144
                    6148   1926 _DFE_READ_F0A_EVEN	=	0x6148
                    614C   1927 _DFE_READ_F0A_ODD	=	0x614c
                    6150   1928 _DFE_READ_F0B_EVEN	=	0x6150
                    6154   1929 _DFE_READ_F0B_ODD	=	0x6154
                    6158   1930 _DFE_READ_F0D_EVEN	=	0x6158
                    615C   1931 _DFE_READ_F0D_ODD	=	0x615c
                    6160   1932 _DFE_READ_F0D_LEFT_EVEN	=	0x6160
                    6164   1933 _DFE_READ_F0D_LEFT_ODD	=	0x6164
                    6168   1934 _DFE_READ_F0D_RIGHT_EVEN	=	0x6168
                    616C   1935 _DFE_READ_F0D_RIGHT_ODD	=	0x616c
                    6170   1936 _CDS_READ_MISC0	=	0x6170
                    6174   1937 _CDS_READ_MISC1	=	0x6174
                    6214   1938 _TXTRAIN_IF_REG0	=	0x6214
                    E000   1939 _lc_speedtable	=	0xe000
                    E1C0   1940 _ring_speedtable	=	0xe1c0
                    E5C0   1941 _phy_mode_cmn_table	=	0xe5c0
                    6300   1942 _max_gen	=	0x6300
                    6301   1943 _min_gen	=	0x6301
                    6304   1944 _speedtable	=	0x6304
                    65D4   1945 _phy_mode_lane_table	=	0x65d4
                    60B4   1946 _rc_save	=	0x60b4
                    60D0   1947 _txffe_save	=	0x60d0
                    60E4   1948 _phase_save	=	0x60e4
                    6030   1949 _train_gn1_index	=	0x6030
                    6031   1950 _train_g1_index	=	0x6031
                    6032   1951 _train_g0_index	=	0x6032
                    E6B0   1952 _local_tx_preset_tb	=	0xe6b0
                    E5C1   1953 _cmx_cal_lcvco_dac	=	0xe5c1
                    E5C1   1954 _cmx_cal_lcvco_dac_lsb	=	0xe5c1
                    E5C4   1955 _cmx_cal_lcvco_dac_msb	=	0xe5c4
                    E5CA   1956 _cmx_cal_lccap_msb	=	0xe5ca
                    E5C8   1957 _cmx_cal_lccap_lsb	=	0xe5c8
                    E5CC   1958 _cmx_cal_plldcc	=	0xe5cc
                    E5D0   1959 _cmx_cal_pll_speed_ring	=	0xe5d0
                    E5D4   1960 _cmx_cal_pll_sllp_dac_coarse_ring	=	0xe5d4
                    E5D8   1961 _cmx_cal_sllp_dac_fine_ring	=	0xe5d8
                    65D4   1962 _lnx_cal_txdcc_pdiv	=	0x65d4
                    65D8   1963 _lnx_cal_txdcc_pdiv_hg	=	0x65d8
                    65DA   1964 _lnx_cal_txdcc	=	0x65da
                    65DE   1965 _lnx_cal_txdcc_hg	=	0x65de
                    65E0   1966 _lnx_cal_rxdcc_dll	=	0x65e0
                    65E4   1967 _lnx_cal_rxdcc_dll_hg	=	0x65e4
                    65E6   1968 _lnx_cal_rxdcc_data	=	0x65e6
                    65F0   1969 _lnx_cal_rxdcc_data_hg	=	0x65f0
                    65F5   1970 _lnx_cal_rxdcc_eom	=	0x65f5
                    65FF   1971 _lnx_cal_rxdcc_eom_hg	=	0x65ff
                    6604   1972 _lnx_cal_dll_gmsel	=	0x6604
                    6606   1973 _lnx_cal_vdda_dll_sel	=	0x6606
                    660A   1974 _lnx_cal_dll_eom_gmsel	=	0x660a
                    660C   1975 _lnx_cal_vdda_dll_eom_sel	=	0x660c
                    6610   1976 _lnx_cal_eom_dpher	=	0x6610
                    6612   1977 _lnx_cal_align90_dummy_clk	=	0x6612
                    661A   1978 _lnx_cal_align90_dac	=	0x661a
                    6622   1979 _lnx_cal_align90_gm	=	0x6622
                    662A   1980 _lnx_cal_sellv_txdata	=	0x662a
                    6634   1981 _lnx_cal_sellv_txclk	=	0x6634
                    663E   1982 _lnx_cal_sellv_rxdataclk	=	0x663e
                    6648   1983 _lnx_cal_sellv_txpre	=	0x6648
                    6652   1984 _lnx_cal_sellv_rxsampler	=	0x6652
                    665C   1985 _lnx_cal_sellv_rxeomclk	=	0x665c
                    6666   1986 _lnx_spdoft_tx_preset_index_lane	=	0x6666
                    6490   1987 _lnx_calx_txdcc_pdiv	=	0x6490
                    6496   1988 _lnx_calx_txdcc_pdiv_hg	=	0x6496
                    6499   1989 _lnx_calx_txdcc	=	0x6499
                    649F   1990 _lnx_calx_txdcc_hg	=	0x649f
                    64A2   1991 _lnx_calx_rxdcc_dll	=	0x64a2
                    64A8   1992 _lnx_calx_rxdcc_dll_hg	=	0x64a8
                    64AB   1993 _lnx_calx_dll_gmsel	=	0x64ab
                    64AE   1994 _lnx_calx_vdda_dll_sel	=	0x64ae
                    64B4   1995 _lnx_calx_dll_eom_gmsel	=	0x64b4
                    64B7   1996 _lnx_calx_vdda_dll_eom_sel	=	0x64b7
                    64BD   1997 _lnx_calx_eom_dpher	=	0x64bd
                    64C0   1998 _lnx_calx_align90_dummy_clk	=	0x64c0
                    64CC   1999 _lnx_calx_align90_dac	=	0x64cc
                    64D8   2000 _lnx_calx_align90_gm	=	0x64d8
                    6100   2001 _cds28	=	0x6100
                    6178   2002 _dfe_sm	=	0x6178
                    61B8   2003 _dfe_sm_dc	=	0x61b8
                    61C0   2004 _dfe_sm_save	=	0x61c0
                    03FC   2005 _UPHY_ANAREG_REV_0	=	0x03fc
                    E684   2006 _tx_tb	=	0xe684
                    E698   2007 _train_save_tb	=	0xe698
                    607C   2008 _sq_thrs_ratio_tb	=	0x607c
                           2009 ;--------------------------------------------------------
                           2010 ; absolute external ram data
                           2011 ;--------------------------------------------------------
                           2012 	.area XABS    (ABS,XDATA)
                           2013 ;--------------------------------------------------------
                           2014 ; external initialized ram data
                           2015 ;--------------------------------------------------------
                           2016 	.area HOME    (CODE)
                           2017 	.area GSINIT0 (CODE)
                           2018 	.area GSINIT1 (CODE)
                           2019 	.area GSINIT2 (CODE)
                           2020 	.area GSINIT3 (CODE)
                           2021 	.area GSINIT4 (CODE)
                           2022 	.area GSINIT5 (CODE)
                           2023 	.area GSINIT  (CODE)
                           2024 	.area GSFINAL (CODE)
                           2025 	.area CSEG    (CODE)
                           2026 ;--------------------------------------------------------
                           2027 ; global & static initialisations
                           2028 ;--------------------------------------------------------
                           2029 	.area HOME    (CODE)
                           2030 	.area GSINIT  (CODE)
                           2031 	.area GSFINAL (CODE)
                           2032 	.area GSINIT  (CODE)
                           2033 ;--------------------------------------------------------
                           2034 ; Home
                           2035 ;--------------------------------------------------------
                           2036 	.area HOME    (CODE)
                           2037 	.area HOME    (CODE)
                           2038 ;--------------------------------------------------------
                           2039 ; code
                           2040 ;--------------------------------------------------------
                           2041 	.area BANK2   (CODE)
                           2042 ;------------------------------------------------------------
                           2043 ;Allocation info for local variables in function 'align90_comp_cal'
                           2044 ;------------------------------------------------------------
                           2045 ;dir                       Allocated to registers r2 
                           2046 ;loop_cnt                  Allocated to registers r4 
                           2047 ;pd                        Allocated to registers r5 
                           2048 ;output_cnt                Allocated to registers r3 
                           2049 ;------------------------------------------------------------
                           2050 ;	../../shared/src/align90_cal_rom.c:36: void align90_comp_cal(void) BANKING_CTRL {
                           2051 ;	-----------------------------------------
                           2052 ;	 function align90_comp_cal
                           2053 ;	-----------------------------------------
   8000                    2054 _align90_comp_cal:
                    0002   2055 	ar2 = 0x02
                    0003   2056 	ar3 = 0x03
                    0004   2057 	ar4 = 0x04
                    0005   2058 	ar5 = 0x05
                    0006   2059 	ar6 = 0x06
                    0007   2060 	ar7 = 0x07
                    0000   2061 	ar0 = 0x00
                    0001   2062 	ar1 = 0x01
                           2063 ;	../../shared/src/align90_cal_rom.c:39: reg_PU_ALIGN90_LANE = 1;	
   8000 90 02 18           2064 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_134
   8003 E0                 2065 	movx	a,@dptr
   8004 44 02              2066 	orl	a,#0x02
   8006 F0                 2067 	movx	@dptr,a
                           2068 ;	../../shared/src/align90_cal_rom.c:41: if( cmx_RXALIGN90_CAL_EXT_EN ) {
   8007 90 E6 0A           2069 	mov	dptr,#(_CONTROL_CONFIG1 + 0x0002)
   800A E0                 2070 	movx	a,@dptr
   800B 30 E2 16           2071 	jnb	acc.2,00102$
                           2072 ;	../../shared/src/align90_cal_rom.c:42: ALIGN90_CMP_OFFSET = lnx_CAL_ALIGN90_CMP_OFFSET_LANE_7_0;
   800E 90 60 14           2073 	mov	dptr,#_CAL_SAVE_DATA2_LANE
   8011 E0                 2074 	movx	a,@dptr
   8012 FA                 2075 	mov	r2,a
   8013 90 00 30           2076 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_12
   8016 C4                 2077 	swap	a
   8017 54 F0              2078 	anl	a,#(0xf0&0xf0)
   8019 F5 F0              2079 	mov	b,a
   801B E0                 2080 	movx	a,@dptr
   801C 54 0F              2081 	anl	a,#0x0f
   801E 45 F0              2082 	orl	a,b
   8020 F0                 2083 	movx	@dptr,a
                           2084 ;	../../shared/src/align90_cal_rom.c:43: return; 
   8021 02 81 32           2085 	ljmp	00116$
   8024                    2086 00102$:
                           2087 ;	../../shared/src/align90_cal_rom.c:46: PHY_STATUS = ST_RXALIGN90CMP_CAL;
   8024 90 22 30           2088 	mov	dptr,#_MCU_STATUS0_LANE
   8027 74 10              2089 	mov	a,#0x10
   8029 F0                 2090 	movx	@dptr,a
                           2091 ;	../../shared/src/align90_cal_rom.c:48: lnx_ALIGN90_COMP_PASS_LANE = 0;
   802A 90 60 06           2092 	mov	dptr,#(_CAL_CTRL2_LANE + 0x0002)
   802D E0                 2093 	movx	a,@dptr
   802E 54 FB              2094 	anl	a,#0xfb
   8030 F0                 2095 	movx	@dptr,a
                           2096 ;	../../shared/src/align90_cal_rom.c:49: lnx_ALIGN90_COMP_CAL_DONE_LANE = 0;
   8031 90 60 02           2097 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0002)
   8034 E0                 2098 	movx	a,@dptr
   8035 54 F7              2099 	anl	a,#0xf7
   8037 F0                 2100 	movx	@dptr,a
                           2101 ;	../../shared/src/align90_cal_rom.c:50: dir = 0;
   8038 7A 00              2102 	mov	r2,#0x00
                           2103 ;	../../shared/src/align90_cal_rom.c:51: reg_ALIGN90_CMP_CAL_EN_LANE = 1;
   803A 90 00 2C           2104 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_11
   803D E0                 2105 	movx	a,@dptr
   803E 44 01              2106 	orl	a,#0x01
   8040 F0                 2107 	movx	@dptr,a
                           2108 ;	../../shared/src/align90_cal_rom.c:52: ALIGN90_CMP_OFFSET = 0x08;
   8041 90 00 30           2109 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_12
   8044 E0                 2110 	movx	a,@dptr
   8045 54 0F              2111 	anl	a,#0x0f
   8047 44 80              2112 	orl	a,#0x80
   8049 F0                 2113 	movx	@dptr,a
                           2114 ;	../../shared/src/align90_cal_rom.c:53: delay01(10);		
   804A 90 00 0A           2115 	mov	dptr,#0x000A
   804D C0 02              2116 	push	ar2
   804F 78 16              2117 	mov	r0,#_delay01
   8051 79 BC              2118 	mov	r1,#(_delay01 >> 8)
   8053 7A 02              2119 	mov	r2,#(_delay01 >> 16)
   8055 12 00 B3           2120 	lcall	__sdcc_banked_call
   8058 D0 02              2121 	pop	ar2
                           2122 ;	../../shared/src/align90_cal_rom.c:58: do {
   805A 7B 00              2123 	mov	r3,#0x00
   805C 7C 30              2124 	mov	r4,#0x30
   805E                    2125 00113$:
                           2126 ;	../../shared/src/align90_cal_rom.c:60: pd = align90_read_pd();
   805E C0 02              2127 	push	ar2
   8060 C0 03              2128 	push	ar3
   8062 C0 04              2129 	push	ar4
   8064 78 35              2130 	mov	r0,#_align90_read_pd
   8066 79 81              2131 	mov	r1,#(_align90_read_pd >> 8)
   8068 7A 02              2132 	mov	r2,#(_align90_read_pd >> 16)
   806A 12 00 B3           2133 	lcall	__sdcc_banked_call
   806D AD 82              2134 	mov	r5,dpl
   806F D0 04              2135 	pop	ar4
   8071 D0 03              2136 	pop	ar3
   8073 D0 02              2137 	pop	ar2
                           2138 ;	../../shared/src/align90_cal_rom.c:61: if(pd == 1) {
   8075 BD 01 1A           2139 	cjne	r5,#0x01,00104$
                           2140 ;	../../shared/src/align90_cal_rom.c:62: ALIGN90_CMP_OFFSET++;
   8078 90 00 30           2141 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_12
   807B E0                 2142 	movx	a,@dptr
   807C C4                 2143 	swap	a
   807D 54 0F              2144 	anl	a,#0x0f
   807F FE                 2145 	mov	r6,a
   8080 0E                 2146 	inc	r6
   8081 90 00 30           2147 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_12
   8084 EE                 2148 	mov	a,r6
   8085 C4                 2149 	swap	a
   8086 54 F0              2150 	anl	a,#(0xf0&0xf0)
   8088 F5 F0              2151 	mov	b,a
   808A E0                 2152 	movx	a,@dptr
   808B 54 0F              2153 	anl	a,#0x0f
   808D 45 F0              2154 	orl	a,b
   808F F0                 2155 	movx	@dptr,a
   8090 80 18              2156 	sjmp	00105$
   8092                    2157 00104$:
                           2158 ;	../../shared/src/align90_cal_rom.c:65: ALIGN90_CMP_OFFSET--;
   8092 90 00 30           2159 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_12
   8095 E0                 2160 	movx	a,@dptr
   8096 C4                 2161 	swap	a
   8097 54 0F              2162 	anl	a,#0x0f
   8099 FE                 2163 	mov	r6,a
   809A 1E                 2164 	dec	r6
   809B 90 00 30           2165 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_12
   809E EE                 2166 	mov	a,r6
   809F C4                 2167 	swap	a
   80A0 54 F0              2168 	anl	a,#(0xf0&0xf0)
   80A2 F5 F0              2169 	mov	b,a
   80A4 E0                 2170 	movx	a,@dptr
   80A5 54 0F              2171 	anl	a,#0x0f
   80A7 45 F0              2172 	orl	a,b
   80A9 F0                 2173 	movx	@dptr,a
   80AA                    2174 00105$:
                           2175 ;	../../shared/src/align90_cal_rom.c:67: delay01(10);		
   80AA 90 00 0A           2176 	mov	dptr,#0x000A
   80AD C0 02              2177 	push	ar2
   80AF C0 03              2178 	push	ar3
   80B1 C0 04              2179 	push	ar4
   80B3 C0 05              2180 	push	ar5
   80B5 78 16              2181 	mov	r0,#_delay01
   80B7 79 BC              2182 	mov	r1,#(_delay01 >> 8)
   80B9 7A 02              2183 	mov	r2,#(_delay01 >> 16)
   80BB 12 00 B3           2184 	lcall	__sdcc_banked_call
   80BE D0 05              2185 	pop	ar5
   80C0 D0 04              2186 	pop	ar4
   80C2 D0 03              2187 	pop	ar3
   80C4 D0 02              2188 	pop	ar2
                           2189 ;	../../shared/src/align90_cal_rom.c:69: dir<<=1;
   80C6 EA                 2190 	mov	a,r2
   80C7 2A                 2191 	add	a,r2
   80C8 FA                 2192 	mov	r2,a
                           2193 ;	../../shared/src/align90_cal_rom.c:70: dir |= pd;
   80C9 ED                 2194 	mov	a,r5
   80CA 42 02              2195 	orl	ar2,a
                           2196 ;	../../shared/src/align90_cal_rom.c:71: ++output_cnt;
   80CC 0B                 2197 	inc	r3
                           2198 ;	../../shared/src/align90_cal_rom.c:73: if (is_toggle_pat(dir, output_cnt )) {
   80CD C0 02              2199 	push	ar2
   80CF C0 03              2200 	push	ar3
   80D1 C0 04              2201 	push	ar4
   80D3 C0 03              2202 	push	ar3
   80D5 8A 82              2203 	mov	dpl,r2
   80D7 78 CD              2204 	mov	r0,#_is_toggle_pat
   80D9 79 BD              2205 	mov	r1,#(_is_toggle_pat >> 8)
   80DB 7A 02              2206 	mov	r2,#(_is_toggle_pat >> 16)
   80DD 12 00 B3           2207 	lcall	__sdcc_banked_call
   80E0 15 81              2208 	dec	sp
   80E2 D0 04              2209 	pop	ar4
   80E4 D0 03              2210 	pop	ar3
   80E6 D0 02              2211 	pop	ar2
   80E8 92 28              2212 	mov	b0,c
   80EA 50 09              2213 	jnc	00107$
                           2214 ;	../../shared/src/align90_cal_rom.c:74: lnx_ALIGN90_COMP_PASS_LANE = 1;
   80EC 90 60 06           2215 	mov	dptr,#(_CAL_CTRL2_LANE + 0x0002)
   80EF E0                 2216 	movx	a,@dptr
   80F0 44 04              2217 	orl	a,#0x04
   80F2 F0                 2218 	movx	@dptr,a
                           2219 ;	../../shared/src/align90_cal_rom.c:75: break;
   80F3 80 23              2220 	sjmp	00115$
   80F5                    2221 00107$:
                           2222 ;	../../shared/src/align90_cal_rom.c:78: if(	ALIGN90_CMP_OFFSET==0xf || ALIGN90_CMP_OFFSET==0 ) {
   80F5 90 00 30           2223 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_12
   80F8 E0                 2224 	movx	a,@dptr
   80F9 C4                 2225 	swap	a
   80FA 54 0F              2226 	anl	a,#0x0f
   80FC FD                 2227 	mov	r5,a
   80FD BD 0F 02           2228 	cjne	r5,#0x0F,00129$
   8100 80 16              2229 	sjmp	00115$
   8102                    2230 00129$:
   8102 90 00 30           2231 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_12
   8105 E0                 2232 	movx	a,@dptr
   8106 54 F0              2233 	anl	a,#0xf0
   8108 60 0E              2234 	jz	00115$
                           2235 ;	../../shared/src/align90_cal_rom.c:83: if(cmx_ALIGN90_CAL_TIMEOUT_DIS == 0)	//for test bench
   810A 90 E6 49           2236 	mov	dptr,#(_CAL_TIME_OUT_AND_DIS + 0x0001)
   810D E0                 2237 	movx	a,@dptr
   810E 20 E0 01           2238 	jb	acc.0,00114$
                           2239 ;	../../shared/src/align90_cal_rom.c:84: loop_cnt--;
   8111 1C                 2240 	dec	r4
   8112                    2241 00114$:
                           2242 ;	../../shared/src/align90_cal_rom.c:85: } while(loop_cnt>0);
   8112 EC                 2243 	mov	a,r4
   8113 60 03              2244 	jz	00132$
   8115 02 80 5E           2245 	ljmp	00113$
   8118                    2246 00132$:
   8118                    2247 00115$:
                           2248 ;	../../shared/src/align90_cal_rom.c:87: reg_ALIGN90_CMP_CAL_EN_LANE = 0;
   8118 90 00 2C           2249 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_11
   811B E0                 2250 	movx	a,@dptr
   811C 54 FE              2251 	anl	a,#0xfe
   811E F0                 2252 	movx	@dptr,a
                           2253 ;	../../shared/src/align90_cal_rom.c:88: lnx_CAL_ALIGN90_CMP_OFFSET_LANE_7_0 = ALIGN90_CMP_OFFSET;
   811F 90 00 30           2254 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_12
   8122 E0                 2255 	movx	a,@dptr
   8123 C4                 2256 	swap	a
   8124 54 0F              2257 	anl	a,#0x0f
   8126 FA                 2258 	mov	r2,a
   8127 90 60 14           2259 	mov	dptr,#_CAL_SAVE_DATA2_LANE
   812A F0                 2260 	movx	@dptr,a
                           2261 ;	../../shared/src/align90_cal_rom.c:89: lnx_ALIGN90_COMP_CAL_DONE_LANE = 1;
   812B 90 60 02           2262 	mov	dptr,#(_CAL_CTRL1_LANE + 0x0002)
   812E E0                 2263 	movx	a,@dptr
   812F 44 08              2264 	orl	a,#0x08
   8131 F0                 2265 	movx	@dptr,a
   8132                    2266 00116$:
   8132 02 00 C5           2267 	ljmp	__sdcc_banked_ret
                           2268 ;------------------------------------------------------------
                           2269 ;Allocation info for local variables in function 'align90_read_pd'
                           2270 ;------------------------------------------------------------
                           2271 ;------------------------------------------------------------
                           2272 ;	../../shared/src/align90_cal_rom.c:93: uint8_t align90_read_pd(void) BANKING_CTRL
                           2273 ;	-----------------------------------------
                           2274 ;	 function align90_read_pd
                           2275 ;	-----------------------------------------
   8135                    2276 _align90_read_pd:
                           2277 ;	../../shared/src/align90_cal_rom.c:95: reg_RX_ALIGN90_PD_OUT_RD_REQ_LANE = 0;
                           2278 ;	../../shared/src/align90_cal_rom.c:96: reg_RX_ALIGN90_PD_OUT_RD_REQ_LANE = 1; 
                           2279 ;	../../shared/src/align90_cal_rom.c:97: reg_RX_ALIGN90_PD_OUT_RD_REQ_LANE = 0;
   8135 90 21 52           2280 	mov	dptr,#(_RX_CALIBRATION_REG + 0x0002)
   8138 E0                 2281 	movx	a,@dptr
   8139 54 FE              2282 	anl	a,#0xfe
   813B F0                 2283 	movx	@dptr,a
   813C E0                 2284 	movx	a,@dptr
   813D 44 01              2285 	orl	a,#0x01
   813F F0                 2286 	movx	@dptr,a
   8140 E0                 2287 	movx	a,@dptr
   8141 54 FE              2288 	anl	a,#0xfe
   8143 F0                 2289 	movx	@dptr,a
                           2290 ;	../../shared/src/align90_cal_rom.c:99: return reg_ANA_RX_ALIGN90_PD_OUT_RD_LANE;
   8144 90 21 50           2291 	mov	dptr,#_RX_CALIBRATION_REG
   8147 E0                 2292 	movx	a,@dptr
   8148 54 01              2293 	anl	a,#0x01
   814A FA                 2294 	mov	r2,a
   814B F5 82              2295 	mov	dpl,a
   814D 02 00 C5           2296 	ljmp	__sdcc_banked_ret
                           2297 ;------------------------------------------------------------
                           2298 ;Allocation info for local variables in function 'align90_cal_update'
                           2299 ;------------------------------------------------------------
                           2300 ;------------------------------------------------------------
                           2301 ;	../../shared/src/align90_cal_rom.c:102: void align90_cal_update(void) BANKING_CTRL
                           2302 ;	-----------------------------------------
                           2303 ;	 function align90_cal_update
                           2304 ;	-----------------------------------------
   8150                    2305 _align90_cal_update:
                           2306 ;	../../shared/src/align90_cal_rom.c:104: reg_ALIGN90_DAC_LANE_5_0 = dac;
   8150 90 66 1E           2307 	mov	dptr,#_dac
   8153 E0                 2308 	movx	a,@dptr
   8154 90 00 34           2309 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_13
   8157 25 E0              2310 	add	a,acc
   8159 25 E0              2311 	add	a,acc
   815B 54 FC              2312 	anl	a,#0xfc
   815D F5 F0              2313 	mov	b,a
   815F E0                 2314 	movx	a,@dptr
   8160 54 03              2315 	anl	a,#0x03
   8162 45 F0              2316 	orl	a,b
   8164 F0                 2317 	movx	@dptr,a
                           2318 ;	../../shared/src/align90_cal_rom.c:105: reg_ALIGN90_DUMMY_CLK_LANE = dm;
   8165 90 66 1F           2319 	mov	dptr,#_dm
   8168 E0                 2320 	movx	a,@dptr
   8169 90 00 34           2321 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_13
   816C 13                 2322 	rrc	a
   816D E0                 2323 	movx	a,@dptr
   816E 92 E1              2324 	mov	acc.1,c
   8170 F0                 2325 	movx	@dptr,a
                           2326 ;	../../shared/src/align90_cal_rom.c:106: reg_ALIGN90_GM_LANE_2_0 = gm_bin ^ (gm_bin>>1);
   8171 90 66 1D           2327 	mov	dptr,#_gm_bin
   8174 E0                 2328 	movx	a,@dptr
   8175 FA                 2329 	mov	r2,a
   8176 C3                 2330 	clr	c
   8177 13                 2331 	rrc	a
   8178 62 02              2332 	xrl	ar2,a
   817A 90 00 30           2333 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_12
   817D EA                 2334 	mov	a,r2
   817E 2A                 2335 	add	a,r2
   817F 54 0E              2336 	anl	a,#0x0e
   8181 F5 F0              2337 	mov	b,a
   8183 E0                 2338 	movx	a,@dptr
   8184 54 F1              2339 	anl	a,#0xf1
   8186 45 F0              2340 	orl	a,b
   8188 F0                 2341 	movx	@dptr,a
                           2342 ;	../../shared/src/align90_cal_rom.c:107: ALIGN90_SYN_CLK	= 1;
   8189 90 00 34           2343 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_13
   818C E0                 2344 	movx	a,@dptr
   818D 44 01              2345 	orl	a,#0x01
   818F F0                 2346 	movx	@dptr,a
                           2347 ;	../../shared/src/align90_cal_rom.c:108: delay01(2);
   8190 90 00 02           2348 	mov	dptr,#0x0002
   8193 78 16              2349 	mov	r0,#_delay01
   8195 79 BC              2350 	mov	r1,#(_delay01 >> 8)
   8197 7A 02              2351 	mov	r2,#(_delay01 >> 16)
   8199 12 00 B3           2352 	lcall	__sdcc_banked_call
                           2353 ;	../../shared/src/align90_cal_rom.c:109: ALIGN90_SYN_CLK	= 0;
   819C 90 00 34           2354 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_13
   819F E0                 2355 	movx	a,@dptr
   81A0 54 FE              2356 	anl	a,#0xfe
   81A2 F0                 2357 	movx	@dptr,a
   81A3 02 00 C5           2358 	ljmp	__sdcc_banked_ret
                           2359 ;------------------------------------------------------------
                           2360 ;Allocation info for local variables in function 'get_dac_inc'
                           2361 ;------------------------------------------------------------
                           2362 ;hit_boundary              Allocated to registers r2 
                           2363 ;------------------------------------------------------------
                           2364 ;	../../shared/src/align90_cal_rom.c:112: bool get_dac_inc(void) BANKING_CTRL
                           2365 ;	-----------------------------------------
                           2366 ;	 function get_dac_inc
                           2367 ;	-----------------------------------------
   81A6                    2368 _get_dac_inc:
                           2369 ;	../../shared/src/align90_cal_rom.c:114: bool hit_boundary = 0;
   81A6 7A 00              2370 	mov	r2,#0x00
                           2371 ;	../../shared/src/align90_cal_rom.c:116: do {
   81A8                    2372 00123$:
                           2373 ;	../../shared/src/align90_cal_rom.c:117: if(dac==49)	{
   81A8 90 66 1E           2374 	mov	dptr,#_dac
   81AB E0                 2375 	movx	a,@dptr
   81AC FB                 2376 	mov	r3,a
   81AD BB 31 2E           2377 	cjne	r3,#0x31,00121$
                           2378 ;	../../shared/src/align90_cal_rom.c:118: if(gm_bin==6) {	dac = 51; dm = 0; }
   81B0 90 66 1D           2379 	mov	dptr,#_gm_bin
   81B3 E0                 2380 	movx	a,@dptr
   81B4 FC                 2381 	mov	r4,a
   81B5 BC 06 0E           2382 	cjne	r4,#0x06,00105$
   81B8 90 66 1E           2383 	mov	dptr,#_dac
   81BB 74 33              2384 	mov	a,#0x33
   81BD F0                 2385 	movx	@dptr,a
   81BE 90 66 1F           2386 	mov	dptr,#_dm
   81C1 E4                 2387 	clr	a
   81C2 F0                 2388 	movx	@dptr,a
   81C3 02 82 32           2389 	ljmp	00124$
   81C6                    2390 00105$:
                           2391 ;	../../shared/src/align90_cal_rom.c:119: else if(gm_bin==7) { dac = 48; }					
   81C6 BC 07 08           2392 	cjne	r4,#0x07,00102$
   81C9 90 66 1E           2393 	mov	dptr,#_dac
   81CC 74 30              2394 	mov	a,#0x30
   81CE F0                 2395 	movx	@dptr,a
   81CF 80 61              2396 	sjmp	00124$
   81D1                    2397 00102$:
                           2398 ;	../../shared/src/align90_cal_rom.c:120: else { dac = 50; dm = 0; } 
   81D1 90 66 1E           2399 	mov	dptr,#_dac
   81D4 74 32              2400 	mov	a,#0x32
   81D6 F0                 2401 	movx	@dptr,a
   81D7 90 66 1F           2402 	mov	dptr,#_dm
   81DA E4                 2403 	clr	a
   81DB F0                 2404 	movx	@dptr,a
   81DC 80 54              2405 	sjmp	00124$
   81DE                    2406 00121$:
                           2407 ;	../../shared/src/align90_cal_rom.c:123: if(dac==50 || dac==51) { 
   81DE BB 32 02           2408 	cjne	r3,#0x32,00142$
   81E1 80 03              2409 	sjmp	00116$
   81E3                    2410 00142$:
   81E3 BB 33 2F           2411 	cjne	r3,#0x33,00117$
   81E6                    2412 00116$:
                           2413 ;	../../shared/src/align90_cal_rom.c:124: if(gm_bin == 6) { dac = 49; gm_bin = 7; dm = 1; }
   81E6 90 66 1D           2414 	mov	dptr,#_gm_bin
   81E9 E0                 2415 	movx	a,@dptr
   81EA FC                 2416 	mov	r4,a
   81EB BC 06 14           2417 	cjne	r4,#0x06,00108$
   81EE 90 66 1E           2418 	mov	dptr,#_dac
   81F1 74 31              2419 	mov	a,#0x31
   81F3 F0                 2420 	movx	@dptr,a
   81F4 90 66 1D           2421 	mov	dptr,#_gm_bin
   81F7 74 07              2422 	mov	a,#0x07
   81F9 F0                 2423 	movx	@dptr,a
   81FA 90 66 1F           2424 	mov	dptr,#_dm
   81FD 74 01              2425 	mov	a,#0x01
   81FF F0                 2426 	movx	@dptr,a
   8200 80 30              2427 	sjmp	00124$
   8202                    2428 00108$:
                           2429 ;	../../shared/src/align90_cal_rom.c:125: else { dac = 0; gm_bin++; dm = 1; }}
   8202 90 66 1E           2430 	mov	dptr,#_dac
   8205 E4                 2431 	clr	a
   8206 F0                 2432 	movx	@dptr,a
   8207 90 66 1D           2433 	mov	dptr,#_gm_bin
   820A EC                 2434 	mov	a,r4
   820B 04                 2435 	inc	a
   820C F0                 2436 	movx	@dptr,a
   820D 90 66 1F           2437 	mov	dptr,#_dm
   8210 74 01              2438 	mov	a,#0x01
   8212 F0                 2439 	movx	@dptr,a
   8213 80 1D              2440 	sjmp	00124$
   8215                    2441 00117$:
                           2442 ;	../../shared/src/align90_cal_rom.c:127: if(gm_bin==7) {
   8215 90 66 1D           2443 	mov	dptr,#_gm_bin
   8218 E0                 2444 	movx	a,@dptr
   8219 FC                 2445 	mov	r4,a
   821A BC 07 0F           2446 	cjne	r4,#0x07,00114$
                           2447 ;	../../shared/src/align90_cal_rom.c:128: if(dac==0) { hit_boundary=1; break; }
   821D EB                 2448 	mov	a,r3
   821E 70 04              2449 	jnz	00111$
   8220 7A 01              2450 	mov	r2,#0x01
   8222 80 24              2451 	sjmp	00125$
   8224                    2452 00111$:
                           2453 ;	../../shared/src/align90_cal_rom.c:129: else dac--; 
   8224 EB                 2454 	mov	a,r3
   8225 14                 2455 	dec	a
   8226 90 66 1E           2456 	mov	dptr,#_dac
   8229 F0                 2457 	movx	@dptr,a
   822A 80 06              2458 	sjmp	00124$
   822C                    2459 00114$:
                           2460 ;	../../shared/src/align90_cal_rom.c:131: else { dac++; }}				
   822C 90 66 1E           2461 	mov	dptr,#_dac
   822F EB                 2462 	mov	a,r3
   8230 04                 2463 	inc	a
   8231 F0                 2464 	movx	@dptr,a
   8232                    2465 00124$:
                           2466 ;	../../shared/src/align90_cal_rom.c:134: } while (align90_step-->1);
   8232 90 22 B5           2467 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0001)
   8235 E0                 2468 	movx	a,@dptr
   8236 FB                 2469 	mov	r3,a
   8237 FC                 2470 	mov	r4,a
   8238 1B                 2471 	dec	r3
   8239 90 22 B5           2472 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0001)
   823C EB                 2473 	mov	a,r3
   823D F0                 2474 	movx	@dptr,a
   823E 74 01              2475 	mov	a,#0x01
   8240 B5 04 00           2476 	cjne	a,ar4,00150$
   8243                    2477 00150$:
   8243 50 03              2478 	jnc	00151$
   8245 02 81 A8           2479 	ljmp	00123$
   8248                    2480 00151$:
   8248                    2481 00125$:
                           2482 ;	../../shared/src/align90_cal_rom.c:136: return hit_boundary;
   8248 8A 82              2483 	mov	dpl,r2
   824A 02 00 C5           2484 	ljmp	__sdcc_banked_ret
                           2485 ;------------------------------------------------------------
                           2486 ;Allocation info for local variables in function 'get_dac_dec'
                           2487 ;------------------------------------------------------------
                           2488 ;hit_boundary              Allocated to registers r2 
                           2489 ;------------------------------------------------------------
                           2490 ;	../../shared/src/align90_cal_rom.c:139: bool get_dac_dec(void) BANKING_CTRL
                           2491 ;	-----------------------------------------
                           2492 ;	 function get_dac_dec
                           2493 ;	-----------------------------------------
   824D                    2494 _get_dac_dec:
                           2495 ;	../../shared/src/align90_cal_rom.c:141: bool hit_boundary = 0;
   824D 7A 00              2496 	mov	r2,#0x00
                           2497 ;	../../shared/src/align90_cal_rom.c:143: do {
   824F                    2498 00117$:
                           2499 ;	../../shared/src/align90_cal_rom.c:144: if(gm_bin==7) { 
   824F 90 66 1D           2500 	mov	dptr,#_gm_bin
   8252 E0                 2501 	movx	a,@dptr
   8253 FB                 2502 	mov	r3,a
   8254 BB 07 23           2503 	cjne	r3,#0x07,00115$
                           2504 ;	../../shared/src/align90_cal_rom.c:145: if(dac==49) { dac = 51; gm_bin = 6; dm = 0; }
   8257 90 66 1E           2505 	mov	dptr,#_dac
   825A E0                 2506 	movx	a,@dptr
   825B FC                 2507 	mov	r4,a
   825C BC 31 13           2508 	cjne	r4,#0x31,00102$
   825F 90 66 1E           2509 	mov	dptr,#_dac
   8262 74 33              2510 	mov	a,#0x33
   8264 F0                 2511 	movx	@dptr,a
   8265 90 66 1D           2512 	mov	dptr,#_gm_bin
   8268 74 06              2513 	mov	a,#0x06
   826A F0                 2514 	movx	@dptr,a
   826B 90 66 1F           2515 	mov	dptr,#_dm
   826E E4                 2516 	clr	a
   826F F0                 2517 	movx	@dptr,a
   8270 80 4A              2518 	sjmp	00118$
   8272                    2519 00102$:
                           2520 ;	../../shared/src/align90_cal_rom.c:146: else { dac++;}
   8272 90 66 1E           2521 	mov	dptr,#_dac
   8275 EC                 2522 	mov	a,r4
   8276 04                 2523 	inc	a
   8277 F0                 2524 	movx	@dptr,a
   8278 80 42              2525 	sjmp	00118$
   827A                    2526 00115$:
                           2527 ;	../../shared/src/align90_cal_rom.c:149: if(dac==50 || dac==51) { dac = 49; dm = 1; }
   827A 90 66 1E           2528 	mov	dptr,#_dac
   827D E0                 2529 	movx	a,@dptr
   827E FC                 2530 	mov	r4,a
   827F BC 32 02           2531 	cjne	r4,#0x32,00132$
   8282 80 03              2532 	sjmp	00110$
   8284                    2533 00132$:
   8284 BC 33 0E           2534 	cjne	r4,#0x33,00111$
   8287                    2535 00110$:
   8287 90 66 1E           2536 	mov	dptr,#_dac
   828A 74 31              2537 	mov	a,#0x31
   828C F0                 2538 	movx	@dptr,a
   828D 90 66 1F           2539 	mov	dptr,#_dm
   8290 74 01              2540 	mov	a,#0x01
   8292 F0                 2541 	movx	@dptr,a
   8293 80 27              2542 	sjmp	00118$
   8295                    2543 00111$:
                           2544 ;	../../shared/src/align90_cal_rom.c:150: else if(dac==0){ 
   8295 EC                 2545 	mov	a,r4
   8296 70 1E              2546 	jnz	00108$
                           2547 ;	../../shared/src/align90_cal_rom.c:151: if(gm_bin>1) {gm_bin--; dac = 51; dm = 0;}	
   8298 74 01              2548 	mov	a,#0x01
   829A B5 03 00           2549 	cjne	a,ar3,00136$
   829D                    2550 00136$:
   829D 50 13              2551 	jnc	00105$
   829F EB                 2552 	mov	a,r3
   82A0 14                 2553 	dec	a
   82A1 90 66 1D           2554 	mov	dptr,#_gm_bin
   82A4 F0                 2555 	movx	@dptr,a
   82A5 90 66 1E           2556 	mov	dptr,#_dac
   82A8 74 33              2557 	mov	a,#0x33
   82AA F0                 2558 	movx	@dptr,a
   82AB 90 66 1F           2559 	mov	dptr,#_dm
   82AE E4                 2560 	clr	a
   82AF F0                 2561 	movx	@dptr,a
   82B0 80 0A              2562 	sjmp	00118$
   82B2                    2563 00105$:
                           2564 ;	../../shared/src/align90_cal_rom.c:152: else { hit_boundary=1; break; }
   82B2 7A 01              2565 	mov	r2,#0x01
   82B4 80 1C              2566 	sjmp	00119$
   82B6                    2567 00108$:
                           2568 ;	../../shared/src/align90_cal_rom.c:154: else { dac--; }
   82B6 EC                 2569 	mov	a,r4
   82B7 14                 2570 	dec	a
   82B8 90 66 1E           2571 	mov	dptr,#_dac
   82BB F0                 2572 	movx	@dptr,a
   82BC                    2573 00118$:
                           2574 ;	../../shared/src/align90_cal_rom.c:156: } while (align90_step--> 1);
   82BC 90 22 B5           2575 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0001)
   82BF E0                 2576 	movx	a,@dptr
   82C0 FB                 2577 	mov	r3,a
   82C1 FC                 2578 	mov	r4,a
   82C2 1B                 2579 	dec	r3
   82C3 90 22 B5           2580 	mov	dptr,#(_MCU_DEBUG0_LANE + 0x0001)
   82C6 EB                 2581 	mov	a,r3
   82C7 F0                 2582 	movx	@dptr,a
   82C8 74 01              2583 	mov	a,#0x01
   82CA B5 04 00           2584 	cjne	a,ar4,00138$
   82CD                    2585 00138$:
   82CD 50 03              2586 	jnc	00139$
   82CF 02 82 4F           2587 	ljmp	00117$
   82D2                    2588 00139$:
   82D2                    2589 00119$:
                           2590 ;	../../shared/src/align90_cal_rom.c:158: return hit_boundary;
   82D2 8A 82              2591 	mov	dpl,r2
   82D4 02 00 C5           2592 	ljmp	__sdcc_banked_ret
                           2593 	.area CSEG    (CODE)
                           2594 	.area CSEG    (CODE)
                           2595 	.area CABS    (ABS,CODE)
