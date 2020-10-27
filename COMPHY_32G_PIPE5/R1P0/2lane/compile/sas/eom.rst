                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Thu Oct 18 21:21:41 2018
                              5 ;--------------------------------------------------------
                              6 	.module eom
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _eom_pop_threhold
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
                            980 	.globl _Check_EOM_Stage_fmExt
                            981 	.globl _sum_32
                            982 ;--------------------------------------------------------
                            983 ; special function registers
                            984 ;--------------------------------------------------------
                            985 	.area RSEG    (ABS,DATA)
   0000                     986 	.org 0x0000
                    0080    987 _P0	=	0x0080
                    0082    988 _DPL	=	0x0082
                    0083    989 _DPH	=	0x0083
                    0086    990 _WDTREL	=	0x0086
                    0087    991 _PCON	=	0x0087
                    0088    992 _TCON	=	0x0088
                    0089    993 _TMOD	=	0x0089
                    008A    994 _TL0	=	0x008a
                    008B    995 _TL1	=	0x008b
                    008C    996 _TH0	=	0x008c
                    008D    997 _TH1	=	0x008d
                    008E    998 _CKCON	=	0x008e
                    0090    999 _P1	=	0x0090
                    0092   1000 _DPS	=	0x0092
                    0094   1001 _PSBANK	=	0x0094
                    0098   1002 _SCON	=	0x0098
                    0099   1003 _SBUF	=	0x0099
                    009A   1004 _IEN2	=	0x009a
                    00A0   1005 _P2	=	0x00a0
                    00A1   1006 _DMAS0	=	0x00a1
                    00A2   1007 _DMAS1	=	0x00a2
                    00A3   1008 _DMAS2	=	0x00a3
                    00A4   1009 _DMAT0	=	0x00a4
                    00A5   1010 _DMAT1	=	0x00a5
                    00A6   1011 _DMAT2	=	0x00a6
                    00A8   1012 _IEN0	=	0x00a8
                    00A9   1013 _IP0	=	0x00a9
                    00AA   1014 _S0RELL	=	0x00aa
                    00B0   1015 _P3	=	0x00b0
                    00B1   1016 _DMAC0	=	0x00b1
                    00B2   1017 _DMAC1	=	0x00b2
                    00B3   1018 _DMAC2	=	0x00b3
                    00B4   1019 _DMASEL	=	0x00b4
                    00B5   1020 _DMAM0	=	0x00b5
                    00B6   1021 _DMAM1	=	0x00b6
                    00B8   1022 _IEN1	=	0x00b8
                    00B9   1023 _IP1	=	0x00b9
                    00BA   1024 _S0RELH	=	0x00ba
                    00C0   1025 _IRCON	=	0x00c0
                    00C1   1026 _CCEN	=	0x00c1
                    00C8   1027 _T2CON	=	0x00c8
                    00CA   1028 _RCAP2L	=	0x00ca
                    00CB   1029 _RCAP2H	=	0x00cb
                    00CC   1030 _TL2	=	0x00cc
                    00CD   1031 _TH2	=	0x00cd
                    00D0   1032 _PSW	=	0x00d0
                    00D8   1033 _ADCON	=	0x00d8
                    00E0   1034 _ACC	=	0x00e0
                    00E8   1035 _EIE	=	0x00e8
                    00F0   1036 _B	=	0x00f0
                    00F7   1037 _SRST	=	0x00f7
                    8C8A   1038 _TMR0	=	0x8c8a
                    8D8B   1039 _TMR1	=	0x8d8b
                    CDCC   1040 _TMR2	=	0xcdcc
                    A2A1   1041 _DMASA	=	0xa2a1
                    A5A4   1042 _DMATA	=	0xa5a4
                    B2B1   1043 _DMAC	=	0xb2b1
                           1044 ;--------------------------------------------------------
                           1045 ; special function bits
                           1046 ;--------------------------------------------------------
                           1047 	.area RSEG    (ABS,DATA)
   0000                    1048 	.org 0x0000
                    0080   1049 _P0_0	=	0x0080
                    0081   1050 _P0_1	=	0x0081
                    0082   1051 _P0_2	=	0x0082
                    0083   1052 _P0_3	=	0x0083
                    0084   1053 _P0_4	=	0x0084
                    0085   1054 _P0_5	=	0x0085
                    0086   1055 _P0_6	=	0x0086
                    0087   1056 _P0_7	=	0x0087
                    0090   1057 _P1_0	=	0x0090
                    0091   1058 _P1_1	=	0x0091
                    0092   1059 _P1_2	=	0x0092
                    0093   1060 _P1_3	=	0x0093
                    0094   1061 _P1_4	=	0x0094
                    0095   1062 _P1_5	=	0x0095
                    0096   1063 _P1_6	=	0x0096
                    0097   1064 _P1_7	=	0x0097
                    00A0   1065 _P2_0	=	0x00a0
                    00A1   1066 _P2_1	=	0x00a1
                    00A2   1067 _P2_2	=	0x00a2
                    00A3   1068 _P2_3	=	0x00a3
                    00A4   1069 _P2_4	=	0x00a4
                    00A5   1070 _P2_5	=	0x00a5
                    00A6   1071 _P2_6	=	0x00a6
                    00A7   1072 _P2_7	=	0x00a7
                    00B0   1073 _P3_0	=	0x00b0
                    00B1   1074 _P3_1	=	0x00b1
                    00B2   1075 _P3_2	=	0x00b2
                    00B3   1076 _P3_3	=	0x00b3
                    00B4   1077 _P3_4	=	0x00b4
                    00B5   1078 _P3_5	=	0x00b5
                    00B6   1079 _P3_6	=	0x00b6
                    00B7   1080 _P3_7	=	0x00b7
                    0088   1081 _IT0	=	0x0088
                    0089   1082 _IE0	=	0x0089
                    008A   1083 _IT1	=	0x008a
                    008B   1084 _IE1	=	0x008b
                    008C   1085 _TR0	=	0x008c
                    008D   1086 _TF0	=	0x008d
                    008E   1087 _TR1	=	0x008e
                    008F   1088 _TF1	=	0x008f
                    00A8   1089 _EX0	=	0x00a8
                    00A9   1090 _ET0	=	0x00a9
                    00AA   1091 _EX1	=	0x00aa
                    00AB   1092 _ET1	=	0x00ab
                    00AC   1093 _ES	=	0x00ac
                    00AD   1094 _ET2	=	0x00ad
                    00AE   1095 _WDT	=	0x00ae
                    00AF   1096 _EA	=	0x00af
                    00B8   1097 _EX7	=	0x00b8
                    00B9   1098 _EX2	=	0x00b9
                    00BA   1099 _EX3	=	0x00ba
                    00BB   1100 _EX4	=	0x00bb
                    00BC   1101 _EX5	=	0x00bc
                    00BD   1102 _EX6	=	0x00bd
                    00BE   1103 _PS1	=	0x00be
                    009A   1104 _ES1	=	0x009a
                    009B   1105 _EX8	=	0x009b
                    009C   1106 _EX9	=	0x009c
                    009D   1107 _EX10	=	0x009d
                    009E   1108 _EX11	=	0x009e
                    009F   1109 _EX12	=	0x009f
                    0098   1110 _RI	=	0x0098
                    0099   1111 _TI	=	0x0099
                    00C6   1112 _TF2	=	0x00c6
                           1113 ;--------------------------------------------------------
                           1114 ; overlayable register banks
                           1115 ;--------------------------------------------------------
                           1116 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1117 	.ds 8
                           1118 ;--------------------------------------------------------
                           1119 ; internal ram data
                           1120 ;--------------------------------------------------------
                           1121 	.area DSEG    (DATA)
                           1122 ;--------------------------------------------------------
                           1123 ; overlayable items in internal ram 
                           1124 ;--------------------------------------------------------
                           1125 	.area OSEG    (OVR,DATA)
                           1126 ;--------------------------------------------------------
                           1127 ; indirectly addressable internal ram data
                           1128 ;--------------------------------------------------------
                           1129 	.area ISEG    (DATA)
                           1130 ;--------------------------------------------------------
                           1131 ; absolute internal ram data
                           1132 ;--------------------------------------------------------
                           1133 	.area IABS    (ABS,DATA)
                           1134 	.area IABS    (ABS,DATA)
                           1135 ;--------------------------------------------------------
                           1136 ; bit data
                           1137 ;--------------------------------------------------------
                           1138 	.area BSEG    (BIT)
                           1139 ;--------------------------------------------------------
                           1140 ; paged external ram data
                           1141 ;--------------------------------------------------------
                           1142 	.area PSEG    (PAG,XDATA)
                           1143 ;--------------------------------------------------------
                           1144 ; external ram data
                           1145 ;--------------------------------------------------------
                           1146 	.area XSEG    (XDATA)
                    1000   1147 _UPHY14_TRX_LANEPLL_ANAREG_TOP_128	=	0x1000
                    1004   1148 _UPHY14_TRX_LANEPLL_ANAREG_TOP_129	=	0x1004
                    1008   1149 _UPHY14_TRX_LANEPLL_ANAREG_TOP_130	=	0x1008
                    100C   1150 _UPHY14_TRX_LANEPLL_ANAREG_TOP_131	=	0x100c
                    1010   1151 _UPHY14_TRX_LANEPLL_ANAREG_TOP_132	=	0x1010
                    1014   1152 _UPHY14_TRX_LANEPLL_ANAREG_TOP_133	=	0x1014
                    1018   1153 _UPHY14_TRX_LANEPLL_ANAREG_TOP_134	=	0x1018
                    101C   1154 _UPHY14_TRX_LANEPLL_ANAREG_TOP_135	=	0x101c
                    1020   1155 _UPHY14_TRX_LANEPLL_ANAREG_TOP_136	=	0x1020
                    1024   1156 _UPHY14_TRX_LANEPLL_ANAREG_TOP_137	=	0x1024
                    1028   1157 _UPHY14_TRX_LANEPLL_ANAREG_TOP_138	=	0x1028
                    102C   1158 _UPHY14_TRX_LANEPLL_ANAREG_TOP_139	=	0x102c
                    1030   1159 _UPHY14_TRX_LANEPLL_ANAREG_TOP_140	=	0x1030
                    1034   1160 _UPHY14_TRX_LANEPLL_ANAREG_TOP_141	=	0x1034
                    1038   1161 _UPHY14_TRX_LANEPLL_ANAREG_TOP_142	=	0x1038
                    103C   1162 _UPHY14_TRX_LANEPLL_ANAREG_TOP_143	=	0x103c
                    0200   1163 _UPHY14_TRX_ANAREG_TOP_128	=	0x0200
                    0204   1164 _UPHY14_TRX_ANAREG_TOP_129	=	0x0204
                    0208   1165 _UPHY14_TRX_ANAREG_TOP_130	=	0x0208
                    020C   1166 _UPHY14_TRX_ANAREG_TOP_131	=	0x020c
                    0210   1167 _UPHY14_TRX_ANAREG_TOP_132	=	0x0210
                    0214   1168 _UPHY14_TRX_ANAREG_TOP_133	=	0x0214
                    0218   1169 _UPHY14_TRX_ANAREG_TOP_134	=	0x0218
                    021C   1170 _UPHY14_TRX_ANAREG_TOP_135	=	0x021c
                    0220   1171 _UPHY14_TRX_ANAREG_TOP_136	=	0x0220
                    0224   1172 _UPHY14_TRX_ANAREG_TOP_137	=	0x0224
                    0228   1173 _UPHY14_TRX_ANAREG_TOP_138	=	0x0228
                    022C   1174 _UPHY14_TRX_ANAREG_TOP_139	=	0x022c
                    0230   1175 _UPHY14_TRX_ANAREG_TOP_140	=	0x0230
                    0234   1176 _UPHY14_TRX_ANAREG_TOP_141	=	0x0234
                    0238   1177 _UPHY14_TRX_ANAREG_TOP_142	=	0x0238
                    023C   1178 _UPHY14_TRX_ANAREG_TOP_143	=	0x023c
                    0240   1179 _UPHY14_TRX_ANAREG_TOP_144	=	0x0240
                    0244   1180 _UPHY14_TRX_ANAREG_TOP_145	=	0x0244
                    0248   1181 _UPHY14_TRX_ANAREG_TOP_146	=	0x0248
                    024C   1182 _UPHY14_TRX_ANAREG_TOP_147	=	0x024c
                    0250   1183 _UPHY14_TRX_ANAREG_TOP_148	=	0x0250
                    0254   1184 _UPHY14_TRX_ANAREG_TOP_149	=	0x0254
                    0258   1185 _UPHY14_TRX_ANAREG_TOP_150	=	0x0258
                    025C   1186 _UPHY14_TRX_ANAREG_TOP_151	=	0x025c
                    0260   1187 _UPHY14_TRX_ANAREG_TOP_152	=	0x0260
                    0264   1188 _UPHY14_TRX_ANAREG_TOP_153	=	0x0264
                    0268   1189 _UPHY14_TRX_ANAREG_TOP_154	=	0x0268
                    026C   1190 _UPHY14_TRX_ANAREG_TOP_155	=	0x026c
                    0270   1191 _UPHY14_TRX_ANAREG_TOP_156	=	0x0270
                    0274   1192 _UPHY14_TRX_ANAREG_TOP_157	=	0x0274
                    0000   1193 _UPHY14_TRX_ANAREG_BOT_0	=	0x0000
                    0004   1194 _UPHY14_TRX_ANAREG_BOT_1	=	0x0004
                    0008   1195 _UPHY14_TRX_ANAREG_BOT_2	=	0x0008
                    000C   1196 _UPHY14_TRX_ANAREG_BOT_3	=	0x000c
                    0010   1197 _UPHY14_TRX_ANAREG_BOT_4	=	0x0010
                    0014   1198 _UPHY14_TRX_ANAREG_BOT_5	=	0x0014
                    0018   1199 _UPHY14_TRX_ANAREG_BOT_6	=	0x0018
                    001C   1200 _UPHY14_TRX_ANAREG_BOT_7	=	0x001c
                    0020   1201 _UPHY14_TRX_ANAREG_BOT_8	=	0x0020
                    0024   1202 _UPHY14_TRX_ANAREG_BOT_9	=	0x0024
                    0028   1203 _UPHY14_TRX_ANAREG_BOT_10	=	0x0028
                    002C   1204 _UPHY14_TRX_ANAREG_BOT_11	=	0x002c
                    0030   1205 _UPHY14_TRX_ANAREG_BOT_12	=	0x0030
                    0034   1206 _UPHY14_TRX_ANAREG_BOT_13	=	0x0034
                    0038   1207 _UPHY14_TRX_ANAREG_BOT_14	=	0x0038
                    003C   1208 _UPHY14_TRX_ANAREG_BOT_15	=	0x003c
                    0040   1209 _UPHY14_TRX_ANAREG_BOT_16	=	0x0040
                    0044   1210 _UPHY14_TRX_ANAREG_BOT_17	=	0x0044
                    0048   1211 _UPHY14_TRX_ANAREG_BOT_18	=	0x0048
                    004C   1212 _UPHY14_TRX_ANAREG_BOT_19	=	0x004c
                    0050   1213 _UPHY14_TRX_ANAREG_BOT_20	=	0x0050
                    0054   1214 _UPHY14_TRX_ANAREG_BOT_21	=	0x0054
                    0058   1215 _UPHY14_TRX_ANAREG_BOT_22	=	0x0058
                    005C   1216 _UPHY14_TRX_ANAREG_BOT_23	=	0x005c
                    0060   1217 _UPHY14_TRX_ANAREG_BOT_24	=	0x0060
                    0064   1218 _UPHY14_TRX_ANAREG_BOT_25	=	0x0064
                    0068   1219 _UPHY14_TRX_ANAREG_BOT_26	=	0x0068
                    006C   1220 _UPHY14_TRX_ANAREG_BOT_27	=	0x006c
                    0070   1221 _UPHY14_TRX_ANAREG_BOT_28	=	0x0070
                    0074   1222 _UPHY14_TRX_ANAREG_BOT_29	=	0x0074
                    0078   1223 _UPHY14_TRX_ANAREG_BOT_30	=	0x0078
                    007C   1224 _UPHY14_TRX_ANAREG_BOT_31	=	0x007c
                    0080   1225 _UPHY14_TRX_ANAREG_BOT_32	=	0x0080
                    0478   1226 _ANA_DFEE_REG_1E	=	0x0478
                    047C   1227 _ANA_DFEE_REG_1F	=	0x047c
                    0480   1228 _ANA_DFEE_REG_20	=	0x0480
                    0484   1229 _ANA_DFEE_REG_21	=	0x0484
                    0488   1230 _ANA_DFEE_REG_22	=	0x0488
                    048C   1231 _ANA_DFEE_REG_23	=	0x048c
                    0490   1232 _ANA_DFEE_REG_24	=	0x0490
                    0494   1233 _ANA_DFEE_REG_25	=	0x0494
                    0498   1234 _ANA_DFEE_REG_26	=	0x0498
                    049C   1235 _ANA_DFEE_REG_27	=	0x049c
                    0400   1236 _ANA_DFEE_REG_00	=	0x0400
                    0404   1237 _ANA_DFEE_REG_01	=	0x0404
                    0408   1238 _ANA_DFEE_REG_02	=	0x0408
                    040C   1239 _ANA_DFEE_REG_03	=	0x040c
                    0410   1240 _ANA_DFEE_REG_04	=	0x0410
                    0414   1241 _ANA_DFEE_REG_05	=	0x0414
                    0418   1242 _ANA_DFEE_REG_06	=	0x0418
                    041C   1243 _ANA_DFEE_REG_07	=	0x041c
                    0420   1244 _ANA_DFEE_REG_08	=	0x0420
                    0424   1245 _ANA_DFEE_REG_09	=	0x0424
                    0428   1246 _ANA_DFEE_REG_0A	=	0x0428
                    042C   1247 _ANA_DFEE_REG_0B	=	0x042c
                    0430   1248 _ANA_DFEE_REG_0C	=	0x0430
                    0434   1249 _ANA_DFEE_REG_0D	=	0x0434
                    0438   1250 _ANA_DFEE_REG_0E	=	0x0438
                    043C   1251 _ANA_DFEE_REG_0F	=	0x043c
                    0440   1252 _ANA_DFEE_REG_10	=	0x0440
                    0444   1253 _ANA_DFEE_REG_11	=	0x0444
                    0448   1254 _ANA_DFEE_REG_12	=	0x0448
                    044C   1255 _ANA_DFEE_REG_13	=	0x044c
                    0450   1256 _ANA_DFEE_REG_14	=	0x0450
                    0454   1257 _ANA_DFEE_REG_15	=	0x0454
                    0458   1258 _ANA_DFEE_REG_16	=	0x0458
                    045C   1259 _ANA_DFEE_REG_17	=	0x045c
                    0460   1260 _ANA_DFEE_REG_18	=	0x0460
                    0464   1261 _ANA_DFEE_REG_19	=	0x0464
                    0468   1262 _ANA_DFEE_REG_1A	=	0x0468
                    046C   1263 _ANA_DFEE_REG_1B	=	0x046c
                    0470   1264 _ANA_DFEE_REG_1C	=	0x0470
                    0474   1265 _ANA_DFEE_REG_1D	=	0x0474
                    0830   1266 _ANA_DFEO_REG_0C	=	0x0830
                    0834   1267 _ANA_DFEO_REG_0D	=	0x0834
                    0838   1268 _ANA_DFEO_REG_0E	=	0x0838
                    083C   1269 _ANA_DFEO_REG_0F	=	0x083c
                    0840   1270 _ANA_DFEO_REG_10	=	0x0840
                    0844   1271 _ANA_DFEO_REG_11	=	0x0844
                    0848   1272 _ANA_DFEO_REG_12	=	0x0848
                    084C   1273 _ANA_DFEO_REG_13	=	0x084c
                    0850   1274 _ANA_DFEO_REG_14	=	0x0850
                    0854   1275 _ANA_DFEO_REG_15	=	0x0854
                    0858   1276 _ANA_DFEO_REG_16	=	0x0858
                    085C   1277 _ANA_DFEO_REG_17	=	0x085c
                    0860   1278 _ANA_DFEO_REG_18	=	0x0860
                    0864   1279 _ANA_DFEO_REG_19	=	0x0864
                    0868   1280 _ANA_DFEO_REG_1A	=	0x0868
                    086C   1281 _ANA_DFEO_REG_1B	=	0x086c
                    0870   1282 _ANA_DFEO_REG_1C	=	0x0870
                    0874   1283 _ANA_DFEO_REG_1D	=	0x0874
                    0878   1284 _ANA_DFEO_REG_1E	=	0x0878
                    087C   1285 _ANA_DFEO_REG_1F	=	0x087c
                    0880   1286 _ANA_DFEO_REG_20	=	0x0880
                    0884   1287 _ANA_DFEO_REG_21	=	0x0884
                    0888   1288 _ANA_DFEO_REG_22	=	0x0888
                    088C   1289 _ANA_DFEO_REG_23	=	0x088c
                    0890   1290 _ANA_DFEO_REG_24	=	0x0890
                    0894   1291 _ANA_DFEO_REG_25	=	0x0894
                    0898   1292 _ANA_DFEO_REG_26	=	0x0898
                    089C   1293 _ANA_DFEO_REG_27	=	0x089c
                    0800   1294 _ANA_DFEO_REG_00	=	0x0800
                    0804   1295 _ANA_DFEO_REG_01	=	0x0804
                    0808   1296 _ANA_DFEO_REG_02	=	0x0808
                    080C   1297 _ANA_DFEO_REG_03	=	0x080c
                    0810   1298 _ANA_DFEO_REG_04	=	0x0810
                    0814   1299 _ANA_DFEO_REG_05	=	0x0814
                    0818   1300 _ANA_DFEO_REG_06	=	0x0818
                    081C   1301 _ANA_DFEO_REG_07	=	0x081c
                    0820   1302 _ANA_DFEO_REG_08	=	0x0820
                    0824   1303 _ANA_DFEO_REG_09	=	0x0824
                    0828   1304 _ANA_DFEO_REG_0A	=	0x0828
                    082C   1305 _ANA_DFEO_REG_0B	=	0x082c
                    8200   1306 _UPHY14_CMN_ANAREG_TOP_128	=	0x8200
                    8204   1307 _UPHY14_CMN_ANAREG_TOP_129	=	0x8204
                    8208   1308 _UPHY14_CMN_ANAREG_TOP_130	=	0x8208
                    820C   1309 _UPHY14_CMN_ANAREG_TOP_131	=	0x820c
                    8210   1310 _UPHY14_CMN_ANAREG_TOP_132	=	0x8210
                    8214   1311 _UPHY14_CMN_ANAREG_TOP_133	=	0x8214
                    8218   1312 _UPHY14_CMN_ANAREG_TOP_134	=	0x8218
                    821C   1313 _UPHY14_CMN_ANAREG_TOP_135	=	0x821c
                    8220   1314 _UPHY14_CMN_ANAREG_TOP_136	=	0x8220
                    8224   1315 _UPHY14_CMN_ANAREG_TOP_137	=	0x8224
                    8228   1316 _UPHY14_CMN_ANAREG_TOP_138	=	0x8228
                    822C   1317 _UPHY14_CMN_ANAREG_TOP_139	=	0x822c
                    8230   1318 _UPHY14_CMN_ANAREG_TOP_140	=	0x8230
                    8234   1319 _UPHY14_CMN_ANAREG_TOP_141	=	0x8234
                    8238   1320 _UPHY14_CMN_ANAREG_TOP_142	=	0x8238
                    823C   1321 _UPHY14_CMN_ANAREG_TOP_143	=	0x823c
                    8240   1322 _UPHY14_CMN_ANAREG_TOP_144	=	0x8240
                    8244   1323 _UPHY14_CMN_ANAREG_TOP_145	=	0x8244
                    8248   1324 _UPHY14_CMN_ANAREG_TOP_146	=	0x8248
                    824C   1325 _UPHY14_CMN_ANAREG_TOP_147	=	0x824c
                    8250   1326 _UPHY14_CMN_ANAREG_TOP_148	=	0x8250
                    8254   1327 _UPHY14_CMN_ANAREG_TOP_149	=	0x8254
                    8258   1328 _UPHY14_CMN_ANAREG_TOP_150	=	0x8258
                    825C   1329 _UPHY14_CMN_ANAREG_TOP_151	=	0x825c
                    8260   1330 _UPHY14_CMN_ANAREG_TOP_152	=	0x8260
                    8264   1331 _UPHY14_CMN_ANAREG_TOP_153	=	0x8264
                    8268   1332 _UPHY14_CMN_ANAREG_TOP_154	=	0x8268
                    826C   1333 _UPHY14_CMN_ANAREG_TOP_155	=	0x826c
                    8270   1334 _UPHY14_CMN_ANAREG_TOP_156	=	0x8270
                    8274   1335 _UPHY14_CMN_ANAREG_TOP_157	=	0x8274
                    8278   1336 _UPHY14_CMN_ANAREG_TOP_158	=	0x8278
                    827C   1337 _UPHY14_CMN_ANAREG_TOP_159	=	0x827c
                    8280   1338 _UPHY14_CMN_ANAREG_TOP_160	=	0x8280
                    8284   1339 _UPHY14_CMN_ANAREG_TOP_161	=	0x8284
                    8288   1340 _UPHY14_CMN_ANAREG_TOP_162	=	0x8288
                    828C   1341 _UPHY14_CMN_ANAREG_TOP_163	=	0x828c
                    8290   1342 _UPHY14_CMN_ANAREG_TOP_164	=	0x8290
                    8294   1343 _UPHY14_CMN_ANAREG_TOP_165	=	0x8294
                    8298   1344 _UPHY14_CMN_ANAREG_TOP_166	=	0x8298
                    829C   1345 _UPHY14_CMN_ANAREG_TOP_167	=	0x829c
                    82A0   1346 _UPHY14_CMN_ANAREG_TOP_168	=	0x82a0
                    82A4   1347 _UPHY14_CMN_ANAREG_TOP_169	=	0x82a4
                    82A8   1348 _UPHY14_CMN_ANAREG_TOP_170	=	0x82a8
                    82AC   1349 _UPHY14_CMN_ANAREG_TOP_171	=	0x82ac
                    82B0   1350 _UPHY14_CMN_ANAREG_TOP_172	=	0x82b0
                    82B4   1351 _UPHY14_CMN_ANAREG_TOP_173	=	0x82b4
                    82B8   1352 _UPHY14_CMN_ANAREG_TOP_174	=	0x82b8
                    82BC   1353 _UPHY14_CMN_ANAREG_TOP_175	=	0x82bc
                    82C0   1354 _UPHY14_CMN_ANAREG_TOP_176	=	0x82c0
                    82C4   1355 _UPHY14_CMN_ANAREG_TOP_177	=	0x82c4
                    82C8   1356 _UPHY14_CMN_ANAREG_TOP_178	=	0x82c8
                    82CC   1357 _UPHY14_CMN_ANAREG_TOP_179	=	0x82cc
                    82D0   1358 _UPHY14_CMN_ANAREG_TOP_180	=	0x82d0
                    82D4   1359 _UPHY14_CMN_ANAREG_TOP_181	=	0x82d4
                    82D8   1360 _UPHY14_CMN_ANAREG_TOP_182	=	0x82d8
                    82DC   1361 _UPHY14_CMN_ANAREG_TOP_183	=	0x82dc
                    82E0   1362 _UPHY14_CMN_ANAREG_TOP_184	=	0x82e0
                    82E4   1363 _UPHY14_CMN_ANAREG_TOP_185	=	0x82e4
                    82E8   1364 _UPHY14_CMN_ANAREG_TOP_186	=	0x82e8
                    82EC   1365 _UPHY14_CMN_ANAREG_TOP_187	=	0x82ec
                    82F0   1366 _UPHY14_CMN_ANAREG_TOP_188	=	0x82f0
                    82F4   1367 _UPHY14_CMN_ANAREG_TOP_189	=	0x82f4
                    82F8   1368 _UPHY14_CMN_ANAREG_TOP_190	=	0x82f8
                    82FC   1369 _UPHY14_CMN_ANAREG_TOP_191	=	0x82fc
                    8300   1370 _UPHY14_CMN_ANAREG_TOP_192	=	0x8300
                    8304   1371 _UPHY14_CMN_ANAREG_TOP_193	=	0x8304
                    8308   1372 _UPHY14_CMN_ANAREG_TOP_194	=	0x8308
                    830C   1373 _UPHY14_CMN_ANAREG_TOP_195	=	0x830c
                    8310   1374 _UPHY14_CMN_ANAREG_TOP_196	=	0x8310
                    8314   1375 _UPHY14_CMN_ANAREG_TOP_197	=	0x8314
                    8318   1376 _UPHY14_CMN_ANAREG_TOP_198	=	0x8318
                    831C   1377 _UPHY14_CMN_ANAREG_TOP_199	=	0x831c
                    8320   1378 _UPHY14_CMN_ANAREG_TOP_200	=	0x8320
                    8324   1379 _UPHY14_CMN_ANAREG_TOP_201	=	0x8324
                    8328   1380 _UPHY14_CMN_ANAREG_TOP_202	=	0x8328
                    832C   1381 _UPHY14_CMN_ANAREG_TOP_203	=	0x832c
                    8330   1382 _UPHY14_CMN_ANAREG_TOP_204	=	0x8330
                    8334   1383 _UPHY14_CMN_ANAREG_TOP_205	=	0x8334
                    8338   1384 _UPHY14_CMN_ANAREG_TOP_206	=	0x8338
                    833C   1385 _UPHY14_CMN_ANAREG_TOP_207	=	0x833c
                    8340   1386 _UPHY14_CMN_ANAREG_TOP_208	=	0x8340
                    8344   1387 _UPHY14_CMN_ANAREG_TOP_209	=	0x8344
                    8348   1388 _UPHY14_CMN_ANAREG_TOP_210	=	0x8348
                    834C   1389 _UPHY14_CMN_ANAREG_TOP_211	=	0x834c
                    8350   1390 _UPHY14_CMN_ANAREG_TOP_212	=	0x8350
                    8354   1391 _UPHY14_CMN_ANAREG_TOP_213	=	0x8354
                    8358   1392 _UPHY14_CMN_ANAREG_TOP_214	=	0x8358
                    2000   1393 _PM_CTRL_TX_LANE_REG1_LANE	=	0x2000
                    2004   1394 _PM_CTRL_TX_LANE_REG2_LANE	=	0x2004
                    2008   1395 _INPUT_TX_PIN_REG0_LANE	=	0x2008
                    200C   1396 _INPUT_TX_PIN_REG1_LANE	=	0x200c
                    2010   1397 _INPUT_TX_PIN_REG2_LANE	=	0x2010
                    2014   1398 _INPUT_TX_PIN_REG3_LANE	=	0x2014
                    2018   1399 _PM_CTRL_INTERRUPT_REG1_LANE	=	0x2018
                    201C   1400 _PM_CTRL_INTERRUPT_REG2	=	0x201c
                    2020   1401 _CLKGEN_TX_LANE_REG1_LANE	=	0x2020
                    2024   1402 _TX_SPEED_CONVERT_LANE	=	0x2024
                    2028   1403 _SPD_CTRL_INTERRUPT_REG1_LANE	=	0x2028
                    202C   1404 _SPD_CTRL_INTERRUPT_REG2	=	0x202c
                    2030   1405 _SPD_CTRL_TX_LANE_REG1_LANE	=	0x2030
                    2034   1406 _TX_SYSTEM_LANE	=	0x2034
                    203C   1407 _INPUT_TX_PIN_REG4_LANE	=	0x203c
                    2040   1408 _TX_CALIBRATION_LANE	=	0x2040
                    2044   1409 _DIG_TX_RSVD_REG0	=	0x2044
                    2048   1410 _INPUT_TX_PIN_REG5_LANE	=	0x2048
                    204C   1411 __FIELDNAME__LANE	=	0x204c
                    2050   1412 _PM_CTRL_INTERRUPT_ISR_REG1_LANE	=	0x2050
                    2054   1413 _SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE	=	0x2054
                    2058   1414 _ANALOG_TX_REALTIME_REG_1	=	0x2058
                    205C   1415 _MON_TOP	=	0x205c
                    2100   1416 _PM_CTRL_RX_LANE_REG1_LANE	=	0x2100
                    2104   1417 _RX_SYSTEM_LANE	=	0x2104
                    2108   1418 _INPUT_RX_PIN_REG0_LANE	=	0x2108
                    210C   1419 _INPUT_RX_PIN_REG1_LANE	=	0x210c
                    2110   1420 _INPUT_RX_PIN_REG2_LANE	=	0x2110
                    2114   1421 _SPD_CTRL_RX_LANE_REG1_LANE	=	0x2114
                    2118   1422 _DIG_RX_RSVD_REG0	=	0x2118
                    211C   1423 _CLKGEN_RX_LANE_REG1_LANE	=	0x211c
                    2120   1424 _FRAME_SYNC_DET_REG0	=	0x2120
                    2124   1425 _FRAME_SYNC_DET_REG1	=	0x2124
                    2128   1426 _FRAME_SYNC_DET_REG2	=	0x2128
                    212C   1427 _FRAME_SYNC_DET_REG3	=	0x212c
                    2130   1428 _FRAME_SYNC_DET_REG4	=	0x2130
                    2134   1429 _FRAME_SYNC_DET_REG5	=	0x2134
                    2138   1430 _FRAME_SYNC_DET_REG6	=	0x2138
                    213C   1431 _CDR_LOCK_REG	=	0x213c
                    2140   1432 _RX_LANE_INTERRUPT	=	0x2140
                    2144   1433 _RX_LANE_INTERRUPT_MASK	=	0x2144
                    2148   1434 _RX_DATA_PATH_REG	=	0x2148
                    214C   1435 _INPUT_RX_PIN_REG3_LANE	=	0x214c
                    2150   1436 _RX_CALIBRATION_REG	=	0x2150
                    2158   1437 _RX_LANE_INTERRUPT_REG1	=	0x2158
                    2160   1438 _DTL_REG0	=	0x2160
                    2164   1439 _DTL_REG1	=	0x2164
                    2168   1440 _DTL_REG2	=	0x2168
                    216C   1441 _DTL_REG3	=	0x216c
                    2170   1442 _SQ_REG0	=	0x2170
                    4000   1443 _LANE_CFG0	=	0x4000
                    4004   1444 _LANE_STATUS0	=	0x4004
                    4008   1445 _LANE_CFG_STATUS2_LANE	=	0x4008
                    400C   1446 _LANE_CFG2_LANE	=	0x400c
                    4010   1447 _LANE_CFG4	=	0x4010
                    4014   1448 _LANE_CFG_STATUS3_LANE	=	0x4014
                    4018   1449 _LANE_DP_PIE8_CFG0_LANE	=	0x4018
                    401C   1450 _LANE_USB_DP_CFG1_LANE	=	0x401c
                    4020   1451 _LANE_USB_DP_CFG2_LANE	=	0x4020
                    4024   1452 _LANE_EQ_CFG0_LANE	=	0x4024
                    4028   1453 _LANE_EQ_CFG1_LANE	=	0x4028
                    402C   1454 _LANE_PRESET_CFG0_LANE	=	0x402c
                    4030   1455 _LANE_PRESET_CFG2_LANE	=	0x4030
                    4034   1456 _LANE_PRESET_CFG4_LANE	=	0x4034
                    4038   1457 _LANE_PRESET_CFG6_LANE	=	0x4038
                    403C   1458 _LANE_PRESET_CFG8_LANE	=	0x403c
                    4040   1459 _LANE_PRESET_CFG10_LANE	=	0x4040
                    4044   1460 _LANE_PRESET_CFG12_LANE	=	0x4044
                    4048   1461 _LANE_PRESET_CFG14_LANE	=	0x4048
                    404C   1462 _LANE_PRESET_CFG16_LANE	=	0x404c
                    4050   1463 _LANE_COEFF_MAX0_LANE	=	0x4050
                    4054   1464 _LANE_REMOTE_SET_LANE	=	0x4054
                    4058   1465 _LANE_EQ_16G_CFG0_LANE	=	0x4058
                    405C   1466 _LANE_16G_PRESET_CFG0_LANE	=	0x405c
                    4060   1467 _LANE_16G_PRESET_CFG2_LANE	=	0x4060
                    4064   1468 _LANE_16G_PRESET_CFG4_LANE	=	0x4064
                    4068   1469 _LANE_16G_PRESET_CFG6_LANE	=	0x4068
                    406C   1470 _LANE_16G_PRESET_CFG8_LANE	=	0x406c
                    4070   1471 _LANE_16G_PRESET_CFG10_LANE	=	0x4070
                    4074   1472 _LANE_16G_PRESET_CFG12_LANE	=	0x4074
                    4078   1473 _LANE_16G_PRESET_CFG14_LANE	=	0x4078
                    407C   1474 _LANE_16G_PRESET_CFG16_LANE	=	0x407c
                    4080   1475 _LANE_EQ_32G_CFG0_LANE	=	0x4080
                    4084   1476 _LANE_32G_PRESET_CFG0_LANE	=	0x4084
                    4088   1477 _LANE_32G_PRESET_CFG2_LANE	=	0x4088
                    408C   1478 _LANE_32G_PRESET_CFG4_LANE	=	0x408c
                    4090   1479 _LANE_32G_PRESET_CFG6_LANE	=	0x4090
                    4094   1480 _LANE_32G_PRESET_CFG8_LANE	=	0x4094
                    4098   1481 _LANE_32G_PRESET_CFG10_LANE	=	0x4098
                    409C   1482 _LANE_32G_PRESET_CFG12_LANE	=	0x409c
                    40A0   1483 _LANE_32G_PRESET_CFG14_LANE	=	0x40a0
                    40A4   1484 _LANE_32G_PRESET_CFG16_LANE	=	0x40a4
                    2200   1485 _MCU_CONTROL_LANE	=	0x2200
                    2204   1486 _MCU_GPIO	=	0x2204
                    2208   1487 _CACHE_DEBUG0	=	0x2208
                    220C   1488 _CACHE_DEBUG1	=	0x220c
                    2210   1489 _LANE_SYSTEM0	=	0x2210
                    2230   1490 _MCU_STATUS0_LANE	=	0x2230
                    2234   1491 _MCU_STATUS1_LANE	=	0x2234
                    2238   1492 _MCU_STATUS2_LANE	=	0x2238
                    223C   1493 _MCU_STATUS3_LANE	=	0x223c
                    2240   1494 _MCU_INT0_CONTROL	=	0x2240
                    2244   1495 _MCU_INT1_CONTROL	=	0x2244
                    2248   1496 _MCU_INT2_CONTROL	=	0x2248
                    224C   1497 _MCU_INT3_CONTROL	=	0x224c
                    2250   1498 _MCU_INT4_CONTROL	=	0x2250
                    2254   1499 _MCU_INT5_CONTROL	=	0x2254
                    2258   1500 _MCU_INT6_CONTROL	=	0x2258
                    225C   1501 _MCU_INT7_CONTROL	=	0x225c
                    2260   1502 _MCU_INT8_CONTROL	=	0x2260
                    2264   1503 _MCU_INT9_CONTROL	=	0x2264
                    2268   1504 _MCU_INT10_CONTROL	=	0x2268
                    226C   1505 _MCU_INT11_CONTROL	=	0x226c
                    2270   1506 _MCU_INT12_CONTROL	=	0x2270
                    2274   1507 _MCU_TIMER_CONTROL	=	0x2274
                    2278   1508 _MCU_TIMER0_CONTROL	=	0x2278
                    227C   1509 _MCU_TIMER1_CONTROL	=	0x227c
                    2280   1510 _MCU_TIMER2_CONTROL	=	0x2280
                    2284   1511 _MCU_TIMER3_CONTROL	=	0x2284
                    2288   1512 _MCU_IRQ_LANE	=	0x2288
                    228C   1513 _MCU_IRQ_MASK_LANE	=	0x228c
                    2290   1514 _MCU_MEM_REG1_LANE	=	0x2290
                    2294   1515 _MCU_MEM_REG2_LANE	=	0x2294
                    2298   1516 _MCU_TIMER_CTRL_1_LANE	=	0x2298
                    229C   1517 _MCU_TIMER_CTRL_2_LANE	=	0x229c
                    22A0   1518 _MCU_TIMER_CTRL_3_LANE	=	0x22a0
                    22A4   1519 _MCU_TIMER_CTRL_4_LANE	=	0x22a4
                    22A8   1520 _MCU_TIMER_CTRL_5_LANE	=	0x22a8
                    22AC   1521 _MCU_TIMER_CTRL_6_LANE	=	0x22ac
                    22B0   1522 _MCU_TIMER_CTRL_7_LANE	=	0x22b0
                    22B4   1523 _MCU_DEBUG0_LANE	=	0x22b4
                    22B8   1524 _MCU_DEBUG1_LANE	=	0x22b8
                    22BC   1525 _MCU_DEBUG2_LANE	=	0x22bc
                    22C0   1526 _MCU_DEBUG3_LANE	=	0x22c0
                    22C4   1527 _MCU_DEBUG_LANE	=	0x22c4
                    22C8   1528 _EXT_INT_CONTROL	=	0x22c8
                    22CC   1529 _ANA_IF_TRX_REG0	=	0x22cc
                    22D0   1530 _ANA_IF_DFEE_REG0	=	0x22d0
                    22D4   1531 _ANA_IF_DFEO_REG0	=	0x22d4
                    22D8   1532 _MCU_IRQ_ISR_LANE	=	0x22d8
                    22DC   1533 _MCU_WDT_LANE	=	0x22dc
                    22E0   1534 _MCU_INT_CONTROL_13	=	0x22e0
                    22E4   1535 _MCU_COMMAND0	=	0x22e4
                    22F4   1536 _MEM_ECC_ERR_ADDRESS0	=	0x22f4
                    22F8   1537 _XDATA_MEM_CHECKSUM_LANE0	=	0x22f8
                    22FC   1538 _XDATA_MEM_CHECKSUM_LANE1	=	0x22fc
                    2300   1539 _PT_CONTROL0	=	0x2300
                    2304   1540 _PT_CONTROL1	=	0x2304
                    2308   1541 _PT_USER_PATTERN0	=	0x2308
                    230C   1542 _PT_USER_PATTERN1	=	0x230c
                    2310   1543 _PT_USER_PATTERN2	=	0x2310
                    2314   1544 _PT_COUNTER0	=	0x2314
                    2318   1545 _PT_COUNTER1	=	0x2318
                    231C   1546 _PT_COUNTER2	=	0x231c
                    2400   1547 _DFE_CTRL_REG0	=	0x2400
                    2404   1548 _DFE_CTRL_REG1	=	0x2404
                    2408   1549 _DFE_CTRL_REG2	=	0x2408
                    240C   1550 _DFE_CTRL_REG3	=	0x240c
                    2410   1551 _RX_EQ_CLK_CTRL	=	0x2410
                    2414   1552 _DFE_CTRL_REG4	=	0x2414
                    2418   1553 _DFE_ANA_REG0	=	0x2418
                    241C   1554 _DFE_ANA_REG1	=	0x241c
                    2420   1555 _DFE_STEP_REG0	=	0x2420
                    2424   1556 _DFE_STEP_REG1	=	0x2424
                    2430   1557 _DFE_FEN_EVEN_REG	=	0x2430
                    2434   1558 _DFE_FEN_ODD_REG	=	0x2434
                    2438   1559 _DFE_DC_EVEN_REG8	=	0x2438
                    243C   1560 _DFE_DC_ODD_REG8	=	0x243c
                    2440   1561 _DFE_FEXT_EVEN_REG0	=	0x2440
                    2444   1562 _DFE_FEXT_EVEN_REG1	=	0x2444
                    2448   1563 _DFE_FEXT_EVEN_REG2	=	0x2448
                    244C   1564 _DFE_FEXT_EVEN_REG3	=	0x244c
                    2450   1565 _DFE_FEXT_EVEN_REG4	=	0x2450
                    2454   1566 _DFE_FEXT_EVEN_REG5	=	0x2454
                    2458   1567 _DFE_FEXT_EVEN_REG6	=	0x2458
                    245C   1568 _DFE_FEXT_EVEN_REG7	=	0x245c
                    2460   1569 _DFE_FEXT_ODD_REG0	=	0x2460
                    2464   1570 _DFE_FEXT_ODD_REG1	=	0x2464
                    2468   1571 _DFE_FEXT_ODD_REG2	=	0x2468
                    246C   1572 _DFE_FEXT_ODD_REG3	=	0x246c
                    2470   1573 _DFE_FEXT_ODD_REG4	=	0x2470
                    2474   1574 _DFE_FEXT_ODD_REG5	=	0x2474
                    2478   1575 _DFE_FEXT_ODD_REG6	=	0x2478
                    247C   1576 _DFE_FEXT_ODD_REG7	=	0x247c
                    2480   1577 _DFE_READ_EVEN_SM_REG0	=	0x2480
                    2484   1578 _DFE_READ_EVEN_SM_REG1	=	0x2484
                    2488   1579 _DFE_READ_EVEN_SM_REG2	=	0x2488
                    248C   1580 _DFE_READ_EVEN_SM_REG3	=	0x248c
                    2490   1581 _DFE_READ_EVEN_SM_REG4	=	0x2490
                    2494   1582 _DFE_READ_EVEN_SM_REG5	=	0x2494
                    2498   1583 _DFE_READ_EVEN_SM_REG6	=	0x2498
                    249C   1584 _DFE_READ_EVEN_SM_REG7	=	0x249c
                    24A0   1585 _DFE_READ_ODD_SM_REG0	=	0x24a0
                    24A4   1586 _DFE_READ_ODD_SM_REG1	=	0x24a4
                    24A8   1587 _DFE_READ_ODD_SM_REG2	=	0x24a8
                    24AC   1588 _DFE_READ_ODD_SM_REG3	=	0x24ac
                    24B0   1589 _DFE_READ_ODD_SM_REG4	=	0x24b0
                    24B4   1590 _DFE_READ_ODD_SM_REG5	=	0x24b4
                    24B8   1591 _DFE_READ_ODD_SM_REG6	=	0x24b8
                    24BC   1592 _DFE_READ_ODD_SM_REG7	=	0x24bc
                    24C0   1593 _DFE_READ_EVEN_SM_REG8	=	0x24c0
                    24C4   1594 _DFE_READ_ODD_SM_REG8	=	0x24c4
                    24D0   1595 _DFE_READ_EVEN_2C_REG0	=	0x24d0
                    24D4   1596 _DFE_READ_EVEN_2C_REG1	=	0x24d4
                    24D8   1597 _DFE_READ_EVEN_2C_REG2	=	0x24d8
                    24DC   1598 _DFE_READ_EVEN_2C_REG3	=	0x24dc
                    24E0   1599 _DFE_READ_EVEN_2C_REG4	=	0x24e0
                    24E4   1600 _DFE_READ_EVEN_2C_REG5	=	0x24e4
                    24E8   1601 _DFE_READ_EVEN_2C_REG6	=	0x24e8
                    24EC   1602 _DFE_READ_EVEN_2C_REG7	=	0x24ec
                    24F0   1603 _DFE_READ_ODD_2C_REG0	=	0x24f0
                    24F4   1604 _DFE_READ_ODD_2C_REG1	=	0x24f4
                    24F8   1605 _DFE_READ_ODD_2C_REG2	=	0x24f8
                    24FC   1606 _DFE_READ_ODD_2C_REG3	=	0x24fc
                    2500   1607 _DFE_READ_ODD_2C_REG4	=	0x2500
                    2504   1608 _DFE_READ_ODD_2C_REG5	=	0x2504
                    2508   1609 _DFE_READ_ODD_2C_REG6	=	0x2508
                    250C   1610 _DFE_READ_ODD_2C_REG7	=	0x250c
                    2510   1611 _DFE_READ_EVEN_2C_REG8	=	0x2510
                    2514   1612 _DFE_READ_ODD_2C_REG8	=	0x2514
                    2518   1613 _CAL_OFST_REG0	=	0x2518
                    251C   1614 _CAL_OFST_REG1	=	0x251c
                    2520   1615 _CAL_OFST_REG2	=	0x2520
                    2530   1616 _DFE_DCE_REG0	=	0x2530
                    2540   1617 _DFE_STATIC_LANE_REG0	=	0x2540
                    2544   1618 _DFE_STATIC_LANE_REG1	=	0x2544
                    2548   1619 _DFE_STATIC_LANE_REG3	=	0x2548
                    254C   1620 _DFE_STATIC_LANE_REG4	=	0x254c
                    2550   1621 _DFE_STATIC_LANE_REG5	=	0x2550
                    2554   1622 _DFE_STATIC_LANE_REG6	=	0x2554
                    2560   1623 _EOM_VLD_REG0	=	0x2560
                    2564   1624 _EOM_VLD_REG1	=	0x2564
                    2568   1625 _EOM_VLD_REG2	=	0x2568
                    256C   1626 _EOM_VLD_REG3	=	0x256c
                    2570   1627 _EOM_ERR_REG0	=	0x2570
                    2574   1628 _EOM_ERR_REG1	=	0x2574
                    2578   1629 _EOM_ERR_REG2	=	0x2578
                    257C   1630 _EOM_ERR_REG3	=	0x257c
                    2580   1631 _EOM_REG0	=	0x2580
                    25F0   1632 _EOM_VLD_REG4	=	0x25f0
                    25F4   1633 _LANE_MARGIN_REG0	=	0x25f4
                    6000   1634 _CAL_CTRL1_LANE	=	0x6000
                    6004   1635 _CAL_CTRL2_LANE	=	0x6004
                    6008   1636 _CAL_CTRL3_LANE	=	0x6008
                    600C   1637 _CAL_CTRL4_LANE	=	0x600c
                    6010   1638 _CAL_SAVE_DATA1_LANE	=	0x6010
                    6014   1639 _CAL_SAVE_DATA2_LANE	=	0x6014
                    6018   1640 _CAL_SAVE_DATA3_LANE	=	0x6018
                    601C   1641 _PHY_REMOTE_CTRL_COMMAND_LANE	=	0x601c
                    6020   1642 _PHY_REMOTE_CTRL_VALUE_LANE	=	0x6020
                    6024   1643 _PHY_LOCAL_VALUE_LANE	=	0x6024
                    6028   1644 _TRX_TRAIN_IF_TIMERS1_LANE	=	0x6028
                    602C   1645 _TRX_TRAIN_IF_TIMERS2_LANE	=	0x602c
                    6030   1646 _TRX_TRAIN_IF_TIMERS_ENABLE_LANE	=	0x6030
                    6034   1647 _DFE_CONTROL_0	=	0x6034
                    6038   1648 _DFE_CONTROL_1	=	0x6038
                    6040   1649 _DFE_CONTROL_2	=	0x6040
                    6044   1650 _DFE_CONTROL_3	=	0x6044
                    6048   1651 _DFE_CONTROL_4	=	0x6048
                    604C   1652 _DFE_CONTROL_5	=	0x604c
                    6050   1653 _TRAIN_CONTROL_0	=	0x6050
                    6054   1654 _TRAIN_CONTROL_1	=	0x6054
                    6058   1655 _TRAIN_CONTROL_2	=	0x6058
                    605C   1656 _RPTA_CONFIG_0	=	0x605c
                    6060   1657 _RPTA_CONFIG_1	=	0x6060
                    6064   1658 _DLL_CAL	=	0x6064
                    6068   1659 _TRAIN_PARA_0	=	0x6068
                    606C   1660 _TRAIN_PARA_1	=	0x606c
                    6070   1661 _TRAIN_PARA_2	=	0x6070
                    6074   1662 _TRAIN_PARA_3	=	0x6074
                    6078   1663 _DFE_CONTROL_6	=	0x6078
                    607C   1664 _DFE_TEST_0	=	0x607c
                    6080   1665 _DFE_TEST_1	=	0x6080
                    6084   1666 _DFE_TEST_4	=	0x6084
                    6088   1667 _DFE_TEST_5	=	0x6088
                    608C   1668 _DFE_CONTROL_7	=	0x608c
                    6090   1669 _DFE_CONTROL_8	=	0x6090
                    6094   1670 _DFE_CONTROL_9	=	0x6094
                    6098   1671 _DFE_CONTROL_10	=	0x6098
                    609C   1672 _DFE_CONTROL_11	=	0x609c
                    60A0   1673 _CDS_CTRL_REG0	=	0x60a0
                    60A4   1674 _CDS_CTRL_REG1	=	0x60a4
                    60A8   1675 _ESM_POP_P_CNT_LOW_LANE	=	0x60a8
                    60AC   1676 _ESM_ERR_P_CNT_LOW_LANE	=	0x60ac
                    60B0   1677 _ESM_ERR_POP_CNT_HIGH_LANE	=	0x60b0
                    60B4   1678 _TRAIN_CONTROL_3	=	0x60b4
                    60B8   1679 _TRAIN_CONTROL_4	=	0x60b8
                    60BC   1680 _TRAIN_CONTROL_5	=	0x60bc
                    60C0   1681 _TRAIN_CONTROL_6	=	0x60c0
                    60C4   1682 _TRAIN_CONTROL_7	=	0x60c4
                    60C8   1683 _TRAIN_CONTROL_8	=	0x60c8
                    60CC   1684 _TRAIN_CONTROL_9	=	0x60cc
                    60D0   1685 _TRAIN_CONTROL_10	=	0x60d0
                    60D4   1686 _TRAIN_CONTROL_11	=	0x60d4
                    60D8   1687 _TRAIN_CONTROL_12	=	0x60d8
                    60DC   1688 _ESM_POP_N_CNT_LOW_LANE	=	0x60dc
                    60E0   1689 _ESM_ERR_N_CNT_LOW_LANE	=	0x60e0
                    60E4   1690 _TRAIN_CONTROL_13	=	0x60e4
                    60E8   1691 _TRAIN_CONTROL_14	=	0x60e8
                    60EC   1692 _TRAIN_CONTROL_15	=	0x60ec
                    60F0   1693 _TRAIN_CONTROL_16	=	0x60f0
                    60F4   1694 _TRAIN_CONTROL_17	=	0x60f4
                    60F8   1695 _END_XDAT_LANE	=	0x60f8
                    A000   1696 _TX_CMN_REG	=	0xa000
                    A008   1697 _DTX_REG0	=	0xa008
                    A00C   1698 _DTX_REG1	=	0xa00c
                    A010   1699 _DTX_REG2	=	0xa010
                    A014   1700 _DTX_REG3	=	0xa014
                    A018   1701 _DTX_REG4	=	0xa018
                    A01C   1702 _DTX_PHY_ALIGN_REG0	=	0xa01c
                    A024   1703 _DTX_PHY_ALIGN_REG1	=	0xa024
                    A028   1704 _DTX_PHY_ALIGN_REG2	=	0xa028
                    A02C   1705 _SRIS_REG0	=	0xa02c
                    A030   1706 _SRIS_REG1	=	0xa030
                    A100   1707 _RX_CMN_0	=	0xa100
                    A110   1708 _DFE_STATIC_REG0	=	0xa110
                    A114   1709 _DFE_STATIC_REG1	=	0xa114
                    A118   1710 _DFE_STATIC_REG3	=	0xa118
                    A11C   1711 _DFE_STATIC_REG4	=	0xa11c
                    A120   1712 _DFE_STATIC_REG5	=	0xa120
                    A124   1713 _DFE_STATIC_REG6	=	0xa124
                    4200   1714 _GLOB_RST_CLK_CTRL	=	0x4200
                    4204   1715 _GLOB_CLK_SRC_LO	=	0x4204
                    4208   1716 _GLOB_CLK_SRC_HI	=	0x4208
                    420C   1717 _GLOB_MISC_CTRL	=	0x420c
                    4210   1718 _GLOB_DP_SAL_CFG	=	0x4210
                    4214   1719 _GLOB_DP_SAL_CFG1	=	0x4214
                    4218   1720 _GLOB_DP_SAL_CFG3	=	0x4218
                    421C   1721 _GLOB_DP_SAL_CFG5	=	0x421c
                    4220   1722 _GLOB_PM_CFG0	=	0x4220
                    4224   1723 _GLOB_COUNTER_CTRL	=	0x4224
                    4228   1724 _GLOB_COUNTER_HI	=	0x4228
                    422C   1725 _GLOB_PM_DP_CTRL	=	0x422c
                    4230   1726 _GLOB_DP_BAL_CFG0	=	0x4230
                    4234   1727 _GLOB_DP_BAL_CFG2	=	0x4234
                    4238   1728 _GLOB_DP_BAL_CFG4	=	0x4238
                    423C   1729 _GLOB_BIST_CTRL	=	0x423c
                    4240   1730 _GLOB_BIST_LANE_TYPE	=	0x4240
                    4244   1731 _GLOB_BIST_START	=	0x4244
                    4248   1732 _GLOB_BIST_MASK	=	0x4248
                    424C   1733 _GLOB_BIST_RESULT	=	0x424c
                    4250   1734 _GLOB_BIST_SEQR_CFG	=	0x4250
                    4254   1735 _GLOB_BIST_DATA_HI	=	0x4254
                    4258   1736 _GLOB_PIPE_REVISION	=	0x4258
                    425C   1737 _GLOB_L1_SUBSTATES_CFG	=	0x425c
                    A200   1738 _MCU_CONTROL_0	=	0xa200
                    A204   1739 _MCU_CONTROL_1	=	0xa204
                    A208   1740 _MCU_CONTROL_2	=	0xa208
                    A20C   1741 _MCU_CONTROL_3	=	0xa20c
                    A210   1742 _MCU_CONTROL_4	=	0xa210
                    A214   1743 _MCU_DEBUG0	=	0xa214
                    A218   1744 _MCU_DEBUG1	=	0xa218
                    A21C   1745 _MEMORY_CONTROL_0	=	0xa21c
                    A220   1746 _MEMORY_CONTROL_1	=	0xa220
                    A224   1747 _MEMORY_CONTROL_2	=	0xa224
                    A228   1748 _MEMORY_CONTROL_3	=	0xa228
                    A22C   1749 _MEMORY_CONTROL_4	=	0xa22c
                    A234   1750 _MCU_INFO_0	=	0xa234
                    A238   1751 _MCU_INFO_1	=	0xa238
                    A23C   1752 _MCU_INFO_2	=	0xa23c
                    A240   1753 _MCU_INFO_3	=	0xa240
                    A244   1754 _MEM_CMN_ECC_ERR_ADDRESS0	=	0xa244
                    A2E0   1755 _ANA_IF_CMN_REG1	=	0xa2e0
                    A2E4   1756 _MEM_IRQ	=	0xa2e4
                    A2E8   1757 _MEM_IRQ_MASK	=	0xa2e8
                    A2EC   1758 _ANA_IF_CMN_REG0	=	0xa2ec
                    A2F0   1759 _APB_CONTROL_REG	=	0xa2f0
                    A2F4   1760 _MEM_IRQ_CLEAR	=	0xa2f4
                    A2F8   1761 _MCU_SYNC1	=	0xa2f8
                    A2FC   1762 _MCU_SYNC2	=	0xa2fc
                    A300   1763 _TEST0	=	0xa300
                    A304   1764 _TEST1	=	0xa304
                    A308   1765 _TEST2	=	0xa308
                    A30C   1766 _TEST3	=	0xa30c
                    A310   1767 _TEST4	=	0xa310
                    A314   1768 _SYSTEM	=	0xa314
                    A318   1769 _PM_CMN_REG1	=	0xa318
                    A31C   1770 _INPUT_CMN_PIN_REG0	=	0xa31c
                    A320   1771 _INPUT_CMN_PIN_REG1	=	0xa320
                    A324   1772 _INPUT_CMN_PIN_REG2	=	0xa324
                    A328   1773 _ANA_TSEN_CONTROL	=	0xa328
                    A32C   1774 _PLLCAL_REG0	=	0xa32c
                    A330   1775 _PLLCAL_REG1	=	0xa330
                    A334   1776 _CLKGEN_CMN_REG1	=	0xa334
                    A338   1777 _SPD_CMN_REG1	=	0xa338
                    A33C   1778 _OUTPUT_CMN_PIN_REG0	=	0xa33c
                    A340   1779 _CMN_CALIBRATION	=	0xa340
                    A344   1780 __FIELDNAME_	=	0xa344
                    A348   1781 _INPUT_CMN_PIN_REG3	=	0xa348
                    A34C   1782 _PM_CMN_REG2	=	0xa34c
                    A354   1783 _TEST5	=	0xa354
                    A358   1784 _XDATA_MEM_CHECKSUM_CMN_0	=	0xa358
                    A35C   1785 _XDATA_MEM_CHECKSUM_CMN_1	=	0xa35c
                    A360   1786 _XDATA_MEM_CHECKSUM_CMN_2	=	0xa360
                    A364   1787 _MCU_SDT_CMN	=	0xa364
                    A368   1788 _CMN_CACHE_DEBUG0	=	0xa368
                    A36C   1789 _MCU_INT_ADDR	=	0xa36c
                    A370   1790 _CMN_ISR_2	=	0xa370
                    A374   1791 _CMN_ISR_MASK_2	=	0xa374
                    A378   1792 _CMN_ISR_CLEAR_2	=	0xa378
                    A37C   1793 _CMN_MCU_GPIO	=	0xa37c
                    A380   1794 _CMN_CACHE_DEBUG1	=	0xa380
                    A384   1795 _CMN_MCU_TIMER_CONTROL	=	0xa384
                    A388   1796 _CMN_MCU_TIMER_CTRL_2_LANE	=	0xa388
                    A38C   1797 _CMN_MCU_TIMER_CTRL_3_LANE	=	0xa38c
                    A390   1798 _CMN_MCU_TIMER_CTRL_4_LANE	=	0xa390
                    A394   1799 _CMN_MCU_TIMER_CTRL_5_LANE	=	0xa394
                    A398   1800 _CMN_MCU_TIMER0_CONTROL	=	0xa398
                    A39C   1801 _CMN_MCU_TIMER1_CONTROL	=	0xa39c
                    A3A0   1802 _CMN_MCU_TIMER2_CONTROL	=	0xa3a0
                    A3A4   1803 _CMN_MCU_TIMER3_CONTROL	=	0xa3a4
                    A3A8   1804 _CMN_ISR_1	=	0xa3a8
                    A3AC   1805 _CMN_ISR_MASK_1	=	0xa3ac
                    A3B0   1806 _SET_LANE_ISR	=	0xa3b0
                    A3F4   1807 _CMN_MCU_REG	=	0xa3f4
                    A3F8   1808 _CID_REG0	=	0xa3f8
                    A3FC   1809 _CID_REG1	=	0xa3fc
                    E600   1810 _FW_REV	=	0xe600
                    E604   1811 _CONTROL_CONFIG0	=	0xe604
                    E608   1812 _CONTROL_CONFIG1	=	0xe608
                    E60C   1813 _CONTROL_CONFIG2	=	0xe60c
                    E610   1814 _CONTROL_CONFIG3	=	0xe610
                    E614   1815 _CONTROL_CONFIG4	=	0xe614
                    E618   1816 _CONTROL_CONFIG5	=	0xe618
                    E61C   1817 _CONTROL_CONFIG6	=	0xe61c
                    E620   1818 _CONTROL_CONFIG7	=	0xe620
                    E624   1819 _CAL_DATA0	=	0xe624
                    E628   1820 _TRAIN_IF_CONFIG	=	0xe628
                    E62C   1821 _CONTROL_CONFIG8	=	0xe62c
                    E630   1822 _CONTROL_CONFIG9	=	0xe630
                    E634   1823 _CON_CAL_STEP_SIZE1	=	0xe634
                    E638   1824 _CON_CAL_STEP_SIZE2	=	0xe638
                    E63C   1825 _CON_CAL_STEP_SIZE3	=	0xe63c
                    E640   1826 _CON_CAL_STEP_SIZE4	=	0xe640
                    E644   1827 _CON_CAL_STEP_SIZE5	=	0xe644
                    E648   1828 _CAL_TIME_OUT_AND_DIS	=	0xe648
                    E64C   1829 _CAL_STATUS_READ	=	0xe64c
                    E650   1830 _MCU_CONFIG	=	0xe650
                    E654   1831 _CAL_DATA1	=	0xe654
                    E658   1832 _LOOP_CNTS	=	0xe658
                    E65C   1833 _MCU_CONFIG1	=	0xe65c
                    E660   1834 _TIMER_SEL1	=	0xe660
                    E664   1835 _TIMER_SEL2	=	0xe664
                    E668   1836 _TIMER_SEL3	=	0xe668
                    E66C   1837 _G_SELLV_TXCLK	=	0xe66c
                    E670   1838 _G_SELLV_TXDATA	=	0xe670
                    E674   1839 _G_SELLV_TXPRE	=	0xe674
                    E678   1840 _G_SELLV_RXEOMCLK	=	0xe678
                    E67C   1841 _G_SELLV_RXDATACLK	=	0xe67c
                    E680   1842 _G_SELLV_RXSAMPLER	=	0xe680
                    E684   1843 _SAS_PRESET0_TB	=	0xe684
                    E688   1844 _SAS_PRESET1_TB	=	0xe688
                    E68C   1845 _SAS_PRESET2_TB	=	0xe68c
                    E690   1846 _ETH_PRESET0_TB	=	0xe690
                    E694   1847 _ETH_PRESET1_TB	=	0xe694
                    E698   1848 _TX_SAVE_0	=	0xe698
                    E69C   1849 _TX_SAVE_1	=	0xe69c
                    E6A0   1850 _TX_SAVE_2	=	0xe6a0
                    E6A4   1851 _TX_SAVE_3	=	0xe6a4
                    E6A8   1852 _TX_SAVE_4	=	0xe6a8
                    E6AC   1853 _CDS_EYE_CLK_THR	=	0xe6ac
                    E6B0   1854 _SYNC_INFO	=	0xe6b0
                    E6B4   1855 _MCU_INFO_4	=	0xe6b4
                    E6B8   1856 _MCU_INFO_5	=	0xe6b8
                    E6BC   1857 _MCU_INFO_12	=	0xe6bc
                    E6C0   1858 _MCU_INFO_13	=	0xe6c0
                    E6C4   1859 _END_XDAT_CMN	=	0xe6c4
                    2600   1860 _DME_ENC_REG0	=	0x2600
                    2604   1861 _DME_ENC_REG1	=	0x2604
                    2608   1862 _DME_ENC_REG2	=	0x2608
                    260C   1863 _DME_DEC_REG0	=	0x260c
                    2610   1864 _DME_DEC_REG1	=	0x2610
                    2614   1865 _TX_TRAIN_IF_REG0	=	0x2614
                    2618   1866 _TX_TRAIN_IF_REG1	=	0x2618
                    261C   1867 _TX_TRAIN_IF_REG2	=	0x261c
                    2620   1868 _TX_TRAIN_IF_REG3	=	0x2620
                    2624   1869 _TX_TRAIN_PATTTERN_REG0	=	0x2624
                    2628   1870 _TX_TRAIN_DRIVER_REG0	=	0x2628
                    262C   1871 _TX_TRAIN_DRIVER_REG1	=	0x262c
                    2630   1872 _TX_TRAIN_DRIVER_REG2	=	0x2630
                    2634   1873 _TX_TRAIN_DEFAULT_REG0	=	0x2634
                    2638   1874 _TX_TRAIN_DEFAULT_REG1	=	0x2638
                    263C   1875 _TX_TRAIN_DEFAULT_REG2	=	0x263c
                    2640   1876 _TX_TRAIN_DEFAULT_REG3	=	0x2640
                    2644   1877 _TX_TRAIN_DEFAULT_REG4	=	0x2644
                    2648   1878 _TX_TRAIN_DEFAULT_REG5	=	0x2648
                    264C   1879 _TX_EMPH_CTRL_REG0	=	0x264c
                    2650   1880 _LINK_TRAIN_MODE0	=	0x2650
                    2654   1881 _TX_DRV_RD_OUT_REG0	=	0x2654
                    2658   1882 _TX_AMP_CTRL_REG0	=	0x2658
                    265C   1883 _TRX_TRAIN_IF_INTERRUPT_LANE	=	0x265c
                    2660   1884 _TRX_TRAIN_IF_INTERRUPT_MASK0_LANE	=	0x2660
                    2664   1885 _TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE	=	0x2664
                    2668   1886 _TX_TRAIN_IF_REG4	=	0x2668
                    266C   1887 _TX_TRAIN_IF_REG5	=	0x266c
                    2670   1888 _TX_TRAIN_IF_REG6	=	0x2670
                    2674   1889 _TX_TRAIN_IF_REG7	=	0x2674
                    2678   1890 _TX_TRAIN_CTRL_LANE	=	0x2678
                    267C   1891 _TX_TRAIN_IF_REG8	=	0x267c
                    6100   1892 _DFE_READ_EVEN_REG0	=	0x6100
                    6104   1893 _DFE_READ_EVEN_REG1	=	0x6104
                    6108   1894 _DFE_READ_EVEN_REG2	=	0x6108
                    610C   1895 _DFE_READ_EVEN_REG3	=	0x610c
                    6110   1896 _DFE_READ_EVEN_REG4	=	0x6110
                    6114   1897 _DFE_READ_EVEN_REG5	=	0x6114
                    6118   1898 _DFE_READ_EVEN_REG6	=	0x6118
                    611C   1899 _DFE_READ_EVEN_REG7	=	0x611c
                    6120   1900 _DFE_READ_ODD_REG0	=	0x6120
                    6124   1901 _DFE_READ_ODD_REG1	=	0x6124
                    6128   1902 _DFE_READ_ODD_REG2	=	0x6128
                    612C   1903 _DFE_READ_ODD_REG3	=	0x612c
                    6130   1904 _DFE_READ_ODD_REG4	=	0x6130
                    6134   1905 _DFE_READ_ODD_REG5	=	0x6134
                    6138   1906 _DFE_READ_ODD_REG6	=	0x6138
                    613C   1907 _DFE_READ_ODD_REG7	=	0x613c
                    6140   1908 _DFE_READ_EVEN_REG8	=	0x6140
                    6144   1909 _DFE_READ_ODD_REG8	=	0x6144
                    6148   1910 _DFE_READ_F0A_EVEN	=	0x6148
                    614C   1911 _DFE_READ_F0A_ODD	=	0x614c
                    6150   1912 _DFE_READ_F0B_EVEN	=	0x6150
                    6154   1913 _DFE_READ_F0B_ODD	=	0x6154
                    6158   1914 _DFE_READ_F0D_EVEN	=	0x6158
                    615C   1915 _DFE_READ_F0D_ODD	=	0x615c
                    6160   1916 _DFE_READ_F0D_LEFT_EVEN	=	0x6160
                    6164   1917 _DFE_READ_F0D_LEFT_ODD	=	0x6164
                    6168   1918 _DFE_READ_F0D_RIGHT_EVEN	=	0x6168
                    616C   1919 _DFE_READ_F0D_RIGHT_ODD	=	0x616c
                    6170   1920 _CDS_READ_MISC0	=	0x6170
                    6174   1921 _CDS_READ_MISC1	=	0x6174
                    6214   1922 _TXTRAIN_IF_REG0	=	0x6214
                    E000   1923 _lc_speedtable	=	0xe000
                    E1C0   1924 _ring_speedtable	=	0xe1c0
                    E5C0   1925 _phy_mode_cmn_table	=	0xe5c0
                    6300   1926 _max_gen	=	0x6300
                    6301   1927 _min_gen	=	0x6301
                    6304   1928 _speedtable	=	0x6304
                    65D4   1929 _phy_mode_lane_table	=	0x65d4
                    60B4   1930 _rc_save	=	0x60b4
                    60D0   1931 _txffe_save	=	0x60d0
                    60E4   1932 _phase_save	=	0x60e4
                    6030   1933 _train_gn1_index	=	0x6030
                    6031   1934 _train_g1_index	=	0x6031
                    6032   1935 _train_g0_index	=	0x6032
                    E6B0   1936 _local_tx_preset_tb	=	0xe6b0
                    E5C1   1937 _cmx_cal_lcvco_dac	=	0xe5c1
                    E5C1   1938 _cmx_cal_lcvco_dac_lsb	=	0xe5c1
                    E5C4   1939 _cmx_cal_lcvco_dac_msb	=	0xe5c4
                    E5CA   1940 _cmx_cal_lccap_msb	=	0xe5ca
                    E5C8   1941 _cmx_cal_lccap_lsb	=	0xe5c8
                    E5CC   1942 _cmx_cal_plldcc	=	0xe5cc
                    E5D0   1943 _cmx_cal_pll_speed_ring	=	0xe5d0
                    E5D4   1944 _cmx_cal_pll_sllp_dac_coarse_ring	=	0xe5d4
                    E5D8   1945 _cmx_cal_sllp_dac_fine_ring	=	0xe5d8
                    65D4   1946 _lnx_cal_txdcc_pdiv	=	0x65d4
                    65D8   1947 _lnx_cal_txdcc_pdiv_hg	=	0x65d8
                    65DA   1948 _lnx_cal_txdcc	=	0x65da
                    65DE   1949 _lnx_cal_txdcc_hg	=	0x65de
                    65E0   1950 _lnx_cal_rxdcc_dll	=	0x65e0
                    65E4   1951 _lnx_cal_rxdcc_dll_hg	=	0x65e4
                    65E6   1952 _lnx_cal_rxdcc_data	=	0x65e6
                    65F0   1953 _lnx_cal_rxdcc_data_hg	=	0x65f0
                    65F5   1954 _lnx_cal_rxdcc_eom	=	0x65f5
                    65FF   1955 _lnx_cal_rxdcc_eom_hg	=	0x65ff
                    6604   1956 _lnx_cal_dll_gmsel	=	0x6604
                    6606   1957 _lnx_cal_vdda_dll_sel	=	0x6606
                    660A   1958 _lnx_cal_dll_eom_gmsel	=	0x660a
                    660C   1959 _lnx_cal_vdda_dll_eom_sel	=	0x660c
                    6610   1960 _lnx_cal_eom_dpher	=	0x6610
                    6612   1961 _lnx_cal_align90_dummy_clk	=	0x6612
                    661A   1962 _lnx_cal_align90_dac	=	0x661a
                    6622   1963 _lnx_cal_align90_gm	=	0x6622
                    662A   1964 _lnx_cal_sellv_txdata	=	0x662a
                    6634   1965 _lnx_cal_sellv_txclk	=	0x6634
                    663E   1966 _lnx_cal_sellv_rxdataclk	=	0x663e
                    6648   1967 _lnx_cal_sellv_txpre	=	0x6648
                    6652   1968 _lnx_cal_sellv_rxsampler	=	0x6652
                    665C   1969 _lnx_cal_sellv_rxeomclk	=	0x665c
                    6666   1970 _lnx_spdoft_tx_preset_index_lane	=	0x6666
                    6490   1971 _lnx_calx_txdcc_pdiv	=	0x6490
                    6496   1972 _lnx_calx_txdcc_pdiv_hg	=	0x6496
                    6499   1973 _lnx_calx_txdcc	=	0x6499
                    649F   1974 _lnx_calx_txdcc_hg	=	0x649f
                    64A2   1975 _lnx_calx_rxdcc_dll	=	0x64a2
                    64A8   1976 _lnx_calx_rxdcc_dll_hg	=	0x64a8
                    64AB   1977 _lnx_calx_dll_gmsel	=	0x64ab
                    64AE   1978 _lnx_calx_vdda_dll_sel	=	0x64ae
                    64B4   1979 _lnx_calx_dll_eom_gmsel	=	0x64b4
                    64B7   1980 _lnx_calx_vdda_dll_eom_sel	=	0x64b7
                    64BD   1981 _lnx_calx_eom_dpher	=	0x64bd
                    64C0   1982 _lnx_calx_align90_dummy_clk	=	0x64c0
                    64CC   1983 _lnx_calx_align90_dac	=	0x64cc
                    64D8   1984 _lnx_calx_align90_gm	=	0x64d8
                    6100   1985 _cds28	=	0x6100
                    6178   1986 _dfe_sm	=	0x6178
                    61B8   1987 _dfe_sm_dc	=	0x61b8
                    61C0   1988 _dfe_sm_save	=	0x61c0
                    03FC   1989 _UPHY_ANAREG_REV_0	=	0x03fc
                    E684   1990 _tx_tb	=	0xe684
                    E698   1991 _train_save_tb	=	0xe698
                    607C   1992 _sq_thrs_ratio_tb	=	0x607c
                           1993 ;--------------------------------------------------------
                           1994 ; absolute external ram data
                           1995 ;--------------------------------------------------------
                           1996 	.area XABS    (ABS,XDATA)
                           1997 ;--------------------------------------------------------
                           1998 ; external initialized ram data
                           1999 ;--------------------------------------------------------
                           2000 	.area HOME    (CODE)
                           2001 	.area GSINIT0 (CODE)
                           2002 	.area GSINIT1 (CODE)
                           2003 	.area GSINIT2 (CODE)
                           2004 	.area GSINIT3 (CODE)
                           2005 	.area GSINIT4 (CODE)
                           2006 	.area GSINIT5 (CODE)
                           2007 	.area GSINIT  (CODE)
                           2008 	.area GSFINAL (CODE)
                           2009 	.area CSEG    (CODE)
                           2010 ;--------------------------------------------------------
                           2011 ; global & static initialisations
                           2012 ;--------------------------------------------------------
                           2013 	.area HOME    (CODE)
                           2014 	.area GSINIT  (CODE)
                           2015 	.area GSFINAL (CODE)
                           2016 	.area GSINIT  (CODE)
                           2017 ;--------------------------------------------------------
                           2018 ; Home
                           2019 ;--------------------------------------------------------
                           2020 	.area HOME    (CODE)
                           2021 	.area HOME    (CODE)
                           2022 ;--------------------------------------------------------
                           2023 ; code
                           2024 ;--------------------------------------------------------
                           2025 	.area CSEG    (CODE)
                           2026 ;------------------------------------------------------------
                           2027 ;Allocation info for local variables in function 'Check_EOM_Stage_fmExt'
                           2028 ;------------------------------------------------------------
                           2029 ;checked_val               Allocated to registers r2 
                           2030 ;i                         Allocated to stack - offset 1
                           2031 ;new_esm_ph                Allocated to registers r2 r3 
                           2032 ;dec_ratio                 Allocated to registers r2 
                           2033 ;eom_pop_cnt_p_shifted     Allocated to stack - offset 2
                           2034 ;sloc0                     Allocated to stack - offset 10
                           2035 ;sloc1                     Allocated to stack - offset 6
                           2036 ;------------------------------------------------------------
                           2037 ;	../../shared/src/eom.c:13: void Check_EOM_Stage_fmExt(void)
                           2038 ;	-----------------------------------------
                           2039 ;	 function Check_EOM_Stage_fmExt
                           2040 ;	-----------------------------------------
   102C                    2041 _Check_EOM_Stage_fmExt:
                    0002   2042 	ar2 = 0x02
                    0003   2043 	ar3 = 0x03
                    0004   2044 	ar4 = 0x04
                    0005   2045 	ar5 = 0x05
                    0006   2046 	ar6 = 0x06
                    0007   2047 	ar7 = 0x07
                    0000   2048 	ar0 = 0x00
                    0001   2049 	ar1 = 0x01
   102C C0 18              2050 	push	_bp
   102E E5 81              2051 	mov	a,sp
   1030 F5 18              2052 	mov	_bp,a
   1032 24 07              2053 	add	a,#0x07
   1034 F5 81              2054 	mov	sp,a
                           2055 ;	../../shared/src/eom.c:22: dec_ratio = reg_RX_SPEED_DIV_LANE_2_0&0x03;
   1036 90 02 28           2056 	mov	dptr,#_UPHY14_TRX_ANAREG_TOP_138
   1039 E0                 2057 	movx	a,@dptr
   103A 03                 2058 	rr	a
   103B 03                 2059 	rr	a
   103C 54 07              2060 	anl	a,#0x07
   103E FA                 2061 	mov	r2,a
   103F 53 02 03           2062 	anl	ar2,#0x03
                           2063 ;	../../shared/src/eom.c:24: if(lnx_ESM_EN_LANE==1 && lnx_EOM_READY_LANE==0)
   1042 90 60 5A           2064 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0002)
   1045 E0                 2065 	movx	a,@dptr
   1046 03                 2066 	rr	a
   1047 03                 2067 	rr	a
   1048 54 01              2068 	anl	a,#0x01
   104A FB                 2069 	mov	r3,a
   104B BB 01 02           2070 	cjne	r3,#0x01,00164$
   104E 80 03              2071 	sjmp	00165$
   1050                    2072 00164$:
   1050 02 11 BA           2073 	ljmp	00116$
   1053                    2074 00165$:
   1053 90 60 38           2075 	mov	dptr,#_DFE_CONTROL_1
   1056 E0                 2076 	movx	a,@dptr
   1057 30 E3 03           2077 	jnb	acc.3,00166$
   105A 02 11 BA           2078 	ljmp	00116$
   105D                    2079 00166$:
                           2080 ;	../../shared/src/eom.c:26: dfe_hardware_cont_stop();
   105D C0 02              2081 	push	ar2
   105F 78 54              2082 	mov	r0,#_dfe_hardware_cont_stop
   1061 79 91              2083 	mov	r1,#(_dfe_hardware_cont_stop >> 8)
   1063 7A 02              2084 	mov	r2,#(_dfe_hardware_cont_stop >> 16)
   1065 12 00 B3           2085 	lcall	__sdcc_banked_call
   1068 D0 02              2086 	pop	ar2
                           2087 ;	../../shared/src/eom.c:30: save_pu_f1p_s_o = reg_PU_F1P_S_O_LANE; 
   106A 90 00 60           2088 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_24
   106D E0                 2089 	movx	a,@dptr
   106E C4                 2090 	swap	a
   106F 03                 2091 	rr	a
   1070 54 01              2092 	anl	a,#0x01
   1072 90 67 1D           2093 	mov	dptr,#_save_pu_f1p_s_o
   1075 F0                 2094 	movx	@dptr,a
                           2095 ;	../../shared/src/eom.c:31: save_pu_f1p_s_e = reg_PU_F1P_S_E_LANE; 
   1076 90 00 5C           2096 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_23
   1079 E0                 2097 	movx	a,@dptr
   107A 03                 2098 	rr	a
   107B 54 01              2099 	anl	a,#0x01
   107D 90 67 1E           2100 	mov	dptr,#_save_pu_f1p_s_e
   1080 F0                 2101 	movx	@dptr,a
                           2102 ;	../../shared/src/eom.c:32: save_dfe_adapt_splr = reg_DFE_ADAPT_SPLR_EN_LANE_3_0; 
   1081 90 24 00           2103 	mov	dptr,#_DFE_CTRL_REG0
   1084 E0                 2104 	movx	a,@dptr
   1085 C4                 2105 	swap	a
   1086 54 0F              2106 	anl	a,#0x0f
   1088 90 67 1F           2107 	mov	dptr,#_save_dfe_adapt_splr
   108B F0                 2108 	movx	@dptr,a
                           2109 ;	../../shared/src/eom.c:35: save_eom_en_s = reg_EOM_EN_S_LANE;
   108C 90 00 58           2110 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_22
   108F E0                 2111 	movx	a,@dptr
   1090 23                 2112 	rl	a
   1091 23                 2113 	rl	a
   1092 54 01              2114 	anl	a,#0x01
   1094 90 67 22           2115 	mov	dptr,#_save_eom_en_s
   1097 F0                 2116 	movx	@dptr,a
                           2117 ;	../../shared/src/eom.c:36: save_eom_en_d = reg_EOM_EN_D_LANE;
   1098 90 00 58           2118 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_22
   109B E0                 2119 	movx	a,@dptr
   109C C4                 2120 	swap	a
   109D 03                 2121 	rr	a
   109E 54 01              2122 	anl	a,#0x01
   10A0 90 67 23           2123 	mov	dptr,#_save_eom_en_d
   10A3 F0                 2124 	movx	@dptr,a
                           2125 ;	../../shared/src/eom.c:37: save_dfe_en = reg_DFE_EN_LANE;
   10A4 90 24 10           2126 	mov	dptr,#_RX_EQ_CLK_CTRL
   10A7 E0                 2127 	movx	a,@dptr
   10A8 C4                 2128 	swap	a
   10A9 54 01              2129 	anl	a,#0x01
   10AB 90 67 24           2130 	mov	dptr,#_save_dfe_en
   10AE F0                 2131 	movx	@dptr,a
                           2132 ;	../../shared/src/eom.c:39: save_dfe_dis = dfe_dis;
   10AF 90 66 F7           2133 	mov	dptr,#_dfe_dis
   10B2 E0                 2134 	movx	a,@dptr
   10B3 FB                 2135 	mov	r3,a
   10B4 90 67 9A           2136 	mov	dptr,#_save_dfe_dis
   10B7 F0                 2137 	movx	@dptr,a
                           2138 ;	../../shared/src/eom.c:41: dfe_dis = 0;
   10B8 90 66 F7           2139 	mov	dptr,#_dfe_dis
   10BB E4                 2140 	clr	a
   10BC F0                 2141 	movx	@dptr,a
                           2142 ;	../../shared/src/eom.c:45: if( dec_ratio == 0x3) {
   10BD BA 03 09           2143 	cjne	r2,#0x03,00104$
                           2144 ;	../../shared/src/eom.c:46: reg_PU_F1P_S_O_LANE = 1;
   10C0 90 00 60           2145 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_24
   10C3 E0                 2146 	movx	a,@dptr
   10C4 44 20              2147 	orl	a,#0x20
   10C6 F0                 2148 	movx	@dptr,a
   10C7 80 0A              2149 	sjmp	00105$
   10C9                    2150 00104$:
                           2151 ;	../../shared/src/eom.c:50: else if( dec_ratio == 0x2) {
   10C9 BA 02 07           2152 	cjne	r2,#0x02,00105$
                           2153 ;	../../shared/src/eom.c:51: reg_PU_F1P_S_E_LANE = 1;
   10CC 90 00 5C           2154 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_23
   10CF E0                 2155 	movx	a,@dptr
   10D0 44 02              2156 	orl	a,#0x02
   10D2 F0                 2157 	movx	@dptr,a
   10D3                    2158 00105$:
                           2159 ;	../../shared/src/eom.c:64: if(lnx_ESM_PATH_SEL_LANE) { 
   10D3 90 60 5A           2160 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0002)
   10D6 E0                 2161 	movx	a,@dptr
   10D7 30 E0 1D           2162 	jnb	acc.0,00113$
                           2163 ;	../../shared/src/eom.c:67: adapt_slicer_en = 1; adapt_data_en = 0;
   10DA D2 0C              2164 	setb	_adapt_slicer_en
   10DC C2 0D              2165 	clr	_adapt_data_en
                           2166 ;	../../shared/src/eom.c:68: if(dec_ratio == 0)
   10DE EA                 2167 	mov	a,r2
   10DF 70 0B              2168 	jnz	00107$
                           2169 ;	../../shared/src/eom.c:69: reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0xc; 
   10E1 90 24 00           2170 	mov	dptr,#_DFE_CTRL_REG0
   10E4 E0                 2171 	movx	a,@dptr
   10E5 54 0F              2172 	anl	a,#0x0f
   10E7 44 C0              2173 	orl	a,#0xc0
   10E9 F0                 2174 	movx	@dptr,a
   10EA 80 26              2175 	sjmp	00114$
   10EC                    2176 00107$:
                           2177 ;	../../shared/src/eom.c:71: reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0x8; 
   10EC 90 24 00           2178 	mov	dptr,#_DFE_CTRL_REG0
   10EF E0                 2179 	movx	a,@dptr
   10F0 54 0F              2180 	anl	a,#0x0f
   10F2 44 80              2181 	orl	a,#0x80
   10F4 F0                 2182 	movx	@dptr,a
   10F5 80 1B              2183 	sjmp	00114$
   10F7                    2184 00113$:
                           2185 ;	../../shared/src/eom.c:75: adapt_slicer_en = 0; adapt_data_en = 1;
   10F7 C2 0C              2186 	clr	_adapt_slicer_en
   10F9 D2 0D              2187 	setb	_adapt_data_en
                           2188 ;	../../shared/src/eom.c:76: if(dec_ratio == 0)
   10FB EA                 2189 	mov	a,r2
   10FC 70 0B              2190 	jnz	00110$
                           2191 ;	../../shared/src/eom.c:77: reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0x3; 
   10FE 90 24 00           2192 	mov	dptr,#_DFE_CTRL_REG0
   1101 E0                 2193 	movx	a,@dptr
   1102 54 0F              2194 	anl	a,#0x0f
   1104 44 30              2195 	orl	a,#0x30
   1106 F0                 2196 	movx	@dptr,a
   1107 80 09              2197 	sjmp	00114$
   1109                    2198 00110$:
                           2199 ;	../../shared/src/eom.c:79: reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0x2; 
   1109 90 24 00           2200 	mov	dptr,#_DFE_CTRL_REG0
   110C E0                 2201 	movx	a,@dptr
   110D 54 0F              2202 	anl	a,#0x0f
   110F 44 20              2203 	orl	a,#0x20
   1111 F0                 2204 	movx	@dptr,a
   1112                    2205 00114$:
                           2206 ;	../../shared/src/eom.c:82: reg_DFE_UPDATE_EN_LANE_15_0 = 0;
   1112 90 24 08           2207 	mov	dptr,#_DFE_CTRL_REG2
   1115 E4                 2208 	clr	a
   1116 F0                 2209 	movx	@dptr,a
   1117 A3                 2210 	inc	dptr
   1118 F0                 2211 	movx	@dptr,a
                           2212 ;	../../shared/src/eom.c:83: reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;
   1119 90 24 0A           2213 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0002)
   111C E0                 2214 	movx	a,@dptr
   111D 54 C0              2215 	anl	a,#0xc0
   111F F0                 2216 	movx	@dptr,a
                           2217 ;	../../shared/src/eom.c:84: reg_DFE_UPDATE_DC_EN_LANE = 0;
   1120 90 24 0A           2218 	mov	dptr,#(_DFE_CTRL_REG2 + 0x0002)
   1123 E0                 2219 	movx	a,@dptr
   1124 54 BF              2220 	anl	a,#0xbf
   1126 F0                 2221 	movx	@dptr,a
                           2222 ;	../../shared/src/eom.c:85: pol_table_loop_num_1_0 = 2; pol_table_loop_num_9_2 = 2; //10
   1127 90 24 06           2223 	mov	dptr,#(_DFE_CTRL_REG1 + 0x0002)
   112A E0                 2224 	movx	a,@dptr
   112B 54 3F              2225 	anl	a,#0x3f
   112D 44 80              2226 	orl	a,#0x80
   112F F0                 2227 	movx	@dptr,a
   1130 90 24 07           2228 	mov	dptr,#(_DFE_CTRL_REG1 + 0x0003)
   1133 74 02              2229 	mov	a,#0x02
   1135 F0                 2230 	movx	@dptr,a
                           2231 ;	../../shared/src/eom.c:86: dfe_adapt_lpnum_3_0 = 5; dfe_adapt_lpnum_9_4 = 0; //5
   1136 90 24 05           2232 	mov	dptr,#(_DFE_CTRL_REG1 + 0x0001)
   1139 E0                 2233 	movx	a,@dptr
   113A 54 0F              2234 	anl	a,#0x0f
   113C 44 50              2235 	orl	a,#0x50
   113E F0                 2236 	movx	@dptr,a
   113F 90 24 06           2237 	mov	dptr,#(_DFE_CTRL_REG1 + 0x0002)
   1142 E0                 2238 	movx	a,@dptr
   1143 54 C0              2239 	anl	a,#0xc0
   1145 F0                 2240 	movx	@dptr,a
                           2241 ;	../../shared/src/eom.c:89: dfe_save(); //save f0
   1146 78 A5              2242 	mov	r0,#_dfe_save
   1148 79 8C              2243 	mov	r1,#(_dfe_save >> 8)
   114A 7A 02              2244 	mov	r2,#(_dfe_save >> 16)
   114C 12 00 B3           2245 	lcall	__sdcc_banked_call
                           2246 ;	../../shared/src/eom.c:102: eom_align_cal(); 
   114F 78 0C              2247 	mov	r0,#_eom_align_cal
   1151 79 B0              2248 	mov	r1,#(_eom_align_cal >> 8)
   1153 7A 02              2249 	mov	r2,#(_eom_align_cal >> 16)
   1155 12 00 B3           2250 	lcall	__sdcc_banked_call
                           2251 ;	../../shared/src/eom.c:107: cal_eom_dpher = reg_EOM_DPHER_LANE_6_0;
   1158 90 00 28           2252 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_10
   115B E0                 2253 	movx	a,@dptr
   115C 03                 2254 	rr	a
   115D 54 7F              2255 	anl	a,#0x7f
   115F 90 60 45           2256 	mov	dptr,#(_DFE_CONTROL_3 + 0x0001)
   1162 F0                 2257 	movx	@dptr,a
                           2258 ;	../../shared/src/eom.c:108: PHY_STATUS = ST_NORMAL; 
   1163 90 22 30           2259 	mov	dptr,#_MCU_STATUS0_LANE
   1166 74 2B              2260 	mov	a,#0x2B
   1168 F0                 2261 	movx	@dptr,a
                           2262 ;	../../shared/src/eom.c:112: EOM_EN_D = adapt_data_en==1? 1: tag_EOM_DRIVE_DATA_EN_MODE1; //0
   1169 A2 0D              2263 	mov	c,_adapt_data_en
   116B E4                 2264 	clr	a
   116C 33                 2265 	rlc	a
   116D 90 00 58           2266 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_22
   1170 13                 2267 	rrc	a
   1171 E0                 2268 	movx	a,@dptr
   1172 92 E5              2269 	mov	acc.5,c
   1174 F0                 2270 	movx	@dptr,a
                           2271 ;	../../shared/src/eom.c:113: EOM_EN_S = adapt_slicer_en==1? 1: tag_EOM_DRIVE_DATA_EN_MODE1; 
   1175 A2 0C              2272 	mov	c,_adapt_slicer_en
   1177 E4                 2273 	clr	a
   1178 33                 2274 	rlc	a
   1179 90 00 58           2275 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_22
   117C 13                 2276 	rrc	a
   117D E0                 2277 	movx	a,@dptr
   117E 92 E6              2278 	mov	acc.6,c
   1180 F0                 2279 	movx	@dptr,a
                           2280 ;	../../shared/src/eom.c:114: EOM_EN_E = 0;
   1181 90 00 58           2281 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_22
   1184 E0                 2282 	movx	a,@dptr
   1185 54 EF              2283 	anl	a,#0xef
   1187 F0                 2284 	movx	@dptr,a
                           2285 ;	../../shared/src/eom.c:116: EOM_clock_analog_align();
   1188 78 46              2286 	mov	r0,#_EOM_clock_analog_align
   118A 79 B9              2287 	mov	r1,#(_EOM_clock_analog_align >> 8)
   118C 7A 01              2288 	mov	r2,#(_EOM_clock_analog_align >> 16)
   118E 12 00 B3           2289 	lcall	__sdcc_banked_call
                           2290 ;	../../shared/src/eom.c:123: eye_check_en = 1;		
   1191 90 25 80           2291 	mov	dptr,#_EOM_REG0
   1194 E0                 2292 	movx	a,@dptr
   1195 44 01              2293 	orl	a,#0x01
   1197 F0                 2294 	movx	@dptr,a
                           2295 ;	../../shared/src/eom.c:125: lnx_ESM_PHASE_LANE_9_0_b1 = 0; lnx_ESM_PHASE_LANE_9_0_b0 = 0;  cur_esm_phase = 0;
   1198 90 60 59           2296 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0001)
   119B E0                 2297 	movx	a,@dptr
   119C 54 FC              2298 	anl	a,#0xfc
   119E F0                 2299 	movx	@dptr,a
   119F 90 60 58           2300 	mov	dptr,#_TRAIN_CONTROL_2
   11A2 E4                 2301 	clr	a
   11A3 F0                 2302 	movx	@dptr,a
   11A4 90 67 0E           2303 	mov	dptr,#_cur_esm_phase
   11A7 F0                 2304 	movx	@dptr,a
   11A8 A3                 2305 	inc	dptr
   11A9 F0                 2306 	movx	@dptr,a
                           2307 ;	../../shared/src/eom.c:127: eom_ext_mode = 1;
   11AA 90 67 25           2308 	mov	dptr,#_eom_ext_mode
   11AD 74 01              2309 	mov	a,#0x01
   11AF F0                 2310 	movx	@dptr,a
                           2311 ;	../../shared/src/eom.c:128: lnx_EOM_READY_LANE = 1;  //release
   11B0 90 60 38           2312 	mov	dptr,#_DFE_CONTROL_1
   11B3 E0                 2313 	movx	a,@dptr
   11B4 44 08              2314 	orl	a,#0x08
   11B6 F0                 2315 	movx	@dptr,a
                           2316 ;	../../shared/src/eom.c:133: return;
   11B7 02 15 6B           2317 	ljmp	00137$
   11BA                    2318 00116$:
                           2319 ;	../../shared/src/eom.c:136: if(lnx_ESM_EN_LANE==1 && lnx_EOM_READY_LANE==1 && lnx_EOM_DFE_CALL_LANE==1)
   11BA 90 60 5A           2320 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0002)
   11BD E0                 2321 	movx	a,@dptr
   11BE 03                 2322 	rr	a
   11BF 03                 2323 	rr	a
   11C0 54 01              2324 	anl	a,#0x01
   11C2 FA                 2325 	mov	r2,a
   11C3 BA 01 02           2326 	cjne	r2,#0x01,00174$
   11C6 80 03              2327 	sjmp	00175$
   11C8                    2328 00174$:
   11C8 02 14 BF           2329 	ljmp	00125$
   11CB                    2330 00175$:
   11CB 90 60 38           2331 	mov	dptr,#_DFE_CONTROL_1
   11CE E0                 2332 	movx	a,@dptr
   11CF C4                 2333 	swap	a
   11D0 23                 2334 	rl	a
   11D1 54 01              2335 	anl	a,#0x01
   11D3 FA                 2336 	mov	r2,a
   11D4 BA 01 02           2337 	cjne	r2,#0x01,00176$
   11D7 80 03              2338 	sjmp	00177$
   11D9                    2339 00176$:
   11D9 02 14 BF           2340 	ljmp	00125$
   11DC                    2341 00177$:
   11DC 90 60 38           2342 	mov	dptr,#_DFE_CONTROL_1
   11DF E0                 2343 	movx	a,@dptr
   11E0 C4                 2344 	swap	a
   11E1 54 01              2345 	anl	a,#0x01
   11E3 FA                 2346 	mov	r2,a
   11E4 BA 01 02           2347 	cjne	r2,#0x01,00178$
   11E7 80 03              2348 	sjmp	00179$
   11E9                    2349 00178$:
   11E9 02 14 BF           2350 	ljmp	00125$
   11EC                    2351 00179$:
                           2352 ;	../../shared/src/eom.c:138: if(lnx_ESM_PHASE_LANE_9_0_b1 & 0x02) {
   11EC 90 60 59           2353 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0001)
   11EF E0                 2354 	movx	a,@dptr
   11F0 54 03              2355 	anl	a,#0x03
   11F2 FA                 2356 	mov	r2,a
   11F3 30 E1 1A           2357 	jnb	acc.1,00119$
                           2358 ;	../../shared/src/eom.c:139: new_esm_ph = 0xfc00 |  (lnx_ESM_PHASE_LANE_9_0_b1<<8) | lnx_ESM_PHASE_LANE_9_0_b0; 
   11F6 90 60 59           2359 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0001)
   11F9 E0                 2360 	movx	a,@dptr
   11FA 54 03              2361 	anl	a,#0x03
   11FC FB                 2362 	mov	r3,a
   11FD 7A 00              2363 	mov	r2,#0x00
   11FF 43 03 FC           2364 	orl	ar3,#0xFC
   1202 90 60 58           2365 	mov	dptr,#_TRAIN_CONTROL_2
   1205 E0                 2366 	movx	a,@dptr
   1206 FC                 2367 	mov	r4,a
   1207 7D 00              2368 	mov	r5,#0x00
   1209 42 02              2369 	orl	ar2,a
   120B ED                 2370 	mov	a,r5
   120C 42 03              2371 	orl	ar3,a
   120E 80 19              2372 	sjmp	00120$
   1210                    2373 00119$:
                           2374 ;	../../shared/src/eom.c:142: new_esm_ph = (lnx_ESM_PHASE_LANE_9_0_b1<<8) | lnx_ESM_PHASE_LANE_9_0_b0;
   1210 90 60 59           2375 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0001)
   1213 E0                 2376 	movx	a,@dptr
   1214 54 03              2377 	anl	a,#0x03
   1216 FD                 2378 	mov	r5,a
   1217 7C 00              2379 	mov	r4,#0x00
   1219 90 60 58           2380 	mov	dptr,#_TRAIN_CONTROL_2
   121C E0                 2381 	movx	a,@dptr
   121D FE                 2382 	mov	r6,a
   121E 7F 00              2383 	mov	r7,#0x00
   1220 42 04              2384 	orl	ar4,a
   1222 EF                 2385 	mov	a,r7
   1223 42 05              2386 	orl	ar5,a
   1225 8C 02              2387 	mov	ar2,r4
   1227 8D 03              2388 	mov	ar3,r5
   1229                    2389 00120$:
                           2390 ;	../../shared/src/eom.c:149: move_eom_phase(new_esm_ph - cur_esm_phase);
   1229 90 67 0E           2391 	mov	dptr,#_cur_esm_phase
   122C E0                 2392 	movx	a,@dptr
   122D FC                 2393 	mov	r4,a
   122E A3                 2394 	inc	dptr
   122F E0                 2395 	movx	a,@dptr
   1230 FD                 2396 	mov	r5,a
   1231 EA                 2397 	mov	a,r2
   1232 C3                 2398 	clr	c
   1233 9C                 2399 	subb	a,r4
   1234 F5 82              2400 	mov	dpl,a
   1236 EB                 2401 	mov	a,r3
   1237 9D                 2402 	subb	a,r5
   1238 F5 83              2403 	mov	dph,a
   123A C0 02              2404 	push	ar2
   123C C0 03              2405 	push	ar3
   123E 12 31 96           2406 	lcall	_move_eom_phase
   1241 D0 03              2407 	pop	ar3
   1243 D0 02              2408 	pop	ar2
                           2409 ;	../../shared/src/eom.c:150: cur_esm_phase = new_esm_ph;
   1245 90 67 0E           2410 	mov	dptr,#_cur_esm_phase
   1248 EA                 2411 	mov	a,r2
   1249 F0                 2412 	movx	@dptr,a
   124A A3                 2413 	inc	dptr
   124B EB                 2414 	mov	a,r3
   124C F0                 2415 	movx	@dptr,a
                           2416 ;	../../shared/src/eom.c:156: lnx_EOM_ERR_P_CNT_LANE_39_32 = 0;
   124D 90 60 B0           2417 	mov	dptr,#_ESM_ERR_POP_CNT_HIGH_LANE
                           2418 ;	../../shared/src/eom.c:157: ESM_ERR_P_CNT_LOW_LANE.VAL = 0;
   1250 E4                 2419 	clr	a
   1251 F0                 2420 	movx	@dptr,a
   1252 90 60 AC           2421 	mov	dptr,#_ESM_ERR_P_CNT_LOW_LANE
   1255 F0                 2422 	movx	@dptr,a
   1256 A3                 2423 	inc	dptr
   1257 F0                 2424 	movx	@dptr,a
   1258 A3                 2425 	inc	dptr
   1259 F0                 2426 	movx	@dptr,a
   125A A3                 2427 	inc	dptr
   125B F0                 2428 	movx	@dptr,a
                           2429 ;	../../shared/src/eom.c:158: lnx_EOM_POP_P_CNT_LANE_39_32 = 0;
   125C 90 60 B2           2430 	mov	dptr,#(_ESM_ERR_POP_CNT_HIGH_LANE + 0x0002)
                           2431 ;	../../shared/src/eom.c:159: ESM_POP_P_CNT_LOW_LANE.VAL = 0;
   125F E4                 2432 	clr	a
   1260 F0                 2433 	movx	@dptr,a
   1261 90 60 A8           2434 	mov	dptr,#_ESM_POP_P_CNT_LOW_LANE
   1264 F0                 2435 	movx	@dptr,a
   1265 A3                 2436 	inc	dptr
   1266 F0                 2437 	movx	@dptr,a
   1267 A3                 2438 	inc	dptr
   1268 F0                 2439 	movx	@dptr,a
   1269 A3                 2440 	inc	dptr
   126A F0                 2441 	movx	@dptr,a
                           2442 ;	../../shared/src/eom.c:161: lnx_EOM_ERR_N_CNT_LANE_39_32 = 0;
   126B 90 60 B1           2443 	mov	dptr,#(_ESM_ERR_POP_CNT_HIGH_LANE + 0x0001)
                           2444 ;	../../shared/src/eom.c:162: ESM_ERR_N_CNT_LOW_LANE.VAL = 0;
   126E E4                 2445 	clr	a
   126F F0                 2446 	movx	@dptr,a
   1270 90 60 E0           2447 	mov	dptr,#_ESM_ERR_N_CNT_LOW_LANE
   1273 F0                 2448 	movx	@dptr,a
   1274 A3                 2449 	inc	dptr
   1275 F0                 2450 	movx	@dptr,a
   1276 A3                 2451 	inc	dptr
   1277 F0                 2452 	movx	@dptr,a
   1278 A3                 2453 	inc	dptr
   1279 F0                 2454 	movx	@dptr,a
                           2455 ;	../../shared/src/eom.c:163: lnx_EOM_POP_N_CNT_LANE_39_32 = 0;
   127A 90 60 B3           2456 	mov	dptr,#(_ESM_ERR_POP_CNT_HIGH_LANE + 0x0003)
                           2457 ;	../../shared/src/eom.c:164: ESM_POP_N_CNT_LOW_LANE.VAL = 0;
   127D E4                 2458 	clr	a
   127E F0                 2459 	movx	@dptr,a
   127F 90 60 DC           2460 	mov	dptr,#_ESM_POP_N_CNT_LOW_LANE
   1282 F0                 2461 	movx	@dptr,a
   1283 A3                 2462 	inc	dptr
   1284 F0                 2463 	movx	@dptr,a
   1285 A3                 2464 	inc	dptr
   1286 F0                 2465 	movx	@dptr,a
   1287 A3                 2466 	inc	dptr
   1288 F0                 2467 	movx	@dptr,a
                           2468 ;	../../shared/src/eom.c:166: checked_val = lnx_EOM_BER_LANE_3_0;
   1289 90 60 A5           2469 	mov	dptr,#(_CDS_CTRL_REG1 + 0x0001)
   128C E0                 2470 	movx	a,@dptr
   128D 54 0F              2471 	anl	a,#0x0f
   128F FA                 2472 	mov	r2,a
                           2473 ;	../../shared/src/eom.c:168: checked_val = ( checked_val < 3 ) ? 3 : ( ( checked_val > 0xc ) ? 0xC : checked_val );
   1290 BA 03 00           2474 	cjne	r2,#0x03,00181$
   1293                    2475 00181$:
   1293 50 04              2476 	jnc	00139$
   1295 7B 03              2477 	mov	r3,#0x03
   1297 80 0F              2478 	sjmp	00140$
   1299                    2479 00139$:
   1299 74 0C              2480 	mov	a,#0x0C
   129B B5 02 00           2481 	cjne	a,ar2,00183$
   129E                    2482 00183$:
   129E 50 04              2483 	jnc	00141$
   12A0 7C 0C              2484 	mov	r4,#0x0C
   12A2 80 02              2485 	sjmp	00142$
   12A4                    2486 00141$:
   12A4 8A 04              2487 	mov	ar4,r2
   12A6                    2488 00142$:
   12A6 8C 03              2489 	mov	ar3,r4
   12A8                    2490 00140$:
   12A8 8B 02              2491 	mov	ar2,r3
                           2492 ;	../../shared/src/eom.c:169: do{
   12AA 1A                 2493 	dec	r2
   12AB 1A                 2494 	dec	r2
   12AC 1A                 2495 	dec	r2
   12AD EA                 2496 	mov	a,r2
   12AE 2A                 2497 	add	a,r2
   12AF 25 E0              2498 	add	a,acc
   12B1 24 31              2499 	add	a,#_eom_pop_threhold
   12B3 FA                 2500 	mov	r2,a
   12B4 E4                 2501 	clr	a
   12B5 34 16              2502 	addc	a,#(_eom_pop_threhold >> 8)
   12B7 FB                 2503 	mov	r3,a
   12B8                    2504 00121$:
                           2505 ;	../../shared/src/eom.c:170: cds_tb = cds_table[CDS_EYECHECK];
   12B8 90 00 E8           2506 	mov	dptr,#(_cds_table + 0x000a)
   12BB E4                 2507 	clr	a
   12BC 93                 2508 	movc	a,@a+dptr
   12BD FC                 2509 	mov	r4,a
   12BE A3                 2510 	inc	dptr
   12BF E4                 2511 	clr	a
   12C0 93                 2512 	movc	a,@a+dptr
   12C1 FD                 2513 	mov	r5,a
   12C2 90 61 74           2514 	mov	dptr,#_CDS_READ_MISC1
   12C5 EC                 2515 	mov	a,r4
   12C6 F0                 2516 	movx	@dptr,a
   12C7 A3                 2517 	inc	dptr
   12C8 ED                 2518 	mov	a,r5
   12C9 F0                 2519 	movx	@dptr,a
                           2520 ;	../../shared/src/eom.c:171: cdr_dfe_scheme();
   12CA C0 02              2521 	push	ar2
   12CC C0 03              2522 	push	ar3
   12CE 78 68              2523 	mov	r0,#_cdr_dfe_scheme
   12D0 79 95              2524 	mov	r1,#(_cdr_dfe_scheme >> 8)
   12D2 7A 01              2525 	mov	r2,#(_cdr_dfe_scheme >> 16)
   12D4 12 00 B3           2526 	lcall	__sdcc_banked_call
   12D7 D0 03              2527 	pop	ar3
   12D9 D0 02              2528 	pop	ar2
                           2529 ;	../../shared/src/eom.c:173: for (i =0; i<2; i++)
   12DB A8 18              2530 	mov	r0,_bp
   12DD 08                 2531 	inc	r0
   12DE 76 00              2532 	mov	@r0,#0x00
   12E0                    2533 00133$:
   12E0 A8 18              2534 	mov	r0,_bp
   12E2 08                 2535 	inc	r0
   12E3 B6 02 00           2536 	cjne	@r0,#0x02,00185$
   12E6                    2537 00185$:
   12E6 40 03              2538 	jc	00186$
   12E8 02 14 3D           2539 	ljmp	00136$
   12EB                    2540 00186$:
                           2541 ;	../../shared/src/eom.c:176: lnx_EOM_ERR_P_CNT_LANE_39_32 = lnx_EOM_ERR_P_CNT_LANE_39_32 + sum_32((uint32_t*)&ESM_ERR_P_CNT_LOW_LANE, (uint32_t*)((&EOM_ERR_REG0)+i*2));
   12EB C0 02              2542 	push	ar2
   12ED C0 03              2543 	push	ar3
   12EF 90 60 B0           2544 	mov	dptr,#_ESM_ERR_POP_CNT_HIGH_LANE
   12F2 E0                 2545 	movx	a,@dptr
   12F3 FD                 2546 	mov	r5,a
   12F4 A8 18              2547 	mov	r0,_bp
   12F6 08                 2548 	inc	r0
   12F7 E6                 2549 	mov	a,@r0
   12F8 75 F0 02           2550 	mov	b,#0x02
   12FB A4                 2551 	mul	ab
   12FC FE                 2552 	mov	r6,a
   12FD E5 F0              2553 	mov	a,b
   12FF CE                 2554 	xch	a,r6
   1300 25 E0              2555 	add	a,acc
   1302 CE                 2556 	xch	a,r6
   1303 33                 2557 	rlc	a
   1304 CE                 2558 	xch	a,r6
   1305 25 E0              2559 	add	a,acc
   1307 CE                 2560 	xch	a,r6
   1308 33                 2561 	rlc	a
   1309 FF                 2562 	mov	r7,a
   130A EE                 2563 	mov	a,r6
   130B 24 70              2564 	add	a,#_EOM_ERR_REG0
   130D FA                 2565 	mov	r2,a
   130E EF                 2566 	mov	a,r7
   130F 34 25              2567 	addc	a,#(_EOM_ERR_REG0 >> 8)
   1311 FB                 2568 	mov	r3,a
   1312 7C 00              2569 	mov	r4,#0x00
   1314 C0 03              2570 	push	ar3
   1316 C0 05              2571 	push	ar5
   1318 C0 06              2572 	push	ar6
   131A C0 07              2573 	push	ar7
   131C C0 02              2574 	push	ar2
   131E C0 03              2575 	push	ar3
   1320 C0 04              2576 	push	ar4
   1322 90 60 AC           2577 	mov	dptr,#_ESM_ERR_P_CNT_LOW_LANE
   1325 75 F0 00           2578 	mov	b,#0x00
   1328 12 15 71           2579 	lcall	_sum_32
   132B AA 82              2580 	mov	r2,dpl
   132D 15 81              2581 	dec	sp
   132F 15 81              2582 	dec	sp
   1331 15 81              2583 	dec	sp
   1333 D0 07              2584 	pop	ar7
   1335 D0 06              2585 	pop	ar6
   1337 D0 05              2586 	pop	ar5
   1339 D0 03              2587 	pop	ar3
   133B EA                 2588 	mov	a,r2
   133C 2D                 2589 	add	a,r5
   133D 90 60 B0           2590 	mov	dptr,#_ESM_ERR_POP_CNT_HIGH_LANE
   1340 F0                 2591 	movx	@dptr,a
                           2592 ;	../../shared/src/eom.c:177: lnx_EOM_POP_P_CNT_LANE_39_32 = lnx_EOM_POP_P_CNT_LANE_39_32 + sum_32((uint32_t*)&ESM_POP_P_CNT_LOW_LANE, (uint32_t*)((&EOM_VLD_REG0)+i*2));
   1341 90 60 B2           2593 	mov	dptr,#(_ESM_ERR_POP_CNT_HIGH_LANE + 0x0002)
   1344 E0                 2594 	movx	a,@dptr
   1345 FA                 2595 	mov	r2,a
   1346 EE                 2596 	mov	a,r6
   1347 24 60              2597 	add	a,#_EOM_VLD_REG0
   1349 FB                 2598 	mov	r3,a
   134A EF                 2599 	mov	a,r7
   134B 34 25              2600 	addc	a,#(_EOM_VLD_REG0 >> 8)
   134D FC                 2601 	mov	r4,a
   134E 7D 00              2602 	mov	r5,#0x00
   1350 C0 02              2603 	push	ar2
   1352 C0 06              2604 	push	ar6
   1354 C0 07              2605 	push	ar7
   1356 C0 03              2606 	push	ar3
   1358 C0 04              2607 	push	ar4
   135A C0 05              2608 	push	ar5
   135C 90 60 A8           2609 	mov	dptr,#_ESM_POP_P_CNT_LOW_LANE
   135F 75 F0 00           2610 	mov	b,#0x00
   1362 12 15 71           2611 	lcall	_sum_32
   1365 AB 82              2612 	mov	r3,dpl
   1367 15 81              2613 	dec	sp
   1369 15 81              2614 	dec	sp
   136B 15 81              2615 	dec	sp
   136D D0 07              2616 	pop	ar7
   136F D0 06              2617 	pop	ar6
   1371 D0 02              2618 	pop	ar2
   1373 EB                 2619 	mov	a,r3
   1374 2A                 2620 	add	a,r2
                           2621 ;	../../shared/src/eom.c:178: lnx_EOM_POP_P_CNT_LANE_39_32 = lnx_EOM_POP_P_CNT_LANE_39_32 + *((uint8_t*)((&EOM_VLD_REG4) + i + 1));
   1375 90 60 B2           2622 	mov	dptr,#(_ESM_ERR_POP_CNT_HIGH_LANE + 0x0002)
   1378 F0                 2623 	movx	@dptr,a
   1379 E0                 2624 	movx	a,@dptr
   137A FC                 2625 	mov	r4,a
   137B A8 18              2626 	mov	r0,_bp
   137D 08                 2627 	inc	r0
   137E E5 18              2628 	mov	a,_bp
   1380 24 06              2629 	add	a,#0x06
   1382 F9                 2630 	mov	r1,a
   1383 E6                 2631 	mov	a,@r0
   1384 F7                 2632 	mov	@r1,a
   1385 E4                 2633 	clr	a
   1386 C7                 2634 	xch	a,@r1
   1387 25 E0              2635 	add	a,acc
   1389 C7                 2636 	xch	a,@r1
   138A 33                 2637 	rlc	a
   138B C7                 2638 	xch	a,@r1
   138C 25 E0              2639 	add	a,acc
   138E C7                 2640 	xch	a,@r1
   138F 33                 2641 	rlc	a
   1390 09                 2642 	inc	r1
   1391 F7                 2643 	mov	@r1,a
   1392 E5 18              2644 	mov	a,_bp
   1394 24 06              2645 	add	a,#0x06
   1396 F8                 2646 	mov	r0,a
   1397 E6                 2647 	mov	a,@r0
   1398 24 F0              2648 	add	a,#_EOM_VLD_REG4
   139A FD                 2649 	mov	r5,a
   139B 08                 2650 	inc	r0
   139C E6                 2651 	mov	a,@r0
   139D 34 25              2652 	addc	a,#(_EOM_VLD_REG4 >> 8)
   139F FA                 2653 	mov	r2,a
   13A0 8D 82              2654 	mov	dpl,r5
   13A2 8A 83              2655 	mov	dph,r2
   13A4 A3                 2656 	inc	dptr
   13A5 A3                 2657 	inc	dptr
   13A6 A3                 2658 	inc	dptr
   13A7 A3                 2659 	inc	dptr
   13A8 E0                 2660 	movx	a,@dptr
   13A9 2C                 2661 	add	a,r4
   13AA 90 60 B2           2662 	mov	dptr,#(_ESM_ERR_POP_CNT_HIGH_LANE + 0x0002)
   13AD F0                 2663 	movx	@dptr,a
                           2664 ;	../../shared/src/eom.c:181: lnx_EOM_ERR_N_CNT_LANE_39_32 = lnx_EOM_ERR_N_CNT_LANE_39_32 + sum_32((uint32_t*)&ESM_ERR_N_CNT_LOW_LANE, (uint32_t*)((&EOM_ERR_REG1)+i*2));
   13AE 90 60 B1           2665 	mov	dptr,#(_ESM_ERR_POP_CNT_HIGH_LANE + 0x0001)
   13B1 E0                 2666 	movx	a,@dptr
   13B2 FC                 2667 	mov	r4,a
   13B3 EE                 2668 	mov	a,r6
   13B4 24 74              2669 	add	a,#_EOM_ERR_REG1
   13B6 FD                 2670 	mov	r5,a
   13B7 EF                 2671 	mov	a,r7
   13B8 34 25              2672 	addc	a,#(_EOM_ERR_REG1 >> 8)
   13BA FA                 2673 	mov	r2,a
   13BB 7B 00              2674 	mov	r3,#0x00
   13BD C0 03              2675 	push	ar3
   13BF C0 04              2676 	push	ar4
   13C1 C0 06              2677 	push	ar6
   13C3 C0 07              2678 	push	ar7
   13C5 C0 05              2679 	push	ar5
   13C7 C0 02              2680 	push	ar2
   13C9 C0 03              2681 	push	ar3
   13CB 90 60 E0           2682 	mov	dptr,#_ESM_ERR_N_CNT_LOW_LANE
   13CE 75 F0 00           2683 	mov	b,#0x00
   13D1 12 15 71           2684 	lcall	_sum_32
   13D4 AA 82              2685 	mov	r2,dpl
   13D6 15 81              2686 	dec	sp
   13D8 15 81              2687 	dec	sp
   13DA 15 81              2688 	dec	sp
   13DC D0 07              2689 	pop	ar7
   13DE D0 06              2690 	pop	ar6
   13E0 D0 04              2691 	pop	ar4
   13E2 D0 03              2692 	pop	ar3
   13E4 EA                 2693 	mov	a,r2
   13E5 2C                 2694 	add	a,r4
   13E6 90 60 B1           2695 	mov	dptr,#(_ESM_ERR_POP_CNT_HIGH_LANE + 0x0001)
   13E9 F0                 2696 	movx	@dptr,a
                           2697 ;	../../shared/src/eom.c:182: lnx_EOM_POP_N_CNT_LANE_39_32 = lnx_EOM_POP_N_CNT_LANE_39_32 + sum_32((uint32_t*)&ESM_POP_N_CNT_LOW_LANE, (uint32_t*)((&EOM_VLD_REG1)+i*2));
   13EA 90 60 B3           2698 	mov	dptr,#(_ESM_ERR_POP_CNT_HIGH_LANE + 0x0003)
   13ED E0                 2699 	movx	a,@dptr
   13EE FA                 2700 	mov	r2,a
   13EF EE                 2701 	mov	a,r6
   13F0 24 64              2702 	add	a,#_EOM_VLD_REG1
   13F2 FE                 2703 	mov	r6,a
   13F3 EF                 2704 	mov	a,r7
   13F4 34 25              2705 	addc	a,#(_EOM_VLD_REG1 >> 8)
   13F6 FF                 2706 	mov	r7,a
   13F7 7B 00              2707 	mov	r3,#0x00
   13F9 C0 02              2708 	push	ar2
   13FB C0 06              2709 	push	ar6
   13FD C0 07              2710 	push	ar7
   13FF C0 03              2711 	push	ar3
   1401 90 60 DC           2712 	mov	dptr,#_ESM_POP_N_CNT_LOW_LANE
   1404 75 F0 00           2713 	mov	b,#0x00
   1407 12 15 71           2714 	lcall	_sum_32
   140A AB 82              2715 	mov	r3,dpl
   140C 15 81              2716 	dec	sp
   140E 15 81              2717 	dec	sp
   1410 15 81              2718 	dec	sp
   1412 D0 02              2719 	pop	ar2
   1414 EB                 2720 	mov	a,r3
   1415 2A                 2721 	add	a,r2
                           2722 ;	../../shared/src/eom.c:183: lnx_EOM_POP_N_CNT_LANE_39_32 = lnx_EOM_POP_N_CNT_LANE_39_32 + *((uint8_t*)((&EOM_VLD_REG4) + i));
   1416 90 60 B3           2723 	mov	dptr,#(_ESM_ERR_POP_CNT_HIGH_LANE + 0x0003)
   1419 F0                 2724 	movx	@dptr,a
   141A E0                 2725 	movx	a,@dptr
   141B FA                 2726 	mov	r2,a
   141C E5 18              2727 	mov	a,_bp
   141E 24 06              2728 	add	a,#0x06
   1420 F8                 2729 	mov	r0,a
   1421 E6                 2730 	mov	a,@r0
   1422 24 F0              2731 	add	a,#_EOM_VLD_REG4
   1424 F5 82              2732 	mov	dpl,a
   1426 08                 2733 	inc	r0
   1427 E6                 2734 	mov	a,@r0
   1428 34 25              2735 	addc	a,#(_EOM_VLD_REG4 >> 8)
   142A F5 83              2736 	mov	dph,a
   142C E0                 2737 	movx	a,@dptr
   142D 2A                 2738 	add	a,r2
   142E 90 60 B3           2739 	mov	dptr,#(_ESM_ERR_POP_CNT_HIGH_LANE + 0x0003)
   1431 F0                 2740 	movx	@dptr,a
                           2741 ;	../../shared/src/eom.c:173: for (i =0; i<2; i++)
   1432 A8 18              2742 	mov	r0,_bp
   1434 08                 2743 	inc	r0
   1435 06                 2744 	inc	@r0
   1436 D0 03              2745 	pop	ar3
   1438 D0 02              2746 	pop	ar2
   143A 02 12 E0           2747 	ljmp	00133$
   143D                    2748 00136$:
                           2749 ;	../../shared/src/eom.c:186: eom_pop_cnt_p_shifted = (uint32_t)lnx_EOM_POP_P_CNT_LANE_39_32;
   143D 90 60 B2           2750 	mov	dptr,#(_ESM_ERR_POP_CNT_HIGH_LANE + 0x0002)
   1440 E0                 2751 	movx	a,@dptr
   1441 FC                 2752 	mov	r4,a
   1442 A8 18              2753 	mov	r0,_bp
   1444 08                 2754 	inc	r0
   1445 08                 2755 	inc	r0
   1446 A6 04              2756 	mov	@r0,ar4
   1448 08                 2757 	inc	r0
   1449 76 00              2758 	mov	@r0,#0x00
   144B 08                 2759 	inc	r0
   144C 76 00              2760 	mov	@r0,#0x00
   144E 08                 2761 	inc	r0
   144F 76 00              2762 	mov	@r0,#0x00
                           2763 ;	../../shared/src/eom.c:187: eom_pop_cnt_p_shifted = eom_pop_cnt_p_shifted << 24;
   1451 A8 18              2764 	mov	r0,_bp
   1453 08                 2765 	inc	r0
   1454 08                 2766 	inc	r0
   1455 E6                 2767 	mov	a,@r0
   1456 08                 2768 	inc	r0
   1457 08                 2769 	inc	r0
   1458 08                 2770 	inc	r0
   1459 F6                 2771 	mov	@r0,a
   145A 18                 2772 	dec	r0
   145B 18                 2773 	dec	r0
   145C 18                 2774 	dec	r0
   145D 76 00              2775 	mov	@r0,#0x00
   145F 08                 2776 	inc	r0
   1460 76 00              2777 	mov	@r0,#0x00
   1462 08                 2778 	inc	r0
   1463 76 00              2779 	mov	@r0,#0x00
                           2780 ;	../../shared/src/eom.c:188: eom_pop_cnt_p_shifted = eom_pop_cnt_p_shifted | (ESM_POP_P_CNT_LOW_LANE.VAL >> 8);
   1465 90 60 A8           2781 	mov	dptr,#_ESM_POP_P_CNT_LOW_LANE
   1468 E0                 2782 	movx	a,@dptr
   1469 A3                 2783 	inc	dptr
   146A E0                 2784 	movx	a,@dptr
   146B FD                 2785 	mov	r5,a
   146C A3                 2786 	inc	dptr
   146D E0                 2787 	movx	a,@dptr
   146E FE                 2788 	mov	r6,a
   146F A3                 2789 	inc	dptr
   1470 E0                 2790 	movx	a,@dptr
   1471 FF                 2791 	mov	r7,a
   1472 8D 04              2792 	mov	ar4,r5
   1474 8E 05              2793 	mov	ar5,r6
   1476 8F 06              2794 	mov	ar6,r7
   1478 7F 00              2795 	mov	r7,#0x00
   147A A8 18              2796 	mov	r0,_bp
   147C 08                 2797 	inc	r0
   147D 08                 2798 	inc	r0
   147E EC                 2799 	mov	a,r4
   147F 46                 2800 	orl	a,@r0
   1480 F6                 2801 	mov	@r0,a
   1481 ED                 2802 	mov	a,r5
   1482 08                 2803 	inc	r0
   1483 46                 2804 	orl	a,@r0
   1484 F6                 2805 	mov	@r0,a
   1485 EE                 2806 	mov	a,r6
   1486 08                 2807 	inc	r0
   1487 46                 2808 	orl	a,@r0
   1488 F6                 2809 	mov	@r0,a
   1489 EF                 2810 	mov	a,r7
   148A 08                 2811 	inc	r0
   148B 46                 2812 	orl	a,@r0
   148C F6                 2813 	mov	@r0,a
                           2814 ;	../../shared/src/eom.c:195: }while(eom_pop_cnt_p_shifted < eom_pop_threhold[ checked_val - 3 ]);// || eom_pop_cnt_n_shifted < eom_pop_threhold[ checked_val - 3 ]); // to save code size only use p cnt
   148D 8A 82              2815 	mov	dpl,r2
   148F 8B 83              2816 	mov	dph,r3
   1491 E4                 2817 	clr	a
   1492 93                 2818 	movc	a,@a+dptr
   1493 FC                 2819 	mov	r4,a
   1494 A3                 2820 	inc	dptr
   1495 E4                 2821 	clr	a
   1496 93                 2822 	movc	a,@a+dptr
   1497 FD                 2823 	mov	r5,a
   1498 A3                 2824 	inc	dptr
   1499 E4                 2825 	clr	a
   149A 93                 2826 	movc	a,@a+dptr
   149B FE                 2827 	mov	r6,a
   149C A3                 2828 	inc	dptr
   149D E4                 2829 	clr	a
   149E 93                 2830 	movc	a,@a+dptr
   149F FF                 2831 	mov	r7,a
   14A0 A8 18              2832 	mov	r0,_bp
   14A2 08                 2833 	inc	r0
   14A3 08                 2834 	inc	r0
   14A4 C3                 2835 	clr	c
   14A5 E6                 2836 	mov	a,@r0
   14A6 9C                 2837 	subb	a,r4
   14A7 08                 2838 	inc	r0
   14A8 E6                 2839 	mov	a,@r0
   14A9 9D                 2840 	subb	a,r5
   14AA 08                 2841 	inc	r0
   14AB E6                 2842 	mov	a,@r0
   14AC 9E                 2843 	subb	a,r6
   14AD 08                 2844 	inc	r0
   14AE E6                 2845 	mov	a,@r0
   14AF 9F                 2846 	subb	a,r7
   14B0 50 03              2847 	jnc	00187$
   14B2 02 12 B8           2848 	ljmp	00121$
   14B5                    2849 00187$:
                           2850 ;	../../shared/src/eom.c:196: lnx_EOM_DFE_CALL_LANE = 0;
   14B5 90 60 38           2851 	mov	dptr,#_DFE_CONTROL_1
   14B8 E0                 2852 	movx	a,@dptr
   14B9 54 EF              2853 	anl	a,#0xef
   14BB F0                 2854 	movx	@dptr,a
                           2855 ;	../../shared/src/eom.c:204: return;
   14BC 02 15 6B           2856 	ljmp	00137$
   14BF                    2857 00125$:
                           2858 ;	../../shared/src/eom.c:207: if( eom_ext_mode==1 && lnx_ESM_EN_LANE==0 )
   14BF 90 67 25           2859 	mov	dptr,#_eom_ext_mode
   14C2 E0                 2860 	movx	a,@dptr
   14C3 FA                 2861 	mov	r2,a
   14C4 BA 01 02           2862 	cjne	r2,#0x01,00188$
   14C7 80 03              2863 	sjmp	00189$
   14C9                    2864 00188$:
   14C9 02 15 6B           2865 	ljmp	00137$
   14CC                    2866 00189$:
   14CC 90 60 5A           2867 	mov	dptr,#(_TRAIN_CONTROL_2 + 0x0002)
   14CF E0                 2868 	movx	a,@dptr
   14D0 30 E2 03           2869 	jnb	acc.2,00190$
   14D3 02 15 6B           2870 	ljmp	00137$
   14D6                    2871 00190$:
                           2872 ;	../../shared/src/eom.c:210: eye_check_en = 0;
   14D6 90 25 80           2873 	mov	dptr,#_EOM_REG0
   14D9 E0                 2874 	movx	a,@dptr
   14DA 54 FE              2875 	anl	a,#0xfe
   14DC F0                 2876 	movx	@dptr,a
                           2877 ;	../../shared/src/eom.c:211: lnx_EOM_READY_LANE = 0;
   14DD 90 60 38           2878 	mov	dptr,#_DFE_CONTROL_1
   14E0 E0                 2879 	movx	a,@dptr
   14E1 54 F7              2880 	anl	a,#0xf7
   14E3 F0                 2881 	movx	@dptr,a
                           2882 ;	../../shared/src/eom.c:212: lnx_EOM_DFE_CALL_LANE = 0;
   14E4 90 60 38           2883 	mov	dptr,#_DFE_CONTROL_1
   14E7 E0                 2884 	movx	a,@dptr
   14E8 54 EF              2885 	anl	a,#0xef
   14EA F0                 2886 	movx	@dptr,a
                           2887 ;	../../shared/src/eom.c:213: eom_ext_mode = 0;
   14EB 90 67 25           2888 	mov	dptr,#_eom_ext_mode
   14EE E4                 2889 	clr	a
   14EF F0                 2890 	movx	@dptr,a
                           2891 ;	../../shared/src/eom.c:216: reg_EOM_EN_S_LANE = save_eom_en_s;
   14F0 90 67 22           2892 	mov	dptr,#_save_eom_en_s
   14F3 E0                 2893 	movx	a,@dptr
   14F4 90 00 58           2894 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_22
   14F7 13                 2895 	rrc	a
   14F8 E0                 2896 	movx	a,@dptr
   14F9 92 E6              2897 	mov	acc.6,c
   14FB F0                 2898 	movx	@dptr,a
                           2899 ;	../../shared/src/eom.c:217: reg_EOM_EN_D_LANE = save_eom_en_d;
   14FC 90 67 23           2900 	mov	dptr,#_save_eom_en_d
   14FF E0                 2901 	movx	a,@dptr
   1500 90 00 58           2902 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_22
   1503 13                 2903 	rrc	a
   1504 E0                 2904 	movx	a,@dptr
   1505 92 E5              2905 	mov	acc.5,c
   1507 F0                 2906 	movx	@dptr,a
                           2907 ;	../../shared/src/eom.c:220: eom_align_cal(); 
   1508 78 0C              2908 	mov	r0,#_eom_align_cal
   150A 79 B0              2909 	mov	r1,#(_eom_align_cal >> 8)
   150C 7A 02              2910 	mov	r2,#(_eom_align_cal >> 16)
   150E 12 00 B3           2911 	lcall	__sdcc_banked_call
                           2912 ;	../../shared/src/eom.c:225: reg_PU_F1P_S_O_LANE = save_pu_f1p_s_o; 
   1511 90 67 1D           2913 	mov	dptr,#_save_pu_f1p_s_o
   1514 E0                 2914 	movx	a,@dptr
   1515 90 00 60           2915 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_24
   1518 13                 2916 	rrc	a
   1519 E0                 2917 	movx	a,@dptr
   151A 92 E5              2918 	mov	acc.5,c
   151C F0                 2919 	movx	@dptr,a
                           2920 ;	../../shared/src/eom.c:226: reg_PU_F1P_S_E_LANE = save_pu_f1p_s_e;
   151D 90 67 1E           2921 	mov	dptr,#_save_pu_f1p_s_e
   1520 E0                 2922 	movx	a,@dptr
   1521 90 00 5C           2923 	mov	dptr,#_UPHY14_TRX_ANAREG_BOT_23
   1524 13                 2924 	rrc	a
   1525 E0                 2925 	movx	a,@dptr
   1526 92 E1              2926 	mov	acc.1,c
   1528 F0                 2927 	movx	@dptr,a
                           2928 ;	../../shared/src/eom.c:227: reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = save_dfe_adapt_splr; 
   1529 90 67 1F           2929 	mov	dptr,#_save_dfe_adapt_splr
   152C E0                 2930 	movx	a,@dptr
   152D 90 24 00           2931 	mov	dptr,#_DFE_CTRL_REG0
   1530 C4                 2932 	swap	a
   1531 54 F0              2933 	anl	a,#(0xf0&0xf0)
   1533 F5 F0              2934 	mov	b,a
   1535 E0                 2935 	movx	a,@dptr
   1536 54 0F              2936 	anl	a,#0x0f
   1538 45 F0              2937 	orl	a,b
   153A F0                 2938 	movx	@dptr,a
                           2939 ;	../../shared/src/eom.c:230: reg_DFE_EN_LANE = save_dfe_en;
   153B 90 67 24           2940 	mov	dptr,#_save_dfe_en
   153E E0                 2941 	movx	a,@dptr
   153F 90 24 10           2942 	mov	dptr,#_RX_EQ_CLK_CTRL
   1542 13                 2943 	rrc	a
   1543 E0                 2944 	movx	a,@dptr
   1544 92 E4              2945 	mov	acc.4,c
   1546 F0                 2946 	movx	@dptr,a
                           2947 ;	../../shared/src/eom.c:231: dfe_dis = save_dfe_dis;
   1547 90 67 9A           2948 	mov	dptr,#_save_dfe_dis
   154A E0                 2949 	movx	a,@dptr
   154B 90 66 F7           2950 	mov	dptr,#_dfe_dis
   154E F0                 2951 	movx	@dptr,a
                           2952 ;	../../shared/src/eom.c:236: dfe_load_type(2);
   154F 75 82 02           2953 	mov	dpl,#0x02
   1552 78 97              2954 	mov	r0,#_dfe_load_type
   1554 79 8B              2955 	mov	r1,#(_dfe_load_type >> 8)
   1556 7A 02              2956 	mov	r2,#(_dfe_load_type >> 16)
   1558 12 00 B3           2957 	lcall	__sdcc_banked_call
                           2958 ;	../../shared/src/eom.c:239: if(lnx_PHASE_ADAPT_ENABLE_LANE==0) 
   155B 90 60 4C           2959 	mov	dptr,#_DFE_CONTROL_5
   155E E0                 2960 	movx	a,@dptr
   155F 20 E5 09           2961 	jb	acc.5,00137$
                           2962 ;	../../shared/src/eom.c:240: dfe_hardware_cont_run();
   1562 78 89              2963 	mov	r0,#_dfe_hardware_cont_run
   1564 79 91              2964 	mov	r1,#(_dfe_hardware_cont_run >> 8)
   1566 7A 02              2965 	mov	r2,#(_dfe_hardware_cont_run >> 16)
   1568 12 00 B3           2966 	lcall	__sdcc_banked_call
   156B                    2967 00137$:
   156B 85 18 81           2968 	mov	sp,_bp
   156E D0 18              2969 	pop	_bp
   1570 22                 2970 	ret
                           2971 ;------------------------------------------------------------
                           2972 ;Allocation info for local variables in function 'sum_32'
                           2973 ;------------------------------------------------------------
                           2974 ;cnt                       Allocated to stack - offset -5
                           2975 ;accumulator               Allocated to stack - offset 1
                           2976 ;sloc0                     Allocated to stack - offset 4
                           2977 ;sloc1                     Allocated to stack - offset 8
                           2978 ;------------------------------------------------------------
                           2979 ;	../../shared/src/eom.c:245: uint8_t sum_32(uint32_t * accumulator, uint32_t * cnt) {
                           2980 ;	-----------------------------------------
                           2981 ;	 function sum_32
                           2982 ;	-----------------------------------------
   1571                    2983 _sum_32:
   1571 C0 18              2984 	push	_bp
   1573 85 81 18           2985 	mov	_bp,sp
   1576 C0 82              2986 	push	dpl
   1578 C0 83              2987 	push	dph
   157A C0 F0              2988 	push	b
   157C E5 81              2989 	mov	a,sp
   157E 24 0B              2990 	add	a,#0x0b
   1580 F5 81              2991 	mov	sp,a
                           2992 ;	../../shared/src/eom.c:246: *accumulator = *accumulator + *cnt;
   1582 A8 18              2993 	mov	r0,_bp
   1584 08                 2994 	inc	r0
   1585 86 82              2995 	mov	dpl,@r0
   1587 08                 2996 	inc	r0
   1588 86 83              2997 	mov	dph,@r0
   158A 08                 2998 	inc	r0
   158B 86 F0              2999 	mov	b,@r0
   158D E5 18              3000 	mov	a,_bp
   158F 24 04              3001 	add	a,#0x04
   1591 F9                 3002 	mov	r1,a
   1592 12 7D C8           3003 	lcall	__gptrget
   1595 F7                 3004 	mov	@r1,a
   1596 A3                 3005 	inc	dptr
   1597 12 7D C8           3006 	lcall	__gptrget
   159A 09                 3007 	inc	r1
   159B F7                 3008 	mov	@r1,a
   159C A3                 3009 	inc	dptr
   159D 12 7D C8           3010 	lcall	__gptrget
   15A0 09                 3011 	inc	r1
   15A1 F7                 3012 	mov	@r1,a
   15A2 A3                 3013 	inc	dptr
   15A3 12 7D C8           3014 	lcall	__gptrget
   15A6 09                 3015 	inc	r1
   15A7 F7                 3016 	mov	@r1,a
   15A8 E5 18              3017 	mov	a,_bp
   15AA 24 FB              3018 	add	a,#0xfb
   15AC F8                 3019 	mov	r0,a
   15AD 86 03              3020 	mov	ar3,@r0
   15AF 08                 3021 	inc	r0
   15B0 86 04              3022 	mov	ar4,@r0
   15B2 08                 3023 	inc	r0
   15B3 86 02              3024 	mov	ar2,@r0
   15B5 8B 82              3025 	mov	dpl,r3
   15B7 8C 83              3026 	mov	dph,r4
   15B9 8A F0              3027 	mov	b,r2
   15BB E5 18              3028 	mov	a,_bp
   15BD 24 08              3029 	add	a,#0x08
   15BF F8                 3030 	mov	r0,a
   15C0 12 7D C8           3031 	lcall	__gptrget
   15C3 F6                 3032 	mov	@r0,a
   15C4 A3                 3033 	inc	dptr
   15C5 12 7D C8           3034 	lcall	__gptrget
   15C8 08                 3035 	inc	r0
   15C9 F6                 3036 	mov	@r0,a
   15CA A3                 3037 	inc	dptr
   15CB 12 7D C8           3038 	lcall	__gptrget
   15CE 08                 3039 	inc	r0
   15CF F6                 3040 	mov	@r0,a
   15D0 A3                 3041 	inc	dptr
   15D1 12 7D C8           3042 	lcall	__gptrget
   15D4 08                 3043 	inc	r0
   15D5 F6                 3044 	mov	@r0,a
   15D6 E5 18              3045 	mov	a,_bp
   15D8 24 04              3046 	add	a,#0x04
   15DA F8                 3047 	mov	r0,a
   15DB E5 18              3048 	mov	a,_bp
   15DD 24 08              3049 	add	a,#0x08
   15DF F9                 3050 	mov	r1,a
   15E0 E7                 3051 	mov	a,@r1
   15E1 26                 3052 	add	a,@r0
   15E2 FE                 3053 	mov	r6,a
   15E3 09                 3054 	inc	r1
   15E4 E7                 3055 	mov	a,@r1
   15E5 08                 3056 	inc	r0
   15E6 36                 3057 	addc	a,@r0
   15E7 FF                 3058 	mov	r7,a
   15E8 09                 3059 	inc	r1
   15E9 E7                 3060 	mov	a,@r1
   15EA 08                 3061 	inc	r0
   15EB 36                 3062 	addc	a,@r0
   15EC FA                 3063 	mov	r2,a
   15ED 09                 3064 	inc	r1
   15EE E7                 3065 	mov	a,@r1
   15EF 08                 3066 	inc	r0
   15F0 36                 3067 	addc	a,@r0
   15F1 FB                 3068 	mov	r3,a
   15F2 A8 18              3069 	mov	r0,_bp
   15F4 08                 3070 	inc	r0
   15F5 86 82              3071 	mov	dpl,@r0
   15F7 08                 3072 	inc	r0
   15F8 86 83              3073 	mov	dph,@r0
   15FA 08                 3074 	inc	r0
   15FB 86 F0              3075 	mov	b,@r0
   15FD EE                 3076 	mov	a,r6
   15FE 12 7C CA           3077 	lcall	__gptrput
   1601 A3                 3078 	inc	dptr
   1602 EF                 3079 	mov	a,r7
   1603 12 7C CA           3080 	lcall	__gptrput
   1606 A3                 3081 	inc	dptr
   1607 EA                 3082 	mov	a,r2
   1608 12 7C CA           3083 	lcall	__gptrput
   160B A3                 3084 	inc	dptr
   160C EB                 3085 	mov	a,r3
   160D 12 7C CA           3086 	lcall	__gptrput
                           3087 ;	../../shared/src/eom.c:247: if (*accumulator < *cnt)    //overflow
   1610 E5 18              3088 	mov	a,_bp
   1612 24 08              3089 	add	a,#0x08
   1614 F8                 3090 	mov	r0,a
   1615 C3                 3091 	clr	c
   1616 EE                 3092 	mov	a,r6
   1617 96                 3093 	subb	a,@r0
   1618 EF                 3094 	mov	a,r7
   1619 08                 3095 	inc	r0
   161A 96                 3096 	subb	a,@r0
   161B EA                 3097 	mov	a,r2
   161C 08                 3098 	inc	r0
   161D 96                 3099 	subb	a,@r0
   161E EB                 3100 	mov	a,r3
   161F 08                 3101 	inc	r0
   1620 96                 3102 	subb	a,@r0
   1621 50 05              3103 	jnc	00102$
                           3104 ;	../../shared/src/eom.c:248: return 1;
   1623 75 82 01           3105 	mov	dpl,#0x01
   1626 80 03              3106 	sjmp	00104$
   1628                    3107 00102$:
                           3108 ;	../../shared/src/eom.c:250: return 0;
   1628 75 82 00           3109 	mov	dpl,#0x00
   162B                    3110 00104$:
   162B 85 18 81           3111 	mov	sp,_bp
   162E D0 18              3112 	pop	_bp
   1630 22                 3113 	ret
                           3114 	.area CSEG    (CODE)
                           3115 	.area CSEG    (CODE)
   1631                    3116 _eom_pop_threhold:
   1631 04 00 00 00        3117 	.byte #0x04,#0x00,#0x00,#0x00	; 4
   1635 28 00 00 00        3118 	.byte #0x28,#0x00,#0x00,#0x00	; 40
   1639 87 01 00 00        3119 	.byte #0x87,#0x01,#0x00,#0x00	; 391
   163D 43 0F 00 00        3120 	.byte #0x43,#0x0F,#0x00,#0x00	; 3907
   1641 96 98 00 00        3121 	.byte #0x96,#0x98,#0x00,#0x00	; 39062
   1645 E2 F5 05 00        3122 	.byte #0xE2,#0xF5,#0x05,#0x00	; 390626
   1649 CB 9A 3B 00        3123 	.byte #0xCB,#0x9A,#0x3B,#0x00	; 3906251
   164D E5 0B 54 02        3124 	.byte #0xE5,#0x0B,#0x54,#0x02	; 39062501
   1651 E8 76 48 17        3125 	.byte #0xE8,#0x76,#0x48,#0x17	; 390625000
   1655 11 A5 D4 E8        3126 	.byte #0x11,#0xA5,#0xD4,#0xE8	; 3906250001
                           3127 	.area CABS    (ABS,CODE)
